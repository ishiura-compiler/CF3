
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

int16_t x1 = INT16_MIN;
int8_t x4 = -1;
int32_t t0 = -1;
uint32_t x9 = 86U;
static int32_t x13 = -1;
volatile int16_t x22 = INT16_MIN;
volatile int32_t x24 = -5035327;
int32_t t4 = -233;
static uint8_t x32 = 1U;
volatile uint16_t x33 = 6U;
int16_t x39 = -192;
static int32_t x45 = -626;
uint8_t x52 = 12U;
int16_t x53 = -1;
int16_t x57 = 13;
int32_t t12 = -1;
volatile int32_t t13 = -297;
int16_t x72 = -751;
int64_t x75 = -1LL;
int32_t t17 = 30;
static int32_t t18 = 30498;
static volatile int32_t t20 = 27;
int32_t x111 = INT32_MAX;
uint16_t x112 = UINT16_MAX;
static int8_t x116 = INT8_MAX;
volatile uint8_t x117 = UINT8_MAX;
int32_t t28 = -1;
uint64_t x162 = 3892430826664814805LLU;
int64_t x168 = INT64_MIN;
int32_t t30 = -205982;
static int32_t x170 = INT32_MIN;
volatile uint64_t x174 = 1428225918504248LLU;
uint16_t x183 = 24042U;
static int64_t x189 = -1LL;
static volatile int8_t x199 = INT8_MIN;
static volatile int32_t t38 = -9342510;
uint16_t x206 = 35U;
int32_t t39 = -51;
volatile int32_t x213 = -1;
int64_t x220 = 6683345986LL;
uint64_t x221 = 523834LLU;
volatile uint32_t x226 = 26U;
int32_t x227 = 956257582;
uint64_t x229 = 82LLU;
uint32_t x231 = UINT32_MAX;
static uint8_t x233 = 24U;
uint16_t x239 = 7608U;
int32_t t46 = -13969359;
volatile int32_t t48 = 44;
static int32_t x263 = INT32_MIN;
int32_t t50 = -2;
volatile int16_t x270 = -1;
int16_t x274 = INT16_MIN;
volatile int32_t x276 = INT32_MIN;
volatile int8_t x278 = INT8_MAX;
int64_t x279 = INT64_MIN;
int64_t x289 = 4163132583427235LL;
int8_t x297 = -1;
int32_t t55 = 16;
volatile int16_t x305 = INT16_MIN;
static int16_t x306 = 77;
volatile int16_t x308 = -1;
static volatile int32_t t57 = 0;
int16_t x322 = INT16_MIN;
volatile int32_t t60 = 65055104;
int32_t x325 = INT32_MIN;
int8_t x329 = -1;
static int64_t x332 = -78051870LL;
uint64_t x337 = 745266124012147801LLU;
uint8_t x349 = 2U;
volatile int64_t x357 = 64418LL;
int64_t x359 = INT64_MIN;
volatile int32_t t69 = 1093318;
volatile int16_t x373 = -1;
uint64_t x376 = 1371313316937802118LLU;
static volatile int64_t x395 = INT64_MIN;
int64_t x396 = -1971LL;
int32_t x407 = INT32_MAX;
static uint32_t x422 = 3U;
int64_t x425 = -13034226LL;
volatile int8_t x431 = -1;
uint32_t x437 = 12U;
int8_t x438 = INT8_MIN;
volatile uint32_t x439 = UINT32_MAX;
volatile int32_t x440 = INT32_MAX;
static int32_t t82 = -15;
static uint8_t x452 = 30U;
int32_t x453 = -751;
int8_t x456 = 11;
int64_t x457 = INT64_MAX;
volatile int32_t t86 = 10;
int32_t t87 = 0;
volatile int64_t x474 = 8946424764559392LL;
int64_t x479 = INT64_MAX;
int32_t x485 = 4738371;
uint64_t x488 = UINT64_MAX;
static volatile int64_t x491 = INT64_MIN;
static int32_t t92 = 2;
int16_t x494 = -1;
static volatile int32_t t94 = 37369;
int32_t x501 = -236;
int8_t x502 = 50;
static int64_t x504 = INT64_MIN;
int8_t x511 = INT8_MAX;
int32_t t97 = 3593105;
static int32_t t98 = -149210;
uint32_t x537 = 30827653U;
static uint16_t x539 = UINT16_MAX;
int32_t x540 = INT32_MAX;
uint64_t x542 = UINT64_MAX;
int32_t x543 = 132669473;
int32_t t102 = 15;
static int8_t x578 = 2;
volatile int32_t t107 = -703177;
static volatile uint8_t x597 = 38U;
uint16_t x598 = 1U;
int16_t x599 = 5;
int32_t t108 = 11060936;
volatile int32_t t109 = -114073;
int16_t x605 = -1;
volatile int32_t t110 = 87;
static volatile int32_t t113 = -402646;
uint16_t x627 = UINT16_MAX;
static volatile uint8_t x628 = UINT8_MAX;
int32_t t115 = 32153569;
int32_t t117 = -302134265;
int16_t x673 = INT16_MAX;
int16_t x683 = -1;
int64_t x690 = 220740197LL;
uint16_t x693 = 2027U;
int64_t x706 = 13836603610131LL;
int64_t x709 = INT64_MAX;
int8_t x728 = INT8_MIN;
int32_t t131 = -3542;
int64_t x739 = INT64_MIN;
int16_t x757 = INT16_MIN;
uint32_t x759 = 471367U;
int32_t t136 = -4175;
uint64_t x770 = 7851587805LLU;
int16_t x788 = INT16_MAX;
int16_t x791 = INT16_MIN;
int32_t t145 = 249;
int8_t x806 = INT8_MIN;
static volatile int32_t t146 = -323685677;
uint16_t x811 = 949U;
static volatile uint8_t x815 = 52U;
static int32_t x823 = INT32_MAX;
volatile int32_t x824 = INT32_MAX;
uint64_t x828 = 74133LLU;
static volatile uint16_t x836 = 14U;
int8_t x857 = INT8_MIN;
volatile int32_t t155 = -3245;
int64_t x861 = -1LL;
int8_t x864 = INT8_MIN;
int64_t x866 = -1LL;
uint16_t x885 = 0U;
volatile int16_t x887 = INT16_MIN;
int32_t t162 = 24992896;
int8_t x902 = INT8_MIN;
int32_t t164 = 133461444;
int32_t t165 = -11187321;
static int16_t x936 = INT16_MIN;
static uint8_t x942 = UINT8_MAX;
uint32_t x944 = 158517U;
volatile int32_t t172 = -84358;
int32_t x951 = INT32_MAX;
int32_t t173 = 56277;
static int32_t t176 = 12;
int32_t t178 = 8304945;
uint32_t x979 = UINT32_MAX;
volatile uint64_t x981 = 115LLU;
static volatile int64_t x984 = INT64_MIN;
uint16_t x995 = 8U;
volatile int32_t t185 = 16057;
int32_t t186 = -6;
volatile int32_t x1013 = -1;
static int32_t x1015 = INT32_MIN;
uint16_t x1018 = UINT16_MAX;
int16_t x1019 = 0;
int16_t x1020 = -1;
uint64_t x1024 = 1014895827562LLU;
volatile int32_t t191 = 4635;
static uint32_t x1033 = UINT32_MAX;
int32_t x1040 = INT32_MAX;
static int64_t x1043 = -37LL;
uint64_t x1046 = 4037458625913251LLU;
volatile int8_t x1048 = INT8_MIN;
uint8_t x1057 = 2U;
uint32_t x1059 = 3U;
uint64_t x1066 = UINT64_MAX;
volatile int16_t x1072 = INT16_MIN;


void f0(void) {
    	volatile int16_t x2 = 3;
	uint32_t x3 = 63409159U;

    t0 = (((x1*x2)!=x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = 1U;
	uint8_t x6 = 1U;
	static uint32_t x7 = 1573451U;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -2312461;

    t1 = (((x5*x6)!=x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 21349839435244445LLU;
	uint8_t x11 = UINT8_MAX;
	uint32_t x12 = 146537858U;
	int32_t t2 = -192568714;

    t2 = (((x9*x10)!=x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	volatile uint32_t x15 = UINT32_MAX;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -1;

    t3 = (((x13*x14)!=x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 7;
	int8_t x23 = -36;

    t4 = (((x21*x22)!=x23)==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = 7040;
	int8_t x30 = 4;
	volatile int8_t x31 = -1;
	volatile int32_t t5 = 2671;

    t5 = (((x29*x30)!=x31)==x32);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x34 = -4101050286530LL;
	int8_t x35 = -7;
	volatile uint64_t x36 = UINT64_MAX;
	volatile int32_t t6 = -37664;

    t6 = (((x33*x34)!=x35)==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x37 = 96931078798649LLU;
	int32_t x38 = -849;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t7 = -18;

    t7 = (((x37*x38)!=x39)==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x41 = INT32_MIN;
	uint32_t x42 = UINT32_MAX;
	static int32_t x43 = 2114;
	int64_t x44 = -1LL;
	int32_t t8 = 145251;

    t8 = (((x41*x42)!=x43)==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x46 = INT8_MIN;
	int64_t x47 = INT64_MIN;
	int64_t x48 = -1118409LL;
	static volatile int32_t t9 = 50;

    t9 = (((x45*x46)!=x47)==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = 2510U;
	static int64_t x50 = -1LL;
	volatile uint32_t x51 = UINT32_MAX;
	volatile int32_t t10 = 519117487;

    t10 = (((x49*x50)!=x51)==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x54 = UINT32_MAX;
	volatile int8_t x55 = INT8_MAX;
	int32_t x56 = -14728773;
	int32_t t11 = 466;

    t11 = (((x53*x54)!=x55)==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x58 = INT16_MIN;
	uint32_t x59 = UINT32_MAX;
	uint16_t x60 = 22791U;

    t12 = (((x57*x58)!=x59)==x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = 7;
	int8_t x62 = -1;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = UINT64_MAX;

    t13 = (((x61*x62)!=x63)==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = UINT16_MAX;
	volatile int8_t x66 = INT8_MIN;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = -28703218;
	int32_t t14 = 457221;

    t14 = (((x65*x66)!=x67)==x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MIN;
	uint64_t x70 = UINT64_MAX;
	volatile uint32_t x71 = 19U;
	int32_t t15 = 456802;

    t15 = (((x69*x70)!=x71)==x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MAX;
	int16_t x76 = -11948;
	int32_t t16 = 87410;

    t16 = (((x73*x74)!=x75)==x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x77 = UINT32_MAX;
	int64_t x78 = -1LL;
	uint8_t x79 = 10U;
	volatile int16_t x80 = INT16_MAX;

    t17 = (((x77*x78)!=x79)==x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x85 = 2511U;
	int16_t x86 = INT16_MIN;
	static volatile int64_t x87 = INT64_MIN;
	int64_t x88 = 3414LL;

    t18 = (((x85*x86)!=x87)==x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x93 = INT8_MAX;
	int8_t x94 = 1;
	int32_t x95 = -1;
	static int32_t x96 = INT32_MIN;
	int32_t t19 = 502097;

    t19 = (((x93*x94)!=x95)==x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = -1;
	volatile int64_t x98 = -2167966411LL;
	int8_t x99 = -1;
	static int16_t x100 = 125;

    t20 = (((x97*x98)!=x99)==x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x101 = UINT8_MAX;
	uint64_t x102 = 12958LLU;
	int64_t x103 = INT64_MAX;
	int64_t x104 = INT64_MAX;
	int32_t t21 = 16128;

    t21 = (((x101*x102)!=x103)==x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x109 = -12;
	uint16_t x110 = 0U;
	volatile int32_t t22 = -60550;

    t22 = (((x109*x110)!=x111)==x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x113 = 113U;
	uint16_t x114 = UINT16_MAX;
	uint32_t x115 = UINT32_MAX;
	static volatile int32_t t23 = -10458343;

    t23 = (((x113*x114)!=x115)==x116);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x118 = -3;
	static int64_t x119 = -1LL;
	uint32_t x120 = 14U;
	volatile int32_t t24 = 202;

    t24 = (((x117*x118)!=x119)==x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x121 = -1;
	int16_t x122 = INT16_MAX;
	uint64_t x123 = 34206987918LLU;
	int8_t x124 = 63;
	volatile int32_t t25 = 2522;

    t25 = (((x121*x122)!=x123)==x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x145 = INT8_MIN;
	uint64_t x146 = UINT64_MAX;
	static int64_t x147 = 27400054590LL;
	int16_t x148 = INT16_MAX;
	volatile int32_t t26 = 2;

    t26 = (((x145*x146)!=x147)==x148);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x149 = INT16_MIN;
	volatile int8_t x150 = 3;
	int16_t x151 = 219;
	uint8_t x152 = 2U;
	volatile int32_t t27 = 25318;

    t27 = (((x149*x150)!=x151)==x152);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x157 = UINT32_MAX;
	int32_t x158 = INT32_MIN;
	static uint64_t x159 = UINT64_MAX;
	volatile uint8_t x160 = UINT8_MAX;

    t28 = (((x157*x158)!=x159)==x160);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x161 = INT8_MIN;
	volatile int32_t x163 = INT32_MIN;
	volatile int8_t x164 = -5;
	volatile int32_t t29 = -15665;

    t29 = (((x161*x162)!=x163)==x164);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint8_t x165 = 0U;
	volatile int16_t x166 = INT16_MAX;
	int32_t x167 = INT32_MIN;

    t30 = (((x165*x166)!=x167)==x168);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x169 = UINT64_MAX;
	int32_t x171 = 1520;
	int64_t x172 = 76LL;
	volatile int32_t t31 = 119162;

    t31 = (((x169*x170)!=x171)==x172);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x173 = UINT64_MAX;
	int8_t x175 = -28;
	int16_t x176 = -1;
	int32_t t32 = -19079;

    t32 = (((x173*x174)!=x175)==x176);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x177 = 0;
	int16_t x178 = INT16_MAX;
	volatile int64_t x179 = INT64_MIN;
	uint16_t x180 = 1U;
	volatile int32_t t33 = 1;

    t33 = (((x177*x178)!=x179)==x180);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x181 = INT16_MIN;
	volatile uint64_t x182 = 78LLU;
	static uint8_t x184 = 89U;
	volatile int32_t t34 = 6164;

    t34 = (((x181*x182)!=x183)==x184);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x185 = INT16_MAX;
	int8_t x186 = -2;
	int16_t x187 = INT16_MIN;
	static volatile int8_t x188 = INT8_MIN;
	volatile int32_t t35 = 746;

    t35 = (((x185*x186)!=x187)==x188);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x190 = INT16_MIN;
	int16_t x191 = 6901;
	volatile int64_t x192 = -1LL;
	int32_t t36 = -23869;

    t36 = (((x189*x190)!=x191)==x192);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x193 = 8U;
	volatile int8_t x194 = 3;
	int32_t x195 = INT32_MIN;
	int16_t x196 = 6608;
	int32_t t37 = -1;

    t37 = (((x193*x194)!=x195)==x196);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x197 = 16U;
	static int64_t x198 = -591131701LL;
	static int8_t x200 = INT8_MIN;

    t38 = (((x197*x198)!=x199)==x200);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = INT8_MAX;
	volatile int16_t x207 = INT16_MAX;
	int16_t x208 = -10191;

    t39 = (((x205*x206)!=x207)==x208);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MIN;
	int64_t x216 = -483721LL;
	volatile int32_t t40 = 12;

    t40 = (((x213*x214)!=x215)==x216);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x217 = -1;
	volatile uint8_t x218 = 1U;
	static int32_t x219 = -449859;
	int32_t t41 = -247672;

    t41 = (((x217*x218)!=x219)==x220);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x222 = INT32_MIN;
	static int64_t x223 = INT64_MAX;
	int32_t x224 = -1;
	volatile int32_t t42 = 116;

    t42 = (((x221*x222)!=x223)==x224);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x225 = INT8_MAX;
	int64_t x228 = 398088419791190400LL;
	volatile int32_t t43 = -13;

    t43 = (((x225*x226)!=x227)==x228);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x230 = -1;
	int32_t x232 = -191464;
	int32_t t44 = 65397559;

    t44 = (((x229*x230)!=x231)==x232);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x234 = UINT8_MAX;
	static int16_t x235 = INT16_MAX;
	static int64_t x236 = -1LL;
	int32_t t45 = 925746;

    t45 = (((x233*x234)!=x235)==x236);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x237 = 46U;
	volatile int16_t x238 = -1;
	uint64_t x240 = 5094866247813386LLU;

    t46 = (((x237*x238)!=x239)==x240);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x241 = -10;
	int16_t x242 = INT16_MAX;
	uint64_t x243 = 1997LLU;
	static uint64_t x244 = 783712509671017778LLU;
	int32_t t47 = -3;

    t47 = (((x241*x242)!=x243)==x244);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x245 = INT32_MIN;
	uint32_t x246 = UINT32_MAX;
	static volatile int16_t x247 = INT16_MAX;
	static volatile int16_t x248 = INT16_MIN;

    t48 = (((x245*x246)!=x247)==x248);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	volatile uint8_t x256 = 111U;
	int32_t t49 = 2468;

    t49 = (((x253*x254)!=x255)==x256);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x261 = -41806LL;
	volatile int16_t x262 = INT16_MAX;
	volatile int16_t x264 = -1;

    t50 = (((x261*x262)!=x263)==x264);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x269 = 691165U;
	int32_t x271 = INT32_MIN;
	volatile int8_t x272 = 0;
	static int32_t t51 = 566738;

    t51 = (((x269*x270)!=x271)==x272);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x273 = INT16_MIN;
	uint8_t x275 = 91U;
	int32_t t52 = 1;

    t52 = (((x273*x274)!=x275)==x276);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x277 = 1;
	int64_t x280 = INT64_MAX;
	static int32_t t53 = -1;

    t53 = (((x277*x278)!=x279)==x280);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x290 = 2700440368581684LLU;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t54 = -711804854;

    t54 = (((x289*x290)!=x291)==x292);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x298 = -4;
	int8_t x299 = -1;
	int16_t x300 = -1;

    t55 = (((x297*x298)!=x299)==x300);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x307 = INT16_MIN;
	volatile int32_t t56 = 30788569;

    t56 = (((x305*x306)!=x307)==x308);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x309 = INT16_MIN;
	uint8_t x310 = 5U;
	volatile int16_t x311 = INT16_MAX;
	uint16_t x312 = UINT16_MAX;

    t57 = (((x309*x310)!=x311)==x312);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x313 = 7315352239LL;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MAX;
	uint8_t x316 = 71U;
	volatile int32_t t58 = 13;

    t58 = (((x313*x314)!=x315)==x316);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x317 = 75338445LLU;
	static int64_t x318 = INT64_MAX;
	int8_t x319 = INT8_MAX;
	volatile uint16_t x320 = 39U;
	static int32_t t59 = 1025733;

    t59 = (((x317*x318)!=x319)==x320);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x321 = 30U;
	int16_t x323 = INT16_MIN;
	uint32_t x324 = UINT32_MAX;

    t60 = (((x321*x322)!=x323)==x324);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x326 = 8U;
	uint16_t x327 = 11344U;
	int8_t x328 = INT8_MIN;
	static int32_t t61 = 3701307;

    t61 = (((x325*x326)!=x327)==x328);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x330 = 59;
	volatile uint32_t x331 = 542071U;
	volatile int32_t t62 = -3722539;

    t62 = (((x329*x330)!=x331)==x332);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x333 = -644;
	int16_t x334 = -6;
	int8_t x335 = INT8_MAX;
	uint64_t x336 = 467345996152LLU;
	int32_t t63 = -16329262;

    t63 = (((x333*x334)!=x335)==x336);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	int64_t x340 = INT64_MIN;
	volatile int32_t t64 = -147;

    t64 = (((x337*x338)!=x339)==x340);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x341 = 256898LLU;
	uint16_t x342 = 3103U;
	volatile int16_t x343 = 1336;
	uint8_t x344 = 7U;
	int32_t t65 = -117;

    t65 = (((x341*x342)!=x343)==x344);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x345 = -2109536;
	uint8_t x346 = UINT8_MAX;
	volatile int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MIN;
	static int32_t t66 = -46;

    t66 = (((x345*x346)!=x347)==x348);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x350 = INT16_MAX;
	int16_t x351 = 0;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t67 = -1577154;

    t67 = (((x349*x350)!=x351)==x352);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x358 = 100227061914024LLU;
	int16_t x360 = 1;
	volatile int32_t t68 = 34761571;

    t68 = (((x357*x358)!=x359)==x360);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x361 = -2195418;
	uint64_t x362 = 12LLU;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;

    t69 = (((x361*x362)!=x363)==x364);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x374 = 1;
	uint8_t x375 = 2U;
	volatile int32_t t70 = 28698;

    t70 = (((x373*x374)!=x375)==x376);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	volatile int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t71 = -827363354;

    t71 = (((x377*x378)!=x379)==x380);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x393 = 0;
	uint64_t x394 = UINT64_MAX;
	int32_t t72 = -5561;

    t72 = (((x393*x394)!=x395)==x396);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x397 = 2384822LLU;
	volatile int32_t x398 = INT32_MIN;
	int8_t x399 = -1;
	int16_t x400 = -1;
	int32_t t73 = -198518213;

    t73 = (((x397*x398)!=x399)==x400);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x405 = 3000U;
	uint64_t x406 = UINT64_MAX;
	uint16_t x408 = 13716U;
	int32_t t74 = -2772;

    t74 = (((x405*x406)!=x407)==x408);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x413 = 3;
	int64_t x414 = 34951298900095766LL;
	static uint16_t x415 = 662U;
	int64_t x416 = -240859876LL;
	static volatile int32_t t75 = -596;

    t75 = (((x413*x414)!=x415)==x416);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x417 = INT64_MAX;
	int64_t x418 = -1LL;
	volatile uint8_t x419 = 1U;
	uint32_t x420 = 758676986U;
	volatile int32_t t76 = 503493;

    t76 = (((x417*x418)!=x419)==x420);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x421 = 29844U;
	int64_t x423 = INT64_MIN;
	volatile uint64_t x424 = 131110408859649LLU;
	static int32_t t77 = -2158518;

    t77 = (((x421*x422)!=x423)==x424);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x426 = INT8_MIN;
	static volatile uint64_t x427 = 15LLU;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t78 = -4575085;

    t78 = (((x425*x426)!=x427)==x428);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x429 = -1LL;
	uint16_t x430 = 194U;
	int8_t x432 = -15;
	int32_t t79 = -39463;

    t79 = (((x429*x430)!=x431)==x432);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x433 = 0;
	int16_t x434 = INT16_MIN;
	uint16_t x435 = 0U;
	int8_t x436 = INT8_MAX;
	static int32_t t80 = -85776939;

    t80 = (((x433*x434)!=x435)==x436);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t t81 = 1767;

    t81 = (((x437*x438)!=x439)==x440);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x441 = INT8_MIN;
	static int64_t x442 = -79214LL;
	uint16_t x443 = UINT16_MAX;
	static volatile uint64_t x444 = UINT64_MAX;

    t82 = (((x441*x442)!=x443)==x444);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x445 = 33U;
	uint16_t x446 = 28153U;
	uint8_t x447 = 2U;
	uint32_t x448 = 535U;
	int32_t t83 = 1439;

    t83 = (((x445*x446)!=x447)==x448);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x449 = UINT16_MAX;
	volatile int8_t x450 = INT8_MIN;
	uint16_t x451 = 1300U;
	int32_t t84 = 4818811;

    t84 = (((x449*x450)!=x451)==x452);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x454 = 898853U;
	uint32_t x455 = UINT32_MAX;
	volatile int32_t t85 = -26;

    t85 = (((x453*x454)!=x455)==x456);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x458 = -1LL;
	int8_t x459 = INT8_MAX;
	int8_t x460 = 19;

    t86 = (((x457*x458)!=x459)==x460);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x461 = INT32_MIN;
	volatile uint32_t x462 = 1896U;
	int8_t x463 = -1;
	int16_t x464 = -1011;

    t87 = (((x461*x462)!=x463)==x464);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x473 = UINT8_MAX;
	int16_t x475 = INT16_MAX;
	int16_t x476 = INT16_MIN;
	volatile int32_t t88 = 2;

    t88 = (((x473*x474)!=x475)==x476);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x477 = -1;
	int8_t x478 = 9;
	volatile uint32_t x480 = 265U;
	int32_t t89 = 1002;

    t89 = (((x477*x478)!=x479)==x480);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x481 = UINT8_MAX;
	volatile int8_t x482 = -1;
	uint64_t x483 = 1592088938075493LLU;
	int64_t x484 = INT64_MAX;
	int32_t t90 = 851835;

    t90 = (((x481*x482)!=x483)==x484);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x486 = UINT8_MAX;
	int64_t x487 = 3507LL;
	int32_t t91 = -137158;

    t91 = (((x485*x486)!=x487)==x488);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x489 = -1;
	static int8_t x490 = INT8_MIN;
	int8_t x492 = INT8_MIN;

    t92 = (((x489*x490)!=x491)==x492);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x493 = UINT32_MAX;
	uint32_t x495 = 3U;
	volatile int8_t x496 = INT8_MIN;
	static volatile int32_t t93 = -19;

    t93 = (((x493*x494)!=x495)==x496);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x497 = -1;
	int16_t x498 = INT16_MAX;
	uint32_t x499 = 243U;
	volatile int16_t x500 = INT16_MAX;

    t94 = (((x497*x498)!=x499)==x500);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x503 = 55U;
	volatile int32_t t95 = -7647;

    t95 = (((x501*x502)!=x503)==x504);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x505 = INT32_MAX;
	int8_t x506 = -1;
	volatile int16_t x507 = INT16_MIN;
	uint8_t x508 = UINT8_MAX;
	int32_t t96 = -15;

    t96 = (((x505*x506)!=x507)==x508);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x509 = UINT8_MAX;
	int8_t x510 = INT8_MIN;
	volatile uint32_t x512 = UINT32_MAX;

    t97 = (((x509*x510)!=x511)==x512);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x513 = INT32_MIN;
	static int16_t x514 = 0;
	int64_t x515 = -1LL;
	int8_t x516 = 22;

    t98 = (((x513*x514)!=x515)==x516);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x517 = 223931172771991LLU;
	int16_t x518 = -3;
	uint8_t x519 = UINT8_MAX;
	int16_t x520 = -1;
	int32_t t99 = -4;

    t99 = (((x517*x518)!=x519)==x520);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x538 = 1;
	static volatile int32_t t100 = 169683624;

    t100 = (((x537*x538)!=x539)==x540);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x541 = 160260996U;
	int32_t x544 = INT32_MAX;
	volatile int32_t t101 = 455777;

    t101 = (((x541*x542)!=x543)==x544);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x549 = 20;
	static int64_t x550 = -981712697LL;
	uint8_t x551 = UINT8_MAX;
	int32_t x552 = INT32_MAX;

    t102 = (((x549*x550)!=x551)==x552);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x553 = 5;
	int8_t x554 = INT8_MIN;
	static volatile int32_t x555 = INT32_MIN;
	uint64_t x556 = 398LLU;
	static volatile int32_t t103 = 73137;

    t103 = (((x553*x554)!=x555)==x556);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x561 = UINT64_MAX;
	int64_t x562 = INT64_MIN;
	int64_t x563 = INT64_MAX;
	static volatile int16_t x564 = -9110;
	volatile int32_t t104 = -759047929;

    t104 = (((x561*x562)!=x563)==x564);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x577 = INT16_MIN;
	static int8_t x579 = 0;
	int64_t x580 = INT64_MIN;
	volatile int32_t t105 = -11;

    t105 = (((x577*x578)!=x579)==x580);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x581 = INT16_MIN;
	int8_t x582 = -1;
	uint16_t x583 = 78U;
	static uint8_t x584 = 6U;
	int32_t t106 = -765440;

    t106 = (((x581*x582)!=x583)==x584);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x593 = UINT64_MAX;
	int32_t x594 = -49913;
	volatile int64_t x595 = 6LL;
	volatile int32_t x596 = INT32_MIN;

    t107 = (((x593*x594)!=x595)==x596);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x600 = INT16_MIN;

    t108 = (((x597*x598)!=x599)==x600);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x601 = UINT32_MAX;
	int16_t x602 = INT16_MAX;
	int64_t x603 = INT64_MIN;
	uint32_t x604 = 91699U;

    t109 = (((x601*x602)!=x603)==x604);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x606 = 1;
	int64_t x607 = INT64_MIN;
	static uint32_t x608 = UINT32_MAX;

    t110 = (((x605*x606)!=x607)==x608);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x609 = INT16_MIN;
	int16_t x610 = -1;
	int64_t x611 = -1LL;
	uint8_t x612 = 3U;
	volatile int32_t t111 = -240181904;

    t111 = (((x609*x610)!=x611)==x612);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x613 = 4800855LLU;
	int32_t x614 = 65998348;
	uint8_t x615 = 2U;
	static int32_t x616 = INT32_MIN;
	int32_t t112 = -110;

    t112 = (((x613*x614)!=x615)==x616);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x617 = UINT64_MAX;
	uint64_t x618 = 64012LLU;
	int8_t x619 = INT8_MAX;
	uint32_t x620 = 15588955U;

    t113 = (((x617*x618)!=x619)==x620);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x625 = 2U;
	static volatile uint64_t x626 = 1626LLU;
	int32_t t114 = 266816;

    t114 = (((x625*x626)!=x627)==x628);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x629 = 408542649U;
	static uint32_t x630 = 7716U;
	int32_t x631 = -1;
	int32_t x632 = -1;

    t115 = (((x629*x630)!=x631)==x632);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x637 = 2U;
	uint64_t x638 = 3883945391LLU;
	static int8_t x639 = 6;
	static int16_t x640 = INT16_MIN;
	int32_t t116 = -2194;

    t116 = (((x637*x638)!=x639)==x640);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x657 = INT16_MIN;
	int16_t x658 = INT16_MIN;
	static int16_t x659 = -1;
	static volatile int8_t x660 = -44;

    t117 = (((x657*x658)!=x659)==x660);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint8_t x661 = 5U;
	int8_t x662 = -3;
	int8_t x663 = -1;
	int64_t x664 = INT64_MAX;
	int32_t t118 = -348044542;

    t118 = (((x661*x662)!=x663)==x664);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x665 = 0;
	int64_t x666 = -1LL;
	static uint16_t x667 = 3U;
	static int64_t x668 = 1990943LL;
	volatile int32_t t119 = -1661738;

    t119 = (((x665*x666)!=x667)==x668);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x674 = -1;
	uint64_t x675 = UINT64_MAX;
	static uint8_t x676 = 16U;
	static volatile int32_t t120 = 103;

    t120 = (((x673*x674)!=x675)==x676);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x681 = 21U;
	static int16_t x682 = -6;
	volatile int64_t x684 = 613LL;
	volatile int32_t t121 = 1;

    t121 = (((x681*x682)!=x683)==x684);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x691 = -1LL;
	int32_t x692 = INT32_MIN;
	int32_t t122 = 9566884;

    t122 = (((x689*x690)!=x691)==x692);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x694 = 82U;
	volatile uint8_t x695 = 53U;
	static uint64_t x696 = 416310LLU;
	volatile int32_t t123 = 9;

    t123 = (((x693*x694)!=x695)==x696);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x697 = 137041649621868304LLU;
	uint64_t x698 = 1950934559252719LLU;
	int8_t x699 = -1;
	int32_t x700 = INT32_MAX;
	int32_t t124 = 3;

    t124 = (((x697*x698)!=x699)==x700);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x701 = 2LLU;
	int64_t x702 = -1LL;
	static int32_t x703 = INT32_MIN;
	int64_t x704 = -663534704890153480LL;
	static int32_t t125 = 5;

    t125 = (((x701*x702)!=x703)==x704);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x705 = 2472U;
	static int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MIN;
	int32_t t126 = 63019;

    t126 = (((x705*x706)!=x707)==x708);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x710 = -1LL;
	static int32_t x711 = -34;
	static int32_t x712 = -7;
	int32_t t127 = 61580665;

    t127 = (((x709*x710)!=x711)==x712);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x713 = -3215087963LL;
	int32_t x714 = INT32_MAX;
	static volatile uint32_t x715 = 745U;
	static uint16_t x716 = 81U;
	volatile int32_t t128 = 19515;

    t128 = (((x713*x714)!=x715)==x716);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x717 = -1;
	static uint16_t x718 = UINT16_MAX;
	uint8_t x719 = 1U;
	uint64_t x720 = 567747450984139899LLU;
	int32_t t129 = 152;

    t129 = (((x717*x718)!=x719)==x720);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x721 = -1;
	static uint16_t x722 = UINT16_MAX;
	uint64_t x723 = UINT64_MAX;
	int64_t x724 = -1LL;
	static int32_t t130 = 3;

    t130 = (((x721*x722)!=x723)==x724);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x725 = 13;
	int16_t x726 = 158;
	int64_t x727 = INT64_MIN;

    t131 = (((x725*x726)!=x727)==x728);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x729 = -1;
	int32_t x730 = -1;
	uint16_t x731 = 3U;
	int32_t x732 = INT32_MAX;
	static volatile int32_t t132 = -7778762;

    t132 = (((x729*x730)!=x731)==x732);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x733 = UINT64_MAX;
	int16_t x734 = 478;
	int32_t x735 = INT32_MAX;
	volatile int32_t x736 = -7690;
	static int32_t t133 = -227;

    t133 = (((x733*x734)!=x735)==x736);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x737 = UINT64_MAX;
	volatile int64_t x738 = INT64_MIN;
	int64_t x740 = INT64_MAX;
	int32_t t134 = -31;

    t134 = (((x737*x738)!=x739)==x740);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x745 = UINT16_MAX;
	uint8_t x746 = 1U;
	int32_t x747 = INT32_MIN;
	volatile int64_t x748 = INT64_MIN;
	volatile int32_t t135 = -1;

    t135 = (((x745*x746)!=x747)==x748);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x758 = -1;
	volatile int8_t x760 = -1;

    t136 = (((x757*x758)!=x759)==x760);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x765 = 49U;
	int8_t x766 = INT8_MIN;
	static int32_t x767 = INT32_MIN;
	volatile int64_t x768 = -7LL;
	int32_t t137 = -8870220;

    t137 = (((x765*x766)!=x767)==x768);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x769 = INT16_MIN;
	uint32_t x771 = 269733U;
	int64_t x772 = INT64_MAX;
	volatile int32_t t138 = -32250082;

    t138 = (((x769*x770)!=x771)==x772);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x773 = 84U;
	uint16_t x774 = 1166U;
	uint16_t x775 = UINT16_MAX;
	int16_t x776 = INT16_MAX;
	int32_t t139 = -15896393;

    t139 = (((x773*x774)!=x775)==x776);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x777 = 1478917LLU;
	int8_t x778 = INT8_MIN;
	int64_t x779 = 267708579205268026LL;
	uint16_t x780 = 30U;
	static volatile int32_t t140 = 48;

    t140 = (((x777*x778)!=x779)==x780);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = INT16_MIN;
	int32_t x787 = INT32_MIN;
	volatile int32_t t141 = 411065;

    t141 = (((x785*x786)!=x787)==x788);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x789 = UINT64_MAX;
	int32_t x790 = INT32_MIN;
	volatile int64_t x792 = -1LL;
	int32_t t142 = -16;

    t142 = (((x789*x790)!=x791)==x792);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x793 = 1951123099LLU;
	int8_t x794 = INT8_MIN;
	int16_t x795 = -1;
	static int16_t x796 = -250;
	int32_t t143 = -6;

    t143 = (((x793*x794)!=x795)==x796);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x797 = 2378398U;
	uint32_t x798 = 1U;
	int32_t x799 = INT32_MAX;
	int16_t x800 = INT16_MAX;
	int32_t t144 = 157536;

    t144 = (((x797*x798)!=x799)==x800);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x801 = UINT16_MAX;
	int16_t x802 = -1954;
	int8_t x803 = -1;
	int16_t x804 = 4488;

    t145 = (((x801*x802)!=x803)==x804);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x805 = -1;
	volatile int32_t x807 = INT32_MIN;
	int16_t x808 = -1;

    t146 = (((x805*x806)!=x807)==x808);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x809 = UINT16_MAX;
	uint64_t x810 = UINT64_MAX;
	int16_t x812 = INT16_MAX;
	int32_t t147 = 1030957039;

    t147 = (((x809*x810)!=x811)==x812);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x813 = INT16_MAX;
	uint16_t x814 = 95U;
	volatile int64_t x816 = INT64_MIN;
	volatile int32_t t148 = -491194278;

    t148 = (((x813*x814)!=x815)==x816);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x821 = 490495818U;
	volatile uint64_t x822 = UINT64_MAX;
	int32_t t149 = -955418;

    t149 = (((x821*x822)!=x823)==x824);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x825 = INT8_MIN;
	static int64_t x826 = 8LL;
	int8_t x827 = -1;
	volatile int32_t t150 = 197993742;

    t150 = (((x825*x826)!=x827)==x828);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x833 = 4;
	uint32_t x834 = UINT32_MAX;
	int32_t x835 = INT32_MAX;
	int32_t t151 = 2580;

    t151 = (((x833*x834)!=x835)==x836);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x837 = 65U;
	static volatile int8_t x838 = INT8_MIN;
	int16_t x839 = INT16_MIN;
	static int32_t x840 = -1;
	int32_t t152 = 14405932;

    t152 = (((x837*x838)!=x839)==x840);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x841 = 0;
	uint8_t x842 = UINT8_MAX;
	uint16_t x843 = UINT16_MAX;
	int32_t x844 = 4001302;
	int32_t t153 = -73;

    t153 = (((x841*x842)!=x843)==x844);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x853 = -11;
	int16_t x854 = INT16_MIN;
	int16_t x855 = 0;
	int8_t x856 = 38;
	volatile int32_t t154 = 10;

    t154 = (((x853*x854)!=x855)==x856);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x858 = 13541960747641749LLU;
	uint8_t x859 = 0U;
	int16_t x860 = INT16_MAX;

    t155 = (((x857*x858)!=x859)==x860);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x862 = 9251;
	uint16_t x863 = 160U;
	volatile int32_t t156 = 450382;

    t156 = (((x861*x862)!=x863)==x864);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x865 = 13U;
	int32_t x867 = -478;
	static uint64_t x868 = UINT64_MAX;
	static volatile int32_t t157 = 183;

    t157 = (((x865*x866)!=x867)==x868);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x869 = UINT32_MAX;
	uint8_t x870 = 13U;
	int16_t x871 = 0;
	static uint16_t x872 = UINT16_MAX;
	volatile int32_t t158 = 255876613;

    t158 = (((x869*x870)!=x871)==x872);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x877 = INT16_MIN;
	static int32_t x878 = -1;
	static int16_t x879 = INT16_MIN;
	int64_t x880 = INT64_MIN;
	static volatile int32_t t159 = 66902492;

    t159 = (((x877*x878)!=x879)==x880);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x881 = UINT32_MAX;
	int8_t x882 = -1;
	static int16_t x883 = INT16_MIN;
	static uint32_t x884 = 1982101U;
	volatile int32_t t160 = 16447997;

    t160 = (((x881*x882)!=x883)==x884);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x886 = INT16_MAX;
	volatile int16_t x888 = -24;
	volatile int32_t t161 = 14;

    t161 = (((x885*x886)!=x887)==x888);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x897 = 264U;
	int16_t x898 = INT16_MIN;
	int32_t x899 = -7;
	int64_t x900 = INT64_MIN;

    t162 = (((x897*x898)!=x899)==x900);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x901 = -1;
	uint16_t x903 = UINT16_MAX;
	volatile uint16_t x904 = 496U;
	volatile int32_t t163 = 0;

    t163 = (((x901*x902)!=x903)==x904);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x905 = -1;
	uint8_t x906 = 1U;
	int32_t x907 = 236197;
	uint64_t x908 = 247533475833981451LLU;

    t164 = (((x905*x906)!=x907)==x908);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x913 = -1;
	static volatile int64_t x914 = -474560716194187LL;
	int32_t x915 = -1;
	volatile int8_t x916 = INT8_MIN;

    t165 = (((x913*x914)!=x915)==x916);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x917 = 9U;
	volatile uint32_t x918 = 589U;
	uint8_t x919 = 0U;
	volatile uint8_t x920 = 8U;
	static int32_t t166 = 34239813;

    t166 = (((x917*x918)!=x919)==x920);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x925 = INT8_MAX;
	uint32_t x926 = 38978U;
	int32_t x927 = 312688;
	uint16_t x928 = UINT16_MAX;
	static volatile int32_t t167 = 7842;

    t167 = (((x925*x926)!=x927)==x928);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x929 = 7U;
	volatile uint32_t x930 = 5997U;
	uint8_t x931 = UINT8_MAX;
	int8_t x932 = -1;
	volatile int32_t t168 = -1;

    t168 = (((x929*x930)!=x931)==x932);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x933 = UINT64_MAX;
	uint64_t x934 = 1990709551LLU;
	int16_t x935 = INT16_MAX;
	static int32_t t169 = -120541;

    t169 = (((x933*x934)!=x935)==x936);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x937 = -1;
	volatile uint64_t x938 = 110156440021LLU;
	int64_t x939 = 3757589144084LL;
	uint8_t x940 = 4U;
	int32_t t170 = -81021;

    t170 = (((x937*x938)!=x939)==x940);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x941 = INT8_MIN;
	int16_t x943 = INT16_MAX;
	volatile int32_t t171 = 30955;

    t171 = (((x941*x942)!=x943)==x944);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x945 = 4U;
	volatile uint8_t x946 = UINT8_MAX;
	uint32_t x947 = 16541689U;
	static uint8_t x948 = 1U;

    t172 = (((x945*x946)!=x947)==x948);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x949 = INT16_MIN;
	static int64_t x950 = 15175357LL;
	uint64_t x952 = 6287LLU;

    t173 = (((x949*x950)!=x951)==x952);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x953 = -1;
	static uint64_t x954 = 814LLU;
	volatile int64_t x955 = -527115266891244LL;
	volatile int64_t x956 = INT64_MIN;
	int32_t t174 = 16654;

    t174 = (((x953*x954)!=x955)==x956);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x957 = INT16_MAX;
	int64_t x958 = -192716LL;
	uint64_t x959 = 642751554241451720LLU;
	uint16_t x960 = UINT16_MAX;
	volatile int32_t t175 = 44155326;

    t175 = (((x957*x958)!=x959)==x960);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x961 = -488009406158950973LL;
	uint64_t x962 = UINT64_MAX;
	uint8_t x963 = 2U;
	uint8_t x964 = UINT8_MAX;

    t176 = (((x961*x962)!=x963)==x964);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x965 = 25U;
	static int8_t x966 = INT8_MIN;
	uint16_t x967 = 112U;
	int64_t x968 = INT64_MAX;
	volatile int32_t t177 = -2506;

    t177 = (((x965*x966)!=x967)==x968);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x969 = -1;
	int16_t x970 = INT16_MIN;
	uint64_t x971 = 296153LLU;
	int8_t x972 = -1;

    t178 = (((x969*x970)!=x971)==x972);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x973 = INT16_MIN;
	int16_t x974 = -1;
	int64_t x975 = -286167836272LL;
	int16_t x976 = -1;
	volatile int32_t t179 = 451645;

    t179 = (((x973*x974)!=x975)==x976);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x977 = INT32_MIN;
	int64_t x978 = -1447655LL;
	uint8_t x980 = 20U;
	static volatile int32_t t180 = 4;

    t180 = (((x977*x978)!=x979)==x980);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x982 = INT16_MIN;
	int16_t x983 = INT16_MIN;
	int32_t t181 = -5704463;

    t181 = (((x981*x982)!=x983)==x984);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x993 = 180340LL;
	static int8_t x994 = INT8_MIN;
	int32_t x996 = INT32_MAX;
	int32_t t182 = -281;

    t182 = (((x993*x994)!=x995)==x996);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x997 = INT16_MAX;
	uint16_t x998 = UINT16_MAX;
	static uint32_t x999 = UINT32_MAX;
	volatile int32_t x1000 = 1;
	int32_t t183 = 946893;

    t183 = (((x997*x998)!=x999)==x1000);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1001 = 7U;
	volatile int64_t x1002 = -1LL;
	volatile int8_t x1003 = INT8_MIN;
	volatile uint64_t x1004 = UINT64_MAX;
	int32_t t184 = 34268791;

    t184 = (((x1001*x1002)!=x1003)==x1004);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1005 = 260892552400LLU;
	int8_t x1006 = INT8_MIN;
	volatile int16_t x1007 = INT16_MIN;
	static uint16_t x1008 = 10921U;

    t185 = (((x1005*x1006)!=x1007)==x1008);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1009 = INT16_MAX;
	uint8_t x1010 = UINT8_MAX;
	static volatile int16_t x1011 = INT16_MIN;
	int64_t x1012 = INT64_MAX;

    t186 = (((x1009*x1010)!=x1011)==x1012);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1014 = -1;
	int64_t x1016 = -1LL;
	volatile int32_t t187 = 1998;

    t187 = (((x1013*x1014)!=x1015)==x1016);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1017 = UINT32_MAX;
	int32_t t188 = 418;

    t188 = (((x1017*x1018)!=x1019)==x1020);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1021 = 11;
	int16_t x1022 = INT16_MAX;
	int32_t x1023 = -1;
	static volatile int32_t t189 = -104841434;

    t189 = (((x1021*x1022)!=x1023)==x1024);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1025 = INT16_MIN;
	int16_t x1026 = INT16_MAX;
	uint16_t x1027 = 1628U;
	uint16_t x1028 = UINT16_MAX;
	int32_t t190 = 297845691;

    t190 = (((x1025*x1026)!=x1027)==x1028);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x1029 = -1LL;
	volatile int16_t x1030 = -25;
	int32_t x1031 = INT32_MAX;
	static int8_t x1032 = INT8_MIN;

    t191 = (((x1029*x1030)!=x1031)==x1032);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x1034 = -7831LL;
	static int16_t x1035 = -1;
	static int16_t x1036 = -1;
	int32_t t192 = 15;

    t192 = (((x1033*x1034)!=x1035)==x1036);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1037 = UINT16_MAX;
	volatile uint8_t x1038 = 3U;
	volatile int8_t x1039 = -1;
	static volatile int32_t t193 = 18395;

    t193 = (((x1037*x1038)!=x1039)==x1040);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1041 = -1;
	int8_t x1042 = INT8_MAX;
	volatile int8_t x1044 = 14;
	int32_t t194 = -217;

    t194 = (((x1041*x1042)!=x1043)==x1044);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1045 = 1067983087254561736LLU;
	int32_t x1047 = INT32_MIN;
	static volatile int32_t t195 = -80276;

    t195 = (((x1045*x1046)!=x1047)==x1048);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1053 = 1U;
	int8_t x1054 = 46;
	volatile uint64_t x1055 = UINT64_MAX;
	int64_t x1056 = -1LL;
	volatile int32_t t196 = 900388;

    t196 = (((x1053*x1054)!=x1055)==x1056);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1058 = INT8_MAX;
	static volatile uint64_t x1060 = 1761670613349312LLU;
	volatile int32_t t197 = -3820571;

    t197 = (((x1057*x1058)!=x1059)==x1060);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1065 = UINT16_MAX;
	int8_t x1067 = -1;
	int32_t x1068 = INT32_MIN;
	volatile int32_t t198 = -96018;

    t198 = (((x1065*x1066)!=x1067)==x1068);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1069 = UINT32_MAX;
	int8_t x1070 = INT8_MIN;
	volatile int32_t x1071 = 0;
	volatile int32_t t199 = -4623;

    t199 = (((x1069*x1070)!=x1071)==x1072);

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

