// *******************************************************************************************
// This file is a part of Whisper reads mapper.
// The homepage of the project is http://sun.aei.polsl.pl/REFRESH/whisper
// 
// Authors: Sebastian Deorowicz, Agnieszka Debudaj-Grabysz, Adam Gudys
// 
// Version : 1.1
// Date    : 2018-07-10
// License : GNU GPL 3
// *******************************************************************************************
// The source codes are based on codes written by Dennis and published:
// http://allmybrain.com/2008/06/10/timing-cc-code-on-linux/
// *******************************************************************************************


#ifdef WIN32
#include <windows.h>
#endif

//#include <cstdio> 
#include "timer.h"

#ifdef WIN32
// ************************************************************************************
// CStopWatch
// ************************************************************************************

// ************************************************************************************
double CStopWatch::LIToSecs( LARGE_INTEGER & L)
{
	return ((double)L.QuadPart /(double)frequency.QuadPart);
}

// ************************************************************************************
CStopWatch::CStopWatch()
{
	timer.start.QuadPart=0;
	timer.stop.QuadPart=0;	

	QueryPerformanceFrequency( &frequency );
}

// ************************************************************************************
void CStopWatch::StartTimer( )
{
    QueryPerformanceCounter(&timer.start);
}

// ************************************************************************************
void CStopWatch::StopTimer( )
{
    QueryPerformanceCounter(&timer.stop);
}

// ************************************************************************************
double CStopWatch::GetElapsedTime()
{
	LARGE_INTEGER time;
	time.QuadPart = timer.stop.QuadPart - timer.start.QuadPart;
    return LIToSecs(time);
}

// ************************************************************************************
// CThreadWatch
// ************************************************************************************

// ************************************************************************************
double CThreadWatch::LIToSecs( LARGE_INTEGER & L)
{
	return ((double)L.QuadPart /(double)frequency.QuadPart);
}

// ************************************************************************************
CThreadWatch::CThreadWatch()
{
	timer_kernel.start.QuadPart = 0;
	timer_kernel.stop.QuadPart  = 0;	
	timer_user.start.QuadPart   = 0;
	timer_user.stop.QuadPart    = 0;	
//	QueryPerformanceFrequency( &frequency );
//	frequency = 1;		// 100ns
}

// ************************************************************************************
void CThreadWatch::StartTimer( )
{
	FILETIME CreationTime, ExitTime, KernelTime, UserTime;
	GetThreadTimes(GetCurrentThread(), &CreationTime, &ExitTime, &KernelTime, &UserTime);

	timer_kernel.start.LowPart  = KernelTime.dwLowDateTime;
	timer_kernel.start.HighPart = KernelTime.dwHighDateTime;
	timer_user.start.LowPart    = UserTime.dwLowDateTime;
	timer_user.start.HighPart   = UserTime.dwHighDateTime;
}

// ************************************************************************************
void CThreadWatch::StopTimer( )
{
	FILETIME CreationTime, ExitTime, KernelTime, UserTime;
	GetThreadTimes(GetCurrentThread(), &CreationTime, &ExitTime, &KernelTime, &UserTime);
//    QueryPerformanceCounter(&timer.stop);
	timer_kernel.stop.LowPart  = KernelTime.dwLowDateTime;
	timer_kernel.stop.HighPart = KernelTime.dwHighDateTime;
	timer_user.stop.LowPart    = UserTime.dwLowDateTime;
	timer_user.stop.HighPart   = UserTime.dwHighDateTime;
}

// ************************************************************************************
double CThreadWatch::GetElapsedTime()
{
/*	LARGE_INTEGER time;
	time.QuadPart = timer.stop.QuadPart - timer.start.QuadPart;
    return LIToSecs( time) ;*/
	LARGE_INTEGER time;

	time.QuadPart  = (timer_kernel.stop.QuadPart - timer_kernel.start.QuadPart);
	time.QuadPart += (timer_user.stop.QuadPart   - timer_user.start.QuadPart  );

	return (double) time.QuadPart / 1e7;			// 100ns clock
}
#else
// ************************************************************************************
void CStopWatch::StartTimer( )
{
	gettimeofday(&(timer.start), nullptr);
}

// ************************************************************************************
void CStopWatch::StopTimer( )
{
	gettimeofday(&(timer.stop), nullptr);
}

// ************************************************************************************
double CStopWatch::GetElapsedTime()
{	
	timeval res;
	timersub(&(timer.stop),&(timer.start),&res);
	return res.tv_sec + res.tv_usec/1000000.0; // 10^6 uSec per second
}

// ************************************************************************************
// CThreadWatch
// ************************************************************************************
/*double CThreadWatch::LIToSecs( LARGE_INTEGER & L)
{
	return 1.0;
}*/

// ************************************************************************************
CThreadWatch::CThreadWatch()
{
}

// ************************************************************************************
void CThreadWatch::StartTimer( )
{
	rusage usage;
	getrusage(RUSAGE_THREAD, &usage);
	start_user   = usage.ru_utime;
	start_kernel = usage.ru_stime;
}

// ************************************************************************************
void CThreadWatch::StopTimer( )
{
	rusage usage;
	getrusage(RUSAGE_THREAD, &usage);
	stop_user   = usage.ru_utime;
	stop_kernel = usage.ru_stime;
}

// ************************************************************************************
double CThreadWatch::GetElapsedTime()
{
	double ret = 0.0;

	ret += stop_user.tv_sec    + stop_user.tv_usec    / 1000000.0;
	ret += stop_kernel.tv_sec  + stop_kernel.tv_usec  / 1000000.0;
	ret -= start_user.tv_sec   + start_user.tv_usec   / 1000000.0;
	ret -= start_kernel.tv_sec + start_kernel.tv_usec / 1000000.0;
	
	return ret;
}

#endif

// EOF
