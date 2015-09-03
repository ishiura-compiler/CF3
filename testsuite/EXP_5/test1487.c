#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x14 = 14724367806LLU;
int8_t x15 = -10;
int64_t x55 = INT64_MAX;
int32_t x56 = INT32_MAX;
static volatile uint32_t t4 = 1U;
uint8_t x57 = 7U;
int8_t x58 = INT8_MAX;
uint32_t t5 = 1150U;
int16_t x71 = 2;
static int64_t t6 = -13318LL;
static int8_t x97 = INT8_MAX;
static int32_t t9 = 4;
volatile uint32_t x127 = 164110U;
int32_t x128 = 5009;
uint8_t x145 = UINT8_MAX;
int8_t x146 = INT8_MIN;
int32_t x172 = -1;
static int32_t x175 = 515113;
volatile int16_t x192 = -1;
int8_t x239 = -44;
volatile uint64_t t17 = 2LLU;
int32_t t18 = 6446;
int64_t t19 = -798224LL;
int64_t x309 = -12009828119LL;
volatile int64_t t20 = -345312676388495LL;
int32_t x332 = -1;
int32_t x445 = INT32_MAX;
static volatile int16_t x447 = 0;
uint16_t x465 = UINT16_MAX;
uint32_t x479 = 119015U;
int32_t t28 = -178398;
int64_t x511 = INT64_MAX;
volatile uint64_t t30 = 3LLU;
uint16_t x520 = 135U;
volatile int32_t t31 = -150887;
static uint32_t x545 = 0U;
uint32_t t32 = 14U;
uint8_t x550 = 1U;
static int8_t x560 = -1;
uint8_t x600 = UINT8_MAX;
static volatile int16_t x608 = 501;
static int32_t x613 = -1;
int32_t x619 = 0;
int64_t x620 = 6899337LL;
volatile int64_t t40 = 0LL;
static uint16_t x636 = UINT16_MAX;
static uint32_t x655 = UINT32_MAX;
int16_t x696 = INT16_MAX;
int16_t x717 = INT16_MIN;
int16_t x753 = 1606;
int32_t t48 = 123387;
volatile uint64_t t49 = 106LLU;
volatile int32_t x920 = INT32_MAX;
volatile int64_t x969 = INT64_MAX;
int64_t x986 = -610453158470LL;
int32_t x1042 = -1;
uint16_t x1043 = UINT16_MAX;
static int64_t x1093 = -1LL;
static int32_t x1125 = INT32_MIN;
uint16_t x1128 = 105U;
volatile int64_t t69 = 326252956398187915LL;
int16_t x1174 = 3819;
uint8_t x1257 = 24U;
volatile int64_t t74 = 7LL;
uint32_t x1310 = UINT32_MAX;
int32_t t79 = 0;
static uint32_t x1322 = 122055U;
static int32_t x1353 = INT32_MIN;
volatile uint32_t t81 = 46U;
int16_t x1361 = INT16_MIN;
int32_t x1364 = INT32_MAX;
int64_t x1369 = 90620500280064LL;
uint16_t x1371 = 43U;
uint32_t x1372 = UINT32_MAX;
int64_t t83 = -10848774740384772LL;
static int8_t x1402 = INT8_MIN;
int64_t x1413 = INT64_MIN;
static int8_t x1439 = INT8_MAX;
volatile uint32_t t86 = 8455U;
int32_t t87 = -9354979;
int16_t x1496 = INT16_MAX;
int64_t x1498 = -253953543437281LL;
uint8_t x1499 = UINT8_MAX;
int64_t x1555 = 39369647031159LL;
static uint16_t x1606 = 1U;
uint32_t x1607 = UINT32_MAX;
volatile int64_t t95 = 845434628447LL;
static volatile int64_t x1635 = 190LL;
int64_t t97 = -58496565992123LL;
int32_t x1657 = INT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = 0;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = -4;

	t0 = (x1%((x2<x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = INT32_MIN;
	int32_t x16 = -1;
	int32_t t1 = 50304;

	t1 = (x13%((x14<x15)&x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	uint16_t x18 = 94U;
	static volatile uint16_t x19 = 19411U;
	int8_t x20 = INT8_MAX;
	static volatile int32_t t2 = -7024;

	t2 = (x17%((x18<x19)&x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x41 = 262LLU;
	int32_t x42 = 47;
	uint64_t x43 = 416284342586LLU;
	volatile uint32_t x44 = 2050159U;
	volatile uint64_t t3 = 861290LLU;

	t3 = (x41%((x42<x43)&x44));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x53 = UINT32_MAX;
	volatile int8_t x54 = 6;

	t4 = (x53%((x54<x55)&x56));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x59 = 1566U;
	static uint32_t x60 = 367U;

	t5 = (x57%((x58<x59)&x60));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x69 = UINT16_MAX;
	static int16_t x70 = -1;
	int64_t x72 = -21948512767352895LL;

	t6 = (x69%((x70<x71)&x72));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x98 = -1;
	int16_t x99 = 0;
	int16_t x100 = INT16_MAX;
	int32_t t7 = -3;

	t7 = (x97%((x98<x99)&x100));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x105 = 102U;
	uint16_t x106 = 5U;
	static uint16_t x107 = UINT16_MAX;
	uint64_t x108 = 92793805140833755LLU;
	uint64_t t8 = 33920675180LLU;

	t8 = (x105%((x106<x107)&x108));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = -55000;
	uint16_t x119 = 9656U;
	int16_t x120 = INT16_MAX;

	t9 = (x117%((x118<x119)&x120));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x125 = INT8_MAX;
	uint16_t x126 = 6U;
	int32_t t10 = 9484;

	t10 = (x125%((x126<x127)&x128));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x147 = -1;
	int64_t x148 = -1LL;
	static volatile int64_t t11 = 23LL;

	t11 = (x145%((x146<x147)&x148));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x169 = 235U;
	int16_t x170 = -11361;
	int32_t x171 = 0;
	volatile uint32_t t12 = 1917925U;

	t12 = (x169%((x170<x171)&x172));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x173 = 1911703;
	int64_t x174 = INT64_MIN;
	int32_t x176 = -1;
	volatile int32_t t13 = -4;

	t13 = (x173%((x174<x175)&x176));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x181 = 7U;
	uint8_t x182 = UINT8_MAX;
	static int16_t x183 = INT16_MAX;
	volatile uint64_t x184 = UINT64_MAX;
	volatile uint64_t t14 = 13390LLU;

	t14 = (x181%((x182<x183)&x184));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x189 = 46U;
	volatile int64_t x190 = -1LL;
	int16_t x191 = 1922;
	static volatile int32_t t15 = 40;

	t15 = (x189%((x190<x191)&x192));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x238 = INT16_MIN;
	static volatile int8_t x240 = -1;
	uint64_t t16 = 24344LLU;

	t16 = (x237%((x238<x239)&x240));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x249 = 1066861LLU;
	int8_t x250 = -50;
	volatile int8_t x251 = -1;
	volatile uint64_t x252 = UINT64_MAX;

	t17 = (x249%((x250<x251)&x252));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x297 = 2U;
	int64_t x298 = INT64_MIN;
	static uint32_t x299 = UINT32_MAX;
	uint16_t x300 = 17U;

	t18 = (x297%((x298<x299)&x300));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x301 = 726942U;
	uint32_t x302 = 549698U;
	int8_t x303 = INT8_MIN;
	static volatile int64_t x304 = -1LL;

	t19 = (x301%((x302<x303)&x304));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x310 = INT32_MIN;
	int16_t x311 = -1;
	uint8_t x312 = UINT8_MAX;

	t20 = (x309%((x310<x311)&x312));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x329 = 5011015881327238LLU;
	volatile int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MAX;
	volatile uint64_t t21 = 11564087324LLU;

	t21 = (x329%((x330<x331)&x332));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x357 = INT64_MIN;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = 444U;
	int32_t x360 = INT32_MAX;
	int64_t t22 = -73LL;

	t22 = (x357%((x358<x359)&x360));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	int16_t x407 = -1;
	volatile int16_t x408 = 807;
	int64_t t23 = -76221786749156232LL;

	t23 = (x405%((x406<x407)&x408));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x413 = INT64_MIN;
	volatile int16_t x414 = 3096;
	uint32_t x415 = 3360937U;
	int8_t x416 = -1;
	static int64_t t24 = 210LL;

	t24 = (x413%((x414<x415)&x416));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x446 = -1111951908942581182LL;
	volatile int64_t x448 = -13589897LL;
	int64_t t25 = 629820266944LL;

	t25 = (x445%((x446<x447)&x448));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x453 = 787U;
	uint8_t x454 = 4U;
	volatile int64_t x455 = INT64_MAX;
	uint16_t x456 = UINT16_MAX;
	static volatile int32_t t26 = 29715;

	t26 = (x453%((x454<x455)&x456));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x466 = 1U;
	static uint32_t x467 = 11U;
	static int64_t x468 = 517145LL;
	int64_t t27 = -22696383255220539LL;

	t27 = (x465%((x466<x467)&x468));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x477 = -1;
	volatile int64_t x478 = -1LL;
	uint8_t x480 = UINT8_MAX;

	t28 = (x477%((x478<x479)&x480));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x509 = UINT8_MAX;
	uint8_t x510 = 35U;
	uint64_t x512 = 174827358168668305LLU;
	uint64_t t29 = 4448545588482668LLU;

	t29 = (x509%((x510<x511)&x512));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x513 = 0;
	uint16_t x514 = UINT16_MAX;
	uint32_t x515 = 181830067U;
	uint64_t x516 = 1095342664253LLU;

	t30 = (x513%((x514<x515)&x516));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x517 = 5593;
	static int32_t x518 = 1607222;
	static volatile int64_t x519 = INT64_MAX;

	t31 = (x517%((x518<x519)&x520));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x546 = 1;
	int64_t x547 = INT64_MAX;
	static volatile int16_t x548 = -1;

	t32 = (x545%((x546<x547)&x548));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x549 = INT32_MAX;
	int64_t x551 = INT64_MAX;
	int8_t x552 = 7;
	volatile int32_t t33 = 70662;

	t33 = (x549%((x550<x551)&x552));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x557 = UINT64_MAX;
	static uint8_t x558 = 48U;
	uint64_t x559 = 8899191245095625466LLU;
	static uint64_t t34 = 131360560018LLU;

	t34 = (x557%((x558<x559)&x560));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x569 = 2025758136LL;
	uint8_t x570 = 2U;
	volatile uint8_t x571 = UINT8_MAX;
	uint32_t x572 = UINT32_MAX;
	static volatile int64_t t35 = -124999363201351LL;

	t35 = (x569%((x570<x571)&x572));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x581 = -2;
	int16_t x582 = -1;
	static int16_t x583 = INT16_MAX;
	uint32_t x584 = UINT32_MAX;
	uint32_t t36 = 1109254U;

	t36 = (x581%((x582<x583)&x584));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x597 = 2478U;
	static int64_t x598 = -1LL;
	int32_t x599 = INT32_MAX;
	int32_t t37 = 4094;

	t37 = (x597%((x598<x599)&x600));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x605 = UINT32_MAX;
	int64_t x606 = -22346536160LL;
	uint32_t x607 = UINT32_MAX;
	uint32_t t38 = 96458240U;

	t38 = (x605%((x606<x607)&x608));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x614 = -3123123314LL;
	uint16_t x615 = UINT16_MAX;
	uint32_t x616 = 23U;
	volatile uint32_t t39 = 10594U;

	t39 = (x613%((x614<x615)&x616));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x617 = INT16_MIN;
	int64_t x618 = INT64_MIN;

	t40 = (x617%((x618<x619)&x620));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x633 = UINT32_MAX;
	volatile int8_t x634 = -1;
	int32_t x635 = 1;
	volatile uint32_t t41 = 17310U;

	t41 = (x633%((x634<x635)&x636));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x653 = -2LL;
	uint16_t x654 = 5081U;
	int16_t x656 = INT16_MAX;
	volatile int64_t t42 = -4624581LL;

	t42 = (x653%((x654<x655)&x656));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x657 = -1;
	static int8_t x658 = INT8_MAX;
	int64_t x659 = 289453763917780692LL;
	int32_t x660 = INT32_MAX;
	static volatile int32_t t43 = 1;

	t43 = (x657%((x658<x659)&x660));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x669 = 2516206U;
	int8_t x670 = 1;
	static uint64_t x671 = UINT64_MAX;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t44 = 4LLU;

	t44 = (x669%((x670<x671)&x672));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x693 = -1LL;
	int8_t x694 = 1;
	uint8_t x695 = 6U;
	static volatile int64_t t45 = 45765801464LL;

	t45 = (x693%((x694<x695)&x696));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x709 = -1;
	volatile int32_t x710 = 122133076;
	uint32_t x711 = UINT32_MAX;
	uint16_t x712 = 1835U;
	int32_t t46 = -55030;

	t46 = (x709%((x710<x711)&x712));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x718 = 48708783U;
	static volatile uint64_t x719 = UINT64_MAX;
	uint16_t x720 = UINT16_MAX;
	int32_t t47 = -52441;

	t47 = (x717%((x718<x719)&x720));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x754 = -1;
	uint16_t x755 = UINT16_MAX;
	int16_t x756 = -1;

	t48 = (x753%((x754<x755)&x756));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x769 = -53577LL;
	int64_t x770 = INT64_MAX;
	uint64_t x771 = UINT64_MAX;
	volatile uint64_t x772 = UINT64_MAX;

	t49 = (x769%((x770<x771)&x772));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x809 = UINT32_MAX;
	static uint16_t x810 = 0U;
	int32_t x811 = INT32_MAX;
	int64_t x812 = INT64_MAX;
	volatile int64_t t50 = 84190171LL;

	t50 = (x809%((x810<x811)&x812));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x869 = -1;
	uint8_t x870 = UINT8_MAX;
	volatile uint64_t x871 = 14968416LLU;
	int32_t x872 = -1;
	int32_t t51 = 53;

	t51 = (x869%((x870<x871)&x872));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x905 = 943066406LLU;
	int16_t x906 = INT16_MIN;
	int32_t x907 = INT32_MAX;
	uint16_t x908 = 5377U;
	static volatile uint64_t t52 = 754225988287LLU;

	t52 = (x905%((x906<x907)&x908));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x917 = 11U;
	int32_t x918 = INT32_MIN;
	uint16_t x919 = 79U;
	volatile int32_t t53 = -168;

	t53 = (x917%((x918<x919)&x920));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x937 = INT16_MIN;
	int64_t x938 = INT64_MIN;
	volatile uint64_t x939 = UINT64_MAX;
	int32_t x940 = 827;
	volatile int32_t t54 = -57;

	t54 = (x937%((x938<x939)&x940));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x941 = INT64_MAX;
	uint8_t x942 = 3U;
	uint16_t x943 = 18977U;
	int16_t x944 = -1;
	static volatile int64_t t55 = 1347185LL;

	t55 = (x941%((x942<x943)&x944));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x953 = 907U;
	uint16_t x954 = 18U;
	uint16_t x955 = 27491U;
	uint8_t x956 = 117U;
	volatile uint32_t t56 = 292950770U;

	t56 = (x953%((x954<x955)&x956));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x957 = 2U;
	static int64_t x958 = -909LL;
	static int32_t x959 = -1;
	volatile uint32_t x960 = 647U;
	static uint32_t t57 = 1645388253U;

	t57 = (x957%((x958<x959)&x960));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x970 = INT32_MIN;
	static int8_t x971 = INT8_MAX;
	static int8_t x972 = -1;
	static int64_t t58 = 18295466LL;

	t58 = (x969%((x970<x971)&x972));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x973 = 199161669U;
	volatile int64_t x974 = INT64_MIN;
	int32_t x975 = 11;
	int16_t x976 = 3395;
	volatile uint32_t t59 = 232077701U;

	t59 = (x973%((x974<x975)&x976));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x985 = INT64_MIN;
	int8_t x987 = -1;
	uint8_t x988 = UINT8_MAX;
	int64_t t60 = 1LL;

	t60 = (x985%((x986<x987)&x988));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1041 = INT64_MAX;
	int64_t x1044 = -1LL;
	volatile int64_t t61 = -270164691838072625LL;

	t61 = (x1041%((x1042<x1043)&x1044));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x1065 = -1LL;
	static volatile int64_t x1066 = INT64_MIN;
	volatile int8_t x1067 = INT8_MAX;
	uint64_t x1068 = UINT64_MAX;
	static volatile uint64_t t62 = 227037466233035LLU;

	t62 = (x1065%((x1066<x1067)&x1068));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x1069 = INT32_MIN;
	uint16_t x1070 = 2562U;
	static uint64_t x1071 = UINT64_MAX;
	volatile int8_t x1072 = -1;
	volatile int32_t t63 = -1;

	t63 = (x1069%((x1070<x1071)&x1072));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1081 = 56U;
	int64_t x1082 = -1LL;
	int8_t x1083 = INT8_MAX;
	static uint16_t x1084 = UINT16_MAX;
	static volatile int32_t t64 = 529689948;

	t64 = (x1081%((x1082<x1083)&x1084));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1094 = 1;
	uint16_t x1095 = 1761U;
	int64_t x1096 = INT64_MAX;
	int64_t t65 = 435467815LL;

	t65 = (x1093%((x1094<x1095)&x1096));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1097 = INT16_MIN;
	static volatile int64_t x1098 = INT64_MIN;
	static int32_t x1099 = INT32_MAX;
	int64_t x1100 = -7LL;
	int64_t t66 = -29154LL;

	t66 = (x1097%((x1098<x1099)&x1100));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1126 = UINT32_MAX;
	int64_t x1127 = 509364583149228LL;
	volatile int32_t t67 = 5335011;

	t67 = (x1125%((x1126<x1127)&x1128));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x1129 = 13087541U;
	static int16_t x1130 = INT16_MIN;
	uint64_t x1131 = UINT64_MAX;
	static uint8_t x1132 = 13U;
	static volatile uint32_t t68 = 349414U;

	t68 = (x1129%((x1130<x1131)&x1132));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1165 = 39888667488194LL;
	int16_t x1166 = -1;
	uint16_t x1167 = UINT16_MAX;
	volatile int8_t x1168 = 1;

	t69 = (x1165%((x1166<x1167)&x1168));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1173 = -1;
	uint64_t x1175 = 1922118211495LLU;
	uint64_t x1176 = UINT64_MAX;
	volatile uint64_t t70 = 6388998063LLU;

	t70 = (x1173%((x1174<x1175)&x1176));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x1197 = INT32_MAX;
	uint64_t x1198 = 143409019271LLU;
	int16_t x1199 = -1;
	int16_t x1200 = -1;
	int32_t t71 = 228536377;

	t71 = (x1197%((x1198<x1199)&x1200));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1205 = INT64_MIN;
	int8_t x1206 = -1;
	int64_t x1207 = INT64_MAX;
	static int16_t x1208 = -1;
	volatile int64_t t72 = 89120137425662LL;

	t72 = (x1205%((x1206<x1207)&x1208));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x1213 = 2806U;
	int64_t x1214 = INT64_MIN;
	int16_t x1215 = -1;
	int64_t x1216 = -1LL;
	int64_t t73 = 391677LL;

	t73 = (x1213%((x1214<x1215)&x1216));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1258 = INT64_MIN;
	static volatile int16_t x1259 = -1334;
	int64_t x1260 = INT64_MAX;

	t74 = (x1257%((x1258<x1259)&x1260));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1273 = UINT16_MAX;
	int16_t x1274 = INT16_MIN;
	int32_t x1275 = 48162;
	uint32_t x1276 = UINT32_MAX;
	volatile uint32_t t75 = 6981622U;

	t75 = (x1273%((x1274<x1275)&x1276));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1289 = INT32_MIN;
	volatile uint32_t x1290 = 106839U;
	int8_t x1291 = INT8_MIN;
	uint16_t x1292 = 551U;
	int32_t t76 = -15990;

	t76 = (x1289%((x1290<x1291)&x1292));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1305 = -12LL;
	volatile uint32_t x1306 = 2242U;
	static int16_t x1307 = INT16_MAX;
	uint16_t x1308 = UINT16_MAX;
	int64_t t77 = 52995359765290LL;

	t77 = (x1305%((x1306<x1307)&x1308));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x1309 = INT32_MIN;
	volatile uint64_t x1311 = UINT64_MAX;
	int64_t x1312 = INT64_MAX;
	static volatile int64_t t78 = -5197427LL;

	t78 = (x1309%((x1310<x1311)&x1312));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x1313 = INT16_MAX;
	int8_t x1314 = 1;
	volatile uint16_t x1315 = 2U;
	static int16_t x1316 = -1;

	t79 = (x1313%((x1314<x1315)&x1316));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x1321 = INT32_MAX;
	static int32_t x1323 = -285787866;
	volatile uint32_t x1324 = 37116193U;
	static volatile uint32_t t80 = 6056U;

	t80 = (x1321%((x1322<x1323)&x1324));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1354 = 0U;
	int32_t x1355 = INT32_MAX;
	volatile uint32_t x1356 = 23U;

	t81 = (x1353%((x1354<x1355)&x1356));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x1362 = -15;
	int16_t x1363 = 77;
	int32_t t82 = -6;

	t82 = (x1361%((x1362<x1363)&x1364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x1370 = INT16_MIN;

	t83 = (x1369%((x1370<x1371)&x1372));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1401 = INT32_MIN;
	int8_t x1403 = 0;
	uint32_t x1404 = UINT32_MAX;
	uint32_t t84 = 411U;

	t84 = (x1401%((x1402<x1403)&x1404));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1414 = 1U;
	uint16_t x1415 = 5U;
	int32_t x1416 = -98227;
	volatile int64_t t85 = -1132932LL;

	t85 = (x1413%((x1414<x1415)&x1416));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1437 = INT16_MIN;
	volatile int64_t x1438 = -1LL;
	static uint32_t x1440 = UINT32_MAX;

	t86 = (x1437%((x1438<x1439)&x1440));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x1473 = 18030U;
	int8_t x1474 = INT8_MAX;
	uint32_t x1475 = UINT32_MAX;
	static int32_t x1476 = INT32_MAX;

	t87 = (x1473%((x1474<x1475)&x1476));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x1493 = 1U;
	volatile uint8_t x1494 = 0U;
	uint64_t x1495 = 25LLU;
	int32_t t88 = -150;

	t88 = (x1493%((x1494<x1495)&x1496));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1497 = 15933U;
	static volatile uint16_t x1500 = UINT16_MAX;
	volatile int32_t t89 = 109181;

	t89 = (x1497%((x1498<x1499)&x1500));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x1529 = INT32_MAX;
	volatile int16_t x1530 = -2;
	int64_t x1531 = INT64_MAX;
	volatile uint64_t x1532 = 24710767LLU;
	uint64_t t90 = 185165931LLU;

	t90 = (x1529%((x1530<x1531)&x1532));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x1533 = UINT8_MAX;
	int32_t x1534 = -8223348;
	volatile int32_t x1535 = INT32_MAX;
	uint32_t x1536 = 195871U;
	volatile uint32_t t91 = 253805798U;

	t91 = (x1533%((x1534<x1535)&x1536));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x1553 = 3515258837153602LLU;
	static int64_t x1554 = INT64_MIN;
	int64_t x1556 = -1LL;
	uint64_t t92 = 28030LLU;

	t92 = (x1553%((x1554<x1555)&x1556));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x1565 = INT16_MAX;
	int8_t x1566 = 7;
	uint16_t x1567 = UINT16_MAX;
	uint32_t x1568 = 65U;
	volatile uint32_t t93 = 4812459U;

	t93 = (x1565%((x1566<x1567)&x1568));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1569 = 0;
	int64_t x1570 = INT64_MIN;
	static int8_t x1571 = INT8_MIN;
	uint8_t x1572 = UINT8_MAX;
	int32_t t94 = 44;

	t94 = (x1569%((x1570<x1571)&x1572));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1605 = UINT32_MAX;
	int64_t x1608 = -797868184376590211LL;

	t95 = (x1605%((x1606<x1607)&x1608));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1633 = INT16_MIN;
	int64_t x1634 = -1LL;
	int8_t x1636 = -1;
	int32_t t96 = 9;

	t96 = (x1633%((x1634<x1635)&x1636));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1637 = INT64_MIN;
	uint16_t x1638 = 1025U;
	static volatile int64_t x1639 = 87347264485484787LL;
	int64_t x1640 = INT64_MAX;

	t97 = (x1637%((x1638<x1639)&x1640));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1641 = -1LL;
	int64_t x1642 = -1LL;
	static int32_t x1643 = 152;
	uint8_t x1644 = UINT8_MAX;
	volatile int64_t t98 = -395LL;

	t98 = (x1641%((x1642<x1643)&x1644));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x1658 = 52948U;
	int16_t x1659 = INT16_MIN;
	int32_t x1660 = -1;
	volatile int32_t t99 = 1407530;

	t99 = (x1657%((x1658<x1659)&x1660));

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

