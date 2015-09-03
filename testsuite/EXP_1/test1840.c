#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = UINT64_MAX;
int16_t x4 = 1;
int16_t x57 = INT16_MIN;
uint32_t x58 = 929U;
int16_t x107 = 27;
int8_t x140 = 2;
int64_t x234 = INT64_MAX;
static uint32_t x235 = 23288772U;
int16_t x236 = 1;
int64_t t7 = -5883328999423836LL;
uint16_t x283 = 10U;
int64_t t8 = -3LL;
uint64_t t9 = 172728314LLU;
int8_t x353 = 1;
int64_t x354 = -82LL;
volatile int64_t x529 = INT64_MIN;
volatile uint64_t x590 = UINT64_MAX;
volatile uint64_t t14 = 6513LLU;
uint32_t x601 = UINT32_MAX;
uint32_t t15 = 1970123299U;
uint8_t x720 = 3U;
uint64_t x757 = 16689764668543LLU;
volatile uint64_t t17 = 3458234850LLU;
int8_t x1025 = 1;
int16_t x1027 = INT16_MAX;
int64_t x1169 = INT64_MIN;
volatile int64_t x1189 = INT64_MAX;
uint8_t x1192 = 41U;
int16_t x1492 = 29;
uint32_t x1513 = 100609211U;
volatile int64_t x1826 = INT64_MAX;
volatile uint64_t t32 = 693692388977LLU;
uint8_t x1893 = 4U;
volatile int64_t x1894 = -19609777LL;
volatile uint16_t x2051 = UINT16_MAX;
int64_t x2058 = INT64_MIN;
int32_t x2065 = 25580624;
int64_t x2067 = INT64_MIN;
volatile uint64_t t38 = 269079547311130LLU;
uint8_t x2162 = 3U;
uint32_t x2163 = 10513U;
int16_t x2175 = 14;
uint8_t x2264 = 0U;
uint64_t x2337 = 88585822099LLU;
static uint64_t x2362 = UINT64_MAX;
uint16_t x2364 = 4U;
volatile uint64_t t44 = 38683118119634142LLU;
uint64_t x2379 = 8242946578325538472LLU;
uint16_t x2454 = UINT16_MAX;
volatile int8_t x2469 = 55;
int16_t x2472 = 3;
volatile uint16_t x2578 = 6628U;
int8_t x2580 = 1;
uint8_t x2636 = 0U;
int32_t x2661 = -1;
int8_t x2683 = 1;
static uint32_t t52 = 16724973U;
int64_t x2765 = -55LL;
uint64_t t56 = 2915LLU;
static uint16_t x2820 = 6U;
volatile uint32_t x2846 = 1859U;
int16_t x2847 = INT16_MIN;
static uint32_t t58 = 1575301252U;
uint64_t x2893 = 631LLU;
uint64_t x2895 = 396956260182678161LLU;
uint32_t x2896 = 8U;
int32_t x2922 = INT32_MAX;
int64_t x3113 = 658739894965063LL;
int32_t x3222 = -1;
int8_t x3223 = INT8_MAX;
volatile uint64_t x3237 = 3871411877101169LLU;
uint8_t x3238 = UINT8_MAX;
int32_t x3244 = 0;
int32_t x3403 = 5;
volatile int32_t t70 = 3969;
static int16_t x3495 = 1;
int8_t x3645 = 0;
int64_t x3690 = 1191147063774LL;
static volatile int16_t x3692 = 44;
int64_t t78 = -1LL;
static uint64_t x3714 = 479217LLU;
int16_t x3867 = INT16_MIN;
static uint16_t x3877 = 6U;
volatile uint32_t t82 = 55189490U;
int64_t t83 = 16532978LL;
uint32_t t86 = 67563U;
uint8_t x4127 = UINT8_MAX;
volatile uint16_t x4128 = 27U;
uint8_t x4242 = 3U;
static int8_t x4297 = 1;
uint16_t x4436 = 0U;
volatile uint64_t x4438 = UINT64_MAX;
int32_t x4471 = 64067;
uint64_t x4472 = 20LLU;
uint8_t x4593 = UINT8_MAX;
uint16_t x4594 = 7U;
volatile int8_t x4596 = 14;
static volatile int32_t t95 = -6764;
int16_t x4626 = INT16_MIN;
uint32_t x4710 = UINT32_MAX;
int8_t x4712 = 12;


void f0(void) {
	int16_t x1 = -1;
	uint8_t x2 = 2U;
	uint64_t t0 = 48412603077LLU;

	t0 = (((x1&x2)|x3)>>x4);

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x59 = INT16_MIN;
	static int32_t x60 = 0;
	uint32_t t1 = 183U;

	t1 = (((x57&x58)|x59)>>x60);

	if (t1 != 4294934528U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int8_t x78 = -20;
	static int16_t x79 = -2;
	static int8_t x80 = 1;
	volatile uint64_t t2 = 1690723883LLU;

	t2 = (((x77&x78)|x79)>>x80);

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x105 = -1;
	uint64_t x106 = 146873346274LLU;
	int16_t x108 = 0;
	volatile uint64_t t3 = 70LLU;

	t3 = (((x105&x106)|x107)>>x108);

	if (t3 != 146873346299LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x137 = 0U;
	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = 5U;
	volatile int32_t t4 = -6872624;

	t4 = (((x137&x138)|x139)>>x140);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x141 = UINT32_MAX;
	static int32_t x142 = INT32_MIN;
	int16_t x143 = -1;
	uint8_t x144 = 1U;
	uint32_t t5 = 0U;

	t5 = (((x141&x142)|x143)>>x144);

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x233 = INT64_MIN;
	static int64_t t6 = 90627765666LL;

	t6 = (((x233&x234)|x235)>>x236);

	if (t6 != 11644386LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x237 = 1306987657U;
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MAX;
	uint32_t x240 = 1U;

	t7 = (((x237&x238)|x239)>>x240);

	if (t7 != 16383LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x281 = 4LL;
	int64_t x282 = -1LL;
	uint16_t x284 = 1U;

	t8 = (((x281&x282)|x283)>>x284);

	if (t8 != 7LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x345 = INT8_MIN;
	uint8_t x346 = 11U;
	uint64_t x347 = 6286604LLU;
	static uint8_t x348 = 44U;

	t9 = (((x345&x346)|x347)>>x348);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x355 = 170851279LL;
	int16_t x356 = 5;
	volatile int64_t t10 = 1016284278919194583LL;

	t10 = (((x353&x354)|x355)>>x356);

	if (t10 != 5339102LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x409 = 0;
	int64_t x410 = INT64_MAX;
	volatile uint64_t x411 = 1425061LLU;
	static uint8_t x412 = 1U;
	uint64_t t11 = 16LLU;

	t11 = (((x409&x410)|x411)>>x412);

	if (t11 != 712530LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x433 = 25U;
	uint64_t x434 = 5537056484099LLU;
	int16_t x435 = INT16_MAX;
	uint64_t x436 = 11LLU;
	volatile uint64_t t12 = 709LLU;

	t12 = (((x433&x434)|x435)>>x436);

	if (t12 != 15LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x530 = INT64_MAX;
	uint64_t x531 = 59LLU;
	int64_t x532 = 2LL;
	volatile uint64_t t13 = 56958151605616LLU;

	t13 = (((x529&x530)|x531)>>x532);

	if (t13 != 14LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x589 = -14112;
	uint8_t x591 = 3U;
	volatile int8_t x592 = 1;

	t14 = (((x589&x590)|x591)>>x592);

	if (t14 != 9223372036854768753LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x602 = 81031U;
	int32_t x603 = 193233;
	uint32_t x604 = 1U;

	t15 = (((x601&x602)|x603)>>x604);

	if (t15 != 130923U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x717 = INT16_MAX;
	volatile uint64_t x718 = UINT64_MAX;
	int16_t x719 = -1;
	static uint64_t t16 = 2705767327477442973LLU;

	t16 = (((x717&x718)|x719)>>x720);

	if (t16 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x758 = 3U;
	static int64_t x759 = INT64_MAX;
	uint32_t x760 = 2U;

	t17 = (((x757&x758)|x759)>>x760);

	if (t17 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x789 = INT64_MIN;
	int64_t x790 = 452338925LL;
	uint8_t x791 = UINT8_MAX;
	volatile uint8_t x792 = 2U;
	int64_t t18 = 7148LL;

	t18 = (((x789&x790)|x791)>>x792);

	if (t18 != 63LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x809 = 1;
	int64_t x810 = 68144396579LL;
	static uint32_t x811 = 7453380U;
	int8_t x812 = 25;
	volatile int64_t t19 = 148678555027962511LL;

	t19 = (((x809&x810)|x811)>>x812);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x813 = -1;
	uint16_t x814 = 4785U;
	uint32_t x815 = UINT32_MAX;
	volatile uint8_t x816 = 2U;
	volatile uint32_t t20 = 3U;

	t20 = (((x813&x814)|x815)>>x816);

	if (t20 != 1073741823U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x817 = -7;
	volatile uint8_t x818 = UINT8_MAX;
	volatile uint32_t x819 = UINT32_MAX;
	volatile uint16_t x820 = 6U;
	uint32_t t21 = 117925U;

	t21 = (((x817&x818)|x819)>>x820);

	if (t21 != 67108863U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x913 = INT64_MIN;
	volatile uint32_t x914 = 15U;
	volatile int16_t x915 = 458;
	uint8_t x916 = 3U;
	int64_t t22 = -1528185397244LL;

	t22 = (((x913&x914)|x915)>>x916);

	if (t22 != 57LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1026 = 0;
	uint8_t x1028 = 12U;
	int32_t t23 = 52;

	t23 = (((x1025&x1026)|x1027)>>x1028);

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1037 = -1;
	int64_t x1038 = INT64_MAX;
	uint32_t x1039 = 2000714U;
	uint8_t x1040 = 4U;
	volatile int64_t t24 = 692821658LL;

	t24 = (((x1037&x1038)|x1039)>>x1040);

	if (t24 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1170 = 1671U;
	uint16_t x1171 = 17223U;
	uint16_t x1172 = 40U;
	int64_t t25 = 86LL;

	t25 = (((x1169&x1170)|x1171)>>x1172);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1190 = 466322LLU;
	int16_t x1191 = -1127;
	static volatile uint64_t t26 = 361867LLU;

	t26 = (((x1189&x1190)|x1191)>>x1192);

	if (t26 != 8388607LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1241 = -1;
	int64_t x1242 = 431942566545LL;
	uint8_t x1243 = 16U;
	uint8_t x1244 = 0U;
	static int64_t t27 = -1LL;

	t27 = (((x1241&x1242)|x1243)>>x1244);

	if (t27 != 431942566545LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1245 = INT8_MAX;
	uint32_t x1246 = 395U;
	volatile int16_t x1247 = INT16_MAX;
	static volatile uint8_t x1248 = 10U;
	uint32_t t28 = 6084938U;

	t28 = (((x1245&x1246)|x1247)>>x1248);

	if (t28 != 31U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1481 = 380047U;
	int64_t x1482 = INT64_MAX;
	uint8_t x1483 = UINT8_MAX;
	static uint16_t x1484 = 44U;
	volatile int64_t t29 = 21772LL;

	t29 = (((x1481&x1482)|x1483)>>x1484);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1489 = UINT16_MAX;
	int8_t x1490 = INT8_MAX;
	int16_t x1491 = INT16_MAX;
	static int32_t t30 = -167;

	t30 = (((x1489&x1490)|x1491)>>x1492);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1514 = INT8_MAX;
	static int64_t x1515 = 1205143LL;
	uint16_t x1516 = 0U;
	volatile int64_t t31 = -2731LL;

	t31 = (((x1513&x1514)|x1515)>>x1516);

	if (t31 != 1205183LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1825 = 4279164792LLU;
	int32_t x1827 = INT32_MAX;
	uint8_t x1828 = 4U;

	t32 = (((x1825&x1826)|x1827)>>x1828);

	if (t32 != 268435455LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1895 = 45762092791520357LLU;
	static uint8_t x1896 = 0U;
	uint64_t t33 = 411618LLU;

	t33 = (((x1893&x1894)|x1895)>>x1896);

	if (t33 != 45762092791520357LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1965 = INT64_MIN;
	static uint64_t x1966 = UINT64_MAX;
	uint64_t x1967 = 635127LLU;
	int8_t x1968 = 3;
	uint64_t t34 = 20928820363240621LLU;

	t34 = (((x1965&x1966)|x1967)>>x1968);

	if (t34 != 1152921504606926366LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1993 = 1;
	uint64_t x1994 = 364886LLU;
	uint8_t x1995 = 1U;
	int8_t x1996 = 7;
	uint64_t t35 = 1LLU;

	t35 = (((x1993&x1994)|x1995)>>x1996);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2049 = 31U;
	static uint8_t x2050 = 1U;
	int64_t x2052 = 0LL;
	uint32_t t36 = 226U;

	t36 = (((x2049&x2050)|x2051)>>x2052);

	if (t36 != 65535U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2057 = 0;
	volatile uint8_t x2059 = UINT8_MAX;
	uint16_t x2060 = 3U;
	volatile int64_t t37 = -392010006476LL;

	t37 = (((x2057&x2058)|x2059)>>x2060);

	if (t37 != 31LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2066 = 6960963572440828LLU;
	static volatile uint8_t x2068 = 0U;

	t38 = (((x2065&x2066)|x2067)>>x2068);

	if (t38 != 9223372036871951440LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2161 = 13U;
	uint8_t x2164 = 25U;
	uint32_t t39 = 951U;

	t39 = (((x2161&x2162)|x2163)>>x2164);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2173 = INT16_MIN;
	uint64_t x2174 = 543470648LLU;
	int32_t x2176 = 1;
	volatile uint64_t t40 = 17022860LLU;

	t40 = (((x2173&x2174)|x2175)>>x2176);

	if (t40 != 271728647LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2205 = 305043347417LL;
	static int64_t x2206 = 155918299LL;
	static uint64_t x2207 = 6399648549260712155LLU;
	uint8_t x2208 = 3U;
	volatile uint64_t t41 = 126193LLU;

	t41 = (((x2205&x2206)|x2207)>>x2208);

	if (t41 != 799956068657589243LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2261 = UINT8_MAX;
	int32_t x2262 = INT32_MAX;
	uint64_t x2263 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (((x2261&x2262)|x2263)>>x2264);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2338 = 26LLU;
	int8_t x2339 = INT8_MIN;
	volatile int8_t x2340 = 0;
	uint64_t t43 = 48270499959880552LLU;

	t43 = (((x2337&x2338)|x2339)>>x2340);

	if (t43 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x2361 = UINT32_MAX;
	int8_t x2363 = -1;

	t44 = (((x2361&x2362)|x2363)>>x2364);

	if (t44 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2377 = -1;
	int64_t x2378 = INT64_MIN;
	uint8_t x2380 = 1U;
	volatile uint64_t t45 = 279193LLU;

	t45 = (((x2377&x2378)|x2379)>>x2380);

	if (t45 != 8733159307590157140LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2453 = 0;
	uint32_t x2455 = UINT32_MAX;
	volatile uint8_t x2456 = 0U;
	uint32_t t46 = UINT32_MAX;

	t46 = (((x2453&x2454)|x2455)>>x2456);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2470 = UINT16_MAX;
	uint8_t x2471 = 62U;
	volatile int32_t t47 = -255073221;

	t47 = (((x2469&x2470)|x2471)>>x2472);

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2577 = 24250U;
	uint64_t x2579 = 7182LLU;
	volatile uint64_t t48 = 190127975706636832LLU;

	t48 = (((x2577&x2578)|x2579)>>x2580);

	if (t48 != 3671LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x2633 = -14;
	uint32_t x2634 = 707784U;
	uint8_t x2635 = 1U;
	uint32_t t49 = 43011U;

	t49 = (((x2633&x2634)|x2635)>>x2636);

	if (t49 != 707777U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x2662 = 1U;
	static int32_t x2663 = 65;
	static volatile uint8_t x2664 = 3U;
	static volatile int32_t t50 = 16451286;

	t50 = (((x2661&x2662)|x2663)>>x2664);

	if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2681 = INT16_MAX;
	static int32_t x2682 = -413;
	volatile uint64_t x2684 = 5LLU;
	int32_t t51 = 544786856;

	t51 = (((x2681&x2682)|x2683)>>x2684);

	if (t51 != 1011) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x2685 = 28U;
	volatile uint16_t x2686 = UINT16_MAX;
	volatile uint32_t x2687 = UINT32_MAX;
	uint8_t x2688 = 28U;

	t52 = (((x2685&x2686)|x2687)>>x2688);

	if (t52 != 15U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x2725 = 155546732269089820LLU;
	static volatile int64_t x2726 = INT64_MIN;
	static uint8_t x2727 = 48U;
	int8_t x2728 = 0;
	volatile uint64_t t53 = 52892028436884817LLU;

	t53 = (((x2725&x2726)|x2727)>>x2728);

	if (t53 != 48LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x2766 = UINT32_MAX;
	uint8_t x2767 = UINT8_MAX;
	volatile int32_t x2768 = 39;
	volatile int64_t t54 = 8216245894505233LL;

	t54 = (((x2765&x2766)|x2767)>>x2768);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2785 = 234528795453522LL;
	uint16_t x2786 = 251U;
	int32_t x2787 = 743626840;
	volatile uint32_t x2788 = 9U;
	int64_t t55 = -3300457833LL;

	t55 = (((x2785&x2786)|x2787)>>x2788);

	if (t55 != 1452396LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x2801 = INT8_MAX;
	static uint64_t x2802 = UINT64_MAX;
	uint16_t x2803 = UINT16_MAX;
	uint32_t x2804 = 60U;

	t56 = (((x2801&x2802)|x2803)>>x2804);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2817 = 4052408830085401LLU;
	int16_t x2818 = INT16_MIN;
	uint16_t x2819 = 12U;
	static volatile uint64_t t57 = 10620934408LLU;

	t57 = (((x2817&x2818)|x2819)>>x2820);

	if (t57 != 63318887969792LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2845 = 13;
	int64_t x2848 = 3LL;

	t58 = (((x2845&x2846)|x2847)>>x2848);

	if (t58 != 536866816U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2885 = -3518;
	uint64_t x2886 = 59038174279643LLU;
	volatile int16_t x2887 = 158;
	static uint16_t x2888 = 34U;
	uint64_t t59 = 0LLU;

	t59 = (((x2885&x2886)|x2887)>>x2888);

	if (t59 != 3436LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2894 = INT16_MIN;
	uint64_t t60 = 750220368088659185LLU;

	t60 = (((x2893&x2894)|x2895)>>x2896);

	if (t60 != 1550610391338586LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2921 = 18;
	volatile uint64_t x2923 = 887LLU;
	uint16_t x2924 = 3U;
	static volatile uint64_t t61 = 7551778LLU;

	t61 = (((x2921&x2922)|x2923)>>x2924);

	if (t61 != 110LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2993 = UINT8_MAX;
	volatile int64_t x2994 = INT64_MIN;
	uint8_t x2995 = UINT8_MAX;
	uint8_t x2996 = 6U;
	volatile int64_t t62 = -1LL;

	t62 = (((x2993&x2994)|x2995)>>x2996);

	if (t62 != 3LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3114 = -1;
	static uint32_t x3115 = 15829315U;
	int32_t x3116 = 0;
	volatile int64_t t63 = -788LL;

	t63 = (((x3113&x3114)|x3115)>>x3116);

	if (t63 != 658739903454023LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3149 = 55979;
	int8_t x3150 = INT8_MIN;
	int32_t x3151 = INT32_MAX;
	int8_t x3152 = 31;
	int32_t t64 = -3669091;

	t64 = (((x3149&x3150)|x3151)>>x3152);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3193 = UINT16_MAX;
	static volatile int16_t x3194 = INT16_MIN;
	int64_t x3195 = 12906334LL;
	int32_t x3196 = 37;
	volatile int64_t t65 = 60720LL;

	t65 = (((x3193&x3194)|x3195)>>x3196);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x3221 = UINT32_MAX;
	int32_t x3224 = 15;
	uint32_t t66 = 4796U;

	t66 = (((x3221&x3222)|x3223)>>x3224);

	if (t66 != 131071U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3239 = INT64_MIN;
	uint32_t x3240 = 3U;
	volatile uint64_t t67 = 142106397100542LLU;

	t67 = (((x3237&x3238)|x3239)>>x3240);

	if (t67 != 1152921504606846990LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3241 = 54189362;
	uint16_t x3242 = 23529U;
	static int8_t x3243 = INT8_MAX;
	volatile int32_t t68 = 71994;

	t68 = (((x3241&x3242)|x3243)>>x3244);

	if (t68 != 22911) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x3281 = -492;
	uint16_t x3282 = 1991U;
	int8_t x3283 = 0;
	static uint8_t x3284 = 16U;
	volatile int32_t t69 = -28534239;

	t69 = (((x3281&x3282)|x3283)>>x3284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3401 = INT32_MIN;
	volatile int8_t x3402 = INT8_MAX;
	uint8_t x3404 = 0U;

	t70 = (((x3401&x3402)|x3403)>>x3404);

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x3405 = 8062;
	volatile uint8_t x3406 = 106U;
	static volatile uint32_t x3407 = 6695U;
	int8_t x3408 = 0;
	static uint32_t t71 = 171630304U;

	t71 = (((x3405&x3406)|x3407)>>x3408);

	if (t71 != 6767U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3441 = 3114396U;
	volatile uint32_t x3442 = UINT32_MAX;
	uint8_t x3443 = UINT8_MAX;
	uint8_t x3444 = 29U;
	uint32_t t72 = 409011U;

	t72 = (((x3441&x3442)|x3443)>>x3444);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3461 = INT64_MAX;
	uint64_t x3462 = 54358817LLU;
	uint8_t x3463 = 1U;
	int8_t x3464 = 1;
	uint64_t t73 = 41470551896LLU;

	t73 = (((x3461&x3462)|x3463)>>x3464);

	if (t73 != 27179408LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x3493 = INT16_MIN;
	volatile uint8_t x3494 = 30U;
	static uint16_t x3496 = 3U;
	int32_t t74 = 43891541;

	t74 = (((x3493&x3494)|x3495)>>x3496);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3525 = -883265476637LL;
	volatile uint16_t x3526 = UINT16_MAX;
	int16_t x3527 = INT16_MAX;
	uint8_t x3528 = 54U;
	int64_t t75 = -128861176286225LL;

	t75 = (((x3525&x3526)|x3527)>>x3528);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3646 = UINT8_MAX;
	uint16_t x3647 = UINT16_MAX;
	volatile int8_t x3648 = 5;
	int32_t t76 = -1916;

	t76 = (((x3645&x3646)|x3647)>>x3648);

	if (t76 != 2047) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3669 = INT64_MIN;
	int32_t x3670 = 2;
	uint64_t x3671 = 75225133032LLU;
	int64_t x3672 = 22LL;
	uint64_t t77 = 1LLU;

	t77 = (((x3669&x3670)|x3671)>>x3672);

	if (t77 != 17935LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x3689 = -1018500;
	uint32_t x3691 = UINT32_MAX;

	t78 = (((x3689&x3690)|x3691)>>x3692);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3713 = INT32_MAX;
	uint64_t x3715 = UINT64_MAX;
	int8_t x3716 = 14;
	uint64_t t79 = 65LLU;

	t79 = (((x3713&x3714)|x3715)>>x3716);

	if (t79 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x3721 = 27U;
	volatile int32_t x3722 = -1;
	int16_t x3723 = 11125;
	int8_t x3724 = 0;
	int32_t t80 = 42813516;

	t80 = (((x3721&x3722)|x3723)>>x3724);

	if (t80 != 11135) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3865 = 10U;
	uint16_t x3866 = 1815U;
	uint8_t x3868 = 20U;
	uint32_t t81 = 25U;

	t81 = (((x3865&x3866)|x3867)>>x3868);

	if (t81 != 4095U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3878 = 940U;
	uint32_t x3879 = 2U;
	uint8_t x3880 = 0U;

	t82 = (((x3877&x3878)|x3879)>>x3880);

	if (t82 != 6U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3917 = 5U;
	volatile uint8_t x3918 = 7U;
	static volatile int64_t x3919 = 35651LL;
	volatile int16_t x3920 = 33;

	t83 = (((x3917&x3918)|x3919)>>x3920);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3945 = 1;
	int32_t x3946 = -718124879;
	uint64_t x3947 = 78573LLU;
	volatile uint16_t x3948 = 40U;
	volatile uint64_t t84 = 441232095372365LLU;

	t84 = (((x3945&x3946)|x3947)>>x3948);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x3985 = UINT32_MAX;
	int32_t x3986 = -1;
	int8_t x3987 = INT8_MIN;
	static volatile uint8_t x3988 = 23U;
	volatile uint32_t t85 = 11513674U;

	t85 = (((x3985&x3986)|x3987)>>x3988);

	if (t85 != 511U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3997 = 190U;
	uint32_t x3998 = UINT32_MAX;
	static int16_t x3999 = INT16_MIN;
	static volatile int8_t x4000 = 29;

	t86 = (((x3997&x3998)|x3999)>>x4000);

	if (t86 != 7U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4037 = INT8_MAX;
	int64_t x4038 = -1LL;
	uint8_t x4039 = UINT8_MAX;
	int8_t x4040 = 57;
	volatile int64_t t87 = -31280265497428817LL;

	t87 = (((x4037&x4038)|x4039)>>x4040);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4125 = INT16_MAX;
	static int16_t x4126 = 1838;
	volatile int32_t t88 = -43429;

	t88 = (((x4125&x4126)|x4127)>>x4128);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4157 = 114;
	static uint64_t x4158 = UINT64_MAX;
	static volatile int64_t x4159 = INT64_MIN;
	uint64_t x4160 = 1LLU;
	uint64_t t89 = 3719703234282LLU;

	t89 = (((x4157&x4158)|x4159)>>x4160);

	if (t89 != 4611686018427387961LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4241 = 5398632811984936251LLU;
	uint32_t x4243 = 13735776U;
	static int32_t x4244 = 1;
	uint64_t t90 = 1260LLU;

	t90 = (((x4241&x4242)|x4243)>>x4244);

	if (t90 != 6867889LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4298 = INT8_MAX;
	int32_t x4299 = 162054;
	volatile int8_t x4300 = 0;
	int32_t t91 = 6820;

	t91 = (((x4297&x4298)|x4299)>>x4300);

	if (t91 != 162055) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x4433 = INT16_MIN;
	static uint64_t x4434 = UINT64_MAX;
	volatile int64_t x4435 = 1476LL;
	volatile uint64_t t92 = 3741173LLU;

	t92 = (((x4433&x4434)|x4435)>>x4436);

	if (t92 != 18446744073709520324LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4437 = INT8_MIN;
	static int64_t x4439 = INT64_MIN;
	uint32_t x4440 = 1U;
	static volatile uint64_t t93 = 286327294267875160LLU;

	t93 = (((x4437&x4438)|x4439)>>x4440);

	if (t93 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4469 = INT16_MAX;
	uint16_t x4470 = 1U;
	static volatile int32_t t94 = -323;

	t94 = (((x4469&x4470)|x4471)>>x4472);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4595 = 66049;

	t95 = (((x4593&x4594)|x4595)>>x4596);

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x4609 = 61615010158158310LL;
	volatile int64_t x4610 = INT64_MIN;
	static uint16_t x4611 = UINT16_MAX;
	uint16_t x4612 = 1U;
	int64_t t96 = -1317LL;

	t96 = (((x4609&x4610)|x4611)>>x4612);

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4625 = INT8_MIN;
	uint32_t x4627 = UINT32_MAX;
	uint8_t x4628 = 3U;
	static volatile uint32_t t97 = 310148871U;

	t97 = (((x4625&x4626)|x4627)>>x4628);

	if (t97 != 536870911U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x4709 = -1;
	int16_t x4711 = -14;
	uint32_t t98 = 2307U;

	t98 = (((x4709&x4710)|x4711)>>x4712);

	if (t98 != 1048575U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4713 = INT16_MIN;
	uint32_t x4714 = UINT32_MAX;
	static int8_t x4715 = -1;
	static uint8_t x4716 = 0U;
	uint32_t t99 = UINT32_MAX;

	t99 = (((x4713&x4714)|x4715)>>x4716);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

