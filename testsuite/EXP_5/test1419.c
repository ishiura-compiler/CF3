#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x273 = 1U;
uint8_t x276 = 5U;
int16_t x421 = -1;
volatile int8_t x424 = 0;
int64_t x506 = INT64_MIN;
uint32_t x508 = 1U;
uint64_t x623 = 26612793LLU;
volatile uint16_t x624 = 30U;
volatile uint32_t x682 = 12478743U;
static volatile int32_t t7 = -13352;
int8_t x726 = 15;
volatile uint8_t x727 = 0U;
int32_t x830 = -1;
uint8_t x832 = 7U;
static uint16_t x890 = UINT16_MAX;
static int8_t x892 = 0;
volatile int64_t t12 = -981746388571649849LL;
static volatile int32_t x903 = -2981140;
int32_t t14 = 10021;
volatile uint8_t x995 = 36U;
int32_t t16 = 79276;
static int64_t x1053 = -508LL;
static volatile uint16_t x1068 = 13U;
volatile int64_t x1073 = INT64_MIN;
uint8_t x1075 = 115U;
uint8_t x1078 = 7U;
uint8_t x1128 = 1U;
static uint16_t x1195 = UINT16_MAX;
uint8_t x1196 = 21U;
volatile uint8_t x1221 = 4U;
int16_t x1307 = -1;
volatile uint16_t x1329 = 1337U;
volatile uint64_t t30 = 515996113952671LLU;
static int32_t t32 = -224388527;
static int32_t x1488 = 1;
int32_t t33 = -17121401;
int16_t x1510 = 1705;
int16_t x1521 = 0;
volatile int16_t x1523 = -69;
int32_t t36 = 0;
int32_t x1558 = INT32_MAX;
int8_t x1669 = INT8_MIN;
int8_t x1670 = INT8_MIN;
int8_t x1671 = -4;
uint64_t x1675 = 505882088LLU;
int32_t t41 = -202;
int8_t x1696 = 1;
int8_t x1717 = INT8_MIN;
volatile uint16_t x1720 = 5U;
volatile uint64_t x1765 = 688660206488006117LLU;
static volatile uint8_t x1768 = 20U;
uint8_t x1777 = 47U;
static int32_t t46 = -92879;
int64_t x1782 = INT64_MIN;
static uint8_t x1784 = 5U;
static uint16_t x1826 = 90U;
static volatile int16_t x1848 = 1;
int32_t t49 = 0;
int64_t x1857 = -1LL;
int64_t t50 = 1041785LL;
int64_t x2145 = -1LL;
int64_t t52 = -9080249009917LL;
static uint32_t x2166 = 40347U;
volatile int32_t x2167 = 1026193584;
static int16_t x2321 = INT16_MAX;
volatile int16_t x2323 = -1;
int32_t t58 = -410764;
uint8_t x2332 = 0U;
static uint8_t x2355 = 117U;
static uint16_t x2386 = UINT16_MAX;
int32_t x2387 = INT32_MIN;
int32_t t62 = -224287;
static int32_t x2401 = -999190888;
static volatile int16_t x2403 = INT16_MIN;
uint32_t x2414 = 8052846U;
int64_t x2425 = INT64_MIN;
static uint16_t x2428 = 1U;
int64_t t65 = INT64_MIN;
volatile int32_t t68 = INT32_MAX;
int64_t x2477 = INT64_MIN;
int64_t t69 = INT64_MIN;
int64_t x2517 = INT64_MIN;
volatile uint32_t x2518 = UINT32_MAX;
uint16_t x2520 = 10U;
int64_t x2523 = 21314LL;
volatile int32_t x2524 = 0;
uint64_t t71 = 26LLU;
int64_t x2535 = INT64_MAX;
int32_t x2543 = -65996220;
static uint64_t x2544 = 0LLU;
int32_t x2554 = 20;
volatile int8_t x2555 = INT8_MAX;
int64_t x2557 = -53700318806687LL;
uint8_t x2558 = UINT8_MAX;
uint32_t x2597 = 44231396U;
static int32_t x2598 = 472478922;
int16_t x2599 = -61;
uint8_t x2716 = 15U;
volatile uint16_t x2785 = UINT16_MAX;
uint8_t x2787 = UINT8_MAX;
uint8_t x2813 = UINT8_MAX;
int64_t x2915 = -1LL;
volatile int32_t t83 = 57420758;
volatile int32_t t84 = 7;
uint32_t x3067 = UINT32_MAX;
uint8_t x3068 = 3U;
int16_t x3075 = INT16_MIN;
int64_t t87 = -2152147956501012103LL;
uint8_t x3120 = 1U;
volatile uint32_t t88 = 32415U;
volatile int32_t x3135 = -1;
static uint64_t x3141 = UINT64_MAX;
volatile uint8_t x3156 = 3U;
int32_t x3245 = -1;
uint8_t x3247 = 121U;
int64_t x3291 = INT64_MIN;
static uint16_t x3384 = 2U;
int16_t x3385 = 85;
int64_t x3389 = -1LL;
int64_t x3391 = 1028275271453LL;


void f0(void) {
	static uint16_t x245 = 3015U;
	static uint64_t x246 = UINT64_MAX;
	int64_t x247 = 76882963720157LL;
	int8_t x248 = 0;
	int32_t t0 = -7;

	t0 = (x245-((x246<x247)<<x248));

	if (t0 != 3015) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MAX;
	int32_t t1 = -52129700;

	t1 = (x273-((x274<x275)<<x276));

	if (t1 != -31) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x422 = -1;
	int16_t x423 = 772;
	int32_t t2 = -505;

	t2 = (x421-((x422<x423)<<x424));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x505 = 10U;
	static volatile uint64_t x507 = 485878609835423LLU;
	int32_t t3 = -728976;

	t3 = (x505-((x506<x507)<<x508));

	if (t3 != 10) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x565 = INT16_MIN;
	uint64_t x566 = UINT64_MAX;
	static int32_t x567 = -1;
	uint32_t x568 = 0U;
	int32_t t4 = 1;

	t4 = (x565-((x566<x567)<<x568));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x621 = 753180081292131LL;
	int8_t x622 = INT8_MAX;
	static volatile int64_t t5 = -6370LL;

	t5 = (x621-((x622<x623)<<x624));

	if (t5 != 753179007550307LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x633 = -59;
	volatile int64_t x634 = -126062LL;
	static int8_t x635 = INT8_MIN;
	uint8_t x636 = 1U;
	int32_t t6 = -547;

	t6 = (x633-((x634<x635)<<x636));

	if (t6 != -61) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x681 = -1281480;
	int16_t x683 = 320;
	uint8_t x684 = 0U;

	t7 = (x681-((x682<x683)<<x684));

	if (t7 != -1281480) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x725 = UINT8_MAX;
	uint8_t x728 = 2U;
	int32_t t8 = 1497025;

	t8 = (x725-((x726<x727)<<x728));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x789 = INT64_MAX;
	int32_t x790 = -1;
	int64_t x791 = INT64_MIN;
	uint32_t x792 = 1U;
	int64_t t9 = INT64_MAX;

	t9 = (x789-((x790<x791)<<x792));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x829 = INT16_MIN;
	int8_t x831 = INT8_MIN;
	static volatile int32_t t10 = -383;

	t10 = (x829-((x830<x831)<<x832));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x881 = INT8_MIN;
	volatile int8_t x882 = INT8_MAX;
	uint16_t x883 = 6055U;
	uint8_t x884 = 2U;
	static volatile int32_t t11 = 1048814584;

	t11 = (x881-((x882<x883)<<x884));

	if (t11 != -132) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x889 = -1LL;
	uint64_t x891 = 827072925824LLU;

	t12 = (x889-((x890<x891)<<x892));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x901 = -1;
	int16_t x902 = 232;
	int16_t x904 = 0;
	volatile int32_t t13 = -11;

	t13 = (x901-((x902<x903)<<x904));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x917 = 53U;
	uint64_t x918 = UINT64_MAX;
	int32_t x919 = INT32_MIN;
	volatile int64_t x920 = 0LL;

	t14 = (x917-((x918<x919)<<x920));

	if (t14 != 53) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x993 = INT16_MAX;
	volatile int32_t x994 = -1;
	int16_t x996 = 1;
	int32_t t15 = -6700208;

	t15 = (x993-((x994<x995)<<x996));

	if (t15 != 32765) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x997 = -1;
	int8_t x998 = INT8_MAX;
	uint16_t x999 = 15985U;
	static uint16_t x1000 = 9U;

	t16 = (x997-((x998<x999)<<x1000));

	if (t16 != -513) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1049 = 0;
	volatile int16_t x1050 = INT16_MIN;
	static int8_t x1051 = -3;
	static volatile int16_t x1052 = 6;
	static int32_t t17 = 914516055;

	t17 = (x1049-((x1050<x1051)<<x1052));

	if (t17 != -64) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x1054 = INT32_MIN;
	static int64_t x1055 = -206345205088116LL;
	static int64_t x1056 = 0LL;
	volatile int64_t t18 = -4176781646LL;

	t18 = (x1053-((x1054<x1055)<<x1056));

	if (t18 != -508LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x1065 = 12U;
	static volatile int64_t x1066 = INT64_MIN;
	int16_t x1067 = -1;
	int32_t t19 = 899659;

	t19 = (x1065-((x1066<x1067)<<x1068));

	if (t19 != -8180) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1074 = 699U;
	int32_t x1076 = 3;
	int64_t t20 = INT64_MIN;

	t20 = (x1073-((x1074<x1075)<<x1076));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1077 = -1;
	int32_t x1079 = INT32_MIN;
	volatile int8_t x1080 = 24;
	int32_t t21 = 74;

	t21 = (x1077-((x1078<x1079)<<x1080));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1125 = -806;
	uint8_t x1126 = UINT8_MAX;
	uint32_t x1127 = 617611108U;
	volatile int32_t t22 = 0;

	t22 = (x1125-((x1126<x1127)<<x1128));

	if (t22 != -808) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1193 = -1;
	int32_t x1194 = -1;
	volatile int32_t t23 = 3770;

	t23 = (x1193-((x1194<x1195)<<x1196));

	if (t23 != -2097153) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1222 = UINT8_MAX;
	volatile int8_t x1223 = INT8_MAX;
	volatile uint32_t x1224 = 3U;
	static int32_t t24 = 179778918;

	t24 = (x1221-((x1222<x1223)<<x1224));

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1225 = -25;
	int16_t x1226 = INT16_MAX;
	int32_t x1227 = -134513;
	static uint8_t x1228 = 0U;
	volatile int32_t t25 = -365519421;

	t25 = (x1225-((x1226<x1227)<<x1228));

	if (t25 != -25) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1281 = -10;
	int16_t x1282 = INT16_MIN;
	volatile int16_t x1283 = -1;
	uint8_t x1284 = 1U;
	int32_t t26 = 232792947;

	t26 = (x1281-((x1282<x1283)<<x1284));

	if (t26 != -12) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1305 = UINT64_MAX;
	static int64_t x1306 = INT64_MIN;
	int32_t x1308 = 1;
	uint64_t t27 = 15LLU;

	t27 = (x1305-((x1306<x1307)<<x1308));

	if (t27 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1330 = INT8_MIN;
	uint16_t x1331 = 71U;
	static uint8_t x1332 = 0U;
	volatile int32_t t28 = -3643407;

	t28 = (x1329-((x1330<x1331)<<x1332));

	if (t28 != 1336) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1341 = 5220U;
	volatile int8_t x1342 = INT8_MIN;
	volatile int64_t x1343 = -335LL;
	uint8_t x1344 = 12U;
	uint32_t t29 = 1U;

	t29 = (x1341-((x1342<x1343)<<x1344));

	if (t29 != 5220U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1373 = 5877215881LLU;
	static int64_t x1374 = INT64_MIN;
	int64_t x1375 = INT64_MIN;
	volatile int8_t x1376 = 0;

	t30 = (x1373-((x1374<x1375)<<x1376));

	if (t30 != 5877215881LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1385 = -18;
	int64_t x1386 = INT64_MIN;
	int64_t x1387 = INT64_MIN;
	uint8_t x1388 = 13U;
	volatile int32_t t31 = 1;

	t31 = (x1385-((x1386<x1387)<<x1388));

	if (t31 != -18) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1433 = INT8_MAX;
	volatile int16_t x1434 = -1;
	uint32_t x1435 = 519608164U;
	volatile int16_t x1436 = 5;

	t32 = (x1433-((x1434<x1435)<<x1436));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1485 = 63U;
	int32_t x1486 = INT32_MAX;
	volatile int16_t x1487 = INT16_MAX;

	t33 = (x1485-((x1486<x1487)<<x1488));

	if (t33 != 63) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1509 = 0U;
	int8_t x1511 = INT8_MIN;
	static uint8_t x1512 = 3U;
	int32_t t34 = 20;

	t34 = (x1509-((x1510<x1511)<<x1512));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1517 = 5LLU;
	int64_t x1518 = INT64_MIN;
	volatile int64_t x1519 = -18733391505LL;
	uint16_t x1520 = 1U;
	volatile uint64_t t35 = 157LLU;

	t35 = (x1517-((x1518<x1519)<<x1520));

	if (t35 != 3LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1522 = -1;
	volatile int8_t x1524 = 2;

	t36 = (x1521-((x1522<x1523)<<x1524));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x1557 = INT64_MIN;
	int32_t x1559 = -1;
	uint8_t x1560 = 0U;
	int64_t t37 = INT64_MIN;

	t37 = (x1557-((x1558<x1559)<<x1560));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1625 = 3LLU;
	uint16_t x1626 = 6U;
	static uint32_t x1627 = 5879196U;
	static uint8_t x1628 = 1U;
	volatile uint64_t t38 = 2368LLU;

	t38 = (x1625-((x1626<x1627)<<x1628));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x1641 = 869U;
	int8_t x1642 = INT8_MAX;
	uint8_t x1643 = 7U;
	uint8_t x1644 = 10U;
	static uint32_t t39 = 1592U;

	t39 = (x1641-((x1642<x1643)<<x1644));

	if (t39 != 869U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x1672 = 9;
	volatile int32_t t40 = 666861;

	t40 = (x1669-((x1670<x1671)<<x1672));

	if (t40 != -640) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1673 = INT32_MAX;
	uint8_t x1674 = 39U;
	int16_t x1676 = 3;

	t41 = (x1673-((x1674<x1675)<<x1676));

	if (t41 != 2147483639) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1693 = 53U;
	volatile int16_t x1694 = -12;
	uint64_t x1695 = 619527LLU;
	volatile int32_t t42 = -4;

	t42 = (x1693-((x1694<x1695)<<x1696));

	if (t42 != 53) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1718 = -8895;
	volatile int16_t x1719 = INT16_MIN;
	volatile int32_t t43 = 8895621;

	t43 = (x1717-((x1718<x1719)<<x1720));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1766 = -1;
	int64_t x1767 = INT64_MIN;
	volatile uint64_t t44 = 5419389659413LLU;

	t44 = (x1765-((x1766<x1767)<<x1768));

	if (t44 != 688660206488006117LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1773 = UINT8_MAX;
	int64_t x1774 = INT64_MIN;
	static int16_t x1775 = INT16_MIN;
	int32_t x1776 = 4;
	volatile int32_t t45 = 155802;

	t45 = (x1773-((x1774<x1775)<<x1776));

	if (t45 != 239) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1778 = INT32_MAX;
	int8_t x1779 = 8;
	int8_t x1780 = 0;

	t46 = (x1777-((x1778<x1779)<<x1780));

	if (t46 != 47) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x1781 = -1;
	int8_t x1783 = 0;
	int32_t t47 = 1;

	t47 = (x1781-((x1782<x1783)<<x1784));

	if (t47 != -33) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x1825 = -1;
	uint8_t x1827 = 2U;
	int8_t x1828 = 0;
	volatile int32_t t48 = -445626;

	t48 = (x1825-((x1826<x1827)<<x1828));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1845 = -1;
	int16_t x1846 = 187;
	int8_t x1847 = -1;

	t49 = (x1845-((x1846<x1847)<<x1848));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1858 = INT8_MIN;
	static volatile int64_t x1859 = 35617LL;
	static uint32_t x1860 = 1U;

	t50 = (x1857-((x1858<x1859)<<x1860));

	if (t50 != -3LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1885 = 1;
	uint32_t x1886 = 858509333U;
	int16_t x1887 = INT16_MIN;
	int32_t x1888 = 0;
	volatile int32_t t51 = 369327850;

	t51 = (x1885-((x1886<x1887)<<x1888));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2146 = -659432LL;
	static volatile uint16_t x2147 = UINT16_MAX;
	uint64_t x2148 = 2LLU;

	t52 = (x2145-((x2146<x2147)<<x2148));

	if (t52 != -5LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2165 = UINT32_MAX;
	uint8_t x2168 = 0U;
	uint32_t t53 = 1723888U;

	t53 = (x2165-((x2166<x2167)<<x2168));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2181 = INT32_MAX;
	volatile int64_t x2182 = -180893409824971815LL;
	int8_t x2183 = 0;
	uint8_t x2184 = 8U;
	int32_t t54 = 1253;

	t54 = (x2181-((x2182<x2183)<<x2184));

	if (t54 != 2147483391) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x2225 = 32113U;
	int32_t x2226 = INT32_MAX;
	int16_t x2227 = INT16_MAX;
	volatile uint16_t x2228 = 4U;
	int32_t t55 = 237;

	t55 = (x2225-((x2226<x2227)<<x2228));

	if (t55 != 32113) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2301 = INT32_MAX;
	uint8_t x2302 = 1U;
	uint16_t x2303 = UINT16_MAX;
	int8_t x2304 = 1;
	volatile int32_t t56 = -219846;

	t56 = (x2301-((x2302<x2303)<<x2304));

	if (t56 != 2147483645) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2305 = INT64_MIN;
	uint8_t x2306 = 6U;
	volatile int8_t x2307 = INT8_MIN;
	static int8_t x2308 = 0;
	int64_t t57 = INT64_MIN;

	t57 = (x2305-((x2306<x2307)<<x2308));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x2322 = UINT16_MAX;
	int16_t x2324 = 14;

	t58 = (x2321-((x2322<x2323)<<x2324));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2325 = -84732395LL;
	int16_t x2326 = INT16_MAX;
	int16_t x2327 = 828;
	int8_t x2328 = 2;
	int64_t t59 = 134LL;

	t59 = (x2325-((x2326<x2327)<<x2328));

	if (t59 != -84732395LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2329 = INT64_MAX;
	static int64_t x2330 = INT64_MIN;
	uint32_t x2331 = 516U;
	volatile int64_t t60 = -13405570LL;

	t60 = (x2329-((x2330<x2331)<<x2332));

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x2353 = 4894197U;
	static uint64_t x2354 = 32398207836836563LLU;
	uint8_t x2356 = 2U;
	static uint32_t t61 = 14U;

	t61 = (x2353-((x2354<x2355)<<x2356));

	if (t61 != 4894197U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2385 = -1;
	uint8_t x2388 = 30U;

	t62 = (x2385-((x2386<x2387)<<x2388));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2402 = UINT64_MAX;
	uint32_t x2404 = 15U;
	volatile int32_t t63 = -331275750;

	t63 = (x2401-((x2402<x2403)<<x2404));

	if (t63 != -999190888) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2413 = 36;
	int32_t x2415 = -1;
	uint16_t x2416 = 2U;
	int32_t t64 = -282270943;

	t64 = (x2413-((x2414<x2415)<<x2416));

	if (t64 != 32) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2426 = -3;
	uint64_t x2427 = 69716LLU;

	t65 = (x2425-((x2426<x2427)<<x2428));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2437 = -1;
	int8_t x2438 = INT8_MAX;
	uint16_t x2439 = UINT16_MAX;
	int8_t x2440 = 1;
	volatile int32_t t66 = 401507;

	t66 = (x2437-((x2438<x2439)<<x2440));

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x2461 = 1006436427198LLU;
	int8_t x2462 = -1;
	int8_t x2463 = -1;
	volatile int32_t x2464 = 2;
	static uint64_t t67 = 62028080896LLU;

	t67 = (x2461-((x2462<x2463)<<x2464));

	if (t67 != 1006436427198LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2465 = INT32_MAX;
	static int32_t x2466 = INT32_MIN;
	int32_t x2467 = INT32_MIN;
	int16_t x2468 = 0;

	t68 = (x2465-((x2466<x2467)<<x2468));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x2478 = UINT16_MAX;
	uint16_t x2479 = UINT16_MAX;
	static int8_t x2480 = 2;

	t69 = (x2477-((x2478<x2479)<<x2480));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2519 = INT16_MIN;
	int64_t t70 = INT64_MIN;

	t70 = (x2517-((x2518<x2519)<<x2520));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2521 = 830542LLU;
	int32_t x2522 = -1;

	t71 = (x2521-((x2522<x2523)<<x2524));

	if (t71 != 830541LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2533 = INT8_MIN;
	int16_t x2534 = INT16_MAX;
	static uint8_t x2536 = 21U;
	volatile int32_t t72 = 121;

	t72 = (x2533-((x2534<x2535)<<x2536));

	if (t72 != -2097280) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x2537 = INT16_MIN;
	int16_t x2538 = INT16_MAX;
	volatile uint32_t x2539 = 106342349U;
	volatile uint32_t x2540 = 0U;
	int32_t t73 = 31971273;

	t73 = (x2537-((x2538<x2539)<<x2540));

	if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2541 = -1;
	uint16_t x2542 = 2178U;
	int32_t t74 = 67;

	t74 = (x2541-((x2542<x2543)<<x2544));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2553 = INT16_MIN;
	static uint16_t x2556 = 5U;
	volatile int32_t t75 = 62325438;

	t75 = (x2553-((x2554<x2555)<<x2556));

	if (t75 != -32800) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2559 = INT8_MIN;
	static uint16_t x2560 = 3U;
	volatile int64_t t76 = -53965338LL;

	t76 = (x2557-((x2558<x2559)<<x2560));

	if (t76 != -53700318806687LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2600 = 30;
	static volatile uint32_t t77 = 13990143U;

	t77 = (x2597-((x2598<x2599)<<x2600));

	if (t77 != 44231396U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2693 = 1U;
	static uint16_t x2694 = UINT16_MAX;
	static uint64_t x2695 = 30613LLU;
	volatile uint8_t x2696 = 3U;
	static volatile uint32_t t78 = 516386U;

	t78 = (x2693-((x2694<x2695)<<x2696));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x2713 = 14U;
	uint16_t x2714 = 373U;
	int16_t x2715 = -5;
	int32_t t79 = -58743;

	t79 = (x2713-((x2714<x2715)<<x2716));

	if (t79 != 14) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2786 = 109;
	uint8_t x2788 = 27U;
	int32_t t80 = -152;

	t80 = (x2785-((x2786<x2787)<<x2788));

	if (t80 != -134152193) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x2814 = INT8_MIN;
	int32_t x2815 = -26241178;
	static uint8_t x2816 = 3U;
	int32_t t81 = 1;

	t81 = (x2813-((x2814<x2815)<<x2816));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x2869 = 1U;
	static int32_t x2870 = -1;
	int8_t x2871 = 1;
	uint32_t x2872 = 1U;
	uint32_t t82 = UINT32_MAX;

	t82 = (x2869-((x2870<x2871)<<x2872));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x2913 = INT8_MIN;
	int16_t x2914 = -1;
	uint16_t x2916 = 27U;

	t83 = (x2913-((x2914<x2915)<<x2916));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3005 = -1;
	static int8_t x3006 = -1;
	uint32_t x3007 = UINT32_MAX;
	uint8_t x3008 = 5U;

	t84 = (x3005-((x3006<x3007)<<x3008));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x3065 = UINT32_MAX;
	volatile int8_t x3066 = -1;
	uint32_t t85 = UINT32_MAX;

	t85 = (x3065-((x3066<x3067)<<x3068));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3073 = INT32_MIN;
	int8_t x3074 = -1;
	int16_t x3076 = 1;
	int32_t t86 = INT32_MIN;

	t86 = (x3073-((x3074<x3075)<<x3076));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3097 = 83044271LL;
	uint16_t x3098 = 12U;
	volatile int16_t x3099 = -1;
	volatile uint32_t x3100 = 5U;

	t87 = (x3097-((x3098<x3099)<<x3100));

	if (t87 != 83044271LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3117 = 53525949U;
	static volatile int32_t x3118 = 2;
	int16_t x3119 = -1;

	t88 = (x3117-((x3118<x3119)<<x3120));

	if (t88 != 53525949U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x3133 = UINT32_MAX;
	int64_t x3134 = 2896297062001LL;
	uint16_t x3136 = 0U;
	static uint32_t t89 = UINT32_MAX;

	t89 = (x3133-((x3134<x3135)<<x3136));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3142 = -2;
	int64_t x3143 = INT64_MAX;
	uint32_t x3144 = 7U;
	volatile uint64_t t90 = 2836658828889LLU;

	t90 = (x3141-((x3142<x3143)<<x3144));

	if (t90 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x3153 = UINT64_MAX;
	uint64_t x3154 = 5370983151890206559LLU;
	int16_t x3155 = -5;
	uint64_t t91 = 42244015994791939LLU;

	t91 = (x3153-((x3154<x3155)<<x3156));

	if (t91 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3161 = -1LL;
	uint16_t x3162 = 158U;
	int8_t x3163 = 7;
	volatile uint16_t x3164 = 0U;
	volatile int64_t t92 = -2036211LL;

	t92 = (x3161-((x3162<x3163)<<x3164));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x3246 = 167950U;
	uint32_t x3248 = 1U;
	volatile int32_t t93 = -187;

	t93 = (x3245-((x3246<x3247)<<x3248));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x3289 = -300;
	volatile int64_t x3290 = INT64_MAX;
	uint32_t x3292 = 1U;
	int32_t t94 = -346;

	t94 = (x3289-((x3290<x3291)<<x3292));

	if (t94 != -300) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3349 = -5;
	uint32_t x3350 = 8U;
	static int64_t x3351 = INT64_MIN;
	uint8_t x3352 = 15U;
	static volatile int32_t t95 = -62;

	t95 = (x3349-((x3350<x3351)<<x3352));

	if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3361 = -1LL;
	int16_t x3362 = -4;
	static uint64_t x3363 = 13788945897LLU;
	uint8_t x3364 = 8U;
	volatile int64_t t96 = -202654951LL;

	t96 = (x3361-((x3362<x3363)<<x3364));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3381 = -7;
	uint32_t x3382 = UINT32_MAX;
	static int32_t x3383 = INT32_MIN;
	volatile int32_t t97 = 11188;

	t97 = (x3381-((x3382<x3383)<<x3384));

	if (t97 != -7) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3386 = INT8_MIN;
	volatile int32_t x3387 = INT32_MIN;
	uint16_t x3388 = 7U;
	static volatile int32_t t98 = 3;

	t98 = (x3385-((x3386<x3387)<<x3388));

	if (t98 != 85) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3390 = 22;
	static uint8_t x3392 = 4U;
	int64_t t99 = 127287LL;

	t99 = (x3389-((x3390<x3391)<<x3392));

	if (t99 != -17LL) { NG(); } else { ; }
	
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

