#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x5 = 15695841403LLU;
volatile uint16_t x6 = 1U;
uint8_t x7 = 20U;
uint32_t x8 = UINT32_MAX;
int64_t x34 = 1137586339286847926LL;
static int64_t t1 = -15196342LL;
uint64_t x53 = 4177584858LLU;
static volatile uint32_t x168 = 2644U;
static int8_t x198 = -4;
int64_t t6 = 64221090013243LL;
uint32_t x208 = 2841263U;
int32_t t10 = 1796;
uint32_t x440 = 515649U;
static uint16_t x455 = 2U;
volatile uint64_t t16 = 11644447330LLU;
volatile int32_t x518 = INT32_MIN;
static uint8_t x519 = 4U;
volatile int8_t x520 = -2;
static volatile int32_t t17 = 5655;
int64_t x521 = -1LL;
uint16_t x522 = 2U;
uint8_t x562 = 97U;
int8_t x563 = 13;
uint16_t x579 = 2U;
uint64_t t21 = 8528759LLU;
uint8_t x592 = 6U;
static uint32_t x637 = UINT32_MAX;
volatile uint32_t t23 = 485870824U;
static int32_t x643 = 1;
volatile int64_t t27 = -1313043LL;
volatile uint16_t x940 = UINT16_MAX;
uint64_t t28 = 1587024164308876757LLU;
uint64_t x954 = 479476082794617LLU;
uint32_t x956 = UINT32_MAX;
volatile uint32_t x965 = 1165911U;
int32_t x966 = INT32_MIN;
static volatile uint8_t x1099 = 6U;
int16_t x1115 = 2;
volatile int32_t x1116 = 10;
int32_t x1137 = INT32_MAX;
static int64_t x1138 = INT64_MIN;
volatile uint8_t x1149 = 13U;
volatile uint8_t x1151 = 1U;
uint64_t x1174 = 14436341507065LLU;
uint8_t x1379 = 0U;
int8_t x1444 = INT8_MIN;
int16_t x1454 = INT16_MAX;
static volatile int8_t x1456 = INT8_MAX;
int16_t x1480 = INT16_MAX;
static volatile int16_t x1482 = 91;
int8_t x1483 = 31;
static uint8_t x1503 = 1U;
int64_t t47 = 16300LL;
int16_t x1626 = INT16_MAX;
static uint8_t x1627 = 13U;
volatile uint64_t t49 = 52LLU;
int16_t x1758 = -1;
int8_t x1760 = 3;
int64_t x1854 = INT64_MIN;
uint16_t x1856 = 100U;
static int64_t t52 = 2648959631448148866LL;
static int16_t x1927 = 1;
uint16_t x1928 = UINT16_MAX;
int16_t x1942 = 12361;
volatile uint8_t x1944 = 23U;
uint16_t x1966 = 1U;
uint8_t x2111 = 23U;
int32_t x2112 = INT32_MIN;
int16_t x2126 = INT16_MIN;
int8_t x2127 = 13;
volatile uint32_t x2128 = UINT32_MAX;
static volatile uint32_t t60 = 49027988U;
int16_t x2133 = -2836;
static int16_t x2136 = 81;
static volatile int8_t x2163 = 0;
uint16_t x2164 = 1U;
int16_t x2171 = 0;
int16_t x2233 = -1;
uint8_t x2235 = 3U;
uint8_t x2236 = 38U;
volatile int8_t x2290 = -2;
int32_t x2604 = INT32_MIN;
int64_t x2737 = -13493LL;
uint64_t x2740 = 5346709543175881434LLU;
int64_t x2872 = INT64_MIN;
static volatile int64_t t75 = 72098983LL;
int64_t x2914 = INT64_MIN;
static uint64_t x2929 = 748457LLU;
static uint16_t x2930 = UINT16_MAX;
int32_t x2957 = -1;
static int32_t t78 = 130009224;
volatile int64_t t80 = -3847505874242LL;
volatile uint64_t x3061 = 5LLU;
int32_t x3064 = 29590924;
uint8_t x3080 = 4U;
int8_t x3082 = -1;
uint32_t x3084 = 54880U;
volatile uint64_t x3102 = 83853151423LLU;
static int8_t x3243 = 24;
volatile int16_t x3275 = 0;
static uint64_t x3314 = 3841835815LLU;
volatile uint64_t t92 = 3943920LLU;
int32_t x3322 = INT32_MAX;
static uint8_t x3323 = 25U;
static int32_t t93 = 160;
uint32_t x3349 = UINT32_MAX;
volatile uint32_t t94 = 1848U;
volatile int32_t t96 = -284419;
static volatile int32_t t98 = 4511;


void f0(void) {
	uint64_t t0 = 4724LLU;

	t0 = (((x5/x6)>>x7)^x8);

	if (t0 != 4294952327LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x33 = INT8_MIN;
	uint8_t x35 = 32U;
	int64_t x36 = -1LL;

	t1 = (((x33/x34)>>x35)^x36);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x49 = 1234504179990LLU;
	int8_t x50 = INT8_MIN;
	uint8_t x51 = 10U;
	int16_t x52 = -1;
	uint64_t t2 = UINT64_MAX;

	t2 = (((x49/x50)>>x51)^x52);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x54 = 397U;
	uint8_t x55 = 11U;
	uint8_t x56 = 1U;
	volatile uint64_t t3 = 123LLU;

	t3 = (((x53/x54)>>x55)^x56);

	if (t3 != 5139LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x165 = 499883406LLU;
	uint64_t x166 = 277545LLU;
	int8_t x167 = 1;
	volatile uint64_t t4 = 2662005LLU;

	t4 = (((x165/x166)>>x167)^x168);

	if (t4 != 2512LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x185 = 569;
	static uint64_t x186 = UINT64_MAX;
	int8_t x187 = 3;
	int16_t x188 = 1;
	uint64_t t5 = 17132400264331886LLU;

	t5 = (((x185/x186)>>x187)^x188);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x197 = -994792LL;
	int8_t x199 = 1;
	volatile int64_t x200 = INT64_MIN;

	t6 = (((x197/x198)>>x199)^x200);

	if (t6 != -9223372036854651459LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x201 = -1;
	static int16_t x202 = -14;
	static uint32_t x203 = 3U;
	volatile uint32_t x204 = 1U;
	uint32_t t7 = 0U;

	t7 = (((x201/x202)>>x203)^x204);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x205 = 9164;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = 7;
	volatile uint32_t t8 = 3903516U;

	t8 = (((x205/x206)>>x207)^x208);

	if (t8 != 2841263U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x213 = 123531483U;
	static int64_t x214 = 526LL;
	volatile uint16_t x215 = 6U;
	static int32_t x216 = INT32_MIN;
	static int64_t t9 = 0LL;

	t9 = (((x213/x214)>>x215)^x216);

	if (t9 != -2147479979LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x289 = -1;
	int8_t x290 = INT8_MIN;
	uint8_t x291 = 15U;
	int8_t x292 = INT8_MIN;

	t10 = (((x289/x290)>>x291)^x292);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x309 = 6814232034528LLU;
	uint32_t x310 = UINT32_MAX;
	volatile int8_t x311 = 1;
	uint64_t x312 = UINT64_MAX;
	static uint64_t t11 = 192LLU;

	t11 = (((x309/x310)>>x311)^x312);

	if (t11 != 18446744073709550822LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x349 = INT64_MAX;
	static int16_t x350 = 223;
	uint16_t x351 = 0U;
	int32_t x352 = -65086335;
	static volatile int64_t t12 = 51405438767363925LL;

	t12 = (((x349/x350)>>x351)^x352);

	if (t12 != -41360412786406647LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x357 = -1244;
	int64_t x358 = 16572990693LL;
	static int8_t x359 = 0;
	static int16_t x360 = 12;
	static volatile int64_t t13 = 19562301090112355LL;

	t13 = (((x357/x358)>>x359)^x360);

	if (t13 != 12LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x397 = -1;
	volatile int16_t x398 = INT16_MIN;
	static uint16_t x399 = 4U;
	uint32_t x400 = 4174713U;
	static uint32_t t14 = 30U;

	t14 = (((x397/x398)>>x399)^x400);

	if (t14 != 4174713U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = -1;
	volatile uint64_t x439 = 1LLU;
	volatile uint32_t t15 = 4U;

	t15 = (((x437/x438)>>x439)^x440);

	if (t15 != 515585U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x453 = 97;
	uint64_t x454 = UINT64_MAX;
	int16_t x456 = INT16_MAX;

	t16 = (((x453/x454)>>x455)^x456);

	if (t16 != 32767LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x517 = 3812U;

	t17 = (((x517/x518)>>x519)^x520);

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x523 = 7U;
	int64_t x524 = 0LL;
	static volatile int64_t t18 = -941LL;

	t18 = (((x521/x522)>>x523)^x524);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x561 = INT16_MAX;
	uint64_t x564 = 2502156248804214LLU;
	volatile uint64_t t19 = 1281411LLU;

	t19 = (((x561/x562)>>x563)^x564);

	if (t19 != 2502156248804214LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x573 = -1;
	int16_t x574 = -1903;
	uint8_t x575 = 2U;
	volatile int8_t x576 = INT8_MIN;
	volatile int32_t t20 = -384324;

	t20 = (((x573/x574)>>x575)^x576);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x577 = 248017698433742LLU;
	int64_t x578 = INT64_MIN;
	int8_t x580 = INT8_MAX;

	t21 = (((x577/x578)>>x579)^x580);

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x589 = -1902;
	int32_t x590 = INT32_MIN;
	uint8_t x591 = 24U;
	volatile int32_t t22 = -1166;

	t22 = (((x589/x590)>>x591)^x592);

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x638 = INT8_MAX;
	volatile uint8_t x639 = 5U;
	volatile int8_t x640 = INT8_MAX;

	t23 = (((x637/x638)>>x639)^x640);

	if (t23 != 1056831U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x641 = 265049785707271624LL;
	volatile uint32_t x642 = 101U;
	static int8_t x644 = 0;
	int64_t t24 = -133359196LL;

	t24 = (((x641/x642)>>x643)^x644);

	if (t24 != 1312127652016196LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x797 = INT8_MIN;
	uint16_t x798 = UINT16_MAX;
	volatile uint8_t x799 = 3U;
	int8_t x800 = -1;
	volatile int32_t t25 = -165;

	t25 = (((x797/x798)>>x799)^x800);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x805 = 492713;
	int32_t x806 = INT32_MIN;
	int8_t x807 = 4;
	int8_t x808 = INT8_MIN;
	volatile int32_t t26 = 80881;

	t26 = (((x805/x806)>>x807)^x808);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x821 = -22081674547LL;
	static int64_t x822 = INT64_MIN;
	uint8_t x823 = 4U;
	static int8_t x824 = 0;

	t27 = (((x821/x822)>>x823)^x824);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x937 = INT64_MAX;
	volatile uint64_t x938 = UINT64_MAX;
	volatile int32_t x939 = 0;

	t28 = (((x937/x938)>>x939)^x940);

	if (t28 != 65535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x953 = 0;
	volatile uint8_t x955 = 1U;
	volatile uint64_t t29 = 27257084979705LLU;

	t29 = (((x953/x954)>>x955)^x956);

	if (t29 != 4294967295LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x967 = 2;
	uint32_t x968 = 660804440U;
	volatile uint32_t t30 = 1893103098U;

	t30 = (((x965/x966)>>x967)^x968);

	if (t30 != 660804440U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1013 = INT64_MAX;
	uint8_t x1014 = UINT8_MAX;
	uint8_t x1015 = 19U;
	volatile int16_t x1016 = INT16_MAX;
	static volatile int64_t t31 = 15667LL;

	t31 = (((x1013/x1014)>>x1015)^x1016);

	if (t31 != 68988989423LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1069 = 0;
	static volatile int32_t x1070 = -1;
	static int16_t x1071 = 2;
	int32_t x1072 = 4;
	int32_t t32 = -1;

	t32 = (((x1069/x1070)>>x1071)^x1072);

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1089 = 60828U;
	volatile int16_t x1090 = INT16_MIN;
	uint16_t x1091 = 5U;
	uint64_t x1092 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

	t33 = (((x1089/x1090)>>x1091)^x1092);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1097 = UINT16_MAX;
	volatile int16_t x1098 = INT16_MAX;
	int32_t x1100 = 0;
	volatile int32_t t34 = -864884;

	t34 = (((x1097/x1098)>>x1099)^x1100);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1113 = 1;
	static volatile int8_t x1114 = 6;
	volatile int32_t t35 = 583084;

	t35 = (((x1113/x1114)>>x1115)^x1116);

	if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1139 = 6;
	static int32_t x1140 = INT32_MAX;
	volatile int64_t t36 = -7689039350316LL;

	t36 = (((x1137/x1138)>>x1139)^x1140);

	if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1150 = -252079740LL;
	uint32_t x1152 = UINT32_MAX;
	static volatile int64_t t37 = 4305859547LL;

	t37 = (((x1149/x1150)>>x1151)^x1152);

	if (t37 != 4294967295LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1173 = 55U;
	int16_t x1175 = 0;
	uint32_t x1176 = UINT32_MAX;
	uint64_t t38 = 24985157LLU;

	t38 = (((x1173/x1174)>>x1175)^x1176);

	if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1369 = -1;
	uint64_t x1370 = UINT64_MAX;
	uint8_t x1371 = 1U;
	int64_t x1372 = INT64_MIN;
	volatile uint64_t t39 = 248LLU;

	t39 = (((x1369/x1370)>>x1371)^x1372);

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1377 = UINT32_MAX;
	uint16_t x1378 = 234U;
	volatile int64_t x1380 = INT64_MIN;
	int64_t t40 = 4129092LL;

	t40 = (((x1377/x1378)>>x1379)^x1380);

	if (t40 != -9223372036836421247LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1385 = -23;
	int64_t x1386 = -218359936761894LL;
	uint8_t x1387 = 2U;
	int8_t x1388 = INT8_MIN;
	volatile int64_t t41 = -1764LL;

	t41 = (((x1385/x1386)>>x1387)^x1388);

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x1441 = -2434;
	int16_t x1442 = -9;
	uint8_t x1443 = 7U;
	volatile int32_t t42 = -227;

	t42 = (((x1441/x1442)>>x1443)^x1444);

	if (t42 != -126) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1453 = 1771917U;
	static volatile uint8_t x1455 = 3U;
	volatile uint32_t t43 = 46690383U;

	t43 = (((x1453/x1454)>>x1455)^x1456);

	if (t43 != 121U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1469 = INT64_MAX;
	int32_t x1470 = 5022573;
	int8_t x1471 = 11;
	static volatile uint8_t x1472 = UINT8_MAX;
	volatile int64_t t44 = -14967121242410LL;

	t44 = (((x1469/x1470)>>x1471)^x1472);

	if (t44 != 896671933LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1477 = -644LL;
	static int32_t x1478 = INT32_MIN;
	int8_t x1479 = 0;
	int64_t t45 = 527409824997LL;

	t45 = (((x1477/x1478)>>x1479)^x1480);

	if (t45 != 32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1481 = -1;
	volatile uint16_t x1484 = 931U;
	volatile int32_t t46 = -101;

	t46 = (((x1481/x1482)>>x1483)^x1484);

	if (t46 != 931) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x1501 = INT16_MAX;
	volatile int64_t x1502 = INT64_MAX;
	int16_t x1504 = INT16_MIN;

	t47 = (((x1501/x1502)>>x1503)^x1504);

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1625 = 13032U;
	int8_t x1628 = -1;
	volatile int32_t t48 = 9160715;

	t48 = (((x1625/x1626)>>x1627)^x1628);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1677 = -2895989515LL;
	uint64_t x1678 = 9287LLU;
	int8_t x1679 = 2;
	int16_t x1680 = 9;

	t49 = (((x1677/x1678)>>x1679)^x1680);

	if (t49 != 496574353149921LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1725 = INT16_MIN;
	int64_t x1726 = -1LL;
	int8_t x1727 = 13;
	int64_t x1728 = INT64_MIN;
	static volatile int64_t t50 = 59577865566LL;

	t50 = (((x1725/x1726)>>x1727)^x1728);

	if (t50 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x1757 = INT16_MIN;
	static uint8_t x1759 = 0U;
	static int32_t t51 = 478;

	t51 = (((x1757/x1758)>>x1759)^x1760);

	if (t51 != 32771) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1853 = 32;
	static volatile uint8_t x1855 = 1U;

	t52 = (((x1853/x1854)>>x1855)^x1856);

	if (t52 != 100LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1925 = -1;
	volatile int64_t x1926 = INT64_MIN;
	volatile int64_t t53 = 372887LL;

	t53 = (((x1925/x1926)>>x1927)^x1928);

	if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1941 = INT64_MAX;
	uint8_t x1943 = 1U;
	int64_t t54 = 1775590688084471LL;

	t54 = (((x1941/x1942)>>x1943)^x1944);

	if (t54 != 373083570781257LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1965 = UINT16_MAX;
	uint8_t x1967 = 7U;
	volatile int16_t x1968 = INT16_MIN;
	volatile int32_t t55 = -1;

	t55 = (((x1965/x1966)>>x1967)^x1968);

	if (t55 != -32257) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2033 = UINT64_MAX;
	uint16_t x2034 = 1U;
	uint16_t x2035 = 2U;
	uint32_t x2036 = 670229648U;
	uint64_t t56 = 48LLU;

	t56 = (((x2033/x2034)>>x2035)^x2036);

	if (t56 != 4611686017757158255LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2037 = -1LL;
	uint8_t x2038 = 33U;
	uint16_t x2039 = 0U;
	volatile int32_t x2040 = INT32_MAX;
	static int64_t t57 = 229727058514LL;

	t57 = (((x2037/x2038)>>x2039)^x2040);

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2045 = -1LL;
	volatile int32_t x2046 = -1;
	uint8_t x2047 = 12U;
	int16_t x2048 = 9111;
	int64_t t58 = 189968756163339LL;

	t58 = (((x2045/x2046)>>x2047)^x2048);

	if (t58 != 9111LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2109 = -3;
	uint64_t x2110 = 3084150LLU;
	volatile uint64_t t59 = 21LLU;

	t59 = (((x2109/x2110)>>x2111)^x2112);

	if (t59 != 18446744071562780975LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2125 = INT32_MIN;

	t60 = (((x2125/x2126)>>x2127)^x2128);

	if (t60 != 4294967287U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2134 = INT64_MAX;
	uint32_t x2135 = 2U;
	volatile int64_t t61 = 3601929294011809LL;

	t61 = (((x2133/x2134)>>x2135)^x2136);

	if (t61 != 81LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2161 = 0;
	uint16_t x2162 = 2U;
	volatile int32_t t62 = -198459597;

	t62 = (((x2161/x2162)>>x2163)^x2164);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2169 = -1;
	int16_t x2170 = -3;
	static uint16_t x2172 = 8821U;
	static int32_t t63 = 1;

	t63 = (((x2169/x2170)>>x2171)^x2172);

	if (t63 != 8821) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x2177 = 847U;
	int8_t x2178 = INT8_MAX;
	int8_t x2179 = 7;
	volatile int8_t x2180 = -4;
	int32_t t64 = -4;

	t64 = (((x2177/x2178)>>x2179)^x2180);

	if (t64 != -4) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2234 = INT64_MIN;
	int64_t t65 = 4732LL;

	t65 = (((x2233/x2234)>>x2235)^x2236);

	if (t65 != 38LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2253 = INT32_MAX;
	uint64_t x2254 = 1863828782LLU;
	uint32_t x2255 = 36U;
	static volatile int64_t x2256 = -1LL;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (((x2253/x2254)>>x2255)^x2256);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x2289 = -23994;
	int8_t x2291 = 1;
	uint64_t x2292 = 195035023362592793LLU;
	uint64_t t67 = 51LLU;

	t67 = (((x2289/x2290)>>x2291)^x2292);

	if (t67 != 195035023362590583LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2601 = 8753U;
	volatile int64_t x2602 = INT64_MIN;
	int8_t x2603 = 20;
	volatile int64_t t68 = -2062556375LL;

	t68 = (((x2601/x2602)>>x2603)^x2604);

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x2673 = INT16_MAX;
	static int64_t x2674 = INT64_MIN;
	static volatile uint16_t x2675 = 3U;
	int64_t x2676 = INT64_MAX;
	int64_t t69 = INT64_MAX;

	t69 = (((x2673/x2674)>>x2675)^x2676);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2717 = -179;
	static int8_t x2718 = INT8_MIN;
	volatile int8_t x2719 = 15;
	int8_t x2720 = -1;
	int32_t t70 = -1;

	t70 = (((x2717/x2718)>>x2719)^x2720);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2738 = INT64_MAX;
	int16_t x2739 = 1;
	uint64_t t71 = 3985696338653727460LLU;

	t71 = (((x2737/x2738)>>x2739)^x2740);

	if (t71 != 5346709543175881434LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2829 = -921LL;
	int32_t x2830 = -205772556;
	int8_t x2831 = 0;
	uint16_t x2832 = 3565U;
	int64_t t72 = 6474LL;

	t72 = (((x2829/x2830)>>x2831)^x2832);

	if (t72 != 3565LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2869 = 0LLU;
	int64_t x2870 = 23840174LL;
	uint64_t x2871 = 0LLU;
	volatile uint64_t t73 = 0LLU;

	t73 = (((x2869/x2870)>>x2871)^x2872);

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x2877 = 3U;
	static int32_t x2878 = INT32_MAX;
	uint16_t x2879 = 1U;
	int64_t x2880 = INT64_MIN;
	volatile int64_t t74 = INT64_MIN;

	t74 = (((x2877/x2878)>>x2879)^x2880);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x2889 = UINT16_MAX;
	int64_t x2890 = INT64_MIN;
	static int16_t x2891 = 1;
	volatile int32_t x2892 = 7759205;

	t75 = (((x2889/x2890)>>x2891)^x2892);

	if (t75 != 7759205LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x2913 = UINT16_MAX;
	static uint8_t x2915 = 32U;
	static uint64_t x2916 = UINT64_MAX;
	static uint64_t t76 = UINT64_MAX;

	t76 = (((x2913/x2914)>>x2915)^x2916);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2931 = 1;
	static uint32_t x2932 = 18U;
	uint64_t t77 = 6198153321234642LLU;

	t77 = (((x2929/x2930)>>x2931)^x2932);

	if (t77 != 23LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2958 = 64U;
	volatile uint8_t x2959 = 6U;
	uint8_t x2960 = UINT8_MAX;

	t78 = (((x2957/x2958)>>x2959)^x2960);

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2981 = 158U;
	uint16_t x2982 = 297U;
	int16_t x2983 = 8;
	static int64_t x2984 = -62380789410906594LL;
	int64_t t79 = 2324478364LL;

	t79 = (((x2981/x2982)>>x2983)^x2984);

	if (t79 != -62380789410906594LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3053 = INT32_MIN;
	volatile int64_t x3054 = INT64_MAX;
	volatile uint16_t x3055 = 6U;
	uint8_t x3056 = UINT8_MAX;

	t80 = (((x3053/x3054)>>x3055)^x3056);

	if (t80 != 255LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x3062 = 2U;
	static uint16_t x3063 = 8U;
	volatile uint64_t t81 = 608066493302942121LLU;

	t81 = (((x3061/x3062)>>x3063)^x3064);

	if (t81 != 29590924LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3077 = -1;
	int16_t x3078 = INT16_MIN;
	static uint16_t x3079 = 1U;
	volatile int32_t t82 = -1;

	t82 = (((x3077/x3078)>>x3079)^x3080);

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3081 = -1;
	static uint16_t x3083 = 14U;
	static volatile uint32_t t83 = 1467819U;

	t83 = (((x3081/x3082)>>x3083)^x3084);

	if (t83 != 54880U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3101 = INT64_MIN;
	int8_t x3103 = 11;
	int8_t x3104 = -1;
	volatile uint64_t t84 = 46119773510LLU;

	t84 = (((x3101/x3102)>>x3103)^x3104);

	if (t84 != 18446744073709497907LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3109 = -1;
	static uint16_t x3110 = 13U;
	static int16_t x3111 = 21;
	int16_t x3112 = INT16_MAX;
	int32_t t85 = 1;

	t85 = (((x3109/x3110)>>x3111)^x3112);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3113 = 2630U;
	int8_t x3114 = 3;
	uint16_t x3115 = 4U;
	int8_t x3116 = INT8_MIN;
	int32_t t86 = -57184;

	t86 = (((x3113/x3114)>>x3115)^x3116);

	if (t86 != -74) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3145 = INT8_MAX;
	int64_t x3146 = INT64_MIN;
	int8_t x3147 = 0;
	int32_t x3148 = 7;
	int64_t t87 = -4252LL;

	t87 = (((x3145/x3146)>>x3147)^x3148);

	if (t87 != 7LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x3225 = INT64_MAX;
	uint32_t x3226 = 18391U;
	volatile uint16_t x3227 = 1U;
	uint16_t x3228 = UINT16_MAX;
	int64_t t88 = -8576LL;

	t88 = (((x3225/x3226)>>x3227)^x3228);

	if (t88 != 250757762931098LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3241 = 1817U;
	volatile int32_t x3242 = INT32_MIN;
	int16_t x3244 = -415;
	volatile int32_t t89 = -534343132;

	t89 = (((x3241/x3242)>>x3243)^x3244);

	if (t89 != -415) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x3253 = INT16_MAX;
	uint64_t x3254 = 6993453857018649368LLU;
	volatile int32_t x3255 = 1;
	int64_t x3256 = INT64_MIN;
	uint64_t t90 = 51296606LLU;

	t90 = (((x3253/x3254)>>x3255)^x3256);

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x3273 = UINT64_MAX;
	uint16_t x3274 = UINT16_MAX;
	volatile uint64_t x3276 = 5299398305848721LLU;
	uint64_t t91 = 118LLU;

	t91 = (((x3273/x3274)>>x3275)^x3276);

	if (t91 != 5580877577461136LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x3313 = -1;
	uint32_t x3315 = 30U;
	uint16_t x3316 = 4513U;

	t92 = (((x3313/x3314)>>x3315)^x3316);

	if (t92 != 4517LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x3321 = 4U;
	int16_t x3324 = -1;

	t93 = (((x3321/x3322)>>x3323)^x3324);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x3350 = INT8_MAX;
	uint8_t x3351 = 15U;
	volatile int8_t x3352 = -1;

	t94 = (((x3349/x3350)>>x3351)^x3352);

	if (t94 != 4294966263U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3389 = -1;
	static int32_t x3390 = -1;
	volatile int8_t x3391 = 1;
	int32_t x3392 = -6796;
	int32_t t95 = -172;

	t95 = (((x3389/x3390)>>x3391)^x3392);

	if (t95 != -6796) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3397 = INT8_MIN;
	int32_t x3398 = -3;
	static int8_t x3399 = 0;
	uint8_t x3400 = 57U;

	t96 = (((x3397/x3398)>>x3399)^x3400);

	if (t96 != 19) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3417 = 45831681586581LLU;
	int64_t x3418 = -1LL;
	uint8_t x3419 = 5U;
	uint64_t x3420 = UINT64_MAX;
	uint64_t t97 = UINT64_MAX;

	t97 = (((x3417/x3418)>>x3419)^x3420);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x3445 = INT16_MIN;
	volatile int32_t x3446 = 4602054;
	int8_t x3447 = 3;
	static int16_t x3448 = INT16_MAX;

	t98 = (((x3445/x3446)>>x3447)^x3448);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x3461 = INT32_MAX;
	int64_t x3462 = INT64_MAX;
	uint8_t x3463 = 9U;
	int8_t x3464 = -1;
	volatile int64_t t99 = 691LL;

	t99 = (((x3461/x3462)>>x3463)^x3464);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

