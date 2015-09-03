#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
static int16_t x19 = INT16_MIN;
int64_t x33 = 433560653296047407LL;
int16_t x34 = INT16_MIN;
volatile int32_t t3 = -2;
static volatile uint16_t x65 = UINT16_MAX;
static int32_t x66 = -1;
int16_t x67 = INT16_MIN;
int32_t x75 = INT32_MAX;
static uint32_t t6 = 1U;
uint64_t x85 = 252LLU;
static volatile int64_t x86 = -1LL;
volatile int64_t x87 = INT64_MAX;
volatile uint16_t x121 = 1U;
volatile int32_t t9 = -1078;
uint16_t x139 = 732U;
volatile int32_t t10 = 1152622;
uint64_t x238 = 11LLU;
int32_t x240 = -6656879;
int64_t x242 = -1LL;
volatile uint64_t t18 = UINT64_MAX;
volatile int32_t x256 = INT32_MIN;
volatile int32_t t22 = -20811;
static volatile int16_t x335 = -1;
int16_t x398 = -4;
volatile int32_t x432 = INT32_MAX;
volatile int32_t t33 = 1685794;
volatile int32_t t34 = 62835;
static int64_t x458 = -103164255LL;
static uint8_t x494 = 3U;
int64_t t36 = INT64_MAX;
int64_t x498 = -1LL;
uint32_t x500 = UINT32_MAX;
volatile int64_t t37 = INT64_MAX;
static int64_t x522 = -952826667991549LL;
uint64_t x524 = UINT64_MAX;
static uint16_t x525 = UINT16_MAX;
volatile uint16_t x537 = 4U;
uint16_t x538 = UINT16_MAX;
static int8_t x539 = INT8_MIN;
static uint32_t x550 = 3314U;
uint64_t x554 = UINT64_MAX;
int16_t x555 = INT16_MIN;
static int64_t x580 = -456781971307692355LL;
volatile int32_t t43 = 1;
static volatile int32_t t47 = -48100;
int32_t t48 = -1579199;
volatile uint32_t t50 = 0U;
int8_t x674 = -1;
uint8_t x675 = 4U;
static uint32_t x713 = 303845950U;
volatile int16_t x716 = INT16_MAX;
int64_t x736 = -1LL;
int16_t x740 = INT16_MAX;
int32_t t56 = -7;
volatile uint64_t x758 = 96807195960991LLU;
volatile int16_t x760 = INT16_MIN;
static uint16_t x764 = 2U;
uint32_t x781 = 22284U;
uint64_t x782 = 12141859491780892LLU;
int64_t x784 = INT64_MIN;
static int32_t x785 = 2887;
volatile int8_t x788 = INT8_MIN;
uint16_t x803 = 129U;
static uint64_t x805 = 51083748202238249LLU;
static int8_t x824 = INT8_MIN;
uint32_t x857 = UINT32_MAX;
uint32_t x858 = 0U;
int64_t x897 = 2211LL;
static volatile int64_t t70 = -1LL;
int64_t x947 = -1LL;
volatile int64_t t75 = INT64_MAX;
int64_t x982 = -545213LL;
uint64_t t76 = 21723LLU;
uint8_t x1029 = 4U;
uint32_t x1042 = 71786111U;
uint8_t x1053 = 0U;
int32_t t82 = 7062696;
uint64_t x1061 = 891868615135597372LLU;
volatile uint64_t t83 = 26826536278567536LLU;
int16_t x1067 = INT16_MAX;
static int32_t x1120 = 455065702;
volatile int64_t x1136 = INT64_MIN;
int16_t x1162 = -1;
int8_t x1190 = -1;
int32_t t93 = 5345864;
int64_t x1204 = INT64_MAX;
int8_t x1256 = -1;
volatile int8_t x1303 = INT8_MIN;
static int8_t x1304 = INT8_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int32_t x3 = INT32_MAX;
	volatile int8_t x4 = 3;
	volatile int32_t t0 = -778275;

	t0 = (x1<<((x2|x3)/x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = 28002462LL;
	int32_t x20 = INT32_MIN;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x17<<((x18|x19)/x20));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x35 = 0;
	volatile int64_t x36 = -18244501088662LL;
	volatile int64_t t2 = -15LL;

	t2 = (x33<<((x34|x35)/x36));

	if (t2 != 433560653296047407LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x49 = 1U;
	uint16_t x50 = UINT16_MAX;
	static uint8_t x51 = 6U;
	static int64_t x52 = INT64_MIN;

	t3 = (x49<<((x50|x51)/x52));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x61 = 1740;
	static int8_t x62 = -1;
	int64_t x63 = 22LL;
	uint16_t x64 = 4417U;
	int32_t t4 = 1;

	t4 = (x61<<((x62|x63)/x64));

	if (t4 != 1740) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x68 = -1;
	volatile int32_t t5 = 28146;

	t5 = (x65<<((x66|x67)/x68));

	if (t5 != 131070) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x73 = 22952783U;
	int16_t x74 = INT16_MIN;
	int8_t x76 = -12;

	t6 = (x73<<((x74|x75)/x76));

	if (t6 != 22952783U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x88 = 100U;
	uint64_t t7 = 11LLU;

	t7 = (x85<<((x86|x87)/x88));

	if (t7 != 252LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x113 = 0;
	static int32_t x114 = -1;
	int64_t x115 = INT64_MIN;
	static volatile int64_t x116 = -1LL;
	int32_t t8 = -13837;

	t8 = (x113<<((x114|x115)/x116));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x122 = INT32_MAX;
	int32_t x123 = -9;
	volatile int8_t x124 = -4;

	t9 = (x121<<((x122|x123)/x124));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x137 = 3U;
	int8_t x138 = INT8_MIN;
	static int32_t x140 = INT32_MIN;

	t10 = (x137<<((x138|x139)/x140));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x169 = 32067817LLU;
	uint16_t x170 = 3U;
	int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MAX;
	volatile uint64_t t11 = 854LLU;

	t11 = (x169<<((x170|x171)/x172));

	if (t11 != 32067817LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x193 = UINT32_MAX;
	volatile int16_t x194 = 123;
	int32_t x195 = INT32_MIN;
	volatile int64_t x196 = INT64_MAX;
	static uint32_t t12 = UINT32_MAX;

	t12 = (x193<<((x194|x195)/x196));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x209 = 30U;
	int64_t x210 = -1LL;
	volatile int8_t x211 = -14;
	static uint32_t x212 = 9211366U;
	int32_t t13 = 6007820;

	t13 = (x209<<((x210|x211)/x212));

	if (t13 != 30) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x221 = 7696948U;
	static int64_t x222 = -1LL;
	static uint64_t x223 = UINT64_MAX;
	volatile int64_t x224 = -1503328678454484989LL;
	uint32_t t14 = 50U;

	t14 = (x221<<((x222|x223)/x224));

	if (t14 != 15393896U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x225 = 1LL;
	int32_t x226 = -40;
	volatile int64_t x227 = 1075630253057154LL;
	uint16_t x228 = 45U;
	int64_t t15 = -13682516482635LL;

	t15 = (x225<<((x226|x227)/x228));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x229 = INT32_MAX;
	volatile int8_t x230 = -8;
	static int64_t x231 = -408LL;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x229<<((x230|x231)/x232));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x237 = 12U;
	uint8_t x239 = 3U;
	int32_t t17 = 0;

	t17 = (x237<<((x238|x239)/x240));

	if (t17 != 12) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x241 = UINT64_MAX;
	uint32_t x243 = 28871U;
	uint16_t x244 = 9973U;

	t18 = (x241<<((x242|x243)/x244));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x253 = 2LLU;
	int8_t x254 = 0;
	static uint8_t x255 = 60U;
	uint64_t t19 = 156LLU;

	t19 = (x253<<((x254|x255)/x256));

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x277 = INT8_MAX;
	volatile uint8_t x278 = 59U;
	static int8_t x279 = INT8_MIN;
	int8_t x280 = -9;
	int32_t t20 = 189835284;

	t20 = (x277<<((x278|x279)/x280));

	if (t20 != 16256) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x293 = UINT16_MAX;
	uint64_t x294 = 12476LLU;
	static volatile uint16_t x295 = 115U;
	int16_t x296 = INT16_MAX;
	volatile int32_t t21 = -21319316;

	t21 = (x293<<((x294|x295)/x296));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x305 = 401U;
	uint8_t x306 = 10U;
	volatile uint64_t x307 = 391605928LLU;
	int64_t x308 = 2967529674225LL;

	t22 = (x305<<((x306|x307)/x308));

	if (t22 != 401) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MAX;
	int8_t x319 = -13;
	static int16_t x320 = -211;
	uint32_t t23 = UINT32_MAX;

	t23 = (x317<<((x318|x319)/x320));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x333 = 1993U;
	uint16_t x334 = UINT16_MAX;
	int32_t x336 = -1;
	volatile int32_t t24 = -3;

	t24 = (x333<<((x334|x335)/x336));

	if (t24 != 3986) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x337 = 31999U;
	static int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	static int64_t x340 = -470361LL;
	int32_t t25 = -827842961;

	t25 = (x337<<((x338|x339)/x340));

	if (t25 != 31999) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x349 = 9U;
	int16_t x350 = -1;
	static int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	int32_t t26 = 1341;

	t26 = (x349<<((x350|x351)/x352));

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x353 = UINT32_MAX;
	static int16_t x354 = INT16_MIN;
	int64_t x355 = 3833362715LL;
	volatile int32_t x356 = INT32_MIN;
	uint32_t t27 = UINT32_MAX;

	t27 = (x353<<((x354|x355)/x356));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x385 = 27U;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MAX;
	int32_t x388 = 485126454;
	volatile int32_t t28 = 267347;

	t28 = (x385<<((x386|x387)/x388));

	if (t28 != 27) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x397 = 21U;
	uint32_t x399 = 0U;
	int64_t x400 = INT64_MIN;
	int32_t t29 = -5850893;

	t29 = (x397<<((x398|x399)/x400));

	if (t29 != 21) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x405 = UINT8_MAX;
	int64_t x406 = -1LL;
	static int16_t x407 = INT16_MIN;
	volatile int32_t x408 = 24189154;
	volatile int32_t t30 = -87554;

	t30 = (x405<<((x406|x407)/x408));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x413 = INT16_MAX;
	volatile int32_t x414 = INT32_MIN;
	static volatile int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;
	volatile int32_t t31 = 118318997;

	t31 = (x413<<((x414|x415)/x416));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x425 = 10;
	static int32_t x426 = -6412069;
	int16_t x427 = INT16_MIN;
	int32_t x428 = INT32_MIN;
	int32_t t32 = -5984383;

	t32 = (x425<<((x426|x427)/x428));

	if (t32 != 10) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x429 = 43;
	uint8_t x430 = 0U;
	int8_t x431 = -1;

	t33 = (x429<<((x430|x431)/x432));

	if (t33 != 43) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x453 = 0;
	volatile int64_t x454 = -8LL;
	int64_t x455 = -1LL;
	int8_t x456 = -1;

	t34 = (x453<<((x454|x455)/x456));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x457 = INT16_MAX;
	int64_t x459 = -1LL;
	static uint8_t x460 = UINT8_MAX;
	volatile int32_t t35 = 63;

	t35 = (x457<<((x458|x459)/x460));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x493 = INT64_MAX;
	int16_t x495 = 2;
	uint32_t x496 = UINT32_MAX;

	t36 = (x493<<((x494|x495)/x496));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x497 = INT64_MAX;
	int16_t x499 = INT16_MIN;

	t37 = (x497<<((x498|x499)/x500));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x521 = UINT8_MAX;
	volatile int32_t x523 = INT32_MIN;
	int32_t t38 = 44193309;

	t38 = (x521<<((x522|x523)/x524));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x526 = INT8_MIN;
	int32_t x527 = INT32_MAX;
	int64_t x528 = INT64_MIN;
	int32_t t39 = -25283937;

	t39 = (x525<<((x526|x527)/x528));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x540 = INT8_MIN;
	static volatile int32_t t40 = -83384;

	t40 = (x537<<((x538|x539)/x540));

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x549 = INT16_MAX;
	int8_t x551 = INT8_MIN;
	int16_t x552 = INT16_MIN;
	int32_t t41 = 203739608;

	t41 = (x549<<((x550|x551)/x552));

	if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x553 = UINT64_MAX;
	int32_t x556 = INT32_MIN;
	static uint64_t t42 = 987233305374586365LLU;

	t42 = (x553<<((x554|x555)/x556));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x577 = 2U;
	int16_t x578 = -6;
	volatile int64_t x579 = 7LL;

	t43 = (x577<<((x578|x579)/x580));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x581 = UINT32_MAX;
	volatile uint64_t x582 = 557122946566LLU;
	int32_t x583 = 16196800;
	int64_t x584 = -3515738LL;
	uint32_t t44 = UINT32_MAX;

	t44 = (x581<<((x582|x583)/x584));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x589 = INT16_MAX;
	int16_t x590 = INT16_MAX;
	int16_t x591 = 12;
	static int16_t x592 = INT16_MIN;
	volatile int32_t t45 = 3630;

	t45 = (x589<<((x590|x591)/x592));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x613 = 1LLU;
	uint64_t x614 = 100532177281952734LLU;
	volatile int64_t x615 = 0LL;
	int16_t x616 = -1;
	volatile uint64_t t46 = 863850404798246LLU;

	t46 = (x613<<((x614|x615)/x616));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x621 = UINT16_MAX;
	int16_t x622 = -35;
	static uint16_t x623 = 46U;
	int64_t x624 = INT64_MIN;

	t47 = (x621<<((x622|x623)/x624));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x633 = INT16_MAX;
	volatile int64_t x634 = -1LL;
	int64_t x635 = -3LL;
	static int32_t x636 = INT32_MIN;

	t48 = (x633<<((x634|x635)/x636));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x657 = INT8_MAX;
	static uint8_t x658 = 110U;
	int8_t x659 = INT8_MIN;
	uint16_t x660 = 21187U;
	int32_t t49 = 125473681;

	t49 = (x657<<((x658|x659)/x660));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x669 = 7U;
	int16_t x670 = -6;
	static int8_t x671 = INT8_MIN;
	static uint32_t x672 = UINT32_MAX;

	t50 = (x669<<((x670|x671)/x672));

	if (t50 != 7U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x673 = 124U;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t51 = 384625280;

	t51 = (x673<<((x674|x675)/x676));

	if (t51 != 124) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x693 = 7U;
	static int32_t x694 = -251515417;
	uint8_t x695 = 7U;
	int32_t x696 = INT32_MIN;
	uint32_t t52 = 1182U;

	t52 = (x693<<((x694|x695)/x696));

	if (t52 != 7U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x714 = -1;
	int32_t x715 = -1;
	static uint32_t t53 = 380695U;

	t53 = (x713<<((x714|x715)/x716));

	if (t53 != 303845950U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x733 = 1254450687U;
	uint64_t x734 = 1665006890438LLU;
	int16_t x735 = 1;
	volatile uint32_t t54 = 176U;

	t54 = (x733<<((x734|x735)/x736));

	if (t54 != 1254450687U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x737 = 124;
	int64_t x738 = INT64_MIN;
	int8_t x739 = -1;
	int32_t t55 = 291144214;

	t55 = (x737<<((x738|x739)/x740));

	if (t55 != 124) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x749 = 54;
	volatile int8_t x750 = 3;
	volatile int8_t x751 = INT8_MIN;
	int16_t x752 = INT16_MIN;

	t56 = (x749<<((x750|x751)/x752));

	if (t56 != 54) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x757 = 1;
	int32_t x759 = -1;
	static volatile int32_t t57 = 30969;

	t57 = (x757<<((x758|x759)/x760));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x761 = UINT64_MAX;
	int64_t x762 = INT64_MIN;
	int64_t x763 = INT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (x761<<((x762|x763)/x764));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x783 = INT64_MIN;
	static volatile uint32_t t59 = 6U;

	t59 = (x781<<((x782|x783)/x784));

	if (t59 != 44568U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x786 = -461520885280662LL;
	int8_t x787 = INT8_MIN;
	static volatile int32_t t60 = 3724784;

	t60 = (x785<<((x786|x787)/x788));

	if (t60 != 2887) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x801 = INT16_MAX;
	int8_t x802 = INT8_MIN;
	volatile int16_t x804 = 1329;
	volatile int32_t t61 = -61287;

	t61 = (x801<<((x802|x803)/x804));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x806 = -3787;
	int64_t x807 = 10123779808202449LL;
	int16_t x808 = INT16_MIN;
	static uint64_t t62 = 402LLU;

	t62 = (x805<<((x806|x807)/x808));

	if (t62 != 51083748202238249LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x817 = INT64_MAX;
	int8_t x818 = INT8_MIN;
	static uint8_t x819 = 1U;
	int8_t x820 = INT8_MIN;
	int64_t t63 = INT64_MAX;

	t63 = (x817<<((x818|x819)/x820));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x821 = INT8_MAX;
	uint64_t x822 = 67233270LLU;
	int32_t x823 = INT32_MAX;
	int32_t t64 = -60;

	t64 = (x821<<((x822|x823)/x824));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x833 = 12751112;
	int16_t x834 = INT16_MIN;
	int32_t x835 = INT32_MIN;
	static int64_t x836 = INT64_MIN;
	volatile int32_t t65 = 940523257;

	t65 = (x833<<((x834|x835)/x836));

	if (t65 != 12751112) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x841 = 3U;
	static int8_t x842 = -1;
	int8_t x843 = -1;
	static uint16_t x844 = UINT16_MAX;
	int32_t t66 = 2288711;

	t66 = (x841<<((x842|x843)/x844));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x853 = 10U;
	int32_t x854 = -1;
	static int64_t x855 = INT64_MIN;
	static int16_t x856 = 273;
	static int32_t t67 = -47918;

	t67 = (x853<<((x854|x855)/x856));

	if (t67 != 10) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x859 = INT8_MIN;
	int16_t x860 = -1;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x857<<((x858|x859)/x860));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x869 = 639501961538LL;
	static uint16_t x870 = UINT16_MAX;
	int16_t x871 = INT16_MAX;
	int64_t x872 = INT64_MIN;
	volatile int64_t t69 = -5LL;

	t69 = (x869<<((x870|x871)/x872));

	if (t69 != 639501961538LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x898 = 0LLU;
	int8_t x899 = INT8_MIN;
	int16_t x900 = -2826;

	t70 = (x897<<((x898|x899)/x900));

	if (t70 != 4422LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x905 = 4U;
	volatile uint16_t x906 = UINT16_MAX;
	uint64_t x907 = 136577313272411485LLU;
	static uint64_t x908 = 1033153467013912155LLU;
	int32_t t71 = 253856;

	t71 = (x905<<((x906|x907)/x908));

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x921 = UINT16_MAX;
	static uint32_t x922 = 1698U;
	int32_t x923 = INT32_MIN;
	volatile int32_t x924 = -33118070;
	volatile int32_t t72 = -46;

	t72 = (x921<<((x922|x923)/x924));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x937 = INT16_MAX;
	int16_t x938 = -1;
	int16_t x939 = -6;
	int32_t x940 = -909204;
	static int32_t t73 = 3563;

	t73 = (x937<<((x938|x939)/x940));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x945 = 3028259655399411LL;
	static int16_t x946 = -2;
	volatile int32_t x948 = -1;
	int64_t t74 = 1219544878714LL;

	t74 = (x945<<((x946|x947)/x948));

	if (t74 != 6056519310798822LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x949 = INT64_MAX;
	int8_t x950 = -1;
	uint16_t x951 = 1642U;
	volatile uint8_t x952 = 2U;

	t75 = (x949<<((x950|x951)/x952));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x981 = 249548548247454124LLU;
	int16_t x983 = 15;
	int32_t x984 = 614858237;

	t76 = (x981<<((x982|x983)/x984));

	if (t76 != 249548548247454124LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x985 = INT32_MAX;
	int32_t x986 = -1;
	int64_t x987 = INT64_MIN;
	static uint32_t x988 = 4U;
	int32_t t77 = INT32_MAX;

	t77 = (x985<<((x986|x987)/x988));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1013 = INT8_MAX;
	int8_t x1014 = INT8_MAX;
	uint64_t x1015 = 133020808LLU;
	static int32_t x1016 = INT32_MIN;
	static volatile int32_t t78 = 23201300;

	t78 = (x1013<<((x1014|x1015)/x1016));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1030 = 465438629806725651LLU;
	int16_t x1031 = INT16_MIN;
	volatile int64_t x1032 = INT64_MIN;
	int32_t t79 = 376303594;

	t79 = (x1029<<((x1030|x1031)/x1032));

	if (t79 != 8) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x1041 = UINT32_MAX;
	int8_t x1043 = -1;
	static int32_t x1044 = INT32_MIN;
	volatile uint32_t t80 = 105645U;

	t80 = (x1041<<((x1042|x1043)/x1044));

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1045 = INT8_MAX;
	volatile int16_t x1046 = -1;
	volatile int8_t x1047 = INT8_MIN;
	static int64_t x1048 = INT64_MIN;
	volatile int32_t t81 = -28;

	t81 = (x1045<<((x1046|x1047)/x1048));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1054 = INT8_MIN;
	int64_t x1055 = INT64_MAX;
	int16_t x1056 = -9;

	t82 = (x1053<<((x1054|x1055)/x1056));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x1062 = INT16_MIN;
	uint16_t x1063 = UINT16_MAX;
	static int64_t x1064 = INT64_MIN;

	t83 = (x1061<<((x1062|x1063)/x1064));

	if (t83 != 891868615135597372LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x1065 = 74;
	uint32_t x1066 = 3U;
	volatile int16_t x1068 = -216;
	volatile int32_t t84 = 369282;

	t84 = (x1065<<((x1066|x1067)/x1068));

	if (t84 != 74) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x1093 = 2491115LLU;
	int32_t x1094 = -1;
	uint8_t x1095 = 0U;
	int8_t x1096 = INT8_MIN;
	volatile uint64_t t85 = 4013579736463LLU;

	t85 = (x1093<<((x1094|x1095)/x1096));

	if (t85 != 2491115LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1097 = UINT8_MAX;
	uint32_t x1098 = 211718817U;
	uint64_t x1099 = 27534LLU;
	uint32_t x1100 = 329165773U;
	int32_t t86 = -144;

	t86 = (x1097<<((x1098|x1099)/x1100));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1113 = INT8_MAX;
	static int64_t x1114 = INT64_MIN;
	int64_t x1115 = -2067LL;
	int8_t x1116 = INT8_MIN;
	static volatile int32_t t87 = -22382201;

	t87 = (x1113<<((x1114|x1115)/x1116));

	if (t87 != 8323072) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1117 = INT16_MAX;
	static int8_t x1118 = -6;
	int16_t x1119 = -1;
	volatile int32_t t88 = 417;

	t88 = (x1117<<((x1118|x1119)/x1120));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1133 = INT64_MAX;
	int64_t x1134 = INT64_MIN;
	static int16_t x1135 = INT16_MIN;
	int64_t t89 = INT64_MAX;

	t89 = (x1133<<((x1134|x1135)/x1136));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1145 = 377;
	int16_t x1146 = 13081;
	uint32_t x1147 = UINT32_MAX;
	int32_t x1148 = INT32_MIN;
	static int32_t t90 = -476;

	t90 = (x1145<<((x1146|x1147)/x1148));

	if (t90 != 754) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1157 = INT16_MAX;
	static int64_t x1158 = -2LL;
	uint32_t x1159 = 1544U;
	uint64_t x1160 = UINT64_MAX;
	volatile int32_t t91 = 2146;

	t91 = (x1157<<((x1158|x1159)/x1160));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1161 = INT16_MAX;
	int32_t x1163 = -1;
	uint64_t x1164 = UINT64_MAX;
	volatile int32_t t92 = 40152580;

	t92 = (x1161<<((x1162|x1163)/x1164));

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1189 = 62;
	volatile uint16_t x1191 = 27U;
	static int8_t x1192 = 7;

	t93 = (x1189<<((x1190|x1191)/x1192));

	if (t93 != 62) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1197 = INT8_MAX;
	uint8_t x1198 = UINT8_MAX;
	volatile uint16_t x1199 = UINT16_MAX;
	int32_t x1200 = INT32_MAX;
	static volatile int32_t t94 = 690258;

	t94 = (x1197<<((x1198|x1199)/x1200));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x1201 = UINT64_MAX;
	int16_t x1202 = 1026;
	int16_t x1203 = INT16_MIN;
	static volatile uint64_t t95 = UINT64_MAX;

	t95 = (x1201<<((x1202|x1203)/x1204));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1209 = 83U;
	int8_t x1210 = -1;
	uint8_t x1211 = 3U;
	volatile int64_t x1212 = 31017584033LL;
	int32_t t96 = 27487240;

	t96 = (x1209<<((x1210|x1211)/x1212));

	if (t96 != 83) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1241 = INT16_MAX;
	uint32_t x1242 = 261815U;
	int8_t x1243 = INT8_MIN;
	int8_t x1244 = -12;
	volatile int32_t t97 = 49680039;

	t97 = (x1241<<((x1242|x1243)/x1244));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x1253 = UINT8_MAX;
	uint64_t x1254 = 3LLU;
	volatile int8_t x1255 = 0;
	volatile int32_t t98 = -1699;

	t98 = (x1253<<((x1254|x1255)/x1256));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x1301 = UINT16_MAX;
	int32_t x1302 = INT32_MAX;
	static volatile int32_t t99 = 1419;

	t99 = (x1301<<((x1302|x1303)/x1304));

	if (t99 != 65535) { NG(); } else { ; }
	
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

