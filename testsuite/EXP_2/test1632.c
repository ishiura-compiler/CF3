#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x64 = 3U;
uint32_t x109 = 232U;
uint16_t x112 = 7U;
int32_t t2 = -126;
static int32_t x117 = INT32_MIN;
uint8_t x120 = 0U;
int32_t t3 = 27;
uint32_t x210 = 2688745U;
int32_t x214 = INT32_MIN;
int8_t x220 = 6;
volatile uint32_t x249 = 3994038U;
uint32_t x252 = 1U;
volatile int32_t t11 = 12;
volatile uint16_t x429 = UINT16_MAX;
int64_t x534 = -1LL;
static uint64_t x535 = UINT64_MAX;
uint16_t x536 = 7U;
int32_t t16 = 31;
int32_t x546 = -1;
int16_t x589 = -1;
volatile int8_t x619 = INT8_MIN;
uint16_t x803 = UINT16_MAX;
volatile int16_t x819 = -1;
volatile int32_t t25 = -422467;
static int16_t x839 = 47;
volatile int32_t x990 = -1015244;
uint8_t x997 = UINT8_MAX;
static uint16_t x1000 = 0U;
volatile int32_t x1083 = INT32_MIN;
int16_t x1127 = INT16_MIN;
volatile uint16_t x1130 = UINT16_MAX;
int16_t x1157 = -1;
int32_t x1259 = INT32_MIN;
uint8_t x1260 = 0U;
int32_t x1269 = INT32_MAX;
volatile int8_t x1270 = INT8_MIN;
int32_t t38 = 12;
int64_t x1325 = INT64_MIN;
int64_t x1326 = 292192LL;
int16_t x1518 = -3;
int32_t x1519 = -1;
static uint16_t x1541 = 2878U;
static uint64_t x1601 = 3LLU;
uint16_t x1604 = 1U;
volatile int64_t x1686 = INT64_MIN;
static uint16_t x1721 = 1168U;
int32_t x1722 = 7874826;
static int64_t x1782 = INT64_MIN;
static int32_t t49 = -236;
volatile int16_t x1796 = 31;
static uint16_t x1971 = 27009U;
static int16_t x1972 = 0;
int32_t x2093 = -9126;
static int32_t t59 = -158367;
static uint32_t x2111 = 7981U;
int32_t t60 = 27371194;
static volatile uint64_t x2119 = 1658235275LLU;
uint8_t x2120 = 2U;
uint32_t x2153 = UINT32_MAX;
int16_t x2163 = 8910;
uint32_t x2164 = 22U;
uint16_t x2217 = 19U;
static volatile int32_t t65 = -27643101;
uint8_t x2232 = 0U;
int16_t x2274 = INT16_MIN;
uint32_t x2277 = 20U;
static volatile int32_t t69 = 2175;
uint8_t x2339 = 6U;
int32_t t70 = -6639892;
uint16_t x2352 = 1U;
static int8_t x2376 = 3;
uint16_t x2422 = UINT16_MAX;
static int64_t x2447 = -1LL;
int64_t x2585 = INT64_MIN;
int32_t x2586 = -1;
int32_t x2591 = INT32_MIN;
int32_t t77 = -7586;
static int8_t x2651 = INT8_MIN;
int32_t x2749 = INT32_MIN;
int64_t x2763 = -1659975512LL;
volatile uint64_t x2771 = UINT64_MAX;
uint8_t x2772 = 8U;
volatile int32_t t86 = -5674;
int32_t t87 = -962;
int8_t x2857 = INT8_MIN;
int32_t t89 = -1811;
volatile int8_t x2945 = INT8_MAX;
static uint64_t x3022 = UINT64_MAX;
static int32_t x3102 = 195254634;
static volatile int32_t t92 = 36;
volatile int8_t x3170 = -1;
volatile int32_t t93 = 496;
int64_t x3182 = INT64_MAX;
uint32_t x3236 = 3U;


void f0(void) {
	int64_t x61 = -1LL;
	int16_t x62 = INT16_MIN;
	int16_t x63 = -1;
	int32_t t0 = -15;

	t0 = ((x61<(x62<=x63))>>x64);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x69 = 1;
	volatile int8_t x70 = INT8_MAX;
	uint8_t x71 = 22U;
	int16_t x72 = 1;
	volatile int32_t t1 = 1;

	t1 = ((x69<(x70<=x71))>>x72);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x110 = INT64_MIN;
	int8_t x111 = 1;

	t2 = ((x109<(x110<=x111))>>x112);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x118 = 2;
	int32_t x119 = INT32_MAX;

	t3 = ((x117<(x118<=x119))>>x120);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x193 = -2037;
	uint8_t x194 = 51U;
	static uint64_t x195 = 79800370503689230LLU;
	int16_t x196 = 0;
	int32_t t4 = -9;

	t4 = ((x193<(x194<=x195))>>x196);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x197 = INT64_MIN;
	static volatile uint32_t x198 = 87768366U;
	int64_t x199 = INT64_MIN;
	uint8_t x200 = 9U;
	volatile int32_t t5 = -13;

	t5 = ((x197<(x198<=x199))>>x200);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x209 = 0U;
	static int32_t x211 = INT32_MIN;
	uint8_t x212 = 3U;
	volatile int32_t t6 = -57803;

	t6 = ((x209<(x210<=x211))>>x212);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x213 = 10U;
	uint8_t x215 = UINT8_MAX;
	volatile uint8_t x216 = 30U;
	volatile int32_t t7 = 556277;

	t7 = ((x213<(x214<=x215))>>x216);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x217 = -1LL;
	int8_t x218 = INT8_MAX;
	volatile uint8_t x219 = UINT8_MAX;
	volatile int32_t t8 = -64356216;

	t8 = ((x217<(x218<=x219))>>x220);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x250 = UINT64_MAX;
	int8_t x251 = -1;
	int32_t t9 = -2;

	t9 = ((x249<(x250<=x251))>>x252);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	int32_t x299 = -1;
	static volatile int64_t x300 = 7LL;
	static int32_t t10 = -1;

	t10 = ((x297<(x298<=x299))>>x300);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int32_t x330 = INT32_MAX;
	int64_t x331 = INT64_MIN;
	static uint8_t x332 = 1U;

	t11 = ((x329<(x330<=x331))>>x332);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x425 = INT16_MIN;
	volatile int8_t x426 = 8;
	static volatile int32_t x427 = INT32_MAX;
	int8_t x428 = 19;
	static int32_t t12 = 254266;

	t12 = ((x425<(x426<=x427))>>x428);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x430 = -15995296823LL;
	int16_t x431 = -13213;
	uint8_t x432 = 5U;
	int32_t t13 = 802645686;

	t13 = ((x429<(x430<=x431))>>x432);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x505 = 40096U;
	uint32_t x506 = UINT32_MAX;
	static int8_t x507 = -54;
	volatile int64_t x508 = 19LL;
	int32_t t14 = 99996250;

	t14 = ((x505<(x506<=x507))>>x508);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x533 = 57U;
	static int32_t t15 = -29;

	t15 = ((x533<(x534<=x535))>>x536);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x541 = -75087891318002351LL;
	volatile uint16_t x542 = 1612U;
	volatile uint16_t x543 = 79U;
	uint8_t x544 = 4U;

	t16 = ((x541<(x542<=x543))>>x544);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x545 = -1;
	int8_t x547 = INT8_MIN;
	int16_t x548 = 5;
	static int32_t t17 = 34279341;

	t17 = ((x545<(x546<=x547))>>x548);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x585 = -1LL;
	int64_t x586 = INT64_MIN;
	static int16_t x587 = -3445;
	static int8_t x588 = 14;
	static int32_t t18 = -205;

	t18 = ((x585<(x586<=x587))>>x588);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x590 = INT16_MAX;
	static int16_t x591 = 13;
	uint32_t x592 = 5U;
	int32_t t19 = 28429739;

	t19 = ((x589<(x590<=x591))>>x592);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x593 = 6920191249968114537LLU;
	int32_t x594 = INT32_MIN;
	volatile int16_t x595 = INT16_MAX;
	uint32_t x596 = 3U;
	int32_t t20 = 86952;

	t20 = ((x593<(x594<=x595))>>x596);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x617 = -51563609626LL;
	static int16_t x618 = INT16_MIN;
	int64_t x620 = 10LL;
	int32_t t21 = -2696475;

	t21 = ((x617<(x618<=x619))>>x620);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x657 = INT16_MAX;
	int32_t x658 = INT32_MIN;
	int64_t x659 = INT64_MIN;
	int32_t x660 = 0;
	volatile int32_t t22 = -566;

	t22 = ((x657<(x658<=x659))>>x660);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x801 = INT8_MAX;
	uint16_t x802 = UINT16_MAX;
	static uint8_t x804 = 14U;
	int32_t t23 = -662322672;

	t23 = ((x801<(x802<=x803))>>x804);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x817 = UINT64_MAX;
	int64_t x818 = INT64_MIN;
	int16_t x820 = 3;
	volatile int32_t t24 = -113374569;

	t24 = ((x817<(x818<=x819))>>x820);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x833 = 32063540783LLU;
	int32_t x834 = INT32_MIN;
	static int16_t x835 = -1;
	volatile int8_t x836 = 0;

	t25 = ((x833<(x834<=x835))>>x836);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x837 = INT8_MIN;
	int8_t x838 = INT8_MIN;
	uint16_t x840 = 1U;
	volatile int32_t t26 = -234;

	t26 = ((x837<(x838<=x839))>>x840);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x881 = INT64_MIN;
	int8_t x882 = 63;
	int16_t x883 = INT16_MIN;
	static uint8_t x884 = 0U;
	int32_t t27 = 530645807;

	t27 = ((x881<(x882<=x883))>>x884);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x989 = 15937;
	int8_t x991 = INT8_MIN;
	static volatile uint8_t x992 = 0U;
	static int32_t t28 = 3897;

	t28 = ((x989<(x990<=x991))>>x992);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x998 = 8799U;
	volatile uint32_t x999 = 31463890U;
	static volatile int32_t t29 = 899;

	t29 = ((x997<(x998<=x999))>>x1000);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1017 = INT8_MAX;
	volatile int16_t x1018 = -1;
	uint64_t x1019 = UINT64_MAX;
	int8_t x1020 = 1;
	int32_t t30 = 1936;

	t30 = ((x1017<(x1018<=x1019))>>x1020);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1081 = INT8_MIN;
	volatile int8_t x1082 = -1;
	volatile int8_t x1084 = 13;
	int32_t t31 = 4340;

	t31 = ((x1081<(x1082<=x1083))>>x1084);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x1085 = INT8_MIN;
	int32_t x1086 = INT32_MIN;
	int16_t x1087 = INT16_MIN;
	static int32_t x1088 = 5;
	volatile int32_t t32 = -7336562;

	t32 = ((x1085<(x1086<=x1087))>>x1088);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1125 = -19;
	int64_t x1126 = -1LL;
	volatile uint16_t x1128 = 3U;
	static int32_t t33 = -171235;

	t33 = ((x1125<(x1126<=x1127))>>x1128);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1129 = INT64_MIN;
	static int8_t x1131 = INT8_MAX;
	uint8_t x1132 = 27U;
	int32_t t34 = -140153977;

	t34 = ((x1129<(x1130<=x1131))>>x1132);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1158 = 11U;
	volatile int8_t x1159 = -1;
	static volatile uint32_t x1160 = 24U;
	static int32_t t35 = 143078019;

	t35 = ((x1157<(x1158<=x1159))>>x1160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1257 = -1;
	int8_t x1258 = INT8_MIN;
	static int32_t t36 = 167;

	t36 = ((x1257<(x1258<=x1259))>>x1260);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1265 = -1LL;
	volatile int8_t x1266 = INT8_MAX;
	volatile uint16_t x1267 = 388U;
	uint8_t x1268 = 14U;
	volatile int32_t t37 = -16;

	t37 = ((x1265<(x1266<=x1267))>>x1268);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1271 = 15LLU;
	uint8_t x1272 = 18U;

	t38 = ((x1269<(x1270<=x1271))>>x1272);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1277 = UINT32_MAX;
	volatile int16_t x1278 = -3161;
	static uint32_t x1279 = 3U;
	uint8_t x1280 = 2U;
	int32_t t39 = -1;

	t39 = ((x1277<(x1278<=x1279))>>x1280);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1327 = 1U;
	int8_t x1328 = 5;
	volatile int32_t t40 = -406030;

	t40 = ((x1325<(x1326<=x1327))>>x1328);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x1397 = UINT32_MAX;
	uint64_t x1398 = 15LLU;
	int32_t x1399 = INT32_MIN;
	uint8_t x1400 = 2U;
	volatile int32_t t41 = -9;

	t41 = ((x1397<(x1398<=x1399))>>x1400);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x1517 = -1;
	uint8_t x1520 = 2U;
	volatile int32_t t42 = 13;

	t42 = ((x1517<(x1518<=x1519))>>x1520);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1542 = 832464U;
	int32_t x1543 = INT32_MAX;
	uint8_t x1544 = 7U;
	volatile int32_t t43 = 4247;

	t43 = ((x1541<(x1542<=x1543))>>x1544);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1602 = INT8_MIN;
	volatile uint16_t x1603 = UINT16_MAX;
	int32_t t44 = -80;

	t44 = ((x1601<(x1602<=x1603))>>x1604);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1653 = UINT32_MAX;
	uint8_t x1654 = UINT8_MAX;
	int16_t x1655 = 49;
	uint8_t x1656 = 14U;
	int32_t t45 = -21;

	t45 = ((x1653<(x1654<=x1655))>>x1656);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1657 = -3;
	int64_t x1658 = -1LL;
	static volatile int16_t x1659 = -794;
	int16_t x1660 = 4;
	int32_t t46 = -12;

	t46 = ((x1657<(x1658<=x1659))>>x1660);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1685 = 2;
	volatile int16_t x1687 = INT16_MIN;
	static int16_t x1688 = 0;
	static volatile int32_t t47 = -3;

	t47 = ((x1685<(x1686<=x1687))>>x1688);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1723 = 6U;
	uint16_t x1724 = 6U;
	volatile int32_t t48 = -1950968;

	t48 = ((x1721<(x1722<=x1723))>>x1724);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1781 = UINT16_MAX;
	int16_t x1783 = 755;
	uint32_t x1784 = 0U;

	t49 = ((x1781<(x1782<=x1783))>>x1784);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1793 = UINT8_MAX;
	static volatile int16_t x1794 = -1;
	int8_t x1795 = INT8_MIN;
	int32_t t50 = 27;

	t50 = ((x1793<(x1794<=x1795))>>x1796);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x1841 = 30998U;
	volatile int64_t x1842 = INT64_MIN;
	static int16_t x1843 = -1;
	static int32_t x1844 = 1;
	int32_t t51 = -639458824;

	t51 = ((x1841<(x1842<=x1843))>>x1844);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1845 = INT8_MAX;
	int32_t x1846 = -1;
	int64_t x1847 = INT64_MAX;
	static uint64_t x1848 = 4LLU;
	static volatile int32_t t52 = -38;

	t52 = ((x1845<(x1846<=x1847))>>x1848);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1909 = -1LL;
	uint16_t x1910 = 136U;
	volatile uint16_t x1911 = UINT16_MAX;
	uint8_t x1912 = 3U;
	int32_t t53 = 11636;

	t53 = ((x1909<(x1910<=x1911))>>x1912);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1941 = 98;
	uint16_t x1942 = 9505U;
	uint8_t x1943 = 3U;
	uint8_t x1944 = 3U;
	int32_t t54 = -990126442;

	t54 = ((x1941<(x1942<=x1943))>>x1944);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1953 = -1;
	volatile int8_t x1954 = INT8_MIN;
	static uint8_t x1955 = 3U;
	volatile uint8_t x1956 = 6U;
	int32_t t55 = -2;

	t55 = ((x1953<(x1954<=x1955))>>x1956);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1969 = -1977;
	volatile uint8_t x1970 = UINT8_MAX;
	int32_t t56 = 6542720;

	t56 = ((x1969<(x1970<=x1971))>>x1972);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x1997 = 51U;
	uint32_t x1998 = 0U;
	uint8_t x1999 = 2U;
	uint8_t x2000 = 5U;
	volatile int32_t t57 = 1012935;

	t57 = ((x1997<(x1998<=x1999))>>x2000);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2089 = -16;
	volatile int8_t x2090 = INT8_MIN;
	static volatile uint8_t x2091 = 4U;
	uint16_t x2092 = 2U;
	volatile int32_t t58 = -32131978;

	t58 = ((x2089<(x2090<=x2091))>>x2092);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2094 = UINT8_MAX;
	volatile int32_t x2095 = INT32_MIN;
	uint8_t x2096 = 13U;

	t59 = ((x2093<(x2094<=x2095))>>x2096);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2109 = 593;
	int32_t x2110 = -1;
	uint16_t x2112 = 15U;

	t60 = ((x2109<(x2110<=x2111))>>x2112);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x2117 = -79;
	volatile uint8_t x2118 = 6U;
	volatile int32_t t61 = 0;

	t61 = ((x2117<(x2118<=x2119))>>x2120);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2137 = 1267199977LL;
	int16_t x2138 = INT16_MAX;
	static int16_t x2139 = INT16_MIN;
	static uint16_t x2140 = 1U;
	int32_t t62 = -3691;

	t62 = ((x2137<(x2138<=x2139))>>x2140);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2154 = INT64_MAX;
	uint16_t x2155 = 48U;
	int8_t x2156 = 28;
	volatile int32_t t63 = 60;

	t63 = ((x2153<(x2154<=x2155))>>x2156);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2161 = INT16_MIN;
	uint8_t x2162 = 7U;
	volatile int32_t t64 = 276;

	t64 = ((x2161<(x2162<=x2163))>>x2164);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x2218 = UINT16_MAX;
	static uint8_t x2219 = 49U;
	int32_t x2220 = 0;

	t65 = ((x2217<(x2218<=x2219))>>x2220);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2229 = 113191U;
	int8_t x2230 = INT8_MIN;
	int8_t x2231 = 0;
	int32_t t66 = 541;

	t66 = ((x2229<(x2230<=x2231))>>x2232);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2273 = 0;
	static int32_t x2275 = INT32_MIN;
	static int8_t x2276 = 3;
	int32_t t67 = -1047457;

	t67 = ((x2273<(x2274<=x2275))>>x2276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2278 = 38U;
	int8_t x2279 = -1;
	static volatile uint8_t x2280 = 0U;
	volatile int32_t t68 = 483268721;

	t68 = ((x2277<(x2278<=x2279))>>x2280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2301 = INT16_MIN;
	uint16_t x2302 = 5053U;
	static uint32_t x2303 = 357787879U;
	uint8_t x2304 = 23U;

	t69 = ((x2301<(x2302<=x2303))>>x2304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x2337 = -2;
	int32_t x2338 = INT32_MAX;
	uint8_t x2340 = 8U;

	t70 = ((x2337<(x2338<=x2339))>>x2340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2349 = 0;
	uint32_t x2350 = UINT32_MAX;
	volatile int32_t x2351 = -1;
	static volatile int32_t t71 = -261;

	t71 = ((x2349<(x2350<=x2351))>>x2352);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2357 = -1;
	static volatile int8_t x2358 = INT8_MIN;
	volatile int8_t x2359 = 13;
	int16_t x2360 = 6;
	volatile int32_t t72 = -4115;

	t72 = ((x2357<(x2358<=x2359))>>x2360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x2373 = 13;
	static int64_t x2374 = INT64_MIN;
	static int32_t x2375 = 1035747;
	int32_t t73 = -1981012;

	t73 = ((x2373<(x2374<=x2375))>>x2376);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2421 = INT16_MIN;
	static int16_t x2423 = INT16_MAX;
	static uint64_t x2424 = 26LLU;
	static volatile int32_t t74 = -15328708;

	t74 = ((x2421<(x2422<=x2423))>>x2424);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2445 = INT16_MIN;
	int32_t x2446 = INT32_MIN;
	uint16_t x2448 = 13U;
	volatile int32_t t75 = 4;

	t75 = ((x2445<(x2446<=x2447))>>x2448);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2587 = INT8_MIN;
	static int8_t x2588 = 16;
	volatile int32_t t76 = 266540799;

	t76 = ((x2585<(x2586<=x2587))>>x2588);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x2589 = UINT8_MAX;
	static int8_t x2590 = -3;
	int8_t x2592 = 0;

	t77 = ((x2589<(x2590<=x2591))>>x2592);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x2597 = -1;
	int16_t x2598 = INT16_MIN;
	static volatile int16_t x2599 = INT16_MIN;
	uint8_t x2600 = 1U;
	int32_t t78 = -347;

	t78 = ((x2597<(x2598<=x2599))>>x2600);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2609 = INT16_MIN;
	int8_t x2610 = INT8_MAX;
	int32_t x2611 = 80;
	uint16_t x2612 = 27U;
	int32_t t79 = 10499794;

	t79 = ((x2609<(x2610<=x2611))>>x2612);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2621 = 5U;
	uint8_t x2622 = UINT8_MAX;
	int64_t x2623 = -1LL;
	int8_t x2624 = 0;
	volatile int32_t t80 = -2;

	t80 = ((x2621<(x2622<=x2623))>>x2624);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2629 = INT16_MIN;
	int64_t x2630 = INT64_MAX;
	int64_t x2631 = -649353639223269579LL;
	volatile int8_t x2632 = 8;
	int32_t t81 = -3;

	t81 = ((x2629<(x2630<=x2631))>>x2632);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2649 = 11812267;
	int16_t x2650 = INT16_MIN;
	uint8_t x2652 = 1U;
	static int32_t t82 = 31047;

	t82 = ((x2649<(x2650<=x2651))>>x2652);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2701 = INT64_MIN;
	uint16_t x2702 = UINT16_MAX;
	static uint64_t x2703 = UINT64_MAX;
	volatile uint8_t x2704 = 1U;
	int32_t t83 = -8264;

	t83 = ((x2701<(x2702<=x2703))>>x2704);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x2750 = 398776529U;
	int8_t x2751 = INT8_MIN;
	uint8_t x2752 = 1U;
	volatile int32_t t84 = 760633525;

	t84 = ((x2749<(x2750<=x2751))>>x2752);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2761 = INT32_MAX;
	int64_t x2762 = -7219942108647LL;
	uint8_t x2764 = 21U;
	int32_t t85 = -1108514;

	t85 = ((x2761<(x2762<=x2763))>>x2764);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2769 = INT8_MAX;
	int8_t x2770 = -1;

	t86 = ((x2769<(x2770<=x2771))>>x2772);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2781 = 30LLU;
	uint64_t x2782 = 2471708967126523122LLU;
	volatile uint8_t x2783 = 14U;
	int8_t x2784 = 1;

	t87 = ((x2781<(x2782<=x2783))>>x2784);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2858 = INT32_MIN;
	static int64_t x2859 = 8966175791834LL;
	uint8_t x2860 = 0U;
	static volatile int32_t t88 = 30;

	t88 = ((x2857<(x2858<=x2859))>>x2860);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2909 = INT64_MIN;
	volatile int32_t x2910 = INT32_MAX;
	static int64_t x2911 = 4218322847202557006LL;
	uint16_t x2912 = 1U;

	t89 = ((x2909<(x2910<=x2911))>>x2912);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2946 = INT8_MIN;
	volatile int64_t x2947 = INT64_MIN;
	int8_t x2948 = 3;
	volatile int32_t t90 = 3;

	t90 = ((x2945<(x2946<=x2947))>>x2948);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3021 = 2516U;
	uint8_t x3023 = 11U;
	int8_t x3024 = 6;
	static volatile int32_t t91 = -43;

	t91 = ((x3021<(x3022<=x3023))>>x3024);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x3101 = 11517029557323790LLU;
	int32_t x3103 = 88;
	int64_t x3104 = 6LL;

	t92 = ((x3101<(x3102<=x3103))>>x3104);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3169 = INT32_MAX;
	int32_t x3171 = INT32_MAX;
	uint8_t x3172 = 4U;

	t93 = ((x3169<(x3170<=x3171))>>x3172);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3177 = -1;
	uint64_t x3178 = 2868179507814LLU;
	static uint8_t x3179 = 2U;
	static int16_t x3180 = 1;
	static volatile int32_t t94 = 484;

	t94 = ((x3177<(x3178<=x3179))>>x3180);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3181 = INT8_MAX;
	static uint8_t x3183 = 2U;
	int8_t x3184 = 2;
	volatile int32_t t95 = 42211703;

	t95 = ((x3181<(x3182<=x3183))>>x3184);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3185 = 1;
	uint16_t x3186 = UINT16_MAX;
	int16_t x3187 = INT16_MAX;
	uint32_t x3188 = 4U;
	volatile int32_t t96 = 52;

	t96 = ((x3185<(x3186<=x3187))>>x3188);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3201 = INT32_MIN;
	static int32_t x3202 = 277758;
	static int8_t x3203 = 0;
	uint8_t x3204 = 0U;
	volatile int32_t t97 = -1749436;

	t97 = ((x3201<(x3202<=x3203))>>x3204);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x3229 = INT16_MIN;
	static int64_t x3230 = -13150648LL;
	int8_t x3231 = INT8_MAX;
	int8_t x3232 = 0;
	volatile int32_t t98 = 674;

	t98 = ((x3229<(x3230<=x3231))>>x3232);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x3233 = -1;
	int8_t x3234 = -28;
	volatile int64_t x3235 = INT64_MAX;
	volatile int32_t t99 = 56484544;

	t99 = ((x3233<(x3234<=x3235))>>x3236);

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

