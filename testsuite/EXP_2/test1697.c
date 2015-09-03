#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x48 = 16U;
int16_t x103 = INT16_MIN;
static int8_t x118 = 1;
uint8_t x119 = 0U;
uint16_t x195 = 30U;
volatile uint32_t t6 = 0U;
uint64_t x254 = 1215LLU;
int16_t x346 = 148;
uint8_t x422 = 3U;
static int64_t x491 = INT64_MAX;
volatile int8_t x492 = 30;
int32_t x499 = INT32_MIN;
static int8_t x538 = 8;
static volatile int64_t t15 = -883053598584LL;
volatile uint32_t t16 = 514018489U;
int16_t x719 = 0;
uint64_t x741 = 19752047194LLU;
static int32_t x742 = 21;
int8_t x744 = 2;
volatile int8_t x749 = 4;
uint64_t x750 = 83753974640881LLU;
int64_t x811 = INT64_MIN;
static int64_t x862 = -1LL;
volatile uint64_t x918 = 249498933650326LLU;
uint64_t t23 = 19624585424721577LLU;
uint64_t x933 = 10857720804837LLU;
volatile uint64_t t24 = 61430411206578LLU;
int32_t x1007 = -1;
int32_t x1053 = INT32_MAX;
volatile uint64_t x1055 = 1631796440405730LLU;
static volatile int8_t x1074 = -1;
uint64_t x1075 = 63885848676780446LLU;
static uint16_t x1076 = 2U;
uint8_t x1204 = 7U;
int16_t x1425 = -1;
static uint16_t x1533 = 21577U;
int32_t t33 = 0;
int8_t x1765 = INT8_MAX;
int8_t x1825 = -13;
volatile int32_t t39 = 13095744;
int8_t x1974 = 6;
volatile uint32_t x1975 = 948001U;
uint32_t t40 = 2834U;
static uint8_t x1996 = 3U;
static int32_t t41 = -854;
volatile uint16_t x2090 = 77U;
volatile uint64_t x2092 = 1LLU;
int16_t x2098 = INT16_MAX;
uint8_t x2402 = 10U;
uint8_t x2564 = 0U;
uint64_t t54 = 3052346648631LLU;
volatile uint32_t x2725 = UINT32_MAX;
int64_t x2727 = 2499040186LL;
uint32_t x2744 = 26U;
volatile int8_t x2797 = 1;
volatile uint16_t x2800 = 1U;
int32_t t59 = 20705250;
uint64_t x2803 = 3275389LLU;
uint64_t x2865 = 28039453150LLU;
int8_t x2932 = 1;
uint64_t x2934 = 8793115195561LLU;
int16_t x2936 = 0;
volatile uint64_t t64 = 2595LLU;
int32_t x2981 = -1;
uint32_t x3056 = 5U;
int32_t x3059 = 206;
volatile int16_t x3060 = 11;
volatile uint64_t t67 = 2082396094461LLU;
static int16_t x3078 = INT16_MIN;
uint16_t x3141 = 6U;
static volatile int8_t x3142 = -1;
int64_t x3205 = INT64_MAX;
int8_t x3206 = INT8_MIN;
static int64_t t72 = -547940262704LL;
volatile uint64_t t73 = 2823205309217028LLU;
static uint8_t x3376 = 2U;
static uint64_t t75 = 36940LLU;
static int8_t x3591 = -49;
int32_t x3596 = 53;
uint16_t x3681 = 12U;
volatile uint64_t x3683 = 18239910836LLU;
static int8_t x3709 = 0;
uint64_t x3719 = UINT64_MAX;
static volatile uint64_t t81 = 84896338242LLU;
int32_t x3821 = -1;
uint8_t x3822 = 3U;
static uint64_t x3855 = 11474200039LLU;
volatile uint32_t t85 = 497899433U;
int16_t x3911 = -1;
static int32_t x3962 = -1;
uint8_t x4126 = 35U;
int8_t x4128 = 1;
int32_t x4154 = -1;
uint64_t x4155 = 2537585761LLU;
int32_t x4181 = INT32_MIN;
volatile int8_t x4182 = INT8_MAX;
uint8_t x4259 = 1U;
int16_t x4262 = 1;
uint16_t x4263 = UINT16_MAX;
uint8_t x4264 = 5U;


void f0(void) {
	static uint64_t x45 = UINT64_MAX;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	volatile uint64_t t0 = 16839326868LLU;

	t0 = ((x45+(x46&x47))>>x48);

	if (t0 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x49 = 29;
	int16_t x50 = 15;
	volatile int32_t x51 = 231;
	volatile uint8_t x52 = 15U;
	int32_t t1 = -64;

	t1 = ((x49+(x50&x51))>>x52);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	static uint8_t x92 = 7U;
	uint32_t t2 = 1889656005U;

	t2 = ((x89+(x90&x91))>>x92);

	if (t2 != 33554431U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x101 = 47U;
	static uint16_t x102 = UINT16_MAX;
	int8_t x104 = 1;
	int32_t t3 = -98;

	t3 = ((x101+(x102&x103))>>x104);

	if (t3 != 16407) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x120 = 26;
	int32_t t4 = -7629916;

	t4 = ((x117+(x118&x119))>>x120);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x125 = 5;
	int32_t x126 = -1;
	uint64_t x127 = 212897750677LLU;
	int8_t x128 = 49;
	volatile uint64_t t5 = 104590687LLU;

	t5 = ((x125+(x126&x127))>>x128);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x193 = 24950U;
	static uint32_t x194 = 8828305U;
	uint32_t x196 = 7U;

	t6 = ((x193+(x194&x195))>>x196);

	if (t6 != 195U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x253 = -5577;
	volatile int64_t x255 = 3640LL;
	uint8_t x256 = 1U;
	uint64_t t7 = 6424964796LLU;

	t7 = ((x253+(x254&x255))>>x256);

	if (t7 != 9223372036854773559LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x273 = -2797;
	int8_t x274 = -1;
	uint32_t x275 = 75036917U;
	static uint8_t x276 = 7U;
	uint32_t t8 = 12464U;

	t8 = ((x273+(x274&x275))>>x276);

	if (t8 != 586204U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x345 = -1LL;
	int32_t x347 = 184;
	volatile int16_t x348 = 0;
	volatile int64_t t9 = 4259556783LL;

	t9 = ((x345+(x346&x347))>>x348);

	if (t9 != 143LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x398 = UINT16_MAX;
	static uint32_t x399 = UINT32_MAX;
	uint8_t x400 = 18U;
	volatile uint32_t t10 = 65U;

	t10 = ((x397+(x398&x399))>>x400);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x421 = 2203174763465293LLU;
	int32_t x423 = 235;
	static int16_t x424 = 0;
	uint64_t t11 = 119317731288190076LLU;

	t11 = ((x421+(x422&x423))>>x424);

	if (t11 != 2203174763465296LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x489 = 3LLU;
	volatile int16_t x490 = -1;
	static uint64_t t12 = 1010358636467942LLU;

	t12 = ((x489+(x490&x491))>>x492);

	if (t12 != 8589934592LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x497 = 213U;
	volatile int32_t x498 = -14362384;
	uint8_t x500 = 4U;
	volatile uint32_t t13 = 7908U;

	t13 = ((x497+(x498&x499))>>x500);

	if (t13 != 134217741U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x505 = UINT16_MAX;
	volatile uint64_t x506 = UINT64_MAX;
	int64_t x507 = INT64_MAX;
	static uint64_t x508 = 10LLU;
	static uint64_t t14 = 1646877474110LLU;

	t14 = ((x505+(x506&x507))>>x508);

	if (t14 != 9007199254741055LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x537 = INT32_MAX;
	int64_t x539 = INT64_MIN;
	int8_t x540 = 25;

	t15 = ((x537+(x538&x539))>>x540);

	if (t15 != 63LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x561 = INT16_MIN;
	uint32_t x562 = 0U;
	int16_t x563 = -1;
	uint16_t x564 = 3U;

	t16 = ((x561+(x562&x563))>>x564);

	if (t16 != 536866816U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x585 = INT64_MIN;
	uint64_t x586 = 1461895LLU;
	uint8_t x587 = 11U;
	uint64_t x588 = 53LLU;
	uint64_t t17 = 764673LLU;

	t17 = ((x585+(x586&x587))>>x588);

	if (t17 != 1024LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x717 = 8U;
	int16_t x718 = INT16_MAX;
	uint8_t x720 = 2U;
	uint32_t t18 = 232171U;

	t18 = ((x717+(x718&x719))>>x720);

	if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x743 = 8831941452259254LL;
	volatile uint64_t t19 = 756212865815565507LLU;

	t19 = ((x741+(x742&x743))>>x744);

	if (t19 != 4938011803LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x751 = INT8_MIN;
	uint32_t x752 = 29U;
	volatile uint64_t t20 = 4400371192363LLU;

	t20 = ((x749+(x750&x751))>>x752);

	if (t20 != 156003LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x809 = INT32_MAX;
	volatile uint8_t x810 = 0U;
	uint16_t x812 = 1U;
	static int64_t t21 = -33LL;

	t21 = ((x809+(x810&x811))>>x812);

	if (t21 != 1073741823LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x861 = INT16_MAX;
	volatile uint8_t x863 = 12U;
	static int8_t x864 = 13;
	volatile int64_t t22 = -258939911LL;

	t22 = ((x861+(x862&x863))>>x864);

	if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x917 = INT8_MAX;
	int64_t x919 = -1LL;
	uint8_t x920 = 10U;

	t23 = ((x917+(x918&x919))>>x920);

	if (t23 != 243651302393LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x934 = -1LL;
	int32_t x935 = INT32_MIN;
	static uint8_t x936 = 19U;

	t24 = ((x933+(x934&x935))>>x936);

	if (t24 != 20705362LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1005 = INT64_MAX;
	static volatile int8_t x1006 = INT8_MIN;
	int32_t x1008 = 15;
	static volatile int64_t t25 = 98579717897821LL;

	t25 = ((x1005+(x1006&x1007))>>x1008);

	if (t25 != 281474976710655LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1054 = 63741100LL;
	uint8_t x1056 = 1U;
	uint64_t t26 = 1LLU;

	t26 = ((x1053+(x1054&x1055))>>x1056);

	if (t26 != 1099303503LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1073 = 826224836371796351LLU;
	volatile uint64_t t27 = 388269832LLU;

	t27 = ((x1073+(x1074&x1075))>>x1076);

	if (t27 != 222527671262144199LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1077 = UINT16_MAX;
	static uint64_t x1078 = UINT64_MAX;
	static volatile uint32_t x1079 = UINT32_MAX;
	uint64_t x1080 = 0LLU;
	uint64_t t28 = 10LLU;

	t28 = ((x1077+(x1078&x1079))>>x1080);

	if (t28 != 4295032830LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1201 = INT16_MAX;
	uint8_t x1202 = 47U;
	int32_t x1203 = 0;
	static volatile int32_t t29 = 0;

	t29 = ((x1201+(x1202&x1203))>>x1204);

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1341 = 146802736049LL;
	int8_t x1342 = -5;
	static volatile int16_t x1343 = -24;
	int8_t x1344 = 13;
	volatile int64_t t30 = 1151465599134818LL;

	t30 = ((x1341+(x1342&x1343))>>x1344);

	if (t30 != 17920255LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1345 = 6841788005LLU;
	volatile int16_t x1346 = -119;
	volatile int32_t x1347 = 78;
	static uint8_t x1348 = 20U;
	volatile uint64_t t31 = 124LLU;

	t31 = ((x1345+(x1346&x1347))>>x1348);

	if (t31 != 6524LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1426 = 1237U;
	volatile uint16_t x1427 = 11U;
	uint8_t x1428 = 0U;
	int32_t t32 = 448847;

	t32 = ((x1425+(x1426&x1427))>>x1428);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1534 = -1;
	volatile int8_t x1535 = INT8_MIN;
	uint8_t x1536 = 14U;

	t33 = ((x1533+(x1534&x1535))>>x1536);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1617 = 17;
	static uint32_t x1618 = UINT32_MAX;
	volatile uint16_t x1619 = 1U;
	uint16_t x1620 = 0U;
	volatile uint32_t t34 = 236975U;

	t34 = ((x1617+(x1618&x1619))>>x1620);

	if (t34 != 18U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1641 = INT32_MIN;
	static uint32_t x1642 = UINT32_MAX;
	int32_t x1643 = INT32_MIN;
	uint16_t x1644 = 2U;
	volatile uint32_t t35 = 1870U;

	t35 = ((x1641+(x1642&x1643))>>x1644);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1677 = 222292219239909378LLU;
	int32_t x1678 = -1;
	volatile int32_t x1679 = -1;
	int8_t x1680 = 1;
	volatile uint64_t t36 = 7602824324313LLU;

	t36 = ((x1677+(x1678&x1679))>>x1680);

	if (t36 != 111146109619954688LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1766 = INT8_MIN;
	uint8_t x1767 = UINT8_MAX;
	uint8_t x1768 = 1U;
	int32_t t37 = -12929;

	t37 = ((x1765+(x1766&x1767))>>x1768);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1826 = 116445LL;
	static int8_t x1827 = INT8_MAX;
	volatile uint8_t x1828 = 29U;
	int64_t t38 = -2228329287620684LL;

	t38 = ((x1825+(x1826&x1827))>>x1828);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1953 = UINT16_MAX;
	int32_t x1954 = -1;
	int8_t x1955 = INT8_MIN;
	uint16_t x1956 = 3U;

	t39 = ((x1953+(x1954&x1955))>>x1956);

	if (t39 != 8175) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1973 = 14;
	uint8_t x1976 = 0U;

	t40 = ((x1973+(x1974&x1975))>>x1976);

	if (t40 != 14U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1993 = 6U;
	volatile uint16_t x1994 = 27U;
	static int32_t x1995 = INT32_MIN;

	t41 = ((x1993+(x1994&x1995))>>x1996);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2021 = INT16_MAX;
	int8_t x2022 = INT8_MIN;
	volatile int64_t x2023 = -1LL;
	int16_t x2024 = 2;
	volatile int64_t t42 = 239563736135LL;

	t42 = ((x2021+(x2022&x2023))>>x2024);

	if (t42 != 8159LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2029 = 45;
	static int8_t x2030 = INT8_MIN;
	static int64_t x2031 = 251LL;
	uint16_t x2032 = 10U;
	static int64_t t43 = -53413455917752803LL;

	t43 = ((x2029+(x2030&x2031))>>x2032);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2089 = 3LLU;
	uint8_t x2091 = 2U;
	uint64_t t44 = 12159LLU;

	t44 = ((x2089+(x2090&x2091))>>x2092);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2097 = -1;
	static int16_t x2099 = INT16_MAX;
	volatile uint8_t x2100 = 1U;
	int32_t t45 = 32431;

	t45 = ((x2097+(x2098&x2099))>>x2100);

	if (t45 != 16383) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2137 = INT8_MAX;
	int8_t x2138 = INT8_MAX;
	int64_t x2139 = 914LL;
	int8_t x2140 = 0;
	volatile int64_t t46 = -2577LL;

	t46 = ((x2137+(x2138&x2139))>>x2140);

	if (t46 != 145LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2185 = INT64_MAX;
	static int64_t x2186 = INT64_MIN;
	int16_t x2187 = INT16_MAX;
	uint64_t x2188 = 0LLU;
	volatile int64_t t47 = INT64_MAX;

	t47 = ((x2185+(x2186&x2187))>>x2188);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2217 = 2;
	uint32_t x2218 = UINT32_MAX;
	int16_t x2219 = INT16_MAX;
	static int32_t x2220 = 7;
	volatile uint32_t t48 = 307U;

	t48 = ((x2217+(x2218&x2219))>>x2220);

	if (t48 != 256U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2297 = -1;
	int64_t x2298 = -47470321513LL;
	uint32_t x2299 = 3838821U;
	uint8_t x2300 = 19U;
	int64_t t49 = 2048280367018071LL;

	t49 = ((x2297+(x2298&x2299))>>x2300);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2397 = -1;
	static uint32_t x2398 = UINT32_MAX;
	uint32_t x2399 = UINT32_MAX;
	uint8_t x2400 = 9U;
	volatile uint32_t t50 = 48U;

	t50 = ((x2397+(x2398&x2399))>>x2400);

	if (t50 != 8388607U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2401 = -1;
	int8_t x2403 = -1;
	uint8_t x2404 = 6U;
	static volatile int32_t t51 = 1;

	t51 = ((x2401+(x2402&x2403))>>x2404);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x2405 = UINT16_MAX;
	static uint8_t x2406 = UINT8_MAX;
	uint32_t x2407 = 48224U;
	uint16_t x2408 = 15U;
	volatile uint32_t t52 = 28588U;

	t52 = ((x2405+(x2406&x2407))>>x2408);

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2509 = 6221853LLU;
	int8_t x2510 = 12;
	static int64_t x2511 = INT64_MIN;
	uint8_t x2512 = 26U;
	uint64_t t53 = 6753032704160369LLU;

	t53 = ((x2509+(x2510&x2511))>>x2512);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2561 = UINT16_MAX;
	uint64_t x2562 = 53LLU;
	uint32_t x2563 = 95921U;

	t54 = ((x2561+(x2562&x2563))>>x2564);

	if (t54 != 65584LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2569 = 5423LLU;
	volatile int16_t x2570 = 5;
	static int32_t x2571 = -1;
	uint16_t x2572 = 1U;
	static uint64_t t55 = 5997021945449657LLU;

	t55 = ((x2569+(x2570&x2571))>>x2572);

	if (t55 != 2714LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2613 = 117562LLU;
	int8_t x2614 = INT8_MIN;
	int64_t x2615 = INT64_MIN;
	volatile int16_t x2616 = 1;
	uint64_t t56 = 55404433174664LLU;

	t56 = ((x2613+(x2614&x2615))>>x2616);

	if (t56 != 4611686018427446685LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2726 = 1U;
	uint8_t x2728 = 6U;
	int64_t t57 = -10793045692303074LL;

	t57 = ((x2725+(x2726&x2727))>>x2728);

	if (t57 != 67108863LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2741 = UINT64_MAX;
	static int16_t x2742 = INT16_MIN;
	int16_t x2743 = -526;
	uint64_t t58 = 5429459612464LLU;

	t58 = ((x2741+(x2742&x2743))>>x2744);

	if (t58 != 274877906943LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2798 = INT8_MAX;
	int8_t x2799 = 1;

	t59 = ((x2797+(x2798&x2799))>>x2800);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2801 = UINT8_MAX;
	volatile uint32_t x2802 = 1U;
	uint16_t x2804 = 13U;
	volatile uint64_t t60 = 8547093191444694469LLU;

	t60 = ((x2801+(x2802&x2803))>>x2804);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2805 = UINT16_MAX;
	int8_t x2806 = INT8_MAX;
	int16_t x2807 = -209;
	volatile uint16_t x2808 = 3U;
	volatile int32_t t61 = -1069283645;

	t61 = ((x2805+(x2806&x2807))>>x2808);

	if (t61 != 8197) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2866 = -1;
	int64_t x2867 = INT64_MIN;
	volatile int8_t x2868 = 18;
	static uint64_t t62 = 1LLU;

	t62 = ((x2865+(x2866&x2867))>>x2868);

	if (t62 != 35184372195794LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2929 = UINT32_MAX;
	int8_t x2930 = 5;
	volatile uint32_t x2931 = 146193630U;
	volatile uint32_t t63 = 219589095U;

	t63 = ((x2929+(x2930&x2931))>>x2932);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x2933 = INT8_MIN;
	uint32_t x2935 = 0U;

	t64 = ((x2933+(x2934&x2935))>>x2936);

	if (t64 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2982 = UINT32_MAX;
	volatile int64_t x2983 = -1LL;
	int32_t x2984 = 1;
	int64_t t65 = -374705586666LL;

	t65 = ((x2981+(x2982&x2983))>>x2984);

	if (t65 != 2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3053 = -57;
	int64_t x3054 = INT64_MAX;
	int32_t x3055 = INT32_MIN;
	volatile int64_t t66 = -2081675186747LL;

	t66 = ((x3053+(x3054&x3055))>>x3056);

	if (t66 != 288230376084602878LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3057 = INT8_MAX;
	volatile uint64_t x3058 = UINT64_MAX;

	t67 = ((x3057+(x3058&x3059))>>x3060);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3077 = UINT16_MAX;
	uint64_t x3079 = 1032978509467966LLU;
	static uint64_t x3080 = 8LLU;
	uint64_t t68 = 3LLU;

	t68 = ((x3077+(x3078&x3079))>>x3080);

	if (t68 != 4035072302847LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x3117 = 24121003U;
	uint32_t x3118 = UINT32_MAX;
	int16_t x3119 = INT16_MAX;
	uint16_t x3120 = 2U;
	volatile uint32_t t69 = 12291U;

	t69 = ((x3117+(x3118&x3119))>>x3120);

	if (t69 != 6038442U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x3143 = UINT64_MAX;
	uint16_t x3144 = 7U;
	uint64_t t70 = 50445879664LLU;

	t70 = ((x3141+(x3142&x3143))>>x3144);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3207 = -1LL;
	uint8_t x3208 = 17U;
	volatile int64_t t71 = -3LL;

	t71 = ((x3205+(x3206&x3207))>>x3208);

	if (t71 != 70368744177663LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x3249 = -89353LL;
	int64_t x3250 = -1LL;
	volatile int64_t x3251 = 9935938459LL;
	uint8_t x3252 = 0U;

	t72 = ((x3249+(x3250&x3251))>>x3252);

	if (t72 != 9935849106LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x3301 = 1701U;
	int8_t x3302 = INT8_MIN;
	uint64_t x3303 = UINT64_MAX;
	volatile int8_t x3304 = 0;

	t73 = ((x3301+(x3302&x3303))>>x3304);

	if (t73 != 1573LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3361 = 10U;
	uint64_t x3362 = UINT64_MAX;
	int8_t x3363 = -1;
	uint64_t x3364 = 4LLU;
	volatile uint64_t t74 = 4507706LLU;

	t74 = ((x3361+(x3362&x3363))>>x3364);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3373 = UINT64_MAX;
	int8_t x3374 = -1;
	static volatile int64_t x3375 = INT64_MIN;

	t75 = ((x3373+(x3374&x3375))>>x3376);

	if (t75 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3433 = 28U;
	volatile uint32_t x3434 = UINT32_MAX;
	int64_t x3435 = -1LL;
	uint8_t x3436 = 14U;
	volatile int64_t t76 = 1836182681LL;

	t76 = ((x3433+(x3434&x3435))>>x3436);

	if (t76 != 262144LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3589 = 810787403538LLU;
	volatile int64_t x3590 = -1LL;
	volatile uint8_t x3592 = 14U;
	uint64_t t77 = 11480614327LLU;

	t77 = ((x3589+(x3590&x3591))>>x3592);

	if (t77 != 49486535LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3593 = -1LL;
	volatile int64_t x3594 = -450LL;
	uint64_t x3595 = UINT64_MAX;
	static uint64_t t78 = 14856803836287647LLU;

	t78 = ((x3593+(x3594&x3595))>>x3596);

	if (t78 != 2047LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x3682 = INT8_MIN;
	uint8_t x3684 = 7U;
	volatile uint64_t t79 = 160584LLU;

	t79 = ((x3681+(x3682&x3683))>>x3684);

	if (t79 != 142499303LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3710 = UINT8_MAX;
	int8_t x3711 = INT8_MAX;
	int8_t x3712 = 11;
	static volatile int32_t t80 = -10401;

	t80 = ((x3709+(x3710&x3711))>>x3712);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3717 = 525;
	uint64_t x3718 = 260647308187088LLU;
	volatile uint8_t x3720 = 1U;

	t81 = ((x3717+(x3718&x3719))>>x3720);

	if (t81 != 130323654093806LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3773 = INT8_MIN;
	volatile uint64_t x3774 = UINT64_MAX;
	static uint32_t x3775 = UINT32_MAX;
	uint8_t x3776 = 3U;
	uint64_t t82 = 1845281374880982685LLU;

	t82 = ((x3773+(x3774&x3775))>>x3776);

	if (t82 != 536870895LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3823 = 237721007;
	volatile uint8_t x3824 = 20U;
	static volatile int32_t t83 = 1984;

	t83 = ((x3821+(x3822&x3823))>>x3824);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3853 = 282;
	int8_t x3854 = -1;
	uint8_t x3856 = 33U;
	volatile uint64_t t84 = 13111209615617353LLU;

	t84 = ((x3853+(x3854&x3855))>>x3856);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3869 = INT16_MIN;
	uint32_t x3870 = 50U;
	volatile uint16_t x3871 = 1784U;
	static uint32_t x3872 = 0U;

	t85 = ((x3869+(x3870&x3871))>>x3872);

	if (t85 != 4294934576U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3909 = INT8_MAX;
	int8_t x3910 = -11;
	int8_t x3912 = 1;
	int32_t t86 = -6;

	t86 = ((x3909+(x3910&x3911))>>x3912);

	if (t86 != 58) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3961 = UINT8_MAX;
	uint32_t x3963 = 1124640438U;
	volatile uint8_t x3964 = 4U;
	volatile uint32_t t87 = 61U;

	t87 = ((x3961+(x3962&x3963))>>x3964);

	if (t87 != 70290043U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4029 = UINT32_MAX;
	int8_t x4030 = INT8_MIN;
	int64_t x4031 = -1LL;
	static int16_t x4032 = 1;
	volatile int64_t t88 = -863LL;

	t88 = ((x4029+(x4030&x4031))>>x4032);

	if (t88 != 2147483583LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x4065 = INT8_MIN;
	uint64_t x4066 = 729135034451700LLU;
	int64_t x4067 = INT64_MAX;
	uint8_t x4068 = 0U;
	uint64_t t89 = 2LLU;

	t89 = ((x4065+(x4066&x4067))>>x4068);

	if (t89 != 729135034451572LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x4089 = INT32_MAX;
	uint64_t x4090 = UINT64_MAX;
	volatile uint16_t x4091 = 14U;
	int64_t x4092 = 31LL;
	static uint64_t t90 = 915736191LLU;

	t90 = ((x4089+(x4090&x4091))>>x4092);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4121 = INT32_MIN;
	static int64_t x4122 = INT64_MIN;
	uint64_t x4123 = UINT64_MAX;
	static uint8_t x4124 = 18U;
	uint64_t t91 = 15088817220409112LLU;

	t91 = ((x4121+(x4122&x4123))>>x4124);

	if (t91 != 35184372080640LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4125 = 829724853LLU;
	uint16_t x4127 = UINT16_MAX;
	uint64_t t92 = 0LLU;

	t92 = ((x4125+(x4126&x4127))>>x4128);

	if (t92 != 414862444LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4153 = 13965U;
	static int8_t x4156 = 0;
	uint64_t t93 = 3683LLU;

	t93 = ((x4153+(x4154&x4155))>>x4156);

	if (t93 != 2537599726LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4183 = 1675914201499568195LLU;
	volatile uint64_t x4184 = 63LLU;
	static volatile uint64_t t94 = 1730LLU;

	t94 = ((x4181+(x4182&x4183))>>x4184);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x4193 = 1;
	static int32_t x4194 = INT32_MAX;
	int16_t x4195 = INT16_MIN;
	uint8_t x4196 = 0U;
	static int32_t t95 = -25677549;

	t95 = ((x4193+(x4194&x4195))>>x4196);

	if (t95 != 2147450881) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x4217 = 28261220131LLU;
	int64_t x4218 = INT64_MIN;
	static uint32_t x4219 = UINT32_MAX;
	uint8_t x4220 = 0U;
	uint64_t t96 = 16LLU;

	t96 = ((x4217+(x4218&x4219))>>x4220);

	if (t96 != 28261220131LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4257 = 2288329;
	uint16_t x4258 = 12236U;
	uint16_t x4260 = 1U;
	int32_t t97 = -365239795;

	t97 = ((x4257+(x4258&x4259))>>x4260);

	if (t97 != 1144164) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x4261 = UINT64_MAX;
	static uint64_t t98 = 1549060126453LLU;

	t98 = ((x4261+(x4262&x4263))>>x4264);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4313 = UINT64_MAX;
	int32_t x4314 = INT32_MIN;
	uint32_t x4315 = UINT32_MAX;
	uint8_t x4316 = 8U;
	uint64_t t99 = 7790702077LLU;

	t99 = ((x4313+(x4314&x4315))>>x4316);

	if (t99 != 8388607LLU) { NG(); } else { ; }
	
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

