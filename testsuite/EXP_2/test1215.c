#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x36 = 31U;
static int8_t x44 = 1;
uint32_t x161 = 5648590U;
uint16_t x204 = 21U;
int16_t x243 = INT16_MIN;
static uint64_t t4 = 152818514LLU;
int32_t x299 = -1;
uint32_t t7 = 3U;
int16_t x305 = -1;
int8_t x308 = 4;
static volatile int32_t t8 = -1;
uint32_t x330 = 2U;
int8_t x335 = -1;
int64_t t10 = -867701125663LL;
uint64_t x514 = UINT64_MAX;
int32_t x638 = -1;
int8_t x664 = 1;
static int32_t x736 = 29;
int32_t t19 = 0;
uint64_t x749 = 42442LLU;
volatile int16_t x750 = INT16_MIN;
int8_t x752 = 6;
static int8_t x753 = INT8_MAX;
uint64_t x777 = 14791448882250LLU;
uint64_t t22 = 1082377288737660LLU;
volatile int64_t x798 = -1LL;
int32_t x821 = INT32_MAX;
uint16_t x824 = 24U;
int8_t x987 = -12;
uint32_t x988 = 2U;
int8_t x1001 = INT8_MIN;
int16_t x1089 = INT16_MAX;
static volatile int8_t x1217 = INT8_MAX;
volatile int32_t t32 = -3863;
int16_t x1239 = INT16_MAX;
static uint16_t x1264 = 23U;
uint64_t t35 = 38290772LLU;
static int64_t x1271 = INT64_MAX;
uint16_t x1357 = UINT16_MAX;
int64_t x1359 = INT64_MIN;
int32_t t40 = -295;
int16_t x1373 = INT16_MIN;
int16_t x1413 = INT16_MIN;
static int64_t x1462 = 9LL;
static int64_t x1671 = INT64_MIN;
int64_t x1710 = INT64_MIN;
uint32_t x1712 = 52U;
int64_t t48 = 40715LL;
volatile uint8_t x1756 = 8U;
uint64_t x1758 = 1391659453729015LLU;
int32_t x1759 = INT32_MAX;
int32_t t50 = -223835;
int32_t t51 = -172106039;
static volatile uint32_t x1808 = 0U;
int64_t t54 = 1519919672917929374LL;
int32_t x1877 = INT32_MAX;
int32_t t55 = -6;
uint8_t x1950 = UINT8_MAX;
static uint64_t x1962 = 27LLU;
int64_t x1963 = INT64_MAX;
int16_t x1966 = INT16_MAX;
int32_t x1995 = 0;
volatile int8_t x2071 = INT8_MAX;
uint32_t x2091 = 653542U;
uint8_t x2092 = 1U;
volatile uint16_t x2176 = 7U;
int64_t t65 = -475LL;
static int16_t x2193 = -1;
volatile int32_t t66 = 164390272;
uint16_t x2237 = UINT16_MAX;
volatile int32_t t68 = 11988821;
int64_t x2281 = INT64_MIN;
int32_t x2297 = INT32_MIN;
static volatile int8_t x2298 = INT8_MIN;
int32_t t72 = -389;
int8_t x2467 = -1;
uint8_t x2518 = 113U;
static volatile int32_t t74 = 3457923;
int8_t x2548 = 15;
static volatile int32_t x2554 = -18;
uint8_t x2555 = 3U;
int64_t x2606 = -32246352019106068LL;
volatile int64_t x2690 = INT64_MIN;
int16_t x2692 = 1;
int8_t x2750 = INT8_MIN;
uint64_t x2757 = 1LLU;
uint64_t t84 = 3590728254LLU;
int32_t x2766 = INT32_MIN;
static uint16_t x2783 = UINT16_MAX;
static uint8_t x2869 = 99U;
int16_t x2871 = -4;
volatile uint16_t x2879 = UINT16_MAX;
int32_t x2909 = 1;
int32_t x2951 = -55306;
static volatile int64_t t90 = -2778972721540851LL;
static int8_t x2972 = 0;
int32_t t92 = -307299589;
static volatile uint32_t t93 = 7930U;
static uint16_t x3001 = 31787U;
volatile int16_t x3004 = 2;
int32_t t94 = 55562001;
uint8_t x3052 = 10U;
volatile int32_t t96 = -48305622;
int16_t x3091 = INT16_MIN;


void f0(void) {
	static volatile int32_t x33 = -69;
	uint32_t x34 = UINT32_MAX;
	static uint8_t x35 = UINT8_MAX;
	volatile int32_t t0 = 28612065;

	t0 = ((x33*(x34==x35))<<x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = INT8_MIN;
	int64_t t1 = -23408LL;

	t1 = ((x41*(x42==x43))<<x44);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x162 = 107U;
	static volatile int32_t x163 = INT32_MIN;
	int64_t x164 = 0LL;
	uint32_t t2 = 833U;

	t2 = ((x161*(x162==x163))<<x164);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	static volatile int32_t t3 = 798;

	t3 = ((x201*(x202==x203))<<x204);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x241 = 2LLU;
	static volatile int32_t x242 = -1;
	volatile int8_t x244 = 1;

	t4 = ((x241*(x242==x243))<<x244);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x265 = 32;
	volatile int32_t x266 = 95904;
	uint32_t x267 = 10U;
	static int8_t x268 = 27;
	int32_t t5 = 115358643;

	t5 = ((x265*(x266==x267))<<x268);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x293 = INT32_MIN;
	volatile uint64_t x294 = 9252772051829571LLU;
	uint16_t x295 = 23U;
	uint8_t x296 = 3U;
	static int32_t t6 = -872;

	t6 = ((x293*(x294==x295))<<x296);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int64_t x298 = INT64_MIN;
	volatile uint16_t x300 = 0U;

	t7 = ((x297*(x298==x299))<<x300);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x306 = INT16_MAX;
	volatile int32_t x307 = INT32_MAX;

	t8 = ((x305*(x306==x307))<<x308);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x329 = INT64_MIN;
	static uint32_t x331 = 1424529822U;
	volatile uint32_t x332 = 4U;
	int64_t t9 = 16933089239376LL;

	t9 = ((x329*(x330==x331))<<x332);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x333 = -1LL;
	int16_t x334 = INT16_MIN;
	int8_t x336 = 6;

	t10 = ((x333*(x334==x335))<<x336);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = -893192;
	volatile uint16_t x367 = UINT16_MAX;
	static int8_t x368 = 15;
	static volatile int64_t t11 = -6LL;

	t11 = ((x365*(x366==x367))<<x368);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x481 = UINT16_MAX;
	uint64_t x482 = 56LLU;
	int32_t x483 = -7286;
	uint32_t x484 = 1U;
	static int32_t t12 = 6107;

	t12 = ((x481*(x482==x483))<<x484);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x513 = -274;
	int8_t x515 = INT8_MIN;
	uint64_t x516 = 17LLU;
	static volatile int32_t t13 = 81;

	t13 = ((x513*(x514==x515))<<x516);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x541 = 0;
	int8_t x542 = INT8_MAX;
	uint64_t x543 = 0LLU;
	volatile int32_t x544 = 2;
	int32_t t14 = 773;

	t14 = ((x541*(x542==x543))<<x544);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x613 = -1;
	int16_t x614 = INT16_MIN;
	int8_t x615 = 25;
	volatile int8_t x616 = 0;
	int32_t t15 = -48986;

	t15 = ((x613*(x614==x615))<<x616);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x637 = -1LL;
	int16_t x639 = -4;
	int8_t x640 = 0;
	int64_t t16 = -477026622816306LL;

	t16 = ((x637*(x638==x639))<<x640);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x645 = 3856LLU;
	int32_t x646 = -429986206;
	int32_t x647 = -66279408;
	static uint16_t x648 = 1U;
	uint64_t t17 = 161545534LLU;

	t17 = ((x645*(x646==x647))<<x648);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x661 = -1LL;
	uint32_t x662 = UINT32_MAX;
	int32_t x663 = INT32_MAX;
	volatile int64_t t18 = 0LL;

	t18 = ((x661*(x662==x663))<<x664);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x733 = 229U;
	static uint16_t x734 = 14U;
	volatile int32_t x735 = INT32_MAX;

	t19 = ((x733*(x734==x735))<<x736);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x751 = 0;
	volatile uint64_t t20 = 309273674335541LLU;

	t20 = ((x749*(x750==x751))<<x752);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x754 = 256U;
	static int64_t x755 = INT64_MIN;
	uint8_t x756 = 19U;
	volatile int32_t t21 = -45;

	t21 = ((x753*(x754==x755))<<x756);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x778 = INT16_MAX;
	volatile int64_t x779 = INT64_MIN;
	static uint32_t x780 = 7U;

	t22 = ((x777*(x778==x779))<<x780);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x797 = 471U;
	static uint8_t x799 = 28U;
	static int8_t x800 = 9;
	volatile int32_t t23 = -278928;

	t23 = ((x797*(x798==x799))<<x800);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x822 = 107435;
	volatile uint16_t x823 = 14694U;
	static volatile int32_t t24 = -1;

	t24 = ((x821*(x822==x823))<<x824);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x825 = 3890;
	int64_t x826 = -1LL;
	int32_t x827 = INT32_MIN;
	uint8_t x828 = 11U;
	volatile int32_t t25 = -82661;

	t25 = ((x825*(x826==x827))<<x828);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x893 = INT64_MIN;
	int8_t x894 = 0;
	int16_t x895 = -1;
	uint8_t x896 = 3U;
	volatile int64_t t26 = -54LL;

	t26 = ((x893*(x894==x895))<<x896);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x985 = -329599869643LL;
	int32_t x986 = -1;
	int64_t t27 = -96281617LL;

	t27 = ((x985*(x986==x987))<<x988);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1002 = UINT16_MAX;
	int32_t x1003 = INT32_MIN;
	static uint32_t x1004 = 3U;
	int32_t t28 = -1645;

	t28 = ((x1001*(x1002==x1003))<<x1004);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1053 = INT64_MIN;
	int64_t x1054 = INT64_MIN;
	int16_t x1055 = 1;
	volatile uint8_t x1056 = 62U;
	static volatile int64_t t29 = 1059628716203741715LL;

	t29 = ((x1053*(x1054==x1055))<<x1056);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1090 = 1454612;
	uint32_t x1091 = 59329U;
	uint32_t x1092 = 1U;
	volatile int32_t t30 = 711001169;

	t30 = ((x1089*(x1090==x1091))<<x1092);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1193 = -1;
	int64_t x1194 = -3LL;
	int64_t x1195 = 3826835LL;
	volatile uint8_t x1196 = 12U;
	static volatile int32_t t31 = 16164;

	t31 = ((x1193*(x1194==x1195))<<x1196);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1218 = INT32_MAX;
	uint32_t x1219 = UINT32_MAX;
	static int8_t x1220 = 1;

	t32 = ((x1217*(x1218==x1219))<<x1220);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1237 = UINT16_MAX;
	int16_t x1238 = INT16_MIN;
	volatile uint8_t x1240 = 1U;
	volatile int32_t t33 = 137;

	t33 = ((x1237*(x1238==x1239))<<x1240);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x1261 = 7504U;
	static int8_t x1262 = -3;
	volatile int64_t x1263 = INT64_MAX;
	uint32_t t34 = 2520427U;

	t34 = ((x1261*(x1262==x1263))<<x1264);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1265 = UINT64_MAX;
	int32_t x1266 = -201134;
	uint64_t x1267 = 538276340LLU;
	static uint16_t x1268 = 1U;

	t35 = ((x1265*(x1266==x1267))<<x1268);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1269 = INT16_MIN;
	int32_t x1270 = -12168666;
	int8_t x1272 = 0;
	volatile int32_t t36 = 48282;

	t36 = ((x1269*(x1270==x1271))<<x1272);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1321 = 3U;
	static int8_t x1322 = 20;
	int8_t x1323 = -28;
	int8_t x1324 = 3;
	static int32_t t37 = 1020;

	t37 = ((x1321*(x1322==x1323))<<x1324);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1358 = 0;
	volatile uint16_t x1360 = 1U;
	int32_t t38 = -126588499;

	t38 = ((x1357*(x1358==x1359))<<x1360);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1361 = 16;
	int16_t x1362 = 0;
	uint8_t x1363 = 21U;
	int16_t x1364 = 12;
	static int32_t t39 = -20;

	t39 = ((x1361*(x1362==x1363))<<x1364);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1365 = INT16_MAX;
	uint64_t x1366 = 3LLU;
	static uint32_t x1367 = 2U;
	volatile uint8_t x1368 = 4U;

	t40 = ((x1365*(x1366==x1367))<<x1368);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1374 = 29263639LLU;
	volatile int64_t x1375 = 193576967LL;
	uint16_t x1376 = 4U;
	static int32_t t41 = 98892718;

	t41 = ((x1373*(x1374==x1375))<<x1376);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1414 = 3U;
	int32_t x1415 = INT32_MIN;
	volatile uint32_t x1416 = 0U;
	volatile int32_t t42 = -1;

	t42 = ((x1413*(x1414==x1415))<<x1416);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x1461 = INT64_MAX;
	int64_t x1463 = INT64_MIN;
	static int16_t x1464 = 15;
	int64_t t43 = -41102LL;

	t43 = ((x1461*(x1462==x1463))<<x1464);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1513 = -1;
	static int8_t x1514 = INT8_MIN;
	volatile uint64_t x1515 = UINT64_MAX;
	int8_t x1516 = 15;
	volatile int32_t t44 = 0;

	t44 = ((x1513*(x1514==x1515))<<x1516);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1665 = UINT32_MAX;
	uint32_t x1666 = UINT32_MAX;
	int64_t x1667 = -6420LL;
	uint8_t x1668 = 1U;
	uint32_t t45 = 247921U;

	t45 = ((x1665*(x1666==x1667))<<x1668);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1669 = 5U;
	uint64_t x1670 = 8324922614668382111LLU;
	uint8_t x1672 = 11U;
	static volatile int32_t t46 = -852554650;

	t46 = ((x1669*(x1670==x1671))<<x1672);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x1705 = UINT32_MAX;
	uint32_t x1706 = 690U;
	int64_t x1707 = INT64_MIN;
	uint8_t x1708 = 0U;
	uint32_t t47 = 0U;

	t47 = ((x1705*(x1706==x1707))<<x1708);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1709 = INT64_MAX;
	volatile int16_t x1711 = INT16_MIN;

	t48 = ((x1709*(x1710==x1711))<<x1712);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1753 = UINT16_MAX;
	static int16_t x1754 = 2677;
	uint32_t x1755 = 59U;
	int32_t t49 = 7;

	t49 = ((x1753*(x1754==x1755))<<x1756);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1757 = UINT16_MAX;
	static uint16_t x1760 = 4U;

	t50 = ((x1757*(x1758==x1759))<<x1760);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1773 = -1;
	int8_t x1774 = INT8_MAX;
	volatile int8_t x1775 = INT8_MIN;
	uint8_t x1776 = 6U;

	t51 = ((x1773*(x1774==x1775))<<x1776);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1777 = INT8_MAX;
	static uint8_t x1778 = 33U;
	volatile int8_t x1779 = -1;
	static uint8_t x1780 = 12U;
	int32_t t52 = -13805;

	t52 = ((x1777*(x1778==x1779))<<x1780);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1805 = INT32_MIN;
	volatile int8_t x1806 = INT8_MIN;
	static volatile uint16_t x1807 = 7U;
	int32_t t53 = 0;

	t53 = ((x1805*(x1806==x1807))<<x1808);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1809 = -1LL;
	int64_t x1810 = -428926519LL;
	int64_t x1811 = 16155117403547LL;
	uint32_t x1812 = 59U;

	t54 = ((x1809*(x1810==x1811))<<x1812);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x1878 = UINT16_MAX;
	int8_t x1879 = -2;
	uint16_t x1880 = 5U;

	t55 = ((x1877*(x1878==x1879))<<x1880);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x1897 = -1;
	static int64_t x1898 = -109057798493LL;
	int32_t x1899 = 24469245;
	static uint8_t x1900 = 7U;
	static int32_t t56 = 16568298;

	t56 = ((x1897*(x1898==x1899))<<x1900);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x1949 = UINT64_MAX;
	volatile int8_t x1951 = INT8_MIN;
	uint32_t x1952 = 2U;
	volatile uint64_t t57 = 577622735LLU;

	t57 = ((x1949*(x1950==x1951))<<x1952);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x1961 = INT16_MIN;
	uint8_t x1964 = 4U;
	int32_t t58 = 352;

	t58 = ((x1961*(x1962==x1963))<<x1964);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x1965 = -1LL;
	int16_t x1967 = INT16_MIN;
	int16_t x1968 = 0;
	int64_t t59 = -205303772LL;

	t59 = ((x1965*(x1966==x1967))<<x1968);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1993 = 1;
	volatile uint64_t x1994 = 6LLU;
	static uint8_t x1996 = 1U;
	static int32_t t60 = 0;

	t60 = ((x1993*(x1994==x1995))<<x1996);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2057 = -1;
	int8_t x2058 = INT8_MIN;
	static uint32_t x2059 = 6008164U;
	uint16_t x2060 = 2U;
	static int32_t t61 = -1571421;

	t61 = ((x2057*(x2058==x2059))<<x2060);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2069 = -61762LL;
	int64_t x2070 = INT64_MIN;
	volatile int8_t x2072 = 1;
	int64_t t62 = 11882LL;

	t62 = ((x2069*(x2070==x2071))<<x2072);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2089 = 3LL;
	static int32_t x2090 = INT32_MIN;
	volatile int64_t t63 = -639701869715950141LL;

	t63 = ((x2089*(x2090==x2091))<<x2092);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2169 = UINT64_MAX;
	volatile int8_t x2170 = 44;
	int16_t x2171 = INT16_MIN;
	int8_t x2172 = 1;
	uint64_t t64 = 374587461014390862LLU;

	t64 = ((x2169*(x2170==x2171))<<x2172);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2173 = -1578853739269888LL;
	static int64_t x2174 = INT64_MIN;
	uint8_t x2175 = 12U;

	t65 = ((x2173*(x2174==x2175))<<x2176);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2194 = UINT64_MAX;
	int32_t x2195 = INT32_MIN;
	int8_t x2196 = 2;

	t66 = ((x2193*(x2194==x2195))<<x2196);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2205 = INT8_MIN;
	static uint16_t x2206 = UINT16_MAX;
	int32_t x2207 = 16603342;
	static int16_t x2208 = 0;
	volatile int32_t t67 = 13;

	t67 = ((x2205*(x2206==x2207))<<x2208);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x2238 = -2147;
	static uint16_t x2239 = 831U;
	int8_t x2240 = 6;

	t68 = ((x2237*(x2238==x2239))<<x2240);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2282 = 2621974U;
	static uint8_t x2283 = 11U;
	int8_t x2284 = 0;
	int64_t t69 = 17167292357496LL;

	t69 = ((x2281*(x2282==x2283))<<x2284);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2299 = INT64_MIN;
	uint8_t x2300 = 7U;
	volatile int32_t t70 = 16564304;

	t70 = ((x2297*(x2298==x2299))<<x2300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2329 = INT64_MIN;
	uint16_t x2330 = 5903U;
	static uint8_t x2331 = 98U;
	int16_t x2332 = 27;
	int64_t t71 = 2256LL;

	t71 = ((x2329*(x2330==x2331))<<x2332);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2413 = 7;
	int16_t x2414 = INT16_MIN;
	uint32_t x2415 = 61U;
	volatile uint16_t x2416 = 15U;

	t72 = ((x2413*(x2414==x2415))<<x2416);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2465 = -2;
	static int32_t x2466 = INT32_MIN;
	int16_t x2468 = 0;
	int32_t t73 = -2937;

	t73 = ((x2465*(x2466==x2467))<<x2468);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2517 = INT16_MIN;
	int64_t x2519 = INT64_MIN;
	int16_t x2520 = 3;

	t74 = ((x2517*(x2518==x2519))<<x2520);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x2545 = 16LL;
	uint32_t x2546 = 1U;
	uint32_t x2547 = 19U;
	volatile int64_t t75 = 193004333LL;

	t75 = ((x2545*(x2546==x2547))<<x2548);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2553 = INT32_MIN;
	int8_t x2556 = 0;
	int32_t t76 = -5081504;

	t76 = ((x2553*(x2554==x2555))<<x2556);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2557 = INT64_MIN;
	static int64_t x2558 = -3545689454902LL;
	volatile int16_t x2559 = INT16_MAX;
	int16_t x2560 = 0;
	volatile int64_t t77 = -9256115053LL;

	t77 = ((x2557*(x2558==x2559))<<x2560);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2561 = INT64_MAX;
	uint16_t x2562 = UINT16_MAX;
	int64_t x2563 = INT64_MIN;
	int8_t x2564 = 7;
	int64_t t78 = -60101929547LL;

	t78 = ((x2561*(x2562==x2563))<<x2564);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2581 = -3914155;
	static volatile uint8_t x2582 = 1U;
	int32_t x2583 = 44187323;
	int8_t x2584 = 10;
	volatile int32_t t79 = 0;

	t79 = ((x2581*(x2582==x2583))<<x2584);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2605 = INT32_MIN;
	static volatile int8_t x2607 = INT8_MIN;
	static uint16_t x2608 = 1U;
	int32_t t80 = -3334;

	t80 = ((x2605*(x2606==x2607))<<x2608);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2689 = INT8_MIN;
	int32_t x2691 = INT32_MIN;
	int32_t t81 = -1;

	t81 = ((x2689*(x2690==x2691))<<x2692);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2725 = 933351LLU;
	int32_t x2726 = INT32_MIN;
	static int64_t x2727 = -1LL;
	int16_t x2728 = 3;
	uint64_t t82 = 124577311422LLU;

	t82 = ((x2725*(x2726==x2727))<<x2728);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2749 = 1;
	int8_t x2751 = INT8_MIN;
	uint8_t x2752 = 13U;
	static volatile int32_t t83 = -53;

	t83 = ((x2749*(x2750==x2751))<<x2752);

	if (t83 != 8192) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x2758 = 128744;
	static int8_t x2759 = INT8_MIN;
	static uint8_t x2760 = 2U;

	t84 = ((x2757*(x2758==x2759))<<x2760);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x2765 = 0U;
	int8_t x2767 = -1;
	static volatile int8_t x2768 = 0;
	volatile int32_t t85 = -744075;

	t85 = ((x2765*(x2766==x2767))<<x2768);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x2781 = INT16_MAX;
	int64_t x2782 = INT64_MIN;
	static uint8_t x2784 = 3U;
	int32_t t86 = -50;

	t86 = ((x2781*(x2782==x2783))<<x2784);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2870 = INT16_MIN;
	uint32_t x2872 = 0U;
	int32_t t87 = -7;

	t87 = ((x2869*(x2870==x2871))<<x2872);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2877 = 2255LL;
	uint8_t x2878 = 4U;
	uint16_t x2880 = 25U;
	static int64_t t88 = 0LL;

	t88 = ((x2877*(x2878==x2879))<<x2880);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x2910 = 14U;
	int64_t x2911 = INT64_MAX;
	int16_t x2912 = 1;
	volatile int32_t t89 = 8027;

	t89 = ((x2909*(x2910==x2911))<<x2912);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2949 = INT64_MAX;
	int32_t x2950 = INT32_MAX;
	uint8_t x2952 = 13U;

	t90 = ((x2949*(x2950==x2951))<<x2952);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2965 = 107090LLU;
	uint8_t x2966 = 4U;
	int8_t x2967 = INT8_MAX;
	volatile uint16_t x2968 = 26U;
	static uint64_t t91 = 1067463861LLU;

	t91 = ((x2965*(x2966==x2967))<<x2968);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2969 = 498;
	uint32_t x2970 = 384U;
	int16_t x2971 = INT16_MIN;

	t92 = ((x2969*(x2970==x2971))<<x2972);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x2993 = UINT32_MAX;
	int8_t x2994 = -1;
	int64_t x2995 = 24319234183397LL;
	int8_t x2996 = 6;

	t93 = ((x2993*(x2994==x2995))<<x2996);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3002 = -44993;
	static volatile int32_t x3003 = 9;

	t94 = ((x3001*(x3002==x3003))<<x3004);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3045 = 2033U;
	uint64_t x3046 = UINT64_MAX;
	int8_t x3047 = -1;
	uint32_t x3048 = 1U;
	volatile int32_t t95 = -1444;

	t95 = ((x3045*(x3046==x3047))<<x3048);

	if (t95 != 4066) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3049 = INT8_MIN;
	int64_t x3050 = -175LL;
	volatile int16_t x3051 = INT16_MAX;

	t96 = ((x3049*(x3050==x3051))<<x3052);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3089 = 2009082;
	int16_t x3090 = INT16_MIN;
	volatile uint8_t x3092 = 2U;
	volatile int32_t t97 = -4;

	t97 = ((x3089*(x3090==x3091))<<x3092);

	if (t97 != 8036328) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3117 = -1;
	volatile uint16_t x3118 = 74U;
	int16_t x3119 = -1;
	static int8_t x3120 = 0;
	int32_t t98 = 96;

	t98 = ((x3117*(x3118==x3119))<<x3120);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3129 = UINT16_MAX;
	volatile int64_t x3130 = -124LL;
	int8_t x3131 = INT8_MIN;
	int8_t x3132 = 5;
	volatile int32_t t99 = -257009355;

	t99 = ((x3129*(x3130==x3131))<<x3132);

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

