#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
uint16_t x2 = 3U;
uint64_t x297 = 245168049163505LLU;
int32_t x371 = -1;
int8_t x372 = INT8_MIN;
static uint16_t x410 = 0U;
static volatile int16_t x412 = 0;
static uint8_t x972 = 90U;
volatile uint16_t x1145 = 68U;
uint64_t x1146 = 1LLU;
int16_t x1147 = 55;
volatile int32_t t9 = -319433263;
volatile uint64_t x1154 = 6LLU;
volatile int64_t x1211 = -1LL;
int16_t x1481 = 127;
int16_t x1796 = INT16_MAX;
int32_t t15 = -28;
static volatile int16_t x1822 = 0;
volatile uint8_t x1930 = 6U;
uint32_t x1955 = 93566332U;
volatile uint64_t x2009 = 1449130247953357LLU;
int32_t t20 = 14599;
static volatile int64_t x2468 = 4292941728820683313LL;
volatile uint16_t x2641 = UINT16_MAX;
static int64_t x2642 = 0LL;
uint32_t x2644 = 163408971U;
static uint64_t x2876 = 3738401170147589458LLU;
volatile int32_t t27 = 1947;
volatile uint16_t x3027 = 10290U;
volatile uint32_t x3028 = 11367735U;
int16_t x3039 = -1;
int16_t x3040 = INT16_MIN;
int32_t t32 = 0;
uint64_t x3231 = 248764742587LLU;
int8_t x3424 = 0;
uint64_t x3489 = 382738049812183LLU;
static volatile int64_t x3500 = -1LL;
uint8_t x3538 = 1U;
int8_t x3539 = INT8_MIN;
int32_t t39 = 63;
int16_t x3550 = 0;
int32_t t40 = -2382307;
volatile int32_t t41 = -5873903;
int32_t t46 = 242039;
int8_t x4205 = INT8_MAX;
static int64_t x4207 = -2061674LL;
uint32_t x4208 = 252U;
int32_t t49 = -8871953;
int8_t x4261 = INT8_MAX;
volatile uint32_t x4473 = 49U;
static uint8_t x4490 = 4U;
int64_t x4491 = INT64_MIN;
volatile int64_t x4653 = 54LL;
volatile int16_t x4656 = INT16_MIN;
int32_t t56 = 10672;
int32_t x5072 = -1;
int16_t x5164 = INT16_MIN;
static int64_t x5507 = -1LL;
static volatile int32_t t64 = 13349384;
uint32_t x5636 = UINT32_MAX;
uint64_t x5642 = 3LLU;
static int8_t x5981 = 5;
volatile int32_t t70 = 33481088;
static int32_t t71 = -2261400;
static int8_t x6088 = INT8_MIN;
volatile int32_t t73 = -1484;
volatile int8_t x6260 = INT8_MAX;
int16_t x6416 = INT16_MAX;
volatile uint64_t x6425 = UINT64_MAX;
int16_t x6431 = INT16_MIN;
uint8_t x6579 = UINT8_MAX;
int32_t t79 = -347;
volatile int8_t x6587 = -47;
int8_t x6634 = 1;
uint32_t x6688 = 27U;
static int32_t t83 = 289;
static uint8_t x6828 = 118U;
uint64_t x7017 = UINT64_MAX;
int8_t x7043 = 30;
int8_t x7135 = INT8_MIN;
static uint8_t x7136 = 6U;
int8_t x7247 = 1;
uint8_t x7357 = UINT8_MAX;
static volatile int16_t x7359 = -7;
volatile int32_t t91 = 230401;
uint16_t x7761 = UINT16_MAX;
uint8_t x7763 = UINT8_MAX;
uint8_t x8006 = 7U;
uint32_t x8110 = 1U;
uint16_t x8174 = 3U;
static int16_t x8239 = -1;
uint64_t x8246 = 0LLU;
uint64_t x8247 = 107LLU;
int32_t t97 = 2;


void f0(void) {
	uint16_t x3 = UINT16_MAX;
	static uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -19049694;

	t0 = ((x1<<x2)<=(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x298 = 0U;
	int16_t x299 = 5459;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t1 = 58213;

	t1 = ((x297<<x298)<=(x299*x300));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x369 = 114U;
	int16_t x370 = 1;
	int32_t t2 = 733508;

	t2 = ((x369<<x370)<=(x371*x372));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x409 = 1461U;
	uint32_t x411 = 219755351U;
	volatile int32_t t3 = -12682144;

	t3 = ((x409<<x410)<=(x411*x412));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x441 = 6;
	int8_t x442 = 28;
	volatile int64_t x443 = -1LL;
	volatile int8_t x444 = -2;
	static volatile int32_t t4 = 4012;

	t4 = ((x441<<x442)<=(x443*x444));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x597 = 0;
	static volatile uint16_t x598 = 6U;
	static volatile int16_t x599 = INT16_MIN;
	int16_t x600 = INT16_MIN;
	int32_t t5 = -492628611;

	t5 = ((x597<<x598)<=(x599*x600));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x661 = 26U;
	static volatile int32_t x662 = 1;
	int32_t x663 = INT32_MIN;
	uint64_t x664 = 23LLU;
	volatile int32_t t6 = 3218;

	t6 = ((x661<<x662)<=(x663*x664));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x709 = UINT64_MAX;
	static int8_t x710 = 7;
	int8_t x711 = INT8_MIN;
	volatile int8_t x712 = INT8_MIN;
	volatile int32_t t7 = 1;

	t7 = ((x709<<x710)<=(x711*x712));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x969 = 17647LLU;
	uint16_t x970 = 28U;
	int64_t x971 = 3LL;
	static volatile int32_t t8 = -9190171;

	t8 = ((x969<<x970)<=(x971*x972));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x1148 = INT16_MAX;

	t9 = ((x1145<<x1146)<=(x1147*x1148));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1153 = 1;
	int64_t x1155 = 227LL;
	static int8_t x1156 = 62;
	int32_t t10 = -797703;

	t10 = ((x1153<<x1154)<=(x1155*x1156));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x1209 = 2U;
	int8_t x1210 = 7;
	static uint32_t x1212 = 24114U;
	static int32_t t11 = -97;

	t11 = ((x1209<<x1210)<=(x1211*x1212));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1345 = INT16_MAX;
	static int16_t x1346 = 2;
	int32_t x1347 = -1;
	int8_t x1348 = -1;
	int32_t t12 = 23342;

	t12 = ((x1345<<x1346)<=(x1347*x1348));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1482 = 1;
	static uint16_t x1483 = 2U;
	int16_t x1484 = INT16_MIN;
	volatile int32_t t13 = 14653;

	t13 = ((x1481<<x1482)<=(x1483*x1484));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x1733 = UINT32_MAX;
	volatile int64_t x1734 = 14LL;
	int32_t x1735 = -102762;
	int16_t x1736 = -1;
	volatile int32_t t14 = -61262;

	t14 = ((x1733<<x1734)<=(x1735*x1736));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x1793 = 264196U;
	volatile int8_t x1794 = 0;
	int8_t x1795 = 7;

	t15 = ((x1793<<x1794)<=(x1795*x1796));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1821 = INT8_MAX;
	int32_t x1823 = -15114;
	uint64_t x1824 = 215743066LLU;
	volatile int32_t t16 = -70929;

	t16 = ((x1821<<x1822)<=(x1823*x1824));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x1929 = UINT32_MAX;
	static uint16_t x1931 = 881U;
	int32_t x1932 = -1;
	volatile int32_t t17 = -215739;

	t17 = ((x1929<<x1930)<=(x1931*x1932));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1953 = 5790U;
	static int32_t x1954 = 15;
	static int16_t x1956 = -1;
	int32_t t18 = -8;

	t18 = ((x1953<<x1954)<=(x1955*x1956));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x2010 = 2;
	uint32_t x2011 = 6092U;
	static volatile int64_t x2012 = 470834565803512LL;
	int32_t t19 = -1110052;

	t19 = ((x2009<<x2010)<=(x2011*x2012));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x2169 = 15532;
	uint16_t x2170 = 14U;
	int16_t x2171 = 0;
	uint64_t x2172 = 1758612771LLU;

	t20 = ((x2169<<x2170)<=(x2171*x2172));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x2313 = 241U;
	uint16_t x2314 = 1U;
	static int64_t x2315 = -26LL;
	uint32_t x2316 = 85U;
	int32_t t21 = -260831253;

	t21 = ((x2313<<x2314)<=(x2315*x2316));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x2465 = UINT16_MAX;
	uint16_t x2466 = 3U;
	static int16_t x2467 = -1;
	volatile int32_t t22 = -1010155;

	t22 = ((x2465<<x2466)<=(x2467*x2468));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x2489 = 6155U;
	uint8_t x2490 = 1U;
	volatile uint8_t x2491 = UINT8_MAX;
	static int8_t x2492 = 2;
	volatile int32_t t23 = 2664;

	t23 = ((x2489<<x2490)<=(x2491*x2492));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x2593 = 7262U;
	int32_t x2594 = 1;
	int16_t x2595 = INT16_MAX;
	static volatile int16_t x2596 = -1;
	static int32_t t24 = -5355041;

	t24 = ((x2593<<x2594)<=(x2595*x2596));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x2643 = -128989162LL;
	volatile int32_t t25 = 200194114;

	t25 = ((x2641<<x2642)<=(x2643*x2644));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2837 = UINT16_MAX;
	volatile uint8_t x2838 = 0U;
	volatile uint16_t x2839 = 4U;
	int16_t x2840 = INT16_MIN;
	volatile int32_t t26 = -574209454;

	t26 = ((x2837<<x2838)<=(x2839*x2840));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2873 = 114424U;
	static uint8_t x2874 = 6U;
	static int8_t x2875 = INT8_MAX;

	t27 = ((x2873<<x2874)<=(x2875*x2876));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x3005 = 772362568793512035LL;
	int8_t x3006 = 0;
	static uint16_t x3007 = UINT16_MAX;
	int8_t x3008 = INT8_MAX;
	volatile int32_t t28 = 69260;

	t28 = ((x3005<<x3006)<=(x3007*x3008));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x3025 = 4261327826754980LLU;
	uint16_t x3026 = 3U;
	volatile int32_t t29 = 5630391;

	t29 = ((x3025<<x3026)<=(x3027*x3028));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x3037 = 70LLU;
	uint8_t x3038 = 7U;
	volatile int32_t t30 = -29187728;

	t30 = ((x3037<<x3038)<=(x3039*x3040));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x3133 = 8;
	static int8_t x3134 = 1;
	int8_t x3135 = 1;
	uint16_t x3136 = 327U;
	int32_t t31 = 528173;

	t31 = ((x3133<<x3134)<=(x3135*x3136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x3221 = UINT64_MAX;
	int32_t x3222 = 15;
	uint8_t x3223 = UINT8_MAX;
	static int32_t x3224 = -1;

	t32 = ((x3221<<x3222)<=(x3223*x3224));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x3229 = 1;
	int8_t x3230 = 7;
	int64_t x3232 = -1LL;
	int32_t t33 = -9;

	t33 = ((x3229<<x3230)<=(x3231*x3232));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x3401 = UINT8_MAX;
	int8_t x3402 = 3;
	volatile int64_t x3403 = 13649641515506789LL;
	volatile uint64_t x3404 = UINT64_MAX;
	static int32_t t34 = -52093;

	t34 = ((x3401<<x3402)<=(x3403*x3404));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x3421 = 49;
	volatile uint8_t x3422 = 14U;
	static volatile int8_t x3423 = INT8_MIN;
	int32_t t35 = 11955364;

	t35 = ((x3421<<x3422)<=(x3423*x3424));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x3477 = 1427833546LLU;
	volatile int32_t x3478 = 20;
	uint8_t x3479 = 12U;
	int32_t x3480 = -121;
	static volatile int32_t t36 = 226896484;

	t36 = ((x3477<<x3478)<=(x3479*x3480));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x3490 = 50U;
	static int32_t x3491 = 37;
	uint8_t x3492 = UINT8_MAX;
	volatile int32_t t37 = -3307;

	t37 = ((x3489<<x3490)<=(x3491*x3492));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x3497 = INT16_MAX;
	uint8_t x3498 = 3U;
	static int32_t x3499 = INT32_MAX;
	static int32_t t38 = -21580;

	t38 = ((x3497<<x3498)<=(x3499*x3500));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x3537 = 0U;
	uint32_t x3540 = 1073U;

	t39 = ((x3537<<x3538)<=(x3539*x3540));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x3549 = INT64_MAX;
	static int16_t x3551 = -1;
	int8_t x3552 = 37;

	t40 = ((x3549<<x3550)<=(x3551*x3552));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x3653 = 12529U;
	volatile uint16_t x3654 = 1U;
	int64_t x3655 = 29459534315448LL;
	volatile int32_t x3656 = -1;

	t41 = ((x3653<<x3654)<=(x3655*x3656));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3701 = 71827LL;
	volatile uint8_t x3702 = 1U;
	uint64_t x3703 = 102097855LLU;
	volatile uint32_t x3704 = 119U;
	int32_t t42 = -96;

	t42 = ((x3701<<x3702)<=(x3703*x3704));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3785 = UINT64_MAX;
	int8_t x3786 = 0;
	uint8_t x3787 = UINT8_MAX;
	uint64_t x3788 = UINT64_MAX;
	volatile int32_t t43 = 194032;

	t43 = ((x3785<<x3786)<=(x3787*x3788));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3973 = 2201346299183361089LLU;
	static int16_t x3974 = 11;
	int8_t x3975 = 42;
	uint64_t x3976 = 3468506LLU;
	volatile int32_t t44 = 1;

	t44 = ((x3973<<x3974)<=(x3975*x3976));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x3993 = INT32_MAX;
	int8_t x3994 = 0;
	volatile int8_t x3995 = 4;
	uint32_t x3996 = 64833U;
	static int32_t t45 = -457940;

	t45 = ((x3993<<x3994)<=(x3995*x3996));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x4029 = 16886172365081LL;
	uint64_t x4030 = 5LLU;
	int32_t x4031 = -1;
	static uint64_t x4032 = UINT64_MAX;

	t46 = ((x4029<<x4030)<=(x4031*x4032));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x4045 = UINT8_MAX;
	volatile int8_t x4046 = 18;
	int8_t x4047 = INT8_MAX;
	int64_t x4048 = -1LL;
	volatile int32_t t47 = 2001;

	t47 = ((x4045<<x4046)<=(x4047*x4048));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x4093 = 1U;
	int16_t x4094 = 0;
	int16_t x4095 = INT16_MIN;
	static uint32_t x4096 = 34150U;
	int32_t t48 = 356783;

	t48 = ((x4093<<x4094)<=(x4095*x4096));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x4206 = 1;

	t49 = ((x4205<<x4206)<=(x4207*x4208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x4262 = 6U;
	int32_t x4263 = INT32_MIN;
	static uint32_t x4264 = 4079519U;
	static volatile int32_t t50 = -1164;

	t50 = ((x4261<<x4262)<=(x4263*x4264));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x4301 = UINT16_MAX;
	uint8_t x4302 = 7U;
	static uint16_t x4303 = 3439U;
	volatile uint32_t x4304 = UINT32_MAX;
	static volatile int32_t t51 = 1;

	t51 = ((x4301<<x4302)<=(x4303*x4304));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x4333 = 26113U;
	uint8_t x4334 = 5U;
	int32_t x4335 = -1;
	volatile int8_t x4336 = 1;
	volatile int32_t t52 = 174637;

	t52 = ((x4333<<x4334)<=(x4335*x4336));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4474 = 19LLU;
	volatile uint64_t x4475 = 0LLU;
	int32_t x4476 = -1;
	int32_t t53 = -7;

	t53 = ((x4473<<x4474)<=(x4475*x4476));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x4489 = UINT16_MAX;
	static int32_t x4492 = 1;
	volatile int32_t t54 = 497085695;

	t54 = ((x4489<<x4490)<=(x4491*x4492));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x4605 = UINT64_MAX;
	int32_t x4606 = 16;
	int8_t x4607 = INT8_MAX;
	static int32_t x4608 = 12;
	int32_t t55 = -13722372;

	t55 = ((x4605<<x4606)<=(x4607*x4608));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x4654 = 3U;
	int8_t x4655 = -1;

	t56 = ((x4653<<x4654)<=(x4655*x4656));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x4769 = 7155090128983LLU;
	static uint32_t x4770 = 1U;
	uint32_t x4771 = UINT32_MAX;
	uint64_t x4772 = 217683502787LLU;
	static int32_t t57 = -848352;

	t57 = ((x4769<<x4770)<=(x4771*x4772));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4801 = 25U;
	static volatile int32_t x4802 = 1;
	volatile uint32_t x4803 = 1873U;
	int8_t x4804 = 6;
	static volatile int32_t t58 = -784262;

	t58 = ((x4801<<x4802)<=(x4803*x4804));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x4905 = 489642230;
	uint16_t x4906 = 1U;
	volatile int16_t x4907 = -87;
	volatile uint32_t x4908 = UINT32_MAX;
	volatile int32_t t59 = 797197191;

	t59 = ((x4905<<x4906)<=(x4907*x4908));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x5069 = 2U;
	static uint8_t x5070 = 2U;
	static int32_t x5071 = 884366;
	static volatile int32_t t60 = 487292585;

	t60 = ((x5069<<x5070)<=(x5071*x5072));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x5161 = INT16_MAX;
	int64_t x5162 = 9LL;
	static int16_t x5163 = INT16_MAX;
	volatile int32_t t61 = 1066905339;

	t61 = ((x5161<<x5162)<=(x5163*x5164));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x5505 = 4;
	int8_t x5506 = 6;
	int16_t x5508 = INT16_MIN;
	volatile int32_t t62 = 1;

	t62 = ((x5505<<x5506)<=(x5507*x5508));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x5525 = 161U;
	uint32_t x5526 = 0U;
	uint64_t x5527 = 2848488LLU;
	int32_t x5528 = 26742377;
	volatile int32_t t63 = 63431310;

	t63 = ((x5525<<x5526)<=(x5527*x5528));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x5529 = UINT8_MAX;
	uint16_t x5530 = 8U;
	volatile int32_t x5531 = -78;
	int8_t x5532 = INT8_MAX;

	t64 = ((x5529<<x5530)<=(x5531*x5532));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5633 = 9;
	volatile uint64_t x5634 = 4LLU;
	int32_t x5635 = -14441;
	volatile int32_t t65 = 592793541;

	t65 = ((x5633<<x5634)<=(x5635*x5636));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x5641 = 33133978445LLU;
	volatile int8_t x5643 = INT8_MIN;
	int16_t x5644 = 1337;
	volatile int32_t t66 = 252;

	t66 = ((x5641<<x5642)<=(x5643*x5644));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x5649 = 777451365U;
	int8_t x5650 = 3;
	int64_t x5651 = INT64_MIN;
	uint64_t x5652 = 396LLU;
	volatile int32_t t67 = -1;

	t67 = ((x5649<<x5650)<=(x5651*x5652));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x5697 = UINT32_MAX;
	uint16_t x5698 = 0U;
	uint64_t x5699 = 35069904698486812LLU;
	int16_t x5700 = -1;
	volatile int32_t t68 = -18;

	t68 = ((x5697<<x5698)<=(x5699*x5700));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x5925 = UINT64_MAX;
	int8_t x5926 = 3;
	volatile int16_t x5927 = -1;
	static uint64_t x5928 = 2010454850066731LLU;
	volatile int32_t t69 = -15714239;

	t69 = ((x5925<<x5926)<=(x5927*x5928));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5982 = 25U;
	static volatile int8_t x5983 = -1;
	int64_t x5984 = -1LL;

	t70 = ((x5981<<x5982)<=(x5983*x5984));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x6057 = INT16_MAX;
	uint16_t x6058 = 1U;
	volatile int8_t x6059 = 1;
	static int64_t x6060 = -16867026091LL;

	t71 = ((x6057<<x6058)<=(x6059*x6060));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x6085 = UINT64_MAX;
	uint8_t x6086 = 3U;
	int16_t x6087 = INT16_MAX;
	static volatile int32_t t72 = 1008;

	t72 = ((x6085<<x6086)<=(x6087*x6088));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x6133 = 20569645LLU;
	static uint8_t x6134 = 3U;
	volatile uint32_t x6135 = UINT32_MAX;
	volatile int16_t x6136 = INT16_MIN;

	t73 = ((x6133<<x6134)<=(x6135*x6136));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x6257 = INT8_MAX;
	uint16_t x6258 = 24U;
	volatile uint64_t x6259 = 105480LLU;
	static volatile int32_t t74 = -8;

	t74 = ((x6257<<x6258)<=(x6259*x6260));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x6413 = 11517U;
	volatile int16_t x6414 = 0;
	uint64_t x6415 = UINT64_MAX;
	volatile int32_t t75 = 82;

	t75 = ((x6413<<x6414)<=(x6415*x6416));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x6426 = 2;
	int32_t x6427 = 143781;
	int8_t x6428 = INT8_MIN;
	volatile int32_t t76 = -108434;

	t76 = ((x6425<<x6426)<=(x6427*x6428));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x6429 = 298232LL;
	int16_t x6430 = 26;
	static int64_t x6432 = -113479450435LL;
	static volatile int32_t t77 = 20666;

	t77 = ((x6429<<x6430)<=(x6431*x6432));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x6445 = INT64_MAX;
	int16_t x6446 = 0;
	static uint8_t x6447 = UINT8_MAX;
	static uint16_t x6448 = 4U;
	volatile int32_t t78 = 4;

	t78 = ((x6445<<x6446)<=(x6447*x6448));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x6577 = INT16_MAX;
	static int8_t x6578 = 1;
	volatile uint64_t x6580 = 494485873302LLU;

	t79 = ((x6577<<x6578)<=(x6579*x6580));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x6585 = 1;
	static int8_t x6586 = 29;
	uint16_t x6588 = 1U;
	int32_t t80 = 37;

	t80 = ((x6585<<x6586)<=(x6587*x6588));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x6605 = UINT32_MAX;
	static uint8_t x6606 = 1U;
	uint32_t x6607 = 8142U;
	int32_t x6608 = -1;
	int32_t t81 = -1;

	t81 = ((x6605<<x6606)<=(x6607*x6608));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x6633 = INT8_MAX;
	uint8_t x6635 = 6U;
	volatile int32_t x6636 = -255691054;
	volatile int32_t t82 = -2;

	t82 = ((x6633<<x6634)<=(x6635*x6636));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x6685 = 11;
	static int64_t x6686 = 6LL;
	static int32_t x6687 = -1;

	t83 = ((x6685<<x6686)<=(x6687*x6688));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x6825 = UINT64_MAX;
	int64_t x6826 = 13LL;
	int16_t x6827 = -5;
	int32_t t84 = -1;

	t84 = ((x6825<<x6826)<=(x6827*x6828));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6981 = 11LLU;
	uint8_t x6982 = 8U;
	uint64_t x6983 = UINT64_MAX;
	volatile int64_t x6984 = 277LL;
	int32_t t85 = -58896535;

	t85 = ((x6981<<x6982)<=(x6983*x6984));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x7018 = 0;
	uint64_t x7019 = 456915976439093LLU;
	static int32_t x7020 = 45484853;
	static int32_t t86 = -3472;

	t86 = ((x7017<<x7018)<=(x7019*x7020));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x7041 = 31;
	static uint8_t x7042 = 13U;
	static uint16_t x7044 = 23328U;
	static volatile int32_t t87 = 0;

	t87 = ((x7041<<x7042)<=(x7043*x7044));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x7133 = 5308781734LLU;
	uint8_t x7134 = 59U;
	volatile int32_t t88 = -52857404;

	t88 = ((x7133<<x7134)<=(x7135*x7136));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x7245 = UINT32_MAX;
	static int16_t x7246 = 13;
	int32_t x7248 = INT32_MAX;
	int32_t t89 = -641743;

	t89 = ((x7245<<x7246)<=(x7247*x7248));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x7358 = 0U;
	static volatile uint8_t x7360 = 6U;
	volatile int32_t t90 = 4763;

	t90 = ((x7357<<x7358)<=(x7359*x7360));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x7749 = 16U;
	static uint8_t x7750 = 4U;
	uint16_t x7751 = 1092U;
	int8_t x7752 = 3;

	t91 = ((x7749<<x7750)<=(x7751*x7752));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x7762 = 11;
	static volatile int16_t x7764 = -1;
	int32_t t92 = 520710;

	t92 = ((x7761<<x7762)<=(x7763*x7764));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x8005 = 36;
	static volatile uint32_t x8007 = 18U;
	int32_t x8008 = -1;
	volatile int32_t t93 = 0;

	t93 = ((x8005<<x8006)<=(x8007*x8008));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x8109 = 0;
	static int64_t x8111 = 457411LL;
	volatile int32_t x8112 = -1;
	static int32_t t94 = -1;

	t94 = ((x8109<<x8110)<=(x8111*x8112));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x8173 = 23U;
	volatile int16_t x8175 = -1;
	static volatile int16_t x8176 = -1;
	int32_t t95 = 491;

	t95 = ((x8173<<x8174)<=(x8175*x8176));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x8237 = INT16_MAX;
	static uint8_t x8238 = 2U;
	uint32_t x8240 = UINT32_MAX;
	volatile int32_t t96 = 4714;

	t96 = ((x8237<<x8238)<=(x8239*x8240));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x8245 = UINT64_MAX;
	int32_t x8248 = INT32_MIN;

	t97 = ((x8245<<x8246)<=(x8247*x8248));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x8261 = UINT16_MAX;
	uint32_t x8262 = 3U;
	int32_t x8263 = 29203;
	int8_t x8264 = INT8_MIN;
	int32_t t98 = 48;

	t98 = ((x8261<<x8262)<=(x8263*x8264));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x8341 = 0;
	int32_t x8342 = 3;
	volatile uint64_t x8343 = UINT64_MAX;
	int16_t x8344 = 831;
	volatile int32_t t99 = -335606;

	t99 = ((x8341<<x8342)<=(x8343*x8344));

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

