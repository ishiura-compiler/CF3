#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = 247298072236251402LL;
uint32_t x69 = UINT32_MAX;
static int8_t x70 = 1;
uint64_t x255 = 2828256LLU;
uint8_t x330 = 7U;
int32_t x331 = -1;
int32_t x332 = -33300;
volatile int16_t x383 = INT16_MAX;
volatile uint16_t x413 = UINT16_MAX;
uint32_t x415 = 1U;
int32_t x416 = -19;
uint64_t x585 = 6100368295142LLU;
int64_t t11 = 388125LL;
uint8_t x902 = 0U;
volatile uint32_t x1011 = 1967470569U;
volatile int64_t x1012 = -1LL;
uint8_t x1226 = 3U;
volatile int16_t x1234 = 1;
uint16_t x1236 = 10U;
uint64_t x1564 = UINT64_MAX;
uint8_t x1573 = 33U;
int8_t x1574 = 10;
int64_t x1576 = -1852072150728LL;
static volatile uint32_t x1607 = 2574255U;
volatile uint64_t t24 = 682843697LLU;
int8_t x2049 = 2;
int64_t x2051 = -1LL;
int64_t t26 = 1021997828117LL;
int16_t x2170 = 14;
int16_t x2172 = INT16_MAX;
volatile int16_t x2251 = -197;
uint64_t x2445 = 198241649829604358LLU;
uint64_t t29 = 68LLU;
uint8_t x2554 = 18U;
static int64_t x2556 = -1LL;
volatile int64_t t31 = 86723902959LL;
volatile uint16_t x2641 = 1U;
static int64_t x2644 = -1LL;
int64_t t32 = 11291895809LL;
int64_t t33 = 102630517161077LL;
int8_t x2864 = -1;
uint64_t t35 = 123441538LLU;
volatile uint32_t t36 = 471U;
uint64_t t37 = 15564603872687331LLU;
static volatile int32_t x3194 = 1;
int16_t x3615 = INT16_MIN;
uint64_t t41 = 556283341546119LLU;
static uint64_t x4117 = 4009932706LLU;
static uint8_t x4120 = 5U;
static uint64_t t46 = 69626640452814LLU;
int64_t x4380 = INT64_MIN;
volatile int16_t x4453 = INT16_MAX;
uint16_t x4553 = 7U;
int32_t x4556 = -256664;
uint64_t t50 = 2973118151LLU;
uint64_t x4645 = 227471602LLU;
uint8_t x4646 = 15U;
uint16_t x4717 = UINT16_MAX;
static uint8_t x4807 = 26U;
int8_t x4910 = 0;
static volatile uint64_t t56 = 722912052373790LLU;
uint32_t x5351 = 52710403U;
static uint16_t x5373 = 15U;
uint16_t x5469 = UINT16_MAX;
uint16_t x5471 = UINT16_MAX;
int64_t t66 = -118510964574706LL;
volatile uint16_t x5586 = 0U;
int64_t x5587 = INT64_MIN;
uint64_t t67 = 486568LLU;
uint16_t x5849 = UINT16_MAX;
static uint16_t x5953 = UINT16_MAX;
static int8_t x5954 = 0;
int64_t t70 = -14566624542368LL;
static uint64_t x5961 = 242101100991544638LLU;
uint32_t x6237 = 14U;
uint16_t x6387 = 9777U;
static volatile int64_t t73 = -5361LL;
static volatile int8_t x6609 = 1;
uint8_t x6629 = UINT8_MAX;
int32_t t77 = 4592;
uint16_t x6642 = 8U;
int8_t x6643 = 1;
volatile uint32_t x6809 = 47488U;
volatile int64_t x7189 = 12LL;
int64_t x7579 = INT64_MIN;
uint8_t x7581 = UINT8_MAX;
volatile int16_t x7583 = -1;
static uint64_t x7665 = 1321886467770223767LLU;
int16_t x7666 = 0;
volatile uint64_t t86 = 2LLU;
uint8_t x7930 = 0U;
uint64_t x7932 = 1563LLU;
volatile uint16_t x8004 = 1U;
volatile uint32_t t89 = 2U;
volatile int64_t x8273 = 1LL;
volatile uint8_t x8302 = 9U;
static int16_t x8359 = INT16_MIN;
volatile uint32_t x8405 = 14U;
static int16_t x8408 = 14;
volatile uint32_t t95 = 303510U;
uint8_t x8514 = 1U;
static int8_t x8516 = INT8_MAX;
int64_t t96 = -458154338610558613LL;
uint8_t x8681 = 40U;
volatile uint16_t x8682 = 2U;
int8_t x8822 = 1;


void f0(void) {
	uint8_t x21 = 1U;
	uint8_t x22 = 2U;
	static volatile int32_t x23 = INT32_MIN;
	static uint32_t x24 = 467617U;
	static volatile uint32_t t0 = 7U;

	t0 = ((x21<<x22)+(x23*x24));

	if (t0 != 2147483652U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x33 = 308964U;
	uint8_t x34 = 2U;
	volatile int64_t x35 = 10832560698LL;
	int16_t x36 = 5325;

	t1 = ((x33<<x34)+(x35*x36));

	if (t1 != 57683386952706LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x71 = 5;
	int32_t x72 = 123663310;
	uint32_t t2 = 4U;

	t2 = ((x69<<x70)+(x71*x72));

	if (t2 != 618316548U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x225 = INT64_MAX;
	uint8_t x226 = 0U;
	uint16_t x227 = 139U;
	int64_t x228 = -457818LL;
	static int64_t t3 = 1518572813826LL;

	t3 = ((x225<<x226)+(x227*x228));

	if (t3 != 9223372036791139105LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x253 = 2U;
	uint8_t x254 = 13U;
	int64_t x256 = INT64_MAX;
	volatile uint64_t t4 = 11LLU;

	t4 = ((x253<<x254)+(x255*x256));

	if (t4 != 18446744073706739744LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x329 = 1;
	volatile int32_t t5 = 2641;

	t5 = ((x329<<x330)+(x331*x332));

	if (t5 != 33428) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x381 = 0U;
	uint16_t x382 = 9U;
	static volatile uint16_t x384 = UINT16_MAX;
	int32_t t6 = -10;

	t6 = ((x381<<x382)+(x383*x384));

	if (t6 != 2147385345) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x414 = 1LLU;
	uint32_t t7 = 692996238U;

	t7 = ((x413<<x414)+(x415*x416));

	if (t7 != 131051U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x586 = 0U;
	static uint32_t x587 = 3U;
	volatile uint16_t x588 = UINT16_MAX;
	uint64_t t8 = 546585340290064LLU;

	t8 = ((x585<<x586)+(x587*x588));

	if (t8 != 6100368491747LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x593 = 132796426976891845LLU;
	int8_t x594 = 34;
	static int8_t x595 = INT8_MAX;
	volatile int16_t x596 = 4;
	volatile uint64_t t9 = 305598276488154LLU;

	t9 = ((x593<<x594)+(x595*x596));

	if (t9 != 5014845132394988028LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x629 = 1;
	volatile int8_t x630 = 1;
	static int8_t x631 = INT8_MAX;
	uint8_t x632 = UINT8_MAX;
	int32_t t10 = 1852654;

	t10 = ((x629<<x630)+(x631*x632));

	if (t10 != 32387) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x845 = UINT32_MAX;
	int32_t x846 = 0;
	static int64_t x847 = 3LL;
	int64_t x848 = -1LL;

	t11 = ((x845<<x846)+(x847*x848));

	if (t11 != 4294967292LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x901 = 43U;
	int32_t x903 = INT32_MIN;
	int64_t x904 = -1LL;
	int64_t t12 = -50823166750LL;

	t12 = ((x901<<x902)+(x903*x904));

	if (t12 != 2147483691LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1009 = 33;
	uint16_t x1010 = 0U;
	volatile int64_t t13 = -2851769507541489LL;

	t13 = ((x1009<<x1010)+(x1011*x1012));

	if (t13 != -1967470536LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x1141 = 3LLU;
	uint8_t x1142 = 0U;
	volatile uint32_t x1143 = 50U;
	static uint64_t x1144 = 13LLU;
	volatile uint64_t t14 = 108739LLU;

	t14 = ((x1141<<x1142)+(x1143*x1144));

	if (t14 != 653LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x1225 = INT8_MAX;
	volatile int8_t x1227 = INT8_MAX;
	int32_t x1228 = 77844;
	int32_t t15 = -5724288;

	t15 = ((x1225<<x1226)+(x1227*x1228));

	if (t15 != 9887204) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1233 = 570U;
	static volatile uint16_t x1235 = 0U;
	int32_t t16 = -26;

	t16 = ((x1233<<x1234)+(x1235*x1236));

	if (t16 != 1140) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1397 = 25;
	int8_t x1398 = 1;
	int64_t x1399 = INT64_MAX;
	volatile int64_t x1400 = -1LL;
	static volatile int64_t t17 = -7852632479761LL;

	t17 = ((x1397<<x1398)+(x1399*x1400));

	if (t17 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1453 = INT16_MAX;
	int16_t x1454 = 1;
	uint64_t x1455 = 7123881280366LLU;
	static int32_t x1456 = -1;
	uint64_t t18 = 5052706380LLU;

	t18 = ((x1453<<x1454)+(x1455*x1456));

	if (t18 != 18446736949828336784LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1485 = INT8_MAX;
	static volatile int16_t x1486 = 7;
	int32_t x1487 = -81;
	static int32_t x1488 = -296;
	volatile int32_t t19 = 1325302;

	t19 = ((x1485<<x1486)+(x1487*x1488));

	if (t19 != 40232) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1561 = 5108380761LLU;
	uint32_t x1562 = 5U;
	volatile uint32_t x1563 = 1765443773U;
	volatile uint64_t t20 = 3554941LLU;

	t20 = ((x1561<<x1562)+(x1563*x1564));

	if (t20 != 161702740579LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1575 = -1;
	volatile int64_t t21 = -186958939956832LL;

	t21 = ((x1573<<x1574)+(x1575*x1576));

	if (t21 != 1852072184520LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1605 = 0U;
	int16_t x1606 = 0;
	static volatile int32_t x1608 = -11;
	static volatile uint32_t t22 = 7U;

	t22 = ((x1605<<x1606)+(x1607*x1608));

	if (t22 != 4266650491U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1613 = INT8_MAX;
	static int8_t x1614 = 19;
	int16_t x1615 = -3155;
	int8_t x1616 = -1;
	volatile int32_t t23 = -627658159;

	t23 = ((x1613<<x1614)+(x1615*x1616));

	if (t23 != 66587731) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1981 = UINT32_MAX;
	uint64_t x1982 = 4LLU;
	volatile int8_t x1983 = INT8_MIN;
	uint64_t x1984 = 160414649250060LLU;

	t24 = ((x1981<<x1982)+(x1983*x1984));

	if (t24 != 18426211002900511216LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1989 = 199U;
	uint32_t x1990 = 6U;
	int64_t x1991 = -266293028917LL;
	static volatile int32_t x1992 = 30;
	int64_t t25 = -10148910512357LL;

	t25 = ((x1989<<x1990)+(x1991*x1992));

	if (t25 != -7988790854774LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x2050 = 3U;
	int64_t x2052 = INT64_MAX;

	t26 = ((x2049<<x2050)+(x2051*x2052));

	if (t26 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2169 = 8;
	static int8_t x2171 = -1;
	static int32_t t27 = 80778;

	t27 = ((x2169<<x2170)+(x2171*x2172));

	if (t27 != 98305) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x2249 = 403567543LLU;
	int8_t x2250 = 52;
	volatile uint8_t x2252 = UINT8_MAX;
	volatile uint64_t t28 = 297625LLU;

	t28 = ((x2249<<x2250)+(x2251*x2252));

	if (t28 != 4282923245629291461LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2446 = 0;
	static int16_t x2447 = INT16_MIN;
	int16_t x2448 = INT16_MIN;

	t29 = ((x2445<<x2446)+(x2447*x2448));

	if (t29 != 198241650903346182LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x2513 = INT8_MAX;
	int16_t x2514 = 3;
	volatile uint32_t x2515 = UINT32_MAX;
	uint16_t x2516 = 3U;
	static volatile uint32_t t30 = 87187U;

	t30 = ((x2513<<x2514)+(x2515*x2516));

	if (t30 != 1013U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2553 = UINT32_MAX;
	int64_t x2555 = INT64_MAX;

	t31 = ((x2553<<x2554)+(x2555*x2556));

	if (t31 != -9223372032560070655LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2642 = 23U;
	int16_t x2643 = 181;

	t32 = ((x2641<<x2642)+(x2643*x2644));

	if (t32 != 8388427LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2725 = UINT16_MAX;
	uint8_t x2726 = 4U;
	int64_t x2727 = -1LL;
	int64_t x2728 = -43895LL;

	t33 = ((x2725<<x2726)+(x2727*x2728));

	if (t33 != 1092455LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2813 = 46U;
	int8_t x2814 = 4;
	int8_t x2815 = -1;
	uint8_t x2816 = 2U;
	int32_t t34 = 381281;

	t34 = ((x2813<<x2814)+(x2815*x2816));

	if (t34 != 734) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2861 = 48892279985LLU;
	int64_t x2862 = 0LL;
	static uint8_t x2863 = 118U;

	t35 = ((x2861<<x2862)+(x2863*x2864));

	if (t35 != 48892279867LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x2869 = INT8_MAX;
	volatile uint16_t x2870 = 6U;
	uint32_t x2871 = 217828736U;
	static int32_t x2872 = -888594550;

	t36 = ((x2869<<x2870)+(x2871*x2872));

	if (t36 != 924804800U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x3037 = INT16_MAX;
	static int16_t x3038 = 1;
	volatile uint32_t x3039 = 4686203U;
	volatile uint64_t x3040 = 1682603409890565477LLU;

	t37 = ((x3037<<x3038)+(x3039*x3040));

	if (t37 != 15733164470900475013LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x3193 = 20U;
	int8_t x3195 = 4;
	static uint32_t x3196 = UINT32_MAX;
	volatile uint32_t t38 = 773917U;

	t38 = ((x3193<<x3194)+(x3195*x3196));

	if (t38 != 36U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x3293 = 73373376589LL;
	uint64_t x3294 = 0LLU;
	uint32_t x3295 = 37585U;
	uint16_t x3296 = 34U;
	volatile int64_t t39 = 41816843229LL;

	t39 = ((x3293<<x3294)+(x3295*x3296));

	if (t39 != 73374654479LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x3485 = 1;
	static uint32_t x3486 = 5U;
	static volatile int64_t x3487 = -1LL;
	int8_t x3488 = -1;
	static int64_t t40 = 1443LL;

	t40 = ((x3485<<x3486)+(x3487*x3488));

	if (t40 != 33LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x3613 = 79964044329LLU;
	static uint8_t x3614 = 1U;
	static int8_t x3616 = INT8_MIN;

	t41 = ((x3613<<x3614)+(x3615*x3616));

	if (t41 != 159932282962LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x3681 = 7U;
	int8_t x3682 = 14;
	static uint8_t x3683 = 49U;
	int64_t x3684 = -2322982516547LL;
	int64_t t42 = 97503258476915950LL;

	t42 = ((x3681<<x3682)+(x3683*x3684));

	if (t42 != -113826143196115LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x3825 = UINT16_MAX;
	int8_t x3826 = 0;
	static volatile uint32_t x3827 = UINT32_MAX;
	int8_t x3828 = INT8_MIN;
	volatile uint32_t t43 = 9U;

	t43 = ((x3825<<x3826)+(x3827*x3828));

	if (t43 != 65663U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x4037 = INT16_MAX;
	int16_t x4038 = 2;
	static int32_t x4039 = -1;
	int8_t x4040 = -16;
	int32_t t44 = -251409550;

	t44 = ((x4037<<x4038)+(x4039*x4040));

	if (t44 != 131084) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x4065 = 9U;
	uint8_t x4066 = 11U;
	uint16_t x4067 = 169U;
	int16_t x4068 = 121;
	int32_t t45 = -59;

	t45 = ((x4065<<x4066)+(x4067*x4068));

	if (t45 != 38881) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x4118 = 0;
	volatile uint32_t x4119 = 1322U;

	t46 = ((x4117<<x4118)+(x4119*x4120));

	if (t46 != 4009939316LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x4377 = INT8_MAX;
	uint8_t x4378 = 1U;
	volatile uint64_t x4379 = UINT64_MAX;
	uint64_t t47 = 17998113733LLU;

	t47 = ((x4377<<x4378)+(x4379*x4380));

	if (t47 != 9223372036854776062LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x4454 = 0;
	int16_t x4455 = INT16_MIN;
	uint16_t x4456 = UINT16_MAX;
	volatile int32_t t48 = 6355;

	t48 = ((x4453<<x4454)+(x4455*x4456));

	if (t48 != -2147418113) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x4554 = 14U;
	static int8_t x4555 = INT8_MAX;
	volatile int32_t t49 = -39512350;

	t49 = ((x4553<<x4554)+(x4555*x4556));

	if (t49 != -32481640) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x4621 = UINT64_MAX;
	uint16_t x4622 = 13U;
	volatile int8_t x4623 = -1;
	uint32_t x4624 = 26019U;

	t50 = ((x4621<<x4622)+(x4623*x4624));

	if (t50 != 4294933085LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x4647 = 1;
	int32_t x4648 = INT32_MAX;
	volatile uint64_t t51 = 6LLU;

	t51 = ((x4645<<x4646)+(x4647*x4648));

	if (t51 != 7455936937983LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x4718 = 3U;
	int64_t x4719 = -353537LL;
	volatile int32_t x4720 = INT32_MIN;
	static int64_t t52 = 25800430773453656LL;

	t52 = ((x4717<<x4718)+(x4719*x4720));

	if (t52 != 759214926987256LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4769 = 1LLU;
	int8_t x4770 = 1;
	static uint8_t x4771 = UINT8_MAX;
	static uint16_t x4772 = 14U;
	volatile uint64_t t53 = 105860144517256532LLU;

	t53 = ((x4769<<x4770)+(x4771*x4772));

	if (t53 != 3572LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x4805 = UINT32_MAX;
	uint8_t x4806 = 1U;
	int16_t x4808 = -25;
	volatile uint32_t t54 = 214U;

	t54 = ((x4805<<x4806)+(x4807*x4808));

	if (t54 != 4294966644U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4909 = INT8_MAX;
	static int16_t x4911 = -1;
	int8_t x4912 = INT8_MAX;
	volatile int32_t t55 = -31;

	t55 = ((x4909<<x4910)+(x4911*x4912));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x5061 = 0U;
	int8_t x5062 = 1;
	volatile uint64_t x5063 = 1833777025009378089LLU;
	static uint32_t x5064 = 2U;

	t56 = ((x5061<<x5062)+(x5063*x5064));

	if (t56 != 3667554050018756178LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x5153 = 1057724962970LLU;
	int16_t x5154 = 4;
	int16_t x5155 = -1;
	static int32_t x5156 = 0;
	static volatile uint64_t t57 = 2057567202LLU;

	t57 = ((x5153<<x5154)+(x5155*x5156));

	if (t57 != 16923599407520LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x5193 = 254U;
	volatile uint32_t x5194 = 15U;
	volatile int8_t x5195 = INT8_MAX;
	int32_t x5196 = -1;
	int32_t t58 = 511040215;

	t58 = ((x5193<<x5194)+(x5195*x5196));

	if (t58 != 8322945) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x5301 = 809U;
	uint32_t x5302 = 3U;
	static uint32_t x5303 = UINT32_MAX;
	volatile int32_t x5304 = -1;
	static volatile uint32_t t59 = 276856172U;

	t59 = ((x5301<<x5302)+(x5303*x5304));

	if (t59 != 6473U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x5349 = 508LL;
	uint64_t x5350 = 0LLU;
	uint16_t x5352 = 6310U;
	volatile int64_t t60 = -16143108662680835LL;

	t60 = ((x5349<<x5350)+(x5351*x5352));

	if (t60 != 1890161646LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x5353 = 366311LL;
	int16_t x5354 = 4;
	int8_t x5355 = INT8_MIN;
	static int8_t x5356 = -1;
	int64_t t61 = -237463480020388260LL;

	t61 = ((x5353<<x5354)+(x5355*x5356));

	if (t61 != 5861104LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x5374 = 8LL;
	int32_t x5375 = -900;
	uint8_t x5376 = UINT8_MAX;
	volatile int32_t t62 = 907;

	t62 = ((x5373<<x5374)+(x5375*x5376));

	if (t62 != -225660) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x5397 = INT8_MAX;
	static volatile int8_t x5398 = 0;
	int16_t x5399 = INT16_MAX;
	uint16_t x5400 = 2746U;
	int32_t t63 = 22;

	t63 = ((x5397<<x5398)+(x5399*x5400));

	if (t63 != 89978309) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x5470 = 0U;
	static uint32_t x5472 = 36U;
	static volatile uint32_t t64 = 4295U;

	t64 = ((x5469<<x5470)+(x5471*x5472));

	if (t64 != 2424795U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x5509 = INT16_MAX;
	int16_t x5510 = 3;
	static int32_t x5511 = INT32_MIN;
	uint32_t x5512 = UINT32_MAX;
	uint32_t t65 = 26059U;

	t65 = ((x5509<<x5510)+(x5511*x5512));

	if (t65 != 2147745784U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x5577 = 1631LL;
	uint64_t x5578 = 2LLU;
	uint32_t x5579 = 19559U;
	static volatile int8_t x5580 = 15;

	t66 = ((x5577<<x5578)+(x5579*x5580));

	if (t66 != 299909LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x5585 = 715LLU;
	static uint64_t x5588 = 12539558575LLU;

	t67 = ((x5585<<x5586)+(x5587*x5588));

	if (t67 != 9223372036854776523LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x5733 = 105LLU;
	static int32_t x5734 = 0;
	uint16_t x5735 = UINT16_MAX;
	int32_t x5736 = -1;
	uint64_t t68 = 2045164260294471034LLU;

	t68 = ((x5733<<x5734)+(x5735*x5736));

	if (t68 != 18446744073709486186LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5850 = 6;
	int8_t x5851 = INT8_MAX;
	int64_t x5852 = -972542681LL;
	int64_t t69 = -337136097843LL;

	t69 = ((x5849<<x5850)+(x5851*x5852));

	if (t69 != -123508726247LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x5955 = 119U;
	static volatile int64_t x5956 = 5551000726695790LL;

	t70 = ((x5953<<x5954)+(x5955*x5956));

	if (t70 != 660569086476864545LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5962 = 9U;
	uint8_t x5963 = UINT8_MAX;
	uint16_t x5964 = 6217U;
	volatile uint64_t t71 = 1382024862LLU;

	t71 = ((x5961<<x5962)+(x5963*x5964));

	if (t71 != 13275299265415130295LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x6238 = 17LLU;
	int16_t x6239 = INT16_MIN;
	int32_t x6240 = -1;
	uint32_t t72 = 95082U;

	t72 = ((x6237<<x6238)+(x6239*x6240));

	if (t72 != 1867776U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x6385 = UINT32_MAX;
	int8_t x6386 = 1;
	int64_t x6388 = -1LL;

	t73 = ((x6385<<x6386)+(x6387*x6388));

	if (t73 != 4294957517LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x6561 = 7757U;
	int16_t x6562 = 0;
	uint32_t x6563 = 1751013U;
	static volatile int32_t x6564 = -3;
	uint32_t t74 = 26251985U;

	t74 = ((x6561<<x6562)+(x6563*x6564));

	if (t74 != 4289722014U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x6581 = 342LL;
	static volatile uint16_t x6582 = 19U;
	static uint32_t x6583 = 18U;
	int16_t x6584 = INT16_MAX;
	volatile int64_t t75 = 23LL;

	t75 = ((x6581<<x6582)+(x6583*x6584));

	if (t75 != 179896302LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x6610 = 7U;
	volatile int8_t x6611 = 0;
	static int16_t x6612 = INT16_MIN;
	int32_t t76 = -149702;

	t76 = ((x6609<<x6610)+(x6611*x6612));

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x6630 = 2U;
	uint8_t x6631 = UINT8_MAX;
	volatile int8_t x6632 = 0;

	t77 = ((x6629<<x6630)+(x6631*x6632));

	if (t77 != 1020) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x6641 = UINT8_MAX;
	static volatile int16_t x6644 = -5;
	volatile int32_t t78 = 8;

	t78 = ((x6641<<x6642)+(x6643*x6644));

	if (t78 != 65275) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x6725 = INT64_MAX;
	int32_t x6726 = 0;
	uint8_t x6727 = 0U;
	static int8_t x6728 = INT8_MIN;
	int64_t t79 = INT64_MAX;

	t79 = ((x6725<<x6726)+(x6727*x6728));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x6810 = 28;
	int64_t x6811 = 532565896LL;
	int8_t x6812 = INT8_MIN;
	int64_t t80 = 6632020647862LL;

	t80 = ((x6809<<x6810)+(x6811*x6812));

	if (t80 != -68168434688LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x7077 = UINT64_MAX;
	uint8_t x7078 = 1U;
	uint64_t x7079 = 281LLU;
	int32_t x7080 = 1;
	static uint64_t t81 = 7640023144757LLU;

	t81 = ((x7077<<x7078)+(x7079*x7080));

	if (t81 != 279LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x7137 = 1076748981U;
	uint8_t x7138 = 0U;
	uint64_t x7139 = 28469441639633LLU;
	volatile int32_t x7140 = 17;
	uint64_t t82 = 11057775793433LLU;

	t82 = ((x7137<<x7138)+(x7139*x7140));

	if (t82 != 483981584622742LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x7190 = 9LLU;
	static uint32_t x7191 = 85084305U;
	int8_t x7192 = 62;
	int64_t t83 = 305601577391596LL;

	t83 = ((x7189<<x7190)+(x7191*x7192));

	if (t83 != 980265758LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x7577 = 1U;
	int8_t x7578 = 22;
	uint64_t x7580 = 106LLU;
	uint64_t t84 = 428909299864LLU;

	t84 = ((x7577<<x7578)+(x7579*x7580));

	if (t84 != 4194304LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x7582 = 10;
	volatile int16_t x7584 = 4;
	volatile int32_t t85 = -302529276;

	t85 = ((x7581<<x7582)+(x7583*x7584));

	if (t85 != 261116) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x7667 = 4;
	int8_t x7668 = INT8_MAX;

	t86 = ((x7665<<x7666)+(x7667*x7668));

	if (t86 != 1321886467770224275LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x7685 = 0U;
	static uint8_t x7686 = 1U;
	int64_t x7687 = -16648LL;
	uint32_t x7688 = 10U;
	int64_t t87 = -87154504227368LL;

	t87 = ((x7685<<x7686)+(x7687*x7688));

	if (t87 != -166480LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x7929 = INT64_MAX;
	uint8_t x7931 = UINT8_MAX;
	static volatile uint64_t t88 = 88LLU;

	t88 = ((x7929<<x7930)+(x7931*x7932));

	if (t88 != 9223372036855174372LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x8001 = UINT32_MAX;
	uint16_t x8002 = 2U;
	static int16_t x8003 = 57;

	t89 = ((x8001<<x8002)+(x8003*x8004));

	if (t89 != 53U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x8109 = 0U;
	int16_t x8110 = 0;
	int16_t x8111 = -1;
	static volatile int64_t x8112 = -1LL;
	int64_t t90 = -3511297657358456LL;

	t90 = ((x8109<<x8110)+(x8111*x8112));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x8225 = 204189143LLU;
	uint8_t x8226 = 11U;
	static volatile uint8_t x8227 = 41U;
	volatile int32_t x8228 = 2052517;
	uint64_t t91 = 2295660232006449696LLU;

	t91 = ((x8225<<x8226)+(x8227*x8228));

	if (t91 != 418263518061LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x8274 = 30U;
	uint8_t x8275 = 7U;
	int8_t x8276 = INT8_MAX;
	volatile int64_t t92 = 164575161029541797LL;

	t92 = ((x8273<<x8274)+(x8275*x8276));

	if (t92 != 1073742713LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x8301 = UINT8_MAX;
	int16_t x8303 = INT16_MIN;
	uint64_t x8304 = 5087LLU;
	volatile uint64_t t93 = 1101860485812316LLU;

	t93 = ((x8301<<x8302)+(x8303*x8304));

	if (t93 != 18446744073542991360LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x8357 = 63935;
	uint16_t x8358 = 2U;
	static int8_t x8360 = INT8_MIN;
	int32_t t94 = -2;

	t94 = ((x8357<<x8358)+(x8359*x8360));

	if (t94 != 4450044) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x8406 = 5U;
	volatile uint8_t x8407 = 2U;

	t95 = ((x8405<<x8406)+(x8407*x8408));

	if (t95 != 476U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x8513 = 6028LL;
	int16_t x8515 = -11;

	t96 = ((x8513<<x8514)+(x8515*x8516));

	if (t96 != 10659LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x8683 = -1;
	volatile int64_t x8684 = 15969818514193LL;
	volatile int64_t t97 = 6499LL;

	t97 = ((x8681<<x8682)+(x8683*x8684));

	if (t97 != -15969818514033LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x8749 = 2U;
	static volatile uint8_t x8750 = 0U;
	static uint8_t x8751 = 56U;
	static uint64_t x8752 = 747971164LLU;
	uint64_t t98 = 28630420579LLU;

	t98 = ((x8749<<x8750)+(x8751*x8752));

	if (t98 != 41886385186LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x8821 = INT8_MAX;
	uint8_t x8823 = UINT8_MAX;
	static int16_t x8824 = -1;
	int32_t t99 = 1028;

	t99 = ((x8821<<x8822)+(x8823*x8824));

	if (t99 != -1) { NG(); } else { ; }
	
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

