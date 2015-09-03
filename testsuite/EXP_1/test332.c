#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x25 = INT8_MIN;
int8_t x70 = -1;
volatile int8_t x161 = INT8_MIN;
uint16_t x234 = UINT16_MAX;
uint32_t x310 = 128257353U;
volatile int64_t x311 = 15293469483LL;
int16_t x598 = 2451;
volatile int16_t x599 = INT16_MIN;
volatile int32_t t7 = -28685;
uint32_t t9 = 964017U;
static uint8_t x710 = 1U;
int32_t x711 = INT32_MIN;
int8_t x712 = 29;
uint8_t x876 = 31U;
volatile uint64_t x917 = UINT64_MAX;
volatile uint64_t t13 = 52333493324LLU;
int32_t x1036 = 1;
static uint64_t t16 = 6166006LLU;
int64_t x1125 = INT64_MAX;
volatile uint16_t x1229 = UINT16_MAX;
static volatile uint16_t x1231 = UINT16_MAX;
int8_t x1232 = 1;
uint16_t x1267 = 0U;
int32_t t22 = -74;
int64_t t23 = 91628345LL;
int16_t x1326 = INT16_MAX;
static uint8_t x1328 = 58U;
int32_t x1375 = 15;
static uint32_t x1550 = 1U;
uint64_t x1551 = 3390894513LLU;
volatile uint32_t t28 = 3519U;
int64_t t30 = -669905543331085LL;
volatile int32_t t31 = -6572201;
static volatile int16_t x1861 = -1;
int16_t x1957 = 5;
static volatile int8_t x1972 = 55;
int32_t x2131 = INT32_MIN;
int8_t x2132 = 10;
volatile int16_t x2178 = INT16_MAX;
uint64_t x2195 = 1166517LLU;
int8_t x2196 = 11;
static uint16_t x2251 = 5U;
volatile uint64_t t41 = 31326842866LLU;
volatile uint64_t x2331 = 397LLU;
uint8_t x2441 = UINT8_MAX;
uint8_t x2444 = 2U;
static uint8_t x2564 = 13U;
static volatile uint64_t x2598 = UINT64_MAX;
uint8_t x2599 = 108U;
static int8_t x2738 = INT8_MAX;
volatile int64_t t53 = 53945689LL;
static int8_t x2821 = 57;
static int8_t x2824 = 1;
int32_t x2870 = -201;
uint16_t x2871 = UINT16_MAX;
int8_t x2917 = 7;
int64_t x2936 = 5LL;
volatile uint32_t t57 = 74100311U;
volatile int8_t x2971 = INT8_MIN;
volatile uint64_t t58 = 31143LLU;
volatile int16_t x3010 = -1;
int64_t x3042 = -1LL;
int8_t x3044 = 34;
uint64_t x3193 = 88413LLU;
int16_t x3466 = -1;
int16_t x3467 = INT16_MIN;
volatile int8_t x3468 = 9;
int8_t x3619 = INT8_MIN;
uint8_t x3918 = 5U;
volatile uint32_t x3970 = 4100133U;
uint64_t t73 = 256707996638485847LLU;
static int64_t x3998 = -1LL;
static uint8_t x4000 = 1U;
int64_t x4242 = 11896378621LL;
uint64_t x4258 = 4LLU;
uint64_t x4267 = UINT64_MAX;
static uint16_t x4268 = 25U;
uint64_t t78 = 12011091786LLU;
int8_t x4280 = 0;
int8_t x4325 = -13;
volatile uint32_t x4328 = 48U;
int32_t x4391 = 87291605;
int32_t x4423 = INT32_MIN;
uint64_t x4437 = 166792833170180616LLU;
static uint8_t x4440 = 1U;
int8_t x4483 = -5;
static volatile int16_t x4518 = -10757;
uint8_t x4520 = 1U;
static int32_t x4581 = 1;
uint8_t x4584 = 2U;
int64_t x4585 = INT64_MIN;
int32_t x4587 = 1815;
volatile uint64_t t90 = 27952448352922LLU;
volatile uint16_t x4664 = 9U;
int32_t x4685 = -9175;
uint8_t x4698 = 2U;
uint32_t x4985 = 0U;
uint16_t x5010 = 1U;
uint64_t x5011 = 973LLU;
volatile uint64_t t98 = 583910LLU;
int16_t x5014 = -1;
volatile uint8_t x5016 = 9U;


void f0(void) {
	uint64_t x26 = UINT64_MAX;
	int8_t x27 = -1;
	uint16_t x28 = 27U;
	static volatile uint64_t t0 = 34972017474805LLU;

	t0 = (((x25-x26)^x27)>>x28);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x69 = 4;
	uint16_t x71 = UINT16_MAX;
	uint8_t x72 = 1U;
	volatile int32_t t1 = -24014165;

	t1 = (((x69-x70)^x71)>>x72);

	if (t1 != 32765) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x162 = UINT16_MAX;
	static volatile uint32_t x163 = 90U;
	uint64_t x164 = 1LLU;
	static uint32_t t2 = 7524591U;

	t2 = (((x161-x162)^x163)>>x164);

	if (t2 != 2147450861U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x233 = INT16_MAX;
	uint64_t x235 = 6990LLU;
	int8_t x236 = 29;
	volatile uint64_t t3 = 127105416490842LLU;

	t3 = (((x233-x234)^x235)>>x236);

	if (t3 != 34359738367LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x309 = INT32_MIN;
	int16_t x312 = 19;
	int64_t t4 = 9325409LL;

	t4 = (((x309-x310)^x311)>>x312);

	if (t4 != 32506LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x441 = 109U;
	int8_t x442 = -1;
	int16_t x443 = INT16_MAX;
	volatile uint8_t x444 = 9U;
	static int32_t t5 = -888201543;

	t5 = (((x441-x442)^x443)>>x444);

	if (t5 != 63) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x461 = 0;
	int32_t x462 = INT32_MAX;
	int16_t x463 = INT16_MIN;
	static uint8_t x464 = 4U;
	int32_t t6 = 1343;

	t6 = (((x461-x462)^x463)>>x464);

	if (t6 != 134215680) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x597 = 35U;
	int8_t x600 = 0;

	t7 = (((x597-x598)^x599)>>x600);

	if (t7 != 30352) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x601 = UINT64_MAX;
	volatile uint16_t x602 = UINT16_MAX;
	int32_t x603 = INT32_MIN;
	static int16_t x604 = 0;
	uint64_t t8 = 210634736606480LLU;

	t8 = (((x601-x602)^x603)>>x604);

	if (t8 != 2147418112LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x685 = INT32_MIN;
	static int32_t x686 = INT32_MIN;
	uint32_t x687 = 2827355U;
	uint8_t x688 = 4U;

	t9 = (((x685-x686)^x687)>>x688);

	if (t9 != 176709U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x709 = -1LL;
	int64_t t10 = 102326362418691LL;

	t10 = (((x709-x710)^x711)>>x712);

	if (t10 != 3LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x873 = 943U;
	volatile uint32_t x874 = 17284722U;
	uint8_t x875 = 7U;
	volatile uint32_t t11 = 48U;

	t11 = (((x873-x874)^x875)>>x876);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x877 = -2;
	static int64_t x878 = 725867957379LL;
	int8_t x879 = -1;
	uint8_t x880 = 0U;
	static volatile int64_t t12 = 3408LL;

	t12 = (((x877-x878)^x879)>>x880);

	if (t12 != 725867957380LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x918 = -27609114142LL;
	static volatile uint64_t x919 = 16236810LLU;
	volatile int8_t x920 = 1;

	t13 = (((x917-x918)^x919)>>x920);

	if (t13 != 13802091403LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x997 = 29U;
	uint64_t x998 = 70777283491607800LLU;
	static uint64_t x999 = 116531375LLU;
	uint64_t x1000 = 9LLU;
	uint64_t t14 = 268843197LLU;

	t14 = (((x997-x998)^x999)>>x1000);

	if (t14 != 35890560136958325LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x1009 = -29400;
	int8_t x1010 = -1;
	uint64_t x1011 = 86611877LLU;
	static uint16_t x1012 = 0U;
	volatile uint64_t t15 = 2036854607LLU;

	t15 = (((x1009-x1010)^x1011)>>x1012);

	if (t15 != 18446744073622919820LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x1033 = -9778662571158LL;
	volatile int8_t x1034 = -1;
	static uint64_t x1035 = 114LLU;

	t16 = (((x1033-x1034)^x1035)>>x1036);

	if (t16 != 9223367147523490188LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x1069 = -380;
	int32_t x1070 = -209341646;
	uint8_t x1071 = UINT8_MAX;
	int8_t x1072 = 2;
	volatile int32_t t17 = -113;

	t17 = (((x1069-x1070)^x1071)>>x1072);

	if (t17 != 52335339) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1126 = INT8_MAX;
	volatile uint16_t x1127 = 40U;
	uint8_t x1128 = 23U;
	volatile int64_t t18 = 751259266139031305LL;

	t18 = (((x1125-x1126)^x1127)>>x1128);

	if (t18 != 1099511627775LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1209 = INT16_MAX;
	uint16_t x1210 = 593U;
	int64_t x1211 = 3265768400027954325LL;
	volatile int8_t x1212 = 0;
	int64_t t19 = 15072LL;

	t19 = (((x1209-x1210)^x1211)>>x1212);

	if (t19 != 3265768400027963707LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1230 = -1;
	int32_t t20 = 3;

	t20 = (((x1229-x1230)^x1231)>>x1232);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x1237 = 1;
	static int8_t x1238 = INT8_MIN;
	uint8_t x1239 = UINT8_MAX;
	uint32_t x1240 = 1U;
	volatile int32_t t21 = -1419844;

	t21 = (((x1237-x1238)^x1239)>>x1240);

	if (t21 != 63) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1265 = 6U;
	static int8_t x1266 = INT8_MIN;
	uint16_t x1268 = 0U;

	t22 = (((x1265-x1266)^x1267)>>x1268);

	if (t22 != 134) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1277 = INT64_MIN;
	static int64_t x1278 = -1LL;
	static int8_t x1279 = -1;
	int64_t x1280 = 0LL;

	t23 = (((x1277-x1278)^x1279)>>x1280);

	if (t23 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1321 = 224U;
	volatile int8_t x1322 = INT8_MIN;
	int8_t x1323 = 3;
	static volatile int16_t x1324 = 20;
	int32_t t24 = -6;

	t24 = (((x1321-x1322)^x1323)>>x1324);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1325 = -1;
	int64_t x1327 = -10106308960162486LL;
	static volatile int64_t t25 = -5LL;

	t25 = (((x1325-x1326)^x1327)>>x1328);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1373 = INT32_MAX;
	static int64_t x1374 = 0LL;
	uint16_t x1376 = 0U;
	int64_t t26 = -440411LL;

	t26 = (((x1373-x1374)^x1375)>>x1376);

	if (t26 != 2147483632LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x1549 = INT8_MIN;
	uint8_t x1552 = 1U;
	uint64_t t27 = 29117784669263829LLU;

	t27 = (((x1549-x1550)^x1551)>>x1552);

	if (t27 != 452036455LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1601 = INT32_MAX;
	uint32_t x1602 = 155413U;
	int32_t x1603 = INT32_MAX;
	uint16_t x1604 = 0U;

	t28 = (((x1601-x1602)^x1603)>>x1604);

	if (t28 != 155413U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1641 = 118U;
	uint32_t x1642 = UINT32_MAX;
	uint8_t x1643 = 2U;
	static volatile uint64_t x1644 = 0LLU;
	uint32_t t29 = 1U;

	t29 = (((x1641-x1642)^x1643)>>x1644);

	if (t29 != 117U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1685 = UINT16_MAX;
	static volatile int64_t x1686 = -1LL;
	static int32_t x1687 = INT32_MAX;
	volatile uint8_t x1688 = 5U;

	t30 = (((x1685-x1686)^x1687)>>x1688);

	if (t30 != 67106815LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1757 = -1;
	uint8_t x1758 = UINT8_MAX;
	volatile int8_t x1759 = -1;
	volatile uint8_t x1760 = 0U;

	t31 = (((x1757-x1758)^x1759)>>x1760);

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1862 = INT8_MIN;
	int64_t x1863 = INT64_MAX;
	volatile int8_t x1864 = 1;
	int64_t t32 = -1202443285171341LL;

	t32 = (((x1861-x1862)^x1863)>>x1864);

	if (t32 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1901 = 1U;
	uint64_t x1902 = UINT64_MAX;
	static uint32_t x1903 = 5367U;
	uint8_t x1904 = 0U;
	volatile uint64_t t33 = 249LLU;

	t33 = (((x1901-x1902)^x1903)>>x1904);

	if (t33 != 5365LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1937 = INT8_MAX;
	int64_t x1938 = INT64_MAX;
	int64_t x1939 = INT64_MIN;
	static uint8_t x1940 = 3U;
	int64_t t34 = -4207144863986438LL;

	t34 = (((x1937-x1938)^x1939)>>x1940);

	if (t34 != 16LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1958 = UINT8_MAX;
	int32_t x1959 = INT32_MIN;
	uint8_t x1960 = 2U;
	volatile int32_t t35 = 2484;

	t35 = (((x1957-x1958)^x1959)>>x1960);

	if (t35 != 536870849) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1969 = INT16_MIN;
	uint16_t x1970 = 6U;
	int64_t x1971 = -203801LL;
	int64_t t36 = -67217755015LL;

	t36 = (((x1969-x1970)^x1971)>>x1972);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2129 = -3513;
	volatile uint64_t x2130 = UINT64_MAX;
	volatile uint64_t t37 = 440LLU;

	t37 = (((x2129-x2130)^x2131)>>x2132);

	if (t37 != 2097148LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2177 = INT8_MAX;
	static uint32_t x2179 = UINT32_MAX;
	volatile int8_t x2180 = 1;
	uint32_t t38 = 4019924U;

	t38 = (((x2177-x2178)^x2179)>>x2180);

	if (t38 != 16319U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2189 = UINT64_MAX;
	static volatile int32_t x2190 = INT32_MIN;
	volatile int32_t x2191 = INT32_MIN;
	int8_t x2192 = 3;
	uint64_t t39 = 887481573LLU;

	t39 = (((x2189-x2190)^x2191)>>x2192);

	if (t39 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2193 = INT8_MIN;
	int64_t x2194 = 23030LL;
	volatile uint64_t t40 = 134769113795773660LLU;

	t40 = (((x2193-x2194)^x2195)>>x2196);

	if (t40 != 9007199254740429LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2249 = UINT64_MAX;
	int8_t x2250 = INT8_MAX;
	int8_t x2252 = 0;

	t41 = (((x2249-x2250)^x2251)>>x2252);

	if (t41 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2329 = 20U;
	volatile int8_t x2330 = INT8_MAX;
	static int16_t x2332 = 0;
	static volatile uint64_t t42 = 6737712812315332793LLU;

	t42 = (((x2329-x2330)^x2331)>>x2332);

	if (t42 != 18446744073709551128LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2365 = UINT64_MAX;
	static int64_t x2366 = 13509231675693LL;
	uint32_t x2367 = UINT32_MAX;
	static int64_t x2368 = 4LL;
	volatile uint64_t t43 = 1LLU;

	t43 = (((x2365-x2366)^x2367)>>x2368);

	if (t43 != 1152920660206373010LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2421 = 324U;
	int8_t x2422 = INT8_MAX;
	uint64_t x2423 = UINT64_MAX;
	static volatile uint8_t x2424 = 6U;
	uint64_t t44 = 74998665966119LLU;

	t44 = (((x2421-x2422)^x2423)>>x2424);

	if (t44 != 288230376151711740LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2442 = 4U;
	uint16_t x2443 = 815U;
	uint32_t t45 = 5472U;

	t45 = (((x2441-x2442)^x2443)>>x2444);

	if (t45 != 245U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2465 = -2653748220077242LL;
	int8_t x2466 = -1;
	int64_t x2467 = INT64_MIN;
	static volatile uint8_t x2468 = 0U;
	int64_t t46 = 28320229205LL;

	t46 = (((x2465-x2466)^x2467)>>x2468);

	if (t46 != 9220718288634698567LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2513 = INT8_MIN;
	static int64_t x2514 = 9796210349LL;
	int8_t x2515 = INT8_MIN;
	int8_t x2516 = 0;
	volatile int64_t t47 = -909191LL;

	t47 = (((x2513-x2514)^x2515)>>x2516);

	if (t47 != 9796210515LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2561 = -1;
	static int64_t x2562 = 16818256682356LL;
	int32_t x2563 = INT32_MIN;
	int64_t t48 = 1827276624223767LL;

	t48 = (((x2561-x2562)^x2563)>>x2564);

	if (t48 != 2052951623LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x2593 = 8960U;
	volatile int32_t x2594 = -1;
	int32_t x2595 = 167279;
	uint16_t x2596 = 10U;
	volatile int32_t t49 = -862489175;

	t49 = (((x2593-x2594)^x2595)>>x2596);

	if (t49 != 171) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2597 = -24;
	uint8_t x2600 = 2U;
	volatile uint64_t t50 = 504715586255315LLU;

	t50 = (((x2597-x2598)^x2599)>>x2600);

	if (t50 != 4611686018427387873LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2737 = INT8_MAX;
	int8_t x2739 = 7;
	int8_t x2740 = 4;
	volatile int32_t t51 = -3;

	t51 = (((x2737-x2738)^x2739)>>x2740);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2741 = -82;
	uint64_t x2742 = 31975LLU;
	static int8_t x2743 = INT8_MIN;
	uint8_t x2744 = 27U;
	uint64_t t52 = 70539354LLU;

	t52 = (((x2741-x2742)^x2743)>>x2744);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2773 = 9887U;
	volatile int8_t x2774 = 1;
	int64_t x2775 = 63172698126131450LL;
	volatile int16_t x2776 = 1;

	t53 = (((x2773-x2774)^x2775)>>x2776);

	if (t53 != 31586349063062322LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2822 = 26LLU;
	uint8_t x2823 = 3U;
	volatile uint64_t t54 = 5440689690190LLU;

	t54 = (((x2821-x2822)^x2823)>>x2824);

	if (t54 != 14LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2869 = UINT64_MAX;
	uint8_t x2872 = 15U;
	uint64_t t55 = 19LLU;

	t55 = (((x2869-x2870)^x2871)>>x2872);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x2918 = 20U;
	volatile int64_t x2919 = -505337760001LL;
	int16_t x2920 = 60;
	int64_t t56 = -37322992492752LL;

	t56 = (((x2917-x2918)^x2919)>>x2920);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2933 = 2272303U;
	uint8_t x2934 = 9U;
	static int8_t x2935 = -1;

	t57 = (((x2933-x2934)^x2935)>>x2936);

	if (t57 != 134146718U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2969 = -5;
	uint64_t x2970 = 132LLU;
	uint8_t x2972 = 6U;

	t58 = (((x2969-x2970)^x2971)>>x2972);

	if (t58 != 3LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x3009 = 11311U;
	uint32_t x3011 = 135856276U;
	uint8_t x3012 = 21U;
	uint32_t t59 = 977015097U;

	t59 = (((x3009-x3010)^x3011)>>x3012);

	if (t59 != 64U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3041 = INT8_MAX;
	uint64_t x3043 = UINT64_MAX;
	uint64_t t60 = 2LLU;

	t60 = (((x3041-x3042)^x3043)>>x3044);

	if (t60 != 1073741823LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3081 = INT64_MAX;
	volatile uint32_t x3082 = 308U;
	volatile uint8_t x3083 = UINT8_MAX;
	static uint64_t x3084 = 3LLU;
	int64_t t61 = 699074186184039272LL;

	t61 = (((x3081-x3082)^x3083)>>x3084);

	if (t61 != 1152921504606846918LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x3097 = 3620466514LLU;
	static int16_t x3098 = 11529;
	static int64_t x3099 = INT64_MIN;
	volatile uint8_t x3100 = 56U;
	volatile uint64_t t62 = 26016LLU;

	t62 = (((x3097-x3098)^x3099)>>x3100);

	if (t62 != 128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3194 = UINT64_MAX;
	volatile int32_t x3195 = -1;
	volatile int8_t x3196 = 9;
	volatile uint64_t t63 = 4117698440060396LLU;

	t63 = (((x3193-x3194)^x3195)>>x3196);

	if (t63 != 36028797018963795LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3441 = -1;
	uint16_t x3442 = 2U;
	int16_t x3443 = -46;
	static uint8_t x3444 = 3U;
	static int32_t t64 = -2440111;

	t64 = (((x3441-x3442)^x3443)>>x3444);

	if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x3465 = 1U;
	static volatile uint32_t t65 = 3479U;

	t65 = (((x3465-x3466)^x3467)>>x3468);

	if (t65 != 8388544U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3489 = -1;
	int8_t x3490 = -1;
	volatile int64_t x3491 = INT64_MAX;
	static int64_t x3492 = 8LL;
	int64_t t66 = -425598LL;

	t66 = (((x3489-x3490)^x3491)>>x3492);

	if (t66 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x3589 = -4286900181LL;
	int64_t x3590 = -1LL;
	volatile int8_t x3591 = INT8_MIN;
	int8_t x3592 = 33;
	volatile int64_t t67 = -12181287LL;

	t67 = (((x3589-x3590)^x3591)>>x3592);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x3617 = -1;
	uint64_t x3618 = 10061LLU;
	uint32_t x3620 = 26U;
	uint64_t t68 = 22726257361622LLU;

	t68 = (((x3617-x3618)^x3619)>>x3620);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x3697 = INT64_MIN;
	int64_t x3698 = -1620237694LL;
	int8_t x3699 = INT8_MIN;
	int8_t x3700 = 0;
	int64_t t69 = 1LL;

	t69 = (((x3697-x3698)^x3699)>>x3700);

	if (t69 != 9223372035234538238LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3797 = -1;
	int64_t x3798 = INT64_MAX;
	int64_t x3799 = -1LL;
	int8_t x3800 = 27;
	volatile int64_t t70 = 1748LL;

	t70 = (((x3797-x3798)^x3799)>>x3800);

	if (t70 != 68719476735LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3857 = -4065;
	static volatile int8_t x3858 = INT8_MIN;
	int16_t x3859 = -2;
	int32_t x3860 = 1;
	int32_t t71 = -51;

	t71 = (((x3857-x3858)^x3859)>>x3860);

	if (t71 != 1968) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x3917 = INT8_MIN;
	static int32_t x3919 = INT32_MIN;
	int16_t x3920 = 0;
	static int32_t t72 = -4986862;

	t72 = (((x3917-x3918)^x3919)>>x3920);

	if (t72 != 2147483515) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3969 = INT32_MIN;
	static uint64_t x3971 = UINT64_MAX;
	int16_t x3972 = 7;

	t73 = (((x3969-x3970)^x3971)>>x3972);

	if (t73 != 144115188059110688LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3997 = -846LL;
	static uint64_t x3999 = UINT64_MAX;
	uint64_t t74 = 1095970LLU;

	t74 = (((x3997-x3998)^x3999)>>x4000);

	if (t74 != 422LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4093 = INT16_MAX;
	int32_t x4094 = -1;
	static int32_t x4095 = INT32_MAX;
	uint32_t x4096 = 5U;
	volatile int32_t t75 = -111108236;

	t75 = (((x4093-x4094)^x4095)>>x4096);

	if (t75 != 67107839) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4241 = INT16_MIN;
	uint64_t x4243 = 2256894661940026LLU;
	uint16_t x4244 = 4U;
	volatile uint64_t t76 = 8153308LLU;

	t76 = (((x4241-x4242)^x4243)>>x4244);

	if (t76 != 1152780449029250947LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4257 = -1;
	volatile int16_t x4259 = -15919;
	int32_t x4260 = 7;
	uint64_t t77 = 0LLU;

	t77 = (((x4257-x4258)^x4259)>>x4260);

	if (t77 != 124LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4265 = UINT8_MAX;
	volatile uint16_t x4266 = 4891U;

	t78 = (((x4265-x4266)^x4267)>>x4268);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x4277 = 24U;
	int32_t x4278 = 1616;
	int16_t x4279 = INT16_MIN;
	volatile int32_t t79 = 7744;

	t79 = (((x4277-x4278)^x4279)>>x4280);

	if (t79 != 31176) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4313 = -1;
	uint32_t x4314 = 0U;
	uint8_t x4315 = 4U;
	volatile uint8_t x4316 = 8U;
	static volatile uint32_t t80 = 3U;

	t80 = (((x4313-x4314)^x4315)>>x4316);

	if (t80 != 16777215U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x4326 = UINT64_MAX;
	int8_t x4327 = INT8_MIN;
	volatile uint64_t t81 = 12832655217545LLU;

	t81 = (((x4325-x4326)^x4327)>>x4328);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4389 = 12501050719LLU;
	static int64_t x4390 = 14997342187130808LL;
	static volatile uint8_t x4392 = 15U;
	static volatile uint64_t t82 = 55850871379100LLU;

	t82 = (((x4389-x4390)^x4391)>>x4392);

	if (t82 != 562492271242385LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4421 = UINT8_MAX;
	uint64_t x4422 = UINT64_MAX;
	static uint32_t x4424 = 57U;
	uint64_t t83 = 8431815319218LLU;

	t83 = (((x4421-x4422)^x4423)>>x4424);

	if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4425 = INT16_MAX;
	int32_t x4426 = 25;
	int16_t x4427 = 7;
	volatile uint8_t x4428 = 0U;
	volatile int32_t t84 = -15;

	t84 = (((x4425-x4426)^x4427)>>x4428);

	if (t84 != 32737) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x4438 = INT32_MIN;
	static int64_t x4439 = -1LL;
	uint64_t t85 = 103855880LLU;

	t85 = (((x4437-x4438)^x4439)>>x4440);

	if (t85 != 9139975619195943675LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x4469 = -1;
	uint64_t x4470 = 1LLU;
	int16_t x4471 = 625;
	volatile uint8_t x4472 = 3U;
	uint64_t t86 = 91337865682968789LLU;

	t86 = (((x4469-x4470)^x4471)>>x4472);

	if (t86 != 2305843009213693873LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4481 = 48LLU;
	int32_t x4482 = 911742;
	uint8_t x4484 = 0U;
	volatile uint64_t t87 = 8540517327478916LLU;

	t87 = (((x4481-x4482)^x4483)>>x4484);

	if (t87 != 911689LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4517 = 705;
	uint16_t x4519 = 34U;
	int32_t t88 = 9526;

	t88 = (((x4517-x4518)^x4519)>>x4520);

	if (t88 != 5746) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4582 = UINT16_MAX;
	int64_t x4583 = -130866659184684LL;
	volatile int64_t t89 = 11981241363904571LL;

	t89 = (((x4581-x4582)^x4583)>>x4584);

	if (t89 != 32716664785909LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x4586 = UINT64_MAX;
	uint32_t x4588 = 5U;

	t90 = (((x4585-x4586)^x4587)>>x4588);

	if (t90 != 288230376151711800LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4597 = UINT64_MAX;
	static uint64_t x4598 = 96522201870212219LLU;
	static uint32_t x4599 = UINT32_MAX;
	uint32_t x4600 = 15U;
	volatile uint64_t t91 = 4947873761594LLU;

	t91 = (((x4597-x4598)^x4599)>>x4600);

	if (t91 != 560004329555667LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4661 = -1;
	uint16_t x4662 = 15510U;
	int16_t x4663 = INT16_MIN;
	int32_t t92 = 1;

	t92 = (((x4661-x4662)^x4663)>>x4664);

	if (t92 != 33) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4686 = UINT32_MAX;
	int64_t x4687 = INT64_MAX;
	volatile int16_t x4688 = 6;
	int64_t t93 = -1LL;

	t93 = (((x4685-x4686)^x4687)>>x4688);

	if (t93 != 144115188008747151LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4697 = -296040380504LL;
	static int32_t x4699 = INT32_MIN;
	uint16_t x4700 = 0U;
	volatile int64_t t94 = 744343698929LL;

	t94 = (((x4697-x4698)^x4699)>>x4700);

	if (t94 != 294517622694LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x4785 = INT16_MIN;
	static int32_t x4786 = 56;
	int16_t x4787 = -1;
	static int64_t x4788 = 1LL;
	int32_t t95 = -249;

	t95 = (((x4785-x4786)^x4787)>>x4788);

	if (t95 != 16411) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x4986 = 2821088LLU;
	uint32_t x4987 = 332932U;
	volatile int16_t x4988 = 0;
	volatile uint64_t t96 = 5456LLU;

	t96 = (((x4985-x4986)^x4987)>>x4988);

	if (t96 != 18446744073706528932LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5001 = UINT8_MAX;
	int16_t x5002 = -6210;
	static volatile uint32_t x5003 = 11130341U;
	static uint8_t x5004 = 1U;
	uint32_t t97 = 231U;

	t97 = (((x5001-x5002)^x5003)>>x5004);

	if (t97 != 5563986U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5009 = -1;
	static int8_t x5012 = 1;

	t98 = (((x5009-x5010)^x5011)>>x5012);

	if (t98 != 9223372036854775321LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5013 = 18U;
	static uint64_t x5015 = 244824548507696LLU;
	volatile uint64_t t99 = 6002260247674LLU;

	t99 = (((x5013-x5014)^x5015)>>x5016);

	if (t99 != 478172946304LLU) { NG(); } else { ; }
	
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

