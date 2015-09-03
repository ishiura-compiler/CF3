#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x50 = -1;
volatile int32_t t2 = 2085067;
static int64_t x57 = -9LL;
int32_t x60 = 10;
static int32_t t3 = 2276329;
int8_t x97 = -1;
int8_t x99 = INT8_MIN;
static int16_t x170 = INT16_MIN;
int64_t x174 = -1LL;
uint8_t x176 = 3U;
volatile int8_t x186 = -1;
int32_t x190 = -1;
uint64_t x191 = 5993640352000946960LLU;
int16_t x192 = 3;
int8_t x349 = INT8_MAX;
static int64_t x377 = INT64_MAX;
int16_t x378 = -1;
int8_t x459 = INT8_MAX;
int32_t t20 = 8505998;
volatile int32_t t22 = 74521204;
int32_t x637 = -1;
int32_t x639 = -28027;
static volatile uint16_t x698 = 5416U;
uint64_t x729 = 40324073454016LLU;
static int16_t x730 = 0;
volatile int32_t t26 = -27344575;
uint32_t x771 = UINT32_MAX;
uint16_t x772 = 0U;
int16_t x824 = 1;
int8_t x849 = 1;
int32_t x852 = 0;
int32_t t31 = -18449818;
int16_t x861 = -14;
volatile uint8_t x952 = 0U;
static uint32_t x1077 = UINT32_MAX;
volatile uint16_t x1078 = 244U;
int16_t x1094 = INT16_MIN;
volatile uint8_t x1096 = 7U;
static int32_t t40 = -82621;
int64_t x1162 = -1LL;
int8_t x1163 = INT8_MIN;
uint32_t x1178 = 2102U;
volatile int16_t x1345 = INT16_MIN;
uint32_t x1346 = 4116U;
int32_t t45 = -574161;
int16_t x1565 = INT16_MIN;
static uint64_t x1568 = 12LLU;
int64_t x1589 = INT64_MAX;
uint64_t x1590 = UINT64_MAX;
int16_t x1591 = INT16_MIN;
static volatile uint8_t x1787 = 1U;
static int32_t x1799 = -652;
static uint64_t x1890 = 0LLU;
static int16_t x1905 = INT16_MAX;
volatile uint32_t x1906 = 5254567U;
volatile uint32_t x2148 = 18U;
uint8_t x2151 = UINT8_MAX;
uint8_t x2152 = 12U;
volatile int32_t t59 = 27;
volatile uint64_t x2258 = UINT64_MAX;
int16_t x2328 = 1;
uint16_t x2333 = 19578U;
static int16_t x2335 = 0;
int32_t t63 = -123;
static int32_t t64 = -521637;
volatile int8_t x2381 = INT8_MIN;
volatile int32_t t68 = -44849684;
int16_t x2559 = INT16_MIN;
uint8_t x2575 = 0U;
static volatile int32_t x2576 = 1;
uint64_t x2639 = 32059LLU;
uint8_t x2706 = UINT8_MAX;
static uint64_t x2718 = UINT64_MAX;
int16_t x2719 = INT16_MIN;
static uint32_t x2723 = UINT32_MAX;
int16_t x2754 = 1;
static int16_t x2773 = INT16_MIN;
int32_t t78 = 2;
uint32_t x2824 = 2U;
int32_t t79 = -4;
uint32_t x2847 = UINT32_MAX;
int8_t x2893 = -1;
static volatile int8_t x2894 = -23;
volatile int32_t t82 = 70141433;
uint8_t x2990 = UINT8_MAX;
uint32_t x2995 = UINT32_MAX;
int64_t x2996 = 0LL;
static uint32_t x3126 = UINT32_MAX;
int32_t x3127 = -5009679;
uint8_t x3128 = 2U;
uint64_t x3191 = 863LLU;
static int16_t x3270 = INT16_MAX;
volatile int16_t x3271 = INT16_MAX;
volatile int32_t t91 = -2091381;
int32_t x3378 = -1;
static int64_t x3393 = INT64_MIN;
int16_t x3415 = INT16_MIN;
static int32_t x3465 = -1;
int64_t x3467 = INT64_MIN;
volatile int32_t t96 = -112369;
int8_t x3555 = INT8_MAX;


void f0(void) {
	uint16_t x5 = 31758U;
	volatile int8_t x6 = -62;
	uint8_t x7 = 13U;
	static int8_t x8 = 1;
	volatile int32_t t0 = 97765290;

	t0 = ((x5<=(x6*x7))>>x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x49 = INT64_MIN;
	volatile int64_t x51 = -47535436995546789LL;
	int16_t x52 = 8;
	int32_t t1 = 0;

	t1 = ((x49<=(x50*x51))>>x52);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x53 = INT8_MAX;
	volatile int8_t x54 = -1;
	uint16_t x55 = 115U;
	volatile uint8_t x56 = 28U;

	t2 = ((x53<=(x54*x55))>>x56);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x58 = INT32_MAX;
	uint32_t x59 = 85343U;

	t3 = ((x57<=(x58*x59))>>x60);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MAX;
	static int8_t x75 = INT8_MAX;
	static uint32_t x76 = 10U;
	volatile int32_t t4 = -393979115;

	t4 = ((x73<=(x74*x75))>>x76);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x98 = INT16_MAX;
	static int8_t x100 = 1;
	volatile int32_t t5 = -3879;

	t5 = ((x97<=(x98*x99))>>x100);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = 3151;
	static int64_t x111 = -11194270325075LL;
	int32_t x112 = 0;
	volatile int32_t t6 = -1191;

	t6 = ((x109<=(x110*x111))>>x112);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x169 = -1;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 20U;
	static volatile int32_t t7 = 26159;

	t7 = ((x169<=(x170*x171))>>x172);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x173 = -2080;
	volatile int8_t x175 = INT8_MAX;
	int32_t t8 = 40712058;

	t8 = ((x173<=(x174*x175))>>x176);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x185 = 7;
	int32_t x187 = INT32_MAX;
	static volatile uint8_t x188 = 0U;
	int32_t t9 = -361878;

	t9 = ((x185<=(x186*x187))>>x188);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x189 = INT64_MIN;
	int32_t t10 = -12757;

	t10 = ((x189<=(x190*x191))>>x192);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x273 = 3847549U;
	int32_t x274 = -3;
	int8_t x275 = -1;
	volatile uint8_t x276 = 6U;
	int32_t t11 = -7;

	t11 = ((x273<=(x274*x275))>>x276);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x350 = -1;
	int8_t x351 = INT8_MAX;
	int8_t x352 = 0;
	static volatile int32_t t12 = 1122353;

	t12 = ((x349<=(x350*x351))>>x352);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x379 = -918895815;
	uint8_t x380 = 2U;
	volatile int32_t t13 = 13;

	t13 = ((x377<=(x378*x379))>>x380);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x425 = 127173901691LLU;
	int64_t x426 = INT64_MIN;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = 4;
	static int32_t t14 = -1;

	t14 = ((x425<=(x426*x427))>>x428);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x457 = 3509;
	static volatile int16_t x458 = INT16_MAX;
	static volatile int8_t x460 = 1;
	volatile int32_t t15 = 3482290;

	t15 = ((x457<=(x458*x459))>>x460);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x477 = -5;
	int16_t x478 = -1;
	uint32_t x479 = 92279490U;
	int16_t x480 = 1;
	int32_t t16 = -7575546;

	t16 = ((x477<=(x478*x479))>>x480);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x529 = INT64_MAX;
	uint8_t x530 = 2U;
	int16_t x531 = -1;
	static int16_t x532 = 0;
	static int32_t t17 = -231433378;

	t17 = ((x529<=(x530*x531))>>x532);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x549 = INT8_MAX;
	int8_t x550 = INT8_MIN;
	uint16_t x551 = 432U;
	int8_t x552 = 1;
	static volatile int32_t t18 = -79313215;

	t18 = ((x549<=(x550*x551))>>x552);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x553 = -5;
	int32_t x554 = 0;
	uint8_t x555 = UINT8_MAX;
	volatile uint8_t x556 = 1U;
	volatile int32_t t19 = 353;

	t19 = ((x553<=(x554*x555))>>x556);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x569 = 3273686604LLU;
	uint64_t x570 = 38LLU;
	volatile int8_t x571 = INT8_MIN;
	int8_t x572 = 0;

	t20 = ((x569<=(x570*x571))>>x572);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x593 = INT8_MIN;
	static uint8_t x594 = UINT8_MAX;
	int16_t x595 = 5;
	uint8_t x596 = 0U;
	static int32_t t21 = -88565;

	t21 = ((x593<=(x594*x595))>>x596);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x601 = INT16_MAX;
	static volatile int64_t x602 = 114939LL;
	uint16_t x603 = 6774U;
	uint16_t x604 = 8U;

	t22 = ((x601<=(x602*x603))>>x604);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x633 = 2903657923901519LL;
	int64_t x634 = INT64_MIN;
	static uint64_t x635 = 31133162838977380LLU;
	uint8_t x636 = 12U;
	int32_t t23 = 14;

	t23 = ((x633<=(x634*x635))>>x636);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x638 = INT16_MIN;
	uint8_t x640 = 9U;
	volatile int32_t t24 = 42;

	t24 = ((x637<=(x638*x639))>>x640);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x697 = UINT32_MAX;
	uint32_t x699 = 7U;
	uint32_t x700 = 1U;
	volatile int32_t t25 = 36;

	t25 = ((x697<=(x698*x699))>>x700);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x731 = INT64_MAX;
	volatile int8_t x732 = 1;

	t26 = ((x729<=(x730*x731))>>x732);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x733 = 4;
	static volatile int16_t x734 = -4801;
	int8_t x735 = INT8_MAX;
	uint16_t x736 = 0U;
	volatile int32_t t27 = -14292375;

	t27 = ((x733<=(x734*x735))>>x736);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x769 = INT8_MAX;
	int8_t x770 = 1;
	volatile int32_t t28 = 1;

	t28 = ((x769<=(x770*x771))>>x772);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x801 = 0U;
	int8_t x802 = INT8_MAX;
	volatile uint32_t x803 = 787U;
	int8_t x804 = 6;
	static int32_t t29 = -1;

	t29 = ((x801<=(x802*x803))>>x804);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x821 = INT8_MAX;
	uint8_t x822 = 0U;
	static int64_t x823 = -82727614396LL;
	int32_t t30 = 221086;

	t30 = ((x821<=(x822*x823))>>x824);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x850 = INT8_MIN;
	static int64_t x851 = 2786353LL;

	t31 = ((x849<=(x850*x851))>>x852);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x862 = 2360256529282LLU;
	volatile int32_t x863 = -1;
	uint8_t x864 = 1U;
	int32_t t32 = -491524;

	t32 = ((x861<=(x862*x863))>>x864);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x949 = 1U;
	int8_t x950 = INT8_MAX;
	int32_t x951 = 64464;
	volatile int32_t t33 = -102388;

	t33 = ((x949<=(x950*x951))>>x952);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x997 = 55;
	int16_t x998 = 121;
	int8_t x999 = INT8_MIN;
	uint8_t x1000 = 27U;
	volatile int32_t t34 = -1012;

	t34 = ((x997<=(x998*x999))>>x1000);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1005 = -1;
	static uint32_t x1006 = 989915950U;
	static volatile int8_t x1007 = -1;
	uint8_t x1008 = 5U;
	volatile int32_t t35 = 489590;

	t35 = ((x1005<=(x1006*x1007))>>x1008);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1025 = INT16_MIN;
	uint64_t x1026 = 1067649367LLU;
	volatile int32_t x1027 = INT32_MAX;
	uint8_t x1028 = 2U;
	int32_t t36 = 20335402;

	t36 = ((x1025<=(x1026*x1027))>>x1028);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1079 = INT16_MIN;
	uint8_t x1080 = 0U;
	int32_t t37 = 24058783;

	t37 = ((x1077<=(x1078*x1079))>>x1080);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1093 = UINT64_MAX;
	uint8_t x1095 = 1U;
	static int32_t t38 = 6624;

	t38 = ((x1093<=(x1094*x1095))>>x1096);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1109 = INT8_MAX;
	int8_t x1110 = INT8_MIN;
	uint32_t x1111 = 7U;
	volatile uint16_t x1112 = 16U;
	int32_t t39 = 1430152;

	t39 = ((x1109<=(x1110*x1111))>>x1112);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1129 = 0;
	volatile uint32_t x1130 = UINT32_MAX;
	uint32_t x1131 = 927U;
	volatile uint8_t x1132 = 0U;

	t40 = ((x1129<=(x1130*x1131))>>x1132);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1161 = -64541046;
	volatile uint8_t x1164 = 1U;
	volatile int32_t t41 = 810;

	t41 = ((x1161<=(x1162*x1163))>>x1164);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1177 = INT8_MIN;
	int32_t x1179 = -1;
	static int32_t x1180 = 0;
	volatile int32_t t42 = 9317;

	t42 = ((x1177<=(x1178*x1179))>>x1180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1241 = INT8_MAX;
	int64_t x1242 = -1LL;
	int8_t x1243 = -1;
	volatile uint8_t x1244 = 0U;
	volatile int32_t t43 = -23842875;

	t43 = ((x1241<=(x1242*x1243))>>x1244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1317 = UINT64_MAX;
	uint8_t x1318 = 1U;
	uint64_t x1319 = 7599983805437266419LLU;
	uint16_t x1320 = 21U;
	volatile int32_t t44 = 240243;

	t44 = ((x1317<=(x1318*x1319))>>x1320);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1347 = INT16_MIN;
	uint8_t x1348 = 2U;

	t45 = ((x1345<=(x1346*x1347))>>x1348);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x1566 = INT16_MIN;
	uint16_t x1567 = 21421U;
	int32_t t46 = -3178;

	t46 = ((x1565<=(x1566*x1567))>>x1568);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1592 = 1LLU;
	static volatile int32_t t47 = -6443703;

	t47 = ((x1589<=(x1590*x1591))>>x1592);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1597 = INT16_MAX;
	int16_t x1598 = INT16_MIN;
	int8_t x1599 = INT8_MAX;
	static uint8_t x1600 = 5U;
	int32_t t48 = 4;

	t48 = ((x1597<=(x1598*x1599))>>x1600);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1785 = INT32_MIN;
	volatile int8_t x1786 = INT8_MAX;
	uint8_t x1788 = 1U;
	int32_t t49 = -120147911;

	t49 = ((x1785<=(x1786*x1787))>>x1788);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1797 = INT16_MIN;
	uint8_t x1798 = UINT8_MAX;
	int32_t x1800 = 29;
	int32_t t50 = -25;

	t50 = ((x1797<=(x1798*x1799))>>x1800);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x1881 = UINT16_MAX;
	uint32_t x1882 = UINT32_MAX;
	uint32_t x1883 = 308191U;
	volatile uint8_t x1884 = 0U;
	int32_t t51 = -4;

	t51 = ((x1881<=(x1882*x1883))>>x1884);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1889 = INT64_MIN;
	uint32_t x1891 = UINT32_MAX;
	int8_t x1892 = 1;
	static volatile int32_t t52 = 1;

	t52 = ((x1889<=(x1890*x1891))>>x1892);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x1907 = -1;
	static int8_t x1908 = 1;
	volatile int32_t t53 = 6;

	t53 = ((x1905<=(x1906*x1907))>>x1908);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x1961 = INT64_MAX;
	volatile uint16_t x1962 = 11343U;
	static uint16_t x1963 = 38U;
	uint16_t x1964 = 18U;
	volatile int32_t t54 = -173;

	t54 = ((x1961<=(x1962*x1963))>>x1964);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x1977 = INT16_MIN;
	int16_t x1978 = -1;
	int64_t x1979 = -2075588002743563827LL;
	static uint32_t x1980 = 0U;
	volatile int32_t t55 = 1;

	t55 = ((x1977<=(x1978*x1979))>>x1980);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1981 = 1U;
	int16_t x1982 = 125;
	int16_t x1983 = INT16_MIN;
	uint16_t x1984 = 14U;
	int32_t t56 = 96;

	t56 = ((x1981<=(x1982*x1983))>>x1984);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x2145 = UINT32_MAX;
	static volatile int16_t x2146 = INT16_MAX;
	volatile int8_t x2147 = -1;
	int32_t t57 = 101625;

	t57 = ((x2145<=(x2146*x2147))>>x2148);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x2149 = UINT16_MAX;
	int16_t x2150 = -1;
	volatile int32_t t58 = 283;

	t58 = ((x2149<=(x2150*x2151))>>x2152);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2237 = -1;
	int16_t x2238 = INT16_MIN;
	int32_t x2239 = -1;
	uint16_t x2240 = 1U;

	t59 = ((x2237<=(x2238*x2239))>>x2240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2249 = INT16_MAX;
	volatile int64_t x2250 = INT64_MAX;
	uint64_t x2251 = 23LLU;
	uint16_t x2252 = 3U;
	volatile int32_t t60 = 1;

	t60 = ((x2249<=(x2250*x2251))>>x2252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x2257 = INT64_MIN;
	uint8_t x2259 = 105U;
	int64_t x2260 = 1LL;
	static int32_t t61 = -1842608;

	t61 = ((x2257<=(x2258*x2259))>>x2260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2325 = UINT8_MAX;
	uint64_t x2326 = UINT64_MAX;
	uint8_t x2327 = 0U;
	volatile int32_t t62 = -387054089;

	t62 = ((x2325<=(x2326*x2327))>>x2328);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2334 = INT16_MAX;
	uint64_t x2336 = 9LLU;

	t63 = ((x2333<=(x2334*x2335))>>x2336);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2357 = 3U;
	int16_t x2358 = -1;
	volatile uint16_t x2359 = 17U;
	static uint64_t x2360 = 13LLU;

	t64 = ((x2357<=(x2358*x2359))>>x2360);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x2382 = -1LL;
	volatile uint32_t x2383 = 2079U;
	int16_t x2384 = 28;
	static int32_t t65 = -120729;

	t65 = ((x2381<=(x2382*x2383))>>x2384);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x2429 = -5755;
	int32_t x2430 = 11458826;
	int8_t x2431 = -1;
	int8_t x2432 = 7;
	static volatile int32_t t66 = 7647560;

	t66 = ((x2429<=(x2430*x2431))>>x2432);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2433 = 54U;
	static int32_t x2434 = INT32_MAX;
	uint32_t x2435 = 151227U;
	int8_t x2436 = 9;
	int32_t t67 = -2107054;

	t67 = ((x2433<=(x2434*x2435))>>x2436);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2465 = -1;
	uint16_t x2466 = UINT16_MAX;
	volatile int8_t x2467 = -5;
	uint32_t x2468 = 16U;

	t68 = ((x2465<=(x2466*x2467))>>x2468);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x2545 = INT16_MAX;
	int16_t x2546 = 460;
	uint64_t x2547 = 17272212072770670LLU;
	uint8_t x2548 = 21U;
	volatile int32_t t69 = -9347782;

	t69 = ((x2545<=(x2546*x2547))>>x2548);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2557 = INT8_MIN;
	static int16_t x2558 = -1;
	static volatile uint8_t x2560 = 1U;
	volatile int32_t t70 = 181693;

	t70 = ((x2557<=(x2558*x2559))>>x2560);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2573 = 43;
	int32_t x2574 = 203870321;
	static volatile int32_t t71 = 512158;

	t71 = ((x2573<=(x2574*x2575))>>x2576);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2637 = INT64_MIN;
	static uint8_t x2638 = 97U;
	volatile uint8_t x2640 = 0U;
	int32_t t72 = -41;

	t72 = ((x2637<=(x2638*x2639))>>x2640);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2693 = 1U;
	int64_t x2694 = -25236125690974LL;
	volatile uint32_t x2695 = 8U;
	uint16_t x2696 = 3U;
	volatile int32_t t73 = 579189979;

	t73 = ((x2693<=(x2694*x2695))>>x2696);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2705 = -1LL;
	int64_t x2707 = -32790322728083LL;
	static uint16_t x2708 = 0U;
	static volatile int32_t t74 = 1;

	t74 = ((x2705<=(x2706*x2707))>>x2708);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x2717 = UINT8_MAX;
	static uint16_t x2720 = 0U;
	int32_t t75 = 125767;

	t75 = ((x2717<=(x2718*x2719))>>x2720);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x2721 = 184040544LLU;
	volatile int32_t x2722 = INT32_MIN;
	int8_t x2724 = 1;
	volatile int32_t t76 = 202987641;

	t76 = ((x2721<=(x2722*x2723))>>x2724);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2753 = 1492;
	uint16_t x2755 = 140U;
	static uint8_t x2756 = 7U;
	volatile int32_t t77 = -29477115;

	t77 = ((x2753<=(x2754*x2755))>>x2756);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2774 = INT64_MIN;
	uint64_t x2775 = 23255924797359133LLU;
	static uint32_t x2776 = 2U;

	t78 = ((x2773<=(x2774*x2775))>>x2776);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2821 = INT16_MAX;
	uint64_t x2822 = 432304832304423059LLU;
	int64_t x2823 = -1LL;

	t79 = ((x2821<=(x2822*x2823))>>x2824);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2845 = 3U;
	uint32_t x2846 = 12U;
	int16_t x2848 = 0;
	static volatile int32_t t80 = -178045;

	t80 = ((x2845<=(x2846*x2847))>>x2848);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x2861 = INT8_MIN;
	volatile int8_t x2862 = 26;
	int16_t x2863 = INT16_MIN;
	uint16_t x2864 = 1U;
	int32_t t81 = 233386498;

	t81 = ((x2861<=(x2862*x2863))>>x2864);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2895 = 876293958LL;
	int16_t x2896 = 2;

	t82 = ((x2893<=(x2894*x2895))>>x2896);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x2961 = 1;
	static volatile int32_t x2962 = INT32_MAX;
	uint32_t x2963 = 438U;
	int8_t x2964 = 1;
	int32_t t83 = -8;

	t83 = ((x2961<=(x2962*x2963))>>x2964);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x2973 = -20857994684LL;
	uint32_t x2974 = 5147U;
	int16_t x2975 = -1;
	static int8_t x2976 = 3;
	static int32_t t84 = -60169812;

	t84 = ((x2973<=(x2974*x2975))>>x2976);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2989 = -1;
	static uint8_t x2991 = 18U;
	static int16_t x2992 = 1;
	volatile int32_t t85 = -14;

	t85 = ((x2989<=(x2990*x2991))>>x2992);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2993 = INT64_MIN;
	volatile uint64_t x2994 = 37LLU;
	int32_t t86 = 85393532;

	t86 = ((x2993<=(x2994*x2995))>>x2996);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3005 = INT32_MIN;
	uint16_t x3006 = 0U;
	uint64_t x3007 = 1493699306731LLU;
	static int8_t x3008 = 10;
	volatile int32_t t87 = 902593;

	t87 = ((x3005<=(x3006*x3007))>>x3008);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3113 = 1164;
	int8_t x3114 = -63;
	int64_t x3115 = 647699LL;
	int16_t x3116 = 8;
	int32_t t88 = -1031;

	t88 = ((x3113<=(x3114*x3115))>>x3116);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3125 = 1;
	int32_t t89 = -1;

	t89 = ((x3125<=(x3126*x3127))>>x3128);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3189 = 28U;
	uint16_t x3190 = 13044U;
	uint8_t x3192 = 5U;
	static volatile int32_t t90 = 31387331;

	t90 = ((x3189<=(x3190*x3191))>>x3192);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3269 = INT8_MIN;
	uint16_t x3272 = 1U;

	t91 = ((x3269<=(x3270*x3271))>>x3272);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3377 = INT8_MIN;
	uint64_t x3379 = 1585760LLU;
	static uint32_t x3380 = 0U;
	volatile int32_t t92 = -32;

	t92 = ((x3377<=(x3378*x3379))>>x3380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x3394 = UINT64_MAX;
	int16_t x3395 = -1;
	int8_t x3396 = 1;
	int32_t t93 = 452;

	t93 = ((x3393<=(x3394*x3395))>>x3396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3413 = -56524898194081901LL;
	volatile uint64_t x3414 = UINT64_MAX;
	volatile int8_t x3416 = 10;
	volatile int32_t t94 = -201;

	t94 = ((x3413<=(x3414*x3415))>>x3416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3429 = -6;
	volatile int16_t x3430 = INT16_MIN;
	uint32_t x3431 = UINT32_MAX;
	uint32_t x3432 = 1U;
	volatile int32_t t95 = 9111;

	t95 = ((x3429<=(x3430*x3431))>>x3432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3466 = UINT64_MAX;
	uint8_t x3468 = 7U;

	t96 = ((x3465<=(x3466*x3467))>>x3468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3553 = INT64_MAX;
	int8_t x3554 = INT8_MIN;
	uint8_t x3556 = 1U;
	int32_t t97 = 49786475;

	t97 = ((x3553<=(x3554*x3555))>>x3556);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3605 = UINT32_MAX;
	volatile uint16_t x3606 = 155U;
	int16_t x3607 = INT16_MIN;
	int64_t x3608 = 18LL;
	int32_t t98 = -89889;

	t98 = ((x3605<=(x3606*x3607))>>x3608);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3613 = INT32_MIN;
	uint16_t x3614 = 0U;
	uint16_t x3615 = 9U;
	volatile int16_t x3616 = 0;
	int32_t t99 = -254;

	t99 = ((x3613<=(x3614*x3615))>>x3616);

	if (t99 != 1) { NG(); } else { ; }
	
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

