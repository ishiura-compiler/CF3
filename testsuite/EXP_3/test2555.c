
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

volatile int16_t x2 = -10;
int32_t x3 = INT32_MAX;
uint32_t x22 = UINT32_MAX;
uint8_t x23 = UINT8_MAX;
volatile int32_t x24 = INT32_MIN;
static volatile int16_t x25 = INT16_MIN;
int8_t x33 = INT8_MIN;
int8_t x43 = INT8_MIN;
static uint8_t x46 = 55U;
static int32_t x53 = INT32_MIN;
int32_t t10 = -60264;
uint32_t x64 = 188007542U;
int64_t x71 = INT64_MIN;
int32_t t13 = 712145;
int8_t x77 = INT8_MIN;
uint8_t x80 = 3U;
int32_t t15 = 31105942;
uint8_t x81 = 2U;
int32_t t16 = 1194;
static volatile int32_t t18 = 1;
int8_t x99 = INT8_MIN;
int32_t x107 = INT32_MAX;
volatile int32_t t22 = -16968;
int64_t x118 = -1LL;
static int8_t x119 = INT8_MIN;
static int32_t t25 = 1577;
uint16_t x126 = 1893U;
volatile uint16_t x131 = UINT16_MAX;
uint64_t x138 = 1161445872127756296LLU;
int8_t x145 = INT8_MIN;
volatile int16_t x147 = -11111;
int64_t x148 = -1LL;
int32_t x153 = -1;
static int16_t x156 = 188;
int16_t x176 = INT16_MIN;
int8_t x186 = -1;
volatile int16_t x194 = -1783;
uint64_t x195 = 2329LLU;
int16_t x201 = INT16_MAX;
int64_t x205 = INT64_MIN;
static int16_t x207 = 128;
int8_t x210 = -10;
volatile int8_t x215 = 0;
static volatile int32_t t45 = 8112;
volatile uint8_t x217 = 10U;
int8_t x220 = -7;
uint64_t x224 = 63645LLU;
static int64_t x226 = -1LL;
int8_t x227 = INT8_MAX;
uint32_t x230 = UINT32_MAX;
volatile int32_t t50 = -79;
int32_t x237 = 318207;
int32_t t51 = -1;
static int64_t x241 = -210742768111708258LL;
int8_t x243 = -18;
int32_t t53 = 457001303;
static uint8_t x251 = 37U;
int32_t t54 = 6447556;
uint32_t x256 = 30U;
volatile int32_t t55 = -113795852;
int8_t x267 = 41;
int32_t x275 = INT32_MIN;
uint16_t x278 = 20U;
int16_t x279 = 6431;
int32_t x284 = INT32_MIN;
int16_t x288 = INT16_MAX;
static int8_t x294 = INT8_MAX;
volatile int32_t x304 = -1;
volatile int32_t x305 = INT32_MIN;
uint64_t x306 = UINT64_MAX;
int16_t x309 = INT16_MIN;
uint64_t x314 = 24388002191808914LLU;
int32_t t69 = -261867246;
int32_t x317 = INT32_MIN;
static volatile int32_t t70 = -183592494;
int32_t t72 = -224;
static volatile int16_t x329 = INT16_MIN;
uint16_t x337 = 4272U;
static volatile int16_t x339 = INT16_MIN;
volatile uint32_t x344 = 54924U;
int8_t x345 = 27;
int16_t x347 = INT16_MIN;
volatile int32_t t77 = -23533323;
volatile int32_t t78 = -1;
int32_t x359 = INT32_MIN;
int8_t x363 = -59;
volatile uint32_t x368 = 41836894U;
uint32_t x371 = UINT32_MAX;
int32_t t83 = 69620096;
int16_t x373 = -178;
uint16_t x376 = 18U;
volatile int32_t t87 = 0;
static uint8_t x393 = UINT8_MAX;
volatile int32_t t88 = 38512592;
uint32_t x398 = 1342866U;
int64_t x399 = INT64_MIN;
static uint32_t x401 = 15546060U;
uint16_t x410 = 2U;
uint16_t x417 = 2592U;
int32_t x421 = INT32_MAX;
uint8_t x425 = 61U;
static int32_t x426 = -1;
volatile int16_t x429 = INT16_MAX;
volatile int32_t t98 = -4003349;
uint32_t x439 = UINT32_MAX;
uint16_t x448 = UINT16_MAX;
static uint16_t x458 = UINT16_MAX;
int8_t x459 = INT8_MAX;
static int8_t x466 = INT8_MIN;
uint32_t x467 = 111U;
static int32_t x469 = -1;
volatile int32_t t108 = 325171407;
int64_t x478 = INT64_MAX;
volatile int8_t x479 = -1;
uint32_t x485 = 8365769U;
static int32_t x487 = -3;
volatile int32_t x488 = INT32_MIN;
int8_t x495 = 0;
int8_t x496 = -1;
int32_t t112 = 1550486;
volatile int32_t t113 = 38140828;
int32_t t114 = 273992406;
volatile int64_t x515 = INT64_MIN;
volatile int32_t t115 = -1621458;
volatile uint64_t x522 = UINT64_MAX;
static int64_t x530 = 1651056796419130LL;
volatile int32_t x531 = 3;
uint8_t x533 = UINT8_MAX;
int16_t x534 = -7794;
volatile int32_t t120 = -1;
int32_t x549 = INT32_MAX;
int8_t x550 = 0;
static volatile int32_t t122 = 654;
int64_t x556 = -1LL;
volatile int32_t t123 = 24;
int64_t x558 = 2014705LL;
static uint8_t x566 = 1U;
int32_t x572 = 2688421;
static volatile uint32_t x574 = UINT32_MAX;
uint8_t x575 = 126U;
int32_t x582 = INT32_MIN;
int16_t x586 = INT16_MIN;
uint64_t x593 = 8319LLU;
int32_t t131 = 36741699;
int32_t x599 = INT32_MIN;
int32_t x607 = INT32_MIN;
uint32_t x612 = 2492612U;
int64_t x614 = -1LL;
uint32_t x619 = UINT32_MAX;
static int32_t x620 = INT32_MAX;
volatile int32_t t136 = -2639;
static int64_t x625 = -110794518501LL;
int32_t x633 = INT32_MAX;
int64_t x639 = INT64_MIN;
volatile int32_t t140 = 890771;
volatile int32_t x641 = 15807473;
static int32_t t141 = -93444915;
static int16_t x649 = 16090;
int16_t x656 = INT16_MIN;
int8_t x659 = -1;
int32_t x661 = -1;
uint8_t x664 = 63U;
static int8_t x671 = INT8_MAX;
int32_t t147 = 113;
uint16_t x678 = 2735U;
uint64_t x681 = 121229898877032901LLU;
uint8_t x683 = 5U;
uint64_t x690 = UINT64_MAX;
uint8_t x697 = 29U;
static volatile int64_t x698 = -1LL;
int64_t x702 = INT64_MIN;
static int64_t x711 = INT64_MIN;
static int64_t x713 = INT64_MIN;
uint8_t x720 = UINT8_MAX;
int32_t t158 = -14;
uint32_t x732 = 0U;
static int64_t x735 = INT64_MAX;
static int8_t x751 = INT8_MAX;
volatile int64_t x756 = -62764LL;
int32_t x769 = INT32_MIN;
uint8_t x770 = UINT8_MAX;
static uint16_t x771 = 7U;
volatile uint8_t x773 = UINT8_MAX;
int16_t x780 = INT16_MIN;
volatile int32_t t169 = 2584728;
int8_t x784 = INT8_MIN;
volatile int32_t t173 = -250957723;
volatile int16_t x802 = INT16_MAX;
uint64_t x805 = 3021LLU;
int32_t x807 = 25;
static uint64_t x808 = UINT64_MAX;
static int16_t x819 = INT16_MIN;
static volatile int32_t t177 = -2;
int8_t x839 = INT8_MIN;
volatile int32_t t181 = -502;
volatile uint64_t x850 = 6145679911965242702LLU;
int16_t x865 = -1605;
volatile int16_t x871 = INT16_MIN;
int16_t x872 = -1;
int8_t x874 = -1;
volatile int32_t t189 = 17;
static int32_t x888 = -4;
static int32_t t191 = 1182;
volatile int32_t t192 = -479;
int8_t x900 = INT8_MIN;
volatile int32_t x906 = 13364;
uint32_t x907 = 145881451U;
int8_t x909 = INT8_MAX;
uint64_t x912 = 82604LLU;
volatile int8_t x919 = INT8_MIN;


void f0(void) {
    	static int32_t x1 = INT32_MAX;
	int32_t x4 = INT32_MIN;
	static int32_t t0 = 553;

    t0 = ((x1+x2)!=(x3^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	int8_t x6 = 1;
	int32_t x7 = 57085;
	int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = 112;

    t1 = ((x5+x6)!=(x7^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int64_t x10 = -460960749LL;
	volatile uint64_t x11 = 482637589072LLU;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -26461;

    t2 = ((x9+x10)!=(x11^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 59988907112711LLU;
	int8_t x18 = -3;
	static int64_t x19 = INT64_MAX;
	int32_t x20 = -1;
	static int32_t t3 = 82817093;

    t3 = ((x17+x18)!=(x19^x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x21 = 22476045U;
	int32_t t4 = 22295;

    t4 = ((x21+x22)!=(x23^x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x26 = INT16_MIN;
	static uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = -1;

    t5 = ((x25+x26)!=(x27^x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x34 = INT32_MAX;
	int64_t x35 = INT64_MIN;
	static int8_t x36 = 0;
	int32_t t6 = 1696068;

    t6 = ((x33+x34)!=(x35^x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	int8_t x44 = INT8_MAX;
	static int32_t t7 = 16076830;

    t7 = ((x41+x42)!=(x43^x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x45 = INT16_MIN;
	uint8_t x47 = UINT8_MAX;
	static int8_t x48 = INT8_MIN;
	volatile int32_t t8 = -27335488;

    t8 = ((x45+x46)!=(x47^x48));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x54 = -254LL;
	volatile uint16_t x55 = 157U;
	static int8_t x56 = INT8_MAX;
	volatile int32_t t9 = 179;

    t9 = ((x53+x54)!=(x55^x56));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x57 = INT8_MIN;
	volatile int8_t x58 = INT8_MAX;
	int64_t x59 = INT64_MAX;
	uint8_t x60 = 0U;

    t10 = ((x57+x58)!=(x59^x60));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x61 = INT32_MAX;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = 858U;
	int32_t t11 = -22;

    t11 = ((x61+x62)!=(x63^x64));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	volatile int16_t x67 = INT16_MIN;
	uint64_t x68 = 2165785714LLU;
	volatile int32_t t12 = 112;

    t12 = ((x65+x66)!=(x67^x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x69 = 30U;
	uint64_t x70 = 48LLU;
	uint8_t x72 = 11U;

    t13 = ((x69+x70)!=(x71^x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x73 = 76U;
	volatile int32_t x74 = 732635;
	volatile uint8_t x75 = 3U;
	static int16_t x76 = -842;
	static volatile int32_t t14 = 13301;

    t14 = ((x73+x74)!=(x75^x76));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x78 = 2U;
	int16_t x79 = -1;

    t15 = ((x77+x78)!=(x79^x80));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x82 = UINT32_MAX;
	int8_t x83 = -51;
	int64_t x84 = -106583663546010105LL;

    t16 = ((x81+x82)!=(x83^x84));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x89 = INT8_MIN;
	int16_t x90 = 11659;
	static uint64_t x91 = UINT64_MAX;
	static int8_t x92 = INT8_MIN;
	int32_t t17 = 170;

    t17 = ((x89+x90)!=(x91^x92));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x93 = 1020733LLU;
	static volatile int32_t x94 = INT32_MIN;
	uint64_t x95 = 897LLU;
	int8_t x96 = -1;

    t18 = ((x93+x94)!=(x95^x96));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x97 = 2LLU;
	static int8_t x98 = 22;
	static int64_t x100 = -1LL;
	int32_t t19 = -301737201;

    t19 = ((x97+x98)!=(x99^x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x101 = 159164U;
	volatile int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MAX;
	volatile int8_t x104 = INT8_MIN;
	static volatile int32_t t20 = -5299;

    t20 = ((x101+x102)!=(x103^x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x105 = -1;
	int16_t x106 = INT16_MIN;
	int8_t x108 = INT8_MAX;
	volatile int32_t t21 = -14258342;

    t21 = ((x105+x106)!=(x107^x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = 93;
	uint16_t x110 = 28505U;
	volatile uint64_t x111 = 6135LLU;
	int8_t x112 = INT8_MIN;

    t22 = ((x109+x110)!=(x111^x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x113 = 18U;
	volatile int32_t x114 = 22;
	uint16_t x115 = 6U;
	int64_t x116 = INT64_MAX;
	int32_t t23 = -66325;

    t23 = ((x113+x114)!=(x115^x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x117 = INT8_MAX;
	static uint64_t x120 = 393234742LLU;
	int32_t t24 = -93165;

    t24 = ((x117+x118)!=(x119^x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = -37;
	volatile uint32_t x122 = 32523U;
	static uint64_t x123 = UINT64_MAX;
	int32_t x124 = 524;

    t25 = ((x121+x122)!=(x123^x124));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = INT8_MAX;
	uint32_t x127 = UINT32_MAX;
	static uint64_t x128 = UINT64_MAX;
	volatile int32_t t26 = 38;

    t26 = ((x125+x126)!=(x127^x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x129 = 20U;
	int8_t x130 = -2;
	static int64_t x132 = INT64_MIN;
	int32_t t27 = 50636;

    t27 = ((x129+x130)!=(x131^x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x137 = INT32_MAX;
	static volatile uint64_t x139 = UINT64_MAX;
	uint64_t x140 = UINT64_MAX;
	int32_t t28 = -38464;

    t28 = ((x137+x138)!=(x139^x140));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x141 = INT32_MAX;
	static volatile int16_t x142 = -1042;
	volatile uint8_t x143 = 7U;
	int8_t x144 = 1;
	int32_t t29 = -1773869;

    t29 = ((x141+x142)!=(x143^x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x146 = INT16_MIN;
	int32_t t30 = -53;

    t30 = ((x145+x146)!=(x147^x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x154 = 81U;
	int8_t x155 = INT8_MIN;
	int32_t t31 = 0;

    t31 = ((x153+x154)!=(x155^x156));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x157 = 3U;
	volatile int16_t x158 = INT16_MAX;
	uint32_t x159 = 985U;
	static int16_t x160 = INT16_MIN;
	static volatile int32_t t32 = 94;

    t32 = ((x157+x158)!=(x159^x160));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x161 = INT32_MAX;
	volatile int64_t x162 = -132437718838033LL;
	static int8_t x163 = INT8_MAX;
	volatile uint8_t x164 = UINT8_MAX;
	int32_t t33 = -7454;

    t33 = ((x161+x162)!=(x163^x164));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x169 = 0U;
	int8_t x170 = 0;
	static int64_t x171 = INT64_MIN;
	static int16_t x172 = -63;
	static int32_t t34 = 396023624;

    t34 = ((x169+x170)!=(x171^x172));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x173 = UINT64_MAX;
	int16_t x174 = -956;
	volatile int32_t x175 = INT32_MIN;
	int32_t t35 = -1500637;

    t35 = ((x173+x174)!=(x175^x176));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x177 = -1LL;
	int32_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	static int64_t x180 = INT64_MIN;
	volatile int32_t t36 = 503365091;

    t36 = ((x177+x178)!=(x179^x180));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	static int32_t x182 = -24482935;
	uint8_t x183 = 52U;
	static int8_t x184 = INT8_MAX;
	int32_t t37 = 2582704;

    t37 = ((x181+x182)!=(x183^x184));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x185 = INT8_MIN;
	volatile int8_t x187 = 12;
	static int32_t x188 = 72150;
	volatile int32_t t38 = -48550;

    t38 = ((x185+x186)!=(x187^x188));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	int32_t x191 = INT32_MIN;
	static int64_t x192 = -406891984LL;
	static int32_t t39 = -2282883;

    t39 = ((x189+x190)!=(x191^x192));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x193 = -1LL;
	int16_t x196 = -1;
	volatile int32_t t40 = 221158869;

    t40 = ((x193+x194)!=(x195^x196));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = 172692;
	volatile int32_t x198 = INT32_MIN;
	static int16_t x199 = -1;
	int32_t x200 = INT32_MIN;
	int32_t t41 = 2840;

    t41 = ((x197+x198)!=(x199^x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x202 = 7813573062781LL;
	int16_t x203 = INT16_MAX;
	static int8_t x204 = -1;
	int32_t t42 = 1;

    t42 = ((x201+x202)!=(x203^x204));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x206 = 132059739LLU;
	static volatile int16_t x208 = 0;
	static volatile int32_t t43 = 247199860;

    t43 = ((x205+x206)!=(x207^x208));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x209 = INT16_MIN;
	int16_t x211 = -8;
	int64_t x212 = 43773481687974LL;
	int32_t t44 = 9;

    t44 = ((x209+x210)!=(x211^x212));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x213 = INT8_MIN;
	int8_t x214 = 8;
	int8_t x216 = 0;

    t45 = ((x213+x214)!=(x215^x216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x218 = -1;
	int8_t x219 = -1;
	static volatile int32_t t46 = -1844407;

    t46 = ((x217+x218)!=(x219^x220));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x221 = INT32_MIN;
	static uint8_t x222 = 4U;
	uint8_t x223 = UINT8_MAX;
	volatile int32_t t47 = -1701318;

    t47 = ((x221+x222)!=(x223^x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x225 = 2U;
	int32_t x228 = 3;
	int32_t t48 = 1;

    t48 = ((x225+x226)!=(x227^x228));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x229 = 21U;
	volatile int8_t x231 = 62;
	int32_t x232 = -1;
	int32_t t49 = -50266342;

    t49 = ((x229+x230)!=(x231^x232));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x233 = 441U;
	volatile int16_t x234 = -12;
	int8_t x235 = -1;
	volatile int64_t x236 = INT64_MIN;

    t50 = ((x233+x234)!=(x235^x236));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x238 = -1;
	volatile uint64_t x239 = 20885302407865246LLU;
	int32_t x240 = INT32_MIN;

    t51 = ((x237+x238)!=(x239^x240));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x242 = 1;
	static int32_t x244 = INT32_MIN;
	int32_t t52 = -6;

    t52 = ((x241+x242)!=(x243^x244));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x245 = 66;
	volatile int8_t x246 = INT8_MIN;
	uint16_t x247 = UINT16_MAX;
	uint32_t x248 = 1192U;

    t53 = ((x245+x246)!=(x247^x248));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x249 = INT32_MIN;
	uint16_t x250 = 1U;
	uint64_t x252 = UINT64_MAX;

    t54 = ((x249+x250)!=(x251^x252));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = INT32_MIN;
	static uint32_t x254 = UINT32_MAX;
	volatile uint8_t x255 = UINT8_MAX;

    t55 = ((x253+x254)!=(x255^x256));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x257 = 3U;
	int32_t x258 = 47406952;
	int64_t x259 = INT64_MIN;
	volatile int32_t x260 = 1614;
	int32_t t56 = 22415508;

    t56 = ((x257+x258)!=(x259^x260));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x265 = INT64_MIN;
	volatile int8_t x266 = 3;
	volatile uint32_t x268 = 7U;
	volatile int32_t t57 = -6367694;

    t57 = ((x265+x266)!=(x267^x268));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x269 = 57;
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = 2314349011652LL;
	static uint8_t x272 = 1U;
	int32_t t58 = 790600;

    t58 = ((x269+x270)!=(x271^x272));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x273 = UINT8_MAX;
	int8_t x274 = -10;
	int8_t x276 = INT8_MIN;
	int32_t t59 = -79843603;

    t59 = ((x273+x274)!=(x275^x276));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x277 = INT16_MIN;
	volatile int8_t x280 = 19;
	volatile int32_t t60 = -474214;

    t60 = ((x277+x278)!=(x279^x280));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x281 = 84389;
	int16_t x282 = INT16_MIN;
	volatile int8_t x283 = -55;
	int32_t t61 = -314713097;

    t61 = ((x281+x282)!=(x283^x284));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x285 = -1;
	int16_t x286 = INT16_MIN;
	uint32_t x287 = 810241454U;
	volatile int32_t t62 = -858;

    t62 = ((x285+x286)!=(x287^x288));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x289 = 1759LL;
	static volatile int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MAX;
	uint16_t x292 = UINT16_MAX;
	int32_t t63 = 149304;

    t63 = ((x289+x290)!=(x291^x292));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x293 = INT8_MAX;
	int16_t x295 = 6;
	static volatile int8_t x296 = -1;
	int32_t t64 = 12;

    t64 = ((x293+x294)!=(x295^x296));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x297 = UINT32_MAX;
	volatile int8_t x298 = 32;
	int16_t x299 = 60;
	volatile int16_t x300 = INT16_MIN;
	int32_t t65 = -28672532;

    t65 = ((x297+x298)!=(x299^x300));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x301 = -1;
	int32_t x302 = -396489101;
	uint64_t x303 = UINT64_MAX;
	int32_t t66 = 943394951;

    t66 = ((x301+x302)!=(x303^x304));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x307 = 31868U;
	int64_t x308 = INT64_MIN;
	int32_t t67 = 127202;

    t67 = ((x305+x306)!=(x307^x308));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x310 = -1LL;
	uint32_t x311 = 1939172U;
	static int16_t x312 = INT16_MIN;
	int32_t t68 = -1134;

    t68 = ((x309+x310)!=(x311^x312));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x313 = INT32_MIN;
	volatile uint8_t x315 = 12U;
	volatile int32_t x316 = INT32_MIN;

    t69 = ((x313+x314)!=(x315^x316));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x318 = 67168394U;
	int32_t x319 = -572251;
	int16_t x320 = INT16_MIN;

    t70 = ((x317+x318)!=(x319^x320));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x321 = -1246;
	static int16_t x322 = INT16_MAX;
	int8_t x323 = -61;
	uint32_t x324 = 29118840U;
	int32_t t71 = 585647611;

    t71 = ((x321+x322)!=(x323^x324));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x325 = 3U;
	volatile uint32_t x326 = UINT32_MAX;
	int8_t x327 = 2;
	int16_t x328 = INT16_MIN;

    t72 = ((x325+x326)!=(x327^x328));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x330 = 3U;
	uint64_t x331 = 77030LLU;
	volatile uint8_t x332 = 0U;
	int32_t t73 = -4087911;

    t73 = ((x329+x330)!=(x331^x332));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x333 = INT8_MIN;
	int8_t x334 = -19;
	uint64_t x335 = 1LLU;
	uint32_t x336 = 18210U;
	static int32_t t74 = 2674;

    t74 = ((x333+x334)!=(x335^x336));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x338 = UINT16_MAX;
	static uint16_t x340 = 7U;
	volatile int32_t t75 = 56;

    t75 = ((x337+x338)!=(x339^x340));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x341 = -1;
	int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	volatile int32_t t76 = 2592545;

    t76 = ((x341+x342)!=(x343^x344));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x346 = INT32_MIN;
	static volatile int16_t x348 = INT16_MAX;

    t77 = ((x345+x346)!=(x347^x348));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x349 = INT16_MIN;
	int64_t x350 = 3911099586123LL;
	static uint64_t x351 = UINT64_MAX;
	uint16_t x352 = UINT16_MAX;

    t78 = ((x349+x350)!=(x351^x352));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x353 = INT64_MAX;
	static int8_t x354 = INT8_MIN;
	volatile int32_t x355 = INT32_MAX;
	int32_t x356 = INT32_MAX;
	int32_t t79 = -5059340;

    t79 = ((x353+x354)!=(x355^x356));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x357 = INT8_MAX;
	int64_t x358 = -1LL;
	uint8_t x360 = UINT8_MAX;
	int32_t t80 = -32503945;

    t80 = ((x357+x358)!=(x359^x360));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x361 = INT64_MAX;
	int8_t x362 = -9;
	volatile int64_t x364 = -8805368LL;
	volatile int32_t t81 = 14267468;

    t81 = ((x361+x362)!=(x363^x364));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x365 = 27U;
	int32_t x366 = -69;
	int16_t x367 = -1;
	volatile int32_t t82 = -73293;

    t82 = ((x365+x366)!=(x367^x368));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x369 = 467984U;
	uint32_t x370 = 1U;
	volatile int16_t x372 = 94;

    t83 = ((x369+x370)!=(x371^x372));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x374 = 22;
	int8_t x375 = INT8_MIN;
	volatile int32_t t84 = 529921;

    t84 = ((x373+x374)!=(x375^x376));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x377 = 2173655;
	volatile int8_t x378 = 5;
	volatile int64_t x379 = 3295942979041LL;
	int16_t x380 = INT16_MIN;
	int32_t t85 = -1023705700;

    t85 = ((x377+x378)!=(x379^x380));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x381 = 1622701U;
	static int32_t x382 = INT32_MIN;
	int64_t x383 = -134865260820139295LL;
	volatile uint16_t x384 = 1831U;
	static int32_t t86 = -1369758;

    t86 = ((x381+x382)!=(x383^x384));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x389 = INT32_MIN;
	static int64_t x390 = -1LL;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = -1LL;

    t87 = ((x389+x390)!=(x391^x392));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x394 = INT32_MIN;
	static int32_t x395 = INT32_MIN;
	int64_t x396 = 95LL;

    t88 = ((x393+x394)!=(x395^x396));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x397 = -34610267812613LL;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t89 = -41789769;

    t89 = ((x397+x398)!=(x399^x400));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x402 = UINT8_MAX;
	int16_t x403 = -25;
	volatile int16_t x404 = -1;
	int32_t t90 = -1;

    t90 = ((x401+x402)!=(x403^x404));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x405 = -1;
	static int16_t x406 = 85;
	volatile int64_t x407 = 1907377155728892451LL;
	static uint16_t x408 = 1U;
	volatile int32_t t91 = -879;

    t91 = ((x405+x406)!=(x407^x408));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x409 = 6U;
	volatile int16_t x411 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;
	static volatile int32_t t92 = -624642;

    t92 = ((x409+x410)!=(x411^x412));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x413 = -88974884654LL;
	uint16_t x414 = UINT16_MAX;
	uint8_t x415 = 82U;
	volatile uint16_t x416 = UINT16_MAX;
	int32_t t93 = -8;

    t93 = ((x413+x414)!=(x415^x416));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x418 = INT8_MIN;
	static int32_t x419 = INT32_MAX;
	static int32_t x420 = INT32_MAX;
	int32_t t94 = 106;

    t94 = ((x417+x418)!=(x419^x420));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x422 = -3;
	int32_t x423 = INT32_MAX;
	int16_t x424 = INT16_MIN;
	static int32_t t95 = -3391;

    t95 = ((x421+x422)!=(x423^x424));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x427 = 9766;
	static volatile uint32_t x428 = 991U;
	int32_t t96 = -3;

    t96 = ((x425+x426)!=(x427^x428));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x430 = INT8_MIN;
	static uint16_t x431 = 7132U;
	int16_t x432 = -1;
	volatile int32_t t97 = -201640984;

    t97 = ((x429+x430)!=(x431^x432));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x433 = 11177U;
	int16_t x434 = INT16_MAX;
	static volatile uint16_t x435 = UINT16_MAX;
	static int16_t x436 = -1;

    t98 = ((x433+x434)!=(x435^x436));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x437 = 15179U;
	uint8_t x438 = 0U;
	int32_t x440 = INT32_MIN;
	volatile int32_t t99 = -1;

    t99 = ((x437+x438)!=(x439^x440));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x441 = INT8_MIN;
	uint8_t x442 = 4U;
	int64_t x443 = -277050824057383LL;
	static volatile int32_t x444 = 162259;
	volatile int32_t t100 = 9;

    t100 = ((x441+x442)!=(x443^x444));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x445 = -63;
	volatile int16_t x446 = -1;
	static volatile int32_t x447 = INT32_MIN;
	static int32_t t101 = -179373;

    t101 = ((x445+x446)!=(x447^x448));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x449 = 309203557;
	static int8_t x450 = INT8_MIN;
	int32_t x451 = INT32_MAX;
	int64_t x452 = 48780035LL;
	volatile int32_t t102 = -521314;

    t102 = ((x449+x450)!=(x451^x452));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x453 = -1;
	int8_t x454 = INT8_MIN;
	int16_t x455 = 3051;
	volatile int16_t x456 = INT16_MIN;
	int32_t t103 = 59;

    t103 = ((x453+x454)!=(x455^x456));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = INT64_MIN;
	int16_t x460 = -32;
	volatile int32_t t104 = 75147439;

    t104 = ((x457+x458)!=(x459^x460));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = -1LL;
	int32_t x462 = -1;
	static int16_t x463 = 0;
	int16_t x464 = -1;
	int32_t t105 = 4044;

    t105 = ((x461+x462)!=(x463^x464));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x465 = -164686990;
	static volatile int8_t x468 = -1;
	volatile int32_t t106 = -191391439;

    t106 = ((x465+x466)!=(x467^x468));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x470 = UINT32_MAX;
	int16_t x471 = 14022;
	static int32_t x472 = INT32_MAX;
	int32_t t107 = 106599324;

    t107 = ((x469+x470)!=(x471^x472));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x473 = -5696;
	int32_t x474 = INT32_MAX;
	int64_t x475 = INT64_MIN;
	uint16_t x476 = UINT16_MAX;

    t108 = ((x473+x474)!=(x475^x476));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x477 = -1;
	static int64_t x480 = INT64_MIN;
	static int32_t t109 = 133601865;

    t109 = ((x477+x478)!=(x479^x480));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x481 = 12;
	uint8_t x482 = UINT8_MAX;
	int32_t x483 = 158729853;
	volatile int64_t x484 = INT64_MIN;
	static volatile int32_t t110 = -1131178;

    t110 = ((x481+x482)!=(x483^x484));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x486 = -1;
	volatile int32_t t111 = 7;

    t111 = ((x485+x486)!=(x487^x488));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x493 = -1LL;
	int32_t x494 = INT32_MIN;

    t112 = ((x493+x494)!=(x495^x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x501 = 41U;
	volatile uint8_t x502 = 34U;
	int32_t x503 = INT32_MIN;
	static uint64_t x504 = 18175072248LLU;

    t113 = ((x501+x502)!=(x503^x504));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x509 = INT16_MIN;
	int64_t x510 = -1LL;
	uint8_t x511 = UINT8_MAX;
	int16_t x512 = -1;

    t114 = ((x509+x510)!=(x511^x512));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x513 = 3;
	int16_t x514 = 697;
	volatile int64_t x516 = -7184276910LL;

    t115 = ((x513+x514)!=(x515^x516));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x521 = 29;
	uint64_t x523 = 53LLU;
	int16_t x524 = INT16_MIN;
	volatile int32_t t116 = 1;

    t116 = ((x521+x522)!=(x523^x524));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x525 = UINT16_MAX;
	int32_t x526 = -1;
	volatile int8_t x527 = -13;
	static int16_t x528 = 0;
	int32_t t117 = -344952971;

    t117 = ((x525+x526)!=(x527^x528));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x529 = UINT8_MAX;
	volatile int32_t x532 = 0;
	static int32_t t118 = -17705;

    t118 = ((x529+x530)!=(x531^x532));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x535 = UINT64_MAX;
	uint8_t x536 = 0U;
	int32_t t119 = 1;

    t119 = ((x533+x534)!=(x535^x536));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x537 = 63826;
	uint64_t x538 = 7581596942324229430LLU;
	static uint32_t x539 = 254U;
	int8_t x540 = 1;

    t120 = ((x537+x538)!=(x539^x540));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = 1016910LL;
	uint64_t x543 = UINT64_MAX;
	int64_t x544 = INT64_MAX;
	int32_t t121 = 34;

    t121 = ((x541+x542)!=(x543^x544));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x551 = 2LL;
	int32_t x552 = 508340;

    t122 = ((x549+x550)!=(x551^x552));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x553 = INT16_MAX;
	int8_t x554 = INT8_MIN;
	int64_t x555 = INT64_MIN;

    t123 = ((x553+x554)!=(x555^x556));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x557 = -16619660LL;
	int64_t x559 = -148496128794LL;
	uint32_t x560 = 811829402U;
	volatile int32_t t124 = -1;

    t124 = ((x557+x558)!=(x559^x560));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x561 = 26U;
	int16_t x562 = 20;
	uint8_t x563 = 3U;
	uint32_t x564 = 93841852U;
	volatile int32_t t125 = 32518936;

    t125 = ((x561+x562)!=(x563^x564));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x565 = -1LL;
	int32_t x567 = 6;
	static int16_t x568 = -1;
	int32_t t126 = -1709299;

    t126 = ((x565+x566)!=(x567^x568));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x569 = 1;
	int16_t x570 = -1;
	int16_t x571 = -25;
	int32_t t127 = -63;

    t127 = ((x569+x570)!=(x571^x572));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x573 = 72U;
	uint16_t x576 = 3U;
	static int32_t t128 = -9182454;

    t128 = ((x573+x574)!=(x575^x576));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x581 = -1LL;
	static uint64_t x583 = 23686550249560LLU;
	int8_t x584 = 35;
	volatile int32_t t129 = 124653;

    t129 = ((x581+x582)!=(x583^x584));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x585 = -1;
	volatile int8_t x587 = 0;
	uint32_t x588 = 110495390U;
	volatile int32_t t130 = 225227006;

    t130 = ((x585+x586)!=(x587^x588));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x594 = -31050905528641366LL;
	volatile uint32_t x595 = 53848577U;
	int16_t x596 = -1;

    t131 = ((x593+x594)!=(x595^x596));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x597 = 187831261878728LL;
	int16_t x598 = INT16_MIN;
	static volatile uint8_t x600 = UINT8_MAX;
	static volatile int32_t t132 = -25883665;

    t132 = ((x597+x598)!=(x599^x600));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x605 = 16249055U;
	uint8_t x606 = 2U;
	volatile int64_t x608 = INT64_MAX;
	volatile int32_t t133 = 633251;

    t133 = ((x605+x606)!=(x607^x608));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x609 = INT32_MIN;
	uint16_t x610 = 509U;
	static int16_t x611 = -321;
	int32_t t134 = -241644;

    t134 = ((x609+x610)!=(x611^x612));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x613 = -1;
	int64_t x615 = INT64_MIN;
	uint64_t x616 = 4752389543370987998LLU;
	static int32_t t135 = -27283086;

    t135 = ((x613+x614)!=(x615^x616));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x617 = 7761;
	volatile int16_t x618 = 442;

    t136 = ((x617+x618)!=(x619^x620));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x621 = 27164;
	int16_t x622 = INT16_MAX;
	uint32_t x623 = 25350U;
	int32_t x624 = INT32_MAX;
	int32_t t137 = 214793159;

    t137 = ((x621+x622)!=(x623^x624));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x626 = -7;
	static int8_t x627 = INT8_MAX;
	int32_t x628 = -2;
	static volatile int32_t t138 = -452;

    t138 = ((x625+x626)!=(x627^x628));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x634 = -1LL;
	int16_t x635 = INT16_MAX;
	volatile int8_t x636 = INT8_MIN;
	int32_t t139 = 3486;

    t139 = ((x633+x634)!=(x635^x636));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x637 = -29;
	int8_t x638 = INT8_MAX;
	uint8_t x640 = UINT8_MAX;

    t140 = ((x637+x638)!=(x639^x640));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x642 = 5LL;
	int8_t x643 = -1;
	uint32_t x644 = 1U;

    t141 = ((x641+x642)!=(x643^x644));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x650 = -1;
	int8_t x651 = INT8_MIN;
	uint32_t x652 = 181U;
	int32_t t142 = 38;

    t142 = ((x649+x650)!=(x651^x652));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x653 = INT64_MIN;
	uint16_t x654 = UINT16_MAX;
	static int16_t x655 = 1654;
	volatile int32_t t143 = -1;

    t143 = ((x653+x654)!=(x655^x656));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x657 = INT64_MIN;
	uint8_t x658 = 16U;
	int64_t x660 = -1LL;
	static volatile int32_t t144 = 5;

    t144 = ((x657+x658)!=(x659^x660));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x662 = 1269737866LL;
	uint16_t x663 = 1312U;
	volatile int32_t t145 = 120969;

    t145 = ((x661+x662)!=(x663^x664));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x669 = 834340U;
	int32_t x670 = -1;
	volatile int16_t x672 = -1;
	int32_t t146 = 2714343;

    t146 = ((x669+x670)!=(x671^x672));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x673 = -1623LL;
	uint8_t x674 = UINT8_MAX;
	int8_t x675 = INT8_MIN;
	int64_t x676 = INT64_MAX;

    t147 = ((x673+x674)!=(x675^x676));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x677 = -4733160LL;
	static int64_t x679 = -118299675061513LL;
	volatile int8_t x680 = INT8_MIN;
	int32_t t148 = 7783;

    t148 = ((x677+x678)!=(x679^x680));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x682 = -1;
	int64_t x684 = INT64_MAX;
	int32_t t149 = -116;

    t149 = ((x681+x682)!=(x683^x684));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x685 = 1;
	int16_t x686 = INT16_MIN;
	int8_t x687 = INT8_MIN;
	uint16_t x688 = 777U;
	volatile int32_t t150 = -504;

    t150 = ((x685+x686)!=(x687^x688));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x689 = -1LL;
	uint64_t x691 = UINT64_MAX;
	static volatile int16_t x692 = -1;
	int32_t t151 = 0;

    t151 = ((x689+x690)!=(x691^x692));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MAX;
	int16_t x695 = INT16_MIN;
	volatile int64_t x696 = INT64_MIN;
	volatile int32_t t152 = -10280590;

    t152 = ((x693+x694)!=(x695^x696));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x699 = UINT64_MAX;
	int64_t x700 = -42LL;
	int32_t t153 = -1480491;

    t153 = ((x697+x698)!=(x699^x700));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x701 = INT64_MAX;
	int16_t x703 = -82;
	int64_t x704 = INT64_MIN;
	int32_t t154 = 1;

    t154 = ((x701+x702)!=(x703^x704));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x705 = -1;
	uint16_t x706 = 5U;
	uint64_t x707 = 9300010091557606LLU;
	volatile int32_t x708 = -1;
	int32_t t155 = -13;

    t155 = ((x705+x706)!=(x707^x708));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x709 = 46U;
	static uint8_t x710 = UINT8_MAX;
	int16_t x712 = INT16_MIN;
	int32_t t156 = 3;

    t156 = ((x709+x710)!=(x711^x712));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x714 = 2U;
	int32_t x715 = INT32_MIN;
	uint32_t x716 = 1U;
	volatile int32_t t157 = 44886;

    t157 = ((x713+x714)!=(x715^x716));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x717 = INT8_MIN;
	static uint8_t x718 = UINT8_MAX;
	int16_t x719 = 64;

    t158 = ((x717+x718)!=(x719^x720));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x725 = 4051U;
	uint64_t x726 = UINT64_MAX;
	static int64_t x727 = 347LL;
	int8_t x728 = -1;
	int32_t t159 = 80721048;

    t159 = ((x725+x726)!=(x727^x728));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x729 = INT16_MIN;
	static uint8_t x730 = 6U;
	static int64_t x731 = 729200404773565LL;
	int32_t t160 = 763766;

    t160 = ((x729+x730)!=(x731^x732));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x733 = -1LL;
	uint64_t x734 = 2LLU;
	int32_t x736 = -37356223;
	int32_t t161 = -2527;

    t161 = ((x733+x734)!=(x735^x736));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x737 = INT8_MIN;
	int64_t x738 = -252803026396317LL;
	static uint8_t x739 = UINT8_MAX;
	uint64_t x740 = UINT64_MAX;
	volatile int32_t t162 = 82045;

    t162 = ((x737+x738)!=(x739^x740));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x741 = INT64_MIN;
	uint32_t x742 = UINT32_MAX;
	static int32_t x743 = INT32_MAX;
	uint16_t x744 = 6843U;
	int32_t t163 = 202110;

    t163 = ((x741+x742)!=(x743^x744));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x745 = INT16_MIN;
	int8_t x746 = -21;
	uint64_t x747 = 51841LLU;
	int32_t x748 = INT32_MIN;
	volatile int32_t t164 = -7076;

    t164 = ((x745+x746)!=(x747^x748));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x749 = UINT32_MAX;
	volatile uint16_t x750 = 13U;
	uint8_t x752 = 1U;
	volatile int32_t t165 = -1025;

    t165 = ((x749+x750)!=(x751^x752));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x753 = UINT16_MAX;
	int16_t x754 = -1;
	volatile int64_t x755 = 1648348794LL;
	int32_t t166 = -62694;

    t166 = ((x753+x754)!=(x755^x756));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x772 = 435U;
	volatile int32_t t167 = -2892260;

    t167 = ((x769+x770)!=(x771^x772));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x774 = -50064LL;
	uint16_t x775 = 15421U;
	int8_t x776 = INT8_MAX;
	int32_t t168 = 356762917;

    t168 = ((x773+x774)!=(x775^x776));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x777 = -1;
	int16_t x778 = INT16_MAX;
	int8_t x779 = INT8_MIN;

    t169 = ((x777+x778)!=(x779^x780));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x781 = -7;
	volatile uint64_t x782 = UINT64_MAX;
	int8_t x783 = 1;
	int32_t t170 = 0;

    t170 = ((x781+x782)!=(x783^x784));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x789 = INT64_MAX;
	int64_t x790 = -1766026501324LL;
	static volatile uint8_t x791 = UINT8_MAX;
	int32_t x792 = INT32_MIN;
	volatile int32_t t171 = 6;

    t171 = ((x789+x790)!=(x791^x792));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x793 = -1LL;
	volatile uint8_t x794 = 49U;
	static int8_t x795 = 15;
	int64_t x796 = INT64_MAX;
	static volatile int32_t t172 = -40789438;

    t172 = ((x793+x794)!=(x795^x796));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x797 = 1U;
	int32_t x798 = INT32_MIN;
	uint16_t x799 = UINT16_MAX;
	uint8_t x800 = 14U;

    t173 = ((x797+x798)!=(x799^x800));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x801 = INT32_MIN;
	int64_t x803 = 169009284860LL;
	int8_t x804 = INT8_MIN;
	static int32_t t174 = 376262;

    t174 = ((x801+x802)!=(x803^x804));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x806 = -1;
	int32_t t175 = -222;

    t175 = ((x805+x806)!=(x807^x808));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x813 = -1;
	static int8_t x814 = -40;
	uint64_t x815 = 924LLU;
	int16_t x816 = INT16_MAX;
	static int32_t t176 = 3883055;

    t176 = ((x813+x814)!=(x815^x816));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x817 = UINT16_MAX;
	uint16_t x818 = UINT16_MAX;
	int16_t x820 = 2;

    t177 = ((x817+x818)!=(x819^x820));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x825 = INT16_MIN;
	int64_t x826 = -1LL;
	uint8_t x827 = 90U;
	static uint32_t x828 = 1789683U;
	volatile int32_t t178 = 7888;

    t178 = ((x825+x826)!=(x827^x828));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x833 = INT8_MAX;
	volatile int64_t x834 = 50978616465LL;
	uint32_t x835 = 31U;
	int8_t x836 = INT8_MAX;
	int32_t t179 = -1;

    t179 = ((x833+x834)!=(x835^x836));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x837 = INT64_MIN;
	uint32_t x838 = 3523140U;
	static int64_t x840 = -1LL;
	int32_t t180 = 25;

    t180 = ((x837+x838)!=(x839^x840));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x841 = 0;
	static uint32_t x842 = 12293U;
	int32_t x843 = -1;
	uint64_t x844 = 437220133948217LLU;

    t181 = ((x841+x842)!=(x843^x844));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x849 = -129891033;
	int8_t x851 = INT8_MIN;
	volatile uint16_t x852 = UINT16_MAX;
	volatile int32_t t182 = -3;

    t182 = ((x849+x850)!=(x851^x852));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x853 = UINT16_MAX;
	static int32_t x854 = -98;
	int32_t x855 = INT32_MIN;
	uint32_t x856 = 30759759U;
	volatile int32_t t183 = 16783964;

    t183 = ((x853+x854)!=(x855^x856));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x857 = INT16_MAX;
	int8_t x858 = 36;
	volatile int16_t x859 = INT16_MIN;
	uint64_t x860 = UINT64_MAX;
	int32_t t184 = -100413282;

    t184 = ((x857+x858)!=(x859^x860));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x866 = INT8_MIN;
	volatile int32_t x867 = INT32_MIN;
	int16_t x868 = INT16_MAX;
	volatile int32_t t185 = -266335051;

    t185 = ((x865+x866)!=(x867^x868));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x869 = 2LLU;
	int64_t x870 = -817328514LL;
	int32_t t186 = 5839235;

    t186 = ((x869+x870)!=(x871^x872));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x873 = -497;
	static uint32_t x875 = 1U;
	int16_t x876 = -1;
	volatile int32_t t187 = 228672959;

    t187 = ((x873+x874)!=(x875^x876));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x877 = 24970U;
	uint64_t x878 = 45LLU;
	int8_t x879 = INT8_MIN;
	int64_t x880 = INT64_MIN;
	int32_t t188 = 2;

    t188 = ((x877+x878)!=(x879^x880));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x881 = INT8_MIN;
	static int16_t x882 = INT16_MIN;
	uint8_t x883 = 14U;
	uint16_t x884 = 6036U;

    t189 = ((x881+x882)!=(x883^x884));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x885 = INT64_MIN;
	uint8_t x886 = UINT8_MAX;
	volatile uint8_t x887 = 10U;
	static volatile int32_t t190 = 30584;

    t190 = ((x885+x886)!=(x887^x888));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x889 = -16473068;
	uint16_t x890 = UINT16_MAX;
	int16_t x891 = INT16_MAX;
	uint8_t x892 = UINT8_MAX;

    t191 = ((x889+x890)!=(x891^x892));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x893 = UINT64_MAX;
	static int16_t x894 = INT16_MIN;
	static uint8_t x895 = 40U;
	int16_t x896 = -1;

    t192 = ((x893+x894)!=(x895^x896));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x897 = UINT64_MAX;
	volatile int16_t x898 = 3;
	static int32_t x899 = INT32_MAX;
	int32_t t193 = -1;

    t193 = ((x897+x898)!=(x899^x900));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x901 = 1369288LLU;
	int64_t x902 = -1LL;
	volatile int64_t x903 = INT64_MIN;
	volatile int32_t x904 = 0;
	static int32_t t194 = -19897406;

    t194 = ((x901+x902)!=(x903^x904));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x905 = INT32_MIN;
	uint64_t x908 = 0LLU;
	volatile int32_t t195 = 3;

    t195 = ((x905+x906)!=(x907^x908));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x910 = 187U;
	uint16_t x911 = 4U;
	volatile int32_t t196 = 75;

    t196 = ((x909+x910)!=(x911^x912));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x913 = 85;
	uint32_t x914 = 905151U;
	uint64_t x915 = 10029113676332799LLU;
	static uint16_t x916 = 14252U;
	volatile int32_t t197 = -13303674;

    t197 = ((x913+x914)!=(x915^x916));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x917 = -3859103085LL;
	uint16_t x918 = 158U;
	static volatile uint32_t x920 = 90294U;
	volatile int32_t t198 = 109;

    t198 = ((x917+x918)!=(x919^x920));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x921 = -1;
	volatile int8_t x922 = 3;
	int64_t x923 = INT64_MIN;
	uint64_t x924 = 31288750663LLU;
	static volatile int32_t t199 = -227;

    t199 = ((x921+x922)!=(x923^x924));

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

