#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 32114U;
uint64_t x77 = UINT64_MAX;
uint8_t x114 = 1U;
volatile uint16_t x213 = 10U;
static volatile uint32_t t4 = 1732077U;
int32_t x421 = INT32_MAX;
static int8_t x607 = INT8_MAX;
static uint32_t x626 = 23U;
uint64_t x628 = UINT64_MAX;
int64_t x674 = 4LL;
int8_t x676 = -1;
volatile int64_t t13 = -1815LL;
volatile int64_t t14 = 82783861LL;
volatile int64_t x947 = -1LL;
static volatile int32_t t15 = -228682428;
volatile int8_t x1059 = INT8_MIN;
int64_t x1107 = INT64_MIN;
int8_t x1108 = 1;
uint16_t x1137 = 6411U;
int16_t x1140 = 759;
uint32_t x1165 = 207960245U;
uint32_t x1166 = 28U;
int64_t x1263 = -1LL;
static int32_t t22 = -449640292;
volatile uint32_t x1341 = 3U;
volatile uint64_t x1436 = 2914516718LLU;
int16_t x1673 = INT16_MAX;
static volatile uint8_t x1849 = 50U;
volatile int64_t x1851 = INT64_MAX;
static uint16_t x1918 = 0U;
uint32_t x2077 = 127U;
volatile int8_t x2079 = INT8_MAX;
static int8_t x2085 = INT8_MAX;
volatile uint8_t x2086 = 1U;
volatile int64_t x2200 = INT64_MIN;
uint64_t x2221 = UINT64_MAX;
volatile uint64_t t37 = 1108455550772830121LLU;
int16_t x2706 = 1;
static uint8_t x2809 = 11U;
static uint8_t x2810 = 4U;
volatile int32_t t42 = 834016280;
int32_t x2992 = -1;
volatile int64_t x3016 = INT64_MAX;
int8_t x3077 = 1;
volatile uint64_t t49 = 119320441843LLU;
static uint8_t x3126 = 9U;
uint16_t x3128 = 305U;
static int32_t x3245 = 5;
int8_t x3248 = INT8_MIN;
uint16_t x3473 = 286U;
uint16_t x3475 = 3U;
uint64_t t57 = 12690367LLU;
static volatile int16_t x3575 = -1;
static int64_t t61 = -11077163LL;
static uint64_t x3713 = 1739965810LLU;
int32_t t62 = -13;
int64_t x3721 = 56LL;
int8_t x3722 = 13;
volatile uint64_t t63 = 444600536974029LLU;
uint32_t x3887 = UINT32_MAX;
uint32_t x3893 = UINT32_MAX;
int32_t x3895 = INT32_MIN;
int16_t x3943 = -1;
uint64_t x4109 = UINT64_MAX;
int32_t t68 = 8097;
int64_t x4137 = 8706799822500LL;
static volatile uint8_t x4138 = 9U;
static int32_t x4180 = -184504;
static int32_t t72 = 23;
volatile uint64_t t73 = 2978923393873446LLU;
volatile uint8_t x4359 = 4U;
static uint64_t x4420 = 8297058292137LLU;
int32_t x4680 = INT32_MAX;
uint16_t x4746 = 1U;
int16_t x4748 = -8;
int32_t t82 = -148566828;
static int64_t x4835 = -986496745557921387LL;
static volatile int32_t t83 = -164341510;
static volatile uint64_t x4905 = 5764680348153661612LLU;
int64_t t84 = 3153780LL;
uint32_t x5134 = 0U;
int16_t x5135 = -1;
uint8_t x5282 = 12U;
volatile uint64_t x5283 = 4LLU;
int32_t x5291 = INT32_MIN;
int64_t t89 = 4168002046850218589LL;
int32_t t90 = 174;
int32_t t91 = -2;
int8_t x5378 = 1;
volatile uint32_t t94 = 1168195858U;
uint16_t x5437 = UINT16_MAX;
int16_t x5438 = 1;
uint32_t t98 = 0U;


void f0(void) {
	static volatile uint8_t x2 = 8U;
	int8_t x3 = -1;
	uint32_t x4 = 3U;
	uint32_t t0 = 16842835U;

	t0 = (((x1<<x2)<x3)%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x78 = 0U;
	static int8_t x79 = -12;
	int16_t x80 = INT16_MIN;
	volatile int32_t t1 = -7;

	t1 = (((x77<<x78)<x79)%x80);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x113 = 10472656743LL;
	static int32_t x115 = -56;
	uint32_t x116 = 757968U;
	uint32_t t2 = 3U;

	t2 = (((x113<<x114)<x115)%x116);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x214 = 5U;
	static volatile int64_t x215 = INT64_MAX;
	uint32_t x216 = 24329U;
	volatile uint32_t t3 = 16U;

	t3 = (((x213<<x214)<x215)%x216);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x265 = 0;
	uint64_t x266 = 29LLU;
	int32_t x267 = -1;
	static uint32_t x268 = 20004366U;

	t4 = (((x265<<x266)<x267)%x268);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x422 = 0;
	int8_t x423 = INT8_MIN;
	int64_t x424 = 60976781780LL;
	int64_t t5 = 21LL;

	t5 = (((x421<<x422)<x423)%x424);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x425 = 2082012473U;
	int32_t x426 = 5;
	volatile uint16_t x427 = UINT16_MAX;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t6 = 20392024LLU;

	t6 = (((x425<<x426)<x427)%x428);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x505 = UINT16_MAX;
	uint8_t x506 = 1U;
	static uint8_t x507 = 89U;
	int8_t x508 = -1;
	int32_t t7 = 1;

	t7 = (((x505<<x506)<x507)%x508);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x605 = 11U;
	static int8_t x606 = 1;
	uint32_t x608 = 510761U;
	volatile uint32_t t8 = 8U;

	t8 = (((x605<<x606)<x607)%x608);

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x613 = UINT32_MAX;
	uint8_t x614 = 6U;
	volatile int16_t x615 = -1;
	uint64_t x616 = UINT64_MAX;
	volatile uint64_t t9 = 47456871057245074LLU;

	t9 = (((x613<<x614)<x615)%x616);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x625 = 1U;
	int64_t x627 = INT64_MAX;
	uint64_t t10 = 110920LLU;

	t10 = (((x625<<x626)<x627)%x628);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x673 = 29470961LLU;
	int64_t x675 = INT64_MIN;
	static volatile int32_t t11 = 10585358;

	t11 = (((x673<<x674)<x675)%x676);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x749 = 78U;
	uint16_t x750 = 0U;
	int16_t x751 = INT16_MIN;
	int32_t x752 = -10245;
	int32_t t12 = 64001926;

	t12 = (((x749<<x750)<x751)%x752);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x849 = 952866U;
	int8_t x850 = 7;
	uint16_t x851 = 4U;
	static int64_t x852 = INT64_MIN;

	t13 = (((x849<<x850)<x851)%x852);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x929 = 1378565165006943LL;
	uint8_t x930 = 0U;
	uint32_t x931 = 55467U;
	int64_t x932 = -184411LL;

	t14 = (((x929<<x930)<x931)%x932);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x945 = INT8_MAX;
	static int32_t x946 = 1;
	int32_t x948 = -1;

	t15 = (((x945<<x946)<x947)%x948);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x1037 = 61;
	uint64_t x1038 = 5LLU;
	int32_t x1039 = -1;
	int8_t x1040 = INT8_MAX;
	int32_t t16 = 37744;

	t16 = (((x1037<<x1038)<x1039)%x1040);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1057 = INT16_MAX;
	static int16_t x1058 = 1;
	int16_t x1060 = -67;
	volatile int32_t t17 = 1354;

	t17 = (((x1057<<x1058)<x1059)%x1060);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1073 = UINT64_MAX;
	uint32_t x1074 = 30U;
	uint16_t x1075 = UINT16_MAX;
	uint64_t x1076 = 16LLU;
	volatile uint64_t t18 = 37675680120LLU;

	t18 = (((x1073<<x1074)<x1075)%x1076);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1105 = 1;
	volatile int32_t x1106 = 9;
	volatile int32_t t19 = -97591;

	t19 = (((x1105<<x1106)<x1107)%x1108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1138 = 7;
	int32_t x1139 = 10465;
	static volatile int32_t t20 = -33;

	t20 = (((x1137<<x1138)<x1139)%x1140);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1167 = 43;
	volatile int64_t x1168 = INT64_MIN;
	static volatile int64_t t21 = -651567518LL;

	t21 = (((x1165<<x1166)<x1167)%x1168);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1261 = 13055U;
	int8_t x1262 = 6;
	int8_t x1264 = 6;

	t22 = (((x1261<<x1262)<x1263)%x1264);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1342 = 1U;
	static int32_t x1343 = -1693420;
	uint32_t x1344 = UINT32_MAX;
	volatile uint32_t t23 = 6653331U;

	t23 = (((x1341<<x1342)<x1343)%x1344);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1433 = 1576U;
	uint16_t x1434 = 19U;
	uint32_t x1435 = 326U;
	uint64_t t24 = 7086878416640661LLU;

	t24 = (((x1433<<x1434)<x1435)%x1436);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x1629 = 2U;
	volatile int16_t x1630 = 0;
	int16_t x1631 = INT16_MIN;
	int32_t x1632 = -1;
	int32_t t25 = 3249458;

	t25 = (((x1629<<x1630)<x1631)%x1632);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1674 = 12U;
	uint16_t x1675 = 6845U;
	volatile int8_t x1676 = 59;
	int32_t t26 = -46205;

	t26 = (((x1673<<x1674)<x1675)%x1676);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x1717 = 5U;
	static int8_t x1718 = 11;
	int32_t x1719 = INT32_MAX;
	volatile int16_t x1720 = INT16_MAX;
	volatile int32_t t27 = 28;

	t27 = (((x1717<<x1718)<x1719)%x1720);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1850 = 24;
	int16_t x1852 = INT16_MAX;
	int32_t t28 = 249206;

	t28 = (((x1849<<x1850)<x1851)%x1852);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1889 = INT8_MAX;
	static volatile int8_t x1890 = 0;
	uint16_t x1891 = 3U;
	int16_t x1892 = 1;
	int32_t t29 = -466476357;

	t29 = (((x1889<<x1890)<x1891)%x1892);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1913 = INT32_MAX;
	static int8_t x1914 = 0;
	uint8_t x1915 = 3U;
	int64_t x1916 = 69551LL;
	volatile int64_t t30 = 164349850LL;

	t30 = (((x1913<<x1914)<x1915)%x1916);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1917 = 718777044;
	int8_t x1919 = INT8_MAX;
	int16_t x1920 = INT16_MAX;
	int32_t t31 = 379;

	t31 = (((x1917<<x1918)<x1919)%x1920);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1957 = 0;
	int16_t x1958 = 1;
	int16_t x1959 = INT16_MIN;
	static int32_t x1960 = 1;
	static volatile int32_t t32 = 20770406;

	t32 = (((x1957<<x1958)<x1959)%x1960);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2078 = 2LLU;
	volatile int32_t x2080 = INT32_MAX;
	volatile int32_t t33 = 155423309;

	t33 = (((x2077<<x2078)<x2079)%x2080);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2087 = 14404463962196LLU;
	uint8_t x2088 = UINT8_MAX;
	static volatile int32_t t34 = -9840977;

	t34 = (((x2085<<x2086)<x2087)%x2088);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2197 = UINT8_MAX;
	volatile uint16_t x2198 = 12U;
	static int16_t x2199 = INT16_MIN;
	int64_t t35 = 25169773887LL;

	t35 = (((x2197<<x2198)<x2199)%x2200);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2217 = 6212358LLU;
	int8_t x2218 = 5;
	int16_t x2219 = -5743;
	int32_t x2220 = INT32_MAX;
	volatile int32_t t36 = 0;

	t36 = (((x2217<<x2218)<x2219)%x2220);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2222 = 61;
	static volatile int32_t x2223 = INT32_MIN;
	uint64_t x2224 = UINT64_MAX;

	t37 = (((x2221<<x2222)<x2223)%x2224);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2277 = 3679561875373099LLU;
	int16_t x2278 = 0;
	static volatile uint64_t x2279 = UINT64_MAX;
	static int64_t x2280 = INT64_MAX;
	int64_t t38 = 67173572384972112LL;

	t38 = (((x2277<<x2278)<x2279)%x2280);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2333 = UINT64_MAX;
	static uint8_t x2334 = 26U;
	uint8_t x2335 = 1U;
	int16_t x2336 = INT16_MAX;
	static volatile int32_t t39 = 1827;

	t39 = (((x2333<<x2334)<x2335)%x2336);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2705 = 2310;
	int8_t x2707 = 1;
	int16_t x2708 = -1;
	static volatile int32_t t40 = 2680461;

	t40 = (((x2705<<x2706)<x2707)%x2708);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2785 = UINT16_MAX;
	uint16_t x2786 = 2U;
	int8_t x2787 = 37;
	int32_t x2788 = INT32_MIN;
	int32_t t41 = 489;

	t41 = (((x2785<<x2786)<x2787)%x2788);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2811 = UINT32_MAX;
	volatile int8_t x2812 = INT8_MIN;

	t42 = (((x2809<<x2810)<x2811)%x2812);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2813 = INT16_MAX;
	static int16_t x2814 = 3;
	int32_t x2815 = -1;
	int64_t x2816 = 709958778LL;
	static volatile int64_t t43 = 31LL;

	t43 = (((x2813<<x2814)<x2815)%x2816);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2845 = 11U;
	int8_t x2846 = 1;
	uint32_t x2847 = UINT32_MAX;
	int8_t x2848 = -1;
	int32_t t44 = -3406;

	t44 = (((x2845<<x2846)<x2847)%x2848);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x2989 = UINT8_MAX;
	uint16_t x2990 = 15U;
	static int32_t x2991 = INT32_MAX;
	volatile int32_t t45 = -834;

	t45 = (((x2989<<x2990)<x2991)%x2992);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x3013 = UINT32_MAX;
	uint8_t x3014 = 2U;
	int32_t x3015 = -64362;
	int64_t t46 = 575459429LL;

	t46 = (((x3013<<x3014)<x3015)%x3016);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3045 = UINT32_MAX;
	uint16_t x3046 = 3U;
	volatile int32_t x3047 = INT32_MIN;
	static volatile uint8_t x3048 = 1U;
	volatile int32_t t47 = -22195509;

	t47 = (((x3045<<x3046)<x3047)%x3048);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3078 = 13;
	static volatile uint16_t x3079 = UINT16_MAX;
	int16_t x3080 = -1;
	volatile int32_t t48 = -1;

	t48 = (((x3077<<x3078)<x3079)%x3080);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3121 = UINT64_MAX;
	uint8_t x3122 = 2U;
	int8_t x3123 = INT8_MIN;
	uint64_t x3124 = UINT64_MAX;

	t49 = (((x3121<<x3122)<x3123)%x3124);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3125 = 20U;
	uint64_t x3127 = 72038LLU;
	volatile int32_t t50 = 22;

	t50 = (((x3125<<x3126)<x3127)%x3128);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3141 = 104186U;
	volatile int8_t x3142 = 0;
	static int16_t x3143 = -1;
	uint16_t x3144 = 1U;
	volatile int32_t t51 = 7573;

	t51 = (((x3141<<x3142)<x3143)%x3144);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x3145 = 126357033003714549LL;
	int8_t x3146 = 3;
	int8_t x3147 = INT8_MIN;
	uint16_t x3148 = 4U;
	int32_t t52 = -25839892;

	t52 = (((x3145<<x3146)<x3147)%x3148);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x3221 = 2425462LLU;
	uint8_t x3222 = 9U;
	int32_t x3223 = INT32_MAX;
	uint8_t x3224 = 50U;
	static volatile int32_t t53 = 10;

	t53 = (((x3221<<x3222)<x3223)%x3224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x3225 = UINT8_MAX;
	static volatile uint8_t x3226 = 2U;
	volatile int16_t x3227 = -1;
	static int8_t x3228 = 1;
	int32_t t54 = -1;

	t54 = (((x3225<<x3226)<x3227)%x3228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3246 = 2LLU;
	uint32_t x3247 = 114359003U;
	int32_t t55 = 609190;

	t55 = (((x3245<<x3246)<x3247)%x3248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3317 = UINT8_MAX;
	volatile int8_t x3318 = 0;
	int64_t x3319 = -50LL;
	int32_t x3320 = INT32_MAX;
	int32_t t56 = -11400;

	t56 = (((x3317<<x3318)<x3319)%x3320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3474 = 1;
	uint64_t x3476 = UINT64_MAX;

	t57 = (((x3473<<x3474)<x3475)%x3476);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3557 = 11U;
	int16_t x3558 = 2;
	int64_t x3559 = -1LL;
	static int8_t x3560 = 1;
	volatile int32_t t58 = 12715;

	t58 = (((x3557<<x3558)<x3559)%x3560);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3573 = 2243LL;
	volatile int16_t x3574 = 13;
	volatile uint8_t x3576 = 2U;
	static int32_t t59 = -2479921;

	t59 = (((x3573<<x3574)<x3575)%x3576);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3637 = UINT16_MAX;
	uint8_t x3638 = 10U;
	int32_t x3639 = INT32_MAX;
	static int64_t x3640 = 3953LL;
	static volatile int64_t t60 = 62476LL;

	t60 = (((x3637<<x3638)<x3639)%x3640);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x3669 = INT8_MAX;
	int8_t x3670 = 1;
	int64_t x3671 = -1LL;
	int64_t x3672 = INT64_MAX;

	t61 = (((x3669<<x3670)<x3671)%x3672);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3714 = 3U;
	volatile int8_t x3715 = -1;
	volatile int8_t x3716 = INT8_MIN;

	t62 = (((x3713<<x3714)<x3715)%x3716);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3723 = INT32_MIN;
	volatile uint64_t x3724 = UINT64_MAX;

	t63 = (((x3721<<x3722)<x3723)%x3724);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3885 = 7U;
	volatile uint16_t x3886 = 4U;
	int64_t x3888 = INT64_MIN;
	volatile int64_t t64 = 32454335487737809LL;

	t64 = (((x3885<<x3886)<x3887)%x3888);

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3894 = 8U;
	uint32_t x3896 = 1U;
	volatile uint32_t t65 = 297037429U;

	t65 = (((x3893<<x3894)<x3895)%x3896);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x3909 = 9780;
	uint8_t x3910 = 3U;
	int32_t x3911 = INT32_MIN;
	int16_t x3912 = -1;
	static int32_t t66 = -345160;

	t66 = (((x3909<<x3910)<x3911)%x3912);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3941 = UINT16_MAX;
	volatile int64_t x3942 = 0LL;
	int8_t x3944 = -7;
	volatile int32_t t67 = -1;

	t67 = (((x3941<<x3942)<x3943)%x3944);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4110 = 0U;
	uint8_t x4111 = 72U;
	int32_t x4112 = -1;

	t68 = (((x4109<<x4110)<x4111)%x4112);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4139 = 0U;
	static int32_t x4140 = INT32_MIN;
	volatile int32_t t69 = 573875385;

	t69 = (((x4137<<x4138)<x4139)%x4140);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4177 = 2;
	int8_t x4178 = 11;
	volatile int32_t x4179 = 124899;
	static int32_t t70 = -1725;

	t70 = (((x4177<<x4178)<x4179)%x4180);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x4197 = UINT16_MAX;
	int8_t x4198 = 0;
	volatile uint64_t x4199 = 5875316124LLU;
	uint8_t x4200 = UINT8_MAX;
	int32_t t71 = -17;

	t71 = (((x4197<<x4198)<x4199)%x4200);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x4225 = 1592336279869059LL;
	uint32_t x4226 = 1U;
	volatile int16_t x4227 = INT16_MIN;
	volatile uint8_t x4228 = 12U;

	t72 = (((x4225<<x4226)<x4227)%x4228);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4273 = UINT64_MAX;
	uint16_t x4274 = 5U;
	int64_t x4275 = INT64_MIN;
	static uint64_t x4276 = 1180356LLU;

	t73 = (((x4273<<x4274)<x4275)%x4276);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4277 = 5U;
	uint8_t x4278 = 23U;
	uint16_t x4279 = 856U;
	uint32_t x4280 = UINT32_MAX;
	uint32_t t74 = 10513U;

	t74 = (((x4277<<x4278)<x4279)%x4280);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4357 = 31;
	uint64_t x4358 = 0LLU;
	int8_t x4360 = 3;
	int32_t t75 = 1681;

	t75 = (((x4357<<x4358)<x4359)%x4360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x4417 = UINT32_MAX;
	uint8_t x4418 = 1U;
	uint32_t x4419 = 103U;
	uint64_t t76 = 1142178415LLU;

	t76 = (((x4417<<x4418)<x4419)%x4420);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4625 = 63;
	int8_t x4626 = 2;
	static int8_t x4627 = INT8_MAX;
	uint16_t x4628 = 5138U;
	int32_t t77 = 1824;

	t77 = (((x4625<<x4626)<x4627)%x4628);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4629 = 8546896386LL;
	uint8_t x4630 = 24U;
	static uint32_t x4631 = UINT32_MAX;
	static volatile int32_t x4632 = INT32_MIN;
	volatile int32_t t78 = 0;

	t78 = (((x4629<<x4630)<x4631)%x4632);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4637 = 356454577U;
	uint32_t x4638 = 2U;
	int32_t x4639 = INT32_MIN;
	int32_t x4640 = INT32_MIN;
	static volatile int32_t t79 = -678108056;

	t79 = (((x4637<<x4638)<x4639)%x4640);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4677 = 2187U;
	volatile int64_t x4678 = 0LL;
	int64_t x4679 = 5775051246912335LL;
	volatile int32_t t80 = 18;

	t80 = (((x4677<<x4678)<x4679)%x4680);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4693 = 45U;
	int16_t x4694 = 0;
	int8_t x4695 = INT8_MIN;
	volatile uint8_t x4696 = UINT8_MAX;
	int32_t t81 = 2;

	t81 = (((x4693<<x4694)<x4695)%x4696);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x4745 = INT16_MAX;
	int32_t x4747 = INT32_MIN;

	t82 = (((x4745<<x4746)<x4747)%x4748);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4833 = 99;
	static uint8_t x4834 = 4U;
	int16_t x4836 = 1;

	t83 = (((x4833<<x4834)<x4835)%x4836);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4906 = 32LL;
	int8_t x4907 = -11;
	int64_t x4908 = INT64_MIN;

	t84 = (((x4905<<x4906)<x4907)%x4908);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4993 = INT8_MAX;
	int32_t x4994 = 16;
	uint32_t x4995 = 23U;
	volatile int16_t x4996 = INT16_MIN;
	volatile int32_t t85 = 211854858;

	t85 = (((x4993<<x4994)<x4995)%x4996);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x5133 = 728;
	int64_t x5136 = INT64_MIN;
	int64_t t86 = -1180943692957685614LL;

	t86 = (((x5133<<x5134)<x5135)%x5136);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5209 = INT64_MAX;
	static int32_t x5210 = 0;
	volatile int16_t x5211 = -1;
	static uint8_t x5212 = 123U;
	int32_t t87 = 204891;

	t87 = (((x5209<<x5210)<x5211)%x5212);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5281 = 3U;
	static uint8_t x5284 = 127U;
	static int32_t t88 = 25025256;

	t88 = (((x5281<<x5282)<x5283)%x5284);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5289 = INT8_MAX;
	volatile uint16_t x5290 = 3U;
	int64_t x5292 = 663496887964204LL;

	t89 = (((x5289<<x5290)<x5291)%x5292);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5301 = INT8_MAX;
	uint16_t x5302 = 21U;
	int8_t x5303 = INT8_MAX;
	volatile int32_t x5304 = INT32_MIN;

	t90 = (((x5301<<x5302)<x5303)%x5304);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x5305 = UINT8_MAX;
	uint16_t x5306 = 11U;
	int16_t x5307 = 15;
	static int16_t x5308 = INT16_MIN;

	t91 = (((x5305<<x5306)<x5307)%x5308);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5317 = 57;
	int8_t x5318 = 1;
	volatile int8_t x5319 = 0;
	uint32_t x5320 = UINT32_MAX;
	uint32_t t92 = 1803U;

	t92 = (((x5317<<x5318)<x5319)%x5320);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5377 = INT8_MAX;
	int32_t x5379 = INT32_MIN;
	int8_t x5380 = INT8_MIN;
	int32_t t93 = 440311;

	t93 = (((x5377<<x5378)<x5379)%x5380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5381 = INT16_MAX;
	volatile int8_t x5382 = 8;
	int16_t x5383 = INT16_MAX;
	static volatile uint32_t x5384 = 3U;

	t94 = (((x5381<<x5382)<x5383)%x5384);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5439 = 153LLU;
	static int64_t x5440 = -1LL;
	volatile int64_t t95 = -377000LL;

	t95 = (((x5437<<x5438)<x5439)%x5440);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5649 = 1;
	uint8_t x5650 = 4U;
	int16_t x5651 = INT16_MIN;
	static volatile int32_t x5652 = 552447905;
	volatile int32_t t96 = 189597;

	t96 = (((x5649<<x5650)<x5651)%x5652);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5657 = 299U;
	int32_t x5658 = 2;
	static int64_t x5659 = INT64_MIN;
	uint16_t x5660 = 2211U;
	static int32_t t97 = 29083;

	t97 = (((x5657<<x5658)<x5659)%x5660);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5817 = INT16_MAX;
	uint16_t x5818 = 13U;
	uint8_t x5819 = 32U;
	uint32_t x5820 = 1140U;

	t98 = (((x5817<<x5818)<x5819)%x5820);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x5833 = 103237LLU;
	static volatile uint8_t x5834 = 2U;
	int64_t x5835 = 97829371LL;
	static int64_t x5836 = INT64_MIN;
	static volatile int64_t t99 = -4707573021788225LL;

	t99 = (((x5833<<x5834)<x5835)%x5836);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

