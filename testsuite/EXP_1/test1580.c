#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x34 = INT64_MIN;
static volatile uint32_t t1 = 9U;
int64_t x73 = INT64_MIN;
uint8_t x159 = UINT8_MAX;
volatile int32_t t4 = 618506668;
uint32_t x185 = UINT32_MAX;
static volatile uint64_t x199 = UINT64_MAX;
uint64_t x200 = 28LLU;
volatile int8_t x204 = 1;
static int16_t x261 = -38;
int8_t x264 = 0;
static int8_t x297 = INT8_MIN;
int64_t x317 = -1LL;
uint8_t x320 = 3U;
static int64_t x357 = 333398LL;
int16_t x358 = -41;
uint8_t x384 = 2U;
uint64_t x419 = 1734399814099298280LLU;
static uint32_t x420 = 2U;
static int64_t x547 = INT64_MIN;
volatile uint32_t x548 = 8U;
uint8_t x609 = UINT8_MAX;
uint16_t x612 = 7U;
volatile uint8_t x663 = UINT8_MAX;
uint32_t x664 = 29U;
uint8_t x675 = 14U;
static int32_t x676 = 25;
int8_t x712 = 37;
uint8_t x740 = 0U;
int8_t x760 = 3;
volatile int32_t t33 = 208;
int8_t x834 = 0;
static int8_t x836 = 0;
uint32_t x1010 = UINT32_MAX;
int16_t x1032 = 12;
volatile uint16_t x1049 = 31343U;
uint8_t x1052 = 3U;
int8_t x1124 = 12;
uint64_t x1137 = 6588249384167LLU;
int64_t x1162 = -3246227330487618LL;
int32_t t44 = -174449;
int16_t x1209 = 21;
uint64_t x1233 = 941776621LLU;
volatile int64_t x1234 = 273907LL;
uint32_t x1235 = UINT32_MAX;
int64_t x1299 = INT64_MIN;
volatile int32_t t49 = 8;
int64_t x1657 = INT64_MAX;
uint32_t t52 = 4U;
int8_t x1680 = 1;
uint16_t x1732 = 28U;
uint32_t x1785 = 29211U;
int64_t x1787 = -1LL;
static int64_t t55 = -1542757088441LL;
static volatile int64_t x1790 = -1LL;
volatile uint64_t t57 = 3389978752514LLU;
volatile int8_t x1824 = 2;
volatile int32_t t59 = 477780;
int16_t x1869 = INT16_MIN;
int16_t x1870 = INT16_MAX;
int64_t x1943 = -274549177976964240LL;
uint8_t x1983 = 1U;
int64_t x1994 = -16161LL;
uint32_t t65 = 456842762U;
int8_t x2001 = -1;
int8_t x2004 = 3;
int64_t x2010 = INT64_MIN;
int8_t x2011 = -1;
int32_t x2034 = INT32_MIN;
volatile uint32_t x2036 = 0U;
int32_t x2039 = -528774;
static int16_t x2043 = -661;
int32_t t70 = 2597;
int8_t x2066 = INT8_MIN;
uint8_t x2068 = 0U;
static int32_t x2153 = INT32_MIN;
int32_t t74 = 385198;
static uint8_t x2229 = UINT8_MAX;
int32_t x2230 = -1056140119;
int8_t x2257 = 23;
uint16_t x2259 = 1U;
volatile int32_t t77 = 2;
volatile int16_t x2310 = INT16_MAX;
int64_t x2403 = INT64_MIN;
static uint32_t x2407 = 3527U;
static uint64_t t82 = 139561808LLU;
int64_t x2570 = -1LL;
int16_t x2621 = INT16_MIN;
static volatile int64_t t86 = 6264LL;
volatile uint64_t t87 = 144409586384018798LLU;
int16_t x2722 = 1;
uint8_t x2724 = 3U;
int32_t x2743 = INT32_MIN;
uint8_t x2768 = 7U;
volatile int64_t x2781 = -30LL;
static int16_t x2783 = -1;
volatile uint8_t x2784 = 7U;
volatile int64_t x2841 = INT64_MIN;
uint16_t x2868 = 0U;
uint32_t x2896 = 9U;
static int32_t x2917 = -980028;
int16_t x2960 = 21;


void f0(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int64_t x26 = INT64_MIN;
	uint64_t x27 = 5827704455726LLU;
	int16_t x28 = 0;
	volatile uint64_t t0 = 93089LLU;

	t0 = (((x25<=x26)%x27)>>x28);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x33 = 2LLU;
	uint32_t x35 = 2U;
	int64_t x36 = 1LL;

	t1 = (((x33<=x34)%x35)>>x36);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x74 = 704022U;
	static int64_t x75 = -34315335613802LL;
	int8_t x76 = 61;
	volatile int64_t t2 = 1256LL;

	t2 = (((x73<=x74)%x75)>>x76);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x77 = -1;
	volatile int8_t x78 = 1;
	int64_t x79 = INT64_MAX;
	int8_t x80 = 31;
	volatile int64_t t3 = 450731342976602153LL;

	t3 = (((x77<=x78)%x79)>>x80);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x158 = UINT8_MAX;
	uint8_t x160 = 11U;

	t4 = (((x157<=x158)%x159)>>x160);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = -1;
	static volatile uint16_t x171 = 15012U;
	int8_t x172 = 3;
	volatile int32_t t5 = 9210;

	t5 = (((x169<=x170)%x171)>>x172);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x186 = 63672LLU;
	int16_t x187 = 4;
	uint32_t x188 = 0U;
	int32_t t6 = -399481405;

	t6 = (((x185<=x186)%x187)>>x188);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MAX;
	volatile uint64_t t7 = 799497157180164LLU;

	t7 = (((x197<=x198)%x199)>>x200);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x201 = 127412401888104LLU;
	static int16_t x202 = INT16_MAX;
	uint64_t x203 = 489676767035944LLU;
	uint64_t t8 = 194789764508648249LLU;

	t8 = (((x201<=x202)%x203)>>x204);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x221 = 7U;
	int64_t x222 = INT64_MIN;
	static int8_t x223 = INT8_MIN;
	uint16_t x224 = 1U;
	volatile int32_t t9 = 17588;

	t9 = (((x221<=x222)%x223)>>x224);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x262 = 7LLU;
	volatile uint32_t x263 = 487U;
	volatile uint32_t t10 = 1353322379U;

	t10 = (((x261<=x262)%x263)>>x264);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x277 = 2U;
	volatile int16_t x278 = 73;
	static int32_t x279 = INT32_MAX;
	static uint16_t x280 = 1U;
	volatile int32_t t11 = 63;

	t11 = (((x277<=x278)%x279)>>x280);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x298 = 11U;
	int32_t x299 = INT32_MIN;
	uint8_t x300 = 8U;
	int32_t t12 = -1706821;

	t12 = (((x297<=x298)%x299)>>x300);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x318 = 32U;
	uint64_t x319 = UINT64_MAX;
	volatile uint64_t t13 = 137976959503172LLU;

	t13 = (((x317<=x318)%x319)>>x320);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = 4U;
	uint64_t t14 = 826702LLU;

	t14 = (((x357<=x358)%x359)>>x360);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MIN;
	static volatile int32_t t15 = 1;

	t15 = (((x381<=x382)%x383)>>x384);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x397 = 40775528378619095LLU;
	static int64_t x398 = -1LL;
	volatile int8_t x399 = -45;
	int8_t x400 = 0;
	volatile int32_t t16 = 25;

	t16 = (((x397<=x398)%x399)>>x400);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x417 = INT64_MAX;
	int32_t x418 = INT32_MIN;
	static volatile uint64_t t17 = 7167LLU;

	t17 = (((x417<=x418)%x419)>>x420);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x421 = 2U;
	uint64_t x422 = UINT64_MAX;
	int8_t x423 = -1;
	uint8_t x424 = 31U;
	volatile int32_t t18 = 0;

	t18 = (((x421<=x422)%x423)>>x424);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x429 = 2;
	uint16_t x430 = 3629U;
	uint32_t x431 = 1429827759U;
	uint16_t x432 = 2U;
	volatile uint32_t t19 = 860340969U;

	t19 = (((x429<=x430)%x431)>>x432);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x445 = -74622457445163736LL;
	volatile int8_t x446 = INT8_MIN;
	int64_t x447 = 856740199727117611LL;
	static uint8_t x448 = 1U;
	int64_t t20 = -50LL;

	t20 = (((x445<=x446)%x447)>>x448);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x529 = INT16_MIN;
	volatile int32_t x530 = INT32_MIN;
	static int64_t x531 = INT64_MAX;
	volatile int8_t x532 = 1;
	int64_t t21 = 10LL;

	t21 = (((x529<=x530)%x531)>>x532);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x545 = 1U;
	volatile int64_t x546 = -1LL;
	int64_t t22 = 1018572LL;

	t22 = (((x545<=x546)%x547)>>x548);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x605 = INT8_MAX;
	int64_t x606 = INT64_MAX;
	int8_t x607 = INT8_MIN;
	int16_t x608 = 1;
	volatile int32_t t23 = 6;

	t23 = (((x605<=x606)%x607)>>x608);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x610 = 31;
	int16_t x611 = INT16_MAX;
	static volatile int32_t t24 = 7884;

	t24 = (((x609<=x610)%x611)>>x612);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x625 = 104U;
	uint32_t x626 = UINT32_MAX;
	int64_t x627 = -2115308183420316LL;
	static uint16_t x628 = 2U;
	volatile int64_t t25 = -142375LL;

	t25 = (((x625<=x626)%x627)>>x628);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x629 = -1;
	int16_t x630 = -1;
	volatile int8_t x631 = -1;
	static uint8_t x632 = 12U;
	volatile int32_t t26 = 94;

	t26 = (((x629<=x630)%x631)>>x632);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x661 = 3;
	uint64_t x662 = 9547851570195305LLU;
	int32_t t27 = 172;

	t27 = (((x661<=x662)%x663)>>x664);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x673 = INT64_MIN;
	uint32_t x674 = UINT32_MAX;
	int32_t t28 = 0;

	t28 = (((x673<=x674)%x675)>>x676);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x709 = -1LL;
	int16_t x710 = INT16_MIN;
	int64_t x711 = 63968776LL;
	volatile int64_t t29 = -216359927675879LL;

	t29 = (((x709<=x710)%x711)>>x712);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x737 = UINT16_MAX;
	uint16_t x738 = 1U;
	int16_t x739 = 2;
	int32_t t30 = -953811;

	t30 = (((x737<=x738)%x739)>>x740);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x757 = -1;
	volatile uint16_t x758 = 649U;
	int8_t x759 = 15;
	static int32_t t31 = 456491;

	t31 = (((x757<=x758)%x759)>>x760);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x781 = -5;
	uint32_t x782 = 4U;
	int16_t x783 = INT16_MIN;
	static uint8_t x784 = 25U;
	int32_t t32 = 96086;

	t32 = (((x781<=x782)%x783)>>x784);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x785 = INT16_MIN;
	int32_t x786 = -214976001;
	int8_t x787 = -1;
	int8_t x788 = 28;

	t33 = (((x785<=x786)%x787)>>x788);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x817 = INT32_MIN;
	int32_t x818 = INT32_MIN;
	int16_t x819 = -1;
	int8_t x820 = 12;
	static int32_t t34 = 934;

	t34 = (((x817<=x818)%x819)>>x820);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x833 = 31LLU;
	int32_t x835 = -1;
	static volatile int32_t t35 = 93265;

	t35 = (((x833<=x834)%x835)>>x836);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x837 = 3U;
	int8_t x838 = INT8_MAX;
	volatile int32_t x839 = INT32_MIN;
	volatile int8_t x840 = 26;
	static volatile int32_t t36 = -1832;

	t36 = (((x837<=x838)%x839)>>x840);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x877 = INT16_MIN;
	static volatile int16_t x878 = INT16_MIN;
	uint32_t x879 = UINT32_MAX;
	uint16_t x880 = 2U;
	volatile uint32_t t37 = 249312261U;

	t37 = (((x877<=x878)%x879)>>x880);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x1009 = UINT8_MAX;
	int8_t x1011 = INT8_MIN;
	static volatile uint8_t x1012 = 5U;
	int32_t t38 = 16149655;

	t38 = (((x1009<=x1010)%x1011)>>x1012);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1029 = INT8_MAX;
	static volatile uint16_t x1030 = 115U;
	static int64_t x1031 = -1LL;
	static int64_t t39 = -33469207128605748LL;

	t39 = (((x1029<=x1030)%x1031)>>x1032);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1050 = -1LL;
	int32_t x1051 = -1;
	int32_t t40 = 914663;

	t40 = (((x1049<=x1050)%x1051)>>x1052);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1069 = -1LL;
	static uint8_t x1070 = 1U;
	uint32_t x1071 = 6824676U;
	static uint8_t x1072 = 4U;
	volatile uint32_t t41 = 1793U;

	t41 = (((x1069<=x1070)%x1071)>>x1072);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1121 = -1;
	volatile int16_t x1122 = INT16_MIN;
	static int32_t x1123 = INT32_MIN;
	volatile int32_t t42 = -511;

	t42 = (((x1121<=x1122)%x1123)>>x1124);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1138 = -14;
	int64_t x1139 = 5LL;
	volatile int8_t x1140 = 19;
	int64_t t43 = -24612LL;

	t43 = (((x1137<=x1138)%x1139)>>x1140);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1161 = -1;
	uint8_t x1163 = 33U;
	static uint16_t x1164 = 4U;

	t44 = (((x1161<=x1162)%x1163)>>x1164);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1210 = 6;
	uint64_t x1211 = 122776667646521LLU;
	int8_t x1212 = 3;
	uint64_t t45 = 126494146LLU;

	t45 = (((x1209<=x1210)%x1211)>>x1212);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1236 = 3;
	uint32_t t46 = 5U;

	t46 = (((x1233<=x1234)%x1235)>>x1236);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1297 = 25;
	uint64_t x1298 = 2284021469709LLU;
	uint8_t x1300 = 46U;
	int64_t t47 = -32360LL;

	t47 = (((x1297<=x1298)%x1299)>>x1300);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1373 = -1;
	int64_t x1374 = INT64_MIN;
	int64_t x1375 = 451956587257277LL;
	uint64_t x1376 = 27LLU;
	volatile int64_t t48 = 13728627LL;

	t48 = (((x1373<=x1374)%x1375)>>x1376);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1537 = 3U;
	int8_t x1538 = INT8_MAX;
	int16_t x1539 = INT16_MIN;
	static int8_t x1540 = 0;

	t49 = (((x1537<=x1538)%x1539)>>x1540);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1545 = 6U;
	int64_t x1546 = 3068005302759202173LL;
	int64_t x1547 = -1LL;
	static uint16_t x1548 = 12U;
	int64_t t50 = 0LL;

	t50 = (((x1545<=x1546)%x1547)>>x1548);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x1613 = INT16_MAX;
	int16_t x1614 = 0;
	int8_t x1615 = INT8_MIN;
	static uint8_t x1616 = 5U;
	int32_t t51 = -53786;

	t51 = (((x1613<=x1614)%x1615)>>x1616);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1658 = 0U;
	uint32_t x1659 = UINT32_MAX;
	static uint32_t x1660 = 0U;

	t52 = (((x1657<=x1658)%x1659)>>x1660);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1677 = 40;
	int32_t x1678 = -1;
	static volatile uint16_t x1679 = 1U;
	static volatile int32_t t53 = 105777728;

	t53 = (((x1677<=x1678)%x1679)>>x1680);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1729 = 27U;
	uint8_t x1730 = UINT8_MAX;
	volatile int16_t x1731 = INT16_MIN;
	volatile int32_t t54 = 150;

	t54 = (((x1729<=x1730)%x1731)>>x1732);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1786 = -14;
	uint16_t x1788 = 11U;

	t55 = (((x1785<=x1786)%x1787)>>x1788);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1789 = UINT8_MAX;
	int16_t x1791 = INT16_MIN;
	uint8_t x1792 = 3U;
	static int32_t t56 = 156445;

	t56 = (((x1789<=x1790)%x1791)>>x1792);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1801 = UINT8_MAX;
	uint16_t x1802 = UINT16_MAX;
	static uint64_t x1803 = 1288428087263886523LLU;
	volatile int8_t x1804 = 0;

	t57 = (((x1801<=x1802)%x1803)>>x1804);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1821 = 2LLU;
	int16_t x1822 = INT16_MIN;
	uint8_t x1823 = 40U;
	int32_t t58 = -656561;

	t58 = (((x1821<=x1822)%x1823)>>x1824);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x1833 = INT64_MAX;
	volatile int8_t x1834 = INT8_MIN;
	uint16_t x1835 = UINT16_MAX;
	int32_t x1836 = 2;

	t59 = (((x1833<=x1834)%x1835)>>x1836);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1871 = INT8_MIN;
	static volatile uint16_t x1872 = 13U;
	static int32_t t60 = -213503;

	t60 = (((x1869<=x1870)%x1871)>>x1872);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x1873 = 864418644996LLU;
	volatile uint8_t x1874 = UINT8_MAX;
	volatile uint32_t x1875 = UINT32_MAX;
	int32_t x1876 = 1;
	volatile uint32_t t61 = 1013508066U;

	t61 = (((x1873<=x1874)%x1875)>>x1876);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x1941 = UINT32_MAX;
	int16_t x1942 = 0;
	volatile uint32_t x1944 = 37U;
	static volatile int64_t t62 = -2213428289534176153LL;

	t62 = (((x1941<=x1942)%x1943)>>x1944);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1957 = 1159U;
	uint32_t x1958 = 30U;
	static int8_t x1959 = INT8_MIN;
	int32_t x1960 = 0;
	int32_t t63 = -134;

	t63 = (((x1957<=x1958)%x1959)>>x1960);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1981 = INT8_MIN;
	int8_t x1982 = INT8_MIN;
	uint8_t x1984 = 0U;
	static int32_t t64 = -434306;

	t64 = (((x1981<=x1982)%x1983)>>x1984);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1993 = INT64_MIN;
	static uint32_t x1995 = 48U;
	int8_t x1996 = 0;

	t65 = (((x1993<=x1994)%x1995)>>x1996);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x2002 = -23;
	volatile int16_t x2003 = INT16_MAX;
	static volatile int32_t t66 = -542;

	t66 = (((x2001<=x2002)%x2003)>>x2004);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2009 = INT16_MIN;
	uint8_t x2012 = 1U;
	static int32_t t67 = 0;

	t67 = (((x2009<=x2010)%x2011)>>x2012);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2033 = 25379LLU;
	volatile int64_t x2035 = 28368LL;
	int64_t t68 = -1868LL;

	t68 = (((x2033<=x2034)%x2035)>>x2036);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2037 = INT32_MIN;
	static uint32_t x2038 = 15U;
	uint8_t x2040 = 6U;
	volatile int32_t t69 = 512137;

	t69 = (((x2037<=x2038)%x2039)>>x2040);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x2041 = UINT8_MAX;
	volatile uint64_t x2042 = UINT64_MAX;
	int8_t x2044 = 15;

	t70 = (((x2041<=x2042)%x2043)>>x2044);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2065 = 14U;
	volatile int32_t x2067 = 15817318;
	static volatile int32_t t71 = 1038400;

	t71 = (((x2065<=x2066)%x2067)>>x2068);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2089 = 11;
	uint16_t x2090 = UINT16_MAX;
	static int64_t x2091 = INT64_MIN;
	uint8_t x2092 = 0U;
	volatile int64_t t72 = -387297949495096973LL;

	t72 = (((x2089<=x2090)%x2091)>>x2092);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2154 = UINT16_MAX;
	volatile int16_t x2155 = INT16_MAX;
	int8_t x2156 = 0;
	int32_t t73 = -508;

	t73 = (((x2153<=x2154)%x2155)>>x2156);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x2197 = 196622278386100LLU;
	int32_t x2198 = INT32_MIN;
	int32_t x2199 = INT32_MIN;
	int16_t x2200 = 10;

	t74 = (((x2197<=x2198)%x2199)>>x2200);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x2213 = 2U;
	int64_t x2214 = INT64_MIN;
	static volatile int32_t x2215 = INT32_MAX;
	volatile uint16_t x2216 = 6U;
	int32_t t75 = -106913220;

	t75 = (((x2213<=x2214)%x2215)>>x2216);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2231 = INT32_MIN;
	volatile uint8_t x2232 = 2U;
	int32_t t76 = 53;

	t76 = (((x2229<=x2230)%x2231)>>x2232);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x2258 = UINT64_MAX;
	volatile uint32_t x2260 = 1U;

	t77 = (((x2257<=x2258)%x2259)>>x2260);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2261 = INT16_MIN;
	uint64_t x2262 = 4884075914410315LLU;
	static int16_t x2263 = INT16_MIN;
	volatile int8_t x2264 = 2;
	volatile int32_t t78 = -2653;

	t78 = (((x2261<=x2262)%x2263)>>x2264);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2309 = INT8_MIN;
	uint8_t x2311 = 8U;
	uint16_t x2312 = 0U;
	int32_t t79 = 151997;

	t79 = (((x2309<=x2310)%x2311)>>x2312);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x2401 = -12364068LL;
	static uint64_t x2402 = 25366805010033904LLU;
	static volatile int32_t x2404 = 10;
	int64_t t80 = 4060217034010892LL;

	t80 = (((x2401<=x2402)%x2403)>>x2404);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2405 = UINT64_MAX;
	int64_t x2406 = INT64_MAX;
	uint8_t x2408 = 11U;
	volatile uint32_t t81 = 0U;

	t81 = (((x2405<=x2406)%x2407)>>x2408);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2433 = INT32_MIN;
	static volatile int8_t x2434 = -1;
	volatile uint64_t x2435 = 1342286990742LLU;
	uint8_t x2436 = 3U;

	t82 = (((x2433<=x2434)%x2435)>>x2436);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2549 = 169468;
	static int16_t x2550 = 3676;
	uint16_t x2551 = 95U;
	uint64_t x2552 = 1LLU;
	static volatile int32_t t83 = 229312;

	t83 = (((x2549<=x2550)%x2551)>>x2552);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x2569 = INT64_MIN;
	static volatile uint16_t x2571 = 11U;
	uint64_t x2572 = 24LLU;
	volatile int32_t t84 = 1490;

	t84 = (((x2569<=x2570)%x2571)>>x2572);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2622 = UINT16_MAX;
	uint8_t x2623 = 9U;
	int16_t x2624 = 5;
	volatile int32_t t85 = -6;

	t85 = (((x2621<=x2622)%x2623)>>x2624);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x2641 = -1;
	int64_t x2642 = INT64_MIN;
	int64_t x2643 = -1LL;
	uint64_t x2644 = 3LLU;

	t86 = (((x2641<=x2642)%x2643)>>x2644);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2705 = 28917175LL;
	int16_t x2706 = INT16_MIN;
	uint64_t x2707 = 839755157221LLU;
	uint8_t x2708 = 2U;

	t87 = (((x2705<=x2706)%x2707)>>x2708);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2709 = INT64_MIN;
	static int16_t x2710 = -12;
	int8_t x2711 = INT8_MIN;
	uint16_t x2712 = 0U;
	volatile int32_t t88 = -10;

	t88 = (((x2709<=x2710)%x2711)>>x2712);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x2721 = 116U;
	int16_t x2723 = INT16_MAX;
	int32_t t89 = -622430;

	t89 = (((x2721<=x2722)%x2723)>>x2724);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2741 = INT8_MAX;
	uint16_t x2742 = 33U;
	uint8_t x2744 = 0U;
	int32_t t90 = -2;

	t90 = (((x2741<=x2742)%x2743)>>x2744);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2765 = 2736714837LLU;
	static int64_t x2766 = INT64_MIN;
	static volatile int64_t x2767 = INT64_MIN;
	int64_t t91 = -3LL;

	t91 = (((x2765<=x2766)%x2767)>>x2768);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2782 = INT8_MIN;
	int32_t t92 = -4000;

	t92 = (((x2781<=x2782)%x2783)>>x2784);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2842 = 16;
	uint64_t x2843 = 121LLU;
	int32_t x2844 = 2;
	uint64_t t93 = 229801710955LLU;

	t93 = (((x2841<=x2842)%x2843)>>x2844);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x2865 = UINT8_MAX;
	static int32_t x2866 = INT32_MIN;
	static int32_t x2867 = -1;
	int32_t t94 = 14273517;

	t94 = (((x2865<=x2866)%x2867)>>x2868);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2873 = UINT16_MAX;
	int64_t x2874 = -620LL;
	int8_t x2875 = INT8_MIN;
	int32_t x2876 = 6;
	volatile int32_t t95 = -34;

	t95 = (((x2873<=x2874)%x2875)>>x2876);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x2893 = -1LL;
	int32_t x2894 = INT32_MIN;
	static uint8_t x2895 = 47U;
	volatile int32_t t96 = 831;

	t96 = (((x2893<=x2894)%x2895)>>x2896);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2909 = -1;
	int64_t x2910 = INT64_MIN;
	int32_t x2911 = -1;
	static volatile uint32_t x2912 = 5U;
	volatile int32_t t97 = -442;

	t97 = (((x2909<=x2910)%x2911)>>x2912);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x2918 = INT64_MIN;
	volatile uint8_t x2919 = UINT8_MAX;
	uint16_t x2920 = 10U;
	volatile int32_t t98 = -123216;

	t98 = (((x2917<=x2918)%x2919)>>x2920);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2957 = -593606;
	int16_t x2958 = -101;
	int16_t x2959 = INT16_MAX;
	static int32_t t99 = 121;

	t99 = (((x2957<=x2958)%x2959)>>x2960);

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

