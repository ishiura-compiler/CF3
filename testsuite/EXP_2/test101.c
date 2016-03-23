
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

int32_t x11 = -1;
uint16_t x18 = 0U;
int16_t x24 = INT16_MAX;
volatile int16_t x27 = INT16_MAX;
int32_t x37 = 265262580;
uint64_t x40 = 7219LLU;
int8_t x41 = INT8_MIN;
volatile int32_t x43 = -1;
static volatile uint32_t x48 = UINT32_MAX;
uint32_t t10 = 126U;
int32_t x49 = -1;
uint16_t x63 = UINT16_MAX;
uint64_t x69 = 34LLU;
int64_t x76 = 7LL;
int32_t t19 = -213646417;
int64_t x85 = INT64_MAX;
int64_t x87 = -1LL;
uint8_t x94 = 4U;
static uint8_t x95 = 22U;
volatile int32_t t21 = 1502;
int16_t x100 = -1;
uint64_t x102 = UINT64_MAX;
int8_t x106 = INT8_MAX;
int32_t t24 = 306431;
volatile int64_t t25 = -21061236379359848LL;
static volatile int64_t x114 = -16034570735961497LL;
volatile uint64_t t26 = 16LLU;
static volatile int32_t x119 = 6;
volatile int32_t x120 = -12837;
uint64_t x125 = 940LLU;
int64_t x126 = -1LL;
uint16_t x129 = 1806U;
uint16_t x131 = UINT16_MAX;
int8_t x133 = INT8_MAX;
uint64_t t31 = 169439870309518LLU;
uint64_t x144 = UINT64_MAX;
uint8_t x148 = UINT8_MAX;
int32_t t35 = -2766388;
uint16_t x166 = 0U;
uint16_t x168 = 8U;
int64_t x177 = 10150275LL;
int32_t x183 = 7359475;
volatile int32_t t43 = 82367;
static volatile int16_t x190 = INT16_MIN;
int8_t x193 = -61;
int8_t x209 = -3;
static int8_t x222 = -1;
int8_t x224 = 0;
uint32_t x226 = 44175913U;
static volatile uint64_t x232 = 424977LLU;
int8_t x234 = INT8_MAX;
uint16_t x243 = 73U;
int32_t x246 = -5367993;
uint8_t x252 = 2U;
volatile int32_t t58 = -224;
volatile uint8_t x266 = UINT8_MAX;
uint16_t x274 = 10327U;
volatile int64_t x283 = 1LL;
volatile uint64_t x284 = 8720155LLU;
int8_t x286 = -1;
static int32_t x287 = INT32_MAX;
static int32_t x292 = INT32_MIN;
int64_t x295 = INT64_MIN;
static uint16_t x299 = UINT16_MAX;
volatile uint8_t x300 = 95U;
int32_t x313 = 78;
static uint16_t x316 = 3724U;
static int32_t t71 = -5;
int64_t x318 = -282560798846LL;
uint16_t x322 = UINT16_MAX;
int64_t x331 = 593645461LL;
volatile int32_t t79 = 18781031;
int8_t x351 = 32;
int64_t x353 = -1LL;
volatile int32_t t81 = 1155;
uint32_t x367 = 24956U;
uint64_t x373 = 823852072245779LLU;
static volatile int32_t t86 = 812087872;
volatile uint32_t t89 = 4537622U;
volatile int32_t t90 = 29;
volatile int16_t x403 = INT16_MIN;
uint8_t x408 = 0U;
uint8_t x409 = 2U;
int32_t t94 = 14;
int64_t x414 = 7052943410LL;
int16_t x415 = 2;
int32_t t96 = -6209074;
uint8_t x425 = 48U;
static int8_t x428 = -1;
volatile int32_t t97 = -102338456;
int8_t x433 = -1;
static uint16_t x435 = 3U;
int16_t x438 = 12;
int16_t x451 = 2;
int16_t x466 = INT16_MAX;
uint64_t t106 = 369495508586803LLU;
static uint64_t x486 = 726LLU;
int64_t t112 = -2087345640613LL;
uint16_t x495 = 2462U;
int64_t x496 = INT64_MIN;
static int64_t x501 = -3294200558022785LL;
uint32_t x505 = UINT32_MAX;
int64_t x521 = INT64_MIN;
uint32_t x522 = 1184U;
int8_t x523 = -1;
static uint64_t x530 = 69236777477362LLU;
volatile uint8_t x535 = UINT8_MAX;
int64_t x542 = 83842520585LL;
volatile uint64_t t125 = 12118LLU;
volatile int32_t x546 = -1;
uint16_t x552 = 2077U;
int64_t x555 = INT64_MIN;
uint32_t x557 = 397145852U;
int64_t x559 = INT64_MIN;
int16_t x563 = INT16_MAX;
volatile uint16_t x566 = 115U;
int8_t x574 = 6;
int32_t x581 = -1;
static uint8_t x583 = 1U;
uint16_t x596 = UINT16_MAX;
static uint64_t x607 = 1231031400718LLU;
int32_t t140 = -7291;
int8_t x615 = INT8_MIN;
volatile int32_t t141 = 131966101;
int32_t t142 = -695434;
volatile int8_t x634 = INT8_MAX;
uint64_t t147 = 277760LLU;
uint8_t x645 = 9U;
static volatile int32_t t149 = 29;
static int32_t t150 = 834686;
volatile int16_t x661 = INT16_MIN;
int8_t x662 = INT8_MIN;
int64_t x664 = INT64_MAX;
static uint8_t x665 = UINT8_MAX;
uint16_t x673 = UINT16_MAX;
int8_t x675 = INT8_MAX;
uint8_t x676 = 23U;
static uint16_t x678 = 2755U;
uint8_t x682 = 41U;
int8_t x683 = INT8_MIN;
int32_t x685 = INT32_MAX;
static volatile int32_t x688 = INT32_MIN;
static volatile int32_t x692 = INT32_MIN;
static volatile uint64_t x702 = 26LLU;
uint32_t x708 = UINT32_MAX;
static uint16_t x720 = 295U;
int16_t x723 = INT16_MIN;
static uint32_t x727 = 0U;
volatile int32_t t167 = 429;
int32_t t171 = -14668;
int8_t x755 = INT8_MAX;
static int8_t x756 = -1;
volatile int32_t t172 = 3451661;
uint32_t x761 = 516451U;
int32_t x763 = -1;
static int64_t t174 = 10LL;
uint32_t x766 = UINT32_MAX;
int32_t t176 = -478259;
uint32_t x773 = UINT32_MAX;
uint8_t x775 = UINT8_MAX;
int8_t x783 = 2;
int32_t x789 = INT32_MIN;
static uint16_t x794 = UINT16_MAX;
static volatile int8_t x796 = 4;
volatile uint8_t x811 = UINT8_MAX;
uint16_t x813 = UINT16_MAX;
uint32_t x815 = 10264U;
uint8_t x818 = 74U;
int16_t x823 = -1;
volatile uint32_t x824 = UINT32_MAX;
int32_t t190 = -4222383;
int8_t x847 = -3;
static int16_t x851 = -1;
uint64_t x853 = 1713473339857112519LLU;
int8_t x854 = 2;
int16_t x856 = -1;
static int16_t x860 = 5912;
int32_t x862 = -1;
uint32_t x864 = UINT32_MAX;
int64_t x875 = 194138909852949LL;
static int32_t x878 = 47065991;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	int32_t x3 = 14;
	int32_t x4 = -1;
	volatile int32_t t0 = -417;

    t0 = ((x1==(x2+x3))*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = UINT32_MAX;
	static int8_t x10 = -1;
	uint64_t x12 = 1735285LLU;
	volatile uint64_t t1 = 984549563895396037LLU;

    t1 = ((x9==(x10+x11))*x12);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = 0;
	uint32_t x14 = UINT32_MAX;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = 26359U;
	int32_t t2 = 30375045;

    t2 = ((x13==(x14+x15))*x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = 0;
	uint8_t x19 = UINT8_MAX;
	static uint64_t x20 = 16845479LLU;
	volatile uint64_t t3 = 1LLU;

    t3 = ((x17==(x18+x19))*x20);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MAX;
	volatile int16_t x22 = -1;
	volatile int16_t x23 = INT16_MIN;
	static volatile int32_t t4 = -5;

    t4 = ((x21==(x22+x23))*x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x25 = UINT8_MAX;
	int32_t x26 = -1;
	volatile uint32_t x28 = UINT32_MAX;
	volatile uint32_t t5 = 3U;

    t5 = ((x25==(x26+x27))*x28);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = 15U;
	uint8_t x32 = UINT8_MAX;
	int32_t t6 = 138473829;

    t6 = ((x29==(x30+x31))*x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	int64_t x34 = -1LL;
	int8_t x35 = INT8_MIN;
	int32_t x36 = -118518;
	int32_t t7 = 21835;

    t7 = ((x33==(x34+x35))*x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x38 = INT32_MIN;
	uint16_t x39 = 12459U;
	volatile uint64_t t8 = 5233167LLU;

    t8 = ((x37==(x38+x39))*x40);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x42 = 15798;
	volatile uint32_t x44 = 48251U;
	volatile uint32_t t9 = 511519U;

    t9 = ((x41==(x42+x43))*x44);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = -1LL;
	volatile int8_t x46 = -1;
	int16_t x47 = INT16_MIN;

    t10 = ((x45==(x46+x47))*x48);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x50 = UINT16_MAX;
	int16_t x51 = -1;
	int32_t x52 = INT32_MIN;
	int32_t t11 = -7361;

    t11 = ((x49==(x50+x51))*x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = INT64_MIN;
	uint16_t x54 = 7U;
	uint64_t x55 = 3160406200207LLU;
	int8_t x56 = 0;
	int32_t t12 = -57170;

    t12 = ((x53==(x54+x55))*x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x57 = UINT64_MAX;
	static uint16_t x58 = 29954U;
	int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MAX;
	int64_t t13 = 3204456106030LL;

    t13 = ((x57==(x58+x59))*x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MIN;
	int8_t x62 = -14;
	uint8_t x64 = 2U;
	static int32_t t14 = -178;

    t14 = ((x61==(x62+x63))*x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x65 = 252U;
	static volatile uint8_t x66 = 0U;
	volatile int16_t x67 = INT16_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int32_t t15 = 1;

    t15 = ((x65==(x66+x67))*x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x70 = 5U;
	int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t16 = 50191;

    t16 = ((x69==(x70+x71))*x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = 53;
	int16_t x74 = INT16_MAX;
	static int32_t x75 = -1;
	volatile int64_t t17 = 8183379278063LL;

    t17 = ((x73==(x74+x75))*x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = -1;
	static int16_t x78 = -328;
	uint64_t x79 = UINT64_MAX;
	int32_t x80 = INT32_MIN;
	static int32_t t18 = 1;

    t18 = ((x77==(x78+x79))*x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 1U;
	uint64_t x82 = 19LLU;
	static volatile int8_t x83 = INT8_MIN;
	uint16_t x84 = 0U;

    t19 = ((x81==(x82+x83))*x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x86 = -1LL;
	static int16_t x88 = INT16_MIN;
	int32_t t20 = 3157;

    t20 = ((x85==(x86+x87))*x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = 21481837049LLU;
	int16_t x96 = INT16_MIN;

    t21 = ((x93==(x94+x95))*x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 32U;
	int16_t x98 = 866;
	int64_t x99 = INT64_MIN;
	volatile int32_t t22 = -1536542;

    t22 = ((x97==(x98+x99))*x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	volatile uint64_t x104 = 165LLU;
	uint64_t t23 = 84516126643LLU;

    t23 = ((x101==(x102+x103))*x104);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = -1;
	volatile uint8_t x107 = 18U;
	int16_t x108 = INT16_MIN;

    t24 = ((x105==(x106+x107))*x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MAX;
	int8_t x110 = -2;
	int16_t x111 = -1;
	int64_t x112 = 165996260293052447LL;

    t25 = ((x109==(x110+x111))*x112);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x113 = INT32_MIN;
	uint64_t x115 = UINT64_MAX;
	static uint64_t x116 = 3484LLU;

    t26 = ((x113==(x114+x115))*x116);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = UINT16_MAX;
	uint16_t x118 = UINT16_MAX;
	int32_t t27 = -91417530;

    t27 = ((x117==(x118+x119))*x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = -100726;
	uint16_t x122 = UINT16_MAX;
	volatile int8_t x123 = -1;
	int16_t x124 = INT16_MIN;
	volatile int32_t t28 = 244;

    t28 = ((x121==(x122+x123))*x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x127 = INT32_MAX;
	static uint16_t x128 = UINT16_MAX;
	volatile int32_t t29 = -1;

    t29 = ((x125==(x126+x127))*x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x130 = INT16_MAX;
	int16_t x132 = 8;
	volatile int32_t t30 = -494614778;

    t30 = ((x129==(x130+x131))*x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x134 = UINT16_MAX;
	int64_t x135 = -1LL;
	volatile uint64_t x136 = UINT64_MAX;

    t31 = ((x133==(x134+x135))*x136);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x137 = 3U;
	int8_t x138 = 18;
	int64_t x139 = -1LL;
	int32_t x140 = INT32_MAX;
	volatile int32_t t32 = 2865;

    t32 = ((x137==(x138+x139))*x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = -1;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	uint64_t t33 = 8982061326780LLU;

    t33 = ((x141==(x142+x143))*x144);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = INT32_MIN;
	int8_t x146 = -1;
	int16_t x147 = INT16_MAX;
	int32_t t34 = 485781;

    t34 = ((x145==(x146+x147))*x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x149 = -1;
	static volatile uint32_t x150 = 31U;
	volatile uint32_t x151 = UINT32_MAX;
	static int8_t x152 = INT8_MIN;

    t35 = ((x149==(x150+x151))*x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MAX;
	volatile int8_t x154 = 41;
	uint64_t x155 = 18279864110LLU;
	int64_t x156 = INT64_MIN;
	volatile int64_t t36 = -1331LL;

    t36 = ((x153==(x154+x155))*x156);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = -1LL;
	uint64_t x158 = UINT64_MAX;
	volatile uint16_t x159 = UINT16_MAX;
	int16_t x160 = -104;
	volatile int32_t t37 = 99808210;

    t37 = ((x157==(x158+x159))*x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = -18;
	static uint64_t x162 = UINT64_MAX;
	uint64_t x163 = UINT64_MAX;
	uint64_t x164 = 2863621LLU;
	uint64_t t38 = 10435943LLU;

    t38 = ((x161==(x162+x163))*x164);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = -1LL;
	uint16_t x167 = UINT16_MAX;
	int32_t t39 = 2016155;

    t39 = ((x165==(x166+x167))*x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = 5;
	static int16_t x170 = -1;
	uint8_t x171 = 15U;
	uint16_t x172 = 113U;
	int32_t t40 = -451217476;

    t40 = ((x169==(x170+x171))*x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -306184125;
	volatile int8_t x174 = -1;
	int64_t x175 = -1LL;
	static uint32_t x176 = 271U;
	static volatile uint32_t t41 = 4U;

    t41 = ((x173==(x174+x175))*x176);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x178 = INT16_MAX;
	uint8_t x179 = 31U;
	int16_t x180 = 0;
	volatile int32_t t42 = -46;

    t42 = ((x177==(x178+x179))*x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x181 = 2020U;
	static int64_t x182 = 772909317LL;
	uint16_t x184 = UINT16_MAX;

    t43 = ((x181==(x182+x183))*x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = UINT8_MAX;
	static int64_t x186 = 706682681157LL;
	static int8_t x187 = 14;
	int8_t x188 = INT8_MIN;
	volatile int32_t t44 = 5525;

    t44 = ((x185==(x186+x187))*x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x189 = 308;
	uint64_t x191 = 117085993436230582LLU;
	int32_t x192 = INT32_MAX;
	volatile int32_t t45 = -22;

    t45 = ((x189==(x190+x191))*x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x194 = 15U;
	int32_t x195 = -1;
	uint16_t x196 = 1U;
	int32_t t46 = -4596;

    t46 = ((x193==(x194+x195))*x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x197 = -6;
	uint32_t x198 = 1621U;
	volatile int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t47 = -201;

    t47 = ((x197==(x198+x199))*x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	volatile int8_t x212 = -7;
	int32_t t48 = -24765766;

    t48 = ((x209==(x210+x211))*x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x213 = 4026365;
	volatile int8_t x214 = 1;
	int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	static volatile int64_t t49 = -2048485177311498LL;

    t49 = ((x213==(x214+x215))*x216);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = INT8_MIN;
	volatile int16_t x218 = INT16_MIN;
	int64_t x219 = -1LL;
	int8_t x220 = -56;
	int32_t t50 = 4;

    t50 = ((x217==(x218+x219))*x220);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x221 = -1;
	int64_t x223 = 15562LL;
	int32_t t51 = -11;

    t51 = ((x221==(x222+x223))*x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x225 = INT32_MIN;
	volatile int8_t x227 = -1;
	static volatile int64_t x228 = INT64_MAX;
	int64_t t52 = -26LL;

    t52 = ((x225==(x226+x227))*x228);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x229 = 2U;
	uint16_t x230 = 5373U;
	int8_t x231 = -1;
	volatile uint64_t t53 = 2524LLU;

    t53 = ((x229==(x230+x231))*x232);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x233 = UINT32_MAX;
	volatile int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	static int64_t t54 = INT64_MIN;

    t54 = ((x233==(x234+x235))*x236);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = -1;
	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 108656149055508LLU;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t55 = 695558LLU;

    t55 = ((x237==(x238+x239))*x240);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x241 = 27438U;
	uint32_t x242 = 13U;
	int8_t x244 = INT8_MIN;
	int32_t t56 = -14539251;

    t56 = ((x241==(x242+x243))*x244);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x245 = INT16_MIN;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -21;
	volatile int32_t t57 = 12587767;

    t57 = ((x245==(x246+x247))*x248);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = 15901544357LL;
	int32_t x250 = -165725;
	int32_t x251 = INT32_MAX;

    t58 = ((x249==(x250+x251))*x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x253 = INT64_MIN;
	int16_t x254 = INT16_MAX;
	int8_t x255 = 12;
	int64_t x256 = INT64_MIN;
	int64_t t59 = 385585266426344004LL;

    t59 = ((x253==(x254+x255))*x256);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x261 = -6276;
	uint16_t x262 = UINT16_MAX;
	static int64_t x263 = INT64_MIN;
	int8_t x264 = 1;
	static volatile int32_t t60 = 10029;

    t60 = ((x261==(x262+x263))*x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x265 = 883026U;
	static uint32_t x267 = 1927960263U;
	volatile int64_t x268 = INT64_MAX;
	volatile int64_t t61 = -225203939631LL;

    t61 = ((x265==(x266+x267))*x268);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x273 = UINT16_MAX;
	volatile int64_t x275 = -1119LL;
	int8_t x276 = -21;
	volatile int32_t t62 = 386507;

    t62 = ((x273==(x274+x275))*x276);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x277 = INT16_MIN;
	static uint8_t x278 = 29U;
	static int64_t x279 = INT64_MIN;
	static volatile int64_t x280 = INT64_MIN;
	volatile int64_t t63 = 2148999312550762LL;

    t63 = ((x277==(x278+x279))*x280);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x281 = -396610762782LL;
	volatile uint16_t x282 = 327U;
	static uint64_t t64 = 7246295LLU;

    t64 = ((x281==(x282+x283))*x284);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x285 = 9618072U;
	volatile uint8_t x288 = 108U;
	volatile int32_t t65 = 0;

    t65 = ((x285==(x286+x287))*x288);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x289 = 24804507646LL;
	int16_t x290 = INT16_MIN;
	static uint32_t x291 = UINT32_MAX;
	volatile int32_t t66 = -15;

    t66 = ((x289==(x290+x291))*x292);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x293 = UINT64_MAX;
	uint8_t x294 = 79U;
	int8_t x296 = -55;
	static int32_t t67 = -312485022;

    t67 = ((x293==(x294+x295))*x296);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x297 = 14;
	int16_t x298 = INT16_MAX;
	static volatile int32_t t68 = 95754723;

    t68 = ((x297==(x298+x299))*x300);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x301 = 1;
	int16_t x302 = INT16_MIN;
	int32_t x303 = 1;
	int8_t x304 = -1;
	int32_t t69 = -75229;

    t69 = ((x301==(x302+x303))*x304);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x309 = INT16_MIN;
	int16_t x310 = -1;
	static int16_t x311 = -1;
	int8_t x312 = INT8_MIN;
	static volatile int32_t t70 = -381192747;

    t70 = ((x309==(x310+x311))*x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = UINT64_MAX;

    t71 = ((x313==(x314+x315))*x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = INT8_MAX;
	int64_t x319 = -1LL;
	volatile int16_t x320 = -4072;
	volatile int32_t t72 = 104749722;

    t72 = ((x317==(x318+x319))*x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	volatile int64_t x324 = -4271315387234LL;
	int64_t t73 = 432653569366415LL;

    t73 = ((x321==(x322+x323))*x324);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x325 = -1LL;
	int32_t x326 = 10105293;
	volatile int64_t x327 = -1LL;
	uint8_t x328 = 29U;
	int32_t t74 = 121828823;

    t74 = ((x325==(x326+x327))*x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x329 = -1;
	static int32_t x330 = INT32_MIN;
	int64_t x332 = -1LL;
	int64_t t75 = -1162685733681LL;

    t75 = ((x329==(x330+x331))*x332);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x333 = 2;
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = -13;
	volatile int16_t x336 = -1;
	volatile int32_t t76 = 498;

    t76 = ((x333==(x334+x335))*x336);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x337 = 3U;
	static int8_t x338 = INT8_MIN;
	uint16_t x339 = 3U;
	static int32_t x340 = -8;
	volatile int32_t t77 = -149222;

    t77 = ((x337==(x338+x339))*x340);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x341 = 195236U;
	int8_t x342 = INT8_MIN;
	volatile uint32_t x343 = 57U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t78 = 55;

    t78 = ((x341==(x342+x343))*x344);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x345 = 3LLU;
	volatile int8_t x346 = 0;
	uint64_t x347 = 0LLU;
	int32_t x348 = INT32_MAX;

    t79 = ((x345==(x346+x347))*x348);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x349 = INT32_MIN;
	volatile int16_t x350 = INT16_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t80 = -1;

    t80 = ((x349==(x350+x351))*x352);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x354 = 16204U;
	uint8_t x355 = 4U;
	int32_t x356 = -255;

    t81 = ((x353==(x354+x355))*x356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x357 = -1944;
	int8_t x358 = 2;
	static int64_t x359 = 10LL;
	int16_t x360 = INT16_MIN;
	static int32_t t82 = 7547002;

    t82 = ((x357==(x358+x359))*x360);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x361 = 1084533150931LL;
	int8_t x362 = INT8_MIN;
	static uint32_t x363 = UINT32_MAX;
	volatile int32_t x364 = INT32_MIN;
	int32_t t83 = -981104993;

    t83 = ((x361==(x362+x363))*x364);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x365 = INT64_MAX;
	int32_t x366 = INT32_MAX;
	int8_t x368 = INT8_MIN;
	static int32_t t84 = 74390;

    t84 = ((x365==(x366+x367))*x368);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x369 = INT64_MIN;
	static volatile int64_t x370 = INT64_MAX;
	int8_t x371 = INT8_MIN;
	int64_t x372 = 47LL;
	int64_t t85 = 166LL;

    t85 = ((x369==(x370+x371))*x372);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x374 = INT64_MIN;
	int64_t x375 = 309LL;
	uint16_t x376 = 1U;

    t86 = ((x373==(x374+x375))*x376);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x377 = UINT16_MAX;
	int16_t x378 = -10;
	volatile int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t87 = 221;

    t87 = ((x377==(x378+x379))*x380);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x381 = UINT32_MAX;
	uint16_t x382 = UINT16_MAX;
	uint32_t x383 = UINT32_MAX;
	static uint8_t x384 = 93U;
	volatile int32_t t88 = -909;

    t88 = ((x381==(x382+x383))*x384);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x389 = 0;
	volatile uint16_t x390 = 8U;
	int16_t x391 = INT16_MIN;
	volatile uint32_t x392 = UINT32_MAX;

    t89 = ((x389==(x390+x391))*x392);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x393 = INT16_MIN;
	uint8_t x394 = 5U;
	int8_t x395 = INT8_MIN;
	volatile uint8_t x396 = UINT8_MAX;

    t90 = ((x393==(x394+x395))*x396);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x397 = INT8_MIN;
	int32_t x398 = 74498;
	uint32_t x399 = 2U;
	uint16_t x400 = UINT16_MAX;
	static int32_t t91 = -340321;

    t91 = ((x397==(x398+x399))*x400);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x401 = 130271402LL;
	volatile int8_t x402 = INT8_MIN;
	volatile int32_t x404 = INT32_MAX;
	volatile int32_t t92 = 5;

    t92 = ((x401==(x402+x403))*x404);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x405 = INT16_MIN;
	uint16_t x406 = 713U;
	int16_t x407 = INT16_MIN;
	int32_t t93 = -1;

    t93 = ((x405==(x406+x407))*x408);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x410 = 20;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MAX;

    t94 = ((x409==(x410+x411))*x412);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = -8;
	uint32_t x416 = 2975185U;
	uint32_t t95 = 291U;

    t95 = ((x413==(x414+x415))*x416);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x417 = INT8_MIN;
	int16_t x418 = INT16_MIN;
	uint64_t x419 = UINT64_MAX;
	uint8_t x420 = UINT8_MAX;

    t96 = ((x417==(x418+x419))*x420);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x426 = -1;
	static uint32_t x427 = 11U;

    t97 = ((x425==(x426+x427))*x428);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x429 = INT16_MAX;
	uint64_t x430 = 1057365064048857LLU;
	int64_t x431 = INT64_MIN;
	volatile uint16_t x432 = 31850U;
	volatile int32_t t98 = -573206116;

    t98 = ((x429==(x430+x431))*x432);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x434 = INT16_MIN;
	static int8_t x436 = 0;
	volatile int32_t t99 = -96;

    t99 = ((x433==(x434+x435))*x436);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x437 = INT32_MAX;
	volatile int32_t x439 = -7;
	static uint32_t x440 = 174834U;
	volatile uint32_t t100 = 48U;

    t100 = ((x437==(x438+x439))*x440);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x445 = UINT16_MAX;
	int64_t x446 = -15LL;
	volatile int16_t x447 = -1;
	int64_t x448 = -1LL;
	volatile int64_t t101 = 3456923219995968LL;

    t101 = ((x445==(x446+x447))*x448);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x449 = 67909060LL;
	int8_t x450 = INT8_MIN;
	uint32_t x452 = 2424810U;
	static volatile uint32_t t102 = 2U;

    t102 = ((x449==(x450+x451))*x452);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x453 = -1;
	uint32_t x454 = 1490U;
	uint8_t x455 = 0U;
	volatile uint16_t x456 = UINT16_MAX;
	volatile int32_t t103 = 471071;

    t103 = ((x453==(x454+x455))*x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x457 = 137;
	int32_t x458 = INT32_MIN;
	volatile uint16_t x459 = 6001U;
	int32_t x460 = -605966;
	volatile int32_t t104 = 139;

    t104 = ((x457==(x458+x459))*x460);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = -633237525785LL;
	int8_t x462 = 0;
	static int8_t x463 = -1;
	static int8_t x464 = INT8_MIN;
	static int32_t t105 = 517095791;

    t105 = ((x461==(x462+x463))*x464);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x465 = 244450677;
	static volatile uint16_t x467 = UINT16_MAX;
	uint64_t x468 = 4076876049295444224LLU;

    t106 = ((x465==(x466+x467))*x468);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x469 = INT16_MAX;
	int64_t x470 = 6201331977910LL;
	uint64_t x471 = 124269763579663LLU;
	int16_t x472 = INT16_MIN;
	int32_t t107 = 16;

    t107 = ((x469==(x470+x471))*x472);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x473 = 13305573268LL;
	uint64_t x474 = UINT64_MAX;
	int64_t x475 = INT64_MAX;
	int8_t x476 = -3;
	static volatile int32_t t108 = 1890103;

    t108 = ((x473==(x474+x475))*x476);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x477 = 1U;
	volatile uint16_t x478 = UINT16_MAX;
	static volatile int32_t x479 = INT32_MIN;
	int16_t x480 = -6098;
	int32_t t109 = 973882;

    t109 = ((x477==(x478+x479))*x480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MIN;
	static uint32_t x483 = UINT32_MAX;
	int16_t x484 = -7670;
	volatile int32_t t110 = 33261855;

    t110 = ((x481==(x482+x483))*x484);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x485 = -108;
	volatile int64_t x487 = INT64_MIN;
	uint16_t x488 = UINT16_MAX;
	int32_t t111 = -4;

    t111 = ((x485==(x486+x487))*x488);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x489 = INT8_MIN;
	int16_t x490 = INT16_MIN;
	uint16_t x491 = 1038U;
	int64_t x492 = 4132061005LL;

    t112 = ((x489==(x490+x491))*x492);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x493 = 1488U;
	static int64_t x494 = INT64_MIN;
	static volatile int64_t t113 = -494275208098195LL;

    t113 = ((x493==(x494+x495))*x496);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x497 = UINT16_MAX;
	static volatile int32_t x498 = INT32_MIN;
	int8_t x499 = 1;
	uint32_t x500 = 115821U;
	uint32_t t114 = 1265U;

    t114 = ((x497==(x498+x499))*x500);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x502 = INT64_MIN;
	int16_t x503 = INT16_MAX;
	static int16_t x504 = -1;
	static int32_t t115 = 319358;

    t115 = ((x501==(x502+x503))*x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x506 = INT32_MIN;
	int64_t x507 = INT64_MAX;
	volatile int64_t x508 = -1019089370467047785LL;
	static int64_t t116 = 21694349LL;

    t116 = ((x505==(x506+x507))*x508);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x509 = 9393430LLU;
	int64_t x510 = INT64_MIN;
	uint64_t x511 = 2LLU;
	volatile uint8_t x512 = 53U;
	int32_t t117 = 7257166;

    t117 = ((x509==(x510+x511))*x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x513 = 2525249753LL;
	uint8_t x514 = UINT8_MAX;
	int8_t x515 = INT8_MIN;
	uint64_t x516 = 1LLU;
	uint64_t t118 = 6949615664144LLU;

    t118 = ((x513==(x514+x515))*x516);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x517 = -1;
	volatile int64_t x518 = 35679769806585895LL;
	uint8_t x519 = UINT8_MAX;
	static volatile int16_t x520 = -1;
	int32_t t119 = -5806259;

    t119 = ((x517==(x518+x519))*x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x524 = 6U;
	int32_t t120 = 12246;

    t120 = ((x521==(x522+x523))*x524);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x525 = 1U;
	int8_t x526 = 4;
	static int8_t x527 = INT8_MIN;
	uint8_t x528 = UINT8_MAX;
	int32_t t121 = 115015;

    t121 = ((x525==(x526+x527))*x528);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x529 = INT8_MIN;
	int64_t x531 = INT64_MAX;
	uint32_t x532 = 517882310U;
	static uint32_t t122 = 1876U;

    t122 = ((x529==(x530+x531))*x532);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x533 = -1;
	int32_t x534 = INT32_MIN;
	uint32_t x536 = UINT32_MAX;
	static uint32_t t123 = 75506683U;

    t123 = ((x533==(x534+x535))*x536);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int64_t x538 = INT64_MAX;
	static uint64_t x539 = 4LLU;
	static int32_t x540 = INT32_MIN;
	int32_t t124 = 3659641;

    t124 = ((x537==(x538+x539))*x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x541 = 687810229LLU;
	int8_t x543 = -1;
	static uint64_t x544 = UINT64_MAX;

    t125 = ((x541==(x542+x543))*x544);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x545 = UINT32_MAX;
	static int8_t x547 = INT8_MIN;
	uint8_t x548 = 1U;
	static int32_t t126 = -29865352;

    t126 = ((x545==(x546+x547))*x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x549 = INT8_MIN;
	static uint64_t x550 = UINT64_MAX;
	static int16_t x551 = INT16_MIN;
	volatile int32_t t127 = -291017;

    t127 = ((x549==(x550+x551))*x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x553 = INT32_MIN;
	uint16_t x554 = UINT16_MAX;
	int16_t x556 = -1;
	int32_t t128 = -20;

    t128 = ((x553==(x554+x555))*x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x558 = INT32_MAX;
	int8_t x560 = -11;
	static volatile int32_t t129 = 316681;

    t129 = ((x557==(x558+x559))*x560);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x561 = 38249389829024LLU;
	int16_t x562 = 2;
	int32_t x564 = 50172;
	volatile int32_t t130 = -201046449;

    t130 = ((x561==(x562+x563))*x564);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x565 = 0U;
	uint64_t x567 = 108LLU;
	int64_t x568 = INT64_MAX;
	volatile int64_t t131 = 12477833LL;

    t131 = ((x565==(x566+x567))*x568);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x569 = -7LL;
	uint64_t x570 = 49640370929702LLU;
	static int16_t x571 = INT16_MIN;
	int8_t x572 = INT8_MAX;
	int32_t t132 = 1;

    t132 = ((x569==(x570+x571))*x572);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x573 = INT32_MAX;
	uint32_t x575 = 1286049U;
	static int64_t x576 = INT64_MAX;
	static int64_t t133 = -5192298670329LL;

    t133 = ((x573==(x574+x575))*x576);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x577 = INT32_MAX;
	int16_t x578 = INT16_MIN;
	uint32_t x579 = 0U;
	int8_t x580 = -3;
	static volatile int32_t t134 = 8537;

    t134 = ((x577==(x578+x579))*x580);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x582 = UINT8_MAX;
	int16_t x584 = -43;
	static int32_t t135 = -1;

    t135 = ((x581==(x582+x583))*x584);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x589 = -1;
	volatile int8_t x590 = 1;
	uint32_t x591 = 2U;
	uint64_t x592 = 5537830LLU;
	static uint64_t t136 = 409LLU;

    t136 = ((x589==(x590+x591))*x592);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x593 = -1;
	uint64_t x594 = UINT64_MAX;
	uint16_t x595 = 1021U;
	volatile int32_t t137 = 893;

    t137 = ((x593==(x594+x595))*x596);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x597 = INT32_MAX;
	int32_t x598 = INT32_MIN;
	uint8_t x599 = 29U;
	int8_t x600 = INT8_MIN;
	volatile int32_t t138 = 282903059;

    t138 = ((x597==(x598+x599))*x600);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x605 = 1;
	int32_t x606 = INT32_MIN;
	uint8_t x608 = 21U;
	static volatile int32_t t139 = 1748;

    t139 = ((x605==(x606+x607))*x608);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x609 = INT32_MIN;
	int8_t x610 = -12;
	uint8_t x611 = 42U;
	int32_t x612 = -1;

    t140 = ((x609==(x610+x611))*x612);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x613 = 1;
	static uint8_t x614 = UINT8_MAX;
	volatile int16_t x616 = INT16_MAX;

    t141 = ((x613==(x614+x615))*x616);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x617 = INT16_MIN;
	int64_t x618 = -2168673070015LL;
	static int32_t x619 = 46123750;
	volatile int8_t x620 = INT8_MIN;

    t142 = ((x617==(x618+x619))*x620);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x621 = -1;
	uint64_t x622 = 6125878641852892999LLU;
	uint16_t x623 = 148U;
	int32_t x624 = INT32_MAX;
	static volatile int32_t t143 = 2165496;

    t143 = ((x621==(x622+x623))*x624);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x625 = 34U;
	uint16_t x626 = UINT16_MAX;
	uint16_t x627 = 1826U;
	volatile uint64_t x628 = UINT64_MAX;
	static uint64_t t144 = 137461328668005LLU;

    t144 = ((x625==(x626+x627))*x628);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x629 = INT64_MAX;
	static int64_t x630 = -97005351409158706LL;
	uint16_t x631 = 4U;
	int32_t x632 = -1;
	static int32_t t145 = 3;

    t145 = ((x629==(x630+x631))*x632);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x633 = UINT16_MAX;
	int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MAX;
	static volatile int32_t t146 = -692;

    t146 = ((x633==(x634+x635))*x636);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x642 = 34454095912LL;
	static int32_t x643 = INT32_MAX;
	volatile uint64_t x644 = 15268045LLU;

    t147 = ((x641==(x642+x643))*x644);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x646 = 534;
	int16_t x647 = INT16_MAX;
	volatile uint32_t x648 = 1151U;
	volatile uint32_t t148 = 11337818U;

    t148 = ((x645==(x646+x647))*x648);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x649 = 1U;
	int8_t x650 = INT8_MIN;
	volatile uint32_t x651 = UINT32_MAX;
	int16_t x652 = -1;

    t149 = ((x649==(x650+x651))*x652);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	uint8_t x658 = 0U;
	static uint64_t x659 = 78589LLU;
	uint8_t x660 = UINT8_MAX;

    t150 = ((x657==(x658+x659))*x660);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x663 = 26689U;
	int64_t t151 = -438036045917830594LL;

    t151 = ((x661==(x662+x663))*x664);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x666 = INT16_MIN;
	int64_t x667 = INT64_MAX;
	int32_t x668 = INT32_MAX;
	static int32_t t152 = 1687813;

    t152 = ((x665==(x666+x667))*x668);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x669 = INT32_MIN;
	int8_t x670 = INT8_MAX;
	int8_t x671 = INT8_MAX;
	uint8_t x672 = 0U;
	int32_t t153 = -465043756;

    t153 = ((x669==(x670+x671))*x672);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x674 = 684770U;
	volatile int32_t t154 = 421039950;

    t154 = ((x673==(x674+x675))*x676);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x677 = 48;
	uint64_t x679 = 8533536764495LLU;
	static int8_t x680 = 1;
	int32_t t155 = 0;

    t155 = ((x677==(x678+x679))*x680);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x681 = 62LL;
	uint64_t x684 = UINT64_MAX;
	uint64_t t156 = 125994202726LLU;

    t156 = ((x681==(x682+x683))*x684);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x686 = INT8_MAX;
	int64_t x687 = 39798286780619LL;
	int32_t t157 = -4622;

    t157 = ((x685==(x686+x687))*x688);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x689 = -241;
	static int32_t x690 = INT32_MIN;
	volatile int16_t x691 = INT16_MAX;
	int32_t t158 = -30959;

    t158 = ((x689==(x690+x691))*x692);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x693 = 1537U;
	int32_t x694 = -1;
	int32_t x695 = 29;
	volatile uint64_t x696 = UINT64_MAX;
	volatile uint64_t t159 = 3471229481975LLU;

    t159 = ((x693==(x694+x695))*x696);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x697 = UINT32_MAX;
	volatile int8_t x698 = -1;
	volatile int32_t x699 = -370;
	int8_t x700 = 1;
	int32_t t160 = 87483;

    t160 = ((x697==(x698+x699))*x700);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x701 = 61U;
	uint8_t x703 = 3U;
	uint16_t x704 = 252U;
	volatile int32_t t161 = -5725;

    t161 = ((x701==(x702+x703))*x704);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x705 = INT8_MAX;
	uint64_t x706 = UINT64_MAX;
	static volatile int32_t x707 = -21264343;
	volatile uint32_t t162 = 992U;

    t162 = ((x705==(x706+x707))*x708);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x709 = -1;
	uint32_t x710 = 45345U;
	uint64_t x711 = UINT64_MAX;
	uint32_t x712 = UINT32_MAX;
	volatile uint32_t t163 = 110198243U;

    t163 = ((x709==(x710+x711))*x712);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x717 = -1;
	volatile int32_t x718 = -1;
	int16_t x719 = INT16_MAX;
	static int32_t t164 = -110;

    t164 = ((x717==(x718+x719))*x720);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x721 = 22902925LLU;
	int64_t x722 = -131779990918790LL;
	int64_t x724 = 7LL;
	volatile int64_t t165 = 655300237501103LL;

    t165 = ((x721==(x722+x723))*x724);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x725 = 2U;
	int32_t x726 = INT32_MAX;
	int64_t x728 = INT64_MIN;
	volatile int64_t t166 = -3LL;

    t166 = ((x725==(x726+x727))*x728);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x729 = 4;
	static int8_t x730 = -1;
	static int16_t x731 = INT16_MIN;
	static int16_t x732 = INT16_MIN;

    t167 = ((x729==(x730+x731))*x732);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x733 = INT8_MIN;
	int16_t x734 = INT16_MIN;
	uint32_t x735 = UINT32_MAX;
	int32_t x736 = INT32_MIN;
	int32_t t168 = -9064;

    t168 = ((x733==(x734+x735))*x736);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x737 = UINT16_MAX;
	uint16_t x738 = 29U;
	int8_t x739 = INT8_MAX;
	uint64_t x740 = 30858866936301LLU;
	uint64_t t169 = 53LLU;

    t169 = ((x737==(x738+x739))*x740);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x741 = INT16_MAX;
	int32_t x742 = -1038699;
	uint8_t x743 = UINT8_MAX;
	int16_t x744 = 15264;
	int32_t t170 = -238945196;

    t170 = ((x741==(x742+x743))*x744);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	static uint16_t x750 = 22U;
	volatile int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MIN;

    t171 = ((x749==(x750+x751))*x752);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x753 = INT8_MIN;
	int16_t x754 = INT16_MAX;

    t172 = ((x753==(x754+x755))*x756);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x757 = -7;
	int32_t x758 = -1;
	int8_t x759 = INT8_MIN;
	static int64_t x760 = 22526483LL;
	volatile int64_t t173 = -8392LL;

    t173 = ((x757==(x758+x759))*x760);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x762 = 154956215;
	volatile int64_t x764 = INT64_MIN;

    t174 = ((x761==(x762+x763))*x764);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x765 = UINT32_MAX;
	uint16_t x767 = 7U;
	volatile uint32_t x768 = 26031U;
	volatile uint32_t t175 = 134558U;

    t175 = ((x765==(x766+x767))*x768);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x769 = INT16_MIN;
	static int32_t x770 = INT32_MAX;
	int8_t x771 = -7;
	int8_t x772 = 0;

    t176 = ((x769==(x770+x771))*x772);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x774 = -66970858LL;
	static int8_t x776 = INT8_MIN;
	static int32_t t177 = -28;

    t177 = ((x773==(x774+x775))*x776);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x781 = INT32_MAX;
	int32_t x782 = INT32_MIN;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t178 = -108578;

    t178 = ((x781==(x782+x783))*x784);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x790 = 5U;
	uint32_t x791 = UINT32_MAX;
	static uint8_t x792 = 0U;
	static volatile int32_t t179 = 35906515;

    t179 = ((x789==(x790+x791))*x792);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x793 = 38833U;
	static volatile int32_t x795 = INT32_MIN;
	volatile int32_t t180 = 1;

    t180 = ((x793==(x794+x795))*x796);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x797 = 16U;
	uint16_t x798 = UINT16_MAX;
	uint64_t x799 = 1LLU;
	int32_t x800 = INT32_MIN;
	int32_t t181 = -1944970;

    t181 = ((x797==(x798+x799))*x800);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x801 = UINT32_MAX;
	uint64_t x802 = 5250LLU;
	uint64_t x803 = 974439248125593LLU;
	uint16_t x804 = UINT16_MAX;
	int32_t t182 = 1;

    t182 = ((x801==(x802+x803))*x804);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x805 = INT16_MAX;
	static volatile uint8_t x806 = UINT8_MAX;
	static int64_t x807 = -1LL;
	int64_t x808 = -1LL;
	int64_t t183 = 91184071LL;

    t183 = ((x805==(x806+x807))*x808);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x809 = INT8_MAX;
	static uint16_t x810 = UINT16_MAX;
	static int32_t x812 = INT32_MIN;
	static volatile int32_t t184 = 23;

    t184 = ((x809==(x810+x811))*x812);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x814 = INT16_MIN;
	int32_t x816 = INT32_MIN;
	int32_t t185 = 98370;

    t185 = ((x813==(x814+x815))*x816);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x817 = INT8_MIN;
	uint64_t x819 = 4LLU;
	uint64_t x820 = 8489908720918LLU;
	uint64_t t186 = 192050371999009LLU;

    t186 = ((x817==(x818+x819))*x820);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x821 = 5U;
	uint64_t x822 = UINT64_MAX;
	volatile uint32_t t187 = 1836108420U;

    t187 = ((x821==(x822+x823))*x824);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x825 = 0U;
	int16_t x826 = INT16_MAX;
	volatile int8_t x827 = -51;
	int32_t x828 = -37111466;
	volatile int32_t t188 = 22988400;

    t188 = ((x825==(x826+x827))*x828);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x829 = 516116U;
	int64_t x830 = -1LL;
	uint16_t x831 = 710U;
	int16_t x832 = -12;
	int32_t t189 = -63495;

    t189 = ((x829==(x830+x831))*x832);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x837 = INT32_MAX;
	volatile uint64_t x838 = UINT64_MAX;
	int8_t x839 = -1;
	int16_t x840 = INT16_MAX;

    t190 = ((x837==(x838+x839))*x840);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x841 = INT32_MIN;
	uint8_t x842 = UINT8_MAX;
	volatile int16_t x843 = 216;
	int64_t x844 = INT64_MIN;
	static int64_t t191 = -114817095224745LL;

    t191 = ((x841==(x842+x843))*x844);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x845 = -1;
	static uint32_t x846 = 734519U;
	int32_t x848 = INT32_MAX;
	static int32_t t192 = -19424;

    t192 = ((x845==(x846+x847))*x848);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x849 = 42770;
	int8_t x850 = -3;
	int8_t x852 = INT8_MIN;
	static int32_t t193 = -19;

    t193 = ((x849==(x850+x851))*x852);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x855 = 2U;
	volatile int32_t t194 = -64131;

    t194 = ((x853==(x854+x855))*x856);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x857 = INT32_MIN;
	static int16_t x858 = INT16_MIN;
	int64_t x859 = 5185842672581240LL;
	volatile int32_t t195 = 694128;

    t195 = ((x857==(x858+x859))*x860);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x861 = -1;
	int16_t x863 = -1;
	uint32_t t196 = 57U;

    t196 = ((x861==(x862+x863))*x864);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x869 = INT64_MAX;
	volatile int16_t x870 = -1;
	int32_t x871 = -1;
	uint64_t x872 = UINT64_MAX;
	uint64_t t197 = 369522439878733843LLU;

    t197 = ((x869==(x870+x871))*x872);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x873 = UINT8_MAX;
	uint32_t x874 = 7U;
	int8_t x876 = INT8_MIN;
	static int32_t t198 = 6713535;

    t198 = ((x873==(x874+x875))*x876);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x877 = -2319;
	volatile int32_t x879 = 859;
	static volatile int8_t x880 = 1;
	volatile int32_t t199 = -2;

    t199 = ((x877==(x878+x879))*x880);

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

