#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x192 = INT8_MIN;
int8_t x272 = -1;
volatile int32_t t1 = -841913710;
static uint32_t x279 = UINT32_MAX;
static volatile int32_t x280 = -1;
volatile int32_t t2 = -53576192;
int16_t x571 = -1;
int64_t x602 = INT64_MIN;
int64_t x717 = -17LL;
volatile int32_t t9 = 507;
volatile uint64_t x1127 = UINT64_MAX;
uint32_t x1223 = UINT32_MAX;
static int8_t x1257 = -53;
int8_t x1279 = -1;
volatile int32_t t16 = -2881414;
uint8_t x1305 = UINT8_MAX;
uint8_t x1437 = UINT8_MAX;
volatile int32_t t20 = 195;
int32_t x1653 = -1;
volatile int32_t x1805 = -62;
int32_t x2373 = -267;
volatile int32_t x2410 = -1;
static int8_t x2411 = -1;
uint32_t x2529 = UINT32_MAX;
volatile int8_t x2530 = 31;
int16_t x2871 = INT16_MIN;
int32_t x2998 = INT32_MIN;
static volatile int16_t x2999 = -1;
uint32_t x3113 = 155626785U;
int16_t x3114 = INT16_MIN;
int8_t x3235 = -1;
int16_t x3482 = -1;
int32_t x3524 = INT32_MIN;
volatile int16_t x3733 = 13328;
static uint8_t x3758 = UINT8_MAX;
uint8_t x3763 = UINT8_MAX;
uint64_t x4069 = 14LLU;
int16_t x4072 = INT16_MAX;
int32_t x4192 = INT32_MIN;
volatile int32_t t50 = -1661233;
int32_t t52 = -11;
uint32_t x4364 = UINT32_MAX;
int8_t x4433 = -3;
static uint32_t x4494 = UINT32_MAX;
static int16_t x4547 = -1;
static int8_t x4548 = -1;


void f0(void) {
	int8_t x189 = INT8_MIN;
	static int32_t x190 = 5626;
	volatile int8_t x191 = INT8_MIN;
	volatile int32_t t0 = -8020;

	t0 = ((x189==x190)/(x191==x192));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x269 = INT32_MIN;
	static int8_t x270 = INT8_MAX;
	int8_t x271 = -1;

	t1 = ((x269==x270)/(x271==x272));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x277 = 29U;
	static int16_t x278 = 52;

	t2 = ((x277==x278)/(x279==x280));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x309 = 446763428LL;
	int8_t x310 = -1;
	int64_t x311 = -1LL;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t3 = 0;

	t3 = ((x309==x310)/(x311==x312));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x569 = -2;
	int8_t x570 = INT8_MIN;
	int8_t x572 = -1;
	int32_t t4 = 952636120;

	t4 = ((x569==x570)/(x571==x572));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x601 = -2061027939665838LL;
	static int32_t x603 = 15;
	int64_t x604 = 15LL;
	int32_t t5 = 936;

	t5 = ((x601==x602)/(x603==x604));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x625 = INT64_MIN;
	volatile int8_t x626 = INT8_MIN;
	int8_t x627 = 0;
	uint16_t x628 = 0U;
	static volatile int32_t t6 = -42264489;

	t6 = ((x625==x626)/(x627==x628));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x718 = 8274201U;
	int64_t x719 = -1LL;
	int8_t x720 = -1;
	static volatile int32_t t7 = 1;

	t7 = ((x717==x718)/(x719==x720));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x753 = 3804095475918LL;
	static int64_t x754 = 25513123790032LL;
	int64_t x755 = INT64_MIN;
	int64_t x756 = INT64_MIN;
	volatile int32_t t8 = 1040;

	t8 = ((x753==x754)/(x755==x756));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x917 = 4LL;
	int16_t x918 = 247;
	int8_t x919 = -1;
	static volatile int8_t x920 = -1;

	t9 = ((x917==x918)/(x919==x920));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x941 = INT8_MIN;
	int16_t x942 = INT16_MIN;
	volatile int64_t x943 = INT64_MIN;
	int64_t x944 = INT64_MIN;
	volatile int32_t t10 = 347881;

	t10 = ((x941==x942)/(x943==x944));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x957 = INT64_MIN;
	int64_t x958 = INT64_MAX;
	static volatile uint16_t x959 = UINT16_MAX;
	uint16_t x960 = UINT16_MAX;
	volatile int32_t t11 = -83505191;

	t11 = ((x957==x958)/(x959==x960));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x1125 = INT32_MIN;
	uint32_t x1126 = 35U;
	int64_t x1128 = -1LL;
	int32_t t12 = 210;

	t12 = ((x1125==x1126)/(x1127==x1128));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1193 = -1;
	int32_t x1194 = -1;
	static volatile int32_t x1195 = INT32_MAX;
	volatile int32_t x1196 = INT32_MAX;
	volatile int32_t t13 = 472725;

	t13 = ((x1193==x1194)/(x1195==x1196));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1221 = 296235783843290982LLU;
	static int64_t x1222 = -1LL;
	volatile int32_t x1224 = -1;
	int32_t t14 = 2;

	t14 = ((x1221==x1222)/(x1223==x1224));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1258 = INT64_MIN;
	uint8_t x1259 = 1U;
	uint32_t x1260 = 1U;
	static int32_t t15 = -100057;

	t15 = ((x1257==x1258)/(x1259==x1260));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1277 = INT8_MAX;
	static volatile uint32_t x1278 = UINT32_MAX;
	int64_t x1280 = -1LL;

	t16 = ((x1277==x1278)/(x1279==x1280));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1281 = INT8_MIN;
	volatile int64_t x1282 = -128372741LL;
	static volatile int16_t x1283 = INT16_MIN;
	int16_t x1284 = INT16_MIN;
	int32_t t17 = -51798222;

	t17 = ((x1281==x1282)/(x1283==x1284));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1306 = -6;
	static int64_t x1307 = -1LL;
	uint64_t x1308 = UINT64_MAX;
	int32_t t18 = 19576233;

	t18 = ((x1305==x1306)/(x1307==x1308));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1401 = INT64_MAX;
	uint32_t x1402 = UINT32_MAX;
	uint64_t x1403 = UINT64_MAX;
	volatile uint64_t x1404 = UINT64_MAX;
	volatile int32_t t19 = 2997208;

	t19 = ((x1401==x1402)/(x1403==x1404));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1438 = 21496066407LLU;
	static volatile int64_t x1439 = INT64_MIN;
	int64_t x1440 = INT64_MIN;

	t20 = ((x1437==x1438)/(x1439==x1440));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1654 = INT16_MIN;
	int32_t x1655 = -1;
	int32_t x1656 = -1;
	int32_t t21 = 1;

	t21 = ((x1653==x1654)/(x1655==x1656));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1661 = -1LL;
	static volatile uint8_t x1662 = UINT8_MAX;
	int64_t x1663 = INT64_MIN;
	int64_t x1664 = INT64_MIN;
	volatile int32_t t22 = 36331;

	t22 = ((x1661==x1662)/(x1663==x1664));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1781 = 2U;
	static int32_t x1782 = INT32_MAX;
	int32_t x1783 = -1;
	int16_t x1784 = -1;
	int32_t t23 = 1511;

	t23 = ((x1781==x1782)/(x1783==x1784));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1806 = 18U;
	uint64_t x1807 = UINT64_MAX;
	volatile int32_t x1808 = -1;
	volatile int32_t t24 = -540849;

	t24 = ((x1805==x1806)/(x1807==x1808));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1941 = INT64_MIN;
	int16_t x1942 = INT16_MAX;
	int8_t x1943 = -1;
	int64_t x1944 = -1LL;
	volatile int32_t t25 = 2430;

	t25 = ((x1941==x1942)/(x1943==x1944));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x2117 = INT64_MAX;
	volatile int32_t x2118 = INT32_MIN;
	volatile int32_t x2119 = -1;
	volatile int8_t x2120 = -1;
	volatile int32_t t26 = 55;

	t26 = ((x2117==x2118)/(x2119==x2120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x2345 = INT32_MIN;
	int16_t x2346 = 1;
	int8_t x2347 = -1;
	int8_t x2348 = -1;
	volatile int32_t t27 = -443908;

	t27 = ((x2345==x2346)/(x2347==x2348));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2374 = UINT8_MAX;
	uint32_t x2375 = UINT32_MAX;
	static int8_t x2376 = -1;
	volatile int32_t t28 = 0;

	t28 = ((x2373==x2374)/(x2375==x2376));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2409 = INT32_MAX;
	static int64_t x2412 = -1LL;
	volatile int32_t t29 = 245488229;

	t29 = ((x2409==x2410)/(x2411==x2412));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x2445 = 24U;
	volatile int16_t x2446 = -1;
	int64_t x2447 = INT64_MIN;
	volatile int64_t x2448 = INT64_MIN;
	int32_t t30 = -4284549;

	t30 = ((x2445==x2446)/(x2447==x2448));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2531 = UINT64_MAX;
	static volatile uint64_t x2532 = UINT64_MAX;
	volatile int32_t t31 = 1;

	t31 = ((x2529==x2530)/(x2531==x2532));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x2585 = 18485U;
	int32_t x2586 = -1;
	int8_t x2587 = -1;
	int32_t x2588 = -1;
	volatile int32_t t32 = -18674;

	t32 = ((x2585==x2586)/(x2587==x2588));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2625 = UINT32_MAX;
	int16_t x2626 = 345;
	volatile uint32_t x2627 = UINT32_MAX;
	int16_t x2628 = -1;
	int32_t t33 = -289;

	t33 = ((x2625==x2626)/(x2627==x2628));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2869 = 18U;
	int32_t x2870 = -1;
	int16_t x2872 = INT16_MIN;
	int32_t t34 = 12;

	t34 = ((x2869==x2870)/(x2871==x2872));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x2997 = INT16_MAX;
	int8_t x3000 = -1;
	volatile int32_t t35 = -28513666;

	t35 = ((x2997==x2998)/(x2999==x3000));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x3115 = INT8_MIN;
	int8_t x3116 = INT8_MIN;
	volatile int32_t t36 = 2;

	t36 = ((x3113==x3114)/(x3115==x3116));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x3233 = -1;
	int16_t x3234 = -1;
	static uint64_t x3236 = UINT64_MAX;
	volatile int32_t t37 = 439938027;

	t37 = ((x3233==x3234)/(x3235==x3236));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3369 = INT16_MAX;
	int8_t x3370 = INT8_MIN;
	int32_t x3371 = -1;
	uint64_t x3372 = UINT64_MAX;
	int32_t t38 = 6;

	t38 = ((x3369==x3370)/(x3371==x3372));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x3481 = 328U;
	int16_t x3483 = INT16_MAX;
	int16_t x3484 = INT16_MAX;
	volatile int32_t t39 = 1553947;

	t39 = ((x3481==x3482)/(x3483==x3484));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3521 = -1;
	uint8_t x3522 = 5U;
	int32_t x3523 = INT32_MIN;
	int32_t t40 = 106102198;

	t40 = ((x3521==x3522)/(x3523==x3524));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3645 = 313067LL;
	uint8_t x3646 = 23U;
	int16_t x3647 = -1;
	int64_t x3648 = -1LL;
	volatile int32_t t41 = -19;

	t41 = ((x3645==x3646)/(x3647==x3648));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x3734 = -1;
	volatile int32_t x3735 = 1;
	static uint16_t x3736 = 1U;
	volatile int32_t t42 = -5554;

	t42 = ((x3733==x3734)/(x3735==x3736));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3757 = 14U;
	int32_t x3759 = INT32_MIN;
	int32_t x3760 = INT32_MIN;
	volatile int32_t t43 = -55;

	t43 = ((x3757==x3758)/(x3759==x3760));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x3761 = 2U;
	volatile uint16_t x3762 = 6U;
	uint8_t x3764 = UINT8_MAX;
	static volatile int32_t t44 = 92685902;

	t44 = ((x3761==x3762)/(x3763==x3764));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3841 = INT64_MIN;
	volatile int8_t x3842 = -15;
	int8_t x3843 = INT8_MIN;
	volatile int8_t x3844 = INT8_MIN;
	volatile int32_t t45 = 1948000;

	t45 = ((x3841==x3842)/(x3843==x3844));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x4009 = 2;
	int32_t x4010 = INT32_MIN;
	static int16_t x4011 = INT16_MIN;
	int16_t x4012 = INT16_MIN;
	static int32_t t46 = 4205424;

	t46 = ((x4009==x4010)/(x4011==x4012));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x4070 = 1016;
	int16_t x4071 = INT16_MAX;
	int32_t t47 = -1;

	t47 = ((x4069==x4070)/(x4071==x4072));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x4153 = 43082LLU;
	int64_t x4154 = INT64_MIN;
	static uint64_t x4155 = UINT64_MAX;
	int32_t x4156 = -1;
	int32_t t48 = 100619;

	t48 = ((x4153==x4154)/(x4155==x4156));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x4189 = 2763U;
	int16_t x4190 = -273;
	int32_t x4191 = INT32_MIN;
	static int32_t t49 = -67173;

	t49 = ((x4189==x4190)/(x4191==x4192));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x4221 = INT8_MIN;
	int8_t x4222 = -3;
	int16_t x4223 = -1;
	int8_t x4224 = -1;

	t50 = ((x4221==x4222)/(x4223==x4224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x4293 = INT8_MAX;
	volatile int8_t x4294 = 3;
	int8_t x4295 = INT8_MIN;
	volatile int8_t x4296 = INT8_MIN;
	volatile int32_t t51 = 1910;

	t51 = ((x4293==x4294)/(x4295==x4296));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x4357 = INT16_MIN;
	int32_t x4358 = INT32_MIN;
	static uint64_t x4359 = UINT64_MAX;
	int64_t x4360 = -1LL;

	t52 = ((x4357==x4358)/(x4359==x4360));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4361 = 18U;
	static uint16_t x4362 = 1U;
	static volatile int8_t x4363 = -1;
	static int32_t t53 = 0;

	t53 = ((x4361==x4362)/(x4363==x4364));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x4434 = 0;
	static int16_t x4435 = 1;
	static int8_t x4436 = 1;
	int32_t t54 = -22;

	t54 = ((x4433==x4434)/(x4435==x4436));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4493 = INT8_MIN;
	int8_t x4495 = -3;
	int32_t x4496 = -3;
	int32_t t55 = 4740382;

	t55 = ((x4493==x4494)/(x4495==x4496));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4545 = 1U;
	uint16_t x4546 = 2626U;
	static volatile int32_t t56 = 3;

	t56 = ((x4545==x4546)/(x4547==x4548));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x4565 = -1630911LL;
	static int64_t x4566 = -581LL;
	int8_t x4567 = -1;
	volatile int8_t x4568 = -1;
	int32_t t57 = -402;

	t57 = ((x4565==x4566)/(x4567==x4568));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x4569 = -1LL;
	int64_t x4570 = -374LL;
	uint64_t x4571 = UINT64_MAX;
	int32_t x4572 = -1;
	volatile int32_t t58 = -43;

	t58 = ((x4569==x4570)/(x4571==x4572));

	if (t58 != 0) { NG(); } else { ; }
	
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


    return 0;
}

