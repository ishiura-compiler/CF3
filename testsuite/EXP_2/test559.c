#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = -33LL;
int64_t x9 = INT64_MIN;
int8_t x10 = INT8_MAX;
int8_t x11 = -1;
volatile uint64_t x12 = 674029579162LLU;
volatile uint64_t t1 = 26089336LLU;
int8_t x16 = -1;
int64_t x17 = -4737LL;
static volatile int32_t x20 = INT32_MIN;
int16_t x33 = -815;
int16_t x34 = INT16_MAX;
int32_t x36 = INT32_MIN;
uint32_t x76 = UINT32_MAX;
int16_t x80 = 334;
static volatile int32_t x91 = 5208128;
uint64_t t12 = 42933587260LLU;
int8_t x125 = INT8_MIN;
int8_t x137 = INT8_MAX;
static int8_t x144 = -15;
int64_t t16 = 6407375906776LL;
int16_t x150 = INT16_MIN;
volatile int32_t t20 = 6;
int8_t x189 = -1;
int64_t x200 = -7677287142LL;
int64_t x201 = INT64_MIN;
uint8_t x203 = 3U;
int32_t x204 = INT32_MIN;
static int8_t x213 = INT8_MIN;
static uint32_t x215 = 12237U;
volatile uint32_t x232 = 65845957U;
volatile int8_t x237 = -1;
static volatile int64_t x259 = INT64_MAX;
volatile int64_t t31 = 3022055015384568586LL;
uint32_t x288 = UINT32_MAX;
uint64_t x291 = 1541507780146LLU;
static uint64_t t33 = 27LLU;
volatile int8_t x303 = -2;
volatile int32_t x312 = -1;
volatile uint32_t t36 = 20882024U;
int8_t x313 = 18;
static uint16_t x318 = UINT16_MAX;
volatile int32_t t38 = -24;
uint16_t x340 = 15U;
volatile int32_t t46 = -1775337;
uint32_t x424 = UINT32_MAX;
static volatile uint64_t t50 = 277578855178695685LLU;
volatile int32_t x429 = INT32_MIN;
static uint16_t x434 = 28U;
static int64_t t55 = INT64_MIN;
static uint32_t x478 = UINT32_MAX;
int64_t t59 = -2918194480LL;
static uint64_t x518 = 6704988LLU;
uint32_t x528 = UINT32_MAX;
int16_t x535 = INT16_MAX;
static volatile int64_t t62 = -50486276480665LL;
int16_t x562 = INT16_MIN;
static volatile int16_t x563 = INT16_MAX;
static volatile int32_t x566 = 176994;
static int64_t x572 = INT64_MIN;
static volatile int64_t t67 = -16604415039887LL;
volatile uint8_t x593 = 9U;
static volatile int32_t t69 = 0;
int8_t x611 = -3;
uint64_t t71 = 317025045LLU;
int32_t x628 = INT32_MIN;
volatile int64_t t72 = -5751954308274442LL;
int32_t x637 = INT32_MAX;
static uint32_t x640 = 237U;
int64_t t74 = -8029923044615262LL;
static int64_t x642 = INT64_MIN;
int64_t x650 = -53311828267528800LL;
static uint64_t x656 = 1682206LLU;
int64_t t79 = -6584633LL;
static volatile int64_t t83 = -2240LL;
int16_t x721 = INT16_MAX;
static volatile int16_t x725 = INT16_MIN;
int16_t x726 = INT16_MIN;
volatile uint32_t x729 = 8U;
int32_t x730 = INT32_MAX;
static int32_t x787 = 35479146;
volatile uint64_t t91 = 8259LLU;
uint16_t x813 = 338U;
volatile int32_t t92 = 2365938;
int32_t x823 = -1042;
static int32_t t93 = 1;
volatile int32_t x826 = INT32_MAX;
int32_t x827 = 2;
volatile uint32_t x831 = UINT32_MAX;
int8_t x837 = INT8_MIN;
int16_t x851 = -1;
int64_t x857 = -1LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x2 = INT64_MIN;
	int64_t x3 = -43270851LL;
	int32_t x4 = 363168152;

	t0 = ((x1/(x2/x3))^x4);

	if (t0 != 363168152LL) { NG(); } else { ; }
	
}

void f1(void) {


	t1 = ((x9/(x10/x11))^x12);

	if (t1 != 72625581978250011LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = -12348003794992565LL;
	uint64_t x15 = 896899583LLU;
	uint64_t t2 = 10954479513995LLU;

	t2 = ((x13/(x14/x15))^x16);

	if (t2 != 18446744072812051258LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = -391116350155LL;
	int8_t x19 = -1;
	volatile int64_t t3 = -2053668265477485113LL;

	t3 = ((x17/(x18/x19))^x20);

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = -528;
	int16_t x22 = INT16_MIN;
	int8_t x23 = -2;
	int8_t x24 = INT8_MIN;
	int32_t t4 = 23005;

	t4 = ((x21/(x22/x23))^x24);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x29 = 1400897563826051388LLU;
	int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	uint64_t t5 = 29139369588731LLU;

	t5 = ((x29/(x30/x31))^x32);

	if (t5 != 1400897563826051523LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x35 = -1;
	volatile int32_t t6 = INT32_MIN;

	t6 = ((x33/(x34/x35))^x36);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = -476155980;
	int32_t x58 = INT32_MAX;
	int8_t x59 = INT8_MAX;
	int32_t x60 = 21298804;
	int32_t t7 = -6;

	t7 = ((x57/(x58/x59))^x60);

	if (t7 != -21298800) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = INT8_MIN;
	static int32_t x66 = INT32_MAX;
	volatile int8_t x67 = 2;
	int32_t x68 = -1;
	volatile int32_t t8 = 0;

	t8 = ((x65/(x66/x67))^x68);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = -1;
	volatile int16_t x74 = 1482;
	int16_t x75 = 6;
	uint32_t t9 = UINT32_MAX;

	t9 = ((x73/(x74/x75))^x76);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x77 = 252U;
	int32_t x78 = -1;
	int64_t x79 = -1LL;
	int64_t t10 = -3LL;

	t10 = ((x77/(x78/x79))^x80);

	if (t10 != 434LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x89 = 4;
	int64_t x90 = INT64_MIN;
	int16_t x92 = INT16_MAX;
	volatile int64_t t11 = 439978708604752974LL;

	t11 = ((x89/(x90/x91))^x92);

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x93 = INT16_MIN;
	volatile uint64_t x94 = UINT64_MAX;
	uint32_t x95 = 261U;
	static int16_t x96 = -1;

	t12 = ((x93/(x94/x95))^x96);

	if (t12 != 18446744073709551355LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x105 = INT16_MIN;
	volatile uint16_t x106 = 26196U;
	int8_t x107 = -13;
	int64_t x108 = -308046784694LL;
	volatile int64_t t13 = -35328892220319700LL;

	t13 = ((x105/(x106/x107))^x108);

	if (t13 != -308046784678LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x126 = INT64_MIN;
	static uint8_t x127 = 119U;
	uint64_t x128 = 2761810265951770LLU;
	volatile uint64_t t14 = 1422065950LLU;

	t14 = ((x125/(x126/x127))^x128);

	if (t14 != 2761810265951770LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x138 = 9851621545LL;
	volatile int8_t x139 = -7;
	int16_t x140 = -476;
	int64_t t15 = -9LL;

	t15 = ((x137/(x138/x139))^x140);

	if (t15 != -476LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x141 = -1LL;
	int32_t x142 = 94828;
	uint16_t x143 = 49U;

	t16 = ((x141/(x142/x143))^x144);

	if (t16 != -15LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x145 = INT8_MAX;
	static int32_t x146 = 2355;
	int16_t x147 = 490;
	int32_t x148 = 12208213;
	int32_t t17 = -16273087;

	t17 = ((x145/(x146/x147))^x148);

	if (t17 != 12208202) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x149 = INT64_MIN;
	uint64_t x151 = 52427117LLU;
	volatile int64_t x152 = -227LL;
	static uint64_t t18 = 46LLU;

	t18 = ((x149/(x150/x151))^x152);

	if (t18 != 18446744073683338155LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x157 = 15997943267815LL;
	int32_t x158 = INT32_MAX;
	int16_t x159 = INT16_MAX;
	uint16_t x160 = UINT16_MAX;
	int64_t t19 = 39LL;

	t19 = ((x157/(x158/x159))^x160);

	if (t19 != 244075871LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x161 = INT16_MAX;
	uint8_t x162 = UINT8_MAX;
	static volatile int8_t x163 = 1;
	int16_t x164 = -1;

	t20 = ((x161/(x162/x163))^x164);

	if (t20 != -129) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x181 = 41U;
	int64_t x182 = -120757803LL;
	uint32_t x183 = 17198076U;
	uint8_t x184 = 6U;
	static volatile int64_t t21 = -69508LL;

	t21 = ((x181/(x182/x183))^x184);

	if (t21 != -3LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x190 = UINT32_MAX;
	int64_t x191 = 2738248853LL;
	int8_t x192 = INT8_MAX;
	volatile int64_t t22 = 1LL;

	t22 = ((x189/(x190/x191))^x192);

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x197 = 126655984U;
	volatile int64_t x198 = INT64_MIN;
	uint64_t x199 = 25013735352LLU;
	volatile uint64_t t23 = 13322LLU;

	t23 = ((x197/(x198/x199))^x200);

	if (t23 != 18446744066032264474LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x202 = 3700LLU;
	uint64_t t24 = 10630040LLU;

	t24 = ((x201/(x202/x203))^x204);

	if (t24 != 18439263641614302899LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x214 = INT8_MIN;
	int8_t x216 = 0;
	static volatile uint32_t t25 = 855U;

	t25 = ((x213/(x214/x215))^x216);

	if (t25 != 12237U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x229 = 157LLU;
	static int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	volatile uint64_t t26 = 5010LLU;

	t26 = ((x229/(x230/x231))^x232);

	if (t26 != 65845848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x238 = -4642;
	static volatile int32_t x239 = 47;
	uint16_t x240 = 2U;
	volatile int32_t t27 = 1936314;

	t27 = ((x237/(x238/x239))^x240);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x258 = UINT64_MAX;
	static volatile int32_t x260 = INT32_MAX;
	uint64_t t28 = 527015364794LLU;

	t28 = ((x257/(x258/x259))^x260);

	if (t28 != 2147467264LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x261 = 175251554LL;
	uint8_t x262 = UINT8_MAX;
	int8_t x263 = -21;
	uint32_t x264 = 2909844U;
	volatile int64_t t29 = 1529LL;

	t29 = ((x261/(x262/x263))^x264);

	if (t29 != -15908500LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x265 = -3013;
	uint32_t x266 = 131U;
	int64_t x267 = -1LL;
	int16_t x268 = INT16_MIN;
	int64_t t30 = 201LL;

	t30 = ((x265/(x266/x267))^x268);

	if (t30 != -32745LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x281 = INT8_MAX;
	int16_t x282 = -5031;
	int8_t x283 = INT8_MIN;
	static int64_t x284 = INT64_MIN;

	t31 = ((x281/(x282/x283))^x284);

	if (t31 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x285 = 6469;
	uint64_t x286 = UINT64_MAX;
	uint64_t x287 = 8687821081013184253LLU;
	uint64_t t32 = 867489LLU;

	t32 = ((x285/(x286/x287))^x288);

	if (t32 != 4294964061LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x289 = -1LL;
	static int32_t x290 = INT32_MIN;
	volatile int16_t x292 = INT16_MIN;

	t33 = ((x289/(x290/x291))^x292);

	if (t33 != 18446742532201667952LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	int32_t x295 = -1;
	uint64_t x296 = 2383787448176291LLU;
	volatile uint64_t t34 = 9LLU;

	t34 = ((x293/(x294/x295))^x296);

	if (t34 != 2383787448176291LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	int64_t x304 = INT64_MAX;
	volatile int64_t t35 = INT64_MAX;

	t35 = ((x301/(x302/x303))^x304);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x310 = 2488;
	int32_t x311 = 1530;

	t36 = ((x309/(x310/x311))^x312);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	static volatile uint32_t x316 = 41454042U;
	volatile uint32_t t37 = 97516649U;

	t37 = ((x313/(x314/x315))^x316);

	if (t37 != 41454024U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x317 = INT32_MIN;
	int16_t x319 = -15;
	static volatile int32_t x320 = -1;

	t38 = ((x317/(x318/x319))^x320);

	if (t38 != -491528) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x329 = -1LL;
	int8_t x330 = INT8_MIN;
	int8_t x331 = 3;
	int64_t x332 = INT64_MIN;
	volatile int64_t t39 = INT64_MIN;

	t39 = ((x329/(x330/x331))^x332);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x337 = INT16_MAX;
	static volatile uint64_t x338 = UINT64_MAX;
	static int8_t x339 = INT8_MIN;
	uint64_t t40 = 48904LLU;

	t40 = ((x337/(x338/x339))^x340);

	if (t40 != 32752LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x345 = 2411U;
	static int16_t x346 = 1157;
	volatile int8_t x347 = INT8_MIN;
	volatile uint16_t x348 = 1U;
	static int32_t t41 = -43;

	t41 = ((x345/(x346/x347))^x348);

	if (t41 != -268) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x357 = INT64_MAX;
	int16_t x358 = INT16_MIN;
	uint64_t x359 = 8922529057730534797LLU;
	uint16_t x360 = 118U;
	volatile uint64_t t42 = 3031531652858624LLU;

	t42 = ((x357/(x358/x359))^x360);

	if (t42 != 4611686018427387785LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MIN;
	int64_t x375 = INT64_MIN;
	uint64_t x376 = 13623LLU;
	uint64_t t43 = 51LLU;

	t43 = ((x373/(x374/x375))^x376);

	if (t43 != 9223372036854789431LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x377 = 6LLU;
	uint16_t x378 = 1539U;
	uint8_t x379 = 17U;
	volatile int32_t x380 = -1;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = ((x377/(x378/x379))^x380);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x381 = INT32_MIN;
	static uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	uint32_t x384 = 80U;
	uint64_t t45 = 38692132207547096LLU;

	t45 = ((x381/(x382/x383))^x384);

	if (t45 != 46LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x393 = 5;
	int32_t x394 = INT32_MAX;
	static int8_t x395 = INT8_MIN;
	int16_t x396 = 626;

	t46 = ((x393/(x394/x395))^x396);

	if (t46 != 626) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x401 = INT8_MIN;
	int16_t x402 = INT16_MAX;
	int16_t x403 = -1;
	int64_t x404 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = ((x401/(x402/x403))^x404);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x409 = -1;
	int32_t x410 = INT32_MAX;
	static int32_t x411 = INT32_MAX;
	uint16_t x412 = 2554U;
	int32_t t48 = -12;

	t48 = ((x409/(x410/x411))^x412);

	if (t48 != -2555) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x413 = -1;
	int8_t x414 = INT8_MAX;
	int8_t x415 = -1;
	volatile int16_t x416 = INT16_MAX;
	volatile int32_t t49 = -176897;

	t49 = ((x413/(x414/x415))^x416);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x421 = INT8_MIN;
	int8_t x422 = -54;
	static uint64_t x423 = 542822707LLU;

	t50 = ((x421/(x422/x423))^x424);

	if (t50 != 3752144588LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MAX;
	static uint16_t x427 = UINT16_MAX;
	uint64_t x428 = 48LLU;
	volatile uint64_t t51 = 48870542844LLU;

	t51 = ((x425/(x426/x427))^x428);

	if (t51 != 48LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x430 = INT32_MAX;
	int8_t x431 = -10;
	int16_t x432 = -1;
	static int32_t t52 = -50980;

	t52 = ((x429/(x430/x431))^x432);

	if (t52 != -11) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x433 = INT8_MIN;
	volatile int64_t x435 = -1LL;
	static uint8_t x436 = 0U;
	volatile int64_t t53 = 35488402497325LL;

	t53 = ((x433/(x434/x435))^x436);

	if (t53 != 4LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x437 = -1LL;
	uint32_t x438 = 58259308U;
	static int16_t x439 = 1;
	static volatile int8_t x440 = -1;
	volatile int64_t t54 = -1676449628590598LL;

	t54 = ((x437/(x438/x439))^x440);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x449 = 467U;
	int16_t x450 = INT16_MIN;
	uint8_t x451 = 38U;
	int64_t x452 = INT64_MIN;

	t55 = ((x449/(x450/x451))^x452);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x473 = INT8_MAX;
	int32_t x474 = INT32_MAX;
	volatile int32_t x475 = -164301227;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t56 = 1466;

	t56 = ((x473/(x474/x475))^x476);

	if (t56 != -65528) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x477 = -384761470;
	int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MAX;
	uint32_t t57 = 1848367412U;

	t57 = ((x477/(x478/x479))^x480);

	if (t57 != 3910237821U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x481 = INT8_MIN;
	int64_t x482 = 2498365556LL;
	int32_t x483 = -634630;
	int32_t x484 = -1;
	volatile int64_t t58 = -1397280447849208855LL;

	t58 = ((x481/(x482/x483))^x484);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x497 = 24110565727792LL;
	int8_t x498 = 1;
	int8_t x499 = -1;
	volatile int16_t x500 = -1;

	t59 = ((x497/(x498/x499))^x500);

	if (t59 != 24110565727791LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x517 = 2U;
	uint8_t x519 = 3U;
	int16_t x520 = INT16_MIN;
	uint64_t t60 = 1239675293512LLU;

	t60 = ((x517/(x518/x519))^x520);

	if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x525 = -517;
	int64_t x526 = 75910540138LL;
	int64_t x527 = 8428128LL;
	volatile int64_t t61 = -121LL;

	t61 = ((x525/(x526/x527))^x528);

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x533 = INT32_MIN;
	volatile int64_t x534 = 1208136541909LL;
	volatile int8_t x536 = 11;

	t62 = ((x533/(x534/x535))^x536);

	if (t62 != -51LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x537 = INT8_MIN;
	volatile int16_t x538 = -1;
	uint32_t x539 = UINT32_MAX;
	int64_t x540 = -275941338416792451LL;
	static volatile int64_t t63 = -51010782LL;

	t63 = ((x537/(x538/x539))^x540);

	if (t63 != -275941338981219331LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x561 = -23;
	volatile int64_t x564 = INT64_MAX;
	volatile int64_t t64 = -25LL;

	t64 = ((x561/(x562/x563))^x564);

	if (t64 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x565 = 40916U;
	int16_t x567 = INT16_MIN;
	volatile uint8_t x568 = UINT8_MAX;
	volatile uint32_t t65 = 7U;

	t65 = ((x565/(x566/x567))^x568);

	if (t65 != 255U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x569 = 0;
	volatile int16_t x570 = INT16_MIN;
	uint32_t x571 = 205179079U;
	int64_t t66 = INT64_MIN;

	t66 = ((x569/(x570/x571))^x572);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x577 = -10565146121584LL;
	int32_t x578 = INT32_MIN;
	uint16_t x579 = UINT16_MAX;
	int16_t x580 = INT16_MIN;

	t67 = ((x577/(x578/x579))^x580);

	if (t67 != -322418800LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x589 = INT32_MIN;
	int8_t x590 = INT8_MIN;
	static uint16_t x591 = 18U;
	int16_t x592 = -1;
	int32_t t68 = 1062222727;

	t68 = ((x589/(x590/x591))^x592);

	if (t68 != -306783379) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x594 = INT32_MAX;
	uint8_t x595 = 1U;
	int16_t x596 = INT16_MAX;

	t69 = ((x593/(x594/x595))^x596);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x609 = 26789185LL;
	uint64_t x610 = UINT64_MAX;
	uint8_t x612 = UINT8_MAX;
	static uint64_t t70 = 4189141710932276LLU;

	t70 = ((x609/(x610/x611))^x612);

	if (t70 != 26789310LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x617 = 1588066192374546916LLU;
	volatile int32_t x618 = -1;
	static volatile int16_t x619 = 1;
	int32_t x620 = INT32_MIN;

	t71 = ((x617/(x618/x619))^x620);

	if (t71 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x625 = INT16_MIN;
	int64_t x626 = INT64_MAX;
	int32_t x627 = INT32_MAX;

	t72 = ((x625/(x626/x627))^x628);

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x629 = INT64_MAX;
	static volatile uint64_t x630 = UINT64_MAX;
	int8_t x631 = INT8_MAX;
	int64_t x632 = INT64_MAX;
	uint64_t t73 = 243170LLU;

	t73 = ((x629/(x630/x631))^x632);

	if (t73 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x638 = INT64_MIN;
	static volatile int8_t x639 = INT8_MIN;

	t74 = ((x637/(x638/x639))^x640);

	if (t74 != 237LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x641 = INT16_MIN;
	static int64_t x643 = INT64_MIN;
	uint32_t x644 = UINT32_MAX;
	int64_t t75 = 1133498LL;

	t75 = ((x641/(x642/x643))^x644);

	if (t75 != -4294934529LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x649 = INT64_MIN;
	uint16_t x651 = 19899U;
	int32_t x652 = -82263;
	int64_t t76 = 47583890110886LL;

	t76 = ((x649/(x650/x651))^x652);

	if (t76 != -3524268LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x653 = 81294;
	volatile int8_t x654 = INT8_MIN;
	uint8_t x655 = 7U;
	uint64_t t77 = 751613393968879411LLU;

	t77 = ((x653/(x654/x655))^x656);

	if (t77 != 18446744073707865410LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x657 = UINT64_MAX;
	volatile uint16_t x658 = 26149U;
	int8_t x659 = INT8_MIN;
	int8_t x660 = INT8_MIN;
	uint64_t t78 = 5562140916LLU;

	t78 = ((x657/(x658/x659))^x660);

	if (t78 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x661 = -1;
	uint8_t x662 = UINT8_MAX;
	int64_t x663 = -1LL;
	volatile int64_t x664 = 493LL;

	t79 = ((x661/(x662/x663))^x664);

	if (t79 != 493LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x669 = INT8_MIN;
	uint64_t x670 = UINT64_MAX;
	static volatile uint64_t x671 = 498940LLU;
	uint8_t x672 = 46U;
	static volatile uint64_t t80 = 2924846LLU;

	t80 = ((x669/(x670/x671))^x672);

	if (t80 != 498898LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x681 = 178U;
	volatile uint32_t x682 = UINT32_MAX;
	uint8_t x683 = 13U;
	int16_t x684 = -393;
	uint32_t t81 = 62909700U;

	t81 = ((x681/(x682/x683))^x684);

	if (t81 != 4294966903U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x697 = INT64_MAX;
	volatile uint64_t x698 = 42467142374390497LLU;
	int32_t x699 = 1;
	int64_t x700 = INT64_MIN;
	uint64_t t82 = 20178495658LLU;

	t82 = ((x697/(x698/x699))^x700);

	if (t82 != 9223372036854776025LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x705 = INT64_MAX;
	volatile int32_t x706 = INT32_MIN;
	static int32_t x707 = -108274;
	int16_t x708 = -1;

	t83 = ((x705/(x706/x707))^x708);

	if (t83 != -465051784241153LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x722 = INT8_MAX;
	volatile uint8_t x723 = 16U;
	int8_t x724 = INT8_MAX;
	int32_t t84 = -41995;

	t84 = ((x721/(x722/x723))^x724);

	if (t84 != 4662) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x727 = 1U;
	volatile int16_t x728 = -1;
	volatile int32_t t85 = 1;

	t85 = ((x725/(x726/x727))^x728);

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x731 = UINT8_MAX;
	volatile int64_t x732 = -4064022952153395LL;
	int64_t t86 = -42263166590LL;

	t86 = ((x729/(x730/x731))^x732);

	if (t86 != -4064022952153395LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x737 = INT16_MIN;
	int8_t x738 = INT8_MIN;
	static uint16_t x739 = 1U;
	int8_t x740 = 2;
	volatile int32_t t87 = -1030923;

	t87 = ((x737/(x738/x739))^x740);

	if (t87 != 258) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x777 = 3U;
	volatile uint16_t x778 = 2526U;
	volatile int32_t x779 = -1;
	int8_t x780 = -1;
	volatile int32_t t88 = -1864870;

	t88 = ((x777/(x778/x779))^x780);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x785 = INT8_MIN;
	volatile int64_t x786 = INT64_MIN;
	static int64_t x788 = INT64_MAX;
	volatile int64_t t89 = INT64_MAX;

	t89 = ((x785/(x786/x787))^x788);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x789 = INT16_MAX;
	volatile int64_t x790 = INT64_MIN;
	int64_t x791 = 2060986569867398LL;
	int16_t x792 = -1;
	static volatile int64_t t90 = 1098645211504LL;

	t90 = ((x789/(x790/x791))^x792);

	if (t90 != 6LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x805 = 2618LLU;
	uint16_t x806 = 8561U;
	int16_t x807 = -13;
	int8_t x808 = -47;

	t91 = ((x805/(x806/x807))^x808);

	if (t91 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x814 = INT16_MAX;
	int8_t x815 = INT8_MIN;
	uint8_t x816 = 98U;

	t92 = ((x813/(x814/x815))^x816);

	if (t92 != -99) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x821 = -1;
	uint16_t x822 = 11365U;
	static uint8_t x824 = UINT8_MAX;

	t93 = ((x821/(x822/x823))^x824);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x825 = -1;
	uint64_t x828 = UINT64_MAX;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = ((x825/(x826/x827))^x828);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x829 = INT16_MAX;
	uint32_t x830 = UINT32_MAX;
	static int64_t x832 = 259687217738738LL;
	static int64_t t95 = 1334196LL;

	t95 = ((x829/(x830/x831))^x832);

	if (t95 != 259687217744909LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x833 = 4;
	volatile int64_t x834 = INT64_MAX;
	static uint64_t x835 = 267968102600LLU;
	uint8_t x836 = UINT8_MAX;
	volatile uint64_t t96 = 7989LLU;

	t96 = ((x833/(x834/x835))^x836);

	if (t96 != 255LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x838 = INT64_MAX;
	uint32_t x839 = 1U;
	int16_t x840 = INT16_MIN;
	static volatile int64_t t97 = 79248216LL;

	t97 = ((x837/(x838/x839))^x840);

	if (t97 != -32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x849 = INT16_MIN;
	int32_t x850 = INT32_MAX;
	static uint16_t x852 = 1900U;
	volatile int32_t t98 = -5441841;

	t98 = ((x849/(x850/x851))^x852);

	if (t98 != 1900) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x858 = UINT32_MAX;
	volatile uint32_t x859 = 12691732U;
	uint16_t x860 = 954U;
	int64_t t99 = 2941812413614595LL;

	t99 = ((x857/(x858/x859))^x860);

	if (t99 != 954LL) { NG(); } else { ; }
	
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

