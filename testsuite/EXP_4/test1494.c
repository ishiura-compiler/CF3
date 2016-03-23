
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

uint8_t x4 = UINT8_MAX;
static uint8_t x5 = 10U;
int8_t x8 = INT8_MIN;
static uint16_t x10 = UINT16_MAX;
static int32_t x15 = -23330383;
volatile int32_t t4 = 2395;
int8_t x22 = INT8_MAX;
int32_t t6 = -5;
int32_t t8 = 2851;
int64_t x40 = -1LL;
int32_t x47 = INT32_MAX;
int32_t x54 = 0;
int32_t x55 = -1;
static int8_t x66 = INT8_MAX;
uint32_t x74 = 11731U;
int8_t x79 = -23;
uint16_t x80 = UINT16_MAX;
int8_t x81 = -1;
uint64_t x82 = 27916154580475182LLU;
volatile uint16_t x93 = UINT16_MAX;
int8_t x103 = -1;
int8_t x105 = 16;
volatile int16_t x113 = -1;
int64_t x114 = INT64_MIN;
int32_t t30 = -10501746;
uint64_t x128 = 166537801052906130LLU;
static int8_t x129 = -1;
int32_t x134 = 1;
static int8_t x141 = INT8_MIN;
uint32_t x144 = 1048389221U;
volatile int32_t t35 = -1;
volatile int64_t x146 = 61033301281583752LL;
uint64_t x154 = UINT64_MAX;
static int8_t x155 = -15;
uint16_t x156 = 61U;
int32_t x176 = INT32_MAX;
int64_t x182 = -1LL;
static volatile int32_t t45 = -204703;
static uint64_t x185 = UINT64_MAX;
int64_t x187 = -1LL;
uint32_t x189 = UINT32_MAX;
uint8_t x191 = 3U;
static int32_t x195 = INT32_MIN;
int32_t x196 = INT32_MIN;
int32_t x197 = INT32_MIN;
uint8_t x199 = 1U;
static volatile int64_t x202 = -1LL;
volatile uint8_t x204 = 16U;
int32_t t51 = 1;
uint8_t x213 = 61U;
uint64_t x219 = 112032676757LLU;
uint32_t x223 = 5559U;
int16_t x229 = 10336;
static uint32_t x237 = UINT32_MAX;
int32_t x240 = 84;
int64_t x256 = INT64_MAX;
uint32_t x264 = 223568778U;
int64_t x269 = 418775436971832LL;
static int16_t x273 = -1;
int8_t x277 = INT8_MIN;
static volatile int32_t x290 = INT32_MAX;
uint8_t x300 = 68U;
int32_t x312 = -1;
static volatile int32_t t78 = 836552;
int64_t x317 = -1LL;
uint32_t x321 = 162625505U;
static uint32_t x325 = UINT32_MAX;
uint64_t x328 = 161796089355LLU;
int8_t x329 = 16;
int32_t t83 = -16;
uint32_t x342 = 15099629U;
int64_t x345 = INT64_MIN;
volatile int8_t x347 = INT8_MIN;
uint64_t x354 = 10887359256504316LLU;
static int32_t t88 = -4102177;
int64_t x357 = INT64_MIN;
uint32_t x360 = 40808U;
int32_t x365 = -1;
static int16_t x367 = -1;
volatile int32_t t92 = -149222253;
int32_t x377 = 27;
int32_t x378 = 54613;
static uint32_t x382 = 2416U;
static int64_t x383 = 959168103348104729LL;
int64_t x385 = INT64_MIN;
int32_t t97 = 86046829;
volatile int32_t x394 = INT32_MIN;
uint64_t x395 = UINT64_MAX;
static uint64_t x397 = UINT64_MAX;
uint8_t x400 = 1U;
int32_t t99 = -742846429;
int32_t x407 = INT32_MAX;
int16_t x409 = -1;
uint16_t x411 = 0U;
static volatile uint8_t x414 = 1U;
static uint16_t x417 = 362U;
volatile int16_t x418 = INT16_MAX;
int32_t x419 = -75644662;
int16_t x425 = INT16_MIN;
uint64_t x429 = UINT64_MAX;
volatile int64_t x437 = 43371452LL;
static uint8_t x439 = UINT8_MAX;
static int32_t x445 = INT32_MIN;
volatile int32_t t111 = 590813528;
uint16_t x449 = 1U;
uint16_t x451 = UINT16_MAX;
int16_t x453 = -12;
int32_t t114 = 2826;
int64_t x469 = -1LL;
volatile int32_t x474 = INT32_MAX;
uint64_t x475 = 243330LLU;
volatile uint64_t x476 = 70247221330LLU;
volatile int32_t x479 = INT32_MIN;
volatile int32_t t119 = -31239877;
int16_t x482 = INT16_MIN;
int8_t x484 = -1;
int64_t x485 = INT64_MAX;
int32_t x486 = INT32_MIN;
volatile uint32_t x490 = UINT32_MAX;
int8_t x492 = INT8_MAX;
volatile int32_t t122 = -407;
uint32_t x496 = UINT32_MAX;
static int32_t t123 = 53890368;
int32_t x497 = INT32_MAX;
volatile uint16_t x500 = UINT16_MAX;
static int32_t t125 = -106743;
int16_t x507 = -36;
int32_t x508 = -1;
static int16_t x512 = INT16_MIN;
int64_t x516 = INT64_MIN;
int64_t x520 = -8164793700155LL;
static volatile int32_t t129 = 2900103;
uint16_t x524 = 38U;
int16_t x525 = -10804;
int16_t x526 = INT16_MAX;
uint32_t x535 = 475946U;
volatile int32_t t134 = -16143196;
int32_t x541 = INT32_MAX;
int8_t x547 = 4;
int32_t t136 = -5;
uint8_t x551 = UINT8_MAX;
volatile int8_t x560 = INT8_MIN;
volatile uint8_t x562 = UINT8_MAX;
int8_t x566 = 0;
int8_t x583 = INT8_MIN;
static uint8_t x584 = UINT8_MAX;
uint16_t x588 = UINT16_MAX;
volatile int32_t t146 = 28857030;
uint16_t x591 = 15030U;
volatile int16_t x595 = INT16_MAX;
volatile uint16_t x598 = 521U;
static uint8_t x600 = 1U;
int32_t t149 = 328786561;
uint8_t x603 = 0U;
uint16_t x604 = 122U;
int16_t x607 = INT16_MIN;
uint16_t x611 = 7633U;
volatile int32_t t152 = -13;
volatile int8_t x613 = 3;
int32_t t153 = -443168;
static uint16_t x619 = 2315U;
uint64_t x621 = 7778166995802808325LLU;
static int64_t x622 = INT64_MIN;
static uint8_t x625 = UINT8_MAX;
int64_t x632 = -1LL;
uint8_t x642 = UINT8_MAX;
int32_t x646 = INT32_MIN;
uint16_t x653 = 4U;
int32_t x654 = INT32_MIN;
uint8_t x656 = UINT8_MAX;
static int8_t x657 = INT8_MIN;
static volatile int16_t x659 = INT16_MAX;
uint32_t x663 = 2061673U;
volatile uint32_t x677 = UINT32_MAX;
int32_t t170 = 496733109;
uint64_t x685 = 94LLU;
int8_t x686 = -20;
volatile int32_t t171 = -8229360;
int32_t t172 = 341682486;
int32_t x706 = INT32_MIN;
static volatile uint16_t x707 = 107U;
int16_t x708 = INT16_MIN;
uint16_t x709 = 18U;
volatile int64_t x717 = -4527599945281LL;
static int16_t x722 = -3;
int64_t x730 = INT64_MIN;
volatile uint16_t x732 = 40U;
volatile int32_t t182 = -3;
int64_t x733 = INT64_MAX;
int16_t x735 = -1;
static uint32_t x744 = 1166649288U;
uint8_t x750 = UINT8_MAX;
int16_t x752 = -1;
int8_t x757 = -1;
static int32_t x758 = -210951;
static uint64_t x764 = UINT64_MAX;
static volatile int32_t t190 = -178007;
int16_t x766 = INT16_MAX;
uint8_t x775 = 3U;
uint8_t x779 = 1U;
uint32_t x781 = UINT32_MAX;
volatile int32_t x782 = 0;
static int64_t x784 = INT64_MAX;
static int32_t x791 = -1;
volatile int32_t x799 = INT32_MIN;


void f0(void) {
    	uint16_t x1 = 1U;
	int32_t x2 = INT32_MIN;
	int64_t x3 = -1LL;
	int32_t t0 = -136955385;

    t0 = (x1<=(x2>(x3==x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint64_t x6 = 233626511LLU;
	static uint16_t x7 = 475U;
	static int32_t t1 = -9;

    t1 = (x5<=(x6>(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x11 = 57;
	uint8_t x12 = 84U;
	volatile int32_t t2 = 1898;

    t2 = (x9<=(x10>(x11==x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 12268U;
	int8_t x14 = INT8_MAX;
	uint16_t x16 = 8103U;
	volatile int32_t t3 = 0;

    t3 = (x13<=(x14>(x15==x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = 1U;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = INT64_MIN;
	int32_t x20 = -98;

    t4 = (x17<=(x18>(x19==x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint32_t x23 = 336965104U;
	static volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -30062;

    t5 = (x21<=(x22>(x23==x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = INT64_MIN;
	static uint16_t x27 = 400U;
	uint32_t x28 = UINT32_MAX;

    t6 = (x25<=(x26>(x27==x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 1LLU;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MIN;
	static uint64_t x32 = 261410LLU;
	int32_t t7 = -25;

    t7 = (x29<=(x30>(x31==x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = 1959808993U;
	volatile uint64_t x36 = UINT64_MAX;

    t8 = (x33<=(x34>(x35==x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x37 = INT16_MAX;
	static volatile uint16_t x38 = 0U;
	static int64_t x39 = -1LL;
	int32_t t9 = 106;

    t9 = (x37<=(x38>(x39==x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -58LL;
	volatile int8_t x42 = -1;
	static volatile int32_t x43 = INT32_MAX;
	int16_t x44 = 12;
	volatile int32_t t10 = 6694;

    t10 = (x41<=(x42>(x43==x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 8128396950478175535LLU;
	int32_t x46 = 5704;
	static int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 371863910;

    t11 = (x45<=(x46>(x47==x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 3;
	static int16_t x50 = -1;
	volatile int64_t x51 = -1LL;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = 442;

    t12 = (x49<=(x50>(x51==x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	uint32_t x56 = 15U;
	volatile int32_t t13 = -205443169;

    t13 = (x53<=(x54>(x55==x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	volatile int32_t x58 = -227569;
	int8_t x59 = -1;
	static uint64_t x60 = 978082881604116001LLU;
	volatile int32_t t14 = 1109232;

    t14 = (x57<=(x58>(x59==x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 6697308U;
	int8_t x62 = INT8_MIN;
	volatile int32_t x63 = -2;
	volatile int16_t x64 = INT16_MIN;
	int32_t t15 = 236;

    t15 = (x61<=(x62>(x63==x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 5951U;
	static int8_t x67 = 1;
	uint64_t x68 = 1100610462817821445LLU;
	int32_t t16 = -413406;

    t16 = (x65<=(x66>(x67==x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	uint64_t x70 = UINT64_MAX;
	static int8_t x71 = INT8_MAX;
	uint32_t x72 = 45817768U;
	volatile int32_t t17 = -73771993;

    t17 = (x69<=(x70>(x71==x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = 25640406;
	static volatile uint16_t x75 = 8U;
	volatile uint32_t x76 = 526145465U;
	int32_t t18 = -431547;

    t18 = (x73<=(x74>(x75==x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MIN;
	volatile int32_t t19 = 15;

    t19 = (x77<=(x78>(x79==x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x83 = -1;
	static uint16_t x84 = UINT16_MAX;
	int32_t t20 = -262;

    t20 = (x81<=(x82>(x83==x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 6723LLU;
	int16_t x86 = -6;
	uint16_t x87 = 0U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 153573225;

    t21 = (x85<=(x86>(x87==x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	volatile int8_t x90 = -1;
	uint32_t x91 = 21938U;
	int16_t x92 = 3;
	int32_t t22 = 442363595;

    t22 = (x89<=(x90>(x91==x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x94 = 5U;
	volatile int64_t x95 = INT64_MAX;
	int32_t x96 = INT32_MAX;
	static int32_t t23 = -856571840;

    t23 = (x93<=(x94>(x95==x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 1U;
	uint16_t x98 = 14384U;
	static volatile int32_t x99 = 45;
	static volatile int32_t x100 = -1;
	int32_t t24 = -1;

    t24 = (x97<=(x98>(x99==x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	uint16_t x102 = 0U;
	uint16_t x104 = 108U;
	int32_t t25 = 63570316;

    t25 = (x101<=(x102>(x103==x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = 220059443488LL;
	int32_t x107 = INT32_MAX;
	int32_t x108 = 178;
	int32_t t26 = 0;

    t26 = (x105<=(x106>(x107==x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	uint32_t x110 = UINT32_MAX;
	volatile int16_t x111 = INT16_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = 1;

    t27 = (x109<=(x110>(x111==x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x115 = 2U;
	volatile int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = 102184835;

    t28 = (x113<=(x114>(x115==x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MAX;
	static int64_t x119 = -6930277731734791LL;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = 1;

    t29 = (x117<=(x118>(x119==x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint16_t x121 = 2690U;
	int64_t x122 = -1LL;
	static int64_t x123 = INT64_MIN;
	int32_t x124 = -3;

    t30 = (x121<=(x122>(x123==x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = INT32_MIN;
	static int8_t x126 = -1;
	static int32_t x127 = -1;
	volatile int32_t t31 = 5730596;

    t31 = (x125<=(x126>(x127==x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = -1664868295LL;
	int16_t x131 = 35;
	int32_t x132 = INT32_MAX;
	int32_t t32 = 11783528;

    t32 = (x129<=(x130>(x131==x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	int8_t x135 = 1;
	int16_t x136 = -59;
	int32_t t33 = 89;

    t33 = (x133<=(x134>(x135==x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = -1;
	static int16_t x138 = 1010;
	int8_t x139 = INT8_MIN;
	int32_t x140 = -1508;
	static int32_t t34 = -6;

    t34 = (x137<=(x138>(x139==x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x142 = 17171U;
	static int8_t x143 = INT8_MIN;

    t35 = (x141<=(x142>(x143==x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 106U;
	int8_t x147 = 5;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -121;

    t36 = (x145<=(x146>(x147==x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -28;
	int64_t x150 = INT64_MIN;
	uint32_t x151 = 399U;
	int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 47350469;

    t37 = (x149<=(x150>(x151==x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = -1LL;
	int32_t t38 = 472526;

    t38 = (x153<=(x154>(x155==x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x157 = UINT16_MAX;
	volatile int16_t x158 = -5;
	int64_t x159 = 578LL;
	static int16_t x160 = -1;
	volatile int32_t t39 = 825737;

    t39 = (x157<=(x158>(x159==x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -2LL;
	volatile int64_t x162 = INT64_MAX;
	int8_t x163 = 1;
	volatile int16_t x164 = -5175;
	int32_t t40 = -656084587;

    t40 = (x161<=(x162>(x163==x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = -1;
	static int8_t x166 = INT8_MAX;
	int32_t x167 = INT32_MIN;
	uint32_t x168 = 1122U;
	volatile int32_t t41 = 4630;

    t41 = (x165<=(x166>(x167==x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x169 = INT64_MAX;
	int64_t x170 = INT64_MIN;
	int64_t x171 = -1LL;
	int64_t x172 = INT64_MIN;
	int32_t t42 = 45258959;

    t42 = (x169<=(x170>(x171==x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x173 = INT8_MAX;
	static uint16_t x174 = 316U;
	int16_t x175 = 102;
	volatile int32_t t43 = -1019587;

    t43 = (x173<=(x174>(x175==x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 451U;
	volatile int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = UINT16_MAX;
	int32_t t44 = 90253;

    t44 = (x177<=(x178>(x179==x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = INT64_MAX;
	int64_t x183 = INT64_MIN;
	uint64_t x184 = UINT64_MAX;

    t45 = (x181<=(x182>(x183==x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x186 = 4U;
	static int16_t x188 = INT16_MAX;
	volatile int32_t t46 = -478791;

    t46 = (x185<=(x186>(x187==x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x190 = -1;
	int16_t x192 = -1;
	int32_t t47 = -418;

    t47 = (x189<=(x190>(x191==x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = 19U;
	int8_t x194 = 2;
	int32_t t48 = -75603511;

    t48 = (x193<=(x194>(x195==x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x198 = 508U;
	int32_t x200 = -1;
	int32_t t49 = 2227349;

    t49 = (x197<=(x198>(x199==x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = INT8_MIN;
	static uint64_t x203 = 313LLU;
	volatile int32_t t50 = 126675276;

    t50 = (x201<=(x202>(x203==x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	uint32_t x206 = 17082U;
	int64_t x207 = 2053404018LL;
	static int8_t x208 = 6;

    t51 = (x205<=(x206>(x207==x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	volatile int32_t x212 = -1;
	static int32_t t52 = -7;

    t52 = (x209<=(x210>(x211==x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x214 = 9;
	int8_t x215 = INT8_MIN;
	static uint16_t x216 = 13494U;
	int32_t t53 = 2170289;

    t53 = (x213<=(x214>(x215==x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x217 = UINT32_MAX;
	int32_t x218 = -3495032;
	volatile int16_t x220 = INT16_MIN;
	static int32_t t54 = 6516533;

    t54 = (x217<=(x218>(x219==x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MAX;
	int32_t x222 = INT32_MIN;
	volatile int64_t x224 = 2035LL;
	volatile int32_t t55 = 6207818;

    t55 = (x221<=(x222>(x223==x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x225 = 179197U;
	int32_t x226 = INT32_MAX;
	int8_t x227 = -3;
	static volatile int32_t x228 = INT32_MAX;
	volatile int32_t t56 = -499850;

    t56 = (x225<=(x226>(x227==x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x230 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t57 = 8044999;

    t57 = (x229<=(x230>(x231==x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = 0;
	static int16_t x234 = -10170;
	uint16_t x235 = 271U;
	uint16_t x236 = UINT16_MAX;
	static int32_t t58 = -170115512;

    t58 = (x233<=(x234>(x235==x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x238 = INT16_MIN;
	int64_t x239 = 14543750262LL;
	static volatile int32_t t59 = -50600;

    t59 = (x237<=(x238>(x239==x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = UINT8_MAX;
	uint32_t x244 = UINT32_MAX;
	static int32_t t60 = 27;

    t60 = (x241<=(x242>(x243==x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1529;
	uint64_t x246 = 102762LLU;
	int64_t x247 = INT64_MIN;
	static int8_t x248 = INT8_MIN;
	int32_t t61 = -2;

    t61 = (x245<=(x246>(x247==x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -10;
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = -121;
	static int32_t x252 = -1;
	volatile int32_t t62 = 3773;

    t62 = (x249<=(x250>(x251==x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	uint64_t x254 = 958LLU;
	int8_t x255 = -1;
	int32_t t63 = 54577549;

    t63 = (x253<=(x254>(x255==x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	int8_t x258 = 0;
	uint32_t x259 = 876552341U;
	uint32_t x260 = 116848267U;
	static int32_t t64 = 404405012;

    t64 = (x257<=(x258>(x259==x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = INT8_MIN;
	uint16_t x262 = 8127U;
	int32_t x263 = -768004124;
	volatile int32_t t65 = 88538;

    t65 = (x261<=(x262>(x263==x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -3077120LL;
	uint8_t x266 = 1U;
	int16_t x267 = -1;
	volatile uint8_t x268 = UINT8_MAX;
	int32_t t66 = 1;

    t66 = (x265<=(x266>(x267==x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = -357465060;
	volatile int8_t x271 = INT8_MIN;
	uint64_t x272 = 9152557632262520390LLU;
	int32_t t67 = 106;

    t67 = (x269<=(x270>(x271==x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = 2101465150574527053LL;
	int16_t x275 = INT16_MAX;
	int32_t x276 = 703020;
	int32_t t68 = -729829479;

    t68 = (x273<=(x274>(x275==x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x278 = 3661;
	int8_t x279 = INT8_MAX;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = 62442;

    t69 = (x277<=(x278>(x279==x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 2560LL;
	uint32_t x282 = 21U;
	int32_t x283 = -1;
	int16_t x284 = INT16_MIN;
	int32_t t70 = -7215;

    t70 = (x281<=(x282>(x283==x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = -1LL;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	volatile int64_t x288 = INT64_MAX;
	volatile int32_t t71 = -65514088;

    t71 = (x285<=(x286>(x287==x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MIN;
	volatile int64_t x291 = -208697966123407LL;
	int8_t x292 = -1;
	volatile int32_t t72 = -847099540;

    t72 = (x289<=(x290>(x291==x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	int64_t x294 = 39795164LL;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = INT64_MIN;
	int32_t t73 = 1;

    t73 = (x293<=(x294>(x295==x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x297 = 1076404011205LLU;
	uint32_t x298 = 283803573U;
	int8_t x299 = INT8_MIN;
	int32_t t74 = 263166399;

    t74 = (x297<=(x298>(x299==x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -8311LL;
	uint32_t x302 = 7478132U;
	volatile int8_t x303 = 0;
	uint8_t x304 = 37U;
	volatile int32_t t75 = -7818;

    t75 = (x301<=(x302>(x303==x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -393977471249268339LL;
	volatile int8_t x306 = INT8_MIN;
	volatile int16_t x307 = INT16_MAX;
	uint8_t x308 = 7U;
	int32_t t76 = -234723;

    t76 = (x305<=(x306>(x307==x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x309 = 1U;
	static int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	int32_t t77 = -744431427;

    t77 = (x309<=(x310>(x311==x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 821821U;
	int16_t x314 = -1;
	static int16_t x315 = 0;
	static uint64_t x316 = UINT64_MAX;

    t78 = (x313<=(x314>(x315==x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x318 = -345;
	int16_t x319 = -1;
	int64_t x320 = 503155LL;
	int32_t t79 = 517572408;

    t79 = (x317<=(x318>(x319==x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x322 = 2U;
	uint16_t x323 = 171U;
	volatile int8_t x324 = INT8_MAX;
	static volatile int32_t t80 = -48666733;

    t80 = (x321<=(x322>(x323==x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x326 = -2;
	static int16_t x327 = INT16_MIN;
	int32_t t81 = 747631458;

    t81 = (x325<=(x326>(x327==x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x330 = UINT16_MAX;
	uint16_t x331 = UINT16_MAX;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = 62499933;

    t82 = (x329<=(x330>(x331==x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	int8_t x334 = INT8_MAX;
	int8_t x335 = 10;
	uint16_t x336 = 6U;

    t83 = (x333<=(x334>(x335==x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	uint8_t x338 = 7U;
	int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MAX;
	static volatile int32_t t84 = 402311142;

    t84 = (x337<=(x338>(x339==x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 1U;
	volatile int32_t x343 = 334904028;
	int64_t x344 = 401853LL;
	volatile int32_t t85 = -1;

    t85 = (x341<=(x342>(x343==x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = -1;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = -186267;

    t86 = (x345<=(x346>(x347==x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int32_t x350 = INT32_MAX;
	uint64_t x351 = UINT64_MAX;
	uint16_t x352 = UINT16_MAX;
	int32_t t87 = 303886594;

    t87 = (x349<=(x350>(x351==x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 46068767428LLU;
	volatile int64_t x355 = -1LL;
	int16_t x356 = -1;

    t88 = (x353<=(x354>(x355==x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x358 = 5143554543LL;
	int32_t x359 = -7;
	static volatile int32_t t89 = -492;

    t89 = (x357<=(x358>(x359==x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	int32_t x362 = INT32_MAX;
	uint64_t x363 = UINT64_MAX;
	uint16_t x364 = 14U;
	volatile int32_t t90 = -1232;

    t90 = (x361<=(x362>(x363==x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = INT64_MIN;
	volatile uint32_t x368 = 1894U;
	int32_t t91 = -5;

    t91 = (x365<=(x366>(x367==x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	uint16_t x370 = 6U;
	static uint32_t x371 = 6U;
	static int64_t x372 = -10667935382440550LL;

    t92 = (x369<=(x370>(x371==x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	uint8_t x374 = 13U;
	static uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t93 = -42;

    t93 = (x373<=(x374>(x375==x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x379 = -1;
	uint64_t x380 = 3794571307436LLU;
	int32_t t94 = -4;

    t94 = (x377<=(x378>(x379==x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = INT64_MIN;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t95 = 555321;

    t95 = (x381<=(x382>(x383==x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = INT16_MIN;
	int64_t x387 = 196139023566385939LL;
	uint8_t x388 = 98U;
	int32_t t96 = -56727885;

    t96 = (x385<=(x386>(x387==x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 0;
	volatile int64_t x390 = -7814643LL;
	int64_t x391 = INT64_MIN;
	int16_t x392 = 10;

    t97 = (x389<=(x390>(x391==x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x393 = UINT32_MAX;
	volatile int64_t x396 = -1LL;
	static volatile int32_t t98 = 8234874;

    t98 = (x393<=(x394>(x395==x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x398 = INT8_MAX;
	int64_t x399 = INT64_MAX;

    t99 = (x397<=(x398>(x399==x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = UINT8_MAX;
	volatile uint8_t x402 = 46U;
	uint64_t x403 = 73854525127LLU;
	volatile uint8_t x404 = UINT8_MAX;
	volatile int32_t t100 = -1952;

    t100 = (x401<=(x402>(x403==x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	uint16_t x406 = 291U;
	uint32_t x408 = UINT32_MAX;
	int32_t t101 = 0;

    t101 = (x405<=(x406>(x407==x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x410 = 1;
	static volatile int8_t x412 = -1;
	volatile int32_t t102 = 26;

    t102 = (x409<=(x410>(x411==x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	int32_t x415 = INT32_MAX;
	static uint16_t x416 = 184U;
	static int32_t t103 = -400983448;

    t103 = (x413<=(x414>(x415==x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x420 = -1;
	int32_t t104 = 589;

    t104 = (x417<=(x418>(x419==x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = INT16_MIN;
	int16_t x422 = -1;
	int64_t x423 = 1135729280667649381LL;
	int32_t x424 = -1;
	volatile int32_t t105 = -3969743;

    t105 = (x421<=(x422>(x423==x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x426 = UINT64_MAX;
	static int32_t x427 = 27;
	int8_t x428 = -1;
	volatile int32_t t106 = 4748;

    t106 = (x425<=(x426>(x427==x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MIN;
	static int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	volatile int32_t t107 = 29;

    t107 = (x429<=(x430>(x431==x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x433 = 3U;
	uint8_t x434 = 79U;
	uint64_t x435 = 76373445LLU;
	uint64_t x436 = 229380672591156077LLU;
	int32_t t108 = 30279;

    t108 = (x433<=(x434>(x435==x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x438 = INT8_MAX;
	volatile uint32_t x440 = 339623U;
	int32_t t109 = 0;

    t109 = (x437<=(x438>(x439==x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 61U;
	volatile int32_t x442 = -1;
	static int64_t x443 = -720776698812LL;
	int32_t x444 = INT32_MIN;
	static int32_t t110 = 41;

    t110 = (x441<=(x442>(x443==x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x446 = 4036U;
	int32_t x447 = INT32_MIN;
	uint16_t x448 = UINT16_MAX;

    t111 = (x445<=(x446>(x447==x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = 22U;
	int64_t x452 = INT64_MIN;
	int32_t t112 = 56224;

    t112 = (x449<=(x450>(x451==x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x454 = INT32_MAX;
	volatile uint16_t x455 = 373U;
	uint32_t x456 = UINT32_MAX;
	int32_t t113 = 348;

    t113 = (x453<=(x454>(x455==x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 19U;
	int64_t x458 = -1LL;
	uint32_t x459 = UINT32_MAX;
	int32_t x460 = INT32_MIN;

    t114 = (x457<=(x458>(x459==x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	uint32_t x462 = 300U;
	volatile uint64_t x463 = UINT64_MAX;
	int64_t x464 = INT64_MIN;
	static int32_t t115 = -104104677;

    t115 = (x461<=(x462>(x463==x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = INT8_MIN;
	int16_t x466 = INT16_MIN;
	int16_t x467 = 47;
	static int16_t x468 = 3795;
	volatile int32_t t116 = -276095730;

    t116 = (x465<=(x466>(x467==x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = 2617U;
	volatile int8_t x471 = -14;
	int64_t x472 = INT64_MIN;
	static int32_t t117 = -3260;

    t117 = (x469<=(x470>(x471==x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 229412295U;
	int32_t t118 = 1;

    t118 = (x473<=(x474>(x475==x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = 14589875326726742LL;
	static volatile int16_t x478 = -7760;
	volatile int16_t x480 = INT16_MIN;

    t119 = (x477<=(x478>(x479==x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x481 = 3053LLU;
	static uint32_t x483 = 6U;
	int32_t t120 = 789100;

    t120 = (x481<=(x482>(x483==x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x487 = 33503785786516924LLU;
	int64_t x488 = 150850726LL;
	volatile int32_t t121 = 12;

    t121 = (x485<=(x486>(x487==x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = -1;
	int32_t x491 = -56298780;

    t122 = (x489<=(x490>(x491==x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 0U;
	int32_t x494 = 522342;
	int16_t x495 = INT16_MAX;

    t123 = (x493<=(x494>(x495==x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x498 = 57360;
	volatile int16_t x499 = -1536;
	int32_t t124 = -626;

    t124 = (x497<=(x498>(x499==x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x501 = 130;
	int16_t x502 = INT16_MIN;
	volatile uint8_t x503 = 21U;
	int32_t x504 = -1;

    t125 = (x501<=(x502>(x503==x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 2493LLU;
	int32_t x506 = -1;
	int32_t t126 = -188273;

    t126 = (x505<=(x506>(x507==x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	uint32_t x510 = 29U;
	static volatile int16_t x511 = -1;
	volatile int32_t t127 = -23660929;

    t127 = (x509<=(x510>(x511==x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 31;
	volatile int64_t x514 = -35470496566619936LL;
	uint8_t x515 = 4U;
	int32_t t128 = 3615397;

    t128 = (x513<=(x514>(x515==x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 160425481025496089LLU;
	volatile int16_t x518 = 293;
	int16_t x519 = 1;

    t129 = (x517<=(x518>(x519==x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x521 = 855812899LLU;
	uint32_t x522 = 165U;
	int16_t x523 = -1;
	int32_t t130 = 1062266172;

    t130 = (x521<=(x522>(x523==x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x527 = UINT8_MAX;
	uint64_t x528 = 16112LLU;
	static volatile int32_t t131 = -919;

    t131 = (x525<=(x526>(x527==x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	int8_t x530 = INT8_MIN;
	volatile int16_t x531 = -1;
	volatile int32_t x532 = -1;
	int32_t t132 = 146530;

    t132 = (x529<=(x530>(x531==x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = -1;
	uint32_t x534 = UINT32_MAX;
	int32_t x536 = INT32_MIN;
	static volatile int32_t t133 = 23364406;

    t133 = (x533<=(x534>(x535==x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x537 = 96U;
	volatile uint64_t x538 = 852898535102964987LLU;
	int32_t x539 = -1;
	uint16_t x540 = 9981U;

    t134 = (x537<=(x538>(x539==x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x542 = UINT32_MAX;
	int32_t x543 = -38069;
	int8_t x544 = INT8_MIN;
	int32_t t135 = -78790325;

    t135 = (x541<=(x542>(x543==x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = UINT8_MAX;
	int8_t x546 = -1;
	uint16_t x548 = 159U;

    t136 = (x545<=(x546>(x547==x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 59752650065LL;
	volatile uint64_t x550 = UINT64_MAX;
	static uint8_t x552 = 3U;
	static int32_t t137 = 0;

    t137 = (x549<=(x550>(x551==x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	int32_t x554 = -10608;
	static int64_t x555 = INT64_MIN;
	volatile uint16_t x556 = 17U;
	int32_t t138 = 1320642;

    t138 = (x553<=(x554>(x555==x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MIN;
	int8_t x558 = INT8_MIN;
	uint16_t x559 = 13U;
	volatile int32_t t139 = 4;

    t139 = (x557<=(x558>(x559==x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	uint8_t x563 = UINT8_MAX;
	int32_t x564 = 42809;
	int32_t t140 = 399997536;

    t140 = (x561<=(x562>(x563==x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 5582704U;
	uint32_t x567 = 449902167U;
	int32_t x568 = 513092990;
	static volatile int32_t t141 = 857;

    t141 = (x565<=(x566>(x567==x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = UINT64_MAX;
	static int16_t x570 = INT16_MIN;
	static int64_t x571 = -1LL;
	volatile uint32_t x572 = 8267774U;
	volatile int32_t t142 = 1067758773;

    t142 = (x569<=(x570>(x571==x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x573 = INT8_MIN;
	static int32_t x574 = INT32_MIN;
	int16_t x575 = INT16_MIN;
	volatile uint16_t x576 = 1U;
	static volatile int32_t t143 = 361844;

    t143 = (x573<=(x574>(x575==x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 878013080LLU;
	static int16_t x578 = INT16_MIN;
	uint16_t x579 = UINT16_MAX;
	uint8_t x580 = 6U;
	static volatile int32_t t144 = 883;

    t144 = (x577<=(x578>(x579==x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 7U;
	int16_t x582 = -4429;
	volatile int32_t t145 = 5775661;

    t145 = (x581<=(x582>(x583==x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	int64_t x586 = INT64_MAX;
	static volatile int64_t x587 = -1LL;

    t146 = (x585<=(x586>(x587==x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = UINT32_MAX;
	static int32_t x590 = -262973793;
	volatile int16_t x592 = INT16_MAX;
	volatile int32_t t147 = -1;

    t147 = (x589<=(x590>(x591==x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 5;
	int32_t x594 = INT32_MAX;
	volatile uint32_t x596 = UINT32_MAX;
	volatile int32_t t148 = 52960;

    t148 = (x593<=(x594>(x595==x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 6721LLU;
	static uint64_t x599 = 4051644LLU;

    t149 = (x597<=(x598>(x599==x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = 174U;
	int32_t x602 = INT32_MIN;
	volatile int32_t t150 = 5092;

    t150 = (x601<=(x602>(x603==x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	int16_t x606 = INT16_MIN;
	uint64_t x608 = 7619LLU;
	static int32_t t151 = -632525;

    t151 = (x605<=(x606>(x607==x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = 0;
	static int16_t x610 = 2815;
	int16_t x612 = INT16_MAX;

    t152 = (x609<=(x610>(x611==x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x614 = UINT16_MAX;
	uint32_t x615 = 507558960U;
	uint32_t x616 = UINT32_MAX;

    t153 = (x613<=(x614>(x615==x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	int64_t x618 = INT64_MIN;
	volatile uint32_t x620 = 32980395U;
	volatile int32_t t154 = 931699;

    t154 = (x617<=(x618>(x619==x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x623 = -1;
	uint8_t x624 = 3U;
	int32_t t155 = -4;

    t155 = (x621<=(x622>(x623==x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x626 = 268U;
	volatile int64_t x627 = INT64_MAX;
	volatile int32_t x628 = INT32_MIN;
	volatile int32_t t156 = 27051;

    t156 = (x625<=(x626>(x627==x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x629 = 873196088U;
	uint8_t x630 = 1U;
	volatile uint8_t x631 = 28U;
	volatile int32_t t157 = 3168;

    t157 = (x629<=(x630>(x631==x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -70;
	uint16_t x634 = 2690U;
	static uint32_t x635 = 1859813U;
	uint32_t x636 = 250U;
	int32_t t158 = -256468;

    t158 = (x633<=(x634>(x635==x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -1;
	static int64_t x638 = INT64_MIN;
	static uint32_t x639 = 0U;
	volatile uint64_t x640 = 8349334013948LLU;
	volatile int32_t t159 = 0;

    t159 = (x637<=(x638>(x639==x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	static int64_t x643 = INT64_MIN;
	static int8_t x644 = INT8_MIN;
	static int32_t t160 = 538;

    t160 = (x641<=(x642>(x643==x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x645 = 4U;
	static volatile uint8_t x647 = UINT8_MAX;
	static volatile int64_t x648 = INT64_MIN;
	volatile int32_t t161 = 1060928;

    t161 = (x645<=(x646>(x647==x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x649 = 17395197731108617LLU;
	static uint32_t x650 = UINT32_MAX;
	static volatile int8_t x651 = INT8_MAX;
	volatile int8_t x652 = INT8_MAX;
	int32_t t162 = 1014;

    t162 = (x649<=(x650>(x651==x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x655 = INT16_MIN;
	int32_t t163 = 113421;

    t163 = (x653<=(x654>(x655==x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x658 = 0U;
	volatile int8_t x660 = -1;
	static int32_t t164 = 2;

    t164 = (x657<=(x658>(x659==x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x661 = UINT16_MAX;
	static int16_t x662 = -1;
	static uint64_t x664 = 10210013784579LLU;
	volatile int32_t t165 = -107279;

    t165 = (x661<=(x662>(x663==x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 42565106U;
	uint64_t x666 = 2682LLU;
	int16_t x667 = 1;
	int64_t x668 = -1LL;
	int32_t t166 = -4789;

    t166 = (x665<=(x666>(x667==x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = -1LL;
	static uint64_t x670 = 1544LLU;
	uint16_t x671 = UINT16_MAX;
	uint16_t x672 = 17940U;
	int32_t t167 = 97;

    t167 = (x669<=(x670>(x671==x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int64_t x674 = INT64_MIN;
	int16_t x675 = -1;
	static int64_t x676 = -1LL;
	int32_t t168 = -253364249;

    t168 = (x673<=(x674>(x675==x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x678 = -937893975410LL;
	static int16_t x679 = -1;
	uint32_t x680 = 50430746U;
	int32_t t169 = -1;

    t169 = (x677<=(x678>(x679==x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	volatile uint32_t x682 = 48U;
	int64_t x683 = INT64_MAX;
	int16_t x684 = INT16_MIN;

    t170 = (x681<=(x682>(x683==x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x687 = -1;
	static int64_t x688 = -4544428558505946960LL;

    t171 = (x685<=(x686>(x687==x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	int32_t x690 = INT32_MIN;
	int32_t x691 = -1;
	int64_t x692 = 67419434710LL;

    t172 = (x689<=(x690>(x691==x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int8_t x694 = INT8_MIN;
	uint32_t x695 = 126117170U;
	int32_t x696 = INT32_MIN;
	int32_t t173 = -97499;

    t173 = (x693<=(x694>(x695==x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	int8_t x698 = -1;
	uint16_t x699 = 10U;
	int8_t x700 = INT8_MIN;
	volatile int32_t t174 = -4;

    t174 = (x697<=(x698>(x699==x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	static volatile int32_t x702 = INT32_MIN;
	volatile uint64_t x703 = 15408675297880541LLU;
	static uint8_t x704 = 13U;
	static int32_t t175 = 27;

    t175 = (x701<=(x702>(x703==x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 50U;
	static volatile int32_t t176 = -62187;

    t176 = (x705<=(x706>(x707==x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x710 = UINT32_MAX;
	int16_t x711 = -1;
	static int8_t x712 = 1;
	int32_t t177 = 1;

    t177 = (x709<=(x710>(x711==x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	int8_t x714 = INT8_MIN;
	int64_t x715 = -1LL;
	int64_t x716 = -1809867LL;
	volatile int32_t t178 = 981533;

    t178 = (x713<=(x714>(x715==x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = -1;
	int8_t x719 = INT8_MIN;
	int8_t x720 = INT8_MIN;
	volatile int32_t t179 = -1588;

    t179 = (x717<=(x718>(x719==x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int32_t x723 = -1;
	int16_t x724 = INT16_MIN;
	static int32_t t180 = -1;

    t180 = (x721<=(x722>(x723==x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = -1LL;
	static volatile uint64_t x726 = 1449124246713584753LLU;
	int64_t x727 = INT64_MIN;
	static int32_t x728 = INT32_MIN;
	int32_t t181 = 46102595;

    t181 = (x725<=(x726>(x727==x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x729 = 22U;
	uint32_t x731 = UINT32_MAX;

    t182 = (x729<=(x730>(x731==x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x734 = UINT8_MAX;
	int16_t x736 = 9262;
	volatile int32_t t183 = -62499468;

    t183 = (x733<=(x734>(x735==x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MIN;
	volatile int32_t x738 = INT32_MIN;
	int16_t x739 = 60;
	uint64_t x740 = UINT64_MAX;
	static int32_t t184 = -18;

    t184 = (x737<=(x738>(x739==x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x741 = 0;
	int64_t x742 = INT64_MAX;
	int64_t x743 = 831190LL;
	volatile int32_t t185 = -15193;

    t185 = (x741<=(x742>(x743==x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	static int64_t x746 = -57812105319573LL;
	uint8_t x747 = 7U;
	int32_t x748 = -7;
	int32_t t186 = -237308;

    t186 = (x745<=(x746>(x747==x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = INT8_MAX;
	int16_t x751 = INT16_MIN;
	static volatile int32_t t187 = -2;

    t187 = (x749<=(x750>(x751==x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x753 = -502576230809509142LL;
	uint64_t x754 = 5101990757881617LLU;
	volatile int16_t x755 = 186;
	int8_t x756 = INT8_MIN;
	int32_t t188 = -2175;

    t188 = (x753<=(x754>(x755==x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x759 = 5U;
	volatile int32_t x760 = -302162;
	int32_t t189 = 311813;

    t189 = (x757<=(x758>(x759==x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x761 = -1;
	int16_t x762 = INT16_MIN;
	uint64_t x763 = 11265563076428LLU;

    t190 = (x761<=(x762>(x763==x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	uint64_t x767 = 474257550132350LLU;
	static uint16_t x768 = UINT16_MAX;
	volatile int32_t t191 = 3561187;

    t191 = (x765<=(x766>(x767==x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 177724794;
	int64_t x770 = INT64_MIN;
	int32_t x771 = INT32_MIN;
	volatile int64_t x772 = INT64_MIN;
	static volatile int32_t t192 = -1027880834;

    t192 = (x769<=(x770>(x771==x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MIN;
	int64_t x774 = 1061793818172352LL;
	static int8_t x776 = -17;
	int32_t t193 = 0;

    t193 = (x773<=(x774>(x775==x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	int64_t x778 = INT64_MIN;
	int8_t x780 = INT8_MIN;
	int32_t t194 = 70110108;

    t194 = (x777<=(x778>(x779==x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x783 = UINT64_MAX;
	int32_t t195 = -34375;

    t195 = (x781<=(x782>(x783==x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x785 = INT32_MIN;
	static volatile int16_t x786 = 30;
	uint16_t x787 = 2580U;
	int64_t x788 = 11655LL;
	volatile int32_t t196 = 7127;

    t196 = (x785<=(x786>(x787==x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	volatile int16_t x790 = -1;
	static uint64_t x792 = 25219LLU;
	volatile int32_t t197 = -3;

    t197 = (x789<=(x790>(x791==x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 21152805U;
	volatile int32_t x794 = 463606499;
	volatile uint8_t x795 = 4U;
	int8_t x796 = -1;
	volatile int32_t t198 = 17505530;

    t198 = (x793<=(x794>(x795==x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 323650291LL;
	uint16_t x798 = 11811U;
	static volatile int8_t x800 = INT8_MIN;
	volatile int32_t t199 = 29;

    t199 = (x797<=(x798>(x799==x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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

