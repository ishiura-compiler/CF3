#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 29285706U;
int32_t x81 = INT32_MIN;
int16_t x119 = -1;
static int64_t x172 = INT64_MIN;
int16_t x451 = -1;
int64_t x521 = INT64_MAX;
int64_t x524 = -1LL;
uint32_t x591 = UINT32_MAX;
int32_t x826 = -246;
int64_t x827 = -1LL;
static int16_t x859 = -1;
int64_t t10 = -99LL;
int64_t t11 = 20654631522282LL;
int32_t x984 = -1;
volatile uint32_t t12 = 31U;
volatile int8_t x1107 = -1;
int32_t t14 = -744592;
int16_t x1765 = 2043;
int16_t x1912 = -1;
int32_t x2009 = -1;
volatile int16_t x2010 = -965;
volatile int16_t x2046 = -12823;
static uint64_t x2047 = UINT64_MAX;
static volatile int64_t x2114 = INT64_MIN;
int8_t x2115 = -1;
static int32_t x2299 = INT32_MIN;
uint32_t x2442 = 5680957U;
uint32_t t30 = 1252837U;
uint64_t x2585 = 3183LLU;
uint8_t x2588 = 0U;
static volatile int32_t x2648 = -1;
int16_t x2655 = -1;
int8_t x2656 = -1;
uint16_t x2893 = UINT16_MAX;
int16_t x2972 = -1;
volatile uint64_t t35 = 2194556680LLU;
volatile uint8_t x3169 = UINT8_MAX;
uint64_t x3172 = UINT64_MAX;
int8_t x3376 = -1;
int16_t x3478 = INT16_MIN;
uint16_t x3529 = 650U;
int64_t x3586 = INT64_MIN;
int16_t x3587 = -1;
static volatile uint64_t t42 = 345936223LLU;
uint32_t x3622 = 9570889U;
volatile int64_t x3624 = INT64_MIN;
int64_t x3637 = INT64_MIN;
uint64_t x3638 = UINT64_MAX;
int64_t x3783 = -1LL;
int32_t t46 = -19677;
int16_t x3888 = -1;
volatile uint64_t x4041 = UINT64_MAX;
static uint32_t x4134 = 14U;
volatile uint32_t t52 = 60493864U;
int8_t x4234 = -1;
int16_t x4235 = -1;
int8_t x4405 = INT8_MIN;
int8_t x4406 = -1;
int16_t x4493 = 5;
volatile int16_t x4496 = -1;
static volatile int64_t t57 = 27710549016384LL;
int16_t x4557 = INT16_MIN;
int16_t x4676 = -1;
static volatile uint64_t t59 = 357255LLU;
int8_t x4898 = INT8_MIN;
uint16_t x4985 = 894U;
static volatile int16_t x4987 = -1;
int64_t t64 = -9474739212671LL;
uint16_t x5154 = UINT16_MAX;
static int16_t x5155 = -1;
volatile uint16_t x5157 = 13U;
int8_t x5159 = -1;
int16_t x5161 = INT16_MIN;
static int8_t x5179 = -1;
static int64_t t69 = -42465623614644233LL;
volatile int16_t x5323 = -1;
static volatile uint32_t x5324 = UINT32_MAX;
uint64_t x5374 = UINT64_MAX;
int16_t x5376 = -1;
static uint64_t t71 = 479224755LLU;
int8_t x5442 = INT8_MAX;
uint8_t x5515 = UINT8_MAX;
volatile uint8_t x5669 = UINT8_MAX;
int64_t x5671 = INT64_MIN;
volatile int32_t t74 = 12470586;
volatile int32_t t75 = 81649846;
volatile int64_t t76 = 99529840189LL;
int8_t x5935 = -1;
int64_t x5936 = -1LL;
volatile uint64_t t77 = 631LLU;
int8_t x6035 = INT8_MIN;
static int8_t x6036 = INT8_MIN;
volatile int64_t t78 = -29907LL;
static uint64_t x6183 = UINT64_MAX;
uint64_t x6396 = UINT64_MAX;
int8_t x6422 = INT8_MAX;
uint64_t x6454 = 379LLU;
int8_t x6456 = -1;
volatile uint64_t x6517 = 13308573655039074LLU;
volatile uint32_t t86 = 3U;
static uint16_t x6666 = 457U;
static volatile int32_t t87 = 1;
int32_t x6739 = -1;
int32_t x6848 = -1;
volatile uint64_t x6908 = UINT64_MAX;
int16_t x7054 = INT16_MAX;
volatile int16_t x7056 = -1;
int64_t t96 = 64818405368LL;
uint8_t x7415 = UINT8_MAX;
uint8_t x7416 = UINT8_MAX;
volatile uint64_t t99 = 2245713279LLU;


void f0(void) {
	static uint32_t x41 = 1U;
	uint16_t x42 = UINT16_MAX;
	int32_t x43 = -1;
	int16_t x44 = -1;

	t0 = ((x41/x42)/(x43==x44));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x82 = -12064;
	static int64_t x83 = -1LL;
	volatile uint64_t x84 = UINT64_MAX;
	int32_t t1 = -12603;

	t1 = ((x81/x82)/(x83==x84));

	if (t1 != 178007) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x117 = INT32_MAX;
	int64_t x118 = -104710851368354LL;
	uint32_t x120 = UINT32_MAX;
	static volatile int64_t t2 = 3654LL;

	t2 = ((x117/x118)/(x119==x120));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x133 = -10;
	static int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	volatile uint16_t x136 = UINT16_MAX;
	static int32_t t3 = 101855;

	t3 = ((x133/x134)/(x135==x136));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = 1;
	int64_t x171 = INT64_MIN;
	int32_t t4 = 1241;

	t4 = ((x169/x170)/(x171==x172));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x449 = 21LLU;
	volatile int16_t x450 = -1;
	int16_t x452 = -1;
	static uint64_t t5 = 756497256150LLU;

	t5 = ((x449/x450)/(x451==x452));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x522 = INT8_MAX;
	int32_t x523 = -1;
	static volatile int64_t t6 = 113119960LL;

	t6 = ((x521/x522)/(x523==x524));

	if (t6 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x589 = INT8_MAX;
	uint64_t x590 = 2552969722110760LLU;
	int16_t x592 = -1;
	uint64_t t7 = 164867297250862821LLU;

	t7 = ((x589/x590)/(x591==x592));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x825 = 123U;
	volatile int8_t x828 = -1;
	int32_t t8 = 455368;

	t8 = ((x825/x826)/(x827==x828));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x841 = INT32_MAX;
	int8_t x842 = INT8_MAX;
	static uint64_t x843 = UINT64_MAX;
	static volatile int16_t x844 = -1;
	volatile int32_t t9 = 108244347;

	t9 = ((x841/x842)/(x843==x844));

	if (t9 != 16909320) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x857 = INT64_MIN;
	uint16_t x858 = UINT16_MAX;
	static int8_t x860 = -1;

	t10 = ((x857/x858)/(x859==x860));

	if (t10 != -140739635871744LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x885 = INT8_MIN;
	int64_t x886 = INT64_MIN;
	static uint16_t x887 = UINT16_MAX;
	static uint16_t x888 = UINT16_MAX;

	t11 = ((x885/x886)/(x887==x888));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x981 = UINT8_MAX;
	volatile uint32_t x982 = UINT32_MAX;
	static uint32_t x983 = UINT32_MAX;

	t12 = ((x981/x982)/(x983==x984));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x1105 = INT16_MAX;
	static int16_t x1106 = -4;
	int64_t x1108 = -1LL;
	static int32_t t13 = 97815754;

	t13 = ((x1105/x1106)/(x1107==x1108));

	if (t13 != -8191) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1169 = INT16_MAX;
	int32_t x1170 = INT32_MIN;
	uint16_t x1171 = UINT16_MAX;
	uint16_t x1172 = UINT16_MAX;

	t14 = ((x1169/x1170)/(x1171==x1172));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1241 = UINT16_MAX;
	static int64_t x1242 = -1LL;
	volatile int8_t x1243 = -1;
	int8_t x1244 = -1;
	static volatile int64_t t15 = 5605177131885244LL;

	t15 = ((x1241/x1242)/(x1243==x1244));

	if (t15 != -65535LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1541 = -1;
	uint64_t x1542 = 4268299LLU;
	uint64_t x1543 = UINT64_MAX;
	static uint64_t x1544 = UINT64_MAX;
	static volatile uint64_t t16 = 146146391LLU;

	t16 = ((x1541/x1542)/(x1543==x1544));

	if (t16 != 4321802215287LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1649 = 3318;
	volatile int8_t x1650 = INT8_MIN;
	static int8_t x1651 = -1;
	int64_t x1652 = -1LL;
	int32_t t17 = 139391708;

	t17 = ((x1649/x1650)/(x1651==x1652));

	if (t17 != -25) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1713 = -320037569LL;
	uint64_t x1714 = 254LLU;
	int16_t x1715 = -1;
	int32_t x1716 = -1;
	uint64_t t18 = 369LLU;

	t18 = ((x1713/x1714)/(x1715==x1716));

	if (t18 != 72624976666887850LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1766 = INT8_MIN;
	int16_t x1767 = -1;
	int16_t x1768 = -1;
	volatile int32_t t19 = 946458;

	t19 = ((x1765/x1766)/(x1767==x1768));

	if (t19 != -15) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1909 = 980;
	uint8_t x1910 = UINT8_MAX;
	int16_t x1911 = -1;
	int32_t t20 = -69;

	t20 = ((x1909/x1910)/(x1911==x1912));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x2011 = INT32_MAX;
	volatile int32_t x2012 = INT32_MAX;
	int32_t t21 = 14603264;

	t21 = ((x2009/x2010)/(x2011==x2012));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x2025 = -10516;
	volatile int32_t x2026 = INT32_MIN;
	int64_t x2027 = -1LL;
	int8_t x2028 = -1;
	volatile int32_t t22 = -823;

	t22 = ((x2025/x2026)/(x2027==x2028));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x2045 = UINT32_MAX;
	uint64_t x2048 = UINT64_MAX;
	volatile uint32_t t23 = 26U;

	t23 = ((x2045/x2046)/(x2047==x2048));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x2109 = 65481741U;
	static int32_t x2110 = -18230;
	uint8_t x2111 = UINT8_MAX;
	uint8_t x2112 = UINT8_MAX;
	volatile uint32_t t24 = 7795U;

	t24 = ((x2109/x2110)/(x2111==x2112));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x2113 = INT16_MIN;
	uint32_t x2116 = UINT32_MAX;
	static int64_t t25 = -512701008973LL;

	t25 = ((x2113/x2114)/(x2115==x2116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2133 = -6072693;
	int32_t x2134 = INT32_MAX;
	int8_t x2135 = INT8_MIN;
	int8_t x2136 = INT8_MIN;
	int32_t t26 = 11;

	t26 = ((x2133/x2134)/(x2135==x2136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x2145 = INT32_MIN;
	volatile int16_t x2146 = INT16_MIN;
	int64_t x2147 = -1LL;
	uint64_t x2148 = UINT64_MAX;
	volatile int32_t t27 = 1;

	t27 = ((x2145/x2146)/(x2147==x2148));

	if (t27 != 65536) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2297 = -166128266LL;
	static uint8_t x2298 = 86U;
	int32_t x2300 = INT32_MIN;
	int64_t t28 = -3LL;

	t28 = ((x2297/x2298)/(x2299==x2300));

	if (t28 != -1931724LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2341 = INT16_MIN;
	int32_t x2342 = INT32_MIN;
	static volatile uint32_t x2343 = UINT32_MAX;
	volatile int32_t x2344 = -1;
	int32_t t29 = -713;

	t29 = ((x2341/x2342)/(x2343==x2344));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2441 = -1;
	static int16_t x2443 = INT16_MIN;
	int16_t x2444 = INT16_MIN;

	t30 = ((x2441/x2442)/(x2443==x2444));

	if (t30 != 756U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2586 = -3;
	int16_t x2587 = 0;
	volatile uint64_t t31 = 13371LLU;

	t31 = ((x2585/x2586)/(x2587==x2588));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x2645 = UINT16_MAX;
	uint64_t x2646 = 737381364034668LLU;
	int64_t x2647 = -1LL;
	uint64_t t32 = 0LLU;

	t32 = ((x2645/x2646)/(x2647==x2648));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2653 = INT64_MAX;
	static int16_t x2654 = 1;
	volatile int64_t t33 = INT64_MAX;

	t33 = ((x2653/x2654)/(x2655==x2656));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2894 = -1645111LL;
	volatile uint16_t x2895 = UINT16_MAX;
	uint16_t x2896 = UINT16_MAX;
	int64_t t34 = 1490LL;

	t34 = ((x2893/x2894)/(x2895==x2896));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2969 = 10231LLU;
	uint32_t x2970 = 18718809U;
	uint32_t x2971 = UINT32_MAX;

	t35 = ((x2969/x2970)/(x2971==x2972));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x3165 = 25U;
	int32_t x3166 = -1;
	int64_t x3167 = INT64_MIN;
	volatile int64_t x3168 = INT64_MIN;
	volatile uint32_t t36 = 616U;

	t36 = ((x3165/x3166)/(x3167==x3168));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x3170 = 294945864LLU;
	int16_t x3171 = -1;
	uint64_t t37 = 71839411184112LLU;

	t37 = ((x3169/x3170)/(x3171==x3172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x3373 = INT32_MIN;
	int64_t x3374 = 15427992LL;
	int8_t x3375 = -1;
	volatile int64_t t38 = -310272332LL;

	t38 = ((x3373/x3374)/(x3375==x3376));

	if (t38 != -139LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x3477 = 18U;
	int32_t x3479 = INT32_MIN;
	static int32_t x3480 = INT32_MIN;
	volatile int32_t t39 = -3;

	t39 = ((x3477/x3478)/(x3479==x3480));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x3485 = 108LLU;
	volatile int8_t x3486 = 6;
	int16_t x3487 = -1;
	int8_t x3488 = -1;
	volatile uint64_t t40 = 3902215025900079LLU;

	t40 = ((x3485/x3486)/(x3487==x3488));

	if (t40 != 18LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x3530 = 12U;
	int8_t x3531 = -1;
	int64_t x3532 = -1LL;
	int32_t t41 = 1167;

	t41 = ((x3529/x3530)/(x3531==x3532));

	if (t41 != 54) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x3585 = 3703351764534LLU;
	volatile uint32_t x3588 = UINT32_MAX;

	t42 = ((x3585/x3586)/(x3587==x3588));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x3589 = -2;
	int16_t x3590 = INT16_MIN;
	static volatile int8_t x3591 = -1;
	volatile uint32_t x3592 = UINT32_MAX;
	volatile int32_t t43 = -1257;

	t43 = ((x3589/x3590)/(x3591==x3592));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3621 = -314;
	int64_t x3623 = INT64_MIN;
	uint32_t t44 = 22164227U;

	t44 = ((x3621/x3622)/(x3623==x3624));

	if (t44 != 448U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3639 = -1;
	static uint32_t x3640 = UINT32_MAX;
	volatile uint64_t t45 = 49064458886368834LLU;

	t45 = ((x3637/x3638)/(x3639==x3640));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3781 = INT8_MIN;
	int16_t x3782 = 229;
	int16_t x3784 = -1;

	t46 = ((x3781/x3782)/(x3783==x3784));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3885 = UINT32_MAX;
	int32_t x3886 = -1;
	static int32_t x3887 = -1;
	uint32_t t47 = 303122U;

	t47 = ((x3885/x3886)/(x3887==x3888));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3889 = -1;
	static int16_t x3890 = -105;
	volatile int16_t x3891 = INT16_MIN;
	volatile int16_t x3892 = INT16_MIN;
	static int32_t t48 = -146904549;

	t48 = ((x3889/x3890)/(x3891==x3892));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3917 = -1;
	static uint16_t x3918 = UINT16_MAX;
	uint16_t x3919 = UINT16_MAX;
	static uint16_t x3920 = UINT16_MAX;
	volatile int32_t t49 = 1;

	t49 = ((x3917/x3918)/(x3919==x3920));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x4042 = -1;
	static volatile int16_t x4043 = INT16_MIN;
	static int16_t x4044 = INT16_MIN;
	volatile uint64_t t50 = 61098229119480790LLU;

	t50 = ((x4041/x4042)/(x4043==x4044));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x4109 = 0U;
	int32_t x4110 = INT32_MAX;
	uint32_t x4111 = UINT32_MAX;
	volatile int8_t x4112 = -1;
	uint32_t t51 = 1259U;

	t51 = ((x4109/x4110)/(x4111==x4112));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x4133 = -1;
	int64_t x4135 = -1LL;
	int32_t x4136 = -1;

	t52 = ((x4133/x4134)/(x4135==x4136));

	if (t52 != 306783378U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x4233 = 1024234;
	volatile int32_t x4236 = -1;
	int32_t t53 = 11004151;

	t53 = ((x4233/x4234)/(x4235==x4236));

	if (t53 != -1024234) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4353 = UINT64_MAX;
	int16_t x4354 = INT16_MIN;
	int8_t x4355 = INT8_MIN;
	int8_t x4356 = INT8_MIN;
	uint64_t t54 = 14315060294978977LLU;

	t54 = ((x4353/x4354)/(x4355==x4356));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x4407 = 1U;
	uint16_t x4408 = 1U;
	static volatile int32_t t55 = -1717;

	t55 = ((x4405/x4406)/(x4407==x4408));

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4494 = 14;
	uint32_t x4495 = UINT32_MAX;
	volatile int32_t t56 = -556108510;

	t56 = ((x4493/x4494)/(x4495==x4496));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x4513 = 35124LL;
	uint8_t x4514 = UINT8_MAX;
	uint32_t x4515 = UINT32_MAX;
	uint32_t x4516 = UINT32_MAX;

	t57 = ((x4513/x4514)/(x4515==x4516));

	if (t57 != 137LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x4558 = 3;
	int16_t x4559 = -1;
	int16_t x4560 = -1;
	int32_t t58 = 369622;

	t58 = ((x4557/x4558)/(x4559==x4560));

	if (t58 != -10922) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4673 = 2LLU;
	uint8_t x4674 = 60U;
	int32_t x4675 = -1;

	t59 = ((x4673/x4674)/(x4675==x4676));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4705 = UINT32_MAX;
	int16_t x4706 = 1;
	int8_t x4707 = INT8_MAX;
	volatile int8_t x4708 = INT8_MAX;
	static volatile uint32_t t60 = UINT32_MAX;

	t60 = ((x4705/x4706)/(x4707==x4708));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4897 = 833;
	static volatile int64_t x4899 = -1LL;
	uint64_t x4900 = UINT64_MAX;
	volatile int32_t t61 = -3190595;

	t61 = ((x4897/x4898)/(x4899==x4900));

	if (t61 != -6) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4901 = INT16_MIN;
	int16_t x4902 = INT16_MAX;
	volatile uint16_t x4903 = UINT16_MAX;
	uint16_t x4904 = UINT16_MAX;
	volatile int32_t t62 = 199;

	t62 = ((x4901/x4902)/(x4903==x4904));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4986 = INT32_MIN;
	int64_t x4988 = -1LL;
	int32_t t63 = -107026461;

	t63 = ((x4985/x4986)/(x4987==x4988));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x5065 = INT64_MIN;
	volatile int64_t x5066 = -1325LL;
	static int64_t x5067 = -1LL;
	static int16_t x5068 = -1;

	t64 = ((x5065/x5066)/(x5067==x5068));

	if (t64 != 6961035499513038LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x5153 = 43073281907708584LLU;
	int64_t x5156 = -1LL;
	uint64_t t65 = 11095LLU;

	t65 = ((x5153/x5154)/(x5155==x5156));

	if (t65 != 657256151792LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x5158 = INT32_MAX;
	int64_t x5160 = -1LL;
	int32_t t66 = -7;

	t66 = ((x5157/x5158)/(x5159==x5160));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x5162 = -16924026764148LL;
	static uint16_t x5163 = UINT16_MAX;
	static volatile uint16_t x5164 = UINT16_MAX;
	volatile int64_t t67 = -8484204681LL;

	t67 = ((x5161/x5162)/(x5163==x5164));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x5165 = 12LL;
	int8_t x5166 = INT8_MIN;
	int32_t x5167 = INT32_MAX;
	int32_t x5168 = INT32_MAX;
	volatile int64_t t68 = -12852639LL;

	t68 = ((x5165/x5166)/(x5167==x5168));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x5177 = -28333;
	int64_t x5178 = -7LL;
	volatile int32_t x5180 = -1;

	t69 = ((x5177/x5178)/(x5179==x5180));

	if (t69 != 4047LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5321 = 123U;
	int64_t x5322 = INT64_MIN;
	int64_t t70 = 34403627271LL;

	t70 = ((x5321/x5322)/(x5323==x5324));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5373 = INT8_MAX;
	int64_t x5375 = -1LL;

	t71 = ((x5373/x5374)/(x5375==x5376));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x5441 = -1;
	static volatile int64_t x5443 = -1LL;
	static int64_t x5444 = -1LL;
	int32_t t72 = -169935728;

	t72 = ((x5441/x5442)/(x5443==x5444));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5513 = INT8_MIN;
	int32_t x5514 = INT32_MIN;
	volatile uint8_t x5516 = UINT8_MAX;
	static int32_t t73 = 2;

	t73 = ((x5513/x5514)/(x5515==x5516));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x5670 = 13U;
	int64_t x5672 = INT64_MIN;

	t74 = ((x5669/x5670)/(x5671==x5672));

	if (t74 != 19) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5689 = 3;
	static uint8_t x5690 = 11U;
	uint32_t x5691 = 1U;
	volatile int16_t x5692 = 1;

	t75 = ((x5689/x5690)/(x5691==x5692));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x5745 = 635661933452968426LL;
	uint8_t x5746 = 2U;
	int8_t x5747 = -1;
	volatile uint64_t x5748 = UINT64_MAX;

	t76 = ((x5745/x5746)/(x5747==x5748));

	if (t76 != 317830966726484213LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5933 = -1;
	uint64_t x5934 = 588588733284162249LLU;

	t77 = ((x5933/x5934)/(x5935==x5936));

	if (t77 != 31LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x6033 = 286U;
	int64_t x6034 = INT64_MIN;

	t78 = ((x6033/x6034)/(x6035==x6036));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x6041 = -23;
	uint8_t x6042 = UINT8_MAX;
	volatile int32_t x6043 = INT32_MIN;
	static int32_t x6044 = INT32_MIN;
	static volatile int32_t t79 = 219;

	t79 = ((x6041/x6042)/(x6043==x6044));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x6181 = 3U;
	int16_t x6182 = 4094;
	int8_t x6184 = -1;
	volatile int32_t t80 = -114557;

	t80 = ((x6181/x6182)/(x6183==x6184));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x6393 = INT8_MAX;
	int8_t x6394 = INT8_MAX;
	static int16_t x6395 = -1;
	int32_t t81 = 1;

	t81 = ((x6393/x6394)/(x6395==x6396));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x6421 = INT64_MAX;
	static int32_t x6423 = -1;
	int8_t x6424 = -1;
	volatile int64_t t82 = -206LL;

	t82 = ((x6421/x6422)/(x6423==x6424));

	if (t82 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x6453 = 952U;
	static uint64_t x6455 = UINT64_MAX;
	static volatile uint64_t t83 = 9437244785238LLU;

	t83 = ((x6453/x6454)/(x6455==x6456));

	if (t83 != 2LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x6518 = INT32_MIN;
	int8_t x6519 = -1;
	int64_t x6520 = -1LL;
	uint64_t t84 = 1177066LLU;

	t84 = ((x6517/x6518)/(x6519==x6520));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x6637 = INT32_MAX;
	volatile uint16_t x6638 = UINT16_MAX;
	int32_t x6639 = INT32_MIN;
	int32_t x6640 = INT32_MIN;
	int32_t t85 = 127;

	t85 = ((x6637/x6638)/(x6639==x6640));

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x6657 = 6U;
	static int16_t x6658 = -1;
	int16_t x6659 = -1;
	int16_t x6660 = -1;

	t86 = ((x6657/x6658)/(x6659==x6660));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x6665 = 1783;
	int16_t x6667 = -1;
	int8_t x6668 = -1;

	t87 = ((x6665/x6666)/(x6667==x6668));

	if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6693 = UINT16_MAX;
	int16_t x6694 = 8;
	static int8_t x6695 = INT8_MIN;
	int8_t x6696 = INT8_MIN;
	int32_t t88 = -2928240;

	t88 = ((x6693/x6694)/(x6695==x6696));

	if (t88 != 8191) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x6737 = UINT16_MAX;
	volatile int64_t x6738 = INT64_MIN;
	static volatile int8_t x6740 = -1;
	static int64_t t89 = 30384436777LL;

	t89 = ((x6737/x6738)/(x6739==x6740));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x6773 = -1016548555;
	static volatile int8_t x6774 = INT8_MIN;
	int8_t x6775 = -1;
	int8_t x6776 = -1;
	volatile int32_t t90 = -4967766;

	t90 = ((x6773/x6774)/(x6775==x6776));

	if (t90 != 7941785) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x6809 = -1LL;
	uint16_t x6810 = UINT16_MAX;
	volatile int16_t x6811 = -1;
	static uint32_t x6812 = UINT32_MAX;
	volatile int64_t t91 = -64207LL;

	t91 = ((x6809/x6810)/(x6811==x6812));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x6845 = 65U;
	int16_t x6846 = -1;
	int16_t x6847 = -1;
	static int32_t t92 = 16;

	t92 = ((x6845/x6846)/(x6847==x6848));

	if (t92 != -65) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6873 = UINT16_MAX;
	int64_t x6874 = 1LL;
	volatile uint16_t x6875 = UINT16_MAX;
	uint16_t x6876 = UINT16_MAX;
	int64_t t93 = 1095629318797057LL;

	t93 = ((x6873/x6874)/(x6875==x6876));

	if (t93 != 65535LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6905 = 0;
	static uint32_t x6906 = 912U;
	int64_t x6907 = -1LL;
	uint32_t t94 = 354U;

	t94 = ((x6905/x6906)/(x6907==x6908));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x7053 = INT8_MIN;
	int64_t x7055 = -1LL;
	static int32_t t95 = -77;

	t95 = ((x7053/x7054)/(x7055==x7056));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x7301 = INT32_MAX;
	int64_t x7302 = INT64_MAX;
	int32_t x7303 = -1;
	int16_t x7304 = -1;

	t96 = ((x7301/x7302)/(x7303==x7304));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x7305 = INT8_MIN;
	int32_t x7306 = INT32_MIN;
	uint32_t x7307 = UINT32_MAX;
	int8_t x7308 = -1;
	int32_t t97 = -2765619;

	t97 = ((x7305/x7306)/(x7307==x7308));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x7317 = INT64_MAX;
	uint32_t x7318 = 88732513U;
	volatile int32_t x7319 = INT32_MIN;
	int32_t x7320 = INT32_MIN;
	static volatile int64_t t98 = -116903927121976288LL;

	t98 = ((x7317/x7318)/(x7319==x7320));

	if (t98 != 103945799854LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x7413 = 3774LL;
	uint64_t x7414 = 1244LLU;

	t99 = ((x7413/x7414)/(x7415==x7416));

	if (t99 != 3LLU) { NG(); } else { ; }
	
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

