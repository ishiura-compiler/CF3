#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x54 = 20U;
uint16_t x58 = 26U;
int32_t t3 = -1599650;
uint16_t x66 = 14U;
static volatile int8_t x81 = INT8_MAX;
uint16_t x123 = 0U;
int16_t x124 = -1;
uint32_t x200 = UINT32_MAX;
int32_t x219 = 37446121;
int64_t x220 = INT64_MIN;
int64_t t8 = -453693786545LL;
uint16_t x274 = 1U;
int16_t x363 = 1;
uint32_t x364 = UINT32_MAX;
uint64_t x387 = UINT64_MAX;
static int16_t x388 = -33;
uint8_t x390 = 15U;
volatile int32_t x391 = -183724455;
volatile uint64_t t15 = 27308211397573LLU;
uint64_t x665 = UINT64_MAX;
uint64_t t16 = 6754013584816943LLU;
int64_t t18 = -628568053176287125LL;
int64_t x909 = INT64_MAX;
uint16_t x947 = UINT16_MAX;
int32_t x1015 = INT32_MIN;
volatile int32_t t21 = -12388;
int16_t x1066 = 1;
int64_t x1067 = INT64_MIN;
int32_t x1068 = -232;
int8_t x1092 = INT8_MIN;
volatile uint8_t x1194 = 0U;
static volatile int8_t x1199 = INT8_MIN;
volatile int16_t x1200 = INT16_MAX;
int64_t x1297 = INT64_MAX;
uint8_t x1693 = 3U;
volatile int32_t t30 = -1;
uint16_t x1905 = 14274U;
int32_t t33 = -72254383;
volatile uint8_t x2114 = 1U;
volatile uint16_t x2116 = 3903U;
volatile uint32_t t34 = 30U;
uint32_t x2125 = 12U;
uint16_t x2126 = 2U;
int64_t x2128 = INT64_MIN;
uint8_t x2150 = 22U;
uint16_t x2256 = 3499U;
int64_t x2488 = INT64_MIN;
volatile int64_t t41 = 90305747639169655LL;
uint64_t t44 = 714152171453495955LLU;
int32_t x3008 = -102;
volatile int32_t x3011 = -1;
int64_t t47 = INT64_MIN;
int64_t x3141 = 534195418659528271LL;
int8_t x3159 = INT8_MAX;
volatile uint8_t x3160 = UINT8_MAX;
uint8_t x3173 = UINT8_MAX;
uint8_t x3182 = 0U;
int16_t x3367 = 4343;
volatile uint64_t x3427 = 1596782129685LLU;
volatile uint64_t t57 = 58LLU;
static int16_t x3437 = 2713;
static uint16_t x3461 = UINT16_MAX;
volatile int64_t x3464 = INT64_MIN;
uint32_t t60 = 227U;
volatile uint32_t t61 = 111986998U;
int32_t x3701 = INT32_MAX;
uint16_t x3702 = 11U;
uint8_t x3704 = 16U;
int32_t x3840 = 30;
int32_t x3928 = INT32_MIN;
int32_t x3958 = 0;
int16_t x3967 = -8693;
int8_t x4010 = 13;
uint32_t t71 = 1832838U;
int8_t x4142 = 1;
volatile uint32_t t72 = 290U;
uint32_t x4174 = 1U;
int16_t x4175 = INT16_MIN;
int16_t x4184 = INT16_MIN;
int32_t t75 = 1;
uint16_t x4206 = 0U;
volatile uint16_t x4217 = 83U;
uint16_t x4242 = 0U;
static int64_t x4341 = 8541049744133LL;
int64_t t81 = -638215LL;
uint16_t x4365 = 10U;
int16_t x4436 = INT16_MIN;
uint16_t x4591 = 462U;
uint32_t x4657 = 469066414U;
uint32_t t88 = 4095630U;
int32_t x4682 = 0;
volatile uint32_t t89 = 45U;
int64_t x4940 = 1450861221221LL;
static volatile int64_t t91 = -41LL;
uint16_t x4976 = 33U;
int16_t x4999 = INT16_MIN;
int32_t x5000 = INT32_MIN;
uint8_t x5095 = 28U;
volatile uint8_t x5203 = UINT8_MAX;
int32_t x5221 = 4;
static volatile int8_t x5222 = 0;
static uint64_t x5224 = UINT64_MAX;
uint64_t t99 = 7260134013416643006LLU;


void f0(void) {
	uint16_t x41 = 59U;
	volatile uint8_t x42 = 11U;
	int8_t x43 = INT8_MIN;
	int16_t x44 = -398;
	static int32_t t0 = -1;

	t0 = ((x41>>x42)^(x43&x44));

	if (t0 != -512) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 7U;
	int64_t x51 = INT64_MIN;
	volatile int32_t x52 = INT32_MAX;
	int64_t t1 = -53021733676492LL;

	t1 = ((x49>>x50)^(x51&x52));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x53 = 3;
	int16_t x55 = -1;
	int8_t x56 = 0;
	volatile int32_t t2 = -11485;

	t2 = ((x53>>x54)^(x55&x56));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x57 = INT32_MAX;
	static int8_t x59 = -2;
	int16_t x60 = 39;

	t3 = ((x57>>x58)^(x59&x60));

	if (t3 != 57) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x65 = 15251242LL;
	int32_t x67 = -1;
	int32_t x68 = INT32_MIN;
	volatile int64_t t4 = 77840874639178LL;

	t4 = ((x65>>x66)^(x67&x68));

	if (t4 != -2147482718LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x82 = 28U;
	uint32_t x83 = UINT32_MAX;
	volatile uint32_t x84 = 433U;
	uint32_t t5 = 6791U;

	t5 = ((x81>>x82)^(x83&x84));

	if (t5 != 433U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x121 = 48U;
	int8_t x122 = 30;
	volatile int32_t t6 = -437266;

	t6 = ((x121>>x122)^(x123&x124));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x197 = 36U;
	int8_t x198 = 0;
	int32_t x199 = INT32_MIN;
	volatile uint32_t t7 = 22U;

	t7 = ((x197>>x198)^(x199&x200));

	if (t7 != 2147483684U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x217 = 6;
	uint8_t x218 = 2U;

	t8 = ((x217>>x218)^(x219&x220));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x273 = UINT16_MAX;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = 1988092748186264731LL;
	volatile int64_t t9 = 52108LL;

	t9 = ((x273>>x274)^(x275&x276));

	if (t9 != 32612LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x321 = 318448468063019LLU;
	uint16_t x322 = 6U;
	int32_t x323 = 0;
	uint8_t x324 = UINT8_MAX;
	uint64_t t10 = 12LLU;

	t10 = ((x321>>x322)^(x323&x324));

	if (t10 != 4975757313484LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x361 = 36756949LLU;
	static volatile int8_t x362 = 1;
	volatile uint64_t t11 = 3567879201LLU;

	t11 = ((x361>>x362)^(x363&x364));

	if (t11 != 18378475LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint16_t x386 = 7U;
	uint64_t t12 = 68018783130398138LLU;

	t12 = ((x385>>x386)^(x387&x388));

	if (t12 != 18302628885633695776LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x389 = 10;
	int32_t x392 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = ((x389>>x390)^(x391&x392));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x433 = 43879304LL;
	int8_t x434 = 6;
	int64_t x435 = INT64_MIN;
	static uint64_t x436 = 1064644460626217401LLU;
	volatile uint64_t t14 = 867143492656525LLU;

	t14 = ((x433>>x434)^(x435&x436));

	if (t14 != 685614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x617 = UINT16_MAX;
	uint16_t x618 = 5U;
	static uint64_t x619 = 3LLU;
	static int32_t x620 = INT32_MAX;

	t15 = ((x617>>x618)^(x619&x620));

	if (t15 != 2044LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x666 = 1U;
	int64_t x667 = -16815401739LL;
	static int8_t x668 = -1;

	t16 = ((x665>>x666)^(x667&x668));

	if (t16 != 9223372053670177546LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x677 = UINT64_MAX;
	static int8_t x678 = 0;
	int32_t x679 = -222785254;
	uint64_t x680 = 83LLU;
	static uint64_t t17 = 110283092LLU;

	t17 = ((x677>>x678)^(x679&x680));

	if (t17 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x885 = 65869046;
	uint8_t x886 = 20U;
	int64_t x887 = 3286577975830912899LL;
	static int64_t x888 = -1LL;

	t18 = ((x885>>x886)^(x887&x888));

	if (t18 != 3286577975830912957LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x910 = 61;
	volatile int64_t x911 = INT64_MAX;
	int64_t x912 = -37066670LL;
	volatile int64_t t19 = -2918LL;

	t19 = ((x909>>x910)^(x911&x912));

	if (t19 != 9223372036817709137LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x945 = 2255692977372673971LLU;
	uint8_t x946 = 4U;
	volatile int32_t x948 = INT32_MIN;
	volatile uint64_t t20 = 7491LLU;

	t20 = ((x945>>x946)^(x947&x948));

	if (t20 != 140980811085792123LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1013 = 14U;
	volatile uint16_t x1014 = 7U;
	volatile int32_t x1016 = INT32_MAX;

	t21 = ((x1013>>x1014)^(x1015&x1016));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1065 = 0LL;
	int64_t t22 = INT64_MIN;

	t22 = ((x1065>>x1066)^(x1067&x1068));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1089 = 0U;
	uint16_t x1090 = 4U;
	int64_t x1091 = INT64_MIN;
	int64_t t23 = INT64_MIN;

	t23 = ((x1089>>x1090)^(x1091&x1092));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1193 = 321U;
	static uint8_t x1195 = 8U;
	static uint8_t x1196 = 2U;
	uint32_t t24 = 625U;

	t24 = ((x1193>>x1194)^(x1195&x1196));

	if (t24 != 321U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1197 = UINT16_MAX;
	static int8_t x1198 = 21;
	int32_t t25 = -437290;

	t25 = ((x1197>>x1198)^(x1199&x1200));

	if (t25 != 32640) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1225 = INT32_MAX;
	int8_t x1226 = 11;
	int32_t x1227 = 10;
	static int8_t x1228 = -42;
	volatile int32_t t26 = 895;

	t26 = ((x1225>>x1226)^(x1227&x1228));

	if (t26 != 1048573) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1298 = 2U;
	int64_t x1299 = INT64_MAX;
	int8_t x1300 = 6;
	int64_t t27 = 95364752791069295LL;

	t27 = ((x1297>>x1298)^(x1299&x1300));

	if (t27 != 2305843009213693945LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1517 = 59U;
	uint32_t x1518 = 6U;
	int32_t x1519 = INT32_MIN;
	uint32_t x1520 = 571527178U;
	static uint32_t t28 = 18833U;

	t28 = ((x1517>>x1518)^(x1519&x1520));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1585 = UINT8_MAX;
	volatile uint8_t x1586 = 29U;
	int64_t x1587 = INT64_MIN;
	uint8_t x1588 = 0U;
	static volatile int64_t t29 = -231919LL;

	t29 = ((x1585>>x1586)^(x1587&x1588));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x1694 = 3U;
	int32_t x1695 = INT32_MAX;
	uint8_t x1696 = UINT8_MAX;

	t30 = ((x1693>>x1694)^(x1695&x1696));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1753 = INT16_MAX;
	uint8_t x1754 = 7U;
	uint16_t x1755 = UINT16_MAX;
	int16_t x1756 = INT16_MIN;
	int32_t t31 = 7206;

	t31 = ((x1753>>x1754)^(x1755&x1756));

	if (t31 != 33023) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1829 = UINT8_MAX;
	int8_t x1830 = 1;
	int64_t x1831 = -1LL;
	int64_t x1832 = 6811669991926516LL;
	int64_t t32 = -115172LL;

	t32 = ((x1829>>x1830)^(x1831&x1832));

	if (t32 != 6811669991926411LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1906 = 12;
	static int8_t x1907 = -1;
	volatile int32_t x1908 = INT32_MAX;

	t33 = ((x1905>>x1906)^(x1907&x1908));

	if (t33 != 2147483644) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2113 = INT16_MAX;
	uint32_t x2115 = 6483503U;

	t34 = ((x2113>>x2114)^(x2115&x2116));

	if (t34 != 12752U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x2127 = 0;
	volatile int64_t t35 = -124320355038763LL;

	t35 = ((x2125>>x2126)^(x2127&x2128));

	if (t35 != 3LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2141 = 890762823896889638LL;
	uint8_t x2142 = 5U;
	uint32_t x2143 = 964108498U;
	int32_t x2144 = INT32_MIN;
	int64_t t36 = -2899LL;

	t36 = ((x2141>>x2142)^(x2143&x2144));

	if (t36 != 27836338246777801LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2149 = INT64_MAX;
	uint16_t x2151 = 8U;
	static int32_t x2152 = -204;
	int64_t t37 = 103598309129LL;

	t37 = ((x2149>>x2150)^(x2151&x2152));

	if (t37 != 2199023255551LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2253 = 4049U;
	uint8_t x2254 = 1U;
	int64_t x2255 = INT64_MIN;
	volatile int64_t t38 = -849646641301LL;

	t38 = ((x2253>>x2254)^(x2255&x2256));

	if (t38 != 2024LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2465 = INT64_MAX;
	int8_t x2466 = 47;
	int64_t x2467 = -3032049LL;
	int64_t x2468 = 764LL;
	volatile int64_t t39 = 2800762LL;

	t39 = ((x2465>>x2466)^(x2467&x2468));

	if (t39 != 65523LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2473 = UINT8_MAX;
	uint16_t x2474 = 0U;
	int64_t x2475 = 456LL;
	int16_t x2476 = -1;
	static int64_t t40 = 27286108LL;

	t40 = ((x2473>>x2474)^(x2475&x2476));

	if (t40 != 311LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2485 = 28U;
	volatile uint16_t x2486 = 3U;
	int64_t x2487 = INT64_MIN;

	t41 = ((x2485>>x2486)^(x2487&x2488));

	if (t41 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2533 = 8157U;
	uint8_t x2534 = 27U;
	static volatile uint64_t x2535 = 136229195208133LLU;
	volatile int16_t x2536 = INT16_MIN;
	uint64_t t42 = 93463748853392LLU;

	t42 = ((x2533>>x2534)^(x2535&x2536));

	if (t42 != 136229195186176LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2773 = INT16_MAX;
	volatile uint8_t x2774 = 7U;
	int32_t x2775 = 31;
	int32_t x2776 = INT32_MAX;
	int32_t t43 = -1533463;

	t43 = ((x2773>>x2774)^(x2775&x2776));

	if (t43 != 224) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2953 = UINT8_MAX;
	volatile uint8_t x2954 = 0U;
	uint64_t x2955 = UINT64_MAX;
	int64_t x2956 = INT64_MAX;

	t44 = ((x2953>>x2954)^(x2955&x2956));

	if (t44 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2961 = INT16_MAX;
	uint8_t x2962 = 0U;
	volatile int16_t x2963 = INT16_MIN;
	int8_t x2964 = -1;
	static volatile int32_t t45 = 13;

	t45 = ((x2961>>x2962)^(x2963&x2964));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3005 = 301128719574527167LLU;
	int32_t x3006 = 0;
	int8_t x3007 = -1;
	volatile uint64_t t46 = 1128LLU;

	t46 = ((x3005>>x3006)^(x3007&x3008));

	if (t46 != 18145615354135024421LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x3009 = INT16_MAX;
	int8_t x3010 = 15;
	int64_t x3012 = INT64_MIN;

	t47 = ((x3009>>x3010)^(x3011&x3012));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3142 = 8;
	int16_t x3143 = INT16_MIN;
	volatile int8_t x3144 = 13;
	volatile int64_t t48 = -11LL;

	t48 = ((x3141>>x3142)^(x3143&x3144));

	if (t48 != 2086700854138782LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x3157 = UINT8_MAX;
	volatile uint8_t x3158 = 1U;
	volatile int32_t t49 = 13666024;

	t49 = ((x3157>>x3158)^(x3159&x3160));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3174 = 1LLU;
	uint16_t x3175 = UINT16_MAX;
	static uint8_t x3176 = 3U;
	volatile int32_t t50 = 308100;

	t50 = ((x3173>>x3174)^(x3175&x3176));

	if (t50 != 124) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3181 = 12342233LLU;
	int8_t x3183 = INT8_MIN;
	int8_t x3184 = INT8_MIN;
	uint64_t t51 = 132147861603528643LLU;

	t51 = ((x3181>>x3182)^(x3183&x3184));

	if (t51 != 18446744073697209433LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3209 = 1792593668LLU;
	volatile uint16_t x3210 = 2U;
	uint32_t x3211 = UINT32_MAX;
	static int64_t x3212 = INT64_MIN;
	volatile uint64_t t52 = 3533426803756LLU;

	t52 = ((x3209>>x3210)^(x3211&x3212));

	if (t52 != 448148417LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3217 = 0;
	volatile uint16_t x3218 = 12U;
	int64_t x3219 = INT64_MIN;
	volatile int32_t x3220 = INT32_MIN;
	volatile int64_t t53 = INT64_MIN;

	t53 = ((x3217>>x3218)^(x3219&x3220));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3225 = UINT8_MAX;
	static int32_t x3226 = 14;
	uint64_t x3227 = 13484199591179LLU;
	static int16_t x3228 = INT16_MIN;
	volatile uint64_t t54 = 663537840696LLU;

	t54 = ((x3225>>x3226)^(x3227&x3228));

	if (t54 != 13484199575552LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x3297 = 24U;
	uint32_t x3298 = 3U;
	static int32_t x3299 = -1;
	int32_t x3300 = 2014;
	int32_t t55 = 95;

	t55 = ((x3297>>x3298)^(x3299&x3300));

	if (t55 != 2013) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3365 = INT32_MAX;
	volatile uint8_t x3366 = 2U;
	int8_t x3368 = -2;
	volatile int32_t t56 = 14;

	t56 = ((x3365>>x3366)^(x3367&x3368));

	if (t56 != 536866569) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3425 = UINT32_MAX;
	uint8_t x3426 = 6U;
	static volatile int16_t x3428 = INT16_MIN;

	t57 = ((x3425>>x3426)^(x3427&x3428));

	if (t57 != 1596727394303LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3438 = 10U;
	static int64_t x3439 = INT64_MIN;
	int32_t x3440 = INT32_MIN;
	volatile int64_t t58 = 37013LL;

	t58 = ((x3437>>x3438)^(x3439&x3440));

	if (t58 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3462 = 3;
	volatile uint32_t x3463 = 8U;
	int64_t t59 = 1LL;

	t59 = ((x3461>>x3462)^(x3463&x3464));

	if (t59 != 8191LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3605 = 0;
	volatile uint8_t x3606 = 0U;
	int32_t x3607 = INT32_MIN;
	uint32_t x3608 = UINT32_MAX;

	t60 = ((x3605>>x3606)^(x3607&x3608));

	if (t60 != 2147483648U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3665 = UINT32_MAX;
	uint8_t x3666 = 2U;
	static uint32_t x3667 = UINT32_MAX;
	int32_t x3668 = -1;

	t61 = ((x3665>>x3666)^(x3667&x3668));

	if (t61 != 3221225472U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x3703 = INT32_MIN;
	static int32_t t62 = -649405;

	t62 = ((x3701>>x3702)^(x3703&x3704));

	if (t62 != 1048575) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3769 = 65LLU;
	int8_t x3770 = 1;
	int8_t x3771 = -1;
	static volatile int64_t x3772 = INT64_MAX;
	static volatile uint64_t t63 = 402925226859516455LLU;

	t63 = ((x3769>>x3770)^(x3771&x3772));

	if (t63 != 9223372036854775775LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3837 = INT8_MAX;
	volatile uint32_t x3838 = 26U;
	volatile int16_t x3839 = -1;
	static int32_t t64 = 830556;

	t64 = ((x3837>>x3838)^(x3839&x3840));

	if (t64 != 30) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3925 = 7U;
	uint8_t x3926 = 10U;
	uint64_t x3927 = UINT64_MAX;
	volatile uint64_t t65 = 105965485199960732LLU;

	t65 = ((x3925>>x3926)^(x3927&x3928));

	if (t65 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x3957 = INT16_MAX;
	int16_t x3959 = -1;
	int32_t x3960 = -3292047;
	volatile int32_t t66 = 61038379;

	t66 = ((x3957>>x3958)^(x3959&x3960));

	if (t66 != -3294322) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3965 = UINT64_MAX;
	volatile int32_t x3966 = 1;
	volatile uint8_t x3968 = UINT8_MAX;
	static uint64_t t67 = 186LLU;

	t67 = ((x3965>>x3966)^(x3967&x3968));

	if (t67 != 9223372036854775796LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x4009 = INT32_MAX;
	volatile int8_t x4011 = INT8_MIN;
	int64_t x4012 = -1LL;
	int64_t t68 = 5829996403953LL;

	t68 = ((x4009>>x4010)^(x4011&x4012));

	if (t68 != -262017LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4065 = UINT32_MAX;
	int16_t x4066 = 0;
	volatile int32_t x4067 = INT32_MIN;
	volatile int64_t x4068 = INT64_MIN;
	volatile int64_t t69 = 393768412396974LL;

	t69 = ((x4065>>x4066)^(x4067&x4068));

	if (t69 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4101 = 31;
	uint64_t x4102 = 2LLU;
	uint16_t x4103 = 31U;
	int32_t x4104 = INT32_MAX;
	volatile int32_t t70 = -35489;

	t70 = ((x4101>>x4102)^(x4103&x4104));

	if (t70 != 24) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4125 = 5;
	static int16_t x4126 = 1;
	uint32_t x4127 = 226908U;
	int32_t x4128 = 22876;

	t71 = ((x4125>>x4126)^(x4127&x4128));

	if (t71 != 20574U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4141 = UINT32_MAX;
	int32_t x4143 = INT32_MIN;
	volatile int8_t x4144 = INT8_MAX;

	t72 = ((x4141>>x4142)^(x4143&x4144));

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4169 = UINT16_MAX;
	static uint8_t x4170 = 0U;
	volatile int16_t x4171 = INT16_MIN;
	int8_t x4172 = INT8_MIN;
	volatile int32_t t73 = -44188;

	t73 = ((x4169>>x4170)^(x4171&x4172));

	if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4173 = INT8_MAX;
	int64_t x4176 = -11125180020LL;
	static volatile int64_t t74 = 5426LL;

	t74 = ((x4173>>x4174)^(x4175&x4176));

	if (t74 != -11125194689LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4181 = 14U;
	int8_t x4182 = 15;
	int32_t x4183 = -1;

	t75 = ((x4181>>x4182)^(x4183&x4184));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4205 = 1U;
	int8_t x4207 = -1;
	int64_t x4208 = INT64_MAX;
	volatile int64_t t76 = -39LL;

	t76 = ((x4205>>x4206)^(x4207&x4208));

	if (t76 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4218 = 1;
	int64_t x4219 = INT64_MAX;
	static int16_t x4220 = -17;
	volatile int64_t t77 = -2LL;

	t77 = ((x4217>>x4218)^(x4219&x4220));

	if (t77 != 9223372036854775750LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4221 = INT16_MAX;
	static int8_t x4222 = 27;
	uint16_t x4223 = UINT16_MAX;
	int64_t x4224 = INT64_MAX;
	static int64_t t78 = 931712530731250592LL;

	t78 = ((x4221>>x4222)^(x4223&x4224));

	if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4241 = 45516;
	int16_t x4243 = INT16_MIN;
	int16_t x4244 = INT16_MAX;
	int32_t t79 = 65197;

	t79 = ((x4241>>x4242)^(x4243&x4244));

	if (t79 != 45516) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4329 = INT16_MAX;
	uint8_t x4330 = 0U;
	static uint8_t x4331 = 11U;
	int16_t x4332 = INT16_MAX;
	volatile int32_t t80 = -8787728;

	t80 = ((x4329>>x4330)^(x4331&x4332));

	if (t80 != 32756) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x4342 = 1LL;
	static int16_t x4343 = INT16_MIN;
	int16_t x4344 = INT16_MIN;

	t81 = ((x4341>>x4342)^(x4343&x4344));

	if (t81 != -4270524877438LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4357 = UINT16_MAX;
	int8_t x4358 = 3;
	static int16_t x4359 = INT16_MAX;
	int16_t x4360 = 127;
	volatile int32_t t82 = 351966;

	t82 = ((x4357>>x4358)^(x4359&x4360));

	if (t82 != 8064) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4366 = 27LLU;
	int8_t x4367 = INT8_MIN;
	int16_t x4368 = INT16_MAX;
	volatile int32_t t83 = -27;

	t83 = ((x4365>>x4366)^(x4367&x4368));

	if (t83 != 32640) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4401 = 31;
	uint8_t x4402 = 3U;
	uint8_t x4403 = UINT8_MAX;
	int64_t x4404 = -1LL;
	int64_t t84 = -16093526LL;

	t84 = ((x4401>>x4402)^(x4403&x4404));

	if (t84 != 252LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4433 = 1U;
	uint8_t x4434 = 1U;
	static uint16_t x4435 = 14U;
	uint32_t t85 = 43622434U;

	t85 = ((x4433>>x4434)^(x4435&x4436));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4513 = 45910570LLU;
	static uint8_t x4514 = 7U;
	volatile int16_t x4515 = -10;
	static int64_t x4516 = 506LL;
	volatile uint64_t t86 = 25255464362697510LLU;

	t86 = ((x4513>>x4514)^(x4515&x4516));

	if (t86 != 358630LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4589 = UINT8_MAX;
	volatile int32_t x4590 = 1;
	uint16_t x4592 = 1661U;
	volatile int32_t t87 = -3153;

	t87 = ((x4589>>x4590)^(x4591&x4592));

	if (t87 != 51) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x4658 = 2U;
	int8_t x4659 = INT8_MIN;
	int32_t x4660 = INT32_MIN;

	t88 = ((x4657>>x4658)^(x4659&x4660));

	if (t88 != 2264750251U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4681 = UINT32_MAX;
	volatile int8_t x4683 = -1;
	static int16_t x4684 = INT16_MAX;

	t89 = ((x4681>>x4682)^(x4683&x4684));

	if (t89 != 4294934528U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x4701 = INT8_MAX;
	uint64_t x4702 = 11LLU;
	uint8_t x4703 = 122U;
	uint8_t x4704 = UINT8_MAX;
	static int32_t t90 = -234;

	t90 = ((x4701>>x4702)^(x4703&x4704));

	if (t90 != 122) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x4937 = UINT8_MAX;
	uint16_t x4938 = 2U;
	static volatile int16_t x4939 = -1662;

	t91 = ((x4937>>x4938)^(x4939&x4940));

	if (t91 != 1450861220159LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4973 = INT8_MAX;
	uint32_t x4974 = 2U;
	volatile int32_t x4975 = -1;
	volatile int32_t t92 = 1153;

	t92 = ((x4973>>x4974)^(x4975&x4976));

	if (t92 != 62) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4997 = 1U;
	int32_t x4998 = 4;
	int32_t t93 = INT32_MIN;

	t93 = ((x4997>>x4998)^(x4999&x5000));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x5037 = UINT16_MAX;
	int8_t x5038 = 30;
	volatile uint8_t x5039 = 0U;
	volatile int32_t x5040 = INT32_MIN;
	volatile int32_t t94 = -115;

	t94 = ((x5037>>x5038)^(x5039&x5040));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x5085 = 12;
	uint8_t x5086 = 0U;
	uint16_t x5087 = UINT16_MAX;
	volatile uint8_t x5088 = 59U;
	volatile int32_t t95 = 1371916;

	t95 = ((x5085>>x5086)^(x5087&x5088));

	if (t95 != 55) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5093 = UINT16_MAX;
	uint8_t x5094 = 1U;
	volatile int32_t x5096 = -1;
	int32_t t96 = 1978;

	t96 = ((x5093>>x5094)^(x5095&x5096));

	if (t96 != 32739) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5133 = UINT16_MAX;
	uint16_t x5134 = 2U;
	static uint64_t x5135 = 24806955635539198LLU;
	volatile int32_t x5136 = 40749208;
	volatile uint64_t t97 = 40312078LLU;

	t97 = ((x5133>>x5134)^(x5135&x5136));

	if (t97 != 34436967LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5201 = 641;
	uint16_t x5202 = 0U;
	static int16_t x5204 = -1;
	volatile int32_t t98 = -3419;

	t98 = ((x5201>>x5202)^(x5203&x5204));

	if (t98 != 638) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x5223 = 35U;

	t99 = ((x5221>>x5222)^(x5223&x5224));

	if (t99 != 39LLU) { NG(); } else { ; }
	
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

