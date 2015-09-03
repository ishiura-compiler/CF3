#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = UINT16_MAX;
uint16_t x90 = 28U;
uint8_t x94 = 2U;
int32_t x156 = INT32_MAX;
volatile uint16_t x253 = 297U;
static int64_t x256 = -671292092884LL;
volatile int32_t t4 = 271417332;
int8_t x525 = 0;
int64_t x526 = 7LL;
int8_t x528 = -1;
uint8_t x545 = 0U;
static uint16_t x547 = UINT16_MAX;
int8_t x548 = -57;
uint16_t x564 = 11764U;
uint32_t t8 = 270U;
uint32_t x625 = 2063654U;
int16_t x652 = -764;
int32_t x657 = 59;
volatile uint8_t x924 = 58U;
uint32_t x990 = 0U;
int32_t x992 = -5742442;
uint32_t t17 = UINT32_MAX;
uint32_t x1019 = 803689U;
uint16_t x1033 = 329U;
int32_t x1222 = 21;
int32_t x1247 = -1;
static int8_t x1248 = INT8_MAX;
static int8_t x1252 = INT8_MAX;
static volatile int32_t t23 = 572813;
static volatile int32_t t24 = 3094475;
int32_t x1304 = 15239118;
uint8_t x1446 = 1U;
int16_t x1447 = 28;
uint8_t x1682 = 8U;
volatile uint16_t x1684 = UINT16_MAX;
int8_t x1701 = 1;
static volatile int32_t x1796 = -18;
volatile uint64_t x1902 = 26LLU;
int8_t x1986 = 2;
uint8_t x2185 = 7U;
volatile int32_t t36 = 106;
int8_t x2207 = INT8_MIN;
int16_t x2208 = 14547;
int64_t x2280 = INT64_MIN;
uint8_t x2307 = UINT8_MAX;
int32_t t40 = -307828;
uint32_t x2436 = UINT32_MAX;
uint16_t x2685 = 45U;
int32_t x2696 = INT32_MAX;
static uint16_t x2704 = UINT16_MAX;
static uint8_t x2746 = 3U;
static uint32_t x2747 = UINT32_MAX;
static uint32_t x2855 = UINT32_MAX;
uint64_t x2923 = 4316376633739LLU;
int64_t x3040 = INT64_MAX;
int8_t x3055 = 38;
uint32_t x3098 = 27U;
static int16_t x3099 = INT16_MAX;
int32_t t55 = -1067956;
static int8_t x3227 = INT8_MAX;
uint8_t x3408 = 2U;
volatile int8_t x3438 = 19;
int32_t t59 = -16520;
volatile uint32_t x3605 = 2180U;
volatile uint32_t t61 = 2130670731U;
int16_t x3734 = 0;
int8_t x3847 = INT8_MIN;
int64_t x3859 = INT64_MIN;
static int32_t x3860 = INT32_MIN;
int16_t x3897 = INT16_MAX;
static int8_t x3898 = 0;
volatile uint8_t x3938 = 9U;
int64_t x3939 = 37394813997233LL;
static int32_t t69 = -2;
static int32_t t70 = -511;
static uint64_t x4077 = 2626463262940419429LLU;
uint32_t x4224 = 184U;
int32_t t75 = -1;
uint64_t x4281 = UINT64_MAX;
volatile int32_t t77 = 470525004;
volatile uint64_t t78 = 3LLU;
static uint8_t x4466 = 1U;
int64_t x4484 = INT64_MAX;
volatile int16_t x4520 = 498;
int32_t t82 = -8;
uint32_t t85 = 5U;
static uint32_t t89 = 453132U;
uint8_t x4994 = 3U;
static uint64_t x4995 = UINT64_MAX;
uint16_t x5029 = 17835U;
volatile uint64_t x5030 = 0LLU;
int64_t x5043 = INT64_MAX;
static uint64_t t92 = 387308133143581LLU;
volatile int32_t x5111 = 1039868;
int64_t x5185 = 354769123LL;
int32_t t96 = 177057539;
int16_t x5229 = 0;
int32_t x5231 = 371034;
uint16_t x5261 = 133U;
uint8_t x5322 = 17U;
static int32_t x5323 = INT32_MIN;
static volatile uint64_t t99 = 1871498020194412815LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x2 = 8LL;
	uint16_t x4 = UINT16_MAX;
	volatile uint64_t t0 = 48915450506143LLU;

	t0 = ((x1<<x2)<<(x3==x4));

	if (t0 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x89 = 82U;
	int16_t x91 = 521;
	int32_t x92 = INT32_MAX;
	static volatile uint32_t t1 = 198665U;

	t1 = ((x89<<x90)<<(x91==x92));

	if (t1 != 536870912U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x93 = 246;
	volatile uint32_t x95 = UINT32_MAX;
	int64_t x96 = INT64_MIN;
	volatile int32_t t2 = 28204;

	t2 = ((x93<<x94)<<(x95==x96));

	if (t2 != 984) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x153 = INT16_MAX;
	uint8_t x154 = 1U;
	static int8_t x155 = -1;
	volatile int32_t t3 = 388106;

	t3 = ((x153<<x154)<<(x155==x156));

	if (t3 != 65534) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x254 = 4U;
	volatile uint32_t x255 = 0U;

	t4 = ((x253<<x254)<<(x255==x256));

	if (t4 != 4752) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x527 = INT8_MIN;
	int32_t t5 = 0;

	t5 = ((x525<<x526)<<(x527==x528));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x546 = 17LL;
	int32_t t6 = 361397;

	t6 = ((x545<<x546)<<(x547==x548));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x561 = INT64_MAX;
	uint16_t x562 = 0U;
	uint16_t x563 = UINT16_MAX;
	int64_t t7 = INT64_MAX;

	t7 = ((x561<<x562)<<(x563==x564));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x617 = UINT32_MAX;
	uint8_t x618 = 1U;
	int32_t x619 = INT32_MAX;
	static int16_t x620 = INT16_MIN;

	t8 = ((x617<<x618)<<(x619==x620));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x626 = 9;
	int8_t x627 = INT8_MIN;
	int64_t x628 = 1290707271625557LL;
	uint32_t t9 = 3U;

	t9 = ((x625<<x626)<<(x627==x628));

	if (t9 != 1056590848U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x649 = 20;
	static int8_t x650 = 6;
	volatile int64_t x651 = INT64_MAX;
	int32_t t10 = 4327;

	t10 = ((x649<<x650)<<(x651==x652));

	if (t10 != 1280) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x653 = INT32_MAX;
	uint8_t x654 = 0U;
	static volatile uint64_t x655 = UINT64_MAX;
	int64_t x656 = 753866338381LL;
	int32_t t11 = INT32_MAX;

	t11 = ((x653<<x654)<<(x655==x656));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x658 = 21U;
	static int8_t x659 = 21;
	int64_t x660 = 821LL;
	volatile int32_t t12 = 77751;

	t12 = ((x657<<x658)<<(x659==x660));

	if (t12 != 123731968) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x705 = 17LLU;
	static int16_t x706 = 6;
	int32_t x707 = 27507;
	int8_t x708 = INT8_MIN;
	static volatile uint64_t t13 = 2452LLU;

	t13 = ((x705<<x706)<<(x707==x708));

	if (t13 != 1088LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x893 = 42065769U;
	uint8_t x894 = 2U;
	int16_t x895 = -9;
	uint64_t x896 = 30462169206148173LLU;
	uint32_t t14 = 169U;

	t14 = ((x893<<x894)<<(x895==x896));

	if (t14 != 168263076U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x921 = 197U;
	volatile int16_t x922 = 1;
	volatile uint64_t x923 = 1500459111223LLU;
	volatile uint32_t t15 = 917U;

	t15 = ((x921<<x922)<<(x923==x924));

	if (t15 != 394U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x989 = 8U;
	static volatile int8_t x991 = INT8_MAX;
	static int32_t t16 = 3258;

	t16 = ((x989<<x990)<<(x991==x992));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x993 = UINT32_MAX;
	volatile int8_t x994 = 0;
	volatile uint32_t x995 = 450U;
	int64_t x996 = -1LL;

	t17 = ((x993<<x994)<<(x995==x996));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1017 = 25U;
	uint8_t x1018 = 4U;
	int16_t x1020 = INT16_MIN;
	volatile int32_t t18 = 71120;

	t18 = ((x1017<<x1018)<<(x1019==x1020));

	if (t18 != 400) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1025 = 5343U;
	static uint16_t x1026 = 0U;
	volatile int8_t x1027 = INT8_MIN;
	int8_t x1028 = INT8_MAX;
	volatile int32_t t19 = -42049;

	t19 = ((x1025<<x1026)<<(x1027==x1028));

	if (t19 != 5343) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1034 = 0U;
	uint8_t x1035 = 0U;
	int8_t x1036 = INT8_MAX;
	int32_t t20 = -249905835;

	t20 = ((x1033<<x1034)<<(x1035==x1036));

	if (t20 != 329) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1221 = UINT64_MAX;
	int8_t x1223 = -23;
	int64_t x1224 = INT64_MIN;
	volatile uint64_t t21 = 11530432786926LLU;

	t21 = ((x1221<<x1222)<<(x1223==x1224));

	if (t21 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1245 = UINT16_MAX;
	static uint16_t x1246 = 13U;
	volatile int32_t t22 = 244;

	t22 = ((x1245<<x1246)<<(x1247==x1248));

	if (t22 != 536862720) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1249 = 1U;
	uint8_t x1250 = 6U;
	static uint8_t x1251 = 2U;

	t23 = ((x1249<<x1250)<<(x1251==x1252));

	if (t23 != 64) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1257 = INT16_MAX;
	static uint16_t x1258 = 6U;
	uint8_t x1259 = 74U;
	int32_t x1260 = INT32_MIN;

	t24 = ((x1257<<x1258)<<(x1259==x1260));

	if (t24 != 2097088) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1301 = 21U;
	static volatile uint8_t x1302 = 1U;
	int8_t x1303 = -1;
	int32_t t25 = -1387;

	t25 = ((x1301<<x1302)<<(x1303==x1304));

	if (t25 != 42) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1385 = 36650424142400LLU;
	uint16_t x1386 = 49U;
	int32_t x1387 = INT32_MAX;
	volatile int32_t x1388 = INT32_MIN;
	static uint64_t t26 = 217768814602216516LLU;

	t26 = ((x1385<<x1386)<<(x1387==x1388));

	if (t26 != 1477180677777522688LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1445 = 6U;
	uint16_t x1448 = 915U;
	static volatile int32_t t27 = 61790;

	t27 = ((x1445<<x1446)<<(x1447==x1448));

	if (t27 != 12) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1669 = 58;
	uint8_t x1670 = 19U;
	uint32_t x1671 = UINT32_MAX;
	int64_t x1672 = INT64_MAX;
	static volatile int32_t t28 = -266;

	t28 = ((x1669<<x1670)<<(x1671==x1672));

	if (t28 != 30408704) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1681 = UINT64_MAX;
	int32_t x1683 = INT32_MIN;
	static volatile uint64_t t29 = 1687LLU;

	t29 = ((x1681<<x1682)<<(x1683==x1684));

	if (t29 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1702 = 18U;
	int32_t x1703 = -1;
	volatile int32_t x1704 = 930838;
	static int32_t t30 = 160;

	t30 = ((x1701<<x1702)<<(x1703==x1704));

	if (t30 != 262144) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1793 = 1989774;
	uint16_t x1794 = 2U;
	volatile int16_t x1795 = INT16_MIN;
	int32_t t31 = -34;

	t31 = ((x1793<<x1794)<<(x1795==x1796));

	if (t31 != 7959096) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1873 = 10U;
	int8_t x1874 = 3;
	volatile int16_t x1875 = -1;
	uint64_t x1876 = 2858819277611660169LLU;
	int32_t t32 = 565840;

	t32 = ((x1873<<x1874)<<(x1875==x1876));

	if (t32 != 80) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1901 = 47705573U;
	int8_t x1903 = INT8_MIN;
	static int64_t x1904 = INT64_MIN;
	uint32_t t33 = 3U;

	t33 = ((x1901<<x1902)<<(x1903==x1904));

	if (t33 != 2483027968U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1985 = 44242;
	uint64_t x1987 = 358LLU;
	uint16_t x1988 = 460U;
	int32_t t34 = -5;

	t34 = ((x1985<<x1986)<<(x1987==x1988));

	if (t34 != 176968) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2069 = 0U;
	static volatile uint8_t x2070 = 2U;
	uint64_t x2071 = 3949334722556482880LLU;
	int16_t x2072 = 1;
	volatile uint32_t t35 = 28212098U;

	t35 = ((x2069<<x2070)<<(x2071==x2072));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x2186 = 1;
	uint8_t x2187 = UINT8_MAX;
	static int32_t x2188 = INT32_MAX;

	t36 = ((x2185<<x2186)<<(x2187==x2188));

	if (t36 != 14) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2205 = 143826797LL;
	volatile uint16_t x2206 = 3U;
	volatile int64_t t37 = -1450402536857LL;

	t37 = ((x2205<<x2206)<<(x2207==x2208));

	if (t37 != 1150614376LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2277 = 16033;
	volatile uint8_t x2278 = 2U;
	static int8_t x2279 = INT8_MIN;
	int32_t t38 = 32371;

	t38 = ((x2277<<x2278)<<(x2279==x2280));

	if (t38 != 64132) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2305 = 39285831U;
	uint8_t x2306 = 25U;
	volatile uint8_t x2308 = 0U;
	volatile uint32_t t39 = 234379U;

	t39 = ((x2305<<x2306)<<(x2307==x2308));

	if (t39 != 2382364672U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2381 = UINT8_MAX;
	uint8_t x2382 = 1U;
	int8_t x2383 = INT8_MIN;
	uint16_t x2384 = 30925U;

	t40 = ((x2381<<x2382)<<(x2383==x2384));

	if (t40 != 510) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2433 = UINT8_MAX;
	uint8_t x2434 = 15U;
	uint32_t x2435 = UINT32_MAX;
	static int32_t t41 = 1;

	t41 = ((x2433<<x2434)<<(x2435==x2436));

	if (t41 != 16711680) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2509 = 855LLU;
	static uint8_t x2510 = 7U;
	int32_t x2511 = INT32_MIN;
	static uint64_t x2512 = 519LLU;
	static volatile uint64_t t42 = 1813618263LLU;

	t42 = ((x2509<<x2510)<<(x2511==x2512));

	if (t42 != 109440LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2537 = 3547;
	int8_t x2538 = 0;
	int32_t x2539 = INT32_MAX;
	static volatile uint16_t x2540 = UINT16_MAX;
	static int32_t t43 = -7349;

	t43 = ((x2537<<x2538)<<(x2539==x2540));

	if (t43 != 3547) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2641 = 165LLU;
	uint16_t x2642 = 0U;
	volatile uint32_t x2643 = 31U;
	int16_t x2644 = INT16_MIN;
	uint64_t t44 = 84920LLU;

	t44 = ((x2641<<x2642)<<(x2643==x2644));

	if (t44 != 165LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2686 = 1U;
	static int8_t x2687 = 1;
	volatile int32_t x2688 = 2;
	static int32_t t45 = 334;

	t45 = ((x2685<<x2686)<<(x2687==x2688));

	if (t45 != 90) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2693 = 3654;
	uint64_t x2694 = 0LLU;
	static int64_t x2695 = INT64_MIN;
	int32_t t46 = -1;

	t46 = ((x2693<<x2694)<<(x2695==x2696));

	if (t46 != 3654) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x2701 = UINT32_MAX;
	static int8_t x2702 = 23;
	int64_t x2703 = 14178040444412130LL;
	volatile uint32_t t47 = 7138574U;

	t47 = ((x2701<<x2702)<<(x2703==x2704));

	if (t47 != 4286578688U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2737 = UINT8_MAX;
	static uint8_t x2738 = 4U;
	int64_t x2739 = INT64_MAX;
	uint8_t x2740 = 0U;
	volatile int32_t t48 = -1067558;

	t48 = ((x2737<<x2738)<<(x2739==x2740));

	if (t48 != 4080) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2745 = UINT64_MAX;
	uint32_t x2748 = 10U;
	static uint64_t t49 = 16470408410LLU;

	t49 = ((x2745<<x2746)<<(x2747==x2748));

	if (t49 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2853 = 4565662146362153LLU;
	static uint32_t x2854 = 0U;
	uint64_t x2856 = 147215990423536516LLU;
	volatile uint64_t t50 = 2006811155532507817LLU;

	t50 = ((x2853<<x2854)<<(x2855==x2856));

	if (t50 != 4565662146362153LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2921 = INT8_MAX;
	uint8_t x2922 = 1U;
	uint64_t x2924 = 207996039183040LLU;
	volatile int32_t t51 = -23150;

	t51 = ((x2921<<x2922)<<(x2923==x2924));

	if (t51 != 254) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x3037 = 4420756668LLU;
	int8_t x3038 = 12;
	int64_t x3039 = INT64_MAX;
	uint64_t t52 = 39247492747LLU;

	t52 = ((x3037<<x3038)<<(x3039==x3040));

	if (t52 != 36214838624256LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3053 = 956U;
	uint8_t x3054 = 1U;
	uint8_t x3056 = 1U;
	volatile uint32_t t53 = 64214U;

	t53 = ((x3053<<x3054)<<(x3055==x3056));

	if (t53 != 1912U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x3097 = 1U;
	int64_t x3100 = -97307610704LL;
	volatile int32_t t54 = -654706741;

	t54 = ((x3097<<x3098)<<(x3099==x3100));

	if (t54 != 134217728) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x3105 = 17;
	uint8_t x3106 = 6U;
	volatile int64_t x3107 = INT64_MAX;
	int64_t x3108 = -1LL;

	t55 = ((x3105<<x3106)<<(x3107==x3108));

	if (t55 != 1088) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3225 = UINT64_MAX;
	uint8_t x3226 = 13U;
	static uint64_t x3228 = 128978176405459LLU;
	static volatile uint64_t t56 = 599429589794543LLU;

	t56 = ((x3225<<x3226)<<(x3227==x3228));

	if (t56 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3313 = 15774749376645LLU;
	int8_t x3314 = 7;
	int64_t x3315 = 2133LL;
	int8_t x3316 = -3;
	static volatile uint64_t t57 = 365809785869LLU;

	t57 = ((x3313<<x3314)<<(x3315==x3316));

	if (t57 != 2019167920210560LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3405 = UINT32_MAX;
	uint16_t x3406 = 1U;
	int32_t x3407 = -1;
	static volatile uint32_t t58 = 7U;

	t58 = ((x3405<<x3406)<<(x3407==x3408));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3437 = 17;
	uint64_t x3439 = UINT64_MAX;
	uint8_t x3440 = 68U;

	t59 = ((x3437<<x3438)<<(x3439==x3440));

	if (t59 != 8912896) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3505 = 683U;
	uint16_t x3506 = 0U;
	int32_t x3507 = INT32_MIN;
	static int64_t x3508 = -269372987164697432LL;
	volatile uint32_t t60 = 7U;

	t60 = ((x3505<<x3506)<<(x3507==x3508));

	if (t60 != 683U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3606 = 0;
	int8_t x3607 = -9;
	int32_t x3608 = INT32_MIN;

	t61 = ((x3605<<x3606)<<(x3607==x3608));

	if (t61 != 2180U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x3733 = 131221551;
	uint16_t x3735 = 16U;
	uint64_t x3736 = 499883LLU;
	int32_t t62 = -1;

	t62 = ((x3733<<x3734)<<(x3735==x3736));

	if (t62 != 131221551) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3845 = 133106923313634LLU;
	static int8_t x3846 = 6;
	volatile uint32_t x3848 = UINT32_MAX;
	uint64_t t63 = 25796965873426LLU;

	t63 = ((x3845<<x3846)<<(x3847==x3848));

	if (t63 != 8518843092072576LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3857 = 1;
	volatile int8_t x3858 = 3;
	int32_t t64 = -68235;

	t64 = ((x3857<<x3858)<<(x3859==x3860));

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x3899 = 61369204LL;
	static int32_t x3900 = INT32_MAX;
	volatile int32_t t65 = -22;

	t65 = ((x3897<<x3898)<<(x3899==x3900));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3937 = 6783658016473038188LLU;
	uint32_t x3940 = UINT32_MAX;
	static volatile uint64_t t66 = 4941LLU;

	t66 = ((x3937<<x3938)<<(x3939==x3940));

	if (t66 != 5245018576799848448LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x3973 = UINT16_MAX;
	uint8_t x3974 = 5U;
	volatile int8_t x3975 = 10;
	int32_t x3976 = -9092;
	int32_t t67 = 745548;

	t67 = ((x3973<<x3974)<<(x3975==x3976));

	if (t67 != 2097120) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3981 = UINT64_MAX;
	int16_t x3982 = 1;
	int32_t x3983 = INT32_MIN;
	static int32_t x3984 = INT32_MIN;
	uint64_t t68 = 70386822LLU;

	t68 = ((x3981<<x3982)<<(x3983==x3984));

	if (t68 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4005 = 0;
	uint8_t x4006 = 1U;
	int32_t x4007 = INT32_MIN;
	int32_t x4008 = -1;

	t69 = ((x4005<<x4006)<<(x4007==x4008));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4045 = 5;
	uint64_t x4046 = 1LLU;
	static volatile int32_t x4047 = INT32_MIN;
	static volatile uint16_t x4048 = UINT16_MAX;

	t70 = ((x4045<<x4046)<<(x4047==x4048));

	if (t70 != 10) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4078 = 8U;
	int8_t x4079 = 40;
	static volatile uint16_t x4080 = 458U;
	static uint64_t t71 = 4696862337292LLU;

	t71 = ((x4077<<x4078)<<(x4079==x4080));

	if (t71 != 8291808659203515648LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x4105 = UINT64_MAX;
	uint16_t x4106 = 2U;
	int16_t x4107 = 506;
	int8_t x4108 = 0;
	volatile uint64_t t72 = 286076528362530739LLU;

	t72 = ((x4105<<x4106)<<(x4107==x4108));

	if (t72 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4185 = UINT16_MAX;
	uint16_t x4186 = 0U;
	int32_t x4187 = INT32_MIN;
	int16_t x4188 = 5;
	int32_t t73 = -17154;

	t73 = ((x4185<<x4186)<<(x4187==x4188));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x4201 = 0U;
	uint16_t x4202 = 0U;
	volatile int8_t x4203 = -3;
	static int8_t x4204 = INT8_MIN;
	int32_t t74 = 431782797;

	t74 = ((x4201<<x4202)<<(x4203==x4204));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4221 = 0;
	uint16_t x4222 = 2U;
	int8_t x4223 = INT8_MAX;

	t75 = ((x4221<<x4222)<<(x4223==x4224));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4282 = 11;
	static uint64_t x4283 = UINT64_MAX;
	static volatile int8_t x4284 = INT8_MAX;
	static uint64_t t76 = 4045818331535LLU;

	t76 = ((x4281<<x4282)<<(x4283==x4284));

	if (t76 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4297 = 15;
	volatile int8_t x4298 = 13;
	int16_t x4299 = INT16_MIN;
	int32_t x4300 = 913426352;

	t77 = ((x4297<<x4298)<<(x4299==x4300));

	if (t77 != 122880) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x4389 = 31LLU;
	volatile int8_t x4390 = 20;
	volatile int8_t x4391 = 0;
	static int16_t x4392 = 5;

	t78 = ((x4389<<x4390)<<(x4391==x4392));

	if (t78 != 32505856LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4401 = 67;
	static int8_t x4402 = 0;
	int32_t x4403 = INT32_MIN;
	volatile int8_t x4404 = INT8_MIN;
	volatile int32_t t79 = -114255;

	t79 = ((x4401<<x4402)<<(x4403==x4404));

	if (t79 != 67) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4465 = 3;
	uint64_t x4467 = 1220803686749948LLU;
	int64_t x4468 = -17383065379LL;
	static volatile int32_t t80 = 155375365;

	t80 = ((x4465<<x4466)<<(x4467==x4468));

	if (t80 != 6) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4481 = 65648986U;
	int8_t x4482 = 4;
	int16_t x4483 = 13330;
	uint32_t t81 = 24U;

	t81 = ((x4481<<x4482)<<(x4483==x4484));

	if (t81 != 1050383776U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x4517 = 35U;
	uint16_t x4518 = 0U;
	static volatile uint64_t x4519 = UINT64_MAX;

	t82 = ((x4517<<x4518)<<(x4519==x4520));

	if (t82 != 35) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x4561 = UINT8_MAX;
	uint16_t x4562 = 13U;
	uint8_t x4563 = UINT8_MAX;
	int32_t x4564 = INT32_MAX;
	int32_t t83 = -5;

	t83 = ((x4561<<x4562)<<(x4563==x4564));

	if (t83 != 2088960) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4585 = 852LL;
	static int8_t x4586 = 8;
	int32_t x4587 = INT32_MAX;
	int32_t x4588 = INT32_MIN;
	volatile int64_t t84 = 1982234148402LL;

	t84 = ((x4585<<x4586)<<(x4587==x4588));

	if (t84 != 218112LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4789 = UINT32_MAX;
	uint8_t x4790 = 5U;
	volatile uint8_t x4791 = 57U;
	uint32_t x4792 = UINT32_MAX;

	t85 = ((x4789<<x4790)<<(x4791==x4792));

	if (t85 != 4294967264U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4837 = 1U;
	volatile uint8_t x4838 = 2U;
	int32_t x4839 = INT32_MAX;
	volatile int32_t x4840 = -3196808;
	int32_t t86 = -14;

	t86 = ((x4837<<x4838)<<(x4839==x4840));

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x4849 = 1;
	int16_t x4850 = 17;
	static volatile int32_t x4851 = INT32_MIN;
	uint32_t x4852 = UINT32_MAX;
	volatile int32_t t87 = 33;

	t87 = ((x4849<<x4850)<<(x4851==x4852));

	if (t87 != 131072) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x4933 = 29928U;
	int8_t x4934 = 0;
	int32_t x4935 = INT32_MAX;
	volatile uint16_t x4936 = UINT16_MAX;
	volatile uint32_t t88 = 135326675U;

	t88 = ((x4933<<x4934)<<(x4935==x4936));

	if (t88 != 29928U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x4957 = 17546U;
	volatile uint16_t x4958 = 4U;
	int64_t x4959 = 5LL;
	uint64_t x4960 = 3025158903334994851LLU;

	t89 = ((x4957<<x4958)<<(x4959==x4960));

	if (t89 != 280736U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4993 = 1U;
	int64_t x4996 = -1LL;
	volatile int32_t t90 = -313097;

	t90 = ((x4993<<x4994)<<(x4995==x4996));

	if (t90 != 16) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5031 = 4901354152LLU;
	volatile int32_t x5032 = -1;
	int32_t t91 = 734;

	t91 = ((x5029<<x5030)<<(x5031==x5032));

	if (t91 != 17835) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5041 = 2340160LLU;
	uint8_t x5042 = 16U;
	int64_t x5044 = INT64_MIN;

	t92 = ((x5041<<x5042)<<(x5043==x5044));

	if (t92 != 153364725760LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5045 = 455171150465838LLU;
	static int8_t x5046 = 1;
	int16_t x5047 = 21;
	static int32_t x5048 = INT32_MAX;
	volatile uint64_t t93 = 89956644LLU;

	t93 = ((x5045<<x5046)<<(x5047==x5048));

	if (t93 != 910342300931676LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5109 = 4285U;
	int32_t x5110 = 6;
	static uint64_t x5112 = UINT64_MAX;
	volatile uint32_t t94 = 52578132U;

	t94 = ((x5109<<x5110)<<(x5111==x5112));

	if (t94 != 274240U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5186 = 0;
	int32_t x5187 = 24252949;
	int64_t x5188 = -1LL;
	volatile int64_t t95 = -45LL;

	t95 = ((x5185<<x5186)<<(x5187==x5188));

	if (t95 != 354769123LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5201 = 1U;
	int8_t x5202 = 1;
	int32_t x5203 = INT32_MIN;
	uint16_t x5204 = 35U;

	t96 = ((x5201<<x5202)<<(x5203==x5204));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5230 = 0U;
	volatile int8_t x5232 = INT8_MAX;
	int32_t t97 = 223355309;

	t97 = ((x5229<<x5230)<<(x5231==x5232));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5262 = 0U;
	int64_t x5263 = INT64_MIN;
	int16_t x5264 = 0;
	int32_t t98 = 5;

	t98 = ((x5261<<x5262)<<(x5263==x5264));

	if (t98 != 133) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x5321 = 42303411168LLU;
	static int64_t x5324 = INT64_MIN;

	t99 = ((x5321<<x5322)<<(x5323==x5324));

	if (t99 != 5544792708612096LLU) { NG(); } else { ; }
	
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

