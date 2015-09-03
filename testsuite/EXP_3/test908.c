#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = UINT8_MAX;
uint32_t x95 = 253U;
uint16_t x115 = 1037U;
int8_t x116 = 4;
int8_t x233 = -1;
uint8_t x234 = 62U;
uint32_t x267 = 3109U;
uint8_t x273 = 1U;
int64_t x274 = -1LL;
int32_t x307 = INT32_MAX;
volatile int32_t t8 = -163;
volatile uint8_t x390 = UINT8_MAX;
uint32_t x392 = 6U;
int8_t x461 = INT8_MIN;
uint32_t x464 = 2U;
static int32_t t11 = INT32_MAX;
int32_t t12 = 8016639;
uint8_t x881 = UINT8_MAX;
int16_t x1122 = -2089;
volatile int32_t x1239 = INT32_MAX;
static volatile int32_t t18 = -14;
volatile uint64_t x1253 = 128054478443345LLU;
int64_t x1261 = INT64_MIN;
static volatile uint8_t x1264 = 10U;
volatile int64_t t20 = -2LL;
int64_t x1310 = -1LL;
uint64_t x1319 = 10283378236477400LLU;
int8_t x1320 = 3;
uint8_t x1339 = 2U;
int16_t x1413 = INT16_MAX;
static uint16_t x1463 = UINT16_MAX;
static volatile int32_t x1489 = INT32_MIN;
uint32_t x1528 = 6U;
int64_t t30 = -118741190103720718LL;
uint8_t x1660 = 5U;
static int8_t x1816 = 2;
int16_t x1830 = 914;
uint64_t x1885 = UINT64_MAX;
volatile uint16_t x1974 = 47U;
int64_t x1993 = INT64_MIN;
int64_t t39 = 6862LL;
volatile uint32_t x2192 = 0U;
int64_t t41 = 55462746373LL;
uint8_t x2209 = UINT8_MAX;
int16_t x2210 = INT16_MIN;
uint8_t x2211 = UINT8_MAX;
volatile int32_t t42 = -7;
uint32_t x2295 = UINT32_MAX;
uint32_t x2311 = UINT32_MAX;
volatile uint64_t t44 = 25LLU;
int8_t x2349 = INT8_MIN;
int16_t x2503 = 182;
volatile uint16_t x2524 = 3U;
int8_t x2749 = INT8_MAX;
volatile uint8_t x2781 = 0U;
int32_t t53 = 21;
int64_t x2849 = 11270252871185LL;
int8_t x2978 = INT8_MAX;
int8_t x3057 = INT8_MIN;
int32_t x3253 = 145;
uint16_t x3254 = 11139U;
volatile int8_t x3256 = 0;
volatile int64_t x3257 = INT64_MIN;
volatile int64_t t65 = 2110125680LL;
uint64_t x3287 = 1747870595LLU;
volatile int64_t t68 = -6537323384126LL;
static int8_t x3484 = 0;
int32_t t73 = -7632862;
int64_t x3741 = INT64_MAX;
uint8_t x3744 = 5U;
int64_t x3781 = 2751243324LL;
volatile int8_t x3782 = -1;
int8_t x3784 = 3;
int64_t t77 = -73592LL;
uint8_t x3796 = 2U;
int8_t x3897 = 3;
volatile uint8_t x3898 = 2U;
volatile int8_t x3900 = 7;
volatile uint32_t x3975 = UINT32_MAX;
int16_t x3976 = 14;
static int8_t x4002 = INT8_MAX;
uint64_t x4003 = UINT64_MAX;
volatile int16_t x4153 = INT16_MAX;
uint32_t x4155 = 74319652U;
static volatile int64_t t82 = 2018991033415837LL;
static int8_t x4158 = -27;
int64_t x4166 = INT64_MIN;
uint16_t x4168 = 14U;
uint8_t x4236 = 7U;
int32_t t85 = -654439;
volatile uint32_t x4309 = 403144297U;
volatile uint32_t x4311 = 31956642U;
int64_t x4312 = 18LL;
uint32_t x4441 = 433U;
volatile uint8_t x4451 = 3U;
uint16_t x4452 = 25U;
static int64_t x4670 = INT64_MIN;
int16_t x4672 = 2;
int16_t x4715 = INT16_MAX;
uint32_t x4730 = 2115220627U;
uint32_t x4754 = UINT32_MAX;
uint16_t x4804 = 14U;
volatile uint64_t x4885 = 250287LLU;
int16_t x4914 = -1;
int16_t x4915 = INT16_MAX;


void f0(void) {
	uint16_t x1 = 36U;
	int16_t x2 = INT16_MIN;
	int16_t x4 = 9;
	int32_t t0 = 129159;

	t0 = ((x1%x2)&(x3<<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x57 = 106U;
	int8_t x58 = INT8_MIN;
	volatile uint16_t x59 = UINT16_MAX;
	uint8_t x60 = 4U;
	int32_t t1 = -25;

	t1 = ((x57%x58)&(x59<<x60));

	if (t1 != 96) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x93 = -18;
	static int64_t x94 = INT64_MIN;
	static volatile uint8_t x96 = 0U;
	int64_t t2 = 150437765262883231LL;

	t2 = ((x93%x94)&(x95<<x96));

	if (t2 != 236LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int16_t x114 = -1;
	volatile uint32_t t3 = 331838U;

	t3 = ((x113%x114)&(x115<<x116));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x177 = INT8_MIN;
	static int8_t x178 = INT8_MIN;
	uint32_t x179 = 28221U;
	static int64_t x180 = 14LL;
	uint32_t t4 = 2U;

	t4 = ((x177%x178)&(x179<<x180));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x235 = 0U;
	static uint8_t x236 = 5U;
	static volatile int32_t t5 = 3;

	t5 = ((x233%x234)&(x235<<x236));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x265 = -1;
	int64_t x266 = INT64_MIN;
	uint16_t x268 = 0U;
	volatile int64_t t6 = 10356574567LL;

	t6 = ((x265%x266)&(x267<<x268));

	if (t6 != 3109LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x275 = 1;
	volatile uint8_t x276 = 0U;
	volatile int64_t t7 = -123297267LL;

	t7 = ((x273%x274)&(x275<<x276));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MAX;
	int8_t x308 = 0;

	t8 = ((x305%x306)&(x307<<x308));

	if (t8 != 2147483640) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x389 = INT8_MAX;
	int64_t x391 = 30LL;
	int64_t t9 = 1468LL;

	t9 = ((x389%x390)&(x391<<x392));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x462 = -45501;
	uint32_t x463 = UINT32_MAX;
	static uint32_t t10 = 145034U;

	t10 = ((x461%x462)&(x463<<x464));

	if (t10 != 4294967168U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x717 = INT32_MIN;
	static volatile int32_t x718 = INT32_MAX;
	int32_t x719 = INT32_MAX;
	int8_t x720 = 0;

	t11 = ((x717%x718)&(x719<<x720));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x825 = -124663;
	int8_t x826 = -2;
	uint16_t x827 = 2091U;
	int16_t x828 = 0;

	t12 = ((x825%x826)&(x827<<x828));

	if (t12 != 2091) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x865 = INT64_MIN;
	int8_t x866 = INT8_MIN;
	static volatile uint64_t x867 = 40832710965LLU;
	static volatile uint32_t x868 = 1U;
	static volatile uint64_t t13 = 131673LLU;

	t13 = ((x865%x866)&(x867<<x868));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x882 = -1;
	uint8_t x883 = 44U;
	int16_t x884 = 1;
	volatile int32_t t14 = -11812;

	t14 = ((x881%x882)&(x883<<x884));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1089 = INT32_MAX;
	int16_t x1090 = INT16_MIN;
	uint32_t x1091 = 93U;
	uint16_t x1092 = 13U;
	uint32_t t15 = 13U;

	t15 = ((x1089%x1090)&(x1091<<x1092));

	if (t15 != 8192U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1121 = INT8_MIN;
	uint64_t x1123 = UINT64_MAX;
	uint8_t x1124 = 0U;
	uint64_t t16 = 260789905930382211LLU;

	t16 = ((x1121%x1122)&(x1123<<x1124));

	if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1133 = INT64_MIN;
	int16_t x1134 = INT16_MAX;
	static int32_t x1135 = 3510;
	static volatile uint16_t x1136 = 0U;
	int64_t t17 = 1LL;

	t17 = ((x1133%x1134)&(x1135<<x1136));

	if (t17 != 3504LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1237 = -3;
	int32_t x1238 = INT32_MIN;
	int32_t x1240 = 0;

	t18 = ((x1237%x1238)&(x1239<<x1240));

	if (t18 != 2147483645) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x1254 = INT32_MIN;
	static uint64_t x1255 = 3658146826083218LLU;
	volatile int8_t x1256 = 1;
	volatile uint64_t t19 = 2142410163997399070LLU;

	t19 = ((x1253%x1254)&(x1255<<x1256));

	if (t19 != 127685085958912LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1262 = -1;
	int32_t x1263 = 63561;

	t20 = ((x1261%x1262)&(x1263<<x1264));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1269 = 172320988LLU;
	int64_t x1270 = -4445351237158398LL;
	int64_t x1271 = 6521515279867413LL;
	int16_t x1272 = 1;
	uint64_t t21 = 2628282861791LLU;

	t21 = ((x1269%x1270)&(x1271<<x1272));

	if (t21 != 38021128LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1309 = 0;
	int8_t x1311 = 6;
	uint32_t x1312 = 1U;
	int64_t t22 = -172679066LL;

	t22 = ((x1309%x1310)&(x1311<<x1312));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1317 = INT32_MIN;
	uint32_t x1318 = UINT32_MAX;
	uint64_t t23 = 952489994791073367LLU;

	t23 = ((x1317%x1318)&(x1319<<x1320));

	if (t23 != 2147483648LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1337 = INT16_MIN;
	int64_t x1338 = INT64_MAX;
	uint8_t x1340 = 2U;
	volatile int64_t t24 = -16783308424LL;

	t24 = ((x1337%x1338)&(x1339<<x1340));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1393 = -1222;
	int16_t x1394 = INT16_MAX;
	uint32_t x1395 = 241992847U;
	volatile uint64_t x1396 = 22LLU;
	uint32_t t25 = 5U;

	t25 = ((x1393%x1394)&(x1395<<x1396));

	if (t25 != 599785472U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1414 = INT8_MIN;
	int8_t x1415 = 12;
	uint8_t x1416 = 0U;
	int32_t t26 = -664;

	t26 = ((x1413%x1414)&(x1415<<x1416));

	if (t26 != 12) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x1461 = 1666318736U;
	static uint64_t x1462 = UINT64_MAX;
	uint8_t x1464 = 4U;
	static uint64_t t27 = 103129326318967844LLU;

	t27 = ((x1461%x1462)&(x1463<<x1464));

	if (t27 != 131472LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1490 = UINT16_MAX;
	static uint64_t x1491 = UINT64_MAX;
	int16_t x1492 = 1;
	volatile uint64_t t28 = 560802577729LLU;

	t28 = ((x1489%x1490)&(x1491<<x1492));

	if (t28 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1525 = INT64_MAX;
	int32_t x1526 = -1;
	uint32_t x1527 = UINT32_MAX;
	static int64_t t29 = 1LL;

	t29 = ((x1525%x1526)&(x1527<<x1528));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1557 = INT64_MIN;
	int64_t x1558 = 3537957LL;
	uint16_t x1559 = UINT16_MAX;
	uint8_t x1560 = 14U;

	t30 = ((x1557%x1558)&(x1559<<x1560));

	if (t30 != 1071251456LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1657 = INT8_MIN;
	uint16_t x1658 = 3813U;
	static volatile int8_t x1659 = 3;
	int32_t t31 = 9827663;

	t31 = ((x1657%x1658)&(x1659<<x1660));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1681 = -529930;
	int8_t x1682 = INT8_MAX;
	uint64_t x1683 = UINT64_MAX;
	uint64_t x1684 = 8LLU;
	uint64_t t32 = 123555055LLU;

	t32 = ((x1681%x1682)&(x1683<<x1684));

	if (t32 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1697 = INT8_MIN;
	int8_t x1698 = INT8_MAX;
	static volatile uint8_t x1699 = 1U;
	static uint64_t x1700 = 5LLU;
	volatile int32_t t33 = -1813182;

	t33 = ((x1697%x1698)&(x1699<<x1700));

	if (t33 != 32) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1789 = 22;
	volatile uint16_t x1790 = 57U;
	volatile int16_t x1791 = 998;
	static int8_t x1792 = 0;
	static volatile int32_t t34 = -13;

	t34 = ((x1789%x1790)&(x1791<<x1792));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1813 = 2921LL;
	uint16_t x1814 = UINT16_MAX;
	uint8_t x1815 = 12U;
	int64_t t35 = -46122416243986LL;

	t35 = ((x1813%x1814)&(x1815<<x1816));

	if (t35 != 32LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1829 = UINT64_MAX;
	int8_t x1831 = INT8_MAX;
	uint8_t x1832 = 16U;
	volatile uint64_t t36 = 4LLU;

	t36 = ((x1829%x1830)&(x1831<<x1832));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1886 = -1;
	uint32_t x1887 = 326U;
	static volatile uint16_t x1888 = 23U;
	uint64_t t37 = 466927337190279LLU;

	t37 = ((x1885%x1886)&(x1887<<x1888));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1973 = 142695U;
	static uint16_t x1975 = UINT16_MAX;
	static int32_t x1976 = 15;
	volatile uint32_t t38 = 14691054U;

	t38 = ((x1973%x1974)&(x1975<<x1976));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1994 = 1;
	uint32_t x1995 = 0U;
	int16_t x1996 = 1;

	t39 = ((x1993%x1994)&(x1995<<x1996));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2133 = INT16_MAX;
	static volatile uint64_t x2134 = 1671237328806LLU;
	uint32_t x2135 = 6113U;
	uint32_t x2136 = 2U;
	uint64_t t40 = 1LLU;

	t40 = ((x2133%x2134)&(x2135<<x2136));

	if (t40 != 24452LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2189 = UINT32_MAX;
	int32_t x2190 = 52647102;
	volatile int64_t x2191 = 291647471301425382LL;

	t41 = ((x2189%x2190)&(x2191<<x2192));

	if (t41 != 8530144LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2212 = 7LL;

	t42 = ((x2209%x2210)&(x2211<<x2212));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2293 = -62;
	volatile uint16_t x2294 = 594U;
	uint8_t x2296 = 12U;
	static volatile uint32_t t43 = 0U;

	t43 = ((x2293%x2294)&(x2295<<x2296));

	if (t43 != 4294963200U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2309 = UINT64_MAX;
	volatile int8_t x2310 = INT8_MIN;
	uint32_t x2312 = 23U;

	t44 = ((x2309%x2310)&(x2311<<x2312));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2350 = INT32_MIN;
	static uint8_t x2351 = UINT8_MAX;
	uint8_t x2352 = 3U;
	int32_t t45 = -297631072;

	t45 = ((x2349%x2350)&(x2351<<x2352));

	if (t45 != 1920) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2377 = -3169LL;
	uint64_t x2378 = UINT64_MAX;
	uint16_t x2379 = 319U;
	volatile uint64_t x2380 = 3LLU;
	uint64_t t46 = 7234917700339359LLU;

	t46 = ((x2377%x2378)&(x2379<<x2380));

	if (t46 != 408LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2473 = 3U;
	volatile uint16_t x2474 = UINT16_MAX;
	uint64_t x2475 = UINT64_MAX;
	uint32_t x2476 = 63U;
	uint64_t t47 = 255LLU;

	t47 = ((x2473%x2474)&(x2475<<x2476));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x2501 = 7602633U;
	volatile uint8_t x2502 = 1U;
	uint64_t x2504 = 0LLU;
	uint32_t t48 = 90U;

	t48 = ((x2501%x2502)&(x2503<<x2504));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2513 = -2;
	volatile uint32_t x2514 = UINT32_MAX;
	uint32_t x2515 = UINT32_MAX;
	uint8_t x2516 = 1U;
	uint32_t t49 = 2U;

	t49 = ((x2513%x2514)&(x2515<<x2516));

	if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2521 = 1137911;
	int64_t x2522 = INT64_MIN;
	uint8_t x2523 = UINT8_MAX;
	static int64_t t50 = -12732877891LL;

	t50 = ((x2521%x2522)&(x2523<<x2524));

	if (t50 != 1264LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x2713 = 628083U;
	volatile uint16_t x2714 = UINT16_MAX;
	uint16_t x2715 = UINT16_MAX;
	volatile int32_t x2716 = 3;
	uint32_t t51 = 372470649U;

	t51 = ((x2713%x2714)&(x2715<<x2716));

	if (t51 != 38264U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x2750 = 10;
	int8_t x2751 = 1;
	int64_t x2752 = 3LL;
	volatile int32_t t52 = 7;

	t52 = ((x2749%x2750)&(x2751<<x2752));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2782 = 3U;
	uint16_t x2783 = 940U;
	static int8_t x2784 = 0;

	t53 = ((x2781%x2782)&(x2783<<x2784));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2850 = -1;
	static uint32_t x2851 = UINT32_MAX;
	volatile int64_t x2852 = 8LL;
	int64_t t54 = -11512869LL;

	t54 = ((x2849%x2850)&(x2851<<x2852));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2901 = INT16_MIN;
	int16_t x2902 = -1;
	volatile uint8_t x2903 = 56U;
	uint8_t x2904 = 5U;
	int32_t t55 = 56081803;

	t55 = ((x2901%x2902)&(x2903<<x2904));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2909 = 2869344;
	int16_t x2910 = INT16_MIN;
	uint8_t x2911 = 0U;
	uint8_t x2912 = 1U;
	volatile int32_t t56 = 2749;

	t56 = ((x2909%x2910)&(x2911<<x2912));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2933 = INT32_MIN;
	static int32_t x2934 = -9;
	static volatile int16_t x2935 = INT16_MAX;
	uint8_t x2936 = 0U;
	static int32_t t57 = 20;

	t57 = ((x2933%x2934)&(x2935<<x2936));

	if (t57 != 32766) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2937 = 51U;
	uint8_t x2938 = 13U;
	static volatile int16_t x2939 = INT16_MAX;
	int8_t x2940 = 1;
	volatile int32_t t58 = 87019703;

	t58 = ((x2937%x2938)&(x2939<<x2940));

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x2977 = 3U;
	int8_t x2979 = INT8_MAX;
	uint8_t x2980 = 2U;
	int32_t t59 = 448152;

	t59 = ((x2977%x2978)&(x2979<<x2980));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3058 = 185U;
	volatile int32_t x3059 = 0;
	uint16_t x3060 = 5U;
	volatile uint32_t t60 = 386711U;

	t60 = ((x3057%x3058)&(x3059<<x3060));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3121 = -1;
	volatile int32_t x3122 = INT32_MIN;
	uint8_t x3123 = 3U;
	int8_t x3124 = 1;
	volatile int32_t t61 = -258;

	t61 = ((x3121%x3122)&(x3123<<x3124));

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3157 = INT32_MIN;
	int16_t x3158 = -1950;
	uint16_t x3159 = 4762U;
	int8_t x3160 = 3;
	static volatile int32_t t62 = 59157315;

	t62 = ((x3157%x3158)&(x3159<<x3160));

	if (t62 != 37056) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3229 = INT32_MIN;
	int64_t x3230 = -1123901780010736LL;
	volatile uint64_t x3231 = 1314793692203380804LLU;
	int8_t x3232 = 0;
	uint64_t t63 = 823905556993206LLU;

	t63 = ((x3229%x3230)&(x3231<<x3232));

	if (t63 != 1314793691654651904LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3255 = 0;
	int32_t t64 = 12;

	t64 = ((x3253%x3254)&(x3255<<x3256));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3258 = UINT8_MAX;
	uint16_t x3259 = UINT16_MAX;
	uint8_t x3260 = 0U;

	t65 = ((x3257%x3258)&(x3259<<x3260));

	if (t65 != 65408LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3285 = INT32_MIN;
	volatile int16_t x3286 = -1;
	int16_t x3288 = 4;
	static volatile uint64_t t66 = 236140714432LLU;

	t66 = ((x3285%x3286)&(x3287<<x3288));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3385 = 228397689LLU;
	volatile uint64_t x3386 = 7770957958072078229LLU;
	static uint8_t x3387 = UINT8_MAX;
	static int8_t x3388 = 2;
	volatile uint64_t t67 = 634629708LLU;

	t67 = ((x3385%x3386)&(x3387<<x3388));

	if (t67 != 632LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3397 = 950U;
	int64_t x3398 = -37765946LL;
	uint32_t x3399 = 1U;
	static uint8_t x3400 = 2U;

	t68 = ((x3397%x3398)&(x3399<<x3400));

	if (t68 != 4LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x3421 = UINT16_MAX;
	int64_t x3422 = INT64_MAX;
	static uint64_t x3423 = 6757900129598361268LLU;
	static int8_t x3424 = 12;
	static uint64_t t69 = 491370946006LLU;

	t69 = ((x3421%x3422)&(x3423<<x3424));

	if (t69 != 16384LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3425 = -12288;
	int32_t x3426 = INT32_MIN;
	uint64_t x3427 = UINT64_MAX;
	static uint8_t x3428 = 1U;
	uint64_t t70 = 120041LLU;

	t70 = ((x3425%x3426)&(x3427<<x3428));

	if (t70 != 18446744073709539328LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3469 = INT8_MIN;
	int8_t x3470 = -1;
	uint16_t x3471 = 1577U;
	volatile int32_t x3472 = 7;
	volatile int32_t t71 = 5;

	t71 = ((x3469%x3470)&(x3471<<x3472));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3481 = 86674414U;
	int16_t x3482 = -4271;
	static uint32_t x3483 = 41U;
	volatile uint32_t t72 = 5634U;

	t72 = ((x3481%x3482)&(x3483<<x3484));

	if (t72 != 40U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3517 = INT32_MAX;
	int16_t x3518 = -12;
	volatile int8_t x3519 = 0;
	static uint8_t x3520 = 31U;

	t73 = ((x3517%x3518)&(x3519<<x3520));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x3533 = INT16_MAX;
	volatile uint8_t x3534 = 25U;
	uint8_t x3535 = UINT8_MAX;
	volatile int16_t x3536 = 2;
	volatile int32_t t74 = 57203;

	t74 = ((x3533%x3534)&(x3535<<x3536));

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x3621 = -144292880;
	int8_t x3622 = INT8_MIN;
	int32_t x3623 = 44456159;
	uint8_t x3624 = 0U;
	int32_t t75 = -6975;

	t75 = ((x3621%x3622)&(x3623<<x3624));

	if (t75 != 44456144) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3742 = INT64_MIN;
	volatile uint16_t x3743 = 1U;
	int64_t t76 = 1647LL;

	t76 = ((x3741%x3742)&(x3743<<x3744));

	if (t76 != 32LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x3783 = 35408924U;

	t77 = ((x3781%x3782)&(x3783<<x3784));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3793 = INT8_MAX;
	static int8_t x3794 = -1;
	int16_t x3795 = INT16_MAX;
	volatile int32_t t78 = -1026332514;

	t78 = ((x3793%x3794)&(x3795<<x3796));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3899 = INT8_MAX;
	static volatile int32_t t79 = -31;

	t79 = ((x3897%x3898)&(x3899<<x3900));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3973 = 0U;
	static uint16_t x3974 = 26141U;
	uint32_t t80 = 4257U;

	t80 = ((x3973%x3974)&(x3975<<x3976));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4001 = INT64_MIN;
	uint16_t x4004 = 2U;
	uint64_t t81 = 28259385224567LLU;

	t81 = ((x4001%x4002)&(x4003<<x4004));

	if (t81 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x4154 = -14937432LL;
	uint64_t x4156 = 1LLU;

	t82 = ((x4153%x4154)&(x4155<<x4156));

	if (t82 != 3656LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4157 = INT8_MIN;
	uint32_t x4159 = UINT32_MAX;
	static int16_t x4160 = 1;
	volatile uint32_t t83 = 1920U;

	t83 = ((x4157%x4158)&(x4159<<x4160));

	if (t83 != 4294967276U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4165 = 99886953196589926LLU;
	uint64_t x4167 = UINT64_MAX;
	uint64_t t84 = 751LLU;

	t84 = ((x4165%x4166)&(x4167<<x4168));

	if (t84 != 99886953196584960LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4233 = INT32_MIN;
	int8_t x4234 = INT8_MIN;
	static uint8_t x4235 = UINT8_MAX;

	t85 = ((x4233%x4234)&(x4235<<x4236));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x4310 = 18U;
	volatile uint32_t t86 = 387U;

	t86 = ((x4309%x4310)&(x4311<<x4312));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4433 = -1;
	int32_t x4434 = -1;
	uint8_t x4435 = UINT8_MAX;
	uint16_t x4436 = 1U;
	volatile int32_t t87 = -9351479;

	t87 = ((x4433%x4434)&(x4435<<x4436));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4442 = INT32_MIN;
	volatile uint32_t x4443 = 76867U;
	static uint8_t x4444 = 0U;
	static uint32_t t88 = 1439U;

	t88 = ((x4441%x4442)&(x4443<<x4444));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4449 = 19499U;
	int32_t x4450 = INT32_MIN;
	volatile int32_t t89 = 38315;

	t89 = ((x4449%x4450)&(x4451<<x4452));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4525 = UINT8_MAX;
	int8_t x4526 = INT8_MIN;
	uint32_t x4527 = 231U;
	static int16_t x4528 = 1;
	uint32_t t90 = 931818297U;

	t90 = ((x4525%x4526)&(x4527<<x4528));

	if (t90 != 78U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4669 = 1U;
	volatile uint8_t x4671 = 2U;
	int64_t t91 = -1313LL;

	t91 = ((x4669%x4670)&(x4671<<x4672));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4713 = -1;
	volatile int8_t x4714 = INT8_MIN;
	static int8_t x4716 = 5;
	int32_t t92 = 129;

	t92 = ((x4713%x4714)&(x4715<<x4716));

	if (t92 != 1048544) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x4729 = UINT32_MAX;
	uint32_t x4731 = UINT32_MAX;
	uint32_t x4732 = 6U;
	static volatile uint32_t t93 = 184567743U;

	t93 = ((x4729%x4730)&(x4731<<x4732));

	if (t93 != 64526016U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x4753 = INT32_MIN;
	int32_t x4755 = INT32_MAX;
	int32_t x4756 = 0;
	volatile uint32_t t94 = 529811657U;

	t94 = ((x4753%x4754)&(x4755<<x4756));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x4801 = 17U;
	volatile uint16_t x4802 = 24352U;
	static int16_t x4803 = 5097;
	volatile int32_t t95 = -1;

	t95 = ((x4801%x4802)&(x4803<<x4804));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x4821 = -1;
	static int8_t x4822 = INT8_MIN;
	volatile uint8_t x4823 = 2U;
	volatile uint64_t x4824 = 0LLU;
	volatile int32_t t96 = 2;

	t96 = ((x4821%x4822)&(x4823<<x4824));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4886 = UINT64_MAX;
	int32_t x4887 = 81;
	uint8_t x4888 = 9U;
	static uint64_t t97 = 197180LLU;

	t97 = ((x4885%x4886)&(x4887<<x4888));

	if (t97 != 32768LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x4897 = 0;
	uint16_t x4898 = 3U;
	uint16_t x4899 = UINT16_MAX;
	int64_t x4900 = 3LL;
	int32_t t98 = 0;

	t98 = ((x4897%x4898)&(x4899<<x4900));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4913 = UINT32_MAX;
	static int16_t x4916 = 4;
	uint32_t t99 = 55500004U;

	t99 = ((x4913%x4914)&(x4915<<x4916));

	if (t99 != 0U) { NG(); } else { ; }
	
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

