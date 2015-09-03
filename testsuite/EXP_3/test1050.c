#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x205 = -11;
int8_t x206 = INT8_MAX;
int32_t t1 = 61753;
volatile int8_t x384 = 7;
static volatile int32_t t3 = -1;
uint32_t x667 = UINT32_MAX;
int8_t x668 = 15;
uint64_t x745 = 38723511080LLU;
int32_t x758 = -55;
volatile uint8_t x759 = 1U;
uint8_t x760 = 8U;
int8_t x1013 = -1;
uint8_t x1016 = 7U;
volatile int8_t x1298 = -1;
int8_t x1305 = INT8_MIN;
int32_t x1307 = INT32_MAX;
volatile int32_t t12 = 5335;
uint16_t x1722 = UINT16_MAX;
static uint16_t x1797 = 30312U;
int64_t x1927 = 189883818050LL;
int64_t x2086 = 245105911365990375LL;
int16_t x2088 = 11;
int16_t x2154 = INT16_MIN;
uint64_t x2397 = UINT64_MAX;
int8_t x2400 = 11;
uint64_t x2863 = 32572282LLU;
static int64_t x3045 = INT64_MIN;
static int8_t x3178 = INT8_MIN;
uint8_t x3198 = 5U;
uint16_t x3200 = 2U;
uint32_t x3347 = 32331U;
volatile int8_t x3348 = 0;
volatile int32_t t29 = 1426695;
uint64_t x3470 = 132509165639LLU;
int8_t x3471 = INT8_MAX;
uint64_t x3501 = 393977330LLU;
volatile int32_t x3503 = INT32_MAX;
volatile int32_t x3530 = INT32_MIN;
int16_t x3606 = INT16_MAX;
static volatile uint32_t x3745 = 73705U;
uint8_t x3797 = UINT8_MAX;
int16_t x3829 = INT16_MIN;
uint16_t x3832 = 1U;
uint64_t x3834 = UINT64_MAX;
int8_t x3836 = 1;
int32_t x3845 = -1;
volatile int32_t t39 = -21;
uint8_t x3924 = 57U;
int16_t x3928 = 16;
uint16_t x3997 = 7U;
static int16_t x4012 = 1;
volatile int32_t t45 = -57875;
uint32_t x4104 = 7U;
volatile uint32_t x4155 = 682U;
int32_t t49 = -401320870;
int32_t x4239 = INT32_MAX;
static int16_t x4478 = -1;
static int8_t x4574 = 0;
int8_t x4705 = INT8_MAX;
int16_t x4707 = INT16_MAX;
static int32_t x4789 = -1;
int64_t x4931 = 3886320LL;
uint64_t x5078 = UINT64_MAX;
static uint64_t x5080 = 13LLU;
uint16_t x5099 = 22587U;
int32_t t61 = -23101;
int8_t x5399 = 18;
static volatile int32_t t62 = 796;
volatile int8_t x5452 = 9;
volatile int32_t x5550 = INT32_MIN;
static volatile int32_t t68 = 48281801;
uint8_t x5657 = 35U;
volatile int64_t x5670 = 872450193557603474LL;
uint64_t x5801 = 27441618049563887LLU;
uint8_t x5841 = UINT8_MAX;
static int8_t x5842 = INT8_MIN;
int8_t x5888 = 2;
int32_t t76 = -1031903347;
int32_t x6169 = -39;
uint8_t x6172 = 0U;
int32_t t79 = 3717;
volatile uint32_t x6299 = 3U;
static uint32_t x6308 = 2U;
static uint32_t x6331 = UINT32_MAX;
uint64_t x6378 = UINT64_MAX;
int32_t x6379 = 6;
uint16_t x6386 = UINT16_MAX;
uint16_t x6387 = 7037U;
uint32_t x6390 = UINT32_MAX;
static volatile int16_t x6406 = INT16_MIN;
static int32_t x6407 = INT32_MAX;
volatile uint8_t x6408 = 1U;
volatile int32_t t87 = 5;
int8_t x6480 = 1;
static uint64_t x6675 = 228192025739533LLU;
static int8_t x6794 = INT8_MAX;
static uint64_t x6838 = UINT64_MAX;
int16_t x7051 = INT16_MAX;
int16_t x7054 = -1;
volatile uint8_t x7066 = 7U;
volatile int32_t t99 = 1;


void f0(void) {
	int8_t x207 = 1;
	static uint16_t x208 = 2U;
	volatile int32_t t0 = 56000;

	t0 = ((x205*x206)<=(x207>>x208));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x265 = 10U;
	int32_t x266 = -1;
	int16_t x267 = 435;
	volatile uint8_t x268 = 30U;

	t1 = ((x265*x266)<=(x267>>x268));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x369 = -1;
	static int32_t x370 = INT32_MAX;
	uint8_t x371 = UINT8_MAX;
	int32_t x372 = 0;
	int32_t t2 = 14150;

	t2 = ((x369*x370)<=(x371>>x372));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x381 = 944;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = 0;

	t3 = ((x381*x382)<=(x383>>x384));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x569 = INT8_MIN;
	int16_t x570 = INT16_MIN;
	static uint8_t x571 = 16U;
	static uint32_t x572 = 3U;
	volatile int32_t t4 = 969219;

	t4 = ((x569*x570)<=(x571>>x572));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x665 = 1801U;
	int16_t x666 = INT16_MIN;
	int32_t t5 = -6455027;

	t5 = ((x665*x666)<=(x667>>x668));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x746 = -1;
	static volatile uint8_t x747 = UINT8_MAX;
	int8_t x748 = 1;
	volatile int32_t t6 = -63865;

	t6 = ((x745*x746)<=(x747>>x748));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x757 = 10U;
	int32_t t7 = 627733;

	t7 = ((x757*x758)<=(x759>>x760));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x1014 = -1;
	static int16_t x1015 = INT16_MAX;
	int32_t t8 = -50;

	t8 = ((x1013*x1014)<=(x1015>>x1016));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x1297 = -160460175410927937LL;
	uint32_t x1299 = UINT32_MAX;
	volatile uint8_t x1300 = 0U;
	volatile int32_t t9 = 4;

	t9 = ((x1297*x1298)<=(x1299>>x1300));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1306 = INT16_MIN;
	uint8_t x1308 = 1U;
	volatile int32_t t10 = 0;

	t10 = ((x1305*x1306)<=(x1307>>x1308));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x1341 = INT32_MAX;
	int32_t x1342 = -1;
	int8_t x1343 = INT8_MAX;
	static int8_t x1344 = 19;
	static int32_t t11 = -314;

	t11 = ((x1341*x1342)<=(x1343>>x1344));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1621 = INT8_MIN;
	uint32_t x1622 = 447541923U;
	uint32_t x1623 = 1190658U;
	int8_t x1624 = 14;

	t12 = ((x1621*x1622)<=(x1623>>x1624));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1721 = INT8_MIN;
	int64_t x1723 = INT64_MAX;
	int64_t x1724 = 2LL;
	int32_t t13 = -175;

	t13 = ((x1721*x1722)<=(x1723>>x1724));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1798 = 1U;
	uint64_t x1799 = 235817313LLU;
	static uint8_t x1800 = 2U;
	int32_t t14 = -65973484;

	t14 = ((x1797*x1798)<=(x1799>>x1800));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1925 = -1;
	int16_t x1926 = INT16_MAX;
	int8_t x1928 = 0;
	static volatile int32_t t15 = 27922;

	t15 = ((x1925*x1926)<=(x1927>>x1928));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1941 = 159854U;
	int32_t x1942 = INT32_MIN;
	static int64_t x1943 = INT64_MAX;
	static volatile uint8_t x1944 = 1U;
	static int32_t t16 = 2;

	t16 = ((x1941*x1942)<=(x1943>>x1944));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1957 = 0;
	uint32_t x1958 = 282654U;
	int16_t x1959 = 75;
	int8_t x1960 = 0;
	int32_t t17 = 26335;

	t17 = ((x1957*x1958)<=(x1959>>x1960));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x2085 = -1;
	static int32_t x2087 = INT32_MAX;
	static int32_t t18 = -25985;

	t18 = ((x2085*x2086)<=(x2087>>x2088));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x2153 = UINT32_MAX;
	static uint32_t x2155 = 4013U;
	volatile uint16_t x2156 = 4U;
	static int32_t t19 = 15800990;

	t19 = ((x2153*x2154)<=(x2155>>x2156));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x2398 = INT32_MIN;
	uint32_t x2399 = 22716U;
	volatile int32_t t20 = 454;

	t20 = ((x2397*x2398)<=(x2399>>x2400));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x2521 = 1LL;
	int8_t x2522 = 7;
	uint8_t x2523 = 0U;
	uint16_t x2524 = 4U;
	static int32_t t21 = 767;

	t21 = ((x2521*x2522)<=(x2523>>x2524));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x2585 = 1378;
	int8_t x2586 = INT8_MIN;
	uint64_t x2587 = UINT64_MAX;
	static volatile uint16_t x2588 = 2U;
	int32_t t22 = 966527;

	t22 = ((x2585*x2586)<=(x2587>>x2588));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2861 = -531;
	uint64_t x2862 = UINT64_MAX;
	static uint16_t x2864 = 30U;
	volatile int32_t t23 = -4709;

	t23 = ((x2861*x2862)<=(x2863>>x2864));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x2885 = INT16_MIN;
	volatile int64_t x2886 = -1LL;
	int16_t x2887 = INT16_MAX;
	uint8_t x2888 = 9U;
	static int32_t t24 = 0;

	t24 = ((x2885*x2886)<=(x2887>>x2888));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x3046 = 1;
	static int64_t x3047 = INT64_MAX;
	volatile uint32_t x3048 = 0U;
	static int32_t t25 = 159991;

	t25 = ((x3045*x3046)<=(x3047>>x3048));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x3109 = 2U;
	static volatile int16_t x3110 = INT16_MIN;
	volatile int64_t x3111 = INT64_MAX;
	uint8_t x3112 = 0U;
	volatile int32_t t26 = -29877;

	t26 = ((x3109*x3110)<=(x3111>>x3112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x3177 = 5;
	uint8_t x3179 = UINT8_MAX;
	static int32_t x3180 = 0;
	int32_t t27 = 8507794;

	t27 = ((x3177*x3178)<=(x3179>>x3180));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x3197 = 16U;
	volatile uint64_t x3199 = 248648LLU;
	int32_t t28 = -197;

	t28 = ((x3197*x3198)<=(x3199>>x3200));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x3345 = UINT64_MAX;
	volatile int64_t x3346 = -10LL;

	t29 = ((x3345*x3346)<=(x3347>>x3348));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x3469 = 391583LLU;
	uint8_t x3472 = 1U;
	volatile int32_t t30 = -41953459;

	t30 = ((x3469*x3470)<=(x3471>>x3472));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x3502 = -1LL;
	volatile uint8_t x3504 = 5U;
	int32_t t31 = 7485;

	t31 = ((x3501*x3502)<=(x3503>>x3504));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x3529 = 0LL;
	volatile uint64_t x3531 = UINT64_MAX;
	volatile int32_t x3532 = 0;
	volatile int32_t t32 = -3230439;

	t32 = ((x3529*x3530)<=(x3531>>x3532));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x3605 = INT16_MAX;
	uint64_t x3607 = 3134714LLU;
	static int16_t x3608 = 2;
	volatile int32_t t33 = -338496;

	t33 = ((x3605*x3606)<=(x3607>>x3608));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x3746 = 7354;
	uint16_t x3747 = 728U;
	uint16_t x3748 = 1U;
	static volatile int32_t t34 = -29097686;

	t34 = ((x3745*x3746)<=(x3747>>x3748));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x3749 = -1;
	uint32_t x3750 = 61303499U;
	static volatile int64_t x3751 = 4110811714977034LL;
	uint16_t x3752 = 2U;
	int32_t t35 = 293962826;

	t35 = ((x3749*x3750)<=(x3751>>x3752));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x3798 = INT16_MIN;
	volatile uint64_t x3799 = 113120110LLU;
	static uint8_t x3800 = 1U;
	int32_t t36 = -48245;

	t36 = ((x3797*x3798)<=(x3799>>x3800));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x3830 = -930;
	uint8_t x3831 = UINT8_MAX;
	int32_t t37 = 48334431;

	t37 = ((x3829*x3830)<=(x3831>>x3832));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x3833 = INT32_MIN;
	uint32_t x3835 = UINT32_MAX;
	volatile int32_t t38 = -13681;

	t38 = ((x3833*x3834)<=(x3835>>x3836));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x3846 = INT8_MIN;
	uint32_t x3847 = 6966U;
	uint8_t x3848 = 1U;

	t39 = ((x3845*x3846)<=(x3847>>x3848));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x3921 = 26789071733688LLU;
	int32_t x3922 = -37391;
	static uint64_t x3923 = 870693644836583LLU;
	volatile int32_t t40 = -3;

	t40 = ((x3921*x3922)<=(x3923>>x3924));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3925 = -1LL;
	volatile int64_t x3926 = INT64_MAX;
	static volatile uint64_t x3927 = 3196328798LLU;
	volatile int32_t t41 = 94;

	t41 = ((x3925*x3926)<=(x3927>>x3928));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x3965 = INT8_MAX;
	int32_t x3966 = 1;
	static uint16_t x3967 = 4U;
	int16_t x3968 = 0;
	volatile int32_t t42 = -8981;

	t42 = ((x3965*x3966)<=(x3967>>x3968));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x3998 = UINT8_MAX;
	int32_t x3999 = 3978850;
	uint32_t x4000 = 1U;
	volatile int32_t t43 = 61522381;

	t43 = ((x3997*x3998)<=(x3999>>x4000));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x4009 = -10239;
	volatile uint8_t x4010 = 2U;
	uint8_t x4011 = 1U;
	int32_t t44 = -805;

	t44 = ((x4009*x4010)<=(x4011>>x4012));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x4037 = -1;
	uint8_t x4038 = 46U;
	static int64_t x4039 = 635192LL;
	uint16_t x4040 = 0U;

	t45 = ((x4037*x4038)<=(x4039>>x4040));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x4085 = -1LL;
	uint8_t x4086 = UINT8_MAX;
	volatile int32_t x4087 = INT32_MAX;
	int8_t x4088 = 13;
	int32_t t46 = 1;

	t46 = ((x4085*x4086)<=(x4087>>x4088));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x4093 = 27;
	uint32_t x4094 = 581692U;
	int64_t x4095 = 677LL;
	uint64_t x4096 = 9LLU;
	volatile int32_t t47 = -111501886;

	t47 = ((x4093*x4094)<=(x4095>>x4096));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x4101 = INT8_MAX;
	static uint64_t x4102 = UINT64_MAX;
	int64_t x4103 = 113296999LL;
	int32_t t48 = 15251;

	t48 = ((x4101*x4102)<=(x4103>>x4104));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x4153 = UINT64_MAX;
	uint8_t x4154 = 51U;
	int32_t x4156 = 1;

	t49 = ((x4153*x4154)<=(x4155>>x4156));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x4237 = UINT32_MAX;
	int32_t x4238 = 255104574;
	uint8_t x4240 = 7U;
	volatile int32_t t50 = -6987966;

	t50 = ((x4237*x4238)<=(x4239>>x4240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x4317 = -23;
	int8_t x4318 = 5;
	volatile uint8_t x4319 = 1U;
	int8_t x4320 = 1;
	static int32_t t51 = -832;

	t51 = ((x4317*x4318)<=(x4319>>x4320));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4413 = -1;
	int8_t x4414 = -1;
	uint32_t x4415 = UINT32_MAX;
	uint8_t x4416 = 2U;
	static volatile int32_t t52 = 469410;

	t52 = ((x4413*x4414)<=(x4415>>x4416));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x4477 = 4625237LLU;
	int64_t x4479 = INT64_MAX;
	static volatile uint16_t x4480 = 8U;
	volatile int32_t t53 = 0;

	t53 = ((x4477*x4478)<=(x4479>>x4480));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x4573 = -1LL;
	volatile uint32_t x4575 = UINT32_MAX;
	static uint32_t x4576 = 2U;
	int32_t t54 = 49095;

	t54 = ((x4573*x4574)<=(x4575>>x4576));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4706 = INT16_MIN;
	volatile int16_t x4708 = 27;
	int32_t t55 = -1462;

	t55 = ((x4705*x4706)<=(x4707>>x4708));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x4790 = INT8_MIN;
	static uint16_t x4791 = 4U;
	static int64_t x4792 = 11LL;
	int32_t t56 = -989776;

	t56 = ((x4789*x4790)<=(x4791>>x4792));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x4929 = 216694033U;
	uint16_t x4930 = 1392U;
	static uint8_t x4932 = 61U;
	volatile int32_t t57 = 70;

	t57 = ((x4929*x4930)<=(x4931>>x4932));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4969 = -1;
	volatile int64_t x4970 = INT64_MAX;
	int32_t x4971 = INT32_MAX;
	uint64_t x4972 = 0LLU;
	int32_t t58 = -18898;

	t58 = ((x4969*x4970)<=(x4971>>x4972));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x5077 = INT64_MIN;
	static volatile uint32_t x5079 = 22338U;
	volatile int32_t t59 = -27907;

	t59 = ((x5077*x5078)<=(x5079>>x5080));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x5097 = 259242LLU;
	static uint8_t x5098 = 2U;
	uint8_t x5100 = 15U;
	int32_t t60 = -78854;

	t60 = ((x5097*x5098)<=(x5099>>x5100));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x5317 = 9568;
	int64_t x5318 = 7749325LL;
	int64_t x5319 = INT64_MAX;
	uint16_t x5320 = 1U;

	t61 = ((x5317*x5318)<=(x5319>>x5320));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x5397 = UINT8_MAX;
	static int16_t x5398 = INT16_MIN;
	int8_t x5400 = 1;

	t62 = ((x5397*x5398)<=(x5399>>x5400));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x5413 = INT8_MIN;
	int8_t x5414 = INT8_MIN;
	int64_t x5415 = 540054056695060LL;
	volatile int8_t x5416 = 1;
	volatile int32_t t63 = 0;

	t63 = ((x5413*x5414)<=(x5415>>x5416));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x5433 = INT32_MAX;
	static int16_t x5434 = -1;
	uint64_t x5435 = UINT64_MAX;
	volatile uint64_t x5436 = 33LLU;
	static int32_t t64 = -484163421;

	t64 = ((x5433*x5434)<=(x5435>>x5436));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x5449 = -31436745316367LL;
	int16_t x5450 = INT16_MIN;
	volatile int32_t x5451 = INT32_MAX;
	volatile int32_t t65 = 1;

	t65 = ((x5449*x5450)<=(x5451>>x5452));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x5477 = -1974278LL;
	int8_t x5478 = INT8_MIN;
	int64_t x5479 = INT64_MAX;
	static int32_t x5480 = 0;
	int32_t t66 = 212330;

	t66 = ((x5477*x5478)<=(x5479>>x5480));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x5489 = -4140423231831776LL;
	static volatile int32_t x5490 = -3;
	uint64_t x5491 = UINT64_MAX;
	uint8_t x5492 = 1U;
	volatile int32_t t67 = -42250;

	t67 = ((x5489*x5490)<=(x5491>>x5492));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x5549 = 2441065132355130LLU;
	uint16_t x5551 = 119U;
	uint8_t x5552 = 1U;

	t68 = ((x5549*x5550)<=(x5551>>x5552));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5649 = INT8_MAX;
	int64_t x5650 = -1LL;
	uint32_t x5651 = 4U;
	volatile int32_t x5652 = 1;
	static volatile int32_t t69 = -14277204;

	t69 = ((x5649*x5650)<=(x5651>>x5652));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5658 = 44U;
	uint32_t x5659 = 104485U;
	uint64_t x5660 = 9LLU;
	volatile int32_t t70 = -28747;

	t70 = ((x5657*x5658)<=(x5659>>x5660));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x5669 = 1;
	uint8_t x5671 = 3U;
	uint8_t x5672 = 1U;
	int32_t t71 = -15022;

	t71 = ((x5669*x5670)<=(x5671>>x5672));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x5717 = 3360796;
	int64_t x5718 = -42243LL;
	uint32_t x5719 = 7693922U;
	volatile int64_t x5720 = 4LL;
	static volatile int32_t t72 = -1;

	t72 = ((x5717*x5718)<=(x5719>>x5720));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x5802 = -222;
	static int16_t x5803 = INT16_MAX;
	static int32_t x5804 = 1;
	int32_t t73 = -2998436;

	t73 = ((x5801*x5802)<=(x5803>>x5804));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5843 = INT16_MAX;
	int16_t x5844 = 0;
	int32_t t74 = 124804;

	t74 = ((x5841*x5842)<=(x5843>>x5844));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x5853 = 122U;
	int8_t x5854 = INT8_MIN;
	uint16_t x5855 = UINT16_MAX;
	volatile int32_t x5856 = 14;
	int32_t t75 = -225451;

	t75 = ((x5853*x5854)<=(x5855>>x5856));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5885 = UINT16_MAX;
	int8_t x5886 = -1;
	uint8_t x5887 = UINT8_MAX;

	t76 = ((x5885*x5886)<=(x5887>>x5888));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x6153 = UINT64_MAX;
	volatile int16_t x6154 = 2759;
	volatile uint8_t x6155 = 2U;
	static uint64_t x6156 = 1LLU;
	int32_t t77 = 19468185;

	t77 = ((x6153*x6154)<=(x6155>>x6156));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x6170 = -16;
	int32_t x6171 = 503568464;
	volatile int32_t t78 = 27995;

	t78 = ((x6169*x6170)<=(x6171>>x6172));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x6173 = -1;
	static int16_t x6174 = INT16_MIN;
	int16_t x6175 = 17;
	static uint16_t x6176 = 21U;

	t79 = ((x6173*x6174)<=(x6175>>x6176));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x6297 = -3107012746309694LL;
	int8_t x6298 = INT8_MIN;
	int64_t x6300 = 5LL;
	volatile int32_t t80 = -387820;

	t80 = ((x6297*x6298)<=(x6299>>x6300));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x6305 = -1LL;
	int32_t x6306 = -12008823;
	uint16_t x6307 = 4U;
	volatile int32_t t81 = 1013228;

	t81 = ((x6305*x6306)<=(x6307>>x6308));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x6329 = UINT16_MAX;
	uint8_t x6330 = 15U;
	uint32_t x6332 = 3U;
	volatile int32_t t82 = -581488789;

	t82 = ((x6329*x6330)<=(x6331>>x6332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x6377 = UINT8_MAX;
	int8_t x6380 = 6;
	int32_t t83 = -538;

	t83 = ((x6377*x6378)<=(x6379>>x6380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x6385 = -1318983809LL;
	volatile int16_t x6388 = 0;
	static int32_t t84 = 7;

	t84 = ((x6385*x6386)<=(x6387>>x6388));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x6389 = UINT8_MAX;
	static uint16_t x6391 = 8587U;
	static volatile int8_t x6392 = 6;
	volatile int32_t t85 = -3018156;

	t85 = ((x6389*x6390)<=(x6391>>x6392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x6405 = INT16_MIN;
	volatile int32_t t86 = -11042187;

	t86 = ((x6405*x6406)<=(x6407>>x6408));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x6465 = UINT16_MAX;
	uint64_t x6466 = 507080981706LLU;
	volatile uint32_t x6467 = 20930U;
	int8_t x6468 = 15;

	t87 = ((x6465*x6466)<=(x6467>>x6468));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x6477 = 5342LLU;
	int16_t x6478 = -1;
	volatile uint8_t x6479 = 0U;
	int32_t t88 = 202;

	t88 = ((x6477*x6478)<=(x6479>>x6480));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x6533 = 115848;
	volatile int64_t x6534 = -1LL;
	uint64_t x6535 = 3593LLU;
	uint16_t x6536 = 40U;
	volatile int32_t t89 = -6;

	t89 = ((x6533*x6534)<=(x6535>>x6536));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6673 = -1;
	volatile int64_t x6674 = -4226174883558LL;
	int8_t x6676 = 30;
	int32_t t90 = 247183257;

	t90 = ((x6673*x6674)<=(x6675>>x6676));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6781 = 121;
	volatile int8_t x6782 = 0;
	uint8_t x6783 = 0U;
	int64_t x6784 = 9LL;
	static int32_t t91 = 440295679;

	t91 = ((x6781*x6782)<=(x6783>>x6784));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x6793 = UINT8_MAX;
	volatile int32_t x6795 = INT32_MAX;
	int16_t x6796 = 1;
	volatile int32_t t92 = -68975794;

	t92 = ((x6793*x6794)<=(x6795>>x6796));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x6809 = 3U;
	uint32_t x6810 = 57863U;
	uint16_t x6811 = 11U;
	uint16_t x6812 = 1U;
	int32_t t93 = -186;

	t93 = ((x6809*x6810)<=(x6811>>x6812));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6837 = INT8_MIN;
	uint64_t x6839 = 1762830883484589833LLU;
	uint8_t x6840 = 2U;
	volatile int32_t t94 = -140;

	t94 = ((x6837*x6838)<=(x6839>>x6840));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6917 = INT16_MIN;
	int8_t x6918 = INT8_MIN;
	uint8_t x6919 = UINT8_MAX;
	int16_t x6920 = 1;
	int32_t t95 = 64029106;

	t95 = ((x6917*x6918)<=(x6919>>x6920));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6957 = INT8_MIN;
	uint64_t x6958 = 3LLU;
	int8_t x6959 = 1;
	uint8_t x6960 = 25U;
	static volatile int32_t t96 = 10;

	t96 = ((x6957*x6958)<=(x6959>>x6960));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x7049 = UINT64_MAX;
	volatile int32_t x7050 = INT32_MAX;
	static uint8_t x7052 = 1U;
	volatile int32_t t97 = -10;

	t97 = ((x7049*x7050)<=(x7051>>x7052));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x7053 = -9;
	static volatile uint64_t x7055 = 434882252664LLU;
	uint64_t x7056 = 7LLU;
	int32_t t98 = 392;

	t98 = ((x7053*x7054)<=(x7055>>x7056));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x7065 = UINT64_MAX;
	static int64_t x7067 = INT64_MAX;
	uint8_t x7068 = 2U;

	t99 = ((x7065*x7066)<=(x7067>>x7068));

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

