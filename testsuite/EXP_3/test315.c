
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

static uint16_t x2 = 1U;
static int32_t x12 = -246594657;
volatile int64_t x14 = INT64_MIN;
int32_t x16 = -1;
int64_t x21 = INT64_MIN;
volatile int8_t x26 = 0;
int32_t x28 = -1;
int16_t x35 = -7183;
int32_t x37 = -1;
uint8_t x42 = 90U;
int8_t x44 = INT8_MIN;
int8_t x48 = -1;
static int16_t x50 = -6548;
int64_t x51 = INT64_MIN;
int32_t x57 = INT32_MAX;
int32_t x59 = -574471760;
volatile int64_t x61 = INT64_MAX;
int8_t x63 = INT8_MAX;
int32_t x65 = INT32_MIN;
volatile int8_t x66 = INT8_MIN;
int32_t t16 = -5483350;
int64_t x74 = -1LL;
volatile int16_t x76 = -1;
uint16_t x89 = 9U;
uint64_t x94 = 126528LLU;
int8_t x97 = INT8_MIN;
static int8_t x110 = INT8_MAX;
int8_t x112 = -15;
uint8_t x113 = 8U;
static uint8_t x114 = 2U;
int16_t x121 = 16;
static int8_t x125 = 15;
int64_t x128 = -1LL;
uint32_t x134 = 1161371488U;
static int32_t x137 = INT32_MIN;
static volatile int32_t t32 = -1966645;
int32_t x143 = -490267989;
int16_t x148 = 6016;
int32_t t34 = 98402;
uint32_t x154 = 909U;
int64_t x155 = INT64_MAX;
static int32_t t36 = -4027;
uint32_t x157 = 0U;
static int16_t x161 = -4;
int16_t x170 = INT16_MIN;
int64_t x173 = -118573156529130929LL;
volatile uint32_t x177 = UINT32_MAX;
uint64_t x191 = 117995LLU;
int16_t x192 = INT16_MIN;
static int8_t x193 = 1;
int32_t x196 = -1;
volatile int32_t t45 = -1185;
int32_t x201 = 677401;
volatile uint32_t x202 = 38716U;
int16_t x207 = -1;
uint64_t x208 = 1LLU;
uint16_t x210 = 18U;
int32_t x211 = -1;
int16_t x212 = INT16_MIN;
volatile int32_t t49 = 3;
static uint16_t x225 = 33U;
int32_t x233 = -3;
static int8_t x234 = INT8_MIN;
static int8_t x236 = -1;
static int32_t t54 = 33;
static volatile int32_t x239 = 325;
uint64_t x240 = UINT64_MAX;
volatile int32_t t55 = -198879;
volatile int32_t t56 = 145;
volatile uint32_t x249 = 250933132U;
volatile int32_t t57 = -24537;
uint32_t x277 = UINT32_MAX;
int32_t t66 = 756;
int8_t x295 = INT8_MIN;
static uint8_t x298 = 6U;
volatile int32_t t68 = 465482;
volatile uint8_t x302 = UINT8_MAX;
volatile int32_t t69 = -8962;
uint8_t x307 = UINT8_MAX;
static uint8_t x309 = UINT8_MAX;
uint64_t x314 = UINT64_MAX;
int8_t x322 = -1;
volatile int16_t x326 = 1362;
static int32_t x335 = INT32_MAX;
volatile int32_t t77 = 94;
int8_t x343 = 0;
static volatile uint32_t x349 = UINT32_MAX;
volatile uint16_t x352 = UINT16_MAX;
int32_t t81 = -80480;
uint64_t x356 = 1LLU;
int8_t x361 = 1;
static int32_t x364 = INT32_MAX;
int32_t x369 = INT32_MAX;
uint32_t x380 = 1391934727U;
static uint32_t x392 = 132U;
uint64_t x397 = 91638610297141740LLU;
int32_t t91 = -4;
uint64_t x405 = 4LLU;
static int16_t x417 = INT16_MIN;
int32_t t94 = 13604;
volatile int64_t x428 = -1276786112575710LL;
int32_t t99 = 889;
static volatile uint32_t x447 = UINT32_MAX;
volatile uint64_t x452 = UINT64_MAX;
int8_t x457 = -1;
int32_t t103 = -3912;
int8_t x462 = -3;
static int8_t x464 = INT8_MIN;
uint8_t x466 = 23U;
int8_t x468 = INT8_MAX;
int16_t x471 = INT16_MAX;
int8_t x475 = 2;
int8_t x479 = -3;
int8_t x491 = INT8_MAX;
int64_t x498 = 199281LL;
int8_t x512 = INT8_MIN;
volatile int8_t x518 = INT8_MIN;
volatile int16_t x522 = INT16_MIN;
int32_t x527 = INT32_MAX;
volatile int32_t x530 = INT32_MAX;
int64_t x544 = 2422914472211046LL;
int8_t x553 = 15;
uint16_t x554 = 221U;
uint32_t x559 = UINT32_MAX;
uint8_t x560 = 47U;
volatile int32_t t127 = -41;
static volatile int32_t x561 = INT32_MAX;
int32_t t128 = -5975;
volatile int8_t x572 = 22;
uint16_t x573 = UINT16_MAX;
int8_t x574 = -1;
int32_t t131 = -1;
static volatile int32_t t135 = -857;
int64_t x600 = -1LL;
int16_t x608 = -1;
int16_t x612 = INT16_MIN;
int8_t x616 = 0;
static volatile int64_t x617 = 133644556165491850LL;
int8_t x618 = -1;
int64_t x629 = -14819902LL;
uint32_t x630 = 39880250U;
uint8_t x632 = 9U;
volatile int32_t t143 = 39;
static uint32_t x645 = 1067876632U;
int8_t x659 = INT8_MAX;
int32_t x660 = -6;
uint16_t x662 = 14U;
uint16_t x664 = 11U;
static volatile uint8_t x665 = 9U;
volatile int32_t t150 = 79;
volatile int64_t x674 = 187583LL;
volatile int32_t x676 = 23567678;
int32_t t151 = -154;
static int64_t x689 = INT64_MIN;
static volatile int64_t x690 = 654828LL;
int32_t t154 = -23999;
int32_t t155 = 899;
int8_t x700 = INT8_MAX;
int16_t x701 = INT16_MIN;
volatile int32_t t157 = -1853;
int32_t x720 = -36;
static volatile int32_t t160 = -2;
volatile int32_t t162 = -1;
int32_t x729 = 3999;
static int8_t x730 = -1;
volatile int32_t t163 = 502;
int8_t x734 = INT8_MIN;
volatile int8_t x739 = -1;
int16_t x741 = INT16_MIN;
volatile int64_t x743 = 595315LL;
int16_t x747 = -30;
static uint8_t x749 = UINT8_MAX;
uint8_t x752 = 114U;
int32_t t168 = 3089;
int64_t x755 = -1LL;
static int32_t t169 = 104;
int8_t x757 = 0;
uint32_t x760 = UINT32_MAX;
int8_t x765 = 10;
volatile int32_t x767 = 69;
int64_t x774 = INT64_MIN;
volatile uint16_t x776 = 89U;
volatile int32_t t175 = 376622423;
int32_t t176 = -1;
volatile uint64_t x786 = 18041890627LLU;
static volatile int32_t x787 = INT32_MIN;
int8_t x788 = INT8_MIN;
int16_t x793 = INT16_MIN;
volatile int8_t x794 = INT8_MIN;
int32_t t179 = 737134652;
int16_t x797 = INT16_MAX;
uint64_t x800 = 143831LLU;
volatile int32_t t180 = 112114;
int8_t x811 = 11;
int32_t t183 = -1;
int32_t x813 = INT32_MIN;
volatile int32_t t184 = 6;
uint8_t x837 = 117U;
volatile int8_t x844 = INT8_MIN;
static uint16_t x845 = 8986U;
int8_t x848 = -1;
int8_t x862 = 8;
uint32_t x864 = 2959U;
uint64_t x872 = 27392166925LLU;
int32_t t199 = -2939;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int8_t x3 = 34;
	static int32_t x4 = INT32_MAX;
	int32_t t0 = 1708201;

    t0 = ((x1>x2)!=(x3-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	volatile int64_t x6 = -503926421LL;
	uint8_t x7 = 98U;
	static int16_t x8 = -3406;
	volatile int32_t t1 = -8;

    t1 = ((x5>x6)!=(x7-x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 41478LLU;
	int8_t x10 = -14;
	uint16_t x11 = 72U;
	int32_t t2 = 0;

    t2 = ((x9>x10)!=(x11-x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 105U;
	int32_t x15 = -25376958;
	int32_t t3 = 149276;

    t3 = ((x13>x14)!=(x15-x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 53U;
	int64_t x18 = INT64_MIN;
	int8_t x19 = -1;
	int64_t x20 = INT64_MIN;
	int32_t t4 = -945574;

    t4 = ((x17>x18)!=(x19-x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MAX;
	static uint16_t x23 = UINT16_MAX;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = -563226;

    t5 = ((x21>x22)!=(x23-x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 6779832U;
	volatile int64_t x27 = 602901LL;
	int32_t t6 = 204;

    t6 = ((x25>x26)!=(x27-x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 3611388188537937165LLU;
	int8_t x30 = -1;
	uint8_t x31 = 1U;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -18503;

    t7 = ((x29>x30)!=(x31-x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	volatile uint16_t x34 = UINT16_MAX;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = 185;

    t8 = ((x33>x34)!=(x35-x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	volatile int64_t x40 = -1LL;
	volatile int32_t t9 = -21;

    t9 = ((x37>x38)!=(x39-x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MIN;
	uint32_t x43 = 172020371U;
	static volatile int32_t t10 = -60372561;

    t10 = ((x41>x42)!=(x43-x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	uint32_t x46 = 12695U;
	int16_t x47 = INT16_MIN;
	int32_t t11 = -1;

    t11 = ((x45>x46)!=(x47-x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	static int8_t x52 = -1;
	volatile int32_t t12 = -11510;

    t12 = ((x49>x50)!=(x51-x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x58 = 13LLU;
	uint64_t x60 = 14984775274782LLU;
	int32_t t13 = 117710;

    t13 = ((x57>x58)!=(x59-x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x62 = 5LL;
	static int32_t x64 = -1;
	volatile int32_t t14 = -3;

    t14 = ((x61>x62)!=(x63-x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MAX;
	volatile int32_t t15 = 83290620;

    t15 = ((x65>x66)!=(x67-x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	volatile uint64_t x72 = 71567605768402872LLU;

    t16 = ((x69>x70)!=(x71-x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	volatile int32_t t17 = 65011842;

    t17 = ((x73>x74)!=(x75-x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MIN;
	int16_t x78 = 133;
	volatile uint64_t x79 = 104495131680708419LLU;
	volatile int32_t x80 = 183398;
	static int32_t t18 = -44010;

    t18 = ((x77>x78)!=(x79-x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = UINT16_MAX;
	uint32_t x82 = 4U;
	int64_t x83 = INT64_MIN;
	volatile int32_t x84 = INT32_MIN;
	int32_t t19 = 8146268;

    t19 = ((x81>x82)!=(x83-x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = 6555401;
	uint8_t x86 = 3U;
	int64_t x87 = -1LL;
	int8_t x88 = INT8_MIN;
	int32_t t20 = -7101;

    t20 = ((x85>x86)!=(x87-x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x90 = 1;
	int32_t x91 = 142312555;
	uint16_t x92 = 3U;
	int32_t t21 = -747899602;

    t21 = ((x89>x90)!=(x91-x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 6599891U;
	static int32_t x95 = INT32_MIN;
	int32_t x96 = -1;
	volatile int32_t t22 = 1166433;

    t22 = ((x93>x94)!=(x95-x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x98 = -1;
	uint32_t x99 = 480U;
	int8_t x100 = -1;
	int32_t t23 = -76;

    t23 = ((x97>x98)!=(x99-x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = 19U;
	uint32_t x102 = 1951U;
	static volatile int8_t x103 = -1;
	static int32_t x104 = INT32_MIN;
	static int32_t t24 = 51;

    t24 = ((x101>x102)!=(x103-x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x105 = 12U;
	int32_t x106 = -8195724;
	int16_t x107 = -1;
	int16_t x108 = INT16_MIN;
	static volatile int32_t t25 = 0;

    t25 = ((x105>x106)!=(x107-x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	static int16_t x111 = -10;
	volatile int32_t t26 = 12542;

    t26 = ((x109>x110)!=(x111-x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x115 = 8037;
	uint16_t x116 = UINT16_MAX;
	int32_t t27 = 2118225;

    t27 = ((x113>x114)!=(x115-x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x122 = UINT64_MAX;
	uint16_t x123 = 1673U;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t28 = 0;

    t28 = ((x121>x122)!=(x123-x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x126 = 54116919U;
	int32_t x127 = INT32_MAX;
	volatile int32_t t29 = -1428160;

    t29 = ((x125>x126)!=(x127-x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x129 = 4;
	int8_t x130 = 1;
	int32_t x131 = -48931;
	uint32_t x132 = UINT32_MAX;
	int32_t t30 = 3050269;

    t30 = ((x129>x130)!=(x131-x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x133 = -1;
	int64_t x135 = 1749233985288LL;
	uint64_t x136 = 676126649287LLU;
	static volatile int32_t t31 = 1;

    t31 = ((x133>x134)!=(x135-x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x138 = -1;
	static volatile int16_t x139 = INT16_MIN;
	static uint8_t x140 = 5U;

    t32 = ((x137>x138)!=(x139-x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x141 = 0U;
	int16_t x142 = INT16_MAX;
	volatile int64_t x144 = -1LL;
	volatile int32_t t33 = -13;

    t33 = ((x141>x142)!=(x143-x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = INT16_MIN;
	static volatile uint8_t x146 = 3U;
	uint8_t x147 = 9U;

    t34 = ((x145>x146)!=(x147-x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x149 = INT8_MAX;
	static int32_t x150 = INT32_MAX;
	int64_t x151 = -1LL;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t35 = 0;

    t35 = ((x149>x150)!=(x151-x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = -1;
	static uint64_t x156 = 144LLU;

    t36 = ((x153>x154)!=(x155-x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x158 = 0U;
	int8_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	static volatile int32_t t37 = -6832987;

    t37 = ((x157>x158)!=(x159-x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	static volatile uint16_t x164 = UINT16_MAX;
	static int32_t t38 = -4496;

    t38 = ((x161>x162)!=(x163-x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x165 = INT8_MAX;
	int64_t x166 = INT64_MIN;
	int32_t x167 = -1;
	int8_t x168 = INT8_MIN;
	int32_t t39 = -735545514;

    t39 = ((x165>x166)!=(x167-x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = INT8_MIN;
	int64_t x171 = -86214121724607LL;
	int8_t x172 = INT8_MIN;
	int32_t t40 = 883354064;

    t40 = ((x169>x170)!=(x171-x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x174 = 1956450492472467998LL;
	uint64_t x175 = 226004857LLU;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t41 = -770;

    t41 = ((x173>x174)!=(x175-x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x178 = 28U;
	int64_t x179 = INT64_MAX;
	uint32_t x180 = 53094U;
	static volatile int32_t t42 = -1;

    t42 = ((x177>x178)!=(x179-x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	uint32_t x187 = 761U;
	volatile int64_t x188 = -1LL;
	volatile int32_t t43 = 725769021;

    t43 = ((x185>x186)!=(x187-x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x189 = 7U;
	int16_t x190 = INT16_MIN;
	int32_t t44 = 8;

    t44 = ((x189>x190)!=(x191-x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x194 = 12420722968889750LLU;
	int8_t x195 = 0;

    t45 = ((x193>x194)!=(x195-x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x203 = 570LLU;
	int8_t x204 = -5;
	volatile int32_t t46 = -119572280;

    t46 = ((x201>x202)!=(x203-x204));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x205 = 127U;
	static int16_t x206 = INT16_MAX;
	int32_t t47 = 39;

    t47 = ((x205>x206)!=(x207-x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	int32_t t48 = 6894;

    t48 = ((x209>x210)!=(x211-x212));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x213 = 16931006266408LLU;
	uint8_t x214 = 90U;
	int32_t x215 = -2;
	uint16_t x216 = 0U;

    t49 = ((x213>x214)!=(x215-x216));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = INT8_MIN;
	static int64_t x218 = INT64_MAX;
	uint32_t x219 = 123815702U;
	int16_t x220 = INT16_MAX;
	int32_t t50 = 12751;

    t50 = ((x217>x218)!=(x219-x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x221 = -31;
	int32_t x222 = -1;
	volatile int8_t x223 = INT8_MIN;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t51 = 76869405;

    t51 = ((x221>x222)!=(x223-x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x226 = UINT32_MAX;
	static int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t52 = 38787892;

    t52 = ((x225>x226)!=(x227-x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x229 = UINT16_MAX;
	int64_t x230 = -1LL;
	uint64_t x231 = UINT64_MAX;
	uint8_t x232 = 70U;
	int32_t t53 = -5749974;

    t53 = ((x229>x230)!=(x231-x232));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x235 = 6770;

    t54 = ((x233>x234)!=(x235-x236));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	int8_t x238 = -19;

    t55 = ((x237>x238)!=(x239-x240));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = 9028;
	int64_t x246 = INT64_MAX;
	uint8_t x247 = 1U;
	int32_t x248 = INT32_MAX;

    t56 = ((x245>x246)!=(x247-x248));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x250 = INT64_MAX;
	volatile int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;

    t57 = ((x249>x250)!=(x251-x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x253 = 14U;
	uint16_t x254 = 26U;
	volatile int32_t x255 = INT32_MAX;
	uint16_t x256 = 3687U;
	volatile int32_t t58 = -1249606;

    t58 = ((x253>x254)!=(x255-x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x257 = 29179U;
	int32_t x258 = INT32_MAX;
	static int16_t x259 = INT16_MAX;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t59 = 14;

    t59 = ((x257>x258)!=(x259-x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x261 = 55U;
	int32_t x262 = 7671;
	volatile int16_t x263 = 183;
	uint32_t x264 = 108975642U;
	static volatile int32_t t60 = 0;

    t60 = ((x261>x262)!=(x263-x264));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x265 = 125U;
	int8_t x266 = INT8_MIN;
	static int64_t x267 = 3710657535181723525LL;
	int16_t x268 = INT16_MIN;
	int32_t t61 = 5;

    t61 = ((x265>x266)!=(x267-x268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x269 = INT64_MIN;
	int16_t x270 = 58;
	int32_t x271 = INT32_MAX;
	volatile int64_t x272 = -14085087561447905LL;
	int32_t t62 = 15;

    t62 = ((x269>x270)!=(x271-x272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MIN;
	volatile uint16_t x275 = 47U;
	static int32_t x276 = -110;
	int32_t t63 = -905;

    t63 = ((x273>x274)!=(x275-x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x278 = -1;
	int32_t x279 = INT32_MIN;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t64 = -1;

    t64 = ((x277>x278)!=(x279-x280));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x281 = 373U;
	static int32_t x282 = -359;
	volatile int16_t x283 = INT16_MAX;
	uint64_t x284 = 1073271505037074187LLU;
	int32_t t65 = -7;

    t65 = ((x281>x282)!=(x283-x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x289 = INT64_MIN;
	int64_t x290 = -1LL;
	int64_t x291 = INT64_MIN;
	int16_t x292 = -1;

    t66 = ((x289>x290)!=(x291-x292));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x293 = -96119643554251589LL;
	uint64_t x294 = 18161291839LLU;
	uint8_t x296 = 1U;
	static volatile int32_t t67 = 124471924;

    t67 = ((x293>x294)!=(x295-x296));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = INT32_MIN;
	static uint16_t x299 = 0U;
	static uint16_t x300 = UINT16_MAX;

    t68 = ((x297>x298)!=(x299-x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x301 = 2811813484228244LL;
	uint16_t x303 = 72U;
	uint64_t x304 = UINT64_MAX;

    t69 = ((x301>x302)!=(x303-x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x305 = 0U;
	volatile int8_t x306 = -1;
	volatile uint64_t x308 = 20443LLU;
	static volatile int32_t t70 = -7;

    t70 = ((x305>x306)!=(x307-x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x310 = -261532;
	static int16_t x311 = 0;
	int16_t x312 = 62;
	volatile int32_t t71 = 1547104;

    t71 = ((x309>x310)!=(x311-x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x313 = 271;
	uint8_t x315 = 48U;
	int8_t x316 = INT8_MIN;
	static int32_t t72 = 30;

    t72 = ((x313>x314)!=(x315-x316));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x317 = UINT32_MAX;
	volatile uint8_t x318 = UINT8_MAX;
	volatile int32_t x319 = INT32_MIN;
	volatile int32_t x320 = INT32_MIN;
	int32_t t73 = -23;

    t73 = ((x317>x318)!=(x319-x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x321 = UINT8_MAX;
	uint64_t x323 = 0LLU;
	uint8_t x324 = 1U;
	int32_t t74 = -328643;

    t74 = ((x321>x322)!=(x323-x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = 0;
	uint8_t x327 = UINT8_MAX;
	static int16_t x328 = -1;
	int32_t t75 = 884783281;

    t75 = ((x325>x326)!=(x327-x328));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x329 = -1;
	int64_t x330 = INT64_MAX;
	static int8_t x331 = INT8_MIN;
	static volatile uint64_t x332 = 1877651299427LLU;
	int32_t t76 = -806108969;

    t76 = ((x329>x330)!=(x331-x332));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x333 = INT32_MIN;
	int32_t x334 = -56211302;
	int32_t x336 = 724761;

    t77 = ((x333>x334)!=(x335-x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x337 = 22610U;
	int8_t x338 = -1;
	static uint8_t x339 = UINT8_MAX;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t78 = -23454;

    t78 = ((x337>x338)!=(x339-x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x341 = INT16_MIN;
	uint64_t x342 = UINT64_MAX;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t79 = 917840851;

    t79 = ((x341>x342)!=(x343-x344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x345 = 4;
	uint8_t x346 = 1U;
	int32_t x347 = -75;
	uint32_t x348 = 27U;
	volatile int32_t t80 = -1;

    t80 = ((x345>x346)!=(x347-x348));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x350 = INT16_MIN;
	volatile int32_t x351 = INT32_MAX;

    t81 = ((x349>x350)!=(x351-x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x353 = 8U;
	int64_t x354 = -454415541967LL;
	volatile int64_t x355 = 15LL;
	static volatile int32_t t82 = 1;

    t82 = ((x353>x354)!=(x355-x356));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x362 = INT64_MAX;
	volatile uint64_t x363 = 1865064602361501LLU;
	volatile int32_t t83 = 62360;

    t83 = ((x361>x362)!=(x363-x364));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x370 = 616U;
	int64_t x371 = -43LL;
	int32_t x372 = INT32_MAX;
	int32_t t84 = -310492508;

    t84 = ((x369>x370)!=(x371-x372));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x377 = INT8_MAX;
	int32_t x378 = -1;
	int8_t x379 = INT8_MIN;
	int32_t t85 = 144;

    t85 = ((x377>x378)!=(x379-x380));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = INT64_MAX;
	int32_t x382 = INT32_MAX;
	int8_t x383 = -1;
	uint64_t x384 = 120037742399LLU;
	int32_t t86 = 2746;

    t86 = ((x381>x382)!=(x383-x384));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x385 = 2U;
	uint8_t x386 = 3U;
	static int8_t x387 = INT8_MAX;
	uint64_t x388 = 559884762796899LLU;
	int32_t t87 = 54874085;

    t87 = ((x385>x386)!=(x387-x388));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x389 = INT8_MIN;
	volatile int32_t x390 = -848541626;
	int8_t x391 = -8;
	static int32_t t88 = 223448584;

    t88 = ((x389>x390)!=(x391-x392));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MAX;
	static uint16_t x395 = 924U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t89 = 0;

    t89 = ((x393>x394)!=(x395-x396));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x398 = INT16_MAX;
	static int64_t x399 = 30247767382931018LL;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t90 = 74061;

    t90 = ((x397>x398)!=(x399-x400));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x401 = 659342083586LLU;
	int16_t x402 = INT16_MIN;
	volatile int64_t x403 = -1LL;
	uint8_t x404 = 9U;

    t91 = ((x401>x402)!=(x403-x404));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x406 = INT32_MAX;
	uint8_t x407 = 0U;
	uint8_t x408 = 0U;
	int32_t t92 = 562446;

    t92 = ((x405>x406)!=(x407-x408));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x413 = -15;
	uint16_t x414 = UINT16_MAX;
	uint16_t x415 = UINT16_MAX;
	uint8_t x416 = 39U;
	int32_t t93 = -131037;

    t93 = ((x413>x414)!=(x415-x416));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x418 = 49;
	int32_t x419 = -16689;
	int16_t x420 = INT16_MIN;

    t94 = ((x417>x418)!=(x419-x420));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x421 = 880451LLU;
	static uint64_t x422 = 373386LLU;
	uint64_t x423 = 265639625486319628LLU;
	volatile int64_t x424 = -20289LL;
	volatile int32_t t95 = 13896;

    t95 = ((x421>x422)!=(x423-x424));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x425 = INT32_MIN;
	volatile uint16_t x426 = 277U;
	volatile int16_t x427 = -1;
	volatile int32_t t96 = -18485;

    t96 = ((x425>x426)!=(x427-x428));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x433 = -27708608629LL;
	static int8_t x434 = -1;
	uint32_t x435 = 30U;
	int8_t x436 = -1;
	int32_t t97 = -45544;

    t97 = ((x433>x434)!=(x435-x436));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x437 = INT64_MAX;
	int64_t x438 = -1LL;
	volatile int16_t x439 = -120;
	int16_t x440 = INT16_MIN;
	int32_t t98 = 102283573;

    t98 = ((x437>x438)!=(x439-x440));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = INT64_MIN;
	int64_t x442 = INT64_MIN;
	uint64_t x443 = 0LLU;
	uint16_t x444 = 17U;

    t99 = ((x441>x442)!=(x443-x444));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x445 = INT16_MIN;
	uint8_t x446 = 24U;
	int64_t x448 = -1LL;
	volatile int32_t t100 = -1643;

    t100 = ((x445>x446)!=(x447-x448));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x449 = 84;
	int32_t x450 = -32624993;
	int16_t x451 = -1;
	int32_t t101 = -571049;

    t101 = ((x449>x450)!=(x451-x452));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x453 = 0;
	uint16_t x454 = 5975U;
	int16_t x455 = INT16_MIN;
	int32_t x456 = -1;
	int32_t t102 = 6808811;

    t102 = ((x453>x454)!=(x455-x456));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x458 = 6922010821026LLU;
	uint16_t x459 = 3073U;
	int32_t x460 = 41542;

    t103 = ((x457>x458)!=(x459-x460));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x461 = 57;
	volatile uint8_t x463 = UINT8_MAX;
	int32_t t104 = -20377;

    t104 = ((x461>x462)!=(x463-x464));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x465 = UINT16_MAX;
	uint32_t x467 = 119U;
	static int32_t t105 = -86;

    t105 = ((x465>x466)!=(x467-x468));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x469 = 1U;
	int16_t x470 = INT16_MIN;
	int32_t x472 = 21;
	static int32_t t106 = -2064493;

    t106 = ((x469>x470)!=(x471-x472));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x473 = 1735484U;
	volatile int16_t x474 = INT16_MIN;
	volatile int32_t x476 = -32009;
	int32_t t107 = -447554581;

    t107 = ((x473>x474)!=(x475-x476));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x477 = INT16_MIN;
	int32_t x478 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	int32_t t108 = 810048762;

    t108 = ((x477>x478)!=(x479-x480));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x481 = INT64_MIN;
	uint8_t x482 = UINT8_MAX;
	static int8_t x483 = -1;
	volatile int16_t x484 = INT16_MAX;
	static volatile int32_t t109 = 175088228;

    t109 = ((x481>x482)!=(x483-x484));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x489 = -1;
	uint16_t x490 = 1884U;
	static volatile int8_t x492 = 0;
	static int32_t t110 = -122184305;

    t110 = ((x489>x490)!=(x491-x492));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x493 = -1;
	volatile int16_t x494 = -1;
	static int16_t x495 = -1;
	int16_t x496 = INT16_MIN;
	static volatile int32_t t111 = 752392;

    t111 = ((x493>x494)!=(x495-x496));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x497 = INT8_MIN;
	uint64_t x499 = 641053447456865LLU;
	int16_t x500 = INT16_MAX;
	static int32_t t112 = 92526;

    t112 = ((x497>x498)!=(x499-x500));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x501 = INT8_MIN;
	int32_t x502 = -1;
	static volatile int16_t x503 = -1;
	static volatile int64_t x504 = -56685240LL;
	volatile int32_t t113 = 12488;

    t113 = ((x501>x502)!=(x503-x504));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x505 = 58299055LLU;
	volatile int8_t x506 = INT8_MIN;
	int16_t x507 = -751;
	int64_t x508 = INT64_MIN;
	int32_t t114 = 54259451;

    t114 = ((x505>x506)!=(x507-x508));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x509 = -12;
	uint8_t x510 = 2U;
	int32_t x511 = -18766;
	static int32_t t115 = -834897;

    t115 = ((x509>x510)!=(x511-x512));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x513 = 1U;
	int64_t x514 = 493LL;
	int64_t x515 = INT64_MAX;
	volatile int64_t x516 = 117939785285LL;
	int32_t t116 = 1;

    t116 = ((x513>x514)!=(x515-x516));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x519 = 35;
	uint16_t x520 = UINT16_MAX;
	static int32_t t117 = 1380961;

    t117 = ((x517>x518)!=(x519-x520));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x521 = 6223;
	volatile uint16_t x523 = UINT16_MAX;
	uint32_t x524 = UINT32_MAX;
	int32_t t118 = 54;

    t118 = ((x521>x522)!=(x523-x524));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x525 = INT32_MIN;
	int64_t x526 = 1LL;
	uint16_t x528 = 30986U;
	int32_t t119 = -18;

    t119 = ((x525>x526)!=(x527-x528));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x529 = UINT16_MAX;
	static int32_t x531 = 1038577730;
	static uint16_t x532 = UINT16_MAX;
	int32_t t120 = 56871;

    t120 = ((x529>x530)!=(x531-x532));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x533 = 1699;
	int64_t x534 = -1LL;
	static uint8_t x535 = 14U;
	int16_t x536 = 288;
	volatile int32_t t121 = 346;

    t121 = ((x533>x534)!=(x535-x536));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x537 = UINT8_MAX;
	static int8_t x538 = -50;
	volatile int64_t x539 = INT64_MAX;
	uint16_t x540 = UINT16_MAX;
	int32_t t122 = 9168;

    t122 = ((x537>x538)!=(x539-x540));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x541 = 70012682671LLU;
	int16_t x542 = INT16_MAX;
	static uint64_t x543 = UINT64_MAX;
	volatile int32_t t123 = 104511288;

    t123 = ((x541>x542)!=(x543-x544));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x545 = INT32_MIN;
	int16_t x546 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	volatile int32_t x548 = INT32_MIN;
	static int32_t t124 = -547523221;

    t124 = ((x545>x546)!=(x547-x548));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x549 = UINT8_MAX;
	int8_t x550 = INT8_MIN;
	int64_t x551 = -383905015696LL;
	int32_t x552 = 44905;
	volatile int32_t t125 = 5281422;

    t125 = ((x549>x550)!=(x551-x552));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x555 = 10;
	uint8_t x556 = 2U;
	int32_t t126 = 22;

    t126 = ((x553>x554)!=(x555-x556));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x557 = -1;
	uint8_t x558 = 50U;

    t127 = ((x557>x558)!=(x559-x560));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x562 = 4135;
	int16_t x563 = 1;
	int64_t x564 = 13LL;

    t128 = ((x561>x562)!=(x563-x564));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x565 = UINT64_MAX;
	volatile uint8_t x566 = 18U;
	uint64_t x567 = UINT64_MAX;
	uint64_t x568 = 14271424806LLU;
	static volatile int32_t t129 = -69639;

    t129 = ((x565>x566)!=(x567-x568));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x569 = -83016856111865413LL;
	static volatile int32_t x570 = -1;
	volatile int8_t x571 = INT8_MAX;
	int32_t t130 = 0;

    t130 = ((x569>x570)!=(x571-x572));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x575 = 86U;
	static int8_t x576 = INT8_MIN;

    t131 = ((x573>x574)!=(x575-x576));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x577 = -24;
	int32_t x578 = -1;
	uint8_t x579 = 2U;
	volatile int8_t x580 = INT8_MAX;
	volatile int32_t t132 = -7399;

    t132 = ((x577>x578)!=(x579-x580));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x581 = INT16_MIN;
	uint32_t x582 = 2799U;
	volatile int64_t x583 = 238817035199LL;
	volatile int64_t x584 = 3113111LL;
	int32_t t133 = -1022;

    t133 = ((x581>x582)!=(x583-x584));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x589 = 53;
	uint16_t x590 = UINT16_MAX;
	static int16_t x591 = -1;
	int64_t x592 = INT64_MAX;
	int32_t t134 = 331781;

    t134 = ((x589>x590)!=(x591-x592));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x593 = INT32_MIN;
	int16_t x594 = INT16_MIN;
	uint32_t x595 = 3U;
	int16_t x596 = 1;

    t135 = ((x593>x594)!=(x595-x596));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x597 = INT32_MIN;
	static volatile int32_t x598 = -1;
	uint32_t x599 = 10820275U;
	int32_t t136 = -1247;

    t136 = ((x597>x598)!=(x599-x600));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x601 = -1;
	int16_t x602 = INT16_MIN;
	volatile int32_t x603 = INT32_MAX;
	int64_t x604 = 1745LL;
	int32_t t137 = -218377;

    t137 = ((x601>x602)!=(x603-x604));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x605 = INT16_MAX;
	int16_t x606 = 9717;
	uint64_t x607 = 19815629569161LLU;
	int32_t t138 = 522398843;

    t138 = ((x605>x606)!=(x607-x608));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x609 = INT8_MIN;
	int64_t x610 = INT64_MIN;
	static int16_t x611 = INT16_MIN;
	volatile int32_t t139 = -10708896;

    t139 = ((x609>x610)!=(x611-x612));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x613 = INT64_MIN;
	static int16_t x614 = INT16_MIN;
	int64_t x615 = -1LL;
	int32_t t140 = 17946554;

    t140 = ((x613>x614)!=(x615-x616));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x619 = INT16_MIN;
	uint8_t x620 = 20U;
	volatile int32_t t141 = -616835860;

    t141 = ((x617>x618)!=(x619-x620));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x621 = -1;
	int8_t x622 = -1;
	int16_t x623 = -69;
	int8_t x624 = INT8_MIN;
	int32_t t142 = -5729154;

    t142 = ((x621>x622)!=(x623-x624));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x631 = 7573U;

    t143 = ((x629>x630)!=(x631-x632));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x637 = INT32_MAX;
	int32_t x638 = INT32_MAX;
	uint32_t x639 = 2639U;
	int32_t x640 = 1276;
	int32_t t144 = 12388436;

    t144 = ((x637>x638)!=(x639-x640));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x646 = -55;
	int64_t x647 = INT64_MIN;
	int8_t x648 = -1;
	volatile int32_t t145 = 1235;

    t145 = ((x645>x646)!=(x647-x648));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x649 = INT8_MIN;
	volatile uint8_t x650 = UINT8_MAX;
	static int8_t x651 = 1;
	int8_t x652 = INT8_MAX;
	int32_t t146 = 233254;

    t146 = ((x649>x650)!=(x651-x652));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x653 = INT8_MIN;
	static int16_t x654 = -1;
	int8_t x655 = 3;
	int16_t x656 = INT16_MAX;
	int32_t t147 = -822305790;

    t147 = ((x653>x654)!=(x655-x656));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x657 = INT16_MAX;
	static uint64_t x658 = UINT64_MAX;
	volatile int32_t t148 = -730;

    t148 = ((x657>x658)!=(x659-x660));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x661 = 11LLU;
	int16_t x663 = INT16_MAX;
	volatile int32_t t149 = -951982871;

    t149 = ((x661>x662)!=(x663-x664));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x666 = 11U;
	int32_t x667 = -1;
	volatile int64_t x668 = INT64_MIN;

    t150 = ((x665>x666)!=(x667-x668));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x673 = 5976974615LLU;
	volatile uint16_t x675 = 29U;

    t151 = ((x673>x674)!=(x675-x676));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x678 = 224546614522LL;
	volatile uint8_t x679 = 1U;
	uint64_t x680 = 3890889436212LLU;
	static volatile int32_t t152 = -7;

    t152 = ((x677>x678)!=(x679-x680));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x681 = 0LLU;
	int8_t x682 = -1;
	int16_t x683 = INT16_MIN;
	int8_t x684 = INT8_MIN;
	int32_t t153 = 228;

    t153 = ((x681>x682)!=(x683-x684));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x691 = 118U;
	uint32_t x692 = 4U;

    t154 = ((x689>x690)!=(x691-x692));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x693 = 215731427;
	static volatile int8_t x694 = INT8_MAX;
	volatile uint32_t x695 = UINT32_MAX;
	static uint8_t x696 = UINT8_MAX;

    t155 = ((x693>x694)!=(x695-x696));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x697 = 12U;
	int64_t x698 = INT64_MAX;
	int16_t x699 = INT16_MAX;
	static int32_t t156 = 37015;

    t156 = ((x697>x698)!=(x699-x700));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x702 = INT32_MAX;
	int64_t x703 = -826548902LL;
	int8_t x704 = INT8_MIN;

    t157 = ((x701>x702)!=(x703-x704));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x705 = 1;
	volatile uint32_t x706 = 1329U;
	static int16_t x707 = INT16_MIN;
	int64_t x708 = 467LL;
	static int32_t t158 = 1794243;

    t158 = ((x705>x706)!=(x707-x708));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x713 = INT64_MAX;
	static volatile uint8_t x714 = 4U;
	int8_t x715 = -5;
	int64_t x716 = INT64_MIN;
	volatile int32_t t159 = -190379865;

    t159 = ((x713>x714)!=(x715-x716));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x717 = -13;
	int32_t x718 = -365233;
	static int64_t x719 = -1LL;

    t160 = ((x717>x718)!=(x719-x720));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x721 = INT32_MAX;
	static int64_t x722 = INT64_MIN;
	int16_t x723 = INT16_MIN;
	volatile int64_t x724 = -1LL;
	int32_t t161 = 188549137;

    t161 = ((x721>x722)!=(x723-x724));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x725 = -189401543;
	volatile int16_t x726 = 161;
	static int32_t x727 = -235;
	static int64_t x728 = -5302559588LL;

    t162 = ((x725>x726)!=(x727-x728));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x731 = INT8_MIN;
	volatile uint8_t x732 = 6U;

    t163 = ((x729>x730)!=(x731-x732));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x733 = 848789058794031469LL;
	int64_t x735 = INT64_MAX;
	uint64_t x736 = 2975645133532217LLU;
	static volatile int32_t t164 = 381454279;

    t164 = ((x733>x734)!=(x735-x736));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x737 = INT64_MIN;
	static volatile int8_t x738 = INT8_MIN;
	static volatile uint8_t x740 = 29U;
	int32_t t165 = 1009469612;

    t165 = ((x737>x738)!=(x739-x740));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x742 = -1;
	uint16_t x744 = UINT16_MAX;
	volatile int32_t t166 = 1759;

    t166 = ((x741>x742)!=(x743-x744));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x745 = UINT8_MAX;
	int16_t x746 = -8;
	volatile int64_t x748 = 830565416LL;
	int32_t t167 = 171;

    t167 = ((x745>x746)!=(x747-x748));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x750 = UINT8_MAX;
	static int16_t x751 = INT16_MIN;

    t168 = ((x749>x750)!=(x751-x752));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x753 = INT8_MAX;
	static int64_t x754 = INT64_MIN;
	uint64_t x756 = 47868LLU;

    t169 = ((x753>x754)!=(x755-x756));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x758 = INT64_MIN;
	int8_t x759 = 1;
	int32_t t170 = 82455391;

    t170 = ((x757>x758)!=(x759-x760));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x761 = INT8_MIN;
	int8_t x762 = -1;
	int32_t x763 = -1;
	int32_t x764 = INT32_MIN;
	int32_t t171 = -127141;

    t171 = ((x761>x762)!=(x763-x764));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x766 = INT8_MIN;
	uint8_t x768 = UINT8_MAX;
	int32_t t172 = -3815939;

    t172 = ((x765>x766)!=(x767-x768));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x769 = INT16_MIN;
	uint32_t x770 = UINT32_MAX;
	volatile int8_t x771 = -1;
	int16_t x772 = INT16_MIN;
	static int32_t t173 = -34208691;

    t173 = ((x769>x770)!=(x771-x772));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x773 = INT16_MIN;
	uint64_t x775 = UINT64_MAX;
	static int32_t t174 = 1;

    t174 = ((x773>x774)!=(x775-x776));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x777 = INT64_MIN;
	static int16_t x778 = 6997;
	volatile uint8_t x779 = 7U;
	volatile uint16_t x780 = 3U;

    t175 = ((x777>x778)!=(x779-x780));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x781 = 2LL;
	volatile uint8_t x782 = 0U;
	int64_t x783 = -1215LL;
	int16_t x784 = -1393;

    t176 = ((x781>x782)!=(x783-x784));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x785 = 12711U;
	static volatile int32_t t177 = -283853594;

    t177 = ((x785>x786)!=(x787-x788));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x789 = INT64_MAX;
	int64_t x790 = -26731759677LL;
	volatile int16_t x791 = 1;
	static volatile int8_t x792 = INT8_MAX;
	int32_t t178 = -13;

    t178 = ((x789>x790)!=(x791-x792));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x795 = -1;
	uint32_t x796 = 49446U;

    t179 = ((x793>x794)!=(x795-x796));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x798 = UINT8_MAX;
	uint64_t x799 = 1740936047589376LLU;

    t180 = ((x797>x798)!=(x799-x800));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x801 = 15U;
	int8_t x802 = INT8_MAX;
	int8_t x803 = INT8_MIN;
	uint32_t x804 = 0U;
	int32_t t181 = 0;

    t181 = ((x801>x802)!=(x803-x804));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x805 = 38059LLU;
	uint8_t x806 = UINT8_MAX;
	uint64_t x807 = UINT64_MAX;
	int16_t x808 = INT16_MIN;
	int32_t t182 = -91;

    t182 = ((x805>x806)!=(x807-x808));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x809 = 907U;
	int32_t x810 = -1;
	static int16_t x812 = -1;

    t183 = ((x809>x810)!=(x811-x812));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x814 = UINT16_MAX;
	static int64_t x815 = -1LL;
	int32_t x816 = -685713518;

    t184 = ((x813>x814)!=(x815-x816));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x817 = -1;
	static int8_t x818 = INT8_MIN;
	static int16_t x819 = 9282;
	int64_t x820 = 416643563253LL;
	int32_t t185 = 46308;

    t185 = ((x817>x818)!=(x819-x820));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x821 = 6LLU;
	volatile uint16_t x822 = UINT16_MAX;
	int8_t x823 = INT8_MAX;
	int32_t x824 = -5935681;
	static volatile int32_t t186 = -362400635;

    t186 = ((x821>x822)!=(x823-x824));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x825 = 602LLU;
	static int16_t x826 = 3107;
	uint64_t x827 = UINT64_MAX;
	uint32_t x828 = 62U;
	int32_t t187 = 29;

    t187 = ((x825>x826)!=(x827-x828));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x829 = 361860U;
	int32_t x830 = -5629439;
	static volatile int8_t x831 = 15;
	volatile uint32_t x832 = 745414499U;
	static volatile int32_t t188 = -1301;

    t188 = ((x829>x830)!=(x831-x832));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x833 = 3U;
	static uint16_t x834 = 8816U;
	int8_t x835 = -1;
	volatile int16_t x836 = INT16_MIN;
	int32_t t189 = -162816;

    t189 = ((x833>x834)!=(x835-x836));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x838 = INT8_MIN;
	static uint32_t x839 = UINT32_MAX;
	static int32_t x840 = INT32_MIN;
	int32_t t190 = 24707943;

    t190 = ((x837>x838)!=(x839-x840));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x841 = 13U;
	int64_t x842 = 1001802986747LL;
	int8_t x843 = INT8_MIN;
	int32_t t191 = -32724598;

    t191 = ((x841>x842)!=(x843-x844));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x846 = INT16_MIN;
	int8_t x847 = INT8_MAX;
	static volatile int32_t t192 = 4092640;

    t192 = ((x845>x846)!=(x847-x848));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x849 = INT32_MAX;
	uint8_t x850 = UINT8_MAX;
	volatile uint32_t x851 = UINT32_MAX;
	volatile int64_t x852 = INT64_MAX;
	int32_t t193 = 392;

    t193 = ((x849>x850)!=(x851-x852));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x853 = 3;
	volatile int8_t x854 = INT8_MIN;
	static int64_t x855 = 1088983985083863110LL;
	int16_t x856 = -3878;
	volatile int32_t t194 = -73982204;

    t194 = ((x853>x854)!=(x855-x856));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x857 = INT32_MAX;
	uint16_t x858 = UINT16_MAX;
	uint64_t x859 = 3LLU;
	static int64_t x860 = 0LL;
	volatile int32_t t195 = 627;

    t195 = ((x857>x858)!=(x859-x860));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x861 = 5451;
	int32_t x863 = -1;
	static int32_t t196 = -882143013;

    t196 = ((x861>x862)!=(x863-x864));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x869 = INT64_MAX;
	static int8_t x870 = INT8_MIN;
	uint64_t x871 = 1152186871328803314LLU;
	volatile int32_t t197 = 21901399;

    t197 = ((x869>x870)!=(x871-x872));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x873 = 59U;
	uint8_t x874 = UINT8_MAX;
	uint8_t x875 = UINT8_MAX;
	uint16_t x876 = 11294U;
	static volatile int32_t t198 = -1;

    t198 = ((x873>x874)!=(x875-x876));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x877 = INT16_MAX;
	uint64_t x878 = UINT64_MAX;
	static int16_t x879 = INT16_MIN;
	uint8_t x880 = UINT8_MAX;

    t199 = ((x877>x878)!=(x879-x880));

    if (t199 != 1) { NG(); } else { ; }
	
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

