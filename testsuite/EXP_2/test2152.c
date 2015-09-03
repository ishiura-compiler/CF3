#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x19 = INT64_MIN;
int64_t x35 = INT64_MIN;
int64_t x83 = -456LL;
int32_t t2 = -29;
volatile int32_t t3 = 5231;
static int32_t x169 = INT32_MIN;
static int64_t x171 = -1460723755LL;
int32_t x237 = -862486229;
static int32_t x252 = 0;
int64_t x267 = INT64_MIN;
volatile int16_t x275 = 1;
static int16_t x427 = -1;
int32_t x435 = INT32_MAX;
int16_t x496 = 9;
volatile int32_t t15 = -4;
int32_t t16 = 975195;
uint32_t x619 = UINT32_MAX;
volatile int32_t t17 = 13;
volatile int32_t t18 = 1;
uint16_t x721 = 126U;
int32_t x746 = INT32_MIN;
static int32_t t22 = -15939966;
uint16_t x792 = 26U;
static volatile int32_t t23 = -163;
int32_t x815 = INT32_MIN;
uint8_t x816 = 27U;
int16_t x830 = INT16_MIN;
int32_t x890 = -1;
static uint32_t x891 = 251735681U;
int32_t t27 = -1284;
int8_t x938 = -14;
int8_t x942 = INT8_MIN;
int16_t x1223 = INT16_MAX;
volatile int32_t t35 = -123316882;
uint8_t x1277 = 14U;
uint64_t x1280 = 24LLU;
volatile int32_t t36 = 362972611;
uint8_t x1349 = 19U;
int64_t x1355 = 27222993010358025LL;
uint16_t x1357 = 23384U;
static int8_t x1371 = 0;
int16_t x1372 = 1;
static int32_t t40 = 495614;
int16_t x1382 = -12;
int16_t x1383 = INT16_MAX;
volatile int32_t t41 = 745;
static volatile uint8_t x1443 = 2U;
uint64_t x1459 = UINT64_MAX;
int32_t t45 = 617;
uint64_t x1525 = 11LLU;
int32_t x1737 = INT32_MAX;
int64_t x1738 = INT64_MIN;
uint8_t x1739 = 9U;
static uint8_t x1746 = 0U;
int32_t t56 = 51850;
static volatile int8_t x2123 = -1;
int16_t x2140 = 0;
uint16_t x2193 = UINT16_MAX;
volatile uint8_t x2196 = 13U;
static volatile uint64_t x2222 = 1841536765325517813LLU;
int8_t x2225 = INT8_MIN;
int8_t x2227 = INT8_MIN;
volatile uint16_t x2265 = UINT16_MAX;
int8_t x2266 = INT8_MIN;
static uint16_t x2319 = 9565U;
int32_t x2437 = INT32_MIN;
volatile int32_t t71 = -6634;
uint8_t x2452 = 1U;
int8_t x2630 = INT8_MIN;
int32_t t74 = 197304385;
int16_t x2695 = -1;
int32_t x2790 = INT32_MIN;
volatile int32_t t77 = 24688621;
int8_t x2801 = INT8_MIN;
int32_t t79 = -275;
int64_t x2811 = -1LL;
static int32_t x2887 = INT32_MIN;
uint8_t x2895 = UINT8_MAX;
int32_t x2901 = INT32_MIN;
int8_t x2957 = -13;
int16_t x2958 = -832;
static int32_t t84 = 26278608;
int64_t x2982 = INT64_MAX;
volatile int32_t t85 = 832609542;
uint8_t x3060 = 7U;
int16_t x3145 = -2;
int8_t x3332 = 27;
int8_t x3453 = -1;
int64_t x3455 = INT64_MIN;
uint8_t x3466 = 7U;
uint8_t x3467 = 1U;
volatile int32_t x3510 = INT32_MAX;
int16_t x3511 = -1459;
uint8_t x3575 = 18U;
static int8_t x3576 = 3;
volatile uint32_t x3623 = 37232U;
static uint8_t x3631 = UINT8_MAX;
volatile int8_t x3632 = 2;


void f0(void) {
	int32_t x17 = INT32_MAX;
	uint32_t x18 = 1332688855U;
	volatile uint8_t x20 = 15U;
	static volatile int32_t t0 = -14;

	t0 = ((x17<=(x18^x19))>>x20);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x33 = -1168;
	int8_t x34 = INT8_MIN;
	volatile uint8_t x36 = 1U;
	volatile int32_t t1 = -1;

	t1 = ((x33<=(x34^x35))>>x36);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x81 = -1LL;
	int64_t x82 = INT64_MAX;
	int8_t x84 = 6;

	t2 = ((x81<=(x82^x83))>>x84);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x85 = -698806;
	static volatile int8_t x86 = -1;
	int16_t x87 = 0;
	int8_t x88 = 1;

	t3 = ((x85<=(x86^x87))>>x88);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x170 = -634876560LL;
	uint8_t x172 = 1U;
	volatile int32_t t4 = -477678416;

	t4 = ((x169<=(x170^x171))>>x172);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x185 = 117U;
	static int64_t x186 = INT64_MAX;
	uint16_t x187 = 31367U;
	static uint32_t x188 = 7U;
	int32_t t5 = 29876;

	t5 = ((x185<=(x186^x187))>>x188);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x238 = INT64_MAX;
	static volatile int16_t x239 = INT16_MAX;
	volatile int8_t x240 = 3;
	int32_t t6 = 1;

	t6 = ((x237<=(x238^x239))>>x240);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x250 = 45345909U;
	int8_t x251 = 40;
	int32_t t7 = -122587;

	t7 = ((x249<=(x250^x251))>>x252);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x265 = -1;
	int32_t x266 = -1;
	uint8_t x268 = 20U;
	int32_t t8 = 960777;

	t8 = ((x265<=(x266^x267))>>x268);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x273 = 71;
	int64_t x274 = -18762LL;
	uint32_t x276 = 3U;
	volatile int32_t t9 = 704260007;

	t9 = ((x273<=(x274^x275))>>x276);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MIN;
	int16_t x347 = 1;
	int16_t x348 = 1;
	volatile int32_t t10 = 13911;

	t10 = ((x345<=(x346^x347))>>x348);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x425 = -2607200390362LL;
	static int32_t x426 = -226521474;
	uint64_t x428 = 0LLU;
	volatile int32_t t11 = 8609;

	t11 = ((x425<=(x426^x427))>>x428);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x433 = INT64_MAX;
	uint64_t x434 = 79259LLU;
	uint16_t x436 = 0U;
	volatile int32_t t12 = -1;

	t12 = ((x433<=(x434^x435))>>x436);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x469 = 1;
	uint64_t x470 = 227114658LLU;
	int32_t x471 = -1;
	uint16_t x472 = 3U;
	volatile int32_t t13 = 4;

	t13 = ((x469<=(x470^x471))>>x472);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x493 = 652082153071401LL;
	volatile int16_t x494 = INT16_MIN;
	int8_t x495 = -2;
	volatile int32_t t14 = 12;

	t14 = ((x493<=(x494^x495))>>x496);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x537 = 7U;
	static volatile int32_t x538 = INT32_MIN;
	uint16_t x539 = UINT16_MAX;
	volatile uint8_t x540 = 15U;

	t15 = ((x537<=(x538^x539))>>x540);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x589 = UINT64_MAX;
	int8_t x590 = 0;
	int16_t x591 = -8006;
	static int8_t x592 = 26;

	t16 = ((x589<=(x590^x591))>>x592);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x617 = -49040020582343522LL;
	volatile int64_t x618 = INT64_MIN;
	uint8_t x620 = 17U;

	t17 = ((x617<=(x618^x619))>>x620);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x625 = UINT32_MAX;
	uint16_t x626 = 1U;
	volatile int32_t x627 = 38;
	int16_t x628 = 1;

	t18 = ((x625<=(x626^x627))>>x628);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x722 = UINT8_MAX;
	int32_t x723 = -1;
	int16_t x724 = 19;
	static volatile int32_t t19 = -336433217;

	t19 = ((x721<=(x722^x723))>>x724);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x729 = INT8_MAX;
	static uint64_t x730 = 40LLU;
	uint32_t x731 = 2607771U;
	int8_t x732 = 9;
	volatile int32_t t20 = -1036838;

	t20 = ((x729<=(x730^x731))>>x732);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x745 = INT32_MIN;
	volatile uint8_t x747 = 5U;
	uint8_t x748 = 4U;
	int32_t t21 = -1;

	t21 = ((x745<=(x746^x747))>>x748);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x769 = INT8_MIN;
	uint8_t x770 = 38U;
	int16_t x771 = INT16_MIN;
	volatile uint8_t x772 = 1U;

	t22 = ((x769<=(x770^x771))>>x772);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x789 = INT64_MIN;
	volatile int32_t x790 = INT32_MAX;
	static volatile uint64_t x791 = 0LLU;

	t23 = ((x789<=(x790^x791))>>x792);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x813 = INT8_MIN;
	int16_t x814 = -5;
	volatile int32_t t24 = -34013352;

	t24 = ((x813<=(x814^x815))>>x816);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x817 = 7762U;
	static int64_t x818 = INT64_MIN;
	int32_t x819 = INT32_MIN;
	static volatile int16_t x820 = 0;
	int32_t t25 = 6478;

	t25 = ((x817<=(x818^x819))>>x820);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x829 = -1;
	int16_t x831 = INT16_MIN;
	int32_t x832 = 0;
	int32_t t26 = -3989;

	t26 = ((x829<=(x830^x831))>>x832);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x889 = 0;
	uint32_t x892 = 3U;

	t27 = ((x889<=(x890^x891))>>x892);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x937 = INT8_MAX;
	uint64_t x939 = 61093513357LLU;
	uint8_t x940 = 0U;
	static volatile int32_t t28 = -395;

	t28 = ((x937<=(x938^x939))>>x940);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x941 = 304U;
	int64_t x943 = -1LL;
	static uint16_t x944 = 4U;
	int32_t t29 = -1385510;

	t29 = ((x941<=(x942^x943))>>x944);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1021 = INT64_MIN;
	static int32_t x1022 = 1;
	static volatile uint16_t x1023 = UINT16_MAX;
	static uint8_t x1024 = 13U;
	int32_t t30 = 17135;

	t30 = ((x1021<=(x1022^x1023))>>x1024);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1093 = -970;
	uint64_t x1094 = 6260241648LLU;
	int64_t x1095 = INT64_MAX;
	static int8_t x1096 = 0;
	volatile int32_t t31 = 2671749;

	t31 = ((x1093<=(x1094^x1095))>>x1096);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1145 = INT64_MIN;
	static uint64_t x1146 = UINT64_MAX;
	int16_t x1147 = -233;
	static uint8_t x1148 = 1U;
	int32_t t32 = -378366222;

	t32 = ((x1145<=(x1146^x1147))>>x1148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1221 = INT16_MIN;
	uint64_t x1222 = 13175021307668622LLU;
	volatile int8_t x1224 = 3;
	volatile int32_t t33 = 61608;

	t33 = ((x1221<=(x1222^x1223))>>x1224);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1225 = -65;
	int32_t x1226 = INT32_MIN;
	volatile uint32_t x1227 = UINT32_MAX;
	int8_t x1228 = 13;
	static volatile int32_t t34 = -45029;

	t34 = ((x1225<=(x1226^x1227))>>x1228);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1269 = INT32_MIN;
	int16_t x1270 = -1;
	uint8_t x1271 = UINT8_MAX;
	uint8_t x1272 = 3U;

	t35 = ((x1269<=(x1270^x1271))>>x1272);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1278 = UINT8_MAX;
	int64_t x1279 = 132989551LL;

	t36 = ((x1277<=(x1278^x1279))>>x1280);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1350 = -1LL;
	int32_t x1351 = -1;
	volatile int16_t x1352 = 7;
	volatile int32_t t37 = 10425;

	t37 = ((x1349<=(x1350^x1351))>>x1352);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1353 = INT16_MIN;
	static uint8_t x1354 = UINT8_MAX;
	volatile uint16_t x1356 = 2U;
	int32_t t38 = -73;

	t38 = ((x1353<=(x1354^x1355))>>x1356);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1358 = 80U;
	static int16_t x1359 = INT16_MIN;
	uint8_t x1360 = 2U;
	volatile int32_t t39 = -512002587;

	t39 = ((x1357<=(x1358^x1359))>>x1360);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1369 = 6U;
	volatile int64_t x1370 = -1LL;

	t40 = ((x1369<=(x1370^x1371))>>x1372);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1381 = INT32_MIN;
	volatile uint16_t x1384 = 1U;

	t41 = ((x1381<=(x1382^x1383))>>x1384);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1441 = UINT64_MAX;
	volatile uint16_t x1442 = 168U;
	int8_t x1444 = 0;
	int32_t t42 = 819625238;

	t42 = ((x1441<=(x1442^x1443))>>x1444);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1457 = -1LL;
	static int16_t x1458 = INT16_MIN;
	uint16_t x1460 = 2U;
	int32_t t43 = 425125;

	t43 = ((x1457<=(x1458^x1459))>>x1460);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1461 = -1;
	uint64_t x1462 = 927481241869895541LLU;
	int32_t x1463 = -1;
	static uint16_t x1464 = 7U;
	int32_t t44 = -7612;

	t44 = ((x1461<=(x1462^x1463))>>x1464);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1505 = -4828984LL;
	uint8_t x1506 = UINT8_MAX;
	volatile uint64_t x1507 = 14337LLU;
	uint8_t x1508 = 15U;

	t45 = ((x1505<=(x1506^x1507))>>x1508);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1526 = 106U;
	volatile uint16_t x1527 = 0U;
	int8_t x1528 = 1;
	int32_t t46 = 3283190;

	t46 = ((x1525<=(x1526^x1527))>>x1528);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x1541 = 39868270LLU;
	uint16_t x1542 = 2U;
	volatile int8_t x1543 = INT8_MIN;
	static uint16_t x1544 = 3U;
	volatile int32_t t47 = -6642;

	t47 = ((x1541<=(x1542^x1543))>>x1544);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1573 = INT32_MIN;
	volatile int8_t x1574 = INT8_MIN;
	volatile int64_t x1575 = INT64_MIN;
	static volatile uint8_t x1576 = 3U;
	int32_t t48 = 16;

	t48 = ((x1573<=(x1574^x1575))>>x1576);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1601 = 4334U;
	int16_t x1602 = INT16_MIN;
	volatile uint64_t x1603 = 35112959476471849LLU;
	uint8_t x1604 = 0U;
	volatile int32_t t49 = 182589;

	t49 = ((x1601<=(x1602^x1603))>>x1604);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1740 = 3U;
	static volatile int32_t t50 = -3877;

	t50 = ((x1737<=(x1738^x1739))>>x1740);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x1745 = INT32_MIN;
	int32_t x1747 = INT32_MIN;
	uint8_t x1748 = 1U;
	static volatile int32_t t51 = -2;

	t51 = ((x1745<=(x1746^x1747))>>x1748);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x1769 = INT16_MAX;
	static uint8_t x1770 = UINT8_MAX;
	int16_t x1771 = INT16_MIN;
	int16_t x1772 = 21;
	volatile int32_t t52 = 197678251;

	t52 = ((x1769<=(x1770^x1771))>>x1772);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1833 = INT16_MAX;
	volatile int64_t x1834 = 2113545264LL;
	int16_t x1835 = -1;
	uint8_t x1836 = 1U;
	volatile int32_t t53 = -370644;

	t53 = ((x1833<=(x1834^x1835))>>x1836);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x1841 = INT64_MAX;
	uint16_t x1842 = UINT16_MAX;
	int8_t x1843 = -28;
	static uint8_t x1844 = 28U;
	int32_t t54 = 941;

	t54 = ((x1841<=(x1842^x1843))>>x1844);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1877 = -1;
	int8_t x1878 = -12;
	int16_t x1879 = INT16_MAX;
	uint32_t x1880 = 4U;
	volatile int32_t t55 = -10946;

	t55 = ((x1877<=(x1878^x1879))>>x1880);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1909 = -1;
	int64_t x1910 = INT64_MIN;
	uint16_t x1911 = UINT16_MAX;
	int8_t x1912 = 2;

	t56 = ((x1909<=(x1910^x1911))>>x1912);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x1929 = 30U;
	int8_t x1930 = 0;
	static uint16_t x1931 = 1012U;
	uint16_t x1932 = 1U;
	volatile int32_t t57 = -780947;

	t57 = ((x1929<=(x1930^x1931))>>x1932);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1969 = 193102212;
	int8_t x1970 = INT8_MAX;
	int64_t x1971 = INT64_MIN;
	int8_t x1972 = 6;
	int32_t t58 = -10890015;

	t58 = ((x1969<=(x1970^x1971))>>x1972);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2081 = 1;
	int16_t x2082 = INT16_MAX;
	static int16_t x2083 = 4027;
	volatile uint8_t x2084 = 5U;
	volatile int32_t t59 = -64;

	t59 = ((x2081<=(x2082^x2083))>>x2084);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x2121 = INT8_MIN;
	volatile int64_t x2122 = -1LL;
	int16_t x2124 = 3;
	static volatile int32_t t60 = -158562232;

	t60 = ((x2121<=(x2122^x2123))>>x2124);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2137 = INT8_MIN;
	static int64_t x2138 = INT64_MIN;
	int32_t x2139 = INT32_MIN;
	volatile int32_t t61 = -670576;

	t61 = ((x2137<=(x2138^x2139))>>x2140);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2194 = -1;
	uint32_t x2195 = 89U;
	volatile int32_t t62 = -3646;

	t62 = ((x2193<=(x2194^x2195))>>x2196);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2221 = 4882554LLU;
	int16_t x2223 = INT16_MIN;
	uint32_t x2224 = 22U;
	static int32_t t63 = 170845049;

	t63 = ((x2221<=(x2222^x2223))>>x2224);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2226 = 28;
	uint16_t x2228 = 0U;
	int32_t t64 = -24153829;

	t64 = ((x2225<=(x2226^x2227))>>x2228);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2249 = UINT16_MAX;
	static int32_t x2250 = INT32_MIN;
	int64_t x2251 = INT64_MIN;
	static volatile uint16_t x2252 = 3U;
	volatile int32_t t65 = -24746062;

	t65 = ((x2249<=(x2250^x2251))>>x2252);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2267 = INT16_MIN;
	static uint16_t x2268 = 1U;
	int32_t t66 = -13581281;

	t66 = ((x2265<=(x2266^x2267))>>x2268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2317 = 28846939473842821LL;
	static uint32_t x2318 = 1034394U;
	uint8_t x2320 = 1U;
	volatile int32_t t67 = -19992;

	t67 = ((x2317<=(x2318^x2319))>>x2320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2409 = -1;
	int64_t x2410 = INT64_MIN;
	static volatile uint64_t x2411 = UINT64_MAX;
	uint8_t x2412 = 0U;
	int32_t t68 = 6227;

	t68 = ((x2409<=(x2410^x2411))>>x2412);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2425 = -1LL;
	uint8_t x2426 = 37U;
	int32_t x2427 = INT32_MIN;
	uint32_t x2428 = 0U;
	volatile int32_t t69 = -28754;

	t69 = ((x2425<=(x2426^x2427))>>x2428);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2429 = -6525738;
	int64_t x2430 = INT64_MIN;
	static int16_t x2431 = INT16_MIN;
	volatile int8_t x2432 = 2;
	static int32_t t70 = 2014877;

	t70 = ((x2429<=(x2430^x2431))>>x2432);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2438 = 1;
	static uint8_t x2439 = 1U;
	uint16_t x2440 = 1U;

	t71 = ((x2437<=(x2438^x2439))>>x2440);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2449 = 21075U;
	static uint32_t x2450 = 9763504U;
	static uint16_t x2451 = 14117U;
	volatile int32_t t72 = 43301;

	t72 = ((x2449<=(x2450^x2451))>>x2452);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2629 = 6;
	int16_t x2631 = 1;
	int16_t x2632 = 0;
	volatile int32_t t73 = 1835731;

	t73 = ((x2629<=(x2630^x2631))>>x2632);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2689 = INT32_MIN;
	int8_t x2690 = INT8_MIN;
	static uint8_t x2691 = UINT8_MAX;
	uint8_t x2692 = 6U;

	t74 = ((x2689<=(x2690^x2691))>>x2692);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2693 = INT64_MIN;
	uint32_t x2694 = 173651273U;
	uint32_t x2696 = 2U;
	int32_t t75 = 20;

	t75 = ((x2693<=(x2694^x2695))>>x2696);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2741 = 234959937226225389LLU;
	int64_t x2742 = -1LL;
	int64_t x2743 = INT64_MAX;
	uint8_t x2744 = 7U;
	volatile int32_t t76 = 514204;

	t76 = ((x2741<=(x2742^x2743))>>x2744);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2789 = 467LLU;
	uint16_t x2791 = 176U;
	uint16_t x2792 = 5U;

	t77 = ((x2789<=(x2790^x2791))>>x2792);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2793 = 23U;
	int8_t x2794 = 1;
	static int32_t x2795 = 54;
	int8_t x2796 = 22;
	int32_t t78 = -192879913;

	t78 = ((x2793<=(x2794^x2795))>>x2796);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2802 = UINT64_MAX;
	uint16_t x2803 = UINT16_MAX;
	uint8_t x2804 = 3U;

	t79 = ((x2801<=(x2802^x2803))>>x2804);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2809 = INT32_MIN;
	volatile int32_t x2810 = INT32_MIN;
	uint8_t x2812 = 30U;
	volatile int32_t t80 = -2980234;

	t80 = ((x2809<=(x2810^x2811))>>x2812);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x2885 = 230598610U;
	int8_t x2886 = 1;
	uint8_t x2888 = 3U;
	volatile int32_t t81 = 917;

	t81 = ((x2885<=(x2886^x2887))>>x2888);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2893 = -1;
	int16_t x2894 = -12179;
	volatile uint16_t x2896 = 1U;
	int32_t t82 = -287;

	t82 = ((x2893<=(x2894^x2895))>>x2896);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2902 = INT64_MIN;
	int32_t x2903 = INT32_MAX;
	uint32_t x2904 = 0U;
	volatile int32_t t83 = 1059348;

	t83 = ((x2901<=(x2902^x2903))>>x2904);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2959 = 7LLU;
	volatile int16_t x2960 = 12;

	t84 = ((x2957<=(x2958^x2959))>>x2960);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2981 = 4647U;
	int8_t x2983 = INT8_MIN;
	int8_t x2984 = 0;

	t85 = ((x2981<=(x2982^x2983))>>x2984);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x3057 = -567694187008847LL;
	static int32_t x3058 = INT32_MIN;
	static int64_t x3059 = INT64_MAX;
	int32_t t86 = 15581759;

	t86 = ((x3057<=(x3058^x3059))>>x3060);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3146 = 940;
	int64_t x3147 = INT64_MIN;
	uint32_t x3148 = 23U;
	volatile int32_t t87 = -16477065;

	t87 = ((x3145<=(x3146^x3147))>>x3148);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x3329 = 75;
	int16_t x3330 = 2149;
	volatile int64_t x3331 = INT64_MIN;
	volatile int32_t t88 = -3;

	t88 = ((x3329<=(x3330^x3331))>>x3332);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3337 = -562002588;
	volatile uint16_t x3338 = 80U;
	volatile int64_t x3339 = INT64_MAX;
	int8_t x3340 = 4;
	volatile int32_t t89 = 30251;

	t89 = ((x3337<=(x3338^x3339))>>x3340);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x3349 = 1LLU;
	int32_t x3350 = -1;
	int8_t x3351 = INT8_MIN;
	uint8_t x3352 = 4U;
	volatile int32_t t90 = -319643097;

	t90 = ((x3349<=(x3350^x3351))>>x3352);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x3454 = INT32_MAX;
	uint32_t x3456 = 19U;
	volatile int32_t t91 = 34550;

	t91 = ((x3453<=(x3454^x3455))>>x3456);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x3461 = 2254474785367LLU;
	int32_t x3462 = -1;
	volatile uint32_t x3463 = 1383139U;
	uint16_t x3464 = 12U;
	static volatile int32_t t92 = 2;

	t92 = ((x3461<=(x3462^x3463))>>x3464);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3465 = UINT32_MAX;
	uint16_t x3468 = 25U;
	volatile int32_t t93 = 7321;

	t93 = ((x3465<=(x3466^x3467))>>x3468);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3509 = -10;
	static uint16_t x3512 = 12U;
	volatile int32_t t94 = 1430;

	t94 = ((x3509<=(x3510^x3511))>>x3512);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3513 = -136829723;
	static volatile uint8_t x3514 = 25U;
	volatile int8_t x3515 = -1;
	uint32_t x3516 = 26U;
	int32_t t95 = 0;

	t95 = ((x3513<=(x3514^x3515))>>x3516);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3573 = -7;
	static volatile int16_t x3574 = -1;
	int32_t t96 = -21891;

	t96 = ((x3573<=(x3574^x3575))>>x3576);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x3581 = 5U;
	int32_t x3582 = 210610;
	uint8_t x3583 = 3U;
	uint8_t x3584 = 6U;
	int32_t t97 = -10264978;

	t97 = ((x3581<=(x3582^x3583))>>x3584);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x3621 = 177U;
	int64_t x3622 = INT64_MAX;
	uint32_t x3624 = 0U;
	int32_t t98 = 282324;

	t98 = ((x3621<=(x3622^x3623))>>x3624);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3629 = INT8_MIN;
	uint32_t x3630 = 6831433U;
	int32_t t99 = -1;

	t99 = ((x3629<=(x3630^x3631))>>x3632);

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

