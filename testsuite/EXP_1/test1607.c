#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 1;
static int32_t x4 = INT32_MIN;
uint32_t x27 = 7U;
int16_t x28 = 3575;
volatile uint8_t x122 = 11U;
int64_t x142 = INT64_MAX;
static volatile uint64_t x143 = 6LLU;
volatile uint32_t x144 = UINT32_MAX;
volatile int32_t t3 = 86;
int8_t x186 = -1;
int16_t x194 = INT16_MAX;
volatile int32_t t7 = 3427909;
int8_t x286 = 4;
volatile int64_t x288 = -2134LL;
static uint8_t x319 = 10U;
int16_t x334 = INT16_MAX;
int8_t x348 = -33;
volatile int32_t t14 = -1;
static int32_t x439 = 3;
uint8_t x441 = 2U;
static uint32_t x511 = 1U;
int8_t x556 = INT8_MIN;
static int64_t x600 = INT64_MIN;
static int64_t x641 = INT64_MAX;
uint16_t x711 = 0U;
int64_t x712 = -1LL;
uint8_t x723 = 0U;
volatile int32_t t27 = -6;
int16_t x732 = 125;
int64_t x768 = INT64_MAX;
static volatile int32_t t30 = -9;
int32_t x788 = INT32_MIN;
volatile int32_t t32 = 917;
int8_t x820 = 7;
int32_t t35 = 4113588;
int16_t x972 = -1;
volatile uint32_t x982 = 3129780U;
volatile int16_t x984 = -20;
static int32_t t37 = -41129;
int8_t x1017 = -1;
int8_t x1025 = INT8_MIN;
uint8_t x1026 = 2U;
int16_t x1114 = INT16_MAX;
int32_t x1115 = 0;
uint8_t x1137 = UINT8_MAX;
int16_t x1226 = INT16_MAX;
uint32_t x1231 = 18U;
int32_t t45 = -56105;
uint64_t x1269 = UINT64_MAX;
volatile uint8_t x1271 = 14U;
int16_t x1375 = 0;
uint64_t x1382 = 21332545768LLU;
int64_t x1440 = INT64_MAX;
volatile int32_t t54 = 6;
uint32_t x1699 = 2U;
static int32_t x1753 = INT32_MIN;
static int8_t x1776 = INT8_MIN;
int16_t x1818 = INT16_MIN;
volatile uint8_t x1819 = 24U;
int32_t x1936 = 100442550;
uint64_t x1967 = 23LLU;
int16_t x1973 = INT16_MIN;
static volatile int16_t x1985 = INT16_MIN;
static int8_t x1987 = 0;
volatile int32_t x2050 = -1;
int32_t t66 = 12155;
int32_t t67 = -807259;
int32_t x2125 = 2196;
volatile int16_t x2126 = INT16_MAX;
static uint32_t x2128 = 20437560U;
uint32_t x2146 = 47U;
static uint16_t x2148 = 0U;
volatile int16_t x2158 = INT16_MAX;
int64_t x2209 = INT64_MIN;
int32_t t71 = 171795;
static int64_t x2317 = INT64_MIN;
volatile int32_t t76 = 613833;
uint16_t x2406 = 6448U;
uint8_t x2571 = 21U;
volatile int8_t x2631 = 0;
volatile uint8_t x2655 = 0U;
static int32_t x2677 = 211950;
int32_t x2679 = 2;
volatile int32_t t83 = -7470115;
uint32_t x2731 = 13U;
static int32_t x2745 = INT32_MIN;
int32_t t87 = 414302872;
int8_t x2790 = 5;
int32_t t89 = -352;
static int64_t x2805 = INT64_MIN;
uint32_t x2807 = 0U;
volatile int32_t x2808 = -716092;
int32_t t90 = 12457;
int8_t x2810 = -1;
uint16_t x2812 = 31U;
volatile uint64_t x2821 = 54890LLU;
volatile uint16_t x2832 = UINT16_MAX;
volatile int32_t t94 = -138;
uint64_t x2896 = UINT64_MAX;
volatile int16_t x2917 = -14004;
uint16_t x2936 = 603U;
int8_t x3083 = 1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x2 = INT64_MAX;
	int32_t t0 = 132830932;

	t0 = (((x1<=x2)>>x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x25 = INT32_MAX;
	int16_t x26 = INT16_MIN;
	int32_t t1 = 516832;

	t1 = (((x25<=x26)>>x27)==x28);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x121 = 0;
	uint8_t x123 = 1U;
	int64_t x124 = INT64_MIN;
	int32_t t2 = -8856953;

	t2 = (((x121<=x122)>>x123)==x124);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x141 = 25488LLU;

	t3 = (((x141<=x142)>>x143)==x144);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x145 = UINT16_MAX;
	int8_t x146 = INT8_MIN;
	uint16_t x147 = 0U;
	static volatile uint32_t x148 = UINT32_MAX;
	volatile int32_t t4 = 44;

	t4 = (((x145<=x146)>>x147)==x148);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x181 = 29741U;
	int16_t x182 = 1;
	volatile int32_t x183 = 13;
	uint32_t x184 = 1097858747U;
	volatile int32_t t5 = 475953;

	t5 = (((x181<=x182)>>x183)==x184);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x185 = -1180;
	int16_t x187 = 1;
	static uint32_t x188 = 80373U;
	volatile int32_t t6 = 4;

	t6 = (((x185<=x186)>>x187)==x188);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x193 = 223;
	uint16_t x195 = 12U;
	static volatile int16_t x196 = INT16_MAX;

	t7 = (((x193<=x194)>>x195)==x196);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x261 = 59U;
	uint64_t x262 = 0LLU;
	volatile int8_t x263 = 2;
	uint8_t x264 = UINT8_MAX;
	int32_t t8 = 2924397;

	t8 = (((x261<=x262)>>x263)==x264);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x285 = 136884951169LL;
	uint16_t x287 = 1U;
	static volatile int32_t t9 = 15773718;

	t9 = (((x285<=x286)>>x287)==x288);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x317 = UINT32_MAX;
	static volatile int16_t x318 = INT16_MIN;
	static uint64_t x320 = 865540457LLU;
	int32_t t10 = 1;

	t10 = (((x317<=x318)>>x319)==x320);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x329 = INT16_MIN;
	static int64_t x330 = 14217LL;
	uint8_t x331 = 0U;
	static volatile int32_t x332 = 66813899;
	int32_t t11 = -6367;

	t11 = (((x329<=x330)>>x331)==x332);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x333 = -1;
	uint8_t x335 = 0U;
	int16_t x336 = INT16_MIN;
	int32_t t12 = -6982222;

	t12 = (((x333<=x334)>>x335)==x336);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x345 = 2216LL;
	volatile int16_t x346 = -1;
	uint8_t x347 = 6U;
	volatile int32_t t13 = 2302;

	t13 = (((x345<=x346)>>x347)==x348);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x429 = 10558LL;
	uint16_t x430 = 4732U;
	int16_t x431 = 7;
	int64_t x432 = -13771147031621LL;

	t14 = (((x429<=x430)>>x431)==x432);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x437 = 10U;
	uint64_t x438 = 2511125071145LLU;
	int8_t x440 = 0;
	volatile int32_t t15 = -29;

	t15 = (((x437<=x438)>>x439)==x440);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x442 = INT64_MAX;
	int16_t x443 = 0;
	int8_t x444 = -34;
	volatile int32_t t16 = 1;

	t16 = (((x441<=x442)>>x443)==x444);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x489 = INT16_MIN;
	static int32_t x490 = INT32_MAX;
	int8_t x491 = 23;
	uint8_t x492 = 1U;
	static volatile int32_t t17 = -1827;

	t17 = (((x489<=x490)>>x491)==x492);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x497 = UINT16_MAX;
	uint32_t x498 = UINT32_MAX;
	int8_t x499 = 1;
	static int32_t x500 = 62681;
	volatile int32_t t18 = 32;

	t18 = (((x497<=x498)>>x499)==x500);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x505 = 1;
	int16_t x506 = -1;
	uint16_t x507 = 31U;
	volatile int64_t x508 = INT64_MIN;
	volatile int32_t t19 = 0;

	t19 = (((x505<=x506)>>x507)==x508);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x509 = INT16_MIN;
	static int16_t x510 = -1;
	static int16_t x512 = INT16_MIN;
	volatile int32_t t20 = 4457;

	t20 = (((x509<=x510)>>x511)==x512);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x553 = INT8_MIN;
	int8_t x554 = INT8_MAX;
	uint64_t x555 = 3LLU;
	volatile int32_t t21 = -21;

	t21 = (((x553<=x554)>>x555)==x556);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x597 = INT32_MAX;
	int64_t x598 = INT64_MAX;
	volatile int32_t x599 = 0;
	int32_t t22 = -1;

	t22 = (((x597<=x598)>>x599)==x600);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x642 = 4U;
	int64_t x643 = 28LL;
	int32_t x644 = 270599;
	static int32_t t23 = 1760;

	t23 = (((x641<=x642)>>x643)==x644);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x653 = INT16_MIN;
	static int64_t x654 = 3953425503807572LL;
	uint8_t x655 = 17U;
	int64_t x656 = 73719LL;
	static int32_t t24 = 88;

	t24 = (((x653<=x654)>>x655)==x656);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x677 = 394026514LL;
	int32_t x678 = -148921975;
	uint32_t x679 = 2U;
	static int64_t x680 = -4158173327945759LL;
	int32_t t25 = 14;

	t25 = (((x677<=x678)>>x679)==x680);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x709 = UINT32_MAX;
	int16_t x710 = INT16_MAX;
	static volatile int32_t t26 = 37178;

	t26 = (((x709<=x710)>>x711)==x712);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x721 = 2U;
	static int16_t x722 = INT16_MIN;
	uint32_t x724 = 100U;

	t27 = (((x721<=x722)>>x723)==x724);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x729 = -1LL;
	volatile int8_t x730 = INT8_MIN;
	static int16_t x731 = 1;
	static int32_t t28 = -224975;

	t28 = (((x729<=x730)>>x731)==x732);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x765 = INT32_MIN;
	int8_t x766 = INT8_MAX;
	volatile int16_t x767 = 1;
	int32_t t29 = -1;

	t29 = (((x765<=x766)>>x767)==x768);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x777 = 2894U;
	volatile int16_t x778 = -32;
	uint8_t x779 = 4U;
	uint64_t x780 = 16457331043LLU;

	t30 = (((x777<=x778)>>x779)==x780);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x785 = -95;
	static int16_t x786 = -1;
	volatile uint32_t x787 = 1U;
	static volatile int32_t t31 = 363;

	t31 = (((x785<=x786)>>x787)==x788);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x813 = INT8_MIN;
	uint8_t x814 = UINT8_MAX;
	uint64_t x815 = 7LLU;
	int8_t x816 = 3;

	t32 = (((x813<=x814)>>x815)==x816);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x817 = INT64_MIN;
	int64_t x818 = -1LL;
	int32_t x819 = 1;
	volatile int32_t t33 = -386;

	t33 = (((x817<=x818)>>x819)==x820);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x829 = INT64_MIN;
	int64_t x830 = -182LL;
	int8_t x831 = 15;
	int8_t x832 = INT8_MAX;
	volatile int32_t t34 = -27;

	t34 = (((x829<=x830)>>x831)==x832);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x849 = -3;
	int8_t x850 = 10;
	uint8_t x851 = 0U;
	uint32_t x852 = UINT32_MAX;

	t35 = (((x849<=x850)>>x851)==x852);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x969 = -8416;
	uint16_t x970 = 0U;
	volatile uint8_t x971 = 1U;
	int32_t t36 = 116;

	t36 = (((x969<=x970)>>x971)==x972);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x981 = INT8_MIN;
	uint8_t x983 = 24U;

	t37 = (((x981<=x982)>>x983)==x984);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1018 = INT16_MIN;
	volatile uint16_t x1019 = 2U;
	int8_t x1020 = -1;
	volatile int32_t t38 = -2;

	t38 = (((x1017<=x1018)>>x1019)==x1020);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1027 = 1;
	uint8_t x1028 = 40U;
	int32_t t39 = -489731063;

	t39 = (((x1025<=x1026)>>x1027)==x1028);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1037 = INT32_MAX;
	uint16_t x1038 = UINT16_MAX;
	volatile int8_t x1039 = 1;
	uint32_t x1040 = 2041U;
	volatile int32_t t40 = 407092177;

	t40 = (((x1037<=x1038)>>x1039)==x1040);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x1113 = 145203809U;
	static volatile int16_t x1116 = -219;
	volatile int32_t t41 = 57;

	t41 = (((x1113<=x1114)>>x1115)==x1116);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1138 = 1844U;
	int8_t x1139 = 0;
	int32_t x1140 = -1;
	volatile int32_t t42 = -50588;

	t42 = (((x1137<=x1138)>>x1139)==x1140);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1177 = INT32_MIN;
	int32_t x1178 = -1;
	int8_t x1179 = 26;
	int64_t x1180 = INT64_MIN;
	static int32_t t43 = -990;

	t43 = (((x1177<=x1178)>>x1179)==x1180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x1225 = 313322878U;
	volatile int16_t x1227 = 0;
	int8_t x1228 = -1;
	volatile int32_t t44 = -248612;

	t44 = (((x1225<=x1226)>>x1227)==x1228);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1229 = INT8_MIN;
	static int8_t x1230 = INT8_MIN;
	static volatile int64_t x1232 = -17LL;

	t45 = (((x1229<=x1230)>>x1231)==x1232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1233 = INT8_MIN;
	int8_t x1234 = 1;
	static volatile int32_t x1235 = 0;
	int16_t x1236 = INT16_MIN;
	volatile int32_t t46 = -126630191;

	t46 = (((x1233<=x1234)>>x1235)==x1236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1270 = INT64_MIN;
	int16_t x1272 = 0;
	volatile int32_t t47 = -940869;

	t47 = (((x1269<=x1270)>>x1271)==x1272);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1333 = 27U;
	int64_t x1334 = 13101479335172930LL;
	int8_t x1335 = 12;
	volatile uint64_t x1336 = 5LLU;
	int32_t t48 = 603;

	t48 = (((x1333<=x1334)>>x1335)==x1336);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1373 = 4110U;
	volatile int16_t x1374 = INT16_MIN;
	int64_t x1376 = -1LL;
	volatile int32_t t49 = -3290353;

	t49 = (((x1373<=x1374)>>x1375)==x1376);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1381 = 41;
	static uint8_t x1383 = 0U;
	volatile uint64_t x1384 = 266940728686074LLU;
	int32_t t50 = 57137;

	t50 = (((x1381<=x1382)>>x1383)==x1384);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1437 = -1;
	uint8_t x1438 = UINT8_MAX;
	static int8_t x1439 = 1;
	volatile int32_t t51 = 294209;

	t51 = (((x1437<=x1438)>>x1439)==x1440);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1513 = 0U;
	static int64_t x1514 = INT64_MAX;
	int16_t x1515 = 31;
	volatile int32_t x1516 = -648300;
	static volatile int32_t t52 = -825;

	t52 = (((x1513<=x1514)>>x1515)==x1516);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1597 = INT32_MIN;
	int64_t x1598 = -1627500860081114178LL;
	uint16_t x1599 = 0U;
	static int64_t x1600 = INT64_MAX;
	int32_t t53 = 32695928;

	t53 = (((x1597<=x1598)>>x1599)==x1600);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x1621 = UINT64_MAX;
	int64_t x1622 = 7395LL;
	int8_t x1623 = 1;
	int32_t x1624 = INT32_MAX;

	t54 = (((x1621<=x1622)>>x1623)==x1624);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1697 = 7186181U;
	volatile int16_t x1698 = 207;
	static int16_t x1700 = INT16_MIN;
	volatile int32_t t55 = 63672955;

	t55 = (((x1697<=x1698)>>x1699)==x1700);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1725 = INT32_MIN;
	int8_t x1726 = INT8_MAX;
	volatile uint8_t x1727 = 7U;
	int16_t x1728 = -1;
	int32_t t56 = 0;

	t56 = (((x1725<=x1726)>>x1727)==x1728);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1754 = -2;
	volatile uint32_t x1755 = 2U;
	uint32_t x1756 = UINT32_MAX;
	volatile int32_t t57 = 488995158;

	t57 = (((x1753<=x1754)>>x1755)==x1756);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x1761 = 14130120U;
	int8_t x1762 = 6;
	uint32_t x1763 = 2U;
	int32_t x1764 = -90215131;
	volatile int32_t t58 = 13714774;

	t58 = (((x1761<=x1762)>>x1763)==x1764);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1773 = INT64_MIN;
	uint64_t x1774 = 167238581335543LLU;
	static uint8_t x1775 = 7U;
	static int32_t t59 = 119387;

	t59 = (((x1773<=x1774)>>x1775)==x1776);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1817 = INT16_MAX;
	int64_t x1820 = -96030750LL;
	volatile int32_t t60 = -447020;

	t60 = (((x1817<=x1818)>>x1819)==x1820);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1933 = -7LL;
	volatile uint64_t x1934 = 101392726182LLU;
	static uint16_t x1935 = 1U;
	volatile int32_t t61 = 11;

	t61 = (((x1933<=x1934)>>x1935)==x1936);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x1965 = 5705U;
	uint8_t x1966 = 15U;
	int8_t x1968 = -1;
	volatile int32_t t62 = 0;

	t62 = (((x1965<=x1966)>>x1967)==x1968);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1969 = INT64_MIN;
	int64_t x1970 = INT64_MIN;
	uint32_t x1971 = 14U;
	volatile uint64_t x1972 = 0LLU;
	volatile int32_t t63 = 9289;

	t63 = (((x1969<=x1970)>>x1971)==x1972);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1974 = INT16_MAX;
	int8_t x1975 = 3;
	int16_t x1976 = -43;
	volatile int32_t t64 = 452;

	t64 = (((x1973<=x1974)>>x1975)==x1976);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1986 = 1U;
	uint64_t x1988 = UINT64_MAX;
	int32_t t65 = -32165900;

	t65 = (((x1985<=x1986)>>x1987)==x1988);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2049 = INT8_MIN;
	static int16_t x2051 = 1;
	int32_t x2052 = INT32_MAX;

	t66 = (((x2049<=x2050)>>x2051)==x2052);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2097 = 1U;
	int8_t x2098 = -1;
	int8_t x2099 = 7;
	uint32_t x2100 = UINT32_MAX;

	t67 = (((x2097<=x2098)>>x2099)==x2100);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2127 = 3U;
	static int32_t t68 = 0;

	t68 = (((x2125<=x2126)>>x2127)==x2128);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2145 = UINT32_MAX;
	int16_t x2147 = 0;
	int32_t t69 = -573;

	t69 = (((x2145<=x2146)>>x2147)==x2148);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2157 = INT16_MAX;
	static uint8_t x2159 = 1U;
	volatile uint32_t x2160 = 55968U;
	int32_t t70 = 49841;

	t70 = (((x2157<=x2158)>>x2159)==x2160);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2210 = 0U;
	uint32_t x2211 = 6U;
	int8_t x2212 = 0;

	t71 = (((x2209<=x2210)>>x2211)==x2212);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2277 = 3U;
	volatile int32_t x2278 = INT32_MAX;
	uint8_t x2279 = 6U;
	uint32_t x2280 = UINT32_MAX;
	int32_t t72 = 3;

	t72 = (((x2277<=x2278)>>x2279)==x2280);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2305 = UINT32_MAX;
	volatile int16_t x2306 = 16026;
	int32_t x2307 = 1;
	uint8_t x2308 = UINT8_MAX;
	volatile int32_t t73 = -3357485;

	t73 = (((x2305<=x2306)>>x2307)==x2308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x2318 = 1445LLU;
	int64_t x2319 = 2LL;
	int16_t x2320 = INT16_MIN;
	int32_t t74 = 109;

	t74 = (((x2317<=x2318)>>x2319)==x2320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2341 = INT16_MIN;
	static uint8_t x2342 = 121U;
	uint8_t x2343 = 8U;
	int8_t x2344 = INT8_MAX;
	volatile int32_t t75 = -32611435;

	t75 = (((x2341<=x2342)>>x2343)==x2344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2393 = 242;
	int16_t x2394 = -7012;
	uint32_t x2395 = 12U;
	int8_t x2396 = -50;

	t76 = (((x2393<=x2394)>>x2395)==x2396);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x2405 = 3;
	uint8_t x2407 = 1U;
	int64_t x2408 = INT64_MIN;
	volatile int32_t t77 = -422945165;

	t77 = (((x2405<=x2406)>>x2407)==x2408);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2465 = INT16_MAX;
	uint64_t x2466 = 7166198027785585LLU;
	volatile uint8_t x2467 = 4U;
	int16_t x2468 = INT16_MIN;
	static int32_t t78 = -175459784;

	t78 = (((x2465<=x2466)>>x2467)==x2468);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2481 = 21U;
	uint64_t x2482 = UINT64_MAX;
	uint8_t x2483 = 26U;
	int16_t x2484 = INT16_MIN;
	volatile int32_t t79 = 6640;

	t79 = (((x2481<=x2482)>>x2483)==x2484);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2569 = INT32_MAX;
	int32_t x2570 = 75;
	uint64_t x2572 = 2780958700385169470LLU;
	static volatile int32_t t80 = -22333;

	t80 = (((x2569<=x2570)>>x2571)==x2572);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x2629 = UINT64_MAX;
	int8_t x2630 = -39;
	int32_t x2632 = 12588;
	static int32_t t81 = -28840;

	t81 = (((x2629<=x2630)>>x2631)==x2632);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2653 = 4466;
	uint16_t x2654 = UINT16_MAX;
	int16_t x2656 = -1;
	volatile int32_t t82 = 50933;

	t82 = (((x2653<=x2654)>>x2655)==x2656);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x2678 = 1149968285U;
	uint8_t x2680 = 38U;

	t83 = (((x2677<=x2678)>>x2679)==x2680);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x2717 = 66U;
	volatile int16_t x2718 = -11431;
	int32_t x2719 = 1;
	volatile uint64_t x2720 = 15671700548986323LLU;
	int32_t t84 = -47338361;

	t84 = (((x2717<=x2718)>>x2719)==x2720);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x2725 = 80U;
	static int8_t x2726 = -1;
	uint64_t x2727 = 1LLU;
	int32_t x2728 = INT32_MIN;
	static int32_t t85 = -1;

	t85 = (((x2725<=x2726)>>x2727)==x2728);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2729 = -172945694;
	int8_t x2730 = 1;
	static int32_t x2732 = INT32_MIN;
	static int32_t t86 = -23227;

	t86 = (((x2729<=x2730)>>x2731)==x2732);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x2746 = -1;
	int16_t x2747 = 0;
	volatile uint16_t x2748 = 7392U;

	t87 = (((x2745<=x2746)>>x2747)==x2748);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x2765 = 23069U;
	int32_t x2766 = INT32_MAX;
	int16_t x2767 = 1;
	uint16_t x2768 = 23U;
	static int32_t t88 = -290;

	t88 = (((x2765<=x2766)>>x2767)==x2768);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2789 = UINT64_MAX;
	int64_t x2791 = 4LL;
	int32_t x2792 = -1;

	t89 = (((x2789<=x2790)>>x2791)==x2792);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x2806 = INT8_MIN;

	t90 = (((x2805<=x2806)>>x2807)==x2808);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2809 = 5017;
	int32_t x2811 = 13;
	int32_t t91 = 6;

	t91 = (((x2809<=x2810)>>x2811)==x2812);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2813 = UINT64_MAX;
	static uint32_t x2814 = 69616U;
	int8_t x2815 = 1;
	volatile int16_t x2816 = -1;
	volatile int32_t t92 = 3;

	t92 = (((x2813<=x2814)>>x2815)==x2816);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2822 = 1;
	uint16_t x2823 = 31U;
	volatile int8_t x2824 = 0;
	int32_t t93 = -138;

	t93 = (((x2821<=x2822)>>x2823)==x2824);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2829 = INT64_MAX;
	uint8_t x2830 = UINT8_MAX;
	uint8_t x2831 = 12U;

	t94 = (((x2829<=x2830)>>x2831)==x2832);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2893 = INT8_MIN;
	volatile int64_t x2894 = -1LL;
	uint64_t x2895 = 3LLU;
	volatile int32_t t95 = -6649511;

	t95 = (((x2893<=x2894)>>x2895)==x2896);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2918 = -1;
	uint32_t x2919 = 3U;
	volatile int8_t x2920 = 1;
	int32_t t96 = 17776;

	t96 = (((x2917<=x2918)>>x2919)==x2920);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2933 = 508U;
	volatile int16_t x2934 = INT16_MAX;
	uint8_t x2935 = 3U;
	int32_t t97 = 19587903;

	t97 = (((x2933<=x2934)>>x2935)==x2936);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3061 = 342LLU;
	volatile int32_t x3062 = INT32_MAX;
	volatile uint8_t x3063 = 12U;
	int16_t x3064 = 891;
	int32_t t98 = -1;

	t98 = (((x3061<=x3062)>>x3063)==x3064);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3081 = 6U;
	uint32_t x3082 = 83432U;
	volatile uint64_t x3084 = 100143LLU;
	int32_t t99 = 3229587;

	t99 = (((x3081<=x3082)>>x3083)==x3084);

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

