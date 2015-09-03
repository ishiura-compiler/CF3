#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x32 = UINT32_MAX;
volatile uint64_t t2 = 177906352749232780LLU;
uint16_t x55 = 29U;
uint32_t x101 = UINT32_MAX;
volatile uint16_t x104 = UINT16_MAX;
volatile int16_t x174 = 129;
static int32_t x218 = INT32_MIN;
int8_t x222 = INT8_MIN;
volatile uint8_t x244 = UINT8_MAX;
uint16_t x286 = 439U;
uint8_t x287 = 7U;
int32_t t12 = -811770;
int16_t x375 = 0;
int64_t x389 = 2056LL;
int64_t x429 = INT64_MIN;
int64_t t15 = 1LL;
int32_t t17 = 469;
uint64_t x557 = 4634LLU;
volatile int32_t x647 = 8;
uint32_t x705 = UINT32_MAX;
uint32_t x749 = UINT32_MAX;
int32_t x750 = INT32_MIN;
uint32_t x905 = 15021U;
volatile uint64_t t28 = 931516018150442633LLU;
static int64_t x1397 = -41151588626982LL;
uint8_t x1623 = 1U;
int64_t t36 = 81979LL;
volatile uint64_t t39 = 539672099414270303LLU;
volatile uint8_t x1851 = 0U;
uint64_t x1892 = UINT64_MAX;
int16_t x1940 = 15298;
volatile int64_t x1997 = -1LL;
volatile uint8_t x1998 = 3U;
int64_t t44 = -12LL;
volatile int8_t x2005 = 0;
volatile int8_t x2007 = 1;
static volatile int32_t x2067 = 23;
uint64_t t48 = 3106598135LLU;
uint32_t x2177 = 27062714U;
int16_t x2178 = -1;
int8_t x2242 = -1;
static volatile int64_t x2265 = -3808LL;
uint64_t x2266 = 7017573052547LLU;
uint8_t x2292 = 62U;
int32_t x2313 = 453;
volatile int64_t x2369 = -1LL;
volatile uint64_t x2376 = 3510675224LLU;
uint8_t x2419 = 40U;
int8_t x2426 = INT8_MIN;
int8_t x2498 = 6;
static int8_t x2562 = -3;
volatile uint64_t t70 = 1714666478LLU;
uint16_t x2617 = 31749U;
volatile int16_t x2717 = INT16_MIN;
static int64_t x2729 = INT64_MAX;
int16_t x2797 = 5109;
uint8_t x2799 = 22U;
int32_t t75 = 2393600;
int64_t x2806 = -732600LL;
uint16_t x2807 = 0U;
int16_t x2841 = INT16_MIN;
int16_t x2857 = 13;
int16_t x2858 = 1;
uint8_t x2927 = 12U;
uint64_t x2992 = 169391105LLU;
int8_t x3032 = INT8_MIN;
static int8_t x3065 = -1;
volatile int64_t t83 = 563639687465LL;
int16_t x3093 = INT16_MIN;
uint8_t x3099 = 21U;
uint32_t x3170 = 13524878U;
volatile uint8_t x3171 = 29U;
static volatile int32_t t88 = -229;
int64_t x3328 = INT64_MIN;
volatile int32_t x3330 = INT32_MIN;
volatile uint16_t x3332 = 23531U;
int16_t x3411 = 1;
uint32_t x3420 = 193622437U;
volatile uint64_t x3431 = 28LLU;
volatile uint8_t x3440 = UINT8_MAX;
uint64_t x3482 = UINT64_MAX;
uint64_t t99 = 232926061LLU;


void f0(void) {
	int32_t x29 = -2088641;
	uint64_t x30 = UINT64_MAX;
	static volatile int8_t x31 = 1;
	uint64_t t0 = 1344335979537841344LLU;

	t0 = (((x29/x30)>>x31)&x32);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x37 = UINT8_MAX;
	int16_t x38 = 75;
	volatile int8_t x39 = 6;
	int32_t x40 = 8465286;
	volatile int32_t t1 = 25675;

	t1 = (((x37/x38)>>x39)&x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x49 = 3087U;
	volatile uint64_t x50 = 6370588064584458LLU;
	uint8_t x51 = 3U;
	volatile int16_t x52 = -1;

	t2 = (((x49/x50)>>x51)&x52);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x53 = -1;
	volatile int64_t x54 = INT64_MAX;
	int32_t x56 = INT32_MAX;
	static int64_t t3 = -1854971358169264LL;

	t3 = (((x53/x54)>>x55)&x56);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x102 = -11;
	uint16_t x103 = 8U;
	uint32_t t4 = 296015U;

	t4 = (((x101/x102)>>x103)&x104);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x117 = 1;
	volatile int8_t x118 = INT8_MIN;
	int8_t x119 = 14;
	int8_t x120 = -1;
	volatile int32_t t5 = -477777827;

	t5 = (((x117/x118)>>x119)&x120);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x173 = -1;
	uint8_t x175 = 0U;
	volatile uint8_t x176 = 3U;
	volatile int32_t t6 = 1982733;

	t6 = (((x173/x174)>>x175)&x176);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x217 = -2484;
	volatile uint64_t x219 = 1LLU;
	volatile int32_t x220 = INT32_MIN;
	int32_t t7 = 51515;

	t7 = (((x217/x218)>>x219)&x220);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x221 = UINT64_MAX;
	static int8_t x223 = 62;
	uint8_t x224 = 52U;
	static volatile uint64_t t8 = 6412330916209707LLU;

	t8 = (((x221/x222)>>x223)&x224);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x241 = 450508292962LL;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = 44;
	int64_t t9 = 1376090672042LL;

	t9 = (((x241/x242)>>x243)&x244);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x265 = 4;
	static int8_t x266 = INT8_MAX;
	int8_t x267 = 4;
	int32_t x268 = INT32_MAX;
	static int32_t t10 = 2590862;

	t10 = (((x265/x266)>>x267)&x268);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x285 = UINT32_MAX;
	int16_t x288 = 3;
	volatile uint32_t t11 = 1562U;

	t11 = (((x285/x286)>>x287)&x288);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x361 = -1;
	static int8_t x362 = INT8_MIN;
	volatile int8_t x363 = 0;
	int32_t x364 = INT32_MAX;

	t12 = (((x361/x362)>>x363)&x364);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x373 = 69335U;
	uint8_t x374 = 14U;
	uint16_t x376 = 6U;
	volatile uint32_t t13 = 209083946U;

	t13 = (((x373/x374)>>x375)&x376);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x390 = INT64_MIN;
	uint8_t x391 = 0U;
	volatile int8_t x392 = INT8_MAX;
	int64_t t14 = 104878133835LL;

	t14 = (((x389/x390)>>x391)&x392);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x430 = INT8_MIN;
	uint32_t x431 = 3U;
	int64_t x432 = INT64_MIN;

	t15 = (((x429/x430)>>x431)&x432);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x441 = 15184740800LLU;
	int64_t x442 = INT64_MIN;
	volatile int8_t x443 = 1;
	int16_t x444 = INT16_MIN;
	uint64_t t16 = 14540LLU;

	t16 = (((x441/x442)>>x443)&x444);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x513 = -1;
	static int16_t x514 = INT16_MIN;
	uint8_t x515 = 3U;
	uint16_t x516 = 135U;

	t17 = (((x513/x514)>>x515)&x516);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x541 = 97757846;
	uint8_t x542 = 14U;
	volatile uint8_t x543 = 8U;
	volatile int64_t x544 = INT64_MIN;
	volatile int64_t t18 = 164557222031361312LL;

	t18 = (((x541/x542)>>x543)&x544);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x558 = INT32_MIN;
	volatile uint8_t x559 = 0U;
	static int32_t x560 = INT32_MAX;
	uint64_t t19 = 28LLU;

	t19 = (((x557/x558)>>x559)&x560);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x645 = INT32_MIN;
	static volatile int32_t x646 = INT32_MIN;
	int32_t x648 = 6;
	int32_t t20 = -3;

	t20 = (((x645/x646)>>x647)&x648);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x706 = -1;
	volatile int8_t x707 = 3;
	static int32_t x708 = 377129398;
	volatile uint32_t t21 = 1095U;

	t21 = (((x705/x706)>>x707)&x708);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x725 = INT32_MIN;
	int64_t x726 = -3245317485141187722LL;
	static int8_t x727 = 0;
	int64_t x728 = -1044468084866690LL;
	int64_t t22 = -3532LL;

	t22 = (((x725/x726)>>x727)&x728);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x751 = 11;
	uint32_t x752 = 1089253718U;
	volatile uint32_t t23 = 16U;

	t23 = (((x749/x750)>>x751)&x752);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x906 = UINT16_MAX;
	volatile uint8_t x907 = 7U;
	int16_t x908 = INT16_MAX;
	uint32_t t24 = 1104721U;

	t24 = (((x905/x906)>>x907)&x908);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x965 = 1;
	uint16_t x966 = 253U;
	static int16_t x967 = 3;
	int64_t x968 = INT64_MIN;
	volatile int64_t t25 = 8128779709027814LL;

	t25 = (((x965/x966)>>x967)&x968);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x1033 = -14;
	static uint8_t x1034 = 93U;
	uint64_t x1035 = 15LLU;
	uint32_t x1036 = 453U;
	uint32_t t26 = 902372U;

	t26 = (((x1033/x1034)>>x1035)&x1036);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1177 = INT16_MIN;
	int8_t x1178 = -1;
	uint32_t x1179 = 2U;
	static int8_t x1180 = -1;
	int32_t t27 = 1096691;

	t27 = (((x1177/x1178)>>x1179)&x1180);

	if (t27 != 8192) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1217 = INT64_MIN;
	int32_t x1218 = INT32_MIN;
	uint16_t x1219 = 3U;
	volatile uint64_t x1220 = UINT64_MAX;

	t28 = (((x1217/x1218)>>x1219)&x1220);

	if (t28 != 536870912LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1273 = INT64_MIN;
	volatile uint64_t x1274 = 26234141204578LLU;
	volatile uint64_t x1275 = 37LLU;
	volatile uint32_t x1276 = UINT32_MAX;
	volatile uint64_t t29 = 78LLU;

	t29 = (((x1273/x1274)>>x1275)&x1276);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1321 = -1;
	static int64_t x1322 = 175405LL;
	int16_t x1323 = 3;
	static int32_t x1324 = -1;
	static int64_t t30 = 10936108326445LL;

	t30 = (((x1321/x1322)>>x1323)&x1324);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1337 = 5932606U;
	uint16_t x1338 = 10U;
	uint8_t x1339 = 0U;
	static uint16_t x1340 = 31361U;
	uint32_t t31 = 22918583U;

	t31 = (((x1337/x1338)>>x1339)&x1340);

	if (t31 != 2048U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1389 = 1107;
	uint16_t x1390 = UINT16_MAX;
	int8_t x1391 = 0;
	static int16_t x1392 = INT16_MIN;
	static int32_t t32 = 474104392;

	t32 = (((x1389/x1390)>>x1391)&x1392);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1398 = INT32_MIN;
	int16_t x1399 = 0;
	static int64_t x1400 = INT64_MIN;
	volatile int64_t t33 = -198LL;

	t33 = (((x1397/x1398)>>x1399)&x1400);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1589 = -1LL;
	int16_t x1590 = 753;
	int16_t x1591 = 1;
	static volatile uint32_t x1592 = UINT32_MAX;
	volatile int64_t t34 = 12189179LL;

	t34 = (((x1589/x1590)>>x1591)&x1592);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1621 = INT16_MIN;
	volatile uint64_t x1622 = 396517215428LLU;
	uint8_t x1624 = 7U;
	uint64_t t35 = 33194LLU;

	t35 = (((x1621/x1622)>>x1623)&x1624);

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1677 = INT64_MAX;
	volatile int64_t x1678 = INT64_MIN;
	volatile uint8_t x1679 = 59U;
	int8_t x1680 = INT8_MAX;

	t36 = (((x1677/x1678)>>x1679)&x1680);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1745 = -233338180372056LL;
	int64_t x1746 = INT64_MAX;
	static volatile uint16_t x1747 = 9U;
	int32_t x1748 = -595;
	int64_t t37 = -2352LL;

	t37 = (((x1745/x1746)>>x1747)&x1748);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1801 = INT64_MAX;
	int16_t x1802 = INT16_MAX;
	static int8_t x1803 = 2;
	int16_t x1804 = -1;
	static volatile int64_t t38 = 150195335LL;

	t38 = (((x1801/x1802)>>x1803)&x1804);

	if (t38 != 70370891726850LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1813 = INT16_MAX;
	static uint64_t x1814 = 49581046501591140LLU;
	int64_t x1815 = 3LL;
	uint8_t x1816 = UINT8_MAX;

	t39 = (((x1813/x1814)>>x1815)&x1816);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1849 = INT64_MAX;
	int64_t x1850 = 1LL;
	int64_t x1852 = -2474LL;
	static int64_t t40 = -249626680LL;

	t40 = (((x1849/x1850)>>x1851)&x1852);

	if (t40 != 9223372036854773334LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1889 = 49010075767602LLU;
	uint16_t x1890 = 29U;
	int32_t x1891 = 2;
	volatile uint64_t t41 = 125677741864LLU;

	t41 = (((x1889/x1890)>>x1891)&x1892);

	if (t41 != 422500653168LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1937 = 7U;
	int8_t x1938 = 29;
	uint8_t x1939 = 13U;
	static volatile int32_t t42 = -27469202;

	t42 = (((x1937/x1938)>>x1939)&x1940);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1941 = -179074;
	static volatile uint32_t x1942 = UINT32_MAX;
	uint8_t x1943 = 2U;
	uint16_t x1944 = 3U;
	uint32_t t43 = 32196200U;

	t43 = (((x1941/x1942)>>x1943)&x1944);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1999 = 0LLU;
	int8_t x2000 = INT8_MIN;

	t44 = (((x1997/x1998)>>x1999)&x2000);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2006 = INT8_MAX;
	static int64_t x2008 = INT64_MIN;
	volatile int64_t t45 = 418910623202482LL;

	t45 = (((x2005/x2006)>>x2007)&x2008);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2041 = UINT64_MAX;
	int8_t x2042 = INT8_MIN;
	uint8_t x2043 = 13U;
	int8_t x2044 = INT8_MIN;
	uint64_t t46 = 114934408808195LLU;

	t46 = (((x2041/x2042)>>x2043)&x2044);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2065 = INT32_MIN;
	uint64_t x2066 = 11966738448862998LLU;
	static uint32_t x2068 = 0U;
	volatile uint64_t t47 = 2823310LLU;

	t47 = (((x2065/x2066)>>x2067)&x2068);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x2077 = UINT64_MAX;
	static int16_t x2078 = -1;
	static int8_t x2079 = 2;
	uint16_t x2080 = 231U;

	t48 = (((x2077/x2078)>>x2079)&x2080);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x2093 = INT16_MAX;
	volatile int32_t x2094 = INT32_MAX;
	static uint8_t x2095 = 11U;
	static uint32_t x2096 = UINT32_MAX;
	static uint32_t t49 = 15U;

	t49 = (((x2093/x2094)>>x2095)&x2096);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2125 = 16;
	uint8_t x2126 = UINT8_MAX;
	static uint32_t x2127 = 1U;
	uint32_t x2128 = 915U;
	static uint32_t t50 = 13U;

	t50 = (((x2125/x2126)>>x2127)&x2128);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2179 = 3U;
	uint16_t x2180 = 3U;
	uint32_t t51 = 1927534U;

	t51 = (((x2177/x2178)>>x2179)&x2180);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2229 = 205U;
	volatile uint32_t x2230 = 1004428512U;
	int8_t x2231 = 7;
	int64_t x2232 = -16973LL;
	int64_t t52 = -2417834996545006LL;

	t52 = (((x2229/x2230)>>x2231)&x2232);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x2241 = -1LL;
	int64_t x2243 = 27LL;
	uint64_t x2244 = UINT64_MAX;
	uint64_t t53 = 4LLU;

	t53 = (((x2241/x2242)>>x2243)&x2244);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x2267 = 2U;
	volatile int8_t x2268 = 1;
	uint64_t t54 = 14526279821941LLU;

	t54 = (((x2265/x2266)>>x2267)&x2268);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2289 = -2;
	int16_t x2290 = INT16_MIN;
	uint32_t x2291 = 12U;
	static volatile int32_t t55 = 12;

	t55 = (((x2289/x2290)>>x2291)&x2292);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x2301 = 12441552445450133LLU;
	uint8_t x2302 = UINT8_MAX;
	uint16_t x2303 = 0U;
	int8_t x2304 = -1;
	volatile uint64_t t56 = 527013972LLU;

	t56 = (((x2301/x2302)>>x2303)&x2304);

	if (t56 != 48790401746863LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2314 = -27306882LL;
	uint8_t x2315 = 8U;
	int64_t x2316 = INT64_MAX;
	int64_t t57 = 168887713LL;

	t57 = (((x2313/x2314)>>x2315)&x2316);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2370 = INT32_MIN;
	uint32_t x2371 = 14U;
	int32_t x2372 = 3959;
	static int64_t t58 = 1390955683323914LL;

	t58 = (((x2369/x2370)>>x2371)&x2372);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2373 = 6U;
	int64_t x2374 = -2562354739272LL;
	uint8_t x2375 = 3U;
	volatile uint64_t t59 = 13LLU;

	t59 = (((x2373/x2374)>>x2375)&x2376);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2381 = -1;
	int16_t x2382 = 14;
	int8_t x2383 = 4;
	uint8_t x2384 = 18U;
	volatile int32_t t60 = -1;

	t60 = (((x2381/x2382)>>x2383)&x2384);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2409 = 7;
	uint8_t x2410 = 24U;
	int8_t x2411 = 0;
	int64_t x2412 = -1769298LL;
	static int64_t t61 = -1823536185LL;

	t61 = (((x2409/x2410)>>x2411)&x2412);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2417 = 156489433588381706LL;
	uint64_t x2418 = UINT64_MAX;
	int64_t x2420 = 91782LL;
	uint64_t t62 = 3LLU;

	t62 = (((x2417/x2418)>>x2419)&x2420);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2421 = -1;
	volatile int32_t x2422 = -1;
	uint8_t x2423 = 0U;
	uint16_t x2424 = 4245U;
	static volatile int32_t t63 = -823777;

	t63 = (((x2421/x2422)>>x2423)&x2424);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2425 = INT64_MIN;
	uint8_t x2427 = 22U;
	int16_t x2428 = -1;
	static int64_t t64 = 5338785722803LL;

	t64 = (((x2425/x2426)>>x2427)&x2428);

	if (t64 != 17179869184LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2465 = -1;
	volatile uint32_t x2466 = 15U;
	static volatile int8_t x2467 = 2;
	int32_t x2468 = 119;
	volatile uint32_t t65 = 10295153U;

	t65 = (((x2465/x2466)>>x2467)&x2468);

	if (t65 != 68U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2497 = UINT32_MAX;
	uint8_t x2499 = 1U;
	uint8_t x2500 = 6U;
	uint32_t t66 = 290U;

	t66 = (((x2497/x2498)>>x2499)&x2500);

	if (t66 != 4U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2505 = 126U;
	uint64_t x2506 = 56415818LLU;
	int16_t x2507 = 4;
	int32_t x2508 = 782475617;
	static uint64_t t67 = 30373028LLU;

	t67 = (((x2505/x2506)>>x2507)&x2508);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2533 = UINT32_MAX;
	int64_t x2534 = INT64_MIN;
	static int32_t x2535 = 61;
	volatile int16_t x2536 = INT16_MAX;
	static volatile int64_t t68 = 19127879372649LL;

	t68 = (((x2533/x2534)>>x2535)&x2536);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x2561 = INT64_MIN;
	static int16_t x2563 = 28;
	uint32_t x2564 = 350U;
	int64_t t69 = 202627796089LL;

	t69 = (((x2561/x2562)>>x2563)&x2564);

	if (t69 != 10LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2577 = -2828;
	uint64_t x2578 = 1951728LLU;
	volatile int8_t x2579 = 4;
	int32_t x2580 = INT32_MIN;

	t70 = (((x2577/x2578)>>x2579)&x2580);

	if (t70 != 590558003200LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2618 = UINT64_MAX;
	uint8_t x2619 = 57U;
	uint16_t x2620 = UINT16_MAX;
	static uint64_t t71 = 710671321970LLU;

	t71 = (((x2617/x2618)>>x2619)&x2620);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2718 = 65861405LLU;
	int8_t x2719 = 0;
	static int64_t x2720 = 5701LL;
	static uint64_t t72 = 21300LLU;

	t72 = (((x2717/x2718)>>x2719)&x2720);

	if (t72 != 580LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2730 = 455884891U;
	uint8_t x2731 = 58U;
	int64_t x2732 = INT64_MAX;
	int64_t t73 = 3374461396LL;

	t73 = (((x2729/x2730)>>x2731)&x2732);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x2757 = 43U;
	static uint64_t x2758 = 828657048139LLU;
	static int8_t x2759 = 3;
	uint64_t x2760 = 84648806724727LLU;
	uint64_t t74 = 41LLU;

	t74 = (((x2757/x2758)>>x2759)&x2760);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2798 = 8U;
	int8_t x2800 = 8;

	t75 = (((x2797/x2798)>>x2799)&x2800);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x2805 = 237880933662LLU;
	int8_t x2808 = INT8_MIN;
	volatile uint64_t t76 = 334236848616702637LLU;

	t76 = (((x2805/x2806)>>x2807)&x2808);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2842 = 115803126LL;
	int8_t x2843 = 0;
	volatile int64_t x2844 = INT64_MIN;
	int64_t t77 = 63660LL;

	t77 = (((x2841/x2842)>>x2843)&x2844);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x2853 = UINT32_MAX;
	uint64_t x2854 = 1191728155558LLU;
	uint8_t x2855 = 0U;
	static volatile int16_t x2856 = INT16_MIN;
	volatile uint64_t t78 = 143577LLU;

	t78 = (((x2853/x2854)>>x2855)&x2856);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2859 = 1;
	int16_t x2860 = INT16_MAX;
	static int32_t t79 = -1120185;

	t79 = (((x2857/x2858)>>x2859)&x2860);

	if (t79 != 6) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2925 = INT16_MIN;
	static int8_t x2926 = -1;
	int8_t x2928 = INT8_MAX;
	volatile int32_t t80 = 531050;

	t80 = (((x2925/x2926)>>x2927)&x2928);

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2989 = 942U;
	volatile int64_t x2990 = 131LL;
	static volatile uint16_t x2991 = 1U;
	uint64_t t81 = 1684LLU;

	t81 = (((x2989/x2990)>>x2991)&x2992);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x3029 = 55;
	int32_t x3030 = INT32_MIN;
	int8_t x3031 = 6;
	int32_t t82 = 3;

	t82 = (((x3029/x3030)>>x3031)&x3032);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3066 = 652401448283377931LL;
	uint8_t x3067 = 31U;
	uint32_t x3068 = UINT32_MAX;

	t83 = (((x3065/x3066)>>x3067)&x3068);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3085 = UINT8_MAX;
	int64_t x3086 = INT64_MAX;
	uint16_t x3087 = 14U;
	int8_t x3088 = -1;
	static int64_t t84 = 11737354680244129LL;

	t84 = (((x3085/x3086)>>x3087)&x3088);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x3094 = 265859112U;
	int8_t x3095 = 2;
	static int32_t x3096 = INT32_MIN;
	volatile uint32_t t85 = 1231348991U;

	t85 = (((x3093/x3094)>>x3095)&x3096);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3097 = -1;
	volatile uint8_t x3098 = 3U;
	volatile uint32_t x3100 = UINT32_MAX;
	uint32_t t86 = 40394U;

	t86 = (((x3097/x3098)>>x3099)&x3100);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x3169 = UINT64_MAX;
	uint32_t x3172 = 7669281U;
	volatile uint64_t t87 = 1LLU;

	t87 = (((x3169/x3170)>>x3171)&x3172);

	if (t87 != 32LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3213 = -1;
	int8_t x3214 = -1;
	static int32_t x3215 = 1;
	static volatile int16_t x3216 = -2;

	t88 = (((x3213/x3214)>>x3215)&x3216);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3229 = -1LL;
	uint16_t x3230 = 20158U;
	volatile uint16_t x3231 = 16U;
	static int8_t x3232 = -3;
	volatile int64_t t89 = 4844LL;

	t89 = (((x3229/x3230)>>x3231)&x3232);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3325 = 13;
	int16_t x3326 = INT16_MIN;
	int32_t x3327 = 27;
	volatile int64_t t90 = 477689342170787152LL;

	t90 = (((x3325/x3326)>>x3327)&x3328);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3329 = -1;
	uint16_t x3331 = 27U;
	int32_t t91 = -184590;

	t91 = (((x3329/x3330)>>x3331)&x3332);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3337 = 1058691900U;
	int16_t x3338 = INT16_MIN;
	int8_t x3339 = 1;
	uint16_t x3340 = UINT16_MAX;
	static volatile uint32_t t92 = 382460U;

	t92 = (((x3337/x3338)>>x3339)&x3340);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x3377 = 1343010309694LL;
	uint32_t x3378 = UINT32_MAX;
	volatile int16_t x3379 = 4;
	int16_t x3380 = INT16_MIN;
	volatile int64_t t93 = -54886624823736444LL;

	t93 = (((x3377/x3378)>>x3379)&x3380);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3409 = 27U;
	volatile int32_t x3410 = INT32_MIN;
	int32_t x3412 = -11659;
	int32_t t94 = 111613;

	t94 = (((x3409/x3410)>>x3411)&x3412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3417 = INT32_MAX;
	uint64_t x3418 = 15064315568121LLU;
	int8_t x3419 = 14;
	uint64_t t95 = 58451LLU;

	t95 = (((x3417/x3418)>>x3419)&x3420);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3429 = -41LL;
	int32_t x3430 = INT32_MIN;
	int16_t x3432 = -1;
	volatile int64_t t96 = -2782489067120LL;

	t96 = (((x3429/x3430)>>x3431)&x3432);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3437 = 59093LLU;
	int32_t x3438 = INT32_MIN;
	uint16_t x3439 = 3U;
	static uint64_t t97 = 115829438616360LLU;

	t97 = (((x3437/x3438)>>x3439)&x3440);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3445 = 5;
	int64_t x3446 = INT64_MIN;
	static int16_t x3447 = 16;
	int8_t x3448 = -1;
	int64_t t98 = -857929783867418177LL;

	t98 = (((x3445/x3446)>>x3447)&x3448);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3481 = INT16_MIN;
	uint32_t x3483 = 2U;
	volatile int64_t x3484 = 11391834739133350LL;

	t99 = (((x3481/x3482)>>x3483)&x3484);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

