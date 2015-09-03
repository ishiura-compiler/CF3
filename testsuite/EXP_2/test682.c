#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x63 = INT16_MAX;
static volatile uint16_t x64 = 1U;
volatile uint64_t t2 = 555430LLU;
static volatile uint32_t x175 = 68051U;
uint16_t x176 = 0U;
uint16_t x311 = 433U;
uint64_t t5 = 15LLU;
int16_t x437 = 1465;
volatile int64_t x439 = INT64_MAX;
int8_t x448 = 12;
volatile int64_t x606 = 305446737578LL;
int32_t x743 = 390863521;
static int32_t t12 = 135;
uint16_t x765 = 94U;
uint16_t x768 = 15U;
volatile int32_t t15 = -125;
int8_t x901 = -1;
static uint32_t x981 = UINT32_MAX;
static volatile int8_t x984 = 6;
volatile uint32_t t19 = 13702185U;
uint64_t x1146 = UINT64_MAX;
uint8_t x1148 = 5U;
volatile uint64_t t21 = 16659LLU;
uint8_t x1210 = 98U;
uint64_t x1211 = 31746521882470LLU;
int8_t x1294 = INT8_MIN;
int8_t x1359 = -1;
static uint32_t t25 = 2599U;
uint32_t x1398 = 4063U;
uint8_t x1465 = UINT8_MAX;
int16_t x1466 = -1;
int64_t t29 = -48LL;
int8_t x1484 = 9;
int32_t x1571 = -228;
uint8_t x1597 = UINT8_MAX;
uint32_t x1954 = UINT32_MAX;
uint32_t t37 = 0U;
int16_t x2133 = INT16_MAX;
int8_t x2196 = 1;
static volatile int32_t t43 = 15483924;
int32_t x2646 = -4;
int8_t x2690 = INT8_MAX;
int8_t x2698 = INT8_MAX;
volatile int8_t x2866 = -1;
static uint64_t x2995 = 1283673995498597LLU;
volatile uint32_t x2996 = 0U;
volatile uint64_t t52 = 2243145LLU;
uint8_t x3058 = 20U;
int8_t x3059 = INT8_MIN;
static volatile uint32_t x3087 = 6179U;
uint64_t x3142 = UINT64_MAX;
static int8_t x3144 = 0;
volatile int8_t x3292 = 4;
volatile uint32_t t63 = 50724U;
int8_t x3362 = 0;
static int8_t x3364 = 1;
uint8_t x3374 = 14U;
uint8_t x3473 = UINT8_MAX;
uint32_t x3475 = UINT32_MAX;
volatile uint32_t t68 = 345004U;
int32_t x3678 = INT32_MAX;
uint8_t x3762 = UINT8_MAX;
int16_t x3787 = INT16_MAX;
int32_t x3809 = INT32_MAX;
volatile int16_t x3873 = INT16_MAX;
int64_t x3874 = INT64_MAX;
int16_t x4026 = -8410;
uint64_t x4145 = 6069981LLU;
int32_t x4146 = INT32_MIN;
volatile int16_t x4147 = -10;
uint64_t t81 = 5940464444LLU;
uint8_t x4268 = 10U;
int64_t x4298 = -1LL;
static int64_t t84 = -4915820890214LL;
int8_t x4404 = 2;
uint8_t x4548 = 0U;
volatile uint64_t t88 = 326LLU;
volatile uint8_t x4556 = 6U;
int64_t x4645 = 194684599LL;
int64_t t91 = -3983494756845215LL;
uint64_t x4793 = UINT64_MAX;
static uint64_t t94 = 108LLU;
uint16_t x4929 = UINT16_MAX;
uint16_t x4990 = 3290U;


void f0(void) {
	int16_t x5 = -1;
	int32_t x6 = INT32_MAX;
	uint32_t x7 = UINT32_MAX;
	volatile uint16_t x8 = 16U;
	static uint32_t t0 = 1127411646U;

	t0 = ((x5+(x6%x7))<<x8);

	if (t0 != 4294836224U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x61 = INT8_MIN;
	uint16_t x62 = 248U;
	int32_t t1 = -8409702;

	t1 = ((x61+(x62%x63))<<x64);

	if (t1 != 240) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x65 = 2LLU;
	static uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = UINT16_MAX;
	static int16_t x68 = 63;

	t2 = ((x65+(x66%x67))<<x68);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x165 = 14;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = 3872650;
	uint8_t x168 = 20U;
	int32_t t3 = 10141;

	t3 = ((x165+(x166%x167))<<x168);

	if (t3 != 282066944) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MIN;
	static volatile int64_t t4 = 31LL;

	t4 = ((x173+(x174%x175))<<x176);

	if (t4 != 9223372036854712235LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x309 = 2517199933924236LLU;
	int32_t x310 = -435622;
	volatile uint8_t x312 = 30U;

	t5 = ((x309+(x310%x311))<<x312);

	if (t5 != 5906744539367866368LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x421 = INT16_MIN;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = 43U;
	uint64_t t6 = 2136981653719LLU;

	t6 = ((x421+(x422%x423))<<x424);

	if (t6 != 18446735277616529408LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x438 = INT8_MIN;
	int8_t x440 = 1;
	volatile int64_t t7 = -152781104416429591LL;

	t7 = ((x437+(x438%x439))<<x440);

	if (t7 != 2674LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x445 = 32271316;
	static int32_t x446 = INT32_MAX;
	uint32_t x447 = 27U;
	volatile uint32_t t8 = 2U;

	t8 = ((x445+(x446%x447))<<x448);

	if (t8 != 3334332416U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x465 = -4;
	static uint64_t x466 = 196644804LLU;
	int64_t x467 = -1LL;
	uint8_t x468 = 3U;
	uint64_t t9 = 130LLU;

	t9 = ((x465+(x466%x467))<<x468);

	if (t9 != 1573158400LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x605 = -1;
	int32_t x607 = INT32_MIN;
	uint16_t x608 = 26U;
	volatile int64_t t10 = 52763867526203436LL;

	t10 = ((x605+(x606%x607))<<x608);

	if (t10 != 33826864527048704LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x741 = 47;
	int32_t x742 = 2607;
	static volatile uint64_t x744 = 0LLU;
	static int32_t t11 = 6136943;

	t11 = ((x741+(x742%x743))<<x744);

	if (t11 != 2654) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x757 = 5947;
	int8_t x758 = INT8_MIN;
	int16_t x759 = -2;
	uint64_t x760 = 1LLU;

	t12 = ((x757+(x758%x759))<<x760);

	if (t12 != 11894) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x761 = INT16_MAX;
	int8_t x762 = INT8_MAX;
	uint32_t x763 = UINT32_MAX;
	int32_t x764 = 7;
	volatile uint32_t t13 = 102675U;

	t13 = ((x761+(x762%x763))<<x764);

	if (t13 != 4210432U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x766 = INT64_MIN;
	int8_t x767 = -7;
	volatile int64_t t14 = 735833133803030LL;

	t14 = ((x765+(x766%x767))<<x768);

	if (t14 != 3047424LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x769 = UINT16_MAX;
	uint8_t x770 = UINT8_MAX;
	int16_t x771 = 59;
	uint32_t x772 = 1U;

	t15 = ((x769+(x770%x771))<<x772);

	if (t15 != 131108) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x825 = 11870LL;
	uint8_t x826 = 2U;
	volatile uint32_t x827 = 322797376U;
	volatile int8_t x828 = 1;
	static volatile int64_t t16 = -58767642785583LL;

	t16 = ((x825+(x826%x827))<<x828);

	if (t16 != 23744LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x849 = UINT16_MAX;
	static int8_t x850 = INT8_MAX;
	static uint8_t x851 = UINT8_MAX;
	int8_t x852 = 0;
	int32_t t17 = 11725;

	t17 = ((x849+(x850%x851))<<x852);

	if (t17 != 65662) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x902 = -55884797476LL;
	uint64_t x903 = 185053950LLU;
	uint16_t x904 = 0U;
	volatile uint64_t t18 = 221641651LLU;

	t18 = ((x901+(x902%x903))<<x904);

	if (t18 != 82898639LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x982 = -26983808;
	volatile int8_t x983 = INT8_MAX;

	t19 = ((x981+(x982%x983))<<x984);

	if (t19 != 4294959680U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x989 = 48U;
	int32_t x990 = -2;
	static int64_t x991 = INT64_MIN;
	static uint8_t x992 = 26U;
	int64_t t20 = 785LL;

	t20 = ((x989+(x990%x991))<<x992);

	if (t20 != 3087007744LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1145 = 26;
	static int16_t x1147 = -1;

	t21 = ((x1145+(x1146%x1147))<<x1148);

	if (t21 != 832LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1209 = 1978;
	volatile uint8_t x1212 = 7U;
	uint64_t t22 = 987781400574LLU;

	t22 = ((x1209+(x1210%x1211))<<x1212);

	if (t22 != 265728LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x1293 = 9U;
	static int8_t x1295 = -1;
	uint8_t x1296 = 3U;
	volatile int32_t t23 = -814808;

	t23 = ((x1293+(x1294%x1295))<<x1296);

	if (t23 != 72) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1349 = UINT8_MAX;
	int32_t x1350 = 54;
	int64_t x1351 = INT64_MIN;
	static int32_t x1352 = 3;
	volatile int64_t t24 = -67883052232630LL;

	t24 = ((x1349+(x1350%x1351))<<x1352);

	if (t24 != 2472LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1357 = UINT32_MAX;
	volatile int8_t x1358 = INT8_MIN;
	uint32_t x1360 = 1U;

	t25 = ((x1357+(x1358%x1359))<<x1360);

	if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1397 = INT32_MIN;
	static int16_t x1399 = INT16_MIN;
	uint16_t x1400 = 28U;
	uint32_t t26 = 91402982U;

	t26 = ((x1397+(x1398%x1399))<<x1400);

	if (t26 != 4026531840U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1437 = 2U;
	uint64_t x1438 = 545LLU;
	int32_t x1439 = -1;
	int64_t x1440 = 11LL;
	volatile uint64_t t27 = 28928262730705119LLU;

	t27 = ((x1437+(x1438%x1439))<<x1440);

	if (t27 != 1120256LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1453 = 2749369;
	volatile uint8_t x1454 = UINT8_MAX;
	uint16_t x1455 = 1444U;
	uint8_t x1456 = 1U;
	static int32_t t28 = -863671;

	t28 = ((x1453+(x1454%x1455))<<x1456);

	if (t28 != 5499248) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1467 = INT64_MAX;
	static int32_t x1468 = 26;

	t29 = ((x1465+(x1466%x1467))<<x1468);

	if (t29 != 17045651456LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1469 = UINT32_MAX;
	static int32_t x1470 = -1;
	int16_t x1471 = -1;
	int32_t x1472 = 2;
	uint32_t t30 = 443U;

	t30 = ((x1469+(x1470%x1471))<<x1472);

	if (t30 != 4294967292U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1481 = -1LL;
	int64_t x1482 = INT64_MAX;
	uint16_t x1483 = UINT16_MAX;
	int64_t t31 = -1017LL;

	t31 = ((x1481+(x1482%x1483))<<x1484);

	if (t31 != 16776192LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1493 = 3094U;
	int64_t x1494 = -1LL;
	int64_t x1495 = INT64_MAX;
	int8_t x1496 = 1;
	volatile int64_t t32 = -136039328621LL;

	t32 = ((x1493+(x1494%x1495))<<x1496);

	if (t32 != 6186LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1569 = 10933563223659LLU;
	volatile int16_t x1570 = -1;
	volatile int16_t x1572 = 27;
	uint64_t t33 = 1632431313824342055LLU;

	t33 = ((x1569+(x1570%x1571))<<x1572);

	if (t33 != 10185233000678031360LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1598 = 648LL;
	int16_t x1599 = INT16_MIN;
	int16_t x1600 = 3;
	int64_t t34 = 12109175212324021LL;

	t34 = ((x1597+(x1598%x1599))<<x1600);

	if (t34 != 7224LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1665 = 55;
	uint64_t x1666 = 51055LLU;
	uint64_t x1667 = UINT64_MAX;
	static uint16_t x1668 = 9U;
	volatile uint64_t t35 = 1819582749LLU;

	t35 = ((x1665+(x1666%x1667))<<x1668);

	if (t35 != 26168320LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1933 = 0U;
	uint8_t x1934 = 47U;
	static volatile uint32_t x1935 = 2618769U;
	uint32_t x1936 = 1U;
	volatile uint32_t t36 = 10767U;

	t36 = ((x1933+(x1934%x1935))<<x1936);

	if (t36 != 94U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1953 = INT16_MAX;
	int16_t x1955 = INT16_MAX;
	uint8_t x1956 = 0U;

	t37 = ((x1953+(x1954%x1955))<<x1956);

	if (t37 != 32770U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2069 = -217620;
	int32_t x2070 = -763;
	volatile uint64_t x2071 = 4453636LLU;
	int16_t x2072 = 4;
	static volatile uint64_t t38 = 2631LLU;

	t38 = ((x2069+(x2070%x2071))<<x2072);

	if (t38 != 34069456LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2129 = 577U;
	static uint32_t x2130 = UINT32_MAX;
	int16_t x2131 = INT16_MAX;
	volatile int8_t x2132 = 1;
	uint32_t t39 = 4991U;

	t39 = ((x2129+(x2130%x2131))<<x2132);

	if (t39 != 1160U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2134 = INT64_MAX;
	int16_t x2135 = INT16_MAX;
	uint8_t x2136 = 31U;
	int64_t t40 = -6069LL;

	t40 = ((x2133+(x2134%x2135))<<x2136);

	if (t40 != 70381629079552LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x2193 = UINT64_MAX;
	volatile int32_t x2194 = 0;
	uint32_t x2195 = 2273874U;
	uint64_t t41 = 35LLU;

	t41 = ((x2193+(x2194%x2195))<<x2196);

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2369 = -1LL;
	uint32_t x2370 = 33U;
	static uint64_t x2371 = 50LLU;
	static uint16_t x2372 = 57U;
	static volatile uint64_t t42 = 3980LLU;

	t42 = ((x2369+(x2370%x2371))<<x2372);

	if (t42 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x2429 = -1;
	int8_t x2430 = 5;
	static int8_t x2431 = INT8_MIN;
	int16_t x2432 = 0;

	t43 = ((x2429+(x2430%x2431))<<x2432);

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x2625 = 143U;
	int64_t x2626 = 155663247144365LL;
	int16_t x2627 = INT16_MIN;
	int16_t x2628 = 17;
	static volatile int64_t t44 = 28628942992LL;

	t44 = ((x2625+(x2626%x2627))<<x2628);

	if (t44 != 3967287296LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2645 = UINT64_MAX;
	int64_t x2647 = 60596045762LL;
	volatile int8_t x2648 = 63;
	volatile uint64_t t45 = 12LLU;

	t45 = ((x2645+(x2646%x2647))<<x2648);

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2689 = UINT64_MAX;
	int8_t x2691 = INT8_MIN;
	uint8_t x2692 = 1U;
	uint64_t t46 = 119729LLU;

	t46 = ((x2689+(x2690%x2691))<<x2692);

	if (t46 != 252LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2697 = 1973485LL;
	int64_t x2699 = INT64_MAX;
	static int16_t x2700 = 0;
	int64_t t47 = -22LL;

	t47 = ((x2697+(x2698%x2699))<<x2700);

	if (t47 != 1973612LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2829 = 1U;
	int64_t x2830 = INT64_MAX;
	uint16_t x2831 = 1346U;
	static volatile int8_t x2832 = 24;
	volatile int64_t t48 = -422139081834126075LL;

	t48 = ((x2829+(x2830%x2831))<<x2832);

	if (t48 != 7784628224LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2853 = INT32_MIN;
	uint8_t x2854 = 1U;
	volatile uint64_t x2855 = UINT64_MAX;
	uint8_t x2856 = 1U;
	volatile uint64_t t49 = 73891LLU;

	t49 = ((x2853+(x2854%x2855))<<x2856);

	if (t49 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2865 = UINT8_MAX;
	int16_t x2867 = INT16_MAX;
	int8_t x2868 = 22;
	int32_t t50 = 5527;

	t50 = ((x2865+(x2866%x2867))<<x2868);

	if (t50 != 1065353216) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x2921 = UINT32_MAX;
	int32_t x2922 = INT32_MAX;
	int8_t x2923 = INT8_MAX;
	volatile uint8_t x2924 = 2U;
	uint32_t t51 = 6U;

	t51 = ((x2921+(x2922%x2923))<<x2924);

	if (t51 != 24U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x2993 = 42U;
	static uint8_t x2994 = 3U;

	t52 = ((x2993+(x2994%x2995))<<x2996);

	if (t52 != 45LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3057 = INT16_MAX;
	volatile uint16_t x3060 = 0U;
	int32_t t53 = -7370;

	t53 = ((x3057+(x3058%x3059))<<x3060);

	if (t53 != 32787) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3085 = UINT64_MAX;
	int16_t x3086 = -1;
	static uint16_t x3088 = 27U;
	uint64_t t54 = 2251936LLU;

	t54 = ((x3085+(x3086%x3087))<<x3088);

	if (t54 != 671088640LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x3093 = INT32_MIN;
	volatile int8_t x3094 = -1;
	uint64_t x3095 = 4006063696218338219LLU;
	uint8_t x3096 = 1U;
	volatile uint64_t t55 = 249892184872LLU;

	t55 = ((x3093+(x3094%x3095))<<x3096);

	if (t55 != 4844978573377430182LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3101 = INT8_MAX;
	static volatile uint64_t x3102 = UINT64_MAX;
	volatile int16_t x3103 = 2;
	int8_t x3104 = 0;
	uint64_t t56 = 7LLU;

	t56 = ((x3101+(x3102%x3103))<<x3104);

	if (t56 != 128LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3141 = INT32_MIN;
	int32_t x3143 = -1;
	uint64_t t57 = 92606524199870LLU;

	t57 = ((x3141+(x3142%x3143))<<x3144);

	if (t57 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3149 = 3;
	uint64_t x3150 = 801759898140247326LLU;
	int16_t x3151 = INT16_MIN;
	int16_t x3152 = 1;
	volatile uint64_t t58 = 13929639428457227LLU;

	t58 = ((x3149+(x3150%x3151))<<x3152);

	if (t58 != 1603519796280494658LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x3157 = 62U;
	static int32_t x3158 = INT32_MIN;
	int32_t x3159 = -197;
	volatile uint8_t x3160 = 2U;
	static volatile int32_t t59 = -65;

	t59 = ((x3157+(x3158%x3159))<<x3160);

	if (t59 != 72) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3185 = UINT8_MAX;
	static int64_t x3186 = -1LL;
	int8_t x3187 = INT8_MAX;
	uint32_t x3188 = 3U;
	volatile int64_t t60 = 3639257279230LL;

	t60 = ((x3185+(x3186%x3187))<<x3188);

	if (t60 != 2032LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3197 = -1;
	int32_t x3198 = INT32_MAX;
	int8_t x3199 = INT8_MIN;
	static uint32_t x3200 = 0U;
	int32_t t61 = -14572;

	t61 = ((x3197+(x3198%x3199))<<x3200);

	if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3289 = 28;
	uint32_t x3290 = 10756545U;
	int16_t x3291 = INT16_MIN;
	uint32_t t62 = 3940U;

	t62 = ((x3289+(x3290%x3291))<<x3292);

	if (t62 != 172105168U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3297 = INT16_MAX;
	static uint8_t x3298 = 7U;
	uint32_t x3299 = UINT32_MAX;
	uint16_t x3300 = 1U;

	t63 = ((x3297+(x3298%x3299))<<x3300);

	if (t63 != 65548U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3361 = 1;
	int64_t x3363 = INT64_MIN;
	volatile int64_t t64 = -1830626759922028416LL;

	t64 = ((x3361+(x3362%x3363))<<x3364);

	if (t64 != 2LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3369 = 28U;
	volatile uint32_t x3370 = 134996564U;
	int16_t x3371 = 90;
	uint8_t x3372 = 7U;
	volatile uint32_t t65 = 7803128U;

	t65 = ((x3369+(x3370%x3371))<<x3372);

	if (t65 != 13056U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3373 = -1;
	static volatile int16_t x3375 = INT16_MAX;
	static int16_t x3376 = 1;
	static int32_t t66 = 72273;

	t66 = ((x3373+(x3374%x3375))<<x3376);

	if (t66 != 26) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3474 = UINT64_MAX;
	uint8_t x3476 = 0U;
	uint64_t t67 = 24LLU;

	t67 = ((x3473+(x3474%x3475))<<x3476);

	if (t67 != 255LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3481 = 1U;
	uint32_t x3482 = 26897U;
	static int8_t x3483 = 1;
	int8_t x3484 = 6;

	t68 = ((x3481+(x3482%x3483))<<x3484);

	if (t68 != 64U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x3573 = -1LL;
	uint32_t x3574 = 29842057U;
	uint32_t x3575 = 40673967U;
	int8_t x3576 = 1;
	int64_t t69 = 98841139LL;

	t69 = ((x3573+(x3574%x3575))<<x3576);

	if (t69 != 59684112LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3649 = -419;
	uint64_t x3650 = 3LLU;
	static int32_t x3651 = INT32_MAX;
	static uint8_t x3652 = 0U;
	uint64_t t70 = 527356143531LLU;

	t70 = ((x3649+(x3650%x3651))<<x3652);

	if (t70 != 18446744073709551200LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3677 = INT64_MIN;
	uint64_t x3679 = 35250989LLU;
	volatile uint8_t x3680 = 5U;
	static volatile uint64_t t71 = 16725LLU;

	t71 = ((x3677+(x3678%x3679))<<x3680);

	if (t71 != 1037577824LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3733 = 1;
	int16_t x3734 = 48;
	volatile uint8_t x3735 = UINT8_MAX;
	uint8_t x3736 = 24U;
	int32_t t72 = -1860;

	t72 = ((x3733+(x3734%x3735))<<x3736);

	if (t72 != 822083584) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3761 = -1LL;
	int8_t x3763 = INT8_MIN;
	static int8_t x3764 = 56;
	int64_t t73 = -844260LL;

	t73 = ((x3761+(x3762%x3763))<<x3764);

	if (t73 != 9079256848778919936LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3785 = UINT16_MAX;
	int16_t x3786 = -1;
	static uint8_t x3788 = 2U;
	static int32_t t74 = 379642;

	t74 = ((x3785+(x3786%x3787))<<x3788);

	if (t74 != 262136) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3810 = -14895;
	uint64_t x3811 = 13142329502239LLU;
	int8_t x3812 = 25;
	static volatile uint64_t t75 = 509462399LLU;

	t75 = ((x3809+(x3810%x3811))<<x3812);

	if (t75 != 1146776859581612032LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3875 = UINT16_MAX;
	uint8_t x3876 = 1U;
	volatile int64_t t76 = 4054117230910168LL;

	t76 = ((x3873+(x3874%x3875))<<x3876);

	if (t76 != 131068LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3933 = 2034366743238287LL;
	static uint16_t x3934 = 1U;
	int64_t x3935 = INT64_MAX;
	uint16_t x3936 = 0U;
	int64_t t77 = -78160457LL;

	t77 = ((x3933+(x3934%x3935))<<x3936);

	if (t77 != 2034366743238288LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x4025 = 12546605208LLU;
	volatile int32_t x4027 = -25073;
	static uint8_t x4028 = 44U;
	volatile uint64_t t78 = 1167227065123LLU;

	t78 = ((x4025+(x4026%x4027))<<x4028);

	if (t78 != 6772252755286294528LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4101 = 8470951988433LLU;
	volatile int32_t x4102 = -1;
	int64_t x4103 = INT64_MIN;
	static uint8_t x4104 = 7U;
	uint64_t t79 = 1565LLU;

	t79 = ((x4101+(x4102%x4103))<<x4104);

	if (t79 != 1084281854519296LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4121 = UINT8_MAX;
	uint8_t x4122 = 0U;
	static volatile uint8_t x4123 = 3U;
	int64_t x4124 = 7LL;
	volatile int32_t t80 = 13298;

	t80 = ((x4121+(x4122%x4123))<<x4124);

	if (t80 != 32640) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x4148 = 11U;

	t81 = ((x4145+(x4146%x4147))<<x4148);

	if (t81 != 12431304704LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x4265 = 5;
	static int8_t x4266 = INT8_MAX;
	volatile int64_t x4267 = INT64_MAX;
	volatile int64_t t82 = -12022LL;

	t82 = ((x4265+(x4266%x4267))<<x4268);

	if (t82 != 135168LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4297 = 0;
	uint8_t x4299 = 1U;
	volatile int16_t x4300 = 1;
	volatile int64_t t83 = 2170190375551863LL;

	t83 = ((x4297+(x4298%x4299))<<x4300);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4369 = -1;
	int64_t x4370 = 1427736821LL;
	uint16_t x4371 = UINT16_MAX;
	uint8_t x4372 = 1U;

	t84 = ((x4369+(x4370%x4371))<<x4372);

	if (t84 != 113690LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4401 = -1;
	int16_t x4402 = -1;
	uint64_t x4403 = UINT64_MAX;
	volatile uint64_t t85 = 1774237717LLU;

	t85 = ((x4401+(x4402%x4403))<<x4404);

	if (t85 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4481 = -10;
	static uint32_t x4482 = UINT32_MAX;
	int64_t x4483 = INT64_MIN;
	int32_t x4484 = 2;
	volatile int64_t t86 = 160273387551LL;

	t86 = ((x4481+(x4482%x4483))<<x4484);

	if (t86 != 17179869140LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4493 = -1LL;
	uint64_t x4494 = 5251LLU;
	int64_t x4495 = INT64_MIN;
	uint16_t x4496 = 4U;
	volatile uint64_t t87 = 6512185986LLU;

	t87 = ((x4493+(x4494%x4495))<<x4496);

	if (t87 != 84000LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4545 = -468LL;
	uint64_t x4546 = 8932935261529LLU;
	volatile int16_t x4547 = -1;

	t88 = ((x4545+(x4546%x4547))<<x4548);

	if (t88 != 8932935261061LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4553 = UINT8_MAX;
	int32_t x4554 = INT32_MIN;
	uint32_t x4555 = 96U;
	uint32_t t89 = 4113022U;

	t89 = ((x4553+(x4554%x4555))<<x4556);

	if (t89 != 18368U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x4609 = UINT64_MAX;
	static int8_t x4610 = INT8_MIN;
	int32_t x4611 = INT32_MAX;
	uint8_t x4612 = 31U;
	static uint64_t t90 = 3071034207LLU;

	t90 = ((x4609+(x4610%x4611))<<x4612);

	if (t90 != 18446743796684161024LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4646 = UINT32_MAX;
	int32_t x4647 = -1;
	uint32_t x4648 = 2U;

	t91 = ((x4645+(x4646%x4647))<<x4648);

	if (t91 != 778738396LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4737 = INT32_MAX;
	volatile int64_t x4738 = 121865701861LL;
	static uint16_t x4739 = UINT16_MAX;
	volatile int64_t x4740 = 0LL;
	static int64_t t92 = 706LL;

	t92 = ((x4737+(x4738%x4739))<<x4740);

	if (t92 != 2147510723LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4769 = INT64_MIN;
	volatile int64_t x4770 = 24LL;
	uint64_t x4771 = UINT64_MAX;
	volatile uint64_t x4772 = 14LLU;
	volatile uint64_t t93 = 7104LLU;

	t93 = ((x4769+(x4770%x4771))<<x4772);

	if (t93 != 393216LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4794 = INT32_MIN;
	volatile int16_t x4795 = INT16_MAX;
	volatile uint16_t x4796 = 2U;

	t94 = ((x4793+(x4794%x4795))<<x4796);

	if (t94 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x4930 = INT64_MAX;
	int32_t x4931 = -5586439;
	int32_t x4932 = 6;
	static int64_t t95 = -2019LL;

	t95 = ((x4929+(x4930%x4931))<<x4932);

	if (t95 != 158362816LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4961 = 1225586962LL;
	int64_t x4962 = -1LL;
	static volatile int8_t x4963 = -4;
	static volatile int16_t x4964 = 4;
	int64_t t96 = 385310548231718LL;

	t96 = ((x4961+(x4962%x4963))<<x4964);

	if (t96 != 19609391376LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4989 = INT8_MIN;
	static uint64_t x4991 = 3263197253LLU;
	uint64_t x4992 = 13LLU;
	volatile uint64_t t97 = 6423LLU;

	t97 = ((x4989+(x4990%x4991))<<x4992);

	if (t97 != 25903104LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5105 = 53U;
	static int64_t x5106 = INT64_MIN;
	static int64_t x5107 = INT64_MIN;
	int16_t x5108 = 57;
	static int64_t t98 = 15253735LL;

	t98 = ((x5105+(x5106%x5107))<<x5108);

	if (t98 != 7638104968020361216LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5121 = UINT32_MAX;
	static uint64_t x5122 = 7202144LLU;
	volatile int32_t x5123 = 684320825;
	uint8_t x5124 = 2U;
	uint64_t t99 = 63128LLU;

	t99 = ((x5121+(x5122%x5123))<<x5124);

	if (t99 != 17208677756LLU) { NG(); } else { ; }
	
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

