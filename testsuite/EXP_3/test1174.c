#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x82 = INT8_MIN;
uint32_t x83 = UINT32_MAX;
volatile uint64_t x191 = 4123LLU;
uint8_t x197 = 12U;
static volatile uint64_t x201 = 416LLU;
uint16_t x204 = 1U;
volatile uint32_t x409 = 45U;
static uint32_t t5 = 53989U;
uint64_t t6 = 57124001393045LLU;
int64_t x625 = INT64_MIN;
uint32_t x627 = 54982U;
uint8_t x782 = 96U;
uint32_t x783 = 96812U;
static uint8_t x784 = 5U;
volatile uint32_t t8 = 29275U;
volatile int64_t x850 = -1LL;
uint8_t x852 = 3U;
static int8_t x924 = 0;
int8_t x1064 = 0;
int64_t x1135 = INT64_MAX;
static uint32_t x1136 = 2U;
int16_t x1143 = INT16_MAX;
int64_t t18 = -34369250942482073LL;
uint64_t x1174 = 56850LLU;
int16_t x1178 = -1;
uint8_t x1179 = 115U;
int64_t x1213 = -598LL;
volatile int32_t t23 = -44419;
uint16_t x1407 = UINT16_MAX;
uint8_t x1646 = 62U;
static volatile int16_t x1803 = 1464;
uint8_t x1904 = 3U;
static volatile int32_t t28 = 213131;
volatile int32_t x1906 = -1;
static int32_t x1908 = 2;
uint8_t x2240 = 2U;
int32_t x2368 = 0;
uint64_t t36 = 1566758LLU;
int32_t x2401 = INT32_MAX;
volatile int64_t x2457 = INT64_MAX;
volatile uint32_t x2742 = 0U;
volatile uint32_t t43 = 480U;
volatile int32_t t45 = -13810;
int32_t x2919 = INT32_MAX;
uint16_t x3000 = 62U;
static int64_t x3097 = -27LL;
int32_t x3098 = -261297716;
volatile uint8_t x3283 = 127U;
volatile int32_t x3284 = 1;
volatile uint32_t x3399 = 886517127U;
uint16_t x3472 = 6U;
volatile uint32_t t57 = 11U;
int64_t x3698 = INT64_MIN;
uint64_t x3837 = 5133596308893323LLU;
int64_t x3880 = 0LL;
uint8_t x3923 = UINT8_MAX;
int16_t x3994 = INT16_MIN;
int8_t x4081 = -29;
static uint8_t x4086 = UINT8_MAX;
uint32_t x4087 = 867686404U;
uint64_t x4146 = 8907221LLU;
static volatile int16_t x4369 = -1;
uint16_t x4371 = UINT16_MAX;
volatile uint16_t x4529 = 1U;
volatile int16_t x4530 = INT16_MAX;
int32_t t75 = -3466;
static volatile uint64_t x4571 = 28521953386023186LLU;
static uint8_t x4572 = 45U;
static uint64_t t76 = 707072807470LLU;
uint8_t x4672 = 2U;
volatile uint32_t t79 = 51U;
uint16_t x4824 = 10U;
volatile uint64_t t80 = 2630389072LLU;
static int64_t x5001 = INT64_MIN;
volatile int32_t x5003 = 1990517;
static volatile int16_t x5041 = -34;
int8_t x5096 = 0;
uint32_t t84 = 55U;
int16_t x5218 = -1;
static volatile uint16_t x5459 = 259U;
volatile uint8_t x5460 = 1U;
static int8_t x5596 = 0;
static volatile uint16_t x5633 = 117U;
uint8_t x5740 = 29U;
int32_t x5753 = INT32_MIN;
uint8_t x5863 = UINT8_MAX;
static int64_t x5914 = INT64_MIN;
int8_t x5937 = INT8_MAX;
int8_t x5939 = INT8_MAX;
uint16_t x5940 = 5U;


void f0(void) {
	int32_t x81 = INT32_MIN;
	volatile int8_t x84 = 2;
	uint32_t t0 = 98485882U;

	t0 = ((x81^x82)/(x83>>x84));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x189 = 1370U;
	uint8_t x190 = 31U;
	int8_t x192 = 2;
	volatile uint64_t t1 = 9872LLU;

	t1 = ((x189^x190)/(x191>>x192));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x198 = 25898498;
	uint64_t x199 = 724LLU;
	static int16_t x200 = 0;
	uint64_t t2 = 433711088605LLU;

	t2 = ((x197^x198)/(x199>>x200));

	if (t2 != 35771LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x202 = 292956U;
	volatile int8_t x203 = INT8_MAX;
	static uint64_t t3 = 363LLU;

	t3 = ((x201^x202)/(x203>>x204));

	if (t3 != 4656LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x410 = INT64_MAX;
	volatile int32_t x411 = INT32_MAX;
	volatile int8_t x412 = 22;
	int64_t t4 = -3671023532033342635LL;

	t4 = ((x409^x410)/(x411>>x412));

	if (t4 != 18049651735527936LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x521 = 2U;
	volatile int16_t x522 = 1;
	static volatile int32_t x523 = INT32_MAX;
	uint16_t x524 = 0U;

	t5 = ((x521^x522)/(x523>>x524));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x605 = INT16_MIN;
	static uint64_t x606 = 1836519282590LLU;
	static int32_t x607 = INT32_MAX;
	volatile int64_t x608 = 13LL;

	t6 = ((x605^x606)/(x607>>x608));

	if (t6 != 70369005608352LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x626 = UINT8_MAX;
	static int8_t x628 = 1;
	volatile int64_t t7 = 40292LL;

	t7 = ((x625^x626)/(x627>>x628));

	if (t7 != -335505148479676LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x781 = -1;

	t8 = ((x781^x782)/(x783>>x784));

	if (t8 != 1419823U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x849 = 1059475724254119169LL;
	static uint64_t x851 = UINT64_MAX;
	uint64_t t9 = 27560183LLU;

	t9 = ((x849^x850)/(x851>>x852));

	if (t9 != 7LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x881 = INT32_MIN;
	static int32_t x882 = INT32_MIN;
	int64_t x883 = INT64_MAX;
	int16_t x884 = 0;
	volatile int64_t t10 = 62LL;

	t10 = ((x881^x882)/(x883>>x884));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x921 = -1;
	int8_t x922 = INT8_MIN;
	volatile int64_t x923 = INT64_MAX;
	int64_t t11 = 15LL;

	t11 = ((x921^x922)/(x923>>x924));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x929 = INT8_MAX;
	int16_t x930 = -29;
	uint64_t x931 = 5559193721590LLU;
	uint64_t x932 = 1LLU;
	volatile uint64_t t12 = 52335LLU;

	t12 = ((x929^x930)/(x931>>x932));

	if (t12 != 6636481LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1045 = 2;
	uint32_t x1046 = UINT32_MAX;
	int64_t x1047 = INT64_MAX;
	volatile uint16_t x1048 = 7U;
	volatile int64_t t13 = 69833931996253767LL;

	t13 = ((x1045^x1046)/(x1047>>x1048));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x1061 = 310;
	int32_t x1062 = -1;
	int16_t x1063 = INT16_MAX;
	volatile int32_t t14 = -39291309;

	t14 = ((x1061^x1062)/(x1063>>x1064));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1109 = 16129U;
	volatile int64_t x1110 = INT64_MAX;
	uint32_t x1111 = 2270U;
	uint8_t x1112 = 2U;
	volatile int64_t t15 = 5844970057688LL;

	t15 = ((x1109^x1110)/(x1111>>x1112));

	if (t15 != 16266970082636260LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1121 = -1;
	int64_t x1122 = INT64_MIN;
	int16_t x1123 = INT16_MAX;
	int8_t x1124 = 0;
	static int64_t t16 = -458794632813592988LL;

	t16 = ((x1121^x1122)/(x1123>>x1124));

	if (t16 != 281483566907400LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1133 = 6613019LLU;
	int8_t x1134 = -1;
	uint64_t t17 = 282394039742581401LLU;

	t17 = ((x1133^x1134)/(x1135>>x1136));

	if (t17 != 7LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1141 = INT32_MAX;
	int64_t x1142 = -133385327335991382LL;
	uint16_t x1144 = 12U;

	t18 = ((x1141^x1142)/(x1143>>x1144));

	if (t18 != -19055046924731233LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1173 = 5U;
	uint32_t x1175 = 8U;
	static uint8_t x1176 = 1U;
	volatile uint64_t t19 = 8355588959382089LLU;

	t19 = ((x1173^x1174)/(x1175>>x1176));

	if (t19 != 14213LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1177 = 25525U;
	static uint8_t x1180 = 4U;
	uint32_t t20 = 1U;

	t20 = ((x1177^x1178)/(x1179>>x1180));

	if (t20 != 613563110U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1205 = INT16_MIN;
	int8_t x1206 = INT8_MAX;
	static volatile uint32_t x1207 = UINT32_MAX;
	int8_t x1208 = 0;
	uint32_t t21 = 367429037U;

	t21 = ((x1205^x1206)/(x1207>>x1208));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1214 = 0;
	uint32_t x1215 = UINT32_MAX;
	int32_t x1216 = 0;
	volatile int64_t t22 = -37136175206LL;

	t22 = ((x1213^x1214)/(x1215>>x1216));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1301 = UINT8_MAX;
	int16_t x1302 = INT16_MIN;
	static uint8_t x1303 = 50U;
	volatile uint64_t x1304 = 1LLU;

	t23 = ((x1301^x1302)/(x1303>>x1304));

	if (t23 != -1300) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1405 = UINT32_MAX;
	static int8_t x1406 = -57;
	uint8_t x1408 = 2U;
	volatile uint32_t t24 = 61U;

	t24 = ((x1405^x1406)/(x1407>>x1408));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1645 = UINT32_MAX;
	int8_t x1647 = INT8_MAX;
	uint8_t x1648 = 0U;
	volatile uint32_t t25 = 133U;

	t25 = ((x1645^x1646)/(x1647>>x1648));

	if (t25 != 33818639U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1685 = UINT64_MAX;
	int64_t x1686 = INT64_MIN;
	uint32_t x1687 = 1455788U;
	int8_t x1688 = 7;
	uint64_t t26 = 38207775751159LLU;

	t26 = ((x1685^x1686)/(x1687>>x1688));

	if (t26 != 810988484731801LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1801 = INT32_MIN;
	volatile int8_t x1802 = -1;
	uint16_t x1804 = 1U;
	int32_t t27 = -202;

	t27 = ((x1801^x1802)/(x1803>>x1804));

	if (t27 != 2933720) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1901 = 19825U;
	volatile int8_t x1902 = -1;
	int32_t x1903 = INT32_MAX;

	t28 = ((x1901^x1902)/(x1903>>x1904));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1905 = -1;
	int16_t x1907 = 56;
	int32_t t29 = 96667;

	t29 = ((x1905^x1906)/(x1907>>x1908));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1917 = -1734;
	int32_t x1918 = INT32_MAX;
	uint16_t x1919 = 235U;
	static uint8_t x1920 = 2U;
	int32_t t30 = -661;

	t30 = ((x1917^x1918)/(x1919>>x1920));

	if (t30 != -37025550) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2061 = INT16_MIN;
	int64_t x2062 = -9927LL;
	volatile uint32_t x2063 = 186641813U;
	static volatile uint8_t x2064 = 1U;
	int64_t t31 = 545027135811479479LL;

	t31 = ((x2061^x2062)/(x2063>>x2064));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x2229 = INT64_MIN;
	int16_t x2230 = -1;
	int32_t x2231 = INT32_MAX;
	uint8_t x2232 = 20U;
	int64_t t32 = 28LL;

	t32 = ((x2229^x2230)/(x2231>>x2232));

	if (t32 != 4505799724892416LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2237 = 23766;
	uint64_t x2238 = 11989474277726LLU;
	static int16_t x2239 = INT16_MAX;
	uint64_t t33 = 4LLU;

	t33 = ((x2237^x2238)/(x2239>>x2240));

	if (t33 != 1463737548LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2349 = INT8_MAX;
	int16_t x2350 = INT16_MIN;
	static int32_t x2351 = 189;
	uint8_t x2352 = 1U;
	volatile int32_t t34 = 15776453;

	t34 = ((x2349^x2350)/(x2351>>x2352));

	if (t34 != -347) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2365 = 1U;
	volatile int8_t x2366 = 12;
	uint64_t x2367 = UINT64_MAX;
	static volatile uint64_t t35 = 6604LLU;

	t35 = ((x2365^x2366)/(x2367>>x2368));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x2389 = -13;
	uint16_t x2390 = UINT16_MAX;
	static uint64_t x2391 = UINT64_MAX;
	volatile int8_t x2392 = 3;

	t36 = ((x2389^x2390)/(x2391>>x2392));

	if (t36 != 7LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2402 = INT8_MIN;
	volatile uint8_t x2403 = UINT8_MAX;
	static volatile int8_t x2404 = 6;
	int32_t t37 = 7362;

	t37 = ((x2401^x2402)/(x2403>>x2404));

	if (t37 != -715827840) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2458 = 230401932984854240LLU;
	int8_t x2459 = 25;
	static volatile uint8_t x2460 = 3U;
	static uint64_t t38 = 12430897453880LLU;

	t38 = ((x2457^x2458)/(x2459>>x2460));

	if (t38 != 2997656701289973855LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2509 = -1LL;
	int32_t x2510 = -1;
	uint8_t x2511 = UINT8_MAX;
	static uint16_t x2512 = 6U;
	static int64_t t39 = 25758283457LL;

	t39 = ((x2509^x2510)/(x2511>>x2512));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2525 = INT8_MAX;
	uint32_t x2526 = 241824U;
	volatile uint32_t x2527 = UINT32_MAX;
	uint64_t x2528 = 24LLU;
	volatile uint32_t t40 = 2091303641U;

	t40 = ((x2525^x2526)/(x2527>>x2528));

	if (t40 != 948U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2685 = 1;
	int16_t x2686 = -8340;
	uint64_t x2687 = 16440272043LLU;
	static int32_t x2688 = 1;
	volatile uint64_t t41 = 248LLU;

	t41 = ((x2685^x2686)/(x2687>>x2688));

	if (t41 != 2244092315LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2717 = INT8_MAX;
	volatile int64_t x2718 = 2086978063011420704LL;
	int64_t x2719 = INT64_MAX;
	static volatile uint32_t x2720 = 1U;
	int64_t t42 = 469867045755529002LL;

	t42 = ((x2717^x2718)/(x2719>>x2720));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2741 = -1;
	volatile uint32_t x2743 = UINT32_MAX;
	static volatile uint32_t x2744 = 7U;

	t43 = ((x2741^x2742)/(x2743>>x2744));

	if (t43 != 128U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2773 = INT16_MIN;
	int16_t x2774 = INT16_MIN;
	int16_t x2775 = 4900;
	uint8_t x2776 = 6U;
	static volatile int32_t t44 = 1;

	t44 = ((x2773^x2774)/(x2775>>x2776));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2825 = UINT8_MAX;
	int32_t x2826 = INT32_MAX;
	int8_t x2827 = INT8_MAX;
	uint16_t x2828 = 0U;

	t45 = ((x2825^x2826)/(x2827>>x2828));

	if (t45 != 16909318) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2917 = -1;
	int8_t x2918 = -1;
	int16_t x2920 = 4;
	int32_t t46 = -533629644;

	t46 = ((x2917^x2918)/(x2919>>x2920));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2997 = -1;
	volatile uint8_t x2998 = 23U;
	volatile uint64_t x2999 = UINT64_MAX;
	uint64_t t47 = 21235402LLU;

	t47 = ((x2997^x2998)/(x2999>>x3000));

	if (t47 != 6148914691236517197LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3099 = UINT32_MAX;
	uint16_t x3100 = 30U;
	volatile int64_t t48 = -945601711781788LL;

	t48 = ((x3097^x3098)/(x3099>>x3100));

	if (t48 != 87099235LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3109 = UINT8_MAX;
	int64_t x3110 = -1LL;
	uint64_t x3111 = UINT64_MAX;
	uint8_t x3112 = 2U;
	uint64_t t49 = 8596813825845485LLU;

	t49 = ((x3109^x3110)/(x3111>>x3112));

	if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3193 = -1;
	int8_t x3194 = -1;
	uint32_t x3195 = 24877U;
	int32_t x3196 = 0;
	volatile uint32_t t50 = 1618337256U;

	t50 = ((x3193^x3194)/(x3195>>x3196));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3197 = 3LLU;
	int16_t x3198 = 0;
	uint64_t x3199 = 2212750078074353LLU;
	static uint32_t x3200 = 4U;
	volatile uint64_t t51 = 509959837515601839LLU;

	t51 = ((x3197^x3198)/(x3199>>x3200));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3229 = -404;
	static uint32_t x3230 = 47659294U;
	int64_t x3231 = 1489264292LL;
	uint32_t x3232 = 1U;
	int64_t t52 = 17088568991LL;

	t52 = ((x3229^x3230)/(x3231>>x3232));

	if (t52 != 5LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x3281 = 16U;
	uint32_t x3282 = UINT32_MAX;
	volatile uint32_t t53 = 3356U;

	t53 = ((x3281^x3282)/(x3283>>x3284));

	if (t53 != 68174083U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3305 = INT16_MAX;
	static int16_t x3306 = INT16_MIN;
	static volatile uint16_t x3307 = 43U;
	uint8_t x3308 = 0U;
	volatile int32_t t54 = -44;

	t54 = ((x3305^x3306)/(x3307>>x3308));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3397 = UINT64_MAX;
	volatile int8_t x3398 = -3;
	uint16_t x3400 = 3U;
	volatile uint64_t t55 = 13857124LLU;

	t55 = ((x3397^x3398)/(x3399>>x3400));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3469 = 15247LL;
	int32_t x3470 = INT32_MAX;
	uint16_t x3471 = UINT16_MAX;
	static int64_t t56 = 4738030656758LL;

	t56 = ((x3469^x3470)/(x3471>>x3472));

	if (t56 != 2099187LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x3577 = -54;
	uint8_t x3578 = UINT8_MAX;
	uint32_t x3579 = UINT32_MAX;
	int64_t x3580 = 27LL;

	t57 = ((x3577^x3578)/(x3579>>x3580));

	if (t57 != 138547325U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3681 = UINT64_MAX;
	uint8_t x3682 = 117U;
	static volatile uint32_t x3683 = 4U;
	volatile int8_t x3684 = 1;
	volatile uint64_t t58 = 1497LLU;

	t58 = ((x3681^x3682)/(x3683>>x3684));

	if (t58 != 9223372036854775749LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x3697 = 2;
	volatile int32_t x3699 = 8147535;
	int8_t x3700 = 0;
	volatile int64_t t59 = 28951170564430316LL;

	t59 = ((x3697^x3698)/(x3699>>x3700));

	if (t59 != -1132044481779LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3761 = 35LL;
	int64_t x3762 = 15788936879740389LL;
	static volatile int64_t x3763 = INT64_MAX;
	int16_t x3764 = 0;
	static volatile int64_t t60 = -3633578412LL;

	t60 = ((x3761^x3762)/(x3763>>x3764));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3838 = INT16_MAX;
	static uint8_t x3839 = UINT8_MAX;
	int16_t x3840 = 0;
	volatile uint64_t t61 = 74358419332LLU;

	t61 = ((x3837^x3838)/(x3839>>x3840));

	if (t61 != 20131750230860LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3853 = 241LLU;
	uint64_t x3854 = 6614LLU;
	uint32_t x3855 = 6941822U;
	static uint32_t x3856 = 1U;
	static uint64_t t62 = 23509LLU;

	t62 = ((x3853^x3854)/(x3855>>x3856));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x3877 = INT64_MIN;
	uint32_t x3878 = 29U;
	int32_t x3879 = INT32_MAX;
	volatile int64_t t63 = -2944677007145410LL;

	t63 = ((x3877^x3878)/(x3879>>x3880));

	if (t63 != -4294967297LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3881 = INT16_MIN;
	static int64_t x3882 = -16158982LL;
	volatile uint32_t x3883 = UINT32_MAX;
	uint16_t x3884 = 4U;
	int64_t t64 = 136809351837LL;

	t64 = ((x3881^x3882)/(x3883>>x3884));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3921 = UINT64_MAX;
	uint16_t x3922 = UINT16_MAX;
	volatile uint8_t x3924 = 6U;
	uint64_t t65 = 7658450523334227955LLU;

	t65 = ((x3921^x3922)/(x3923>>x3924));

	if (t65 != 6148914691236495360LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3937 = 129LLU;
	uint16_t x3938 = 1U;
	static uint16_t x3939 = 22475U;
	volatile int8_t x3940 = 3;
	uint64_t t66 = 3997LLU;

	t66 = ((x3937^x3938)/(x3939>>x3940));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3993 = UINT8_MAX;
	uint16_t x3995 = 11215U;
	int16_t x3996 = 3;
	int32_t t67 = -3063623;

	t67 = ((x3993^x3994)/(x3995>>x3996));

	if (t67 != -23) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4082 = 3915LLU;
	int64_t x4083 = INT64_MAX;
	volatile int8_t x4084 = 1;
	volatile uint64_t t68 = 7433160328327846LLU;

	t68 = ((x4081^x4082)/(x4083>>x4084));

	if (t68 != 3LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4085 = -2;
	int8_t x4088 = 15;
	uint32_t t69 = 6U;

	t69 = ((x4085^x4086)/(x4087>>x4088));

	if (t69 != 162202U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4145 = 20U;
	uint32_t x4147 = UINT32_MAX;
	static uint32_t x4148 = 0U;
	uint64_t t70 = 884LLU;

	t70 = ((x4145^x4146)/(x4147>>x4148));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4329 = 12;
	int8_t x4330 = 0;
	uint64_t x4331 = UINT64_MAX;
	uint64_t x4332 = 5LLU;
	volatile uint64_t t71 = 341LLU;

	t71 = ((x4329^x4330)/(x4331>>x4332));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4337 = -15;
	static int32_t x4338 = -1;
	int8_t x4339 = INT8_MAX;
	static uint8_t x4340 = 2U;
	int32_t t72 = -1;

	t72 = ((x4337^x4338)/(x4339>>x4340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x4370 = INT32_MIN;
	uint8_t x4372 = 1U;
	int32_t t73 = 2;

	t73 = ((x4369^x4370)/(x4371>>x4372));

	if (t73 != 65538) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4385 = -172598428288LL;
	int64_t x4386 = INT64_MIN;
	uint16_t x4387 = UINT16_MAX;
	static uint16_t x4388 = 1U;
	volatile int64_t t74 = 3305079634446LL;

	t74 = ((x4385^x4386)/(x4387>>x4388));

	if (t74 != 281483561639953LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4531 = 18;
	static uint16_t x4532 = 1U;

	t75 = ((x4529^x4530)/(x4531>>x4532));

	if (t75 != 3640) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4569 = 2794890LLU;
	static volatile uint32_t x4570 = UINT32_MAX;

	t76 = ((x4569^x4570)/(x4571>>x4572));

	if (t76 != 5298978LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x4573 = 29U;
	volatile int16_t x4574 = 4;
	static uint8_t x4575 = 19U;
	volatile int8_t x4576 = 1;
	int32_t t77 = 57426;

	t77 = ((x4573^x4574)/(x4575>>x4576));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4609 = INT32_MAX;
	volatile uint16_t x4610 = 1083U;
	volatile uint32_t x4611 = 206568543U;
	uint8_t x4612 = 20U;
	volatile uint32_t t78 = 105865654U;

	t78 = ((x4609^x4610)/(x4611>>x4612));

	if (t78 != 10956543U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4669 = UINT32_MAX;
	int16_t x4670 = INT16_MIN;
	int8_t x4671 = INT8_MAX;

	t79 = ((x4669^x4670)/(x4671>>x4672));

	if (t79 != 1057U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4821 = UINT64_MAX;
	int32_t x4822 = INT32_MAX;
	uint64_t x4823 = 249547331225964LLU;

	t80 = ((x4821^x4822)/(x4823>>x4824));

	if (t80 != 75694922LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4841 = INT8_MIN;
	int32_t x4842 = 963851084;
	static int8_t x4843 = INT8_MAX;
	uint8_t x4844 = 3U;
	volatile int32_t t81 = 293377;

	t81 = ((x4841^x4842)/(x4843>>x4844));

	if (t81 != -64256737) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x5002 = INT16_MAX;
	static uint16_t x5004 = 1U;
	volatile int64_t t82 = 1LL;

	t82 = ((x5001^x5002)/(x5003>>x5004));

	if (t82 != -9267317657185LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5042 = -1;
	int8_t x5043 = INT8_MAX;
	uint8_t x5044 = 1U;
	volatile int32_t t83 = 118;

	t83 = ((x5041^x5042)/(x5043>>x5044));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5093 = INT16_MIN;
	int32_t x5094 = 0;
	uint32_t x5095 = UINT32_MAX;

	t84 = ((x5093^x5094)/(x5095>>x5096));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x5217 = INT64_MIN;
	static uint16_t x5219 = 32564U;
	static int8_t x5220 = 1;
	volatile int64_t t85 = 22484226402668307LL;

	t85 = ((x5217^x5218)/(x5219>>x5220));

	if (t85 != 566476602189827LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5449 = -1LL;
	int16_t x5450 = -137;
	uint16_t x5451 = 1480U;
	volatile int8_t x5452 = 1;
	int64_t t86 = 119LL;

	t86 = ((x5449^x5450)/(x5451>>x5452));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5457 = INT32_MAX;
	static uint64_t x5458 = UINT64_MAX;
	volatile uint64_t t87 = 1634636820887270LLU;

	t87 = ((x5457^x5458)/(x5459>>x5460));

	if (t87 != 142998016058620681LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5553 = UINT16_MAX;
	int64_t x5554 = -1LL;
	int64_t x5555 = INT64_MAX;
	uint16_t x5556 = 24U;
	static int64_t t88 = -136488898LL;

	t88 = ((x5553^x5554)/(x5555>>x5556));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5593 = INT32_MIN;
	int64_t x5594 = INT64_MIN;
	static int64_t x5595 = 10LL;
	volatile int64_t t89 = -854525505117472856LL;

	t89 = ((x5593^x5594)/(x5595>>x5596));

	if (t89 != 922337203470729216LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5601 = 2422975187967394LLU;
	int32_t x5602 = INT32_MAX;
	static volatile int32_t x5603 = 16421172;
	volatile uint8_t x5604 = 0U;
	uint64_t t90 = 3LLU;

	t90 = ((x5601^x5602)/(x5603>>x5604));

	if (t90 != 147551839LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5634 = -3918382231291630527LL;
	volatile uint64_t x5635 = 306924LLU;
	volatile int8_t x5636 = 10;
	uint64_t t91 = 71351481614697215LLU;

	t91 = ((x5633^x5634)/(x5635>>x5636));

	if (t91 != 48589838937852578LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5677 = 13U;
	uint16_t x5678 = 204U;
	uint64_t x5679 = 253587LLU;
	volatile uint16_t x5680 = 2U;
	static volatile uint64_t t92 = 409864587048LLU;

	t92 = ((x5677^x5678)/(x5679>>x5680));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5737 = INT8_MIN;
	int32_t x5738 = -1;
	uint32_t x5739 = 1974930075U;
	uint32_t t93 = 33U;

	t93 = ((x5737^x5738)/(x5739>>x5740));

	if (t93 != 42U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x5754 = 4037U;
	uint16_t x5755 = 1808U;
	uint32_t x5756 = 7U;
	volatile int32_t t94 = 0;

	t94 = ((x5753^x5754)/(x5755>>x5756));

	if (t94 != -153391400) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5861 = INT64_MAX;
	int16_t x5862 = -1;
	int8_t x5864 = 7;
	int64_t t95 = INT64_MIN;

	t95 = ((x5861^x5862)/(x5863>>x5864));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x5909 = 363808U;
	static int32_t x5910 = -1;
	int32_t x5911 = 811;
	uint8_t x5912 = 8U;
	static uint32_t t96 = 752U;

	t96 = ((x5909^x5910)/(x5911>>x5912));

	if (t96 != 1431534495U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5913 = -1;
	uint32_t x5915 = 26U;
	static uint32_t x5916 = 2U;
	volatile int64_t t97 = -1LL;

	t97 = ((x5913^x5914)/(x5915>>x5916));

	if (t97 != 1537228672809129301LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5938 = -1;
	int32_t t98 = 191303;

	t98 = ((x5937^x5938)/(x5939>>x5940));

	if (t98 != -42) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5981 = 191LL;
	uint16_t x5982 = UINT16_MAX;
	volatile uint32_t x5983 = 3188U;
	volatile uint8_t x5984 = 7U;
	int64_t t99 = 0LL;

	t99 = ((x5981^x5982)/(x5983>>x5984));

	if (t99 != 2722LL) { NG(); } else { ; }
	
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

