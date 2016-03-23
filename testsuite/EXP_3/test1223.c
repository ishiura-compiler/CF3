
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

static int64_t t0 = -47377970LL;
static volatile int8_t x7 = 0;
uint16_t x13 = UINT16_MAX;
static uint64_t x14 = 42501903568995340LLU;
int64_t x20 = 30LL;
int8_t x23 = 1;
volatile int32_t t6 = -4;
int64_t x29 = INT64_MIN;
int16_t x34 = -5;
int16_t x36 = -1006;
uint16_t x39 = UINT16_MAX;
int32_t t9 = 1;
uint8_t x45 = UINT8_MAX;
static int64_t x51 = INT64_MIN;
int32_t x52 = -53;
volatile int32_t t13 = 3430367;
int8_t x58 = INT8_MIN;
volatile int32_t t14 = -662393;
static int64_t x69 = INT64_MIN;
volatile uint16_t x72 = UINT16_MAX;
volatile int32_t x75 = 113374346;
volatile uint8_t x77 = UINT8_MAX;
static uint8_t x79 = UINT8_MAX;
int16_t x81 = -1;
static int32_t x82 = -13214905;
volatile int16_t x84 = -193;
int8_t x86 = INT8_MIN;
uint64_t x91 = 4LLU;
volatile int32_t t23 = -28639034;
volatile uint16_t x99 = 6U;
static uint16_t x104 = 218U;
uint32_t x109 = 5544U;
volatile int32_t t28 = 19;
int32_t x120 = INT32_MIN;
int32_t t30 = 0;
int8_t x125 = INT8_MAX;
static int16_t x126 = INT16_MIN;
volatile int64_t x130 = INT64_MIN;
int8_t x134 = -1;
static volatile int8_t x136 = 7;
int16_t x143 = INT16_MAX;
uint16_t x144 = 14U;
uint64_t x147 = 7212413LLU;
static int64_t t37 = 5177962900LL;
int32_t x161 = INT32_MAX;
int16_t x163 = -1;
int16_t x165 = INT16_MIN;
volatile int32_t t40 = 279432;
uint64_t x169 = 1602577LLU;
uint16_t x174 = UINT16_MAX;
int32_t t43 = 19264450;
volatile int8_t x181 = -11;
int64_t x185 = -1LL;
uint16_t x192 = 15U;
static int8_t x197 = INT8_MIN;
uint32_t x199 = 4U;
int32_t t48 = -943;
static int8_t x204 = INT8_MAX;
int64_t x208 = INT64_MIN;
int8_t x209 = INT8_MIN;
static int16_t x222 = -1;
volatile int32_t t54 = 9797410;
int64_t x225 = -18619144LL;
volatile int64_t x226 = -25920396LL;
int64_t t55 = -1126LL;
int32_t t57 = -100756;
static volatile uint64_t t58 = 234692990591772499LLU;
static int32_t x248 = -7;
int16_t x250 = INT16_MIN;
int64_t x253 = 827555217974626725LL;
uint64_t x255 = UINT64_MAX;
uint8_t x256 = 1U;
int8_t x259 = 0;
uint8_t x271 = UINT8_MAX;
int8_t x281 = 9;
uint32_t x291 = UINT32_MAX;
int32_t x299 = INT32_MIN;
static int64_t x302 = -1LL;
int32_t x306 = INT32_MAX;
volatile uint32_t x307 = UINT32_MAX;
static volatile int8_t x308 = -3;
volatile int64_t t74 = -217LL;
volatile int32_t x309 = INT32_MIN;
int32_t x311 = -1;
volatile uint8_t x314 = UINT8_MAX;
int16_t x321 = INT16_MIN;
uint32_t x324 = 8515U;
int16_t x327 = 7659;
uint32_t x330 = UINT32_MAX;
static volatile int32_t t81 = 45896;
int32_t t82 = 352636;
int8_t x358 = INT8_MIN;
int32_t t86 = 3742470;
int16_t x386 = INT16_MIN;
int32_t x387 = INT32_MAX;
static int32_t x394 = INT32_MIN;
volatile uint16_t x396 = 439U;
int8_t x397 = INT8_MIN;
int8_t x404 = INT8_MAX;
int64_t t96 = 2209397807412LL;
int64_t x405 = 9121570040LL;
int32_t t101 = -15798442;
uint8_t x429 = UINT8_MAX;
volatile int16_t x456 = -1;
uint32_t x458 = UINT32_MAX;
int64_t x465 = -8567078LL;
uint32_t x469 = 187769234U;
static uint16_t x470 = 30788U;
uint32_t x472 = UINT32_MAX;
int8_t x474 = INT8_MAX;
int32_t x483 = INT32_MIN;
int8_t x488 = 1;
int64_t x492 = -1LL;
int8_t x494 = INT8_MIN;
volatile uint32_t x495 = 1906110622U;
uint32_t t115 = 831U;
static volatile int8_t x508 = INT8_MIN;
static int8_t x511 = INT8_MIN;
int64_t x512 = INT64_MIN;
int32_t x515 = -1;
int32_t x520 = INT32_MIN;
int16_t x525 = INT16_MIN;
volatile int16_t x527 = -1;
uint64_t t124 = 661LLU;
static volatile uint8_t x542 = UINT8_MAX;
static int16_t x544 = 0;
int8_t x547 = INT8_MAX;
uint8_t x557 = UINT8_MAX;
static uint64_t x596 = UINT64_MAX;
volatile int16_t x607 = INT16_MAX;
volatile uint64_t x609 = 1781LLU;
int32_t x611 = -98548548;
int32_t t144 = 1;
static uint16_t x633 = UINT16_MAX;
volatile int32_t t146 = 1983;
int16_t x637 = INT16_MAX;
int64_t x648 = INT64_MIN;
uint16_t x651 = 2U;
uint8_t x653 = UINT8_MAX;
volatile int8_t x654 = INT8_MAX;
int32_t x657 = INT32_MIN;
int16_t x663 = -228;
uint8_t x666 = 6U;
static volatile int8_t x669 = INT8_MIN;
uint64_t t154 = 349486132414953959LLU;
uint8_t x679 = 5U;
volatile int8_t x680 = INT8_MIN;
int8_t x682 = INT8_MIN;
int16_t x688 = INT16_MAX;
int64_t x690 = INT64_MIN;
int8_t x692 = -5;
static int64_t x693 = 56949513642LL;
volatile int64_t x704 = INT64_MAX;
uint16_t x705 = 3U;
volatile int16_t x714 = -1;
int8_t x724 = -1;
volatile int32_t t170 = -33;
uint8_t x737 = 7U;
static volatile int16_t x741 = 0;
volatile int32_t t172 = 365748;
static uint8_t x754 = 3U;
int16_t x757 = -1;
int64_t x760 = INT64_MIN;
int64_t x766 = -212184272927LL;
uint8_t x773 = 5U;
uint32_t x774 = UINT32_MAX;
static int32_t t181 = 665713225;
uint8_t x781 = 0U;
int8_t x782 = -1;
int64_t x795 = -1LL;
int8_t x796 = -5;
int32_t x801 = INT32_MIN;
int8_t x810 = -1;
int64_t x812 = INT64_MAX;
static int8_t x816 = 13;
int64_t x818 = -1LL;
int64_t x819 = INT64_MIN;
int16_t x823 = -2587;
volatile int16_t x834 = INT16_MIN;
volatile int16_t x838 = -444;
int8_t x839 = 3;
static int8_t x845 = INT8_MIN;
int32_t t198 = 541486122;
uint16_t x851 = 2U;
int32_t t199 = -21930401;


void f0(void) {
    	int16_t x1 = 0;
	int64_t x2 = INT64_MAX;
	uint32_t x3 = 800147939U;
	uint16_t x4 = 261U;

    t0 = ((x1/x2)%(x3!=x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 4906U;
	volatile uint8_t x6 = 53U;
	volatile uint32_t x8 = 823U;
	int32_t t1 = -10;

    t1 = ((x5/x6)%(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 6965;
	int8_t x10 = -1;
	int64_t x11 = INT64_MAX;
	int32_t x12 = -1;
	int32_t t2 = 37;

    t2 = ((x9/x10)%(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x15 = 26LLU;
	int8_t x16 = INT8_MIN;
	volatile uint64_t t3 = 2032571654LLU;

    t3 = ((x13/x14)%(x15!=x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = 0U;
	uint8_t x18 = UINT8_MAX;
	int32_t x19 = INT32_MIN;
	int32_t t4 = -2506;

    t4 = ((x17/x18)%(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	uint8_t x22 = 107U;
	int32_t x24 = -1;
	int32_t t5 = 4538101;

    t5 = ((x21/x22)%(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = -1;
	int32_t x26 = 102;
	static int8_t x27 = 1;
	uint8_t x28 = 60U;

    t6 = ((x25/x26)%(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MIN;
	volatile int8_t x31 = INT8_MIN;
	static volatile uint64_t x32 = 16367157609LLU;
	int64_t t7 = -152403LL;

    t7 = ((x29/x30)%(x31!=x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	static int64_t x35 = INT64_MIN;
	int32_t t8 = 171584447;

    t8 = ((x33/x34)%(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 43U;
	uint16_t x38 = UINT16_MAX;
	int8_t x40 = INT8_MIN;

    t9 = ((x37/x38)%(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MIN;
	int64_t x42 = -1LL;
	volatile int8_t x43 = 5;
	int16_t x44 = -1;
	volatile int64_t t10 = 12LL;

    t10 = ((x41/x42)%(x43!=x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MIN;
	uint8_t x47 = 5U;
	static uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = -1257675;

    t11 = ((x45/x46)%(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MIN;
	int8_t x50 = -1;
	volatile int32_t t12 = -1765;

    t12 = ((x49/x50)%(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	uint8_t x54 = 5U;
	static uint32_t x55 = 269846836U;
	volatile int8_t x56 = -1;

    t13 = ((x53/x54)%(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	int64_t x59 = -278942542529LL;
	int64_t x60 = 11718163050104754LL;

    t14 = ((x57/x58)%(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 2150331008850LLU;
	uint64_t x62 = 4276195339LLU;
	int16_t x63 = 83;
	int64_t x64 = INT64_MIN;
	static uint64_t t15 = 2580211882087LLU;

    t15 = ((x61/x62)%(x63!=x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 94446U;
	int32_t x66 = -1;
	int32_t x67 = -1;
	int16_t x68 = 10352;
	uint32_t t16 = 1777507U;

    t16 = ((x65/x66)%(x67!=x68));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = 6;
	int32_t x71 = -39500814;
	volatile int64_t t17 = -826101329096499LL;

    t17 = ((x69/x70)%(x71!=x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 12U;
	static volatile int32_t x74 = 108224247;
	volatile int64_t x76 = -1LL;
	volatile int32_t t18 = -14;

    t18 = ((x73/x74)%(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = 19LLU;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t19 = 14773766526480LLU;

    t19 = ((x77/x78)%(x79!=x80));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x83 = UINT8_MAX;
	int32_t t20 = -1;

    t20 = ((x81/x82)%(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = 32U;
	static int32_t t21 = 5967;

    t21 = ((x85/x86)%(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x89 = UINT64_MAX;
	static uint32_t x90 = UINT32_MAX;
	int16_t x92 = -1;
	uint64_t t22 = 1125621867749673811LLU;

    t22 = ((x89/x90)%(x91!=x92));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = -2;
	static volatile int16_t x94 = -1;
	int32_t x95 = -34557;
	int32_t x96 = -1;

    t23 = ((x93/x94)%(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 648143U;
	uint32_t x98 = 128139U;
	volatile int8_t x100 = -4;
	volatile uint32_t t24 = 3U;

    t24 = ((x97/x98)%(x99!=x100));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MIN;
	uint64_t x102 = 8729739LLU;
	static int32_t x103 = INT32_MAX;
	static volatile uint64_t t25 = 3013972469261LLU;

    t25 = ((x101/x102)%(x103!=x104));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 96485793U;
	volatile int32_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = 4253914629182056LL;
	static volatile uint32_t t26 = 3U;

    t26 = ((x105/x106)%(x107!=x108));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = 18;
	volatile uint64_t x111 = UINT64_MAX;
	int64_t x112 = 368LL;
	static uint32_t t27 = 16U;

    t27 = ((x109/x110)%(x111!=x112));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x113 = 1U;
	volatile int32_t x114 = INT32_MIN;
	uint8_t x115 = 11U;
	static uint16_t x116 = UINT16_MAX;

    t28 = ((x113/x114)%(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 51658477U;
	volatile uint8_t x118 = 102U;
	volatile uint16_t x119 = 5U;
	uint32_t t29 = 42241651U;

    t29 = ((x117/x118)%(x119!=x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = -1;
	int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MAX;
	int8_t x124 = 0;

    t30 = ((x121/x122)%(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x127 = INT16_MIN;
	int16_t x128 = -1;
	int32_t t31 = -7;

    t31 = ((x125/x126)%(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	int64_t x132 = 2401719723LL;
	int64_t t32 = 96809792039736LL;

    t32 = ((x129/x130)%(x131!=x132));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = -37;
	static volatile uint16_t x135 = UINT16_MAX;
	int32_t t33 = -116;

    t33 = ((x133/x134)%(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x141 = INT32_MIN;
	uint16_t x142 = 510U;
	volatile int32_t t34 = 57995542;

    t34 = ((x141/x142)%(x143!=x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = -1;
	int64_t x146 = INT64_MAX;
	static int32_t x148 = INT32_MIN;
	volatile int64_t t35 = 263016990557290223LL;

    t35 = ((x145/x146)%(x147!=x148));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = INT32_MIN;
	int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MAX;
	int64_t x152 = INT64_MIN;
	int64_t t36 = 84684934824LL;

    t36 = ((x149/x150)%(x151!=x152));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = INT16_MAX;
	int64_t x154 = 1LL;
	int32_t x155 = INT32_MAX;
	static int8_t x156 = -3;

    t37 = ((x153/x154)%(x155!=x156));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x157 = 0U;
	int8_t x158 = INT8_MIN;
	uint8_t x159 = 75U;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t38 = -9107543;

    t38 = ((x157/x158)%(x159!=x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x162 = -1;
	uint16_t x164 = 180U;
	static int32_t t39 = -420096;

    t39 = ((x161/x162)%(x163!=x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x166 = INT32_MAX;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MIN;

    t40 = ((x165/x166)%(x167!=x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x170 = 95U;
	static int16_t x171 = -775;
	int64_t x172 = -1LL;
	uint64_t t41 = 210363336LLU;

    t41 = ((x169/x170)%(x171!=x172));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x173 = 67416020256LLU;
	int64_t x175 = -17940LL;
	uint8_t x176 = UINT8_MAX;
	uint64_t t42 = 2093232LLU;

    t42 = ((x173/x174)%(x175!=x176));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MIN;
	static int16_t x178 = -3;
	uint64_t x179 = 598790413796208LLU;
	int32_t x180 = INT32_MAX;

    t43 = ((x177/x178)%(x179!=x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x182 = INT8_MIN;
	static uint64_t x183 = 7430429LLU;
	int64_t x184 = INT64_MIN;
	volatile int32_t t44 = 0;

    t44 = ((x181/x182)%(x183!=x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x186 = -1LL;
	uint8_t x187 = 7U;
	int8_t x188 = INT8_MIN;
	int64_t t45 = 404594LL;

    t45 = ((x185/x186)%(x187!=x188));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x189 = 215044853740738511LLU;
	static int8_t x190 = 6;
	int16_t x191 = INT16_MIN;
	volatile uint64_t t46 = 19561509035006766LLU;

    t46 = ((x189/x190)%(x191!=x192));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = UINT16_MAX;
	int8_t x194 = -1;
	volatile int16_t x195 = INT16_MIN;
	uint16_t x196 = 59U;
	volatile int32_t t47 = 12841;

    t47 = ((x193/x194)%(x195!=x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x198 = 31452U;
	static int16_t x200 = INT16_MIN;

    t48 = ((x197/x198)%(x199!=x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x201 = -111991346480572LL;
	int64_t x202 = INT64_MAX;
	uint64_t x203 = UINT64_MAX;
	volatile int64_t t49 = 10493126LL;

    t49 = ((x201/x202)%(x203!=x204));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = 19;
	static volatile uint16_t x206 = 374U;
	int16_t x207 = INT16_MIN;
	int32_t t50 = 11117;

    t50 = ((x205/x206)%(x207!=x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x210 = 29U;
	int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MAX;
	int32_t t51 = 817204320;

    t51 = ((x209/x210)%(x211!=x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = INT32_MAX;
	uint16_t x214 = 2U;
	int8_t x215 = 1;
	int8_t x216 = INT8_MAX;
	int32_t t52 = 33209;

    t52 = ((x213/x214)%(x215!=x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = INT32_MAX;
	static int8_t x218 = INT8_MAX;
	static int8_t x219 = -1;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t53 = 24760286;

    t53 = ((x217/x218)%(x219!=x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x221 = -2;
	int8_t x223 = -2;
	uint32_t x224 = 13036U;

    t54 = ((x221/x222)%(x223!=x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x227 = UINT8_MAX;
	uint8_t x228 = 49U;

    t55 = ((x225/x226)%(x227!=x228));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x229 = INT64_MIN;
	static volatile int8_t x230 = -30;
	uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MIN;
	volatile int64_t t56 = 3225975368328LL;

    t56 = ((x229/x230)%(x231!=x232));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x233 = UINT16_MAX;
	static int16_t x234 = INT16_MIN;
	volatile int8_t x235 = -1;
	uint64_t x236 = 4085299024LLU;

    t57 = ((x233/x234)%(x235!=x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x237 = 29758LLU;
	uint64_t x238 = 2489LLU;
	int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;

    t58 = ((x237/x238)%(x239!=x240));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x241 = -14;
	volatile uint16_t x242 = 23U;
	static uint8_t x243 = 91U;
	uint32_t x244 = UINT32_MAX;
	int32_t t59 = 44;

    t59 = ((x241/x242)%(x243!=x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x245 = 1735605;
	int64_t x246 = -1826559044LL;
	int8_t x247 = -2;
	int64_t t60 = 3802963798937293703LL;

    t60 = ((x245/x246)%(x247!=x248));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MIN;
	volatile int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	int64_t t61 = 219954216474958LL;

    t61 = ((x249/x250)%(x251!=x252));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x254 = -29;
	static volatile int64_t t62 = -3092LL;

    t62 = ((x253/x254)%(x255!=x256));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = -1;
	uint16_t x258 = 1508U;
	int64_t x260 = 12261975314807813LL;
	static int32_t t63 = -17047;

    t63 = ((x257/x258)%(x259!=x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x261 = INT8_MIN;
	static uint32_t x262 = 43461U;
	int8_t x263 = INT8_MAX;
	volatile int32_t x264 = -1;
	uint32_t t64 = 12295337U;

    t64 = ((x261/x262)%(x263!=x264));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x265 = -2057825LL;
	uint64_t x266 = UINT64_MAX;
	uint8_t x267 = 4U;
	int64_t x268 = INT64_MIN;
	uint64_t t65 = 233145098417122LLU;

    t65 = ((x265/x266)%(x267!=x268));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = UINT32_MAX;
	static uint32_t x270 = 50U;
	uint8_t x272 = 14U;
	volatile uint32_t t66 = 13589614U;

    t66 = ((x269/x270)%(x271!=x272));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = 27;
	volatile int32_t x278 = INT32_MAX;
	static volatile int8_t x279 = INT8_MAX;
	int32_t x280 = 195650226;
	static volatile int32_t t67 = 0;

    t67 = ((x277/x278)%(x279!=x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x282 = UINT32_MAX;
	int64_t x283 = -158233156LL;
	static uint16_t x284 = UINT16_MAX;
	uint32_t t68 = 3U;

    t68 = ((x281/x282)%(x283!=x284));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x285 = INT8_MAX;
	int32_t x286 = -1;
	uint64_t x287 = 45344777LLU;
	int8_t x288 = INT8_MAX;
	volatile int32_t t69 = 85;

    t69 = ((x285/x286)%(x287!=x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x289 = UINT8_MAX;
	int32_t x290 = -1;
	static int32_t x292 = INT32_MIN;
	static int32_t t70 = 3847435;

    t70 = ((x289/x290)%(x291!=x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x293 = 9296U;
	int16_t x294 = -5028;
	volatile int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t71 = -12425;

    t71 = ((x293/x294)%(x295!=x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x297 = UINT16_MAX;
	int8_t x298 = -2;
	volatile int16_t x300 = INT16_MIN;
	static volatile int32_t t72 = 3917;

    t72 = ((x297/x298)%(x299!=x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x301 = -12;
	static int64_t x303 = -14214LL;
	int8_t x304 = -1;
	volatile int64_t t73 = 3305420951LL;

    t73 = ((x301/x302)%(x303!=x304));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x305 = -133494523218176LL;

    t74 = ((x305/x306)%(x307!=x308));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x310 = INT32_MIN;
	volatile uint16_t x312 = 787U;
	volatile int32_t t75 = 122084;

    t75 = ((x309/x310)%(x311!=x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x313 = INT32_MIN;
	uint16_t x315 = 2035U;
	uint32_t x316 = 39405702U;
	int32_t t76 = 85;

    t76 = ((x313/x314)%(x315!=x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x317 = 107U;
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MAX;
	volatile uint64_t x320 = 1566524262998LLU;
	uint32_t t77 = 52692U;

    t77 = ((x317/x318)%(x319!=x320));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x322 = -1;
	uint64_t x323 = 814833316LLU;
	int32_t t78 = 590211971;

    t78 = ((x321/x322)%(x323!=x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MIN;
	volatile uint64_t x326 = UINT64_MAX;
	int32_t x328 = 3664728;
	volatile uint64_t t79 = 56692772LLU;

    t79 = ((x325/x326)%(x327!=x328));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = -482555492364436LL;
	int64_t x331 = -1LL;
	uint32_t x332 = 2U;
	int64_t t80 = -211373891518125735LL;

    t80 = ((x329/x330)%(x331!=x332));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x333 = -1;
	int32_t x334 = INT32_MIN;
	static volatile int64_t x335 = -1LL;
	uint32_t x336 = UINT32_MAX;

    t81 = ((x333/x334)%(x335!=x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = 331;
	static int8_t x340 = INT8_MAX;

    t82 = ((x337/x338)%(x339!=x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MAX;
	volatile uint32_t x343 = UINT32_MAX;
	int16_t x344 = -77;
	int32_t t83 = 179527928;

    t83 = ((x341/x342)%(x343!=x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = INT8_MAX;
	volatile int16_t x350 = 2276;
	int64_t x351 = -37LL;
	int16_t x352 = 15999;
	volatile int32_t t84 = 0;

    t84 = ((x349/x350)%(x351!=x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x353 = INT16_MIN;
	uint64_t x354 = UINT64_MAX;
	int16_t x355 = -1819;
	int32_t x356 = -155;
	uint64_t t85 = 489921LLU;

    t85 = ((x353/x354)%(x355!=x356));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = INT8_MIN;
	uint8_t x359 = 11U;
	uint32_t x360 = 65913066U;

    t86 = ((x357/x358)%(x359!=x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x361 = 28U;
	int32_t x362 = INT32_MIN;
	volatile int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MAX;
	int32_t t87 = -36735349;

    t87 = ((x361/x362)%(x363!=x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x369 = 0U;
	int64_t x370 = INT64_MIN;
	int8_t x371 = 0;
	volatile int64_t x372 = INT64_MIN;
	int64_t t88 = 77137111561196LL;

    t88 = ((x369/x370)%(x371!=x372));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = UINT16_MAX;
	int32_t x374 = INT32_MAX;
	static uint32_t x375 = 239844U;
	int64_t x376 = -1LL;
	int32_t t89 = -214301914;

    t89 = ((x373/x374)%(x375!=x376));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = INT8_MAX;
	int8_t x378 = -19;
	volatile uint8_t x379 = UINT8_MAX;
	int16_t x380 = -1;
	volatile int32_t t90 = -8682;

    t90 = ((x377/x378)%(x379!=x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x381 = UINT64_MAX;
	uint64_t x382 = UINT64_MAX;
	int64_t x383 = INT64_MAX;
	uint8_t x384 = 17U;
	static uint64_t t91 = 60969352LLU;

    t91 = ((x381/x382)%(x383!=x384));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x385 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	int32_t t92 = 27969;

    t92 = ((x385/x386)%(x387!=x388));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint64_t x389 = 438575961970LLU;
	int8_t x390 = INT8_MIN;
	int8_t x391 = -1;
	uint8_t x392 = 15U;
	uint64_t t93 = 131293900925LLU;

    t93 = ((x389/x390)%(x391!=x392));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = 4;
	int32_t x395 = 103;
	int32_t t94 = 8749363;

    t94 = ((x393/x394)%(x395!=x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x398 = 5663040;
	static uint64_t x399 = UINT64_MAX;
	static int64_t x400 = 1LL;
	static int32_t t95 = 2386635;

    t95 = ((x397/x398)%(x399!=x400));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MIN;
	uint32_t x403 = UINT32_MAX;

    t96 = ((x401/x402)%(x403!=x404));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x406 = 1100243386LLU;
	int32_t x407 = INT32_MIN;
	int32_t x408 = -1;
	uint64_t t97 = 58971832159988324LLU;

    t97 = ((x405/x406)%(x407!=x408));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x409 = 284035U;
	volatile int32_t x410 = -1;
	static volatile int64_t x411 = 1908400LL;
	uint64_t x412 = UINT64_MAX;
	static uint32_t t98 = 2526U;

    t98 = ((x409/x410)%(x411!=x412));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x413 = UINT64_MAX;
	static volatile uint16_t x414 = UINT16_MAX;
	int64_t x415 = 626LL;
	static uint32_t x416 = UINT32_MAX;
	volatile uint64_t t99 = 8262536891LLU;

    t99 = ((x413/x414)%(x415!=x416));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x417 = 238752585U;
	static uint64_t x418 = 175540988124977495LLU;
	volatile int64_t x419 = INT64_MIN;
	uint16_t x420 = 209U;
	uint64_t t100 = 55806393795866LLU;

    t100 = ((x417/x418)%(x419!=x420));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x421 = INT32_MIN;
	uint16_t x422 = 4U;
	int64_t x423 = INT64_MIN;
	int64_t x424 = INT64_MAX;

    t101 = ((x421/x422)%(x423!=x424));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x430 = UINT32_MAX;
	int32_t x431 = INT32_MIN;
	int16_t x432 = -368;
	volatile uint32_t t102 = 38195U;

    t102 = ((x429/x430)%(x431!=x432));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x437 = -1;
	int16_t x438 = -13;
	volatile uint32_t x439 = UINT32_MAX;
	uint32_t x440 = 63921186U;
	volatile int32_t t103 = -35286333;

    t103 = ((x437/x438)%(x439!=x440));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x445 = 465275253U;
	static int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;
	int64_t t104 = -4913130270LL;

    t104 = ((x445/x446)%(x447!=x448));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x449 = -66359815;
	static uint8_t x450 = UINT8_MAX;
	int64_t x451 = INT64_MAX;
	int32_t x452 = INT32_MIN;
	volatile int32_t t105 = -4065374;

    t105 = ((x449/x450)%(x451!=x452));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x453 = 102U;
	int64_t x454 = -816455LL;
	int64_t x455 = INT64_MIN;
	static int64_t t106 = -585769119827635435LL;

    t106 = ((x453/x454)%(x455!=x456));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x457 = 1014U;
	volatile uint8_t x459 = UINT8_MAX;
	int64_t x460 = INT64_MIN;
	volatile uint32_t t107 = 43789U;

    t107 = ((x457/x458)%(x459!=x460));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x466 = 17U;
	volatile uint8_t x467 = 26U;
	static uint64_t x468 = 347089LLU;
	int64_t t108 = 32491LL;

    t108 = ((x465/x466)%(x467!=x468));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x471 = 1;
	volatile uint32_t t109 = 3U;

    t109 = ((x469/x470)%(x471!=x472));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x473 = 659166800161284LLU;
	static volatile int64_t x475 = INT64_MIN;
	static int32_t x476 = INT32_MIN;
	uint64_t t110 = 16027554002361208LLU;

    t110 = ((x473/x474)%(x475!=x476));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x477 = -38645LL;
	uint16_t x478 = 2U;
	int32_t x479 = -137346;
	static int8_t x480 = INT8_MIN;
	static int64_t t111 = -1860971893222LL;

    t111 = ((x477/x478)%(x479!=x480));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x481 = -1;
	volatile int16_t x482 = INT16_MAX;
	volatile uint32_t x484 = 1899523003U;
	int32_t t112 = -48;

    t112 = ((x481/x482)%(x483!=x484));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x485 = INT16_MIN;
	int32_t x486 = INT32_MIN;
	int8_t x487 = 0;
	int32_t t113 = 17048496;

    t113 = ((x485/x486)%(x487!=x488));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x489 = INT64_MIN;
	int8_t x490 = 29;
	int16_t x491 = -1859;
	volatile int64_t t114 = -24988026227015211LL;

    t114 = ((x489/x490)%(x491!=x492));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x493 = 41589U;
	int32_t x496 = 58;

    t115 = ((x493/x494)%(x495!=x496));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x497 = INT8_MAX;
	static int16_t x498 = INT16_MIN;
	uint64_t x499 = 33453204830LLU;
	volatile uint16_t x500 = UINT16_MAX;
	volatile int32_t t116 = -12050;

    t116 = ((x497/x498)%(x499!=x500));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	volatile int16_t x502 = -1;
	uint8_t x503 = UINT8_MAX;
	static int64_t x504 = -126LL;
	int32_t t117 = -250518204;

    t117 = ((x501/x502)%(x503!=x504));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x505 = 0U;
	volatile int8_t x506 = INT8_MIN;
	volatile int16_t x507 = 9;
	static int32_t t118 = -5533;

    t118 = ((x505/x506)%(x507!=x508));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x509 = -1;
	volatile int16_t x510 = INT16_MIN;
	int32_t t119 = -256464;

    t119 = ((x509/x510)%(x511!=x512));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x513 = INT8_MIN;
	volatile int8_t x514 = -1;
	int8_t x516 = INT8_MIN;
	static int32_t t120 = 71165;

    t120 = ((x513/x514)%(x515!=x516));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x517 = INT8_MAX;
	volatile int8_t x518 = INT8_MAX;
	uint64_t x519 = 36038046318923763LLU;
	int32_t t121 = 92428129;

    t121 = ((x517/x518)%(x519!=x520));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x521 = 214523U;
	int64_t x522 = INT64_MAX;
	volatile int16_t x523 = 3;
	uint32_t x524 = 2814U;
	int64_t t122 = 36998150903LL;

    t122 = ((x521/x522)%(x523!=x524));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x526 = INT64_MIN;
	int16_t x528 = INT16_MAX;
	int64_t t123 = 1137709LL;

    t123 = ((x525/x526)%(x527!=x528));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x529 = 12036663379LLU;
	static int64_t x530 = -1LL;
	uint8_t x531 = UINT8_MAX;
	uint16_t x532 = 5566U;

    t124 = ((x529/x530)%(x531!=x532));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x537 = -1LL;
	int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	int32_t x540 = -1158025;
	volatile int64_t t125 = -7873247908LL;

    t125 = ((x537/x538)%(x539!=x540));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x541 = UINT64_MAX;
	int8_t x543 = 2;
	volatile uint64_t t126 = 128LLU;

    t126 = ((x541/x542)%(x543!=x544));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x545 = INT16_MIN;
	static volatile int64_t x546 = 14032966LL;
	int64_t x548 = INT64_MAX;
	volatile int64_t t127 = -1937385938880LL;

    t127 = ((x545/x546)%(x547!=x548));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x549 = 2975273;
	uint8_t x550 = UINT8_MAX;
	uint32_t x551 = UINT32_MAX;
	volatile uint16_t x552 = UINT16_MAX;
	int32_t t128 = 7;

    t128 = ((x549/x550)%(x551!=x552));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x553 = -892LL;
	volatile int32_t x554 = 553380;
	int16_t x555 = -91;
	uint64_t x556 = 18533265538548LLU;
	int64_t t129 = -317LL;

    t129 = ((x553/x554)%(x555!=x556));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x558 = UINT64_MAX;
	int32_t x559 = INT32_MAX;
	uint16_t x560 = 3535U;
	volatile uint64_t t130 = 24669432028343LLU;

    t130 = ((x557/x558)%(x559!=x560));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x561 = INT16_MIN;
	volatile int8_t x562 = -15;
	int8_t x563 = -3;
	int16_t x564 = INT16_MIN;
	volatile int32_t t131 = 6;

    t131 = ((x561/x562)%(x563!=x564));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x569 = UINT32_MAX;
	int64_t x570 = INT64_MIN;
	int64_t x571 = INT64_MAX;
	static uint32_t x572 = 160745529U;
	volatile int64_t t132 = -1LL;

    t132 = ((x569/x570)%(x571!=x572));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x573 = 523353380LLU;
	volatile uint64_t x574 = 1LLU;
	int16_t x575 = -1;
	int32_t x576 = INT32_MIN;
	volatile uint64_t t133 = 1603565085LLU;

    t133 = ((x573/x574)%(x575!=x576));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = INT8_MIN;
	int32_t x578 = 540795;
	int8_t x579 = -1;
	static uint8_t x580 = 84U;
	int32_t t134 = -2030027;

    t134 = ((x577/x578)%(x579!=x580));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x585 = 11938;
	int8_t x586 = INT8_MIN;
	volatile uint64_t x587 = 301705423052LLU;
	int16_t x588 = INT16_MIN;
	static int32_t t135 = 37;

    t135 = ((x585/x586)%(x587!=x588));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x589 = 107U;
	int16_t x590 = INT16_MIN;
	static int64_t x591 = INT64_MAX;
	static int16_t x592 = INT16_MIN;
	volatile int32_t t136 = -29885877;

    t136 = ((x589/x590)%(x591!=x592));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x593 = INT8_MIN;
	static int8_t x594 = INT8_MIN;
	uint64_t x595 = 833981621LLU;
	volatile int32_t t137 = -305;

    t137 = ((x593/x594)%(x595!=x596));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x597 = -1;
	int64_t x598 = -369083636575053511LL;
	uint32_t x599 = 675106632U;
	volatile int16_t x600 = 1;
	int64_t t138 = 59523216908LL;

    t138 = ((x597/x598)%(x599!=x600));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x601 = UINT16_MAX;
	static int8_t x602 = INT8_MAX;
	uint32_t x603 = 36U;
	int8_t x604 = INT8_MIN;
	static volatile int32_t t139 = -1184;

    t139 = ((x601/x602)%(x603!=x604));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x605 = INT64_MIN;
	volatile int16_t x606 = INT16_MIN;
	volatile int64_t x608 = INT64_MIN;
	volatile int64_t t140 = 394732LL;

    t140 = ((x605/x606)%(x607!=x608));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x610 = UINT64_MAX;
	static int8_t x612 = INT8_MAX;
	uint64_t t141 = 3LLU;

    t141 = ((x609/x610)%(x611!=x612));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x613 = INT32_MIN;
	static int64_t x614 = -1LL;
	int16_t x615 = INT16_MIN;
	uint8_t x616 = 14U;
	int64_t t142 = -949826LL;

    t142 = ((x613/x614)%(x615!=x616));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x617 = -9;
	uint16_t x618 = 421U;
	static uint8_t x619 = UINT8_MAX;
	int64_t x620 = INT64_MAX;
	static int32_t t143 = -15965873;

    t143 = ((x617/x618)%(x619!=x620));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x621 = -1247;
	static uint8_t x622 = UINT8_MAX;
	uint32_t x623 = 10U;
	static int8_t x624 = -1;

    t144 = ((x621/x622)%(x623!=x624));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x629 = -1;
	int8_t x630 = INT8_MIN;
	int64_t x631 = INT64_MIN;
	volatile int64_t x632 = -3338200435288815160LL;
	volatile int32_t t145 = -27386;

    t145 = ((x629/x630)%(x631!=x632));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x634 = INT32_MAX;
	static volatile int64_t x635 = -1251832802527LL;
	int64_t x636 = INT64_MAX;

    t146 = ((x633/x634)%(x635!=x636));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x638 = INT32_MIN;
	uint8_t x639 = 37U;
	uint64_t x640 = 70075678267LLU;
	static volatile int32_t t147 = 264117783;

    t147 = ((x637/x638)%(x639!=x640));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x645 = -29;
	int8_t x646 = INT8_MAX;
	int16_t x647 = INT16_MIN;
	volatile int32_t t148 = -37376138;

    t148 = ((x645/x646)%(x647!=x648));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x649 = INT8_MIN;
	uint32_t x650 = 7008U;
	static volatile uint64_t x652 = 249166LLU;
	uint32_t t149 = 26707U;

    t149 = ((x649/x650)%(x651!=x652));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x655 = INT64_MIN;
	int8_t x656 = -1;
	static volatile int32_t t150 = -1264;

    t150 = ((x653/x654)%(x655!=x656));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x658 = INT8_MIN;
	volatile uint32_t x659 = UINT32_MAX;
	uint32_t x660 = 6599301U;
	static int32_t t151 = 312185;

    t151 = ((x657/x658)%(x659!=x660));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x661 = 6;
	int8_t x662 = 63;
	int32_t x664 = INT32_MAX;
	static int32_t t152 = -2691;

    t152 = ((x661/x662)%(x663!=x664));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x665 = -1;
	uint16_t x667 = 4U;
	int8_t x668 = 60;
	volatile int32_t t153 = 93422;

    t153 = ((x665/x666)%(x667!=x668));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x670 = 6607884LLU;
	volatile int32_t x671 = INT32_MIN;
	volatile int8_t x672 = 1;

    t154 = ((x669/x670)%(x671!=x672));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x673 = 1U;
	uint32_t x674 = 40790715U;
	uint8_t x675 = UINT8_MAX;
	int8_t x676 = 1;
	volatile uint32_t t155 = 706495U;

    t155 = ((x673/x674)%(x675!=x676));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x677 = 120805724714LLU;
	uint64_t x678 = UINT64_MAX;
	volatile uint64_t t156 = 309162142224638LLU;

    t156 = ((x677/x678)%(x679!=x680));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x681 = 44U;
	uint64_t x683 = 1706113005409372534LLU;
	uint32_t x684 = 993080520U;
	static volatile int32_t t157 = -3;

    t157 = ((x681/x682)%(x683!=x684));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x685 = -1;
	int16_t x686 = INT16_MIN;
	int32_t x687 = -1;
	volatile int32_t t158 = -3936779;

    t158 = ((x685/x686)%(x687!=x688));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x689 = 388352;
	static volatile int32_t x691 = -40;
	int64_t t159 = 961601LL;

    t159 = ((x689/x690)%(x691!=x692));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x694 = UINT8_MAX;
	volatile int16_t x695 = INT16_MAX;
	volatile int64_t x696 = INT64_MIN;
	volatile int64_t t160 = -2021850434451369LL;

    t160 = ((x693/x694)%(x695!=x696));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x697 = INT64_MIN;
	uint64_t x698 = UINT64_MAX;
	int32_t x699 = -1770;
	int64_t x700 = INT64_MIN;
	uint64_t t161 = 332LLU;

    t161 = ((x697/x698)%(x699!=x700));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x701 = UINT64_MAX;
	uint64_t x702 = 5898LLU;
	uint8_t x703 = 92U;
	volatile uint64_t t162 = 4059LLU;

    t162 = ((x701/x702)%(x703!=x704));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x706 = INT64_MIN;
	static volatile int16_t x707 = -1;
	int64_t x708 = INT64_MAX;
	volatile int64_t t163 = 437612051848755LL;

    t163 = ((x705/x706)%(x707!=x708));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x709 = 3398787602684050LL;
	volatile int32_t x710 = -1023;
	int8_t x711 = INT8_MAX;
	uint32_t x712 = 1189U;
	int64_t t164 = 251008685955LL;

    t164 = ((x709/x710)%(x711!=x712));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x713 = 19U;
	uint32_t x715 = 129557U;
	static uint8_t x716 = 2U;
	static int32_t t165 = -687;

    t165 = ((x713/x714)%(x715!=x716));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x717 = INT64_MIN;
	uint64_t x718 = 15198641462083LLU;
	static int8_t x719 = INT8_MIN;
	static int8_t x720 = 1;
	volatile uint64_t t166 = 3654775615458482701LLU;

    t166 = ((x717/x718)%(x719!=x720));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x721 = 0;
	uint16_t x722 = UINT16_MAX;
	uint64_t x723 = 575616061007LLU;
	static volatile int32_t t167 = 45;

    t167 = ((x721/x722)%(x723!=x724));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x725 = 59635782;
	volatile uint64_t x726 = 41387999152LLU;
	uint32_t x727 = 1031446890U;
	int64_t x728 = INT64_MIN;
	static volatile uint64_t t168 = 7LLU;

    t168 = ((x725/x726)%(x727!=x728));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x729 = -11571255319310932LL;
	static uint32_t x730 = 64U;
	int32_t x731 = -1;
	uint32_t x732 = 278366278U;
	int64_t t169 = 55410538215LL;

    t169 = ((x729/x730)%(x731!=x732));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x733 = INT16_MIN;
	int32_t x734 = 12354;
	int8_t x735 = -1;
	int32_t x736 = 1;

    t170 = ((x733/x734)%(x735!=x736));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x738 = 49U;
	volatile int8_t x739 = INT8_MIN;
	uint8_t x740 = 1U;
	volatile int32_t t171 = 4;

    t171 = ((x737/x738)%(x739!=x740));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x742 = 99U;
	volatile uint32_t x743 = UINT32_MAX;
	uint16_t x744 = 5U;

    t172 = ((x741/x742)%(x743!=x744));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x745 = 4018099261LLU;
	int16_t x746 = INT16_MIN;
	static int64_t x747 = -3842878825965LL;
	static int8_t x748 = INT8_MAX;
	uint64_t t173 = 828664843992209770LLU;

    t173 = ((x745/x746)%(x747!=x748));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x749 = 34947927U;
	int64_t x750 = INT64_MIN;
	int16_t x751 = -195;
	static volatile int16_t x752 = INT16_MIN;
	int64_t t174 = 1259390LL;

    t174 = ((x749/x750)%(x751!=x752));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x753 = INT64_MIN;
	int64_t x755 = -1LL;
	volatile uint8_t x756 = UINT8_MAX;
	static volatile int64_t t175 = 29014195239LL;

    t175 = ((x753/x754)%(x755!=x756));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x758 = 84;
	volatile int8_t x759 = 36;
	int32_t t176 = 60050773;

    t176 = ((x757/x758)%(x759!=x760));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x761 = -1;
	int64_t x762 = INT64_MIN;
	static uint8_t x763 = 3U;
	static int8_t x764 = 0;
	volatile int64_t t177 = -1824988894LL;

    t177 = ((x761/x762)%(x763!=x764));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x765 = -14;
	volatile int32_t x767 = -1;
	volatile int32_t x768 = INT32_MAX;
	volatile int64_t t178 = 1LL;

    t178 = ((x765/x766)%(x767!=x768));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x769 = INT64_MIN;
	uint8_t x770 = 15U;
	static int32_t x771 = INT32_MIN;
	int32_t x772 = -1;
	int64_t t179 = 1061377256908412704LL;

    t179 = ((x769/x770)%(x771!=x772));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x775 = INT64_MIN;
	uint8_t x776 = 6U;
	volatile uint32_t t180 = 373107U;

    t180 = ((x773/x774)%(x775!=x776));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x777 = 101U;
	uint8_t x778 = 1U;
	uint32_t x779 = UINT32_MAX;
	int32_t x780 = INT32_MIN;

    t181 = ((x777/x778)%(x779!=x780));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x783 = -1;
	int8_t x784 = INT8_MIN;
	volatile int32_t t182 = -43;

    t182 = ((x781/x782)%(x783!=x784));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x785 = -3144148;
	int64_t x786 = -1LL;
	int64_t x787 = INT64_MIN;
	volatile int16_t x788 = INT16_MIN;
	int64_t t183 = -7387356025563834LL;

    t183 = ((x785/x786)%(x787!=x788));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x789 = 71U;
	volatile uint64_t x790 = 281580LLU;
	int32_t x791 = INT32_MIN;
	static uint32_t x792 = UINT32_MAX;
	uint64_t t184 = 1052LLU;

    t184 = ((x789/x790)%(x791!=x792));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x793 = INT64_MAX;
	static uint16_t x794 = UINT16_MAX;
	volatile int64_t t185 = 239007985799389500LL;

    t185 = ((x793/x794)%(x795!=x796));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x797 = UINT16_MAX;
	int64_t x798 = INT64_MIN;
	int8_t x799 = 13;
	int8_t x800 = INT8_MIN;
	int64_t t186 = 620120LL;

    t186 = ((x797/x798)%(x799!=x800));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x802 = INT64_MAX;
	volatile int8_t x803 = INT8_MIN;
	static int64_t x804 = INT64_MIN;
	volatile int64_t t187 = 3956288925LL;

    t187 = ((x801/x802)%(x803!=x804));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x805 = 320;
	uint32_t x806 = 5897U;
	static uint64_t x807 = UINT64_MAX;
	static volatile int16_t x808 = 17;
	uint32_t t188 = 1798U;

    t188 = ((x805/x806)%(x807!=x808));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x809 = INT8_MIN;
	static uint32_t x811 = 1U;
	int32_t t189 = 1;

    t189 = ((x809/x810)%(x811!=x812));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x813 = -2;
	int8_t x814 = INT8_MIN;
	uint32_t x815 = UINT32_MAX;
	int32_t t190 = -209;

    t190 = ((x813/x814)%(x815!=x816));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x817 = -8;
	volatile int16_t x820 = 46;
	int64_t t191 = -1038296LL;

    t191 = ((x817/x818)%(x819!=x820));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x821 = -1;
	uint8_t x822 = UINT8_MAX;
	int8_t x824 = INT8_MAX;
	int32_t t192 = -224262;

    t192 = ((x821/x822)%(x823!=x824));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x825 = UINT16_MAX;
	int64_t x826 = 77145LL;
	uint8_t x827 = UINT8_MAX;
	int8_t x828 = INT8_MIN;
	static int64_t t193 = -4LL;

    t193 = ((x825/x826)%(x827!=x828));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x829 = INT16_MIN;
	uint32_t x830 = UINT32_MAX;
	int8_t x831 = INT8_MIN;
	uint64_t x832 = UINT64_MAX;
	volatile uint32_t t194 = 300U;

    t194 = ((x829/x830)%(x831!=x832));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x833 = UINT32_MAX;
	int32_t x835 = 16;
	volatile int16_t x836 = INT16_MIN;
	static uint32_t t195 = 66107830U;

    t195 = ((x833/x834)%(x835!=x836));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x837 = INT8_MAX;
	static int8_t x840 = -1;
	volatile int32_t t196 = -8040;

    t196 = ((x837/x838)%(x839!=x840));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x841 = -53501700;
	int32_t x842 = INT32_MIN;
	int32_t x843 = -18;
	uint32_t x844 = UINT32_MAX;
	int32_t t197 = -37766;

    t197 = ((x841/x842)%(x843!=x844));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x846 = -1;
	uint32_t x847 = 3U;
	static int8_t x848 = INT8_MAX;

    t198 = ((x845/x846)%(x847!=x848));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x849 = 1;
	int8_t x850 = INT8_MIN;
	int16_t x852 = INT16_MIN;

    t199 = ((x849/x850)%(x851!=x852));

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

