#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x25 = INT32_MIN;
int32_t x29 = -14;
volatile int64_t x32 = -25422LL;
uint8_t x37 = 3U;
volatile int32_t t3 = -301730653;
int8_t x44 = -11;
static volatile int32_t t6 = 6451;
static int8_t x97 = -1;
int64_t x98 = -1LL;
int32_t t10 = 323;
uint64_t t11 = 949189341705585LLU;
uint64_t x109 = 1768525927527361LLU;
uint64_t x116 = 581842LLU;
int16_t x117 = -1;
uint8_t x119 = UINT8_MAX;
static uint16_t x172 = UINT16_MAX;
static volatile uint32_t x179 = 56037U;
static uint64_t x180 = 814932103607LLU;
volatile uint32_t x189 = 10061343U;
int32_t x192 = INT32_MAX;
static uint16_t x200 = UINT16_MAX;
int16_t x240 = -1;
uint16_t x243 = 10U;
int16_t x257 = 1;
int16_t x258 = -3668;
int8_t x260 = INT8_MAX;
static int32_t t25 = 127;
int8_t x299 = -33;
static int32_t t26 = -27624;
int64_t x310 = INT64_MIN;
static int16_t x312 = INT16_MAX;
volatile int32_t t27 = 125454352;
int32_t x323 = -197;
static int64_t x335 = -13483727409LL;
int32_t t29 = 808303;
int32_t x349 = INT32_MAX;
int16_t x350 = -1;
volatile int8_t x371 = INT8_MIN;
uint32_t x372 = 464206576U;
volatile uint64_t t32 = 1LLU;
uint8_t x374 = 74U;
int64_t t34 = -22LL;
static volatile int32_t t35 = -2;
uint16_t x385 = UINT16_MAX;
int16_t x394 = INT16_MAX;
volatile int64_t x399 = INT64_MIN;
static uint32_t x401 = 5U;
static int32_t t41 = -4097218;
volatile int8_t x430 = 0;
uint32_t x432 = 129567793U;
int32_t x451 = 25;
volatile uint32_t t48 = 467U;
int16_t x467 = 6564;
volatile int16_t x468 = INT16_MIN;
int64_t t52 = -112722666757626173LL;
uint8_t x494 = 11U;
volatile int32_t t55 = -360;
int32_t x508 = INT32_MIN;
volatile int32_t t57 = -20;
uint64_t x548 = UINT64_MAX;
int8_t x567 = INT8_MIN;
int32_t x570 = -1;
int32_t x619 = INT32_MIN;
int32_t t64 = 454437670;
int32_t x641 = INT32_MIN;
static volatile int64_t x642 = -26242810LL;
static int32_t x643 = INT32_MIN;
volatile uint8_t x644 = 28U;
int8_t x660 = INT8_MIN;
uint16_t x667 = 44U;
volatile uint32_t x679 = 3084341U;
int8_t x680 = -1;
uint32_t t70 = 13U;
int16_t x690 = INT16_MAX;
int32_t x692 = -786622;
uint32_t x693 = 23588029U;
volatile int32_t t75 = -1;
static int16_t x731 = -1;
volatile int32_t t76 = -5014;
int8_t x742 = INT8_MAX;
int16_t x743 = INT16_MAX;
volatile int32_t t77 = 1322;
volatile int64_t x755 = -1LL;
int32_t x758 = INT32_MIN;
volatile int16_t x759 = INT16_MAX;
int32_t x761 = -1;
static int32_t t85 = 156;
volatile int32_t x794 = 0;
int8_t x799 = 10;
static int32_t x813 = 1755078;
uint32_t x819 = UINT32_MAX;
int32_t t89 = -259176228;
volatile int32_t t91 = -107409;
volatile int32_t t92 = -4653833;
static volatile int16_t x873 = -1;
static uint64_t x875 = 65735345830003355LLU;
int32_t x876 = INT32_MIN;
static int32_t x885 = INT32_MIN;
static volatile uint64_t x888 = UINT64_MAX;
volatile uint64_t t97 = 22133664982386309LLU;
static int32_t x901 = INT32_MIN;
volatile int32_t t99 = -1779;


void f0(void) {
	int64_t x17 = -1LL;
	int16_t x18 = -240;
	int32_t x19 = -1;
	int8_t x20 = -10;
	int64_t t0 = -4446LL;

	t0 = (x17%((x18+x19)<x20));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x26 = -4;
	static int8_t x27 = 1;
	int16_t x28 = INT16_MAX;
	volatile int32_t t1 = 6;

	t1 = (x25%((x26+x27)<x28));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x30 = INT16_MIN;
	int16_t x31 = -5;
	static int32_t t2 = 405874870;

	t2 = (x29%((x30+x31)<x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x38 = INT16_MAX;
	int32_t x39 = -1;
	volatile int32_t x40 = 798599544;

	t3 = (x37%((x38+x39)<x40));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x41 = 1U;
	volatile int8_t x42 = INT8_MIN;
	uint16_t x43 = 3U;
	volatile int32_t t4 = 98613772;

	t4 = (x41%((x42+x43)<x44));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x69 = UINT16_MAX;
	int8_t x70 = -8;
	uint32_t x71 = 191U;
	static int8_t x72 = -1;
	volatile int32_t t5 = -3722607;

	t5 = (x69%((x70+x71)<x72));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x77 = -1;
	static int32_t x78 = -1;
	volatile int8_t x79 = 1;
	int8_t x80 = INT8_MAX;

	t6 = (x77%((x78+x79)<x80));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int16_t x82 = 1;
	int16_t x83 = 1;
	int32_t x84 = 4212574;
	volatile uint32_t t7 = 102075122U;

	t7 = (x81%((x82+x83)<x84));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x89 = 2934U;
	static uint16_t x90 = 11U;
	int16_t x91 = INT16_MIN;
	static int64_t x92 = -1LL;
	static volatile int32_t t8 = -10;

	t8 = (x89%((x90+x91)<x92));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x93 = 4160769U;
	uint64_t x94 = UINT64_MAX;
	volatile uint16_t x95 = UINT16_MAX;
	int64_t x96 = 3930393051430352LL;
	volatile uint32_t t9 = 19188U;

	t9 = (x93%((x94+x95)<x96));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x99 = INT16_MIN;
	static int32_t x100 = -1;

	t10 = (x97%((x98+x99)<x100));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x105 = 386614649507LLU;
	volatile uint64_t x106 = 289179606750640LLU;
	uint8_t x107 = 87U;
	static int64_t x108 = INT64_MAX;

	t11 = (x105%((x106+x107)<x108));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x110 = -4614518LL;
	int8_t x111 = INT8_MAX;
	uint32_t x112 = 219485807U;
	static volatile uint64_t t12 = 15217911124609LLU;

	t12 = (x109%((x110+x111)<x112));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x113 = UINT64_MAX;
	uint8_t x114 = UINT8_MAX;
	volatile uint32_t x115 = 68088U;
	static uint64_t t13 = 308168726085148LLU;

	t13 = (x113%((x114+x115)<x116));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x118 = -21990847;
	uint16_t x120 = 32256U;
	volatile int32_t t14 = 62576;

	t14 = (x117%((x118+x119)<x120));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x169 = 19U;
	static int64_t x170 = INT64_MIN;
	volatile int32_t x171 = 3723530;
	static volatile int32_t t15 = -32891655;

	t15 = (x169%((x170+x171)<x172));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x177 = INT16_MIN;
	volatile uint8_t x178 = UINT8_MAX;
	static volatile int32_t t16 = 1406491;

	t16 = (x177%((x178+x179)<x180));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x190 = UINT8_MAX;
	static int16_t x191 = INT16_MAX;
	static volatile uint32_t t17 = 0U;

	t17 = (x189%((x190+x191)<x192));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x197 = 108423776534014899LLU;
	uint8_t x198 = 4U;
	int32_t x199 = -1045248743;
	volatile uint64_t t18 = 121103LLU;

	t18 = (x197%((x198+x199)<x200));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x229 = 109375647LL;
	uint32_t x230 = 883U;
	volatile int16_t x231 = -1;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t19 = -125134570934294LL;

	t19 = (x229%((x230+x231)<x232));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x237 = 22332U;
	volatile uint64_t x238 = UINT64_MAX;
	int8_t x239 = -1;
	uint32_t t20 = 30326300U;

	t20 = (x237%((x238+x239)<x240));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x241 = INT64_MAX;
	int64_t x242 = INT64_MIN;
	volatile int16_t x244 = -1;
	int64_t t21 = 1LL;

	t21 = (x241%((x242+x243)<x244));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x249 = 4LLU;
	int16_t x250 = INT16_MIN;
	int32_t x251 = -1;
	int16_t x252 = 0;
	volatile uint64_t t22 = 45LLU;

	t22 = (x249%((x250+x251)<x252));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x259 = 717;
	int32_t t23 = 189;

	t23 = (x257%((x258+x259)<x260));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x261 = -5170LL;
	int8_t x262 = INT8_MIN;
	volatile int8_t x263 = -18;
	int8_t x264 = INT8_MIN;
	volatile int64_t t24 = 46099715383LL;

	t24 = (x261%((x262+x263)<x264));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x281 = UINT16_MAX;
	uint32_t x282 = 63738U;
	uint32_t x283 = 305U;
	uint64_t x284 = 51870348870873LLU;

	t25 = (x281%((x282+x283)<x284));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x297 = -16;
	int64_t x298 = INT64_MAX;
	static uint64_t x300 = UINT64_MAX;

	t26 = (x297%((x298+x299)<x300));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x309 = INT8_MIN;
	volatile uint8_t x311 = 15U;

	t27 = (x309%((x310+x311)<x312));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x321 = -1;
	int8_t x322 = -1;
	int32_t x324 = -1;
	volatile int32_t t28 = -161750781;

	t28 = (x321%((x322+x323)<x324));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	int32_t x336 = -1;

	t29 = (x333%((x334+x335)<x336));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x345 = -2714;
	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = UINT16_MAX;
	static volatile int32_t t30 = 546;

	t30 = (x345%((x346+x347)<x348));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x351 = 255U;
	static uint64_t x352 = UINT64_MAX;
	volatile int32_t t31 = -3;

	t31 = (x349%((x350+x351)<x352));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x369 = 4992878290172709LLU;
	int64_t x370 = -1792617292774702619LL;

	t32 = (x369%((x370+x371)<x372));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x373 = INT64_MIN;
	static volatile int16_t x375 = -4225;
	static int16_t x376 = INT16_MAX;
	int64_t t33 = -1917LL;

	t33 = (x373%((x374+x375)<x376));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x377 = INT64_MAX;
	static uint32_t x378 = 1405155U;
	volatile uint64_t x379 = 205LLU;
	int32_t x380 = 2190370;

	t34 = (x377%((x378+x379)<x380));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x381 = INT8_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	uint64_t x383 = 90LLU;
	uint64_t x384 = UINT64_MAX;

	t35 = (x381%((x382+x383)<x384));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x386 = 2U;
	int32_t x387 = INT32_MIN;
	uint8_t x388 = 2U;
	int32_t t36 = -13;

	t36 = (x385%((x386+x387)<x388));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = -3246;
	volatile int64_t x391 = -14356044306641LL;
	int16_t x392 = INT16_MIN;
	volatile int32_t t37 = -1030193;

	t37 = (x389%((x390+x391)<x392));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x393 = -5252;
	int32_t x395 = INT32_MIN;
	int8_t x396 = -1;
	volatile int32_t t38 = 0;

	t38 = (x393%((x394+x395)<x396));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x397 = INT8_MIN;
	volatile int16_t x398 = 2;
	int16_t x400 = INT16_MIN;
	int32_t t39 = -10164874;

	t39 = (x397%((x398+x399)<x400));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x402 = UINT32_MAX;
	int16_t x403 = 10;
	uint32_t x404 = 7627481U;
	uint32_t t40 = 49U;

	t40 = (x401%((x402+x403)<x404));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = INT64_MIN;
	static uint16_t x411 = 3446U;
	static volatile int8_t x412 = INT8_MIN;

	t41 = (x409%((x410+x411)<x412));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x417 = 1U;
	volatile uint64_t x418 = UINT64_MAX;
	volatile uint32_t x419 = UINT32_MAX;
	static int16_t x420 = INT16_MIN;
	int32_t t42 = -63138068;

	t42 = (x417%((x418+x419)<x420));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x421 = INT8_MIN;
	static int64_t x422 = 16LL;
	static int32_t x423 = INT32_MIN;
	int8_t x424 = 1;
	volatile int32_t t43 = 172271;

	t43 = (x421%((x422+x423)<x424));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x429 = 921U;
	int64_t x431 = -418LL;
	volatile uint32_t t44 = 12U;

	t44 = (x429%((x430+x431)<x432));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x437 = 8164U;
	int32_t x438 = -1;
	int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	uint32_t t45 = 223376161U;

	t45 = (x437%((x438+x439)<x440));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x441 = 1576088923U;
	volatile uint64_t x442 = UINT64_MAX;
	volatile uint32_t x443 = 1682092U;
	int8_t x444 = INT8_MIN;
	volatile uint32_t t46 = 351690U;

	t46 = (x441%((x442+x443)<x444));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x445 = -15;
	int8_t x446 = INT8_MAX;
	uint16_t x447 = UINT16_MAX;
	int32_t x448 = INT32_MAX;
	int32_t t47 = -2009;

	t47 = (x445%((x446+x447)<x448));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x449 = UINT32_MAX;
	uint8_t x450 = UINT8_MAX;
	uint32_t x452 = 138172807U;

	t48 = (x449%((x450+x451)<x452));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x461 = INT8_MAX;
	int16_t x462 = INT16_MAX;
	int8_t x463 = INT8_MAX;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t49 = -109;

	t49 = (x461%((x462+x463)<x464));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x465 = -1;
	volatile int64_t x466 = INT64_MIN;
	volatile int32_t t50 = 48;

	t50 = (x465%((x466+x467)<x468));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x469 = -40;
	volatile int32_t x470 = -690592;
	static volatile uint16_t x471 = 6U;
	volatile int8_t x472 = INT8_MIN;
	volatile int32_t t51 = 544078;

	t51 = (x469%((x470+x471)<x472));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x481 = INT64_MAX;
	int8_t x482 = INT8_MIN;
	int16_t x483 = -1;
	volatile int64_t x484 = 5529543490663421LL;

	t52 = (x481%((x482+x483)<x484));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x485 = INT64_MIN;
	static volatile int8_t x486 = INT8_MIN;
	volatile int8_t x487 = -1;
	uint8_t x488 = UINT8_MAX;
	volatile int64_t t53 = 459916606121LL;

	t53 = (x485%((x486+x487)<x488));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x489 = UINT64_MAX;
	static uint8_t x490 = 0U;
	uint64_t x491 = 10289LLU;
	volatile int8_t x492 = -1;
	volatile uint64_t t54 = 64960497326LLU;

	t54 = (x489%((x490+x491)<x492));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x493 = 1;
	int64_t x495 = -1LL;
	static volatile int16_t x496 = INT16_MAX;

	t55 = (x493%((x494+x495)<x496));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x505 = INT8_MIN;
	uint64_t x506 = UINT64_MAX;
	static volatile int64_t x507 = INT64_MIN;
	int32_t t56 = -175057;

	t56 = (x505%((x506+x507)<x508));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x509 = 75;
	volatile uint64_t x510 = 29056766941LLU;
	int8_t x511 = -1;
	static uint64_t x512 = UINT64_MAX;

	t57 = (x509%((x510+x511)<x512));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x545 = 28U;
	uint64_t x546 = 99434689723055LLU;
	int8_t x547 = 49;
	int32_t t58 = 13139;

	t58 = (x545%((x546+x547)<x548));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x561 = INT16_MAX;
	int16_t x562 = INT16_MAX;
	int32_t x563 = -359029;
	volatile int16_t x564 = 63;
	int32_t t59 = 59;

	t59 = (x561%((x562+x563)<x564));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x565 = INT16_MIN;
	int8_t x566 = INT8_MIN;
	volatile uint16_t x568 = 1U;
	volatile int32_t t60 = -333194;

	t60 = (x565%((x566+x567)<x568));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x569 = -471;
	int32_t x571 = -3;
	int64_t x572 = -1LL;
	volatile int32_t t61 = -95598;

	t61 = (x569%((x570+x571)<x572));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x573 = -68;
	volatile uint64_t x574 = UINT64_MAX;
	volatile int32_t x575 = INT32_MIN;
	uint64_t x576 = UINT64_MAX;
	int32_t t62 = 24;

	t62 = (x573%((x574+x575)<x576));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x609 = INT8_MAX;
	int8_t x610 = -1;
	volatile int8_t x611 = INT8_MIN;
	int8_t x612 = -12;
	int32_t t63 = 9562;

	t63 = (x609%((x610+x611)<x612));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x617 = INT32_MIN;
	uint8_t x618 = 2U;
	int8_t x620 = INT8_MIN;

	t64 = (x617%((x618+x619)<x620));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x637 = INT16_MAX;
	uint32_t x638 = 11650U;
	volatile uint64_t x639 = UINT64_MAX;
	static int16_t x640 = INT16_MAX;
	int32_t t65 = 3783720;

	t65 = (x637%((x638+x639)<x640));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t t66 = -3;

	t66 = (x641%((x642+x643)<x644));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x657 = 0U;
	volatile int8_t x658 = INT8_MIN;
	volatile uint64_t x659 = UINT64_MAX;
	int32_t t67 = -3357;

	t67 = (x657%((x658+x659)<x660));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x665 = 139955591008158LLU;
	uint32_t x666 = 14U;
	int64_t x668 = INT64_MAX;
	uint64_t t68 = 0LLU;

	t68 = (x665%((x666+x667)<x668));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x669 = -2062670;
	int64_t x670 = -1LL;
	static int32_t x671 = INT32_MIN;
	int32_t x672 = INT32_MIN;
	int32_t t69 = 162134771;

	t69 = (x669%((x670+x671)<x672));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x677 = UINT32_MAX;
	uint32_t x678 = 177355U;

	t70 = (x677%((x678+x679)<x680));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x685 = -1LL;
	static int64_t x686 = INT64_MIN;
	static volatile uint8_t x687 = 5U;
	int64_t x688 = -3002309663LL;
	volatile int64_t t71 = -179140687LL;

	t71 = (x685%((x686+x687)<x688));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x689 = INT16_MAX;
	uint64_t x691 = UINT64_MAX;
	volatile int32_t t72 = -20281456;

	t72 = (x689%((x690+x691)<x692));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x694 = INT32_MAX;
	volatile int32_t x695 = INT32_MIN;
	int64_t x696 = 738810087LL;
	volatile uint32_t t73 = 16U;

	t73 = (x693%((x694+x695)<x696));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x701 = INT64_MAX;
	uint8_t x702 = UINT8_MAX;
	static int16_t x703 = INT16_MIN;
	uint8_t x704 = 72U;
	volatile int64_t t74 = 371380284611812LL;

	t74 = (x701%((x702+x703)<x704));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x713 = 25781;
	static uint16_t x714 = 7U;
	int32_t x715 = -249246;
	int8_t x716 = INT8_MIN;

	t75 = (x713%((x714+x715)<x716));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x729 = 2U;
	int8_t x730 = 8;
	volatile int64_t x732 = INT64_MAX;

	t76 = (x729%((x730+x731)<x732));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x741 = INT8_MAX;
	int32_t x744 = INT32_MAX;

	t77 = (x741%((x742+x743)<x744));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x749 = 1U;
	int16_t x750 = -1;
	int64_t x751 = -1LL;
	uint16_t x752 = 0U;
	static volatile uint32_t t78 = 0U;

	t78 = (x749%((x750+x751)<x752));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x753 = INT16_MIN;
	int32_t x754 = -14411614;
	int8_t x756 = 0;
	int32_t t79 = -94;

	t79 = (x753%((x754+x755)<x756));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x757 = -1;
	static uint8_t x760 = 85U;
	static volatile int32_t t80 = -10747099;

	t80 = (x757%((x758+x759)<x760));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x762 = 192022511623512LLU;
	static volatile int64_t x763 = INT64_MIN;
	int64_t x764 = -1LL;
	static volatile int32_t t81 = 0;

	t81 = (x761%((x762+x763)<x764));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x765 = INT8_MIN;
	uint8_t x766 = 23U;
	int16_t x767 = -5830;
	static uint16_t x768 = 4U;
	int32_t t82 = 2455762;

	t82 = (x765%((x766+x767)<x768));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x773 = 414176636U;
	int64_t x774 = INT64_MIN;
	volatile uint8_t x775 = 2U;
	int16_t x776 = INT16_MAX;
	uint32_t t83 = 0U;

	t83 = (x773%((x774+x775)<x776));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x785 = INT32_MIN;
	volatile int64_t x786 = 149006905827726757LL;
	volatile uint64_t x787 = UINT64_MAX;
	int16_t x788 = -32;
	int32_t t84 = 50647803;

	t84 = (x785%((x786+x787)<x788));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x789 = 37;
	int64_t x790 = INT64_MIN;
	uint16_t x791 = 0U;
	volatile int64_t x792 = INT64_MAX;

	t85 = (x789%((x790+x791)<x792));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x793 = INT16_MIN;
	int8_t x795 = 29;
	int32_t x796 = 151358601;
	int32_t t86 = -244;

	t86 = (x793%((x794+x795)<x796));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x797 = INT64_MAX;
	int64_t x798 = -20LL;
	int8_t x800 = -1;
	int64_t t87 = -1078436LL;

	t87 = (x797%((x798+x799)<x800));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x814 = 32U;
	volatile int64_t x815 = INT64_MIN;
	uint16_t x816 = UINT16_MAX;
	static int32_t t88 = 2;

	t88 = (x813%((x814+x815)<x816));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x817 = -4;
	int16_t x818 = INT16_MIN;
	int16_t x820 = INT16_MIN;

	t89 = (x817%((x818+x819)<x820));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x833 = 723U;
	int32_t x834 = 1;
	uint64_t x835 = 15591473LLU;
	int32_t x836 = -90919;
	int32_t t90 = 6;

	t90 = (x833%((x834+x835)<x836));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x857 = INT32_MIN;
	uint32_t x858 = UINT32_MAX;
	int32_t x859 = 27443074;
	volatile int16_t x860 = -1;

	t91 = (x857%((x858+x859)<x860));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x861 = 203744635;
	static int8_t x862 = -1;
	volatile int64_t x863 = -140052699991897LL;
	static int8_t x864 = 1;

	t92 = (x861%((x862+x863)<x864));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x865 = INT32_MAX;
	int32_t x866 = -1;
	static volatile int8_t x867 = -7;
	uint8_t x868 = UINT8_MAX;
	int32_t t93 = 29938990;

	t93 = (x865%((x866+x867)<x868));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x869 = 1181U;
	int32_t x870 = -136563;
	volatile int16_t x871 = -1;
	int16_t x872 = INT16_MIN;
	volatile uint32_t t94 = 59620U;

	t94 = (x869%((x870+x871)<x872));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x874 = -5475;
	static volatile int32_t t95 = 53725;

	t95 = (x873%((x874+x875)<x876));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x886 = 63U;
	uint16_t x887 = 387U;
	volatile int32_t t96 = 122452971;

	t96 = (x885%((x886+x887)<x888));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x897 = 1781961LLU;
	int64_t x898 = -1LL;
	int8_t x899 = -1;
	volatile int64_t x900 = INT64_MAX;

	t97 = (x897%((x898+x899)<x900));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x902 = 5U;
	int16_t x903 = INT16_MIN;
	volatile int8_t x904 = INT8_MAX;
	volatile int32_t t98 = 1;

	t98 = (x901%((x902+x903)<x904));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x933 = 1U;
	uint64_t x934 = UINT64_MAX;
	static int16_t x935 = INT16_MIN;
	int8_t x936 = -1;

	t99 = (x933%((x934+x935)<x936));

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

