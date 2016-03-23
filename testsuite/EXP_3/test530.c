
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

static volatile uint16_t x3 = 1807U;
uint32_t x4 = UINT32_MAX;
static int32_t x5 = INT32_MIN;
volatile int16_t x10 = 1;
static volatile int32_t t6 = -7512407;
int32_t x36 = INT32_MAX;
int32_t x56 = INT32_MIN;
int8_t x58 = INT8_MIN;
static int32_t t13 = -744;
uint32_t x76 = 0U;
int32_t x82 = INT32_MIN;
static int8_t x93 = INT8_MIN;
int32_t t20 = 185673;
static int64_t x117 = INT64_MIN;
int16_t x120 = INT16_MAX;
int8_t x121 = INT8_MIN;
static volatile int32_t t24 = 17;
int32_t x158 = INT32_MIN;
uint8_t x165 = 10U;
uint16_t x175 = UINT16_MAX;
uint32_t x176 = UINT32_MAX;
static int8_t x180 = -1;
volatile int8_t x182 = -3;
uint16_t x191 = 167U;
int8_t x192 = INT8_MAX;
uint8_t x194 = 1U;
uint8_t x205 = 53U;
uint32_t x208 = 201U;
int64_t x209 = -1LL;
int64_t x212 = -1LL;
int64_t t38 = -9442LL;
volatile int32_t t39 = 1326;
static int16_t x219 = -3;
int8_t x221 = INT8_MIN;
static uint32_t x230 = 1091U;
static volatile int32_t x242 = -1;
int16_t x243 = 3;
int32_t x249 = INT32_MIN;
static int32_t t44 = -1044888;
uint64_t x258 = 3102LLU;
int16_t x261 = -3;
static int8_t x264 = -32;
int8_t x272 = 1;
volatile int8_t x280 = INT8_MAX;
static volatile int32_t t49 = -52;
volatile int64_t t53 = -30192LL;
int32_t t56 = 681944;
uint8_t x322 = UINT8_MAX;
volatile uint32_t x323 = 358U;
int32_t x327 = -1;
int16_t x331 = -1;
volatile uint8_t x333 = 11U;
int8_t x350 = 0;
uint8_t x352 = 0U;
static volatile uint32_t t64 = 464251712U;
volatile int16_t x362 = 1;
uint64_t x363 = UINT64_MAX;
int16_t x372 = INT16_MIN;
int64_t x374 = INT64_MAX;
volatile int32_t t69 = -392735996;
static int64_t x382 = -1LL;
int32_t t70 = 1;
uint16_t x391 = 2861U;
static uint64_t x396 = 428852997LLU;
int16_t x401 = 1;
static int64_t x408 = INT64_MIN;
uint8_t x410 = 0U;
uint8_t x412 = 7U;
uint32_t t77 = 5533U;
static int16_t x430 = INT16_MIN;
volatile uint64_t t78 = 8090226738291884411LLU;
uint8_t x450 = 3U;
int8_t x463 = INT8_MAX;
volatile uint8_t x478 = 1U;
static uint32_t x479 = UINT32_MAX;
uint64_t t88 = 12406LLU;
int32_t x486 = INT32_MAX;
int8_t x491 = INT8_MIN;
static uint64_t x496 = UINT64_MAX;
uint64_t t91 = 986466005389309991LLU;
static int64_t t92 = -112LL;
int64_t x507 = 7039LL;
int32_t x508 = INT32_MIN;
volatile int16_t x514 = INT16_MAX;
int8_t x516 = -1;
int8_t x517 = INT8_MIN;
volatile int32_t t96 = -15337;
int8_t x523 = INT8_MIN;
int8_t x525 = INT8_MAX;
volatile uint32_t x545 = 773291400U;
static int32_t x547 = -1;
int32_t t101 = 250;
int8_t x558 = INT8_MIN;
int64_t x559 = INT64_MAX;
int64_t x565 = INT64_MAX;
int16_t x569 = INT16_MIN;
static int32_t x570 = -1;
int32_t x571 = 14429;
int8_t x581 = 3;
volatile int64_t t106 = 269166519610885077LL;
int32_t x593 = -238;
uint16_t x601 = 7U;
int32_t x602 = -1;
int32_t t109 = 22;
uint8_t x606 = 0U;
volatile int32_t t112 = -868236;
uint64_t x618 = UINT64_MAX;
volatile int32_t t114 = -74611459;
int32_t x637 = INT32_MIN;
volatile int8_t x645 = INT8_MAX;
static uint16_t x649 = 2082U;
int8_t x652 = -1;
uint32_t t121 = 337064984U;
int16_t x672 = INT16_MAX;
uint64_t x675 = 716338069LLU;
int64_t x676 = -1LL;
int16_t x687 = INT16_MAX;
uint16_t x688 = 76U;
int8_t x690 = INT8_MIN;
volatile uint16_t x692 = 982U;
uint64_t x695 = UINT64_MAX;
int16_t x705 = -355;
int64_t x716 = 48LL;
static volatile int64_t x718 = INT64_MIN;
static uint32_t t132 = 89152U;
uint64_t x726 = UINT64_MAX;
int64_t t134 = -1723079997208LL;
static int8_t x735 = INT8_MIN;
int32_t x736 = -1;
static volatile int32_t t135 = 0;
uint64_t x744 = 168137LLU;
uint64_t x745 = 27277208292LLU;
int8_t x750 = -55;
uint16_t x752 = UINT16_MAX;
int64_t x753 = 2075169978LL;
static uint16_t x759 = 9406U;
int64_t x760 = -1LL;
int8_t x769 = -1;
int32_t t146 = -3;
static int16_t x790 = -7529;
static int32_t x798 = -1;
uint32_t x820 = 120517U;
static volatile int32_t x821 = INT32_MAX;
int8_t x826 = INT8_MIN;
int32_t t155 = 5;
uint8_t x830 = 3U;
uint16_t x841 = 23U;
uint16_t x843 = 935U;
static volatile int32_t t157 = -369724;
uint64_t x851 = 14465281LLU;
static uint64_t t159 = 385032LLU;
volatile uint32_t x855 = UINT32_MAX;
uint64_t x868 = UINT64_MAX;
volatile int32_t t163 = 987938856;
int16_t x885 = -966;
uint32_t x886 = UINT32_MAX;
static int32_t x887 = 459960876;
uint32_t x892 = 8805233U;
static uint8_t x894 = 3U;
static int16_t x896 = INT16_MIN;
volatile int32_t t169 = -139829374;
volatile uint64_t x897 = UINT64_MAX;
volatile int8_t x906 = 60;
uint8_t x915 = 0U;
uint8_t x916 = 7U;
int16_t x919 = INT16_MIN;
static volatile int16_t x922 = -832;
volatile int32_t t175 = -95070;
uint64_t x926 = 1166890LLU;
uint64_t x949 = 28LLU;
uint8_t x950 = 10U;
int32_t t180 = 201;
uint8_t x960 = 9U;
static int64_t x981 = -2030734196807634LL;
static int32_t x988 = -25782700;
static volatile uint32_t t187 = 58U;
uint8_t x1022 = 12U;
static int32_t x1025 = 212702;
int16_t x1029 = INT16_MIN;
static int8_t x1031 = INT8_MIN;
static volatile uint32_t x1032 = 104U;
int8_t x1045 = INT8_MIN;
int8_t x1050 = INT8_MIN;
int8_t x1052 = -56;
volatile int64_t x1054 = INT64_MIN;
uint32_t x1055 = UINT32_MAX;
uint8_t x1056 = UINT8_MAX;
static int16_t x1057 = INT16_MAX;
int16_t x1059 = -10503;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	static int64_t x2 = INT64_MIN;
	uint32_t t0 = 870U;

    t0 = ((x1<=x2)&(x3*x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x6 = 41;
	int8_t x7 = -1;
	uint64_t x8 = 722LLU;
	volatile uint64_t t1 = 750305LLU;

    t1 = ((x5<=x6)&(x7*x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 2U;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -362;

    t2 = ((x9<=x10)&(x11*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 2795U;
	uint32_t x18 = 4398007U;
	static int8_t x19 = INT8_MIN;
	uint32_t x20 = 109U;
	volatile uint32_t t3 = 18746172U;

    t3 = ((x17<=x18)&(x19*x20));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -44;
	uint16_t x22 = 843U;
	static volatile int16_t x23 = -1;
	int16_t x24 = -171;
	static int32_t t4 = -42;

    t4 = ((x21<=x22)&(x23*x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -253363LL;
	static int8_t x26 = INT8_MIN;
	int16_t x27 = -15;
	static int8_t x28 = INT8_MIN;
	static int32_t t5 = 31941145;

    t5 = ((x25<=x26)&(x27*x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = -2841;
	int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MAX;
	uint8_t x32 = 3U;

    t6 = ((x29<=x30)&(x31*x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 7029674294070662713LLU;
	uint16_t x34 = UINT16_MAX;
	volatile int32_t x35 = -1;
	volatile int32_t t7 = -85809;

    t7 = ((x33<=x34)&(x35*x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = UINT8_MAX;
	int32_t x38 = -20794;
	int64_t x39 = 133321425381471LL;
	volatile uint16_t x40 = 47U;
	static int64_t t8 = -3446013LL;

    t8 = ((x37<=x38)&(x39*x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = INT32_MAX;
	int8_t x42 = INT8_MAX;
	int16_t x43 = 4501;
	volatile int32_t x44 = -1;
	int32_t t9 = 14697182;

    t9 = ((x41<=x42)&(x43*x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x53 = 9037613489442LLU;
	volatile int64_t x54 = -1LL;
	uint64_t x55 = 0LLU;
	volatile uint64_t t10 = 360950880LLU;

    t10 = ((x53<=x54)&(x55*x56));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	int64_t x59 = -1LL;
	static int8_t x60 = INT8_MAX;
	static int64_t t11 = 129821689LL;

    t11 = ((x57<=x58)&(x59*x60));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x65 = INT32_MIN;
	int8_t x66 = -1;
	static volatile uint8_t x67 = 87U;
	static int32_t x68 = -1535199;
	volatile int32_t t12 = 1;

    t12 = ((x65<=x66)&(x67*x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	volatile int32_t x71 = 242;
	int16_t x72 = -1;

    t13 = ((x69<=x70)&(x71*x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x73 = 16620U;
	int8_t x74 = -2;
	int16_t x75 = -1;
	volatile uint32_t t14 = 1U;

    t14 = ((x73<=x74)&(x75*x76));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x81 = 320;
	int8_t x83 = INT8_MIN;
	static volatile uint32_t x84 = 42U;
	static uint32_t t15 = 1329741433U;

    t15 = ((x81<=x82)&(x83*x84));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = 13430;
	int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MAX;
	static volatile int8_t x88 = -1;
	volatile int64_t t16 = 5223201LL;

    t16 = ((x85<=x86)&(x87*x88));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x89 = UINT8_MAX;
	int16_t x90 = -253;
	int8_t x91 = INT8_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t17 = -2;

    t17 = ((x89<=x90)&(x91*x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x94 = INT64_MIN;
	volatile int64_t x95 = 2633236327318182LL;
	int8_t x96 = INT8_MIN;
	static int64_t t18 = -3850208372533LL;

    t18 = ((x93<=x94)&(x95*x96));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x97 = 133244179LLU;
	static uint32_t x98 = 1322U;
	static int32_t x99 = 23;
	uint64_t x100 = UINT64_MAX;
	uint64_t t19 = 51LLU;

    t19 = ((x97<=x98)&(x99*x100));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x101 = UINT16_MAX;
	static int8_t x102 = INT8_MIN;
	volatile uint16_t x103 = UINT16_MAX;
	int32_t x104 = 22131;

    t20 = ((x101<=x102)&(x103*x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x113 = -191002LL;
	static volatile int32_t x114 = INT32_MIN;
	static volatile uint16_t x115 = 0U;
	int64_t x116 = 6076292260LL;
	int64_t t21 = -1741791605887LL;

    t21 = ((x113<=x114)&(x115*x116));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x118 = 21U;
	int64_t x119 = -1LL;
	static int64_t t22 = -4176LL;

    t22 = ((x117<=x118)&(x119*x120));

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x122 = 379582U;
	static uint16_t x123 = 30U;
	int32_t x124 = -15172;
	volatile int32_t t23 = 121408792;

    t23 = ((x121<=x122)&(x123*x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x129 = 39U;
	static volatile int64_t x130 = 1491326472LL;
	int8_t x131 = INT8_MAX;
	volatile uint8_t x132 = 26U;

    t24 = ((x129<=x130)&(x131*x132));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x133 = -1;
	uint64_t x134 = 0LLU;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 1U;
	int32_t t25 = 1;

    t25 = ((x133<=x134)&(x135*x136));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x145 = -1LL;
	uint16_t x146 = 14U;
	uint8_t x147 = 46U;
	static int32_t x148 = -1;
	volatile int32_t t26 = 4693;

    t26 = ((x145<=x146)&(x147*x148));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x149 = -1823303;
	int32_t x150 = 9415556;
	int64_t x151 = -1LL;
	int8_t x152 = -1;
	volatile int64_t t27 = -115909238LL;

    t27 = ((x149<=x150)&(x151*x152));

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x153 = -1;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = 27452226328396LLU;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t28 = 1887407865975LLU;

    t28 = ((x153<=x154)&(x155*x156));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x157 = INT64_MIN;
	static int8_t x159 = INT8_MAX;
	int16_t x160 = -1203;
	static int32_t t29 = 55;

    t29 = ((x157<=x158)&(x159*x160));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x166 = 725398683449930LL;
	int64_t x167 = -1LL;
	volatile int16_t x168 = INT16_MAX;
	int64_t t30 = -12762362421200LL;

    t30 = ((x165<=x166)&(x167*x168));

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	uint32_t t31 = 51U;

    t31 = ((x173<=x174)&(x175*x176));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x177 = -1;
	int32_t x178 = -6816;
	int64_t x179 = -1LL;
	volatile int64_t t32 = 54464343143190767LL;

    t32 = ((x177<=x178)&(x179*x180));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x181 = 31;
	static uint32_t x183 = 396U;
	static int8_t x184 = INT8_MIN;
	static uint32_t t33 = 3U;

    t33 = ((x181<=x182)&(x183*x184));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x185 = 491079202690246893LL;
	uint64_t x186 = 32728956277LLU;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = 2100398U;
	volatile uint32_t t34 = 160488035U;

    t34 = ((x185<=x186)&(x187*x188));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x189 = 54U;
	int32_t x190 = INT32_MIN;
	static int32_t t35 = 2830185;

    t35 = ((x189<=x190)&(x191*x192));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x193 = INT32_MAX;
	int64_t x195 = -1LL;
	int16_t x196 = 0;
	volatile int64_t t36 = 10188490LL;

    t36 = ((x193<=x194)&(x195*x196));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x206 = INT32_MIN;
	uint8_t x207 = 14U;
	uint32_t t37 = 22U;

    t37 = ((x205<=x206)&(x207*x208));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x210 = 239460264U;
	int16_t x211 = INT16_MIN;

    t38 = ((x209<=x210)&(x211*x212));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x213 = INT8_MIN;
	static uint8_t x214 = UINT8_MAX;
	uint16_t x215 = UINT16_MAX;
	int8_t x216 = -50;

    t39 = ((x213<=x214)&(x215*x216));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x217 = UINT16_MAX;
	uint32_t x218 = 2U;
	uint32_t x220 = 2U;
	static uint32_t t40 = 28358U;

    t40 = ((x217<=x218)&(x219*x220));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x222 = 325732710435LLU;
	uint64_t x223 = 3324094LLU;
	static uint32_t x224 = 24123U;
	volatile uint64_t t41 = 31968936444170LLU;

    t41 = ((x221<=x222)&(x223*x224));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x229 = -1;
	volatile uint64_t x231 = UINT64_MAX;
	int32_t x232 = INT32_MIN;
	uint64_t t42 = 64001445346944LLU;

    t42 = ((x229<=x230)&(x231*x232));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x241 = INT16_MIN;
	volatile int16_t x244 = INT16_MIN;
	int32_t t43 = 14956;

    t43 = ((x241<=x242)&(x243*x244));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x250 = INT8_MAX;
	uint8_t x251 = 0U;
	int16_t x252 = -113;

    t44 = ((x249<=x250)&(x251*x252));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x257 = -5;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 82U;
	volatile int32_t t45 = 104;

    t45 = ((x257<=x258)&(x259*x260));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MIN;
	volatile int32_t t46 = 263261334;

    t46 = ((x261<=x262)&(x263*x264));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x265 = 139;
	static int8_t x266 = 2;
	uint32_t x267 = UINT32_MAX;
	volatile uint16_t x268 = 21U;
	volatile uint32_t t47 = 2071295209U;

    t47 = ((x265<=x266)&(x267*x268));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x269 = 16;
	int32_t x270 = 21308818;
	int32_t x271 = -1;
	volatile int32_t t48 = -1;

    t48 = ((x269<=x270)&(x271*x272));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x277 = INT32_MIN;
	static int16_t x278 = 1;
	int8_t x279 = INT8_MIN;

    t49 = ((x277<=x278)&(x279*x280));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x285 = INT64_MAX;
	volatile int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MAX;
	static int32_t t50 = 13581931;

    t50 = ((x285<=x286)&(x287*x288));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x289 = INT64_MIN;
	uint32_t x290 = 26129480U;
	int16_t x291 = INT16_MAX;
	static int8_t x292 = -1;
	volatile int32_t t51 = 0;

    t51 = ((x289<=x290)&(x291*x292));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x293 = -1LL;
	uint32_t x294 = 21125825U;
	int16_t x295 = -1;
	uint8_t x296 = 22U;
	int32_t t52 = 3140713;

    t52 = ((x293<=x294)&(x295*x296));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x297 = 984967LLU;
	static uint32_t x298 = 1788575U;
	uint8_t x299 = UINT8_MAX;
	static volatile int64_t x300 = -1LL;

    t53 = ((x297<=x298)&(x299*x300));

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x301 = 6U;
	static int16_t x302 = INT16_MAX;
	int32_t x303 = INT32_MIN;
	volatile int16_t x304 = 1;
	static int32_t t54 = 23538642;

    t54 = ((x301<=x302)&(x303*x304));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x305 = INT64_MIN;
	int32_t x306 = -1;
	uint16_t x307 = 254U;
	uint16_t x308 = UINT16_MAX;
	static int32_t t55 = -947747336;

    t55 = ((x305<=x306)&(x307*x308));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x313 = -1LL;
	static uint64_t x314 = 1573520LLU;
	static volatile uint16_t x315 = UINT16_MAX;
	int32_t x316 = 1853;

    t56 = ((x313<=x314)&(x315*x316));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x317 = -1;
	static int32_t x318 = 188887074;
	int8_t x319 = INT8_MIN;
	int64_t x320 = 630LL;
	static volatile int64_t t57 = 56652780520931923LL;

    t57 = ((x317<=x318)&(x319*x320));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x324 = -23;
	uint32_t t58 = 1342U;

    t58 = ((x321<=x322)&(x323*x324));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	volatile int8_t x328 = INT8_MIN;
	static int32_t t59 = -1426984;

    t59 = ((x325<=x326)&(x327*x328));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x329 = -1;
	int8_t x330 = -7;
	int16_t x332 = -1;
	int32_t t60 = -5045418;

    t60 = ((x329<=x330)&(x331*x332));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x334 = 1LL;
	uint8_t x335 = UINT8_MAX;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t61 = 6;

    t61 = ((x333<=x334)&(x335*x336));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x337 = INT64_MIN;
	static uint32_t x338 = 143591029U;
	uint64_t x339 = 17028145032LLU;
	uint32_t x340 = 0U;
	volatile uint64_t t62 = 2000807688LLU;

    t62 = ((x337<=x338)&(x339*x340));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x349 = UINT32_MAX;
	int64_t x351 = INT64_MIN;
	volatile int64_t t63 = 2109847LL;

    t63 = ((x349<=x350)&(x351*x352));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MAX;
	volatile uint32_t x355 = UINT32_MAX;
	volatile int16_t x356 = INT16_MIN;

    t64 = ((x353<=x354)&(x355*x356));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x357 = INT8_MAX;
	uint32_t x358 = 3U;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t65 = 1639LLU;

    t65 = ((x357<=x358)&(x359*x360));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x361 = INT16_MIN;
	uint8_t x364 = UINT8_MAX;
	uint64_t t66 = 233798550LLU;

    t66 = ((x361<=x362)&(x363*x364));

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	uint32_t x371 = 1U;
	volatile uint32_t t67 = 60U;

    t67 = ((x369<=x370)&(x371*x372));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x373 = 18U;
	int8_t x375 = -31;
	uint32_t x376 = UINT32_MAX;
	static uint32_t t68 = 27142316U;

    t68 = ((x373<=x374)&(x375*x376));

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x377 = INT16_MAX;
	uint64_t x378 = 2LLU;
	static volatile int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MIN;

    t69 = ((x377<=x378)&(x379*x380));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x381 = INT64_MIN;
	int16_t x383 = -1;
	static int32_t x384 = -234551;

    t70 = ((x381<=x382)&(x383*x384));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MAX;
	int8_t x392 = 2;
	static int32_t t71 = -50031265;

    t71 = ((x389<=x390)&(x391*x392));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x393 = INT64_MAX;
	static int8_t x394 = INT8_MIN;
	uint16_t x395 = 11791U;
	uint64_t t72 = 1028LLU;

    t72 = ((x393<=x394)&(x395*x396));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x397 = -1LL;
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MAX;
	volatile uint8_t x400 = 43U;
	int32_t t73 = -2282;

    t73 = ((x397<=x398)&(x399*x400));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x402 = INT64_MIN;
	volatile uint32_t x403 = 0U;
	uint32_t x404 = 310075U;
	uint32_t t74 = 4U;

    t74 = ((x401<=x402)&(x403*x404));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x405 = 4385827608LLU;
	volatile int64_t x406 = 71169777337LL;
	uint64_t x407 = 1013LLU;
	volatile uint64_t t75 = 7538714370LLU;

    t75 = ((x405<=x406)&(x407*x408));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x409 = INT32_MAX;
	static int8_t x411 = 0;
	int32_t t76 = 2;

    t76 = ((x409<=x410)&(x411*x412));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x421 = INT8_MAX;
	static int8_t x422 = 44;
	uint32_t x423 = 85508185U;
	uint32_t x424 = 31347908U;

    t77 = ((x421<=x422)&(x423*x424));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x429 = UINT16_MAX;
	static uint64_t x431 = 1523LLU;
	int32_t x432 = INT32_MIN;

    t78 = ((x429<=x430)&(x431*x432));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x437 = INT8_MIN;
	int16_t x438 = -1;
	int8_t x439 = INT8_MIN;
	uint32_t x440 = 242U;
	static volatile uint32_t t79 = 2U;

    t79 = ((x437<=x438)&(x439*x440));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x441 = -2090795160333920LL;
	uint8_t x442 = 23U;
	int8_t x443 = INT8_MIN;
	static volatile int8_t x444 = INT8_MIN;
	int32_t t80 = 5595;

    t80 = ((x441<=x442)&(x443*x444));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x445 = INT16_MIN;
	volatile int16_t x446 = INT16_MAX;
	int16_t x447 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;
	int32_t t81 = 225;

    t81 = ((x445<=x446)&(x447*x448));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x449 = INT64_MAX;
	static volatile uint8_t x451 = 0U;
	static int8_t x452 = INT8_MAX;
	int32_t t82 = 1;

    t82 = ((x449<=x450)&(x451*x452));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x457 = 1LL;
	int64_t x458 = INT64_MIN;
	volatile uint32_t x459 = 97847997U;
	int64_t x460 = -317536LL;
	static volatile int64_t t83 = -2645150LL;

    t83 = ((x457<=x458)&(x459*x460));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x461 = 0U;
	int16_t x462 = -2690;
	volatile int16_t x464 = -1;
	int32_t t84 = 1429842;

    t84 = ((x461<=x462)&(x463*x464));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x465 = 7661529U;
	int16_t x466 = 300;
	static volatile int16_t x467 = INT16_MAX;
	static int16_t x468 = 1496;
	int32_t t85 = -111569;

    t85 = ((x465<=x466)&(x467*x468));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x469 = UINT16_MAX;
	volatile int64_t x470 = 31LL;
	int16_t x471 = INT16_MIN;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t86 = 530910;

    t86 = ((x469<=x470)&(x471*x472));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	int8_t x474 = -1;
	int32_t x475 = INT32_MIN;
	uint32_t x476 = 7649U;
	uint32_t t87 = 3386302U;

    t87 = ((x473<=x474)&(x475*x476));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x477 = -28;
	uint64_t x480 = 1665055183760LLU;

    t88 = ((x477<=x478)&(x479*x480));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x485 = INT8_MIN;
	uint64_t x487 = 1698918143791593298LLU;
	static int16_t x488 = INT16_MAX;
	volatile uint64_t t89 = 21452491LLU;

    t89 = ((x485<=x486)&(x487*x488));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x489 = INT8_MAX;
	int8_t x490 = INT8_MIN;
	int64_t x492 = 13907LL;
	static volatile int64_t t90 = 5LL;

    t90 = ((x489<=x490)&(x491*x492));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x493 = UINT32_MAX;
	int16_t x494 = 183;
	int16_t x495 = INT16_MIN;

    t91 = ((x493<=x494)&(x495*x496));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x497 = 168049007U;
	volatile int8_t x498 = -56;
	volatile int64_t x499 = -1LL;
	volatile int8_t x500 = INT8_MIN;

    t92 = ((x497<=x498)&(x499*x500));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x505 = INT8_MAX;
	int8_t x506 = INT8_MIN;
	int64_t t93 = 11759LL;

    t93 = ((x505<=x506)&(x507*x508));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x509 = INT64_MIN;
	int32_t x510 = INT32_MIN;
	uint64_t x511 = 6535684929LLU;
	uint64_t x512 = UINT64_MAX;
	uint64_t t94 = 9699763650294447LLU;

    t94 = ((x509<=x510)&(x511*x512));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x513 = INT8_MIN;
	int32_t x515 = 409610613;
	volatile int32_t t95 = 26938;

    t95 = ((x513<=x514)&(x515*x516));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x518 = UINT16_MAX;
	uint8_t x519 = UINT8_MAX;
	int16_t x520 = INT16_MAX;

    t96 = ((x517<=x518)&(x519*x520));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x521 = 14097U;
	int32_t x522 = INT32_MAX;
	uint16_t x524 = UINT16_MAX;
	int32_t t97 = -500291360;

    t97 = ((x521<=x522)&(x523*x524));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x526 = -1LL;
	static int8_t x527 = INT8_MIN;
	static volatile int32_t x528 = -1;
	int32_t t98 = -3696923;

    t98 = ((x525<=x526)&(x527*x528));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x533 = INT8_MAX;
	int16_t x534 = INT16_MIN;
	volatile uint64_t x535 = 1007LLU;
	static uint64_t x536 = UINT64_MAX;
	volatile uint64_t t99 = 3LLU;

    t99 = ((x533<=x534)&(x535*x536));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x541 = 20550131U;
	uint8_t x542 = 57U;
	uint8_t x543 = 94U;
	volatile int32_t x544 = -104226;
	int32_t t100 = -6;

    t100 = ((x541<=x542)&(x543*x544));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x546 = INT16_MAX;
	uint16_t x548 = 1U;

    t101 = ((x545<=x546)&(x547*x548));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x557 = 1925;
	uint64_t x560 = 32531999531723562LLU;
	volatile uint64_t t102 = 236280750LLU;

    t102 = ((x557<=x558)&(x559*x560));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x561 = 16073;
	int16_t x562 = INT16_MIN;
	uint64_t x563 = 207449331552041LLU;
	static volatile uint32_t x564 = 1489387U;
	volatile uint64_t t103 = 58854393LLU;

    t103 = ((x561<=x562)&(x563*x564));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x566 = -1;
	int16_t x567 = INT16_MIN;
	static int8_t x568 = INT8_MIN;
	volatile int32_t t104 = 55422;

    t104 = ((x565<=x566)&(x567*x568));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x572 = -1;
	static int32_t t105 = 1;

    t105 = ((x569<=x570)&(x571*x572));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x582 = INT32_MAX;
	int32_t x583 = -1;
	static int64_t x584 = INT64_MAX;

    t106 = ((x581<=x582)&(x583*x584));

    if (t106 != 1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x594 = INT16_MIN;
	uint8_t x595 = 0U;
	int64_t x596 = INT64_MAX;
	volatile int64_t t107 = -1030845384024032LL;

    t107 = ((x593<=x594)&(x595*x596));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x597 = 4U;
	int64_t x598 = 251363107929LL;
	uint8_t x599 = UINT8_MAX;
	uint8_t x600 = 1U;
	volatile int32_t t108 = 6820;

    t108 = ((x597<=x598)&(x599*x600));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x603 = 0;
	int16_t x604 = 0;

    t109 = ((x601<=x602)&(x603*x604));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x605 = 21520001;
	int8_t x607 = 0;
	int64_t x608 = INT64_MIN;
	int64_t t110 = -51754LL;

    t110 = ((x605<=x606)&(x607*x608));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x609 = 23734256523LL;
	volatile int16_t x610 = INT16_MIN;
	int8_t x611 = INT8_MAX;
	volatile int8_t x612 = -53;
	volatile int32_t t111 = 130441;

    t111 = ((x609<=x610)&(x611*x612));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MIN;
	int8_t x615 = -2;
	volatile int16_t x616 = INT16_MIN;

    t112 = ((x613<=x614)&(x615*x616));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x617 = -1;
	int16_t x619 = INT16_MIN;
	int8_t x620 = 1;
	int32_t t113 = 3;

    t113 = ((x617<=x618)&(x619*x620));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x621 = 194291290U;
	int32_t x622 = -1;
	int8_t x623 = -1;
	uint8_t x624 = UINT8_MAX;

    t114 = ((x621<=x622)&(x623*x624));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x629 = INT64_MIN;
	int32_t x630 = INT32_MIN;
	int8_t x631 = -4;
	int16_t x632 = -663;
	volatile int32_t t115 = 18590873;

    t115 = ((x629<=x630)&(x631*x632));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x633 = -71LL;
	volatile int8_t x634 = -49;
	uint8_t x635 = 4U;
	static int8_t x636 = INT8_MAX;
	volatile int32_t t116 = 1;

    t116 = ((x633<=x634)&(x635*x636));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x638 = INT16_MIN;
	uint64_t x639 = UINT64_MAX;
	volatile int32_t x640 = -1;
	uint64_t t117 = 4105285423140943520LLU;

    t117 = ((x637<=x638)&(x639*x640));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x646 = 515U;
	uint32_t x647 = UINT32_MAX;
	uint16_t x648 = 242U;
	uint32_t t118 = 26447874U;

    t118 = ((x645<=x646)&(x647*x648));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x650 = 2272434657430447829LL;
	int64_t x651 = INT64_MAX;
	int64_t t119 = -4487097633975692LL;

    t119 = ((x649<=x650)&(x651*x652));

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x653 = -1501665LL;
	int64_t x654 = INT64_MAX;
	uint32_t x655 = 9282U;
	uint32_t x656 = 37264576U;
	uint32_t t120 = 266094801U;

    t120 = ((x653<=x654)&(x655*x656));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x657 = INT64_MIN;
	static int8_t x658 = 27;
	static uint16_t x659 = 3891U;
	uint32_t x660 = 5U;

    t121 = ((x657<=x658)&(x659*x660));

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x665 = INT64_MAX;
	volatile uint8_t x666 = 29U;
	volatile int8_t x667 = INT8_MIN;
	int8_t x668 = -1;
	static volatile int32_t t122 = -33640719;

    t122 = ((x665<=x666)&(x667*x668));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x669 = -3;
	int16_t x670 = INT16_MIN;
	static volatile uint16_t x671 = 148U;
	volatile int32_t t123 = -254;

    t123 = ((x669<=x670)&(x671*x672));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x673 = 117;
	static int32_t x674 = INT32_MAX;
	static uint64_t t124 = 2561963825671715LLU;

    t124 = ((x673<=x674)&(x675*x676));

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x681 = -1;
	volatile int8_t x682 = -17;
	uint32_t x683 = UINT32_MAX;
	uint16_t x684 = 4U;
	uint32_t t125 = 200218440U;

    t125 = ((x681<=x682)&(x683*x684));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x685 = 27514077789LLU;
	uint8_t x686 = 3U;
	volatile int32_t t126 = 9;

    t126 = ((x685<=x686)&(x687*x688));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x689 = INT32_MIN;
	volatile int16_t x691 = INT16_MIN;
	int32_t t127 = 820475;

    t127 = ((x689<=x690)&(x691*x692));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x693 = 13U;
	int8_t x694 = INT8_MIN;
	volatile int64_t x696 = -3LL;
	volatile uint64_t t128 = 1817LLU;

    t128 = ((x693<=x694)&(x695*x696));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x701 = -292814782;
	int64_t x702 = -1LL;
	int16_t x703 = -1;
	static int32_t x704 = -1;
	volatile int32_t t129 = 13161652;

    t129 = ((x701<=x702)&(x703*x704));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x706 = 1013U;
	int8_t x707 = -3;
	volatile uint32_t x708 = 183711397U;
	static uint32_t t130 = 766671589U;

    t130 = ((x705<=x706)&(x707*x708));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x713 = 88U;
	int64_t x714 = INT64_MIN;
	int8_t x715 = 4;
	volatile int64_t t131 = 351LL;

    t131 = ((x713<=x714)&(x715*x716));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x717 = -1;
	uint32_t x719 = 1752729089U;
	uint32_t x720 = 978U;

    t132 = ((x717<=x718)&(x719*x720));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x725 = 3654LLU;
	int32_t x727 = INT32_MAX;
	uint32_t x728 = UINT32_MAX;
	volatile uint32_t t133 = 296U;

    t133 = ((x725<=x726)&(x727*x728));

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x729 = INT32_MAX;
	int64_t x730 = -1LL;
	uint16_t x731 = 1U;
	int64_t x732 = INT64_MIN;

    t134 = ((x729<=x730)&(x731*x732));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x733 = INT8_MIN;
	volatile uint16_t x734 = 4U;

    t135 = ((x733<=x734)&(x735*x736));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x737 = UINT32_MAX;
	uint16_t x738 = 17U;
	int64_t x739 = -1LL;
	volatile int64_t x740 = -1LL;
	static volatile int64_t t136 = -15449LL;

    t136 = ((x737<=x738)&(x739*x740));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x741 = 23U;
	uint32_t x742 = 22U;
	volatile uint8_t x743 = 42U;
	uint64_t t137 = 38LLU;

    t137 = ((x741<=x742)&(x743*x744));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x746 = UINT32_MAX;
	uint32_t x747 = UINT32_MAX;
	uint32_t x748 = 46644158U;
	volatile uint32_t t138 = 76461608U;

    t138 = ((x745<=x746)&(x747*x748));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x749 = -1LL;
	int8_t x751 = INT8_MAX;
	volatile int32_t t139 = -519414;

    t139 = ((x749<=x750)&(x751*x752));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x754 = -6;
	static uint32_t x755 = 1908886146U;
	uint8_t x756 = 26U;
	uint32_t t140 = 19602U;

    t140 = ((x753<=x754)&(x755*x756));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x757 = -1LL;
	static uint16_t x758 = UINT16_MAX;
	volatile int64_t t141 = 4LL;

    t141 = ((x757<=x758)&(x759*x760));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x761 = -24091034;
	uint16_t x762 = 40U;
	volatile int16_t x763 = INT16_MIN;
	int16_t x764 = INT16_MIN;
	int32_t t142 = 13223;

    t142 = ((x761<=x762)&(x763*x764));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x770 = INT64_MIN;
	static int32_t x771 = -1;
	static int32_t x772 = -1;
	int32_t t143 = -6774932;

    t143 = ((x769<=x770)&(x771*x772));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x773 = INT8_MAX;
	volatile int32_t x774 = 6;
	uint32_t x775 = 1462813U;
	int8_t x776 = INT8_MIN;
	volatile uint32_t t144 = 722U;

    t144 = ((x773<=x774)&(x775*x776));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x777 = 403950400460LLU;
	uint8_t x778 = 23U;
	static uint32_t x779 = 188U;
	int64_t x780 = -1433205874163038LL;
	static volatile int64_t t145 = 6194LL;

    t145 = ((x777<=x778)&(x779*x780));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x781 = INT32_MIN;
	int16_t x782 = INT16_MIN;
	int8_t x783 = -1;
	volatile uint16_t x784 = 2507U;

    t146 = ((x781<=x782)&(x783*x784));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x785 = 78;
	int64_t x786 = INT64_MIN;
	uint16_t x787 = 6U;
	int8_t x788 = INT8_MIN;
	volatile int32_t t147 = 178988;

    t147 = ((x785<=x786)&(x787*x788));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x789 = INT16_MAX;
	uint64_t x791 = 1984LLU;
	static int32_t x792 = INT32_MIN;
	static uint64_t t148 = 83819928629LLU;

    t148 = ((x789<=x790)&(x791*x792));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x793 = INT16_MAX;
	int16_t x794 = 1;
	static int8_t x795 = INT8_MIN;
	uint16_t x796 = 25U;
	int32_t t149 = -800501;

    t149 = ((x793<=x794)&(x795*x796));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x797 = INT32_MIN;
	static int8_t x799 = 0;
	int8_t x800 = INT8_MIN;
	volatile int32_t t150 = -32401139;

    t150 = ((x797<=x798)&(x799*x800));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x801 = INT32_MIN;
	int8_t x802 = -1;
	uint16_t x803 = UINT16_MAX;
	volatile int8_t x804 = -1;
	volatile int32_t t151 = 9520956;

    t151 = ((x801<=x802)&(x803*x804));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x813 = 0;
	static uint64_t x814 = 28306240601242LLU;
	int8_t x815 = INT8_MIN;
	int8_t x816 = INT8_MAX;
	volatile int32_t t152 = -245749103;

    t152 = ((x813<=x814)&(x815*x816));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x817 = INT8_MIN;
	int8_t x818 = -1;
	static int8_t x819 = 4;
	static uint32_t t153 = 277U;

    t153 = ((x817<=x818)&(x819*x820));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x822 = -1;
	uint32_t x823 = 104412392U;
	uint16_t x824 = UINT16_MAX;
	volatile uint32_t t154 = 217476822U;

    t154 = ((x821<=x822)&(x823*x824));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x825 = -1;
	int8_t x827 = -26;
	static volatile uint8_t x828 = UINT8_MAX;

    t155 = ((x825<=x826)&(x827*x828));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x829 = INT64_MIN;
	uint64_t x831 = UINT64_MAX;
	volatile int16_t x832 = INT16_MAX;
	volatile uint64_t t156 = 198849675614391LLU;

    t156 = ((x829<=x830)&(x831*x832));

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x842 = INT8_MAX;
	uint8_t x844 = 55U;

    t157 = ((x841<=x842)&(x843*x844));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x845 = 115U;
	int8_t x846 = INT8_MIN;
	int64_t x847 = -2087879LL;
	static int8_t x848 = INT8_MAX;
	volatile int64_t t158 = 7168193895712LL;

    t158 = ((x845<=x846)&(x847*x848));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x849 = -30;
	static uint8_t x850 = 1U;
	int16_t x852 = -1;

    t159 = ((x849<=x850)&(x851*x852));

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x853 = INT64_MAX;
	int16_t x854 = INT16_MIN;
	int64_t x856 = -1LL;
	static volatile int64_t t160 = -29LL;

    t160 = ((x853<=x854)&(x855*x856));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x861 = 173;
	uint64_t x862 = 2137283926140962353LLU;
	int8_t x863 = INT8_MAX;
	static int32_t x864 = -1;
	volatile int32_t t161 = -349;

    t161 = ((x861<=x862)&(x863*x864));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x865 = UINT32_MAX;
	static volatile int16_t x866 = INT16_MAX;
	int8_t x867 = 1;
	uint64_t t162 = 6680334525800383LLU;

    t162 = ((x865<=x866)&(x867*x868));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x869 = UINT64_MAX;
	static uint64_t x870 = 9321859LLU;
	volatile uint16_t x871 = 5U;
	int16_t x872 = INT16_MAX;

    t163 = ((x869<=x870)&(x871*x872));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x873 = -1;
	uint8_t x874 = 68U;
	static int64_t x875 = 65936454425636132LL;
	int16_t x876 = -1;
	int64_t t164 = 3298805681416LL;

    t164 = ((x873<=x874)&(x875*x876));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x877 = UINT32_MAX;
	int32_t x878 = INT32_MAX;
	uint8_t x879 = 0U;
	volatile int32_t x880 = -475306;
	int32_t t165 = -225370;

    t165 = ((x877<=x878)&(x879*x880));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x881 = INT64_MIN;
	int32_t x882 = INT32_MIN;
	uint16_t x883 = UINT16_MAX;
	int8_t x884 = INT8_MIN;
	int32_t t166 = -1;

    t166 = ((x881<=x882)&(x883*x884));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x888 = -1;
	int32_t t167 = -26;

    t167 = ((x885<=x886)&(x887*x888));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x889 = 13535U;
	uint32_t x890 = 5976540U;
	uint8_t x891 = UINT8_MAX;
	uint32_t t168 = 120U;

    t168 = ((x889<=x890)&(x891*x892));

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x893 = INT32_MIN;
	static int8_t x895 = INT8_MIN;

    t169 = ((x893<=x894)&(x895*x896));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x898 = -1591530549403411550LL;
	int16_t x899 = -1;
	static uint32_t x900 = 0U;
	uint32_t t170 = 27742884U;

    t170 = ((x897<=x898)&(x899*x900));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x901 = INT16_MIN;
	uint32_t x902 = UINT32_MAX;
	volatile int64_t x903 = 204759307LL;
	int32_t x904 = INT32_MIN;
	int64_t t171 = -31193362759LL;

    t171 = ((x901<=x902)&(x903*x904));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x905 = UINT64_MAX;
	int64_t x907 = -23083593307LL;
	int8_t x908 = INT8_MIN;
	int64_t t172 = -4681838LL;

    t172 = ((x905<=x906)&(x907*x908));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x913 = 7U;
	int8_t x914 = INT8_MIN;
	volatile int32_t t173 = -77;

    t173 = ((x913<=x914)&(x915*x916));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x917 = INT64_MIN;
	static int64_t x918 = 3297966136619172LL;
	uint64_t x920 = 70623027900LLU;
	volatile uint64_t t174 = 233346299271057LLU;

    t174 = ((x917<=x918)&(x919*x920));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x921 = 2111544;
	int16_t x923 = -1;
	static int32_t x924 = 455;

    t175 = ((x921<=x922)&(x923*x924));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x925 = 27U;
	volatile int16_t x927 = -4;
	uint64_t x928 = UINT64_MAX;
	volatile uint64_t t176 = 7LLU;

    t176 = ((x925<=x926)&(x927*x928));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x937 = INT8_MIN;
	int32_t x938 = INT32_MIN;
	volatile uint8_t x939 = 22U;
	static uint16_t x940 = UINT16_MAX;
	int32_t t177 = 0;

    t177 = ((x937<=x938)&(x939*x940));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x941 = INT64_MIN;
	int32_t x942 = -152413385;
	static int16_t x943 = -12;
	int16_t x944 = INT16_MIN;
	static int32_t t178 = -25154;

    t178 = ((x941<=x942)&(x943*x944));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x945 = 0;
	int8_t x946 = INT8_MIN;
	static volatile int16_t x947 = -1;
	uint64_t x948 = UINT64_MAX;
	volatile uint64_t t179 = 558454359855072693LLU;

    t179 = ((x945<=x946)&(x947*x948));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x951 = INT8_MIN;
	volatile int16_t x952 = INT16_MAX;

    t180 = ((x949<=x950)&(x951*x952));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x957 = 57759982854LL;
	uint32_t x958 = 38893U;
	uint32_t x959 = UINT32_MAX;
	volatile uint32_t t181 = 73U;

    t181 = ((x957<=x958)&(x959*x960));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x965 = UINT32_MAX;
	int8_t x966 = -1;
	uint8_t x967 = 88U;
	int16_t x968 = -58;
	int32_t t182 = 208289244;

    t182 = ((x965<=x966)&(x967*x968));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x969 = -1;
	volatile int32_t x970 = INT32_MIN;
	uint32_t x971 = 5186U;
	int8_t x972 = 26;
	volatile uint32_t t183 = 59729U;

    t183 = ((x969<=x970)&(x971*x972));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x973 = 51U;
	volatile int8_t x974 = INT8_MIN;
	uint64_t x975 = 700688LLU;
	volatile int16_t x976 = INT16_MIN;
	uint64_t t184 = 543868989032LLU;

    t184 = ((x973<=x974)&(x975*x976));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x982 = INT32_MIN;
	volatile uint64_t x983 = 23502638544217430LLU;
	static int32_t x984 = -1;
	uint64_t t185 = 6521LLU;

    t185 = ((x981<=x982)&(x983*x984));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x985 = INT64_MIN;
	volatile uint32_t x986 = 5U;
	uint64_t x987 = 4081910460782535763LLU;
	volatile uint64_t t186 = 6LLU;

    t186 = ((x985<=x986)&(x987*x988));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x993 = INT16_MIN;
	int32_t x994 = 364;
	int32_t x995 = INT32_MAX;
	uint32_t x996 = 484452U;

    t187 = ((x993<=x994)&(x995*x996));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x997 = -1;
	uint8_t x998 = 1U;
	static uint64_t x999 = UINT64_MAX;
	volatile int64_t x1000 = -47358040LL;
	uint64_t t188 = 3506961686LLU;

    t188 = ((x997<=x998)&(x999*x1000));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1001 = INT32_MAX;
	volatile int16_t x1002 = -304;
	int16_t x1003 = 14;
	int64_t x1004 = -1LL;
	volatile int64_t t189 = -106084503712533LL;

    t189 = ((x1001<=x1002)&(x1003*x1004));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1009 = 17048899653063LLU;
	int64_t x1010 = -1LL;
	int16_t x1011 = 693;
	int8_t x1012 = 14;
	int32_t t190 = -50515;

    t190 = ((x1009<=x1010)&(x1011*x1012));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1013 = UINT64_MAX;
	static int32_t x1014 = INT32_MIN;
	static int8_t x1015 = -12;
	uint64_t x1016 = 12206136796806091LLU;
	uint64_t t191 = 1059656LLU;

    t191 = ((x1013<=x1014)&(x1015*x1016));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1017 = INT32_MIN;
	int16_t x1018 = INT16_MIN;
	static uint16_t x1019 = 29480U;
	uint8_t x1020 = UINT8_MAX;
	volatile int32_t t192 = -2674;

    t192 = ((x1017<=x1018)&(x1019*x1020));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1021 = INT32_MIN;
	int16_t x1023 = INT16_MAX;
	uint32_t x1024 = UINT32_MAX;
	static uint32_t t193 = 109090U;

    t193 = ((x1021<=x1022)&(x1023*x1024));

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1026 = INT32_MIN;
	int8_t x1027 = INT8_MAX;
	uint16_t x1028 = 981U;
	volatile int32_t t194 = -1161;

    t194 = ((x1025<=x1026)&(x1027*x1028));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1030 = INT16_MAX;
	volatile uint32_t t195 = 829U;

    t195 = ((x1029<=x1030)&(x1031*x1032));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1046 = INT32_MIN;
	int16_t x1047 = 281;
	volatile int16_t x1048 = INT16_MIN;
	static volatile int32_t t196 = 1;

    t196 = ((x1045<=x1046)&(x1047*x1048));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1049 = 1;
	volatile uint8_t x1051 = 21U;
	static int32_t t197 = 4415763;

    t197 = ((x1049<=x1050)&(x1051*x1052));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1053 = 1068LL;
	uint32_t t198 = 41229U;

    t198 = ((x1053<=x1054)&(x1055*x1056));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1058 = -9LL;
	int8_t x1060 = 1;
	static int32_t t199 = 257165;

    t199 = ((x1057<=x1058)&(x1059*x1060));

    if (t199 != 0) { NG(); } else { ; }
	
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

