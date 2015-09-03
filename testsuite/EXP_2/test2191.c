#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x132 = 1LLU;
int32_t x143 = 45711;
static int32_t x217 = INT32_MAX;
volatile int32_t x220 = 1;
static volatile uint8_t x353 = 20U;
int8_t x528 = 9;
static uint64_t t8 = 13782LLU;
uint32_t x639 = UINT32_MAX;
volatile int64_t t9 = -48207LL;
volatile int8_t x643 = 18;
uint32_t t10 = 5252116U;
int8_t x679 = INT8_MAX;
volatile uint64_t x738 = UINT64_MAX;
volatile uint64_t t12 = 292LLU;
uint64_t x771 = 455963050730625308LLU;
volatile uint16_t x772 = 0U;
static int64_t x781 = INT64_MIN;
int32_t x837 = INT32_MIN;
uint32_t x853 = 191U;
static volatile int8_t x855 = 51;
int32_t x872 = 0;
static int8_t x891 = 1;
volatile int8_t x1050 = INT8_MIN;
static int8_t x1210 = 0;
static volatile int32_t t26 = 225767;
int16_t x1573 = -1;
int64_t t33 = -2673942387046354801LL;
static uint64_t x1737 = 6LLU;
static volatile uint8_t x1740 = 0U;
int16_t x1847 = INT16_MIN;
static uint32_t x1874 = UINT32_MAX;
static uint8_t x1875 = UINT8_MAX;
static int32_t x1876 = 0;
int8_t x1910 = INT8_MIN;
uint16_t x1912 = 8U;
int64_t t38 = -3462641515937978445LL;
uint64_t t39 = 334961125LLU;
uint8_t x2084 = 1U;
static int8_t x2135 = 13;
volatile uint8_t x2136 = 1U;
volatile int64_t t42 = -104332871900664LL;
int16_t x2157 = INT16_MIN;
volatile int32_t t43 = -42;
volatile uint64_t t44 = 17466592LLU;
int32_t x2217 = INT32_MIN;
int32_t x2275 = INT32_MAX;
volatile uint32_t x2358 = UINT32_MAX;
int8_t x2360 = 1;
uint16_t x2384 = 0U;
volatile uint32_t t50 = 131U;
uint64_t x2405 = UINT64_MAX;
uint64_t x2454 = 2586LLU;
uint64_t t53 = 72677LLU;
uint64_t x2513 = 7LLU;
volatile int8_t x2515 = INT8_MAX;
uint8_t x2532 = 9U;
uint8_t x2544 = 13U;
int16_t x2637 = INT16_MIN;
uint16_t x2640 = 2U;
uint32_t x2661 = UINT32_MAX;
int16_t x2662 = INT16_MIN;
volatile uint8_t x2664 = 1U;
uint8_t x2673 = 4U;
uint64_t x2828 = 15LLU;
static uint8_t x2899 = 99U;
volatile uint64_t t64 = 69938LLU;
static volatile int32_t x3049 = INT32_MIN;
volatile int32_t t66 = 243;
static volatile int8_t x3343 = INT8_MIN;
static uint32_t x3353 = UINT32_MAX;
uint16_t x3355 = UINT16_MAX;
uint16_t x3356 = 7U;
volatile uint32_t t72 = 7779055U;
volatile int8_t x3376 = 18;
volatile uint32_t t73 = 573513307U;
uint8_t x3544 = 14U;
static int64_t x3565 = INT64_MIN;
int32_t x3569 = INT32_MIN;
int32_t x3571 = 586;
int8_t x3613 = INT8_MIN;
uint32_t x3614 = UINT32_MAX;
static int8_t x3616 = 0;
int32_t t79 = -187781;
volatile uint32_t t80 = 466668675U;
int16_t x3751 = INT16_MIN;
static volatile int32_t x3842 = -50;
int16_t x3844 = 3;
int64_t x3874 = -1LL;
int16_t x3878 = INT16_MAX;
static uint32_t x3880 = 3U;
uint8_t x3980 = 5U;
uint8_t x3997 = UINT8_MAX;
uint32_t x3999 = 2968U;
volatile uint8_t x4000 = 1U;
volatile uint32_t t89 = 14872534U;
int16_t x4004 = 0;
static int64_t x4029 = 18818121352399LL;
static uint32_t x4059 = UINT32_MAX;
uint8_t x4060 = 0U;
volatile int16_t x4092 = 13;
int32_t x4109 = INT32_MIN;
uint16_t x4250 = 45U;
int64_t x4299 = INT64_MAX;


void f0(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = -1LL;
	volatile uint64_t x131 = 659524224845220LLU;
	uint64_t t0 = 876193LLU;

	t0 = ((x129^(x130^x131))>>x132);

	if (t0 != 4611356256314965293LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x141 = INT32_MIN;
	static uint32_t x142 = 205152527U;
	uint64_t x144 = 1LLU;
	uint32_t t1 = 116219U;

	t1 = ((x141^(x142^x143))>>x144);

	if (t1 != 1176332736U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x218 = INT32_MAX;
	int8_t x219 = 1;
	volatile int32_t t2 = -358073021;

	t2 = ((x217^(x218^x219))>>x220);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x249 = 1U;
	static uint8_t x250 = 30U;
	uint16_t x251 = 68U;
	volatile int8_t x252 = 31;
	int32_t t3 = 555;

	t3 = ((x249^(x250^x251))>>x252);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x325 = 537225988181LLU;
	static volatile int8_t x326 = INT8_MIN;
	volatile int16_t x327 = INT16_MAX;
	static uint32_t x328 = 1U;
	volatile uint64_t t4 = 2LLU;

	t4 = ((x325^(x326^x327))>>x328);

	if (t4 != 9223371768241767445LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x354 = 17479U;
	int64_t x355 = 545730147756609LL;
	static int8_t x356 = 1;
	int64_t t5 = 4LL;

	t5 = ((x353^(x354^x355))>>x356);

	if (t5 != 272865073886985LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x425 = UINT16_MAX;
	uint32_t x426 = 3U;
	uint64_t x427 = UINT64_MAX;
	static uint8_t x428 = 28U;
	uint64_t t6 = 202432902024733LLU;

	t6 = ((x425^(x426^x427))>>x428);

	if (t6 != 68719476735LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x525 = INT8_MIN;
	static uint8_t x526 = 38U;
	int64_t x527 = -47375754417028276LL;
	volatile int64_t t7 = -1LL;

	t7 = ((x525^(x526^x527))>>x528);

	if (t7 != 92530770345758LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x605 = INT32_MIN;
	int32_t x606 = INT32_MIN;
	uint64_t x607 = 320033LLU;
	int16_t x608 = 9;

	t8 = ((x605^(x606^x607))>>x608);

	if (t8 != 625LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x637 = INT32_MIN;
	static int64_t x638 = -1LL;
	uint16_t x640 = 3U;

	t9 = ((x637^(x638^x639))>>x640);

	if (t9 != 268435456LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x641 = 33U;
	static int16_t x642 = INT16_MIN;
	volatile uint32_t x644 = 1U;

	t10 = ((x641^(x642^x643))>>x644);

	if (t10 != 2147467289U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x677 = UINT32_MAX;
	uint8_t x678 = 16U;
	static uint8_t x680 = 0U;
	static volatile uint32_t t11 = 15145609U;

	t11 = ((x677^(x678^x679))>>x680);

	if (t11 != 4294967184U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x737 = 0;
	int16_t x739 = INT16_MIN;
	static volatile uint8_t x740 = 15U;

	t12 = ((x737^(x738^x739))>>x740);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x769 = INT64_MIN;
	int16_t x770 = -7;
	uint64_t t13 = 177036236133220501LLU;

	t13 = ((x769^(x770^x771))>>x772);

	if (t13 != 8767408986124150501LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x782 = UINT64_MAX;
	int16_t x783 = INT16_MAX;
	uint16_t x784 = 0U;
	volatile uint64_t t14 = 146846681186LLU;

	t14 = ((x781^(x782^x783))>>x784);

	if (t14 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x785 = INT8_MAX;
	int8_t x786 = INT8_MIN;
	int64_t x787 = INT64_MIN;
	uint16_t x788 = 1U;
	int64_t t15 = -266079LL;

	t15 = ((x785^(x786^x787))>>x788);

	if (t15 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x838 = 7U;
	uint32_t x839 = 33U;
	uint8_t x840 = 1U;
	volatile uint32_t t16 = 25584642U;

	t16 = ((x837^(x838^x839))>>x840);

	if (t16 != 1073741843U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x854 = -1;
	static volatile int16_t x856 = 1;
	volatile uint32_t t17 = 1U;

	t17 = ((x853^(x854^x855))>>x856);

	if (t17 != 2147483577U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x869 = INT32_MAX;
	static int64_t x870 = 2709646837569000LL;
	uint8_t x871 = 26U;
	volatile int64_t t18 = -229526LL;

	t18 = ((x869^(x870^x871))>>x872);

	if (t18 != 2709646259759629LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x889 = 39U;
	static uint16_t x890 = 5339U;
	int8_t x892 = 12;
	int32_t t19 = -847358518;

	t19 = ((x889^(x890^x891))>>x892);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x925 = UINT32_MAX;
	int64_t x926 = -597958479894521LL;
	int64_t x927 = -8314681831LL;
	static uint8_t x928 = 1U;
	static int64_t t20 = 2958982LL;

	t20 = ((x925^(x926^x927))>>x928);

	if (t20 != 298977225369840LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1037 = INT64_MIN;
	int8_t x1038 = 0;
	uint64_t x1039 = 1455416044832449LLU;
	int8_t x1040 = 0;
	uint64_t t21 = 49LLU;

	t21 = ((x1037^(x1038^x1039))>>x1040);

	if (t21 != 9224827452899608257LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1049 = INT16_MIN;
	static uint8_t x1051 = 16U;
	uint8_t x1052 = 1U;
	volatile int32_t t22 = -329019209;

	t22 = ((x1049^(x1050^x1051))>>x1052);

	if (t22 != 16328) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1085 = -1;
	int32_t x1086 = INT32_MIN;
	uint64_t x1087 = 40653789947LLU;
	uint16_t x1088 = 26U;
	uint64_t t23 = 9013130642825661506LLU;

	t23 = ((x1085^(x1086^x1087))>>x1088);

	if (t23 != 578LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1149 = 961U;
	int32_t x1150 = INT32_MIN;
	static int8_t x1151 = INT8_MIN;
	uint32_t x1152 = 6U;
	uint32_t t24 = 168795U;

	t24 = ((x1149^(x1150^x1151))>>x1152);

	if (t24 != 33554417U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1205 = INT32_MIN;
	int64_t x1206 = 160240042LL;
	int16_t x1207 = -1;
	int8_t x1208 = 14;
	volatile int64_t t25 = 5278LL;

	t25 = ((x1205^(x1206^x1207))>>x1208);

	if (t25 != 121291LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1209 = INT32_MAX;
	volatile int16_t x1211 = 138;
	uint16_t x1212 = 20U;

	t26 = ((x1209^(x1210^x1211))>>x1212);

	if (t26 != 2047) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x1361 = 31U;
	volatile int32_t x1362 = INT32_MIN;
	int32_t x1363 = INT32_MIN;
	static int8_t x1364 = 1;
	int32_t t27 = -2106320;

	t27 = ((x1361^(x1362^x1363))>>x1364);

	if (t27 != 15) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1417 = -7008;
	static int8_t x1418 = 0;
	volatile uint32_t x1419 = 1992677069U;
	static uint8_t x1420 = 0U;
	uint32_t t28 = 849814903U;

	t28 = ((x1417^(x1418^x1419))>>x1420);

	if (t28 != 2302292589U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1553 = INT16_MIN;
	static int64_t x1554 = INT64_MIN;
	static int8_t x1555 = INT8_MAX;
	uint64_t x1556 = 6LLU;
	static int64_t t29 = 5311309616757LL;

	t29 = ((x1553^(x1554^x1555))>>x1556);

	if (t29 != 144115188075855361LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x1574 = INT64_MIN;
	uint16_t x1575 = 149U;
	uint32_t x1576 = 27U;
	volatile int64_t t30 = -2042026812LL;

	t30 = ((x1573^(x1574^x1575))>>x1576);

	if (t30 != 68719476735LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1585 = -8;
	static int64_t x1586 = -3244679990956LL;
	uint8_t x1587 = UINT8_MAX;
	int8_t x1588 = 3;
	int64_t t31 = -256225210981473LL;

	t31 = ((x1585^(x1586^x1587))>>x1588);

	if (t31 != 405584998858LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1593 = INT8_MIN;
	int16_t x1594 = -8987;
	uint32_t x1595 = 21U;
	int8_t x1596 = 0;
	uint32_t t32 = 1116U;

	t32 = ((x1593^(x1594^x1595))>>x1596);

	if (t32 != 9072U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x1733 = 881U;
	int32_t x1734 = -3119;
	static int64_t x1735 = -1LL;
	static int32_t x1736 = 1;

	t33 = ((x1733^(x1734^x1735))>>x1736);

	if (t33 != 1967LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1738 = UINT64_MAX;
	static int16_t x1739 = INT16_MIN;
	static uint64_t t34 = 1857540068962523675LLU;

	t34 = ((x1737^(x1738^x1739))>>x1740);

	if (t34 != 32761LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1841 = INT16_MIN;
	uint8_t x1842 = UINT8_MAX;
	uint32_t x1843 = UINT32_MAX;
	uint8_t x1844 = 13U;
	uint32_t t35 = 198053U;

	t35 = ((x1841^(x1842^x1843))>>x1844);

	if (t35 != 3U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1845 = 117U;
	int16_t x1846 = -80;
	uint8_t x1848 = 19U;
	int32_t t36 = -242;

	t36 = ((x1845^(x1846^x1847))>>x1848);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x1873 = 12U;
	uint32_t t37 = 237343244U;

	t37 = ((x1873^(x1874^x1875))>>x1876);

	if (t37 != 4294967052U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1909 = 7763368LL;
	volatile uint32_t x1911 = 26349U;

	t38 = ((x1909^(x1910^x1911))>>x1912);

	if (t38 != 16746988LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1933 = INT16_MIN;
	int64_t x1934 = -622LL;
	uint64_t x1935 = UINT64_MAX;
	static uint8_t x1936 = 1U;

	t39 = ((x1933^(x1934^x1935))>>x1936);

	if (t39 != 9223372036854759734LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2081 = INT16_MIN;
	int32_t x2082 = -1;
	int32_t x2083 = 18260;
	volatile int32_t t40 = -72375;

	t40 = ((x2081^(x2082^x2083))>>x2084);

	if (t40 != 7253) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2109 = 1U;
	static int8_t x2110 = INT8_MIN;
	int64_t x2111 = INT64_MIN;
	static uint16_t x2112 = 9U;
	volatile int64_t t41 = 255558696LL;

	t41 = ((x2109^(x2110^x2111))>>x2112);

	if (t41 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2133 = INT64_MAX;
	int32_t x2134 = INT32_MAX;

	t42 = ((x2133^(x2134^x2135))>>x2136);

	if (t42 != 4611686017353646086LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2158 = -1;
	uint16_t x2159 = 81U;
	int8_t x2160 = 16;

	t43 = ((x2157^(x2158^x2159))>>x2160);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x2181 = 7U;
	int8_t x2182 = -1;
	volatile uint64_t x2183 = 4033006LLU;
	uint16_t x2184 = 2U;

	t44 = ((x2181^(x2182^x2183))>>x2184);

	if (t44 != 4611686018426379653LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x2218 = 84012080U;
	static int64_t x2219 = INT64_MIN;
	volatile uint8_t x2220 = 22U;
	int64_t t45 = -287973177680972855LL;

	t45 = ((x2217^(x2218^x2219))>>x2220);

	if (t45 != 2199023255060LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2273 = 34U;
	uint64_t x2274 = 3165709LLU;
	uint8_t x2276 = 23U;
	uint64_t t46 = 0LLU;

	t46 = ((x2273^(x2274^x2275))>>x2276);

	if (t46 != 255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2285 = 1714U;
	static uint32_t x2286 = 186U;
	int16_t x2287 = 55;
	uint8_t x2288 = 2U;
	volatile uint32_t t47 = 1698265908U;

	t47 = ((x2285^(x2286^x2287))>>x2288);

	if (t47 != 399U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2353 = INT32_MIN;
	volatile int32_t x2354 = -3176;
	static int64_t x2355 = 228190862418LL;
	static uint64_t x2356 = 46LLU;
	int64_t t48 = 51326864490618048LL;

	t48 = ((x2353^(x2354^x2355))>>x2356);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2357 = INT16_MAX;
	volatile int64_t x2359 = 108152896594LL;
	volatile int64_t t49 = 352506209791633816LL;

	t49 = ((x2357^(x2358^x2359))>>x2360);

	if (t49 != 55445216809LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2381 = UINT32_MAX;
	int32_t x2382 = INT32_MIN;
	int32_t x2383 = -1;

	t50 = ((x2381^(x2382^x2383))>>x2384);

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x2401 = INT64_MAX;
	static uint16_t x2402 = 0U;
	uint32_t x2403 = 550897U;
	volatile uint16_t x2404 = 1U;
	volatile int64_t t51 = 65591295138476LL;

	t51 = ((x2401^(x2402^x2403))>>x2404);

	if (t51 != 4611686018427112455LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x2406 = -1;
	static uint8_t x2407 = 2U;
	uint8_t x2408 = 0U;
	uint64_t t52 = 9475108145732LLU;

	t52 = ((x2405^(x2406^x2407))>>x2408);

	if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2453 = INT16_MAX;
	int32_t x2455 = INT32_MIN;
	uint64_t x2456 = 8LLU;

	t53 = ((x2453^(x2454^x2455))>>x2456);

	if (t53 != 72057594029539445LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2514 = -1;
	uint64_t x2516 = 3LLU;
	static volatile uint64_t t54 = 171417392LLU;

	t54 = ((x2513^(x2514^x2515))>>x2516);

	if (t54 != 2305843009213693936LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2529 = 4071U;
	volatile uint8_t x2530 = 3U;
	volatile uint32_t x2531 = UINT32_MAX;
	volatile uint32_t t55 = 0U;

	t55 = ((x2529^(x2530^x2531))>>x2532);

	if (t55 != 8388600U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2541 = 0U;
	int64_t x2542 = -70280309992994568LL;
	int16_t x2543 = -1;
	volatile int64_t t56 = -7075860771LL;

	t56 = ((x2541^(x2542^x2543))>>x2544);

	if (t56 != 8579139403441LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2581 = 717704611LLU;
	int64_t x2582 = INT64_MIN;
	volatile int64_t x2583 = 1107654LL;
	uint16_t x2584 = 5U;
	uint64_t t57 = 2336520451420960153LLU;

	t57 = ((x2581^(x2582^x2583))>>x2584);

	if (t57 != 288230376174173531LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2638 = 259393U;
	int8_t x2639 = -4;
	volatile uint32_t t58 = 847U;

	t58 = ((x2637^(x2638^x2639))>>x2640);

	if (t58 != 58031U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2663 = INT8_MIN;
	uint32_t t59 = 867971197U;

	t59 = ((x2661^(x2662^x2663))>>x2664);

	if (t59 != 2147467327U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2674 = INT16_MAX;
	uint16_t x2675 = 1455U;
	uint32_t x2676 = 8U;
	volatile int32_t t60 = -778229160;

	t60 = ((x2673^(x2674^x2675))>>x2676);

	if (t60 != 122) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2753 = 869;
	static int8_t x2754 = INT8_MAX;
	volatile uint8_t x2755 = UINT8_MAX;
	volatile int8_t x2756 = 1;
	volatile int32_t t61 = -435805;

	t61 = ((x2753^(x2754^x2755))>>x2756);

	if (t61 != 498) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2825 = INT32_MIN;
	uint8_t x2826 = 0U;
	int64_t x2827 = INT64_MIN;
	volatile int64_t t62 = 28370169LL;

	t62 = ((x2825^(x2826^x2827))>>x2828);

	if (t62 != 281474976645120LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2897 = 1170481U;
	int16_t x2898 = -1;
	volatile uint64_t x2900 = 4LLU;
	volatile uint32_t t63 = 10195454U;

	t63 = ((x2897^(x2898^x2899))>>x2900);

	if (t63 != 268362298U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2969 = 7LLU;
	int32_t x2970 = INT32_MIN;
	volatile int64_t x2971 = INT64_MIN;
	uint8_t x2972 = 1U;

	t64 = ((x2969^(x2970^x2971))>>x2972);

	if (t64 != 4611686017353646083LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2997 = 0;
	volatile int64_t x2998 = -1LL;
	int32_t x2999 = -1;
	uint16_t x3000 = 3U;
	int64_t t65 = 22LL;

	t65 = ((x2997^(x2998^x2999))>>x3000);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3050 = 1;
	volatile int16_t x3051 = INT16_MIN;
	uint16_t x3052 = 15U;

	t66 = ((x3049^(x3050^x3051))>>x3052);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3097 = -2;
	int32_t x3098 = 1;
	int32_t x3099 = INT32_MIN;
	int16_t x3100 = 1;
	volatile int32_t t67 = -215933737;

	t67 = ((x3097^(x3098^x3099))>>x3100);

	if (t67 != 1073741823) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3153 = INT32_MIN;
	volatile int8_t x3154 = -2;
	uint16_t x3155 = 125U;
	volatile uint32_t x3156 = 1U;
	int32_t t68 = -23645;

	t68 = ((x3153^(x3154^x3155))>>x3156);

	if (t68 != 1073741761) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3273 = -1;
	uint64_t x3274 = 16766090463311LLU;
	volatile int64_t x3275 = 6768LL;
	uint16_t x3276 = 0U;
	volatile uint64_t t69 = 1007540989LLU;

	t69 = ((x3273^(x3274^x3275))>>x3276);

	if (t69 != 18446727307619085760LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3329 = -1;
	static int32_t x3330 = -1;
	uint32_t x3331 = 11159829U;
	uint16_t x3332 = 0U;
	volatile uint32_t t70 = 3149U;

	t70 = ((x3329^(x3330^x3331))>>x3332);

	if (t70 != 11159829U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3341 = 186588U;
	int8_t x3342 = INT8_MIN;
	static int32_t x3344 = 2;
	static uint32_t t71 = 611450325U;

	t71 = ((x3341^(x3342^x3343))>>x3344);

	if (t71 != 46647U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x3354 = 2U;

	t72 = ((x3353^(x3354^x3355))>>x3356);

	if (t72 != 33553920U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3373 = 595;
	int32_t x3374 = 923567;
	uint32_t x3375 = 1U;

	t73 = ((x3373^(x3374^x3375))>>x3376);

	if (t73 != 3U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3541 = -4534;
	static uint64_t x3542 = 2143277786887LLU;
	volatile int16_t x3543 = 101;
	uint64_t t74 = 9782227447LLU;

	t74 = ((x3541^(x3542^x3543))>>x3544);

	if (t74 != 1125899776027329LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3553 = 22U;
	static volatile uint8_t x3554 = 103U;
	int16_t x3555 = 121;
	int8_t x3556 = 12;
	int32_t t75 = 51170;

	t75 = ((x3553^(x3554^x3555))>>x3556);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3566 = UINT16_MAX;
	uint64_t x3567 = 39432981559LLU;
	uint32_t x3568 = 2U;
	uint64_t t76 = 6197691648LLU;

	t76 = ((x3565^(x3566^x3567))>>x3568);

	if (t76 != 2305843019071937778LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3570 = 102786652U;
	int8_t x3572 = 1;
	volatile uint32_t t77 = 139U;

	t77 = ((x3569^(x3570^x3571))>>x3572);

	if (t77 != 1125134859U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3615 = -452;
	volatile uint32_t t78 = 159U;

	t78 = ((x3613^(x3614^x3615))>>x3616);

	if (t78 != 4294966851U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x3625 = 2U;
	volatile int16_t x3626 = 1;
	uint8_t x3627 = 46U;
	uint8_t x3628 = 30U;

	t79 = ((x3625^(x3626^x3627))>>x3628);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3641 = -1;
	uint32_t x3642 = 22U;
	int32_t x3643 = 0;
	uint8_t x3644 = 1U;

	t80 = ((x3641^(x3642^x3643))>>x3644);

	if (t80 != 2147483636U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x3685 = 18468LLU;
	volatile int8_t x3686 = INT8_MAX;
	int32_t x3687 = -54939;
	int8_t x3688 = 13;
	volatile uint64_t t81 = 23LLU;

	t81 = ((x3685^(x3686^x3687))>>x3688);

	if (t81 != 2251799813685243LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3705 = -1;
	uint32_t x3706 = 4568017U;
	uint64_t x3707 = 262898673LLU;
	static volatile uint8_t x3708 = 44U;
	volatile uint64_t t82 = 272LLU;

	t82 = ((x3705^(x3706^x3707))>>x3708);

	if (t82 != 1048575LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3749 = 473LLU;
	static uint32_t x3750 = 1009119154U;
	uint64_t x3752 = 2LLU;
	static volatile uint64_t t83 = 823113LLU;

	t83 = ((x3749^(x3750^x3751))>>x3752);

	if (t83 != 821468058LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x3837 = -1;
	uint8_t x3838 = UINT8_MAX;
	int8_t x3839 = -3;
	static uint8_t x3840 = 17U;
	int32_t t84 = 47;

	t84 = ((x3837^(x3838^x3839))>>x3840);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3841 = -547326;
	uint8_t x3843 = 1U;
	static int32_t t85 = 7697;

	t85 = ((x3841^(x3842^x3843))>>x3844);

	if (t85 != 68409) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3873 = INT32_MAX;
	int8_t x3875 = -1;
	static uint8_t x3876 = 45U;
	volatile int64_t t86 = -1834380LL;

	t86 = ((x3873^(x3874^x3875))>>x3876);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3877 = INT32_MIN;
	int16_t x3879 = -1;
	static int32_t t87 = -3873;

	t87 = ((x3877^(x3878^x3879))>>x3880);

	if (t87 != 268431360) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3977 = INT32_MIN;
	int8_t x3978 = INT8_MIN;
	volatile int64_t x3979 = 11247716217286LL;
	volatile int64_t t88 = -3LL;

	t88 = ((x3977^(x3978^x3979))>>x3980);

	if (t88 != 351474218610LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3998 = INT32_MIN;

	t89 = ((x3997^(x3998^x3999))>>x4000);

	if (t89 != 1073743283U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x4001 = 333297465442655928LLU;
	static int16_t x4002 = INT16_MIN;
	int16_t x4003 = -1;
	uint64_t t90 = 4735904404LLU;

	t90 = ((x4001^(x4002^x4003))>>x4004);

	if (t90 != 333297465442640199LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4030 = 409U;
	volatile int8_t x4031 = -1;
	uint8_t x4032 = 2U;
	static volatile int64_t t91 = 29723116LL;

	t91 = ((x4029^(x4030^x4031))>>x4032);

	if (t91 != 4704669265578LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4057 = INT32_MIN;
	int32_t x4058 = 0;
	volatile uint32_t t92 = 56U;

	t92 = ((x4057^(x4058^x4059))>>x4060);

	if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4089 = 75U;
	uint64_t x4090 = 252452309LLU;
	uint32_t x4091 = 7U;
	volatile uint64_t t93 = 4494950210608900LLU;

	t93 = ((x4089^(x4090^x4091))>>x4092);

	if (t93 != 30816LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4110 = 9161081LLU;
	int16_t x4111 = INT16_MIN;
	uint16_t x4112 = 1U;
	volatile uint64_t t94 = 728703846575966LLU;

	t94 = ((x4109^(x4110^x4111))>>x4112);

	if (t94 != 1069163708LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4189 = -1;
	static volatile uint64_t x4190 = 24330997LLU;
	static uint32_t x4191 = 702726U;
	uint16_t x4192 = 35U;
	volatile uint64_t t95 = 6681708LLU;

	t95 = ((x4189^(x4190^x4191))>>x4192);

	if (t95 != 536870911LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x4249 = 518872029LLU;
	int16_t x4251 = INT16_MIN;
	int8_t x4252 = 6;
	volatile uint64_t t96 = 54LLU;

	t96 = ((x4249^(x4250^x4251))>>x4252);

	if (t96 != 288230376143604591LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x4269 = UINT32_MAX;
	volatile int16_t x4270 = -706;
	uint32_t x4271 = UINT32_MAX;
	uint8_t x4272 = 1U;
	volatile uint32_t t97 = 158901376U;

	t97 = ((x4269^(x4270^x4271))>>x4272);

	if (t97 != 2147483295U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4297 = -1;
	int8_t x4298 = INT8_MIN;
	static uint8_t x4300 = 17U;
	int64_t t98 = -275752208LL;

	t98 = ((x4297^(x4298^x4299))>>x4300);

	if (t98 != 70368744177663LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4333 = -1;
	int16_t x4334 = -1;
	volatile int32_t x4335 = INT32_MAX;
	static volatile int64_t x4336 = 1LL;
	int32_t t99 = -117927;

	t99 = ((x4333^(x4334^x4335))>>x4336);

	if (t99 != 1073741823) { NG(); } else { ; }
	
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

