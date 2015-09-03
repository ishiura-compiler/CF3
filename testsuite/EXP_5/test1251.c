#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 715712971498LLU;
uint32_t x3 = 43792U;
int8_t x11 = -1;
static volatile uint32_t t3 = 813834U;
int16_t x83 = INT16_MIN;
volatile int32_t t4 = -23092;
int16_t x143 = INT16_MIN;
int16_t x170 = -1;
int32_t x171 = INT32_MIN;
int16_t x202 = 1;
int64_t x203 = INT64_MIN;
int64_t t10 = 1530063139771LL;
int16_t x246 = -3;
int32_t x265 = 23484655;
volatile int32_t t12 = -1603;
static int32_t t13 = 29;
volatile int32_t x401 = 68;
int32_t t14 = 17;
volatile uint32_t x405 = UINT32_MAX;
int64_t x406 = 0LL;
int8_t x408 = 1;
static volatile int32_t t16 = INT32_MAX;
int64_t x629 = -532386710405657685LL;
uint16_t x630 = 95U;
static volatile int32_t x642 = INT32_MIN;
int32_t t18 = 395458;
int32_t t19 = -7713;
uint16_t x820 = 3U;
uint16_t x844 = 8U;
static int8_t x869 = INT8_MIN;
int32_t x871 = -1;
uint16_t x1098 = UINT16_MAX;
int32_t x1218 = INT32_MIN;
int8_t x1225 = INT8_MIN;
int16_t x1226 = INT16_MAX;
int32_t t30 = 139;
int32_t x1373 = 69029;
uint32_t x1386 = 19978U;
uint16_t x1388 = 3U;
int8_t x1427 = -1;
volatile uint8_t x1428 = 0U;
int64_t x1457 = -1LL;
int8_t x1458 = INT8_MAX;
int64_t t34 = -6421LL;
uint64_t x1462 = 424479124LLU;
volatile int32_t t36 = -2965;
int32_t x1581 = INT32_MIN;
volatile int32_t x1585 = INT32_MAX;
int16_t x1606 = -1;
static int16_t x1629 = INT16_MAX;
volatile int64_t x1631 = INT64_MAX;
uint32_t x1649 = 123U;
volatile int16_t x1650 = -1;
int8_t x1684 = 0;
int8_t x1698 = -1;
static volatile int32_t x1699 = -1;
volatile uint8_t x1724 = 7U;
uint16_t x1828 = 0U;
volatile int32_t x1835 = -178315810;
uint8_t x1904 = 1U;
int32_t t50 = -12138939;
int16_t x2018 = 18;
static int8_t x2030 = -1;
int16_t x2041 = INT16_MAX;
uint64_t x2043 = UINT64_MAX;
static int32_t x2063 = INT32_MIN;
uint64_t x2165 = 76923030802894392LLU;
uint64_t x2186 = 4671044LLU;
uint64_t x2203 = 2104654140808LLU;
int8_t x2214 = INT8_MAX;
volatile int32_t t63 = 50;
int8_t x2234 = -7;
int32_t t64 = 13;
int32_t x2313 = -1164602;
uint8_t x2315 = UINT8_MAX;
volatile int8_t x2336 = 1;
int64_t x2401 = INT64_MAX;
uint64_t x2403 = UINT64_MAX;
uint64_t x2479 = UINT64_MAX;
static volatile int8_t x2547 = -23;
int64_t t74 = -58937LL;
int8_t x2721 = INT8_MAX;
static int32_t t77 = -51127;
int8_t x2756 = 0;
int16_t x2880 = 0;
static uint16_t x2897 = UINT16_MAX;
volatile int16_t x2900 = 7;
int8_t x2929 = INT8_MIN;
volatile int16_t x2934 = INT16_MIN;
static uint64_t x2964 = 25LLU;
static uint32_t x2986 = 6386658U;
uint16_t x3024 = 15U;
int64_t x3038 = INT64_MIN;
volatile int32_t x3099 = 903895;
volatile int32_t t90 = 324;
static int32_t t91 = -927358;
static int16_t x3285 = INT16_MIN;
static volatile int8_t x3286 = INT8_MAX;
uint8_t x3321 = UINT8_MAX;
volatile int32_t x3322 = -67;
static uint32_t x3324 = 2U;
uint8_t x3360 = 3U;
volatile int32_t t95 = 379353811;
uint32_t t97 = 654941085U;
volatile uint16_t x3438 = 3U;


void f0(void) {
	volatile int32_t x1 = -15;
	int8_t x4 = 1;
	volatile int32_t t0 = -7779;

	t0 = (x1*((x2==x3)<<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	static int16_t x10 = -8;
	static uint32_t x12 = 6U;
	static int32_t t1 = 623993878;

	t1 = (x9*((x10==x11)<<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x37 = 1;
	static int32_t x38 = -312220291;
	uint16_t x39 = 1U;
	static volatile int8_t x40 = 0;
	volatile int32_t t2 = 19;

	t2 = (x37*((x38==x39)<<x40));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x45 = UINT32_MAX;
	static uint64_t x46 = 732459406053LLU;
	uint16_t x47 = 3800U;
	uint64_t x48 = 0LLU;

	t3 = (x45*((x46==x47)<<x48));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x81 = 4170;
	volatile int64_t x82 = INT64_MAX;
	static volatile int8_t x84 = 5;

	t4 = (x81*((x82==x83)<<x84));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x97 = 1;
	int32_t x98 = -3155;
	int16_t x99 = INT16_MIN;
	uint8_t x100 = 1U;
	static volatile int32_t t5 = -12741525;

	t5 = (x97*((x98==x99)<<x100));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x113 = UINT8_MAX;
	int16_t x114 = -14;
	static uint16_t x115 = 421U;
	uint64_t x116 = 25LLU;
	volatile int32_t t6 = -1847;

	t6 = (x113*((x114==x115)<<x116));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x141 = -4;
	uint32_t x142 = 15690605U;
	int16_t x144 = 0;
	int32_t t7 = 9;

	t7 = (x141*((x142==x143)<<x144));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x169 = -1;
	volatile uint8_t x172 = 3U;
	int32_t t8 = 14651637;

	t8 = (x169*((x170==x171)<<x172));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x204 = 1U;
	volatile int32_t t9 = -5209;

	t9 = (x201*((x202==x203)<<x204));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x241 = -8724LL;
	int8_t x242 = INT8_MIN;
	int64_t x243 = -1LL;
	uint16_t x244 = 6U;

	t10 = (x241*((x242==x243)<<x244));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x245 = INT16_MAX;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = 26;
	int32_t t11 = 484;

	t11 = (x245*((x246==x247)<<x248));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x266 = 0;
	static uint16_t x267 = UINT16_MAX;
	static int8_t x268 = 17;

	t12 = (x265*((x266==x267)<<x268));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x389 = INT32_MAX;
	uint32_t x390 = 3460667U;
	int16_t x391 = INT16_MIN;
	uint16_t x392 = 4U;

	t13 = (x389*((x390==x391)<<x392));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x402 = 14026U;
	uint32_t x403 = 2933U;
	uint16_t x404 = 24U;

	t14 = (x401*((x402==x403)<<x404));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x407 = 991430827599LL;
	volatile uint32_t t15 = 92U;

	t15 = (x405*((x406==x407)<<x408));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x429 = INT32_MAX;
	volatile uint64_t x430 = UINT64_MAX;
	static volatile int32_t x431 = -1;
	uint16_t x432 = 0U;

	t16 = (x429*((x430==x431)<<x432));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x631 = 32042U;
	volatile uint8_t x632 = 2U;
	int64_t t17 = 240156469815646183LL;

	t17 = (x629*((x630==x631)<<x632));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x641 = INT8_MIN;
	int8_t x643 = -1;
	volatile uint32_t x644 = 27U;

	t18 = (x641*((x642==x643)<<x644));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x749 = 15976;
	uint64_t x750 = 885286590LLU;
	int64_t x751 = INT64_MIN;
	static volatile uint8_t x752 = 3U;

	t19 = (x749*((x750==x751)<<x752));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x817 = UINT64_MAX;
	uint8_t x818 = UINT8_MAX;
	int64_t x819 = INT64_MAX;
	uint64_t t20 = 17694932142959408LLU;

	t20 = (x817*((x818==x819)<<x820));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x841 = 2091287LLU;
	static volatile int64_t x842 = INT64_MAX;
	uint32_t x843 = 3027U;
	volatile uint64_t t21 = 202388LLU;

	t21 = (x841*((x842==x843)<<x844));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x870 = INT8_MIN;
	uint8_t x872 = 1U;
	int32_t t22 = -1;

	t22 = (x869*((x870==x871)<<x872));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x913 = INT16_MAX;
	static uint64_t x914 = 1770605163852070310LLU;
	int64_t x915 = -538132571514LL;
	volatile int8_t x916 = 14;
	int32_t t23 = -1038533;

	t23 = (x913*((x914==x915)<<x916));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x945 = UINT64_MAX;
	static int64_t x946 = -1LL;
	int32_t x947 = 2942683;
	int8_t x948 = 23;
	uint64_t t24 = 1297231648LLU;

	t24 = (x945*((x946==x947)<<x948));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1097 = INT16_MIN;
	static volatile int64_t x1099 = 375LL;
	int8_t x1100 = 6;
	int32_t t25 = -1430366;

	t25 = (x1097*((x1098==x1099)<<x1100));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1161 = 0;
	static uint16_t x1162 = 2U;
	uint64_t x1163 = UINT64_MAX;
	volatile int16_t x1164 = 22;
	int32_t t26 = 16084817;

	t26 = (x1161*((x1162==x1163)<<x1164));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1217 = UINT16_MAX;
	int64_t x1219 = -1LL;
	volatile uint16_t x1220 = 15U;
	int32_t t27 = -26005;

	t27 = (x1217*((x1218==x1219)<<x1220));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1227 = 105U;
	uint16_t x1228 = 5U;
	volatile int32_t t28 = -121;

	t28 = (x1225*((x1226==x1227)<<x1228));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1245 = INT32_MIN;
	static int32_t x1246 = -121801;
	volatile uint16_t x1247 = 134U;
	uint16_t x1248 = 2U;
	int32_t t29 = -7765668;

	t29 = (x1245*((x1246==x1247)<<x1248));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1297 = -1;
	volatile int16_t x1298 = 895;
	int16_t x1299 = INT16_MIN;
	uint8_t x1300 = 21U;

	t30 = (x1297*((x1298==x1299)<<x1300));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1374 = INT64_MIN;
	int64_t x1375 = INT64_MIN;
	int32_t x1376 = 1;
	int32_t t31 = -23724;

	t31 = (x1373*((x1374==x1375)<<x1376));

	if (t31 != 138058) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1385 = INT64_MIN;
	int8_t x1387 = -1;
	volatile int64_t t32 = 1700347460148LL;

	t32 = (x1385*((x1386==x1387)<<x1388));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1425 = UINT8_MAX;
	volatile uint32_t x1426 = 910757U;
	volatile int32_t t33 = 3;

	t33 = (x1425*((x1426==x1427)<<x1428));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1459 = INT8_MIN;
	int8_t x1460 = 1;

	t34 = (x1457*((x1458==x1459)<<x1460));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1461 = -973;
	volatile int32_t x1463 = -1;
	static uint32_t x1464 = 4U;
	volatile int32_t t35 = -1668697;

	t35 = (x1461*((x1462==x1463)<<x1464));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1469 = INT32_MIN;
	int8_t x1470 = 3;
	int16_t x1471 = 25;
	uint8_t x1472 = 1U;

	t36 = (x1469*((x1470==x1471)<<x1472));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1582 = 2824661043590853641LLU;
	int16_t x1583 = -1;
	static int8_t x1584 = 2;
	volatile int32_t t37 = -382138;

	t37 = (x1581*((x1582==x1583)<<x1584));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1586 = 56U;
	volatile int8_t x1587 = -1;
	static uint64_t x1588 = 5LLU;
	int32_t t38 = 2510858;

	t38 = (x1585*((x1586==x1587)<<x1588));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x1605 = INT8_MAX;
	static uint8_t x1607 = 6U;
	uint16_t x1608 = 6U;
	static volatile int32_t t39 = 46;

	t39 = (x1605*((x1606==x1607)<<x1608));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1617 = INT64_MAX;
	int64_t x1618 = INT64_MIN;
	int64_t x1619 = INT64_MAX;
	int8_t x1620 = 3;
	int64_t t40 = 4286438442394708LL;

	t40 = (x1617*((x1618==x1619)<<x1620));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1630 = 28LL;
	uint16_t x1632 = 0U;
	volatile int32_t t41 = -732529;

	t41 = (x1629*((x1630==x1631)<<x1632));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x1651 = INT64_MIN;
	volatile uint16_t x1652 = 6U;
	uint32_t t42 = 34063U;

	t42 = (x1649*((x1650==x1651)<<x1652));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1665 = 73839394LLU;
	int8_t x1666 = -1;
	int16_t x1667 = 1;
	static uint8_t x1668 = 3U;
	volatile uint64_t t43 = 2210095LLU;

	t43 = (x1665*((x1666==x1667)<<x1668));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1681 = INT32_MAX;
	int16_t x1682 = INT16_MAX;
	int64_t x1683 = -257090029098149LL;
	volatile int32_t t44 = -232673133;

	t44 = (x1681*((x1682==x1683)<<x1684));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1697 = 71006883LLU;
	uint32_t x1700 = 14U;
	uint64_t t45 = 243LLU;

	t45 = (x1697*((x1698==x1699)<<x1700));

	if (t45 != 1163376771072LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1721 = INT16_MIN;
	uint16_t x1722 = 12U;
	volatile int64_t x1723 = INT64_MIN;
	volatile int32_t t46 = 1546;

	t46 = (x1721*((x1722==x1723)<<x1724));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1825 = -1;
	volatile int8_t x1826 = INT8_MAX;
	uint8_t x1827 = 119U;
	int32_t t47 = -5;

	t47 = (x1825*((x1826==x1827)<<x1828));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1833 = UINT32_MAX;
	int8_t x1834 = INT8_MAX;
	uint8_t x1836 = 4U;
	static volatile uint32_t t48 = 1804U;

	t48 = (x1833*((x1834==x1835)<<x1836));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1901 = INT8_MAX;
	int64_t x1902 = -1LL;
	uint64_t x1903 = UINT64_MAX;
	static volatile int32_t t49 = 304;

	t49 = (x1901*((x1902==x1903)<<x1904));

	if (t49 != 254) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1929 = -8;
	static volatile int16_t x1930 = INT16_MAX;
	static int64_t x1931 = -690682255904409LL;
	uint8_t x1932 = 2U;

	t50 = (x1929*((x1930==x1931)<<x1932));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1997 = UINT32_MAX;
	static int8_t x1998 = -1;
	int32_t x1999 = INT32_MIN;
	uint32_t x2000 = 2U;
	volatile uint32_t t51 = 30U;

	t51 = (x1997*((x1998==x1999)<<x2000));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2017 = INT16_MIN;
	static volatile int32_t x2019 = 1;
	static uint16_t x2020 = 2U;
	static int32_t t52 = 20;

	t52 = (x2017*((x2018==x2019)<<x2020));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2021 = 34U;
	int16_t x2022 = INT16_MIN;
	int16_t x2023 = INT16_MAX;
	int8_t x2024 = 11;
	static int32_t t53 = -302765;

	t53 = (x2021*((x2022==x2023)<<x2024));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x2029 = -85478;
	int64_t x2031 = INT64_MIN;
	uint8_t x2032 = 21U;
	volatile int32_t t54 = 17967;

	t54 = (x2029*((x2030==x2031)<<x2032));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x2042 = UINT32_MAX;
	int8_t x2044 = 1;
	volatile int32_t t55 = 3529789;

	t55 = (x2041*((x2042==x2043)<<x2044));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2061 = INT64_MAX;
	static volatile uint8_t x2062 = 11U;
	uint16_t x2064 = 4U;
	int64_t t56 = 8048092940359884LL;

	t56 = (x2061*((x2062==x2063)<<x2064));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2077 = INT16_MIN;
	static uint64_t x2078 = UINT64_MAX;
	static uint32_t x2079 = 138963U;
	static int8_t x2080 = 19;
	int32_t t57 = -133029785;

	t57 = (x2077*((x2078==x2079)<<x2080));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2141 = 875U;
	static volatile int16_t x2142 = INT16_MIN;
	volatile int16_t x2143 = -4739;
	uint8_t x2144 = 15U;
	volatile int32_t t58 = 2125;

	t58 = (x2141*((x2142==x2143)<<x2144));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2149 = 0;
	int64_t x2150 = -1LL;
	volatile uint8_t x2151 = 1U;
	int32_t x2152 = 0;
	int32_t t59 = 71;

	t59 = (x2149*((x2150==x2151)<<x2152));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2166 = INT16_MIN;
	int8_t x2167 = 6;
	int8_t x2168 = 1;
	volatile uint64_t t60 = 15072506LLU;

	t60 = (x2165*((x2166==x2167)<<x2168));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2185 = UINT32_MAX;
	int32_t x2187 = INT32_MAX;
	uint16_t x2188 = 20U;
	volatile uint32_t t61 = 6U;

	t61 = (x2185*((x2186==x2187)<<x2188));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2201 = -1LL;
	volatile uint8_t x2202 = UINT8_MAX;
	int8_t x2204 = 10;
	volatile int64_t t62 = 434926649346LL;

	t62 = (x2201*((x2202==x2203)<<x2204));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2213 = 0U;
	int64_t x2215 = INT64_MIN;
	uint32_t x2216 = 27U;

	t63 = (x2213*((x2214==x2215)<<x2216));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2233 = 0;
	volatile int64_t x2235 = INT64_MIN;
	static uint8_t x2236 = 2U;

	t64 = (x2233*((x2234==x2235)<<x2236));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2301 = INT32_MIN;
	int64_t x2302 = INT64_MIN;
	uint32_t x2303 = 83053330U;
	int32_t x2304 = 3;
	volatile int32_t t65 = -22;

	t65 = (x2301*((x2302==x2303)<<x2304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2314 = INT32_MIN;
	uint8_t x2316 = 2U;
	static volatile int32_t t66 = -6;

	t66 = (x2313*((x2314==x2315)<<x2316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2333 = INT64_MIN;
	volatile int8_t x2334 = 4;
	static int32_t x2335 = 0;
	volatile int64_t t67 = 3251LL;

	t67 = (x2333*((x2334==x2335)<<x2336));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2402 = INT64_MIN;
	static uint64_t x2404 = 1LLU;
	volatile int64_t t68 = 107990232000LL;

	t68 = (x2401*((x2402==x2403)<<x2404));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2409 = 65068105U;
	static int64_t x2410 = INT64_MAX;
	static uint64_t x2411 = 1957LLU;
	uint8_t x2412 = 0U;
	volatile uint32_t t69 = 150U;

	t69 = (x2409*((x2410==x2411)<<x2412));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2433 = INT64_MIN;
	int32_t x2434 = INT32_MIN;
	uint16_t x2435 = 8118U;
	static uint32_t x2436 = 1U;
	volatile int64_t t70 = 18654973LL;

	t70 = (x2433*((x2434==x2435)<<x2436));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2457 = UINT32_MAX;
	volatile int16_t x2458 = 3016;
	int64_t x2459 = INT64_MIN;
	uint32_t x2460 = 14U;
	uint32_t t71 = 213304728U;

	t71 = (x2457*((x2458==x2459)<<x2460));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2477 = INT8_MIN;
	static int8_t x2478 = INT8_MAX;
	uint8_t x2480 = 4U;
	int32_t t72 = 0;

	t72 = (x2477*((x2478==x2479)<<x2480));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2497 = -8;
	static int16_t x2498 = INT16_MAX;
	volatile int8_t x2499 = INT8_MIN;
	volatile uint8_t x2500 = 27U;
	int32_t t73 = 1;

	t73 = (x2497*((x2498==x2499)<<x2500));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x2545 = -1LL;
	int64_t x2546 = -29246388228195127LL;
	int16_t x2548 = 27;

	t74 = (x2545*((x2546==x2547)<<x2548));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x2617 = UINT8_MAX;
	static volatile int32_t x2618 = INT32_MAX;
	uint16_t x2619 = UINT16_MAX;
	uint8_t x2620 = 11U;
	volatile int32_t t75 = -6163;

	t75 = (x2617*((x2618==x2619)<<x2620));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2722 = INT32_MAX;
	static uint8_t x2723 = UINT8_MAX;
	static volatile int8_t x2724 = 5;
	int32_t t76 = 10340122;

	t76 = (x2721*((x2722==x2723)<<x2724));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x2741 = INT16_MAX;
	static volatile int64_t x2742 = -33632LL;
	int8_t x2743 = -19;
	static uint8_t x2744 = 0U;

	t77 = (x2741*((x2742==x2743)<<x2744));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2753 = -392983931675381LL;
	int64_t x2754 = -1LL;
	static volatile uint32_t x2755 = UINT32_MAX;
	volatile int64_t t78 = -2870380LL;

	t78 = (x2753*((x2754==x2755)<<x2756));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2789 = 1;
	int32_t x2790 = -1;
	volatile uint16_t x2791 = UINT16_MAX;
	uint8_t x2792 = 6U;
	int32_t t79 = 193;

	t79 = (x2789*((x2790==x2791)<<x2792));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2857 = 848152U;
	int32_t x2858 = INT32_MAX;
	int64_t x2859 = INT64_MIN;
	uint16_t x2860 = 26U;
	uint32_t t80 = 926734032U;

	t80 = (x2857*((x2858==x2859)<<x2860));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x2877 = INT16_MAX;
	int32_t x2878 = INT32_MAX;
	int64_t x2879 = INT64_MAX;
	volatile int32_t t81 = -5;

	t81 = (x2877*((x2878==x2879)<<x2880));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x2898 = 45U;
	int16_t x2899 = INT16_MIN;
	volatile int32_t t82 = 3449;

	t82 = (x2897*((x2898==x2899)<<x2900));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x2930 = 44U;
	uint64_t x2931 = 40745423LLU;
	int8_t x2932 = 21;
	int32_t t83 = -3570;

	t83 = (x2929*((x2930==x2931)<<x2932));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x2933 = INT32_MIN;
	int32_t x2935 = -336371210;
	uint8_t x2936 = 24U;
	volatile int32_t t84 = 1023;

	t84 = (x2933*((x2934==x2935)<<x2936));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x2937 = INT16_MIN;
	volatile int64_t x2938 = -150026023LL;
	uint64_t x2939 = 683630042791578LLU;
	int16_t x2940 = 1;
	int32_t t85 = 7760674;

	t85 = (x2937*((x2938==x2939)<<x2940));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x2961 = UINT32_MAX;
	uint16_t x2962 = 19U;
	int16_t x2963 = INT16_MIN;
	volatile uint32_t t86 = 6U;

	t86 = (x2961*((x2962==x2963)<<x2964));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x2985 = 809U;
	volatile uint32_t x2987 = 21446U;
	uint32_t x2988 = 2U;
	volatile uint32_t t87 = 92917441U;

	t87 = (x2985*((x2986==x2987)<<x2988));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x3021 = 4LLU;
	int32_t x3022 = INT32_MIN;
	static int16_t x3023 = INT16_MIN;
	volatile uint64_t t88 = 261504348322877071LLU;

	t88 = (x3021*((x3022==x3023)<<x3024));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3037 = INT32_MIN;
	int64_t x3039 = INT64_MAX;
	static uint8_t x3040 = 12U;
	volatile int32_t t89 = -55;

	t89 = (x3037*((x3038==x3039)<<x3040));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x3097 = 231907492;
	static int16_t x3098 = 8;
	int32_t x3100 = 1;

	t90 = (x3097*((x3098==x3099)<<x3100));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x3205 = UINT16_MAX;
	int32_t x3206 = INT32_MAX;
	uint16_t x3207 = UINT16_MAX;
	volatile int16_t x3208 = 13;

	t91 = (x3205*((x3206==x3207)<<x3208));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x3253 = 175327674LLU;
	int16_t x3254 = INT16_MAX;
	uint8_t x3255 = UINT8_MAX;
	uint8_t x3256 = 2U;
	uint64_t t92 = 886LLU;

	t92 = (x3253*((x3254==x3255)<<x3256));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3287 = 1262LLU;
	uint8_t x3288 = 2U;
	volatile int32_t t93 = 47418037;

	t93 = (x3285*((x3286==x3287)<<x3288));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3323 = 4;
	volatile int32_t t94 = 821691217;

	t94 = (x3321*((x3322==x3323)<<x3324));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3357 = 9;
	volatile int8_t x3358 = -4;
	int8_t x3359 = -1;

	t95 = (x3357*((x3358==x3359)<<x3360));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x3385 = 67U;
	static int16_t x3386 = -1;
	static int64_t x3387 = INT64_MAX;
	static uint8_t x3388 = 5U;
	volatile int32_t t96 = 11704;

	t96 = (x3385*((x3386==x3387)<<x3388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3401 = UINT32_MAX;
	static int16_t x3402 = 7319;
	volatile uint64_t x3403 = UINT64_MAX;
	uint8_t x3404 = 0U;

	t97 = (x3401*((x3402==x3403)<<x3404));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3437 = INT8_MAX;
	int8_t x3439 = 51;
	uint16_t x3440 = 1U;
	int32_t t98 = -2;

	t98 = (x3437*((x3438==x3439)<<x3440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3453 = INT64_MIN;
	int32_t x3454 = INT32_MIN;
	uint32_t x3455 = 29572734U;
	int64_t x3456 = 14LL;
	int64_t t99 = -564426733647656625LL;

	t99 = (x3453*((x3454==x3455)<<x3456));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

