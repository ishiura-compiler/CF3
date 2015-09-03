#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x199 = 0LL;
uint16_t x200 = 10184U;
int32_t t4 = 175;
static volatile int32_t x363 = 0;
static uint64_t x579 = 27LLU;
static uint64_t t6 = 10592046045851LLU;
volatile int16_t x673 = INT16_MIN;
int8_t x676 = INT8_MIN;
int32_t t7 = -133238513;
uint16_t x825 = 11U;
int8_t x828 = -1;
int32_t t9 = -135765729;
uint64_t x842 = 215424LLU;
volatile uint64_t t10 = 2142799LLU;
volatile int16_t x852 = INT16_MIN;
static int8_t x924 = -1;
static volatile uint64_t t13 = 60532171561LLU;
int16_t x1099 = 17;
volatile int64_t x1120 = -28468900840LL;
volatile int64_t t25 = -15089859169676294LL;
volatile int32_t x1704 = -834;
uint32_t t28 = 1603U;
uint64_t t29 = 36496917096LLU;
uint16_t x2078 = 1447U;
int32_t x2128 = 16;
static uint64_t x2274 = 2796074504326688123LLU;
static int8_t x2289 = INT8_MIN;
int16_t x2353 = INT16_MIN;
int8_t x2459 = 9;
int64_t x2465 = 12452253001459LL;
static volatile uint64_t t39 = 748950028147765990LLU;
static int8_t x3026 = 1;
static int8_t x3028 = INT8_MIN;
volatile int64_t t43 = -310806LL;
int8_t x3054 = INT8_MAX;
static int32_t t44 = 1;
static int8_t x3073 = INT8_MIN;
static int16_t x3074 = INT16_MAX;
int8_t x3075 = 1;
volatile uint16_t x3079 = 0U;
static int16_t x3080 = -1;
uint64_t t47 = 94702651895LLU;
uint8_t x3235 = 3U;
int32_t x3281 = -4721;
static int8_t x3349 = -2;
uint16_t x3352 = UINT16_MAX;
static volatile uint32_t x3370 = UINT32_MAX;
int8_t x3461 = INT8_MIN;
int32_t t52 = -5;
int16_t x3596 = 2323;
uint64_t t54 = 4846585809240412368LLU;
uint8_t x3611 = 10U;
uint8_t x3643 = 22U;
int8_t x3644 = INT8_MAX;
static uint16_t x3798 = UINT16_MAX;
uint8_t x3833 = 1U;
static int32_t t58 = -602833008;
int8_t x3941 = INT8_MIN;
volatile int8_t x3945 = 0;
int16_t x4010 = 9;
static volatile uint32_t t61 = 60828U;
uint32_t x4123 = 14U;
uint64_t t64 = 10671491059LLU;
volatile uint8_t x4659 = 2U;
uint16_t x4719 = 9U;
int64_t x4946 = 686754857LL;
volatile int64_t t71 = 491679868258150LL;
int8_t x5011 = 6;
uint8_t x5047 = 8U;
int16_t x5481 = -1;
static uint64_t t78 = 6654936495LLU;
volatile int8_t x5661 = 18;
int16_t x5664 = -1;
int64_t x5732 = INT64_MAX;
int8_t x5819 = 1;
int32_t x5820 = -92387155;
uint8_t x5957 = UINT8_MAX;
uint64_t x5958 = 15669LLU;
int32_t x5960 = INT32_MIN;
uint32_t x6053 = 21912U;
volatile uint32_t t84 = 1U;
static int8_t x6137 = 1;
int64_t x6140 = -1LL;
static volatile int64_t t85 = 12LL;
uint8_t x6168 = 11U;
int32_t t86 = -30;
int16_t x6229 = -1;
uint32_t x6230 = 87615230U;
uint16_t x6424 = 27U;
volatile int64_t t88 = -1LL;
uint16_t x6543 = 9U;
volatile int64_t t90 = 569753900198274330LL;
int64_t x6646 = 71747343025653LL;
uint16_t x6774 = 0U;
static uint64_t t96 = 561806721902LLU;
int64_t x6910 = 324854809LL;
int64_t t98 = 1716LL;
int32_t t99 = 1;


void f0(void) {
	volatile uint32_t x101 = 29U;
	uint8_t x102 = 4U;
	volatile uint8_t x103 = 7U;
	volatile int16_t x104 = INT16_MIN;
	volatile uint32_t t0 = 167U;

	t0 = ((x101+(x102<<x103))%x104);

	if (t0 != 541U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x189 = 0U;
	int64_t x190 = 70704504826LL;
	uint8_t x191 = 1U;
	static int64_t x192 = INT64_MAX;
	volatile int64_t t1 = 45993LL;

	t1 = ((x189+(x190<<x191))%x192);

	if (t1 != 141409009652LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x197 = INT8_MAX;
	volatile uint64_t x198 = 22770406747802465LLU;
	uint64_t t2 = 749403199LLU;

	t2 = ((x197+(x198<<x199))%x200);

	if (t2 != 4688LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MAX;
	uint32_t x227 = 1U;
	volatile int16_t x228 = INT16_MIN;
	int32_t t3 = -417;

	t3 = ((x225+(x226<<x227))%x228);

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x245 = 0U;
	static int32_t x246 = 18;
	uint8_t x247 = 12U;
	int16_t x248 = INT16_MIN;

	t4 = ((x245+(x246<<x247))%x248);

	if (t4 != 8192) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x361 = 36994275227374406LLU;
	uint64_t x362 = UINT64_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile uint64_t t5 = 54601LLU;

	t5 = ((x361+(x362<<x363))%x364);

	if (t5 != 115LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x577 = UINT32_MAX;
	volatile uint64_t x578 = 13662920087638234LLU;
	static uint16_t x580 = 2345U;

	t6 = ((x577+(x578<<x579))%x580);

	if (t6 != 1677LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x674 = UINT16_MAX;
	int8_t x675 = 0;

	t7 = ((x673+(x674<<x675))%x676);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x781 = INT32_MAX;
	static uint64_t x782 = 20968863797806303LLU;
	uint8_t x783 = 0U;
	uint32_t x784 = 39U;
	uint64_t t8 = 118856955705502639LLU;

	t8 = ((x781+(x782<<x783))%x784);

	if (t8 != 38LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x826 = 0;
	static uint16_t x827 = 1U;

	t9 = ((x825+(x826<<x827))%x828);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x841 = INT8_MIN;
	uint8_t x843 = 9U;
	int16_t x844 = INT16_MAX;

	t10 = ((x841+(x842<<x843))%x844);

	if (t10 != 3238LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x849 = INT16_MAX;
	int16_t x850 = 13216;
	static uint8_t x851 = 3U;
	static int32_t t11 = -842;

	t11 = ((x849+(x850<<x851))%x852);

	if (t11 != 7423) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x869 = INT32_MAX;
	static volatile uint32_t x870 = 1007520560U;
	int32_t x871 = 0;
	volatile int16_t x872 = INT16_MIN;
	uint32_t t12 = 3354737U;

	t12 = ((x869+(x870<<x871))%x872);

	if (t12 != 3155004207U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x921 = 205317911;
	uint64_t x922 = 4764LLU;
	volatile uint16_t x923 = 9U;

	t13 = ((x921+(x922<<x923))%x924);

	if (t13 != 207757079LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x993 = 15U;
	uint8_t x994 = 3U;
	uint8_t x995 = 7U;
	static volatile int8_t x996 = -1;
	volatile uint32_t t14 = 395874U;

	t14 = ((x993+(x994<<x995))%x996);

	if (t14 != 399U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x997 = 20990922;
	uint32_t x998 = UINT32_MAX;
	uint32_t x999 = 1U;
	static uint64_t x1000 = UINT64_MAX;
	static volatile uint64_t t15 = 58461340149LLU;

	t15 = ((x997+(x998<<x999))%x1000);

	if (t15 != 20990920LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1017 = INT8_MAX;
	volatile uint16_t x1018 = 4331U;
	int16_t x1019 = 0;
	static uint32_t x1020 = 2493U;
	volatile uint32_t t16 = 75U;

	t16 = ((x1017+(x1018<<x1019))%x1020);

	if (t16 != 1965U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1097 = INT32_MAX;
	uint32_t x1098 = 1U;
	static uint8_t x1100 = UINT8_MAX;
	volatile uint32_t t17 = 119643U;

	t17 = ((x1097+(x1098<<x1099))%x1100);

	if (t17 != 129U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1101 = 23LL;
	uint8_t x1102 = 119U;
	int8_t x1103 = 13;
	static int16_t x1104 = -1;
	volatile int64_t t18 = -4653255LL;

	t18 = ((x1101+(x1102<<x1103))%x1104);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x1117 = -68;
	volatile uint8_t x1118 = UINT8_MAX;
	uint64_t x1119 = 3LLU;
	volatile int64_t t19 = -268942314159LL;

	t19 = ((x1117+(x1118<<x1119))%x1120);

	if (t19 != 1972LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1197 = INT64_MIN;
	uint64_t x1198 = UINT64_MAX;
	uint8_t x1199 = 1U;
	int16_t x1200 = INT16_MAX;
	volatile uint64_t t20 = 5LLU;

	t20 = ((x1197+(x1198<<x1199))%x1200);

	if (t20 != 6LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1213 = 49U;
	volatile uint64_t x1214 = 157176LLU;
	uint8_t x1215 = 2U;
	uint8_t x1216 = 4U;
	volatile uint64_t t21 = 420630636LLU;

	t21 = ((x1213+(x1214<<x1215))%x1216);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1233 = -237LL;
	uint16_t x1234 = 0U;
	static int32_t x1235 = 5;
	int64_t x1236 = -1LL;
	int64_t t22 = -44744966LL;

	t22 = ((x1233+(x1234<<x1235))%x1236);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1269 = UINT64_MAX;
	int16_t x1270 = INT16_MAX;
	static int16_t x1271 = 6;
	int16_t x1272 = 708;
	volatile uint64_t t23 = 107944449164280939LLU;

	t23 = ((x1269+(x1270<<x1271))%x1272);

	if (t23 != 699LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1445 = 17570U;
	volatile uint32_t x1446 = 259710U;
	static uint8_t x1447 = 11U;
	static int16_t x1448 = INT16_MIN;
	volatile uint32_t t24 = 3816U;

	t24 = ((x1445+(x1446<<x1447))%x1448);

	if (t24 != 531903650U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1481 = INT16_MIN;
	int16_t x1482 = INT16_MAX;
	int8_t x1483 = 3;
	static int64_t x1484 = INT64_MAX;

	t25 = ((x1481+(x1482<<x1483))%x1484);

	if (t25 != 229368LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1633 = 81;
	volatile int8_t x1634 = 1;
	volatile int8_t x1635 = 3;
	int16_t x1636 = INT16_MIN;
	int32_t t26 = -422293215;

	t26 = ((x1633+(x1634<<x1635))%x1636);

	if (t26 != 89) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1701 = 21U;
	uint8_t x1702 = UINT8_MAX;
	int8_t x1703 = 0;
	int32_t t27 = 121;

	t27 = ((x1701+(x1702<<x1703))%x1704);

	if (t27 != 276) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1941 = 29;
	uint32_t x1942 = 339U;
	uint16_t x1943 = 0U;
	int32_t x1944 = INT32_MAX;

	t28 = ((x1941+(x1942<<x1943))%x1944);

	if (t28 != 368U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1985 = 6;
	static uint64_t x1986 = UINT64_MAX;
	volatile int16_t x1987 = 39;
	static int64_t x1988 = INT64_MIN;

	t29 = ((x1985+(x1986<<x1987))%x1988);

	if (t29 != 9223371487098961926LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2077 = 0U;
	int8_t x2079 = 0;
	int8_t x2080 = 17;
	uint32_t t30 = 8U;

	t30 = ((x2077+(x2078<<x2079))%x2080);

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2089 = -1;
	static uint16_t x2090 = 21U;
	static uint16_t x2091 = 12U;
	int64_t x2092 = INT64_MIN;
	static volatile int64_t t31 = -22313226092LL;

	t31 = ((x2089+(x2090<<x2091))%x2092);

	if (t31 != 86015LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2105 = 2;
	static uint32_t x2106 = UINT32_MAX;
	int32_t x2107 = 10;
	static uint64_t x2108 = UINT64_MAX;
	uint64_t t32 = 2217155708979856LLU;

	t32 = ((x2105+(x2106<<x2107))%x2108);

	if (t32 != 4294966274LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2125 = INT8_MAX;
	uint32_t x2126 = 50670U;
	uint16_t x2127 = 0U;
	uint32_t t33 = 583772U;

	t33 = ((x2125+(x2126<<x2127))%x2128);

	if (t33 != 13U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2273 = 3U;
	uint32_t x2275 = 0U;
	int32_t x2276 = 251209;
	volatile uint64_t t34 = 2724798749LLU;

	t34 = ((x2273+(x2274<<x2275))%x2276);

	if (t34 != 37950LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2290 = 28;
	uint8_t x2291 = 7U;
	int64_t x2292 = INT64_MAX;
	static int64_t t35 = -260030307540LL;

	t35 = ((x2289+(x2290<<x2291))%x2292);

	if (t35 != 3456LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2354 = UINT64_MAX;
	static uint8_t x2355 = 16U;
	static volatile uint8_t x2356 = 4U;
	volatile uint64_t t36 = 32095474626697LLU;

	t36 = ((x2353+(x2354<<x2355))%x2356);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2457 = INT32_MIN;
	static uint8_t x2458 = 0U;
	int16_t x2460 = -9;
	volatile int32_t t37 = -194393488;

	t37 = ((x2457+(x2458<<x2459))%x2460);

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x2466 = 229U;
	int8_t x2467 = 9;
	int16_t x2468 = -1;
	volatile int64_t t38 = -1920LL;

	t38 = ((x2465+(x2466<<x2467))%x2468);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2713 = INT32_MIN;
	uint64_t x2714 = 565749001555462639LLU;
	int16_t x2715 = 1;
	int32_t x2716 = INT32_MIN;

	t39 = ((x2713+(x2714<<x2715))%x2716);

	if (t39 != 1131498000963441630LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2725 = -3;
	uint32_t x2726 = 1674370U;
	static volatile uint32_t x2727 = 17U;
	uint64_t x2728 = 576488202LLU;
	volatile uint64_t t40 = 23460514999714405LLU;

	t40 = ((x2725+(x2726<<x2727))%x2728);

	if (t40 != 419692541LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x3025 = UINT16_MAX;
	int64_t x3027 = 11LL;
	int32_t t41 = 0;

	t41 = ((x3025+(x3026<<x3027))%x3028);

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3029 = INT8_MIN;
	static uint32_t x3030 = 466U;
	volatile int8_t x3031 = 2;
	volatile int8_t x3032 = INT8_MIN;
	uint32_t t42 = 2U;

	t42 = ((x3029+(x3030<<x3031))%x3032);

	if (t42 != 1736U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x3033 = -1;
	uint32_t x3034 = UINT32_MAX;
	uint32_t x3035 = 9U;
	static int64_t x3036 = INT64_MIN;

	t43 = ((x3033+(x3034<<x3035))%x3036);

	if (t43 != 4294966783LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3053 = INT8_MIN;
	uint16_t x3055 = 15U;
	static int32_t x3056 = 124274;

	t44 = ((x3053+(x3054<<x3055))%x3056);

	if (t44 != 60366) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x3076 = -1;
	int32_t t45 = 4159511;

	t45 = ((x3073+(x3074<<x3075))%x3076);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x3077 = UINT32_MAX;
	uint64_t x3078 = UINT64_MAX;
	volatile uint64_t t46 = 738LLU;

	t46 = ((x3077+(x3078<<x3079))%x3080);

	if (t46 != 4294967294LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3137 = -1;
	uint64_t x3138 = UINT64_MAX;
	static int8_t x3139 = 40;
	volatile int64_t x3140 = INT64_MAX;

	t47 = ((x3137+(x3138<<x3139))%x3140);

	if (t47 != 9223370937343148032LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3233 = 6;
	volatile uint8_t x3234 = 97U;
	uint32_t x3236 = UINT32_MAX;
	static volatile uint32_t t48 = 1876570U;

	t48 = ((x3233+(x3234<<x3235))%x3236);

	if (t48 != 782U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3282 = INT32_MAX;
	volatile uint16_t x3283 = 0U;
	int8_t x3284 = INT8_MIN;
	int32_t t49 = 13680;

	t49 = ((x3281+(x3282<<x3283))%x3284);

	if (t49 != 14) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3350 = UINT8_MAX;
	uint8_t x3351 = 0U;
	int32_t t50 = -50052;

	t50 = ((x3349+(x3350<<x3351))%x3352);

	if (t50 != 253) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x3369 = 60U;
	uint8_t x3371 = 2U;
	int32_t x3372 = -1;
	volatile uint32_t t51 = 4662U;

	t51 = ((x3369+(x3370<<x3371))%x3372);

	if (t51 != 56U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3462 = 118U;
	uint8_t x3463 = 1U;
	uint16_t x3464 = 21679U;

	t52 = ((x3461+(x3462<<x3463))%x3464);

	if (t52 != 108) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3481 = 203501956900328774LLU;
	int64_t x3482 = 26749LL;
	static uint8_t x3483 = 33U;
	uint64_t x3484 = UINT64_MAX;
	uint64_t t53 = 135788289833933LLU;

	t53 = ((x3481+(x3482<<x3483))%x3484);

	if (t53 != 203731729060730182LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x3593 = 55;
	volatile uint64_t x3594 = 4LLU;
	int8_t x3595 = 0;

	t54 = ((x3593+(x3594<<x3595))%x3596);

	if (t54 != 59LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3609 = 426LLU;
	uint32_t x3610 = 212854U;
	int32_t x3612 = INT32_MAX;
	uint64_t t55 = 1365169025LLU;

	t55 = ((x3609+(x3610<<x3611))%x3612);

	if (t55 != 217962922LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x3641 = -1LL;
	uint64_t x3642 = 22660357044328002LLU;
	volatile uint64_t t56 = 263185686875168LLU;

	t56 = ((x3641+(x3642<<x3643))%x3644);

	if (t56 != 16LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3797 = INT8_MIN;
	int32_t x3799 = 6;
	int16_t x3800 = -1;
	int32_t t57 = -7266621;

	t57 = ((x3797+(x3798<<x3799))%x3800);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3834 = UINT16_MAX;
	uint8_t x3835 = 1U;
	int8_t x3836 = INT8_MIN;

	t58 = ((x3833+(x3834<<x3835))%x3836);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3942 = 1383345983U;
	static uint16_t x3943 = 5U;
	int16_t x3944 = 7190;
	uint32_t t59 = 0U;

	t59 = ((x3941+(x3942<<x3943))%x3944);

	if (t59 != 3428U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x3946 = INT8_MAX;
	uint16_t x3947 = 1U;
	static int64_t x3948 = -214268055546LL;
	int64_t t60 = 44730126990LL;

	t60 = ((x3945+(x3946<<x3947))%x3948);

	if (t60 != 254LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x4009 = UINT32_MAX;
	volatile uint8_t x4011 = 18U;
	static uint8_t x4012 = 78U;

	t61 = ((x4009+(x4010<<x4011))%x4012);

	if (t61 != 29U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4121 = UINT16_MAX;
	uint8_t x4122 = 0U;
	int64_t x4124 = -1LL;
	static int64_t t62 = 425611565LL;

	t62 = ((x4121+(x4122<<x4123))%x4124);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4273 = -3155;
	uint32_t x4274 = 11484399U;
	static uint8_t x4275 = 14U;
	uint8_t x4276 = 7U;
	uint32_t t63 = 16898U;

	t63 = ((x4273+(x4274<<x4275))%x4276);

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x4341 = -1LL;
	uint32_t x4342 = 17U;
	static int64_t x4343 = 0LL;
	static uint64_t x4344 = 73LLU;

	t64 = ((x4341+(x4342<<x4343))%x4344);

	if (t64 != 16LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4401 = 20671U;
	uint64_t x4402 = UINT64_MAX;
	uint32_t x4403 = 3U;
	int64_t x4404 = INT64_MIN;
	uint64_t t65 = 226525248784LLU;

	t65 = ((x4401+(x4402<<x4403))%x4404);

	if (t65 != 20663LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x4453 = INT64_MIN;
	static uint8_t x4454 = 1U;
	static uint8_t x4455 = 2U;
	int8_t x4456 = INT8_MAX;
	volatile int64_t t66 = 75254870LL;

	t66 = ((x4453+(x4454<<x4455))%x4456);

	if (t66 != -124LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4645 = UINT64_MAX;
	static volatile uint8_t x4646 = 45U;
	int32_t x4647 = 0;
	static volatile int64_t x4648 = INT64_MIN;
	volatile uint64_t t67 = 558559450573276LLU;

	t67 = ((x4645+(x4646<<x4647))%x4648);

	if (t67 != 44LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x4657 = -2898843LL;
	uint32_t x4658 = 221U;
	volatile int32_t x4660 = INT32_MAX;
	volatile int64_t t68 = -1967784553095724LL;

	t68 = ((x4657+(x4658<<x4659))%x4660);

	if (t68 != -2897959LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4717 = -121LL;
	int8_t x4718 = INT8_MAX;
	int32_t x4720 = -1;
	int64_t t69 = -756711594202LL;

	t69 = ((x4717+(x4718<<x4719))%x4720);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4737 = 1;
	uint16_t x4738 = 1929U;
	uint32_t x4739 = 4U;
	volatile uint16_t x4740 = UINT16_MAX;
	int32_t t70 = 0;

	t70 = ((x4737+(x4738<<x4739))%x4740);

	if (t70 != 30865) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4945 = -32384622LL;
	int8_t x4947 = 7;
	int32_t x4948 = -7587786;

	t71 = ((x4945+(x4946<<x4947))%x4948);

	if (t71 != 5675194LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5005 = -207;
	int64_t x5006 = 2587LL;
	volatile uint16_t x5007 = 2U;
	int16_t x5008 = -14498;
	volatile int64_t t72 = -228063LL;

	t72 = ((x5005+(x5006<<x5007))%x5008);

	if (t72 != 10141LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x5009 = -134;
	uint8_t x5010 = 1U;
	static int8_t x5012 = INT8_MAX;
	int32_t t73 = 1;

	t73 = ((x5009+(x5010<<x5011))%x5012);

	if (t73 != -70) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5045 = 69700639U;
	static volatile uint32_t x5046 = 113014396U;
	static int32_t x5048 = -211801963;
	volatile uint32_t t74 = 107U;

	t74 = ((x5045+(x5046<<x5047))%x5048);

	if (t74 != 3231582239U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x5373 = 2585;
	uint32_t x5374 = UINT32_MAX;
	volatile uint32_t x5375 = 2U;
	uint32_t x5376 = 2U;
	volatile uint32_t t75 = 974U;

	t75 = ((x5373+(x5374<<x5375))%x5376);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x5482 = 71LL;
	int16_t x5483 = 4;
	uint64_t x5484 = UINT64_MAX;
	uint64_t t76 = 39LLU;

	t76 = ((x5481+(x5482<<x5483))%x5484);

	if (t76 != 1135LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x5493 = UINT16_MAX;
	static uint16_t x5494 = 15U;
	uint16_t x5495 = 21U;
	volatile int16_t x5496 = -1;
	int32_t t77 = 1;

	t77 = ((x5493+(x5494<<x5495))%x5496);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x5529 = -36;
	uint64_t x5530 = UINT64_MAX;
	uint8_t x5531 = 9U;
	static int8_t x5532 = INT8_MIN;

	t78 = ((x5529+(x5530<<x5531))%x5532);

	if (t78 != 18446744073709551068LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5662 = 15U;
	int8_t x5663 = 1;
	int32_t t79 = 958434;

	t79 = ((x5661+(x5662<<x5663))%x5664);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x5729 = 3U;
	int16_t x5730 = 1;
	static int16_t x5731 = 25;
	volatile int64_t t80 = -119165372004814LL;

	t80 = ((x5729+(x5730<<x5731))%x5732);

	if (t80 != 33554435LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5817 = INT16_MIN;
	static uint8_t x5818 = 7U;
	volatile int32_t t81 = 1819;

	t81 = ((x5817+(x5818<<x5819))%x5820);

	if (t81 != -32754) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x5959 = 1;
	volatile uint64_t t82 = 881056LLU;

	t82 = ((x5957+(x5958<<x5959))%x5960);

	if (t82 != 31593LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x5997 = INT16_MIN;
	int8_t x5998 = 7;
	uint16_t x5999 = 0U;
	static int64_t x6000 = INT64_MIN;
	int64_t t83 = -22001573542421030LL;

	t83 = ((x5997+(x5998<<x5999))%x6000);

	if (t83 != -32761LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x6054 = UINT16_MAX;
	uint8_t x6055 = 1U;
	static uint8_t x6056 = 30U;

	t84 = ((x6053+(x6054<<x6055))%x6056);

	if (t84 != 12U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x6138 = 26640146LL;
	uint8_t x6139 = 10U;

	t85 = ((x6137+(x6138<<x6139))%x6140);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x6165 = -39317484;
	uint16_t x6166 = 427U;
	static int8_t x6167 = 0;

	t86 = ((x6165+(x6166<<x6167))%x6168);

	if (t86 != -10) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6231 = 1;
	static volatile int16_t x6232 = INT16_MIN;
	uint32_t t87 = 0U;

	t87 = ((x6229+(x6230<<x6231))%x6232);

	if (t87 != 175230459U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6421 = 31U;
	volatile int64_t x6422 = 81263872666649942LL;
	int8_t x6423 = 0;

	t88 = ((x6421+(x6422<<x6423))%x6424);

	if (t88 != 21LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x6433 = 324055519631LL;
	uint32_t x6434 = 6U;
	int32_t x6435 = 27;
	volatile int32_t x6436 = 3251;
	int64_t t89 = -3829374455LL;

	t89 = ((x6433+(x6434<<x6435))%x6436);

	if (t89 != 2069LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x6541 = 27U;
	int64_t x6542 = 101295511322LL;
	static uint32_t x6544 = 121U;

	t90 = ((x6541+(x6542<<x6543))%x6544);

	if (t90 != 112LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x6585 = 368;
	uint64_t x6586 = 98908032LLU;
	volatile int16_t x6587 = 1;
	volatile int16_t x6588 = INT16_MIN;
	volatile uint64_t t91 = 2538LLU;

	t91 = ((x6585+(x6586<<x6587))%x6588);

	if (t91 != 197816432LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x6617 = 94U;
	static uint8_t x6618 = 1U;
	uint8_t x6619 = 2U;
	uint8_t x6620 = UINT8_MAX;
	static volatile int32_t t92 = 534004610;

	t92 = ((x6617+(x6618<<x6619))%x6620);

	if (t92 != 98) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x6625 = INT32_MIN;
	uint8_t x6626 = UINT8_MAX;
	int16_t x6627 = 1;
	int16_t x6628 = INT16_MAX;
	int32_t t93 = -52073;

	t93 = ((x6625+(x6626<<x6627))%x6628);

	if (t93 != -32259) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x6645 = INT32_MIN;
	int8_t x6647 = 10;
	uint8_t x6648 = UINT8_MAX;
	static int64_t t94 = 44610283040LL;

	t94 = ((x6645+(x6646<<x6647))%x6648);

	if (t94 != 244LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6677 = -1;
	uint16_t x6678 = 16U;
	volatile uint8_t x6679 = 3U;
	int8_t x6680 = INT8_MAX;
	static int32_t t95 = 6316335;

	t95 = ((x6677+(x6678<<x6679))%x6680);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x6773 = -1;
	static uint8_t x6775 = 12U;
	uint64_t x6776 = 4573780031052173375LLU;

	t96 = ((x6773+(x6774<<x6775))%x6776);

	if (t96 != 151623949500858115LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x6897 = INT16_MAX;
	int16_t x6898 = 0;
	uint8_t x6899 = 0U;
	int16_t x6900 = INT16_MIN;
	volatile int32_t t97 = 8565129;

	t97 = ((x6897+(x6898<<x6899))%x6900);

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6909 = INT64_MIN;
	static uint8_t x6911 = 1U;
	int32_t x6912 = INT32_MAX;

	t98 = ((x6909+(x6910<<x6911))%x6912);

	if (t98 != -1497774031LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6949 = -860;
	int16_t x6950 = 5759;
	int64_t x6951 = 0LL;
	volatile int32_t x6952 = INT32_MIN;

	t99 = ((x6949+(x6950<<x6951))%x6952);

	if (t99 != 4899) { NG(); } else { ; }
	
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

