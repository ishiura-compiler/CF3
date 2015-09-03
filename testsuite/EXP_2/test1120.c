#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 65649515;
int32_t x85 = INT32_MIN;
int64_t x102 = INT64_MAX;
volatile uint64_t t4 = 204LLU;
uint8_t x503 = 7U;
uint16_t x530 = 480U;
uint64_t x532 = UINT64_MAX;
int16_t x557 = INT16_MIN;
int8_t x559 = 0;
static int8_t x807 = 3;
uint32_t x838 = 17U;
int8_t x839 = 5;
uint64_t x869 = 5475505563151655LLU;
int8_t x871 = 14;
static volatile int64_t t15 = 949LL;
static volatile uint32_t t16 = 2033U;
static uint32_t x1023 = 3U;
uint32_t x1126 = UINT32_MAX;
static int16_t x1228 = -1;
int8_t x1441 = -1;
static int8_t x1443 = 0;
uint8_t x1547 = 11U;
uint64_t x1548 = 45263LLU;
static uint32_t x1561 = 55U;
int16_t x1697 = -1;
static uint8_t x1704 = UINT8_MAX;
static uint16_t x1705 = 5192U;
int8_t x1708 = INT8_MIN;
volatile int32_t t32 = 1;
int16_t x1733 = INT16_MAX;
int8_t x1734 = INT8_MAX;
int8_t x1768 = INT8_MAX;
int64_t t36 = -617592773697889LL;
volatile uint8_t x2098 = UINT8_MAX;
volatile uint8_t x2100 = 10U;
int16_t x2144 = INT16_MIN;
int32_t x2213 = INT32_MIN;
int16_t x2232 = -1;
int16_t x2340 = -1;
static int16_t x2392 = 94;
volatile uint8_t x2443 = 5U;
volatile uint16_t x2495 = 22U;
static int32_t x2496 = -1;
uint32_t x2670 = 237806883U;
uint64_t x2705 = UINT64_MAX;
volatile int32_t t51 = 308857867;
volatile uint8_t x2925 = UINT8_MAX;
uint8_t x2927 = 0U;
volatile uint8_t x3026 = 13U;
uint8_t x3033 = UINT8_MAX;
volatile int16_t x3034 = 6929;
int16_t x3361 = 14338;
int16_t x3421 = INT16_MAX;
int16_t x3422 = INT16_MAX;
volatile int16_t x3456 = INT16_MAX;
int32_t x3545 = INT32_MIN;
static uint8_t x3547 = 29U;
int32_t x3586 = 13803;
int16_t x3650 = 0;
int64_t x3713 = 114595640611LL;
uint8_t x3715 = 11U;
int32_t x3729 = -30;
int8_t x3732 = 1;
volatile int32_t t62 = -425027073;
uint32_t x3734 = 3859U;
uint16_t x3774 = 11U;
volatile int16_t x3916 = -1;
volatile int32_t t66 = -13084;
volatile uint64_t x4062 = UINT64_MAX;
int32_t t68 = -20;
volatile uint8_t x4099 = 6U;
static int32_t x4326 = INT32_MAX;
uint8_t x4327 = 5U;
int8_t x4367 = 0;
int64_t t77 = 1782043361125405198LL;
static uint16_t x4595 = 0U;
uint8_t x4709 = 5U;
int16_t x4712 = INT16_MAX;
int32_t x4716 = -1243;
uint64_t x4830 = 126092910LLU;
uint32_t x4884 = UINT32_MAX;
volatile int64_t x4980 = -1769945894LL;
volatile int64_t t86 = 226480LL;
uint8_t x4986 = 33U;
volatile int32_t t87 = 458862;
int8_t x5039 = 1;
int8_t x5040 = INT8_MIN;
int32_t t88 = 2709143;
static volatile uint16_t x5095 = 3U;
int64_t t89 = 13882182013738LL;
static int16_t x5115 = 2;
static uint64_t x5117 = 31593233001693LLU;
volatile int16_t x5121 = -7645;
static uint8_t x5151 = 1U;
static volatile int8_t x5171 = 6;
int32_t x5225 = INT32_MIN;
int8_t x5226 = INT8_MAX;
uint16_t x5228 = 27U;
uint16_t x5261 = UINT16_MAX;
volatile int32_t t96 = -12;
int64_t x5473 = INT64_MIN;
uint16_t x5474 = 0U;
uint16_t x5487 = 15U;
int16_t x5525 = 6311;
int32_t x5526 = INT32_MAX;


void f0(void) {
	static volatile int32_t x5 = INT32_MIN;
	volatile uint8_t x6 = 2U;
	static uint32_t x7 = 1U;
	static int8_t x8 = 6;

	t0 = ((x5<(x6>>x7))-x8);

	if (t0 != -5) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x86 = 182196U;
	int32_t x87 = 7;
	int16_t x88 = 1;
	static int32_t t1 = 36065483;

	t1 = ((x85<(x86>>x87))-x88);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x101 = 1628;
	volatile int16_t x103 = 52;
	volatile int16_t x104 = INT16_MAX;
	int32_t t2 = 3595267;

	t2 = ((x101<(x102>>x103))-x104);

	if (t2 != -32766) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x113 = -1;
	static uint32_t x114 = 24347770U;
	int8_t x115 = 3;
	volatile int32_t x116 = 66832;
	static volatile int32_t t3 = 7136;

	t3 = ((x113<(x114>>x115))-x116);

	if (t3 != -66832) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x181 = INT64_MAX;
	int8_t x182 = 9;
	int8_t x183 = 21;
	uint64_t x184 = 356531191992LLU;

	t4 = ((x181<(x182>>x183))-x184);

	if (t4 != 18446743717178359624LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x277 = 1;
	volatile uint32_t x278 = 1186813U;
	static volatile uint16_t x279 = 0U;
	int8_t x280 = -22;
	static volatile int32_t t5 = -1047833478;

	t5 = ((x277<(x278>>x279))-x280);

	if (t5 != 23) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x485 = -1;
	int16_t x486 = 1745;
	uint32_t x487 = 1U;
	volatile int32_t x488 = 9462073;
	int32_t t6 = 5158;

	t6 = ((x485<(x486>>x487))-x488);

	if (t6 != -9462072) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x501 = 585U;
	uint64_t x502 = UINT64_MAX;
	static uint64_t x504 = 1286537LLU;
	volatile uint64_t t7 = 62629LLU;

	t7 = ((x501<(x502>>x503))-x504);

	if (t7 != 18446744073708265080LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x513 = INT32_MAX;
	int64_t x514 = INT64_MAX;
	uint32_t x515 = 6U;
	int32_t x516 = -367677935;
	static int32_t t8 = 1114;

	t8 = ((x513<(x514>>x515))-x516);

	if (t8 != 367677936) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x529 = INT32_MAX;
	uint16_t x531 = 6U;
	uint64_t t9 = 2824LLU;

	t9 = ((x529<(x530>>x531))-x532);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x558 = 298144078081336201LL;
	volatile int8_t x560 = INT8_MIN;
	int32_t t10 = 3;

	t10 = ((x557<(x558>>x559))-x560);

	if (t10 != 129) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x613 = INT8_MIN;
	int32_t x614 = 32513014;
	volatile uint16_t x615 = 6U;
	int32_t x616 = 5655;
	int32_t t11 = 1;

	t11 = ((x613<(x614>>x615))-x616);

	if (t11 != -5654) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x805 = 1U;
	uint64_t x806 = 172754LLU;
	volatile int32_t x808 = -1;
	static int32_t t12 = 348;

	t12 = ((x805<(x806>>x807))-x808);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x837 = -100;
	uint64_t x840 = 3027331713272LLU;
	static uint64_t t13 = 1LLU;

	t13 = ((x837<(x838>>x839))-x840);

	if (t13 != 18446741046377838344LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x870 = 313477342;
	int32_t x872 = -1;
	volatile int32_t t14 = -1;

	t14 = ((x869<(x870>>x871))-x872);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x913 = INT64_MAX;
	int64_t x914 = 133414LL;
	static volatile uint8_t x915 = 7U;
	static int64_t x916 = INT64_MAX;

	t15 = ((x913<(x914>>x915))-x916);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x925 = 9LL;
	int32_t x926 = 828;
	volatile int8_t x927 = 20;
	uint32_t x928 = 32740U;

	t16 = ((x925<(x926>>x927))-x928);

	if (t16 != 4294934556U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x957 = 509318455781LLU;
	uint8_t x958 = 40U;
	int8_t x959 = 3;
	int64_t x960 = -1LL;
	int64_t t17 = -32055LL;

	t17 = ((x957<(x958>>x959))-x960);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1021 = INT16_MAX;
	int16_t x1022 = 5;
	uint8_t x1024 = 66U;
	static volatile int32_t t18 = -4626;

	t18 = ((x1021<(x1022>>x1023))-x1024);

	if (t18 != -66) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1057 = INT64_MIN;
	int32_t x1058 = INT32_MAX;
	static uint32_t x1059 = 2U;
	int8_t x1060 = 0;
	int32_t t19 = 7;

	t19 = ((x1057<(x1058>>x1059))-x1060);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1125 = 80949854LLU;
	int8_t x1127 = 4;
	uint16_t x1128 = 1U;
	volatile int32_t t20 = 770;

	t20 = ((x1125<(x1126>>x1127))-x1128);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1225 = INT32_MAX;
	uint32_t x1226 = 6856315U;
	volatile uint16_t x1227 = 22U;
	volatile int32_t t21 = -165891;

	t21 = ((x1225<(x1226>>x1227))-x1228);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1257 = INT16_MIN;
	uint64_t x1258 = UINT64_MAX;
	int8_t x1259 = 1;
	uint64_t x1260 = UINT64_MAX;
	uint64_t t22 = 853377745694099LLU;

	t22 = ((x1257<(x1258>>x1259))-x1260);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x1437 = INT8_MAX;
	uint8_t x1438 = 14U;
	uint8_t x1439 = 31U;
	static uint64_t x1440 = 25137569LLU;
	uint64_t t23 = 13749471851LLU;

	t23 = ((x1437<(x1438>>x1439))-x1440);

	if (t23 != 18446744073684414047LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1442 = INT32_MAX;
	int32_t x1444 = INT32_MAX;
	int32_t t24 = 7;

	t24 = ((x1441<(x1442>>x1443))-x1444);

	if (t24 != -2147483646) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1449 = 0U;
	int64_t x1450 = 3309114LL;
	volatile int16_t x1451 = 0;
	int16_t x1452 = -362;
	volatile int32_t t25 = -3997;

	t25 = ((x1449<(x1450>>x1451))-x1452);

	if (t25 != 363) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x1473 = -1;
	int32_t x1474 = 313378579;
	int8_t x1475 = 3;
	static int64_t x1476 = INT64_MAX;
	volatile int64_t t26 = -235986LL;

	t26 = ((x1473<(x1474>>x1475))-x1476);

	if (t26 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1545 = -28LL;
	volatile int8_t x1546 = INT8_MAX;
	static volatile uint64_t t27 = 25764872LLU;

	t27 = ((x1545<(x1546>>x1547))-x1548);

	if (t27 != 18446744073709506354LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1562 = UINT32_MAX;
	uint8_t x1563 = 7U;
	static uint16_t x1564 = 50U;
	static volatile int32_t t28 = 201;

	t28 = ((x1561<(x1562>>x1563))-x1564);

	if (t28 != -49) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1633 = 17503074091881LLU;
	int32_t x1634 = 72214;
	int16_t x1635 = 5;
	uint8_t x1636 = 36U;
	int32_t t29 = 10128;

	t29 = ((x1633<(x1634>>x1635))-x1636);

	if (t29 != -36) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1698 = 64821287078559LL;
	uint32_t x1699 = 0U;
	static uint32_t x1700 = 1180493U;
	uint32_t t30 = 520918U;

	t30 = ((x1697<(x1698>>x1699))-x1700);

	if (t30 != 4293786804U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1701 = INT16_MAX;
	int64_t x1702 = INT64_MAX;
	static int8_t x1703 = 3;
	volatile int32_t t31 = -1130;

	t31 = ((x1701<(x1702>>x1703))-x1704);

	if (t31 != -254) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1706 = 0;
	int8_t x1707 = 4;

	t32 = ((x1705<(x1706>>x1707))-x1708);

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1735 = 12U;
	static int16_t x1736 = INT16_MIN;
	int32_t t33 = 6730392;

	t33 = ((x1733<(x1734>>x1735))-x1736);

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1737 = 5561181584105949LLU;
	uint16_t x1738 = 8040U;
	static uint8_t x1739 = 1U;
	volatile int64_t x1740 = 6339359LL;
	int64_t t34 = 1607384457098LL;

	t34 = ((x1737<(x1738>>x1739))-x1740);

	if (t34 != -6339359LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1765 = 1U;
	uint64_t x1766 = 3490445122063LLU;
	uint8_t x1767 = 10U;
	int32_t t35 = 1;

	t35 = ((x1765<(x1766>>x1767))-x1768);

	if (t35 != -126) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x1885 = UINT32_MAX;
	static int16_t x1886 = INT16_MAX;
	volatile uint64_t x1887 = 8LLU;
	volatile int64_t x1888 = -1LL;

	t36 = ((x1885<(x1886>>x1887))-x1888);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2073 = INT8_MAX;
	uint32_t x2074 = 313087773U;
	uint8_t x2075 = 4U;
	static int8_t x2076 = INT8_MAX;
	int32_t t37 = -882493896;

	t37 = ((x2073<(x2074>>x2075))-x2076);

	if (t37 != -126) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2097 = -1;
	uint16_t x2099 = 17U;
	int32_t t38 = -1;

	t38 = ((x2097<(x2098>>x2099))-x2100);

	if (t38 != -9) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2141 = 613U;
	uint8_t x2142 = UINT8_MAX;
	uint8_t x2143 = 1U;
	volatile int32_t t39 = 436651;

	t39 = ((x2141<(x2142>>x2143))-x2144);

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2185 = -51389943513LL;
	uint16_t x2186 = UINT16_MAX;
	volatile int8_t x2187 = 0;
	uint64_t x2188 = 1134549LLU;
	static volatile uint64_t t40 = 2194909608227707LLU;

	t40 = ((x2185<(x2186>>x2187))-x2188);

	if (t40 != 18446744073708417068LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2214 = 0;
	uint8_t x2215 = 27U;
	static int16_t x2216 = -1;
	volatile int32_t t41 = -6285;

	t41 = ((x2213<(x2214>>x2215))-x2216);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2221 = -1LL;
	uint16_t x2222 = 2943U;
	static int64_t x2223 = 1LL;
	int16_t x2224 = 2;
	volatile int32_t t42 = 948;

	t42 = ((x2221<(x2222>>x2223))-x2224);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2229 = 214186453533LL;
	int16_t x2230 = 0;
	static uint8_t x2231 = 3U;
	volatile int32_t t43 = -3502576;

	t43 = ((x2229<(x2230>>x2231))-x2232);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x2333 = UINT16_MAX;
	uint16_t x2334 = 115U;
	volatile uint8_t x2335 = 2U;
	uint16_t x2336 = 104U;
	int32_t t44 = 5;

	t44 = ((x2333<(x2334>>x2335))-x2336);

	if (t44 != -104) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2337 = 1357;
	volatile uint16_t x2338 = UINT16_MAX;
	int16_t x2339 = 1;
	int32_t t45 = -126721;

	t45 = ((x2337<(x2338>>x2339))-x2340);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2389 = INT8_MIN;
	int16_t x2390 = INT16_MAX;
	uint8_t x2391 = 16U;
	volatile int32_t t46 = -199350;

	t46 = ((x2389<(x2390>>x2391))-x2392);

	if (t46 != -93) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2441 = 610245U;
	uint32_t x2442 = 160474268U;
	uint64_t x2444 = 89158049146208780LLU;
	volatile uint64_t t47 = 1LLU;

	t47 = ((x2441<(x2442>>x2443))-x2444);

	if (t47 != 18357586024563342837LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2457 = -1;
	static uint32_t x2458 = UINT32_MAX;
	static uint8_t x2459 = 23U;
	uint8_t x2460 = 1U;
	volatile int32_t t48 = -1059654;

	t48 = ((x2457<(x2458>>x2459))-x2460);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x2493 = 798;
	int8_t x2494 = 7;
	volatile int32_t t49 = 106457660;

	t49 = ((x2493<(x2494>>x2495))-x2496);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2669 = 15464LLU;
	uint16_t x2671 = 3U;
	int8_t x2672 = -1;
	int32_t t50 = -694801758;

	t50 = ((x2669<(x2670>>x2671))-x2672);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2706 = INT32_MAX;
	uint16_t x2707 = 3U;
	int32_t x2708 = 902445104;

	t51 = ((x2705<(x2706>>x2707))-x2708);

	if (t51 != -902445104) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2926 = INT16_MAX;
	int16_t x2928 = 24;
	volatile int32_t t52 = -272890;

	t52 = ((x2925<(x2926>>x2927))-x2928);

	if (t52 != -23) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3025 = INT16_MAX;
	uint16_t x3027 = 1U;
	volatile int8_t x3028 = INT8_MIN;
	static volatile int32_t t53 = -31891158;

	t53 = ((x3025<(x3026>>x3027))-x3028);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x3035 = 5U;
	uint8_t x3036 = 1U;
	static volatile int32_t t54 = -269493163;

	t54 = ((x3033<(x3034>>x3035))-x3036);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3362 = 27412654631LL;
	static int64_t x3363 = 7LL;
	int16_t x3364 = INT16_MAX;
	int32_t t55 = -103;

	t55 = ((x3361<(x3362>>x3363))-x3364);

	if (t55 != -32766) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3423 = 0;
	uint32_t x3424 = 102U;
	volatile uint32_t t56 = 881U;

	t56 = ((x3421<(x3422>>x3423))-x3424);

	if (t56 != 4294967194U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3453 = 56U;
	uint32_t x3454 = UINT32_MAX;
	uint16_t x3455 = 7U;
	volatile int32_t t57 = 1;

	t57 = ((x3453<(x3454>>x3455))-x3456);

	if (t57 != -32766) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3546 = 9U;
	int64_t x3548 = 1LL;
	int64_t t58 = 662046040078628183LL;

	t58 = ((x3545<(x3546>>x3547))-x3548);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x3585 = INT32_MAX;
	volatile int16_t x3587 = 1;
	int32_t x3588 = INT32_MAX;
	volatile int32_t t59 = -17116;

	t59 = ((x3585<(x3586>>x3587))-x3588);

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3649 = 14054;
	static uint16_t x3651 = 0U;
	int16_t x3652 = INT16_MIN;
	static volatile int32_t t60 = 113;

	t60 = ((x3649<(x3650>>x3651))-x3652);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3714 = 3705U;
	volatile int32_t x3716 = INT32_MAX;
	int32_t t61 = -335417;

	t61 = ((x3713<(x3714>>x3715))-x3716);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3730 = 10U;
	uint8_t x3731 = 0U;

	t62 = ((x3729<(x3730>>x3731))-x3732);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3733 = INT64_MAX;
	int8_t x3735 = 1;
	int8_t x3736 = INT8_MIN;
	static volatile int32_t t63 = -10846145;

	t63 = ((x3733<(x3734>>x3735))-x3736);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3773 = UINT32_MAX;
	volatile uint32_t x3775 = 2U;
	static int16_t x3776 = INT16_MIN;
	int32_t t64 = 1396;

	t64 = ((x3773<(x3774>>x3775))-x3776);

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3913 = INT32_MAX;
	int32_t x3914 = INT32_MAX;
	uint16_t x3915 = 30U;
	volatile int32_t t65 = -3874501;

	t65 = ((x3913<(x3914>>x3915))-x3916);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4001 = INT16_MIN;
	int8_t x4002 = 2;
	volatile int16_t x4003 = 2;
	volatile int32_t x4004 = -1;

	t66 = ((x4001<(x4002>>x4003))-x4004);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x4013 = -1;
	uint8_t x4014 = UINT8_MAX;
	static int16_t x4015 = 0;
	static int16_t x4016 = INT16_MIN;
	volatile int32_t t67 = -35863;

	t67 = ((x4013<(x4014>>x4015))-x4016);

	if (t67 != 32769) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4061 = -509259622;
	int16_t x4063 = 3;
	static volatile int16_t x4064 = 2;

	t68 = ((x4061<(x4062>>x4063))-x4064);

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x4097 = INT16_MIN;
	int8_t x4098 = 8;
	uint64_t x4100 = 193LLU;
	volatile uint64_t t69 = 414034LLU;

	t69 = ((x4097<(x4098>>x4099))-x4100);

	if (t69 != 18446744073709551424LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4205 = UINT16_MAX;
	uint64_t x4206 = UINT64_MAX;
	uint16_t x4207 = 7U;
	uint32_t x4208 = 349U;
	uint32_t t70 = 46822033U;

	t70 = ((x4205<(x4206>>x4207))-x4208);

	if (t70 != 4294966948U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4229 = INT32_MIN;
	uint32_t x4230 = 3440U;
	volatile uint64_t x4231 = 0LLU;
	int16_t x4232 = INT16_MIN;
	volatile int32_t t71 = 35843494;

	t71 = ((x4229<(x4230>>x4231))-x4232);

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4325 = -375015817375LL;
	int8_t x4328 = -1;
	static int32_t t72 = 32891672;

	t72 = ((x4325<(x4326>>x4327))-x4328);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4365 = -1LL;
	uint8_t x4366 = 0U;
	uint64_t x4368 = 15673752194288423LLU;
	volatile uint64_t t73 = 7298603LLU;

	t73 = ((x4365<(x4366>>x4367))-x4368);

	if (t73 != 18431070321515263194LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4477 = UINT32_MAX;
	uint32_t x4478 = 871U;
	uint32_t x4479 = 3U;
	static int64_t x4480 = 3895LL;
	int64_t t74 = -7060559069LL;

	t74 = ((x4477<(x4478>>x4479))-x4480);

	if (t74 != -3895LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4481 = -1;
	uint16_t x4482 = 2528U;
	int32_t x4483 = 6;
	int8_t x4484 = INT8_MIN;
	int32_t t75 = 2;

	t75 = ((x4481<(x4482>>x4483))-x4484);

	if (t75 != 129) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x4525 = 200U;
	uint32_t x4526 = UINT32_MAX;
	uint8_t x4527 = 8U;
	static int64_t x4528 = -1LL;
	int64_t t76 = -269325741LL;

	t76 = ((x4525<(x4526>>x4527))-x4528);

	if (t76 != 2LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4541 = 30370295965493LLU;
	int64_t x4542 = 500783116400661LL;
	int8_t x4543 = 1;
	volatile int64_t x4544 = 2030973696837291128LL;

	t77 = ((x4541<(x4542>>x4543))-x4544);

	if (t77 != -2030973696837291127LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4593 = 6U;
	uint32_t x4594 = 2U;
	int64_t x4596 = 1347996294LL;
	int64_t t78 = -3LL;

	t78 = ((x4593<(x4594>>x4595))-x4596);

	if (t78 != -1347996294LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4710 = INT32_MAX;
	volatile uint8_t x4711 = 24U;
	int32_t t79 = 23;

	t79 = ((x4709<(x4710>>x4711))-x4712);

	if (t79 != -32766) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x4713 = -2;
	static uint32_t x4714 = 2430091U;
	uint8_t x4715 = 1U;
	int32_t t80 = 7817226;

	t80 = ((x4713<(x4714>>x4715))-x4716);

	if (t80 != 1243) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4765 = 0U;
	int32_t x4766 = 711;
	uint8_t x4767 = 15U;
	uint32_t x4768 = 2316U;
	static uint32_t t81 = 1477666817U;

	t81 = ((x4765<(x4766>>x4767))-x4768);

	if (t81 != 4294964980U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x4793 = -1LL;
	int64_t x4794 = 69575466LL;
	static uint8_t x4795 = 20U;
	volatile int8_t x4796 = INT8_MIN;
	static int32_t t82 = 429618;

	t82 = ((x4793<(x4794>>x4795))-x4796);

	if (t82 != 129) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4829 = 4101529;
	uint8_t x4831 = 2U;
	volatile int16_t x4832 = INT16_MAX;
	volatile int32_t t83 = 386;

	t83 = ((x4829<(x4830>>x4831))-x4832);

	if (t83 != -32766) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4881 = 0U;
	int64_t x4882 = 100288452LL;
	int8_t x4883 = 6;
	uint32_t t84 = 2479836U;

	t84 = ((x4881<(x4882>>x4883))-x4884);

	if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x4933 = INT64_MIN;
	uint64_t x4934 = 1285LLU;
	uint8_t x4935 = 3U;
	int16_t x4936 = -726;
	int32_t t85 = -846149;

	t85 = ((x4933<(x4934>>x4935))-x4936);

	if (t85 != 726) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4977 = 2895001U;
	int32_t x4978 = INT32_MAX;
	uint32_t x4979 = 29U;

	t86 = ((x4977<(x4978>>x4979))-x4980);

	if (t86 != 1769945894LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4985 = UINT8_MAX;
	uint8_t x4987 = 1U;
	int32_t x4988 = -84495;

	t87 = ((x4985<(x4986>>x4987))-x4988);

	if (t87 != 84495) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x5037 = INT8_MIN;
	uint16_t x5038 = UINT16_MAX;

	t88 = ((x5037<(x5038>>x5039))-x5040);

	if (t88 != 129) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5093 = -308;
	static uint64_t x5094 = 2606LLU;
	int64_t x5096 = 58956958014924657LL;

	t89 = ((x5093<(x5094>>x5095))-x5096);

	if (t89 != -58956958014924657LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5113 = 1410246;
	uint8_t x5114 = 63U;
	volatile int8_t x5116 = 1;
	volatile int32_t t90 = -69422619;

	t90 = ((x5113<(x5114>>x5115))-x5116);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5118 = 2;
	uint8_t x5119 = 12U;
	int32_t x5120 = -1;
	volatile int32_t t91 = -1;

	t91 = ((x5117<(x5118>>x5119))-x5120);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5122 = UINT16_MAX;
	volatile int8_t x5123 = 6;
	volatile int32_t x5124 = -1;
	volatile int32_t t92 = 5686;

	t92 = ((x5121<(x5122>>x5123))-x5124);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x5149 = -355485215811101020LL;
	static int32_t x5150 = INT32_MAX;
	int8_t x5152 = INT8_MIN;
	static volatile int32_t t93 = 244;

	t93 = ((x5149<(x5150>>x5151))-x5152);

	if (t93 != 129) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5169 = 1879;
	uint32_t x5170 = 49404U;
	int32_t x5172 = -1;
	volatile int32_t t94 = 3511118;

	t94 = ((x5169<(x5170>>x5171))-x5172);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5227 = 0U;
	volatile int32_t t95 = -10399134;

	t95 = ((x5225<(x5226>>x5227))-x5228);

	if (t95 != -26) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5262 = UINT8_MAX;
	uint8_t x5263 = 3U;
	static uint8_t x5264 = 52U;

	t96 = ((x5261<(x5262>>x5263))-x5264);

	if (t96 != -52) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x5475 = 12U;
	int16_t x5476 = INT16_MIN;
	int32_t t97 = -73628187;

	t97 = ((x5473<(x5474>>x5475))-x5476);

	if (t97 != 32769) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5485 = INT8_MAX;
	volatile uint16_t x5486 = 2382U;
	static int8_t x5488 = INT8_MAX;
	static volatile int32_t t98 = -29646420;

	t98 = ((x5485<(x5486>>x5487))-x5488);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5527 = 0U;
	int32_t x5528 = -1;
	volatile int32_t t99 = -663067263;

	t99 = ((x5525<(x5526>>x5527))-x5528);

	if (t99 != 2) { NG(); } else { ; }
	
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

