#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x13 = UINT16_MAX;
int8_t x67 = 1;
static int32_t x80 = 1241;
volatile int32_t t4 = -6358199;
uint8_t x101 = UINT8_MAX;
int32_t x126 = 250641;
static volatile int32_t t7 = -71449626;
int8_t x137 = INT8_MIN;
uint16_t x139 = 14U;
static int32_t x140 = -1;
uint16_t x223 = 3U;
static volatile int64_t t10 = 55632LL;
int64_t t11 = -65383LL;
uint16_t x246 = 13457U;
int16_t x247 = 0;
static int16_t x296 = INT16_MIN;
static int32_t x313 = INT32_MAX;
volatile int8_t x316 = INT8_MIN;
static int32_t x325 = INT32_MIN;
static int32_t t16 = -5;
volatile int32_t x338 = 141844;
int64_t x340 = INT64_MIN;
static int8_t x357 = -1;
int16_t x358 = 121;
volatile int16_t x385 = 788;
static volatile int16_t x386 = 0;
int32_t t21 = 363499;
int8_t x532 = 10;
uint32_t x597 = 190863154U;
uint16_t x598 = 2910U;
int32_t x641 = INT32_MIN;
static volatile int32_t t29 = 64798;
volatile int16_t x703 = 3;
int32_t t33 = 23;
volatile int8_t x781 = -1;
int64_t x785 = 4013452LL;
static int16_t x787 = 1;
volatile int32_t t37 = -14368879;
int8_t x797 = INT8_MIN;
uint16_t x819 = 1U;
volatile int32_t t39 = 450;
volatile uint32_t x837 = 12U;
int16_t x838 = -1;
int64_t x840 = INT64_MIN;
int8_t x858 = INT8_MIN;
uint32_t t42 = 101U;
volatile uint32_t x872 = 1555684510U;
static volatile int32_t t44 = 502;
volatile int64_t t46 = -389058855790319LL;
static uint8_t x979 = 13U;
volatile int32_t t49 = 3746408;
int16_t x1083 = 1;
int32_t x1112 = -118062;
volatile int8_t x1119 = 1;
volatile uint64_t t54 = 5781833842495635LLU;
int8_t x1125 = -1;
static int16_t x1128 = 9113;
uint64_t x1137 = UINT64_MAX;
static uint16_t x1179 = 2U;
volatile int32_t t58 = -1519;
static volatile int64_t x1206 = INT64_MIN;
int16_t x1209 = 95;
volatile uint32_t x1219 = 4U;
int16_t x1240 = -38;
int8_t x1430 = INT8_MIN;
uint64_t x1441 = UINT64_MAX;
static int16_t x1464 = INT16_MAX;
int8_t x1479 = 0;
static int8_t x1526 = INT8_MIN;
static uint8_t x1527 = 25U;
volatile uint8_t x1571 = 20U;
int64_t x1577 = INT64_MIN;
uint8_t x1578 = 5U;
int8_t x1579 = 6;
int64_t x1582 = 13247LL;
volatile uint64_t x1602 = 7630566089070LLU;
int64_t x1604 = INT64_MIN;
volatile int32_t t78 = 208532;
volatile int32_t t79 = -46;
uint16_t x1702 = 3U;
static int8_t x1716 = -1;
uint8_t x1750 = 45U;
volatile uint8_t x1752 = UINT8_MAX;
int32_t t83 = -60;
int8_t x1789 = -13;
volatile uint16_t x1791 = 1U;
static int32_t x1810 = -1;
static uint8_t x1811 = 0U;
int16_t x1812 = INT16_MIN;
int8_t x1814 = INT8_MAX;
int8_t x1816 = INT8_MAX;
static int32_t t86 = -1472910;
volatile int32_t t87 = -86;
uint8_t x1843 = 3U;
int8_t x1857 = 20;
int8_t x1858 = -41;
static int8_t x1921 = -1;
uint64_t x1978 = 61502610517256467LLU;
uint16_t x1980 = 1U;
static int64_t x2028 = -217750234094990LL;
volatile int64_t t93 = -4080529389442754923LL;
uint8_t x2059 = 1U;
int16_t x2061 = INT16_MAX;
static uint8_t x2106 = UINT8_MAX;
volatile int32_t t96 = -1;
int32_t t97 = 3;


void f0(void) {
	volatile int16_t x14 = 15512;
	volatile uint16_t x15 = 5U;
	uint8_t x16 = 5U;
	volatile int32_t t0 = -1546251;

	t0 = (((x13==x14)<<x15)%x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = 386U;
	uint8_t x55 = 20U;
	uint8_t x56 = 96U;
	volatile int32_t t1 = -628;

	t1 = (((x53==x54)<<x55)%x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x65 = INT32_MIN;
	static volatile int32_t x66 = INT32_MAX;
	volatile uint32_t x68 = 693U;
	static uint32_t t2 = 1U;

	t2 = (((x65==x66)<<x67)%x68);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x69 = -1;
	int16_t x70 = 1;
	static uint8_t x71 = 1U;
	uint32_t x72 = 43U;
	volatile uint32_t t3 = 3920314U;

	t3 = (((x69==x70)<<x71)%x72);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x77 = INT32_MAX;
	int16_t x78 = -1;
	int8_t x79 = 7;

	t4 = (((x77==x78)<<x79)%x80);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x102 = INT32_MIN;
	static uint8_t x103 = 0U;
	int32_t x104 = INT32_MIN;
	volatile int32_t t5 = -6286803;

	t5 = (((x101==x102)<<x103)%x104);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x125 = 18U;
	int8_t x127 = 14;
	uint16_t x128 = 41U;
	volatile int32_t t6 = -5329;

	t6 = (((x125==x126)<<x127)%x128);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x133 = INT16_MIN;
	uint16_t x134 = 140U;
	int8_t x135 = 23;
	volatile uint16_t x136 = UINT16_MAX;

	t7 = (((x133==x134)<<x135)%x136);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x138 = INT8_MIN;
	static volatile int32_t t8 = -485369;

	t8 = (((x137==x138)<<x139)%x140);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x149 = INT16_MIN;
	static volatile int16_t x150 = -1470;
	uint8_t x151 = 13U;
	int64_t x152 = -1LL;
	int64_t t9 = 3163496LL;

	t9 = (((x149==x150)<<x151)%x152);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x221 = INT8_MIN;
	uint16_t x222 = UINT16_MAX;
	int64_t x224 = INT64_MIN;

	t10 = (((x221==x222)<<x223)%x224);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x241 = UINT8_MAX;
	int64_t x242 = -1LL;
	int8_t x243 = 1;
	volatile int64_t x244 = 343LL;

	t11 = (((x241==x242)<<x243)%x244);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x245 = -5;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t12 = 3LLU;

	t12 = (((x245==x246)<<x247)%x248);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MAX;
	int8_t x295 = 1;
	static volatile int32_t t13 = 0;

	t13 = (((x293==x294)<<x295)%x296);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x314 = 5197440U;
	int16_t x315 = 7;
	volatile int32_t t14 = 22;

	t14 = (((x313==x314)<<x315)%x316);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x326 = -1;
	static volatile uint8_t x327 = 3U;
	volatile int8_t x328 = -1;
	volatile int32_t t15 = -3230;

	t15 = (((x325==x326)<<x327)%x328);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x329 = INT64_MIN;
	volatile uint64_t x330 = 54683747329256457LLU;
	uint64_t x331 = 1LLU;
	int8_t x332 = 3;

	t16 = (((x329==x330)<<x331)%x332);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x337 = INT32_MAX;
	volatile int16_t x339 = 1;
	int64_t t17 = 813471477007935999LL;

	t17 = (((x337==x338)<<x339)%x340);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x359 = 4;
	uint16_t x360 = UINT16_MAX;
	int32_t t18 = -1;

	t18 = (((x357==x358)<<x359)%x360);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x387 = 4;
	uint64_t x388 = UINT64_MAX;
	uint64_t t19 = 3LLU;

	t19 = (((x385==x386)<<x387)%x388);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x409 = UINT32_MAX;
	static uint8_t x410 = 62U;
	uint64_t x411 = 3LLU;
	uint8_t x412 = 2U;
	volatile int32_t t20 = 330;

	t20 = (((x409==x410)<<x411)%x412);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x453 = -1;
	uint8_t x454 = 1U;
	uint32_t x455 = 0U;
	int16_t x456 = 605;

	t21 = (((x453==x454)<<x455)%x456);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x529 = INT32_MAX;
	int32_t x530 = INT32_MIN;
	volatile uint8_t x531 = 17U;
	int32_t t22 = 54330;

	t22 = (((x529==x530)<<x531)%x532);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x541 = INT8_MIN;
	volatile uint64_t x542 = 824901251929LLU;
	int64_t x543 = 4LL;
	int16_t x544 = 7672;
	volatile int32_t t23 = -16;

	t23 = (((x541==x542)<<x543)%x544);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x599 = 31;
	volatile int32_t x600 = INT32_MAX;
	volatile int32_t t24 = 1;

	t24 = (((x597==x598)<<x599)%x600);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x613 = -1633;
	int16_t x614 = 8;
	volatile uint16_t x615 = 0U;
	volatile int16_t x616 = INT16_MAX;
	int32_t t25 = 1289232;

	t25 = (((x613==x614)<<x615)%x616);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x642 = INT64_MIN;
	uint8_t x643 = 29U;
	int8_t x644 = -1;
	volatile int32_t t26 = -8832;

	t26 = (((x641==x642)<<x643)%x644);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x661 = -6;
	static int64_t x662 = INT64_MIN;
	uint16_t x663 = 14U;
	int32_t x664 = INT32_MAX;
	int32_t t27 = -3;

	t27 = (((x661==x662)<<x663)%x664);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x673 = INT64_MIN;
	volatile uint16_t x674 = 1U;
	uint16_t x675 = 8U;
	static int8_t x676 = INT8_MAX;
	static int32_t t28 = 119751;

	t28 = (((x673==x674)<<x675)%x676);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x697 = -1;
	volatile uint64_t x698 = 194048669617LLU;
	static volatile uint32_t x699 = 0U;
	int32_t x700 = INT32_MIN;

	t29 = (((x697==x698)<<x699)%x700);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x701 = 4742445U;
	int8_t x702 = INT8_MAX;
	int64_t x704 = -55434279LL;
	volatile int64_t t30 = 4368120249LL;

	t30 = (((x701==x702)<<x703)%x704);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x713 = 0;
	int64_t x714 = 231769LL;
	uint8_t x715 = 0U;
	int16_t x716 = -2476;
	volatile int32_t t31 = -423684;

	t31 = (((x713==x714)<<x715)%x716);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x733 = INT8_MIN;
	uint32_t x734 = 23910U;
	uint16_t x735 = 8U;
	volatile int64_t x736 = INT64_MAX;
	int64_t t32 = 2LL;

	t32 = (((x733==x734)<<x735)%x736);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x741 = INT64_MIN;
	int32_t x742 = INT32_MIN;
	uint16_t x743 = 6U;
	int16_t x744 = INT16_MIN;

	t33 = (((x741==x742)<<x743)%x744);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x753 = INT16_MIN;
	int16_t x754 = INT16_MIN;
	uint8_t x755 = 0U;
	static int32_t x756 = INT32_MIN;
	volatile int32_t t34 = -13271;

	t34 = (((x753==x754)<<x755)%x756);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x769 = UINT32_MAX;
	uint64_t x770 = UINT64_MAX;
	volatile uint8_t x771 = 0U;
	int16_t x772 = -811;
	int32_t t35 = 1880;

	t35 = (((x769==x770)<<x771)%x772);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x782 = INT64_MAX;
	static uint8_t x783 = 2U;
	static int32_t x784 = -1;
	int32_t t36 = 1;

	t36 = (((x781==x782)<<x783)%x784);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x786 = 5;
	uint8_t x788 = 1U;

	t37 = (((x785==x786)<<x787)%x788);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x798 = UINT8_MAX;
	static int32_t x799 = 1;
	int16_t x800 = 1;
	volatile int32_t t38 = 119177;

	t38 = (((x797==x798)<<x799)%x800);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x817 = -1;
	int16_t x818 = INT16_MAX;
	int32_t x820 = INT32_MIN;

	t39 = (((x817==x818)<<x819)%x820);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x833 = 6224U;
	uint8_t x834 = UINT8_MAX;
	uint32_t x835 = 1U;
	int8_t x836 = INT8_MIN;
	volatile int32_t t40 = -99433;

	t40 = (((x833==x834)<<x835)%x836);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x839 = 28U;
	static int64_t t41 = 477819705LL;

	t41 = (((x837==x838)<<x839)%x840);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x857 = UINT64_MAX;
	uint32_t x859 = 0U;
	uint32_t x860 = 29041095U;

	t42 = (((x857==x858)<<x859)%x860);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x869 = 310621U;
	static int16_t x870 = -1;
	volatile int8_t x871 = 1;
	volatile uint32_t t43 = 4297U;

	t43 = (((x869==x870)<<x871)%x872);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x885 = 131;
	int64_t x886 = INT64_MIN;
	static volatile int16_t x887 = 2;
	static int16_t x888 = INT16_MAX;

	t44 = (((x885==x886)<<x887)%x888);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x901 = -58539;
	volatile uint64_t x902 = 3482522951833964565LLU;
	uint8_t x903 = 14U;
	static uint8_t x904 = 37U;
	int32_t t45 = -20;

	t45 = (((x901==x902)<<x903)%x904);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x957 = 15U;
	int8_t x958 = INT8_MIN;
	uint8_t x959 = 3U;
	int64_t x960 = INT64_MIN;

	t46 = (((x957==x958)<<x959)%x960);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x977 = 5239431U;
	uint64_t x978 = UINT64_MAX;
	uint64_t x980 = UINT64_MAX;
	volatile uint64_t t47 = 23798LLU;

	t47 = (((x977==x978)<<x979)%x980);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1021 = INT8_MIN;
	int32_t x1022 = INT32_MAX;
	uint8_t x1023 = 5U;
	int16_t x1024 = INT16_MIN;
	int32_t t48 = 1;

	t48 = (((x1021==x1022)<<x1023)%x1024);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1029 = 37U;
	int32_t x1030 = -176353;
	volatile uint8_t x1031 = 1U;
	uint8_t x1032 = 83U;

	t49 = (((x1029==x1030)<<x1031)%x1032);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1081 = -1;
	int64_t x1082 = 3476376858516660017LL;
	int64_t x1084 = 37305231564LL;
	static volatile int64_t t50 = -10796022751139236LL;

	t50 = (((x1081==x1082)<<x1083)%x1084);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1093 = 1679431;
	int8_t x1094 = -13;
	int16_t x1095 = 0;
	int16_t x1096 = -1;
	volatile int32_t t51 = 491;

	t51 = (((x1093==x1094)<<x1095)%x1096);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1101 = -29;
	int16_t x1102 = -2633;
	uint64_t x1103 = 2LLU;
	static int32_t x1104 = -1;
	int32_t t52 = -5587;

	t52 = (((x1101==x1102)<<x1103)%x1104);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1109 = INT16_MAX;
	static int32_t x1110 = -2;
	int8_t x1111 = 20;
	volatile int32_t t53 = 58;

	t53 = (((x1109==x1110)<<x1111)%x1112);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1117 = UINT16_MAX;
	int16_t x1118 = -1;
	uint64_t x1120 = 119163733054695LLU;

	t54 = (((x1117==x1118)<<x1119)%x1120);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1126 = 772LL;
	int8_t x1127 = 10;
	int32_t t55 = 1849;

	t55 = (((x1125==x1126)<<x1127)%x1128);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1133 = INT8_MAX;
	static int8_t x1134 = INT8_MIN;
	uint8_t x1135 = 2U;
	volatile uint16_t x1136 = UINT16_MAX;
	volatile int32_t t56 = -1656125;

	t56 = (((x1133==x1134)<<x1135)%x1136);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1138 = 1U;
	static int8_t x1139 = 28;
	static uint64_t x1140 = 4174688LLU;
	volatile uint64_t t57 = 35020140852495LLU;

	t57 = (((x1137==x1138)<<x1139)%x1140);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1177 = -1033116372;
	int16_t x1178 = 0;
	volatile int32_t x1180 = -1;

	t58 = (((x1177==x1178)<<x1179)%x1180);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1205 = -13190;
	static uint16_t x1207 = 28U;
	volatile uint32_t x1208 = UINT32_MAX;
	volatile uint32_t t59 = 20U;

	t59 = (((x1205==x1206)<<x1207)%x1208);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1210 = 0;
	volatile uint16_t x1211 = 2U;
	int64_t x1212 = INT64_MAX;
	static int64_t t60 = 1580059LL;

	t60 = (((x1209==x1210)<<x1211)%x1212);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1217 = -1LL;
	volatile int64_t x1218 = INT64_MIN;
	int16_t x1220 = INT16_MAX;
	static volatile int32_t t61 = 572;

	t61 = (((x1217==x1218)<<x1219)%x1220);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x1237 = 1480141866756429376LL;
	int32_t x1238 = INT32_MIN;
	volatile uint8_t x1239 = 14U;
	int32_t t62 = -32382326;

	t62 = (((x1237==x1238)<<x1239)%x1240);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x1265 = INT64_MIN;
	uint32_t x1266 = 12620U;
	int8_t x1267 = 8;
	int8_t x1268 = INT8_MAX;
	int32_t t63 = -827;

	t63 = (((x1265==x1266)<<x1267)%x1268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1321 = 1573551568830LLU;
	int16_t x1322 = INT16_MIN;
	uint16_t x1323 = 0U;
	int16_t x1324 = INT16_MAX;
	int32_t t64 = -69978654;

	t64 = (((x1321==x1322)<<x1323)%x1324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1385 = INT16_MAX;
	uint8_t x1386 = 3U;
	uint8_t x1387 = 7U;
	int16_t x1388 = -1;
	volatile int32_t t65 = -7;

	t65 = (((x1385==x1386)<<x1387)%x1388);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x1389 = 1;
	uint8_t x1390 = 58U;
	uint8_t x1391 = 3U;
	volatile int8_t x1392 = INT8_MIN;
	static int32_t t66 = 6452;

	t66 = (((x1389==x1390)<<x1391)%x1392);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1429 = INT16_MAX;
	static uint8_t x1431 = 1U;
	volatile int8_t x1432 = INT8_MIN;
	volatile int32_t t67 = 58;

	t67 = (((x1429==x1430)<<x1431)%x1432);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x1442 = -4;
	static uint8_t x1443 = 6U;
	int64_t x1444 = INT64_MIN;
	volatile int64_t t68 = -92LL;

	t68 = (((x1441==x1442)<<x1443)%x1444);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1461 = INT32_MAX;
	uint16_t x1462 = 3515U;
	int16_t x1463 = 16;
	int32_t t69 = -7371;

	t69 = (((x1461==x1462)<<x1463)%x1464);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x1477 = INT16_MIN;
	int32_t x1478 = INT32_MIN;
	volatile int32_t x1480 = INT32_MIN;
	int32_t t70 = -164;

	t70 = (((x1477==x1478)<<x1479)%x1480);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x1525 = -58;
	volatile int8_t x1528 = INT8_MIN;
	volatile int32_t t71 = -1629870;

	t71 = (((x1525==x1526)<<x1527)%x1528);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x1553 = 1;
	static uint8_t x1554 = UINT8_MAX;
	uint16_t x1555 = 12U;
	int32_t x1556 = INT32_MIN;
	volatile int32_t t72 = -460934;

	t72 = (((x1553==x1554)<<x1555)%x1556);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x1569 = 1;
	volatile int32_t x1570 = INT32_MIN;
	volatile int8_t x1572 = INT8_MIN;
	int32_t t73 = -34;

	t73 = (((x1569==x1570)<<x1571)%x1572);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x1580 = -1;
	volatile int32_t t74 = 109;

	t74 = (((x1577==x1578)<<x1579)%x1580);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x1581 = INT8_MAX;
	static uint8_t x1583 = 1U;
	volatile uint64_t x1584 = UINT64_MAX;
	uint64_t t75 = 11282986LLU;

	t75 = (((x1581==x1582)<<x1583)%x1584);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x1601 = 379U;
	volatile int8_t x1603 = 3;
	volatile int64_t t76 = -1657451437586335187LL;

	t76 = (((x1601==x1602)<<x1603)%x1604);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1629 = -1;
	static int8_t x1630 = -7;
	int8_t x1631 = 1;
	int16_t x1632 = INT16_MIN;
	int32_t t77 = 2;

	t77 = (((x1629==x1630)<<x1631)%x1632);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1645 = 1U;
	uint64_t x1646 = UINT64_MAX;
	uint8_t x1647 = 1U;
	int32_t x1648 = -1;

	t78 = (((x1645==x1646)<<x1647)%x1648);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1685 = 1635116U;
	int64_t x1686 = -2647856902663LL;
	int8_t x1687 = 30;
	int8_t x1688 = -13;

	t79 = (((x1685==x1686)<<x1687)%x1688);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x1701 = 30U;
	volatile uint8_t x1703 = 1U;
	static uint32_t x1704 = UINT32_MAX;
	volatile uint32_t t80 = 657U;

	t80 = (((x1701==x1702)<<x1703)%x1704);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x1709 = UINT16_MAX;
	int16_t x1710 = INT16_MAX;
	uint8_t x1711 = 1U;
	uint32_t x1712 = 21819U;
	uint32_t t81 = 447U;

	t81 = (((x1709==x1710)<<x1711)%x1712);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x1713 = INT32_MIN;
	uint64_t x1714 = 14707896363845LLU;
	uint8_t x1715 = 9U;
	static int32_t t82 = -4552628;

	t82 = (((x1713==x1714)<<x1715)%x1716);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x1749 = INT32_MIN;
	volatile int16_t x1751 = 27;

	t83 = (((x1749==x1750)<<x1751)%x1752);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1790 = -1;
	int32_t x1792 = INT32_MAX;
	static volatile int32_t t84 = -28;

	t84 = (((x1789==x1790)<<x1791)%x1792);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1809 = UINT32_MAX;
	int32_t t85 = 363024569;

	t85 = (((x1809==x1810)<<x1811)%x1812);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x1813 = INT64_MIN;
	uint8_t x1815 = 0U;

	t86 = (((x1813==x1814)<<x1815)%x1816);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x1837 = INT8_MIN;
	uint16_t x1838 = 11U;
	int8_t x1839 = 5;
	int8_t x1840 = 5;

	t87 = (((x1837==x1838)<<x1839)%x1840);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1841 = -2;
	static int8_t x1842 = INT8_MIN;
	int32_t x1844 = INT32_MAX;
	volatile int32_t t88 = -714113;

	t88 = (((x1841==x1842)<<x1843)%x1844);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x1859 = 17U;
	int16_t x1860 = -51;
	volatile int32_t t89 = 103;

	t89 = (((x1857==x1858)<<x1859)%x1860);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1922 = 2120641853274716LL;
	uint8_t x1923 = 0U;
	int16_t x1924 = -48;
	static volatile int32_t t90 = -985565;

	t90 = (((x1921==x1922)<<x1923)%x1924);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x1969 = 1325065LLU;
	static volatile uint8_t x1970 = 107U;
	int64_t x1971 = 4LL;
	int16_t x1972 = INT16_MAX;
	volatile int32_t t91 = 0;

	t91 = (((x1969==x1970)<<x1971)%x1972);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1977 = 6U;
	volatile uint8_t x1979 = 24U;
	int32_t t92 = -2;

	t92 = (((x1977==x1978)<<x1979)%x1980);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2025 = 0U;
	uint32_t x2026 = UINT32_MAX;
	static int8_t x2027 = 3;

	t93 = (((x2025==x2026)<<x2027)%x2028);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x2057 = INT64_MIN;
	int32_t x2058 = 0;
	volatile int8_t x2060 = INT8_MIN;
	volatile int32_t t94 = -128660839;

	t94 = (((x2057==x2058)<<x2059)%x2060);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2062 = 20;
	uint16_t x2063 = 0U;
	static int64_t x2064 = -1LL;
	int64_t t95 = 3971867127LL;

	t95 = (((x2061==x2062)<<x2063)%x2064);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2105 = 17;
	uint8_t x2107 = 1U;
	int32_t x2108 = -1;

	t96 = (((x2105==x2106)<<x2107)%x2108);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2109 = INT8_MIN;
	uint64_t x2110 = 1972576LLU;
	uint16_t x2111 = 1U;
	volatile int32_t x2112 = INT32_MAX;

	t97 = (((x2109==x2110)<<x2111)%x2112);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x2117 = UINT32_MAX;
	int32_t x2118 = INT32_MAX;
	static int32_t x2119 = 3;
	int64_t x2120 = -1LL;
	int64_t t98 = 1LL;

	t98 = (((x2117==x2118)<<x2119)%x2120);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x2137 = 0LLU;
	int32_t x2138 = -1;
	uint8_t x2139 = 0U;
	static uint16_t x2140 = UINT16_MAX;
	static volatile int32_t t99 = -12201930;

	t99 = (((x2137==x2138)<<x2139)%x2140);

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

