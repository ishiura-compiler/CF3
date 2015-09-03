#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 229810;
static volatile int32_t t1 = 8136;
volatile uint32_t x101 = 40664693U;
int16_t x137 = -1;
static int32_t x140 = INT32_MIN;
uint8_t x211 = 7U;
int8_t x245 = INT8_MAX;
volatile int32_t t5 = -3221;
static uint64_t x306 = UINT64_MAX;
uint8_t x324 = 5U;
static int32_t t8 = 192;
uint16_t x375 = 1U;
int64_t x422 = 1359100LL;
static int8_t x424 = INT8_MAX;
int8_t x494 = INT8_MAX;
static uint64_t x496 = 39753838652522LLU;
uint64_t t13 = 6LLU;
int8_t x557 = -2;
int64_t x560 = INT64_MIN;
static volatile int32_t t17 = 558979;
volatile int32_t t18 = 4762571;
uint64_t x804 = 2LLU;
uint8_t x811 = 3U;
static volatile int32_t t20 = -108754;
volatile uint16_t x914 = 401U;
static int16_t x937 = 0;
uint16_t x950 = 1U;
static int64_t x981 = 4076540LL;
int32_t x983 = 3;
uint16_t x1039 = 3U;
uint32_t x1052 = 384955654U;
uint64_t x1096 = 314833673LLU;
int16_t x1103 = 21;
uint32_t x1143 = 51U;
static int8_t x1145 = INT8_MAX;
uint64_t x1177 = 1532606LLU;
volatile int32_t x1313 = -23214337;
int8_t x1315 = 1;
uint64_t t33 = 10058962399LLU;
uint32_t x1381 = UINT32_MAX;
static uint16_t x1382 = UINT16_MAX;
volatile int64_t x1384 = INT64_MIN;
int16_t x1398 = 1;
uint8_t x1471 = 27U;
int64_t x1560 = -107855816612LL;
uint64_t x1660 = 3222LLU;
volatile uint8_t x1687 = 55U;
int8_t x1713 = -1;
static uint64_t x1785 = 26996000025946802LLU;
volatile uint32_t t43 = 0U;
int64_t x1888 = INT64_MAX;
volatile int16_t x1894 = 23;
int16_t x1917 = INT16_MIN;
uint64_t x1918 = 1097772LLU;
static volatile int32_t t46 = -388929467;
int64_t x1945 = -1LL;
static int16_t x1976 = 35;
int32_t t48 = -523933131;
int32_t x2441 = INT32_MIN;
static int16_t x2442 = INT16_MAX;
uint8_t x2462 = 24U;
static int8_t x2505 = 0;
uint8_t x2507 = 7U;
int32_t x2508 = INT32_MAX;
int8_t x2596 = INT8_MAX;
int32_t t54 = -149;
static volatile uint32_t x2614 = 1808U;
volatile int8_t x2671 = 5;
static uint64_t x2856 = UINT64_MAX;
volatile int64_t x2882 = INT64_MAX;
int8_t x2884 = INT8_MAX;
uint64_t x3042 = 2835886883905LLU;
int32_t x3101 = INT32_MIN;
int8_t x3104 = INT8_MIN;
volatile uint32_t x3223 = 0U;
static volatile int32_t t70 = -12;
uint8_t x3416 = 10U;
int32_t t71 = -273872;
uint8_t x3478 = 67U;
int64_t x3532 = -101236297LL;
int16_t x3541 = INT16_MAX;
int64_t x3542 = 0LL;
static int8_t x3569 = -35;
int16_t x3572 = -4073;
uint16_t x3636 = 1U;
int64_t x3678 = 6066LL;
int64_t t80 = 3575460343LL;
int8_t x3731 = 0;
int16_t x3828 = -1;
volatile uint8_t x3955 = 0U;
int8_t x3956 = 4;
static int64_t x4016 = INT64_MAX;
uint16_t x4052 = UINT16_MAX;
volatile uint32_t x4173 = 118U;
volatile int64_t t92 = -3452074915LL;
int32_t t94 = -259230;
volatile int64_t t95 = 3LL;
volatile int32_t t97 = 5935113;
int16_t x4361 = 3;


void f0(void) {
	int32_t x17 = 111;
	uint8_t x18 = 21U;
	uint64_t x19 = 1LLU;
	static int8_t x20 = INT8_MIN;

	t0 = ((x17<(x18>>x19))/x20);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x49 = 111;
	int8_t x50 = 0;
	volatile int8_t x51 = 11;
	int32_t x52 = INT32_MIN;

	t1 = ((x49<(x50>>x51))/x52);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x102 = UINT64_MAX;
	uint32_t x103 = 1U;
	static uint8_t x104 = UINT8_MAX;
	volatile int32_t t2 = -16651447;

	t2 = ((x101<(x102>>x103))/x104);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x138 = 7632910702298220336LLU;
	static int64_t x139 = 14LL;
	volatile int32_t t3 = -6;

	t3 = ((x137<(x138>>x139))/x140);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = 0;
	int32_t x212 = INT32_MIN;
	int32_t t4 = -3752;

	t4 = ((x209<(x210>>x211))/x212);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = 16;
	static volatile int16_t x248 = INT16_MIN;

	t5 = ((x245<(x246>>x247))/x248);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x305 = 0LL;
	uint8_t x307 = 28U;
	volatile uint8_t x308 = 8U;
	int32_t t6 = 88959699;

	t6 = ((x305<(x306>>x307))/x308);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x317 = INT8_MIN;
	uint64_t x318 = 409997820LLU;
	static uint32_t x319 = 0U;
	static int32_t x320 = INT32_MAX;
	volatile int32_t t7 = 2451864;

	t7 = ((x317<(x318>>x319))/x320);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MAX;
	volatile int8_t x323 = 1;

	t8 = ((x321<(x322>>x323))/x324);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x373 = 235603;
	volatile uint64_t x374 = 2766605257330258701LLU;
	volatile uint64_t x376 = 5619190876536LLU;
	static volatile uint64_t t9 = 40LLU;

	t9 = ((x373<(x374>>x375))/x376);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x389 = 28U;
	int16_t x390 = INT16_MAX;
	static uint8_t x391 = 8U;
	int8_t x392 = INT8_MAX;
	int32_t t10 = -9;

	t10 = ((x389<(x390>>x391))/x392);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x421 = INT32_MIN;
	static int8_t x423 = 6;
	int32_t t11 = 54;

	t11 = ((x421<(x422>>x423))/x424);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x449 = UINT32_MAX;
	volatile uint16_t x450 = UINT16_MAX;
	volatile int16_t x451 = 1;
	static int64_t x452 = INT64_MIN;
	int64_t t12 = -125389LL;

	t12 = ((x449<(x450>>x451))/x452);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x493 = -1LL;
	volatile uint8_t x495 = 0U;

	t13 = ((x493<(x494>>x495))/x496);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x533 = -2;
	volatile int64_t x534 = INT64_MAX;
	int8_t x535 = 0;
	volatile int32_t x536 = -1;
	int32_t t14 = -1128;

	t14 = ((x533<(x534>>x535))/x536);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x558 = UINT64_MAX;
	uint8_t x559 = 6U;
	volatile int64_t t15 = -716537LL;

	t15 = ((x557<(x558>>x559))/x560);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x645 = UINT32_MAX;
	uint16_t x646 = 7U;
	uint8_t x647 = 8U;
	uint16_t x648 = 9915U;
	int32_t t16 = -186502;

	t16 = ((x645<(x646>>x647))/x648);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x697 = 25U;
	int16_t x698 = 2143;
	uint32_t x699 = 0U;
	int8_t x700 = -49;

	t17 = ((x697<(x698>>x699))/x700);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x741 = -477;
	uint8_t x742 = UINT8_MAX;
	volatile uint8_t x743 = 13U;
	static int32_t x744 = INT32_MIN;

	t18 = ((x741<(x742>>x743))/x744);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x801 = INT16_MIN;
	volatile uint16_t x802 = 2U;
	uint16_t x803 = 3U;
	static uint64_t t19 = 16LLU;

	t19 = ((x801<(x802>>x803))/x804);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x809 = INT32_MAX;
	volatile int32_t x810 = 4188247;
	int8_t x812 = -1;

	t20 = ((x809<(x810>>x811))/x812);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x913 = INT16_MAX;
	volatile uint8_t x915 = 8U;
	uint32_t x916 = 7601U;
	volatile uint32_t t21 = 334734526U;

	t21 = ((x913<(x914>>x915))/x916);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x938 = 22;
	volatile uint8_t x939 = 6U;
	volatile int8_t x940 = 10;
	static volatile int32_t t22 = 428103661;

	t22 = ((x937<(x938>>x939))/x940);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x949 = UINT64_MAX;
	static int16_t x951 = 0;
	static uint16_t x952 = 9U;
	int32_t t23 = 40543;

	t23 = ((x949<(x950>>x951))/x952);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x982 = 54870106U;
	int8_t x984 = INT8_MAX;
	int32_t t24 = -20248328;

	t24 = ((x981<(x982>>x983))/x984);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1037 = -57;
	volatile int8_t x1038 = INT8_MAX;
	volatile int16_t x1040 = -1;
	int32_t t25 = -4915904;

	t25 = ((x1037<(x1038>>x1039))/x1040);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x1049 = -1;
	int32_t x1050 = INT32_MAX;
	static volatile uint8_t x1051 = 0U;
	volatile uint32_t t26 = 34531U;

	t26 = ((x1049<(x1050>>x1051))/x1052);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1093 = INT16_MIN;
	int8_t x1094 = 23;
	static int8_t x1095 = 1;
	static uint64_t t27 = 192793247LLU;

	t27 = ((x1093<(x1094>>x1095))/x1096);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1101 = INT16_MIN;
	uint64_t x1102 = UINT64_MAX;
	uint32_t x1104 = 30731255U;
	static volatile uint32_t t28 = 126U;

	t28 = ((x1101<(x1102>>x1103))/x1104);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1141 = -2;
	static int64_t x1142 = 110044049867116755LL;
	volatile int32_t x1144 = INT32_MAX;
	static volatile int32_t t29 = 1355684;

	t29 = ((x1141<(x1142>>x1143))/x1144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1146 = 48;
	static int16_t x1147 = 0;
	volatile int64_t x1148 = 131823129966366520LL;
	static int64_t t30 = -13955084249LL;

	t30 = ((x1145<(x1146>>x1147))/x1148);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1178 = UINT8_MAX;
	volatile int32_t x1179 = 16;
	uint16_t x1180 = UINT16_MAX;
	volatile int32_t t31 = 72;

	t31 = ((x1177<(x1178>>x1179))/x1180);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1261 = INT8_MAX;
	uint64_t x1262 = 7380574001606LLU;
	int8_t x1263 = 0;
	static int64_t x1264 = -1LL;
	int64_t t32 = 52679LL;

	t32 = ((x1261<(x1262>>x1263))/x1264);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1314 = UINT16_MAX;
	uint64_t x1316 = 102807LLU;

	t33 = ((x1313<(x1314>>x1315))/x1316);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1383 = 12U;
	volatile int64_t t34 = -286851020704189593LL;

	t34 = ((x1381<(x1382>>x1383))/x1384);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1397 = -18;
	uint64_t x1399 = 6LLU;
	uint64_t x1400 = 22237LLU;
	volatile uint64_t t35 = 61073534912346LLU;

	t35 = ((x1397<(x1398>>x1399))/x1400);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1469 = 40862641U;
	uint32_t x1470 = 1U;
	static int8_t x1472 = INT8_MIN;
	volatile int32_t t36 = -51399;

	t36 = ((x1469<(x1470>>x1471))/x1472);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1521 = 1LLU;
	int64_t x1522 = 1003244538360157388LL;
	volatile uint8_t x1523 = 50U;
	static int8_t x1524 = INT8_MIN;
	static int32_t t37 = -542;

	t37 = ((x1521<(x1522>>x1523))/x1524);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1557 = INT8_MIN;
	int32_t x1558 = INT32_MAX;
	static int8_t x1559 = 3;
	int64_t t38 = 118848LL;

	t38 = ((x1557<(x1558>>x1559))/x1560);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1657 = -1LL;
	int32_t x1658 = INT32_MAX;
	static uint16_t x1659 = 7U;
	uint64_t t39 = 215573762547LLU;

	t39 = ((x1657<(x1658>>x1659))/x1660);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1685 = INT16_MAX;
	static int64_t x1686 = INT64_MAX;
	int8_t x1688 = -1;
	int32_t t40 = -39240;

	t40 = ((x1685<(x1686>>x1687))/x1688);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1714 = 60;
	uint8_t x1715 = 14U;
	static volatile uint32_t x1716 = 451704U;
	volatile uint32_t t41 = 1026107U;

	t41 = ((x1713<(x1714>>x1715))/x1716);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1781 = INT32_MIN;
	uint32_t x1782 = 3U;
	int16_t x1783 = 1;
	int8_t x1784 = INT8_MIN;
	volatile int32_t t42 = 381181;

	t42 = ((x1781<(x1782>>x1783))/x1784);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1786 = INT8_MAX;
	uint8_t x1787 = 5U;
	uint32_t x1788 = 5190U;

	t43 = ((x1785<(x1786>>x1787))/x1788);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1885 = -1;
	static int64_t x1886 = 127573113251612LL;
	uint16_t x1887 = 4U;
	int64_t t44 = 70040666986331835LL;

	t44 = ((x1885<(x1886>>x1887))/x1888);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1893 = 15057694660LLU;
	int16_t x1895 = 2;
	int32_t x1896 = 1;
	volatile int32_t t45 = 12818163;

	t45 = ((x1893<(x1894>>x1895))/x1896);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1919 = 22U;
	volatile uint16_t x1920 = UINT16_MAX;

	t46 = ((x1917<(x1918>>x1919))/x1920);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1946 = 1U;
	uint8_t x1947 = 0U;
	volatile uint8_t x1948 = UINT8_MAX;
	volatile int32_t t47 = -1718;

	t47 = ((x1945<(x1946>>x1947))/x1948);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1973 = -1LL;
	static uint8_t x1974 = 1U;
	int64_t x1975 = 0LL;

	t48 = ((x1973<(x1974>>x1975))/x1976);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2309 = INT16_MAX;
	static int8_t x2310 = INT8_MAX;
	uint8_t x2311 = 3U;
	uint32_t x2312 = 18664553U;
	volatile uint32_t t49 = 1291702U;

	t49 = ((x2309<(x2310>>x2311))/x2312);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2437 = 4328944732077819LLU;
	int16_t x2438 = 3131;
	static uint32_t x2439 = 0U;
	volatile int64_t x2440 = -1631904953584744653LL;
	static int64_t t50 = -4167008LL;

	t50 = ((x2437<(x2438>>x2439))/x2440);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2443 = 22U;
	int16_t x2444 = INT16_MIN;
	volatile int32_t t51 = 32839255;

	t51 = ((x2441<(x2442>>x2443))/x2444);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2461 = INT16_MAX;
	int8_t x2463 = 1;
	uint16_t x2464 = UINT16_MAX;
	int32_t t52 = 117;

	t52 = ((x2461<(x2462>>x2463))/x2464);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2506 = 47361LLU;
	static volatile int32_t t53 = 211;

	t53 = ((x2505<(x2506>>x2507))/x2508);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2593 = 0U;
	uint64_t x2594 = UINT64_MAX;
	volatile uint8_t x2595 = 1U;

	t54 = ((x2593<(x2594>>x2595))/x2596);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2613 = INT64_MAX;
	int8_t x2615 = 1;
	int16_t x2616 = INT16_MAX;
	int32_t t55 = -2243735;

	t55 = ((x2613<(x2614>>x2615))/x2616);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2669 = 0U;
	uint8_t x2670 = UINT8_MAX;
	int8_t x2672 = -7;
	volatile int32_t t56 = -241843;

	t56 = ((x2669<(x2670>>x2671))/x2672);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2765 = INT8_MAX;
	static int32_t x2766 = INT32_MAX;
	int8_t x2767 = 1;
	int32_t x2768 = 49127;
	int32_t t57 = -7324;

	t57 = ((x2765<(x2766>>x2767))/x2768);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2805 = -42;
	volatile uint16_t x2806 = 2U;
	uint8_t x2807 = 5U;
	int32_t x2808 = INT32_MIN;
	volatile int32_t t58 = 22;

	t58 = ((x2805<(x2806>>x2807))/x2808);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2813 = 133U;
	volatile uint32_t x2814 = 49331699U;
	uint8_t x2815 = 12U;
	uint32_t x2816 = UINT32_MAX;
	uint32_t t59 = 0U;

	t59 = ((x2813<(x2814>>x2815))/x2816);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2853 = INT32_MIN;
	static uint16_t x2854 = UINT16_MAX;
	uint64_t x2855 = 5LLU;
	volatile uint64_t t60 = 83138468LLU;

	t60 = ((x2853<(x2854>>x2855))/x2856);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2869 = INT64_MIN;
	uint32_t x2870 = 645294U;
	int8_t x2871 = 0;
	static int64_t x2872 = INT64_MAX;
	static volatile int64_t t61 = -790006LL;

	t61 = ((x2869<(x2870>>x2871))/x2872);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2881 = 61U;
	uint8_t x2883 = 1U;
	volatile int32_t t62 = -15290102;

	t62 = ((x2881<(x2882>>x2883))/x2884);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x2985 = UINT16_MAX;
	static volatile uint64_t x2986 = 286416999334082787LLU;
	uint16_t x2987 = 38U;
	volatile uint64_t x2988 = 2182150240LLU;
	volatile uint64_t t63 = 29LLU;

	t63 = ((x2985<(x2986>>x2987))/x2988);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3041 = 177465720150LL;
	uint8_t x3043 = 0U;
	static uint16_t x3044 = UINT16_MAX;
	static volatile int32_t t64 = -68;

	t64 = ((x3041<(x3042>>x3043))/x3044);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3085 = INT8_MIN;
	uint32_t x3086 = UINT32_MAX;
	static volatile uint16_t x3087 = 5U;
	int8_t x3088 = -1;
	volatile int32_t t65 = -1116;

	t65 = ((x3085<(x3086>>x3087))/x3088);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3102 = 3;
	int8_t x3103 = 11;
	volatile int32_t t66 = -1;

	t66 = ((x3101<(x3102>>x3103))/x3104);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3161 = INT16_MAX;
	uint16_t x3162 = 896U;
	uint8_t x3163 = 1U;
	int32_t x3164 = INT32_MIN;
	int32_t t67 = 19135;

	t67 = ((x3161<(x3162>>x3163))/x3164);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x3221 = 1;
	int64_t x3222 = INT64_MAX;
	int16_t x3224 = INT16_MIN;
	static volatile int32_t t68 = 0;

	t68 = ((x3221<(x3222>>x3223))/x3224);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x3293 = 1;
	uint64_t x3294 = UINT64_MAX;
	uint16_t x3295 = 28U;
	volatile int16_t x3296 = -2764;
	int32_t t69 = 2351033;

	t69 = ((x3293<(x3294>>x3295))/x3296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x3349 = UINT8_MAX;
	static int64_t x3350 = INT64_MAX;
	volatile uint8_t x3351 = 2U;
	static uint16_t x3352 = 17U;

	t70 = ((x3349<(x3350>>x3351))/x3352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x3413 = 1624693590341740280LLU;
	static int64_t x3414 = INT64_MAX;
	static uint8_t x3415 = 15U;

	t71 = ((x3413<(x3414>>x3415))/x3416);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3477 = INT64_MIN;
	uint16_t x3479 = 30U;
	volatile uint16_t x3480 = UINT16_MAX;
	volatile int32_t t72 = 87;

	t72 = ((x3477<(x3478>>x3479))/x3480);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3505 = 1;
	int8_t x3506 = INT8_MAX;
	volatile uint32_t x3507 = 15U;
	int16_t x3508 = INT16_MAX;
	int32_t t73 = -26700254;

	t73 = ((x3505<(x3506>>x3507))/x3508);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3517 = 500116LL;
	int32_t x3518 = INT32_MAX;
	volatile uint64_t x3519 = 28LLU;
	int64_t x3520 = -103007225946662742LL;
	int64_t t74 = -13020LL;

	t74 = ((x3517<(x3518>>x3519))/x3520);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3529 = 31;
	static volatile uint16_t x3530 = 7143U;
	uint32_t x3531 = 16U;
	int64_t t75 = 31LL;

	t75 = ((x3529<(x3530>>x3531))/x3532);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3543 = 2LLU;
	uint32_t x3544 = 22U;
	volatile uint32_t t76 = 10006U;

	t76 = ((x3541<(x3542>>x3543))/x3544);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x3561 = UINT8_MAX;
	int16_t x3562 = 18;
	uint16_t x3563 = 11U;
	uint8_t x3564 = UINT8_MAX;
	static int32_t t77 = 6818;

	t77 = ((x3561<(x3562>>x3563))/x3564);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3570 = INT32_MAX;
	volatile uint16_t x3571 = 23U;
	static volatile int32_t t78 = -708052597;

	t78 = ((x3569<(x3570>>x3571))/x3572);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3633 = -1;
	uint32_t x3634 = 76U;
	uint32_t x3635 = 4U;
	volatile int32_t t79 = -203283839;

	t79 = ((x3633<(x3634>>x3635))/x3636);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x3677 = UINT64_MAX;
	int16_t x3679 = 0;
	static volatile int64_t x3680 = INT64_MIN;

	t80 = ((x3677<(x3678>>x3679))/x3680);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3729 = 108U;
	uint32_t x3730 = 15072U;
	static int16_t x3732 = -1;
	volatile int32_t t81 = -1066480;

	t81 = ((x3729<(x3730>>x3731))/x3732);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3801 = INT32_MIN;
	volatile int16_t x3802 = INT16_MAX;
	uint8_t x3803 = 29U;
	uint32_t x3804 = 10736U;
	volatile uint32_t t82 = 1577844U;

	t82 = ((x3801<(x3802>>x3803))/x3804);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3809 = 6U;
	int16_t x3810 = 1;
	int8_t x3811 = 14;
	int16_t x3812 = -1;
	static int32_t t83 = 356515;

	t83 = ((x3809<(x3810>>x3811))/x3812);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x3825 = INT8_MAX;
	uint16_t x3826 = 46U;
	static int16_t x3827 = 10;
	int32_t t84 = -462683324;

	t84 = ((x3825<(x3826>>x3827))/x3828);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x3897 = 1U;
	int64_t x3898 = 505522069516006LL;
	volatile int64_t x3899 = 1LL;
	int64_t x3900 = -14921793987103854LL;
	volatile int64_t t85 = -4974751525LL;

	t85 = ((x3897<(x3898>>x3899))/x3900);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x3953 = UINT16_MAX;
	uint64_t x3954 = 1852236LLU;
	int32_t t86 = 7;

	t86 = ((x3953<(x3954>>x3955))/x3956);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4013 = -9;
	uint32_t x4014 = 3U;
	uint16_t x4015 = 14U;
	static int64_t t87 = -120954LL;

	t87 = ((x4013<(x4014>>x4015))/x4016);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4025 = 22U;
	int8_t x4026 = INT8_MAX;
	static volatile uint16_t x4027 = 2U;
	static int32_t x4028 = -1;
	int32_t t88 = 212135;

	t88 = ((x4025<(x4026>>x4027))/x4028);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x4049 = 26LLU;
	static uint32_t x4050 = 2216375U;
	volatile int8_t x4051 = 29;
	int32_t t89 = 261085986;

	t89 = ((x4049<(x4050>>x4051))/x4052);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4061 = -1;
	uint16_t x4062 = 2U;
	int32_t x4063 = 1;
	static int32_t x4064 = -145655;
	volatile int32_t t90 = 736747;

	t90 = ((x4061<(x4062>>x4063))/x4064);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4065 = UINT32_MAX;
	uint16_t x4066 = 121U;
	volatile uint8_t x4067 = 2U;
	int8_t x4068 = INT8_MIN;
	volatile int32_t t91 = 12509589;

	t91 = ((x4065<(x4066>>x4067))/x4068);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4174 = 51434;
	uint8_t x4175 = 3U;
	int64_t x4176 = INT64_MIN;

	t92 = ((x4173<(x4174>>x4175))/x4176);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4177 = UINT32_MAX;
	uint64_t x4178 = 3450LLU;
	int16_t x4179 = 3;
	static uint32_t x4180 = 551888U;
	uint32_t t93 = 46831U;

	t93 = ((x4177<(x4178>>x4179))/x4180);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4189 = INT64_MIN;
	uint16_t x4190 = 21U;
	static int8_t x4191 = 1;
	static int32_t x4192 = -1;

	t94 = ((x4189<(x4190>>x4191))/x4192);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4233 = UINT64_MAX;
	uint64_t x4234 = UINT64_MAX;
	uint64_t x4235 = 3LLU;
	static int64_t x4236 = INT64_MIN;

	t95 = ((x4233<(x4234>>x4235))/x4236);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4241 = INT32_MAX;
	volatile int64_t x4242 = 8712762699692499LL;
	static int16_t x4243 = 8;
	int8_t x4244 = INT8_MIN;
	int32_t t96 = -398648977;

	t96 = ((x4241<(x4242>>x4243))/x4244);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4285 = -18;
	uint16_t x4286 = 84U;
	uint16_t x4287 = 27U;
	int32_t x4288 = 4405;

	t97 = ((x4285<(x4286>>x4287))/x4288);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4362 = 132U;
	volatile int8_t x4363 = 10;
	uint32_t x4364 = 215U;
	volatile uint32_t t98 = 3214466U;

	t98 = ((x4361<(x4362>>x4363))/x4364);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4373 = -1LL;
	uint16_t x4374 = 3018U;
	static uint8_t x4375 = 4U;
	uint32_t x4376 = 7802U;
	volatile uint32_t t99 = 374822U;

	t99 = ((x4373<(x4374>>x4375))/x4376);

	if (t99 != 0U) { NG(); } else { ; }
	
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

