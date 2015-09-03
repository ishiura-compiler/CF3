#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 18U;
volatile int32_t x4 = INT32_MIN;
uint32_t t0 = 7U;
uint8_t x12 = 13U;
int8_t x65 = -1;
uint16_t x100 = 52U;
int64_t x127 = 0LL;
static volatile int32_t t5 = 13556;
uint16_t x151 = 6U;
uint16_t x222 = 1000U;
int8_t x235 = 0;
static int64_t x353 = 145146LL;
uint8_t x355 = 58U;
uint16_t x358 = 5954U;
volatile int16_t x359 = 1;
static uint16_t x375 = 27U;
uint64_t x449 = 4349LLU;
static int16_t x474 = -1;
volatile int8_t x566 = -1;
volatile uint32_t x598 = UINT32_MAX;
int16_t x656 = INT16_MIN;
volatile int64_t t24 = -987466067951LL;
volatile uint64_t t25 = 855358LLU;
static int8_t x804 = INT8_MIN;
static uint8_t x879 = 3U;
static int8_t x1024 = INT8_MIN;
uint8_t x1099 = 15U;
volatile int32_t x1107 = 3;
volatile uint16_t x1243 = 16U;
uint64_t t37 = 6034197909LLU;
int64_t x1275 = 0LL;
int32_t x1313 = 6;
static volatile uint16_t x1316 = 1U;
volatile int32_t t39 = 1013492340;
uint32_t x1357 = UINT32_MAX;
static volatile uint64_t t40 = 83033348730LLU;
static volatile uint16_t x1401 = UINT16_MAX;
uint64_t t42 = 269246758839588LLU;
int32_t x1442 = -1;
int32_t x1443 = 7;
int16_t x1484 = INT16_MIN;
static volatile int64_t t44 = 8LL;
volatile uint32_t x1770 = 42095849U;
int8_t x1780 = 0;
static int32_t x1784 = INT32_MIN;
int32_t x1846 = -1;
uint8_t x1847 = 1U;
volatile int32_t x1848 = -1;
uint32_t x2012 = UINT32_MAX;
volatile int8_t x2149 = INT8_MIN;
uint8_t x2151 = 3U;
uint64_t t57 = 15723468298LLU;
uint16_t x2260 = UINT16_MAX;
int64_t x2272 = 258502LL;
int8_t x2330 = INT8_MAX;
uint8_t x2385 = 3U;
int64_t x2456 = -1LL;
uint32_t x2473 = 2613986U;
int64_t x2474 = 2075305090LL;
volatile int32_t t64 = -179;
int32_t t65 = -2381;
static uint16_t x2567 = 47U;
int64_t x2654 = -604435363447705052LL;
int32_t x2719 = 1;
volatile uint8_t x2745 = 0U;
int16_t x2746 = INT16_MAX;
static uint8_t x2747 = 9U;
uint8_t x2865 = 0U;
static int32_t x2964 = 22448664;
volatile int32_t t75 = -351;
int8_t x2981 = INT8_MIN;
int32_t x3022 = INT32_MAX;
uint8_t x3023 = 2U;
static int8_t x3024 = 1;
uint64_t t79 = UINT64_MAX;
uint64_t t80 = 244830354379029LLU;
volatile int8_t x3392 = INT8_MIN;
int64_t t82 = -1244178793994798212LL;
static uint16_t x3402 = UINT16_MAX;
static int16_t x3420 = -1019;
static uint64_t t84 = 1633172501365699LLU;
static volatile uint64_t x3458 = 60275520568492LLU;
uint8_t x3459 = 42U;
int32_t t87 = -1562820;
static uint16_t x3535 = 1U;
int32_t x3546 = 165726219;
int8_t x3613 = -16;
int32_t t90 = -10;
int64_t t93 = -3875LL;
static int16_t x3739 = 0;
int64_t x3761 = INT64_MIN;
uint32_t x3763 = 0U;
int8_t x3926 = -1;
int32_t x3928 = 147835;


void f0(void) {
	uint32_t x1 = 2284U;
	volatile uint32_t x2 = 63U;

	t0 = (((x1&x2)<<x3)+x4);

	if (t0 != 2159017984U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MIN;
	int64_t x10 = 26263917LL;
	int32_t x11 = 2;
	int64_t t1 = -501601501LL;

	t1 = (((x9&x10)<<x11)+x12);

	if (t1 != 13LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x45 = 11;
	int32_t x46 = -40077;
	int32_t x47 = 1;
	volatile uint32_t x48 = 2U;
	volatile uint32_t t2 = 0U;

	t2 = (((x45&x46)<<x47)+x48);

	if (t2 != 8U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x66 = 3;
	int8_t x67 = 5;
	static volatile uint8_t x68 = 1U;
	volatile int32_t t3 = -142894948;

	t3 = (((x65&x66)<<x67)+x68);

	if (t3 != 97) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x97 = 3760080LLU;
	int8_t x98 = -1;
	uint32_t x99 = 13U;
	uint64_t t4 = 1LLU;

	t4 = (((x97&x98)<<x99)+x100);

	if (t4 != 30802575412LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x125 = UINT16_MAX;
	static int32_t x126 = INT32_MAX;
	volatile int32_t x128 = INT32_MIN;

	t5 = (((x125&x126)<<x127)+x128);

	if (t5 != -2147418113) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x149 = 41U;
	static int16_t x150 = -199;
	int16_t x152 = -7;
	volatile int32_t t6 = -5569924;

	t6 = (((x149&x150)<<x151)+x152);

	if (t6 != 2617) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x213 = 1;
	int64_t x214 = INT64_MAX;
	static volatile uint8_t x215 = 0U;
	uint32_t x216 = 540835U;
	int64_t t7 = 461540LL;

	t7 = (((x213&x214)<<x215)+x216);

	if (t7 != 540836LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x221 = INT32_MIN;
	uint8_t x223 = 2U;
	int64_t x224 = -1LL;
	int64_t t8 = 1555513672037592LL;

	t8 = (((x221&x222)<<x223)+x224);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x233 = UINT16_MAX;
	volatile uint32_t x234 = 11797U;
	static int64_t x236 = 964246326198LL;
	volatile int64_t t9 = 16LL;

	t9 = (((x233&x234)<<x235)+x236);

	if (t9 != 964246337995LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x354 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	static volatile int64_t t10 = 3346308239LL;

	t10 = (((x353&x354)<<x355)+x356);

	if (t10 != -2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x357 = INT32_MIN;
	static int16_t x360 = 100;
	volatile int32_t t11 = -12;

	t11 = (((x357&x358)<<x359)+x360);

	if (t11 != 100) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x361 = UINT16_MAX;
	int8_t x362 = INT8_MIN;
	volatile uint32_t x363 = 0U;
	static volatile uint8_t x364 = 2U;
	int32_t t12 = 16644111;

	t12 = (((x361&x362)<<x363)+x364);

	if (t12 != 65410) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x365 = UINT8_MAX;
	int16_t x366 = 1706;
	static uint8_t x367 = 10U;
	int8_t x368 = INT8_MIN;
	volatile int32_t t13 = -95;

	t13 = (((x365&x366)<<x367)+x368);

	if (t13 != 173952) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x373 = 126U;
	uint8_t x374 = 4U;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t14 = -192490;

	t14 = (((x373&x374)<<x375)+x376);

	if (t14 != 536871167) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x381 = UINT64_MAX;
	volatile uint16_t x382 = UINT16_MAX;
	uint16_t x383 = 21U;
	int64_t x384 = -22672670463LL;
	uint64_t t15 = 87440111272882LLU;

	t15 = (((x381&x382)<<x383)+x384);

	if (t15 != 114764185857LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x397 = INT16_MAX;
	static uint16_t x398 = UINT16_MAX;
	volatile int16_t x399 = 2;
	int16_t x400 = -1;
	static int32_t t16 = -935;

	t16 = (((x397&x398)<<x399)+x400);

	if (t16 != 131067) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x450 = INT16_MIN;
	int32_t x451 = 25;
	uint8_t x452 = UINT8_MAX;
	uint64_t t17 = 5690879581925LLU;

	t17 = (((x449&x450)<<x451)+x452);

	if (t17 != 255LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x473 = 3U;
	int8_t x475 = 3;
	int32_t x476 = -1;
	int32_t t18 = -1003233;

	t18 = (((x473&x474)<<x475)+x476);

	if (t18 != 23) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x557 = INT64_MIN;
	int16_t x558 = INT16_MAX;
	static volatile uint8_t x559 = 1U;
	static int32_t x560 = -35290557;
	volatile int64_t t19 = 12615LL;

	t19 = (((x557&x558)<<x559)+x560);

	if (t19 != -35290557LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x565 = 0LLU;
	uint16_t x567 = 14U;
	static int8_t x568 = INT8_MIN;
	uint64_t t20 = 34708619993397887LLU;

	t20 = (((x565&x566)<<x567)+x568);

	if (t20 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x581 = 167;
	int32_t x582 = 112531070;
	uint16_t x583 = 1U;
	static int16_t x584 = 2628;
	volatile int32_t t21 = 490991;

	t21 = (((x581&x582)<<x583)+x584);

	if (t21 != 2704) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x597 = 6686LL;
	volatile int8_t x599 = 0;
	uint64_t x600 = UINT64_MAX;
	uint64_t t22 = 970844595667697LLU;

	t22 = (((x597&x598)<<x599)+x600);

	if (t22 != 6685LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x653 = -1LL;
	int32_t x654 = 390511;
	int16_t x655 = 1;
	int64_t t23 = -2911201LL;

	t23 = (((x653&x654)<<x655)+x656);

	if (t23 != 748254LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x717 = -258651157LL;
	int8_t x718 = 38;
	int32_t x719 = 0;
	static int8_t x720 = INT8_MAX;

	t24 = (((x717&x718)<<x719)+x720);

	if (t24 != 161LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x729 = INT32_MAX;
	uint64_t x730 = UINT64_MAX;
	uint64_t x731 = 1LLU;
	int16_t x732 = INT16_MIN;

	t25 = (((x729&x730)<<x731)+x732);

	if (t25 != 4294934526LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x801 = 155;
	volatile int8_t x802 = INT8_MIN;
	int8_t x803 = 6;
	volatile int32_t t26 = 319;

	t26 = (((x801&x802)<<x803)+x804);

	if (t26 != 8064) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x865 = INT32_MIN;
	static volatile int64_t x866 = 37384LL;
	static int16_t x867 = 14;
	int8_t x868 = 1;
	int64_t t27 = 2161979082158856LL;

	t27 = (((x865&x866)<<x867)+x868);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x877 = INT8_MIN;
	static uint8_t x878 = 19U;
	int16_t x880 = -804;
	static volatile int32_t t28 = -29;

	t28 = (((x877&x878)<<x879)+x880);

	if (t28 != -804) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1021 = 1U;
	static uint8_t x1022 = 0U;
	int8_t x1023 = 18;
	int32_t t29 = 228970;

	t29 = (((x1021&x1022)<<x1023)+x1024);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1093 = 180U;
	int8_t x1094 = INT8_MIN;
	int16_t x1095 = 1;
	uint64_t x1096 = UINT64_MAX;
	volatile uint64_t t30 = 752206786LLU;

	t30 = (((x1093&x1094)<<x1095)+x1096);

	if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1097 = 95U;
	uint32_t x1098 = 28153U;
	int8_t x1100 = INT8_MAX;
	volatile uint32_t t31 = 3U;

	t31 = (((x1097&x1098)<<x1099)+x1100);

	if (t31 != 2916479U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1105 = -26485674;
	uint32_t x1106 = UINT32_MAX;
	volatile uint8_t x1108 = 12U;
	uint32_t t32 = 63539825U;

	t32 = (((x1105&x1106)<<x1107)+x1108);

	if (t32 != 4083081916U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1121 = INT16_MIN;
	int8_t x1122 = 0;
	int8_t x1123 = 0;
	int64_t x1124 = -1LL;
	int64_t t33 = -2971LL;

	t33 = (((x1121&x1122)<<x1123)+x1124);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x1209 = UINT64_MAX;
	static int64_t x1210 = INT64_MIN;
	int32_t x1211 = 19;
	volatile int64_t x1212 = INT64_MIN;
	volatile uint64_t t34 = 31134LLU;

	t34 = (((x1209&x1210)<<x1211)+x1212);

	if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1213 = -102;
	uint32_t x1214 = 551980U;
	uint16_t x1215 = 3U;
	int64_t x1216 = -1LL;
	static volatile int64_t t35 = 50LL;

	t35 = (((x1213&x1214)<<x1215)+x1216);

	if (t35 != 4415551LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1241 = INT16_MAX;
	int16_t x1242 = INT16_MIN;
	int16_t x1244 = INT16_MIN;
	volatile int32_t t36 = -1;

	t36 = (((x1241&x1242)<<x1243)+x1244);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1269 = -1;
	uint64_t x1270 = 138961351018147201LLU;
	volatile uint16_t x1271 = 0U;
	uint64_t x1272 = UINT64_MAX;

	t37 = (((x1269&x1270)<<x1271)+x1272);

	if (t37 != 138961351018147200LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1273 = 8763U;
	int64_t x1274 = INT64_MIN;
	int32_t x1276 = -521;
	int64_t t38 = -2918075LL;

	t38 = (((x1273&x1274)<<x1275)+x1276);

	if (t38 != -521LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1314 = INT8_MIN;
	int8_t x1315 = 14;

	t39 = (((x1313&x1314)<<x1315)+x1316);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1358 = INT16_MAX;
	uint8_t x1359 = 12U;
	static volatile uint64_t x1360 = 2017999709335LLU;

	t40 = (((x1357&x1358)<<x1359)+x1360);

	if (t40 != 2018133922967LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1361 = 0U;
	volatile int64_t x1362 = -1LL;
	uint64_t x1363 = 34LLU;
	int8_t x1364 = INT8_MIN;
	volatile int64_t t41 = -20LL;

	t41 = (((x1361&x1362)<<x1363)+x1364);

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1402 = 31U;
	uint8_t x1403 = 0U;
	volatile uint64_t x1404 = 25649LLU;

	t42 = (((x1401&x1402)<<x1403)+x1404);

	if (t42 != 25680LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1441 = INT8_MAX;
	int8_t x1444 = -5;
	int32_t t43 = -652578232;

	t43 = (((x1441&x1442)<<x1443)+x1444);

	if (t43 != 16251) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1481 = INT64_MIN;
	int64_t x1482 = INT64_MAX;
	uint64_t x1483 = 0LLU;

	t44 = (((x1481&x1482)<<x1483)+x1484);

	if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1493 = 13;
	static int16_t x1494 = INT16_MIN;
	uint64_t x1495 = 10LLU;
	static uint16_t x1496 = 14U;
	volatile int32_t t45 = -2672;

	t45 = (((x1493&x1494)<<x1495)+x1496);

	if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1509 = INT8_MIN;
	uint8_t x1510 = 5U;
	uint16_t x1511 = 12U;
	int8_t x1512 = 31;
	volatile int32_t t46 = 243207;

	t46 = (((x1509&x1510)<<x1511)+x1512);

	if (t46 != 31) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1617 = 94U;
	int16_t x1618 = 58;
	uint8_t x1619 = 3U;
	volatile int16_t x1620 = -1;
	volatile int32_t t47 = 0;

	t47 = (((x1617&x1618)<<x1619)+x1620);

	if (t47 != 207) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1717 = 15899969733982LL;
	uint64_t x1718 = 677234130840786LLU;
	int8_t x1719 = 1;
	static int32_t x1720 = -1022607031;
	volatile uint64_t t48 = 66LLU;

	t48 = (((x1717&x1718)<<x1719)+x1720);

	if (t48 != 14155191208429LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x1749 = UINT8_MAX;
	uint32_t x1750 = 27638476U;
	uint16_t x1751 = 3U;
	static volatile uint64_t x1752 = 1280095360383640680LLU;
	volatile uint64_t t49 = 1710LLU;

	t49 = (((x1749&x1750)<<x1751)+x1752);

	if (t49 != 1280095360383642312LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1769 = INT16_MIN;
	volatile uint8_t x1771 = 0U;
	int32_t x1772 = INT32_MAX;
	volatile uint32_t t50 = 1936U;

	t50 = (((x1769&x1770)<<x1771)+x1772);

	if (t50 != 2189557759U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1777 = 38459710LLU;
	uint32_t x1778 = UINT32_MAX;
	int8_t x1779 = 1;
	volatile uint64_t t51 = 3573009479LLU;

	t51 = (((x1777&x1778)<<x1779)+x1780);

	if (t51 != 76919420LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1781 = INT8_MIN;
	volatile uint32_t x1782 = 8613U;
	static uint8_t x1783 = 1U;
	uint32_t t52 = 10U;

	t52 = (((x1781&x1782)<<x1783)+x1784);

	if (t52 != 2147500800U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1845 = 5629355817800266655LLU;
	uint64_t t53 = 15LLU;

	t53 = (((x1845&x1846)<<x1847)+x1848);

	if (t53 != 11258711635600533309LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1869 = 2U;
	static volatile int16_t x1870 = 665;
	uint8_t x1871 = 5U;
	int64_t x1872 = -29142388965433LL;
	static volatile int64_t t54 = -3404577362031511LL;

	t54 = (((x1869&x1870)<<x1871)+x1872);

	if (t54 != -29142388965433LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2009 = INT16_MIN;
	volatile int8_t x2010 = 0;
	uint32_t x2011 = 5U;
	uint32_t t55 = UINT32_MAX;

	t55 = (((x2009&x2010)<<x2011)+x2012);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x2057 = INT32_MIN;
	uint64_t x2058 = 71071287006932854LLU;
	static volatile int8_t x2059 = 44;
	static int64_t x2060 = 1444LL;
	volatile uint64_t t56 = 30070LLU;

	t56 = (((x2057&x2058)<<x2059)+x2060);

	if (t56 != 1444LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x2150 = UINT64_MAX;
	int8_t x2152 = INT8_MIN;

	t57 = (((x2149&x2150)<<x2151)+x2152);

	if (t57 != 18446744073709550464LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2257 = 209861LL;
	uint16_t x2258 = 14214U;
	volatile uint32_t x2259 = 1U;
	int64_t t58 = 77475736999LL;

	t58 = (((x2257&x2258)<<x2259)+x2260);

	if (t58 != 91911LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x2269 = 7762U;
	uint8_t x2270 = UINT8_MAX;
	uint8_t x2271 = 0U;
	volatile int64_t t59 = -387096LL;

	t59 = (((x2269&x2270)<<x2271)+x2272);

	if (t59 != 258584LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2329 = -1;
	uint8_t x2331 = 19U;
	volatile int64_t x2332 = -1LL;
	int64_t t60 = 390229679445874426LL;

	t60 = (((x2329&x2330)<<x2331)+x2332);

	if (t60 != 66584575LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x2386 = 22254;
	volatile int8_t x2387 = 4;
	int32_t x2388 = INT32_MIN;
	static volatile int32_t t61 = -182896730;

	t61 = (((x2385&x2386)<<x2387)+x2388);

	if (t61 != -2147483616) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2453 = 5U;
	uint8_t x2454 = UINT8_MAX;
	int32_t x2455 = 0;
	int64_t t62 = -5621LL;

	t62 = (((x2453&x2454)<<x2455)+x2456);

	if (t62 != 4LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2475 = 1;
	uint8_t x2476 = 20U;
	volatile int64_t t63 = -1201167LL;

	t63 = (((x2473&x2474)<<x2475)+x2476);

	if (t63 != 4538648LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x2501 = 19345U;
	static int8_t x2502 = INT8_MAX;
	uint8_t x2503 = 2U;
	int16_t x2504 = INT16_MIN;

	t64 = (((x2501&x2502)<<x2503)+x2504);

	if (t64 != -32700) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2505 = 0U;
	int16_t x2506 = -1;
	uint32_t x2507 = 1U;
	int16_t x2508 = 23;

	t65 = (((x2505&x2506)<<x2507)+x2508);

	if (t65 != 23) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2565 = INT64_MIN;
	uint16_t x2566 = 830U;
	static volatile int32_t x2568 = 43706589;
	static volatile int64_t t66 = 258LL;

	t66 = (((x2565&x2566)<<x2567)+x2568);

	if (t66 != 43706589LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x2653 = 2572195778418LL;
	static uint8_t x2655 = 3U;
	int64_t x2656 = 30LL;
	volatile int64_t t67 = 2347LL;

	t67 = (((x2653&x2654)<<x2655)+x2656);

	if (t67 != 695785099550LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2717 = INT16_MAX;
	int32_t x2718 = -3920;
	uint64_t x2720 = 106LLU;
	volatile uint64_t t68 = 2LLU;

	t68 = (((x2717&x2718)<<x2719)+x2720);

	if (t68 != 57802LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2748 = INT16_MIN;
	static volatile int32_t t69 = 267567372;

	t69 = (((x2745&x2746)<<x2747)+x2748);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2833 = UINT8_MAX;
	int8_t x2834 = -1;
	int32_t x2835 = 0;
	static int16_t x2836 = INT16_MIN;
	volatile int32_t t70 = -752955421;

	t70 = (((x2833&x2834)<<x2835)+x2836);

	if (t70 != -32513) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2861 = 13030U;
	volatile int32_t x2862 = -1;
	uint16_t x2863 = 0U;
	static int64_t x2864 = -1LL;
	int64_t t71 = -3358753041LL;

	t71 = (((x2861&x2862)<<x2863)+x2864);

	if (t71 != 13029LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x2866 = -11874;
	volatile uint8_t x2867 = 19U;
	int64_t x2868 = INT64_MAX;
	int64_t t72 = INT64_MAX;

	t72 = (((x2865&x2866)<<x2867)+x2868);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x2873 = UINT64_MAX;
	static int32_t x2874 = -1;
	volatile uint8_t x2875 = 2U;
	uint16_t x2876 = 48U;
	volatile uint64_t t73 = 868508692LLU;

	t73 = (((x2873&x2874)<<x2875)+x2876);

	if (t73 != 44LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2961 = 4111742164588LL;
	uint8_t x2962 = 2U;
	uint8_t x2963 = 1U;
	int64_t t74 = 103209955014LL;

	t74 = (((x2961&x2962)<<x2963)+x2964);

	if (t74 != 22448664LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2977 = UINT8_MAX;
	volatile uint16_t x2978 = 51U;
	uint8_t x2979 = 0U;
	int8_t x2980 = 10;

	t75 = (((x2977&x2978)<<x2979)+x2980);

	if (t75 != 61) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2982 = 11986;
	uint16_t x2983 = 16U;
	volatile uint16_t x2984 = UINT16_MAX;
	int32_t t76 = -1314563;

	t76 = (((x2981&x2982)<<x2983)+x2984);

	if (t76 != 780206079) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3021 = UINT64_MAX;
	uint64_t t77 = 15344108646857LLU;

	t77 = (((x3021&x3022)<<x3023)+x3024);

	if (t77 != 8589934589LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x3057 = 17LLU;
	uint64_t x3058 = 11921429LLU;
	uint8_t x3059 = 2U;
	int32_t x3060 = -1;
	uint64_t t78 = 0LLU;

	t78 = (((x3057&x3058)<<x3059)+x3060);

	if (t78 != 67LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3097 = INT64_MIN;
	static uint64_t x3098 = 31029566129809LLU;
	static uint8_t x3099 = 3U;
	int16_t x3100 = -1;

	t79 = (((x3097&x3098)<<x3099)+x3100);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3293 = UINT8_MAX;
	volatile uint64_t x3294 = UINT64_MAX;
	volatile uint16_t x3295 = 0U;
	uint64_t x3296 = 317LLU;

	t80 = (((x3293&x3294)<<x3295)+x3296);

	if (t80 != 572LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x3349 = 71659684U;
	static int16_t x3350 = 1;
	int8_t x3351 = 2;
	int32_t x3352 = INT32_MIN;
	volatile uint32_t t81 = 1843182109U;

	t81 = (((x3349&x3350)<<x3351)+x3352);

	if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3389 = -180920LL;
	static int32_t x3390 = 2;
	int16_t x3391 = 2;

	t82 = (((x3389&x3390)<<x3391)+x3392);

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x3401 = INT16_MIN;
	uint64_t x3403 = 1LLU;
	volatile int64_t x3404 = INT64_MIN;
	static int64_t t83 = -674LL;

	t83 = (((x3401&x3402)<<x3403)+x3404);

	if (t83 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3417 = INT8_MAX;
	volatile uint64_t x3418 = 359684LLU;
	static uint8_t x3419 = 0U;

	t84 = (((x3417&x3418)<<x3419)+x3420);

	if (t84 != 18446744073709550601LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3457 = UINT8_MAX;
	uint16_t x3460 = 2512U;
	static volatile uint64_t t85 = 5204704LLU;

	t85 = (((x3457&x3458)<<x3459)+x3460);

	if (t85 != 756463999912400LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3493 = UINT64_MAX;
	uint16_t x3494 = UINT16_MAX;
	uint16_t x3495 = 4U;
	uint8_t x3496 = 34U;
	volatile uint64_t t86 = 957370948LLU;

	t86 = (((x3493&x3494)<<x3495)+x3496);

	if (t86 != 1048594LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3525 = INT8_MAX;
	volatile int8_t x3526 = -8;
	int32_t x3527 = 7;
	int16_t x3528 = 436;

	t87 = (((x3525&x3526)<<x3527)+x3528);

	if (t87 != 15796) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3533 = UINT64_MAX;
	static volatile uint8_t x3534 = 15U;
	int64_t x3536 = INT64_MAX;
	uint64_t t88 = 60LLU;

	t88 = (((x3533&x3534)<<x3535)+x3536);

	if (t88 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x3545 = 180LLU;
	uint8_t x3547 = 0U;
	static volatile int32_t x3548 = INT32_MIN;
	uint64_t t89 = 2650116LLU;

	t89 = (((x3545&x3546)<<x3547)+x3548);

	if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x3614 = 6097U;
	int16_t x3615 = 13;
	int32_t x3616 = -538710729;

	t90 = (((x3613&x3614)<<x3615)+x3616);

	if (t90 != -488772297) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3625 = INT32_MIN;
	uint8_t x3626 = 0U;
	volatile uint32_t x3627 = 1U;
	uint8_t x3628 = UINT8_MAX;
	static volatile int32_t t91 = 1;

	t91 = (((x3625&x3626)<<x3627)+x3628);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x3705 = UINT64_MAX;
	static uint64_t x3706 = 14565224LLU;
	volatile int8_t x3707 = 29;
	int16_t x3708 = INT16_MIN;
	volatile uint64_t t92 = 3998940948168LLU;

	t92 = (((x3705&x3706)<<x3707)+x3708);

	if (t92 != 7819645092331520LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3729 = UINT8_MAX;
	int64_t x3730 = INT64_MAX;
	volatile int16_t x3731 = 24;
	int64_t x3732 = -1LL;

	t93 = (((x3729&x3730)<<x3731)+x3732);

	if (t93 != 4278190079LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x3737 = 3040U;
	static uint16_t x3738 = 2U;
	int32_t x3740 = -1;
	static volatile int32_t t94 = 43976529;

	t94 = (((x3737&x3738)<<x3739)+x3740);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3762 = 520270609;
	uint16_t x3764 = 31U;
	static int64_t t95 = -3377905748LL;

	t95 = (((x3761&x3762)<<x3763)+x3764);

	if (t95 != 31LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x3781 = INT16_MAX;
	uint32_t x3782 = UINT32_MAX;
	uint64_t x3783 = 2LLU;
	volatile uint8_t x3784 = 1U;
	volatile uint32_t t96 = 35931U;

	t96 = (((x3781&x3782)<<x3783)+x3784);

	if (t96 != 131069U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3925 = 73757U;
	uint16_t x3927 = 1U;
	uint32_t t97 = 56192U;

	t97 = (((x3925&x3926)<<x3927)+x3928);

	if (t97 != 295349U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3945 = UINT8_MAX;
	int64_t x3946 = -1LL;
	volatile int16_t x3947 = 16;
	uint8_t x3948 = 7U;
	int64_t t98 = 0LL;

	t98 = (((x3945&x3946)<<x3947)+x3948);

	if (t98 != 16711687LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3989 = INT32_MIN;
	uint16_t x3990 = UINT16_MAX;
	int16_t x3991 = 1;
	int8_t x3992 = INT8_MIN;
	volatile int32_t t99 = 1906;

	t99 = (((x3989&x3990)<<x3991)+x3992);

	if (t99 != -128) { NG(); } else { ; }
	
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

