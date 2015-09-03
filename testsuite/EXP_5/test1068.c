#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x132 = INT16_MAX;
uint8_t x149 = 0U;
static int64_t x150 = 1LL;
int32_t x152 = -731446202;
int32_t x324 = INT32_MIN;
static volatile uint32_t x328 = 202306U;
static int32_t x369 = -69;
static volatile uint8_t x415 = 2U;
uint64_t t8 = 158LLU;
uint64_t x438 = 282204210029LLU;
int64_t x568 = -1LL;
uint32_t x655 = 36U;
volatile int64_t t11 = -945715042524265LL;
volatile int32_t t12 = 226163040;
int64_t x708 = INT64_MAX;
volatile int64_t t15 = 0LL;
volatile uint8_t x885 = 2U;
static int16_t x899 = 38;
uint64_t x929 = 866744908758353245LLU;
uint16_t x952 = 5263U;
uint16_t x1090 = UINT16_MAX;
volatile int16_t x1105 = INT16_MIN;
int8_t x1124 = 2;
int32_t t23 = 50;
static int16_t x1144 = INT16_MIN;
volatile int16_t x1154 = 0;
uint32_t x1156 = 209943401U;
volatile int16_t x1231 = 12;
int64_t x1236 = -9194465LL;
int8_t x1301 = -1;
static uint16_t x1303 = 0U;
int32_t x1304 = -300403;
volatile uint8_t x1391 = 6U;
uint32_t t29 = 1138U;
static uint32_t x1419 = 7U;
int8_t x1617 = INT8_MIN;
volatile uint64_t x1682 = 21LLU;
static uint16_t x1861 = 2U;
volatile uint64_t x2008 = UINT64_MAX;
int32_t t40 = 16682897;
static uint8_t x2359 = 31U;
static int8_t x2383 = 1;
uint16_t x2630 = UINT16_MAX;
int32_t x2632 = -1;
static int16_t x2663 = 3;
static int64_t x3276 = -1LL;
uint64_t x3434 = 3807601LLU;
volatile int8_t x3445 = INT8_MAX;
int16_t x3447 = 7;
uint8_t x3497 = UINT8_MAX;
volatile int32_t x3749 = INT32_MIN;
int64_t x3750 = INT64_MAX;
int16_t x3752 = -1;
volatile uint32_t x3856 = UINT32_MAX;
int16_t x4018 = INT16_MAX;
int32_t t63 = 19748528;
static uint64_t x4054 = UINT64_MAX;
volatile uint32_t x4055 = 40U;
volatile uint16_t x4062 = 4U;
int64_t t66 = 7042724458651047LL;
volatile int64_t t67 = 0LL;
uint32_t x4170 = 1118U;
static uint32_t x4172 = UINT32_MAX;
int16_t x4337 = INT16_MIN;
int32_t x4686 = INT32_MAX;
int64_t x4785 = INT64_MIN;
uint64_t x4786 = UINT64_MAX;
int8_t x4816 = INT8_MAX;
static volatile int64_t x5141 = -1LL;
int32_t x5324 = -1;
volatile uint64_t t80 = 0LLU;
static int32_t x5333 = INT32_MAX;
int16_t x5419 = 21;
volatile int32_t t83 = 1044;
int32_t x5680 = INT32_MIN;
int64_t x5728 = INT64_MAX;
int64_t t88 = 0LL;
static uint16_t x5751 = 1U;
int16_t x5773 = -4575;
volatile int16_t x5884 = INT16_MAX;
int16_t x5933 = -1;
uint64_t x5952 = 6212881LLU;
uint64_t t94 = 18636570127886LLU;
uint8_t x6027 = 24U;
uint8_t x6086 = 0U;
uint64_t t98 = 888506LLU;


void f0(void) {
	int32_t x105 = 26;
	static int8_t x106 = 0;
	uint16_t x107 = 0U;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t0 = 803338;

	t0 = (x105-((x106>>x107)%x108));

	if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x129 = INT16_MAX;
	static volatile int8_t x130 = 1;
	volatile int16_t x131 = 0;
	int32_t t1 = -94370222;

	t1 = (x129-((x130>>x131)%x132));

	if (t1 != 32766) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x151 = 4LLU;
	volatile int64_t t2 = -8814527800386649LL;

	t2 = (x149-((x150>>x151)%x152));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x321 = UINT16_MAX;
	uint32_t x322 = 46826738U;
	uint32_t x323 = 1U;
	uint32_t t3 = 12573577U;

	t3 = (x321-((x322>>x323)%x324));

	if (t3 != 4271619462U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x325 = INT64_MAX;
	uint16_t x326 = 146U;
	uint8_t x327 = 12U;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x325-((x326>>x327)%x328));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x349 = 1LLU;
	int64_t x350 = 596397LL;
	uint16_t x351 = 8U;
	uint64_t x352 = 521927833674772338LLU;
	uint64_t t5 = 3651708720LLU;

	t5 = (x349-((x350>>x351)%x352));

	if (t5 != 18446744073709549288LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x370 = INT8_MAX;
	static uint8_t x371 = 16U;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t6 = 1;

	t6 = (x369-((x370>>x371)%x372));

	if (t6 != -69) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x389 = -336307263;
	static uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 0U;
	int8_t x392 = -26;
	static volatile int32_t t7 = 987;

	t7 = (x389-((x390>>x391)%x392));

	if (t7 != -336307284) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x413 = -1;
	volatile uint64_t x414 = 789694055803LLU;
	uint8_t x416 = 111U;

	t8 = (x413-((x414>>x415)%x416));

	if (t8 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x437 = 5U;
	static uint32_t x439 = 55U;
	uint64_t x440 = 179329171028969LLU;
	volatile uint64_t t9 = 31595LLU;

	t9 = (x437-((x438>>x439)%x440));

	if (t9 != 5LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x565 = 21298U;
	volatile uint64_t x566 = 30450772453000757LLU;
	int8_t x567 = 8;
	volatile uint64_t t10 = 9927045390LLU;

	t10 = (x565-((x566>>x567)%x568));

	if (t10 != 18446625125379678380LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x653 = INT8_MAX;
	int64_t x654 = 11484584236LL;
	int16_t x656 = 1;

	t11 = (x653-((x654>>x655)%x656));

	if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x693 = -1;
	uint8_t x694 = 92U;
	uint16_t x695 = 6U;
	int16_t x696 = INT16_MIN;

	t12 = (x693-((x694>>x695)%x696));

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x705 = -1;
	volatile uint16_t x706 = 117U;
	int16_t x707 = 20;
	int64_t t13 = 477521LL;

	t13 = (x705-((x706>>x707)%x708));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x769 = 285637593293LL;
	uint16_t x770 = UINT16_MAX;
	uint32_t x771 = 12U;
	static volatile int16_t x772 = -13;
	volatile int64_t t14 = -33106651202584LL;

	t14 = (x769-((x770>>x771)%x772));

	if (t14 != 285637593291LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x809 = -434;
	uint16_t x810 = UINT16_MAX;
	static uint8_t x811 = 7U;
	volatile int64_t x812 = INT64_MIN;

	t15 = (x809-((x810>>x811)%x812));

	if (t15 != -945LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x886 = UINT64_MAX;
	uint8_t x887 = 2U;
	uint64_t x888 = UINT64_MAX;
	volatile uint64_t t16 = 62854042LLU;

	t16 = (x885-((x886>>x887)%x888));

	if (t16 != 13835058055282163715LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x897 = UINT32_MAX;
	volatile uint64_t x898 = 1937LLU;
	int16_t x900 = INT16_MIN;
	volatile uint64_t t17 = 1196995388LLU;

	t17 = (x897-((x898>>x899)%x900));

	if (t17 != 4294967295LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x917 = -1;
	volatile int32_t x918 = INT32_MAX;
	uint8_t x919 = 0U;
	uint64_t x920 = 4064LLU;
	volatile uint64_t t18 = 129538777LLU;

	t18 = (x917-((x918>>x919)%x920));

	if (t18 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x930 = 7;
	int8_t x931 = 3;
	int16_t x932 = INT16_MIN;
	volatile uint64_t t19 = 0LLU;

	t19 = (x929-((x930>>x931)%x932));

	if (t19 != 866744908758353245LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x949 = INT16_MAX;
	int8_t x950 = 58;
	uint8_t x951 = 0U;
	volatile int32_t t20 = 2;

	t20 = (x949-((x950>>x951)%x952));

	if (t20 != 32709) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1089 = 27U;
	uint8_t x1091 = 0U;
	volatile uint16_t x1092 = UINT16_MAX;
	int32_t t21 = 0;

	t21 = (x1089-((x1090>>x1091)%x1092));

	if (t21 != 27) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1106 = UINT64_MAX;
	int16_t x1107 = 7;
	int64_t x1108 = INT64_MAX;
	uint64_t t22 = 2581LLU;

	t22 = (x1105-((x1106>>x1107)%x1108));

	if (t22 != 18302628885633662977LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1121 = INT16_MIN;
	int16_t x1122 = 367;
	uint32_t x1123 = 6U;

	t23 = (x1121-((x1122>>x1123)%x1124));

	if (t23 != -32769) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1141 = 7971;
	int64_t x1142 = 64688863148148LL;
	int8_t x1143 = 0;
	volatile int64_t t24 = -1411753093377769291LL;

	t24 = (x1141-((x1142>>x1143)%x1144));

	if (t24 != -22865LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1153 = UINT64_MAX;
	uint8_t x1155 = 31U;
	uint64_t t25 = UINT64_MAX;

	t25 = (x1153-((x1154>>x1155)%x1156));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1229 = INT8_MIN;
	uint16_t x1230 = UINT16_MAX;
	int64_t x1232 = INT64_MAX;
	volatile int64_t t26 = -2736497032417145298LL;

	t26 = (x1229-((x1230>>x1231)%x1232));

	if (t26 != -143LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1233 = -1;
	int8_t x1234 = INT8_MAX;
	uint32_t x1235 = 1U;
	static volatile int64_t t27 = 1LL;

	t27 = (x1233-((x1234>>x1235)%x1236));

	if (t27 != -64LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1302 = 137131801162LLU;
	volatile uint64_t t28 = 16261LLU;

	t28 = (x1301-((x1302>>x1303)%x1304));

	if (t28 != 18446743936577750453LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1389 = 4876U;
	uint8_t x1390 = 0U;
	int32_t x1392 = INT32_MIN;

	t29 = (x1389-((x1390>>x1391)%x1392));

	if (t29 != 4876U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1417 = 1U;
	uint8_t x1418 = 1U;
	volatile int16_t x1420 = INT16_MAX;
	static volatile uint32_t t30 = 2U;

	t30 = (x1417-((x1418>>x1419)%x1420));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1618 = 103U;
	uint16_t x1619 = 22U;
	int64_t x1620 = INT64_MIN;
	static volatile int64_t t31 = -1594893419772LL;

	t31 = (x1617-((x1618>>x1619)%x1620));

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x1677 = INT32_MIN;
	int32_t x1678 = INT32_MAX;
	uint8_t x1679 = 1U;
	static int16_t x1680 = -1;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x1677-((x1678>>x1679)%x1680));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1681 = UINT8_MAX;
	uint64_t x1683 = 0LLU;
	uint32_t x1684 = 178U;
	volatile uint64_t t33 = 429325396401LLU;

	t33 = (x1681-((x1682>>x1683)%x1684));

	if (t33 != 234LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1721 = 31678LLU;
	uint16_t x1722 = UINT16_MAX;
	int8_t x1723 = 0;
	uint16_t x1724 = 28733U;
	static uint64_t t34 = 5LLU;

	t34 = (x1721-((x1722>>x1723)%x1724));

	if (t34 != 23609LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1862 = 797;
	int8_t x1863 = 1;
	int64_t x1864 = INT64_MIN;
	int64_t t35 = -104125643316011LL;

	t35 = (x1861-((x1862>>x1863)%x1864));

	if (t35 != -396LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1993 = INT8_MAX;
	volatile int64_t x1994 = INT64_MAX;
	volatile uint8_t x1995 = 2U;
	uint64_t x1996 = 127LLU;
	static uint64_t t36 = 566613566423583215LLU;

	t36 = (x1993-((x1994>>x1995)%x1996));

	if (t36 != 96LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2005 = INT16_MIN;
	int8_t x2006 = 3;
	uint16_t x2007 = 1U;
	uint64_t t37 = 4649LLU;

	t37 = (x2005-((x2006>>x2007)%x2008));

	if (t37 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2161 = 2U;
	int64_t x2162 = 32LL;
	static int16_t x2163 = 4;
	int64_t x2164 = INT64_MIN;
	int64_t t38 = -1825455672357337LL;

	t38 = (x2161-((x2162>>x2163)%x2164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2181 = 0U;
	static int32_t x2182 = 1817;
	uint16_t x2183 = 2U;
	uint16_t x2184 = 11U;
	static volatile int32_t t39 = -193;

	t39 = (x2181-((x2182>>x2183)%x2184));

	if (t39 != -3) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2209 = INT32_MAX;
	int16_t x2210 = INT16_MAX;
	uint8_t x2211 = 11U;
	uint8_t x2212 = 9U;

	t40 = (x2209-((x2210>>x2211)%x2212));

	if (t40 != 2147483641) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2357 = INT32_MIN;
	uint64_t x2358 = 2LLU;
	static int16_t x2360 = INT16_MIN;
	uint64_t t41 = 30LLU;

	t41 = (x2357-((x2358>>x2359)%x2360));

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2381 = UINT8_MAX;
	uint8_t x2382 = 56U;
	static uint8_t x2384 = 118U;
	volatile int32_t t42 = -229776;

	t42 = (x2381-((x2382>>x2383)%x2384));

	if (t42 != 227) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2445 = 0;
	static uint32_t x2446 = 56U;
	volatile int32_t x2447 = 1;
	int64_t x2448 = -1LL;
	volatile int64_t t43 = -231208264388415204LL;

	t43 = (x2445-((x2446>>x2447)%x2448));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2589 = UINT32_MAX;
	uint32_t x2590 = 2835U;
	uint8_t x2591 = 12U;
	volatile int64_t x2592 = INT64_MIN;
	volatile int64_t t44 = 6393232LL;

	t44 = (x2589-((x2590>>x2591)%x2592));

	if (t44 != 4294967295LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2593 = -47;
	static uint64_t x2594 = 18LLU;
	static uint8_t x2595 = 1U;
	int8_t x2596 = INT8_MAX;
	volatile uint64_t t45 = 128978400LLU;

	t45 = (x2593-((x2594>>x2595)%x2596));

	if (t45 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2597 = INT8_MAX;
	uint16_t x2598 = UINT16_MAX;
	int64_t x2599 = 0LL;
	int32_t x2600 = INT32_MAX;
	volatile int32_t t46 = 12;

	t46 = (x2597-((x2598>>x2599)%x2600));

	if (t46 != -65408) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2605 = -8;
	uint64_t x2606 = 9614LLU;
	static volatile int16_t x2607 = 0;
	uint32_t x2608 = UINT32_MAX;
	uint64_t t47 = 7092164505654LLU;

	t47 = (x2605-((x2606>>x2607)%x2608));

	if (t47 != 18446744073709541994LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2629 = -368719802582LL;
	volatile uint8_t x2631 = 10U;
	static volatile int64_t t48 = -69670188595794LL;

	t48 = (x2629-((x2630>>x2631)%x2632));

	if (t48 != -368719802582LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2661 = INT16_MIN;
	static uint16_t x2662 = 6U;
	uint32_t x2664 = 4U;
	uint32_t t49 = 4079U;

	t49 = (x2661-((x2662>>x2663)%x2664));

	if (t49 != 4294934528U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2701 = 557;
	int64_t x2702 = 194075LL;
	uint8_t x2703 = 3U;
	uint64_t x2704 = 1005677611461LLU;
	volatile uint64_t t50 = 2LLU;

	t50 = (x2701-((x2702>>x2703)%x2704));

	if (t50 != 18446744073709527914LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2717 = -11;
	volatile int16_t x2718 = 10317;
	uint8_t x2719 = 0U;
	int64_t x2720 = 276929LL;
	static int64_t t51 = -1LL;

	t51 = (x2717-((x2718>>x2719)%x2720));

	if (t51 != -10328LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3077 = 2;
	uint16_t x3078 = UINT16_MAX;
	uint8_t x3079 = 2U;
	int8_t x3080 = -1;
	volatile int32_t t52 = 289;

	t52 = (x3077-((x3078>>x3079)%x3080));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3225 = -124;
	static volatile int32_t x3226 = 8;
	uint32_t x3227 = 8U;
	int16_t x3228 = INT16_MIN;
	volatile int32_t t53 = -50;

	t53 = (x3225-((x3226>>x3227)%x3228));

	if (t53 != -124) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3273 = 22579681LLU;
	uint8_t x3274 = 4U;
	uint16_t x3275 = 5U;
	volatile uint64_t t54 = 778680574148536041LLU;

	t54 = (x3273-((x3274>>x3275)%x3276));

	if (t54 != 22579681LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3277 = INT8_MIN;
	uint64_t x3278 = UINT64_MAX;
	uint8_t x3279 = 52U;
	static int8_t x3280 = INT8_MIN;
	uint64_t t55 = 309658LLU;

	t55 = (x3277-((x3278>>x3279)%x3280));

	if (t55 != 18446744073709547393LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3369 = INT64_MAX;
	uint64_t x3370 = 412LLU;
	uint8_t x3371 = 10U;
	static int32_t x3372 = -5518025;
	volatile uint64_t t56 = 127276625252069325LLU;

	t56 = (x3369-((x3370>>x3371)%x3372));

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3433 = INT64_MIN;
	volatile uint16_t x3435 = 2U;
	int16_t x3436 = INT16_MIN;
	static volatile uint64_t t57 = 25846591182LLU;

	t57 = (x3433-((x3434>>x3435)%x3436));

	if (t57 != 9223372036853823908LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3446 = 3U;
	uint8_t x3448 = 1U;
	int32_t t58 = -359605126;

	t58 = (x3445-((x3446>>x3447)%x3448));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3498 = INT64_MAX;
	int8_t x3499 = 1;
	int16_t x3500 = -1;
	int64_t t59 = -165579673568959LL;

	t59 = (x3497-((x3498>>x3499)%x3500));

	if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3751 = 11U;
	int64_t t60 = -6814080020LL;

	t60 = (x3749-((x3750>>x3751)%x3752));

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3829 = INT16_MAX;
	uint32_t x3830 = UINT32_MAX;
	uint64_t x3831 = 0LLU;
	static int16_t x3832 = INT16_MIN;
	uint32_t t61 = 2680U;

	t61 = (x3829-((x3830>>x3831)%x3832));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3853 = -109835019362LL;
	int32_t x3854 = 0;
	volatile int16_t x3855 = 1;
	volatile int64_t t62 = -3254513268178LL;

	t62 = (x3853-((x3854>>x3855)%x3856));

	if (t62 != -109835019362LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4017 = 116U;
	int8_t x4019 = 1;
	uint16_t x4020 = UINT16_MAX;

	t63 = (x4017-((x4018>>x4019)%x4020));

	if (t63 != -16267) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x4053 = -1;
	uint8_t x4056 = 24U;
	static uint64_t t64 = 227015721612LLU;

	t64 = (x4053-((x4054>>x4055)%x4056));

	if (t64 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4057 = 327U;
	uint16_t x4058 = 153U;
	static uint8_t x4059 = 6U;
	volatile int16_t x4060 = -1;
	volatile int32_t t65 = -150623230;

	t65 = (x4057-((x4058>>x4059)%x4060));

	if (t65 != 327) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x4061 = 680975625U;
	volatile uint8_t x4063 = 12U;
	int64_t x4064 = INT64_MIN;

	t66 = (x4061-((x4062>>x4063)%x4064));

	if (t66 != 680975625LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4089 = INT8_MIN;
	int64_t x4090 = INT64_MAX;
	static uint8_t x4091 = 26U;
	uint8_t x4092 = UINT8_MAX;

	t67 = (x4089-((x4090>>x4091)%x4092));

	if (t67 != -159LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x4169 = 668509589U;
	static volatile uint32_t x4171 = 0U;
	volatile uint32_t t68 = 190823U;

	t68 = (x4169-((x4170>>x4171)%x4172));

	if (t68 != 668508471U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4329 = INT16_MIN;
	volatile uint32_t x4330 = UINT32_MAX;
	uint8_t x4331 = 3U;
	int8_t x4332 = INT8_MIN;
	volatile uint32_t t69 = 489561U;

	t69 = (x4329-((x4330>>x4331)%x4332));

	if (t69 != 3758063617U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x4338 = 1240702343042LLU;
	uint8_t x4339 = 0U;
	int16_t x4340 = 1;
	static volatile uint64_t t70 = 29732LLU;

	t70 = (x4337-((x4338>>x4339)%x4340));

	if (t70 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4345 = 7U;
	uint8_t x4346 = 41U;
	uint8_t x4347 = 1U;
	int64_t x4348 = INT64_MAX;
	int64_t t71 = -7446177398607924LL;

	t71 = (x4345-((x4346>>x4347)%x4348));

	if (t71 != -13LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4389 = 5988676023133LLU;
	int64_t x4390 = INT64_MAX;
	uint32_t x4391 = 31U;
	uint32_t x4392 = UINT32_MAX;
	uint64_t t72 = 116389378971110264LLU;

	t72 = (x4389-((x4390>>x4391)%x4392));

	if (t72 != 5988676023133LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4485 = 975U;
	int8_t x4486 = 61;
	volatile int8_t x4487 = 1;
	uint32_t x4488 = 39024247U;
	volatile uint32_t t73 = 33669U;

	t73 = (x4485-((x4486>>x4487)%x4488));

	if (t73 != 945U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4685 = INT64_MAX;
	uint16_t x4687 = 6U;
	static volatile uint8_t x4688 = 76U;
	int64_t t74 = 202LL;

	t74 = (x4685-((x4686>>x4687)%x4688));

	if (t74 != 9223372036854775756LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4787 = 1U;
	static uint64_t x4788 = 17462170585243487LLU;
	volatile uint64_t t75 = 1LLU;

	t75 = (x4785-((x4786>>x4787)%x4788));

	if (t75 != 9220026069008561137LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x4813 = -4079070188LL;
	uint32_t x4814 = UINT32_MAX;
	int8_t x4815 = 1;
	volatile int64_t t76 = 484363LL;

	t76 = (x4813-((x4814>>x4815)%x4816));

	if (t76 != -4079070195LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x4861 = INT64_MAX;
	static uint8_t x4862 = 9U;
	uint8_t x4863 = 4U;
	int32_t x4864 = INT32_MIN;
	static int64_t t77 = INT64_MAX;

	t77 = (x4861-((x4862>>x4863)%x4864));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x4905 = 5211U;
	volatile int32_t x4906 = 4;
	uint8_t x4907 = 15U;
	uint8_t x4908 = 11U;
	volatile uint32_t t78 = 312U;

	t78 = (x4905-((x4906>>x4907)%x4908));

	if (t78 != 5211U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5142 = 3177532736910551LLU;
	volatile uint16_t x5143 = 8U;
	uint8_t x5144 = 12U;
	static volatile uint64_t t79 = UINT64_MAX;

	t79 = (x5141-((x5142>>x5143)%x5144));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x5321 = 3775753845919292LLU;
	int16_t x5322 = INT16_MAX;
	uint8_t x5323 = 3U;

	t80 = (x5321-((x5322>>x5323)%x5324));

	if (t80 != 3775753845919292LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5334 = 2;
	int64_t x5335 = 7LL;
	int16_t x5336 = -19;
	int32_t t81 = INT32_MAX;

	t81 = (x5333-((x5334>>x5335)%x5336));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x5417 = UINT8_MAX;
	volatile int64_t x5418 = 5086211LL;
	static volatile uint64_t x5420 = UINT64_MAX;
	static volatile uint64_t t82 = 2801191LLU;

	t82 = (x5417-((x5418>>x5419)%x5420));

	if (t82 != 253LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5461 = 0U;
	int8_t x5462 = 0;
	uint64_t x5463 = 0LLU;
	uint8_t x5464 = 7U;

	t83 = (x5461-((x5462>>x5463)%x5464));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x5517 = INT64_MAX;
	int8_t x5518 = 19;
	int16_t x5519 = 8;
	int16_t x5520 = -411;
	int64_t t84 = INT64_MAX;

	t84 = (x5517-((x5518>>x5519)%x5520));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x5601 = -1;
	uint16_t x5602 = 12U;
	volatile uint32_t x5603 = 11U;
	uint8_t x5604 = UINT8_MAX;
	static int32_t t85 = -674160;

	t85 = (x5601-((x5602>>x5603)%x5604));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5661 = 26789977LLU;
	volatile int32_t x5662 = INT32_MAX;
	uint8_t x5663 = 22U;
	int64_t x5664 = -1LL;
	static volatile uint64_t t86 = 656730767877121773LLU;

	t86 = (x5661-((x5662>>x5663)%x5664));

	if (t86 != 26789977LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x5677 = -25;
	uint32_t x5678 = 9716524U;
	uint8_t x5679 = 2U;
	static volatile uint32_t t87 = 1U;

	t87 = (x5677-((x5678>>x5679)%x5680));

	if (t87 != 4292538140U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5725 = -675777566655582221LL;
	uint32_t x5726 = 3980598U;
	uint8_t x5727 = 1U;

	t88 = (x5725-((x5726>>x5727)%x5728));

	if (t88 != -675777566657572520LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5749 = -1;
	uint8_t x5750 = UINT8_MAX;
	int8_t x5752 = 13;
	volatile int32_t t89 = 22;

	t89 = (x5749-((x5750>>x5751)%x5752));

	if (t89 != -11) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5774 = 0LL;
	int8_t x5775 = 0;
	int64_t x5776 = -1372850366555800LL;
	static volatile int64_t t90 = 4212814183231500LL;

	t90 = (x5773-((x5774>>x5775)%x5776));

	if (t90 != -4575LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5861 = -3;
	uint64_t x5862 = 69401800223581LLU;
	uint8_t x5863 = 0U;
	uint8_t x5864 = 13U;
	static uint64_t t91 = 1LLU;

	t91 = (x5861-((x5862>>x5863)%x5864));

	if (t91 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5881 = INT16_MIN;
	uint16_t x5882 = 26U;
	uint16_t x5883 = 7U;
	int32_t t92 = 24499;

	t92 = (x5881-((x5882>>x5883)%x5884));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5934 = 1;
	int8_t x5935 = 3;
	int32_t x5936 = INT32_MIN;
	volatile int32_t t93 = 1396;

	t93 = (x5933-((x5934>>x5935)%x5936));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5949 = -1;
	uint16_t x5950 = 78U;
	uint8_t x5951 = 3U;

	t94 = (x5949-((x5950>>x5951)%x5952));

	if (t94 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x6025 = 325903918;
	uint16_t x6026 = UINT16_MAX;
	int16_t x6028 = -1;
	volatile int32_t t95 = 183034522;

	t95 = (x6025-((x6026>>x6027)%x6028));

	if (t95 != 325903918) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x6085 = INT16_MIN;
	int16_t x6087 = 0;
	static uint64_t x6088 = 32303837468086275LLU;
	uint64_t t96 = 425591446856LLU;

	t96 = (x6085-((x6086>>x6087)%x6088));

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6097 = 15792208020LLU;
	int32_t x6098 = 87290314;
	int8_t x6099 = 25;
	int32_t x6100 = 8909435;
	static uint64_t t97 = 1LLU;

	t97 = (x6097-((x6098>>x6099)%x6100));

	if (t97 != 15792208018LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6213 = UINT64_MAX;
	uint8_t x6214 = UINT8_MAX;
	int8_t x6215 = 1;
	int64_t x6216 = INT64_MAX;

	t98 = (x6213-((x6214>>x6215)%x6216));

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6233 = -1;
	int32_t x6234 = INT32_MAX;
	static int8_t x6235 = 11;
	uint8_t x6236 = UINT8_MAX;
	volatile int32_t t99 = -128589;

	t99 = (x6233-((x6234>>x6235)%x6236));

	if (t99 != -16) { NG(); } else { ; }
	
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

