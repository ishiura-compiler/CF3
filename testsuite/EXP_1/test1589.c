#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x42 = INT16_MIN;
volatile int16_t x101 = -85;
static uint8_t x138 = 126U;
static int16_t x225 = INT16_MAX;
static int16_t x271 = 20;
static int32_t x290 = INT32_MIN;
static volatile int8_t x306 = -1;
int64_t x346 = INT64_MAX;
volatile uint16_t x347 = 1U;
int64_t x358 = INT64_MIN;
static int16_t x412 = INT16_MIN;
int16_t x419 = 1;
static int32_t x420 = -21997;
uint8_t x479 = 28U;
int32_t t18 = 8207774;
int32_t t20 = -258193;
uint16_t x564 = 183U;
int16_t x596 = 1;
volatile int32_t t23 = 28892;
int32_t x654 = -3448203;
int64_t x655 = 19LL;
volatile uint32_t x801 = UINT32_MAX;
uint8_t x833 = 70U;
static int32_t x834 = INT32_MIN;
int64_t x920 = INT64_MIN;
volatile uint8_t x927 = 0U;
static int32_t t31 = 514843;
int64_t x965 = -2261499777419513035LL;
volatile int32_t t32 = 14;
static uint8_t x995 = 11U;
volatile uint16_t x996 = 1U;
static int32_t t35 = 114802748;
int32_t t36 = 0;
static int16_t x1165 = 314;
uint32_t t37 = 160475U;
int64_t x1192 = -10600838981820LL;
uint64_t x1201 = UINT64_MAX;
volatile int32_t t39 = -11;
int32_t t40 = 1397;
int64_t x1261 = INT64_MAX;
uint64_t x1264 = 7688752930203457384LLU;
int8_t x1366 = -37;
uint64_t x1379 = 12LLU;
static int32_t x1401 = INT32_MAX;
volatile int32_t x1402 = -45;
int8_t x1404 = INT8_MIN;
uint16_t x1439 = 0U;
volatile uint16_t x1440 = 182U;
volatile uint32_t x1545 = UINT32_MAX;
static uint16_t x1582 = UINT16_MAX;
static uint8_t x1583 = 19U;
volatile int32_t t49 = 485;
volatile int32_t t51 = 1;
static uint32_t x1678 = 12U;
uint16_t x1750 = 0U;
int8_t x1751 = 5;
int8_t x1993 = -1;
uint8_t x1996 = 3U;
int16_t x2109 = INT16_MAX;
int32_t t63 = 305;
volatile int32_t x2286 = 1;
volatile uint32_t x2287 = 6U;
volatile int32_t t66 = -5;
static volatile uint8_t x2391 = 26U;
static uint32_t t72 = 159822726U;
int16_t x2553 = INT16_MIN;
uint8_t x2624 = 23U;
volatile int32_t t75 = 20809;
int32_t x2677 = -1;
volatile int16_t x2678 = INT16_MIN;
volatile int32_t t79 = 1;
volatile int32_t t81 = -8;
uint64_t x2868 = UINT64_MAX;
uint64_t t82 = UINT64_MAX;
int16_t x2893 = -1;
int32_t x2896 = 153556;
static uint8_t x2918 = UINT8_MAX;
uint64_t x2919 = 0LLU;
int8_t x2920 = -1;
int8_t x2923 = 10;
int16_t x2925 = -1;
int32_t t86 = -60354579;
int8_t x2940 = INT8_MIN;
volatile uint16_t x2993 = 7102U;
volatile int32_t t88 = -796548;
int16_t x3052 = 1;
uint8_t x3123 = 3U;
int16_t x3124 = INT16_MIN;
volatile int32_t x3125 = INT32_MAX;
uint64_t x3126 = 7471377794LLU;
static volatile int32_t t91 = 247219;
uint8_t x3159 = 1U;
static int64_t t93 = 73819432553LL;
int16_t x3209 = 0;
int16_t x3210 = 0;
uint8_t x3235 = 0U;
static int8_t x3317 = -1;
uint8_t x3320 = UINT8_MAX;
static int16_t x3322 = 14;
int8_t x3326 = -24;


void f0(void) {
	int16_t x9 = 13;
	static int32_t x10 = INT32_MIN;
	uint16_t x11 = 1U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t0 = -3;

	t0 = (((x9<=x10)<<x11)*x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x41 = INT32_MAX;
	int32_t x43 = 0;
	uint8_t x44 = UINT8_MAX;
	int32_t t1 = 8;

	t1 = (((x41<=x42)<<x43)*x44);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x69 = INT8_MIN;
	volatile int32_t x70 = 267;
	static uint8_t x71 = 11U;
	int8_t x72 = INT8_MIN;
	int32_t t2 = -1;

	t2 = (((x69<=x70)<<x71)*x72);

	if (t2 != -262144) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x102 = UINT32_MAX;
	static volatile uint16_t x103 = 12U;
	uint32_t x104 = 3512U;
	volatile uint32_t t3 = 550255U;

	t3 = (((x101<=x102)<<x103)*x104);

	if (t3 != 14385152U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x137 = INT32_MIN;
	int8_t x139 = 6;
	uint16_t x140 = 20U;
	int32_t t4 = -1;

	t4 = (((x137<=x138)<<x139)*x140);

	if (t4 != 1280) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x201 = -1;
	int16_t x202 = INT16_MAX;
	int8_t x203 = 9;
	int32_t x204 = -1;
	volatile int32_t t5 = -2254318;

	t5 = (((x201<=x202)<<x203)*x204);

	if (t5 != -512) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x209 = INT16_MAX;
	volatile int64_t x210 = -11207930184194794LL;
	uint16_t x211 = 1U;
	int16_t x212 = -1;
	static int32_t t6 = -911897721;

	t6 = (((x209<=x210)<<x211)*x212);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x213 = -1;
	uint16_t x214 = 24U;
	int8_t x215 = 1;
	int8_t x216 = INT8_MAX;
	static int32_t t7 = -20;

	t7 = (((x213<=x214)<<x215)*x216);

	if (t7 != 254) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x226 = UINT64_MAX;
	static int16_t x227 = 1;
	static int64_t x228 = -1LL;
	int64_t t8 = -10052610432681LL;

	t8 = (((x225<=x226)<<x227)*x228);

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x269 = 2U;
	volatile uint16_t x270 = UINT16_MAX;
	uint32_t x272 = 26U;
	volatile uint32_t t9 = 660351759U;

	t9 = (((x269<=x270)<<x271)*x272);

	if (t9 != 27262976U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x289 = 1LLU;
	uint8_t x291 = 5U;
	uint64_t x292 = UINT64_MAX;
	static uint64_t t10 = 3561LLU;

	t10 = (((x289<=x290)<<x291)*x292);

	if (t10 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x305 = -1;
	static uint16_t x307 = 10U;
	uint64_t x308 = 387622428LLU;
	volatile uint64_t t11 = 127682006218175666LLU;

	t11 = (((x305<=x306)<<x307)*x308);

	if (t11 != 396925366272LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x345 = INT16_MIN;
	volatile uint32_t x348 = 163U;
	volatile uint32_t t12 = 90708973U;

	t12 = (((x345<=x346)<<x347)*x348);

	if (t12 != 326U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x357 = 0U;
	static volatile uint16_t x359 = 5U;
	int16_t x360 = -1;
	int32_t t13 = 0;

	t13 = (((x357<=x358)<<x359)*x360);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x361 = 94U;
	static volatile int8_t x362 = -3;
	int8_t x363 = 28;
	volatile int8_t x364 = -1;
	int32_t t14 = -9009902;

	t14 = (((x361<=x362)<<x363)*x364);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x397 = UINT8_MAX;
	static int16_t x398 = INT16_MIN;
	static int8_t x399 = 6;
	int64_t x400 = INT64_MIN;
	int64_t t15 = 3849LL;

	t15 = (((x397<=x398)<<x399)*x400);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x409 = -590949;
	static int16_t x410 = -1;
	static int8_t x411 = 3;
	static volatile int32_t t16 = -39901770;

	t16 = (((x409<=x410)<<x411)*x412);

	if (t16 != -262144) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x417 = 7U;
	static int8_t x418 = INT8_MAX;
	volatile int32_t t17 = 380;

	t17 = (((x417<=x418)<<x419)*x420);

	if (t17 != -43994) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x477 = -29;
	int16_t x478 = -1;
	int8_t x480 = -1;

	t18 = (((x477<=x478)<<x479)*x480);

	if (t18 != -268435456) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MAX;
	int32_t x503 = 4;
	int64_t x504 = -1LL;
	volatile int64_t t19 = 60652LL;

	t19 = (((x501<=x502)<<x503)*x504);

	if (t19 != -16LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x553 = -31;
	static int8_t x554 = INT8_MAX;
	static uint8_t x555 = 1U;
	static volatile int32_t x556 = 272743442;

	t20 = (((x553<=x554)<<x555)*x556);

	if (t20 != 545486884) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x561 = -1280;
	static volatile uint8_t x562 = 52U;
	uint16_t x563 = 11U;
	int32_t t21 = 898364;

	t21 = (((x561<=x562)<<x563)*x564);

	if (t21 != 374784) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x577 = -11LL;
	int16_t x578 = -1;
	uint64_t x579 = 2LLU;
	int32_t x580 = -700;
	volatile int32_t t22 = -101540523;

	t22 = (((x577<=x578)<<x579)*x580);

	if (t22 != -2800) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x593 = INT32_MIN;
	volatile uint8_t x594 = UINT8_MAX;
	uint8_t x595 = 0U;

	t23 = (((x593<=x594)<<x595)*x596);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x625 = 407394330LLU;
	static int16_t x626 = INT16_MIN;
	static uint8_t x627 = 5U;
	int64_t x628 = -580229827963LL;
	int64_t t24 = -1217840LL;

	t24 = (((x625<=x626)<<x627)*x628);

	if (t24 != -18567354494816LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x653 = 0;
	volatile int16_t x656 = INT16_MAX;
	volatile int32_t t25 = -11;

	t25 = (((x653<=x654)<<x655)*x656);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x713 = UINT32_MAX;
	volatile uint32_t x714 = UINT32_MAX;
	int32_t x715 = 4;
	uint64_t x716 = UINT64_MAX;
	static uint64_t t26 = 509446240845908LLU;

	t26 = (((x713<=x714)<<x715)*x716);

	if (t26 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x802 = -124;
	uint8_t x803 = 18U;
	uint8_t x804 = UINT8_MAX;
	static volatile int32_t t27 = -1258045;

	t27 = (((x801<=x802)<<x803)*x804);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x835 = 2;
	volatile int8_t x836 = -1;
	int32_t t28 = 0;

	t28 = (((x833<=x834)<<x835)*x836);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x845 = INT32_MAX;
	int64_t x846 = INT64_MAX;
	uint8_t x847 = 0U;
	volatile int64_t x848 = -1LL;
	int64_t t29 = 923609118784161426LL;

	t29 = (((x845<=x846)<<x847)*x848);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x917 = 10;
	static uint32_t x918 = 1361202483U;
	uint8_t x919 = 0U;
	static volatile int64_t t30 = INT64_MIN;

	t30 = (((x917<=x918)<<x919)*x920);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x925 = 79U;
	int8_t x926 = -1;
	volatile int8_t x928 = -1;

	t31 = (((x925<=x926)<<x927)*x928);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x966 = 113879U;
	int8_t x967 = 1;
	int32_t x968 = -1;

	t32 = (((x965<=x966)<<x967)*x968);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x993 = INT16_MIN;
	int64_t x994 = -41268735LL;
	int32_t t33 = -116439870;

	t33 = (((x993<=x994)<<x995)*x996);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1033 = INT8_MIN;
	int8_t x1034 = -2;
	static uint16_t x1035 = 0U;
	int32_t x1036 = INT32_MIN;
	int32_t t34 = INT32_MIN;

	t34 = (((x1033<=x1034)<<x1035)*x1036);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1101 = -1;
	int8_t x1102 = 0;
	static volatile uint8_t x1103 = 17U;
	uint8_t x1104 = 83U;

	t35 = (((x1101<=x1102)<<x1103)*x1104);

	if (t35 != 10878976) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1113 = INT8_MAX;
	volatile int8_t x1114 = -6;
	static uint8_t x1115 = 11U;
	int8_t x1116 = INT8_MAX;

	t36 = (((x1113<=x1114)<<x1115)*x1116);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1166 = INT64_MIN;
	static int8_t x1167 = 1;
	static volatile uint32_t x1168 = 14817U;

	t37 = (((x1165<=x1166)<<x1167)*x1168);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1189 = 4290U;
	uint64_t x1190 = 80544829889LLU;
	uint8_t x1191 = 6U;
	int64_t t38 = -86251867800487312LL;

	t38 = (((x1189<=x1190)<<x1191)*x1192);

	if (t38 != -678453694836480LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1202 = 65232LLU;
	static uint16_t x1203 = 0U;
	int32_t x1204 = 13162;

	t39 = (((x1201<=x1202)<<x1203)*x1204);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1217 = -11104937;
	int16_t x1218 = 61;
	int16_t x1219 = 1;
	int32_t x1220 = 614498365;

	t40 = (((x1217<=x1218)<<x1219)*x1220);

	if (t40 != 1228996730) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1262 = 261720056375324LLU;
	uint16_t x1263 = 15U;
	volatile uint64_t t41 = 260290LLU;

	t41 = (((x1261<=x1262)<<x1263)*x1264);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1365 = UINT16_MAX;
	uint32_t x1367 = 4U;
	volatile int16_t x1368 = INT16_MIN;
	volatile int32_t t42 = 4;

	t42 = (((x1365<=x1366)<<x1367)*x1368);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1377 = UINT32_MAX;
	int64_t x1378 = -2194402172072LL;
	int8_t x1380 = INT8_MIN;
	static volatile int32_t t43 = 104;

	t43 = (((x1377<=x1378)<<x1379)*x1380);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1403 = 2U;
	int32_t t44 = -408;

	t44 = (((x1401<=x1402)<<x1403)*x1404);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1421 = INT32_MIN;
	uint64_t x1422 = UINT64_MAX;
	uint8_t x1423 = 9U;
	int8_t x1424 = -1;
	int32_t t45 = 127501859;

	t45 = (((x1421<=x1422)<<x1423)*x1424);

	if (t45 != -512) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1437 = -1;
	volatile uint64_t x1438 = 83209412646175LLU;
	int32_t t46 = -743;

	t46 = (((x1437<=x1438)<<x1439)*x1440);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1537 = 57U;
	uint8_t x1538 = 6U;
	int16_t x1539 = 0;
	static uint64_t x1540 = 1897972934858815LLU;
	static uint64_t t47 = 2176873918050527208LLU;

	t47 = (((x1537<=x1538)<<x1539)*x1540);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1546 = INT32_MAX;
	static volatile uint8_t x1547 = 0U;
	uint16_t x1548 = UINT16_MAX;
	volatile int32_t t48 = -119723;

	t48 = (((x1545<=x1546)<<x1547)*x1548);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1581 = INT32_MAX;
	static volatile uint16_t x1584 = 18U;

	t49 = (((x1581<=x1582)<<x1583)*x1584);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x1633 = INT32_MIN;
	int32_t x1634 = INT32_MAX;
	uint8_t x1635 = 3U;
	int8_t x1636 = INT8_MIN;
	int32_t t50 = -20;

	t50 = (((x1633<=x1634)<<x1635)*x1636);

	if (t50 != -1024) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1637 = INT64_MIN;
	static int64_t x1638 = INT64_MAX;
	int8_t x1639 = 2;
	volatile int8_t x1640 = INT8_MAX;

	t51 = (((x1637<=x1638)<<x1639)*x1640);

	if (t51 != 508) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1677 = 15460464LLU;
	volatile int16_t x1679 = 1;
	int8_t x1680 = INT8_MIN;
	static volatile int32_t t52 = 160;

	t52 = (((x1677<=x1678)<<x1679)*x1680);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1681 = -1;
	int64_t x1682 = INT64_MIN;
	int16_t x1683 = 31;
	volatile int16_t x1684 = 1;
	int32_t t53 = 30915;

	t53 = (((x1681<=x1682)<<x1683)*x1684);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1749 = 1;
	volatile int8_t x1752 = -1;
	int32_t t54 = 132;

	t54 = (((x1749<=x1750)<<x1751)*x1752);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x1789 = INT16_MIN;
	uint8_t x1790 = 0U;
	int32_t x1791 = 5;
	static uint16_t x1792 = 31U;
	int32_t t55 = -1;

	t55 = (((x1789<=x1790)<<x1791)*x1792);

	if (t55 != 992) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1809 = -1;
	static int8_t x1810 = INT8_MIN;
	uint32_t x1811 = 0U;
	static int16_t x1812 = 2032;
	volatile int32_t t56 = 1;

	t56 = (((x1809<=x1810)<<x1811)*x1812);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x1837 = 38;
	volatile int8_t x1838 = 0;
	volatile uint16_t x1839 = 2U;
	static int16_t x1840 = INT16_MAX;
	volatile int32_t t57 = 0;

	t57 = (((x1837<=x1838)<<x1839)*x1840);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1897 = INT16_MAX;
	uint8_t x1898 = 1U;
	volatile int32_t x1899 = 2;
	int64_t x1900 = INT64_MIN;
	static volatile int64_t t58 = 2371LL;

	t58 = (((x1897<=x1898)<<x1899)*x1900);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1953 = 11205;
	int64_t x1954 = -1LL;
	uint16_t x1955 = 1U;
	uint8_t x1956 = 0U;
	volatile int32_t t59 = -254755;

	t59 = (((x1953<=x1954)<<x1955)*x1956);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1994 = INT64_MIN;
	static int32_t x1995 = 0;
	volatile int32_t t60 = 2;

	t60 = (((x1993<=x1994)<<x1995)*x1996);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1997 = 152280LLU;
	int64_t x1998 = -23LL;
	int8_t x1999 = 1;
	int16_t x2000 = -1;
	int32_t t61 = -876531;

	t61 = (((x1997<=x1998)<<x1999)*x2000);

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x2089 = UINT64_MAX;
	static int32_t x2090 = INT32_MIN;
	volatile int8_t x2091 = 1;
	static int16_t x2092 = INT16_MIN;
	int32_t t62 = 215;

	t62 = (((x2089<=x2090)<<x2091)*x2092);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2110 = INT64_MAX;
	static uint8_t x2111 = 21U;
	static int8_t x2112 = INT8_MAX;

	t63 = (((x2109<=x2110)<<x2111)*x2112);

	if (t63 != 266338304) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2149 = -1;
	volatile uint64_t x2150 = UINT64_MAX;
	volatile uint32_t x2151 = 6U;
	int64_t x2152 = -1LL;
	volatile int64_t t64 = 20508597773466LL;

	t64 = (((x2149<=x2150)<<x2151)*x2152);

	if (t64 != -64LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2285 = -1;
	static uint64_t x2288 = 438741017601LLU;
	static uint64_t t65 = 43LLU;

	t65 = (((x2285<=x2286)<<x2287)*x2288);

	if (t65 != 28079425126464LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2297 = INT16_MAX;
	int16_t x2298 = 1;
	int8_t x2299 = 1;
	volatile int8_t x2300 = 2;

	t66 = (((x2297<=x2298)<<x2299)*x2300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2377 = -1;
	uint32_t x2378 = 0U;
	uint8_t x2379 = 3U;
	static int32_t x2380 = -1;
	volatile int32_t t67 = 0;

	t67 = (((x2377<=x2378)<<x2379)*x2380);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x2389 = 1626945919578LLU;
	int32_t x2390 = INT32_MIN;
	int16_t x2392 = -1;
	volatile int32_t t68 = -118840242;

	t68 = (((x2389<=x2390)<<x2391)*x2392);

	if (t68 != -67108864) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2429 = 1;
	int64_t x2430 = INT64_MIN;
	int8_t x2431 = 0;
	static int16_t x2432 = 28;
	volatile int32_t t69 = -1;

	t69 = (((x2429<=x2430)<<x2431)*x2432);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x2445 = 899244LL;
	int8_t x2446 = -57;
	uint16_t x2447 = 17U;
	static int32_t x2448 = INT32_MIN;
	volatile int32_t t70 = -7;

	t70 = (((x2445<=x2446)<<x2447)*x2448);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2465 = 111584640U;
	static volatile int8_t x2466 = INT8_MIN;
	static int8_t x2467 = 24;
	uint32_t x2468 = 7U;
	uint32_t t71 = 61938591U;

	t71 = (((x2465<=x2466)<<x2467)*x2468);

	if (t71 != 117440512U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x2493 = 7U;
	static int32_t x2494 = 60078306;
	volatile uint8_t x2495 = 6U;
	static volatile uint32_t x2496 = UINT32_MAX;

	t72 = (((x2493<=x2494)<<x2495)*x2496);

	if (t72 != 4294967232U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2521 = 10U;
	static volatile uint64_t x2522 = 1715527891LLU;
	uint8_t x2523 = 19U;
	uint32_t x2524 = UINT32_MAX;
	uint32_t t73 = 279U;

	t73 = (((x2521<=x2522)<<x2523)*x2524);

	if (t73 != 4294443008U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2554 = -1LL;
	uint8_t x2555 = 0U;
	int64_t x2556 = INT64_MIN;
	int64_t t74 = INT64_MIN;

	t74 = (((x2553<=x2554)<<x2555)*x2556);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2621 = INT32_MIN;
	int8_t x2622 = -1;
	int8_t x2623 = 15;

	t75 = (((x2621<=x2622)<<x2623)*x2624);

	if (t75 != 753664) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x2679 = 1;
	uint32_t x2680 = 13634376U;
	uint32_t t76 = 7U;

	t76 = (((x2677<=x2678)<<x2679)*x2680);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2781 = UINT16_MAX;
	int16_t x2782 = 3506;
	uint64_t x2783 = 22LLU;
	volatile uint32_t x2784 = 7930123U;
	uint32_t t77 = 1916299U;

	t77 = (((x2781<=x2782)<<x2783)*x2784);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2829 = INT8_MIN;
	int8_t x2830 = 4;
	int16_t x2831 = 1;
	int16_t x2832 = -1;
	static volatile int32_t t78 = 0;

	t78 = (((x2829<=x2830)<<x2831)*x2832);

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2841 = INT64_MIN;
	int16_t x2842 = INT16_MIN;
	volatile uint16_t x2843 = 2U;
	static uint8_t x2844 = 5U;

	t79 = (((x2841<=x2842)<<x2843)*x2844);

	if (t79 != 20) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2845 = UINT64_MAX;
	static volatile int64_t x2846 = INT64_MIN;
	static int8_t x2847 = 1;
	uint64_t x2848 = 821421615LLU;
	volatile uint64_t t80 = 1350798438LLU;

	t80 = (((x2845<=x2846)<<x2847)*x2848);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2853 = INT64_MAX;
	int32_t x2854 = INT32_MAX;
	uint8_t x2855 = 0U;
	int32_t x2856 = INT32_MIN;

	t81 = (((x2853<=x2854)<<x2855)*x2856);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2865 = INT64_MIN;
	int8_t x2866 = -3;
	static uint32_t x2867 = 0U;

	t82 = (((x2865<=x2866)<<x2867)*x2868);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2894 = INT64_MIN;
	volatile uint8_t x2895 = 0U;
	volatile int32_t t83 = -3;

	t83 = (((x2893<=x2894)<<x2895)*x2896);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x2917 = INT8_MIN;
	static int32_t t84 = -5555626;

	t84 = (((x2917<=x2918)<<x2919)*x2920);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2921 = UINT32_MAX;
	int32_t x2922 = INT32_MIN;
	int8_t x2924 = 0;
	int32_t t85 = -1;

	t85 = (((x2921<=x2922)<<x2923)*x2924);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2926 = -399LL;
	volatile uint8_t x2927 = 14U;
	static int8_t x2928 = INT8_MIN;

	t86 = (((x2925<=x2926)<<x2927)*x2928);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2937 = 280U;
	uint8_t x2938 = 36U;
	static volatile uint16_t x2939 = 3U;
	volatile int32_t t87 = 505430337;

	t87 = (((x2937<=x2938)<<x2939)*x2940);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2994 = INT16_MAX;
	int8_t x2995 = 4;
	volatile int16_t x2996 = INT16_MIN;

	t88 = (((x2993<=x2994)<<x2995)*x2996);

	if (t88 != -524288) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3049 = -4LL;
	static int64_t x3050 = -3145LL;
	int8_t x3051 = 1;
	volatile int32_t t89 = 3;

	t89 = (((x3049<=x3050)<<x3051)*x3052);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x3121 = 82236LLU;
	static int64_t x3122 = 687759LL;
	int32_t t90 = 267902513;

	t90 = (((x3121<=x3122)<<x3123)*x3124);

	if (t90 != -262144) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x3127 = 1U;
	uint8_t x3128 = UINT8_MAX;

	t91 = (((x3125<=x3126)<<x3127)*x3128);

	if (t91 != 510) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3157 = UINT32_MAX;
	static int64_t x3158 = -1LL;
	static uint64_t x3160 = UINT64_MAX;
	volatile uint64_t t92 = 952076LLU;

	t92 = (((x3157<=x3158)<<x3159)*x3160);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3169 = INT16_MAX;
	uint16_t x3170 = 14U;
	uint8_t x3171 = 6U;
	int64_t x3172 = -253306LL;

	t93 = (((x3169<=x3170)<<x3171)*x3172);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x3201 = INT64_MIN;
	int8_t x3202 = INT8_MIN;
	volatile int16_t x3203 = 6;
	uint16_t x3204 = UINT16_MAX;
	int32_t t94 = -238193;

	t94 = (((x3201<=x3202)<<x3203)*x3204);

	if (t94 != 4194240) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3211 = 19U;
	volatile int8_t x3212 = 31;
	static int32_t t95 = -58792;

	t95 = (((x3209<=x3210)<<x3211)*x3212);

	if (t95 != 16252928) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3233 = INT16_MAX;
	int32_t x3234 = INT32_MIN;
	static int16_t x3236 = INT16_MIN;
	volatile int32_t t96 = -1;

	t96 = (((x3233<=x3234)<<x3235)*x3236);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3318 = -1;
	int16_t x3319 = 1;
	volatile int32_t t97 = -3;

	t97 = (((x3317<=x3318)<<x3319)*x3320);

	if (t97 != 510) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3321 = -1;
	uint16_t x3323 = 12U;
	uint32_t x3324 = 5U;
	uint32_t t98 = 3144138U;

	t98 = (((x3321<=x3322)<<x3323)*x3324);

	if (t98 != 20480U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3325 = -1LL;
	static volatile uint16_t x3327 = 14U;
	uint16_t x3328 = 21459U;
	volatile int32_t t99 = 7408077;

	t99 = (((x3325<=x3326)<<x3327)*x3328);

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

