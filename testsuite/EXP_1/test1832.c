
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

static uint8_t x4 = 61U;
uint64_t x12 = UINT64_MAX;
int16_t x27 = INT16_MIN;
int32_t x33 = -119;
static int32_t x40 = INT32_MIN;
static int64_t t10 = -108728212994643153LL;
volatile int32_t x47 = 101815;
uint64_t x52 = 19770LLU;
volatile uint64_t t12 = 265946578877260LLU;
volatile int32_t t14 = 3;
static int16_t x63 = INT16_MIN;
static int16_t x66 = INT16_MAX;
int16_t x71 = 47;
int32_t x75 = -1;
static int16_t x78 = INT16_MIN;
uint8_t x80 = 90U;
int32_t x82 = -104015;
uint32_t x84 = 2130232360U;
static uint32_t x87 = UINT32_MAX;
uint32_t t21 = 119073U;
uint16_t x89 = 953U;
uint64_t x93 = 171579375641518892LLU;
int32_t x96 = -3062;
int64_t t24 = 6003062LL;
int8_t x107 = INT8_MAX;
volatile int32_t t26 = -1;
int16_t x112 = 1;
volatile int64_t t30 = 238082237293846LL;
volatile uint32_t x125 = 0U;
volatile int64_t x131 = INT64_MIN;
int64_t x136 = INT64_MAX;
volatile int16_t x144 = -943;
static uint8_t x151 = 2U;
int64_t t37 = -368674508LL;
int16_t x154 = INT16_MAX;
uint64_t x159 = UINT64_MAX;
static volatile uint64_t t39 = 1653811770327186LLU;
static int8_t x164 = INT8_MAX;
int64_t x170 = 13LL;
volatile int64_t x171 = -336LL;
volatile int32_t t46 = -10;
volatile uint64_t x192 = 24159311LLU;
volatile uint64_t t49 = 151LLU;
int32_t t50 = -8;
volatile int64_t x219 = INT64_MIN;
int32_t t54 = -1;
int64_t x228 = INT64_MIN;
int16_t x230 = INT16_MIN;
volatile int32_t t56 = 3735;
int8_t x243 = -1;
volatile int32_t t59 = 40906;
uint32_t t60 = 300686376U;
volatile int32_t x253 = -430;
volatile int64_t x256 = INT64_MIN;
int32_t x257 = INT32_MIN;
int64_t x258 = INT64_MIN;
volatile int64_t t64 = -860332LL;
volatile int32_t x265 = -248083306;
static int64_t x267 = 37906113240LL;
uint64_t t67 = 2705649464LLU;
volatile int64_t x281 = INT64_MIN;
volatile int64_t x291 = -1LL;
uint64_t x292 = UINT64_MAX;
volatile uint64_t t69 = 165788529346624990LLU;
volatile int16_t x294 = INT16_MAX;
volatile int64_t t70 = 211115467830667LL;
uint16_t x299 = UINT16_MAX;
int64_t x305 = INT64_MIN;
int16_t x308 = -2249;
uint64_t x313 = 26641493238907LLU;
int8_t x320 = -24;
int64_t x327 = 2021830686596474745LL;
volatile int32_t t79 = 13;
static uint64_t t81 = 132063227960290036LLU;
int64_t x348 = INT64_MAX;
int64_t t82 = 7180800138371LL;
volatile uint8_t x354 = 0U;
static int32_t x355 = 463016;
int64_t x357 = 2912726914176519791LL;
volatile int8_t x358 = INT8_MAX;
int16_t x362 = INT16_MAX;
int32_t t86 = 63683;
int16_t x369 = INT16_MIN;
int64_t x374 = INT64_MIN;
volatile int64_t x375 = -2LL;
static uint16_t x384 = UINT16_MAX;
int8_t x400 = 53;
uint64_t t95 = 3465LLU;
uint64_t x403 = UINT64_MAX;
volatile uint64_t t96 = 7775983790030195LLU;
volatile uint64_t x405 = 15783922878124LLU;
uint32_t x406 = 0U;
static uint64_t t97 = 2014LLU;
uint16_t x409 = UINT16_MAX;
volatile int32_t x410 = INT32_MAX;
static int64_t x413 = INT64_MIN;
int64_t x416 = -1LL;
static int8_t x417 = INT8_MIN;
int8_t x418 = 0;
int16_t x422 = INT16_MAX;
int8_t x423 = -1;
int8_t x429 = INT8_MAX;
static volatile int32_t x433 = INT32_MIN;
int64_t t104 = -1003033LL;
int8_t x443 = INT8_MIN;
int16_t x445 = INT16_MIN;
static volatile int8_t x449 = INT8_MIN;
volatile uint64_t t108 = 837LLU;
volatile int32_t x453 = 9;
static int8_t x454 = -57;
volatile int64_t x460 = INT64_MIN;
int64_t t110 = -6829098212487LL;
int64_t t112 = -21LL;
static uint64_t x474 = 23622LLU;
int64_t x475 = INT64_MIN;
static uint32_t x481 = UINT32_MAX;
static volatile int32_t t116 = -26568810;
static int64_t x487 = INT64_MAX;
static int16_t x491 = -46;
int64_t x494 = 596888307LL;
uint32_t x495 = UINT32_MAX;
static int16_t x499 = 242;
uint32_t x505 = 4033U;
uint8_t x510 = 5U;
volatile uint64_t t123 = 23LLU;
volatile uint32_t x515 = 2411U;
uint16_t x521 = UINT16_MAX;
int64_t x522 = INT64_MAX;
int32_t x530 = INT32_MAX;
uint64_t t129 = 1298LLU;
uint16_t x539 = UINT16_MAX;
uint32_t x542 = 9U;
int32_t x543 = 2;
volatile int32_t t131 = 14022540;
static volatile int8_t x547 = INT8_MIN;
volatile int64_t t134 = 242614291958323LL;
int16_t x557 = 0;
int64_t x560 = INT64_MAX;
static uint64_t t136 = 6095773628526175604LLU;
int64_t x572 = 437076028884483LL;
int8_t x582 = INT8_MIN;
int32_t t142 = 195933;
static int32_t t143 = -21302063;
static int32_t x595 = -1;
uint8_t x596 = 67U;
static int32_t x597 = INT32_MAX;
uint64_t x598 = UINT64_MAX;
static int16_t x599 = 2;
int64_t x606 = 3439784LL;
static uint64_t t147 = 575LLU;
volatile uint32_t x617 = 8448422U;
static int64_t t150 = 0LL;
uint16_t x627 = UINT16_MAX;
uint8_t x636 = UINT8_MAX;
int8_t x638 = INT8_MAX;
volatile uint16_t x639 = 3427U;
int8_t x640 = INT8_MIN;
static int32_t t155 = 422255599;
int16_t x644 = 1;
static volatile uint32_t x646 = UINT32_MAX;
volatile uint64_t x647 = UINT64_MAX;
static uint8_t x648 = 1U;
static int64_t x649 = -1LL;
uint64_t x651 = UINT64_MAX;
volatile uint32_t x653 = 10401U;
volatile int32_t x657 = 676668;
int32_t x659 = -1;
int32_t x662 = INT32_MIN;
int64_t x663 = -686342169510264LL;
static int64_t t161 = 1LL;
static uint32_t x668 = UINT32_MAX;
int64_t x669 = INT64_MAX;
static int16_t x670 = -3;
static int16_t x671 = -1;
int64_t x672 = INT64_MAX;
volatile int32_t t165 = 0;
int32_t x685 = 4;
static int64_t x687 = -1LL;
int32_t x692 = 382110411;
int32_t x694 = INT32_MIN;
int16_t x704 = -1;
int8_t x705 = -10;
static int16_t x708 = 1;
volatile int32_t t172 = -401;
uint16_t x715 = UINT16_MAX;
volatile uint32_t x720 = UINT32_MAX;
int64_t t175 = 1967988992243LL;
volatile int64_t x725 = INT64_MAX;
static int32_t t178 = -2;
static int32_t t179 = -54985;
static volatile uint8_t x743 = 101U;
volatile int32_t x745 = -375206715;
uint32_t x747 = 112167767U;
volatile uint64_t t182 = 4600284208LLU;
uint16_t x754 = 1U;
static int8_t x765 = INT8_MAX;
volatile int8_t x766 = -1;
int8_t x776 = INT8_MIN;
int32_t x783 = 11;
int16_t x788 = INT16_MAX;
static int16_t x790 = INT16_MIN;
uint8_t x791 = 23U;
volatile uint64_t x792 = 18001LLU;
uint32_t x794 = 30583U;
int64_t t192 = 8340083309LL;
uint64_t x801 = 63639603303LLU;
volatile int32_t x803 = -1;
int64_t t194 = -7925098079268LL;
uint32_t x810 = 1U;
volatile uint32_t x812 = 36889U;
int16_t x823 = -2522;
int64_t x825 = INT64_MAX;
int8_t x827 = 11;


void f0(void) {
    	volatile int64_t x1 = 259127045090LL;
	volatile uint64_t x2 = 7573558695893259023LLU;
	static int8_t x3 = INT8_MAX;
	static volatile int32_t t0 = 101715285;

    t0 = (((x1<=x2)%x3)&x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x6 = -1;
	static uint64_t x7 = 462999115LLU;
	static int16_t x8 = 2;
	volatile uint64_t t1 = 1152457090978327LLU;

    t1 = (((x5<=x6)%x7)&x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint8_t x10 = 109U;
	int32_t x11 = -1;
	volatile uint64_t t2 = 2056363LLU;

    t2 = (((x9<=x10)%x11)&x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 36U;
	volatile int8_t x14 = 34;
	uint32_t x15 = 432810839U;
	int8_t x16 = INT8_MIN;
	uint32_t t3 = 1050416328U;

    t3 = (((x13<=x14)%x15)&x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MIN;
	int8_t x18 = -1;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 135721U;
	volatile uint32_t t4 = 50540802U;

    t4 = (((x17<=x18)%x19)&x20);

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int64_t x22 = -49850768LL;
	int64_t x23 = -1LL;
	uint8_t x24 = 1U;
	static volatile int64_t t5 = 12365470328LL;

    t5 = (((x21<=x22)%x23)&x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MIN;
	int8_t x28 = -2;
	volatile int32_t t6 = -74596;

    t6 = (((x25<=x26)%x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = UINT32_MAX;
	static int64_t x31 = -1LL;
	int64_t x32 = INT64_MAX;
	volatile int64_t t7 = -50731LL;

    t7 = (((x29<=x30)%x31)&x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = INT64_MAX;
	uint32_t x35 = 28737414U;
	static uint16_t x36 = 3U;
	uint32_t t8 = 23U;

    t8 = (((x33<=x34)%x35)&x36);

    if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -76;
	uint16_t x38 = 12071U;
	static int64_t x39 = INT64_MIN;
	int64_t t9 = 2678LL;

    t9 = (((x37<=x38)%x39)&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -11573;
	uint8_t x42 = 4U;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;

    t10 = (((x41<=x42)%x43)&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 16;
	volatile int16_t x46 = -4;
	uint8_t x48 = 3U;
	volatile int32_t t11 = -4683;

    t11 = (((x45<=x46)%x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	int32_t x50 = -107723;
	int8_t x51 = 29;

    t12 = (((x49<=x50)%x51)&x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 17U;
	int16_t x54 = -1;
	int32_t x55 = -501487493;
	static int16_t x56 = -316;
	volatile int32_t t13 = -54;

    t13 = (((x53<=x54)%x55)&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 223548995U;
	uint32_t x58 = UINT32_MAX;
	uint8_t x59 = UINT8_MAX;
	uint16_t x60 = 193U;

    t14 = (((x57<=x58)%x59)&x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 2272645591051191LLU;
	int64_t x62 = INT64_MIN;
	int32_t x64 = -7;
	volatile int32_t t15 = -424603;

    t15 = (((x61<=x62)%x63)&x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x65 = UINT32_MAX;
	int32_t x67 = -1;
	static volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = -973340;

    t16 = (((x65<=x66)%x67)&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	static int32_t t17 = -74340124;

    t17 = (((x69<=x70)%x71)&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int16_t x76 = INT16_MAX;
	int32_t t18 = -2352;

    t18 = (((x73<=x74)%x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x77 = INT64_MIN;
	uint32_t x79 = UINT32_MAX;
	volatile uint32_t t19 = 42554U;

    t19 = (((x77<=x78)%x79)&x80);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	uint64_t x83 = 3736071899843LLU;
	uint64_t t20 = 717652317367800010LLU;

    t20 = (((x81<=x82)%x83)&x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	volatile int32_t x86 = -653244253;
	int8_t x88 = -1;

    t21 = (((x85<=x86)%x87)&x88);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x90 = UINT16_MAX;
	static int8_t x91 = INT8_MIN;
	uint8_t x92 = 7U;
	static volatile int32_t t22 = -1529;

    t22 = (((x89<=x90)%x91)&x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 3888U;
	static int32_t x95 = 27;
	volatile int32_t t23 = 52342;

    t23 = (((x93<=x94)%x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	static int16_t x98 = INT16_MIN;
	static int64_t x99 = -1LL;
	uint32_t x100 = 0U;

    t24 = (((x97<=x98)%x99)&x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x101 = 31U;
	uint16_t x102 = 14835U;
	int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MIN;
	static volatile int64_t t25 = -4232310900LL;

    t25 = (((x101<=x102)%x103)&x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 3;
	int8_t x106 = -1;
	int32_t x108 = INT32_MIN;

    t26 = (((x105<=x106)%x107)&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 0U;
	volatile int32_t x110 = INT32_MAX;
	int16_t x111 = 1;
	volatile int32_t t27 = 24263;

    t27 = (((x109<=x110)%x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	uint32_t x114 = 54U;
	int16_t x115 = -1;
	uint32_t x116 = 1814891U;
	uint32_t t28 = 15102705U;

    t28 = (((x113<=x114)%x115)&x116);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x117 = UINT64_MAX;
	uint64_t x118 = 96724692267179073LLU;
	volatile int32_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	static volatile uint32_t t29 = 213U;

    t29 = (((x117<=x118)%x119)&x120);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 95U;
	int64_t x122 = -1LL;
	static int64_t x123 = -1LL;
	int8_t x124 = INT8_MAX;

    t30 = (((x121<=x122)%x123)&x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x126 = INT16_MIN;
	uint32_t x127 = 1U;
	volatile int64_t x128 = INT64_MAX;
	int64_t t31 = 810LL;

    t31 = (((x125<=x126)%x127)&x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	int64_t t32 = 838601413387389330LL;

    t32 = (((x129<=x130)%x131)&x132);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = -1;
	static int8_t x135 = INT8_MIN;
	static int64_t t33 = -2663LL;

    t33 = (((x133<=x134)%x135)&x136);

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x137 = INT32_MAX;
	volatile int8_t x138 = 0;
	static int16_t x139 = -1;
	uint64_t x140 = UINT64_MAX;
	uint64_t t34 = 1174522805302LLU;

    t34 = (((x137<=x138)%x139)&x140);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	static int8_t x143 = -3;
	volatile int32_t t35 = -239;

    t35 = (((x141<=x142)%x143)&x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	volatile int32_t x146 = INT32_MIN;
	volatile int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MIN;
	int64_t t36 = 893386279206LL;

    t36 = (((x145<=x146)%x147)&x148);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	int64_t x150 = INT64_MIN;
	int64_t x152 = INT64_MIN;

    t37 = (((x149<=x150)%x151)&x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -2;
	static int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	int32_t t38 = 96135163;

    t38 = (((x153<=x154)%x155)&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x157 = 0U;
	int64_t x158 = 35840117LL;
	uint64_t x160 = 3LLU;

    t39 = (((x157<=x158)%x159)&x160);

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 233484643;
	uint32_t x162 = 14U;
	int16_t x163 = INT16_MAX;
	volatile int32_t t40 = -59;

    t40 = (((x161<=x162)%x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MAX;
	int8_t x167 = INT8_MIN;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 80747356;

    t41 = (((x165<=x166)%x167)&x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x169 = 0U;
	int64_t x172 = 1LL;
	int64_t t42 = 3226LL;

    t42 = (((x169<=x170)%x171)&x172);

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	int32_t x174 = 1;
	volatile int64_t x175 = INT64_MIN;
	uint8_t x176 = 1U;
	int64_t t43 = -417LL;

    t43 = (((x173<=x174)%x175)&x176);

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	static int64_t x178 = 484771LL;
	int64_t x179 = -36570613LL;
	int8_t x180 = -25;
	volatile int64_t t44 = -43728214128LL;

    t44 = (((x177<=x178)%x179)&x180);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	static int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	volatile int32_t x184 = -1;
	static int32_t t45 = 0;

    t45 = (((x181<=x182)%x183)&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 0U;
	volatile int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MAX;
	uint8_t x188 = 6U;

    t46 = (((x185<=x186)%x187)&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MIN;
	volatile int64_t x190 = INT64_MAX;
	int16_t x191 = INT16_MAX;
	uint64_t t47 = 1472094337LLU;

    t47 = (((x189<=x190)%x191)&x192);

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x197 = INT64_MIN;
	uint64_t x198 = 541087520091212963LLU;
	int16_t x199 = INT16_MIN;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t48 = 7361063;

    t48 = (((x197<=x198)%x199)&x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x201 = 482LLU;
	uint8_t x202 = 3U;
	static uint64_t x203 = UINT64_MAX;
	int16_t x204 = -205;

    t49 = (((x201<=x202)%x203)&x204);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x205 = 25;
	uint8_t x206 = 2U;
	uint8_t x207 = 56U;
	volatile int16_t x208 = INT16_MIN;

    t50 = (((x205<=x206)%x207)&x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = INT16_MIN;
	uint64_t x210 = 3115562417917649310LLU;
	uint32_t x211 = UINT32_MAX;
	int64_t x212 = -1LL;
	int64_t t51 = -422984117820760958LL;

    t51 = (((x209<=x210)%x211)&x212);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x213 = -1;
	int64_t x214 = -1LL;
	static int8_t x215 = -1;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t52 = 1704492;

    t52 = (((x213<=x214)%x215)&x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = -1;
	uint16_t x218 = 76U;
	int8_t x220 = INT8_MIN;
	volatile int64_t t53 = 57065889LL;

    t53 = (((x217<=x218)%x219)&x220);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = INT64_MIN;
	static int16_t x222 = -1;
	static int32_t x223 = INT32_MAX;
	int8_t x224 = 9;

    t54 = (((x221<=x222)%x223)&x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x225 = 406LLU;
	uint16_t x226 = 31710U;
	uint8_t x227 = 12U;
	int64_t t55 = -749LL;

    t55 = (((x225<=x226)%x227)&x228);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x229 = 275763002U;
	int32_t x231 = -1764;
	int8_t x232 = -1;

    t56 = (((x229<=x230)%x231)&x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x233 = 3589U;
	static volatile uint8_t x234 = 0U;
	static int32_t x235 = INT32_MIN;
	uint8_t x236 = 22U;
	int32_t t57 = -28067;

    t57 = (((x233<=x234)%x235)&x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x237 = -1;
	static int8_t x238 = INT8_MAX;
	static uint32_t x239 = UINT32_MAX;
	uint32_t x240 = 1272896825U;
	volatile uint32_t t58 = 330U;

    t58 = (((x237<=x238)%x239)&x240);

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = -1;
	static int8_t x242 = 1;
	static int32_t x244 = -1;

    t59 = (((x241<=x242)%x243)&x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = -1;
	uint16_t x246 = UINT16_MAX;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MAX;

    t60 = (((x245<=x246)%x247)&x248);

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x249 = INT16_MIN;
	int32_t x250 = 1817;
	int32_t x251 = -49;
	static int16_t x252 = -20;
	int32_t t61 = -28936784;

    t61 = (((x249<=x250)%x251)&x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x254 = -1;
	volatile int64_t x255 = -1LL;
	volatile int64_t t62 = -17787LL;

    t62 = (((x253<=x254)%x255)&x256);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x259 = 109U;
	int16_t x260 = INT16_MIN;
	uint32_t t63 = 1180897880U;

    t63 = (((x257<=x258)%x259)&x260);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x261 = -3849544;
	int16_t x262 = -1;
	int64_t x263 = 15331988490969224LL;
	uint8_t x264 = UINT8_MAX;

    t64 = (((x261<=x262)%x263)&x264);

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x266 = INT8_MIN;
	int64_t x268 = -1LL;
	volatile int64_t t65 = -1554312330630LL;

    t65 = (((x265<=x266)%x267)&x268);

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x269 = UINT8_MAX;
	int32_t x270 = -1;
	static int16_t x271 = 14867;
	int64_t x272 = INT64_MIN;
	int64_t t66 = -91LL;

    t66 = (((x269<=x270)%x271)&x272);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MIN;
	int16_t x278 = 0;
	uint8_t x279 = UINT8_MAX;
	static uint64_t x280 = 196359LLU;

    t67 = (((x277<=x278)%x279)&x280);

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x282 = 0U;
	int8_t x283 = INT8_MIN;
	static uint32_t x284 = UINT32_MAX;
	uint32_t t68 = 1044U;

    t68 = (((x281<=x282)%x283)&x284);

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x289 = -1;
	uint8_t x290 = 41U;

    t69 = (((x289<=x290)%x291)&x292);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x293 = 2939472590LLU;
	volatile uint32_t x295 = UINT32_MAX;
	int64_t x296 = -1LL;

    t70 = (((x293<=x294)%x295)&x296);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x297 = INT32_MIN;
	int16_t x298 = 758;
	int16_t x300 = -5463;
	int32_t t71 = 3;

    t71 = (((x297<=x298)%x299)&x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x301 = INT64_MIN;
	static volatile uint32_t x302 = 540888597U;
	int64_t x303 = -1LL;
	static uint16_t x304 = 445U;
	int64_t t72 = -92120811861LL;

    t72 = (((x301<=x302)%x303)&x304);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x306 = INT16_MIN;
	int32_t x307 = -391356;
	int32_t t73 = -244659;

    t73 = (((x305<=x306)%x307)&x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x309 = INT16_MIN;
	uint64_t x310 = UINT64_MAX;
	static int8_t x311 = -1;
	int8_t x312 = -23;
	int32_t t74 = 142126;

    t74 = (((x309<=x310)%x311)&x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x314 = -19423;
	volatile int32_t x315 = INT32_MIN;
	uint8_t x316 = 56U;
	volatile int32_t t75 = 0;

    t75 = (((x313<=x314)%x315)&x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x317 = 5859091U;
	int8_t x318 = -14;
	static uint8_t x319 = 7U;
	volatile int32_t t76 = 83002;

    t76 = (((x317<=x318)%x319)&x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = 1020542;
	volatile uint32_t x322 = UINT32_MAX;
	int64_t x323 = -1LL;
	static volatile uint16_t x324 = 2776U;
	int64_t t77 = 455490094866LL;

    t77 = (((x321<=x322)%x323)&x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	volatile int8_t x328 = -1;
	int64_t t78 = 127413696693223767LL;

    t78 = (((x325<=x326)%x327)&x328);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x329 = INT16_MIN;
	volatile int64_t x330 = -2165LL;
	static int32_t x331 = 52014;
	int8_t x332 = INT8_MAX;

    t79 = (((x329<=x330)%x331)&x332);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x333 = 1933U;
	int8_t x334 = INT8_MAX;
	int64_t x335 = -1LL;
	uint32_t x336 = 303923U;
	int64_t t80 = 303LL;

    t80 = (((x333<=x334)%x335)&x336);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = INT64_MIN;
	uint16_t x338 = UINT16_MAX;
	static int16_t x339 = 250;
	uint64_t x340 = 130644155454171LLU;

    t81 = (((x337<=x338)%x339)&x340);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = UINT64_MAX;
	uint16_t x347 = 2655U;

    t82 = (((x345<=x346)%x347)&x348);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x349 = INT32_MIN;
	volatile int16_t x350 = INT16_MAX;
	int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	static volatile int64_t t83 = -1602LL;

    t83 = (((x349<=x350)%x351)&x352);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x353 = 21804U;
	int8_t x356 = -1;
	static int32_t t84 = 0;

    t84 = (((x353<=x354)%x355)&x356);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x359 = INT64_MIN;
	volatile int8_t x360 = -1;
	int64_t t85 = -3319735009049717202LL;

    t85 = (((x357<=x358)%x359)&x360);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x361 = INT32_MIN;
	int16_t x363 = INT16_MIN;
	int16_t x364 = 12359;

    t86 = (((x361<=x362)%x363)&x364);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x365 = 2U;
	int64_t x366 = -1LL;
	static int16_t x367 = INT16_MAX;
	volatile int16_t x368 = 117;
	volatile int32_t t87 = -5878892;

    t87 = (((x365<=x366)%x367)&x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x370 = -1;
	static volatile int8_t x371 = INT8_MIN;
	int64_t x372 = INT64_MIN;
	volatile int64_t t88 = 1689574531216LL;

    t88 = (((x369<=x370)%x371)&x372);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x373 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	volatile int64_t t89 = -4643254995492525LL;

    t89 = (((x373<=x374)%x375)&x376);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x377 = UINT32_MAX;
	static uint16_t x378 = 323U;
	uint16_t x379 = 376U;
	int8_t x380 = INT8_MAX;
	volatile int32_t t90 = 1;

    t90 = (((x377<=x378)%x379)&x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x381 = -1;
	int16_t x382 = -10;
	int8_t x383 = INT8_MAX;
	volatile int32_t t91 = 141823030;

    t91 = (((x381<=x382)%x383)&x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MIN;
	uint64_t x387 = 240532754381LLU;
	volatile int32_t x388 = -1250;
	static uint64_t t92 = 900660LLU;

    t92 = (((x385<=x386)%x387)&x388);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x389 = INT16_MAX;
	int64_t x390 = -3020LL;
	int32_t x391 = INT32_MAX;
	uint64_t x392 = 24436624387829LLU;
	uint64_t t93 = 887207088079239137LLU;

    t93 = (((x389<=x390)%x391)&x392);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x393 = 4U;
	static int16_t x394 = INT16_MAX;
	int8_t x395 = 18;
	int8_t x396 = -1;
	volatile int32_t t94 = -536873975;

    t94 = (((x393<=x394)%x395)&x396);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x397 = 513292U;
	static uint32_t x398 = 4447U;
	uint64_t x399 = 12442984836543671LLU;

    t95 = (((x397<=x398)%x399)&x400);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x401 = INT8_MAX;
	static volatile int32_t x402 = -1;
	static uint32_t x404 = 41U;

    t96 = (((x401<=x402)%x403)&x404);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x407 = -1;
	static uint64_t x408 = 57LLU;

    t97 = (((x405<=x406)%x407)&x408);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x411 = INT16_MAX;
	int64_t x412 = INT64_MAX;
	volatile int64_t t98 = 1LL;

    t98 = (((x409<=x410)%x411)&x412);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x414 = -1;
	int16_t x415 = 467;
	volatile int64_t t99 = 5052045831LL;

    t99 = (((x413<=x414)%x415)&x416);

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x419 = 4U;
	int32_t x420 = -115792620;
	volatile int32_t t100 = -671114436;

    t100 = (((x417<=x418)%x419)&x420);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x421 = INT32_MAX;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t101 = 24399;

    t101 = (((x421<=x422)%x423)&x424);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x425 = 54U;
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	volatile uint8_t x428 = 6U;
	static volatile int32_t t102 = 178;

    t102 = (((x425<=x426)%x427)&x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x430 = 978055980646LLU;
	static uint8_t x431 = 24U;
	static uint8_t x432 = UINT8_MAX;
	int32_t t103 = -100149;

    t103 = (((x429<=x430)%x431)&x432);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x434 = INT8_MIN;
	volatile int64_t x435 = INT64_MIN;
	static uint16_t x436 = UINT16_MAX;

    t104 = (((x433<=x434)%x435)&x436);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x437 = -19705253837616LL;
	uint16_t x438 = 26249U;
	int8_t x439 = INT8_MAX;
	uint32_t x440 = 702823403U;
	static uint32_t t105 = 924539806U;

    t105 = (((x437<=x438)%x439)&x440);

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x441 = UINT16_MAX;
	int8_t x442 = -1;
	int64_t x444 = INT64_MAX;
	static volatile int64_t t106 = -2LL;

    t106 = (((x441<=x442)%x443)&x444);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x446 = -11;
	int32_t x447 = INT32_MAX;
	int32_t x448 = 3300;
	static int32_t t107 = -3766;

    t107 = (((x445<=x446)%x447)&x448);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x450 = 58;
	uint64_t x451 = 885LLU;
	int16_t x452 = INT16_MIN;

    t108 = (((x449<=x450)%x451)&x452);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x455 = -8;
	static volatile int8_t x456 = INT8_MAX;
	int32_t t109 = -2622960;

    t109 = (((x453<=x454)%x455)&x456);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x457 = UINT8_MAX;
	volatile uint16_t x458 = UINT16_MAX;
	volatile uint16_t x459 = 12U;

    t110 = (((x457<=x458)%x459)&x460);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x461 = -108028915308LL;
	int32_t x462 = INT32_MIN;
	static uint8_t x463 = UINT8_MAX;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t111 = 716921LLU;

    t111 = (((x461<=x462)%x463)&x464);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x465 = -1;
	static uint16_t x466 = UINT16_MAX;
	volatile int64_t x467 = INT64_MAX;
	int16_t x468 = INT16_MAX;

    t112 = (((x465<=x466)%x467)&x468);

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = INT64_MIN;
	int64_t x470 = 465853444LL;
	int8_t x471 = INT8_MIN;
	int64_t x472 = INT64_MIN;
	int64_t t113 = -83519346LL;

    t113 = (((x469<=x470)%x471)&x472);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x473 = INT32_MIN;
	int8_t x476 = INT8_MIN;
	int64_t t114 = 2203450971260591118LL;

    t114 = (((x473<=x474)%x475)&x476);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = INT64_MIN;
	volatile uint64_t x478 = UINT64_MAX;
	int64_t x479 = 47929583191217109LL;
	int8_t x480 = INT8_MIN;
	int64_t t115 = 1188188622742LL;

    t115 = (((x477<=x478)%x479)&x480);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x482 = 328;
	int32_t x483 = INT32_MAX;
	int32_t x484 = -1;

    t116 = (((x481<=x482)%x483)&x484);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = -1;
	int8_t x486 = 44;
	static uint32_t x488 = UINT32_MAX;
	int64_t t117 = 374471501580LL;

    t117 = (((x485<=x486)%x487)&x488);

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x489 = 5U;
	static int16_t x490 = INT16_MIN;
	int8_t x492 = -1;
	volatile int32_t t118 = 2788;

    t118 = (((x489<=x490)%x491)&x492);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x493 = UINT32_MAX;
	int32_t x496 = INT32_MIN;
	uint32_t t119 = 166864U;

    t119 = (((x493<=x494)%x495)&x496);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x497 = 538208672U;
	int32_t x498 = 809;
	volatile int8_t x500 = INT8_MIN;
	static volatile int32_t t120 = 457438;

    t120 = (((x497<=x498)%x499)&x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x501 = -12333607;
	volatile int64_t x502 = -34314205195LL;
	volatile int16_t x503 = 6429;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t121 = -257303666;

    t121 = (((x501<=x502)%x503)&x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x506 = -1;
	uint8_t x507 = UINT8_MAX;
	static int8_t x508 = -1;
	volatile int32_t t122 = -1;

    t122 = (((x505<=x506)%x507)&x508);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x509 = INT16_MAX;
	uint64_t x511 = 36723636414782LLU;
	static int8_t x512 = -52;

    t123 = (((x509<=x510)%x511)&x512);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x513 = 0U;
	uint16_t x514 = 51U;
	uint8_t x516 = 1U;
	volatile uint32_t t124 = 95097U;

    t124 = (((x513<=x514)%x515)&x516);

    if (t124 != 1U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = INT32_MIN;
	uint32_t x518 = UINT32_MAX;
	volatile int64_t x519 = 463529LL;
	static volatile int8_t x520 = INT8_MAX;
	static volatile int64_t t125 = -23912560292LL;

    t125 = (((x517<=x518)%x519)&x520);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x523 = 2001U;
	int16_t x524 = INT16_MIN;
	static int32_t t126 = -1502;

    t126 = (((x521<=x522)%x523)&x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = -776;
	static volatile int8_t x526 = -1;
	volatile uint32_t x527 = 5308U;
	int32_t x528 = -1;
	uint32_t t127 = 3U;

    t127 = (((x525<=x526)%x527)&x528);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x529 = 7;
	int16_t x531 = -2998;
	int8_t x532 = INT8_MAX;
	int32_t t128 = 3;

    t128 = (((x529<=x530)%x531)&x532);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x533 = 39805191522LLU;
	volatile int16_t x534 = INT16_MIN;
	uint16_t x535 = 1439U;
	static volatile uint64_t x536 = 4LLU;

    t129 = (((x533<=x534)%x535)&x536);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x537 = -16802293392LL;
	int32_t x538 = INT32_MIN;
	uint16_t x540 = 104U;
	int32_t t130 = -2742;

    t130 = (((x537<=x538)%x539)&x540);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x541 = 5U;
	int16_t x544 = INT16_MAX;

    t131 = (((x541<=x542)%x543)&x544);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x545 = -1;
	static volatile int64_t x546 = INT64_MIN;
	int16_t x548 = 33;
	int32_t t132 = 27;

    t132 = (((x545<=x546)%x547)&x548);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x549 = INT64_MAX;
	int8_t x550 = -1;
	int16_t x551 = INT16_MIN;
	uint64_t x552 = 167396468745849LLU;
	volatile uint64_t t133 = 5717008LLU;

    t133 = (((x549<=x550)%x551)&x552);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x553 = 639211405U;
	int64_t x554 = INT64_MAX;
	int16_t x555 = INT16_MIN;
	static int64_t x556 = -1LL;

    t134 = (((x553<=x554)%x555)&x556);

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x558 = INT32_MIN;
	uint8_t x559 = 104U;
	volatile int64_t t135 = -243662548196505063LL;

    t135 = (((x557<=x558)%x559)&x560);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x561 = -1;
	int8_t x562 = INT8_MAX;
	volatile int32_t x563 = INT32_MAX;
	uint64_t x564 = 154860248889LLU;

    t136 = (((x561<=x562)%x563)&x564);

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x565 = -62;
	volatile int64_t x566 = INT64_MIN;
	int16_t x567 = -1;
	int16_t x568 = INT16_MAX;
	volatile int32_t t137 = 8;

    t137 = (((x565<=x566)%x567)&x568);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x569 = UINT32_MAX;
	static uint16_t x570 = 124U;
	int32_t x571 = INT32_MIN;
	int64_t t138 = 19088407195875LL;

    t138 = (((x569<=x570)%x571)&x572);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x573 = INT8_MIN;
	uint32_t x574 = 6179U;
	int32_t x575 = -312756472;
	int32_t x576 = -1;
	volatile int32_t t139 = -1136;

    t139 = (((x573<=x574)%x575)&x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x577 = -1;
	int32_t x578 = INT32_MIN;
	int8_t x579 = INT8_MIN;
	int8_t x580 = INT8_MAX;
	volatile int32_t t140 = -102895;

    t140 = (((x577<=x578)%x579)&x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = -27156;
	uint8_t x583 = 27U;
	int64_t x584 = INT64_MIN;
	static volatile int64_t t141 = -772561LL;

    t141 = (((x581<=x582)%x583)&x584);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x585 = -1;
	int8_t x586 = INT8_MAX;
	static int8_t x587 = INT8_MAX;
	volatile int32_t x588 = INT32_MIN;

    t142 = (((x585<=x586)%x587)&x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x589 = UINT64_MAX;
	int32_t x590 = INT32_MIN;
	static int8_t x591 = INT8_MAX;
	volatile uint16_t x592 = 0U;

    t143 = (((x589<=x590)%x591)&x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x593 = -1;
	volatile int64_t x594 = INT64_MAX;
	int32_t t144 = 0;

    t144 = (((x593<=x594)%x595)&x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x600 = INT16_MIN;
	int32_t t145 = 955;

    t145 = (((x597<=x598)%x599)&x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x601 = UINT64_MAX;
	uint16_t x602 = UINT16_MAX;
	int64_t x603 = 337771125LL;
	volatile int8_t x604 = 11;
	int64_t t146 = 4294LL;

    t146 = (((x601<=x602)%x603)&x604);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x605 = UINT32_MAX;
	uint64_t x607 = 1620668795519382178LLU;
	int16_t x608 = -7;

    t147 = (((x605<=x606)%x607)&x608);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x609 = 259758253397620113LLU;
	int8_t x610 = INT8_MIN;
	static int32_t x611 = INT32_MAX;
	int32_t x612 = INT32_MAX;
	volatile int32_t t148 = 521826;

    t148 = (((x609<=x610)%x611)&x612);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x613 = -1LL;
	int16_t x614 = INT16_MIN;
	uint16_t x615 = 1647U;
	int8_t x616 = -1;
	volatile int32_t t149 = 125;

    t149 = (((x613<=x614)%x615)&x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x618 = -1;
	int64_t x619 = INT64_MIN;
	static int32_t x620 = -1;

    t150 = (((x617<=x618)%x619)&x620);

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x621 = 0;
	int16_t x622 = 5;
	uint16_t x623 = UINT16_MAX;
	int64_t x624 = INT64_MAX;
	volatile int64_t t151 = -480207157703258332LL;

    t151 = (((x621<=x622)%x623)&x624);

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x625 = INT16_MIN;
	static int8_t x626 = INT8_MIN;
	int64_t x628 = -6LL;
	static int64_t t152 = -2691223LL;

    t152 = (((x625<=x626)%x627)&x628);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = INT16_MIN;
	uint64_t x630 = UINT64_MAX;
	int16_t x631 = 8;
	volatile uint64_t x632 = 3LLU;
	volatile uint64_t t153 = 164LLU;

    t153 = (((x629<=x630)%x631)&x632);

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x633 = 6LLU;
	int8_t x634 = -1;
	int8_t x635 = INT8_MAX;
	volatile int32_t t154 = -1;

    t154 = (((x633<=x634)%x635)&x636);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x637 = INT8_MIN;

    t155 = (((x637<=x638)%x639)&x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x641 = UINT8_MAX;
	volatile int64_t x642 = INT64_MIN;
	static volatile int64_t x643 = INT64_MAX;
	static int64_t t156 = 90369844307396LL;

    t156 = (((x641<=x642)%x643)&x644);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x645 = 1;
	volatile uint64_t t157 = 38556LLU;

    t157 = (((x645<=x646)%x647)&x648);

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x650 = INT64_MAX;
	int16_t x652 = INT16_MIN;
	volatile uint64_t t158 = 7394875416577238272LLU;

    t158 = (((x649<=x650)%x651)&x652);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x654 = -30026574;
	uint16_t x655 = 453U;
	static uint64_t x656 = 636938340013LLU;
	volatile uint64_t t159 = 557421LLU;

    t159 = (((x653<=x654)%x655)&x656);

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x658 = 48U;
	uint16_t x660 = 1337U;
	int32_t t160 = -1716;

    t160 = (((x657<=x658)%x659)&x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x664 = INT32_MIN;

    t161 = (((x661<=x662)%x663)&x664);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x665 = INT16_MAX;
	int64_t x666 = 68772LL;
	int8_t x667 = 47;
	uint32_t t162 = 984496555U;

    t162 = (((x665<=x666)%x667)&x668);

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t t163 = -5880259LL;

    t163 = (((x669<=x670)%x671)&x672);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x673 = -1;
	int8_t x674 = INT8_MAX;
	static int32_t x675 = -1;
	int16_t x676 = INT16_MIN;
	volatile int32_t t164 = 1;

    t164 = (((x673<=x674)%x675)&x676);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x677 = 29952LL;
	int8_t x678 = 9;
	int32_t x679 = -1;
	static int32_t x680 = INT32_MAX;

    t165 = (((x677<=x678)%x679)&x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x681 = 29403U;
	int32_t x682 = -1;
	int32_t x683 = INT32_MAX;
	int32_t x684 = INT32_MIN;
	int32_t t166 = -26;

    t166 = (((x681<=x682)%x683)&x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x686 = UINT32_MAX;
	uint8_t x688 = 2U;
	static volatile int64_t t167 = 163LL;

    t167 = (((x685<=x686)%x687)&x688);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x689 = 259287U;
	int16_t x690 = INT16_MIN;
	volatile int32_t x691 = 2;
	int32_t t168 = 175469148;

    t168 = (((x689<=x690)%x691)&x692);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x693 = -1LL;
	int8_t x695 = INT8_MIN;
	volatile int32_t x696 = INT32_MIN;
	int32_t t169 = 31574;

    t169 = (((x693<=x694)%x695)&x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x697 = INT32_MIN;
	static uint8_t x698 = 3U;
	int16_t x699 = 2;
	static uint32_t x700 = 128064U;
	static uint32_t t170 = 4636U;

    t170 = (((x697<=x698)%x699)&x700);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x701 = -1;
	int16_t x702 = INT16_MAX;
	int64_t x703 = INT64_MAX;
	volatile int64_t t171 = -14645LL;

    t171 = (((x701<=x702)%x703)&x704);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x706 = 54;
	int32_t x707 = INT32_MAX;

    t172 = (((x705<=x706)%x707)&x708);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x713 = INT32_MIN;
	int16_t x714 = -1;
	int32_t x716 = INT32_MIN;
	volatile int32_t t173 = 516042;

    t173 = (((x713<=x714)%x715)&x716);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x717 = INT32_MIN;
	int8_t x718 = -1;
	volatile uint8_t x719 = UINT8_MAX;
	uint32_t t174 = 178199U;

    t174 = (((x717<=x718)%x719)&x720);

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = -6;
	static int64_t x722 = -933LL;
	int64_t x723 = -1LL;
	int16_t x724 = -1;

    t175 = (((x721<=x722)%x723)&x724);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x726 = UINT16_MAX;
	int16_t x727 = 7680;
	uint16_t x728 = UINT16_MAX;
	static int32_t t176 = -90986325;

    t176 = (((x725<=x726)%x727)&x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x729 = INT64_MIN;
	static uint16_t x730 = UINT16_MAX;
	int8_t x731 = -1;
	int8_t x732 = INT8_MIN;
	volatile int32_t t177 = 11292;

    t177 = (((x729<=x730)%x731)&x732);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x733 = INT32_MIN;
	static volatile uint64_t x734 = 3931527810LLU;
	int32_t x735 = INT32_MIN;
	uint16_t x736 = 89U;

    t178 = (((x733<=x734)%x735)&x736);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x737 = -1;
	static int64_t x738 = INT64_MIN;
	int16_t x739 = INT16_MIN;
	int32_t x740 = -1003617;

    t179 = (((x737<=x738)%x739)&x740);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = INT64_MAX;
	int32_t x742 = INT32_MIN;
	int16_t x744 = -36;
	int32_t t180 = 2930;

    t180 = (((x741<=x742)%x743)&x744);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x746 = INT64_MAX;
	volatile uint64_t x748 = UINT64_MAX;
	uint64_t t181 = 27877530LLU;

    t181 = (((x745<=x746)%x747)&x748);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x750 = 1351;
	static int8_t x751 = 1;
	volatile uint64_t x752 = UINT64_MAX;

    t182 = (((x749<=x750)%x751)&x752);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x753 = UINT64_MAX;
	volatile int8_t x755 = 37;
	static uint32_t x756 = UINT32_MAX;
	uint32_t t183 = 27369U;

    t183 = (((x753<=x754)%x755)&x756);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x761 = UINT8_MAX;
	int16_t x762 = INT16_MAX;
	int64_t x763 = -1LL;
	static int8_t x764 = -1;
	int64_t t184 = 364208353LL;

    t184 = (((x761<=x762)%x763)&x764);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x767 = -1LL;
	int32_t x768 = INT32_MAX;
	volatile int64_t t185 = -934058695654LL;

    t185 = (((x765<=x766)%x767)&x768);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x769 = -1LL;
	uint16_t x770 = UINT16_MAX;
	uint64_t x771 = 87231684324399LLU;
	int32_t x772 = INT32_MAX;
	static uint64_t t186 = 41790643LLU;

    t186 = (((x769<=x770)%x771)&x772);

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x773 = INT32_MAX;
	volatile int16_t x774 = -1;
	int64_t x775 = -1LL;
	int64_t t187 = -130677675LL;

    t187 = (((x773<=x774)%x775)&x776);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x781 = -1LL;
	int64_t x782 = 505524LL;
	static int8_t x784 = INT8_MIN;
	static int32_t t188 = -39694353;

    t188 = (((x781<=x782)%x783)&x784);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x785 = INT32_MAX;
	int32_t x786 = INT32_MIN;
	volatile int32_t x787 = INT32_MIN;
	volatile int32_t t189 = 5979527;

    t189 = (((x785<=x786)%x787)&x788);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x789 = 165882871790172LLU;
	volatile uint64_t t190 = 11072075LLU;

    t190 = (((x789<=x790)%x791)&x792);

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x793 = UINT8_MAX;
	int16_t x795 = INT16_MIN;
	volatile int8_t x796 = -1;
	volatile int32_t t191 = 300;

    t191 = (((x793<=x794)%x795)&x796);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x797 = 3759019888411709LLU;
	int64_t x798 = INT64_MAX;
	static int64_t x799 = -1LL;
	uint8_t x800 = 94U;

    t192 = (((x797<=x798)%x799)&x800);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x802 = INT64_MIN;
	int16_t x804 = -1;
	volatile int32_t t193 = -14883843;

    t193 = (((x801<=x802)%x803)&x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = 547;
	volatile uint8_t x806 = 16U;
	int64_t x807 = -1LL;
	static volatile int8_t x808 = INT8_MIN;

    t194 = (((x805<=x806)%x807)&x808);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x809 = UINT64_MAX;
	int32_t x811 = -225;
	volatile uint32_t t195 = 879633382U;

    t195 = (((x809<=x810)%x811)&x812);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x813 = 568420995631LLU;
	int16_t x814 = INT16_MAX;
	uint16_t x815 = UINT16_MAX;
	int64_t x816 = INT64_MIN;
	volatile int64_t t196 = 3003948144501LL;

    t196 = (((x813<=x814)%x815)&x816);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x817 = INT8_MIN;
	static uint64_t x818 = 25326931454964LLU;
	volatile int64_t x819 = INT64_MIN;
	static volatile uint8_t x820 = 26U;
	volatile int64_t t197 = -21715401492401125LL;

    t197 = (((x817<=x818)%x819)&x820);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x821 = 109265714LL;
	int16_t x822 = INT16_MIN;
	volatile int64_t x824 = INT64_MAX;
	volatile int64_t t198 = 565598601326495001LL;

    t198 = (((x821<=x822)%x823)&x824);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x826 = INT8_MAX;
	static uint64_t x828 = UINT64_MAX;
	uint64_t t199 = 2495269730LLU;

    t199 = (((x825<=x826)%x827)&x828);

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

