
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

uint32_t x1 = UINT32_MAX;
uint16_t x8 = UINT16_MAX;
volatile int32_t t1 = 7;
uint16_t x10 = 2777U;
static int32_t x15 = 782364;
int32_t x26 = INT32_MAX;
volatile int16_t x28 = INT16_MIN;
static volatile int16_t x32 = INT16_MIN;
int16_t x41 = -1;
static int32_t x52 = INT32_MIN;
int64_t x53 = INT64_MIN;
volatile int64_t t13 = INT64_MIN;
static int32_t x57 = -789218;
uint16_t x58 = UINT16_MAX;
int8_t x60 = -1;
volatile int8_t x65 = INT8_MIN;
int8_t x66 = INT8_MIN;
static volatile int32_t t16 = 108;
uint32_t x75 = 1U;
int64_t t18 = -13549380242LL;
volatile uint64_t t19 = UINT64_MAX;
int16_t x81 = INT16_MAX;
volatile int32_t x84 = INT32_MAX;
static int32_t t20 = INT32_MAX;
volatile int32_t x86 = -1;
uint8_t x93 = 22U;
uint16_t x94 = 1U;
volatile int8_t x95 = -1;
uint8_t x96 = 6U;
volatile uint64_t x104 = UINT64_MAX;
uint64_t x115 = UINT64_MAX;
int16_t x118 = INT16_MAX;
volatile uint16_t x128 = UINT16_MAX;
int32_t t33 = -125583884;
int32_t x139 = INT32_MIN;
uint64_t x140 = 13737866809524928LLU;
uint64_t t34 = 64607562215241LLU;
volatile int64_t t35 = -2748440588837LL;
static uint32_t x150 = 187906U;
uint8_t x163 = UINT8_MAX;
int32_t x166 = 469052542;
static uint32_t x169 = UINT32_MAX;
static int16_t x176 = 1;
int64_t x177 = INT64_MIN;
int32_t t45 = INT32_MIN;
uint32_t x185 = 52U;
int8_t x186 = INT8_MIN;
int16_t x190 = INT16_MIN;
int64_t x194 = -1LL;
static volatile uint32_t x197 = UINT32_MAX;
static volatile uint16_t x202 = UINT16_MAX;
static volatile uint32_t x204 = 15520322U;
volatile int8_t x206 = -12;
uint32_t t52 = UINT32_MAX;
uint32_t x221 = 329963774U;
static uint64_t x226 = UINT64_MAX;
static int64_t x230 = -16615175876305LL;
uint64_t x231 = 481283LLU;
uint64_t t58 = 67529876737LLU;
uint64_t t61 = 4787057589444235493LLU;
uint64_t x252 = 4136655322979LLU;
int32_t x253 = 1;
int16_t x257 = 163;
int8_t x264 = INT8_MIN;
uint64_t x268 = UINT64_MAX;
volatile int32_t t68 = 0;
static uint16_t x280 = 652U;
static int32_t t69 = 225;
volatile uint32_t x282 = 2U;
int16_t x283 = -1452;
int8_t x285 = 2;
static uint64_t x296 = 82807313187842LLU;
int64_t x297 = 284826624247LL;
volatile uint64_t t74 = UINT64_MAX;
int8_t x302 = INT8_MIN;
volatile int32_t t75 = -2;
static int16_t x307 = INT16_MIN;
int8_t x313 = INT8_MIN;
int64_t x317 = -59LL;
static int32_t x321 = INT32_MAX;
static uint64_t x324 = UINT64_MAX;
uint64_t t80 = 2080589521237778494LLU;
static int16_t x326 = INT16_MIN;
volatile int8_t x332 = -1;
int32_t t82 = 1;
int8_t x336 = -1;
static uint16_t x343 = 1U;
volatile int64_t x346 = -19159309537553956LL;
static int32_t t86 = -211148;
int32_t x351 = INT32_MIN;
volatile uint32_t t87 = 19604U;
int8_t x353 = 2;
int16_t x356 = INT16_MIN;
static volatile int64_t t89 = 569329954555694688LL;
int32_t x366 = -1;
static volatile int64_t x370 = -1LL;
static uint16_t x380 = 1586U;
volatile int8_t x386 = -1;
int16_t x389 = 263;
static int64_t x394 = INT64_MIN;
volatile int64_t x398 = -1LL;
uint8_t x400 = 57U;
int32_t t99 = 274809448;
int32_t x402 = -159492;
static uint32_t x403 = 314769540U;
int64_t x411 = -1LL;
static int16_t x416 = 30;
static int32_t t103 = -400933;
volatile int16_t x417 = INT16_MIN;
int32_t t105 = -3622398;
volatile int8_t x439 = INT8_MIN;
int64_t x444 = INT64_MIN;
int64_t x454 = -2LL;
int32_t x458 = 106979483;
int8_t x459 = -1;
static int64_t x462 = INT64_MIN;
volatile int32_t x465 = 243024;
int16_t x466 = INT16_MAX;
static volatile int32_t t118 = -467463792;
uint8_t x479 = UINT8_MAX;
static int16_t x483 = -1;
static uint64_t x486 = 3610550300LLU;
volatile int32_t x487 = -401560;
static int16_t x492 = -2947;
volatile int16_t x497 = INT16_MIN;
static int8_t x498 = 2;
volatile uint32_t x503 = 869595U;
uint8_t x506 = 12U;
uint64_t t126 = 100725484047LLU;
int8_t x511 = INT8_MIN;
int8_t x512 = -1;
static int64_t x513 = -1LL;
uint8_t x522 = UINT8_MAX;
static volatile uint32_t t130 = 11535U;
static volatile uint32_t x526 = 276U;
int16_t x530 = 0;
volatile uint32_t t132 = 6U;
volatile int64_t x533 = INT64_MAX;
static int64_t x537 = 369076LL;
int16_t x538 = INT16_MIN;
volatile int64_t x540 = -1LL;
uint16_t x544 = UINT16_MAX;
volatile int16_t x546 = INT16_MIN;
volatile int32_t x552 = 7463;
int8_t x553 = 12;
int16_t x556 = INT16_MAX;
uint16_t x557 = UINT16_MAX;
int32_t x563 = INT32_MIN;
volatile int64_t t140 = 26907141298674LL;
uint16_t x572 = 3082U;
uint64_t x573 = 3387085LLU;
volatile int16_t x579 = INT16_MIN;
int16_t x585 = -1;
uint16_t x589 = 1U;
volatile int32_t t147 = -2014848;
int8_t x599 = INT8_MAX;
static int64_t x601 = INT64_MIN;
int32_t x603 = INT32_MIN;
static int32_t x604 = INT32_MIN;
static uint8_t x606 = UINT8_MAX;
volatile int32_t x613 = -589196;
uint32_t x614 = UINT32_MAX;
uint64_t x615 = 8227262035601512LLU;
uint64_t t154 = 3278361893688457LLU;
uint64_t x627 = UINT64_MAX;
volatile uint64_t t156 = UINT64_MAX;
int64_t x632 = INT64_MIN;
int8_t x633 = INT8_MAX;
static volatile int64_t x638 = INT64_MAX;
volatile uint32_t t159 = UINT32_MAX;
uint8_t x642 = UINT8_MAX;
static int8_t x643 = 29;
int8_t x652 = -1;
int32_t t162 = 47751;
int8_t x655 = INT8_MAX;
volatile int16_t x657 = 12;
int64_t x658 = 240918762854LL;
volatile uint64_t t165 = 65251290194271910LLU;
int16_t x667 = INT16_MIN;
int64_t x669 = INT64_MAX;
uint16_t x670 = 440U;
static int8_t x680 = -1;
int64_t x683 = INT64_MIN;
int8_t x689 = -1;
static uint32_t x690 = 7771U;
uint64_t x706 = 161921875068080819LLU;
volatile int16_t x715 = 61;
int32_t x728 = 1;
int16_t x733 = -7219;
int32_t x737 = INT32_MIN;
int64_t x738 = 48276LL;
int16_t x740 = -1;
volatile uint8_t x748 = 107U;
uint32_t x759 = 0U;
int8_t x764 = INT8_MAX;
volatile int8_t x768 = INT8_MIN;
static int32_t x772 = INT32_MAX;
uint8_t x774 = UINT8_MAX;
uint32_t x779 = 1475453U;
uint16_t x782 = 1U;
int64_t x788 = INT64_MIN;
volatile int64_t t196 = INT64_MIN;
static int16_t x789 = INT16_MIN;
uint16_t x791 = 31315U;
int64_t x792 = -1LL;


void f0(void) {
    	int64_t x2 = INT64_MAX;
	int8_t x3 = -1;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 3773763945855636LLU;

    t0 = ((x1&(x2>x3))^x4);

    if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	volatile uint64_t x6 = UINT64_MAX;
	int8_t x7 = INT8_MIN;

    t1 = ((x5&(x6>x7))^x8);

    if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	static int16_t x11 = INT16_MAX;
	static int16_t x12 = INT16_MIN;
	int32_t t2 = 0;

    t2 = ((x9&(x10>x11))^x12);

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	static int64_t x14 = INT64_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 1008;

    t3 = ((x13&(x14>x15))^x16);

    if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 535LLU;
	int64_t x18 = 4718642675535490LL;
	int8_t x19 = INT8_MIN;
	static volatile int32_t x20 = INT32_MIN;
	uint64_t t4 = 27315439LLU;

    t4 = ((x17&(x18>x19))^x20);

    if (t4 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 0U;
	int8_t x22 = -1;
	int32_t x23 = INT32_MAX;
	static int32_t x24 = -1;
	static int32_t t5 = 218562661;

    t5 = ((x21&(x22>x23))^x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -326;
	volatile uint8_t x27 = 1U;
	static volatile int32_t t6 = -1;

    t6 = ((x25&(x26>x27))^x28);

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MAX;
	uint16_t x30 = 1U;
	static int32_t x31 = INT32_MIN;
	volatile int32_t t7 = 2402532;

    t7 = ((x29&(x30>x31))^x32);

    if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 855997;
	volatile uint8_t x34 = 4U;
	int64_t x35 = 231LL;
	int64_t x36 = 53401264657296LL;
	static volatile int64_t t8 = -181372LL;

    t8 = ((x33&(x34>x35))^x36);

    if (t8 != 53401264657296LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = INT16_MIN;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -16960444;

    t9 = ((x37&(x38>x39))^x40);

    if (t9 != 254) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = 0;
	uint16_t x43 = 37U;
	volatile int16_t x44 = INT16_MAX;
	int32_t t10 = 50195;

    t10 = ((x41&(x42>x43))^x44);

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	static uint64_t x46 = 6409122135548LLU;
	static int16_t x47 = 4;
	int8_t x48 = -1;
	int32_t t11 = -24177;

    t11 = ((x45&(x46>x47))^x48);

    if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 356U;
	int32_t t12 = INT32_MIN;

    t12 = ((x49&(x50>x51))^x52);

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = 0;
	static int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;

    t13 = ((x53&(x54>x55))^x56);

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x59 = 100U;
	volatile int32_t t14 = -27302;

    t14 = ((x57&(x58>x59))^x60);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MAX;
	uint16_t x62 = 15155U;
	int32_t x63 = 12816316;
	static int16_t x64 = -1;
	static int64_t t15 = -129586492904LL;

    t15 = ((x61&(x62>x63))^x64);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x67 = INT16_MIN;
	static int8_t x68 = -7;

    t16 = ((x65&(x66>x67))^x68);

    if (t16 != -7) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 555530386U;
	uint32_t x70 = 710U;
	static int8_t x71 = 0;
	static int32_t x72 = INT32_MIN;
	uint32_t t17 = 6407U;

    t17 = ((x69&(x70>x71))^x72);

    if (t17 != 2147483648U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	int64_t x76 = -1LL;

    t18 = ((x73&(x74>x75))^x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	static int32_t x78 = 0;
	volatile int8_t x79 = -1;
	uint64_t x80 = UINT64_MAX;

    t19 = ((x77&(x78>x79))^x80);

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MAX;

    t20 = ((x81&(x82>x83))^x84);

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	volatile int64_t x87 = INT64_MIN;
	volatile uint16_t x88 = 2U;
	volatile int32_t t21 = -2;

    t21 = ((x85&(x86>x87))^x88);

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	uint16_t x90 = 11662U;
	int16_t x91 = 2;
	int16_t x92 = INT16_MAX;
	volatile uint64_t t22 = 7317540LLU;

    t22 = ((x89&(x90>x91))^x92);

    if (t22 != 32766LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t t23 = -142367;

    t23 = ((x93&(x94>x95))^x96);

    if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int64_t x98 = -990486634565LL;
	int16_t x99 = INT16_MIN;
	int64_t x100 = 14521112282LL;
	int64_t t24 = 456683LL;

    t24 = ((x97&(x98>x99))^x100);

    if (t24 != 14521112282LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static int16_t x102 = INT16_MAX;
	static int16_t x103 = 983;
	uint64_t t25 = UINT64_MAX;

    t25 = ((x101&(x102>x103))^x104);

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	static int32_t x108 = INT32_MIN;
	int64_t t26 = -177212582LL;

    t26 = ((x105&(x106>x107))^x108);

    if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	uint16_t x110 = UINT16_MAX;
	static uint8_t x111 = 13U;
	int32_t x112 = -275356336;
	static uint32_t t27 = 156543U;

    t27 = ((x109&(x110>x111))^x112);

    if (t27 != 4019610961U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = ((x113&(x114>x115))^x116);

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	volatile int8_t x120 = INT8_MIN;
	int32_t t29 = 6;

    t29 = ((x117&(x118>x119))^x120);

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 1498LLU;
	static int32_t x122 = INT32_MAX;
	uint64_t x123 = UINT64_MAX;
	static int32_t x124 = INT32_MIN;
	static uint64_t t30 = 645929LLU;

    t30 = ((x121&(x122>x123))^x124);

    if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int32_t x126 = -1;
	uint64_t x127 = 8604741048251540LLU;
	int64_t t31 = -39991908614684837LL;

    t31 = ((x125&(x126>x127))^x128);

    if (t31 != 65535LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	static int64_t x130 = INT64_MIN;
	int16_t x131 = -1;
	int32_t x132 = INT32_MAX;
	static int32_t t32 = INT32_MAX;

    t32 = ((x129&(x130>x131))^x132);

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 7U;
	volatile int32_t x134 = INT32_MAX;
	int32_t x135 = -1;
	volatile int32_t x136 = -10677653;

    t33 = ((x133&(x134>x135))^x136);

    if (t33 != -10677654) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;

    t34 = ((x137&(x138>x139))^x140);

    if (t34 != 13737866809524928LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	uint32_t x142 = 44276U;
	int16_t x143 = INT16_MAX;
	int32_t x144 = INT32_MAX;

    t35 = ((x141&(x142>x143))^x144);

    if (t35 != 2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	int64_t x146 = INT64_MAX;
	int16_t x147 = -1;
	int32_t x148 = INT32_MAX;
	int32_t t36 = -1;

    t36 = ((x145&(x146>x147))^x148);

    if (t36 != 2147483646) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 26;
	uint32_t x151 = 10139483U;
	int64_t x152 = 2588085LL;
	volatile int64_t t37 = 0LL;

    t37 = ((x149&(x150>x151))^x152);

    if (t37 != 2588085LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = 2U;
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MAX;
	volatile int32_t t38 = -1046650769;

    t38 = ((x153&(x154>x155))^x156);

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 784578387U;
	volatile int8_t x158 = 0;
	uint8_t x159 = 3U;
	int8_t x160 = 14;
	volatile uint32_t t39 = 1320428U;

    t39 = ((x157&(x158>x159))^x160);

    if (t39 != 14U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	static volatile uint8_t x164 = 0U;
	int32_t t40 = 1502;

    t40 = ((x161&(x162>x163))^x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -1;
	int64_t x167 = 45889472577LL;
	uint32_t x168 = 399663415U;
	uint32_t t41 = 656410U;

    t41 = ((x165&(x166>x167))^x168);

    if (t41 != 399663415U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x170 = 25391U;
	int64_t x171 = INT64_MAX;
	static uint32_t x172 = UINT32_MAX;
	uint32_t t42 = UINT32_MAX;

    t42 = ((x169&(x170>x171))^x172);

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MAX;
	int16_t x174 = -1;
	static int32_t x175 = 8495;
	int32_t t43 = 10961;

    t43 = ((x173&(x174>x175))^x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = 12;
	static int32_t x179 = INT32_MIN;
	volatile uint8_t x180 = 4U;
	volatile int64_t t44 = 4207175696LL;

    t44 = ((x177&(x178>x179))^x180);

    if (t44 != 4LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	static uint16_t x182 = 4U;
	static int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MIN;

    t45 = ((x181&(x182>x183))^x184);

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x187 = INT8_MIN;
	static volatile int64_t x188 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

    t46 = ((x185&(x186>x187))^x188);

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -108327LL;
	uint32_t x191 = UINT32_MAX;
	volatile uint8_t x192 = 1U;
	int64_t t47 = -1LL;

    t47 = ((x189&(x190>x191))^x192);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	int64_t x195 = INT64_MIN;
	static int64_t x196 = INT64_MIN;
	volatile int64_t t48 = -272093084500LL;

    t48 = ((x193&(x194>x195))^x196);

    if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = 2251;
	int8_t x199 = INT8_MAX;
	int64_t x200 = INT64_MIN;
	int64_t t49 = 22LL;

    t49 = ((x197&(x198>x199))^x200);

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	static uint16_t x203 = 67U;
	volatile uint32_t t50 = 2741U;

    t50 = ((x201&(x202>x203))^x204);

    if (t50 != 15520322U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	uint64_t x208 = 2523767151541LLU;
	uint64_t t51 = 5405229LLU;

    t51 = ((x205&(x206>x207))^x208);

    if (t51 != 2523767151541LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 6U;
	static uint32_t x210 = 3056212U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = -1;

    t52 = ((x209&(x210>x211))^x212);

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = -1640541;
	int16_t x214 = INT16_MAX;
	static uint64_t x215 = UINT64_MAX;
	int16_t x216 = 0;
	int32_t t53 = 100480192;

    t53 = ((x213&(x214>x215))^x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 13;
	volatile int16_t x218 = -55;
	uint16_t x219 = 8U;
	int64_t x220 = 3376001750250LL;
	int64_t t54 = 25850246040083389LL;

    t54 = ((x217&(x218>x219))^x220);

    if (t54 != 3376001750250LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x222 = INT32_MAX;
	uint32_t x223 = UINT32_MAX;
	static uint8_t x224 = 59U;
	volatile uint32_t t55 = 274U;

    t55 = ((x221&(x222>x223))^x224);

    if (t55 != 59U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = -1;
	uint16_t x227 = 23693U;
	volatile int32_t x228 = 14652;
	static int32_t t56 = -12;

    t56 = ((x225&(x226>x227))^x228);

    if (t56 != 14653) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	volatile int8_t x232 = INT8_MIN;
	static volatile int32_t t57 = -26623865;

    t57 = ((x229&(x230>x231))^x232);

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x233 = 119235U;
	int64_t x234 = 250823925154LL;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = 1015544273274051LLU;

    t58 = ((x233&(x234>x235))^x236);

    if (t58 != 1015544273274050LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = 27300;
	int64_t x238 = INT64_MIN;
	uint64_t x239 = 14LLU;
	volatile int64_t x240 = INT64_MIN;
	int64_t t59 = INT64_MIN;

    t59 = ((x237&(x238>x239))^x240);

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	uint32_t x242 = 190175129U;
	uint64_t x243 = 5098049696272LLU;
	int8_t x244 = 1;
	static int64_t t60 = 914679622LL;

    t60 = ((x241&(x242>x243))^x244);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	int64_t x246 = -1LL;
	uint64_t x247 = 207LLU;
	uint64_t x248 = 2310LLU;

    t61 = ((x245&(x246>x247))^x248);

    if (t61 != 2311LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MIN;
	static uint32_t x250 = 70811U;
	int8_t x251 = INT8_MIN;
	uint64_t t62 = 6295938332LLU;

    t62 = ((x249&(x250>x251))^x252);

    if (t62 != 4136655322979LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = UINT32_MAX;
	int16_t x255 = -120;
	int64_t x256 = INT64_MIN;
	static int64_t t63 = 170LL;

    t63 = ((x253&(x254>x255))^x256);

    if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = UINT64_MAX;
	int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t64 = 247107;

    t64 = ((x257&(x258>x259))^x260);

    if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	int64_t x262 = 859203802086271462LL;
	uint32_t x263 = 3859108U;
	volatile int32_t t65 = 772729;

    t65 = ((x261&(x262>x263))^x264);

    if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MIN;
	int16_t x267 = 14;
	uint64_t t66 = UINT64_MAX;

    t66 = ((x265&(x266>x267))^x268);

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint64_t x270 = 56161441LLU;
	uint8_t x271 = 2U;
	volatile int32_t x272 = -3;
	int32_t t67 = -804724;

    t67 = ((x269&(x270>x271))^x272);

    if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -3;
	uint8_t x274 = UINT8_MAX;
	int32_t x275 = INT32_MIN;
	volatile int8_t x276 = INT8_MIN;

    t68 = ((x273&(x274>x275))^x276);

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 216U;
	volatile int32_t x278 = INT32_MAX;
	int64_t x279 = -153904775191130640LL;

    t69 = ((x277&(x278>x279))^x280);

    if (t69 != 652) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = INT8_MIN;
	int16_t x284 = -1;
	int32_t t70 = -2;

    t70 = ((x281&(x282>x283))^x284);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MAX;
	int32_t t71 = -313095662;

    t71 = ((x285&(x286>x287))^x288);

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	volatile int16_t x290 = INT16_MIN;
	uint16_t x291 = UINT16_MAX;
	int64_t x292 = INT64_MIN;
	volatile int64_t t72 = INT64_MIN;

    t72 = ((x289&(x290>x291))^x292);

    if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	volatile uint64_t x294 = 815182297005LLU;
	static int8_t x295 = INT8_MIN;
	uint64_t t73 = 38821224178LLU;

    t73 = ((x293&(x294>x295))^x296);

    if (t73 != 82807313187842LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MIN;
	volatile int64_t x299 = 17294556058LL;
	uint64_t x300 = UINT64_MAX;

    t74 = ((x297&(x298>x299))^x300);

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -1;
	int32_t x303 = -69229913;
	int8_t x304 = INT8_MIN;

    t75 = ((x301&(x302>x303))^x304);

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	volatile int64_t x306 = -1LL;
	static int32_t x308 = INT32_MAX;
	volatile int32_t t76 = INT32_MAX;

    t76 = ((x305&(x306>x307))^x308);

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -5772;
	static int16_t x310 = -2010;
	int16_t x311 = INT16_MAX;
	int64_t x312 = -24905565401873502LL;
	int64_t t77 = 2133556533845299LL;

    t77 = ((x309&(x310>x311))^x312);

    if (t77 != -24905565401873502LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x314 = -1LL;
	uint32_t x315 = 2765U;
	volatile uint16_t x316 = UINT16_MAX;
	static volatile int32_t t78 = -6546;

    t78 = ((x313&(x314>x315))^x316);

    if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x318 = 2U;
	volatile int8_t x319 = -2;
	int16_t x320 = 408;
	static int64_t t79 = -15858345271187LL;

    t79 = ((x317&(x318>x319))^x320);

    if (t79 != 409LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = 491026186685389LL;
	static int8_t x323 = INT8_MAX;

    t80 = ((x321&(x322>x323))^x324);

    if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MIN;
	int8_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 30;

    t81 = ((x325&(x326>x327))^x328);

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = -1;
	uint8_t x330 = 23U;
	int16_t x331 = INT16_MIN;

    t82 = ((x329&(x330>x331))^x332);

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = 27270584U;
	int64_t x334 = INT64_MIN;
	static volatile int32_t x335 = INT32_MAX;
	volatile uint32_t t83 = UINT32_MAX;

    t83 = ((x333&(x334>x335))^x336);

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 1021212872706964415LLU;
	uint64_t x338 = 34831022328609LLU;
	int32_t x339 = INT32_MIN;
	volatile int64_t x340 = 6620104LL;
	uint64_t t84 = 2883LLU;

    t84 = ((x337&(x338>x339))^x340);

    if (t84 != 6620104LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	uint16_t x342 = 165U;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 7;

    t85 = ((x341&(x342>x343))^x344);

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x345 = UINT16_MAX;
	volatile uint64_t x347 = 0LLU;
	int32_t x348 = INT32_MIN;

    t86 = ((x345&(x346>x347))^x348);

    if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x349 = 0U;
	int32_t x350 = INT32_MAX;
	uint32_t x352 = 934U;

    t87 = ((x349&(x350>x351))^x352);

    if (t87 != 934U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	int32_t t88 = -625;

    t88 = ((x353&(x354>x355))^x356);

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x357 = 3250U;
	uint16_t x358 = UINT16_MAX;
	volatile uint32_t x359 = 24U;
	int64_t x360 = 4LL;

    t89 = ((x357&(x358>x359))^x360);

    if (t89 != 4LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 0U;
	int32_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t90 = -16;

    t90 = ((x361&(x362>x363))^x364);

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	int16_t x367 = INT16_MAX;
	int32_t x368 = 6403334;
	int32_t t91 = 13;

    t91 = ((x365&(x366>x367))^x368);

    if (t91 != 6403334) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	int64_t x371 = INT64_MIN;
	static int64_t x372 = -2081LL;
	int64_t t92 = -12LL;

    t92 = ((x369&(x370>x371))^x372);

    if (t92 != -2082LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	volatile int64_t x374 = 84LL;
	static uint32_t x375 = 349882U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -173180;

    t93 = ((x373&(x374>x375))^x376);

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	volatile int8_t x378 = INT8_MAX;
	int16_t x379 = -672;
	int32_t t94 = -3;

    t94 = ((x377&(x378>x379))^x380);

    if (t94 != 1586) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = 102;
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = -1LL;
	volatile uint64_t x384 = 858170570365LLU;
	uint64_t t95 = 14979344988352564LLU;

    t95 = ((x381&(x382>x383))^x384);

    if (t95 != 858170570365LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = 0;
	uint16_t x387 = UINT16_MAX;
	static int32_t x388 = -1;
	volatile int32_t t96 = 6;

    t96 = ((x385&(x386>x387))^x388);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x390 = INT64_MIN;
	uint32_t x391 = 196U;
	int16_t x392 = INT16_MIN;
	int32_t t97 = 0;

    t97 = ((x389&(x390>x391))^x392);

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 82089572U;
	int32_t x395 = -857622167;
	volatile int64_t x396 = INT64_MIN;
	int64_t t98 = INT64_MIN;

    t98 = ((x393&(x394>x395))^x396);

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = 14268;
	int16_t x399 = INT16_MAX;

    t99 = ((x397&(x398>x399))^x400);

    if (t99 != 57) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x401 = 40876826541710LLU;
	int8_t x404 = 11;
	uint64_t t100 = 1482821231604529LLU;

    t100 = ((x401&(x402>x403))^x404);

    if (t100 != 11LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	static volatile uint64_t x406 = 0LLU;
	int16_t x407 = INT16_MAX;
	volatile int8_t x408 = INT8_MAX;
	volatile int32_t t101 = -19;

    t101 = ((x405&(x406>x407))^x408);

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 836775057248252129LLU;
	int8_t x410 = INT8_MIN;
	int32_t x412 = INT32_MAX;
	uint64_t t102 = 768LLU;

    t102 = ((x409&(x410>x411))^x412);

    if (t102 != 2147483647LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x413 = -1;
	volatile int64_t x414 = -11259557914883LL;
	volatile int8_t x415 = -1;

    t103 = ((x413&(x414>x415))^x416);

    if (t103 != 30) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = -1;
	int64_t x419 = -1LL;
	int16_t x420 = -1;
	int32_t t104 = 7;

    t104 = ((x417&(x418>x419))^x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = INT32_MAX;
	int64_t x422 = INT64_MIN;
	volatile uint16_t x423 = UINT16_MAX;
	static uint8_t x424 = UINT8_MAX;

    t105 = ((x421&(x422>x423))^x424);

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	int8_t x426 = -49;
	int16_t x427 = -1;
	static uint32_t x428 = 299904040U;
	uint32_t t106 = 1489U;

    t106 = ((x425&(x426>x427))^x428);

    if (t106 != 299904040U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = INT64_MIN;
	static uint16_t x430 = 2003U;
	int32_t x431 = INT32_MAX;
	volatile uint8_t x432 = 0U;
	volatile int64_t t107 = 120156678777LL;

    t107 = ((x429&(x430>x431))^x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -1;
	uint64_t x434 = 19311431572483LLU;
	volatile uint16_t x435 = UINT16_MAX;
	int8_t x436 = -1;
	int32_t t108 = 2;

    t108 = ((x433&(x434>x435))^x436);

    if (t108 != -2) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	volatile uint16_t x438 = 918U;
	volatile int16_t x440 = INT16_MIN;
	volatile int64_t t109 = 655355600197LL;

    t109 = ((x437&(x438>x439))^x440);

    if (t109 != -32767LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	static uint8_t x442 = UINT8_MAX;
	int16_t x443 = INT16_MIN;
	int64_t t110 = INT64_MIN;

    t110 = ((x441&(x442>x443))^x444);

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x445 = UINT8_MAX;
	static int8_t x446 = INT8_MIN;
	static uint32_t x447 = 16023U;
	int32_t x448 = INT32_MIN;
	volatile int32_t t111 = 3525767;

    t111 = ((x445&(x446>x447))^x448);

    if (t111 != -2147483647) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x449 = 0U;
	static int64_t x450 = 401LL;
	static int8_t x451 = -1;
	static int32_t x452 = INT32_MAX;
	volatile int32_t t112 = INT32_MAX;

    t112 = ((x449&(x450>x451))^x452);

    if (t112 != INT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	static int64_t x455 = 6404651653894LL;
	int64_t x456 = INT64_MAX;
	volatile int64_t t113 = INT64_MAX;

    t113 = ((x453&(x454>x455))^x456);

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x457 = 2U;
	int64_t x460 = -14638502007195LL;
	int64_t t114 = -250723LL;

    t114 = ((x457&(x458>x459))^x460);

    if (t114 != -14638502007195LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = INT32_MIN;
	int16_t x463 = INT16_MIN;
	int32_t x464 = INT32_MAX;
	int32_t t115 = INT32_MAX;

    t115 = ((x461&(x462>x463))^x464);

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x467 = -137097346LL;
	int8_t x468 = INT8_MAX;
	static volatile int32_t t116 = 3;

    t116 = ((x465&(x466>x467))^x468);

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	uint8_t x470 = 52U;
	int16_t x471 = -1;
	static uint16_t x472 = UINT16_MAX;
	int32_t t117 = 307;

    t117 = ((x469&(x470>x471))^x472);

    if (t117 != 65535) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = -1;
	int8_t x474 = INT8_MAX;
	uint16_t x475 = UINT16_MAX;
	static int8_t x476 = INT8_MAX;

    t118 = ((x473&(x474>x475))^x476);

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	static uint16_t x478 = 7632U;
	volatile int32_t x480 = INT32_MAX;
	static volatile uint64_t t119 = 4195417387585067490LLU;

    t119 = ((x477&(x478>x479))^x480);

    if (t119 != 2147483646LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 1563487926U;
	int16_t x482 = INT16_MAX;
	uint64_t x484 = UINT64_MAX;
	static uint64_t t120 = UINT64_MAX;

    t120 = ((x481&(x482>x483))^x484);

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = INT32_MIN;
	int16_t x488 = -2;
	static int32_t t121 = -21358564;

    t121 = ((x485&(x486>x487))^x488);

    if (t121 != -2) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x489 = 7;
	uint8_t x490 = 3U;
	volatile uint64_t x491 = 1226323488769963LLU;
	int32_t t122 = -15300986;

    t122 = ((x489&(x490>x491))^x492);

    if (t122 != -2947) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 49U;
	uint8_t x494 = UINT8_MAX;
	static uint8_t x495 = 0U;
	volatile int64_t x496 = -464679608316198LL;
	int64_t t123 = 1755734109189604948LL;

    t123 = ((x493&(x494>x495))^x496);

    if (t123 != -464679608316197LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x499 = INT32_MIN;
	int16_t x500 = -1;
	int32_t t124 = -10;

    t124 = ((x497&(x498>x499))^x500);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	int8_t x502 = INT8_MIN;
	int16_t x504 = -1;
	int32_t t125 = -1735832;

    t125 = ((x501&(x502>x503))^x504);

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	int64_t x507 = -1LL;
	int64_t x508 = INT64_MIN;

    t126 = ((x505&(x506>x507))^x508);

    if (t126 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -12419LL;
	static int16_t x510 = -9;
	static int64_t t127 = -591LL;

    t127 = ((x509&(x510>x511))^x512);

    if (t127 != -2LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x514 = 2304536LLU;
	volatile int64_t x515 = -115895LL;
	volatile int8_t x516 = INT8_MIN;
	int64_t t128 = -32828281671487LL;

    t128 = ((x513&(x514>x515))^x516);

    if (t128 != -128LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	int16_t x518 = INT16_MAX;
	volatile int16_t x519 = INT16_MIN;
	uint64_t x520 = 8471232956293265484LLU;
	volatile uint64_t t129 = 70474LLU;

    t129 = ((x517&(x518>x519))^x520);

    if (t129 != 8471232956293265485LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x521 = 6U;
	int16_t x523 = -2451;
	static uint16_t x524 = 489U;

    t130 = ((x521&(x522>x523))^x524);

    if (t130 != 489U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -77024537560LL;
	uint16_t x527 = 5854U;
	int8_t x528 = -1;
	volatile int64_t t131 = 2202878727202LL;

    t131 = ((x525&(x526>x527))^x528);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 0U;
	int32_t x531 = -209042;
	volatile uint16_t x532 = UINT16_MAX;

    t132 = ((x529&(x530>x531))^x532);

    if (t132 != 65535U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x534 = INT16_MAX;
	int8_t x535 = 4;
	int64_t x536 = -1LL;
	int64_t t133 = -27187182211519LL;

    t133 = ((x533&(x534>x535))^x536);

    if (t133 != -2LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x539 = INT16_MIN;
	int64_t t134 = 720LL;

    t134 = ((x537&(x538>x539))^x540);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -1;
	static int64_t x542 = -1LL;
	volatile int32_t x543 = 0;
	static int32_t t135 = -7525;

    t135 = ((x541&(x542>x543))^x544);

    if (t135 != 65535) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = INT16_MIN;
	volatile int32_t x547 = -1;
	volatile uint8_t x548 = 97U;
	static volatile int32_t t136 = -6658522;

    t136 = ((x545&(x546>x547))^x548);

    if (t136 != 97) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	int32_t x550 = -1;
	static uint32_t x551 = 997137U;
	int32_t t137 = -6;

    t137 = ((x549&(x550>x551))^x552);

    if (t137 != 7462) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x554 = INT32_MAX;
	int32_t x555 = -1;
	static volatile int32_t t138 = -5975987;

    t138 = ((x553&(x554>x555))^x556);

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x558 = 1740490272388501354LLU;
	uint64_t x559 = 148892293022422221LLU;
	uint16_t x560 = 129U;
	static volatile int32_t t139 = -138;

    t139 = ((x557&(x558>x559))^x560);

    if (t139 != 128) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -404361239;
	int8_t x562 = -1;
	int64_t x564 = INT64_MAX;

    t140 = ((x561&(x562>x563))^x564);

    if (t140 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = -1;
	int64_t x566 = -621182226424LL;
	int16_t x567 = 1;
	uint16_t x568 = 470U;
	int32_t t141 = 93;

    t141 = ((x565&(x566>x567))^x568);

    if (t141 != 470) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	int16_t x570 = 11862;
	volatile int16_t x571 = INT16_MAX;
	int64_t t142 = -175792LL;

    t142 = ((x569&(x570>x571))^x572);

    if (t142 != 3082LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = 24401597LL;
	volatile int8_t x575 = -1;
	uint16_t x576 = 8092U;
	volatile uint64_t t143 = 38342417553122715LLU;

    t143 = ((x573&(x574>x575))^x576);

    if (t143 != 8093LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	static int64_t x578 = 6142884362945LL;
	uint64_t x580 = UINT64_MAX;
	uint64_t t144 = UINT64_MAX;

    t144 = ((x577&(x578>x579))^x580);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = INT8_MAX;
	uint32_t x582 = 2440636U;
	uint32_t x583 = 3622876U;
	uint16_t x584 = UINT16_MAX;
	static int32_t t145 = 208288;

    t145 = ((x581&(x582>x583))^x584);

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x586 = 1021U;
	uint64_t x587 = UINT64_MAX;
	uint16_t x588 = UINT16_MAX;
	volatile int32_t t146 = 56551977;

    t146 = ((x585&(x586>x587))^x588);

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = -1LL;
	int32_t x591 = -1;
	int16_t x592 = -38;

    t147 = ((x589&(x590>x591))^x592);

    if (t147 != -38) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	int16_t x594 = INT16_MIN;
	int64_t x595 = -1LL;
	static int32_t x596 = INT32_MIN;
	int64_t t148 = -6LL;

    t148 = ((x593&(x594>x595))^x596);

    if (t148 != -2147483648LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = 0;
	int64_t x598 = -1LL;
	int64_t x600 = INT64_MIN;
	int64_t t149 = INT64_MIN;

    t149 = ((x597&(x598>x599))^x600);

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x602 = INT16_MAX;
	static int64_t t150 = -138174LL;

    t150 = ((x601&(x602>x603))^x604);

    if (t150 != -2147483648LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x605 = 63655029U;
	int8_t x607 = INT8_MIN;
	int32_t x608 = INT32_MIN;
	static volatile uint32_t t151 = 1952U;

    t151 = ((x605&(x606>x607))^x608);

    if (t151 != 2147483649U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -1;
	volatile int32_t x610 = -1;
	uint32_t x611 = 17260287U;
	int8_t x612 = -1;
	volatile int32_t t152 = -31356242;

    t152 = ((x609&(x610>x611))^x612);

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x616 = INT32_MIN;
	static volatile int32_t t153 = INT32_MIN;

    t153 = ((x613&(x614>x615))^x616);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 1;
	int16_t x618 = -1619;
	static uint32_t x619 = 9071U;
	uint64_t x620 = 7LLU;

    t154 = ((x617&(x618>x619))^x620);

    if (t154 != 6LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = -3LL;
	int8_t x622 = -1;
	int64_t x623 = 15516139766241258LL;
	int32_t x624 = INT32_MIN;
	static int64_t t155 = 3060LL;

    t155 = ((x621&(x622>x623))^x624);

    if (t155 != -2147483648LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = 0;
	int16_t x626 = -6;
	uint64_t x628 = UINT64_MAX;

    t156 = ((x625&(x626>x627))^x628);

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int8_t x630 = -1;
	volatile int64_t x631 = -1657021451LL;
	volatile int64_t t157 = INT64_MIN;

    t157 = ((x629&(x630>x631))^x632);

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x634 = 46375959344466552LLU;
	int16_t x635 = 291;
	int16_t x636 = 55;
	int32_t t158 = -182;

    t158 = ((x633&(x634>x635))^x636);

    if (t158 != 54) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = INT8_MIN;
	int8_t x639 = INT8_MIN;
	uint32_t x640 = UINT32_MAX;

    t159 = ((x637&(x638>x639))^x640);

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = INT32_MIN;
	volatile int8_t x644 = INT8_MIN;
	volatile int32_t t160 = 15405;

    t160 = ((x641&(x642>x643))^x644);

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	int16_t x646 = 245;
	int64_t x647 = 18533LL;
	int16_t x648 = -1;
	volatile int64_t t161 = 2170944567879106LL;

    t161 = ((x645&(x646>x647))^x648);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -7;
	int32_t x650 = 246695576;
	int8_t x651 = INT8_MIN;

    t162 = ((x649&(x650>x651))^x652);

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 2337U;
	volatile uint64_t x654 = UINT64_MAX;
	static volatile uint8_t x656 = UINT8_MAX;
	volatile int32_t t163 = -3;

    t163 = ((x653&(x654>x655))^x656);

    if (t163 != 254) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x659 = 3U;
	uint16_t x660 = UINT16_MAX;
	int32_t t164 = 0;

    t164 = ((x657&(x658>x659))^x660);

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x661 = 4U;
	int64_t x662 = INT64_MIN;
	int32_t x663 = INT32_MIN;
	static uint64_t x664 = 442204LLU;

    t165 = ((x661&(x662>x663))^x664);

    if (t165 != 442204LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = INT64_MAX;
	int64_t x666 = INT64_MAX;
	int64_t x668 = -1LL;
	int64_t t166 = -2LL;

    t166 = ((x665&(x666>x667))^x668);

    if (t166 != -2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x671 = UINT16_MAX;
	static uint32_t x672 = 49997374U;
	int64_t t167 = -28480LL;

    t167 = ((x669&(x670>x671))^x672);

    if (t167 != 49997374LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	int32_t x674 = -1;
	static int64_t x675 = 3LL;
	static uint32_t x676 = 4878001U;
	static volatile int64_t t168 = -7615LL;

    t168 = ((x673&(x674>x675))^x676);

    if (t168 != 4878001LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static int64_t x678 = -1LL;
	int16_t x679 = -4379;
	int32_t t169 = -336;

    t169 = ((x677&(x678>x679))^x680);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x681 = 576736424U;
	int64_t x682 = INT64_MAX;
	volatile uint8_t x684 = UINT8_MAX;
	uint32_t t170 = 1856U;

    t170 = ((x681&(x682>x683))^x684);

    if (t170 != 255U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -507062508940677696LL;
	int64_t x686 = 60LL;
	static int32_t x687 = 64257356;
	uint8_t x688 = 14U;
	volatile int64_t t171 = 215698315LL;

    t171 = ((x685&(x686>x687))^x688);

    if (t171 != 14LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x691 = 10999U;
	int32_t x692 = INT32_MIN;
	int32_t t172 = INT32_MIN;

    t172 = ((x689&(x690>x691))^x692);

    if (t172 != INT32_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 17;
	uint8_t x694 = UINT8_MAX;
	uint8_t x695 = UINT8_MAX;
	volatile uint16_t x696 = 11816U;
	volatile int32_t t173 = 29824;

    t173 = ((x693&(x694>x695))^x696);

    if (t173 != 11816) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 30U;
	int16_t x698 = INT16_MIN;
	uint32_t x699 = UINT32_MAX;
	int32_t x700 = INT32_MAX;
	volatile int32_t t174 = INT32_MAX;

    t174 = ((x697&(x698>x699))^x700);

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	int8_t x702 = INT8_MIN;
	uint8_t x703 = 3U;
	int8_t x704 = 24;
	volatile int32_t t175 = -25;

    t175 = ((x701&(x702>x703))^x704);

    if (t175 != 24) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	uint8_t x707 = UINT8_MAX;
	uint32_t x708 = 686U;
	uint32_t t176 = 12U;

    t176 = ((x705&(x706>x707))^x708);

    if (t176 != 686U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = -1;
	int16_t x710 = INT16_MAX;
	static int16_t x711 = INT16_MIN;
	int32_t x712 = INT32_MIN;
	volatile int32_t t177 = 5;

    t177 = ((x709&(x710>x711))^x712);

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	int32_t x714 = 7854819;
	static int64_t x716 = INT64_MAX;
	static int64_t t178 = INT64_MAX;

    t178 = ((x713&(x714>x715))^x716);

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x717 = UINT64_MAX;
	static volatile int8_t x718 = -1;
	uint32_t x719 = 565U;
	int16_t x720 = -1;
	volatile uint64_t t179 = 31LLU;

    t179 = ((x717&(x718>x719))^x720);

    if (t179 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int32_t x722 = -1;
	int64_t x723 = INT64_MIN;
	static volatile uint32_t x724 = 190421U;
	volatile uint32_t t180 = 1144143564U;

    t180 = ((x721&(x722>x723))^x724);

    if (t180 != 190421U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 0U;
	int32_t x726 = INT32_MIN;
	static int64_t x727 = -915165875LL;
	volatile int32_t t181 = -247;

    t181 = ((x725&(x726>x727))^x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	volatile int64_t x730 = 231LL;
	static int8_t x731 = INT8_MIN;
	int8_t x732 = 2;
	static int32_t t182 = -229283560;

    t182 = ((x729&(x730>x731))^x732);

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = INT32_MIN;
	volatile int64_t x735 = -1LL;
	int64_t x736 = 4616801747LL;
	static volatile int64_t t183 = -3161047894301LL;

    t183 = ((x733&(x734>x735))^x736);

    if (t183 != 4616801747LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x739 = -1;
	int32_t t184 = -31340;

    t184 = ((x737&(x738>x739))^x740);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	volatile uint16_t x742 = 30220U;
	int64_t x743 = INT64_MAX;
	int64_t x744 = INT64_MIN;
	static int64_t t185 = INT64_MIN;

    t185 = ((x741&(x742>x743))^x744);

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	static volatile int64_t x746 = INT64_MIN;
	int64_t x747 = -94871324155611842LL;
	static volatile int64_t t186 = -2378238351330536107LL;

    t186 = ((x745&(x746>x747))^x748);

    if (t186 != 107LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = INT16_MAX;
	int64_t x750 = INT64_MIN;
	int32_t x751 = INT32_MIN;
	int16_t x752 = INT16_MIN;
	volatile int32_t t187 = -1;

    t187 = ((x749&(x750>x751))^x752);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 11841244LLU;
	static uint64_t x754 = UINT64_MAX;
	uint32_t x755 = 3U;
	int16_t x756 = -1;
	uint64_t t188 = UINT64_MAX;

    t188 = ((x753&(x754>x755))^x756);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = INT64_MIN;
	int16_t x758 = -15042;
	int8_t x760 = -1;
	static volatile int64_t t189 = -1891047389418815797LL;

    t189 = ((x757&(x758>x759))^x760);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x761 = 1339U;
	uint16_t x762 = 29U;
	static int8_t x763 = INT8_MIN;
	volatile int32_t t190 = -52003;

    t190 = ((x761&(x762>x763))^x764);

    if (t190 != 126) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	uint64_t x766 = UINT64_MAX;
	uint32_t x767 = UINT32_MAX;
	static volatile int32_t t191 = 7;

    t191 = ((x765&(x766>x767))^x768);

    if (t191 != -127) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = 0LL;
	uint16_t x770 = 180U;
	int16_t x771 = INT16_MIN;
	int64_t t192 = 472827604220403LL;

    t192 = ((x769&(x770>x771))^x772);

    if (t192 != 2147483647LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = INT64_MIN;
	int8_t x775 = 8;
	volatile uint8_t x776 = 106U;
	volatile int64_t t193 = -93324109029156LL;

    t193 = ((x773&(x774>x775))^x776);

    if (t193 != 106LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x777 = 15U;
	int16_t x778 = -261;
	volatile uint64_t x780 = 759557126953547409LLU;
	uint64_t t194 = 0LLU;

    t194 = ((x777&(x778>x779))^x780);

    if (t194 != 759557126953547408LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	int32_t x783 = -1;
	static int32_t x784 = INT32_MAX;
	static int64_t t195 = 205LL;

    t195 = ((x781&(x782>x783))^x784);

    if (t195 != 2147483647LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	static uint64_t x786 = UINT64_MAX;
	int64_t x787 = 2013LL;

    t196 = ((x785&(x786>x787))^x788);

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x790 = -1;
	int64_t t197 = -16566220703LL;

    t197 = ((x789&(x790>x791))^x792);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	static int64_t x794 = -176007037032211986LL;
	volatile uint16_t x795 = UINT16_MAX;
	int64_t x796 = 5881993LL;
	volatile int64_t t198 = -67456606904924LL;

    t198 = ((x793&(x794>x795))^x796);

    if (t198 != 5881993LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MIN;
	volatile int16_t x798 = INT16_MIN;
	volatile int32_t x799 = INT32_MIN;
	volatile int8_t x800 = INT8_MIN;
	static volatile int32_t t199 = 400521824;

    t199 = ((x797&(x798>x799))^x800);

    if (t199 != -128) { NG(); } else { ; }
	
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

