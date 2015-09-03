#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x17 = -2014;
volatile uint32_t t1 = 37525114U;
volatile uint16_t x21 = 3159U;
uint8_t x40 = 1U;
static int8_t x61 = 14;
int64_t x63 = 29666LL;
int64_t t6 = -561470521264963LL;
uint32_t x109 = 7196U;
volatile uint32_t x110 = 51U;
static uint16_t x112 = 0U;
int16_t x115 = INT16_MIN;
volatile uint8_t x147 = 0U;
int32_t x153 = -1;
uint64_t x243 = UINT64_MAX;
uint64_t x244 = 1LLU;
volatile uint32_t t16 = UINT32_MAX;
int16_t x301 = INT16_MIN;
volatile uint32_t x302 = 2035U;
uint8_t x304 = 30U;
volatile uint32_t t18 = 5768U;
int16_t x317 = INT16_MIN;
int8_t x320 = 1;
static uint8_t x339 = 34U;
static volatile int32_t t20 = 5813;
uint64_t x385 = 6992033667LLU;
uint8_t x388 = 0U;
static int16_t x394 = -1;
volatile int32_t x554 = INT32_MAX;
uint8_t x556 = 6U;
static volatile int64_t t24 = 63LL;
int32_t x654 = -11926697;
static volatile int32_t t26 = 0;
uint8_t x657 = 6U;
int64_t x659 = -218627118LL;
volatile uint64_t t32 = 102615LLU;
static volatile int8_t x1019 = -28;
int64_t x1034 = 119132287274754866LL;
int16_t x1097 = INT16_MIN;
uint64_t x1117 = 47906475697LLU;
uint64_t x1119 = UINT64_MAX;
int8_t x1120 = 0;
uint64_t t38 = 46361861187631LLU;
int32_t x1145 = INT32_MIN;
uint64_t x1230 = UINT64_MAX;
static uint32_t x1232 = 51U;
uint64_t t40 = UINT64_MAX;
uint64_t x1431 = 3518593547817LLU;
static int32_t x1531 = 7517808;
uint16_t x1579 = 33U;
static volatile uint16_t x1580 = 12U;
int8_t x1597 = -1;
int64_t x1605 = INT64_MAX;
uint16_t x1608 = 6U;
volatile int64_t t50 = INT64_MAX;
int8_t x1688 = 1;
int16_t x1735 = 29;
static int32_t t52 = INT32_MAX;
int8_t x1810 = INT8_MIN;
uint8_t x1842 = UINT8_MAX;
volatile uint32_t x1843 = 325U;
static volatile uint32_t t56 = UINT32_MAX;
int8_t x1865 = 10;
volatile int8_t x1868 = 0;
uint64_t t58 = UINT64_MAX;
int32_t x1981 = -1;
int64_t x2003 = 1976923LL;
int32_t x2010 = 31935715;
int64_t t62 = 549498211142LL;
uint32_t x2145 = 3U;
volatile int64_t x2146 = 1652096558468040562LL;
volatile int64_t t63 = 646516607496702770LL;
int8_t x2151 = INT8_MIN;
static uint8_t x2152 = 3U;
int32_t t65 = -126;
uint8_t x2370 = 13U;
uint16_t x2372 = 3U;
volatile int64_t x2374 = -1LL;
uint16_t x2507 = UINT16_MAX;
int16_t x2621 = -9;
volatile int8_t x2622 = -12;
static uint32_t t77 = 0U;
int16_t x2753 = -1;
static int32_t t80 = 6;
uint8_t x2856 = 9U;
int32_t t81 = 13657;
int8_t x2874 = INT8_MIN;
static uint32_t x2875 = 565U;
volatile int64_t t83 = 6064LL;
static int16_t x3033 = INT16_MAX;
static volatile int32_t t84 = INT32_MAX;
int32_t x3130 = 509923405;
int8_t x3132 = 12;
volatile int32_t t87 = -3;
static volatile int8_t x3163 = -1;
static int64_t x3305 = INT64_MIN;
volatile uint8_t x3332 = 4U;
uint64_t x3402 = 3145845473491496LLU;
int64_t x3461 = INT64_MIN;
int8_t x3609 = INT8_MIN;
volatile uint16_t x3612 = 9U;
volatile int8_t x3628 = 18;


void f0(void) {
	uint32_t x1 = 132107209U;
	int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MAX;
	volatile int8_t x4 = 19;
	static volatile uint32_t t0 = 141246U;

	t0 = (x1|((x2&x3)<<x4));

	if (t0 != 132107209U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x18 = 786U;
	uint16_t x19 = 2010U;
	static uint64_t x20 = 6LLU;

	t1 = (x17|((x18&x19)<<x20));

	if (t1 != 4294966434U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x22 = 1852296563918067973LLU;
	uint32_t x23 = UINT32_MAX;
	uint8_t x24 = 5U;
	uint64_t t2 = 13LLU;

	t2 = (x21|((x22&x23)<<x24));

	if (t2 != 29534924023LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 469U;
	int16_t x26 = INT16_MAX;
	uint32_t x27 = 126670017U;
	volatile int16_t x28 = 1;
	volatile uint32_t t3 = 4589111U;

	t3 = (x25|((x26&x27)<<x28));

	if (t3 != 43479U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x37 = 92304174979066362LLU;
	static int8_t x38 = INT8_MIN;
	uint8_t x39 = 1U;
	volatile uint64_t t4 = 10927LLU;

	t4 = (x37|((x38&x39)<<x40));

	if (t4 != 92304174979066362LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x62 = INT16_MIN;
	int8_t x64 = 48;
	static int64_t t5 = 1821456792493423LL;

	t5 = (x61|((x62&x63)<<x64));

	if (t5 != 14LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x69 = 10697642332LL;
	int32_t x70 = -1;
	uint8_t x71 = 0U;
	static uint8_t x72 = 1U;

	t6 = (x69|((x70&x71)<<x72));

	if (t6 != 10697642332LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x111 = -30529997697243LL;
	static int64_t t7 = 7475876707110LL;

	t7 = (x109|((x110&x111)<<x112));

	if (t7 != 7229LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x113 = INT8_MAX;
	uint64_t x114 = UINT64_MAX;
	uint32_t x116 = 4U;
	volatile uint64_t t8 = 1875060005140LLU;

	t8 = (x113|((x114&x115)<<x116));

	if (t8 != 18446744073709027455LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x125 = INT16_MIN;
	volatile int16_t x126 = -1;
	uint64_t x127 = 190034094LLU;
	uint8_t x128 = 62U;
	uint64_t t9 = 31546340396LLU;

	t9 = (x125|((x126&x127)<<x128));

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x145 = -10359;
	static uint16_t x146 = 5880U;
	int16_t x148 = 1;
	volatile int32_t t10 = -12728;

	t10 = (x145|((x146&x147)<<x148));

	if (t10 != -10359) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x154 = 0U;
	uint32_t x155 = 4U;
	int64_t x156 = 0LL;
	uint32_t t11 = UINT32_MAX;

	t11 = (x153|((x154&x155)<<x156));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x161 = INT64_MIN;
	volatile int64_t x162 = -38135878892423LL;
	int8_t x163 = 2;
	uint16_t x164 = 9U;
	int64_t t12 = INT64_MIN;

	t12 = (x161|((x162&x163)<<x164));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x181 = 14530641927699550LLU;
	uint16_t x182 = 0U;
	volatile uint16_t x183 = 0U;
	int64_t x184 = 0LL;
	uint64_t t13 = 24467474093246LLU;

	t13 = (x181|((x182&x183)<<x184));

	if (t13 != 14530641927699550LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x241 = -1LL;
	int8_t x242 = INT8_MIN;
	uint64_t t14 = UINT64_MAX;

	t14 = (x241|((x242&x243)<<x244));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x257 = -1;
	volatile int8_t x258 = INT8_MAX;
	uint8_t x259 = UINT8_MAX;
	volatile int8_t x260 = 2;
	volatile int32_t t15 = -201219;

	t15 = (x257|((x258&x259)<<x260));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x289 = UINT32_MAX;
	static volatile int8_t x290 = -1;
	int8_t x291 = 27;
	static volatile uint8_t x292 = 7U;

	t16 = (x289|((x290&x291)<<x292));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x297 = INT32_MAX;
	uint64_t x298 = 681LLU;
	uint32_t x299 = 104U;
	int8_t x300 = 44;
	uint64_t t17 = 245LLU;

	t17 = (x297|((x298&x299)<<x300));

	if (t17 != 703689589260287LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x303 = -12;

	t18 = (x301|((x302&x303)<<x304));

	if (t18 != 4294934528U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x318 = 2U;
	volatile int32_t x319 = INT32_MIN;
	uint32_t t19 = 44733U;

	t19 = (x317|((x318&x319)<<x320));

	if (t19 != 4294934528U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	uint8_t x340 = 19U;

	t20 = (x337|((x338&x339)<<x340));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x386 = -1LL;
	uint32_t x387 = 9739U;
	volatile uint64_t t21 = 6191901712011703607LLU;

	t21 = (x385|((x386&x387)<<x388));

	if (t21 != 6992033675LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x393 = UINT32_MAX;
	uint16_t x395 = UINT16_MAX;
	uint8_t x396 = 1U;
	uint32_t t22 = UINT32_MAX;

	t22 = (x393|((x394&x395)<<x396));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x497 = INT64_MIN;
	uint64_t x498 = 3919005837774265LLU;
	int64_t x499 = -99644561382259LL;
	uint64_t x500 = 5LLU;
	uint64_t t23 = 55LLU;

	t23 = (x497|((x498&x499)<<x500));

	if (t23 != 9346246945372410144LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x553 = -1LL;
	static int64_t x555 = INT64_MAX;

	t24 = (x553|((x554&x555)<<x556));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x613 = INT64_MIN;
	int16_t x614 = INT16_MIN;
	static uint32_t x615 = 80186U;
	int64_t x616 = 1LL;
	int64_t t25 = 97889LL;

	t25 = (x613|((x614&x615)<<x616));

	if (t25 != -9223372036854644736LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x653 = 3U;
	uint16_t x655 = 9447U;
	int8_t x656 = 14;

	t26 = (x653|((x654&x655)<<x656));

	if (t26 != 1163267) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x658 = UINT16_MAX;
	uint16_t x660 = 0U;
	static volatile int64_t t27 = -178245492980976LL;

	t27 = (x657|((x658&x659)<<x660));

	if (t27 != 982LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x681 = 1LL;
	int64_t x682 = INT64_MIN;
	uint32_t x683 = UINT32_MAX;
	volatile int32_t x684 = 37;
	int64_t t28 = -102620LL;

	t28 = (x681|((x682&x683)<<x684));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x685 = 12;
	static int16_t x686 = INT16_MAX;
	int16_t x687 = INT16_MIN;
	static int8_t x688 = 1;
	int32_t t29 = 353227;

	t29 = (x685|((x686&x687)<<x688));

	if (t29 != 12) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x773 = INT16_MIN;
	uint64_t x774 = 589547242456385819LLU;
	int32_t x775 = -1;
	static uint16_t x776 = 1U;
	volatile uint64_t t30 = 989LLU;

	t30 = (x773|((x774&x775)<<x776));

	if (t30 != 18446744073709523510LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x821 = INT32_MIN;
	int8_t x822 = INT8_MAX;
	int32_t x823 = 463140;
	int8_t x824 = 1;
	volatile int32_t t31 = 0;

	t31 = (x821|((x822&x823)<<x824));

	if (t31 != -2147483576) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x841 = 38531199342188516LLU;
	int64_t x842 = INT64_MIN;
	uint16_t x843 = 2U;
	uint16_t x844 = 20U;

	t32 = (x841|((x842&x843)<<x844));

	if (t32 != 38531199342188516LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x921 = UINT64_MAX;
	uint16_t x922 = 1012U;
	uint64_t x923 = 2072928299LLU;
	volatile int64_t x924 = 0LL;
	uint64_t t33 = UINT64_MAX;

	t33 = (x921|((x922&x923)<<x924));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1017 = INT16_MAX;
	int8_t x1018 = 7;
	uint16_t x1020 = 2U;
	int32_t t34 = 3226;

	t34 = (x1017|((x1018&x1019)<<x1020));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1033 = -1;
	uint16_t x1035 = 6947U;
	uint8_t x1036 = 4U;
	int64_t t35 = 17462945942LL;

	t35 = (x1033|((x1034&x1035)<<x1036));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1073 = 15424224145LLU;
	int8_t x1074 = INT8_MAX;
	int16_t x1075 = INT16_MAX;
	volatile int16_t x1076 = 3;
	volatile uint64_t t36 = 7205435643034LLU;

	t36 = (x1073|((x1074&x1075)<<x1076));

	if (t36 != 15424224249LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1098 = 11;
	static uint8_t x1099 = 0U;
	uint8_t x1100 = 8U;
	volatile int32_t t37 = 0;

	t37 = (x1097|((x1098&x1099)<<x1100));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1118 = INT64_MIN;

	t38 = (x1117|((x1118&x1119)<<x1120));

	if (t38 != 9223372084761251505LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1146 = UINT8_MAX;
	int64_t x1147 = -1262052984259LL;
	int16_t x1148 = 42;
	volatile int64_t t39 = 13LL;

	t39 = (x1145|((x1146&x1147)<<x1148));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1229 = -1;
	static int8_t x1231 = -51;

	t40 = (x1229|((x1230&x1231)<<x1232));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1273 = -1;
	static uint16_t x1274 = 8U;
	volatile int64_t x1275 = INT64_MIN;
	uint16_t x1276 = 0U;
	static int64_t t41 = 117620040575LL;

	t41 = (x1273|((x1274&x1275)<<x1276));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1277 = INT32_MIN;
	int8_t x1278 = 3;
	static int8_t x1279 = -1;
	int8_t x1280 = 1;
	volatile int32_t t42 = 13605;

	t42 = (x1277|((x1278&x1279)<<x1280));

	if (t42 != -2147483642) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1353 = UINT16_MAX;
	int16_t x1354 = INT16_MAX;
	static int32_t x1355 = INT32_MAX;
	static int32_t x1356 = 6;
	volatile int32_t t43 = 13;

	t43 = (x1353|((x1354&x1355)<<x1356));

	if (t43 != 2097151) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1429 = -1;
	int32_t x1430 = INT32_MIN;
	volatile uint8_t x1432 = 0U;
	uint64_t t44 = UINT64_MAX;

	t44 = (x1429|((x1430&x1431)<<x1432));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1441 = 443;
	int32_t x1442 = INT32_MAX;
	int64_t x1443 = INT64_MIN;
	int8_t x1444 = 1;
	int64_t t45 = -22LL;

	t45 = (x1441|((x1442&x1443)<<x1444));

	if (t45 != 443LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1529 = -1;
	static int32_t x1530 = -1;
	uint32_t x1532 = 0U;
	static int32_t t46 = -18155;

	t46 = (x1529|((x1530&x1531)<<x1532));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1565 = 32719LLU;
	int64_t x1566 = -4315520160530156752LL;
	uint32_t x1567 = UINT32_MAX;
	volatile uint32_t x1568 = 0U;
	volatile uint64_t t47 = 4550129LLU;

	t47 = (x1565|((x1566&x1567)<<x1568));

	if (t47 != 1385201663LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1577 = INT16_MAX;
	uint64_t x1578 = 590913911000138540LLU;
	volatile uint64_t t48 = 210031820587321484LLU;

	t48 = (x1577|((x1578&x1579)<<x1580));

	if (t48 != 163839LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x1598 = UINT16_MAX;
	static uint8_t x1599 = 80U;
	uint32_t x1600 = 3U;
	int32_t t49 = 227819;

	t49 = (x1597|((x1598&x1599)<<x1600));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1606 = -1LL;
	uint32_t x1607 = UINT32_MAX;

	t50 = (x1605|((x1606&x1607)<<x1608));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1685 = INT16_MIN;
	int8_t x1686 = -1;
	uint32_t x1687 = 27U;
	volatile uint32_t t51 = 55306021U;

	t51 = (x1685|((x1686&x1687)<<x1688));

	if (t51 != 4294934582U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1733 = INT32_MAX;
	int8_t x1734 = 5;
	volatile uint16_t x1736 = 6U;

	t52 = (x1733|((x1734&x1735)<<x1736));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1769 = 14472012U;
	volatile int64_t x1770 = 3410818LL;
	volatile int16_t x1771 = -1;
	volatile int8_t x1772 = 31;
	static int64_t t53 = -159297LL;

	t53 = (x1769|((x1770&x1771)<<x1772));

	if (t53 != 7324675895776076LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1809 = -1;
	volatile uint8_t x1811 = 1U;
	uint16_t x1812 = 21U;
	static int32_t t54 = 1710539;

	t54 = (x1809|((x1810&x1811)<<x1812));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x1817 = -1;
	uint32_t x1818 = UINT32_MAX;
	int32_t x1819 = INT32_MIN;
	uint16_t x1820 = 6U;
	uint32_t t55 = UINT32_MAX;

	t55 = (x1817|((x1818&x1819)<<x1820));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1841 = -1;
	uint8_t x1844 = 7U;

	t56 = (x1841|((x1842&x1843)<<x1844));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1866 = 1696;
	volatile int8_t x1867 = INT8_MIN;
	volatile int32_t t57 = 3922967;

	t57 = (x1865|((x1866&x1867)<<x1868));

	if (t57 != 1674) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1925 = UINT64_MAX;
	uint16_t x1926 = 5U;
	int32_t x1927 = 464634;
	uint64_t x1928 = 20LLU;

	t58 = (x1925|((x1926&x1927)<<x1928));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x1982 = 0;
	uint8_t x1983 = 2U;
	int64_t x1984 = 3LL;
	static volatile int32_t t59 = -271201412;

	t59 = (x1981|((x1982&x1983)<<x1984));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x2001 = INT32_MIN;
	uint16_t x2002 = 473U;
	uint32_t x2004 = 0U;
	int64_t t60 = 1830310623141835467LL;

	t60 = (x2001|((x2002&x2003)<<x2004));

	if (t60 != -2147483559LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x2009 = -1LL;
	int64_t x2011 = -1233LL;
	int16_t x2012 = 2;
	volatile int64_t t61 = 11555547315835LL;

	t61 = (x2009|((x2010&x2011)<<x2012));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2017 = 8974U;
	int64_t x2018 = -695827562429542LL;
	uint8_t x2019 = 43U;
	static uint8_t x2020 = 0U;

	t62 = (x2017|((x2018&x2019)<<x2020));

	if (t62 != 8974LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2147 = INT8_MAX;
	uint8_t x2148 = 1U;

	t63 = (x2145|((x2146&x2147)<<x2148));

	if (t63 != 231LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x2149 = -1;
	uint64_t x2150 = 19929574482LLU;
	uint64_t t64 = UINT64_MAX;

	t64 = (x2149|((x2150&x2151)<<x2152));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2213 = 438U;
	volatile uint8_t x2214 = 0U;
	int32_t x2215 = INT32_MIN;
	uint8_t x2216 = 2U;

	t65 = (x2213|((x2214&x2215)<<x2216));

	if (t65 != 438) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2245 = 0LLU;
	int64_t x2246 = INT64_MIN;
	static int16_t x2247 = 1;
	int32_t x2248 = 11;
	volatile uint64_t t66 = 3614897908LLU;

	t66 = (x2245|((x2246&x2247)<<x2248));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2289 = -1;
	uint8_t x2290 = UINT8_MAX;
	volatile uint8_t x2291 = 13U;
	static uint8_t x2292 = 7U;
	volatile int32_t t67 = 5442;

	t67 = (x2289|((x2290&x2291)<<x2292));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2369 = INT16_MAX;
	int32_t x2371 = INT32_MAX;
	volatile int32_t t68 = 536;

	t68 = (x2369|((x2370&x2371)<<x2372));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2373 = INT8_MIN;
	volatile int16_t x2375 = INT16_MAX;
	uint16_t x2376 = 0U;
	int64_t t69 = -44LL;

	t69 = (x2373|((x2374&x2375)<<x2376));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2393 = INT16_MAX;
	uint8_t x2394 = UINT8_MAX;
	int32_t x2395 = -1;
	uint8_t x2396 = 0U;
	volatile int32_t t70 = -6845010;

	t70 = (x2393|((x2394&x2395)<<x2396));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2449 = 9U;
	uint32_t x2450 = 167177899U;
	static uint32_t x2451 = UINT32_MAX;
	static int16_t x2452 = 24;
	uint32_t t71 = 4663715U;

	t71 = (x2449|((x2450&x2451)<<x2452));

	if (t71 != 2868903945U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2505 = -1LL;
	uint64_t x2506 = UINT64_MAX;
	volatile int8_t x2508 = 50;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x2505|((x2506&x2507)<<x2508));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2509 = -8020801LL;
	uint32_t x2510 = 31U;
	volatile uint8_t x2511 = UINT8_MAX;
	static uint16_t x2512 = 12U;
	volatile int64_t t73 = -105103LL;

	t73 = (x2509|((x2510&x2511)<<x2512));

	if (t73 != -7996225LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2541 = 470U;
	static uint8_t x2542 = 2U;
	uint64_t x2543 = 125264184434368834LLU;
	static uint32_t x2544 = 7U;
	volatile uint64_t t74 = 3600LLU;

	t74 = (x2541|((x2542&x2543)<<x2544));

	if (t74 != 470LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x2623 = 10179246U;
	static int8_t x2624 = 1;
	uint32_t t75 = UINT32_MAX;

	t75 = (x2621|((x2622&x2623)<<x2624));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2645 = INT64_MIN;
	uint16_t x2646 = UINT16_MAX;
	uint16_t x2647 = 353U;
	static int8_t x2648 = 7;
	volatile int64_t t76 = 6157330LL;

	t76 = (x2645|((x2646&x2647)<<x2648));

	if (t76 != -9223372036854730624LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2709 = 2404183U;
	uint16_t x2710 = 0U;
	int16_t x2711 = 6;
	int8_t x2712 = 10;

	t77 = (x2709|((x2710&x2711)<<x2712));

	if (t77 != 2404183U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x2754 = 0;
	uint32_t x2755 = 2078177083U;
	int8_t x2756 = 1;
	static volatile uint32_t t78 = UINT32_MAX;

	t78 = (x2753|((x2754&x2755)<<x2756));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2833 = INT32_MIN;
	uint8_t x2834 = 1U;
	volatile int8_t x2835 = -2;
	int8_t x2836 = 3;
	int32_t t79 = INT32_MIN;

	t79 = (x2833|((x2834&x2835)<<x2836));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2837 = -1;
	static volatile int32_t x2838 = 5875;
	int16_t x2839 = 111;
	int8_t x2840 = 1;

	t80 = (x2837|((x2838&x2839)<<x2840));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2853 = -1;
	volatile int16_t x2854 = INT16_MIN;
	int16_t x2855 = INT16_MAX;

	t81 = (x2853|((x2854&x2855)<<x2856));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2873 = INT64_MIN;
	uint8_t x2876 = 4U;
	int64_t t82 = -2LL;

	t82 = (x2873|((x2874&x2875)<<x2876));

	if (t82 != -9223372036854767616LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2949 = 1U;
	int64_t x2950 = -431LL;
	uint16_t x2951 = 11U;
	volatile uint8_t x2952 = 0U;

	t83 = (x2949|((x2950&x2951)<<x2952));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3034 = INT32_MAX;
	int8_t x3035 = INT8_MIN;
	uint8_t x3036 = 0U;

	t84 = (x3033|((x3034&x3035)<<x3036));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3089 = INT32_MAX;
	int16_t x3090 = -1;
	volatile uint8_t x3091 = UINT8_MAX;
	uint8_t x3092 = 2U;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x3089|((x3090&x3091)<<x3092));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3113 = -1;
	volatile uint32_t x3114 = 65U;
	int8_t x3115 = INT8_MIN;
	int8_t x3116 = 23;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x3113|((x3114&x3115)<<x3116));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3129 = 51U;
	uint8_t x3131 = 13U;

	t87 = (x3129|((x3130&x3131)<<x3132));

	if (t87 != 53299) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x3161 = -1989;
	volatile uint16_t x3162 = 3U;
	volatile int8_t x3164 = 1;
	int32_t t88 = -107;

	t88 = (x3161|((x3162&x3163)<<x3164));

	if (t88 != -1985) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3169 = INT16_MIN;
	int16_t x3170 = -3;
	volatile uint32_t x3171 = UINT32_MAX;
	volatile uint16_t x3172 = 1U;
	volatile uint32_t t89 = 112172856U;

	t89 = (x3169|((x3170&x3171)<<x3172));

	if (t89 != 4294967290U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3177 = -403613429;
	static uint32_t x3178 = 4U;
	static int32_t x3179 = INT32_MIN;
	uint16_t x3180 = 1U;
	volatile uint32_t t90 = 41118892U;

	t90 = (x3177|((x3178&x3179)<<x3180));

	if (t90 != 3891353867U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3261 = INT16_MIN;
	int32_t x3262 = INT32_MAX;
	static int64_t x3263 = INT64_MIN;
	uint64_t x3264 = 13LLU;
	int64_t t91 = -1288LL;

	t91 = (x3261|((x3262&x3263)<<x3264));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3285 = INT16_MAX;
	int64_t x3286 = -3105143482640363LL;
	uint16_t x3287 = 0U;
	uint16_t x3288 = 3U;
	static volatile int64_t t92 = 5529607940LL;

	t92 = (x3285|((x3286&x3287)<<x3288));

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3306 = INT64_MAX;
	uint32_t x3307 = UINT32_MAX;
	int8_t x3308 = 0;
	static int64_t t93 = 65449677428596LL;

	t93 = (x3305|((x3306&x3307)<<x3308));

	if (t93 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3329 = 1384208999U;
	static volatile int8_t x3330 = -1;
	uint32_t x3331 = 16195U;
	volatile uint32_t t94 = 2570955U;

	t94 = (x3329|((x3330&x3331)<<x3332));

	if (t94 != 1384382071U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3373 = INT64_MIN;
	static int64_t x3374 = 3839565155284LL;
	int16_t x3375 = INT16_MAX;
	uint64_t x3376 = 9LLU;
	int64_t t95 = 1LL;

	t95 = (x3373|((x3374&x3375)<<x3376));

	if (t95 != -9223372036844836864LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x3401 = -1LL;
	uint8_t x3403 = 0U;
	uint16_t x3404 = 0U;
	uint64_t t96 = UINT64_MAX;

	t96 = (x3401|((x3402&x3403)<<x3404));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x3462 = 23409207LLU;
	int32_t x3463 = INT32_MAX;
	uint8_t x3464 = 3U;
	volatile uint64_t t97 = 106551631500LLU;

	t97 = (x3461|((x3462&x3463)<<x3464));

	if (t97 != 9223372037042049464LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x3610 = 1560724450651939375LLU;
	static int32_t x3611 = INT32_MIN;
	volatile uint64_t t98 = 113624503649LLU;

	t98 = (x3609|((x3610&x3611)<<x3612));

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3625 = 1188;
	int64_t x3626 = -8589883LL;
	static uint8_t x3627 = 0U;
	volatile int64_t t99 = -7684LL;

	t99 = (x3625|((x3626&x3627)<<x3628));

	if (t99 != 1188LL) { NG(); } else { ; }
	
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

