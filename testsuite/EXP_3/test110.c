#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x23 = 1;
int8_t x165 = INT8_MAX;
int32_t t2 = 38535;
volatile int32_t x182 = -5370;
int32_t t4 = 601;
int8_t x377 = 1;
uint8_t x378 = 0U;
int64_t x485 = INT64_MIN;
int32_t t7 = -384139;
static int32_t t8 = -16245;
volatile uint64_t x801 = 6864830020709LLU;
int32_t x929 = INT32_MAX;
int32_t t11 = 1554;
int64_t x997 = -4517LL;
int32_t t12 = -22138874;
volatile int8_t x1096 = 8;
int32_t t15 = -6331319;
int8_t x1224 = 1;
volatile int32_t t16 = 3403;
int64_t x1234 = -1LL;
uint8_t x1235 = 4U;
volatile uint8_t x1237 = UINT8_MAX;
int64_t x1239 = -1LL;
volatile int32_t t18 = -15;
volatile int32_t x1273 = 8821;
uint64_t x1432 = UINT64_MAX;
static int8_t x1514 = -1;
int16_t x2025 = -1;
int16_t x2027 = 1;
int64_t x2456 = -1LL;
int64_t x2514 = INT64_MIN;
volatile int32_t t30 = 985704;
volatile uint8_t x2721 = 0U;
volatile uint8_t x2723 = 24U;
int64_t x2724 = -1LL;
uint32_t x2773 = UINT32_MAX;
int32_t t33 = 8;
volatile int32_t t34 = 0;
volatile int32_t t35 = -639722198;
uint8_t x2955 = 0U;
static uint8_t x2956 = 1U;
static volatile int32_t t37 = -701048543;
int64_t x3058 = INT64_MIN;
uint64_t x3060 = 3LLU;
int16_t x3217 = 11;
static int8_t x3219 = -1;
static int8_t x3541 = INT8_MAX;
int64_t x3837 = -1LL;
static uint16_t x3847 = 6U;
int8_t x3984 = 1;
volatile uint16_t x4051 = 7U;
static int64_t x4054 = INT64_MIN;
uint16_t x4226 = 688U;
uint64_t x4241 = 111830LLU;
static uint64_t x4642 = 33439399627066LLU;
static uint32_t x4735 = 5U;
int32_t x4931 = -1;
volatile int16_t x4938 = -25;
static uint8_t x4969 = 4U;
static int8_t x4971 = -1;
int32_t t56 = 316660;
uint64_t x4988 = 2LLU;
uint8_t x4995 = 5U;
uint8_t x5071 = 0U;
static uint8_t x5084 = 2U;
int32_t t60 = -9465;
static volatile uint16_t x5095 = 1U;
uint64_t x5166 = UINT64_MAX;
int8_t x5291 = 0;
static volatile int32_t x5334 = -1;
static uint16_t x5371 = 5U;
volatile int32_t t68 = -456;
uint16_t x5555 = 1U;
static uint32_t x5661 = UINT32_MAX;
uint16_t x5662 = UINT16_MAX;
static int8_t x5809 = INT8_MIN;
volatile uint64_t x6003 = 26LLU;
uint16_t x6103 = 3U;
uint8_t x6140 = 15U;
int32_t x6149 = 193;
static volatile int32_t t78 = -148;
int64_t x6206 = 0LL;
static int32_t t79 = -1024784;
uint16_t x6263 = 6U;
static int16_t x6425 = INT16_MIN;
int16_t x6427 = -2;
volatile int32_t x6477 = 1;
static uint8_t x6595 = 0U;
volatile int32_t t84 = 26;
int16_t x6823 = 0;
int64_t x6922 = INT64_MIN;
int64_t x6925 = INT64_MIN;
uint64_t x6928 = UINT64_MAX;
int32_t x6964 = -1;
static uint64_t x7529 = UINT64_MAX;
static volatile int32_t t91 = 58955718;
volatile uint8_t x7568 = 3U;
int8_t x7718 = 3;
volatile int8_t x7727 = 7;
int64_t x7728 = -4LL;
static volatile int32_t t95 = 265335825;
static int8_t x7734 = -6;
volatile int32_t x7735 = -1;
int32_t x7762 = INT32_MIN;
volatile int32_t t97 = 15158461;
int8_t x7869 = -7;


void f0(void) {
	int32_t x21 = INT32_MAX;
	static volatile uint32_t x22 = 2U;
	uint32_t x24 = UINT32_MAX;
	static int32_t t0 = -18;

	t0 = ((x21<x22)<<(x23+x24));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x109 = INT8_MAX;
	int8_t x110 = 16;
	uint16_t x111 = 29U;
	uint16_t x112 = 2U;
	volatile int32_t t1 = -5;

	t1 = ((x109<x110)<<(x111+x112));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x166 = UINT16_MAX;
	int64_t x167 = -1LL;
	volatile int32_t x168 = 13;

	t2 = ((x165<x166)<<(x167+x168));

	if (t2 != 4096) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x177 = INT32_MIN;
	static int8_t x178 = INT8_MIN;
	uint8_t x179 = 2U;
	static int8_t x180 = -1;
	volatile int32_t t3 = -5769452;

	t3 = ((x177<x178)<<(x179+x180));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x181 = INT64_MIN;
	volatile int16_t x183 = -1;
	int8_t x184 = 4;

	t4 = ((x181<x182)<<(x183+x184));

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x229 = INT16_MIN;
	int8_t x230 = -1;
	uint16_t x231 = 5U;
	int16_t x232 = -1;
	static int32_t t5 = -1;

	t5 = ((x229<x230)<<(x231+x232));

	if (t5 != 16) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x379 = 3U;
	uint32_t x380 = UINT32_MAX;
	int32_t t6 = -1004;

	t6 = ((x377<x378)<<(x379+x380));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x486 = -1LL;
	static uint8_t x487 = 5U;
	static volatile uint32_t x488 = UINT32_MAX;

	t7 = ((x485<x486)<<(x487+x488));

	if (t7 != 16) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x489 = INT64_MAX;
	int16_t x490 = -1;
	uint32_t x491 = UINT32_MAX;
	uint16_t x492 = 27U;

	t8 = ((x489<x490)<<(x491+x492));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x802 = -8248681968LL;
	static int16_t x803 = 7;
	static int16_t x804 = -1;
	int32_t t9 = -6390602;

	t9 = ((x801<x802)<<(x803+x804));

	if (t9 != 64) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x841 = -139296575652465669LL;
	int8_t x842 = INT8_MIN;
	uint32_t x843 = 3U;
	volatile int8_t x844 = -1;
	static int32_t t10 = 1561553;

	t10 = ((x841<x842)<<(x843+x844));

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x930 = 3U;
	int64_t x931 = -1LL;
	uint8_t x932 = 6U;

	t11 = ((x929<x930)<<(x931+x932));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x998 = INT32_MIN;
	static volatile int64_t x999 = -1LL;
	uint8_t x1000 = 2U;

	t12 = ((x997<x998)<<(x999+x1000));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1041 = -19;
	int16_t x1042 = -19;
	uint8_t x1043 = 3U;
	static volatile uint8_t x1044 = 12U;
	volatile int32_t t13 = 109722;

	t13 = ((x1041<x1042)<<(x1043+x1044));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1093 = 0;
	int64_t x1094 = INT64_MIN;
	uint32_t x1095 = UINT32_MAX;
	int32_t t14 = 18;

	t14 = ((x1093<x1094)<<(x1095+x1096));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1109 = -1;
	static int8_t x1110 = 48;
	uint64_t x1111 = UINT64_MAX;
	static volatile uint8_t x1112 = 1U;

	t15 = ((x1109<x1110)<<(x1111+x1112));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1221 = 1U;
	volatile int16_t x1222 = INT16_MAX;
	volatile int32_t x1223 = -1;

	t16 = ((x1221<x1222)<<(x1223+x1224));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1233 = INT64_MAX;
	uint32_t x1236 = 0U;
	volatile int32_t t17 = 199;

	t17 = ((x1233<x1234)<<(x1235+x1236));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1238 = 107U;
	static int8_t x1240 = 1;

	t18 = ((x1237<x1238)<<(x1239+x1240));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1274 = INT8_MIN;
	int32_t x1275 = -1;
	uint8_t x1276 = 4U;
	volatile int32_t t19 = 172825411;

	t19 = ((x1273<x1274)<<(x1275+x1276));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1309 = -49LL;
	uint16_t x1310 = 26968U;
	uint8_t x1311 = 12U;
	uint8_t x1312 = 1U;
	int32_t t20 = 715198136;

	t20 = ((x1309<x1310)<<(x1311+x1312));

	if (t20 != 8192) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1429 = 10548U;
	volatile int16_t x1430 = -1;
	volatile int8_t x1431 = 1;
	static int32_t t21 = 2390156;

	t21 = ((x1429<x1430)<<(x1431+x1432));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1513 = UINT16_MAX;
	int16_t x1515 = 1;
	volatile int8_t x1516 = -1;
	static int32_t t22 = -93;

	t22 = ((x1513<x1514)<<(x1515+x1516));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1749 = -1;
	uint8_t x1750 = 83U;
	volatile int8_t x1751 = -1;
	uint16_t x1752 = 1U;
	volatile int32_t t23 = 3316;

	t23 = ((x1749<x1750)<<(x1751+x1752));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x2026 = 1440864633702009698LLU;
	int16_t x2028 = -1;
	int32_t t24 = -41135;

	t24 = ((x2025<x2026)<<(x2027+x2028));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2205 = -1;
	volatile int32_t x2206 = -20236;
	volatile uint8_t x2207 = 28U;
	volatile int16_t x2208 = -1;
	int32_t t25 = -29966;

	t25 = ((x2205<x2206)<<(x2207+x2208));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x2453 = -1;
	volatile int64_t x2454 = INT64_MAX;
	volatile uint16_t x2455 = 7U;
	int32_t t26 = 39947;

	t26 = ((x2453<x2454)<<(x2455+x2456));

	if (t26 != 64) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x2461 = INT32_MIN;
	static int32_t x2462 = 334430;
	uint8_t x2463 = 4U;
	uint8_t x2464 = 2U;
	int32_t t27 = 28;

	t27 = ((x2461<x2462)<<(x2463+x2464));

	if (t27 != 64) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2477 = INT8_MIN;
	int64_t x2478 = -253LL;
	uint8_t x2479 = 0U;
	int8_t x2480 = 0;
	int32_t t28 = -58917;

	t28 = ((x2477<x2478)<<(x2479+x2480));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2509 = UINT8_MAX;
	int8_t x2510 = INT8_MAX;
	int32_t x2511 = -1;
	volatile uint8_t x2512 = 16U;
	volatile int32_t t29 = 353189005;

	t29 = ((x2509<x2510)<<(x2511+x2512));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x2513 = UINT8_MAX;
	int16_t x2515 = -111;
	int8_t x2516 = INT8_MAX;

	t30 = ((x2513<x2514)<<(x2515+x2516));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2565 = 80U;
	int16_t x2566 = INT16_MIN;
	static uint8_t x2567 = 14U;
	uint8_t x2568 = 13U;
	int32_t t31 = -173311;

	t31 = ((x2565<x2566)<<(x2567+x2568));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2722 = 3122U;
	volatile int32_t t32 = -46607031;

	t32 = ((x2721<x2722)<<(x2723+x2724));

	if (t32 != 8388608) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2774 = -15;
	volatile int16_t x2775 = 1;
	uint64_t x2776 = 6LLU;

	t33 = ((x2773<x2774)<<(x2775+x2776));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2793 = UINT16_MAX;
	volatile int32_t x2794 = INT32_MIN;
	int8_t x2795 = 6;
	int8_t x2796 = -1;

	t34 = ((x2793<x2794)<<(x2795+x2796));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x2877 = 1181473U;
	int32_t x2878 = INT32_MIN;
	int32_t x2879 = -1;
	static uint8_t x2880 = 4U;

	t35 = ((x2877<x2878)<<(x2879+x2880));

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2953 = INT16_MAX;
	volatile int32_t x2954 = 1929351;
	volatile int32_t t36 = 1353253;

	t36 = ((x2953<x2954)<<(x2955+x2956));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x2965 = INT8_MIN;
	uint64_t x2966 = 552620946565692LLU;
	int8_t x2967 = -1;
	uint32_t x2968 = 1U;

	t37 = ((x2965<x2966)<<(x2967+x2968));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x3057 = INT8_MIN;
	int64_t x3059 = -1LL;
	int32_t t38 = -102800085;

	t38 = ((x3057<x3058)<<(x3059+x3060));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x3218 = 1593U;
	static uint8_t x3220 = 27U;
	volatile int32_t t39 = 27083382;

	t39 = ((x3217<x3218)<<(x3219+x3220));

	if (t39 != 67108864) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x3542 = -85;
	int32_t x3543 = -1;
	uint8_t x3544 = 9U;
	int32_t t40 = -374079538;

	t40 = ((x3541<x3542)<<(x3543+x3544));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3601 = INT16_MAX;
	uint16_t x3602 = 28170U;
	volatile int8_t x3603 = 0;
	static int32_t x3604 = 5;
	int32_t t41 = 5;

	t41 = ((x3601<x3602)<<(x3603+x3604));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3838 = 380247509LL;
	int8_t x3839 = 3;
	uint64_t x3840 = UINT64_MAX;
	int32_t t42 = -4495;

	t42 = ((x3837<x3838)<<(x3839+x3840));

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3845 = UINT64_MAX;
	uint32_t x3846 = 5U;
	uint16_t x3848 = 0U;
	int32_t t43 = 217;

	t43 = ((x3845<x3846)<<(x3847+x3848));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3981 = INT64_MIN;
	static int16_t x3982 = -2788;
	volatile uint16_t x3983 = 2U;
	volatile int32_t t44 = 1651300;

	t44 = ((x3981<x3982)<<(x3983+x3984));

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x4049 = INT16_MIN;
	static uint16_t x4050 = UINT16_MAX;
	uint32_t x4052 = UINT32_MAX;
	int32_t t45 = 10765388;

	t45 = ((x4049<x4050)<<(x4051+x4052));

	if (t45 != 64) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x4053 = INT32_MAX;
	int8_t x4055 = -1;
	uint16_t x4056 = 2U;
	volatile int32_t t46 = -11;

	t46 = ((x4053<x4054)<<(x4055+x4056));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x4225 = UINT16_MAX;
	int8_t x4227 = 1;
	uint32_t x4228 = UINT32_MAX;
	static int32_t t47 = 151073547;

	t47 = ((x4225<x4226)<<(x4227+x4228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x4242 = UINT8_MAX;
	static int8_t x4243 = 15;
	static int16_t x4244 = -1;
	int32_t t48 = 2814188;

	t48 = ((x4241<x4242)<<(x4243+x4244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x4573 = 15U;
	static int32_t x4574 = INT32_MAX;
	static int8_t x4575 = 1;
	int16_t x4576 = -1;
	volatile int32_t t49 = -2026679;

	t49 = ((x4573<x4574)<<(x4575+x4576));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x4641 = INT8_MAX;
	uint8_t x4643 = 1U;
	static uint8_t x4644 = 24U;
	volatile int32_t t50 = -65845266;

	t50 = ((x4641<x4642)<<(x4643+x4644));

	if (t50 != 33554432) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x4733 = -51;
	int32_t x4734 = INT32_MIN;
	volatile int8_t x4736 = -1;
	int32_t t51 = 1;

	t51 = ((x4733<x4734)<<(x4735+x4736));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x4873 = UINT8_MAX;
	int8_t x4874 = INT8_MIN;
	volatile int8_t x4875 = -1;
	volatile uint32_t x4876 = 22U;
	int32_t t52 = -27287108;

	t52 = ((x4873<x4874)<<(x4875+x4876));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x4929 = INT64_MIN;
	static int64_t x4930 = -1LL;
	static volatile int8_t x4932 = 1;
	int32_t t53 = 5614723;

	t53 = ((x4929<x4930)<<(x4931+x4932));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x4933 = -1;
	static int32_t x4934 = INT32_MIN;
	uint64_t x4935 = UINT64_MAX;
	volatile int8_t x4936 = 1;
	volatile int32_t t54 = 245161599;

	t54 = ((x4933<x4934)<<(x4935+x4936));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x4937 = INT64_MAX;
	static int8_t x4939 = 1;
	int16_t x4940 = -1;
	static volatile int32_t t55 = 493309;

	t55 = ((x4937<x4938)<<(x4939+x4940));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4970 = INT8_MIN;
	uint8_t x4972 = 31U;

	t56 = ((x4969<x4970)<<(x4971+x4972));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x4985 = INT32_MIN;
	uint64_t x4986 = 85823542142791LLU;
	static uint8_t x4987 = 3U;
	static volatile int32_t t57 = -12521;

	t57 = ((x4985<x4986)<<(x4987+x4988));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x4993 = INT16_MIN;
	uint16_t x4994 = 0U;
	static int8_t x4996 = -1;
	volatile int32_t t58 = 7033;

	t58 = ((x4993<x4994)<<(x4995+x4996));

	if (t58 != 16) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x5069 = 4;
	static int64_t x5070 = 9491605746383LL;
	static volatile uint8_t x5072 = 3U;
	static int32_t t59 = 637603849;

	t59 = ((x5069<x5070)<<(x5071+x5072));

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x5081 = INT32_MAX;
	uint32_t x5082 = UINT32_MAX;
	uint32_t x5083 = UINT32_MAX;

	t60 = ((x5081<x5082)<<(x5083+x5084));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x5093 = -1;
	int8_t x5094 = -1;
	int8_t x5096 = 10;
	int32_t t61 = -364145;

	t61 = ((x5093<x5094)<<(x5095+x5096));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x5165 = UINT8_MAX;
	int16_t x5167 = -1;
	static uint8_t x5168 = 22U;
	volatile int32_t t62 = -1192;

	t62 = ((x5165<x5166)<<(x5167+x5168));

	if (t62 != 2097152) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x5177 = 12U;
	volatile int64_t x5178 = -1LL;
	static int16_t x5179 = 1;
	uint8_t x5180 = 12U;
	static int32_t t63 = 49778;

	t63 = ((x5177<x5178)<<(x5179+x5180));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x5197 = 1U;
	int16_t x5198 = INT16_MIN;
	uint32_t x5199 = 31U;
	int32_t x5200 = -1;
	volatile int32_t t64 = 652;

	t64 = ((x5197<x5198)<<(x5199+x5200));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x5289 = UINT16_MAX;
	static uint32_t x5290 = UINT32_MAX;
	uint8_t x5292 = 1U;
	volatile int32_t t65 = 2820352;

	t65 = ((x5289<x5290)<<(x5291+x5292));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x5301 = -1;
	static int64_t x5302 = INT64_MIN;
	volatile uint16_t x5303 = 43U;
	static int8_t x5304 = -26;
	static volatile int32_t t66 = -704945;

	t66 = ((x5301<x5302)<<(x5303+x5304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x5333 = 302085212LLU;
	volatile int16_t x5335 = -1;
	uint8_t x5336 = 12U;
	volatile int32_t t67 = -28038;

	t67 = ((x5333<x5334)<<(x5335+x5336));

	if (t67 != 2048) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x5369 = -52;
	int8_t x5370 = INT8_MIN;
	volatile int16_t x5372 = -1;

	t68 = ((x5369<x5370)<<(x5371+x5372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5421 = INT16_MIN;
	static uint16_t x5422 = 0U;
	volatile int16_t x5423 = 1;
	volatile uint8_t x5424 = 0U;
	int32_t t69 = -909;

	t69 = ((x5421<x5422)<<(x5423+x5424));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x5553 = INT8_MAX;
	volatile uint16_t x5554 = 8388U;
	uint8_t x5556 = 6U;
	volatile int32_t t70 = -359800;

	t70 = ((x5553<x5554)<<(x5555+x5556));

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x5663 = 1U;
	uint8_t x5664 = 6U;
	volatile int32_t t71 = 2;

	t71 = ((x5661<x5662)<<(x5663+x5664));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x5810 = 61U;
	int8_t x5811 = -1;
	int8_t x5812 = 4;
	volatile int32_t t72 = -83803866;

	t72 = ((x5809<x5810)<<(x5811+x5812));

	if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x6001 = 234LLU;
	int8_t x6002 = -1;
	int32_t x6004 = -1;
	int32_t t73 = 9888790;

	t73 = ((x6001<x6002)<<(x6003+x6004));

	if (t73 != 33554432) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x6101 = 56944028801978LLU;
	uint64_t x6102 = UINT64_MAX;
	static uint32_t x6104 = UINT32_MAX;
	int32_t t74 = 31468;

	t74 = ((x6101<x6102)<<(x6103+x6104));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x6125 = 0U;
	int64_t x6126 = INT64_MAX;
	int32_t x6127 = 9;
	uint32_t x6128 = 6U;
	static int32_t t75 = 54;

	t75 = ((x6125<x6126)<<(x6127+x6128));

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x6137 = INT16_MAX;
	static int32_t x6138 = INT32_MIN;
	int32_t x6139 = -1;
	int32_t t76 = 168637;

	t76 = ((x6137<x6138)<<(x6139+x6140));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x6150 = -1;
	int64_t x6151 = -1LL;
	static volatile int16_t x6152 = 1;
	volatile int32_t t77 = -5507554;

	t77 = ((x6149<x6150)<<(x6151+x6152));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x6181 = 272366U;
	uint16_t x6182 = 705U;
	int64_t x6183 = -1LL;
	volatile int32_t x6184 = 9;

	t78 = ((x6181<x6182)<<(x6183+x6184));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x6205 = INT16_MIN;
	volatile uint8_t x6207 = 13U;
	int64_t x6208 = -1LL;

	t79 = ((x6205<x6206)<<(x6207+x6208));

	if (t79 != 4096) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x6261 = INT32_MAX;
	int8_t x6262 = INT8_MAX;
	int8_t x6264 = -1;
	int32_t t80 = 1;

	t80 = ((x6261<x6262)<<(x6263+x6264));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x6426 = INT64_MAX;
	uint8_t x6428 = 18U;
	volatile int32_t t81 = 516437;

	t81 = ((x6425<x6426)<<(x6427+x6428));

	if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x6478 = INT8_MIN;
	uint8_t x6479 = 2U;
	volatile int16_t x6480 = -1;
	int32_t t82 = -5036;

	t82 = ((x6477<x6478)<<(x6479+x6480));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x6593 = -1LL;
	volatile uint64_t x6594 = 8LLU;
	static volatile uint32_t x6596 = 6U;
	volatile int32_t t83 = -401674;

	t83 = ((x6593<x6594)<<(x6595+x6596));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x6645 = 5LLU;
	static volatile int32_t x6646 = -4544;
	int8_t x6647 = 7;
	int8_t x6648 = -1;

	t84 = ((x6645<x6646)<<(x6647+x6648));

	if (t84 != 64) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x6821 = INT64_MIN;
	int16_t x6822 = -1;
	int8_t x6824 = 5;
	volatile int32_t t85 = 44950;

	t85 = ((x6821<x6822)<<(x6823+x6824));

	if (t85 != 32) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x6921 = INT16_MIN;
	static uint16_t x6923 = 4U;
	uint32_t x6924 = UINT32_MAX;
	int32_t t86 = -78119279;

	t86 = ((x6921<x6922)<<(x6923+x6924));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x6926 = INT32_MAX;
	uint16_t x6927 = 1U;
	volatile int32_t t87 = -54499733;

	t87 = ((x6925<x6926)<<(x6927+x6928));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x6961 = INT64_MIN;
	static int16_t x6962 = INT16_MIN;
	uint32_t x6963 = 19U;
	int32_t t88 = 0;

	t88 = ((x6961<x6962)<<(x6963+x6964));

	if (t88 != 262144) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x7017 = -1LL;
	volatile uint32_t x7018 = 7953U;
	uint8_t x7019 = 29U;
	static uint64_t x7020 = UINT64_MAX;
	int32_t t89 = -327820119;

	t89 = ((x7017<x7018)<<(x7019+x7020));

	if (t89 != 268435456) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x7289 = 61U;
	uint8_t x7290 = UINT8_MAX;
	int64_t x7291 = -1LL;
	volatile int8_t x7292 = 5;
	volatile int32_t t90 = -1;

	t90 = ((x7289<x7290)<<(x7291+x7292));

	if (t90 != 16) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x7530 = 47;
	uint8_t x7531 = 5U;
	uint8_t x7532 = 0U;

	t91 = ((x7529<x7530)<<(x7531+x7532));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x7565 = -1;
	static int8_t x7566 = INT8_MAX;
	int16_t x7567 = 0;
	int32_t t92 = 17554960;

	t92 = ((x7565<x7566)<<(x7567+x7568));

	if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x7593 = -4498LL;
	uint64_t x7594 = 102773822948LLU;
	static volatile int8_t x7595 = -1;
	static uint32_t x7596 = 23U;
	int32_t t93 = 115;

	t93 = ((x7593<x7594)<<(x7595+x7596));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x7717 = -4;
	uint32_t x7719 = UINT32_MAX;
	uint8_t x7720 = 1U;
	volatile int32_t t94 = -1408985;

	t94 = ((x7717<x7718)<<(x7719+x7720));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x7725 = 0U;
	volatile int16_t x7726 = INT16_MAX;

	t95 = ((x7725<x7726)<<(x7727+x7728));

	if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x7733 = 0U;
	volatile uint16_t x7736 = 26U;
	int32_t t96 = -192;

	t96 = ((x7733<x7734)<<(x7735+x7736));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x7761 = 861U;
	static int8_t x7763 = 1;
	uint32_t x7764 = UINT32_MAX;

	t97 = ((x7761<x7762)<<(x7763+x7764));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x7870 = INT32_MIN;
	volatile int32_t x7871 = 0;
	static volatile int8_t x7872 = 1;
	static int32_t t98 = -12491;

	t98 = ((x7869<x7870)<<(x7871+x7872));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x7897 = -4LL;
	volatile int8_t x7898 = -9;
	volatile int32_t x7899 = -1;
	volatile uint32_t x7900 = 2U;
	volatile int32_t t99 = 31715;

	t99 = ((x7897<x7898)<<(x7899+x7900));

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

