
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

static uint16_t x16 = 5U;
volatile int16_t x20 = 3296;
uint32_t x28 = 3U;
uint64_t x30 = 11751817LLU;
int64_t x37 = INT64_MIN;
uint64_t x40 = 138086106LLU;
int8_t x44 = 60;
int32_t x47 = -1;
volatile int32_t t11 = -2966;
static int64_t x49 = INT64_MIN;
uint16_t x50 = UINT16_MAX;
int8_t x54 = 1;
volatile uint8_t x61 = 0U;
int8_t x66 = INT8_MIN;
static volatile int8_t x70 = 12;
int32_t x71 = 7865597;
int8_t x73 = INT8_MAX;
static uint16_t x74 = UINT16_MAX;
int8_t x76 = 37;
static volatile int32_t t17 = -7;
int16_t x79 = INT16_MIN;
int16_t x85 = -54;
uint32_t x88 = 374U;
uint8_t x91 = 2U;
uint64_t x95 = UINT64_MAX;
volatile int32_t t22 = 427;
int64_t x104 = -5717LL;
static volatile int32_t t25 = -54;
int32_t x110 = -385;
static volatile int32_t x116 = INT32_MIN;
int32_t x118 = 11312;
static uint32_t x120 = 413569684U;
int32_t t28 = 410;
static volatile int64_t x123 = -867320724657LL;
static volatile int32_t t30 = 0;
int8_t x133 = INT8_MIN;
volatile int32_t t33 = 799;
int32_t x142 = INT32_MIN;
int8_t x147 = -6;
static int32_t x150 = 338;
static int16_t x156 = -28;
volatile int16_t x163 = -1;
static uint16_t x164 = UINT16_MAX;
static int32_t t39 = -22;
int16_t x169 = 1;
static int32_t x171 = INT32_MAX;
static uint16_t x174 = UINT16_MAX;
static int64_t x175 = INT64_MIN;
static volatile int32_t t42 = 111;
int8_t x181 = INT8_MIN;
int32_t t44 = -14360773;
int64_t x194 = INT64_MIN;
volatile int16_t x196 = -1;
static uint64_t x201 = 6LLU;
int8_t x206 = INT8_MIN;
int32_t t49 = -551883422;
int16_t x220 = INT16_MIN;
int8_t x225 = INT8_MAX;
volatile uint32_t x236 = 8406739U;
volatile int32_t t53 = -1046637;
int32_t x237 = INT32_MIN;
int32_t x239 = 404;
volatile int32_t t55 = -230013094;
int64_t x245 = -1LL;
uint32_t x247 = UINT32_MAX;
int64_t x262 = INT64_MIN;
static volatile int8_t x265 = -9;
volatile uint16_t x273 = 96U;
static int32_t t62 = -47;
int8_t x277 = INT8_MIN;
int16_t x278 = INT16_MIN;
int8_t x281 = -1;
volatile int64_t x302 = -1LL;
int32_t x308 = 30;
int64_t x309 = INT64_MIN;
uint32_t x317 = 328938U;
uint32_t x324 = 98U;
volatile int16_t x349 = INT16_MIN;
uint64_t x351 = 159LLU;
volatile int32_t t79 = -439;
int16_t x373 = -1;
uint16_t x375 = 687U;
int32_t x376 = -18857;
int32_t x377 = INT32_MIN;
int16_t x379 = INT16_MIN;
static int16_t x411 = -9;
int32_t t89 = 8;
int64_t x413 = INT64_MAX;
volatile uint64_t x421 = UINT64_MAX;
volatile int8_t x426 = INT8_MIN;
int8_t x437 = INT8_MIN;
int16_t x438 = INT16_MIN;
int64_t x442 = INT64_MIN;
int16_t x448 = INT16_MAX;
uint64_t x449 = 1273LLU;
uint32_t x452 = 15950252U;
int32_t t98 = 4;
uint64_t x458 = 7100901633612LLU;
int64_t x464 = -1216949LL;
int8_t x494 = INT8_MIN;
int64_t x497 = -1LL;
int32_t x500 = INT32_MAX;
uint16_t x508 = 290U;
int32_t x518 = -3468090;
uint8_t x519 = 8U;
uint16_t x520 = 483U;
int8_t x531 = INT8_MAX;
int64_t x532 = -9LL;
static uint16_t x535 = 21U;
static int32_t t114 = 94012;
uint16_t x543 = UINT16_MAX;
int32_t x551 = INT32_MAX;
static int16_t x555 = INT16_MIN;
uint64_t x556 = 112431846498LLU;
int64_t x557 = INT64_MIN;
int32_t x559 = -1;
static int32_t t119 = -3621;
uint8_t x563 = 0U;
int16_t x565 = 25;
volatile int8_t x566 = INT8_MAX;
int16_t x567 = -1;
uint8_t x572 = 50U;
static volatile int32_t t122 = 27949;
volatile int8_t x574 = INT8_MIN;
volatile int32_t t124 = 2069586;
int64_t x582 = INT64_MAX;
volatile int32_t t125 = -197667291;
int64_t x589 = INT64_MAX;
int64_t x591 = -1LL;
volatile int32_t t126 = -125074;
volatile int32_t t127 = -24;
int64_t x606 = 819593846792291674LL;
int8_t x608 = -2;
int16_t x616 = INT16_MIN;
uint16_t x617 = 40U;
int32_t t131 = -1069947;
static int8_t x622 = INT8_MAX;
int32_t x623 = INT32_MIN;
int32_t t133 = 47310;
int16_t x635 = INT16_MAX;
int64_t x639 = INT64_MAX;
uint64_t x640 = UINT64_MAX;
volatile int32_t t137 = 23962;
int32_t x645 = -252515470;
int16_t x649 = -1;
static int16_t x655 = 1;
int8_t x659 = 15;
static int16_t x661 = 3;
volatile int32_t x668 = 0;
volatile int32_t t144 = 13167;
int32_t x678 = INT32_MIN;
int32_t t146 = -19;
int32_t x691 = INT32_MAX;
volatile int32_t t148 = -148752426;
int64_t x695 = 6711104LL;
int16_t x696 = INT16_MIN;
int16_t x706 = INT16_MAX;
uint16_t x718 = UINT16_MAX;
static int8_t x722 = -1;
uint16_t x723 = UINT16_MAX;
int16_t x734 = -4323;
int16_t x740 = INT16_MIN;
static int32_t x741 = -1;
uint64_t x751 = 111365433657214119LLU;
volatile int8_t x756 = INT8_MIN;
volatile int32_t t163 = -16874;
static volatile uint64_t x764 = 31758647LLU;
int32_t x774 = INT32_MIN;
volatile int64_t x775 = -1LL;
volatile int32_t t168 = -6;
int32_t x784 = INT32_MAX;
int16_t x785 = INT16_MIN;
uint64_t x790 = 9670935616532LLU;
int16_t x791 = INT16_MIN;
static volatile int32_t t173 = -22928672;
uint8_t x805 = 0U;
int16_t x808 = INT16_MIN;
uint32_t x813 = 2U;
static int64_t x822 = INT64_MAX;
uint32_t x826 = UINT32_MAX;
uint32_t x827 = 2129205U;
static int16_t x847 = INT16_MIN;
uint64_t x848 = UINT64_MAX;
volatile int32_t t182 = 30092806;
uint16_t x852 = 14U;
int32_t x857 = -1;
volatile int64_t x860 = INT64_MIN;
static int64_t x862 = INT64_MAX;
int16_t x863 = INT16_MIN;
volatile uint32_t x875 = 754085025U;
uint64_t x876 = 26484871358492LLU;
static int64_t x884 = -16782235281LL;
uint32_t x887 = UINT32_MAX;
int32_t t192 = 35054863;
volatile int32_t t193 = -49019;
static volatile uint64_t x904 = 248LLU;
int16_t x915 = INT16_MIN;
static int32_t t196 = -22861872;
int16_t x923 = INT16_MIN;


void f0(void) {
    	volatile int64_t x1 = INT64_MAX;
	int32_t x2 = -1;
	static int32_t x3 = INT32_MIN;
	volatile int64_t x4 = -1412635839259329LL;
	volatile int32_t t0 = -429078;

    t0 = ((x1/x2)>(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile int32_t x6 = -1;
	uint64_t x7 = 165131010LLU;
	int8_t x8 = 0;
	static volatile int32_t t1 = -37441;

    t1 = ((x5/x6)>(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 89;
	uint16_t x10 = UINT16_MAX;
	static uint16_t x11 = UINT16_MAX;
	static uint8_t x12 = 14U;
	volatile int32_t t2 = 10548345;

    t2 = ((x9/x10)>(x11+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	uint16_t x14 = 6U;
	int16_t x15 = -1;
	volatile int32_t t3 = 11;

    t3 = ((x13/x14)>(x15+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint32_t x18 = 1155492071U;
	int32_t x19 = INT32_MIN;
	static volatile int32_t t4 = 5711018;

    t4 = ((x17/x18)>(x19+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = 5555U;
	int8_t x24 = 1;
	volatile int32_t t5 = 515480614;

    t5 = ((x21/x22)>(x23+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MAX;
	int32_t x26 = INT32_MIN;
	int8_t x27 = -1;
	static int32_t t6 = -42;

    t6 = ((x25/x26)>(x27+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int8_t x31 = -50;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = -1;

    t7 = ((x29/x30)>(x31+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 288234787U;
	int16_t x35 = -1;
	int8_t x36 = INT8_MAX;
	int32_t t8 = 119628;

    t8 = ((x33/x34)>(x35+x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x38 = UINT8_MAX;
	volatile int8_t x39 = INT8_MAX;
	volatile int32_t t9 = -3;

    t9 = ((x37/x38)>(x39+x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 27U;
	uint8_t x42 = 16U;
	static volatile uint32_t x43 = 7142399U;
	int32_t t10 = 20055527;

    t10 = ((x41/x42)>(x43+x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int8_t x46 = -9;
	volatile uint8_t x48 = 2U;

    t11 = ((x45/x46)>(x47+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	static int32_t t12 = -1982921;

    t12 = ((x49/x50)>(x51+x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	uint16_t x55 = UINT16_MAX;
	volatile uint8_t x56 = 0U;
	int32_t t13 = -6487974;

    t13 = ((x53/x54)>(x55+x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x62 = 4U;
	static int8_t x63 = INT8_MAX;
	int16_t x64 = 180;
	volatile int32_t t14 = 0;

    t14 = ((x61/x62)>(x63+x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x65 = INT16_MIN;
	int32_t x67 = -1;
	uint32_t x68 = 2002021745U;
	int32_t t15 = -43376049;

    t15 = ((x65/x66)>(x67+x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 978278566750LL;
	static int16_t x72 = INT16_MIN;
	int32_t t16 = -15;

    t16 = ((x69/x70)>(x71+x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x75 = INT16_MAX;

    t17 = ((x73/x74)>(x75+x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = 32784363;
	int8_t x78 = -1;
	int64_t x80 = -66563521727735938LL;
	int32_t t18 = -1;

    t18 = ((x77/x78)>(x79+x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = INT8_MAX;
	volatile int32_t x82 = INT32_MIN;
	int16_t x83 = INT16_MAX;
	int16_t x84 = 474;
	static int32_t t19 = 174;

    t19 = ((x81/x82)>(x83+x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x86 = 7317506;
	volatile uint8_t x87 = 2U;
	int32_t t20 = 709;

    t20 = ((x85/x86)>(x87+x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -4599378749358756649LL;
	uint32_t x90 = 89123U;
	int8_t x92 = -1;
	static volatile int32_t t21 = -672867317;

    t21 = ((x89/x90)>(x91+x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = INT64_MIN;
	uint8_t x94 = 81U;
	static int32_t x96 = INT32_MIN;

    t22 = ((x93/x94)>(x95+x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	static int8_t x99 = -1;
	int64_t x100 = -1LL;
	int32_t t23 = 48331;

    t23 = ((x97/x98)>(x99+x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x101 = 25885916564466LLU;
	volatile uint32_t x102 = 176536U;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t t24 = 2494799;

    t24 = ((x101/x102)>(x103+x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -1;
	volatile uint16_t x106 = 700U;
	static uint16_t x107 = 13338U;
	static volatile int64_t x108 = -1LL;

    t25 = ((x105/x106)>(x107+x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x109 = 111823U;
	int64_t x111 = -4036LL;
	volatile int64_t x112 = 3615807818824791LL;
	volatile int32_t t26 = 273043;

    t26 = ((x109/x110)>(x111+x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = 4647617LLU;
	int16_t x114 = INT16_MIN;
	volatile uint64_t x115 = 111015LLU;
	int32_t t27 = 26294735;

    t27 = ((x113/x114)>(x115+x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MIN;
	int32_t x119 = INT32_MIN;

    t28 = ((x117/x118)>(x119+x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = -43694755;
	static int16_t x122 = INT16_MIN;
	int8_t x124 = -1;
	volatile int32_t t29 = -1976;

    t29 = ((x121/x122)>(x123+x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x125 = 3938U;
	int32_t x126 = -4592701;
	uint32_t x127 = 1295779204U;
	int8_t x128 = 6;

    t30 = ((x125/x126)>(x127+x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = -6930096451LL;
	volatile int32_t t31 = -66559262;

    t31 = ((x129/x130)>(x131+x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x134 = -11781191;
	int32_t x135 = -1;
	uint32_t x136 = 3488794U;
	volatile int32_t t32 = 174521;

    t32 = ((x133/x134)>(x135+x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x137 = 0;
	static int8_t x138 = INT8_MAX;
	int32_t x139 = INT32_MAX;
	static int32_t x140 = -1;

    t33 = ((x137/x138)>(x139+x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 1U;
	static int16_t x143 = INT16_MAX;
	int16_t x144 = -5732;
	int32_t t34 = -63499316;

    t34 = ((x141/x142)>(x143+x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x145 = INT8_MIN;
	volatile uint8_t x146 = UINT8_MAX;
	static uint32_t x148 = UINT32_MAX;
	volatile int32_t t35 = -15906592;

    t35 = ((x145/x146)>(x147+x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = -1;
	int64_t x151 = -1714985873678LL;
	int32_t x152 = -60220;
	int32_t t36 = 0;

    t36 = ((x149/x150)>(x151+x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MAX;
	int64_t x155 = -1LL;
	volatile int32_t t37 = 125328;

    t37 = ((x153/x154)>(x155+x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MAX;
	int32_t x159 = 0;
	int8_t x160 = -1;
	volatile int32_t t38 = -59813120;

    t38 = ((x157/x158)>(x159+x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x161 = INT8_MIN;
	volatile uint8_t x162 = 14U;

    t39 = ((x161/x162)>(x163+x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x165 = 96U;
	volatile int32_t x166 = INT32_MIN;
	int32_t x167 = -493;
	int8_t x168 = 1;
	static volatile int32_t t40 = 1;

    t40 = ((x165/x166)>(x167+x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x170 = 10U;
	int64_t x172 = -33713447539698963LL;
	static volatile int32_t t41 = -207;

    t41 = ((x169/x170)>(x171+x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x173 = 12U;
	int32_t x176 = INT32_MAX;

    t42 = ((x173/x174)>(x175+x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = -1LL;
	int32_t x178 = INT32_MIN;
	uint32_t x179 = 81059588U;
	uint8_t x180 = UINT8_MAX;
	int32_t t43 = -8357481;

    t43 = ((x177/x178)>(x179+x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x182 = 165LL;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = 21;

    t44 = ((x181/x182)>(x183+x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x193 = UINT64_MAX;
	uint64_t x195 = UINT64_MAX;
	int32_t t45 = 257755141;

    t45 = ((x193/x194)>(x195+x196));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x197 = INT64_MIN;
	volatile int32_t x198 = INT32_MAX;
	uint32_t x199 = 15859U;
	volatile int64_t x200 = INT64_MIN;
	volatile int32_t t46 = 155;

    t46 = ((x197/x198)>(x199+x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x202 = UINT64_MAX;
	static uint8_t x203 = 5U;
	uint32_t x204 = 516U;
	volatile int32_t t47 = 2105240;

    t47 = ((x201/x202)>(x203+x204));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x205 = INT32_MIN;
	static volatile int64_t x207 = INT64_MIN;
	volatile uint64_t x208 = 32845333862413232LLU;
	int32_t t48 = -25232;

    t48 = ((x205/x206)>(x207+x208));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x209 = INT32_MAX;
	int64_t x210 = -1LL;
	int32_t x211 = INT32_MIN;
	int8_t x212 = 1;

    t49 = ((x209/x210)>(x211+x212));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x217 = 2665347919LL;
	int32_t x218 = 107580906;
	int16_t x219 = -1244;
	int32_t t50 = -110400778;

    t50 = ((x217/x218)>(x219+x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = 223707;
	volatile int16_t x222 = -1;
	int16_t x223 = -2;
	uint32_t x224 = 360440556U;
	static int32_t t51 = -2483;

    t51 = ((x221/x222)>(x223+x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x226 = 126770LLU;
	static int64_t x227 = 10367086180989LL;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t52 = 4559141;

    t52 = ((x225/x226)>(x227+x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x233 = INT16_MIN;
	volatile uint64_t x234 = 31223796488LLU;
	int32_t x235 = 12794382;

    t53 = ((x233/x234)>(x235+x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x238 = INT8_MIN;
	int16_t x240 = -1;
	volatile int32_t t54 = -16045684;

    t54 = ((x237/x238)>(x239+x240));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x241 = 4867U;
	int32_t x242 = -2482;
	uint64_t x243 = UINT64_MAX;
	int8_t x244 = INT8_MAX;

    t55 = ((x241/x242)>(x243+x244));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x246 = INT16_MIN;
	volatile int16_t x248 = INT16_MIN;
	int32_t t56 = 1;

    t56 = ((x245/x246)>(x247+x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MIN;
	uint16_t x251 = 51U;
	static uint32_t x252 = 346U;
	volatile int32_t t57 = 114966;

    t57 = ((x249/x250)>(x251+x252));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x253 = -118129629;
	static int16_t x254 = -89;
	uint64_t x255 = UINT64_MAX;
	volatile int32_t x256 = -1;
	volatile int32_t t58 = -888625;

    t58 = ((x253/x254)>(x255+x256));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x257 = 4884U;
	volatile uint8_t x258 = 1U;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = UINT32_MAX;
	static int32_t t59 = -125308703;

    t59 = ((x257/x258)>(x259+x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x261 = 1;
	int16_t x263 = INT16_MIN;
	static uint64_t x264 = UINT64_MAX;
	volatile int32_t t60 = 92206849;

    t60 = ((x261/x262)>(x263+x264));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x266 = -60;
	int64_t x267 = -316477LL;
	int16_t x268 = -1;
	static volatile int32_t t61 = -102;

    t61 = ((x265/x266)>(x267+x268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x274 = 24505U;
	uint8_t x275 = 105U;
	int32_t x276 = -1;

    t62 = ((x273/x274)>(x275+x276));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x279 = 274U;
	int32_t x280 = INT32_MIN;
	volatile int32_t t63 = 66354537;

    t63 = ((x277/x278)>(x279+x280));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MAX;
	int16_t x284 = -1;
	static volatile int32_t t64 = 14726998;

    t64 = ((x281/x282)>(x283+x284));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x285 = -1LL;
	static uint16_t x286 = UINT16_MAX;
	volatile int64_t x287 = -1LL;
	int8_t x288 = 10;
	static volatile int32_t t65 = 697089765;

    t65 = ((x285/x286)>(x287+x288));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	uint32_t x295 = 179460532U;
	static uint32_t x296 = 27658646U;
	volatile int32_t t66 = -13065;

    t66 = ((x293/x294)>(x295+x296));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x297 = -1;
	uint8_t x298 = 1U;
	volatile uint32_t x299 = UINT32_MAX;
	volatile int8_t x300 = -1;
	static int32_t t67 = -116;

    t67 = ((x297/x298)>(x299+x300));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x301 = -1;
	int64_t x303 = INT64_MAX;
	static uint64_t x304 = UINT64_MAX;
	volatile int32_t t68 = -10;

    t68 = ((x301/x302)>(x303+x304));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = -12;
	uint8_t x306 = 12U;
	int32_t x307 = -1160;
	int32_t t69 = -1938789;

    t69 = ((x305/x306)>(x307+x308));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x310 = 993U;
	static int8_t x311 = INT8_MIN;
	uint32_t x312 = 306U;
	int32_t t70 = 41;

    t70 = ((x309/x310)>(x311+x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x318 = INT32_MIN;
	uint64_t x319 = UINT64_MAX;
	uint16_t x320 = 0U;
	volatile int32_t t71 = -3070;

    t71 = ((x317/x318)>(x319+x320));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x321 = 24;
	uint16_t x322 = 78U;
	int16_t x323 = INT16_MIN;
	static volatile int32_t t72 = 1;

    t72 = ((x321/x322)>(x323+x324));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x325 = -7944482919081LL;
	static int16_t x326 = -1;
	int64_t x327 = 482983133LL;
	int32_t x328 = -1;
	volatile int32_t t73 = 24;

    t73 = ((x325/x326)>(x327+x328));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = -1;
	int16_t x330 = INT16_MAX;
	int32_t x331 = -1;
	int16_t x332 = INT16_MIN;
	static int32_t t74 = -58;

    t74 = ((x329/x330)>(x331+x332));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x341 = UINT64_MAX;
	static int8_t x342 = INT8_MIN;
	int16_t x343 = -1;
	int32_t x344 = -1;
	volatile int32_t t75 = -953;

    t75 = ((x341/x342)>(x343+x344));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x345 = -1;
	int64_t x346 = -20LL;
	static int32_t x347 = -2647156;
	static int8_t x348 = -1;
	int32_t t76 = -1;

    t76 = ((x345/x346)>(x347+x348));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x350 = 15;
	volatile int64_t x352 = INT64_MAX;
	static int32_t t77 = -619448;

    t77 = ((x349/x350)>(x351+x352));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x353 = -4;
	int16_t x354 = INT16_MAX;
	uint64_t x355 = 33445847269632LLU;
	volatile uint64_t x356 = UINT64_MAX;
	volatile int32_t t78 = 4044628;

    t78 = ((x353/x354)>(x355+x356));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x361 = -1LL;
	int16_t x362 = -1;
	static int16_t x363 = -1;
	volatile uint64_t x364 = 15LLU;

    t79 = ((x361/x362)>(x363+x364));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x365 = UINT8_MAX;
	uint16_t x366 = UINT16_MAX;
	uint16_t x367 = 6U;
	uint8_t x368 = 24U;
	int32_t t80 = -254095503;

    t80 = ((x365/x366)>(x367+x368));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x369 = 0U;
	int64_t x370 = -1LL;
	int64_t x371 = 436212306351103LL;
	static int16_t x372 = -208;
	static int32_t t81 = -209;

    t81 = ((x369/x370)>(x371+x372));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x374 = UINT32_MAX;
	static int32_t t82 = 3477;

    t82 = ((x373/x374)>(x375+x376));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x378 = INT64_MIN;
	int16_t x380 = -1;
	int32_t t83 = 0;

    t83 = ((x377/x378)>(x379+x380));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x385 = -1;
	static volatile int64_t x386 = -1LL;
	uint64_t x387 = UINT64_MAX;
	static int64_t x388 = INT64_MIN;
	static int32_t t84 = 1;

    t84 = ((x385/x386)>(x387+x388));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x389 = -1;
	int64_t x390 = -1LL;
	int64_t x391 = INT64_MAX;
	int8_t x392 = 0;
	volatile int32_t t85 = -7444755;

    t85 = ((x389/x390)>(x391+x392));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x397 = -1;
	volatile int8_t x398 = 1;
	int64_t x399 = 42267492042403384LL;
	int8_t x400 = -1;
	int32_t t86 = -18;

    t86 = ((x397/x398)>(x399+x400));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x401 = 73;
	uint16_t x402 = 18U;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = 3U;
	volatile int32_t t87 = -18595717;

    t87 = ((x401/x402)>(x403+x404));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x405 = -33;
	uint64_t x406 = 8433021010LLU;
	int16_t x407 = -1;
	static volatile uint8_t x408 = 82U;
	static int32_t t88 = -665773;

    t88 = ((x405/x406)>(x407+x408));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x409 = INT16_MIN;
	int64_t x410 = 31285LL;
	int16_t x412 = INT16_MIN;

    t89 = ((x409/x410)>(x411+x412));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x414 = 269338273154550LLU;
	uint8_t x415 = 106U;
	volatile int8_t x416 = INT8_MIN;
	int32_t t90 = -375;

    t90 = ((x413/x414)>(x415+x416));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x417 = 13345;
	int64_t x418 = 3884949797368094LL;
	uint64_t x419 = 12LLU;
	int64_t x420 = -43533LL;
	int32_t t91 = -27057494;

    t91 = ((x417/x418)>(x419+x420));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x422 = 120879878U;
	int64_t x423 = -1LL;
	int8_t x424 = INT8_MIN;
	volatile int32_t t92 = -16532792;

    t92 = ((x421/x422)>(x423+x424));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x425 = 11841U;
	uint64_t x427 = UINT64_MAX;
	static int32_t x428 = 915530;
	volatile int32_t t93 = -748;

    t93 = ((x425/x426)>(x427+x428));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x429 = -20925402;
	int32_t x430 = -1;
	int64_t x431 = INT64_MAX;
	int32_t x432 = INT32_MIN;
	volatile int32_t t94 = 1208;

    t94 = ((x429/x430)>(x431+x432));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x439 = -1;
	volatile int64_t x440 = -1LL;
	int32_t t95 = -1267735;

    t95 = ((x437/x438)>(x439+x440));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x441 = 6879U;
	int16_t x443 = INT16_MIN;
	static uint8_t x444 = UINT8_MAX;
	int32_t t96 = 62;

    t96 = ((x441/x442)>(x443+x444));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x445 = INT16_MIN;
	int8_t x446 = -14;
	int8_t x447 = INT8_MIN;
	static volatile int32_t t97 = 676;

    t97 = ((x445/x446)>(x447+x448));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x450 = 1LLU;
	int64_t x451 = INT64_MIN;

    t98 = ((x449/x450)>(x451+x452));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x457 = UINT8_MAX;
	uint8_t x459 = 13U;
	static uint64_t x460 = 219LLU;
	int32_t t99 = -232;

    t99 = ((x457/x458)>(x459+x460));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x461 = INT32_MAX;
	int32_t x462 = -1;
	static int64_t x463 = INT64_MAX;
	int32_t t100 = -1309019;

    t100 = ((x461/x462)>(x463+x464));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x465 = INT32_MAX;
	int16_t x466 = INT16_MIN;
	static uint8_t x467 = UINT8_MAX;
	int16_t x468 = INT16_MIN;
	static volatile int32_t t101 = -169;

    t101 = ((x465/x466)>(x467+x468));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x477 = UINT64_MAX;
	volatile int16_t x478 = -1;
	volatile int8_t x479 = -23;
	uint32_t x480 = 115U;
	volatile int32_t t102 = -12665;

    t102 = ((x477/x478)>(x479+x480));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint32_t x485 = 16086U;
	static int64_t x486 = -1LL;
	volatile uint64_t x487 = 62177LLU;
	static volatile int32_t x488 = INT32_MIN;
	int32_t t103 = 183;

    t103 = ((x485/x486)>(x487+x488));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x489 = 39LL;
	uint64_t x490 = UINT64_MAX;
	volatile int16_t x491 = -4001;
	int32_t x492 = 404;
	int32_t t104 = 0;

    t104 = ((x489/x490)>(x491+x492));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x493 = INT8_MIN;
	static uint32_t x495 = 336222U;
	uint8_t x496 = 6U;
	volatile int32_t t105 = 29226;

    t105 = ((x493/x494)>(x495+x496));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x498 = 22836U;
	volatile int64_t x499 = INT64_MIN;
	volatile int32_t t106 = -10107893;

    t106 = ((x497/x498)>(x499+x500));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x505 = -1LL;
	static int64_t x506 = -1LL;
	uint16_t x507 = UINT16_MAX;
	int32_t t107 = -7964;

    t107 = ((x505/x506)>(x507+x508));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x513 = 0U;
	static uint32_t x514 = UINT32_MAX;
	static uint64_t x515 = 128332949417478LLU;
	static int8_t x516 = 3;
	volatile int32_t t108 = 5958;

    t108 = ((x513/x514)>(x515+x516));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x517 = INT32_MIN;
	volatile int32_t t109 = -351;

    t109 = ((x517/x518)>(x519+x520));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x521 = INT8_MIN;
	uint8_t x522 = 1U;
	int8_t x523 = INT8_MAX;
	static int16_t x524 = 469;
	volatile int32_t t110 = -49;

    t110 = ((x521/x522)>(x523+x524));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x525 = 1320801U;
	int32_t x526 = INT32_MIN;
	int64_t x527 = INT64_MIN;
	int16_t x528 = 910;
	static volatile int32_t t111 = 2441;

    t111 = ((x525/x526)>(x527+x528));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x529 = -1;
	static int8_t x530 = INT8_MAX;
	volatile int32_t t112 = -4026684;

    t112 = ((x529/x530)>(x531+x532));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x533 = -1;
	int32_t x534 = -1;
	int8_t x536 = INT8_MIN;
	volatile int32_t t113 = -1;

    t113 = ((x533/x534)>(x535+x536));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x537 = INT32_MIN;
	static uint64_t x538 = UINT64_MAX;
	volatile uint16_t x539 = UINT16_MAX;
	int8_t x540 = -1;

    t114 = ((x537/x538)>(x539+x540));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x541 = 1960U;
	int8_t x542 = INT8_MIN;
	uint64_t x544 = 259354549440LLU;
	int32_t t115 = 784;

    t115 = ((x541/x542)>(x543+x544));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x545 = UINT8_MAX;
	volatile uint64_t x546 = 5913LLU;
	int8_t x547 = INT8_MAX;
	volatile uint64_t x548 = 192LLU;
	volatile int32_t t116 = -1331631;

    t116 = ((x545/x546)>(x547+x548));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x549 = 2048;
	uint16_t x550 = UINT16_MAX;
	static int32_t x552 = INT32_MIN;
	int32_t t117 = 284;

    t117 = ((x549/x550)>(x551+x552));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x553 = 65116294718218066LLU;
	int8_t x554 = INT8_MIN;
	volatile int32_t t118 = -107;

    t118 = ((x553/x554)>(x555+x556));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x558 = INT8_MIN;
	uint32_t x560 = 1353257U;

    t119 = ((x557/x558)>(x559+x560));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x561 = INT32_MIN;
	uint64_t x562 = 9435915LLU;
	int16_t x564 = INT16_MAX;
	volatile int32_t t120 = 2989220;

    t120 = ((x561/x562)>(x563+x564));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x568 = INT16_MIN;
	static int32_t t121 = 4;

    t121 = ((x565/x566)>(x567+x568));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x569 = UINT32_MAX;
	int16_t x570 = INT16_MIN;
	int32_t x571 = 699590;

    t122 = ((x569/x570)>(x571+x572));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x573 = UINT16_MAX;
	static uint8_t x575 = 1U;
	int64_t x576 = INT64_MIN;
	int32_t t123 = -895;

    t123 = ((x573/x574)>(x575+x576));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x577 = INT16_MIN;
	int16_t x578 = INT16_MAX;
	static int8_t x579 = -9;
	int32_t x580 = -1;

    t124 = ((x577/x578)>(x579+x580));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x581 = 13U;
	int8_t x583 = INT8_MAX;
	int32_t x584 = 4868;

    t125 = ((x581/x582)>(x583+x584));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x590 = 691659;
	static volatile uint64_t x592 = 4096846055476786LLU;

    t126 = ((x589/x590)>(x591+x592));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x601 = INT32_MIN;
	int64_t x602 = -928LL;
	int8_t x603 = 3;
	int64_t x604 = INT64_MIN;

    t127 = ((x601/x602)>(x603+x604));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x605 = 30U;
	int32_t x607 = -62;
	volatile int32_t t128 = 1755110;

    t128 = ((x605/x606)>(x607+x608));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x609 = INT16_MIN;
	static volatile int64_t x610 = INT64_MAX;
	int64_t x611 = INT64_MAX;
	int32_t x612 = -1;
	int32_t t129 = 824624;

    t129 = ((x609/x610)>(x611+x612));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x613 = -1;
	int16_t x614 = -27;
	volatile int8_t x615 = INT8_MIN;
	int32_t t130 = -747;

    t130 = ((x613/x614)>(x615+x616));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x618 = 9159432;
	int64_t x619 = 1993LL;
	static int16_t x620 = -1;

    t131 = ((x617/x618)>(x619+x620));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x621 = INT16_MIN;
	int64_t x624 = -1LL;
	volatile int32_t t132 = 1658;

    t132 = ((x621/x622)>(x623+x624));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x625 = INT16_MIN;
	uint32_t x626 = UINT32_MAX;
	int64_t x627 = 969LL;
	int32_t x628 = INT32_MIN;

    t133 = ((x625/x626)>(x627+x628));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x629 = 4363010;
	int16_t x630 = 1;
	static uint8_t x631 = 14U;
	int64_t x632 = 129557753019642615LL;
	int32_t t134 = 92;

    t134 = ((x629/x630)>(x631+x632));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x633 = 2989623496773LLU;
	int32_t x634 = -1;
	static int16_t x636 = INT16_MIN;
	volatile int32_t t135 = -2554;

    t135 = ((x633/x634)>(x635+x636));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x637 = -51;
	int8_t x638 = INT8_MAX;
	int32_t t136 = -89657936;

    t136 = ((x637/x638)>(x639+x640));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x641 = UINT64_MAX;
	uint64_t x642 = UINT64_MAX;
	uint8_t x643 = 62U;
	uint32_t x644 = UINT32_MAX;

    t137 = ((x641/x642)>(x643+x644));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x646 = 65U;
	uint64_t x647 = 578915LLU;
	volatile int32_t x648 = 2261406;
	static int32_t t138 = 42067528;

    t138 = ((x645/x646)>(x647+x648));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x650 = UINT8_MAX;
	int8_t x651 = 0;
	int32_t x652 = -445230;
	static volatile int32_t t139 = -8010;

    t139 = ((x649/x650)>(x651+x652));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x653 = 5;
	uint32_t x654 = UINT32_MAX;
	volatile int16_t x656 = 729;
	int32_t t140 = -7898259;

    t140 = ((x653/x654)>(x655+x656));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x657 = -1;
	int32_t x658 = INT32_MIN;
	int16_t x660 = -3;
	int32_t t141 = 10654;

    t141 = ((x657/x658)>(x659+x660));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x662 = INT8_MAX;
	int32_t x663 = INT32_MIN;
	static volatile uint64_t x664 = 350719601703456LLU;
	volatile int32_t t142 = 671306171;

    t142 = ((x661/x662)>(x663+x664));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x665 = INT16_MIN;
	int32_t x666 = 393592;
	int8_t x667 = INT8_MAX;
	volatile int32_t t143 = 0;

    t143 = ((x665/x666)>(x667+x668));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x669 = INT64_MAX;
	uint8_t x670 = UINT8_MAX;
	volatile int16_t x671 = 3;
	int8_t x672 = INT8_MIN;

    t144 = ((x669/x670)>(x671+x672));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x673 = UINT8_MAX;
	int16_t x674 = INT16_MIN;
	int32_t x675 = INT32_MIN;
	volatile uint64_t x676 = UINT64_MAX;
	volatile int32_t t145 = -392;

    t145 = ((x673/x674)>(x675+x676));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x677 = INT8_MIN;
	static int32_t x679 = 1789197;
	static int16_t x680 = 21;

    t146 = ((x677/x678)>(x679+x680));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x681 = INT16_MAX;
	int32_t x682 = INT32_MIN;
	uint32_t x683 = 133984398U;
	int16_t x684 = -1;
	static int32_t t147 = -123648;

    t147 = ((x681/x682)>(x683+x684));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x689 = 1U;
	uint32_t x690 = 122236736U;
	int16_t x692 = INT16_MIN;

    t148 = ((x689/x690)>(x691+x692));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x693 = INT16_MIN;
	uint32_t x694 = 28U;
	volatile int32_t t149 = 24;

    t149 = ((x693/x694)>(x695+x696));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x697 = INT64_MAX;
	uint8_t x698 = 63U;
	int32_t x699 = -2;
	uint32_t x700 = 811U;
	volatile int32_t t150 = -13535851;

    t150 = ((x697/x698)>(x699+x700));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x701 = 8U;
	static int32_t x702 = INT32_MIN;
	volatile int32_t x703 = INT32_MAX;
	int8_t x704 = INT8_MIN;
	static int32_t t151 = 53;

    t151 = ((x701/x702)>(x703+x704));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x705 = 4613U;
	int64_t x707 = 388LL;
	int8_t x708 = INT8_MIN;
	int32_t t152 = -33734679;

    t152 = ((x705/x706)>(x707+x708));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x709 = -1;
	uint64_t x710 = 919347820170090433LLU;
	int16_t x711 = -24;
	uint64_t x712 = UINT64_MAX;
	int32_t t153 = -184;

    t153 = ((x709/x710)>(x711+x712));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x713 = INT16_MAX;
	uint16_t x714 = UINT16_MAX;
	volatile int8_t x715 = -2;
	int64_t x716 = INT64_MAX;
	int32_t t154 = 106158995;

    t154 = ((x713/x714)>(x715+x716));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x717 = 10U;
	int16_t x719 = -1;
	int32_t x720 = -1;
	int32_t t155 = 139065152;

    t155 = ((x717/x718)>(x719+x720));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x721 = -1LL;
	int64_t x724 = 3010730699244231LL;
	int32_t t156 = 17;

    t156 = ((x721/x722)>(x723+x724));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x725 = 1;
	int64_t x726 = INT64_MIN;
	int32_t x727 = -1900;
	volatile uint32_t x728 = 456352U;
	static int32_t t157 = 161487;

    t157 = ((x725/x726)>(x727+x728));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x729 = INT32_MAX;
	volatile int32_t x730 = -1;
	int8_t x731 = -11;
	int64_t x732 = INT64_MAX;
	static int32_t t158 = 9311;

    t158 = ((x729/x730)>(x731+x732));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x733 = INT64_MIN;
	static uint8_t x735 = UINT8_MAX;
	int16_t x736 = -1;
	volatile int32_t t159 = -193;

    t159 = ((x733/x734)>(x735+x736));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x737 = 2U;
	uint64_t x738 = 1575429446968476252LLU;
	volatile int8_t x739 = INT8_MIN;
	volatile int32_t t160 = 3195300;

    t160 = ((x737/x738)>(x739+x740));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x742 = INT32_MIN;
	int8_t x743 = INT8_MAX;
	int64_t x744 = -1LL;
	volatile int32_t t161 = -3;

    t161 = ((x741/x742)>(x743+x744));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x749 = INT32_MIN;
	int64_t x750 = -1LL;
	uint64_t x752 = 395LLU;
	static int32_t t162 = 1935054;

    t162 = ((x749/x750)>(x751+x752));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x754 = -1;
	int32_t x755 = -101269;

    t163 = ((x753/x754)>(x755+x756));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x757 = 1761182364380013LLU;
	int16_t x758 = -1;
	static int32_t x759 = INT32_MIN;
	int64_t x760 = 3LL;
	volatile int32_t t164 = -179410992;

    t164 = ((x757/x758)>(x759+x760));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x761 = -303976004644010LL;
	static int32_t x762 = INT32_MIN;
	uint16_t x763 = 53U;
	int32_t t165 = -22920180;

    t165 = ((x761/x762)>(x763+x764));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x765 = UINT8_MAX;
	int64_t x766 = -512137369045948LL;
	volatile int32_t x767 = 8690122;
	static int16_t x768 = INT16_MIN;
	volatile int32_t t166 = -268693681;

    t166 = ((x765/x766)>(x767+x768));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x769 = INT8_MAX;
	uint16_t x770 = 1U;
	int8_t x771 = INT8_MAX;
	int16_t x772 = INT16_MAX;
	int32_t t167 = -13093749;

    t167 = ((x769/x770)>(x771+x772));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x773 = 50986995U;
	static uint16_t x776 = 4546U;

    t168 = ((x773/x774)>(x775+x776));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x777 = UINT8_MAX;
	int8_t x778 = INT8_MIN;
	uint32_t x779 = 842074U;
	uint64_t x780 = UINT64_MAX;
	int32_t t169 = 188;

    t169 = ((x777/x778)>(x779+x780));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x781 = -10622696319541629LL;
	uint16_t x782 = UINT16_MAX;
	int32_t x783 = INT32_MIN;
	volatile int32_t t170 = 3035;

    t170 = ((x781/x782)>(x783+x784));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x786 = UINT16_MAX;
	int32_t x787 = -10206264;
	uint32_t x788 = UINT32_MAX;
	int32_t t171 = 3130385;

    t171 = ((x785/x786)>(x787+x788));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x789 = INT64_MIN;
	int8_t x792 = INT8_MAX;
	int32_t t172 = 822223;

    t172 = ((x789/x790)>(x791+x792));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x793 = UINT64_MAX;
	static uint16_t x794 = 3U;
	uint32_t x795 = 56318U;
	int16_t x796 = 733;

    t173 = ((x793/x794)>(x795+x796));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x797 = -1;
	int64_t x798 = -1LL;
	uint32_t x799 = 47U;
	int64_t x800 = -1LL;
	static volatile int32_t t174 = -44004;

    t174 = ((x797/x798)>(x799+x800));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x806 = -1;
	static uint32_t x807 = 527U;
	volatile int32_t t175 = 12;

    t175 = ((x805/x806)>(x807+x808));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x814 = 98377443U;
	uint64_t x815 = 7919LLU;
	uint16_t x816 = UINT16_MAX;
	int32_t t176 = -645401546;

    t176 = ((x813/x814)>(x815+x816));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x821 = -47;
	int32_t x823 = INT32_MIN;
	uint16_t x824 = UINT16_MAX;
	volatile int32_t t177 = -77492868;

    t177 = ((x821/x822)>(x823+x824));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x825 = UINT8_MAX;
	int32_t x828 = 97;
	int32_t t178 = 125602663;

    t178 = ((x825/x826)>(x827+x828));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x829 = UINT16_MAX;
	volatile int8_t x830 = INT8_MIN;
	int8_t x831 = -1;
	int32_t x832 = -1;
	volatile int32_t t179 = -7;

    t179 = ((x829/x830)>(x831+x832));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x833 = INT64_MIN;
	int16_t x834 = INT16_MIN;
	volatile uint32_t x835 = UINT32_MAX;
	volatile int16_t x836 = 17;
	volatile int32_t t180 = 2922;

    t180 = ((x833/x834)>(x835+x836));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x841 = 255344261LLU;
	volatile int32_t x842 = INT32_MAX;
	static uint32_t x843 = 1252U;
	uint8_t x844 = 3U;
	int32_t t181 = 187;

    t181 = ((x841/x842)>(x843+x844));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x845 = UINT32_MAX;
	int32_t x846 = INT32_MIN;

    t182 = ((x845/x846)>(x847+x848));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x849 = 2041870U;
	uint64_t x850 = 2392924734902LLU;
	static int8_t x851 = -51;
	volatile int32_t t183 = -203737067;

    t183 = ((x849/x850)>(x851+x852));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x858 = -1;
	uint8_t x859 = 2U;
	volatile int32_t t184 = -1;

    t184 = ((x857/x858)>(x859+x860));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x861 = INT16_MAX;
	static volatile uint8_t x864 = UINT8_MAX;
	int32_t t185 = 0;

    t185 = ((x861/x862)>(x863+x864));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x869 = -1;
	volatile int16_t x870 = INT16_MAX;
	volatile uint16_t x871 = 20973U;
	int8_t x872 = -28;
	static int32_t t186 = -42302;

    t186 = ((x869/x870)>(x871+x872));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x873 = -2;
	int16_t x874 = INT16_MAX;
	volatile int32_t t187 = -3888850;

    t187 = ((x873/x874)>(x875+x876));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x877 = -2;
	volatile uint32_t x878 = 31728596U;
	volatile uint8_t x879 = 5U;
	int64_t x880 = INT64_MIN;
	static int32_t t188 = -30;

    t188 = ((x877/x878)>(x879+x880));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x881 = INT64_MIN;
	uint64_t x882 = 1264688614148720LLU;
	int8_t x883 = INT8_MIN;
	static int32_t t189 = -138429115;

    t189 = ((x881/x882)>(x883+x884));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x885 = 0;
	uint16_t x886 = UINT16_MAX;
	int16_t x888 = INT16_MAX;
	static int32_t t190 = -973;

    t190 = ((x885/x886)>(x887+x888));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x889 = 12U;
	int32_t x890 = 4;
	volatile int64_t x891 = -12LL;
	uint8_t x892 = 7U;
	int32_t t191 = 0;

    t191 = ((x889/x890)>(x891+x892));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x893 = -1;
	uint16_t x894 = UINT16_MAX;
	int8_t x895 = -1;
	volatile int16_t x896 = INT16_MAX;

    t192 = ((x893/x894)>(x895+x896));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x897 = 7U;
	int32_t x898 = INT32_MAX;
	volatile int8_t x899 = INT8_MAX;
	volatile int32_t x900 = INT32_MIN;

    t193 = ((x897/x898)>(x899+x900));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x901 = INT32_MIN;
	static uint16_t x902 = 25U;
	static int16_t x903 = 192;
	int32_t t194 = -2;

    t194 = ((x901/x902)>(x903+x904));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x909 = INT64_MIN;
	uint16_t x910 = UINT16_MAX;
	int16_t x911 = INT16_MAX;
	int16_t x912 = 202;
	volatile int32_t t195 = -2;

    t195 = ((x909/x910)>(x911+x912));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x913 = INT8_MIN;
	static int64_t x914 = 16436058LL;
	volatile int64_t x916 = -1LL;

    t196 = ((x913/x914)>(x915+x916));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x917 = INT64_MIN;
	volatile uint32_t x918 = 1338792440U;
	int16_t x919 = INT16_MIN;
	volatile int32_t x920 = -1547;
	static int32_t t197 = -1;

    t197 = ((x917/x918)>(x919+x920));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x921 = INT64_MIN;
	volatile uint16_t x922 = 29965U;
	static uint16_t x924 = 123U;
	static volatile int32_t t198 = 649283;

    t198 = ((x921/x922)>(x923+x924));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x925 = INT64_MIN;
	volatile int32_t x926 = 12;
	static int32_t x927 = INT32_MIN;
	volatile int64_t x928 = INT64_MAX;
	volatile int32_t t199 = -5622302;

    t199 = ((x925/x926)>(x927+x928));

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

