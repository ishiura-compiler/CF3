
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

static volatile int16_t x3 = INT16_MIN;
uint8_t x5 = 29U;
int16_t x7 = INT16_MIN;
int32_t x11 = INT32_MIN;
int64_t x15 = -6161781458314LL;
uint16_t x21 = 4U;
static uint32_t x26 = 4015U;
static int16_t x27 = -1;
int32_t t6 = -12354660;
static uint8_t x32 = UINT8_MAX;
uint64_t x35 = 667LLU;
int8_t x48 = INT8_MAX;
int16_t x63 = INT16_MAX;
volatile int32_t t16 = -23482535;
uint16_t x78 = UINT16_MAX;
uint64_t x79 = 2497LLU;
static int16_t x82 = INT16_MAX;
int32_t t20 = -19264939;
uint64_t x88 = 117034890LLU;
static int64_t x94 = INT64_MIN;
static int64_t x95 = INT64_MIN;
uint32_t x104 = 40U;
int8_t x117 = -1;
int8_t x125 = -1;
uint32_t x127 = 4U;
volatile int32_t t31 = -35525257;
int8_t x132 = -1;
static volatile uint8_t x135 = UINT8_MAX;
volatile int32_t t34 = -13;
uint16_t x141 = 13935U;
static int32_t x144 = 1013006185;
volatile int32_t t35 = -29;
static int32_t t36 = -129555;
int64_t x161 = 137841998087065471LL;
volatile uint32_t x162 = 999362U;
uint16_t x163 = 0U;
static int32_t t41 = 28689;
uint16_t x175 = 28U;
static int16_t x179 = -4036;
volatile int64_t x191 = 3873LL;
static uint32_t x195 = 269U;
volatile int16_t x198 = INT16_MIN;
int32_t x203 = INT32_MIN;
int16_t x204 = INT16_MIN;
int32_t x207 = -1;
static volatile int32_t t52 = -1;
int16_t x218 = -1;
uint32_t x226 = 341414790U;
static uint64_t x228 = 23647118050920LLU;
int64_t x231 = -1LL;
volatile int32_t t57 = 3653;
int32_t x241 = 9425654;
uint8_t x243 = 3U;
int8_t x253 = INT8_MIN;
volatile int64_t x258 = 643834784040255LL;
int16_t x260 = -1;
int16_t x262 = INT16_MAX;
volatile int8_t x264 = INT8_MIN;
int32_t t65 = -21936325;
uint8_t x268 = 2U;
int32_t x269 = 85299450;
uint8_t x270 = UINT8_MAX;
int32_t x279 = 35138070;
volatile int32_t t69 = 43113366;
static int64_t x290 = INT64_MAX;
static int8_t x291 = INT8_MIN;
int16_t x300 = 2;
int32_t t74 = -56776285;
int32_t t75 = 67;
uint32_t x306 = 6U;
static int16_t x309 = INT16_MAX;
static volatile int16_t x311 = INT16_MIN;
volatile int32_t t77 = -103;
volatile int64_t x313 = 231483055LL;
int8_t x326 = INT8_MIN;
static volatile uint32_t x327 = 1U;
uint32_t x328 = UINT32_MAX;
static int8_t x333 = INT8_MIN;
static volatile int16_t x337 = INT16_MAX;
int32_t x341 = INT32_MIN;
uint64_t x343 = 148485869790078LLU;
int16_t x344 = -1;
int8_t x362 = INT8_MIN;
int32_t t90 = 167273;
static volatile uint16_t x369 = 609U;
int32_t t92 = -301;
int64_t x376 = INT64_MIN;
volatile int32_t t94 = 18;
int32_t t95 = 119554;
int32_t t96 = -278010;
static int16_t x389 = INT16_MIN;
static int32_t t97 = -4800;
int32_t t98 = 0;
uint16_t x400 = 2U;
volatile int32_t x407 = INT32_MIN;
uint64_t x408 = 83992LLU;
volatile int32_t t101 = -102024;
static uint64_t x411 = UINT64_MAX;
static volatile int16_t x412 = INT16_MIN;
volatile int64_t x416 = INT64_MAX;
int8_t x419 = -1;
int64_t x423 = 523151LL;
static volatile int32_t t105 = -17389181;
int32_t t108 = -131777247;
int64_t x439 = -1LL;
uint16_t x447 = UINT16_MAX;
volatile int32_t t111 = -6841;
static int32_t x450 = INT32_MIN;
static int64_t x454 = -1LL;
volatile int32_t x457 = -311;
int64_t x459 = 3803689706LL;
volatile int64_t x467 = INT64_MIN;
uint16_t x468 = 400U;
static uint8_t x469 = 2U;
int32_t t118 = 17228319;
int32_t t119 = 25;
uint16_t x484 = 1068U;
int32_t x494 = INT32_MIN;
static uint32_t x495 = 3536783U;
int16_t x496 = INT16_MIN;
static int16_t x499 = -1;
int8_t x502 = INT8_MAX;
volatile int32_t x506 = INT32_MIN;
static volatile int32_t t126 = -50867215;
int64_t x521 = INT64_MAX;
volatile int16_t x523 = INT16_MIN;
static int16_t x525 = 27;
int8_t x527 = INT8_MIN;
int32_t x534 = INT32_MAX;
static volatile int32_t t133 = -194042;
int64_t x537 = INT64_MAX;
int64_t x538 = 222LL;
int64_t x543 = -1LL;
int32_t x548 = INT32_MIN;
static uint64_t x559 = 125623486LLU;
volatile int32_t t140 = 15258;
static uint32_t x567 = 253149U;
int64_t x570 = 7277397LL;
int32_t t144 = -33246694;
uint16_t x581 = UINT16_MAX;
volatile int32_t x585 = -1;
int16_t x590 = -55;
static int64_t x594 = INT64_MIN;
static int16_t x604 = 6;
uint32_t x608 = UINT32_MAX;
int16_t x611 = 20;
uint64_t x617 = 21LLU;
static int8_t x618 = INT8_MIN;
volatile uint32_t x625 = UINT32_MAX;
int64_t x627 = INT64_MIN;
static uint8_t x630 = UINT8_MAX;
static int64_t x635 = INT64_MAX;
static volatile int16_t x643 = 296;
int64_t x646 = INT64_MIN;
int16_t x650 = 11;
static uint64_t x651 = 8171804810589116LLU;
int64_t x652 = INT64_MIN;
uint16_t x658 = 589U;
volatile int16_t x659 = INT16_MIN;
int32_t t165 = -37;
volatile int64_t x668 = INT64_MAX;
static int8_t x669 = -1;
int32_t x670 = -1;
static int32_t t167 = -273911;
int8_t x674 = INT8_MIN;
uint32_t x676 = 30U;
volatile int16_t x680 = INT16_MIN;
uint64_t x681 = UINT64_MAX;
static int8_t x683 = INT8_MIN;
static int32_t x684 = INT32_MAX;
volatile int32_t t171 = -972;
int64_t x689 = -14LL;
int64_t x690 = -280688009932554LL;
static volatile int8_t x691 = 4;
int8_t x702 = -61;
int8_t x708 = INT8_MIN;
int32_t x709 = INT32_MIN;
volatile uint64_t x712 = 3850352146067876979LLU;
volatile int32_t t177 = 42;
int16_t x713 = 11;
int32_t t178 = 253958236;
volatile int16_t x722 = 2;
static int8_t x730 = -1;
volatile int32_t t182 = 186;
int16_t x741 = INT16_MAX;
int16_t x745 = -1;
int64_t x746 = INT64_MIN;
uint16_t x749 = 7300U;
volatile int32_t t190 = 266091;
int8_t x776 = 2;
static uint64_t x781 = 1247LLU;
int32_t t195 = 681093555;
volatile int32_t t196 = -44;
uint64_t x789 = UINT64_MAX;
int16_t x792 = INT16_MIN;
static int32_t t197 = -2755;
volatile uint64_t x799 = 41538951199045LLU;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile uint32_t x2 = 126U;
	static volatile int64_t x4 = INT64_MAX;
	static int32_t t0 = -3;

    t0 = ((x1|x2)==(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MAX;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -31652701;

    t1 = ((x5|x6)==(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 429462;
	volatile int32_t x10 = -12826384;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = -27;

    t2 = ((x9|x10)==(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MAX;
	int16_t x16 = INT16_MAX;
	int32_t t3 = 3572906;

    t3 = ((x13|x14)==(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 681LLU;
	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	int32_t t4 = 99245;

    t4 = ((x17|x18)==(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = 112925048172LLU;
	static volatile uint64_t x23 = 271606422015214617LLU;
	int16_t x24 = -5;
	int32_t t5 = 10965;

    t5 = ((x21|x22)==(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 5U;
	uint16_t x28 = 44U;

    t6 = ((x25|x26)==(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = 0;
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = -54344460743LL;
	volatile int32_t t7 = 38452;

    t7 = ((x29|x30)==(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	static uint64_t x34 = UINT64_MAX;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = 1187726;

    t8 = ((x33|x34)==(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int64_t x38 = -1LL;
	int32_t x39 = INT32_MIN;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = -29308;

    t9 = ((x37|x38)==(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 49U;
	static volatile uint32_t x42 = 101983574U;
	static int64_t x43 = INT64_MAX;
	int16_t x44 = 0;
	volatile int32_t t10 = 84573072;

    t10 = ((x41|x42)==(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 2503U;
	uint64_t x46 = 91053133889140135LLU;
	uint16_t x47 = UINT16_MAX;
	volatile int32_t t11 = -1492534;

    t11 = ((x45|x46)==(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	volatile uint8_t x50 = 49U;
	int64_t x51 = -1LL;
	volatile int64_t x52 = INT64_MAX;
	static int32_t t12 = 42007;

    t12 = ((x49|x50)==(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = 6U;
	uint8_t x54 = 3U;
	int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = 8U;
	int32_t t13 = 16683468;

    t13 = ((x53|x54)==(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	int16_t x58 = INT16_MIN;
	uint32_t x59 = UINT32_MAX;
	static int64_t x60 = 10349490552700LL;
	int32_t t14 = -7409659;

    t14 = ((x57|x58)==(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	static uint64_t x62 = UINT64_MAX;
	static int16_t x64 = INT16_MIN;
	int32_t t15 = -793339653;

    t15 = ((x61|x62)==(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 3U;
	volatile int16_t x66 = INT16_MIN;
	int16_t x67 = 12273;
	volatile int8_t x68 = INT8_MAX;

    t16 = ((x65|x66)==(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -4;
	volatile uint16_t x70 = 7952U;
	volatile int8_t x71 = -17;
	static int64_t x72 = -284370951543679735LL;
	int32_t t17 = 2751134;

    t17 = ((x69|x70)==(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	volatile uint32_t x74 = 414505274U;
	volatile int32_t x75 = 260813;
	static int8_t x76 = INT8_MAX;
	int32_t t18 = 56;

    t18 = ((x73|x74)==(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	volatile int32_t x80 = INT32_MIN;
	int32_t t19 = -376958;

    t19 = ((x77|x78)==(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = UINT64_MAX;
	uint64_t x83 = 225031LLU;
	volatile int16_t x84 = INT16_MIN;

    t20 = ((x81|x82)==(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = INT16_MIN;
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = UINT8_MAX;
	int32_t t21 = 6;

    t21 = ((x85|x86)==(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	static int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	static uint64_t x92 = UINT64_MAX;
	static volatile int32_t t22 = 3349;

    t22 = ((x89|x90)==(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 1581U;
	int16_t x96 = INT16_MAX;
	static int32_t t23 = 337573006;

    t23 = ((x93|x94)==(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 5U;
	static uint64_t x98 = 821080650704314LLU;
	uint16_t x99 = 7680U;
	static int16_t x100 = INT16_MAX;
	volatile int32_t t24 = 8;

    t24 = ((x97|x98)==(x99!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = INT32_MIN;
	int32_t t25 = -232002;

    t25 = ((x101|x102)==(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 3718U;
	int16_t x106 = -1;
	uint32_t x107 = 26800432U;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 1;

    t26 = ((x105|x106)==(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 1499634161834294LL;
	volatile int32_t x110 = -1;
	int8_t x111 = -9;
	uint64_t x112 = UINT64_MAX;
	static int32_t t27 = 6;

    t27 = ((x109|x110)==(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = -1;
	int8_t x114 = INT8_MAX;
	static int32_t x115 = -1;
	int64_t x116 = INT64_MIN;
	static int32_t t28 = 31010427;

    t28 = ((x113|x114)==(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x118 = 1U;
	int16_t x119 = -26;
	int16_t x120 = -1;
	static int32_t t29 = -10264039;

    t29 = ((x117|x118)==(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 670U;
	int32_t x122 = -661993480;
	static int64_t x123 = INT64_MIN;
	static int32_t x124 = -471249;
	static volatile int32_t t30 = 19429172;

    t30 = ((x121|x122)==(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MIN;
	uint8_t x128 = 1U;

    t31 = ((x125|x126)==(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MAX;
	static uint8_t x130 = 4U;
	volatile uint8_t x131 = 78U;
	static volatile int32_t t32 = 64;

    t32 = ((x129|x130)==(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 7696;
	uint32_t x134 = 40871772U;
	int8_t x136 = -1;
	static int32_t t33 = 804713;

    t33 = ((x133|x134)==(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -7;
	uint64_t x138 = 16538433LLU;
	static uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MAX;

    t34 = ((x137|x138)==(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;

    t35 = ((x141|x142)==(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 25U;
	volatile uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MAX;
	uint8_t x148 = 14U;

    t36 = ((x145|x146)==(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MAX;
	int16_t x151 = 232;
	uint16_t x152 = 29482U;
	volatile int32_t t37 = -500760;

    t37 = ((x149|x150)==(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = -1LL;
	uint8_t x154 = 5U;
	int64_t x155 = -68933LL;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = 20398899;

    t38 = ((x153|x154)==(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	static uint16_t x158 = 0U;
	int16_t x159 = -1;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = 726828;

    t39 = ((x157|x158)==(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x164 = 262;
	int32_t t40 = 1;

    t40 = ((x161|x162)==(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	static uint64_t x167 = 64327018359144041LLU;
	volatile uint32_t x168 = UINT32_MAX;

    t41 = ((x165|x166)==(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 78761U;
	int16_t x170 = INT16_MAX;
	volatile int16_t x171 = INT16_MIN;
	volatile uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -43;

    t42 = ((x169|x170)==(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x173 = UINT16_MAX;
	uint32_t x174 = UINT32_MAX;
	int64_t x176 = 7158623578LL;
	volatile int32_t t43 = 21211734;

    t43 = ((x173|x174)==(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	static int16_t x178 = -1;
	static int32_t x180 = -1;
	volatile int32_t t44 = 923576;

    t44 = ((x177|x178)==(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MIN;
	volatile uint32_t x182 = 801550850U;
	volatile int16_t x183 = -14318;
	int64_t x184 = INT64_MIN;
	static volatile int32_t t45 = 1063922654;

    t45 = ((x181|x182)==(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 26753U;
	uint32_t x186 = 2258403U;
	uint16_t x187 = 18U;
	static uint32_t x188 = UINT32_MAX;
	int32_t t46 = -3;

    t46 = ((x185|x186)==(x187!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = UINT32_MAX;
	volatile int8_t x190 = 6;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 457;

    t47 = ((x189|x190)==(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	int8_t x194 = 1;
	int16_t x196 = -1;
	volatile int32_t t48 = 148147125;

    t48 = ((x193|x194)==(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -17;
	uint8_t x199 = UINT8_MAX;
	int64_t x200 = -1LL;
	volatile int32_t t49 = 1;

    t49 = ((x197|x198)==(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	int8_t x202 = INT8_MIN;
	static int32_t t50 = 479;

    t50 = ((x201|x202)==(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 48U;
	uint16_t x206 = 6006U;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 77;

    t51 = ((x205|x206)==(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1352;
	int32_t x210 = INT32_MIN;
	int8_t x211 = -1;
	uint32_t x212 = 480479934U;

    t52 = ((x209|x210)==(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x213 = -1LL;
	volatile int16_t x214 = -3;
	int32_t x215 = 51875564;
	static int8_t x216 = INT8_MIN;
	static int32_t t53 = 96065;

    t53 = ((x213|x214)==(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MIN;
	int16_t x219 = -1;
	uint32_t x220 = 291U;
	int32_t t54 = -1818026;

    t54 = ((x217|x218)==(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = 2U;
	static int32_t t55 = 135110918;

    t55 = ((x221|x222)==(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = 0LL;
	int64_t x227 = INT64_MAX;
	int32_t t56 = -773688;

    t56 = ((x225|x226)==(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	uint64_t x230 = 6196328664LLU;
	uint16_t x232 = 14U;

    t57 = ((x229|x230)==(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 556032860LLU;
	int8_t x234 = 1;
	static int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MIN;
	static int32_t t58 = 10;

    t58 = ((x233|x234)==(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	int16_t x238 = 1058;
	uint8_t x239 = 1U;
	static uint16_t x240 = 2U;
	volatile int32_t t59 = 9;

    t59 = ((x237|x238)==(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = INT16_MIN;
	int64_t x244 = -1LL;
	int32_t t60 = 906031496;

    t60 = ((x241|x242)==(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 3050166351652LL;
	volatile int8_t x246 = INT8_MIN;
	int16_t x247 = 1745;
	int8_t x248 = INT8_MAX;
	int32_t t61 = 25833;

    t61 = ((x245|x246)==(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = 65;
	static volatile int32_t x250 = INT32_MAX;
	static volatile uint32_t x251 = 1440U;
	int64_t x252 = 23LL;
	volatile int32_t t62 = 0;

    t62 = ((x249|x250)==(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x254 = INT64_MAX;
	int64_t x255 = INT64_MAX;
	volatile int8_t x256 = -1;
	int32_t t63 = 132363606;

    t63 = ((x253|x254)==(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = INT8_MIN;
	int64_t x259 = 10993157232792LL;
	int32_t t64 = 316742;

    t64 = ((x257|x258)==(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 446772689U;
	uint8_t x263 = 6U;

    t65 = ((x261|x262)==(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x265 = 124U;
	int64_t x266 = -488425LL;
	uint8_t x267 = UINT8_MAX;
	static volatile int32_t t66 = 3972;

    t66 = ((x265|x266)==(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x271 = UINT32_MAX;
	uint64_t x272 = 2LLU;
	int32_t t67 = 964973671;

    t67 = ((x269|x270)==(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	int16_t x274 = INT16_MAX;
	static volatile int16_t x275 = INT16_MAX;
	int64_t x276 = -1LL;
	int32_t t68 = 12705;

    t68 = ((x273|x274)==(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 7U;
	uint64_t x278 = 27588482149171716LLU;
	int16_t x280 = INT16_MIN;

    t69 = ((x277|x278)==(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = INT8_MAX;
	int16_t x282 = -1;
	uint16_t x283 = UINT16_MAX;
	static int8_t x284 = INT8_MIN;
	static volatile int32_t t70 = 3640281;

    t70 = ((x281|x282)==(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	int16_t x288 = 10;
	int32_t t71 = 5598;

    t71 = ((x285|x286)==(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 27;
	uint8_t x292 = 5U;
	int32_t t72 = -68824039;

    t72 = ((x289|x290)==(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 134LLU;
	int8_t x294 = INT8_MAX;
	uint8_t x295 = UINT8_MAX;
	static int8_t x296 = INT8_MIN;
	int32_t t73 = 210778;

    t73 = ((x293|x294)==(x295!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	uint64_t x298 = 14250771070301997LLU;
	uint8_t x299 = 99U;

    t74 = ((x297|x298)==(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 1357828678U;
	int64_t x302 = INT64_MAX;
	uint64_t x303 = 3739LLU;
	int32_t x304 = -1;

    t75 = ((x301|x302)==(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x305 = 6411677LLU;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 16665;

    t76 = ((x305|x306)==(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = INT64_MIN;
	volatile int64_t x312 = INT64_MIN;

    t77 = ((x309|x310)==(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = INT8_MAX;
	int8_t x315 = INT8_MIN;
	int64_t x316 = -1LL;
	int32_t t78 = 300;

    t78 = ((x313|x314)==(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 1U;
	uint64_t x318 = 3604932681172271181LLU;
	static int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MIN;
	static int32_t t79 = 18060804;

    t79 = ((x317|x318)==(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	volatile uint16_t x322 = 6U;
	uint64_t x323 = UINT64_MAX;
	static uint32_t x324 = 232347U;
	volatile int32_t t80 = -30;

    t80 = ((x321|x322)==(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = 21;
	int32_t t81 = 1440;

    t81 = ((x325|x326)==(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	uint16_t x330 = 167U;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = INT64_MAX;
	volatile int32_t t82 = 7899470;

    t82 = ((x329|x330)==(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = 3787U;
	int8_t x335 = -5;
	uint32_t x336 = 16U;
	int32_t t83 = -1;

    t83 = ((x333|x334)==(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = 231794598845784LL;
	volatile uint8_t x339 = 0U;
	int32_t x340 = -19;
	int32_t t84 = -56220678;

    t84 = ((x337|x338)==(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x342 = 1443U;
	volatile int32_t t85 = -57520114;

    t85 = ((x341|x342)==(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = INT32_MIN;
	static uint32_t x346 = UINT32_MAX;
	int32_t x347 = -19530;
	static int16_t x348 = INT16_MAX;
	volatile int32_t t86 = -2;

    t86 = ((x345|x346)==(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	static uint64_t x350 = 842636078979165552LLU;
	uint64_t x351 = 184592543LLU;
	int64_t x352 = INT64_MIN;
	static volatile int32_t t87 = 58970;

    t87 = ((x349|x350)==(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = INT16_MAX;
	int8_t x354 = -1;
	int8_t x355 = INT8_MIN;
	volatile int64_t x356 = INT64_MAX;
	volatile int32_t t88 = 612684583;

    t88 = ((x353|x354)==(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	int32_t x358 = -36920928;
	volatile int16_t x359 = INT16_MIN;
	volatile int32_t x360 = 255;
	int32_t t89 = -15;

    t89 = ((x357|x358)==(x359!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 19492U;
	static volatile int16_t x363 = INT16_MAX;
	int16_t x364 = -1;

    t90 = ((x361|x362)==(x363!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = INT64_MAX;
	int8_t x366 = -1;
	int16_t x367 = -936;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = -2;

    t91 = ((x365|x366)==(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = INT64_MIN;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = -1;

    t92 = ((x369|x370)==(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	volatile int16_t x374 = -1;
	static int16_t x375 = 14;
	int32_t t93 = -13;

    t93 = ((x373|x374)==(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = 1LL;
	int32_t x378 = INT32_MIN;
	volatile int16_t x379 = -1;
	static uint8_t x380 = 1U;

    t94 = ((x377|x378)==(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	uint16_t x382 = UINT16_MAX;
	volatile uint64_t x383 = 171LLU;
	static int16_t x384 = INT16_MIN;

    t95 = ((x381|x382)==(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = UINT16_MAX;
	int16_t x386 = INT16_MIN;
	int16_t x387 = -73;
	uint32_t x388 = UINT32_MAX;

    t96 = ((x385|x386)==(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x390 = -68091237257741LL;
	static volatile int16_t x391 = -1;
	static int64_t x392 = INT64_MIN;

    t97 = ((x389|x390)==(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 51389072LL;
	uint64_t x394 = 656LLU;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -1;

    t98 = ((x393|x394)==(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 46U;
	volatile int8_t x398 = INT8_MIN;
	volatile int64_t x399 = -1LL;
	volatile int32_t t99 = -1;

    t99 = ((x397|x398)==(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1846;
	volatile uint64_t x402 = UINT64_MAX;
	volatile int64_t x403 = INT64_MIN;
	uint64_t x404 = 190903LLU;
	static volatile int32_t t100 = -218760;

    t100 = ((x401|x402)==(x403!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int64_t x406 = 19900184LL;

    t101 = ((x405|x406)==(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	volatile int16_t x410 = INT16_MIN;
	int32_t t102 = 1106081;

    t102 = ((x409|x410)==(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x413 = INT16_MIN;
	uint32_t x414 = 17947U;
	uint32_t x415 = 19803U;
	volatile int32_t t103 = -78944;

    t103 = ((x413|x414)==(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	uint16_t x418 = 714U;
	int8_t x420 = -1;
	volatile int32_t t104 = 6104374;

    t104 = ((x417|x418)==(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint16_t x421 = 24U;
	uint64_t x422 = 81192604LLU;
	volatile uint16_t x424 = 113U;

    t105 = ((x421|x422)==(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 808U;
	uint16_t x426 = 240U;
	int64_t x427 = INT64_MAX;
	int64_t x428 = -1LL;
	volatile int32_t t106 = 524738;

    t106 = ((x425|x426)==(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 313U;
	int32_t x430 = 17860845;
	static uint64_t x431 = 458LLU;
	int64_t x432 = INT64_MIN;
	volatile int32_t t107 = 28;

    t107 = ((x429|x430)==(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	int32_t x434 = INT32_MAX;
	int32_t x435 = 756;
	volatile uint16_t x436 = UINT16_MAX;

    t108 = ((x433|x434)==(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int32_t x438 = INT32_MIN;
	uint32_t x440 = 925781U;
	volatile int32_t t109 = -1291333;

    t109 = ((x437|x438)==(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 3306U;
	int16_t x442 = -21;
	static int64_t x443 = -1LL;
	uint64_t x444 = UINT64_MAX;
	int32_t t110 = 39696027;

    t110 = ((x441|x442)==(x443!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x445 = 270U;
	volatile int16_t x446 = -4007;
	int8_t x448 = INT8_MAX;

    t111 = ((x445|x446)==(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MAX;
	static int32_t x451 = 21071;
	volatile uint32_t x452 = 330522U;
	int32_t t112 = -193443;

    t112 = ((x449|x450)==(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x453 = 149U;
	int8_t x455 = -57;
	int8_t x456 = -1;
	volatile int32_t t113 = -45493;

    t113 = ((x453|x454)==(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = INT32_MIN;
	uint8_t x460 = 0U;
	int32_t t114 = -332;

    t114 = ((x457|x458)==(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	uint64_t x462 = UINT64_MAX;
	int16_t x463 = INT16_MIN;
	volatile int32_t x464 = 1;
	volatile int32_t t115 = 558452639;

    t115 = ((x461|x462)==(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	int32_t x466 = 17377587;
	int32_t t116 = 504266278;

    t116 = ((x465|x466)==(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = 219;
	uint32_t x471 = 151U;
	int8_t x472 = -6;
	volatile int32_t t117 = 79772;

    t117 = ((x469|x470)==(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 160U;
	int8_t x474 = 43;
	static int64_t x475 = 365047LL;
	uint8_t x476 = 85U;

    t118 = ((x473|x474)==(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	static int8_t x478 = 1;
	int32_t x479 = INT32_MIN;
	volatile int16_t x480 = INT16_MAX;

    t119 = ((x477|x478)==(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = -15;
	int8_t x482 = 1;
	int64_t x483 = -1LL;
	int32_t t120 = -883638621;

    t120 = ((x481|x482)==(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x485 = UINT8_MAX;
	int32_t x486 = INT32_MAX;
	int64_t x487 = 1LL;
	int64_t x488 = INT64_MIN;
	volatile int32_t t121 = -62489049;

    t121 = ((x485|x486)==(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 1231065;
	uint32_t x490 = 3U;
	uint32_t x491 = UINT32_MAX;
	int16_t x492 = INT16_MAX;
	volatile int32_t t122 = -4240;

    t122 = ((x489|x490)==(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 115U;
	int32_t t123 = 534423323;

    t123 = ((x493|x494)==(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -209;
	uint16_t x498 = 5U;
	volatile int64_t x500 = -20273584715LL;
	volatile int32_t t124 = -6;

    t124 = ((x497|x498)==(x499!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	uint16_t x503 = 3U;
	static uint32_t x504 = UINT32_MAX;
	int32_t t125 = 1824087;

    t125 = ((x501|x502)==(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	int16_t x507 = 11874;
	int32_t x508 = INT32_MAX;

    t126 = ((x505|x506)==(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = -15489;
	int32_t x510 = INT32_MAX;
	int8_t x511 = INT8_MAX;
	uint32_t x512 = 1962486U;
	volatile int32_t t127 = 1;

    t127 = ((x509|x510)==(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x513 = INT8_MAX;
	int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MIN;
	uint16_t x516 = 6U;
	int32_t t128 = 1;

    t128 = ((x513|x514)==(x515!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MIN;
	int8_t x518 = 1;
	int64_t x519 = -1LL;
	volatile int32_t x520 = INT32_MAX;
	volatile int32_t t129 = 55;

    t129 = ((x517|x518)==(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x522 = UINT32_MAX;
	volatile int8_t x524 = -46;
	int32_t t130 = -10310615;

    t130 = ((x521|x522)==(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = -1;
	uint16_t x528 = UINT16_MAX;
	int32_t t131 = 58902;

    t131 = ((x525|x526)==(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 15U;
	int64_t x530 = -55078372LL;
	int32_t x531 = 10155276;
	int32_t x532 = -1076;
	static volatile int32_t t132 = -1848987;

    t132 = ((x529|x530)==(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	uint16_t x535 = 207U;
	volatile int16_t x536 = INT16_MIN;

    t133 = ((x533|x534)==(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x539 = INT32_MAX;
	int32_t x540 = -40402388;
	int32_t t134 = 4436;

    t134 = ((x537|x538)==(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = UINT64_MAX;
	uint64_t x542 = 1499LLU;
	int8_t x544 = INT8_MAX;
	volatile int32_t t135 = -2037;

    t135 = ((x541|x542)==(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -485781;
	uint16_t x546 = 3U;
	volatile int64_t x547 = -449772590LL;
	volatile int32_t t136 = 157;

    t136 = ((x545|x546)==(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 3;
	volatile int32_t x550 = INT32_MIN;
	int8_t x551 = 2;
	int64_t x552 = INT64_MIN;
	static int32_t t137 = 492728855;

    t137 = ((x549|x550)==(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -117615350;
	int16_t x554 = INT16_MIN;
	static int64_t x555 = INT64_MIN;
	int64_t x556 = 2LL;
	static int32_t t138 = 226;

    t138 = ((x553|x554)==(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	volatile int32_t x558 = 205231752;
	uint8_t x560 = UINT8_MAX;
	static volatile int32_t t139 = -41;

    t139 = ((x557|x558)==(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x561 = 1U;
	static int8_t x562 = -1;
	int8_t x563 = INT8_MIN;
	volatile int32_t x564 = -1;

    t140 = ((x561|x562)==(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MIN;
	int8_t x566 = 57;
	volatile int32_t x568 = -8279;
	int32_t t141 = -28183226;

    t141 = ((x565|x566)==(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 22757U;
	int8_t x571 = 2;
	volatile uint16_t x572 = UINT16_MAX;
	volatile int32_t t142 = -2;

    t142 = ((x569|x570)==(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = 19286976LLU;
	volatile int64_t x574 = 625620318LL;
	volatile int64_t x575 = -254158697LL;
	uint32_t x576 = 54U;
	volatile int32_t t143 = -15493411;

    t143 = ((x573|x574)==(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 10U;
	int64_t x578 = INT64_MAX;
	volatile uint8_t x579 = UINT8_MAX;
	static volatile int64_t x580 = -5904LL;

    t144 = ((x577|x578)==(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x582 = INT32_MIN;
	int16_t x583 = INT16_MAX;
	volatile int16_t x584 = -1;
	static volatile int32_t t145 = -7;

    t145 = ((x581|x582)==(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x586 = UINT8_MAX;
	int64_t x587 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = -854;

    t146 = ((x585|x586)==(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 1U;
	static int16_t x591 = INT16_MIN;
	int64_t x592 = -1LL;
	volatile int32_t t147 = -758;

    t147 = ((x589|x590)==(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 0U;
	int64_t x595 = INT64_MIN;
	volatile int64_t x596 = -9928988840682423LL;
	int32_t t148 = 1;

    t148 = ((x593|x594)==(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = 3;
	static int64_t x598 = INT64_MIN;
	volatile int32_t x599 = -1;
	static uint64_t x600 = 257334998301493281LLU;
	volatile int32_t t149 = 0;

    t149 = ((x597|x598)==(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	uint16_t x602 = 10U;
	int64_t x603 = -30LL;
	volatile int32_t t150 = 358;

    t150 = ((x601|x602)==(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 2U;
	static volatile int8_t x606 = -1;
	static volatile int8_t x607 = -1;
	volatile int32_t t151 = -19083569;

    t151 = ((x605|x606)==(x607!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	volatile int16_t x610 = 0;
	int32_t x612 = INT32_MIN;
	volatile int32_t t152 = 53774548;

    t152 = ((x609|x610)==(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	static int8_t x614 = -5;
	int32_t x615 = -1;
	int32_t x616 = 535082582;
	volatile int32_t t153 = 298;

    t153 = ((x613|x614)==(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x619 = 2063907LLU;
	uint8_t x620 = 0U;
	int32_t t154 = 3;

    t154 = ((x617|x618)==(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	uint8_t x622 = UINT8_MAX;
	volatile int16_t x623 = -1;
	int64_t x624 = -247941856878LL;
	volatile int32_t t155 = -1296;

    t155 = ((x621|x622)==(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x626 = INT32_MAX;
	volatile int8_t x628 = -1;
	volatile int32_t t156 = 3646159;

    t156 = ((x625|x626)==(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MIN;
	uint8_t x631 = 65U;
	volatile int8_t x632 = 0;
	static volatile int32_t t157 = -1357;

    t157 = ((x629|x630)==(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x633 = 14615U;
	uint16_t x634 = 0U;
	uint64_t x636 = UINT64_MAX;
	static int32_t t158 = 0;

    t158 = ((x633|x634)==(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	int64_t x638 = -1769008339546LL;
	volatile uint16_t x639 = 2380U;
	int16_t x640 = INT16_MIN;
	static volatile int32_t t159 = 573340;

    t159 = ((x637|x638)==(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x641 = 23U;
	int8_t x642 = INT8_MIN;
	uint16_t x644 = 77U;
	volatile int32_t t160 = -2548936;

    t160 = ((x641|x642)==(x643!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = -10909;
	int32_t x647 = 2;
	static int8_t x648 = INT8_MIN;
	static int32_t t161 = 8;

    t161 = ((x645|x646)==(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x649 = UINT8_MAX;
	volatile int32_t t162 = 70;

    t162 = ((x649|x650)==(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	int32_t x654 = -20921;
	static int16_t x655 = INT16_MAX;
	int16_t x656 = 6723;
	static volatile int32_t t163 = -201623467;

    t163 = ((x653|x654)==(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	static int32_t x660 = 143;
	int32_t t164 = 105;

    t164 = ((x657|x658)==(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x661 = 1U;
	static uint32_t x662 = 4577779U;
	uint16_t x663 = 86U;
	int8_t x664 = -4;

    t165 = ((x661|x662)==(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x665 = 110804530U;
	uint8_t x666 = UINT8_MAX;
	uint8_t x667 = 2U;
	int32_t t166 = -1778864;

    t166 = ((x665|x666)==(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x671 = 3448;
	int8_t x672 = INT8_MAX;

    t167 = ((x669|x670)==(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	static int8_t x675 = INT8_MIN;
	volatile int32_t t168 = 100170277;

    t168 = ((x673|x674)==(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	volatile uint64_t x678 = UINT64_MAX;
	static volatile uint8_t x679 = UINT8_MAX;
	volatile int32_t t169 = 2383880;

    t169 = ((x677|x678)==(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x682 = UINT8_MAX;
	int32_t t170 = -1289531;

    t170 = ((x681|x682)==(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = -1LL;
	int16_t x686 = INT16_MIN;
	int16_t x687 = -1;
	int8_t x688 = 9;

    t171 = ((x685|x686)==(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x692 = 465U;
	volatile int32_t t172 = -26860;

    t172 = ((x689|x690)==(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -6;
	static int64_t x694 = INT64_MIN;
	int16_t x695 = INT16_MAX;
	volatile int64_t x696 = -51709LL;
	volatile int32_t t173 = 76217;

    t173 = ((x693|x694)==(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x697 = -58;
	uint64_t x698 = 529354522703LLU;
	int16_t x699 = INT16_MIN;
	static int64_t x700 = INT64_MIN;
	static volatile int32_t t174 = -422;

    t174 = ((x697|x698)==(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -1;
	uint16_t x703 = 958U;
	int32_t x704 = INT32_MAX;
	int32_t t175 = 628;

    t175 = ((x701|x702)==(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -21;
	int64_t x706 = -1LL;
	static int8_t x707 = INT8_MIN;
	volatile int32_t t176 = -1573;

    t176 = ((x705|x706)==(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = 4;
	static int64_t x711 = 1146583LL;

    t177 = ((x709|x710)==(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x714 = 450U;
	uint64_t x715 = UINT64_MAX;
	uint32_t x716 = UINT32_MAX;

    t178 = ((x713|x714)==(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	static uint8_t x718 = 28U;
	volatile uint32_t x719 = UINT32_MAX;
	int16_t x720 = -1;
	static volatile int32_t t179 = -21;

    t179 = ((x717|x718)==(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 51U;
	int32_t x723 = -1;
	int8_t x724 = -1;
	int32_t t180 = 6185647;

    t180 = ((x721|x722)==(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	int32_t x726 = INT32_MIN;
	volatile int64_t x727 = INT64_MIN;
	int8_t x728 = INT8_MIN;
	volatile int32_t t181 = 228;

    t181 = ((x725|x726)==(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = -3843134LL;
	int64_t x731 = INT64_MAX;
	static int16_t x732 = -1;

    t182 = ((x729|x730)==(x731!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	int8_t x734 = -6;
	uint8_t x735 = 1U;
	int32_t x736 = INT32_MIN;
	static volatile int32_t t183 = -116462848;

    t183 = ((x733|x734)==(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	static int32_t x738 = INT32_MAX;
	int64_t x739 = 7282281132197LL;
	volatile uint16_t x740 = UINT16_MAX;
	volatile int32_t t184 = -6450;

    t184 = ((x737|x738)==(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x742 = UINT64_MAX;
	int8_t x743 = -1;
	int16_t x744 = INT16_MIN;
	int32_t t185 = 1;

    t185 = ((x741|x742)==(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x747 = UINT8_MAX;
	uint8_t x748 = 7U;
	volatile int32_t t186 = -1;

    t186 = ((x745|x746)==(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x750 = INT32_MIN;
	int8_t x751 = INT8_MIN;
	uint16_t x752 = 0U;
	volatile int32_t t187 = -3906664;

    t187 = ((x749|x750)==(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 1U;
	static uint64_t x754 = 601731550LLU;
	volatile int64_t x755 = 436253LL;
	uint8_t x756 = 8U;
	volatile int32_t t188 = -48952;

    t188 = ((x753|x754)==(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x757 = 78U;
	volatile int16_t x758 = INT16_MAX;
	static int8_t x759 = -11;
	int32_t x760 = INT32_MIN;
	volatile int32_t t189 = 28248066;

    t189 = ((x757|x758)==(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	static int8_t x762 = INT8_MAX;
	static volatile int64_t x763 = -1LL;
	static int8_t x764 = -7;

    t190 = ((x761|x762)==(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x765 = -1;
	uint32_t x766 = 87512150U;
	static uint32_t x767 = 6U;
	int32_t x768 = -1;
	static int32_t t191 = -3894417;

    t191 = ((x765|x766)==(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	static int16_t x770 = INT16_MAX;
	static uint16_t x771 = UINT16_MAX;
	volatile int64_t x772 = INT64_MAX;
	volatile int32_t t192 = -1644376;

    t192 = ((x769|x770)==(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MIN;
	int64_t x774 = -102548168LL;
	int16_t x775 = INT16_MIN;
	int32_t t193 = 113;

    t193 = ((x773|x774)==(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = UINT32_MAX;
	int64_t x778 = -8LL;
	uint16_t x779 = UINT16_MAX;
	volatile int32_t x780 = INT32_MIN;
	int32_t t194 = 117264;

    t194 = ((x777|x778)==(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x782 = 52U;
	uint8_t x783 = UINT8_MAX;
	int16_t x784 = INT16_MIN;

    t195 = ((x781|x782)==(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 126198052461436LLU;
	int64_t x786 = -7758LL;
	static int8_t x787 = -1;
	static int64_t x788 = INT64_MIN;

    t196 = ((x785|x786)==(x787!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x790 = 34234149U;
	volatile int32_t x791 = INT32_MIN;

    t197 = ((x789|x790)==(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = INT32_MIN;
	int8_t x794 = INT8_MIN;
	static int8_t x795 = INT8_MIN;
	uint64_t x796 = 11371115290592158LLU;
	int32_t t198 = -980348800;

    t198 = ((x793|x794)==(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int8_t x798 = 0;
	volatile int32_t x800 = -22;
	int32_t t199 = -22698;

    t199 = ((x797|x798)==(x799!=x800));

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

