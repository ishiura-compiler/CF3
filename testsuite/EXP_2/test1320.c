#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x96 = 6U;
int8_t x100 = 11;
static volatile int32_t t5 = -228;
int64_t x137 = INT64_MAX;
static volatile int64_t t6 = 1051283473LL;
int16_t x188 = 1;
volatile int32_t t7 = -920515;
int64_t t8 = 4104984919972790LL;
volatile int32_t x263 = INT32_MIN;
static int8_t x294 = 0;
int8_t x346 = INT8_MAX;
static uint64_t x473 = UINT64_MAX;
uint8_t x544 = 0U;
int32_t t21 = -37;
static uint32_t x815 = 346U;
volatile int32_t t26 = -27352;
volatile int64_t t27 = 4587280436308276595LL;
uint64_t x916 = 13LLU;
static uint32_t x939 = 21U;
int32_t t31 = 5417;
uint64_t x942 = UINT64_MAX;
uint8_t x944 = 2U;
volatile uint32_t t32 = 20757017U;
volatile int64_t t33 = -4366621405788LL;
int32_t t34 = -84459;
int16_t x990 = INT16_MIN;
static int8_t x991 = 46;
uint32_t x994 = 72109102U;
uint64_t t37 = 470LLU;
int32_t t38 = 12446220;
uint16_t x1070 = UINT16_MAX;
volatile int32_t t39 = 0;
static int16_t x1095 = INT16_MIN;
volatile int64_t x1119 = INT64_MIN;
static uint16_t x1173 = UINT16_MAX;
volatile uint8_t x1268 = 31U;
int64_t x1274 = -133013385667412LL;
uint8_t x1283 = UINT8_MAX;
int16_t x1318 = INT16_MAX;
int32_t t51 = 1;
int64_t x1367 = INT64_MIN;
static uint8_t x1408 = 27U;
static int32_t t54 = 147639;
volatile int32_t t55 = -1;
uint8_t x1503 = UINT8_MAX;
uint8_t x1506 = UINT8_MAX;
int64_t x1507 = INT64_MIN;
static uint16_t x1558 = 169U;
uint8_t x1576 = 10U;
static uint8_t x1720 = 9U;
volatile int16_t x1786 = INT16_MIN;
volatile int64_t x1867 = 215239568280741LL;
volatile int32_t t63 = 323;
uint32_t t64 = 1581078792U;
uint32_t x1929 = UINT32_MAX;
int16_t x1981 = 10;
int16_t x1982 = INT16_MAX;
static int16_t x1984 = 1;
int8_t x1988 = 15;
volatile uint8_t x1995 = 43U;
int8_t x1996 = 4;
int32_t x2055 = -1;
int64_t x2135 = 151668LL;
uint8_t x2136 = 48U;
volatile int64_t t72 = -939910705192LL;
int32_t t73 = -154147407;
int8_t x2185 = -39;
int32_t x2202 = 46310018;
volatile int64_t t76 = -9668843LL;
volatile int32_t t77 = 115;
volatile int32_t x2333 = -4205;
volatile int8_t x2498 = INT8_MIN;
static int32_t x2527 = -1649751;
int64_t x2582 = -1LL;
volatile int16_t x2598 = INT16_MIN;
volatile uint8_t x2600 = 0U;
uint64_t x2610 = 195829959904131478LLU;
volatile uint16_t x2661 = UINT16_MAX;
int64_t x2685 = -1LL;
volatile uint32_t x2686 = 1881U;
volatile int32_t x2688 = 21;
int64_t x2738 = INT64_MAX;
int32_t x2754 = 4760;
int64_t x2786 = 8038539694579324LL;
int32_t t91 = -3168661;
int32_t t92 = -125;
int32_t x2807 = INT32_MIN;
volatile int16_t x2808 = 9;
uint32_t x2907 = UINT32_MAX;
static int16_t x2970 = -1;


void f0(void) {
	static int64_t x5 = 240480700122700155LL;
	uint8_t x6 = 108U;
	volatile int32_t x7 = INT32_MAX;
	int8_t x8 = 0;
	volatile int64_t t0 = 16359260LL;

	t0 = ((x5&(x6==x7))>>x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x21 = INT16_MIN;
	static int8_t x22 = INT8_MAX;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = 1U;
	int32_t t1 = -13925557;

	t1 = ((x21&(x22==x23))>>x24);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x93 = UINT8_MAX;
	static uint16_t x94 = 0U;
	int32_t x95 = -1;
	volatile int32_t t2 = 63408;

	t2 = ((x93&(x94==x95))>>x96);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = INT16_MIN;
	volatile int16_t x99 = INT16_MIN;
	uint64_t t3 = 377327084LLU;

	t3 = ((x97&(x98==x99))>>x100);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x125 = 66755914;
	int8_t x126 = INT8_MAX;
	int32_t x127 = -6916;
	static volatile int16_t x128 = 1;
	volatile int32_t t4 = -3463275;

	t4 = ((x125&(x126==x127))>>x128);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x129 = 1;
	volatile int64_t x130 = INT64_MIN;
	int32_t x131 = -3913095;
	uint8_t x132 = 1U;

	t5 = ((x129&(x130==x131))>>x132);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x138 = INT16_MAX;
	uint32_t x139 = 7366157U;
	uint16_t x140 = 24U;

	t6 = ((x137&(x138==x139))>>x140);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	volatile int64_t x187 = INT64_MAX;

	t7 = ((x185&(x186==x187))>>x188);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MAX;
	static int8_t x199 = INT8_MAX;
	uint64_t x200 = 15LLU;

	t8 = ((x197&(x198==x199))>>x200);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = -1;
	uint8_t x231 = 127U;
	uint16_t x232 = 2U;
	int32_t t9 = 1;

	t9 = ((x229&(x230==x231))>>x232);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x257 = -1;
	int32_t x258 = 68516994;
	volatile uint32_t x259 = 428093850U;
	static uint8_t x260 = 5U;
	static int32_t t10 = -7533;

	t10 = ((x257&(x258==x259))>>x260);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x261 = 1;
	uint16_t x262 = 7U;
	static uint8_t x264 = 2U;
	int32_t t11 = -1243;

	t11 = ((x261&(x262==x263))>>x264);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = 30734810857941038LLU;
	int64_t x287 = 22410LL;
	int8_t x288 = 30;
	int32_t t12 = 2916266;

	t12 = ((x285&(x286==x287))>>x288);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x293 = -1;
	int64_t x295 = 2039LL;
	uint8_t x296 = 5U;
	volatile int32_t t13 = 29;

	t13 = ((x293&(x294==x295))>>x296);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x301 = INT64_MAX;
	uint64_t x302 = 185LLU;
	int64_t x303 = INT64_MAX;
	volatile uint8_t x304 = 14U;
	int64_t t14 = -7700492585550635LL;

	t14 = ((x301&(x302==x303))>>x304);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x345 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	static uint16_t x348 = 9U;
	int32_t t15 = -107;

	t15 = ((x345&(x346==x347))>>x348);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x397 = -15896;
	volatile uint16_t x398 = UINT16_MAX;
	uint8_t x399 = 49U;
	static uint16_t x400 = 20U;
	static volatile int32_t t16 = 0;

	t16 = ((x397&(x398==x399))>>x400);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x425 = INT8_MAX;
	static uint32_t x426 = 63349271U;
	int16_t x427 = INT16_MIN;
	int8_t x428 = 2;
	int32_t t17 = -6969;

	t17 = ((x425&(x426==x427))>>x428);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x437 = INT8_MIN;
	volatile int64_t x438 = 26771773318722621LL;
	uint32_t x439 = 1U;
	volatile int16_t x440 = 0;
	int32_t t18 = 6342;

	t18 = ((x437&(x438==x439))>>x440);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x474 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	uint8_t x476 = 35U;
	volatile uint64_t t19 = 838033LLU;

	t19 = ((x473&(x474==x475))>>x476);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x513 = 0;
	static uint64_t x514 = 41LLU;
	static volatile int8_t x515 = INT8_MAX;
	uint8_t x516 = 12U;
	int32_t t20 = 80;

	t20 = ((x513&(x514==x515))>>x516);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x541 = INT8_MAX;
	volatile uint16_t x542 = UINT16_MAX;
	uint32_t x543 = 4263U;

	t21 = ((x541&(x542==x543))>>x544);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x721 = INT32_MIN;
	volatile int64_t x722 = INT64_MIN;
	int64_t x723 = -5741713550LL;
	static uint16_t x724 = 0U;
	volatile int32_t t22 = -1;

	t22 = ((x721&(x722==x723))>>x724);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x737 = INT16_MIN;
	uint16_t x738 = 2U;
	uint32_t x739 = 168139U;
	static uint16_t x740 = 0U;
	static volatile int32_t t23 = 3;

	t23 = ((x737&(x738==x739))>>x740);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x745 = -1LL;
	volatile int32_t x746 = -1;
	uint8_t x747 = UINT8_MAX;
	int8_t x748 = 0;
	volatile int64_t t24 = -14981770493876802LL;

	t24 = ((x745&(x746==x747))>>x748);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x753 = 23;
	volatile uint32_t x754 = 14656U;
	int8_t x755 = INT8_MAX;
	uint32_t x756 = 6U;
	volatile int32_t t25 = -11621103;

	t25 = ((x753&(x754==x755))>>x756);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x813 = INT8_MAX;
	static volatile uint16_t x814 = UINT16_MAX;
	uint32_t x816 = 2U;

	t26 = ((x813&(x814==x815))>>x816);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x845 = INT64_MAX;
	static int8_t x846 = INT8_MAX;
	uint64_t x847 = 165650LLU;
	volatile int8_t x848 = 2;

	t27 = ((x845&(x846==x847))>>x848);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x857 = INT8_MAX;
	static int8_t x858 = -1;
	int64_t x859 = -594521848773686266LL;
	uint8_t x860 = 0U;
	int32_t t28 = -12303977;

	t28 = ((x857&(x858==x859))>>x860);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x905 = UINT8_MAX;
	uint8_t x906 = 6U;
	volatile uint32_t x907 = 1452271U;
	static volatile uint8_t x908 = 3U;
	int32_t t29 = -9579;

	t29 = ((x905&(x906==x907))>>x908);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x913 = UINT32_MAX;
	static uint16_t x914 = 173U;
	volatile uint8_t x915 = 7U;
	uint32_t t30 = 6710U;

	t30 = ((x913&(x914==x915))>>x916);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x937 = INT16_MAX;
	uint64_t x938 = UINT64_MAX;
	int8_t x940 = 0;

	t31 = ((x937&(x938==x939))>>x940);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x941 = 258211U;
	static int8_t x943 = INT8_MIN;

	t32 = ((x941&(x942==x943))>>x944);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x945 = -1LL;
	uint16_t x946 = UINT16_MAX;
	int16_t x947 = -751;
	uint8_t x948 = 1U;

	t33 = ((x945&(x946==x947))>>x948);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x973 = INT32_MAX;
	int32_t x974 = INT32_MAX;
	uint16_t x975 = 11899U;
	static uint8_t x976 = 3U;

	t34 = ((x973&(x974==x975))>>x976);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x985 = INT64_MIN;
	int16_t x986 = INT16_MAX;
	volatile int32_t x987 = INT32_MIN;
	uint16_t x988 = 13U;
	volatile int64_t t35 = -1533LL;

	t35 = ((x985&(x986==x987))>>x988);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x989 = INT16_MAX;
	int32_t x992 = 9;
	static volatile int32_t t36 = 766883;

	t36 = ((x989&(x990==x991))>>x992);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x993 = UINT64_MAX;
	volatile int16_t x995 = -1;
	uint8_t x996 = 18U;

	t37 = ((x993&(x994==x995))>>x996);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1045 = 981U;
	uint8_t x1046 = 5U;
	int32_t x1047 = INT32_MIN;
	uint16_t x1048 = 0U;

	t38 = ((x1045&(x1046==x1047))>>x1048);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1069 = INT16_MIN;
	int64_t x1071 = 4420026LL;
	uint8_t x1072 = 0U;

	t39 = ((x1069&(x1070==x1071))>>x1072);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1093 = 1337575386949706LLU;
	volatile int32_t x1094 = INT32_MIN;
	int16_t x1096 = 0;
	uint64_t t40 = 3864292852924996822LLU;

	t40 = ((x1093&(x1094==x1095))>>x1096);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1113 = -1;
	int16_t x1114 = 160;
	volatile int32_t x1115 = 781;
	static uint16_t x1116 = 10U;
	volatile int32_t t41 = -60;

	t41 = ((x1113&(x1114==x1115))>>x1116);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1117 = UINT32_MAX;
	volatile uint16_t x1118 = 0U;
	int8_t x1120 = 1;
	uint32_t t42 = 811113U;

	t42 = ((x1117&(x1118==x1119))>>x1120);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1174 = INT32_MAX;
	uint32_t x1175 = 6609435U;
	static uint32_t x1176 = 1U;
	static volatile int32_t t43 = -19;

	t43 = ((x1173&(x1174==x1175))>>x1176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1177 = INT64_MIN;
	int32_t x1178 = INT32_MAX;
	uint64_t x1179 = 308728898LLU;
	int8_t x1180 = 1;
	static int64_t t44 = -19798763525013733LL;

	t44 = ((x1177&(x1178==x1179))>>x1180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1265 = -1;
	static uint32_t x1266 = 508791U;
	int32_t x1267 = INT32_MIN;
	int32_t t45 = 1;

	t45 = ((x1265&(x1266==x1267))>>x1268);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1273 = 123U;
	static uint64_t x1275 = UINT64_MAX;
	uint8_t x1276 = 0U;
	int32_t t46 = -1118372;

	t46 = ((x1273&(x1274==x1275))>>x1276);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1281 = 6240LL;
	volatile int8_t x1282 = 1;
	int8_t x1284 = 1;
	volatile int64_t t47 = 5603801942479LL;

	t47 = ((x1281&(x1282==x1283))>>x1284);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1317 = INT16_MIN;
	int32_t x1319 = INT32_MAX;
	static int16_t x1320 = 15;
	int32_t t48 = -910348;

	t48 = ((x1317&(x1318==x1319))>>x1320);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x1325 = INT16_MIN;
	uint32_t x1326 = 523U;
	static int64_t x1327 = INT64_MIN;
	int16_t x1328 = 1;
	volatile int32_t t49 = -16240593;

	t49 = ((x1325&(x1326==x1327))>>x1328);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1341 = -3;
	int16_t x1342 = -1;
	volatile int64_t x1343 = 63LL;
	uint8_t x1344 = 28U;
	volatile int32_t t50 = 439191935;

	t50 = ((x1341&(x1342==x1343))>>x1344);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x1357 = 0U;
	volatile int8_t x1358 = INT8_MIN;
	static volatile uint32_t x1359 = 4U;
	static volatile uint8_t x1360 = 2U;

	t51 = ((x1357&(x1358==x1359))>>x1360);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1365 = INT16_MIN;
	uint8_t x1366 = UINT8_MAX;
	static uint8_t x1368 = 4U;
	volatile int32_t t52 = 1;

	t52 = ((x1365&(x1366==x1367))>>x1368);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1405 = 2363LLU;
	volatile int16_t x1406 = INT16_MIN;
	uint16_t x1407 = UINT16_MAX;
	static volatile uint64_t t53 = 1LLU;

	t53 = ((x1405&(x1406==x1407))>>x1408);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1433 = INT32_MIN;
	int32_t x1434 = -1;
	int8_t x1435 = -1;
	int32_t x1436 = 1;

	t54 = ((x1433&(x1434==x1435))>>x1436);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1453 = 13U;
	int64_t x1454 = -1LL;
	int8_t x1455 = -1;
	volatile uint8_t x1456 = 2U;

	t55 = ((x1453&(x1454==x1455))>>x1456);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1501 = -39LL;
	uint64_t x1502 = 558989207977963LLU;
	volatile uint8_t x1504 = 5U;
	int64_t t56 = -4LL;

	t56 = ((x1501&(x1502==x1503))>>x1504);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x1505 = UINT8_MAX;
	static uint16_t x1508 = 15U;
	int32_t t57 = -54286;

	t57 = ((x1505&(x1506==x1507))>>x1508);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1545 = 11U;
	uint16_t x1546 = 581U;
	volatile int64_t x1547 = -73988681784955LL;
	uint32_t x1548 = 8U;
	static int32_t t58 = 124132;

	t58 = ((x1545&(x1546==x1547))>>x1548);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x1557 = -1;
	int16_t x1559 = INT16_MAX;
	static uint32_t x1560 = 3U;
	int32_t t59 = -13816;

	t59 = ((x1557&(x1558==x1559))>>x1560);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x1573 = 1663331U;
	static int16_t x1574 = INT16_MIN;
	static int16_t x1575 = INT16_MIN;
	uint32_t t60 = 20469411U;

	t60 = ((x1573&(x1574==x1575))>>x1576);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1717 = UINT64_MAX;
	int8_t x1718 = INT8_MAX;
	volatile int8_t x1719 = INT8_MIN;
	volatile uint64_t t61 = 19020567257454LLU;

	t61 = ((x1717&(x1718==x1719))>>x1720);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x1785 = INT8_MIN;
	volatile int8_t x1787 = INT8_MIN;
	int64_t x1788 = 2LL;
	volatile int32_t t62 = 14337;

	t62 = ((x1785&(x1786==x1787))>>x1788);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1865 = INT8_MIN;
	uint8_t x1866 = UINT8_MAX;
	volatile uint16_t x1868 = 9U;

	t63 = ((x1865&(x1866==x1867))>>x1868);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x1905 = 2727312U;
	static int32_t x1906 = INT32_MAX;
	volatile int32_t x1907 = INT32_MIN;
	uint8_t x1908 = 19U;

	t64 = ((x1905&(x1906==x1907))>>x1908);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x1930 = -1LL;
	uint32_t x1931 = 5713U;
	volatile uint8_t x1932 = 5U;
	static volatile uint32_t t65 = 4686U;

	t65 = ((x1929&(x1930==x1931))>>x1932);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1941 = INT8_MIN;
	volatile uint32_t x1942 = 1410U;
	static volatile uint8_t x1943 = UINT8_MAX;
	uint8_t x1944 = 0U;
	volatile int32_t t66 = -52905;

	t66 = ((x1941&(x1942==x1943))>>x1944);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x1973 = UINT8_MAX;
	uint16_t x1974 = UINT16_MAX;
	volatile int16_t x1975 = -3340;
	uint8_t x1976 = 1U;
	volatile int32_t t67 = -9;

	t67 = ((x1973&(x1974==x1975))>>x1976);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1983 = INT8_MIN;
	volatile int32_t t68 = -1667;

	t68 = ((x1981&(x1982==x1983))>>x1984);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1985 = 114;
	int32_t x1986 = -1;
	static int16_t x1987 = INT16_MAX;
	static volatile int32_t t69 = -107453;

	t69 = ((x1985&(x1986==x1987))>>x1988);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1993 = INT16_MAX;
	int32_t x1994 = 17423177;
	volatile int32_t t70 = -21196;

	t70 = ((x1993&(x1994==x1995))>>x1996);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2053 = 24U;
	static uint32_t x2054 = UINT32_MAX;
	int16_t x2056 = 0;
	int32_t t71 = 1534324;

	t71 = ((x2053&(x2054==x2055))>>x2056);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2133 = INT64_MAX;
	int32_t x2134 = INT32_MAX;

	t72 = ((x2133&(x2134==x2135))>>x2136);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2177 = 0;
	volatile int8_t x2178 = INT8_MIN;
	uint8_t x2179 = UINT8_MAX;
	uint16_t x2180 = 19U;

	t73 = ((x2177&(x2178==x2179))>>x2180);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x2186 = -1;
	int64_t x2187 = -102837631963619LL;
	volatile uint64_t x2188 = 1LLU;
	volatile int32_t t74 = 164568596;

	t74 = ((x2185&(x2186==x2187))>>x2188);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x2201 = UINT16_MAX;
	int32_t x2203 = -1;
	uint8_t x2204 = 14U;
	volatile int32_t t75 = -83749862;

	t75 = ((x2201&(x2202==x2203))>>x2204);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2205 = 5217833920190LL;
	int16_t x2206 = INT16_MIN;
	uint8_t x2207 = UINT8_MAX;
	uint8_t x2208 = 0U;

	t76 = ((x2205&(x2206==x2207))>>x2208);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x2309 = -57;
	int16_t x2310 = INT16_MAX;
	int16_t x2311 = INT16_MIN;
	static uint8_t x2312 = 30U;

	t77 = ((x2309&(x2310==x2311))>>x2312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2329 = -14;
	int64_t x2330 = 5446LL;
	int64_t x2331 = INT64_MAX;
	uint32_t x2332 = 4U;
	int32_t t78 = 323913;

	t78 = ((x2329&(x2330==x2331))>>x2332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x2334 = -1;
	uint8_t x2335 = 2U;
	uint8_t x2336 = 12U;
	static int32_t t79 = -354040;

	t79 = ((x2333&(x2334==x2335))>>x2336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2381 = -1;
	int8_t x2382 = INT8_MAX;
	int8_t x2383 = INT8_MIN;
	uint32_t x2384 = 19U;
	volatile int32_t t80 = -29;

	t80 = ((x2381&(x2382==x2383))>>x2384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2497 = 11U;
	int64_t x2499 = INT64_MIN;
	int16_t x2500 = 0;
	uint32_t t81 = 34U;

	t81 = ((x2497&(x2498==x2499))>>x2500);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2525 = INT16_MAX;
	static int64_t x2526 = INT64_MIN;
	int8_t x2528 = 0;
	static volatile int32_t t82 = -322681844;

	t82 = ((x2525&(x2526==x2527))>>x2528);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x2581 = INT64_MAX;
	volatile int64_t x2583 = 3612423879LL;
	uint32_t x2584 = 0U;
	static volatile int64_t t83 = 4206781484129088LL;

	t83 = ((x2581&(x2582==x2583))>>x2584);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2597 = 60U;
	uint32_t x2599 = 129124017U;
	int32_t t84 = -31752;

	t84 = ((x2597&(x2598==x2599))>>x2600);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x2609 = INT32_MIN;
	int64_t x2611 = -12236044LL;
	uint8_t x2612 = 14U;
	int32_t t85 = 7;

	t85 = ((x2609&(x2610==x2611))>>x2612);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2621 = 350542;
	int8_t x2622 = INT8_MIN;
	int64_t x2623 = -1LL;
	volatile uint8_t x2624 = 0U;
	static int32_t t86 = 36;

	t86 = ((x2621&(x2622==x2623))>>x2624);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2662 = 86U;
	volatile int8_t x2663 = -1;
	uint16_t x2664 = 20U;
	static int32_t t87 = 510;

	t87 = ((x2661&(x2662==x2663))>>x2664);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2687 = 0U;
	int64_t t88 = -224LL;

	t88 = ((x2685&(x2686==x2687))>>x2688);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2737 = -1LL;
	uint32_t x2739 = 15U;
	static uint16_t x2740 = 37U;
	int64_t t89 = 131418214244994LL;

	t89 = ((x2737&(x2738==x2739))>>x2740);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2753 = INT16_MAX;
	uint16_t x2755 = 5U;
	static volatile int16_t x2756 = 3;
	int32_t t90 = 65;

	t90 = ((x2753&(x2754==x2755))>>x2756);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2785 = 1U;
	int32_t x2787 = 19796;
	uint8_t x2788 = 1U;

	t91 = ((x2785&(x2786==x2787))>>x2788);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x2789 = INT16_MIN;
	volatile uint16_t x2790 = UINT16_MAX;
	volatile uint8_t x2791 = 63U;
	int8_t x2792 = 17;

	t92 = ((x2789&(x2790==x2791))>>x2792);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2805 = -3;
	static volatile int8_t x2806 = INT8_MAX;
	int32_t t93 = -1;

	t93 = ((x2805&(x2806==x2807))>>x2808);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2905 = INT16_MIN;
	int16_t x2906 = 17;
	uint8_t x2908 = 1U;
	volatile int32_t t94 = -905740;

	t94 = ((x2905&(x2906==x2907))>>x2908);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x2945 = 0;
	uint32_t x2946 = 1758324U;
	static uint8_t x2947 = 1U;
	int32_t x2948 = 2;
	volatile int32_t t95 = 12336210;

	t95 = ((x2945&(x2946==x2947))>>x2948);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2969 = INT32_MIN;
	uint32_t x2971 = 19341U;
	uint8_t x2972 = 2U;
	volatile int32_t t96 = 6801;

	t96 = ((x2969&(x2970==x2971))>>x2972);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2973 = 3252636210505LL;
	static uint16_t x2974 = 1U;
	static uint32_t x2975 = UINT32_MAX;
	uint16_t x2976 = 3U;
	volatile int64_t t97 = -3502LL;

	t97 = ((x2973&(x2974==x2975))>>x2976);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2985 = INT32_MIN;
	int64_t x2986 = -361417811705856LL;
	static uint64_t x2987 = 61871348136773995LLU;
	static uint32_t x2988 = 0U;
	static volatile int32_t t98 = 3356403;

	t98 = ((x2985&(x2986==x2987))>>x2988);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3017 = -1;
	uint64_t x3018 = UINT64_MAX;
	int32_t x3019 = INT32_MIN;
	uint8_t x3020 = 9U;
	int32_t t99 = 839;

	t99 = ((x3017&(x3018==x3019))>>x3020);

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

