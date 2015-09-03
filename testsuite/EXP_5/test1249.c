#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x31 = INT32_MAX;
int64_t x63 = -137397LL;
int32_t t3 = 109761919;
int8_t x78 = INT8_MIN;
static uint64_t x101 = UINT64_MAX;
volatile int32_t t6 = 46856465;
volatile int16_t x321 = INT16_MIN;
int8_t x322 = -1;
volatile uint16_t x324 = 21U;
static uint16_t x330 = 5959U;
int16_t x458 = -16320;
int64_t x479 = 7576702732017765LL;
static int16_t x480 = 1;
static volatile int32_t t14 = -1325;
int64_t t15 = INT64_MIN;
int32_t x578 = INT32_MAX;
int32_t t18 = 184705;
volatile uint32_t x659 = UINT32_MAX;
static int32_t t19 = 373270932;
int64_t x718 = INT64_MAX;
int64_t x751 = INT64_MIN;
int64_t x752 = 1LL;
static int32_t t21 = 383929;
uint32_t x759 = UINT32_MAX;
static int32_t t22 = 334618226;
static int32_t t23 = INT32_MAX;
int64_t x847 = -100401LL;
int8_t x907 = 2;
uint32_t x936 = 2U;
static int8_t x1044 = 5;
volatile uint64_t t33 = UINT64_MAX;
volatile int32_t t34 = -109444;
volatile int64_t t36 = 39134484526006LL;
static int32_t x1153 = -1;
int16_t x1225 = INT16_MIN;
uint64_t x1231 = UINT64_MAX;
int32_t t45 = 54;
int64_t x1513 = -1LL;
uint16_t x1515 = 1U;
int8_t x1567 = INT8_MAX;
volatile int32_t t49 = -1795;
volatile int32_t t50 = INT32_MAX;
volatile int32_t x1751 = -151;
volatile int32_t t54 = -1;
uint8_t x1956 = 15U;
volatile int32_t t55 = INT32_MIN;
int64_t x2019 = INT64_MAX;
uint8_t x2115 = 6U;
static int64_t x2314 = INT64_MIN;
int16_t x2315 = INT16_MIN;
uint16_t x2316 = 6U;
int32_t x2333 = INT32_MAX;
int64_t t63 = 227618920LL;
int8_t x2352 = 7;
uint16_t x2370 = UINT16_MAX;
uint32_t x2372 = 14U;
int32_t t65 = 0;
int32_t x2387 = -4653;
int32_t x2442 = INT32_MIN;
static int32_t x2688 = 11;
int8_t x2702 = -21;
uint64_t x2749 = UINT64_MAX;
int16_t x2751 = INT16_MAX;
int8_t x2752 = 7;
volatile uint8_t x2763 = 50U;
int32_t x2774 = INT32_MIN;
volatile int32_t t79 = 0;
int16_t x2953 = -1;
static int32_t t81 = -236581;
volatile uint32_t x2965 = UINT32_MAX;
static int32_t x2967 = -1;
volatile uint64_t t84 = 8160911LLU;
volatile int32_t x2994 = INT32_MIN;
static uint16_t x2996 = 2U;
static uint64_t x3017 = UINT64_MAX;
static uint16_t x3063 = UINT16_MAX;
int32_t x3131 = -1;
volatile int32_t t90 = 14;
volatile uint32_t x3157 = UINT32_MAX;
int8_t x3287 = -1;
uint8_t x3370 = 1U;
int16_t x3373 = INT16_MAX;
int32_t x3375 = INT32_MIN;
uint64_t x3377 = 137621581657201LLU;
int8_t x3378 = -1;


void f0(void) {
	static int16_t x29 = 127;
	uint16_t x30 = 75U;
	volatile uint8_t x32 = 10U;
	int32_t t0 = 3076;

	t0 = (x29+((x30==x31)<<x32));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x37 = 766301243;
	int16_t x38 = -1;
	int16_t x39 = INT16_MIN;
	int32_t x40 = 9;
	volatile int32_t t1 = -96984005;

	t1 = (x37+((x38==x39)<<x40));

	if (t1 != 766301243) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x53 = INT32_MAX;
	int32_t x54 = 2934;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 16U;
	int32_t t2 = INT32_MAX;

	t2 = (x53+((x54==x55)<<x56));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x61 = INT8_MIN;
	uint64_t x62 = UINT64_MAX;
	static uint64_t x64 = 2LLU;

	t3 = (x61+((x62==x63)<<x64));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x79 = 161626616LLU;
	volatile int16_t x80 = 24;
	static volatile int32_t t4 = 24024;

	t4 = (x77+((x78==x79)<<x80));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x102 = 1;
	uint16_t x103 = 1492U;
	static volatile int32_t x104 = 1;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x101+((x102==x103)<<x104));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x149 = UINT16_MAX;
	uint8_t x150 = 13U;
	int32_t x151 = INT32_MIN;
	uint32_t x152 = 10U;

	t6 = (x149+((x150==x151)<<x152));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x165 = INT8_MAX;
	int64_t x166 = -110564LL;
	int8_t x167 = INT8_MAX;
	int8_t x168 = 0;
	int32_t t7 = -22;

	t7 = (x165+((x166==x167)<<x168));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	uint8_t x176 = 2U;
	int32_t t8 = INT32_MIN;

	t8 = (x173+((x174==x175)<<x176));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x323 = -1;
	static volatile int32_t t9 = 802179;

	t9 = (x321+((x322==x323)<<x324));

	if (t9 != 2064384) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x329 = -1LL;
	int8_t x331 = INT8_MAX;
	volatile uint8_t x332 = 3U;
	volatile int64_t t10 = -32179241156876017LL;

	t10 = (x329+((x330==x331)<<x332));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 0U;
	int32_t t11 = 81434279;

	t11 = (x405+((x406==x407)<<x408));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x417 = INT64_MIN;
	volatile int32_t x418 = -1809;
	int64_t x419 = INT64_MAX;
	uint16_t x420 = 18U;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x417+((x418==x419)<<x420));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x457 = 7935178012955LLU;
	volatile uint32_t x459 = UINT32_MAX;
	uint16_t x460 = 2U;
	uint64_t t13 = 16296LLU;

	t13 = (x457+((x458==x459)<<x460));

	if (t13 != 7935178012955LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x477 = -1;
	uint32_t x478 = 6825U;

	t14 = (x477+((x478==x479)<<x480));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x485 = INT64_MIN;
	int64_t x486 = -2863027LL;
	uint32_t x487 = 10319395U;
	volatile uint8_t x488 = 0U;

	t15 = (x485+((x486==x487)<<x488));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x545 = INT64_MAX;
	int64_t x546 = -1LL;
	int32_t x547 = -56;
	uint32_t x548 = 15U;
	int64_t t16 = INT64_MAX;

	t16 = (x545+((x546==x547)<<x548));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x569 = UINT32_MAX;
	static volatile int16_t x570 = INT16_MAX;
	uint64_t x571 = 125LLU;
	uint8_t x572 = 7U;
	static uint32_t t17 = UINT32_MAX;

	t17 = (x569+((x570==x571)<<x572));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x577 = 0U;
	volatile uint8_t x579 = 6U;
	volatile uint8_t x580 = 0U;

	t18 = (x577+((x578==x579)<<x580));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x657 = INT16_MIN;
	volatile int32_t x658 = INT32_MAX;
	int8_t x660 = 1;

	t19 = (x657+((x658==x659)<<x660));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x717 = 1U;
	uint32_t x719 = 12940U;
	static uint16_t x720 = 0U;
	int32_t t20 = 2004;

	t20 = (x717+((x718==x719)<<x720));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x749 = 3643;
	static int64_t x750 = INT64_MAX;

	t21 = (x749+((x750==x751)<<x752));

	if (t21 != 3643) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x757 = UINT16_MAX;
	int8_t x758 = 0;
	uint16_t x760 = 12U;

	t22 = (x757+((x758==x759)<<x760));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x825 = INT32_MAX;
	volatile int8_t x826 = 38;
	int32_t x827 = -2;
	uint8_t x828 = 6U;

	t23 = (x825+((x826==x827)<<x828));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x837 = INT16_MAX;
	static int64_t x838 = INT64_MIN;
	uint8_t x839 = 28U;
	int8_t x840 = 1;
	static int32_t t24 = -30;

	t24 = (x837+((x838==x839)<<x840));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x845 = 3207LLU;
	volatile int64_t x846 = -331LL;
	int8_t x848 = 26;
	volatile uint64_t t25 = 4142185102650777701LLU;

	t25 = (x845+((x846==x847)<<x848));

	if (t25 != 3207LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x901 = 634;
	int16_t x902 = INT16_MAX;
	int8_t x903 = -1;
	int8_t x904 = 24;
	volatile int32_t t26 = -245;

	t26 = (x901+((x902==x903)<<x904));

	if (t26 != 634) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x905 = INT64_MAX;
	uint16_t x906 = 3051U;
	int8_t x908 = 0;
	static volatile int64_t t27 = INT64_MAX;

	t27 = (x905+((x906==x907)<<x908));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x925 = INT16_MIN;
	static volatile int64_t x926 = 3275984536LL;
	int16_t x927 = INT16_MIN;
	volatile int8_t x928 = 2;
	int32_t t28 = -423871;

	t28 = (x925+((x926==x927)<<x928));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x929 = INT16_MAX;
	static int8_t x930 = -61;
	static int64_t x931 = -1LL;
	volatile uint8_t x932 = 0U;
	volatile int32_t t29 = 18;

	t29 = (x929+((x930==x931)<<x932));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x933 = INT16_MIN;
	uint64_t x934 = UINT64_MAX;
	uint16_t x935 = 0U;
	volatile int32_t t30 = -227552179;

	t30 = (x933+((x934==x935)<<x936));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1013 = INT64_MAX;
	uint32_t x1014 = 50279678U;
	uint8_t x1015 = 5U;
	volatile uint64_t x1016 = 0LLU;
	int64_t t31 = INT64_MAX;

	t31 = (x1013+((x1014==x1015)<<x1016));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1017 = 1818552LLU;
	int16_t x1018 = -280;
	int64_t x1019 = -235416472576LL;
	volatile int16_t x1020 = 1;
	static uint64_t t32 = 28160148LLU;

	t32 = (x1017+((x1018==x1019)<<x1020));

	if (t32 != 1818552LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1041 = UINT64_MAX;
	int8_t x1042 = -1;
	uint8_t x1043 = 31U;

	t33 = (x1041+((x1042==x1043)<<x1044));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1053 = INT16_MIN;
	int64_t x1054 = 313251736068668LL;
	static int32_t x1055 = INT32_MIN;
	uint16_t x1056 = 1U;

	t34 = (x1053+((x1054==x1055)<<x1056));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1081 = 2818318772LL;
	int16_t x1082 = -1;
	int16_t x1083 = -736;
	volatile int8_t x1084 = 0;
	static int64_t t35 = -291095905297560553LL;

	t35 = (x1081+((x1082==x1083)<<x1084));

	if (t35 != 2818318772LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1125 = 7LL;
	static uint64_t x1126 = 1706028597545875404LLU;
	int64_t x1127 = -1LL;
	int32_t x1128 = 2;

	t36 = (x1125+((x1126==x1127)<<x1128));

	if (t36 != 7LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1141 = UINT64_MAX;
	volatile int64_t x1142 = -2LL;
	volatile int32_t x1143 = INT32_MIN;
	uint16_t x1144 = 5U;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x1141+((x1142==x1143)<<x1144));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1154 = -93;
	uint16_t x1155 = 3U;
	int8_t x1156 = 15;
	int32_t t38 = -128352;

	t38 = (x1153+((x1154==x1155)<<x1156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1226 = -1;
	int16_t x1227 = 3950;
	volatile uint8_t x1228 = 0U;
	int32_t t39 = -127462;

	t39 = (x1225+((x1226==x1227)<<x1228));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1229 = -7130LL;
	static int8_t x1230 = -1;
	static volatile uint32_t x1232 = 21U;
	volatile int64_t t40 = 14329436386195LL;

	t40 = (x1229+((x1230==x1231)<<x1232));

	if (t40 != 2090022LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1317 = 17U;
	int8_t x1318 = INT8_MIN;
	int32_t x1319 = INT32_MIN;
	uint8_t x1320 = 1U;
	volatile int32_t t41 = 239088713;

	t41 = (x1317+((x1318==x1319)<<x1320));

	if (t41 != 17) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1365 = 0;
	int64_t x1366 = -1LL;
	static int64_t x1367 = -1LL;
	uint16_t x1368 = 10U;
	int32_t t42 = 103;

	t42 = (x1365+((x1366==x1367)<<x1368));

	if (t42 != 1024) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1377 = -1LL;
	int16_t x1378 = 56;
	uint32_t x1379 = 284354992U;
	uint8_t x1380 = 0U;
	volatile int64_t t43 = -1888LL;

	t43 = (x1377+((x1378==x1379)<<x1380));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1425 = -1;
	int64_t x1426 = INT64_MIN;
	int16_t x1427 = -1;
	uint32_t x1428 = 0U;
	volatile int32_t t44 = 8099719;

	t44 = (x1425+((x1426==x1427)<<x1428));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x1493 = -1;
	int64_t x1494 = -1LL;
	uint16_t x1495 = 52U;
	uint8_t x1496 = 28U;

	t45 = (x1493+((x1494==x1495)<<x1496));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1497 = -1;
	uint8_t x1498 = UINT8_MAX;
	uint8_t x1499 = UINT8_MAX;
	volatile int8_t x1500 = 2;
	volatile int32_t t46 = -39676;

	t46 = (x1497+((x1498==x1499)<<x1500));

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x1514 = UINT64_MAX;
	uint32_t x1516 = 0U;
	static volatile int64_t t47 = -6757066LL;

	t47 = (x1513+((x1514==x1515)<<x1516));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1565 = UINT32_MAX;
	int32_t x1566 = -1;
	int16_t x1568 = 0;
	uint32_t t48 = UINT32_MAX;

	t48 = (x1565+((x1566==x1567)<<x1568));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x1597 = 37U;
	static uint32_t x1598 = UINT32_MAX;
	int32_t x1599 = 19704;
	volatile int16_t x1600 = 2;

	t49 = (x1597+((x1598==x1599)<<x1600));

	if (t49 != 37) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x1617 = INT32_MAX;
	int32_t x1618 = -1;
	int64_t x1619 = INT64_MAX;
	uint16_t x1620 = 6U;

	t50 = (x1617+((x1618==x1619)<<x1620));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x1677 = UINT16_MAX;
	volatile uint16_t x1678 = UINT16_MAX;
	int64_t x1679 = INT64_MAX;
	uint8_t x1680 = 3U;
	int32_t t51 = 730520985;

	t51 = (x1677+((x1678==x1679)<<x1680));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1749 = 3642;
	uint8_t x1750 = UINT8_MAX;
	int32_t x1752 = 0;
	volatile int32_t t52 = -56;

	t52 = (x1749+((x1750==x1751)<<x1752));

	if (t52 != 3642) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1765 = INT64_MIN;
	uint16_t x1766 = 44U;
	int16_t x1767 = -264;
	int8_t x1768 = 1;
	int64_t t53 = INT64_MIN;

	t53 = (x1765+((x1766==x1767)<<x1768));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1769 = 156U;
	uint32_t x1770 = 15U;
	static int64_t x1771 = 24285955568782869LL;
	int8_t x1772 = 1;

	t54 = (x1769+((x1770==x1771)<<x1772));

	if (t54 != 156) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1953 = INT32_MIN;
	int32_t x1954 = INT32_MIN;
	int16_t x1955 = INT16_MAX;

	t55 = (x1953+((x1954==x1955)<<x1956));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2017 = 876600266278860374LLU;
	int64_t x2018 = -481189LL;
	int32_t x2020 = 1;
	static uint64_t t56 = 24535LLU;

	t56 = (x2017+((x2018==x2019)<<x2020));

	if (t56 != 876600266278860374LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2113 = 1732LLU;
	volatile uint32_t x2114 = 3555U;
	uint16_t x2116 = 2U;
	uint64_t t57 = 1998LLU;

	t57 = (x2113+((x2114==x2115)<<x2116));

	if (t57 != 1732LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2141 = INT16_MIN;
	int64_t x2142 = 129276300050LL;
	volatile int8_t x2143 = -1;
	static volatile uint8_t x2144 = 0U;
	volatile int32_t t58 = 118282065;

	t58 = (x2141+((x2142==x2143)<<x2144));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2249 = 3U;
	volatile int8_t x2250 = INT8_MIN;
	int16_t x2251 = INT16_MIN;
	int16_t x2252 = 0;
	int32_t t59 = -1;

	t59 = (x2249+((x2250==x2251)<<x2252));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2281 = INT64_MAX;
	volatile int16_t x2282 = INT16_MAX;
	int64_t x2283 = -180170LL;
	static volatile int8_t x2284 = 11;
	static volatile int64_t t60 = INT64_MAX;

	t60 = (x2281+((x2282==x2283)<<x2284));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x2313 = 21U;
	static uint32_t t61 = 3U;

	t61 = (x2313+((x2314==x2315)<<x2316));

	if (t61 != 21U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2334 = INT8_MIN;
	volatile uint8_t x2335 = 2U;
	uint16_t x2336 = 11U;
	static int32_t t62 = INT32_MAX;

	t62 = (x2333+((x2334==x2335)<<x2336));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x2345 = 3LL;
	int32_t x2346 = INT32_MIN;
	volatile uint8_t x2347 = 12U;
	int32_t x2348 = 11;

	t63 = (x2345+((x2346==x2347)<<x2348));

	if (t63 != 3LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2349 = UINT32_MAX;
	int32_t x2350 = -5016829;
	int16_t x2351 = 14546;
	uint32_t t64 = UINT32_MAX;

	t64 = (x2349+((x2350==x2351)<<x2352));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x2369 = -26;
	uint8_t x2371 = 13U;

	t65 = (x2369+((x2370==x2371)<<x2372));

	if (t65 != -26) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2385 = INT32_MIN;
	uint16_t x2386 = UINT16_MAX;
	uint32_t x2388 = 0U;
	int32_t t66 = INT32_MIN;

	t66 = (x2385+((x2386==x2387)<<x2388));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x2429 = INT8_MIN;
	static int8_t x2430 = 4;
	static int32_t x2431 = INT32_MIN;
	int16_t x2432 = 0;
	int32_t t67 = -957;

	t67 = (x2429+((x2430==x2431)<<x2432));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2441 = INT32_MIN;
	volatile uint8_t x2443 = 31U;
	static uint16_t x2444 = 6U;
	int32_t t68 = INT32_MIN;

	t68 = (x2441+((x2442==x2443)<<x2444));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2485 = -12450;
	uint64_t x2486 = 3LLU;
	static int32_t x2487 = INT32_MIN;
	int8_t x2488 = 2;
	volatile int32_t t69 = 12;

	t69 = (x2485+((x2486==x2487)<<x2488));

	if (t69 != -12450) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2577 = INT64_MIN;
	volatile int16_t x2578 = INT16_MAX;
	int64_t x2579 = 1921715LL;
	volatile int8_t x2580 = 3;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x2577+((x2578==x2579)<<x2580));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2589 = UINT16_MAX;
	int16_t x2590 = INT16_MIN;
	int8_t x2591 = INT8_MIN;
	uint8_t x2592 = 7U;
	static volatile int32_t t71 = -1594;

	t71 = (x2589+((x2590==x2591)<<x2592));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2601 = -1;
	int32_t x2602 = INT32_MAX;
	volatile uint8_t x2603 = 56U;
	volatile uint8_t x2604 = 12U;
	volatile int32_t t72 = 920072045;

	t72 = (x2601+((x2602==x2603)<<x2604));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2665 = INT64_MIN;
	uint64_t x2666 = 19557055689LLU;
	uint32_t x2667 = 2U;
	static uint16_t x2668 = 1U;
	int64_t t73 = INT64_MIN;

	t73 = (x2665+((x2666==x2667)<<x2668));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2685 = INT64_MAX;
	uint64_t x2686 = 68069746419750367LLU;
	volatile int32_t x2687 = -1;
	static int64_t t74 = INT64_MAX;

	t74 = (x2685+((x2686==x2687)<<x2688));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x2701 = INT64_MIN;
	int16_t x2703 = INT16_MIN;
	uint32_t x2704 = 8U;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x2701+((x2702==x2703)<<x2704));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2741 = UINT64_MAX;
	uint64_t x2742 = 26360828765597126LLU;
	uint16_t x2743 = 130U;
	int16_t x2744 = 15;
	uint64_t t76 = UINT64_MAX;

	t76 = (x2741+((x2742==x2743)<<x2744));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2750 = 6264612339207506LLU;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (x2749+((x2750==x2751)<<x2752));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x2761 = 1;
	static int32_t x2762 = 39038368;
	uint8_t x2764 = 11U;
	int32_t t78 = 1230994;

	t78 = (x2761+((x2762==x2763)<<x2764));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2773 = INT8_MAX;
	uint64_t x2775 = 245570440624583LLU;
	int8_t x2776 = 1;

	t79 = (x2773+((x2774==x2775)<<x2776));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2933 = 153344LLU;
	static int16_t x2934 = INT16_MAX;
	static volatile uint64_t x2935 = 8346LLU;
	volatile uint8_t x2936 = 9U;
	volatile uint64_t t80 = 66361719LLU;

	t80 = (x2933+((x2934==x2935)<<x2936));

	if (t80 != 153344LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2954 = INT32_MIN;
	int32_t x2955 = INT32_MIN;
	static uint8_t x2956 = 3U;

	t81 = (x2953+((x2954==x2955)<<x2956));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2957 = -1;
	int32_t x2958 = 9326;
	uint64_t x2959 = 234096800630940LLU;
	uint32_t x2960 = 1U;
	int32_t t82 = -5746802;

	t82 = (x2957+((x2958==x2959)<<x2960));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2966 = -27739720227954090LL;
	static uint8_t x2968 = 6U;
	static uint32_t t83 = UINT32_MAX;

	t83 = (x2965+((x2966==x2967)<<x2968));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x2973 = 16064LLU;
	uint16_t x2974 = UINT16_MAX;
	volatile int32_t x2975 = -1;
	uint8_t x2976 = 25U;

	t84 = (x2973+((x2974==x2975)<<x2976));

	if (t84 != 16064LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x2993 = 1;
	int8_t x2995 = 0;
	int32_t t85 = 240302;

	t85 = (x2993+((x2994==x2995)<<x2996));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x3001 = INT32_MIN;
	uint64_t x3002 = 57417340529LLU;
	int8_t x3003 = -40;
	int8_t x3004 = 3;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x3001+((x3002==x3003)<<x3004));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x3018 = INT8_MAX;
	int16_t x3019 = INT16_MIN;
	volatile int8_t x3020 = 1;
	uint64_t t87 = UINT64_MAX;

	t87 = (x3017+((x3018==x3019)<<x3020));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3057 = 4U;
	volatile int64_t x3058 = 705LL;
	uint32_t x3059 = 5321594U;
	uint8_t x3060 = 0U;
	int32_t t88 = -94;

	t88 = (x3057+((x3058==x3059)<<x3060));

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3061 = 15U;
	int32_t x3062 = INT32_MIN;
	int16_t x3064 = 0;
	uint32_t t89 = 8U;

	t89 = (x3061+((x3062==x3063)<<x3064));

	if (t89 != 15U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3129 = INT16_MAX;
	static volatile int32_t x3130 = INT32_MIN;
	volatile int8_t x3132 = 2;

	t90 = (x3129+((x3130==x3131)<<x3132));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3149 = INT64_MIN;
	int8_t x3150 = INT8_MIN;
	uint32_t x3151 = 32257533U;
	volatile uint8_t x3152 = 3U;
	int64_t t91 = INT64_MIN;

	t91 = (x3149+((x3150==x3151)<<x3152));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x3158 = INT64_MIN;
	volatile int8_t x3159 = INT8_MIN;
	static int16_t x3160 = 1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x3157+((x3158==x3159)<<x3160));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3161 = -1257882LL;
	int32_t x3162 = -1;
	volatile int32_t x3163 = -2212143;
	uint16_t x3164 = 28U;
	int64_t t93 = -63946166945LL;

	t93 = (x3161+((x3162==x3163)<<x3164));

	if (t93 != -1257882LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3185 = -1;
	static uint64_t x3186 = 3637708361681566852LLU;
	volatile int8_t x3187 = -2;
	int16_t x3188 = 1;
	volatile int32_t t94 = -24454;

	t94 = (x3185+((x3186==x3187)<<x3188));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x3265 = -1172805372062LL;
	int64_t x3266 = INT64_MAX;
	int8_t x3267 = 2;
	static uint16_t x3268 = 6U;
	volatile int64_t t95 = 221899704475LL;

	t95 = (x3265+((x3266==x3267)<<x3268));

	if (t95 != -1172805372062LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3285 = 7LLU;
	int8_t x3286 = INT8_MIN;
	uint8_t x3288 = 21U;
	volatile uint64_t t96 = 42723826875970LLU;

	t96 = (x3285+((x3286==x3287)<<x3288));

	if (t96 != 7LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x3369 = INT8_MIN;
	int32_t x3371 = INT32_MIN;
	volatile uint8_t x3372 = 1U;
	int32_t t97 = -380880;

	t97 = (x3369+((x3370==x3371)<<x3372));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3374 = 471U;
	int16_t x3376 = 19;
	volatile int32_t t98 = 106455405;

	t98 = (x3373+((x3374==x3375)<<x3376));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3379 = 51U;
	static uint32_t x3380 = 3U;
	volatile uint64_t t99 = 44LLU;

	t99 = (x3377+((x3378==x3379)<<x3380));

	if (t99 != 137621581657201LLU) { NG(); } else { ; }
	
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

