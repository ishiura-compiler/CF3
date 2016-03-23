
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MIN;
int64_t x12 = 28848981LL;
int32_t x13 = -1020;
int16_t x15 = -1;
uint8_t x27 = 14U;
static volatile uint32_t x31 = 1714324U;
int16_t x33 = INT16_MIN;
static uint64_t t8 = 2286745080180481LLU;
static int16_t x47 = 4;
int64_t t10 = -39534967863LL;
int16_t x52 = INT16_MIN;
volatile int64_t t11 = -91566LL;
static int32_t x59 = -273416789;
int32_t x67 = INT32_MIN;
volatile int64_t t14 = 347086319LL;
int64_t t16 = -3642895640294LL;
volatile int64_t t18 = 2255503619641457085LL;
uint64_t x94 = 126732162255093027LLU;
int16_t x100 = INT16_MIN;
int64_t x105 = -8709692037LL;
uint32_t x117 = UINT32_MAX;
volatile int16_t x125 = 63;
volatile uint64_t t27 = 66533665011584LLU;
int32_t x129 = -12058;
int16_t x132 = INT16_MAX;
volatile int64_t t28 = -7333033809LL;
uint8_t x135 = 2U;
uint64_t x137 = UINT64_MAX;
int32_t x139 = INT32_MIN;
uint64_t x142 = 3947716335LLU;
int8_t x153 = INT8_MIN;
int32_t x154 = -1;
volatile uint8_t x156 = 3U;
static uint16_t x168 = 1U;
int16_t x170 = 1;
volatile uint32_t t39 = 3355U;
volatile uint32_t t40 = 42U;
volatile int16_t x188 = INT16_MAX;
volatile int64_t x189 = -155LL;
int64_t x195 = INT64_MAX;
uint64_t x196 = 321424586675384LLU;
volatile uint64_t x203 = 21797093502529960LLU;
int32_t x206 = -110503533;
uint32_t x219 = 5U;
int16_t x225 = INT16_MIN;
volatile int32_t x229 = INT32_MIN;
uint32_t x231 = 42364U;
int64_t x237 = 2617LL;
int32_t x244 = -1;
volatile uint64_t t56 = 10081763231861LLU;
uint8_t x254 = 63U;
uint16_t x258 = 23U;
volatile int16_t x267 = -103;
int32_t x268 = -633454;
int64_t x273 = INT64_MIN;
uint8_t x280 = UINT8_MAX;
int16_t x281 = INT16_MIN;
uint16_t x282 = 3U;
int8_t x287 = INT8_MAX;
int16_t x296 = -138;
int64_t t69 = 74144536860688LL;
uint32_t x307 = UINT32_MAX;
uint64_t x308 = 48960378LLU;
volatile uint64_t t70 = 7716508747LLU;
volatile int8_t x310 = INT8_MIN;
uint16_t x321 = 6742U;
uint32_t x322 = 124927640U;
int16_t x326 = INT16_MIN;
volatile int32_t x330 = -1;
int32_t x335 = 252;
volatile uint64_t t75 = 4019808923LLU;
int8_t x344 = INT8_MIN;
int16_t x346 = -1;
int32_t x347 = INT32_MIN;
int64_t t79 = 1022LL;
int8_t x359 = -1;
int32_t t80 = 10222388;
volatile uint16_t x363 = 38U;
volatile int64_t x365 = INT64_MIN;
uint64_t x366 = 8438LLU;
volatile int16_t x371 = INT16_MIN;
volatile uint16_t x376 = 21U;
int64_t x382 = -47353846964873LL;
volatile uint64_t t86 = 40397974LLU;
volatile int8_t x385 = -1;
int64_t x386 = 8146562656103794LL;
int16_t x395 = -1655;
uint8_t x396 = UINT8_MAX;
int64_t t90 = -3059449548906416744LL;
int16_t x403 = -27;
int32_t t91 = -3;
volatile uint8_t x406 = 126U;
volatile int8_t x411 = INT8_MIN;
int8_t x421 = -34;
volatile uint16_t x431 = 21977U;
static int8_t x433 = 62;
uint64_t x435 = UINT64_MAX;
volatile int64_t t98 = -2184921LL;
uint64_t x447 = UINT64_MAX;
volatile int64_t x450 = -5291155812684LL;
int64_t x451 = INT64_MIN;
static int64_t x452 = -1LL;
uint8_t x454 = 22U;
uint8_t x459 = 17U;
int16_t x466 = -1;
uint64_t x478 = 195888334963LLU;
volatile int8_t x484 = -23;
static int16_t x489 = INT16_MIN;
static int32_t t108 = 1106;
int64_t x498 = INT64_MIN;
int32_t x508 = INT32_MAX;
int64_t t112 = -49522958699924157LL;
int8_t x509 = -1;
int8_t x511 = 14;
volatile uint32_t x515 = 593579635U;
uint64_t x518 = 4908852LLU;
uint32_t t116 = 124206422U;
int32_t x528 = INT32_MAX;
uint64_t t118 = 1393646544LLU;
int64_t t119 = -1034LL;
int32_t x537 = INT32_MIN;
volatile uint64_t t120 = 169794LLU;
int8_t x541 = -55;
int8_t x542 = INT8_MIN;
static int32_t x549 = INT32_MIN;
uint8_t x552 = UINT8_MAX;
int16_t x558 = -14;
int64_t t125 = -13805980090LL;
int32_t x561 = INT32_MAX;
volatile uint64_t x562 = 4259950LLU;
uint32_t x563 = UINT32_MAX;
int64_t x579 = INT64_MAX;
uint64_t x582 = 4688444243LLU;
static int8_t x589 = INT8_MAX;
static uint64_t x591 = UINT64_MAX;
int64_t x597 = -1LL;
int64_t t135 = 2076653757417LL;
int64_t t136 = -163597731LL;
volatile int64_t t137 = 1864035262149732867LL;
volatile int64_t t140 = -378LL;
int16_t x632 = INT16_MIN;
int16_t x638 = -102;
volatile uint32_t x641 = UINT32_MAX;
int8_t x643 = 12;
uint16_t x646 = 583U;
uint64_t t149 = 299964385055LLU;
int16_t x664 = INT16_MIN;
int16_t x667 = 54;
static int64_t t151 = -30478LL;
static uint32_t x675 = 12337560U;
int64_t x682 = INT64_MIN;
static uint32_t x686 = UINT32_MAX;
volatile int32_t t157 = -9927;
static uint32_t x693 = 22781U;
volatile int32_t x694 = INT32_MIN;
volatile uint8_t x706 = UINT8_MAX;
int32_t x712 = INT32_MIN;
volatile int16_t x714 = -1;
int64_t x725 = INT64_MIN;
int16_t x726 = INT16_MIN;
uint16_t x727 = 1974U;
int64_t x730 = INT64_MIN;
int16_t x731 = -433;
volatile uint32_t t168 = 22U;
uint64_t x739 = 16919743405985545LLU;
int32_t x746 = INT32_MIN;
volatile uint64_t t171 = 2894206593540LLU;
uint32_t t173 = 372715U;
volatile uint8_t x757 = 8U;
int32_t t174 = 1;
int32_t x763 = INT32_MIN;
static uint64_t t176 = 58940870LLU;
static volatile int64_t x775 = -11765LL;
int32_t x782 = 106014;
uint64_t x784 = 3941LLU;
volatile uint8_t x786 = UINT8_MAX;
uint64_t t180 = 25160774454595LLU;
volatile int32_t x791 = 84567;
volatile uint16_t x797 = UINT16_MAX;
volatile uint64_t x803 = 28734627304652313LLU;
static uint64_t x805 = 16233793686LLU;
int32_t x806 = -1;
int64_t t188 = 9LL;
int32_t x825 = -362;
int64_t t189 = 5880652381LL;
uint16_t x840 = 6U;
int32_t x847 = INT32_MAX;
int16_t x849 = 3822;
uint64_t x857 = 8001239532LLU;
int32_t x861 = INT32_MIN;
uint64_t x863 = UINT64_MAX;
uint32_t x864 = 206245678U;
uint8_t x865 = 7U;
static volatile int8_t x868 = INT8_MIN;
static int16_t x870 = 7;
volatile uint32_t t199 = 308122970U;


void f0(void) {
    	volatile int32_t x1 = -1;
	static int32_t x2 = -1;
	volatile uint8_t x3 = 7U;
	volatile int32_t x4 = -45899565;
	static int32_t t0 = -67;

    t0 = (((x1%x2)%x3)-x4);

    if (t0 != 45899565) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 1854865;
	int64_t x6 = -1LL;
	int32_t x7 = 181150890;
	int8_t x8 = -1;
	volatile int64_t t1 = 81846500507203578LL;

    t1 = (((x5%x6)%x7)-x8);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 6832489LLU;
	static uint8_t x11 = 11U;
	volatile uint64_t t2 = 3506LLU;

    t2 = (((x9%x10)%x11)-x12);

    if (t2 != 18446744073680702639LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x14 = 4870449278LLU;
	int64_t x16 = -1LL;
	static uint64_t t3 = 9561LLU;

    t3 = (((x13%x14)%x15)-x16);

    if (t3 != 2011160531LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -12079;
	uint32_t x22 = UINT32_MAX;
	static int32_t x23 = INT32_MIN;
	int32_t x24 = INT32_MIN;
	uint32_t t4 = 6255318U;

    t4 = (((x21%x22)%x23)-x24);

    if (t4 != 4294955217U) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MAX;
	int64_t x28 = -1462LL;
	volatile int64_t t5 = -892356LL;

    t5 = (((x25%x26)%x27)-x28);

    if (t5 != 1460LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 45U;
	static uint64_t x30 = 49095527561LLU;
	static uint8_t x32 = 119U;
	volatile uint64_t t6 = 1LLU;

    t6 = (((x29%x30)%x31)-x32);

    if (t6 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x34 = -1LL;
	int32_t x35 = INT32_MAX;
	static int64_t x36 = 239997601656859LL;
	volatile int64_t t7 = 31484913850044250LL;

    t7 = (((x33%x34)%x35)-x36);

    if (t7 != -239997601656859LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 399522094288LLU;
	uint32_t x38 = 86481U;
	volatile int64_t x39 = INT64_MIN;
	uint8_t x40 = 1U;

    t8 = (((x37%x38)%x39)-x40);

    if (t8 != 24360LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x41 = UINT16_MAX;
	int32_t x42 = -1;
	int8_t x43 = -1;
	int64_t x44 = -1LL;
	static volatile int64_t t9 = 3523LL;

    t9 = (((x41%x42)%x43)-x44);

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = 1;
	volatile int64_t x46 = -1LL;
	static int8_t x48 = INT8_MIN;

    t10 = (((x45%x46)%x47)-x48);

    if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 0U;
	static int16_t x50 = INT16_MAX;
	int64_t x51 = 177354302922LL;

    t11 = (((x49%x50)%x51)-x52);

    if (t11 != 32768LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x53 = 0U;
	volatile int8_t x54 = 46;
	int64_t x55 = -1LL;
	uint8_t x56 = UINT8_MAX;
	int64_t t12 = 1293LL;

    t12 = (((x53%x54)%x55)-x56);

    if (t12 != -255LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	static int64_t t13 = 772552LL;

    t13 = (((x57%x58)%x59)-x60);

    if (t13 != -2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = -1;
	uint32_t x66 = 2U;
	int64_t x68 = -23676LL;

    t14 = (((x65%x66)%x67)-x68);

    if (t14 != 23677LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x69 = -24;
	int8_t x70 = INT8_MIN;
	volatile int32_t x71 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t15 = 57917716062LLU;

    t15 = (((x69%x70)%x71)-x72);

    if (t15 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	volatile int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MIN;

    t16 = (((x73%x74)%x75)-x76);

    if (t16 != 2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x77 = 1;
	static volatile int8_t x78 = -1;
	int16_t x79 = INT16_MIN;
	static uint32_t x80 = 3U;
	static volatile uint32_t t17 = 5368U;

    t17 = (((x77%x78)%x79)-x80);

    if (t17 != 4294967293U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x81 = INT32_MAX;
	int64_t x82 = -1LL;
	static volatile int8_t x83 = -1;
	volatile int32_t x84 = -1;

    t18 = (((x81%x82)%x83)-x84);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x89 = -1LL;
	uint64_t x90 = 18106LLU;
	uint16_t x91 = 996U;
	int16_t x92 = INT16_MAX;
	static uint64_t t19 = 6608065939237853LLU;

    t19 = (((x89%x90)%x91)-x92);

    if (t19 != 18446744073709519362LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = -420LL;
	static volatile int64_t x95 = 461LL;
	volatile uint8_t x96 = UINT8_MAX;
	static volatile uint64_t t20 = 135317LLU;

    t20 = (((x93%x94)%x95)-x96);

    if (t20 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = INT32_MIN;
	int16_t x98 = -1;
	uint8_t x99 = 1U;
	volatile int32_t t21 = 272383;

    t21 = (((x97%x98)%x99)-x100);

    if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x106 = -1;
	volatile int64_t x107 = -20LL;
	static int8_t x108 = INT8_MIN;
	volatile int64_t t22 = 13787484376829374LL;

    t22 = (((x105%x106)%x107)-x108);

    if (t22 != 128LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = -1;
	static volatile int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	int32_t x112 = -341436778;
	volatile int32_t t23 = 27751;

    t23 = (((x109%x110)%x111)-x112);

    if (t23 != 341436777) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = INT16_MAX;
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 18U;
	static volatile int8_t x116 = INT8_MAX;
	volatile int32_t t24 = -441234;

    t24 = (((x113%x114)%x115)-x116);

    if (t24 != -120) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x118 = 835523095747LLU;
	static uint64_t x119 = 820882041LLU;
	volatile int32_t x120 = INT32_MAX;
	volatile uint64_t t25 = 1323495449109LLU;

    t25 = (((x117%x118)%x119)-x120);

    if (t25 != 18446744071752625059LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x121 = -44298;
	int16_t x122 = INT16_MAX;
	int16_t x123 = INT16_MIN;
	uint32_t x124 = 46392984U;
	uint32_t t26 = 1369150U;

    t26 = (((x121%x122)%x123)-x124);

    if (t26 != 4248562781U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x126 = 670799212540870LLU;
	static int8_t x127 = -1;
	static uint64_t x128 = 3223353717355049LLU;

    t27 = (((x125%x126)%x127)-x128);

    if (t27 != 18443520719992196630LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x130 = INT16_MIN;
	int64_t x131 = -1LL;

    t28 = (((x129%x130)%x131)-x132);

    if (t28 != -32767LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 81U;
	static int32_t x134 = INT32_MIN;
	int8_t x136 = 23;
	int32_t t29 = -15670;

    t29 = (((x133%x134)%x135)-x136);

    if (t29 != -22) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x138 = -4;
	int8_t x140 = -29;
	volatile uint64_t t30 = 10440LLU;

    t30 = (((x137%x138)%x139)-x140);

    if (t30 != 32LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = INT64_MAX;
	static int64_t x143 = -1LL;
	int16_t x144 = -1;
	volatile uint64_t t31 = 1860918323LLU;

    t31 = (((x141%x142)%x143)-x144);

    if (t31 != 773792378LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = -1;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MAX;
	static int16_t x152 = INT16_MAX;
	int32_t t32 = -341393;

    t32 = (((x149%x150)%x151)-x152);

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x155 = -2996162750LL;
	volatile int64_t t33 = 364583626LL;

    t33 = (((x153%x154)%x155)-x156);

    if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x157 = UINT64_MAX;
	int32_t x158 = INT32_MIN;
	uint16_t x159 = 167U;
	static int64_t x160 = INT64_MIN;
	uint64_t t34 = 117935564226745LLU;

    t34 = (((x157%x158)%x159)-x160);

    if (t34 != 9223372036854775894LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x161 = INT32_MAX;
	uint32_t x162 = 11643U;
	int64_t x163 = INT64_MAX;
	static int16_t x164 = -5;
	volatile int64_t t35 = -89593601LL;

    t35 = (((x161%x162)%x163)-x164);

    if (t35 != 2160LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = 0;
	volatile int64_t x166 = INT64_MIN;
	int16_t x167 = 1;
	volatile int64_t t36 = -197492241LL;

    t36 = (((x165%x166)%x167)-x168);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x169 = 1U;
	int64_t x171 = -1LL;
	int8_t x172 = INT8_MAX;
	volatile int64_t t37 = -6231272586072LL;

    t37 = (((x169%x170)%x171)-x172);

    if (t37 != -127LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x173 = -2;
	int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	static int32_t t38 = 233740914;

    t38 = (((x173%x174)%x175)-x176);

    if (t38 != 126) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x177 = 239876U;
	volatile int32_t x178 = INT32_MAX;
	volatile int32_t x179 = -1125;
	volatile int8_t x180 = -1;

    t39 = (((x177%x178)%x179)-x180);

    if (t39 != 239877U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x181 = -1;
	volatile int32_t x182 = INT32_MIN;
	volatile int16_t x183 = INT16_MAX;
	uint32_t x184 = 558849642U;

    t40 = (((x181%x182)%x183)-x184);

    if (t40 != 3736117653U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x185 = 0U;
	static int8_t x186 = INT8_MIN;
	volatile uint64_t x187 = 22470176LLU;
	static volatile uint64_t t41 = 357231723783373LLU;

    t41 = (((x185%x186)%x187)-x188);

    if (t41 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x190 = UINT64_MAX;
	static int8_t x191 = INT8_MAX;
	int64_t x192 = INT64_MAX;
	uint64_t t42 = 377584368133298LLU;

    t42 = (((x189%x190)%x191)-x192);

    if (t42 != 9223372036854775910LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MIN;
	static uint64_t t43 = 34LLU;

    t43 = (((x193%x194)%x195)-x196);

    if (t43 != 18446422646975392584LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = 1;
	static int64_t x198 = INT64_MIN;
	int16_t x199 = 16;
	static int8_t x200 = INT8_MAX;
	volatile int64_t t44 = -3887865198526156LL;

    t44 = (((x197%x198)%x199)-x200);

    if (t44 != -126LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x201 = UINT16_MAX;
	static int8_t x202 = INT8_MIN;
	volatile int32_t x204 = INT32_MIN;
	static uint64_t t45 = 500899LLU;

    t45 = (((x201%x202)%x203)-x204);

    if (t45 != 2147483775LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x205 = -1;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MAX;
	volatile int64_t t46 = -192417131LL;

    t46 = (((x205%x206)%x207)-x208);

    if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	volatile int16_t x212 = -1;
	static volatile int32_t t47 = -40;

    t47 = (((x209%x210)%x211)-x212);

    if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x213 = INT32_MIN;
	volatile int8_t x214 = -6;
	int8_t x215 = 2;
	static int8_t x216 = INT8_MIN;
	int32_t t48 = 1;

    t48 = (((x213%x214)%x215)-x216);

    if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = -1LL;
	uint16_t x218 = UINT16_MAX;
	int8_t x220 = INT8_MAX;
	volatile int64_t t49 = -49509794915LL;

    t49 = (((x217%x218)%x219)-x220);

    if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 2U;
	static int16_t x224 = 220;
	static uint32_t t50 = 1384U;

    t50 = (((x221%x222)%x223)-x224);

    if (t50 != 4294967076U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x226 = -1;
	volatile int16_t x227 = -1;
	static int32_t x228 = INT32_MAX;
	static int32_t t51 = -14242;

    t51 = (((x225%x226)%x227)-x228);

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x230 = INT16_MIN;
	volatile int8_t x232 = INT8_MAX;
	uint32_t t52 = 20U;

    t52 = (((x229%x230)%x231)-x232);

    if (t52 != 4294967169U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x238 = -1;
	uint8_t x239 = UINT8_MAX;
	uint8_t x240 = 12U;
	static volatile int64_t t53 = -91019LL;

    t53 = (((x237%x238)%x239)-x240);

    if (t53 != -12LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x241 = INT16_MAX;
	static uint32_t x242 = 65U;
	int64_t x243 = 2762666890674527026LL;
	static volatile int64_t t54 = 24077332762674LL;

    t54 = (((x241%x242)%x243)-x244);

    if (t54 != 8LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x245 = 45U;
	static uint64_t x246 = 78939034980LLU;
	int64_t x247 = -15LL;
	int32_t x248 = -1;
	static uint64_t t55 = 178413939902LLU;

    t55 = (((x245%x246)%x247)-x248);

    if (t55 != 46LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x249 = -1;
	uint8_t x250 = 4U;
	uint64_t x251 = 3998LLU;
	static volatile uint16_t x252 = 12550U;

    t56 = (((x249%x250)%x251)-x252);

    if (t56 != 18446744073709540391LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = INT16_MIN;
	volatile uint8_t x255 = 7U;
	int8_t x256 = -16;
	volatile int32_t t57 = 2930922;

    t57 = (((x253%x254)%x255)-x256);

    if (t57 != 15) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = 1;
	uint32_t x259 = 11U;
	static int16_t x260 = INT16_MIN;
	uint32_t t58 = 22342773U;

    t58 = (((x257%x258)%x259)-x260);

    if (t58 != 32769U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = -1;
	static int8_t x262 = INT8_MIN;
	int8_t x263 = -1;
	volatile int32_t x264 = -1;
	static volatile int32_t t59 = 3147;

    t59 = (((x261%x262)%x263)-x264);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x265 = INT64_MIN;
	volatile int16_t x266 = INT16_MAX;
	static volatile int64_t t60 = -983299498870233850LL;

    t60 = (((x265%x266)%x267)-x268);

    if (t60 != 633446LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x269 = -1;
	static int32_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	volatile int32_t x272 = -1;
	int32_t t61 = 1;

    t61 = (((x269%x270)%x271)-x272);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x274 = -1LL;
	uint64_t x275 = 47588876462171243LLU;
	volatile int8_t x276 = -1;
	volatile uint64_t t62 = 35LLU;

    t62 = (((x273%x274)%x275)-x276);

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x277 = 885U;
	uint8_t x278 = 69U;
	int32_t x279 = INT32_MIN;
	volatile int32_t t63 = 2728;

    t63 = (((x277%x278)%x279)-x280);

    if (t63 != -198) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x283 = -373;
	volatile int32_t x284 = -25901;
	int32_t t64 = 1;

    t64 = (((x281%x282)%x283)-x284);

    if (t64 != 25899) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x285 = 75U;
	uint8_t x286 = 27U;
	int8_t x288 = -2;
	int32_t t65 = 75;

    t65 = (((x285%x286)%x287)-x288);

    if (t65 != 23) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = INT16_MIN;
	static volatile int64_t x290 = 358882336299LL;
	int16_t x291 = 2;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t66 = 20212LLU;

    t66 = (((x289%x290)%x291)-x292);

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x293 = UINT8_MAX;
	int8_t x294 = 6;
	int32_t x295 = -1;
	volatile int32_t t67 = -822;

    t67 = (((x293%x294)%x295)-x296);

    if (t67 != 138) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x297 = INT64_MIN;
	volatile int32_t x298 = INT32_MAX;
	static int64_t x299 = 342LL;
	int64_t x300 = INT64_MIN;
	volatile int64_t t68 = -1184524LL;

    t68 = (((x297%x298)%x299)-x300);

    if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x301 = -1;
	volatile uint32_t x302 = UINT32_MAX;
	int64_t x303 = INT64_MIN;
	volatile int16_t x304 = -1;

    t69 = (((x301%x302)%x303)-x304);

    if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x305 = 124062220008831LL;
	int64_t x306 = -1LL;

    t70 = (((x305%x306)%x307)-x308);

    if (t70 != 18446744073660591238LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x309 = 151373U;
	uint32_t x311 = 26U;
	static volatile uint32_t x312 = UINT32_MAX;
	static volatile uint32_t t71 = 480U;

    t71 = (((x309%x310)%x311)-x312);

    if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x323 = UINT16_MAX;
	static int32_t x324 = -1;
	uint32_t t72 = 3178U;

    t72 = (((x321%x322)%x323)-x324);

    if (t72 != 6743U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x325 = 3508LLU;
	uint64_t x327 = 207406581LLU;
	int16_t x328 = INT16_MAX;
	static uint64_t t73 = 285614LLU;

    t73 = (((x325%x326)%x327)-x328);

    if (t73 != 18446744073709522357LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x329 = 121U;
	static int64_t x331 = 204LL;
	static uint64_t x332 = 3801175LLU;
	static volatile uint64_t t74 = 144LLU;

    t74 = (((x329%x330)%x331)-x332);

    if (t74 != 18446744073705750441LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = -1;
	uint64_t x334 = 51331330940LLU;
	int32_t x336 = -55386;

    t75 = (((x333%x334)%x335)-x336);

    if (t75 != 55401LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x337 = INT64_MIN;
	uint16_t x338 = UINT16_MAX;
	volatile uint32_t x339 = 1058089U;
	int32_t x340 = INT32_MIN;
	int64_t t76 = 216LL;

    t76 = (((x337%x338)%x339)-x340);

    if (t76 != 2147450880LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x341 = 0LLU;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = UINT8_MAX;
	volatile uint64_t t77 = 6214LLU;

    t77 = (((x341%x342)%x343)-x344);

    if (t77 != 128LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x345 = UINT16_MAX;
	int8_t x348 = -56;
	volatile int32_t t78 = 961;

    t78 = (((x345%x346)%x347)-x348);

    if (t78 != 56) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x349 = 226209U;
	int64_t x350 = INT64_MIN;
	static int16_t x351 = -1;
	uint16_t x352 = 2969U;

    t79 = (((x349%x350)%x351)-x352);

    if (t79 != -2969LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x357 = INT16_MAX;
	uint16_t x358 = 386U;
	int16_t x360 = INT16_MIN;

    t80 = (((x357%x358)%x359)-x360);

    if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x361 = -7101;
	int32_t x362 = INT32_MIN;
	int16_t x364 = -1;
	int32_t t81 = -179062399;

    t81 = (((x361%x362)%x363)-x364);

    if (t81 != -32) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x367 = -5111592965760LL;
	int16_t x368 = -84;
	volatile uint64_t t82 = 1708647214958301LLU;

    t82 = (((x365%x366)%x367)-x368);

    if (t82 != 246LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x369 = INT16_MIN;
	uint64_t x370 = 5726451705458062504LLU;
	static volatile int8_t x372 = -1;
	static volatile uint64_t t83 = 169362072010061LLU;

    t83 = (((x369%x370)%x371)-x372);

    if (t83 != 1267388957335331337LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MIN;
	static int64_t x375 = INT64_MIN;
	volatile int64_t t84 = -833LL;

    t84 = (((x373%x374)%x375)-x376);

    if (t84 != -21LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x377 = 0;
	int16_t x378 = -1;
	volatile uint32_t x379 = 6720849U;
	int8_t x380 = -1;
	volatile uint32_t t85 = 469596U;

    t85 = (((x377%x378)%x379)-x380);

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x381 = 114U;
	static volatile int64_t x383 = INT64_MAX;
	volatile uint64_t x384 = 1142437LLU;

    t86 = (((x381%x382)%x383)-x384);

    if (t86 != 18446744073708409293LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x387 = 29;
	int8_t x388 = INT8_MIN;
	volatile int64_t t87 = 725LL;

    t87 = (((x385%x386)%x387)-x388);

    if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x389 = 52;
	volatile int32_t x390 = INT32_MAX;
	int64_t x391 = -219419LL;
	static uint8_t x392 = UINT8_MAX;
	static int64_t t88 = 64210LL;

    t88 = (((x389%x390)%x391)-x392);

    if (t88 != -203LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x393 = 130U;
	static uint8_t x394 = UINT8_MAX;
	volatile int32_t t89 = -12;

    t89 = (((x393%x394)%x395)-x396);

    if (t89 != -125) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x397 = 0U;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	int32_t x400 = -353300;

    t90 = (((x397%x398)%x399)-x400);

    if (t90 != 353300LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x401 = -1;
	int32_t x402 = INT32_MAX;
	static int32_t x404 = -59706;

    t91 = (((x401%x402)%x403)-x404);

    if (t91 != 59705) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x405 = -1;
	int16_t x407 = 57;
	static int64_t x408 = INT64_MAX;
	volatile int64_t t92 = INT64_MIN;

    t92 = (((x405%x406)%x407)-x408);

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x409 = 12;
	int32_t x410 = -66574;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t93 = 36405;

    t93 = (((x409%x410)%x411)-x412);

    if (t93 != 32780) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x422 = INT64_MIN;
	int8_t x423 = 13;
	int32_t x424 = -1;
	volatile int64_t t94 = 15LL;

    t94 = (((x421%x422)%x423)-x424);

    if (t94 != -7LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x425 = -201701349181LL;
	uint16_t x426 = 15633U;
	int32_t x427 = -125344;
	volatile uint64_t x428 = 7539275LLU;
	volatile uint64_t t95 = 1912LLU;

    t95 = (((x425%x426)%x427)-x428);

    if (t95 != 18446744073702006400LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x429 = -449741217;
	uint8_t x430 = 69U;
	uint64_t x432 = UINT64_MAX;
	uint64_t t96 = 108412391980361365LLU;

    t96 = (((x429%x430)%x431)-x432);

    if (t96 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x434 = -7271899959305LL;
	int8_t x436 = INT8_MIN;
	static volatile uint64_t t97 = 8492184925954105460LLU;

    t97 = (((x433%x434)%x435)-x436);

    if (t97 != 190LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x437 = INT32_MIN;
	int8_t x438 = INT8_MIN;
	int16_t x439 = -1;
	static int64_t x440 = 3281821771573790LL;

    t98 = (((x437%x438)%x439)-x440);

    if (t98 != -3281821771573790LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x445 = -894LL;
	int64_t x446 = INT64_MIN;
	uint32_t x448 = UINT32_MAX;
	volatile uint64_t t99 = 3873668291425LLU;

    t99 = (((x445%x446)%x447)-x448);

    if (t99 != 18446744069414583427LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x449 = UINT64_MAX;
	volatile uint64_t t100 = 56872918633413LLU;

    t100 = (((x449%x450)%x451)-x452);

    if (t100 != 5291155812684LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x453 = INT64_MIN;
	static int8_t x455 = INT8_MIN;
	int8_t x456 = -1;
	int64_t t101 = -8788872LL;

    t101 = (((x453%x454)%x455)-x456);

    if (t101 != -7LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x457 = UINT64_MAX;
	uint64_t x458 = 25554004LLU;
	volatile uint16_t x460 = 0U;
	static uint64_t t102 = 10306935501195237LLU;

    t102 = (((x457%x458)%x459)-x460);

    if (t102 != 12LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x461 = 1714684321LL;
	static uint8_t x462 = 64U;
	uint16_t x463 = 28491U;
	int8_t x464 = INT8_MAX;
	volatile int64_t t103 = -5455LL;

    t103 = (((x461%x462)%x463)-x464);

    if (t103 != -94LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x465 = 5LL;
	int64_t x467 = -1LL;
	uint64_t x468 = UINT64_MAX;
	uint64_t t104 = 698656726733346LLU;

    t104 = (((x465%x466)%x467)-x468);

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x473 = -1;
	uint32_t x474 = 22289U;
	volatile int8_t x475 = INT8_MIN;
	volatile uint32_t x476 = 1497186U;
	uint32_t t105 = 1547912U;

    t105 = (((x473%x474)%x475)-x476);

    if (t105 != 4293480839U) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x477 = 3U;
	uint32_t x479 = 6383015U;
	volatile int8_t x480 = INT8_MAX;
	uint64_t t106 = 58LLU;

    t106 = (((x477%x478)%x479)-x480);

    if (t106 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x481 = -1;
	int32_t x482 = -1;
	uint32_t x483 = 189U;
	volatile uint32_t t107 = 1018U;

    t107 = (((x481%x482)%x483)-x484);

    if (t107 != 23U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x490 = UINT8_MAX;
	int8_t x491 = INT8_MAX;
	volatile int16_t x492 = -9;

    t108 = (((x489%x490)%x491)-x492);

    if (t108 != 8) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint16_t x493 = UINT16_MAX;
	uint64_t x494 = UINT64_MAX;
	static uint8_t x495 = UINT8_MAX;
	static int8_t x496 = INT8_MIN;
	uint64_t t109 = 2815704062LLU;

    t109 = (((x493%x494)%x495)-x496);

    if (t109 != 128LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x497 = 17U;
	volatile int16_t x499 = 2;
	uint8_t x500 = 4U;
	int64_t t110 = -10504LL;

    t110 = (((x497%x498)%x499)-x500);

    if (t110 != -3LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x501 = -1;
	uint64_t x502 = 895295685269084LLU;
	int8_t x503 = -1;
	uint16_t x504 = 427U;
	volatile uint64_t t111 = 891736454175149LLU;

    t111 = (((x501%x502)%x503)-x504);

    if (t111 != 71774425344452LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x505 = 116U;
	int64_t x506 = INT64_MIN;
	int16_t x507 = -1;

    t112 = (((x505%x506)%x507)-x508);

    if (t112 != -2147483647LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x510 = -6564;
	int8_t x512 = INT8_MIN;
	int32_t t113 = 28558;

    t113 = (((x509%x510)%x511)-x512);

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x513 = 2990;
	uint32_t x514 = 258U;
	volatile int16_t x516 = 78;
	uint32_t t114 = 126259001U;

    t114 = (((x513%x514)%x515)-x516);

    if (t114 != 74U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x517 = INT64_MIN;
	uint64_t x519 = 4296941120568220663LLU;
	uint8_t x520 = 16U;
	volatile uint64_t t115 = 1126871449LLU;

    t115 = (((x517%x518)%x519)-x520);

    if (t115 != 2252476LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x521 = -1;
	static uint32_t x522 = UINT32_MAX;
	int8_t x523 = -3;
	int16_t x524 = INT16_MIN;

    t116 = (((x521%x522)%x523)-x524);

    if (t116 != 32768U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x525 = -1;
	volatile int16_t x526 = INT16_MAX;
	static int8_t x527 = -8;
	volatile int32_t t117 = INT32_MIN;

    t117 = (((x525%x526)%x527)-x528);

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x529 = 715;
	int32_t x530 = INT32_MAX;
	static uint8_t x531 = UINT8_MAX;
	static uint64_t x532 = 20259985090LLU;

    t118 = (((x529%x530)%x531)-x532);

    if (t118 != 18446744053449566731LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x533 = -1;
	uint8_t x534 = 7U;
	volatile uint32_t x535 = 8U;
	int64_t x536 = -189959342609LL;

    t119 = (((x533%x534)%x535)-x536);

    if (t119 != 189959342616LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x538 = -1;
	volatile int16_t x539 = INT16_MIN;
	uint64_t x540 = 1195447547952LLU;

    t120 = (((x537%x538)%x539)-x540);

    if (t120 != 18446742878262003664LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x543 = INT16_MIN;
	int32_t x544 = INT32_MIN;
	volatile int32_t t121 = -15;

    t121 = (((x541%x542)%x543)-x544);

    if (t121 != 2147483593) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x545 = 3;
	int32_t x546 = INT32_MIN;
	int8_t x547 = INT8_MIN;
	uint16_t x548 = UINT16_MAX;
	volatile int32_t t122 = -1;

    t122 = (((x545%x546)%x547)-x548);

    if (t122 != -65532) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x550 = INT16_MAX;
	int8_t x551 = INT8_MAX;
	volatile int32_t t123 = 6;

    t123 = (((x549%x550)%x551)-x552);

    if (t123 != -257) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x553 = 15;
	int16_t x554 = INT16_MAX;
	static int64_t x555 = -399383LL;
	int32_t x556 = 622930638;
	int64_t t124 = -7547137422LL;

    t124 = (((x553%x554)%x555)-x556);

    if (t124 != -622930623LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x557 = INT64_MAX;
	int64_t x559 = 1293LL;
	static volatile int32_t x560 = INT32_MIN;

    t125 = (((x557%x558)%x559)-x560);

    if (t125 != 2147483655LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x564 = -1;
	uint64_t t126 = 383LLU;

    t126 = (((x561%x562)%x563)-x564);

    if (t126 != 468848LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x565 = UINT16_MAX;
	volatile int8_t x566 = INT8_MIN;
	int8_t x567 = INT8_MIN;
	uint32_t x568 = UINT32_MAX;
	static uint32_t t127 = 174546326U;

    t127 = (((x565%x566)%x567)-x568);

    if (t127 != 128U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x569 = -1;
	uint16_t x570 = 1U;
	int32_t x571 = -1039107;
	int8_t x572 = -1;
	int32_t t128 = -11516816;

    t128 = (((x569%x570)%x571)-x572);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x573 = -1LL;
	int32_t x574 = -47593;
	uint8_t x575 = UINT8_MAX;
	int8_t x576 = INT8_MAX;
	int64_t t129 = -62310LL;

    t129 = (((x573%x574)%x575)-x576);

    if (t129 != -128LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x577 = 18191LL;
	volatile int32_t x578 = INT32_MIN;
	int8_t x580 = -26;
	static int64_t t130 = -530860663182005LL;

    t130 = (((x577%x578)%x579)-x580);

    if (t130 != 18217LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x581 = UINT32_MAX;
	int32_t x583 = INT32_MIN;
	int32_t x584 = INT32_MIN;
	volatile uint64_t t131 = 2362LLU;

    t131 = (((x581%x582)%x583)-x584);

    if (t131 != 6442450943LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x585 = 0;
	static int8_t x586 = -1;
	volatile uint32_t x587 = 166624960U;
	uint64_t x588 = 3LLU;
	volatile uint64_t t132 = 185LLU;

    t132 = (((x585%x586)%x587)-x588);

    if (t132 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x590 = INT8_MAX;
	static uint16_t x592 = UINT16_MAX;
	volatile uint64_t t133 = 113638180LLU;

    t133 = (((x589%x590)%x591)-x592);

    if (t133 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x593 = UINT16_MAX;
	int64_t x594 = INT64_MIN;
	static int32_t x595 = 23721;
	uint32_t x596 = UINT32_MAX;
	static volatile int64_t t134 = -617LL;

    t134 = (((x593%x594)%x595)-x596);

    if (t134 != -4294949202LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x598 = INT8_MAX;
	int32_t x599 = INT32_MIN;
	volatile int64_t x600 = -1LL;

    t135 = (((x597%x598)%x599)-x600);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x601 = -8;
	int64_t x602 = 3605997910463481588LL;
	int32_t x603 = INT32_MIN;
	static int8_t x604 = -1;

    t136 = (((x601%x602)%x603)-x604);

    if (t136 != -7LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x605 = -1;
	int64_t x606 = INT64_MIN;
	volatile int8_t x607 = INT8_MIN;
	int16_t x608 = INT16_MIN;

    t137 = (((x605%x606)%x607)-x608);

    if (t137 != 32767LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = INT8_MIN;
	int64_t x610 = -1LL;
	int64_t x611 = INT64_MIN;
	int32_t x612 = INT32_MIN;
	volatile int64_t t138 = 1242806LL;

    t138 = (((x609%x610)%x611)-x612);

    if (t138 != 2147483648LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x613 = INT8_MAX;
	int32_t x614 = -1;
	uint8_t x615 = UINT8_MAX;
	uint32_t x616 = 56684U;
	uint32_t t139 = 990662U;

    t139 = (((x613%x614)%x615)-x616);

    if (t139 != 4294910612U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x621 = 1U;
	int32_t x622 = INT32_MAX;
	volatile int64_t x623 = INT64_MIN;
	int16_t x624 = INT16_MIN;

    t140 = (((x621%x622)%x623)-x624);

    if (t140 != 32769LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x625 = UINT16_MAX;
	int16_t x626 = -1;
	volatile uint16_t x627 = 1117U;
	int16_t x628 = INT16_MIN;
	int32_t t141 = -918;

    t141 = (((x625%x626)%x627)-x628);

    if (t141 != 32768) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x629 = 7267U;
	int32_t x630 = -1;
	static int32_t x631 = INT32_MAX;
	int32_t t142 = -29824;

    t142 = (((x629%x630)%x631)-x632);

    if (t142 != 32768) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x633 = INT8_MAX;
	static int64_t x634 = -1LL;
	int8_t x635 = INT8_MIN;
	int32_t x636 = INT32_MAX;
	int64_t t143 = -244LL;

    t143 = (((x633%x634)%x635)-x636);

    if (t143 != -2147483647LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x637 = -1808528LL;
	int16_t x639 = INT16_MIN;
	int8_t x640 = 23;
	int64_t t144 = -1599214067988749643LL;

    t144 = (((x637%x638)%x639)-x640);

    if (t144 != -91LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x642 = -1;
	volatile uint16_t x644 = UINT16_MAX;
	volatile uint32_t t145 = 193438153U;

    t145 = (((x641%x642)%x643)-x644);

    if (t145 != 4294901761U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x645 = -1LL;
	volatile int64_t x647 = INT64_MIN;
	int64_t x648 = 279780390956556LL;
	volatile int64_t t146 = 91878LL;

    t146 = (((x645%x646)%x647)-x648);

    if (t146 != -279780390956557LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x649 = 49;
	int8_t x650 = INT8_MIN;
	volatile uint16_t x651 = 143U;
	int8_t x652 = INT8_MAX;
	volatile int32_t t147 = -1272852;

    t147 = (((x649%x650)%x651)-x652);

    if (t147 != -78) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x653 = INT64_MAX;
	static uint32_t x654 = 604310U;
	int64_t x655 = -1LL;
	static uint32_t x656 = 468U;
	volatile int64_t t148 = 540691329157861979LL;

    t148 = (((x653%x654)%x655)-x656);

    if (t148 != -468LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x657 = UINT32_MAX;
	int64_t x658 = -1LL;
	uint64_t x659 = 5311501LLU;
	uint32_t x660 = UINT32_MAX;

    t149 = (((x657%x658)%x659)-x660);

    if (t149 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x661 = -165958LL;
	volatile int16_t x662 = -4692;
	volatile int64_t x663 = INT64_MAX;
	volatile int64_t t150 = -13148366074LL;

    t150 = (((x661%x662)%x663)-x664);

    if (t150 != 31030LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x665 = -1;
	int64_t x666 = INT64_MAX;
	int8_t x668 = -1;

    t151 = (((x665%x666)%x667)-x668);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x669 = 6U;
	int8_t x670 = INT8_MIN;
	int8_t x671 = INT8_MIN;
	int32_t x672 = -33;
	int32_t t152 = -7;

    t152 = (((x669%x670)%x671)-x672);

    if (t152 != 39) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x673 = UINT64_MAX;
	int16_t x674 = -1;
	static int16_t x676 = INT16_MIN;
	uint64_t t153 = 74645LLU;

    t153 = (((x673%x674)%x675)-x676);

    if (t153 != 32768LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x677 = 33111LLU;
	volatile int8_t x678 = INT8_MAX;
	int16_t x679 = 29;
	int16_t x680 = -1;
	volatile uint64_t t154 = 6963983731LLU;

    t154 = (((x677%x678)%x679)-x680);

    if (t154 != 5LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x681 = UINT16_MAX;
	int64_t x683 = -44840511074LL;
	int64_t x684 = 1204LL;
	static int64_t t155 = 3LL;

    t155 = (((x681%x682)%x683)-x684);

    if (t155 != 64331LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x685 = INT8_MIN;
	static uint16_t x687 = 7925U;
	int64_t x688 = INT64_MAX;
	volatile int64_t t156 = -22178716675742LL;

    t156 = (((x685%x686)%x687)-x688);

    if (t156 != -9223372036854770314LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x689 = INT16_MIN;
	uint8_t x690 = UINT8_MAX;
	int8_t x691 = INT8_MAX;
	volatile int16_t x692 = -1;

    t157 = (((x689%x690)%x691)-x692);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x695 = INT64_MIN;
	int8_t x696 = INT8_MIN;
	int64_t t158 = 152163235LL;

    t158 = (((x693%x694)%x695)-x696);

    if (t158 != 22909LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x697 = INT32_MIN;
	int8_t x698 = INT8_MAX;
	int8_t x699 = -12;
	uint32_t x700 = 60U;
	uint32_t t159 = 2615430U;

    t159 = (((x697%x698)%x699)-x700);

    if (t159 != 4294967228U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MIN;
	static int16_t x703 = 21;
	int32_t x704 = INT32_MAX;
	int32_t t160 = -3730;

    t160 = (((x701%x702)%x703)-x704);

    if (t160 != -2147483647) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x705 = 43486619087LL;
	int8_t x707 = 11;
	uint64_t x708 = UINT64_MAX;
	uint64_t t161 = 2847295LLU;

    t161 = (((x705%x706)%x707)-x708);

    if (t161 != 11LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x709 = 1201370737144LLU;
	int32_t x710 = 338;
	static int8_t x711 = 21;
	static volatile uint64_t t162 = 1022LLU;

    t162 = (((x709%x710)%x711)-x712);

    if (t162 != 2147483653LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x713 = -1LL;
	int16_t x715 = -1;
	int8_t x716 = -4;
	static int64_t t163 = -544323226604385201LL;

    t163 = (((x713%x714)%x715)-x716);

    if (t163 != 4LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x717 = INT16_MAX;
	uint32_t x718 = 429090439U;
	static int32_t x719 = INT32_MIN;
	uint8_t x720 = UINT8_MAX;
	static uint32_t t164 = 2U;

    t164 = (((x717%x718)%x719)-x720);

    if (t164 != 32512U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x721 = 5817U;
	int8_t x722 = INT8_MIN;
	int8_t x723 = INT8_MIN;
	static int64_t x724 = -1LL;
	static int64_t t165 = -117376041986686002LL;

    t165 = (((x721%x722)%x723)-x724);

    if (t165 != 58LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x728 = 4114307684227LL;
	volatile int64_t t166 = -1882LL;

    t166 = (((x725%x726)%x727)-x728);

    if (t166 != -4114307684227LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x729 = -7;
	uint32_t x732 = UINT32_MAX;
	int64_t t167 = -90471650913LL;

    t167 = (((x729%x730)%x731)-x732);

    if (t167 != -4294967302LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x733 = INT8_MIN;
	int8_t x734 = INT8_MIN;
	static volatile uint32_t x735 = 2U;
	uint16_t x736 = 2U;

    t168 = (((x733%x734)%x735)-x736);

    if (t168 != 4294967294U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x737 = INT32_MAX;
	int8_t x738 = -1;
	static int64_t x740 = INT64_MIN;
	uint64_t t169 = 112873045316991980LLU;

    t169 = (((x737%x738)%x739)-x740);

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x741 = -1;
	int16_t x742 = -1;
	int64_t x743 = INT64_MIN;
	int64_t x744 = -102078903LL;
	volatile int64_t t170 = 1000075858761912LL;

    t170 = (((x741%x742)%x743)-x744);

    if (t170 != 102078903LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x745 = -1;
	int32_t x747 = 14587368;
	uint64_t x748 = 46789LLU;

    t171 = (((x745%x746)%x747)-x748);

    if (t171 != 18446744073709504826LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x749 = 3;
	int64_t x750 = INT64_MIN;
	int8_t x751 = 23;
	static uint16_t x752 = 395U;
	int64_t t172 = 0LL;

    t172 = (((x749%x750)%x751)-x752);

    if (t172 != -392LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x753 = -1;
	int8_t x754 = INT8_MAX;
	int8_t x755 = 1;
	uint32_t x756 = UINT32_MAX;

    t173 = (((x753%x754)%x755)-x756);

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x758 = 11U;
	uint8_t x759 = 11U;
	int32_t x760 = INT32_MAX;

    t174 = (((x757%x758)%x759)-x760);

    if (t174 != -2147483639) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x761 = 3990916129381520LLU;
	int16_t x762 = INT16_MIN;
	volatile int16_t x764 = INT16_MAX;
	uint64_t t175 = 10686772LLU;

    t175 = (((x761%x762)%x763)-x764);

    if (t175 != 3990916129348753LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x769 = 4142U;
	volatile uint64_t x770 = UINT64_MAX;
	static volatile int64_t x771 = INT64_MIN;
	int8_t x772 = -1;

    t176 = (((x769%x770)%x771)-x772);

    if (t176 != 4143LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x773 = INT16_MIN;
	uint8_t x774 = UINT8_MAX;
	uint32_t x776 = 211865342U;
	int64_t t177 = 0LL;

    t177 = (((x773%x774)%x775)-x776);

    if (t177 != -211865470LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x777 = -18;
	uint16_t x778 = 7U;
	int16_t x779 = INT16_MIN;
	static volatile int32_t x780 = -17569876;
	static int32_t t178 = 267376997;

    t178 = (((x777%x778)%x779)-x780);

    if (t178 != 17569872) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x781 = -1;
	uint16_t x783 = UINT16_MAX;
	static uint64_t t179 = 221415LLU;

    t179 = (((x781%x782)%x783)-x784);

    if (t179 != 18446744073709547674LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x785 = -1;
	static int16_t x787 = 1;
	static uint64_t x788 = 13876LLU;

    t180 = (((x785%x786)%x787)-x788);

    if (t180 != 18446744073709537740LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x789 = -1;
	volatile int8_t x790 = -19;
	static int64_t x792 = INT64_MIN;
	volatile int64_t t181 = INT64_MAX;

    t181 = (((x789%x790)%x791)-x792);

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x793 = -1;
	int32_t x794 = -80866;
	uint32_t x795 = 1402U;
	volatile int64_t x796 = INT64_MAX;
	volatile int64_t t182 = 0LL;

    t182 = (((x793%x794)%x795)-x796);

    if (t182 != -9223372036854775226LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x798 = -1LL;
	uint32_t x799 = 1U;
	uint16_t x800 = 40U;
	volatile int64_t t183 = -12088181854309140LL;

    t183 = (((x797%x798)%x799)-x800);

    if (t183 != -40LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x801 = 19U;
	volatile int16_t x802 = INT16_MIN;
	static int32_t x804 = INT32_MAX;
	static volatile uint64_t t184 = 112LLU;

    t184 = (((x801%x802)%x803)-x804);

    if (t184 != 18446744071562067988LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x807 = UINT8_MAX;
	uint16_t x808 = 5237U;
	static volatile uint64_t t185 = 16281829LLU;

    t185 = (((x805%x806)%x807)-x808);

    if (t185 != 18446744073709546385LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x809 = -45LL;
	static volatile int64_t x810 = -1LL;
	static int32_t x811 = INT32_MIN;
	int8_t x812 = INT8_MAX;
	static volatile int64_t t186 = 47159394238974LL;

    t186 = (((x809%x810)%x811)-x812);

    if (t186 != -127LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x813 = INT16_MIN;
	int8_t x814 = -1;
	int16_t x815 = 818;
	uint32_t x816 = 228732U;
	uint32_t t187 = 38230U;

    t187 = (((x813%x814)%x815)-x816);

    if (t187 != 4294738564U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x821 = 233047;
	int64_t x822 = INT64_MIN;
	int8_t x823 = INT8_MAX;
	int64_t x824 = -1LL;

    t188 = (((x821%x822)%x823)-x824);

    if (t188 != 3LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x826 = -1;
	int8_t x827 = INT8_MIN;
	int64_t x828 = -6390596765LL;

    t189 = (((x825%x826)%x827)-x828);

    if (t189 != 6390596765LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x829 = -4432814397207LL;
	int16_t x830 = -1;
	uint32_t x831 = 46026U;
	volatile int32_t x832 = 495529649;
	volatile int64_t t190 = -15050094049170120LL;

    t190 = (((x829%x830)%x831)-x832);

    if (t190 != -495529649LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x833 = INT32_MIN;
	static volatile int16_t x834 = 24;
	uint8_t x835 = UINT8_MAX;
	uint16_t x836 = 14394U;
	volatile int32_t t191 = -8807;

    t191 = (((x833%x834)%x835)-x836);

    if (t191 != -14402) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x837 = INT8_MIN;
	uint16_t x838 = 265U;
	uint8_t x839 = 18U;
	static volatile int32_t t192 = 246;

    t192 = (((x837%x838)%x839)-x840);

    if (t192 != -8) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x841 = INT16_MIN;
	uint64_t x842 = 174674825LLU;
	int64_t x843 = INT64_MIN;
	int16_t x844 = -54;
	volatile uint64_t t193 = 434057LLU;

    t193 = (((x841%x842)%x843)-x844);

    if (t193 != 18612877LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x845 = INT32_MAX;
	uint64_t x846 = 8082603606743328414LLU;
	static int16_t x848 = -35;
	volatile uint64_t t194 = 305039491LLU;

    t194 = (((x845%x846)%x847)-x848);

    if (t194 != 35LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x850 = -9;
	static int16_t x851 = INT16_MIN;
	static int16_t x852 = -3593;
	volatile int32_t t195 = -799;

    t195 = (((x849%x850)%x851)-x852);

    if (t195 != 3599) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x858 = 3097;
	int64_t x859 = -108LL;
	static int32_t x860 = INT32_MIN;
	uint64_t t196 = 1328781LLU;

    t196 = (((x857%x858)%x859)-x860);

    if (t196 != 2147484315LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x862 = 3;
	uint64_t t197 = 1188295914521987320LLU;

    t197 = (((x861%x862)%x863)-x864);

    if (t197 != 18446744073503305936LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x866 = INT64_MAX;
	static int16_t x867 = -49;
	int64_t t198 = 54744023LL;

    t198 = (((x865%x866)%x867)-x868);

    if (t198 != 135LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x869 = 13562070U;
	int32_t x871 = INT32_MIN;
	uint16_t x872 = 1U;

    t199 = (((x869%x870)%x871)-x872);

    if (t199 != 3U) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

