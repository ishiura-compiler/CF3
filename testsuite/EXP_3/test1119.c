#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x137 = 4U;
int16_t x138 = INT16_MIN;
static volatile uint16_t x323 = UINT16_MAX;
int8_t x409 = INT8_MAX;
volatile int32_t t4 = -2434590;
volatile uint8_t x468 = 4U;
uint8_t x472 = 2U;
static volatile int32_t x557 = INT32_MIN;
int8_t x560 = 1;
int32_t x621 = -1;
static volatile int32_t x622 = -18294600;
volatile int64_t t9 = -1320LL;
int8_t x706 = -1;
uint64_t x707 = UINT64_MAX;
volatile int32_t t12 = 58846;
uint8_t x777 = UINT8_MAX;
static uint64_t t14 = 386LLU;
int32_t t15 = 127529;
int16_t x878 = INT16_MAX;
int64_t x1016 = 0LL;
static uint16_t x1041 = 90U;
int32_t x1043 = 12;
static int32_t x1118 = -321641996;
uint64_t x1186 = 3427LLU;
int8_t x1269 = INT8_MIN;
uint64_t x1270 = UINT64_MAX;
static uint16_t x1431 = 22U;
static volatile int16_t x1432 = 4;
static int32_t x1459 = 58620;
static uint8_t x1460 = 1U;
int64_t x1538 = 114146171LL;
uint16_t x1629 = 119U;
uint64_t t28 = 31363668LLU;
static uint16_t x1795 = 10U;
static int64_t x1883 = 11491832021164LL;
static int16_t x1884 = 1;
volatile int16_t x1920 = 1;
uint64_t x1947 = UINT64_MAX;
static uint8_t x1948 = 0U;
uint32_t x1956 = 1U;
int16_t x1973 = INT16_MAX;
int64_t x1975 = INT64_MAX;
int8_t x2009 = -1;
uint8_t x2012 = 4U;
uint16_t x2114 = 5U;
static uint8_t x2154 = 3U;
int64_t t41 = 207341248LL;
uint8_t x2282 = 7U;
volatile uint8_t x2352 = 1U;
volatile int32_t t45 = -43;
int32_t x2414 = INT32_MIN;
static uint16_t x2470 = UINT16_MAX;
static volatile int64_t x2471 = INT64_MAX;
static uint16_t x2472 = 61U;
static uint64_t x2481 = 12LLU;
volatile int64_t t48 = -586657LL;
int64_t x2503 = INT64_MAX;
int16_t x2866 = INT16_MIN;
int8_t x2868 = 0;
static uint8_t x2877 = UINT8_MAX;
int32_t x2880 = 0;
volatile int32_t t57 = -773;
static int64_t x2929 = INT64_MIN;
int64_t x2966 = 186495945LL;
uint8_t x3063 = UINT8_MAX;
static int64_t x3118 = INT64_MIN;
int8_t x3233 = -1;
int32_t x3241 = -43;
volatile int8_t x3245 = INT8_MAX;
volatile int8_t x3405 = INT8_MIN;
static int32_t x3406 = 2603;
uint64_t x3407 = 8162187945599134688LLU;
static int8_t x3408 = 2;
int64_t x3434 = INT64_MIN;
int16_t x3513 = INT16_MIN;
static int32_t t72 = -68191055;
volatile int8_t x3659 = 7;
static int32_t t73 = -276093;
int8_t x3682 = INT8_MIN;
volatile uint32_t t75 = 4U;
int64_t x3778 = INT64_MIN;
int8_t x3949 = INT8_MAX;
uint16_t x3950 = 5872U;
uint8_t x3952 = 0U;
uint64_t x3955 = 916LLU;
int16_t x3956 = 1;
int16_t x3973 = 0;
int16_t x3975 = 4449;
int16_t x3999 = 2214;
volatile uint8_t x4172 = 4U;
static uint16_t x4193 = UINT16_MAX;
uint32_t x4247 = 63637637U;
volatile uint32_t t84 = 31241919U;
int32_t x4293 = -1;
volatile uint16_t x4427 = 14761U;
int64_t x4446 = 241461LL;
volatile uint32_t t90 = 2699252U;
uint8_t x4639 = 54U;
uint64_t t94 = 747759659732512LLU;
int16_t x4866 = INT16_MIN;
int64_t x5104 = 1LL;


void f0(void) {
	static volatile uint32_t x33 = UINT32_MAX;
	int8_t x34 = -1;
	int64_t x35 = INT64_MAX;
	volatile uint16_t x36 = 2U;
	volatile int64_t t0 = 13285LL;

	t0 = ((x33<x34)+(x35>>x36));

	if (t0 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x139 = INT16_MAX;
	int8_t x140 = 0;
	static volatile int32_t t1 = 11074;

	t1 = ((x137<x138)+(x139>>x140));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x253 = UINT8_MAX;
	uint32_t x254 = UINT32_MAX;
	uint32_t x255 = UINT32_MAX;
	uint8_t x256 = 2U;
	volatile uint32_t t2 = 0U;

	t2 = ((x253<x254)+(x255>>x256));

	if (t2 != 1073741824U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x321 = INT64_MIN;
	static uint16_t x322 = 5U;
	volatile uint32_t x324 = 4U;
	static volatile int32_t t3 = 774148954;

	t3 = ((x321<x322)+(x323>>x324));

	if (t3 != 4096) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x410 = -57;
	static volatile int32_t x411 = 709381;
	uint32_t x412 = 0U;

	t4 = ((x409<x410)+(x411>>x412));

	if (t4 != 709381) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x465 = 103;
	int8_t x466 = 8;
	uint8_t x467 = 2U;
	volatile int32_t t5 = 3951259;

	t5 = ((x465<x466)+(x467>>x468));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x469 = 0U;
	uint32_t x470 = UINT32_MAX;
	int8_t x471 = 0;
	volatile int32_t t6 = 29393104;

	t6 = ((x469<x470)+(x471>>x472));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x517 = INT8_MAX;
	volatile uint32_t x518 = UINT32_MAX;
	uint64_t x519 = 967LLU;
	uint8_t x520 = 3U;
	volatile uint64_t t7 = 201277197467341LLU;

	t7 = ((x517<x518)+(x519>>x520));

	if (t7 != 121LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x558 = INT32_MIN;
	uint16_t x559 = UINT16_MAX;
	static volatile int32_t t8 = -314;

	t8 = ((x557<x558)+(x559>>x560));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x623 = INT64_MAX;
	int16_t x624 = 1;

	t9 = ((x621<x622)+(x623>>x624));

	if (t9 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x705 = INT16_MIN;
	static volatile uint16_t x708 = 1U;
	uint64_t t10 = 976488397186679813LLU;

	t10 = ((x705<x706)+(x707>>x708));

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x725 = 16465493;
	int32_t x726 = -6;
	uint16_t x727 = UINT16_MAX;
	volatile uint64_t x728 = 3LLU;
	volatile int32_t t11 = -12002;

	t11 = ((x725<x726)+(x727>>x728));

	if (t11 != 8191) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x729 = UINT16_MAX;
	volatile int64_t x730 = INT64_MAX;
	int32_t x731 = 95;
	uint16_t x732 = 0U;

	t12 = ((x729<x730)+(x731>>x732));

	if (t12 != 96) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x733 = 11U;
	volatile int32_t x734 = 1;
	int32_t x735 = 0;
	volatile uint64_t x736 = 4LLU;
	volatile int32_t t13 = 1;

	t13 = ((x733<x734)+(x735>>x736));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x778 = UINT64_MAX;
	static volatile uint64_t x779 = UINT64_MAX;
	uint32_t x780 = 15U;

	t14 = ((x777<x778)+(x779>>x780));

	if (t14 != 562949953421312LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x849 = INT8_MIN;
	volatile int32_t x850 = INT32_MIN;
	uint8_t x851 = 3U;
	uint16_t x852 = 23U;

	t15 = ((x849<x850)+(x851>>x852));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x877 = INT32_MIN;
	uint32_t x879 = 6939U;
	static uint16_t x880 = 5U;
	static uint32_t t16 = 16710U;

	t16 = ((x877<x878)+(x879>>x880));

	if (t16 != 217U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1013 = 0;
	volatile uint64_t x1014 = UINT64_MAX;
	uint64_t x1015 = 17254213128130895LLU;
	volatile uint64_t t17 = 181510764958LLU;

	t17 = ((x1013<x1014)+(x1015>>x1016));

	if (t17 != 17254213128130896LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x1042 = INT32_MIN;
	int16_t x1044 = 28;
	volatile int32_t t18 = -255;

	t18 = ((x1041<x1042)+(x1043>>x1044));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1117 = -497624356;
	int16_t x1119 = INT16_MAX;
	static uint8_t x1120 = 0U;
	static int32_t t19 = -1824;

	t19 = ((x1117<x1118)+(x1119>>x1120));

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1137 = 11020U;
	volatile uint64_t x1138 = 47LLU;
	uint16_t x1139 = 573U;
	uint8_t x1140 = 7U;
	static volatile int32_t t20 = -22411572;

	t20 = ((x1137<x1138)+(x1139>>x1140));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1185 = -15091510;
	uint8_t x1187 = UINT8_MAX;
	static uint8_t x1188 = 27U;
	volatile int32_t t21 = -23654;

	t21 = ((x1185<x1186)+(x1187>>x1188));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1271 = INT64_MAX;
	static uint16_t x1272 = 13U;
	volatile int64_t t22 = -462099002134LL;

	t22 = ((x1269<x1270)+(x1271>>x1272));

	if (t22 != 1125899906842624LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1357 = INT16_MAX;
	uint8_t x1358 = 3U;
	static uint32_t x1359 = 175534910U;
	uint16_t x1360 = 8U;
	uint32_t t23 = 77U;

	t23 = ((x1357<x1358)+(x1359>>x1360));

	if (t23 != 685683U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1377 = INT32_MAX;
	int32_t x1378 = -1;
	int32_t x1379 = 17204013;
	uint32_t x1380 = 1U;
	static volatile int32_t t24 = -7;

	t24 = ((x1377<x1378)+(x1379>>x1380));

	if (t24 != 8602006) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1429 = 47;
	int8_t x1430 = INT8_MIN;
	int32_t t25 = -6;

	t25 = ((x1429<x1430)+(x1431>>x1432));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1457 = -1LL;
	int64_t x1458 = -1LL;
	int32_t t26 = 3404279;

	t26 = ((x1457<x1458)+(x1459>>x1460));

	if (t26 != 29310) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1537 = INT8_MIN;
	static volatile int32_t x1539 = 349776;
	uint8_t x1540 = 12U;
	int32_t t27 = 0;

	t27 = ((x1537<x1538)+(x1539>>x1540));

	if (t27 != 86) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1630 = -276;
	uint64_t x1631 = UINT64_MAX;
	uint8_t x1632 = 1U;

	t28 = ((x1629<x1630)+(x1631>>x1632));

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1709 = INT8_MIN;
	static uint8_t x1710 = 89U;
	volatile uint64_t x1711 = UINT64_MAX;
	uint64_t x1712 = 0LLU;
	uint64_t t29 = 244554600082LLU;

	t29 = ((x1709<x1710)+(x1711>>x1712));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1761 = -4;
	int8_t x1762 = INT8_MIN;
	static volatile uint32_t x1763 = 56978U;
	int8_t x1764 = 2;
	volatile uint32_t t30 = 27902114U;

	t30 = ((x1761<x1762)+(x1763>>x1764));

	if (t30 != 14244U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1793 = 1;
	volatile int16_t x1794 = 2;
	volatile int8_t x1796 = 28;
	volatile int32_t t31 = -1771;

	t31 = ((x1793<x1794)+(x1795>>x1796));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1881 = 4;
	volatile int8_t x1882 = 59;
	volatile int64_t t32 = 3196664LL;

	t32 = ((x1881<x1882)+(x1883>>x1884));

	if (t32 != 5745916010583LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1893 = UINT32_MAX;
	static int8_t x1894 = -19;
	static int8_t x1895 = 0;
	volatile uint8_t x1896 = 2U;
	int32_t t33 = -130482;

	t33 = ((x1893<x1894)+(x1895>>x1896));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1917 = INT16_MIN;
	uint64_t x1918 = 201006LLU;
	volatile uint64_t x1919 = 4142991710282611LLU;
	uint64_t t34 = 53162734234838116LLU;

	t34 = ((x1917<x1918)+(x1919>>x1920));

	if (t34 != 2071495855141305LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1945 = INT8_MAX;
	static uint16_t x1946 = 0U;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x1945<x1946)+(x1947>>x1948));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1953 = -27;
	int8_t x1954 = INT8_MAX;
	volatile uint8_t x1955 = 6U;
	volatile int32_t t36 = -921;

	t36 = ((x1953<x1954)+(x1955>>x1956));

	if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1974 = 0U;
	uint8_t x1976 = 15U;
	static volatile int64_t t37 = 614138438591044LL;

	t37 = ((x1973<x1974)+(x1975>>x1976));

	if (t37 != 281474976710655LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2010 = 2U;
	uint64_t x2011 = UINT64_MAX;
	volatile uint64_t t38 = 17192420252940425LLU;

	t38 = ((x2009<x2010)+(x2011>>x2012));

	if (t38 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2113 = -1111719448688489607LL;
	uint8_t x2115 = 63U;
	volatile uint16_t x2116 = 3U;
	volatile int32_t t39 = 1;

	t39 = ((x2113<x2114)+(x2115>>x2116));

	if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2145 = -1;
	uint16_t x2146 = 20U;
	volatile uint64_t x2147 = 69114756760570304LLU;
	static int8_t x2148 = 1;
	volatile uint64_t t40 = 13628811039LLU;

	t40 = ((x2145<x2146)+(x2147>>x2148));

	if (t40 != 34557378380285153LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2153 = -1;
	int64_t x2155 = 5LL;
	uint8_t x2156 = 6U;

	t41 = ((x2153<x2154)+(x2155>>x2156));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2237 = 1;
	uint32_t x2238 = UINT32_MAX;
	uint8_t x2239 = UINT8_MAX;
	volatile uint16_t x2240 = 6U;
	int32_t t42 = -79;

	t42 = ((x2237<x2238)+(x2239>>x2240));

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x2281 = -1LL;
	static int32_t x2283 = 2;
	uint64_t x2284 = 10LLU;
	volatile int32_t t43 = -45655;

	t43 = ((x2281<x2282)+(x2283>>x2284));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2329 = INT32_MIN;
	int16_t x2330 = INT16_MIN;
	uint16_t x2331 = 11261U;
	volatile uint8_t x2332 = 6U;
	int32_t t44 = 404014;

	t44 = ((x2329<x2330)+(x2331>>x2332));

	if (t44 != 176) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2349 = INT64_MIN;
	int64_t x2350 = INT64_MAX;
	int16_t x2351 = INT16_MAX;

	t45 = ((x2349<x2350)+(x2351>>x2352));

	if (t45 != 16384) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2413 = 103U;
	volatile uint64_t x2415 = 14075617LLU;
	volatile uint16_t x2416 = 1U;
	volatile uint64_t t46 = 370806396542738710LLU;

	t46 = ((x2413<x2414)+(x2415>>x2416));

	if (t46 != 7037808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2469 = -1;
	volatile int64_t t47 = -51093908490965799LL;

	t47 = ((x2469<x2470)+(x2471>>x2472));

	if (t47 != 4LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2482 = INT32_MIN;
	int64_t x2483 = INT64_MAX;
	static volatile uint8_t x2484 = 3U;

	t48 = ((x2481<x2482)+(x2483>>x2484));

	if (t48 != 1152921504606846976LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2489 = INT32_MAX;
	int32_t x2490 = INT32_MIN;
	int16_t x2491 = INT16_MAX;
	int8_t x2492 = 3;
	volatile int32_t t49 = 145;

	t49 = ((x2489<x2490)+(x2491>>x2492));

	if (t49 != 4095) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x2501 = UINT8_MAX;
	uint64_t x2502 = 58LLU;
	uint16_t x2504 = 5U;
	volatile int64_t t50 = 689713210LL;

	t50 = ((x2501<x2502)+(x2503>>x2504));

	if (t50 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2569 = -1;
	uint16_t x2570 = 4U;
	uint8_t x2571 = 62U;
	uint64_t x2572 = 9LLU;
	static int32_t t51 = 1104528;

	t51 = ((x2569<x2570)+(x2571>>x2572));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2613 = -1;
	int16_t x2614 = INT16_MIN;
	static uint64_t x2615 = 374785695232LLU;
	volatile int8_t x2616 = 18;
	volatile uint64_t t52 = 14314779948LLU;

	t52 = ((x2613<x2614)+(x2615>>x2616));

	if (t52 != 1429693LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2633 = INT16_MAX;
	uint64_t x2634 = 1305810733LLU;
	volatile uint32_t x2635 = 3U;
	uint8_t x2636 = 2U;
	volatile uint32_t t53 = 164U;

	t53 = ((x2633<x2634)+(x2635>>x2636));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2705 = UINT8_MAX;
	static int8_t x2706 = 3;
	uint16_t x2707 = 7073U;
	uint8_t x2708 = 0U;
	volatile int32_t t54 = -1735875;

	t54 = ((x2705<x2706)+(x2707>>x2708));

	if (t54 != 7073) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2865 = INT32_MIN;
	static volatile uint8_t x2867 = 75U;
	volatile int32_t t55 = -13363775;

	t55 = ((x2865<x2866)+(x2867>>x2868));

	if (t55 != 76) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2878 = INT32_MIN;
	uint16_t x2879 = UINT16_MAX;
	int32_t t56 = 2966036;

	t56 = ((x2877<x2878)+(x2879>>x2880));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2913 = -1788;
	static uint32_t x2914 = 13635U;
	int16_t x2915 = 706;
	volatile uint32_t x2916 = 4U;

	t57 = ((x2913<x2914)+(x2915>>x2916));

	if (t57 != 44) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2917 = INT32_MIN;
	static uint8_t x2918 = 10U;
	volatile uint32_t x2919 = 351580U;
	int8_t x2920 = 9;
	uint32_t t58 = 3798U;

	t58 = ((x2917<x2918)+(x2919>>x2920));

	if (t58 != 687U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2930 = -20;
	volatile int8_t x2931 = 0;
	uint8_t x2932 = 6U;
	static int32_t t59 = -9748434;

	t59 = ((x2929<x2930)+(x2931>>x2932));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2965 = INT16_MIN;
	uint8_t x2967 = 1U;
	uint32_t x2968 = 2U;
	int32_t t60 = -1;

	t60 = ((x2965<x2966)+(x2967>>x2968));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3061 = -653;
	uint32_t x3062 = UINT32_MAX;
	static int32_t x3064 = 2;
	int32_t t61 = 680;

	t61 = ((x3061<x3062)+(x3063>>x3064));

	if (t61 != 64) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x3081 = INT32_MIN;
	static volatile int8_t x3082 = -1;
	volatile int16_t x3083 = 168;
	volatile uint16_t x3084 = 5U;
	int32_t t62 = 3567;

	t62 = ((x3081<x3082)+(x3083>>x3084));

	if (t62 != 6) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3089 = 2310U;
	static int16_t x3090 = -1;
	uint16_t x3091 = 86U;
	static uint64_t x3092 = 6LLU;
	volatile int32_t t63 = -1;

	t63 = ((x3089<x3090)+(x3091>>x3092));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3117 = 0;
	static uint16_t x3119 = 51U;
	int8_t x3120 = 10;
	volatile int32_t t64 = 4340593;

	t64 = ((x3117<x3118)+(x3119>>x3120));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3234 = INT32_MIN;
	int64_t x3235 = 0LL;
	uint8_t x3236 = 0U;
	volatile int64_t t65 = -518LL;

	t65 = ((x3233<x3234)+(x3235>>x3236));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3242 = UINT8_MAX;
	int64_t x3243 = 1055964LL;
	int8_t x3244 = 33;
	int64_t t66 = 2LL;

	t66 = ((x3241<x3242)+(x3243>>x3244));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x3246 = UINT16_MAX;
	uint32_t x3247 = UINT32_MAX;
	static volatile uint32_t x3248 = 8U;
	uint32_t t67 = 339U;

	t67 = ((x3245<x3246)+(x3247>>x3248));

	if (t67 != 16777216U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3289 = UINT16_MAX;
	int16_t x3290 = INT16_MIN;
	static uint64_t x3291 = UINT64_MAX;
	volatile int8_t x3292 = 4;
	uint64_t t68 = 4253147900204LLU;

	t68 = ((x3289<x3290)+(x3291>>x3292));

	if (t68 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t t69 = 22906235453474LLU;

	t69 = ((x3405<x3406)+(x3407>>x3408));

	if (t69 != 2040546986399783673LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3433 = UINT64_MAX;
	uint16_t x3435 = 11408U;
	int8_t x3436 = 2;
	volatile int32_t t70 = 479;

	t70 = ((x3433<x3434)+(x3435>>x3436));

	if (t70 != 2852) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3493 = -1LL;
	int8_t x3494 = -1;
	uint64_t x3495 = 113252838LLU;
	int16_t x3496 = 52;
	static uint64_t t71 = 677316341LLU;

	t71 = ((x3493<x3494)+(x3495>>x3496));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x3514 = 2U;
	static uint16_t x3515 = 90U;
	uint8_t x3516 = 5U;

	t72 = ((x3513<x3514)+(x3515>>x3516));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3657 = INT32_MIN;
	static uint16_t x3658 = 1U;
	uint8_t x3660 = 7U;

	t73 = ((x3657<x3658)+(x3659>>x3660));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3665 = INT32_MAX;
	uint64_t x3666 = 18411370327538LLU;
	uint16_t x3667 = 3U;
	int16_t x3668 = 9;
	volatile int32_t t74 = -1;

	t74 = ((x3665<x3666)+(x3667>>x3668));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3681 = -1;
	static volatile uint32_t x3683 = 75U;
	volatile int16_t x3684 = 0;

	t75 = ((x3681<x3682)+(x3683>>x3684));

	if (t75 != 75U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x3777 = INT64_MIN;
	static int32_t x3779 = INT32_MAX;
	static int32_t x3780 = 19;
	volatile int32_t t76 = 10667;

	t76 = ((x3777<x3778)+(x3779>>x3780));

	if (t76 != 4095) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3813 = INT32_MIN;
	static int8_t x3814 = -1;
	uint16_t x3815 = UINT16_MAX;
	volatile int8_t x3816 = 1;
	int32_t t77 = -134891;

	t77 = ((x3813<x3814)+(x3815>>x3816));

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3951 = UINT64_MAX;
	uint64_t t78 = 608458245826LLU;

	t78 = ((x3949<x3950)+(x3951>>x3952));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3953 = INT64_MAX;
	static uint32_t x3954 = 20U;
	volatile uint64_t t79 = 123LLU;

	t79 = ((x3953<x3954)+(x3955>>x3956));

	if (t79 != 458LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x3974 = -146098872305501LL;
	uint64_t x3976 = 0LLU;
	static int32_t t80 = -20;

	t80 = ((x3973<x3974)+(x3975>>x3976));

	if (t80 != 4449) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x3997 = -67;
	uint64_t x3998 = 460851794298616LLU;
	int8_t x4000 = 0;
	int32_t t81 = 1571;

	t81 = ((x3997<x3998)+(x3999>>x4000));

	if (t81 != 2214) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4169 = UINT16_MAX;
	volatile int64_t x4170 = -1LL;
	int32_t x4171 = 3;
	int32_t t82 = -52;

	t82 = ((x4169<x4170)+(x4171>>x4172));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x4194 = -23;
	uint64_t x4195 = UINT64_MAX;
	static int8_t x4196 = 2;
	uint64_t t83 = 1861977LLU;

	t83 = ((x4193<x4194)+(x4195>>x4196));

	if (t83 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x4245 = 1;
	static int8_t x4246 = INT8_MIN;
	uint16_t x4248 = 25U;

	t84 = ((x4245<x4246)+(x4247>>x4248));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4253 = INT32_MIN;
	int8_t x4254 = 7;
	uint64_t x4255 = 11996LLU;
	int16_t x4256 = 18;
	volatile uint64_t t85 = 1533136363LLU;

	t85 = ((x4253<x4254)+(x4255>>x4256));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4289 = INT64_MIN;
	int64_t x4290 = -114193LL;
	volatile int64_t x4291 = INT64_MAX;
	static int32_t x4292 = 14;
	static int64_t t86 = -179LL;

	t86 = ((x4289<x4290)+(x4291>>x4292));

	if (t86 != 562949953421312LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4294 = -1;
	uint16_t x4295 = UINT16_MAX;
	int8_t x4296 = 1;
	volatile int32_t t87 = 20754845;

	t87 = ((x4293<x4294)+(x4295>>x4296));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4329 = -1;
	int16_t x4330 = INT16_MIN;
	int8_t x4331 = INT8_MAX;
	uint8_t x4332 = 0U;
	int32_t t88 = 5;

	t88 = ((x4329<x4330)+(x4331>>x4332));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4425 = UINT16_MAX;
	uint8_t x4426 = 4U;
	int32_t x4428 = 1;
	volatile int32_t t89 = -3;

	t89 = ((x4425<x4426)+(x4427>>x4428));

	if (t89 != 7380) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4445 = -45;
	uint32_t x4447 = 61803U;
	int16_t x4448 = 0;

	t90 = ((x4445<x4446)+(x4447>>x4448));

	if (t90 != 61804U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4549 = -1;
	uint32_t x4550 = UINT32_MAX;
	static volatile int16_t x4551 = 1062;
	uint8_t x4552 = 19U;
	volatile int32_t t91 = 1;

	t91 = ((x4549<x4550)+(x4551>>x4552));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4637 = 1U;
	volatile int8_t x4638 = 6;
	int8_t x4640 = 0;
	volatile int32_t t92 = 140;

	t92 = ((x4637<x4638)+(x4639>>x4640));

	if (t92 != 55) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x4717 = 5386;
	static volatile int16_t x4718 = INT16_MIN;
	int64_t x4719 = 7034709686LL;
	uint8_t x4720 = 0U;
	int64_t t93 = -23581921065093LL;

	t93 = ((x4717<x4718)+(x4719>>x4720));

	if (t93 != 7034709686LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4801 = INT16_MIN;
	uint32_t x4802 = 15951U;
	uint64_t x4803 = 1976077761LLU;
	uint16_t x4804 = 2U;

	t94 = ((x4801<x4802)+(x4803>>x4804));

	if (t94 != 494019440LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4845 = 152;
	static volatile int8_t x4846 = INT8_MIN;
	volatile uint8_t x4847 = UINT8_MAX;
	static uint8_t x4848 = 10U;
	volatile int32_t t95 = -354369009;

	t95 = ((x4845<x4846)+(x4847>>x4848));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x4865 = INT16_MIN;
	volatile int16_t x4867 = 35;
	uint16_t x4868 = 4U;
	int32_t t96 = 42;

	t96 = ((x4865<x4866)+(x4867>>x4868));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5013 = 97;
	volatile uint32_t x5014 = UINT32_MAX;
	volatile int64_t x5015 = INT64_MAX;
	static uint8_t x5016 = 2U;
	static int64_t t97 = -22015686115203LL;

	t97 = ((x5013<x5014)+(x5015>>x5016));

	if (t97 != 2305843009213693952LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5033 = -13;
	int64_t x5034 = -413013845LL;
	static uint16_t x5035 = 1352U;
	volatile uint16_t x5036 = 14U;
	int32_t t98 = -2;

	t98 = ((x5033<x5034)+(x5035>>x5036));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x5101 = -215;
	volatile int16_t x5102 = -1;
	static int32_t x5103 = INT32_MAX;
	volatile int32_t t99 = 1276208;

	t99 = ((x5101<x5102)+(x5103>>x5104));

	if (t99 != 1073741824) { NG(); } else { ; }
	
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

