#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x20 = 3U;
volatile int32_t x81 = INT32_MAX;
volatile uint16_t x389 = UINT16_MAX;
int32_t x540 = 40;
uint64_t t9 = 110738369LLU;
static volatile uint16_t x601 = UINT16_MAX;
uint64_t x602 = UINT64_MAX;
uint64_t t10 = 16558937327LLU;
uint8_t x611 = UINT8_MAX;
uint64_t t11 = 3548294162LLU;
volatile int8_t x665 = -10;
volatile uint64_t x666 = UINT64_MAX;
static uint32_t x733 = 94U;
volatile uint8_t x736 = 14U;
uint8_t x737 = 23U;
int8_t x772 = 0;
int64_t t17 = -4333670819048LL;
uint64_t x882 = UINT64_MAX;
volatile uint64_t t21 = 7369417797LLU;
uint64_t x993 = 53219521558LLU;
uint8_t x996 = 9U;
uint8_t x1008 = 11U;
uint64_t x1051 = 236977LLU;
volatile uint64_t t27 = 1812341LLU;
int64_t x1053 = INT64_MAX;
static int8_t x1056 = 0;
volatile uint64_t x1215 = 1LLU;
volatile uint64_t t29 = 1052308500766744LLU;
uint8_t x1273 = UINT8_MAX;
volatile uint64_t t32 = 4674203388867419LLU;
static volatile int32_t x1341 = -29032;
uint32_t t33 = 37128U;
uint16_t x1369 = UINT16_MAX;
static volatile int32_t x1372 = 0;
int64_t t34 = 14198LL;
uint32_t x1373 = 1U;
static uint32_t x1375 = 25260682U;
int16_t x1378 = -1;
uint16_t x1470 = 29U;
int8_t x1521 = INT8_MAX;
uint32_t x1553 = UINT32_MAX;
int8_t x1554 = -46;
volatile int32_t x1556 = 1;
int8_t x1584 = 0;
uint64_t t41 = 1319885278765360LLU;
int16_t x1724 = 1;
int8_t x1882 = -1;
int16_t x1883 = 339;
static volatile uint32_t t49 = 962748699U;
uint64_t x2025 = 1795LLU;
uint8_t x2027 = 10U;
int64_t t53 = -547240LL;
static uint16_t x2208 = 1U;
int16_t x2214 = INT16_MAX;
int16_t x2314 = INT16_MIN;
volatile uint16_t x2484 = 2U;
int64_t x2538 = -1LL;
int16_t x2639 = INT16_MIN;
uint64_t x2640 = 17LLU;
static uint64_t x2650 = 3687665LLU;
uint16_t x2711 = 1005U;
int64_t x2883 = -1LL;
uint8_t x2884 = 4U;
static volatile uint16_t x2916 = 3U;
int32_t t67 = -1704;
int32_t x2917 = INT32_MIN;
volatile int64_t t69 = -24LL;
uint64_t x2943 = UINT64_MAX;
int8_t x2944 = 1;
static uint64_t x2977 = 4730LLU;
uint16_t x2978 = 7U;
uint16_t x2993 = 18986U;
volatile uint64_t x2995 = 6752LLU;
static uint8_t x2996 = 1U;
static uint64_t t72 = 43LLU;
uint64_t x3087 = UINT64_MAX;
int16_t x3113 = 680;
volatile int64_t t74 = -1074653227642831LL;
static uint32_t t75 = 414071U;
volatile int16_t x3207 = INT16_MAX;
static volatile uint64_t t79 = 455993386692LLU;
uint16_t x3421 = UINT16_MAX;
uint16_t x3424 = 6U;
int64_t t80 = 2LL;
uint16_t x3472 = 1U;
uint16_t x3577 = 1U;
int32_t x3583 = 0;
volatile int32_t t86 = -6;
static int8_t x3611 = -2;
uint64_t x3612 = 3LLU;
volatile uint32_t x3625 = UINT32_MAX;
int64_t x3713 = INT64_MIN;
static uint8_t x3716 = 5U;
volatile int64_t t90 = -211045056122267809LL;
static uint8_t x3772 = 6U;
int64_t t96 = 36181832LL;
volatile int32_t x4053 = 116075275;


void f0(void) {
	int8_t x17 = 1;
	uint8_t x18 = 94U;
	int64_t x19 = INT64_MAX;
	static int64_t t0 = 1794998537917LL;

	t0 = ((x17%(x18^x19))<<x20);

	if (t0 != 8LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x49 = INT32_MIN;
	uint8_t x50 = UINT8_MAX;
	int8_t x51 = INT8_MAX;
	uint8_t x52 = 1U;
	volatile int32_t t1 = -25609;

	t1 = ((x49%(x50^x51))<<x52);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MIN;
	static uint8_t x84 = 23U;
	uint64_t t2 = 53146122836330384LLU;

	t2 = ((x81%(x82^x83))<<x84);

	if (t2 != 8388608LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x145 = 20U;
	uint64_t x146 = 68628147728LLU;
	uint16_t x147 = UINT16_MAX;
	uint16_t x148 = 9U;
	volatile uint64_t t3 = 46783552664728316LLU;

	t3 = ((x145%(x146^x147))<<x148);

	if (t3 != 10240LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x281 = UINT64_MAX;
	volatile uint8_t x282 = 1U;
	int32_t x283 = INT32_MIN;
	static int16_t x284 = 32;
	uint64_t t4 = 13395401826433LLU;

	t4 = ((x281%(x282^x283))<<x284);

	if (t4 != 9223372028264841216LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x390 = -1;
	int32_t x391 = -2805;
	uint16_t x392 = 6U;
	static int32_t t5 = 5405074;

	t5 = ((x389%(x390^x391))<<x392);

	if (t5 != 66752) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x413 = 34296780;
	int8_t x414 = INT8_MIN;
	static uint64_t x415 = UINT64_MAX;
	uint32_t x416 = 3U;
	static uint64_t t6 = 168LLU;

	t6 = ((x413%(x414^x415))<<x416);

	if (t6 != 392LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x421 = INT16_MIN;
	uint64_t x422 = UINT64_MAX;
	static int8_t x423 = INT8_MAX;
	volatile int32_t x424 = 0;
	uint64_t t7 = 130910846896935LLU;

	t7 = ((x421%(x422^x423))<<x424);

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x449 = INT8_MAX;
	int32_t x450 = 9938975;
	int64_t x451 = INT64_MAX;
	static uint32_t x452 = 26U;
	static int64_t t8 = 364LL;

	t8 = ((x449%(x450^x451))<<x452);

	if (t8 != 8522825728LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x537 = INT64_MIN;
	static volatile uint32_t x538 = 9U;
	uint64_t x539 = 4846270453921827LLU;

	t9 = ((x537%(x538^x539))<<x540);

	if (t9 != 9403456648321695744LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x603 = INT8_MIN;
	uint8_t x604 = 7U;

	t10 = ((x601%(x602^x603))<<x604);

	if (t10 != 384LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x609 = 3476LLU;
	volatile int16_t x610 = 4;
	int8_t x612 = 3;

	t11 = ((x609%(x610^x611))<<x612);

	if (t11 != 1704LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x667 = UINT8_MAX;
	uint8_t x668 = 1U;
	volatile uint64_t t12 = 115623486786LLU;

	t12 = ((x665%(x666^x667))<<x668);

	if (t12 != 492LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x734 = -1LL;
	int64_t x735 = -135568424429932LL;
	static volatile int64_t t13 = -1671594210203670581LL;

	t13 = ((x733%(x734^x735))<<x736);

	if (t13 != 1540096LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x738 = 13026U;
	uint32_t x739 = 97353652U;
	volatile int32_t x740 = 0;
	volatile uint32_t t14 = 754238U;

	t14 = ((x737%(x738^x739))<<x740);

	if (t14 != 23U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x749 = INT16_MIN;
	uint8_t x750 = 0U;
	static int8_t x751 = INT8_MIN;
	uint16_t x752 = 0U;
	volatile int32_t t15 = 391505;

	t15 = ((x749%(x750^x751))<<x752);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x769 = -7;
	uint32_t x770 = 13304451U;
	int8_t x771 = INT8_MIN;
	uint32_t t16 = 2U;

	t16 = ((x769%(x770^x771))<<x772);

	if (t16 != 13304566U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x825 = 13U;
	volatile int16_t x826 = -1;
	int64_t x827 = INT64_MAX;
	volatile int16_t x828 = 0;

	t17 = ((x825%(x826^x827))<<x828);

	if (t17 != 13LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x861 = 111U;
	int8_t x862 = INT8_MIN;
	int64_t x863 = -1LL;
	uint8_t x864 = 6U;
	volatile int64_t t18 = -548344074991740LL;

	t18 = ((x861%(x862^x863))<<x864);

	if (t18 != 7104LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x869 = -1706363542LL;
	uint64_t x870 = 6813836LLU;
	static int32_t x871 = -1;
	static uint8_t x872 = 40U;
	volatile uint64_t t19 = 3288473LLU;

	t19 = ((x869%(x870^x871))<<x872);

	if (t19 != 5401339876333322240LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x881 = INT64_MIN;
	volatile int8_t x883 = INT8_MIN;
	static uint8_t x884 = 3U;
	volatile uint64_t t20 = 594092LLU;

	t20 = ((x881%(x882^x883))<<x884);

	if (t20 != 8LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x901 = 637563234;
	volatile uint64_t x902 = UINT64_MAX;
	volatile uint8_t x903 = 25U;
	uint8_t x904 = 5U;

	t21 = ((x901%(x902^x903))<<x904);

	if (t21 != 20402023488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x953 = 0LLU;
	int32_t x954 = INT32_MAX;
	static int32_t x955 = 3368;
	volatile int16_t x956 = 1;
	volatile uint64_t t22 = 10827048019574LLU;

	t22 = ((x953%(x954^x955))<<x956);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x961 = INT32_MAX;
	static int64_t x962 = INT64_MIN;
	uint64_t x963 = 120412817LLU;
	volatile int8_t x964 = 23;
	static uint64_t t23 = 862314LLU;

	t23 = ((x961%(x962^x963))<<x964);

	if (t23 != 18014398501093376LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x994 = INT32_MIN;
	uint8_t x995 = 23U;
	volatile uint64_t t24 = 497494029653LLU;

	t24 = ((x993%(x994^x995))<<x996);

	if (t24 != 27248395037696LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x1005 = 42608894;
	uint32_t x1006 = UINT32_MAX;
	static uint8_t x1007 = 25U;
	uint32_t t25 = 15097812U;

	t25 = ((x1005%(x1006^x1007))<<x1008);

	if (t25 != 1363668992U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1013 = 4301289346766276LLU;
	int32_t x1014 = INT32_MIN;
	volatile int8_t x1015 = INT8_MIN;
	volatile uint64_t x1016 = 1LLU;
	uint64_t t26 = 30LLU;

	t26 = ((x1013%(x1014^x1015))<<x1016);

	if (t26 != 230566792LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1049 = INT32_MAX;
	volatile int8_t x1050 = -1;
	static volatile int8_t x1052 = 16;

	t27 = ((x1049%(x1050^x1051))<<x1052);

	if (t27 != 140737488289792LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1054 = -1;
	int16_t x1055 = 1;
	volatile int64_t t28 = -1LL;

	t28 = ((x1053%(x1054^x1055))<<x1056);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1213 = UINT32_MAX;
	volatile int8_t x1214 = INT8_MIN;
	uint16_t x1216 = 63U;

	t29 = ((x1213%(x1214^x1215))<<x1216);

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1237 = 5U;
	int64_t x1238 = -1613306354LL;
	uint16_t x1239 = UINT16_MAX;
	uint8_t x1240 = 5U;
	volatile int64_t t30 = 146LL;

	t30 = ((x1237%(x1238^x1239))<<x1240);

	if (t30 != 160LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1274 = INT16_MAX;
	int64_t x1275 = INT64_MIN;
	volatile int32_t x1276 = 7;
	volatile int64_t t31 = -105759605064552812LL;

	t31 = ((x1273%(x1274^x1275))<<x1276);

	if (t31 != 32640LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1309 = INT16_MIN;
	uint64_t x1310 = 1217LLU;
	volatile int32_t x1311 = INT32_MAX;
	volatile int16_t x1312 = 13;

	t32 = ((x1309%(x1310^x1311))<<x1312);

	if (t32 != 48343678976LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1342 = 7U;
	static uint32_t x1343 = 57150U;
	volatile int16_t x1344 = 1;

	t33 = ((x1341%(x1342^x1343))<<x1344);

	if (t33 != 68708U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1370 = 16;
	int64_t x1371 = -1LL;

	t34 = ((x1369%(x1370^x1371))<<x1372);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1374 = -1;
	volatile uint16_t x1376 = 30U;
	volatile uint32_t t35 = 510U;

	t35 = ((x1373%(x1374^x1375))<<x1376);

	if (t35 != 1073741824U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1377 = INT64_MIN;
	volatile int32_t x1379 = INT32_MAX;
	volatile uint8_t x1380 = 4U;
	int64_t t36 = 2820380613646855037LL;

	t36 = ((x1377%(x1378^x1379))<<x1380);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1469 = INT32_MAX;
	uint16_t x1471 = 172U;
	volatile uint32_t x1472 = 15U;
	int32_t t37 = -1389;

	t37 = ((x1469%(x1470^x1471))<<x1472);

	if (t37 != 5636096) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1522 = -45;
	uint8_t x1523 = UINT8_MAX;
	uint8_t x1524 = 0U;
	int32_t t38 = -3668239;

	t38 = ((x1521%(x1522^x1523))<<x1524);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1555 = -1;
	static volatile uint32_t t39 = 83814U;

	t39 = ((x1553%(x1554^x1555))<<x1556);

	if (t39 != 60U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1569 = INT16_MAX;
	uint64_t x1570 = 8195LLU;
	int64_t x1571 = INT64_MIN;
	static uint8_t x1572 = 36U;
	volatile uint64_t t40 = 6588510268970LLU;

	t40 = ((x1569%(x1570^x1571))<<x1572);

	if (t40 != 2251731094208512LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1581 = INT32_MIN;
	uint8_t x1582 = UINT8_MAX;
	static uint64_t x1583 = UINT64_MAX;

	t41 = ((x1581%(x1582^x1583))<<x1584);

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x1605 = 0U;
	int64_t x1606 = INT64_MAX;
	static uint16_t x1607 = UINT16_MAX;
	volatile uint32_t x1608 = 2U;
	volatile int64_t t42 = -9454261956266569LL;

	t42 = ((x1605%(x1606^x1607))<<x1608);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1637 = 206411950;
	int64_t x1638 = INT64_MIN;
	volatile int16_t x1639 = -1;
	static uint16_t x1640 = 18U;
	volatile int64_t t43 = -1347115737543LL;

	t43 = ((x1637%(x1638^x1639))<<x1640);

	if (t43 != 54109654220800LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1665 = 125986LLU;
	static int64_t x1666 = INT64_MAX;
	int8_t x1667 = -1;
	uint8_t x1668 = 0U;
	uint64_t t44 = 86397LLU;

	t44 = ((x1665%(x1666^x1667))<<x1668);

	if (t44 != 125986LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1721 = 30;
	int8_t x1722 = 0;
	int32_t x1723 = INT32_MIN;
	static volatile int32_t t45 = -1820097;

	t45 = ((x1721%(x1722^x1723))<<x1724);

	if (t45 != 60) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x1789 = UINT32_MAX;
	uint8_t x1790 = UINT8_MAX;
	volatile int8_t x1791 = -1;
	uint8_t x1792 = 31U;
	uint32_t t46 = 7166U;

	t46 = ((x1789%(x1790^x1791))<<x1792);

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1853 = 1;
	int64_t x1854 = -1LL;
	int32_t x1855 = INT32_MIN;
	int8_t x1856 = 11;
	static volatile int64_t t47 = -470411LL;

	t47 = ((x1853%(x1854^x1855))<<x1856);

	if (t47 != 2048LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1881 = 36;
	uint32_t x1884 = 10U;
	int32_t t48 = -1030499109;

	t48 = ((x1881%(x1882^x1883))<<x1884);

	if (t48 != 36864) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1889 = 417U;
	static uint16_t x1890 = UINT16_MAX;
	uint32_t x1891 = UINT32_MAX;
	uint32_t x1892 = 5U;

	t49 = ((x1889%(x1890^x1891))<<x1892);

	if (t49 != 13344U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2026 = -1;
	uint32_t x2028 = 41U;
	uint64_t t50 = 21783820050LLU;

	t50 = ((x2025%(x2026^x2027))<<x2028);

	if (t50 != 3947246743715840LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2053 = 35104LL;
	int16_t x2054 = -10;
	static uint32_t x2055 = UINT32_MAX;
	static uint16_t x2056 = 0U;
	volatile int64_t t51 = 1LL;

	t51 = ((x2053%(x2054^x2055))<<x2056);

	if (t51 != 4LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2101 = 872U;
	static uint32_t x2102 = UINT32_MAX;
	int32_t x2103 = 97;
	uint8_t x2104 = 2U;
	uint32_t t52 = 1U;

	t52 = ((x2101%(x2102^x2103))<<x2104);

	if (t52 != 3488U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2117 = UINT8_MAX;
	uint32_t x2118 = 1722653913U;
	int64_t x2119 = INT64_MIN;
	static uint8_t x2120 = 31U;

	t53 = ((x2117%(x2118^x2119))<<x2120);

	if (t53 != 547608330240LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x2205 = INT64_MAX;
	uint16_t x2206 = UINT16_MAX;
	uint32_t x2207 = 353628285U;
	volatile int64_t t54 = -2817629212136LL;

	t54 = ((x2205%(x2206^x2207))<<x2208);

	if (t54 != 145917654LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2213 = -1;
	volatile uint64_t x2215 = 2LLU;
	uint8_t x2216 = 2U;
	volatile uint64_t t55 = 17078398762LLU;

	t55 = ((x2213%(x2214^x2215))<<x2216);

	if (t55 != 5180LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2313 = 365;
	volatile int64_t x2315 = 137491442208869224LL;
	static int8_t x2316 = 30;
	static volatile int64_t t56 = 207818711LL;

	t56 = ((x2313%(x2314^x2315))<<x2316);

	if (t56 != 391915765760LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x2481 = 6U;
	uint16_t x2482 = 0U;
	int64_t x2483 = INT64_MAX;
	int64_t t57 = 15852627LL;

	t57 = ((x2481%(x2482^x2483))<<x2484);

	if (t57 != 24LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2537 = 23914U;
	int64_t x2539 = 1LL;
	uint8_t x2540 = 2U;
	int64_t t58 = -7222960LL;

	t58 = ((x2537%(x2538^x2539))<<x2540);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x2637 = 404326030229LLU;
	int32_t x2638 = 137426;
	volatile uint64_t t59 = 2605LLU;

	t59 = ((x2637%(x2638^x2639))<<x2640);

	if (t59 != 52995821434175488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2649 = 13223216220845901LLU;
	uint64_t x2651 = UINT64_MAX;
	uint32_t x2652 = 17U;
	volatile uint64_t t60 = 3LLU;

	t60 = ((x2649%(x2650^x2651))<<x2652);

	if (t60 != 17646197643725635584LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2709 = UINT8_MAX;
	volatile uint16_t x2710 = 189U;
	uint8_t x2712 = 0U;
	int32_t t61 = -26125;

	t61 = ((x2709%(x2710^x2711))<<x2712);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2757 = -1242981;
	int32_t x2758 = -11654194;
	uint32_t x2759 = 89549U;
	volatile int8_t x2760 = 1;
	static uint32_t t62 = 1535316U;

	t62 = ((x2757%(x2758^x2759))<<x2760);

	if (t62 != 20653360U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2857 = UINT32_MAX;
	int64_t x2858 = INT64_MAX;
	uint64_t x2859 = 1551242432814424453LLU;
	volatile uint16_t x2860 = 1U;
	static uint64_t t63 = 84874892975LLU;

	t63 = ((x2857%(x2858^x2859))<<x2860);

	if (t63 != 8589934590LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2877 = UINT8_MAX;
	static int8_t x2878 = 12;
	int64_t x2879 = 73429144328LL;
	int8_t x2880 = 7;
	int64_t t64 = -8668774956645134LL;

	t64 = ((x2877%(x2878^x2879))<<x2880);

	if (t64 != 32640LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2881 = 293507675U;
	uint32_t x2882 = 756U;
	int64_t t65 = -19870LL;

	t65 = ((x2881%(x2882^x2883))<<x2884);

	if (t65 != 9712LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2897 = INT16_MIN;
	int32_t x2898 = INT32_MAX;
	volatile int32_t x2899 = INT32_MIN;
	uint16_t x2900 = 28U;
	volatile int32_t t66 = 0;

	t66 = ((x2897%(x2898^x2899))<<x2900);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x2913 = 1;
	static int8_t x2914 = 10;
	int32_t x2915 = 256327;

	t67 = ((x2913%(x2914^x2915))<<x2916);

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x2918 = UINT64_MAX;
	int16_t x2919 = INT16_MIN;
	volatile int32_t x2920 = 0;
	volatile uint64_t t68 = 163708464LLU;

	t68 = ((x2917%(x2918^x2919))<<x2920);

	if (t68 != 14LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2929 = UINT32_MAX;
	int64_t x2930 = 123LL;
	uint32_t x2931 = 20749U;
	int8_t x2932 = 0;

	t69 = ((x2929%(x2930^x2931))<<x2932);

	if (t69 != 2579LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x2941 = -12;
	int16_t x2942 = 10870;
	static volatile uint64_t t70 = 270LLU;

	t70 = ((x2941%(x2942^x2943))<<x2944);

	if (t70 != 21718LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2979 = INT16_MIN;
	volatile uint8_t x2980 = 0U;
	uint64_t t71 = 19410441505899079LLU;

	t71 = ((x2977%(x2978^x2979))<<x2980);

	if (t71 != 4730LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2994 = INT8_MIN;

	t72 = ((x2993%(x2994^x2995))<<x2996);

	if (t72 != 37972LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3085 = 1490U;
	int8_t x3086 = INT8_MAX;
	uint8_t x3088 = 21U;
	static uint64_t t73 = 28455LLU;

	t73 = ((x3085%(x3086^x3087))<<x3088);

	if (t73 != 3124756480LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x3114 = -1LL;
	int16_t x3115 = INT16_MIN;
	uint8_t x3116 = 22U;

	t74 = ((x3113%(x3114^x3115))<<x3116);

	if (t74 != 2852126720LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3133 = 1U;
	uint32_t x3134 = 3905U;
	uint8_t x3135 = 112U;
	static volatile uint16_t x3136 = 1U;

	t75 = ((x3133%(x3134^x3135))<<x3136);

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3177 = 456069394LL;
	int32_t x3178 = INT32_MIN;
	int32_t x3179 = -1085177;
	uint8_t x3180 = 23U;
	static volatile int64_t t76 = 112325945037203340LL;

	t76 = ((x3177%(x3178^x3179))<<x3180);

	if (t76 != 3825787367063552LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3201 = 1320921LLU;
	int8_t x3202 = INT8_MIN;
	int16_t x3203 = -12;
	uint32_t x3204 = 23U;
	volatile uint64_t t77 = 21687000069249326LLU;

	t77 = ((x3201%(x3202^x3203))<<x3204);

	if (t77 != 243269632LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3205 = INT8_MIN;
	uint64_t x3206 = 64677LLU;
	static uint8_t x3208 = 26U;
	uint64_t t78 = 14403178002974990LLU;

	t78 = ((x3205%(x3206^x3207))<<x3208);

	if (t78 != 204816252928LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3345 = UINT64_MAX;
	int32_t x3346 = -904752607;
	volatile uint16_t x3347 = 28U;
	uint64_t x3348 = 8LLU;

	t79 = ((x3345%(x3346^x3347))<<x3348);

	if (t79 != 231616659968LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3422 = INT16_MAX;
	int64_t x3423 = INT64_MAX;

	t80 = ((x3421%(x3422^x3423))<<x3424);

	if (t80 != 4194240LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3429 = 41174233LLU;
	uint32_t x3430 = 25701802U;
	int8_t x3431 = -3;
	static int8_t x3432 = 1;
	static uint64_t t81 = 7643405657812673916LLU;

	t81 = ((x3429%(x3430^x3431))<<x3432);

	if (t81 != 82348466LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x3469 = INT64_MAX;
	static volatile int16_t x3470 = INT16_MIN;
	volatile int16_t x3471 = INT16_MAX;
	int64_t t82 = 374230LL;

	t82 = ((x3469%(x3470^x3471))<<x3472);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3493 = 4009U;
	static uint8_t x3494 = 16U;
	static volatile uint64_t x3495 = 6400181719368494862LLU;
	volatile uint8_t x3496 = 50U;
	uint64_t t83 = 299867496LLU;

	t83 = ((x3493%(x3494^x3495))<<x3496);

	if (t83 != 4513732726532079616LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3513 = UINT16_MAX;
	int8_t x3514 = -53;
	uint16_t x3515 = UINT16_MAX;
	int8_t x3516 = 12;
	volatile int32_t t84 = 77802;

	t84 = ((x3513%(x3514^x3515))<<x3516);

	if (t84 != 208896) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3578 = 1LLU;
	int32_t x3579 = -1;
	volatile uint16_t x3580 = 4U;
	uint64_t t85 = 388301411648342LLU;

	t85 = ((x3577%(x3578^x3579))<<x3580);

	if (t85 != 16LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3581 = INT16_MAX;
	int32_t x3582 = INT32_MIN;
	int16_t x3584 = 1;

	t86 = ((x3581%(x3582^x3583))<<x3584);

	if (t86 != 65534) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x3609 = 324849406082LLU;
	uint16_t x3610 = 211U;
	static volatile uint64_t t87 = 4781LLU;

	t87 = ((x3609%(x3610^x3611))<<x3612);

	if (t87 != 2598795248656LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3626 = -1;
	uint64_t x3627 = 240365028236933711LLU;
	volatile int8_t x3628 = 2;
	uint64_t t88 = 185337775050LLU;

	t88 = ((x3625%(x3626^x3627))<<x3628);

	if (t88 != 17179869180LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x3653 = 1U;
	int8_t x3654 = INT8_MIN;
	volatile uint8_t x3655 = UINT8_MAX;
	uint8_t x3656 = 11U;
	volatile int32_t t89 = -450;

	t89 = ((x3653%(x3654^x3655))<<x3656);

	if (t89 != 2048) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3714 = INT64_MIN;
	static int16_t x3715 = 0;

	t90 = ((x3713%(x3714^x3715))<<x3716);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3717 = UINT16_MAX;
	static int8_t x3718 = INT8_MAX;
	uint64_t x3719 = 661LLU;
	uint8_t x3720 = 5U;
	volatile uint64_t t91 = 31262790LLU;

	t91 = ((x3717%(x3718^x3719))<<x3720);

	if (t91 != 20256LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3769 = INT8_MIN;
	volatile uint32_t x3770 = 128470U;
	int32_t x3771 = -1;
	static volatile uint32_t t92 = 674718U;

	t92 = ((x3769%(x3770^x3771))<<x3772);

	if (t92 != 8213952U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3773 = 206469235897810178LL;
	int32_t x3774 = -1;
	uint16_t x3775 = 16U;
	static uint8_t x3776 = 14U;
	volatile int64_t t93 = -2004844LL;

	t93 = ((x3773%(x3774^x3775))<<x3776);

	if (t93 != 65536LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3809 = UINT32_MAX;
	int32_t x3810 = INT32_MIN;
	int8_t x3811 = INT8_MIN;
	static uint8_t x3812 = 27U;
	static uint32_t t94 = 67210U;

	t94 = ((x3809%(x3810^x3811))<<x3812);

	if (t94 != 4160749568U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3929 = UINT16_MAX;
	static uint64_t x3930 = UINT64_MAX;
	uint32_t x3931 = UINT32_MAX;
	volatile uint64_t x3932 = 44LLU;
	volatile uint64_t t95 = 118209265LLU;

	t95 = ((x3929%(x3930^x3931))<<x3932);

	if (t95 != 1152903912420802560LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3945 = 452;
	int64_t x3946 = -1LL;
	int8_t x3947 = INT8_MIN;
	uint8_t x3948 = 23U;

	t96 = ((x3945%(x3946^x3947))<<x3948);

	if (t96 != 595591168LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3981 = -159139;
	int64_t x3982 = INT64_MAX;
	int64_t x3983 = INT64_MIN;
	int8_t x3984 = 1;
	int64_t t97 = 86429451813LL;

	t97 = ((x3981%(x3982^x3983))<<x3984);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x4054 = 1U;
	uint64_t x4055 = UINT64_MAX;
	volatile int16_t x4056 = 48;
	uint64_t t98 = 105856LLU;

	t98 = ((x4053%(x4054^x4055))<<x4056);

	if (t98 != 3101572768374718464LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x4173 = 20989U;
	int32_t x4174 = -1;
	int8_t x4175 = 0;
	uint32_t x4176 = 1U;
	static int32_t t99 = 28717823;

	t99 = ((x4173%(x4174^x4175))<<x4176);

	if (t99 != 0) { NG(); } else { ; }
	
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

