#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
int16_t x4 = -86;
volatile int32_t t1 = -43210832;
static int8_t x15 = -12;
static int32_t x35 = INT32_MIN;
uint16_t x40 = 9615U;
static volatile int32_t t6 = 69;
uint32_t x60 = 11U;
int32_t t7 = 1;
static uint32_t x75 = 456543U;
static volatile uint64_t t8 = UINT64_MAX;
volatile int16_t x161 = INT16_MAX;
uint8_t x171 = 0U;
int16_t x188 = INT16_MIN;
int64_t x194 = -1448404LL;
int32_t t21 = 30488919;
static uint32_t x221 = 536248247U;
int64_t x224 = INT64_MIN;
static volatile int64_t x247 = 2LL;
volatile int64_t t26 = 1LL;
uint16_t x254 = 1819U;
uint8_t x257 = UINT8_MAX;
static int32_t x278 = INT32_MAX;
volatile int64_t x279 = -24712178946526634LL;
int32_t t30 = 98397240;
static uint8_t x281 = UINT8_MAX;
int16_t x291 = INT16_MAX;
int32_t x306 = -1;
volatile int32_t t35 = 7;
uint16_t x309 = 11U;
int8_t x317 = 40;
volatile int16_t x324 = INT16_MIN;
int16_t x329 = INT16_MAX;
uint8_t x344 = 34U;
int32_t x352 = INT32_MAX;
uint64_t x371 = UINT64_MAX;
int16_t x379 = -1;
volatile int32_t t50 = 5256;
int16_t x395 = INT16_MAX;
volatile int32_t x399 = 15;
static int64_t t52 = -174LL;
int8_t x404 = -1;
static int32_t x419 = INT32_MIN;
volatile uint64_t x420 = 8383717472906167LLU;
int8_t x432 = -25;
uint16_t x436 = 12850U;
uint32_t t59 = 7373U;
int32_t t60 = 1055642294;
uint64_t x473 = 816684181111LLU;
volatile uint8_t x476 = 0U;
uint32_t x491 = 24U;
volatile int32_t t62 = 211726199;
volatile int8_t x520 = -3;
volatile int32_t t65 = -13;
int32_t x530 = -455745;
static volatile uint16_t x533 = UINT16_MAX;
int32_t x534 = 1742;
int32_t t68 = 33777464;
volatile int16_t x538 = INT16_MAX;
int64_t x580 = -1LL;
int32_t t75 = 213742091;
int8_t x581 = 3;
uint8_t x589 = 0U;
static volatile int64_t t79 = 690625LL;
uint16_t x609 = UINT16_MAX;
uint32_t x623 = 24481075U;
uint32_t x629 = 0U;
int16_t x630 = -1;
volatile uint32_t t83 = 13U;
static uint8_t x638 = UINT8_MAX;
uint32_t x653 = 746627358U;
int8_t x654 = INT8_MIN;
volatile uint8_t x664 = UINT8_MAX;
static uint8_t x673 = UINT8_MAX;
int64_t x675 = -1LL;
int32_t t88 = 7;
int64_t x677 = 8654102463482473LL;
static uint32_t x685 = UINT32_MAX;
static volatile uint64_t x686 = 903789711807LLU;
uint64_t x687 = 1LLU;
static uint32_t t90 = UINT32_MAX;
volatile uint64_t x693 = UINT64_MAX;
uint16_t x695 = 31U;
uint64_t x700 = UINT64_MAX;
uint32_t x708 = 81408041U;
volatile int32_t t97 = 277288;
static int64_t x735 = -1LL;


void f0(void) {
	uint16_t x2 = 12774U;
	uint64_t x3 = 544986LLU;
	int32_t t0 = 13676770;

	t0 = (x1<<((x2<x3)<=x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int16_t x6 = -10;
	uint8_t x7 = 1U;
	uint32_t x8 = 15549U;

	t1 = (x5<<((x6<x7)<=x8));

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = 0;
	volatile uint32_t x14 = 494U;
	int8_t x16 = INT8_MIN;
	volatile int32_t t2 = 2891117;

	t2 = (x13<<((x14<x15)<=x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x25 = 45U;
	static uint8_t x26 = 1U;
	int16_t x27 = INT16_MIN;
	int64_t x28 = 65532607054308775LL;
	volatile int32_t t3 = -2050;

	t3 = (x25<<((x26<x27)<=x28));

	if (t3 != 90) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = 936659566904021LL;
	static uint32_t x30 = 60U;
	static int32_t x31 = -1;
	int16_t x32 = 6;
	int64_t t4 = -1043023238640593032LL;

	t4 = (x29<<((x30<x31)<=x32));

	if (t4 != 1873319133808042LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 17LL;
	int8_t x34 = -34;
	int32_t x36 = INT32_MAX;
	volatile int64_t t5 = -45003951110LL;

	t5 = (x33<<((x34<x35)<=x36));

	if (t5 != 34LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MAX;
	uint16_t x38 = UINT16_MAX;
	static uint64_t x39 = 466603238878305267LLU;

	t6 = (x37<<((x38<x39)<=x40));

	if (t6 != 254) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x57 = 36U;
	int8_t x58 = INT8_MAX;
	int32_t x59 = -1746790;

	t7 = (x57<<((x58<x59)<=x60));

	if (t7 != 72) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x73 = UINT64_MAX;
	uint16_t x74 = 25879U;
	volatile int8_t x76 = INT8_MIN;

	t8 = (x73<<((x74<x75)<=x76));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x81 = 175LLU;
	int64_t x82 = -1LL;
	int8_t x83 = INT8_MIN;
	int64_t x84 = -134192LL;
	uint64_t t9 = 72495332907LLU;

	t9 = (x81<<((x82<x83)<=x84));

	if (t9 != 175LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x89 = 14U;
	int16_t x90 = 392;
	uint16_t x91 = UINT16_MAX;
	int64_t x92 = INT64_MIN;
	int32_t t10 = -3746;

	t10 = (x89<<((x90<x91)<=x92));

	if (t10 != 14) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 3515740766654288LLU;
	volatile uint64_t x99 = UINT64_MAX;
	uint64_t x100 = 100740397250LLU;
	static volatile uint32_t t11 = 15591U;

	t11 = (x97<<((x98<x99)<=x100));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x105 = 203102LLU;
	int64_t x106 = INT64_MAX;
	int64_t x107 = -29179978LL;
	int32_t x108 = -1;
	static volatile uint64_t t12 = 1067212308LLU;

	t12 = (x105<<((x106<x107)<=x108));

	if (t12 != 203102LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x109 = 1166794LL;
	volatile int16_t x110 = INT16_MIN;
	uint16_t x111 = 15U;
	int32_t x112 = -397282;
	int64_t t13 = -466462190104394LL;

	t13 = (x109<<((x110<x111)<=x112));

	if (t13 != 1166794LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x129 = 443U;
	uint16_t x130 = UINT16_MAX;
	volatile int8_t x131 = 0;
	static int64_t x132 = -59006817909606LL;
	static volatile int32_t t14 = -83;

	t14 = (x129<<((x130<x131)<=x132));

	if (t14 != 443) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x133 = 188719105U;
	uint8_t x134 = UINT8_MAX;
	static int32_t x135 = 1;
	static int64_t x136 = INT64_MIN;
	uint32_t t15 = 695925U;

	t15 = (x133<<((x134<x135)<=x136));

	if (t15 != 188719105U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x153 = 5869365307129814704LLU;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = 21802U;
	int64_t x156 = INT64_MAX;
	volatile uint64_t t16 = 17805832179572231LLU;

	t16 = (x153<<((x154<x155)<=x156));

	if (t16 != 11738730614259629408LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MAX;
	int64_t x164 = INT64_MAX;
	static int32_t t17 = 964125241;

	t17 = (x161<<((x162<x163)<=x164));

	if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x169 = 91U;
	int8_t x170 = -15;
	static int64_t x172 = INT64_MIN;
	uint32_t t18 = 13388465U;

	t18 = (x169<<((x170<x171)<=x172));

	if (t18 != 91U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x185 = 18342;
	int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MIN;
	int32_t t19 = 100;

	t19 = (x185<<((x186<x187)<=x188));

	if (t19 != 18342) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x193 = INT8_MAX;
	int8_t x195 = INT8_MIN;
	int32_t x196 = -1;
	volatile int32_t t20 = -10;

	t20 = (x193<<((x194<x195)<=x196));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x197 = INT8_MAX;
	static volatile uint32_t x198 = 1022316817U;
	uint8_t x199 = 6U;
	volatile int64_t x200 = 43974380220327272LL;

	t21 = (x197<<((x198<x199)<=x200));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x201 = 1;
	uint64_t x202 = 50343LLU;
	uint16_t x203 = 170U;
	static int8_t x204 = INT8_MAX;
	int32_t t22 = 137379234;

	t22 = (x201<<((x202<x203)<=x204));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x222 = 3709;
	static int16_t x223 = INT16_MAX;
	uint32_t t23 = 6854858U;

	t23 = (x221<<((x222<x223)<=x224));

	if (t23 != 536248247U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x229 = 14;
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = INT16_MIN;
	int16_t x232 = 14993;
	volatile int32_t t24 = -314;

	t24 = (x229<<((x230<x231)<=x232));

	if (t24 != 28) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x245 = UINT32_MAX;
	int32_t x246 = 0;
	int8_t x248 = INT8_MIN;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x245<<((x246<x247)<=x248));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x249 = 46094317784838381LL;
	int64_t x250 = -1LL;
	int8_t x251 = -5;
	int16_t x252 = INT16_MAX;

	t26 = (x249<<((x250<x251)<=x252));

	if (t26 != 92188635569676762LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x253 = 96487902U;
	int16_t x255 = 26;
	uint16_t x256 = 15U;
	volatile uint32_t t27 = 1U;

	t27 = (x253<<((x254<x255)<=x256));

	if (t27 != 192975804U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x258 = INT32_MAX;
	int64_t x259 = -21581570419336526LL;
	int16_t x260 = INT16_MIN;
	volatile int32_t t28 = 12;

	t28 = (x257<<((x258<x259)<=x260));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x261 = 3504U;
	static int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MAX;
	int8_t x264 = -3;
	volatile uint32_t t29 = 18784958U;

	t29 = (x261<<((x262<x263)<=x264));

	if (t29 != 3504U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x277 = 0;
	static int32_t x280 = INT32_MIN;

	t30 = (x277<<((x278<x279)<=x280));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MAX;
	static volatile int64_t x284 = -1LL;
	static volatile int32_t t31 = -105;

	t31 = (x281<<((x282<x283)<=x284));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x289 = 362U;
	uint32_t x290 = UINT32_MAX;
	volatile int64_t x292 = INT64_MIN;
	int32_t t32 = -33;

	t32 = (x289<<((x290<x291)<=x292));

	if (t32 != 362) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x297 = UINT32_MAX;
	int8_t x298 = -1;
	int64_t x299 = INT64_MIN;
	uint16_t x300 = 19777U;
	volatile uint32_t t33 = 284U;

	t33 = (x297<<((x298<x299)<=x300));

	if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x301 = 1576U;
	volatile int16_t x302 = -1;
	uint32_t x303 = 541542656U;
	uint8_t x304 = 0U;
	int32_t t34 = -9010577;

	t34 = (x301<<((x302<x303)<=x304));

	if (t34 != 3152) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x307 = INT32_MAX;
	int32_t x308 = 1622787;

	t35 = (x305<<((x306<x307)<=x308));

	if (t35 != 131070) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x310 = -1;
	volatile uint64_t x311 = 3946245401LLU;
	int64_t x312 = -1LL;
	volatile int32_t t36 = 7097219;

	t36 = (x309<<((x310<x311)<=x312));

	if (t36 != 11) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x313 = 0U;
	uint64_t x314 = 23LLU;
	int16_t x315 = INT16_MAX;
	volatile int64_t x316 = INT64_MIN;
	volatile int32_t t37 = -40;

	t37 = (x313<<((x314<x315)<=x316));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x318 = 75;
	int32_t x319 = -1;
	static volatile uint16_t x320 = 1U;
	static int32_t t38 = -300;

	t38 = (x317<<((x318<x319)<=x320));

	if (t38 != 80) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x321 = UINT16_MAX;
	uint8_t x322 = 21U;
	static int32_t x323 = -91549;
	int32_t t39 = 2;

	t39 = (x321<<((x322<x323)<=x324));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x330 = 0;
	int32_t x331 = 2459856;
	static int8_t x332 = INT8_MAX;
	volatile int32_t t40 = 24374;

	t40 = (x329<<((x330<x331)<=x332));

	if (t40 != 65534) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x341 = 204;
	int32_t x342 = 15543143;
	static int8_t x343 = 21;
	volatile int32_t t41 = 31;

	t41 = (x341<<((x342<x343)<=x344));

	if (t41 != 408) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x345 = UINT32_MAX;
	static int16_t x346 = INT16_MIN;
	int16_t x347 = -89;
	int16_t x348 = 25;
	static volatile uint32_t t42 = 801U;

	t42 = (x345<<((x346<x347)<=x348));

	if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x349 = 3744218U;
	uint32_t x350 = 3608841U;
	uint8_t x351 = UINT8_MAX;
	uint32_t t43 = 3U;

	t43 = (x349<<((x350<x351)<=x352));

	if (t43 != 7488436U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x357 = INT8_MAX;
	int8_t x358 = -33;
	static uint64_t x359 = UINT64_MAX;
	uint64_t x360 = UINT64_MAX;
	int32_t t44 = 18;

	t44 = (x357<<((x358<x359)<=x360));

	if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x365 = 17257LLU;
	int32_t x366 = INT32_MAX;
	static int64_t x367 = -8026LL;
	static int16_t x368 = INT16_MIN;
	volatile uint64_t t45 = 2114936066699LLU;

	t45 = (x365<<((x366<x367)<=x368));

	if (t45 != 17257LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int8_t x370 = INT8_MAX;
	int16_t x372 = 3;
	uint64_t t46 = 93719671299LLU;

	t46 = (x369<<((x370<x371)<=x372));

	if (t46 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x373 = 16047;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	int32_t x376 = -1;
	static int32_t t47 = 24642;

	t47 = (x373<<((x374<x375)<=x376));

	if (t47 != 16047) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x377 = INT16_MAX;
	volatile int16_t x378 = INT16_MIN;
	int64_t x380 = INT64_MAX;
	int32_t t48 = -338;

	t48 = (x377<<((x378<x379)<=x380));

	if (t48 != 65534) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x381 = 7U;
	uint8_t x382 = 124U;
	uint16_t x383 = UINT16_MAX;
	static int64_t x384 = 194403330728872110LL;
	static int32_t t49 = 85;

	t49 = (x381<<((x382<x383)<=x384));

	if (t49 != 14) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x389 = UINT8_MAX;
	volatile uint8_t x390 = 9U;
	uint64_t x391 = 171831634501293LLU;
	volatile int8_t x392 = -1;

	t50 = (x389<<((x390<x391)<=x392));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint64_t x394 = UINT64_MAX;
	uint16_t x396 = 17U;
	static int32_t t51 = 22343315;

	t51 = (x393<<((x394<x395)<=x396));

	if (t51 != 131070) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x397 = 7LL;
	int64_t x398 = INT64_MIN;
	volatile int64_t x400 = INT64_MAX;

	t52 = (x397<<((x398<x399)<=x400));

	if (t52 != 14LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x401 = 982019031U;
	volatile uint8_t x402 = UINT8_MAX;
	static int32_t x403 = INT32_MIN;
	volatile uint32_t t53 = 81U;

	t53 = (x401<<((x402<x403)<=x404));

	if (t53 != 982019031U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x409 = 139980562;
	int32_t x410 = INT32_MIN;
	static int16_t x411 = -1;
	static int16_t x412 = 1;
	volatile int32_t t54 = -212813629;

	t54 = (x409<<((x410<x411)<=x412));

	if (t54 != 279961124) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x417 = 190222LLU;
	int8_t x418 = 1;
	uint64_t t55 = 1347304LLU;

	t55 = (x417<<((x418<x419)<=x420));

	if (t55 != 380444LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x429 = 1088212508LL;
	int16_t x430 = -43;
	volatile int64_t x431 = -517309LL;
	int64_t t56 = -243888LL;

	t56 = (x429<<((x430<x431)<=x432));

	if (t56 != 1088212508LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x433 = INT8_MAX;
	static uint64_t x434 = 40LLU;
	int16_t x435 = INT16_MIN;
	static volatile int32_t t57 = 460;

	t57 = (x433<<((x434<x435)<=x436));

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x437 = 15558U;
	int32_t x438 = INT32_MAX;
	int8_t x439 = INT8_MIN;
	volatile int16_t x440 = 3414;
	int32_t t58 = -2379;

	t58 = (x437<<((x438<x439)<=x440));

	if (t58 != 31116) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x445 = 179U;
	static volatile int64_t x446 = INT64_MAX;
	int16_t x447 = -1;
	static int64_t x448 = -1LL;

	t59 = (x445<<((x446<x447)<=x448));

	if (t59 != 179U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x453 = 76U;
	int16_t x454 = INT16_MIN;
	volatile int64_t x455 = INT64_MIN;
	static int64_t x456 = INT64_MIN;

	t60 = (x453<<((x454<x455)<=x456));

	if (t60 != 76) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x474 = INT64_MAX;
	static int32_t x475 = INT32_MIN;
	volatile uint64_t t61 = 283620626979LLU;

	t61 = (x473<<((x474<x475)<=x476));

	if (t61 != 1633368362222LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x489 = 1;
	int8_t x490 = 53;
	int64_t x492 = INT64_MIN;

	t62 = (x489<<((x490<x491)<=x492));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x493 = UINT32_MAX;
	int16_t x494 = INT16_MAX;
	static int16_t x495 = -352;
	volatile int16_t x496 = 636;
	static volatile uint32_t t63 = 484U;

	t63 = (x493<<((x494<x495)<=x496));

	if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x517 = 52;
	uint64_t x518 = UINT64_MAX;
	int64_t x519 = -1LL;
	static int32_t t64 = -1789;

	t64 = (x517<<((x518<x519)<=x520));

	if (t64 != 52) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x521 = 1U;
	int8_t x522 = INT8_MIN;
	volatile int8_t x523 = -1;
	int64_t x524 = -1LL;

	t65 = (x521<<((x522<x523)<=x524));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x525 = 167U;
	uint8_t x526 = 65U;
	static int32_t x527 = INT32_MIN;
	int64_t x528 = INT64_MAX;
	int32_t t66 = -3;

	t66 = (x525<<((x526<x527)<=x528));

	if (t66 != 334) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x529 = 1;
	volatile int32_t x531 = INT32_MIN;
	uint8_t x532 = 58U;
	volatile int32_t t67 = 16170331;

	t67 = (x529<<((x530<x531)<=x532));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x535 = INT32_MIN;
	uint16_t x536 = 3U;

	t68 = (x533<<((x534<x535)<=x536));

	if (t68 != 131070) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x537 = 968;
	static int8_t x539 = INT8_MIN;
	uint64_t x540 = 1048237LLU;
	int32_t t69 = -42559;

	t69 = (x537<<((x538<x539)<=x540));

	if (t69 != 1936) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x541 = 5U;
	int64_t x542 = 2052710770078LL;
	volatile int16_t x543 = INT16_MIN;
	static uint64_t x544 = UINT64_MAX;
	int32_t t70 = 40446132;

	t70 = (x541<<((x542<x543)<=x544));

	if (t70 != 10) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x549 = 12590457U;
	uint16_t x550 = 261U;
	volatile uint8_t x551 = 12U;
	int16_t x552 = INT16_MIN;
	uint32_t t71 = 1231U;

	t71 = (x549<<((x550<x551)<=x552));

	if (t71 != 12590457U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x557 = INT32_MAX;
	int64_t x558 = 57950602LL;
	volatile int32_t x559 = -1;
	int64_t x560 = -1LL;
	static volatile int32_t t72 = INT32_MAX;

	t72 = (x557<<((x558<x559)<=x560));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x561 = INT16_MAX;
	int32_t x562 = INT32_MAX;
	static int64_t x563 = -1LL;
	int64_t x564 = INT64_MIN;
	int32_t t73 = -67929;

	t73 = (x561<<((x562<x563)<=x564));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x573 = 170U;
	int16_t x574 = INT16_MAX;
	int16_t x575 = INT16_MIN;
	volatile uint64_t x576 = 0LLU;
	volatile uint32_t t74 = 2U;

	t74 = (x573<<((x574<x575)<=x576));

	if (t74 != 340U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x577 = 146;
	int64_t x578 = INT64_MIN;
	int32_t x579 = -1;

	t75 = (x577<<((x578<x579)<=x580));

	if (t75 != 146) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x582 = -2621067;
	volatile uint32_t x583 = UINT32_MAX;
	int64_t x584 = 34619060LL;
	int32_t t76 = 31872;

	t76 = (x581<<((x582<x583)<=x584));

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x590 = 258401;
	volatile int16_t x591 = INT16_MIN;
	int8_t x592 = 23;
	volatile int32_t t77 = -11995251;

	t77 = (x589<<((x590<x591)<=x592));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x593 = 380U;
	static uint32_t x594 = 63044U;
	volatile int16_t x595 = INT16_MAX;
	volatile int16_t x596 = -683;
	int32_t t78 = -249478;

	t78 = (x593<<((x594<x595)<=x596));

	if (t78 != 380) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x597 = 2LL;
	static int16_t x598 = INT16_MAX;
	int64_t x599 = 3464197LL;
	int64_t x600 = INT64_MIN;

	t79 = (x597<<((x598<x599)<=x600));

	if (t79 != 2LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x605 = UINT8_MAX;
	int64_t x606 = INT64_MAX;
	uint64_t x607 = 118117LLU;
	volatile int64_t x608 = INT64_MIN;
	volatile int32_t t80 = -2335;

	t80 = (x605<<((x606<x607)<=x608));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x610 = INT8_MIN;
	volatile int8_t x611 = -12;
	int32_t x612 = -12914;
	volatile int32_t t81 = -275;

	t81 = (x609<<((x610<x611)<=x612));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x621 = INT8_MAX;
	int16_t x622 = INT16_MIN;
	uint64_t x624 = 3617825307307LLU;
	int32_t t82 = 9688;

	t82 = (x621<<((x622<x623)<=x624));

	if (t82 != 254) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x631 = INT32_MIN;
	int16_t x632 = -3;

	t83 = (x629<<((x630<x631)<=x632));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x637 = 1679U;
	uint64_t x639 = UINT64_MAX;
	uint16_t x640 = 3U;
	volatile uint32_t t84 = 88403466U;

	t84 = (x637<<((x638<x639)<=x640));

	if (t84 != 3358U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x655 = -1;
	int8_t x656 = -52;
	uint32_t t85 = 54U;

	t85 = (x653<<((x654<x655)<=x656));

	if (t85 != 746627358U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x657 = INT8_MAX;
	uint64_t x658 = 38746695937167LLU;
	int32_t x659 = 54;
	int32_t x660 = 5717382;
	int32_t t86 = 1482363;

	t86 = (x657<<((x658<x659)<=x660));

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x661 = 2;
	int8_t x662 = INT8_MIN;
	int32_t x663 = INT32_MIN;
	int32_t t87 = 1868;

	t87 = (x661<<((x662<x663)<=x664));

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x674 = -24396088;
	static int64_t x676 = -230137575614326369LL;

	t88 = (x673<<((x674<x675)<=x676));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x678 = UINT64_MAX;
	int32_t x679 = -1;
	static uint64_t x680 = 150551449533626LLU;
	volatile int64_t t89 = 695001655LL;

	t89 = (x677<<((x678<x679)<=x680));

	if (t89 != 17308204926964946LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x688 = INT8_MIN;

	t90 = (x685<<((x686<x687)<=x688));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x689 = UINT8_MAX;
	volatile uint32_t x690 = 19881422U;
	volatile int16_t x691 = INT16_MAX;
	int16_t x692 = INT16_MIN;
	volatile int32_t t91 = -101037;

	t91 = (x689<<((x690<x691)<=x692));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x694 = 1U;
	static int64_t x696 = 87601LL;
	static uint64_t t92 = 2630476227592177LLU;

	t92 = (x693<<((x694<x695)<=x696));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x697 = 32;
	int8_t x698 = INT8_MAX;
	int64_t x699 = INT64_MAX;
	volatile int32_t t93 = 44;

	t93 = (x697<<((x698<x699)<=x700));

	if (t93 != 64) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x701 = 1982LLU;
	int32_t x702 = INT32_MIN;
	uint32_t x703 = 29124454U;
	volatile int32_t x704 = INT32_MIN;
	uint64_t t94 = 28LLU;

	t94 = (x701<<((x702<x703)<=x704));

	if (t94 != 1982LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x705 = 0LL;
	uint8_t x706 = 6U;
	int16_t x707 = -6883;
	int64_t t95 = -2288898101841057205LL;

	t95 = (x705<<((x706<x707)<=x708));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x713 = 2U;
	int32_t x714 = INT32_MIN;
	int32_t x715 = INT32_MIN;
	int16_t x716 = INT16_MIN;
	static int32_t t96 = 13;

	t96 = (x713<<((x714<x715)<=x716));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x721 = INT8_MAX;
	static volatile int16_t x722 = -1;
	int16_t x723 = INT16_MIN;
	volatile uint16_t x724 = UINT16_MAX;

	t97 = (x721<<((x722<x723)<=x724));

	if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x725 = 69;
	static int64_t x726 = INT64_MIN;
	uint16_t x727 = 461U;
	uint32_t x728 = 234144253U;
	volatile int32_t t98 = -3733392;

	t98 = (x725<<((x726<x727)<=x728));

	if (t98 != 138) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x733 = 18896LLU;
	int16_t x734 = -18;
	static volatile int32_t x736 = -383;
	volatile uint64_t t99 = 987026764546960513LLU;

	t99 = (x733<<((x734<x735)<=x736));

	if (t99 != 18896LLU) { NG(); } else { ; }
	
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

