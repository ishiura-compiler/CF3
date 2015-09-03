#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x39 = 10LLU;
volatile int32_t x189 = 4;
int8_t x191 = 25;
static uint8_t x314 = UINT8_MAX;
int64_t x319 = 4LL;
static int64_t t6 = -528424229822020973LL;
volatile uint16_t x344 = 1U;
uint32_t x403 = 91117928U;
int32_t x445 = -24768064;
uint8_t x447 = 2U;
uint8_t x660 = 63U;
int16_t x814 = -1;
int16_t x1008 = 2;
uint64_t x1229 = 115760593779LLU;
uint64_t x1231 = 75168795762LLU;
int8_t x1240 = 4;
static int8_t x1309 = INT8_MIN;
static uint32_t x1311 = UINT32_MAX;
volatile uint8_t x1336 = 2U;
volatile int32_t t20 = 1953;
int16_t x1534 = INT16_MAX;
volatile uint64_t t21 = 86848084091LLU;
uint64_t x1563 = UINT64_MAX;
uint8_t x1564 = 31U;
uint32_t x1730 = 64934U;
volatile uint64_t x1750 = 78588832107LLU;
static int32_t x1762 = -13073;
int32_t x1780 = 6;
uint8_t x2032 = 6U;
uint8_t x2284 = 4U;
int64_t x2377 = 416356825755LL;
static int8_t x2378 = -29;
volatile uint64_t t31 = 247LLU;
static uint32_t x2697 = 18943U;
int8_t x2837 = -1;
static uint32_t x2839 = 193U;
static volatile uint64_t x2913 = 4623246987324135614LLU;
int32_t x2914 = INT32_MIN;
static uint8_t x2916 = 12U;
int64_t x2918 = INT64_MIN;
static uint64_t t39 = 21694944611372365LLU;
int64_t x3042 = INT64_MAX;
uint16_t x3044 = 1U;
int64_t x3409 = INT64_MIN;
int64_t t45 = -138411993LL;
uint8_t x3448 = 8U;
int16_t x3466 = 106;
int16_t x3609 = INT16_MIN;
uint8_t x3724 = 1U;
int8_t x3733 = INT8_MAX;
static int32_t x3761 = INT32_MIN;
int32_t x3762 = INT32_MAX;
int16_t x3764 = 1;
static int64_t t54 = 1076LL;
uint32_t x3799 = UINT32_MAX;
static int16_t x3953 = -1;
uint32_t x3975 = UINT32_MAX;
static volatile uint64_t t59 = 937910LLU;
uint32_t x4053 = 9U;
volatile int64_t x4066 = -1LL;
int32_t t64 = 201815;
uint16_t x4192 = 1U;
int16_t x4229 = INT16_MIN;
int8_t x4230 = INT8_MAX;
int8_t x4232 = 3;
int64_t x4441 = -1LL;
int32_t x4442 = INT32_MAX;
int8_t x4762 = -34;
volatile int32_t t71 = 7;
int8_t x4825 = -1;
int16_t x4826 = INT16_MIN;
uint32_t x4864 = 8U;
static volatile int8_t x4891 = 1;
int64_t x5162 = INT64_MIN;
int32_t x5164 = 2;
volatile int64_t t82 = -512975LL;
int64_t x5621 = -1LL;
volatile uint32_t x5623 = 988000122U;
uint16_t x5705 = 69U;
int32_t t88 = 119;
int64_t x5745 = INT64_MIN;
static int32_t x5747 = 793899;
uint64_t x5905 = 653206534LLU;
int16_t x6013 = INT16_MIN;
uint64_t t93 = 1488LLU;
int8_t x6327 = 24;
volatile int32_t t95 = -2320291;


void f0(void) {
	static int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	uint16_t x40 = 14U;
	volatile uint64_t t0 = 1LLU;

	t0 = ((x37%x38)%(x39<<x40));

	if (t0 != 65408LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x141 = 0;
	volatile int32_t x142 = INT32_MIN;
	uint16_t x143 = 15349U;
	int8_t x144 = 1;
	volatile int32_t t1 = 1;

	t1 = ((x141%x142)%(x143<<x144));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x190 = 2LLU;
	int8_t x192 = 0;
	uint64_t t2 = 1241684094469882LLU;

	t2 = ((x189%x190)%(x191<<x192));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x253 = INT64_MIN;
	int16_t x254 = -26;
	uint32_t x255 = 108484552U;
	static int8_t x256 = 0;
	int64_t t3 = 2482699LL;

	t3 = ((x253%x254)%(x255<<x256));

	if (t3 != -8LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = 45;
	uint64_t x299 = UINT64_MAX;
	int8_t x300 = 2;
	uint64_t t4 = 3817787LLU;

	t4 = ((x297%x298)%(x299<<x300));

	if (t4 != 15LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x313 = -3385;
	uint16_t x315 = 212U;
	int32_t x316 = 2;
	volatile int32_t t5 = 6;

	t5 = ((x313%x314)%(x315<<x316));

	if (t5 != -70) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x317 = UINT16_MAX;
	int64_t x318 = INT64_MIN;
	uint16_t x320 = 13U;

	t6 = ((x317%x318)%(x319<<x320));

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x341 = 0;
	static int32_t x342 = INT32_MIN;
	static uint16_t x343 = 10U;
	volatile int32_t t7 = -28538803;

	t7 = ((x341%x342)%(x343<<x344));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x401 = 16009978;
	int32_t x402 = INT32_MIN;
	int32_t x404 = 0;
	volatile uint32_t t8 = 8U;

	t8 = ((x401%x402)%(x403<<x404));

	if (t8 != 16009978U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x446 = INT32_MIN;
	volatile int8_t x448 = 0;
	volatile int32_t t9 = 504783;

	t9 = ((x445%x446)%(x447<<x448));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x449 = -16232LL;
	int8_t x450 = INT8_MAX;
	int16_t x451 = 1;
	uint8_t x452 = 8U;
	volatile int64_t t10 = -2152580150773705538LL;

	t10 = ((x449%x450)%(x451<<x452));

	if (t10 != -103LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x493 = INT64_MIN;
	volatile int64_t x494 = -1399900LL;
	int64_t x495 = 422496422964LL;
	volatile uint16_t x496 = 0U;
	int64_t t11 = 32021699974996377LL;

	t11 = ((x493%x494)%(x495<<x496));

	if (t11 != -1304608LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x657 = -1LL;
	static int16_t x658 = 1;
	volatile uint64_t x659 = UINT64_MAX;
	static uint64_t t12 = 279602133LLU;

	t12 = ((x657%x658)%(x659<<x660));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x813 = 58U;
	uint8_t x815 = 3U;
	uint16_t x816 = 15U;
	int32_t t13 = -1367324;

	t13 = ((x813%x814)%(x815<<x816));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x1005 = -1LL;
	static int64_t x1006 = -1LL;
	volatile uint8_t x1007 = UINT8_MAX;
	volatile int64_t t14 = 4895LL;

	t14 = ((x1005%x1006)%(x1007<<x1008));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1113 = 1U;
	volatile int16_t x1114 = 77;
	uint32_t x1115 = 21U;
	uint8_t x1116 = 2U;
	static volatile uint32_t t15 = 7396491U;

	t15 = ((x1113%x1114)%(x1115<<x1116));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x1230 = UINT64_MAX;
	volatile uint8_t x1232 = 1U;
	uint64_t t16 = 25121633941314LLU;

	t16 = ((x1229%x1230)%(x1231<<x1232));

	if (t16 != 115760593779LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x1237 = -1536429;
	static int32_t x1238 = INT32_MIN;
	volatile uint32_t x1239 = UINT32_MAX;
	uint32_t t17 = 1966482306U;

	t17 = ((x1237%x1238)%(x1239<<x1240));

	if (t17 != 4293430867U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1310 = 80U;
	volatile uint8_t x1312 = 0U;
	uint32_t t18 = 447626U;

	t18 = ((x1309%x1310)%(x1311<<x1312));

	if (t18 != 4294967248U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1333 = 39;
	int64_t x1334 = 587491982863338160LL;
	uint32_t x1335 = 38649884U;
	int64_t t19 = 157267145877905LL;

	t19 = ((x1333%x1334)%(x1335<<x1336));

	if (t19 != 39LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1381 = INT32_MIN;
	int32_t x1382 = INT32_MAX;
	uint8_t x1383 = UINT8_MAX;
	uint8_t x1384 = 7U;

	t20 = ((x1381%x1382)%(x1383<<x1384));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1533 = 35U;
	uint64_t x1535 = UINT64_MAX;
	volatile uint16_t x1536 = 58U;

	t21 = ((x1533%x1534)%(x1535<<x1536));

	if (t21 != 35LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1561 = 5;
	int16_t x1562 = -1;
	uint64_t t22 = 634704979765813827LLU;

	t22 = ((x1561%x1562)%(x1563<<x1564));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1729 = INT32_MIN;
	uint32_t x1731 = 1382413U;
	int8_t x1732 = 31;
	volatile uint32_t t23 = 9926730U;

	t23 = ((x1729%x1730)%(x1731<<x1732));

	if (t23 != 51334U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1749 = 35U;
	int16_t x1751 = 4335;
	int32_t x1752 = 6;
	uint64_t t24 = 5162049LLU;

	t24 = ((x1749%x1750)%(x1751<<x1752));

	if (t24 != 35LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1761 = 24369U;
	uint64_t x1763 = 33945356608LLU;
	static int8_t x1764 = 0;
	uint64_t t25 = 245970554LLU;

	t25 = ((x1761%x1762)%(x1763<<x1764));

	if (t25 != 24369LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1777 = 24;
	int16_t x1778 = -1;
	static volatile uint16_t x1779 = 85U;
	int32_t t26 = 999;

	t26 = ((x1777%x1778)%(x1779<<x1780));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2029 = 0U;
	int8_t x2030 = INT8_MIN;
	static uint16_t x2031 = 12U;
	static volatile int32_t t27 = 969863;

	t27 = ((x2029%x2030)%(x2031<<x2032));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2181 = INT32_MIN;
	uint16_t x2182 = 41U;
	volatile uint16_t x2183 = 15U;
	static uint32_t x2184 = 1U;
	volatile int32_t t28 = -759087447;

	t28 = ((x2181%x2182)%(x2183<<x2184));

	if (t28 != -9) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2281 = -1;
	uint16_t x2282 = UINT16_MAX;
	volatile uint8_t x2283 = 3U;
	int32_t t29 = -144;

	t29 = ((x2281%x2282)%(x2283<<x2284));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2285 = UINT64_MAX;
	volatile uint64_t x2286 = 36956192414LLU;
	static volatile uint32_t x2287 = UINT32_MAX;
	uint64_t x2288 = 1LLU;
	volatile uint64_t t30 = 42021702871LLU;

	t30 = ((x2285%x2286)%(x2287<<x2288));

	if (t30 != 631056185LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2379 = 2402383181LLU;
	static volatile uint8_t x2380 = 41U;

	t31 = ((x2377%x2378)%(x2379<<x2380));

	if (t31 != 17LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2385 = 2622756LLU;
	static int64_t x2386 = INT64_MIN;
	uint32_t x2387 = UINT32_MAX;
	uint8_t x2388 = 1U;
	static volatile uint64_t t32 = 24LLU;

	t32 = ((x2385%x2386)%(x2387<<x2388));

	if (t32 != 2622756LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x2449 = INT8_MIN;
	uint64_t x2450 = UINT64_MAX;
	uint64_t x2451 = UINT64_MAX;
	static volatile uint32_t x2452 = 31U;
	volatile uint64_t t33 = 3229780LLU;

	t33 = ((x2449%x2450)%(x2451<<x2452));

	if (t33 != 2147483520LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x2698 = INT8_MAX;
	int16_t x2699 = 1;
	int8_t x2700 = 0;
	volatile uint32_t t34 = 93U;

	t34 = ((x2697%x2698)%(x2699<<x2700));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2838 = INT64_MIN;
	int8_t x2840 = 2;
	static volatile int64_t t35 = -14744395392LL;

	t35 = ((x2837%x2838)%(x2839<<x2840));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x2915 = 20283919U;
	volatile uint64_t t36 = 1614LLU;

	t36 = ((x2913%x2914)%(x2915<<x2916));

	if (t36 != 1417345214LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2917 = INT16_MAX;
	int8_t x2919 = 1;
	static uint8_t x2920 = 0U;
	volatile int64_t t37 = -831837710801396196LL;

	t37 = ((x2917%x2918)%(x2919<<x2920));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2929 = 9U;
	uint64_t x2930 = 956351934LLU;
	uint8_t x2931 = 1U;
	static uint16_t x2932 = 1U;
	static uint64_t t38 = 41393752LLU;

	t38 = ((x2929%x2930)%(x2931<<x2932));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3037 = INT32_MIN;
	static int32_t x3038 = 15690;
	uint64_t x3039 = 181552LLU;
	static uint32_t x3040 = 2U;

	t39 = ((x3037%x3038)%(x3039<<x3040));

	if (t39 != 298418LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3041 = 96572303LLU;
	volatile uint32_t x3043 = 3U;
	volatile uint64_t t40 = 981LLU;

	t40 = ((x3041%x3042)%(x3043<<x3044));

	if (t40 != 5LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3153 = UINT8_MAX;
	uint16_t x3154 = UINT16_MAX;
	uint32_t x3155 = 78U;
	int8_t x3156 = 7;
	uint32_t t41 = 3983668U;

	t41 = ((x3153%x3154)%(x3155<<x3156));

	if (t41 != 255U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x3225 = INT16_MAX;
	static int8_t x3226 = -1;
	volatile uint8_t x3227 = 4U;
	uint16_t x3228 = 0U;
	volatile int32_t t42 = 56581181;

	t42 = ((x3225%x3226)%(x3227<<x3228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x3253 = INT32_MIN;
	static volatile int64_t x3254 = INT64_MIN;
	static volatile int8_t x3255 = INT8_MAX;
	int8_t x3256 = 1;
	volatile int64_t t43 = -1192203788288731LL;

	t43 = ((x3253%x3254)%(x3255<<x3256));

	if (t43 != -8LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x3405 = -8666;
	uint32_t x3406 = UINT32_MAX;
	volatile int8_t x3407 = 15;
	int16_t x3408 = 0;
	volatile uint32_t t44 = 25028U;

	t44 = ((x3405%x3406)%(x3407<<x3408));

	if (t44 != 5U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3410 = INT8_MAX;
	uint16_t x3411 = 2U;
	volatile uint16_t x3412 = 11U;

	t45 = ((x3409%x3410)%(x3411<<x3412));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x3437 = INT16_MIN;
	int16_t x3438 = -2074;
	uint8_t x3439 = 7U;
	static volatile uint8_t x3440 = 0U;
	int32_t t46 = 370;

	t46 = ((x3437%x3438)%(x3439<<x3440));

	if (t46 != -6) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3445 = 1;
	uint32_t x3446 = 103U;
	uint8_t x3447 = 13U;
	uint32_t t47 = 9683U;

	t47 = ((x3445%x3446)%(x3447<<x3448));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3465 = INT16_MIN;
	uint64_t x3467 = 45050058822004618LLU;
	static uint8_t x3468 = 56U;
	uint64_t t48 = 138681744LLU;

	t48 = ((x3465%x3466)%(x3467<<x3468));

	if (t48 != 8502796096475496434LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3610 = 168271U;
	uint64_t x3611 = 210072852095886042LLU;
	static uint64_t x3612 = 9LLU;
	static volatile uint64_t t49 = 3973LLU;

	t49 = ((x3609%x3610)%(x3611<<x3612));

	if (t49 != 153795LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x3721 = 8951627U;
	static volatile int8_t x3722 = INT8_MIN;
	uint32_t x3723 = UINT32_MAX;
	volatile uint32_t t50 = 1403U;

	t50 = ((x3721%x3722)%(x3723<<x3724));

	if (t50 != 8951627U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3729 = INT64_MIN;
	static int64_t x3730 = INT64_MAX;
	static int32_t x3731 = 146496536;
	static volatile uint8_t x3732 = 0U;
	static volatile int64_t t51 = -295226616379LL;

	t51 = ((x3729%x3730)%(x3731<<x3732));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3734 = 66LLU;
	volatile int16_t x3735 = INT16_MAX;
	uint8_t x3736 = 2U;
	volatile uint64_t t52 = 1283754340042LLU;

	t52 = ((x3733%x3734)%(x3735<<x3736));

	if (t52 != 61LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3763 = INT8_MAX;
	volatile int32_t t53 = -148;

	t53 = ((x3761%x3762)%(x3763<<x3764));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3781 = INT64_MIN;
	volatile int32_t x3782 = INT32_MAX;
	uint8_t x3783 = UINT8_MAX;
	int16_t x3784 = 3;

	t54 = ((x3781%x3782)%(x3783<<x3784));

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3797 = -1LL;
	static int16_t x3798 = INT16_MAX;
	uint16_t x3800 = 2U;
	static volatile int64_t t55 = 11624184LL;

	t55 = ((x3797%x3798)%(x3799<<x3800));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3954 = -1;
	static int32_t x3955 = 74729986;
	static int16_t x3956 = 1;
	volatile int32_t t56 = -24382;

	t56 = ((x3953%x3954)%(x3955<<x3956));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3973 = 661295135U;
	volatile int32_t x3974 = INT32_MAX;
	uint32_t x3976 = 4U;
	uint32_t t57 = 17273533U;

	t57 = ((x3973%x3974)%(x3975<<x3976));

	if (t57 != 661295135U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x4005 = -1;
	static uint64_t x4006 = UINT64_MAX;
	int8_t x4007 = INT8_MAX;
	uint64_t x4008 = 3LLU;
	static volatile uint64_t t58 = 3398562499786299LLU;

	t58 = ((x4005%x4006)%(x4007<<x4008));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x4013 = -1LL;
	static uint32_t x4014 = 30386U;
	volatile uint64_t x4015 = UINT64_MAX;
	int8_t x4016 = 0;

	t59 = ((x4013%x4014)%(x4015<<x4016));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x4054 = 472U;
	static volatile uint64_t x4055 = 37965691170LLU;
	uint8_t x4056 = 9U;
	uint64_t t60 = 564480LLU;

	t60 = ((x4053%x4054)%(x4055<<x4056));

	if (t60 != 9LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x4065 = INT8_MIN;
	uint64_t x4067 = 1867417LLU;
	volatile int16_t x4068 = 0;
	volatile uint64_t t61 = 2173508591807513LLU;

	t61 = ((x4065%x4066)%(x4067<<x4068));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x4101 = INT64_MIN;
	int32_t x4102 = INT32_MAX;
	volatile int16_t x4103 = 3;
	static int64_t x4104 = 1LL;
	int64_t t62 = -16LL;

	t62 = ((x4101%x4102)%(x4103<<x4104));

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4137 = UINT32_MAX;
	int8_t x4138 = INT8_MAX;
	uint8_t x4139 = UINT8_MAX;
	int8_t x4140 = 0;
	volatile uint32_t t63 = 25279U;

	t63 = ((x4137%x4138)%(x4139<<x4140));

	if (t63 != 15U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x4173 = 16803U;
	uint16_t x4174 = UINT16_MAX;
	uint8_t x4175 = 3U;
	volatile int8_t x4176 = 0;

	t64 = ((x4173%x4174)%(x4175<<x4176));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4189 = 12604U;
	int8_t x4190 = -1;
	static volatile uint8_t x4191 = 81U;
	static volatile int32_t t65 = -1695;

	t65 = ((x4189%x4190)%(x4191<<x4192));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4197 = INT32_MAX;
	static volatile int64_t x4198 = -1LL;
	int8_t x4199 = INT8_MAX;
	int8_t x4200 = 16;
	int64_t t66 = 1085658170881014957LL;

	t66 = ((x4197%x4198)%(x4199<<x4200));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x4231 = INT16_MAX;
	volatile int32_t t67 = -9254;

	t67 = ((x4229%x4230)%(x4231<<x4232));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x4443 = 6236U;
	volatile uint8_t x4444 = 2U;
	int64_t t68 = 217769640LL;

	t68 = ((x4441%x4442)%(x4443<<x4444));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4601 = UINT8_MAX;
	volatile int64_t x4602 = -1LL;
	static int8_t x4603 = INT8_MAX;
	static uint32_t x4604 = 1U;
	volatile int64_t t69 = 42696785680LL;

	t69 = ((x4601%x4602)%(x4603<<x4604));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x4761 = INT64_MIN;
	uint64_t x4763 = UINT64_MAX;
	volatile uint8_t x4764 = 0U;
	uint64_t t70 = 64LLU;

	t70 = ((x4761%x4762)%(x4763<<x4764));

	if (t70 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4769 = INT16_MIN;
	volatile int16_t x4770 = INT16_MIN;
	static volatile uint16_t x4771 = 5102U;
	int16_t x4772 = 1;

	t71 = ((x4769%x4770)%(x4771<<x4772));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4781 = 483;
	static int16_t x4782 = INT16_MIN;
	static uint64_t x4783 = UINT64_MAX;
	int16_t x4784 = 1;
	static volatile uint64_t t72 = 16LLU;

	t72 = ((x4781%x4782)%(x4783<<x4784));

	if (t72 != 483LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x4801 = INT16_MAX;
	int16_t x4802 = INT16_MAX;
	int32_t x4803 = 470;
	uint8_t x4804 = 19U;
	int32_t t73 = -1;

	t73 = ((x4801%x4802)%(x4803<<x4804));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4827 = UINT8_MAX;
	int16_t x4828 = 2;
	static int32_t t74 = 3306377;

	t74 = ((x4825%x4826)%(x4827<<x4828));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4861 = 468941933996825LLU;
	volatile uint8_t x4862 = 2U;
	int8_t x4863 = 7;
	uint64_t t75 = 83284LLU;

	t75 = ((x4861%x4862)%(x4863<<x4864));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4889 = 13U;
	int32_t x4890 = -356985;
	int8_t x4892 = 10;
	int32_t t76 = 373404810;

	t76 = ((x4889%x4890)%(x4891<<x4892));

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4949 = INT16_MAX;
	static int64_t x4950 = -1LL;
	volatile int8_t x4951 = 1;
	int16_t x4952 = 1;
	int64_t t77 = -1441551321718LL;

	t77 = ((x4949%x4950)%(x4951<<x4952));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x4989 = UINT8_MAX;
	volatile int64_t x4990 = -1LL;
	uint32_t x4991 = 312053U;
	volatile uint16_t x4992 = 4U;
	volatile int64_t t78 = 1170930590497LL;

	t78 = ((x4989%x4990)%(x4991<<x4992));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5061 = INT32_MIN;
	int16_t x5062 = INT16_MIN;
	uint64_t x5063 = UINT64_MAX;
	volatile uint8_t x5064 = 1U;
	static volatile uint64_t t79 = 7999141693201839323LLU;

	t79 = ((x5061%x5062)%(x5063<<x5064));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5097 = INT64_MAX;
	static int8_t x5098 = INT8_MIN;
	uint8_t x5099 = 2U;
	volatile uint8_t x5100 = 13U;
	volatile int64_t t80 = 968LL;

	t80 = ((x5097%x5098)%(x5099<<x5100));

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5149 = -1;
	static int16_t x5150 = INT16_MIN;
	uint32_t x5151 = 107469U;
	int8_t x5152 = 0;
	static volatile uint32_t t81 = 4U;

	t81 = ((x5149%x5150)%(x5151<<x5152));

	if (t81 != 76179U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5161 = INT64_MAX;
	static uint32_t x5163 = 86649133U;

	t82 = ((x5161%x5162)%(x5163<<x5164));

	if (t82 != 149950795LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5197 = INT64_MIN;
	int32_t x5198 = INT32_MAX;
	uint32_t x5199 = UINT32_MAX;
	uint64_t x5200 = 1LLU;
	static int64_t t83 = -2098295193837172LL;

	t83 = ((x5197%x5198)%(x5199<<x5200));

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5317 = -146178LL;
	volatile int8_t x5318 = INT8_MIN;
	int64_t x5319 = 977555847938LL;
	uint16_t x5320 = 12U;
	volatile int64_t t84 = 635295000LL;

	t84 = ((x5317%x5318)%(x5319<<x5320));

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5357 = UINT16_MAX;
	volatile int64_t x5358 = 38341LL;
	uint32_t x5359 = UINT32_MAX;
	int8_t x5360 = 0;
	static volatile int64_t t85 = 353LL;

	t85 = ((x5357%x5358)%(x5359<<x5360));

	if (t85 != 27194LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5617 = INT8_MIN;
	int8_t x5618 = INT8_MIN;
	static int16_t x5619 = INT16_MAX;
	uint8_t x5620 = 8U;
	int32_t t86 = 313472;

	t86 = ((x5617%x5618)%(x5619<<x5620));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5622 = -1;
	int16_t x5624 = 28;
	int64_t t87 = 99525317371424LL;

	t87 = ((x5621%x5622)%(x5623<<x5624));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x5706 = INT8_MIN;
	int8_t x5707 = INT8_MAX;
	uint64_t x5708 = 0LLU;

	t88 = ((x5705%x5706)%(x5707<<x5708));

	if (t88 != 69) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5746 = 420U;
	static uint8_t x5748 = 1U;
	volatile int64_t t89 = -8786840LL;

	t89 = ((x5745%x5746)%(x5747<<x5748));

	if (t89 != -8LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x5906 = INT8_MIN;
	static uint8_t x5907 = 3U;
	static volatile uint32_t x5908 = 0U;
	volatile uint64_t t90 = 305452318908615LLU;

	t90 = ((x5905%x5906)%(x5907<<x5908));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6014 = -1LL;
	uint16_t x6015 = 1441U;
	static volatile uint8_t x6016 = 0U;
	int64_t t91 = -282676998888679621LL;

	t91 = ((x6013%x6014)%(x6015<<x6016));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6017 = INT64_MAX;
	int64_t x6018 = INT64_MAX;
	volatile int8_t x6019 = INT8_MAX;
	int32_t x6020 = 1;
	int64_t t92 = -31719702596192185LL;

	t92 = ((x6017%x6018)%(x6019<<x6020));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6081 = -1;
	int8_t x6082 = 2;
	volatile uint64_t x6083 = UINT64_MAX;
	static uint32_t x6084 = 17U;

	t93 = ((x6081%x6082)%(x6083<<x6084));

	if (t93 != 131071LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6325 = INT64_MAX;
	static uint64_t x6326 = 2827746LLU;
	static uint8_t x6328 = 1U;
	volatile uint64_t t94 = 345867LLU;

	t94 = ((x6325%x6326)%(x6327<<x6328));

	if (t94 != 37LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6369 = -1;
	static volatile int16_t x6370 = -1;
	uint16_t x6371 = 1446U;
	volatile int16_t x6372 = 3;

	t95 = ((x6369%x6370)%(x6371<<x6372));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x6397 = UINT16_MAX;
	static int64_t x6398 = INT64_MAX;
	int8_t x6399 = 1;
	volatile int8_t x6400 = 0;
	static volatile int64_t t96 = -461325LL;

	t96 = ((x6397%x6398)%(x6399<<x6400));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6421 = -2699635LL;
	uint8_t x6422 = 5U;
	int32_t x6423 = INT32_MAX;
	volatile int32_t x6424 = 0;
	volatile int64_t t97 = 790354758LL;

	t97 = ((x6421%x6422)%(x6423<<x6424));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6433 = -1LL;
	int16_t x6434 = INT16_MAX;
	uint16_t x6435 = UINT16_MAX;
	uint16_t x6436 = 13U;
	int64_t t98 = 61819355559464263LL;

	t98 = ((x6433%x6434)%(x6435<<x6436));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6469 = 19LLU;
	volatile int32_t x6470 = 2;
	uint8_t x6471 = UINT8_MAX;
	volatile int8_t x6472 = 20;
	static uint64_t t99 = 1646877126011LLU;

	t99 = ((x6469%x6470)%(x6471<<x6472));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

