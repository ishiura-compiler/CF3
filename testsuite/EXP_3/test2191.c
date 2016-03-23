
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

int64_t x4 = INT64_MIN;
volatile int8_t x36 = INT8_MIN;
int32_t t4 = -115860779;
volatile int32_t x50 = -1;
uint32_t x52 = 33151899U;
int64_t x78 = INT64_MAX;
static int16_t x81 = INT16_MAX;
uint8_t x83 = 19U;
volatile int32_t t10 = -6397;
volatile uint64_t x86 = 8053405917148993LLU;
volatile int8_t x87 = -28;
static int32_t x112 = -1;
int64_t x114 = -1LL;
static uint32_t x122 = UINT32_MAX;
int32_t t17 = 26888064;
volatile int32_t t19 = 5396178;
uint8_t x133 = UINT8_MAX;
int32_t x135 = -24706;
static uint64_t x148 = 58342294LLU;
static int8_t x155 = INT8_MIN;
volatile int32_t t25 = -43597;
volatile uint32_t x158 = 2099842092U;
int32_t x159 = INT32_MIN;
int32_t t26 = 9234265;
static uint32_t x161 = UINT32_MAX;
uint32_t x163 = 13079U;
int8_t x164 = INT8_MAX;
uint8_t x169 = UINT8_MAX;
int32_t x171 = -23;
volatile int32_t t29 = 0;
static int32_t x175 = -3444186;
uint16_t x179 = UINT16_MAX;
uint8_t x180 = 1U;
int64_t x183 = -1LL;
volatile int32_t t32 = 152968;
int32_t x186 = INT32_MAX;
uint64_t x189 = 1779696825562LLU;
volatile int32_t t34 = 907032209;
volatile int8_t x204 = INT8_MAX;
static uint8_t x210 = 17U;
int64_t x217 = INT64_MIN;
static uint32_t x227 = 1114U;
static volatile int32_t t39 = -1;
static uint8_t x232 = UINT8_MAX;
int64_t x240 = INT64_MIN;
int8_t x241 = 6;
uint8_t x254 = 86U;
int8_t x257 = INT8_MIN;
uint16_t x258 = 105U;
uint32_t x262 = 2888410U;
volatile int64_t x268 = INT64_MIN;
volatile int32_t t48 = 120152;
int8_t x277 = INT8_MIN;
volatile int32_t t51 = -560279575;
volatile int8_t x298 = INT8_MAX;
uint32_t x306 = UINT32_MAX;
int16_t x308 = INT16_MIN;
uint16_t x313 = UINT16_MAX;
volatile int16_t x314 = INT16_MIN;
int32_t x328 = INT32_MIN;
uint8_t x330 = 4U;
int32_t t58 = 3417787;
uint32_t x335 = 5129U;
int32_t t59 = -2753;
volatile int32_t t60 = -1;
volatile int32_t x346 = 10717;
volatile int64_t x351 = INT64_MAX;
static volatile uint32_t x357 = 3353301U;
volatile int16_t x358 = -1;
uint8_t x366 = 0U;
int8_t x367 = -60;
int32_t t66 = -172178;
uint32_t x370 = 140751U;
int32_t t68 = -220215;
int16_t x379 = -32;
int64_t x380 = INT64_MIN;
static volatile int64_t x382 = 6611390126831439LL;
static int32_t t71 = -5585385;
static volatile int8_t x389 = 1;
static int32_t x390 = INT32_MIN;
volatile uint32_t x391 = 926U;
int64_t x392 = -1LL;
uint64_t x393 = UINT64_MAX;
int64_t x394 = -11094LL;
int16_t x407 = -1868;
int8_t x414 = INT8_MAX;
uint32_t x421 = UINT32_MAX;
int64_t x424 = 3773039LL;
static volatile int32_t t77 = 36;
static int8_t x433 = -1;
volatile int16_t x434 = INT16_MIN;
int16_t x438 = -5626;
volatile uint8_t x439 = UINT8_MAX;
uint16_t x446 = 10U;
volatile int32_t t81 = 210670;
int32_t x450 = -1;
uint8_t x454 = 127U;
uint8_t x457 = 0U;
uint16_t x464 = 1U;
int32_t x466 = -3050;
int32_t x469 = -8598;
uint32_t x470 = 58497U;
static uint16_t x472 = 6U;
int8_t x475 = INT8_MIN;
static int32_t t88 = 178778;
static volatile uint8_t x488 = UINT8_MAX;
int16_t x490 = INT16_MAX;
volatile int32_t t91 = 98862974;
int16_t x504 = -18;
int8_t x509 = INT8_MIN;
static volatile int32_t t93 = -101242;
volatile int8_t x514 = INT8_MIN;
volatile int32_t t95 = -395;
int16_t x547 = INT16_MAX;
static int16_t x554 = -8;
int32_t t100 = 538;
int64_t x559 = INT64_MIN;
static volatile int16_t x570 = -3220;
int32_t t103 = 233;
int64_t x580 = INT64_MAX;
volatile uint8_t x593 = 2U;
volatile int16_t x595 = INT16_MIN;
static uint8_t x600 = 3U;
int32_t t110 = -13761972;
int16_t x613 = -17;
volatile uint32_t x616 = 44170902U;
volatile int32_t t112 = 600288;
volatile int32_t t113 = 866908076;
uint64_t x623 = 38LLU;
int32_t t114 = -25;
uint64_t x633 = 1479693213LLU;
int8_t x635 = -1;
int64_t x637 = -3000LL;
uint8_t x638 = 0U;
int64_t x639 = -1LL;
static uint8_t x647 = 6U;
volatile int8_t x648 = INT8_MIN;
int32_t t117 = 0;
uint32_t x649 = 11U;
int16_t x658 = -465;
int32_t x660 = INT32_MAX;
volatile int32_t x667 = -1;
int64_t x675 = INT64_MIN;
int32_t x679 = -1;
volatile int32_t t124 = 7630;
int16_t x690 = 1756;
int8_t x691 = INT8_MAX;
static int64_t x700 = INT64_MIN;
int8_t x710 = -1;
static int8_t x718 = -44;
volatile int8_t x723 = INT8_MIN;
volatile int32_t t133 = 0;
int8_t x731 = 22;
int8_t x733 = -1;
volatile int32_t x734 = -37;
int32_t t136 = -640087;
uint64_t x747 = UINT64_MAX;
int16_t x752 = INT16_MIN;
static uint16_t x756 = UINT16_MAX;
volatile int32_t x757 = -1;
static volatile int8_t x759 = -10;
int32_t x773 = -1;
uint32_t x784 = UINT32_MAX;
volatile int16_t x787 = -180;
int32_t x788 = -1;
static volatile int16_t x796 = INT16_MAX;
volatile int32_t x807 = INT32_MIN;
volatile int32_t t147 = -649178;
volatile int32_t t148 = 431739316;
static int64_t x821 = -1LL;
int64_t x824 = -1LL;
int32_t x828 = INT32_MIN;
uint16_t x835 = 3469U;
static uint32_t x836 = 252985357U;
int8_t x839 = 1;
int32_t x840 = 34352;
volatile uint16_t x841 = 12703U;
uint16_t x846 = 95U;
uint8_t x853 = UINT8_MAX;
int16_t x856 = 1872;
int32_t t158 = -3145;
int8_t x870 = -1;
int16_t x871 = INT16_MIN;
int32_t t160 = 5;
int16_t x876 = INT16_MIN;
uint32_t x877 = 2045109100U;
int64_t x879 = 1LL;
volatile int32_t x892 = -147146;
uint8_t x903 = 67U;
int16_t x904 = -1;
static volatile int16_t x906 = -5093;
uint8_t x925 = 9U;
volatile int32_t t169 = 1113152;
static volatile int32_t t170 = 0;
int32_t x933 = INT32_MAX;
static int16_t x934 = -1;
static int8_t x935 = 2;
static volatile int32_t t173 = -388;
int32_t t175 = -900101930;
static uint8_t x972 = 15U;
volatile uint32_t x976 = 15425004U;
uint32_t x984 = 152941U;
volatile int32_t t179 = -130;
int16_t x990 = -1;
volatile int32_t t180 = -602223875;
volatile int16_t x993 = INT16_MIN;
int8_t x1006 = 1;
volatile int32_t t184 = 0;
static uint64_t x1014 = UINT64_MAX;
int16_t x1015 = INT16_MIN;
int16_t x1019 = -1;
uint16_t x1033 = 3975U;
static int32_t t189 = 980752;
int16_t x1047 = INT16_MIN;
int8_t x1049 = INT8_MIN;
static volatile int8_t x1051 = INT8_MAX;
int16_t x1061 = 1;
int32_t x1063 = INT32_MIN;
static int8_t x1064 = INT8_MAX;
uint16_t x1080 = UINT16_MAX;
int16_t x1083 = -1;
int32_t x1084 = 30389;
volatile int32_t t199 = -239378;


void f0(void) {
    	static uint8_t x1 = 24U;
	uint8_t x2 = 31U;
	uint64_t x3 = 13850024LLU;
	volatile int32_t t0 = -42895545;

    t0 = ((x1*x2)!=(x3&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x17 = INT16_MAX;
	int32_t x18 = -1;
	int32_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t1 = -585347;

    t1 = ((x17*x18)!=(x19&x20));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x33 = -276069937LL;
	static uint64_t x34 = 128833457LLU;
	static volatile uint8_t x35 = 20U;
	volatile int32_t t2 = -2897;

    t2 = ((x33*x34)!=(x35&x36));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x37 = -36;
	uint8_t x38 = 11U;
	int64_t x39 = INT64_MAX;
	int32_t x40 = -1;
	volatile int32_t t3 = 0;

    t3 = ((x37*x38)!=(x39&x40));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = -1;
	static uint64_t x48 = 1591507907913231426LLU;

    t4 = ((x45*x46)!=(x47&x48));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x49 = INT16_MAX;
	uint16_t x51 = UINT16_MAX;
	volatile int32_t t5 = -12408;

    t5 = ((x49*x50)!=(x51&x52));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x53 = 491;
	uint64_t x54 = UINT64_MAX;
	static volatile int64_t x55 = 769340211LL;
	int16_t x56 = -137;
	static int32_t t6 = 29780397;

    t6 = ((x53*x54)!=(x55&x56));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x57 = INT64_MAX;
	volatile int16_t x58 = -1;
	int32_t x59 = INT32_MAX;
	static int32_t x60 = INT32_MIN;
	volatile int32_t t7 = -1;

    t7 = ((x57*x58)!=(x59&x60));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x61 = INT16_MIN;
	volatile uint8_t x62 = 24U;
	int32_t x63 = -387144959;
	int32_t x64 = INT32_MIN;
	int32_t t8 = 240344;

    t8 = ((x61*x62)!=(x63&x64));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x77 = 4707603LLU;
	static uint64_t x79 = UINT64_MAX;
	int16_t x80 = 101;
	volatile int32_t t9 = 236659;

    t9 = ((x77*x78)!=(x79&x80));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x82 = UINT16_MAX;
	uint8_t x84 = UINT8_MAX;

    t10 = ((x81*x82)!=(x83&x84));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x85 = INT32_MIN;
	uint64_t x88 = UINT64_MAX;
	static int32_t t11 = -4517386;

    t11 = ((x85*x86)!=(x87&x88));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x89 = 31393U;
	int64_t x90 = -81911232LL;
	volatile int32_t x91 = -923;
	uint32_t x92 = 1558239U;
	int32_t t12 = -2456;

    t12 = ((x89*x90)!=(x91&x92));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x93 = 219U;
	volatile int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	static int16_t x96 = INT16_MAX;
	int32_t t13 = -10;

    t13 = ((x93*x94)!=(x95&x96));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	volatile uint32_t x107 = 2005U;
	int16_t x108 = 0;
	int32_t t14 = 0;

    t14 = ((x105*x106)!=(x107&x108));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x109 = UINT64_MAX;
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MAX;
	static volatile int32_t t15 = 2149;

    t15 = ((x109*x110)!=(x111&x112));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x113 = INT32_MAX;
	static int16_t x115 = -7;
	int32_t x116 = -1;
	volatile int32_t t16 = 36379;

    t16 = ((x113*x114)!=(x115&x116));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x121 = INT16_MIN;
	uint16_t x123 = UINT16_MAX;
	static int64_t x124 = 4175670LL;

    t17 = ((x121*x122)!=(x123&x124));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MAX;
	uint16_t x127 = 1415U;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t18 = 699211639;

    t18 = ((x125*x126)!=(x127&x128));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x129 = INT32_MIN;
	uint64_t x130 = 595189130533828175LLU;
	int16_t x131 = 2;
	static int8_t x132 = INT8_MIN;

    t19 = ((x129*x130)!=(x131&x132));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x134 = -1;
	uint64_t x136 = UINT64_MAX;
	int32_t t20 = -37;

    t20 = ((x133*x134)!=(x135&x136));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x137 = 515U;
	int32_t x138 = -2167834;
	uint32_t x139 = 626000609U;
	volatile uint16_t x140 = 1U;
	int32_t t21 = -534326;

    t21 = ((x137*x138)!=(x139&x140));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x141 = 586U;
	int64_t x142 = 424657822LL;
	static uint16_t x143 = UINT16_MAX;
	static int16_t x144 = -1;
	volatile int32_t t22 = 2425;

    t22 = ((x141*x142)!=(x143&x144));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x145 = -1;
	uint16_t x146 = 96U;
	int16_t x147 = INT16_MIN;
	volatile int32_t t23 = 3;

    t23 = ((x145*x146)!=(x147&x148));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x149 = 2031413336U;
	uint16_t x150 = UINT16_MAX;
	uint32_t x151 = 11388U;
	int8_t x152 = -1;
	volatile int32_t t24 = -2703991;

    t24 = ((x149*x150)!=(x151&x152));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	static int16_t x156 = INT16_MAX;

    t25 = ((x153*x154)!=(x155&x156));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x157 = INT8_MIN;
	static volatile int64_t x160 = 2001975830761LL;

    t26 = ((x157*x158)!=(x159&x160));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x162 = 4;
	int32_t t27 = 453564;

    t27 = ((x161*x162)!=(x163&x164));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x165 = 41LLU;
	uint32_t x166 = 10536U;
	int64_t x167 = -1LL;
	static uint32_t x168 = 27U;
	volatile int32_t t28 = 1;

    t28 = ((x165*x166)!=(x167&x168));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x170 = 9385LLU;
	uint64_t x172 = 14LLU;

    t29 = ((x169*x170)!=(x171&x172));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x173 = UINT16_MAX;
	int16_t x174 = INT16_MIN;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t30 = -2189;

    t30 = ((x173*x174)!=(x175&x176));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x177 = -48;
	int32_t x178 = -1;
	static int32_t t31 = -3;

    t31 = ((x177*x178)!=(x179&x180));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x184 = INT32_MIN;

    t32 = ((x181*x182)!=(x183&x184));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x185 = 8474633LLU;
	int8_t x187 = -5;
	static uint16_t x188 = 927U;
	volatile int32_t t33 = 12843077;

    t33 = ((x185*x186)!=(x187&x188));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x190 = INT16_MIN;
	static uint64_t x191 = UINT64_MAX;
	volatile uint32_t x192 = UINT32_MAX;

    t34 = ((x189*x190)!=(x191&x192));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x197 = 26U;
	int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t35 = -1055;

    t35 = ((x197*x198)!=(x199&x200));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x201 = 3301597U;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	int32_t t36 = -43;

    t36 = ((x201*x202)!=(x203&x204));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x209 = 8U;
	uint8_t x211 = UINT8_MAX;
	volatile int16_t x212 = -1;
	volatile int32_t t37 = -133594829;

    t37 = ((x209*x210)!=(x211&x212));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x218 = 0;
	int16_t x219 = INT16_MAX;
	int64_t x220 = 792LL;
	int32_t t38 = 1043;

    t38 = ((x217*x218)!=(x219&x220));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x225 = 997U;
	static volatile int8_t x226 = INT8_MAX;
	int32_t x228 = -1;

    t39 = ((x225*x226)!=(x227&x228));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x229 = 1U;
	int64_t x230 = -111LL;
	static int8_t x231 = INT8_MIN;
	static volatile int32_t t40 = 1;

    t40 = ((x229*x230)!=(x231&x232));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x237 = 27868LLU;
	uint8_t x238 = UINT8_MAX;
	static int64_t x239 = 2451271921769LL;
	static volatile int32_t t41 = 6245;

    t41 = ((x237*x238)!=(x239&x240));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x242 = 1161U;
	volatile uint8_t x243 = 1U;
	int64_t x244 = INT64_MIN;
	volatile int32_t t42 = -11;

    t42 = ((x241*x242)!=(x243&x244));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x245 = 1LLU;
	int32_t x246 = INT32_MAX;
	int64_t x247 = INT64_MIN;
	volatile int16_t x248 = 1;
	int32_t t43 = 52537185;

    t43 = ((x245*x246)!=(x247&x248));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x249 = INT8_MIN;
	volatile int32_t x250 = -1;
	uint8_t x251 = 57U;
	uint16_t x252 = 2803U;
	int32_t t44 = 58847;

    t44 = ((x249*x250)!=(x251&x252));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x253 = -1;
	volatile int32_t x255 = -1;
	volatile int32_t x256 = -1;
	int32_t t45 = -944;

    t45 = ((x253*x254)!=(x255&x256));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x259 = 3373U;
	volatile uint8_t x260 = 0U;
	static volatile int32_t t46 = 778969914;

    t46 = ((x257*x258)!=(x259&x260));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x261 = 188399LLU;
	uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 873513853618LLU;
	static int32_t t47 = 1028362;

    t47 = ((x261*x262)!=(x263&x264));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x265 = -1;
	static uint64_t x266 = 39LLU;
	int64_t x267 = 224511322079LL;

    t48 = ((x265*x266)!=(x267&x268));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x269 = INT8_MAX;
	volatile int32_t x270 = -1;
	int32_t x271 = 116;
	static uint64_t x272 = UINT64_MAX;
	volatile int32_t t49 = -27617;

    t49 = ((x269*x270)!=(x271&x272));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x278 = 1;
	int8_t x279 = INT8_MIN;
	static uint16_t x280 = 757U;
	int32_t t50 = 45523035;

    t50 = ((x277*x278)!=(x279&x280));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x281 = -1;
	int8_t x282 = INT8_MIN;
	static int32_t x283 = -1;
	int16_t x284 = INT16_MAX;

    t51 = ((x281*x282)!=(x283&x284));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x285 = 6U;
	uint64_t x286 = 59919139977989LLU;
	int16_t x287 = -1;
	uint64_t x288 = 2924006762LLU;
	volatile int32_t t52 = 30;

    t52 = ((x285*x286)!=(x287&x288));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint16_t x293 = 16371U;
	int8_t x294 = INT8_MIN;
	static int8_t x295 = -1;
	static uint16_t x296 = 1031U;
	int32_t t53 = 268282166;

    t53 = ((x293*x294)!=(x295&x296));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x297 = 0;
	static volatile int8_t x299 = INT8_MAX;
	int8_t x300 = INT8_MAX;
	int32_t t54 = 351;

    t54 = ((x297*x298)!=(x299&x300));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x305 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	volatile int32_t t55 = 178;

    t55 = ((x305*x306)!=(x307&x308));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x315 = -1;
	static volatile int8_t x316 = INT8_MIN;
	volatile int32_t t56 = 166092835;

    t56 = ((x313*x314)!=(x315&x316));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x325 = INT32_MIN;
	uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 5939801210852907876LLU;
	int32_t t57 = 140806391;

    t57 = ((x325*x326)!=(x327&x328));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x329 = 21878;
	static int8_t x331 = -5;
	uint32_t x332 = UINT32_MAX;

    t58 = ((x329*x330)!=(x331&x332));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x333 = UINT16_MAX;
	int8_t x334 = 1;
	int64_t x336 = INT64_MAX;

    t59 = ((x333*x334)!=(x335&x336));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x337 = 2U;
	volatile int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MAX;
	int8_t x340 = 0;

    t60 = ((x337*x338)!=(x339&x340));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x341 = 36874476137276LLU;
	int64_t x342 = INT64_MIN;
	static uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 9U;
	int32_t t61 = 85533604;

    t61 = ((x341*x342)!=(x343&x344));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x345 = 2277;
	static uint8_t x347 = 2U;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t62 = -62840176;

    t62 = ((x345*x346)!=(x347&x348));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x349 = 0;
	uint16_t x350 = UINT16_MAX;
	static int16_t x352 = INT16_MAX;
	static volatile int32_t t63 = 20205;

    t63 = ((x349*x350)!=(x351&x352));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x359 = INT64_MAX;
	uint16_t x360 = UINT16_MAX;
	static int32_t t64 = -23;

    t64 = ((x357*x358)!=(x359&x360));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x361 = INT32_MIN;
	uint16_t x362 = 1U;
	int16_t x363 = 44;
	int8_t x364 = INT8_MIN;
	int32_t t65 = 0;

    t65 = ((x361*x362)!=(x363&x364));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x365 = 10;
	uint8_t x368 = 1U;

    t66 = ((x365*x366)!=(x367&x368));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x369 = 44U;
	static int8_t x371 = INT8_MIN;
	volatile uint32_t x372 = UINT32_MAX;
	volatile int32_t t67 = 423;

    t67 = ((x369*x370)!=(x371&x372));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x373 = -1;
	static int32_t x374 = 1;
	uint8_t x375 = 1U;
	int64_t x376 = -1LL;

    t68 = ((x373*x374)!=(x375&x376));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x377 = 1583LLU;
	uint32_t x378 = 913811580U;
	int32_t t69 = 1693563;

    t69 = ((x377*x378)!=(x379&x380));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x381 = 47LLU;
	static uint8_t x383 = UINT8_MAX;
	static volatile int32_t x384 = -694;
	volatile int32_t t70 = -109423;

    t70 = ((x381*x382)!=(x383&x384));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x385 = 0U;
	uint32_t x386 = 8U;
	uint8_t x387 = 57U;
	int16_t x388 = INT16_MAX;

    t71 = ((x385*x386)!=(x387&x388));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t t72 = -492483;

    t72 = ((x389*x390)!=(x391&x392));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x395 = 7631167U;
	static uint64_t x396 = 11769LLU;
	volatile int32_t t73 = 120;

    t73 = ((x393*x394)!=(x395&x396));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x405 = -1;
	uint16_t x406 = 699U;
	int32_t x408 = -1;
	volatile int32_t t74 = -41130;

    t74 = ((x405*x406)!=(x407&x408));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x413 = -6270;
	int8_t x415 = -1;
	int64_t x416 = INT64_MIN;
	volatile int32_t t75 = 111;

    t75 = ((x413*x414)!=(x415&x416));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x422 = 79LLU;
	volatile uint16_t x423 = UINT16_MAX;
	volatile int32_t t76 = -408;

    t76 = ((x421*x422)!=(x423&x424));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x429 = 0;
	volatile int16_t x430 = INT16_MIN;
	uint16_t x431 = UINT16_MAX;
	int16_t x432 = 91;

    t77 = ((x429*x430)!=(x431&x432));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x435 = INT32_MAX;
	int8_t x436 = -34;
	volatile int32_t t78 = -110024539;

    t78 = ((x433*x434)!=(x435&x436));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x437 = -1LL;
	uint16_t x440 = 29U;
	int32_t t79 = -509710;

    t79 = ((x437*x438)!=(x439&x440));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x441 = INT16_MAX;
	int16_t x442 = 760;
	int8_t x443 = -1;
	uint32_t x444 = 1U;
	volatile int32_t t80 = 326865;

    t80 = ((x441*x442)!=(x443&x444));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x445 = 7126U;
	uint64_t x447 = 1597014LLU;
	uint8_t x448 = 53U;

    t81 = ((x445*x446)!=(x447&x448));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x449 = 1011055LLU;
	int32_t x451 = -1;
	int8_t x452 = INT8_MIN;
	int32_t t82 = 14687992;

    t82 = ((x449*x450)!=(x451&x452));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x453 = INT8_MAX;
	volatile int64_t x455 = 23480LL;
	uint8_t x456 = 26U;
	volatile int32_t t83 = 236863862;

    t83 = ((x453*x454)!=(x455&x456));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x458 = UINT8_MAX;
	int16_t x459 = INT16_MAX;
	int8_t x460 = INT8_MIN;
	volatile int32_t t84 = 666;

    t84 = ((x457*x458)!=(x459&x460));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x461 = INT16_MAX;
	int8_t x462 = -2;
	int64_t x463 = INT64_MIN;
	volatile int32_t t85 = 5;

    t85 = ((x461*x462)!=(x463&x464));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x465 = INT8_MAX;
	volatile uint8_t x467 = 18U;
	int64_t x468 = INT64_MAX;
	int32_t t86 = 125;

    t86 = ((x465*x466)!=(x467&x468));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x471 = INT64_MAX;
	int32_t t87 = 52527;

    t87 = ((x469*x470)!=(x471&x472));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x473 = INT32_MAX;
	uint32_t x474 = UINT32_MAX;
	int16_t x476 = -1;

    t88 = ((x473*x474)!=(x475&x476));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x485 = 4U;
	static int16_t x486 = INT16_MIN;
	int32_t x487 = INT32_MAX;
	int32_t t89 = 1804;

    t89 = ((x485*x486)!=(x487&x488));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x489 = INT16_MAX;
	int32_t x491 = INT32_MIN;
	uint32_t x492 = UINT32_MAX;
	int32_t t90 = -202213203;

    t90 = ((x489*x490)!=(x491&x492));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x497 = -1LL;
	int8_t x498 = 13;
	volatile uint16_t x499 = UINT16_MAX;
	int8_t x500 = INT8_MIN;

    t91 = ((x497*x498)!=(x499&x500));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x501 = 2555U;
	volatile int16_t x502 = -1;
	static int8_t x503 = -48;
	int32_t t92 = 3728162;

    t92 = ((x501*x502)!=(x503&x504));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x510 = INT16_MIN;
	int8_t x511 = -1;
	int64_t x512 = 33344641085LL;

    t93 = ((x509*x510)!=(x511&x512));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x513 = 1029726862LLU;
	uint8_t x515 = 2U;
	int64_t x516 = -1LL;
	static volatile int32_t t94 = 15587718;

    t94 = ((x513*x514)!=(x515&x516));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x525 = 14331321U;
	volatile uint16_t x526 = 4927U;
	uint8_t x527 = UINT8_MAX;
	static uint32_t x528 = 193805U;

    t95 = ((x525*x526)!=(x527&x528));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x529 = 1193125U;
	static volatile int32_t x530 = -42;
	int32_t x531 = INT32_MIN;
	static int32_t x532 = -1;
	static volatile int32_t t96 = 118980;

    t96 = ((x529*x530)!=(x531&x532));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x541 = 29;
	uint32_t x542 = 9518U;
	static uint8_t x543 = UINT8_MAX;
	int8_t x544 = INT8_MIN;
	int32_t t97 = 705623;

    t97 = ((x541*x542)!=(x543&x544));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x545 = 26U;
	int16_t x546 = -1;
	int64_t x548 = -991664094046LL;
	static int32_t t98 = -120982126;

    t98 = ((x545*x546)!=(x547&x548));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x549 = UINT16_MAX;
	volatile uint64_t x550 = 5399630534353LLU;
	int64_t x551 = 0LL;
	int32_t x552 = 1;
	static int32_t t99 = -731;

    t99 = ((x549*x550)!=(x551&x552));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x553 = -282;
	volatile int8_t x555 = -1;
	volatile int32_t x556 = 6415;

    t100 = ((x553*x554)!=(x555&x556));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x557 = -1;
	volatile uint32_t x558 = 1327035445U;
	int8_t x560 = INT8_MIN;
	int32_t t101 = 18400452;

    t101 = ((x557*x558)!=(x559&x560));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x561 = INT8_MAX;
	uint8_t x562 = 2U;
	uint8_t x563 = 19U;
	uint16_t x564 = 2678U;
	static volatile int32_t t102 = 46155099;

    t102 = ((x561*x562)!=(x563&x564));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x569 = -2;
	int64_t x571 = INT64_MAX;
	uint8_t x572 = 7U;

    t103 = ((x569*x570)!=(x571&x572));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x573 = 23511U;
	volatile uint16_t x574 = UINT16_MAX;
	int8_t x575 = -1;
	int64_t x576 = INT64_MAX;
	int32_t t104 = -84103010;

    t104 = ((x573*x574)!=(x575&x576));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x577 = INT32_MIN;
	int64_t x578 = 712506LL;
	uint16_t x579 = 4U;
	static int32_t t105 = -3171662;

    t105 = ((x577*x578)!=(x579&x580));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x581 = UINT32_MAX;
	static int32_t x582 = INT32_MIN;
	int8_t x583 = INT8_MIN;
	static uint32_t x584 = 64U;
	int32_t t106 = -501;

    t106 = ((x581*x582)!=(x583&x584));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x585 = INT32_MAX;
	uint64_t x586 = UINT64_MAX;
	uint16_t x587 = 10607U;
	uint32_t x588 = 0U;
	int32_t t107 = -90;

    t107 = ((x585*x586)!=(x587&x588));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	int16_t x590 = INT16_MAX;
	volatile int32_t x591 = 243709;
	static uint8_t x592 = 1U;
	volatile int32_t t108 = -63;

    t108 = ((x589*x590)!=(x591&x592));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x594 = -1;
	static int16_t x596 = INT16_MIN;
	volatile int32_t t109 = 571;

    t109 = ((x593*x594)!=(x595&x596));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint32_t x598 = UINT32_MAX;
	volatile int16_t x599 = INT16_MAX;

    t110 = ((x597*x598)!=(x599&x600));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x605 = 1LLU;
	volatile int64_t x606 = -7LL;
	int32_t x607 = -1;
	int8_t x608 = -1;
	int32_t t111 = 30;

    t111 = ((x605*x606)!=(x607&x608));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x614 = 1U;
	static int16_t x615 = INT16_MIN;

    t112 = ((x613*x614)!=(x615&x616));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x617 = -1;
	int16_t x618 = 2171;
	uint32_t x619 = 85U;
	int8_t x620 = -1;

    t113 = ((x617*x618)!=(x619&x620));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x621 = 62;
	int16_t x622 = 1;
	uint8_t x624 = UINT8_MAX;

    t114 = ((x621*x622)!=(x623&x624));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x634 = 170107LLU;
	int16_t x636 = INT16_MIN;
	volatile int32_t t115 = 246368420;

    t115 = ((x633*x634)!=(x635&x636));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x640 = 5U;
	volatile int32_t t116 = -14985;

    t116 = ((x637*x638)!=(x639&x640));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x645 = -1;
	int32_t x646 = -14;

    t117 = ((x645*x646)!=(x647&x648));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x650 = UINT16_MAX;
	volatile int16_t x651 = -38;
	volatile int32_t x652 = -1;
	int32_t t118 = -9714;

    t118 = ((x649*x650)!=(x651&x652));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x653 = 1;
	int8_t x654 = -1;
	int32_t x655 = INT32_MAX;
	uint32_t x656 = 1542337U;
	volatile int32_t t119 = 5;

    t119 = ((x653*x654)!=(x655&x656));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x657 = 0;
	volatile int8_t x659 = -2;
	volatile int32_t t120 = 56;

    t120 = ((x657*x658)!=(x659&x660));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x665 = -1LL;
	volatile int16_t x666 = INT16_MAX;
	volatile int16_t x668 = 20;
	volatile int32_t t121 = -32;

    t121 = ((x665*x666)!=(x667&x668));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x669 = INT16_MIN;
	uint8_t x670 = 127U;
	volatile int16_t x671 = -1;
	volatile uint32_t x672 = UINT32_MAX;
	volatile int32_t t122 = -29;

    t122 = ((x669*x670)!=(x671&x672));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x673 = UINT64_MAX;
	int32_t x674 = INT32_MIN;
	uint32_t x676 = 198165U;
	int32_t t123 = 218;

    t123 = ((x673*x674)!=(x675&x676));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x677 = UINT8_MAX;
	uint32_t x678 = 133441464U;
	int32_t x680 = INT32_MAX;

    t124 = ((x677*x678)!=(x679&x680));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x681 = 57U;
	int32_t x682 = -1;
	volatile uint32_t x683 = UINT32_MAX;
	uint32_t x684 = 3U;
	int32_t t125 = -538341;

    t125 = ((x681*x682)!=(x683&x684));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x685 = INT32_MAX;
	int32_t x686 = 0;
	static int64_t x687 = 3337968367942LL;
	volatile uint16_t x688 = 25585U;
	volatile int32_t t126 = -12;

    t126 = ((x685*x686)!=(x687&x688));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x689 = -441694;
	int8_t x692 = INT8_MIN;
	int32_t t127 = 1;

    t127 = ((x689*x690)!=(x691&x692));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x693 = UINT32_MAX;
	uint16_t x694 = 405U;
	int8_t x695 = INT8_MAX;
	int64_t x696 = INT64_MIN;
	static volatile int32_t t128 = 55090193;

    t128 = ((x693*x694)!=(x695&x696));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x697 = -1487034797595965LL;
	int64_t x698 = -1LL;
	volatile int8_t x699 = INT8_MIN;
	volatile int32_t t129 = 119;

    t129 = ((x697*x698)!=(x699&x700));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x709 = 249683631;
	static volatile int32_t x711 = -1;
	int64_t x712 = -67871258038977LL;
	volatile int32_t t130 = 6919011;

    t130 = ((x709*x710)!=(x711&x712));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x713 = -9;
	static int16_t x714 = -263;
	static int64_t x715 = INT64_MIN;
	int32_t x716 = INT32_MAX;
	static volatile int32_t t131 = -222;

    t131 = ((x713*x714)!=(x715&x716));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x717 = -1LL;
	int32_t x719 = INT32_MIN;
	volatile uint64_t x720 = 16266503LLU;
	int32_t t132 = -80185;

    t132 = ((x717*x718)!=(x719&x720));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x721 = 5773362952709LLU;
	volatile int16_t x722 = -1;
	uint64_t x724 = 51898588212985249LLU;

    t133 = ((x721*x722)!=(x723&x724));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x725 = 30U;
	volatile uint16_t x726 = UINT16_MAX;
	int8_t x727 = 30;
	volatile int16_t x728 = INT16_MIN;
	volatile int32_t t134 = 2;

    t134 = ((x725*x726)!=(x727&x728));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x729 = 1010040096182416LLU;
	uint32_t x730 = UINT32_MAX;
	int16_t x732 = 66;
	int32_t t135 = -28587954;

    t135 = ((x729*x730)!=(x731&x732));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x735 = 20;
	int8_t x736 = INT8_MIN;

    t136 = ((x733*x734)!=(x735&x736));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x737 = 1;
	int64_t x738 = 172272LL;
	volatile uint32_t x739 = UINT32_MAX;
	static int8_t x740 = -1;
	volatile int32_t t137 = -1863;

    t137 = ((x737*x738)!=(x739&x740));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x745 = 0U;
	static volatile int64_t x746 = 2113LL;
	int16_t x748 = 6062;
	volatile int32_t t138 = 9267504;

    t138 = ((x745*x746)!=(x747&x748));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x749 = UINT8_MAX;
	volatile int16_t x750 = INT16_MAX;
	uint16_t x751 = 7U;
	volatile int32_t t139 = 33;

    t139 = ((x749*x750)!=(x751&x752));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x753 = 3LLU;
	int16_t x754 = INT16_MIN;
	volatile uint8_t x755 = UINT8_MAX;
	volatile int32_t t140 = -8128;

    t140 = ((x753*x754)!=(x755&x756));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x758 = 54749410753LLU;
	int16_t x760 = INT16_MIN;
	volatile int32_t t141 = -13984141;

    t141 = ((x757*x758)!=(x759&x760));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x765 = UINT16_MAX;
	static int64_t x766 = -1LL;
	uint32_t x767 = UINT32_MAX;
	static uint64_t x768 = 1944459LLU;
	volatile int32_t t142 = 321457482;

    t142 = ((x765*x766)!=(x767&x768));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x774 = INT64_MAX;
	volatile int16_t x775 = INT16_MIN;
	volatile int16_t x776 = INT16_MIN;
	volatile int32_t t143 = 0;

    t143 = ((x773*x774)!=(x775&x776));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x781 = INT8_MIN;
	int64_t x782 = 441276237798106LL;
	uint8_t x783 = 27U;
	static int32_t t144 = -114928;

    t144 = ((x781*x782)!=(x783&x784));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x785 = INT16_MAX;
	int8_t x786 = INT8_MIN;
	int32_t t145 = 0;

    t145 = ((x785*x786)!=(x787&x788));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x793 = INT8_MIN;
	volatile uint8_t x794 = UINT8_MAX;
	volatile int64_t x795 = INT64_MAX;
	volatile int32_t t146 = 23820631;

    t146 = ((x793*x794)!=(x795&x796));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x805 = UINT32_MAX;
	volatile uint16_t x806 = 216U;
	uint64_t x808 = 605930LLU;

    t147 = ((x805*x806)!=(x807&x808));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x817 = 409U;
	int64_t x818 = -1LL;
	static uint32_t x819 = 18U;
	static int8_t x820 = INT8_MIN;

    t148 = ((x817*x818)!=(x819&x820));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x822 = 76U;
	int8_t x823 = INT8_MIN;
	static int32_t t149 = -572237;

    t149 = ((x821*x822)!=(x823&x824));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x825 = -27027933579LL;
	uint16_t x826 = UINT16_MAX;
	volatile int32_t x827 = INT32_MIN;
	volatile int32_t t150 = -4336480;

    t150 = ((x825*x826)!=(x827&x828));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x829 = INT64_MAX;
	uint64_t x830 = UINT64_MAX;
	int8_t x831 = INT8_MIN;
	int16_t x832 = INT16_MAX;
	int32_t t151 = 0;

    t151 = ((x829*x830)!=(x831&x832));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x833 = 87417931LLU;
	uint32_t x834 = 319U;
	volatile int32_t t152 = 7;

    t152 = ((x833*x834)!=(x835&x836));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x837 = 0U;
	int32_t x838 = INT32_MAX;
	int32_t t153 = 16107530;

    t153 = ((x837*x838)!=(x839&x840));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x842 = 3590U;
	volatile uint16_t x843 = UINT16_MAX;
	int8_t x844 = 1;
	static int32_t t154 = -1466;

    t154 = ((x841*x842)!=(x843&x844));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x845 = INT8_MIN;
	int16_t x847 = 3274;
	int16_t x848 = INT16_MIN;
	int32_t t155 = 0;

    t155 = ((x845*x846)!=(x847&x848));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x849 = -1LL;
	int8_t x850 = -17;
	uint32_t x851 = UINT32_MAX;
	int32_t x852 = -2177;
	int32_t t156 = 13361904;

    t156 = ((x849*x850)!=(x851&x852));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x854 = 26356LL;
	uint16_t x855 = 89U;
	int32_t t157 = -24352709;

    t157 = ((x853*x854)!=(x855&x856));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x857 = UINT64_MAX;
	int32_t x858 = INT32_MAX;
	int32_t x859 = -3633933;
	int64_t x860 = INT64_MIN;

    t158 = ((x857*x858)!=(x859&x860));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x861 = -1;
	static int8_t x862 = -1;
	uint16_t x863 = 14276U;
	uint8_t x864 = 1U;
	static int32_t t159 = -20277;

    t159 = ((x861*x862)!=(x863&x864));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x869 = 5;
	int8_t x872 = INT8_MIN;

    t160 = ((x869*x870)!=(x871&x872));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x873 = UINT8_MAX;
	int8_t x874 = INT8_MIN;
	static uint8_t x875 = UINT8_MAX;
	volatile int32_t t161 = -119806890;

    t161 = ((x873*x874)!=(x875&x876));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x878 = -6;
	int64_t x880 = INT64_MAX;
	volatile int32_t t162 = -41947;

    t162 = ((x877*x878)!=(x879&x880));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x889 = UINT8_MAX;
	uint16_t x890 = 16U;
	uint16_t x891 = 8U;
	int32_t t163 = -3706;

    t163 = ((x889*x890)!=(x891&x892));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x901 = 12U;
	volatile int16_t x902 = INT16_MAX;
	volatile int32_t t164 = -227;

    t164 = ((x901*x902)!=(x903&x904));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x905 = UINT32_MAX;
	int32_t x907 = INT32_MIN;
	static uint64_t x908 = 303673490339LLU;
	static volatile int32_t t165 = -113238;

    t165 = ((x905*x906)!=(x907&x908));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x909 = 62;
	volatile uint16_t x910 = 2U;
	int64_t x911 = 294381156432LL;
	static volatile int16_t x912 = INT16_MIN;
	volatile int32_t t166 = -963;

    t166 = ((x909*x910)!=(x911&x912));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x913 = 1097;
	static volatile int8_t x914 = INT8_MIN;
	int8_t x915 = -3;
	int32_t x916 = 0;
	volatile int32_t t167 = 73;

    t167 = ((x913*x914)!=(x915&x916));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x917 = 256U;
	static uint32_t x918 = UINT32_MAX;
	int64_t x919 = INT64_MIN;
	int64_t x920 = INT64_MIN;
	volatile int32_t t168 = 1;

    t168 = ((x917*x918)!=(x919&x920));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x926 = INT16_MIN;
	static volatile uint32_t x927 = 54291U;
	int8_t x928 = INT8_MIN;

    t169 = ((x925*x926)!=(x927&x928));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x929 = 714689319975084LLU;
	int16_t x930 = INT16_MAX;
	uint16_t x931 = 17U;
	int64_t x932 = -432320572318LL;

    t170 = ((x929*x930)!=(x931&x932));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x936 = INT64_MAX;
	static int32_t t171 = 10886186;

    t171 = ((x933*x934)!=(x935&x936));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x937 = UINT32_MAX;
	uint64_t x938 = 13294445982720386LLU;
	volatile int8_t x939 = 3;
	volatile uint64_t x940 = 509737550LLU;
	volatile int32_t t172 = -16840;

    t172 = ((x937*x938)!=(x939&x940));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x941 = -154LL;
	int16_t x942 = INT16_MAX;
	int8_t x943 = INT8_MIN;
	static int64_t x944 = INT64_MIN;

    t173 = ((x941*x942)!=(x943&x944));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x949 = -1;
	uint16_t x950 = 1860U;
	static int64_t x951 = INT64_MAX;
	static volatile uint64_t x952 = 562848182209LLU;
	volatile int32_t t174 = -951473;

    t174 = ((x949*x950)!=(x951&x952));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x953 = 8041U;
	static uint8_t x954 = 7U;
	int32_t x955 = -1;
	volatile int32_t x956 = -801845408;

    t175 = ((x953*x954)!=(x955&x956));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x965 = 40U;
	volatile uint16_t x966 = UINT16_MAX;
	static int8_t x967 = INT8_MIN;
	uint16_t x968 = UINT16_MAX;
	volatile int32_t t176 = 913566;

    t176 = ((x965*x966)!=(x967&x968));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x969 = 0U;
	int16_t x970 = INT16_MIN;
	volatile uint8_t x971 = 0U;
	volatile int32_t t177 = -22994896;

    t177 = ((x969*x970)!=(x971&x972));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x973 = INT8_MIN;
	static int8_t x974 = INT8_MIN;
	uint32_t x975 = 15U;
	volatile int32_t t178 = -3483535;

    t178 = ((x973*x974)!=(x975&x976));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x981 = INT64_MIN;
	int32_t x982 = 1;
	volatile int16_t x983 = -6858;

    t179 = ((x981*x982)!=(x983&x984));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x989 = INT32_MAX;
	int16_t x991 = 6;
	uint32_t x992 = 24849396U;

    t180 = ((x989*x990)!=(x991&x992));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x994 = -2LL;
	int8_t x995 = INT8_MIN;
	int8_t x996 = INT8_MIN;
	volatile int32_t t181 = -13273592;

    t181 = ((x993*x994)!=(x995&x996));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x997 = 1850345851LLU;
	uint16_t x998 = UINT16_MAX;
	uint16_t x999 = 1777U;
	static int16_t x1000 = INT16_MAX;
	static volatile int32_t t182 = -65651228;

    t182 = ((x997*x998)!=(x999&x1000));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint32_t x1005 = 429431679U;
	int8_t x1007 = -1;
	uint8_t x1008 = 0U;
	int32_t t183 = -1;

    t183 = ((x1005*x1006)!=(x1007&x1008));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x1009 = INT8_MIN;
	static int8_t x1010 = -1;
	static int32_t x1011 = INT32_MAX;
	int32_t x1012 = -117803938;

    t184 = ((x1009*x1010)!=(x1011&x1012));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1013 = 1291652217518354783LLU;
	static uint8_t x1016 = 0U;
	volatile int32_t t185 = -2502369;

    t185 = ((x1013*x1014)!=(x1015&x1016));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1017 = 922LLU;
	int8_t x1018 = INT8_MIN;
	static volatile uint32_t x1020 = 2369898U;
	volatile int32_t t186 = -26206;

    t186 = ((x1017*x1018)!=(x1019&x1020));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1021 = 4U;
	int8_t x1022 = INT8_MAX;
	static int8_t x1023 = INT8_MIN;
	static int16_t x1024 = INT16_MAX;
	int32_t t187 = 1;

    t187 = ((x1021*x1022)!=(x1023&x1024));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1029 = 10084978594LL;
	int32_t x1030 = -312;
	int16_t x1031 = INT16_MIN;
	static int16_t x1032 = 10;
	volatile int32_t t188 = -4100108;

    t188 = ((x1029*x1030)!=(x1031&x1032));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1034 = INT8_MIN;
	static volatile uint8_t x1035 = UINT8_MAX;
	int8_t x1036 = INT8_MAX;

    t189 = ((x1033*x1034)!=(x1035&x1036));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x1037 = 1;
	int32_t x1038 = INT32_MIN;
	static int32_t x1039 = INT32_MIN;
	int32_t x1040 = INT32_MIN;
	static int32_t t190 = -114737838;

    t190 = ((x1037*x1038)!=(x1039&x1040));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1045 = INT16_MIN;
	volatile uint64_t x1046 = UINT64_MAX;
	int64_t x1048 = INT64_MIN;
	volatile int32_t t191 = 147203;

    t191 = ((x1045*x1046)!=(x1047&x1048));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1050 = -19;
	volatile uint16_t x1052 = 31823U;
	static int32_t t192 = -6248056;

    t192 = ((x1049*x1050)!=(x1051&x1052));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1057 = UINT32_MAX;
	volatile uint8_t x1058 = 98U;
	int32_t x1059 = INT32_MAX;
	uint8_t x1060 = 57U;
	int32_t t193 = 2012610;

    t193 = ((x1057*x1058)!=(x1059&x1060));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1062 = INT64_MIN;
	static volatile int32_t t194 = -36490;

    t194 = ((x1061*x1062)!=(x1063&x1064));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1065 = 12U;
	int64_t x1066 = -1725845LL;
	uint32_t x1067 = UINT32_MAX;
	static int64_t x1068 = -12754021176567LL;
	volatile int32_t t195 = -129934593;

    t195 = ((x1065*x1066)!=(x1067&x1068));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1069 = 59665325857834LLU;
	uint8_t x1070 = 1U;
	volatile uint64_t x1071 = 70091330571827339LLU;
	int8_t x1072 = INT8_MIN;
	int32_t t196 = 84;

    t196 = ((x1069*x1070)!=(x1071&x1072));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1073 = INT8_MIN;
	uint64_t x1074 = 0LLU;
	int32_t x1075 = 1;
	volatile uint32_t x1076 = 64444U;
	volatile int32_t t197 = 4364;

    t197 = ((x1073*x1074)!=(x1075&x1076));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1077 = -103;
	int16_t x1078 = -1;
	static volatile uint32_t x1079 = UINT32_MAX;
	int32_t t198 = -667365196;

    t198 = ((x1077*x1078)!=(x1079&x1080));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1081 = 1001U;
	uint64_t x1082 = UINT64_MAX;

    t199 = ((x1081*x1082)!=(x1083&x1084));

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

