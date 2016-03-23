
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

volatile uint16_t x3 = 1U;
uint64_t x6 = 10846LLU;
volatile int64_t x8 = INT64_MIN;
volatile uint16_t x10 = UINT16_MAX;
uint8_t x22 = 110U;
volatile int32_t t5 = 346042;
int32_t x25 = INT32_MAX;
volatile int32_t x30 = -15;
int16_t x32 = -3915;
static int8_t x39 = -1;
int64_t x42 = INT64_MAX;
static int64_t x47 = -1LL;
volatile int32_t t12 = -322003;
int16_t x59 = -1164;
volatile int8_t x61 = 4;
volatile uint32_t x64 = 446U;
int64_t x68 = INT64_MIN;
volatile int64_t x76 = 11895838LL;
int8_t x77 = -1;
static volatile int32_t t18 = 162;
volatile uint16_t x82 = UINT16_MAX;
int32_t x83 = INT32_MIN;
uint64_t x84 = UINT64_MAX;
volatile uint64_t t19 = 84964LLU;
int64_t x88 = -1LL;
volatile int16_t x89 = INT16_MIN;
int64_t x91 = INT64_MIN;
static uint16_t x93 = 10236U;
static int64_t t22 = -126678LL;
volatile uint16_t x101 = 113U;
uint64_t x102 = 143182163511959450LLU;
int32_t x103 = INT32_MIN;
int16_t x109 = -2;
int16_t x113 = INT16_MIN;
int16_t x116 = INT16_MAX;
int32_t x119 = INT32_MAX;
int32_t x121 = -95470114;
uint8_t x124 = UINT8_MAX;
static volatile int64_t t29 = -5494194707081493LL;
int32_t x128 = -1;
uint64_t x130 = 68868924330157LLU;
int64_t x134 = INT64_MAX;
int8_t x135 = INT8_MIN;
static int16_t x140 = -1;
uint8_t x146 = 2U;
static int64_t t35 = 135041169187649LL;
volatile uint64_t x150 = 144589015164LLU;
int64_t x154 = INT64_MIN;
static volatile int32_t x159 = INT32_MIN;
uint8_t x161 = 0U;
volatile uint64_t t39 = 2LLU;
static volatile int8_t x166 = INT8_MIN;
uint16_t x168 = 2818U;
static volatile int8_t x169 = INT8_MAX;
int8_t x171 = INT8_MIN;
uint32_t t41 = 9556U;
volatile int32_t t42 = -12;
int32_t x177 = INT32_MAX;
volatile int32_t t43 = -402731;
int16_t x186 = INT16_MIN;
static int64_t x187 = INT64_MAX;
int64_t x196 = INT64_MAX;
static uint32_t x197 = 207521U;
int16_t x201 = INT16_MIN;
int64_t x210 = 7772069LL;
uint32_t t52 = 536251341U;
uint16_t x219 = UINT16_MAX;
int64_t x226 = -1LL;
int32_t t57 = -663714010;
int16_t x241 = -1;
int32_t t58 = 20594611;
int32_t x245 = -4133455;
volatile int64_t x252 = INT64_MIN;
int32_t x253 = 3942055;
static int32_t t61 = 210270;
uint32_t x259 = 7251U;
int32_t t63 = 99;
static uint16_t x267 = UINT16_MAX;
int32_t t64 = 3191496;
uint64_t x271 = 101932283839413086LLU;
uint8_t x277 = UINT8_MAX;
uint64_t x278 = 6176437LLU;
int32_t x288 = INT32_MAX;
int64_t x293 = 0LL;
uint64_t x296 = UINT64_MAX;
int8_t x298 = INT8_MAX;
volatile uint32_t x300 = 125508672U;
uint16_t x303 = 2U;
int32_t x307 = -502446;
int16_t x308 = -6736;
int32_t x311 = -179;
int32_t t75 = -111501;
volatile int16_t x317 = INT16_MIN;
volatile int32_t t78 = 3887544;
int64_t x327 = INT64_MIN;
static volatile int32_t t81 = -19166206;
volatile int32_t x337 = INT32_MIN;
static int32_t x338 = INT32_MAX;
uint16_t x340 = UINT16_MAX;
uint32_t x341 = 60151U;
int8_t x344 = INT8_MIN;
static volatile int32_t t83 = -1903412;
int32_t x346 = INT32_MIN;
volatile int64_t t85 = -23084921LL;
volatile int8_t x355 = 0;
int8_t x359 = -1;
int8_t x365 = INT8_MAX;
volatile int64_t t89 = -812947LL;
uint64_t x369 = 54013264476599LLU;
int32_t t90 = 3248;
uint32_t x376 = 2271U;
volatile uint64_t t91 = 157LLU;
volatile uint8_t x392 = 103U;
int16_t x394 = INT16_MAX;
int32_t x396 = -16;
volatile int32_t x400 = -165280;
int32_t t96 = -998477;
static volatile int8_t x416 = -4;
volatile uint32_t t100 = 1399300U;
uint32_t x421 = 62400U;
uint8_t x433 = 59U;
volatile uint16_t x438 = UINT16_MAX;
int64_t x442 = -1LL;
static int8_t x444 = INT8_MIN;
volatile uint8_t x448 = 18U;
int16_t x452 = INT16_MIN;
uint64_t x453 = UINT64_MAX;
int8_t x460 = -1;
static int32_t x463 = 223;
static uint8_t x469 = 0U;
volatile uint8_t x470 = 33U;
static volatile uint64_t x473 = 2247323317LLU;
int8_t x490 = -7;
static volatile int32_t x496 = 1811637;
volatile int32_t t120 = 269;
volatile int8_t x512 = -1;
static uint32_t x516 = UINT32_MAX;
static volatile int64_t t124 = -267751128126012LL;
int64_t x528 = INT64_MIN;
volatile uint64_t x531 = 205003468808107823LLU;
volatile int8_t x532 = INT8_MAX;
uint64_t x533 = 2059573815LLU;
volatile int8_t x535 = -4;
int16_t x548 = -1;
int16_t x549 = INT16_MAX;
int32_t x550 = INT32_MAX;
static uint64_t t132 = 94LLU;
int16_t x557 = -1;
int32_t t136 = 58825;
volatile int64_t x569 = 107LL;
volatile int16_t x571 = -9927;
uint16_t x573 = 5646U;
volatile int16_t x574 = -7123;
static int16_t x576 = 2690;
uint8_t x577 = 120U;
int16_t x581 = INT16_MIN;
uint8_t x582 = 6U;
int32_t x587 = INT32_MIN;
volatile uint32_t x588 = 7751390U;
int8_t x600 = 2;
int16_t x601 = 1;
uint32_t x603 = 33878921U;
uint32_t t145 = 12089194U;
static volatile int32_t t147 = -86;
int8_t x618 = -1;
volatile int8_t x628 = -1;
int32_t t152 = 209;
static int8_t x634 = 0;
static uint32_t x635 = 423751U;
int8_t x644 = 9;
volatile int8_t x646 = INT8_MIN;
int64_t t157 = -1LL;
int16_t x661 = INT16_MAX;
int64_t x664 = -3919585311902668743LL;
uint16_t x682 = 13811U;
int64_t x683 = 1LL;
volatile uint64_t t165 = 185LLU;
volatile int64_t x692 = INT64_MIN;
int32_t t167 = 0;
volatile uint32_t x698 = UINT32_MAX;
uint8_t x706 = 121U;
uint16_t x711 = 25U;
int32_t t172 = 26574;
int64_t x717 = 9142LL;
volatile uint64_t t173 = 1465838439499745797LLU;
int8_t x725 = INT8_MIN;
static volatile int8_t x728 = -1;
volatile int64_t x743 = 151058139LL;
uint8_t x749 = UINT8_MAX;
uint8_t x763 = UINT8_MAX;
int64_t x770 = INT64_MIN;
volatile uint32_t x773 = 8615548U;
uint64_t x783 = 234351209459753515LLU;
uint32_t x784 = 31840U;
uint8_t x792 = 18U;
int8_t x795 = -22;
int32_t x801 = -1;
static uint32_t x803 = 757585792U;
uint32_t t193 = 583108U;
static volatile uint16_t x808 = 6U;
int32_t x809 = INT32_MIN;
uint32_t t196 = 1100049U;
volatile int64_t x820 = INT64_MIN;
volatile uint64_t t197 = 3138875LLU;
uint8_t x828 = 5U;


void f0(void) {
    	uint8_t x1 = 13U;
	int16_t x2 = INT16_MIN;
	static int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 101432;

    t0 = ((x1<=x2)-(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	static int8_t x7 = -1;
	int64_t t1 = -14437LL;

    t1 = ((x5<=x6)-(x7/x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -118424659LL;
	uint8_t x11 = UINT8_MAX;
	int64_t x12 = -1LL;
	volatile int64_t t2 = 910998138LL;

    t2 = ((x9<=x10)-(x11/x12));

    if (t2 != 256LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 122U;
	uint64_t x14 = UINT64_MAX;
	static int64_t x15 = -948528183950081LL;
	int16_t x16 = INT16_MAX;
	int64_t t3 = 28542268887422LL;

    t3 = ((x13<=x14)-(x15/x16));

    if (t3 != 28947666371LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x18 = -1;
	static int64_t x19 = -1LL;
	int32_t x20 = INT32_MIN;
	volatile int64_t t4 = 155LL;

    t4 = ((x17<=x18)-(x19/x20));

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 1LL;
	int8_t x23 = INT8_MAX;
	int16_t x24 = -7;

    t5 = ((x21<=x22)-(x23/x24));

    if (t5 != 19) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = 35U;
	int16_t x27 = INT16_MAX;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 1231907;

    t6 = ((x25<=x26)-(x27/x28));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 31U;
	int16_t x31 = 27;
	int32_t t7 = 952845796;

    t7 = ((x29<=x30)-(x31/x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = UINT8_MAX;
	uint32_t x38 = UINT32_MAX;
	volatile uint8_t x40 = 28U;
	volatile int32_t t8 = 3231;

    t8 = ((x37<=x38)-(x39/x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x41 = UINT8_MAX;
	int32_t x43 = -110738;
	volatile uint8_t x44 = 10U;
	volatile int32_t t9 = -886371410;

    t9 = ((x41<=x42)-(x43/x44));

    if (t9 != 11074) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -139017989328LL;
	volatile int64_t x46 = 103258030961LL;
	int32_t x48 = -1;
	int64_t t10 = 6674221763660LL;

    t10 = ((x45<=x46)-(x47/x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = 581;
	int16_t x50 = -3376;
	volatile int64_t x51 = -266385879LL;
	int64_t x52 = INT64_MAX;
	static volatile int64_t t11 = -1579714733LL;

    t11 = ((x49<=x50)-(x51/x52));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = -550;
	int8_t x54 = -1;
	int8_t x55 = 11;
	volatile int16_t x56 = INT16_MIN;

    t12 = ((x53<=x54)-(x55/x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x57 = 20492801U;
	uint16_t x58 = 2982U;
	int8_t x60 = INT8_MIN;
	volatile int32_t t13 = 34118;

    t13 = ((x57<=x58)-(x59/x60));

    if (t13 != -9) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x62 = 11U;
	volatile int64_t x63 = -21LL;
	volatile int64_t t14 = -14644190677LL;

    t14 = ((x61<=x62)-(x63/x64));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile int64_t x66 = INT64_MIN;
	uint32_t x67 = 26019U;
	int64_t t15 = 460644553LL;

    t15 = ((x65<=x66)-(x67/x68));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = UINT8_MAX;
	int64_t x70 = 4067LL;
	static int8_t x71 = -1;
	int64_t x72 = INT64_MAX;
	int64_t t16 = 1051529149464LL;

    t16 = ((x69<=x70)-(x71/x72));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -1;
	int64_t x74 = 185LL;
	volatile int32_t x75 = INT32_MIN;
	int64_t t17 = 43442616369077068LL;

    t17 = ((x73<=x74)-(x75/x76));

    if (t17 != 181LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = INT32_MIN;
	static int16_t x79 = -1;
	uint16_t x80 = UINT16_MAX;

    t18 = ((x77<=x78)-(x79/x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;

    t19 = ((x81<=x82)-(x83/x84));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 4U;
	int64_t x86 = -1LL;
	static uint32_t x87 = 0U;
	int64_t t20 = 8531LL;

    t20 = ((x85<=x86)-(x87/x88));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x90 = -8;
	int64_t x92 = INT64_MIN;
	int64_t t21 = 28346LL;

    t21 = ((x89<=x90)-(x91/x92));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = -1LL;
	static int64_t x95 = -6255855529971LL;
	int32_t x96 = INT32_MIN;

    t22 = ((x93<=x94)-(x95/x96));

    if (t22 != -2913LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -1;
	uint64_t x98 = 1606155121LLU;
	int64_t x99 = INT64_MIN;
	uint32_t x100 = 117U;
	static int64_t t23 = -3958398451949710LL;

    t23 = ((x97<=x98)-(x99/x100));

    if (t23 != 78832239631237400LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x104 = INT64_MIN;
	int64_t t24 = -229028213086542993LL;

    t24 = ((x101<=x102)-(x103/x104));

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = 4942;
	static uint16_t x106 = 22U;
	int8_t x107 = -1;
	int64_t x108 = -849456125LL;
	static volatile int64_t t25 = 3916958LL;

    t25 = ((x105<=x106)-(x107/x108));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x110 = -1;
	static int16_t x111 = 3;
	static int8_t x112 = -1;
	static volatile int32_t t26 = 4335232;

    t26 = ((x109<=x110)-(x111/x112));

    if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x114 = 15872;
	int16_t x115 = INT16_MIN;
	volatile int32_t t27 = 1059837225;

    t27 = ((x113<=x114)-(x115/x116));

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = 26U;
	static int16_t x118 = INT16_MIN;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t28 = 30390529;

    t28 = ((x117<=x118)-(x119/x120));

    if (t28 != 16777215) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x122 = INT16_MIN;
	int64_t x123 = -1LL;

    t29 = ((x121<=x122)-(x123/x124));

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MAX;
	int8_t x127 = 5;
	int32_t t30 = 5212;

    t30 = ((x125<=x126)-(x127/x128));

    if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = UINT64_MAX;
	int16_t x131 = -1;
	int32_t x132 = INT32_MAX;
	volatile int32_t t31 = -29528;

    t31 = ((x129<=x130)-(x131/x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t32 = 3093864;

    t32 = ((x133<=x134)-(x135/x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MAX;
	static int8_t x139 = INT8_MAX;
	volatile int32_t t33 = -1;

    t33 = ((x137<=x138)-(x139/x140));

    if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MAX;
	static int32_t x142 = INT32_MIN;
	volatile int64_t x143 = INT64_MIN;
	uint32_t x144 = 193U;
	int64_t t34 = -70697002724560959LL;

    t34 = ((x141<=x142)-(x143/x144));

    if (t34 != 47789492418936662LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x145 = INT8_MIN;
	int32_t x147 = -38088720;
	static int64_t x148 = INT64_MIN;

    t35 = ((x145<=x146)-(x147/x148));

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x149 = INT64_MAX;
	volatile uint8_t x151 = 26U;
	static int64_t x152 = 615044LL;
	int64_t t36 = -639053593261419LL;

    t36 = ((x149<=x150)-(x151/x152));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x153 = 9971455571773LLU;
	uint32_t x155 = 15850016U;
	volatile uint8_t x156 = UINT8_MAX;
	uint32_t t37 = 7714U;

    t37 = ((x153<=x154)-(x155/x156));

    if (t37 != 4294905141U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MAX;
	static volatile int32_t x158 = 163219;
	volatile int8_t x160 = INT8_MIN;
	int32_t t38 = -252;

    t38 = ((x157<=x158)-(x159/x160));

    if (t38 != -16777215) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x162 = -239LL;
	static uint64_t x163 = 6LLU;
	uint64_t x164 = 1609764680619LLU;

    t39 = ((x161<=x162)-(x163/x164));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = -19;
	int64_t x167 = INT64_MIN;
	int64_t t40 = -199LL;

    t40 = ((x165<=x166)-(x167/x168));

    if (t40 != 3273020595051375LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x170 = INT32_MAX;
	uint32_t x172 = 22959556U;

    t41 = ((x169<=x170)-(x171/x172));

    if (t41 != 4294967110U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x173 = 1049808978090LLU;
	static int8_t x174 = -1;
	volatile uint16_t x175 = 6U;
	uint8_t x176 = 26U;

    t42 = ((x173<=x174)-(x175/x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x178 = INT16_MIN;
	static int8_t x179 = -1;
	static uint8_t x180 = UINT8_MAX;

    t43 = ((x177<=x178)-(x179/x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = 13U;
	static uint64_t x182 = UINT64_MAX;
	int64_t x183 = -30849LL;
	int32_t x184 = INT32_MIN;
	volatile int64_t t44 = 154584403491780LL;

    t44 = ((x181<=x182)-(x183/x184));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x185 = UINT16_MAX;
	static int16_t x188 = INT16_MIN;
	volatile int64_t t45 = -156632586756976120LL;

    t45 = ((x185<=x186)-(x187/x188));

    if (t45 != 281474976710655LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MIN;
	uint8_t x190 = 6U;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = INT64_MIN;
	volatile int64_t t46 = 10542LL;

    t46 = ((x189<=x190)-(x191/x192));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = 457583722LLU;
	static int64_t x194 = 4532464904556555LL;
	static int64_t x195 = INT64_MAX;
	int64_t t47 = -921281389LL;

    t47 = ((x193<=x194)-(x195/x196));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x198 = -12;
	int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MAX;
	volatile int32_t t48 = -232;

    t48 = ((x197<=x198)-(x199/x200));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x202 = UINT32_MAX;
	static int8_t x203 = 55;
	static volatile int8_t x204 = INT8_MIN;
	int32_t t49 = 0;

    t49 = ((x201<=x202)-(x203/x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = -2995;
	int64_t x206 = -4741528715541LL;
	volatile int64_t x207 = -1LL;
	int16_t x208 = INT16_MIN;
	volatile int64_t t50 = 335258LL;

    t50 = ((x205<=x206)-(x207/x208));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x209 = INT8_MAX;
	volatile int8_t x211 = 1;
	static int64_t x212 = INT64_MIN;
	int64_t t51 = 20972501251021988LL;

    t51 = ((x209<=x210)-(x211/x212));

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = INT8_MIN;
	int8_t x214 = -4;
	uint32_t x215 = 31U;
	int32_t x216 = -9318924;

    t52 = ((x213<=x214)-(x215/x216));

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x217 = 112459U;
	int8_t x218 = 2;
	static int32_t x220 = 90;
	static int32_t t53 = -31;

    t53 = ((x217<=x218)-(x219/x220));

    if (t53 != -728) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = 21559671355092898LLU;
	static int8_t x227 = -1;
	volatile int32_t x228 = INT32_MIN;
	int32_t t54 = -41;

    t54 = ((x225<=x226)-(x227/x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x229 = -19645;
	static int64_t x230 = 1LL;
	volatile uint64_t x231 = 31259LLU;
	static volatile int32_t x232 = INT32_MIN;
	static volatile uint64_t t55 = 1318LLU;

    t55 = ((x229<=x230)-(x231/x232));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = 29968381U;
	int32_t x234 = INT32_MAX;
	int64_t x235 = INT64_MIN;
	volatile int32_t x236 = 2078644;
	int64_t t56 = 1056792743114733199LL;

    t56 = ((x233<=x234)-(x235/x236));

    if (t56 != 4437206196374LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x237 = -1;
	uint64_t x238 = 3088820LLU;
	static int16_t x239 = -1;
	int32_t x240 = INT32_MAX;

    t57 = ((x237<=x238)-(x239/x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x242 = 1032502996896LL;
	volatile uint16_t x243 = 4372U;
	int8_t x244 = INT8_MIN;

    t58 = ((x241<=x242)-(x243/x244));

    if (t58 != 35) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MIN;
	volatile int32_t x248 = 712604;
	volatile int64_t t59 = -2820250651LL;

    t59 = ((x245<=x246)-(x247/x248));

    if (t59 != 12943194308277LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = -1;
	volatile int8_t x250 = INT8_MIN;
	static uint32_t x251 = UINT32_MAX;
	int64_t t60 = -39293628954LL;

    t60 = ((x249<=x250)-(x251/x252));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x254 = -1;
	int32_t x255 = -1;
	int16_t x256 = INT16_MIN;

    t61 = ((x253<=x254)-(x255/x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x257 = INT16_MIN;
	static volatile int32_t x258 = -1;
	uint16_t x260 = 761U;
	volatile uint32_t t62 = 16U;

    t62 = ((x257<=x258)-(x259/x260));

    if (t62 != 4294967288U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	int32_t x262 = 6108;
	int8_t x263 = INT8_MIN;
	int16_t x264 = 46;

    t63 = ((x261<=x262)-(x263/x264));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = INT64_MIN;
	int64_t x266 = -3034871857LL;
	int8_t x268 = -1;

    t64 = ((x265<=x266)-(x267/x268));

    if (t64 != 65536) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x269 = UINT64_MAX;
	int8_t x270 = -28;
	int16_t x272 = -1;
	static uint64_t t65 = 790887806079LLU;

    t65 = ((x269<=x270)-(x271/x272));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x273 = 3425045U;
	int64_t x274 = 0LL;
	uint32_t x275 = UINT32_MAX;
	uint16_t x276 = 50U;
	uint32_t t66 = 468U;

    t66 = ((x273<=x274)-(x275/x276));

    if (t66 != 4209067951U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x279 = 119U;
	int16_t x280 = INT16_MIN;
	volatile int32_t t67 = 183;

    t67 = ((x277<=x278)-(x279/x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x281 = INT64_MAX;
	int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	int64_t t68 = -129078861627653647LL;

    t68 = ((x281<=x282)-(x283/x284));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MAX;
	int64_t x287 = -151724415446683828LL;
	int64_t t69 = -356361430353228864LL;

    t69 = ((x285<=x286)-(x287/x288));

    if (t69 != 70652187LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MIN;
	static uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t70 = -10567;

    t70 = ((x289<=x290)-(x291/x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x294 = -180;
	int32_t x295 = -1;
	volatile uint64_t t71 = UINT64_MAX;

    t71 = ((x293<=x294)-(x295/x296));

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = UINT32_MAX;
	int16_t x299 = INT16_MAX;
	volatile uint32_t t72 = 200167U;

    t72 = ((x297<=x298)-(x299/x300));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x301 = -1;
	static int64_t x302 = 316540LL;
	int64_t x304 = INT64_MIN;
	int64_t t73 = 687873020868LL;

    t73 = ((x301<=x302)-(x303/x304));

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = -1;
	int16_t x306 = 1275;
	int32_t t74 = -52738252;

    t74 = ((x305<=x306)-(x307/x308));

    if (t74 != -73) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x309 = -137671272219805057LL;
	uint16_t x310 = 0U;
	volatile int32_t x312 = INT32_MIN;

    t75 = ((x309<=x310)-(x311/x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = -1;
	uint8_t x314 = 5U;
	volatile int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;
	volatile int32_t t76 = 14918433;

    t76 = ((x313<=x314)-(x315/x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x318 = 7416616U;
	uint64_t x319 = 0LLU;
	volatile uint64_t x320 = UINT64_MAX;
	static uint64_t t77 = 2907759079834557544LLU;

    t77 = ((x317<=x318)-(x319/x320));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = 1;
	int8_t x322 = INT8_MIN;
	static int8_t x323 = INT8_MAX;
	static uint16_t x324 = UINT16_MAX;

    t78 = ((x321<=x322)-(x323/x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x325 = -215;
	int32_t x326 = INT32_MAX;
	volatile int8_t x328 = INT8_MAX;
	volatile int64_t t79 = 0LL;

    t79 = ((x325<=x326)-(x327/x328));

    if (t79 != 72624976668147842LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x329 = INT32_MAX;
	int8_t x330 = -1;
	uint32_t x331 = 6507241U;
	uint64_t x332 = UINT64_MAX;
	uint64_t t80 = 12626LLU;

    t80 = ((x329<=x330)-(x331/x332));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x333 = -1;
	volatile int8_t x334 = 1;
	static int8_t x335 = INT8_MAX;
	int16_t x336 = -1676;

    t81 = ((x333<=x334)-(x335/x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x339 = INT8_MIN;
	volatile int32_t t82 = -149;

    t82 = ((x337<=x338)-(x339/x340));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x342 = -1;
	int32_t x343 = -1612;

    t83 = ((x341<=x342)-(x343/x344));

    if (t83 != -11) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x345 = 20946404LLU;
	volatile int16_t x347 = INT16_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t84 = -233327873;

    t84 = ((x345<=x346)-(x347/x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x349 = 925;
	uint8_t x350 = UINT8_MAX;
	int64_t x351 = -231850978LL;
	static uint32_t x352 = 895363U;

    t85 = ((x349<=x350)-(x351/x352));

    if (t85 != 258LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x353 = -1;
	int8_t x354 = -45;
	volatile int16_t x356 = -249;
	static int32_t t86 = 452;

    t86 = ((x353<=x354)-(x355/x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x357 = UINT64_MAX;
	uint32_t x358 = 749725U;
	int16_t x360 = -11517;
	int32_t t87 = 14445691;

    t87 = ((x357<=x358)-(x359/x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x361 = INT32_MIN;
	volatile int8_t x362 = -1;
	int8_t x363 = INT8_MAX;
	uint64_t x364 = UINT64_MAX;
	uint64_t t88 = 164746264546849055LLU;

    t88 = ((x361<=x362)-(x363/x364));

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x366 = 777121287176823365LLU;
	int64_t x367 = INT64_MIN;
	int64_t x368 = 4070346675LL;

    t89 = ((x365<=x366)-(x367/x368));

    if (t89 != 2265991763LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x370 = -54;
	volatile int32_t x371 = -12;
	int16_t x372 = INT16_MIN;

    t90 = ((x369<=x370)-(x371/x372));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x373 = INT8_MAX;
	static uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 2LLU;

    t91 = ((x373<=x374)-(x375/x376));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = INT8_MIN;
	volatile int64_t x378 = INT64_MAX;
	uint32_t x379 = 5788440U;
	volatile int64_t x380 = -441652009603790278LL;
	int64_t t92 = 268497452274813LL;

    t92 = ((x377<=x378)-(x379/x380));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = 3490U;
	volatile int32_t x386 = INT32_MIN;
	static int32_t x387 = -127;
	volatile uint32_t x388 = 1U;
	static uint32_t t93 = 2618U;

    t93 = ((x385<=x386)-(x387/x388));

    if (t93 != 127U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x389 = -48987;
	int64_t x390 = INT64_MIN;
	uint16_t x391 = 11U;
	volatile int32_t t94 = -1;

    t94 = ((x389<=x390)-(x391/x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x393 = UINT16_MAX;
	int8_t x395 = INT8_MIN;
	static int32_t t95 = -278295;

    t95 = ((x393<=x394)-(x395/x396));

    if (t95 != -8) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x397 = 822402556LLU;
	uint8_t x398 = 117U;
	int8_t x399 = 62;

    t96 = ((x397<=x398)-(x399/x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x405 = -39;
	int8_t x406 = -39;
	static int8_t x407 = 0;
	int64_t x408 = -252488558915557LL;
	static int64_t t97 = 401LL;

    t97 = ((x405<=x406)-(x407/x408));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x409 = INT16_MAX;
	static volatile uint64_t x410 = 1LLU;
	int64_t x411 = -2617303957LL;
	int64_t x412 = INT64_MIN;
	volatile int64_t t98 = 524852428105129LL;

    t98 = ((x409<=x410)-(x411/x412));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x413 = 14U;
	volatile int8_t x414 = INT8_MIN;
	static int32_t x415 = 0;
	int32_t t99 = -32293367;

    t99 = ((x413<=x414)-(x415/x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x417 = INT64_MIN;
	volatile int16_t x418 = INT16_MIN;
	int32_t x419 = -1;
	uint32_t x420 = 2U;

    t100 = ((x417<=x418)-(x419/x420));

    if (t100 != 2147483650U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x422 = INT32_MIN;
	int8_t x423 = -3;
	int64_t x424 = INT64_MIN;
	static volatile int64_t t101 = 1LL;

    t101 = ((x421<=x422)-(x423/x424));

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = INT64_MAX;
	int16_t x426 = -1;
	volatile int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t102 = 899648480;

    t102 = ((x425<=x426)-(x427/x428));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x429 = -1;
	int32_t x430 = 61722049;
	int64_t x431 = -1LL;
	int16_t x432 = INT16_MIN;
	int64_t t103 = -50924381LL;

    t103 = ((x429<=x430)-(x431/x432));

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x434 = UINT32_MAX;
	uint32_t x435 = 1445646U;
	int64_t x436 = -19LL;
	volatile int64_t t104 = -182454164671049LL;

    t104 = ((x433<=x434)-(x435/x436));

    if (t104 != 76087LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = -3071;
	static volatile uint64_t x439 = 543LLU;
	volatile int64_t x440 = INT64_MIN;
	volatile uint64_t t105 = 113LLU;

    t105 = ((x437<=x438)-(x439/x440));

    if (t105 != 1LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x441 = INT32_MAX;
	uint32_t x443 = UINT32_MAX;
	volatile uint32_t t106 = UINT32_MAX;

    t106 = ((x441<=x442)-(x443/x444));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x445 = UINT64_MAX;
	int64_t x446 = INT64_MAX;
	volatile int16_t x447 = INT16_MIN;
	volatile int32_t t107 = 91398448;

    t107 = ((x445<=x446)-(x447/x448));

    if (t107 != 1820) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x449 = 25U;
	uint8_t x450 = UINT8_MAX;
	int8_t x451 = 8;
	volatile int32_t t108 = 34258;

    t108 = ((x449<=x450)-(x451/x452));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x454 = -1;
	uint16_t x455 = UINT16_MAX;
	int64_t x456 = 21536427889LL;
	static int64_t t109 = -456928397476592LL;

    t109 = ((x453<=x454)-(x455/x456));

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x457 = 3406LL;
	static int64_t x458 = INT64_MAX;
	uint16_t x459 = 664U;
	volatile int32_t t110 = 219434105;

    t110 = ((x457<=x458)-(x459/x460));

    if (t110 != 665) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x461 = 30U;
	static int16_t x462 = INT16_MAX;
	volatile uint8_t x464 = 50U;
	int32_t t111 = -27;

    t111 = ((x461<=x462)-(x463/x464));

    if (t111 != -3) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x471 = 219U;
	int32_t x472 = INT32_MIN;
	volatile int32_t t112 = 4514;

    t112 = ((x469<=x470)-(x471/x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x474 = INT32_MAX;
	int64_t x475 = 0LL;
	static int16_t x476 = INT16_MAX;
	int64_t t113 = 3967497LL;

    t113 = ((x473<=x474)-(x475/x476));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x477 = INT32_MAX;
	volatile uint8_t x478 = UINT8_MAX;
	static uint64_t x479 = 0LLU;
	uint32_t x480 = UINT32_MAX;
	volatile uint64_t t114 = 6088877112218LLU;

    t114 = ((x477<=x478)-(x479/x480));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x481 = -1;
	static int8_t x482 = 1;
	int16_t x483 = 120;
	int32_t x484 = -1;
	int32_t t115 = 1;

    t115 = ((x481<=x482)-(x483/x484));

    if (t115 != 121) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x485 = INT32_MIN;
	volatile int32_t x486 = -1;
	static uint8_t x487 = 1U;
	int64_t x488 = INT64_MIN;
	static volatile int64_t t116 = -2671242414919381LL;

    t116 = ((x485<=x486)-(x487/x488));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x489 = UINT16_MAX;
	int32_t x491 = -1;
	int16_t x492 = 1901;
	volatile int32_t t117 = -27011947;

    t117 = ((x489<=x490)-(x491/x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x493 = UINT32_MAX;
	volatile int16_t x494 = INT16_MIN;
	uint32_t x495 = 1060053423U;
	static uint32_t t118 = 131571U;

    t118 = ((x493<=x494)-(x495/x496));

    if (t118 != 4294966711U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x497 = -2812329;
	uint32_t x498 = 45857U;
	static int32_t x499 = INT32_MIN;
	static uint16_t x500 = UINT16_MAX;
	volatile int32_t t119 = 97834541;

    t119 = ((x497<=x498)-(x499/x500));

    if (t119 != 32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x501 = INT64_MIN;
	volatile int32_t x502 = -1;
	int32_t x503 = -1;
	volatile int8_t x504 = -1;

    t120 = ((x501<=x502)-(x503/x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x505 = -389641375970101208LL;
	int64_t x506 = -360LL;
	int16_t x507 = INT16_MAX;
	volatile uint64_t x508 = UINT64_MAX;
	volatile uint64_t t121 = 1LLU;

    t121 = ((x505<=x506)-(x507/x508));

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x509 = -1LL;
	uint16_t x510 = 16018U;
	uint64_t x511 = UINT64_MAX;
	volatile uint64_t t122 = 12601025878547633LLU;

    t122 = ((x509<=x510)-(x511/x512));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x513 = 257217074789040338LLU;
	static volatile uint32_t x514 = UINT32_MAX;
	int64_t x515 = INT64_MIN;
	int64_t t123 = 9805LL;

    t123 = ((x513<=x514)-(x515/x516));

    if (t123 != 2147483648LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x517 = 310817546693196LLU;
	int64_t x518 = 434LL;
	int64_t x519 = -1LL;
	uint16_t x520 = 3070U;

    t124 = ((x517<=x518)-(x519/x520));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = INT8_MIN;
	int32_t x522 = -2797;
	volatile int64_t x523 = -59310153579627LL;
	uint64_t x524 = 120725642748541478LLU;
	volatile uint64_t t125 = 83120119919835LLU;

    t125 = ((x521<=x522)-(x523/x524));

    if (t125 != 18446744073709551464LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = INT64_MIN;
	static int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MIN;
	volatile int64_t t126 = 24556564LL;

    t126 = ((x525<=x526)-(x527/x528));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x529 = UINT8_MAX;
	uint64_t x530 = 7114973729554LLU;
	uint64_t t127 = 186613296587LLU;

    t127 = ((x529<=x530)-(x531/x532));

    if (t127 != 18445129873167755493LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x534 = 2762LLU;
	static int64_t x536 = -25LL;
	int64_t t128 = -19588LL;

    t128 = ((x533<=x534)-(x535/x536));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x537 = INT8_MIN;
	int16_t x538 = -1;
	volatile int16_t x539 = INT16_MIN;
	int32_t x540 = INT32_MAX;
	volatile int32_t t129 = 0;

    t129 = ((x537<=x538)-(x539/x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x541 = UINT8_MAX;
	static int32_t x542 = 973;
	uint32_t x543 = UINT32_MAX;
	static uint32_t x544 = 1937652U;
	volatile uint32_t t130 = 5170498U;

    t130 = ((x541<=x542)-(x543/x544));

    if (t130 != 4294965081U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x545 = INT16_MIN;
	int32_t x546 = INT32_MIN;
	int8_t x547 = INT8_MIN;
	volatile int32_t t131 = 16128;

    t131 = ((x545<=x546)-(x547/x548));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x551 = -1;
	static uint64_t x552 = UINT64_MAX;

    t132 = ((x549<=x550)-(x551/x552));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint32_t x553 = 16245578U;
	int16_t x554 = -1;
	int64_t x555 = INT64_MIN;
	static uint8_t x556 = UINT8_MAX;
	int64_t t133 = -11LL;

    t133 = ((x553<=x554)-(x555/x556));

    if (t133 != 36170086419038337LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x558 = 1U;
	static volatile int16_t x559 = INT16_MIN;
	uint32_t x560 = 220U;
	uint32_t t134 = 0U;

    t134 = ((x557<=x558)-(x559/x560));

    if (t134 != 4275444868U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x561 = 3U;
	int16_t x562 = -404;
	int32_t x563 = INT32_MAX;
	int32_t x564 = -33;
	volatile int32_t t135 = 19140380;

    t135 = ((x561<=x562)-(x563/x564));

    if (t135 != 65075262) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x565 = 15689U;
	volatile int64_t x566 = -382127705364824539LL;
	uint16_t x567 = 657U;
	int32_t x568 = -1;

    t136 = ((x565<=x566)-(x567/x568));

    if (t136 != 657) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x570 = 1;
	uint32_t x572 = UINT32_MAX;
	uint32_t t137 = 30U;

    t137 = ((x569<=x570)-(x571/x572));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x575 = INT64_MIN;
	int64_t t138 = -3437625138648643LL;

    t138 = ((x573<=x574)-(x575/x576));

    if (t138 != 3428762838979470LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x578 = INT32_MIN;
	int16_t x579 = 4;
	uint8_t x580 = 14U;
	volatile int32_t t139 = 92707178;

    t139 = ((x577<=x578)-(x579/x580));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x583 = 3U;
	int8_t x584 = INT8_MIN;
	volatile int32_t t140 = -251;

    t140 = ((x581<=x582)-(x583/x584));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = INT8_MIN;
	static int16_t x586 = 3378;
	volatile uint32_t t141 = 31U;

    t141 = ((x585<=x586)-(x587/x588));

    if (t141 != 4294967020U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x589 = UINT16_MAX;
	uint64_t x590 = 711640254631094374LLU;
	int32_t x591 = INT32_MIN;
	volatile uint32_t x592 = 800U;
	uint32_t t142 = 168149732U;

    t142 = ((x589<=x590)-(x591/x592));

    if (t142 != 4292282943U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x593 = 547321862806LLU;
	static int8_t x594 = -1;
	uint16_t x595 = 1U;
	int64_t x596 = INT64_MAX;
	volatile int64_t t143 = 42094271657952LL;

    t143 = ((x593<=x594)-(x595/x596));

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x597 = -28;
	int16_t x598 = -1;
	int16_t x599 = INT16_MAX;
	int32_t t144 = -30298163;

    t144 = ((x597<=x598)-(x599/x600));

    if (t144 != -16382) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x602 = 903LLU;
	int32_t x604 = INT32_MIN;

    t145 = ((x601<=x602)-(x603/x604));

    if (t145 != 1U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x605 = INT16_MIN;
	int64_t x606 = 6710849LL;
	int8_t x607 = INT8_MAX;
	uint8_t x608 = 18U;
	int32_t t146 = -7;

    t146 = ((x605<=x606)-(x607/x608));

    if (t146 != -6) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x609 = 0U;
	int64_t x610 = -8321295110812160LL;
	static int8_t x611 = INT8_MIN;
	volatile int16_t x612 = INT16_MIN;

    t147 = ((x609<=x610)-(x611/x612));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x613 = 169941836831136LLU;
	int8_t x614 = -1;
	volatile int32_t x615 = 11570278;
	int8_t x616 = INT8_MAX;
	volatile int32_t t148 = 10246042;

    t148 = ((x613<=x614)-(x615/x616));

    if (t148 != -91103) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x617 = 31051U;
	int32_t x619 = -1;
	int8_t x620 = INT8_MIN;
	volatile int32_t t149 = 149589;

    t149 = ((x617<=x618)-(x619/x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x621 = INT64_MAX;
	uint64_t x622 = 137715LLU;
	volatile int8_t x623 = 0;
	int8_t x624 = INT8_MIN;
	int32_t t150 = 23729;

    t150 = ((x621<=x622)-(x623/x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x625 = UINT64_MAX;
	int16_t x626 = -1202;
	volatile int32_t x627 = INT32_MAX;
	static int32_t t151 = INT32_MAX;

    t151 = ((x625<=x626)-(x627/x628));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x629 = 803755147LLU;
	volatile int16_t x630 = INT16_MIN;
	static int16_t x631 = 562;
	int16_t x632 = 5311;

    t152 = ((x629<=x630)-(x631/x632));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x633 = INT64_MIN;
	int8_t x636 = INT8_MAX;
	volatile uint32_t t153 = 535358017U;

    t153 = ((x633<=x634)-(x635/x636));

    if (t153 != 4294963961U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = -330179052071LL;
	int32_t x642 = INT32_MIN;
	int16_t x643 = -925;
	volatile int32_t t154 = -863;

    t154 = ((x641<=x642)-(x643/x644));

    if (t154 != 103) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x645 = 2U;
	int64_t x647 = 13727266291LL;
	static volatile int32_t x648 = 1;
	int64_t t155 = -6756339578LL;

    t155 = ((x645<=x646)-(x647/x648));

    if (t155 != -13727266291LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x649 = INT64_MAX;
	volatile int32_t x650 = INT32_MIN;
	static volatile uint8_t x651 = 1U;
	int32_t x652 = -13547427;
	volatile int32_t t156 = -12738;

    t156 = ((x649<=x650)-(x651/x652));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x653 = 65U;
	int16_t x654 = -4731;
	int64_t x655 = -1497674123990LL;
	int16_t x656 = INT16_MIN;

    t157 = ((x653<=x654)-(x655/x656));

    if (t157 != -45705387LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x657 = UINT32_MAX;
	int64_t x658 = -3835317838065403LL;
	int16_t x659 = INT16_MIN;
	static int8_t x660 = -1;
	int32_t t158 = -1;

    t158 = ((x657<=x658)-(x659/x660));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x662 = INT64_MAX;
	int32_t x663 = -9;
	volatile int64_t t159 = -418291LL;

    t159 = ((x661<=x662)-(x663/x664));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x665 = UINT64_MAX;
	int16_t x666 = INT16_MAX;
	static volatile int8_t x667 = INT8_MAX;
	uint32_t x668 = 20304708U;
	volatile uint32_t t160 = 2U;

    t160 = ((x665<=x666)-(x667/x668));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x669 = UINT16_MAX;
	int8_t x670 = 3;
	static uint64_t x671 = 5573274786964LLU;
	volatile int32_t x672 = 10624;
	uint64_t t161 = 215127442862812LLU;

    t161 = ((x669<=x670)-(x671/x672));

    if (t161 != 18446744073184958734LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x673 = -1;
	volatile int32_t x674 = INT32_MIN;
	static int16_t x675 = INT16_MAX;
	static volatile uint32_t x676 = UINT32_MAX;
	uint32_t t162 = 2U;

    t162 = ((x673<=x674)-(x675/x676));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x677 = -13LL;
	volatile int8_t x678 = -1;
	int8_t x679 = INT8_MAX;
	int64_t x680 = INT64_MIN;
	int64_t t163 = -216216248LL;

    t163 = ((x677<=x678)-(x679/x680));

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x681 = INT8_MAX;
	int16_t x684 = -117;
	int64_t t164 = -93710561958689LL;

    t164 = ((x681<=x682)-(x683/x684));

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x685 = INT16_MIN;
	int16_t x686 = 659;
	uint64_t x687 = UINT64_MAX;
	uint8_t x688 = 15U;

    t165 = ((x685<=x686)-(x687/x688));

    if (t165 != 17216961135462248176LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = -1;
	static int16_t x690 = INT16_MAX;
	uint8_t x691 = UINT8_MAX;
	volatile int64_t t166 = 34285605365696688LL;

    t166 = ((x689<=x690)-(x691/x692));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x693 = 11083;
	uint32_t x694 = 98424U;
	static volatile int16_t x695 = 21;
	int8_t x696 = INT8_MAX;

    t167 = ((x693<=x694)-(x695/x696));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = INT16_MIN;
	volatile int32_t x699 = INT32_MAX;
	static int8_t x700 = INT8_MIN;
	volatile int32_t t168 = 437909845;

    t168 = ((x697<=x698)-(x699/x700));

    if (t168 != 16777216) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x701 = 1056U;
	int8_t x702 = -1;
	static volatile int32_t x703 = -137706;
	int8_t x704 = INT8_MAX;
	volatile int32_t t169 = -194480;

    t169 = ((x701<=x702)-(x703/x704));

    if (t169 != 1084) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x705 = INT32_MAX;
	int16_t x707 = INT16_MIN;
	uint32_t x708 = UINT32_MAX;
	volatile uint32_t t170 = 3142U;

    t170 = ((x705<=x706)-(x707/x708));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = 3;
	int32_t x710 = -153058494;
	int64_t x712 = INT64_MIN;
	int64_t t171 = -13404613423840LL;

    t171 = ((x709<=x710)-(x711/x712));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x713 = -1;
	static int32_t x714 = INT32_MIN;
	uint16_t x715 = 404U;
	int32_t x716 = -1;

    t172 = ((x713<=x714)-(x715/x716));

    if (t172 != 404) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x718 = 26U;
	static volatile uint64_t x719 = 3816465503LLU;
	int64_t x720 = INT64_MIN;

    t173 = ((x717<=x718)-(x719/x720));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x721 = 183558405U;
	int16_t x722 = -17;
	uint64_t x723 = UINT64_MAX;
	uint8_t x724 = 12U;
	volatile uint64_t t174 = 11597837979LLU;

    t174 = ((x721<=x722)-(x723/x724));

    if (t174 != 16909515400900422316LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x726 = 3U;
	static int64_t x727 = -15455LL;
	int64_t t175 = 560LL;

    t175 = ((x725<=x726)-(x727/x728));

    if (t175 != -15454LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x729 = -1LL;
	int16_t x730 = INT16_MAX;
	int16_t x731 = -573;
	static int32_t x732 = -1;
	int32_t t176 = -754;

    t176 = ((x729<=x730)-(x731/x732));

    if (t176 != -572) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x733 = 19032LL;
	int32_t x734 = INT32_MIN;
	int8_t x735 = INT8_MAX;
	int16_t x736 = INT16_MIN;
	static int32_t t177 = 9929635;

    t177 = ((x733<=x734)-(x735/x736));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x737 = INT32_MIN;
	uint64_t x738 = 48392367414LLU;
	int16_t x739 = INT16_MAX;
	int64_t x740 = -1LL;
	static volatile int64_t t178 = -1042215484633LL;

    t178 = ((x737<=x738)-(x739/x740));

    if (t178 != 32767LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x741 = -1;
	int16_t x742 = INT16_MIN;
	int64_t x744 = INT64_MIN;
	volatile int64_t t179 = 1595607LL;

    t179 = ((x741<=x742)-(x743/x744));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x745 = INT8_MAX;
	int16_t x746 = 16040;
	int64_t x747 = INT64_MAX;
	int32_t x748 = -36507;
	volatile int64_t t180 = 15LL;

    t180 = ((x745<=x746)-(x747/x748));

    if (t180 != 252646671511074LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x750 = INT32_MIN;
	volatile int32_t x751 = -1;
	uint64_t x752 = UINT64_MAX;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = ((x749<=x750)-(x751/x752));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x753 = 125LLU;
	int64_t x754 = 1LL;
	int8_t x755 = INT8_MIN;
	int16_t x756 = INT16_MAX;
	int32_t t182 = 148760;

    t182 = ((x753<=x754)-(x755/x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x757 = -1;
	static int8_t x758 = -58;
	int64_t x759 = -9LL;
	int32_t x760 = -1;
	static int64_t t183 = -142550767547892626LL;

    t183 = ((x757<=x758)-(x759/x760));

    if (t183 != -9LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x761 = INT32_MAX;
	int64_t x762 = -13LL;
	int32_t x764 = -448;
	static volatile int32_t t184 = 1;

    t184 = ((x761<=x762)-(x763/x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x765 = UINT16_MAX;
	volatile uint64_t x766 = 848982495880282919LLU;
	int32_t x767 = INT32_MIN;
	volatile int32_t x768 = 1584;
	volatile int32_t t185 = 6;

    t185 = ((x765<=x766)-(x767/x768));

    if (t185 != 1355735) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = -1;
	volatile int8_t x771 = INT8_MAX;
	static volatile int32_t x772 = -1;
	volatile int32_t t186 = 62;

    t186 = ((x769<=x770)-(x771/x772));

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x774 = INT64_MIN;
	static volatile uint8_t x775 = 35U;
	uint32_t x776 = UINT32_MAX;
	uint32_t t187 = 523204940U;

    t187 = ((x773<=x774)-(x775/x776));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x777 = 3U;
	static int8_t x778 = -1;
	int8_t x779 = INT8_MIN;
	volatile uint32_t x780 = UINT32_MAX;
	volatile uint32_t t188 = 7U;

    t188 = ((x777<=x778)-(x779/x780));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = INT64_MIN;
	volatile int32_t x782 = 1;
	uint64_t t189 = 103221495LLU;

    t189 = ((x781<=x782)-(x783/x784));

    if (t189 != 18446736713432872605LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x789 = -10;
	int16_t x790 = 9561;
	volatile int64_t x791 = -2838524LL;
	int64_t t190 = -458708388227939LL;

    t190 = ((x789<=x790)-(x791/x792));

    if (t190 != 157696LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x793 = INT8_MIN;
	int16_t x794 = -3;
	int8_t x796 = INT8_MIN;
	static int32_t t191 = 7714487;

    t191 = ((x793<=x794)-(x795/x796));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x797 = 1404;
	volatile int64_t x798 = INT64_MIN;
	uint16_t x799 = 11U;
	int8_t x800 = 2;
	volatile int32_t t192 = -2;

    t192 = ((x797<=x798)-(x799/x800));

    if (t192 != -5) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x802 = INT64_MIN;
	uint8_t x804 = 20U;

    t193 = ((x801<=x802)-(x803/x804));

    if (t193 != 4257088007U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x805 = 426522458682652638LL;
	int64_t x806 = INT64_MIN;
	int16_t x807 = 30;
	static volatile int32_t t194 = 59;

    t194 = ((x805<=x806)-(x807/x808));

    if (t194 != -5) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x810 = INT64_MIN;
	volatile int64_t x811 = -27091LL;
	volatile int8_t x812 = -1;
	int64_t t195 = -1214LL;

    t195 = ((x809<=x810)-(x811/x812));

    if (t195 != -27091LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x813 = INT8_MAX;
	static int64_t x814 = INT64_MAX;
	volatile uint32_t x815 = 1U;
	static uint16_t x816 = UINT16_MAX;

    t196 = ((x813<=x814)-(x815/x816));

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x817 = 90U;
	uint8_t x818 = UINT8_MAX;
	static volatile uint64_t x819 = 1080179776680583555LLU;

    t197 = ((x817<=x818)-(x819/x820));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x821 = INT64_MAX;
	static uint32_t x822 = 26286970U;
	volatile int16_t x823 = INT16_MIN;
	int32_t x824 = -1;
	volatile int32_t t198 = 981228;

    t198 = ((x821<=x822)-(x823/x824));

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x825 = -1;
	int8_t x826 = -1;
	uint32_t x827 = 181U;
	static volatile uint32_t t199 = 3156505U;

    t199 = ((x825<=x826)-(x827/x828));

    if (t199 != 4294967261U) { NG(); } else { ; }
	
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

