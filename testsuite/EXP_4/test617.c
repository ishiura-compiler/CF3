#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x28 = 10081U;
static int8_t x43 = -1;
int32_t t5 = -3361;
static uint8_t x65 = UINT8_MAX;
volatile uint16_t x93 = UINT16_MAX;
static int16_t x94 = 138;
volatile int32_t t8 = -6;
int32_t t9 = 0;
uint64_t x117 = 0LLU;
static volatile int16_t x120 = 15;
uint64_t t12 = 526535249385700937LLU;
uint8_t x122 = 3U;
int64_t x131 = INT64_MIN;
static uint64_t x135 = 119298409LLU;
int32_t x136 = 591;
volatile uint32_t x151 = 30078090U;
volatile int64_t x163 = 746904666429988LL;
volatile int32_t t21 = -7949391;
int64_t x183 = INT64_MIN;
static uint64_t x189 = UINT64_MAX;
volatile int32_t x191 = INT32_MIN;
volatile int64_t x193 = 91546354520150392LL;
volatile int32_t t26 = 161704719;
int64_t x228 = INT64_MAX;
volatile int32_t t27 = 3848048;
int8_t x230 = 21;
int32_t x237 = 0;
static uint64_t x238 = 46112217262458LLU;
int32_t t29 = 10;
static int16_t x270 = -1;
uint64_t x282 = UINT64_MAX;
volatile int32_t t35 = -3154247;
volatile int32_t x291 = INT32_MIN;
int8_t x313 = INT8_MAX;
int8_t x315 = 15;
int32_t x316 = INT32_MAX;
int16_t x330 = INT16_MIN;
static int8_t x336 = INT8_MAX;
int8_t x348 = -1;
static volatile int64_t x378 = -1LL;
int8_t x379 = INT8_MIN;
volatile uint32_t t45 = UINT32_MAX;
int8_t x397 = INT8_MAX;
volatile int32_t t47 = 1;
uint32_t x422 = UINT32_MAX;
static uint8_t x445 = 92U;
volatile int32_t t51 = -38386;
int8_t x472 = INT8_MAX;
int8_t x498 = INT8_MIN;
static int64_t x499 = -1LL;
int16_t x506 = 0;
int64_t x507 = INT64_MIN;
static uint64_t t55 = 32LLU;
static int32_t x518 = 196579372;
int64_t x524 = -149634715403520055LL;
uint8_t x532 = UINT8_MAX;
int16_t x533 = INT16_MAX;
int64_t x534 = 311766491946LL;
int32_t t61 = 4;
uint64_t x554 = 3805882141563704954LLU;
int32_t x559 = INT32_MIN;
int16_t x616 = 11960;
int32_t x617 = INT32_MAX;
volatile int8_t x618 = -1;
int32_t x621 = 73313717;
int64_t x628 = 1669827677453429LL;
int8_t x637 = INT8_MAX;
int32_t x638 = -5249094;
int8_t x639 = 2;
static uint32_t x643 = 46U;
int8_t x648 = INT8_MIN;
int8_t x651 = -1;
int32_t x659 = -21;
static volatile int64_t x663 = INT64_MIN;
uint16_t x664 = 500U;
uint16_t x678 = 5428U;
static int32_t x680 = INT32_MAX;
uint64_t t79 = 88447973524LLU;
int64_t x683 = INT64_MIN;
volatile int32_t x697 = 0;
uint8_t x709 = UINT8_MAX;
static int16_t x712 = 15551;
int32_t t82 = 13;
uint32_t x714 = 33U;
static uint32_t x716 = UINT32_MAX;
int32_t t84 = -12545;
volatile int32_t t89 = 38669039;
int8_t x759 = INT8_MIN;
volatile int16_t x767 = INT16_MIN;
static int8_t x770 = -1;
int32_t x771 = INT32_MIN;
int64_t x772 = INT64_MAX;
static int32_t x780 = -6;
static uint16_t x801 = 6U;
int8_t x808 = INT8_MIN;
int32_t t95 = INT32_MAX;
static int64_t x842 = INT64_MIN;
uint64_t x859 = 254491004019LLU;


void f0(void) {
	volatile int32_t x5 = 654943;
	uint64_t x6 = 4392781708547LLU;
	int8_t x7 = INT8_MAX;
	uint16_t x8 = 2U;
	volatile int32_t t0 = -40;

	t0 = (x5<<(x6<(x7/x8)));

	if (t0 != 654943) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 96U;
	int64_t x10 = -5651277346685LL;
	int16_t x11 = 1;
	uint16_t x12 = 20643U;
	int32_t t1 = -1070;

	t1 = (x9<<(x10<(x11/x12)));

	if (t1 != 192) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 1U;
	int8_t x18 = -1;
	int16_t x19 = -14;
	volatile int64_t x20 = -157LL;
	volatile int32_t t2 = 0;

	t2 = (x17<<(x18<(x19/x20)));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 0;
	volatile uint8_t x26 = 74U;
	int16_t x27 = -1;
	int32_t t3 = 157;

	t3 = (x25<<(x26<(x27/x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MAX;
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MIN;
	uint16_t x32 = 18U;
	static volatile int64_t t4 = INT64_MAX;

	t4 = (x29<<(x30<(x31/x32)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = UINT32_MAX;
	int16_t x44 = INT16_MAX;

	t5 = (x41<<(x42<(x43/x44)));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x53 = INT64_MAX;
	static int64_t x54 = INT64_MAX;
	int16_t x55 = 57;
	int8_t x56 = INT8_MIN;
	static int64_t t6 = INT64_MAX;

	t6 = (x53<<(x54<(x55/x56)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x66 = -1;
	int64_t x67 = 536448LL;
	int16_t x68 = -1;
	volatile int32_t t7 = 2229221;

	t7 = (x65<<(x66<(x67/x68)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x95 = UINT64_MAX;
	int8_t x96 = INT8_MAX;

	t8 = (x93<<(x94<(x95/x96)));

	if (t8 != 131070) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x97 = 46;
	int16_t x98 = -1;
	uint64_t x99 = 14237LLU;
	static int32_t x100 = INT32_MIN;

	t9 = (x97<<(x98<(x99/x100)));

	if (t9 != 46) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x109 = 451602U;
	uint64_t x110 = UINT64_MAX;
	uint32_t x111 = 2070385U;
	int8_t x112 = INT8_MAX;
	volatile uint32_t t10 = 369928767U;

	t10 = (x109<<(x110<(x111/x112)));

	if (t10 != 451602U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x113 = 903057014410179LLU;
	int32_t x114 = INT32_MAX;
	uint16_t x115 = UINT16_MAX;
	static volatile int32_t x116 = -1411715;
	uint64_t t11 = 13LLU;

	t11 = (x113<<(x114<(x115/x116)));

	if (t11 != 903057014410179LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x118 = -1;
	int16_t x119 = INT16_MIN;

	t12 = (x117<<(x118<(x119/x120)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x121 = 11U;
	static int8_t x123 = INT8_MIN;
	uint64_t x124 = 275217630989809302LLU;
	int32_t t13 = 14335;

	t13 = (x121<<(x122<(x123/x124)));

	if (t13 != 22) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x125 = 56;
	int64_t x126 = -1LL;
	int16_t x127 = -5811;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t14 = 724811;

	t14 = (x125<<(x126<(x127/x128)));

	if (t14 != 112) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x129 = 31U;
	uint16_t x130 = 3558U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t15 = -25153194;

	t15 = (x129<<(x130<(x131/x132)));

	if (t15 != 62) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x134 = INT8_MIN;
	int32_t t16 = 114;

	t16 = (x133<<(x134<(x135/x136)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x145 = 108U;
	volatile int32_t x146 = INT32_MIN;
	int64_t x147 = -1LL;
	volatile int32_t x148 = 119;
	volatile uint32_t t17 = 252255477U;

	t17 = (x145<<(x146<(x147/x148)));

	if (t17 != 216U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x149 = 26;
	int32_t x150 = INT32_MIN;
	int32_t x152 = -894;
	volatile int32_t t18 = -4678458;

	t18 = (x149<<(x150<(x151/x152)));

	if (t18 != 26) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x161 = 13;
	int16_t x162 = INT16_MAX;
	int16_t x164 = INT16_MAX;
	int32_t t19 = 169;

	t19 = (x161<<(x162<(x163/x164)));

	if (t19 != 26) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x169 = UINT64_MAX;
	uint32_t x170 = 440556U;
	uint16_t x171 = UINT16_MAX;
	volatile int8_t x172 = 1;
	uint64_t t20 = UINT64_MAX;

	t20 = (x169<<(x170<(x171/x172)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x173 = INT8_MAX;
	volatile int64_t x174 = INT64_MAX;
	static volatile int8_t x175 = -1;
	volatile uint8_t x176 = 16U;

	t21 = (x173<<(x174<(x175/x176)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x181 = 2304489973161753982LLU;
	uint32_t x182 = 72906394U;
	volatile int64_t x184 = INT64_MIN;
	uint64_t t22 = 9275571LLU;

	t22 = (x181<<(x182<(x183/x184)));

	if (t22 != 2304489973161753982LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x190 = -361;
	uint64_t x192 = 4LLU;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x189<<(x190<(x191/x192)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 22U;
	uint8_t x196 = UINT8_MAX;
	volatile int64_t t24 = 14342838330308706LL;

	t24 = (x193<<(x194<(x195/x196)));

	if (t24 != 183092709040300784LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x201 = 63;
	int64_t x202 = INT64_MIN;
	volatile uint32_t x203 = UINT32_MAX;
	static int64_t x204 = -1LL;
	int32_t t25 = 1;

	t25 = (x201<<(x202<(x203/x204)));

	if (t25 != 126) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x213 = 179;
	uint8_t x214 = 10U;
	uint16_t x215 = 6U;
	static int16_t x216 = INT16_MIN;

	t26 = (x213<<(x214<(x215/x216)));

	if (t26 != 179) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x225 = 1U;
	uint16_t x226 = 48U;
	volatile int32_t x227 = -4;

	t27 = (x225<<(x226<(x227/x228)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x229 = 2296768;
	static int64_t x231 = INT64_MIN;
	uint8_t x232 = 50U;
	volatile int32_t t28 = -3287720;

	t28 = (x229<<(x230<(x231/x232)));

	if (t28 != 2296768) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x239 = -1;
	int16_t x240 = -1;

	t29 = (x237<<(x238<(x239/x240)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x241 = 8U;
	static uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 1792U;
	uint16_t x244 = 1405U;
	int32_t t30 = -9;

	t30 = (x241<<(x242<(x243/x244)));

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x249 = UINT16_MAX;
	volatile uint8_t x250 = 85U;
	uint16_t x251 = 3U;
	uint32_t x252 = 14U;
	volatile int32_t t31 = 1;

	t31 = (x249<<(x250<(x251/x252)));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x265 = 6U;
	volatile uint16_t x266 = 436U;
	static int64_t x267 = 7964300776606951LL;
	int32_t x268 = INT32_MAX;
	int32_t t32 = 221;

	t32 = (x265<<(x266<(x267/x268)));

	if (t32 != 12) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x269 = 31128U;
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 714LLU;
	volatile int32_t t33 = -1;

	t33 = (x269<<(x270<(x271/x272)));

	if (t33 != 31128) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x277 = INT32_MAX;
	static int32_t x278 = INT32_MIN;
	uint32_t x279 = 7089U;
	int32_t x280 = 3;
	volatile int32_t t34 = INT32_MAX;

	t34 = (x277<<(x278<(x279/x280)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x281 = INT8_MAX;
	int16_t x283 = INT16_MAX;
	uint64_t x284 = 16420166334915993LLU;

	t35 = (x281<<(x282<(x283/x284)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x289 = 0;
	int8_t x290 = INT8_MAX;
	int64_t x292 = INT64_MAX;
	volatile int32_t t36 = -2456;

	t36 = (x289<<(x290<(x291/x292)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x293 = 0;
	int16_t x294 = INT16_MAX;
	static int32_t x295 = INT32_MIN;
	static int32_t x296 = 90;
	volatile int32_t t37 = -118466;

	t37 = (x293<<(x294<(x295/x296)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x314 = -1LL;
	int32_t t38 = -38915;

	t38 = (x313<<(x314<(x315/x316)));

	if (t38 != 254) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x325 = 493;
	volatile int64_t x326 = -1LL;
	int32_t x327 = -1;
	static uint8_t x328 = 1U;
	volatile int32_t t39 = -191356;

	t39 = (x325<<(x326<(x327/x328)));

	if (t39 != 493) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x329 = UINT32_MAX;
	uint64_t x331 = 768LLU;
	int8_t x332 = -1;
	uint32_t t40 = UINT32_MAX;

	t40 = (x329<<(x330<(x331/x332)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 5598510074LLU;
	int32_t x335 = INT32_MIN;
	int32_t t41 = -117803058;

	t41 = (x333<<(x334<(x335/x336)));

	if (t41 != 131070) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x345 = 0;
	volatile int8_t x346 = -1;
	int64_t x347 = -1LL;
	int32_t t42 = -941;

	t42 = (x345<<(x346<(x347/x348)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x365 = 5LL;
	int8_t x366 = -22;
	int64_t x367 = INT64_MAX;
	volatile int8_t x368 = 2;
	volatile int64_t t43 = -7757450455268LL;

	t43 = (x365<<(x366<(x367/x368)));

	if (t43 != 10LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x369 = 45914934;
	int16_t x370 = 214;
	uint32_t x371 = 1004595588U;
	int32_t x372 = -40942710;
	volatile int32_t t44 = 565;

	t44 = (x369<<(x370<(x371/x372)));

	if (t44 != 45914934) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x377 = UINT32_MAX;
	volatile uint8_t x380 = 1U;

	t45 = (x377<<(x378<(x379/x380)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x381 = 4U;
	int32_t x382 = 1;
	int64_t x383 = INT64_MIN;
	int32_t x384 = 1213990;
	static int32_t t46 = -30516;

	t46 = (x381<<(x382<(x383/x384)));

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x398 = UINT8_MAX;
	int32_t x399 = INT32_MIN;
	volatile uint32_t x400 = UINT32_MAX;

	t47 = (x397<<(x398<(x399/x400)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x421 = UINT32_MAX;
	int32_t x423 = -27022;
	int32_t x424 = INT32_MIN;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x421<<(x422<(x423/x424)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x429 = UINT32_MAX;
	volatile int16_t x430 = -1;
	uint64_t x431 = UINT64_MAX;
	static int8_t x432 = INT8_MIN;
	static volatile uint32_t t49 = UINT32_MAX;

	t49 = (x429<<(x430<(x431/x432)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x437 = 4LLU;
	int16_t x438 = INT16_MAX;
	static int32_t x439 = -1;
	int32_t x440 = 10;
	volatile uint64_t t50 = 45430461LLU;

	t50 = (x437<<(x438<(x439/x440)));

	if (t50 != 4LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x446 = 1332U;
	int16_t x447 = -1;
	volatile int8_t x448 = INT8_MIN;

	t51 = (x445<<(x446<(x447/x448)));

	if (t51 != 92) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x465 = 48U;
	int16_t x466 = 46;
	uint16_t x467 = 12U;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t52 = -21704;

	t52 = (x465<<(x466<(x467/x468)));

	if (t52 != 48) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x469 = 5265U;
	static uint16_t x470 = 15185U;
	int16_t x471 = INT16_MAX;
	volatile int32_t t53 = -29897;

	t53 = (x469<<(x470<(x471/x472)));

	if (t53 != 5265) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x497 = 5964749387635697085LLU;
	volatile int8_t x500 = INT8_MIN;
	static volatile uint64_t t54 = 0LLU;

	t54 = (x497<<(x498<(x499/x500)));

	if (t54 != 11929498775271394170LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x505 = UINT64_MAX;
	int64_t x508 = INT64_MIN;

	t55 = (x505<<(x506<(x507/x508)));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x513 = 6558U;
	volatile uint8_t x514 = UINT8_MAX;
	int8_t x515 = -1;
	volatile int64_t x516 = -16130578151962LL;
	volatile int32_t t56 = 94;

	t56 = (x513<<(x514<(x515/x516)));

	if (t56 != 6558) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x517 = 571U;
	int32_t x519 = INT32_MIN;
	int16_t x520 = -2;
	volatile int32_t t57 = 828247;

	t57 = (x517<<(x518<(x519/x520)));

	if (t57 != 1142) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x521 = 17;
	static int64_t x522 = -1LL;
	uint16_t x523 = 1951U;
	int32_t t58 = -132515391;

	t58 = (x521<<(x522<(x523/x524)));

	if (t58 != 34) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x525 = INT32_MAX;
	int32_t x526 = -1;
	int32_t x527 = -1;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x525<<(x526<(x527/x528)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x529 = 687138;
	static int32_t x530 = 1;
	int64_t x531 = -1LL;
	int32_t t60 = 28;

	t60 = (x529<<(x530<(x531/x532)));

	if (t60 != 687138) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x535 = INT64_MIN;
	volatile uint16_t x536 = UINT16_MAX;

	t61 = (x533<<(x534<(x535/x536)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x537 = 1;
	static int16_t x538 = INT16_MAX;
	int16_t x539 = -1;
	int64_t x540 = INT64_MAX;
	int32_t t62 = -4;

	t62 = (x537<<(x538<(x539/x540)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x549 = UINT64_MAX;
	int64_t x550 = 11280957080993417LL;
	int32_t x551 = INT32_MAX;
	int64_t x552 = -800450007540LL;
	uint64_t t63 = UINT64_MAX;

	t63 = (x549<<(x550<(x551/x552)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x553 = 1751U;
	uint64_t x555 = UINT64_MAX;
	int64_t x556 = INT64_MAX;
	uint32_t t64 = 6823177U;

	t64 = (x553<<(x554<(x555/x556)));

	if (t64 != 1751U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x557 = 0U;
	volatile uint8_t x558 = UINT8_MAX;
	int8_t x560 = -9;
	volatile int32_t t65 = 20817676;

	t65 = (x557<<(x558<(x559/x560)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x569 = INT8_MAX;
	static int64_t x570 = 4LL;
	int64_t x571 = INT64_MIN;
	static volatile int16_t x572 = INT16_MAX;
	static int32_t t66 = 0;

	t66 = (x569<<(x570<(x571/x572)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x597 = 1U;
	int64_t x598 = INT64_MIN;
	uint8_t x599 = UINT8_MAX;
	uint8_t x600 = 18U;
	volatile int32_t t67 = -15;

	t67 = (x597<<(x598<(x599/x600)));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x613 = UINT64_MAX;
	volatile int32_t x614 = INT32_MIN;
	volatile int16_t x615 = -73;
	uint64_t t68 = 128823502391LLU;

	t68 = (x613<<(x614<(x615/x616)));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x619 = INT64_MIN;
	volatile uint32_t x620 = 406908U;
	int32_t t69 = INT32_MAX;

	t69 = (x617<<(x618<(x619/x620)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x622 = 31419U;
	int64_t x623 = 3LL;
	static int32_t x624 = INT32_MIN;
	volatile int32_t t70 = 15;

	t70 = (x621<<(x622<(x623/x624)));

	if (t70 != 73313717) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x625 = 20040U;
	volatile int8_t x626 = -1;
	int64_t x627 = -94671912282LL;
	volatile uint32_t t71 = 2074271U;

	t71 = (x625<<(x626<(x627/x628)));

	if (t71 != 40080U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x640 = 1008488627;
	int32_t t72 = 15;

	t72 = (x637<<(x638<(x639/x640)));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x641 = INT64_MAX;
	static int8_t x642 = INT8_MAX;
	static int64_t x644 = INT64_MAX;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x641<<(x642<(x643/x644)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x645 = 13082792LLU;
	int16_t x646 = -248;
	volatile int8_t x647 = INT8_MAX;
	volatile uint64_t t74 = 716LLU;

	t74 = (x645<<(x646<(x647/x648)));

	if (t74 != 26165584LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x649 = UINT32_MAX;
	int16_t x650 = -1;
	static volatile int8_t x652 = INT8_MIN;
	static uint32_t t75 = 3U;

	t75 = (x649<<(x650<(x651/x652)));

	if (t75 != 4294967294U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x657 = 519499LLU;
	static uint16_t x658 = UINT16_MAX;
	uint16_t x660 = 5U;
	static uint64_t t76 = 162390809196081930LLU;

	t76 = (x657<<(x658<(x659/x660)));

	if (t76 != 519499LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x661 = INT8_MAX;
	int64_t x662 = -88898LL;
	int32_t t77 = 112671828;

	t77 = (x661<<(x662<(x663/x664)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x665 = UINT32_MAX;
	int16_t x666 = INT16_MAX;
	volatile int8_t x667 = -1;
	volatile int32_t x668 = INT32_MIN;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (x665<<(x666<(x667/x668)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x677 = UINT64_MAX;
	static uint64_t x679 = 4048602380709855524LLU;

	t79 = (x677<<(x678<(x679/x680)));

	if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x681 = INT64_MAX;
	static int32_t x682 = INT32_MIN;
	uint32_t x684 = UINT32_MAX;
	int64_t t80 = INT64_MAX;

	t80 = (x681<<(x682<(x683/x684)));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x698 = 460;
	uint64_t x699 = 956198LLU;
	int16_t x700 = 3240;
	int32_t t81 = -15213894;

	t81 = (x697<<(x698<(x699/x700)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x710 = INT16_MIN;
	volatile int64_t x711 = 99606237546643LL;

	t82 = (x709<<(x710<(x711/x712)));

	if (t82 != 510) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x713 = 9809;
	int8_t x715 = 1;
	volatile int32_t t83 = -168248;

	t83 = (x713<<(x714<(x715/x716)));

	if (t83 != 9809) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x717 = 1809U;
	int64_t x718 = 2593126617858LL;
	uint32_t x719 = 59U;
	int16_t x720 = INT16_MIN;

	t84 = (x717<<(x718<(x719/x720)));

	if (t84 != 1809) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x729 = 365LLU;
	uint64_t x730 = UINT64_MAX;
	volatile int16_t x731 = 12696;
	uint32_t x732 = UINT32_MAX;
	uint64_t t85 = 4305LLU;

	t85 = (x729<<(x730<(x731/x732)));

	if (t85 != 365LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x733 = 43278290U;
	int64_t x734 = INT64_MIN;
	volatile int8_t x735 = 10;
	static int16_t x736 = INT16_MIN;
	static volatile uint32_t t86 = 212409U;

	t86 = (x733<<(x734<(x735/x736)));

	if (t86 != 86556580U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x737 = 0U;
	int8_t x738 = -3;
	int32_t x739 = INT32_MIN;
	int16_t x740 = INT16_MIN;
	volatile int32_t t87 = 125698;

	t87 = (x737<<(x738<(x739/x740)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x749 = 321U;
	volatile uint32_t x750 = 31957U;
	uint8_t x751 = 17U;
	static volatile int8_t x752 = 12;
	volatile int32_t t88 = 146396;

	t88 = (x749<<(x750<(x751/x752)));

	if (t88 != 321) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x753 = 37U;
	int64_t x754 = INT64_MAX;
	static int32_t x755 = 1;
	uint16_t x756 = UINT16_MAX;

	t89 = (x753<<(x754<(x755/x756)));

	if (t89 != 37) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x757 = INT16_MAX;
	static int64_t x758 = INT64_MIN;
	volatile uint64_t x760 = 354783571478907501LLU;
	int32_t t90 = 263145;

	t90 = (x757<<(x758<(x759/x760)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x765 = INT16_MAX;
	uint8_t x766 = 29U;
	int16_t x768 = INT16_MAX;
	int32_t t91 = 1138743;

	t91 = (x765<<(x766<(x767/x768)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x769 = UINT8_MAX;
	volatile int32_t t92 = -35115;

	t92 = (x769<<(x770<(x771/x772)));

	if (t92 != 510) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x777 = 2362506456621951310LL;
	volatile int64_t x778 = INT64_MAX;
	int32_t x779 = INT32_MAX;
	int64_t t93 = 30177616080LL;

	t93 = (x777<<(x778<(x779/x780)));

	if (t93 != 2362506456621951310LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x802 = -727;
	int8_t x803 = 3;
	volatile int16_t x804 = INT16_MIN;
	int32_t t94 = 47077;

	t94 = (x801<<(x802<(x803/x804)));

	if (t94 != 12) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x805 = INT32_MAX;
	uint64_t x806 = 18LLU;
	int64_t x807 = -150LL;

	t95 = (x805<<(x806<(x807/x808)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x837 = 0;
	uint8_t x838 = 1U;
	int32_t x839 = INT32_MAX;
	int64_t x840 = 44LL;
	static int32_t t96 = 7895050;

	t96 = (x837<<(x838<(x839/x840)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x841 = 0;
	int16_t x843 = INT16_MAX;
	int32_t x844 = INT32_MAX;
	int32_t t97 = -5664337;

	t97 = (x841<<(x842<(x843/x844)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x857 = INT16_MAX;
	volatile uint8_t x858 = 3U;
	volatile int8_t x860 = INT8_MIN;
	int32_t t98 = -26;

	t98 = (x857<<(x858<(x859/x860)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x869 = 495LLU;
	int8_t x870 = INT8_MIN;
	int32_t x871 = INT32_MIN;
	uint16_t x872 = 374U;
	uint64_t t99 = 41223613253224LLU;

	t99 = (x869<<(x870<(x871/x872)));

	if (t99 != 495LLU) { NG(); } else { ; }
	
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

