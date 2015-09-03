#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x44 = 6U;
uint64_t x62 = 87825864727LLU;
uint64_t t4 = 7802806044LLU;
uint32_t t5 = 342047144U;
int8_t x250 = -1;
static volatile uint32_t x349 = 0U;
static uint8_t x397 = 21U;
uint16_t x398 = 70U;
int64_t x410 = -1LL;
volatile int8_t x435 = INT8_MIN;
uint8_t x454 = UINT8_MAX;
static volatile int8_t x456 = 0;
static uint64_t x607 = 3581291837944LLU;
int64_t x634 = 534LL;
int8_t x636 = 0;
uint32_t x668 = 6U;
int32_t t15 = 41803826;
volatile uint64_t t18 = 16586372534790699LLU;
static volatile uint16_t x833 = UINT16_MAX;
int16_t x834 = INT16_MIN;
uint16_t x835 = UINT16_MAX;
int32_t t19 = -158;
uint64_t x885 = 24LLU;
int8_t x888 = 0;
volatile uint8_t x918 = 1U;
int32_t t22 = -76287;
volatile int16_t x1031 = -219;
int16_t x1032 = 3;
volatile int8_t x1136 = 1;
uint64_t x1241 = 59427562449497046LLU;
int8_t x1249 = 1;
int32_t x1427 = INT32_MAX;
int8_t x1613 = 7;
uint8_t x1616 = 1U;
static volatile uint64_t x1658 = 66LLU;
int32_t t34 = 193648939;
int32_t x1702 = -1;
int32_t x1704 = 0;
uint8_t x1887 = UINT8_MAX;
volatile int64_t t39 = 2874631790529046440LL;
int64_t x2043 = -1LL;
volatile uint32_t x2178 = UINT32_MAX;
static uint16_t x2186 = 0U;
volatile uint64_t t44 = 1LLU;
static volatile int32_t t46 = 27;
uint64_t x2558 = UINT64_MAX;
static uint8_t x2560 = 15U;
static volatile uint64_t x2577 = 30LLU;
static int32_t x2579 = INT32_MAX;
int8_t x2582 = -1;
static int64_t x2583 = 8607097450883306LL;
static uint32_t t52 = 416148U;
int64_t x2610 = INT64_MAX;
static int16_t x2782 = 152;
uint8_t x2833 = 0U;
int32_t x2835 = -1;
volatile int8_t x2836 = 0;
static int32_t t59 = 121940;
static volatile int64_t t60 = 1800LL;
static int16_t x3432 = 1;
uint32_t x3475 = 148352U;
volatile int32_t t64 = -20541;
int16_t x3713 = INT16_MAX;
uint8_t x3716 = 1U;
static volatile uint64_t t67 = 21575453569557LLU;
uint64_t t68 = 21LLU;
int32_t x4037 = 1489186;
static uint16_t x4136 = 6U;
uint64_t t71 = 392049393LLU;
uint8_t x4216 = 8U;
static int32_t x4231 = 81123276;
uint16_t x4326 = 234U;
int8_t x4328 = 1;
uint16_t x4332 = 9U;
volatile int32_t t76 = 149848;
uint8_t x4490 = UINT8_MAX;
volatile int32_t x4491 = 5544023;
uint64_t x4770 = UINT64_MAX;
int8_t x4772 = 0;
static volatile int32_t t82 = -1299461;
int16_t x4902 = -16;
volatile int32_t t85 = 918560448;
uint32_t x4917 = UINT32_MAX;
int8_t x5006 = INT8_MAX;
uint64_t x5007 = 4177421925825038133LLU;
int32_t t88 = 197216;
volatile uint64_t x5265 = 3426593171655962LLU;
volatile uint64_t t89 = 608LLU;
static uint64_t t90 = 213LLU;
volatile int64_t x5342 = INT64_MIN;
static uint16_t x5442 = 1U;
static uint32_t x5444 = 12U;
volatile int32_t t93 = 10428;
uint32_t x5812 = 1U;
int32_t t97 = 893185029;
volatile uint64_t x5829 = UINT64_MAX;
volatile uint8_t x5832 = 0U;
volatile uint32_t x5995 = 1U;


void f0(void) {
	uint32_t x29 = 7U;
	volatile int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	uint16_t x32 = 7U;
	volatile uint32_t t0 = 713218U;

	t0 = (x29<<((x30<=x31)|x32));

	if (t0 != 896U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x41 = 7;
	uint8_t x42 = UINT8_MAX;
	uint8_t x43 = UINT8_MAX;
	volatile int32_t t1 = 8433;

	t1 = (x41<<((x42<=x43)|x44));

	if (t1 != 896) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x57 = 3U;
	uint16_t x58 = UINT16_MAX;
	uint32_t x59 = 1U;
	static uint16_t x60 = 0U;
	static volatile int32_t t2 = -392;

	t2 = (x57<<((x58<=x59)|x60));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x61 = 1U;
	int64_t x63 = -1LL;
	int8_t x64 = 2;
	volatile int32_t t3 = 45262;

	t3 = (x61<<((x62<=x63)|x64));

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int16_t x70 = INT16_MIN;
	volatile int16_t x71 = INT16_MIN;
	static int8_t x72 = 7;

	t4 = (x69<<((x70<=x71)|x72));

	if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x157 = UINT32_MAX;
	static uint16_t x158 = 3U;
	static int64_t x159 = INT64_MAX;
	int8_t x160 = 5;

	t5 = (x157<<((x158<=x159)|x160));

	if (t5 != 4294967264U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x249 = 105318151490782618LLU;
	int32_t x251 = INT32_MIN;
	uint8_t x252 = 30U;
	volatile uint64_t t6 = 46377388279LLU;

	t6 = (x249<<((x250<=x251)|x252));

	if (t6 != 4611845887847563264LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x350 = -1LL;
	int16_t x351 = INT16_MAX;
	uint16_t x352 = 1U;
	volatile uint32_t t7 = 14483138U;

	t7 = (x349<<((x350<=x351)|x352));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x399 = 422;
	uint8_t x400 = 0U;
	int32_t t8 = -31290;

	t8 = (x397<<((x398<=x399)|x400));

	if (t8 != 42) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x409 = 0U;
	uint8_t x411 = UINT8_MAX;
	uint16_t x412 = 0U;
	volatile int32_t t9 = 4975;

	t9 = (x409<<((x410<=x411)|x412));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x433 = INT32_MAX;
	int8_t x434 = -1;
	int8_t x436 = 0;
	volatile int32_t t10 = INT32_MAX;

	t10 = (x433<<((x434<=x435)|x436));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x453 = 72118U;
	int8_t x455 = INT8_MIN;
	volatile uint32_t t11 = 230U;

	t11 = (x453<<((x454<=x455)|x456));

	if (t11 != 72118U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x513 = UINT8_MAX;
	int16_t x514 = INT16_MAX;
	int8_t x515 = -50;
	uint32_t x516 = 0U;
	int32_t t12 = 375766;

	t12 = (x513<<((x514<=x515)|x516));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x605 = INT8_MAX;
	uint8_t x606 = UINT8_MAX;
	uint8_t x608 = 4U;
	int32_t t13 = -404683777;

	t13 = (x605<<((x606<=x607)|x608));

	if (t13 != 4064) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x633 = UINT32_MAX;
	volatile int64_t x635 = INT64_MIN;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x633<<((x634<=x635)|x636));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x665 = INT16_MAX;
	static int64_t x666 = -29765628329490383LL;
	volatile uint64_t x667 = UINT64_MAX;

	t15 = (x665<<((x666<=x667)|x668));

	if (t15 != 4194176) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x717 = 7140;
	static int32_t x718 = INT32_MAX;
	static int64_t x719 = -1LL;
	static uint8_t x720 = 1U;
	volatile int32_t t16 = -360264615;

	t16 = (x717<<((x718<=x719)|x720));

	if (t16 != 14280) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x749 = UINT32_MAX;
	int16_t x750 = 1;
	uint8_t x751 = 11U;
	int8_t x752 = 1;
	volatile uint32_t t17 = 58738U;

	t17 = (x749<<((x750<=x751)|x752));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x825 = UINT64_MAX;
	static int32_t x826 = INT32_MIN;
	volatile int16_t x827 = INT16_MIN;
	static uint8_t x828 = 0U;

	t18 = (x825<<((x826<=x827)|x828));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x836 = 4U;

	t19 = (x833<<((x834<=x835)|x836));

	if (t19 != 2097120) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x886 = INT16_MAX;
	int8_t x887 = INT8_MAX;
	static uint64_t t20 = 64325154539068419LLU;

	t20 = (x885<<((x886<=x887)|x888));

	if (t20 != 24LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x917 = INT8_MAX;
	volatile uint16_t x919 = 4U;
	static volatile uint8_t x920 = 3U;
	volatile int32_t t21 = 8;

	t21 = (x917<<((x918<=x919)|x920));

	if (t21 != 1016) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x957 = 24U;
	uint16_t x958 = UINT16_MAX;
	uint16_t x959 = UINT16_MAX;
	volatile uint32_t x960 = 1U;

	t22 = (x957<<((x958<=x959)|x960));

	if (t22 != 48) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x965 = INT8_MAX;
	int8_t x966 = INT8_MIN;
	volatile int32_t x967 = INT32_MIN;
	static uint8_t x968 = 8U;
	int32_t t23 = -10;

	t23 = (x965<<((x966<=x967)|x968));

	if (t23 != 32512) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1029 = INT8_MAX;
	static int8_t x1030 = INT8_MAX;
	int32_t t24 = 69;

	t24 = (x1029<<((x1030<=x1031)|x1032));

	if (t24 != 1016) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1133 = UINT32_MAX;
	int64_t x1134 = -248399009587397331LL;
	int32_t x1135 = -1;
	volatile uint32_t t25 = 193U;

	t25 = (x1133<<((x1134<=x1135)|x1136));

	if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1242 = 7;
	volatile int32_t x1243 = INT32_MIN;
	uint32_t x1244 = 1U;
	uint64_t t26 = 91505LLU;

	t26 = (x1241<<((x1242<=x1243)|x1244));

	if (t26 != 118855124898994092LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1250 = 0U;
	volatile int8_t x1251 = -1;
	uint16_t x1252 = 0U;
	int32_t t27 = -16815686;

	t27 = (x1249<<((x1250<=x1251)|x1252));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1333 = 15;
	static int64_t x1334 = -2075131LL;
	uint32_t x1335 = 0U;
	uint64_t x1336 = 1LLU;
	int32_t t28 = 486353;

	t28 = (x1333<<((x1334<=x1335)|x1336));

	if (t28 != 30) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1345 = INT16_MAX;
	int64_t x1346 = INT64_MAX;
	int8_t x1347 = -1;
	uint8_t x1348 = 11U;
	volatile int32_t t29 = 12039;

	t29 = (x1345<<((x1346<=x1347)|x1348));

	if (t29 != 67106816) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1397 = INT8_MAX;
	uint16_t x1398 = UINT16_MAX;
	int32_t x1399 = INT32_MAX;
	int8_t x1400 = 1;
	volatile int32_t t30 = -39;

	t30 = (x1397<<((x1398<=x1399)|x1400));

	if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1425 = 73U;
	uint64_t x1426 = 5051972529598707355LLU;
	uint8_t x1428 = 3U;
	static volatile int32_t t31 = 179283568;

	t31 = (x1425<<((x1426<=x1427)|x1428));

	if (t31 != 584) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1457 = 1621;
	static uint64_t x1458 = UINT64_MAX;
	volatile int8_t x1459 = 5;
	uint16_t x1460 = 5U;
	static volatile int32_t t32 = -1;

	t32 = (x1457<<((x1458<=x1459)|x1460));

	if (t32 != 51872) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1614 = 50U;
	uint32_t x1615 = 2937425U;
	volatile int32_t t33 = -270;

	t33 = (x1613<<((x1614<=x1615)|x1616));

	if (t33 != 14) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1657 = UINT8_MAX;
	int8_t x1659 = -10;
	uint8_t x1660 = 4U;

	t34 = (x1657<<((x1658<=x1659)|x1660));

	if (t34 != 8160) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x1701 = 15426;
	static volatile int16_t x1703 = INT16_MAX;
	int32_t t35 = -5064;

	t35 = (x1701<<((x1702<=x1703)|x1704));

	if (t35 != 30852) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1877 = 2;
	int64_t x1878 = INT64_MIN;
	int64_t x1879 = -83147623342530LL;
	int8_t x1880 = 2;
	static int32_t t36 = -24;

	t36 = (x1877<<((x1878<=x1879)|x1880));

	if (t36 != 16) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1885 = 272900295428508628LLU;
	int32_t x1886 = INT32_MIN;
	static uint8_t x1888 = 31U;
	volatile uint64_t t37 = 9707LLU;

	t37 = (x1885<<((x1886<=x1887)|x1888));

	if (t37 != 13262755561465708544LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1937 = 0;
	int8_t x1938 = INT8_MIN;
	uint16_t x1939 = UINT16_MAX;
	uint16_t x1940 = 0U;
	volatile int32_t t38 = 6318;

	t38 = (x1937<<((x1938<=x1939)|x1940));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1965 = 66248LL;
	int64_t x1966 = INT64_MAX;
	int32_t x1967 = INT32_MIN;
	int32_t x1968 = 0;

	t39 = (x1965<<((x1966<=x1967)|x1968));

	if (t39 != 66248LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2041 = 15622U;
	static volatile int64_t x2042 = -260322574532LL;
	static volatile int16_t x2044 = 1;
	int32_t t40 = -57546231;

	t40 = (x2041<<((x2042<=x2043)|x2044));

	if (t40 != 31244) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x2173 = 2716841903884896051LLU;
	int64_t x2174 = INT64_MIN;
	int64_t x2175 = -51831535LL;
	static volatile int8_t x2176 = 15;
	uint64_t t41 = 1346520468LLU;

	t41 = (x2173<<((x2174<=x2175)|x2176));

	if (t41 != 1488606777977700352LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2177 = 87;
	uint64_t x2179 = 15218173928140LLU;
	int8_t x2180 = 0;
	static volatile int32_t t42 = -70;

	t42 = (x2177<<((x2178<=x2179)|x2180));

	if (t42 != 174) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2185 = UINT8_MAX;
	uint64_t x2187 = 128013723LLU;
	volatile int8_t x2188 = 1;
	static volatile int32_t t43 = -28;

	t43 = (x2185<<((x2186<=x2187)|x2188));

	if (t43 != 510) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2297 = 342672LLU;
	int32_t x2298 = INT32_MAX;
	uint64_t x2299 = UINT64_MAX;
	volatile uint8_t x2300 = 1U;

	t44 = (x2297<<((x2298<=x2299)|x2300));

	if (t44 != 685344LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2313 = 0U;
	static int64_t x2314 = -13462551157LL;
	int64_t x2315 = INT64_MIN;
	int8_t x2316 = 6;
	int32_t t45 = 3225883;

	t45 = (x2313<<((x2314<=x2315)|x2316));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2317 = UINT16_MAX;
	volatile int32_t x2318 = -2855;
	int16_t x2319 = 520;
	volatile int8_t x2320 = 13;

	t46 = (x2317<<((x2318<=x2319)|x2320));

	if (t46 != 536862720) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2369 = 52U;
	volatile int8_t x2370 = INT8_MIN;
	int32_t x2371 = -3708820;
	volatile int8_t x2372 = 1;
	static volatile uint32_t t47 = 74393116U;

	t47 = (x2369<<((x2370<=x2371)|x2372));

	if (t47 != 104U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2517 = 665U;
	volatile int64_t x2518 = INT64_MIN;
	static int16_t x2519 = INT16_MAX;
	uint32_t x2520 = 22U;
	volatile uint32_t t48 = 3U;

	t48 = (x2517<<((x2518<=x2519)|x2520));

	if (t48 != 1283457024U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2557 = INT8_MAX;
	int32_t x2559 = INT32_MIN;
	int32_t t49 = -3794392;

	t49 = (x2557<<((x2558<=x2559)|x2560));

	if (t49 != 4161536) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2578 = 36359822866LL;
	uint8_t x2580 = 19U;
	static uint64_t t50 = 100871629413LLU;

	t50 = (x2577<<((x2578<=x2579)|x2580));

	if (t50 != 15728640LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2581 = INT16_MAX;
	static uint32_t x2584 = 1U;
	int32_t t51 = -1;

	t51 = (x2581<<((x2582<=x2583)|x2584));

	if (t51 != 65534) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2589 = 212750891U;
	uint64_t x2590 = 1868347646467117888LLU;
	static uint8_t x2591 = 0U;
	static int16_t x2592 = 1;

	t52 = (x2589<<((x2590<=x2591)|x2592));

	if (t52 != 425501782U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x2609 = 1;
	static volatile int16_t x2611 = INT16_MIN;
	uint16_t x2612 = 5U;
	int32_t t53 = -4930158;

	t53 = (x2609<<((x2610<=x2611)|x2612));

	if (t53 != 32) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2781 = 1642U;
	int8_t x2783 = INT8_MIN;
	static uint16_t x2784 = 8U;
	int32_t t54 = -22;

	t54 = (x2781<<((x2782<=x2783)|x2784));

	if (t54 != 420352) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2834 = -122337;
	static int32_t t55 = -251;

	t55 = (x2833<<((x2834<=x2835)|x2836));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2845 = 680;
	uint64_t x2846 = 228626147LLU;
	int32_t x2847 = -1;
	int32_t x2848 = 1;
	volatile int32_t t56 = 3420;

	t56 = (x2845<<((x2846<=x2847)|x2848));

	if (t56 != 1360) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x2913 = UINT64_MAX;
	int32_t x2914 = -1;
	int64_t x2915 = INT64_MAX;
	uint16_t x2916 = 2U;
	volatile uint64_t t57 = 6606396482954724LLU;

	t57 = (x2913<<((x2914<=x2915)|x2916));

	if (t57 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3085 = 300U;
	uint64_t x3086 = 947300817561957090LLU;
	int16_t x3087 = INT16_MIN;
	uint16_t x3088 = 0U;
	volatile int32_t t58 = -125796233;

	t58 = (x3085<<((x3086<=x3087)|x3088));

	if (t58 != 600) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3189 = 0;
	volatile uint16_t x3190 = 704U;
	int8_t x3191 = -1;
	int8_t x3192 = 2;

	t59 = (x3189<<((x3190<=x3191)|x3192));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3245 = 1599595726LL;
	int8_t x3246 = -1;
	int32_t x3247 = -1;
	uint8_t x3248 = 11U;

	t60 = (x3245<<((x3246<=x3247)|x3248));

	if (t60 != 3275972046848LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3297 = UINT32_MAX;
	uint64_t x3298 = 6LLU;
	int16_t x3299 = 15;
	int32_t x3300 = 1;
	static volatile uint32_t t61 = 110U;

	t61 = (x3297<<((x3298<=x3299)|x3300));

	if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3369 = 13496209U;
	int64_t x3370 = -1LL;
	int16_t x3371 = 122;
	uint8_t x3372 = 9U;
	uint32_t t62 = 103549322U;

	t62 = (x3369<<((x3370<=x3371)|x3372));

	if (t62 != 2615091712U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3429 = 2;
	uint16_t x3430 = 4U;
	volatile int16_t x3431 = INT16_MIN;
	int32_t t63 = 495972772;

	t63 = (x3429<<((x3430<=x3431)|x3432));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3473 = INT8_MAX;
	int8_t x3474 = INT8_MIN;
	volatile uint64_t x3476 = 3LLU;

	t64 = (x3473<<((x3474<=x3475)|x3476));

	if (t64 != 1016) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3597 = 781704903294864104LLU;
	int64_t x3598 = INT64_MIN;
	int16_t x3599 = INT16_MIN;
	uint32_t x3600 = 0U;
	volatile uint64_t t65 = 6656LLU;

	t65 = (x3597<<((x3598<=x3599)|x3600));

	if (t65 != 1563409806589728208LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3714 = INT16_MAX;
	volatile uint64_t x3715 = 576136524685453677LLU;
	volatile int32_t t66 = -3259587;

	t66 = (x3713<<((x3714<=x3715)|x3716));

	if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3841 = 16369957LLU;
	volatile int8_t x3842 = 1;
	volatile uint64_t x3843 = UINT64_MAX;
	static uint8_t x3844 = 18U;

	t67 = (x3841<<((x3842<=x3843)|x3844));

	if (t67 != 8582572015616LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3989 = 65LLU;
	int32_t x3990 = 38728;
	uint64_t x3991 = 1867954265763LLU;
	uint8_t x3992 = 1U;

	t68 = (x3989<<((x3990<=x3991)|x3992));

	if (t68 != 130LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x4038 = -1LL;
	int8_t x4039 = INT8_MIN;
	volatile uint16_t x4040 = 3U;
	volatile int32_t t69 = -3;

	t69 = (x4037<<((x4038<=x4039)|x4040));

	if (t69 != 11913488) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4133 = 1U;
	int16_t x4134 = INT16_MAX;
	static volatile int16_t x4135 = INT16_MAX;
	int32_t t70 = -128061509;

	t70 = (x4133<<((x4134<=x4135)|x4136));

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4153 = 127589549LLU;
	int16_t x4154 = INT16_MIN;
	uint64_t x4155 = 3794158363232534LLU;
	int8_t x4156 = 0;

	t71 = (x4153<<((x4154<=x4155)|x4156));

	if (t71 != 127589549LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x4161 = UINT32_MAX;
	static int8_t x4162 = INT8_MIN;
	volatile int32_t x4163 = -1377911;
	uint8_t x4164 = 3U;
	volatile uint32_t t72 = 3501U;

	t72 = (x4161<<((x4162<=x4163)|x4164));

	if (t72 != 4294967288U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x4213 = UINT32_MAX;
	int16_t x4214 = INT16_MIN;
	uint32_t x4215 = 310U;
	volatile uint32_t t73 = 4U;

	t73 = (x4213<<((x4214<=x4215)|x4216));

	if (t73 != 4294967040U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4229 = UINT32_MAX;
	int64_t x4230 = INT64_MAX;
	volatile uint16_t x4232 = 12U;
	volatile uint32_t t74 = 458956356U;

	t74 = (x4229<<((x4230<=x4231)|x4232));

	if (t74 != 4294963200U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4325 = 141262;
	int8_t x4327 = -1;
	volatile int32_t t75 = -424242796;

	t75 = (x4325<<((x4326<=x4327)|x4328));

	if (t75 != 282524) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4329 = 51;
	int32_t x4330 = INT32_MIN;
	uint32_t x4331 = UINT32_MAX;

	t76 = (x4329<<((x4330<=x4331)|x4332));

	if (t76 != 26112) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4393 = 73558527LLU;
	int32_t x4394 = 3618644;
	static int32_t x4395 = -39;
	int64_t x4396 = 18LL;
	uint64_t t77 = 1LLU;

	t77 = (x4393<<((x4394<=x4395)|x4396));

	if (t77 != 19282926501888LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x4489 = 15;
	uint32_t x4492 = 6U;
	volatile int32_t t78 = -6601050;

	t78 = (x4489<<((x4490<=x4491)|x4492));

	if (t78 != 1920) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4529 = 21566LL;
	uint8_t x4530 = UINT8_MAX;
	int8_t x4531 = 1;
	static volatile uint8_t x4532 = 9U;
	int64_t t79 = -1LL;

	t79 = (x4529<<((x4530<=x4531)|x4532));

	if (t79 != 11041792LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4569 = UINT64_MAX;
	uint32_t x4570 = 3639U;
	int8_t x4571 = INT8_MIN;
	uint16_t x4572 = 2U;
	uint64_t t80 = 412LLU;

	t80 = (x4569<<((x4570<=x4571)|x4572));

	if (t80 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4649 = 1;
	uint64_t x4650 = UINT64_MAX;
	static uint8_t x4651 = 1U;
	static int8_t x4652 = 1;
	int32_t t81 = -6476954;

	t81 = (x4649<<((x4650<=x4651)|x4652));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4769 = INT16_MAX;
	int32_t x4771 = INT32_MIN;

	t82 = (x4769<<((x4770<=x4771)|x4772));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4893 = 78U;
	static uint16_t x4894 = 215U;
	int8_t x4895 = -1;
	uint32_t x4896 = 15U;
	static volatile int32_t t83 = -59;

	t83 = (x4893<<((x4894<=x4895)|x4896));

	if (t83 != 2555904) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4901 = UINT64_MAX;
	volatile uint8_t x4903 = 4U;
	int8_t x4904 = 63;
	uint64_t t84 = 873LLU;

	t84 = (x4901<<((x4902<=x4903)|x4904));

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4905 = UINT16_MAX;
	volatile uint8_t x4906 = 2U;
	static int64_t x4907 = INT64_MIN;
	uint8_t x4908 = 11U;

	t85 = (x4905<<((x4906<=x4907)|x4908));

	if (t85 != 134215680) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4918 = INT8_MIN;
	uint32_t x4919 = 1118417797U;
	static int8_t x4920 = 0;
	uint32_t t86 = UINT32_MAX;

	t86 = (x4917<<((x4918<=x4919)|x4920));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5005 = 1499U;
	uint16_t x5008 = 5U;
	volatile int32_t t87 = -11;

	t87 = (x5005<<((x5006<=x5007)|x5008));

	if (t87 != 47968) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5021 = 14929U;
	volatile int8_t x5022 = -2;
	int16_t x5023 = -1;
	uint8_t x5024 = 4U;

	t88 = (x5021<<((x5022<=x5023)|x5024));

	if (t88 != 477728) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5266 = UINT16_MAX;
	static volatile uint64_t x5267 = UINT64_MAX;
	int32_t x5268 = 1;

	t89 = (x5265<<((x5266<=x5267)|x5268));

	if (t89 != 6853186343311924LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5321 = UINT64_MAX;
	int32_t x5322 = 29689;
	static int8_t x5323 = -2;
	volatile uint16_t x5324 = 14U;

	t90 = (x5321<<((x5322<=x5323)|x5324));

	if (t90 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5341 = 4U;
	int8_t x5343 = INT8_MIN;
	uint8_t x5344 = 7U;
	int32_t t91 = 1853;

	t91 = (x5341<<((x5342<=x5343)|x5344));

	if (t91 != 512) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x5373 = 59616940308155LLU;
	int64_t x5374 = 1921LL;
	int32_t x5375 = 482211733;
	int16_t x5376 = 3;
	static volatile uint64_t t92 = 54159329193LLU;

	t92 = (x5373<<((x5374<=x5375)|x5376));

	if (t92 != 476935522465240LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5441 = 2137;
	int16_t x5443 = INT16_MAX;

	t93 = (x5441<<((x5442<=x5443)|x5444));

	if (t93 != 17506304) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x5657 = UINT16_MAX;
	int16_t x5658 = -23;
	uint8_t x5659 = 12U;
	static int8_t x5660 = 0;
	static int32_t t94 = 0;

	t94 = (x5657<<((x5658<=x5659)|x5660));

	if (t94 != 131070) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x5685 = 5U;
	int16_t x5686 = -31;
	uint64_t x5687 = 1991942730LLU;
	volatile int8_t x5688 = 0;
	int32_t t95 = -1816;

	t95 = (x5685<<((x5686<=x5687)|x5688));

	if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5745 = 947343714LLU;
	volatile int64_t x5746 = INT64_MIN;
	int64_t x5747 = 26220LL;
	static volatile int16_t x5748 = 38;
	static uint64_t t96 = 9780244160700242LLU;

	t96 = (x5745<<((x5746<=x5747)|x5748));

	if (t96 != 4298880457883254784LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x5809 = 3U;
	int64_t x5810 = INT64_MIN;
	uint32_t x5811 = 1304085551U;

	t97 = (x5809<<((x5810<=x5811)|x5812));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5830 = INT16_MAX;
	int8_t x5831 = 3;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x5829<<((x5830<=x5831)|x5832));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5993 = 1807739602U;
	uint64_t x5994 = 279971474909178691LLU;
	int8_t x5996 = 30;
	static uint32_t t99 = 12U;

	t99 = (x5993<<((x5994<=x5995)|x5996));

	if (t99 != 2147483648U) { NG(); } else { ; }
	
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

