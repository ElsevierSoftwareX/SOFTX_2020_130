// *******************************************************************************************
// This file is a part of Whisper reads mapper.
// The homepage of the project is http://sun.aei.polsl.pl/REFRESH/whisper
// 
// Authors: Sebastian Deorowicz, Agnieszka Debudaj-Grabysz, Adam Gudys
// 
// Version : see defs.h
// Date    : see defs.h
// License : GNU GPL 3
// *******************************************************************************************


#ifndef _MAPPING_CORE_LUTS_H
#define _MAPPING_CORE_LUTS_H

#include "mapping_core.h"

uchar_t CMappingCore::cmp_lut[256] = {	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,			//0 - 15
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//16 - 31
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//32 - 47
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//48 - 63
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//64 - 79
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//80 - 95
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//96 - 111
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//112 - 127
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//128 - 143
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//144 - 159
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//160 - 175
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//176 - 191
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//192 - 207
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//208 - 223
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//224 - 239
								1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,			//240 - 255
							};

uchar_t CMappingCore::rc_lut[80] = {0x33, 0x23, 0x13, 0x03, 0x43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
								    0x32, 0x22, 0x12, 0x02, 0x42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
									0x31, 0x21, 0x11, 0x01, 0x41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
									0x30, 0x20, 0x10, 0x00, 0x40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
									0x34, 0x24, 0x14, 0x04, 0x44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

uint32_t CMappingCore::dense_symbols[256] = {0x00, 0x01, 0x02, 0x03, 0x10000, 0x10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
											 0x04, 0x05, 0x06, 0x07, 0x10000, 0x10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
											 0x08, 0x09, 0x0a, 0x0b, 0x10000, 0x10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
											 0x0c, 0x0d, 0x0e, 0x0f, 0x10000, 0x10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
											 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
											 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

uint32_t CMappingCore::cf_lut[256] = {0x02000000, 0x01010000, 0x01000100, 0x01000001, 0x01000000, 0x01000000,		//AA, AC, AG, AT, AN_read, AN_ref
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0x01000000,										//A+masc
						0x01010000, 0x00020000, 0x00010100, 0x00010001,	0x00010000, 0x00010000,		//CA, CC, CG, CT, CN_read, CN_ref
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00010000,										//C+masc
						0x01000100, 0x00010100, 0x00000200, 0x00000101,	0x00000100, 0x00000100,		//GA, GC, GG, GT, GN_read, GN_ref
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000100,										//G+masc
						0x01000001, 0x00010001, 0x00000101, 0x00000002, 0x00000001, 0x00000001,		//TA, TC, TG, TT, TN_read, TN_ref
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0x00000001,										//T+masc
						0x01000000, 0x00010000, 0x00000100, 0x00000001, 0x00000000, 0x00000000,		//N_readA, N_readC, N_readG, N_readT, N_readN_read, N_readN_ref
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0x01000000, 0x00010000, 0x00000100, 0x00000001, 0x00000000, 0x00000000,		//N_refA, N_refC, N_refG, N_refT, N_refN_read, N_refN_ref
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, //(105
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0x01000000, 0x00010000, 0x00000100, 0x000001};					//masc+A, masc+C, masc+G, masc+T

						
uint64_t CMappingCore::CF_lut_64b[][2] = 
					   {{0x0100000000000000ULL, 0x0ULL}, {0x0001000000000000ULL, 0x0ULL},  
					    {0x0000010000000000ULL, 0x0ULL}, {0x0000000100000000ULL, 0x0ULL},//AA, AC, AG, AT
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},		//AN_read, AN_ref
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},	//A+masc
						{0x0000000001000000ULL, 0x0ULL}, {0x0000000000010000ULL, 0x0ULL}, //CA, CC
						{0x0000000000000100ULL, 0x0ULL}, {0x0000000000000001ULL, 0x0ULL}, //CG, CT	
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},		//CN_read, CN_ref
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, //C+masc
						{0x0ULL, 0x0100000000000000ULL}, {0x0ULL, 0x0001000000000000ULL}, 
						{0x0ULL, 0x0000010000000000ULL}, {0x0ULL, 0x0000000100000000ULL},	
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},		//GA, GC, GG, GT, GN_read, GN_ref
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},	//G+masc
						{0x0ULL, 0x0000000001000000ULL}, {0x0ULL, 0x0000000000010000ULL}, //TA, TC
						{0x0ULL, 0x0000000000000100ULL}, {0x0ULL, 0x0000000000000001ULL}, //TG, TT
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},		//TN_read, TN_ref
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},	//T+masc
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},		//N_readA, N_readC, N_readG, N_readT, N_readN_read, N_readN_ref
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},		//N_refA, N_refC, N_refG, N_refT, N_refN_read, N_refN_ref
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, //{105
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL},
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, 
						{0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}, {0x0ULL, 0x0ULL}};					//masc+A, masc+C, masc+G, masc+T						

			
uint32_t CMappingCore::CF_lut_for_SSE[256] = 
                       {0,    1,    2,    3,    0x10, 0x10, 0x10, 0x10, 0x10, 0x10,		//AA, AC, AG, AT, AN_read, AN_ref
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 4,    5,    6,    7,		//CA, CC, CG, CT,								//A+masc
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,		 
						0x10, 0x10, 8,    9,    10,   11,   0x10, 0x10,	0x10, 0x10,	//GA, GC, GG, GT, GN_read, GN_ref
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 12,   13, 
						14,   15,   0x10, 0x10,	0x10, 0x10, 0x10, 0x10, 0x10, 0x10,	//TA, TC, TG, TT, TN_read, TN_ref
						0x10, 0x10, 0x10, 0x10,	0x10, 0x10, 0x10, 0x10, 0x10, 0x10,									
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 		
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
						0x10, 0x10, 0x10, 0x10, 0x10, 0x10 };						
uchar_t CMappingCore::list[17][16] = 
					    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
	                     {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
						 {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, 
						 {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
						 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};					//masc+A, masc+C, masc+G, masc+T	
#endif

// EOF
