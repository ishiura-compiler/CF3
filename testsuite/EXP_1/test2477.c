
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

static int32_t x3 = INT32_MIN;
int64_t x7 = INT64_MAX;
volatile int32_t t2 = 3809186;
uint16_t x13 = UINT16_MAX;
uint16_t x16 = 2791U;
volatile int32_t t3 = 5;
uint16_t x21 = 2370U;
int64_t x24 = INT64_MIN;
volatile int8_t x29 = INT8_MIN;
int64_t x30 = -1LL;
volatile int64_t x31 = 3250232213917461LL;
static int8_t x32 = -1;
uint32_t x35 = 4816468U;
volatile uint16_t x37 = 13U;
int32_t x38 = -1;
uint64_t x42 = 11119090881431988LLU;
int32_t t10 = 648;
int32_t x48 = -1;
volatile int64_t x52 = INT64_MIN;
uint64_t x54 = 496LLU;
volatile int32_t x58 = 16938;
int64_t x59 = INT64_MIN;
volatile int32_t x63 = -1;
static int32_t t16 = 36;
int32_t x74 = INT32_MIN;
uint64_t x77 = UINT64_MAX;
int16_t x79 = 4656;
int64_t x80 = -2072LL;
uint16_t x81 = 0U;
static uint16_t x86 = 25U;
int32_t t21 = -450;
static int16_t x90 = -1;
static int64_t x97 = -532148346604626721LL;
int32_t x100 = 50071;
volatile int64_t x107 = INT64_MIN;
uint16_t x108 = UINT16_MAX;
int32_t t26 = 97726;
uint64_t x111 = UINT64_MAX;
static volatile int32_t t27 = -523;
int8_t x119 = INT8_MAX;
int64_t x122 = -1LL;
int8_t x126 = INT8_MAX;
static volatile int64_t x127 = INT64_MIN;
volatile uint64_t t33 = 46659365235705678LLU;
int32_t x137 = INT32_MIN;
volatile uint16_t x147 = UINT16_MAX;
int32_t x151 = INT32_MIN;
volatile uint16_t x155 = 10U;
int64_t t39 = -653715263LL;
int16_t x163 = INT16_MAX;
volatile int32_t x165 = 13245533;
volatile uint32_t x169 = UINT32_MAX;
static volatile uint32_t x172 = 113U;
uint64_t x177 = 11502216LLU;
int64_t x180 = INT64_MAX;
static volatile uint64_t x181 = UINT64_MAX;
int8_t x184 = -15;
volatile int64_t x192 = 6372LL;
uint32_t x202 = 159777U;
int64_t x213 = INT64_MIN;
volatile uint8_t x216 = 1U;
int32_t t54 = 57921;
int16_t x230 = -27;
static int32_t t58 = 5697173;
int32_t x238 = 8251223;
int8_t x239 = INT8_MIN;
uint32_t x240 = UINT32_MAX;
volatile uint32_t t59 = UINT32_MAX;
uint16_t x242 = 1U;
volatile int32_t x248 = -1;
volatile int32_t t61 = 86093353;
static volatile uint16_t x252 = UINT16_MAX;
int8_t x254 = INT8_MIN;
int32_t x256 = INT32_MAX;
uint64_t x260 = 1111163161790757LLU;
int64_t x262 = -1LL;
static volatile uint64_t x272 = 92666587LLU;
int64_t x277 = INT64_MIN;
int32_t t69 = 32;
volatile int32_t t71 = -369393342;
uint8_t x294 = 20U;
uint16_t x299 = 882U;
static volatile int32_t t74 = 50321;
static uint8_t x301 = UINT8_MAX;
int16_t x308 = INT16_MIN;
static int8_t x309 = -3;
uint16_t x314 = UINT16_MAX;
int16_t x315 = -1;
uint16_t x325 = UINT16_MAX;
static int8_t x327 = INT8_MAX;
volatile int64_t x335 = INT64_MIN;
volatile int8_t x337 = INT8_MIN;
static int8_t x354 = 0;
int8_t x358 = INT8_MIN;
static int8_t x359 = 0;
volatile int8_t x360 = INT8_MIN;
uint8_t x367 = 43U;
static volatile int16_t x370 = INT16_MIN;
volatile int8_t x373 = -1;
volatile int64_t x376 = -1LL;
static int64_t t93 = -8486467217256720LL;
int32_t x381 = 1;
uint16_t x384 = 239U;
static volatile int8_t x388 = INT8_MIN;
int32_t t97 = -91;
int8_t x393 = INT8_MIN;
int64_t x395 = INT64_MIN;
volatile int32_t x396 = INT32_MAX;
int8_t x399 = INT8_MIN;
uint8_t x400 = 48U;
uint8_t x401 = UINT8_MAX;
int64_t x402 = INT64_MIN;
int8_t x415 = 1;
uint32_t x416 = 54276U;
volatile int64_t x420 = INT64_MIN;
volatile int32_t t105 = -7510234;
static int8_t x426 = -1;
volatile uint64_t t106 = 149LLU;
int16_t x434 = 2940;
uint8_t x436 = UINT8_MAX;
static volatile int32_t t108 = -1268540;
uint64_t x438 = 1LLU;
volatile uint16_t x439 = 23623U;
int8_t x441 = -1;
int16_t x442 = -5679;
volatile int32_t t113 = 11219;
int32_t x465 = INT32_MIN;
static uint8_t x468 = UINT8_MAX;
uint64_t t117 = 21024418LLU;
int32_t t118 = -5;
int16_t x489 = INT16_MIN;
volatile int8_t x491 = 26;
uint64_t x492 = UINT64_MAX;
static uint8_t x494 = 0U;
volatile int64_t x496 = INT64_MAX;
volatile uint64_t t124 = 66910587LLU;
int16_t x501 = -1;
uint32_t x513 = 195741U;
uint8_t x518 = UINT8_MAX;
int16_t x520 = 6126;
volatile int32_t t132 = 3320046;
static int8_t x535 = INT8_MIN;
int16_t x537 = -50;
int32_t x538 = INT32_MAX;
int16_t x539 = INT16_MIN;
static int16_t x549 = INT16_MAX;
int32_t t137 = INT32_MAX;
int32_t x556 = -1;
int32_t t138 = -201099161;
volatile int16_t x572 = -215;
int8_t x592 = INT8_MAX;
volatile int32_t t147 = -550407785;
int16_t x594 = INT16_MIN;
int32_t t148 = INT32_MIN;
uint8_t x598 = UINT8_MAX;
uint16_t x599 = UINT16_MAX;
static uint8_t x602 = UINT8_MAX;
static volatile int64_t x608 = -586777453745070LL;
volatile int64_t t151 = 551917LL;
int64_t x616 = INT64_MAX;
int64_t x620 = INT64_MIN;
int32_t x626 = -228409344;
volatile int8_t x642 = 8;
volatile uint8_t x643 = UINT8_MAX;
int32_t x647 = -1;
volatile int32_t t165 = 0;
int8_t x668 = 8;
static int64_t x669 = INT64_MIN;
int64_t x674 = INT64_MAX;
static volatile int64_t x679 = -1LL;
int16_t x682 = -1;
volatile int64_t x692 = 91021LL;
static int16_t x706 = -3;
volatile int64_t x712 = INT64_MIN;
uint64_t x715 = UINT64_MAX;
static volatile int32_t t178 = 5237;
volatile int32_t t179 = -10627178;
volatile uint32_t t180 = UINT32_MAX;
uint64_t x728 = 202284618861899425LLU;
volatile uint64_t t181 = 205LLU;
int8_t x730 = INT8_MIN;
static int64_t t184 = 524643151477099725LL;
static int64_t x743 = 137080644970LL;
int32_t x751 = -1;
static volatile int64_t x753 = INT64_MIN;
static uint64_t x754 = UINT64_MAX;
int32_t x756 = INT32_MAX;
int8_t x759 = INT8_MIN;
static int8_t x768 = INT8_MAX;
static volatile uint8_t x774 = 6U;
static int64_t t193 = 111LL;
int32_t x777 = INT32_MAX;
volatile int32_t t194 = -32;
int16_t x782 = INT16_MIN;
int16_t x795 = 4;
int32_t x799 = -138722728;


void f0(void) {
    	int64_t x1 = -1LL;
	int32_t x2 = -165279;
	int64_t x4 = -1426794839LL;
	volatile int64_t t0 = 478234LL;

    t0 = (((x1|x2)>x3)|x4);

    if (t0 != -1426794839LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int64_t x6 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -52638;

    t1 = (((x5|x6)>x7)|x8);

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	volatile int8_t x10 = INT8_MIN;
	int8_t x11 = -1;
	uint8_t x12 = 5U;

    t2 = (((x9|x10)>x11)|x12);

    if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MAX;
	uint16_t x15 = 24U;

    t3 = (((x13|x14)>x15)|x16);

    if (t3 != 2791) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint8_t x18 = 1U;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = (((x17|x18)>x19)|x20);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MAX;
	volatile int64_t t5 = -17577974LL;

    t5 = (((x21|x22)>x23)|x24);

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	int64_t x26 = INT64_MIN;
	int16_t x27 = 83;
	uint16_t x28 = 3833U;
	volatile int32_t t6 = -36103611;

    t6 = (((x25|x26)>x27)|x28);

    if (t6 != 3833) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t t7 = -17313458;

    t7 = (((x29|x30)>x31)|x32);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = -438;

    t8 = (((x33|x34)>x35)|x36);

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x39 = INT16_MAX;
	int8_t x40 = INT8_MAX;
	int32_t t9 = -63488;

    t9 = (((x37|x38)>x39)|x40);

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -11706;
	uint8_t x43 = 43U;
	static int32_t x44 = 56877205;

    t10 = (((x41|x42)>x43)|x44);

    if (t10 != 56877205) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 0;
	int64_t x46 = -3399LL;
	int32_t x47 = INT32_MIN;
	int32_t t11 = -490;

    t11 = (((x45|x46)>x47)|x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 0U;
	static int32_t x50 = INT32_MAX;
	uint8_t x51 = UINT8_MAX;
	int64_t t12 = 154773445LL;

    t12 = (((x49|x50)>x51)|x52);

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	int64_t x55 = INT64_MIN;
	uint8_t x56 = 13U;
	int32_t t13 = 490588789;

    t13 = (((x53|x54)>x55)|x56);

    if (t13 != 13) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 10U;
	volatile int64_t x60 = 3LL;
	int64_t t14 = -1612343625615497416LL;

    t14 = (((x57|x58)>x59)|x60);

    if (t14 != 3LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 15236983719552LLU;
	static int16_t x62 = INT16_MIN;
	int16_t x64 = -2150;
	int32_t t15 = -99850488;

    t15 = (((x61|x62)>x63)|x64);

    if (t15 != -2150) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 0U;
	int16_t x66 = -1;
	static int8_t x67 = -1;
	int32_t x68 = -1;

    t16 = (((x65|x66)>x67)|x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = 1;
	static int64_t x70 = INT64_MIN;
	uint16_t x71 = 5481U;
	volatile int16_t x72 = -1;
	volatile int32_t t17 = 202183;

    t17 = (((x69|x70)>x71)|x72);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	static volatile int8_t x75 = INT8_MIN;
	int8_t x76 = 0;
	volatile int32_t t18 = 0;

    t18 = (((x73|x74)>x75)|x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = INT16_MIN;
	static int64_t t19 = -136418370041LL;

    t19 = (((x77|x78)>x79)|x80);

    if (t19 != -2071LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x82 = UINT32_MAX;
	uint8_t x83 = 5U;
	static uint8_t x84 = UINT8_MAX;
	static int32_t t20 = 2613;

    t20 = (((x81|x82)>x83)|x84);

    if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -46;
	uint32_t x87 = 485U;
	int16_t x88 = -1;

    t21 = (((x85|x86)>x87)|x88);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = INT64_MAX;
	volatile int64_t t22 = INT64_MAX;

    t22 = (((x89|x90)>x91)|x92);

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = 6;
	static int16_t x94 = INT16_MIN;
	static volatile uint32_t x95 = 1970480U;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = INT32_MAX;

    t23 = (((x93|x94)>x95)|x96);

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x98 = INT64_MIN;
	volatile uint32_t x99 = UINT32_MAX;
	static volatile int32_t t24 = -2072933;

    t24 = (((x97|x98)>x99)|x100);

    if (t24 != 50071) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 14U;
	int16_t x102 = -5;
	volatile uint64_t x103 = 3787045LLU;
	static uint32_t x104 = 40U;
	volatile uint32_t t25 = 24208U;

    t25 = (((x101|x102)>x103)|x104);

    if (t25 != 41U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = 1167U;
	volatile int64_t x106 = -2488490240130LL;

    t26 = (((x105|x106)>x107)|x108);

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 166882215;
	static int64_t x110 = -1LL;
	static int8_t x112 = -50;

    t27 = (((x109|x110)>x111)|x112);

    if (t27 != -50) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = 8590LL;
	int16_t x114 = 5;
	int8_t x115 = -1;
	int32_t x116 = INT32_MIN;
	int32_t t28 = -1567599;

    t28 = (((x113|x114)>x115)|x116);

    if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 1;
	int32_t x118 = -1;
	volatile int32_t x120 = INT32_MAX;
	static int32_t t29 = INT32_MAX;

    t29 = (((x117|x118)>x119)|x120);

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MAX;
	volatile uint8_t x123 = 7U;
	static uint8_t x124 = 30U;
	static volatile int32_t t30 = -1685;

    t30 = (((x121|x122)>x123)|x124);

    if (t30 != 30) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 764836848U;
	uint64_t x128 = 5305589LLU;
	uint64_t t31 = 2710159LLU;

    t31 = (((x125|x126)>x127)|x128);

    if (t31 != 5305589LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	uint16_t x130 = 1U;
	uint64_t x131 = UINT64_MAX;
	uint16_t x132 = 1835U;
	volatile int32_t t32 = -213330;

    t32 = (((x129|x130)>x131)|x132);

    if (t32 != 1835) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = 76U;
	int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = 58444LLU;

    t33 = (((x133|x134)>x135)|x136);

    if (t33 != 58445LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MIN;
	static int16_t x139 = -1;
	uint16_t x140 = 1U;
	volatile int32_t t34 = 0;

    t34 = (((x137|x138)>x139)|x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	static int8_t x142 = INT8_MAX;
	uint8_t x143 = 2U;
	volatile int32_t x144 = INT32_MIN;
	int32_t t35 = INT32_MIN;

    t35 = (((x141|x142)>x143)|x144);

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = -45825489587LL;
	int32_t x146 = 286;
	volatile int8_t x148 = -1;
	volatile int32_t t36 = -261235136;

    t36 = (((x145|x146)>x147)|x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MIN;
	volatile int16_t x150 = -674;
	static volatile int64_t x152 = -8227440606126LL;
	volatile int64_t t37 = 2028LL;

    t37 = (((x149|x150)>x151)|x152);

    if (t37 != -8227440606125LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MIN;
	volatile int16_t x156 = INT16_MIN;
	static volatile int32_t t38 = 16493;

    t38 = (((x153|x154)>x155)|x156);

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 1;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = -1;
	int64_t x160 = -2971432301680978115LL;

    t39 = (((x157|x158)>x159)|x160);

    if (t39 != -2971432301680978115LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 10846U;
	int8_t x162 = -32;
	int8_t x164 = INT8_MAX;
	int32_t t40 = -21;

    t40 = (((x161|x162)>x163)|x164);

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x166 = 12296956778085671LLU;
	int64_t x167 = -1LL;
	uint8_t x168 = 29U;
	static int32_t t41 = -748;

    t41 = (((x165|x166)>x167)|x168);

    if (t41 != 29) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x170 = 176U;
	static int16_t x171 = -1;
	static uint32_t t42 = 1858965U;

    t42 = (((x169|x170)>x171)|x172);

    if (t42 != 113U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = 30654276;
	volatile int32_t x174 = INT32_MIN;
	volatile uint8_t x175 = UINT8_MAX;
	static int8_t x176 = INT8_MIN;
	int32_t t43 = 66;

    t43 = (((x173|x174)>x175)|x176);

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x178 = INT16_MIN;
	volatile int16_t x179 = INT16_MIN;
	int64_t t44 = INT64_MAX;

    t44 = (((x177|x178)>x179)|x180);

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x182 = 7608U;
	uint8_t x183 = UINT8_MAX;
	int32_t t45 = -16617949;

    t45 = (((x181|x182)>x183)|x184);

    if (t45 != -15) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = 15;
	int32_t x186 = 3493;
	volatile uint16_t x187 = 1U;
	int16_t x188 = 0;
	volatile int32_t t46 = -96968468;

    t46 = (((x185|x186)>x187)|x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	uint16_t x190 = 29095U;
	int8_t x191 = -1;
	static volatile int64_t t47 = -17213470265LL;

    t47 = (((x189|x190)>x191)|x192);

    if (t47 != 6372LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 0U;
	volatile int32_t t48 = -14568137;

    t48 = (((x193|x194)>x195)|x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	uint32_t x198 = 10381U;
	int32_t x199 = 1;
	volatile int16_t x200 = INT16_MIN;
	int32_t t49 = -1;

    t49 = (((x197|x198)>x199)|x200);

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x201 = UINT16_MAX;
	int32_t x203 = 2;
	volatile uint32_t x204 = 4U;
	uint32_t t50 = 50U;

    t50 = (((x201|x202)>x203)|x204);

    if (t50 != 5U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 57886U;
	uint16_t x206 = 59U;
	int32_t x207 = INT32_MIN;
	int16_t x208 = -1;
	static int32_t t51 = 11947710;

    t51 = (((x205|x206)>x207)|x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MAX;
	int64_t x210 = -82LL;
	uint16_t x211 = 4U;
	volatile uint8_t x212 = 2U;
	static volatile int32_t t52 = -5;

    t52 = (((x209|x210)>x211)|x212);

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x214 = 95641537U;
	static int64_t x215 = -85863051283679LL;
	volatile int32_t t53 = 1029;

    t53 = (((x213|x214)>x215)|x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 1372806158U;
	int64_t x219 = -2744134020385LL;
	int8_t x220 = INT8_MAX;

    t54 = (((x217|x218)>x219)|x220);

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -1892389963298LL;
	volatile int8_t x222 = 10;
	int64_t x223 = INT64_MAX;
	static volatile int32_t x224 = INT32_MAX;
	int32_t t55 = INT32_MAX;

    t55 = (((x221|x222)>x223)|x224);

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	static int32_t x226 = INT32_MIN;
	int32_t x227 = INT32_MAX;
	volatile uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = 940754865;

    t56 = (((x225|x226)>x227)|x228);

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MAX;
	uint32_t x231 = 6U;
	int8_t x232 = -1;
	int32_t t57 = -151357617;

    t57 = (((x229|x230)>x231)|x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x233 = 2U;
	int64_t x234 = -364814357904LL;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = 3U;

    t58 = (((x233|x234)>x235)|x236);

    if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;

    t59 = (((x237|x238)>x239)|x240);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	int16_t x243 = INT16_MIN;
	volatile uint32_t x244 = 156564U;
	static uint32_t t60 = 925191U;

    t60 = (((x241|x242)>x243)|x244);

    if (t60 != 156565U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	static int8_t x246 = -1;
	int16_t x247 = -1;

    t61 = (((x245|x246)>x247)|x248);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MIN;
	uint8_t x250 = 0U;
	int8_t x251 = INT8_MAX;
	volatile int32_t t62 = 9;

    t62 = (((x249|x250)>x251)|x252);

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -2;
	volatile int16_t x255 = 791;
	int32_t t63 = INT32_MAX;

    t63 = (((x253|x254)>x255)|x256);

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 3U;
	volatile int32_t x258 = 0;
	static uint32_t x259 = UINT32_MAX;
	volatile uint64_t t64 = 9147199625521504LLU;

    t64 = (((x257|x258)>x259)|x260);

    if (t64 != 1111163161790757LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	static int32_t x263 = 2011;
	int16_t x264 = 21;
	int32_t t65 = 3;

    t65 = (((x261|x262)>x263)|x264);

    if (t65 != 21) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int16_t x266 = -1;
	int32_t x267 = -1972127;
	int64_t x268 = INT64_MIN;
	int64_t t66 = -4LL;

    t66 = (((x265|x266)>x267)|x268);

    if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = -4;
	static int32_t x270 = INT32_MIN;
	static int32_t x271 = INT32_MIN;
	uint64_t t67 = 2177LLU;

    t67 = (((x269|x270)>x271)|x272);

    if (t67 != 92666587LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = INT8_MIN;
	static volatile uint32_t x274 = 10U;
	uint32_t x275 = 155U;
	volatile int8_t x276 = INT8_MIN;
	int32_t t68 = -777;

    t68 = (((x273|x274)>x275)|x276);

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x278 = -7375;
	int64_t x279 = 704191973LL;
	int32_t x280 = 48;

    t69 = (((x277|x278)>x279)|x280);

    if (t69 != 48) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x281 = UINT32_MAX;
	static int64_t x282 = 1324374037226123LL;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MAX;
	volatile int32_t t70 = 17;

    t70 = (((x281|x282)>x283)|x284);

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	static int8_t x286 = INT8_MIN;
	volatile int64_t x287 = INT64_MIN;
	volatile int8_t x288 = INT8_MIN;

    t71 = (((x285|x286)>x287)|x288);

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MAX;
	int8_t x292 = -25;
	static int32_t t72 = -392399373;

    t72 = (((x289|x290)>x291)|x292);

    if (t72 != -25) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = INT8_MIN;
	int32_t x295 = -54960819;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = 631;

    t73 = (((x293|x294)>x295)|x296);

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MAX;
	volatile int16_t x298 = INT16_MAX;
	int16_t x300 = INT16_MIN;

    t74 = (((x297|x298)>x299)|x300);

    if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MAX;
	int64_t x304 = INT64_MIN;
	int64_t t75 = -13188802737676LL;

    t75 = (((x301|x302)>x303)|x304);

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = INT8_MAX;
	uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MAX;
	static volatile int32_t t76 = -220;

    t76 = (((x305|x306)>x307)|x308);

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x310 = 6U;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	static int32_t t77 = 31;

    t77 = (((x309|x310)>x311)|x312);

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	int64_t x316 = -97019271186LL;
	int64_t t78 = 687572115572LL;

    t78 = (((x313|x314)>x315)|x316);

    if (t78 != -97019271185LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x317 = 40U;
	int16_t x318 = INT16_MIN;
	static volatile int64_t x319 = INT64_MIN;
	static uint32_t x320 = 26U;
	volatile uint32_t t79 = 0U;

    t79 = (((x317|x318)>x319)|x320);

    if (t79 != 27U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = UINT8_MAX;
	int64_t x322 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	int8_t x324 = 0;
	int32_t t80 = 0;

    t80 = (((x321|x322)>x323)|x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x326 = INT32_MIN;
	static uint32_t x328 = 1593284U;
	uint32_t t81 = 206U;

    t81 = (((x325|x326)>x327)|x328);

    if (t81 != 1593284U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 40467U;
	volatile int16_t x330 = INT16_MAX;
	int64_t x331 = -1LL;
	int16_t x332 = -374;
	static volatile int32_t t82 = 23;

    t82 = (((x329|x330)>x331)|x332);

    if (t82 != -373) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = INT32_MAX;
	volatile int8_t x334 = -1;
	volatile int32_t x336 = INT32_MAX;
	int32_t t83 = INT32_MAX;

    t83 = (((x333|x334)>x335)|x336);

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x338 = INT64_MIN;
	int8_t x339 = -1;
	int32_t x340 = 1443;
	volatile int32_t t84 = 2897092;

    t84 = (((x337|x338)>x339)|x340);

    if (t84 != 1443) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MIN;
	int8_t x342 = 0;
	volatile int8_t x343 = INT8_MIN;
	uint8_t x344 = 2U;
	static int32_t t85 = -28205090;

    t85 = (((x341|x342)>x343)|x344);

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 793747;
	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MAX;
	volatile int32_t x348 = -1;
	static int32_t t86 = -989;

    t86 = (((x345|x346)>x347)|x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 1897U;
	uint8_t x350 = 68U;
	static int64_t x351 = INT64_MIN;
	int64_t x352 = -1LL;
	static volatile int64_t t87 = 562661541994LL;

    t87 = (((x349|x350)>x351)|x352);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = INT32_MIN;
	volatile int64_t x355 = INT64_MAX;
	int32_t x356 = -1;
	static volatile int32_t t88 = -10133773;

    t88 = (((x353|x354)>x355)|x356);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 1U;
	static volatile int32_t t89 = -125;

    t89 = (((x357|x358)>x359)|x360);

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	static int16_t x362 = INT16_MAX;
	int64_t x363 = -1LL;
	int8_t x364 = INT8_MAX;
	int32_t t90 = -665131;

    t90 = (((x361|x362)>x363)|x364);

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x365 = INT8_MAX;
	volatile int16_t x366 = -944;
	int8_t x368 = -1;
	volatile int32_t t91 = 110088;

    t91 = (((x365|x366)>x367)|x368);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x369 = 3;
	int64_t x371 = -27592638736LL;
	volatile uint16_t x372 = 2983U;
	volatile int32_t t92 = -112833013;

    t92 = (((x369|x370)>x371)|x372);

    if (t92 != 2983) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x374 = -1;
	int64_t x375 = INT64_MAX;

    t93 = (((x373|x374)>x375)|x376);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int8_t x378 = 0;
	int32_t x379 = -459155696;
	volatile int64_t x380 = INT64_MIN;
	int64_t t94 = INT64_MIN;

    t94 = (((x377|x378)>x379)|x380);

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = -1;
	int8_t x383 = 50;
	int32_t t95 = 28378909;

    t95 = (((x381|x382)>x383)|x384);

    if (t95 != 239) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = UINT64_MAX;
	int32_t x386 = -3205;
	uint16_t x387 = 14927U;
	static volatile int32_t t96 = 373033252;

    t96 = (((x385|x386)>x387)|x388);

    if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 5164U;
	int16_t x390 = 124;
	int16_t x391 = INT16_MIN;
	int16_t x392 = -448;

    t97 = (((x389|x390)>x391)|x392);

    if (t97 != -448) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x394 = INT8_MAX;
	static volatile int32_t t98 = INT32_MAX;

    t98 = (((x393|x394)>x395)|x396);

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = -1;
	static uint64_t x398 = UINT64_MAX;
	volatile int32_t t99 = -880348;

    t99 = (((x397|x398)>x399)|x400);

    if (t99 != 49) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x403 = -1;
	static int8_t x404 = -1;
	volatile int32_t t100 = -26;

    t100 = (((x401|x402)>x403)|x404);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = INT32_MIN;
	static int8_t x406 = INT8_MIN;
	int32_t x407 = -1695861;
	static uint64_t x408 = 2040668813271LLU;
	volatile uint64_t t101 = 135LLU;

    t101 = (((x405|x406)>x407)|x408);

    if (t101 != 2040668813271LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = -345;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = UINT32_MAX;
	uint16_t x412 = 1446U;
	int32_t t102 = -128621001;

    t102 = (((x409|x410)>x411)|x412);

    if (t102 != 1446) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -28;
	uint32_t x414 = 1U;
	uint32_t t103 = 31692694U;

    t103 = (((x413|x414)>x415)|x416);

    if (t103 != 54277U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = -1;
	volatile int32_t x418 = 3032237;
	uint32_t x419 = UINT32_MAX;
	static int64_t t104 = INT64_MIN;

    t104 = (((x417|x418)>x419)|x420);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = 65U;
	volatile int64_t x422 = INT64_MIN;
	int16_t x423 = 11;
	uint16_t x424 = 1U;

    t105 = (((x421|x422)>x423)|x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = INT8_MIN;
	volatile int16_t x427 = -5;
	uint64_t x428 = 223LLU;

    t106 = (((x425|x426)>x427)|x428);

    if (t106 != 223LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 1041633LLU;
	int32_t x430 = 90;
	static volatile int16_t x431 = -1;
	uint64_t x432 = 785869812596LLU;
	uint64_t t107 = 4204449017LLU;

    t107 = (((x429|x430)>x431)|x432);

    if (t107 != 785869812596LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	static volatile int64_t x435 = INT64_MIN;

    t108 = (((x433|x434)>x435)|x436);

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	volatile uint32_t x440 = 873643720U;
	static volatile uint32_t t109 = 99U;

    t109 = (((x437|x438)>x439)|x440);

    if (t109 != 873643721U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x443 = 40932878LLU;
	int8_t x444 = -62;
	volatile int32_t t110 = -7;

    t110 = (((x441|x442)>x443)|x444);

    if (t110 != -61) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	static int16_t x446 = -1;
	int32_t x447 = INT32_MIN;
	int32_t x448 = INT32_MIN;
	volatile int32_t t111 = -115;

    t111 = (((x445|x446)>x447)|x448);

    if (t111 != -2147483647) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	int32_t x450 = -31112;
	uint8_t x451 = 111U;
	static int16_t x452 = -43;
	volatile int32_t t112 = 62;

    t112 = (((x449|x450)>x451)|x452);

    if (t112 != -43) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x453 = 19U;
	volatile int16_t x454 = INT16_MIN;
	uint64_t x455 = 42182876646LLU;
	int16_t x456 = INT16_MIN;

    t113 = (((x453|x454)>x455)|x456);

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = -5024;
	static int16_t x458 = -1;
	volatile int8_t x459 = -24;
	uint16_t x460 = 12U;
	int32_t t114 = 950;

    t114 = (((x457|x458)>x459)|x460);

    if (t114 != 13) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = -1;
	int32_t x462 = INT32_MIN;
	static int64_t x463 = INT64_MAX;
	int8_t x464 = INT8_MAX;
	int32_t t115 = 922;

    t115 = (((x461|x462)>x463)|x464);

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x466 = 4644931921LLU;
	uint32_t x467 = UINT32_MAX;
	int32_t t116 = -785924376;

    t116 = (((x465|x466)>x467)|x468);

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	static int16_t x470 = -1;
	static volatile int16_t x471 = INT16_MAX;
	uint64_t x472 = 18LLU;

    t117 = (((x469|x470)>x471)|x472);

    if (t117 != 18LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = -1;
	int16_t x474 = INT16_MAX;
	int16_t x475 = -1;
	int16_t x476 = -44;

    t118 = (((x473|x474)>x475)|x476);

    if (t118 != -44) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = INT64_MIN;
	uint64_t x478 = 15248717134820LLU;
	int32_t x479 = INT32_MAX;
	static volatile int8_t x480 = INT8_MIN;
	int32_t t119 = 1050;

    t119 = (((x477|x478)>x479)|x480);

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 0U;
	int16_t x482 = INT16_MIN;
	int16_t x483 = INT16_MAX;
	int64_t x484 = INT64_MAX;
	static volatile int64_t t120 = INT64_MAX;

    t120 = (((x481|x482)>x483)|x484);

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x485 = 4119320U;
	volatile int16_t x486 = INT16_MAX;
	static volatile uint32_t x487 = UINT32_MAX;
	int32_t x488 = INT32_MIN;
	volatile int32_t t121 = INT32_MIN;

    t121 = (((x485|x486)>x487)|x488);

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x490 = INT64_MIN;
	static uint64_t t122 = UINT64_MAX;

    t122 = (((x489|x490)>x491)|x492);

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	static uint64_t x495 = UINT64_MAX;
	volatile int64_t t123 = INT64_MAX;

    t123 = (((x493|x494)>x495)|x496);

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = 797635123U;
	volatile int64_t x498 = INT64_MIN;
	int16_t x499 = INT16_MIN;
	volatile uint64_t x500 = 222632488LLU;

    t124 = (((x497|x498)>x499)|x500);

    if (t124 != 222632488LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = 3;
	volatile uint16_t x503 = 30131U;
	int8_t x504 = 0;
	int32_t t125 = 197383398;

    t125 = (((x501|x502)>x503)|x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MAX;
	int64_t x506 = -4041455910436LL;
	int8_t x507 = INT8_MIN;
	int16_t x508 = -24;
	int32_t t126 = 506;

    t126 = (((x505|x506)>x507)|x508);

    if (t126 != -24) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 3U;
	volatile int8_t x510 = 15;
	int32_t x511 = INT32_MAX;
	int32_t x512 = 833;
	int32_t t127 = -574491;

    t127 = (((x509|x510)>x511)|x512);

    if (t127 != 833) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x514 = 14531611U;
	int32_t x515 = -1;
	int16_t x516 = -1;
	static volatile int32_t t128 = -377511936;

    t128 = (((x513|x514)>x515)|x516);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	int64_t x519 = -1LL;
	static int32_t t129 = -113;

    t129 = (((x517|x518)>x519)|x520);

    if (t129 != 6126) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = 171U;
	uint64_t x522 = 435631778LLU;
	int8_t x523 = INT8_MIN;
	int16_t x524 = INT16_MIN;
	static volatile int32_t t130 = -1600287;

    t130 = (((x521|x522)>x523)|x524);

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -2;
	static uint16_t x526 = 70U;
	uint64_t x527 = 2379937LLU;
	uint8_t x528 = 7U;
	int32_t t131 = -20159;

    t131 = (((x525|x526)>x527)|x528);

    if (t131 != 7) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = -3;
	int16_t x530 = 2;
	static volatile int64_t x531 = INT64_MIN;
	int8_t x532 = INT8_MIN;

    t132 = (((x529|x530)>x531)|x532);

    if (t132 != -127) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x533 = INT32_MIN;
	volatile int16_t x534 = INT16_MIN;
	volatile int16_t x536 = -1;
	volatile int32_t t133 = 543;

    t133 = (((x533|x534)>x535)|x536);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x540 = -1;
	static volatile int32_t t134 = 15922;

    t134 = (((x537|x538)>x539)|x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	int32_t x542 = 0;
	static int16_t x543 = INT16_MAX;
	int16_t x544 = -1;
	volatile int32_t t135 = -996162;

    t135 = (((x541|x542)>x543)|x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	uint16_t x546 = 14U;
	static int32_t x547 = -18093;
	static uint64_t x548 = 2608196947LLU;
	uint64_t t136 = 57799116191675LLU;

    t136 = (((x545|x546)>x547)|x548);

    if (t136 != 2608196947LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x550 = 126813630U;
	volatile int64_t x551 = 1374397239732LL;
	int32_t x552 = INT32_MAX;

    t137 = (((x549|x550)>x551)|x552);

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -3;
	uint16_t x554 = 3477U;
	volatile int32_t x555 = -290888071;

    t138 = (((x553|x554)>x555)|x556);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = -135553;
	static int16_t x558 = INT16_MAX;
	uint64_t x559 = UINT64_MAX;
	int32_t x560 = -1;
	volatile int32_t t139 = -3;

    t139 = (((x557|x558)>x559)|x560);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = INT32_MIN;
	int64_t x562 = INT64_MIN;
	int16_t x563 = -5128;
	volatile int8_t x564 = -3;
	int32_t t140 = 987929225;

    t140 = (((x561|x562)>x563)|x564);

    if (t140 != -3) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	int16_t x566 = -825;
	uint32_t x567 = 10U;
	int8_t x568 = INT8_MAX;
	int32_t t141 = -119066;

    t141 = (((x565|x566)>x567)|x568);

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	static int8_t x570 = INT8_MIN;
	int32_t x571 = -1;
	volatile int32_t t142 = 7;

    t142 = (((x569|x570)>x571)|x572);

    if (t142 != -215) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x574 = INT32_MIN;
	int64_t x575 = INT64_MAX;
	uint16_t x576 = 3604U;
	int32_t t143 = 21354581;

    t143 = (((x573|x574)>x575)|x576);

    if (t143 != 3604) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = -425;
	static volatile uint64_t x578 = 34309429629LLU;
	uint8_t x579 = 1U;
	static int8_t x580 = INT8_MAX;
	int32_t t144 = -68129183;

    t144 = (((x577|x578)>x579)|x580);

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	int64_t x582 = INT64_MAX;
	int8_t x583 = INT8_MAX;
	int32_t x584 = -14291422;
	int32_t t145 = 178;

    t145 = (((x581|x582)>x583)|x584);

    if (t145 != -14291422) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	static int8_t x586 = -1;
	uint8_t x587 = 0U;
	static volatile uint64_t x588 = 405678LLU;
	volatile uint64_t t146 = 228413259613456LLU;

    t146 = (((x585|x586)>x587)|x588);

    if (t146 != 405678LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 6U;
	uint32_t x590 = 264498139U;
	int64_t x591 = -1LL;

    t147 = (((x589|x590)>x591)|x592);

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MAX;
	static int32_t x595 = -1;
	int32_t x596 = INT32_MIN;

    t148 = (((x593|x594)>x595)|x596);

    if (t148 != INT32_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	int16_t x600 = INT16_MIN;
	int32_t t149 = -662045;

    t149 = (((x597|x598)>x599)|x600);

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	volatile int8_t x603 = -1;
	int32_t x604 = -1;
	volatile int32_t t150 = 7481;

    t150 = (((x601|x602)>x603)|x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x605 = INT8_MAX;
	int64_t x606 = INT64_MIN;
	uint8_t x607 = UINT8_MAX;

    t151 = (((x605|x606)>x607)|x608);

    if (t151 != -586777453745070LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	uint64_t x610 = 4110849LLU;
	uint16_t x611 = 3094U;
	int32_t x612 = INT32_MAX;
	int32_t t152 = INT32_MAX;

    t152 = (((x609|x610)>x611)|x612);

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = INT16_MIN;
	int16_t x614 = INT16_MIN;
	int16_t x615 = 16;
	volatile int64_t t153 = INT64_MAX;

    t153 = (((x613|x614)>x615)|x616);

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = -1;
	static uint8_t x618 = 102U;
	int32_t x619 = 870;
	volatile int64_t t154 = INT64_MIN;

    t154 = (((x617|x618)>x619)|x620);

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = -1;
	int64_t x622 = 1856332LL;
	uint64_t x623 = UINT64_MAX;
	int64_t x624 = -90LL;
	volatile int64_t t155 = -7LL;

    t155 = (((x621|x622)>x623)|x624);

    if (t155 != -90LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -1;
	volatile int32_t x627 = INT32_MIN;
	volatile int32_t x628 = -221608950;
	volatile int32_t t156 = -4106;

    t156 = (((x625|x626)>x627)|x628);

    if (t156 != -221608949) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 0;
	uint64_t x630 = 19150748486LLU;
	int8_t x631 = INT8_MAX;
	uint16_t x632 = 14U;
	int32_t t157 = -1;

    t157 = (((x629|x630)>x631)|x632);

    if (t157 != 15) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = INT8_MIN;
	int8_t x634 = INT8_MIN;
	static uint16_t x635 = UINT16_MAX;
	volatile uint8_t x636 = UINT8_MAX;
	int32_t t158 = -53139;

    t158 = (((x633|x634)>x635)|x636);

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x637 = UINT8_MAX;
	uint32_t x638 = 438U;
	uint64_t x639 = 34113LLU;
	uint8_t x640 = 4U;
	volatile int32_t t159 = 3398041;

    t159 = (((x637|x638)>x639)|x640);

    if (t159 != 4) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	int32_t x644 = 110119;
	volatile int32_t t160 = -196;

    t160 = (((x641|x642)>x643)|x644);

    if (t160 != 110119) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = INT8_MIN;
	volatile int8_t x646 = 8;
	uint32_t x648 = 10156225U;
	volatile uint32_t t161 = 420307115U;

    t161 = (((x645|x646)>x647)|x648);

    if (t161 != 10156225U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -1;
	int32_t x650 = INT32_MIN;
	int8_t x651 = INT8_MIN;
	volatile int64_t x652 = INT64_MIN;
	static volatile int64_t t162 = 110LL;

    t162 = (((x649|x650)>x651)|x652);

    if (t162 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	int32_t x654 = -1573;
	int32_t x655 = INT32_MAX;
	static uint16_t x656 = UINT16_MAX;
	static int32_t t163 = 74153142;

    t163 = (((x653|x654)>x655)|x656);

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	int8_t x658 = INT8_MIN;
	int32_t x659 = INT32_MIN;
	uint8_t x660 = UINT8_MAX;
	static int32_t t164 = -207;

    t164 = (((x657|x658)>x659)|x660);

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 12726;
	int32_t x662 = -6195;
	uint64_t x663 = 13383620460603LLU;
	static volatile int8_t x664 = -23;

    t165 = (((x661|x662)>x663)|x664);

    if (t165 != -23) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int64_t x666 = INT64_MAX;
	static int8_t x667 = INT8_MIN;
	volatile int32_t t166 = 151171;

    t166 = (((x665|x666)>x667)|x668);

    if (t166 != 9) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x670 = 823LLU;
	volatile int8_t x671 = INT8_MAX;
	int8_t x672 = INT8_MIN;
	static int32_t t167 = 301738;

    t167 = (((x669|x670)>x671)|x672);

    if (t167 != -127) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 543;
	int16_t x675 = INT16_MIN;
	static int8_t x676 = -3;
	volatile int32_t t168 = -6159;

    t168 = (((x673|x674)>x675)|x676);

    if (t168 != -3) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MAX;
	uint32_t x678 = 68199U;
	int16_t x680 = INT16_MAX;
	volatile int32_t t169 = 7767355;

    t169 = (((x677|x678)>x679)|x680);

    if (t169 != 32767) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	volatile int16_t x683 = 311;
	volatile uint32_t x684 = 228934U;
	static uint32_t t170 = 6U;

    t170 = (((x681|x682)>x683)|x684);

    if (t170 != 228934U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = -1LL;
	uint16_t x686 = 14U;
	uint64_t x687 = UINT64_MAX;
	volatile int32_t x688 = 545;
	volatile int32_t t171 = 7040;

    t171 = (((x685|x686)>x687)|x688);

    if (t171 != 545) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 623237818LLU;
	int32_t x690 = INT32_MIN;
	volatile uint8_t x691 = 0U;
	volatile int64_t t172 = -154274LL;

    t172 = (((x689|x690)>x691)|x692);

    if (t172 != 91021LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = INT64_MAX;
	int16_t x694 = 46;
	uint8_t x695 = UINT8_MAX;
	uint64_t x696 = UINT64_MAX;
	uint64_t t173 = UINT64_MAX;

    t173 = (((x693|x694)>x695)|x696);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -2;
	int16_t x698 = INT16_MAX;
	uint32_t x699 = UINT32_MAX;
	int64_t x700 = 68432683449680LL;
	static int64_t t174 = 444126191305LL;

    t174 = (((x697|x698)>x699)|x700);

    if (t174 != 68432683449680LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 5U;
	static uint32_t x702 = 6042573U;
	volatile uint32_t x703 = 33089U;
	static int32_t x704 = INT32_MIN;
	int32_t t175 = -43826;

    t175 = (((x701|x702)>x703)|x704);

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 22957U;
	int64_t x707 = 1LL;
	uint64_t x708 = UINT64_MAX;
	static uint64_t t176 = UINT64_MAX;

    t176 = (((x705|x706)>x707)|x708);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	int8_t x710 = 6;
	int32_t x711 = INT32_MIN;
	int64_t t177 = -4364LL;

    t177 = (((x709|x710)>x711)|x712);

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 3095444727565129410LLU;
	uint32_t x714 = UINT32_MAX;
	static int8_t x716 = -1;

    t178 = (((x713|x714)>x715)|x716);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 468819U;
	static int32_t x718 = 26;
	uint32_t x719 = 22324100U;
	int8_t x720 = -1;

    t179 = (((x717|x718)>x719)|x720);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = 457LL;
	int32_t x722 = -798;
	static uint8_t x723 = 58U;
	uint32_t x724 = UINT32_MAX;

    t180 = (((x721|x722)>x723)|x724);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	int32_t x726 = INT32_MIN;
	static volatile uint16_t x727 = 22U;

    t181 = (((x725|x726)>x727)|x728);

    if (t181 != 202284618861899425LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 0U;
	int8_t x731 = INT8_MAX;
	volatile int8_t x732 = INT8_MIN;
	volatile int32_t t182 = -192721749;

    t182 = (((x729|x730)>x731)|x732);

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = INT8_MIN;
	static uint16_t x734 = 8U;
	int16_t x735 = -92;
	int64_t x736 = 3995866461LL;
	volatile int64_t t183 = -256014152993LL;

    t183 = (((x733|x734)>x735)|x736);

    if (t183 != 3995866461LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 0U;
	static int8_t x738 = INT8_MAX;
	int16_t x739 = -1;
	static int64_t x740 = INT64_MIN;

    t184 = (((x737|x738)>x739)|x740);

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MIN;
	int64_t x742 = INT64_MIN;
	static int64_t x744 = INT64_MAX;
	volatile int64_t t185 = INT64_MAX;

    t185 = (((x741|x742)>x743)|x744);

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	uint16_t x746 = UINT16_MAX;
	int8_t x747 = -1;
	volatile uint64_t x748 = 579LLU;
	uint64_t t186 = 2868471LLU;

    t186 = (((x745|x746)>x747)|x748);

    if (t186 != 579LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = 131915866LL;
	uint32_t x750 = 27589735U;
	int64_t x752 = -35140LL;
	int64_t t187 = 8096104468161403LL;

    t187 = (((x749|x750)>x751)|x752);

    if (t187 != -35139LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x755 = -1;
	int32_t t188 = INT32_MAX;

    t188 = (((x753|x754)>x755)|x756);

    if (t188 != INT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 342U;
	uint8_t x758 = 3U;
	int64_t x760 = INT64_MIN;
	static volatile int64_t t189 = 419LL;

    t189 = (((x757|x758)>x759)|x760);

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = -1;
	uint16_t x762 = 36U;
	volatile uint32_t x763 = 1580302U;
	int64_t x764 = -2023188LL;
	volatile int64_t t190 = 852880165LL;

    t190 = (((x761|x762)>x763)|x764);

    if (t190 != -2023187LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	int8_t x766 = 5;
	uint8_t x767 = UINT8_MAX;
	volatile int32_t t191 = -13013;

    t191 = (((x765|x766)>x767)|x768);

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = 3793;
	static uint16_t x770 = 308U;
	uint64_t x771 = 838558120973373218LLU;
	int32_t x772 = INT32_MAX;
	volatile int32_t t192 = INT32_MAX;

    t192 = (((x769|x770)>x771)|x772);

    if (t192 != INT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x773 = 1550;
	uint64_t x775 = 15037246163653045LLU;
	int64_t x776 = -1LL;

    t193 = (((x773|x774)>x775)|x776);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x778 = INT32_MAX;
	uint16_t x779 = 2U;
	int16_t x780 = INT16_MIN;

    t194 = (((x777|x778)>x779)|x780);

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 4261584857635LLU;
	int16_t x783 = INT16_MAX;
	volatile uint64_t x784 = 14523475631LLU;
	uint64_t t195 = 360796LLU;

    t195 = (((x781|x782)>x783)|x784);

    if (t195 != 14523475631LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = -132;
	uint64_t x786 = 539809449292LLU;
	volatile int32_t x787 = INT32_MAX;
	volatile int8_t x788 = INT8_MIN;
	int32_t t196 = 13;

    t196 = (((x785|x786)>x787)|x788);

    if (t196 != -127) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	static volatile int8_t x790 = -1;
	int64_t x791 = -1LL;
	volatile int32_t x792 = INT32_MAX;
	int32_t t197 = INT32_MAX;

    t197 = (((x789|x790)>x791)|x792);

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x793 = 0U;
	static int32_t x794 = INT32_MAX;
	static int64_t x796 = 108498569635LL;
	static int64_t t198 = -2509016LL;

    t198 = (((x793|x794)>x795)|x796);

    if (t198 != 108498569635LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	volatile uint8_t x798 = UINT8_MAX;
	int8_t x800 = -1;
	volatile int32_t t199 = 164;

    t199 = (((x797|x798)>x799)|x800);

    if (t199 != -1) { NG(); } else { ; }
	
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

