#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = INT64_MIN;
uint8_t x18 = 4U;
int16_t x19 = 782;
static uint8_t x20 = 0U;
uint64_t x43 = 20LLU;
int64_t x44 = 28LL;
int32_t t2 = 701029;
int16_t x62 = 36;
static uint64_t x89 = 8792775250LLU;
static uint16_t x90 = 1U;
static uint8_t x141 = 1U;
int32_t x143 = INT32_MIN;
static volatile int32_t t7 = 1544306;
int32_t x347 = -1;
uint16_t x390 = 1U;
volatile int8_t x392 = 28;
static int32_t x417 = 20668;
volatile int32_t x419 = 77196;
static volatile uint8_t x420 = 0U;
uint32_t x484 = 1U;
int32_t t12 = -7905;
static uint32_t x566 = 1U;
int64_t x567 = INT64_MIN;
volatile uint8_t x584 = 20U;
static uint16_t x664 = 0U;
uint64_t x703 = 4181461LLU;
static volatile int32_t t18 = -388;
int16_t x747 = 12649;
uint64_t x748 = 9LLU;
int16_t x819 = INT16_MAX;
volatile uint16_t x844 = 19U;
int16_t x898 = -1;
int32_t x905 = -1;
uint8_t x908 = 13U;
int32_t t26 = -121115;
volatile int32_t t29 = -51;
volatile int8_t x1056 = 0;
int32_t x1111 = INT32_MIN;
static volatile int64_t x1127 = -1LL;
volatile int16_t x1147 = -1;
static uint32_t x1148 = 5U;
int32_t x1174 = INT32_MIN;
uint16_t x1191 = 0U;
volatile uint8_t x1192 = 7U;
volatile uint64_t x1223 = 48391681457LLU;
volatile int32_t t38 = -6133946;
volatile int32_t t39 = -13175448;
int64_t x1256 = 0LL;
int64_t x1385 = INT64_MIN;
int32_t t43 = -217598302;
volatile int32_t t44 = 99141;
static int16_t x1433 = -5195;
uint8_t x1456 = 2U;
int16_t x1462 = INT16_MAX;
uint8_t x1464 = 0U;
int32_t t50 = 324;
uint8_t x1484 = 8U;
static int64_t x1502 = INT64_MIN;
volatile int8_t x1503 = INT8_MAX;
int32_t t54 = -15247092;
volatile int16_t x1607 = -1;
int32_t t56 = 87;
int16_t x1677 = -1;
volatile int8_t x1680 = 26;
uint8_t x1709 = 1U;
uint8_t x1740 = 1U;
static int32_t t59 = -228;
static uint16_t x1789 = 1968U;
uint32_t x1797 = 23224U;
int16_t x1967 = INT16_MAX;
static volatile uint8_t x2016 = 0U;
uint8_t x2056 = 1U;
static uint8_t x2212 = 1U;
int32_t t74 = -9;
volatile uint8_t x2213 = 20U;
volatile int32_t t76 = 746;
static int8_t x2383 = 5;
int32_t x2450 = INT32_MIN;
volatile uint8_t x2452 = 1U;
int16_t x2513 = INT16_MIN;
static uint32_t x2514 = UINT32_MAX;
int16_t x2537 = INT16_MAX;
volatile uint64_t x2539 = 1594432LLU;
uint64_t x2594 = 5909182131LLU;
int8_t x2595 = INT8_MIN;
static volatile uint32_t x2596 = 17U;
volatile int32_t t85 = 7321178;
static volatile int16_t x2608 = 1;
static uint8_t x2720 = 5U;
int16_t x2763 = -44;
static int32_t t90 = -35736741;
uint64_t x2915 = 13842413943LLU;
volatile uint64_t x2935 = 1964LLU;
volatile int8_t x2938 = INT8_MIN;
int32_t t95 = -196867857;
uint8_t x3048 = 26U;
volatile int16_t x3073 = -1;
int16_t x3074 = INT16_MAX;
volatile int32_t t97 = -136194535;
static int32_t t98 = -1;
int8_t x3257 = 1;
int16_t x3258 = -3212;
volatile int32_t t99 = -392;


void f0(void) {
	int32_t x9 = INT32_MAX;
	volatile int8_t x10 = 1;
	static uint32_t x12 = 2U;
	volatile int32_t t0 = -51518549;

	t0 = ((x9<=(x10+x11))>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x17 = 24U;
	static volatile int32_t t1 = -277896;

	t1 = ((x17<=(x18+x19))>>x20);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x41 = INT64_MIN;
	volatile int64_t x42 = -1LL;

	t2 = ((x41<=(x42+x43))>>x44);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x45 = INT64_MIN;
	volatile int8_t x46 = -10;
	volatile uint64_t x47 = 1LLU;
	int8_t x48 = 1;
	int32_t t3 = 3942;

	t3 = ((x45<=(x46+x47))>>x48);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x61 = -1;
	int32_t x63 = -4937;
	uint64_t x64 = 1LLU;
	volatile int32_t t4 = 13379;

	t4 = ((x61<=(x62+x63))>>x64);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x91 = 221712108LL;
	uint8_t x92 = 27U;
	volatile int32_t t5 = 26907589;

	t5 = ((x89<=(x90+x91))>>x92);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x142 = -105481459992250437LL;
	static int32_t x144 = 0;
	static int32_t t6 = -11927924;

	t6 = ((x141<=(x142+x143))>>x144);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x241 = -1;
	int16_t x242 = -1;
	static int64_t x243 = -1914107612243175071LL;
	uint8_t x244 = 3U;

	t7 = ((x241<=(x242+x243))>>x244);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x345 = -1LL;
	int16_t x346 = INT16_MIN;
	volatile int64_t x348 = 1LL;
	volatile int32_t t8 = 1;

	t8 = ((x345<=(x346+x347))>>x348);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x369 = UINT32_MAX;
	static uint16_t x370 = 2U;
	volatile int16_t x371 = -1;
	static uint32_t x372 = 0U;
	int32_t t9 = 39754734;

	t9 = ((x369<=(x370+x371))>>x372);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x389 = INT8_MIN;
	int8_t x391 = -1;
	int32_t t10 = -20034017;

	t10 = ((x389<=(x390+x391))>>x392);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x418 = UINT64_MAX;
	volatile int32_t t11 = -140734963;

	t11 = ((x417<=(x418+x419))>>x420);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x481 = 843LL;
	uint64_t x482 = 252040445561LLU;
	uint64_t x483 = 172447LLU;

	t12 = ((x481<=(x482+x483))>>x484);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x561 = INT8_MIN;
	static uint8_t x562 = 6U;
	volatile uint32_t x563 = 207195U;
	static uint32_t x564 = 6U;
	static volatile int32_t t13 = 2;

	t13 = ((x561<=(x562+x563))>>x564);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x565 = -1142051814484292160LL;
	uint32_t x568 = 18U;
	volatile int32_t t14 = 1;

	t14 = ((x565<=(x566+x567))>>x568);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x581 = INT32_MAX;
	int8_t x582 = 0;
	static int32_t x583 = INT32_MIN;
	int32_t t15 = 17463417;

	t15 = ((x581<=(x582+x583))>>x584);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x629 = 25211661223893LLU;
	uint16_t x630 = 0U;
	static uint16_t x631 = UINT16_MAX;
	int32_t x632 = 16;
	int32_t t16 = -31963517;

	t16 = ((x629<=(x630+x631))>>x632);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x661 = 5U;
	volatile int32_t x662 = 2;
	int8_t x663 = INT8_MIN;
	volatile int32_t t17 = -136634;

	t17 = ((x661<=(x662+x663))>>x664);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x701 = UINT8_MAX;
	static int64_t x702 = 1510LL;
	int8_t x704 = 0;

	t18 = ((x701<=(x702+x703))>>x704);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x705 = 13;
	int32_t x706 = -14371055;
	static int8_t x707 = INT8_MIN;
	int8_t x708 = 11;
	volatile int32_t t19 = -5627;

	t19 = ((x705<=(x706+x707))>>x708);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x713 = INT64_MAX;
	int16_t x714 = 3315;
	static int16_t x715 = -4052;
	uint8_t x716 = 2U;
	volatile int32_t t20 = -65;

	t20 = ((x713<=(x714+x715))>>x716);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x745 = INT32_MIN;
	int16_t x746 = -1;
	int32_t t21 = -1698;

	t21 = ((x745<=(x746+x747))>>x748);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x777 = 2U;
	uint16_t x778 = 3918U;
	int16_t x779 = INT16_MIN;
	int8_t x780 = 16;
	int32_t t22 = -118747856;

	t22 = ((x777<=(x778+x779))>>x780);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x817 = 11;
	uint8_t x818 = 7U;
	static int8_t x820 = 31;
	static volatile int32_t t23 = 2057748;

	t23 = ((x817<=(x818+x819))>>x820);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x841 = 147824954LLU;
	int64_t x842 = INT64_MAX;
	uint64_t x843 = UINT64_MAX;
	volatile int32_t t24 = 32550;

	t24 = ((x841<=(x842+x843))>>x844);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x897 = INT8_MIN;
	static int64_t x899 = -344654706LL;
	volatile int16_t x900 = 13;
	volatile int32_t t25 = 58927;

	t25 = ((x897<=(x898+x899))>>x900);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x906 = 3772;
	uint8_t x907 = UINT8_MAX;

	t26 = ((x905<=(x906+x907))>>x908);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x925 = -1;
	uint32_t x926 = UINT32_MAX;
	int8_t x927 = 3;
	static uint64_t x928 = 1LLU;
	static volatile int32_t t27 = -312631573;

	t27 = ((x925<=(x926+x927))>>x928);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1009 = 248257666185116970LL;
	static int16_t x1010 = -1;
	uint64_t x1011 = 236992708359327174LLU;
	static int8_t x1012 = 0;
	volatile int32_t t28 = -20698;

	t28 = ((x1009<=(x1010+x1011))>>x1012);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1021 = 0;
	static int8_t x1022 = -1;
	int16_t x1023 = INT16_MAX;
	uint16_t x1024 = 25U;

	t29 = ((x1021<=(x1022+x1023))>>x1024);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1053 = 23U;
	uint16_t x1054 = 68U;
	int64_t x1055 = 2LL;
	int32_t t30 = 279;

	t30 = ((x1053<=(x1054+x1055))>>x1056);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1109 = 0;
	int16_t x1110 = 13;
	static int16_t x1112 = 1;
	static int32_t t31 = -55484085;

	t31 = ((x1109<=(x1110+x1111))>>x1112);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1125 = INT8_MIN;
	int8_t x1126 = -1;
	volatile uint8_t x1128 = 20U;
	int32_t t32 = -765507177;

	t32 = ((x1125<=(x1126+x1127))>>x1128);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1145 = -1;
	uint8_t x1146 = UINT8_MAX;
	volatile int32_t t33 = 11;

	t33 = ((x1145<=(x1146+x1147))>>x1148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1169 = -1;
	volatile uint8_t x1170 = UINT8_MAX;
	int16_t x1171 = 1;
	int16_t x1172 = 2;
	int32_t t34 = -7589599;

	t34 = ((x1169<=(x1170+x1171))>>x1172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1173 = INT8_MIN;
	int8_t x1175 = 10;
	int8_t x1176 = 1;
	int32_t t35 = -1;

	t35 = ((x1173<=(x1174+x1175))>>x1176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x1177 = INT16_MIN;
	static volatile uint8_t x1178 = UINT8_MAX;
	static int64_t x1179 = INT64_MIN;
	static uint8_t x1180 = 0U;
	static volatile int32_t t36 = -12;

	t36 = ((x1177<=(x1178+x1179))>>x1180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1189 = UINT32_MAX;
	int64_t x1190 = 92741LL;
	volatile int32_t t37 = 236773371;

	t37 = ((x1189<=(x1190+x1191))>>x1192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1221 = -13;
	int32_t x1222 = INT32_MIN;
	static volatile uint32_t x1224 = 13U;

	t38 = ((x1221<=(x1222+x1223))>>x1224);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1229 = 6041051U;
	int8_t x1230 = INT8_MIN;
	uint32_t x1231 = UINT32_MAX;
	uint16_t x1232 = 28U;

	t39 = ((x1229<=(x1230+x1231))>>x1232);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x1253 = UINT32_MAX;
	static int64_t x1254 = INT64_MAX;
	volatile int16_t x1255 = INT16_MIN;
	volatile int32_t t40 = -27578926;

	t40 = ((x1253<=(x1254+x1255))>>x1256);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1305 = UINT64_MAX;
	int8_t x1306 = -1;
	int8_t x1307 = -1;
	uint8_t x1308 = 0U;
	volatile int32_t t41 = -515;

	t41 = ((x1305<=(x1306+x1307))>>x1308);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1361 = 6535699U;
	volatile int8_t x1362 = INT8_MIN;
	int64_t x1363 = -411202LL;
	int8_t x1364 = 1;
	int32_t t42 = 1;

	t42 = ((x1361<=(x1362+x1363))>>x1364);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1386 = INT32_MIN;
	static int32_t x1387 = 1461177;
	int16_t x1388 = 2;

	t43 = ((x1385<=(x1386+x1387))>>x1388);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1393 = -27;
	int8_t x1394 = 6;
	int8_t x1395 = INT8_MIN;
	uint8_t x1396 = 2U;

	t44 = ((x1393<=(x1394+x1395))>>x1396);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1409 = 57349787110LL;
	static int64_t x1410 = -14878LL;
	static uint8_t x1411 = 2U;
	int8_t x1412 = 6;
	volatile int32_t t45 = -2361047;

	t45 = ((x1409<=(x1410+x1411))>>x1412);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1417 = 25U;
	uint64_t x1418 = 497867830535108166LLU;
	volatile uint16_t x1419 = 303U;
	uint8_t x1420 = 0U;
	static volatile int32_t t46 = -9008488;

	t46 = ((x1417<=(x1418+x1419))>>x1420);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1434 = 11;
	static int64_t x1435 = INT64_MIN;
	int8_t x1436 = 6;
	int32_t t47 = -35776869;

	t47 = ((x1433<=(x1434+x1435))>>x1436);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1441 = INT64_MAX;
	static int8_t x1442 = 0;
	static uint64_t x1443 = UINT64_MAX;
	uint16_t x1444 = 3U;
	int32_t t48 = 223;

	t48 = ((x1441<=(x1442+x1443))>>x1444);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1453 = 1U;
	uint16_t x1454 = 0U;
	int16_t x1455 = INT16_MIN;
	int32_t t49 = -10382;

	t49 = ((x1453<=(x1454+x1455))>>x1456);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x1461 = UINT64_MAX;
	static uint16_t x1463 = UINT16_MAX;

	t50 = ((x1461<=(x1462+x1463))>>x1464);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x1481 = INT8_MIN;
	volatile uint32_t x1482 = 441342U;
	int16_t x1483 = INT16_MAX;
	volatile int32_t t51 = 1659;

	t51 = ((x1481<=(x1482+x1483))>>x1484);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1501 = INT32_MAX;
	uint32_t x1504 = 3U;
	static int32_t t52 = 184145;

	t52 = ((x1501<=(x1502+x1503))>>x1504);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1517 = UINT32_MAX;
	uint32_t x1518 = 1015418U;
	int16_t x1519 = -1;
	uint16_t x1520 = 18U;
	volatile int32_t t53 = 0;

	t53 = ((x1517<=(x1518+x1519))>>x1520);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1553 = 168353LLU;
	uint64_t x1554 = 20683592641958171LLU;
	int64_t x1555 = INT64_MAX;
	uint32_t x1556 = 1U;

	t54 = ((x1553<=(x1554+x1555))>>x1556);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1597 = UINT32_MAX;
	static volatile int64_t x1598 = INT64_MIN;
	volatile uint64_t x1599 = UINT64_MAX;
	uint8_t x1600 = 3U;
	static int32_t t55 = -8104578;

	t55 = ((x1597<=(x1598+x1599))>>x1600);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x1605 = UINT32_MAX;
	static uint16_t x1606 = UINT16_MAX;
	int8_t x1608 = 0;

	t56 = ((x1605<=(x1606+x1607))>>x1608);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1678 = 32681465251808113LL;
	uint64_t x1679 = 375522217889LLU;
	volatile int32_t t57 = -217015880;

	t57 = ((x1677<=(x1678+x1679))>>x1680);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1710 = -1LL;
	int16_t x1711 = 125;
	uint32_t x1712 = 1U;
	volatile int32_t t58 = 6736;

	t58 = ((x1709<=(x1710+x1711))>>x1712);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x1737 = 724;
	static int8_t x1738 = 11;
	int8_t x1739 = -3;

	t59 = ((x1737<=(x1738+x1739))>>x1740);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x1745 = INT64_MIN;
	volatile int32_t x1746 = INT32_MAX;
	volatile uint32_t x1747 = 7188416U;
	uint16_t x1748 = 4U;
	volatile int32_t t60 = -28723;

	t60 = ((x1745<=(x1746+x1747))>>x1748);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1765 = 5U;
	uint16_t x1766 = 2152U;
	uint16_t x1767 = UINT16_MAX;
	int16_t x1768 = 0;
	static volatile int32_t t61 = 3;

	t61 = ((x1765<=(x1766+x1767))>>x1768);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1769 = UINT8_MAX;
	uint64_t x1770 = UINT64_MAX;
	static int16_t x1771 = INT16_MIN;
	volatile int16_t x1772 = 23;
	int32_t t62 = -8834890;

	t62 = ((x1769<=(x1770+x1771))>>x1772);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1790 = UINT16_MAX;
	int16_t x1791 = -1;
	uint8_t x1792 = 13U;
	int32_t t63 = 97727;

	t63 = ((x1789<=(x1790+x1791))>>x1792);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1793 = INT8_MIN;
	int16_t x1794 = INT16_MAX;
	uint64_t x1795 = 1407LLU;
	volatile int8_t x1796 = 1;
	static volatile int32_t t64 = 1;

	t64 = ((x1793<=(x1794+x1795))>>x1796);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1798 = INT32_MAX;
	int8_t x1799 = -2;
	int16_t x1800 = 1;
	static int32_t t65 = -811;

	t65 = ((x1797<=(x1798+x1799))>>x1800);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1965 = -1LL;
	volatile int64_t x1966 = INT64_MIN;
	int8_t x1968 = 1;
	int32_t t66 = -6378729;

	t66 = ((x1965<=(x1966+x1967))>>x1968);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1985 = 475773654U;
	uint64_t x1986 = UINT64_MAX;
	int32_t x1987 = INT32_MAX;
	uint32_t x1988 = 0U;
	volatile int32_t t67 = -54932;

	t67 = ((x1985<=(x1986+x1987))>>x1988);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x2013 = 461051;
	volatile int32_t x2014 = -1;
	int32_t x2015 = 6;
	int32_t t68 = 1649;

	t68 = ((x2013<=(x2014+x2015))>>x2016);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2053 = UINT8_MAX;
	volatile int16_t x2054 = INT16_MIN;
	volatile int16_t x2055 = -1;
	volatile int32_t t69 = 818663;

	t69 = ((x2053<=(x2054+x2055))>>x2056);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2097 = 7U;
	int32_t x2098 = -1;
	uint8_t x2099 = 0U;
	uint32_t x2100 = 0U;
	int32_t t70 = 14;

	t70 = ((x2097<=(x2098+x2099))>>x2100);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x2133 = 317937U;
	static uint64_t x2134 = 232073885749312LLU;
	int8_t x2135 = INT8_MIN;
	static volatile uint8_t x2136 = 14U;
	static int32_t t71 = 7;

	t71 = ((x2133<=(x2134+x2135))>>x2136);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2169 = INT8_MIN;
	int64_t x2170 = INT64_MAX;
	uint64_t x2171 = UINT64_MAX;
	volatile uint8_t x2172 = 1U;
	int32_t t72 = -7841;

	t72 = ((x2169<=(x2170+x2171))>>x2172);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x2205 = 7LL;
	int16_t x2206 = INT16_MAX;
	int32_t x2207 = 1254;
	uint16_t x2208 = 1U;
	static volatile int32_t t73 = -1;

	t73 = ((x2205<=(x2206+x2207))>>x2208);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x2209 = 84U;
	int32_t x2210 = -40335767;
	int8_t x2211 = -1;

	t74 = ((x2209<=(x2210+x2211))>>x2212);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x2214 = 0U;
	uint8_t x2215 = 31U;
	uint8_t x2216 = 26U;
	volatile int32_t t75 = -242424;

	t75 = ((x2213<=(x2214+x2215))>>x2216);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x2309 = INT64_MAX;
	int32_t x2310 = -397;
	int8_t x2311 = -1;
	uint8_t x2312 = 5U;

	t76 = ((x2309<=(x2310+x2311))>>x2312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2313 = -1;
	int8_t x2314 = INT8_MIN;
	static volatile int16_t x2315 = INT16_MIN;
	int16_t x2316 = 18;
	volatile int32_t t77 = 39527;

	t77 = ((x2313<=(x2314+x2315))>>x2316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2321 = INT8_MIN;
	volatile int8_t x2322 = INT8_MAX;
	uint64_t x2323 = 425047831960385LLU;
	uint32_t x2324 = 0U;
	volatile int32_t t78 = 145;

	t78 = ((x2321<=(x2322+x2323))>>x2324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x2381 = -1;
	static volatile uint16_t x2382 = 489U;
	uint8_t x2384 = 0U;
	volatile int32_t t79 = 68328;

	t79 = ((x2381<=(x2382+x2383))>>x2384);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2425 = INT16_MIN;
	int16_t x2426 = 0;
	volatile uint8_t x2427 = 47U;
	uint16_t x2428 = 31U;
	volatile int32_t t80 = 6209;

	t80 = ((x2425<=(x2426+x2427))>>x2428);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x2449 = 1U;
	uint8_t x2451 = 48U;
	static volatile int32_t t81 = -3650;

	t81 = ((x2449<=(x2450+x2451))>>x2452);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2515 = -5;
	volatile uint16_t x2516 = 0U;
	volatile int32_t t82 = -970181779;

	t82 = ((x2513<=(x2514+x2515))>>x2516);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2538 = -1LL;
	static uint8_t x2540 = 1U;
	volatile int32_t t83 = 516;

	t83 = ((x2537<=(x2538+x2539))>>x2540);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x2593 = 1U;
	volatile int32_t t84 = -57506033;

	t84 = ((x2593<=(x2594+x2595))>>x2596);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2601 = 0U;
	int16_t x2602 = INT16_MIN;
	static volatile uint8_t x2603 = 92U;
	uint16_t x2604 = 5U;

	t85 = ((x2601<=(x2602+x2603))>>x2604);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x2605 = UINT16_MAX;
	int8_t x2606 = INT8_MIN;
	volatile uint32_t x2607 = 112089U;
	volatile int32_t t86 = 6460;

	t86 = ((x2605<=(x2606+x2607))>>x2608);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2609 = INT16_MIN;
	static int64_t x2610 = -101LL;
	int16_t x2611 = -69;
	volatile uint64_t x2612 = 23LLU;
	volatile int32_t t87 = -26637;

	t87 = ((x2609<=(x2610+x2611))>>x2612);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x2717 = UINT32_MAX;
	static int8_t x2718 = INT8_MIN;
	int64_t x2719 = INT64_MAX;
	int32_t t88 = 55;

	t88 = ((x2717<=(x2718+x2719))>>x2720);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2761 = INT32_MAX;
	uint64_t x2762 = 786688347009636483LLU;
	uint8_t x2764 = 1U;
	volatile int32_t t89 = -19;

	t89 = ((x2761<=(x2762+x2763))>>x2764);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2793 = 106955854272LLU;
	static uint16_t x2794 = 5685U;
	volatile uint16_t x2795 = 2179U;
	volatile uint8_t x2796 = 17U;

	t90 = ((x2793<=(x2794+x2795))>>x2796);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2853 = -12943;
	int16_t x2854 = INT16_MIN;
	volatile int16_t x2855 = INT16_MAX;
	int16_t x2856 = 0;
	static int32_t t91 = -208481942;

	t91 = ((x2853<=(x2854+x2855))>>x2856);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x2913 = 73679015284402743LLU;
	int16_t x2914 = -1;
	uint64_t x2916 = 26LLU;
	int32_t t92 = 285037393;

	t92 = ((x2913<=(x2914+x2915))>>x2916);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x2933 = -120916020LL;
	uint64_t x2934 = UINT64_MAX;
	uint64_t x2936 = 23LLU;
	volatile int32_t t93 = 104;

	t93 = ((x2933<=(x2934+x2935))>>x2936);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2937 = -1;
	int16_t x2939 = -161;
	uint8_t x2940 = 1U;
	static int32_t t94 = 30954701;

	t94 = ((x2937<=(x2938+x2939))>>x2940);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x2985 = -1;
	volatile uint32_t x2986 = UINT32_MAX;
	static int8_t x2987 = -1;
	int16_t x2988 = 6;

	t95 = ((x2985<=(x2986+x2987))>>x2988);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x3045 = UINT8_MAX;
	static int64_t x3046 = -128LL;
	volatile int16_t x3047 = INT16_MIN;
	int32_t t96 = 2147308;

	t96 = ((x3045<=(x3046+x3047))>>x3048);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3075 = 749U;
	static int8_t x3076 = 9;

	t97 = ((x3073<=(x3074+x3075))>>x3076);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3165 = -1;
	uint16_t x3166 = 60U;
	uint32_t x3167 = 257799069U;
	int32_t x3168 = 1;

	t98 = ((x3165<=(x3166+x3167))>>x3168);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3259 = INT16_MAX;
	int16_t x3260 = 4;

	t99 = ((x3257<=(x3258+x3259))>>x3260);

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

