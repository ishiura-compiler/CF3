#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x73 = INT16_MAX;
volatile int32_t t7 = 15333742;
int32_t t8 = 43546;
int8_t x537 = INT8_MAX;
static volatile uint32_t x538 = 6U;
uint16_t x600 = 2849U;
static int32_t t10 = 2770;
uint8_t x712 = 40U;
static uint8_t x730 = 3U;
volatile int8_t x744 = INT8_MAX;
int32_t t14 = -7307;
volatile int32_t t15 = -518225;
uint32_t t16 = 57650164U;
int8_t x935 = -4;
int8_t x958 = 26;
static uint32_t x959 = 44U;
volatile int32_t x960 = -1;
volatile int16_t x1043 = -8408;
static volatile int32_t t19 = -198;
int16_t x1149 = INT16_MAX;
static volatile int32_t t20 = 186121;
uint64_t x1293 = 214230967224040LLU;
volatile uint64_t t21 = 1038132138705LLU;
volatile uint16_t x1685 = 408U;
uint8_t x1782 = 0U;
static uint32_t x1783 = 6384627U;
int8_t x2006 = 2;
uint32_t x2027 = 363907945U;
static int16_t x2217 = 49;
static int16_t x2220 = 124;
static volatile int32_t t32 = 2909;
static uint16_t x2530 = 8U;
int64_t x2582 = 0LL;
uint32_t x2667 = UINT32_MAX;
int16_t x2956 = 6504;
uint64_t x2981 = UINT64_MAX;
volatile int64_t x2984 = INT64_MIN;
int64_t x2991 = INT64_MIN;
volatile int32_t t42 = 117606251;
volatile int8_t x3155 = INT8_MAX;
volatile int32_t t46 = -1;
int8_t x3328 = INT8_MIN;
uint64_t x3403 = 1590669548142054478LLU;
volatile int8_t x3509 = INT8_MAX;
uint16_t x3510 = 0U;
uint8_t x3534 = 0U;
int16_t x3568 = -2689;
volatile int16_t x3647 = -1;
int16_t x3648 = INT16_MAX;
int16_t x3879 = INT16_MAX;
int64_t x3936 = 398133216439282798LL;
uint32_t x3971 = UINT32_MAX;
uint8_t x3977 = 42U;
int8_t x4003 = -1;
static int32_t t62 = 66061;
static int16_t x4064 = -151;
int16_t x4229 = 4423;
volatile int32_t t65 = 1;
static uint8_t x4234 = 26U;
uint16_t x4236 = 3785U;
uint64_t x4327 = 381519046259088LLU;
uint64_t x4415 = 3LLU;
static uint8_t x4430 = 1U;
uint16_t x4432 = 1589U;
int32_t t72 = 21215;
uint64_t t73 = 88730743315LLU;
int8_t x4663 = -1;
uint64_t t74 = 2167288668239443360LLU;
uint8_t x4690 = 2U;
uint8_t x4926 = 7U;
static volatile int8_t x5110 = 5;
volatile int32_t t79 = -3298950;
int8_t x5226 = 8;
uint32_t x5337 = 470463370U;
uint64_t x5353 = 218008LLU;
uint64_t x5356 = 58403LLU;
uint8_t x5454 = 3U;
static uint8_t x5603 = UINT8_MAX;
int32_t x5693 = INT32_MAX;
int32_t t88 = 7886;
uint8_t x5751 = 5U;
static volatile int32_t x5819 = -1734;
uint32_t t90 = 54380086U;
uint32_t x6025 = 7997U;
uint32_t x6026 = 8U;
uint8_t x6043 = UINT8_MAX;
static uint16_t x6182 = 2U;
volatile uint64_t t95 = 63274079LLU;
volatile uint32_t x6374 = 1U;
int64_t x6375 = 60259650LL;
volatile int32_t t97 = -356472537;
uint16_t x6457 = 105U;
static uint64_t x6543 = UINT64_MAX;


void f0(void) {
	int8_t x74 = 0;
	uint64_t x75 = UINT64_MAX;
	int64_t x76 = 6890683LL;
	static volatile int32_t t0 = -1629277;

	t0 = ((x73<<x74)^(x75<=x76));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x189 = INT8_MAX;
	uint8_t x190 = 7U;
	static volatile int64_t x191 = 403472LL;
	int8_t x192 = INT8_MIN;
	int32_t t1 = -5070;

	t1 = ((x189<<x190)^(x191<=x192));

	if (t1 != 16256) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x201 = UINT8_MAX;
	uint8_t x202 = 0U;
	uint32_t x203 = UINT32_MAX;
	volatile int64_t x204 = INT64_MIN;
	volatile int32_t t2 = 0;

	t2 = ((x201<<x202)^(x203<=x204));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x265 = 33605LLU;
	uint16_t x266 = 0U;
	int32_t x267 = 8320765;
	int32_t x268 = INT32_MIN;
	uint64_t t3 = 111819912593923LLU;

	t3 = ((x265<<x266)^(x267<=x268));

	if (t3 != 33605LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x289 = INT16_MAX;
	uint16_t x290 = 2U;
	volatile uint16_t x291 = UINT16_MAX;
	int16_t x292 = -600;
	volatile int32_t t4 = -3;

	t4 = ((x289<<x290)^(x291<=x292));

	if (t4 != 131068) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x317 = 516086LLU;
	volatile uint8_t x318 = 28U;
	int8_t x319 = INT8_MAX;
	int64_t x320 = INT64_MAX;
	volatile uint64_t t5 = 122LLU;

	t5 = ((x317<<x318)^(x319<=x320));

	if (t5 != 138535780745217LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x417 = 0;
	int8_t x418 = 29;
	volatile int32_t x419 = INT32_MIN;
	uint32_t x420 = UINT32_MAX;
	int32_t t6 = -505;

	t6 = ((x417<<x418)^(x419<=x420));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x437 = UINT16_MAX;
	static int8_t x438 = 9;
	int16_t x439 = 0;
	static uint16_t x440 = UINT16_MAX;

	t7 = ((x437<<x438)^(x439<=x440));

	if (t7 != 33553921) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x453 = 1U;
	uint64_t x454 = 0LLU;
	volatile int8_t x455 = -10;
	int32_t x456 = INT32_MIN;

	t8 = ((x453<<x454)^(x455<=x456));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x539 = 10U;
	int16_t x540 = -55;
	volatile int32_t t9 = -903201530;

	t9 = ((x537<<x538)^(x539<=x540));

	if (t9 != 8128) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x597 = 0;
	uint8_t x598 = 3U;
	int32_t x599 = 5;

	t10 = ((x597<<x598)^(x599<=x600));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x689 = UINT32_MAX;
	int16_t x690 = 0;
	int8_t x691 = -41;
	volatile int8_t x692 = -2;
	volatile uint32_t t11 = 25U;

	t11 = ((x689<<x690)^(x691<=x692));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x709 = 3272LLU;
	static int8_t x710 = 16;
	int8_t x711 = INT8_MIN;
	uint64_t t12 = 185501189492731LLU;

	t12 = ((x709<<x710)^(x711<=x712));

	if (t12 != 214433793LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x729 = 14U;
	uint16_t x731 = 391U;
	int64_t x732 = -429906133272LL;
	volatile uint32_t t13 = 797201111U;

	t13 = ((x729<<x730)^(x731<=x732));

	if (t13 != 112U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x741 = 45U;
	uint32_t x742 = 2U;
	uint64_t x743 = 251023427057318736LLU;

	t14 = ((x741<<x742)^(x743<=x744));

	if (t14 != 180) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x805 = INT8_MAX;
	uint16_t x806 = 0U;
	uint8_t x807 = UINT8_MAX;
	int8_t x808 = INT8_MAX;

	t15 = ((x805<<x806)^(x807<=x808));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x897 = 2U;
	uint8_t x898 = 27U;
	uint64_t x899 = 1566012041LLU;
	volatile int16_t x900 = INT16_MAX;

	t16 = ((x897<<x898)^(x899<=x900));

	if (t16 != 268435456U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x933 = UINT16_MAX;
	static volatile uint8_t x934 = 8U;
	uint16_t x936 = 12728U;
	int32_t t17 = 0;

	t17 = ((x933<<x934)^(x935<=x936));

	if (t17 != 16776961) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x957 = 2U;
	volatile uint32_t t18 = 2035096409U;

	t18 = ((x957<<x958)^(x959<=x960));

	if (t18 != 134217729U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1041 = UINT8_MAX;
	int8_t x1042 = 0;
	static int64_t x1044 = INT64_MIN;

	t19 = ((x1041<<x1042)^(x1043<=x1044));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1150 = 1;
	volatile int32_t x1151 = INT32_MAX;
	volatile uint64_t x1152 = 1LLU;

	t20 = ((x1149<<x1150)^(x1151<=x1152));

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1294 = 1;
	static uint64_t x1295 = 2975857502339076398LLU;
	uint32_t x1296 = 0U;

	t21 = ((x1293<<x1294)^(x1295<=x1296));

	if (t21 != 428461934448080LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1413 = 438958LLU;
	int64_t x1414 = 7LL;
	uint16_t x1415 = 186U;
	int16_t x1416 = INT16_MAX;
	static uint64_t t22 = 967335833LLU;

	t22 = ((x1413<<x1414)^(x1415<=x1416));

	if (t22 != 56186625LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1429 = 2300348342671065173LLU;
	uint8_t x1430 = 24U;
	int16_t x1431 = INT16_MIN;
	static volatile int8_t x1432 = -1;
	volatile uint64_t t23 = 4037903LLU;

	t23 = ((x1429<<x1430)^(x1431<=x1432));

	if (t23 != 11619446744105877505LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1453 = 6;
	static int8_t x1454 = 0;
	int8_t x1455 = INT8_MIN;
	int64_t x1456 = -1LL;
	int32_t t24 = -7;

	t24 = ((x1453<<x1454)^(x1455<=x1456));

	if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1545 = UINT64_MAX;
	volatile uint16_t x1546 = 0U;
	int64_t x1547 = 172975157LL;
	static uint64_t x1548 = 641LLU;
	uint64_t t25 = UINT64_MAX;

	t25 = ((x1545<<x1546)^(x1547<=x1548));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x1577 = INT8_MAX;
	static uint16_t x1578 = 13U;
	uint16_t x1579 = 18526U;
	static uint8_t x1580 = 68U;
	volatile int32_t t26 = 177397803;

	t26 = ((x1577<<x1578)^(x1579<=x1580));

	if (t26 != 1040384) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1686 = 9;
	uint16_t x1687 = 2559U;
	int32_t x1688 = -1;
	static int32_t t27 = 8070456;

	t27 = ((x1685<<x1686)^(x1687<=x1688));

	if (t27 != 208896) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1781 = 0;
	int8_t x1784 = 2;
	int32_t t28 = 15;

	t28 = ((x1781<<x1782)^(x1783<=x1784));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1801 = 6;
	uint16_t x1802 = 21U;
	int64_t x1803 = 1637456119075995LL;
	int32_t x1804 = INT32_MIN;
	volatile int32_t t29 = 716;

	t29 = ((x1801<<x1802)^(x1803<=x1804));

	if (t29 != 12582912) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x2005 = INT16_MAX;
	volatile uint64_t x2007 = 119958141590543355LLU;
	int8_t x2008 = -1;
	volatile int32_t t30 = 442668103;

	t30 = ((x2005<<x2006)^(x2007<=x2008));

	if (t30 != 131069) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2025 = 79715753056711LLU;
	int16_t x2026 = 0;
	int8_t x2028 = 1;
	uint64_t t31 = 2214204485097721LLU;

	t31 = ((x2025<<x2026)^(x2027<=x2028));

	if (t31 != 79715753056711LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2218 = 0;
	int16_t x2219 = INT16_MAX;

	t32 = ((x2217<<x2218)^(x2219<=x2220));

	if (t32 != 49) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x2529 = 218495U;
	int16_t x2531 = INT16_MIN;
	int8_t x2532 = 0;
	volatile uint32_t t33 = 180U;

	t33 = ((x2529<<x2530)^(x2531<=x2532));

	if (t33 != 55934721U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2541 = 427U;
	volatile int8_t x2542 = 1;
	volatile int64_t x2543 = INT64_MIN;
	uint32_t x2544 = 25U;
	uint32_t t34 = 0U;

	t34 = ((x2541<<x2542)^(x2543<=x2544));

	if (t34 != 855U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2581 = 55095LLU;
	int16_t x2583 = INT16_MIN;
	volatile uint32_t x2584 = 2057904070U;
	uint64_t t35 = 5519478493222647179LLU;

	t35 = ((x2581<<x2582)^(x2583<=x2584));

	if (t35 != 55095LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2665 = 1LL;
	uint16_t x2666 = 1U;
	int8_t x2668 = INT8_MIN;
	int64_t t36 = -902817721LL;

	t36 = ((x2665<<x2666)^(x2667<=x2668));

	if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2717 = 7297523490LLU;
	int16_t x2718 = 8;
	static int16_t x2719 = INT16_MAX;
	int64_t x2720 = 41840LL;
	volatile uint64_t t37 = 25809464455571LLU;

	t37 = ((x2717<<x2718)^(x2719<=x2720));

	if (t37 != 1868166013441LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2953 = INT16_MAX;
	uint8_t x2954 = 0U;
	uint16_t x2955 = 254U;
	volatile int32_t t38 = 267486;

	t38 = ((x2953<<x2954)^(x2955<=x2956));

	if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2982 = 41U;
	int32_t x2983 = INT32_MAX;
	uint64_t t39 = 95433196682LLU;

	t39 = ((x2981<<x2982)^(x2983<=x2984));

	if (t39 != 18446741874686296064LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2989 = 1;
	volatile uint16_t x2990 = 2U;
	uint64_t x2992 = UINT64_MAX;
	volatile int32_t t40 = 1941;

	t40 = ((x2989<<x2990)^(x2991<=x2992));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x3025 = 311U;
	int16_t x3026 = 5;
	static int8_t x3027 = INT8_MIN;
	int8_t x3028 = INT8_MIN;
	static int32_t t41 = 6784;

	t41 = ((x3025<<x3026)^(x3027<=x3028));

	if (t41 != 9953) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x3133 = 237U;
	uint8_t x3134 = 2U;
	static uint16_t x3135 = UINT16_MAX;
	static int16_t x3136 = -144;

	t42 = ((x3133<<x3134)^(x3135<=x3136));

	if (t42 != 948) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x3153 = 19U;
	static uint32_t x3154 = 1U;
	int64_t x3156 = 1054500185LL;
	int32_t t43 = -757421;

	t43 = ((x3153<<x3154)^(x3155<=x3156));

	if (t43 != 39) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3177 = 11880LLU;
	uint8_t x3178 = 0U;
	volatile int64_t x3179 = INT64_MIN;
	uint64_t x3180 = 6LLU;
	volatile uint64_t t44 = 721827407916904069LLU;

	t44 = ((x3177<<x3178)^(x3179<=x3180));

	if (t44 != 11880LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x3237 = INT32_MAX;
	static int64_t x3238 = 0LL;
	int32_t x3239 = INT32_MIN;
	uint8_t x3240 = 16U;
	int32_t t45 = -2002442;

	t45 = ((x3237<<x3238)^(x3239<=x3240));

	if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3245 = 1;
	volatile uint16_t x3246 = 5U;
	int64_t x3247 = INT64_MIN;
	int16_t x3248 = -16373;

	t46 = ((x3245<<x3246)^(x3247<=x3248));

	if (t46 != 33) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3325 = 102U;
	int8_t x3326 = 19;
	static int8_t x3327 = INT8_MIN;
	int32_t t47 = -26242940;

	t47 = ((x3325<<x3326)^(x3327<=x3328));

	if (t47 != 53477377) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x3401 = 7732U;
	volatile int8_t x3402 = 15;
	static uint8_t x3404 = 112U;
	uint32_t t48 = 1649U;

	t48 = ((x3401<<x3402)^(x3403<=x3404));

	if (t48 != 253362176U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3433 = 12LL;
	int8_t x3434 = 1;
	uint8_t x3435 = 12U;
	volatile int32_t x3436 = 1;
	int64_t t49 = 60917LL;

	t49 = ((x3433<<x3434)^(x3435<=x3436));

	if (t49 != 24LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x3497 = 26U;
	int32_t x3498 = 9;
	static int8_t x3499 = -1;
	int8_t x3500 = -1;
	volatile int32_t t50 = 776429;

	t50 = ((x3497<<x3498)^(x3499<=x3500));

	if (t50 != 13313) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3511 = -1;
	volatile int8_t x3512 = INT8_MIN;
	volatile int32_t t51 = -26956937;

	t51 = ((x3509<<x3510)^(x3511<=x3512));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x3533 = INT8_MAX;
	int16_t x3535 = INT16_MAX;
	int16_t x3536 = 46;
	int32_t t52 = -91;

	t52 = ((x3533<<x3534)^(x3535<=x3536));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3565 = UINT8_MAX;
	uint8_t x3566 = 5U;
	volatile uint64_t x3567 = UINT64_MAX;
	volatile int32_t t53 = 4323;

	t53 = ((x3565<<x3566)^(x3567<=x3568));

	if (t53 != 8160) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3645 = UINT32_MAX;
	uint8_t x3646 = 3U;
	uint32_t t54 = 3U;

	t54 = ((x3645<<x3646)^(x3647<=x3648));

	if (t54 != 4294967289U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3765 = 46;
	uint8_t x3766 = 3U;
	int64_t x3767 = INT64_MAX;
	uint8_t x3768 = 42U;
	int32_t t55 = 121934;

	t55 = ((x3765<<x3766)^(x3767<=x3768));

	if (t55 != 368) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3853 = 319;
	volatile uint8_t x3854 = 21U;
	int32_t x3855 = INT32_MAX;
	volatile int16_t x3856 = 3025;
	static int32_t t56 = 1002;

	t56 = ((x3853<<x3854)^(x3855<=x3856));

	if (t56 != 668991488) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3877 = 1089413LL;
	uint16_t x3878 = 2U;
	uint8_t x3880 = UINT8_MAX;
	volatile int64_t t57 = -1012150087571858LL;

	t57 = ((x3877<<x3878)^(x3879<=x3880));

	if (t57 != 4357652LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3933 = UINT64_MAX;
	uint8_t x3934 = 17U;
	int16_t x3935 = INT16_MAX;
	uint64_t t58 = 408955LLU;

	t58 = ((x3933<<x3934)^(x3935<=x3936));

	if (t58 != 18446744073709420545LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x3969 = INT8_MAX;
	uint8_t x3970 = 0U;
	int8_t x3972 = -1;
	int32_t t59 = 919647;

	t59 = ((x3969<<x3970)^(x3971<=x3972));

	if (t59 != 126) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x3978 = 24U;
	int8_t x3979 = -1;
	static int32_t x3980 = INT32_MIN;
	int32_t t60 = -2372441;

	t60 = ((x3977<<x3978)^(x3979<=x3980));

	if (t60 != 704643072) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4001 = 13930U;
	int16_t x4002 = 1;
	int64_t x4004 = -1LL;
	int32_t t61 = -63;

	t61 = ((x4001<<x4002)^(x4003<=x4004));

	if (t61 != 27861) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x4037 = INT16_MAX;
	int8_t x4038 = 2;
	volatile uint8_t x4039 = 0U;
	static volatile int8_t x4040 = -1;

	t62 = ((x4037<<x4038)^(x4039<=x4040));

	if (t62 != 131068) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4061 = 8U;
	static uint16_t x4062 = 3U;
	int8_t x4063 = INT8_MIN;
	volatile int32_t t63 = -3732;

	t63 = ((x4061<<x4062)^(x4063<=x4064));

	if (t63 != 64) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4153 = UINT64_MAX;
	int8_t x4154 = 2;
	static volatile int32_t x4155 = -1;
	int64_t x4156 = INT64_MIN;
	uint64_t t64 = 13771998722171LLU;

	t64 = ((x4153<<x4154)^(x4155<=x4156));

	if (t64 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4230 = 1;
	int32_t x4231 = INT32_MIN;
	uint8_t x4232 = 43U;

	t65 = ((x4229<<x4230)^(x4231<=x4232));

	if (t65 != 8847) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4233 = 0U;
	int32_t x4235 = INT32_MIN;
	volatile int32_t t66 = 65107643;

	t66 = ((x4233<<x4234)^(x4235<=x4236));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x4273 = INT16_MAX;
	int16_t x4274 = 1;
	int8_t x4275 = INT8_MIN;
	volatile int32_t x4276 = INT32_MAX;
	int32_t t67 = 2843329;

	t67 = ((x4273<<x4274)^(x4275<=x4276));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4325 = UINT64_MAX;
	uint8_t x4326 = 1U;
	int64_t x4328 = 29092829486450507LL;
	static uint64_t t68 = UINT64_MAX;

	t68 = ((x4325<<x4326)^(x4327<=x4328));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4409 = UINT64_MAX;
	volatile uint16_t x4410 = 58U;
	volatile int8_t x4411 = INT8_MIN;
	static uint8_t x4412 = 4U;
	static volatile uint64_t t69 = 28662076820811LLU;

	t69 = ((x4409<<x4410)^(x4411<=x4412));

	if (t69 != 18158513697557839873LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4413 = 20165LLU;
	int8_t x4414 = 3;
	uint64_t x4416 = 1040029LLU;
	volatile uint64_t t70 = 16211780393270LLU;

	t70 = ((x4413<<x4414)^(x4415<=x4416));

	if (t70 != 161321LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x4429 = 268U;
	static volatile int32_t x4431 = INT32_MIN;
	volatile int32_t t71 = 425947;

	t71 = ((x4429<<x4430)^(x4431<=x4432));

	if (t71 != 537) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x4473 = INT16_MAX;
	static int16_t x4474 = 2;
	int32_t x4475 = INT32_MAX;
	int16_t x4476 = INT16_MAX;

	t72 = ((x4473<<x4474)^(x4475<=x4476));

	if (t72 != 131068) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4653 = UINT64_MAX;
	uint16_t x4654 = 6U;
	volatile uint8_t x4655 = 3U;
	uint16_t x4656 = UINT16_MAX;

	t73 = ((x4653<<x4654)^(x4655<=x4656));

	if (t73 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4661 = 15LLU;
	int8_t x4662 = 4;
	int64_t x4664 = INT64_MIN;

	t74 = ((x4661<<x4662)^(x4663<=x4664));

	if (t74 != 240LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4689 = INT16_MAX;
	uint32_t x4691 = 30U;
	int8_t x4692 = INT8_MIN;
	volatile int32_t t75 = -3;

	t75 = ((x4689<<x4690)^(x4691<=x4692));

	if (t75 != 131069) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4773 = 0U;
	int8_t x4774 = 29;
	static uint8_t x4775 = 71U;
	int8_t x4776 = INT8_MIN;
	int32_t t76 = 31398;

	t76 = ((x4773<<x4774)^(x4775<=x4776));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x4925 = 0U;
	int8_t x4927 = -1;
	uint64_t x4928 = 1314408LLU;
	static volatile uint32_t t77 = 0U;

	t77 = ((x4925<<x4926)^(x4927<=x4928));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5021 = UINT32_MAX;
	volatile uint8_t x5022 = 17U;
	uint8_t x5023 = UINT8_MAX;
	uint16_t x5024 = UINT16_MAX;
	volatile uint32_t t78 = 3U;

	t78 = ((x5021<<x5022)^(x5023<=x5024));

	if (t78 != 4294836225U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5109 = 2012U;
	uint32_t x5111 = 751922574U;
	uint16_t x5112 = 15015U;

	t79 = ((x5109<<x5110)^(x5111<=x5112));

	if (t79 != 64384) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5181 = 212;
	uint32_t x5182 = 0U;
	int32_t x5183 = -1;
	int32_t x5184 = 374332;
	int32_t t80 = -44;

	t80 = ((x5181<<x5182)^(x5183<=x5184));

	if (t80 != 213) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x5225 = UINT16_MAX;
	int8_t x5227 = -57;
	static int16_t x5228 = INT16_MIN;
	int32_t t81 = 2941;

	t81 = ((x5225<<x5226)^(x5227<=x5228));

	if (t81 != 16776960) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5338 = 1;
	volatile int64_t x5339 = 66113878LL;
	int64_t x5340 = 2303361LL;
	volatile uint32_t t82 = 942305731U;

	t82 = ((x5337<<x5338)^(x5339<=x5340));

	if (t82 != 940926740U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x5354 = 1;
	uint16_t x5355 = UINT16_MAX;
	uint64_t t83 = 8275758240697762LLU;

	t83 = ((x5353<<x5354)^(x5355<=x5356));

	if (t83 != 436016LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x5377 = 4587U;
	int8_t x5378 = 0;
	int8_t x5379 = 25;
	static volatile uint16_t x5380 = UINT16_MAX;
	volatile int32_t t84 = 476724;

	t84 = ((x5377<<x5378)^(x5379<=x5380));

	if (t84 != 4586) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x5453 = UINT64_MAX;
	volatile uint16_t x5455 = UINT16_MAX;
	uint64_t x5456 = UINT64_MAX;
	static uint64_t t85 = 42LLU;

	t85 = ((x5453<<x5454)^(x5455<=x5456));

	if (t85 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x5473 = UINT64_MAX;
	int8_t x5474 = 24;
	static int32_t x5475 = INT32_MAX;
	static int8_t x5476 = -7;
	static volatile uint64_t t86 = 56622LLU;

	t86 = ((x5473<<x5474)^(x5475<=x5476));

	if (t86 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x5601 = UINT64_MAX;
	uint8_t x5602 = 39U;
	uint64_t x5604 = 3LLU;
	uint64_t t87 = 613579287274285LLU;

	t87 = ((x5601<<x5602)^(x5603<=x5604));

	if (t87 != 18446743523953737728LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5694 = 0;
	int64_t x5695 = -2100881925370LL;
	static int8_t x5696 = INT8_MIN;

	t88 = ((x5693<<x5694)^(x5695<=x5696));

	if (t88 != 2147483646) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x5749 = INT8_MAX;
	uint64_t x5750 = 12LLU;
	int8_t x5752 = INT8_MIN;
	int32_t t89 = -436852753;

	t89 = ((x5749<<x5750)^(x5751<=x5752));

	if (t89 != 520192) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x5817 = 3582724U;
	uint8_t x5818 = 2U;
	int32_t x5820 = 497234977;

	t90 = ((x5817<<x5818)^(x5819<=x5820));

	if (t90 != 14330897U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5857 = 30;
	int16_t x5858 = 1;
	volatile uint32_t x5859 = 595623U;
	int64_t x5860 = -1LL;
	volatile int32_t t91 = 0;

	t91 = ((x5857<<x5858)^(x5859<=x5860));

	if (t91 != 60) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5941 = 13;
	volatile int16_t x5942 = 1;
	static uint16_t x5943 = 12U;
	volatile uint8_t x5944 = 1U;
	int32_t t92 = 7;

	t92 = ((x5941<<x5942)^(x5943<=x5944));

	if (t92 != 26) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6027 = -1;
	uint8_t x6028 = 13U;
	volatile uint32_t t93 = 2256U;

	t93 = ((x6025<<x6026)^(x6027<=x6028));

	if (t93 != 2047233U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x6041 = UINT8_MAX;
	int8_t x6042 = 9;
	uint32_t x6044 = UINT32_MAX;
	static int32_t t94 = -1083;

	t94 = ((x6041<<x6042)^(x6043<=x6044));

	if (t94 != 130561) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x6181 = 26120045022LLU;
	int8_t x6183 = INT8_MIN;
	int8_t x6184 = 8;

	t95 = ((x6181<<x6182)^(x6183<=x6184));

	if (t95 != 104480180089LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6217 = 120U;
	int8_t x6218 = 20;
	uint8_t x6219 = 30U;
	uint32_t x6220 = 9308U;
	static int32_t t96 = -1484;

	t96 = ((x6217<<x6218)^(x6219<=x6220));

	if (t96 != 125829121) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x6373 = UINT8_MAX;
	int32_t x6376 = -37678;

	t97 = ((x6373<<x6374)^(x6375<=x6376));

	if (t97 != 510) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6458 = 6;
	int16_t x6459 = -1;
	uint32_t x6460 = 14U;
	static volatile int32_t t98 = -12;

	t98 = ((x6457<<x6458)^(x6459<=x6460));

	if (t98 != 6720) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6541 = 0U;
	uint64_t x6542 = 7LLU;
	volatile int16_t x6544 = -1;
	volatile int32_t t99 = -31;

	t99 = ((x6541<<x6542)^(x6543<=x6544));

	if (t99 != 1) { NG(); } else { ; }
	
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

