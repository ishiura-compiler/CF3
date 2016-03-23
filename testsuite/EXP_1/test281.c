
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = INT32_MIN;
static volatile int32_t t1 = -356195754;
int16_t x10 = INT16_MIN;
int64_t x13 = -4555359290479LL;
static volatile int32_t x18 = 348865;
int64_t x27 = -3652179190LL;
volatile int16_t x36 = INT16_MAX;
int8_t x38 = INT8_MAX;
volatile int8_t x41 = -1;
volatile uint32_t x47 = 28985600U;
int8_t x52 = -1;
static volatile int32_t t12 = 55581487;
int32_t x55 = 0;
static int32_t x61 = INT32_MIN;
volatile int32_t x62 = INT32_MIN;
static int64_t x63 = INT64_MAX;
static volatile uint8_t x64 = 0U;
uint64_t x67 = 313198411LLU;
volatile int8_t x72 = -1;
int32_t t17 = -116;
int32_t t19 = -54719408;
int8_t x85 = INT8_MAX;
volatile uint32_t t20 = 209224U;
int32_t t23 = 1415562;
int16_t x103 = 330;
int64_t t24 = -57022137765133LL;
static int16_t x105 = INT16_MIN;
int32_t x106 = -5;
uint32_t x108 = 3147516U;
uint32_t t25 = 1414443586U;
int16_t x113 = -230;
int32_t x115 = INT32_MIN;
int32_t t27 = -79;
int8_t x121 = INT8_MIN;
static volatile int32_t t28 = -6;
int32_t x130 = INT32_MIN;
volatile int32_t t30 = 12;
int32_t x133 = -1;
int16_t x134 = INT16_MIN;
int32_t x142 = -100965;
volatile int16_t x145 = -551;
uint64_t x146 = 136944682LLU;
int32_t x149 = -113913422;
static int16_t x156 = 15849;
int32_t x159 = INT32_MAX;
uint64_t x167 = 54807700619694LLU;
int16_t x172 = -1;
volatile int64_t x174 = -61006220119620LL;
uint8_t x179 = 82U;
volatile int64_t x181 = -1124LL;
int8_t x183 = INT8_MIN;
int8_t x186 = -1;
int64_t x190 = -1LL;
uint32_t x195 = 508804665U;
int8_t x200 = INT8_MIN;
static int64_t x202 = -7129800597710LL;
int64_t x215 = INT64_MIN;
int16_t x229 = INT16_MIN;
int8_t x230 = INT8_MIN;
uint64_t x232 = UINT64_MAX;
int32_t t54 = 92;
static int8_t x243 = INT8_MIN;
int32_t x245 = -1;
int64_t x248 = -2434618LL;
int64_t t56 = -3111LL;
uint32_t x267 = UINT32_MAX;
volatile int32_t t63 = 0;
uint64_t x286 = UINT64_MAX;
volatile int8_t x288 = 8;
int32_t x291 = -1;
int16_t x300 = INT16_MAX;
static int32_t t67 = -40808;
int64_t x306 = -7822223588LL;
static int16_t x309 = INT16_MIN;
volatile int16_t x310 = -1;
int8_t x311 = 3;
int16_t x312 = INT16_MIN;
uint64_t x313 = 210141539895602LLU;
uint8_t x327 = UINT8_MAX;
uint64_t x332 = UINT64_MAX;
uint64_t t75 = 6829LLU;
int32_t x343 = INT32_MAX;
int64_t x350 = -1LL;
static int16_t x370 = INT16_MIN;
int64_t t84 = 152698449070LL;
uint16_t x389 = 1870U;
int16_t x391 = INT16_MIN;
volatile int16_t x393 = -1;
int8_t x400 = -27;
volatile int32_t t88 = -14282;
uint16_t x401 = 497U;
static uint32_t x402 = 3U;
uint32_t x404 = 413154U;
int64_t x415 = INT64_MAX;
int16_t x418 = -684;
int64_t x425 = -44290533861LL;
static int8_t x437 = -1;
int32_t x438 = INT32_MIN;
uint32_t x441 = UINT32_MAX;
int16_t x447 = -3;
uint64_t x452 = 25LLU;
volatile uint64_t t99 = 7LLU;
static int32_t t103 = 15099178;
volatile int64_t t108 = 319270855LL;
int16_t x508 = INT16_MIN;
int32_t t110 = -615;
volatile int32_t t112 = 5344389;
int32_t t113 = -486292175;
volatile int32_t t114 = -56396537;
uint64_t x539 = 0LLU;
int64_t x540 = -1LL;
int64_t t117 = 265293722636990LL;
int8_t x543 = INT8_MAX;
int64_t x546 = -1LL;
static int64_t x549 = INT64_MAX;
static volatile int64_t x550 = 24913LL;
static volatile uint64_t t120 = 7299864920375569LLU;
uint32_t t121 = 791U;
static int64_t t122 = 7957171993853037LL;
uint16_t x561 = 44U;
int16_t x574 = -10;
uint64_t x575 = 5007660563188092550LLU;
int8_t x582 = 0;
uint8_t x586 = 1U;
uint32_t x587 = 25600U;
uint8_t x589 = 0U;
volatile int16_t x591 = 1017;
static volatile int32_t t129 = 289;
volatile int32_t t130 = 6798562;
int8_t x604 = -6;
volatile int16_t x608 = INT16_MAX;
volatile int16_t x614 = -56;
int8_t x620 = 8;
volatile int8_t x628 = INT8_MAX;
volatile int32_t t136 = -2974210;
volatile int8_t x629 = -1;
volatile uint64_t x639 = 61992918972383603LLU;
int8_t x640 = -1;
int16_t x642 = INT16_MIN;
uint16_t x643 = 266U;
uint64_t x648 = UINT64_MAX;
volatile int8_t x655 = INT8_MIN;
volatile uint16_t x659 = UINT16_MAX;
uint64_t x665 = 100355720417070LLU;
static volatile int64_t x666 = 1327849343151717LL;
int64_t x671 = 19989745867034LL;
volatile int32_t t145 = 1025095411;
volatile int16_t x677 = -1;
volatile int32_t x685 = -62923;
int8_t x686 = -1;
volatile uint32_t x687 = 10U;
int8_t x690 = INT8_MIN;
int32_t x693 = INT32_MAX;
static volatile int64_t t150 = -92698LL;
uint64_t x699 = 384LLU;
int64_t x707 = INT64_MIN;
uint16_t x708 = 5728U;
volatile int64_t x709 = 856694041372475LL;
int16_t x711 = 0;
volatile uint64_t t154 = 109LLU;
uint8_t x713 = 0U;
uint32_t x714 = 1U;
volatile int64_t x719 = -477439LL;
uint16_t x721 = 252U;
uint32_t x723 = UINT32_MAX;
uint16_t x726 = 91U;
int32_t x730 = 88;
static int64_t x733 = INT64_MAX;
uint64_t x734 = UINT64_MAX;
static volatile uint64_t x739 = 296989LLU;
int8_t x753 = INT8_MAX;
int64_t t163 = 16063283662388192LL;
int64_t x766 = -1LL;
int64_t x769 = INT64_MIN;
int8_t x778 = -1;
uint64_t x788 = 186428LLU;
static int8_t x791 = 1;
int32_t t170 = 1207;
int64_t x795 = -1LL;
volatile int64_t x799 = 673LL;
static volatile int64_t x801 = -1841434859LL;
uint16_t x810 = 507U;
volatile int64_t t174 = -2678979896282LL;
int64_t x817 = -70819849936125136LL;
int16_t x819 = INT16_MIN;
int16_t x820 = 0;
int32_t t176 = -93326492;
volatile int32_t t177 = 133;
uint32_t x852 = 1812904U;
int8_t x861 = -20;
uint32_t x893 = 27309U;
volatile int64_t t191 = -35489174493952LL;
int64_t t192 = -160283817423LL;
uint64_t x909 = UINT64_MAX;
volatile int8_t x910 = 2;
volatile int32_t t194 = 96644;
volatile int32_t t196 = 144527609;
uint16_t x925 = 36U;


void f0(void) {
    	int32_t x1 = -1;
	static int32_t x2 = -22394;
	int32_t x3 = INT32_MAX;
	uint64_t x4 = 509942396455603LLU;
	volatile uint64_t t0 = 64LLU;

    t0 = (((x1-x2)!=x3)+x4);

    if (t0 != 509942396455604LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 591763U;
	int16_t x6 = -92;
	static uint8_t x8 = 123U;

    t1 = (((x5-x6)!=x7)+x8);

    if (t1 != 124) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	static int16_t x11 = -1;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 35206664071007704LLU;

    t2 = (((x9-x10)!=x11)+x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = UINT32_MAX;
	static int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -2221706;

    t3 = (((x13-x14)!=x15)+x16);

    if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 427105U;
	int32_t x19 = -1;
	static int32_t x20 = -1;
	volatile int32_t t4 = -755;

    t4 = (((x17-x18)!=x19)+x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 1;
	int16_t x22 = -1;
	int64_t x23 = -427070LL;
	uint64_t x24 = 280987LLU;
	uint64_t t5 = 23433404700LLU;

    t5 = (((x21-x22)!=x23)+x24);

    if (t5 != 280988LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -2;
	uint32_t x26 = 7U;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -121540;

    t6 = (((x25-x26)!=x27)+x28);

    if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 30U;
	uint32_t x30 = 127161361U;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 21375921887850936LLU;
	volatile uint64_t t7 = 4360900259401183LLU;

    t7 = (((x29-x30)!=x31)+x32);

    if (t7 != 21375921887850937LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 6297U;
	int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MAX;
	static int32_t t8 = 11625;

    t8 = (((x33-x34)!=x35)+x36);

    if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MAX;
	volatile uint16_t x39 = UINT16_MAX;
	volatile int32_t x40 = INT32_MIN;
	int32_t t9 = 536610;

    t9 = (((x37-x38)!=x39)+x40);

    if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x42 = 94741724U;
	volatile int32_t x43 = -1;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -439258470;

    t10 = (((x41-x42)!=x43)+x44);

    if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = UINT64_MAX;
	uint64_t x46 = 9LLU;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = -2579;

    t11 = (((x45-x46)!=x47)+x48);

    if (t11 != 65536) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = 10813323081946LL;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 91U;

    t12 = (((x49-x50)!=x51)+x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -76;
	uint16_t x54 = 18U;
	uint16_t x56 = 217U;
	volatile int32_t t13 = -4;

    t13 = (((x53-x54)!=x55)+x56);

    if (t13 != 218) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MIN;
	volatile int64_t x58 = -240097385239540LL;
	int64_t x59 = INT64_MIN;
	static volatile int8_t x60 = INT8_MAX;
	volatile int32_t t14 = 73661;

    t14 = (((x57-x58)!=x59)+x60);

    if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t t15 = -3836977;

    t15 = (((x61-x62)!=x63)+x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 7;
	int32_t x66 = -1;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 6U;

    t16 = (((x65-x66)!=x67)+x68);

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	uint8_t x70 = 2U;
	int8_t x71 = 2;

    t17 = (((x69-x70)!=x71)+x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	int8_t x74 = 0;
	volatile uint16_t x75 = 2892U;
	int64_t x76 = INT64_MIN;
	static volatile int64_t t18 = -870667428843383766LL;

    t18 = (((x73-x74)!=x75)+x76);

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -8;
	uint64_t x78 = UINT64_MAX;
	volatile uint32_t x79 = 64594538U;
	volatile int32_t x80 = INT32_MIN;

    t19 = (((x77-x78)!=x79)+x80);

    if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x86 = INT8_MIN;
	uint16_t x87 = UINT16_MAX;
	uint32_t x88 = 2892120U;

    t20 = (((x85-x86)!=x87)+x88);

    if (t20 != 2892121U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = 1;
	volatile int32_t x90 = INT32_MAX;
	uint32_t x91 = 29462U;
	int32_t x92 = 147;
	int32_t t21 = 15;

    t21 = (((x89-x90)!=x91)+x92);

    if (t21 != 148) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = 1066803989;
	uint64_t x94 = 15639880140060665LLU;
	volatile int16_t x95 = 152;
	int64_t x96 = INT64_MIN;
	int64_t t22 = 1LL;

    t22 = (((x93-x94)!=x95)+x96);

    if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = 986641802;
	static int64_t x98 = -1LL;
	int8_t x99 = -1;
	uint16_t x100 = 7684U;

    t23 = (((x97-x98)!=x99)+x100);

    if (t23 != 7685) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x101 = INT64_MAX;
	int16_t x102 = 1;
	int64_t x104 = INT64_MIN;

    t24 = (((x101-x102)!=x103)+x104);

    if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x107 = -1LL;

    t25 = (((x105-x106)!=x107)+x108);

    if (t25 != 3147517U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 2330312762173LLU;
	int8_t x110 = 1;
	int32_t x111 = -1;
	int32_t x112 = INT32_MIN;
	int32_t t26 = -57755;

    t26 = (((x109-x110)!=x111)+x112);

    if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x114 = UINT64_MAX;
	volatile int8_t x116 = INT8_MAX;

    t27 = (((x113-x114)!=x115)+x116);

    if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x122 = 3975U;
	static volatile int64_t x123 = INT64_MIN;
	volatile int16_t x124 = INT16_MIN;

    t28 = (((x121-x122)!=x123)+x124);

    if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MAX;
	int32_t x126 = 50972;
	static int32_t x127 = 703;
	static volatile int8_t x128 = -2;
	int32_t t29 = -1;

    t29 = (((x125-x126)!=x127)+x128);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = 39U;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MIN;

    t30 = (((x129-x130)!=x131)+x132);

    if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	volatile int32_t t31 = 326078713;

    t31 = (((x133-x134)!=x135)+x136);

    if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -1LL;
	int64_t x143 = -1LL;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t32 = 2384548;

    t32 = (((x141-x142)!=x143)+x144);

    if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x147 = UINT64_MAX;
	int32_t x148 = INT32_MIN;
	volatile int32_t t33 = 1036240266;

    t33 = (((x145-x146)!=x147)+x148);

    if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x150 = INT8_MIN;
	int8_t x151 = 1;
	volatile uint32_t x152 = 4564U;
	volatile uint32_t t34 = 953730U;

    t34 = (((x149-x150)!=x151)+x152);

    if (t34 != 4565U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x153 = 50U;
	uint32_t x154 = 1889883U;
	volatile int64_t x155 = INT64_MAX;
	int32_t t35 = 242053970;

    t35 = (((x153-x154)!=x155)+x156);

    if (t35 != 15850) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = INT16_MIN;
	static int64_t x158 = -4523551700114768403LL;
	volatile uint64_t x160 = 225266LLU;
	volatile uint64_t t36 = 57225160727LLU;

    t36 = (((x157-x158)!=x159)+x160);

    if (t36 != 225267LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = 0;
	int32_t x164 = -1;
	volatile int32_t t37 = 755297;

    t37 = (((x161-x162)!=x163)+x164);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x165 = UINT16_MAX;
	int32_t x166 = 511807838;
	int16_t x168 = INT16_MIN;
	int32_t t38 = 566705;

    t38 = (((x165-x166)!=x167)+x168);

    if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	static uint16_t x171 = UINT16_MAX;
	int32_t t39 = -48339;

    t39 = (((x169-x170)!=x171)+x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x173 = 2666241717352142LLU;
	int8_t x175 = INT8_MIN;
	int16_t x176 = 0;
	static volatile int32_t t40 = -56769322;

    t40 = (((x173-x174)!=x175)+x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = -1;
	uint8_t x178 = 12U;
	uint16_t x180 = UINT16_MAX;
	int32_t t41 = -264976769;

    t41 = (((x177-x178)!=x179)+x180);

    if (t41 != 65536) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x182 = -1121;
	uint32_t x184 = 0U;
	uint32_t t42 = 33561U;

    t42 = (((x181-x182)!=x183)+x184);

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x185 = -271634;
	int8_t x187 = 2;
	int32_t x188 = -361;
	volatile int32_t t43 = 0;

    t43 = (((x185-x186)!=x187)+x188);

    if (t43 != -360) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x189 = -1;
	uint64_t x191 = 263966708375243890LLU;
	volatile int32_t x192 = INT32_MIN;
	volatile int32_t t44 = 6;

    t44 = (((x189-x190)!=x191)+x192);

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x193 = 16512U;
	static int64_t x194 = -1LL;
	int64_t x196 = INT64_MIN;
	static int64_t t45 = 23027975756LL;

    t45 = (((x193-x194)!=x195)+x196);

    if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x197 = -1;
	int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MIN;
	int32_t t46 = 984;

    t46 = (((x197-x198)!=x199)+x200);

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x201 = -3;
	static int32_t x203 = INT32_MAX;
	int64_t x204 = -1LL;
	int64_t t47 = 18549LL;

    t47 = (((x201-x202)!=x203)+x204);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x205 = 2147367962U;
	static uint64_t x206 = 173935817193LLU;
	static volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = 1U;
	int32_t t48 = -3168;

    t48 = (((x205-x206)!=x207)+x208);

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = -1LL;
	int8_t x210 = 39;
	static uint32_t x211 = UINT32_MAX;
	uint32_t x212 = UINT32_MAX;
	uint32_t t49 = 318U;

    t49 = (((x209-x210)!=x211)+x212);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x213 = INT64_MIN;
	volatile int64_t x214 = -1LL;
	int8_t x216 = -1;
	volatile int32_t t50 = -2364;

    t50 = (((x213-x214)!=x215)+x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x221 = 127U;
	int8_t x222 = -24;
	int32_t x223 = 12496;
	uint8_t x224 = 13U;
	int32_t t51 = -186807;

    t51 = (((x221-x222)!=x223)+x224);

    if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x225 = INT32_MAX;
	int8_t x226 = INT8_MAX;
	static int8_t x227 = 27;
	uint32_t x228 = UINT32_MAX;
	uint32_t t52 = 0U;

    t52 = (((x225-x226)!=x227)+x228);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x231 = INT8_MIN;
	volatile uint64_t t53 = 189451078440051LLU;

    t53 = (((x229-x230)!=x231)+x232);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x237 = 1;
	int32_t x238 = -1;
	int8_t x239 = INT8_MAX;
	int16_t x240 = -1;

    t54 = (((x237-x238)!=x239)+x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x241 = 102U;
	static volatile uint64_t x242 = 4271174814405562068LLU;
	static volatile int64_t x244 = -119541322LL;
	int64_t t55 = 477516695039LL;

    t55 = (((x241-x242)!=x243)+x244);

    if (t55 != -119541321LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x246 = 3984LLU;
	static int8_t x247 = -5;

    t56 = (((x245-x246)!=x247)+x248);

    if (t56 != -2434617LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x249 = UINT8_MAX;
	volatile uint8_t x250 = 100U;
	int32_t x251 = 465351781;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t57 = -1025961824;

    t57 = (((x249-x250)!=x251)+x252);

    if (t57 != 65536) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	uint64_t x255 = 120916921796669LLU;
	static uint16_t x256 = 57U;
	static volatile int32_t t58 = -3;

    t58 = (((x253-x254)!=x255)+x256);

    if (t58 != 58) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	int16_t x259 = 14522;
	volatile int8_t x260 = -1;
	volatile int32_t t59 = 6;

    t59 = (((x257-x258)!=x259)+x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x265 = INT16_MAX;
	volatile int16_t x266 = INT16_MAX;
	uint32_t x268 = 277U;
	static uint32_t t60 = 2U;

    t60 = (((x265-x266)!=x267)+x268);

    if (t60 != 278U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = INT16_MAX;
	int8_t x274 = INT8_MAX;
	int8_t x275 = -1;
	volatile uint16_t x276 = 130U;
	static int32_t t61 = 10237;

    t61 = (((x273-x274)!=x275)+x276);

    if (t61 != 131) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x277 = 3U;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = -1;
	int8_t x280 = INT8_MIN;
	int32_t t62 = 721112;

    t62 = (((x277-x278)!=x279)+x280);

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = -1;
	int64_t x282 = INT64_MIN;
	uint16_t x283 = 4842U;
	uint16_t x284 = 9U;

    t63 = (((x281-x282)!=x283)+x284);

    if (t63 != 10) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x285 = 1016478091LLU;
	uint64_t x287 = 3852829475291LLU;
	volatile int32_t t64 = 34;

    t64 = (((x285-x286)!=x287)+x288);

    if (t64 != 9) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x289 = INT8_MIN;
	uint64_t x290 = 1679LLU;
	int64_t x292 = INT64_MIN;
	volatile int64_t t65 = 23594782746138494LL;

    t65 = (((x289-x290)!=x291)+x292);

    if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = INT32_MIN;
	static int64_t x294 = 16511488305676619LL;
	int64_t x295 = 7372835LL;
	uint8_t x296 = UINT8_MAX;
	int32_t t66 = -3;

    t66 = (((x293-x294)!=x295)+x296);

    if (t66 != 256) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x298 = 0;
	int8_t x299 = -1;

    t67 = (((x297-x298)!=x299)+x300);

    if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x301 = 43;
	int64_t x302 = -76164LL;
	volatile int16_t x303 = -40;
	int32_t x304 = -1801;
	volatile int32_t t68 = 47253;

    t68 = (((x301-x302)!=x303)+x304);

    if (t68 != -1800) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x305 = -1LL;
	uint16_t x307 = 328U;
	int64_t x308 = INT64_MIN;
	int64_t t69 = 229LL;

    t69 = (((x305-x306)!=x307)+x308);

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t t70 = -777191;

    t70 = (((x309-x310)!=x311)+x312);

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x314 = UINT64_MAX;
	volatile int32_t x315 = INT32_MIN;
	static uint16_t x316 = 1U;
	int32_t t71 = 1;

    t71 = (((x313-x314)!=x315)+x316);

    if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = INT8_MAX;
	static int16_t x318 = -1;
	static int32_t x319 = -1;
	int32_t x320 = INT32_MIN;
	int32_t t72 = -5;

    t72 = (((x317-x318)!=x319)+x320);

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x321 = 5620695LL;
	int16_t x322 = 191;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = 58U;
	volatile uint32_t t73 = 415051U;

    t73 = (((x321-x322)!=x323)+x324);

    if (t73 != 59U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x325 = INT64_MIN;
	static int32_t x326 = -184;
	int64_t x328 = -1LL;
	volatile int64_t t74 = 129LL;

    t74 = (((x325-x326)!=x327)+x328);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x329 = 402273230LL;
	volatile int16_t x330 = -1;
	int16_t x331 = INT16_MIN;

    t75 = (((x329-x330)!=x331)+x332);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x341 = 42532684615LLU;
	static int8_t x342 = INT8_MAX;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t76 = -271674;

    t76 = (((x341-x342)!=x343)+x344);

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x345 = INT8_MIN;
	int64_t x346 = 68933450107727LL;
	int64_t x347 = INT64_MIN;
	static int64_t x348 = -1LL;
	volatile int64_t t77 = 167331LL;

    t77 = (((x345-x346)!=x347)+x348);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x349 = 77U;
	static uint64_t x351 = 13LLU;
	volatile int8_t x352 = 54;
	int32_t t78 = -2059;

    t78 = (((x349-x350)!=x351)+x352);

    if (t78 != 55) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x357 = 108U;
	uint32_t x358 = 24U;
	uint16_t x359 = 282U;
	int32_t x360 = 8734;
	volatile int32_t t79 = 25306;

    t79 = (((x357-x358)!=x359)+x360);

    if (t79 != 8735) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x361 = 14U;
	int8_t x362 = -1;
	static uint16_t x363 = UINT16_MAX;
	volatile int64_t x364 = -25672192870885LL;
	volatile int64_t t80 = 193LL;

    t80 = (((x361-x362)!=x363)+x364);

    if (t80 != -25672192870884LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x365 = 3;
	int32_t x366 = 6819;
	static int32_t x367 = -1;
	static int8_t x368 = -1;
	static int32_t t81 = 283710;

    t81 = (((x365-x366)!=x367)+x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x369 = 39251516607295LL;
	int64_t x371 = INT64_MIN;
	static uint32_t x372 = UINT32_MAX;
	static volatile uint32_t t82 = 132U;

    t82 = (((x369-x370)!=x371)+x372);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x373 = INT64_MAX;
	uint64_t x374 = 418054LLU;
	int32_t x375 = -1;
	static volatile uint32_t x376 = UINT32_MAX;
	volatile uint32_t t83 = 1U;

    t83 = (((x373-x374)!=x375)+x376);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x381 = INT8_MAX;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;

    t84 = (((x381-x382)!=x383)+x384);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x385 = 1137;
	int8_t x386 = INT8_MAX;
	volatile int8_t x387 = INT8_MAX;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t85 = 40107;

    t85 = (((x385-x386)!=x387)+x388);

    if (t85 != 65536) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x390 = 6U;
	int8_t x392 = INT8_MIN;
	int32_t t86 = 1255190;

    t86 = (((x389-x390)!=x391)+x392);

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x394 = -1;
	static int32_t x395 = 29;
	static int8_t x396 = INT8_MAX;
	static int32_t t87 = -27;

    t87 = (((x393-x394)!=x395)+x396);

    if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x397 = INT32_MIN;
	volatile uint32_t x398 = 4601845U;
	static volatile int32_t x399 = INT32_MIN;

    t88 = (((x397-x398)!=x399)+x400);

    if (t88 != -26) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x403 = 0;
	uint32_t t89 = 353929U;

    t89 = (((x401-x402)!=x403)+x404);

    if (t89 != 413155U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x405 = 244U;
	volatile int8_t x406 = INT8_MIN;
	volatile uint32_t x407 = 104733U;
	volatile uint16_t x408 = 56U;
	static volatile int32_t t90 = -4;

    t90 = (((x405-x406)!=x407)+x408);

    if (t90 != 57) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x409 = -178;
	volatile int64_t x410 = 138472082638816LL;
	int32_t x411 = INT32_MAX;
	int16_t x412 = INT16_MAX;
	volatile int32_t t91 = -682753;

    t91 = (((x409-x410)!=x411)+x412);

    if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x413 = UINT64_MAX;
	int32_t x414 = INT32_MIN;
	int8_t x416 = -10;
	volatile int32_t t92 = -11;

    t92 = (((x413-x414)!=x415)+x416);

    if (t92 != -9) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x417 = -435666892579715LL;
	int64_t x419 = 4155612568LL;
	int32_t x420 = 1025920;
	volatile int32_t t93 = -1900670;

    t93 = (((x417-x418)!=x419)+x420);

    if (t93 != 1025921) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x426 = -1;
	static uint64_t x427 = UINT64_MAX;
	volatile int8_t x428 = -1;
	volatile int32_t t94 = -1438357;

    t94 = (((x425-x426)!=x427)+x428);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x433 = INT16_MIN;
	static uint16_t x434 = 26U;
	static uint8_t x435 = 11U;
	uint32_t x436 = 16104U;
	uint32_t t95 = 22300586U;

    t95 = (((x433-x434)!=x435)+x436);

    if (t95 != 16105U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x439 = UINT8_MAX;
	uint32_t x440 = UINT32_MAX;
	uint32_t t96 = 25274914U;

    t96 = (((x437-x438)!=x439)+x440);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x442 = 101;
	int8_t x443 = INT8_MIN;
	uint8_t x444 = UINT8_MAX;
	int32_t t97 = -2918463;

    t97 = (((x441-x442)!=x443)+x444);

    if (t97 != 256) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x445 = 2191;
	static uint64_t x446 = 2655416720848314379LLU;
	static int64_t x448 = -6860282247874051LL;
	volatile int64_t t98 = 70742202550LL;

    t98 = (((x445-x446)!=x447)+x448);

    if (t98 != -6860282247874050LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x449 = INT8_MIN;
	int16_t x450 = INT16_MAX;
	uint8_t x451 = UINT8_MAX;

    t99 = (((x449-x450)!=x451)+x452);

    if (t99 != 26LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x453 = -1;
	static int32_t x454 = -205381296;
	uint64_t x455 = 59173881LLU;
	int8_t x456 = -1;
	int32_t t100 = -455906;

    t100 = (((x453-x454)!=x455)+x456);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x457 = INT8_MAX;
	static int32_t x458 = -121;
	int32_t x459 = 880209;
	static int16_t x460 = INT16_MIN;
	static int32_t t101 = 24424;

    t101 = (((x457-x458)!=x459)+x460);

    if (t101 != -32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x465 = -1LL;
	int32_t x466 = 187;
	int64_t x467 = -1LL;
	int16_t x468 = 1512;
	volatile int32_t t102 = -5;

    t102 = (((x465-x466)!=x467)+x468);

    if (t102 != 1513) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x469 = -1;
	int64_t x470 = INT64_MIN;
	int32_t x471 = -1;
	uint8_t x472 = UINT8_MAX;

    t103 = (((x469-x470)!=x471)+x472);

    if (t103 != 256) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x473 = 3428U;
	int8_t x474 = INT8_MIN;
	int64_t x475 = INT64_MIN;
	uint16_t x476 = 26U;
	static int32_t t104 = -925539;

    t104 = (((x473-x474)!=x475)+x476);

    if (t104 != 27) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x477 = UINT32_MAX;
	uint8_t x478 = UINT8_MAX;
	static int8_t x479 = INT8_MIN;
	volatile uint32_t x480 = 972U;
	static uint32_t t105 = 17460U;

    t105 = (((x477-x478)!=x479)+x480);

    if (t105 != 973U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x481 = 125648303935525LLU;
	static uint32_t x482 = UINT32_MAX;
	volatile uint16_t x483 = 144U;
	uint32_t x484 = 65334879U;
	volatile uint32_t t106 = 502867U;

    t106 = (((x481-x482)!=x483)+x484);

    if (t106 != 65334880U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x489 = 390U;
	int8_t x490 = INT8_MAX;
	int16_t x491 = INT16_MIN;
	int64_t x492 = INT64_MIN;
	int64_t t107 = -264961690LL;

    t107 = (((x489-x490)!=x491)+x492);

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x493 = UINT16_MAX;
	int16_t x494 = -1;
	uint32_t x495 = 907U;
	static int64_t x496 = INT64_MIN;

    t108 = (((x493-x494)!=x495)+x496);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x497 = INT16_MAX;
	int8_t x498 = -14;
	int16_t x499 = -1;
	uint32_t x500 = 19362U;
	uint32_t t109 = 2U;

    t109 = (((x497-x498)!=x499)+x500);

    if (t109 != 19363U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x505 = INT64_MAX;
	int8_t x506 = INT8_MAX;
	int64_t x507 = INT64_MIN;

    t110 = (((x505-x506)!=x507)+x508);

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x509 = INT8_MIN;
	volatile int16_t x510 = 860;
	volatile int16_t x511 = -1504;
	volatile int64_t x512 = INT64_MIN;
	int64_t t111 = 283772214LL;

    t111 = (((x509-x510)!=x511)+x512);

    if (t111 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x513 = UINT16_MAX;
	static int64_t x514 = 10338586LL;
	int16_t x515 = INT16_MIN;
	volatile int16_t x516 = -2221;

    t112 = (((x513-x514)!=x515)+x516);

    if (t112 != -2220) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x517 = -3;
	static uint8_t x518 = 0U;
	volatile int8_t x519 = -1;
	uint8_t x520 = 3U;

    t113 = (((x517-x518)!=x519)+x520);

    if (t113 != 4) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x521 = INT8_MIN;
	static int8_t x522 = -14;
	int16_t x523 = 0;
	uint8_t x524 = 27U;

    t114 = (((x521-x522)!=x523)+x524);

    if (t114 != 28) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x525 = 0LLU;
	static int8_t x526 = INT8_MAX;
	int64_t x527 = INT64_MIN;
	static int8_t x528 = -1;
	int32_t t115 = -4;

    t115 = (((x525-x526)!=x527)+x528);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x529 = INT64_MIN;
	int32_t x530 = INT32_MIN;
	int16_t x531 = INT16_MAX;
	int8_t x532 = INT8_MIN;
	volatile int32_t t116 = 6427635;

    t116 = (((x529-x530)!=x531)+x532);

    if (t116 != -127) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x537 = 99U;
	static int16_t x538 = 171;

    t117 = (((x537-x538)!=x539)+x540);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x541 = 0U;
	int16_t x542 = INT16_MIN;
	int64_t x544 = -778183190667254LL;
	int64_t t118 = 27067979LL;

    t118 = (((x541-x542)!=x543)+x544);

    if (t118 != -778183190667253LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x545 = 36692430312896LLU;
	int8_t x547 = INT8_MIN;
	int64_t x548 = -1LL;
	int64_t t119 = 108490LL;

    t119 = (((x545-x546)!=x547)+x548);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x551 = INT64_MIN;
	uint64_t x552 = 1794423LLU;

    t120 = (((x549-x550)!=x551)+x552);

    if (t120 != 1794424LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x553 = 102325U;
	static int8_t x554 = -58;
	uint32_t x555 = 130630514U;
	uint32_t x556 = UINT32_MAX;

    t121 = (((x553-x554)!=x555)+x556);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x557 = INT8_MIN;
	int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	int64_t x560 = INT64_MIN;

    t122 = (((x557-x558)!=x559)+x560);

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x562 = INT32_MAX;
	int64_t x563 = 296042LL;
	int16_t x564 = INT16_MAX;
	int32_t t123 = -131913911;

    t123 = (((x561-x562)!=x563)+x564);

    if (t123 != 32768) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x569 = 0U;
	int8_t x570 = INT8_MIN;
	uint32_t x571 = 24U;
	int32_t x572 = -1;
	volatile int32_t t124 = 82156;

    t124 = (((x569-x570)!=x571)+x572);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x573 = 13932135LLU;
	int16_t x576 = -1;
	static volatile int32_t t125 = 105775;

    t125 = (((x573-x574)!=x575)+x576);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x577 = -1;
	uint32_t x578 = 66721109U;
	int32_t x579 = INT32_MIN;
	static uint64_t x580 = UINT64_MAX;
	volatile uint64_t t126 = 15575573LLU;

    t126 = (((x577-x578)!=x579)+x580);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x581 = INT16_MIN;
	uint8_t x583 = 14U;
	int16_t x584 = INT16_MAX;
	volatile int32_t t127 = 130201;

    t127 = (((x581-x582)!=x583)+x584);

    if (t127 != 32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x585 = 3U;
	int64_t x588 = INT64_MIN;
	int64_t t128 = -367428666200LL;

    t128 = (((x585-x586)!=x587)+x588);

    if (t128 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x590 = INT8_MIN;
	int16_t x592 = 9;

    t129 = (((x589-x590)!=x591)+x592);

    if (t129 != 10) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x597 = UINT32_MAX;
	static int32_t x598 = 4;
	volatile uint32_t x599 = UINT32_MAX;
	int32_t x600 = -1;

    t130 = (((x597-x598)!=x599)+x600);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	static volatile int64_t x602 = 55237641137947150LL;
	int8_t x603 = INT8_MIN;
	int32_t t131 = 367;

    t131 = (((x601-x602)!=x603)+x604);

    if (t131 != -5) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x605 = INT64_MIN;
	int16_t x606 = -7;
	int8_t x607 = INT8_MIN;
	static volatile int32_t t132 = -6;

    t132 = (((x605-x606)!=x607)+x608);

    if (t132 != 32768) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x613 = INT16_MAX;
	uint16_t x615 = UINT16_MAX;
	int16_t x616 = 2746;
	int32_t t133 = -10928;

    t133 = (((x613-x614)!=x615)+x616);

    if (t133 != 2747) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x617 = -1LL;
	uint64_t x618 = 15370770590LLU;
	volatile int32_t x619 = -1;
	volatile int32_t t134 = 21448;

    t134 = (((x617-x618)!=x619)+x620);

    if (t134 != 9) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x621 = 287U;
	int8_t x622 = INT8_MAX;
	static uint32_t x623 = UINT32_MAX;
	volatile uint32_t x624 = UINT32_MAX;
	static uint32_t t135 = 3245268U;

    t135 = (((x621-x622)!=x623)+x624);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x625 = 4132LL;
	uint16_t x626 = 3049U;
	static int8_t x627 = INT8_MIN;

    t136 = (((x625-x626)!=x627)+x628);

    if (t136 != 128) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x630 = INT16_MIN;
	int8_t x631 = INT8_MIN;
	volatile uint64_t x632 = 25LLU;
	static uint64_t t137 = 120351189881138640LLU;

    t137 = (((x629-x630)!=x631)+x632);

    if (t137 != 26LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x633 = -1;
	int64_t x634 = -746128124LL;
	volatile int16_t x635 = -3186;
	static int16_t x636 = -1;
	volatile int32_t t138 = -84165;

    t138 = (((x633-x634)!=x635)+x636);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x637 = 1;
	uint64_t x638 = 18LLU;
	int32_t t139 = -1346;

    t139 = (((x637-x638)!=x639)+x640);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x641 = 13;
	int32_t x644 = INT32_MIN;
	volatile int32_t t140 = -995670;

    t140 = (((x641-x642)!=x643)+x644);

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x645 = -1;
	volatile int32_t x646 = INT32_MIN;
	uint8_t x647 = UINT8_MAX;
	volatile uint64_t t141 = 8LLU;

    t141 = (((x645-x646)!=x647)+x648);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x653 = -4LL;
	int64_t x654 = INT64_MIN;
	int64_t x656 = -1LL;
	static volatile int64_t t142 = 1220401122453515LL;

    t142 = (((x653-x654)!=x655)+x656);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x657 = INT8_MIN;
	int16_t x658 = 46;
	uint8_t x660 = 51U;
	int32_t t143 = -28344259;

    t143 = (((x657-x658)!=x659)+x660);

    if (t143 != 52) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x667 = 957585950U;
	static uint64_t x668 = 0LLU;
	volatile uint64_t t144 = 4183589868264LLU;

    t144 = (((x665-x666)!=x667)+x668);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x669 = INT8_MAX;
	int64_t x670 = -1LL;
	int32_t x672 = -1;

    t145 = (((x669-x670)!=x671)+x672);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x673 = 6U;
	uint64_t x674 = UINT64_MAX;
	volatile uint8_t x675 = 4U;
	static volatile uint8_t x676 = UINT8_MAX;
	int32_t t146 = -185907;

    t146 = (((x673-x674)!=x675)+x676);

    if (t146 != 256) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x678 = 44;
	static volatile int16_t x679 = INT16_MIN;
	int32_t x680 = INT32_MIN;
	volatile int32_t t147 = 70;

    t147 = (((x677-x678)!=x679)+x680);

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x688 = INT16_MAX;
	static volatile int32_t t148 = 5;

    t148 = (((x685-x686)!=x687)+x688);

    if (t148 != 32768) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x689 = 11415867LLU;
	int16_t x691 = INT16_MAX;
	int64_t x692 = -1LL;
	static int64_t t149 = 196383314LL;

    t149 = (((x689-x690)!=x691)+x692);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x694 = -1LL;
	static int16_t x695 = -6;
	int64_t x696 = INT64_MIN;

    t150 = (((x693-x694)!=x695)+x696);

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x697 = -1;
	int8_t x698 = 10;
	int64_t x700 = 0LL;
	int64_t t151 = -2026233106379LL;

    t151 = (((x697-x698)!=x699)+x700);

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x701 = INT8_MAX;
	int32_t x702 = -180069;
	int8_t x703 = -1;
	static uint8_t x704 = 0U;
	int32_t t152 = 6807;

    t152 = (((x701-x702)!=x703)+x704);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x705 = 85U;
	static uint16_t x706 = 0U;
	int32_t t153 = 83345468;

    t153 = (((x705-x706)!=x707)+x708);

    if (t153 != 5729) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x710 = UINT16_MAX;
	uint64_t x712 = UINT64_MAX;

    t154 = (((x709-x710)!=x711)+x712);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x715 = UINT8_MAX;
	int8_t x716 = INT8_MAX;
	volatile int32_t t155 = 40311612;

    t155 = (((x713-x714)!=x715)+x716);

    if (t155 != 128) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x717 = UINT8_MAX;
	volatile int32_t x718 = 15462940;
	int64_t x720 = INT64_MIN;
	volatile int64_t t156 = 3LL;

    t156 = (((x717-x718)!=x719)+x720);

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x722 = INT64_MAX;
	volatile uint16_t x724 = UINT16_MAX;
	volatile int32_t t157 = -238;

    t157 = (((x721-x722)!=x723)+x724);

    if (t157 != 65536) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x725 = -268950LL;
	int64_t x727 = INT64_MAX;
	volatile int32_t x728 = INT32_MIN;
	static int32_t t158 = -7665;

    t158 = (((x725-x726)!=x727)+x728);

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x729 = -1;
	int8_t x731 = -1;
	int32_t x732 = -1;
	static int32_t t159 = 35521;

    t159 = (((x729-x730)!=x731)+x732);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x735 = UINT8_MAX;
	uint8_t x736 = 17U;
	int32_t t160 = -1;

    t160 = (((x733-x734)!=x735)+x736);

    if (t160 != 18) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x737 = 9678806994LLU;
	int32_t x738 = -1;
	int32_t x740 = 1158702;
	volatile int32_t t161 = -1698;

    t161 = (((x737-x738)!=x739)+x740);

    if (t161 != 1158703) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x741 = INT8_MIN;
	uint64_t x742 = 2819821131286LLU;
	static int16_t x743 = INT16_MIN;
	uint32_t x744 = UINT32_MAX;
	uint32_t t162 = 44023U;

    t162 = (((x741-x742)!=x743)+x744);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x754 = 63U;
	static int32_t x755 = INT32_MIN;
	int64_t x756 = -1482LL;

    t163 = (((x753-x754)!=x755)+x756);

    if (t163 != -1481LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x757 = -1;
	static uint32_t x758 = 8338050U;
	int8_t x759 = 0;
	int64_t x760 = INT64_MIN;
	int64_t t164 = -1072865803502114761LL;

    t164 = (((x757-x758)!=x759)+x760);

    if (t164 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x765 = INT8_MIN;
	static int32_t x767 = INT32_MIN;
	int32_t x768 = INT32_MIN;
	volatile int32_t t165 = 36997;

    t165 = (((x765-x766)!=x767)+x768);

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x770 = 956367814LLU;
	int16_t x771 = INT16_MAX;
	static int64_t x772 = -1LL;
	volatile int64_t t166 = -295864374LL;

    t166 = (((x769-x770)!=x771)+x772);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x773 = INT16_MIN;
	int8_t x774 = INT8_MAX;
	int32_t x775 = -362632558;
	uint32_t x776 = 14977781U;
	uint32_t t167 = 568780U;

    t167 = (((x773-x774)!=x775)+x776);

    if (t167 != 14977782U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x777 = 3240507U;
	int16_t x779 = INT16_MIN;
	static int64_t x780 = -1LL;
	static int64_t t168 = -12117LL;

    t168 = (((x777-x778)!=x779)+x780);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x785 = INT8_MIN;
	volatile int16_t x786 = 31;
	int8_t x787 = 12;
	volatile uint64_t t169 = 1385011LLU;

    t169 = (((x785-x786)!=x787)+x788);

    if (t169 != 186429LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x789 = INT16_MIN;
	static int64_t x790 = 19951807312308996LL;
	static uint8_t x792 = UINT8_MAX;

    t170 = (((x789-x790)!=x791)+x792);

    if (t170 != 256) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x793 = 4347U;
	volatile uint32_t x794 = UINT32_MAX;
	uint8_t x796 = 58U;
	volatile int32_t t171 = -29;

    t171 = (((x793-x794)!=x795)+x796);

    if (t171 != 59) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x797 = INT64_MIN;
	int8_t x798 = -14;
	uint64_t x800 = UINT64_MAX;
	volatile uint64_t t172 = 53097085937296888LLU;

    t172 = (((x797-x798)!=x799)+x800);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x802 = 2U;
	volatile uint8_t x803 = UINT8_MAX;
	static uint16_t x804 = 5U;
	volatile int32_t t173 = 9;

    t173 = (((x801-x802)!=x803)+x804);

    if (t173 != 6) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x809 = -20;
	static int64_t x811 = -1642782LL;
	static int64_t x812 = -1LL;

    t174 = (((x809-x810)!=x811)+x812);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x813 = INT8_MAX;
	volatile int32_t x814 = 211346655;
	volatile int16_t x815 = INT16_MAX;
	volatile int32_t x816 = -2319930;
	int32_t t175 = -211;

    t175 = (((x813-x814)!=x815)+x816);

    if (t175 != -2319929) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x818 = INT8_MAX;

    t176 = (((x817-x818)!=x819)+x820);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x821 = UINT32_MAX;
	int32_t x822 = -1;
	volatile int64_t x823 = -5883525LL;
	int8_t x824 = INT8_MAX;

    t177 = (((x821-x822)!=x823)+x824);

    if (t177 != 128) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x825 = INT32_MIN;
	static uint32_t x826 = 7U;
	static volatile int64_t x827 = -331LL;
	int64_t x828 = -1LL;
	static int64_t t178 = -1961211844260489LL;

    t178 = (((x825-x826)!=x827)+x828);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x833 = 6109;
	static int32_t x834 = -355891935;
	volatile uint16_t x835 = 392U;
	static volatile int64_t x836 = INT64_MIN;
	volatile int64_t t179 = 1LL;

    t179 = (((x833-x834)!=x835)+x836);

    if (t179 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x837 = INT16_MAX;
	int32_t x838 = -1;
	static int32_t x839 = 0;
	int32_t x840 = -451055664;
	int32_t t180 = 129;

    t180 = (((x837-x838)!=x839)+x840);

    if (t180 != -451055663) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x841 = INT8_MIN;
	static uint16_t x842 = 174U;
	static int8_t x843 = INT8_MIN;
	volatile uint32_t x844 = 0U;
	volatile uint32_t t181 = 0U;

    t181 = (((x841-x842)!=x843)+x844);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x845 = 101U;
	int32_t x846 = -8374638;
	int16_t x847 = -1;
	static uint8_t x848 = 37U;
	int32_t t182 = -113994658;

    t182 = (((x845-x846)!=x847)+x848);

    if (t182 != 38) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x849 = -1LL;
	int8_t x850 = INT8_MIN;
	int16_t x851 = INT16_MIN;
	uint32_t t183 = 56693U;

    t183 = (((x849-x850)!=x851)+x852);

    if (t183 != 1812905U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x853 = INT32_MIN;
	uint32_t x854 = 100U;
	volatile int64_t x855 = -79993572920LL;
	static uint16_t x856 = 653U;
	int32_t t184 = 129923;

    t184 = (((x853-x854)!=x855)+x856);

    if (t184 != 654) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x857 = UINT32_MAX;
	static volatile int16_t x858 = 2;
	volatile int16_t x859 = INT16_MAX;
	int8_t x860 = -1;
	static volatile int32_t t185 = -1;

    t185 = (((x857-x858)!=x859)+x860);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x862 = 0;
	volatile uint16_t x863 = 365U;
	volatile int8_t x864 = -1;
	volatile int32_t t186 = 71352;

    t186 = (((x861-x862)!=x863)+x864);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x865 = 65107260270654024LLU;
	int16_t x866 = INT16_MIN;
	uint16_t x867 = UINT16_MAX;
	uint16_t x868 = 696U;
	volatile int32_t t187 = 92733;

    t187 = (((x865-x866)!=x867)+x868);

    if (t187 != 697) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x869 = 14565;
	static volatile uint32_t x870 = 60526U;
	int8_t x871 = -1;
	volatile int64_t x872 = 58094446105795LL;
	volatile int64_t t188 = 6971345LL;

    t188 = (((x869-x870)!=x871)+x872);

    if (t188 != 58094446105796LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x877 = -121534557601099264LL;
	int8_t x878 = INT8_MIN;
	int64_t x879 = INT64_MAX;
	static uint16_t x880 = 17U;
	int32_t t189 = 236376;

    t189 = (((x877-x878)!=x879)+x880);

    if (t189 != 18) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x885 = 837865138;
	volatile uint16_t x886 = UINT16_MAX;
	int32_t x887 = INT32_MIN;
	volatile uint32_t x888 = UINT32_MAX;
	uint32_t t190 = 1672161U;

    t190 = (((x885-x886)!=x887)+x888);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x894 = 17U;
	int64_t x895 = INT64_MIN;
	int64_t x896 = INT64_MIN;

    t191 = (((x893-x894)!=x895)+x896);

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x901 = INT8_MAX;
	volatile uint64_t x902 = 46631LLU;
	volatile int8_t x903 = INT8_MAX;
	int64_t x904 = INT64_MIN;

    t192 = (((x901-x902)!=x903)+x904);

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x911 = -1;
	int64_t x912 = -2037511395271875LL;
	int64_t t193 = -10LL;

    t193 = (((x909-x910)!=x911)+x912);

    if (t193 != -2037511395271874LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x913 = INT16_MIN;
	uint64_t x914 = 7722659449524771LLU;
	static volatile uint8_t x915 = UINT8_MAX;
	volatile int16_t x916 = INT16_MIN;

    t194 = (((x913-x914)!=x915)+x916);

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x917 = 13062442;
	uint8_t x918 = UINT8_MAX;
	int8_t x919 = INT8_MAX;
	static volatile int8_t x920 = INT8_MIN;
	int32_t t195 = 5917;

    t195 = (((x917-x918)!=x919)+x920);

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x921 = 22U;
	static uint16_t x922 = 13U;
	int32_t x923 = INT32_MAX;
	static int32_t x924 = INT32_MIN;

    t196 = (((x921-x922)!=x923)+x924);

    if (t196 != -2147483647) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x926 = INT16_MIN;
	uint64_t x927 = 25934999302760LLU;
	int64_t x928 = -29LL;
	int64_t t197 = 55813984429465LL;

    t197 = (((x925-x926)!=x927)+x928);

    if (t197 != -28LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x929 = 2483U;
	int32_t x930 = INT32_MAX;
	int32_t x931 = INT32_MAX;
	uint32_t x932 = 8U;
	uint32_t t198 = 350881763U;

    t198 = (((x929-x930)!=x931)+x932);

    if (t198 != 9U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x933 = -1;
	uint64_t x934 = 682069111713036LLU;
	int32_t x935 = INT32_MIN;
	static int64_t x936 = -19LL;
	volatile int64_t t199 = -3640187985LL;

    t199 = (((x933-x934)!=x935)+x936);

    if (t199 != -18LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

