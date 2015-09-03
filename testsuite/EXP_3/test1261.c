#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x42 = 0U;
static int32_t x43 = 13;
volatile int8_t x230 = 15;
volatile int32_t x231 = INT32_MIN;
volatile int64_t t2 = -5308LL;
volatile int32_t x352 = -1;
static uint16_t x381 = 63U;
volatile int32_t t5 = 849631;
int64_t x459 = -1LL;
volatile int32_t t6 = -4714;
int32_t x472 = INT32_MIN;
uint64_t t8 = 115454632944LLU;
uint8_t x693 = UINT8_MAX;
int64_t x856 = 22LL;
uint8_t x910 = 3U;
volatile uint16_t x1086 = 4U;
static volatile uint16_t x1087 = 6U;
uint16_t x1154 = 8U;
volatile int32_t t16 = 184251018;
uint8_t x1166 = 10U;
volatile int32_t t20 = -1300608;
int64_t x1380 = -1LL;
uint16_t x1450 = 14U;
int8_t x1687 = -1;
int8_t x1763 = 1;
uint8_t x1985 = 18U;
static uint16_t x2050 = 0U;
volatile int64_t x2051 = -1LL;
static int32_t x2052 = 18;
static int16_t x2055 = INT16_MIN;
uint64_t t29 = 472139876924481586LLU;
int64_t x2228 = -53566985199LL;
static volatile int32_t t30 = 31410389;
uint8_t x2238 = 4U;
static uint32_t x2240 = 1U;
uint32_t t31 = 61U;
static volatile uint64_t x2276 = UINT64_MAX;
int16_t x2309 = INT16_MAX;
static uint64_t x2311 = 186843075847634052LLU;
static volatile int32_t t34 = -50;
int16_t x2409 = INT16_MAX;
int64_t x2412 = 995340250832449029LL;
volatile uint16_t x2487 = 30909U;
static volatile int32_t t36 = 379737440;
volatile int32_t x2599 = -1;
int64_t x2600 = 909653191419LL;
volatile int32_t t38 = -1;
uint8_t x2897 = 28U;
static uint32_t x3050 = 1U;
uint16_t x3054 = 1U;
uint16_t x3055 = UINT16_MAX;
volatile uint32_t t44 = 13104570U;
int32_t t45 = -19;
int16_t x3212 = INT16_MIN;
int8_t x3275 = INT8_MIN;
uint64_t x3276 = UINT64_MAX;
int64_t x3400 = -1LL;
static int16_t x3491 = -6317;
volatile int8_t x3492 = INT8_MAX;
uint64_t x3538 = 2LLU;
int16_t x3540 = -1;
int8_t x3551 = INT8_MIN;
static uint8_t x3633 = 0U;
int32_t t54 = -1924234;
volatile int8_t x3642 = 27;
int16_t x3673 = INT16_MAX;
int64_t x3675 = INT64_MIN;
volatile int8_t x3676 = INT8_MIN;
uint32_t x3709 = 158322748U;
uint32_t t57 = 5664U;
int16_t x3741 = 13;
int8_t x3742 = 17;
int32_t x3744 = INT32_MAX;
int16_t x3818 = 1;
static volatile int64_t x3820 = INT64_MAX;
uint32_t x3869 = 114486568U;
volatile uint32_t t61 = 0U;
volatile int8_t x3882 = 1;
int64_t x3883 = INT64_MAX;
static volatile int16_t x3884 = 2;
int8_t x3910 = 0;
int32_t x3911 = -14;
uint16_t x3912 = 12805U;
int32_t t63 = 2;
int32_t x3923 = INT32_MIN;
int16_t x3932 = -8016;
uint16_t x3962 = 0U;
volatile int16_t x3963 = 0;
uint64_t t67 = 470009962640169LLU;
uint8_t x4113 = 0U;
uint64_t x4114 = 18LLU;
uint8_t x4115 = 100U;
int16_t x4160 = INT16_MIN;
volatile uint64_t x4205 = UINT64_MAX;
uint64_t x4216 = UINT64_MAX;
volatile int32_t t73 = -15448;
uint16_t x4426 = 0U;
int16_t x4427 = -1;
volatile int32_t t77 = 104724220;
int8_t x4586 = 2;
int16_t x4600 = -1;
int32_t t79 = -30066463;
int8_t x4676 = INT8_MAX;
uint32_t x4694 = 0U;
int8_t x4695 = -3;
uint32_t t84 = 6562528U;
static uint8_t x4861 = 13U;
uint32_t x4949 = 479085U;
uint16_t x5196 = 3540U;
static int32_t x5276 = INT32_MAX;
int8_t x5484 = 31;
static volatile int64_t t94 = 32870488703339LL;
int8_t x5643 = -5;
uint64_t x5656 = 4184632LLU;
static int8_t x5678 = 1;
static int64_t x5679 = INT64_MIN;
int8_t x5704 = -43;
volatile int32_t t99 = 0;


void f0(void) {
	uint16_t x41 = 21U;
	uint32_t x44 = 0U;
	int32_t t0 = -238502756;

	t0 = ((x41<<x42)^(x43==x44));

	if (t0 != 21) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x229 = 5363;
	int64_t x232 = -1LL;
	volatile int32_t t1 = 15807;

	t1 = ((x229<<x230)^(x231==x232));

	if (t1 != 175734784) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x237 = 0LL;
	static uint8_t x238 = 12U;
	int16_t x239 = -126;
	static uint64_t x240 = 103LLU;

	t2 = ((x237<<x238)^(x239==x240));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x321 = INT16_MAX;
	static uint8_t x322 = 1U;
	uint64_t x323 = 413043924077638448LLU;
	int16_t x324 = -4007;
	volatile int32_t t3 = 18253823;

	t3 = ((x321<<x322)^(x323==x324));

	if (t3 != 65534) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x349 = INT16_MAX;
	static uint32_t x350 = 1U;
	uint16_t x351 = 7U;
	volatile int32_t t4 = 21123;

	t4 = ((x349<<x350)^(x351==x352));

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x382 = 1U;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = -14;

	t5 = ((x381<<x382)^(x383==x384));

	if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x457 = UINT16_MAX;
	uint8_t x458 = 5U;
	volatile uint16_t x460 = UINT16_MAX;

	t6 = ((x457<<x458)^(x459==x460));

	if (t6 != 2097120) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x469 = UINT64_MAX;
	int8_t x470 = 15;
	static int8_t x471 = INT8_MIN;
	static volatile uint64_t t7 = 38899655233397291LLU;

	t7 = ((x469<<x470)^(x471==x472));

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x489 = 103658036477LLU;
	uint8_t x490 = 47U;
	int8_t x491 = -4;
	int16_t x492 = -1;

	t8 = ((x489<<x490)^(x491==x492));

	if (t8 != 1044412901084889088LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x694 = 18U;
	uint16_t x695 = 910U;
	int8_t x696 = INT8_MIN;
	int32_t t9 = -32952;

	t9 = ((x693<<x694)^(x695==x696));

	if (t9 != 66846720) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x809 = 37614263166202LLU;
	uint8_t x810 = 55U;
	uint32_t x811 = UINT32_MAX;
	volatile uint8_t x812 = UINT8_MAX;
	uint64_t t10 = 68665378922758LLU;

	t10 = ((x809<<x810)^(x811==x812));

	if (t10 != 9007199254740992000LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x853 = 1140LLU;
	uint8_t x854 = 44U;
	static volatile uint32_t x855 = 0U;
	uint64_t t11 = 111172310343LLU;

	t11 = ((x853<<x854)^(x855==x856));

	if (t11 != 20055092090634240LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x909 = 4398237U;
	static uint64_t x911 = UINT64_MAX;
	int8_t x912 = 6;
	static uint32_t t12 = 13112021U;

	t12 = ((x909<<x910)^(x911==x912));

	if (t12 != 35185896U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x981 = 2955;
	int16_t x982 = 4;
	volatile int16_t x983 = -11;
	int32_t x984 = -1;
	int32_t t13 = 2975;

	t13 = ((x981<<x982)^(x983==x984));

	if (t13 != 47280) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1085 = 194475392LL;
	volatile uint8_t x1088 = 2U;
	volatile int64_t t14 = -120LL;

	t14 = ((x1085<<x1086)^(x1087==x1088));

	if (t14 != 3111606272LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x1117 = UINT8_MAX;
	uint32_t x1118 = 18U;
	volatile int8_t x1119 = INT8_MIN;
	static int8_t x1120 = INT8_MIN;
	int32_t t15 = -30;

	t15 = ((x1117<<x1118)^(x1119==x1120));

	if (t15 != 66846721) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1153 = 3U;
	uint64_t x1155 = UINT64_MAX;
	static int32_t x1156 = -1785856;

	t16 = ((x1153<<x1154)^(x1155==x1156));

	if (t16 != 768) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1165 = 11728U;
	static int8_t x1167 = -1;
	int16_t x1168 = INT16_MAX;
	volatile int32_t t17 = 18988892;

	t17 = ((x1165<<x1166)^(x1167==x1168));

	if (t17 != 12009472) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1257 = 2U;
	int8_t x1258 = 16;
	int16_t x1259 = INT16_MIN;
	volatile int8_t x1260 = 20;
	static int32_t t18 = 129;

	t18 = ((x1257<<x1258)^(x1259==x1260));

	if (t18 != 131072) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1337 = 92U;
	volatile uint32_t x1338 = 16U;
	static volatile int64_t x1339 = -141635711248LL;
	static uint32_t x1340 = 39338609U;
	static volatile int32_t t19 = -67176212;

	t19 = ((x1337<<x1338)^(x1339==x1340));

	if (t19 != 6029312) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1345 = INT8_MAX;
	int16_t x1346 = 0;
	int32_t x1347 = 608;
	int16_t x1348 = -1562;

	t20 = ((x1345<<x1346)^(x1347==x1348));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1377 = 46614084U;
	static uint16_t x1378 = 1U;
	int8_t x1379 = INT8_MIN;
	uint32_t t21 = 7151U;

	t21 = ((x1377<<x1378)^(x1379==x1380));

	if (t21 != 93228168U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1449 = UINT64_MAX;
	uint64_t x1451 = UINT64_MAX;
	static volatile int32_t x1452 = 0;
	volatile uint64_t t22 = 12137705289689506LLU;

	t22 = ((x1449<<x1450)^(x1451==x1452));

	if (t22 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1637 = 4U;
	uint8_t x1638 = 9U;
	int16_t x1639 = -20;
	volatile int16_t x1640 = INT16_MIN;
	static int32_t t23 = 1114;

	t23 = ((x1637<<x1638)^(x1639==x1640));

	if (t23 != 2048) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1685 = 1984U;
	uint8_t x1686 = 1U;
	static uint8_t x1688 = UINT8_MAX;
	volatile int32_t t24 = 952664337;

	t24 = ((x1685<<x1686)^(x1687==x1688));

	if (t24 != 3968) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x1733 = 0U;
	uint8_t x1734 = 2U;
	static volatile int16_t x1735 = INT16_MAX;
	int32_t x1736 = -62785237;
	int32_t t25 = 320;

	t25 = ((x1733<<x1734)^(x1735==x1736));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1761 = UINT32_MAX;
	uint8_t x1762 = 26U;
	int32_t x1764 = INT32_MAX;
	volatile uint32_t t26 = 178U;

	t26 = ((x1761<<x1762)^(x1763==x1764));

	if (t26 != 4227858432U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1986 = 20U;
	volatile int64_t x1987 = -10722750600LL;
	volatile int64_t x1988 = INT64_MIN;
	static int32_t t27 = 168;

	t27 = ((x1985<<x1986)^(x1987==x1988));

	if (t27 != 18874368) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x2049 = 1194404921609629272LLU;
	volatile uint64_t t28 = 1640921979945118739LLU;

	t28 = ((x2049<<x2050)^(x2051==x2052));

	if (t28 != 1194404921609629272LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2053 = 3269855461551252LLU;
	int16_t x2054 = 36;
	static uint32_t x2056 = UINT32_MAX;

	t29 = ((x2053<<x2054)^(x2055==x2056));

	if (t29 != 15279245962522918912LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x2225 = 580;
	volatile uint8_t x2226 = 0U;
	int8_t x2227 = -1;

	t30 = ((x2225<<x2226)^(x2227==x2228));

	if (t30 != 580) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2237 = 59U;
	uint32_t x2239 = 790U;

	t31 = ((x2237<<x2238)^(x2239==x2240));

	if (t31 != 944U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x2273 = 0;
	static volatile int8_t x2274 = 17;
	int64_t x2275 = -27744330643800299LL;
	volatile int32_t t32 = -32719;

	t32 = ((x2273<<x2274)^(x2275==x2276));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2310 = 1;
	static volatile int8_t x2312 = -1;
	volatile int32_t t33 = 1;

	t33 = ((x2309<<x2310)^(x2311==x2312));

	if (t33 != 65534) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2397 = UINT8_MAX;
	int64_t x2398 = 0LL;
	int16_t x2399 = -1;
	int8_t x2400 = INT8_MIN;

	t34 = ((x2397<<x2398)^(x2399==x2400));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2410 = 4LL;
	int32_t x2411 = INT32_MIN;
	volatile int32_t t35 = -941;

	t35 = ((x2409<<x2410)^(x2411==x2412));

	if (t35 != 524272) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2485 = 98U;
	uint8_t x2486 = 3U;
	int8_t x2488 = INT8_MIN;

	t36 = ((x2485<<x2486)^(x2487==x2488));

	if (t36 != 784) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2557 = UINT32_MAX;
	static uint8_t x2558 = 1U;
	int32_t x2559 = INT32_MIN;
	static uint32_t x2560 = 230U;
	uint32_t t37 = 95631U;

	t37 = ((x2557<<x2558)^(x2559==x2560));

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2597 = INT16_MAX;
	volatile uint8_t x2598 = 7U;

	t38 = ((x2597<<x2598)^(x2599==x2600));

	if (t38 != 4194176) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2898 = 5U;
	static uint64_t x2899 = 40438LLU;
	static volatile uint16_t x2900 = 1744U;
	volatile int32_t t39 = -1;

	t39 = ((x2897<<x2898)^(x2899==x2900));

	if (t39 != 896) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2925 = UINT64_MAX;
	volatile int16_t x2926 = 1;
	static int16_t x2927 = -1;
	int8_t x2928 = -1;
	static volatile uint64_t t40 = UINT64_MAX;

	t40 = ((x2925<<x2926)^(x2927==x2928));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2973 = 9656U;
	int16_t x2974 = 4;
	uint16_t x2975 = 4U;
	int16_t x2976 = -1;
	volatile int32_t t41 = 32;

	t41 = ((x2973<<x2974)^(x2975==x2976));

	if (t41 != 154496) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x3049 = UINT8_MAX;
	volatile uint32_t x3051 = 40U;
	int16_t x3052 = INT16_MIN;
	int32_t t42 = 213;

	t42 = ((x3049<<x3050)^(x3051==x3052));

	if (t42 != 510) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3053 = UINT32_MAX;
	int32_t x3056 = 4832;
	uint32_t t43 = 7568936U;

	t43 = ((x3053<<x3054)^(x3055==x3056));

	if (t43 != 4294967294U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3137 = 8972665U;
	uint8_t x3138 = 0U;
	int8_t x3139 = INT8_MAX;
	uint32_t x3140 = 447186224U;

	t44 = ((x3137<<x3138)^(x3139==x3140));

	if (t44 != 8972665U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3145 = 54U;
	int16_t x3146 = 2;
	uint64_t x3147 = 8893LLU;
	volatile int16_t x3148 = -10718;

	t45 = ((x3145<<x3146)^(x3147==x3148));

	if (t45 != 216) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3157 = 506U;
	int8_t x3158 = 0;
	int64_t x3159 = -1LL;
	int16_t x3160 = INT16_MIN;
	volatile int32_t t46 = 41;

	t46 = ((x3157<<x3158)^(x3159==x3160));

	if (t46 != 506) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3169 = 7462843090566207LLU;
	int16_t x3170 = 1;
	uint8_t x3171 = 9U;
	static int32_t x3172 = INT32_MAX;
	volatile uint64_t t47 = 33624295190196486LLU;

	t47 = ((x3169<<x3170)^(x3171==x3172));

	if (t47 != 14925686181132414LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3209 = 485730576LLU;
	static uint8_t x3210 = 7U;
	int16_t x3211 = -1;
	uint64_t t48 = 295252407476225745LLU;

	t48 = ((x3209<<x3210)^(x3211==x3212));

	if (t48 != 62173513728LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3273 = INT8_MAX;
	uint32_t x3274 = 7U;
	volatile int32_t t49 = 239;

	t49 = ((x3273<<x3274)^(x3275==x3276));

	if (t49 != 16256) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3397 = 15U;
	uint16_t x3398 = 1U;
	static int8_t x3399 = 32;
	int32_t t50 = -24678106;

	t50 = ((x3397<<x3398)^(x3399==x3400));

	if (t50 != 30) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3489 = UINT16_MAX;
	uint16_t x3490 = 0U;
	volatile int32_t t51 = -26;

	t51 = ((x3489<<x3490)^(x3491==x3492));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3537 = UINT8_MAX;
	static uint16_t x3539 = UINT16_MAX;
	static volatile int32_t t52 = -117952420;

	t52 = ((x3537<<x3538)^(x3539==x3540));

	if (t52 != 1020) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3549 = 1U;
	static int32_t x3550 = 0;
	uint32_t x3552 = UINT32_MAX;
	uint32_t t53 = 1U;

	t53 = ((x3549<<x3550)^(x3551==x3552));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3634 = 12U;
	static volatile int32_t x3635 = 3;
	int8_t x3636 = -18;

	t54 = ((x3633<<x3634)^(x3635==x3636));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3641 = 4350367158221437083LLU;
	int16_t x3643 = -1;
	static uint32_t x3644 = 36014522U;
	uint64_t t55 = 21564436236LLU;

	t55 = ((x3641<<x3642)^(x3643==x3644));

	if (t55 != 910434956142968832LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3674 = 1U;
	static int32_t t56 = 488343;

	t56 = ((x3673<<x3674)^(x3675==x3676));

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3710 = 21;
	volatile int32_t x3711 = -1;
	int16_t x3712 = -4789;

	t57 = ((x3709<<x3710)^(x3711==x3712));

	if (t57 != 125829120U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3743 = 7U;
	int32_t t58 = 261304105;

	t58 = ((x3741<<x3742)^(x3743==x3744));

	if (t58 != 1703936) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3801 = 79U;
	static uint8_t x3802 = 0U;
	static uint64_t x3803 = 20310628161LLU;
	int64_t x3804 = -1LL;
	int32_t t59 = -30213;

	t59 = ((x3801<<x3802)^(x3803==x3804));

	if (t59 != 79) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3817 = 17;
	uint64_t x3819 = UINT64_MAX;
	static volatile int32_t t60 = -987;

	t60 = ((x3817<<x3818)^(x3819==x3820));

	if (t60 != 34) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3870 = 2LLU;
	uint16_t x3871 = 424U;
	volatile int64_t x3872 = -146471777272LL;

	t61 = ((x3869<<x3870)^(x3871==x3872));

	if (t61 != 457946272U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3881 = 3204331871139867049LLU;
	volatile uint64_t t62 = 6994LLU;

	t62 = ((x3881<<x3882)^(x3883==x3884));

	if (t62 != 6408663742279734098LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3909 = INT16_MAX;

	t63 = ((x3909<<x3910)^(x3911==x3912));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3913 = UINT8_MAX;
	uint64_t x3914 = 1LLU;
	int8_t x3915 = INT8_MAX;
	int32_t x3916 = INT32_MAX;
	volatile int32_t t64 = -159;

	t64 = ((x3913<<x3914)^(x3915==x3916));

	if (t64 != 510) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3921 = 24976U;
	uint16_t x3922 = 1U;
	uint8_t x3924 = 97U;
	static int32_t t65 = 2;

	t65 = ((x3921<<x3922)^(x3923==x3924));

	if (t65 != 49952) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3929 = UINT64_MAX;
	volatile uint8_t x3930 = 2U;
	int32_t x3931 = 231;
	static uint64_t t66 = 637223011106500LLU;

	t66 = ((x3929<<x3930)^(x3931==x3932));

	if (t66 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x3961 = 20873996692LLU;
	int32_t x3964 = -1;

	t67 = ((x3961<<x3962)^(x3963==x3964));

	if (t67 != 20873996692LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4077 = UINT64_MAX;
	int8_t x4078 = 0;
	uint64_t x4079 = 706742143731335511LLU;
	static volatile int64_t x4080 = 76LL;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = ((x4077<<x4078)^(x4079==x4080));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4116 = 59;
	volatile int32_t t69 = 391656;

	t69 = ((x4113<<x4114)^(x4115==x4116));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4157 = 183113724U;
	int8_t x4158 = 20;
	int64_t x4159 = INT64_MIN;
	uint32_t t70 = 57U;

	t70 = ((x4157<<x4158)^(x4159==x4160));

	if (t70 != 2143289344U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4165 = 1436U;
	int32_t x4166 = 3;
	int64_t x4167 = -35839321025LL;
	int8_t x4168 = INT8_MIN;
	static volatile int32_t t71 = -2;

	t71 = ((x4165<<x4166)^(x4167==x4168));

	if (t71 != 11488) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4206 = 2U;
	uint8_t x4207 = UINT8_MAX;
	static uint32_t x4208 = 4U;
	uint64_t t72 = 1475447188LLU;

	t72 = ((x4205<<x4206)^(x4207==x4208));

	if (t72 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x4213 = 11657U;
	int8_t x4214 = 1;
	int16_t x4215 = INT16_MIN;

	t73 = ((x4213<<x4214)^(x4215==x4216));

	if (t73 != 23314) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4425 = 3U;
	int32_t x4428 = -1;
	int32_t t74 = -1262;

	t74 = ((x4425<<x4426)^(x4427==x4428));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x4497 = INT16_MAX;
	uint16_t x4498 = 11U;
	uint64_t x4499 = 245LLU;
	int64_t x4500 = INT64_MIN;
	int32_t t75 = -112;

	t75 = ((x4497<<x4498)^(x4499==x4500));

	if (t75 != 67106816) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4525 = 1U;
	int8_t x4526 = 0;
	int64_t x4527 = -1LL;
	int32_t x4528 = -9381;
	volatile int32_t t76 = -1046;

	t76 = ((x4525<<x4526)^(x4527==x4528));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4549 = INT8_MAX;
	uint8_t x4550 = 6U;
	int64_t x4551 = 180288LL;
	static int32_t x4552 = 292525;

	t77 = ((x4549<<x4550)^(x4551==x4552));

	if (t77 != 8128) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4585 = 34521445;
	uint16_t x4587 = UINT16_MAX;
	uint16_t x4588 = 54U;
	volatile int32_t t78 = -6052589;

	t78 = ((x4585<<x4586)^(x4587==x4588));

	if (t78 != 138085780) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4597 = 9U;
	int32_t x4598 = 1;
	int16_t x4599 = -1;

	t79 = ((x4597<<x4598)^(x4599==x4600));

	if (t79 != 19) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4637 = 111861980664218409LLU;
	volatile int8_t x4638 = 2;
	int64_t x4639 = INT64_MAX;
	int64_t x4640 = INT64_MIN;
	volatile uint64_t t80 = 199LLU;

	t80 = ((x4637<<x4638)^(x4639==x4640));

	if (t80 != 447447922656873636LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4673 = 6U;
	volatile uint16_t x4674 = 13U;
	int32_t x4675 = 0;
	int32_t t81 = -6292;

	t81 = ((x4673<<x4674)^(x4675==x4676));

	if (t81 != 49152) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x4693 = INT64_MAX;
	volatile int32_t x4696 = -1;
	volatile int64_t t82 = INT64_MAX;

	t82 = ((x4693<<x4694)^(x4695==x4696));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4713 = 35529586074LLU;
	int8_t x4714 = 10;
	uint8_t x4715 = 25U;
	int64_t x4716 = INT64_MIN;
	volatile uint64_t t83 = 226998674019702023LLU;

	t83 = ((x4713<<x4714)^(x4715==x4716));

	if (t83 != 36382296139776LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4785 = UINT32_MAX;
	uint8_t x4786 = 4U;
	int16_t x4787 = 0;
	int16_t x4788 = INT16_MAX;

	t84 = ((x4785<<x4786)^(x4787==x4788));

	if (t84 != 4294967280U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4862 = 9U;
	volatile int8_t x4863 = INT8_MIN;
	int32_t x4864 = 25238;
	static volatile int32_t t85 = -3;

	t85 = ((x4861<<x4862)^(x4863==x4864));

	if (t85 != 6656) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x4950 = 0U;
	int16_t x4951 = INT16_MAX;
	volatile int64_t x4952 = -7525327LL;
	volatile uint32_t t86 = 125011U;

	t86 = ((x4949<<x4950)^(x4951==x4952));

	if (t86 != 479085U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x5105 = 5U;
	uint16_t x5106 = 0U;
	int64_t x5107 = -1LL;
	volatile uint16_t x5108 = 2U;
	volatile int32_t t87 = -133;

	t87 = ((x5105<<x5106)^(x5107==x5108));

	if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x5169 = 3U;
	uint8_t x5170 = 9U;
	int16_t x5171 = 6;
	int64_t x5172 = INT64_MAX;
	int32_t t88 = -5;

	t88 = ((x5169<<x5170)^(x5171==x5172));

	if (t88 != 1536) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5193 = UINT8_MAX;
	uint8_t x5194 = 9U;
	int64_t x5195 = INT64_MAX;
	static volatile int32_t t89 = 14306027;

	t89 = ((x5193<<x5194)^(x5195==x5196));

	if (t89 != 130560) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x5229 = 5U;
	uint8_t x5230 = 14U;
	int64_t x5231 = -97077LL;
	volatile uint8_t x5232 = 17U;
	static volatile int32_t t90 = 2;

	t90 = ((x5229<<x5230)^(x5231==x5232));

	if (t90 != 81920) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5237 = 6;
	int8_t x5238 = 6;
	uint32_t x5239 = 1U;
	int16_t x5240 = -1;
	volatile int32_t t91 = 2020;

	t91 = ((x5237<<x5238)^(x5239==x5240));

	if (t91 != 384) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x5273 = INT8_MAX;
	uint32_t x5274 = 1U;
	volatile int64_t x5275 = 1334455261LL;
	int32_t t92 = -5;

	t92 = ((x5273<<x5274)^(x5275==x5276));

	if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5481 = 20U;
	uint8_t x5482 = 0U;
	uint8_t x5483 = 1U;
	int32_t t93 = -38517;

	t93 = ((x5481<<x5482)^(x5483==x5484));

	if (t93 != 20) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x5501 = 1012LL;
	volatile uint32_t x5502 = 1U;
	volatile int64_t x5503 = -422987287616360LL;
	static int8_t x5504 = -1;

	t94 = ((x5501<<x5502)^(x5503==x5504));

	if (t94 != 2024LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5641 = 0;
	int16_t x5642 = 2;
	int64_t x5644 = INT64_MIN;
	int32_t t95 = -12858;

	t95 = ((x5641<<x5642)^(x5643==x5644));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x5653 = 165;
	int16_t x5654 = 1;
	volatile int64_t x5655 = INT64_MIN;
	volatile int32_t t96 = 1;

	t96 = ((x5653<<x5654)^(x5655==x5656));

	if (t96 != 330) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5677 = UINT64_MAX;
	int16_t x5680 = INT16_MAX;
	volatile uint64_t t97 = 1642LLU;

	t97 = ((x5677<<x5678)^(x5679==x5680));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5701 = 5U;
	int8_t x5702 = 7;
	int32_t x5703 = 21030049;
	int32_t t98 = -25;

	t98 = ((x5701<<x5702)^(x5703==x5704));

	if (t98 != 640) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x5737 = 54U;
	volatile int8_t x5738 = 6;
	volatile int64_t x5739 = INT64_MIN;
	volatile uint32_t x5740 = UINT32_MAX;

	t99 = ((x5737<<x5738)^(x5739==x5740));

	if (t99 != 3456) { NG(); } else { ; }
	
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

