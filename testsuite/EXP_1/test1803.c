
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

static int32_t x10 = INT32_MIN;
volatile int32_t x38 = -1;
volatile uint32_t t1 = 3806262U;
uint16_t x144 = 1U;
uint32_t x347 = 600001855U;
volatile uint8_t x484 = 12U;
static volatile int32_t t14 = 202;
int64_t x503 = -1LL;
int32_t t17 = -250190962;
uint32_t x630 = 5847U;
uint16_t x645 = 132U;
int32_t t22 = -33;
int32_t x789 = INT32_MIN;
uint8_t x790 = UINT8_MAX;
int8_t x792 = 11;
uint32_t x806 = 663034U;
static uint16_t x807 = UINT16_MAX;
uint64_t x808 = 0LLU;
int64_t t28 = 245911514LL;
uint8_t x1053 = 7U;
uint64_t x1055 = 23LLU;
int64_t x1062 = -134LL;
uint64_t x1063 = UINT64_MAX;
int8_t x1064 = 1;
volatile uint16_t x1073 = 1487U;
int16_t x1074 = INT16_MIN;
volatile int64_t t33 = -9581LL;
uint8_t x1159 = 0U;
volatile int64_t t36 = 4LL;
volatile int8_t x1249 = -6;
int32_t t38 = -56813;
int32_t x1257 = -1;
uint8_t x1259 = 13U;
int64_t x1281 = INT64_MIN;
int8_t x1380 = 45;
volatile uint64_t x1423 = 207147015278690880LLU;
uint64_t t43 = 826915137072476LLU;
uint8_t x1460 = 9U;
int64_t x1465 = INT64_MIN;
int64_t x1467 = INT64_MAX;
int64_t t45 = 3867366898LL;
volatile int32_t t48 = -5304405;
volatile uint32_t x1759 = 30041U;
uint32_t x1811 = 16613U;
int32_t x1833 = INT32_MAX;
uint8_t x1834 = 53U;
volatile int32_t t56 = -455308415;
static int8_t x1982 = INT8_MIN;
int8_t x1983 = 3;
uint16_t x2008 = 30U;
int8_t x2106 = INT8_MAX;
static int8_t x2206 = -1;
static int32_t x2235 = INT32_MIN;
int8_t x2236 = 21;
static volatile uint16_t x2322 = 127U;
static int8_t x2401 = 3;
volatile int8_t x2437 = INT8_MIN;
static volatile int32_t t68 = 93969313;
uint32_t t70 = 3U;
int64_t x2490 = -457LL;
int8_t x2492 = 16;
uint32_t x2581 = 42152611U;
uint16_t x2599 = UINT16_MAX;
volatile int32_t t75 = 23;
int64_t x2641 = -1LL;
int64_t x2645 = INT64_MAX;
uint64_t t78 = 6437263053568351LLU;
uint64_t x2781 = 370283300LLU;
int16_t x2784 = 1;
static int32_t x2833 = INT32_MAX;
uint16_t x2845 = UINT16_MAX;
volatile int8_t x2846 = INT8_MIN;
int64_t x2847 = 494851958930LL;
int64_t x2862 = 11385842433130LL;
int32_t x2907 = INT32_MIN;
static int64_t x2961 = 5485546LL;
uint32_t x3007 = 57U;
int64_t x3074 = INT64_MAX;
static volatile uint64_t t89 = 7845653305LLU;
static volatile uint8_t x3093 = UINT8_MAX;
volatile int8_t x3095 = -1;
int32_t t90 = -15;
uint32_t x3129 = 93071U;
static uint8_t x3130 = 1U;
int64_t x3149 = -1793937836631LL;
volatile uint64_t t93 = 270358249085128638LLU;
uint8_t x3172 = 0U;
int8_t x3192 = 27;
uint16_t x3223 = UINT16_MAX;
uint16_t x3224 = 0U;
static int32_t t97 = -26672;
int32_t x3254 = 2595458;
static volatile uint64_t t98 = 0LLU;
static int32_t x3365 = -1;
int32_t x3367 = INT32_MAX;
int64_t x3415 = INT64_MAX;
int8_t x3416 = 0;
int32_t t104 = -11796569;
static int32_t t106 = -648925;
static int32_t x3702 = -1;
volatile int32_t t107 = -57;
volatile int16_t x3786 = INT16_MAX;
int16_t x3787 = INT16_MAX;
static int8_t x3788 = 0;
int8_t x3866 = INT8_MIN;
int16_t x3869 = INT16_MAX;
volatile uint8_t x3871 = 10U;
static int8_t x3898 = -16;
int16_t x3912 = 0;
volatile int16_t x3982 = INT16_MIN;
volatile uint8_t x3990 = 24U;
static int32_t t118 = 112;
volatile int64_t x4021 = INT64_MAX;
int16_t x4024 = 3;
volatile int64_t x4067 = 8557973584LL;
static int16_t x4068 = 0;
int64_t t121 = -1307LL;
int8_t x4229 = -1;
volatile uint16_t x4230 = 67U;
int8_t x4232 = 9;
uint8_t x4236 = 33U;
int64_t t123 = 632136056LL;
volatile uint32_t x4365 = 1448U;
uint8_t x4366 = UINT8_MAX;
uint8_t x4369 = UINT8_MAX;
static int8_t x4372 = 1;
volatile uint32_t x4404 = 30U;
static int32_t x4441 = 89;
uint16_t x4442 = 0U;
int64_t x4443 = -1897460642321500LL;
int32_t t129 = -46943578;
uint32_t x4474 = 322573U;
int8_t x4478 = INT8_MAX;
static volatile int32_t t131 = 117959;
static volatile uint64_t x4481 = UINT64_MAX;
static volatile int64_t x4482 = INT64_MIN;
static volatile int32_t t132 = 4432202;
int8_t x4492 = 6;
static int32_t t133 = -992642444;
static int32_t t134 = 79163;
static volatile uint64_t x4555 = 60165059LLU;
static int16_t x4653 = -1;
int32_t x4656 = 1;
volatile uint32_t t138 = 29743800U;
int64_t x4814 = INT64_MIN;
uint8_t x4815 = UINT8_MAX;
static uint8_t x4816 = 5U;
int8_t x4845 = 0;
int64_t x4846 = -1LL;
int32_t t142 = 700184;
static uint8_t x4879 = 0U;
int16_t x4905 = 1771;
int8_t x4908 = 3;
int16_t x4999 = -2945;
uint16_t x5044 = 0U;
int32_t t150 = -125237;
int16_t x5227 = -1;
volatile int32_t t152 = 1020;
int64_t t153 = -32259001LL;
int8_t x5538 = INT8_MIN;
int8_t x5884 = 1;
uint16_t x6095 = 1U;
static uint32_t x6101 = UINT32_MAX;
static volatile uint16_t x6104 = 1U;
static int8_t x6105 = INT8_MIN;
int32_t x6110 = INT32_MIN;
int16_t x6167 = -1;
uint16_t x6168 = 3U;
int32_t t166 = 196;
static int64_t x6178 = INT64_MIN;
int8_t x6209 = INT8_MIN;
int8_t x6212 = 1;
int8_t x6235 = -1;
static uint8_t x6236 = 7U;
static volatile int32_t t170 = -127288962;
static int32_t x6345 = INT32_MAX;
uint32_t x6378 = 1004U;
volatile int32_t t175 = 75248;
int64_t x6410 = INT64_MIN;
static uint8_t x6412 = 1U;
int8_t x6476 = 0;
static volatile uint8_t x6565 = 11U;
uint16_t x6585 = 1645U;
uint8_t x6588 = 0U;
int16_t x6597 = INT16_MIN;
int8_t x6620 = 1;
volatile int16_t x6667 = -1;
volatile uint16_t x6668 = 0U;
int16_t x6675 = INT16_MAX;
static int8_t x6679 = INT8_MIN;
volatile int16_t x6693 = INT16_MIN;
int16_t x6714 = 2;
static uint16_t x6715 = 2186U;
static int32_t x6945 = -1;
int8_t x6947 = 14;
int32_t x6986 = 1755;
static uint64_t x6987 = 4510590617LLU;
int32_t x7046 = INT32_MAX;
static volatile uint32_t x7153 = 1811905204U;
uint8_t x7154 = 1U;
int32_t x7158 = INT32_MIN;
static int8_t x7200 = 1;
static int64_t x7234 = -1198928LL;


void f0(void) {
    	uint32_t x9 = 11486U;
	int16_t x11 = INT16_MAX;
	uint8_t x12 = 14U;
	int32_t t0 = 47;

    t0 = (((x9<=x10)*x11)>>x12);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x37 = INT16_MIN;
	uint32_t x39 = 11198584U;
	static volatile uint64_t x40 = 1LLU;

    t1 = (((x37<=x38)*x39)>>x40);

    if (t1 != 5599292U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x129 = INT32_MIN;
	uint32_t x130 = UINT32_MAX;
	int16_t x131 = INT16_MAX;
	static int8_t x132 = 0;
	int32_t t2 = 231290;

    t2 = (((x129<=x130)*x131)>>x132);

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x133 = INT32_MIN;
	uint8_t x134 = 101U;
	static int64_t x135 = INT64_MAX;
	volatile uint8_t x136 = 0U;
	int64_t t3 = INT64_MAX;

    t3 = (((x133<=x134)*x135)>>x136);

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x141 = -1LL;
	int16_t x142 = INT16_MIN;
	volatile uint32_t x143 = UINT32_MAX;
	static volatile uint32_t t4 = 8980101U;

    t4 = (((x141<=x142)*x143)>>x144);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x157 = UINT8_MAX;
	int8_t x158 = -1;
	int64_t x159 = -1LL;
	static volatile uint8_t x160 = 35U;
	static int64_t t5 = 2278139419966090572LL;

    t5 = (((x157<=x158)*x159)>>x160);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x173 = 42;
	int8_t x174 = INT8_MAX;
	static int64_t x175 = INT64_MAX;
	int8_t x176 = 21;
	int64_t t6 = 5330598844207LL;

    t6 = (((x173<=x174)*x175)>>x176);

    if (t6 != 4398046511103LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x177 = INT8_MIN;
	int64_t x178 = -1LL;
	volatile int64_t x179 = 2LL;
	volatile int8_t x180 = 27;
	static int64_t t7 = 5LL;

    t7 = (((x177<=x178)*x179)>>x180);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x233 = 5769561630188LLU;
	volatile int64_t x234 = -2806969469728LL;
	uint32_t x235 = UINT32_MAX;
	volatile uint32_t x236 = 4U;
	uint32_t t8 = 15187U;

    t8 = (((x233<=x234)*x235)>>x236);

    if (t8 != 268435455U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x345 = -7;
	static volatile uint32_t x346 = 1429555677U;
	int8_t x348 = 0;
	volatile uint32_t t9 = 211248U;

    t9 = (((x345<=x346)*x347)>>x348);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x389 = 1;
	static int8_t x390 = -1;
	int8_t x391 = 10;
	int8_t x392 = 1;
	int32_t t10 = -613026380;

    t10 = (((x389<=x390)*x391)>>x392);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x401 = 91877932377325160LL;
	int32_t x402 = -1;
	volatile int16_t x403 = -82;
	int8_t x404 = 10;
	volatile int32_t t11 = 20980;

    t11 = (((x401<=x402)*x403)>>x404);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x461 = 54482217102663LL;
	int32_t x462 = 8;
	int64_t x463 = INT64_MIN;
	uint32_t x464 = 0U;
	volatile int64_t t12 = 3892857LL;

    t12 = (((x461<=x462)*x463)>>x464);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x481 = UINT16_MAX;
	int32_t x482 = INT32_MIN;
	int8_t x483 = 4;
	int32_t t13 = 580363;

    t13 = (((x481<=x482)*x483)>>x484);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x485 = INT64_MIN;
	uint64_t x486 = 229870505003LLU;
	int16_t x487 = INT16_MIN;
	static int8_t x488 = 0;

    t14 = (((x485<=x486)*x487)>>x488);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x501 = 14U;
	volatile int8_t x502 = INT8_MIN;
	volatile int16_t x504 = 1;
	int64_t t15 = 140418092683403072LL;

    t15 = (((x501<=x502)*x503)>>x504);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x553 = 2U;
	int64_t x554 = INT64_MIN;
	int8_t x555 = -1;
	volatile int8_t x556 = 0;
	int32_t t16 = -27777;

    t16 = (((x553<=x554)*x555)>>x556);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x577 = INT8_MAX;
	int8_t x578 = -4;
	int8_t x579 = -1;
	uint16_t x580 = 4U;

    t17 = (((x577<=x578)*x579)>>x580);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x625 = -1;
	int16_t x626 = -10;
	volatile uint32_t x627 = 133031U;
	int16_t x628 = 0;
	volatile uint32_t t18 = 420U;

    t18 = (((x625<=x626)*x627)>>x628);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x629 = -1;
	int16_t x631 = 7;
	uint16_t x632 = 7U;
	static int32_t t19 = 1396854;

    t19 = (((x629<=x630)*x631)>>x632);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x646 = -1;
	int8_t x647 = INT8_MIN;
	int8_t x648 = 0;
	int32_t t20 = -61;

    t20 = (((x645<=x646)*x647)>>x648);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x681 = INT8_MIN;
	static int8_t x682 = 1;
	uint64_t x683 = 27298691402626LLU;
	static uint16_t x684 = 28U;
	static uint64_t t21 = 565449956410LLU;

    t21 = (((x681<=x682)*x683)>>x684);

    if (t21 != 101695LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x725 = INT8_MIN;
	int32_t x726 = INT32_MIN;
	uint8_t x727 = 8U;
	volatile uint8_t x728 = 14U;

    t22 = (((x725<=x726)*x727)>>x728);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x745 = INT64_MIN;
	int64_t x746 = -1LL;
	uint32_t x747 = UINT32_MAX;
	int16_t x748 = 3;
	volatile uint32_t t23 = 47U;

    t23 = (((x745<=x746)*x747)>>x748);

    if (t23 != 536870911U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x791 = 193801186721LLU;
	uint64_t t24 = 39824784548945LLU;

    t24 = (((x789<=x790)*x791)>>x792);

    if (t24 != 94629485LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x805 = UINT32_MAX;
	volatile int32_t t25 = -213581474;

    t25 = (((x805<=x806)*x807)>>x808);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x845 = -53;
	static int8_t x846 = 28;
	uint8_t x847 = 0U;
	int16_t x848 = 14;
	static volatile int32_t t26 = -1910087;

    t26 = (((x845<=x846)*x847)>>x848);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x913 = INT32_MIN;
	int32_t x914 = 6652897;
	volatile int16_t x915 = 298;
	static int8_t x916 = 16;
	int32_t t27 = 2;

    t27 = (((x913<=x914)*x915)>>x916);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1033 = INT32_MIN;
	uint32_t x1034 = 845U;
	int64_t x1035 = -1LL;
	static int16_t x1036 = 0;

    t28 = (((x1033<=x1034)*x1035)>>x1036);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x1049 = UINT16_MAX;
	int16_t x1050 = -1;
	volatile int64_t x1051 = INT64_MAX;
	volatile uint16_t x1052 = 49U;
	int64_t t29 = -265361318167588280LL;

    t29 = (((x1049<=x1050)*x1051)>>x1052);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1054 = INT64_MAX;
	uint8_t x1056 = 26U;
	uint64_t t30 = 87LLU;

    t30 = (((x1053<=x1054)*x1055)>>x1056);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1061 = INT16_MIN;
	static volatile uint64_t t31 = 185596112LLU;

    t31 = (((x1061<=x1062)*x1063)>>x1064);

    if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1075 = UINT32_MAX;
	uint32_t x1076 = 1U;
	uint32_t t32 = 14531U;

    t32 = (((x1073<=x1074)*x1075)>>x1076);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x1137 = 41U;
	static int64_t x1138 = -16LL;
	int64_t x1139 = 22287584931751262LL;
	int16_t x1140 = 1;

    t33 = (((x1137<=x1138)*x1139)>>x1140);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x1141 = 2745557553510266LLU;
	int16_t x1142 = INT16_MAX;
	static int64_t x1143 = -10034LL;
	volatile uint64_t x1144 = 11LLU;
	int64_t t34 = 65792489LL;

    t34 = (((x1141<=x1142)*x1143)>>x1144);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1157 = INT32_MIN;
	uint64_t x1158 = 1061446398LLU;
	uint8_t x1160 = 18U;
	static volatile int32_t t35 = 50849;

    t35 = (((x1157<=x1158)*x1159)>>x1160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1221 = 279U;
	volatile int8_t x1222 = 2;
	int64_t x1223 = 54LL;
	uint8_t x1224 = 3U;

    t36 = (((x1221<=x1222)*x1223)>>x1224);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1245 = 19U;
	static int64_t x1246 = INT64_MAX;
	static uint32_t x1247 = UINT32_MAX;
	uint8_t x1248 = 21U;
	uint32_t t37 = 3U;

    t37 = (((x1245<=x1246)*x1247)>>x1248);

    if (t37 != 2047U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1250 = -1;
	volatile int16_t x1251 = 1874;
	int16_t x1252 = 0;

    t38 = (((x1249<=x1250)*x1251)>>x1252);

    if (t38 != 1874) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1258 = INT16_MIN;
	uint8_t x1260 = 4U;
	volatile int32_t t39 = -45;

    t39 = (((x1257<=x1258)*x1259)>>x1260);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1282 = 271680259597LLU;
	static int64_t x1283 = -225LL;
	volatile uint16_t x1284 = 0U;
	volatile int64_t t40 = -1LL;

    t40 = (((x1281<=x1282)*x1283)>>x1284);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x1337 = 1055U;
	int8_t x1338 = 11;
	int8_t x1339 = INT8_MIN;
	static volatile int8_t x1340 = 11;
	static int32_t t41 = 0;

    t41 = (((x1337<=x1338)*x1339)>>x1340);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x1377 = UINT64_MAX;
	volatile int64_t x1378 = -37422322537985LL;
	volatile int64_t x1379 = 1LL;
	int64_t t42 = -22LL;

    t42 = (((x1377<=x1378)*x1379)>>x1380);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x1421 = INT64_MIN;
	int16_t x1422 = INT16_MIN;
	uint16_t x1424 = 10U;

    t43 = (((x1421<=x1422)*x1423)>>x1424);

    if (t43 != 202292007108096LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x1457 = INT64_MAX;
	volatile uint64_t x1458 = UINT64_MAX;
	uint32_t x1459 = UINT32_MAX;
	uint32_t t44 = 8048910U;

    t44 = (((x1457<=x1458)*x1459)>>x1460);

    if (t44 != 8388607U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x1466 = INT64_MIN;
	volatile uint64_t x1468 = 31LLU;

    t45 = (((x1465<=x1466)*x1467)>>x1468);

    if (t45 != 4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x1537 = INT64_MIN;
	int32_t x1538 = -140;
	uint64_t x1539 = UINT64_MAX;
	uint64_t x1540 = 14LLU;
	static volatile uint64_t t46 = 4766254121745679285LLU;

    t46 = (((x1537<=x1538)*x1539)>>x1540);

    if (t46 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x1545 = -1;
	uint64_t x1546 = UINT64_MAX;
	volatile int32_t x1547 = INT32_MAX;
	uint16_t x1548 = 10U;
	int32_t t47 = -1788;

    t47 = (((x1545<=x1546)*x1547)>>x1548);

    if (t47 != 2097151) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x1561 = INT16_MIN;
	int32_t x1562 = -30265960;
	int8_t x1563 = INT8_MIN;
	uint16_t x1564 = 5U;

    t48 = (((x1561<=x1562)*x1563)>>x1564);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x1569 = -566004933;
	volatile int32_t x1570 = INT32_MIN;
	uint8_t x1571 = 7U;
	uint16_t x1572 = 12U;
	int32_t t49 = 95247;

    t49 = (((x1569<=x1570)*x1571)>>x1572);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x1613 = 3U;
	static volatile int64_t x1614 = -1LL;
	volatile uint16_t x1615 = 23126U;
	uint8_t x1616 = 3U;
	int32_t t50 = 2533;

    t50 = (((x1613<=x1614)*x1615)>>x1616);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1729 = INT32_MIN;
	uint64_t x1730 = UINT64_MAX;
	uint8_t x1731 = UINT8_MAX;
	volatile uint8_t x1732 = 15U;
	volatile int32_t t51 = 3451;

    t51 = (((x1729<=x1730)*x1731)>>x1732);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x1757 = 2U;
	uint8_t x1758 = 107U;
	uint16_t x1760 = 1U;
	volatile uint32_t t52 = 232871750U;

    t52 = (((x1757<=x1758)*x1759)>>x1760);

    if (t52 != 15020U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x1773 = -10001LL;
	uint64_t x1774 = 3820888LLU;
	int32_t x1775 = 61658560;
	int16_t x1776 = 8;
	volatile int32_t t53 = -1;

    t53 = (((x1773<=x1774)*x1775)>>x1776);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x1809 = INT8_MIN;
	int16_t x1810 = INT16_MIN;
	uint16_t x1812 = 2U;
	uint32_t t54 = 14U;

    t54 = (((x1809<=x1810)*x1811)>>x1812);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1835 = 12U;
	volatile int32_t x1836 = 1;
	volatile int32_t t55 = -7666149;

    t55 = (((x1833<=x1834)*x1835)>>x1836);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x1945 = 7U;
	uint16_t x1946 = 1U;
	volatile int16_t x1947 = -107;
	int16_t x1948 = 22;

    t56 = (((x1945<=x1946)*x1947)>>x1948);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x1981 = 1U;
	uint16_t x1984 = 0U;
	int32_t t57 = -6164;

    t57 = (((x1981<=x1982)*x1983)>>x1984);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x2005 = 1;
	volatile int32_t x2006 = INT32_MIN;
	int64_t x2007 = -1LL;
	volatile int64_t t58 = -19LL;

    t58 = (((x2005<=x2006)*x2007)>>x2008);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x2053 = 968069LLU;
	int8_t x2054 = 2;
	volatile uint16_t x2055 = 14U;
	int8_t x2056 = 9;
	static int32_t t59 = 4144;

    t59 = (((x2053<=x2054)*x2055)>>x2056);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x2105 = 99402U;
	int8_t x2107 = 3;
	volatile uint8_t x2108 = 1U;
	volatile int32_t t60 = 6218;

    t60 = (((x2105<=x2106)*x2107)>>x2108);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x2201 = 105;
	uint32_t x2202 = 287649582U;
	uint16_t x2203 = UINT16_MAX;
	static int8_t x2204 = 1;
	int32_t t61 = -312859388;

    t61 = (((x2201<=x2202)*x2203)>>x2204);

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x2205 = -1;
	static int32_t x2207 = INT32_MAX;
	static uint8_t x2208 = 4U;
	int32_t t62 = -116778402;

    t62 = (((x2205<=x2206)*x2207)>>x2208);

    if (t62 != 134217727) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x2233 = 6521;
	int16_t x2234 = INT16_MIN;
	int32_t t63 = 0;

    t63 = (((x2233<=x2234)*x2235)>>x2236);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x2301 = 13U;
	int64_t x2302 = -1LL;
	uint64_t x2303 = 34289LLU;
	uint32_t x2304 = 15U;
	uint64_t t64 = 124723LLU;

    t64 = (((x2301<=x2302)*x2303)>>x2304);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x2321 = 8862U;
	int64_t x2323 = 0LL;
	volatile int32_t x2324 = 25;
	static int64_t t65 = 0LL;

    t65 = (((x2321<=x2322)*x2323)>>x2324);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x2353 = 1520LLU;
	volatile uint64_t x2354 = 694511584LLU;
	volatile uint32_t x2355 = UINT32_MAX;
	uint8_t x2356 = 1U;
	volatile uint32_t t66 = 3404U;

    t66 = (((x2353<=x2354)*x2355)>>x2356);

    if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x2402 = 27;
	static uint64_t x2403 = 26LLU;
	int32_t x2404 = 0;
	uint64_t t67 = 49LLU;

    t67 = (((x2401<=x2402)*x2403)>>x2404);

    if (t67 != 26LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x2438 = 22294454844519LLU;
	int16_t x2439 = INT16_MIN;
	static int8_t x2440 = 1;

    t68 = (((x2437<=x2438)*x2439)>>x2440);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x2461 = 34U;
	uint32_t x2462 = 10410U;
	volatile uint8_t x2463 = 4U;
	int32_t x2464 = 6;
	static volatile int32_t t69 = 0;

    t69 = (((x2461<=x2462)*x2463)>>x2464);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2481 = 0;
	volatile int8_t x2482 = INT8_MAX;
	static uint32_t x2483 = UINT32_MAX;
	uint8_t x2484 = 23U;

    t70 = (((x2481<=x2482)*x2483)>>x2484);

    if (t70 != 511U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2485 = INT8_MAX;
	int16_t x2486 = -616;
	static int8_t x2487 = INT8_MAX;
	uint8_t x2488 = 30U;
	static int32_t t71 = 75124327;

    t71 = (((x2485<=x2486)*x2487)>>x2488);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2489 = -1;
	static uint8_t x2491 = 15U;
	int32_t t72 = -259892;

    t72 = (((x2489<=x2490)*x2491)>>x2492);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2582 = 0;
	static int64_t x2583 = INT64_MAX;
	volatile int8_t x2584 = 2;
	static int64_t t73 = 84750582503487LL;

    t73 = (((x2581<=x2582)*x2583)>>x2584);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x2593 = UINT32_MAX;
	volatile uint64_t x2594 = UINT64_MAX;
	static uint16_t x2595 = UINT16_MAX;
	uint32_t x2596 = 1U;
	static volatile int32_t t74 = -20666;

    t74 = (((x2593<=x2594)*x2595)>>x2596);

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x2597 = 9U;
	int32_t x2598 = 190;
	volatile int16_t x2600 = 28;

    t75 = (((x2597<=x2598)*x2599)>>x2600);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x2642 = 7U;
	int8_t x2643 = 1;
	int8_t x2644 = 3;
	static int32_t t76 = -301554431;

    t76 = (((x2641<=x2642)*x2643)>>x2644);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x2646 = 399886030766373LLU;
	volatile uint64_t x2647 = UINT64_MAX;
	int8_t x2648 = 0;
	volatile uint64_t t77 = 73572508LLU;

    t77 = (((x2645<=x2646)*x2647)>>x2648);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x2677 = -1LL;
	int8_t x2678 = INT8_MAX;
	static uint64_t x2679 = UINT64_MAX;
	uint16_t x2680 = 2U;

    t78 = (((x2677<=x2678)*x2679)>>x2680);

    if (t78 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x2705 = 1U;
	int32_t x2706 = -9791;
	int64_t x2707 = -2864470520875099LL;
	uint8_t x2708 = 2U;
	int64_t t79 = -1351LL;

    t79 = (((x2705<=x2706)*x2707)>>x2708);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x2782 = -167340082;
	static int16_t x2783 = INT16_MAX;
	volatile int32_t t80 = 12;

    t80 = (((x2781<=x2782)*x2783)>>x2784);

    if (t80 != 16383) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x2834 = 1U;
	int64_t x2835 = -1LL;
	uint8_t x2836 = 49U;
	static volatile int64_t t81 = 3LL;

    t81 = (((x2833<=x2834)*x2835)>>x2836);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x2848 = 2U;
	int64_t t82 = -242LL;

    t82 = (((x2845<=x2846)*x2847)>>x2848);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2861 = 5589;
	int8_t x2863 = INT8_MAX;
	uint16_t x2864 = 21U;
	int32_t t83 = 700893930;

    t83 = (((x2861<=x2862)*x2863)>>x2864);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x2905 = 22130396253886533LLU;
	static volatile int32_t x2906 = 151953;
	uint64_t x2908 = 0LLU;
	static int32_t t84 = 1;

    t84 = (((x2905<=x2906)*x2907)>>x2908);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x2937 = INT8_MIN;
	int8_t x2938 = 8;
	uint64_t x2939 = 1LLU;
	int16_t x2940 = 0;
	uint64_t t85 = 1372680316113LLU;

    t85 = (((x2937<=x2938)*x2939)>>x2940);

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x2962 = 17;
	volatile uint16_t x2963 = 423U;
	uint8_t x2964 = 10U;
	static int32_t t86 = 5;

    t86 = (((x2961<=x2962)*x2963)>>x2964);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x3005 = INT16_MIN;
	static int64_t x3006 = INT64_MAX;
	static int32_t x3008 = 26;
	static uint32_t t87 = 4577U;

    t87 = (((x3005<=x3006)*x3007)>>x3008);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x3037 = 27U;
	uint16_t x3038 = 0U;
	static uint64_t x3039 = 0LLU;
	int16_t x3040 = 3;
	volatile uint64_t t88 = 1793301LLU;

    t88 = (((x3037<=x3038)*x3039)>>x3040);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x3073 = INT32_MIN;
	uint64_t x3075 = 468080956761552487LLU;
	static uint16_t x3076 = 3U;

    t89 = (((x3073<=x3074)*x3075)>>x3076);

    if (t89 != 58510119595194060LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x3094 = 24U;
	uint32_t x3096 = 1U;

    t90 = (((x3093<=x3094)*x3095)>>x3096);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x3131 = -1;
	uint16_t x3132 = 6U;
	int32_t t91 = 129189966;

    t91 = (((x3129<=x3130)*x3131)>>x3132);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x3133 = 0;
	int16_t x3134 = -1;
	int16_t x3135 = INT16_MIN;
	int16_t x3136 = 7;
	volatile int32_t t92 = -1875;

    t92 = (((x3133<=x3134)*x3135)>>x3136);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x3150 = INT16_MAX;
	static uint64_t x3151 = 16107023LLU;
	static volatile int32_t x3152 = 1;

    t93 = (((x3149<=x3150)*x3151)>>x3152);

    if (t93 != 8053511LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x3169 = UINT8_MAX;
	int32_t x3170 = -1;
	volatile uint32_t x3171 = 6024210U;
	volatile uint32_t t94 = 13U;

    t94 = (((x3169<=x3170)*x3171)>>x3172);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x3189 = -875;
	int16_t x3190 = INT16_MIN;
	int64_t x3191 = -1LL;
	static volatile int64_t t95 = 373228241LL;

    t95 = (((x3189<=x3190)*x3191)>>x3192);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x3221 = 20U;
	int8_t x3222 = INT8_MIN;
	int32_t t96 = 2935546;

    t96 = (((x3221<=x3222)*x3223)>>x3224);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x3237 = 42571U;
	int64_t x3238 = INT64_MAX;
	volatile uint8_t x3239 = 0U;
	uint16_t x3240 = 21U;

    t97 = (((x3237<=x3238)*x3239)>>x3240);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x3253 = -1;
	static uint64_t x3255 = UINT64_MAX;
	int8_t x3256 = 4;

    t98 = (((x3253<=x3254)*x3255)>>x3256);

    if (t98 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x3261 = 3910U;
	int16_t x3262 = -1;
	volatile uint8_t x3263 = 27U;
	volatile uint8_t x3264 = 10U;
	int32_t t99 = -2834334;

    t99 = (((x3261<=x3262)*x3263)>>x3264);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x3366 = 10597649351457LL;
	uint16_t x3368 = 1U;
	int32_t t100 = -38906260;

    t100 = (((x3365<=x3366)*x3367)>>x3368);

    if (t100 != 1073741823) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x3413 = UINT32_MAX;
	int64_t x3414 = 34763564977LL;
	static volatile int64_t t101 = INT64_MAX;

    t101 = (((x3413<=x3414)*x3415)>>x3416);

    if (t101 != INT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x3497 = INT64_MAX;
	int8_t x3498 = INT8_MAX;
	int64_t x3499 = INT64_MAX;
	uint8_t x3500 = 1U;
	int64_t t102 = 11052215286449LL;

    t102 = (((x3497<=x3498)*x3499)>>x3500);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x3537 = -1;
	volatile int16_t x3538 = INT16_MIN;
	volatile int8_t x3539 = INT8_MIN;
	int32_t x3540 = 10;
	volatile int32_t t103 = -369656537;

    t103 = (((x3537<=x3538)*x3539)>>x3540);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3657 = INT16_MIN;
	volatile uint16_t x3658 = UINT16_MAX;
	static int16_t x3659 = 0;
	int8_t x3660 = 1;

    t104 = (((x3657<=x3658)*x3659)>>x3660);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3685 = -1LL;
	static int16_t x3686 = -1;
	int16_t x3687 = 741;
	static uint16_t x3688 = 29U;
	static volatile int32_t t105 = 0;

    t105 = (((x3685<=x3686)*x3687)>>x3688);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x3693 = INT16_MAX;
	int32_t x3694 = -5940575;
	volatile uint16_t x3695 = UINT16_MAX;
	uint8_t x3696 = 1U;

    t106 = (((x3693<=x3694)*x3695)>>x3696);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x3701 = 1865;
	int32_t x3703 = -1;
	int16_t x3704 = 1;

    t107 = (((x3701<=x3702)*x3703)>>x3704);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x3721 = UINT64_MAX;
	uint8_t x3722 = 39U;
	static int16_t x3723 = 0;
	uint8_t x3724 = 3U;
	static int32_t t108 = 20;

    t108 = (((x3721<=x3722)*x3723)>>x3724);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x3733 = -1LL;
	static int32_t x3734 = INT32_MAX;
	int32_t x3735 = INT32_MAX;
	volatile int16_t x3736 = 14;
	static volatile int32_t t109 = 131529659;

    t109 = (((x3733<=x3734)*x3735)>>x3736);

    if (t109 != 131071) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3785 = -1LL;
	int32_t t110 = -47;

    t110 = (((x3785<=x3786)*x3787)>>x3788);

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x3865 = INT8_MIN;
	static volatile uint32_t x3867 = 1445546638U;
	int32_t x3868 = 1;
	uint32_t t111 = 0U;

    t111 = (((x3865<=x3866)*x3867)>>x3868);

    if (t111 != 722773319U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x3870 = -1;
	int8_t x3872 = 1;
	volatile int32_t t112 = 0;

    t112 = (((x3869<=x3870)*x3871)>>x3872);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x3873 = INT32_MAX;
	static volatile int16_t x3874 = INT16_MAX;
	uint64_t x3875 = 17461LLU;
	uint16_t x3876 = 57U;
	uint64_t t113 = 1LLU;

    t113 = (((x3873<=x3874)*x3875)>>x3876);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x3897 = 1;
	uint16_t x3899 = 7144U;
	int16_t x3900 = 1;
	volatile int32_t t114 = 668624314;

    t114 = (((x3897<=x3898)*x3899)>>x3900);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x3909 = -68;
	int64_t x3910 = INT64_MIN;
	static int64_t x3911 = INT64_MIN;
	volatile int64_t t115 = -9LL;

    t115 = (((x3909<=x3910)*x3911)>>x3912);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x3981 = -1LL;
	uint32_t x3983 = 770U;
	int8_t x3984 = 19;
	volatile uint32_t t116 = 12118U;

    t116 = (((x3981<=x3982)*x3983)>>x3984);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x3989 = INT32_MAX;
	static uint16_t x3991 = 5393U;
	volatile int8_t x3992 = 4;
	volatile int32_t t117 = -60744359;

    t117 = (((x3989<=x3990)*x3991)>>x3992);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x4013 = 48U;
	static volatile int64_t x4014 = INT64_MIN;
	static int8_t x4015 = INT8_MIN;
	static uint8_t x4016 = 26U;

    t118 = (((x4013<=x4014)*x4015)>>x4016);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x4022 = INT64_MIN;
	static int16_t x4023 = INT16_MAX;
	volatile int32_t t119 = -241368263;

    t119 = (((x4021<=x4022)*x4023)>>x4024);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x4045 = UINT64_MAX;
	int32_t x4046 = INT32_MIN;
	int32_t x4047 = -1;
	volatile uint16_t x4048 = 1U;
	int32_t t120 = -63;

    t120 = (((x4045<=x4046)*x4047)>>x4048);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x4065 = INT64_MIN;
	volatile int32_t x4066 = INT32_MIN;

    t121 = (((x4065<=x4066)*x4067)>>x4068);

    if (t121 != 8557973584LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x4231 = 1;
	int32_t t122 = -1;

    t122 = (((x4229<=x4230)*x4231)>>x4232);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x4233 = INT64_MAX;
	int16_t x4234 = INT16_MAX;
	volatile int64_t x4235 = INT64_MIN;

    t123 = (((x4233<=x4234)*x4235)>>x4236);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x4341 = 28741U;
	uint32_t x4342 = UINT32_MAX;
	volatile uint8_t x4343 = UINT8_MAX;
	int16_t x4344 = 0;
	int32_t t124 = -72071;

    t124 = (((x4341<=x4342)*x4343)>>x4344);

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x4367 = INT32_MIN;
	uint8_t x4368 = 4U;
	static int32_t t125 = 9769;

    t125 = (((x4365<=x4366)*x4367)>>x4368);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x4370 = 180U;
	int32_t x4371 = -35907729;
	static int32_t t126 = -52586;

    t126 = (((x4369<=x4370)*x4371)>>x4372);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x4401 = -193036369;
	int64_t x4402 = INT64_MIN;
	int8_t x4403 = -1;
	volatile int32_t t127 = -23821940;

    t127 = (((x4401<=x4402)*x4403)>>x4404);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x4444 = 10LLU;
	int64_t t128 = -378777200786LL;

    t128 = (((x4441<=x4442)*x4443)>>x4444);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x4465 = 348139;
	int64_t x4466 = INT64_MIN;
	int16_t x4467 = -13268;
	uint8_t x4468 = 2U;

    t129 = (((x4465<=x4466)*x4467)>>x4468);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x4473 = UINT16_MAX;
	volatile uint32_t x4475 = 6U;
	int32_t x4476 = 1;
	uint32_t t130 = 175727U;

    t130 = (((x4473<=x4474)*x4475)>>x4476);

    if (t130 != 3U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x4477 = -28;
	uint16_t x4479 = UINT16_MAX;
	volatile uint8_t x4480 = 1U;

    t131 = (((x4477<=x4478)*x4479)>>x4480);

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x4483 = UINT16_MAX;
	uint64_t x4484 = 6LLU;

    t132 = (((x4481<=x4482)*x4483)>>x4484);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x4489 = -1;
	int8_t x4490 = -1;
	static uint8_t x4491 = UINT8_MAX;

    t133 = (((x4489<=x4490)*x4491)>>x4492);

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x4525 = 5U;
	int32_t x4526 = -1;
	int8_t x4527 = INT8_MIN;
	int8_t x4528 = 13;

    t134 = (((x4525<=x4526)*x4527)>>x4528);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x4533 = 1;
	static volatile uint32_t x4534 = 1909999U;
	volatile uint64_t x4535 = 88LLU;
	uint16_t x4536 = 3U;
	uint64_t t135 = 7061091LLU;

    t135 = (((x4533<=x4534)*x4535)>>x4536);

    if (t135 != 11LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4537 = INT64_MAX;
	int8_t x4538 = 4;
	int8_t x4539 = INT8_MIN;
	int8_t x4540 = 4;
	volatile int32_t t136 = -23516;

    t136 = (((x4537<=x4538)*x4539)>>x4540);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x4553 = -1LL;
	int64_t x4554 = -888637930LL;
	static uint32_t x4556 = 1U;
	uint64_t t137 = 6676569886247102LLU;

    t137 = (((x4553<=x4554)*x4555)>>x4556);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x4654 = 1201606548787884015LLU;
	uint32_t x4655 = 3993U;

    t138 = (((x4653<=x4654)*x4655)>>x4656);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x4737 = INT8_MIN;
	int64_t x4738 = 8459450134LL;
	uint8_t x4739 = 3U;
	uint32_t x4740 = 27U;
	int32_t t139 = -379052;

    t139 = (((x4737<=x4738)*x4739)>>x4740);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x4813 = -4490LL;
	int32_t t140 = 13;

    t140 = (((x4813<=x4814)*x4815)>>x4816);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x4821 = 2125;
	int8_t x4822 = -1;
	int8_t x4823 = -3;
	volatile int64_t x4824 = 2LL;
	static volatile int32_t t141 = -108220;

    t141 = (((x4821<=x4822)*x4823)>>x4824);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x4847 = 8;
	uint8_t x4848 = 13U;

    t142 = (((x4845<=x4846)*x4847)>>x4848);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x4877 = UINT16_MAX;
	int8_t x4878 = 18;
	static int64_t x4880 = 6LL;
	int32_t t143 = 14;

    t143 = (((x4877<=x4878)*x4879)>>x4880);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x4881 = INT8_MIN;
	volatile int16_t x4882 = INT16_MIN;
	static int16_t x4883 = INT16_MIN;
	int8_t x4884 = 5;
	int32_t t144 = 1750;

    t144 = (((x4881<=x4882)*x4883)>>x4884);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x4889 = 493;
	int64_t x4890 = INT64_MIN;
	int8_t x4891 = INT8_MIN;
	volatile uint8_t x4892 = 2U;
	static int32_t t145 = 775;

    t145 = (((x4889<=x4890)*x4891)>>x4892);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x4906 = INT16_MIN;
	uint16_t x4907 = UINT16_MAX;
	int32_t t146 = 37469339;

    t146 = (((x4905<=x4906)*x4907)>>x4908);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x4913 = INT64_MAX;
	int8_t x4914 = INT8_MIN;
	static uint8_t x4915 = 6U;
	int32_t x4916 = 1;
	volatile int32_t t147 = 37347147;

    t147 = (((x4913<=x4914)*x4915)>>x4916);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x4997 = 3U;
	volatile int64_t x4998 = INT64_MIN;
	uint8_t x5000 = 6U;
	volatile int32_t t148 = 9;

    t148 = (((x4997<=x4998)*x4999)>>x5000);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x5017 = INT8_MIN;
	int32_t x5018 = INT32_MIN;
	uint16_t x5019 = UINT16_MAX;
	volatile uint32_t x5020 = 0U;
	int32_t t149 = 203229603;

    t149 = (((x5017<=x5018)*x5019)>>x5020);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x5041 = -1;
	static uint8_t x5042 = 0U;
	uint16_t x5043 = 10U;

    t150 = (((x5041<=x5042)*x5043)>>x5044);

    if (t150 != 10) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x5181 = 0U;
	uint32_t x5182 = 407U;
	int64_t x5183 = INT64_MAX;
	uint16_t x5184 = 6U;
	volatile int64_t t151 = 297895220607LL;

    t151 = (((x5181<=x5182)*x5183)>>x5184);

    if (t151 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint8_t x5225 = 42U;
	int16_t x5226 = INT16_MIN;
	static volatile int32_t x5228 = 25;

    t152 = (((x5225<=x5226)*x5227)>>x5228);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x5301 = -1LL;
	static uint32_t x5302 = 424106U;
	int64_t x5303 = 49337LL;
	uint16_t x5304 = 1U;

    t153 = (((x5301<=x5302)*x5303)>>x5304);

    if (t153 != 24668LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x5381 = UINT16_MAX;
	uint16_t x5382 = UINT16_MAX;
	static int64_t x5383 = INT64_MAX;
	uint16_t x5384 = 0U;
	volatile int64_t t154 = INT64_MAX;

    t154 = (((x5381<=x5382)*x5383)>>x5384);

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x5437 = 14588U;
	int64_t x5438 = INT64_MIN;
	int32_t x5439 = -29;
	static volatile int16_t x5440 = 7;
	static int32_t t155 = 851985581;

    t155 = (((x5437<=x5438)*x5439)>>x5440);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x5537 = 1015U;
	int16_t x5539 = INT16_MAX;
	int8_t x5540 = 20;
	static int32_t t156 = -359009;

    t156 = (((x5537<=x5538)*x5539)>>x5540);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x5565 = 1U;
	static int32_t x5566 = INT32_MAX;
	uint16_t x5567 = UINT16_MAX;
	uint8_t x5568 = 1U;
	volatile int32_t t157 = -10020;

    t157 = (((x5565<=x5566)*x5567)>>x5568);

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x5881 = 6587;
	uint8_t x5882 = UINT8_MAX;
	int8_t x5883 = -11;
	static int32_t t158 = 1;

    t158 = (((x5881<=x5882)*x5883)>>x5884);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x5941 = -1;
	static int32_t x5942 = INT32_MIN;
	static uint8_t x5943 = 3U;
	uint16_t x5944 = 13U;
	int32_t t159 = 270364;

    t159 = (((x5941<=x5942)*x5943)>>x5944);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x6041 = UINT64_MAX;
	uint32_t x6042 = UINT32_MAX;
	volatile int8_t x6043 = -1;
	static int64_t x6044 = 1LL;
	int32_t t160 = 564839;

    t160 = (((x6041<=x6042)*x6043)>>x6044);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x6077 = -1;
	int8_t x6078 = INT8_MIN;
	int8_t x6079 = 5;
	uint64_t x6080 = 0LLU;
	int32_t t161 = 285675707;

    t161 = (((x6077<=x6078)*x6079)>>x6080);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x6093 = 2U;
	uint8_t x6094 = UINT8_MAX;
	volatile int8_t x6096 = 0;
	volatile int32_t t162 = -2623830;

    t162 = (((x6093<=x6094)*x6095)>>x6096);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x6102 = 315U;
	int8_t x6103 = INT8_MAX;
	int32_t t163 = 474048526;

    t163 = (((x6101<=x6102)*x6103)>>x6104);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x6106 = -1;
	uint16_t x6107 = UINT16_MAX;
	int16_t x6108 = 1;
	int32_t t164 = -22311398;

    t164 = (((x6105<=x6106)*x6107)>>x6108);

    if (t164 != 32767) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x6109 = UINT64_MAX;
	int32_t x6111 = -327815;
	static volatile uint16_t x6112 = 4U;
	int32_t t165 = -14363;

    t165 = (((x6109<=x6110)*x6111)>>x6112);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x6165 = INT16_MAX;
	int8_t x6166 = 36;

    t166 = (((x6165<=x6166)*x6167)>>x6168);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x6177 = INT16_MIN;
	uint64_t x6179 = 23769650LLU;
	uint64_t x6180 = 39LLU;
	uint64_t t167 = 1280LLU;

    t167 = (((x6177<=x6178)*x6179)>>x6180);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x6205 = UINT16_MAX;
	static int32_t x6206 = -1;
	int16_t x6207 = -7;
	uint8_t x6208 = 11U;
	int32_t t168 = -731916887;

    t168 = (((x6205<=x6206)*x6207)>>x6208);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x6210 = INT32_MIN;
	int32_t x6211 = -1;
	volatile int32_t t169 = 0;

    t169 = (((x6209<=x6210)*x6211)>>x6212);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x6233 = UINT8_MAX;
	int32_t x6234 = -69034;

    t170 = (((x6233<=x6234)*x6235)>>x6236);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x6245 = -1;
	int64_t x6246 = INT64_MIN;
	static int32_t x6247 = 4;
	uint32_t x6248 = 14U;
	static int32_t t171 = -92;

    t171 = (((x6245<=x6246)*x6247)>>x6248);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x6253 = UINT16_MAX;
	static volatile int16_t x6254 = -225;
	static uint64_t x6255 = 54852279LLU;
	int8_t x6256 = 0;
	static uint64_t t172 = 5648642252502LLU;

    t172 = (((x6253<=x6254)*x6255)>>x6256);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x6337 = INT32_MIN;
	uint16_t x6338 = 69U;
	uint16_t x6339 = UINT16_MAX;
	volatile int8_t x6340 = 2;
	volatile int32_t t173 = 1;

    t173 = (((x6337<=x6338)*x6339)>>x6340);

    if (t173 != 16383) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x6346 = -1LL;
	volatile int64_t x6347 = -1LL;
	int8_t x6348 = 0;
	int64_t t174 = 78447059651LL;

    t174 = (((x6345<=x6346)*x6347)>>x6348);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x6377 = INT64_MAX;
	uint16_t x6379 = UINT16_MAX;
	uint8_t x6380 = 7U;

    t175 = (((x6377<=x6378)*x6379)>>x6380);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x6409 = INT64_MAX;
	uint16_t x6411 = 5U;
	volatile int32_t t176 = -140971952;

    t176 = (((x6409<=x6410)*x6411)>>x6412);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x6425 = -1LL;
	int32_t x6426 = -1;
	int16_t x6427 = INT16_MAX;
	int8_t x6428 = 9;
	volatile int32_t t177 = -508771;

    t177 = (((x6425<=x6426)*x6427)>>x6428);

    if (t177 != 63) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x6473 = 3169U;
	int8_t x6474 = INT8_MAX;
	int8_t x6475 = -1;
	int32_t t178 = -182791;

    t178 = (((x6473<=x6474)*x6475)>>x6476);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x6566 = -1;
	int32_t x6567 = INT32_MIN;
	volatile uint16_t x6568 = 0U;
	volatile int32_t t179 = -7;

    t179 = (((x6565<=x6566)*x6567)>>x6568);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x6586 = 44U;
	static int16_t x6587 = INT16_MIN;
	volatile int32_t t180 = -1;

    t180 = (((x6585<=x6586)*x6587)>>x6588);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x6598 = 4098272328626323795LL;
	uint32_t x6599 = UINT32_MAX;
	uint32_t x6600 = 0U;
	uint32_t t181 = UINT32_MAX;

    t181 = (((x6597<=x6598)*x6599)>>x6600);

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x6617 = 1146267U;
	int64_t x6618 = INT64_MIN;
	uint32_t x6619 = 1293491382U;
	volatile uint32_t t182 = 760454U;

    t182 = (((x6617<=x6618)*x6619)>>x6620);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x6657 = 5025U;
	int16_t x6658 = 3;
	int32_t x6659 = INT32_MIN;
	int16_t x6660 = 4;
	volatile int32_t t183 = 80;

    t183 = (((x6657<=x6658)*x6659)>>x6660);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x6665 = INT8_MAX;
	uint8_t x6666 = 3U;
	int32_t t184 = 3;

    t184 = (((x6665<=x6666)*x6667)>>x6668);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint64_t x6673 = 450927251342788LLU;
	uint8_t x6674 = 7U;
	static uint8_t x6676 = 29U;
	int32_t t185 = 56625;

    t185 = (((x6673<=x6674)*x6675)>>x6676);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x6677 = 0;
	int8_t x6678 = -1;
	int16_t x6680 = 5;
	volatile int32_t t186 = -119630;

    t186 = (((x6677<=x6678)*x6679)>>x6680);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x6694 = -7;
	uint32_t x6695 = 106939U;
	volatile int8_t x6696 = 1;
	uint32_t t187 = 231U;

    t187 = (((x6693<=x6694)*x6695)>>x6696);

    if (t187 != 53469U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x6701 = UINT16_MAX;
	int64_t x6702 = 3384550044LL;
	int64_t x6703 = INT64_MAX;
	uint8_t x6704 = 0U;
	volatile int64_t t188 = INT64_MAX;

    t188 = (((x6701<=x6702)*x6703)>>x6704);

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x6713 = -46;
	int16_t x6716 = 0;
	int32_t t189 = 219301;

    t189 = (((x6713<=x6714)*x6715)>>x6716);

    if (t189 != 2186) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x6781 = UINT8_MAX;
	volatile uint64_t x6782 = 946126836049LLU;
	uint64_t x6783 = 6944124587804996097LLU;
	uint8_t x6784 = 1U;
	static volatile uint64_t t190 = 6456167540312892LLU;

    t190 = (((x6781<=x6782)*x6783)>>x6784);

    if (t190 != 3472062293902498048LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x6869 = 168U;
	int64_t x6870 = INT64_MIN;
	int16_t x6871 = -1;
	uint8_t x6872 = 6U;
	volatile int32_t t191 = -1300518;

    t191 = (((x6869<=x6870)*x6871)>>x6872);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x6946 = 4608315U;
	int32_t x6948 = 1;
	volatile int32_t t192 = -6908;

    t192 = (((x6945<=x6946)*x6947)>>x6948);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x6985 = -21;
	volatile int16_t x6988 = 6;
	volatile uint64_t t193 = 1083965370213LLU;

    t193 = (((x6985<=x6986)*x6987)>>x6988);

    if (t193 != 70477978LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x7045 = 15587642014873LL;
	int32_t x7047 = INT32_MIN;
	int8_t x7048 = 1;
	int32_t t194 = 4090;

    t194 = (((x7045<=x7046)*x7047)>>x7048);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x7137 = 222800475269481LLU;
	int32_t x7138 = 80;
	int32_t x7139 = -1;
	static uint8_t x7140 = 1U;
	int32_t t195 = -18;

    t195 = (((x7137<=x7138)*x7139)>>x7140);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x7155 = INT16_MIN;
	volatile int8_t x7156 = 7;
	static int32_t t196 = -655274529;

    t196 = (((x7153<=x7154)*x7155)>>x7156);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x7157 = INT8_MIN;
	uint64_t x7159 = 1417LLU;
	uint16_t x7160 = 6U;
	uint64_t t197 = 1103308760690LLU;

    t197 = (((x7157<=x7158)*x7159)>>x7160);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x7197 = INT32_MIN;
	int32_t x7198 = INT32_MIN;
	int8_t x7199 = INT8_MAX;
	int32_t t198 = 5782;

    t198 = (((x7197<=x7198)*x7199)>>x7200);

    if (t198 != 63) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x7233 = UINT16_MAX;
	int8_t x7235 = -1;
	static uint8_t x7236 = 1U;
	static int32_t t199 = 0;

    t199 = (((x7233<=x7234)*x7235)>>x7236);

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

