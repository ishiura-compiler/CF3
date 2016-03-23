
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

static int32_t x25 = 663;
int32_t t1 = 41996962;
volatile int32_t t2 = -29;
int64_t x57 = INT64_MAX;
int16_t x154 = INT16_MIN;
uint16_t x156 = 16U;
int32_t t6 = 239634766;
int8_t x187 = INT8_MAX;
int8_t x197 = INT8_MIN;
int8_t x198 = -1;
uint8_t x216 = 2U;
volatile int32_t t9 = -86050553;
volatile int64_t x302 = -1LL;
int8_t x303 = -1;
int32_t t10 = 0;
int8_t x372 = 5;
int8_t x385 = INT8_MIN;
static uint64_t x409 = 58LLU;
uint64_t x614 = UINT64_MAX;
int8_t x615 = INT8_MIN;
static volatile int32_t t18 = 1;
int8_t x676 = 4;
static uint8_t x712 = 15U;
int16_t x763 = INT16_MAX;
volatile int8_t x764 = 1;
int32_t x793 = INT32_MIN;
volatile int64_t x795 = INT64_MIN;
uint32_t x800 = 4U;
int16_t x843 = -3;
uint8_t x864 = 9U;
static volatile uint8_t x869 = UINT8_MAX;
volatile uint32_t x962 = 130U;
int16_t x988 = 3;
int64_t x1006 = INT64_MIN;
volatile int32_t x1007 = INT32_MAX;
int64_t x1037 = INT64_MIN;
static volatile int16_t x1038 = INT16_MAX;
int32_t x1039 = INT32_MIN;
static int64_t x1061 = INT64_MAX;
uint8_t x1064 = 0U;
int32_t t34 = 241;
int8_t x1152 = 3;
uint16_t x1176 = 1U;
int32_t x1309 = -870;
static uint16_t x1310 = 3723U;
static volatile int32_t t38 = 0;
uint16_t x1328 = 0U;
int8_t x1388 = 0;
uint8_t x1392 = 2U;
static int64_t x1447 = -49LL;
int8_t x1459 = -9;
uint8_t x1460 = 3U;
volatile int32_t t45 = -364157059;
static uint8_t x1480 = 4U;
int32_t x1526 = INT32_MIN;
uint16_t x1527 = 16264U;
volatile int32_t x1594 = INT32_MIN;
static int8_t x1595 = 43;
int32_t t48 = -130111;
uint64_t x1629 = UINT64_MAX;
int8_t x1632 = 1;
int64_t x1699 = INT64_MIN;
uint64_t x1801 = UINT64_MAX;
uint32_t x1876 = 11U;
uint8_t x2024 = 0U;
static volatile int32_t t60 = -48601;
static volatile int32_t t61 = 422;
volatile uint16_t x2152 = 1U;
int64_t x2279 = -1LL;
uint16_t x2280 = 2U;
volatile int32_t t66 = -30526304;
static uint16_t x2495 = UINT16_MAX;
volatile uint16_t x2506 = 654U;
uint64_t x2507 = 6460LLU;
int32_t t71 = 10864471;
int32_t x2540 = 0;
int8_t x2584 = 2;
uint8_t x2619 = 3U;
volatile int64_t x2675 = -1LL;
uint8_t x2676 = 11U;
volatile int16_t x2697 = INT16_MIN;
int32_t x2698 = INT32_MIN;
static volatile int32_t x2718 = INT32_MAX;
volatile int32_t t78 = 7047;
int64_t x2725 = -42LL;
int16_t x2745 = -13650;
static int8_t x2747 = 0;
volatile int32_t t81 = 2161;
int32_t x2765 = -579229401;
int32_t x2766 = -1;
static volatile int8_t x2772 = 0;
int32_t t83 = -35;
int16_t x2822 = -449;
int8_t x2837 = INT8_MIN;
volatile uint32_t x2839 = UINT32_MAX;
int32_t t88 = 374;
uint32_t x2878 = 76959772U;
uint8_t x2880 = 2U;
static int8_t x2905 = -1;
int16_t x2909 = INT16_MIN;
int64_t x2911 = INT64_MIN;
uint16_t x2988 = 5U;
int32_t t95 = 226474411;
int8_t x3067 = INT8_MIN;
uint16_t x3068 = 0U;
int8_t x3083 = 2;
static int32_t x3084 = 6;
int8_t x3216 = 8;
int8_t x3224 = 24;
int32_t t101 = 403331;
int8_t x3238 = 0;
uint8_t x3357 = 2U;
volatile int64_t x3402 = -42657767798654805LL;
int8_t x3403 = INT8_MIN;
volatile uint8_t x3404 = 3U;
volatile int32_t t106 = -30929;
uint64_t x3445 = 67704087LLU;
static uint64_t x3447 = 159LLU;
volatile int8_t x3466 = -1;
uint32_t x3493 = UINT32_MAX;
uint16_t x3516 = 28U;
int16_t x3566 = -38;
int64_t x3598 = INT64_MIN;
static uint16_t x3600 = 7U;
volatile int32_t t117 = -1;
int32_t x3697 = -135;
uint64_t x3700 = 13LLU;
uint32_t x3737 = UINT32_MAX;
static volatile int32_t t119 = 10414;
uint8_t x3771 = 3U;
int8_t x3772 = 13;
volatile int64_t x3789 = -68166317399929LL;
int64_t x3790 = INT64_MIN;
volatile int32_t t123 = 1;
volatile int32_t x3795 = -24694988;
uint16_t x3829 = 1002U;
int32_t x3831 = INT32_MIN;
static uint64_t x3840 = 3LLU;
volatile uint8_t x3876 = 2U;
uint8_t x3893 = UINT8_MAX;
int64_t x3929 = -279LL;
uint8_t x3931 = UINT8_MAX;
uint8_t x3954 = 1U;
static volatile int32_t t134 = 2;
uint8_t x4129 = UINT8_MAX;
volatile int16_t x4130 = -1;
int64_t x4131 = INT64_MIN;
uint64_t x4168 = 30LLU;
volatile int32_t t136 = 33;
int32_t x4181 = 5;
int32_t t137 = 1;
int32_t t138 = 5;
int8_t x4213 = 1;
int32_t x4216 = 0;
volatile uint16_t x4347 = UINT16_MAX;
uint8_t x4348 = 9U;
int32_t t141 = -25200;
static int8_t x4457 = INT8_MAX;
volatile int32_t t144 = 2;
volatile int32_t x4575 = INT32_MAX;
static int16_t x4630 = INT16_MIN;
int8_t x4658 = 8;
uint8_t x4674 = 96U;
int8_t x4675 = -15;
int16_t x4676 = 1;
int32_t x4741 = -197804;
int8_t x4807 = -1;
static volatile uint32_t x4822 = 3U;
volatile int16_t x4826 = INT16_MIN;
int8_t x4946 = 1;
volatile uint32_t x5197 = 2259223U;
int16_t x5225 = -1;
int16_t x5226 = -1;
int32_t t161 = -1397122;
int32_t x5265 = -1;
volatile int32_t t164 = 1018777;
int16_t x5327 = INT16_MIN;
volatile int32_t t166 = -143748;
volatile int64_t x5357 = 337968LL;
int8_t x5360 = 1;
volatile int8_t x5364 = 1;
uint16_t x5389 = UINT16_MAX;
int16_t x5394 = -31;
volatile uint32_t x5399 = UINT32_MAX;
int64_t x5401 = 9451250LL;
int64_t x5402 = INT64_MIN;
volatile int8_t x5417 = -1;
int8_t x5420 = 23;
volatile int16_t x5435 = INT16_MIN;
uint8_t x5436 = 3U;
uint8_t x5549 = UINT8_MAX;
int16_t x5551 = -19;
volatile int8_t x5552 = 4;
int16_t x5553 = INT16_MIN;
volatile int8_t x5555 = INT8_MIN;
int8_t x5575 = INT8_MIN;
int32_t t181 = 246242;
int64_t x5597 = -1LL;
int64_t x5599 = 153062LL;
int16_t x5600 = 8;
volatile int32_t t182 = -7258737;
int32_t t184 = -27;
int64_t x5722 = -1LL;
uint64_t x5723 = UINT64_MAX;
int16_t x5799 = 20;
volatile int32_t t190 = -19;
static int8_t x5889 = 32;
int16_t x5890 = INT16_MIN;
volatile int64_t x5899 = 15669841977826LL;
int32_t t194 = 5052422;
static int16_t x6039 = -1;
int32_t x6070 = INT32_MIN;
int8_t x6072 = 0;
volatile uint64_t x6161 = 175597347482LLU;
int32_t x6162 = INT32_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile uint8_t x2 = 103U;
	int64_t x3 = INT64_MAX;
	uint8_t x4 = 0U;
	volatile int32_t t0 = -4;

    t0 = (((x1|x2)!=x3)<<x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x26 = 252766;
	uint8_t x27 = 4U;
	static volatile int8_t x28 = 0;

    t1 = (((x25|x26)!=x27)<<x28);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x45 = UINT32_MAX;
	static uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MAX;
	static uint8_t x48 = 1U;

    t2 = (((x45|x46)!=x47)<<x48);

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x58 = INT8_MAX;
	uint16_t x59 = 4U;
	uint16_t x60 = 0U;
	static volatile int32_t t3 = -97309;

    t3 = (((x57|x58)!=x59)<<x60);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x153 = INT64_MAX;
	volatile uint8_t x155 = 28U;
	static volatile int32_t t4 = -22607382;

    t4 = (((x153|x154)!=x155)<<x156);

    if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x165 = -1;
	static int64_t x166 = -1LL;
	uint8_t x167 = 31U;
	int8_t x168 = 1;
	static int32_t t5 = 2762;

    t5 = (((x165|x166)!=x167)<<x168);

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x169 = -3;
	int8_t x170 = -7;
	static volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = 1U;

    t6 = (((x169|x170)!=x171)<<x172);

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x185 = UINT16_MAX;
	int16_t x186 = INT16_MIN;
	volatile uint8_t x188 = 27U;
	int32_t t7 = 0;

    t7 = (((x185|x186)!=x187)<<x188);

    if (t7 != 134217728) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x199 = 11939064321LLU;
	uint64_t x200 = 1LLU;
	static volatile int32_t t8 = -207242140;

    t8 = (((x197|x198)!=x199)<<x200);

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x213 = 3U;
	uint16_t x214 = 7683U;
	static uint8_t x215 = 2U;

    t9 = (((x213|x214)!=x215)<<x216);

    if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x301 = 6;
	uint8_t x304 = 3U;

    t10 = (((x301|x302)!=x303)<<x304);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x369 = -1;
	int32_t x370 = INT32_MIN;
	int16_t x371 = -2;
	volatile int32_t t11 = 0;

    t11 = (((x369|x370)!=x371)<<x372);

    if (t11 != 32) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x386 = INT16_MIN;
	int8_t x387 = 4;
	uint16_t x388 = 3U;
	int32_t t12 = 7737139;

    t12 = (((x385|x386)!=x387)<<x388);

    if (t12 != 8) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x393 = INT64_MAX;
	volatile int32_t x394 = INT32_MIN;
	volatile uint16_t x395 = 890U;
	int8_t x396 = 6;
	static volatile int32_t t13 = 0;

    t13 = (((x393|x394)!=x395)<<x396);

    if (t13 != 64) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x410 = 7U;
	volatile int16_t x411 = INT16_MAX;
	uint8_t x412 = 18U;
	int32_t t14 = -18479637;

    t14 = (((x409|x410)!=x411)<<x412);

    if (t14 != 262144) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x437 = INT64_MIN;
	static uint8_t x438 = UINT8_MAX;
	uint32_t x439 = 1854U;
	uint8_t x440 = 5U;
	volatile int32_t t15 = 734399286;

    t15 = (((x437|x438)!=x439)<<x440);

    if (t15 != 32) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x457 = INT16_MIN;
	int64_t x458 = 9434LL;
	int16_t x459 = INT16_MIN;
	int8_t x460 = 3;
	volatile int32_t t16 = 0;

    t16 = (((x457|x458)!=x459)<<x460);

    if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x493 = 0U;
	int16_t x494 = 2;
	int16_t x495 = INT16_MIN;
	uint16_t x496 = 2U;
	int32_t t17 = -27966;

    t17 = (((x493|x494)!=x495)<<x496);

    if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x613 = -1;
	uint32_t x616 = 14U;

    t18 = (((x613|x614)!=x615)<<x616);

    if (t18 != 16384) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x669 = -63255071;
	int64_t x670 = -1LL;
	uint32_t x671 = 125478U;
	int8_t x672 = 4;
	volatile int32_t t19 = 9460;

    t19 = (((x669|x670)!=x671)<<x672);

    if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x673 = -1;
	static volatile int64_t x674 = 103003379565248LL;
	volatile int16_t x675 = INT16_MIN;
	int32_t t20 = -804381;

    t20 = (((x673|x674)!=x675)<<x676);

    if (t20 != 16) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x709 = UINT16_MAX;
	int32_t x710 = INT32_MAX;
	uint8_t x711 = 9U;
	static volatile int32_t t21 = 1;

    t21 = (((x709|x710)!=x711)<<x712);

    if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x761 = -4569328;
	static volatile uint16_t x762 = UINT16_MAX;
	volatile int32_t t22 = -5;

    t22 = (((x761|x762)!=x763)<<x764);

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x794 = INT16_MAX;
	int32_t x796 = 0;
	volatile int32_t t23 = -15;

    t23 = (((x793|x794)!=x795)<<x796);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x797 = 1437120895U;
	int8_t x798 = -1;
	int16_t x799 = -1;
	volatile int32_t t24 = 27862;

    t24 = (((x797|x798)!=x799)<<x800);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x841 = INT16_MIN;
	int16_t x842 = INT16_MIN;
	volatile uint8_t x844 = 16U;
	int32_t t25 = -46;

    t25 = (((x841|x842)!=x843)<<x844);

    if (t25 != 65536) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x861 = -211097990LL;
	int32_t x862 = INT32_MIN;
	uint16_t x863 = UINT16_MAX;
	static int32_t t26 = -52805;

    t26 = (((x861|x862)!=x863)<<x864);

    if (t26 != 512) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x870 = 16339466U;
	volatile int64_t x871 = -176LL;
	uint16_t x872 = 1U;
	volatile int32_t t27 = 345903;

    t27 = (((x869|x870)!=x871)<<x872);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x961 = INT32_MAX;
	uint16_t x963 = 29U;
	uint8_t x964 = 6U;
	static volatile int32_t t28 = -6;

    t28 = (((x961|x962)!=x963)<<x964);

    if (t28 != 64) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x985 = -43;
	int8_t x986 = 0;
	static uint8_t x987 = 6U;
	volatile int32_t t29 = 1;

    t29 = (((x985|x986)!=x987)<<x988);

    if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1005 = 3U;
	int16_t x1008 = 1;
	int32_t t30 = 11;

    t30 = (((x1005|x1006)!=x1007)<<x1008);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x1040 = 29U;
	int32_t t31 = 104457;

    t31 = (((x1037|x1038)!=x1039)<<x1040);

    if (t31 != 536870912) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x1062 = 9U;
	int32_t x1063 = 56474;
	int32_t t32 = 7033791;

    t32 = (((x1061|x1062)!=x1063)<<x1064);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1105 = 0U;
	volatile int64_t x1106 = INT64_MIN;
	static int8_t x1107 = -1;
	uint32_t x1108 = 9U;
	int32_t t33 = -23099;

    t33 = (((x1105|x1106)!=x1107)<<x1108);

    if (t33 != 512) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x1133 = UINT16_MAX;
	int64_t x1134 = 154667159763788LL;
	int64_t x1135 = INT64_MIN;
	int8_t x1136 = 29;

    t34 = (((x1133|x1134)!=x1135)<<x1136);

    if (t34 != 536870912) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1149 = 7U;
	int64_t x1150 = INT64_MIN;
	int64_t x1151 = -1LL;
	volatile int32_t t35 = 543;

    t35 = (((x1149|x1150)!=x1151)<<x1152);

    if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x1173 = INT32_MIN;
	int32_t x1174 = INT32_MIN;
	int32_t x1175 = INT32_MIN;
	volatile int32_t t36 = 377334;

    t36 = (((x1173|x1174)!=x1175)<<x1176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x1193 = INT32_MIN;
	int8_t x1194 = INT8_MIN;
	int32_t x1195 = INT32_MIN;
	volatile uint32_t x1196 = 18U;
	volatile int32_t t37 = 37321;

    t37 = (((x1193|x1194)!=x1195)<<x1196);

    if (t37 != 262144) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x1311 = 20440U;
	int16_t x1312 = 25;

    t38 = (((x1309|x1310)!=x1311)<<x1312);

    if (t38 != 33554432) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x1325 = INT8_MAX;
	static uint8_t x1326 = 23U;
	volatile int64_t x1327 = INT64_MIN;
	volatile int32_t t39 = -646;

    t39 = (((x1325|x1326)!=x1327)<<x1328);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x1329 = INT16_MIN;
	int16_t x1330 = -1;
	volatile uint32_t x1331 = 1726U;
	volatile uint32_t x1332 = 0U;
	volatile int32_t t40 = -1;

    t40 = (((x1329|x1330)!=x1331)<<x1332);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x1385 = 6U;
	uint16_t x1386 = 615U;
	static volatile int8_t x1387 = -1;
	int32_t t41 = 291235170;

    t41 = (((x1385|x1386)!=x1387)<<x1388);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x1389 = UINT32_MAX;
	volatile uint32_t x1390 = UINT32_MAX;
	int8_t x1391 = -1;
	volatile int32_t t42 = -926;

    t42 = (((x1389|x1390)!=x1391)<<x1392);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x1413 = -1;
	int32_t x1414 = INT32_MIN;
	volatile uint32_t x1415 = 4U;
	volatile uint8_t x1416 = 1U;
	int32_t t43 = 2;

    t43 = (((x1413|x1414)!=x1415)<<x1416);

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x1445 = 144404973759154850LL;
	int8_t x1446 = 0;
	static volatile uint32_t x1448 = 5U;
	volatile int32_t t44 = -986028;

    t44 = (((x1445|x1446)!=x1447)<<x1448);

    if (t44 != 32) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x1457 = -328;
	static volatile uint64_t x1458 = 55372313873926730LLU;

    t45 = (((x1457|x1458)!=x1459)<<x1460);

    if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x1477 = UINT64_MAX;
	uint8_t x1478 = 1U;
	volatile uint8_t x1479 = UINT8_MAX;
	int32_t t46 = 89807567;

    t46 = (((x1477|x1478)!=x1479)<<x1480);

    if (t46 != 16) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x1525 = 1U;
	uint8_t x1528 = 11U;
	volatile int32_t t47 = -68279015;

    t47 = (((x1525|x1526)!=x1527)<<x1528);

    if (t47 != 2048) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x1593 = INT32_MIN;
	volatile int32_t x1596 = 0;

    t48 = (((x1593|x1594)!=x1595)<<x1596);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint64_t x1630 = UINT64_MAX;
	uint8_t x1631 = 10U;
	static int32_t t49 = -758;

    t49 = (((x1629|x1630)!=x1631)<<x1632);

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x1661 = UINT16_MAX;
	int32_t x1662 = INT32_MAX;
	int16_t x1663 = 1404;
	static uint8_t x1664 = 3U;
	volatile int32_t t50 = 9143584;

    t50 = (((x1661|x1662)!=x1663)<<x1664);

    if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1673 = 11;
	static int8_t x1674 = -1;
	int64_t x1675 = INT64_MIN;
	uint64_t x1676 = 30LLU;
	static volatile int32_t t51 = 154;

    t51 = (((x1673|x1674)!=x1675)<<x1676);

    if (t51 != 1073741824) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1697 = INT16_MIN;
	static uint8_t x1698 = UINT8_MAX;
	static volatile uint8_t x1700 = 26U;
	volatile int32_t t52 = 814;

    t52 = (((x1697|x1698)!=x1699)<<x1700);

    if (t52 != 67108864) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x1725 = UINT8_MAX;
	static volatile int8_t x1726 = INT8_MAX;
	static int16_t x1727 = -1;
	int64_t x1728 = 1LL;
	volatile int32_t t53 = -860498;

    t53 = (((x1725|x1726)!=x1727)<<x1728);

    if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x1769 = -1;
	uint8_t x1770 = 13U;
	static uint32_t x1771 = 12U;
	static uint16_t x1772 = 1U;
	int32_t t54 = -1;

    t54 = (((x1769|x1770)!=x1771)<<x1772);

    if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1802 = 7U;
	static uint32_t x1803 = UINT32_MAX;
	static volatile uint16_t x1804 = 0U;
	static volatile int32_t t55 = -518894;

    t55 = (((x1801|x1802)!=x1803)<<x1804);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x1873 = -5;
	volatile uint64_t x1874 = UINT64_MAX;
	int32_t x1875 = INT32_MIN;
	volatile int32_t t56 = -57040447;

    t56 = (((x1873|x1874)!=x1875)<<x1876);

    if (t56 != 2048) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x1957 = INT64_MIN;
	int64_t x1958 = INT64_MIN;
	uint64_t x1959 = 0LLU;
	volatile int16_t x1960 = 0;
	int32_t t57 = -1;

    t57 = (((x1957|x1958)!=x1959)<<x1960);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x1977 = INT32_MIN;
	int32_t x1978 = -389296;
	int16_t x1979 = -1;
	int8_t x1980 = 1;
	int32_t t58 = -420;

    t58 = (((x1977|x1978)!=x1979)<<x1980);

    if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x2013 = INT8_MIN;
	int64_t x2014 = 259190LL;
	int8_t x2015 = INT8_MIN;
	uint8_t x2016 = 0U;
	int32_t t59 = 713;

    t59 = (((x2013|x2014)!=x2015)<<x2016);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x2021 = -3;
	int32_t x2022 = -3054185;
	static int8_t x2023 = INT8_MIN;

    t60 = (((x2021|x2022)!=x2023)<<x2024);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x2045 = -69;
	int8_t x2046 = INT8_MAX;
	static volatile uint8_t x2047 = UINT8_MAX;
	int8_t x2048 = 3;

    t61 = (((x2045|x2046)!=x2047)<<x2048);

    if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x2097 = INT32_MIN;
	int8_t x2098 = -1;
	int64_t x2099 = -1LL;
	volatile uint16_t x2100 = 0U;
	static int32_t t62 = 66;

    t62 = (((x2097|x2098)!=x2099)<<x2100);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x2149 = -895;
	static int64_t x2150 = -46342988713780177LL;
	int32_t x2151 = 11915;
	volatile int32_t t63 = 56695;

    t63 = (((x2149|x2150)!=x2151)<<x2152);

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x2273 = UINT64_MAX;
	uint8_t x2274 = 5U;
	uint64_t x2275 = 94881LLU;
	int8_t x2276 = 1;
	volatile int32_t t64 = -18;

    t64 = (((x2273|x2274)!=x2275)<<x2276);

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x2277 = INT64_MIN;
	static uint64_t x2278 = UINT64_MAX;
	int32_t t65 = 116224;

    t65 = (((x2277|x2278)!=x2279)<<x2280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x2309 = -477042040;
	int32_t x2310 = INT32_MAX;
	int8_t x2311 = 1;
	uint16_t x2312 = 2U;

    t66 = (((x2309|x2310)!=x2311)<<x2312);

    if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x2389 = -1;
	int8_t x2390 = 0;
	volatile int16_t x2391 = INT16_MAX;
	int8_t x2392 = 0;
	int32_t t67 = -6;

    t67 = (((x2389|x2390)!=x2391)<<x2392);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x2481 = -741;
	int8_t x2482 = INT8_MIN;
	static uint64_t x2483 = 434973718733LLU;
	volatile uint32_t x2484 = 2U;
	static volatile int32_t t68 = 0;

    t68 = (((x2481|x2482)!=x2483)<<x2484);

    if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2493 = -18020LL;
	uint32_t x2494 = UINT32_MAX;
	static int8_t x2496 = 1;
	int32_t t69 = -104;

    t69 = (((x2493|x2494)!=x2495)<<x2496);

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x2505 = INT64_MAX;
	int64_t x2508 = 3LL;
	volatile int32_t t70 = 4553573;

    t70 = (((x2505|x2506)!=x2507)<<x2508);

    if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2509 = INT8_MAX;
	int16_t x2510 = -4;
	volatile int64_t x2511 = -443290053605343620LL;
	uint8_t x2512 = 1U;

    t71 = (((x2509|x2510)!=x2511)<<x2512);

    if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2537 = -3;
	static int64_t x2538 = INT64_MIN;
	int16_t x2539 = -1;
	volatile int32_t t72 = -5657;

    t72 = (((x2537|x2538)!=x2539)<<x2540);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x2581 = 244U;
	static uint16_t x2582 = 13061U;
	static uint32_t x2583 = 3U;
	int32_t t73 = -5386985;

    t73 = (((x2581|x2582)!=x2583)<<x2584);

    if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x2617 = INT32_MIN;
	uint64_t x2618 = 31LLU;
	uint32_t x2620 = 3U;
	int32_t t74 = 8;

    t74 = (((x2617|x2618)!=x2619)<<x2620);

    if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x2621 = INT32_MAX;
	volatile int16_t x2622 = INT16_MAX;
	volatile int32_t x2623 = INT32_MAX;
	static int8_t x2624 = 1;
	volatile int32_t t75 = 73;

    t75 = (((x2621|x2622)!=x2623)<<x2624);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x2673 = -1;
	int32_t x2674 = 474;
	volatile int32_t t76 = 34582;

    t76 = (((x2673|x2674)!=x2675)<<x2676);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x2699 = UINT8_MAX;
	static int8_t x2700 = 29;
	static int32_t t77 = -17525;

    t77 = (((x2697|x2698)!=x2699)<<x2700);

    if (t77 != 536870912) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x2717 = 299863831U;
	volatile int16_t x2719 = INT16_MIN;
	int16_t x2720 = 1;

    t78 = (((x2717|x2718)!=x2719)<<x2720);

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x2726 = 1596951U;
	int8_t x2727 = 13;
	uint8_t x2728 = 2U;
	volatile int32_t t79 = 1906;

    t79 = (((x2725|x2726)!=x2727)<<x2728);

    if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x2741 = UINT64_MAX;
	int32_t x2742 = INT32_MAX;
	int8_t x2743 = INT8_MIN;
	uint8_t x2744 = 3U;
	int32_t t80 = 0;

    t80 = (((x2741|x2742)!=x2743)<<x2744);

    if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x2746 = INT16_MAX;
	uint8_t x2748 = 4U;

    t81 = (((x2745|x2746)!=x2747)<<x2748);

    if (t81 != 16) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x2767 = -30;
	volatile uint16_t x2768 = 4U;
	volatile int32_t t82 = 24096530;

    t82 = (((x2765|x2766)!=x2767)<<x2768);

    if (t82 != 16) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2769 = INT16_MAX;
	volatile int16_t x2770 = INT16_MIN;
	int32_t x2771 = INT32_MIN;

    t83 = (((x2769|x2770)!=x2771)<<x2772);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x2785 = 1601682105LLU;
	int8_t x2786 = INT8_MAX;
	uint16_t x2787 = 8056U;
	volatile int16_t x2788 = 1;
	volatile int32_t t84 = 1422532;

    t84 = (((x2785|x2786)!=x2787)<<x2788);

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x2821 = 385U;
	uint32_t x2823 = 1476U;
	uint8_t x2824 = 7U;
	int32_t t85 = -16356;

    t85 = (((x2821|x2822)!=x2823)<<x2824);

    if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x2833 = INT64_MIN;
	volatile int32_t x2834 = INT32_MIN;
	static uint64_t x2835 = 1973532162LLU;
	uint8_t x2836 = 23U;
	volatile int32_t t86 = 15754210;

    t86 = (((x2833|x2834)!=x2835)<<x2836);

    if (t86 != 8388608) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x2838 = INT64_MIN;
	volatile int8_t x2840 = 0;
	volatile int32_t t87 = -64393;

    t87 = (((x2837|x2838)!=x2839)<<x2840);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x2841 = INT32_MAX;
	int64_t x2842 = INT64_MIN;
	int8_t x2843 = -1;
	uint16_t x2844 = 2U;

    t88 = (((x2841|x2842)!=x2843)<<x2844);

    if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x2877 = -6;
	int16_t x2879 = 78;
	int32_t t89 = -3;

    t89 = (((x2877|x2878)!=x2879)<<x2880);

    if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x2881 = INT32_MIN;
	int32_t x2882 = 493;
	volatile int32_t x2883 = INT32_MIN;
	static volatile int32_t x2884 = 1;
	volatile int32_t t90 = 190;

    t90 = (((x2881|x2882)!=x2883)<<x2884);

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x2906 = INT32_MAX;
	uint16_t x2907 = 327U;
	uint8_t x2908 = 1U;
	int32_t t91 = -229820309;

    t91 = (((x2905|x2906)!=x2907)<<x2908);

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x2910 = INT64_MAX;
	uint8_t x2912 = 3U;
	int32_t t92 = -8651072;

    t92 = (((x2909|x2910)!=x2911)<<x2912);

    if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x2961 = INT8_MIN;
	uint64_t x2962 = 4123598LLU;
	int8_t x2963 = INT8_MIN;
	uint32_t x2964 = 1U;
	int32_t t93 = 404;

    t93 = (((x2961|x2962)!=x2963)<<x2964);

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x2965 = INT64_MIN;
	uint32_t x2966 = 796447320U;
	int32_t x2967 = -4139959;
	static volatile uint8_t x2968 = 3U;
	volatile int32_t t94 = 71603200;

    t94 = (((x2965|x2966)!=x2967)<<x2968);

    if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x2985 = INT16_MIN;
	int32_t x2986 = -1;
	int64_t x2987 = INT64_MIN;

    t95 = (((x2985|x2986)!=x2987)<<x2988);

    if (t95 != 32) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x3017 = INT32_MIN;
	uint32_t x3018 = UINT32_MAX;
	int8_t x3019 = -27;
	uint8_t x3020 = 10U;
	volatile int32_t t96 = -2;

    t96 = (((x3017|x3018)!=x3019)<<x3020);

    if (t96 != 1024) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x3021 = INT16_MIN;
	int16_t x3022 = INT16_MAX;
	int8_t x3023 = INT8_MAX;
	uint16_t x3024 = 6U;
	int32_t t97 = 821;

    t97 = (((x3021|x3022)!=x3023)<<x3024);

    if (t97 != 64) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x3065 = 0;
	int64_t x3066 = INT64_MIN;
	int32_t t98 = 526;

    t98 = (((x3065|x3066)!=x3067)<<x3068);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x3081 = 110432U;
	uint32_t x3082 = 45171U;
	int32_t t99 = 253142;

    t99 = (((x3081|x3082)!=x3083)<<x3084);

    if (t99 != 64) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x3213 = -28;
	int8_t x3214 = INT8_MIN;
	static int32_t x3215 = INT32_MAX;
	volatile int32_t t100 = 1;

    t100 = (((x3213|x3214)!=x3215)<<x3216);

    if (t100 != 256) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x3221 = -1406;
	uint32_t x3222 = 1276U;
	static uint64_t x3223 = UINT64_MAX;

    t101 = (((x3221|x3222)!=x3223)<<x3224);

    if (t101 != 16777216) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x3237 = 5U;
	static int32_t x3239 = INT32_MAX;
	uint16_t x3240 = 2U;
	volatile int32_t t102 = 1426113;

    t102 = (((x3237|x3238)!=x3239)<<x3240);

    if (t102 != 4) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x3273 = -1;
	volatile int16_t x3274 = -1;
	static int16_t x3275 = INT16_MIN;
	volatile int8_t x3276 = 1;
	volatile int32_t t103 = -31;

    t103 = (((x3273|x3274)!=x3275)<<x3276);

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x3358 = INT32_MIN;
	int32_t x3359 = INT32_MIN;
	volatile uint8_t x3360 = 1U;
	volatile int32_t t104 = -14;

    t104 = (((x3357|x3358)!=x3359)<<x3360);

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x3361 = 0U;
	int8_t x3362 = -1;
	uint32_t x3363 = 52719U;
	static uint8_t x3364 = 9U;
	volatile int32_t t105 = -68447;

    t105 = (((x3361|x3362)!=x3363)<<x3364);

    if (t105 != 512) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x3401 = INT32_MIN;

    t106 = (((x3401|x3402)!=x3403)<<x3404);

    if (t106 != 8) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x3417 = INT16_MIN;
	int8_t x3418 = INT8_MIN;
	int8_t x3419 = -1;
	int8_t x3420 = 1;
	static volatile int32_t t107 = -7318392;

    t107 = (((x3417|x3418)!=x3419)<<x3420);

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x3429 = INT64_MIN;
	static int16_t x3430 = INT16_MAX;
	int16_t x3431 = INT16_MIN;
	uint8_t x3432 = 1U;
	int32_t t108 = -1;

    t108 = (((x3429|x3430)!=x3431)<<x3432);

    if (t108 != 2) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x3446 = 454174;
	volatile uint8_t x3448 = 2U;
	volatile int32_t t109 = 916;

    t109 = (((x3445|x3446)!=x3447)<<x3448);

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x3465 = 68;
	int64_t x3467 = 88369082LL;
	uint8_t x3468 = 2U;
	volatile int32_t t110 = -482;

    t110 = (((x3465|x3466)!=x3467)<<x3468);

    if (t110 != 4) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x3494 = 1907478399009LLU;
	volatile uint8_t x3495 = 25U;
	uint16_t x3496 = 0U;
	volatile int32_t t111 = 45062;

    t111 = (((x3493|x3494)!=x3495)<<x3496);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x3513 = INT32_MIN;
	int64_t x3514 = -10281981LL;
	int64_t x3515 = INT64_MIN;
	static volatile int32_t t112 = 1;

    t112 = (((x3513|x3514)!=x3515)<<x3516);

    if (t112 != 268435456) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x3529 = 391LL;
	int16_t x3530 = INT16_MAX;
	int8_t x3531 = INT8_MIN;
	int8_t x3532 = 2;
	int32_t t113 = 8997163;

    t113 = (((x3529|x3530)!=x3531)<<x3532);

    if (t113 != 4) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x3553 = INT32_MIN;
	static int64_t x3554 = INT64_MAX;
	static int8_t x3555 = INT8_MIN;
	int32_t x3556 = 1;
	static volatile int32_t t114 = -541880;

    t114 = (((x3553|x3554)!=x3555)<<x3556);

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x3557 = INT8_MIN;
	volatile uint32_t x3558 = UINT32_MAX;
	int32_t x3559 = 725654075;
	uint8_t x3560 = 12U;
	static volatile int32_t t115 = -194611517;

    t115 = (((x3557|x3558)!=x3559)<<x3560);

    if (t115 != 4096) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x3565 = UINT32_MAX;
	static int16_t x3567 = -1;
	uint8_t x3568 = 0U;
	int32_t t116 = 1;

    t116 = (((x3565|x3566)!=x3567)<<x3568);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x3597 = INT64_MIN;
	int16_t x3599 = 7922;

    t117 = (((x3597|x3598)!=x3599)<<x3600);

    if (t117 != 128) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3698 = INT16_MIN;
	int8_t x3699 = -1;
	int32_t t118 = -3271;

    t118 = (((x3697|x3698)!=x3699)<<x3700);

    if (t118 != 8192) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x3738 = INT64_MIN;
	uint32_t x3739 = 52241U;
	static uint16_t x3740 = 1U;

    t119 = (((x3737|x3738)!=x3739)<<x3740);

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x3749 = -1;
	int16_t x3750 = INT16_MIN;
	int16_t x3751 = -1;
	uint8_t x3752 = 20U;
	int32_t t120 = 5100522;

    t120 = (((x3749|x3750)!=x3751)<<x3752);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x3765 = INT32_MAX;
	int32_t x3766 = -1;
	uint32_t x3767 = 334639U;
	int8_t x3768 = 0;
	volatile int32_t t121 = 4198;

    t121 = (((x3765|x3766)!=x3767)<<x3768);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x3769 = -1;
	volatile int16_t x3770 = INT16_MAX;
	static int32_t t122 = 170233;

    t122 = (((x3769|x3770)!=x3771)<<x3772);

    if (t122 != 8192) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x3791 = 5166U;
	int8_t x3792 = 1;

    t123 = (((x3789|x3790)!=x3791)<<x3792);

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x3793 = INT32_MIN;
	int16_t x3794 = -55;
	uint16_t x3796 = 1U;
	int32_t t124 = 119196639;

    t124 = (((x3793|x3794)!=x3795)<<x3796);

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x3801 = INT8_MAX;
	int16_t x3802 = -33;
	static int8_t x3803 = -18;
	static int8_t x3804 = 1;
	volatile int32_t t125 = 22114;

    t125 = (((x3801|x3802)!=x3803)<<x3804);

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x3830 = 11383U;
	uint8_t x3832 = 12U;
	volatile int32_t t126 = 219471;

    t126 = (((x3829|x3830)!=x3831)<<x3832);

    if (t126 != 4096) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x3837 = 2577675140570272711LLU;
	int32_t x3838 = 132428121;
	static uint8_t x3839 = 121U;
	int32_t t127 = 1;

    t127 = (((x3837|x3838)!=x3839)<<x3840);

    if (t127 != 8) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x3873 = 0U;
	static int8_t x3874 = INT8_MIN;
	int32_t x3875 = INT32_MAX;
	volatile int32_t t128 = 142440487;

    t128 = (((x3873|x3874)!=x3875)<<x3876);

    if (t128 != 4) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x3894 = INT32_MAX;
	static int64_t x3895 = -1LL;
	volatile int8_t x3896 = 0;
	volatile int32_t t129 = -15;

    t129 = (((x3893|x3894)!=x3895)<<x3896);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x3921 = INT16_MIN;
	int32_t x3922 = 0;
	uint64_t x3923 = UINT64_MAX;
	volatile uint16_t x3924 = 1U;
	int32_t t130 = -3646680;

    t130 = (((x3921|x3922)!=x3923)<<x3924);

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x3930 = UINT32_MAX;
	volatile uint16_t x3932 = 0U;
	volatile int32_t t131 = -6;

    t131 = (((x3929|x3930)!=x3931)<<x3932);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x3937 = -4;
	volatile int32_t x3938 = INT32_MIN;
	uint32_t x3939 = 1273U;
	int8_t x3940 = 0;
	int32_t t132 = -4;

    t132 = (((x3937|x3938)!=x3939)<<x3940);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x3953 = -73369;
	int64_t x3955 = -2LL;
	volatile uint8_t x3956 = 0U;
	volatile int32_t t133 = 1;

    t133 = (((x3953|x3954)!=x3955)<<x3956);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x3981 = 6U;
	int32_t x3982 = -4216984;
	static uint64_t x3983 = 28LLU;
	uint8_t x3984 = 11U;

    t134 = (((x3981|x3982)!=x3983)<<x3984);

    if (t134 != 2048) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x4132 = 15;
	int32_t t135 = -82483;

    t135 = (((x4129|x4130)!=x4131)<<x4132);

    if (t135 != 32768) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4165 = 7771LL;
	uint32_t x4166 = UINT32_MAX;
	static volatile int32_t x4167 = INT32_MAX;

    t136 = (((x4165|x4166)!=x4167)<<x4168);

    if (t136 != 1073741824) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x4182 = INT32_MAX;
	static uint64_t x4183 = UINT64_MAX;
	uint32_t x4184 = 3U;

    t137 = (((x4181|x4182)!=x4183)<<x4184);

    if (t137 != 8) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x4209 = INT16_MIN;
	static int8_t x4210 = -1;
	volatile int64_t x4211 = INT64_MIN;
	uint8_t x4212 = 0U;

    t138 = (((x4209|x4210)!=x4211)<<x4212);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x4214 = -1LL;
	int16_t x4215 = INT16_MIN;
	int32_t t139 = -1;

    t139 = (((x4213|x4214)!=x4215)<<x4216);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x4257 = INT32_MIN;
	static volatile int64_t x4258 = -91300551699LL;
	int16_t x4259 = -1;
	int8_t x4260 = 22;
	volatile int32_t t140 = -3253796;

    t140 = (((x4257|x4258)!=x4259)<<x4260);

    if (t140 != 4194304) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x4345 = INT32_MIN;
	volatile int16_t x4346 = -101;

    t141 = (((x4345|x4346)!=x4347)<<x4348);

    if (t141 != 512) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x4393 = 15;
	static int32_t x4394 = -1;
	volatile int8_t x4395 = INT8_MIN;
	int8_t x4396 = 0;
	int32_t t142 = 453;

    t142 = (((x4393|x4394)!=x4395)<<x4396);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x4458 = 3LL;
	int32_t x4459 = -1;
	volatile uint8_t x4460 = 27U;
	volatile int32_t t143 = 108810;

    t143 = (((x4457|x4458)!=x4459)<<x4460);

    if (t143 != 134217728) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x4557 = 172;
	uint64_t x4558 = 16270746391LLU;
	int64_t x4559 = 433LL;
	int16_t x4560 = 0;

    t144 = (((x4557|x4558)!=x4559)<<x4560);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x4573 = INT8_MAX;
	static int16_t x4574 = 31;
	uint16_t x4576 = 0U;
	int32_t t145 = 1;

    t145 = (((x4573|x4574)!=x4575)<<x4576);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x4593 = INT32_MIN;
	volatile int64_t x4594 = INT64_MAX;
	int8_t x4595 = -4;
	volatile uint8_t x4596 = 4U;
	static volatile int32_t t146 = 89470334;

    t146 = (((x4593|x4594)!=x4595)<<x4596);

    if (t146 != 16) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x4629 = UINT16_MAX;
	int64_t x4631 = INT64_MIN;
	uint8_t x4632 = 8U;
	volatile int32_t t147 = 31937;

    t147 = (((x4629|x4630)!=x4631)<<x4632);

    if (t147 != 256) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x4657 = UINT64_MAX;
	int32_t x4659 = -1;
	volatile int8_t x4660 = 1;
	volatile int32_t t148 = -53;

    t148 = (((x4657|x4658)!=x4659)<<x4660);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x4673 = INT8_MIN;
	volatile int32_t t149 = -434;

    t149 = (((x4673|x4674)!=x4675)<<x4676);

    if (t149 != 2) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x4725 = INT8_MIN;
	int8_t x4726 = INT8_MAX;
	uint32_t x4727 = 9338U;
	uint64_t x4728 = 16LLU;
	int32_t t150 = -585552805;

    t150 = (((x4725|x4726)!=x4727)<<x4728);

    if (t150 != 65536) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x4742 = 17U;
	int16_t x4743 = -64;
	int8_t x4744 = 0;
	volatile int32_t t151 = 1;

    t151 = (((x4741|x4742)!=x4743)<<x4744);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x4749 = INT8_MIN;
	static int8_t x4750 = INT8_MIN;
	volatile int32_t x4751 = INT32_MAX;
	volatile uint8_t x4752 = 6U;
	volatile int32_t t152 = 11020093;

    t152 = (((x4749|x4750)!=x4751)<<x4752);

    if (t152 != 64) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x4805 = 0U;
	int8_t x4806 = INT8_MAX;
	volatile uint16_t x4808 = 2U;
	static volatile int32_t t153 = 24981;

    t153 = (((x4805|x4806)!=x4807)<<x4808);

    if (t153 != 4) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x4821 = INT64_MAX;
	static uint8_t x4823 = UINT8_MAX;
	uint8_t x4824 = 2U;
	int32_t t154 = 74174;

    t154 = (((x4821|x4822)!=x4823)<<x4824);

    if (t154 != 4) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x4825 = -863036248438LL;
	volatile int16_t x4827 = 1426;
	volatile uint32_t x4828 = 1U;
	volatile int32_t t155 = 0;

    t155 = (((x4825|x4826)!=x4827)<<x4828);

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x4945 = INT32_MIN;
	uint8_t x4947 = 108U;
	uint64_t x4948 = 0LLU;
	int32_t t156 = -7459;

    t156 = (((x4945|x4946)!=x4947)<<x4948);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x4989 = UINT64_MAX;
	uint64_t x4990 = 3052433290815619037LLU;
	static int32_t x4991 = INT32_MIN;
	int8_t x4992 = 0;
	int32_t t157 = 9328;

    t157 = (((x4989|x4990)!=x4991)<<x4992);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x5021 = 3U;
	int8_t x5022 = -1;
	uint16_t x5023 = UINT16_MAX;
	int32_t x5024 = 0;
	int32_t t158 = -3;

    t158 = (((x5021|x5022)!=x5023)<<x5024);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x5198 = -1;
	int64_t x5199 = INT64_MIN;
	uint16_t x5200 = 3U;
	volatile int32_t t159 = 1;

    t159 = (((x5197|x5198)!=x5199)<<x5200);

    if (t159 != 8) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x5205 = -1;
	volatile uint32_t x5206 = 124U;
	static int16_t x5207 = INT16_MIN;
	uint32_t x5208 = 18U;
	int32_t t160 = -7114110;

    t160 = (((x5205|x5206)!=x5207)<<x5208);

    if (t160 != 262144) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x5227 = INT8_MIN;
	int8_t x5228 = 13;

    t161 = (((x5225|x5226)!=x5227)<<x5228);

    if (t161 != 8192) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x5245 = 98;
	volatile int32_t x5246 = -30;
	int32_t x5247 = 409;
	uint8_t x5248 = 1U;
	int32_t t162 = -26727909;

    t162 = (((x5245|x5246)!=x5247)<<x5248);

    if (t162 != 2) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x5266 = UINT8_MAX;
	int8_t x5267 = INT8_MIN;
	uint8_t x5268 = 25U;
	int32_t t163 = 1;

    t163 = (((x5265|x5266)!=x5267)<<x5268);

    if (t163 != 33554432) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x5281 = -1LL;
	static int8_t x5282 = INT8_MIN;
	uint64_t x5283 = UINT64_MAX;
	uint16_t x5284 = 10U;

    t164 = (((x5281|x5282)!=x5283)<<x5284);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x5301 = 7;
	static volatile uint64_t x5302 = 13LLU;
	uint32_t x5303 = UINT32_MAX;
	volatile uint64_t x5304 = 18LLU;
	int32_t t165 = 224;

    t165 = (((x5301|x5302)!=x5303)<<x5304);

    if (t165 != 262144) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x5325 = UINT8_MAX;
	uint8_t x5326 = 0U;
	uint8_t x5328 = 1U;

    t166 = (((x5325|x5326)!=x5327)<<x5328);

    if (t166 != 2) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x5337 = -48;
	int64_t x5338 = INT64_MIN;
	int64_t x5339 = 241313LL;
	static uint8_t x5340 = 19U;
	int32_t t167 = 205;

    t167 = (((x5337|x5338)!=x5339)<<x5340);

    if (t167 != 524288) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x5358 = UINT8_MAX;
	int64_t x5359 = -1LL;
	volatile int32_t t168 = -566785;

    t168 = (((x5357|x5358)!=x5359)<<x5360);

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x5361 = -1;
	int16_t x5362 = 0;
	uint8_t x5363 = UINT8_MAX;
	int32_t t169 = -22125;

    t169 = (((x5361|x5362)!=x5363)<<x5364);

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x5390 = INT16_MAX;
	uint32_t x5391 = UINT32_MAX;
	uint8_t x5392 = 1U;
	int32_t t170 = -18;

    t170 = (((x5389|x5390)!=x5391)<<x5392);

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x5393 = UINT64_MAX;
	static int32_t x5395 = -238283375;
	uint8_t x5396 = 18U;
	volatile int32_t t171 = -12483182;

    t171 = (((x5393|x5394)!=x5395)<<x5396);

    if (t171 != 262144) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x5397 = 64U;
	int32_t x5398 = INT32_MIN;
	static uint8_t x5400 = 1U;
	int32_t t172 = -3231718;

    t172 = (((x5397|x5398)!=x5399)<<x5400);

    if (t172 != 2) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x5403 = 116;
	uint8_t x5404 = 12U;
	int32_t t173 = -8346920;

    t173 = (((x5401|x5402)!=x5403)<<x5404);

    if (t173 != 4096) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x5418 = INT16_MIN;
	volatile uint16_t x5419 = 4588U;
	int32_t t174 = 25;

    t174 = (((x5417|x5418)!=x5419)<<x5420);

    if (t174 != 8388608) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x5433 = 92150U;
	uint16_t x5434 = 450U;
	volatile int32_t t175 = -18678;

    t175 = (((x5433|x5434)!=x5435)<<x5436);

    if (t175 != 8) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x5481 = INT8_MAX;
	static int8_t x5482 = INT8_MAX;
	uint8_t x5483 = UINT8_MAX;
	int8_t x5484 = 0;
	int32_t t176 = -118929;

    t176 = (((x5481|x5482)!=x5483)<<x5484);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x5489 = INT64_MIN;
	uint8_t x5490 = UINT8_MAX;
	int64_t x5491 = 74LL;
	static int16_t x5492 = 1;
	int32_t t177 = -33153670;

    t177 = (((x5489|x5490)!=x5491)<<x5492);

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x5550 = -1;
	volatile int32_t t178 = -8837447;

    t178 = (((x5549|x5550)!=x5551)<<x5552);

    if (t178 != 16) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x5554 = INT64_MIN;
	uint16_t x5556 = 10U;
	int32_t t179 = -3;

    t179 = (((x5553|x5554)!=x5555)<<x5556);

    if (t179 != 1024) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x5561 = 13077040LLU;
	uint16_t x5562 = 313U;
	int64_t x5563 = -245464388067954081LL;
	static int16_t x5564 = 1;
	volatile int32_t t180 = 516247;

    t180 = (((x5561|x5562)!=x5563)<<x5564);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x5573 = -1;
	int16_t x5574 = -1;
	int8_t x5576 = 1;

    t181 = (((x5573|x5574)!=x5575)<<x5576);

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x5598 = -1;

    t182 = (((x5597|x5598)!=x5599)<<x5600);

    if (t182 != 256) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x5649 = 427U;
	int64_t x5650 = INT64_MAX;
	int64_t x5651 = 332221566LL;
	static volatile int32_t x5652 = 3;
	static int32_t t183 = 41;

    t183 = (((x5649|x5650)!=x5651)<<x5652);

    if (t183 != 8) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint64_t x5653 = UINT64_MAX;
	int16_t x5654 = INT16_MIN;
	uint32_t x5655 = UINT32_MAX;
	uint16_t x5656 = 0U;

    t184 = (((x5653|x5654)!=x5655)<<x5656);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x5721 = INT32_MAX;
	volatile int8_t x5724 = 0;
	int32_t t185 = 619;

    t185 = (((x5721|x5722)!=x5723)<<x5724);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x5725 = INT16_MAX;
	uint64_t x5726 = UINT64_MAX;
	uint32_t x5727 = 6087U;
	int8_t x5728 = 0;
	int32_t t186 = -631321870;

    t186 = (((x5725|x5726)!=x5727)<<x5728);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x5741 = UINT32_MAX;
	int64_t x5742 = -65118807LL;
	uint32_t x5743 = 51U;
	volatile int32_t x5744 = 0;
	volatile int32_t t187 = 15;

    t187 = (((x5741|x5742)!=x5743)<<x5744);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x5797 = INT16_MIN;
	int16_t x5798 = -1;
	static uint16_t x5800 = 3U;
	volatile int32_t t188 = -637520513;

    t188 = (((x5797|x5798)!=x5799)<<x5800);

    if (t188 != 8) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x5865 = -155159229;
	int16_t x5866 = INT16_MIN;
	uint32_t x5867 = 32661159U;
	static int16_t x5868 = 0;
	static int32_t t189 = -32357392;

    t189 = (((x5865|x5866)!=x5867)<<x5868);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x5877 = 23U;
	int8_t x5878 = 0;
	int8_t x5879 = INT8_MIN;
	int16_t x5880 = 12;

    t190 = (((x5877|x5878)!=x5879)<<x5880);

    if (t190 != 4096) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x5881 = -1;
	int16_t x5882 = 9;
	int64_t x5883 = INT64_MAX;
	static uint32_t x5884 = 0U;
	volatile int32_t t191 = -15058;

    t191 = (((x5881|x5882)!=x5883)<<x5884);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x5891 = INT16_MIN;
	volatile int16_t x5892 = 13;
	int32_t t192 = 11;

    t192 = (((x5889|x5890)!=x5891)<<x5892);

    if (t192 != 8192) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x5897 = 25675658U;
	uint64_t x5898 = 116487622661197LLU;
	volatile uint16_t x5900 = 11U;
	int32_t t193 = 1;

    t193 = (((x5897|x5898)!=x5899)<<x5900);

    if (t193 != 2048) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x5909 = 27U;
	static uint64_t x5910 = 50241375610337LLU;
	int16_t x5911 = INT16_MAX;
	static int32_t x5912 = 2;

    t194 = (((x5909|x5910)!=x5911)<<x5912);

    if (t194 != 4) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x6037 = 6164980875397464LLU;
	int64_t x6038 = -1LL;
	static uint16_t x6040 = 17U;
	static volatile int32_t t195 = -722216944;

    t195 = (((x6037|x6038)!=x6039)<<x6040);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x6069 = INT32_MAX;
	volatile int64_t x6071 = 855243109748554LL;
	static int32_t t196 = 1533114;

    t196 = (((x6069|x6070)!=x6071)<<x6072);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x6097 = INT64_MIN;
	uint64_t x6098 = 1682392701420459LLU;
	volatile int32_t x6099 = 336197778;
	static int8_t x6100 = 10;
	int32_t t197 = -3032444;

    t197 = (((x6097|x6098)!=x6099)<<x6100);

    if (t197 != 1024) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x6113 = 1696086;
	uint64_t x6114 = UINT64_MAX;
	int16_t x6115 = -12217;
	int8_t x6116 = 8;
	int32_t t198 = -2605223;

    t198 = (((x6113|x6114)!=x6115)<<x6116);

    if (t198 != 256) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x6163 = INT8_MAX;
	uint8_t x6164 = 21U;
	int32_t t199 = -532863383;

    t199 = (((x6161|x6162)!=x6163)<<x6164);

    if (t199 != 2097152) { NG(); } else { ; }
	
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

