
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x66 = 0U;
static int32_t t3 = -120173;
int32_t x338 = 6;
uint32_t x339 = 65995347U;
volatile int32_t t5 = 1;
uint32_t x669 = 5307423U;
static volatile int16_t x672 = INT16_MIN;
int32_t x763 = -1;
static int8_t x897 = 1;
uint8_t x1172 = UINT8_MAX;
int16_t x1205 = INT16_MAX;
static uint64_t t16 = 7030538181260120746LLU;
static uint16_t x1530 = 1U;
static uint32_t x1630 = 17U;
static int32_t x1632 = -1;
volatile uint8_t x1758 = 52U;
static int64_t x1760 = -3946357749647145945LL;
volatile uint64_t t21 = 9230685LLU;
volatile uint16_t x1911 = UINT16_MAX;
uint8_t x1916 = UINT8_MAX;
int16_t x2121 = 351;
uint16_t x2124 = 80U;
static int8_t x2198 = 0;
int64_t x2200 = 4774280159LL;
uint16_t x2240 = 758U;
volatile uint64_t t26 = 237163LLU;
uint8_t x2278 = 13U;
int32_t x2279 = 221784347;
uint64_t x2493 = 12783110925525072LLU;
static int8_t x3196 = INT8_MIN;
int64_t t38 = -38234319LL;
uint64_t x3321 = 241234LLU;
uint32_t x3322 = 13U;
static uint16_t x3362 = 6U;
volatile int64_t x3363 = 111LL;
uint16_t x3438 = 2U;
volatile uint64_t t43 = 52902378LLU;
int64_t x3709 = 2870686LL;
int8_t x3710 = 1;
int16_t x3803 = 1;
volatile int16_t x3851 = INT16_MIN;
static uint32_t x3872 = 487654U;
int32_t x3995 = INT32_MIN;
int32_t t51 = 451175;
static int8_t x4118 = 0;
int16_t x4120 = INT16_MAX;
int32_t t53 = 28029880;
uint16_t x4140 = 0U;
static uint32_t t54 = 218698U;
int32_t x4185 = 13953;
volatile int16_t x4187 = 26;
static int16_t x4188 = -1;
uint32_t x4422 = 9U;
int32_t x4423 = -1;
static int16_t x4544 = INT16_MAX;
static uint32_t x4617 = 808750U;
volatile uint32_t x4618 = 2U;
uint64_t x4641 = 8380368753946526LLU;
int16_t x4642 = 16;
uint16_t x4761 = 32U;
uint8_t x4798 = 3U;
static uint8_t x4946 = 1U;
volatile uint32_t x4971 = 443U;
volatile int64_t t68 = 3368398LL;
volatile int16_t x5035 = INT16_MIN;
int64_t x5036 = -528158939626470LL;
int16_t x5141 = INT16_MAX;
static volatile int64_t t71 = 68182556426LL;
volatile uint8_t x5191 = UINT8_MAX;
volatile uint64_t t72 = 474386215LLU;
uint16_t x5441 = 1824U;
volatile int64_t t73 = 0LL;
int8_t x5449 = 41;
volatile int32_t x5534 = 3;
int32_t x5634 = 6;
static volatile int32_t t77 = -29973864;
int64_t t78 = 15116LL;
static int8_t x5858 = 16;
static volatile int32_t t79 = 0;
int8_t x5861 = INT8_MAX;
int8_t x5880 = 16;
static volatile int8_t x5977 = 6;
int64_t x5980 = -196293079261652929LL;
volatile uint16_t x6005 = 8782U;
uint8_t x6006 = 0U;
volatile int32_t t83 = -66046260;
uint16_t x6117 = 50U;
volatile int32_t t84 = 39398819;
uint32_t x6228 = UINT32_MAX;
uint32_t t85 = 450U;
uint64_t x6233 = 7455838742795LLU;
volatile int8_t x6235 = INT8_MIN;
int32_t x6236 = -1;
int32_t t87 = -3110;
uint32_t x6829 = UINT32_MAX;
volatile uint64_t t94 = 5225027748466594LLU;


void f0(void) {
    	static uint16_t x65 = 7626U;
	static volatile int16_t x67 = INT16_MIN;
	static uint16_t x68 = 4U;
	int32_t t0 = -32;

    t0 = (((x65<<x66)+x67)-x68);

    if (t0 != -25146) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x85 = 1;
	static uint32_t x86 = 24U;
	int64_t x87 = -6240553LL;
	int64_t x88 = -1LL;
	volatile int64_t t1 = 78569842061LL;

    t1 = (((x85<<x86)+x87)-x88);

    if (t1 != 10536664LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x121 = UINT32_MAX;
	volatile uint8_t x122 = 9U;
	int16_t x123 = -1;
	int16_t x124 = INT16_MIN;
	volatile uint32_t t2 = 1801440U;

    t2 = (((x121<<x122)+x123)-x124);

    if (t2 != 32255U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x197 = 69U;
	int8_t x198 = 1;
	uint8_t x199 = 0U;
	int8_t x200 = 0;

    t3 = (((x197<<x198)+x199)-x200);

    if (t3 != 138) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x337 = 24879U;
	uint64_t x340 = UINT64_MAX;
	static uint64_t t4 = 3LLU;

    t4 = (((x337<<x338)+x339)-x340);

    if (t4 != 67587604LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x513 = 48U;
	int8_t x514 = 2;
	int8_t x515 = INT8_MAX;
	int32_t x516 = INT32_MAX;

    t5 = (((x513<<x514)+x515)-x516);

    if (t5 != -2147483328) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x670 = 3;
	uint64_t x671 = 1833405239987647LLU;
	uint64_t t6 = 4971843052554895974LLU;

    t6 = (((x669<<x670)+x671)-x672);

    if (t6 != 1833405282479799LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x761 = 29108U;
	volatile uint16_t x762 = 6U;
	uint16_t x764 = 43U;
	volatile int32_t t7 = -753397;

    t7 = (((x761<<x762)+x763)-x764);

    if (t7 != 1862868) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x845 = 474180413LL;
	int8_t x846 = 14;
	int32_t x847 = -1;
	int16_t x848 = 9;
	int64_t t8 = -218LL;

    t8 = (((x845<<x846)+x847)-x848);

    if (t8 != 7768971886582LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x898 = 1U;
	uint8_t x899 = 52U;
	static int64_t x900 = INT64_MAX;
	static volatile int64_t t9 = -685LL;

    t9 = (((x897<<x898)+x899)-x900);

    if (t9 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x989 = UINT32_MAX;
	uint16_t x990 = 3U;
	int8_t x991 = -1;
	uint8_t x992 = 0U;
	volatile uint32_t t10 = 64174U;

    t10 = (((x989<<x990)+x991)-x992);

    if (t10 != 4294967287U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x1005 = 565U;
	static int16_t x1006 = 4;
	static int8_t x1007 = 17;
	volatile int64_t x1008 = 3964383853794486322LL;
	static volatile int64_t t11 = 7859910585989LL;

    t11 = (((x1005<<x1006)+x1007)-x1008);

    if (t11 != -3964383853794477265LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1065 = INT32_MAX;
	static int64_t x1066 = 0LL;
	uint64_t x1067 = 695482131LLU;
	static volatile uint32_t x1068 = 26497U;
	uint64_t t12 = 361694091747667689LLU;

    t12 = (((x1065<<x1066)+x1067)-x1068);

    if (t12 != 2842939281LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1169 = UINT32_MAX;
	uint32_t x1170 = 1U;
	uint32_t x1171 = UINT32_MAX;
	uint32_t t13 = 129845U;

    t13 = (((x1169<<x1170)+x1171)-x1172);

    if (t13 != 4294967038U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x1206 = 0;
	int64_t x1207 = 27610064LL;
	int8_t x1208 = -1;
	volatile int64_t t14 = 557648309577168LL;

    t14 = (((x1205<<x1206)+x1207)-x1208);

    if (t14 != 27642832LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1233 = UINT64_MAX;
	volatile uint8_t x1234 = 1U;
	int64_t x1235 = INT64_MAX;
	int64_t x1236 = INT64_MAX;
	volatile uint64_t t15 = 3436LLU;

    t15 = (((x1233<<x1234)+x1235)-x1236);

    if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x1417 = 1988788U;
	int64_t x1418 = 23LL;
	static uint64_t x1419 = 229052LLU;
	volatile uint32_t x1420 = 3821646U;

    t16 = (((x1417<<x1418)+x1419)-x1420);

    if (t16 != 1506356846LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1529 = 33;
	uint64_t x1531 = 5LLU;
	static int64_t x1532 = INT64_MIN;
	volatile uint64_t t17 = 252150765570LLU;

    t17 = (((x1529<<x1530)+x1531)-x1532);

    if (t17 != 9223372036854775879LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1541 = UINT32_MAX;
	int16_t x1542 = 8;
	int16_t x1543 = INT16_MIN;
	static int16_t x1544 = INT16_MIN;
	uint32_t t18 = 15187U;

    t18 = (((x1541<<x1542)+x1543)-x1544);

    if (t18 != 4294967040U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1613 = 7LL;
	uint8_t x1614 = 0U;
	int8_t x1615 = INT8_MIN;
	static uint16_t x1616 = 24U;
	static volatile int64_t t19 = 322673274543954LL;

    t19 = (((x1613<<x1614)+x1615)-x1616);

    if (t19 != -145LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x1629 = 23U;
	volatile int32_t x1631 = INT32_MIN;
	int32_t t20 = -5411;

    t20 = (((x1629<<x1630)+x1631)-x1632);

    if (t20 != -2144468991) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1757 = 12828390212130824LLU;
	int16_t x1759 = INT16_MAX;

    t21 = (((x1757<<x1758)+x1759)-x1760);

    if (t21 != 13205758583520918488LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1909 = 3U;
	uint16_t x1910 = 3U;
	int64_t x1912 = -1LL;
	volatile int64_t t22 = -931183857286LL;

    t22 = (((x1909<<x1910)+x1911)-x1912);

    if (t22 != 65560LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x1913 = 11;
	int8_t x1914 = 7;
	int64_t x1915 = INT64_MIN;
	volatile int64_t t23 = 111171478091497982LL;

    t23 = (((x1913<<x1914)+x1915)-x1916);

    if (t23 != -9223372036854774655LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x2122 = 1U;
	uint16_t x2123 = UINT16_MAX;
	volatile int32_t t24 = -29319;

    t24 = (((x2121<<x2122)+x2123)-x2124);

    if (t24 != 66157) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x2197 = 928218524623LL;
	uint8_t x2199 = 7U;
	volatile int64_t t25 = -500409LL;

    t25 = (((x2197<<x2198)+x2199)-x2200);

    if (t25 != 923444244471LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x2237 = UINT64_MAX;
	static uint16_t x2238 = 6U;
	int16_t x2239 = 1;

    t26 = (((x2237<<x2238)+x2239)-x2240);

    if (t26 != 18446744073709550795LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x2277 = 5;
	int16_t x2280 = -2;
	volatile int32_t t27 = 26;

    t27 = (((x2277<<x2278)+x2279)-x2280);

    if (t27 != 221825309) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2365 = UINT64_MAX;
	static uint16_t x2366 = 0U;
	uint64_t x2367 = 1221893973105402LLU;
	volatile int64_t x2368 = INT64_MIN;
	uint64_t t28 = 3825089469069288LLU;

    t28 = (((x2365<<x2366)+x2367)-x2368);

    if (t28 != 9224593930827881209LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x2494 = 32U;
	int8_t x2495 = INT8_MAX;
	volatile uint64_t x2496 = 370531767804533498LLU;
	uint64_t t29 = 132547278725LLU;

    t29 = (((x2493<<x2494)+x2495)-x2496);

    if (t29 != 17055901043298362757LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x2705 = 8LL;
	volatile int8_t x2706 = 2;
	int8_t x2707 = 0;
	int32_t x2708 = INT32_MIN;
	int64_t t30 = 4308650803996713910LL;

    t30 = (((x2705<<x2706)+x2707)-x2708);

    if (t30 != 2147483680LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x2725 = UINT16_MAX;
	uint8_t x2726 = 11U;
	int64_t x2727 = -6077088012LL;
	int8_t x2728 = -1;
	volatile int64_t t31 = -744625808350920286LL;

    t31 = (((x2725<<x2726)+x2727)-x2728);

    if (t31 != -5942872331LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2745 = 3592234636LLU;
	int16_t x2746 = 0;
	static volatile int32_t x2747 = INT32_MIN;
	int16_t x2748 = INT16_MIN;
	uint64_t t32 = 185923336LLU;

    t32 = (((x2745<<x2746)+x2747)-x2748);

    if (t32 != 1444783756LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x2789 = UINT64_MAX;
	static uint8_t x2790 = 22U;
	uint64_t x2791 = UINT64_MAX;
	volatile int16_t x2792 = -6473;
	uint64_t t33 = 3065LLU;

    t33 = (((x2789<<x2790)+x2791)-x2792);

    if (t33 != 18446744073705363784LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x3049 = UINT16_MAX;
	int8_t x3050 = 0;
	int32_t x3051 = INT32_MIN;
	int8_t x3052 = 3;
	static int32_t t34 = 0;

    t34 = (((x3049<<x3050)+x3051)-x3052);

    if (t34 != -2147418116) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x3085 = 0;
	uint32_t x3086 = 1U;
	int32_t x3087 = -58399202;
	int8_t x3088 = INT8_MIN;
	volatile int32_t t35 = 242032464;

    t35 = (((x3085<<x3086)+x3087)-x3088);

    if (t35 != -58399074) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x3169 = 45U;
	static uint8_t x3170 = 0U;
	static int8_t x3171 = INT8_MAX;
	int8_t x3172 = -1;
	volatile int32_t t36 = 0;

    t36 = (((x3169<<x3170)+x3171)-x3172);

    if (t36 != 173) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x3193 = 53;
	static uint8_t x3194 = 1U;
	uint16_t x3195 = 1257U;
	int32_t t37 = 222;

    t37 = (((x3193<<x3194)+x3195)-x3196);

    if (t37 != 1491) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x3297 = 34071438LL;
	static int16_t x3298 = 0;
	static volatile int64_t x3299 = INT64_MIN;
	int64_t x3300 = INT64_MIN;

    t38 = (((x3297<<x3298)+x3299)-x3300);

    if (t38 != 34071438LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x3323 = INT16_MAX;
	volatile int64_t x3324 = -8918501534LL;
	volatile uint64_t t39 = 198LLU;

    t39 = (((x3321<<x3322)+x3323)-x3324);

    if (t39 != 10894723229LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x3361 = 1U;
	volatile uint16_t x3364 = 4203U;
	int64_t t40 = 133LL;

    t40 = (((x3361<<x3362)+x3363)-x3364);

    if (t40 != -4028LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x3385 = 21001LLU;
	uint8_t x3386 = 35U;
	int16_t x3387 = -8681;
	static int32_t x3388 = -1;
	uint64_t t41 = 11262490267496421LLU;

    t41 = (((x3385<<x3386)+x3387)-x3388);

    if (t41 != 721588865457688LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x3437 = UINT8_MAX;
	uint32_t x3439 = UINT32_MAX;
	uint64_t x3440 = 270050943585045329LLU;
	volatile uint64_t t42 = 486805169134940LLU;

    t42 = (((x3437<<x3438)+x3439)-x3440);

    if (t42 != 18176693130124507306LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x3533 = UINT32_MAX;
	uint16_t x3534 = 25U;
	uint8_t x3535 = UINT8_MAX;
	uint64_t x3536 = 4964608171973LLU;

    t43 = (((x3533<<x3534)+x3535)-x3536);

    if (t43 != 18446739113362792762LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x3711 = INT32_MIN;
	static volatile int8_t x3712 = -1;
	int64_t t44 = 2464711825276389193LL;

    t44 = (((x3709<<x3710)+x3711)-x3712);

    if (t44 != -2141742275LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x3717 = 37;
	static uint16_t x3718 = 0U;
	static volatile uint32_t x3719 = UINT32_MAX;
	int64_t x3720 = -68128939LL;
	volatile int64_t t45 = -2126456989086LL;

    t45 = (((x3717<<x3718)+x3719)-x3720);

    if (t45 != 68128975LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x3801 = UINT64_MAX;
	int32_t x3802 = 3;
	static int32_t x3804 = -40091614;
	volatile uint64_t t46 = 357501751090328919LLU;

    t46 = (((x3801<<x3802)+x3803)-x3804);

    if (t46 != 40091607LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x3849 = 56153152LL;
	volatile int16_t x3850 = 1;
	uint32_t x3852 = 266463U;
	static volatile int64_t t47 = -6774247LL;

    t47 = (((x3849<<x3850)+x3851)-x3852);

    if (t47 != 112007073LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x3853 = 47U;
	int8_t x3854 = 0;
	uint32_t x3855 = 29810U;
	uint8_t x3856 = UINT8_MAX;
	static volatile uint32_t t48 = 633530503U;

    t48 = (((x3853<<x3854)+x3855)-x3856);

    if (t48 != 29602U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x3869 = 58945656662LLU;
	uint16_t x3870 = 26U;
	int16_t x3871 = 45;
	uint64_t t49 = 2769602LLU;

    t49 = (((x3869<<x3870)+x3871)-x3872);

    if (t49 != 3955776056320364359LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x3889 = 1U;
	uint32_t x3890 = 0U;
	uint32_t x3891 = 121500U;
	int8_t x3892 = INT8_MIN;
	static uint32_t t50 = 756546575U;

    t50 = (((x3889<<x3890)+x3891)-x3892);

    if (t50 != 121629U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x3993 = INT8_MAX;
	uint16_t x3994 = 0U;
	int8_t x3996 = INT8_MIN;

    t51 = (((x3993<<x3994)+x3995)-x3996);

    if (t51 != -2147483393) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x4081 = 6;
	volatile uint8_t x4082 = 2U;
	uint32_t x4083 = 4994276U;
	static int32_t x4084 = INT32_MIN;
	volatile uint32_t t52 = 25728992U;

    t52 = (((x4081<<x4082)+x4083)-x4084);

    if (t52 != 2152477948U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x4117 = 1;
	int32_t x4119 = 0;

    t53 = (((x4117<<x4118)+x4119)-x4120);

    if (t53 != -32766) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x4137 = UINT32_MAX;
	static uint16_t x4138 = 2U;
	int8_t x4139 = INT8_MIN;

    t54 = (((x4137<<x4138)+x4139)-x4140);

    if (t54 != 4294967164U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x4186 = 10U;
	static volatile int32_t t55 = 24278;

    t55 = (((x4185<<x4186)+x4187)-x4188);

    if (t55 != 14287899) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x4301 = INT16_MAX;
	uint8_t x4302 = 5U;
	int32_t x4303 = 2;
	static int8_t x4304 = 24;
	int32_t t56 = 3340918;

    t56 = (((x4301<<x4302)+x4303)-x4304);

    if (t56 != 1048522) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x4385 = INT8_MAX;
	int8_t x4386 = 1;
	volatile uint8_t x4387 = 51U;
	uint16_t x4388 = 8733U;
	volatile int32_t t57 = 33;

    t57 = (((x4385<<x4386)+x4387)-x4388);

    if (t57 != -8428) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x4413 = 79U;
	uint8_t x4414 = 0U;
	int16_t x4415 = INT16_MIN;
	static uint64_t x4416 = 1081265380931149380LLU;
	volatile uint64_t t58 = 257683LLU;

    t58 = (((x4413<<x4414)+x4415)-x4416);

    if (t58 != 17365478692778369547LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x4417 = UINT32_MAX;
	static int16_t x4418 = 1;
	static uint8_t x4419 = UINT8_MAX;
	static uint64_t x4420 = 187535707LLU;
	uint64_t t59 = 109982305LLU;

    t59 = (((x4417<<x4418)+x4419)-x4420);

    if (t59 != 18446744073522016162LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x4421 = 2107LLU;
	int64_t x4424 = 448015662010806268LL;
	volatile uint64_t t60 = 9197LLU;

    t60 = (((x4421<<x4422)+x4423)-x4424);

    if (t60 != 17998728411699824131LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x4541 = INT16_MAX;
	uint8_t x4542 = 1U;
	int8_t x4543 = 18;
	int32_t t61 = -38578;

    t61 = (((x4541<<x4542)+x4543)-x4544);

    if (t61 != 32785) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x4619 = INT64_MIN;
	int16_t x4620 = -1;
	volatile int64_t t62 = 6649424307857430LL;

    t62 = (((x4617<<x4618)+x4619)-x4620);

    if (t62 != -9223372036851540807LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x4643 = 3817;
	int32_t x4644 = INT32_MAX;
	uint64_t t63 = 2102881164481961152LLU;

    t63 = (((x4641<<x4642)+x4643)-x4644);

    if (t63 != 14260268518915051242LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x4762 = 13U;
	static int64_t x4763 = INT64_MIN;
	int16_t x4764 = INT16_MAX;
	int64_t t64 = -348142LL;

    t64 = (((x4761<<x4762)+x4763)-x4764);

    if (t64 != -9223372036854546431LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x4797 = INT16_MAX;
	int32_t x4799 = INT32_MIN;
	volatile int32_t x4800 = -1;
	int32_t t65 = 19590;

    t65 = (((x4797<<x4798)+x4799)-x4800);

    if (t65 != -2147221511) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x4945 = 369842981527850959LL;
	volatile int16_t x4947 = INT16_MIN;
	int16_t x4948 = -1;
	static int64_t t66 = -49318713145LL;

    t66 = (((x4945<<x4946)+x4947)-x4948);

    if (t66 != 739685963055669151LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x4969 = 25;
	static uint8_t x4970 = 1U;
	int8_t x4972 = -1;
	volatile uint32_t t67 = 245055U;

    t67 = (((x4969<<x4970)+x4971)-x4972);

    if (t67 != 494U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x4989 = 3745009399LL;
	volatile uint8_t x4990 = 24U;
	uint16_t x4991 = 2870U;
	uint16_t x4992 = UINT16_MAX;

    t68 = (((x4989<<x4990)+x4991)-x4992);

    if (t68 != 62830831608990519LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x5033 = 106U;
	int16_t x5034 = 1;
	volatile int64_t t69 = 269772LL;

    t69 = (((x5033<<x5034)+x5035)-x5036);

    if (t69 != 528158939593914LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x5061 = INT8_MAX;
	uint8_t x5062 = 1U;
	static int16_t x5063 = INT16_MIN;
	static uint64_t x5064 = 907573278861LLU;
	uint64_t t70 = 135277121146LLU;

    t70 = (((x5061<<x5062)+x5063)-x5064);

    if (t70 != 18446743166136240241LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x5142 = 5U;
	volatile int64_t x5143 = 8187443386LL;
	static volatile int8_t x5144 = INT8_MIN;

    t71 = (((x5141<<x5142)+x5143)-x5144);

    if (t71 != 8188492058LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x5189 = 4322LLU;
	uint8_t x5190 = 0U;
	static uint8_t x5192 = 0U;

    t72 = (((x5189<<x5190)+x5191)-x5192);

    if (t72 != 4577LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x5442 = 15U;
	int8_t x5443 = 0;
	volatile int64_t x5444 = INT64_MAX;

    t73 = (((x5441<<x5442)+x5443)-x5444);

    if (t73 != -9223372036795006975LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x5450 = 4U;
	int16_t x5451 = INT16_MAX;
	volatile uint32_t x5452 = UINT32_MAX;
	volatile uint32_t t74 = 13719U;

    t74 = (((x5449<<x5450)+x5451)-x5452);

    if (t74 != 33424U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x5533 = UINT32_MAX;
	volatile int32_t x5535 = -1;
	int64_t x5536 = -1LL;
	volatile int64_t t75 = -8330998035000212LL;

    t75 = (((x5533<<x5534)+x5535)-x5536);

    if (t75 != 4294967288LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x5621 = 0U;
	int32_t x5622 = 1;
	static int16_t x5623 = INT16_MIN;
	volatile int16_t x5624 = INT16_MAX;
	static volatile int32_t t76 = -55539422;

    t76 = (((x5621<<x5622)+x5623)-x5624);

    if (t76 != -65535) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x5633 = 36U;
	uint16_t x5635 = 22U;
	uint16_t x5636 = 6U;

    t77 = (((x5633<<x5634)+x5635)-x5636);

    if (t77 != 2320) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x5849 = 9566;
	int32_t x5850 = 1;
	uint32_t x5851 = 1854835U;
	volatile int64_t x5852 = 398LL;

    t78 = (((x5849<<x5850)+x5851)-x5852);

    if (t78 != 1873569LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x5857 = UINT8_MAX;
	volatile int16_t x5859 = -7659;
	volatile int8_t x5860 = INT8_MAX;

    t79 = (((x5857<<x5858)+x5859)-x5860);

    if (t79 != 16703894) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x5862 = 0;
	volatile int16_t x5863 = INT16_MIN;
	volatile int32_t x5864 = -1;
	int32_t t80 = -57;

    t80 = (((x5861<<x5862)+x5863)-x5864);

    if (t80 != -32640) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x5877 = 68U;
	static uint8_t x5878 = 1U;
	uint16_t x5879 = 102U;
	volatile int32_t t81 = 0;

    t81 = (((x5877<<x5878)+x5879)-x5880);

    if (t81 != 222) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x5978 = 12;
	uint8_t x5979 = 5U;
	volatile int64_t t82 = 6850077326713677LL;

    t82 = (((x5977<<x5978)+x5979)-x5980);

    if (t82 != 196293079261677510LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x6007 = -1;
	int32_t x6008 = INT32_MAX;

    t83 = (((x6005<<x6006)+x6007)-x6008);

    if (t83 != -2147474866) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x6118 = 0U;
	uint16_t x6119 = 393U;
	int32_t x6120 = -1;

    t84 = (((x6117<<x6118)+x6119)-x6120);

    if (t84 != 444) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x6225 = 0U;
	static uint16_t x6226 = 1U;
	int16_t x6227 = -1;

    t85 = (((x6225<<x6226)+x6227)-x6228);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x6234 = 24LL;
	volatile uint64_t t86 = 78495370344LLU;

    t86 = (((x6233<<x6234)+x6235)-x6236);

    if (t86 != 14407752606782848897LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x6285 = 54U;
	int8_t x6286 = 19;
	uint8_t x6287 = UINT8_MAX;
	static uint8_t x6288 = 62U;

    t87 = (((x6285<<x6286)+x6287)-x6288);

    if (t87 != 28311745) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x6477 = 0U;
	volatile uint8_t x6478 = 0U;
	volatile uint32_t x6479 = UINT32_MAX;
	int16_t x6480 = -6;
	static volatile uint32_t t88 = 602807381U;

    t88 = (((x6477<<x6478)+x6479)-x6480);

    if (t88 != 5U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x6533 = 1047125U;
	static volatile int8_t x6534 = 9;
	int16_t x6535 = 8;
	volatile int16_t x6536 = INT16_MIN;
	volatile uint32_t t89 = 14924U;

    t89 = (((x6533<<x6534)+x6535)-x6536);

    if (t89 != 536160776U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x6625 = INT8_MAX;
	uint16_t x6626 = 0U;
	int32_t x6627 = 4;
	int32_t x6628 = -1;
	int32_t t90 = -8058;

    t90 = (((x6625<<x6626)+x6627)-x6628);

    if (t90 != 132) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x6637 = UINT16_MAX;
	int8_t x6638 = 0;
	int64_t x6639 = INT64_MIN;
	int16_t x6640 = INT16_MIN;
	volatile int64_t t91 = 1010LL;

    t91 = (((x6637<<x6638)+x6639)-x6640);

    if (t91 != -9223372036854677505LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x6757 = 10057LL;
	static uint8_t x6758 = 1U;
	static volatile int32_t x6759 = INT32_MIN;
	volatile int64_t x6760 = INT64_MIN;
	volatile int64_t t92 = -156231835792LL;

    t92 = (((x6757<<x6758)+x6759)-x6760);

    if (t92 != 9223372034707312274LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x6830 = 12U;
	int64_t x6831 = INT64_MIN;
	uint16_t x6832 = 502U;
	int64_t t93 = 33345189807411LL;

    t93 = (((x6829<<x6830)+x6831)-x6832);

    if (t93 != -9223372032559813110LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x6865 = UINT64_MAX;
	static uint8_t x6866 = 0U;
	int32_t x6867 = INT32_MIN;
	volatile int8_t x6868 = -1;

    t94 = (((x6865<<x6866)+x6867)-x6868);

    if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
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


    return 0;
}

