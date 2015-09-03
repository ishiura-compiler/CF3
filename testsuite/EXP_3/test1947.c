#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x90 = 11U;
uint16_t x129 = 126U;
static volatile int32_t t2 = -10288047;
volatile uint16_t x217 = 2098U;
uint32_t x219 = 2725U;
static uint64_t x321 = 2LLU;
int32_t x445 = 7055376;
static volatile int32_t t9 = 920;
int8_t x613 = INT8_MAX;
int32_t t12 = 1;
int8_t x785 = INT8_MAX;
uint16_t x790 = 8U;
uint8_t x791 = UINT8_MAX;
uint16_t x935 = UINT16_MAX;
int32_t t16 = 147055;
int64_t x1071 = INT64_MAX;
volatile int32_t x1100 = INT32_MAX;
int32_t x1139 = 220810;
int16_t x1150 = 2;
volatile uint8_t x1158 = 16U;
volatile int32_t t22 = -10534369;
volatile int8_t x1192 = 1;
int32_t t24 = -18586;
static int16_t x1306 = 1;
int32_t x1307 = INT32_MIN;
int16_t x1308 = INT16_MAX;
static uint8_t x1484 = UINT8_MAX;
static uint16_t x1502 = 0U;
uint16_t x1504 = 153U;
int32_t t27 = -2;
int16_t x1515 = INT16_MIN;
uint32_t x1667 = 1928704061U;
uint16_t x1766 = 14U;
static int64_t x1767 = -1LL;
uint16_t x1890 = 35U;
uint64_t x1913 = 216LLU;
static int8_t x1915 = -32;
volatile int64_t x2053 = 130646853LL;
volatile int64_t x2055 = INT64_MAX;
int8_t x2056 = 0;
static uint32_t x2124 = 924697U;
int32_t t38 = -261013681;
static int32_t t40 = -474;
volatile int8_t x2454 = 3;
static int8_t x2560 = INT8_MIN;
static volatile int32_t t43 = -160382;
volatile int32_t t44 = -1;
int32_t x2790 = 1;
int32_t x2896 = INT32_MIN;
static volatile int32_t x2915 = -1;
int32_t t49 = -3661780;
volatile int32_t t50 = 749094760;
int16_t x3009 = INT16_MAX;
volatile int64_t x3012 = INT64_MIN;
int64_t x3022 = 2LL;
static int32_t t53 = -65368;
volatile int64_t x3216 = INT64_MIN;
uint32_t x3268 = 15U;
static volatile uint16_t x3326 = 4U;
int32_t x3327 = 0;
volatile int16_t x3328 = 974;
uint32_t x3352 = 1495343856U;
static int8_t x3461 = INT8_MAX;
volatile int32_t x3514 = 1;
int16_t x3516 = INT16_MAX;
uint32_t x3577 = 1U;
uint8_t x3578 = 13U;
uint64_t x3580 = UINT64_MAX;
int16_t x3594 = 1;
static int32_t t65 = -9622544;
static int64_t x3607 = -11LL;
uint8_t x3658 = 1U;
volatile int8_t x3659 = INT8_MIN;
int8_t x3732 = INT8_MIN;
uint8_t x3780 = UINT8_MAX;
int32_t t72 = -543234;
static int32_t t73 = -24374580;
int32_t x3800 = 54;
int8_t x3826 = 28;
int64_t x4048 = -1LL;
static int32_t t78 = 1190;
int16_t x4107 = -1;
int16_t x4108 = 1;
int8_t x4161 = 41;
static volatile int32_t t81 = -7;
static uint64_t x4209 = UINT64_MAX;
uint64_t x4210 = 17LLU;
uint64_t x4212 = 627591568LLU;
uint32_t x4233 = UINT32_MAX;
static uint8_t x4234 = 14U;
static volatile int8_t x4238 = 4;
int16_t x4243 = INT16_MIN;
static int32_t t86 = -102865995;
volatile int32_t t87 = -212242869;
int32_t t88 = 10843771;
uint8_t x4486 = 15U;
int32_t t90 = 1;
uint8_t x4585 = 43U;
volatile int32_t t93 = -596285196;
int32_t t95 = 3566470;
int32_t x4701 = INT32_MAX;
int32_t t96 = -3;
uint16_t x4717 = 89U;
int8_t x4728 = INT8_MAX;
uint8_t x4771 = 23U;


void f0(void) {
	uint16_t x33 = 66U;
	uint32_t x34 = 10U;
	int64_t x35 = INT64_MAX;
	int64_t x36 = INT64_MIN;
	volatile int32_t t0 = -13966803;

	t0 = ((x33>>x34)<=(x35|x36));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x89 = INT8_MAX;
	int16_t x91 = 4;
	int32_t x92 = INT32_MIN;
	static int32_t t1 = 2;

	t1 = ((x89>>x90)<=(x91|x92));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x130 = 20U;
	int16_t x131 = INT16_MIN;
	static uint64_t x132 = UINT64_MAX;

	t2 = ((x129>>x130)<=(x131|x132));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = 1;
	volatile int16_t x155 = -3794;
	int64_t x156 = INT64_MAX;
	volatile int32_t t3 = 1;

	t3 = ((x153>>x154)<=(x155|x156));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x218 = 28U;
	uint32_t x220 = 1U;
	static volatile int32_t t4 = 518107919;

	t4 = ((x217>>x218)<=(x219|x220));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x257 = 28485435LL;
	volatile uint8_t x258 = 12U;
	int16_t x259 = 1;
	volatile int64_t x260 = INT64_MIN;
	static volatile int32_t t5 = 427850858;

	t5 = ((x257>>x258)<=(x259|x260));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x313 = 14U;
	uint16_t x314 = 13U;
	volatile int16_t x315 = 9753;
	volatile int64_t x316 = INT64_MAX;
	int32_t t6 = 11092057;

	t6 = ((x313>>x314)<=(x315|x316));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x322 = 62U;
	int16_t x323 = 3;
	uint8_t x324 = UINT8_MAX;
	int32_t t7 = -261583800;

	t7 = ((x321>>x322)<=(x323|x324));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x401 = UINT8_MAX;
	uint8_t x402 = 26U;
	uint16_t x403 = UINT16_MAX;
	uint32_t x404 = 21393U;
	static int32_t t8 = 7509989;

	t8 = ((x401>>x402)<=(x403|x404));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x446 = 2U;
	int16_t x447 = -18;
	int64_t x448 = -1LL;

	t9 = ((x445>>x446)<=(x447|x448));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x614 = 0;
	static int8_t x615 = -1;
	volatile int32_t x616 = -1;
	volatile int32_t t10 = 8;

	t10 = ((x613>>x614)<=(x615|x616));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x633 = UINT32_MAX;
	int8_t x634 = 1;
	int64_t x635 = INT64_MAX;
	volatile uint32_t x636 = 10665500U;
	static volatile int32_t t11 = -17449;

	t11 = ((x633>>x634)<=(x635|x636));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x697 = 16333;
	uint16_t x698 = 2U;
	int16_t x699 = -6;
	int32_t x700 = -1;

	t12 = ((x697>>x698)<=(x699|x700));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x786 = 8;
	int64_t x787 = -5533544857LL;
	int8_t x788 = INT8_MIN;
	int32_t t13 = 61;

	t13 = ((x785>>x786)<=(x787|x788));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x789 = 41;
	uint8_t x792 = 14U;
	volatile int32_t t14 = 249707326;

	t14 = ((x789>>x790)<=(x791|x792));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x869 = 8884;
	int8_t x870 = 0;
	int16_t x871 = -1;
	volatile int32_t x872 = INT32_MIN;
	int32_t t15 = 733457;

	t15 = ((x869>>x870)<=(x871|x872));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x933 = UINT8_MAX;
	static volatile uint16_t x934 = 24U;
	int32_t x936 = INT32_MIN;

	t16 = ((x933>>x934)<=(x935|x936));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1033 = 11363485539651LLU;
	int8_t x1034 = 46;
	int16_t x1035 = -1427;
	int32_t x1036 = -23648811;
	volatile int32_t t17 = 18;

	t17 = ((x1033>>x1034)<=(x1035|x1036));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x1069 = 9305U;
	uint8_t x1070 = 4U;
	int8_t x1072 = 28;
	volatile int32_t t18 = -412652462;

	t18 = ((x1069>>x1070)<=(x1071|x1072));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1097 = 1008U;
	uint8_t x1098 = 2U;
	int8_t x1099 = INT8_MAX;
	int32_t t19 = 2;

	t19 = ((x1097>>x1098)<=(x1099|x1100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1137 = 840095LL;
	static uint8_t x1138 = 4U;
	volatile int64_t x1140 = INT64_MAX;
	volatile int32_t t20 = 49;

	t20 = ((x1137>>x1138)<=(x1139|x1140));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1149 = 102070;
	static int32_t x1151 = -3901;
	int64_t x1152 = -1LL;
	volatile int32_t t21 = 4699;

	t21 = ((x1149>>x1150)<=(x1151|x1152));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1157 = INT16_MAX;
	uint8_t x1159 = 1U;
	int64_t x1160 = 2073740375853LL;

	t22 = ((x1157>>x1158)<=(x1159|x1160));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1189 = INT8_MAX;
	uint16_t x1190 = 1U;
	int64_t x1191 = -1LL;
	volatile int32_t t23 = -10;

	t23 = ((x1189>>x1190)<=(x1191|x1192));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1245 = 186U;
	uint8_t x1246 = 2U;
	int8_t x1247 = -18;
	static uint32_t x1248 = 2U;

	t24 = ((x1245>>x1246)<=(x1247|x1248));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x1305 = 1316039974LLU;
	int32_t t25 = 967;

	t25 = ((x1305>>x1306)<=(x1307|x1308));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1481 = 0;
	static int64_t x1482 = 1LL;
	uint8_t x1483 = UINT8_MAX;
	volatile int32_t t26 = 3;

	t26 = ((x1481>>x1482)<=(x1483|x1484));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1501 = UINT8_MAX;
	int8_t x1503 = -1;

	t27 = ((x1501>>x1502)<=(x1503|x1504));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1513 = 130;
	uint8_t x1514 = 20U;
	static int16_t x1516 = -1;
	int32_t t28 = 5238;

	t28 = ((x1513>>x1514)<=(x1515|x1516));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1577 = 19735196824451232LLU;
	static uint8_t x1578 = 10U;
	static uint16_t x1579 = 7966U;
	uint8_t x1580 = UINT8_MAX;
	static int32_t t29 = -114250;

	t29 = ((x1577>>x1578)<=(x1579|x1580));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1665 = 6U;
	uint8_t x1666 = 2U;
	uint64_t x1668 = 3473521718LLU;
	int32_t t30 = -149005442;

	t30 = ((x1665>>x1666)<=(x1667|x1668));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1669 = 7U;
	static uint16_t x1670 = 0U;
	static int64_t x1671 = INT64_MIN;
	int32_t x1672 = INT32_MIN;
	static int32_t t31 = 9062;

	t31 = ((x1669>>x1670)<=(x1671|x1672));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x1733 = UINT32_MAX;
	int8_t x1734 = 30;
	uint8_t x1735 = UINT8_MAX;
	int8_t x1736 = INT8_MAX;
	int32_t t32 = 1;

	t32 = ((x1733>>x1734)<=(x1735|x1736));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1765 = 6798945525958257LL;
	int16_t x1768 = INT16_MAX;
	static int32_t t33 = -104377;

	t33 = ((x1765>>x1766)<=(x1767|x1768));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1889 = 3063525703277LL;
	uint64_t x1891 = 49448LLU;
	int16_t x1892 = INT16_MIN;
	int32_t t34 = 29977;

	t34 = ((x1889>>x1890)<=(x1891|x1892));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1914 = 35U;
	int64_t x1916 = 19945657LL;
	volatile int32_t t35 = 13008;

	t35 = ((x1913>>x1914)<=(x1915|x1916));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2054 = 0U;
	volatile int32_t t36 = 789044;

	t36 = ((x2053>>x2054)<=(x2055|x2056));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2121 = INT64_MAX;
	uint8_t x2122 = 51U;
	int32_t x2123 = -1;
	volatile int32_t t37 = -78;

	t37 = ((x2121>>x2122)<=(x2123|x2124));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2157 = INT8_MAX;
	uint8_t x2158 = 1U;
	int16_t x2159 = INT16_MIN;
	int16_t x2160 = -2;

	t38 = ((x2157>>x2158)<=(x2159|x2160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2253 = UINT32_MAX;
	uint8_t x2254 = 2U;
	int16_t x2255 = INT16_MAX;
	int64_t x2256 = -1LL;
	static int32_t t39 = -17894;

	t39 = ((x2253>>x2254)<=(x2255|x2256));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2445 = 3999;
	static volatile int16_t x2446 = 15;
	volatile uint16_t x2447 = 27U;
	static uint8_t x2448 = 18U;

	t40 = ((x2445>>x2446)<=(x2447|x2448));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2453 = 753353929U;
	volatile uint32_t x2455 = 62799578U;
	int32_t x2456 = INT32_MIN;
	int32_t t41 = -969378470;

	t41 = ((x2453>>x2454)<=(x2455|x2456));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2545 = 8;
	uint8_t x2546 = 1U;
	static uint16_t x2547 = 1U;
	volatile uint16_t x2548 = 3884U;
	int32_t t42 = 58000;

	t42 = ((x2545>>x2546)<=(x2547|x2548));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2557 = 113749;
	uint64_t x2558 = 5LLU;
	int16_t x2559 = INT16_MAX;

	t43 = ((x2557>>x2558)<=(x2559|x2560));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2577 = 2834450158457218LLU;
	static volatile uint8_t x2578 = 3U;
	int8_t x2579 = INT8_MAX;
	int64_t x2580 = INT64_MIN;

	t44 = ((x2577>>x2578)<=(x2579|x2580));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2637 = 9250U;
	int8_t x2638 = 0;
	uint64_t x2639 = 69546422608382LLU;
	int16_t x2640 = -31;
	volatile int32_t t45 = -1;

	t45 = ((x2637>>x2638)<=(x2639|x2640));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2709 = INT8_MAX;
	uint8_t x2710 = 9U;
	uint32_t x2711 = UINT32_MAX;
	int64_t x2712 = INT64_MAX;
	static int32_t t46 = -495802186;

	t46 = ((x2709>>x2710)<=(x2711|x2712));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2789 = INT32_MAX;
	volatile int16_t x2791 = 138;
	int16_t x2792 = INT16_MAX;
	static volatile int32_t t47 = 49424;

	t47 = ((x2789>>x2790)<=(x2791|x2792));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2893 = INT8_MAX;
	volatile int64_t x2894 = 6LL;
	static int64_t x2895 = INT64_MIN;
	volatile int32_t t48 = -286043264;

	t48 = ((x2893>>x2894)<=(x2895|x2896));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2913 = 1;
	int16_t x2914 = 22;
	volatile int64_t x2916 = -24291830030561855LL;

	t49 = ((x2913>>x2914)<=(x2915|x2916));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x2937 = 40744922U;
	uint16_t x2938 = 1U;
	volatile int8_t x2939 = INT8_MAX;
	uint16_t x2940 = 4U;

	t50 = ((x2937>>x2938)<=(x2939|x2940));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3010 = 8U;
	int32_t x3011 = -1;
	static int32_t t51 = -125;

	t51 = ((x3009>>x3010)<=(x3011|x3012));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3013 = INT64_MAX;
	static uint8_t x3014 = 21U;
	volatile uint16_t x3015 = 20U;
	static int32_t x3016 = 517026;
	int32_t t52 = 167512080;

	t52 = ((x3013>>x3014)<=(x3015|x3016));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3021 = 25303422439185LLU;
	int8_t x3023 = -9;
	int64_t x3024 = 40451255545LL;

	t53 = ((x3021>>x3022)<=(x3023|x3024));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3085 = UINT16_MAX;
	uint8_t x3086 = 0U;
	uint8_t x3087 = 2U;
	int16_t x3088 = -1;
	int32_t t54 = -451015631;

	t54 = ((x3085>>x3086)<=(x3087|x3088));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3213 = 4744U;
	int16_t x3214 = 1;
	volatile int16_t x3215 = -15534;
	int32_t t55 = 1263436;

	t55 = ((x3213>>x3214)<=(x3215|x3216));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3265 = INT64_MAX;
	uint16_t x3266 = 17U;
	uint64_t x3267 = 530926444180LLU;
	int32_t t56 = 987;

	t56 = ((x3265>>x3266)<=(x3267|x3268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3305 = INT32_MAX;
	static uint64_t x3306 = 2LLU;
	uint64_t x3307 = UINT64_MAX;
	int8_t x3308 = 5;
	volatile int32_t t57 = -4131;

	t57 = ((x3305>>x3306)<=(x3307|x3308));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x3325 = 1902955781663882308LLU;
	int32_t t58 = -196077;

	t58 = ((x3325>>x3326)<=(x3327|x3328));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3349 = UINT32_MAX;
	static uint8_t x3350 = 15U;
	uint8_t x3351 = 5U;
	volatile int32_t t59 = -6934595;

	t59 = ((x3349>>x3350)<=(x3351|x3352));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3409 = 1298U;
	static volatile uint32_t x3410 = 6U;
	int64_t x3411 = -4002417494LL;
	static int16_t x3412 = -1;
	volatile int32_t t60 = 128358141;

	t60 = ((x3409>>x3410)<=(x3411|x3412));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3462 = 15;
	int8_t x3463 = INT8_MIN;
	static uint8_t x3464 = UINT8_MAX;
	int32_t t61 = 131116156;

	t61 = ((x3461>>x3462)<=(x3463|x3464));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x3513 = UINT64_MAX;
	int16_t x3515 = 3;
	int32_t t62 = 34;

	t62 = ((x3513>>x3514)<=(x3515|x3516));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3521 = INT16_MAX;
	uint8_t x3522 = 3U;
	int64_t x3523 = INT64_MAX;
	uint8_t x3524 = 1U;
	int32_t t63 = -55738;

	t63 = ((x3521>>x3522)<=(x3523|x3524));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x3579 = 63U;
	volatile int32_t t64 = -16310;

	t64 = ((x3577>>x3578)<=(x3579|x3580));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3593 = 31163U;
	int64_t x3595 = 507704LL;
	int32_t x3596 = INT32_MAX;

	t65 = ((x3593>>x3594)<=(x3595|x3596));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3605 = 10;
	volatile int32_t x3606 = 0;
	uint32_t x3608 = UINT32_MAX;
	int32_t t66 = -59;

	t66 = ((x3605>>x3606)<=(x3607|x3608));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3613 = UINT64_MAX;
	volatile uint8_t x3614 = 0U;
	int8_t x3615 = 1;
	int32_t x3616 = INT32_MIN;
	volatile int32_t t67 = -372;

	t67 = ((x3613>>x3614)<=(x3615|x3616));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3621 = 3U;
	int16_t x3622 = 3;
	int32_t x3623 = 105;
	volatile int16_t x3624 = 19;
	static volatile int32_t t68 = 2253464;

	t68 = ((x3621>>x3622)<=(x3623|x3624));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3657 = 4LLU;
	volatile uint32_t x3660 = 524457925U;
	int32_t t69 = 6598746;

	t69 = ((x3657>>x3658)<=(x3659|x3660));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x3669 = 751951028U;
	int32_t x3670 = 3;
	int8_t x3671 = INT8_MIN;
	static volatile uint8_t x3672 = 21U;
	int32_t t70 = -3540;

	t70 = ((x3669>>x3670)<=(x3671|x3672));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3729 = 13LL;
	uint16_t x3730 = 42U;
	int8_t x3731 = -1;
	volatile int32_t t71 = -249445;

	t71 = ((x3729>>x3730)<=(x3731|x3732));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x3777 = INT16_MAX;
	int16_t x3778 = 0;
	int32_t x3779 = INT32_MIN;

	t72 = ((x3777>>x3778)<=(x3779|x3780));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x3781 = 30434U;
	int32_t x3782 = 6;
	static int16_t x3783 = INT16_MIN;
	int64_t x3784 = 0LL;

	t73 = ((x3781>>x3782)<=(x3783|x3784));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x3797 = INT8_MAX;
	int8_t x3798 = 1;
	uint16_t x3799 = 13U;
	volatile int32_t t74 = -44561;

	t74 = ((x3797>>x3798)<=(x3799|x3800));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x3825 = 45964433U;
	static volatile uint64_t x3827 = 57605LLU;
	int8_t x3828 = INT8_MIN;
	static int32_t t75 = -7639487;

	t75 = ((x3825>>x3826)<=(x3827|x3828));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4005 = 296;
	uint8_t x4006 = 13U;
	uint64_t x4007 = UINT64_MAX;
	int64_t x4008 = -1LL;
	int32_t t76 = 72602;

	t76 = ((x4005>>x4006)<=(x4007|x4008));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4045 = 51LLU;
	int8_t x4046 = 4;
	volatile uint64_t x4047 = 4LLU;
	int32_t t77 = 329;

	t77 = ((x4045>>x4046)<=(x4047|x4048));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x4061 = 319U;
	volatile int8_t x4062 = 2;
	uint16_t x4063 = UINT16_MAX;
	uint64_t x4064 = 1950394643232911LLU;

	t78 = ((x4061>>x4062)<=(x4063|x4064));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4105 = 35U;
	volatile int64_t x4106 = 3LL;
	int32_t t79 = -1726366;

	t79 = ((x4105>>x4106)<=(x4107|x4108));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4162 = 1;
	int32_t x4163 = -1275;
	int16_t x4164 = INT16_MIN;
	static volatile int32_t t80 = -4381;

	t80 = ((x4161>>x4162)<=(x4163|x4164));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x4165 = UINT16_MAX;
	static uint8_t x4166 = 7U;
	volatile uint32_t x4167 = 115431U;
	uint8_t x4168 = UINT8_MAX;

	t81 = ((x4165>>x4166)<=(x4167|x4168));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4211 = INT8_MIN;
	volatile int32_t t82 = 85741867;

	t82 = ((x4209>>x4210)<=(x4211|x4212));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4235 = -9199LL;
	uint32_t x4236 = 95371630U;
	static int32_t t83 = -384;

	t83 = ((x4233>>x4234)<=(x4235|x4236));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4237 = 3754;
	static uint64_t x4239 = 1254271477846973367LLU;
	uint16_t x4240 = 13U;
	int32_t t84 = -72;

	t84 = ((x4237>>x4238)<=(x4239|x4240));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4241 = 1;
	static uint8_t x4242 = 15U;
	uint64_t x4244 = 470LLU;
	volatile int32_t t85 = -23457;

	t85 = ((x4241>>x4242)<=(x4243|x4244));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4301 = UINT16_MAX;
	int8_t x4302 = 15;
	static uint16_t x4303 = 250U;
	volatile int16_t x4304 = INT16_MIN;

	t86 = ((x4301>>x4302)<=(x4303|x4304));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4381 = 0;
	volatile int8_t x4382 = 1;
	static uint64_t x4383 = UINT64_MAX;
	static int8_t x4384 = 1;

	t87 = ((x4381>>x4382)<=(x4383|x4384));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x4437 = 978482861042627LL;
	static int16_t x4438 = 0;
	int8_t x4439 = 0;
	int32_t x4440 = INT32_MAX;

	t88 = ((x4437>>x4438)<=(x4439|x4440));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4477 = UINT64_MAX;
	volatile int16_t x4478 = 0;
	uint8_t x4479 = UINT8_MAX;
	int32_t x4480 = 15894354;
	int32_t t89 = -19;

	t89 = ((x4477>>x4478)<=(x4479|x4480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4485 = UINT8_MAX;
	uint8_t x4487 = 1U;
	int16_t x4488 = INT16_MIN;

	t90 = ((x4485>>x4486)<=(x4487|x4488));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4541 = 4894LLU;
	volatile uint16_t x4542 = 2U;
	uint32_t x4543 = 211U;
	uint8_t x4544 = 6U;
	volatile int32_t t91 = 14721058;

	t91 = ((x4541>>x4542)<=(x4543|x4544));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4586 = 5U;
	int32_t x4587 = INT32_MIN;
	uint32_t x4588 = UINT32_MAX;
	volatile int32_t t92 = 17;

	t92 = ((x4585>>x4586)<=(x4587|x4588));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4621 = UINT32_MAX;
	volatile int16_t x4622 = 28;
	int16_t x4623 = 1;
	static uint64_t x4624 = UINT64_MAX;

	t93 = ((x4621>>x4622)<=(x4623|x4624));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4649 = 1U;
	uint16_t x4650 = 7U;
	uint8_t x4651 = 26U;
	uint32_t x4652 = UINT32_MAX;
	int32_t t94 = 48;

	t94 = ((x4649>>x4650)<=(x4651|x4652));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4677 = 547764170959810LLU;
	volatile int8_t x4678 = 59;
	int64_t x4679 = -1LL;
	int16_t x4680 = INT16_MIN;

	t95 = ((x4677>>x4678)<=(x4679|x4680));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4702 = 11U;
	uint64_t x4703 = UINT64_MAX;
	uint32_t x4704 = UINT32_MAX;

	t96 = ((x4701>>x4702)<=(x4703|x4704));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x4718 = 1;
	volatile int32_t x4719 = INT32_MAX;
	volatile uint16_t x4720 = UINT16_MAX;
	int32_t t97 = -39726;

	t97 = ((x4717>>x4718)<=(x4719|x4720));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4725 = 1;
	int16_t x4726 = 2;
	volatile int8_t x4727 = -1;
	volatile int32_t t98 = 10078585;

	t98 = ((x4725>>x4726)<=(x4727|x4728));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x4769 = INT16_MAX;
	uint16_t x4770 = 3U;
	int32_t x4772 = -126;
	volatile int32_t t99 = -46282;

	t99 = ((x4769>>x4770)<=(x4771|x4772));

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

