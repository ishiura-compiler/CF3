#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 18572;
volatile int64_t x88 = -15145LL;
int64_t x103 = 41675770965417LL;
int32_t t5 = -88;
uint8_t x125 = 28U;
static uint8_t x128 = UINT8_MAX;
static int32_t t7 = 973004;
static uint32_t x149 = 35U;
uint8_t x153 = 16U;
int64_t x162 = INT64_MIN;
int32_t x163 = 930523875;
static uint8_t x164 = 3U;
volatile uint64_t x173 = 6409LLU;
volatile int32_t x174 = INT32_MIN;
int16_t x176 = 1;
uint32_t x194 = UINT32_MAX;
static int64_t x214 = INT64_MIN;
int32_t t13 = 6824516;
int16_t x231 = INT16_MIN;
static volatile int32_t t14 = -41011;
volatile int32_t t16 = 1;
volatile uint32_t x262 = 15442560U;
int32_t x265 = -1;
int64_t x273 = -52680987LL;
uint64_t x275 = UINT64_MAX;
int64_t x281 = 238005741082729LL;
int32_t t20 = -397768;
uint32_t x299 = UINT32_MAX;
int64_t x301 = INT64_MIN;
int8_t x314 = INT8_MAX;
static int32_t t24 = 16593601;
static int8_t x319 = 1;
volatile int32_t x321 = -1;
int32_t t27 = 162613;
uint32_t x330 = UINT32_MAX;
volatile int64_t x350 = -2472LL;
static int16_t x355 = INT16_MIN;
volatile int16_t x365 = INT16_MAX;
int8_t x368 = -2;
volatile int16_t x391 = 1;
int32_t x400 = 63177877;
static volatile int32_t t37 = -212446188;
int16_t x409 = -84;
int32_t x422 = INT32_MAX;
static int16_t x424 = INT16_MIN;
volatile uint32_t x481 = UINT32_MAX;
uint32_t x483 = UINT32_MAX;
uint16_t x497 = 156U;
static int32_t x498 = -126504;
static volatile int32_t t50 = -30052;
static volatile int16_t x505 = INT16_MIN;
volatile int32_t t52 = 369;
int32_t x517 = INT32_MIN;
int32_t x521 = INT32_MAX;
static uint32_t x523 = 0U;
volatile int32_t t55 = 2;
uint8_t x541 = 30U;
uint8_t x613 = 61U;
int32_t t64 = -831180277;
int8_t x621 = 4;
uint64_t x624 = 181225822421290LLU;
int32_t t66 = 12686899;
int64_t x635 = INT64_MIN;
int16_t x636 = -1;
volatile int64_t x653 = 1LL;
static volatile int32_t x688 = -1;
int32_t t70 = 662;
uint16_t x696 = UINT16_MAX;
volatile int16_t x769 = -1;
int32_t x772 = -1;
int16_t x789 = -927;
uint8_t x795 = 7U;
volatile uint64_t x804 = 7555966828275LLU;
int8_t x843 = 14;
uint8_t x850 = 36U;
static volatile int32_t t83 = -5;
int8_t x865 = 1;
volatile int64_t x874 = -72255401038LL;
static int64_t x887 = INT64_MAX;
uint64_t x895 = UINT64_MAX;
int32_t x906 = -164470813;
int8_t x909 = -1;
volatile int64_t x911 = INT64_MIN;
volatile int8_t x926 = INT8_MIN;
volatile int8_t x927 = 11;
int32_t x928 = INT32_MAX;
int32_t t91 = -1497;
int32_t x957 = -219789387;
volatile int32_t t94 = -27578428;
static int64_t x980 = -1LL;
int32_t t98 = 19433;
volatile int16_t x1017 = 0;
int8_t x1020 = -1;


void f0(void) {
	int64_t x25 = 1255383244LL;
	int64_t x26 = 18960109034450LL;
	uint8_t x27 = 0U;
	int16_t x28 = -119;
	static int32_t t0 = -26687;

	t0 = ((x25<=x26)>>(x27%x28));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x61 = 33;
	int16_t x62 = 312;
	int16_t x63 = INT16_MAX;
	uint32_t x64 = 1U;

	t1 = ((x61<=x62)>>(x63%x64));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = -1;
	static uint64_t x67 = UINT64_MAX;
	int8_t x68 = -1;
	int32_t t2 = -3;

	t2 = ((x65<=x66)>>(x67%x68));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x85 = INT16_MIN;
	uint16_t x86 = UINT16_MAX;
	static volatile uint16_t x87 = 3U;
	int32_t t3 = 4667;

	t3 = ((x85<=x86)>>(x87%x88));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x89 = INT64_MAX;
	int64_t x90 = INT64_MIN;
	volatile uint8_t x91 = 30U;
	volatile uint32_t x92 = 224U;
	volatile int32_t t4 = 25306826;

	t4 = ((x89<=x90)>>(x91%x92));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x101 = 27043U;
	int8_t x102 = 63;
	int64_t x104 = -1LL;

	t5 = ((x101<=x102)>>(x103%x104));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x105 = INT64_MAX;
	static uint8_t x106 = UINT8_MAX;
	int8_t x107 = 0;
	int32_t x108 = INT32_MAX;
	int32_t t6 = -3804;

	t6 = ((x105<=x106)>>(x107%x108));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x126 = INT32_MAX;
	volatile uint8_t x127 = 1U;

	t7 = ((x125<=x126)>>(x127%x128));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x150 = -384434042;
	int16_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t8 = -127;

	t8 = ((x149<=x150)>>(x151%x152));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x154 = 22473U;
	int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	int32_t t9 = 13;

	t9 = ((x153<=x154)>>(x155%x156));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x161 = INT64_MAX;
	int32_t t10 = -33935886;

	t10 = ((x161<=x162)>>(x163%x164));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x175 = INT16_MIN;
	int32_t t11 = 596;

	t11 = ((x173<=x174)>>(x175%x176));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x193 = -1;
	uint16_t x195 = UINT16_MAX;
	static volatile int32_t x196 = -1;
	volatile int32_t t12 = 124;

	t12 = ((x193<=x194)>>(x195%x196));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x213 = 197034038114593LLU;
	int8_t x215 = 3;
	int64_t x216 = -1LL;

	t13 = ((x213<=x214)>>(x215%x216));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x229 = 3;
	static int32_t x230 = INT32_MIN;
	int16_t x232 = -1;

	t14 = ((x229<=x230)>>(x231%x232));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x241 = 3U;
	int32_t x242 = INT32_MIN;
	static int32_t x243 = INT32_MIN;
	static int64_t x244 = -1LL;
	int32_t t15 = -42776;

	t15 = ((x241<=x242)>>(x243%x244));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x249 = INT64_MIN;
	volatile uint16_t x250 = UINT16_MAX;
	static int16_t x251 = 279;
	uint8_t x252 = UINT8_MAX;

	t16 = ((x249<=x250)>>(x251%x252));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x261 = 26632;
	static int32_t x263 = 791563;
	int32_t x264 = -7;
	volatile int32_t t17 = 979603358;

	t17 = ((x261<=x262)>>(x263%x264));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x266 = INT64_MIN;
	int64_t x267 = 271954887547LL;
	uint8_t x268 = 114U;
	volatile int32_t t18 = 43165;

	t18 = ((x265<=x266)>>(x267%x268));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x274 = 47U;
	int8_t x276 = 1;
	volatile int32_t t19 = -564014;

	t19 = ((x273<=x274)>>(x275%x276));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x282 = INT8_MIN;
	int16_t x283 = 1;
	int16_t x284 = 14;

	t20 = ((x281<=x282)>>(x283%x284));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x285 = 7;
	uint64_t x286 = 6813974818632LLU;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MIN;
	static volatile int32_t t21 = -76770;

	t21 = ((x285<=x286)>>(x287%x288));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	static uint32_t x300 = 31U;
	static int32_t t22 = 5789;

	t22 = ((x297<=x298)>>(x299%x300));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x302 = 39830724542LLU;
	int16_t x303 = INT16_MIN;
	static volatile int32_t x304 = -1;
	static int32_t t23 = 101806;

	t23 = ((x301<=x302)>>(x303%x304));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x313 = -1;
	static uint8_t x315 = 0U;
	volatile int64_t x316 = -147815LL;

	t24 = ((x313<=x314)>>(x315%x316));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x317 = -1;
	int32_t x318 = INT32_MIN;
	static volatile int16_t x320 = 54;
	volatile int32_t t25 = 514154;

	t25 = ((x317<=x318)>>(x319%x320));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x322 = INT16_MIN;
	volatile uint32_t x323 = UINT32_MAX;
	int16_t x324 = -1;
	int32_t t26 = -6042322;

	t26 = ((x321<=x322)>>(x323%x324));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x325 = INT16_MIN;
	volatile uint64_t x326 = 106914423794978LLU;
	uint8_t x327 = 0U;
	int8_t x328 = INT8_MAX;

	t27 = ((x325<=x326)>>(x327%x328));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x329 = -1LL;
	int32_t x331 = INT32_MIN;
	int32_t x332 = INT32_MIN;
	volatile int32_t t28 = 16735291;

	t28 = ((x329<=x330)>>(x331%x332));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x333 = 2678999U;
	int8_t x334 = -1;
	int32_t x335 = INT32_MIN;
	int32_t x336 = -1;
	int32_t t29 = 126;

	t29 = ((x333<=x334)>>(x335%x336));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x349 = 14835U;
	int16_t x351 = 255;
	volatile int32_t x352 = -115;
	volatile int32_t t30 = -49;

	t30 = ((x349<=x350)>>(x351%x352));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x353 = 303576475576023LLU;
	static int64_t x354 = -66381945LL;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t31 = -2103;

	t31 = ((x353<=x354)>>(x355%x356));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int64_t x359 = 7991440528387840LL;
	static volatile uint64_t x360 = 65LLU;
	int32_t t32 = -181;

	t32 = ((x357<=x358)>>(x359%x360));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x361 = 14737U;
	static int8_t x362 = 24;
	static int8_t x363 = -1;
	static int32_t x364 = -1;
	volatile int32_t t33 = 1;

	t33 = ((x361<=x362)>>(x363%x364));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MIN;
	volatile int32_t t34 = -15516602;

	t34 = ((x365<=x366)>>(x367%x368));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x389 = -1;
	int32_t x390 = -1;
	int32_t x392 = -1;
	volatile int32_t t35 = 26637;

	t35 = ((x389<=x390)>>(x391%x392));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x397 = 2212433U;
	int16_t x398 = INT16_MIN;
	int16_t x399 = 1;
	volatile int32_t t36 = -1;

	t36 = ((x397<=x398)>>(x399%x400));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x401 = -15119849124214LL;
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = INT16_MAX;
	int16_t x404 = INT16_MAX;

	t37 = ((x401<=x402)>>(x403%x404));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x410 = INT32_MAX;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t38 = -1396853;

	t38 = ((x409<=x410)>>(x411%x412));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x413 = -2071733LL;
	static int64_t x414 = -1207521205281LL;
	volatile int64_t x415 = INT64_MIN;
	int32_t x416 = -1;
	int32_t t39 = -11278512;

	t39 = ((x413<=x414)>>(x415%x416));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x421 = INT16_MAX;
	int16_t x423 = INT16_MIN;
	volatile int32_t t40 = -3796674;

	t40 = ((x421<=x422)>>(x423%x424));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x429 = 23456LL;
	volatile uint64_t x430 = UINT64_MAX;
	volatile int32_t x431 = INT32_MIN;
	static int16_t x432 = INT16_MIN;
	int32_t t41 = -3776018;

	t41 = ((x429<=x430)>>(x431%x432));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x433 = INT64_MIN;
	int32_t x434 = -1;
	static uint16_t x435 = 65U;
	static uint8_t x436 = 18U;
	volatile int32_t t42 = -567;

	t42 = ((x433<=x434)>>(x435%x436));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x437 = INT16_MIN;
	int64_t x438 = 73014705LL;
	volatile int32_t x439 = 437692376;
	int8_t x440 = -1;
	volatile int32_t t43 = 4449347;

	t43 = ((x437<=x438)>>(x439%x440));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x441 = 6;
	uint32_t x442 = UINT32_MAX;
	int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;
	volatile int32_t t44 = -3654067;

	t44 = ((x441<=x442)>>(x443%x444));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x457 = 12301U;
	static int32_t x458 = 317;
	uint16_t x459 = UINT16_MAX;
	int8_t x460 = -1;
	int32_t t45 = -1;

	t45 = ((x457<=x458)>>(x459%x460));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x469 = -3;
	uint16_t x470 = 23U;
	static uint64_t x471 = 21713158465LLU;
	uint64_t x472 = 12LLU;
	volatile int32_t t46 = 9850;

	t46 = ((x469<=x470)>>(x471%x472));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x482 = INT64_MAX;
	int32_t x484 = INT32_MAX;
	volatile int32_t t47 = 0;

	t47 = ((x481<=x482)>>(x483%x484));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x489 = INT32_MIN;
	uint32_t x490 = 11U;
	uint64_t x491 = 3667794LLU;
	volatile uint8_t x492 = 22U;
	volatile int32_t t48 = -101043356;

	t48 = ((x489<=x490)>>(x491%x492));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x493 = 7285574338373LL;
	int32_t x494 = INT32_MIN;
	uint16_t x495 = 11U;
	int64_t x496 = -2447083019355550379LL;
	volatile int32_t t49 = 40602;

	t49 = ((x493<=x494)>>(x495%x496));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x499 = INT64_MIN;
	volatile int16_t x500 = -1;

	t50 = ((x497<=x498)>>(x499%x500));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x501 = -1;
	int8_t x502 = INT8_MAX;
	int64_t x503 = INT64_MIN;
	static int16_t x504 = -1;
	volatile int32_t t51 = -150566139;

	t51 = ((x501<=x502)>>(x503%x504));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x506 = 4U;
	int64_t x507 = 1LL;
	static volatile int32_t x508 = INT32_MIN;

	t52 = ((x505<=x506)>>(x507%x508));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x513 = -3515269LL;
	volatile uint16_t x514 = 2U;
	static volatile uint8_t x515 = 1U;
	uint32_t x516 = 1411341763U;
	int32_t t53 = 1874061;

	t53 = ((x513<=x514)>>(x515%x516));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x518 = UINT32_MAX;
	static int32_t x519 = INT32_MIN;
	int16_t x520 = INT16_MIN;
	int32_t t54 = 24484;

	t54 = ((x517<=x518)>>(x519%x520));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x522 = -1;
	int64_t x524 = INT64_MAX;

	t55 = ((x521<=x522)>>(x523%x524));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x533 = 256U;
	static int32_t x534 = INT32_MAX;
	int64_t x535 = INT64_MIN;
	int16_t x536 = INT16_MIN;
	int32_t t56 = 2011747;

	t56 = ((x533<=x534)>>(x535%x536));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x537 = INT8_MIN;
	int8_t x538 = INT8_MIN;
	uint64_t x539 = 3LLU;
	static volatile int64_t x540 = -3990LL;
	int32_t t57 = -27109647;

	t57 = ((x537<=x538)>>(x539%x540));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x542 = INT64_MIN;
	int16_t x543 = 1;
	int16_t x544 = -1;
	volatile int32_t t58 = 279577;

	t58 = ((x541<=x542)>>(x543%x544));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x549 = 48;
	uint64_t x550 = UINT64_MAX;
	static int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;
	int32_t t59 = -1030865;

	t59 = ((x549<=x550)>>(x551%x552));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x565 = 16054U;
	int32_t x566 = INT32_MIN;
	static int16_t x567 = -57;
	volatile uint8_t x568 = 1U;
	int32_t t60 = 927221;

	t60 = ((x565<=x566)>>(x567%x568));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x569 = -1LL;
	volatile int8_t x570 = 10;
	uint32_t x571 = 3500U;
	uint8_t x572 = 57U;
	int32_t t61 = -10936;

	t61 = ((x569<=x570)>>(x571%x572));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x577 = 1;
	int32_t x578 = INT32_MIN;
	static volatile uint8_t x579 = 2U;
	volatile int8_t x580 = INT8_MAX;
	int32_t t62 = 1;

	t62 = ((x577<=x578)>>(x579%x580));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x605 = INT32_MIN;
	uint16_t x606 = UINT16_MAX;
	volatile uint8_t x607 = 58U;
	int8_t x608 = 2;
	int32_t t63 = -4008;

	t63 = ((x605<=x606)>>(x607%x608));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x614 = INT16_MIN;
	int32_t x615 = 1;
	uint32_t x616 = UINT32_MAX;

	t64 = ((x613<=x614)>>(x615%x616));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x617 = -51553329845LL;
	static int64_t x618 = 1085LL;
	static volatile int32_t x619 = INT32_MIN;
	uint32_t x620 = 2U;
	int32_t t65 = -4479970;

	t65 = ((x617<=x618)>>(x619%x620));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x622 = INT64_MIN;
	uint8_t x623 = 0U;

	t66 = ((x621<=x622)>>(x623%x624));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x633 = -1LL;
	int32_t x634 = INT32_MIN;
	int32_t t67 = 4;

	t67 = ((x633<=x634)>>(x635%x636));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x654 = 58031U;
	uint64_t x655 = 338736454392LLU;
	uint8_t x656 = 56U;
	static volatile int32_t t68 = -150;

	t68 = ((x653<=x654)>>(x655%x656));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x677 = INT64_MIN;
	uint16_t x678 = 107U;
	int8_t x679 = INT8_MAX;
	int8_t x680 = 26;
	int32_t t69 = 917298312;

	t69 = ((x677<=x678)>>(x679%x680));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x685 = 893U;
	static uint64_t x686 = 531055129683LLU;
	int64_t x687 = -27071LL;

	t70 = ((x685<=x686)>>(x687%x688));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x693 = 3813U;
	volatile int64_t x694 = -25896962088247LL;
	static volatile uint8_t x695 = 3U;
	static volatile int32_t t71 = 724789330;

	t71 = ((x693<=x694)>>(x695%x696));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x705 = -1;
	int32_t x706 = INT32_MIN;
	int8_t x707 = 0;
	uint16_t x708 = 28676U;
	volatile int32_t t72 = -395589438;

	t72 = ((x705<=x706)>>(x707%x708));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x749 = 27592447413522642LLU;
	uint64_t x750 = 9745LLU;
	int8_t x751 = 1;
	int16_t x752 = INT16_MIN;
	volatile int32_t t73 = 1440892;

	t73 = ((x749<=x750)>>(x751%x752));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x753 = INT8_MIN;
	int64_t x754 = -1LL;
	uint8_t x755 = 22U;
	static uint8_t x756 = UINT8_MAX;
	int32_t t74 = -5;

	t74 = ((x753<=x754)>>(x755%x756));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x761 = INT8_MIN;
	int16_t x762 = INT16_MIN;
	uint16_t x763 = 1U;
	int16_t x764 = INT16_MIN;
	static volatile int32_t t75 = 1994106;

	t75 = ((x761<=x762)>>(x763%x764));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x770 = INT16_MAX;
	static uint8_t x771 = 103U;
	volatile int32_t t76 = 53;

	t76 = ((x769<=x770)>>(x771%x772));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x790 = INT16_MAX;
	int16_t x791 = -2498;
	volatile uint32_t x792 = 2U;
	int32_t t77 = -15;

	t77 = ((x789<=x790)>>(x791%x792));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x793 = -17062228LL;
	volatile int64_t x794 = INT64_MIN;
	uint64_t x796 = 962LLU;
	volatile int32_t t78 = 276;

	t78 = ((x793<=x794)>>(x795%x796));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x801 = INT16_MAX;
	int64_t x802 = 1186830LL;
	uint32_t x803 = 26U;
	int32_t t79 = 1;

	t79 = ((x801<=x802)>>(x803%x804));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x813 = UINT64_MAX;
	uint16_t x814 = 1674U;
	uint16_t x815 = 8U;
	uint64_t x816 = 4071544466863LLU;
	volatile int32_t t80 = 7;

	t80 = ((x813<=x814)>>(x815%x816));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x841 = 1U;
	volatile int64_t x842 = -2200861018925LL;
	static int16_t x844 = INT16_MIN;
	int32_t t81 = 211368;

	t81 = ((x841<=x842)>>(x843%x844));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x849 = INT32_MAX;
	volatile uint32_t x851 = 3U;
	int8_t x852 = -1;
	volatile int32_t t82 = -41311;

	t82 = ((x849<=x850)>>(x851%x852));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x861 = INT64_MIN;
	static uint8_t x862 = 2U;
	static volatile int8_t x863 = 1;
	int64_t x864 = INT64_MIN;

	t83 = ((x861<=x862)>>(x863%x864));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x866 = 1711;
	int8_t x867 = 3;
	int64_t x868 = 509471LL;
	volatile int32_t t84 = 355;

	t84 = ((x865<=x866)>>(x867%x868));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x873 = UINT64_MAX;
	int64_t x875 = INT64_MIN;
	int8_t x876 = -1;
	int32_t t85 = 153;

	t85 = ((x873<=x874)>>(x875%x876));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x885 = INT8_MAX;
	static int8_t x886 = 1;
	int32_t x888 = INT32_MAX;
	volatile int32_t t86 = 2844;

	t86 = ((x885<=x886)>>(x887%x888));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x893 = INT8_MIN;
	int8_t x894 = INT8_MIN;
	volatile int16_t x896 = INT16_MAX;
	static volatile int32_t t87 = 15520837;

	t87 = ((x893<=x894)>>(x895%x896));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x905 = INT32_MIN;
	uint8_t x907 = 30U;
	uint8_t x908 = UINT8_MAX;
	int32_t t88 = -34;

	t88 = ((x905<=x906)>>(x907%x908));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x910 = 38;
	uint32_t x912 = 1U;
	int32_t t89 = 1;

	t89 = ((x909<=x910)>>(x911%x912));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x921 = INT32_MIN;
	volatile uint32_t x922 = 684U;
	uint8_t x923 = UINT8_MAX;
	int8_t x924 = INT8_MAX;
	int32_t t90 = -256542001;

	t90 = ((x921<=x922)>>(x923%x924));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x925 = INT8_MIN;

	t91 = ((x925<=x926)>>(x927%x928));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x945 = INT16_MIN;
	int64_t x946 = 504171508427198LL;
	int16_t x947 = 2;
	uint16_t x948 = 15858U;
	int32_t t92 = -3895893;

	t92 = ((x945<=x946)>>(x947%x948));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x958 = INT8_MIN;
	int32_t x959 = INT32_MIN;
	static int64_t x960 = -1LL;
	volatile int32_t t93 = -134182244;

	t93 = ((x957<=x958)>>(x959%x960));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x961 = -1LL;
	uint16_t x962 = 6863U;
	volatile int32_t x963 = -6226933;
	int32_t x964 = -1;

	t94 = ((x961<=x962)>>(x963%x964));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x969 = INT32_MIN;
	static int64_t x970 = 1361078452001837614LL;
	int16_t x971 = INT16_MIN;
	uint8_t x972 = 1U;
	volatile int32_t t95 = -377187;

	t95 = ((x969<=x970)>>(x971%x972));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x977 = -1;
	static int8_t x978 = 4;
	int64_t x979 = INT64_MIN;
	int32_t t96 = 807465735;

	t96 = ((x977<=x978)>>(x979%x980));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x1009 = 9U;
	static volatile uint32_t x1010 = 211983U;
	static uint8_t x1011 = 3U;
	volatile int16_t x1012 = INT16_MIN;
	volatile int32_t t97 = -3;

	t97 = ((x1009<=x1010)>>(x1011%x1012));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1013 = -1;
	int16_t x1014 = -1;
	int8_t x1015 = 1;
	uint16_t x1016 = UINT16_MAX;

	t98 = ((x1013<=x1014)>>(x1015%x1016));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1018 = INT64_MIN;
	uint32_t x1019 = 1U;
	volatile int32_t t99 = 15;

	t99 = ((x1017<=x1018)>>(x1019%x1020));

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

