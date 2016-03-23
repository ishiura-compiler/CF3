
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

static volatile uint32_t x2 = 1U;
uint8_t x4 = 2U;
uint32_t x46 = 1699307U;
int64_t x53 = 1021559700453LL;
int32_t x56 = 376775967;
volatile int16_t x96 = 8084;
int16_t x149 = -1;
uint32_t x150 = 8U;
int8_t x152 = INT8_MIN;
volatile uint8_t x190 = UINT8_MAX;
uint16_t x192 = UINT16_MAX;
uint8_t x219 = 5U;
volatile int32_t t10 = 4051398;
int64_t x237 = 16242640308441LL;
int8_t x238 = 0;
volatile int64_t x249 = -68574366LL;
int8_t x251 = 23;
volatile int32_t t12 = 5262252;
static uint8_t x335 = 2U;
int32_t t14 = -26549;
volatile int16_t x353 = INT16_MIN;
uint16_t x355 = 0U;
static volatile uint32_t t20 = 1007464157U;
int8_t x577 = -7;
static uint16_t x578 = 1U;
uint8_t x579 = 1U;
volatile uint32_t x588 = 6664530U;
static uint32_t t23 = 171U;
static int16_t x625 = INT16_MIN;
int8_t x674 = -1;
volatile uint8_t x703 = 31U;
uint64_t x794 = 1194LLU;
int64_t x866 = INT64_MIN;
volatile int16_t x867 = 6;
uint8_t x963 = 0U;
uint64_t x1102 = 97LLU;
uint16_t x1168 = 20885U;
int32_t t38 = -344229473;
int16_t x1258 = INT16_MAX;
uint16_t x1309 = 0U;
uint8_t x1398 = 90U;
int8_t x1409 = -29;
int16_t x1410 = 100;
volatile int8_t x1411 = 8;
volatile int32_t t46 = 10015421;
volatile int32_t x1496 = INT32_MAX;
static volatile int32_t t48 = 5912207;
uint64_t x1520 = 46679LLU;
uint16_t x1616 = UINT16_MAX;
volatile int32_t t53 = 148900;
volatile int64_t t54 = -1200816252434LL;
static volatile int8_t x1644 = -5;
uint8_t x1713 = 36U;
int32_t x1714 = 116707596;
uint8_t x1716 = 1U;
int16_t x1773 = -1;
int64_t x1849 = -1LL;
int8_t x1897 = 26;
int32_t t62 = -23;
static int8_t x1909 = INT8_MIN;
int64_t x1910 = INT64_MAX;
int16_t x1912 = INT16_MAX;
static uint8_t x1971 = 0U;
int8_t x1973 = INT8_MAX;
int16_t x1974 = INT16_MAX;
uint8_t x1993 = 3U;
static volatile int32_t x1994 = INT32_MIN;
int8_t x1995 = 1;
volatile int8_t x2023 = 2;
volatile uint8_t x2024 = 5U;
static uint8_t x2057 = 52U;
static uint8_t x2253 = 5U;
int32_t t75 = -61202587;
int32_t t76 = -15610;
static uint8_t x2423 = 11U;
volatile int32_t t79 = -23;
uint64_t x2470 = UINT64_MAX;
volatile int64_t t81 = INT64_MIN;
static int8_t x2664 = -1;
static int32_t t84 = -770157;
int8_t x2907 = 8;
int16_t x2908 = -124;
volatile int64_t x2921 = -37489632967840LL;
uint64_t x2926 = UINT64_MAX;
int64_t x2934 = -1LL;
int64_t x2975 = 3LL;
int32_t x3041 = -178162042;
volatile int64_t x3042 = -393235965LL;
static uint8_t x3276 = UINT8_MAX;
volatile int64_t x3365 = INT64_MIN;
int64_t x3372 = -189139LL;
volatile int16_t x3373 = -1;
static int32_t x3444 = INT32_MIN;
uint16_t x3445 = 13391U;
int64_t x3496 = -53LL;
uint64_t x3520 = UINT64_MAX;
static int32_t x3818 = -4886780;
int16_t x3938 = INT16_MIN;
static uint64_t x3953 = UINT64_MAX;
int16_t x3956 = INT16_MIN;
int16_t x3985 = -3372;
int8_t x3986 = INT8_MIN;
uint8_t x4081 = 4U;
volatile int32_t t120 = 2;
static int32_t t123 = -376;
volatile uint8_t x4196 = 1U;
int64_t x4241 = INT64_MAX;
int8_t x4243 = 26;
volatile int32_t x4263 = 5;
int64_t t127 = -45388410LL;
static volatile uint32_t t131 = 3854060U;
int32_t t133 = 37168393;
uint32_t x4433 = 127888648U;
uint64_t x4474 = 114LLU;
static volatile int32_t x4533 = -2687;
static uint32_t x4597 = 630795079U;
int32_t t138 = -30311360;
int8_t x4686 = INT8_MIN;
volatile int32_t t139 = 639;
int16_t x4957 = 250;
int64_t x4970 = 31665756218376825LL;
volatile int16_t x5012 = INT16_MAX;
static int16_t x5064 = -1;
int32_t t151 = 162;
int8_t x5310 = INT8_MIN;
uint16_t x5316 = UINT16_MAX;
static volatile int32_t t159 = 802062229;
volatile int32_t t160 = INT32_MAX;
int8_t x5412 = INT8_MAX;
uint16_t x5453 = 11U;
int32_t x5506 = 1;
uint32_t x5508 = 6806532U;
volatile int16_t x5563 = 1;
int16_t x5582 = -1;
int32_t t166 = 2595;
static uint8_t x5618 = 3U;
int8_t x5661 = INT8_MIN;
static volatile uint8_t x5666 = 3U;
uint32_t x5667 = 7U;
int32_t x5674 = -8090111;
uint64_t x5727 = 15LLU;
uint32_t x5769 = UINT32_MAX;
volatile uint8_t x5770 = 55U;
volatile int64_t x5803 = 0LL;
static int8_t x5804 = INT8_MIN;
uint16_t x5817 = 4U;
int8_t x5819 = 0;
static volatile uint32_t x5839 = 1U;
int16_t x5960 = INT16_MIN;
volatile int64_t x6070 = INT64_MIN;
uint16_t x6071 = 4U;
uint8_t x6072 = 3U;
int32_t t181 = 1642700;
volatile int32_t t182 = 16661069;
static uint32_t t183 = 96182U;
int32_t x6121 = INT32_MIN;
int32_t x6146 = -1;
uint32_t x6147 = 14U;
static int32_t x6185 = 2083;
static uint8_t x6187 = 3U;
static int64_t x6196 = 2727818LL;
int32_t x6221 = -1;
int16_t x6224 = INT16_MIN;
uint16_t x6242 = UINT16_MAX;
int8_t x6243 = 9;
int8_t x6270 = INT8_MIN;
int32_t t191 = 345816;
uint32_t x6307 = 3U;
int32_t x6409 = 1518;
uint8_t x6411 = 0U;
volatile int64_t x6412 = INT64_MIN;
int64_t x6601 = INT64_MAX;
int64_t x6602 = INT64_MAX;
uint32_t t197 = 538660U;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	volatile uint16_t x3 = 2U;
	int32_t t0 = 81706;

    t0 = (((x1<=x2)<<x3)*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x45 = UINT64_MAX;
	static uint16_t x47 = 21U;
	int64_t x48 = INT64_MIN;
	volatile int64_t t1 = 7LL;

    t1 = (((x45<=x46)<<x47)*x48);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x54 = 147U;
	int8_t x55 = 2;
	volatile int32_t t2 = 0;

    t2 = (((x53<=x54)<<x55)*x56);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 12U;
	volatile uint16_t x83 = 1U;
	int64_t x84 = INT64_MIN;
	volatile int64_t t3 = -58635383453LL;

    t3 = (((x81<=x82)<<x83)*x84);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x89 = INT64_MIN;
	static int32_t x90 = INT32_MAX;
	uint32_t x91 = 5U;
	uint8_t x92 = UINT8_MAX;
	int32_t t4 = -198;

    t4 = (((x89<=x90)<<x91)*x92);

    if (t4 != 8160) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = -1;
	static uint8_t x95 = 2U;
	static int32_t t5 = 60375;

    t5 = (((x93<=x94)<<x95)*x96);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x97 = -1LL;
	volatile int8_t x98 = INT8_MIN;
	volatile uint8_t x99 = 18U;
	int8_t x100 = 0;
	volatile int32_t t6 = 410;

    t6 = (((x97<=x98)<<x99)*x100);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x151 = 0;
	static int32_t t7 = 483990466;

    t7 = (((x149<=x150)<<x151)*x152);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MIN;
	static int32_t x163 = 0;
	int64_t x164 = -101905298LL;
	volatile int64_t t8 = 2047596515LL;

    t8 = (((x161<=x162)<<x163)*x164);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x189 = 531440U;
	int16_t x191 = 2;
	volatile int32_t t9 = -14;

    t9 = (((x189<=x190)<<x191)*x192);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x217 = UINT8_MAX;
	uint16_t x218 = 213U;
	int8_t x220 = -1;

    t10 = (((x217<=x218)<<x219)*x220);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x239 = 1;
	static uint64_t x240 = 203294887LLU;
	volatile uint64_t t11 = 1630LLU;

    t11 = (((x237<=x238)<<x239)*x240);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x250 = INT32_MIN;
	int32_t x252 = INT32_MAX;

    t12 = (((x249<=x250)<<x251)*x252);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x273 = INT16_MIN;
	static uint32_t x274 = 14U;
	uint32_t x275 = 29U;
	uint32_t x276 = 2U;
	uint32_t t13 = 398981U;

    t13 = (((x273<=x274)<<x275)*x276);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x333 = 242538;
	int64_t x334 = -1LL;
	uint8_t x336 = UINT8_MAX;

    t14 = (((x333<=x334)<<x335)*x336);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x354 = INT16_MIN;
	uint8_t x356 = 4U;
	int32_t t15 = -2;

    t15 = (((x353<=x354)<<x355)*x356);

    if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x385 = 10LLU;
	static uint16_t x386 = 12U;
	uint8_t x387 = 0U;
	uint8_t x388 = 52U;
	int32_t t16 = 294408572;

    t16 = (((x385<=x386)<<x387)*x388);

    if (t16 != 52) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x393 = UINT32_MAX;
	uint16_t x394 = 11U;
	int8_t x395 = 1;
	int8_t x396 = 1;
	int32_t t17 = 402349679;

    t17 = (((x393<=x394)<<x395)*x396);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x417 = INT8_MAX;
	static int16_t x418 = 1357;
	static int8_t x419 = 11;
	static int16_t x420 = INT16_MIN;
	int32_t t18 = 103;

    t18 = (((x417<=x418)<<x419)*x420);

    if (t18 != -67108864) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x489 = UINT8_MAX;
	volatile int16_t x490 = 3447;
	int32_t x491 = 3;
	uint64_t x492 = 990726806675702118LLU;
	uint64_t t19 = 176779705385098776LLU;

    t19 = (((x489<=x490)<<x491)*x492);

    if (t19 != 7925814453405616944LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x562 = -1;
	static uint16_t x563 = 1U;
	uint32_t x564 = 348886716U;

    t20 = (((x561<=x562)<<x563)*x564);

    if (t20 != 697773432U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x565 = INT64_MAX;
	static volatile int32_t x566 = INT32_MIN;
	uint8_t x567 = 0U;
	int8_t x568 = -39;
	int32_t t21 = -207784;

    t21 = (((x565<=x566)<<x567)*x568);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x580 = 9631U;
	int32_t t22 = 7218;

    t22 = (((x577<=x578)<<x579)*x580);

    if (t22 != 19262) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	static int8_t x586 = INT8_MAX;
	static volatile int16_t x587 = 10;

    t23 = (((x585<=x586)<<x587)*x588);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x626 = INT32_MAX;
	static int16_t x627 = 0;
	int8_t x628 = INT8_MIN;
	int32_t t24 = -2982028;

    t24 = (((x625<=x626)<<x627)*x628);

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x673 = -1;
	static int16_t x675 = 11;
	uint32_t x676 = UINT32_MAX;
	uint32_t t25 = 7330394U;

    t25 = (((x673<=x674)<<x675)*x676);

    if (t25 != 4294965248U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x685 = 2;
	volatile int16_t x686 = -200;
	int8_t x687 = 1;
	int16_t x688 = -1;
	int32_t t26 = -49227;

    t26 = (((x685<=x686)<<x687)*x688);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x693 = INT64_MIN;
	volatile int32_t x694 = -1687;
	volatile uint16_t x695 = 10U;
	uint16_t x696 = 95U;
	int32_t t27 = -56430;

    t27 = (((x693<=x694)<<x695)*x696);

    if (t27 != 97280) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x701 = -1;
	volatile int64_t x702 = INT64_MIN;
	uint64_t x704 = 1880333995833409329LLU;
	uint64_t t28 = 207101597089LLU;

    t28 = (((x701<=x702)<<x703)*x704);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x713 = 0U;
	int64_t x714 = INT64_MAX;
	volatile int8_t x715 = 1;
	int8_t x716 = INT8_MAX;
	volatile int32_t t29 = -1;

    t29 = (((x713<=x714)<<x715)*x716);

    if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x761 = -1;
	int8_t x762 = INT8_MIN;
	int8_t x763 = 1;
	uint64_t x764 = 6839180754723207072LLU;
	uint64_t t30 = 15898LLU;

    t30 = (((x761<=x762)<<x763)*x764);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x793 = -1;
	int8_t x795 = 11;
	volatile int16_t x796 = 0;
	volatile int32_t t31 = -264566983;

    t31 = (((x793<=x794)<<x795)*x796);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x865 = INT32_MIN;
	volatile int32_t x868 = INT32_MIN;
	volatile int32_t t32 = 0;

    t32 = (((x865<=x866)<<x867)*x868);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x869 = 6U;
	int16_t x870 = 0;
	uint16_t x871 = 1U;
	static int16_t x872 = -444;
	volatile int32_t t33 = 2;

    t33 = (((x869<=x870)<<x871)*x872);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x961 = -1;
	int16_t x962 = -1;
	volatile int16_t x964 = -13;
	int32_t t34 = 116791203;

    t34 = (((x961<=x962)<<x963)*x964);

    if (t34 != -13) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1057 = INT32_MIN;
	volatile uint64_t x1058 = 158LLU;
	uint64_t x1059 = 1LLU;
	volatile int32_t x1060 = -14934;
	volatile int32_t t35 = -3016792;

    t35 = (((x1057<=x1058)<<x1059)*x1060);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1101 = 3268U;
	static uint8_t x1103 = 13U;
	static volatile int64_t x1104 = INT64_MAX;
	volatile int64_t t36 = 12LL;

    t36 = (((x1101<=x1102)<<x1103)*x1104);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x1121 = UINT8_MAX;
	static uint64_t x1122 = 483695LLU;
	uint16_t x1123 = 3U;
	int16_t x1124 = INT16_MIN;
	int32_t t37 = 1400;

    t37 = (((x1121<=x1122)<<x1123)*x1124);

    if (t37 != -262144) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1165 = 208;
	static int64_t x1166 = 1259532868593LL;
	int16_t x1167 = 16;

    t38 = (((x1165<=x1166)<<x1167)*x1168);

    if (t38 != 1368719360) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1193 = INT16_MAX;
	volatile int16_t x1194 = INT16_MIN;
	static uint8_t x1195 = 13U;
	volatile uint32_t x1196 = 615309U;
	static volatile uint32_t t39 = 23U;

    t39 = (((x1193<=x1194)<<x1195)*x1196);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x1205 = UINT16_MAX;
	int64_t x1206 = 10654LL;
	int8_t x1207 = 1;
	volatile int16_t x1208 = INT16_MIN;
	volatile int32_t t40 = -430700;

    t40 = (((x1205<=x1206)<<x1207)*x1208);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1257 = 78694LL;
	static int32_t x1259 = 0;
	volatile uint64_t x1260 = 555093130374777991LLU;
	uint64_t t41 = 123126LLU;

    t41 = (((x1257<=x1258)<<x1259)*x1260);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x1310 = -19;
	static uint8_t x1311 = 3U;
	int32_t x1312 = INT32_MAX;
	volatile int32_t t42 = -651125;

    t42 = (((x1309<=x1310)<<x1311)*x1312);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x1333 = 7005304U;
	uint8_t x1334 = 1U;
	volatile uint32_t x1335 = 15U;
	int64_t x1336 = INT64_MIN;
	int64_t t43 = 32075529LL;

    t43 = (((x1333<=x1334)<<x1335)*x1336);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x1357 = -1;
	int8_t x1358 = 1;
	int8_t x1359 = 0;
	volatile uint64_t x1360 = 45LLU;
	uint64_t t44 = 63581729166298989LLU;

    t44 = (((x1357<=x1358)<<x1359)*x1360);

    if (t44 != 45LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x1397 = INT8_MAX;
	volatile int8_t x1399 = 1;
	volatile int8_t x1400 = -1;
	static int32_t t45 = -173862;

    t45 = (((x1397<=x1398)<<x1399)*x1400);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x1412 = 3;

    t46 = (((x1409<=x1410)<<x1411)*x1412);

    if (t46 != 768) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1437 = 24LL;
	volatile int8_t x1438 = -1;
	int16_t x1439 = 1;
	volatile uint8_t x1440 = UINT8_MAX;
	int32_t t47 = -31;

    t47 = (((x1437<=x1438)<<x1439)*x1440);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x1493 = INT8_MIN;
	int16_t x1494 = -418;
	volatile uint16_t x1495 = 11U;

    t48 = (((x1493<=x1494)<<x1495)*x1496);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x1517 = UINT32_MAX;
	uint8_t x1518 = UINT8_MAX;
	uint8_t x1519 = 16U;
	uint64_t t49 = 7148247LLU;

    t49 = (((x1517<=x1518)<<x1519)*x1520);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x1529 = 174462351U;
	uint16_t x1530 = 0U;
	uint16_t x1531 = 6U;
	volatile int8_t x1532 = INT8_MIN;
	volatile int32_t t50 = -2;

    t50 = (((x1529<=x1530)<<x1531)*x1532);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x1541 = INT8_MIN;
	int32_t x1542 = INT32_MIN;
	int8_t x1543 = 1;
	uint32_t x1544 = 27084833U;
	uint32_t t51 = 7439563U;

    t51 = (((x1541<=x1542)<<x1543)*x1544);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x1605 = INT32_MIN;
	int32_t x1606 = INT32_MIN;
	uint16_t x1607 = 14U;
	int16_t x1608 = 655;
	volatile int32_t t52 = -430858748;

    t52 = (((x1605<=x1606)<<x1607)*x1608);

    if (t52 != 10731520) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x1613 = INT8_MIN;
	static int64_t x1614 = -1LL;
	volatile int16_t x1615 = 1;

    t53 = (((x1613<=x1614)<<x1615)*x1616);

    if (t53 != 131070) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x1617 = 12312;
	int32_t x1618 = 25;
	uint32_t x1619 = 2U;
	int64_t x1620 = INT64_MAX;

    t54 = (((x1617<=x1618)<<x1619)*x1620);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x1641 = -21;
	volatile int8_t x1642 = INT8_MAX;
	uint16_t x1643 = 12U;
	volatile int32_t t55 = -230232;

    t55 = (((x1641<=x1642)<<x1643)*x1644);

    if (t55 != -20480) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x1653 = INT16_MAX;
	uint16_t x1654 = 29U;
	static uint8_t x1655 = 5U;
	static int8_t x1656 = -1;
	volatile int32_t t56 = -27316;

    t56 = (((x1653<=x1654)<<x1655)*x1656);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x1715 = 3U;
	volatile int32_t t57 = 14;

    t57 = (((x1713<=x1714)<<x1715)*x1716);

    if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x1774 = 353;
	int8_t x1775 = 0;
	int64_t x1776 = 12788234706076539LL;
	static volatile int64_t t58 = 11659LL;

    t58 = (((x1773<=x1774)<<x1775)*x1776);

    if (t58 != 12788234706076539LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x1833 = INT32_MAX;
	uint16_t x1834 = 1U;
	volatile int16_t x1835 = 1;
	int16_t x1836 = -1;
	static int32_t t59 = 0;

    t59 = (((x1833<=x1834)<<x1835)*x1836);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x1850 = 62LLU;
	static int16_t x1851 = 7;
	volatile int8_t x1852 = -1;
	static volatile int32_t t60 = -151;

    t60 = (((x1849<=x1850)<<x1851)*x1852);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x1869 = INT64_MIN;
	int16_t x1870 = INT16_MAX;
	int8_t x1871 = 27;
	int64_t x1872 = 198662LL;
	volatile int64_t t61 = 7552184LL;

    t61 = (((x1869<=x1870)<<x1871)*x1872);

    if (t61 != 26663962279936LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x1898 = 69915244909668649LLU;
	static uint16_t x1899 = 14U;
	volatile uint8_t x1900 = UINT8_MAX;

    t62 = (((x1897<=x1898)<<x1899)*x1900);

    if (t62 != 4177920) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x1911 = 1U;
	static volatile int32_t t63 = 285350;

    t63 = (((x1909<=x1910)<<x1911)*x1912);

    if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x1957 = INT32_MIN;
	int32_t x1958 = -1;
	static int8_t x1959 = 0;
	uint64_t x1960 = 110708217814911317LLU;
	volatile uint64_t t64 = 4186871115171LLU;

    t64 = (((x1957<=x1958)<<x1959)*x1960);

    if (t64 != 110708217814911317LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x1961 = 1379;
	int8_t x1962 = INT8_MAX;
	int8_t x1963 = 0;
	static int8_t x1964 = INT8_MIN;
	int32_t t65 = 6591;

    t65 = (((x1961<=x1962)<<x1963)*x1964);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x1969 = -6962908;
	volatile int8_t x1970 = INT8_MAX;
	static uint16_t x1972 = 1U;
	int32_t t66 = -952226509;

    t66 = (((x1969<=x1970)<<x1971)*x1972);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x1975 = 0U;
	volatile uint64_t x1976 = 169967974291585LLU;
	volatile uint64_t t67 = 12031607339LLU;

    t67 = (((x1973<=x1974)<<x1975)*x1976);

    if (t67 != 169967974291585LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x1996 = -1;
	int32_t t68 = 68;

    t68 = (((x1993<=x1994)<<x1995)*x1996);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x2021 = 21U;
	uint8_t x2022 = UINT8_MAX;
	static volatile int32_t t69 = -392643217;

    t69 = (((x2021<=x2022)<<x2023)*x2024);

    if (t69 != 20) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2058 = 97343683544LLU;
	volatile uint8_t x2059 = 3U;
	int32_t x2060 = -1;
	volatile int32_t t70 = -2844718;

    t70 = (((x2057<=x2058)<<x2059)*x2060);

    if (t70 != -8) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x2061 = -1;
	volatile int8_t x2062 = -1;
	uint16_t x2063 = 0U;
	volatile uint32_t x2064 = UINT32_MAX;
	uint32_t t71 = UINT32_MAX;

    t71 = (((x2061<=x2062)<<x2063)*x2064);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x2093 = -1;
	int32_t x2094 = 123;
	uint32_t x2095 = 9U;
	static int16_t x2096 = 2921;
	volatile int32_t t72 = -219489;

    t72 = (((x2093<=x2094)<<x2095)*x2096);

    if (t72 != 1495552) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x2185 = UINT8_MAX;
	uint64_t x2186 = 4327070LLU;
	volatile int32_t x2187 = 1;
	volatile uint16_t x2188 = 1U;
	volatile int32_t t73 = 2;

    t73 = (((x2185<=x2186)<<x2187)*x2188);

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x2221 = -6;
	int32_t x2222 = INT32_MIN;
	int32_t x2223 = 0;
	uint64_t x2224 = 639756722769LLU;
	uint64_t t74 = 44144921LLU;

    t74 = (((x2221<=x2222)<<x2223)*x2224);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x2254 = -1LL;
	int8_t x2255 = 30;
	int32_t x2256 = INT32_MIN;

    t75 = (((x2253<=x2254)<<x2255)*x2256);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x2397 = 1207646LL;
	int32_t x2398 = INT32_MAX;
	uint8_t x2399 = 0U;
	volatile int16_t x2400 = INT16_MIN;

    t76 = (((x2397<=x2398)<<x2399)*x2400);

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2405 = -1;
	int64_t x2406 = -651LL;
	uint8_t x2407 = 0U;
	int32_t x2408 = -1;
	int32_t t77 = -7867;

    t77 = (((x2405<=x2406)<<x2407)*x2408);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x2417 = 352430U;
	int64_t x2418 = 210802314320168258LL;
	volatile int16_t x2419 = 25;
	volatile int64_t x2420 = 0LL;
	volatile int64_t t78 = -1LL;

    t78 = (((x2417<=x2418)<<x2419)*x2420);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x2421 = 45628405562838840LLU;
	int32_t x2422 = 3;
	static int16_t x2424 = INT16_MIN;

    t79 = (((x2421<=x2422)<<x2423)*x2424);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x2449 = -1;
	int64_t x2450 = INT64_MIN;
	int8_t x2451 = 27;
	uint64_t x2452 = 79338LLU;
	volatile uint64_t t80 = 59LLU;

    t80 = (((x2449<=x2450)<<x2451)*x2452);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x2469 = -3;
	int16_t x2471 = 0;
	int64_t x2472 = INT64_MIN;

    t81 = (((x2469<=x2470)<<x2471)*x2472);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x2641 = INT8_MAX;
	int16_t x2642 = -1;
	uint8_t x2643 = 7U;
	int64_t x2644 = -1660LL;
	int64_t t82 = -1883721753516007043LL;

    t82 = (((x2641<=x2642)<<x2643)*x2644);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2661 = -2;
	int32_t x2662 = -1;
	volatile uint8_t x2663 = 14U;
	int32_t t83 = 760742;

    t83 = (((x2661<=x2662)<<x2663)*x2664);

    if (t83 != -16384) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x2701 = 3U;
	uint16_t x2702 = 1182U;
	volatile int32_t x2703 = 0;
	volatile int8_t x2704 = INT8_MIN;

    t84 = (((x2701<=x2702)<<x2703)*x2704);

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x2729 = UINT64_MAX;
	int16_t x2730 = -1;
	int8_t x2731 = 0;
	volatile uint8_t x2732 = 97U;
	static volatile int32_t t85 = -274;

    t85 = (((x2729<=x2730)<<x2731)*x2732);

    if (t85 != 97) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x2769 = -3845331029LL;
	volatile uint64_t x2770 = 187550205594668LLU;
	static uint16_t x2771 = 2U;
	volatile int64_t x2772 = INT64_MAX;
	volatile int64_t t86 = 373LL;

    t86 = (((x2769<=x2770)<<x2771)*x2772);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x2825 = 62949341LLU;
	int16_t x2826 = -714;
	static uint8_t x2827 = 1U;
	uint8_t x2828 = UINT8_MAX;
	int32_t t87 = -10762;

    t87 = (((x2825<=x2826)<<x2827)*x2828);

    if (t87 != 510) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x2853 = INT32_MAX;
	uint64_t x2854 = 4154272919LLU;
	int64_t x2855 = 17LL;
	volatile int64_t x2856 = -5680464151259LL;
	int64_t t88 = 246128222179130399LL;

    t88 = (((x2853<=x2854)<<x2855)*x2856);

    if (t88 != -744549797233819648LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x2905 = 0U;
	static uint16_t x2906 = 108U;
	int32_t t89 = -17564;

    t89 = (((x2905<=x2906)<<x2907)*x2908);

    if (t89 != -31744) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x2922 = -1;
	volatile uint8_t x2923 = 5U;
	static int32_t x2924 = -4990;
	int32_t t90 = 0;

    t90 = (((x2921<=x2922)<<x2923)*x2924);

    if (t90 != -159680) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x2925 = UINT32_MAX;
	static uint16_t x2927 = 3U;
	int16_t x2928 = INT16_MIN;
	static int32_t t91 = 4052070;

    t91 = (((x2925<=x2926)<<x2927)*x2928);

    if (t91 != -262144) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x2933 = 0;
	int32_t x2935 = 15;
	volatile uint8_t x2936 = 0U;
	static int32_t t92 = 62;

    t92 = (((x2933<=x2934)<<x2935)*x2936);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x2973 = -103LL;
	volatile uint64_t x2974 = 869LLU;
	volatile int16_t x2976 = INT16_MIN;
	volatile int32_t t93 = 144942418;

    t93 = (((x2973<=x2974)<<x2975)*x2976);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x3043 = 1U;
	volatile uint8_t x3044 = 1U;
	int32_t t94 = 7;

    t94 = (((x3041<=x3042)<<x3043)*x3044);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x3045 = 47;
	int64_t x3046 = INT64_MAX;
	static int16_t x3047 = 1;
	uint32_t x3048 = 7U;
	static volatile uint32_t t95 = 1037158U;

    t95 = (((x3045<=x3046)<<x3047)*x3048);

    if (t95 != 14U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x3165 = -2;
	int16_t x3166 = INT16_MIN;
	volatile uint8_t x3167 = 2U;
	static volatile int16_t x3168 = INT16_MIN;
	int32_t t96 = -37884;

    t96 = (((x3165<=x3166)<<x3167)*x3168);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x3221 = 4013387LL;
	int8_t x3222 = INT8_MAX;
	volatile uint8_t x3223 = 15U;
	int32_t x3224 = INT32_MAX;
	static int32_t t97 = 9841807;

    t97 = (((x3221<=x3222)<<x3223)*x3224);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x3253 = UINT16_MAX;
	uint16_t x3254 = UINT16_MAX;
	uint32_t x3255 = 8U;
	uint32_t x3256 = UINT32_MAX;
	uint32_t t98 = 12372U;

    t98 = (((x3253<=x3254)<<x3255)*x3256);

    if (t98 != 4294967040U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3273 = INT8_MAX;
	uint16_t x3274 = UINT16_MAX;
	int8_t x3275 = 0;
	volatile int32_t t99 = 68319;

    t99 = (((x3273<=x3274)<<x3275)*x3276);

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x3281 = 204;
	static int16_t x3282 = 0;
	static uint32_t x3283 = 11U;
	static volatile int16_t x3284 = 0;
	volatile int32_t t100 = -132067809;

    t100 = (((x3281<=x3282)<<x3283)*x3284);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x3366 = 1U;
	volatile uint16_t x3367 = 2U;
	int64_t x3368 = -31472189655399LL;
	int64_t t101 = 1575LL;

    t101 = (((x3365<=x3366)<<x3367)*x3368);

    if (t101 != -125888758621596LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x3369 = UINT8_MAX;
	uint32_t x3370 = 8002310U;
	uint32_t x3371 = 4U;
	static int64_t t102 = 872372LL;

    t102 = (((x3369<=x3370)<<x3371)*x3372);

    if (t102 != -3026224LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x3374 = UINT16_MAX;
	uint8_t x3375 = 2U;
	int8_t x3376 = INT8_MIN;
	static int32_t t103 = 264;

    t103 = (((x3373<=x3374)<<x3375)*x3376);

    if (t103 != -512) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x3401 = INT8_MIN;
	int8_t x3402 = INT8_MAX;
	static int16_t x3403 = 0;
	static uint64_t x3404 = UINT64_MAX;
	static uint64_t t104 = UINT64_MAX;

    t104 = (((x3401<=x3402)<<x3403)*x3404);

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3441 = INT16_MIN;
	int32_t x3442 = -101033079;
	volatile int8_t x3443 = 5;
	static int32_t t105 = 22371833;

    t105 = (((x3441<=x3442)<<x3443)*x3444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x3446 = INT8_MIN;
	uint32_t x3447 = 8U;
	int16_t x3448 = 982;
	volatile int32_t t106 = 134;

    t106 = (((x3445<=x3446)<<x3447)*x3448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x3493 = UINT64_MAX;
	volatile int16_t x3494 = -1;
	static uint8_t x3495 = 6U;
	int64_t t107 = -6377LL;

    t107 = (((x3493<=x3494)<<x3495)*x3496);

    if (t107 != -3392LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x3505 = UINT16_MAX;
	int64_t x3506 = -1LL;
	uint8_t x3507 = 1U;
	uint8_t x3508 = UINT8_MAX;
	volatile int32_t t108 = -305567193;

    t108 = (((x3505<=x3506)<<x3507)*x3508);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x3517 = 18254LLU;
	static uint64_t x3518 = UINT64_MAX;
	static volatile int8_t x3519 = 6;
	volatile uint64_t t109 = 14LLU;

    t109 = (((x3517<=x3518)<<x3519)*x3520);

    if (t109 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x3633 = 89U;
	int64_t x3634 = -1LL;
	static uint8_t x3635 = 2U;
	volatile int64_t x3636 = -1LL;
	int64_t t110 = -497707LL;

    t110 = (((x3633<=x3634)<<x3635)*x3636);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x3693 = UINT8_MAX;
	static int32_t x3694 = INT32_MIN;
	int64_t x3695 = 5LL;
	static volatile int8_t x3696 = -1;
	static int32_t t111 = 211967;

    t111 = (((x3693<=x3694)<<x3695)*x3696);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x3741 = 0U;
	volatile uint16_t x3742 = 268U;
	volatile int8_t x3743 = 12;
	uint32_t x3744 = 50738U;
	uint32_t t112 = 10280257U;

    t112 = (((x3741<=x3742)<<x3743)*x3744);

    if (t112 != 207822848U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3749 = -1;
	int16_t x3750 = INT16_MIN;
	static int8_t x3751 = 0;
	uint32_t x3752 = 5845U;
	uint32_t t113 = 19U;

    t113 = (((x3749<=x3750)<<x3751)*x3752);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x3797 = UINT8_MAX;
	int8_t x3798 = INT8_MIN;
	volatile int8_t x3799 = 2;
	volatile int8_t x3800 = INT8_MAX;
	volatile int32_t t114 = -7;

    t114 = (((x3797<=x3798)<<x3799)*x3800);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x3817 = -1526LL;
	volatile uint8_t x3819 = 12U;
	int16_t x3820 = INT16_MIN;
	int32_t t115 = -14;

    t115 = (((x3817<=x3818)<<x3819)*x3820);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x3869 = 16116U;
	uint8_t x3870 = 2U;
	uint16_t x3871 = 3U;
	static volatile uint64_t x3872 = UINT64_MAX;
	static volatile uint64_t t116 = 14341533LLU;

    t116 = (((x3869<=x3870)<<x3871)*x3872);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x3937 = UINT8_MAX;
	int64_t x3939 = 2LL;
	static uint16_t x3940 = UINT16_MAX;
	volatile int32_t t117 = -427762253;

    t117 = (((x3937<=x3938)<<x3939)*x3940);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x3954 = UINT8_MAX;
	volatile uint32_t x3955 = 0U;
	volatile int32_t t118 = -497594;

    t118 = (((x3953<=x3954)<<x3955)*x3956);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x3987 = 19U;
	int8_t x3988 = -1;
	volatile int32_t t119 = -621985;

    t119 = (((x3985<=x3986)<<x3987)*x3988);

    if (t119 != -524288) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x4082 = INT16_MIN;
	volatile int8_t x4083 = 5;
	volatile int32_t x4084 = -291928;

    t120 = (((x4081<=x4082)<<x4083)*x4084);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x4121 = -1;
	int32_t x4122 = INT32_MIN;
	uint8_t x4123 = 0U;
	uint32_t x4124 = 25902522U;
	uint32_t t121 = 1180U;

    t121 = (((x4121<=x4122)<<x4123)*x4124);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x4149 = INT32_MIN;
	uint16_t x4150 = UINT16_MAX;
	volatile int16_t x4151 = 14;
	volatile int8_t x4152 = 1;
	int32_t t122 = -6288;

    t122 = (((x4149<=x4150)<<x4151)*x4152);

    if (t122 != 16384) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x4177 = 15U;
	uint16_t x4178 = 5676U;
	uint16_t x4179 = 2U;
	int32_t x4180 = -2259;

    t123 = (((x4177<=x4178)<<x4179)*x4180);

    if (t123 != -9036) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x4189 = 20;
	uint64_t x4190 = 4233682362546LLU;
	int32_t x4191 = 0;
	int32_t x4192 = INT32_MIN;
	int32_t t124 = INT32_MIN;

    t124 = (((x4189<=x4190)<<x4191)*x4192);

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x4193 = -1;
	int64_t x4194 = 7318314057717LL;
	int8_t x4195 = 0;
	int32_t t125 = -81482760;

    t125 = (((x4193<=x4194)<<x4195)*x4196);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x4242 = -1;
	int16_t x4244 = 13;
	int32_t t126 = -82;

    t126 = (((x4241<=x4242)<<x4243)*x4244);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x4261 = -19;
	uint64_t x4262 = 365685445476570LLU;
	volatile int64_t x4264 = 3201LL;

    t127 = (((x4261<=x4262)<<x4263)*x4264);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x4305 = -61217LL;
	uint8_t x4306 = 50U;
	int8_t x4307 = 0;
	uint8_t x4308 = 12U;
	static volatile int32_t t128 = 19;

    t128 = (((x4305<=x4306)<<x4307)*x4308);

    if (t128 != 12) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x4309 = 18519LLU;
	static int32_t x4310 = 29591;
	static uint32_t x4311 = 1U;
	volatile uint8_t x4312 = UINT8_MAX;
	int32_t t129 = -108;

    t129 = (((x4309<=x4310)<<x4311)*x4312);

    if (t129 != 510) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x4341 = INT32_MIN;
	static volatile int64_t x4342 = -20342242106343299LL;
	static int8_t x4343 = 1;
	int64_t x4344 = INT64_MAX;
	volatile int64_t t130 = -4831LL;

    t130 = (((x4341<=x4342)<<x4343)*x4344);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x4361 = -63;
	volatile uint64_t x4362 = UINT64_MAX;
	static uint8_t x4363 = 5U;
	volatile uint32_t x4364 = 1U;

    t131 = (((x4361<=x4362)<<x4363)*x4364);

    if (t131 != 32U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x4393 = 30793859U;
	int16_t x4394 = INT16_MIN;
	int16_t x4395 = 0;
	int64_t x4396 = INT64_MAX;
	volatile int64_t t132 = INT64_MAX;

    t132 = (((x4393<=x4394)<<x4395)*x4396);

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x4397 = 1U;
	int64_t x4398 = 64240328LL;
	static int16_t x4399 = 8;
	int8_t x4400 = INT8_MAX;

    t133 = (((x4397<=x4398)<<x4399)*x4400);

    if (t133 != 32512) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x4434 = INT8_MIN;
	uint8_t x4435 = 7U;
	int32_t x4436 = -8845;
	volatile int32_t t134 = -39;

    t134 = (((x4433<=x4434)<<x4435)*x4436);

    if (t134 != -1132160) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x4473 = UINT8_MAX;
	volatile uint16_t x4475 = 14U;
	int32_t x4476 = 1;
	int32_t t135 = -3;

    t135 = (((x4473<=x4474)<<x4475)*x4476);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x4534 = -2010;
	volatile uint8_t x4535 = 1U;
	static volatile uint64_t x4536 = UINT64_MAX;
	volatile uint64_t t136 = 981081LLU;

    t136 = (((x4533<=x4534)<<x4535)*x4536);

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x4577 = INT8_MIN;
	static uint32_t x4578 = 35U;
	static uint8_t x4579 = 1U;
	int64_t x4580 = INT64_MAX;
	int64_t t137 = -90LL;

    t137 = (((x4577<=x4578)<<x4579)*x4580);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x4598 = -1;
	volatile int8_t x4599 = 1;
	uint8_t x4600 = 0U;

    t138 = (((x4597<=x4598)<<x4599)*x4600);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x4685 = INT32_MIN;
	uint16_t x4687 = 3U;
	uint8_t x4688 = UINT8_MAX;

    t139 = (((x4685<=x4686)<<x4687)*x4688);

    if (t139 != 2040) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x4717 = -1LL;
	volatile uint8_t x4718 = 5U;
	static int32_t x4719 = 7;
	int64_t x4720 = -1LL;
	volatile int64_t t140 = 268433790LL;

    t140 = (((x4717<=x4718)<<x4719)*x4720);

    if (t140 != -128LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x4773 = 43136268205LL;
	int16_t x4774 = INT16_MIN;
	volatile uint16_t x4775 = 2U;
	int8_t x4776 = INT8_MIN;
	volatile int32_t t141 = -45071848;

    t141 = (((x4773<=x4774)<<x4775)*x4776);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x4805 = UINT64_MAX;
	volatile int8_t x4806 = INT8_MIN;
	volatile uint8_t x4807 = 6U;
	int16_t x4808 = INT16_MIN;
	static int32_t t142 = -47;

    t142 = (((x4805<=x4806)<<x4807)*x4808);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x4817 = INT32_MIN;
	uint16_t x4818 = 496U;
	static int16_t x4819 = 6;
	volatile int64_t x4820 = -1LL;
	static volatile int64_t t143 = -55707234602595LL;

    t143 = (((x4817<=x4818)<<x4819)*x4820);

    if (t143 != -64LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x4821 = 1U;
	int8_t x4822 = 22;
	int8_t x4823 = 1;
	int16_t x4824 = 1723;
	volatile int32_t t144 = 0;

    t144 = (((x4821<=x4822)<<x4823)*x4824);

    if (t144 != 3446) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x4857 = INT32_MAX;
	volatile uint64_t x4858 = 4930498LLU;
	uint16_t x4859 = 1U;
	static int64_t x4860 = INT64_MAX;
	volatile int64_t t145 = -340736LL;

    t145 = (((x4857<=x4858)<<x4859)*x4860);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x4937 = INT32_MIN;
	uint8_t x4938 = 21U;
	volatile uint8_t x4939 = 9U;
	int64_t x4940 = 14837474267418749LL;
	static int64_t t146 = -827243LL;

    t146 = (((x4937<=x4938)<<x4939)*x4940);

    if (t146 != 7596786824918399488LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x4949 = -3;
	uint16_t x4950 = UINT16_MAX;
	static uint8_t x4951 = 4U;
	int8_t x4952 = INT8_MAX;
	int32_t t147 = 25707810;

    t147 = (((x4949<=x4950)<<x4951)*x4952);

    if (t147 != 2032) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x4958 = 1181905LLU;
	volatile uint8_t x4959 = 5U;
	volatile uint8_t x4960 = 3U;
	volatile int32_t t148 = 390597;

    t148 = (((x4957<=x4958)<<x4959)*x4960);

    if (t148 != 96) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x4969 = UINT16_MAX;
	int32_t x4971 = 0;
	uint16_t x4972 = 7U;
	volatile int32_t t149 = -59907244;

    t149 = (((x4969<=x4970)<<x4971)*x4972);

    if (t149 != 7) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x5009 = INT16_MIN;
	volatile uint64_t x5010 = 3829140643336368051LLU;
	uint8_t x5011 = 15U;
	int32_t t150 = 0;

    t150 = (((x5009<=x5010)<<x5011)*x5012);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x5061 = 0U;
	static int8_t x5062 = INT8_MIN;
	int16_t x5063 = 1;

    t151 = (((x5061<=x5062)<<x5063)*x5064);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x5081 = 7058U;
	uint32_t x5082 = 2339568U;
	int32_t x5083 = 1;
	volatile int16_t x5084 = 25;
	int32_t t152 = -391;

    t152 = (((x5081<=x5082)<<x5083)*x5084);

    if (t152 != 50) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x5093 = 42U;
	int8_t x5094 = INT8_MIN;
	int16_t x5095 = 0;
	int8_t x5096 = -1;
	volatile int32_t t153 = -3368182;

    t153 = (((x5093<=x5094)<<x5095)*x5096);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x5105 = UINT64_MAX;
	int8_t x5106 = 10;
	uint16_t x5107 = 1U;
	int32_t x5108 = -1567685;
	volatile int32_t t154 = -479434094;

    t154 = (((x5105<=x5106)<<x5107)*x5108);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x5141 = -98611263;
	int32_t x5142 = 489;
	volatile int8_t x5143 = 0;
	int64_t x5144 = 248408497462769536LL;
	volatile int64_t t155 = 554672751633918LL;

    t155 = (((x5141<=x5142)<<x5143)*x5144);

    if (t155 != 248408497462769536LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x5209 = UINT64_MAX;
	volatile int16_t x5210 = -950;
	uint64_t x5211 = 1LLU;
	volatile int64_t x5212 = INT64_MAX;
	static int64_t t156 = 32508660330LL;

    t156 = (((x5209<=x5210)<<x5211)*x5212);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x5257 = 4043888454371431LLU;
	int64_t x5258 = -1LL;
	uint8_t x5259 = 0U;
	int8_t x5260 = INT8_MIN;
	static volatile int32_t t157 = 114381882;

    t157 = (((x5257<=x5258)<<x5259)*x5260);

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x5309 = INT16_MIN;
	static uint32_t x5311 = 3U;
	uint64_t x5312 = UINT64_MAX;
	uint64_t t158 = 30608175746LLU;

    t158 = (((x5309<=x5310)<<x5311)*x5312);

    if (t158 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x5313 = 0;
	int64_t x5314 = -30LL;
	static int8_t x5315 = 2;

    t159 = (((x5313<=x5314)<<x5315)*x5316);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x5337 = INT32_MIN;
	int16_t x5338 = INT16_MAX;
	static uint16_t x5339 = 0U;
	int32_t x5340 = INT32_MAX;

    t160 = (((x5337<=x5338)<<x5339)*x5340);

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x5409 = INT64_MIN;
	volatile int64_t x5410 = INT64_MIN;
	uint16_t x5411 = 21U;
	volatile int32_t t161 = 6;

    t161 = (((x5409<=x5410)<<x5411)*x5412);

    if (t161 != 266338304) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x5454 = INT64_MAX;
	uint16_t x5455 = 21U;
	int8_t x5456 = INT8_MAX;
	int32_t t162 = -881182814;

    t162 = (((x5453<=x5454)<<x5455)*x5456);

    if (t162 != 266338304) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x5505 = 0;
	static volatile uint64_t x5507 = 14LLU;
	volatile uint32_t t163 = 18278U;

    t163 = (((x5505<=x5506)<<x5507)*x5508);

    if (t163 != 4144037888U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x5557 = 17U;
	int8_t x5558 = 5;
	uint8_t x5559 = 2U;
	uint16_t x5560 = 13U;
	volatile int32_t t164 = -9700;

    t164 = (((x5557<=x5558)<<x5559)*x5560);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x5561 = 259878;
	static int32_t x5562 = 5;
	uint8_t x5564 = UINT8_MAX;
	static int32_t t165 = 2994321;

    t165 = (((x5561<=x5562)<<x5563)*x5564);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x5581 = -1;
	uint8_t x5583 = 15U;
	static volatile uint8_t x5584 = 21U;

    t166 = (((x5581<=x5582)<<x5583)*x5584);

    if (t166 != 688128) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x5617 = 23LLU;
	uint16_t x5619 = 0U;
	static volatile uint16_t x5620 = 12U;
	volatile int32_t t167 = -1;

    t167 = (((x5617<=x5618)<<x5619)*x5620);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x5621 = -716;
	volatile int64_t x5622 = -512553398LL;
	uint8_t x5623 = 1U;
	int16_t x5624 = INT16_MIN;
	int32_t t168 = 17;

    t168 = (((x5621<=x5622)<<x5623)*x5624);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x5662 = 471186564894LLU;
	uint8_t x5663 = 18U;
	volatile int8_t x5664 = 25;
	static int32_t t169 = 225;

    t169 = (((x5661<=x5662)<<x5663)*x5664);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x5665 = INT8_MAX;
	uint8_t x5668 = 2U;
	volatile int32_t t170 = 27009360;

    t170 = (((x5665<=x5666)<<x5667)*x5668);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x5673 = UINT16_MAX;
	uint8_t x5675 = 0U;
	uint16_t x5676 = UINT16_MAX;
	int32_t t171 = -2812639;

    t171 = (((x5673<=x5674)<<x5675)*x5676);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x5725 = UINT8_MAX;
	static int8_t x5726 = 47;
	static int64_t x5728 = INT64_MAX;
	volatile int64_t t172 = -160LL;

    t172 = (((x5725<=x5726)<<x5727)*x5728);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x5771 = 1;
	volatile int8_t x5772 = -1;
	volatile int32_t t173 = 724;

    t173 = (((x5769<=x5770)<<x5771)*x5772);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x5801 = 5U;
	int8_t x5802 = INT8_MAX;
	volatile int32_t t174 = -26;

    t174 = (((x5801<=x5802)<<x5803)*x5804);

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x5805 = UINT64_MAX;
	static volatile int64_t x5806 = -7445739921LL;
	volatile uint32_t x5807 = 5U;
	volatile uint8_t x5808 = 1U;
	int32_t t175 = 0;

    t175 = (((x5805<=x5806)<<x5807)*x5808);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x5818 = INT64_MIN;
	int8_t x5820 = -34;
	volatile int32_t t176 = 49;

    t176 = (((x5817<=x5818)<<x5819)*x5820);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x5821 = 1115919351U;
	volatile uint32_t x5822 = 1311U;
	uint16_t x5823 = 0U;
	int64_t x5824 = -1LL;
	volatile int64_t t177 = -64949760LL;

    t177 = (((x5821<=x5822)<<x5823)*x5824);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x5837 = -1;
	uint8_t x5838 = 1U;
	static volatile int16_t x5840 = 9;
	volatile int32_t t178 = -29;

    t178 = (((x5837<=x5838)<<x5839)*x5840);

    if (t178 != 18) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x5957 = UINT16_MAX;
	int8_t x5958 = -1;
	volatile int16_t x5959 = 4;
	volatile int32_t t179 = 484719;

    t179 = (((x5957<=x5958)<<x5959)*x5960);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x5997 = 97361203LL;
	static uint16_t x5998 = UINT16_MAX;
	uint16_t x5999 = 29U;
	uint16_t x6000 = 1564U;
	volatile int32_t t180 = 1028070003;

    t180 = (((x5997<=x5998)<<x5999)*x6000);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x6069 = 6;

    t181 = (((x6069<=x6070)<<x6071)*x6072);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x6089 = INT8_MIN;
	int64_t x6090 = 325357LL;
	volatile int8_t x6091 = 0;
	static uint16_t x6092 = 616U;

    t182 = (((x6089<=x6090)<<x6091)*x6092);

    if (t182 != 616) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x6105 = 34582384LLU;
	int16_t x6106 = INT16_MAX;
	uint64_t x6107 = 3LLU;
	volatile uint32_t x6108 = 191784977U;

    t183 = (((x6105<=x6106)<<x6107)*x6108);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x6122 = INT16_MAX;
	uint8_t x6123 = 3U;
	int8_t x6124 = INT8_MAX;
	volatile int32_t t184 = 2946493;

    t184 = (((x6121<=x6122)<<x6123)*x6124);

    if (t184 != 1016) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x6145 = INT8_MAX;
	uint16_t x6148 = 460U;
	int32_t t185 = -52938438;

    t185 = (((x6145<=x6146)<<x6147)*x6148);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x6186 = 240904;
	volatile int8_t x6188 = -1;
	volatile int32_t t186 = -761;

    t186 = (((x6185<=x6186)<<x6187)*x6188);

    if (t186 != -8) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x6193 = -10;
	int64_t x6194 = -6733524134LL;
	int16_t x6195 = 0;
	volatile int64_t t187 = 358LL;

    t187 = (((x6193<=x6194)<<x6195)*x6196);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x6222 = INT16_MIN;
	uint8_t x6223 = 1U;
	int32_t t188 = -92;

    t188 = (((x6221<=x6222)<<x6223)*x6224);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x6241 = INT16_MAX;
	int16_t x6244 = -1;
	int32_t t189 = 496086;

    t189 = (((x6241<=x6242)<<x6243)*x6244);

    if (t189 != -512) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x6269 = INT32_MIN;
	uint8_t x6271 = 7U;
	uint64_t x6272 = 12071396739403283LLU;
	volatile uint64_t t190 = 29LLU;

    t190 = (((x6269<=x6270)<<x6271)*x6272);

    if (t190 != 1545138782643620224LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x6293 = -1LL;
	int64_t x6294 = -1LL;
	int16_t x6295 = 1;
	volatile int16_t x6296 = INT16_MIN;

    t191 = (((x6293<=x6294)<<x6295)*x6296);

    if (t191 != -65536) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x6305 = -4099;
	uint32_t x6306 = 7U;
	int8_t x6308 = -3;
	volatile int32_t t192 = -22766985;

    t192 = (((x6305<=x6306)<<x6307)*x6308);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x6353 = -302776568LL;
	int8_t x6354 = -1;
	uint8_t x6355 = 15U;
	int8_t x6356 = 1;
	static int32_t t193 = 0;

    t193 = (((x6353<=x6354)<<x6355)*x6356);

    if (t193 != 32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x6389 = -4;
	static uint16_t x6390 = UINT16_MAX;
	uint8_t x6391 = 1U;
	static int16_t x6392 = INT16_MAX;
	int32_t t194 = 53811737;

    t194 = (((x6389<=x6390)<<x6391)*x6392);

    if (t194 != 65534) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x6405 = INT32_MIN;
	uint32_t x6406 = UINT32_MAX;
	int8_t x6407 = 20;
	int8_t x6408 = INT8_MIN;
	int32_t t195 = -342;

    t195 = (((x6405<=x6406)<<x6407)*x6408);

    if (t195 != -134217728) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x6410 = -1LL;
	int64_t t196 = -20985LL;

    t196 = (((x6409<=x6410)<<x6411)*x6412);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x6603 = 3;
	static volatile uint32_t x6604 = 14U;

    t197 = (((x6601<=x6602)<<x6603)*x6604);

    if (t197 != 112U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x6609 = 5U;
	uint64_t x6610 = 287898216531LLU;
	uint8_t x6611 = 2U;
	static int16_t x6612 = INT16_MIN;
	volatile int32_t t198 = -162500;

    t198 = (((x6609<=x6610)<<x6611)*x6612);

    if (t198 != -131072) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x6625 = INT8_MIN;
	static int16_t x6626 = -5;
	volatile uint16_t x6627 = 20U;
	int16_t x6628 = -1;
	volatile int32_t t199 = 1005066;

    t199 = (((x6625<=x6626)<<x6627)*x6628);

    if (t199 != -1048576) { NG(); } else { ; }
	
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

