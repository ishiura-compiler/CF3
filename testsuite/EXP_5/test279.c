#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t2 = 977U;
volatile uint64_t t4 = 118927LLU;
static uint32_t t5 = 4U;
volatile uint64_t t7 = 872246126540465LLU;
int8_t x53 = 13;
int32_t x54 = INT32_MIN;
volatile int32_t x55 = -954787921;
static int8_t x56 = -1;
static volatile int32_t x61 = 149413;
volatile int32_t t10 = 53407344;
int8_t x88 = INT8_MIN;
int64_t x90 = -1488228328725869145LL;
int8_t x91 = -1;
volatile uint16_t x100 = 37U;
volatile int64_t x102 = -1LL;
uint32_t x103 = 7773U;
int32_t t16 = -4009958;
int64_t x112 = INT64_MIN;
static uint32_t x115 = 35877U;
uint64_t x117 = 1484956LLU;
static volatile uint64_t t19 = 25894868033LLU;
int64_t x123 = -1LL;
volatile int16_t x124 = 9500;
volatile uint32_t x129 = 26154545U;
volatile int32_t t23 = -1;
uint8_t x141 = 45U;
int32_t x144 = INT32_MAX;
int32_t x167 = -1;
volatile int32_t t27 = 108536;
volatile uint64_t x170 = UINT64_MAX;
static int32_t x180 = INT32_MAX;
int16_t x205 = INT16_MAX;
uint16_t x209 = 211U;
uint16_t x216 = 171U;
static int32_t t33 = -2;
uint8_t x225 = 22U;
volatile int32_t t35 = 385;
int64_t x239 = INT64_MIN;
static uint8_t x251 = 20U;
int64_t x266 = INT64_MIN;
uint64_t x277 = UINT64_MAX;
uint64_t t40 = UINT64_MAX;
static uint16_t x291 = UINT16_MAX;
int8_t x295 = 0;
int32_t t43 = 1;
uint8_t x303 = 1U;
int32_t t44 = 1;
uint64_t x311 = UINT64_MAX;
volatile int8_t x317 = 1;
uint16_t x320 = 17U;
static uint32_t x321 = UINT32_MAX;
static int64_t x322 = -1LL;
int32_t x323 = -4925;
int32_t x335 = -1;
static uint32_t x338 = 256111428U;
static int8_t x339 = -1;
volatile int64_t x350 = INT64_MAX;
volatile int32_t x369 = INT32_MAX;
int16_t x371 = INT16_MIN;
static int32_t t54 = INT32_MAX;
uint8_t x398 = UINT8_MAX;
int8_t x399 = INT8_MIN;
uint8_t x406 = 27U;
static volatile int64_t x419 = -1LL;
int8_t x447 = INT8_MIN;
uint32_t t61 = 31370651U;
int64_t x472 = INT64_MIN;
static int32_t t62 = 1;
int8_t x484 = -1;
int32_t t64 = 51989121;
volatile uint64_t x493 = 26332LLU;
static uint8_t x503 = UINT8_MAX;
uint64_t x518 = UINT64_MAX;
int64_t x519 = INT64_MIN;
uint16_t x522 = 28624U;
int64_t x524 = -1LL;
uint64_t x529 = UINT64_MAX;
uint32_t x530 = 25354376U;
uint32_t x534 = 12555165U;
uint8_t x535 = 18U;
int32_t x536 = INT32_MAX;
int8_t x538 = -1;
static uint64_t t73 = 256865LLU;
volatile uint16_t x556 = 12U;
int32_t t75 = 41740164;
volatile int32_t t76 = 25;
uint64_t x579 = UINT64_MAX;
static uint32_t x593 = 500U;
uint32_t t80 = 919U;
volatile int16_t x626 = INT16_MAX;
int64_t x628 = INT64_MIN;
int64_t x646 = INT64_MIN;
int8_t x674 = INT8_MIN;
volatile int8_t x675 = -1;
uint16_t x677 = 33U;
static uint32_t x681 = 1200580U;
volatile int32_t t89 = INT32_MAX;
int16_t x718 = INT16_MIN;
uint64_t x719 = 1137401031309359778LLU;
static int32_t t91 = 122797;
uint32_t x743 = 0U;
uint32_t x745 = 30817U;
uint32_t x748 = 677U;
uint8_t x764 = UINT8_MAX;
volatile int64_t t96 = 66515143LL;
int64_t x782 = -1LL;
int64_t x811 = 1LL;


void f0(void) {
	uint16_t x9 = 21849U;
	uint32_t x10 = 168U;
	static int16_t x11 = INT16_MIN;
	int32_t x12 = INT32_MIN;
	static int32_t t0 = -1;

	t0 = (x9<<((x10-x11)<x12));

	if (t0 != 43698) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = UINT16_MAX;
	uint8_t x14 = UINT8_MAX;
	int32_t x15 = -8;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t1 = 269433548;

	t1 = (x13<<((x14-x15)<x16));

	if (t1 != 131070) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 53U;
	volatile uint16_t x18 = UINT16_MAX;
	static int64_t x19 = 1LL;
	int32_t x20 = -525796;

	t2 = (x17<<((x18-x19)<x20));

	if (t2 != 53U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = INT8_MAX;
	volatile uint32_t x30 = UINT32_MAX;
	int64_t x31 = INT64_MAX;
	uint8_t x32 = 6U;
	static volatile int32_t t3 = -22470268;

	t3 = (x29<<((x30-x31)<x32));

	if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = 238656318603436594LLU;
	int32_t x34 = INT32_MIN;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = 83122003U;

	t4 = (x33<<((x34-x35)<x36));

	if (t4 != 238656318603436594LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MAX;
	static int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MAX;

	t5 = (x37<<((x38-x39)<x40));

	if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x45 = UINT32_MAX;
	int64_t x46 = -1LL;
	static int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	uint32_t t6 = UINT32_MAX;

	t6 = (x45<<((x46-x47)<x48));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x49 = 7087797820LLU;
	static uint8_t x50 = 0U;
	static uint32_t x51 = 71648132U;
	uint64_t x52 = UINT64_MAX;

	t7 = (x49<<((x50-x51)<x52));

	if (t7 != 14175595640LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t t8 = -28724537;

	t8 = (x53<<((x54-x55)<x56));

	if (t8 != 26) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x62 = INT8_MIN;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = 0;
	int32_t t9 = 244;

	t9 = (x61<<((x62-x63)<x64));

	if (t9 != 298826) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x65 = 31U;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = 432236792676LLU;
	int64_t x68 = -1LL;

	t10 = (x65<<((x66-x67)<x68));

	if (t10 != 62) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = INT64_MAX;
	uint64_t x74 = 7895762715044681LLU;
	static int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MAX;
	int64_t t11 = INT64_MAX;

	t11 = (x73<<((x74-x75)<x76));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = 3881;
	int8_t x78 = 1;
	static uint32_t x79 = 28632575U;
	volatile int8_t x80 = -7;
	static volatile int32_t t12 = -165197;

	t12 = (x77<<((x78-x79)<x80));

	if (t12 != 7762) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x85 = 13;
	volatile uint8_t x86 = 101U;
	static uint16_t x87 = 1U;
	static volatile int32_t t13 = -20064;

	t13 = (x85<<((x86-x87)<x88));

	if (t13 != 13) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x89 = UINT8_MAX;
	int32_t x92 = INT32_MAX;
	int32_t t14 = 3;

	t14 = (x89<<((x90-x91)<x92));

	if (t14 != 510) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x97 = 1U;
	volatile uint16_t x98 = UINT16_MAX;
	int32_t x99 = -23388;
	volatile int32_t t15 = 37;

	t15 = (x97<<((x98-x99)<x100));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x101 = 15U;
	volatile int16_t x104 = INT16_MIN;

	t16 = (x101<<((x102-x103)<x104));

	if (t16 != 15) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MIN;
	static int32_t x111 = INT32_MIN;
	static volatile int64_t t17 = INT64_MAX;

	t17 = (x109<<((x110-x111)<x112));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x113 = UINT8_MAX;
	int64_t x114 = INT64_MAX;
	volatile uint8_t x116 = 31U;
	volatile int32_t t18 = 27371251;

	t18 = (x113<<((x114-x115)<x116));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x118 = 5U;
	uint8_t x119 = 8U;
	uint32_t x120 = 1643720U;

	t19 = (x117<<((x118-x119)<x120));

	if (t19 != 1484956LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x121 = 93U;
	uint32_t x122 = 0U;
	volatile int32_t t20 = -147;

	t20 = (x121<<((x122-x123)<x124));

	if (t20 != 186) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x130 = -9699;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MAX;
	volatile uint32_t t21 = 3095428U;

	t21 = (x129<<((x130-x131)<x132));

	if (t21 != 52309090U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x133 = 2U;
	static int8_t x134 = 1;
	int32_t x135 = -103446396;
	volatile int8_t x136 = INT8_MIN;
	int32_t t22 = 3;

	t22 = (x133<<((x134-x135)<x136));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x137 = 1U;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MAX;
	int16_t x140 = -1;

	t23 = (x137<<((x138-x139)<x140));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x142 = UINT8_MAX;
	uint8_t x143 = 10U;
	int32_t t24 = 1;

	t24 = (x141<<((x142-x143)<x144));

	if (t24 != 90) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x153 = UINT8_MAX;
	static uint64_t x154 = UINT64_MAX;
	int8_t x155 = -1;
	int16_t x156 = INT16_MAX;
	volatile int32_t t25 = 52;

	t25 = (x153<<((x154-x155)<x156));

	if (t25 != 510) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x157 = 0LL;
	int64_t x158 = INT64_MAX;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = INT64_MIN;
	int64_t t26 = -95829508LL;

	t26 = (x157<<((x158-x159)<x160));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x165 = 52U;
	static int8_t x166 = -1;
	int32_t x168 = INT32_MIN;

	t27 = (x165<<((x166-x167)<x168));

	if (t27 != 52) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x169 = INT8_MAX;
	int16_t x171 = 0;
	uint16_t x172 = UINT16_MAX;
	int32_t t28 = 370683235;

	t28 = (x169<<((x170-x171)<x172));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x177 = 867;
	int32_t x178 = INT32_MIN;
	static uint64_t x179 = UINT64_MAX;
	int32_t t29 = -40;

	t29 = (x177<<((x178-x179)<x180));

	if (t29 != 867) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int16_t x202 = INT16_MIN;
	int64_t x203 = 4811LL;
	volatile uint64_t x204 = UINT64_MAX;
	int32_t t30 = -58992309;

	t30 = (x201<<((x202-x203)<x204));

	if (t30 != 131070) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x206 = 0LLU;
	int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t31 = 0;

	t31 = (x205<<((x206-x207)<x208));

	if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	volatile int8_t x212 = -1;
	int32_t t32 = 133395;

	t32 = (x209<<((x210-x211)<x212));

	if (t32 != 422) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x213 = INT8_MAX;
	int16_t x214 = 1701;
	int64_t x215 = 3906662LL;

	t33 = (x213<<((x214-x215)<x216));

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x226 = 0U;
	volatile uint32_t x227 = 4331188U;
	volatile uint16_t x228 = UINT16_MAX;
	static volatile int32_t t34 = -21928;

	t34 = (x225<<((x226-x227)<x228));

	if (t34 != 22) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x233 = 21U;
	static volatile int64_t x234 = 7979606287LL;
	volatile uint64_t x235 = 9223173043052986791LLU;
	static int32_t x236 = INT32_MIN;

	t35 = (x233<<((x234-x235)<x236));

	if (t35 != 42) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x237 = 7941LLU;
	volatile int16_t x238 = INT16_MIN;
	int16_t x240 = -32;
	volatile uint64_t t36 = 5554666LLU;

	t36 = (x237<<((x238-x239)<x240));

	if (t36 != 7941LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x249 = 1LL;
	uint16_t x250 = 45U;
	uint32_t x252 = 552018U;
	int64_t t37 = -493201224LL;

	t37 = (x249<<((x250-x251)<x252));

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x261 = 4U;
	uint32_t x262 = 13061U;
	static volatile int32_t x263 = INT32_MIN;
	uint64_t x264 = 15LLU;
	volatile int32_t t38 = -536;

	t38 = (x261<<((x262-x263)<x264));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x265 = INT16_MAX;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 17977LLU;
	volatile int32_t t39 = 34933;

	t39 = (x265<<((x266-x267)<x268));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x278 = 104U;
	volatile int8_t x279 = INT8_MIN;
	static int64_t x280 = INT64_MIN;

	t40 = (x277<<((x278-x279)<x280));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x289 = 2U;
	volatile uint8_t x290 = UINT8_MAX;
	int8_t x292 = -1;
	int32_t t41 = 3647972;

	t41 = (x289<<((x290-x291)<x292));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x293 = 2042190894U;
	static int32_t x294 = -27771244;
	int16_t x296 = 1708;
	static volatile uint32_t t42 = 3407U;

	t42 = (x293<<((x294-x295)<x296));

	if (t42 != 4084381788U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x297 = 65;
	int64_t x298 = INT64_MIN;
	int64_t x299 = -1LL;
	int16_t x300 = INT16_MIN;

	t43 = (x297<<((x298-x299)<x300));

	if (t43 != 130) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x301 = UINT8_MAX;
	volatile int64_t x302 = INT64_MAX;
	int8_t x304 = -27;

	t44 = (x301<<((x302-x303)<x304));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x309 = 20;
	static int64_t x310 = -299LL;
	int16_t x312 = 13;
	int32_t t45 = -201;

	t45 = (x309<<((x310-x311)<x312));

	if (t45 != 20) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x318 = INT32_MAX;
	uint16_t x319 = UINT16_MAX;
	int32_t t46 = -1;

	t46 = (x317<<((x318-x319)<x320));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x324 = INT64_MIN;
	static uint32_t t47 = UINT32_MAX;

	t47 = (x321<<((x322-x323)<x324));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = -3148;
	int16_t x336 = INT16_MIN;
	volatile int32_t t48 = 20362639;

	t48 = (x333<<((x334-x335)<x336));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x337 = UINT8_MAX;
	volatile int32_t x340 = INT32_MAX;
	static volatile int32_t t49 = -86088124;

	t49 = (x337<<((x338-x339)<x340));

	if (t49 != 510) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x349 = INT16_MAX;
	uint8_t x351 = 8U;
	uint64_t x352 = 6231LLU;
	volatile int32_t t50 = 27;

	t50 = (x349<<((x350-x351)<x352));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x353 = UINT16_MAX;
	static int64_t x354 = INT64_MIN;
	int16_t x355 = -264;
	int8_t x356 = 1;
	volatile int32_t t51 = 6183;

	t51 = (x353<<((x354-x355)<x356));

	if (t51 != 131070) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x361 = 11U;
	int64_t x362 = 315519276230837LL;
	volatile uint16_t x363 = UINT16_MAX;
	int16_t x364 = -123;
	int32_t t52 = 19397660;

	t52 = (x361<<((x362-x363)<x364));

	if (t52 != 11) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x366 = -7;
	static int64_t x367 = INT64_MIN;
	uint32_t x368 = 29U;
	uint64_t t53 = UINT64_MAX;

	t53 = (x365<<((x366-x367)<x368));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x370 = -11;
	int64_t x372 = INT64_MIN;

	t54 = (x369<<((x370-x371)<x372));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x381 = 222;
	int64_t x382 = -22071793642107541LL;
	volatile int16_t x383 = 12;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t55 = 54679;

	t55 = (x381<<((x382-x383)<x384));

	if (t55 != 444) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x397 = 4U;
	static uint64_t x400 = UINT64_MAX;
	int32_t t56 = -49;

	t56 = (x397<<((x398-x399)<x400));

	if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x405 = 2792U;
	int64_t x407 = INT64_MAX;
	volatile int32_t x408 = -1;
	static volatile int32_t t57 = -2;

	t57 = (x405<<((x406-x407)<x408));

	if (t57 != 5584) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x413 = UINT32_MAX;
	volatile int16_t x414 = -332;
	int64_t x415 = -153805501LL;
	volatile int8_t x416 = INT8_MIN;
	uint32_t t58 = UINT32_MAX;

	t58 = (x413<<((x414-x415)<x416));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x417 = 1096U;
	static int16_t x418 = -12577;
	int8_t x420 = INT8_MIN;
	volatile int32_t t59 = 951511114;

	t59 = (x417<<((x418-x419)<x420));

	if (t59 != 2192) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x429 = UINT8_MAX;
	uint16_t x430 = 0U;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t60 = 16381;

	t60 = (x429<<((x430-x431)<x432));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x445 = 916564113U;
	int64_t x446 = 683660432137302078LL;
	int16_t x448 = 424;

	t61 = (x445<<((x446-x447)<x448));

	if (t61 != 916564113U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x469 = 37;
	static int64_t x470 = -7LL;
	uint64_t x471 = 20346493LLU;

	t62 = (x469<<((x470-x471)<x472));

	if (t62 != 37) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x481 = UINT8_MAX;
	volatile int16_t x482 = -1;
	static int8_t x483 = 40;
	volatile int32_t t63 = -2;

	t63 = (x481<<((x482-x483)<x484));

	if (t63 != 510) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x489 = 12;
	int8_t x490 = -1;
	uint16_t x491 = UINT16_MAX;
	uint16_t x492 = 495U;

	t64 = (x489<<((x490-x491)<x492));

	if (t64 != 24) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x494 = INT8_MIN;
	int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MAX;
	uint64_t t65 = 876933342190012807LLU;

	t65 = (x493<<((x494-x495)<x496));

	if (t65 != 52664LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x501 = INT16_MAX;
	int8_t x502 = 21;
	volatile int16_t x504 = -1;
	volatile int32_t t66 = -915;

	t66 = (x501<<((x502-x503)<x504));

	if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x509 = 0U;
	int16_t x510 = 49;
	int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MIN;
	static int32_t t67 = 749281;

	t67 = (x509<<((x510-x511)<x512));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x517 = 3771036LLU;
	volatile uint32_t x520 = 858U;
	uint64_t t68 = 39193571043934004LLU;

	t68 = (x517<<((x518-x519)<x520));

	if (t68 != 3771036LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x521 = 0;
	int64_t x523 = INT64_MAX;
	int32_t t69 = 537;

	t69 = (x521<<((x522-x523)<x524));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x531 = -34;
	uint16_t x532 = 8936U;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x529<<((x530-x531)<x532));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x533 = UINT16_MAX;
	int32_t t71 = 69816860;

	t71 = (x533<<((x534-x535)<x536));

	if (t71 != 131070) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x537 = UINT16_MAX;
	uint16_t x539 = 54U;
	int32_t x540 = INT32_MAX;
	int32_t t72 = -9047;

	t72 = (x537<<((x538-x539)<x540));

	if (t72 != 131070) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x545 = UINT64_MAX;
	int8_t x546 = -1;
	static volatile int32_t x547 = -2600;
	volatile int32_t x548 = INT32_MAX;

	t73 = (x545<<((x546-x547)<x548));

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x553 = 1;
	int64_t x554 = -1LL;
	uint32_t x555 = UINT32_MAX;
	int32_t t74 = -14617388;

	t74 = (x553<<((x554-x555)<x556));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x557 = 379;
	static int32_t x558 = INT32_MIN;
	int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MIN;

	t75 = (x557<<((x558-x559)<x560));

	if (t75 != 379) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x565 = 0;
	volatile int32_t x566 = -1;
	uint32_t x567 = 348U;
	static volatile int8_t x568 = -1;

	t76 = (x565<<((x566-x567)<x568));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x569 = UINT16_MAX;
	int16_t x570 = 1;
	int32_t x571 = -1;
	int64_t x572 = INT64_MIN;
	static volatile int32_t t77 = 4054232;

	t77 = (x569<<((x570-x571)<x572));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x577 = UINT64_MAX;
	int16_t x578 = INT16_MIN;
	static uint16_t x580 = 300U;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x577<<((x578-x579)<x580));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x589 = 3;
	uint32_t x590 = 425U;
	int64_t x591 = 6292891021615310LL;
	int64_t x592 = 75199101LL;
	volatile int32_t t79 = 1;

	t79 = (x589<<((x590-x591)<x592));

	if (t79 != 6) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x594 = 326832049245LLU;
	static uint64_t x595 = 429LLU;
	static volatile uint8_t x596 = 10U;

	t80 = (x593<<((x594-x595)<x596));

	if (t80 != 500U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x613 = 1724U;
	static uint8_t x614 = 24U;
	int16_t x615 = 327;
	static int8_t x616 = -1;
	static int32_t t81 = 19611;

	t81 = (x613<<((x614-x615)<x616));

	if (t81 != 3448) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x625 = UINT64_MAX;
	int64_t x627 = INT64_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (x625<<((x626-x627)<x628));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x633 = 1U;
	volatile int32_t x634 = INT32_MAX;
	volatile uint32_t x635 = 0U;
	uint16_t x636 = UINT16_MAX;
	volatile int32_t t83 = -1;

	t83 = (x633<<((x634-x635)<x636));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x645 = 702636130U;
	static int8_t x647 = INT8_MIN;
	volatile int8_t x648 = 1;
	uint32_t t84 = 1929757751U;

	t84 = (x645<<((x646-x647)<x648));

	if (t84 != 1405272260U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x673 = UINT32_MAX;
	uint32_t x676 = UINT32_MAX;
	uint32_t t85 = 227U;

	t85 = (x673<<((x674-x675)<x676));

	if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x678 = 1;
	uint8_t x679 = 0U;
	volatile int8_t x680 = INT8_MIN;
	int32_t t86 = 47171;

	t86 = (x677<<((x678-x679)<x680));

	if (t86 != 33) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x682 = 11612U;
	uint8_t x683 = UINT8_MAX;
	static int32_t x684 = -57086234;
	volatile uint32_t t87 = 977U;

	t87 = (x681<<((x682-x683)<x684));

	if (t87 != 2401160U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x689 = UINT16_MAX;
	uint64_t x690 = 7LLU;
	int32_t x691 = INT32_MIN;
	static int8_t x692 = INT8_MAX;
	int32_t t88 = 248;

	t88 = (x689<<((x690-x691)<x692));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x697 = INT32_MAX;
	static int16_t x698 = INT16_MIN;
	volatile uint64_t x699 = 1655931114833LLU;
	int64_t x700 = INT64_MIN;

	t89 = (x697<<((x698-x699)<x700));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x701 = 2277;
	volatile int64_t x702 = INT64_MAX;
	static uint8_t x703 = UINT8_MAX;
	uint16_t x704 = UINT16_MAX;
	volatile int32_t t90 = -47;

	t90 = (x701<<((x702-x703)<x704));

	if (t90 != 2277) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x717 = 50U;
	uint8_t x720 = 64U;

	t91 = (x717<<((x718-x719)<x720));

	if (t91 != 50) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x721 = UINT8_MAX;
	uint64_t x722 = 53034123LLU;
	volatile int16_t x723 = 1095;
	int64_t x724 = INT64_MIN;
	int32_t t92 = -10;

	t92 = (x721<<((x722-x723)<x724));

	if (t92 != 510) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x741 = 7U;
	static int64_t x742 = INT64_MIN;
	uint8_t x744 = UINT8_MAX;
	int32_t t93 = -563;

	t93 = (x741<<((x742-x743)<x744));

	if (t93 != 14) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x746 = INT16_MAX;
	int8_t x747 = INT8_MIN;
	volatile uint32_t t94 = 69988U;

	t94 = (x745<<((x746-x747)<x748));

	if (t94 != 30817U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x761 = 19102995LLU;
	int8_t x762 = INT8_MAX;
	uint64_t x763 = 38494556746373027LLU;
	volatile uint64_t t95 = 4204863LLU;

	t95 = (x761<<((x762-x763)<x764));

	if (t95 != 19102995LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x769 = 131715347984762082LL;
	int8_t x770 = 0;
	uint32_t x771 = 356121190U;
	int64_t x772 = INT64_MAX;

	t96 = (x769<<((x770-x771)<x772));

	if (t96 != 263430695969524164LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x773 = 2LLU;
	int64_t x774 = -6478005419796LL;
	static int16_t x775 = -1;
	volatile int32_t x776 = INT32_MAX;
	volatile uint64_t t97 = 3735692783308910726LLU;

	t97 = (x773<<((x774-x775)<x776));

	if (t97 != 4LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x781 = 1160604111U;
	int64_t x783 = INT64_MIN;
	int8_t x784 = -4;
	volatile uint32_t t98 = 1086526709U;

	t98 = (x781<<((x782-x783)<x784));

	if (t98 != 1160604111U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x809 = 3;
	static int16_t x810 = -993;
	int8_t x812 = INT8_MIN;
	volatile int32_t t99 = 177429544;

	t99 = (x809<<((x810-x811)<x812));

	if (t99 != 6) { NG(); } else { ; }
	
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

