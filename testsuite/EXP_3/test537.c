#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
volatile int16_t x14 = INT16_MAX;
int64_t t3 = 28439588668357199LL;
volatile int64_t x51 = INT64_MIN;
int16_t x58 = -1;
volatile int32_t x59 = INT32_MAX;
volatile int8_t x69 = 1;
int32_t x87 = 649;
int32_t t9 = -202;
static int32_t t10 = 6438;
int16_t x115 = INT16_MIN;
int16_t x116 = -1;
uint16_t x143 = 29U;
int32_t x151 = INT32_MIN;
uint16_t x152 = UINT16_MAX;
uint64_t x163 = UINT64_MAX;
volatile int32_t x170 = INT32_MIN;
uint8_t x189 = 27U;
static volatile uint64_t t20 = 141546466423909773LLU;
static int8_t x196 = INT8_MIN;
uint32_t t21 = 2U;
int16_t x199 = INT16_MAX;
int16_t x216 = INT16_MIN;
int64_t x218 = -29776779LL;
int64_t x249 = -26066530000LL;
static uint64_t x250 = 5586LLU;
int32_t x251 = INT32_MIN;
int16_t x258 = -1;
int32_t t29 = -3488725;
volatile uint64_t x278 = UINT64_MAX;
uint64_t x282 = 15583068060LLU;
uint32_t x284 = 2U;
uint32_t x304 = 3U;
uint8_t x341 = 1U;
int32_t x343 = 59;
int32_t x344 = -1;
int64_t t33 = -160963008690877LL;
static uint64_t t34 = 59563850LLU;
int32_t x365 = -1;
int32_t x405 = -15996;
volatile int64_t x410 = -1LL;
uint32_t x465 = 0U;
static uint16_t x469 = UINT16_MAX;
static uint8_t x481 = 13U;
uint32_t x482 = 76544U;
volatile uint64_t t48 = 7370327988871LLU;
volatile int8_t x485 = 23;
int16_t x487 = -1;
static int8_t x524 = INT8_MAX;
int16_t x532 = 1;
static volatile int8_t x557 = -1;
int16_t x559 = -297;
int32_t x580 = -8302;
uint64_t x590 = UINT64_MAX;
volatile int64_t t59 = 113061LL;
uint64_t x611 = UINT64_MAX;
static int8_t x612 = 3;
uint16_t x650 = UINT16_MAX;
uint16_t x665 = UINT16_MAX;
int32_t x667 = INT32_MAX;
int64_t x676 = -253233904242239LL;
static int64_t t67 = 135894074386LL;
int16_t x679 = INT16_MIN;
uint32_t t68 = 69U;
int16_t x703 = INT16_MIN;
int16_t x708 = -183;
uint32_t x714 = UINT32_MAX;
uint16_t x726 = UINT16_MAX;
uint8_t x731 = 2U;
int32_t x732 = -1;
volatile int8_t x761 = 2;
int32_t x762 = -1;
int8_t x764 = -1;
int64_t x773 = -14897679393358LL;
int8_t x780 = -1;
int16_t x800 = 7;
uint8_t x809 = 45U;
static int64_t x818 = INT64_MAX;
static uint8_t x845 = UINT8_MAX;
uint8_t x853 = UINT8_MAX;
volatile int8_t x856 = -11;
volatile int32_t t85 = 8425;
int16_t x874 = INT16_MIN;
static volatile int64_t x875 = -615656874014LL;
static volatile int64_t t86 = -5016663LL;
int8_t x881 = -1;
uint8_t x894 = 97U;
volatile uint64_t x895 = UINT64_MAX;
static uint64_t t89 = 91LLU;
int8_t x922 = 3;
uint16_t x942 = 223U;
int64_t x964 = -1LL;
volatile int64_t x966 = -435LL;
int32_t x971 = INT32_MAX;
volatile int32_t t97 = 345592;
volatile uint64_t t98 = 418929798LLU;
uint32_t t99 = 82U;


void f0(void) {
	uint32_t x1 = 74891U;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = INT64_MAX;
	volatile int16_t x4 = -1;
	volatile int64_t t0 = -570598556306193127LL;

	t0 = ((x1*x2)/(x3/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = UINT8_MAX;
	uint16_t x8 = 1U;
	volatile int32_t t1 = -1;

	t1 = ((x5*x6)/(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 8090U;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = INT32_MIN;
	volatile uint32_t t2 = 308294U;

	t2 = ((x13*x14)/(x15/x16));

	if (t2 != 265085030U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	volatile int32_t x18 = -1;
	static int64_t x19 = 2093822912LL;
	uint32_t x20 = 51U;

	t3 = ((x17*x18)/(x19/x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x49 = 14LLU;
	int8_t x50 = -1;
	uint16_t x52 = 50U;
	volatile uint64_t t4 = 34LLU;

	t4 = ((x49*x50)/(x51/x52));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x57 = UINT8_MAX;
	uint64_t x60 = 858820LLU;
	static volatile uint64_t t5 = 8384819994914122LLU;

	t5 = ((x57*x58)/(x59/x60));

	if (t5 != 7378697629483820LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x70 = UINT32_MAX;
	static volatile int32_t x71 = 28059888;
	int8_t x72 = INT8_MIN;
	static volatile uint32_t t6 = 9507315U;

	t6 = ((x69*x70)/(x71/x72));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x73 = -579496098LL;
	uint16_t x74 = 3U;
	uint64_t x75 = 3393104550384LLU;
	uint32_t x76 = 2256554U;
	volatile uint64_t t7 = 1139286210428241863LLU;

	t7 = ((x73*x74)/(x75/x76));

	if (t7 != 12267846763823LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x77 = -26;
	int16_t x78 = INT16_MAX;
	static int8_t x79 = INT8_MIN;
	volatile uint32_t x80 = 2401439U;
	volatile uint32_t t8 = 937U;

	t8 = ((x77*x78)/(x79/x80));

	if (t8 != 2401630U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x85 = INT16_MAX;
	static int16_t x86 = -1;
	volatile int8_t x88 = INT8_MIN;

	t9 = ((x85*x86)/(x87/x88));

	if (t9 != 6553) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x89 = UINT8_MAX;
	static int32_t x90 = -1;
	int16_t x91 = 2982;
	int32_t x92 = -1;

	t10 = ((x89*x90)/(x91/x92));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x97 = INT8_MIN;
	volatile uint32_t x98 = 793739858U;
	int64_t x99 = INT64_MAX;
	int8_t x100 = -1;
	volatile int64_t t11 = 5189669757686371LL;

	t11 = ((x97*x98)/(x99/x100));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x113 = 1045618071LL;
	int32_t x114 = INT32_MIN;
	int64_t t12 = -69525711739163LL;

	t12 = ((x113*x114)/(x115/x116));

	if (t12 != -68525625901056LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x129 = INT16_MIN;
	uint32_t x130 = 46427159U;
	int64_t x131 = INT64_MIN;
	volatile int32_t x132 = INT32_MIN;
	int64_t t13 = -17133898237326LL;

	t13 = ((x129*x130)/(x131/x132));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x141 = UINT64_MAX;
	uint64_t x142 = UINT64_MAX;
	int8_t x144 = -1;
	volatile uint64_t t14 = 247597536519211LLU;

	t14 = ((x141*x142)/(x143/x144));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x149 = -1LL;
	volatile int64_t x150 = -1LL;
	volatile int64_t t15 = 51440994LL;

	t15 = ((x149*x150)/(x151/x152));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x161 = 16U;
	static uint8_t x162 = 97U;
	uint32_t x164 = 2550665U;
	volatile uint64_t t16 = 57748LLU;

	t16 = ((x161*x162)/(x163/x164));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x165 = UINT32_MAX;
	uint32_t x166 = 56U;
	volatile int8_t x167 = INT8_MIN;
	int16_t x168 = -1;
	uint32_t t17 = 89U;

	t17 = ((x165*x166)/(x167/x168));

	if (t17 != 33554431U) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x169 = -58899LL;
	int8_t x171 = -1;
	static uint64_t x172 = 386972LLU;
	uint64_t t18 = 8773822420641LLU;

	t18 = ((x169*x170)/(x171/x172));

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x177 = -31442020395LL;
	uint8_t x178 = 2U;
	volatile int64_t x179 = INT64_MAX;
	int32_t x180 = 13792;
	volatile int64_t t19 = 6610802770496LL;

	t19 = ((x177*x178)/(x179/x180));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x190 = 1746598589LL;
	int64_t x191 = INT64_MAX;
	volatile uint64_t x192 = 410276761270303748LLU;

	t20 = ((x189*x190)/(x191/x192));

	if (t20 != 2143552813LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x193 = UINT32_MAX;
	static int32_t x194 = -1;
	uint16_t x195 = UINT16_MAX;

	t21 = ((x193*x194)/(x195/x196));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x197 = UINT64_MAX;
	static int16_t x198 = -413;
	int8_t x200 = -1;
	static uint64_t t22 = 16393977435LLU;

	t22 = ((x197*x198)/(x199/x200));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x213 = 103807LLU;
	static int64_t x214 = -3857256033259886LL;
	uint64_t x215 = UINT64_MAX;
	uint64_t t23 = 481467LLU;

	t23 = ((x213*x214)/(x215/x216));

	if (t23 != 5418192577001149550LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x217 = 62U;
	int32_t x219 = -217978;
	uint32_t x220 = 1U;
	volatile int64_t t24 = 88LL;

	t24 = ((x217*x218)/(x219/x220));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x233 = 1054U;
	static int64_t x234 = -10529102824LL;
	volatile int64_t x235 = INT64_MAX;
	volatile int32_t x236 = INT32_MAX;
	int64_t t25 = -7215101981LL;

	t25 = ((x233*x234)/(x235/x236));

	if (t25 != -2583LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x245 = 6U;
	int16_t x246 = INT16_MIN;
	int64_t x247 = 818922542390148073LL;
	int32_t x248 = -1;
	int64_t t26 = -1LL;

	t26 = ((x245*x246)/(x247/x248));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x252 = INT16_MIN;
	volatile uint64_t t27 = 77340003LLU;

	t27 = ((x249*x250)/(x251/x252));

	if (t27 != 281472754914443LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x253 = -142168LL;
	static int8_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -26100;
	int64_t t28 = 3783174715557032183LL;

	t28 = ((x253*x254)/(x255/x256));

	if (t28 != 142168LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x257 = 2856U;
	int8_t x259 = -1;
	static int8_t x260 = -1;

	t29 = ((x257*x258)/(x259/x260));

	if (t29 != -2856) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x277 = 7;
	int32_t x279 = -1;
	int16_t x280 = -1;
	uint64_t t30 = 7662665018LLU;

	t30 = ((x277*x278)/(x279/x280));

	if (t30 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x281 = -1;
	volatile uint16_t x283 = 2441U;
	volatile uint64_t t31 = 96594805299857091LLU;

	t31 = ((x281*x282)/(x283/x284));

	if (t31 != 15120282014857773LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x301 = 14225U;
	int32_t x302 = -6082;
	static int64_t x303 = -56501429LL;
	int64_t t32 = 80198228LL;

	t32 = ((x301*x302)/(x303/x304));

	if (t32 != -223LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x342 = INT64_MAX;

	t33 = ((x341*x342)/(x343/x344));

	if (t33 != -156328339607708064LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x349 = INT8_MIN;
	uint64_t x350 = 1894617339599LLU;
	int64_t x351 = 1064968625562LL;
	static int8_t x352 = INT8_MIN;

	t34 = ((x349*x350)/(x351/x352));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x366 = 0;
	volatile int32_t x367 = -14246836;
	uint8_t x368 = UINT8_MAX;
	int32_t t35 = 1049488566;

	t35 = ((x365*x366)/(x367/x368));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x377 = -1;
	int16_t x378 = -916;
	static int64_t x379 = -1LL;
	int8_t x380 = 1;
	volatile int64_t t36 = 145117092357LL;

	t36 = ((x377*x378)/(x379/x380));

	if (t36 != -916LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x393 = UINT16_MAX;
	uint8_t x394 = UINT8_MAX;
	uint8_t x395 = 6U;
	int16_t x396 = -1;
	int32_t t37 = -17172303;

	t37 = ((x393*x394)/(x395/x396));

	if (t37 != -2785237) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x406 = -11;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t38 = 24;

	t38 = ((x405*x406)/(x407/x408));

	if (t38 != 687) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x411 = 18U;
	int64_t x412 = -1LL;
	volatile int64_t t39 = 1LL;

	t39 = ((x409*x410)/(x411/x412));

	if (t39 != -7LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x425 = 0;
	uint16_t x426 = 6U;
	int32_t x427 = INT32_MIN;
	uint8_t x428 = 3U;
	int32_t t40 = -3;

	t40 = ((x425*x426)/(x427/x428));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x441 = INT16_MIN;
	uint8_t x442 = UINT8_MAX;
	static int32_t x443 = 1674684;
	int32_t x444 = -1;
	int32_t t41 = 6666;

	t41 = ((x441*x442)/(x443/x444));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x445 = 6U;
	uint16_t x446 = UINT16_MAX;
	volatile uint64_t x447 = UINT64_MAX;
	static uint32_t x448 = 21U;
	volatile uint64_t t42 = 2018895887791107LLU;

	t42 = ((x445*x446)/(x447/x448));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x449 = 18U;
	static int32_t x450 = 361;
	int32_t x451 = -123475345;
	volatile int16_t x452 = 13;
	volatile uint32_t t43 = 1718U;

	t43 = ((x449*x450)/(x451/x452));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x461 = 435953274LL;
	uint64_t x462 = 208095375225LLU;
	volatile uint32_t x463 = UINT32_MAX;
	static int32_t x464 = INT32_MIN;
	static volatile uint64_t t44 = 3LLU;

	t44 = ((x461*x462)/(x463/x464));

	if (t44 != 16932883838759030186LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x466 = -88962;
	uint16_t x467 = 1U;
	uint8_t x468 = 1U;
	volatile uint32_t t45 = 119U;

	t45 = ((x465*x466)/(x467/x468));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x470 = 10212U;
	uint32_t x471 = UINT32_MAX;
	int32_t x472 = -1;
	volatile uint32_t t46 = 315U;

	t46 = ((x469*x470)/(x471/x472));

	if (t46 != 669243420U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x477 = 17096U;
	int8_t x478 = -9;
	static int32_t x479 = INT32_MAX;
	int32_t x480 = -3172;
	uint32_t t47 = 2485110U;

	t47 = ((x477*x478)/(x479/x480));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x483 = UINT64_MAX;
	int32_t x484 = 1;

	t48 = ((x481*x482)/(x483/x484));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x486 = 0U;
	uint8_t x488 = 1U;
	volatile int32_t t49 = -10168490;

	t49 = ((x485*x486)/(x487/x488));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x501 = 448;
	int8_t x502 = -1;
	uint8_t x503 = 29U;
	int16_t x504 = 1;
	volatile int32_t t50 = 128989;

	t50 = ((x501*x502)/(x503/x504));

	if (t50 != -15) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x517 = 1000;
	volatile uint64_t x518 = 22449550619808LLU;
	int32_t x519 = INT32_MAX;
	static int32_t x520 = -1;
	static volatile uint64_t t51 = 403363678531183923LLU;

	t51 = ((x517*x518)/(x519/x520));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x521 = 8;
	uint32_t x522 = 51U;
	uint32_t x523 = UINT32_MAX;
	uint32_t t52 = 20499962U;

	t52 = ((x521*x522)/(x523/x524));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MAX;
	int64_t x531 = INT64_MIN;
	int64_t t53 = -2171LL;

	t53 = ((x529*x530)/(x531/x532));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x558 = INT32_MAX;
	int16_t x560 = -1;
	volatile int32_t t54 = 0;

	t54 = ((x557*x558)/(x559/x560));

	if (t54 != -7230584) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x561 = 28U;
	int32_t x562 = -4;
	uint8_t x563 = 121U;
	int8_t x564 = 7;
	int32_t t55 = -14586;

	t55 = ((x561*x562)/(x563/x564));

	if (t55 != -6) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x577 = INT8_MIN;
	static int8_t x578 = 1;
	int32_t x579 = INT32_MAX;
	static int32_t t56 = -11492100;

	t56 = ((x577*x578)/(x579/x580));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x581 = -1;
	int16_t x582 = -1;
	int16_t x583 = -1;
	uint32_t x584 = 14338U;
	uint32_t t57 = 129U;

	t57 = ((x581*x582)/(x583/x584));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x589 = -1LL;
	int8_t x591 = 1;
	uint8_t x592 = 1U;
	volatile uint64_t t58 = 360461788LLU;

	t58 = ((x589*x590)/(x591/x592));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x601 = -1;
	volatile uint8_t x602 = 15U;
	static int16_t x603 = -58;
	int64_t x604 = 10LL;

	t59 = ((x601*x602)/(x603/x604));

	if (t59 != 3LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x605 = INT64_MAX;
	int8_t x606 = 0;
	uint32_t x607 = UINT32_MAX;
	int16_t x608 = 3;
	volatile int64_t t60 = 5320349648419022LL;

	t60 = ((x605*x606)/(x607/x608));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x609 = 713LLU;
	int8_t x610 = INT8_MIN;
	uint64_t t61 = 4701LLU;

	t61 = ((x609*x610)/(x611/x612));

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x629 = 29288881935027LLU;
	uint64_t x630 = 284373LLU;
	int32_t x631 = 81;
	int16_t x632 = -1;
	uint64_t t62 = 131912625LLU;

	t62 = ((x629*x630)/(x631/x632));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x641 = 4344U;
	uint16_t x642 = 13U;
	int16_t x643 = 2342;
	int8_t x644 = INT8_MAX;
	int32_t t63 = -2090221;

	t63 = ((x641*x642)/(x643/x644));

	if (t63 != 3137) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x649 = UINT64_MAX;
	int8_t x651 = INT8_MAX;
	int8_t x652 = 5;
	volatile uint64_t t64 = 385831523565LLU;

	t64 = ((x649*x650)/(x651/x652));

	if (t64 != 737869762948379443LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x666 = 4119385LL;
	uint64_t x668 = 7992279LLU;
	volatile uint64_t t65 = 43505322385215LLU;

	t65 = ((x665*x666)/(x667/x668));

	if (t65 != 1007327970LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x669 = 14U;
	volatile uint16_t x670 = 73U;
	int16_t x671 = 1697;
	static int8_t x672 = 11;
	int32_t t66 = 475841492;

	t66 = ((x669*x670)/(x671/x672));

	if (t66 != 6) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x673 = 285U;
	volatile int8_t x674 = -1;
	int64_t x675 = INT64_MIN;

	t67 = ((x673*x674)/(x675/x676));

	if (t67 != 117922LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x677 = 29U;
	int16_t x678 = INT16_MIN;
	static int8_t x680 = INT8_MIN;

	t68 = ((x677*x678)/(x679/x680));

	if (t68 != 16773504U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x697 = 235U;
	static volatile int8_t x698 = -1;
	static int16_t x699 = INT16_MIN;
	volatile int8_t x700 = -3;
	volatile uint32_t t69 = 3710U;

	t69 = ((x697*x698)/(x699/x700));

	if (t69 != 393239U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x701 = 41U;
	uint64_t x702 = 786LLU;
	volatile int64_t x704 = -1LL;
	uint64_t t70 = 416838903362LLU;

	t70 = ((x701*x702)/(x703/x704));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x705 = 1794931U;
	int32_t x706 = -1;
	uint16_t x707 = 489U;
	static uint32_t t71 = 2U;

	t71 = ((x705*x706)/(x707/x708));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x713 = 22LL;
	static int64_t x715 = -1LL;
	int8_t x716 = -1;
	int64_t t72 = 95LL;

	t72 = ((x713*x714)/(x715/x716));

	if (t72 != 94489280490LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x717 = -10873390;
	static uint32_t x718 = 126U;
	int32_t x719 = INT32_MIN;
	static int8_t x720 = -48;
	uint32_t t73 = 86U;

	t73 = ((x717*x718)/(x719/x720));

	if (t73 != 65U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x725 = INT8_MIN;
	int64_t x727 = 1566018LL;
	int64_t x728 = -1LL;
	volatile int64_t t74 = 5601LL;

	t74 = ((x725*x726)/(x727/x728));

	if (t74 != 5LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x729 = 51;
	int16_t x730 = INT16_MIN;
	int32_t t75 = -1;

	t75 = ((x729*x730)/(x731/x732));

	if (t75 != 835584) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x763 = 58U;
	volatile int32_t t76 = 24129;

	t76 = ((x761*x762)/(x763/x764));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x774 = -1;
	int64_t x775 = INT64_MIN;
	volatile int64_t x776 = INT64_MIN;
	volatile int64_t t77 = -19989LL;

	t77 = ((x773*x774)/(x775/x776));

	if (t77 != 14897679393358LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x777 = 77911763U;
	volatile int8_t x778 = -1;
	int16_t x779 = INT16_MAX;
	uint32_t t78 = 50U;

	t78 = ((x777*x778)/(x779/x780));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x797 = UINT16_MAX;
	uint8_t x798 = 18U;
	volatile uint64_t x799 = UINT64_MAX;
	volatile uint64_t t79 = 12194253639LLU;

	t79 = ((x797*x798)/(x799/x800));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x810 = -43;
	int16_t x811 = INT16_MIN;
	volatile int16_t x812 = INT16_MIN;
	int32_t t80 = -65955;

	t80 = ((x809*x810)/(x811/x812));

	if (t80 != -1935) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x817 = -1;
	uint8_t x819 = 8U;
	static volatile uint8_t x820 = 8U;
	int64_t t81 = -29408687LL;

	t81 = ((x817*x818)/(x819/x820));

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x829 = INT32_MAX;
	int8_t x830 = -1;
	volatile int64_t x831 = INT64_MIN;
	uint64_t x832 = 15LLU;
	volatile uint64_t t82 = 12110LLU;

	t82 = ((x829*x830)/(x831/x832));

	if (t82 != 29LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x833 = INT16_MIN;
	int32_t x834 = -3;
	int8_t x835 = INT8_MIN;
	uint8_t x836 = 84U;
	volatile int32_t t83 = -507;

	t83 = ((x833*x834)/(x835/x836));

	if (t83 != -98304) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x846 = 2U;
	int64_t x847 = INT64_MIN;
	volatile int32_t x848 = -23596;
	volatile int64_t t84 = 638931LL;

	t84 = ((x845*x846)/(x847/x848));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x854 = INT16_MIN;
	int32_t x855 = INT32_MIN;

	t85 = ((x853*x854)/(x855/x856));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x873 = UINT8_MAX;
	volatile int32_t x876 = INT32_MIN;

	t86 = ((x873*x874)/(x875/x876));

	if (t86 != -29216LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x882 = UINT32_MAX;
	int32_t x883 = -326329;
	int64_t x884 = -1LL;
	int64_t t87 = 5121LL;

	t87 = ((x881*x882)/(x883/x884));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x893 = -747;
	int32_t x896 = INT32_MIN;
	uint64_t t88 = 9526LLU;

	t88 = ((x893*x894)/(x895/x896));

	if (t88 != 18446744073709479157LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x913 = UINT64_MAX;
	int64_t x914 = INT64_MAX;
	int8_t x915 = 33;
	int16_t x916 = 23;

	t89 = ((x913*x914)/(x915/x916));

	if (t89 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x921 = INT8_MAX;
	int32_t x923 = INT32_MIN;
	volatile int16_t x924 = 2;
	int32_t t90 = 60303;

	t90 = ((x921*x922)/(x923/x924));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x933 = UINT16_MAX;
	int8_t x934 = 0;
	int16_t x935 = 9474;
	static int16_t x936 = -1;
	volatile int32_t t91 = 98;

	t91 = ((x933*x934)/(x935/x936));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x941 = UINT16_MAX;
	static int8_t x943 = INT8_MIN;
	uint32_t x944 = 257263840U;
	volatile uint32_t t92 = 6553883U;

	t92 = ((x941*x942)/(x943/x944));

	if (t92 != 913394U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x945 = 19;
	int32_t x946 = -5638175;
	int64_t x947 = 10LL;
	uint64_t x948 = 2LLU;
	volatile uint64_t t93 = 8557LLU;

	t93 = ((x945*x946)/(x947/x948));

	if (t93 != 3689348814720485258LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x953 = -1;
	uint16_t x954 = 16U;
	int16_t x955 = INT16_MAX;
	int8_t x956 = 2;
	int32_t t94 = 1037522;

	t94 = ((x953*x954)/(x955/x956));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x961 = 1;
	int32_t x962 = -8045;
	int16_t x963 = INT16_MAX;
	volatile int64_t t95 = 217139569314780LL;

	t95 = ((x961*x962)/(x963/x964));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x965 = 48U;
	static int64_t x967 = INT64_MAX;
	int64_t x968 = -1LL;
	static volatile int64_t t96 = -182939LL;

	t96 = ((x965*x966)/(x967/x968));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x969 = 29U;
	uint16_t x970 = 20U;
	int8_t x972 = 2;

	t97 = ((x969*x970)/(x971/x972));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x985 = INT8_MIN;
	int16_t x986 = INT16_MIN;
	int64_t x987 = 16708921464LL;
	uint64_t x988 = 4LLU;

	t98 = ((x985*x986)/(x987/x988));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x993 = 73U;
	uint8_t x994 = UINT8_MAX;
	static int16_t x995 = -1;
	uint32_t x996 = UINT32_MAX;

	t99 = ((x993*x994)/(x995/x996));

	if (t99 != 18615U) { NG(); } else { ; }
	
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

