#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x70 = -5890479545LL;
uint16_t x78 = 23228U;
volatile uint16_t x103 = 4949U;
int64_t x104 = -1LL;
uint64_t x113 = UINT64_MAX;
volatile int16_t x115 = INT16_MAX;
int8_t x116 = -1;
int64_t x187 = 62809354LL;
static int16_t x218 = INT16_MAX;
int8_t x314 = INT8_MIN;
volatile uint32_t t10 = 3609U;
uint64_t x331 = UINT64_MAX;
uint8_t x354 = UINT8_MAX;
static int8_t x355 = INT8_MIN;
int16_t x380 = -1;
int32_t x457 = 4;
volatile int32_t t16 = 7;
static volatile uint32_t x501 = UINT32_MAX;
int8_t x580 = -1;
static int32_t t21 = 0;
volatile int32_t t22 = 120335;
uint16_t x783 = 132U;
int64_t x784 = -1LL;
static int8_t x820 = -12;
uint8_t x925 = 2U;
int16_t x988 = 10;
int16_t x998 = 3561;
static volatile int64_t t37 = -2026658289493887367LL;
int16_t x1029 = 53;
int16_t x1031 = -128;
volatile int16_t x1032 = -1;
uint64_t x1067 = UINT64_MAX;
int16_t x1068 = 19;
volatile int64_t x1089 = INT64_MAX;
volatile int64_t t40 = INT64_MAX;
int32_t x1112 = INT32_MAX;
uint64_t x1136 = 61661562026LLU;
int32_t x1210 = -1;
volatile int32_t t44 = -171790;
uint32_t x1274 = 1U;
uint8_t x1289 = 3U;
int32_t t47 = -1017705;
uint8_t x1299 = 12U;
uint64_t x1306 = 48LLU;
uint8_t x1308 = 1U;
int32_t x1335 = 29974797;
uint64_t t50 = 17005096646LLU;
static uint32_t x1346 = UINT32_MAX;
int32_t x1347 = -1;
uint64_t x1369 = UINT64_MAX;
static volatile uint64_t t52 = 8706180507643641LLU;
int16_t x1438 = -7;
int8_t x1440 = INT8_MIN;
volatile uint32_t x1526 = 4956747U;
int32_t t56 = INT32_MAX;
int8_t x1548 = 1;
int8_t x1649 = 13;
static int32_t x1651 = INT32_MAX;
int32_t t58 = 56;
uint64_t x1657 = UINT64_MAX;
uint64_t x1685 = 17604617086195525LLU;
static int32_t x1686 = 124564;
static uint64_t t61 = 4412097LLU;
int16_t x1737 = 244;
int16_t x1739 = -1;
int32_t t65 = 1;
uint64_t x1789 = 31378488019LLU;
int32_t x1838 = INT32_MIN;
static volatile int32_t t69 = 27052;
uint16_t x1841 = 25U;
static volatile int32_t t70 = 7880971;
static int32_t x1881 = INT32_MAX;
static int32_t t71 = INT32_MAX;
int32_t t72 = 0;
static int32_t x1952 = -1;
uint64_t x1981 = 46800LLU;
volatile int8_t x1982 = -25;
volatile int64_t x1983 = 1507329735348LL;
int8_t x1984 = 1;
volatile uint64_t t74 = 50115826LLU;
static int8_t x2253 = INT8_MAX;
uint64_t t79 = 192243592667774639LLU;
volatile uint64_t t80 = 69709056LLU;
static int16_t x2388 = -1;
static volatile int8_t x2452 = 47;
static int64_t t83 = -418385610864700LL;
uint32_t x2485 = 2017190U;
volatile int16_t x2487 = -876;
volatile int16_t x2488 = -1;
uint32_t t84 = 3548948U;
uint32_t x2490 = 0U;
uint64_t x2491 = 4021273LLU;
volatile uint32_t x2582 = UINT32_MAX;
volatile int32_t x2583 = INT32_MIN;
volatile uint32_t t89 = 422750647U;
int8_t x2689 = INT8_MAX;
int32_t t92 = 13;
volatile uint32_t x2781 = UINT32_MAX;
static uint32_t t95 = 60U;
int32_t x2850 = -1071755092;


void f0(void) {
	static int8_t x69 = 14;
	static volatile int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = 1U;
	volatile int32_t t0 = -277535986;

	t0 = (x69>>((x70*x71)%x72));

	if (t0 != 14) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x77 = INT64_MAX;
	uint32_t x79 = 14884584U;
	uint8_t x80 = 55U;
	static volatile int64_t t1 = -53LL;

	t1 = (x77>>((x78*x79)%x80));

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x101 = 640176175U;
	uint8_t x102 = UINT8_MAX;
	volatile uint32_t t2 = 7027843U;

	t2 = (x101>>((x102*x103)%x104));

	if (t2 != 640176175U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x114 = INT8_MAX;
	static uint64_t t3 = UINT64_MAX;

	t3 = (x113>>((x114*x115)%x116));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MIN;
	static int16_t x119 = -26;
	int32_t x120 = -1;
	volatile int32_t t4 = 55;

	t4 = (x117>>((x118*x119)%x120));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x185 = 11113822019797LLU;
	volatile uint8_t x186 = 0U;
	int16_t x188 = -1;
	volatile uint64_t t5 = 2585864907241LLU;

	t5 = (x185>>((x186*x187)%x188));

	if (t5 != 11113822019797LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x217 = 58U;
	int16_t x219 = INT16_MAX;
	int8_t x220 = INT8_MAX;
	static uint32_t t6 = 2656290U;

	t6 = (x217>>((x218*x219)%x220));

	if (t6 != 29U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x273 = INT32_MAX;
	int32_t x274 = -1;
	static int32_t x275 = -1;
	int64_t x276 = -1LL;
	static volatile int32_t t7 = INT32_MAX;

	t7 = (x273>>((x274*x275)%x276));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x281 = 33U;
	static int16_t x282 = -1;
	static int8_t x283 = -21;
	int64_t x284 = INT64_MAX;
	volatile int32_t t8 = 42;

	t8 = (x281>>((x282*x283)%x284));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x313 = 1470U;
	uint8_t x315 = 1U;
	static volatile int64_t x316 = -1LL;
	int32_t t9 = -384;

	t9 = (x313>>((x314*x315)%x316));

	if (t9 != 1470) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x321 = 880317U;
	int16_t x322 = INT16_MIN;
	volatile int8_t x323 = -7;
	uint32_t x324 = 2U;

	t10 = (x321>>((x322*x323)%x324));

	if (t10 != 880317U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MIN;
	volatile int8_t x332 = 22;
	volatile uint32_t t11 = 14421762U;

	t11 = (x329>>((x330*x331)%x332));

	if (t11 != 16383U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x349 = 15U;
	volatile int16_t x350 = INT16_MAX;
	int16_t x351 = -2;
	volatile int8_t x352 = -1;
	volatile uint32_t t12 = 4009U;

	t12 = (x349>>((x350*x351)%x352));

	if (t12 != 15U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x353 = UINT64_MAX;
	uint8_t x356 = UINT8_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (x353>>((x354*x355)%x356));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x377 = UINT64_MAX;
	static uint16_t x378 = 1U;
	static volatile int64_t x379 = -60578847LL;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x377>>((x378*x379)%x380));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x458 = INT8_MIN;
	int8_t x459 = 1;
	int64_t x460 = -1LL;
	int32_t t15 = -51;

	t15 = (x457>>((x458*x459)%x460));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x465 = 5451U;
	int32_t x466 = 9257;
	uint8_t x467 = 0U;
	int32_t x468 = 365;

	t16 = (x465>>((x466*x467)%x468));

	if (t16 != 5451) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x497 = 31U;
	static int64_t x498 = -1LL;
	static int32_t x499 = -1;
	static int8_t x500 = INT8_MIN;
	int32_t t17 = 2;

	t17 = (x497>>((x498*x499)%x500));

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x502 = INT8_MIN;
	int8_t x503 = INT8_MIN;
	volatile int16_t x504 = 60;
	static uint32_t t18 = 6303U;

	t18 = (x501>>((x502*x503)%x504));

	if (t18 != 268435455U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x577 = 341182213682072LL;
	int64_t x578 = -1849492LL;
	int64_t x579 = 6LL;
	volatile int64_t t19 = 314501815324295567LL;

	t19 = (x577>>((x578*x579)%x580));

	if (t19 != 341182213682072LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x649 = 787372335140900LLU;
	int64_t x650 = INT64_MAX;
	volatile int64_t x651 = -1LL;
	volatile int64_t x652 = INT64_MAX;
	uint64_t t20 = 997604196978340376LLU;

	t20 = (x649>>((x650*x651)%x652));

	if (t20 != 787372335140900LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x685 = INT16_MAX;
	volatile uint64_t x686 = 12469018953848271LLU;
	static int64_t x687 = -9106LL;
	int16_t x688 = 1;

	t21 = (x685>>((x686*x687)%x688));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x709 = 6U;
	int32_t x710 = INT32_MIN;
	volatile uint32_t x711 = 43150U;
	uint16_t x712 = 55U;

	t22 = (x709>>((x710*x711)%x712));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x725 = 95U;
	int8_t x726 = 0;
	uint16_t x727 = 1711U;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t23 = 19486426;

	t23 = (x725>>((x726*x727)%x728));

	if (t23 != 95) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x733 = 139334664U;
	int64_t x734 = -373879252976LL;
	int16_t x735 = 22;
	int64_t x736 = -1LL;
	uint32_t t24 = 0U;

	t24 = (x733>>((x734*x735)%x736));

	if (t24 != 139334664U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x753 = 9U;
	static int16_t x754 = INT16_MAX;
	int8_t x755 = INT8_MIN;
	static int16_t x756 = INT16_MAX;
	int32_t t25 = -2155644;

	t25 = (x753>>((x754*x755)%x756));

	if (t25 != 9) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x769 = 0U;
	volatile int8_t x770 = INT8_MAX;
	uint8_t x771 = 14U;
	int8_t x772 = -1;
	int32_t t26 = -2048608;

	t26 = (x769>>((x770*x771)%x772));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x777 = UINT32_MAX;
	uint32_t x778 = 114144U;
	int64_t x779 = -1LL;
	static int32_t x780 = -1;
	static uint32_t t27 = UINT32_MAX;

	t27 = (x777>>((x778*x779)%x780));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x781 = 1U;
	int8_t x782 = INT8_MAX;
	int32_t t28 = -1;

	t28 = (x781>>((x782*x783)%x784));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x817 = UINT32_MAX;
	static int16_t x818 = INT16_MAX;
	volatile uint8_t x819 = 7U;
	uint32_t t29 = 13U;

	t29 = (x817>>((x818*x819)%x820));

	if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x869 = 14067U;
	volatile uint64_t x870 = UINT64_MAX;
	int64_t x871 = -1LL;
	int32_t x872 = 38460;
	uint32_t t30 = 15862165U;

	t30 = (x869>>((x870*x871)%x872));

	if (t30 != 7033U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x926 = -1;
	uint16_t x927 = 969U;
	static uint32_t x928 = 104U;
	int32_t t31 = -1363868;

	t31 = (x925>>((x926*x927)%x928));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x941 = 987981951331LLU;
	uint32_t x942 = UINT32_MAX;
	volatile int16_t x943 = INT16_MAX;
	static int8_t x944 = INT8_MAX;
	uint64_t t32 = 419132246LLU;

	t32 = (x941>>((x942*x943)%x944));

	if (t32 != 30150816LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x953 = INT32_MAX;
	int32_t x954 = -646093129;
	volatile int8_t x955 = 1;
	int8_t x956 = -1;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x953>>((x954*x955)%x956));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x961 = 9248192849715LLU;
	int8_t x962 = -1;
	uint64_t x963 = UINT64_MAX;
	uint64_t x964 = 324805420032LLU;
	uint64_t t34 = 1089230782454029LLU;

	t34 = (x961>>((x962*x963)%x964));

	if (t34 != 4624096424857LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x985 = 15U;
	static uint32_t x986 = 65U;
	static int32_t x987 = INT32_MAX;
	static volatile int32_t t35 = 30670508;

	t35 = (x985>>((x986*x987)%x988));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x989 = UINT32_MAX;
	uint32_t x990 = 6353U;
	int64_t x991 = 6651523LL;
	static int16_t x992 = -1;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (x989>>((x990*x991)%x992));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x997 = 41923203651504483LL;
	uint32_t x999 = UINT32_MAX;
	int16_t x1000 = 10;

	t37 = (x997>>((x998*x999)%x1000));

	if (t37 != 1310100114109515LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x1030 = 492;
	static int32_t t38 = 4;

	t38 = (x1029>>((x1030*x1031)%x1032));

	if (t38 != 53) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1065 = 453565230577LLU;
	uint32_t x1066 = 115998466U;
	uint64_t t39 = 2967LLU;

	t39 = (x1065>>((x1066*x1067)%x1068));

	if (t39 != 885869590LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1090 = INT8_MAX;
	int8_t x1091 = INT8_MIN;
	int8_t x1092 = INT8_MIN;

	t40 = (x1089>>((x1090*x1091)%x1092));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1109 = 0;
	volatile int64_t x1110 = -2LL;
	uint8_t x1111 = 0U;
	int32_t t41 = 9204397;

	t41 = (x1109>>((x1110*x1111)%x1112));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1125 = UINT64_MAX;
	volatile int32_t x1126 = -442;
	volatile int32_t x1127 = -3;
	volatile uint8_t x1128 = 25U;
	volatile uint64_t t42 = 2835495524LLU;

	t42 = (x1125>>((x1126*x1127)%x1128));

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1133 = INT64_MAX;
	volatile int32_t x1134 = -1;
	int32_t x1135 = -1;
	static volatile int64_t t43 = 1386LL;

	t43 = (x1133>>((x1134*x1135)%x1136));

	if (t43 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1209 = 0U;
	int16_t x1211 = -1;
	uint64_t x1212 = 3787817398315408LLU;

	t44 = (x1209>>((x1210*x1211)%x1212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1273 = INT8_MAX;
	int8_t x1275 = 3;
	static uint16_t x1276 = UINT16_MAX;
	volatile int32_t t45 = -862367;

	t45 = (x1273>>((x1274*x1275)%x1276));

	if (t45 != 15) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1277 = INT64_MAX;
	int8_t x1278 = 2;
	volatile uint16_t x1279 = 12943U;
	int64_t x1280 = -1LL;
	int64_t t46 = INT64_MAX;

	t46 = (x1277>>((x1278*x1279)%x1280));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1290 = -1;
	static int64_t x1291 = -1LL;
	int32_t x1292 = 239530287;

	t47 = (x1289>>((x1290*x1291)%x1292));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1297 = 48U;
	volatile int16_t x1298 = -1;
	int8_t x1300 = -1;
	uint32_t t48 = 4U;

	t48 = (x1297>>((x1298*x1299)%x1300));

	if (t48 != 48U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1305 = UINT32_MAX;
	int32_t x1307 = INT32_MIN;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x1305>>((x1306*x1307)%x1308));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x1333 = 1LLU;
	static uint64_t x1334 = UINT64_MAX;
	int8_t x1336 = 62;

	t50 = (x1333>>((x1334*x1335)%x1336));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1345 = 63U;
	int16_t x1348 = INT16_MIN;
	volatile int32_t t51 = -2416179;

	t51 = (x1345>>((x1346*x1347)%x1348));

	if (t51 != 31) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1370 = UINT64_MAX;
	static int32_t x1371 = -389744200;
	int8_t x1372 = 3;

	t52 = (x1369>>((x1370*x1371)%x1372));

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1401 = 4U;
	int32_t x1402 = 241020;
	static volatile int16_t x1403 = -1;
	uint16_t x1404 = 2U;
	int32_t t53 = -478;

	t53 = (x1401>>((x1402*x1403)%x1404));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1437 = INT32_MAX;
	int64_t x1439 = -101695507373736LL;
	volatile int32_t t54 = -34418;

	t54 = (x1437>>((x1438*x1439)%x1440));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x1513 = 48;
	uint32_t x1514 = 834732U;
	int32_t x1515 = INT32_MIN;
	int8_t x1516 = INT8_MIN;
	static int32_t t55 = -5873;

	t55 = (x1513>>((x1514*x1515)%x1516));

	if (t55 != 48) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1525 = INT32_MAX;
	int8_t x1527 = -1;
	int32_t x1528 = 1;

	t56 = (x1525>>((x1526*x1527)%x1528));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1545 = 1;
	int64_t x1546 = 38381162LL;
	int16_t x1547 = INT16_MAX;
	volatile int32_t t57 = -14734031;

	t57 = (x1545>>((x1546*x1547)%x1548));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x1650 = -1;
	volatile int16_t x1652 = -1;

	t58 = (x1649>>((x1650*x1651)%x1652));

	if (t58 != 13) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1658 = 131666LLU;
	static int64_t x1659 = -1LL;
	uint64_t x1660 = 3LLU;
	volatile uint64_t t59 = 17817736338627329LLU;

	t59 = (x1657>>((x1658*x1659)%x1660));

	if (t59 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1669 = INT32_MAX;
	uint8_t x1670 = 0U;
	uint16_t x1671 = 15993U;
	int64_t x1672 = 160585323913634LL;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x1669>>((x1670*x1671)%x1672));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1687 = -1LL;
	int8_t x1688 = -1;

	t61 = (x1685>>((x1686*x1687)%x1688));

	if (t61 != 17604617086195525LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1697 = 1619392557119689588LLU;
	int16_t x1698 = INT16_MAX;
	int16_t x1699 = -1;
	static int16_t x1700 = INT16_MAX;
	static uint64_t t62 = 5036LLU;

	t62 = (x1697>>((x1698*x1699)%x1700));

	if (t62 != 1619392557119689588LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1713 = INT16_MAX;
	int16_t x1714 = INT16_MIN;
	uint8_t x1715 = UINT8_MAX;
	uint64_t x1716 = 22LLU;
	static volatile int32_t t63 = 10;

	t63 = (x1713>>((x1714*x1715)%x1716));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1721 = 652;
	uint8_t x1722 = 2U;
	static uint16_t x1723 = 30155U;
	int16_t x1724 = -1;
	volatile int32_t t64 = 105329;

	t64 = (x1721>>((x1722*x1723)%x1724));

	if (t64 != 652) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x1738 = 187;
	static uint64_t x1740 = 12LLU;

	t65 = (x1737>>((x1738*x1739)%x1740));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x1777 = UINT32_MAX;
	int8_t x1778 = INT8_MIN;
	int8_t x1779 = -1;
	int8_t x1780 = INT8_MIN;
	static uint32_t t66 = UINT32_MAX;

	t66 = (x1777>>((x1778*x1779)%x1780));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1790 = UINT16_MAX;
	uint16_t x1791 = 1U;
	int64_t x1792 = 4LL;
	volatile uint64_t t67 = 1395279161LLU;

	t67 = (x1789>>((x1790*x1791)%x1792));

	if (t67 != 3922311002LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1805 = 3245;
	int16_t x1806 = -1;
	uint32_t x1807 = UINT32_MAX;
	int16_t x1808 = 1;
	int32_t t68 = 13566;

	t68 = (x1805>>((x1806*x1807)%x1808));

	if (t68 != 3245) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x1837 = 4U;
	uint32_t x1839 = 12U;
	int8_t x1840 = INT8_MIN;

	t69 = (x1837>>((x1838*x1839)%x1840));

	if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x1842 = UINT32_MAX;
	int8_t x1843 = -2;
	static uint16_t x1844 = 2U;

	t70 = (x1841>>((x1842*x1843)%x1844));

	if (t70 != 25) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x1882 = -1LL;
	int16_t x1883 = INT16_MIN;
	static int8_t x1884 = 1;

	t71 = (x1881>>((x1882*x1883)%x1884));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1893 = 868;
	volatile uint16_t x1894 = 4U;
	int64_t x1895 = 77874354908657343LL;
	uint32_t x1896 = 87U;

	t72 = (x1893>>((x1894*x1895)%x1896));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x1949 = 31822U;
	int64_t x1950 = -2372254472448345785LL;
	int64_t x1951 = -1LL;
	volatile int32_t t73 = 716795858;

	t73 = (x1949>>((x1950*x1951)%x1952));

	if (t73 != 31822) { NG(); } else { ; }
	
}

void f74(void) {


	t74 = (x1981>>((x1982*x1983)%x1984));

	if (t74 != 46800LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x2025 = UINT32_MAX;
	static int16_t x2026 = INT16_MIN;
	int16_t x2027 = INT16_MIN;
	volatile int64_t x2028 = -1LL;
	static volatile uint32_t t75 = UINT32_MAX;

	t75 = (x2025>>((x2026*x2027)%x2028));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2129 = INT8_MAX;
	int16_t x2130 = INT16_MIN;
	uint8_t x2131 = 83U;
	volatile int16_t x2132 = INT16_MIN;
	volatile int32_t t76 = -51670;

	t76 = (x2129>>((x2130*x2131)%x2132));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2254 = INT64_MAX;
	int8_t x2255 = 0;
	int8_t x2256 = -1;
	int32_t t77 = 4;

	t77 = (x2253>>((x2254*x2255)%x2256));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x2261 = 147432848968256783LLU;
	uint16_t x2262 = UINT16_MAX;
	int8_t x2263 = -1;
	uint32_t x2264 = 16U;
	static volatile uint64_t t78 = 16LLU;

	t78 = (x2261>>((x2262*x2263)%x2264));

	if (t78 != 73716424484128391LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2281 = 620LLU;
	int64_t x2282 = -1LL;
	static int8_t x2283 = -33;
	static volatile uint64_t x2284 = 69372037219901LLU;

	t79 = (x2281>>((x2282*x2283)%x2284));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2297 = 3567191301050913676LLU;
	int16_t x2298 = -1;
	static volatile int8_t x2299 = INT8_MIN;
	uint8_t x2300 = 16U;

	t80 = (x2297>>((x2298*x2299)%x2300));

	if (t80 != 3567191301050913676LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2369 = INT8_MAX;
	volatile uint32_t x2370 = UINT32_MAX;
	int32_t x2371 = INT32_MIN;
	int32_t x2372 = INT32_MAX;
	int32_t t81 = 12988293;

	t81 = (x2369>>((x2370*x2371)%x2372));

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2385 = 58U;
	static int64_t x2386 = -958646711127LL;
	uint16_t x2387 = 0U;
	static volatile int32_t t82 = 58469329;

	t82 = (x2385>>((x2386*x2387)%x2388));

	if (t82 != 58) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x2449 = 158648LL;
	uint32_t x2450 = 1946U;
	uint32_t x2451 = 4U;

	t83 = (x2449>>((x2450*x2451)%x2452));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2486 = 40U;

	t84 = (x2485>>((x2486*x2487)%x2488));

	if (t84 != 2017190U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2489 = UINT8_MAX;
	uint8_t x2492 = 4U;
	volatile int32_t t85 = 54;

	t85 = (x2489>>((x2490*x2491)%x2492));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x2533 = 0U;
	volatile int64_t x2534 = 2LL;
	uint8_t x2535 = 1U;
	uint8_t x2536 = 57U;
	int32_t t86 = 1657;

	t86 = (x2533>>((x2534*x2535)%x2536));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2549 = 27182U;
	int8_t x2550 = INT8_MIN;
	int8_t x2551 = -1;
	uint16_t x2552 = 60U;
	int32_t t87 = 13598889;

	t87 = (x2549>>((x2550*x2551)%x2552));

	if (t87 != 106) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2581 = 59870LLU;
	static int32_t x2584 = INT32_MIN;
	volatile uint64_t t88 = 8680LLU;

	t88 = (x2581>>((x2582*x2583)%x2584));

	if (t88 != 59870LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2589 = 52U;
	uint8_t x2590 = 12U;
	static int16_t x2591 = INT16_MAX;
	uint8_t x2592 = 8U;

	t89 = (x2589>>((x2590*x2591)%x2592));

	if (t89 != 3U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2653 = 28U;
	static int64_t x2654 = -2167LL;
	static int16_t x2655 = -1;
	volatile int8_t x2656 = -1;
	int32_t t90 = -17616;

	t90 = (x2653>>((x2654*x2655)%x2656));

	if (t90 != 28) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2685 = UINT8_MAX;
	volatile int32_t x2686 = INT32_MIN;
	int8_t x2687 = 0;
	uint8_t x2688 = 26U;
	static int32_t t91 = -485056;

	t91 = (x2685>>((x2686*x2687)%x2688));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x2690 = INT16_MAX;
	int8_t x2691 = INT8_MIN;
	static int8_t x2692 = INT8_MIN;

	t92 = (x2689>>((x2690*x2691)%x2692));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x2709 = 0LLU;
	int32_t x2710 = -1;
	uint64_t x2711 = UINT64_MAX;
	int8_t x2712 = INT8_MIN;
	static volatile uint64_t t93 = 11136805291LLU;

	t93 = (x2709>>((x2710*x2711)%x2712));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2765 = INT16_MAX;
	static int8_t x2766 = INT8_MAX;
	int8_t x2767 = INT8_MIN;
	static int8_t x2768 = INT8_MIN;
	volatile int32_t t94 = -8259737;

	t94 = (x2765>>((x2766*x2767)%x2768));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x2782 = -1LL;
	static uint64_t x2783 = 11093596495227LLU;
	static uint32_t x2784 = 9U;

	t95 = (x2781>>((x2782*x2783)%x2784));

	if (t95 != 33554431U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x2785 = 102U;
	static uint64_t x2786 = UINT64_MAX;
	int8_t x2787 = INT8_MIN;
	int16_t x2788 = 19;
	volatile int32_t t96 = 49;

	t96 = (x2785>>((x2786*x2787)%x2788));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2805 = 13866;
	int32_t x2806 = -21;
	int64_t x2807 = 17216LL;
	int16_t x2808 = -1;
	volatile int32_t t97 = -895;

	t97 = (x2805>>((x2806*x2807)%x2808));

	if (t97 != 13866) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x2817 = 27U;
	static volatile int32_t x2818 = -1;
	int32_t x2819 = -1;
	int16_t x2820 = -1;
	volatile int32_t t98 = -94772817;

	t98 = (x2817>>((x2818*x2819)%x2820));

	if (t98 != 27) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2849 = UINT64_MAX;
	int16_t x2851 = 2;
	static int32_t x2852 = -1;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x2849>>((x2850*x2851)%x2852));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

