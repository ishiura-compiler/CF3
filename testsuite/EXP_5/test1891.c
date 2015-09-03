#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x167 = 892U;
static int16_t x258 = -1;
int64_t x305 = 22LL;
int64_t t2 = 1814LL;
int64_t x421 = 1912306781LL;
volatile uint64_t x577 = UINT64_MAX;
int16_t x719 = INT16_MIN;
static uint32_t x745 = 2U;
uint8_t x821 = 4U;
static uint8_t x822 = 54U;
volatile int64_t x823 = -1LL;
int8_t x916 = -1;
static uint8_t x1092 = 0U;
int16_t x1115 = -12;
int8_t x1206 = INT8_MIN;
int32_t x1207 = INT32_MIN;
volatile int16_t x1467 = INT16_MAX;
uint8_t x1485 = 0U;
int32_t t19 = 489054001;
volatile int64_t x1823 = -6LL;
int8_t x1974 = -5;
int8_t x2073 = 27;
int64_t x2074 = 2014207123LL;
int32_t t25 = -707975;
volatile int32_t x2304 = -11;
volatile int16_t x2317 = 111;
int32_t x2319 = -12;
volatile int32_t t28 = -30802050;
int8_t x2406 = INT8_MIN;
volatile int32_t t29 = 558669758;
int8_t x2554 = INT8_MIN;
int8_t x2590 = 10;
static uint8_t x2592 = 0U;
static int8_t x2600 = -1;
uint16_t x2701 = 81U;
uint8_t x2703 = 96U;
int32_t x2738 = -1;
volatile int16_t x2739 = 4;
int32_t x3126 = INT32_MIN;
volatile int16_t x3131 = -4528;
int8_t x3180 = 0;
volatile int64_t x3220 = -1LL;
int32_t x3230 = -1;
volatile int16_t x3231 = 22;
volatile int32_t t47 = -82186814;
int32_t x3234 = -7;
volatile int32_t t48 = 1;
int32_t t51 = -26090;
static uint32_t x3382 = 4218333U;
static int8_t x3416 = -2;
int16_t x3832 = -1;
int16_t x3980 = -1;
int16_t x4247 = INT16_MIN;
static volatile int32_t t59 = 2577323;
static int32_t x4448 = 0;
uint64_t t61 = 17567111642476LLU;
int8_t x4459 = -1;
static volatile uint32_t x4525 = 1890U;
int8_t x4526 = INT8_MIN;
volatile int16_t x4530 = INT16_MIN;
volatile uint64_t t65 = 15806565LLU;
uint64_t x4545 = 2LLU;
int32_t x4741 = 478;
uint8_t x4742 = 92U;
static uint8_t x4765 = UINT8_MAX;
uint32_t x4813 = 17358366U;
uint16_t x5125 = 86U;
uint32_t x5127 = UINT32_MAX;
int32_t x5371 = INT32_MAX;
uint32_t x5372 = 0U;
int16_t x5462 = -7;
int16_t x5464 = -1;
int16_t x5483 = INT16_MAX;
volatile uint32_t t74 = 6U;
int32_t x5607 = INT32_MAX;
static uint32_t x5608 = UINT32_MAX;
volatile int16_t x5610 = INT16_MIN;
static int16_t x5611 = -1;
static uint64_t t76 = 61177080366133685LLU;
static int8_t x5898 = INT8_MIN;
static uint16_t x6075 = 666U;
uint8_t x6076 = 0U;
uint32_t x6283 = 0U;
int16_t x6284 = -1;
volatile int8_t x6308 = 0;
int64_t x6484 = -1LL;
int32_t t83 = -114010399;
static int64_t x6591 = INT64_MAX;
uint64_t x6594 = UINT64_MAX;
static int32_t t86 = 514;
volatile int16_t x6598 = INT16_MIN;
volatile uint8_t x6638 = 0U;
int8_t x6772 = -1;
static uint64_t t89 = 2486473347632LLU;
volatile uint64_t x6802 = 3760686115704438LLU;
static int32_t x6804 = -1;
static uint32_t x6889 = 224700U;
int8_t x6890 = -1;
uint64_t x7097 = 201315LLU;
int8_t x7098 = -31;
int8_t x7100 = -1;
uint16_t x7173 = UINT16_MAX;
static int32_t x7378 = INT32_MAX;
uint64_t x7543 = 2354021072058143LLU;


void f0(void) {
	uint8_t x165 = 1U;
	uint32_t x166 = 397294U;
	static uint8_t x168 = 0U;
	static int32_t t0 = 87890;

	t0 = (x165<<((x166|x167)*x168));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x257 = 0U;
	int8_t x259 = INT8_MAX;
	int8_t x260 = -1;
	int32_t t1 = -30300613;

	t1 = (x257<<((x258|x259)*x260));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x306 = 1780LL;
	int32_t x307 = -1;
	static int8_t x308 = -1;

	t2 = (x305<<((x306|x307)*x308));

	if (t2 != 44LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x422 = -335274295LL;
	uint8_t x423 = UINT8_MAX;
	static int32_t x424 = 0;
	volatile int64_t t3 = 128566418663027492LL;

	t3 = (x421<<((x422|x423)*x424));

	if (t3 != 1912306781LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x578 = -1;
	static uint64_t x579 = UINT64_MAX;
	int16_t x580 = -1;
	volatile uint64_t t4 = 13241046LLU;

	t4 = (x577<<((x578|x579)*x580));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x717 = 154U;
	volatile int32_t x718 = INT32_MAX;
	static int8_t x720 = -1;
	int32_t t5 = 7825309;

	t5 = (x717<<((x718|x719)*x720));

	if (t5 != 308) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x746 = INT32_MIN;
	static uint64_t x747 = 6838783721910474094LLU;
	static volatile int64_t x748 = 0LL;
	static volatile uint32_t t6 = 1U;

	t6 = (x745<<((x746|x747)*x748));

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x813 = UINT16_MAX;
	static volatile int64_t x814 = INT64_MIN;
	int64_t x815 = INT64_MAX;
	static int8_t x816 = -7;
	int32_t t7 = -24;

	t7 = (x813<<((x814|x815)*x816));

	if (t7 != 8388480) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x824 = -1LL;
	static int32_t t8 = -30635;

	t8 = (x821<<((x822|x823)*x824));

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x913 = 13138864196LLU;
	static int32_t x914 = INT32_MIN;
	int64_t x915 = -1LL;
	uint64_t t9 = 151LLU;

	t9 = (x913<<((x914|x915)*x916));

	if (t9 != 26277728392LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1089 = 6826;
	int8_t x1090 = INT8_MIN;
	int64_t x1091 = -1LL;
	int32_t t10 = 3940;

	t10 = (x1089<<((x1090|x1091)*x1092));

	if (t10 != 6826) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1113 = 56U;
	int32_t x1114 = INT32_MAX;
	uint32_t x1116 = UINT32_MAX;
	int32_t t11 = -6;

	t11 = (x1113<<((x1114|x1115)*x1116));

	if (t11 != 112) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1117 = UINT16_MAX;
	static uint16_t x1118 = UINT16_MAX;
	int8_t x1119 = INT8_MIN;
	volatile int8_t x1120 = 0;
	int32_t t12 = 3;

	t12 = (x1117<<((x1118|x1119)*x1120));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1133 = 1079LLU;
	static int32_t x1134 = -3410;
	volatile int32_t x1135 = -1;
	static uint32_t x1136 = UINT32_MAX;
	uint64_t t13 = 4911659518744882676LLU;

	t13 = (x1133<<((x1134|x1135)*x1136));

	if (t13 != 2158LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1173 = 561349451U;
	static volatile int16_t x1174 = -1;
	static int8_t x1175 = INT8_MAX;
	uint32_t x1176 = UINT32_MAX;
	static uint32_t t14 = 161U;

	t14 = (x1173<<((x1174|x1175)*x1176));

	if (t14 != 1122698902U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1205 = UINT16_MAX;
	volatile int16_t x1208 = 0;
	int32_t t15 = -7;

	t15 = (x1205<<((x1206|x1207)*x1208));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1465 = 0;
	static int64_t x1466 = -1LL;
	uint64_t x1468 = UINT64_MAX;
	static int32_t t16 = -39;

	t16 = (x1465<<((x1466|x1467)*x1468));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x1486 = 389U;
	volatile int32_t x1487 = -1;
	int8_t x1488 = -1;
	static volatile int32_t t17 = 1092168;

	t17 = (x1485<<((x1486|x1487)*x1488));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1553 = 10715791859230LLU;
	volatile int16_t x1554 = INT16_MIN;
	int64_t x1555 = INT64_MAX;
	int32_t x1556 = -1;
	uint64_t t18 = 1LLU;

	t18 = (x1553<<((x1554|x1555)*x1556));

	if (t18 != 21431583718460LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x1669 = INT16_MAX;
	int64_t x1670 = -1LL;
	uint16_t x1671 = 1956U;
	int8_t x1672 = -1;

	t19 = (x1669<<((x1670|x1671)*x1672));

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1821 = UINT32_MAX;
	int8_t x1822 = -1;
	static int8_t x1824 = -1;
	uint32_t t20 = 3966355U;

	t20 = (x1821<<((x1822|x1823)*x1824));

	if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1885 = 477502605;
	int8_t x1886 = 4;
	static volatile int64_t x1887 = -1LL;
	volatile int16_t x1888 = -1;
	volatile int32_t t21 = 10;

	t21 = (x1885<<((x1886|x1887)*x1888));

	if (t21 != 955005210) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1949 = 475585219206760LLU;
	int64_t x1950 = -1LL;
	int8_t x1951 = 1;
	static int32_t x1952 = 0;
	static uint64_t t22 = 189LLU;

	t22 = (x1949<<((x1950|x1951)*x1952));

	if (t22 != 475585219206760LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1973 = 450;
	volatile int8_t x1975 = -1;
	volatile uint32_t x1976 = 0U;
	volatile int32_t t23 = -652264;

	t23 = (x1973<<((x1974|x1975)*x1976));

	if (t23 != 450) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x1997 = 24U;
	static int16_t x1998 = INT16_MIN;
	int16_t x1999 = -3;
	int16_t x2000 = -1;
	static volatile int32_t t24 = -266496;

	t24 = (x1997<<((x1998|x1999)*x2000));

	if (t24 != 192) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x2075 = 12574646;
	uint16_t x2076 = 0U;

	t25 = (x2073<<((x2074|x2075)*x2076));

	if (t25 != 27) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2221 = 17963246553LLU;
	static int8_t x2222 = 0;
	uint64_t x2223 = UINT64_MAX;
	int32_t x2224 = -1;
	static volatile uint64_t t26 = 891858LLU;

	t26 = (x2221<<((x2222|x2223)*x2224));

	if (t26 != 35926493106LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x2301 = 1625U;
	volatile int8_t x2302 = -1;
	static int16_t x2303 = INT16_MIN;
	volatile uint32_t t27 = 3007434U;

	t27 = (x2301<<((x2302|x2303)*x2304));

	if (t27 != 3328000U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2318 = 0U;
	volatile uint64_t x2320 = UINT64_MAX;

	t28 = (x2317<<((x2318|x2319)*x2320));

	if (t28 != 454656) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2405 = 197U;
	uint64_t x2407 = 2896724543403349LLU;
	uint16_t x2408 = 0U;

	t29 = (x2405<<((x2406|x2407)*x2408));

	if (t29 != 197) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2553 = INT8_MAX;
	uint16_t x2555 = 0U;
	int8_t x2556 = 0;
	static volatile int32_t t30 = -13;

	t30 = (x2553<<((x2554|x2555)*x2556));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2589 = UINT8_MAX;
	uint8_t x2591 = 2U;
	int32_t t31 = 3959405;

	t31 = (x2589<<((x2590|x2591)*x2592));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2597 = UINT8_MAX;
	int32_t x2598 = 680490859;
	static volatile int8_t x2599 = -44;
	static int32_t t32 = -1969188;

	t32 = (x2597<<((x2598|x2599)*x2600));

	if (t32 != 510) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x2677 = 73U;
	static uint8_t x2678 = 92U;
	volatile int16_t x2679 = INT16_MAX;
	int8_t x2680 = 0;
	volatile int32_t t33 = -13600;

	t33 = (x2677<<((x2678|x2679)*x2680));

	if (t33 != 73) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x2702 = -1;
	uint32_t x2704 = UINT32_MAX;
	int32_t t34 = 89099468;

	t34 = (x2701<<((x2702|x2703)*x2704));

	if (t34 != 162) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2737 = UINT8_MAX;
	int32_t x2740 = -1;
	volatile int32_t t35 = 2147735;

	t35 = (x2737<<((x2738|x2739)*x2740));

	if (t35 != 510) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2741 = 3;
	uint64_t x2742 = UINT64_MAX;
	int64_t x2743 = INT64_MAX;
	volatile int32_t x2744 = -1;
	int32_t t36 = 1445338;

	t36 = (x2741<<((x2742|x2743)*x2744));

	if (t36 != 6) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2745 = UINT8_MAX;
	int64_t x2746 = INT64_MIN;
	int64_t x2747 = INT64_MAX;
	static int8_t x2748 = -1;
	volatile int32_t t37 = 3757116;

	t37 = (x2745<<((x2746|x2747)*x2748));

	if (t37 != 510) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2821 = 188071826U;
	uint64_t x2822 = 31LLU;
	uint64_t x2823 = UINT64_MAX;
	static int32_t x2824 = -1;
	volatile uint32_t t38 = 4U;

	t38 = (x2821<<((x2822|x2823)*x2824));

	if (t38 != 376143652U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2841 = 840525508U;
	volatile int32_t x2842 = INT32_MIN;
	static int32_t x2843 = -1;
	int32_t x2844 = -1;
	uint32_t t39 = 77U;

	t39 = (x2841<<((x2842|x2843)*x2844));

	if (t39 != 1681051016U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x3001 = 2190446LL;
	int16_t x3002 = 502;
	static int16_t x3003 = -1;
	int32_t x3004 = -20;
	int64_t t40 = 6746643242896813LL;

	t40 = (x3001<<((x3002|x3003)*x3004));

	if (t40 != 2296849104896LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3009 = 51U;
	uint8_t x3010 = UINT8_MAX;
	static int64_t x3011 = -1LL;
	static volatile int32_t x3012 = -1;
	volatile int32_t t41 = 69467;

	t41 = (x3009<<((x3010|x3011)*x3012));

	if (t41 != 102) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x3125 = 22U;
	int8_t x3127 = -1;
	uint64_t x3128 = UINT64_MAX;
	int32_t t42 = 106;

	t42 = (x3125<<((x3126|x3127)*x3128));

	if (t42 != 44) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x3129 = 1227U;
	static int8_t x3130 = INT8_MIN;
	uint8_t x3132 = 0U;
	int32_t t43 = -528231;

	t43 = (x3129<<((x3130|x3131)*x3132));

	if (t43 != 1227) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x3177 = INT64_MAX;
	volatile int64_t x3178 = 35928867257193045LL;
	int64_t x3179 = 29044000611LL;
	int64_t t44 = INT64_MAX;

	t44 = (x3177<<((x3178|x3179)*x3180));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x3213 = UINT16_MAX;
	static uint32_t x3214 = UINT32_MAX;
	uint8_t x3215 = 28U;
	static volatile int16_t x3216 = -1;
	int32_t t45 = 38;

	t45 = (x3213<<((x3214|x3215)*x3216));

	if (t45 != 131070) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3217 = UINT64_MAX;
	int32_t x3218 = INT32_MIN;
	int32_t x3219 = INT32_MAX;
	static uint64_t t46 = 9735305529LLU;

	t46 = (x3217<<((x3218|x3219)*x3220));

	if (t46 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x3229 = UINT8_MAX;
	static int16_t x3232 = -2;

	t47 = (x3229<<((x3230|x3231)*x3232));

	if (t47 != 1020) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3233 = 195;
	static int8_t x3235 = -1;
	volatile int64_t x3236 = -1LL;

	t48 = (x3233<<((x3234|x3235)*x3236));

	if (t48 != 390) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3245 = 1680LLU;
	int8_t x3246 = INT8_MIN;
	int8_t x3247 = -1;
	static int64_t x3248 = -1LL;
	uint64_t t49 = 5415614LLU;

	t49 = (x3245<<((x3246|x3247)*x3248));

	if (t49 != 3360LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3277 = 1;
	int64_t x3278 = -9LL;
	volatile int16_t x3279 = 0;
	int16_t x3280 = -1;
	static volatile int32_t t50 = 14524;

	t50 = (x3277<<((x3278|x3279)*x3280));

	if (t50 != 512) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x3329 = 2U;
	static uint8_t x3330 = 43U;
	int32_t x3331 = -1;
	static uint32_t x3332 = UINT32_MAX;

	t51 = (x3329<<((x3330|x3331)*x3332));

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x3381 = 33U;
	volatile int16_t x3383 = INT16_MAX;
	int8_t x3384 = 0;
	int32_t t52 = -25604383;

	t52 = (x3381<<((x3382|x3383)*x3384));

	if (t52 != 33) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3413 = 1;
	volatile int64_t x3414 = 71LL;
	uint64_t x3415 = UINT64_MAX;
	static int32_t t53 = -136324844;

	t53 = (x3413<<((x3414|x3415)*x3416));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3513 = INT64_MAX;
	int8_t x3514 = INT8_MAX;
	int32_t x3515 = INT32_MIN;
	uint16_t x3516 = 0U;
	volatile int64_t t54 = INT64_MAX;

	t54 = (x3513<<((x3514|x3515)*x3516));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3829 = UINT16_MAX;
	int8_t x3830 = -1;
	uint16_t x3831 = 1U;
	static volatile int32_t t55 = -3054;

	t55 = (x3829<<((x3830|x3831)*x3832));

	if (t55 != 131070) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3849 = 78704355648LL;
	int16_t x3850 = -240;
	int32_t x3851 = INT32_MAX;
	static volatile int32_t x3852 = 0;
	int64_t t56 = 77LL;

	t56 = (x3849<<((x3850|x3851)*x3852));

	if (t56 != 78704355648LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3977 = 0;
	int16_t x3978 = -1;
	volatile int8_t x3979 = 45;
	static volatile int32_t t57 = -2660761;

	t57 = (x3977<<((x3978|x3979)*x3980));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x4245 = 0;
	static volatile int32_t x4246 = INT32_MAX;
	int16_t x4248 = -1;
	volatile int32_t t58 = 289;

	t58 = (x4245<<((x4246|x4247)*x4248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x4329 = UINT16_MAX;
	static int16_t x4330 = -2;
	volatile int8_t x4331 = -1;
	static volatile int8_t x4332 = -1;

	t59 = (x4329<<((x4330|x4331)*x4332));

	if (t59 != 131070) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4333 = 3U;
	uint64_t x4334 = UINT64_MAX;
	int16_t x4335 = INT16_MIN;
	uint64_t x4336 = UINT64_MAX;
	volatile int32_t t60 = -90416;

	t60 = (x4333<<((x4334|x4335)*x4336));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4445 = 47301697144LLU;
	static uint32_t x4446 = 6758U;
	uint8_t x4447 = 14U;

	t61 = (x4445<<((x4446|x4447)*x4448));

	if (t61 != 47301697144LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4457 = 3U;
	int8_t x4458 = -1;
	int8_t x4460 = -1;
	int32_t t62 = 15855;

	t62 = (x4457<<((x4458|x4459)*x4460));

	if (t62 != 6) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x4527 = -1LL;
	volatile int64_t x4528 = -1LL;
	uint32_t t63 = 27167U;

	t63 = (x4525<<((x4526|x4527)*x4528));

	if (t63 != 3780U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4529 = INT32_MAX;
	int16_t x4531 = 422;
	static uint32_t x4532 = 0U;
	volatile int32_t t64 = INT32_MAX;

	t64 = (x4529<<((x4530|x4531)*x4532));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4533 = 184726700LLU;
	uint16_t x4534 = 4U;
	volatile uint64_t x4535 = UINT64_MAX;
	int64_t x4536 = -1LL;

	t65 = (x4533<<((x4534|x4535)*x4536));

	if (t65 != 369453400LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4546 = -11LL;
	static int32_t x4547 = INT32_MIN;
	int8_t x4548 = 0;
	volatile uint64_t t66 = 13462291677450108LLU;

	t66 = (x4545<<((x4546|x4547)*x4548));

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4743 = UINT64_MAX;
	static uint32_t x4744 = 0U;
	int32_t t67 = 239;

	t67 = (x4741<<((x4742|x4743)*x4744));

	if (t67 != 478) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4766 = INT64_MAX;
	static int32_t x4767 = -1;
	static volatile int16_t x4768 = -1;
	static volatile int32_t t68 = -29;

	t68 = (x4765<<((x4766|x4767)*x4768));

	if (t68 != 510) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x4814 = INT64_MIN;
	uint8_t x4815 = 2U;
	static uint32_t x4816 = 0U;
	static volatile uint32_t t69 = 1U;

	t69 = (x4813<<((x4814|x4815)*x4816));

	if (t69 != 17358366U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x4817 = 1451U;
	int32_t x4818 = 7;
	int8_t x4819 = -1;
	int64_t x4820 = -1LL;
	volatile uint32_t t70 = 194581U;

	t70 = (x4817<<((x4818|x4819)*x4820));

	if (t70 != 2902U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5126 = 1247U;
	int32_t x5128 = -1;
	int32_t t71 = 406187714;

	t71 = (x5125<<((x5126|x5127)*x5128));

	if (t71 != 172) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x5369 = UINT32_MAX;
	uint64_t x5370 = 15201322004440LLU;
	uint32_t t72 = UINT32_MAX;

	t72 = (x5369<<((x5370|x5371)*x5372));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x5461 = 6U;
	int32_t x5463 = -1;
	volatile int32_t t73 = 1870398;

	t73 = (x5461<<((x5462|x5463)*x5464));

	if (t73 != 12) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5481 = 0U;
	static int64_t x5482 = -1LL;
	uint64_t x5484 = UINT64_MAX;

	t74 = (x5481<<((x5482|x5483)*x5484));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5605 = 27320U;
	int8_t x5606 = INT8_MIN;
	volatile int32_t t75 = 13;

	t75 = (x5605<<((x5606|x5607)*x5608));

	if (t75 != 54640) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5609 = 19336LLU;
	uint64_t x5612 = UINT64_MAX;

	t76 = (x5609<<((x5610|x5611)*x5612));

	if (t76 != 38672LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5765 = UINT64_MAX;
	uint8_t x5766 = 27U;
	int64_t x5767 = 12720879926540LL;
	uint64_t x5768 = 0LLU;
	uint64_t t77 = UINT64_MAX;

	t77 = (x5765<<((x5766|x5767)*x5768));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5897 = 3359U;
	int64_t x5899 = -1LL;
	static volatile int16_t x5900 = -1;
	static uint32_t t78 = 13U;

	t78 = (x5897<<((x5898|x5899)*x5900));

	if (t78 != 6718U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x6073 = 826199;
	int8_t x6074 = 0;
	int32_t t79 = 24402388;

	t79 = (x6073<<((x6074|x6075)*x6076));

	if (t79 != 826199) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x6149 = 6759485159460691987LLU;
	volatile int16_t x6150 = INT16_MAX;
	static int16_t x6151 = -1;
	int8_t x6152 = -61;
	volatile uint64_t t80 = 77LLU;

	t80 = (x6149<<((x6150|x6151)*x6152));

	if (t80 != 6917529027641081856LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x6281 = INT8_MAX;
	int32_t x6282 = -1;
	int32_t t81 = -27;

	t81 = (x6281<<((x6282|x6283)*x6284));

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x6305 = INT32_MAX;
	int8_t x6306 = INT8_MAX;
	int16_t x6307 = -48;
	int32_t t82 = INT32_MAX;

	t82 = (x6305<<((x6306|x6307)*x6308));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x6481 = UINT8_MAX;
	static volatile int32_t x6482 = -7;
	volatile int32_t x6483 = 196762280;

	t83 = (x6481<<((x6482|x6483)*x6484));

	if (t83 != 32640) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x6569 = INT8_MAX;
	int8_t x6570 = -9;
	static uint32_t x6571 = UINT32_MAX;
	int8_t x6572 = -1;
	int32_t t84 = 160876966;

	t84 = (x6569<<((x6570|x6571)*x6572));

	if (t84 != 254) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x6589 = UINT8_MAX;
	int8_t x6590 = INT8_MIN;
	int8_t x6592 = -1;
	volatile int32_t t85 = -1620381;

	t85 = (x6589<<((x6590|x6591)*x6592));

	if (t85 != 510) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x6593 = 0;
	int16_t x6595 = -1;
	int32_t x6596 = -1;

	t86 = (x6593<<((x6594|x6595)*x6596));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x6597 = 126379819119335LLU;
	volatile int32_t x6599 = INT32_MAX;
	int32_t x6600 = -1;
	uint64_t t87 = 55138626455366LLU;

	t87 = (x6597<<((x6598|x6599)*x6600));

	if (t87 != 252759638238670LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6637 = 0U;
	uint32_t x6639 = 3U;
	uint16_t x6640 = 5U;
	int32_t t88 = -2849593;

	t88 = (x6637<<((x6638|x6639)*x6640));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x6769 = 16080LLU;
	uint64_t x6770 = UINT64_MAX;
	int64_t x6771 = INT64_MIN;

	t89 = (x6769<<((x6770|x6771)*x6772));

	if (t89 != 32160LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x6801 = 1U;
	volatile uint64_t x6803 = UINT64_MAX;
	int32_t t90 = 6214774;

	t90 = (x6801<<((x6802|x6803)*x6804));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x6891 = UINT16_MAX;
	static int16_t x6892 = -1;
	uint32_t t91 = 13530652U;

	t91 = (x6889<<((x6890|x6891)*x6892));

	if (t91 != 449400U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6901 = 31;
	static int32_t x6902 = -2;
	int16_t x6903 = INT16_MAX;
	uint32_t x6904 = UINT32_MAX;
	int32_t t92 = -53479229;

	t92 = (x6901<<((x6902|x6903)*x6904));

	if (t92 != 62) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6969 = UINT16_MAX;
	static uint8_t x6970 = 24U;
	static int8_t x6971 = -1;
	uint64_t x6972 = UINT64_MAX;
	static int32_t t93 = -127687687;

	t93 = (x6969<<((x6970|x6971)*x6972));

	if (t93 != 131070) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x7099 = -1;
	volatile uint64_t t94 = 89777719658LLU;

	t94 = (x7097<<((x7098|x7099)*x7100));

	if (t94 != 402630LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x7169 = 13058U;
	int8_t x7170 = -1;
	volatile int16_t x7171 = -1;
	int8_t x7172 = -9;
	volatile int32_t t95 = 24305;

	t95 = (x7169<<((x7170|x7171)*x7172));

	if (t95 != 6685696) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x7174 = -54;
	int16_t x7175 = 56;
	static uint64_t x7176 = UINT64_MAX;
	int32_t t96 = -43;

	t96 = (x7173<<((x7174|x7175)*x7176));

	if (t96 != 4194240) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x7377 = INT8_MAX;
	static uint32_t x7379 = UINT32_MAX;
	volatile int8_t x7380 = -1;
	static int32_t t97 = 1933;

	t97 = (x7377<<((x7378|x7379)*x7380));

	if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x7389 = 38;
	int8_t x7390 = -1;
	int16_t x7391 = INT16_MAX;
	volatile uint64_t x7392 = UINT64_MAX;
	static int32_t t98 = -126;

	t98 = (x7389<<((x7390|x7391)*x7392));

	if (t98 != 76) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x7541 = 84252250;
	uint64_t x7542 = 3962293504054339021LLU;
	volatile int8_t x7544 = 0;
	int32_t t99 = 131;

	t99 = (x7541<<((x7542|x7543)*x7544));

	if (t99 != 84252250) { NG(); } else { ; }
	
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


    return 0;
}

