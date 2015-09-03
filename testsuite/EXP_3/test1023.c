#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x57 = 0U;
int8_t x121 = 60;
uint32_t x123 = UINT32_MAX;
int32_t t4 = 1831980;
volatile uint32_t x183 = 7991752U;
volatile int32_t t5 = 1741;
volatile int64_t x254 = -56778401381LL;
int32_t t7 = -28326;
static uint64_t x451 = 8132LLU;
int8_t x517 = -10;
int32_t t10 = 1;
volatile uint64_t x531 = UINT64_MAX;
uint64_t x532 = 24LLU;
uint8_t x535 = UINT8_MAX;
static int16_t x569 = -1412;
volatile uint64_t x834 = 69128247048047118LLU;
int64_t x1045 = -22531186534LL;
volatile int32_t t18 = 611;
int16_t x1137 = -1;
int64_t x1157 = INT64_MIN;
static volatile int32_t x1194 = -1;
int16_t x1308 = 1;
volatile int64_t x1322 = 2032LL;
int16_t x1774 = -3092;
volatile uint8_t x1776 = 62U;
volatile int32_t x1859 = INT32_MAX;
int8_t x1980 = 12;
int16_t x1985 = 1711;
volatile int8_t x1986 = INT8_MIN;
volatile int32_t t34 = 4;
static int8_t x2154 = -1;
volatile int32_t t37 = 50996406;
uint8_t x2405 = 0U;
static uint8_t x2408 = 19U;
static int8_t x2413 = -1;
int16_t x2414 = INT16_MIN;
static uint64_t x2415 = 374856LLU;
int16_t x2482 = -1;
uint32_t x2484 = 13U;
volatile uint16_t x2643 = UINT16_MAX;
uint8_t x2651 = 0U;
uint16_t x2652 = 4U;
int32_t t45 = -3;
int8_t x2779 = INT8_MAX;
int8_t x2780 = 22;
uint64_t x2792 = 10LLU;
uint32_t x2799 = 30971U;
int32_t x2801 = 5779610;
uint8_t x2935 = 1U;
volatile int32_t t56 = -36485;
volatile int16_t x3038 = 0;
int64_t x3186 = INT64_MAX;
static uint8_t x3370 = UINT8_MAX;
static int32_t x3371 = 815779;
int32_t x3372 = 1;
int32_t x3381 = 60146284;
uint64_t x3401 = 983502719LLU;
int64_t x3403 = 90384178564442399LL;
uint16_t x3404 = 22U;
int8_t x3463 = INT8_MAX;
volatile int32_t t66 = -16163774;
uint32_t x3512 = 34U;
static int32_t t68 = -5737753;
int16_t x3561 = 3;
uint16_t x3562 = 30289U;
static uint16_t x3614 = 17U;
int8_t x3645 = 1;
int16_t x3655 = 77;
volatile uint32_t x3829 = 24U;
uint16_t x3831 = UINT16_MAX;
int64_t x3836 = 0LL;
volatile int32_t t76 = 1;
uint64_t x4159 = 6461048654196985918LLU;
uint16_t x4160 = 0U;
static volatile uint8_t x4294 = 4U;
int8_t x4426 = -32;
volatile uint64_t x4483 = UINT64_MAX;
int16_t x4533 = INT16_MIN;
uint16_t x4534 = 517U;
uint64_t x4546 = 7224417855290826264LLU;
volatile int32_t t87 = -108722799;
uint16_t x4587 = 55U;
int64_t x4837 = -1LL;
int32_t t97 = -7636;
static int16_t x5183 = INT16_MAX;
int32_t t98 = 108567;
int16_t x5192 = 1;
static int32_t t99 = -1;


void f0(void) {
	static volatile int8_t x1 = -1;
	volatile uint32_t x2 = UINT32_MAX;
	uint8_t x3 = 117U;
	uint8_t x4 = 13U;
	volatile int32_t t0 = -367923;

	t0 = ((x1+x2)<(x3>>x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = 78U;
	volatile uint16_t x60 = 0U;
	int32_t t1 = 388;

	t1 = ((x57+x58)<(x59>>x60));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x105 = -1LL;
	int16_t x106 = 35;
	static int8_t x107 = INT8_MAX;
	uint32_t x108 = 3U;
	static int32_t t2 = -9167115;

	t2 = ((x105+x106)<(x107>>x108));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x122 = -1LL;
	int8_t x124 = 0;
	volatile int32_t t3 = -66422025;

	t3 = ((x121+x122)<(x123>>x124));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x177 = INT8_MAX;
	volatile int16_t x178 = INT16_MIN;
	int8_t x179 = 0;
	int8_t x180 = 23;

	t4 = ((x177+x178)<(x179>>x180));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x181 = 9LL;
	int32_t x182 = INT32_MAX;
	int64_t x184 = 1LL;

	t5 = ((x181+x182)<(x183>>x184));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x209 = UINT32_MAX;
	static int64_t x210 = -1366771LL;
	volatile int16_t x211 = 2;
	uint16_t x212 = 1U;
	int32_t t6 = 73;

	t6 = ((x209+x210)<(x211>>x212));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x253 = -1;
	static int8_t x255 = INT8_MAX;
	volatile uint32_t x256 = 1U;

	t7 = ((x253+x254)<(x255>>x256));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x405 = INT16_MAX;
	volatile int8_t x406 = INT8_MAX;
	uint16_t x407 = UINT16_MAX;
	volatile int16_t x408 = 31;
	int32_t t8 = -92;

	t8 = ((x405+x406)<(x407>>x408));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x449 = INT16_MIN;
	int16_t x450 = INT16_MIN;
	uint8_t x452 = 54U;
	volatile int32_t t9 = 18394505;

	t9 = ((x449+x450)<(x451>>x452));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x518 = UINT32_MAX;
	int8_t x519 = 1;
	static uint16_t x520 = 1U;

	t10 = ((x517+x518)<(x519>>x520));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x529 = INT64_MIN;
	volatile uint64_t x530 = 11699874LLU;
	volatile int32_t t11 = -16518446;

	t11 = ((x529+x530)<(x531>>x532));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x533 = UINT32_MAX;
	int8_t x534 = -2;
	uint8_t x536 = 0U;
	volatile int32_t t12 = 3;

	t12 = ((x533+x534)<(x535>>x536));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x570 = INT16_MAX;
	static int16_t x571 = 10024;
	volatile int8_t x572 = 8;
	volatile int32_t t13 = 1541106;

	t13 = ((x569+x570)<(x571>>x572));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x657 = INT32_MAX;
	uint32_t x658 = UINT32_MAX;
	uint16_t x659 = UINT16_MAX;
	int16_t x660 = 4;
	static int32_t t14 = -1;

	t14 = ((x657+x658)<(x659>>x660));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x757 = 659U;
	uint32_t x758 = 1U;
	int32_t x759 = 5080977;
	uint16_t x760 = 1U;
	static int32_t t15 = 103427243;

	t15 = ((x757+x758)<(x759>>x760));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x833 = INT32_MIN;
	int8_t x835 = 3;
	static volatile int8_t x836 = 27;
	volatile int32_t t16 = -978;

	t16 = ((x833+x834)<(x835>>x836));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1046 = INT8_MAX;
	volatile uint16_t x1047 = 108U;
	uint32_t x1048 = 19U;
	static volatile int32_t t17 = 15059245;

	t17 = ((x1045+x1046)<(x1047>>x1048));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1053 = INT64_MIN;
	int8_t x1054 = INT8_MAX;
	uint64_t x1055 = 18709LLU;
	int16_t x1056 = 1;

	t18 = ((x1053+x1054)<(x1055>>x1056));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1057 = INT32_MIN;
	volatile uint16_t x1058 = UINT16_MAX;
	volatile int8_t x1059 = 27;
	uint8_t x1060 = 1U;
	int32_t t19 = -3301749;

	t19 = ((x1057+x1058)<(x1059>>x1060));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1138 = UINT32_MAX;
	int8_t x1139 = 10;
	volatile uint16_t x1140 = 3U;
	int32_t t20 = -27;

	t20 = ((x1137+x1138)<(x1139>>x1140));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1158 = UINT32_MAX;
	static volatile uint16_t x1159 = 51U;
	uint16_t x1160 = 15U;
	volatile int32_t t21 = 69620;

	t21 = ((x1157+x1158)<(x1159>>x1160));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1165 = -1;
	uint64_t x1166 = UINT64_MAX;
	int32_t x1167 = 768;
	int8_t x1168 = 0;
	static int32_t t22 = 586738041;

	t22 = ((x1165+x1166)<(x1167>>x1168));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1193 = INT16_MIN;
	volatile int8_t x1195 = INT8_MAX;
	volatile uint8_t x1196 = 1U;
	static volatile int32_t t23 = 30862281;

	t23 = ((x1193+x1194)<(x1195>>x1196));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1305 = 3413732978810896LLU;
	static volatile int32_t x1306 = INT32_MIN;
	volatile uint8_t x1307 = 8U;
	int32_t t24 = -6;

	t24 = ((x1305+x1306)<(x1307>>x1308));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1321 = INT64_MIN;
	volatile uint32_t x1323 = UINT32_MAX;
	uint8_t x1324 = 19U;
	volatile int32_t t25 = 19683231;

	t25 = ((x1321+x1322)<(x1323>>x1324));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1329 = -1;
	static uint64_t x1330 = 14388328LLU;
	static uint64_t x1331 = 352885180LLU;
	volatile uint64_t x1332 = 3LLU;
	volatile int32_t t26 = 0;

	t26 = ((x1329+x1330)<(x1331>>x1332));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1413 = 32U;
	int8_t x1414 = -1;
	uint8_t x1415 = 0U;
	uint8_t x1416 = 7U;
	int32_t t27 = -55177218;

	t27 = ((x1413+x1414)<(x1415>>x1416));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1433 = -73105;
	int16_t x1434 = INT16_MIN;
	volatile uint8_t x1435 = 2U;
	volatile int32_t x1436 = 3;
	int32_t t28 = -388288697;

	t28 = ((x1433+x1434)<(x1435>>x1436));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1653 = -1;
	uint16_t x1654 = UINT16_MAX;
	static uint32_t x1655 = UINT32_MAX;
	int64_t x1656 = 2LL;
	volatile int32_t t29 = 374;

	t29 = ((x1653+x1654)<(x1655>>x1656));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1773 = 101885276294026097LLU;
	int64_t x1775 = INT64_MAX;
	int32_t t30 = 176631;

	t30 = ((x1773+x1774)<(x1775>>x1776));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1857 = INT8_MIN;
	int8_t x1858 = INT8_MIN;
	volatile uint32_t x1860 = 0U;
	static volatile int32_t t31 = 0;

	t31 = ((x1857+x1858)<(x1859>>x1860));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1929 = 47853422U;
	uint8_t x1930 = UINT8_MAX;
	uint16_t x1931 = UINT16_MAX;
	static uint8_t x1932 = 3U;
	static volatile int32_t t32 = 803880;

	t32 = ((x1929+x1930)<(x1931>>x1932));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1977 = 2698;
	volatile int32_t x1978 = 1946191;
	volatile uint16_t x1979 = UINT16_MAX;
	int32_t t33 = 100;

	t33 = ((x1977+x1978)<(x1979>>x1980));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1987 = 19593U;
	int8_t x1988 = 0;

	t34 = ((x1985+x1986)<(x1987>>x1988));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2125 = 389LLU;
	int64_t x2126 = 1063584316604589LL;
	static volatile uint64_t x2127 = 3274LLU;
	int8_t x2128 = 6;
	int32_t t35 = -41;

	t35 = ((x2125+x2126)<(x2127>>x2128));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2133 = 243738927U;
	int8_t x2134 = INT8_MIN;
	static uint64_t x2135 = 61079LLU;
	static uint8_t x2136 = 1U;
	int32_t t36 = -24597760;

	t36 = ((x2133+x2134)<(x2135>>x2136));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2153 = 3979313739417079LLU;
	volatile uint16_t x2155 = UINT16_MAX;
	static int8_t x2156 = 2;

	t37 = ((x2153+x2154)<(x2155>>x2156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2213 = INT64_MIN;
	uint32_t x2214 = UINT32_MAX;
	static int64_t x2215 = 1103691458327257LL;
	uint64_t x2216 = 7LLU;
	int32_t t38 = 183;

	t38 = ((x2213+x2214)<(x2215>>x2216));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x2406 = INT8_MAX;
	volatile int8_t x2407 = 0;
	int32_t t39 = -445702446;

	t39 = ((x2405+x2406)<(x2407>>x2408));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2416 = 15U;
	int32_t t40 = -1;

	t40 = ((x2413+x2414)<(x2415>>x2416));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2425 = INT16_MIN;
	uint8_t x2426 = UINT8_MAX;
	int64_t x2427 = 757740647LL;
	int8_t x2428 = 1;
	int32_t t41 = 128593180;

	t41 = ((x2425+x2426)<(x2427>>x2428));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2445 = INT32_MAX;
	int64_t x2446 = -1LL;
	static uint16_t x2447 = 3213U;
	static uint8_t x2448 = 1U;
	volatile int32_t t42 = -5801920;

	t42 = ((x2445+x2446)<(x2447>>x2448));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2481 = -246;
	uint64_t x2483 = 281835LLU;
	volatile int32_t t43 = -1;

	t43 = ((x2481+x2482)<(x2483>>x2484));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2641 = INT8_MIN;
	uint64_t x2642 = UINT64_MAX;
	int16_t x2644 = 10;
	static int32_t t44 = -494;

	t44 = ((x2641+x2642)<(x2643>>x2644));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2649 = -1;
	int32_t x2650 = INT32_MAX;

	t45 = ((x2649+x2650)<(x2651>>x2652));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2689 = -1;
	volatile int8_t x2690 = -3;
	int8_t x2691 = INT8_MAX;
	uint64_t x2692 = 0LLU;
	int32_t t46 = -293204445;

	t46 = ((x2689+x2690)<(x2691>>x2692));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x2753 = 1LLU;
	uint8_t x2754 = 38U;
	int32_t x2755 = INT32_MAX;
	int16_t x2756 = 5;
	volatile int32_t t47 = 152484;

	t47 = ((x2753+x2754)<(x2755>>x2756));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2765 = 3U;
	volatile int32_t x2766 = INT32_MIN;
	static int64_t x2767 = 490314LL;
	volatile uint8_t x2768 = 12U;
	int32_t t48 = 426936892;

	t48 = ((x2765+x2766)<(x2767>>x2768));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2777 = INT16_MIN;
	uint16_t x2778 = UINT16_MAX;
	int32_t t49 = 954;

	t49 = ((x2777+x2778)<(x2779>>x2780));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2789 = -669357LL;
	int8_t x2790 = INT8_MAX;
	static volatile uint8_t x2791 = 6U;
	static volatile int32_t t50 = 114;

	t50 = ((x2789+x2790)<(x2791>>x2792));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2797 = INT64_MIN;
	static uint16_t x2798 = UINT16_MAX;
	int32_t x2800 = 1;
	volatile int32_t t51 = -123418714;

	t51 = ((x2797+x2798)<(x2799>>x2800));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2802 = 1367547523882LL;
	uint16_t x2803 = 1483U;
	uint8_t x2804 = 1U;
	volatile int32_t t52 = 77;

	t52 = ((x2801+x2802)<(x2803>>x2804));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2845 = INT16_MIN;
	static int8_t x2846 = INT8_MIN;
	int64_t x2847 = 166LL;
	static int8_t x2848 = 2;
	int32_t t53 = 1;

	t53 = ((x2845+x2846)<(x2847>>x2848));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2849 = -1;
	int8_t x2850 = -11;
	volatile uint32_t x2851 = UINT32_MAX;
	uint8_t x2852 = 0U;
	int32_t t54 = -290;

	t54 = ((x2849+x2850)<(x2851>>x2852));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2905 = 16283773549LLU;
	int8_t x2906 = 0;
	uint32_t x2907 = UINT32_MAX;
	uint16_t x2908 = 1U;
	volatile int32_t t55 = 3;

	t55 = ((x2905+x2906)<(x2907>>x2908));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2933 = -114;
	int16_t x2934 = INT16_MAX;
	static int16_t x2936 = 0;

	t56 = ((x2933+x2934)<(x2935>>x2936));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3037 = UINT64_MAX;
	uint64_t x3039 = 103314406855429LLU;
	uint32_t x3040 = 3U;
	int32_t t57 = 36;

	t57 = ((x3037+x3038)<(x3039>>x3040));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x3105 = INT64_MAX;
	volatile int16_t x3106 = -1;
	uint8_t x3107 = 15U;
	uint16_t x3108 = 10U;
	int32_t t58 = 5807;

	t58 = ((x3105+x3106)<(x3107>>x3108));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x3185 = 952083414386429LLU;
	static uint32_t x3187 = 1516797U;
	uint32_t x3188 = 4U;
	volatile int32_t t59 = 13044;

	t59 = ((x3185+x3186)<(x3187>>x3188));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3193 = 9U;
	int32_t x3194 = INT32_MIN;
	static int32_t x3195 = INT32_MAX;
	static uint16_t x3196 = 7U;
	volatile int32_t t60 = -331560134;

	t60 = ((x3193+x3194)<(x3195>>x3196));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x3257 = 3U;
	int64_t x3258 = -1LL;
	int32_t x3259 = 6;
	uint8_t x3260 = 6U;
	volatile int32_t t61 = -3335;

	t61 = ((x3257+x3258)<(x3259>>x3260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x3369 = INT8_MIN;
	static volatile int32_t t62 = 1;

	t62 = ((x3369+x3370)<(x3371>>x3372));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3382 = 0U;
	volatile uint64_t x3383 = UINT64_MAX;
	uint16_t x3384 = 9U;
	static volatile int32_t t63 = -287235019;

	t63 = ((x3381+x3382)<(x3383>>x3384));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3402 = INT64_MIN;
	int32_t t64 = -24736;

	t64 = ((x3401+x3402)<(x3403>>x3404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3429 = INT32_MAX;
	static uint64_t x3430 = 552232LLU;
	volatile uint32_t x3431 = 5U;
	volatile uint8_t x3432 = 6U;
	static int32_t t65 = 92;

	t65 = ((x3429+x3430)<(x3431>>x3432));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3461 = INT32_MIN;
	int64_t x3462 = -91LL;
	volatile int16_t x3464 = 2;

	t66 = ((x3461+x3462)<(x3463>>x3464));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x3509 = 16703U;
	uint32_t x3510 = 1802930850U;
	uint64_t x3511 = UINT64_MAX;
	volatile int32_t t67 = -2043;

	t67 = ((x3509+x3510)<(x3511>>x3512));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3521 = 23;
	volatile int32_t x3522 = -86;
	uint16_t x3523 = UINT16_MAX;
	uint16_t x3524 = 5U;

	t68 = ((x3521+x3522)<(x3523>>x3524));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3563 = UINT8_MAX;
	int8_t x3564 = 1;
	volatile int32_t t69 = 141617;

	t69 = ((x3561+x3562)<(x3563>>x3564));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x3613 = UINT8_MAX;
	uint16_t x3615 = 3U;
	uint8_t x3616 = 27U;
	volatile int32_t t70 = -19055;

	t70 = ((x3613+x3614)<(x3615>>x3616));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x3646 = 16600LLU;
	int32_t x3647 = INT32_MAX;
	static uint8_t x3648 = 3U;
	static volatile int32_t t71 = -14794522;

	t71 = ((x3645+x3646)<(x3647>>x3648));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x3653 = 0;
	static int64_t x3654 = -6147868672926LL;
	volatile uint8_t x3656 = 6U;
	volatile int32_t t72 = -23220001;

	t72 = ((x3653+x3654)<(x3655>>x3656));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3830 = INT64_MIN;
	uint16_t x3832 = 31U;
	static int32_t t73 = -1045;

	t73 = ((x3829+x3830)<(x3831>>x3832));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3833 = -11;
	int8_t x3834 = -1;
	uint16_t x3835 = UINT16_MAX;
	volatile int32_t t74 = 3;

	t74 = ((x3833+x3834)<(x3835>>x3836));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3889 = INT32_MIN;
	int32_t x3890 = INT32_MAX;
	volatile int64_t x3891 = INT64_MAX;
	static int32_t x3892 = 2;
	int32_t t75 = -11;

	t75 = ((x3889+x3890)<(x3891>>x3892));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3945 = -1;
	static uint32_t x3946 = 0U;
	static uint16_t x3947 = UINT16_MAX;
	int8_t x3948 = 4;

	t76 = ((x3945+x3946)<(x3947>>x3948));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4025 = UINT8_MAX;
	volatile uint32_t x4026 = UINT32_MAX;
	uint8_t x4027 = UINT8_MAX;
	static uint8_t x4028 = 1U;
	int32_t t77 = -1193;

	t77 = ((x4025+x4026)<(x4027>>x4028));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4049 = -178216878389150641LL;
	static int8_t x4050 = -1;
	int32_t x4051 = 697164;
	volatile int16_t x4052 = 6;
	volatile int32_t t78 = -121410875;

	t78 = ((x4049+x4050)<(x4051>>x4052));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4061 = UINT32_MAX;
	static int16_t x4062 = -311;
	volatile uint32_t x4063 = 40006U;
	int32_t x4064 = 1;
	volatile int32_t t79 = -404;

	t79 = ((x4061+x4062)<(x4063>>x4064));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x4077 = INT64_MAX;
	uint64_t x4078 = UINT64_MAX;
	int8_t x4079 = 0;
	uint32_t x4080 = 5U;
	static int32_t t80 = -1183;

	t80 = ((x4077+x4078)<(x4079>>x4080));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4157 = UINT64_MAX;
	uint16_t x4158 = UINT16_MAX;
	volatile int32_t t81 = 1967;

	t81 = ((x4157+x4158)<(x4159>>x4160));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4293 = INT32_MIN;
	uint32_t x4295 = 46U;
	static int8_t x4296 = 2;
	int32_t t82 = -6080;

	t82 = ((x4293+x4294)<(x4295>>x4296));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x4425 = 6937790LLU;
	int64_t x4427 = 70LL;
	uint8_t x4428 = 0U;
	volatile int32_t t83 = 0;

	t83 = ((x4425+x4426)<(x4427>>x4428));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4481 = -10089;
	int8_t x4482 = INT8_MAX;
	uint8_t x4484 = 1U;
	int32_t t84 = -458461305;

	t84 = ((x4481+x4482)<(x4483>>x4484));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4535 = 38020512594288LLU;
	int16_t x4536 = 1;
	int32_t t85 = 214;

	t85 = ((x4533+x4534)<(x4535>>x4536));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4545 = 8150;
	volatile uint16_t x4547 = 7344U;
	static uint8_t x4548 = 28U;
	static volatile int32_t t86 = -1;

	t86 = ((x4545+x4546)<(x4547>>x4548));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4573 = INT8_MAX;
	int8_t x4574 = INT8_MIN;
	uint64_t x4575 = UINT64_MAX;
	static volatile uint8_t x4576 = 8U;

	t87 = ((x4573+x4574)<(x4575>>x4576));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4585 = -1;
	uint64_t x4586 = 3772600882190819120LLU;
	int16_t x4588 = 22;
	static int32_t t88 = 113384246;

	t88 = ((x4585+x4586)<(x4587>>x4588));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x4589 = 105U;
	static uint16_t x4590 = 2220U;
	int16_t x4591 = 1;
	static uint8_t x4592 = 26U;
	int32_t t89 = 0;

	t89 = ((x4589+x4590)<(x4591>>x4592));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4729 = -1LL;
	uint16_t x4730 = 25478U;
	volatile int8_t x4731 = INT8_MAX;
	volatile int16_t x4732 = 31;
	static int32_t t90 = -103490;

	t90 = ((x4729+x4730)<(x4731>>x4732));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x4821 = -1;
	uint32_t x4822 = 72358U;
	uint32_t x4823 = UINT32_MAX;
	int8_t x4824 = 7;
	int32_t t91 = 771746;

	t91 = ((x4821+x4822)<(x4823>>x4824));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4838 = -1LL;
	uint16_t x4839 = 778U;
	static uint16_t x4840 = 15U;
	static int32_t t92 = -3276;

	t92 = ((x4837+x4838)<(x4839>>x4840));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x4849 = INT8_MIN;
	int64_t x4850 = -22874LL;
	uint16_t x4851 = 2U;
	volatile uint16_t x4852 = 23U;
	volatile int32_t t93 = 70;

	t93 = ((x4849+x4850)<(x4851>>x4852));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4901 = 1;
	uint64_t x4902 = UINT64_MAX;
	uint8_t x4903 = UINT8_MAX;
	int32_t x4904 = 1;
	static int32_t t94 = 83546888;

	t94 = ((x4901+x4902)<(x4903>>x4904));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x5033 = 1137542326LL;
	int16_t x5034 = INT16_MIN;
	uint64_t x5035 = 504012693671620LLU;
	volatile uint32_t x5036 = 3U;
	int32_t t95 = 208023;

	t95 = ((x5033+x5034)<(x5035>>x5036));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x5065 = 18217274;
	uint64_t x5066 = 104184LLU;
	uint32_t x5067 = 2002083338U;
	int8_t x5068 = 21;
	volatile int32_t t96 = -90198675;

	t96 = ((x5065+x5066)<(x5067>>x5068));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5137 = INT8_MIN;
	static int8_t x5138 = 0;
	uint8_t x5139 = 2U;
	uint16_t x5140 = 6U;

	t97 = ((x5137+x5138)<(x5139>>x5140));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5181 = INT16_MAX;
	volatile int8_t x5182 = INT8_MAX;
	volatile uint8_t x5184 = 8U;

	t98 = ((x5181+x5182)<(x5183>>x5184));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x5189 = UINT64_MAX;
	uint8_t x5190 = UINT8_MAX;
	volatile uint32_t x5191 = UINT32_MAX;

	t99 = ((x5189+x5190)<(x5191>>x5192));

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

