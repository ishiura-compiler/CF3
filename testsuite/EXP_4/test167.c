
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

static int16_t x5 = -1;
int64_t x14 = -21LL;
int16_t x15 = INT16_MAX;
int64_t t4 = -6325171492050122LL;
uint64_t x25 = 497LLU;
int8_t x46 = INT8_MIN;
uint32_t x48 = UINT32_MAX;
volatile uint32_t x51 = UINT32_MAX;
uint8_t x57 = 1U;
int64_t t12 = 1958511884LL;
static int64_t x65 = INT64_MIN;
volatile int64_t t14 = INT64_MIN;
int8_t x78 = INT8_MAX;
volatile uint8_t x97 = 1U;
uint32_t x100 = 292U;
uint32_t t22 = 31114U;
static int16_t x103 = -1;
static int16_t x106 = -1;
static volatile int32_t x111 = INT32_MAX;
uint32_t x119 = 333994U;
uint32_t t27 = 465284501U;
int32_t x130 = -1;
volatile int16_t x132 = -235;
volatile uint8_t x134 = UINT8_MAX;
volatile uint64_t x142 = 1508100991539418LLU;
int16_t x149 = -14192;
int64_t x150 = INT64_MIN;
uint16_t x152 = 793U;
uint8_t x175 = 97U;
volatile int64_t t39 = 55653291LL;
uint32_t x178 = 11095U;
int64_t x183 = -9841267LL;
static int8_t x197 = INT8_MIN;
volatile uint16_t x200 = 0U;
int16_t x204 = 9523;
volatile int16_t x214 = -1;
int32_t x224 = -1;
int8_t x229 = INT8_MAX;
volatile uint8_t x230 = UINT8_MAX;
volatile int64_t x232 = INT64_MAX;
volatile int8_t x233 = 1;
int16_t x234 = INT16_MIN;
volatile int64_t t55 = 676473751639804LL;
int32_t x246 = INT32_MIN;
int8_t x256 = 1;
static volatile uint16_t x261 = UINT16_MAX;
uint32_t x281 = 72357U;
volatile int16_t x285 = -1;
uint32_t x288 = 1937046107U;
static int16_t x293 = -1272;
volatile uint32_t x296 = 25152771U;
static uint16_t x297 = 832U;
int32_t x298 = INT32_MIN;
int32_t x299 = INT32_MAX;
static int8_t x306 = 43;
volatile int8_t x316 = -1;
int64_t x318 = INT64_MIN;
int8_t x319 = 0;
volatile uint64_t t71 = 1778LLU;
uint16_t x321 = 4617U;
static volatile uint8_t x336 = 31U;
int64_t x345 = 28281156359902313LL;
int8_t x347 = INT8_MIN;
uint8_t x363 = 36U;
volatile uint64_t t79 = 414994307079925410LLU;
int16_t x376 = -11;
volatile int32_t t81 = 0;
volatile uint16_t x377 = 97U;
int64_t x379 = -4060257495260LL;
int64_t x382 = INT64_MAX;
static int16_t x383 = 1485;
int16_t x388 = 0;
uint16_t x391 = 70U;
int16_t x392 = INT16_MIN;
static int8_t x408 = INT8_MIN;
uint8_t x412 = 97U;
int8_t x414 = INT8_MAX;
int32_t x416 = INT32_MIN;
uint32_t x421 = 330U;
int32_t x424 = 4;
int16_t x429 = 84;
volatile int64_t t95 = 5028821239LL;
int8_t x438 = INT8_MIN;
uint64_t x440 = 644001733489LLU;
int32_t x442 = INT32_MIN;
static int8_t x452 = -1;
volatile uint8_t x453 = 3U;
int16_t x454 = -1;
uint16_t x482 = 0U;
static uint32_t t107 = 2031378U;
uint8_t x498 = UINT8_MAX;
int8_t x516 = INT8_MIN;
int16_t x517 = INT16_MAX;
volatile uint16_t x518 = UINT16_MAX;
uint16_t x519 = UINT16_MAX;
int32_t x522 = INT32_MAX;
static volatile uint64_t x538 = UINT64_MAX;
int32_t x540 = INT32_MIN;
int32_t x545 = -775575039;
int64_t x547 = INT64_MAX;
uint8_t x549 = UINT8_MAX;
int64_t x552 = INT64_MAX;
int16_t x554 = INT16_MIN;
uint16_t x555 = 1168U;
int64_t x557 = -1LL;
uint32_t x562 = 100U;
static volatile int8_t x563 = -1;
uint64_t t123 = UINT64_MAX;
int64_t x572 = -1LL;
volatile int64_t t126 = -10223952960967705LL;
static int8_t x595 = INT8_MAX;
volatile uint64_t t130 = 3LLU;
static int64_t t133 = INT64_MIN;
int32_t x609 = INT32_MAX;
static uint64_t x612 = UINT64_MAX;
int64_t x625 = INT64_MIN;
int64_t x632 = -3229732781605960790LL;
uint32_t x633 = 1U;
uint32_t x636 = 3769U;
static volatile uint32_t x647 = 14777U;
volatile int64_t x648 = -74812433248LL;
static int64_t t142 = 1557550LL;
int8_t x654 = 11;
volatile uint32_t t143 = 923037U;
static int64_t x659 = INT64_MAX;
int64_t t146 = 290448215LL;
volatile int32_t x681 = INT32_MIN;
static volatile int64_t x682 = INT64_MIN;
int64_t x683 = INT64_MAX;
volatile uint64_t t149 = 58LLU;
int16_t x698 = -1;
int32_t x699 = INT32_MIN;
int32_t x700 = INT32_MAX;
uint64_t x701 = 31955LLU;
int8_t x718 = -10;
int32_t x725 = 34362465;
uint32_t t158 = 188273U;
static int32_t x739 = 64754618;
uint32_t x741 = 27854556U;
int64_t x754 = INT64_MIN;
int32_t x761 = -7;
volatile uint64_t x763 = 838LLU;
int32_t x768 = -1;
uint8_t x773 = 0U;
int8_t x776 = 0;
volatile uint32_t t167 = 327065U;
volatile int64_t x779 = -1LL;
volatile uint32_t x780 = UINT32_MAX;
static int8_t x783 = -59;
int64_t t170 = 1LL;
int16_t x796 = INT16_MIN;
volatile int32_t t172 = -494833;
int16_t x802 = 7;
volatile int32_t x803 = -497164;
volatile int16_t x809 = INT16_MAX;
int64_t x810 = INT64_MAX;
volatile uint64_t t177 = 63082745LLU;
int16_t x820 = -1;
int64_t x826 = -1LL;
volatile int64_t t179 = -419507LL;
uint64_t x832 = 130215795742LLU;
volatile uint64_t t180 = 140009664153682LLU;
static volatile int32_t t182 = INT32_MAX;
uint32_t x846 = 44U;
static uint64_t x848 = 20312807016588537LLU;
volatile uint64_t t184 = UINT64_MAX;
uint8_t x849 = UINT8_MAX;
int8_t x852 = INT8_MIN;
int32_t t185 = -430;
int64_t x863 = 24452LL;
static int32_t x867 = INT32_MAX;
static int32_t t189 = 136134;
int32_t x875 = -1;
volatile uint8_t x877 = 3U;
static uint64_t x887 = 245949960196840362LLU;
volatile int32_t x896 = INT32_MIN;
volatile uint8_t x907 = 11U;
volatile uint64_t t198 = UINT64_MAX;
uint64_t x910 = 400422523LLU;
int8_t x911 = 1;


void f0(void) {
    	volatile uint16_t x1 = UINT16_MAX;
	uint16_t x2 = 640U;
	static volatile int64_t x3 = -161LL;
	int8_t x4 = 3;
	volatile int64_t t0 = 51853813499LL;

    t0 = (x1|(x2&(x3+x4)));

    if (t0 != 65535LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 2852U;
	uint32_t x7 = 2244641U;
	volatile int8_t x8 = -41;
	volatile uint32_t t1 = UINT32_MAX;

    t1 = (x5|(x6&(x7+x8)));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	uint32_t x10 = UINT32_MAX;
	static int8_t x11 = -1;
	static int16_t x12 = INT16_MIN;
	int64_t t2 = -917959LL;

    t2 = (x9|(x10&(x11+x12)));

    if (t2 != -9223372032559841281LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 33;
	int8_t x16 = INT8_MIN;
	volatile int64_t t3 = -3119801787446095764LL;

    t3 = (x13|(x14&(x15+x16)));

    if (t3 != 32619LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x21 = 17234U;
	uint8_t x22 = 1U;
	int32_t x23 = 242021972;
	static int64_t x24 = -3919094807963114LL;

    t4 = (x21|(x22&(x23+x24)));

    if (t4 != 17234LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x26 = INT16_MAX;
	uint8_t x27 = 2U;
	int32_t x28 = -659888215;
	static volatile uint64_t t5 = 4LLU;

    t5 = (x25|(x26&(x27+x28)));

    if (t5 != 26619LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = -45;
	static int64_t x34 = -1LL;
	static volatile int16_t x35 = -1;
	uint32_t x36 = UINT32_MAX;
	int64_t t6 = -287038724741491LL;

    t6 = (x33|(x34&(x35+x36)));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x37 = 646U;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MAX;
	static uint32_t x40 = 10984U;
	static volatile uint32_t t7 = 10U;

    t7 = (x37|(x38&(x39+x40)));

    if (t7 != 11142U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -1;
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 1380000LLU;
	static uint64_t t8 = UINT64_MAX;

    t8 = (x41|(x42&(x43+x44)));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = -1;
	uint8_t x47 = 1U;
	uint32_t t9 = UINT32_MAX;

    t9 = (x45|(x46&(x47+x48)));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = -1266;
	uint64_t x50 = 7542914814004631LLU;
	uint32_t x52 = 0U;
	volatile uint64_t t10 = 365135LLU;

    t10 = (x49|(x50&(x51+x52)));

    if (t10 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 191U;
	static int64_t x54 = INT64_MAX;
	volatile int8_t x55 = INT8_MAX;
	int32_t x56 = INT32_MIN;
	volatile int64_t t11 = -12261LL;

    t11 = (x53|(x54&(x55+x56)));

    if (t11 != 9223372034707292415LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x58 = INT8_MAX;
	int64_t x59 = 71816LL;
	static uint8_t x60 = 49U;

    t12 = (x57|(x58&(x59+x60)));

    if (t12 != 57LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = UINT8_MAX;
	uint64_t x62 = 9104LLU;
	int64_t x63 = -208147743LL;
	int64_t x64 = -1LL;
	volatile uint64_t t13 = 21LLU;

    t13 = (x61|(x62&(x63+x64)));

    if (t13 != 8959LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x66 = INT16_MIN;
	static volatile int32_t x67 = 3804;
	int16_t x68 = 6744;

    t14 = (x65|(x66&(x67+x68)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -2220248295043083LL;
	static int32_t x70 = -34;
	int16_t x71 = 66;
	volatile int64_t x72 = INT64_MIN;
	int64_t t15 = 7937LL;

    t15 = (x69|(x70&(x71+x72)));

    if (t15 != -2220248295043081LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x73 = -41;
	uint8_t x74 = 3U;
	uint64_t x75 = 2566618857969898LLU;
	int16_t x76 = INT16_MIN;
	volatile uint64_t t16 = 127276122324LLU;

    t16 = (x73|(x74&(x75+x76)));

    if (t16 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = -1;
	static int8_t x79 = INT8_MAX;
	static uint32_t x80 = UINT32_MAX;
	uint32_t t17 = UINT32_MAX;

    t17 = (x77|(x78&(x79+x80)));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = -1;
	uint8_t x82 = 58U;
	volatile uint8_t x83 = 28U;
	uint64_t x84 = 120713105587506046LLU;
	static uint64_t t18 = UINT64_MAX;

    t18 = (x81|(x82&(x83+x84)));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x85 = 24462549845879LL;
	int32_t x86 = -88;
	int32_t x87 = INT32_MIN;
	int64_t x88 = 10LL;
	volatile int64_t t19 = -8481720966LL;

    t19 = (x85|(x86&(x87+x88)));

    if (t19 != -1583872129LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x89 = INT8_MIN;
	static uint32_t x90 = 13760U;
	static int64_t x91 = INT64_MAX;
	uint16_t x92 = 0U;
	static int64_t t20 = -7938067LL;

    t20 = (x89|(x90&(x91+x92)));

    if (t20 != -64LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 1U;
	uint32_t x94 = 560300898U;
	static volatile uint64_t x95 = UINT64_MAX;
	int16_t x96 = -1;
	uint64_t t21 = 7LLU;

    t21 = (x93|(x94&(x95+x96)));

    if (t21 != 560300899LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x98 = 2U;
	int32_t x99 = INT32_MIN;

    t22 = (x97|(x98&(x99+x100)));

    if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MAX;
	int64_t x102 = INT64_MIN;
	volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t23 = 15009155LLU;

    t23 = (x101|(x102&(x103+x104)));

    if (t23 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x105 = -1;
	static uint8_t x107 = UINT8_MAX;
	int64_t x108 = -6977LL;
	volatile int64_t t24 = -15854LL;

    t24 = (x105|(x106&(x107+x108)));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = UINT8_MAX;
	int16_t x110 = INT16_MIN;
	int16_t x112 = -2;
	volatile int32_t t25 = 3;

    t25 = (x109|(x110&(x111+x112)));

    if (t25 != 2147451135) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = INT16_MIN;
	volatile int32_t x114 = -1;
	int64_t x115 = INT64_MAX;
	uint64_t x116 = 49177666312653LLU;
	uint64_t t26 = 315LLU;

    t26 = (x113|(x114&(x115+x116)));

    if (t26 != 18446744073709541836LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	uint16_t x120 = 2422U;

    t27 = (x117|(x118&(x119+x120)));

    if (t27 != 4294967168U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x121 = 10498LLU;
	volatile uint8_t x122 = 3U;
	int8_t x123 = -1;
	uint64_t x124 = 371969936118654101LLU;
	volatile uint64_t t28 = 59777568130711LLU;

    t28 = (x121|(x122&(x123+x124)));

    if (t28 != 10498LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x125 = INT32_MAX;
	int32_t x126 = INT32_MIN;
	static volatile int16_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	uint32_t t29 = UINT32_MAX;

    t29 = (x125|(x126&(x127+x128)));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x129 = UINT8_MAX;
	int16_t x131 = INT16_MAX;
	volatile int32_t t30 = 108312503;

    t30 = (x129|(x130&(x131+x132)));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = INT64_MAX;
	volatile int64_t x135 = 503758290574LL;
	uint8_t x136 = 9U;
	volatile int64_t t31 = INT64_MAX;

    t31 = (x133|(x134&(x135+x136)));

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x141 = INT8_MIN;
	int16_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	uint64_t t32 = 2153LLU;

    t32 = (x141|(x142&(x143+x144)));

    if (t32 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x145 = -10;
	static int8_t x146 = INT8_MIN;
	uint8_t x147 = 3U;
	int32_t x148 = 57481345;
	volatile int32_t t33 = 2126589;

    t33 = (x145|(x146&(x147+x148)));

    if (t33 != -10) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x151 = UINT64_MAX;
	volatile uint64_t t34 = 251014618LLU;

    t34 = (x149|(x150&(x151+x152)));

    if (t34 != 18446744073709537424LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = 568546898175LL;
	static volatile int64_t x154 = INT64_MIN;
	uint16_t x155 = 3422U;
	uint8_t x156 = 1U;
	volatile int64_t t35 = 2364223491887LL;

    t35 = (x153|(x154&(x155+x156)));

    if (t35 != 568546898175LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x157 = 7002U;
	uint8_t x158 = 26U;
	int32_t x159 = -1;
	volatile int8_t x160 = INT8_MIN;
	int32_t t36 = -7359839;

    t36 = (x157|(x158&(x159+x160)));

    if (t36 != 7002) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x165 = 255U;
	volatile uint64_t x166 = 367535241372LLU;
	int64_t x167 = -1LL;
	static int64_t x168 = -1LL;
	uint64_t t37 = 23LLU;

    t37 = (x165|(x166&(x167+x168)));

    if (t37 != 367535241471LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x169 = 3163641U;
	static int8_t x170 = INT8_MIN;
	int8_t x171 = -1;
	uint16_t x172 = 17238U;
	volatile uint32_t t38 = 55513782U;

    t38 = (x169|(x170&(x171+x172)));

    if (t38 != 3164153U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x173 = 10U;
	volatile uint32_t x174 = 166890U;
	volatile int64_t x176 = INT64_MIN;

    t39 = (x173|(x174&(x175+x176)));

    if (t39 != 106LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = INT32_MIN;
	static int8_t x179 = -1;
	int32_t x180 = INT32_MAX;
	uint32_t t40 = 3U;

    t40 = (x177|(x178&(x179+x180)));

    if (t40 != 2147494742U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x181 = 5;
	int64_t x182 = INT64_MIN;
	static int32_t x184 = -1;
	int64_t t41 = -13677155297081LL;

    t41 = (x181|(x182&(x183+x184)));

    if (t41 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x185 = 6631777LLU;
	static uint8_t x186 = UINT8_MAX;
	uint64_t x187 = 594038LLU;
	static uint8_t x188 = 100U;
	volatile uint64_t t42 = 20748423LLU;

    t42 = (x185|(x186&(x187+x188)));

    if (t42 != 6631931LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x189 = UINT16_MAX;
	int32_t x190 = -82499;
	uint8_t x191 = 99U;
	int8_t x192 = INT8_MIN;
	volatile int32_t t43 = 14096782;

    t43 = (x189|(x190&(x191+x192)));

    if (t43 != -65537) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x193 = UINT64_MAX;
	static int8_t x194 = INT8_MIN;
	uint16_t x195 = 1U;
	volatile int64_t x196 = INT64_MIN;
	volatile uint64_t t44 = UINT64_MAX;

    t44 = (x193|(x194&(x195+x196)));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x198 = 434283471015112LLU;
	static uint64_t x199 = 2447923456023LLU;
	volatile uint64_t t45 = 11LLU;

    t45 = (x197|(x198&(x199+x200)));

    if (t45 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x201 = INT64_MAX;
	int32_t x202 = INT32_MIN;
	int32_t x203 = 2038;
	static int64_t t46 = INT64_MAX;

    t46 = (x201|(x202&(x203+x204)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x205 = UINT16_MAX;
	int16_t x206 = -1;
	int32_t x207 = 2;
	int8_t x208 = -1;
	volatile int32_t t47 = -6743431;

    t47 = (x205|(x206&(x207+x208)));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = 0;
	int16_t x210 = 227;
	volatile uint16_t x211 = UINT16_MAX;
	int64_t x212 = -1LL;
	volatile int64_t t48 = -23491394LL;

    t48 = (x209|(x210&(x211+x212)));

    if (t48 != 226LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x213 = 124;
	uint64_t x215 = UINT64_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile uint64_t t49 = 0LLU;

    t49 = (x213|(x214&(x215+x216)));

    if (t49 != 4294967294LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x217 = INT32_MIN;
	int16_t x218 = 1;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = 241U;
	uint32_t t50 = 5U;

    t50 = (x217|(x218&(x219+x220)));

    if (t50 != 2147483649U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = 2;
	static int16_t x222 = INT16_MAX;
	uint8_t x223 = UINT8_MAX;
	int32_t t51 = 3;

    t51 = (x221|(x222&(x223+x224)));

    if (t51 != 254) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x231 = INT16_MIN;
	static volatile int64_t t52 = -3459LL;

    t52 = (x229|(x230&(x231+x232)));

    if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x235 = -1321491;
	volatile uint32_t x236 = UINT32_MAX;
	uint32_t t53 = 5366U;

    t53 = (x233|(x234&(x235+x236)));

    if (t53 != 4293623809U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x237 = 13427U;
	volatile int8_t x238 = 2;
	static int32_t x239 = -972;
	int16_t x240 = -1;
	volatile int32_t t54 = -9796889;

    t54 = (x237|(x238&(x239+x240)));

    if (t54 != 13427) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x241 = 1252U;
	int16_t x242 = -1;
	volatile int8_t x243 = 48;
	volatile int64_t x244 = INT64_MIN;

    t55 = (x241|(x242&(x243+x244)));

    if (t55 != -9223372036854774540LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x245 = -1;
	int8_t x247 = -1;
	uint8_t x248 = 0U;
	static volatile int32_t t56 = -113471040;

    t56 = (x245|(x246&(x247+x248)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x249 = INT64_MIN;
	uint16_t x250 = 1265U;
	volatile uint8_t x251 = 9U;
	int64_t x252 = 1027475928048085LL;
	volatile int64_t t57 = 29053947507223LL;

    t57 = (x249|(x250&(x251+x252)));

    if (t57 != -9223372036854775600LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x253 = 341854;
	int64_t x254 = 7275217081LL;
	uint8_t x255 = 0U;
	volatile int64_t t58 = -222101354350252LL;

    t58 = (x253|(x254&(x255+x256)));

    if (t58 != 341855LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x262 = INT16_MIN;
	uint16_t x263 = 44U;
	static int32_t x264 = -387;
	volatile int32_t t59 = 24;

    t59 = (x261|(x262&(x263+x264)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x265 = UINT16_MAX;
	int64_t x266 = -4364341428706LL;
	int64_t x267 = -52705037LL;
	int32_t x268 = 7109119;
	volatile int64_t t60 = -5344LL;

    t60 = (x265|(x266&(x267+x268)));

    if (t60 != -4364353077249LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x269 = 11U;
	volatile uint64_t x270 = UINT64_MAX;
	uint16_t x271 = 11U;
	int16_t x272 = -1451;
	uint64_t t61 = 264858LLU;

    t61 = (x269|(x270&(x271+x272)));

    if (t61 != 18446744073709550187LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x273 = 80U;
	volatile int64_t x274 = INT64_MIN;
	uint8_t x275 = 33U;
	int32_t x276 = INT32_MIN;
	static volatile int64_t t62 = -200547616LL;

    t62 = (x273|(x274&(x275+x276)));

    if (t62 != -9223372036854775728LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x282 = INT8_MAX;
	static volatile int32_t x283 = -20134;
	static int32_t x284 = -1;
	uint32_t t63 = 49770U;

    t63 = (x281|(x282&(x283+x284)));

    if (t63 != 72445U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x286 = -6;
	static int8_t x287 = INT8_MIN;
	static volatile uint32_t t64 = UINT32_MAX;

    t64 = (x285|(x286&(x287+x288)));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	volatile uint32_t t65 = 516833U;

    t65 = (x293|(x294&(x295+x296)));

    if (t65 != 4294967179U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x300 = 142819876089792LL;
	static int64_t t66 = 66989443189626166LL;

    t66 = (x297|(x298&(x299+x300)));

    if (t66 != 142820547494720LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x301 = UINT32_MAX;
	int32_t x302 = -1;
	uint8_t x303 = 10U;
	int64_t x304 = -24LL;
	int64_t t67 = 248848LL;

    t67 = (x301|(x302&(x303+x304)));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x305 = -4;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	static int32_t t68 = -39;

    t68 = (x305|(x306&(x307+x308)));

    if (t68 != -4) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x309 = INT8_MAX;
	int16_t x310 = -51;
	int8_t x311 = -3;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t69 = -577;

    t69 = (x309|(x310&(x311+x312)));

    if (t69 != -32769) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x313 = UINT32_MAX;
	static uint8_t x314 = 36U;
	uint16_t x315 = 19364U;
	uint32_t t70 = UINT32_MAX;

    t70 = (x313|(x314&(x315+x316)));

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x317 = 2U;
	uint64_t x320 = 29760LLU;

    t71 = (x317|(x318&(x319+x320)));

    if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x322 = INT8_MIN;
	static int16_t x323 = INT16_MAX;
	int8_t x324 = -1;
	int32_t t72 = -537023237;

    t72 = (x321|(x322&(x323+x324)));

    if (t72 != 32649) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	volatile int64_t x335 = 253043654831311327LL;
	volatile int64_t t73 = -378246426535LL;

    t73 = (x333|(x334&(x335+x336)));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x341 = INT32_MIN;
	static int32_t x342 = -1;
	uint16_t x343 = 36U;
	int16_t x344 = 1;
	static volatile int32_t t74 = 62;

    t74 = (x341|(x342&(x343+x344)));

    if (t74 != -2147483611) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x346 = -1LL;
	static int64_t x348 = -1LL;
	volatile int64_t t75 = -256289415LL;

    t75 = (x345|(x346&(x347+x348)));

    if (t75 != -129LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x349 = -4;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = -1LL;
	uint16_t x352 = 1717U;
	int64_t t76 = 5676720882LL;

    t76 = (x349|(x350&(x351+x352)));

    if (t76 != -4LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x357 = INT8_MIN;
	int32_t x358 = -124897205;
	uint16_t x359 = 654U;
	volatile int16_t x360 = INT16_MIN;
	static int32_t t77 = 25356;

    t77 = (x357|(x358&(x359+x360)));

    if (t77 != -118) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x361 = INT32_MIN;
	uint8_t x362 = 1U;
	int8_t x364 = 13;
	int32_t t78 = 22;

    t78 = (x361|(x362&(x363+x364)));

    if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x365 = 20U;
	int64_t x366 = INT64_MIN;
	static uint64_t x367 = 341422LLU;
	static int32_t x368 = INT32_MAX;

    t79 = (x365|(x366&(x367+x368)));

    if (t79 != 20LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x369 = INT32_MAX;
	volatile uint16_t x370 = 12520U;
	int16_t x371 = INT16_MAX;
	volatile int8_t x372 = -22;
	int32_t t80 = INT32_MAX;

    t80 = (x369|(x370&(x371+x372)));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x373 = 280234990;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = -1978;

    t81 = (x373|(x374&(x375+x376)));

    if (t81 != 280296447) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x378 = INT32_MIN;
	volatile int16_t x380 = 1;
	int64_t t82 = 20925LL;

    t82 = (x377|(x378&(x379+x380)));

    if (t82 != -4060891578271LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x381 = 107770337882LLU;
	static int64_t x384 = 106082LL;
	volatile uint64_t t83 = 12LLU;

    t83 = (x381|(x382&(x383+x384)));

    if (t83 != 107770412671LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x385 = 245296845837010LLU;
	int64_t x386 = -1LL;
	uint16_t x387 = 434U;
	static volatile uint64_t t84 = 205019319009LLU;

    t84 = (x385|(x386&(x387+x388)));

    if (t84 != 245296845837298LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x389 = -1;
	int64_t x390 = -1LL;
	volatile int64_t t85 = 8147323LL;

    t85 = (x389|(x390&(x391+x392)));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x393 = INT64_MAX;
	uint64_t x394 = 2505801441219469LLU;
	int16_t x395 = INT16_MIN;
	static int8_t x396 = INT8_MIN;
	volatile uint64_t t86 = 53016839084403630LLU;

    t86 = (x393|(x394&(x395+x396)));

    if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	int64_t x402 = -1LL;
	int64_t x403 = -1LL;
	int32_t x404 = -1;
	volatile int64_t t87 = 2LL;

    t87 = (x401|(x402&(x403+x404)));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x405 = INT64_MIN;
	static uint32_t x406 = UINT32_MAX;
	int8_t x407 = -10;
	volatile int64_t t88 = -887LL;

    t88 = (x405|(x406&(x407+x408)));

    if (t88 != -9223372032559808650LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x409 = 1U;
	volatile int64_t x410 = -7220881544460LL;
	volatile uint16_t x411 = UINT16_MAX;
	int64_t t89 = 1582727LL;

    t89 = (x409|(x410&(x411+x412)));

    if (t89 != 65633LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x413 = 50;
	static uint8_t x415 = 3U;
	static volatile int32_t t90 = 3;

    t90 = (x413|(x414&(x415+x416)));

    if (t90 != 51) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x417 = INT32_MIN;
	uint32_t x418 = 51822687U;
	int32_t x419 = 4813227;
	int8_t x420 = INT8_MIN;
	static volatile uint32_t t91 = 1322756049U;

    t91 = (x417|(x418&(x419+x420)));

    if (t91 != 2147500043U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x422 = 52U;
	int64_t x423 = INT64_MIN;
	volatile int64_t t92 = 1601LL;

    t92 = (x421|(x422&(x423+x424)));

    if (t92 != 334LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = 1498637;
	int64_t x426 = -965077410503599869LL;
	static int8_t x427 = -1;
	volatile uint8_t x428 = 2U;
	volatile int64_t t93 = -1935337920295383094LL;

    t93 = (x425|(x426&(x427+x428)));

    if (t93 != 1498637LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MIN;
	static uint64_t x432 = 638413463646688162LLU;
	volatile uint64_t t94 = 5934888668831918LLU;

    t94 = (x429|(x430&(x431+x432)));

    if (t94 != 638413463646655444LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x433 = 10;
	int8_t x434 = INT8_MAX;
	volatile int64_t x435 = -1LL;
	volatile int16_t x436 = INT16_MIN;

    t95 = (x433|(x434&(x435+x436)));

    if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x437 = INT8_MAX;
	int64_t x439 = INT64_MIN;
	uint64_t t96 = 1024823897555367215LLU;

    t96 = (x437|(x438&(x439+x440)));

    if (t96 != 9223372680856509311LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x441 = UINT64_MAX;
	static int64_t x443 = -1LL;
	int16_t x444 = -3306;
	static volatile uint64_t t97 = UINT64_MAX;

    t97 = (x441|(x442&(x443+x444)));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x445 = INT32_MAX;
	int8_t x446 = 0;
	int8_t x447 = -7;
	int8_t x448 = INT8_MAX;
	int32_t t98 = INT32_MAX;

    t98 = (x445|(x446&(x447+x448)));

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x449 = 92974884LLU;
	int16_t x450 = -1;
	uint64_t x451 = UINT64_MAX;
	volatile uint64_t t99 = 302215LLU;

    t99 = (x449|(x450&(x451+x452)));

    if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x455 = INT8_MAX;
	volatile uint16_t x456 = UINT16_MAX;
	int32_t t100 = 1041120080;

    t100 = (x453|(x454&(x455+x456)));

    if (t100 != 65663) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x457 = 60;
	uint8_t x458 = 4U;
	static int16_t x459 = -912;
	static int64_t x460 = -1LL;
	volatile int64_t t101 = -742LL;

    t101 = (x457|(x458&(x459+x460)));

    if (t101 != 60LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	int32_t x470 = -1;
	volatile int32_t x471 = INT32_MIN;
	uint32_t x472 = UINT32_MAX;
	volatile uint32_t t102 = 17466U;

    t102 = (x469|(x470&(x471+x472)));

    if (t102 != 2147483647U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x473 = INT32_MIN;
	int32_t x474 = 1;
	int8_t x475 = -46;
	int64_t x476 = INT64_MAX;
	int64_t t103 = -190LL;

    t103 = (x473|(x474&(x475+x476)));

    if (t103 != -2147483647LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x477 = INT8_MAX;
	uint64_t x478 = UINT64_MAX;
	int32_t x479 = INT32_MIN;
	int64_t x480 = -22725506LL;
	uint64_t t104 = 3932724714LLU;

    t104 = (x477|(x478&(x479+x480)));

    if (t104 != 18446744071539342463LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x481 = INT64_MAX;
	int8_t x483 = -1;
	int64_t x484 = -1LL;
	volatile int64_t t105 = INT64_MAX;

    t105 = (x481|(x482&(x483+x484)));

    if (t105 != INT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x485 = -76397995966463629LL;
	int8_t x486 = INT8_MIN;
	volatile int32_t x487 = INT32_MIN;
	int64_t x488 = INT64_MAX;
	int64_t t106 = -3475346LL;

    t106 = (x485|(x486&(x487+x488)));

    if (t106 != -2147483661LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x489 = INT16_MIN;
	int8_t x490 = INT8_MAX;
	static int32_t x491 = -1;
	static volatile uint32_t x492 = 6979859U;

    t107 = (x489|(x490&(x491+x492)));

    if (t107 != 4294934546U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x493 = INT32_MAX;
	int32_t x494 = INT32_MAX;
	volatile int16_t x495 = INT16_MIN;
	int32_t x496 = -96;
	int32_t t108 = INT32_MAX;

    t108 = (x493|(x494&(x495+x496)));

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x497 = 254002LLU;
	int64_t x499 = INT64_MIN;
	int64_t x500 = INT64_MAX;
	static volatile uint64_t t109 = 14462074321LLU;

    t109 = (x497|(x498&(x499+x500)));

    if (t109 != 254207LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x501 = INT64_MAX;
	volatile uint8_t x502 = 16U;
	int8_t x503 = INT8_MAX;
	static int32_t x504 = -1;
	static int64_t t110 = INT64_MAX;

    t110 = (x501|(x502&(x503+x504)));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x513 = -26;
	uint32_t x514 = 724U;
	uint16_t x515 = 0U;
	static uint32_t t111 = 0U;

    t111 = (x513|(x514&(x515+x516)));

    if (t111 != 4294967270U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x520 = -1416673192575328LL;
	volatile int64_t t112 = 10477LL;

    t112 = (x517|(x518&(x519+x520)));

    if (t112 != 65535LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x521 = INT8_MAX;
	int64_t x523 = -1LL;
	uint32_t x524 = 98574520U;
	int64_t t113 = -13904315478LL;

    t113 = (x521|(x522&(x523+x524)));

    if (t113 != 98574591LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x525 = 667579815330LL;
	uint64_t x526 = 957589717568519LLU;
	static volatile uint64_t x527 = 1905809908580LLU;
	int32_t x528 = -116062397;
	volatile uint64_t t114 = 11195086LLU;

    t114 = (x525|(x526&(x527+x528)));

    if (t114 != 805289581991LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x533 = 140;
	int16_t x534 = -1;
	int64_t x535 = INT64_MIN;
	uint8_t x536 = UINT8_MAX;
	int64_t t115 = -1LL;

    t115 = (x533|(x534&(x535+x536)));

    if (t115 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x537 = -62023;
	int64_t x539 = INT64_MAX;
	volatile uint64_t t116 = UINT64_MAX;

    t116 = (x537|(x538&(x539+x540)));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x541 = INT16_MIN;
	static int16_t x542 = 68;
	static int64_t x543 = -1LL;
	static int16_t x544 = 3;
	int64_t t117 = 10697LL;

    t117 = (x541|(x542&(x543+x544)));

    if (t117 != -32768LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x546 = INT64_MIN;
	uint64_t x548 = UINT64_MAX;
	static volatile uint64_t t118 = 105LLU;

    t118 = (x545|(x546&(x547+x548)));

    if (t118 != 18446744072933976577LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x550 = 62U;
	volatile int32_t x551 = -1;
	int64_t t119 = -431255LL;

    t119 = (x549|(x550&(x551+x552)));

    if (t119 != 255LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x553 = INT16_MIN;
	int8_t x556 = -2;
	int32_t t120 = 11633208;

    t120 = (x553|(x554&(x555+x556)));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x558 = INT64_MIN;
	int32_t x559 = -1;
	volatile uint32_t x560 = UINT32_MAX;
	int64_t t121 = 831701904655314LL;

    t121 = (x557|(x558&(x559+x560)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x561 = 9;
	volatile int16_t x564 = INT16_MAX;
	uint32_t t122 = 512541U;

    t122 = (x561|(x562&(x563+x564)));

    if (t122 != 109U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x565 = -1;
	uint32_t x566 = 14192U;
	int16_t x567 = -1;
	uint64_t x568 = 4484LLU;

    t123 = (x565|(x566&(x567+x568)));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x569 = 3838U;
	int32_t x570 = INT32_MIN;
	int64_t x571 = -1LL;
	static volatile int64_t t124 = -21568523LL;

    t124 = (x569|(x570&(x571+x572)));

    if (t124 != -2147479810LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x573 = -12;
	static int16_t x574 = -1;
	static int16_t x575 = 7;
	static volatile int32_t x576 = 252;
	volatile int32_t t125 = -216819814;

    t125 = (x573|(x574&(x575+x576)));

    if (t125 != -9) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x577 = INT16_MIN;
	static int64_t x578 = -1LL;
	volatile uint8_t x579 = UINT8_MAX;
	int32_t x580 = -1;

    t126 = (x577|(x578&(x579+x580)));

    if (t126 != -32514LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x581 = INT32_MIN;
	int8_t x582 = 1;
	int64_t x583 = INT64_MAX;
	static volatile uint16_t x584 = 0U;
	static int64_t t127 = -267211832177445525LL;

    t127 = (x581|(x582&(x583+x584)));

    if (t127 != -2147483647LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x585 = 33U;
	volatile uint32_t x586 = 12926107U;
	volatile int8_t x587 = INT8_MIN;
	static int32_t x588 = 13;
	volatile uint32_t t128 = 11469U;

    t128 = (x585|(x586&(x587+x588)));

    if (t128 != 12926121U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x589 = -1;
	int64_t x590 = 82248LL;
	static int16_t x591 = INT16_MIN;
	uint32_t x592 = UINT32_MAX;
	volatile int64_t t129 = 917LL;

    t129 = (x589|(x590&(x591+x592)));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x593 = 162718838010073368LLU;
	int16_t x594 = -23;
	uint16_t x596 = UINT16_MAX;

    t130 = (x593|(x594&(x595+x596)));

    if (t130 != 162718838010139000LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x597 = INT8_MIN;
	int32_t x598 = 1;
	uint32_t x599 = 1606U;
	int32_t x600 = 0;
	volatile uint32_t t131 = 3U;

    t131 = (x597|(x598&(x599+x600)));

    if (t131 != 4294967168U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x601 = 256309977432477007LL;
	uint8_t x602 = 3U;
	volatile uint16_t x603 = 1347U;
	int8_t x604 = 28;
	int64_t t132 = -10268264014588LL;

    t132 = (x601|(x602&(x603+x604)));

    if (t132 != 256309977432477007LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x605 = INT64_MIN;
	int16_t x606 = INT16_MIN;
	static uint16_t x607 = 1816U;
	static int32_t x608 = -1;

    t133 = (x605|(x606&(x607+x608)));

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x610 = 0U;
	uint32_t x611 = 9U;
	volatile uint64_t t134 = 785LLU;

    t134 = (x609|(x610&(x611+x612)));

    if (t134 != 2147483647LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x613 = 1345829;
	static volatile int32_t x614 = INT32_MIN;
	uint8_t x615 = UINT8_MAX;
	int8_t x616 = INT8_MIN;
	volatile int32_t t135 = 917473;

    t135 = (x613|(x614&(x615+x616)));

    if (t135 != 1345829) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x617 = UINT64_MAX;
	uint32_t x618 = UINT32_MAX;
	uint8_t x619 = 6U;
	int16_t x620 = INT16_MIN;
	uint64_t t136 = UINT64_MAX;

    t136 = (x617|(x618&(x619+x620)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x626 = UINT16_MAX;
	uint32_t x627 = UINT32_MAX;
	static int64_t x628 = -1LL;
	int64_t t137 = 167566LL;

    t137 = (x625|(x626&(x627+x628)));

    if (t137 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	uint32_t x630 = UINT32_MAX;
	int8_t x631 = INT8_MIN;
	volatile int64_t t138 = 184175204741847LL;

    t138 = (x629|(x630&(x631+x632)));

    if (t138 != 4294967295LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x634 = 8500703194878LLU;
	volatile uint8_t x635 = 82U;
	uint64_t t139 = 7715705250602956LLU;

    t139 = (x633|(x634&(x635+x636)));

    if (t139 != 3595LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x637 = UINT16_MAX;
	uint64_t x638 = 3239118474018570291LLU;
	static int16_t x639 = INT16_MAX;
	int64_t x640 = -3LL;
	uint64_t t140 = 261146081857171092LLU;

    t140 = (x637|(x638&(x639+x640)));

    if (t140 != 65535LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x641 = INT64_MAX;
	volatile uint64_t x642 = UINT64_MAX;
	volatile int64_t x643 = -1LL;
	static uint16_t x644 = UINT16_MAX;
	volatile uint64_t t141 = 324102586110372490LLU;

    t141 = (x641|(x642&(x643+x644)));

    if (t141 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x645 = 8026773U;
	uint32_t x646 = 818350U;

    t142 = (x645|(x646&(x647+x648)));

    if (t142 != 8289949LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x653 = 3191U;
	int8_t x655 = INT8_MIN;
	static int16_t x656 = INT16_MIN;

    t143 = (x653|(x654&(x655+x656)));

    if (t143 != 3191U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x657 = UINT16_MAX;
	int16_t x658 = -1;
	volatile int64_t x660 = INT64_MIN;
	volatile int64_t t144 = 40LL;

    t144 = (x657|(x658&(x659+x660)));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x665 = -898496;
	static uint32_t x666 = 2564140U;
	int8_t x667 = INT8_MIN;
	int8_t x668 = INT8_MIN;
	uint32_t t145 = 0U;

    t145 = (x665|(x666&(x667+x668)));

    if (t145 != 4294404672U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x669 = INT16_MIN;
	volatile uint8_t x670 = 4U;
	static int32_t x671 = INT32_MIN;
	int64_t x672 = 98982705LL;

    t146 = (x669|(x670&(x671+x672)));

    if (t146 != -32768LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x673 = -2194369370550591LL;
	uint8_t x674 = 7U;
	volatile int64_t x675 = 55710037480172LL;
	uint8_t x676 = 38U;
	volatile int64_t t147 = 5LL;

    t147 = (x673|(x674&(x675+x676)));

    if (t147 != -2194369370550589LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x677 = 309281715LLU;
	volatile int8_t x678 = 0;
	static uint32_t x679 = 30299758U;
	uint8_t x680 = 1U;
	uint64_t t148 = 1789538235LLU;

    t148 = (x677|(x678&(x679+x680)));

    if (t148 != 309281715LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x684 = 200247878LLU;

    t149 = (x681|(x682&(x683+x684)));

    if (t149 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x685 = INT8_MIN;
	int8_t x686 = -1;
	int64_t x687 = -1LL;
	int64_t x688 = -386104510145687481LL;
	int64_t t150 = 4941687197LL;

    t150 = (x685|(x686&(x687+x688)));

    if (t150 != -58LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x697 = INT16_MAX;
	volatile int32_t t151 = 117887;

    t151 = (x697|(x698&(x699+x700)));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x702 = UINT32_MAX;
	int64_t x703 = -1LL;
	int8_t x704 = INT8_MIN;
	static volatile uint64_t t152 = 172007379435LLU;

    t152 = (x701|(x702&(x703+x704)));

    if (t152 != 4294967295LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x705 = -1LL;
	int32_t x706 = INT32_MIN;
	uint64_t x707 = UINT64_MAX;
	int16_t x708 = -240;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = (x705|(x706&(x707+x708)));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint8_t x713 = UINT8_MAX;
	int8_t x714 = INT8_MIN;
	int8_t x715 = INT8_MAX;
	static volatile int32_t x716 = INT32_MIN;
	static volatile int32_t t154 = -389;

    t154 = (x713|(x714&(x715+x716)));

    if (t154 != -2147483393) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x717 = 8U;
	volatile int8_t x719 = INT8_MAX;
	volatile uint64_t x720 = 1LLU;
	volatile uint64_t t155 = 15670LLU;

    t155 = (x717|(x718&(x719+x720)));

    if (t155 != 136LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x721 = UINT64_MAX;
	volatile int16_t x722 = -1;
	int8_t x723 = INT8_MAX;
	int8_t x724 = -1;
	static uint64_t t156 = UINT64_MAX;

    t156 = (x721|(x722&(x723+x724)));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x726 = -4;
	volatile int8_t x727 = 3;
	int8_t x728 = 5;
	int32_t t157 = 1139582;

    t157 = (x725|(x726&(x727+x728)));

    if (t157 != 34362473) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x729 = 3592U;
	volatile int16_t x730 = INT16_MAX;
	static volatile uint8_t x731 = UINT8_MAX;
	volatile int32_t x732 = INT32_MIN;

    t158 = (x729|(x730&(x731+x732)));

    if (t158 != 3839U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x737 = -1;
	int64_t x738 = INT64_MIN;
	static volatile int32_t x740 = -2;
	volatile int64_t t159 = -529056334599LL;

    t159 = (x737|(x738&(x739+x740)));

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x742 = -1LL;
	uint16_t x743 = 5720U;
	static volatile int32_t x744 = INT32_MIN;
	int64_t t160 = 3470086603086627720LL;

    t160 = (x741|(x742&(x743+x744)));

    if (t160 != -2119624996LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x749 = -1;
	int64_t x750 = INT64_MIN;
	int8_t x751 = INT8_MIN;
	uint32_t x752 = UINT32_MAX;
	int64_t t161 = 461660LL;

    t161 = (x749|(x750&(x751+x752)));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x753 = 1795U;
	static int16_t x755 = -3892;
	int16_t x756 = -1;
	int64_t t162 = -11691454999LL;

    t162 = (x753|(x754&(x755+x756)));

    if (t162 != -9223372036854774013LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x757 = INT32_MAX;
	uint32_t x758 = 84898276U;
	int16_t x759 = -9548;
	volatile uint32_t x760 = 55U;
	volatile uint32_t t163 = 374U;

    t163 = (x757|(x758&(x759+x760)));

    if (t163 != 2147483647U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x762 = INT16_MAX;
	static int32_t x764 = INT32_MIN;
	volatile uint64_t t164 = UINT64_MAX;

    t164 = (x761|(x762&(x763+x764)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x765 = 905164249U;
	uint32_t x766 = 454635U;
	uint8_t x767 = UINT8_MAX;
	volatile uint32_t t165 = 11875U;

    t165 = (x765|(x766&(x767+x768)));

    if (t165 != 905164283U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	int64_t x770 = 286116616801LL;
	static int8_t x771 = INT8_MIN;
	uint64_t x772 = UINT64_MAX;
	uint64_t t166 = 56315LLU;

    t166 = (x769|(x770&(x771+x772)));

    if (t166 != 287762808831LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x774 = UINT32_MAX;
	uint8_t x775 = 30U;

    t167 = (x773|(x774&(x775+x776)));

    if (t167 != 30U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x777 = 510U;
	static uint8_t x778 = UINT8_MAX;
	int64_t t168 = 15LL;

    t168 = (x777|(x778&(x779+x780)));

    if (t168 != 510LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x781 = -1;
	static uint16_t x782 = 2U;
	int32_t x784 = -3376977;
	volatile int32_t t169 = 77;

    t169 = (x781|(x782&(x783+x784)));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = 31146035008261LL;
	static int16_t x787 = -371;
	static int32_t x788 = -1;

    t170 = (x785|(x786&(x787+x788)));

    if (t170 != -9223340890819767804LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x789 = INT32_MIN;
	uint16_t x790 = 2278U;
	int8_t x791 = -1;
	uint32_t x792 = UINT32_MAX;
	static uint32_t t171 = 13397U;

    t171 = (x789|(x790&(x791+x792)));

    if (t171 != 2147485926U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x793 = 8U;
	int16_t x794 = INT16_MIN;
	int16_t x795 = INT16_MAX;

    t172 = (x793|(x794&(x795+x796)));

    if (t172 != -32760) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x797 = 2128112134867LL;
	static uint32_t x798 = UINT32_MAX;
	uint8_t x799 = 3U;
	int8_t x800 = INT8_MIN;
	int64_t t173 = -22LL;

    t173 = (x797|(x798&(x799+x800)));

    if (t173 != 2130303778771LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x801 = 47U;
	static volatile uint32_t x804 = 118587432U;
	volatile uint32_t t174 = 9899U;

    t174 = (x801|(x802&(x803+x804)));

    if (t174 != 47U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x805 = 86LLU;
	int8_t x806 = INT8_MIN;
	volatile uint32_t x807 = UINT32_MAX;
	static volatile int8_t x808 = INT8_MIN;
	uint64_t t175 = 123LLU;

    t175 = (x805|(x806&(x807+x808)));

    if (t175 != 4294967126LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x811 = 39;
	int8_t x812 = 1;
	static volatile int64_t t176 = 69588303369443207LL;

    t176 = (x809|(x810&(x811+x812)));

    if (t176 != 32767LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x813 = -1772899655226591505LL;
	volatile int16_t x814 = -654;
	uint32_t x815 = UINT32_MAX;
	uint64_t x816 = 4768LLU;

    t177 = (x813|(x814&(x815+x816)));

    if (t177 != 16673844422777927423LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x817 = 4U;
	int16_t x818 = 129;
	uint32_t x819 = 20639147U;
	volatile uint32_t t178 = 3381U;

    t178 = (x817|(x818&(x819+x820)));

    if (t178 != 132U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x825 = INT8_MIN;
	volatile int8_t x827 = -1;
	static volatile int64_t x828 = 7230820132392LL;

    t179 = (x825|(x826&(x827+x828)));

    if (t179 != -89LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x829 = UINT8_MAX;
	volatile uint8_t x830 = 14U;
	int32_t x831 = -6726;

    t180 = (x829|(x830&(x831+x832)));

    if (t180 != 255LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x833 = UINT64_MAX;
	uint8_t x834 = 2U;
	int16_t x835 = INT16_MAX;
	volatile int16_t x836 = INT16_MIN;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = (x833|(x834&(x835+x836)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x837 = INT32_MAX;
	uint16_t x838 = UINT16_MAX;
	static int8_t x839 = 0;
	int8_t x840 = -1;

    t182 = (x837|(x838&(x839+x840)));

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x841 = 473;
	int8_t x842 = -1;
	int16_t x843 = 2;
	uint8_t x844 = 0U;
	static int32_t t183 = -11;

    t183 = (x841|(x842&(x843+x844)));

    if (t183 != 475) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x845 = -1;
	int64_t x847 = -42459151LL;

    t184 = (x845|(x846&(x847+x848)));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x850 = INT32_MIN;
	uint16_t x851 = 177U;

    t185 = (x849|(x850&(x851+x852)));

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x853 = 1;
	static volatile uint8_t x854 = UINT8_MAX;
	uint16_t x855 = 25U;
	int32_t x856 = INT32_MIN;
	volatile int32_t t186 = 0;

    t186 = (x853|(x854&(x855+x856)));

    if (t186 != 25) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x857 = 455U;
	uint32_t x858 = UINT32_MAX;
	int16_t x859 = INT16_MAX;
	static volatile int64_t x860 = -1LL;
	volatile int64_t t187 = 35560818LL;

    t187 = (x857|(x858&(x859+x860)));

    if (t187 != 32767LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x861 = UINT8_MAX;
	volatile uint32_t x862 = UINT32_MAX;
	static volatile int8_t x864 = INT8_MAX;
	static volatile int64_t t188 = -1405403257695LL;

    t188 = (x861|(x862&(x863+x864)));

    if (t188 != 24831LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x865 = INT16_MAX;
	int32_t x866 = -7204845;
	int8_t x868 = -1;

    t189 = (x865|(x866&(x867+x868)));

    if (t189 != 2140307455) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x869 = INT64_MIN;
	int32_t x870 = -1;
	int32_t x871 = INT32_MAX;
	uint64_t x872 = 206645LLU;
	volatile uint64_t t190 = 39316LLU;

    t190 = (x869|(x870&(x871+x872)));

    if (t190 != 9223372039002466100LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x873 = INT32_MAX;
	static int64_t x874 = INT64_MIN;
	int16_t x876 = INT16_MAX;
	volatile int64_t t191 = -67LL;

    t191 = (x873|(x874&(x875+x876)));

    if (t191 != 2147483647LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x878 = INT8_MAX;
	volatile int8_t x879 = INT8_MIN;
	int64_t x880 = -1572270643657108720LL;
	int64_t t192 = -1101118536436137731LL;

    t192 = (x877|(x878&(x879+x880)));

    if (t192 != 19LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x885 = INT8_MIN;
	uint64_t x886 = 7LLU;
	int64_t x888 = 3623130785466LL;
	volatile uint64_t t193 = 860061988LLU;

    t193 = (x885|(x886&(x887+x888)));

    if (t193 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x889 = -1;
	int16_t x890 = INT16_MIN;
	int32_t x891 = 1;
	int8_t x892 = 1;
	volatile int32_t t194 = -253;

    t194 = (x889|(x890&(x891+x892)));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x893 = -3439;
	int8_t x894 = -1;
	volatile int16_t x895 = INT16_MAX;
	static volatile int32_t t195 = 1;

    t195 = (x893|(x894&(x895+x896)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x897 = 1922326724325504LLU;
	int16_t x898 = INT16_MIN;
	int64_t x899 = INT64_MIN;
	static volatile int64_t x900 = INT64_MAX;
	static uint64_t t196 = 262465803948976LLU;

    t196 = (x897|(x898&(x899+x900)));

    if (t196 != 18446744073709531264LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x901 = 18186278311532LLU;
	volatile int64_t x902 = INT64_MIN;
	static uint16_t x903 = 2567U;
	int16_t x904 = 253;
	uint64_t t197 = 3875396791446968130LLU;

    t197 = (x901|(x902&(x903+x904)));

    if (t197 != 18186278311532LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x905 = UINT64_MAX;
	int32_t x906 = 1646;
	int64_t x908 = 336622LL;

    t198 = (x905|(x906&(x907+x908)));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x909 = -3;
	int8_t x912 = 0;
	volatile uint64_t t199 = 25183736223614291LLU;

    t199 = (x909|(x910&(x911+x912)));

    if (t199 != 18446744073709551613LLU) { NG(); } else { ; }
	
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

