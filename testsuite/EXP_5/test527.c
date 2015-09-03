#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x59 = INT32_MIN;
static int64_t x75 = INT64_MIN;
uint64_t x76 = UINT64_MAX;
static volatile int64_t x99 = INT64_MAX;
static uint64_t x200 = UINT64_MAX;
uint64_t x222 = UINT64_MAX;
int16_t x227 = -1;
uint32_t x229 = UINT32_MAX;
int8_t x322 = -1;
volatile uint32_t x324 = UINT32_MAX;
int16_t x423 = INT16_MAX;
int16_t x510 = -1;
static uint64_t x581 = 1LLU;
int64_t x619 = 1179331118481865LL;
int8_t x620 = -1;
volatile int32_t x655 = INT32_MIN;
int64_t x708 = -1LL;
volatile uint32_t x772 = UINT32_MAX;
volatile uint8_t x846 = 2U;
int16_t x939 = -2802;
uint64_t x950 = 1192414039019132967LLU;
static volatile int32_t t23 = 45076453;
int16_t x1038 = -1;
static volatile int64_t x1161 = INT64_MAX;
int32_t t29 = -10402;
static uint64_t x1236 = 0LLU;
volatile int32_t t30 = 10327261;
uint16_t x1398 = 20168U;
static int8_t x1400 = 1;
uint32_t x1425 = 53U;
int32_t x1430 = -1;
int32_t x1432 = -1;
int8_t x1526 = -1;
volatile int8_t x1574 = INT8_MAX;
volatile int32_t t38 = 131475;
uint16_t x1594 = 2U;
int64_t x1619 = INT64_MAX;
uint8_t x1758 = 31U;
int64_t x1775 = INT64_MIN;
static uint64_t t45 = 503997181364735254LLU;
static volatile int32_t t46 = 3956465;
int16_t x2086 = INT16_MIN;
int8_t x2308 = -29;
int64_t x2373 = INT64_MAX;
int64_t x2445 = 513793LL;
static uint64_t x2453 = 1860286LLU;
volatile int32_t x2456 = -1;
static volatile int8_t x2583 = INT8_MIN;
int16_t x2584 = -1;
volatile int8_t x2801 = INT8_MAX;
int32_t t63 = 0;
uint8_t x2807 = 5U;
int8_t x3034 = -1;
static volatile int64_t t65 = -236808436LL;
int16_t x3139 = 1350;
uint32_t x3266 = 146U;
int8_t x3268 = 0;
volatile uint32_t x3334 = UINT32_MAX;
int8_t x3335 = -1;
volatile int32_t t72 = 75545;
int16_t x3440 = -1;
int8_t x3445 = 0;
int64_t x3473 = 230508994LL;
int32_t x3476 = -1;
uint64_t x3493 = 18861LLU;
uint8_t x3685 = 14U;
int16_t x3688 = -1;
static uint32_t t80 = 638491U;
volatile uint8_t x3802 = UINT8_MAX;
volatile int64_t x3804 = -1LL;
static volatile int32_t t81 = -45754;
int64_t x3805 = 5981LL;
static uint8_t x3873 = 92U;
static int8_t x3889 = 59;
int32_t t84 = 1;
int16_t x3932 = -1;
static int8_t x3942 = -1;
int16_t x3977 = 371;
volatile int8_t x3978 = -6;
uint16_t x3979 = UINT16_MAX;
int8_t x4070 = INT8_MAX;
volatile uint32_t t92 = 881U;
uint64_t x4214 = 1198412LLU;
int16_t x4215 = INT16_MIN;
volatile int16_t x4254 = INT16_MIN;
int64_t x4255 = -454229801270LL;
uint32_t x4289 = 2868U;
uint16_t x4291 = UINT16_MAX;
int32_t x4298 = -1;
static int64_t x4349 = INT64_MAX;


void f0(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	uint16_t x26 = 0U;
	int64_t x27 = INT64_MIN;
	static int16_t x28 = -2;
	volatile uint64_t t0 = 16671673419829056LLU;

	t0 = (x25>>((x26/x27)-x28));

	if (t0 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x57 = 0U;
	uint16_t x58 = UINT16_MAX;
	static volatile int16_t x60 = -31;
	int32_t t1 = -5855;

	t1 = (x57>>((x58/x59)-x60));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x73 = INT32_MAX;
	uint32_t x74 = 46487605U;
	int32_t t2 = 26163909;

	t2 = (x73>>((x74/x75)-x76));

	if (t2 != 1073741823) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x97 = UINT8_MAX;
	static volatile int16_t x98 = -1;
	int32_t x100 = -1;
	int32_t t3 = -16486144;

	t3 = (x97>>((x98/x99)-x100));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x197 = 554956537544LLU;
	volatile int32_t x198 = INT32_MAX;
	volatile int32_t x199 = INT32_MIN;
	static volatile uint64_t t4 = 14190LLU;

	t4 = (x197>>((x198/x199)-x200));

	if (t4 != 277478268772LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x201 = 1U;
	static uint32_t x202 = 771U;
	int64_t x203 = INT64_MIN;
	int16_t x204 = -1;
	static int32_t t5 = -3;

	t5 = (x201>>((x202/x203)-x204));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x221 = 1;
	static int32_t x223 = -7634;
	static volatile int8_t x224 = -1;
	volatile int32_t t6 = 2796;

	t6 = (x221>>((x222/x223)-x224));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x225 = UINT16_MAX;
	uint32_t x226 = UINT32_MAX;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t7 = 984281;

	t7 = (x225>>((x226/x227)-x228));

	if (t7 != 16383) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x230 = 71U;
	int64_t x231 = 15LL;
	static int32_t x232 = -14;
	volatile uint32_t t8 = 1U;

	t8 = (x229>>((x230/x231)-x232));

	if (t8 != 16383U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	uint64_t x251 = 8150470891778412196LLU;
	int32_t x252 = -1;
	volatile int32_t t9 = -31068;

	t9 = (x249>>((x250/x251)-x252));

	if (t9 != 31) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x321 = INT8_MAX;
	volatile int32_t x323 = 417;
	static volatile int32_t t10 = -122788;

	t10 = (x321>>((x322/x323)-x324));

	if (t10 != 63) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x421 = 1U;
	uint64_t x422 = 15714LLU;
	static volatile int8_t x424 = 0;
	volatile int32_t t11 = 57075;

	t11 = (x421>>((x422/x423)-x424));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x437 = 13;
	int8_t x438 = -5;
	int32_t x439 = -1;
	volatile int8_t x440 = -1;
	volatile int32_t t12 = -25;

	t12 = (x437>>((x438/x439)-x440));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x501 = UINT16_MAX;
	uint32_t x502 = 85995U;
	static int8_t x503 = -1;
	static int16_t x504 = -1;
	int32_t t13 = -2382502;

	t13 = (x501>>((x502/x503)-x504));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x509 = 29364506025897LLU;
	volatile int8_t x511 = INT8_MIN;
	uint32_t x512 = UINT32_MAX;
	static uint64_t t14 = 6612953LLU;

	t14 = (x509>>((x510/x511)-x512));

	if (t14 != 14682253012948LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x529 = 175U;
	uint32_t x530 = 6U;
	int32_t x531 = 603598;
	int8_t x532 = -1;
	volatile int32_t t15 = -6406;

	t15 = (x529>>((x530/x531)-x532));

	if (t15 != 87) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x582 = 3;
	static int32_t x583 = INT32_MAX;
	volatile int8_t x584 = -1;
	volatile uint64_t t16 = 1223LLU;

	t16 = (x581>>((x582/x583)-x584));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x617 = INT16_MAX;
	uint8_t x618 = UINT8_MAX;
	int32_t t17 = -17855;

	t17 = (x617>>((x618/x619)-x620));

	if (t17 != 16383) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x653 = 3011294125255LL;
	int16_t x654 = INT16_MAX;
	static int8_t x656 = -3;
	static int64_t t18 = 30761767LL;

	t18 = (x653>>((x654/x655)-x656));

	if (t18 != 376411765656LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x705 = 10U;
	int16_t x706 = 726;
	int64_t x707 = 26738497555023LL;
	int32_t t19 = -101;

	t19 = (x705>>((x706/x707)-x708));

	if (t19 != 5) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x769 = 25557U;
	volatile int8_t x770 = INT8_MIN;
	volatile int32_t x771 = INT32_MAX;
	int32_t t20 = 51;

	t20 = (x769>>((x770/x771)-x772));

	if (t20 != 12778) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x845 = 91080LLU;
	uint8_t x847 = UINT8_MAX;
	static int8_t x848 = 0;
	static volatile uint64_t t21 = 75LLU;

	t21 = (x845>>((x846/x847)-x848));

	if (t21 != 91080LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x937 = 5U;
	static int8_t x938 = INT8_MAX;
	uint32_t x940 = UINT32_MAX;
	volatile int32_t t22 = 83102;

	t22 = (x937>>((x938/x939)-x940));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x949 = 3893328;
	int8_t x951 = INT8_MIN;
	static int64_t x952 = -1LL;

	t23 = (x949>>((x950/x951)-x952));

	if (t23 != 1946664) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x997 = 333845263750915LLU;
	static uint32_t x998 = UINT32_MAX;
	volatile int32_t x999 = INT32_MIN;
	int32_t x1000 = 0;
	volatile uint64_t t24 = 3LLU;

	t24 = (x997>>((x998/x999)-x1000));

	if (t24 != 166922631875457LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1037 = INT8_MAX;
	int16_t x1039 = -1;
	int8_t x1040 = -3;
	volatile int32_t t25 = 121977336;

	t25 = (x1037>>((x1038/x1039)-x1040));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1045 = UINT32_MAX;
	static uint64_t x1046 = UINT64_MAX;
	volatile uint64_t x1047 = UINT64_MAX;
	volatile int8_t x1048 = -9;
	volatile uint32_t t26 = 13366638U;

	t26 = (x1045>>((x1046/x1047)-x1048));

	if (t26 != 4194303U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1162 = 53U;
	int64_t x1163 = INT64_MIN;
	int16_t x1164 = -7;
	int64_t t27 = -14075235LL;

	t27 = (x1161>>((x1162/x1163)-x1164));

	if (t27 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1165 = 2U;
	int32_t x1166 = -1;
	int32_t x1167 = INT32_MIN;
	int16_t x1168 = -1;
	int32_t t28 = -307899;

	t28 = (x1165>>((x1166/x1167)-x1168));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1173 = UINT16_MAX;
	volatile uint16_t x1174 = 7U;
	int8_t x1175 = INT8_MIN;
	static int64_t x1176 = -1LL;

	t29 = (x1173>>((x1174/x1175)-x1176));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1233 = 31;
	int32_t x1234 = INT32_MAX;
	uint64_t x1235 = 497087222504460732LLU;

	t30 = (x1233>>((x1234/x1235)-x1236));

	if (t30 != 31) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1353 = UINT8_MAX;
	static int8_t x1354 = 4;
	int8_t x1355 = INT8_MIN;
	int32_t x1356 = -1;
	volatile int32_t t31 = -1;

	t31 = (x1353>>((x1354/x1355)-x1356));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1373 = 1170LLU;
	uint16_t x1374 = 223U;
	uint64_t x1375 = 8555735600LLU;
	int8_t x1376 = -14;
	volatile uint64_t t32 = 158174356928974384LLU;

	t32 = (x1373>>((x1374/x1375)-x1376));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1397 = 292466181979281LLU;
	static int16_t x1399 = 4670;
	volatile uint64_t t33 = 170156478348442885LLU;

	t33 = (x1397>>((x1398/x1399)-x1400));

	if (t33 != 36558272747410LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1426 = 7U;
	int16_t x1427 = INT16_MIN;
	static uint32_t x1428 = UINT32_MAX;
	volatile uint32_t t34 = 171U;

	t34 = (x1425>>((x1426/x1427)-x1428));

	if (t34 != 26U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1429 = 12U;
	int8_t x1431 = -1;
	int32_t t35 = -1684179;

	t35 = (x1429>>((x1430/x1431)-x1432));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1497 = INT32_MAX;
	uint16_t x1498 = 5048U;
	volatile int64_t x1499 = INT64_MIN;
	uint16_t x1500 = 0U;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x1497>>((x1498/x1499)-x1500));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1525 = UINT64_MAX;
	int64_t x1527 = INT64_MAX;
	int8_t x1528 = -1;
	volatile uint64_t t37 = 2198616LLU;

	t37 = (x1525>>((x1526/x1527)-x1528));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1573 = UINT16_MAX;
	int32_t x1575 = INT32_MAX;
	static int64_t x1576 = -1LL;

	t38 = (x1573>>((x1574/x1575)-x1576));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x1593 = 0LL;
	int32_t x1595 = INT32_MIN;
	int8_t x1596 = -1;
	int64_t t39 = 102147433LL;

	t39 = (x1593>>((x1594/x1595)-x1596));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1609 = 1LL;
	static int32_t x1610 = INT32_MAX;
	int32_t x1611 = INT32_MIN;
	volatile uint32_t x1612 = UINT32_MAX;
	int64_t t40 = 13518362721916LL;

	t40 = (x1609>>((x1610/x1611)-x1612));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1617 = 124091340032164553LL;
	int64_t x1618 = -6526664470LL;
	int8_t x1620 = -1;
	int64_t t41 = -2362640695379210LL;

	t41 = (x1617>>((x1618/x1619)-x1620));

	if (t41 != 62045670016082276LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x1689 = 2U;
	int64_t x1690 = INT64_MAX;
	int32_t x1691 = -1;
	int64_t x1692 = INT64_MIN;
	static volatile int32_t t42 = 9232;

	t42 = (x1689>>((x1690/x1691)-x1692));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1757 = 4U;
	static uint32_t x1759 = UINT32_MAX;
	static volatile int8_t x1760 = -1;
	volatile int32_t t43 = -24782100;

	t43 = (x1757>>((x1758/x1759)-x1760));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1765 = 1102493263LL;
	static int16_t x1766 = -1;
	int64_t x1767 = INT64_MIN;
	static int8_t x1768 = -1;
	int64_t t44 = -112310751046898476LL;

	t44 = (x1765>>((x1766/x1767)-x1768));

	if (t44 != 551246631LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1773 = UINT64_MAX;
	int64_t x1774 = -310385LL;
	uint64_t x1776 = UINT64_MAX;

	t45 = (x1773>>((x1774/x1775)-x1776));

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1813 = 2069;
	volatile int32_t x1814 = -1;
	static volatile int32_t x1815 = INT32_MIN;
	uint64_t x1816 = UINT64_MAX;

	t46 = (x1813>>((x1814/x1815)-x1816));

	if (t46 != 1034) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1913 = 70LL;
	static int16_t x1914 = -1;
	int64_t x1915 = -10502611LL;
	int32_t x1916 = -1;
	volatile int64_t t47 = 10316589047LL;

	t47 = (x1913>>((x1914/x1915)-x1916));

	if (t47 != 35LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1993 = 18003U;
	volatile uint32_t x1994 = 1900898U;
	uint16_t x1995 = UINT16_MAX;
	uint32_t x1996 = UINT32_MAX;
	int32_t t48 = 6;

	t48 = (x1993>>((x1994/x1995)-x1996));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2009 = INT8_MAX;
	uint64_t x2010 = 920LLU;
	volatile int16_t x2011 = INT16_MIN;
	static int16_t x2012 = -1;
	int32_t t49 = 272;

	t49 = (x2009>>((x2010/x2011)-x2012));

	if (t49 != 63) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2085 = 355;
	volatile int64_t x2087 = 3562747304781LL;
	static int8_t x2088 = -1;
	int32_t t50 = 134;

	t50 = (x2085>>((x2086/x2087)-x2088));

	if (t50 != 177) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2177 = INT32_MAX;
	int64_t x2178 = INT64_MIN;
	int8_t x2179 = 1;
	static int64_t x2180 = INT64_MIN;
	static volatile int32_t t51 = INT32_MAX;

	t51 = (x2177>>((x2178/x2179)-x2180));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2225 = 2U;
	int32_t x2226 = -18;
	int16_t x2227 = -1;
	uint16_t x2228 = 9U;
	int32_t t52 = 1589;

	t52 = (x2225>>((x2226/x2227)-x2228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2305 = 9903763U;
	int32_t x2306 = INT32_MAX;
	uint64_t x2307 = UINT64_MAX;
	uint32_t t53 = 46U;

	t53 = (x2305>>((x2306/x2307)-x2308));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2374 = UINT32_MAX;
	int64_t x2375 = INT64_MIN;
	int16_t x2376 = -1;
	int64_t t54 = -5834055LL;

	t54 = (x2373>>((x2374/x2375)-x2376));

	if (t54 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2417 = UINT16_MAX;
	uint32_t x2418 = UINT32_MAX;
	int32_t x2419 = -1539641;
	static int16_t x2420 = -1;
	static int32_t t55 = 130607311;

	t55 = (x2417>>((x2418/x2419)-x2420));

	if (t55 != 16383) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2446 = INT32_MIN;
	int16_t x2447 = INT16_MIN;
	static volatile uint16_t x2448 = UINT16_MAX;
	int64_t t56 = -25893460986408275LL;

	t56 = (x2445>>((x2446/x2447)-x2448));

	if (t56 != 256896LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2454 = UINT16_MAX;
	uint16_t x2455 = UINT16_MAX;
	volatile uint64_t t57 = 304668137232180893LLU;

	t57 = (x2453>>((x2454/x2455)-x2456));

	if (t57 != 465071LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x2577 = 42U;
	int8_t x2578 = INT8_MIN;
	int32_t x2579 = 11456617;
	int64_t x2580 = -1LL;
	volatile int32_t t58 = -102638;

	t58 = (x2577>>((x2578/x2579)-x2580));

	if (t58 != 21) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2581 = 747;
	int8_t x2582 = 36;
	volatile int32_t t59 = -39760;

	t59 = (x2581>>((x2582/x2583)-x2584));

	if (t59 != 373) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2597 = 17;
	uint32_t x2598 = UINT32_MAX;
	int64_t x2599 = INT64_MIN;
	uint64_t x2600 = UINT64_MAX;
	static int32_t t60 = 85017191;

	t60 = (x2597>>((x2598/x2599)-x2600));

	if (t60 != 8) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2645 = UINT8_MAX;
	uint16_t x2646 = 0U;
	int8_t x2647 = 3;
	uint64_t x2648 = UINT64_MAX;
	int32_t t61 = 34;

	t61 = (x2645>>((x2646/x2647)-x2648));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2677 = 245U;
	volatile int16_t x2678 = INT16_MIN;
	uint64_t x2679 = UINT64_MAX;
	uint8_t x2680 = 0U;
	volatile int32_t t62 = -187984;

	t62 = (x2677>>((x2678/x2679)-x2680));

	if (t62 != 245) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2802 = -1;
	static volatile int16_t x2803 = -5416;
	uint32_t x2804 = UINT32_MAX;

	t63 = (x2801>>((x2802/x2803)-x2804));

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2805 = 256296428246LL;
	uint16_t x2806 = 1U;
	int64_t x2808 = -1LL;
	int64_t t64 = -851282LL;

	t64 = (x2805>>((x2806/x2807)-x2808));

	if (t64 != 128148214123LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3033 = 12466818297423LL;
	uint16_t x3035 = 136U;
	int8_t x3036 = -1;

	t65 = (x3033>>((x3034/x3035)-x3036));

	if (t65 != 6233409148711LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3137 = 4U;
	uint16_t x3138 = 16U;
	int8_t x3140 = 0;
	int32_t t66 = -1;

	t66 = (x3137>>((x3138/x3139)-x3140));

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3253 = 29862616LL;
	uint64_t x3254 = 213161232714LLU;
	static int16_t x3255 = INT16_MIN;
	uint16_t x3256 = 0U;
	volatile int64_t t67 = 29LL;

	t67 = (x3253>>((x3254/x3255)-x3256));

	if (t67 != 29862616LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3265 = 2U;
	uint64_t x3267 = 1329474495578304482LLU;
	volatile int32_t t68 = -6611;

	t68 = (x3265>>((x3266/x3267)-x3268));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x3269 = UINT32_MAX;
	int32_t x3270 = -57968;
	int32_t x3271 = INT32_MIN;
	static int16_t x3272 = -1;
	volatile uint32_t t69 = 2U;

	t69 = (x3269>>((x3270/x3271)-x3272));

	if (t69 != 2147483647U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x3293 = 0;
	int16_t x3294 = INT16_MIN;
	int16_t x3295 = -14173;
	int16_t x3296 = 1;
	volatile int32_t t70 = -27705;

	t70 = (x3293>>((x3294/x3295)-x3296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x3321 = 13605U;
	static int16_t x3322 = INT16_MAX;
	volatile int16_t x3323 = INT16_MIN;
	int32_t x3324 = -3;
	volatile int32_t t71 = -44495;

	t71 = (x3321>>((x3322/x3323)-x3324));

	if (t71 != 1700) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3333 = INT16_MAX;
	int16_t x3336 = -1;

	t72 = (x3333>>((x3334/x3335)-x3336));

	if (t72 != 8191) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3437 = 1LL;
	int32_t x3438 = -1;
	int8_t x3439 = INT8_MIN;
	static volatile int64_t t73 = 199312338689734LL;

	t73 = (x3437>>((x3438/x3439)-x3440));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3446 = -870;
	uint64_t x3447 = UINT64_MAX;
	volatile int64_t x3448 = -1LL;
	int32_t t74 = 611659355;

	t74 = (x3445>>((x3446/x3447)-x3448));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3474 = INT8_MAX;
	uint16_t x3475 = 903U;
	int64_t t75 = -3385261537600986655LL;

	t75 = (x3473>>((x3474/x3475)-x3476));

	if (t75 != 115254497LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x3494 = 758430956954LLU;
	int16_t x3495 = INT16_MIN;
	int64_t x3496 = -1LL;
	uint64_t t76 = 233314607LLU;

	t76 = (x3493>>((x3494/x3495)-x3496));

	if (t76 != 9430LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3686 = -1;
	int32_t x3687 = -1;
	volatile int32_t t77 = 3742;

	t77 = (x3685>>((x3686/x3687)-x3688));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3705 = 33;
	uint64_t x3706 = UINT64_MAX;
	volatile int64_t x3707 = INT64_MIN;
	int16_t x3708 = -1;
	volatile int32_t t78 = -740;

	t78 = (x3705>>((x3706/x3707)-x3708));

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x3733 = UINT16_MAX;
	static volatile uint8_t x3734 = UINT8_MAX;
	int64_t x3735 = -1913473LL;
	volatile int8_t x3736 = 0;
	volatile int32_t t79 = 53485;

	t79 = (x3733>>((x3734/x3735)-x3736));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x3777 = 523372788U;
	static int32_t x3778 = INT32_MAX;
	int64_t x3779 = INT64_MAX;
	volatile int8_t x3780 = -1;

	t80 = (x3777>>((x3778/x3779)-x3780));

	if (t80 != 261686394U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3801 = INT8_MAX;
	static uint64_t x3803 = 72370638LLU;

	t81 = (x3801>>((x3802/x3803)-x3804));

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3806 = 1U;
	static int16_t x3807 = -1;
	int8_t x3808 = -1;
	int64_t t82 = 3935LL;

	t82 = (x3805>>((x3806/x3807)-x3808));

	if (t82 != 5981LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3874 = 5LLU;
	uint32_t x3875 = UINT32_MAX;
	int32_t x3876 = -1;
	volatile int32_t t83 = -432838971;

	t83 = (x3873>>((x3874/x3875)-x3876));

	if (t83 != 46) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3890 = -1LL;
	int32_t x3891 = INT32_MIN;
	uint64_t x3892 = UINT64_MAX;

	t84 = (x3889>>((x3890/x3891)-x3892));

	if (t84 != 29) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3929 = 11031081755LLU;
	int32_t x3930 = INT32_MIN;
	int64_t x3931 = 752069574301LL;
	volatile uint64_t t85 = 2723457291309840LLU;

	t85 = (x3929>>((x3930/x3931)-x3932));

	if (t85 != 5515540877LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3941 = 31LL;
	static int8_t x3943 = INT8_MAX;
	int16_t x3944 = -1;
	volatile int64_t t86 = -15538LL;

	t86 = (x3941>>((x3942/x3943)-x3944));

	if (t86 != 15LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3980 = -1;
	static volatile int32_t t87 = -75602749;

	t87 = (x3977>>((x3978/x3979)-x3980));

	if (t87 != 185) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4053 = 16U;
	uint64_t x4054 = 0LLU;
	uint32_t x4055 = UINT32_MAX;
	uint8_t x4056 = 0U;
	int32_t t88 = 1857070;

	t88 = (x4053>>((x4054/x4055)-x4056));

	if (t88 != 16) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x4069 = INT64_MAX;
	static int32_t x4071 = INT32_MIN;
	int64_t x4072 = -1LL;
	int64_t t89 = 3937247057998943LL;

	t89 = (x4069>>((x4070/x4071)-x4072));

	if (t89 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4089 = 0U;
	volatile uint16_t x4090 = UINT16_MAX;
	volatile uint64_t x4091 = 4156180052081209LLU;
	volatile uint64_t x4092 = UINT64_MAX;
	int32_t t90 = -44647;

	t90 = (x4089>>((x4090/x4091)-x4092));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4105 = 606;
	static uint64_t x4106 = 894881895841915LLU;
	int64_t x4107 = INT64_MIN;
	static int8_t x4108 = -1;
	static int32_t t91 = 3734273;

	t91 = (x4105>>((x4106/x4107)-x4108));

	if (t91 != 303) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4129 = UINT32_MAX;
	uint64_t x4130 = UINT64_MAX;
	int8_t x4131 = -45;
	static int16_t x4132 = -28;

	t92 = (x4129>>((x4130/x4131)-x4132));

	if (t92 != 7U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x4213 = 105462483LLU;
	int16_t x4216 = -1;
	static uint64_t t93 = 9216840111LLU;

	t93 = (x4213>>((x4214/x4215)-x4216));

	if (t93 != 52731241LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4253 = 1;
	int64_t x4256 = -1LL;
	volatile int32_t t94 = 3;

	t94 = (x4253>>((x4254/x4255)-x4256));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x4290 = -1;
	int8_t x4292 = -11;
	uint32_t t95 = 52754870U;

	t95 = (x4289>>((x4290/x4291)-x4292));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4297 = INT32_MAX;
	int16_t x4299 = INT16_MIN;
	static uint32_t x4300 = UINT32_MAX;
	volatile int32_t t96 = 54893144;

	t96 = (x4297>>((x4298/x4299)-x4300));

	if (t96 != 1073741823) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4317 = 228;
	int32_t x4318 = INT32_MAX;
	uint32_t x4319 = 115353555U;
	int8_t x4320 = -1;
	volatile int32_t t97 = -81;

	t97 = (x4317>>((x4318/x4319)-x4320));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x4350 = 231247378U;
	uint32_t x4351 = 209894359U;
	int16_t x4352 = -1;
	volatile int64_t t98 = 2264LL;

	t98 = (x4349>>((x4350/x4351)-x4352));

	if (t98 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4361 = 9;
	int8_t x4362 = INT8_MIN;
	static int64_t x4363 = INT64_MIN;
	int8_t x4364 = -1;
	static volatile int32_t t99 = -7031;

	t99 = (x4361>>((x4362/x4363)-x4364));

	if (t99 != 4) { NG(); } else { ; }
	
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

