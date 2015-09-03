#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x125 = 53U;
uint32_t x126 = 1U;
uint8_t x201 = UINT8_MAX;
uint16_t x204 = UINT16_MAX;
volatile uint64_t x205 = UINT64_MAX;
uint64_t t2 = 8058642481071689344LLU;
static uint8_t x262 = 25U;
int8_t x291 = INT8_MIN;
volatile uint64_t t4 = 10017281821527LLU;
uint32_t x364 = 21483U;
int8_t x373 = INT8_MAX;
volatile int32_t t8 = -480834;
int8_t x587 = -2;
static int8_t x707 = INT8_MAX;
uint16_t x741 = 1336U;
static volatile uint8_t x742 = 6U;
static volatile uint16_t x860 = 2938U;
int64_t x991 = INT64_MIN;
volatile uint64_t t16 = 3432073LLU;
int8_t x1006 = 0;
volatile int64_t x1136 = INT64_MAX;
int64_t t18 = 132447904782801LL;
int64_t x1169 = 138LL;
uint64_t x1260 = UINT64_MAX;
static volatile int64_t t24 = -42021616204459LL;
static volatile uint32_t x1285 = 121957199U;
int32_t x1287 = 4;
int16_t x1288 = 143;
uint8_t x1301 = UINT8_MAX;
int64_t x1303 = INT64_MAX;
volatile uint32_t x1348 = UINT32_MAX;
static volatile int16_t x1586 = 0;
uint8_t x1618 = 8U;
volatile int8_t x1626 = 49;
int16_t x1627 = -4;
static int8_t x2013 = INT8_MAX;
uint8_t x2014 = 19U;
uint16_t x2016 = 14U;
static int32_t x2149 = 3893851;
int8_t x2343 = 38;
static volatile int8_t x2346 = 0;
int16_t x2348 = -1;
int16_t x2618 = 1;
static volatile int8_t x2798 = 0;
uint64_t x2858 = 0LLU;
uint64_t t41 = 169817780LLU;
int8_t x3018 = 1;
uint64_t x3020 = 2LLU;
volatile uint64_t t43 = 122618499920714251LLU;
volatile int32_t x3204 = -1;
uint64_t x3226 = 16LLU;
int64_t x3228 = INT64_MIN;
int32_t x3268 = INT32_MIN;
volatile uint32_t t46 = 21037U;
static uint16_t x3481 = UINT16_MAX;
volatile int64_t t49 = 4781682LL;
uint64_t x3633 = UINT64_MAX;
static volatile int16_t x3637 = 0;
int32_t x3639 = INT32_MAX;
volatile int16_t x3661 = INT16_MAX;
static volatile uint16_t x3662 = 0U;
volatile int16_t x3663 = INT16_MIN;
uint16_t x3710 = 26U;
volatile uint64_t t54 = 0LLU;
uint16_t x3741 = UINT16_MAX;
int32_t x3769 = 489203;
uint32_t x3772 = 46U;
int16_t x4062 = 2;
int32_t x4063 = INT32_MAX;
volatile uint8_t x4110 = 2U;
int8_t x4202 = 7;
uint64_t t67 = 1846043023559LLU;
uint32_t x4293 = 2604U;
uint8_t x4294 = 3U;
int8_t x4303 = -27;
static volatile uint8_t x4588 = 18U;
volatile int32_t t72 = -53456;
int16_t x4604 = INT16_MIN;
uint64_t t74 = 6866695021LLU;
static volatile int8_t x4618 = 0;
static uint32_t x4777 = 1U;
static volatile uint64_t x4780 = UINT64_MAX;
static int16_t x4787 = -1;
volatile uint32_t x5050 = 16U;
uint64_t t82 = 4075185413232601LLU;
int16_t x5382 = 0;
int32_t x5383 = 5169;
uint8_t x5477 = 2U;
int32_t x5490 = 0;
volatile int32_t x5660 = -9755;
int16_t x5780 = INT16_MAX;
uint64_t t88 = 873410504LLU;
uint64_t x5795 = 10331673747957243LLU;
uint8_t x5978 = 0U;
volatile uint64_t t93 = 6317661906609901032LLU;
volatile int16_t x6365 = 3;


void f0(void) {
	uint8_t x127 = 0U;
	static uint64_t x128 = UINT64_MAX;
	uint64_t t0 = 56503428720LLU;

	t0 = ((x125<<x126)+(x127&x128));

	if (t0 != 106LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x202 = 1;
	int16_t x203 = INT16_MIN;
	volatile int32_t t1 = 57130;

	t1 = ((x201<<x202)+(x203&x204));

	if (t1 != 33278) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x206 = 0;
	volatile int32_t x207 = INT32_MIN;
	volatile int64_t x208 = -2194243188885527LL;

	t2 = ((x205<<x206)+(x207&x208));

	if (t2 != 18444549828605116415LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x261 = UINT64_MAX;
	int8_t x263 = -4;
	int8_t x264 = -1;
	uint64_t t3 = 169LLU;

	t3 = ((x261<<x262)+(x263&x264));

	if (t3 != 18446744073675997180LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x289 = 108787099553703868LLU;
	uint8_t x290 = 0U;
	static int64_t x292 = INT64_MIN;

	t4 = ((x289<<x290)+(x291&x292));

	if (t4 != 9332159136408479676LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x329 = UINT64_MAX;
	volatile int8_t x330 = 0;
	static int16_t x331 = -5;
	int16_t x332 = INT16_MAX;
	volatile uint64_t t5 = 17444514LLU;

	t5 = ((x329<<x330)+(x331&x332));

	if (t5 != 32762LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x361 = 1;
	int8_t x362 = 11;
	int8_t x363 = -1;
	uint32_t t6 = 1108094U;

	t6 = ((x361<<x362)+(x363&x364));

	if (t6 != 23531U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x374 = 24;
	static int32_t x375 = INT32_MIN;
	uint32_t x376 = 26U;
	uint32_t t7 = 2533535U;

	t7 = ((x373<<x374)+(x375&x376));

	if (t7 != 2130706432U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x481 = 206921;
	static int8_t x482 = 1;
	int32_t x483 = 2624920;
	int8_t x484 = INT8_MIN;

	t8 = ((x481<<x482)+(x483&x484));

	if (t8 != 3038738) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x585 = UINT16_MAX;
	uint8_t x586 = 12U;
	static uint32_t x588 = 1689U;
	uint32_t t9 = 397U;

	t9 = ((x585<<x586)+(x587&x588));

	if (t9 != 268433048U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x705 = 3;
	int64_t x706 = 2LL;
	volatile int32_t x708 = INT32_MAX;
	int32_t t10 = -2871;

	t10 = ((x705<<x706)+(x707&x708));

	if (t10 != 139) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x725 = 24732U;
	uint8_t x726 = 9U;
	static int16_t x727 = 1;
	static int16_t x728 = INT16_MIN;
	int32_t t11 = -37;

	t11 = ((x725<<x726)+(x727&x728));

	if (t11 != 12662784) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x743 = UINT32_MAX;
	int8_t x744 = -4;
	uint32_t t12 = 5691889U;

	t12 = ((x741<<x742)+(x743&x744));

	if (t12 != 85500U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x857 = 902532788U;
	static volatile uint32_t x858 = 20U;
	volatile int8_t x859 = INT8_MAX;
	static uint32_t t13 = 5U;

	t13 = ((x857<<x858)+(x859&x860));

	if (t13 != 3946840186U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x933 = 453661787LLU;
	int8_t x934 = 6;
	uint32_t x935 = 9U;
	int16_t x936 = 24;
	uint64_t t14 = 5594644LLU;

	t14 = ((x933<<x934)+(x935&x936));

	if (t14 != 29034354376LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x973 = 971429U;
	static uint8_t x974 = 1U;
	uint16_t x975 = 0U;
	volatile int8_t x976 = INT8_MAX;
	volatile uint32_t t15 = 304637U;

	t15 = ((x973<<x974)+(x975&x976));

	if (t15 != 1942858U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x989 = 116106321168LL;
	uint8_t x990 = 0U;
	uint64_t x992 = UINT64_MAX;

	t16 = ((x989<<x990)+(x991&x992));

	if (t16 != 9223372152961096976LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1005 = INT16_MAX;
	int8_t x1007 = -7;
	uint8_t x1008 = 14U;
	volatile int32_t t17 = -558;

	t17 = ((x1005<<x1006)+(x1007&x1008));

	if (t17 != 32775) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x1133 = 411U;
	int8_t x1134 = 0;
	int32_t x1135 = INT32_MIN;

	t18 = ((x1133<<x1134)+(x1135&x1136));

	if (t18 != 9223372034707292571LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1170 = 4U;
	int16_t x1171 = INT16_MIN;
	int32_t x1172 = 268873656;
	static volatile int64_t t19 = -14605886690318LL;

	t19 = ((x1169<<x1170)+(x1171&x1172));

	if (t19 != 268863648LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1229 = 946LL;
	int16_t x1230 = 0;
	static uint8_t x1231 = UINT8_MAX;
	volatile int8_t x1232 = -1;
	static volatile int64_t t20 = 30496LL;

	t20 = ((x1229<<x1230)+(x1231&x1232));

	if (t20 != 1201LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1233 = 1;
	volatile uint32_t x1234 = 9U;
	static volatile uint64_t x1235 = 321613211560029351LLU;
	int32_t x1236 = INT32_MIN;
	volatile uint64_t t21 = 23124LLU;

	t21 = ((x1233<<x1234)+(x1235&x1236));

	if (t21 != 321613211323335168LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1249 = 201;
	uint16_t x1250 = 0U;
	int16_t x1251 = -1765;
	volatile int32_t x1252 = -1;
	int32_t t22 = 14613;

	t22 = ((x1249<<x1250)+(x1251&x1252));

	if (t22 != -1564) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1257 = 127U;
	uint16_t x1258 = 8U;
	uint64_t x1259 = 2773301866353726623LLU;
	uint64_t t23 = 7LLU;

	t23 = ((x1257<<x1258)+(x1259&x1260));

	if (t23 != 2773301866353759135LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1273 = INT8_MAX;
	int16_t x1274 = 5;
	int64_t x1275 = INT64_MIN;
	int64_t x1276 = -62175003354030LL;

	t24 = ((x1273<<x1274)+(x1275&x1276));

	if (t24 != -9223372036854771744LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1286 = 0;
	uint32_t t25 = 922917U;

	t25 = ((x1285<<x1286)+(x1287&x1288));

	if (t25 != 121957203U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1302 = 12U;
	static uint32_t x1304 = UINT32_MAX;
	int64_t t26 = -777090413LL;

	t26 = ((x1301<<x1302)+(x1303&x1304));

	if (t26 != 4296011775LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1345 = 338529544412020523LLU;
	uint16_t x1346 = 0U;
	uint32_t x1347 = UINT32_MAX;
	uint64_t t27 = 2LLU;

	t27 = ((x1345<<x1346)+(x1347&x1348));

	if (t27 != 338529548706987818LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1585 = 0U;
	int32_t x1587 = INT32_MIN;
	int32_t x1588 = INT32_MIN;
	volatile uint32_t t28 = 105U;

	t28 = ((x1585<<x1586)+(x1587&x1588));

	if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1617 = 511U;
	uint16_t x1619 = 4064U;
	int32_t x1620 = INT32_MAX;
	uint32_t t29 = 0U;

	t29 = ((x1617<<x1618)+(x1619&x1620));

	if (t29 != 134880U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1625 = 61637204348742LLU;
	uint32_t x1628 = UINT32_MAX;
	volatile uint64_t t30 = 0LLU;

	t30 = ((x1625<<x1626)+(x1627&x1628));

	if (t30 != 2201134322172297212LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1701 = UINT16_MAX;
	uint8_t x1702 = 6U;
	int32_t x1703 = -198779228;
	uint8_t x1704 = 5U;
	volatile int32_t t31 = -115;

	t31 = ((x1701<<x1702)+(x1703&x1704));

	if (t31 != 4194244) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1861 = 477;
	int64_t x1862 = 0LL;
	uint32_t x1863 = 694146572U;
	volatile int8_t x1864 = INT8_MIN;
	uint32_t t32 = 565534050U;

	t32 = ((x1861<<x1862)+(x1863&x1864));

	if (t32 != 694147037U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1897 = INT16_MAX;
	static int32_t x1898 = 3;
	static int32_t x1899 = INT32_MIN;
	uint16_t x1900 = UINT16_MAX;
	volatile int32_t t33 = 667546;

	t33 = ((x1897<<x1898)+(x1899&x1900));

	if (t33 != 262136) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2015 = -552566;
	volatile int32_t t34 = 247322;

	t34 = ((x2013<<x2014)+(x2015&x2016));

	if (t34 != 66584586) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2150 = 6U;
	int32_t x2151 = 42013;
	uint16_t x2152 = 14U;
	volatile int32_t t35 = 1043295;

	t35 = ((x2149<<x2150)+(x2151&x2152));

	if (t35 != 249206476) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2273 = 182885734LL;
	volatile int16_t x2274 = 5;
	int8_t x2275 = INT8_MAX;
	static int16_t x2276 = INT16_MIN;
	int64_t t36 = -193205210435593LL;

	t36 = ((x2273<<x2274)+(x2275&x2276));

	if (t36 != 5852343488LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2341 = 163750601666989LLU;
	int16_t x2342 = 0;
	static volatile uint32_t x2344 = 854093716U;
	volatile uint64_t t37 = 1212832LLU;

	t37 = ((x2341<<x2342)+(x2343&x2344));

	if (t37 != 163750601666993LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2345 = 2894U;
	static int8_t x2347 = INT8_MAX;
	volatile int32_t t38 = 13678;

	t38 = ((x2345<<x2346)+(x2347&x2348));

	if (t38 != 3021) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2617 = 3;
	int32_t x2619 = 16;
	static uint8_t x2620 = UINT8_MAX;
	volatile int32_t t39 = 0;

	t39 = ((x2617<<x2618)+(x2619&x2620));

	if (t39 != 22) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x2797 = 831U;
	static uint32_t x2799 = 0U;
	uint32_t x2800 = 2U;
	volatile uint32_t t40 = 4059U;

	t40 = ((x2797<<x2798)+(x2799&x2800));

	if (t40 != 831U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x2857 = UINT32_MAX;
	int8_t x2859 = INT8_MIN;
	uint64_t x2860 = 5LLU;

	t41 = ((x2857<<x2858)+(x2859&x2860));

	if (t41 != 4294967295LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2869 = 406LLU;
	uint32_t x2870 = 27U;
	static volatile uint32_t x2871 = 1U;
	volatile uint32_t x2872 = 263U;
	uint64_t t42 = 172035750LLU;

	t42 = ((x2869<<x2870)+(x2871&x2872));

	if (t42 != 54492397569LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3017 = UINT32_MAX;
	int64_t x3019 = INT64_MIN;

	t43 = ((x3017<<x3018)+(x3019&x3020));

	if (t43 != 4294967294LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x3201 = INT8_MAX;
	int8_t x3202 = 1;
	volatile int32_t x3203 = -1;
	static int32_t t44 = 24;

	t44 = ((x3201<<x3202)+(x3203&x3204));

	if (t44 != 253) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x3225 = 25;
	uint8_t x3227 = 0U;
	int64_t t45 = -231LL;

	t45 = ((x3225<<x3226)+(x3227&x3228));

	if (t45 != 1638400LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x3265 = 6U;
	int16_t x3266 = 7;
	int16_t x3267 = -1;

	t46 = ((x3265<<x3266)+(x3267&x3268));

	if (t46 != 2147484416U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3482 = 1;
	volatile int8_t x3483 = INT8_MAX;
	int8_t x3484 = INT8_MAX;
	volatile int32_t t47 = 22;

	t47 = ((x3481<<x3482)+(x3483&x3484));

	if (t47 != 131197) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x3521 = 561LLU;
	static uint64_t x3522 = 2LLU;
	int64_t x3523 = -106LL;
	volatile int32_t x3524 = 79558142;
	volatile uint64_t t48 = 250136LLU;

	t48 = ((x3521<<x3522)+(x3523&x3524));

	if (t48 != 79560282LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3589 = 2LL;
	static uint8_t x3590 = 42U;
	int8_t x3591 = INT8_MAX;
	volatile int32_t x3592 = INT32_MIN;

	t49 = ((x3589<<x3590)+(x3591&x3592));

	if (t49 != 8796093022208LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3621 = 45U;
	int8_t x3622 = 0;
	volatile uint16_t x3623 = 2601U;
	volatile uint8_t x3624 = 1U;
	volatile int32_t t50 = 57162136;

	t50 = ((x3621<<x3622)+(x3623&x3624));

	if (t50 != 46) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3634 = 1U;
	uint16_t x3635 = 19U;
	volatile int16_t x3636 = INT16_MAX;
	static volatile uint64_t t51 = 37679521284LLU;

	t51 = ((x3633<<x3634)+(x3635&x3636));

	if (t51 != 17LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3638 = 9U;
	uint8_t x3640 = 1U;
	int32_t t52 = 52019;

	t52 = ((x3637<<x3638)+(x3639&x3640));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3664 = INT64_MIN;
	volatile int64_t t53 = 7985674952LL;

	t53 = ((x3661<<x3662)+(x3663&x3664));

	if (t53 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3709 = 1LL;
	static volatile int16_t x3711 = INT16_MIN;
	uint64_t x3712 = UINT64_MAX;

	t54 = ((x3709<<x3710)+(x3711&x3712));

	if (t54 != 67076096LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x3717 = 17U;
	int8_t x3718 = 5;
	static int32_t x3719 = -29;
	int16_t x3720 = INT16_MAX;
	uint32_t t55 = 8978U;

	t55 = ((x3717<<x3718)+(x3719&x3720));

	if (t55 != 33283U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x3742 = 0;
	volatile int32_t x3743 = INT32_MIN;
	static int32_t x3744 = INT32_MIN;
	int32_t t56 = -1320;

	t56 = ((x3741<<x3742)+(x3743&x3744));

	if (t56 != -2147418113) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3770 = 1;
	volatile int32_t x3771 = INT32_MIN;
	uint32_t t57 = 821413074U;

	t57 = ((x3769<<x3770)+(x3771&x3772));

	if (t57 != 978406U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3945 = 2466201U;
	int8_t x3946 = 1;
	uint8_t x3947 = 0U;
	int8_t x3948 = -41;
	static volatile uint32_t t58 = 6221004U;

	t58 = ((x3945<<x3946)+(x3947&x3948));

	if (t58 != 4932402U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3989 = 0U;
	uint16_t x3990 = 3U;
	int8_t x3991 = -26;
	uint32_t x3992 = 28432831U;
	uint32_t t59 = 396331041U;

	t59 = ((x3989<<x3990)+(x3991&x3992));

	if (t59 != 28432806U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x4061 = 756421583692072758LL;
	int32_t x4064 = INT32_MIN;
	int64_t t60 = 14088056951LL;

	t60 = ((x4061<<x4062)+(x4063&x4064));

	if (t60 != 3025686334768291032LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4069 = 5U;
	uint16_t x4070 = 2U;
	static int32_t x4071 = -301962096;
	static volatile int8_t x4072 = INT8_MIN;
	static int32_t t61 = 132847;

	t61 = ((x4069<<x4070)+(x4071&x4072));

	if (t61 != -301962092) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4109 = UINT64_MAX;
	uint16_t x4111 = UINT16_MAX;
	uint16_t x4112 = UINT16_MAX;
	volatile uint64_t t62 = 949879709LLU;

	t62 = ((x4109<<x4110)+(x4111&x4112));

	if (t62 != 65531LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4177 = 743;
	uint16_t x4178 = 1U;
	volatile int64_t x4179 = -28998498691966LL;
	volatile uint64_t x4180 = UINT64_MAX;
	volatile uint64_t t63 = 762969962446114LLU;

	t63 = ((x4177<<x4178)+(x4179&x4180));

	if (t63 != 18446715075210861136LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4201 = INT16_MAX;
	int8_t x4203 = INT8_MIN;
	static int64_t x4204 = 7376924158LL;
	volatile int64_t t64 = 1881LL;

	t64 = ((x4201<<x4202)+(x4203&x4204));

	if (t64 != 7381118208LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x4217 = 66U;
	volatile int16_t x4218 = 8;
	volatile uint32_t x4219 = 234U;
	volatile uint16_t x4220 = 141U;
	static volatile uint32_t t65 = 5U;

	t65 = ((x4217<<x4218)+(x4219&x4220));

	if (t65 != 17032U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x4225 = INT16_MAX;
	uint16_t x4226 = 1U;
	static int64_t x4227 = 13791LL;
	volatile uint32_t x4228 = 2U;
	int64_t t66 = -1252550425926LL;

	t66 = ((x4225<<x4226)+(x4227&x4228));

	if (t66 != 65536LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4281 = 13;
	uint8_t x4282 = 2U;
	uint64_t x4283 = 4300001707802276313LLU;
	int32_t x4284 = -1;

	t67 = ((x4281<<x4282)+(x4283&x4284));

	if (t67 != 4300001707802276365LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x4295 = INT64_MIN;
	int8_t x4296 = -1;
	int64_t t68 = 188311LL;

	t68 = ((x4293<<x4294)+(x4295&x4296));

	if (t68 != -9223372036854754976LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4301 = UINT64_MAX;
	uint8_t x4302 = 27U;
	int32_t x4304 = INT32_MIN;
	uint64_t t69 = 90LLU;

	t69 = ((x4301<<x4302)+(x4303&x4304));

	if (t69 != 18446744071427850240LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x4433 = INT8_MAX;
	int16_t x4434 = 2;
	int32_t x4435 = INT32_MIN;
	int8_t x4436 = INT8_MAX;
	volatile int32_t t70 = -2;

	t70 = ((x4433<<x4434)+(x4435&x4436));

	if (t70 != 508) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4521 = 4U;
	static int16_t x4522 = 1;
	int8_t x4523 = INT8_MIN;
	uint16_t x4524 = 387U;
	int32_t t71 = -6903;

	t71 = ((x4521<<x4522)+(x4523&x4524));

	if (t71 != 392) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4585 = 28212U;
	uint8_t x4586 = 0U;
	int16_t x4587 = INT16_MIN;

	t72 = ((x4585<<x4586)+(x4587&x4588));

	if (t72 != 28212) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4589 = UINT16_MAX;
	uint8_t x4590 = 3U;
	int64_t x4591 = INT64_MIN;
	uint64_t x4592 = 1195LLU;
	uint64_t t73 = 112606LLU;

	t73 = ((x4589<<x4590)+(x4591&x4592));

	if (t73 != 524280LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4601 = 3869829553908091843LLU;
	volatile uint64_t x4602 = 1LLU;
	int32_t x4603 = 26;

	t74 = ((x4601<<x4602)+(x4603&x4604));

	if (t74 != 7739659107816183686LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x4617 = 2158830791295LLU;
	volatile uint8_t x4619 = 0U;
	int32_t x4620 = INT32_MAX;
	volatile uint64_t t75 = 4307314721LLU;

	t75 = ((x4617<<x4618)+(x4619&x4620));

	if (t75 != 2158830791295LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x4778 = 3;
	static int32_t x4779 = INT32_MAX;
	uint64_t t76 = 120630345928932959LLU;

	t76 = ((x4777<<x4778)+(x4779&x4780));

	if (t76 != 2147483655LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4785 = 9;
	int64_t x4786 = 1LL;
	int16_t x4788 = -1;
	int32_t t77 = -5516629;

	t77 = ((x4785<<x4786)+(x4787&x4788));

	if (t77 != 17) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4809 = UINT8_MAX;
	volatile uint32_t x4810 = 11U;
	int32_t x4811 = -1;
	int64_t x4812 = -1820609282860017395LL;
	int64_t t78 = 87LL;

	t78 = ((x4809<<x4810)+(x4811&x4812));

	if (t78 != -1820609282859495155LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4913 = UINT32_MAX;
	volatile int16_t x4914 = 3;
	uint8_t x4915 = 0U;
	static uint16_t x4916 = UINT16_MAX;
	static uint32_t t79 = 688U;

	t79 = ((x4913<<x4914)+(x4915&x4916));

	if (t79 != 4294967288U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5049 = 5U;
	int8_t x5051 = INT8_MIN;
	static uint64_t x5052 = 46LLU;
	static volatile uint64_t t80 = 0LLU;

	t80 = ((x5049<<x5050)+(x5051&x5052));

	if (t80 != 327680LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x5137 = UINT64_MAX;
	int16_t x5138 = 30;
	int64_t x5139 = -14170813LL;
	int64_t x5140 = 1937526064026579LL;
	volatile uint64_t t81 = 1068601728616LLU;

	t81 = ((x5137<<x5138)+(x5139&x5140));

	if (t81 != 1937524977172803LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x5229 = 17U;
	static uint16_t x5230 = 0U;
	int64_t x5231 = INT64_MIN;
	volatile uint64_t x5232 = 1LLU;

	t82 = ((x5229<<x5230)+(x5231&x5232));

	if (t82 != 17LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5381 = 414186957U;
	uint32_t x5384 = 2U;
	uint32_t t83 = 2U;

	t83 = ((x5381<<x5382)+(x5383&x5384));

	if (t83 != 414186957U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x5478 = 1;
	int8_t x5479 = INT8_MIN;
	static uint16_t x5480 = 28U;
	static volatile int32_t t84 = -21;

	t84 = ((x5477<<x5478)+(x5479&x5480));

	if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5489 = UINT64_MAX;
	int32_t x5491 = 1018465;
	int16_t x5492 = -3209;
	volatile uint64_t t85 = 11861663931027836LLU;

	t85 = ((x5489<<x5490)+(x5491&x5492));

	if (t85 != 1016416LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x5657 = UINT64_MAX;
	int16_t x5658 = 25;
	volatile int32_t x5659 = -648;
	uint64_t t86 = 2971LLU;

	t86 = ((x5657<<x5658)+(x5659&x5660));

	if (t86 != 18446744073675987296LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x5761 = 4552LLU;
	uint8_t x5762 = 3U;
	volatile int32_t x5763 = -6;
	int16_t x5764 = -1020;
	uint64_t t87 = 1033847821768057LLU;

	t87 = ((x5761<<x5762)+(x5763&x5764));

	if (t87 != 35392LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5777 = 50739703LLU;
	int16_t x5778 = 0;
	uint16_t x5779 = 0U;

	t88 = ((x5777<<x5778)+(x5779&x5780));

	if (t88 != 50739703LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5793 = 1U;
	uint64_t x5794 = 28LLU;
	int16_t x5796 = 6434;
	volatile uint64_t t89 = 286LLU;

	t89 = ((x5793<<x5794)+(x5795&x5796));

	if (t89 != 268435746LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5845 = UINT64_MAX;
	static uint16_t x5846 = 23U;
	uint16_t x5847 = 26012U;
	int8_t x5848 = 0;
	volatile uint64_t t90 = 2663632966747609328LLU;

	t90 = ((x5845<<x5846)+(x5847&x5848));

	if (t90 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5977 = 31356LL;
	uint16_t x5979 = UINT16_MAX;
	int64_t x5980 = INT64_MIN;
	int64_t t91 = 1071695427LL;

	t91 = ((x5977<<x5978)+(x5979&x5980));

	if (t91 != 31356LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6045 = 2699754050911187LLU;
	uint32_t x6046 = 0U;
	volatile int32_t x6047 = 6606;
	int16_t x6048 = -1;
	static uint64_t t92 = 416305006LLU;

	t92 = ((x6045<<x6046)+(x6047&x6048));

	if (t92 != 2699754050917793LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6061 = 2066112571LLU;
	int8_t x6062 = 3;
	uint32_t x6063 = UINT32_MAX;
	static int16_t x6064 = -1;

	t93 = ((x6061<<x6062)+(x6063&x6064));

	if (t93 != 20823867863LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6109 = 162372U;
	uint32_t x6110 = 1U;
	int64_t x6111 = -1LL;
	volatile int8_t x6112 = -1;
	static int64_t t94 = -2685622605LL;

	t94 = ((x6109<<x6110)+(x6111&x6112));

	if (t94 != 324743LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6181 = 0;
	static int16_t x6182 = 5;
	int32_t x6183 = 13297396;
	uint16_t x6184 = 1653U;
	static int32_t t95 = -405098;

	t95 = ((x6181<<x6182)+(x6183&x6184));

	if (t95 != 1652) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6189 = 557;
	volatile uint8_t x6190 = 2U;
	uint8_t x6191 = UINT8_MAX;
	uint64_t x6192 = 1905088242LLU;
	static uint64_t t96 = 3LLU;

	t96 = ((x6189<<x6190)+(x6191&x6192));

	if (t96 != 2470LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6257 = 605188959U;
	static volatile uint16_t x6258 = 1U;
	static int8_t x6259 = -1;
	static int16_t x6260 = -1;
	uint32_t t97 = 249615189U;

	t97 = ((x6257<<x6258)+(x6259&x6260));

	if (t97 != 1210377917U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6333 = 1014;
	uint16_t x6334 = 1U;
	uint8_t x6335 = 13U;
	int16_t x6336 = INT16_MIN;
	int32_t t98 = 47;

	t98 = ((x6333<<x6334)+(x6335&x6336));

	if (t98 != 2028) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6366 = 27U;
	int8_t x6367 = -1;
	int16_t x6368 = -7476;
	int32_t t99 = 36145286;

	t99 = ((x6365<<x6366)+(x6367&x6368));

	if (t99 != 402645708) { NG(); } else { ; }
	
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

