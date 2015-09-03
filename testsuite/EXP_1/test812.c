#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x21 = -2784;
static int32_t t1 = 0;
volatile uint8_t x45 = UINT8_MAX;
volatile int64_t t2 = 19LL;
uint32_t x81 = UINT32_MAX;
int32_t x185 = INT32_MIN;
int32_t x186 = INT32_MIN;
int64_t x195 = INT64_MIN;
uint8_t x204 = 3U;
int8_t x270 = -1;
int16_t x271 = 14150;
int64_t x277 = -1LL;
volatile uint64_t t13 = 233196615LLU;
uint32_t x362 = UINT32_MAX;
uint8_t x364 = 9U;
volatile int8_t x414 = -1;
uint64_t x421 = UINT64_MAX;
static uint64_t t16 = 13791185870LLU;
volatile uint8_t x452 = 0U;
volatile uint64_t t17 = 887073LLU;
volatile uint8_t x519 = 10U;
uint64_t x694 = 32746949754033LLU;
int64_t x721 = INT64_MAX;
volatile int8_t x722 = -1;
volatile int32_t x723 = 0;
uint64_t x766 = 20349626LLU;
uint32_t x778 = UINT32_MAX;
volatile int16_t x855 = 5921;
volatile uint32_t x893 = UINT32_MAX;
uint64_t x894 = 68414313541777LLU;
volatile uint64_t t26 = 895492662465LLU;
int64_t t27 = 1722841013364737875LL;
static volatile int32_t x933 = -2;
uint64_t x935 = UINT64_MAX;
uint32_t x957 = UINT32_MAX;
uint16_t x959 = 14U;
int64_t t29 = 11519LL;
int32_t x1066 = INT32_MAX;
uint8_t x1070 = UINT8_MAX;
uint8_t x1072 = 24U;
uint64_t t33 = 31826LLU;
uint64_t x1081 = 4186430387LLU;
volatile int64_t x1174 = INT64_MIN;
static int8_t x1176 = 48;
volatile int32_t x1193 = -1;
uint8_t x1196 = 11U;
int32_t x1399 = -605393;
volatile int8_t x1400 = 14;
int16_t x1413 = -1;
static uint32_t x1414 = 1079948639U;
uint32_t x1415 = UINT32_MAX;
uint8_t x1421 = UINT8_MAX;
static volatile int16_t x1422 = INT16_MAX;
int32_t x1447 = INT32_MIN;
static int32_t x1525 = -1;
int32_t x1735 = 23731;
uint8_t x1738 = 108U;
volatile int8_t x1739 = INT8_MAX;
volatile uint64_t t49 = 11506017182681LLU;
int32_t x1865 = INT32_MIN;
int32_t t53 = 0;
int32_t t54 = 62236;
int8_t x1910 = 22;
uint64_t x1927 = UINT64_MAX;
volatile int8_t x1928 = 12;
static uint8_t x1973 = UINT8_MAX;
static int8_t x1976 = 7;
uint32_t x1985 = 55105652U;
uint32_t x2003 = UINT32_MAX;
int64_t x2066 = INT64_MAX;
int8_t x2067 = INT8_MIN;
volatile int8_t x2069 = INT8_MIN;
uint64_t t65 = 4008586146814141174LLU;
int16_t x2114 = INT16_MAX;
uint16_t x2115 = 13U;
static int16_t x2152 = 48;
uint16_t x2181 = UINT16_MAX;
static uint64_t x2193 = 38690LLU;
static int8_t x2196 = 58;
volatile int32_t x2216 = 9;
volatile int64_t x2230 = -13450LL;
volatile int64_t t77 = 276LL;
uint8_t x2368 = 2U;
uint16_t x2385 = 22U;
static int16_t x2386 = 1917;
volatile uint16_t x2392 = 0U;
volatile uint64_t t80 = 165LLU;
static int16_t x2399 = INT16_MIN;
static int16_t x2406 = INT16_MIN;
volatile int8_t x2408 = 3;
static volatile uint32_t t82 = 178U;
volatile int8_t x2428 = 2;
uint8_t x2457 = 4U;
static volatile uint8_t x2559 = 69U;
volatile int16_t x2564 = 0;
int16_t x2589 = INT16_MIN;
static uint32_t t92 = 5U;
uint16_t x2639 = 4305U;
volatile int32_t t93 = 355665464;
int16_t x2646 = -2979;
volatile uint8_t x2647 = UINT8_MAX;
static uint32_t x2701 = UINT32_MAX;
int64_t x2778 = INT64_MIN;
volatile int64_t t97 = 0LL;
uint8_t x2877 = UINT8_MAX;
int64_t x2878 = INT64_MIN;


void f0(void) {
	static volatile int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MAX;
	int8_t x12 = 3;
	static volatile int32_t t0 = 498546;

	t0 = (((x9%x10)&x11)<<x12);

	if (t0 != 262136) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x22 = INT32_MAX;
	int16_t x23 = 6447;
	int16_t x24 = 17;

	t1 = (((x21%x22)&x23)<<x24);

	if (t1 != 574619648) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x46 = -807;
	int64_t x47 = INT64_MIN;
	uint8_t x48 = 16U;

	t2 = (((x45%x46)&x47)<<x48);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x82 = INT8_MIN;
	static uint32_t x83 = UINT32_MAX;
	int8_t x84 = 1;
	uint32_t t3 = 104889U;

	t3 = (((x81%x82)&x83)<<x84);

	if (t3 != 254U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x85 = 198;
	uint8_t x86 = 5U;
	uint16_t x87 = 26905U;
	int16_t x88 = 0;
	static volatile int32_t t4 = 260317;

	t4 = (((x85%x86)&x87)<<x88);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x93 = 2;
	uint64_t x94 = 14224047934LLU;
	volatile uint8_t x95 = 3U;
	uint8_t x96 = 6U;
	static volatile uint64_t t5 = 504344440LLU;

	t5 = (((x93%x94)&x95)<<x96);

	if (t5 != 128LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x169 = INT32_MIN;
	uint64_t x170 = UINT64_MAX;
	uint64_t x171 = 1583102LLU;
	uint8_t x172 = 21U;
	static uint64_t t6 = 308676LLU;

	t6 = (((x169%x170)&x171)<<x172);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x187 = 6U;
	int16_t x188 = 29;
	volatile int32_t t7 = -102255;

	t7 = (((x185%x186)&x187)<<x188);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x193 = INT8_MAX;
	int64_t x194 = INT64_MIN;
	uint64_t x196 = 4LLU;
	int64_t t8 = 19753484769255LL;

	t8 = (((x193%x194)&x195)<<x196);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x201 = 100U;
	int16_t x202 = INT16_MIN;
	volatile int8_t x203 = 0;
	static volatile int32_t t9 = -16173;

	t9 = (((x201%x202)&x203)<<x204);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x269 = -3;
	uint8_t x272 = 1U;
	volatile int32_t t10 = 385764;

	t10 = (((x269%x270)&x271)<<x272);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;
	volatile uint8_t x280 = 0U;
	volatile int64_t t11 = INT64_MAX;

	t11 = (((x277%x278)&x279)<<x280);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	static int8_t x320 = 3;
	volatile uint64_t t12 = 14150466LLU;

	t12 = (((x317%x318)&x319)<<x320);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x357 = 12U;
	volatile uint16_t x358 = UINT16_MAX;
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = 8U;

	t13 = (((x357%x358)&x359)<<x360);

	if (t13 != 3072LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x361 = INT8_MAX;
	int64_t x363 = INT64_MIN;
	static volatile int64_t t14 = 13693LL;

	t14 = (((x361%x362)&x363)<<x364);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x413 = INT16_MIN;
	static int64_t x415 = INT64_MIN;
	static uint32_t x416 = 6U;
	static int64_t t15 = 701302LL;

	t15 = (((x413%x414)&x415)<<x416);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x422 = UINT16_MAX;
	int32_t x423 = 5684912;
	static int8_t x424 = 0;

	t16 = (((x421%x422)&x423)<<x424);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x449 = 126598LLU;
	uint8_t x450 = UINT8_MAX;
	uint32_t x451 = 311592499U;

	t17 = (((x449%x450)&x451)<<x452);

	if (t17 != 50LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x517 = 3U;
	int16_t x518 = -1;
	volatile int32_t x520 = 1;
	volatile int32_t t18 = 2;

	t18 = (((x517%x518)&x519)<<x520);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x693 = INT32_MAX;
	volatile int8_t x695 = INT8_MAX;
	volatile uint8_t x696 = 1U;
	uint64_t t19 = 2991129519756LLU;

	t19 = (((x693%x694)&x695)<<x696);

	if (t19 != 254LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x724 = 1;
	volatile int64_t t20 = -298LL;

	t20 = (((x721%x722)&x723)<<x724);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x765 = -54948981LL;
	static int16_t x767 = 12;
	volatile uint8_t x768 = 6U;
	uint64_t t21 = 29685LLU;

	t21 = (((x765%x766)&x767)<<x768);

	if (t21 != 256LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x777 = 2680470;
	volatile int64_t x779 = INT64_MAX;
	int8_t x780 = 0;
	int64_t t22 = -51792617LL;

	t22 = (((x777%x778)&x779)<<x780);

	if (t22 != 2680470LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x797 = 2815U;
	int32_t x798 = INT32_MAX;
	volatile int8_t x799 = INT8_MAX;
	uint64_t x800 = 20LLU;
	volatile int32_t t23 = -1442774;

	t23 = (((x797%x798)&x799)<<x800);

	if (t23 != 133169152) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x833 = UINT32_MAX;
	int64_t x834 = INT64_MIN;
	int8_t x835 = 31;
	uint8_t x836 = 15U;
	int64_t t24 = 31881730LL;

	t24 = (((x833%x834)&x835)<<x836);

	if (t24 != 1015808LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x853 = 12;
	uint8_t x854 = 3U;
	int8_t x856 = 10;
	volatile int32_t t25 = 860421278;

	t25 = (((x853%x854)&x855)<<x856);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x895 = INT8_MIN;
	static uint16_t x896 = 26U;

	t26 = (((x893%x894)&x895)<<x896);

	if (t26 != 288230367561777152LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x921 = INT64_MAX;
	int32_t x922 = -12200492;
	volatile int16_t x923 = INT16_MAX;
	int8_t x924 = 0;

	t27 = (((x921%x922)&x923)<<x924);

	if (t27 != 6147LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x934 = 259U;
	volatile int8_t x936 = 4;
	volatile uint64_t t28 = 97LLU;

	t28 = (((x933%x934)&x935)<<x936);

	if (t28 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x958 = -9499025LL;
	uint8_t x960 = 5U;

	t29 = (((x957%x958)&x959)<<x960);

	if (t29 != 320LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x961 = -1LL;
	int32_t x962 = INT32_MIN;
	uint8_t x963 = 56U;
	static uint8_t x964 = 0U;
	volatile int64_t t30 = 92540032LL;

	t30 = (((x961%x962)&x963)<<x964);

	if (t30 != 56LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x973 = 0;
	int64_t x974 = -718978836920580654LL;
	uint8_t x975 = 102U;
	static int16_t x976 = 2;
	volatile int64_t t31 = 1047006619LL;

	t31 = (((x973%x974)&x975)<<x976);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1065 = -21;
	uint16_t x1067 = UINT16_MAX;
	uint64_t x1068 = 0LLU;
	int32_t t32 = 92;

	t32 = (((x1065%x1066)&x1067)<<x1068);

	if (t32 != 65515) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1069 = -1LL;
	uint64_t x1071 = 4088032542487LLU;

	t33 = (((x1069%x1070)&x1071)<<x1072);

	if (t33 != 13245572759204921344LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1082 = INT8_MIN;
	static int64_t x1083 = INT64_MIN;
	int16_t x1084 = 1;
	uint64_t t34 = 270795LLU;

	t34 = (((x1081%x1082)&x1083)<<x1084);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1085 = INT8_MIN;
	int8_t x1086 = -1;
	int64_t x1087 = INT64_MAX;
	int16_t x1088 = 3;
	volatile int64_t t35 = 24899551LL;

	t35 = (((x1085%x1086)&x1087)<<x1088);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1101 = UINT64_MAX;
	int16_t x1102 = -418;
	static uint8_t x1103 = 59U;
	int8_t x1104 = 21;
	static uint64_t t36 = 25467873222846LLU;

	t36 = (((x1101%x1102)&x1103)<<x1104);

	if (t36 != 69206016LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1145 = 5;
	volatile int64_t x1146 = INT64_MIN;
	int8_t x1147 = -1;
	volatile uint16_t x1148 = 1U;
	volatile int64_t t37 = 475520610503312LL;

	t37 = (((x1145%x1146)&x1147)<<x1148);

	if (t37 != 10LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1149 = UINT16_MAX;
	uint16_t x1150 = UINT16_MAX;
	int8_t x1151 = 0;
	uint32_t x1152 = 3U;
	int32_t t38 = 1;

	t38 = (((x1149%x1150)&x1151)<<x1152);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1173 = 1;
	int32_t x1175 = -33904;
	volatile int64_t t39 = 44735LL;

	t39 = (((x1173%x1174)&x1175)<<x1176);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1194 = 1776918956642944LLU;
	uint8_t x1195 = 10U;
	uint64_t t40 = 24996809222619LLU;

	t40 = (((x1193%x1194)&x1195)<<x1196);

	if (t40 != 20480LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1229 = INT16_MAX;
	uint8_t x1230 = 8U;
	int16_t x1231 = INT16_MAX;
	int16_t x1232 = 4;
	volatile int32_t t41 = -1747832;

	t41 = (((x1229%x1230)&x1231)<<x1232);

	if (t41 != 112) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1397 = 1954;
	uint8_t x1398 = 2U;
	volatile int32_t t42 = -714045181;

	t42 = (((x1397%x1398)&x1399)<<x1400);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1416 = 3U;
	volatile uint32_t t43 = 31993827U;

	t43 = (((x1413%x1414)&x1415)<<x1416);

	if (t43 != 4146003728U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1423 = INT8_MIN;
	uint16_t x1424 = 0U;
	volatile int32_t t44 = -17928;

	t44 = (((x1421%x1422)&x1423)<<x1424);

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1445 = 641LL;
	volatile uint8_t x1446 = 16U;
	uint16_t x1448 = 0U;
	volatile int64_t t45 = 3811366583704920689LL;

	t45 = (((x1445%x1446)&x1447)<<x1448);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1526 = -1LL;
	int8_t x1527 = -25;
	static volatile uint16_t x1528 = 47U;
	volatile int64_t t46 = 13977618693703230LL;

	t46 = (((x1525%x1526)&x1527)<<x1528);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1621 = INT32_MIN;
	uint16_t x1622 = 2U;
	uint8_t x1623 = 60U;
	uint8_t x1624 = 0U;
	static int32_t t47 = -217;

	t47 = (((x1621%x1622)&x1623)<<x1624);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1733 = INT8_MIN;
	static int32_t x1734 = INT32_MIN;
	static uint64_t x1736 = 12LLU;
	int32_t t48 = 7891;

	t48 = (((x1733%x1734)&x1735)<<x1736);

	if (t48 != 96993280) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1737 = 126121690LLU;
	uint8_t x1740 = 0U;

	t49 = (((x1737%x1738)&x1739)<<x1740);

	if (t49 != 46LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1809 = -51;
	uint8_t x1810 = UINT8_MAX;
	uint8_t x1811 = 22U;
	volatile int64_t x1812 = 2LL;
	volatile int32_t t50 = 540745;

	t50 = (((x1809%x1810)&x1811)<<x1812);

	if (t50 != 16) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1829 = INT16_MIN;
	volatile int32_t x1830 = -1;
	int8_t x1831 = -1;
	int8_t x1832 = 1;
	volatile int32_t t51 = 587847348;

	t51 = (((x1829%x1830)&x1831)<<x1832);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1833 = INT64_MIN;
	int8_t x1834 = INT8_MIN;
	int8_t x1835 = -4;
	volatile uint8_t x1836 = 7U;
	int64_t t52 = 1828667LL;

	t52 = (((x1833%x1834)&x1835)<<x1836);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1866 = -1;
	int8_t x1867 = -3;
	int16_t x1868 = 0;

	t53 = (((x1865%x1866)&x1867)<<x1868);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1905 = 56;
	int32_t x1906 = INT32_MIN;
	static int8_t x1907 = -1;
	int8_t x1908 = 0;

	t54 = (((x1905%x1906)&x1907)<<x1908);

	if (t54 != 56) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1909 = -1;
	int16_t x1911 = INT16_MAX;
	uint32_t x1912 = 16U;
	volatile int32_t t55 = 484;

	t55 = (((x1909%x1910)&x1911)<<x1912);

	if (t55 != 2147418112) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x1913 = 374U;
	int8_t x1914 = INT8_MIN;
	int16_t x1915 = INT16_MIN;
	uint64_t x1916 = 10LLU;
	int32_t t56 = -1728307;

	t56 = (((x1913%x1914)&x1915)<<x1916);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1925 = 843;
	uint16_t x1926 = 3641U;
	static uint64_t t57 = 2370767264881543129LLU;

	t57 = (((x1925%x1926)&x1927)<<x1928);

	if (t57 != 3452928LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1953 = 0;
	volatile int64_t x1954 = INT64_MIN;
	int32_t x1955 = 121738;
	static uint64_t x1956 = 3LLU;
	volatile int64_t t58 = 525828458321501950LL;

	t58 = (((x1953%x1954)&x1955)<<x1956);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1961 = INT16_MAX;
	int32_t x1962 = INT32_MAX;
	static uint64_t x1963 = UINT64_MAX;
	int8_t x1964 = 1;
	volatile uint64_t t59 = 4292710823LLU;

	t59 = (((x1961%x1962)&x1963)<<x1964);

	if (t59 != 65534LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1965 = -1;
	volatile int8_t x1966 = INT8_MIN;
	static int64_t x1967 = 43808LL;
	uint8_t x1968 = 0U;
	int64_t t60 = -3473LL;

	t60 = (((x1965%x1966)&x1967)<<x1968);

	if (t60 != 43808LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1974 = 958202367753912981LLU;
	static int32_t x1975 = INT32_MIN;
	static volatile uint64_t t61 = 161LLU;

	t61 = (((x1973%x1974)&x1975)<<x1976);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1986 = -91;
	uint64_t x1987 = 20LLU;
	int16_t x1988 = 0;
	static volatile uint64_t t62 = 3773305LLU;

	t62 = (((x1985%x1986)&x1987)<<x1988);

	if (t62 != 20LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2001 = 125612LLU;
	static volatile uint16_t x2002 = 3U;
	int8_t x2004 = 46;
	static uint64_t t63 = 6285160370577237LLU;

	t63 = (((x2001%x2002)&x2003)<<x2004);

	if (t63 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2065 = 11112;
	uint16_t x2068 = 49U;
	int64_t t64 = 1776187LL;

	t64 = (((x2065%x2066)&x2067)<<x2068);

	if (t64 != 6196953087261802496LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x2070 = 525868891544685LLU;
	int64_t x2071 = -728184391334920LL;
	volatile uint8_t x2072 = 21U;

	t65 = (((x2069%x2070)&x2071)<<x2072);

	if (t65 != 1297177432284987392LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2109 = -1943247;
	int32_t x2110 = -1;
	int64_t x2111 = -10011783520963LL;
	static int8_t x2112 = 7;
	int64_t t66 = 26575551103100LL;

	t66 = (((x2109%x2110)&x2111)<<x2112);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2113 = UINT64_MAX;
	static int8_t x2116 = 0;
	uint64_t t67 = 1787244972915962LLU;

	t67 = (((x2113%x2114)&x2115)<<x2116);

	if (t67 != 13LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2149 = 0;
	int8_t x2150 = INT8_MAX;
	int64_t x2151 = INT64_MAX;
	static volatile int64_t t68 = -17078453619399053LL;

	t68 = (((x2149%x2150)&x2151)<<x2152);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2182 = 1;
	uint16_t x2183 = 0U;
	uint8_t x2184 = 0U;
	static int32_t t69 = -7837593;

	t69 = (((x2181%x2182)&x2183)<<x2184);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2194 = INT16_MIN;
	int64_t x2195 = INT64_MIN;
	static volatile uint64_t t70 = 21014911456948LLU;

	t70 = (((x2193%x2194)&x2195)<<x2196);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2213 = -1;
	uint8_t x2214 = UINT8_MAX;
	uint64_t x2215 = UINT64_MAX;
	static uint64_t t71 = 2500182533346108LLU;

	t71 = (((x2213%x2214)&x2215)<<x2216);

	if (t71 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2229 = 0;
	volatile uint16_t x2231 = 0U;
	int32_t x2232 = 1;
	volatile int64_t t72 = -121571508113LL;

	t72 = (((x2229%x2230)&x2231)<<x2232);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x2245 = INT64_MIN;
	int64_t x2246 = INT64_MAX;
	volatile uint16_t x2247 = 1U;
	uint8_t x2248 = 23U;
	static volatile int64_t t73 = -7076LL;

	t73 = (((x2245%x2246)&x2247)<<x2248);

	if (t73 != 8388608LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2253 = 126U;
	uint64_t x2254 = UINT64_MAX;
	int64_t x2255 = INT64_MIN;
	int16_t x2256 = 15;
	uint64_t t74 = 55996LLU;

	t74 = (((x2253%x2254)&x2255)<<x2256);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2257 = 9U;
	int8_t x2258 = INT8_MIN;
	int16_t x2259 = -136;
	uint8_t x2260 = 2U;
	volatile int32_t t75 = -7182560;

	t75 = (((x2257%x2258)&x2259)<<x2260);

	if (t75 != 32) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2313 = INT8_MIN;
	static int32_t x2314 = INT32_MIN;
	uint16_t x2315 = 1U;
	uint16_t x2316 = 1U;
	int32_t t76 = 4766;

	t76 = (((x2313%x2314)&x2315)<<x2316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2345 = INT16_MIN;
	int64_t x2346 = INT64_MIN;
	uint32_t x2347 = 1U;
	int32_t x2348 = 1;

	t77 = (((x2345%x2346)&x2347)<<x2348);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2365 = 241;
	int16_t x2366 = INT16_MAX;
	uint32_t x2367 = UINT32_MAX;
	uint32_t t78 = 10066U;

	t78 = (((x2365%x2366)&x2367)<<x2368);

	if (t78 != 964U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2387 = UINT8_MAX;
	uint8_t x2388 = 11U;
	volatile int32_t t79 = 105;

	t79 = (((x2385%x2386)&x2387)<<x2388);

	if (t79 != 45056) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2389 = 4U;
	static uint64_t x2390 = UINT64_MAX;
	int32_t x2391 = 20189;

	t80 = (((x2389%x2390)&x2391)<<x2392);

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2397 = INT64_MAX;
	static int64_t x2398 = -125486116LL;
	int16_t x2400 = 10;
	volatile int64_t t81 = -78128LL;

	t81 = (((x2397%x2398)&x2399)<<x2400);

	if (t81 != 38285606912LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x2405 = 35;
	static uint32_t x2407 = 52719U;

	t82 = (((x2405%x2406)&x2407)<<x2408);

	if (t82 != 280U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x2409 = INT64_MAX;
	static volatile uint16_t x2410 = UINT16_MAX;
	uint8_t x2411 = 42U;
	uint8_t x2412 = 12U;
	volatile int64_t t83 = -106056667LL;

	t83 = (((x2409%x2410)&x2411)<<x2412);

	if (t83 != 172032LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x2425 = UINT32_MAX;
	int16_t x2426 = -1;
	int32_t x2427 = -1;
	uint32_t t84 = 4450U;

	t84 = (((x2425%x2426)&x2427)<<x2428);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x2458 = INT32_MIN;
	int8_t x2459 = 0;
	static uint8_t x2460 = 11U;
	int32_t t85 = 2484;

	t85 = (((x2457%x2458)&x2459)<<x2460);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2521 = 11;
	volatile int8_t x2522 = INT8_MIN;
	int32_t x2523 = -26584;
	int16_t x2524 = 4;
	int32_t t86 = -1;

	t86 = (((x2521%x2522)&x2523)<<x2524);

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x2549 = 1U;
	uint16_t x2550 = UINT16_MAX;
	uint8_t x2551 = 4U;
	uint32_t x2552 = 7U;
	volatile int32_t t87 = -13;

	t87 = (((x2549%x2550)&x2551)<<x2552);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2557 = -2;
	static int64_t x2558 = 164580296033524019LL;
	int32_t x2560 = 25;
	static volatile int64_t t88 = 6314LL;

	t88 = (((x2557%x2558)&x2559)<<x2560);

	if (t88 != 2281701376LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x2561 = INT64_MAX;
	int16_t x2562 = 3;
	uint8_t x2563 = UINT8_MAX;
	int64_t t89 = -5175LL;

	t89 = (((x2561%x2562)&x2563)<<x2564);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x2590 = INT32_MIN;
	uint8_t x2591 = UINT8_MAX;
	int8_t x2592 = 0;
	volatile int32_t t90 = 136669861;

	t90 = (((x2589%x2590)&x2591)<<x2592);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x2593 = 124U;
	int32_t x2594 = -1;
	int16_t x2595 = INT16_MAX;
	uint32_t x2596 = 0U;
	int32_t t91 = -175262;

	t91 = (((x2593%x2594)&x2595)<<x2596);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2617 = 21;
	uint32_t x2618 = 622394U;
	int8_t x2619 = -1;
	volatile uint8_t x2620 = 9U;

	t92 = (((x2617%x2618)&x2619)<<x2620);

	if (t92 != 10752U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2637 = 62U;
	uint8_t x2638 = 1U;
	uint32_t x2640 = 2U;

	t93 = (((x2637%x2638)&x2639)<<x2640);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2645 = 154819587;
	uint16_t x2648 = 13U;
	static volatile int32_t t94 = -10350;

	t94 = (((x2645%x2646)&x2647)<<x2648);

	if (t94 != 1548288) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2702 = INT16_MIN;
	int8_t x2703 = INT8_MIN;
	uint8_t x2704 = 12U;
	uint32_t t95 = 16780U;

	t95 = (((x2701%x2702)&x2703)<<x2704);

	if (t95 != 133693440U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2765 = 3LLU;
	uint64_t x2766 = UINT64_MAX;
	int16_t x2767 = -1;
	volatile uint32_t x2768 = 5U;
	volatile uint64_t t96 = 245521714139LLU;

	t96 = (((x2765%x2766)&x2767)<<x2768);

	if (t96 != 96LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2777 = INT64_MIN;
	volatile int64_t x2779 = -40317638558444LL;
	uint32_t x2780 = 3U;

	t97 = (((x2777%x2778)&x2779)<<x2780);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2865 = 20U;
	int32_t x2866 = -1;
	int16_t x2867 = INT16_MIN;
	static uint64_t x2868 = 1LLU;
	volatile int32_t t98 = -27446512;

	t98 = (((x2865%x2866)&x2867)<<x2868);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2879 = 2148U;
	volatile uint64_t x2880 = 0LLU;
	volatile int64_t t99 = 36LL;

	t99 = (((x2877%x2878)&x2879)<<x2880);

	if (t99 != 100LL) { NG(); } else { ; }
	
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

