#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t t1 = 0U;
static int16_t x118 = INT16_MIN;
static int64_t x134 = -1LL;
static int16_t x148 = INT16_MAX;
int32_t t5 = 112939;
static volatile uint16_t x247 = 969U;
int8_t x256 = INT8_MAX;
volatile int32_t t9 = 11309;
int32_t t10 = 2201;
uint64_t t12 = 27LLU;
int32_t t14 = 8250676;
volatile int8_t x407 = INT8_MAX;
static volatile uint64_t x454 = 2LLU;
static uint8_t x465 = UINT8_MAX;
static int32_t x467 = 815587;
static uint64_t x777 = UINT64_MAX;
uint8_t x854 = 1U;
int32_t x888 = -1;
int16_t x915 = -2372;
int64_t x957 = INT64_MAX;
static uint64_t x965 = UINT64_MAX;
int64_t x966 = -1LL;
uint64_t t27 = UINT64_MAX;
int8_t x1046 = 0;
int64_t x1048 = -24383466358LL;
static volatile uint64_t x1111 = UINT64_MAX;
int8_t x1132 = -1;
static int16_t x1135 = INT16_MIN;
static volatile int16_t x1206 = 5;
int16_t x1226 = -4;
uint32_t x1227 = UINT32_MAX;
int64_t x1247 = -36295804LL;
static int16_t x1367 = INT16_MIN;
uint32_t t39 = 2094769U;
int32_t x1488 = INT32_MIN;
int32_t t41 = 112176869;
uint32_t x1494 = 1U;
int32_t x1495 = -1943175;
volatile uint64_t t42 = 27173453LLU;
static int16_t x1584 = 3;
int16_t x1663 = INT16_MIN;
int16_t x1669 = 1;
static int16_t x1671 = INT16_MIN;
int16_t x1674 = -1;
static int32_t t48 = 3;
int32_t t49 = -3637128;
uint8_t x1765 = UINT8_MAX;
uint32_t x1771 = 500315347U;
int64_t x1772 = 86529LL;
uint8_t x1802 = 30U;
uint64_t x1845 = 23LLU;
volatile uint16_t x1847 = 1267U;
uint8_t x1848 = UINT8_MAX;
volatile int8_t x1890 = 18;
int16_t x1891 = INT16_MIN;
int64_t x1892 = -1LL;
static int32_t t55 = 20507033;
int32_t x2024 = -1;
int16_t x2094 = INT16_MAX;
static volatile uint16_t x2095 = 1266U;
uint16_t x2096 = 490U;
static int32_t t64 = 1;
static int8_t x2161 = 0;
int32_t x2164 = -1;
static volatile int32_t t67 = 0;
int16_t x2195 = INT16_MIN;
int16_t x2196 = -1;
static volatile int64_t t68 = 27568275851700LL;
volatile int32_t x2210 = -1;
static volatile int8_t x2211 = -1;
static int64_t x2227 = INT64_MIN;
int8_t x2228 = INT8_MIN;
volatile uint64_t x2266 = UINT64_MAX;
static int32_t x2315 = INT32_MIN;
int32_t t74 = -77;
static uint32_t x2378 = 39U;
volatile int16_t x2400 = -7;
static int32_t t76 = 162684;
int32_t t77 = -33;
static uint16_t x2593 = 6230U;
static int32_t t80 = 0;
static volatile uint64_t x2626 = UINT64_MAX;
uint32_t x2692 = UINT32_MAX;
int64_t x2718 = -1LL;
volatile uint32_t t84 = 482U;
static int8_t x2750 = INT8_MAX;
uint32_t x2793 = UINT32_MAX;
int32_t x2795 = INT32_MAX;
uint64_t x2873 = 22786789674LLU;
int8_t x2874 = 39;
uint16_t x2921 = UINT16_MAX;
int16_t x2931 = INT16_MIN;
int32_t t91 = -417;
int64_t x2983 = INT64_MIN;
uint32_t x3006 = 1775U;
volatile uint32_t x3008 = 900022736U;
int16_t x3021 = 2;
int8_t x3145 = INT8_MAX;
int64_t x3148 = -1LL;
int16_t x3169 = 160;
int32_t x3172 = INT32_MAX;
int32_t x3186 = 385;
int32_t t97 = -1;
volatile int32_t t99 = -147648;


void f0(void) {
	uint8_t x17 = 3U;
	volatile uint32_t x18 = UINT32_MAX;
	uint32_t x19 = UINT32_MAX;
	volatile int32_t x20 = -87517;
	int32_t t0 = 0;

	t0 = (x17>>(x18%(x19/x20)));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x21 = 0U;
	int64_t x22 = -1LL;
	uint64_t x23 = UINT64_MAX;
	static uint64_t x24 = UINT64_MAX;

	t1 = (x21>>(x22%(x23/x24)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x117 = UINT16_MAX;
	int16_t x119 = 4081;
	int64_t x120 = 3413LL;
	int32_t t2 = 3;

	t2 = (x117>>(x118%(x119/x120)));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x129 = 1;
	uint32_t x130 = 8U;
	volatile uint16_t x131 = UINT16_MAX;
	static uint16_t x132 = UINT16_MAX;
	static int32_t t3 = -11652960;

	t3 = (x129>>(x130%(x131/x132)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x133 = UINT32_MAX;
	static uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	static uint32_t t4 = UINT32_MAX;

	t4 = (x133>>(x134%(x135/x136)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x145 = UINT16_MAX;
	int8_t x146 = 1;
	int64_t x147 = INT64_MIN;

	t5 = (x145>>(x146%(x147/x148)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x225 = UINT32_MAX;
	uint8_t x226 = 1U;
	uint64_t x227 = UINT64_MAX;
	uint64_t x228 = UINT64_MAX;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x225>>(x226%(x227/x228)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x245 = 44;
	volatile uint8_t x246 = 0U;
	uint8_t x248 = 3U;
	volatile int32_t t7 = -14847;

	t7 = (x245>>(x246%(x247/x248)));

	if (t7 != 44) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x253 = UINT32_MAX;
	int16_t x254 = 0;
	int16_t x255 = INT16_MIN;
	uint32_t t8 = UINT32_MAX;

	t8 = (x253>>(x254%(x255/x256)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MIN;
	static volatile int16_t x267 = INT16_MIN;
	int8_t x268 = -1;

	t9 = (x265>>(x266%(x267/x268)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x289 = 1U;
	int16_t x290 = 0;
	int16_t x291 = -1;
	volatile uint64_t x292 = 53859271312LLU;

	t10 = (x289>>(x290%(x291/x292)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x325 = INT8_MAX;
	static uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MIN;
	int16_t x328 = 6114;
	static int32_t t11 = 400214539;

	t11 = (x325>>(x326%(x327/x328)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint32_t x342 = UINT32_MAX;
	int8_t x343 = -22;
	int64_t x344 = -1LL;

	t12 = (x341>>(x342%(x343/x344)));

	if (t12 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x389 = 111038944351149LLU;
	volatile int64_t x390 = -1LL;
	volatile int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MAX;
	static uint64_t t13 = 2242LLU;

	t13 = (x389>>(x390%(x391/x392)));

	if (t13 != 111038944351149LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x393 = 46U;
	uint8_t x394 = 3U;
	volatile int64_t x395 = 464712749LL;
	int8_t x396 = INT8_MIN;

	t14 = (x393>>(x394%(x395/x396)));

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x401 = 0;
	uint16_t x402 = 336U;
	volatile int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t15 = 13334038;

	t15 = (x401>>(x402%(x403/x404)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x405 = 0;
	int8_t x406 = 0;
	static int8_t x408 = -1;
	int32_t t16 = -2148944;

	t16 = (x405>>(x406%(x407/x408)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x453 = INT16_MAX;
	volatile uint32_t x455 = 125U;
	uint32_t x456 = 76U;
	volatile int32_t t17 = 11;

	t17 = (x453>>(x454%(x455/x456)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x466 = 509088110979094LLU;
	volatile uint16_t x468 = 17595U;
	static int32_t t18 = -2;

	t18 = (x465>>(x466%(x467/x468)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x469 = 61702LLU;
	uint8_t x470 = UINT8_MAX;
	int32_t x471 = -1;
	int32_t x472 = -1;
	static volatile uint64_t t19 = 402767189366693613LLU;

	t19 = (x469>>(x470%(x471/x472)));

	if (t19 != 61702LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x585 = 83445LL;
	volatile uint8_t x586 = 15U;
	static int64_t x587 = INT64_MIN;
	int16_t x588 = 35;
	static int64_t t20 = 280155444327LL;

	t20 = (x585>>(x586%(x587/x588)));

	if (t20 != 2LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x593 = UINT8_MAX;
	uint32_t x594 = 15U;
	int64_t x595 = 2034198LL;
	int16_t x596 = -1;
	volatile int32_t t21 = -6;

	t21 = (x593>>(x594%(x595/x596)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x778 = UINT32_MAX;
	int32_t x779 = INT32_MIN;
	static uint64_t x780 = 71261429417530733LLU;
	uint64_t t22 = 12699274961600968LLU;

	t22 = (x777>>(x778%(x779/x780)));

	if (t22 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x853 = INT16_MAX;
	volatile int16_t x855 = INT16_MAX;
	static int8_t x856 = -1;
	int32_t t23 = -96299;

	t23 = (x853>>(x854%(x855/x856)));

	if (t23 != 16383) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x885 = 1U;
	static int64_t x886 = INT64_MAX;
	int64_t x887 = -1LL;
	int32_t t24 = -11895;

	t24 = (x885>>(x886%(x887/x888)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x913 = 26LLU;
	uint8_t x914 = 15U;
	static int8_t x916 = INT8_MAX;
	volatile uint64_t t25 = 7494513582387LLU;

	t25 = (x913>>(x914%(x915/x916)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x958 = UINT64_MAX;
	static uint8_t x959 = 15U;
	int64_t x960 = -1LL;
	volatile int64_t t26 = -1LL;

	t26 = (x957>>(x958%(x959/x960)));

	if (t26 != 562949953421311LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x967 = INT32_MIN;
	static int32_t x968 = INT32_MIN;

	t27 = (x965>>(x966%(x967/x968)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1045 = 51U;
	int64_t x1047 = 440917282322LL;
	volatile int32_t t28 = -60923;

	t28 = (x1045>>(x1046%(x1047/x1048)));

	if (t28 != 51) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1109 = 105;
	static volatile int8_t x1110 = -1;
	static int8_t x1112 = -1;
	volatile int32_t t29 = 121586;

	t29 = (x1109>>(x1110%(x1111/x1112)));

	if (t29 != 105) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1129 = 1391845LLU;
	int8_t x1130 = INT8_MIN;
	int8_t x1131 = 1;
	volatile uint64_t t30 = 438964392438LLU;

	t30 = (x1129>>(x1130%(x1131/x1132)));

	if (t30 != 1391845LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1133 = INT64_MAX;
	static volatile int8_t x1134 = 32;
	static volatile int16_t x1136 = INT16_MAX;
	static volatile int64_t t31 = INT64_MAX;

	t31 = (x1133>>(x1134%(x1135/x1136)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1205 = 1LLU;
	static volatile int64_t x1207 = 2748LL;
	uint8_t x1208 = 16U;
	uint64_t t32 = 202735074859698LLU;

	t32 = (x1205>>(x1206%(x1207/x1208)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1225 = 4132883265160717090LLU;
	int8_t x1228 = INT8_MIN;
	uint64_t t33 = 2110839068240268144LLU;

	t33 = (x1225>>(x1226%(x1227/x1228)));

	if (t33 != 4132883265160717090LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1229 = INT16_MAX;
	volatile int64_t x1230 = INT64_MIN;
	int32_t x1231 = -1;
	int32_t x1232 = -1;
	static int32_t t34 = 519323512;

	t34 = (x1229>>(x1230%(x1231/x1232)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1233 = 486498830LL;
	uint16_t x1234 = UINT16_MAX;
	int64_t x1235 = 15LL;
	static int64_t x1236 = -1LL;
	int64_t t35 = 2536588108737LL;

	t35 = (x1233>>(x1234%(x1235/x1236)));

	if (t35 != 486498830LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1245 = INT16_MAX;
	volatile int32_t x1246 = INT32_MAX;
	volatile int32_t x1248 = -344571;
	static int32_t t36 = -1;

	t36 = (x1245>>(x1246%(x1247/x1248)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1265 = UINT16_MAX;
	uint16_t x1266 = UINT16_MAX;
	int32_t x1267 = INT32_MIN;
	volatile int32_t x1268 = INT32_MIN;
	static int32_t t37 = 1;

	t37 = (x1265>>(x1266%(x1267/x1268)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1365 = 1251U;
	int16_t x1366 = INT16_MIN;
	int16_t x1368 = 2;
	uint32_t t38 = 91961427U;

	t38 = (x1365>>(x1366%(x1367/x1368)));

	if (t38 != 1251U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1465 = UINT32_MAX;
	volatile uint8_t x1466 = 9U;
	int64_t x1467 = INT64_MIN;
	int32_t x1468 = INT32_MIN;

	t39 = (x1465>>(x1466%(x1467/x1468)));

	if (t39 != 8388607U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1469 = 5U;
	static int8_t x1470 = INT8_MIN;
	int64_t x1471 = INT64_MAX;
	static int64_t x1472 = INT64_MAX;
	int32_t t40 = -99879;

	t40 = (x1469>>(x1470%(x1471/x1472)));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x1485 = 25598U;
	uint32_t x1486 = 5U;
	static volatile uint64_t x1487 = UINT64_MAX;

	t41 = (x1485>>(x1486%(x1487/x1488)));

	if (t41 != 25598) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1493 = 26644LLU;
	uint64_t x1496 = 5616390LLU;

	t42 = (x1493>>(x1494%(x1495/x1496)));

	if (t42 != 13322LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1509 = 2;
	volatile int8_t x1510 = 1;
	uint8_t x1511 = 20U;
	int32_t x1512 = -1;
	int32_t t43 = -11645266;

	t43 = (x1509>>(x1510%(x1511/x1512)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1581 = 0;
	static uint64_t x1582 = UINT64_MAX;
	static uint16_t x1583 = 36U;
	static int32_t t44 = 7;

	t44 = (x1581>>(x1582%(x1583/x1584)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1661 = INT64_MAX;
	int16_t x1662 = INT16_MAX;
	static int8_t x1664 = -3;
	int64_t t45 = -7089LL;

	t45 = (x1661>>(x1662%(x1663/x1664)));

	if (t45 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1670 = -1LL;
	volatile uint64_t x1672 = 1286083030332819139LLU;
	int32_t t46 = -437994;

	t46 = (x1669>>(x1670%(x1671/x1672)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1673 = 74U;
	static uint8_t x1675 = 1U;
	int8_t x1676 = -1;
	uint32_t t47 = 2079019U;

	t47 = (x1673>>(x1674%(x1675/x1676)));

	if (t47 != 74U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1729 = 21U;
	int8_t x1730 = INT8_MAX;
	int8_t x1731 = INT8_MIN;
	volatile uint8_t x1732 = 11U;

	t48 = (x1729>>(x1730%(x1731/x1732)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x1733 = INT16_MAX;
	int8_t x1734 = 1;
	int8_t x1735 = INT8_MAX;
	int16_t x1736 = 59;

	t49 = (x1733>>(x1734%(x1735/x1736)));

	if (t49 != 16383) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1766 = INT32_MIN;
	int8_t x1767 = INT8_MIN;
	static uint8_t x1768 = 30U;
	volatile int32_t t50 = -33633;

	t50 = (x1765>>(x1766%(x1767/x1768)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x1769 = 161LLU;
	uint8_t x1770 = 37U;
	volatile uint64_t t51 = 100679875395LLU;

	t51 = (x1769>>(x1770%(x1771/x1772)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1801 = 95U;
	volatile int16_t x1803 = INT16_MIN;
	int64_t x1804 = 7398LL;
	int32_t t52 = -4123;

	t52 = (x1801>>(x1802%(x1803/x1804)));

	if (t52 != 23) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1846 = 3;
	static uint64_t t53 = 31387419793031LLU;

	t53 = (x1845>>(x1846%(x1847/x1848)));

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1877 = 13U;
	int8_t x1878 = -1;
	volatile uint32_t x1879 = UINT32_MAX;
	volatile uint16_t x1880 = UINT16_MAX;
	int32_t t54 = -21813824;

	t54 = (x1877>>(x1878%(x1879/x1880)));

	if (t54 != 13) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1889 = UINT8_MAX;

	t55 = (x1889>>(x1890%(x1891/x1892)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x2001 = 17003U;
	uint64_t x2002 = 9LLU;
	volatile int64_t x2003 = 31137644835222163LL;
	int8_t x2004 = -3;
	volatile uint32_t t56 = 3U;

	t56 = (x2001>>(x2002%(x2003/x2004)));

	if (t56 != 33U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x2009 = 3;
	static volatile int8_t x2010 = INT8_MAX;
	int16_t x2011 = INT16_MAX;
	uint32_t x2012 = 25228U;
	static int32_t t57 = 3128;

	t57 = (x2009>>(x2010%(x2011/x2012)));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2021 = 0U;
	int8_t x2022 = INT8_MIN;
	int8_t x2023 = INT8_MIN;
	uint32_t t58 = 16941136U;

	t58 = (x2021>>(x2022%(x2023/x2024)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2041 = UINT32_MAX;
	int32_t x2042 = INT32_MIN;
	volatile uint64_t x2043 = UINT64_MAX;
	static int32_t x2044 = INT32_MIN;
	static uint32_t t59 = UINT32_MAX;

	t59 = (x2041>>(x2042%(x2043/x2044)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2045 = 11981LLU;
	int8_t x2046 = INT8_MIN;
	volatile int16_t x2047 = -1;
	int8_t x2048 = -1;
	static volatile uint64_t t60 = 8042734LLU;

	t60 = (x2045>>(x2046%(x2047/x2048)));

	if (t60 != 11981LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2077 = UINT32_MAX;
	uint16_t x2078 = UINT16_MAX;
	int8_t x2079 = INT8_MIN;
	volatile uint16_t x2080 = 5U;
	uint32_t t61 = 8499092U;

	t61 = (x2077>>(x2078%(x2079/x2080)));

	if (t61 != 4194303U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2093 = UINT16_MAX;
	int32_t t62 = -4046534;

	t62 = (x2093>>(x2094%(x2095/x2096)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2117 = 121;
	volatile uint8_t x2118 = 23U;
	static int16_t x2119 = INT16_MIN;
	uint8_t x2120 = UINT8_MAX;
	static int32_t t63 = -2102838;

	t63 = (x2117>>(x2118%(x2119/x2120)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2121 = INT16_MAX;
	volatile int32_t x2122 = INT32_MAX;
	volatile int8_t x2123 = INT8_MIN;
	int8_t x2124 = INT8_MAX;

	t64 = (x2121>>(x2122%(x2123/x2124)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2129 = INT8_MAX;
	int64_t x2130 = INT64_MIN;
	int64_t x2131 = INT64_MIN;
	int64_t x2132 = INT64_MIN;
	volatile int32_t t65 = 13173;

	t65 = (x2129>>(x2130%(x2131/x2132)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x2137 = 11898;
	volatile uint8_t x2138 = 0U;
	uint32_t x2139 = UINT32_MAX;
	int16_t x2140 = 322;
	int32_t t66 = -66;

	t66 = (x2137>>(x2138%(x2139/x2140)));

	if (t66 != 11898) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x2162 = 16171U;
	uint8_t x2163 = 5U;

	t67 = (x2161>>(x2162%(x2163/x2164)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2193 = 14649931583877811LL;
	volatile uint8_t x2194 = 0U;

	t68 = (x2193>>(x2194%(x2195/x2196)));

	if (t68 != 14649931583877811LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2209 = 52U;
	int64_t x2212 = -1LL;
	int32_t t69 = -944872;

	t69 = (x2209>>(x2210%(x2211/x2212)));

	if (t69 != 52) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2213 = 40872;
	int64_t x2214 = -31134673421373462LL;
	int64_t x2215 = -1LL;
	static int8_t x2216 = -1;
	volatile int32_t t70 = -2638934;

	t70 = (x2213>>(x2214%(x2215/x2216)));

	if (t70 != 40872) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2225 = 1U;
	int64_t x2226 = INT64_MIN;
	uint32_t t71 = 1004385U;

	t71 = (x2225>>(x2226%(x2227/x2228)));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2265 = 0;
	int8_t x2267 = INT8_MIN;
	uint64_t x2268 = 897449357628335665LLU;
	static volatile int32_t t72 = -39462366;

	t72 = (x2265>>(x2266%(x2267/x2268)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2309 = 3432359783468646LLU;
	volatile uint16_t x2310 = 1U;
	static uint32_t x2311 = UINT32_MAX;
	int64_t x2312 = -1LL;
	static uint64_t t73 = 15429448246LLU;

	t73 = (x2309>>(x2310%(x2311/x2312)));

	if (t73 != 1716179891734323LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x2313 = 29;
	static int32_t x2314 = INT32_MIN;
	static int32_t x2316 = INT32_MIN;

	t74 = (x2313>>(x2314%(x2315/x2316)));

	if (t74 != 29) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2377 = 1;
	volatile int8_t x2379 = -1;
	int32_t x2380 = -1;
	volatile int32_t t75 = 13;

	t75 = (x2377>>(x2378%(x2379/x2380)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2397 = 440U;
	static volatile int16_t x2398 = 25;
	uint16_t x2399 = 26814U;

	t76 = (x2397>>(x2398%(x2399/x2400)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2401 = 1;
	static int8_t x2402 = 1;
	int16_t x2403 = INT16_MIN;
	int8_t x2404 = -33;

	t77 = (x2401>>(x2402%(x2403/x2404)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2581 = UINT16_MAX;
	static uint8_t x2582 = 9U;
	volatile int8_t x2583 = INT8_MAX;
	int16_t x2584 = -1;
	int32_t t78 = 132831;

	t78 = (x2581>>(x2582%(x2583/x2584)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x2594 = 0;
	int32_t x2595 = INT32_MIN;
	volatile int32_t x2596 = INT32_MAX;
	static volatile int32_t t79 = 18089;

	t79 = (x2593>>(x2594%(x2595/x2596)));

	if (t79 != 6230) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2609 = INT8_MAX;
	uint8_t x2610 = 2U;
	int64_t x2611 = INT64_MIN;
	int32_t x2612 = INT32_MIN;

	t80 = (x2609>>(x2610%(x2611/x2612)));

	if (t80 != 31) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x2625 = 41U;
	volatile uint64_t x2627 = UINT64_MAX;
	int8_t x2628 = 24;
	static volatile int32_t t81 = -22;

	t81 = (x2625>>(x2626%(x2627/x2628)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2689 = UINT8_MAX;
	int64_t x2690 = INT64_MAX;
	int16_t x2691 = -1;
	int32_t t82 = -1566056;

	t82 = (x2689>>(x2690%(x2691/x2692)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x2717 = 633006897286695680LLU;
	int32_t x2719 = -1;
	static uint64_t x2720 = UINT64_MAX;
	uint64_t t83 = 195002LLU;

	t83 = (x2717>>(x2718%(x2719/x2720)));

	if (t83 != 633006897286695680LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2721 = UINT32_MAX;
	static int64_t x2722 = INT64_MAX;
	int32_t x2723 = -1383031;
	int16_t x2724 = 2592;

	t84 = (x2721>>(x2722%(x2723/x2724)));

	if (t84 != 33554431U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2733 = INT32_MAX;
	uint8_t x2734 = 0U;
	int32_t x2735 = -933731;
	int16_t x2736 = INT16_MAX;
	int32_t t85 = INT32_MAX;

	t85 = (x2733>>(x2734%(x2735/x2736)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2749 = 1;
	static uint64_t x2751 = 254770949LLU;
	int32_t x2752 = 58181305;
	static volatile int32_t t86 = 260633765;

	t86 = (x2749>>(x2750%(x2751/x2752)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x2794 = INT64_MAX;
	static volatile int64_t x2796 = -1LL;
	uint32_t t87 = 44304143U;

	t87 = (x2793>>(x2794%(x2795/x2796)));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2875 = INT64_MAX;
	static uint16_t x2876 = UINT16_MAX;
	static uint64_t t88 = 1921694533818LLU;

	t88 = (x2873>>(x2874%(x2875/x2876)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2905 = INT64_MAX;
	uint8_t x2906 = 30U;
	volatile int64_t x2907 = INT64_MAX;
	int32_t x2908 = -1;
	static int64_t t89 = 352460136217009969LL;

	t89 = (x2905>>(x2906%(x2907/x2908)));

	if (t89 != 8589934591LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2922 = INT8_MIN;
	volatile int16_t x2923 = INT16_MIN;
	int16_t x2924 = INT16_MIN;
	static int32_t t90 = 10845881;

	t90 = (x2921>>(x2922%(x2923/x2924)));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x2929 = 14752U;
	int16_t x2930 = INT16_MIN;
	int8_t x2932 = INT8_MIN;

	t91 = (x2929>>(x2930%(x2931/x2932)));

	if (t91 != 14752) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2981 = UINT64_MAX;
	static int8_t x2982 = 2;
	volatile int16_t x2984 = INT16_MAX;
	uint64_t t92 = 789LLU;

	t92 = (x2981>>(x2982%(x2983/x2984)));

	if (t92 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3005 = INT16_MAX;
	int16_t x3007 = INT16_MIN;
	volatile int32_t t93 = -4972513;

	t93 = (x3005>>(x3006%(x3007/x3008)));

	if (t93 != 4095) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3022 = INT16_MIN;
	uint16_t x3023 = 113U;
	volatile uint8_t x3024 = 26U;
	int32_t t94 = -1817;

	t94 = (x3021>>(x3022%(x3023/x3024)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x3146 = INT64_MAX;
	int64_t x3147 = -1LL;
	int32_t t95 = -237232398;

	t95 = (x3145>>(x3146%(x3147/x3148)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x3170 = 0;
	int64_t x3171 = INT64_MIN;
	static int32_t t96 = 8326;

	t96 = (x3169>>(x3170%(x3171/x3172)));

	if (t96 != 160) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3185 = 1;
	static int32_t x3187 = INT32_MAX;
	int32_t x3188 = -506780192;

	t97 = (x3185>>(x3186%(x3187/x3188)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3233 = 4389625LLU;
	int16_t x3234 = 17;
	int64_t x3235 = INT64_MIN;
	uint8_t x3236 = UINT8_MAX;
	uint64_t t98 = 10LLU;

	t98 = (x3233>>(x3234%(x3235/x3236)));

	if (t98 != 33LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3257 = 15;
	uint64_t x3258 = UINT64_MAX;
	uint64_t x3259 = UINT64_MAX;
	static volatile int8_t x3260 = INT8_MIN;

	t99 = (x3257>>(x3258%(x3259/x3260)));

	if (t99 != 15) { NG(); } else { ; }
	
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

