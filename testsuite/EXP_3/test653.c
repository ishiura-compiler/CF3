
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

static uint16_t x3 = 26184U;
int64_t x10 = INT64_MIN;
volatile int8_t x11 = -1;
static uint8_t x13 = 3U;
int16_t x18 = -1;
uint32_t x31 = 8256772U;
uint8_t x34 = 3U;
volatile int32_t t8 = -1034;
static uint32_t x39 = UINT32_MAX;
int32_t t9 = 2518;
uint16_t x41 = UINT16_MAX;
int32_t x48 = 233053458;
volatile int32_t t11 = -12265016;
volatile uint64_t x52 = 3425771674054LLU;
int16_t x61 = -456;
int64_t x62 = 549736652876LL;
int64_t x78 = INT64_MIN;
int64_t x79 = -1LL;
static uint8_t x80 = 15U;
volatile int32_t t20 = -2388;
int8_t x85 = -36;
static volatile int32_t x86 = INT32_MIN;
volatile uint32_t x100 = UINT32_MAX;
int16_t x110 = 332;
uint16_t x117 = 4227U;
volatile uint64_t x120 = 14851232863253094LLU;
static int8_t x121 = INT8_MAX;
volatile int32_t x122 = -1;
int32_t t30 = -32057442;
static int8_t x129 = 26;
static int8_t x143 = 63;
static volatile int16_t x145 = INT16_MAX;
int16_t x148 = INT16_MAX;
static int32_t t36 = 1339;
volatile int32_t t37 = -90986550;
int64_t x160 = 91LL;
int32_t x170 = 5824872;
volatile int32_t t44 = -149431;
uint16_t x184 = 171U;
int32_t t45 = 910;
int32_t t48 = 1398;
int16_t x198 = INT16_MAX;
int16_t x200 = -1;
uint32_t x201 = 1U;
static int64_t x204 = INT64_MAX;
uint8_t x208 = 26U;
static int32_t x211 = INT32_MIN;
volatile int32_t t52 = -227002864;
static uint64_t x213 = 20893885086175LLU;
int32_t t53 = 961661;
int16_t x225 = 2;
volatile int32_t t55 = 0;
static int64_t x229 = INT64_MAX;
int32_t t56 = -817532340;
volatile int32_t x234 = INT32_MIN;
int8_t x236 = INT8_MIN;
static int32_t x239 = -1;
static int32_t t58 = -55712359;
volatile int16_t x243 = 1;
uint32_t x247 = 1253888U;
int8_t x257 = -1;
int16_t x263 = 1;
int8_t x264 = INT8_MAX;
volatile int32_t t64 = 33462;
int32_t t65 = 435126;
volatile int16_t x271 = INT16_MIN;
uint32_t x276 = 601470U;
int64_t x277 = INT64_MIN;
int32_t x283 = 14506469;
volatile int32_t t69 = -251909;
volatile uint32_t x290 = 625354U;
volatile int8_t x291 = INT8_MIN;
int8_t x302 = -9;
volatile uint16_t x304 = 2U;
static uint64_t x306 = 92016585349112869LLU;
uint8_t x307 = 5U;
uint32_t x316 = UINT32_MAX;
static int32_t x317 = -1;
int16_t x323 = -1;
int64_t x325 = INT64_MAX;
uint64_t x332 = 251LLU;
uint16_t x340 = UINT16_MAX;
int8_t x342 = -26;
int32_t t83 = 69586097;
uint32_t x346 = 7499685U;
static int8_t x350 = -1;
uint8_t x354 = UINT8_MAX;
static volatile int32_t t86 = -30632;
static int16_t x369 = 1;
int32_t t90 = 3572;
int64_t x373 = INT64_MAX;
int8_t x374 = -1;
volatile int32_t t91 = -4178774;
static volatile uint32_t x378 = 32705711U;
int8_t x379 = INT8_MIN;
int32_t x380 = -2688;
int32_t x381 = 1;
uint64_t x383 = 133520LLU;
int32_t t94 = 91452387;
int16_t x392 = 1;
uint64_t x393 = 310283608941487LLU;
uint32_t x399 = UINT32_MAX;
int32_t t98 = -11161;
int16_t x405 = -1;
int64_t x407 = -1LL;
int8_t x408 = -11;
volatile uint64_t x423 = UINT64_MAX;
static int64_t x425 = INT64_MIN;
uint32_t x427 = 285U;
uint16_t x436 = 1U;
static int32_t t105 = 13248;
static volatile int32_t t106 = 139207;
int32_t x450 = 3;
uint32_t x458 = 17231500U;
static volatile uint8_t x467 = 56U;
volatile int16_t x469 = 0;
static uint32_t x471 = 1530186U;
volatile uint8_t x479 = 10U;
static int64_t x482 = 524940299LL;
uint16_t x483 = UINT16_MAX;
static int16_t x484 = INT16_MIN;
static int32_t x490 = INT32_MIN;
int64_t x491 = INT64_MIN;
int16_t x495 = -1;
uint8_t x507 = 45U;
int32_t t120 = -111471732;
static int32_t t121 = 7161;
int8_t x524 = -5;
int32_t t123 = 1025716;
volatile uint8_t x526 = 3U;
volatile uint32_t x539 = 95510U;
volatile int8_t x541 = -1;
volatile int32_t t128 = 976109;
int64_t x549 = -632LL;
int8_t x552 = -18;
static int16_t x554 = INT16_MAX;
static int64_t x555 = INT64_MAX;
int16_t x557 = -1;
int16_t x563 = INT16_MIN;
int16_t x564 = -8113;
uint16_t x570 = UINT16_MAX;
int32_t t136 = -6;
static volatile uint8_t x584 = UINT8_MAX;
uint8_t x585 = 16U;
int32_t x587 = INT32_MIN;
int64_t x596 = INT64_MIN;
uint16_t x597 = UINT16_MAX;
int64_t x603 = 230LL;
uint8_t x611 = 80U;
static uint16_t x620 = 40U;
volatile int64_t x626 = -1LL;
uint8_t x628 = 7U;
int8_t x629 = -1;
int64_t x639 = 282156LL;
int32_t x642 = 33;
uint8_t x645 = 86U;
int8_t x646 = INT8_MIN;
int64_t x655 = INT64_MIN;
uint8_t x662 = 11U;
int64_t x668 = 18067402080807LL;
uint64_t x671 = 0LLU;
static volatile int8_t x676 = INT8_MIN;
static int32_t t159 = 5307089;
int16_t x681 = INT16_MAX;
static volatile int32_t t160 = 827566;
int8_t x686 = INT8_MIN;
int8_t x687 = -3;
uint16_t x688 = UINT16_MAX;
int32_t t162 = 11662625;
volatile int32_t t163 = 90;
volatile int8_t x697 = 55;
static uint16_t x699 = 12U;
static uint64_t x700 = 162604806502268LLU;
int32_t x702 = INT32_MIN;
uint64_t x703 = 73211916897139809LLU;
volatile int32_t t166 = -56467249;
int32_t x715 = 14;
int32_t t167 = 288539;
int64_t x723 = 1159330LL;
int8_t x727 = -1;
int64_t x731 = -10912819854552LL;
uint8_t x736 = UINT8_MAX;
volatile int32_t t172 = -121087;
uint8_t x738 = 21U;
uint16_t x746 = 79U;
uint32_t x747 = 2421155U;
int32_t t178 = 609229;
volatile int16_t x769 = -6541;
uint64_t x770 = UINT64_MAX;
volatile int32_t t181 = 2304566;
int16_t x779 = INT16_MAX;
int32_t t185 = -4133892;
uint8_t x789 = 18U;
uint16_t x791 = 7U;
int32_t x793 = INT32_MIN;
int8_t x794 = -3;
static volatile int16_t x799 = INT16_MIN;
uint8_t x801 = UINT8_MAX;
int32_t x804 = -4;
int32_t t189 = -88004588;
int8_t x809 = INT8_MIN;
int32_t t191 = 6;
int16_t x814 = -2540;
static int16_t x815 = INT16_MAX;
int32_t x817 = 386;
int8_t x824 = -13;
volatile int32_t t194 = -995771357;
int16_t x826 = INT16_MIN;
uint8_t x843 = 1U;
volatile int16_t x847 = INT16_MIN;


void f0(void) {
    	int32_t x1 = -5774108;
	int16_t x2 = INT16_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -11269450;

    t0 = ((x1%x2)>(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 471962799LLU;
	static volatile int16_t x6 = INT16_MIN;
	int16_t x7 = 50;
	uint64_t x8 = 29378LLU;
	volatile int32_t t1 = -27;

    t1 = ((x5%x6)>(x7/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x9 = UINT8_MAX;
	volatile int16_t x12 = INT16_MAX;
	int32_t t2 = 10670;

    t2 = ((x9%x10)>(x11/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	volatile int16_t x15 = -1;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 141210648;

    t3 = ((x13%x14)>(x15/x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MIN;
	int16_t x19 = INT16_MIN;
	int64_t x20 = -490351459492LL;
	static int32_t t4 = 1;

    t4 = ((x17%x18)>(x19/x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 899765712U;
	int8_t x22 = 16;
	int8_t x23 = 1;
	volatile int64_t x24 = 682LL;
	int32_t t5 = -216734982;

    t5 = ((x21%x22)>(x23/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = 1058199729159LL;
	int16_t x26 = 3;
	uint32_t x27 = 816U;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -577579411;

    t6 = ((x25%x26)>(x27/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 24LLU;
	uint64_t x30 = 19LLU;
	int16_t x32 = -462;
	volatile int32_t t7 = 14550;

    t7 = ((x29%x30)>(x31/x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 4625038697LLU;
	int64_t x35 = -1LL;
	uint16_t x36 = 31U;

    t8 = ((x33%x34)>(x35/x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x37 = 14LLU;
	static volatile int64_t x38 = -1LL;
	int8_t x40 = INT8_MIN;

    t9 = ((x37%x38)>(x39/x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = 6U;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = -1;
	static volatile int32_t t10 = -180125;

    t10 = ((x41%x42)>(x43/x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	uint32_t x46 = 37970U;
	uint32_t x47 = UINT32_MAX;

    t11 = ((x45%x46)>(x47/x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = -3;
	int8_t x50 = INT8_MIN;
	int8_t x51 = 7;
	int32_t t12 = 17;

    t12 = ((x49%x50)>(x51/x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 7U;
	int8_t x54 = INT8_MIN;
	static int64_t x55 = INT64_MAX;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = 47277269;

    t13 = ((x53%x54)>(x55/x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	static int64_t x58 = -1LL;
	static int32_t x59 = INT32_MIN;
	uint32_t x60 = 540950U;
	int32_t t14 = 692206275;

    t14 = ((x57%x58)>(x59/x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x63 = 547458772U;
	static int32_t x64 = 7466;
	static int32_t t15 = 907655;

    t15 = ((x61%x62)>(x63/x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 6699451886LLU;
	volatile uint64_t x66 = 55049829418LLU;
	static uint32_t x67 = 687692746U;
	volatile int64_t x68 = 2556707LL;
	int32_t t16 = -977;

    t16 = ((x65%x66)>(x67/x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 954239104U;
	static int8_t x70 = 1;
	int8_t x71 = -9;
	volatile uint16_t x72 = 196U;
	volatile int32_t t17 = 267309538;

    t17 = ((x69%x70)>(x71/x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int32_t x74 = INT32_MIN;
	static uint8_t x75 = 2U;
	uint32_t x76 = 383U;
	volatile int32_t t18 = 166;

    t18 = ((x73%x74)>(x75/x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	volatile int32_t t19 = 244079;

    t19 = ((x77%x78)>(x79/x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	static uint64_t x82 = 33319925096LLU;
	uint16_t x83 = UINT16_MAX;
	volatile int16_t x84 = -1;

    t20 = ((x81%x82)>(x83/x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x87 = 40;
	int16_t x88 = INT16_MAX;
	static int32_t t21 = -67623928;

    t21 = ((x85%x86)>(x87/x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MIN;
	uint8_t x90 = 1U;
	int64_t x91 = -22268984LL;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 1;

    t22 = ((x89%x90)>(x91/x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 2228;
	volatile uint8_t x94 = UINT8_MAX;
	int16_t x95 = -1;
	int64_t x96 = -404928122960801LL;
	static volatile int32_t t23 = -104825;

    t23 = ((x93%x94)>(x95/x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = UINT16_MAX;
	int32_t x98 = INT32_MAX;
	uint64_t x99 = 8670105061617316671LLU;
	volatile int32_t t24 = 0;

    t24 = ((x97%x98)>(x99/x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 7U;
	int32_t x102 = INT32_MIN;
	uint32_t x103 = UINT32_MAX;
	uint8_t x104 = 3U;
	volatile int32_t t25 = -36757;

    t25 = ((x101%x102)>(x103/x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 1248U;
	int16_t x106 = 93;
	uint32_t x107 = UINT32_MAX;
	volatile uint32_t x108 = 2191826U;
	volatile int32_t t26 = -3363;

    t26 = ((x105%x106)>(x107/x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = -1LL;
	int8_t x111 = INT8_MIN;
	volatile uint32_t x112 = 784747U;
	int32_t t27 = -35428059;

    t27 = ((x109%x110)>(x111/x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = 1U;
	int16_t x114 = 86;
	uint32_t x115 = 5269498U;
	volatile int32_t x116 = -3700784;
	volatile int32_t t28 = -445369037;

    t28 = ((x113%x114)>(x115/x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x118 = 23889U;
	int16_t x119 = INT16_MIN;
	volatile int32_t t29 = -1676;

    t29 = ((x117%x118)>(x119/x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x123 = INT64_MIN;
	int32_t x124 = 465068872;

    t30 = ((x121%x122)>(x123/x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = UINT64_MAX;
	volatile int16_t x126 = 126;
	volatile int16_t x127 = 208;
	uint16_t x128 = 3733U;
	int32_t t31 = 2066;

    t31 = ((x125%x126)>(x127/x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x130 = 204246299LLU;
	volatile int64_t x131 = -14426LL;
	uint64_t x132 = 131484LLU;
	int32_t t32 = -16131;

    t32 = ((x129%x130)>(x131/x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MIN;
	static uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MAX;
	int16_t x136 = 6;
	int32_t t33 = 1687;

    t33 = ((x133%x134)>(x135/x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = 56557072U;
	volatile int64_t x138 = -424093819692LL;
	uint64_t x139 = 2394376251LLU;
	int32_t x140 = INT32_MIN;
	static int32_t t34 = 9761627;

    t34 = ((x137%x138)>(x139/x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = -1;
	uint64_t x142 = 50747451LLU;
	static volatile int32_t x144 = INT32_MIN;
	int32_t t35 = 448;

    t35 = ((x141%x142)>(x143/x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = 5066427;
	static int8_t x147 = 3;

    t36 = ((x145%x146)>(x147/x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	static int8_t x150 = INT8_MIN;
	static int8_t x151 = -1;
	int16_t x152 = INT16_MIN;

    t37 = ((x149%x150)>(x151/x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	int64_t x154 = 1LL;
	volatile int32_t x155 = -5331694;
	volatile int8_t x156 = INT8_MAX;
	volatile int32_t t38 = 61535784;

    t38 = ((x153%x154)>(x155/x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 3001417U;
	int32_t x158 = -1;
	volatile int32_t x159 = 11;
	int32_t t39 = -115452;

    t39 = ((x157%x158)>(x159/x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int64_t x162 = 5LL;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	int32_t t40 = 3;

    t40 = ((x161%x162)>(x163/x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = -1;
	int8_t x166 = -38;
	static uint64_t x167 = 107207LLU;
	uint64_t x168 = UINT64_MAX;
	volatile int32_t t41 = 21133287;

    t41 = ((x165%x166)>(x167/x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = 2957487;
	static int16_t x171 = -1;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 46;

    t42 = ((x169%x170)>(x171/x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	int64_t x174 = 4165852630LL;
	static int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;
	int32_t t43 = -651;

    t43 = ((x173%x174)>(x175/x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	int32_t x178 = INT32_MAX;
	static int16_t x179 = -1;
	int8_t x180 = -1;

    t44 = ((x177%x178)>(x179/x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	volatile int64_t x182 = INT64_MIN;
	static uint8_t x183 = 56U;

    t45 = ((x181%x182)>(x183/x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	volatile uint8_t x186 = UINT8_MAX;
	uint32_t x187 = 1225813245U;
	volatile uint32_t x188 = 1U;
	int32_t t46 = 0;

    t46 = ((x185%x186)>(x187/x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x189 = 1786LLU;
	int8_t x190 = INT8_MIN;
	static int64_t x191 = INT64_MAX;
	uint64_t x192 = UINT64_MAX;
	int32_t t47 = 79184;

    t47 = ((x189%x190)>(x191/x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 67404703341230LLU;
	int8_t x194 = -12;
	volatile uint32_t x195 = 55U;
	int32_t x196 = INT32_MIN;

    t48 = ((x193%x194)>(x195/x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 1LLU;
	int64_t x199 = 7857LL;
	int32_t t49 = 119547911;

    t49 = ((x197%x198)>(x199/x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = -47;
	volatile uint32_t x203 = 62U;
	volatile int32_t t50 = -289;

    t50 = ((x201%x202)>(x203/x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x205 = INT8_MAX;
	volatile int8_t x206 = -1;
	int32_t x207 = -1;
	volatile int32_t t51 = -9549;

    t51 = ((x205%x206)>(x207/x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x209 = 63U;
	int64_t x210 = 5284044649697157LL;
	int64_t x212 = INT64_MIN;

    t52 = ((x209%x210)>(x211/x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x214 = -13;
	uint16_t x215 = UINT16_MAX;
	uint64_t x216 = 4257025564LLU;

    t53 = ((x213%x214)>(x215/x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x217 = 182049361U;
	static volatile int32_t x218 = -1;
	int16_t x219 = INT16_MAX;
	static int16_t x220 = 20;
	volatile int32_t t54 = -54;

    t54 = ((x217%x218)>(x219/x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x226 = 2026;
	volatile int16_t x227 = 1669;
	int32_t x228 = INT32_MIN;

    t55 = ((x225%x226)>(x227/x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x230 = 579169U;
	volatile int64_t x231 = INT64_MIN;
	uint8_t x232 = 17U;

    t56 = ((x229%x230)>(x231/x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x233 = 2LL;
	static volatile int32_t x235 = -1;
	int32_t t57 = -4549;

    t57 = ((x233%x234)>(x235/x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x237 = 1;
	static uint32_t x238 = UINT32_MAX;
	int32_t x240 = INT32_MIN;

    t58 = ((x237%x238)>(x239/x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MIN;
	volatile int64_t x244 = INT64_MAX;
	volatile int32_t t59 = 27451;

    t59 = ((x241%x242)>(x243/x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	uint64_t x248 = UINT64_MAX;
	int32_t t60 = 89;

    t60 = ((x245%x246)>(x247/x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x249 = UINT32_MAX;
	static int32_t x250 = 14;
	int64_t x251 = -1LL;
	int64_t x252 = INT64_MIN;
	static volatile int32_t t61 = 691238;

    t61 = ((x249%x250)>(x251/x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x253 = INT32_MIN;
	uint16_t x254 = 40U;
	int16_t x255 = 34;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t62 = 8872814;

    t62 = ((x253%x254)>(x255/x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x258 = -52;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	volatile int32_t t63 = -450;

    t63 = ((x257%x258)>(x259/x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = -53322;
	uint32_t x262 = UINT32_MAX;

    t64 = ((x261%x262)>(x263/x264));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	uint64_t x266 = UINT64_MAX;
	static int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MIN;

    t65 = ((x265%x266)>(x267/x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x269 = 1191;
	uint64_t x270 = UINT64_MAX;
	volatile int8_t x272 = 32;
	volatile int32_t t66 = -91;

    t66 = ((x269%x270)>(x271/x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x273 = 863759325920375LLU;
	static int64_t x274 = INT64_MIN;
	uint64_t x275 = 1931344438147167LLU;
	volatile int32_t t67 = -27;

    t67 = ((x273%x274)>(x275/x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	static int8_t x280 = INT8_MAX;
	volatile int32_t t68 = 57;

    t68 = ((x277%x278)>(x279/x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x281 = 12LLU;
	static int32_t x282 = -1;
	int16_t x284 = 1;

    t69 = ((x281%x282)>(x283/x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x285 = INT32_MIN;
	int32_t x286 = 1874508;
	volatile uint8_t x287 = 26U;
	int64_t x288 = INT64_MIN;
	int32_t t70 = 0;

    t70 = ((x285%x286)>(x287/x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -1;
	int32_t x292 = INT32_MAX;
	int32_t t71 = -15099;

    t71 = ((x289%x290)>(x291/x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x293 = UINT8_MAX;
	uint16_t x294 = 15U;
	int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MAX;
	volatile int32_t t72 = -82174179;

    t72 = ((x293%x294)>(x295/x296));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x297 = 0U;
	static uint16_t x298 = 1U;
	int32_t x299 = -1;
	int16_t x300 = -1;
	volatile int32_t t73 = -278731;

    t73 = ((x297%x298)>(x299/x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x301 = -1LL;
	int16_t x303 = -882;
	volatile int32_t t74 = -382;

    t74 = ((x301%x302)>(x303/x304));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x305 = 2LLU;
	int16_t x308 = INT16_MIN;
	volatile int32_t t75 = 0;

    t75 = ((x305%x306)>(x307/x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x313 = INT16_MAX;
	static int8_t x314 = INT8_MIN;
	static uint16_t x315 = 43U;
	int32_t t76 = 3189;

    t76 = ((x313%x314)>(x315/x316));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x318 = 5U;
	static int16_t x319 = INT16_MIN;
	int8_t x320 = -1;
	volatile int32_t t77 = 8082;

    t77 = ((x317%x318)>(x319/x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = -37;
	volatile uint16_t x322 = UINT16_MAX;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t78 = -1092;

    t78 = ((x321%x322)>(x323/x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x326 = INT8_MIN;
	uint64_t x327 = UINT64_MAX;
	uint8_t x328 = 9U;
	volatile int32_t t79 = -336663;

    t79 = ((x325%x326)>(x327/x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x329 = 24;
	int8_t x330 = -14;
	int8_t x331 = -3;
	static volatile int32_t t80 = 164;

    t80 = ((x329%x330)>(x331/x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 27U;
	int16_t x335 = INT16_MAX;
	volatile uint32_t x336 = UINT32_MAX;
	int32_t t81 = -1027;

    t81 = ((x333%x334)>(x335/x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x337 = INT64_MIN;
	static volatile int8_t x338 = -1;
	uint64_t x339 = 51108842233501797LLU;
	volatile int32_t t82 = 800556;

    t82 = ((x337%x338)>(x339/x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x341 = 7U;
	int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;

    t83 = ((x341%x342)>(x343/x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x345 = 55;
	static uint8_t x347 = 0U;
	static uint16_t x348 = UINT16_MAX;
	int32_t t84 = 2;

    t84 = ((x345%x346)>(x347/x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	static uint64_t x351 = 666791884624869370LLU;
	int32_t x352 = -294;
	int32_t t85 = 2975595;

    t85 = ((x349%x350)>(x351/x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x353 = -2744;
	int16_t x355 = -1;
	volatile int16_t x356 = -1;

    t86 = ((x353%x354)>(x355/x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x357 = 2U;
	int32_t x358 = INT32_MIN;
	int32_t x359 = -1;
	int32_t x360 = -1;
	int32_t t87 = 1643;

    t87 = ((x357%x358)>(x359/x360));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x361 = 45U;
	volatile int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t88 = 1;

    t88 = ((x361%x362)>(x363/x364));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x365 = 32831247359212245LLU;
	static int32_t x366 = -1;
	uint64_t x367 = 16388065504LLU;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t89 = -406894130;

    t89 = ((x365%x366)>(x367/x368));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x370 = 6745U;
	uint8_t x371 = 0U;
	int16_t x372 = INT16_MIN;

    t90 = ((x369%x370)>(x371/x372));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x375 = INT8_MIN;
	volatile int64_t x376 = INT64_MAX;

    t91 = ((x373%x374)>(x375/x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x377 = 0;
	volatile int32_t t92 = -7124;

    t92 = ((x377%x378)>(x379/x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x382 = UINT32_MAX;
	volatile uint64_t x384 = 51648022300857LLU;
	int32_t t93 = -171;

    t93 = ((x381%x382)>(x383/x384));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x385 = 30U;
	int64_t x386 = -1542750611814434754LL;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MIN;

    t94 = ((x385%x386)>(x387/x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MAX;
	int8_t x390 = 2;
	volatile int8_t x391 = -1;
	static int32_t t95 = 113564843;

    t95 = ((x389%x390)>(x391/x392));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x394 = INT8_MAX;
	uint8_t x395 = 3U;
	int8_t x396 = INT8_MIN;
	int32_t t96 = -139842;

    t96 = ((x393%x394)>(x395/x396));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x397 = UINT32_MAX;
	static int32_t x398 = 395421;
	int8_t x400 = INT8_MIN;
	volatile int32_t t97 = 26;

    t97 = ((x397%x398)>(x399/x400));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = 1;
	volatile int32_t x402 = INT32_MIN;
	static uint16_t x403 = UINT16_MAX;
	static volatile int16_t x404 = -361;

    t98 = ((x401%x402)>(x403/x404));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x406 = INT16_MIN;
	int32_t t99 = 813058410;

    t99 = ((x405%x406)>(x407/x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x409 = INT16_MAX;
	int32_t x410 = 15;
	volatile int16_t x411 = INT16_MAX;
	uint32_t x412 = UINT32_MAX;
	int32_t t100 = 56489961;

    t100 = ((x409%x410)>(x411/x412));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x421 = 869391332520LL;
	int16_t x422 = INT16_MIN;
	volatile int32_t x424 = -1;
	volatile int32_t t101 = 30954321;

    t101 = ((x421%x422)>(x423/x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x426 = INT32_MAX;
	uint16_t x428 = UINT16_MAX;
	static volatile int32_t t102 = -87840;

    t102 = ((x425%x426)>(x427/x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x429 = INT32_MIN;
	uint32_t x430 = 696721324U;
	uint64_t x431 = 10922057319190145LLU;
	int64_t x432 = -6953913387LL;
	static int32_t t103 = -25782938;

    t103 = ((x429%x430)>(x431/x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = -1;
	int32_t x434 = 1;
	int16_t x435 = 10816;
	volatile int32_t t104 = 919004732;

    t104 = ((x433%x434)>(x435/x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x441 = INT64_MAX;
	static volatile uint32_t x442 = 49903907U;
	uint16_t x443 = UINT16_MAX;
	uint64_t x444 = 12167LLU;

    t105 = ((x441%x442)>(x443/x444));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = -1LL;
	int16_t x446 = -872;
	volatile int16_t x447 = INT16_MIN;
	int16_t x448 = -1;

    t106 = ((x445%x446)>(x447/x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x449 = 1LLU;
	int64_t x451 = -114952980698419LL;
	uint16_t x452 = UINT16_MAX;
	int32_t t107 = -1229951;

    t107 = ((x449%x450)>(x451/x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x457 = INT16_MIN;
	int32_t x459 = -1;
	static int16_t x460 = INT16_MIN;
	int32_t t108 = -13808;

    t108 = ((x457%x458)>(x459/x460));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x461 = 7U;
	static uint8_t x462 = UINT8_MAX;
	uint64_t x463 = 2197LLU;
	volatile int16_t x464 = 144;
	int32_t t109 = 3580597;

    t109 = ((x461%x462)>(x463/x464));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x465 = 12411U;
	volatile uint16_t x466 = UINT16_MAX;
	static int64_t x468 = INT64_MIN;
	int32_t t110 = 249887;

    t110 = ((x465%x466)>(x467/x468));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x470 = -1;
	int64_t x472 = INT64_MIN;
	volatile int32_t t111 = -152723;

    t111 = ((x469%x470)>(x471/x472));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = 1;
	volatile int16_t x474 = 98;
	int8_t x475 = INT8_MIN;
	static uint16_t x476 = 219U;
	int32_t t112 = -8;

    t112 = ((x473%x474)>(x475/x476));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x477 = UINT8_MAX;
	volatile int32_t x478 = INT32_MIN;
	int16_t x480 = -1;
	static int32_t t113 = -237;

    t113 = ((x477%x478)>(x479/x480));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x481 = 2457;
	int32_t t114 = 256026418;

    t114 = ((x481%x482)>(x483/x484));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x485 = 0U;
	uint8_t x486 = 9U;
	static int32_t x487 = -1;
	volatile int8_t x488 = INT8_MAX;
	static volatile int32_t t115 = -13;

    t115 = ((x485%x486)>(x487/x488));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x489 = 7501U;
	static int8_t x492 = INT8_MAX;
	static int32_t t116 = 70;

    t116 = ((x489%x490)>(x491/x492));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x493 = INT16_MAX;
	volatile int16_t x494 = -173;
	volatile int32_t x496 = 51;
	int32_t t117 = -49;

    t117 = ((x493%x494)>(x495/x496));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x497 = INT64_MIN;
	static int8_t x498 = 7;
	uint64_t x499 = 1684203740856715846LLU;
	int8_t x500 = INT8_MIN;
	static int32_t t118 = 9;

    t118 = ((x497%x498)>(x499/x500));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x505 = 1;
	int16_t x506 = INT16_MIN;
	int64_t x508 = INT64_MIN;
	int32_t t119 = -12071;

    t119 = ((x505%x506)>(x507/x508));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x509 = 202057323254LLU;
	int16_t x510 = 19;
	uint64_t x511 = 2497008275LLU;
	int32_t x512 = INT32_MIN;

    t120 = ((x509%x510)>(x511/x512));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x513 = INT32_MIN;
	uint16_t x514 = UINT16_MAX;
	volatile int16_t x515 = INT16_MIN;
	int32_t x516 = 3;

    t121 = ((x513%x514)>(x515/x516));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x517 = 176871;
	uint32_t x518 = 154U;
	static volatile uint64_t x519 = 1980079886834199552LLU;
	int32_t x520 = 17561;
	int32_t t122 = -962624251;

    t122 = ((x517%x518)>(x519/x520));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x521 = INT8_MAX;
	uint64_t x522 = UINT64_MAX;
	uint8_t x523 = 119U;

    t123 = ((x521%x522)>(x523/x524));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x525 = UINT8_MAX;
	volatile int8_t x527 = -1;
	uint32_t x528 = UINT32_MAX;
	static volatile int32_t t124 = -41565;

    t124 = ((x525%x526)>(x527/x528));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x529 = -1;
	static uint64_t x530 = 254LLU;
	int64_t x531 = 297LL;
	volatile int32_t x532 = -1;
	volatile int32_t t125 = -1513120;

    t125 = ((x529%x530)>(x531/x532));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x537 = -1;
	uint16_t x538 = 6485U;
	volatile int16_t x540 = INT16_MAX;
	volatile int32_t t126 = -19603285;

    t126 = ((x537%x538)>(x539/x540));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x542 = INT32_MAX;
	int64_t x543 = -1LL;
	volatile int16_t x544 = INT16_MAX;
	static int32_t t127 = -1;

    t127 = ((x541%x542)>(x543/x544));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x545 = -17037180762608LL;
	int16_t x546 = INT16_MIN;
	volatile uint8_t x547 = 0U;
	int8_t x548 = -1;

    t128 = ((x545%x546)>(x547/x548));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x550 = -284;
	int8_t x551 = INT8_MIN;
	int32_t t129 = 127789223;

    t129 = ((x549%x550)>(x551/x552));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x553 = -7541;
	static int16_t x556 = -1682;
	int32_t t130 = -988159;

    t130 = ((x553%x554)>(x555/x556));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x558 = -1;
	static int16_t x559 = 60;
	static int64_t x560 = -1LL;
	int32_t t131 = -22;

    t131 = ((x557%x558)>(x559/x560));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x561 = 505;
	static uint32_t x562 = UINT32_MAX;
	volatile int32_t t132 = -5943329;

    t132 = ((x561%x562)>(x563/x564));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x565 = -1LL;
	int64_t x566 = INT64_MIN;
	int32_t x567 = 10;
	volatile int64_t x568 = -15684LL;
	static int32_t t133 = 894431;

    t133 = ((x565%x566)>(x567/x568));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x569 = 0;
	volatile uint64_t x571 = 1934968911LLU;
	int8_t x572 = INT8_MIN;
	int32_t t134 = -313437;

    t134 = ((x569%x570)>(x571/x572));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x574 = INT32_MIN;
	int16_t x575 = INT16_MIN;
	int8_t x576 = -1;
	int32_t t135 = 99;

    t135 = ((x573%x574)>(x575/x576));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x577 = -17;
	int8_t x578 = INT8_MIN;
	int64_t x579 = INT64_MIN;
	volatile int64_t x580 = INT64_MIN;

    t136 = ((x577%x578)>(x579/x580));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x581 = -1;
	uint8_t x582 = 23U;
	int64_t x583 = INT64_MIN;
	static volatile int32_t t137 = 81813544;

    t137 = ((x581%x582)>(x583/x584));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x586 = 1;
	int32_t x588 = -5;
	int32_t t138 = 50700;

    t138 = ((x585%x586)>(x587/x588));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x589 = INT16_MAX;
	static volatile int64_t x590 = INT64_MAX;
	int64_t x591 = INT64_MAX;
	int64_t x592 = 767209045805003LL;
	volatile int32_t t139 = 1;

    t139 = ((x589%x590)>(x591/x592));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x593 = INT32_MAX;
	int32_t x594 = -1;
	int8_t x595 = -38;
	int32_t t140 = -1403;

    t140 = ((x593%x594)>(x595/x596));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x598 = 7U;
	uint16_t x599 = 10U;
	int32_t x600 = -4;
	volatile int32_t t141 = 227575145;

    t141 = ((x597%x598)>(x599/x600));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x601 = 370;
	int32_t x602 = 109524;
	volatile uint16_t x604 = UINT16_MAX;
	static int32_t t142 = -717944206;

    t142 = ((x601%x602)>(x603/x604));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x605 = INT32_MIN;
	static int16_t x606 = INT16_MIN;
	static uint32_t x607 = UINT32_MAX;
	int16_t x608 = 282;
	static int32_t t143 = -18;

    t143 = ((x605%x606)>(x607/x608));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x609 = UINT32_MAX;
	int32_t x610 = INT32_MIN;
	int16_t x612 = INT16_MIN;
	volatile int32_t t144 = -16398635;

    t144 = ((x609%x610)>(x611/x612));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x613 = INT16_MAX;
	static uint64_t x614 = 164161317122658LLU;
	int64_t x615 = 4140560828102995829LL;
	volatile int16_t x616 = 1;
	volatile int32_t t145 = 310333;

    t145 = ((x613%x614)>(x615/x616));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x617 = -1;
	uint16_t x618 = 247U;
	static int8_t x619 = 0;
	volatile int32_t t146 = 644621;

    t146 = ((x617%x618)>(x619/x620));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x621 = -1;
	int32_t x622 = -1;
	int8_t x623 = -1;
	volatile int32_t x624 = INT32_MIN;
	static volatile int32_t t147 = -58261862;

    t147 = ((x621%x622)>(x623/x624));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x625 = 4;
	uint8_t x627 = 2U;
	static int32_t t148 = -16600469;

    t148 = ((x625%x626)>(x627/x628));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x630 = INT64_MAX;
	uint32_t x631 = UINT32_MAX;
	uint32_t x632 = 32003466U;
	int32_t t149 = 575;

    t149 = ((x629%x630)>(x631/x632));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x633 = INT8_MIN;
	int64_t x634 = INT64_MAX;
	static int32_t x635 = INT32_MIN;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t150 = 887728889;

    t150 = ((x633%x634)>(x635/x636));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	static int16_t x638 = -13012;
	int32_t x640 = INT32_MIN;
	static volatile int32_t t151 = -186526;

    t151 = ((x637%x638)>(x639/x640));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x641 = -1;
	int8_t x643 = -1;
	volatile int32_t x644 = -1;
	int32_t t152 = -486977698;

    t152 = ((x641%x642)>(x643/x644));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x647 = -20;
	int8_t x648 = -1;
	volatile int32_t t153 = -85;

    t153 = ((x645%x646)>(x647/x648));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x653 = -48234506;
	volatile int8_t x654 = -1;
	uint64_t x656 = 831211069LLU;
	volatile int32_t t154 = 24732056;

    t154 = ((x653%x654)>(x655/x656));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x661 = 15U;
	volatile uint32_t x663 = 440U;
	int32_t x664 = -473600;
	int32_t t155 = -1360386;

    t155 = ((x661%x662)>(x663/x664));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x665 = -1;
	uint8_t x666 = 124U;
	static uint8_t x667 = UINT8_MAX;
	int32_t t156 = 0;

    t156 = ((x665%x666)>(x667/x668));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x669 = INT64_MIN;
	volatile int64_t x670 = INT64_MAX;
	static uint32_t x672 = UINT32_MAX;
	int32_t t157 = 13069;

    t157 = ((x669%x670)>(x671/x672));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x673 = 613;
	volatile uint16_t x674 = UINT16_MAX;
	uint16_t x675 = 163U;
	int32_t t158 = -630;

    t158 = ((x673%x674)>(x675/x676));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x677 = -38;
	uint8_t x678 = 2U;
	volatile int16_t x679 = INT16_MIN;
	static uint16_t x680 = 5061U;

    t159 = ((x677%x678)>(x679/x680));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x682 = UINT16_MAX;
	int64_t x683 = INT64_MAX;
	uint8_t x684 = 7U;

    t160 = ((x681%x682)>(x683/x684));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x685 = -49LL;
	static volatile int32_t t161 = 1;

    t161 = ((x685%x686)>(x687/x688));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x689 = 1076536U;
	static uint8_t x690 = 14U;
	int16_t x691 = -2897;
	uint64_t x692 = UINT64_MAX;

    t162 = ((x689%x690)>(x691/x692));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x693 = 2739840259579881672LL;
	uint8_t x694 = 1U;
	static volatile int16_t x695 = INT16_MIN;
	static int64_t x696 = INT64_MIN;

    t163 = ((x693%x694)>(x695/x696));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x698 = 1756U;
	static int32_t t164 = -283453105;

    t164 = ((x697%x698)>(x699/x700));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x701 = INT8_MIN;
	int16_t x704 = -1;
	volatile int32_t t165 = -468;

    t165 = ((x701%x702)>(x703/x704));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x705 = 234119;
	int32_t x706 = INT32_MAX;
	int16_t x707 = -1;
	int32_t x708 = INT32_MIN;

    t166 = ((x705%x706)>(x707/x708));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x713 = 16;
	static int64_t x714 = 8248325540567664LL;
	static int32_t x716 = INT32_MIN;

    t167 = ((x713%x714)>(x715/x716));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x717 = -1;
	int64_t x718 = -1LL;
	volatile int8_t x719 = INT8_MIN;
	int32_t x720 = INT32_MIN;
	int32_t t168 = 715;

    t168 = ((x717%x718)>(x719/x720));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x721 = INT16_MAX;
	static int64_t x722 = 22452LL;
	uint16_t x724 = UINT16_MAX;
	int32_t t169 = 0;

    t169 = ((x721%x722)>(x723/x724));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x725 = INT8_MIN;
	int32_t x726 = INT32_MAX;
	static volatile uint32_t x728 = 116567U;
	int32_t t170 = 5793459;

    t170 = ((x725%x726)>(x727/x728));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x729 = 1U;
	int64_t x730 = -56895726387LL;
	int16_t x732 = INT16_MAX;
	int32_t t171 = -55951;

    t171 = ((x729%x730)>(x731/x732));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x733 = INT8_MIN;
	uint16_t x734 = UINT16_MAX;
	int8_t x735 = 1;

    t172 = ((x733%x734)>(x735/x736));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x737 = 8111U;
	volatile int16_t x739 = -1;
	static volatile int32_t x740 = -1;
	volatile int32_t t173 = 38289;

    t173 = ((x737%x738)>(x739/x740));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x741 = INT32_MIN;
	int64_t x742 = INT64_MAX;
	volatile int16_t x743 = -1;
	volatile uint8_t x744 = 1U;
	static volatile int32_t t174 = -3121587;

    t174 = ((x741%x742)>(x743/x744));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x745 = -1;
	int8_t x748 = INT8_MAX;
	volatile int32_t t175 = -44517772;

    t175 = ((x745%x746)>(x747/x748));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x749 = INT8_MIN;
	volatile int16_t x750 = INT16_MAX;
	int8_t x751 = INT8_MAX;
	uint8_t x752 = 1U;
	volatile int32_t t176 = -1520585;

    t176 = ((x749%x750)>(x751/x752));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	volatile int32_t x755 = INT32_MIN;
	static uint32_t x756 = 244U;
	volatile int32_t t177 = 2421;

    t177 = ((x753%x754)>(x755/x756));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x757 = UINT16_MAX;
	int64_t x758 = 555054550011694LL;
	static int32_t x759 = INT32_MAX;
	volatile uint8_t x760 = 1U;

    t178 = ((x757%x758)>(x759/x760));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x761 = INT64_MAX;
	uint16_t x762 = 3U;
	volatile int64_t x763 = 4267812LL;
	volatile uint32_t x764 = 5056U;
	int32_t t179 = 59029;

    t179 = ((x761%x762)>(x763/x764));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x765 = 1;
	uint8_t x766 = UINT8_MAX;
	uint32_t x767 = 2412957U;
	int8_t x768 = -2;
	volatile int32_t t180 = -1663345;

    t180 = ((x765%x766)>(x767/x768));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x771 = UINT16_MAX;
	volatile int16_t x772 = INT16_MIN;

    t181 = ((x769%x770)>(x771/x772));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x773 = 44U;
	static volatile uint8_t x774 = UINT8_MAX;
	volatile int32_t x775 = INT32_MAX;
	static volatile uint64_t x776 = UINT64_MAX;
	static int32_t t182 = -18985;

    t182 = ((x773%x774)>(x775/x776));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x777 = 15;
	static int32_t x778 = INT32_MAX;
	static int16_t x780 = INT16_MIN;
	volatile int32_t t183 = -520615;

    t183 = ((x777%x778)>(x779/x780));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x781 = 78U;
	uint8_t x782 = 12U;
	int32_t x783 = -1;
	uint32_t x784 = UINT32_MAX;
	int32_t t184 = -127474;

    t184 = ((x781%x782)>(x783/x784));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x785 = 29U;
	int64_t x786 = 33236243928989LL;
	uint64_t x787 = 536356832235205459LLU;
	static int16_t x788 = -1;

    t185 = ((x785%x786)>(x787/x788));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x790 = INT32_MIN;
	uint8_t x792 = 105U;
	int32_t t186 = 12757;

    t186 = ((x789%x790)>(x791/x792));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x795 = 56534238U;
	int64_t x796 = INT64_MAX;
	volatile int32_t t187 = 395171;

    t187 = ((x793%x794)>(x795/x796));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x797 = 2435U;
	int16_t x798 = INT16_MAX;
	int16_t x800 = 191;
	volatile int32_t t188 = -2152;

    t188 = ((x797%x798)>(x799/x800));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x802 = INT32_MIN;
	uint32_t x803 = 83401318U;

    t189 = ((x801%x802)>(x803/x804));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x805 = INT64_MIN;
	uint16_t x806 = 38U;
	static uint8_t x807 = 87U;
	int8_t x808 = -1;
	volatile int32_t t190 = -67376890;

    t190 = ((x805%x806)>(x807/x808));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x810 = INT16_MIN;
	static volatile int16_t x811 = INT16_MIN;
	volatile int32_t x812 = -1;

    t191 = ((x809%x810)>(x811/x812));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x813 = UINT32_MAX;
	volatile int64_t x816 = -1LL;
	int32_t t192 = -103819;

    t192 = ((x813%x814)>(x815/x816));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x818 = 3U;
	int8_t x819 = -1;
	int16_t x820 = 612;
	int32_t t193 = -62629;

    t193 = ((x817%x818)>(x819/x820));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x821 = 1U;
	static int16_t x822 = INT16_MIN;
	int8_t x823 = INT8_MIN;

    t194 = ((x821%x822)>(x823/x824));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x825 = 8;
	volatile uint64_t x827 = 680029937361228LLU;
	uint8_t x828 = 1U;
	volatile int32_t t195 = 2879;

    t195 = ((x825%x826)>(x827/x828));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x829 = -2;
	int64_t x830 = INT64_MIN;
	volatile int8_t x831 = 1;
	int64_t x832 = 641LL;
	int32_t t196 = -821007;

    t196 = ((x829%x830)>(x831/x832));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x833 = 8;
	volatile uint32_t x834 = 557490202U;
	static int64_t x835 = -3418LL;
	uint32_t x836 = 1U;
	int32_t t197 = 112823402;

    t197 = ((x833%x834)>(x835/x836));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x841 = INT64_MAX;
	volatile int64_t x842 = INT64_MIN;
	int16_t x844 = 534;
	static volatile int32_t t198 = 45135036;

    t198 = ((x841%x842)>(x843/x844));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x845 = UINT16_MAX;
	int64_t x846 = INT64_MIN;
	static uint8_t x848 = 4U;
	int32_t t199 = 2;

    t199 = ((x845%x846)>(x847/x848));

    if (t199 != 1) { NG(); } else { ; }
	
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

