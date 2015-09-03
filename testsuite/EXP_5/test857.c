#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x140 = -49;
volatile int32_t t4 = -177;
volatile uint32_t t5 = UINT32_MAX;
uint16_t x250 = 726U;
int64_t x256 = INT64_MIN;
uint64_t t7 = 12372552099LLU;
int64_t x348 = INT64_MIN;
uint64_t x461 = UINT64_MAX;
uint8_t x463 = 16U;
volatile uint64_t t10 = UINT64_MAX;
int16_t x491 = 0;
uint16_t x671 = 0U;
uint8_t x731 = 3U;
static volatile uint32_t x842 = UINT32_MAX;
volatile uint64_t x858 = 101054280101659052LLU;
int32_t x864 = -21026;
uint32_t x870 = UINT32_MAX;
int32_t x951 = 4;
uint64_t x1074 = UINT64_MAX;
static int32_t x1075 = 3;
volatile uint64_t t25 = 124816263035LLU;
uint32_t x1217 = 1140865U;
volatile uint8_t x1378 = UINT8_MAX;
uint64_t t32 = 111687202886091753LLU;
static uint16_t x1670 = 34U;
static uint64_t t33 = UINT64_MAX;
volatile uint16_t x1719 = 3U;
static int16_t x1720 = 49;
uint32_t x1817 = 404U;
static uint32_t x1873 = UINT32_MAX;
int8_t x1905 = -3;
uint64_t x1986 = 36LLU;
static uint64_t t41 = 8528759LLU;
static uint64_t x2073 = 87852563LLU;
uint16_t x2075 = 12U;
uint16_t x2202 = 18021U;
uint64_t x2203 = 1LLU;
int8_t x2378 = INT8_MAX;
uint16_t x2394 = UINT16_MAX;
int64_t t46 = 83LL;
uint8_t x2443 = 1U;
static uint8_t x2473 = UINT8_MAX;
static uint64_t x2474 = 101422LLU;
static uint64_t x2574 = 98826554LLU;
uint64_t t50 = 85435241159LLU;
int32_t x2857 = -58951;
static uint16_t x2858 = UINT16_MAX;
int64_t t55 = -32204549LL;
int64_t x3056 = -1LL;
volatile int64_t t56 = -33798751399467540LL;
uint16_t x3120 = UINT16_MAX;
static volatile uint64_t t57 = 268801LLU;
int32_t t60 = -329;
uint16_t x3349 = 2299U;
int32_t x3409 = -1;
uint16_t x3410 = 103U;
int16_t x3484 = -1;
int64_t x3568 = -1529552078233062812LL;
uint8_t x3594 = 6U;
uint64_t x3717 = 110621246919LLU;
int16_t x3769 = INT16_MIN;
int32_t x3798 = INT32_MAX;
uint64_t x4009 = UINT64_MAX;
int64_t x4132 = -1LL;
int64_t x4264 = INT64_MIN;
static int64_t x4288 = INT64_MIN;
static volatile int64_t x4373 = INT64_MAX;
int8_t x4449 = INT8_MAX;
volatile uint16_t x4450 = UINT16_MAX;
int8_t x4665 = INT8_MAX;
static uint16_t x4690 = 6067U;
uint32_t x4691 = 1U;
volatile int64_t t82 = -2549249577283LL;
volatile uint8_t x4803 = 1U;
int32_t x4804 = -64260620;
volatile uint8_t x4974 = UINT8_MAX;
uint64_t x4975 = 13LLU;
static uint8_t x5009 = 0U;
uint64_t x5010 = 2016139473098LLU;
int8_t x5016 = INT8_MAX;
static uint32_t x5178 = UINT32_MAX;
volatile uint8_t x5189 = 104U;
uint8_t x5341 = UINT8_MAX;
int8_t x5342 = INT8_MAX;
static int16_t x5359 = 0;
volatile uint8_t x5387 = 19U;
uint32_t x5388 = UINT32_MAX;
uint8_t x5541 = 36U;
int8_t x5555 = 0;
uint32_t t97 = 130736U;
uint16_t x5579 = 2U;
volatile int32_t t98 = 7551;


void f0(void) {
	volatile int8_t x5 = -63;
	volatile int64_t x6 = 40965048700LL;
	volatile uint16_t x7 = 2U;
	static volatile int8_t x8 = -1;
	volatile int64_t t0 = -3474781263802LL;

	t0 = (x5|((x6<<x7)+x8));

	if (t0 != -17LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x37 = 5974610472882LLU;
	int16_t x38 = INT16_MAX;
	int8_t x39 = 12;
	uint32_t x40 = 4757U;
	uint64_t t1 = 15614533466LLU;

	t1 = (x37|((x38<<x39)+x40));

	if (t1 != 5974744690615LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x137 = 2U;
	volatile uint8_t x138 = 39U;
	uint8_t x139 = 2U;
	volatile uint32_t t2 = 87U;

	t2 = (x137|((x138<<x139)+x140));

	if (t2 != 107U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x173 = 3920U;
	int16_t x174 = 445;
	uint64_t x175 = 3LLU;
	uint64_t x176 = 5619136940LLU;
	static volatile uint64_t t3 = 0LLU;

	t3 = (x173|((x174<<x175)+x176));

	if (t3 != 5619142612LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x225 = UINT16_MAX;
	uint8_t x226 = UINT8_MAX;
	volatile uint32_t x227 = 0U;
	int32_t x228 = -25;

	t4 = (x225|((x226<<x227)+x228));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x241 = UINT32_MAX;
	static uint32_t x242 = UINT32_MAX;
	uint8_t x243 = 6U;
	static int16_t x244 = INT16_MIN;

	t5 = (x241|((x242<<x243)+x244));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x251 = 6U;
	uint32_t x252 = 13U;
	volatile uint32_t t6 = 416U;

	t6 = (x249|((x250<<x251)+x252));

	if (t6 != 4294948237U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x253 = 228734810504470706LLU;
	int32_t x254 = 26;
	uint8_t x255 = 10U;

	t7 = (x253|((x254<<x255)+x256));

	if (t7 != 9452106847359264946LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x301 = -1;
	int16_t x302 = INT16_MAX;
	static int16_t x303 = 0;
	static int16_t x304 = INT16_MIN;
	int32_t t8 = 1237985;

	t8 = (x301|((x302<<x303)+x304));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x345 = -1;
	volatile uint64_t x346 = UINT64_MAX;
	uint16_t x347 = 43U;
	uint64_t t9 = UINT64_MAX;

	t9 = (x345|((x346<<x347)+x348));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x462 = INT8_MAX;
	static int16_t x464 = 7;

	t10 = (x461|((x462<<x463)+x464));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x489 = 50LLU;
	int16_t x490 = 160;
	static int32_t x492 = INT32_MIN;
	uint64_t t11 = 193436737801LLU;

	t11 = (x489|((x490<<x491)+x492));

	if (t11 != 18446744071562068146LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x493 = UINT64_MAX;
	int16_t x494 = INT16_MAX;
	uint8_t x495 = 5U;
	int16_t x496 = INT16_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x493|((x494<<x495)+x496));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x557 = UINT16_MAX;
	uint32_t x558 = 51608658U;
	int8_t x559 = 10;
	int64_t x560 = INT64_MIN;
	volatile int64_t t13 = -262202366828574737LL;

	t13 = (x557|((x558<<x559)+x560));

	if (t13 != -9223372035547070465LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x669 = INT32_MAX;
	int32_t x670 = INT32_MAX;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t14 = 33993207LLU;

	t14 = (x669|((x670<<x671)+x672));

	if (t14 != 2147483647LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x673 = UINT8_MAX;
	uint64_t x674 = 42404315608987914LLU;
	uint8_t x675 = 7U;
	int8_t x676 = 0;
	volatile uint64_t t15 = 9583791535219274LLU;

	t15 = (x673|((x674<<x675)+x676));

	if (t15 != 5427752397950453247LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x729 = 6783LLU;
	uint8_t x730 = UINT8_MAX;
	int8_t x732 = INT8_MIN;
	uint64_t t16 = 5678938273109114847LLU;

	t16 = (x729|((x730<<x731)+x732));

	if (t16 != 8063LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x825 = INT64_MIN;
	uint16_t x826 = 4823U;
	uint16_t x827 = 16U;
	int32_t x828 = INT32_MIN;
	static int64_t t17 = 25135147815LL;

	t17 = (x825|((x826<<x827)+x828));

	if (t17 != -1831403520LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x841 = INT64_MIN;
	static uint8_t x843 = 0U;
	volatile int32_t x844 = INT32_MAX;
	volatile int64_t t18 = -2975202LL;

	t18 = (x841|((x842<<x843)+x844));

	if (t18 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x857 = UINT64_MAX;
	volatile uint64_t x859 = 8LLU;
	static uint32_t x860 = 121746U;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (x857|((x858<<x859)+x860));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x861 = 8774602646173LLU;
	uint64_t x862 = 65605427952783227LLU;
	int32_t x863 = 10;
	static volatile uint64_t t20 = 102137LLU;

	t20 = (x861|((x862<<x863)+x864));

	if (t20 != 11839734704746003423LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x869 = -68LL;
	uint8_t x871 = 0U;
	uint16_t x872 = UINT16_MAX;
	volatile int64_t t21 = -105739517945669LL;

	t21 = (x869|((x870<<x871)+x872));

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x949 = -1LL;
	volatile uint32_t x950 = 502713664U;
	uint16_t x952 = 3U;
	int64_t t22 = 195873673LL;

	t22 = (x949|((x950<<x951)+x952));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x965 = INT8_MAX;
	uint64_t x966 = 112LLU;
	static uint8_t x967 = 2U;
	uint16_t x968 = UINT16_MAX;
	uint64_t t23 = 743746783LLU;

	t23 = (x965|((x966<<x967)+x968));

	if (t23 != 66047LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1073 = -16486;
	static int64_t x1076 = INT64_MIN;
	uint64_t t24 = 30486170LLU;

	t24 = (x1073|((x1074<<x1075)+x1076));

	if (t24 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1117 = INT64_MIN;
	uint64_t x1118 = 10842LLU;
	int32_t x1119 = 10;
	uint8_t x1120 = 74U;

	t25 = (x1117|((x1118<<x1119)+x1120));

	if (t25 != 9223372036865878090LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1141 = INT64_MAX;
	uint16_t x1142 = 51U;
	static uint16_t x1143 = 3U;
	static int8_t x1144 = INT8_MIN;
	int64_t t26 = INT64_MAX;

	t26 = (x1141|((x1142<<x1143)+x1144));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1218 = 7U;
	static uint16_t x1219 = 4U;
	static uint64_t x1220 = 1866719443118LLU;
	static uint64_t t27 = 69122LLU;

	t27 = (x1217|((x1218<<x1219)+x1220));

	if (t27 != 1866720573855LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1233 = -1;
	static uint16_t x1234 = 113U;
	uint8_t x1235 = 1U;
	int32_t x1236 = 24802;
	volatile int32_t t28 = 1911405;

	t28 = (x1233|((x1234<<x1235)+x1236));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1265 = -9;
	int16_t x1266 = 8813;
	static int16_t x1267 = 5;
	uint8_t x1268 = UINT8_MAX;
	static volatile int32_t t29 = -57798880;

	t29 = (x1265|((x1266<<x1267)+x1268));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1297 = -1;
	uint16_t x1298 = 13013U;
	int32_t x1299 = 4;
	static uint64_t x1300 = 81338462805280LLU;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x1297|((x1298<<x1299)+x1300));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1377 = UINT32_MAX;
	int16_t x1379 = 1;
	static uint32_t x1380 = UINT32_MAX;
	uint32_t t31 = UINT32_MAX;

	t31 = (x1377|((x1378<<x1379)+x1380));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1661 = 42629LLU;
	uint8_t x1662 = 1U;
	uint32_t x1663 = 3U;
	int8_t x1664 = INT8_MAX;

	t32 = (x1661|((x1662<<x1663)+x1664));

	if (t32 != 42631LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1669 = UINT64_MAX;
	int8_t x1671 = 10;
	int32_t x1672 = 199140357;

	t33 = (x1669|((x1670<<x1671)+x1672));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1717 = -9444;
	uint64_t x1718 = 117808859LLU;
	static uint64_t t34 = 7557726647LLU;

	t34 = (x1717|((x1718<<x1719)+x1720));

	if (t34 != 18446744073709551389LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1757 = -2813;
	uint32_t x1758 = UINT32_MAX;
	int8_t x1759 = 2;
	volatile int8_t x1760 = 49;
	volatile uint32_t t35 = 0U;

	t35 = (x1757|((x1758<<x1759)+x1760));

	if (t35 != 4294964527U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1809 = 16U;
	uint32_t x1810 = 337216589U;
	volatile int32_t x1811 = 7;
	volatile int32_t x1812 = -1;
	volatile uint32_t t36 = 11192U;

	t36 = (x1809|((x1810<<x1811)+x1812));

	if (t36 != 214050431U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1818 = 84U;
	int64_t x1819 = 4LL;
	int64_t x1820 = -302646361500LL;
	volatile int64_t t37 = -99547572728271LL;

	t37 = (x1817|((x1818<<x1819)+x1820));

	if (t37 != -302646360140LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1874 = 28LLU;
	uint8_t x1875 = 1U;
	volatile int8_t x1876 = -1;
	static uint64_t t38 = 533302141864711519LLU;

	t38 = (x1873|((x1874<<x1875)+x1876));

	if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1889 = 9607213071LLU;
	int16_t x1890 = 0;
	uint16_t x1891 = 11U;
	volatile int8_t x1892 = 1;
	uint64_t t39 = 3LLU;

	t39 = (x1889|((x1890<<x1891)+x1892));

	if (t39 != 9607213071LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1906 = 1U;
	static int8_t x1907 = 0;
	int32_t x1908 = -1;
	int32_t t40 = 755656;

	t40 = (x1905|((x1906<<x1907)+x1908));

	if (t40 != -3) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1985 = 7U;
	int16_t x1987 = 0;
	static int16_t x1988 = INT16_MIN;

	t41 = (x1985|((x1986<<x1987)+x1988));

	if (t41 != 18446744073709518887LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2074 = UINT8_MAX;
	int64_t x2076 = -1LL;
	uint64_t t42 = 29715471817LLU;

	t42 = (x2073|((x2074<<x2075)+x2076));

	if (t42 != 88076287LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2201 = INT8_MAX;
	uint16_t x2204 = 1U;
	static volatile int32_t t43 = 924785;

	t43 = (x2201|((x2202<<x2203)+x2204));

	if (t43 != 36095) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2341 = INT64_MIN;
	uint16_t x2342 = 0U;
	int32_t x2343 = 11;
	uint64_t x2344 = 7LLU;
	volatile uint64_t t44 = 30LLU;

	t44 = (x2341|((x2342<<x2343)+x2344));

	if (t44 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2377 = INT16_MIN;
	static volatile int8_t x2379 = 6;
	volatile int64_t x2380 = INT64_MIN;
	int64_t t45 = -123LL;

	t45 = (x2377|((x2378<<x2379)+x2380));

	if (t45 != -24640LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2393 = 106901;
	volatile int8_t x2395 = 11;
	int64_t x2396 = INT64_MIN;

	t46 = (x2393|((x2394<<x2395)+x2396));

	if (t46 != -9223372036720559723LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2425 = INT64_MAX;
	static int16_t x2426 = 2554;
	volatile int8_t x2427 = 7;
	uint32_t x2428 = 5533368U;
	int64_t t47 = INT64_MAX;

	t47 = (x2425|((x2426<<x2427)+x2428));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2441 = 11042LLU;
	volatile uint32_t x2442 = 14805055U;
	volatile int8_t x2444 = INT8_MAX;
	volatile uint64_t t48 = 739LLU;

	t48 = (x2441|((x2442<<x2443)+x2444));

	if (t48 != 29621247LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x2475 = 1U;
	static int64_t x2476 = 45431484707640LL;
	static volatile uint64_t t49 = 871041951LLU;

	t49 = (x2473|((x2474<<x2475)+x2476));

	if (t49 != 45431484910591LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2573 = 415U;
	static uint16_t x2575 = 3U;
	volatile int8_t x2576 = INT8_MAX;

	t50 = (x2573|((x2574<<x2575)+x2576));

	if (t50 != 790612959LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2757 = -2036003442792LL;
	uint64_t x2758 = 497991062034934002LLU;
	int8_t x2759 = 19;
	uint8_t x2760 = 78U;
	uint64_t t51 = 1LLU;

	t51 = (x2757|((x2758<<x2759)+x2760));

	if (t51 != 18446743455095648222LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2781 = UINT32_MAX;
	volatile uint8_t x2782 = 5U;
	static volatile int32_t x2783 = 0;
	int64_t x2784 = -1LL;
	static int64_t t52 = -218359936761894LL;

	t52 = (x2781|((x2782<<x2783)+x2784));

	if (t52 != 4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2859 = 1;
	volatile int64_t x2860 = 60519413335LL;
	static volatile int64_t t53 = -542645LL;

	t53 = (x2857|((x2858<<x2859)+x2860));

	if (t53 != -3LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2953 = 178U;
	static volatile uint64_t x2954 = UINT64_MAX;
	int64_t x2955 = 1LL;
	int32_t x2956 = INT32_MIN;
	uint64_t t54 = 27738LLU;

	t54 = (x2953|((x2954<<x2955)+x2956));

	if (t54 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3049 = 271466329LL;
	uint16_t x3050 = 39U;
	uint32_t x3051 = 7U;
	int8_t x3052 = -1;

	t55 = (x3049|((x3050<<x3051)+x3052));

	if (t55 != 271466367LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3053 = UINT16_MAX;
	volatile uint32_t x3054 = 1U;
	volatile uint8_t x3055 = 7U;

	t56 = (x3053|((x3054<<x3055)+x3056));

	if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3117 = -64693262;
	static uint64_t x3118 = 84688298LLU;
	static uint16_t x3119 = 1U;

	t57 = (x3117|((x3118<<x3119)+x3120));

	if (t57 != 18446744073680059379LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3145 = -1;
	uint64_t x3146 = 7246709957LLU;
	volatile uint8_t x3147 = 12U;
	static uint16_t x3148 = UINT16_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (x3145|((x3146<<x3147)+x3148));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x3213 = 48532355234LLU;
	int16_t x3214 = 31;
	static volatile uint32_t x3215 = 7U;
	uint16_t x3216 = 172U;
	uint64_t t59 = 3851LLU;

	t59 = (x3213|((x3214<<x3215)+x3216));

	if (t59 != 48532355246LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3249 = -1;
	volatile uint8_t x3250 = UINT8_MAX;
	uint16_t x3251 = 1U;
	int16_t x3252 = INT16_MIN;

	t60 = (x3249|((x3250<<x3251)+x3252));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3313 = 48896;
	static int8_t x3314 = 1;
	uint8_t x3315 = 1U;
	int16_t x3316 = INT16_MAX;
	volatile int32_t t61 = -1031;

	t61 = (x3313|((x3314<<x3315)+x3316));

	if (t61 != 48897) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3350 = 297761152924774306LLU;
	uint8_t x3351 = 1U;
	static int64_t x3352 = -52670783269300173LL;
	volatile uint64_t t62 = 289028525LLU;

	t62 = (x3349|((x3350<<x3351)+x3352));

	if (t62 != 542851522580250623LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x3411 = 8U;
	int16_t x3412 = -1;
	int32_t t63 = 0;

	t63 = (x3409|((x3410<<x3411)+x3412));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3481 = INT64_MAX;
	static int32_t x3482 = 777933;
	uint64_t x3483 = 1LLU;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x3481|((x3482<<x3483)+x3484));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3565 = -709;
	static uint16_t x3566 = UINT16_MAX;
	int8_t x3567 = 1;
	int64_t t65 = 129LL;

	t65 = (x3565|((x3566<<x3567)+x3568));

	if (t65 != -133LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x3593 = UINT32_MAX;
	uint8_t x3595 = 1U;
	int8_t x3596 = 11;
	uint32_t t66 = UINT32_MAX;

	t66 = (x3593|((x3594<<x3595)+x3596));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3653 = -19;
	volatile int8_t x3654 = 1;
	int16_t x3655 = 0;
	static int16_t x3656 = INT16_MAX;
	volatile int32_t t67 = 5816;

	t67 = (x3653|((x3654<<x3655)+x3656));

	if (t67 != -19) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x3709 = 858LL;
	uint32_t x3710 = 460U;
	uint16_t x3711 = 2U;
	int32_t x3712 = -1;
	int64_t t68 = 492125252159LL;

	t68 = (x3709|((x3710<<x3711)+x3712));

	if (t68 != 1919LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3718 = UINT8_MAX;
	uint8_t x3719 = 6U;
	int64_t x3720 = INT64_MIN;
	volatile uint64_t t69 = 5923370163146109431LLU;

	t69 = (x3717|((x3718<<x3719)+x3720));

	if (t69 != 9223372147476037575LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3770 = 3144;
	uint16_t x3771 = 8U;
	volatile int64_t x3772 = INT64_MIN;
	int64_t t70 = -7748LL;

	t70 = (x3769|((x3770<<x3771)+x3772));

	if (t70 != -14336LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3797 = INT64_MIN;
	int8_t x3799 = 0;
	int16_t x3800 = INT16_MIN;
	volatile int64_t t71 = 97269127LL;

	t71 = (x3797|((x3798<<x3799)+x3800));

	if (t71 != -9223372034707324929LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3945 = INT16_MIN;
	volatile uint16_t x3946 = 1U;
	volatile int8_t x3947 = 7;
	int16_t x3948 = INT16_MAX;
	int32_t t72 = 77;

	t72 = (x3945|((x3946<<x3947)+x3948));

	if (t72 != -32641) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x4010 = 60;
	uint8_t x4011 = 1U;
	int16_t x4012 = -17;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x4009|((x4010<<x4011)+x4012));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4057 = 18U;
	static uint32_t x4058 = 3031U;
	uint8_t x4059 = 1U;
	int64_t x4060 = INT64_MIN;
	volatile int64_t t74 = 33824000291449100LL;

	t74 = (x4057|((x4058<<x4059)+x4060));

	if (t74 != -9223372036854769730LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4129 = INT32_MIN;
	int16_t x4130 = 118;
	int16_t x4131 = 1;
	static int64_t t75 = -28346702391LL;

	t75 = (x4129|((x4130<<x4131)+x4132));

	if (t75 != -2147483413LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4261 = INT8_MIN;
	int64_t x4262 = 44638LL;
	volatile int16_t x4263 = 3;
	volatile int64_t t76 = -3966412LL;

	t76 = (x4261|((x4262<<x4263)+x4264));

	if (t76 != -16LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x4285 = -74;
	uint64_t x4286 = 4156565961229471708LLU;
	volatile uint64_t x4287 = 9LLU;
	uint64_t t77 = 762311LLU;

	t77 = (x4285|((x4286<<x4287)+x4288));

	if (t77 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x4374 = 2;
	uint8_t x4375 = 1U;
	uint8_t x4376 = 13U;
	volatile int64_t t78 = INT64_MAX;

	t78 = (x4373|((x4374<<x4375)+x4376));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4409 = INT32_MAX;
	int16_t x4410 = INT16_MAX;
	static int16_t x4411 = 1;
	int64_t x4412 = -849553797638977392LL;
	int64_t t79 = 2744984725784392LL;

	t79 = (x4409|((x4410<<x4411)+x4412));

	if (t79 != -849553797540741121LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4451 = 13U;
	int16_t x4452 = -292;
	volatile int32_t t80 = 16;

	t80 = (x4449|((x4450<<x4451)+x4452));

	if (t80 != 536862463) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4666 = 119761U;
	static int8_t x4667 = 6;
	int32_t x4668 = INT32_MIN;
	uint32_t t81 = 2923056U;

	t81 = (x4665|((x4666<<x4667)+x4668));

	if (t81 != 2155148415U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4689 = -1LL;
	int64_t x4692 = INT64_MIN;

	t82 = (x4689|((x4690<<x4691)+x4692));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4725 = -520320700;
	uint64_t x4726 = 500422266033835LLU;
	volatile uint8_t x4727 = 6U;
	volatile uint32_t x4728 = 10686U;
	uint64_t t83 = 3414LLU;

	t83 = (x4725|((x4726<<x4727)+x4728));

	if (t83 != 18446744073608748414LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4801 = INT32_MAX;
	int8_t x4802 = 0;
	int32_t t84 = 33988;

	t84 = (x4801|((x4802<<x4803)+x4804));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4941 = UINT32_MAX;
	uint32_t x4942 = 2817U;
	static uint8_t x4943 = 5U;
	uint64_t x4944 = 1LLU;
	static volatile uint64_t t85 = 488404097763655127LLU;

	t85 = (x4941|((x4942<<x4943)+x4944));

	if (t85 != 4294967295LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4973 = -1LL;
	int32_t x4976 = -1;
	volatile int64_t t86 = 261630296LL;

	t86 = (x4973|((x4974<<x4975)+x4976));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4993 = 3817;
	uint8_t x4994 = UINT8_MAX;
	int32_t x4995 = 1;
	static uint8_t x4996 = UINT8_MAX;
	volatile int32_t t87 = 1975474;

	t87 = (x4993|((x4994<<x4995)+x4996));

	if (t87 != 3837) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5011 = 1U;
	int16_t x5012 = 1753;
	volatile uint64_t t88 = 206931839008922LLU;

	t88 = (x5009|((x5010<<x5011)+x5012));

	if (t88 != 4032278947949LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5013 = -1LL;
	volatile uint64_t x5014 = 1829232473LLU;
	int8_t x5015 = 1;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x5013|((x5014<<x5015)+x5016));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5021 = -1LL;
	uint32_t x5022 = UINT32_MAX;
	static uint16_t x5023 = 0U;
	uint32_t x5024 = 1536661U;
	int64_t t90 = 0LL;

	t90 = (x5021|((x5022<<x5023)+x5024));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5177 = INT64_MAX;
	int8_t x5179 = 0;
	static int64_t x5180 = INT64_MIN;
	int64_t t91 = -4630439806LL;

	t91 = (x5177|((x5178<<x5179)+x5180));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5190 = INT8_MAX;
	int8_t x5191 = 16;
	volatile int16_t x5192 = INT16_MIN;
	volatile int32_t t92 = -54743;

	t92 = (x5189|((x5190<<x5191)+x5192));

	if (t92 != 8290408) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5343 = 1;
	static int32_t x5344 = -1;
	volatile int32_t t93 = -32;

	t93 = (x5341|((x5342<<x5343)+x5344));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x5357 = UINT16_MAX;
	static int8_t x5358 = INT8_MAX;
	uint16_t x5360 = UINT16_MAX;
	volatile int32_t t94 = 1736;

	t94 = (x5357|((x5358<<x5359)+x5360));

	if (t94 != 131071) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5385 = 876U;
	uint16_t x5386 = 0U;
	uint32_t t95 = UINT32_MAX;

	t95 = (x5385|((x5386<<x5387)+x5388));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5542 = 19LL;
	uint8_t x5543 = 4U;
	int64_t x5544 = -2LL;
	static int64_t t96 = -540142487671345761LL;

	t96 = (x5541|((x5542<<x5543)+x5544));

	if (t96 != 302LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5553 = 28U;
	int32_t x5554 = 18889212;
	volatile int16_t x5556 = -13931;

	t97 = (x5553|((x5554<<x5555)+x5556));

	if (t97 != 18875293U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5577 = -2;
	uint16_t x5578 = 13737U;
	int16_t x5580 = -1;

	t98 = (x5577|((x5578<<x5579)+x5580));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5697 = 1059U;
	uint8_t x5698 = UINT8_MAX;
	uint8_t x5699 = 1U;
	volatile uint64_t x5700 = UINT64_MAX;
	uint64_t t99 = 176015917735703LLU;

	t99 = (x5697|((x5698<<x5699)+x5700));

	if (t99 != 1535LLU) { NG(); } else { ; }
	
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

