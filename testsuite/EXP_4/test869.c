
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

int64_t x2 = INT64_MIN;
volatile int16_t x3 = INT16_MAX;
int8_t x4 = -1;
uint16_t x5 = UINT16_MAX;
int64_t x6 = INT64_MAX;
volatile int32_t t1 = -2518;
static volatile int16_t x11 = -1;
uint64_t x15 = 21266270794992166LLU;
int32_t x17 = -6;
uint64_t x25 = UINT64_MAX;
volatile int32_t t6 = 21;
static uint8_t x39 = UINT8_MAX;
int32_t t8 = -111809025;
uint32_t x41 = UINT32_MAX;
uint8_t x42 = 5U;
static int8_t x43 = -1;
int32_t x45 = 354851537;
uint32_t x47 = UINT32_MAX;
static uint32_t x49 = UINT32_MAX;
static volatile int32_t x52 = INT32_MIN;
int8_t x59 = INT8_MAX;
uint8_t x60 = UINT8_MAX;
volatile uint8_t x66 = UINT8_MAX;
volatile int32_t t16 = -1254518;
int32_t x77 = INT32_MIN;
static uint16_t x78 = UINT16_MAX;
int32_t t17 = -4605;
static int64_t t18 = -952113547835LL;
static volatile uint16_t x96 = 22916U;
volatile int32_t t22 = 1;
int16_t x107 = 1;
uint32_t x132 = 83035474U;
volatile int32_t t28 = 6342;
int64_t x143 = 122839042LL;
uint64_t x145 = 3733LLU;
int16_t x147 = INT16_MIN;
int32_t x153 = 338;
uint64_t x158 = 100547372637125LLU;
int8_t x159 = INT8_MIN;
uint16_t x168 = 933U;
volatile int32_t t38 = 461136953;
uint8_t x181 = 10U;
static int16_t x189 = INT16_MIN;
int8_t x190 = -2;
uint64_t x193 = UINT64_MAX;
int16_t x209 = 906;
int16_t x210 = -4;
int64_t x211 = INT64_MIN;
volatile int32_t t44 = 58660740;
volatile int16_t x217 = INT16_MIN;
int32_t t45 = 69;
volatile int32_t x222 = -1;
uint32_t x227 = 99239368U;
int16_t x235 = -33;
static int64_t x236 = 9253402715LL;
int8_t x239 = -1;
uint32_t x244 = 189U;
int16_t x248 = INT16_MAX;
static volatile int64_t t51 = -141695057337147147LL;
static int16_t x250 = INT16_MAX;
int16_t x253 = 0;
volatile int32_t x255 = 8355;
int32_t t53 = 160907;
int32_t x261 = INT32_MIN;
int8_t x263 = -1;
volatile int32_t x264 = INT32_MIN;
uint64_t x265 = 347414601081939LLU;
static uint8_t x268 = UINT8_MAX;
volatile uint64_t t56 = 3017LLU;
int64_t x277 = -2826701539LL;
int16_t x278 = -1;
static volatile int32_t x283 = INT32_MIN;
int8_t x284 = INT8_MAX;
volatile int16_t x286 = INT16_MIN;
int8_t x292 = -1;
volatile int32_t x293 = INT32_MIN;
volatile int32_t x313 = INT32_MIN;
uint32_t t68 = 1695017U;
static uint64_t x322 = 6818457189212560469LLU;
int8_t x323 = INT8_MIN;
static int32_t t69 = -13;
int8_t x326 = INT8_MIN;
volatile int8_t x328 = INT8_MAX;
uint8_t x332 = 7U;
int32_t x333 = INT32_MIN;
int16_t x341 = -2134;
int32_t t76 = 17029;
static int64_t x370 = -1LL;
int64_t x372 = -338LL;
volatile uint64_t x373 = 3LLU;
static int64_t x376 = -1LL;
int16_t x377 = INT16_MIN;
int16_t x378 = -1;
int16_t x379 = -64;
uint16_t x382 = UINT16_MAX;
uint16_t x385 = UINT16_MAX;
static int16_t x399 = -2024;
int64_t x400 = -16821LL;
int32_t t88 = -3263496;
static uint16_t x401 = UINT16_MAX;
uint16_t x402 = 19625U;
volatile int32_t t89 = 126928;
volatile uint64_t t92 = 3LLU;
int64_t x419 = -1LL;
static volatile uint32_t x423 = 9U;
static uint64_t x425 = 315630621731LLU;
static int8_t x428 = -14;
static int16_t x433 = INT16_MIN;
volatile int32_t x439 = INT32_MIN;
int32_t x446 = 217;
uint16_t x452 = 1781U;
int32_t t101 = 349107100;
uint16_t x457 = 426U;
volatile int16_t x458 = 42;
int64_t x466 = INT64_MAX;
uint32_t x469 = 505711U;
volatile uint32_t t106 = 6991067U;
int32_t x473 = 463427;
static uint16_t x474 = 482U;
static volatile int32_t t108 = INT32_MAX;
volatile int32_t x485 = -1;
int32_t x486 = -6476502;
volatile int32_t t112 = -57288584;
int8_t x499 = 2;
volatile int32_t t113 = -59;
int64_t x505 = -1LL;
static int64_t t115 = -63LL;
int16_t x511 = -1;
int16_t x516 = INT16_MAX;
int64_t t117 = -28LL;
volatile uint8_t x518 = 0U;
int32_t x523 = 7;
int64_t x525 = INT64_MIN;
int16_t x526 = INT16_MIN;
static int8_t x530 = 26;
uint64_t x532 = 59370LLU;
int8_t x534 = INT8_MAX;
int8_t x536 = 1;
volatile uint32_t x537 = UINT32_MAX;
uint16_t x538 = 27772U;
int32_t x541 = -1;
int8_t x542 = -57;
volatile int32_t x545 = INT32_MIN;
volatile int32_t t125 = -3;
int8_t x549 = INT8_MIN;
static uint64_t x555 = 44180303915597733LLU;
volatile int8_t x564 = -1;
uint16_t x565 = 19131U;
int8_t x568 = 47;
int32_t x572 = INT32_MIN;
static uint16_t x578 = 34U;
int16_t x580 = INT16_MIN;
uint32_t t133 = 56265277U;
volatile int16_t x588 = INT16_MIN;
int16_t x592 = -3840;
static int8_t x593 = -1;
uint8_t x594 = UINT8_MAX;
uint32_t x595 = 107U;
int8_t x603 = -1;
static uint64_t t139 = 132951844388970247LLU;
int16_t x611 = INT16_MIN;
int32_t t142 = 1906;
static uint8_t x617 = 1U;
static int32_t x618 = INT32_MIN;
static int64_t x620 = INT64_MAX;
int64_t x622 = INT64_MAX;
static uint32_t x626 = 8U;
int64_t x631 = 414013306169LL;
int16_t x632 = INT16_MIN;
int32_t x634 = -1;
static uint8_t x636 = UINT8_MAX;
static uint16_t x639 = 1345U;
uint8_t x647 = 4U;
int32_t t150 = 10553;
int8_t x650 = INT8_MIN;
static int8_t x659 = INT8_MIN;
uint8_t x668 = UINT8_MAX;
int32_t t154 = -129119;
volatile uint64_t x670 = UINT64_MAX;
uint8_t x673 = 83U;
static int16_t x675 = INT16_MAX;
int16_t x677 = INT16_MAX;
static int64_t x679 = -4133154498314LL;
int8_t x687 = 0;
uint32_t x701 = 4U;
static int16_t x702 = INT16_MIN;
int32_t x704 = INT32_MIN;
int64_t x710 = -50752801492LL;
uint64_t x713 = UINT64_MAX;
int8_t x716 = INT8_MAX;
volatile uint64_t t164 = 301LLU;
static volatile uint16_t x719 = 50U;
static volatile uint64_t x720 = 72858658707277LLU;
int64_t x725 = INT64_MIN;
volatile int32_t x730 = -3;
int32_t x731 = -1;
int32_t t169 = -1017750987;
int32_t x739 = 11156843;
int8_t x740 = -1;
int64_t t170 = 289LL;
int32_t x747 = 1534;
uint8_t x750 = UINT8_MAX;
uint8_t x751 = 86U;
volatile uint64_t t173 = 70339111415LLU;
volatile int32_t t174 = 17;
int64_t x759 = 94LL;
volatile int32_t t175 = 30;
int32_t x764 = INT32_MAX;
static int16_t x771 = INT16_MAX;
int16_t x772 = INT16_MIN;
volatile int16_t x773 = 0;
volatile uint8_t x775 = 47U;
int8_t x777 = -1;
static int64_t x779 = -30952365547135646LL;
int32_t x780 = INT32_MIN;
int32_t x781 = INT32_MIN;
int8_t x786 = INT8_MIN;
uint32_t x802 = 0U;
volatile uint32_t x804 = 2U;
static int32_t x806 = INT32_MAX;
static int8_t x814 = INT8_MAX;
uint8_t x815 = 5U;
uint32_t t189 = 3U;
uint64_t x825 = UINT64_MAX;
int32_t x826 = -1;
int64_t x834 = INT64_MIN;
int16_t x850 = INT16_MAX;


void f0(void) {
    	uint8_t x1 = 25U;
	volatile int32_t t0 = 207;

    t0 = (x1+(x2!=(x3%x4)));

    if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = -1;
	int8_t x8 = INT8_MAX;

    t1 = (x5+(x6!=(x7%x8)));

    if (t1 != 65536) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	volatile uint32_t x10 = 240U;
	uint32_t x12 = 51635U;
	uint32_t t2 = 6066U;

    t2 = (x9+(x10!=(x11%x12)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 42U;
	int64_t x14 = INT64_MIN;
	uint32_t x16 = 1U;
	static int32_t t3 = -176992334;

    t3 = (x13+(x14!=(x15%x16)));

    if (t3 != 43) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -1LL;
	int64_t x19 = 354724125421266LL;
	static volatile int8_t x20 = 1;
	static volatile int32_t t4 = 3243421;

    t4 = (x17+(x18!=(x19%x20)));

    if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x26 = UINT8_MAX;
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = 10U;
	uint64_t t5 = 773889LLU;

    t5 = (x25+(x26!=(x27%x28)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x29 = 102U;
	int8_t x30 = INT8_MIN;
	volatile int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MIN;

    t6 = (x29+(x30!=(x31%x32)));

    if (t6 != 103) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -12;
	int8_t x34 = -1;
	volatile int8_t x35 = INT8_MIN;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t7 = 1574;

    t7 = (x33+(x34!=(x35%x36)));

    if (t7 != -11) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x37 = -1;
	static uint64_t x38 = 2424LLU;
	uint64_t x40 = 495LLU;

    t8 = (x37+(x38!=(x39%x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x44 = 15U;
	volatile uint32_t t9 = 7U;

    t9 = (x41+(x42!=(x43%x44)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x46 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t10 = -7121;

    t10 = (x45+(x46!=(x47%x48)));

    if (t10 != 354851538) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x50 = INT32_MAX;
	static uint8_t x51 = 53U;
	static uint32_t t11 = 66223U;

    t11 = (x49+(x50!=(x51%x52)));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x53 = UINT16_MAX;
	int32_t x54 = INT32_MIN;
	volatile uint64_t x55 = 1LLU;
	static int32_t x56 = -8782;
	int32_t t12 = 18311;

    t12 = (x53+(x54!=(x55%x56)));

    if (t12 != 65536) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = UINT32_MAX;
	int16_t x58 = INT16_MIN;
	volatile uint32_t t13 = 18U;

    t13 = (x57+(x58!=(x59%x60)));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	volatile int32_t x62 = INT32_MAX;
	static volatile int8_t x63 = INT8_MIN;
	volatile int32_t x64 = -1;
	int32_t t14 = 272976;

    t14 = (x61+(x62!=(x63%x64)));

    if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = INT32_MIN;
	int32_t x67 = INT32_MAX;
	uint64_t x68 = UINT64_MAX;
	static int32_t t15 = 195273;

    t15 = (x65+(x66!=(x67%x68)));

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x73 = UINT8_MAX;
	volatile int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MAX;
	static uint8_t x76 = 4U;

    t16 = (x73+(x74!=(x75%x76)));

    if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x79 = INT64_MIN;
	uint16_t x80 = 1U;

    t17 = (x77+(x78!=(x79%x80)));

    if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -1LL;
	uint16_t x82 = 0U;
	uint16_t x83 = 13U;
	volatile uint16_t x84 = UINT16_MAX;

    t18 = (x81+(x82!=(x83%x84)));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 0;
	int8_t x86 = -15;
	volatile int16_t x87 = INT16_MIN;
	volatile int8_t x88 = -2;
	int32_t t19 = -184608947;

    t19 = (x85+(x86!=(x87%x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x89 = INT64_MIN;
	static int8_t x90 = 60;
	uint16_t x91 = 17U;
	static uint16_t x92 = 213U;
	volatile int64_t t20 = -2297450649LL;

    t20 = (x89+(x90!=(x91%x92)));

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = UINT16_MAX;
	int64_t x94 = -68702164757501LL;
	volatile uint8_t x95 = 1U;
	static int32_t t21 = 49710381;

    t21 = (x93+(x94!=(x95%x96)));

    if (t21 != 65536) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MAX;
	static int64_t x98 = INT64_MAX;
	int8_t x99 = INT8_MIN;
	int8_t x100 = -12;

    t22 = (x97+(x98!=(x99%x100)));

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	int8_t x103 = -1;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t23 = -5211488;

    t23 = (x101+(x102!=(x103%x104)));

    if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x105 = INT16_MIN;
	uint16_t x106 = 531U;
	volatile int8_t x108 = INT8_MIN;
	volatile int32_t t24 = -1;

    t24 = (x105+(x106!=(x107%x108)));

    if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MIN;
	uint8_t x111 = 0U;
	int32_t x112 = -1;
	volatile int64_t t25 = 584687LL;

    t25 = (x109+(x110!=(x111%x112)));

    if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x113 = -67971281LL;
	int16_t x114 = 7;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = 40U;
	int64_t t26 = -30837075439360LL;

    t26 = (x113+(x114!=(x115%x116)));

    if (t26 != -67971280LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x125 = 0U;
	int16_t x126 = INT16_MIN;
	static uint16_t x127 = UINT16_MAX;
	uint16_t x128 = UINT16_MAX;
	int32_t t27 = -487892628;

    t27 = (x125+(x126!=(x127%x128)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MIN;

    t28 = (x129+(x130!=(x131%x132)));

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x141 = -1LL;
	uint8_t x142 = 15U;
	uint32_t x144 = 818979883U;
	int64_t t29 = -2088451308938560LL;

    t29 = (x141+(x142!=(x143%x144)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x146 = INT64_MIN;
	int32_t x148 = 867;
	volatile uint64_t t30 = 9LLU;

    t30 = (x145+(x146!=(x147%x148)));

    if (t30 != 3734LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = 7057U;
	int64_t x150 = INT64_MAX;
	uint64_t x151 = 1758292038393909560LLU;
	uint16_t x152 = 11832U;
	volatile uint32_t t31 = 1183537747U;

    t31 = (x149+(x150!=(x151%x152)));

    if (t31 != 7058U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x154 = INT64_MIN;
	static uint16_t x155 = 66U;
	uint16_t x156 = 7U;
	int32_t t32 = 8;

    t32 = (x153+(x154!=(x155%x156)));

    if (t32 != 339) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x157 = 19555LLU;
	int64_t x160 = -52427657LL;
	uint64_t t33 = 27478995513LLU;

    t33 = (x157+(x158!=(x159%x160)));

    if (t33 != 19556LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x161 = 155848379U;
	int16_t x162 = INT16_MIN;
	uint16_t x163 = 19U;
	volatile uint32_t x164 = 334U;
	static uint32_t t34 = 240757303U;

    t34 = (x161+(x162!=(x163%x164)));

    if (t34 != 155848380U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x165 = -1LL;
	int32_t x166 = -1;
	static int8_t x167 = INT8_MIN;
	static volatile int64_t t35 = -3385828860256800LL;

    t35 = (x165+(x166!=(x167%x168)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = -25;
	int8_t x170 = INT8_MIN;
	int16_t x171 = -1;
	uint16_t x172 = 66U;
	static int32_t t36 = -7851825;

    t36 = (x169+(x170!=(x171%x172)));

    if (t36 != -24) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	static int32_t x175 = INT32_MIN;
	uint64_t x176 = 6272680909964LLU;
	int32_t t37 = 428;

    t37 = (x173+(x174!=(x175%x176)));

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x177 = 71U;
	int32_t x178 = INT32_MIN;
	int8_t x179 = -1;
	int16_t x180 = INT16_MIN;

    t38 = (x177+(x178!=(x179%x180)));

    if (t38 != 72) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x182 = INT32_MAX;
	int16_t x183 = -820;
	volatile uint64_t x184 = UINT64_MAX;
	volatile int32_t t39 = -3676;

    t39 = (x181+(x182!=(x183%x184)));

    if (t39 != 11) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x191 = INT16_MAX;
	static int16_t x192 = -1;
	int32_t t40 = 236963331;

    t40 = (x189+(x190!=(x191%x192)));

    if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x194 = INT16_MIN;
	uint64_t x195 = UINT64_MAX;
	static int32_t x196 = -15;
	static volatile uint64_t t41 = 211621942LLU;

    t41 = (x193+(x194!=(x195%x196)));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x197 = 32LLU;
	static uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -1;
	static volatile uint64_t t42 = 1554743488819452360LLU;

    t42 = (x197+(x198!=(x199%x200)));

    if (t42 != 33LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x201 = 2LL;
	static int16_t x202 = INT16_MAX;
	int8_t x203 = -1;
	int16_t x204 = -1;
	int64_t t43 = 1548968LL;

    t43 = (x201+(x202!=(x203%x204)));

    if (t43 != 3LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x212 = INT8_MIN;

    t44 = (x209+(x210!=(x211%x212)));

    if (t44 != 907) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x218 = INT16_MIN;
	int16_t x219 = 1;
	int8_t x220 = INT8_MIN;

    t45 = (x217+(x218!=(x219%x220)));

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x221 = 3524022301440990LLU;
	int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t46 = 47LLU;

    t46 = (x221+(x222!=(x223%x224)));

    if (t46 != 3524022301440991LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x225 = -4346336861468LL;
	volatile int8_t x226 = INT8_MAX;
	volatile uint64_t x228 = 2988704345LLU;
	static int64_t t47 = 1043701172LL;

    t47 = (x225+(x226!=(x227%x228)));

    if (t47 != -4346336861467LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x233 = 11353U;
	uint32_t x234 = 2812206U;
	volatile uint32_t t48 = 1542217U;

    t48 = (x233+(x234!=(x235%x236)));

    if (t48 != 11354U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = -6831;
	volatile int64_t x238 = -1LL;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t49 = -592980768;

    t49 = (x237+(x238!=(x239%x240)));

    if (t49 != -6830) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x241 = INT16_MIN;
	volatile uint8_t x242 = 45U;
	uint64_t x243 = 1LLU;
	volatile int32_t t50 = 175;

    t50 = (x241+(x242!=(x243%x244)));

    if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x245 = -29314595783376865LL;
	static int64_t x246 = -1LL;
	static volatile int8_t x247 = INT8_MIN;

    t51 = (x245+(x246!=(x247%x248)));

    if (t51 != -29314595783376864LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x249 = INT16_MIN;
	static uint64_t x251 = 1809229573605LLU;
	int8_t x252 = INT8_MAX;
	static volatile int32_t t52 = 2;

    t52 = (x249+(x250!=(x251%x252)));

    if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x254 = -8355857326718557LL;
	int64_t x256 = -1LL;

    t53 = (x253+(x254!=(x255%x256)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x257 = -1LL;
	static volatile uint16_t x258 = UINT16_MAX;
	volatile int64_t x259 = INT64_MAX;
	static int16_t x260 = INT16_MAX;
	static int64_t t54 = 2365505955236LL;

    t54 = (x257+(x258!=(x259%x260)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x262 = UINT16_MAX;
	static volatile int32_t t55 = -57;

    t55 = (x261+(x262!=(x263%x264)));

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x266 = 83192660;
	static int32_t x267 = 3;

    t56 = (x265+(x266!=(x267%x268)));

    if (t56 != 347414601081940LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x273 = INT8_MIN;
	uint8_t x274 = 2U;
	static uint64_t x275 = UINT64_MAX;
	volatile int16_t x276 = -2035;
	volatile int32_t t57 = 50889;

    t57 = (x273+(x274!=(x275%x276)));

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x279 = -1LL;
	static uint8_t x280 = UINT8_MAX;
	volatile int64_t t58 = 1007LL;

    t58 = (x277+(x278!=(x279%x280)));

    if (t58 != -2826701539LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x281 = UINT16_MAX;
	static volatile int8_t x282 = INT8_MAX;
	int32_t t59 = -4654537;

    t59 = (x281+(x282!=(x283%x284)));

    if (t59 != 65536) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x285 = -5588;
	static int64_t x287 = -2329LL;
	int16_t x288 = INT16_MIN;
	static int32_t t60 = -1508;

    t60 = (x285+(x286!=(x287%x288)));

    if (t60 != -5587) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x289 = 2U;
	static volatile uint64_t x290 = UINT64_MAX;
	uint16_t x291 = 26U;
	int32_t t61 = 1;

    t61 = (x289+(x290!=(x291%x292)));

    if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x294 = UINT32_MAX;
	int16_t x295 = INT16_MAX;
	int8_t x296 = -1;
	volatile int32_t t62 = -57196;

    t62 = (x293+(x294!=(x295%x296)));

    if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x297 = -6697971;
	int32_t x298 = -1464;
	int32_t x299 = INT32_MIN;
	volatile uint64_t x300 = 17686LLU;
	int32_t t63 = -210939;

    t63 = (x297+(x298!=(x299%x300)));

    if (t63 != -6697970) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x301 = 384014728989218LL;
	static uint64_t x302 = 4314900950732842LLU;
	static int32_t x303 = -49177;
	volatile int32_t x304 = INT32_MIN;
	volatile int64_t t64 = 1022224903525388879LL;

    t64 = (x301+(x302!=(x303%x304)));

    if (t64 != 384014728989219LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x305 = 3U;
	int32_t x306 = INT32_MIN;
	int64_t x307 = -1LL;
	volatile int32_t x308 = INT32_MIN;
	static uint32_t t65 = 16005474U;

    t65 = (x305+(x306!=(x307%x308)));

    if (t65 != 4U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x309 = INT64_MIN;
	int16_t x310 = 5;
	static volatile int8_t x311 = 28;
	volatile uint16_t x312 = 62U;
	int64_t t66 = 4180564341863338585LL;

    t66 = (x309+(x310!=(x311%x312)));

    if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x314 = INT64_MAX;
	volatile int8_t x315 = -1;
	static int64_t x316 = 188241LL;
	static int32_t t67 = 2;

    t67 = (x313+(x314!=(x315%x316)));

    if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x317 = 0U;
	volatile int16_t x318 = 24;
	volatile uint64_t x319 = UINT64_MAX;
	static int32_t x320 = INT32_MIN;

    t68 = (x317+(x318!=(x319%x320)));

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x321 = -1;
	int32_t x324 = INT32_MIN;

    t69 = (x321+(x322!=(x323%x324)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x325 = 1578828846U;
	volatile int64_t x327 = INT64_MIN;
	volatile uint32_t t70 = 178U;

    t70 = (x325+(x326!=(x327%x328)));

    if (t70 != 1578828847U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x329 = UINT64_MAX;
	static uint32_t x330 = 21468873U;
	static uint32_t x331 = 1317U;
	uint64_t t71 = 29LLU;

    t71 = (x329+(x330!=(x331%x332)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x334 = 3524U;
	volatile int8_t x335 = INT8_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t72 = -317528491;

    t72 = (x333+(x334!=(x335%x336)));

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x337 = 0U;
	static uint32_t x338 = 481U;
	uint64_t x339 = UINT64_MAX;
	static uint32_t x340 = 44U;
	int32_t t73 = 16;

    t73 = (x337+(x338!=(x339%x340)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	uint32_t x344 = UINT32_MAX;
	static int32_t t74 = 52529;

    t74 = (x341+(x342!=(x343%x344)));

    if (t74 != -2133) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MAX;
	int16_t x347 = INT16_MIN;
	static uint32_t x348 = 98944U;
	volatile int32_t t75 = -1;

    t75 = (x345+(x346!=(x347%x348)));

    if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x349 = INT8_MIN;
	volatile int8_t x350 = -3;
	uint64_t x351 = 8064305441LLU;
	volatile int32_t x352 = -100182;

    t76 = (x349+(x350!=(x351%x352)));

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x353 = UINT64_MAX;
	static int16_t x354 = INT16_MIN;
	int16_t x355 = -1;
	int8_t x356 = -1;
	volatile uint64_t t77 = 9LLU;

    t77 = (x353+(x354!=(x355%x356)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x357 = 5U;
	volatile int8_t x358 = INT8_MIN;
	uint32_t x359 = 170281U;
	int64_t x360 = 3235696601LL;
	int32_t t78 = 1;

    t78 = (x357+(x358!=(x359%x360)));

    if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x361 = -1;
	volatile int32_t x362 = INT32_MAX;
	uint32_t x363 = 2270459U;
	uint32_t x364 = UINT32_MAX;
	static volatile int32_t t79 = 49121;

    t79 = (x361+(x362!=(x363%x364)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x365 = -30;
	int64_t x366 = INT64_MAX;
	int8_t x367 = INT8_MIN;
	int8_t x368 = -1;
	int32_t t80 = 7;

    t80 = (x365+(x366!=(x367%x368)));

    if (t80 != -29) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = INT8_MIN;
	static uint32_t x371 = UINT32_MAX;
	volatile int32_t t81 = -5177029;

    t81 = (x369+(x370!=(x371%x372)));

    if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x374 = 4885375386078060LLU;
	int16_t x375 = 1281;
	volatile uint64_t t82 = 439273137LLU;

    t82 = (x373+(x374!=(x375%x376)));

    if (t82 != 4LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x380 = 1LL;
	int32_t t83 = 934;

    t83 = (x377+(x378!=(x379%x380)));

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x381 = INT16_MAX;
	int8_t x383 = 0;
	int8_t x384 = INT8_MIN;
	volatile int32_t t84 = 2217343;

    t84 = (x381+(x382!=(x383%x384)));

    if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x386 = UINT8_MAX;
	static volatile int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MAX;
	int32_t t85 = 30482;

    t85 = (x385+(x386!=(x387%x388)));

    if (t85 != 65536) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	volatile int64_t x391 = -381953823103LL;
	uint32_t x392 = 12U;
	int64_t t86 = 600LL;

    t86 = (x389+(x390!=(x391%x392)));

    if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x393 = INT32_MIN;
	volatile uint64_t x394 = 938114212795944LLU;
	int8_t x395 = -1;
	volatile int8_t x396 = -1;
	int32_t t87 = 104145;

    t87 = (x393+(x394!=(x395%x396)));

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x397 = -30;
	uint8_t x398 = 1U;

    t88 = (x397+(x398!=(x399%x400)));

    if (t88 != -29) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x403 = -1;
	int16_t x404 = INT16_MIN;

    t89 = (x401+(x402!=(x403%x404)));

    if (t89 != 65536) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = UINT32_MAX;
	volatile int8_t x408 = -1;
	static volatile int32_t t90 = -532675602;

    t90 = (x405+(x406!=(x407%x408)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x409 = 81U;
	int64_t x410 = -13LL;
	int8_t x411 = 0;
	static volatile int32_t x412 = INT32_MAX;
	volatile int32_t t91 = 206831;

    t91 = (x409+(x410!=(x411%x412)));

    if (t91 != 82) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	uint16_t x414 = 3U;
	int64_t x415 = 2280373LL;
	int32_t x416 = -5885;

    t92 = (x413+(x414!=(x415%x416)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x417 = INT16_MIN;
	int16_t x418 = -1;
	int64_t x420 = INT64_MIN;
	volatile int32_t t93 = -7;

    t93 = (x417+(x418!=(x419%x420)));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x421 = 6LLU;
	uint64_t x422 = UINT64_MAX;
	uint64_t x424 = 4487999436LLU;
	static volatile uint64_t t94 = 285778487LLU;

    t94 = (x421+(x422!=(x423%x424)));

    if (t94 != 7LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x426 = INT32_MAX;
	int64_t x427 = INT64_MIN;
	volatile uint64_t t95 = 5549708499LLU;

    t95 = (x425+(x426!=(x427%x428)));

    if (t95 != 315630621732LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x429 = 168U;
	volatile int16_t x430 = -47;
	int32_t x431 = INT32_MAX;
	int32_t x432 = INT32_MAX;
	volatile int32_t t96 = -3416;

    t96 = (x429+(x430!=(x431%x432)));

    if (t96 != 169) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x434 = -1;
	int64_t x435 = 153876231722LL;
	volatile uint8_t x436 = 1U;
	int32_t t97 = -48662630;

    t97 = (x433+(x434!=(x435%x436)));

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x437 = -6990;
	int8_t x438 = -1;
	int64_t x440 = 2369528307930LL;
	volatile int32_t t98 = -21;

    t98 = (x437+(x438!=(x439%x440)));

    if (t98 != -6989) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = -1LL;
	static int32_t x442 = -257175;
	static int64_t x443 = INT64_MIN;
	static volatile int8_t x444 = INT8_MIN;
	int64_t t99 = 1LL;

    t99 = (x441+(x442!=(x443%x444)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x445 = -1;
	int8_t x447 = 39;
	int32_t x448 = INT32_MAX;
	int32_t t100 = 67795;

    t100 = (x445+(x446!=(x447%x448)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x449 = -15960304;
	int32_t x450 = INT32_MIN;
	volatile uint32_t x451 = 1691274279U;

    t101 = (x449+(x450!=(x451%x452)));

    if (t101 != -15960303) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x453 = 2995U;
	int16_t x454 = INT16_MAX;
	int8_t x455 = INT8_MAX;
	uint64_t x456 = 3LLU;
	volatile int32_t t102 = 61170;

    t102 = (x453+(x454!=(x455%x456)));

    if (t102 != 2996) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x459 = UINT16_MAX;
	int64_t x460 = INT64_MIN;
	int32_t t103 = -8;

    t103 = (x457+(x458!=(x459%x460)));

    if (t103 != 427) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x461 = -21;
	int16_t x462 = INT16_MIN;
	volatile uint8_t x463 = 26U;
	static int8_t x464 = INT8_MAX;
	static volatile int32_t t104 = -124;

    t104 = (x461+(x462!=(x463%x464)));

    if (t104 != -20) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x465 = -1;
	static uint8_t x467 = 30U;
	volatile int16_t x468 = -151;
	volatile int32_t t105 = 1;

    t105 = (x465+(x466!=(x467%x468)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x470 = INT16_MIN;
	static uint16_t x471 = 24766U;
	int8_t x472 = INT8_MIN;

    t106 = (x469+(x470!=(x471%x472)));

    if (t106 != 505712U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x475 = INT16_MIN;
	uint8_t x476 = 73U;
	int32_t t107 = -978607531;

    t107 = (x473+(x474!=(x475%x476)));

    if (t107 != 463428) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x477 = INT32_MAX;
	uint16_t x478 = 0U;
	int32_t x479 = INT32_MAX;
	int32_t x480 = INT32_MAX;

    t108 = (x477+(x478!=(x479%x480)));

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x481 = -7;
	uint64_t x482 = 2LLU;
	static volatile int8_t x483 = INT8_MIN;
	int8_t x484 = INT8_MIN;
	volatile int32_t t109 = -7678031;

    t109 = (x481+(x482!=(x483%x484)));

    if (t109 != -6) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x487 = UINT64_MAX;
	static int8_t x488 = -6;
	volatile int32_t t110 = -215;

    t110 = (x485+(x486!=(x487%x488)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x489 = INT64_MIN;
	uint8_t x490 = 75U;
	volatile int64_t x491 = INT64_MIN;
	static int16_t x492 = INT16_MAX;
	int64_t t111 = 1477226LL;

    t111 = (x489+(x490!=(x491%x492)));

    if (t111 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x493 = -1;
	static volatile uint8_t x494 = 13U;
	int64_t x495 = -21LL;
	int16_t x496 = INT16_MIN;

    t112 = (x493+(x494!=(x495%x496)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x497 = INT16_MIN;
	int32_t x498 = INT32_MIN;
	static uint8_t x500 = UINT8_MAX;

    t113 = (x497+(x498!=(x499%x500)));

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x501 = 0;
	static uint32_t x502 = UINT32_MAX;
	uint8_t x503 = 39U;
	uint16_t x504 = UINT16_MAX;
	int32_t t114 = 509677002;

    t114 = (x501+(x502!=(x503%x504)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x506 = -1;
	int8_t x507 = INT8_MAX;
	static int64_t x508 = -1LL;

    t115 = (x505+(x506!=(x507%x508)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x509 = 114787451430420342LL;
	uint32_t x510 = UINT32_MAX;
	int8_t x512 = -1;
	volatile int64_t t116 = 288280LL;

    t116 = (x509+(x510!=(x511%x512)));

    if (t116 != 114787451430420343LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x513 = INT64_MIN;
	int32_t x514 = -5599;
	int16_t x515 = INT16_MIN;

    t117 = (x513+(x514!=(x515%x516)));

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x517 = -39211749717319341LL;
	int32_t x519 = -1;
	int64_t x520 = INT64_MAX;
	int64_t t118 = -6490LL;

    t118 = (x517+(x518!=(x519%x520)));

    if (t118 != -39211749717319340LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x521 = -1;
	int16_t x522 = INT16_MAX;
	uint8_t x524 = 125U;
	static int32_t t119 = -182981136;

    t119 = (x521+(x522!=(x523%x524)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x527 = UINT64_MAX;
	int32_t x528 = INT32_MAX;
	static volatile int64_t t120 = -4108632613869886LL;

    t120 = (x525+(x526!=(x527%x528)));

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x529 = -1629204;
	int64_t x531 = INT64_MIN;
	int32_t t121 = 3739427;

    t121 = (x529+(x530!=(x531%x532)));

    if (t121 != -1629203) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x533 = -1;
	static volatile uint16_t x535 = 345U;
	volatile int32_t t122 = 0;

    t122 = (x533+(x534!=(x535%x536)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x539 = INT16_MAX;
	uint64_t x540 = UINT64_MAX;
	volatile uint32_t t123 = 18160U;

    t123 = (x537+(x538!=(x539%x540)));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x543 = -1LL;
	static int8_t x544 = INT8_MAX;
	int32_t t124 = 649384703;

    t124 = (x541+(x542!=(x543%x544)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x546 = INT64_MIN;
	int32_t x547 = INT32_MIN;
	static int16_t x548 = 210;

    t125 = (x545+(x546!=(x547%x548)));

    if (t125 != -2147483647) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x550 = INT32_MIN;
	uint16_t x551 = UINT16_MAX;
	static uint32_t x552 = 93179U;
	int32_t t126 = -59;

    t126 = (x549+(x550!=(x551%x552)));

    if (t126 != -127) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x553 = INT16_MAX;
	int16_t x554 = 1669;
	int8_t x556 = -1;
	static int32_t t127 = 29;

    t127 = (x553+(x554!=(x555%x556)));

    if (t127 != 32768) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x557 = 10;
	int16_t x558 = INT16_MIN;
	static int32_t x559 = INT32_MIN;
	uint32_t x560 = UINT32_MAX;
	volatile int32_t t128 = -25810;

    t128 = (x557+(x558!=(x559%x560)));

    if (t128 != 11) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x561 = -1LL;
	int8_t x562 = -1;
	int64_t x563 = INT64_MAX;
	int64_t t129 = 11535574391502696LL;

    t129 = (x561+(x562!=(x563%x564)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x566 = UINT16_MAX;
	uint16_t x567 = 9585U;
	int32_t t130 = 2612;

    t130 = (x565+(x566!=(x567%x568)));

    if (t130 != 19132) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x569 = 5083156U;
	static volatile int16_t x570 = INT16_MIN;
	uint8_t x571 = 58U;
	uint32_t t131 = 12U;

    t131 = (x569+(x570!=(x571%x572)));

    if (t131 != 5083157U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x573 = -1;
	static volatile uint8_t x574 = 1U;
	int32_t x575 = -1;
	int8_t x576 = INT8_MAX;
	int32_t t132 = -201547;

    t132 = (x573+(x574!=(x575%x576)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x577 = UINT32_MAX;
	static volatile int16_t x579 = INT16_MIN;

    t133 = (x577+(x578!=(x579%x580)));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x581 = 62454;
	static int16_t x582 = -5389;
	static volatile uint64_t x583 = UINT64_MAX;
	static volatile int32_t x584 = INT32_MIN;
	int32_t t134 = 6644;

    t134 = (x581+(x582!=(x583%x584)));

    if (t134 != 62455) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x585 = 427U;
	volatile int8_t x586 = INT8_MIN;
	static volatile int32_t x587 = INT32_MIN;
	int32_t t135 = -15;

    t135 = (x585+(x586!=(x587%x588)));

    if (t135 != 428) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x589 = -179803;
	uint16_t x590 = 104U;
	uint32_t x591 = UINT32_MAX;
	int32_t t136 = 5338261;

    t136 = (x589+(x590!=(x591%x592)));

    if (t136 != -179802) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x596 = INT16_MIN;
	int32_t t137 = 48;

    t137 = (x593+(x594!=(x595%x596)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x597 = INT32_MIN;
	static int16_t x598 = INT16_MAX;
	int32_t x599 = INT32_MIN;
	int64_t x600 = INT64_MIN;
	static int32_t t138 = -35399547;

    t138 = (x597+(x598!=(x599%x600)));

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x601 = 56032618138661LLU;
	int64_t x602 = -1LL;
	int8_t x604 = -4;

    t139 = (x601+(x602!=(x603%x604)));

    if (t139 != 56032618138661LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x605 = 127652U;
	int8_t x606 = -1;
	uint64_t x607 = UINT64_MAX;
	static int32_t x608 = -1;
	volatile uint32_t t140 = 32U;

    t140 = (x605+(x606!=(x607%x608)));

    if (t140 != 127653U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x609 = INT8_MAX;
	static int8_t x610 = INT8_MIN;
	int16_t x612 = INT16_MIN;
	int32_t t141 = 1;

    t141 = (x609+(x610!=(x611%x612)));

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x613 = -1;
	static uint64_t x614 = 20754148786LLU;
	uint8_t x615 = 4U;
	static int8_t x616 = -1;

    t142 = (x613+(x614!=(x615%x616)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x619 = UINT16_MAX;
	int32_t t143 = 2898;

    t143 = (x617+(x618!=(x619%x620)));

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x621 = INT32_MIN;
	volatile uint64_t x623 = 53LLU;
	int8_t x624 = 2;
	int32_t t144 = -12318;

    t144 = (x621+(x622!=(x623%x624)));

    if (t144 != -2147483647) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x625 = UINT8_MAX;
	uint8_t x627 = UINT8_MAX;
	static int16_t x628 = -340;
	static int32_t t145 = 833062809;

    t145 = (x625+(x626!=(x627%x628)));

    if (t145 != 256) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x629 = -1;
	int32_t x630 = 21850;
	volatile int32_t t146 = 195;

    t146 = (x629+(x630!=(x631%x632)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x633 = -489978LL;
	int64_t x635 = INT64_MIN;
	volatile int64_t t147 = 28LL;

    t147 = (x633+(x634!=(x635%x636)));

    if (t147 != -489977LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x637 = 15893;
	static uint64_t x638 = UINT64_MAX;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t148 = 1035034881;

    t148 = (x637+(x638!=(x639%x640)));

    if (t148 != 15894) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x641 = INT16_MIN;
	uint32_t x642 = 6638U;
	uint16_t x643 = 695U;
	static volatile int64_t x644 = INT64_MAX;
	static int32_t t149 = -7867889;

    t149 = (x641+(x642!=(x643%x644)));

    if (t149 != -32767) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x645 = -1;
	volatile int8_t x646 = -1;
	int64_t x648 = 4343124869668LL;

    t150 = (x645+(x646!=(x647%x648)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x649 = INT16_MIN;
	uint8_t x651 = 6U;
	int64_t x652 = INT64_MIN;
	static volatile int32_t t151 = -62319;

    t151 = (x649+(x650!=(x651%x652)));

    if (t151 != -32767) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x653 = INT16_MIN;
	uint64_t x654 = UINT64_MAX;
	int8_t x655 = INT8_MIN;
	static int8_t x656 = INT8_MAX;
	int32_t t152 = 187;

    t152 = (x653+(x654!=(x655%x656)));

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x657 = 25328357;
	static int32_t x658 = 1;
	uint8_t x660 = UINT8_MAX;
	volatile int32_t t153 = -113;

    t153 = (x657+(x658!=(x659%x660)));

    if (t153 != 25328358) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x665 = INT32_MIN;
	uint32_t x666 = UINT32_MAX;
	static uint64_t x667 = 233LLU;

    t154 = (x665+(x666!=(x667%x668)));

    if (t154 != -2147483647) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x669 = 2U;
	int32_t x671 = -792148593;
	uint64_t x672 = 222024264550273870LLU;
	int32_t t155 = 1;

    t155 = (x669+(x670!=(x671%x672)));

    if (t155 != 3) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x674 = 96599849405024342LL;
	int16_t x676 = -3;
	static volatile int32_t t156 = -11709;

    t156 = (x673+(x674!=(x675%x676)));

    if (t156 != 84) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x678 = INT64_MIN;
	int8_t x680 = INT8_MIN;
	volatile int32_t t157 = 73742131;

    t157 = (x677+(x678!=(x679%x680)));

    if (t157 != 32768) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x681 = INT16_MIN;
	static int16_t x682 = INT16_MIN;
	int32_t x683 = 9292;
	static uint32_t x684 = 2022118U;
	volatile int32_t t158 = -61095570;

    t158 = (x681+(x682!=(x683%x684)));

    if (t158 != -32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x685 = INT8_MAX;
	int32_t x686 = INT32_MIN;
	uint8_t x688 = 2U;
	int32_t t159 = 3;

    t159 = (x685+(x686!=(x687%x688)));

    if (t159 != 128) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x693 = 0U;
	int32_t x694 = INT32_MAX;
	int16_t x695 = -1;
	int16_t x696 = -18;
	volatile int32_t t160 = -344005459;

    t160 = (x693+(x694!=(x695%x696)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x703 = 2374U;
	uint32_t t161 = 2U;

    t161 = (x701+(x702!=(x703%x704)));

    if (t161 != 5U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x705 = INT16_MIN;
	uint32_t x706 = 1U;
	int16_t x707 = -1;
	static volatile uint32_t x708 = UINT32_MAX;
	volatile int32_t t162 = -12699;

    t162 = (x705+(x706!=(x707%x708)));

    if (t162 != -32767) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x709 = UINT32_MAX;
	static uint8_t x711 = 0U;
	static int16_t x712 = INT16_MAX;
	volatile uint32_t t163 = 1672622U;

    t163 = (x709+(x710!=(x711%x712)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x714 = 189503LL;
	int64_t x715 = 56929885247907611LL;

    t164 = (x713+(x714!=(x715%x716)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x717 = -1;
	int32_t x718 = INT32_MIN;
	static volatile int32_t t165 = 2531;

    t165 = (x717+(x718!=(x719%x720)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x721 = 17;
	uint16_t x722 = UINT16_MAX;
	volatile int16_t x723 = 3;
	static int64_t x724 = INT64_MIN;
	static int32_t t166 = -183527392;

    t166 = (x721+(x722!=(x723%x724)));

    if (t166 != 18) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x726 = UINT16_MAX;
	static volatile uint64_t x727 = 547990LLU;
	int32_t x728 = -112;
	static int64_t t167 = 1996LL;

    t167 = (x725+(x726!=(x727%x728)));

    if (t167 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x729 = -1;
	volatile int8_t x732 = INT8_MIN;
	static int32_t t168 = 1747652;

    t168 = (x729+(x730!=(x731%x732)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x733 = INT32_MIN;
	volatile uint16_t x734 = 28U;
	static int64_t x735 = INT64_MAX;
	static int32_t x736 = INT32_MIN;

    t169 = (x733+(x734!=(x735%x736)));

    if (t169 != -2147483647) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x737 = -1LL;
	volatile int32_t x738 = INT32_MAX;

    t170 = (x737+(x738!=(x739%x740)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x741 = 25018U;
	int64_t x742 = INT64_MAX;
	static int32_t x743 = INT32_MIN;
	int32_t x744 = -225;
	uint32_t t171 = 257285126U;

    t171 = (x741+(x742!=(x743%x744)));

    if (t171 != 25019U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	int32_t x746 = 118526;
	int32_t x748 = INT32_MIN;
	static uint32_t t172 = 7930960U;

    t172 = (x745+(x746!=(x747%x748)));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x749 = 410948LLU;
	int64_t x752 = INT64_MIN;

    t173 = (x749+(x750!=(x751%x752)));

    if (t173 != 410949LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x753 = INT8_MAX;
	int32_t x754 = -1;
	volatile int64_t x755 = INT64_MIN;
	int64_t x756 = -1LL;

    t174 = (x753+(x754!=(x755%x756)));

    if (t174 != 128) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x757 = -1;
	static uint64_t x758 = 28502976LLU;
	static int8_t x760 = INT8_MAX;

    t175 = (x757+(x758!=(x759%x760)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x761 = UINT64_MAX;
	static volatile int16_t x762 = 979;
	int32_t x763 = -196;
	static volatile uint64_t t176 = 120653271341816LLU;

    t176 = (x761+(x762!=(x763%x764)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x765 = 5986U;
	int32_t x766 = INT32_MAX;
	int16_t x767 = INT16_MIN;
	static int16_t x768 = 2;
	volatile uint32_t t177 = 30U;

    t177 = (x765+(x766!=(x767%x768)));

    if (t177 != 5987U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x769 = INT16_MAX;
	int16_t x770 = 3;
	static volatile int32_t t178 = -784324735;

    t178 = (x769+(x770!=(x771%x772)));

    if (t178 != 32768) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x774 = INT32_MAX;
	int32_t x776 = -1;
	int32_t t179 = 30359;

    t179 = (x773+(x774!=(x775%x776)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x778 = UINT8_MAX;
	static volatile int32_t t180 = -2000;

    t180 = (x777+(x778!=(x779%x780)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x782 = -1;
	uint64_t x783 = 1540816LLU;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t181 = 17813981;

    t181 = (x781+(x782!=(x783%x784)));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x785 = 200U;
	volatile uint8_t x787 = UINT8_MAX;
	uint32_t x788 = 17U;
	uint32_t t182 = 108965922U;

    t182 = (x785+(x786!=(x787%x788)));

    if (t182 != 201U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x789 = 2U;
	uint64_t x790 = UINT64_MAX;
	int64_t x791 = -67691940251502964LL;
	static int8_t x792 = -16;
	static int32_t t183 = 14951;

    t183 = (x789+(x790!=(x791%x792)));

    if (t183 != 3) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x793 = UINT32_MAX;
	int16_t x794 = -13;
	uint32_t x795 = 687U;
	volatile uint32_t x796 = 129338211U;
	uint32_t t184 = 224U;

    t184 = (x793+(x794!=(x795%x796)));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x797 = INT16_MIN;
	static uint32_t x798 = 913U;
	int32_t x799 = INT32_MIN;
	int64_t x800 = -57030425LL;
	volatile int32_t t185 = 302726;

    t185 = (x797+(x798!=(x799%x800)));

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x801 = INT16_MAX;
	int16_t x803 = 61;
	int32_t t186 = 488097279;

    t186 = (x801+(x802!=(x803%x804)));

    if (t186 != 32768) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x805 = INT8_MAX;
	static int16_t x807 = -1;
	int16_t x808 = -1;
	static volatile int32_t t187 = 163187;

    t187 = (x805+(x806!=(x807%x808)));

    if (t187 != 128) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x809 = UINT64_MAX;
	uint32_t x810 = 401914412U;
	uint32_t x811 = 14818257U;
	int8_t x812 = INT8_MIN;
	volatile uint64_t t188 = 2962030654299551933LLU;

    t188 = (x809+(x810!=(x811%x812)));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x813 = UINT32_MAX;
	static uint16_t x816 = 82U;

    t189 = (x813+(x814!=(x815%x816)));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x821 = UINT64_MAX;
	int32_t x822 = INT32_MIN;
	int8_t x823 = -1;
	int64_t x824 = INT64_MIN;
	static uint64_t t190 = 65093588396841LLU;

    t190 = (x821+(x822!=(x823%x824)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x827 = -43;
	int16_t x828 = INT16_MIN;
	uint64_t t191 = 0LLU;

    t191 = (x825+(x826!=(x827%x828)));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x829 = INT8_MAX;
	int8_t x830 = 56;
	int64_t x831 = -1LL;
	int8_t x832 = 1;
	int32_t t192 = 6;

    t192 = (x829+(x830!=(x831%x832)));

    if (t192 != 128) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x833 = INT16_MIN;
	int64_t x835 = 8375LL;
	int16_t x836 = -1;
	volatile int32_t t193 = 1420;

    t193 = (x833+(x834!=(x835%x836)));

    if (t193 != -32767) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x837 = UINT32_MAX;
	int64_t x838 = 0LL;
	int64_t x839 = INT64_MIN;
	int32_t x840 = -1;
	uint32_t t194 = UINT32_MAX;

    t194 = (x837+(x838!=(x839%x840)));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x841 = -4345721533977908LL;
	volatile int32_t x842 = INT32_MIN;
	int8_t x843 = INT8_MAX;
	int32_t x844 = INT32_MAX;
	volatile int64_t t195 = -20096898LL;

    t195 = (x841+(x842!=(x843%x844)));

    if (t195 != -4345721533977907LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x849 = INT32_MIN;
	static int8_t x851 = 0;
	int64_t x852 = -1LL;
	static volatile int32_t t196 = 7292381;

    t196 = (x849+(x850!=(x851%x852)));

    if (t196 != -2147483647) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x853 = -147426LL;
	int8_t x854 = -1;
	volatile uint8_t x855 = UINT8_MAX;
	uint64_t x856 = UINT64_MAX;
	volatile int64_t t197 = -21318383195LL;

    t197 = (x853+(x854!=(x855%x856)));

    if (t197 != -147425LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x857 = -40676486644060856LL;
	uint8_t x858 = UINT8_MAX;
	int32_t x859 = INT32_MIN;
	uint8_t x860 = 29U;
	volatile int64_t t198 = -303110878224LL;

    t198 = (x857+(x858!=(x859%x860)));

    if (t198 != -40676486644060855LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x861 = INT16_MIN;
	volatile int8_t x862 = -1;
	static uint16_t x863 = UINT16_MAX;
	volatile int16_t x864 = -2;
	volatile int32_t t199 = -1;

    t199 = (x861+(x862!=(x863%x864)));

    if (t199 != -32767) { NG(); } else { ; }
	
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

