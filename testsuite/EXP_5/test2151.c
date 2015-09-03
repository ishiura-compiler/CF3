#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 319U;
int32_t x15 = 3585;
uint16_t x25 = UINT16_MAX;
static int16_t x37 = INT16_MAX;
int16_t x51 = -1;
static int16_t x52 = INT16_MIN;
uint32_t x60 = UINT32_MAX;
volatile int32_t t7 = 31904082;
volatile int32_t x61 = INT32_MAX;
int8_t x63 = 1;
static uint16_t x65 = 13339U;
volatile int32_t x66 = INT32_MIN;
int32_t x72 = -12;
uint16_t x81 = 329U;
int32_t t11 = -18;
static int8_t x98 = INT8_MAX;
uint16_t x102 = 90U;
uint16_t x113 = 145U;
int64_t x134 = INT64_MAX;
volatile uint8_t x141 = 87U;
static int32_t t16 = -407916;
int32_t t17 = -24;
int16_t x171 = 396;
static volatile uint64_t t19 = UINT64_MAX;
int64_t x178 = -1LL;
static volatile uint8_t x181 = 1U;
static int64_t x182 = INT64_MAX;
uint8_t x184 = UINT8_MAX;
static int8_t x187 = -1;
static volatile int16_t x197 = 0;
uint16_t x199 = 3340U;
uint32_t x210 = 2866U;
volatile int64_t x215 = -1LL;
volatile int8_t x249 = 2;
uint32_t x259 = 3985084U;
static uint64_t x265 = 142LLU;
int64_t x267 = INT64_MIN;
volatile int64_t x277 = 13770179123106812LL;
volatile int8_t x279 = 2;
int64_t x287 = -55LL;
int16_t x288 = 48;
int8_t x290 = INT8_MIN;
volatile int64_t x300 = -139610589880104LL;
volatile uint32_t x309 = 200977U;
int8_t x318 = -1;
static int32_t x319 = INT32_MIN;
volatile int64_t t43 = 3147LL;
int16_t x343 = INT16_MIN;
static volatile int64_t t47 = INT64_MAX;
volatile int16_t x351 = 3;
volatile int32_t t48 = 70840067;
static int16_t x359 = -1;
int32_t t49 = -5901783;
int16_t x369 = 8094;
int16_t x370 = INT16_MIN;
int64_t x371 = INT64_MIN;
uint16_t x386 = 51U;
static int8_t x387 = 1;
volatile uint64_t x388 = UINT64_MAX;
uint32_t x392 = UINT32_MAX;
volatile int32_t x399 = -1;
static int16_t x406 = -1;
int32_t x428 = -2957542;
int64_t x430 = -1LL;
uint32_t t59 = 363115U;
uint64_t x445 = 406387365967992457LLU;
int16_t x446 = -14;
static int32_t x447 = 41505961;
volatile int32_t t61 = -55464;
volatile int32_t t63 = 30873184;
int8_t x479 = INT8_MIN;
volatile int32_t t64 = -1567652;
volatile int8_t x489 = 1;
volatile int32_t x512 = -57;
volatile uint64_t x516 = UINT64_MAX;
uint32_t x521 = 16U;
uint8_t x527 = 14U;
volatile int16_t x534 = -223;
int32_t t73 = -387;
uint16_t x549 = 6109U;
uint8_t x555 = UINT8_MAX;
static int16_t x560 = -1;
static volatile uint32_t t78 = 461276080U;
int16_t x589 = 29;
int64_t x595 = -1LL;
uint64_t x596 = UINT64_MAX;
int32_t t83 = -15732844;
int16_t x599 = INT16_MAX;
uint32_t x617 = 899336029U;
static int32_t x620 = 1;
static volatile int32_t t87 = -563294;
int16_t x661 = INT16_MAX;
volatile uint16_t x662 = UINT16_MAX;
volatile int64_t x664 = 3LL;
static volatile int32_t t89 = 220;
int16_t x674 = -14;
int64_t x676 = INT64_MIN;
uint32_t x717 = 103U;
volatile int32_t t92 = 64117600;
uint16_t x731 = UINT16_MAX;
int16_t x732 = 21;
uint32_t x735 = 12439904U;
int32_t t94 = 892685786;
static uint8_t x741 = UINT8_MAX;
int32_t t96 = 103;
static int32_t x749 = INT32_MAX;
uint64_t x751 = UINT64_MAX;
static volatile int32_t t97 = INT32_MAX;
int32_t x762 = -4;


void f0(void) {
	static uint32_t x2 = UINT32_MAX;
	volatile int64_t x3 = INT64_MIN;
	volatile uint64_t x4 = 140912082LLU;
	volatile int32_t t0 = -214269;

	t0 = (x1<<((x2^x3)<=x4));

	if (t0 != 319) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 128787731486LLU;
	uint32_t x6 = UINT32_MAX;
	volatile uint8_t x7 = 0U;
	int64_t x8 = -1LL;
	uint64_t t1 = 115LLU;

	t1 = (x5<<((x6^x7)<=x8));

	if (t1 != 128787731486LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MAX;
	uint8_t x14 = 2U;
	static int8_t x16 = -1;
	volatile int32_t t2 = 119798;

	t2 = (x13<<((x14^x15)<=x16));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 90807U;
	int8_t x22 = -1;
	int64_t x23 = -3099321896LL;
	uint32_t x24 = 6U;
	volatile uint32_t t3 = 1U;

	t3 = (x21<<((x22^x23)<=x24));

	if (t3 != 90807U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x26 = INT8_MAX;
	uint32_t x27 = 40572U;
	uint64_t x28 = UINT64_MAX;
	int32_t t4 = -2539;

	t4 = (x25<<((x26^x27)<=x28));

	if (t4 != 131070) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x38 = UINT64_MAX;
	static int8_t x39 = INT8_MIN;
	static int32_t x40 = -1;
	volatile int32_t t5 = -51;

	t5 = (x37<<((x38^x39)<=x40));

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x49 = UINT16_MAX;
	volatile int8_t x50 = -1;
	volatile int32_t t6 = 0;

	t6 = (x49<<((x50^x51)<=x52));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x57 = 45U;
	int8_t x58 = INT8_MAX;
	static int64_t x59 = -17391LL;

	t7 = (x57<<((x58^x59)<=x60));

	if (t7 != 90) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x62 = INT32_MAX;
	int64_t x64 = -1LL;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x61<<((x62^x63)<=x64));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x67 = 0U;
	uint16_t x68 = 14208U;
	volatile int32_t t9 = 32004014;

	t9 = (x65<<((x66^x67)<=x68));

	if (t9 != 26678) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = INT16_MAX;
	uint8_t x70 = 15U;
	int64_t x71 = -4LL;
	volatile int32_t t10 = -1;

	t10 = (x69<<((x70^x71)<=x72));

	if (t10 != 65534) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x82 = 16798U;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MAX;

	t11 = (x81<<((x82^x83)<=x84));

	if (t11 != 658) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x97 = UINT32_MAX;
	uint16_t x99 = UINT16_MAX;
	static uint32_t x100 = 796U;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x97<<((x98^x99)<=x100));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x101 = 60;
	int32_t x103 = INT32_MIN;
	int16_t x104 = -1;
	int32_t t13 = 11310569;

	t13 = (x101<<((x102^x103)<=x104));

	if (t13 != 120) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x114 = -204994283178LL;
	uint8_t x115 = UINT8_MAX;
	uint32_t x116 = 1275046764U;
	int32_t t14 = -4627820;

	t14 = (x113<<((x114^x115)<=x116));

	if (t14 != 290) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x133 = 0;
	int32_t x135 = -1;
	volatile int16_t x136 = -10;
	int32_t t15 = -50648;

	t15 = (x133<<((x134^x135)<=x136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x142 = 9LLU;
	volatile uint8_t x143 = UINT8_MAX;
	int64_t x144 = -1LL;

	t16 = (x141<<((x142^x143)<=x144));

	if (t16 != 174) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x149 = 3;
	uint64_t x150 = 2346818703276690LLU;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MIN;

	t17 = (x149<<((x150^x151)<=x152));

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x161 = UINT32_MAX;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = 7U;
	volatile int32_t x164 = -1;
	volatile uint32_t t18 = 145810U;

	t18 = (x161<<((x162^x163)<=x164));

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int64_t x170 = 8025674LL;
	int32_t x172 = 21;

	t19 = (x169<<((x170^x171)<=x172));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x177 = 3599U;
	volatile int16_t x179 = -432;
	static int32_t x180 = -24800802;
	int32_t t20 = 182;

	t20 = (x177<<((x178^x179)<=x180));

	if (t20 != 3599) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x183 = INT8_MIN;
	int32_t t21 = -70753;

	t21 = (x181<<((x182^x183)<=x184));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x185 = 2704;
	int64_t x186 = INT64_MAX;
	static int64_t x188 = INT64_MAX;
	volatile int32_t t22 = -11023;

	t22 = (x185<<((x186^x187)<=x188));

	if (t22 != 5408) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x193 = 369184681338852436LLU;
	volatile uint32_t x194 = 25930414U;
	int16_t x195 = -1;
	volatile int8_t x196 = -1;
	volatile uint64_t t23 = 243504427543LLU;

	t23 = (x193<<((x194^x195)<=x196));

	if (t23 != 738369362677704872LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x198 = 2U;
	int8_t x200 = 5;
	volatile int32_t t24 = -14468;

	t24 = (x197<<((x198^x199)<=x200));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x201 = 24;
	int8_t x202 = INT8_MIN;
	int8_t x203 = 1;
	volatile uint32_t x204 = UINT32_MAX;
	volatile int32_t t25 = -53417;

	t25 = (x201<<((x202^x203)<=x204));

	if (t25 != 48) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x211 = 0;
	int64_t x212 = 926651493290LL;
	static volatile int32_t t26 = -1645;

	t26 = (x209<<((x210^x211)<=x212));

	if (t26 != 131070) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x213 = 357831U;
	static uint16_t x214 = UINT16_MAX;
	uint64_t x216 = 514LLU;
	uint32_t t27 = 295067160U;

	t27 = (x213<<((x214^x215)<=x216));

	if (t27 != 357831U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x225 = 1U;
	static int64_t x226 = -1LL;
	volatile int16_t x227 = 1453;
	int32_t x228 = INT32_MAX;
	volatile int32_t t28 = -3;

	t28 = (x225<<((x226^x227)<=x228));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x229 = 2288525299386404447LL;
	uint8_t x230 = 0U;
	int16_t x231 = -129;
	uint8_t x232 = 3U;
	volatile int64_t t29 = 1290395061LL;

	t29 = (x229<<((x230^x231)<=x232));

	if (t29 != 4577050598772808894LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x241 = 98607187U;
	uint8_t x242 = UINT8_MAX;
	uint16_t x243 = 4U;
	int8_t x244 = INT8_MIN;
	uint32_t t30 = 0U;

	t30 = (x241<<((x242^x243)<=x244));

	if (t30 != 98607187U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MIN;
	int32_t x252 = 13505465;
	int32_t t31 = 1641999;

	t31 = (x249<<((x250^x251)<=x252));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x257 = UINT64_MAX;
	int32_t x258 = INT32_MIN;
	volatile uint32_t x260 = 6840U;
	uint64_t t32 = UINT64_MAX;

	t32 = (x257<<((x258^x259)<=x260));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x261 = 1U;
	int32_t x262 = -6;
	int64_t x263 = -1LL;
	int32_t x264 = INT32_MIN;
	volatile int32_t t33 = -2118565;

	t33 = (x261<<((x262^x263)<=x264));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x266 = INT8_MAX;
	uint64_t x268 = 37LLU;
	uint64_t t34 = 12212913487250250LLU;

	t34 = (x265<<((x266^x267)<=x268));

	if (t34 != 142LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x278 = 41719799U;
	volatile int32_t x280 = INT32_MIN;
	volatile int64_t t35 = 24771LL;

	t35 = (x277<<((x278^x279)<=x280));

	if (t35 != 27540358246213624LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x281 = INT32_MAX;
	static volatile int64_t x282 = 172066158LL;
	uint8_t x283 = 85U;
	uint32_t x284 = 221U;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x281<<((x282^x283)<=x284));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x285 = UINT8_MAX;
	uint8_t x286 = UINT8_MAX;
	volatile int32_t t37 = 12;

	t37 = (x285<<((x286^x287)<=x288));

	if (t37 != 510) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x289 = 8515887966996LLU;
	uint64_t x291 = 134206701LLU;
	int8_t x292 = -37;
	uint64_t t38 = 40576694LLU;

	t38 = (x289<<((x290^x291)<=x292));

	if (t38 != 17031775933992LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x297 = 0;
	int8_t x298 = INT8_MIN;
	volatile int64_t x299 = -116482LL;
	int32_t t39 = 13;

	t39 = (x297<<((x298^x299)<=x300));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x301 = INT32_MAX;
	uint16_t x302 = 1U;
	static int32_t x303 = 0;
	int64_t x304 = INT64_MIN;
	volatile int32_t t40 = INT32_MAX;

	t40 = (x301<<((x302^x303)<=x304));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x305 = UINT16_MAX;
	static uint64_t x306 = UINT64_MAX;
	int32_t x307 = -1;
	int64_t x308 = INT64_MAX;
	volatile int32_t t41 = 0;

	t41 = (x305<<((x306^x307)<=x308));

	if (t41 != 131070) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x310 = UINT8_MAX;
	uint64_t x311 = 23685LLU;
	int64_t x312 = -1461LL;
	uint32_t t42 = 135U;

	t42 = (x309<<((x310^x311)<=x312));

	if (t42 != 401954U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x317 = 6LL;
	volatile int64_t x320 = INT64_MIN;

	t43 = (x317<<((x318^x319)<=x320));

	if (t43 != 6LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x321 = 159849522LL;
	volatile int32_t x322 = 2885;
	uint32_t x323 = 205438650U;
	volatile uint64_t x324 = UINT64_MAX;
	volatile int64_t t44 = 75LL;

	t44 = (x321<<((x322^x323)<=x324));

	if (t44 != 319699044LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	int32_t x328 = 363156559;
	int32_t t45 = 161576;

	t45 = (x325<<((x326^x327)<=x328));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x341 = 44U;
	int16_t x342 = -30;
	static uint8_t x344 = 27U;
	volatile uint32_t t46 = 1702901999U;

	t46 = (x341<<((x342^x343)<=x344));

	if (t46 != 44U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x345 = INT64_MAX;
	static volatile int16_t x346 = INT16_MAX;
	int16_t x347 = INT16_MAX;
	static int16_t x348 = -1;

	t47 = (x345<<((x346^x347)<=x348));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x349 = 1185;
	static uint32_t x350 = 23U;
	uint8_t x352 = UINT8_MAX;

	t48 = (x349<<((x350^x351)<=x352));

	if (t48 != 2370) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x357 = 2053;
	uint8_t x358 = 13U;
	int8_t x360 = INT8_MIN;

	t49 = (x357<<((x358^x359)<=x360));

	if (t49 != 2053) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x372 = -843;
	volatile int32_t t50 = 8564;

	t50 = (x369<<((x370^x371)<=x372));

	if (t50 != 8094) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x377 = 1895276323U;
	int16_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	volatile int16_t x380 = INT16_MIN;
	volatile uint32_t t51 = 466U;

	t51 = (x377<<((x378^x379)<=x380));

	if (t51 != 1895276323U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x385 = 51;
	volatile int32_t t52 = -9;

	t52 = (x385<<((x386^x387)<=x388));

	if (t52 != 102) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x389 = 163U;
	static int32_t x390 = INT32_MIN;
	volatile int16_t x391 = INT16_MIN;
	uint32_t t53 = 21U;

	t53 = (x389<<((x390^x391)<=x392));

	if (t53 != 326U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x397 = 221359595;
	volatile int8_t x398 = 1;
	volatile int32_t x400 = 830590;
	volatile int32_t t54 = 4830;

	t54 = (x397<<((x398^x399)<=x400));

	if (t54 != 442719190) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x401 = 24080631;
	int16_t x402 = -960;
	static volatile int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MAX;
	static volatile int32_t t55 = -122;

	t55 = (x401<<((x402^x403)<=x404));

	if (t55 != 48161262) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x405 = UINT64_MAX;
	int8_t x407 = -1;
	uint8_t x408 = 43U;
	volatile uint64_t t56 = 6841LLU;

	t56 = (x405<<((x406^x407)<=x408));

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x421 = INT8_MAX;
	uint16_t x422 = 55U;
	uint64_t x423 = UINT64_MAX;
	static uint8_t x424 = UINT8_MAX;
	int32_t t57 = 841760;

	t57 = (x421<<((x422^x423)<=x424));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x425 = 6698916;
	int16_t x426 = INT16_MIN;
	int64_t x427 = -12278838547LL;
	volatile int32_t t58 = -1995;

	t58 = (x425<<((x426^x427)<=x428));

	if (t58 != 6698916) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x429 = 44694040U;
	volatile int64_t x431 = INT64_MIN;
	int8_t x432 = -1;

	t59 = (x429<<((x430^x431)<=x432));

	if (t59 != 44694040U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x448 = INT64_MIN;
	uint64_t t60 = 6876LLU;

	t60 = (x445<<((x446^x447)<=x448));

	if (t60 != 406387365967992457LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x457 = 0;
	int8_t x458 = -63;
	volatile uint32_t x459 = 450070U;
	volatile int8_t x460 = INT8_MIN;

	t61 = (x457<<((x458^x459)<=x460));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x469 = 354U;
	uint16_t x470 = 2U;
	int32_t x471 = -1;
	int32_t x472 = INT32_MIN;
	int32_t t62 = 0;

	t62 = (x469<<((x470^x471)<=x472));

	if (t62 != 354) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x473 = INT16_MAX;
	uint16_t x474 = 29U;
	static uint32_t x475 = 29U;
	int64_t x476 = -1309569602946664968LL;

	t63 = (x473<<((x474^x475)<=x476));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x477 = 486U;
	uint8_t x478 = UINT8_MAX;
	volatile int64_t x480 = 0LL;

	t64 = (x477<<((x478^x479)<=x480));

	if (t64 != 972) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x485 = 26U;
	int8_t x486 = INT8_MIN;
	int64_t x487 = -1LL;
	int16_t x488 = -1;
	int32_t t65 = 323972290;

	t65 = (x485<<((x486^x487)<=x488));

	if (t65 != 26) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x490 = 14U;
	int8_t x491 = INT8_MAX;
	int8_t x492 = INT8_MIN;
	static volatile int32_t t66 = 0;

	t66 = (x489<<((x490^x491)<=x492));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x493 = UINT16_MAX;
	static int8_t x494 = -1;
	int8_t x495 = INT8_MAX;
	int64_t x496 = INT64_MIN;
	static int32_t t67 = -6968;

	t67 = (x493<<((x494^x495)<=x496));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x497 = UINT8_MAX;
	volatile int32_t x498 = INT32_MAX;
	int32_t x499 = 929528341;
	uint64_t x500 = 792645LLU;
	int32_t t68 = -129171;

	t68 = (x497<<((x498^x499)<=x500));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x509 = 21;
	int32_t x510 = -368;
	uint8_t x511 = 0U;
	int32_t t69 = 2993013;

	t69 = (x509<<((x510^x511)<=x512));

	if (t69 != 42) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x513 = 12980;
	int8_t x514 = 1;
	static int32_t x515 = INT32_MIN;
	int32_t t70 = -72;

	t70 = (x513<<((x514^x515)<=x516));

	if (t70 != 25960) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x522 = -1;
	int8_t x523 = INT8_MIN;
	int32_t x524 = INT32_MIN;
	uint32_t t71 = 0U;

	t71 = (x521<<((x522^x523)<=x524));

	if (t71 != 16U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x525 = 0;
	uint16_t x526 = UINT16_MAX;
	uint16_t x528 = 1U;
	volatile int32_t t72 = 0;

	t72 = (x525<<((x526^x527)<=x528));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x533 = INT16_MAX;
	static int64_t x535 = INT64_MIN;
	static volatile int16_t x536 = INT16_MIN;

	t73 = (x533<<((x534^x535)<=x536));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x537 = 2335U;
	int8_t x538 = -1;
	int8_t x539 = -22;
	uint64_t x540 = UINT64_MAX;
	static volatile int32_t t74 = 19137119;

	t74 = (x537<<((x538^x539)<=x540));

	if (t74 != 4670) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x541 = 477038U;
	uint32_t x542 = 122151U;
	volatile int32_t x543 = INT32_MIN;
	int32_t x544 = 16035891;
	uint32_t t75 = 517183446U;

	t75 = (x541<<((x542^x543)<=x544));

	if (t75 != 477038U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x550 = 1U;
	uint32_t x551 = 13811U;
	volatile int16_t x552 = INT16_MAX;
	volatile int32_t t76 = -626;

	t76 = (x549<<((x550^x551)<=x552));

	if (t76 != 12218) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x553 = 2027U;
	static int8_t x554 = INT8_MIN;
	static int64_t x556 = INT64_MIN;
	volatile uint32_t t77 = 710U;

	t77 = (x553<<((x554^x555)<=x556));

	if (t77 != 2027U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x557 = 228895660U;
	static int16_t x558 = 0;
	int8_t x559 = -9;

	t78 = (x557<<((x558^x559)<=x560));

	if (t78 != 457791320U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x565 = 977U;
	uint64_t x566 = 238599739724LLU;
	int8_t x567 = -5;
	static int16_t x568 = -1;
	volatile int32_t t79 = 81471;

	t79 = (x565<<((x566^x567)<=x568));

	if (t79 != 1954) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x569 = 432;
	uint32_t x570 = 491798U;
	uint8_t x571 = UINT8_MAX;
	int64_t x572 = 785930004824517166LL;
	int32_t t80 = -40519;

	t80 = (x569<<((x570^x571)<=x572));

	if (t80 != 864) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x585 = 0;
	static volatile int16_t x586 = INT16_MIN;
	int32_t x587 = INT32_MIN;
	int64_t x588 = INT64_MIN;
	int32_t t81 = 45196222;

	t81 = (x585<<((x586^x587)<=x588));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x590 = -76280555;
	uint64_t x591 = 1157045124730LLU;
	static int32_t x592 = INT32_MAX;
	int32_t t82 = -64;

	t82 = (x589<<((x590^x591)<=x592));

	if (t82 != 29) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x593 = 3U;
	volatile int16_t x594 = INT16_MIN;

	t83 = (x593<<((x594^x595)<=x596));

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x597 = UINT64_MAX;
	uint32_t x598 = 548412176U;
	uint16_t x600 = 1210U;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x597<<((x598^x599)<=x600));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x618 = INT16_MAX;
	int16_t x619 = INT16_MIN;
	volatile uint32_t t85 = 1005398U;

	t85 = (x617<<((x618^x619)<=x620));

	if (t85 != 1798672058U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x621 = 228U;
	volatile int8_t x622 = INT8_MAX;
	volatile int64_t x623 = INT64_MAX;
	static int64_t x624 = INT64_MIN;
	uint32_t t86 = 2533U;

	t86 = (x621<<((x622^x623)<=x624));

	if (t86 != 228U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x645 = 53U;
	static int32_t x646 = INT32_MIN;
	int32_t x647 = -1;
	static int16_t x648 = 6;

	t87 = (x645<<((x646^x647)<=x648));

	if (t87 != 53) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x657 = 161U;
	volatile int64_t x658 = -795LL;
	volatile int32_t x659 = INT32_MIN;
	static volatile uint32_t x660 = 500U;
	volatile int32_t t88 = -6;

	t88 = (x657<<((x658^x659)<=x660));

	if (t88 != 161) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x663 = 216520U;

	t89 = (x661<<((x662^x663)<=x664));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x673 = 78325450LLU;
	int8_t x675 = -1;
	volatile uint64_t t90 = 29886099136008LLU;

	t90 = (x673<<((x674^x675)<=x676));

	if (t90 != 78325450LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x718 = UINT32_MAX;
	int8_t x719 = -1;
	int32_t x720 = INT32_MAX;
	uint32_t t91 = 1730639960U;

	t91 = (x717<<((x718^x719)<=x720));

	if (t91 != 206U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x725 = UINT8_MAX;
	int16_t x726 = -202;
	static int64_t x727 = INT64_MIN;
	int32_t x728 = INT32_MAX;

	t92 = (x725<<((x726^x727)<=x728));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x729 = UINT8_MAX;
	static int64_t x730 = INT64_MIN;
	volatile int32_t t93 = -485761109;

	t93 = (x729<<((x730^x731)<=x732));

	if (t93 != 510) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x733 = 1U;
	int32_t x734 = -1;
	int64_t x736 = INT64_MIN;

	t94 = (x733<<((x734^x735)<=x736));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	uint64_t x744 = 15036167775LLU;
	int32_t t95 = 2;

	t95 = (x741<<((x742^x743)<=x744));

	if (t95 != 510) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x745 = 2566;
	uint16_t x746 = 317U;
	uint8_t x747 = 6U;
	int8_t x748 = -3;

	t96 = (x745<<((x746^x747)<=x748));

	if (t96 != 2566) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x750 = INT64_MIN;
	uint64_t x752 = 1436LLU;

	t97 = (x749<<((x750^x751)<=x752));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x757 = UINT64_MAX;
	int8_t x758 = INT8_MIN;
	static volatile int64_t x759 = INT64_MIN;
	int16_t x760 = 307;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x757<<((x758^x759)<=x760));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x761 = UINT32_MAX;
	static int8_t x763 = INT8_MAX;
	int32_t x764 = 8301;
	volatile uint32_t t99 = 4777878U;

	t99 = (x761<<((x762^x763)<=x764));

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

