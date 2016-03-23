
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

int8_t x10 = -62;
int32_t x17 = -1588;
int8_t x23 = INT8_MAX;
volatile int32_t t5 = -72326432;
uint32_t x31 = 28005U;
int16_t x36 = 1;
int32_t t7 = 0;
int16_t x40 = -1;
volatile uint16_t x47 = 31203U;
uint8_t x48 = 0U;
int64_t t9 = 1389LL;
volatile uint64_t x49 = 16024LLU;
volatile int64_t x52 = 19LL;
uint64_t t10 = 96224409193LLU;
int32_t x56 = INT32_MIN;
int32_t t11 = -464107;
uint8_t x68 = 12U;
uint32_t x71 = 3U;
volatile int32_t t14 = 2434938;
static int16_t x78 = 112;
static int8_t x81 = -1;
int8_t x85 = -53;
int32_t x87 = -140389;
volatile int64_t x95 = INT64_MAX;
static uint16_t x100 = UINT16_MAX;
int32_t t21 = 498485858;
volatile int64_t x105 = INT64_MIN;
int8_t x106 = -1;
volatile int64_t t22 = 461296528436LL;
uint32_t x109 = 365U;
static int16_t x118 = -1;
volatile int8_t x122 = INT8_MIN;
int32_t x123 = INT32_MIN;
int8_t x130 = -1;
int8_t x132 = 5;
int64_t t27 = 0LL;
static int32_t x134 = -1;
static int64_t x135 = -1LL;
uint8_t x137 = 1U;
uint8_t x141 = UINT8_MAX;
static int32_t x144 = INT32_MIN;
uint64_t x145 = 4206975462648LLU;
volatile uint64_t t31 = 219307LLU;
uint32_t x149 = UINT32_MAX;
static int32_t x151 = INT32_MAX;
uint32_t x160 = UINT32_MAX;
volatile uint32_t x162 = 862112951U;
int64_t x169 = -1LL;
int16_t x184 = INT16_MIN;
uint8_t x191 = 5U;
volatile int32_t t44 = -1;
uint32_t t45 = 4875567U;
volatile int16_t x206 = -7156;
uint64_t x219 = UINT64_MAX;
static int64_t x220 = INT64_MIN;
int32_t x221 = 0;
uint64_t x227 = 90LLU;
int64_t x228 = INT64_MIN;
int16_t x230 = INT16_MIN;
volatile int32_t t52 = -280271;
int8_t x233 = INT8_MIN;
volatile int64_t x236 = -1LL;
static volatile uint64_t t53 = 497383LLU;
uint32_t x244 = 2116647354U;
static int64_t x246 = INT64_MIN;
volatile int64_t t56 = 424868094308LL;
volatile int8_t x250 = INT8_MAX;
static uint64_t x254 = UINT64_MAX;
int16_t x257 = 1;
int64_t x260 = -7650150269LL;
static int16_t x264 = INT16_MIN;
int32_t x267 = INT32_MIN;
uint64_t x270 = UINT64_MAX;
uint16_t x274 = 1166U;
static uint16_t x278 = UINT16_MAX;
volatile int8_t x293 = INT8_MIN;
volatile uint16_t x298 = 15462U;
uint64_t x301 = 2338629722949599341LLU;
uint32_t x307 = 0U;
volatile int64_t t71 = -88499026613011664LL;
static volatile int32_t t72 = -3910510;
volatile int8_t x317 = -1;
uint8_t x320 = 0U;
volatile int64_t t73 = 272488947933LL;
volatile int16_t x321 = INT16_MIN;
static uint32_t x322 = 1945U;
int32_t x323 = INT32_MIN;
int32_t x328 = 119032;
volatile int32_t x332 = INT32_MAX;
int32_t x333 = INT32_MAX;
int16_t x339 = 1;
int16_t x344 = INT16_MAX;
static int32_t x347 = INT32_MAX;
int8_t x352 = INT8_MIN;
volatile uint16_t x354 = 1U;
int8_t x360 = INT8_MIN;
volatile int8_t x362 = INT8_MIN;
static volatile int32_t t85 = 0;
int32_t x369 = 230;
static uint32_t x370 = UINT32_MAX;
static uint32_t t86 = 1972386U;
int8_t x373 = -1;
volatile int64_t t87 = 11392LL;
int64_t t88 = 517757945LL;
int8_t x381 = INT8_MAX;
int32_t x386 = INT32_MIN;
volatile int32_t t90 = 1713;
int8_t x393 = -1;
int16_t x400 = INT16_MAX;
volatile uint8_t x404 = 3U;
static int8_t x408 = INT8_MIN;
int16_t x419 = INT16_MIN;
int32_t x421 = INT32_MAX;
int16_t x432 = INT16_MIN;
uint16_t x434 = 2429U;
int64_t x439 = 3LL;
int32_t x448 = INT32_MIN;
static int16_t x449 = INT16_MIN;
int8_t x452 = 0;
int32_t t106 = 698395763;
int16_t x458 = -1;
static int64_t t108 = -792309449346LL;
volatile uint32_t t109 = 482416090U;
static volatile uint8_t x465 = 15U;
uint8_t x466 = UINT8_MAX;
int32_t t110 = 1068565;
uint16_t x470 = 2137U;
volatile uint64_t x475 = UINT64_MAX;
int32_t t112 = 31320494;
int16_t x479 = INT16_MAX;
uint32_t x480 = 5U;
int64_t x482 = 90109325527710LL;
static int64_t x490 = -920989986991LL;
static uint32_t x495 = 59U;
int64_t x497 = 2257791LL;
static int16_t x498 = -163;
int8_t x515 = 0;
volatile uint32_t t122 = 57U;
volatile int64_t t125 = -6184242664723764LL;
int64_t x541 = 41054934773301113LL;
static int8_t x547 = INT8_MIN;
volatile uint32_t t131 = 2213U;
uint32_t x561 = 40528U;
int8_t x568 = -1;
static uint8_t x573 = 0U;
static int8_t x580 = INT8_MIN;
static volatile uint64_t x585 = UINT64_MAX;
uint32_t x589 = 237646784U;
static uint64_t x593 = 6LLU;
int64_t x595 = 131LL;
volatile int64_t x597 = -1026835262016LL;
int8_t x598 = 13;
int16_t x599 = -1;
uint16_t x601 = UINT16_MAX;
int16_t x604 = INT16_MAX;
static int16_t x607 = -1;
uint16_t x612 = 1086U;
uint32_t t146 = 1U;
uint64_t x613 = 1694223824LLU;
int16_t x614 = INT16_MIN;
volatile uint64_t t147 = 153500873127124LLU;
volatile uint32_t x618 = UINT32_MAX;
int8_t x629 = 24;
int8_t x630 = INT8_MIN;
int64_t x631 = -192201516644718LL;
int8_t x634 = INT8_MAX;
volatile uint8_t x635 = UINT8_MAX;
int64_t t154 = -7087LL;
uint8_t x652 = 103U;
uint16_t x656 = UINT16_MAX;
volatile int64_t t157 = 263108382470LL;
static volatile int8_t x660 = 29;
int64_t x664 = INT64_MIN;
volatile int32_t x667 = -40831695;
int64_t x669 = INT64_MIN;
static int16_t x672 = INT16_MAX;
int8_t x676 = -1;
int16_t x677 = INT16_MIN;
volatile uint32_t x683 = UINT32_MAX;
int32_t x686 = INT32_MAX;
int64_t x693 = INT64_MAX;
int64_t t167 = 1677LL;
int64_t x698 = INT64_MIN;
int8_t x705 = -9;
int32_t x711 = INT32_MIN;
int64_t t171 = -140895782246836414LL;
int64_t x714 = -1LL;
int16_t x725 = INT16_MIN;
int16_t x726 = -1;
volatile int64_t t176 = -48790080288029LL;
int64_t t177 = 1453724043346847LL;
int16_t x743 = -1;
static volatile int32_t t180 = 0;
volatile int16_t x750 = INT16_MIN;
int16_t x770 = 158;
volatile int32_t t186 = 182842511;
int16_t x776 = INT16_MIN;
static volatile int32_t t188 = -37450465;
static uint16_t x781 = 118U;
volatile uint16_t x787 = 113U;
int32_t t190 = 517078;
int32_t x790 = -1;
int8_t x791 = INT8_MIN;
int16_t x792 = INT16_MAX;
int32_t t191 = 262002309;
uint64_t t192 = 2114454LLU;
int64_t x801 = INT64_MIN;
uint64_t x802 = 47LLU;
static uint64_t t194 = 27770788409637LLU;
volatile int64_t x806 = -2156039LL;
volatile uint32_t x814 = 441861425U;
uint64_t x815 = 5935802873LLU;
uint32_t t197 = 509095U;
uint64_t x826 = 158504685622LLU;


void f0(void) {
    	int32_t x1 = -1;
	uint64_t x2 = 17002209342LLU;
	static uint16_t x3 = UINT16_MAX;
	static int16_t x4 = INT16_MIN;
	static volatile uint64_t t0 = 146368LLU;

    t0 = ((x1%x2)-(x3==x4));

    if (t0 != 9502587177LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 26U;
	int64_t x6 = -1LL;
	int8_t x7 = -15;
	volatile int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -14656LL;

    t1 = ((x5%x6)-(x7==x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	static uint64_t x11 = UINT64_MAX;
	int64_t x12 = 21692LL;
	int32_t t2 = 44;

    t2 = ((x9%x10)-(x11==x12));

    if (t2 != 31) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x18 = INT8_MIN;
	static uint32_t x19 = 1U;
	int32_t x20 = INT32_MIN;
	int32_t t3 = 14082586;

    t3 = ((x17%x18)-(x19==x20));

    if (t3 != -52) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 133081863205LLU;
	int32_t x22 = INT32_MIN;
	uint64_t x24 = UINT64_MAX;
	static volatile uint64_t t4 = 322534LLU;

    t4 = ((x21%x22)-(x23==x24));

    if (t4 != 133081863205LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x25 = 53U;
	int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MIN;
	static int8_t x28 = -1;

    t5 = ((x25%x26)-(x27==x28));

    if (t5 != 53) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x29 = -11645;
	int8_t x30 = INT8_MIN;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 178486;

    t6 = ((x29%x30)-(x31==x32));

    if (t6 != -125) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = INT16_MIN;
	volatile int8_t x34 = INT8_MAX;
	int16_t x35 = INT16_MAX;

    t7 = ((x33%x34)-(x35==x36));

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x37 = UINT32_MAX;
	int64_t x38 = INT64_MIN;
	static int8_t x39 = INT8_MAX;
	volatile int64_t t8 = -129535856579804818LL;

    t8 = ((x37%x38)-(x39==x40));

    if (t8 != 4294967295LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = 1229U;
	int64_t x46 = -1LL;

    t9 = ((x45%x46)-(x47==x48));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x50 = INT16_MIN;
	int32_t x51 = -1;

    t10 = ((x49%x50)-(x51==x52));

    if (t10 != 16024LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 0U;
	volatile int32_t x54 = -1;
	int8_t x55 = INT8_MIN;

    t11 = ((x53%x54)-(x55==x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MIN;
	int32_t x58 = INT32_MIN;
	static uint64_t x59 = 17305965LLU;
	uint64_t x60 = 72056070395309844LLU;
	int64_t t12 = -43379943295233697LL;

    t12 = ((x57%x58)-(x59==x60));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x65 = 2U;
	int32_t x66 = INT32_MIN;
	volatile int8_t x67 = 3;
	volatile int32_t t13 = 530;

    t13 = ((x65%x66)-(x67==x68));

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = -1;
	int16_t x70 = 65;
	int64_t x72 = INT64_MAX;

    t14 = ((x69%x70)-(x71==x72));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x73 = -1903273022606LL;
	volatile int64_t x74 = 3LL;
	uint16_t x75 = UINT16_MAX;
	static int16_t x76 = -1;
	volatile int64_t t15 = -21804878840881LL;

    t15 = ((x73%x74)-(x75==x76));

    if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MIN;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = UINT8_MAX;
	static int32_t t16 = -62019944;

    t16 = ((x77%x78)-(x79==x80));

    if (t16 != -16) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x82 = INT32_MAX;
	static int32_t x83 = 7226;
	int32_t x84 = INT32_MIN;
	volatile int32_t t17 = 34107;

    t17 = ((x81%x82)-(x83==x84));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x86 = INT64_MAX;
	int8_t x88 = -1;
	int64_t t18 = -1133100304562975088LL;

    t18 = ((x85%x86)-(x87==x88));

    if (t18 != -53LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x93 = 760U;
	int32_t x94 = INT32_MAX;
	int8_t x96 = 7;
	volatile int32_t t19 = -1029030017;

    t19 = ((x93%x94)-(x95==x96));

    if (t19 != 760) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = 7964895664569470LL;
	static volatile uint16_t x98 = UINT16_MAX;
	int64_t x99 = INT64_MIN;
	static int64_t t20 = 26LL;

    t20 = ((x97%x98)-(x99==x100));

    if (t20 != 37220LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = INT32_MIN;
	static int8_t x102 = 12;
	static int16_t x103 = -1;
	uint32_t x104 = 81003U;

    t21 = ((x101%x102)-(x103==x104));

    if (t21 != -8) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x107 = -1;
	int32_t x108 = 3366;

    t22 = ((x105%x106)-(x107==x108));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	volatile uint32_t x112 = UINT32_MAX;
	uint32_t t23 = 1U;

    t23 = ((x109%x110)-(x111==x112));

    if (t23 != 365U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	uint32_t x116 = 96025007U;
	volatile int32_t t24 = 1;

    t24 = ((x113%x114)-(x115==x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x117 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MIN;
	volatile int32_t t25 = -6262;

    t25 = ((x117%x118)-(x119==x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x121 = 5976917LLU;
	static int32_t x124 = -68;
	volatile uint64_t t26 = 17718137706068486LLU;

    t26 = ((x121%x122)-(x123==x124));

    if (t26 != 5976917LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x129 = INT64_MIN;
	int32_t x131 = -1;

    t27 = ((x129%x130)-(x131==x132));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x136 = -1;
	static volatile int32_t t28 = -28779;

    t28 = ((x133%x134)-(x135==x136));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x138 = UINT64_MAX;
	int8_t x139 = -1;
	static uint32_t x140 = UINT32_MAX;
	volatile uint64_t t29 = 669037LLU;

    t29 = ((x137%x138)-(x139==x140));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x142 = 205385LLU;
	int8_t x143 = INT8_MIN;
	static uint64_t t30 = 8509578LLU;

    t30 = ((x141%x142)-(x143==x144));

    if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x146 = 646LLU;
	int8_t x147 = INT8_MAX;
	int16_t x148 = -1;

    t31 = ((x145%x146)-(x147==x148));

    if (t31 != 266LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x150 = -1;
	volatile int32_t x152 = INT32_MIN;
	uint32_t t32 = 2U;

    t32 = ((x149%x150)-(x151==x152));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x153 = 280985U;
	int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MIN;
	uint32_t x156 = 98365U;
	uint32_t t33 = 37471997U;

    t33 = ((x153%x154)-(x155==x156));

    if (t33 != 280985U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x157 = 2256958U;
	volatile int32_t x158 = INT32_MIN;
	int16_t x159 = 2090;
	volatile uint32_t t34 = 26327947U;

    t34 = ((x157%x158)-(x159==x160));

    if (t34 != 2256958U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x163 = -29;
	int64_t x164 = -73341969LL;
	int64_t t35 = -41742717055927915LL;

    t35 = ((x161%x162)-(x163==x164));

    if (t35 != -105750520LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = 0;
	static volatile uint16_t x166 = 1686U;
	volatile uint64_t x167 = 2128023159494LLU;
	static volatile int32_t x168 = -9;
	volatile int32_t t36 = 84596;

    t36 = ((x165%x166)-(x167==x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile int64_t t37 = 1764616180003525LL;

    t37 = ((x169%x170)-(x171==x172));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x173 = 3U;
	static int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	volatile uint32_t x176 = UINT32_MAX;
	int32_t t38 = 76138;

    t38 = ((x173%x174)-(x175==x176));

    if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = INT8_MIN;
	static volatile int32_t x178 = INT32_MAX;
	int64_t x179 = -107703915375026216LL;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t39 = -145174636;

    t39 = ((x177%x178)-(x179==x180));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint16_t x181 = 0U;
	volatile int64_t x182 = -1LL;
	uint8_t x183 = 5U;
	volatile int64_t t40 = 72949420795016LL;

    t40 = ((x181%x182)-(x183==x184));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x185 = UINT8_MAX;
	uint32_t x186 = UINT32_MAX;
	static int16_t x187 = INT16_MIN;
	static int8_t x188 = -1;
	volatile uint32_t t41 = 22U;

    t41 = ((x185%x186)-(x187==x188));

    if (t41 != 255U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x189 = -1;
	int16_t x190 = INT16_MAX;
	int8_t x192 = -12;
	volatile int32_t t42 = -1114;

    t42 = ((x189%x190)-(x191==x192));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x193 = 298U;
	uint64_t x194 = UINT64_MAX;
	int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MAX;
	volatile uint64_t t43 = 14107LLU;

    t43 = ((x193%x194)-(x195==x196));

    if (t43 != 297LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x197 = 3U;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 13676U;
	uint32_t x200 = 8211110U;

    t44 = ((x197%x198)-(x199==x200));

    if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x201 = 260672U;
	uint8_t x202 = 2U;
	uint16_t x203 = 14U;
	int16_t x204 = INT16_MAX;

    t45 = ((x201%x202)-(x203==x204));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x205 = UINT8_MAX;
	int8_t x207 = INT8_MIN;
	volatile uint32_t x208 = UINT32_MAX;
	volatile int32_t t46 = -5262825;

    t46 = ((x205%x206)-(x207==x208));

    if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x209 = 0;
	volatile uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MAX;
	static uint32_t t47 = 13402416U;

    t47 = ((x209%x210)-(x211==x212));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x213 = -760842077652979634LL;
	static uint16_t x214 = 6797U;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	int64_t t48 = 41907839235LL;

    t48 = ((x213%x214)-(x215==x216));

    if (t48 != -4701LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x217 = UINT64_MAX;
	int8_t x218 = INT8_MIN;
	static volatile uint64_t t49 = 69126755038LLU;

    t49 = ((x217%x218)-(x219==x220));

    if (t49 != 127LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x222 = 124168669549489431LL;
	uint64_t x223 = 2824424998LLU;
	int8_t x224 = -61;
	volatile int64_t t50 = 1044LL;

    t50 = ((x221%x222)-(x223==x224));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x225 = 1735;
	volatile int64_t x226 = INT64_MAX;
	static volatile int64_t t51 = 1378254643668LL;

    t51 = ((x225%x226)-(x227==x228));

    if (t51 != 1735LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x229 = -6;
	uint64_t x231 = 91222874871879LLU;
	int32_t x232 = INT32_MIN;

    t52 = ((x229%x230)-(x231==x232));

    if (t52 != -6) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x234 = 202385398925LLU;
	volatile int32_t x235 = INT32_MIN;

    t53 = ((x233%x234)-(x235==x236));

    if (t53 != 36271162613LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x237 = 1207929321826LLU;
	int32_t x238 = INT32_MAX;
	int64_t x239 = INT64_MAX;
	int64_t x240 = 11596137926LL;
	volatile uint64_t t54 = 447198LLU;

    t54 = ((x237%x238)-(x239==x240));

    if (t54 != 1043512212LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x241 = 1079187;
	uint32_t x242 = 588U;
	uint16_t x243 = 926U;
	volatile uint32_t t55 = 267U;

    t55 = ((x241%x242)-(x243==x244));

    if (t55 != 207U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x245 = INT8_MAX;
	uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MAX;

    t56 = ((x245%x246)-(x247==x248));

    if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x249 = INT32_MAX;
	static int8_t x251 = INT8_MAX;
	static volatile int16_t x252 = 0;
	volatile int32_t t57 = -163016;

    t57 = ((x249%x250)-(x251==x252));

    if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x253 = 14425;
	volatile int16_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile uint64_t t58 = 4172529570314LLU;

    t58 = ((x253%x254)-(x255==x256));

    if (t58 != 14424LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x258 = INT16_MIN;
	static int64_t x259 = INT64_MIN;
	int32_t t59 = -96;

    t59 = ((x257%x258)-(x259==x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x261 = 19U;
	static int16_t x262 = INT16_MIN;
	uint64_t x263 = 14502436340981636LLU;
	int32_t t60 = 29;

    t60 = ((x261%x262)-(x263==x264));

    if (t60 != 19) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x265 = 22;
	int16_t x266 = -1;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t61 = 88587346;

    t61 = ((x265%x266)-(x267==x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x269 = INT32_MAX;
	int32_t x271 = 251763;
	int8_t x272 = INT8_MIN;
	uint64_t t62 = 12230LLU;

    t62 = ((x269%x270)-(x271==x272));

    if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x273 = -1;
	int16_t x275 = -4773;
	static int16_t x276 = INT16_MAX;
	int32_t t63 = 880;

    t63 = ((x273%x274)-(x275==x276));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x277 = -48;
	static uint32_t x279 = 115U;
	volatile int8_t x280 = INT8_MIN;
	int32_t t64 = 374;

    t64 = ((x277%x278)-(x279==x280));

    if (t64 != -48) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x281 = INT8_MIN;
	uint8_t x282 = 112U;
	static uint32_t x283 = UINT32_MAX;
	static int8_t x284 = -1;
	volatile int32_t t65 = -14552336;

    t65 = ((x281%x282)-(x283==x284));

    if (t65 != -17) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x285 = INT16_MIN;
	static uint8_t x286 = 3U;
	static uint64_t x287 = UINT64_MAX;
	int8_t x288 = 1;
	volatile int32_t t66 = -18284449;

    t66 = ((x285%x286)-(x287==x288));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x289 = INT32_MIN;
	int64_t x290 = -13660072LL;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = INT64_MIN;
	static int64_t t67 = -8031455573774LL;

    t67 = ((x289%x290)-(x291==x292));

    if (t67 != -2852344LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x294 = 20LLU;
	int16_t x295 = INT16_MAX;
	volatile int32_t x296 = -6;
	volatile uint64_t t68 = 1280195LLU;

    t68 = ((x293%x294)-(x295==x296));

    if (t68 != 8LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x297 = INT16_MAX;
	volatile uint16_t x299 = 7U;
	static int64_t x300 = -1521108366099LL;
	volatile int32_t t69 = 104499;

    t69 = ((x297%x298)-(x299==x300));

    if (t69 != 1843) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x302 = INT32_MIN;
	static int8_t x303 = -1;
	volatile uint64_t x304 = 2293LLU;
	uint64_t t70 = 147608745824669LLU;

    t70 = ((x301%x302)-(x303==x304));

    if (t70 != 2338629722949599341LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int64_t x305 = 698042388792LL;
	int64_t x306 = -1LL;
	int64_t x308 = -19356172883LL;

    t71 = ((x305%x306)-(x307==x308));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x309 = -38;
	int8_t x310 = 1;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = 3;

    t72 = ((x309%x310)-(x311==x312));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x318 = -1LL;
	int64_t x319 = INT64_MAX;

    t73 = ((x317%x318)-(x319==x320));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x324 = -1;
	volatile uint32_t t74 = 451144848U;

    t74 = ((x321%x322)-(x323==x324));

    if (t74 != 1088U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x325 = INT64_MAX;
	uint32_t x326 = 505790U;
	int8_t x327 = INT8_MAX;
	volatile int64_t t75 = 7800070193LL;

    t75 = ((x325%x326)-(x327==x328));

    if (t75 != 130837LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = -21662603;
	int8_t x330 = INT8_MAX;
	int32_t x331 = -9559684;
	int32_t t76 = -42;

    t76 = ((x329%x330)-(x331==x332));

    if (t76 != -86) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x334 = INT8_MAX;
	int16_t x335 = INT16_MIN;
	static uint32_t x336 = 1703284U;
	int32_t t77 = 109614412;

    t77 = ((x333%x334)-(x335==x336));

    if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x337 = 507;
	uint32_t x338 = UINT32_MAX;
	static int32_t x340 = 15;
	static uint32_t t78 = 11U;

    t78 = ((x337%x338)-(x339==x340));

    if (t78 != 507U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x341 = 4348U;
	volatile int16_t x342 = INT16_MAX;
	uint64_t x343 = 303475734771859LLU;
	static volatile uint32_t t79 = 15011U;

    t79 = ((x341%x342)-(x343==x344));

    if (t79 != 4348U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x345 = 10U;
	volatile int16_t x346 = 1750;
	int8_t x348 = -1;
	int32_t t80 = -3809615;

    t80 = ((x345%x346)-(x347==x348));

    if (t80 != 10) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x349 = -444;
	int64_t x350 = -22189LL;
	int8_t x351 = INT8_MIN;
	volatile int64_t t81 = -140120244747LL;

    t81 = ((x349%x350)-(x351==x352));

    if (t81 != -445LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x353 = 14115U;
	static volatile int64_t x355 = -578821707LL;
	uint8_t x356 = UINT8_MAX;
	int32_t t82 = -9565;

    t82 = ((x353%x354)-(x355==x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x357 = UINT8_MAX;
	uint16_t x358 = 227U;
	uint64_t x359 = 38561LLU;
	volatile int32_t t83 = -4665841;

    t83 = ((x357%x358)-(x359==x360));

    if (t83 != 28) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x361 = INT8_MAX;
	static int64_t x363 = -1LL;
	int64_t x364 = -1LL;
	int32_t t84 = 1100037;

    t84 = ((x361%x362)-(x363==x364));

    if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = INT16_MAX;
	int16_t x366 = INT16_MIN;
	volatile uint8_t x367 = 102U;
	int8_t x368 = INT8_MIN;

    t85 = ((x365%x366)-(x367==x368));

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x371 = -1LL;
	int32_t x372 = 10523;

    t86 = ((x369%x370)-(x371==x372));

    if (t86 != 230U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x374 = -1LL;
	volatile int8_t x375 = -1;
	static uint64_t x376 = 10569689949038LLU;

    t87 = ((x373%x374)-(x375==x376));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x377 = INT64_MIN;
	uint8_t x378 = 2U;
	static volatile int32_t x379 = 4764220;
	int32_t x380 = INT32_MIN;

    t88 = ((x377%x378)-(x379==x380));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x382 = UINT16_MAX;
	int16_t x383 = INT16_MAX;
	static int16_t x384 = -1;
	volatile int32_t t89 = -4;

    t89 = ((x381%x382)-(x383==x384));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x385 = INT32_MIN;
	static volatile uint16_t x387 = 51U;
	int16_t x388 = -1;

    t90 = ((x385%x386)-(x387==x388));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x390 = -2;
	int64_t x391 = -4321152915109605LL;
	static int64_t x392 = INT64_MAX;
	static volatile int32_t t91 = 1;

    t91 = ((x389%x390)-(x391==x392));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x394 = UINT32_MAX;
	uint64_t x395 = UINT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile uint32_t t92 = 38U;

    t92 = ((x393%x394)-(x395==x396));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x397 = 130285U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = 236556592LL;
	uint32_t t93 = 3612186U;

    t93 = ((x397%x398)-(x399==x400));

    if (t93 != 130285U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x401 = -1LL;
	uint64_t x402 = 2054491030723519372LLU;
	static volatile int16_t x403 = INT16_MIN;
	uint64_t t94 = 6455LLU;

    t94 = ((x401%x402)-(x403==x404));

    if (t94 != 2010815827921396639LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x405 = 7613317LL;
	uint32_t x406 = UINT32_MAX;
	int16_t x407 = 0;
	int64_t t95 = 109896408LL;

    t95 = ((x405%x406)-(x407==x408));

    if (t95 != 7613317LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x409 = 5625364247LLU;
	uint16_t x410 = 7292U;
	uint16_t x411 = UINT16_MAX;
	static int16_t x412 = INT16_MIN;
	static uint64_t t96 = 49277753740069106LLU;

    t96 = ((x409%x410)-(x411==x412));

    if (t96 != 1891LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	uint16_t x414 = 101U;
	int8_t x415 = -1;
	int16_t x416 = 64;
	static volatile uint32_t t97 = 956U;

    t97 = ((x413%x414)-(x415==x416));

    if (t97 != 67U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x417 = 3472U;
	volatile uint64_t x418 = UINT64_MAX;
	int32_t x420 = INT32_MAX;
	volatile uint64_t t98 = 152740331597571915LLU;

    t98 = ((x417%x418)-(x419==x420));

    if (t98 != 3472LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x422 = INT8_MIN;
	static int32_t x423 = 53378255;
	uint64_t x424 = 136067004LLU;
	static int32_t t99 = -2293925;

    t99 = ((x421%x422)-(x423==x424));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x425 = -1;
	uint8_t x426 = 35U;
	static int32_t x427 = INT32_MIN;
	uint8_t x428 = 7U;
	int32_t t100 = 201640;

    t100 = ((x425%x426)-(x427==x428));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x429 = 15U;
	volatile int32_t x430 = INT32_MAX;
	static int64_t x431 = INT64_MAX;
	volatile int32_t t101 = -1007045978;

    t101 = ((x429%x430)-(x431==x432));

    if (t101 != 15) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x433 = -1;
	static int16_t x435 = -3;
	volatile uint16_t x436 = 0U;
	static volatile int32_t t102 = 12281541;

    t102 = ((x433%x434)-(x435==x436));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x437 = -1;
	int16_t x438 = -1;
	volatile int16_t x440 = INT16_MIN;
	int32_t t103 = -7605;

    t103 = ((x437%x438)-(x439==x440));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x441 = 765083939;
	volatile int16_t x442 = 4;
	uint32_t x443 = UINT32_MAX;
	uint64_t x444 = 497315LLU;
	int32_t t104 = 18945400;

    t104 = ((x441%x442)-(x443==x444));

    if (t104 != 3) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x445 = 380LLU;
	int8_t x446 = 9;
	int32_t x447 = INT32_MIN;
	uint64_t t105 = 6943619LLU;

    t105 = ((x445%x446)-(x447==x448));

    if (t105 != 1LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x450 = 46U;
	static volatile uint32_t x451 = 163U;

    t106 = ((x449%x450)-(x451==x452));

    if (t106 != -16) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x453 = 0U;
	volatile int8_t x454 = -1;
	volatile uint8_t x455 = 11U;
	int64_t x456 = INT64_MIN;
	volatile int32_t t107 = 0;

    t107 = ((x453%x454)-(x455==x456));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x457 = INT64_MAX;
	int8_t x459 = INT8_MIN;
	static int64_t x460 = 251067LL;

    t108 = ((x457%x458)-(x459==x460));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x461 = 4639332U;
	volatile uint32_t x462 = UINT32_MAX;
	static int64_t x463 = INT64_MIN;
	int32_t x464 = -1;

    t109 = ((x461%x462)-(x463==x464));

    if (t109 != 4639332U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x467 = UINT32_MAX;
	int32_t x468 = INT32_MIN;

    t110 = ((x465%x466)-(x467==x468));

    if (t110 != 15) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x469 = UINT8_MAX;
	uint32_t x471 = 153512296U;
	uint16_t x472 = 590U;
	int32_t t111 = -1;

    t111 = ((x469%x470)-(x471==x472));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = INT16_MIN;
	volatile int8_t x474 = INT8_MIN;
	static volatile int8_t x476 = -1;

    t112 = ((x473%x474)-(x475==x476));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x477 = 3539528205755570000LLU;
	int8_t x478 = 22;
	volatile uint64_t t113 = 73152822888LLU;

    t113 = ((x477%x478)-(x479==x480));

    if (t113 != 16LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x481 = 2U;
	static int8_t x483 = INT8_MAX;
	int8_t x484 = INT8_MAX;
	int64_t t114 = 3814351501867784223LL;

    t114 = ((x481%x482)-(x483==x484));

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x485 = 952;
	int8_t x486 = -1;
	int8_t x487 = INT8_MIN;
	volatile int8_t x488 = -13;
	static volatile int32_t t115 = -773;

    t115 = ((x485%x486)-(x487==x488));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x489 = -40;
	uint32_t x491 = UINT32_MAX;
	volatile int16_t x492 = INT16_MIN;
	static int64_t t116 = -731316164207639LL;

    t116 = ((x489%x490)-(x491==x492));

    if (t116 != -40LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x493 = 876U;
	int32_t x494 = INT32_MAX;
	int32_t x496 = -493465;
	static volatile int32_t t117 = -474789100;

    t117 = ((x493%x494)-(x495==x496));

    if (t117 != 876) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x499 = INT32_MIN;
	uint32_t x500 = 5680U;
	int64_t t118 = -117831713351LL;

    t118 = ((x497%x498)-(x499==x500));

    if (t118 != 78LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x501 = INT64_MAX;
	uint8_t x502 = 3U;
	int16_t x503 = 1;
	volatile int32_t x504 = INT32_MIN;
	volatile int64_t t119 = 2237970489631LL;

    t119 = ((x501%x502)-(x503==x504));

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = -878;
	uint16_t x506 = 45U;
	uint8_t x507 = 14U;
	int32_t x508 = INT32_MIN;
	static int32_t t120 = -923;

    t120 = ((x505%x506)-(x507==x508));

    if (t120 != -23) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x509 = INT64_MAX;
	volatile int32_t x510 = INT32_MAX;
	uint32_t x511 = 11895U;
	static uint8_t x512 = 12U;
	int64_t t121 = -56067016LL;

    t121 = ((x509%x510)-(x511==x512));

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x513 = 1;
	uint32_t x514 = 251102556U;
	int8_t x516 = INT8_MAX;

    t122 = ((x513%x514)-(x515==x516));

    if (t122 != 1U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x517 = 2;
	int16_t x518 = -6;
	uint32_t x519 = UINT32_MAX;
	int32_t x520 = 1644725;
	int32_t t123 = -290237;

    t123 = ((x517%x518)-(x519==x520));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x522 = INT32_MIN;
	static volatile uint16_t x523 = 1645U;
	int64_t x524 = -244810153802LL;
	volatile int32_t t124 = 158894527;

    t124 = ((x521%x522)-(x523==x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x525 = INT8_MAX;
	static int64_t x526 = -1LL;
	static uint32_t x527 = UINT32_MAX;
	int32_t x528 = -61;

    t125 = ((x525%x526)-(x527==x528));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x529 = UINT16_MAX;
	static volatile uint32_t x530 = 831699630U;
	uint64_t x531 = UINT64_MAX;
	volatile uint8_t x532 = 115U;
	uint32_t t126 = 2U;

    t126 = ((x529%x530)-(x531==x532));

    if (t126 != 65535U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x533 = INT32_MAX;
	uint64_t x534 = 6631489LLU;
	uint8_t x535 = 4U;
	uint8_t x536 = UINT8_MAX;
	volatile uint64_t t127 = 6707070254LLU;

    t127 = ((x533%x534)-(x535==x536));

    if (t127 != 5512700LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x537 = INT64_MIN;
	int8_t x538 = 2;
	volatile int16_t x539 = INT16_MIN;
	int64_t x540 = -74417400266840495LL;
	static volatile int64_t t128 = 1402LL;

    t128 = ((x537%x538)-(x539==x540));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x542 = INT16_MAX;
	int16_t x543 = INT16_MAX;
	uint32_t x544 = 30683014U;
	int64_t t129 = -82564LL;

    t129 = ((x541%x542)-(x543==x544));

    if (t129 != 14308LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x545 = 56376816786150LLU;
	uint32_t x546 = UINT32_MAX;
	volatile uint64_t x548 = UINT64_MAX;
	volatile uint64_t t130 = 18348186576303LLU;

    t130 = ((x545%x546)-(x547==x548));

    if (t130 != 1076071980LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x549 = 1586;
	volatile uint32_t x550 = 583U;
	int16_t x551 = -9;
	static int32_t x552 = 28077;

    t131 = ((x549%x550)-(x551==x552));

    if (t131 != 420U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x553 = 79;
	uint64_t x554 = 12433692489887271LLU;
	static volatile int8_t x555 = INT8_MAX;
	int16_t x556 = -335;
	static uint64_t t132 = 13379271053282651LLU;

    t132 = ((x553%x554)-(x555==x556));

    if (t132 != 79LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x557 = 0U;
	int32_t x558 = INT32_MIN;
	int16_t x559 = 370;
	int64_t x560 = INT64_MIN;
	int32_t t133 = 18;

    t133 = ((x557%x558)-(x559==x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x562 = -1;
	int64_t x563 = 17437LL;
	int32_t x564 = 1488;
	volatile uint32_t t134 = 257123167U;

    t134 = ((x561%x562)-(x563==x564));

    if (t134 != 40528U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x565 = UINT32_MAX;
	uint64_t x566 = 3845LLU;
	int16_t x567 = INT16_MIN;
	volatile uint64_t t135 = 190946687497270193LLU;

    t135 = ((x565%x566)-(x567==x568));

    if (t135 != 2325LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x569 = 30U;
	int16_t x570 = INT16_MIN;
	int64_t x571 = -1LL;
	volatile int32_t x572 = INT32_MIN;
	int32_t t136 = 990;

    t136 = ((x569%x570)-(x571==x572));

    if (t136 != 30) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x574 = 17275733U;
	static int32_t x575 = INT32_MIN;
	int64_t x576 = 66543542853LL;
	volatile uint32_t t137 = 411873U;

    t137 = ((x573%x574)-(x575==x576));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x577 = UINT8_MAX;
	static volatile int64_t x578 = INT64_MIN;
	int8_t x579 = 0;
	int64_t t138 = -253387LL;

    t138 = ((x577%x578)-(x579==x580));

    if (t138 != 255LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x581 = 31U;
	static int64_t x582 = -1509209LL;
	int32_t x583 = -2005444;
	volatile uint64_t x584 = UINT64_MAX;
	volatile int64_t t139 = -1397963125986LL;

    t139 = ((x581%x582)-(x583==x584));

    if (t139 != 31LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x586 = 1U;
	uint64_t x587 = 369360411LLU;
	volatile uint32_t x588 = UINT32_MAX;
	volatile uint64_t t140 = 2898840LLU;

    t140 = ((x585%x586)-(x587==x588));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x590 = 261463253178LL;
	static int32_t x591 = INT32_MIN;
	int16_t x592 = INT16_MIN;
	volatile int64_t t141 = -1960LL;

    t141 = ((x589%x590)-(x591==x592));

    if (t141 != 237646784LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x594 = 1;
	static int16_t x596 = INT16_MAX;
	volatile uint64_t t142 = 3LLU;

    t142 = ((x593%x594)-(x595==x596));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x600 = -1;
	static volatile int64_t t143 = -915255017460154LL;

    t143 = ((x597%x598)-(x599==x600));

    if (t143 != -6LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x602 = INT32_MIN;
	uint32_t x603 = 68257U;
	volatile int32_t t144 = -197222190;

    t144 = ((x601%x602)-(x603==x604));

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x605 = 934999150LLU;
	uint32_t x606 = 1965124340U;
	volatile int64_t x608 = 456696924177267LL;
	volatile uint64_t t145 = 4109959LLU;

    t145 = ((x605%x606)-(x607==x608));

    if (t145 != 934999150LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x609 = INT32_MAX;
	uint32_t x610 = UINT32_MAX;
	static int64_t x611 = INT64_MIN;

    t146 = ((x609%x610)-(x611==x612));

    if (t146 != 2147483647U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x615 = INT32_MIN;
	int16_t x616 = INT16_MAX;

    t147 = ((x613%x614)-(x615==x616));

    if (t147 != 1694223824LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x617 = 4743249534LLU;
	uint64_t x619 = 157LLU;
	int16_t x620 = -1;
	volatile uint64_t t148 = 1811243366425435063LLU;

    t148 = ((x617%x618)-(x619==x620));

    if (t148 != 448282239LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x621 = INT8_MAX;
	int32_t x622 = INT32_MIN;
	int32_t x623 = INT32_MIN;
	int64_t x624 = -1LL;
	volatile int32_t t149 = -2;

    t149 = ((x621%x622)-(x623==x624));

    if (t149 != 127) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x625 = -1;
	static int64_t x626 = INT64_MIN;
	volatile int16_t x627 = 710;
	uint16_t x628 = 16U;
	volatile int64_t t150 = -37734152LL;

    t150 = ((x625%x626)-(x627==x628));

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x632 = -1;
	int32_t t151 = -79;

    t151 = ((x629%x630)-(x631==x632));

    if (t151 != 24) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x633 = INT32_MIN;
	static int64_t x636 = INT64_MIN;
	int32_t t152 = -411768875;

    t152 = ((x633%x634)-(x635==x636));

    if (t152 != -8) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x637 = INT32_MAX;
	static volatile int64_t x638 = 18120LL;
	uint32_t x639 = UINT32_MAX;
	int16_t x640 = -1;
	static int64_t t153 = -230504647046630751LL;

    t153 = ((x637%x638)-(x639==x640));

    if (t153 != 9966LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = INT64_MAX;
	uint16_t x642 = 109U;
	volatile int64_t x643 = 99821727043LL;
	int8_t x644 = -24;

    t154 = ((x641%x642)-(x643==x644));

    if (t154 != 32LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x645 = INT8_MIN;
	volatile int16_t x646 = INT16_MIN;
	uint8_t x647 = 11U;
	uint8_t x648 = UINT8_MAX;
	volatile int32_t t155 = -1607188;

    t155 = ((x645%x646)-(x647==x648));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x649 = 42U;
	int64_t x650 = INT64_MIN;
	uint16_t x651 = 245U;
	volatile int64_t t156 = -24615615LL;

    t156 = ((x649%x650)-(x651==x652));

    if (t156 != 42LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x653 = -343760LL;
	int16_t x654 = INT16_MIN;
	uint32_t x655 = 55759U;

    t157 = ((x653%x654)-(x655==x656));

    if (t157 != -16080LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x657 = INT64_MIN;
	uint16_t x658 = 25224U;
	volatile uint64_t x659 = 143511703075LLU;
	int64_t t158 = 63457LL;

    t158 = ((x657%x658)-(x659==x660));

    if (t158 != -23768LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x661 = 2U;
	int32_t x662 = INT32_MIN;
	volatile int64_t x663 = -1LL;
	static volatile int32_t t159 = 68556;

    t159 = ((x661%x662)-(x663==x664));

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x665 = INT8_MAX;
	uint64_t x666 = 1011787LLU;
	uint16_t x668 = UINT16_MAX;
	volatile uint64_t t160 = 1520929980912576259LLU;

    t160 = ((x665%x666)-(x667==x668));

    if (t160 != 127LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x670 = 734U;
	int16_t x671 = -5230;
	int64_t t161 = 3658630LL;

    t161 = ((x669%x670)-(x671==x672));

    if (t161 != -332LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x673 = -1;
	uint32_t x674 = 397463596U;
	uint64_t x675 = 107832157022LLU;
	uint32_t t162 = 3817U;

    t162 = ((x673%x674)-(x675==x676));

    if (t162 != 320331335U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x678 = INT16_MAX;
	int8_t x679 = INT8_MIN;
	uint64_t x680 = UINT64_MAX;
	volatile int32_t t163 = 114866;

    t163 = ((x677%x678)-(x679==x680));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x681 = INT32_MIN;
	int64_t x682 = -1011136578LL;
	uint16_t x684 = 114U;
	volatile int64_t t164 = -4818896500205159LL;

    t164 = ((x681%x682)-(x683==x684));

    if (t164 != -125210492LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x685 = UINT8_MAX;
	int16_t x687 = INT16_MIN;
	int8_t x688 = INT8_MAX;
	static volatile int32_t t165 = 21;

    t165 = ((x685%x686)-(x687==x688));

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x689 = INT16_MIN;
	int8_t x690 = INT8_MAX;
	int16_t x691 = INT16_MIN;
	int16_t x692 = INT16_MAX;
	volatile int32_t t166 = 2789266;

    t166 = ((x689%x690)-(x691==x692));

    if (t166 != -2) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x694 = INT64_MAX;
	int8_t x695 = INT8_MIN;
	int8_t x696 = 0;

    t167 = ((x693%x694)-(x695==x696));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x697 = 44;
	uint64_t x699 = 994LLU;
	uint16_t x700 = 106U;
	volatile int64_t t168 = -23977079034193LL;

    t168 = ((x697%x698)-(x699==x700));

    if (t168 != 44LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x701 = INT8_MAX;
	uint16_t x702 = 1U;
	int8_t x703 = 10;
	int32_t x704 = -2;
	int32_t t169 = 280061;

    t169 = ((x701%x702)-(x703==x704));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x706 = UINT16_MAX;
	static uint8_t x707 = 0U;
	volatile int64_t x708 = INT64_MIN;
	static int32_t t170 = 2227507;

    t170 = ((x705%x706)-(x707==x708));

    if (t170 != -9) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x709 = INT16_MAX;
	int64_t x710 = 3013508880LL;
	volatile uint8_t x712 = 3U;

    t171 = ((x709%x710)-(x711==x712));

    if (t171 != 32767LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x713 = INT32_MIN;
	int32_t x715 = 128867690;
	int32_t x716 = -907368027;
	volatile int64_t t172 = 6306828563LL;

    t172 = ((x713%x714)-(x715==x716));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x717 = UINT64_MAX;
	int16_t x718 = -829;
	volatile uint64_t x719 = UINT64_MAX;
	uint16_t x720 = 1223U;
	volatile uint64_t t173 = 598801946951LLU;

    t173 = ((x717%x718)-(x719==x720));

    if (t173 != 828LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = 22;
	int8_t x722 = INT8_MIN;
	volatile int16_t x723 = 364;
	int64_t x724 = -4435458LL;
	static int32_t t174 = 2505;

    t174 = ((x721%x722)-(x723==x724));

    if (t174 != 22) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x727 = -30;
	uint16_t x728 = 0U;
	volatile int32_t t175 = 16346638;

    t175 = ((x725%x726)-(x727==x728));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x729 = -1LL;
	uint8_t x730 = 15U;
	static int64_t x731 = -91258802991LL;
	int64_t x732 = -1LL;

    t176 = ((x729%x730)-(x731==x732));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x733 = 2U;
	int64_t x734 = -140375616LL;
	static uint64_t x735 = 136073010966130LLU;
	int32_t x736 = 1;

    t177 = ((x733%x734)-(x735==x736));

    if (t177 != 2LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x737 = 9790U;
	int32_t x738 = INT32_MIN;
	int32_t x739 = -117;
	static int64_t x740 = INT64_MIN;
	volatile uint32_t t178 = 68536U;

    t178 = ((x737%x738)-(x739==x740));

    if (t178 != 9790U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x741 = 1858U;
	int16_t x742 = -1;
	static uint8_t x744 = 1U;
	volatile int32_t t179 = -8319571;

    t179 = ((x741%x742)-(x743==x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x745 = -12156;
	volatile int32_t x746 = -1;
	int32_t x747 = INT32_MIN;
	int32_t x748 = 506018977;

    t180 = ((x745%x746)-(x747==x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x749 = 120689278467049LLU;
	uint32_t x751 = 340569U;
	volatile int8_t x752 = INT8_MIN;
	uint64_t t181 = 16648905LLU;

    t181 = ((x749%x750)-(x751==x752));

    if (t181 != 120689278467049LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x753 = -1;
	static volatile uint8_t x754 = UINT8_MAX;
	volatile int64_t x755 = INT64_MAX;
	int16_t x756 = -3;
	volatile int32_t t182 = -21384;

    t182 = ((x753%x754)-(x755==x756));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x757 = INT64_MIN;
	volatile int32_t x758 = INT32_MIN;
	volatile int64_t x759 = INT64_MAX;
	int32_t x760 = INT32_MIN;
	int64_t t183 = -16889094003LL;

    t183 = ((x757%x758)-(x759==x760));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x761 = 20U;
	volatile uint32_t x762 = UINT32_MAX;
	int64_t x763 = -48369695601LL;
	int32_t x764 = 1939;
	volatile uint32_t t184 = 76015098U;

    t184 = ((x761%x762)-(x763==x764));

    if (t184 != 20U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x765 = -1;
	int32_t x766 = INT32_MIN;
	uint64_t x767 = 134208219563LLU;
	static volatile int8_t x768 = INT8_MIN;
	volatile int32_t t185 = -1169828;

    t185 = ((x765%x766)-(x767==x768));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = INT32_MIN;
	static uint64_t x771 = UINT64_MAX;
	static int32_t x772 = INT32_MIN;

    t186 = ((x769%x770)-(x771==x772));

    if (t186 != -104) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = 0;
	static volatile int32_t x774 = INT32_MIN;
	volatile int64_t x775 = INT64_MIN;
	volatile int32_t t187 = 2;

    t187 = ((x773%x774)-(x775==x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x777 = -1;
	int8_t x778 = INT8_MIN;
	int16_t x779 = 17;
	int16_t x780 = INT16_MIN;

    t188 = ((x777%x778)-(x779==x780));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x782 = -4;
	uint8_t x783 = 27U;
	int8_t x784 = INT8_MAX;
	int32_t t189 = 119701;

    t189 = ((x781%x782)-(x783==x784));

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x785 = UINT8_MAX;
	uint16_t x786 = 1009U;
	volatile int8_t x788 = INT8_MAX;

    t190 = ((x785%x786)-(x787==x788));

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x789 = INT32_MIN;

    t191 = ((x789%x790)-(x791==x792));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x793 = 14LLU;
	uint16_t x794 = 1U;
	static int64_t x795 = INT64_MIN;
	volatile uint32_t x796 = UINT32_MAX;

    t192 = ((x793%x794)-(x795==x796));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x797 = 0U;
	int64_t x798 = -139LL;
	static int8_t x799 = INT8_MAX;
	volatile int64_t x800 = 811916915LL;
	volatile int64_t t193 = 1985931805LL;

    t193 = ((x797%x798)-(x799==x800));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x803 = 98LLU;
	uint32_t x804 = 639U;

    t194 = ((x801%x802)-(x803==x804));

    if (t194 != 36LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x805 = 110945LLU;
	uint64_t x807 = 117576887LLU;
	int64_t x808 = INT64_MIN;
	volatile uint64_t t195 = 217682427LLU;

    t195 = ((x805%x806)-(x807==x808));

    if (t195 != 110945LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x809 = INT64_MAX;
	int16_t x810 = INT16_MIN;
	int16_t x811 = 0;
	volatile uint16_t x812 = UINT16_MAX;
	volatile int64_t t196 = -26068820261740546LL;

    t196 = ((x809%x810)-(x811==x812));

    if (t196 != 32767LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x813 = 3273;
	int64_t x816 = INT64_MIN;

    t197 = ((x813%x814)-(x815==x816));

    if (t197 != 3273U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x817 = 42U;
	int64_t x818 = INT64_MAX;
	int16_t x819 = -338;
	static volatile int32_t x820 = -1;
	volatile int64_t t198 = -459299LL;

    t198 = ((x817%x818)-(x819==x820));

    if (t198 != 42LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x825 = INT8_MAX;
	uint8_t x827 = UINT8_MAX;
	int8_t x828 = INT8_MIN;
	uint64_t t199 = 1522477958LLU;

    t199 = ((x825%x826)-(x827==x828));

    if (t199 != 127LLU) { NG(); } else { ; }
	
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

