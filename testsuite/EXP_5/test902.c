#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 94U;
static int32_t x3 = 2;
uint64_t x180 = 80534LLU;
static volatile int64_t t3 = 1980610098LL;
static volatile uint32_t x487 = 14U;
uint16_t x531 = 16U;
int8_t x681 = INT8_MIN;
volatile uint8_t x682 = 3U;
static uint16_t x867 = 2U;
volatile int16_t x1015 = 15;
int32_t x1016 = INT32_MIN;
static uint64_t t11 = 3435LLU;
static volatile int32_t x1093 = -43;
static uint32_t x1094 = 444475U;
volatile uint16_t x1130 = 6U;
static int8_t x1131 = 4;
uint32_t t14 = 507U;
uint64_t x1690 = UINT64_MAX;
uint64_t t18 = 3345482LLU;
uint32_t x1752 = 651368374U;
static volatile uint64_t t20 = 7026945268LLU;
int32_t t21 = -3;
volatile uint64_t x2049 = UINT64_MAX;
int16_t x2053 = -1;
uint16_t x2125 = 31U;
int8_t x2128 = -1;
uint8_t x2159 = 0U;
uint32_t x2252 = 262010053U;
int64_t x2564 = INT64_MAX;
int32_t x2737 = INT32_MIN;
volatile uint8_t x2739 = 3U;
uint32_t x2740 = 889998U;
static int8_t x2745 = -3;
uint16_t x2827 = 12U;
volatile uint32_t x3079 = 3U;
int32_t x3198 = INT32_MAX;
static volatile int8_t x3279 = 2;
uint16_t x3310 = 4U;
int8_t x3321 = INT8_MIN;
static uint8_t x3322 = UINT8_MAX;
volatile uint8_t x3349 = UINT8_MAX;
volatile int16_t x3350 = INT16_MAX;
uint8_t x3351 = 10U;
uint32_t x3352 = UINT32_MAX;
int16_t x3430 = INT16_MAX;
volatile int32_t x3537 = INT32_MIN;
int64_t x3549 = INT64_MAX;
uint64_t t45 = 5310397LLU;
static int16_t x3556 = INT16_MIN;
uint8_t x3629 = UINT8_MAX;
uint16_t x3632 = 59U;
int64_t x3781 = INT64_MIN;
int8_t x3933 = INT8_MIN;
int16_t x3936 = -4688;
volatile int32_t x4052 = 90850918;
int16_t x4053 = INT16_MIN;
int16_t x4240 = INT16_MIN;
volatile uint64_t t54 = 532728720679851923LLU;
static int64_t x4413 = 6LL;
volatile int32_t x4441 = INT32_MAX;
volatile uint8_t x4442 = UINT8_MAX;
int8_t x4466 = 9;
uint64_t x4505 = 12151LLU;
int32_t x4797 = INT32_MAX;
static uint64_t x4798 = 867135791255LLU;
int16_t x4800 = INT16_MAX;
int16_t x5068 = INT16_MIN;
int32_t x5353 = INT32_MAX;
volatile uint8_t x5355 = 2U;
uint16_t x5734 = 174U;
int32_t t72 = -295472;
uint32_t x5985 = UINT32_MAX;
uint64_t x5986 = UINT64_MAX;
static uint64_t x5987 = 5LLU;
uint16_t x6033 = UINT16_MAX;
uint16_t x6036 = UINT16_MAX;
int32_t t76 = -250917;
int32_t x6140 = 24;
static int64_t x6369 = INT64_MAX;
int32_t x6637 = -1;
int8_t x6669 = -1;
volatile uint64_t t85 = 124492LLU;
int64_t t86 = 267371796LL;
int32_t x7038 = INT32_MAX;
static volatile uint64_t t89 = 151680LLU;
static int64_t x7277 = -18370008594788LL;
int32_t x7279 = 0;
int64_t x7345 = INT64_MIN;
uint64_t x7356 = 3354111775697LLU;
uint64_t x7646 = 1708249063281LLU;
uint64_t t95 = 183LLU;
static int8_t x7785 = INT8_MAX;
volatile uint32_t x8230 = 7160653U;


void f0(void) {
	int16_t x1 = -1;
	uint32_t x4 = 834565U;
	uint32_t t0 = 7108450U;

	t0 = (x1%((x2<<x3)%x4));

	if (t0 != 135U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x33 = INT32_MIN;
	uint32_t x34 = 41052U;
	uint64_t x35 = 13LLU;
	uint8_t x36 = UINT8_MAX;
	volatile uint32_t t1 = 257580U;

	t1 = (x33%((x34<<x35)%x36));

	if (t1 != 74U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x177 = INT64_MIN;
	uint8_t x178 = UINT8_MAX;
	uint32_t x179 = 0U;
	volatile uint64_t t2 = 6255467484LLU;

	t2 = (x177%((x178<<x179)%x180));

	if (t2 != 128LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = 1;
	uint16_t x215 = 0U;
	static volatile int64_t x216 = INT64_MIN;

	t3 = (x213%((x214<<x215)%x216));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x229 = 1U;
	int8_t x230 = INT8_MAX;
	uint16_t x231 = 11U;
	volatile int64_t x232 = 15428LL;
	static volatile int64_t t4 = -27LL;

	t4 = (x229%((x230<<x231)%x232));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x357 = 1LL;
	uint64_t x358 = UINT64_MAX;
	volatile uint8_t x359 = 0U;
	volatile int16_t x360 = INT16_MAX;
	volatile uint64_t t5 = 37846908LLU;

	t5 = (x357%((x358<<x359)%x360));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x381 = INT32_MAX;
	static uint8_t x382 = 3U;
	uint16_t x383 = 2U;
	volatile int16_t x384 = INT16_MIN;
	int32_t t6 = -34570;

	t6 = (x381%((x382<<x383)%x384));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x485 = INT8_MIN;
	uint64_t x486 = 4552225477081LLU;
	static int32_t x488 = -557;
	volatile uint64_t t7 = 71LLU;

	t7 = (x485%((x486<<x487)%x488));

	if (t7 != 24579506235260800LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x529 = INT8_MAX;
	uint64_t x530 = 94417203255253174LLU;
	volatile int8_t x532 = -49;
	uint64_t t8 = 241348LLU;

	t8 = (x529%((x530<<x531)%x532));

	if (t8 != 127LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x683 = 0;
	volatile uint32_t x684 = 3954U;
	uint32_t t9 = 122705U;

	t9 = (x681%((x682<<x683)%x684));

	if (t9 != 2U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x865 = INT16_MIN;
	int16_t x866 = INT16_MAX;
	uint64_t x868 = 167404754861264LLU;
	uint64_t t10 = 89253LLU;

	t10 = (x865%((x866<<x867)%x868));

	if (t10 != 98316LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x1013 = 20906LL;
	volatile uint64_t x1014 = 50687LLU;

	t11 = (x1013%((x1014<<x1015)%x1016));

	if (t11 != 20906LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x1095 = 4;
	volatile int32_t x1096 = INT32_MAX;
	uint32_t t12 = 27568U;

	t12 = (x1093%((x1094<<x1095)%x1096));

	if (t12 != 6672453U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x1101 = UINT64_MAX;
	volatile uint8_t x1102 = 10U;
	uint8_t x1103 = 18U;
	int32_t x1104 = INT32_MAX;
	volatile uint64_t t13 = 1999LLU;

	t13 = (x1101%((x1102<<x1103)%x1104));

	if (t13 != 1048575LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1129 = UINT8_MAX;
	volatile uint32_t x1132 = UINT32_MAX;

	t14 = (x1129%((x1130<<x1131)%x1132));

	if (t14 != 63U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x1329 = 17U;
	uint32_t x1330 = UINT32_MAX;
	uint8_t x1331 = 0U;
	int8_t x1332 = -7;
	volatile uint32_t t15 = 1696U;

	t15 = (x1329%((x1330<<x1331)%x1332));

	if (t15 != 5U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1521 = -12;
	uint16_t x1522 = 160U;
	volatile int8_t x1523 = 3;
	uint16_t x1524 = 31292U;
	int32_t t16 = 0;

	t16 = (x1521%((x1522<<x1523)%x1524));

	if (t16 != -12) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1601 = INT64_MIN;
	volatile int32_t x1602 = 1;
	int16_t x1603 = 4;
	volatile uint16_t x1604 = 506U;
	volatile int64_t t17 = 3923481185620168LL;

	t17 = (x1601%((x1602<<x1603)%x1604));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1689 = -1;
	int16_t x1691 = 1;
	int32_t x1692 = 21;

	t18 = (x1689%((x1690<<x1691)%x1692));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1749 = 640LL;
	static uint16_t x1750 = 492U;
	uint8_t x1751 = 4U;
	int64_t t19 = 343LL;

	t19 = (x1749%((x1750<<x1751)%x1752));

	if (t19 != 640LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1769 = -353LL;
	int64_t x1770 = 1547670321090309LL;
	uint16_t x1771 = 3U;
	uint64_t x1772 = 128400LLU;

	t20 = (x1769%((x1770<<x1771)%x1772));

	if (t20 != 102935LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1881 = INT16_MAX;
	int16_t x1882 = 274;
	static uint8_t x1883 = 1U;
	volatile int16_t x1884 = -7;

	t21 = (x1881%((x1882<<x1883)%x1884));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x2050 = 3800375;
	uint32_t x2051 = 4U;
	uint32_t x2052 = 193509359U;
	volatile uint64_t t22 = 132016642LLU;

	t22 = (x2049%((x2050<<x2051)%x2052));

	if (t22 != 1101615LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2054 = 1;
	int8_t x2055 = 0;
	int8_t x2056 = 10;
	volatile int32_t t23 = 319961;

	t23 = (x2053%((x2054<<x2055)%x2056));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x2126 = UINT32_MAX;
	int32_t x2127 = 21;
	uint32_t t24 = 1U;

	t24 = (x2125%((x2126<<x2127)%x2128));

	if (t24 != 31U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2157 = UINT32_MAX;
	uint32_t x2158 = UINT32_MAX;
	int64_t x2160 = 19491766273118454LL;
	int64_t t25 = 874720159592LL;

	t25 = (x2157%((x2158<<x2159)%x2160));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x2249 = -1848963892259249LL;
	uint64_t x2250 = 97432542841LLU;
	volatile uint16_t x2251 = 12U;
	uint64_t t26 = 46017369244162534LLU;

	t26 = (x2249%((x2250<<x2251)%x2252));

	if (t26 != 168794LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2561 = INT32_MAX;
	uint16_t x2562 = 1U;
	int32_t x2563 = 3;
	static int64_t t27 = 85281132875926LL;

	t27 = (x2561%((x2562<<x2563)%x2564));

	if (t27 != 7LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x2577 = INT8_MIN;
	int16_t x2578 = INT16_MAX;
	int8_t x2579 = 0;
	uint32_t x2580 = 2U;
	uint32_t t28 = 121U;

	t28 = (x2577%((x2578<<x2579)%x2580));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x2645 = UINT8_MAX;
	static uint16_t x2646 = 29195U;
	static int8_t x2647 = 7;
	int32_t x2648 = -16869064;
	volatile int32_t t29 = 181;

	t29 = (x2645%((x2646<<x2647)%x2648));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2697 = -1;
	uint8_t x2698 = 1U;
	volatile uint8_t x2699 = 1U;
	int64_t x2700 = INT64_MAX;
	volatile int64_t t30 = -1310597053LL;

	t30 = (x2697%((x2698<<x2699)%x2700));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2738 = UINT64_MAX;
	volatile uint64_t t31 = 1223336909246403976LLU;

	t31 = (x2737%((x2738<<x2739)%x2740));

	if (t31 != 747216LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2746 = UINT32_MAX;
	uint8_t x2747 = 3U;
	static int32_t x2748 = -443873911;
	volatile uint32_t t32 = 4625028U;

	t32 = (x2745%((x2746<<x2747)%x2748));

	if (t32 != 300102166U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2825 = -1;
	uint16_t x2826 = 1U;
	static int8_t x2828 = -6;
	int32_t t33 = -191;

	t33 = (x2825%((x2826<<x2827)%x2828));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x3077 = -2;
	uint16_t x3078 = 219U;
	volatile uint32_t x3080 = UINT32_MAX;
	static uint32_t t34 = 234851891U;

	t34 = (x3077%((x3078<<x3079)%x3080));

	if (t34 != 614U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x3197 = -2;
	uint16_t x3199 = 0U;
	int64_t x3200 = -179224784350314LL;
	volatile int64_t t35 = -3891363369547681834LL;

	t35 = (x3197%((x3198<<x3199)%x3200));

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x3233 = 61U;
	uint32_t x3234 = UINT32_MAX;
	static volatile uint8_t x3235 = 22U;
	int16_t x3236 = INT16_MIN;
	volatile uint32_t t36 = 701379324U;

	t36 = (x3233%((x3234<<x3235)%x3236));

	if (t36 != 61U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x3237 = 0;
	uint16_t x3238 = 2373U;
	int64_t x3239 = 4LL;
	int16_t x3240 = INT16_MIN;
	volatile int32_t t37 = 8284;

	t37 = (x3237%((x3238<<x3239)%x3240));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x3277 = UINT8_MAX;
	int8_t x3278 = 8;
	static int64_t x3280 = 1105082965219LL;
	static int64_t t38 = -3805863555897640454LL;

	t38 = (x3277%((x3278<<x3279)%x3280));

	if (t38 != 31LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x3309 = -5;
	uint16_t x3311 = 12U;
	int64_t x3312 = -3965LL;
	int64_t t39 = -9676726332164LL;

	t39 = (x3309%((x3310<<x3311)%x3312));

	if (t39 != -5LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3323 = 23LLU;
	uint64_t x3324 = UINT64_MAX;
	volatile uint64_t t40 = 199781023LLU;

	t40 = (x3321%((x3322<<x3323)%x3324));

	if (t40 != 16777088LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t t41 = 63874460U;

	t41 = (x3349%((x3350<<x3351)%x3352));

	if (t41 != 255U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3429 = -2035;
	volatile int8_t x3431 = 1;
	volatile int64_t x3432 = INT64_MIN;
	volatile int64_t t42 = -1303564LL;

	t42 = (x3429%((x3430<<x3431)%x3432));

	if (t42 != -2035LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3521 = UINT64_MAX;
	uint64_t x3522 = 2228330135LLU;
	static volatile uint32_t x3523 = 15U;
	int8_t x3524 = INT8_MIN;
	volatile uint64_t t43 = 7566102172879LLU;

	t43 = (x3521%((x3522<<x3523)%x3524));

	if (t43 != 7419522482175LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x3538 = INT32_MAX;
	int8_t x3539 = 0;
	static uint32_t x3540 = 7U;
	static volatile uint32_t t44 = 1258976897U;

	t44 = (x3537%((x3538<<x3539)%x3540));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x3550 = 756297175850LLU;
	uint8_t x3551 = 7U;
	static uint32_t x3552 = 1378343U;

	t45 = (x3549%((x3550<<x3551)%x3552));

	if (t45 != 671535LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x3553 = INT32_MAX;
	uint64_t x3554 = 1170LLU;
	uint16_t x3555 = 10U;
	volatile uint64_t t46 = 5462LLU;

	t46 = (x3553%((x3554<<x3555)%x3556));

	if (t46 != 524287LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3630 = UINT32_MAX;
	uint16_t x3631 = 6U;
	volatile uint32_t t47 = 31U;

	t47 = (x3629%((x3630<<x3631)%x3632));

	if (t47 != 25U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3782 = 933451;
	volatile int8_t x3783 = 1;
	static uint32_t x3784 = UINT32_MAX;
	int64_t t48 = -533LL;

	t48 = (x3781%((x3782<<x3783)%x3784));

	if (t48 != -1820256LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x3934 = 386212U;
	uint64_t x3935 = 2LLU;
	uint32_t t49 = 52922874U;

	t49 = (x3933%((x3934<<x3935)%x3936));

	if (t49 != 289728U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x4049 = -119;
	volatile uint64_t x4050 = 2854486LLU;
	uint8_t x4051 = 0U;
	uint64_t t50 = 7542LLU;

	t50 = (x4049%((x4050<<x4051)%x4052));

	if (t50 != 2804423LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x4054 = 39955777U;
	static volatile int8_t x4055 = 0;
	volatile int8_t x4056 = 3;
	uint32_t t51 = 989691654U;

	t51 = (x4053%((x4054<<x4055)%x4056));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x4117 = 15920240066212906LL;
	uint64_t x4118 = UINT64_MAX;
	static uint16_t x4119 = 7U;
	int32_t x4120 = INT32_MIN;
	volatile uint64_t t52 = 2193051627254370519LLU;

	t52 = (x4117%((x4118<<x4119)%x4120));

	if (t52 != 1987187626LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x4217 = INT64_MIN;
	uint8_t x4218 = 9U;
	uint16_t x4219 = 7U;
	int64_t x4220 = INT64_MAX;
	static volatile int64_t t53 = 7932374980572059LL;

	t53 = (x4217%((x4218<<x4219)%x4220));

	if (t53 != -512LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x4237 = 12U;
	volatile uint64_t x4238 = UINT64_MAX;
	static volatile uint8_t x4239 = 3U;

	t54 = (x4237%((x4238<<x4239)%x4240));

	if (t54 != 12LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x4414 = 2886499461518277LLU;
	int32_t x4415 = 2;
	volatile uint8_t x4416 = UINT8_MAX;
	uint64_t t55 = 1LLU;

	t55 = (x4413%((x4414<<x4415)%x4416));

	if (t55 != 6LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x4443 = 13U;
	static uint32_t x4444 = 25780U;
	static volatile uint32_t t56 = 1044192998U;

	t56 = (x4441%((x4442<<x4443)%x4444));

	if (t56 != 127U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4465 = INT32_MIN;
	volatile uint32_t x4467 = 14U;
	volatile uint8_t x4468 = UINT8_MAX;
	int32_t t57 = -19212061;

	t57 = (x4465%((x4466<<x4467)%x4468));

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x4506 = 372940U;
	uint8_t x4507 = 1U;
	int16_t x4508 = INT16_MAX;
	static uint64_t t58 = 41327311615LLU;

	t58 = (x4505%((x4506<<x4507)%x4508));

	if (t58 != 12151LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x4577 = INT32_MIN;
	uint64_t x4578 = 1533081962LLU;
	uint8_t x4579 = 12U;
	int64_t x4580 = -1LL;
	uint64_t t59 = 7025LLU;

	t59 = (x4577%((x4578<<x4579)%x4580));

	if (t59 != 4879865552896LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4617 = 603015U;
	static int8_t x4618 = INT8_MAX;
	int16_t x4619 = 12;
	int16_t x4620 = -24;
	uint32_t t60 = 211U;

	t60 = (x4617%((x4618<<x4619)%x4620));

	if (t60 != 7U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x4799 = 17U;
	static uint64_t t61 = 11068462268156LLU;

	t61 = (x4797%((x4798<<x4799)%x4800));

	if (t61 != 13198LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4849 = UINT16_MAX;
	volatile int64_t x4850 = 104954794709LL;
	volatile uint8_t x4851 = 8U;
	uint32_t x4852 = UINT32_MAX;
	int64_t t62 = -202LL;

	t62 = (x4849%((x4850<<x4851)%x4852));

	if (t62 != 65535LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x4925 = -818247237987430LL;
	uint8_t x4926 = UINT8_MAX;
	static uint8_t x4927 = 16U;
	static uint32_t x4928 = 2485284U;
	volatile int64_t t63 = 743LL;

	t63 = (x4925%((x4926<<x4927)%x4928));

	if (t63 != -96070LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x5065 = 186U;
	volatile uint64_t x5066 = UINT64_MAX;
	int8_t x5067 = 2;
	uint64_t t64 = 200932LLU;

	t64 = (x5065%((x5066<<x5067)%x5068));

	if (t64 != 186LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x5157 = INT16_MIN;
	uint8_t x5158 = 22U;
	int8_t x5159 = 4;
	static int32_t x5160 = INT32_MIN;
	volatile int32_t t65 = 196960;

	t65 = (x5157%((x5158<<x5159)%x5160));

	if (t65 != -32) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x5177 = 3590259472345306835LLU;
	static uint8_t x5178 = 58U;
	static uint16_t x5179 = 1U;
	volatile uint16_t x5180 = UINT16_MAX;
	static uint64_t t66 = 86889867839928305LLU;

	t66 = (x5177%((x5178<<x5179)%x5180));

	if (t66 != 55LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x5245 = 2366114201366LLU;
	volatile uint16_t x5246 = UINT16_MAX;
	static int64_t x5247 = 0LL;
	volatile int64_t x5248 = INT64_MIN;
	volatile uint64_t t67 = 306352235438LLU;

	t67 = (x5245%((x5246<<x5247)%x5248));

	if (t67 != 26786LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x5354 = UINT64_MAX;
	static volatile int64_t x5356 = -1LL;
	volatile uint64_t t68 = 112LLU;

	t68 = (x5353%((x5354<<x5355)%x5356));

	if (t68 != 2147483647LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x5421 = UINT64_MAX;
	uint16_t x5422 = UINT16_MAX;
	static uint8_t x5423 = 1U;
	int64_t x5424 = INT64_MIN;
	uint64_t t69 = 666454LLU;

	t69 = (x5421%((x5422<<x5423)%x5424));

	if (t69 != 65535LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x5477 = -228;
	volatile int64_t x5478 = 5774456652LL;
	uint8_t x5479 = 1U;
	uint16_t x5480 = UINT16_MAX;
	int64_t t70 = 1109417632823910LL;

	t70 = (x5477%((x5478<<x5479)%x5480));

	if (t70 != -228LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x5569 = 3;
	uint64_t x5570 = 24827337201992LLU;
	volatile uint32_t x5571 = 26U;
	uint32_t x5572 = UINT32_MAX;
	volatile uint64_t t71 = 4340355LLU;

	t71 = (x5569%((x5570<<x5571)%x5572));

	if (t71 != 3LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5733 = INT16_MAX;
	volatile uint8_t x5735 = 19U;
	int16_t x5736 = INT16_MAX;

	t72 = (x5733%((x5734<<x5735)%x5736));

	if (t72 != 2143) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x5957 = INT16_MAX;
	static uint64_t x5958 = 96861642654LLU;
	int8_t x5959 = 1;
	static uint8_t x5960 = UINT8_MAX;
	uint64_t t73 = 322731LLU;

	t73 = (x5957%((x5958<<x5959)%x5960));

	if (t73 != 7LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5988 = 6;
	uint64_t t74 = 3311733440177349728LLU;

	t74 = (x5985%((x5986<<x5987)%x5988));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x6034 = 1836U;
	int16_t x6035 = 1;
	volatile int32_t t75 = 131609787;

	t75 = (x6033%((x6034<<x6035)%x6036));

	if (t75 != 3111) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x6069 = INT16_MIN;
	volatile uint16_t x6070 = 1U;
	uint32_t x6071 = 13U;
	uint16_t x6072 = UINT16_MAX;

	t76 = (x6069%((x6070<<x6071)%x6072));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x6137 = UINT8_MAX;
	uint64_t x6138 = UINT64_MAX;
	uint8_t x6139 = 0U;
	uint64_t t77 = 26066151452222LLU;

	t77 = (x6137%((x6138<<x6139)%x6140));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x6225 = 1;
	uint8_t x6226 = 2U;
	uint8_t x6227 = 0U;
	static uint64_t x6228 = UINT64_MAX;
	uint64_t t78 = 23601LLU;

	t78 = (x6225%((x6226<<x6227)%x6228));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x6370 = UINT64_MAX;
	static int32_t x6371 = 0;
	volatile int32_t x6372 = INT32_MAX;
	volatile uint64_t t79 = 71710123893LLU;

	t79 = (x6369%((x6370<<x6371)%x6372));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x6597 = -4;
	volatile int64_t x6598 = 5109261022LL;
	static int8_t x6599 = 0;
	int8_t x6600 = -7;
	int64_t t80 = 307823LL;

	t80 = (x6597%((x6598<<x6599)%x6600));

	if (t80 != -4LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x6638 = 61LL;
	int8_t x6639 = 20;
	static int8_t x6640 = -7;
	volatile int64_t t81 = 49378LL;

	t81 = (x6637%((x6638<<x6639)%x6640));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x6670 = 1LL;
	uint8_t x6671 = 12U;
	uint64_t x6672 = UINT64_MAX;
	volatile uint64_t t82 = 88399838830LLU;

	t82 = (x6669%((x6670<<x6671)%x6672));

	if (t82 != 4095LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x6733 = 3U;
	uint64_t x6734 = 1407LLU;
	volatile uint8_t x6735 = 0U;
	int16_t x6736 = 6090;
	uint64_t t83 = 13969LLU;

	t83 = (x6733%((x6734<<x6735)%x6736));

	if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x6893 = 728U;
	volatile uint8_t x6894 = 102U;
	volatile uint16_t x6895 = 1U;
	uint16_t x6896 = 27U;
	volatile uint32_t t84 = 1212385149U;

	t84 = (x6893%((x6894<<x6895)%x6896));

	if (t84 != 8U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6957 = 1996977897LLU;
	volatile uint32_t x6958 = 1637U;
	int8_t x6959 = 3;
	int32_t x6960 = -1;

	t85 = (x6957%((x6958<<x6959)%x6960));

	if (t85 != 8145LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x6961 = -38756451578068LL;
	static uint16_t x6962 = UINT16_MAX;
	volatile int8_t x6963 = 1;
	uint8_t x6964 = 32U;

	t86 = (x6961%((x6962<<x6963)%x6964));

	if (t86 != -28LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x7025 = -1;
	volatile int8_t x7026 = INT8_MAX;
	uint16_t x7027 = 5U;
	int64_t x7028 = -185LL;
	int64_t t87 = -290LL;

	t87 = (x7025%((x7026<<x7027)%x7028));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x7037 = -1;
	static uint8_t x7039 = 0U;
	int16_t x7040 = INT16_MIN;
	volatile int32_t t88 = -1460;

	t88 = (x7037%((x7038<<x7039)%x7040));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x7153 = INT64_MIN;
	int8_t x7154 = INT8_MAX;
	int16_t x7155 = 3;
	uint64_t x7156 = 1393437042647736LLU;

	t89 = (x7153%((x7154<<x7155)%x7156));

	if (t89 != 128LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x7173 = 40162532U;
	volatile uint32_t x7174 = UINT32_MAX;
	uint8_t x7175 = 8U;
	int64_t x7176 = -2882611322417LL;
	static int64_t t90 = -77362LL;

	t90 = (x7173%((x7174<<x7175)%x7176));

	if (t90 != 40162532LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x7278 = INT32_MAX;
	int32_t x7280 = 7501225;
	int64_t t91 = 1780249LL;

	t91 = (x7277%((x7278<<x7279)%x7280));

	if (t91 != -397652LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x7346 = UINT32_MAX;
	uint8_t x7347 = 1U;
	int16_t x7348 = INT16_MAX;
	int64_t t92 = -925958843001564LL;

	t92 = (x7345%((x7346<<x7347)%x7348));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x7353 = INT64_MIN;
	int16_t x7354 = INT16_MAX;
	int16_t x7355 = 1;
	volatile uint64_t t93 = 68114819203886LLU;

	t93 = (x7353%((x7354<<x7355)%x7356));

	if (t93 != 8LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x7461 = 21;
	uint64_t x7462 = 33641LLU;
	static volatile int8_t x7463 = 1;
	static uint16_t x7464 = UINT16_MAX;
	uint64_t t94 = 254LLU;

	t94 = (x7461%((x7462<<x7463)%x7464));

	if (t94 != 21LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x7645 = 6938U;
	uint8_t x7647 = 26U;
	uint32_t x7648 = UINT32_MAX;

	t95 = (x7645%((x7646<<x7647)%x7648));

	if (t95 != 6938LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x7786 = 31997414U;
	int8_t x7787 = 1;
	static int8_t x7788 = INT8_MIN;
	volatile uint32_t t96 = 772710U;

	t96 = (x7785%((x7786<<x7787)%x7788));

	if (t96 != 127U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x7893 = UINT16_MAX;
	uint64_t x7894 = UINT64_MAX;
	int8_t x7895 = 61;
	uint16_t x7896 = UINT16_MAX;
	static uint64_t t97 = 140002278276408528LLU;

	t97 = (x7893%((x7894<<x7895)%x7896));

	if (t97 != 8191LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x8193 = 133830547394LL;
	static uint8_t x8194 = 10U;
	uint32_t x8195 = 0U;
	int32_t x8196 = -2357606;
	volatile int64_t t98 = -9996452364873LL;

	t98 = (x8193%((x8194<<x8195)%x8196));

	if (t98 != 4LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x8229 = 1LLU;
	uint32_t x8231 = 19U;
	int32_t x8232 = 152292;
	volatile uint64_t t99 = 8LLU;

	t99 = (x8229%((x8230<<x8231)%x8232));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

