#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MAX;
int8_t x6 = 0;
static uint32_t t1 = 54206959U;
int8_t x38 = INT8_MAX;
int32_t x149 = -348313;
static int64_t x169 = -1LL;
int32_t x181 = INT32_MAX;
volatile uint64_t t6 = 324029LLU;
static int64_t x275 = 225095518594LL;
uint8_t x276 = 4U;
uint64_t t7 = 24632899230866062LLU;
uint8_t x339 = UINT8_MAX;
uint8_t x457 = 17U;
uint64_t t11 = 345848734018LLU;
static uint16_t x633 = 6U;
uint64_t x681 = 48LLU;
int16_t x831 = INT16_MIN;
uint8_t x934 = 30U;
int16_t x935 = -1;
volatile uint32_t t17 = 845136832U;
int8_t x1010 = INT8_MIN;
int32_t t18 = -9;
int16_t x1041 = INT16_MIN;
static uint8_t x1081 = 0U;
volatile uint64_t x1083 = 23169450172LLU;
volatile uint32_t x1084 = 5U;
volatile uint8_t x1116 = 8U;
static volatile uint32_t t21 = 12517U;
volatile int8_t x1176 = 10;
int32_t x1229 = INT32_MIN;
volatile uint64_t t25 = 909279997LLU;
volatile int8_t x1373 = INT8_MIN;
uint16_t x1376 = 9U;
volatile uint64_t t27 = 9LLU;
volatile uint8_t x1386 = 19U;
int64_t x1387 = INT64_MIN;
static int8_t x1493 = 2;
uint32_t x1562 = 447699004U;
int16_t x1577 = INT16_MAX;
int64_t x1698 = INT64_MAX;
volatile uint64_t t37 = 16507LLU;
static int16_t x1962 = -5;
uint32_t x1999 = 4213U;
static volatile uint8_t x2000 = 11U;
uint64_t x2010 = 60139415LLU;
int8_t x2011 = -1;
uint8_t x2176 = 11U;
volatile int64_t t45 = -214746186988991LL;
volatile uint64_t t46 = 12961976806679189LLU;
volatile int8_t x2309 = 1;
uint16_t x2347 = 336U;
static int8_t x2379 = INT8_MIN;
int8_t x2421 = INT8_MAX;
volatile int8_t x2424 = 1;
volatile int64_t t52 = 237LL;
static uint8_t x2450 = 1U;
int64_t x2507 = INT64_MIN;
volatile uint64_t t56 = 379422566LLU;
volatile uint8_t x2537 = 11U;
volatile uint64_t x2539 = UINT64_MAX;
uint16_t x2554 = 19262U;
int32_t x2613 = 253;
volatile int32_t x2728 = 2;
volatile uint8_t x2842 = UINT8_MAX;
static int32_t x2850 = -1;
int8_t x2851 = INT8_MAX;
static volatile uint8_t x2934 = UINT8_MAX;
volatile int8_t x2942 = 1;
volatile int32_t t67 = 100;
int8_t x3146 = 49;
volatile int64_t t69 = 0LL;
int16_t x3211 = INT16_MIN;
volatile int8_t x3234 = INT8_MAX;
uint32_t t74 = 463U;
static volatile int32_t t76 = -3;
int64_t x3361 = INT64_MIN;
int8_t x3379 = -1;
int32_t x3450 = 357;
int64_t x3474 = 904031937802595303LL;
uint16_t x3476 = 3U;
static uint64_t x3513 = 4398963640879030LLU;
static uint64_t x3514 = 458627LLU;
int64_t x3516 = 0LL;
uint64_t t82 = 14632835450LLU;
uint8_t x3536 = 5U;
int64_t t84 = 12797544438304LL;
uint64_t x3922 = 40LLU;
uint64_t t91 = 8427418189432188909LLU;
volatile uint32_t x3929 = UINT32_MAX;
uint64_t x3931 = 16LLU;
uint8_t x3932 = 59U;
uint8_t x4058 = 115U;
int64_t x4085 = -1LL;
static int32_t x4135 = INT32_MAX;
int32_t t96 = 10;
static volatile uint64_t t98 = 261309777LLU;


void f0(void) {
	int64_t x7 = 4363173288565LL;
	uint8_t x8 = 5U;
	volatile int64_t t0 = -65412966LL;

	t0 = ((x5*(x6&x7))>>x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x33 = UINT8_MAX;
	volatile uint32_t x34 = 1379U;
	volatile uint32_t x35 = UINT32_MAX;
	uint16_t x36 = 3U;

	t1 = ((x33*(x34&x35))>>x36);

	if (t1 != 43955U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x37 = UINT16_MAX;
	int16_t x39 = INT16_MIN;
	volatile uint64_t x40 = 4LLU;
	volatile int32_t t2 = -172650;

	t2 = ((x37*(x38&x39))>>x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x150 = -1;
	static uint32_t x151 = UINT32_MAX;
	static int8_t x152 = 0;
	static volatile uint32_t t3 = 430197931U;

	t3 = ((x149*(x150&x151))>>x152);

	if (t3 != 348313U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x170 = INT8_MAX;
	uint64_t x171 = 38LLU;
	static uint8_t x172 = 20U;
	volatile uint64_t t4 = 2533823382LLU;

	t4 = ((x169*(x170&x171))>>x172);

	if (t4 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x182 = 4221LLU;
	uint8_t x183 = 2U;
	int8_t x184 = 24;
	uint64_t t5 = 371635231006095LLU;

	t5 = ((x181*(x182&x183))>>x184);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = 65755780;
	uint64_t x251 = UINT64_MAX;
	uint16_t x252 = 1U;

	t6 = ((x249*(x250&x251))>>x252);

	if (t6 != 70604731122864830LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x273 = 3735438U;
	uint64_t x274 = 439LLU;

	t7 = ((x273*(x274&x275))>>x276);

	if (t7 != 90117441LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x285 = INT32_MIN;
	uint64_t x286 = 24LLU;
	volatile uint8_t x287 = 0U;
	static uint64_t x288 = 5LLU;
	uint64_t t8 = 8847589LLU;

	t8 = ((x285*(x286&x287))>>x288);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x337 = 1758792971389218LL;
	int16_t x338 = -1801;
	volatile uint16_t x340 = 12U;
	int64_t t9 = 2151264581377LL;

	t9 = ((x337*(x338&x339))>>x340);

	if (t9 != 106060025374300LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x458 = INT16_MIN;
	int16_t x459 = 1288;
	static int8_t x460 = 9;
	int32_t t10 = 46;

	t10 = ((x457*(x458&x459))>>x460);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x525 = -1;
	uint64_t x526 = 7343893652895162LLU;
	int8_t x527 = 23;
	int16_t x528 = 12;

	t11 = ((x525*(x526&x527))>>x528);

	if (t11 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x634 = INT32_MAX;
	uint64_t x635 = UINT64_MAX;
	static volatile int16_t x636 = 2;
	uint64_t t12 = 355474678141LLU;

	t12 = ((x633*(x634&x635))>>x636);

	if (t12 != 3221225470LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x637 = INT16_MAX;
	int32_t x638 = -773;
	int16_t x639 = 0;
	uint8_t x640 = 16U;
	static volatile int32_t t13 = -742606;

	t13 = ((x637*(x638&x639))>>x640);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x682 = INT16_MIN;
	int64_t x683 = INT64_MIN;
	uint8_t x684 = 0U;
	uint64_t t14 = 380927LLU;

	t14 = ((x681*(x682&x683))>>x684);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x829 = INT16_MIN;
	int32_t x830 = 469;
	int8_t x832 = 4;
	int32_t t15 = -3364;

	t15 = ((x829*(x830&x831))>>x832);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x909 = 6U;
	int64_t x910 = INT64_MIN;
	volatile uint16_t x911 = UINT16_MAX;
	int8_t x912 = 10;
	int64_t t16 = -521852685136LL;

	t16 = ((x909*(x910&x911))>>x912);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x933 = UINT32_MAX;
	volatile uint8_t x936 = 25U;

	t17 = ((x933*(x934&x935))>>x936);

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1009 = INT16_MIN;
	int32_t x1011 = 12;
	volatile uint8_t x1012 = 0U;

	t18 = ((x1009*(x1010&x1011))>>x1012);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1042 = INT64_MAX;
	uint64_t x1043 = UINT64_MAX;
	int8_t x1044 = 0;
	uint64_t t19 = 15LLU;

	t19 = ((x1041*(x1042&x1043))>>x1044);

	if (t19 != 32768LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1082 = INT64_MAX;
	static uint64_t t20 = 15397638395312LLU;

	t20 = ((x1081*(x1082&x1083))>>x1084);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1113 = INT16_MAX;
	uint16_t x1114 = 5611U;
	uint32_t x1115 = 67U;

	t21 = ((x1113*(x1114&x1115))>>x1116);

	if (t21 != 8575U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1121 = -105490669779LL;
	uint32_t x1122 = 26760048U;
	static volatile uint64_t x1123 = UINT64_MAX;
	volatile int16_t x1124 = 0;
	uint64_t t22 = 1790446223429813LLU;

	t22 = ((x1121*(x1122&x1123))>>x1124);

	if (t22 != 15623808686871362224LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1153 = 4815590LLU;
	int64_t x1154 = INT64_MIN;
	int8_t x1155 = -1;
	static uint8_t x1156 = 40U;
	static volatile uint64_t t23 = 216237242319899LLU;

	t23 = ((x1153*(x1154&x1155))>>x1156);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1173 = 49019LL;
	int16_t x1174 = INT16_MIN;
	uint8_t x1175 = 120U;
	volatile int64_t t24 = -23948317622828946LL;

	t24 = ((x1173*(x1174&x1175))>>x1176);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1230 = -6;
	uint64_t x1231 = 1527881977455970232LLU;
	int16_t x1232 = 2;

	t25 = ((x1229*(x1230&x1231))>>x1232);

	if (t25 != 4062386540519620608LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1297 = -2637;
	volatile uint64_t x1298 = 2471618432182120LLU;
	uint64_t x1299 = UINT64_MAX;
	int8_t x1300 = 1;
	uint64_t t26 = 312235111LLU;

	t26 = ((x1297*(x1298&x1299))>>x1300);

	if (t26 != 5964543134022650588LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1374 = UINT64_MAX;
	static uint8_t x1375 = 61U;

	t27 = ((x1373*(x1374&x1375))>>x1376);

	if (t27 != 36028797018963952LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1385 = INT16_MIN;
	int16_t x1388 = 1;
	volatile int64_t t28 = -4134889LL;

	t28 = ((x1385*(x1386&x1387))>>x1388);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1494 = 77151280513232LL;
	int16_t x1495 = -1;
	int16_t x1496 = 12;
	volatile int64_t t29 = -3532271151702265LL;

	t29 = ((x1493*(x1494&x1495))>>x1496);

	if (t29 != 37671523688LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1513 = UINT8_MAX;
	int16_t x1514 = 63;
	int16_t x1515 = -913;
	uint32_t x1516 = 2U;
	static int32_t t30 = -105653;

	t30 = ((x1513*(x1514&x1515))>>x1516);

	if (t30 != 2996) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1533 = INT8_MIN;
	uint16_t x1534 = 20U;
	volatile int16_t x1535 = INT16_MIN;
	volatile uint16_t x1536 = 1U;
	volatile int32_t t31 = -336306;

	t31 = ((x1533*(x1534&x1535))>>x1536);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1561 = INT8_MIN;
	uint16_t x1563 = UINT16_MAX;
	uint8_t x1564 = 0U;
	uint32_t t32 = 132414U;

	t32 = ((x1561*(x1562&x1563))>>x1564);

	if (t32 != 4292076032U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1578 = 33369585572LLU;
	volatile uint16_t x1579 = 222U;
	static int8_t x1580 = 17;
	volatile uint64_t t33 = 1550427494LLU;

	t33 = ((x1577*(x1578&x1579))>>x1580);

	if (t33 != 32LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1649 = UINT16_MAX;
	int64_t x1650 = 536LL;
	static int32_t x1651 = 23;
	uint8_t x1652 = 8U;
	volatile int64_t t34 = 56LL;

	t34 = ((x1649*(x1650&x1651))>>x1652);

	if (t34 != 4095LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1697 = UINT8_MAX;
	int8_t x1699 = INT8_MAX;
	uint16_t x1700 = 0U;
	volatile int64_t t35 = 7320LL;

	t35 = ((x1697*(x1698&x1699))>>x1700);

	if (t35 != 32385LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1745 = 79;
	volatile uint16_t x1746 = 7U;
	int32_t x1747 = INT32_MIN;
	volatile uint8_t x1748 = 31U;
	int32_t t36 = 70894;

	t36 = ((x1745*(x1746&x1747))>>x1748);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1777 = INT64_MIN;
	int64_t x1778 = -1LL;
	uint64_t x1779 = 14505753LLU;
	static volatile int32_t x1780 = 1;

	t37 = ((x1777*(x1778&x1779))>>x1780);

	if (t37 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1813 = INT32_MAX;
	uint64_t x1814 = UINT64_MAX;
	static volatile int32_t x1815 = -1;
	static uint8_t x1816 = 9U;
	uint64_t t38 = 45089827503335417LLU;

	t38 = ((x1813*(x1814&x1815))>>x1816);

	if (t38 != 36028797014769664LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1877 = 19;
	int8_t x1878 = INT8_MIN;
	int8_t x1879 = 0;
	uint32_t x1880 = 27U;
	volatile int32_t t39 = 58338;

	t39 = ((x1877*(x1878&x1879))>>x1880);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1945 = INT8_MIN;
	static uint32_t x1946 = 2149U;
	static int8_t x1947 = 1;
	static uint8_t x1948 = 21U;
	uint32_t t40 = 356U;

	t40 = ((x1945*(x1946&x1947))>>x1948);

	if (t40 != 2047U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1961 = 18368178107344195LLU;
	uint32_t x1963 = 11499092U;
	uint8_t x1964 = 10U;
	static uint64_t t41 = 710056LLU;

	t41 = ((x1961*(x1962&x1963))>>x1964);

	if (t41 != 2028136767557217LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1997 = 2811160445496LLU;
	int16_t x1998 = INT16_MAX;
	uint64_t t42 = 140742647LLU;

	t42 = ((x1997*(x1998&x1999))>>x2000);

	if (t42 != 5782919412536LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2009 = 131;
	volatile uint8_t x2012 = 0U;
	volatile uint64_t t43 = 1936217172LLU;

	t43 = ((x2009*(x2010&x2011))>>x2012);

	if (t43 != 7878263365LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2173 = INT8_MIN;
	volatile uint64_t x2174 = 505925365131627LLU;
	uint8_t x2175 = UINT8_MAX;
	uint64_t t44 = 8260LLU;

	t44 = ((x2173*(x2174&x2175))>>x2176);

	if (t44 != 9007199254740985LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2209 = INT64_MIN;
	uint8_t x2210 = 102U;
	int64_t x2211 = INT64_MIN;
	uint8_t x2212 = 0U;

	t45 = ((x2209*(x2210&x2211))>>x2212);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2265 = 2587U;
	int64_t x2266 = INT64_MAX;
	uint64_t x2267 = 39309LLU;
	int8_t x2268 = 1;

	t46 = ((x2265*(x2266&x2267))>>x2268);

	if (t46 != 50846191LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2293 = INT64_MAX;
	uint8_t x2294 = UINT8_MAX;
	uint64_t x2295 = 137991889682369LLU;
	int16_t x2296 = 9;
	uint64_t t47 = 460388135494LLU;

	t47 = ((x2293*(x2294&x2295))>>x2296);

	if (t47 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2310 = 2U;
	static int16_t x2311 = -1;
	uint16_t x2312 = 3U;
	volatile int32_t t48 = -4183;

	t48 = ((x2309*(x2310&x2311))>>x2312);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2345 = INT16_MAX;
	int8_t x2346 = 1;
	static int8_t x2348 = 10;
	volatile int32_t t49 = -64672;

	t49 = ((x2345*(x2346&x2347))>>x2348);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2377 = -1727798LL;
	static volatile uint64_t x2378 = UINT64_MAX;
	volatile int16_t x2380 = 1;
	uint64_t t50 = 7419612LLU;

	t50 = ((x2377*(x2378&x2379))>>x2380);

	if (t50 != 110579072LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x2422 = 45491823LLU;
	uint8_t x2423 = 0U;
	static uint64_t t51 = 1999LLU;

	t51 = ((x2421*(x2422&x2423))>>x2424);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x2433 = 32727674980334LL;
	volatile int8_t x2434 = 6;
	int8_t x2435 = INT8_MIN;
	static volatile uint8_t x2436 = 3U;

	t52 = ((x2433*(x2434&x2435))>>x2436);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2449 = 1;
	int8_t x2451 = INT8_MAX;
	int8_t x2452 = 1;
	volatile int32_t t53 = -5;

	t53 = ((x2449*(x2450&x2451))>>x2452);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2469 = -1;
	volatile int32_t x2470 = INT32_MIN;
	static uint8_t x2471 = UINT8_MAX;
	uint8_t x2472 = 0U;
	volatile int32_t t54 = -84;

	t54 = ((x2469*(x2470&x2471))>>x2472);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2501 = -1;
	int32_t x2502 = INT32_MIN;
	volatile uint8_t x2503 = 0U;
	static uint16_t x2504 = 17U;
	int32_t t55 = 1782281;

	t55 = ((x2501*(x2502&x2503))>>x2504);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2505 = 1091339LLU;
	volatile int8_t x2506 = 6;
	uint8_t x2508 = 52U;

	t56 = ((x2505*(x2506&x2507))>>x2508);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2538 = 1568U;
	uint8_t x2540 = 2U;
	volatile uint64_t t57 = 11473963743594957LLU;

	t57 = ((x2537*(x2538&x2539))>>x2540);

	if (t57 != 4312LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2553 = INT16_MAX;
	int64_t x2555 = -252157728904892LL;
	uint8_t x2556 = 46U;
	volatile int64_t t58 = 2782804336LL;

	t58 = ((x2553*(x2554&x2555))>>x2556);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2614 = INT16_MIN;
	int8_t x2615 = INT8_MAX;
	uint16_t x2616 = 0U;
	volatile int32_t t59 = 25058;

	t59 = ((x2613*(x2614&x2615))>>x2616);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2633 = -1;
	volatile int32_t x2634 = -1040567;
	uint64_t x2635 = UINT64_MAX;
	static volatile uint8_t x2636 = 5U;
	static volatile uint64_t t60 = 1510466LLU;

	t60 = ((x2633*(x2634&x2635))>>x2636);

	if (t60 != 32517LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x2725 = 17207LLU;
	static int16_t x2726 = INT16_MIN;
	static uint16_t x2727 = 25055U;
	uint64_t t61 = 1230574LLU;

	t61 = ((x2725*(x2726&x2727))>>x2728);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x2841 = 691252746648511LLU;
	static uint64_t x2843 = UINT64_MAX;
	uint8_t x2844 = 0U;
	volatile uint64_t t62 = 29083358568LLU;

	t62 = ((x2841*(x2842&x2843))>>x2844);

	if (t62 != 176269450395370305LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2849 = 1;
	uint8_t x2852 = 1U;
	int32_t t63 = -160900475;

	t63 = ((x2849*(x2850&x2851))>>x2852);

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2869 = 465454929774688578LLU;
	static int16_t x2870 = INT16_MIN;
	uint32_t x2871 = 7377U;
	uint8_t x2872 = 33U;
	volatile uint64_t t64 = 157LLU;

	t64 = ((x2869*(x2870&x2871))>>x2872);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x2925 = INT32_MAX;
	static uint64_t x2926 = 13134LLU;
	uint16_t x2927 = 4261U;
	uint16_t x2928 = 13U;
	static uint64_t t65 = 141837639LLU;

	t65 = ((x2925*(x2926&x2927))>>x2928);

	if (t65 != 1074790399LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2933 = 1U;
	int16_t x2935 = 11206;
	volatile int8_t x2936 = 4;
	int32_t t66 = 1807572;

	t66 = ((x2933*(x2934&x2935))>>x2936);

	if (t66 != 12) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2941 = UINT8_MAX;
	static int16_t x2943 = 4;
	uint16_t x2944 = 1U;

	t67 = ((x2941*(x2942&x2943))>>x2944);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3145 = UINT32_MAX;
	static int32_t x3147 = INT32_MIN;
	static volatile uint64_t x3148 = 8LLU;
	volatile uint32_t t68 = 773U;

	t68 = ((x3145*(x3146&x3147))>>x3148);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3169 = 1U;
	int64_t x3170 = INT64_MIN;
	int16_t x3171 = INT16_MAX;
	uint8_t x3172 = 61U;

	t69 = ((x3169*(x3170&x3171))>>x3172);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x3181 = 1;
	volatile int16_t x3182 = INT16_MIN;
	volatile int8_t x3183 = INT8_MAX;
	uint8_t x3184 = 1U;
	volatile int32_t t70 = 84431;

	t70 = ((x3181*(x3182&x3183))>>x3184);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3201 = INT32_MIN;
	uint64_t x3202 = 98153LLU;
	static volatile uint8_t x3203 = 2U;
	static volatile uint8_t x3204 = 19U;
	uint64_t t71 = 41345LLU;

	t71 = ((x3201*(x3202&x3203))>>x3204);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x3209 = INT8_MIN;
	int32_t x3210 = -41109;
	volatile uint32_t x3212 = 9U;
	int32_t t72 = 421834547;

	t72 = ((x3209*(x3210&x3211))>>x3212);

	if (t72 != 16384) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3233 = INT64_MIN;
	int64_t x3235 = INT64_MIN;
	volatile int32_t x3236 = 2;
	volatile int64_t t73 = 4LL;

	t73 = ((x3233*(x3234&x3235))>>x3236);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3265 = -1;
	volatile uint32_t x3266 = 458U;
	int16_t x3267 = INT16_MIN;
	uint8_t x3268 = 1U;

	t74 = ((x3265*(x3266&x3267))>>x3268);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3321 = -3;
	volatile int32_t x3322 = INT32_MIN;
	uint32_t x3323 = 265924699U;
	uint8_t x3324 = 20U;
	uint32_t t75 = 3U;

	t75 = ((x3321*(x3322&x3323))>>x3324);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3325 = 0;
	uint8_t x3326 = 0U;
	int16_t x3327 = INT16_MIN;
	uint32_t x3328 = 7U;

	t76 = ((x3325*(x3326&x3327))>>x3328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x3362 = 973LLU;
	uint16_t x3363 = UINT16_MAX;
	uint8_t x3364 = 12U;
	uint64_t t77 = 3LLU;

	t77 = ((x3361*(x3362&x3363))>>x3364);

	if (t77 != 2251799813685248LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x3377 = -1;
	static int64_t x3378 = -1LL;
	int16_t x3380 = 28;
	int64_t t78 = 792066652880LL;

	t78 = ((x3377*(x3378&x3379))>>x3380);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3449 = 89;
	uint32_t x3451 = 206515U;
	int16_t x3452 = 5;
	volatile uint32_t t79 = 1564885U;

	t79 = ((x3449*(x3450&x3451))>>x3452);

	if (t79 != 91U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3453 = 9U;
	volatile int8_t x3454 = -1;
	volatile uint16_t x3455 = 56U;
	int8_t x3456 = 11;
	volatile int32_t t80 = 68212;

	t80 = ((x3453*(x3454&x3455))>>x3456);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3473 = INT8_MAX;
	static int64_t x3475 = 154871652208LL;
	volatile int64_t t81 = 859336801550LL;

	t81 = ((x3473*(x3474&x3475))>>x3476);

	if (t81 != 1615502484LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3515 = -1LL;

	t82 = ((x3513*(x3514&x3515))>>x3516);

	if (t82 != 6788393691085765666LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3517 = INT8_MAX;
	static int64_t x3518 = INT64_MIN;
	uint32_t x3519 = UINT32_MAX;
	uint8_t x3520 = 10U;
	static int64_t t83 = -261895583LL;

	t83 = ((x3517*(x3518&x3519))>>x3520);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3533 = -95426LL;
	static int16_t x3534 = INT16_MIN;
	int64_t x3535 = 0LL;

	t84 = ((x3533*(x3534&x3535))>>x3536);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3621 = INT8_MAX;
	volatile int64_t x3622 = INT64_MIN;
	static uint16_t x3623 = 7349U;
	int8_t x3624 = 0;
	volatile int64_t t85 = -327037538024LL;

	t85 = ((x3621*(x3622&x3623))>>x3624);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3661 = UINT32_MAX;
	int8_t x3662 = -1;
	static int32_t x3663 = INT32_MIN;
	volatile int64_t x3664 = 10LL;
	volatile uint32_t t86 = 122093U;

	t86 = ((x3661*(x3662&x3663))>>x3664);

	if (t86 != 2097152U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x3685 = INT8_MAX;
	uint64_t x3686 = 246074875192315000LLU;
	volatile int8_t x3687 = INT8_MAX;
	volatile int32_t x3688 = 61;
	static volatile uint64_t t87 = 15944LLU;

	t87 = ((x3685*(x3686&x3687))>>x3688);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3725 = INT32_MAX;
	int64_t x3726 = -1LL;
	volatile uint8_t x3727 = UINT8_MAX;
	int16_t x3728 = 0;
	volatile int64_t t88 = -1971396954194812LL;

	t88 = ((x3725*(x3726&x3727))>>x3728);

	if (t88 != 547608329985LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3737 = -284;
	volatile uint32_t x3738 = UINT32_MAX;
	static int32_t x3739 = 35426745;
	int8_t x3740 = 9;
	uint32_t t89 = 86U;

	t89 = ((x3737*(x3738&x3739))>>x3740);

	if (t89 != 5515051U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x3809 = 17U;
	int32_t x3810 = -1;
	volatile uint8_t x3811 = 46U;
	int8_t x3812 = 1;
	volatile int32_t t90 = 4434;

	t90 = ((x3809*(x3810&x3811))>>x3812);

	if (t90 != 391) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x3921 = 59629LLU;
	int32_t x3923 = INT32_MIN;
	static volatile uint32_t x3924 = 24U;

	t91 = ((x3921*(x3922&x3923))>>x3924);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x3930 = -60058876;
	volatile uint64_t t92 = 3824676595462099011LLU;

	t92 = ((x3929*(x3930&x3931))>>x3932);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x4057 = 1;
	static volatile int32_t x4059 = INT32_MIN;
	volatile uint8_t x4060 = 1U;
	static volatile int32_t t93 = -30019651;

	t93 = ((x4057*(x4058&x4059))>>x4060);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x4086 = INT32_MIN;
	int32_t x4087 = -1;
	volatile int8_t x4088 = 23;
	static volatile int64_t t94 = -1030605LL;

	t94 = ((x4085*(x4086&x4087))>>x4088);

	if (t94 != 256LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4101 = INT16_MIN;
	int32_t x4102 = 465422280;
	int64_t x4103 = INT64_MIN;
	uint8_t x4104 = 3U;
	static volatile int64_t t95 = -311203201394LL;

	t95 = ((x4101*(x4102&x4103))>>x4104);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4133 = 0;
	int16_t x4134 = -14570;
	volatile uint32_t x4136 = 1U;

	t96 = ((x4133*(x4134&x4135))>>x4136);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4169 = -363877152;
	uint64_t x4170 = 9918710072LLU;
	int32_t x4171 = INT32_MIN;
	uint8_t x4172 = 54U;
	uint64_t t97 = 1LLU;

	t97 = ((x4169*(x4170&x4171))>>x4172);

	if (t97 != 850LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x4249 = 5380397LLU;
	uint32_t x4250 = 87U;
	volatile int16_t x4251 = INT16_MIN;
	uint16_t x4252 = 7U;

	t98 = ((x4249*(x4250&x4251))>>x4252);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4293 = 142U;
	uint64_t x4294 = 7068LLU;
	int16_t x4295 = -1;
	static uint16_t x4296 = 2U;
	volatile uint64_t t99 = 605368672059040LLU;

	t99 = ((x4293*(x4294&x4295))>>x4296);

	if (t99 != 250914LLU) { NG(); } else { ; }
	
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

