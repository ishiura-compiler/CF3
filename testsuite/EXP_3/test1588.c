#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = 121403U;
int8_t x207 = -11;
static uint16_t x208 = 5U;
int32_t t2 = 87;
uint32_t x268 = 126160U;
volatile uint32_t t3 = 0U;
volatile uint8_t x338 = 26U;
int64_t x340 = INT64_MAX;
volatile int8_t x418 = 28;
uint32_t t7 = 3719U;
uint16_t x461 = 3U;
static uint8_t x464 = UINT8_MAX;
uint8_t x605 = 1U;
int8_t x634 = 30;
uint64_t x637 = 19561LLU;
int32_t x639 = -498007;
volatile uint64_t t13 = 334LLU;
int16_t x662 = 1;
int8_t x664 = INT8_MIN;
static volatile int16_t x922 = 1;
volatile int32_t t16 = -490028;
int64_t x978 = 2LL;
int32_t x1011 = INT32_MAX;
uint8_t x1120 = 2U;
static uint32_t t20 = 23405U;
static volatile uint8_t x1146 = 6U;
volatile int64_t x1237 = 1050023424903354983LL;
int32_t x1240 = INT32_MIN;
int64_t t22 = 36LL;
int32_t x1259 = INT32_MAX;
static uint64_t x1513 = UINT64_MAX;
volatile uint32_t t28 = UINT32_MAX;
volatile uint32_t t31 = 680U;
static int8_t x2132 = -1;
volatile uint8_t x2146 = 8U;
volatile uint16_t x2178 = 1U;
uint16_t x2234 = 5U;
uint32_t x2236 = UINT32_MAX;
volatile int8_t x2334 = 3;
uint8_t x2446 = 1U;
uint32_t x2447 = 297U;
volatile int32_t t38 = 506771;
volatile int32_t t39 = 16572317;
static uint32_t x2667 = UINT32_MAX;
uint8_t x2742 = 0U;
int32_t t42 = -5;
volatile int64_t x2924 = -26359LL;
static volatile uint32_t x2993 = UINT32_MAX;
uint32_t x3061 = 9U;
int8_t x3063 = INT8_MIN;
uint32_t x3071 = 4699794U;
volatile int8_t x3133 = INT8_MAX;
volatile uint32_t x3136 = 10U;
int16_t x3202 = 1;
uint64_t x3261 = 5292LLU;
uint64_t t53 = 431341517628584999LLU;
int16_t x3295 = -1;
static uint32_t x3499 = UINT32_MAX;
static int8_t x3500 = INT8_MIN;
int32_t t57 = INT32_MAX;
int64_t x3661 = 3540LL;
static uint64_t x3705 = 814388LLU;
static int8_t x3706 = 2;
static int8_t x3721 = 1;
volatile int32_t t64 = -1;
static volatile int8_t x3813 = INT8_MAX;
volatile int32_t t66 = 5;
volatile uint64_t t67 = 42648242317LLU;
static int8_t x3869 = 0;
int8_t x3871 = -1;
static int32_t t69 = -10;
int64_t x4048 = INT64_MIN;
static volatile int32_t t70 = -31979;
uint32_t x4107 = 2378004U;
uint64_t t71 = 7039308955298LLU;
uint8_t x4126 = 0U;
uint8_t x4319 = UINT8_MAX;
volatile int8_t x4336 = INT8_MAX;
static uint32_t x4361 = UINT32_MAX;
int8_t x4362 = 0;
int16_t x4415 = -43;
static int64_t x4416 = -1968507750758159000LL;
uint64_t t80 = 128274LLU;
static int16_t x4589 = INT16_MAX;
int8_t x4615 = INT8_MIN;
int8_t x4681 = INT8_MAX;
uint16_t x4793 = 27U;
int8_t x4794 = 2;
int64_t x4795 = 20808755813049LL;
int32_t x4796 = -112380;
uint32_t x4837 = UINT32_MAX;
int32_t x4838 = 2;
uint64_t x4859 = UINT64_MAX;
volatile int8_t x4922 = 0;
volatile uint8_t x4986 = 14U;
int32_t x4987 = -2721518;
int16_t x4995 = INT16_MIN;
int64_t x5031 = INT64_MIN;
volatile int32_t x5032 = INT32_MIN;
uint64_t t91 = 774275LLU;
int64_t x5072 = -1015297058LL;
uint32_t t92 = 1353180U;
int32_t x5092 = INT32_MAX;
volatile uint8_t x5297 = 15U;
int16_t x5298 = 12;
int16_t x5299 = INT16_MAX;
uint64_t x5485 = UINT64_MAX;
uint16_t x5508 = 20U;
static volatile uint64_t x5707 = UINT64_MAX;


void f0(void) {
	int8_t x81 = 7;
	static int16_t x82 = 7;
	uint16_t x83 = UINT16_MAX;
	static uint32_t x84 = 745465581U;
	int32_t t0 = -52701916;

	t0 = ((x81<<x82)-(x83<=x84));

	if (t0 != 895) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x145 = 70374771U;
	uint8_t x146 = 1U;
	int16_t x147 = -1;
	int64_t x148 = INT64_MIN;

	t1 = ((x145<<x146)-(x147<=x148));

	if (t1 != 140749542U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x205 = 218U;
	static uint8_t x206 = 9U;

	t2 = ((x205<<x206)-(x207<=x208));

	if (t2 != 111615) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x265 = UINT32_MAX;
	int16_t x266 = 26;
	static int16_t x267 = INT16_MIN;

	t3 = ((x265<<x266)-(x267<=x268));

	if (t3 != 4227858432U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x309 = 2244U;
	volatile int16_t x310 = 0;
	int8_t x311 = INT8_MIN;
	int16_t x312 = -4;
	uint32_t t4 = 2003699U;

	t4 = ((x309<<x310)-(x311<=x312));

	if (t4 != 2243U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x325 = 23U;
	int8_t x326 = 6;
	int16_t x327 = INT16_MAX;
	uint16_t x328 = 6U;
	static int32_t t5 = -9;

	t5 = ((x325<<x326)-(x327<=x328));

	if (t5 != 1472) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x337 = UINT32_MAX;
	int32_t x339 = -1;
	volatile uint32_t t6 = 6398250U;

	t6 = ((x337<<x338)-(x339<=x340));

	if (t6 != 4227858431U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x417 = 19249505U;
	volatile int8_t x419 = -1;
	volatile int16_t x420 = INT16_MIN;

	t7 = ((x417<<x418)-(x419<=x420));

	if (t7 != 268435456U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x462 = 23LLU;
	int8_t x463 = 61;
	int32_t t8 = -134;

	t8 = ((x461<<x462)-(x463<=x464));

	if (t8 != 25165823) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x533 = 4143U;
	static int16_t x534 = 0;
	int64_t x535 = -1LL;
	int64_t x536 = 2435015LL;
	volatile int32_t t9 = -15628383;

	t9 = ((x533<<x534)-(x535<=x536));

	if (t9 != 4142) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x597 = UINT64_MAX;
	volatile uint32_t x598 = 60U;
	int32_t x599 = INT32_MIN;
	volatile int32_t x600 = INT32_MAX;
	volatile uint64_t t10 = 63382LLU;

	t10 = ((x597<<x598)-(x599<=x600));

	if (t10 != 17293822569102704639LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x606 = 0;
	uint16_t x607 = UINT16_MAX;
	uint32_t x608 = 57U;
	static volatile int32_t t11 = -4;

	t11 = ((x605<<x606)-(x607<=x608));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x633 = 7176901LLU;
	volatile int16_t x635 = INT16_MIN;
	volatile uint16_t x636 = UINT16_MAX;
	volatile uint64_t t12 = 51585LLU;

	t12 = ((x633<<x634)-(x635<=x636));

	if (t12 != 7706138770407423LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x638 = 61;
	static int16_t x640 = INT16_MIN;

	t13 = ((x637<<x638)-(x639<=x640));

	if (t13 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x661 = 54282369858LLU;
	uint32_t x663 = 200371U;
	uint64_t t14 = 126624456794840LLU;

	t14 = ((x661<<x662)-(x663<=x664));

	if (t14 != 108564739715LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x917 = 10118925U;
	int16_t x918 = 0;
	int32_t x919 = INT32_MAX;
	int8_t x920 = INT8_MIN;
	volatile uint32_t t15 = 0U;

	t15 = ((x917<<x918)-(x919<=x920));

	if (t15 != 10118925U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x921 = 63;
	int64_t x923 = -1LL;
	static int8_t x924 = INT8_MAX;

	t16 = ((x921<<x922)-(x923<=x924));

	if (t16 != 125) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x977 = 47481345475LL;
	uint32_t x979 = 15407U;
	uint64_t x980 = 544665022662197LLU;
	volatile int64_t t17 = 266316123415716LL;

	t17 = ((x977<<x978)-(x979<=x980));

	if (t17 != 189925381899LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1009 = INT32_MAX;
	static volatile int8_t x1010 = 0;
	volatile int32_t x1012 = -106786;
	static int32_t t18 = INT32_MAX;

	t18 = ((x1009<<x1010)-(x1011<=x1012));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1081 = UINT32_MAX;
	uint8_t x1082 = 24U;
	uint8_t x1083 = 1U;
	int32_t x1084 = 16416528;
	uint32_t t19 = 111147992U;

	t19 = ((x1081<<x1082)-(x1083<=x1084));

	if (t19 != 4278190079U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1117 = 176015U;
	uint16_t x1118 = 2U;
	uint16_t x1119 = UINT16_MAX;

	t20 = ((x1117<<x1118)-(x1119<=x1120));

	if (t20 != 704060U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1145 = 192;
	int8_t x1147 = INT8_MAX;
	static volatile int16_t x1148 = INT16_MIN;
	volatile int32_t t21 = -19986;

	t21 = ((x1145<<x1146)-(x1147<=x1148));

	if (t21 != 12288) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1238 = 1U;
	volatile int16_t x1239 = 468;

	t22 = ((x1237<<x1238)-(x1239<=x1240));

	if (t22 != 2100046849806709966LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1257 = 1;
	uint8_t x1258 = 5U;
	static int64_t x1260 = -8318LL;
	volatile int32_t t23 = -40350;

	t23 = ((x1257<<x1258)-(x1259<=x1260));

	if (t23 != 32) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1341 = 12U;
	volatile uint64_t x1342 = 3LLU;
	volatile int32_t x1343 = INT32_MIN;
	uint16_t x1344 = 2866U;
	volatile int32_t t24 = -33;

	t24 = ((x1341<<x1342)-(x1343<=x1344));

	if (t24 != 95) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1413 = 1287U;
	uint32_t x1414 = 0U;
	int8_t x1415 = 49;
	static int32_t x1416 = INT32_MIN;
	volatile int32_t t25 = 109825441;

	t25 = ((x1413<<x1414)-(x1415<=x1416));

	if (t25 != 1287) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1514 = 28U;
	uint64_t x1515 = 113201008484312LLU;
	int32_t x1516 = 172924;
	static uint64_t t26 = 4745756736LLU;

	t26 = ((x1513<<x1514)-(x1515<=x1516));

	if (t26 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1597 = 6LLU;
	uint8_t x1598 = 49U;
	int64_t x1599 = -1LL;
	int32_t x1600 = -60914208;
	uint64_t t27 = 936LLU;

	t27 = ((x1597<<x1598)-(x1599<=x1600));

	if (t27 != 3377699720527872LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1633 = UINT32_MAX;
	int8_t x1634 = 0;
	volatile int32_t x1635 = INT32_MAX;
	uint64_t x1636 = 0LLU;

	t28 = ((x1633<<x1634)-(x1635<=x1636));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1669 = 2U;
	uint8_t x1670 = 1U;
	static volatile int64_t x1671 = INT64_MIN;
	static uint32_t x1672 = UINT32_MAX;
	int32_t t29 = 3822432;

	t29 = ((x1669<<x1670)-(x1671<=x1672));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2041 = INT8_MAX;
	uint8_t x2042 = 0U;
	static volatile int32_t x2043 = -829;
	static int64_t x2044 = 24803670LL;
	static int32_t t30 = 1;

	t30 = ((x2041<<x2042)-(x2043<=x2044));

	if (t30 != 126) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x2125 = UINT32_MAX;
	uint8_t x2126 = 7U;
	int16_t x2127 = INT16_MIN;
	int8_t x2128 = INT8_MIN;

	t31 = ((x2125<<x2126)-(x2127<=x2128));

	if (t31 != 4294967167U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2129 = 1U;
	uint8_t x2130 = 11U;
	volatile int32_t x2131 = -1;
	int32_t t32 = 1046787290;

	t32 = ((x2129<<x2130)-(x2131<=x2132));

	if (t32 != 2047) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2145 = INT16_MAX;
	uint32_t x2147 = 47698276U;
	int16_t x2148 = INT16_MIN;
	static int32_t t33 = 2;

	t33 = ((x2145<<x2146)-(x2147<=x2148));

	if (t33 != 8388351) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2177 = 31U;
	volatile int8_t x2179 = INT8_MIN;
	uint8_t x2180 = 19U;
	int32_t t34 = -3840;

	t34 = ((x2177<<x2178)-(x2179<=x2180));

	if (t34 != 61) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2233 = 0U;
	int32_t x2235 = -1;
	volatile int32_t t35 = 4;

	t35 = ((x2233<<x2234)-(x2235<=x2236));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2333 = 45138827U;
	int8_t x2335 = INT8_MAX;
	int32_t x2336 = INT32_MIN;
	volatile uint32_t t36 = 1004U;

	t36 = ((x2333<<x2334)-(x2335<=x2336));

	if (t36 != 361110616U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2445 = 3U;
	int64_t x2448 = -1LL;
	volatile int32_t t37 = 78338771;

	t37 = ((x2445<<x2446)-(x2447<=x2448));

	if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2453 = INT8_MAX;
	int8_t x2454 = 1;
	uint64_t x2455 = UINT64_MAX;
	uint8_t x2456 = UINT8_MAX;

	t38 = ((x2453<<x2454)-(x2455<=x2456));

	if (t38 != 254) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x2461 = 60;
	int8_t x2462 = 5;
	int32_t x2463 = -28649013;
	volatile int8_t x2464 = INT8_MAX;

	t39 = ((x2461<<x2462)-(x2463<=x2464));

	if (t39 != 1919) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2541 = 14U;
	static int8_t x2542 = 1;
	static int8_t x2543 = -3;
	int64_t x2544 = INT64_MIN;
	uint32_t t40 = 1604U;

	t40 = ((x2541<<x2542)-(x2543<=x2544));

	if (t40 != 28U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x2665 = INT8_MAX;
	static volatile int8_t x2666 = 4;
	static int16_t x2668 = INT16_MIN;
	int32_t t41 = -152298;

	t41 = ((x2665<<x2666)-(x2667<=x2668));

	if (t41 != 2032) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2741 = 73U;
	int32_t x2743 = -1;
	int64_t x2744 = 165813605LL;

	t42 = ((x2741<<x2742)-(x2743<=x2744));

	if (t42 != 72) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2749 = 5U;
	uint8_t x2750 = 1U;
	uint32_t x2751 = 7032U;
	volatile uint16_t x2752 = UINT16_MAX;
	static int32_t t43 = 52975614;

	t43 = ((x2749<<x2750)-(x2751<=x2752));

	if (t43 != 9) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2757 = INT16_MAX;
	volatile int8_t x2758 = 0;
	int32_t x2759 = 1974672;
	uint8_t x2760 = 112U;
	volatile int32_t t44 = -2926;

	t44 = ((x2757<<x2758)-(x2759<=x2760));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2921 = 0LLU;
	int8_t x2922 = 0;
	static int32_t x2923 = INT32_MIN;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x2921<<x2922)-(x2923<=x2924));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2994 = 5U;
	static int64_t x2995 = INT64_MAX;
	uint64_t x2996 = 38298700779774LLU;
	volatile uint32_t t46 = 462U;

	t46 = ((x2993<<x2994)-(x2995<=x2996));

	if (t46 != 4294967264U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3062 = 2U;
	volatile int32_t x3064 = INT32_MIN;
	volatile uint32_t t47 = 534905U;

	t47 = ((x3061<<x3062)-(x3063<=x3064));

	if (t47 != 36U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3069 = 1U;
	uint8_t x3070 = 6U;
	static int8_t x3072 = INT8_MAX;
	int32_t t48 = 156275;

	t48 = ((x3069<<x3070)-(x3071<=x3072));

	if (t48 != 64) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x3121 = 1U;
	uint8_t x3122 = 2U;
	int32_t x3123 = INT32_MAX;
	uint32_t x3124 = 2001U;
	volatile int32_t t49 = -858927;

	t49 = ((x3121<<x3122)-(x3123<=x3124));

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3134 = 5LLU;
	int16_t x3135 = -7190;
	int32_t t50 = -273241;

	t50 = ((x3133<<x3134)-(x3135<=x3136));

	if (t50 != 4064) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x3197 = UINT32_MAX;
	uint8_t x3198 = 3U;
	static int16_t x3199 = INT16_MAX;
	volatile uint32_t x3200 = UINT32_MAX;
	volatile uint32_t t51 = 11587U;

	t51 = ((x3197<<x3198)-(x3199<=x3200));

	if (t51 != 4294967287U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x3201 = 0U;
	int8_t x3203 = INT8_MIN;
	static int16_t x3204 = INT16_MIN;
	volatile int32_t t52 = -5;

	t52 = ((x3201<<x3202)-(x3203<=x3204));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3262 = 0U;
	static int16_t x3263 = -1;
	uint16_t x3264 = UINT16_MAX;

	t53 = ((x3261<<x3262)-(x3263<=x3264));

	if (t53 != 5291LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x3293 = INT32_MAX;
	uint8_t x3294 = 0U;
	uint32_t x3296 = 814659906U;
	int32_t t54 = INT32_MAX;

	t54 = ((x3293<<x3294)-(x3295<=x3296));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3313 = INT16_MAX;
	volatile int8_t x3314 = 0;
	volatile int8_t x3315 = 1;
	int32_t x3316 = INT32_MIN;
	static int32_t t55 = -71992088;

	t55 = ((x3313<<x3314)-(x3315<=x3316));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3373 = UINT32_MAX;
	uint8_t x3374 = 1U;
	uint64_t x3375 = 483283342313347LLU;
	int8_t x3376 = INT8_MIN;
	volatile uint32_t t56 = 369095U;

	t56 = ((x3373<<x3374)-(x3375<=x3376));

	if (t56 != 4294967293U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3497 = INT32_MAX;
	int16_t x3498 = 0;

	t57 = ((x3497<<x3498)-(x3499<=x3500));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3513 = 1647;
	uint8_t x3514 = 7U;
	uint8_t x3515 = UINT8_MAX;
	static uint8_t x3516 = 41U;
	volatile int32_t t58 = 12612119;

	t58 = ((x3513<<x3514)-(x3515<=x3516));

	if (t58 != 210816) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3569 = UINT32_MAX;
	int8_t x3570 = 0;
	volatile int8_t x3571 = INT8_MIN;
	volatile uint64_t x3572 = UINT64_MAX;
	uint32_t t59 = 2U;

	t59 = ((x3569<<x3570)-(x3571<=x3572));

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3597 = 2U;
	volatile int8_t x3598 = 1;
	static volatile int64_t x3599 = INT64_MIN;
	uint8_t x3600 = 8U;
	volatile int32_t t60 = 9;

	t60 = ((x3597<<x3598)-(x3599<=x3600));

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3662 = 3;
	int64_t x3663 = 13766915727LL;
	uint16_t x3664 = 3767U;
	volatile int64_t t61 = -14307LL;

	t61 = ((x3661<<x3662)-(x3663<=x3664));

	if (t61 != 28320LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x3673 = UINT32_MAX;
	uint8_t x3674 = 25U;
	volatile int16_t x3675 = INT16_MIN;
	int64_t x3676 = 74533166LL;
	volatile uint32_t t62 = 42842U;

	t62 = ((x3673<<x3674)-(x3675<=x3676));

	if (t62 != 4261412863U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3707 = -1LL;
	static int16_t x3708 = INT16_MIN;
	volatile uint64_t t63 = 6964075093446048230LLU;

	t63 = ((x3705<<x3706)-(x3707<=x3708));

	if (t63 != 3257552LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3722 = 0;
	uint32_t x3723 = 0U;
	uint64_t x3724 = 125082LLU;

	t64 = ((x3721<<x3722)-(x3723<=x3724));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3809 = 2U;
	uint16_t x3810 = 6U;
	volatile uint8_t x3811 = 3U;
	int8_t x3812 = INT8_MAX;
	int32_t t65 = -1124825;

	t65 = ((x3809<<x3810)-(x3811<=x3812));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x3814 = 0U;
	int8_t x3815 = INT8_MIN;
	int64_t x3816 = INT64_MIN;

	t66 = ((x3813<<x3814)-(x3815<=x3816));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3853 = UINT64_MAX;
	uint8_t x3854 = 14U;
	uint64_t x3855 = 59601083597LLU;
	volatile uint32_t x3856 = UINT32_MAX;

	t67 = ((x3853<<x3854)-(x3855<=x3856));

	if (t67 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x3870 = 1LL;
	int16_t x3872 = INT16_MIN;
	int32_t t68 = 90;

	t68 = ((x3869<<x3870)-(x3871<=x3872));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x3909 = 14557U;
	uint8_t x3910 = 15U;
	int16_t x3911 = INT16_MIN;
	uint32_t x3912 = 4U;

	t69 = ((x3909<<x3910)-(x3911<=x3912));

	if (t69 != 477003776) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4045 = 1U;
	uint16_t x4046 = 1U;
	int16_t x4047 = INT16_MIN;

	t70 = ((x4045<<x4046)-(x4047<=x4048));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4105 = 3LLU;
	volatile int16_t x4106 = 2;
	int32_t x4108 = -1;

	t71 = ((x4105<<x4106)-(x4107<=x4108));

	if (t71 != 11LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4125 = INT64_MAX;
	static int8_t x4127 = 60;
	static uint8_t x4128 = UINT8_MAX;
	volatile int64_t t72 = 824LL;

	t72 = ((x4125<<x4126)-(x4127<=x4128));

	if (t72 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4205 = 21966602U;
	int16_t x4206 = 14;
	int32_t x4207 = INT32_MAX;
	uint32_t x4208 = 6821U;
	uint32_t t73 = 20160106U;

	t73 = ((x4205<<x4206)-(x4207<=x4208));

	if (t73 != 3418521600U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x4217 = 25;
	static uint32_t x4218 = 3U;
	int16_t x4219 = 321;
	int32_t x4220 = -50506032;
	volatile int32_t t74 = 88618;

	t74 = ((x4217<<x4218)-(x4219<=x4220));

	if (t74 != 200) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x4317 = 495LLU;
	uint32_t x4318 = 44U;
	int16_t x4320 = 5;
	volatile uint64_t t75 = 472676195LLU;

	t75 = ((x4317<<x4318)-(x4319<=x4320));

	if (t75 != 8708132091985920LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x4333 = 195125561951LLU;
	uint8_t x4334 = 0U;
	int64_t x4335 = 7113LL;
	uint64_t t76 = 517LLU;

	t76 = ((x4333<<x4334)-(x4335<=x4336));

	if (t76 != 195125561951LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4363 = UINT32_MAX;
	int16_t x4364 = INT16_MIN;
	static volatile uint32_t t77 = UINT32_MAX;

	t77 = ((x4361<<x4362)-(x4363<=x4364));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x4413 = UINT16_MAX;
	int8_t x4414 = 0;
	volatile int32_t t78 = 388261532;

	t78 = ((x4413<<x4414)-(x4415<=x4416));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4425 = INT16_MAX;
	uint8_t x4426 = 5U;
	int8_t x4427 = -10;
	volatile int32_t x4428 = -1;
	volatile int32_t t79 = -68;

	t79 = ((x4425<<x4426)-(x4427<=x4428));

	if (t79 != 1048543) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x4509 = 10832264167024770LLU;
	volatile uint32_t x4510 = 3U;
	uint32_t x4511 = 295U;
	static uint32_t x4512 = 104971888U;

	t80 = ((x4509<<x4510)-(x4511<=x4512));

	if (t80 != 86658113336198159LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x4590 = 0U;
	int16_t x4591 = INT16_MIN;
	int64_t x4592 = INT64_MAX;
	int32_t t81 = 4373;

	t81 = ((x4589<<x4590)-(x4591<=x4592));

	if (t81 != 32766) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x4613 = 17;
	int16_t x4614 = 6;
	static int16_t x4616 = 3;
	volatile int32_t t82 = 255;

	t82 = ((x4613<<x4614)-(x4615<=x4616));

	if (t82 != 1087) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x4682 = 2;
	int32_t x4683 = INT32_MIN;
	uint64_t x4684 = UINT64_MAX;
	volatile int32_t t83 = -17;

	t83 = ((x4681<<x4682)-(x4683<=x4684));

	if (t83 != 507) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t t84 = -26494;

	t84 = ((x4793<<x4794)-(x4795<=x4796));

	if (t84 != 108) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4809 = UINT8_MAX;
	static int8_t x4810 = 0;
	static int32_t x4811 = -2033836;
	int32_t x4812 = INT32_MIN;
	volatile int32_t t85 = 4;

	t85 = ((x4809<<x4810)-(x4811<=x4812));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4839 = 2378U;
	uint32_t x4840 = 5U;
	uint32_t t86 = 4541U;

	t86 = ((x4837<<x4838)-(x4839<=x4840));

	if (t86 != 4294967292U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4857 = 3100;
	uint8_t x4858 = 15U;
	int16_t x4860 = 28;
	int32_t t87 = -16643;

	t87 = ((x4857<<x4858)-(x4859<=x4860));

	if (t87 != 101580800) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4921 = UINT8_MAX;
	static volatile uint64_t x4923 = UINT64_MAX;
	uint32_t x4924 = 10405142U;
	volatile int32_t t88 = 2284;

	t88 = ((x4921<<x4922)-(x4923<=x4924));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x4985 = 1U;
	uint8_t x4988 = 1U;
	int32_t t89 = -149758698;

	t89 = ((x4985<<x4986)-(x4987<=x4988));

	if (t89 != 16383) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4993 = 96319U;
	uint8_t x4994 = 0U;
	int16_t x4996 = INT16_MIN;
	volatile uint32_t t90 = 41012U;

	t90 = ((x4993<<x4994)-(x4995<=x4996));

	if (t90 != 96318U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5029 = 5679253606306128743LLU;
	uint16_t x5030 = 0U;

	t91 = ((x5029<<x5030)-(x5031<=x5032));

	if (t91 != 5679253606306128742LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5069 = UINT32_MAX;
	int8_t x5070 = 11;
	int8_t x5071 = -9;

	t92 = ((x5069<<x5070)-(x5071<=x5072));

	if (t92 != 4294965248U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5089 = 5U;
	uint8_t x5090 = 2U;
	static uint64_t x5091 = 307LLU;
	int32_t t93 = -241967;

	t93 = ((x5089<<x5090)-(x5091<=x5092));

	if (t93 != 19) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5161 = 18012539LLU;
	int16_t x5162 = 7;
	uint16_t x5163 = 4U;
	int8_t x5164 = -11;
	uint64_t t94 = 1008LLU;

	t94 = ((x5161<<x5162)-(x5163<=x5164));

	if (t94 != 2305604992LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x5265 = UINT16_MAX;
	int8_t x5266 = 1;
	int32_t x5267 = -1;
	int8_t x5268 = -1;
	int32_t t95 = -3480926;

	t95 = ((x5265<<x5266)-(x5267<=x5268));

	if (t95 != 131069) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x5300 = INT64_MIN;
	int32_t t96 = 430430422;

	t96 = ((x5297<<x5298)-(x5299<=x5300));

	if (t96 != 61440) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x5486 = 41U;
	static int8_t x5487 = 0;
	volatile int64_t x5488 = INT64_MAX;
	volatile uint64_t t97 = 1LLU;

	t97 = ((x5485<<x5486)-(x5487<=x5488));

	if (t97 != 18446741874686296063LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5505 = INT8_MAX;
	uint8_t x5506 = 1U;
	static volatile uint16_t x5507 = 2U;
	static int32_t t98 = -112;

	t98 = ((x5505<<x5506)-(x5507<=x5508));

	if (t98 != 253) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5705 = 339;
	int8_t x5706 = 4;
	uint64_t x5708 = UINT64_MAX;
	int32_t t99 = -164987;

	t99 = ((x5705<<x5706)-(x5707<=x5708));

	if (t99 != 5423) { NG(); } else { ; }
	
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

