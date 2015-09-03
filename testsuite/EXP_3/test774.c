#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x65 = INT32_MAX;
uint64_t x67 = 31LLU;
volatile uint32_t x68 = 66U;
volatile int32_t x79 = -832862;
volatile int16_t x95 = 12;
int16_t x100 = -1;
int32_t x178 = -51;
volatile int16_t x179 = -20;
int16_t x194 = INT16_MAX;
int32_t x199 = INT32_MAX;
int32_t x207 = INT32_MIN;
int64_t x211 = INT64_MAX;
int64_t x212 = INT64_MAX;
static int16_t x222 = INT16_MAX;
int16_t x246 = -972;
int16_t x262 = INT16_MIN;
static volatile int32_t t21 = 4126;
uint32_t x289 = 42880U;
static int8_t x327 = -1;
int32_t t29 = -82;
uint32_t x381 = 4U;
int32_t x383 = 4;
volatile int32_t t31 = -655685;
volatile int32_t t32 = -2;
uint16_t x409 = 4U;
uint8_t x410 = 2U;
static int32_t t35 = -115;
int32_t t36 = 1;
static int32_t x434 = -5390;
uint16_t x435 = UINT16_MAX;
int32_t t37 = -14326552;
uint16_t x438 = UINT16_MAX;
static int16_t x475 = INT16_MAX;
volatile int32_t t43 = -1720902;
volatile int32_t t45 = -1009;
static int8_t x541 = 53;
static uint16_t x572 = UINT16_MAX;
uint32_t x581 = 821911307U;
static int32_t t53 = -2163856;
int64_t x599 = 3617193728630LL;
uint32_t x600 = 2U;
int32_t t54 = 9936;
volatile int32_t t55 = -11045;
int32_t t56 = 42113164;
int32_t x656 = -6;
volatile uint16_t x660 = 1U;
int32_t t58 = -43432;
int16_t x747 = 12686;
static volatile int16_t x750 = INT16_MIN;
int16_t x752 = INT16_MIN;
volatile int32_t t63 = 197;
uint16_t x755 = 4U;
static volatile int8_t x762 = -15;
uint16_t x763 = 0U;
int32_t t65 = -16350372;
volatile int16_t x776 = -1;
volatile int32_t t66 = 60;
int8_t x780 = 1;
volatile int32_t t67 = 5;
int32_t x799 = INT32_MIN;
uint16_t x817 = 15U;
volatile uint32_t x820 = UINT32_MAX;
uint16_t x822 = UINT16_MAX;
int32_t t73 = 1680956;
static int32_t x833 = -1;
uint16_t x835 = 6386U;
static int32_t t78 = 130028522;
int64_t x877 = INT64_MIN;
uint16_t x889 = 164U;
int8_t x890 = 20;
uint32_t x900 = 621547U;
int32_t t81 = 943421;
static int32_t x913 = -1;
static int8_t x914 = -1;
int32_t t83 = 1;
static int16_t x933 = -506;
int32_t x934 = INT32_MAX;
volatile int32_t x937 = INT32_MAX;
static volatile int32_t x946 = -1146391;
uint64_t x1023 = 2706827727LLU;
int64_t x1030 = INT64_MAX;
int32_t t90 = 13030762;
int32_t x1037 = INT32_MAX;
static int32_t x1040 = INT32_MIN;
volatile int32_t t92 = -254527;
static uint8_t x1051 = 10U;
volatile int32_t t93 = 16906;
static int16_t x1079 = INT16_MIN;
int8_t x1080 = -1;
int32_t x1131 = 2;
int64_t x1132 = INT64_MIN;
static int32_t x1146 = 10;
uint32_t x1162 = 49163685U;


void f0(void) {
	int32_t x33 = INT32_MIN;
	volatile int8_t x34 = INT8_MIN;
	uint64_t x35 = 746275155208836480LLU;
	uint8_t x36 = 1U;
	int32_t t0 = -106903654;

	t0 = ((x33==x34)>>(x35%x36));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x41 = INT64_MAX;
	volatile int32_t x42 = 404037783;
	volatile uint16_t x43 = 3U;
	int64_t x44 = INT64_MIN;
	static int32_t t1 = 1677561;

	t1 = ((x41==x42)>>(x43%x44));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x66 = INT32_MIN;
	static int32_t t2 = -1;

	t2 = ((x65==x66)>>(x67%x68));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x77 = -2;
	int32_t x78 = 14797;
	uint64_t x80 = 1LLU;
	volatile int32_t t3 = 6394544;

	t3 = ((x77==x78)>>(x79%x80));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x89 = INT8_MAX;
	uint32_t x90 = UINT32_MAX;
	uint8_t x91 = 0U;
	uint32_t x92 = 8851308U;
	volatile int32_t t4 = 95;

	t4 = ((x89==x90)>>(x91%x92));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MAX;
	int16_t x96 = INT16_MAX;
	int32_t t5 = 1;

	t5 = ((x93==x94)>>(x95%x96));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x97 = -1;
	static int8_t x98 = -21;
	int32_t x99 = 4;
	int32_t t6 = 365;

	t6 = ((x97==x98)>>(x99%x100));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x133 = -1;
	static int8_t x134 = 1;
	uint32_t x135 = 1U;
	int8_t x136 = INT8_MIN;
	volatile int32_t t7 = 0;

	t7 = ((x133==x134)>>(x135%x136));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MAX;
	volatile int16_t x143 = 1;
	static int32_t x144 = INT32_MIN;
	int32_t t8 = 33136852;

	t8 = ((x141==x142)>>(x143%x144));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x177 = 14U;
	uint16_t x180 = 1U;
	volatile int32_t t9 = -24;

	t9 = ((x177==x178)>>(x179%x180));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x181 = 1846U;
	static int16_t x182 = 2;
	volatile uint64_t x183 = 7LLU;
	int16_t x184 = -1;
	int32_t t10 = -220809;

	t10 = ((x181==x182)>>(x183%x184));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	static uint16_t x188 = 16U;
	int32_t t11 = -2573;

	t11 = ((x185==x186)>>(x187%x188));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x193 = UINT16_MAX;
	volatile uint8_t x195 = 10U;
	uint64_t x196 = 76212707816829LLU;
	int32_t t12 = 603894313;

	t12 = ((x193==x194)>>(x195%x196));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x197 = UINT8_MAX;
	int32_t x198 = 0;
	int32_t x200 = INT32_MAX;
	static int32_t t13 = -13985788;

	t13 = ((x197==x198)>>(x199%x200));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x205 = 43;
	static int64_t x206 = -1LL;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t14 = -27929868;

	t14 = ((x205==x206)>>(x207%x208));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x209 = UINT8_MAX;
	int16_t x210 = INT16_MIN;
	volatile int32_t t15 = -4100980;

	t15 = ((x209==x210)>>(x211%x212));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x221 = 1U;
	uint64_t x223 = UINT64_MAX;
	volatile int64_t x224 = INT64_MAX;
	static int32_t t16 = 354539789;

	t16 = ((x221==x222)>>(x223%x224));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x237 = 222;
	int16_t x238 = INT16_MAX;
	int32_t x239 = -1;
	int8_t x240 = -1;
	int32_t t17 = -3;

	t17 = ((x237==x238)>>(x239%x240));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x241 = 35;
	volatile int64_t x242 = INT64_MAX;
	uint32_t x243 = 19U;
	uint32_t x244 = 15063U;
	volatile int32_t t18 = 5934;

	t18 = ((x241==x242)>>(x243%x244));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x245 = INT64_MIN;
	int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MAX;
	static volatile int32_t t19 = 3;

	t19 = ((x245==x246)>>(x247%x248));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x249 = INT32_MIN;
	int64_t x250 = -1LL;
	volatile int64_t x251 = INT64_MAX;
	int16_t x252 = 95;
	int32_t t20 = 2895;

	t20 = ((x249==x250)>>(x251%x252));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x261 = INT16_MIN;
	volatile uint8_t x263 = 3U;
	int32_t x264 = 7;

	t21 = ((x261==x262)>>(x263%x264));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	volatile int64_t x283 = -1LL;
	static int8_t x284 = -1;
	int32_t t22 = 18160;

	t22 = ((x281==x282)>>(x283%x284));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x290 = UINT8_MAX;
	volatile uint32_t x291 = UINT32_MAX;
	uint8_t x292 = 3U;
	volatile int32_t t23 = -50956;

	t23 = ((x289==x290)>>(x291%x292));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x301 = 160U;
	static uint8_t x302 = 8U;
	uint64_t x303 = 4LLU;
	int64_t x304 = -1LL;
	int32_t t24 = -2177620;

	t24 = ((x301==x302)>>(x303%x304));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x313 = 46081498LLU;
	int16_t x314 = INT16_MIN;
	int64_t x315 = 139LL;
	static volatile int16_t x316 = -1;
	static volatile int32_t t25 = 0;

	t25 = ((x313==x314)>>(x315%x316));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x325 = 116768047U;
	int64_t x326 = INT64_MIN;
	uint32_t x328 = UINT32_MAX;
	int32_t t26 = 1177;

	t26 = ((x325==x326)>>(x327%x328));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MIN;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t27 = 207;

	t27 = ((x333==x334)>>(x335%x336));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x353 = INT8_MAX;
	int32_t x354 = 0;
	int64_t x355 = -2063928847841447408LL;
	int8_t x356 = -1;
	static volatile int32_t t28 = -184476;

	t28 = ((x353==x354)>>(x355%x356));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MAX;
	uint16_t x364 = 6U;

	t29 = ((x361==x362)>>(x363%x364));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x382 = 12U;
	int32_t x384 = -1;
	static int32_t t30 = -304342;

	t30 = ((x381==x382)>>(x383%x384));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x385 = INT8_MAX;
	uint64_t x386 = UINT64_MAX;
	uint16_t x387 = 19U;
	volatile int64_t x388 = -1LL;

	t31 = ((x385==x386)>>(x387%x388));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x393 = 1974U;
	int32_t x394 = 160496392;
	int8_t x395 = 15;
	int8_t x396 = 1;

	t32 = ((x393==x394)>>(x395%x396));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x401 = INT32_MIN;
	uint16_t x402 = 105U;
	int32_t x403 = INT32_MAX;
	int32_t x404 = INT32_MAX;
	static volatile int32_t t33 = -101;

	t33 = ((x401==x402)>>(x403%x404));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = -1;
	static uint64_t x407 = UINT64_MAX;
	static int8_t x408 = -1;
	static volatile int32_t t34 = 3174575;

	t34 = ((x405==x406)>>(x407%x408));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x411 = 225277232U;
	int8_t x412 = 1;

	t35 = ((x409==x410)>>(x411%x412));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x421 = 3U;
	volatile int32_t x422 = -483692888;
	volatile uint32_t x423 = 5U;
	int64_t x424 = INT64_MAX;

	t36 = ((x421==x422)>>(x423%x424));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x433 = 6LLU;
	volatile int16_t x436 = -1;

	t37 = ((x433==x434)>>(x435%x436));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x437 = -363101556;
	int8_t x439 = 1;
	int8_t x440 = INT8_MIN;
	static volatile int32_t t38 = 1;

	t38 = ((x437==x438)>>(x439%x440));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x461 = -1;
	int16_t x462 = 1;
	uint64_t x463 = UINT64_MAX;
	int8_t x464 = 1;
	static volatile int32_t t39 = -94761300;

	t39 = ((x461==x462)>>(x463%x464));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x469 = -1;
	uint8_t x470 = UINT8_MAX;
	uint16_t x471 = 0U;
	int32_t x472 = INT32_MAX;
	volatile int32_t t40 = -3663;

	t40 = ((x469==x470)>>(x471%x472));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x473 = INT32_MIN;
	int64_t x474 = -1LL;
	volatile int8_t x476 = INT8_MAX;
	volatile int32_t t41 = 2014186;

	t41 = ((x473==x474)>>(x475%x476));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x481 = INT64_MIN;
	static int64_t x482 = -1LL;
	int16_t x483 = INT16_MIN;
	int32_t x484 = -1;
	static volatile int32_t t42 = -60455;

	t42 = ((x481==x482)>>(x483%x484));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x485 = INT8_MIN;
	static volatile int64_t x486 = INT64_MIN;
	uint64_t x487 = 4LLU;
	int8_t x488 = 9;

	t43 = ((x485==x486)>>(x487%x488));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x489 = -2;
	int64_t x490 = INT64_MAX;
	uint8_t x491 = 1U;
	uint8_t x492 = 1U;
	volatile int32_t t44 = 740791;

	t44 = ((x489==x490)>>(x491%x492));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x493 = INT8_MIN;
	static volatile int16_t x494 = INT16_MIN;
	uint32_t x495 = 15U;
	static int32_t x496 = -1;

	t45 = ((x493==x494)>>(x495%x496));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x497 = INT32_MIN;
	static volatile int32_t x498 = INT32_MIN;
	int8_t x499 = -6;
	int16_t x500 = -1;
	int32_t t46 = -1;

	t46 = ((x497==x498)>>(x499%x500));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x513 = INT8_MAX;
	int32_t x514 = INT32_MIN;
	uint64_t x515 = UINT64_MAX;
	int32_t x516 = -1;
	static volatile int32_t t47 = -465;

	t47 = ((x513==x514)>>(x515%x516));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x517 = INT64_MIN;
	int16_t x518 = INT16_MIN;
	static uint8_t x519 = 1U;
	uint16_t x520 = 441U;
	volatile int32_t t48 = 293303893;

	t48 = ((x517==x518)>>(x519%x520));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x542 = INT16_MIN;
	int16_t x543 = -16378;
	int64_t x544 = -1LL;
	volatile int32_t t49 = -850558;

	t49 = ((x541==x542)>>(x543%x544));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x549 = INT64_MIN;
	volatile int16_t x550 = -1;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = -1;
	static volatile int32_t t50 = -48;

	t50 = ((x549==x550)>>(x551%x552));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x569 = INT16_MIN;
	int32_t x570 = INT32_MIN;
	uint16_t x571 = UINT16_MAX;
	int32_t t51 = -801;

	t51 = ((x569==x570)>>(x571%x572));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x573 = INT16_MIN;
	int16_t x574 = INT16_MIN;
	int8_t x575 = -1;
	uint64_t x576 = UINT64_MAX;
	int32_t t52 = -64;

	t52 = ((x573==x574)>>(x575%x576));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x582 = INT32_MIN;
	volatile int32_t x583 = 1;
	static volatile uint16_t x584 = UINT16_MAX;

	t53 = ((x581==x582)>>(x583%x584));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x597 = UINT16_MAX;
	int32_t x598 = -877;

	t54 = ((x597==x598)>>(x599%x600));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x601 = INT64_MAX;
	uint64_t x602 = UINT64_MAX;
	uint8_t x603 = 11U;
	int16_t x604 = 14;

	t55 = ((x601==x602)>>(x603%x604));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x609 = INT32_MIN;
	uint16_t x610 = UINT16_MAX;
	static int8_t x611 = INT8_MIN;
	int64_t x612 = -1LL;

	t56 = ((x609==x610)>>(x611%x612));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x653 = -1;
	volatile uint8_t x654 = 5U;
	uint8_t x655 = 14U;
	static volatile int32_t t57 = -3;

	t57 = ((x653==x654)>>(x655%x656));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x657 = INT8_MIN;
	int64_t x658 = -118079556LL;
	static volatile int32_t x659 = -1;

	t58 = ((x657==x658)>>(x659%x660));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x665 = 0U;
	int32_t x666 = -845925662;
	volatile int64_t x667 = -1LL;
	int16_t x668 = -1;
	static volatile int32_t t59 = 317261;

	t59 = ((x665==x666)>>(x667%x668));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x677 = -1LL;
	int16_t x678 = INT16_MAX;
	uint16_t x679 = UINT16_MAX;
	uint16_t x680 = UINT16_MAX;
	static int32_t t60 = -36546253;

	t60 = ((x677==x678)>>(x679%x680));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x741 = UINT32_MAX;
	static int8_t x742 = 0;
	volatile uint16_t x743 = UINT16_MAX;
	int8_t x744 = -1;
	volatile int32_t t61 = 1;

	t61 = ((x741==x742)>>(x743%x744));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x745 = -1;
	static volatile int32_t x746 = 0;
	static int8_t x748 = 10;
	int32_t t62 = -3;

	t62 = ((x745==x746)>>(x747%x748));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x749 = 89U;
	static uint32_t x751 = 1U;

	t63 = ((x749==x750)>>(x751%x752));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x753 = INT32_MIN;
	volatile int32_t x754 = -1;
	uint16_t x756 = UINT16_MAX;
	int32_t t64 = 186906;

	t64 = ((x753==x754)>>(x755%x756));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x761 = 21U;
	int32_t x764 = -1;

	t65 = ((x761==x762)>>(x763%x764));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x773 = 1520U;
	static uint64_t x774 = 5166683814920LLU;
	uint16_t x775 = UINT16_MAX;

	t66 = ((x773==x774)>>(x775%x776));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x777 = INT64_MIN;
	uint64_t x778 = 109793943LLU;
	int8_t x779 = -1;

	t67 = ((x777==x778)>>(x779%x780));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x793 = INT32_MAX;
	int32_t x794 = 589495982;
	uint64_t x795 = UINT64_MAX;
	int32_t x796 = -1;
	int32_t t68 = -758457;

	t68 = ((x793==x794)>>(x795%x796));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x797 = INT32_MIN;
	int32_t x798 = INT32_MAX;
	uint64_t x800 = 7LLU;
	int32_t t69 = 1675;

	t69 = ((x797==x798)>>(x799%x800));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x805 = 41553112960237729LLU;
	static int16_t x806 = INT16_MAX;
	int64_t x807 = INT64_MAX;
	int8_t x808 = -1;
	int32_t t70 = 1463;

	t70 = ((x805==x806)>>(x807%x808));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x809 = -22190330990413323LL;
	uint16_t x810 = 29556U;
	int64_t x811 = -1LL;
	int8_t x812 = -1;
	int32_t t71 = 273412955;

	t71 = ((x809==x810)>>(x811%x812));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x818 = -1;
	uint32_t x819 = UINT32_MAX;
	volatile int32_t t72 = 1605;

	t72 = ((x817==x818)>>(x819%x820));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x821 = 5361;
	static volatile int16_t x823 = 18;
	int32_t x824 = 33267465;

	t73 = ((x821==x822)>>(x823%x824));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x825 = INT32_MIN;
	static int8_t x826 = INT8_MAX;
	static int64_t x827 = INT64_MAX;
	int64_t x828 = INT64_MAX;
	volatile int32_t t74 = 61273262;

	t74 = ((x825==x826)>>(x827%x828));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x829 = UINT8_MAX;
	volatile int16_t x830 = INT16_MAX;
	uint16_t x831 = 85U;
	volatile uint8_t x832 = 55U;
	static int32_t t75 = -530;

	t75 = ((x829==x830)>>(x831%x832));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x834 = 1U;
	volatile uint16_t x836 = 4U;
	static int32_t t76 = 402884;

	t76 = ((x833==x834)>>(x835%x836));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x865 = UINT64_MAX;
	volatile uint32_t x866 = 1165131555U;
	uint8_t x867 = 5U;
	int64_t x868 = INT64_MIN;
	static volatile int32_t t77 = -57649039;

	t77 = ((x865==x866)>>(x867%x868));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x869 = 3103826LL;
	int64_t x870 = 3482434881177LL;
	volatile uint16_t x871 = UINT16_MAX;
	int8_t x872 = INT8_MAX;

	t78 = ((x869==x870)>>(x871%x872));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x878 = 739668;
	volatile int8_t x879 = 22;
	volatile int32_t x880 = INT32_MIN;
	volatile int32_t t79 = 5;

	t79 = ((x877==x878)>>(x879%x880));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x891 = 0U;
	int32_t x892 = INT32_MIN;
	int32_t t80 = -915856349;

	t80 = ((x889==x890)>>(x891%x892));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x897 = -1;
	uint8_t x898 = 4U;
	uint16_t x899 = 10U;

	t81 = ((x897==x898)>>(x899%x900));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x915 = 0;
	uint64_t x916 = 6123879LLU;
	volatile int32_t t82 = 12219;

	t82 = ((x913==x914)>>(x915%x916));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x921 = UINT16_MAX;
	volatile int16_t x922 = 147;
	int64_t x923 = INT64_MAX;
	int8_t x924 = -1;

	t83 = ((x921==x922)>>(x923%x924));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x935 = INT16_MIN;
	int16_t x936 = -1;
	static int32_t t84 = 966937090;

	t84 = ((x933==x934)>>(x935%x936));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x938 = -1LL;
	static uint16_t x939 = 7U;
	uint16_t x940 = UINT16_MAX;
	int32_t t85 = -6097;

	t85 = ((x937==x938)>>(x939%x940));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x945 = UINT64_MAX;
	int16_t x947 = INT16_MAX;
	uint64_t x948 = 21LLU;
	int32_t t86 = -16792;

	t86 = ((x945==x946)>>(x947%x948));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x997 = 4162;
	uint8_t x998 = 3U;
	static volatile uint8_t x999 = 5U;
	int8_t x1000 = -1;
	int32_t t87 = -4640623;

	t87 = ((x997==x998)>>(x999%x1000));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1013 = UINT16_MAX;
	uint8_t x1014 = 1U;
	uint8_t x1015 = 4U;
	int64_t x1016 = -27413040510LL;
	static volatile int32_t t88 = 50500906;

	t88 = ((x1013==x1014)>>(x1015%x1016));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x1021 = INT16_MIN;
	uint16_t x1022 = 69U;
	uint32_t x1024 = 8U;
	volatile int32_t t89 = 47044;

	t89 = ((x1021==x1022)>>(x1023%x1024));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1029 = INT32_MIN;
	static uint32_t x1031 = UINT32_MAX;
	volatile uint16_t x1032 = UINT16_MAX;

	t90 = ((x1029==x1030)>>(x1031%x1032));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1033 = -1;
	volatile uint8_t x1034 = 3U;
	int64_t x1035 = INT64_MIN;
	static int64_t x1036 = INT64_MIN;
	volatile int32_t t91 = -444581;

	t91 = ((x1033==x1034)>>(x1035%x1036));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1038 = UINT16_MAX;
	static int16_t x1039 = 0;

	t92 = ((x1037==x1038)>>(x1039%x1040));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1049 = INT64_MIN;
	volatile int64_t x1050 = INT64_MIN;
	int32_t x1052 = INT32_MAX;

	t93 = ((x1049==x1050)>>(x1051%x1052));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x1077 = 0LLU;
	int32_t x1078 = INT32_MIN;
	static volatile int32_t t94 = 102569131;

	t94 = ((x1077==x1078)>>(x1079%x1080));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1105 = 0;
	static int64_t x1106 = -1647398169523379LL;
	int16_t x1107 = 722;
	int8_t x1108 = -1;
	volatile int32_t t95 = 34;

	t95 = ((x1105==x1106)>>(x1107%x1108));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1129 = 5;
	volatile int64_t x1130 = INT64_MAX;
	int32_t t96 = -2976;

	t96 = ((x1129==x1130)>>(x1131%x1132));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1145 = 12;
	uint16_t x1147 = 14U;
	int16_t x1148 = -11261;
	static volatile int32_t t97 = -178;

	t97 = ((x1145==x1146)>>(x1147%x1148));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1149 = -1;
	int8_t x1150 = 62;
	static int8_t x1151 = 1;
	int32_t x1152 = INT32_MAX;
	int32_t t98 = 51835194;

	t98 = ((x1149==x1150)>>(x1151%x1152));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1161 = 30619U;
	uint8_t x1163 = UINT8_MAX;
	uint8_t x1164 = 41U;
	static volatile int32_t t99 = 3969021;

	t99 = ((x1161==x1162)>>(x1163%x1164));

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

