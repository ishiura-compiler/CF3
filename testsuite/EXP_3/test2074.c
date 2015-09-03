#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x128 = INT32_MIN;
int64_t x186 = -6576131384634LL;
static int64_t t2 = 13319LL;
volatile int8_t x320 = INT8_MAX;
int32_t x401 = 7;
static uint32_t x545 = 0U;
int16_t x548 = -1;
uint8_t x607 = 20U;
uint64_t x702 = 236727LLU;
int64_t x1002 = 115988854LL;
int64_t t11 = -87647216912LL;
uint32_t x1013 = UINT32_MAX;
volatile int8_t x1014 = INT8_MAX;
uint64_t x1054 = 18313340834LLU;
uint8_t x1057 = 89U;
static uint16_t x1088 = 55U;
volatile int16_t x1115 = -1;
uint32_t t17 = 34015036U;
int64_t x1134 = 4999LL;
int16_t x1135 = -1;
volatile uint16_t x1183 = 30U;
int16_t x1315 = INT16_MIN;
int16_t x1346 = INT16_MIN;
static int8_t x1348 = -1;
static volatile int8_t x1384 = INT8_MIN;
int8_t x1437 = -32;
int32_t t27 = -269107044;
uint16_t x1578 = 23U;
volatile uint8_t x1579 = 3U;
static int16_t x1580 = 0;
int64_t t28 = 0LL;
uint8_t x1605 = 9U;
uint32_t x1607 = 14U;
uint32_t x1965 = UINT32_MAX;
uint8_t x2128 = 6U;
int8_t x2209 = -3;
int8_t x2398 = INT8_MIN;
volatile int16_t x2424 = -1;
int32_t x2524 = -1;
volatile int32_t t42 = 4852;
uint64_t x2569 = 666184058LLU;
int8_t x2575 = -1;
static volatile int32_t x2585 = INT32_MAX;
int64_t x2586 = INT64_MIN;
uint64_t x2601 = UINT64_MAX;
static uint8_t x2669 = 12U;
int8_t x2672 = -1;
int64_t x2734 = 3738206898LL;
int64_t x2883 = INT64_MIN;
static uint64_t t50 = 1342955007773LLU;
volatile int16_t x2892 = -12;
static int64_t x3089 = -1LL;
int16_t x3092 = -3;
volatile int64_t t53 = -423LL;
uint64_t x3222 = 12LLU;
uint16_t x3261 = 4U;
int8_t x3480 = -11;
int32_t x3524 = -1;
volatile int32_t t59 = 146477;
static int64_t x3830 = INT64_MIN;
static int16_t x3858 = -1;
volatile int64_t t61 = 593675846LL;
int8_t x3952 = -1;
volatile int32_t t63 = 11193157;
volatile int8_t x4015 = -1;
static volatile int64_t t66 = -57435225824924LL;
int32_t x4449 = 99143;
int32_t x4451 = -3;
static uint32_t x4481 = 2U;
int16_t x4482 = -452;
static int16_t x4484 = -1;
uint32_t x4740 = UINT32_MAX;
int64_t t72 = 14289309174640LL;
static int32_t x4919 = INT32_MIN;
int32_t t73 = -8837;
int64_t x5100 = INT64_MIN;
int64_t x5244 = -1LL;
static uint16_t x5303 = UINT16_MAX;
static uint16_t x5304 = UINT16_MAX;
volatile uint64_t t80 = 8144493246187357539LLU;
volatile uint32_t t81 = 3U;
int16_t x6128 = -7;
volatile int64_t x6302 = -46772LL;
uint64_t x6377 = 1982LLU;
int64_t x6512 = -1LL;
static uint8_t x6692 = 0U;
uint32_t t91 = 20078264U;
volatile uint32_t x6747 = 7U;
volatile int64_t x6898 = INT64_MIN;
int16_t x6900 = -1;
uint32_t x6920 = UINT32_MAX;
static int64_t t94 = -194429873371588LL;
static uint16_t x6980 = UINT16_MAX;
int32_t t97 = 5829418;
volatile int8_t x7113 = INT8_MIN;
int8_t x7115 = -10;
int32_t x7116 = -1;
int64_t x7117 = INT64_MAX;


void f0(void) {
	volatile int32_t x9 = INT32_MIN;
	static volatile uint32_t x10 = 209798U;
	int8_t x11 = -27;
	int64_t x12 = -1LL;
	static volatile uint32_t t0 = 2U;

	t0 = ((x9/x10)>>(x11^x12));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x125 = -1LL;
	volatile int16_t x126 = INT16_MAX;
	int32_t x127 = INT32_MIN;
	volatile int64_t t1 = 160802454LL;

	t1 = ((x125/x126)>>(x127^x128));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x185 = -48293683357610517LL;
	uint16_t x187 = 0U;
	int32_t x188 = 1;

	t2 = ((x185/x186)>>(x187^x188));

	if (t2 != 3671LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x261 = -1;
	int32_t x262 = INT32_MIN;
	int16_t x263 = -2;
	static int16_t x264 = -1;
	volatile int32_t t3 = -5;

	t3 = ((x261/x262)>>(x263^x264));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = -614201441059LL;
	volatile uint64_t x319 = 85LLU;
	int64_t t4 = 2587682108139LL;

	t4 = ((x317/x318)>>(x319^x320));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x402 = 7U;
	volatile int8_t x403 = 10;
	volatile int64_t x404 = 0LL;
	int32_t t5 = 5482855;

	t5 = ((x401/x402)>>(x403^x404));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x429 = UINT8_MAX;
	uint16_t x430 = UINT16_MAX;
	static uint64_t x431 = UINT64_MAX;
	static int32_t x432 = -1;
	int32_t t6 = -79580771;

	t6 = ((x429/x430)>>(x431^x432));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x546 = INT64_MIN;
	static uint32_t x547 = UINT32_MAX;
	volatile int64_t t7 = 1223646691964472483LL;

	t7 = ((x545/x546)>>(x547^x548));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x605 = 1;
	volatile uint16_t x606 = 3527U;
	int16_t x608 = 1;
	static int32_t t8 = 5358705;

	t8 = ((x605/x606)>>(x607^x608));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x657 = INT64_MIN;
	volatile int8_t x658 = INT8_MIN;
	static int8_t x659 = -1;
	int32_t x660 = -1;
	volatile int64_t t9 = 4LL;

	t9 = ((x657/x658)>>(x659^x660));

	if (t9 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x701 = INT32_MIN;
	int8_t x703 = -23;
	volatile uint32_t x704 = UINT32_MAX;
	uint64_t t10 = 4961767LLU;

	t10 = ((x701/x702)>>(x703^x704));

	if (t10 != 18578558LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x1001 = 1;
	int16_t x1003 = -1;
	int16_t x1004 = -1;

	t11 = ((x1001/x1002)>>(x1003^x1004));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x1015 = UINT32_MAX;
	static uint32_t x1016 = UINT32_MAX;
	static uint32_t t12 = 1819704346U;

	t12 = ((x1013/x1014)>>(x1015^x1016));

	if (t12 != 33818640U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1053 = INT16_MIN;
	uint16_t x1055 = 0U;
	int16_t x1056 = 23;
	volatile uint64_t t13 = 55LLU;

	t13 = ((x1053/x1054)>>(x1055^x1056));

	if (t13 != 120LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1058 = 1941LL;
	static uint64_t x1059 = UINT64_MAX;
	volatile int64_t x1060 = -29LL;
	volatile int64_t t14 = 650388822224341LL;

	t14 = ((x1057/x1058)>>(x1059^x1060));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1085 = UINT64_MAX;
	volatile int16_t x1086 = -1;
	static int8_t x1087 = 2;
	static volatile uint64_t t15 = 23778254224051LLU;

	t15 = ((x1085/x1086)>>(x1087^x1088));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x1089 = UINT8_MAX;
	int16_t x1090 = INT16_MAX;
	int32_t x1091 = INT32_MIN;
	static int32_t x1092 = INT32_MIN;
	int32_t t16 = 1;

	t16 = ((x1089/x1090)>>(x1091^x1092));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1113 = 2U;
	uint32_t x1114 = 14U;
	static int32_t x1116 = -1;

	t17 = ((x1113/x1114)>>(x1115^x1116));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1133 = 187U;
	int32_t x1136 = -1;
	volatile int64_t t18 = 49LL;

	t18 = ((x1133/x1134)>>(x1135^x1136));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1181 = 2;
	int16_t x1182 = 363;
	static uint8_t x1184 = 2U;
	static int32_t t19 = -1096;

	t19 = ((x1181/x1182)>>(x1183^x1184));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1229 = INT8_MIN;
	uint64_t x1230 = 205835681LLU;
	int8_t x1231 = 2;
	volatile uint16_t x1232 = 1U;
	uint64_t t20 = 379311849LLU;

	t20 = ((x1229/x1230)>>(x1231^x1232));

	if (t20 != 11202348387LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1289 = UINT16_MAX;
	uint64_t x1290 = 543641713978LLU;
	int8_t x1291 = 1;
	static int16_t x1292 = 56;
	uint64_t t21 = 110LLU;

	t21 = ((x1289/x1290)>>(x1291^x1292));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1313 = 25;
	volatile int32_t x1314 = INT32_MIN;
	volatile int16_t x1316 = INT16_MIN;
	volatile int32_t t22 = 146324685;

	t22 = ((x1313/x1314)>>(x1315^x1316));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1329 = UINT64_MAX;
	uint64_t x1330 = 13LLU;
	static uint32_t x1331 = UINT32_MAX;
	volatile int8_t x1332 = -1;
	volatile uint64_t t23 = 8048517LLU;

	t23 = ((x1329/x1330)>>(x1331^x1332));

	if (t23 != 1418980313362273201LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1345 = 4U;
	int32_t x1347 = -1;
	static volatile int32_t t24 = -47282923;

	t24 = ((x1345/x1346)>>(x1347^x1348));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1381 = -2456;
	int8_t x1382 = -1;
	static volatile int8_t x1383 = INT8_MIN;
	int32_t t25 = -284086582;

	t25 = ((x1381/x1382)>>(x1383^x1384));

	if (t25 != 2456) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1438 = INT32_MAX;
	int8_t x1439 = INT8_MAX;
	int8_t x1440 = INT8_MAX;
	int32_t t26 = -60;

	t26 = ((x1437/x1438)>>(x1439^x1440));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1541 = INT16_MIN;
	int32_t x1542 = -460;
	int8_t x1543 = 2;
	int16_t x1544 = 0;

	t27 = ((x1541/x1542)>>(x1543^x1544));

	if (t27 != 17) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1577 = INT64_MAX;

	t28 = ((x1577/x1578)>>(x1579^x1580));

	if (t28 != 50127021939428129LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1606 = INT64_MIN;
	uint16_t x1608 = 20U;
	int64_t t29 = -100121518LL;

	t29 = ((x1605/x1606)>>(x1607^x1608));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1966 = UINT8_MAX;
	int32_t x1967 = 9;
	int8_t x1968 = 18;
	volatile uint32_t t30 = 73388537U;

	t30 = ((x1965/x1966)>>(x1967^x1968));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x1969 = 0U;
	int8_t x1970 = INT8_MIN;
	int64_t x1971 = INT64_MIN;
	int64_t x1972 = INT64_MIN;
	static volatile int32_t t31 = 1086157;

	t31 = ((x1969/x1970)>>(x1971^x1972));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2121 = UINT32_MAX;
	uint32_t x2122 = UINT32_MAX;
	uint32_t x2123 = UINT32_MAX;
	uint32_t x2124 = UINT32_MAX;
	volatile uint32_t t32 = 101U;

	t32 = ((x2121/x2122)>>(x2123^x2124));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2125 = 64LL;
	uint32_t x2126 = 2100369U;
	int8_t x2127 = 6;
	volatile int64_t t33 = 2444596310235LL;

	t33 = ((x2125/x2126)>>(x2127^x2128));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2210 = INT64_MIN;
	uint32_t x2211 = UINT32_MAX;
	volatile int32_t x2212 = -1;
	int64_t t34 = -1949482251LL;

	t34 = ((x2209/x2210)>>(x2211^x2212));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2241 = INT64_MAX;
	static int64_t x2242 = 28144LL;
	static volatile int64_t x2243 = INT64_MIN;
	int64_t x2244 = INT64_MIN;
	int64_t t35 = -142284LL;

	t35 = ((x2241/x2242)>>(x2243^x2244));

	if (t35 != 327720723310644LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2265 = 13U;
	int8_t x2266 = INT8_MIN;
	static int8_t x2267 = -3;
	static int8_t x2268 = -1;
	uint32_t t36 = 82U;

	t36 = ((x2265/x2266)>>(x2267^x2268));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2325 = UINT8_MAX;
	int8_t x2326 = INT8_MAX;
	static int16_t x2327 = INT16_MIN;
	static int16_t x2328 = INT16_MIN;
	volatile int32_t t37 = 8;

	t37 = ((x2325/x2326)>>(x2327^x2328));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2389 = INT16_MIN;
	static uint32_t x2390 = UINT32_MAX;
	static volatile int64_t x2391 = INT64_MAX;
	int64_t x2392 = INT64_MAX;
	uint32_t t38 = 10805208U;

	t38 = ((x2389/x2390)>>(x2391^x2392));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2397 = 11U;
	uint16_t x2399 = UINT16_MAX;
	static uint16_t x2400 = UINT16_MAX;
	int32_t t39 = 1921561;

	t39 = ((x2397/x2398)>>(x2399^x2400));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2421 = UINT64_MAX;
	volatile int8_t x2422 = -1;
	int16_t x2423 = -1;
	uint64_t t40 = 25361575LLU;

	t40 = ((x2421/x2422)>>(x2423^x2424));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2445 = 1255918LL;
	uint8_t x2446 = 103U;
	int8_t x2447 = 54;
	int16_t x2448 = 1;
	static volatile int64_t t41 = 349640558919LL;

	t41 = ((x2445/x2446)>>(x2447^x2448));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2521 = -1;
	static volatile int16_t x2522 = INT16_MIN;
	int32_t x2523 = -1;

	t42 = ((x2521/x2522)>>(x2523^x2524));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2570 = -99;
	static int32_t x2571 = INT32_MAX;
	volatile int32_t x2572 = INT32_MAX;
	volatile uint64_t t43 = 0LLU;

	t43 = ((x2569/x2570)>>(x2571^x2572));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2573 = -1LL;
	int32_t x2574 = INT32_MIN;
	volatile int8_t x2576 = -1;
	int64_t t44 = 68074289921LL;

	t44 = ((x2573/x2574)>>(x2575^x2576));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2587 = 10U;
	volatile int8_t x2588 = 0;
	int64_t t45 = 5666122508LL;

	t45 = ((x2585/x2586)>>(x2587^x2588));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2602 = -1LL;
	int8_t x2603 = INT8_MIN;
	int8_t x2604 = INT8_MIN;
	static volatile uint64_t t46 = 2195516228424532LLU;

	t46 = ((x2601/x2602)>>(x2603^x2604));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2670 = INT16_MIN;
	volatile int16_t x2671 = -1;
	int32_t t47 = 111;

	t47 = ((x2669/x2670)>>(x2671^x2672));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x2733 = -1LL;
	uint16_t x2735 = 1U;
	uint16_t x2736 = 1U;
	volatile int64_t t48 = 6823228LL;

	t48 = ((x2733/x2734)>>(x2735^x2736));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2849 = 67531LLU;
	static int8_t x2850 = INT8_MIN;
	volatile int32_t x2851 = -1;
	uint64_t x2852 = UINT64_MAX;
	static volatile uint64_t t49 = 1765LLU;

	t49 = ((x2849/x2850)>>(x2851^x2852));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2881 = UINT64_MAX;
	int8_t x2882 = INT8_MAX;
	int64_t x2884 = INT64_MIN;

	t50 = ((x2881/x2882)>>(x2883^x2884));

	if (t50 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2889 = INT16_MIN;
	uint32_t x2890 = UINT32_MAX;
	uint64_t x2891 = UINT64_MAX;
	static volatile uint32_t t51 = 71710990U;

	t51 = ((x2889/x2890)>>(x2891^x2892));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x3045 = -1;
	volatile int64_t x3046 = INT64_MIN;
	int32_t x3047 = INT32_MIN;
	int32_t x3048 = INT32_MIN;
	volatile int64_t t52 = 2424LL;

	t52 = ((x3045/x3046)>>(x3047^x3048));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3090 = INT64_MAX;
	int8_t x3091 = -1;

	t53 = ((x3089/x3090)>>(x3091^x3092));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3161 = -1;
	volatile int8_t x3162 = INT8_MIN;
	static volatile uint32_t x3163 = 9U;
	int16_t x3164 = 16;
	static int32_t t54 = 6596243;

	t54 = ((x3161/x3162)>>(x3163^x3164));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x3221 = INT32_MIN;
	volatile int8_t x3223 = INT8_MIN;
	int8_t x3224 = INT8_MIN;
	static uint64_t t55 = 248654956LLU;

	t55 = ((x3221/x3222)>>(x3223^x3224));

	if (t55 != 1537228672630172330LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3262 = INT8_MIN;
	volatile uint32_t x3263 = UINT32_MAX;
	int8_t x3264 = -1;
	volatile int32_t t56 = -110316399;

	t56 = ((x3261/x3262)>>(x3263^x3264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x3357 = 117U;
	uint16_t x3358 = 13712U;
	int8_t x3359 = -16;
	volatile uint64_t x3360 = UINT64_MAX;
	static volatile int32_t t57 = 6443963;

	t57 = ((x3357/x3358)>>(x3359^x3360));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3477 = INT8_MAX;
	int8_t x3478 = INT8_MIN;
	int8_t x3479 = -7;
	static int32_t t58 = -31426;

	t58 = ((x3477/x3478)>>(x3479^x3480));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3521 = INT16_MAX;
	int32_t x3522 = 23999;
	volatile int32_t x3523 = -1;

	t59 = ((x3521/x3522)>>(x3523^x3524));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3829 = 0U;
	int32_t x3831 = INT32_MIN;
	int32_t x3832 = INT32_MIN;
	volatile int64_t t60 = -1492680LL;

	t60 = ((x3829/x3830)>>(x3831^x3832));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3857 = -138LL;
	int64_t x3859 = -1LL;
	int8_t x3860 = -1;

	t61 = ((x3857/x3858)>>(x3859^x3860));

	if (t61 != 138LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3913 = -1;
	int8_t x3914 = INT8_MAX;
	static int8_t x3915 = -6;
	uint64_t x3916 = UINT64_MAX;
	volatile int32_t t62 = 508;

	t62 = ((x3913/x3914)>>(x3915^x3916));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3949 = INT16_MIN;
	int32_t x3950 = INT32_MAX;
	int32_t x3951 = -1;

	t63 = ((x3949/x3950)>>(x3951^x3952));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4013 = -1;
	static int64_t x4014 = 202LL;
	uint64_t x4016 = UINT64_MAX;
	volatile int64_t t64 = 1512178285231247450LL;

	t64 = ((x4013/x4014)>>(x4015^x4016));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x4065 = 111;
	uint32_t x4066 = 1U;
	volatile int8_t x4067 = -11;
	volatile int8_t x4068 = -1;
	volatile uint32_t t65 = 0U;

	t65 = ((x4065/x4066)>>(x4067^x4068));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4317 = UINT16_MAX;
	volatile int64_t x4318 = -357890118548539LL;
	uint64_t x4319 = UINT64_MAX;
	uint64_t x4320 = UINT64_MAX;

	t66 = ((x4317/x4318)>>(x4319^x4320));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x4421 = -1;
	int16_t x4422 = -1;
	static int16_t x4423 = -1;
	int16_t x4424 = -1;
	static volatile int32_t t67 = -5172433;

	t67 = ((x4421/x4422)>>(x4423^x4424));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x4450 = 112U;
	int32_t x4452 = -1;
	int32_t t68 = -29261;

	t68 = ((x4449/x4450)>>(x4451^x4452));

	if (t68 != 221) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x4457 = INT8_MIN;
	uint32_t x4458 = UINT32_MAX;
	uint8_t x4459 = 0U;
	int16_t x4460 = 5;
	uint32_t t69 = 16U;

	t69 = ((x4457/x4458)>>(x4459^x4460));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4483 = UINT32_MAX;
	volatile uint32_t t70 = 1078965U;

	t70 = ((x4481/x4482)>>(x4483^x4484));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4589 = -1;
	int32_t x4590 = INT32_MIN;
	volatile int8_t x4591 = INT8_MIN;
	static int8_t x4592 = INT8_MIN;
	int32_t t71 = -206009;

	t71 = ((x4589/x4590)>>(x4591^x4592));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x4737 = -1;
	int64_t x4738 = INT64_MAX;
	int16_t x4739 = -1;

	t72 = ((x4737/x4738)>>(x4739^x4740));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4917 = INT8_MAX;
	volatile int16_t x4918 = INT16_MIN;
	int32_t x4920 = INT32_MIN;

	t73 = ((x4917/x4918)>>(x4919^x4920));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5097 = INT8_MIN;
	int32_t x5098 = INT32_MIN;
	int64_t x5099 = INT64_MIN;
	static int32_t t74 = 0;

	t74 = ((x5097/x5098)>>(x5099^x5100));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x5181 = -1LL;
	int8_t x5182 = -10;
	volatile int16_t x5183 = -1;
	static volatile uint64_t x5184 = UINT64_MAX;
	volatile int64_t t75 = -538626938771479519LL;

	t75 = ((x5181/x5182)>>(x5183^x5184));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5241 = INT32_MIN;
	volatile int64_t x5242 = INT64_MAX;
	int16_t x5243 = -1;
	static int64_t t76 = 37220093725LL;

	t76 = ((x5241/x5242)>>(x5243^x5244));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x5301 = INT16_MAX;
	uint32_t x5302 = UINT32_MAX;
	uint32_t t77 = 2U;

	t77 = ((x5301/x5302)>>(x5303^x5304));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x5401 = INT64_MIN;
	static volatile int8_t x5402 = INT8_MIN;
	int32_t x5403 = -1;
	int8_t x5404 = -3;
	volatile int64_t t78 = 128409262904LL;

	t78 = ((x5401/x5402)>>(x5403^x5404));

	if (t78 != 18014398509481984LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5541 = INT16_MAX;
	volatile int64_t x5542 = 167269LL;
	int8_t x5543 = -1;
	int16_t x5544 = -1;
	volatile int64_t t79 = -1539067668LL;

	t79 = ((x5541/x5542)>>(x5543^x5544));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x5757 = 4LLU;
	int32_t x5758 = INT32_MAX;
	int64_t x5759 = -1LL;
	int64_t x5760 = -1LL;

	t80 = ((x5757/x5758)>>(x5759^x5760));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5957 = 47U;
	uint32_t x5958 = 2017225004U;
	uint8_t x5959 = 25U;
	int64_t x5960 = 0LL;

	t81 = ((x5957/x5958)>>(x5959^x5960));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x6081 = INT64_MIN;
	int32_t x6082 = INT32_MIN;
	int16_t x6083 = -18;
	volatile int16_t x6084 = -15;
	volatile int64_t t82 = -1403636962LL;

	t82 = ((x6081/x6082)>>(x6083^x6084));

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x6125 = -2LL;
	static int8_t x6126 = 12;
	int32_t x6127 = -1;
	int64_t t83 = -242159553LL;

	t83 = ((x6125/x6126)>>(x6127^x6128));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x6129 = UINT64_MAX;
	static uint8_t x6130 = 5U;
	int32_t x6131 = -1;
	int8_t x6132 = -20;
	uint64_t t84 = 7103324699LLU;

	t84 = ((x6129/x6130)>>(x6131^x6132));

	if (t84 != 7036874417766LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6205 = UINT64_MAX;
	volatile int16_t x6206 = 36;
	int16_t x6207 = -24;
	int16_t x6208 = -1;
	uint64_t t85 = 2194163755787357LLU;

	t85 = ((x6205/x6206)>>(x6207^x6208));

	if (t85 != 61083979320LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x6301 = INT16_MAX;
	static int16_t x6303 = -8;
	int8_t x6304 = -1;
	int64_t t86 = 987567002635296LL;

	t86 = ((x6301/x6302)>>(x6303^x6304));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x6313 = UINT32_MAX;
	int8_t x6314 = INT8_MIN;
	static uint32_t x6315 = UINT32_MAX;
	int32_t x6316 = -1;
	uint32_t t87 = 3U;

	t87 = ((x6313/x6314)>>(x6315^x6316));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x6378 = INT16_MIN;
	uint64_t x6379 = UINT64_MAX;
	int8_t x6380 = -1;
	uint64_t t88 = 11325664138659LLU;

	t88 = ((x6377/x6378)>>(x6379^x6380));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x6457 = INT64_MIN;
	volatile int16_t x6458 = INT16_MIN;
	int16_t x6459 = -1;
	int8_t x6460 = -1;
	int64_t t89 = 2186614303LL;

	t89 = ((x6457/x6458)>>(x6459^x6460));

	if (t89 != 281474976710656LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x6509 = UINT8_MAX;
	volatile int32_t x6510 = INT32_MAX;
	int16_t x6511 = -2;
	static volatile int32_t t90 = 658;

	t90 = ((x6509/x6510)>>(x6511^x6512));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x6689 = 75511456U;
	int32_t x6690 = INT32_MAX;
	uint16_t x6691 = 3U;

	t91 = ((x6689/x6690)>>(x6691^x6692));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x6745 = -1LL;
	uint16_t x6746 = UINT16_MAX;
	static int16_t x6748 = 0;
	volatile int64_t t92 = -4LL;

	t92 = ((x6745/x6746)>>(x6747^x6748));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x6897 = INT8_MIN;
	int8_t x6899 = -7;
	static int64_t t93 = -49091LL;

	t93 = ((x6897/x6898)>>(x6899^x6900));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6917 = 7U;
	int64_t x6918 = INT64_MIN;
	int8_t x6919 = -1;

	t94 = ((x6917/x6918)>>(x6919^x6920));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x6929 = INT16_MAX;
	int32_t x6930 = INT32_MIN;
	int8_t x6931 = -7;
	volatile uint64_t x6932 = UINT64_MAX;
	static volatile int32_t t95 = -837292;

	t95 = ((x6929/x6930)>>(x6931^x6932));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6977 = 1U;
	static int16_t x6978 = INT16_MIN;
	uint16_t x6979 = UINT16_MAX;
	volatile int32_t t96 = -60;

	t96 = ((x6977/x6978)>>(x6979^x6980));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x6989 = 12U;
	int16_t x6990 = -3532;
	int8_t x6991 = 10;
	uint32_t x6992 = 21U;

	t97 = ((x6989/x6990)>>(x6991^x6992));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x7114 = UINT64_MAX;
	static volatile uint64_t t98 = 3LLU;

	t98 = ((x7113/x7114)>>(x7115^x7116));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x7118 = UINT32_MAX;
	int16_t x7119 = -8;
	int8_t x7120 = -1;
	static volatile int64_t t99 = -313078071720105930LL;

	t99 = ((x7117/x7118)>>(x7119^x7120));

	if (t99 != 16777216LL) { NG(); } else { ; }
	
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

