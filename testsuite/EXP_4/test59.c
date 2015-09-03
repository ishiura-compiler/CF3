#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x113 = INT8_MAX;
int32_t x114 = INT32_MIN;
int64_t x187 = -1LL;
uint32_t x234 = 21U;
static uint64_t x235 = UINT64_MAX;
uint8_t x266 = 13U;
int64_t x420 = 44229013LL;
volatile int32_t t9 = 985999;
int16_t x591 = -1;
int16_t x592 = -1;
uint8_t x666 = 13U;
int16_t x676 = -1;
volatile uint64_t x744 = UINT64_MAX;
int64_t x753 = 647533498733676967LL;
int64_t t16 = 2LL;
int32_t t17 = 6;
volatile int32_t t19 = 97985;
volatile int16_t x1057 = 138;
static uint16_t x1059 = UINT16_MAX;
int8_t x1080 = INT8_MIN;
static uint8_t x1127 = 55U;
uint16_t x1145 = UINT16_MAX;
uint64_t x1146 = UINT64_MAX;
uint64_t x1185 = UINT64_MAX;
volatile int16_t x1187 = INT16_MIN;
uint32_t x1331 = UINT32_MAX;
uint16_t x1368 = 7U;
uint16_t x1382 = 0U;
int16_t x1384 = INT16_MAX;
int8_t x1386 = 13;
uint32_t x1441 = UINT32_MAX;
int64_t x1443 = 25776231720LL;
volatile uint32_t t34 = 6U;
static volatile int32_t t36 = INT32_MAX;
int32_t t38 = -1;
uint64_t x1541 = UINT64_MAX;
int8_t x1543 = -1;
static int16_t x1625 = 50;
volatile uint16_t x1633 = 0U;
volatile int16_t x1636 = INT16_MIN;
static uint8_t x1673 = UINT8_MAX;
uint8_t x1674 = 1U;
int16_t x1675 = INT16_MAX;
int64_t t45 = 619LL;
int32_t x1841 = 762390;
int32_t x1880 = -1;
volatile int32_t t47 = -5826413;
int16_t x2015 = -2;
int64_t x2063 = -1LL;
int32_t t52 = -711;
int32_t t56 = -10854;
uint8_t x2231 = UINT8_MAX;
int32_t t57 = 623463;
static int8_t x2323 = -1;
volatile int32_t t58 = 509;
volatile int8_t x2325 = INT8_MAX;
volatile int32_t x2327 = -99;
int32_t t59 = -27173;
static uint8_t x2406 = 13U;
volatile int8_t x2407 = INT8_MIN;
volatile int64_t x2455 = INT64_MAX;
volatile uint8_t x2494 = 0U;
int64_t x2497 = INT64_MAX;
uint32_t x2498 = UINT32_MAX;
uint32_t x2499 = UINT32_MAX;
static int64_t t66 = -243844135141LL;
int64_t x2547 = -1LL;
static int8_t x2549 = INT8_MAX;
volatile int8_t x2551 = INT8_MIN;
volatile int64_t x2610 = INT64_MIN;
int8_t x2647 = INT8_MIN;
volatile int16_t x2650 = INT16_MIN;
uint64_t x2695 = 4LLU;
int32_t t74 = 74;
int16_t x2906 = -1;
int32_t x2964 = -1;
int64_t x3033 = 11954LL;
volatile int16_t x3036 = INT16_MIN;
uint8_t x3057 = 0U;
int64_t x3058 = INT64_MAX;
static uint8_t x3059 = 3U;
static int8_t x3099 = INT8_MAX;
int8_t x3100 = INT8_MIN;
volatile int8_t x3113 = INT8_MAX;
int16_t x3116 = 0;
static uint64_t x3185 = 205355LLU;
volatile uint64_t t90 = 4995929LLU;
uint16_t x3190 = 15U;
uint64_t t91 = 5706476602865713132LLU;
int8_t x3227 = -1;
int16_t x3251 = -7205;
volatile uint8_t x3273 = 96U;
volatile int64_t x3328 = 2886714LL;
int32_t t97 = 213697;
int64_t x3364 = 150323865270LL;


void f0(void) {
	int32_t x115 = INT32_MIN;
	static volatile int32_t x116 = INT32_MAX;
	volatile int32_t t0 = -1712;

	t0 = (x113>>(x114%(x115+x116)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x177 = 36U;
	int8_t x178 = 11;
	int16_t x179 = -41;
	int32_t x180 = 8;
	volatile uint32_t t1 = 210514089U;

	t1 = (x177>>(x178%(x179+x180)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x185 = 6U;
	int64_t x186 = INT64_MAX;
	static volatile int64_t x188 = 0LL;
	int32_t t2 = 297;

	t2 = (x185>>(x186%(x187+x188)));

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x233 = INT8_MAX;
	static int32_t x236 = INT32_MAX;
	int32_t t3 = 0;

	t3 = (x233>>(x234%(x235+x236)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x265 = 27U;
	volatile int64_t x267 = -1LL;
	volatile int32_t x268 = 2;
	volatile int32_t t4 = -6188;

	t4 = (x265>>(x266%(x267+x268)));

	if (t4 != 27) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x277 = 3LLU;
	uint32_t x278 = 180371U;
	int16_t x279 = -1;
	uint8_t x280 = 7U;
	volatile uint64_t t5 = 15LLU;

	t5 = (x277>>(x278%(x279+x280)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x377 = 1450LL;
	static uint8_t x378 = 37U;
	int8_t x379 = -1;
	static uint32_t x380 = 48812U;
	int64_t t6 = -15885940088333LL;

	t6 = (x377>>(x378%(x379+x380)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x417 = 91;
	uint32_t x418 = 4U;
	uint32_t x419 = UINT32_MAX;
	int32_t t7 = 21;

	t7 = (x417>>(x418%(x419+x420)));

	if (t7 != 5) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x549 = INT16_MAX;
	uint8_t x550 = 0U;
	int64_t x551 = INT64_MAX;
	uint64_t x552 = 87170272410LLU;
	static volatile int32_t t8 = -57;

	t8 = (x549>>(x550%(x551+x552)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x577 = UINT16_MAX;
	static volatile uint16_t x578 = 926U;
	volatile int16_t x579 = -1;
	volatile int8_t x580 = INT8_MIN;

	t9 = (x577>>(x578%(x579+x580)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x589 = 36043695U;
	static int16_t x590 = INT16_MAX;
	uint32_t t10 = 226703665U;

	t10 = (x589>>(x590%(x591+x592)));

	if (t10 != 18021847U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x617 = UINT64_MAX;
	int32_t x618 = INT32_MIN;
	int8_t x619 = -1;
	int8_t x620 = 9;
	static volatile uint64_t t11 = UINT64_MAX;

	t11 = (x617>>(x618%(x619+x620)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x665 = UINT32_MAX;
	int8_t x667 = -1;
	uint8_t x668 = 116U;
	volatile uint32_t t12 = 3706U;

	t12 = (x665>>(x666%(x667+x668)));

	if (t12 != 524287U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x673 = INT16_MAX;
	uint32_t x674 = UINT32_MAX;
	static int8_t x675 = -1;
	int32_t t13 = -7378120;

	t13 = (x673>>(x674%(x675+x676)));

	if (t13 != 16383) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x741 = UINT16_MAX;
	uint8_t x742 = 1U;
	int64_t x743 = 390365586508LL;
	int32_t t14 = -432;

	t14 = (x741>>(x742%(x743+x744)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x754 = 35U;
	int16_t x755 = INT16_MIN;
	static int64_t x756 = -10533263106LL;
	int64_t t15 = -2212LL;

	t15 = (x753>>(x754%(x755+x756)));

	if (t15 != 18845705LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x877 = 1117579515097953LL;
	int16_t x878 = 13;
	int8_t x879 = INT8_MAX;
	volatile uint8_t x880 = 3U;

	t16 = (x877>>(x878%(x879+x880)));

	if (t16 != 136423280651LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x881 = UINT16_MAX;
	int8_t x882 = 31;
	uint8_t x883 = 14U;
	uint32_t x884 = UINT32_MAX;

	t17 = (x881>>(x882%(x883+x884)));

	if (t17 != 2047) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x949 = INT16_MAX;
	uint8_t x950 = 25U;
	int64_t x951 = INT64_MAX;
	int32_t x952 = INT32_MIN;
	volatile int32_t t18 = 1015682;

	t18 = (x949>>(x950%(x951+x952)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1029 = 2066443;
	static volatile int16_t x1030 = 1;
	static volatile uint32_t x1031 = 1U;
	static int16_t x1032 = INT16_MIN;

	t19 = (x1029>>(x1030%(x1031+x1032)));

	if (t19 != 1033221) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1037 = 122U;
	int16_t x1038 = INT16_MAX;
	volatile int16_t x1039 = INT16_MAX;
	static volatile int16_t x1040 = INT16_MIN;
	int32_t t20 = 2978989;

	t20 = (x1037>>(x1038%(x1039+x1040)));

	if (t20 != 122) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1041 = 803U;
	int8_t x1042 = 1;
	int16_t x1043 = INT16_MAX;
	uint32_t x1044 = UINT32_MAX;
	static int32_t t21 = -691638128;

	t21 = (x1041>>(x1042%(x1043+x1044)));

	if (t21 != 401) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1058 = 0;
	int64_t x1060 = INT64_MIN;
	volatile int32_t t22 = 1;

	t22 = (x1057>>(x1058%(x1059+x1060)));

	if (t22 != 138) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1077 = 1112U;
	static uint16_t x1078 = UINT16_MAX;
	int16_t x1079 = -1;
	int32_t t23 = 10919433;

	t23 = (x1077>>(x1078%(x1079+x1080)));

	if (t23 != 139) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1121 = 61839704U;
	uint16_t x1122 = 6663U;
	static int8_t x1123 = 6;
	static int8_t x1124 = -1;
	uint32_t t24 = 39649829U;

	t24 = (x1121>>(x1122%(x1123+x1124)));

	if (t24 != 7729963U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1125 = 1U;
	int16_t x1126 = 16;
	volatile int32_t x1128 = -377037002;
	int32_t t25 = 181427;

	t25 = (x1125>>(x1126%(x1127+x1128)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1147 = INT8_MAX;
	int8_t x1148 = INT8_MAX;
	static int32_t t26 = 171404;

	t26 = (x1145>>(x1146%(x1147+x1148)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1186 = 3U;
	int8_t x1188 = -1;
	volatile uint64_t t27 = 251LLU;

	t27 = (x1185>>(x1186%(x1187+x1188)));

	if (t27 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1237 = 15U;
	uint8_t x1238 = 19U;
	int16_t x1239 = -1;
	int32_t x1240 = INT32_MAX;
	int32_t t28 = -46382966;

	t28 = (x1237>>(x1238%(x1239+x1240)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1313 = INT64_MAX;
	int64_t x1314 = 1LL;
	uint16_t x1315 = 745U;
	int64_t x1316 = 471007143145901LL;
	int64_t t29 = 103226742LL;

	t29 = (x1313>>(x1314%(x1315+x1316)));

	if (t29 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1329 = 11U;
	volatile uint8_t x1330 = 11U;
	static uint8_t x1332 = UINT8_MAX;
	volatile int32_t t30 = 4;

	t30 = (x1329>>(x1330%(x1331+x1332)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1365 = INT16_MAX;
	uint16_t x1366 = 4U;
	int64_t x1367 = -1LL;
	int32_t t31 = -126475771;

	t31 = (x1365>>(x1366%(x1367+x1368)));

	if (t31 != 2047) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1381 = 124U;
	uint64_t x1383 = 216LLU;
	static int32_t t32 = -2076;

	t32 = (x1381>>(x1382%(x1383+x1384)));

	if (t32 != 124) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1385 = 8234U;
	volatile uint32_t x1387 = UINT32_MAX;
	int64_t x1388 = INT64_MIN;
	int32_t t33 = -1;

	t33 = (x1385>>(x1386%(x1387+x1388)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1442 = 1LL;
	int16_t x1444 = -1;

	t34 = (x1441>>(x1442%(x1443+x1444)));

	if (t34 != 2147483647U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x1457 = 1736685123LL;
	int32_t x1458 = INT32_MIN;
	static int16_t x1459 = INT16_MIN;
	int16_t x1460 = INT16_MAX;
	int64_t t35 = -117098987217LL;

	t35 = (x1457>>(x1458%(x1459+x1460)));

	if (t35 != 1736685123LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1477 = INT32_MAX;
	int32_t x1478 = INT32_MIN;
	static int16_t x1479 = INT16_MAX;
	int16_t x1480 = INT16_MIN;

	t36 = (x1477>>(x1478%(x1479+x1480)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x1485 = UINT64_MAX;
	static int16_t x1486 = 1;
	int16_t x1487 = -1;
	int32_t x1488 = -1;
	uint64_t t37 = 518441LLU;

	t37 = (x1485>>(x1486%(x1487+x1488)));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1509 = 3U;
	volatile uint64_t x1510 = 77470505385462LLU;
	uint8_t x1511 = 2U;
	static volatile uint32_t x1512 = 0U;

	t38 = (x1509>>(x1510%(x1511+x1512)));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1542 = INT32_MIN;
	static volatile int16_t x1544 = -1;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x1541>>(x1542%(x1543+x1544)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1577 = 11;
	static uint8_t x1578 = 1U;
	static int32_t x1579 = -35753;
	int64_t x1580 = -17108889920904LL;
	static int32_t t40 = 4450;

	t40 = (x1577>>(x1578%(x1579+x1580)));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1626 = INT32_MAX;
	int8_t x1627 = 15;
	int32_t x1628 = INT32_MIN;
	volatile int32_t t41 = -540527;

	t41 = (x1625>>(x1626%(x1627+x1628)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x1634 = INT64_MIN;
	volatile int16_t x1635 = INT16_MIN;
	int32_t t42 = -6073745;

	t42 = (x1633>>(x1634%(x1635+x1636)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1676 = INT8_MAX;
	int32_t t43 = 549286351;

	t43 = (x1673>>(x1674%(x1675+x1676)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1685 = 4101310U;
	uint32_t x1686 = 0U;
	int64_t x1687 = -1LL;
	uint8_t x1688 = UINT8_MAX;
	uint32_t t44 = 33U;

	t44 = (x1685>>(x1686%(x1687+x1688)));

	if (t44 != 4101310U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1797 = 21573877154LL;
	uint16_t x1798 = 16U;
	int8_t x1799 = INT8_MIN;
	int16_t x1800 = INT16_MIN;

	t45 = (x1797>>(x1798%(x1799+x1800)));

	if (t45 != 329191LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1842 = 2537U;
	int8_t x1843 = 1;
	uint64_t x1844 = 37LLU;
	static volatile int32_t t46 = -3;

	t46 = (x1841>>(x1842%(x1843+x1844)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1877 = 8;
	int64_t x1878 = INT64_MIN;
	int32_t x1879 = -1;

	t47 = (x1877>>(x1878%(x1879+x1880)));

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1965 = INT8_MAX;
	int16_t x1966 = 10;
	uint8_t x1967 = 43U;
	int16_t x1968 = INT16_MIN;
	int32_t t48 = -95;

	t48 = (x1965>>(x1966%(x1967+x1968)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1969 = 2U;
	int32_t x1970 = INT32_MIN;
	uint8_t x1971 = UINT8_MAX;
	uint32_t x1972 = UINT32_MAX;
	int32_t t49 = 42518;

	t49 = (x1969>>(x1970%(x1971+x1972)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2013 = 0U;
	int64_t x2014 = INT64_MAX;
	int16_t x2016 = -1;
	volatile int32_t t50 = 5146;

	t50 = (x2013>>(x2014%(x2015+x2016)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2061 = 1U;
	static int8_t x2062 = 0;
	int16_t x2064 = -1;
	uint32_t t51 = 141621623U;

	t51 = (x2061>>(x2062%(x2063+x2064)));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x2125 = INT16_MAX;
	volatile int8_t x2126 = 1;
	volatile int64_t x2127 = 0LL;
	int32_t x2128 = 1969582;

	t52 = (x2125>>(x2126%(x2127+x2128)));

	if (t52 != 16383) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2161 = INT32_MAX;
	int32_t x2162 = -9463;
	uint8_t x2163 = 0U;
	int8_t x2164 = -1;
	volatile int32_t t53 = INT32_MAX;

	t53 = (x2161>>(x2162%(x2163+x2164)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2205 = 997067LLU;
	uint32_t x2206 = 46U;
	uint64_t x2207 = 9528580LLU;
	uint8_t x2208 = 81U;
	volatile uint64_t t54 = 25524570LLU;

	t54 = (x2205>>(x2206%(x2207+x2208)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2213 = INT16_MAX;
	int8_t x2214 = 1;
	uint8_t x2215 = UINT8_MAX;
	volatile int64_t x2216 = 57706031623217LL;
	volatile int32_t t55 = -262;

	t55 = (x2213>>(x2214%(x2215+x2216)));

	if (t55 != 16383) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x2221 = INT32_MAX;
	int64_t x2222 = INT64_MAX;
	static int8_t x2223 = -1;
	static uint16_t x2224 = UINT16_MAX;

	t56 = (x2221>>(x2222%(x2223+x2224)));

	if (t56 != 16777215) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2229 = 4U;
	uint32_t x2230 = 30U;
	volatile int8_t x2232 = INT8_MIN;

	t57 = (x2229>>(x2230%(x2231+x2232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2321 = 26;
	static volatile uint16_t x2322 = UINT16_MAX;
	int8_t x2324 = INT8_MIN;

	t58 = (x2321>>(x2322%(x2323+x2324)));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2326 = UINT16_MAX;
	uint16_t x2328 = 5U;

	t59 = (x2325>>(x2326%(x2327+x2328)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2337 = INT64_MAX;
	volatile int64_t x2338 = 172LL;
	int16_t x2339 = -14;
	int8_t x2340 = INT8_MIN;
	volatile int64_t t60 = 1028708279421290395LL;

	t60 = (x2337>>(x2338%(x2339+x2340)));

	if (t60 != 8589934591LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x2389 = 46U;
	uint32_t x2390 = 4U;
	int8_t x2391 = -12;
	volatile uint64_t x2392 = UINT64_MAX;
	volatile int32_t t61 = -927807;

	t61 = (x2389>>(x2390%(x2391+x2392)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2405 = 6962571524636LLU;
	volatile int8_t x2408 = -20;
	uint64_t t62 = 9834854925818LLU;

	t62 = (x2405>>(x2406%(x2407+x2408)));

	if (t62 != 849923281LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2453 = 16376;
	static int32_t x2454 = 0;
	int16_t x2456 = INT16_MIN;
	volatile int32_t t63 = -126424332;

	t63 = (x2453>>(x2454%(x2455+x2456)));

	if (t63 != 16376) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2485 = 1226810;
	int16_t x2486 = -1;
	static int8_t x2487 = 0;
	volatile int16_t x2488 = -1;
	int32_t t64 = 7057380;

	t64 = (x2485>>(x2486%(x2487+x2488)));

	if (t64 != 1226810) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2493 = 56LLU;
	static uint16_t x2495 = 578U;
	static int8_t x2496 = 6;
	uint64_t t65 = 2LLU;

	t65 = (x2493>>(x2494%(x2495+x2496)));

	if (t65 != 56LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x2500 = UINT8_MAX;

	t66 = (x2497>>(x2498%(x2499+x2500)));

	if (t66 != 281474976710655LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2521 = INT8_MAX;
	uint8_t x2522 = 16U;
	int8_t x2523 = INT8_MIN;
	uint16_t x2524 = UINT16_MAX;
	static volatile int32_t t67 = 3984;

	t67 = (x2521>>(x2522%(x2523+x2524)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2545 = 470058869;
	volatile int64_t x2546 = 1LL;
	static int8_t x2548 = -1;
	int32_t t68 = 822146;

	t68 = (x2545>>(x2546%(x2547+x2548)));

	if (t68 != 235029434) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x2550 = 610773643U;
	uint16_t x2552 = 157U;
	int32_t t69 = 2541;

	t69 = (x2549>>(x2550%(x2551+x2552)));

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2609 = INT32_MAX;
	int8_t x2611 = -15;
	int16_t x2612 = -1;
	static int32_t t70 = INT32_MAX;

	t70 = (x2609>>(x2610%(x2611+x2612)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2645 = UINT64_MAX;
	uint32_t x2646 = UINT32_MAX;
	static int8_t x2648 = INT8_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x2645>>(x2646%(x2647+x2648)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x2649 = 0;
	int32_t x2651 = 0;
	int8_t x2652 = INT8_MIN;
	static volatile int32_t t72 = -2954;

	t72 = (x2649>>(x2650%(x2651+x2652)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2693 = 218U;
	uint8_t x2694 = 20U;
	int8_t x2696 = INT8_MAX;
	volatile uint32_t t73 = 63322U;

	t73 = (x2693>>(x2694%(x2695+x2696)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2765 = 20U;
	volatile int32_t x2766 = -1;
	volatile uint32_t x2767 = UINT32_MAX;
	uint16_t x2768 = UINT16_MAX;

	t74 = (x2765>>(x2766%(x2767+x2768)));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2801 = 0U;
	uint16_t x2802 = 27308U;
	uint8_t x2803 = 6U;
	uint32_t x2804 = UINT32_MAX;
	volatile int32_t t75 = -21;

	t75 = (x2801>>(x2802%(x2803+x2804)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x2821 = UINT32_MAX;
	uint64_t x2822 = UINT64_MAX;
	volatile int16_t x2823 = -11;
	uint64_t x2824 = 6LLU;
	static volatile uint32_t t76 = 23U;

	t76 = (x2821>>(x2822%(x2823+x2824)));

	if (t76 != 268435455U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x2841 = INT16_MAX;
	int8_t x2842 = 0;
	static volatile int64_t x2843 = -1LL;
	int16_t x2844 = INT16_MIN;
	int32_t t77 = -14180;

	t77 = (x2841>>(x2842%(x2843+x2844)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2885 = INT64_MAX;
	static int8_t x2886 = 2;
	volatile int16_t x2887 = INT16_MIN;
	uint32_t x2888 = UINT32_MAX;
	volatile int64_t t78 = 16770LL;

	t78 = (x2885>>(x2886%(x2887+x2888)));

	if (t78 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2897 = 0;
	static int16_t x2898 = 31;
	uint16_t x2899 = 31U;
	int16_t x2900 = INT16_MIN;
	static int32_t t79 = 13138799;

	t79 = (x2897>>(x2898%(x2899+x2900)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2905 = 79872807662921LL;
	static uint32_t x2907 = UINT32_MAX;
	static volatile uint8_t x2908 = 11U;
	static volatile int64_t t80 = -2LL;

	t80 = (x2905>>(x2906%(x2907+x2908)));

	if (t80 != 2496025239466LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x2917 = UINT64_MAX;
	static int32_t x2918 = 52;
	int8_t x2919 = INT8_MIN;
	int8_t x2920 = INT8_MIN;
	static uint64_t t81 = 9956288LLU;

	t81 = (x2917>>(x2918%(x2919+x2920)));

	if (t81 != 4095LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2961 = 127U;
	uint16_t x2962 = 4517U;
	int32_t x2963 = -1;
	int32_t t82 = 7623276;

	t82 = (x2961>>(x2962%(x2963+x2964)));

	if (t82 != 63) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3001 = UINT8_MAX;
	volatile int8_t x3002 = 0;
	volatile uint16_t x3003 = 1U;
	int64_t x3004 = 2945982LL;
	int32_t t83 = -26312;

	t83 = (x3001>>(x3002%(x3003+x3004)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x3017 = INT32_MAX;
	uint8_t x3018 = 3U;
	volatile int64_t x3019 = INT64_MIN;
	int64_t x3020 = 5039144LL;
	int32_t t84 = 115;

	t84 = (x3017>>(x3018%(x3019+x3020)));

	if (t84 != 268435455) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x3034 = 23U;
	int32_t x3035 = 1674106;
	volatile int64_t t85 = -116840134507687LL;

	t85 = (x3033>>(x3034%(x3035+x3036)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3049 = 4668735U;
	volatile int64_t x3050 = INT64_MAX;
	static int16_t x3051 = -1;
	int32_t x3052 = -1;
	static uint32_t t86 = 7U;

	t86 = (x3049>>(x3050%(x3051+x3052)));

	if (t86 != 2334367U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x3060 = INT64_MIN;
	volatile int32_t t87 = -28449788;

	t87 = (x3057>>(x3058%(x3059+x3060)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x3097 = 1;
	static volatile uint8_t x3098 = UINT8_MAX;
	int32_t t88 = -302459643;

	t88 = (x3097>>(x3098%(x3099+x3100)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3114 = -1;
	volatile uint32_t x3115 = UINT32_MAX;
	int32_t t89 = -2689346;

	t89 = (x3113>>(x3114%(x3115+x3116)));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3186 = 0;
	uint16_t x3187 = 4U;
	uint8_t x3188 = 25U;

	t90 = (x3185>>(x3186%(x3187+x3188)));

	if (t90 != 205355LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3189 = UINT64_MAX;
	uint64_t x3191 = UINT64_MAX;
	int64_t x3192 = -14559831LL;

	t91 = (x3189>>(x3190%(x3191+x3192)));

	if (t91 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x3217 = UINT64_MAX;
	volatile int8_t x3218 = 36;
	int8_t x3219 = INT8_MIN;
	volatile uint8_t x3220 = 29U;
	static uint64_t t92 = 126570230916834965LLU;

	t92 = (x3217>>(x3218%(x3219+x3220)));

	if (t92 != 268435455LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3225 = 750;
	volatile int32_t x3226 = INT32_MIN;
	int64_t x3228 = -1LL;
	int32_t t93 = -40;

	t93 = (x3225>>(x3226%(x3227+x3228)));

	if (t93 != 750) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3249 = UINT8_MAX;
	uint8_t x3250 = 7U;
	static int64_t x3252 = -6931779904329249LL;
	int32_t t94 = 980850795;

	t94 = (x3249>>(x3250%(x3251+x3252)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x3269 = UINT64_MAX;
	uint32_t x3270 = UINT32_MAX;
	int64_t x3271 = -1LL;
	uint8_t x3272 = 14U;
	uint64_t t95 = 3391022859225LLU;

	t95 = (x3269>>(x3270%(x3271+x3272)));

	if (t95 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x3274 = INT32_MIN;
	int32_t x3275 = INT32_MAX;
	volatile int32_t x3276 = INT32_MIN;
	volatile int32_t t96 = 190082932;

	t96 = (x3273>>(x3274%(x3275+x3276)));

	if (t96 != 96) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3325 = 836;
	static int32_t x3326 = 1;
	static volatile uint16_t x3327 = 8U;

	t97 = (x3325>>(x3326%(x3327+x3328)));

	if (t97 != 418) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3361 = UINT32_MAX;
	uint8_t x3362 = 0U;
	uint16_t x3363 = 799U;
	uint32_t t98 = UINT32_MAX;

	t98 = (x3361>>(x3362%(x3363+x3364)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3365 = 311426154;
	int32_t x3366 = 5;
	static int64_t x3367 = INT64_MIN;
	uint8_t x3368 = UINT8_MAX;
	int32_t t99 = -41;

	t99 = (x3365>>(x3366%(x3367+x3368)));

	if (t99 != 9732067) { NG(); } else { ; }
	
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

