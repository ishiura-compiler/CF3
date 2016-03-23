
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

int32_t x5 = 0;
int64_t x6 = 2LL;
int64_t x7 = -2742LL;
uint64_t x8 = 1LLU;
static int16_t x11 = -1;
volatile uint64_t t3 = 23233935923190323LLU;
uint64_t x19 = UINT64_MAX;
int16_t x21 = -1;
int64_t t5 = 112LL;
static int64_t x29 = -3192202403193LL;
int8_t x32 = 9;
static volatile int64_t x36 = -1LL;
static uint64_t t8 = 123076932LLU;
int8_t x38 = INT8_MIN;
static int32_t x39 = -1;
int32_t x40 = INT32_MIN;
int32_t x46 = -755752742;
uint32_t t10 = 6U;
int32_t x49 = -1;
static int16_t x54 = INT16_MIN;
int16_t x57 = INT16_MIN;
int32_t x62 = INT32_MIN;
int8_t x63 = -1;
volatile int8_t x66 = 1;
int16_t x80 = INT16_MAX;
uint16_t x81 = 94U;
uint16_t x91 = UINT16_MAX;
int32_t t20 = 28173336;
static int64_t x99 = -1LL;
int8_t x101 = INT8_MIN;
static uint8_t x107 = 9U;
uint64_t x108 = UINT64_MAX;
volatile int16_t x117 = INT16_MAX;
volatile int64_t t26 = -436863956LL;
uint8_t x135 = UINT8_MAX;
int32_t x139 = 13;
static int64_t x140 = -1LL;
int8_t x159 = 10;
volatile uint8_t x168 = 34U;
int64_t t35 = 358438929738362732LL;
uint16_t x170 = 181U;
static int64_t x173 = INT64_MAX;
volatile uint32_t x184 = 2U;
volatile uint32_t x185 = 487U;
uint8_t x186 = UINT8_MAX;
volatile uint8_t x187 = UINT8_MAX;
uint8_t x192 = UINT8_MAX;
volatile uint16_t x193 = UINT16_MAX;
volatile int64_t t43 = 995797171301LL;
int16_t x207 = -1;
static int32_t x212 = INT32_MIN;
int64_t x218 = -693968417021566LL;
int8_t x232 = 30;
int8_t x236 = -1;
int8_t x237 = INT8_MIN;
static int8_t x239 = INT8_MIN;
int8_t x241 = -1;
volatile uint64_t t55 = 8405655761003LLU;
int16_t x254 = -1;
static uint32_t t56 = 294U;
static uint32_t x257 = UINT32_MAX;
uint32_t t57 = 1181967U;
uint8_t x261 = UINT8_MAX;
uint64_t x265 = 10384LLU;
uint64_t t59 = 22350093824LLU;
uint64_t x275 = 403254513455293LLU;
static volatile int16_t x277 = INT16_MIN;
int32_t x278 = INT32_MAX;
volatile uint16_t x280 = UINT16_MAX;
static int16_t x282 = INT16_MIN;
uint16_t x292 = 49U;
static int8_t x296 = INT8_MAX;
int64_t x304 = 12465070203393788LL;
int8_t x308 = INT8_MIN;
volatile int8_t x312 = -22;
int64_t x320 = INT64_MAX;
volatile int64_t t70 = -5294740274LL;
static uint8_t x332 = UINT8_MAX;
int16_t x334 = -1;
static uint32_t x335 = UINT32_MAX;
static uint32_t x338 = UINT32_MAX;
uint32_t x340 = 3U;
static int16_t x354 = INT16_MAX;
uint32_t x358 = UINT32_MAX;
int32_t x361 = -1;
static int8_t x362 = 27;
static volatile int16_t x363 = INT16_MAX;
static volatile int32_t x366 = -1;
int8_t x368 = INT8_MIN;
static int32_t t79 = 2133436;
int16_t x372 = -41;
volatile int64_t t80 = 4LL;
uint16_t x373 = 56U;
int32_t x383 = INT32_MIN;
int32_t x384 = -1;
static int8_t x388 = 2;
uint32_t x396 = UINT32_MAX;
uint64_t t85 = 231668311LLU;
int64_t x408 = 273LL;
int64_t x415 = INT64_MIN;
uint16_t x416 = 4U;
static volatile int16_t x423 = INT16_MIN;
static uint16_t x431 = 61U;
volatile uint64_t x437 = 825654LLU;
uint16_t x440 = UINT16_MAX;
int8_t x441 = INT8_MIN;
int32_t x448 = -1;
volatile uint32_t t97 = 59997641U;
volatile int32_t x451 = INT32_MIN;
int64_t x459 = 9265636LL;
uint8_t x460 = 1U;
uint64_t t100 = 978170130LLU;
uint32_t x463 = UINT32_MAX;
static int32_t x467 = INT32_MAX;
int32_t x469 = -1;
static volatile int16_t x478 = INT16_MAX;
static int8_t x479 = INT8_MIN;
static uint32_t t105 = 1U;
uint64_t x483 = 126477460695575259LLU;
int64_t x485 = INT64_MIN;
int8_t x486 = INT8_MIN;
static int32_t x487 = 7484138;
int8_t x491 = INT8_MIN;
volatile int8_t x492 = INT8_MIN;
static int64_t x502 = 15LL;
volatile int32_t x503 = INT32_MIN;
static int64_t t110 = -41312456631LL;
volatile int32_t t111 = -1;
uint64_t x510 = UINT64_MAX;
static int8_t x511 = -1;
int64_t x512 = -500963278LL;
volatile int64_t t115 = 1278584LL;
int16_t x525 = -33;
uint32_t t117 = 1448108U;
int16_t x539 = INT16_MIN;
static uint32_t t119 = 1018U;
volatile int64_t x549 = -1LL;
static volatile uint16_t x550 = 883U;
int8_t x560 = INT8_MIN;
static volatile int32_t x561 = -86;
uint64_t x567 = 2LLU;
static uint16_t x574 = 11887U;
uint16_t x576 = 89U;
int32_t t127 = 5;
int32_t x579 = -211264;
static int32_t x582 = INT32_MIN;
static volatile uint32_t x585 = 47501742U;
int64_t t130 = -221290773408150LL;
volatile uint32_t x596 = 32U;
volatile int16_t x598 = -1;
int64_t x600 = -715094LL;
static uint8_t x602 = UINT8_MAX;
int32_t x609 = -24207326;
uint8_t x610 = UINT8_MAX;
volatile uint32_t x611 = 21U;
int64_t t137 = -119282LL;
static int64_t x636 = -1LL;
volatile int64_t t139 = 1LL;
static int32_t x638 = INT32_MAX;
int16_t x642 = 2349;
uint16_t x643 = 138U;
int16_t x644 = INT16_MAX;
volatile uint32_t x649 = 8U;
static uint32_t t144 = 923463649U;
uint8_t x658 = UINT8_MAX;
static uint64_t x660 = 107LLU;
int64_t x664 = -1LL;
uint64_t t146 = 6027LLU;
uint16_t x666 = 841U;
int16_t x667 = -991;
uint8_t x675 = UINT8_MAX;
uint16_t x676 = UINT16_MAX;
volatile int16_t x684 = 859;
uint16_t x709 = 3U;
static int32_t x710 = INT32_MAX;
int64_t x714 = -509LL;
int8_t x720 = INT8_MIN;
uint8_t x722 = UINT8_MAX;
static int64_t x724 = -1LL;
int16_t x730 = -13556;
static int32_t x731 = INT32_MIN;
int32_t x737 = 339512;
volatile uint64_t t162 = 122428372361875070LLU;
int16_t x746 = -918;
int16_t x750 = INT16_MIN;
uint8_t x760 = UINT8_MAX;
int8_t x764 = -1;
int64_t t170 = 4583503745320861793LL;
uint32_t x774 = UINT32_MAX;
int64_t x775 = INT64_MIN;
volatile int16_t x777 = 101;
uint32_t x779 = 12U;
uint32_t x786 = UINT32_MAX;
int8_t x788 = -37;
static int64_t x791 = INT64_MAX;
int8_t x793 = INT8_MIN;
int8_t x799 = INT8_MIN;
uint32_t t178 = 11007U;
volatile int32_t x811 = -1;
int64_t x812 = INT64_MIN;
int16_t x817 = INT16_MIN;
volatile uint32_t t181 = 160328144U;
int8_t x821 = INT8_MIN;
uint64_t t182 = 7627060168873690LLU;
static int64_t x829 = INT64_MAX;
int32_t x835 = INT32_MIN;
uint64_t x847 = 15707072609LLU;
static volatile uint32_t t189 = 6710U;
uint16_t x853 = 1U;
static int16_t x858 = 132;
volatile int64_t t191 = -8386597306915LL;
static volatile int32_t x882 = -1;
volatile uint32_t t198 = 50U;


void f0(void) {
    	uint32_t x1 = 1308882U;
	int16_t x2 = INT16_MIN;
	static int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 12758649U;

    t0 = ((x1-(x2^x3))/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t t1 = 142458045286LLU;

    t1 = ((x5-(x6^x7))/x8);

    if (t1 != 2744LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 3U;
	volatile int8_t x10 = -4;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 88129641;

    t2 = ((x9-(x10^x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = 507;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint64_t x16 = UINT64_MAX;

    t3 = ((x13-(x14^x15))/x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	static uint64_t x18 = 1132107394LLU;
	int16_t x20 = 4;
	volatile uint64_t t4 = 97071485082155LLU;

    t4 = ((x17-(x18^x19))/x20);

    if (t4 != 283026848LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x22 = INT32_MIN;
	volatile int64_t x23 = 1027245572030035392LL;
	int16_t x24 = 529;

    t5 = ((x21-(x22^x23))/x24);

    if (t5 != 1941863085507122LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 16326675;
	int16_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MAX;
	volatile int32_t t6 = -2017;

    t6 = ((x25-(x26^x27))/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MAX;
	int64_t t7 = 1290397182595LL;

    t7 = ((x29-(x30^x31))/x32);

    if (t7 != -354689155910LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x33 = 242470LLU;
	int32_t x34 = -1;
	static int32_t x35 = INT32_MAX;

    t8 = ((x33-(x34^x35))/x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MAX;
	int64_t t9 = -260569048667854808LL;

    t9 = ((x37-(x38^x39))/x40);

    if (t9 != -4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	uint32_t x47 = UINT32_MAX;
	volatile uint32_t x48 = UINT32_MAX;

    t10 = ((x45-(x46^x47))/x48);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x50 = INT16_MIN;
	volatile int8_t x51 = 3;
	uint64_t x52 = 11860914638884751LLU;
	uint64_t t11 = 14716LLU;

    t11 = ((x49-(x50^x51))/x52);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = 1U;
	int32_t x55 = INT32_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile uint32_t t12 = 44341287U;

    t12 = ((x53-(x54^x55))/x56);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x58 = UINT16_MAX;
	uint8_t x59 = 15U;
	int16_t x60 = INT16_MAX;
	int32_t t13 = 2093;

    t13 = ((x57-(x58^x59))/x60);

    if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 5U;
	int16_t x64 = -36;
	int32_t t14 = -29288561;

    t14 = ((x61-(x62^x63))/x64);

    if (t14 != 59652323) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = UINT16_MAX;
	volatile uint16_t x67 = 27U;
	int16_t x68 = -2;
	int32_t t15 = -7;

    t15 = ((x65-(x66^x67))/x68);

    if (t15 != -32754) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x69 = -28404LL;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = 2U;
	int8_t x72 = INT8_MIN;
	int64_t t16 = -3637LL;

    t16 = ((x69-(x70^x71))/x72);

    if (t16 != -72057594037927714LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = INT16_MAX;
	static int16_t x78 = -11395;
	volatile uint64_t x79 = 1332862392629392LLU;
	static uint64_t t17 = 969009057318LLU;

    t17 = ((x77-(x78^x79))/x80);

    if (t17 != 40676973560LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x82 = 2U;
	static uint16_t x83 = 1157U;
	int64_t x84 = INT64_MIN;
	volatile int64_t t18 = -887689352951LL;

    t18 = ((x81-(x82^x83))/x84);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = 249LLU;
	int32_t x86 = INT32_MAX;
	uint32_t x87 = 43524U;
	volatile int8_t x88 = INT8_MIN;
	uint64_t t19 = 4332868001LLU;

    t19 = ((x85-(x86^x87))/x88);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = INT32_MAX;
	static int16_t x90 = 1;
	static int32_t x92 = 15469943;

    t20 = ((x89-(x90^x91))/x92);

    if (t20 != 138) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = INT8_MIN;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MAX;
	volatile int8_t x96 = INT8_MIN;
	int32_t t21 = -2576296;

    t21 = ((x93-(x94^x95))/x96);

    if (t21 != -254) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x97 = INT16_MAX;
	static uint64_t x98 = UINT64_MAX;
	static int16_t x100 = INT16_MIN;
	volatile uint64_t t22 = 104LLU;

    t22 = ((x97-(x98^x99))/x100);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x102 = INT8_MIN;
	volatile uint64_t x103 = 9194400462422LLU;
	volatile int64_t x104 = -59728574LL;
	uint64_t t23 = 400152283644050595LLU;

    t23 = ((x101-(x102^x103))/x104);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = 3576U;
	volatile int32_t x106 = -12901;
	volatile uint64_t t24 = 35201490273573042LLU;

    t24 = ((x105-(x106^x107))/x108);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x109 = 8U;
	int16_t x110 = -1;
	int8_t x111 = -1;
	volatile int8_t x112 = 9;
	volatile int32_t t25 = -73;

    t25 = ((x109-(x110^x111))/x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x118 = 0;
	int16_t x119 = 1;
	int64_t x120 = -1LL;

    t26 = ((x117-(x118^x119))/x120);

    if (t26 != -32766LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = 1;
	uint64_t x130 = 13364426LLU;
	volatile int32_t x131 = INT32_MAX;
	int64_t x132 = INT64_MIN;
	static volatile uint64_t t27 = 276980263067729LLU;

    t27 = ((x129-(x130^x131))/x132);

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x133 = UINT8_MAX;
	int64_t x134 = 133561728735140LL;
	static int8_t x136 = INT8_MIN;
	volatile int64_t t28 = -5674570LL;

    t28 = ((x133-(x134^x135))/x136);

    if (t28 != 1043451005740LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x137 = -4056500693782410LL;
	int32_t x138 = INT32_MIN;
	volatile int64_t t29 = 419117617385689696LL;

    t29 = ((x137-(x138^x139))/x140);

    if (t29 != 4056498546298775LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x141 = -1;
	uint32_t x142 = 2244519U;
	volatile uint32_t x143 = 1374U;
	int64_t x144 = INT64_MIN;
	static volatile int64_t t30 = -281435824219524959LL;

    t30 = ((x141-(x142^x143))/x144);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x145 = 8768U;
	int64_t x146 = -2276155927947340LL;
	static volatile int64_t x147 = INT64_MAX;
	volatile uint8_t x148 = UINT8_MAX;
	static volatile int64_t t31 = -1933065474403428LL;

    t31 = ((x145-(x146^x147))/x148);

    if (t31 != 36161160317360146LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = 241608635LL;
	static uint64_t x150 = 1662347062950188LLU;
	uint16_t x151 = UINT16_MAX;
	int64_t x152 = -1LL;
	uint64_t t32 = 787LLU;

    t32 = ((x149-(x150^x151))/x152);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x157 = INT32_MIN;
	int8_t x158 = -1;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t33 = 86283513245378LLU;

    t33 = ((x157-(x158^x159))/x160);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x161 = INT16_MAX;
	int64_t x162 = INT64_MIN;
	volatile int8_t x163 = -48;
	uint16_t x164 = 2019U;
	volatile int64_t t34 = 18LL;

    t34 = ((x161-(x162^x163))/x164);

    if (t34 != -4568287289180159LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = INT64_MIN;
	int8_t x166 = 0;
	volatile int16_t x167 = -1;

    t35 = ((x165-(x166^x167))/x168);

    if (t35 != -271275648142787523LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = INT16_MIN;
	uint32_t x171 = 40701U;
	int16_t x172 = INT16_MIN;
	volatile uint32_t t36 = 66927846U;

    t36 = ((x169-(x170^x171))/x172);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x174 = UINT8_MAX;
	int8_t x175 = 5;
	int16_t x176 = INT16_MAX;
	int64_t t37 = 21LL;

    t37 = ((x173-(x174^x175))/x176);

    if (t37 != 281483566907399LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x177 = -24613454455884810LL;
	static uint16_t x178 = 0U;
	int8_t x179 = INT8_MIN;
	uint8_t x180 = 3U;
	int64_t t38 = 70332845LL;

    t38 = ((x177-(x178^x179))/x180);

    if (t38 != -8204484818628227LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = -1001;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = 384U;
	static volatile uint32_t t39 = 14U;

    t39 = ((x181-(x182^x183))/x184);

    if (t39 != 2147483403U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x188 = UINT64_MAX;
	static uint64_t t40 = 3154714164734743620LLU;

    t40 = ((x185-(x186^x187))/x188);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x189 = INT16_MAX;
	int32_t x190 = -62264804;
	static uint8_t x191 = 1U;
	volatile int32_t t41 = 409;

    t41 = ((x189-(x190^x191))/x192);

    if (t41 != 244304) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x194 = INT32_MIN;
	int8_t x195 = -1;
	int64_t x196 = INT64_MIN;
	static int64_t t42 = -454107500747766235LL;

    t42 = ((x193-(x194^x195))/x196);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MAX;
	static int8_t x199 = INT8_MIN;
	static volatile uint16_t x200 = 40U;

    t43 = ((x197-(x198^x199))/x200);

    if (t43 != 230584300921368572LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = -185;
	int16_t x202 = -1;
	uint32_t x203 = 783885U;
	uint16_t x204 = 31122U;
	static uint32_t t44 = 220U;

    t44 = ((x201-(x202^x203))/x204);

    if (t44 != 25U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x205 = 17498637279962LLU;
	int8_t x206 = INT8_MAX;
	static uint64_t x208 = UINT64_MAX;
	uint64_t t45 = 2154232217LLU;

    t45 = ((x205-(x206^x207))/x208);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x209 = -1;
	volatile uint32_t x210 = 2999U;
	int16_t x211 = -4046;
	volatile uint32_t t46 = 1453424383U;

    t46 = ((x209-(x210^x211))/x212);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = -1;
	int16_t x214 = 8115;
	volatile uint16_t x215 = UINT16_MAX;
	uint32_t x216 = 21225U;
	static uint32_t t47 = 870366U;

    t47 = ((x213-(x214^x215))/x216);

    if (t47 != 202351U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x217 = 0;
	static uint32_t x219 = 32U;
	static int16_t x220 = 1;
	volatile int64_t t48 = 14045486236656LL;

    t48 = ((x217-(x218^x219))/x220);

    if (t48 != 693968417021534LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	static volatile int8_t x224 = INT8_MIN;
	static volatile int64_t t49 = -13394081204636684LL;

    t49 = ((x221-(x222^x223))/x224);

    if (t49 != 72057594004373248LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MAX;
	uint8_t x228 = 10U;
	int64_t t50 = -373741938LL;

    t50 = ((x225-(x226^x227))/x228);

    if (t50 != -922337203685477580LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x229 = INT16_MIN;
	int16_t x230 = INT16_MIN;
	uint64_t x231 = 364577209LLU;
	uint64_t t51 = 117187LLU;

    t51 = ((x229-(x230^x231))/x232);

    if (t51 != 12152544LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x233 = INT64_MAX;
	static int8_t x234 = -7;
	int16_t x235 = -1;
	int64_t t52 = -6243LL;

    t52 = ((x233-(x234^x235))/x236);

    if (t52 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x238 = INT8_MIN;
	int64_t x240 = -1LL;
	static int64_t t53 = 35410635625379556LL;

    t53 = ((x237-(x238^x239))/x240);

    if (t53 != 128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x242 = INT32_MAX;
	int8_t x243 = INT8_MAX;
	int8_t x244 = INT8_MIN;
	volatile int32_t t54 = 1227147;

    t54 = ((x241-(x242^x243))/x244);

    if (t54 != 16777215) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	static uint64_t x250 = 18LLU;
	static uint16_t x251 = 10U;
	int64_t x252 = -1LL;

    t55 = ((x249-(x250^x251))/x252);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x253 = -1;
	uint32_t x255 = 753U;
	volatile int8_t x256 = 1;

    t56 = ((x253-(x254^x255))/x256);

    if (t56 != 753U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x258 = -34;
	volatile int32_t x259 = 18692766;
	int16_t x260 = 118;

    t57 = ((x257-(x258^x259))/x260);

    if (t57 != 158413U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x262 = -1LL;
	int16_t x263 = INT16_MAX;
	int8_t x264 = -1;
	volatile int64_t t58 = 439041971729960LL;

    t58 = ((x261-(x262^x263))/x264);

    if (t58 != -33023LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x266 = 356LLU;
	volatile uint64_t x267 = 43518511872537LLU;
	static int8_t x268 = INT8_MIN;

    t59 = ((x265-(x266^x267))/x268);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = -34093291302511243LL;
	uint32_t x270 = 82488252U;
	static int32_t x271 = INT32_MAX;
	uint64_t x272 = 8192672104644646555LLU;
	volatile uint64_t t60 = 2020895650618LLU;

    t60 = ((x269-(x270^x271))/x272);

    if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = 18;
	int8_t x274 = 0;
	static int8_t x276 = INT8_MIN;
	static volatile uint64_t t61 = 8LLU;

    t61 = ((x273-(x274^x275))/x276);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x279 = -1LL;
	volatile int64_t t62 = 938897192601295186LL;

    t62 = ((x277-(x278^x279))/x280);

    if (t62 != 32768LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile uint32_t x283 = 1U;
	int8_t x284 = -1;
	static volatile uint32_t t63 = 16124027U;

    t63 = ((x281-(x282^x283))/x284);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x289 = INT32_MIN;
	static uint32_t x290 = 104684275U;
	static int16_t x291 = INT16_MAX;
	volatile uint32_t t64 = 3326U;

    t64 = ((x289-(x290^x291))/x292);

    if (t64 != 41690064U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x293 = 29U;
	volatile uint8_t x294 = UINT8_MAX;
	uint8_t x295 = 63U;
	static int32_t t65 = -13562938;

    t65 = ((x293-(x294^x295))/x296);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x301 = 21344834U;
	uint16_t x302 = 3604U;
	int32_t x303 = INT32_MIN;
	int64_t t66 = -2LL;

    t66 = ((x301-(x302^x303))/x304);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x305 = 132199LLU;
	int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	uint64_t t67 = 107220424970243LLU;

    t67 = ((x305-(x306^x307))/x308);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x309 = INT8_MIN;
	static int32_t x310 = 404952444;
	int32_t x311 = -1;
	volatile int32_t t68 = 10;

    t68 = ((x309-(x310^x311))/x312);

    if (t68 != -18406923) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x313 = 15112934LLU;
	uint8_t x314 = 0U;
	uint64_t x315 = 3358581566729697870LLU;
	volatile int32_t x316 = INT32_MIN;
	volatile uint64_t t69 = 378343670417LLU;

    t69 = ((x313-(x314^x315))/x316);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x317 = -1;
	int8_t x318 = -1;
	static volatile int32_t x319 = -1;

    t70 = ((x317-(x318^x319))/x320);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	volatile int32_t x323 = INT32_MAX;
	volatile int16_t x324 = -1;
	int64_t t71 = 52098398247LL;

    t71 = ((x321-(x322^x323))/x324);

    if (t71 != 2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	volatile uint16_t x330 = 13U;
	int32_t x331 = -8;
	int32_t t72 = -1;

    t72 = ((x329-(x330^x331))/x332);

    if (t72 != 257) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x333 = -1;
	int8_t x336 = INT8_MIN;
	uint32_t t73 = 1319171592U;

    t73 = ((x333-(x334^x335))/x336);

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x337 = -1LL;
	static int64_t x339 = -1LL;
	int64_t t74 = -27838673730LL;

    t74 = ((x337-(x338^x339))/x340);

    if (t74 != 1431655765LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x341 = -4936LL;
	static uint32_t x342 = UINT32_MAX;
	uint16_t x343 = 81U;
	int16_t x344 = 2248;
	volatile int64_t t75 = -820662230LL;

    t75 = ((x341-(x342^x343))/x344);

    if (t75 != -1910574LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = INT8_MAX;
	uint16_t x355 = UINT16_MAX;
	uint64_t x356 = 56288144035LLU;
	uint64_t t76 = 274LLU;

    t76 = ((x353-(x354^x355))/x356);

    if (t76 != 327719884LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x357 = INT64_MAX;
	uint8_t x359 = 1U;
	volatile int64_t x360 = INT64_MIN;
	static volatile int64_t t77 = -244964626799559741LL;

    t77 = ((x357-(x358^x359))/x360);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x364 = 10791U;
	volatile uint32_t t78 = 1255145U;

    t78 = ((x361-(x362^x363))/x364);

    if (t78 != 398010U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x365 = -1;
	int32_t x367 = INT32_MIN;

    t79 = ((x365-(x366^x367))/x368);

    if (t79 != 16777216) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x369 = INT64_MAX;
	int16_t x370 = -26;
	uint32_t x371 = UINT32_MAX;

    t80 = ((x369-(x370^x371))/x372);

    if (t80 != -224960293581823799LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x374 = 25884528510876430LLU;
	int32_t x375 = INT32_MAX;
	volatile uint16_t x376 = 186U;
	static uint64_t t81 = 30454190522289LLU;

    t81 = ((x373-(x374^x375))/x376);

    if (t81 != 99036879283752997LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x381 = 20404U;
	int32_t x382 = -104954;
	volatile int32_t t82 = 287184;

    t82 = ((x381-(x382^x383))/x384);

    if (t82 != 2147358290) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x385 = -42;
	uint32_t x386 = UINT32_MAX;
	int64_t x387 = INT64_MIN;
	int64_t t83 = 179918294LL;

    t83 = ((x385-(x386^x387))/x388);

    if (t83 != 4611686016279904235LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x389 = INT16_MAX;
	static volatile int16_t x390 = -1;
	uint16_t x391 = 0U;
	int32_t x392 = INT32_MIN;
	int32_t t84 = -456;

    t84 = ((x389-(x390^x391))/x392);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x393 = 1U;
	int16_t x394 = INT16_MAX;
	static volatile uint64_t x395 = UINT64_MAX;

    t85 = ((x393-(x394^x395))/x396);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MAX;
	int64_t x399 = INT64_MAX;
	int64_t x400 = -146771696353LL;
	volatile int64_t t86 = 3620486705712LL;

    t86 = ((x397-(x398^x399))/x400);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x401 = UINT32_MAX;
	static uint64_t x402 = 2852693494643041LLU;
	int8_t x403 = -3;
	static volatile uint64_t x404 = 10440537LLU;
	volatile uint64_t t87 = 4495095626281LLU;

    t87 = ((x401-(x402^x403))/x404);

    if (t87 != 273232860LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x405 = -1;
	uint32_t x406 = UINT32_MAX;
	static int8_t x407 = INT8_MIN;
	static volatile int64_t t88 = -60438LL;

    t88 = ((x405-(x406^x407))/x408);

    if (t88 != 15732480LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x409 = 1;
	static int16_t x410 = 9;
	int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MIN;
	int32_t t89 = 2194;

    t89 = ((x409-(x410^x411))/x412);

    if (t89 != -255) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x413 = INT16_MIN;
	int16_t x414 = 2442;
	volatile int64_t t90 = 6873792976277LL;

    t90 = ((x413-(x414^x415))/x416);

    if (t90 != 2305843009213685149LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x421 = 3928181;
	int8_t x422 = -1;
	int8_t x424 = INT8_MIN;
	static int32_t t91 = 42645315;

    t91 = ((x421-(x422^x423))/x424);

    if (t91 != -30432) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x425 = 61U;
	static int32_t x426 = -107466805;
	uint32_t x427 = 12500U;
	volatile uint16_t x428 = 82U;
	uint32_t t92 = 0U;

    t92 = ((x425-(x426^x427))/x428);

    if (t92 != 1310623U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MIN;
	int64_t x432 = 2481LL;
	static int64_t t93 = 0LL;

    t93 = ((x429-(x430^x431))/x432);

    if (t93 != 13LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x433 = 3064U;
	volatile int32_t x434 = INT32_MAX;
	int16_t x435 = INT16_MAX;
	uint8_t x436 = 28U;
	volatile uint32_t t94 = 260U;

    t94 = ((x433-(x434^x435))/x436);

    if (t94 != 76697124U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x438 = UINT16_MAX;
	uint32_t x439 = 120625U;
	volatile uint64_t t95 = 8603585976661LLU;

    t95 = ((x437-(x438^x439))/x440);

    if (t95 != 11LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x442 = INT8_MAX;
	int16_t x443 = INT16_MAX;
	uint64_t x444 = 2804414335959LLU;
	uint64_t t96 = 3883475197480158432LLU;

    t96 = ((x441-(x442^x443))/x444);

    if (t96 != 6577752LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x445 = 7U;
	uint32_t x446 = 13980438U;
	static int32_t x447 = INT32_MIN;

    t97 = ((x445-(x446^x447))/x448);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x449 = 4;
	uint8_t x450 = UINT8_MAX;
	static int16_t x452 = -3900;
	int32_t t98 = 97820;

    t98 = ((x449-(x450^x451))/x452);

    if (t98 != -550636) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x453 = 50LL;
	uint16_t x454 = UINT16_MAX;
	int8_t x455 = 31;
	uint64_t x456 = 2294245LLU;
	static volatile uint64_t t99 = 211396146LLU;

    t99 = ((x453-(x454^x455))/x456);

    if (t99 != 8040442094767LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x457 = 11482LLU;
	uint8_t x458 = UINT8_MAX;

    t100 = ((x457-(x458^x459))/x460);

    if (t100 != 18446744073700297663LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x461 = 4U;
	int16_t x462 = -1;
	uint16_t x464 = 6U;
	uint32_t t101 = 267784721U;

    t101 = ((x461-(x462^x463))/x464);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x465 = 4660U;
	static uint32_t x466 = 501240393U;
	int64_t x468 = INT64_MIN;
	int64_t t102 = 24841LL;

    t102 = ((x465-(x466^x467))/x468);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x470 = 2736335745LLU;
	uint16_t x471 = 193U;
	uint16_t x472 = 3812U;
	volatile uint64_t t103 = 874348338359LLU;

    t103 = ((x469-(x470^x471))/x472);

    if (t103 != 4839124887453624LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x473 = INT32_MAX;
	int8_t x474 = INT8_MAX;
	uint32_t x475 = 0U;
	static int8_t x476 = INT8_MIN;
	volatile uint32_t t104 = 12788U;

    t104 = ((x473-(x474^x475))/x476);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x477 = 178U;
	int8_t x480 = -1;

    t105 = ((x477-(x478^x479))/x480);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x481 = 1892358U;
	volatile int16_t x482 = 1;
	int32_t x484 = -27870;
	volatile uint64_t t106 = 6940LLU;

    t106 = ((x481-(x482^x483))/x484);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x488 = INT8_MIN;
	int64_t t107 = 1866548057040273LL;

    t107 = ((x485-(x486^x487))/x488);

    if (t107 != 72057594037869466LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x489 = 1;
	int32_t x490 = INT32_MIN;
	static int32_t t108 = -1;

    t108 = ((x489-(x490^x491))/x492);

    if (t108 != 16777214) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x497 = 34;
	uint16_t x498 = UINT16_MAX;
	static volatile uint32_t x499 = UINT32_MAX;
	uint32_t x500 = 1717U;
	uint32_t t109 = 14055501U;

    t109 = ((x497-(x498^x499))/x500);

    if (t109 != 38U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x501 = 8447U;
	uint8_t x504 = UINT8_MAX;

    t110 = ((x501-(x502^x503))/x504);

    if (t110 != 8421537LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x505 = -11799487;
	static int8_t x506 = 20;
	uint16_t x507 = 10U;
	static int32_t x508 = INT32_MAX;

    t111 = ((x505-(x506^x507))/x508);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x509 = 1;
	volatile uint64_t t112 = 413LLU;

    t112 = ((x509-(x510^x511))/x512);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x513 = 131LLU;
	static int16_t x514 = INT16_MIN;
	static int32_t x515 = INT32_MIN;
	uint16_t x516 = UINT16_MAX;
	uint64_t t113 = 546350867474LLU;

    t113 = ((x513-(x514^x515))/x516);

    if (t113 != 281479271710721LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x517 = 14;
	volatile int64_t x518 = INT64_MIN;
	int64_t x519 = INT64_MAX;
	uint64_t x520 = UINT64_MAX;
	volatile uint64_t t114 = 3405221548LLU;

    t114 = ((x517-(x518^x519))/x520);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x521 = INT8_MIN;
	int64_t x522 = INT64_MAX;
	volatile int16_t x523 = INT16_MAX;
	static volatile uint32_t x524 = 195151871U;

    t115 = ((x521-(x522^x523))/x524);

    if (t115 != -47262534505LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x526 = 26U;
	int16_t x527 = INT16_MAX;
	uint32_t x528 = 292454U;
	volatile uint32_t t116 = 682768U;

    t116 = ((x525-(x526^x527))/x528);

    if (t116 != 14685U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x529 = INT32_MIN;
	int32_t x530 = INT32_MIN;
	uint32_t x531 = 29371027U;
	int32_t x532 = 236;

    t117 = ((x529-(x530^x531))/x532);

    if (t117 != 18074560U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	volatile int8_t x534 = INT8_MAX;
	uint32_t x535 = 3U;
	int16_t x536 = 1876;
	static uint64_t t118 = 345460288304360LLU;

    t118 = ((x533-(x534^x535))/x536);

    if (t118 != 9833019229056264LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x537 = INT16_MIN;
	static int32_t x538 = INT32_MAX;
	uint32_t x540 = 150U;

    t119 = ((x537-(x538^x539))/x540);

    if (t119 != 14316120U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x541 = 40323952U;
	uint16_t x542 = 381U;
	int16_t x543 = INT16_MAX;
	static volatile int32_t x544 = -1;
	static uint32_t t120 = 835267U;

    t120 = ((x541-(x542^x543))/x544);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x545 = -16103084114LL;
	volatile int8_t x546 = INT8_MIN;
	static uint16_t x547 = UINT16_MAX;
	uint32_t x548 = 95144114U;
	volatile int64_t t121 = 45439399972149LL;

    t121 = ((x545-(x546^x547))/x548);

    if (t121 != -169LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x551 = 16U;
	int8_t x552 = -1;
	volatile int64_t t122 = 668356151760040LL;

    t122 = ((x549-(x550^x551))/x552);

    if (t122 != 868LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x557 = 10378744062625LLU;
	uint32_t x558 = 68994130U;
	uint8_t x559 = 28U;
	uint64_t t123 = 62331251LLU;

    t123 = ((x557-(x558^x559))/x560);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x562 = -1;
	volatile uint32_t x563 = 17U;
	int16_t x564 = -9;
	static volatile uint32_t t124 = 29789U;

    t124 = ((x561-(x562^x563))/x564);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x565 = -1;
	uint32_t x566 = UINT32_MAX;
	uint32_t x568 = 2746U;
	static volatile uint64_t t125 = 1486712LLU;

    t125 = ((x565-(x566^x567))/x568);

    if (t125 != 6717678102481640LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x569 = 1088555229679357LLU;
	uint64_t x570 = UINT64_MAX;
	int64_t x571 = 1616019350LL;
	uint32_t x572 = 5U;
	volatile uint64_t t126 = 9210687866384548542LLU;

    t126 = ((x569-(x570^x571))/x572);

    if (t126 != 217711369139741LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x573 = INT16_MIN;
	static uint8_t x575 = UINT8_MAX;

    t127 = ((x573-(x574^x575))/x576);

    if (t127 != -502) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x577 = -1;
	volatile uint32_t x578 = 12U;
	static int16_t x580 = -1;
	uint32_t t128 = 15791U;

    t128 = ((x577-(x578^x579))/x580);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x581 = -2036786190982LL;
	int32_t x583 = -920700;
	uint16_t x584 = UINT16_MAX;
	int64_t t129 = -194923054618LL;

    t129 = ((x581-(x582^x583))/x584);

    if (t129 != -31112119LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x586 = 502799U;
	uint32_t x587 = UINT32_MAX;
	int64_t x588 = -93009318LL;

    t130 = ((x585-(x586^x587))/x588);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x589 = 17U;
	static int64_t x590 = INT64_MIN;
	uint16_t x591 = 46U;
	int16_t x592 = INT16_MIN;
	volatile int64_t t131 = -665864LL;

    t131 = ((x589-(x590^x591))/x592);

    if (t131 != -281474976710655LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x593 = -1;
	int16_t x594 = INT16_MAX;
	int32_t x595 = -255681521;
	uint32_t t132 = 1861U;

    t132 = ((x593-(x594^x595))/x596);

    if (t132 != 7989472U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x597 = INT8_MAX;
	uint64_t x599 = 31LLU;
	uint64_t t133 = 33190991565459123LLU;

    t133 = ((x597-(x598^x599))/x600);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x601 = -1;
	uint8_t x603 = 3U;
	uint64_t x604 = UINT64_MAX;
	uint64_t t134 = 101179633142924LLU;

    t134 = ((x601-(x602^x603))/x604);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x605 = INT64_MAX;
	int32_t x606 = -1;
	static uint64_t x607 = 161621780272LLU;
	int8_t x608 = -1;
	volatile uint64_t t135 = 30600890161LLU;

    t135 = ((x605-(x606^x607))/x608);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x612 = INT16_MIN;
	static volatile uint32_t t136 = 3653U;

    t136 = ((x609-(x610^x611))/x612);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x613 = 1;
	int64_t x614 = INT64_MAX;
	uint8_t x615 = UINT8_MAX;
	static int32_t x616 = 61;

    t137 = ((x613-(x614^x615))/x616);

    if (t137 != -151202820276307795LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x629 = UINT16_MAX;
	int16_t x630 = INT16_MAX;
	int32_t x631 = -1;
	int8_t x632 = INT8_MIN;
	int32_t t138 = -85;

    t138 = ((x629-(x630^x631))/x632);

    if (t138 != -767) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x633 = 63U;
	uint16_t x634 = UINT16_MAX;
	int32_t x635 = 1671367;

    t139 = ((x633-(x634^x635))/x636);

    if (t139 != 1670905LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x637 = INT8_MIN;
	int64_t x639 = INT64_MIN;
	uint8_t x640 = UINT8_MAX;
	int64_t t140 = 11710869135717161LL;

    t140 = ((x637-(x638^x639))/x640);

    if (t140 != 36170086410616831LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x641 = INT8_MIN;
	int32_t t141 = -184387;

    t141 = ((x641-(x642^x643))/x644);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x645 = INT8_MAX;
	int8_t x646 = 1;
	static int64_t x647 = -1LL;
	static volatile uint64_t x648 = UINT64_MAX;
	volatile uint64_t t142 = 6LLU;

    t142 = ((x645-(x646^x647))/x648);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x650 = 20U;
	int64_t x651 = INT64_MIN;
	uint32_t x652 = UINT32_MAX;
	volatile int64_t t143 = 133348088882LL;

    t143 = ((x649-(x650^x651))/x652);

    if (t143 != 2147483648LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x653 = 28U;
	volatile int16_t x654 = -15;
	int16_t x655 = INT16_MAX;
	volatile int8_t x656 = INT8_MAX;

    t144 = ((x653-(x654^x655))/x656);

    if (t144 != 258U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x657 = -1;
	int64_t x659 = -1LL;
	static uint64_t t145 = 252429193749527LLU;

    t145 = ((x657-(x658^x659))/x660);

    if (t145 != 2LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x661 = INT16_MAX;
	uint8_t x662 = UINT8_MAX;
	uint64_t x663 = 52726841LLU;

    t146 = ((x661-(x662^x663))/x664);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x668 = INT16_MIN;
	int32_t t147 = 3438472;

    t147 = ((x665-(x666^x667))/x668);

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x669 = 1U;
	int64_t x670 = 30307600267LL;
	int32_t x671 = -1;
	int16_t x672 = -1;
	volatile int64_t t148 = -904105166LL;

    t148 = ((x669-(x670^x671))/x672);

    if (t148 != -30307600269LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x673 = INT8_MAX;
	static int64_t x674 = 1649889636217943710LL;
	int64_t t149 = 60688LL;

    t149 = ((x673-(x674^x675))/x676);

    if (t149 != -25175702086182LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x681 = 0U;
	int8_t x682 = 2;
	volatile int8_t x683 = -3;
	int32_t t150 = 92017795;

    t150 = ((x681-(x682^x683))/x684);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x685 = 18U;
	uint32_t x686 = UINT32_MAX;
	volatile int64_t x687 = -1LL;
	int8_t x688 = INT8_MIN;
	static int64_t t151 = -2050933896728LL;

    t151 = ((x685-(x686^x687))/x688);

    if (t151 != -33554432LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x689 = UINT32_MAX;
	volatile int64_t x690 = 68862488721337LL;
	int32_t x691 = 485730327;
	int16_t x692 = INT16_MAX;
	volatile int64_t t152 = -18790960471582980LL;

    t152 = ((x689-(x690^x691))/x692);

    if (t152 != -2101451839LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x693 = -1;
	static uint64_t x694 = UINT64_MAX;
	int64_t x695 = -1LL;
	volatile int16_t x696 = INT16_MAX;
	uint64_t t153 = 7733276797LLU;

    t153 = ((x693-(x694^x695))/x696);

    if (t153 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x701 = UINT32_MAX;
	int8_t x702 = INT8_MIN;
	int32_t x703 = INT32_MIN;
	int32_t x704 = INT32_MIN;
	volatile uint32_t t154 = 1462918886U;

    t154 = ((x701-(x702^x703))/x704);

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x705 = INT16_MAX;
	int64_t x706 = -157524116443448LL;
	int8_t x707 = INT8_MIN;
	uint64_t x708 = 481985769LLU;
	static uint64_t t155 = 2203340800250764501LLU;

    t155 = ((x705-(x706^x707))/x708);

    if (t155 != 38272056429LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x711 = 348U;
	static int32_t x712 = INT32_MAX;
	volatile int32_t t156 = -5;

    t156 = ((x709-(x710^x711))/x712);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x713 = -108;
	int16_t x715 = -1;
	uint16_t x716 = UINT16_MAX;
	volatile int64_t t157 = -1425865796088LL;

    t157 = ((x713-(x714^x715))/x716);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x717 = -36793LL;
	volatile uint8_t x718 = 2U;
	uint8_t x719 = UINT8_MAX;
	int64_t t158 = -278125483LL;

    t158 = ((x717-(x718^x719))/x720);

    if (t158 != 289LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x721 = 2995;
	int64_t x723 = -14740300463LL;
	volatile int64_t t159 = -587631338LL;

    t159 = ((x721-(x722^x723))/x724);

    if (t159 != -14740303365LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	int16_t x732 = -118;
	static volatile uint32_t t160 = 5675874U;

    t160 = ((x729-(x730^x731))/x732);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x733 = INT32_MAX;
	static int32_t x734 = INT32_MAX;
	int32_t x735 = INT32_MAX;
	static int32_t x736 = -521557;
	volatile int32_t t161 = 58;

    t161 = ((x733-(x734^x735))/x736);

    if (t161 != -4117) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x738 = 0U;
	uint8_t x739 = 56U;
	volatile uint64_t x740 = UINT64_MAX;

    t162 = ((x737-(x738^x739))/x740);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x741 = INT16_MAX;
	int32_t x742 = INT32_MIN;
	int16_t x743 = INT16_MIN;
	int8_t x744 = -3;
	volatile int32_t t163 = -3;

    t163 = ((x741-(x742^x743))/x744);

    if (t163 != 715806037) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x745 = INT16_MAX;
	int32_t x747 = -928701145;
	static int16_t x748 = INT16_MAX;
	static volatile int32_t t164 = 39223887;

    t164 = ((x745-(x746^x747))/x748);

    if (t164 != -28341) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x749 = 4LLU;
	static int32_t x751 = INT32_MIN;
	uint8_t x752 = UINT8_MAX;
	static uint64_t t165 = 5330717115804374LLU;

    t165 = ((x749-(x750^x751))/x752);

    if (t165 != 72340172829655297LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x753 = -715;
	int16_t x754 = -1;
	volatile uint64_t x755 = 7745328458LLU;
	int64_t x756 = 5315598LL;
	uint64_t t166 = 305711163LLU;

    t166 = ((x753-(x754^x755))/x756);

    if (t166 != 1457LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x757 = INT8_MAX;
	int64_t x758 = 0LL;
	static int16_t x759 = INT16_MIN;
	int64_t t167 = -1LL;

    t167 = ((x757-(x758^x759))/x760);

    if (t167 != 129LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x761 = INT64_MIN;
	volatile int8_t x762 = INT8_MIN;
	uint8_t x763 = 117U;
	volatile int64_t t168 = -102979099LL;

    t168 = ((x761-(x762^x763))/x764);

    if (t168 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x765 = 1;
	int16_t x766 = -1;
	volatile int64_t x767 = 0LL;
	int64_t x768 = 33006715151935372LL;
	static int64_t t169 = 27324747414275LL;

    t169 = ((x765-(x766^x767))/x768);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x769 = 1235024452825835788LL;
	int32_t x770 = INT32_MIN;
	int32_t x771 = -117033586;
	volatile uint32_t x772 = 191846U;

    t170 = ((x769-(x770^x771))/x772);

    if (t170 != 6437582492183LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x773 = INT32_MIN;
	int32_t x776 = INT32_MIN;
	static int64_t t171 = -74159932938LL;

    t171 = ((x773-(x774^x775))/x776);

    if (t171 != -4294967293LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x778 = 27;
	int16_t x780 = -3;
	static volatile uint32_t t172 = 333104U;

    t172 = ((x777-(x778^x779))/x780);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x781 = -1;
	uint8_t x782 = 69U;
	static int32_t x783 = 3066363;
	volatile uint32_t x784 = 105270U;
	uint32_t t173 = 236104U;

    t173 = ((x781-(x782^x783))/x784);

    if (t173 != 40770U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x785 = 663U;
	int32_t x787 = INT32_MAX;
	volatile uint32_t t174 = 324038U;

    t174 = ((x785-(x786^x787))/x788);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x789 = 920U;
	volatile uint64_t x790 = 1463604LLU;
	static int64_t x792 = -1LL;
	uint64_t t175 = 3978399402806LLU;

    t175 = ((x789-(x790^x791))/x792);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x794 = 13878171U;
	uint16_t x795 = 4U;
	static volatile uint16_t x796 = 149U;
	volatile uint32_t t176 = 116413090U;

    t176 = ((x793-(x794^x795))/x796);

    if (t176 != 28732140U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x797 = INT8_MIN;
	static volatile int64_t x798 = 4149508595163889LL;
	static uint8_t x800 = 28U;
	volatile int64_t t177 = 769437LL;

    t177 = ((x797-(x798^x799))/x800);

    if (t177 != 148196735541559LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x801 = 414;
	uint32_t x802 = UINT32_MAX;
	uint8_t x803 = UINT8_MAX;
	uint8_t x804 = 7U;

    t178 = ((x801-(x802^x803))/x804);

    if (t178 != 95U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x809 = -3221362LL;
	uint16_t x810 = UINT16_MAX;
	int64_t t179 = 8176LL;

    t179 = ((x809-(x810^x811))/x812);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x813 = INT32_MIN;
	volatile int64_t x814 = -25230765758946LL;
	int32_t x815 = 513843970;
	volatile uint64_t x816 = UINT64_MAX;
	uint64_t t180 = 1052555081320179737LLU;

    t180 = ((x813-(x814^x815))/x816);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x818 = UINT32_MAX;
	uint8_t x819 = 48U;
	static volatile int32_t x820 = INT32_MIN;

    t181 = ((x817-(x818^x819))/x820);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x822 = -3575521;
	static uint64_t x823 = 6673001409270427LLU;
	int16_t x824 = INT16_MAX;

    t182 = ((x821-(x822^x823))/x824);

    if (t182 != 203650056769LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x825 = 5859819U;
	int8_t x826 = INT8_MIN;
	int8_t x827 = -1;
	int32_t x828 = INT32_MIN;
	uint32_t t183 = 2442U;

    t183 = ((x825-(x826^x827))/x828);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x830 = UINT16_MAX;
	int8_t x831 = INT8_MAX;
	int8_t x832 = INT8_MIN;
	int64_t t184 = -494842605LL;

    t184 = ((x829-(x830^x831))/x832);

    if (t184 != -72057594037927424LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x833 = -27LL;
	uint16_t x834 = 97U;
	uint32_t x836 = UINT32_MAX;
	volatile int64_t t185 = 77677353404LL;

    t185 = ((x833-(x834^x835))/x836);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x837 = INT64_MAX;
	uint64_t x838 = UINT64_MAX;
	int32_t x839 = 1;
	int8_t x840 = 3;
	volatile uint64_t t186 = 753LLU;

    t186 = ((x837-(x838^x839))/x840);

    if (t186 != 3074457345618258603LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x841 = -1;
	volatile int16_t x842 = INT16_MAX;
	uint8_t x843 = 0U;
	int8_t x844 = INT8_MIN;
	int32_t t187 = 40687;

    t187 = ((x841-(x842^x843))/x844);

    if (t187 != 256) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x845 = INT32_MIN;
	uint64_t x846 = 74156607LLU;
	volatile int16_t x848 = INT16_MIN;
	uint64_t t188 = 5873342968828502978LLU;

    t188 = ((x845-(x846^x847))/x848);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x849 = 20855U;
	static int8_t x850 = -23;
	static uint32_t x851 = UINT32_MAX;
	int8_t x852 = INT8_MIN;

    t189 = ((x849-(x850^x851))/x852);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x854 = -1;
	int64_t x855 = INT64_MIN;
	uint8_t x856 = 55U;
	volatile int64_t t190 = -3341452671640470715LL;

    t190 = ((x853-(x854^x855))/x856);

    if (t190 != -167697673397359560LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x857 = INT64_MAX;
	int64_t x859 = INT64_MAX;
	int16_t x860 = 13885;

    t191 = ((x857-(x858^x859))/x860);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x865 = -2399263;
	uint32_t x866 = 968488918U;
	uint64_t x867 = 3093464LLU;
	int32_t x868 = -1;
	uint64_t t192 = 112872781LLU;

    t192 = ((x865-(x866^x867))/x868);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x869 = -314573465LL;
	static uint32_t x870 = UINT32_MAX;
	static int8_t x871 = INT8_MIN;
	int16_t x872 = INT16_MIN;
	static volatile int64_t t193 = 1488LL;

    t193 = ((x869-(x870^x871))/x872);

    if (t193 != 9600LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x873 = INT16_MAX;
	static uint16_t x874 = 43U;
	uint8_t x875 = 1U;
	uint64_t x876 = 8445597498278077628LLU;
	uint64_t t194 = 11449LLU;

    t194 = ((x873-(x874^x875))/x876);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x877 = 22;
	int8_t x878 = INT8_MAX;
	volatile int64_t x879 = -1LL;
	static volatile int8_t x880 = INT8_MIN;
	int64_t t195 = 32706LL;

    t195 = ((x877-(x878^x879))/x880);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x881 = -1LL;
	int16_t x883 = INT16_MIN;
	static int64_t x884 = -5480069493LL;
	volatile int64_t t196 = -17LL;

    t196 = ((x881-(x882^x883))/x884);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x885 = INT8_MIN;
	int64_t x886 = -1LL;
	volatile int16_t x887 = 5095;
	volatile uint32_t x888 = 173649U;
	int64_t t197 = 2836058LL;

    t197 = ((x885-(x886^x887))/x888);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x889 = 1;
	int32_t x890 = 4165;
	volatile int16_t x891 = INT16_MAX;
	uint32_t x892 = 75U;

    t198 = ((x889-(x890^x891))/x892);

    if (t198 != 57265849U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x893 = -1;
	static int64_t x894 = -1LL;
	uint64_t x895 = 70548441014617622LLU;
	int8_t x896 = -12;
	volatile uint64_t t199 = 5817461254880820634LLU;

    t199 = ((x893-(x894^x895))/x896);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

