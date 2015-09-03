#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
uint32_t x2 = 1U;
volatile uint32_t t0 = 3U;
uint64_t x157 = UINT64_MAX;
uint32_t x189 = 106329U;
static uint32_t x293 = 15709531U;
uint16_t x295 = 619U;
volatile int32_t x476 = -64943621;
int8_t x487 = INT8_MAX;
uint8_t x502 = 12U;
int64_t x504 = INT64_MIN;
volatile uint64_t x561 = 99279547LLU;
uint16_t x562 = 3U;
int8_t x563 = -1;
volatile uint32_t x564 = UINT32_MAX;
uint32_t x691 = UINT32_MAX;
static uint8_t x692 = 19U;
int16_t x699 = -1;
volatile int32_t x735 = -167159916;
int32_t x736 = -289131;
static int16_t x747 = INT16_MAX;
uint16_t x882 = 3U;
uint16_t x1052 = 3642U;
int32_t t16 = -314745436;
volatile uint32_t t17 = 2268466U;
uint64_t t18 = 127066628935758LLU;
volatile int8_t x1183 = INT8_MIN;
volatile int32_t x1184 = -1;
static int32_t t19 = 385417;
uint8_t x1368 = 14U;
static uint64_t x1693 = 142110517378LLU;
static volatile uint64_t t21 = 2970048159036247897LLU;
static volatile int8_t x1810 = 0;
volatile uint64_t t22 = 183060482734LLU;
static volatile uint8_t x1850 = 2U;
int32_t x1972 = -1;
volatile int32_t x2020 = INT32_MAX;
uint8_t x2125 = 21U;
volatile int32_t t28 = 167213;
int8_t x2236 = INT8_MIN;
int64_t x2320 = 99082673LL;
int16_t x2679 = INT16_MAX;
volatile uint32_t t34 = 5U;
static volatile int8_t x2722 = 1;
static volatile uint32_t x2793 = 270762U;
volatile int64_t t38 = -1563531879891LL;
int16_t x2860 = INT16_MIN;
uint64_t t40 = 64561881LLU;
volatile uint32_t x2989 = 2977451U;
int8_t x3011 = -1;
uint64_t t42 = 70386221158078248LLU;
int64_t x3048 = INT64_MIN;
static uint64_t x3380 = UINT64_MAX;
uint64_t t46 = 800671481470LLU;
static int16_t x3412 = -1;
volatile uint64_t t47 = 33608895499LLU;
static uint8_t x3434 = 1U;
volatile int16_t x3760 = -6;
static volatile uint64_t t52 = 33608LLU;
uint8_t x4193 = 53U;
static uint64_t x4196 = 265928362878LLU;
int8_t x4289 = 0;
uint32_t x4399 = 86U;
uint8_t x4518 = 2U;
int64_t t58 = -2054LL;
int8_t x4522 = 1;
volatile uint32_t t59 = 192591962U;
int32_t x4610 = 0;
uint64_t x4660 = 5309193990629LLU;
uint64_t x4737 = 2523670755987976LLU;
int16_t x4904 = 2;
uint64_t x5025 = UINT64_MAX;
int32_t x5027 = -2134187;
volatile uint16_t x5061 = 2053U;
volatile int8_t x5062 = 0;
static volatile uint32_t x5153 = 10442U;
static int32_t x5315 = -6831108;
uint8_t x5324 = 1U;
uint16_t x5349 = UINT16_MAX;
int32_t x5351 = INT32_MIN;
uint16_t x5389 = 356U;
static volatile int8_t x5390 = 5;
int32_t x5461 = 4032264;
int64_t t72 = -591110519233663LL;
uint32_t x5770 = 3U;
static int32_t x5922 = 34;
volatile uint8_t x6218 = 24U;
uint32_t x6220 = UINT32_MAX;
int8_t x6246 = 0;
static volatile uint32_t x6304 = 55U;
static int16_t x6305 = INT16_MAX;
int32_t x6306 = 0;
int16_t x6352 = INT16_MIN;
volatile int64_t x6533 = INT64_MAX;
int8_t x6535 = -1;
int64_t t83 = -4888279510329118LL;
int16_t x6761 = 700;
static uint8_t x6825 = 4U;
int64_t t86 = 15834757410LL;
static uint8_t x6902 = 10U;
volatile int64_t x6989 = INT64_MAX;
int16_t x6990 = 0;
uint32_t x7222 = 12U;
volatile uint64_t x7223 = UINT64_MAX;
int16_t x7335 = INT16_MIN;
uint64_t x7336 = 37472727806039LLU;
volatile uint64_t t92 = 1736462562298691LLU;
uint8_t x7521 = 43U;
uint8_t x7638 = 0U;
int16_t x7816 = INT16_MIN;
int32_t t98 = 296303;


void f0(void) {
	int16_t x3 = -1;
	int32_t x4 = INT32_MIN;

	t0 = ((x1<<x2)*(x3|x4));

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x117 = 1;
	int8_t x118 = 0;
	static int8_t x119 = INT8_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x117<<x118)*(x119|x120));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x158 = 55U;
	int64_t x159 = INT64_MIN;
	int64_t x160 = -177LL;
	volatile uint64_t t2 = 93751485LLU;

	t2 = ((x157<<x158)*(x159|x160));

	if (t2 != 6377097072356622336LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x190 = 0LL;
	int16_t x191 = 11073;
	static volatile int32_t x192 = INT32_MIN;
	uint32_t t3 = 559U;

	t3 = ((x189<<x190)*(x191|x192));

	if (t3 != 3324864665U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x217 = 1;
	static uint64_t x218 = 10LLU;
	uint8_t x219 = 13U;
	uint32_t x220 = UINT32_MAX;
	uint32_t t4 = 91U;

	t4 = ((x217<<x218)*(x219|x220));

	if (t4 != 4294966272U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x294 = 4LLU;
	int32_t x296 = -1;
	uint32_t t5 = 36500U;

	t5 = ((x293<<x294)*(x295|x296));

	if (t5 != 4043614800U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x473 = 40LLU;
	int8_t x474 = 18;
	static int16_t x475 = INT16_MAX;
	static volatile uint64_t t6 = 489332LLU;

	t6 = ((x473<<x474)*(x475|x476));

	if (t6 != 18446063407281995776LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x485 = 4611;
	uint8_t x486 = 2U;
	volatile uint32_t x488 = 6860871U;
	uint32_t t7 = 101648989U;

	t7 = ((x485<<x486)*(x487|x488));

	if (t7 != 1988886004U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x501 = 51523U;
	static int8_t x503 = -1;
	volatile int64_t t8 = 117102951030964LL;

	t8 = ((x501<<x502)*(x503|x504));

	if (t8 != -211038208LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t t9 = 35109763502689LLU;

	t9 = ((x561<<x562)*(x563|x564));

	if (t9 != 3411219259419322920LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x661 = INT8_MAX;
	int16_t x662 = 2;
	int16_t x663 = INT16_MIN;
	uint16_t x664 = UINT16_MAX;
	int32_t t10 = 90703;

	t10 = ((x661<<x662)*(x663|x664));

	if (t10 != -508) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x689 = 12U;
	static uint8_t x690 = 0U;
	uint32_t t11 = 7984U;

	t11 = ((x689<<x690)*(x691|x692));

	if (t11 != 4294967284U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x697 = UINT32_MAX;
	int8_t x698 = 5;
	int16_t x700 = INT16_MIN;
	uint32_t t12 = 907U;

	t12 = ((x697<<x698)*(x699|x700));

	if (t12 != 32U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x733 = UINT32_MAX;
	uint8_t x734 = 27U;
	uint32_t t13 = 13U;

	t13 = ((x733<<x734)*(x735|x736));

	if (t13 != 1476395008U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x745 = 2U;
	int16_t x746 = 3;
	int8_t x748 = INT8_MIN;
	volatile int32_t t14 = 1;

	t14 = ((x745<<x746)*(x747|x748));

	if (t14 != -16) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x881 = UINT16_MAX;
	static uint64_t x883 = UINT64_MAX;
	int8_t x884 = -1;
	volatile uint64_t t15 = 15157LLU;

	t15 = ((x881<<x882)*(x883|x884));

	if (t15 != 18446744073709027336LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1049 = 12U;
	int64_t x1050 = 1LL;
	uint8_t x1051 = 44U;

	t16 = ((x1049<<x1050)*(x1051|x1052));

	if (t16 != 87504) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1053 = INT8_MAX;
	int8_t x1054 = 13;
	static int32_t x1055 = INT32_MIN;
	uint32_t x1056 = 3322U;

	t17 = ((x1053<<x1054)*(x1055|x1056));

	if (t17 != 3456155648U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1089 = 2LLU;
	uint8_t x1090 = 15U;
	int64_t x1091 = INT64_MIN;
	uint8_t x1092 = UINT8_MAX;

	t18 = ((x1089<<x1090)*(x1091|x1092));

	if (t18 != 16711680LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1181 = 17U;
	uint8_t x1182 = 0U;

	t19 = ((x1181<<x1182)*(x1183|x1184));

	if (t19 != -17) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1365 = 33U;
	static uint64_t x1366 = 1LLU;
	uint8_t x1367 = 3U;
	volatile int32_t t20 = -1;

	t20 = ((x1365<<x1366)*(x1367|x1368));

	if (t20 != 990) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1694 = 48U;
	int64_t x1695 = -1LL;
	int8_t x1696 = -1;

	t21 = ((x1693<<x1694)*(x1695|x1696));

	if (t21 != 10916162546792660992LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1809 = 368LLU;
	int16_t x1811 = -1;
	volatile int8_t x1812 = INT8_MAX;

	t22 = ((x1809<<x1810)*(x1811|x1812));

	if (t22 != 18446744073709551248LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1849 = 25352844887794150LLU;
	static int16_t x1851 = -1;
	int16_t x1852 = 224;
	volatile uint64_t t23 = 8072434LLU;

	t23 = ((x1849<<x1850)*(x1851|x1852));

	if (t23 != 18345332694158375016LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1969 = 487277U;
	volatile uint8_t x1970 = 11U;
	int64_t x1971 = -1LL;
	int64_t t24 = -131868619431476LL;

	t24 = ((x1969<<x1970)*(x1971|x1972));

	if (t24 != -997943296LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1993 = 784U;
	uint32_t x1994 = 0U;
	volatile int8_t x1995 = INT8_MIN;
	uint64_t x1996 = 636LLU;
	volatile uint64_t t25 = 122LLU;

	t25 = ((x1993<<x1994)*(x1995|x1996));

	if (t25 != 18446744073709548480LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x2017 = 156344729508521871LLU;
	static int8_t x2018 = 0;
	int64_t x2019 = INT64_MIN;
	uint64_t t26 = 382LLU;

	t26 = ((x2017<<x2018)*(x2019|x2020));

	if (t26 != 9098011302351329393LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x2097 = UINT64_MAX;
	int8_t x2098 = 1;
	int64_t x2099 = -1LL;
	static uint16_t x2100 = 27U;
	uint64_t t27 = 319149458086196310LLU;

	t27 = ((x2097<<x2098)*(x2099|x2100));

	if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x2126 = 3U;
	volatile int8_t x2127 = -1;
	int8_t x2128 = INT8_MIN;

	t28 = ((x2125<<x2126)*(x2127|x2128));

	if (t28 != -168) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x2233 = UINT64_MAX;
	uint16_t x2234 = 1U;
	volatile uint32_t x2235 = UINT32_MAX;
	uint64_t t29 = 499580761419170240LLU;

	t29 = ((x2233<<x2234)*(x2235|x2236));

	if (t29 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x2249 = 0;
	int8_t x2250 = 3;
	int32_t x2251 = INT32_MIN;
	int16_t x2252 = INT16_MIN;
	volatile int32_t t30 = 14239252;

	t30 = ((x2249<<x2250)*(x2251|x2252));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2317 = INT8_MAX;
	uint8_t x2318 = 10U;
	int64_t x2319 = -1LL;
	volatile int64_t t31 = 10356LL;

	t31 = ((x2317<<x2318)*(x2319|x2320));

	if (t31 != -130048LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x2365 = INT16_MAX;
	static int16_t x2366 = 4;
	uint32_t x2367 = 7594U;
	static uint16_t x2368 = 7496U;
	static uint32_t t32 = 45293U;

	t32 = ((x2365<<x2366)*(x2367|x2368));

	if (t32 != 4014874976U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2545 = 639U;
	uint16_t x2546 = 5U;
	uint64_t x2547 = UINT64_MAX;
	volatile int8_t x2548 = INT8_MIN;
	uint64_t t33 = 1LLU;

	t33 = ((x2545<<x2546)*(x2547|x2548));

	if (t33 != 18446744073709531168LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2677 = 11U;
	volatile int8_t x2678 = 1;
	uint32_t x2680 = 7447U;

	t34 = ((x2677<<x2678)*(x2679|x2680));

	if (t34 != 720874U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x2685 = UINT16_MAX;
	static uint8_t x2686 = 1U;
	int8_t x2687 = INT8_MIN;
	uint8_t x2688 = 42U;
	volatile int32_t t35 = -257910;

	t35 = ((x2685<<x2686)*(x2687|x2688));

	if (t35 != -11272020) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2721 = UINT64_MAX;
	int16_t x2723 = INT16_MIN;
	volatile int8_t x2724 = 7;
	volatile uint64_t t36 = 50LLU;

	t36 = ((x2721<<x2722)*(x2723|x2724));

	if (t36 != 65522LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2781 = 7U;
	volatile uint8_t x2782 = 1U;
	static uint32_t x2783 = UINT32_MAX;
	static volatile uint16_t x2784 = 168U;
	volatile uint32_t t37 = 59U;

	t37 = ((x2781<<x2782)*(x2783|x2784));

	if (t37 != 4294967282U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2794 = 3U;
	static int64_t x2795 = INT64_MIN;
	volatile int32_t x2796 = -77605153;

	t38 = ((x2793<<x2794)*(x2795|x2796));

	if (t38 != -168100211492688LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x2857 = 0U;
	uint8_t x2858 = 3U;
	int32_t x2859 = -412;
	static int32_t t39 = 87;

	t39 = ((x2857<<x2858)*(x2859|x2860));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2925 = 32394794LLU;
	volatile uint8_t x2926 = 1U;
	static uint64_t x2927 = UINT64_MAX;
	int32_t x2928 = INT32_MAX;

	t40 = ((x2925<<x2926)*(x2927|x2928));

	if (t40 != 18446744073644762028LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2990 = 21U;
	int8_t x2991 = INT8_MIN;
	volatile uint32_t x2992 = 1376746403U;
	uint32_t t41 = 30356U;

	t41 = ((x2989<<x2990)*(x2991|x2992));

	if (t41 != 2082471936U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3009 = UINT32_MAX;
	uint16_t x3010 = 22U;
	uint64_t x3012 = UINT64_MAX;

	t42 = ((x3009<<x3010)*(x3011|x3012));

	if (t42 != 18446744069418778624LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x3045 = 0;
	uint16_t x3046 = 10U;
	volatile uint8_t x3047 = 15U;
	volatile int64_t t43 = 1328242LL;

	t43 = ((x3045<<x3046)*(x3047|x3048));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3137 = 17759613955408LLU;
	int8_t x3138 = 0;
	int64_t x3139 = -1LL;
	int16_t x3140 = -1;
	uint64_t t44 = 15976874518619929LLU;

	t44 = ((x3137<<x3138)*(x3139|x3140));

	if (t44 != 18446726314095596208LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x3161 = 22119741LLU;
	uint32_t x3162 = 7U;
	uint32_t x3163 = UINT32_MAX;
	int16_t x3164 = INT16_MIN;
	volatile uint64_t t45 = 42306LLU;

	t45 = ((x3161<<x3162)*(x3163|x3164));

	if (t45 != 12160456213615436160LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3377 = 0;
	uint16_t x3378 = 7U;
	int64_t x3379 = INT64_MAX;

	t46 = ((x3377<<x3378)*(x3379|x3380));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x3409 = UINT64_MAX;
	int8_t x3410 = 1;
	volatile int8_t x3411 = -3;

	t47 = ((x3409<<x3410)*(x3411|x3412));

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x3433 = 45U;
	uint8_t x3435 = 26U;
	int16_t x3436 = -1;
	static volatile int32_t t48 = -8;

	t48 = ((x3433<<x3434)*(x3435|x3436));

	if (t48 != -90) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x3593 = 19952U;
	int64_t x3594 = 28LL;
	uint8_t x3595 = UINT8_MAX;
	static int16_t x3596 = 807;
	static uint32_t t49 = 5U;

	t49 = ((x3593<<x3594)*(x3595|x3596));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3649 = 0LL;
	volatile uint8_t x3650 = 2U;
	static uint64_t x3651 = 3823LLU;
	static volatile int32_t x3652 = INT32_MAX;
	uint64_t t50 = 364567730031LLU;

	t50 = ((x3649<<x3650)*(x3651|x3652));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x3757 = 437921224U;
	uint8_t x3758 = 18U;
	uint64_t x3759 = 2712142679026499593LLU;
	volatile uint64_t t51 = 3338901764553LLU;

	t51 = ((x3757<<x3758)*(x3759|x3760));

	if (t51 != 18446744061032267776LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3957 = UINT64_MAX;
	static uint16_t x3958 = 0U;
	uint64_t x3959 = 1659550LLU;
	int8_t x3960 = INT8_MIN;

	t52 = ((x3957<<x3958)*(x3959|x3960));

	if (t52 != 98LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4005 = 171182106130249LLU;
	volatile int16_t x4006 = 0;
	int8_t x4007 = INT8_MAX;
	static uint64_t x4008 = UINT64_MAX;
	uint64_t t53 = 0LLU;

	t53 = ((x4005<<x4006)*(x4007|x4008));

	if (t53 != 18446572891603421367LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x4129 = 20;
	volatile int8_t x4130 = 5;
	int8_t x4131 = -1;
	uint32_t x4132 = 3U;
	volatile uint32_t t54 = 2173U;

	t54 = ((x4129<<x4130)*(x4131|x4132));

	if (t54 != 4294966656U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x4194 = 21U;
	volatile int16_t x4195 = -51;
	uint64_t t55 = 5271317053387LLU;

	t55 = ((x4193<<x4194)*(x4195|x4196));

	if (t55 != 18446744073598402560LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x4290 = 1;
	int8_t x4291 = INT8_MIN;
	volatile int64_t x4292 = INT64_MIN;
	volatile int64_t t56 = -1LL;

	t56 = ((x4289<<x4290)*(x4291|x4292));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x4397 = UINT32_MAX;
	static volatile uint32_t x4398 = 12U;
	int32_t x4400 = INT32_MIN;
	uint32_t t57 = 192267U;

	t57 = ((x4397<<x4398)*(x4399|x4400));

	if (t57 != 4294615040U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x4517 = 2100423367076164LL;
	int8_t x4519 = -1;
	int16_t x4520 = INT16_MIN;

	t58 = ((x4517<<x4518)*(x4519|x4520));

	if (t58 != -8401693468304656LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4521 = UINT8_MAX;
	int32_t x4523 = -1;
	volatile uint32_t x4524 = 1821186779U;

	t59 = ((x4521<<x4522)*(x4523|x4524));

	if (t59 != 4294966786U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x4609 = UINT8_MAX;
	int16_t x4611 = -5253;
	int32_t x4612 = 173781780;
	int32_t t60 = -390;

	t60 = ((x4609<<x4610)*(x4611|x4612));

	if (t60 != -294015) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4657 = 104373259LLU;
	uint16_t x4658 = 0U;
	int64_t x4659 = INT64_MAX;
	static volatile uint64_t t61 = 192434677402LLU;

	t61 = ((x4657<<x4658)*(x4659|x4660));

	if (t61 != 9223372036750402549LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4717 = 425U;
	uint8_t x4718 = 3U;
	int32_t x4719 = 1;
	volatile uint16_t x4720 = 265U;
	static int32_t t62 = 164;

	t62 = ((x4717<<x4718)*(x4719|x4720));

	if (t62 != 901000) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x4738 = 0U;
	int64_t x4739 = INT64_MIN;
	volatile int8_t x4740 = -1;
	uint64_t t63 = 74499724572LLU;

	t63 = ((x4737<<x4738)*(x4739|x4740));

	if (t63 != 18444220402953563640LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4901 = 34301341U;
	volatile uint16_t x4902 = 28U;
	int16_t x4903 = INT16_MIN;
	volatile uint32_t t64 = 290448U;

	t64 = ((x4901<<x4902)*(x4903|x4904));

	if (t64 != 2684354560U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x5026 = 7U;
	uint64_t x5028 = UINT64_MAX;
	uint64_t t65 = 1141LLU;

	t65 = ((x5025<<x5026)*(x5027|x5028));

	if (t65 != 128LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x5063 = 1U;
	int16_t x5064 = INT16_MIN;
	volatile int32_t t66 = -63;

	t66 = ((x5061<<x5062)*(x5063|x5064));

	if (t66 != -67270651) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x5154 = 0U;
	uint32_t x5155 = 208319U;
	int8_t x5156 = INT8_MAX;
	static volatile uint32_t t67 = 14U;

	t67 = ((x5153<<x5154)*(x5155|x5156));

	if (t67 != 2175935286U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x5313 = 89458903U;
	int8_t x5314 = 1;
	volatile uint64_t x5316 = 4809947729513LLU;
	volatile uint64_t t68 = 7515377115LLU;

	t68 = ((x5313<<x5314)*(x5315|x5316));

	if (t68 != 18445991438961421046LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x5321 = 17293871561140886LLU;
	int16_t x5322 = 16;
	static int16_t x5323 = -1;
	uint64_t t69 = 84339152417297LLU;

	t69 = ((x5321<<x5322)*(x5323|x5324));

	if (t69 != 10326965939063095296LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5350 = 1U;
	int16_t x5352 = -2;
	int32_t t70 = 1;

	t70 = ((x5349<<x5350)*(x5351|x5352));

	if (t70 != -262140) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x5391 = 0U;
	uint64_t x5392 = 2093768439777LLU;
	volatile uint64_t t71 = 3396936390683512LLU;

	t71 = ((x5389<<x5390)*(x5391|x5392));

	if (t71 != 23852210065939584LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x5462 = 0U;
	int64_t x5463 = INT64_MIN;
	int16_t x5464 = -1;

	t72 = ((x5461<<x5462)*(x5463|x5464));

	if (t72 != -4032264LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5581 = INT8_MAX;
	int8_t x5582 = 0;
	int8_t x5583 = INT8_MIN;
	static uint64_t x5584 = 123236LLU;
	volatile uint64_t t73 = 182989121180LLU;

	t73 = ((x5581<<x5582)*(x5583|x5584));

	if (t73 != 18446744073709548060LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x5769 = 22403799U;
	int16_t x5771 = 2596;
	uint16_t x5772 = 26U;
	static uint32_t t74 = 935U;

	t74 = ((x5769<<x5770)*(x5771|x5772));

	if (t74 != 1790652560U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x5773 = 28U;
	static int32_t x5774 = 1;
	int32_t x5775 = INT32_MIN;
	int8_t x5776 = INT8_MIN;
	static volatile int32_t t75 = 2181;

	t75 = ((x5773<<x5774)*(x5775|x5776));

	if (t75 != -7168) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5833 = 0U;
	int8_t x5834 = 0;
	int64_t x5835 = INT64_MAX;
	uint32_t x5836 = UINT32_MAX;
	volatile int64_t t76 = -55177557401918LL;

	t76 = ((x5833<<x5834)*(x5835|x5836));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5921 = 29025650290652753LLU;
	int32_t x5923 = -1;
	int32_t x5924 = INT32_MIN;
	uint64_t t77 = 5172384LLU;

	t77 = ((x5921<<x5922)*(x5923|x5924));

	if (t77 != 11832124709904842752LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x6217 = 50;
	int16_t x6219 = INT16_MAX;
	volatile uint32_t t78 = 2U;

	t78 = ((x6217<<x6218)*(x6219|x6220));

	if (t78 != 3456106496U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x6245 = 493336865099709806LLU;
	int32_t x6247 = INT32_MIN;
	static uint16_t x6248 = 3763U;
	static uint64_t t79 = 120807LLU;

	t79 = ((x6245<<x6246)*(x6247|x6248));

	if (t79 != 13233972058446149610LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x6301 = UINT64_MAX;
	static uint32_t x6302 = 3U;
	int8_t x6303 = -5;
	static volatile uint64_t t80 = 190978701449247LLU;

	t80 = ((x6301<<x6302)*(x6303|x6304));

	if (t80 != 18446744039349813256LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x6307 = UINT64_MAX;
	int16_t x6308 = INT16_MIN;
	uint64_t t81 = 985483474118649LLU;

	t81 = ((x6305<<x6306)*(x6307|x6308));

	if (t81 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x6349 = UINT32_MAX;
	uint32_t x6350 = 4U;
	int64_t x6351 = -1LL;
	int64_t t82 = -1LL;

	t82 = ((x6349<<x6350)*(x6351|x6352));

	if (t82 != -4294967280LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x6534 = 0LL;
	int32_t x6536 = -100;

	t83 = ((x6533<<x6534)*(x6535|x6536));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x6673 = 64668089158994LLU;
	volatile uint8_t x6674 = 3U;
	static int64_t x6675 = -1LL;
	uint64_t x6676 = UINT64_MAX;
	volatile uint64_t t84 = 62927276831198437LLU;

	t84 = ((x6673<<x6674)*(x6675|x6676));

	if (t84 != 18446226728996279664LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x6762 = 7;
	int32_t x6763 = -1;
	static uint16_t x6764 = UINT16_MAX;
	volatile int32_t t85 = 71065117;

	t85 = ((x6761<<x6762)*(x6763|x6764));

	if (t85 != -89600) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x6826 = 1U;
	int64_t x6827 = -1LL;
	volatile int8_t x6828 = 9;

	t86 = ((x6825<<x6826)*(x6827|x6828));

	if (t86 != -8LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x6901 = UINT16_MAX;
	volatile uint32_t x6903 = UINT32_MAX;
	int16_t x6904 = INT16_MIN;
	uint32_t t87 = 114870385U;

	t87 = ((x6901<<x6902)*(x6903|x6904));

	if (t87 != 4227859456U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x6991 = 178687710520LLU;
	volatile uint32_t x6992 = UINT32_MAX;
	volatile uint64_t t88 = 38105114047274LLU;

	t88 = ((x6989<<x6990)*(x6991|x6992));

	if (t88 != 9223371856466149377LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x7133 = UINT32_MAX;
	uint16_t x7134 = 0U;
	uint8_t x7135 = 1U;
	int32_t x7136 = -1;
	volatile uint32_t t89 = 1042U;

	t89 = ((x7133<<x7134)*(x7135|x7136));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x7169 = 53243LLU;
	uint16_t x7170 = 15U;
	volatile int32_t x7171 = -1;
	int8_t x7172 = -3;
	static uint64_t t90 = 7689378272396111396LLU;

	t90 = ((x7169<<x7170)*(x7171|x7172));

	if (t90 != 18446744071964884992LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x7221 = 2042U;
	int8_t x7224 = INT8_MIN;
	volatile uint64_t t91 = 0LLU;

	t91 = ((x7221<<x7222)*(x7223|x7224));

	if (t91 != 18446744073701187584LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x7333 = INT64_MAX;
	static int32_t x7334 = 0;

	t92 = ((x7333<<x7334)*(x7335|x7336));

	if (t92 != 9223372036854796201LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x7373 = UINT32_MAX;
	int32_t x7374 = 0;
	static volatile int16_t x7375 = INT16_MIN;
	volatile int64_t x7376 = INT64_MIN;
	int64_t t93 = -86571063975357713LL;

	t93 = ((x7373<<x7374)*(x7375|x7376));

	if (t93 != -140737488322560LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x7509 = UINT16_MAX;
	uint32_t x7510 = 0U;
	int8_t x7511 = INT8_MIN;
	int64_t x7512 = INT64_MIN;
	volatile int64_t t94 = 2093559178LL;

	t94 = ((x7509<<x7510)*(x7511|x7512));

	if (t94 != -8388480LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x7522 = 3;
	int16_t x7523 = INT16_MIN;
	int8_t x7524 = INT8_MAX;
	volatile int32_t t95 = 433925475;

	t95 = ((x7521<<x7522)*(x7523|x7524));

	if (t95 != -11228504) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x7577 = 237U;
	uint32_t x7578 = 1U;
	int64_t x7579 = INT64_MAX;
	volatile int64_t x7580 = -1LL;
	int64_t t96 = 4261453346621LL;

	t96 = ((x7577<<x7578)*(x7579|x7580));

	if (t96 != -474LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x7637 = UINT16_MAX;
	volatile int32_t x7639 = 1392329;
	int8_t x7640 = INT8_MIN;
	static volatile int32_t t97 = 469;

	t97 = ((x7637<<x7638)*(x7639|x7640));

	if (t97 != -3604425) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x7813 = 1U;
	int64_t x7814 = 29LL;
	static int32_t x7815 = -1;

	t98 = ((x7813<<x7814)*(x7815|x7816));

	if (t98 != -536870912) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x7829 = 14U;
	uint32_t x7830 = 2U;
	int16_t x7831 = -1;
	int16_t x7832 = INT16_MAX;
	int32_t t99 = 3;

	t99 = ((x7829<<x7830)*(x7831|x7832));

	if (t99 != -56) { NG(); } else { ; }
	
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

