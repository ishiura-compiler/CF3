
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

int16_t x6 = INT16_MIN;
int8_t x8 = INT8_MIN;
int32_t t1 = -5421;
uint8_t x23 = UINT8_MAX;
volatile int16_t x25 = INT16_MIN;
int16_t x32 = -1;
volatile int32_t t6 = -984726282;
static int8_t x39 = INT8_MIN;
volatile int32_t t9 = -208412200;
int32_t x49 = -1;
int8_t x54 = INT8_MIN;
int32_t t12 = 8;
static int32_t t14 = -31;
int64_t x69 = -5589956388581490LL;
int64_t x78 = INT64_MIN;
uint8_t x79 = 64U;
uint8_t x80 = UINT8_MAX;
int64_t x83 = 18476LL;
static int8_t x84 = -1;
static volatile uint64_t x87 = 5LLU;
int16_t x89 = -7;
static int64_t x92 = 977327994524LL;
int8_t x96 = INT8_MIN;
static int64_t x104 = INT64_MIN;
int64_t x114 = INT64_MIN;
int64_t x115 = INT64_MAX;
static uint8_t x117 = UINT8_MAX;
uint32_t x121 = 886U;
uint64_t x122 = 1590684973LLU;
int64_t x124 = 1014340LL;
int8_t x125 = INT8_MIN;
int32_t t29 = 347;
int64_t x129 = -1LL;
int32_t x133 = INT32_MIN;
int32_t x137 = -1;
int64_t x138 = INT64_MIN;
static int16_t x155 = INT16_MIN;
int32_t x162 = INT32_MIN;
static volatile int32_t x164 = INT32_MIN;
static int8_t x180 = -18;
int64_t x182 = INT64_MIN;
static int64_t x188 = 40469165149651745LL;
int32_t x190 = INT32_MAX;
int8_t x194 = -1;
volatile int32_t x197 = INT32_MIN;
uint16_t x201 = 38U;
static volatile int32_t t48 = 229577117;
int64_t x215 = -1LL;
volatile uint32_t x221 = 1152085221U;
uint8_t x223 = 1U;
int32_t x224 = INT32_MAX;
int64_t x227 = INT64_MIN;
int8_t x232 = 6;
volatile int32_t t55 = 13625;
uint32_t x233 = 675727U;
int16_t x235 = INT16_MIN;
int32_t x237 = INT32_MIN;
static int32_t x239 = -1;
int16_t x243 = -1;
int64_t x248 = INT64_MAX;
static int32_t t59 = 1;
int32_t x251 = 5558762;
volatile int32_t t60 = -117885621;
int32_t x267 = INT32_MAX;
static int32_t t65 = -16127310;
int32_t t67 = -402;
int16_t x282 = INT16_MAX;
int64_t x285 = INT64_MIN;
uint64_t x295 = UINT64_MAX;
volatile int64_t x302 = INT64_MIN;
int32_t x303 = INT32_MIN;
int32_t t73 = 1;
int32_t t74 = -8578294;
int8_t x314 = 1;
int32_t t76 = -42068;
int32_t t77 = -15895;
int16_t x322 = INT16_MIN;
volatile int32_t x329 = -1;
int64_t x330 = INT64_MIN;
int8_t x336 = INT8_MAX;
uint64_t x337 = UINT64_MAX;
uint32_t x339 = UINT32_MAX;
volatile int16_t x340 = INT16_MIN;
static volatile int32_t t82 = -108712;
uint16_t x341 = 82U;
static volatile int64_t x354 = 3918LL;
int8_t x358 = -61;
uint16_t x359 = 0U;
static int32_t x360 = INT32_MIN;
int8_t x362 = -14;
int16_t x363 = -1200;
static volatile int32_t t88 = -1;
int64_t x369 = -51785LL;
volatile int64_t x373 = -1LL;
volatile int32_t t90 = -155;
int8_t x379 = -1;
int32_t t92 = 7465717;
int8_t x385 = INT8_MIN;
int64_t x387 = INT64_MAX;
uint32_t x392 = 192U;
static int16_t x395 = -1;
int64_t x396 = INT64_MIN;
int8_t x397 = INT8_MIN;
int32_t x399 = INT32_MIN;
static int16_t x402 = 138;
static volatile int32_t t97 = 202485273;
int32_t t100 = 4056;
uint64_t x420 = 20188LLU;
volatile int32_t t101 = -857801197;
int32_t x423 = 0;
static int32_t x430 = 14665890;
uint64_t x432 = UINT64_MAX;
static int32_t x439 = -676670;
int32_t t108 = -31;
int64_t x449 = -1LL;
static int8_t x472 = -1;
int32_t t113 = 982378451;
int32_t x473 = -1;
volatile int64_t x477 = -130161060LL;
volatile int32_t t116 = -217458463;
uint16_t x485 = UINT16_MAX;
int16_t x487 = INT16_MIN;
int8_t x505 = 0;
volatile int32_t t122 = 36587972;
volatile int64_t x516 = INT64_MIN;
volatile int32_t t125 = 846827;
uint16_t x530 = 448U;
int32_t x532 = -1;
volatile int32_t x533 = 183;
int32_t x534 = -23153;
int64_t x547 = -1LL;
int64_t x555 = 105LL;
static int32_t x557 = 267290102;
uint16_t x558 = UINT16_MAX;
volatile int32_t x560 = INT32_MAX;
volatile int16_t x562 = -1;
uint64_t x564 = 527739316320282LLU;
static volatile int32_t x566 = -1;
int32_t t136 = -10206;
int16_t x577 = 10;
int16_t x584 = INT16_MIN;
uint64_t x598 = UINT64_MAX;
int64_t x600 = INT64_MAX;
int64_t x604 = INT64_MAX;
static int64_t x608 = INT64_MIN;
int32_t t146 = 1;
int8_t x612 = INT8_MIN;
static volatile int32_t x617 = INT32_MIN;
static uint32_t x618 = UINT32_MAX;
int16_t x630 = 616;
static uint32_t x631 = 7515U;
volatile int16_t x649 = -1;
int32_t t155 = -3669;
uint64_t x653 = 28332450422448218LLU;
uint64_t x656 = 480LLU;
int32_t t157 = 8483;
int32_t t158 = -1;
static int32_t x673 = -1;
int16_t x675 = INT16_MAX;
int8_t x676 = INT8_MIN;
uint16_t x680 = UINT16_MAX;
int32_t x682 = INT32_MIN;
int32_t x685 = -1;
uint16_t x686 = UINT16_MAX;
uint32_t x692 = 28U;
volatile int32_t t165 = 1;
int32_t t167 = -15290;
int16_t x713 = 0;
static int16_t x714 = INT16_MAX;
int64_t x717 = -1LL;
volatile int64_t x723 = -419489LL;
volatile int16_t x724 = 4;
int32_t t173 = -19368;
static uint64_t x726 = 195LLU;
static int32_t t174 = 0;
int8_t x732 = -1;
volatile int8_t x741 = 1;
uint64_t x743 = 802LLU;
static volatile uint64_t x744 = UINT64_MAX;
volatile uint8_t x749 = 28U;
int32_t x758 = -1;
uint8_t x763 = UINT8_MAX;
int32_t x774 = INT32_MIN;
int16_t x776 = 2;
volatile uint16_t x781 = 1204U;
uint8_t x782 = 1U;
volatile uint64_t x787 = 14181167418LLU;
int64_t x789 = INT64_MAX;
int16_t x795 = 9513;
int32_t x796 = INT32_MAX;
int64_t x802 = -249LL;
int32_t t193 = -6098767;
static int16_t x810 = INT16_MIN;
static volatile uint16_t x814 = UINT16_MAX;
volatile uint32_t x820 = 99757U;
int16_t x828 = -154;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	static int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MAX;
	int32_t x4 = -3299249;
	static int32_t t0 = 511395;

    t0 = (((x1/x2)>x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;

    t1 = (((x5/x6)>x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 55U;
	uint16_t x11 = 10914U;
	int64_t x12 = -1LL;
	volatile int32_t t2 = -33557;

    t2 = (((x9/x10)>x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x17 = INT64_MIN;
	uint64_t x18 = 105957601957300LLU;
	static int64_t x19 = -1LL;
	int8_t x20 = INT8_MAX;
	volatile int32_t t3 = 296;

    t3 = (((x17/x18)>x19)>x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 0;
	static uint64_t x22 = 2084823LLU;
	static uint64_t x24 = UINT64_MAX;
	volatile int32_t t4 = 1850;

    t4 = (((x21/x22)>x23)>x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x26 = INT32_MIN;
	static volatile int16_t x27 = INT16_MIN;
	static int32_t x28 = -1;
	int32_t t5 = 12;

    t5 = (((x25/x26)>x27)>x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = -47;
	uint8_t x30 = UINT8_MAX;
	int16_t x31 = -15;

    t6 = (((x29/x30)>x31)>x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -990;
	int16_t x38 = 704;
	volatile int64_t x40 = INT64_MIN;
	int32_t t7 = 5;

    t7 = (((x37/x38)>x39)>x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = 284107U;
	int16_t x42 = -1;
	volatile uint32_t x43 = 3402036U;
	uint16_t x44 = 13U;
	int32_t t8 = -27944;

    t8 = (((x41/x42)>x43)>x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x45 = -7;
	int64_t x46 = INT64_MIN;
	volatile uint16_t x47 = 777U;
	static int16_t x48 = 8;

    t9 = (((x45/x46)>x47)>x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MIN;
	uint32_t x52 = 827662U;
	int32_t t10 = -1;

    t10 = (((x49/x50)>x51)>x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x53 = INT16_MIN;
	volatile int32_t x55 = 1;
	uint32_t x56 = 213U;
	volatile int32_t t11 = -1857075;

    t11 = (((x53/x54)>x55)>x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = 67272U;
	int16_t x58 = -1;
	static int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;

    t12 = (((x57/x58)>x59)>x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = UINT8_MAX;
	int64_t x62 = 4888989LL;
	static volatile int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MIN;
	volatile int32_t t13 = 3882167;

    t13 = (((x61/x62)>x63)>x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = -8;
	volatile int8_t x66 = -1;
	uint16_t x67 = 86U;
	int16_t x68 = 62;

    t14 = (((x65/x66)>x67)>x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x70 = 100U;
	int16_t x71 = -671;
	int8_t x72 = -29;
	int32_t t15 = 67071;

    t15 = (((x69/x70)>x71)>x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x73 = 23311LLU;
	static int8_t x74 = -1;
	static int32_t x75 = INT32_MAX;
	volatile int16_t x76 = -3640;
	int32_t t16 = -3;

    t16 = (((x73/x74)>x75)>x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x77 = 10LLU;
	int32_t t17 = -54881333;

    t17 = (((x77/x78)>x79)>x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x81 = 4709035863912618LLU;
	int8_t x82 = INT8_MIN;
	volatile int32_t t18 = -768;

    t18 = (((x81/x82)>x83)>x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x85 = UINT8_MAX;
	uint32_t x86 = UINT32_MAX;
	int8_t x88 = 0;
	volatile int32_t t19 = 199473;

    t19 = (((x85/x86)>x87)>x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x90 = INT8_MAX;
	int8_t x91 = -1;
	static int32_t t20 = 1034789;

    t20 = (((x89/x90)>x91)>x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MIN;
	int64_t x94 = -7557238572535507LL;
	static int32_t x95 = INT32_MIN;
	int32_t t21 = 945;

    t21 = (((x93/x94)>x95)>x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x97 = INT8_MIN;
	static uint8_t x98 = UINT8_MAX;
	uint16_t x99 = 130U;
	volatile int64_t x100 = INT64_MAX;
	volatile int32_t t22 = -822;

    t22 = (((x97/x98)>x99)>x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	static volatile int32_t x102 = 57437820;
	volatile uint16_t x103 = UINT16_MAX;
	int32_t t23 = 832998382;

    t23 = (((x101/x102)>x103)>x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x105 = UINT64_MAX;
	int8_t x106 = 1;
	int32_t x107 = INT32_MIN;
	int16_t x108 = -1;
	volatile int32_t t24 = -106;

    t24 = (((x105/x106)>x107)>x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x109 = INT16_MIN;
	int32_t x110 = 2028420;
	uint64_t x111 = 7379578740619820LLU;
	int8_t x112 = -1;
	static volatile int32_t t25 = 9621;

    t25 = (((x109/x110)>x111)>x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x113 = UINT8_MAX;
	int64_t x116 = 106664500796878LL;
	static volatile int32_t t26 = -867;

    t26 = (((x113/x114)>x115)>x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x118 = 864541484;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = 526875823921368966LLU;
	int32_t t27 = -85793413;

    t27 = (((x117/x118)>x119)>x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x123 = INT8_MAX;
	static int32_t t28 = 0;

    t28 = (((x121/x122)>x123)>x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x126 = UINT64_MAX;
	int32_t x127 = -1;
	static int8_t x128 = INT8_MAX;

    t29 = (((x125/x126)>x127)>x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x130 = INT64_MIN;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = 910607;
	volatile int32_t t30 = 27;

    t30 = (((x129/x130)>x131)>x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x134 = INT32_MIN;
	uint8_t x135 = 0U;
	int16_t x136 = 62;
	volatile int32_t t31 = -25;

    t31 = (((x133/x134)>x135)>x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x139 = INT32_MIN;
	volatile int16_t x140 = -1;
	volatile int32_t t32 = 1;

    t32 = (((x137/x138)>x139)>x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x141 = -73;
	static uint16_t x142 = 53U;
	volatile int32_t x143 = INT32_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t33 = -186;

    t33 = (((x141/x142)>x143)>x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = INT16_MIN;
	uint8_t x146 = UINT8_MAX;
	volatile int64_t x147 = 1151355585400585281LL;
	int64_t x148 = INT64_MIN;
	volatile int32_t t34 = 38509;

    t34 = (((x145/x146)>x147)>x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = UINT64_MAX;
	static int16_t x150 = -1;
	uint64_t x151 = 23559630LLU;
	int64_t x152 = INT64_MIN;
	static int32_t t35 = 3001929;

    t35 = (((x149/x150)>x151)>x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x153 = INT16_MIN;
	int16_t x154 = -1;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t36 = 4;

    t36 = (((x153/x154)>x155)>x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = 4691428LL;
	uint16_t x158 = 153U;
	int32_t x159 = -1;
	uint16_t x160 = 2460U;
	volatile int32_t t37 = -63830;

    t37 = (((x157/x158)>x159)>x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	volatile int32_t t38 = -1999917;

    t38 = (((x161/x162)>x163)>x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = -48662;
	static int8_t x166 = 16;
	uint64_t x167 = 876482384117286972LLU;
	static volatile uint16_t x168 = UINT16_MAX;
	int32_t t39 = -4307;

    t39 = (((x165/x166)>x167)>x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x169 = 0U;
	static int64_t x170 = INT64_MIN;
	uint16_t x171 = 4U;
	uint16_t x172 = UINT16_MAX;
	int32_t t40 = 9602;

    t40 = (((x169/x170)>x171)>x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = INT8_MIN;
	uint64_t x174 = 1875685560339LLU;
	static volatile int32_t x175 = 173604;
	uint8_t x176 = 29U;
	static volatile int32_t t41 = 0;

    t41 = (((x173/x174)>x175)>x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MIN;
	volatile int8_t x179 = INT8_MIN;
	volatile int32_t t42 = -51;

    t42 = (((x177/x178)>x179)>x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x181 = 0;
	uint8_t x183 = UINT8_MAX;
	static volatile int64_t x184 = INT64_MIN;
	int32_t t43 = 28140667;

    t43 = (((x181/x182)>x183)>x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = 2U;
	int32_t x186 = INT32_MIN;
	static volatile int16_t x187 = INT16_MIN;
	static int32_t t44 = 522;

    t44 = (((x185/x186)>x187)>x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 0U;
	int64_t x191 = INT64_MIN;
	static int64_t x192 = INT64_MIN;
	int32_t t45 = 631542;

    t45 = (((x189/x190)>x191)>x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MIN;
	int32_t x195 = INT32_MAX;
	static volatile uint8_t x196 = UINT8_MAX;
	volatile int32_t t46 = 30562148;

    t46 = (((x193/x194)>x195)>x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x198 = -5;
	uint16_t x199 = 111U;
	static volatile int16_t x200 = 488;
	volatile int32_t t47 = 460;

    t47 = (((x197/x198)>x199)>x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x202 = INT16_MIN;
	int32_t x203 = -1;
	static int16_t x204 = 1;

    t48 = (((x201/x202)>x203)>x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	int64_t x207 = -1LL;
	volatile uint32_t x208 = 923U;
	volatile int32_t t49 = 3;

    t49 = (((x205/x206)>x207)>x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x209 = 2U;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	static int16_t x212 = -4749;
	volatile int32_t t50 = 469157708;

    t50 = (((x209/x210)>x211)>x212);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x213 = 25;
	int16_t x214 = -1;
	int8_t x216 = INT8_MIN;
	volatile int32_t t51 = 32630030;

    t51 = (((x213/x214)>x215)>x216);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = 1;
	int16_t x218 = -1;
	static int8_t x219 = INT8_MAX;
	uint16_t x220 = 26U;
	volatile int32_t t52 = 154647665;

    t52 = (((x217/x218)>x219)>x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x222 = 42;
	static int32_t t53 = -442839497;

    t53 = (((x221/x222)>x223)>x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x225 = -1;
	int8_t x226 = INT8_MAX;
	volatile int8_t x228 = 4;
	volatile int32_t t54 = 660905653;

    t54 = (((x225/x226)>x227)>x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = 20LL;
	int16_t x230 = -1;
	int8_t x231 = 1;

    t55 = (((x229/x230)>x231)>x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x234 = -23674100335271521LL;
	static uint32_t x236 = 260976U;
	volatile int32_t t56 = 53;

    t56 = (((x233/x234)>x235)>x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x238 = 5U;
	int64_t x240 = -1LL;
	volatile int32_t t57 = -946;

    t57 = (((x237/x238)>x239)>x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MAX;
	volatile int16_t x244 = 88;
	int32_t t58 = 7181750;

    t58 = (((x241/x242)>x243)>x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x245 = 1;
	uint8_t x246 = UINT8_MAX;
	volatile int64_t x247 = INT64_MIN;

    t59 = (((x245/x246)>x247)>x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x249 = INT8_MIN;
	static int64_t x250 = 120281649846LL;
	uint64_t x252 = 245745947146LLU;

    t60 = (((x249/x250)>x251)>x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = -1LL;
	static uint16_t x254 = 19690U;
	int64_t x255 = INT64_MIN;
	static int32_t x256 = 1;
	int32_t t61 = 218266;

    t61 = (((x253/x254)>x255)>x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MIN;
	volatile int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MAX;
	volatile int8_t x260 = 0;
	int32_t t62 = -297;

    t62 = (((x257/x258)>x259)>x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	uint64_t x264 = 175887630928508LLU;
	volatile int32_t t63 = -1;

    t63 = (((x261/x262)>x263)>x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x265 = INT8_MIN;
	volatile int64_t x266 = 729839891LL;
	int64_t x268 = -1475033798858LL;
	int32_t t64 = -52844308;

    t64 = (((x265/x266)>x267)>x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x269 = 356660575621722828LLU;
	static uint64_t x270 = UINT64_MAX;
	int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MIN;

    t65 = (((x269/x270)>x271)>x272);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x273 = 0;
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = -1LL;
	uint32_t x276 = 86120415U;
	int32_t t66 = -59;

    t66 = (((x273/x274)>x275)>x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x277 = 10U;
	int32_t x278 = -1;
	int16_t x279 = 3822;
	static int64_t x280 = -1LL;

    t67 = (((x277/x278)>x279)>x280);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = -1;
	uint16_t x283 = 8761U;
	int16_t x284 = -1;
	int32_t t68 = 27;

    t68 = (((x281/x282)>x283)>x284);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x286 = INT64_MIN;
	uint16_t x287 = 553U;
	uint32_t x288 = UINT32_MAX;
	volatile int32_t t69 = 172868;

    t69 = (((x285/x286)>x287)>x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = INT64_MIN;
	volatile uint32_t x290 = UINT32_MAX;
	int32_t x291 = 7;
	int8_t x292 = INT8_MIN;
	volatile int32_t t70 = 715860;

    t70 = (((x289/x290)>x291)>x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x293 = 187438515U;
	int8_t x294 = -1;
	volatile int8_t x296 = INT8_MAX;
	volatile int32_t t71 = -50905739;

    t71 = (((x293/x294)>x295)>x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = -1;
	int16_t x298 = -1;
	uint32_t x299 = 2994U;
	static volatile int8_t x300 = INT8_MAX;
	static volatile int32_t t72 = 28941;

    t72 = (((x297/x298)>x299)>x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = 2801618797253LL;
	int8_t x304 = -1;

    t73 = (((x301/x302)>x303)>x304);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x305 = UINT8_MAX;
	int8_t x306 = INT8_MIN;
	int16_t x307 = -1;
	static uint8_t x308 = UINT8_MAX;

    t74 = (((x305/x306)>x307)>x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x309 = UINT8_MAX;
	volatile int64_t x310 = -1LL;
	int8_t x311 = -4;
	static int16_t x312 = 2;
	int32_t t75 = 28;

    t75 = (((x309/x310)>x311)>x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x313 = 0U;
	int8_t x315 = INT8_MAX;
	volatile int8_t x316 = -1;

    t76 = (((x313/x314)>x315)>x316);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	int32_t x318 = INT32_MIN;
	static uint16_t x319 = 29U;
	static uint16_t x320 = 164U;

    t77 = (((x317/x318)>x319)>x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = INT64_MIN;
	int64_t x323 = -1LL;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t78 = 570966062;

    t78 = (((x321/x322)>x323)>x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MIN;
	volatile int8_t x326 = 21;
	int32_t x327 = 102124457;
	int16_t x328 = INT16_MIN;
	volatile int32_t t79 = -1;

    t79 = (((x325/x326)>x327)>x328);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = INT64_MIN;
	volatile int32_t t80 = 169;

    t80 = (((x329/x330)>x331)>x332);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x333 = INT64_MAX;
	uint32_t x334 = 93U;
	int8_t x335 = INT8_MIN;
	static volatile int32_t t81 = 14704048;

    t81 = (((x333/x334)>x335)>x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x338 = 2;

    t82 = (((x337/x338)>x339)>x340);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x342 = INT32_MAX;
	static int32_t x343 = INT32_MAX;
	volatile uint8_t x344 = 1U;
	int32_t t83 = 0;

    t83 = (((x341/x342)>x343)>x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x345 = -1LL;
	uint64_t x346 = 387752808845170497LLU;
	int16_t x347 = INT16_MAX;
	int64_t x348 = INT64_MAX;
	volatile int32_t t84 = 2;

    t84 = (((x345/x346)>x347)>x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = INT32_MIN;
	uint32_t x350 = 1020286U;
	int16_t x351 = -1;
	uint8_t x352 = 3U;
	volatile int32_t t85 = -125;

    t85 = (((x349/x350)>x351)>x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x353 = 19755LLU;
	uint64_t x355 = UINT64_MAX;
	static uint16_t x356 = 13U;
	static volatile int32_t t86 = 64966;

    t86 = (((x353/x354)>x355)>x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x357 = -6;
	static int32_t t87 = -328945;

    t87 = (((x357/x358)>x359)>x360);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x361 = 2U;
	uint32_t x364 = 3893U;

    t88 = (((x361/x362)>x363)>x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x370 = INT16_MAX;
	volatile int32_t x371 = INT32_MIN;
	volatile int64_t x372 = -1LL;
	volatile int32_t t89 = -46352;

    t89 = (((x369/x370)>x371)>x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x374 = INT8_MIN;
	uint16_t x375 = 4313U;
	static volatile uint64_t x376 = 27032008107336326LLU;

    t90 = (((x373/x374)>x375)>x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x377 = 17211U;
	uint64_t x378 = 927532809294957705LLU;
	uint8_t x380 = 2U;
	static int32_t t91 = -185087085;

    t91 = (((x377/x378)>x379)>x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x381 = INT64_MIN;
	static int16_t x382 = INT16_MIN;
	int64_t x383 = -1LL;
	int32_t x384 = INT32_MIN;

    t92 = (((x381/x382)>x383)>x384);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x386 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	static int32_t t93 = -10;

    t93 = (((x385/x386)>x387)>x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x389 = 7U;
	int32_t x390 = -18;
	uint16_t x391 = 29U;
	int32_t t94 = 218892728;

    t94 = (((x389/x390)>x391)>x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x393 = -1;
	int64_t x394 = INT64_MIN;
	static int32_t t95 = -159152609;

    t95 = (((x393/x394)>x395)>x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x398 = UINT32_MAX;
	uint64_t x400 = 5709522336786LLU;
	volatile int32_t t96 = -528979;

    t96 = (((x397/x398)>x399)>x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x401 = -1;
	static uint8_t x403 = 1U;
	int8_t x404 = INT8_MAX;

    t97 = (((x401/x402)>x403)>x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = 13;
	volatile int64_t x406 = INT64_MAX;
	uint64_t x407 = 5560903393785369LLU;
	int8_t x408 = INT8_MIN;
	volatile int32_t t98 = 1707;

    t98 = (((x405/x406)>x407)>x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x409 = -1262031;
	int8_t x410 = -1;
	int32_t x411 = INT32_MIN;
	uint8_t x412 = 61U;
	int32_t t99 = -4133388;

    t99 = (((x409/x410)>x411)>x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x413 = -6;
	int64_t x414 = -1544722026LL;
	int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MAX;

    t100 = (((x413/x414)>x415)>x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x417 = -1;
	int16_t x418 = -1;
	int16_t x419 = INT16_MIN;

    t101 = (((x417/x418)>x419)>x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x421 = 12U;
	int8_t x422 = -11;
	int16_t x424 = 431;
	volatile int32_t t102 = 28;

    t102 = (((x421/x422)>x423)>x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x425 = UINT32_MAX;
	int8_t x426 = -1;
	uint16_t x427 = 0U;
	int8_t x428 = 0;
	volatile int32_t t103 = 42;

    t103 = (((x425/x426)>x427)>x428);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x429 = UINT16_MAX;
	int64_t x431 = 773932LL;
	volatile int32_t t104 = 1896933;

    t104 = (((x429/x430)>x431)>x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = INT64_MIN;
	uint64_t x434 = UINT64_MAX;
	int64_t x435 = INT64_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t105 = -1;

    t105 = (((x433/x434)>x435)>x436);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x437 = INT64_MAX;
	int8_t x438 = INT8_MIN;
	volatile int16_t x440 = -1;
	static int32_t t106 = -420638;

    t106 = (((x437/x438)>x439)>x440);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = INT64_MAX;
	int8_t x442 = 28;
	static volatile int64_t x443 = -1LL;
	static int8_t x444 = INT8_MIN;
	volatile int32_t t107 = 2015168;

    t107 = (((x441/x442)>x443)>x444);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x445 = -1;
	static int16_t x446 = -1;
	int64_t x447 = INT64_MIN;
	int32_t x448 = INT32_MIN;

    t108 = (((x445/x446)>x447)>x448);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x450 = UINT32_MAX;
	int8_t x451 = INT8_MIN;
	volatile int8_t x452 = 2;
	volatile int32_t t109 = 50;

    t109 = (((x449/x450)>x451)>x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = INT8_MIN;
	static volatile int8_t x454 = INT8_MAX;
	static int16_t x455 = -6;
	volatile int8_t x456 = INT8_MIN;
	volatile int32_t t110 = -62912;

    t110 = (((x453/x454)>x455)>x456);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = INT16_MIN;
	uint16_t x458 = 1U;
	static volatile int8_t x459 = -1;
	int64_t x460 = 25816267469342341LL;
	volatile int32_t t111 = 1;

    t111 = (((x457/x458)>x459)>x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = 14;
	int16_t x462 = 213;
	volatile uint64_t x463 = UINT64_MAX;
	int8_t x464 = -1;
	volatile int32_t t112 = 124;

    t112 = (((x461/x462)>x463)>x464);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x469 = UINT16_MAX;
	int16_t x470 = -4009;
	volatile int64_t x471 = INT64_MIN;

    t113 = (((x469/x470)>x471)>x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x474 = 30U;
	uint16_t x475 = 3U;
	int8_t x476 = INT8_MAX;
	int32_t t114 = 769207;

    t114 = (((x473/x474)>x475)>x476);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x478 = INT16_MIN;
	int16_t x479 = -6;
	static volatile uint32_t x480 = UINT32_MAX;
	int32_t t115 = 485;

    t115 = (((x477/x478)>x479)>x480);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x481 = -1;
	uint64_t x482 = 72LLU;
	int8_t x483 = INT8_MIN;
	int16_t x484 = INT16_MIN;

    t116 = (((x481/x482)>x483)>x484);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x486 = UINT8_MAX;
	static int64_t x488 = 107LL;
	static volatile int32_t t117 = 12093;

    t117 = (((x485/x486)>x487)>x488);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x489 = INT32_MIN;
	int8_t x490 = INT8_MIN;
	int16_t x491 = INT16_MAX;
	int8_t x492 = INT8_MIN;
	volatile int32_t t118 = 277730;

    t118 = (((x489/x490)>x491)>x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x493 = -767;
	int8_t x494 = INT8_MIN;
	int64_t x495 = -261129LL;
	uint32_t x496 = 10862U;
	static int32_t t119 = 97302;

    t119 = (((x493/x494)>x495)>x496);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x497 = 137490137LLU;
	volatile int32_t x498 = 1;
	static uint32_t x499 = 800939895U;
	int64_t x500 = -11LL;
	volatile int32_t t120 = -6;

    t120 = (((x497/x498)>x499)>x500);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x501 = INT16_MIN;
	static volatile int8_t x502 = 8;
	uint32_t x503 = UINT32_MAX;
	volatile uint16_t x504 = UINT16_MAX;
	volatile int32_t t121 = 1535;

    t121 = (((x501/x502)>x503)>x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x506 = INT16_MAX;
	int64_t x507 = -81368890110257LL;
	static int16_t x508 = INT16_MAX;

    t122 = (((x505/x506)>x507)>x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x509 = 3U;
	int8_t x510 = INT8_MIN;
	int16_t x511 = 1959;
	uint32_t x512 = 134743078U;
	static int32_t t123 = -2193;

    t123 = (((x509/x510)>x511)>x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = INT16_MAX;
	int8_t x514 = INT8_MAX;
	int64_t x515 = 3525195007417LL;
	volatile int32_t t124 = -3350;

    t124 = (((x513/x514)>x515)>x516);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x517 = 376581928U;
	uint16_t x518 = 4751U;
	static int32_t x519 = -1;
	int32_t x520 = INT32_MIN;

    t125 = (((x517/x518)>x519)>x520);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x525 = -1;
	volatile int64_t x526 = -308483226419476320LL;
	int16_t x527 = INT16_MIN;
	int64_t x528 = INT64_MIN;
	int32_t t126 = 85;

    t126 = (((x525/x526)>x527)>x528);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x529 = 321778LL;
	uint16_t x531 = 93U;
	volatile int32_t t127 = -15970129;

    t127 = (((x529/x530)>x531)>x532);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x535 = UINT16_MAX;
	uint8_t x536 = 71U;
	static volatile int32_t t128 = 586054395;

    t128 = (((x533/x534)>x535)>x536);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x537 = 37U;
	int64_t x538 = 1910055775134LL;
	uint8_t x539 = 2U;
	uint16_t x540 = 6U;
	int32_t t129 = -1;

    t129 = (((x537/x538)>x539)>x540);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x541 = INT64_MIN;
	int8_t x542 = INT8_MIN;
	uint16_t x543 = UINT16_MAX;
	volatile uint32_t x544 = 16U;
	volatile int32_t t130 = 15;

    t130 = (((x541/x542)>x543)>x544);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x545 = INT8_MIN;
	uint32_t x546 = 4U;
	static uint64_t x548 = 383401979717669LLU;
	int32_t t131 = 180667;

    t131 = (((x545/x546)>x547)>x548);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x549 = 26U;
	volatile uint16_t x550 = 17U;
	uint8_t x551 = 1U;
	uint32_t x552 = 23508U;
	volatile int32_t t132 = 15064;

    t132 = (((x549/x550)>x551)>x552);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x553 = INT16_MIN;
	int8_t x554 = INT8_MIN;
	int64_t x556 = -1LL;
	volatile int32_t t133 = -73437847;

    t133 = (((x553/x554)>x555)>x556);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x559 = 19361034U;
	int32_t t134 = 12296983;

    t134 = (((x557/x558)>x559)>x560);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x561 = INT8_MIN;
	int8_t x563 = INT8_MIN;
	volatile int32_t t135 = 39;

    t135 = (((x561/x562)>x563)>x564);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x565 = UINT16_MAX;
	volatile uint16_t x567 = 13813U;
	int32_t x568 = -1;

    t136 = (((x565/x566)>x567)>x568);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x569 = 19U;
	static volatile uint64_t x570 = 45334LLU;
	int32_t x571 = -5440;
	volatile int64_t x572 = INT64_MAX;
	volatile int32_t t137 = 835567;

    t137 = (((x569/x570)>x571)>x572);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x573 = -16;
	int32_t x574 = INT32_MIN;
	volatile int8_t x575 = 18;
	uint64_t x576 = 124106210183LLU;
	volatile int32_t t138 = 1287992;

    t138 = (((x573/x574)>x575)>x576);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x578 = -1;
	int64_t x579 = INT64_MIN;
	static int16_t x580 = INT16_MIN;
	volatile int32_t t139 = 1;

    t139 = (((x577/x578)>x579)>x580);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x581 = 45U;
	int64_t x582 = INT64_MAX;
	static int32_t x583 = INT32_MAX;
	int32_t t140 = -4709239;

    t140 = (((x581/x582)>x583)>x584);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x585 = INT16_MAX;
	static int64_t x586 = INT64_MIN;
	int8_t x587 = 0;
	volatile int8_t x588 = -1;
	static int32_t t141 = 0;

    t141 = (((x585/x586)>x587)>x588);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x589 = 1;
	uint8_t x590 = UINT8_MAX;
	uint16_t x591 = 15U;
	int16_t x592 = -1;
	int32_t t142 = -251978;

    t142 = (((x589/x590)>x591)>x592);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x593 = 1851;
	int64_t x594 = -2595026239244LL;
	int64_t x595 = INT64_MAX;
	uint8_t x596 = 3U;
	static int32_t t143 = -1138;

    t143 = (((x593/x594)>x595)>x596);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x597 = 2;
	int8_t x599 = INT8_MIN;
	int32_t t144 = -146771186;

    t144 = (((x597/x598)>x599)>x600);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x601 = -6523;
	static volatile uint64_t x602 = 1169173954276457LLU;
	volatile int64_t x603 = INT64_MIN;
	volatile int32_t t145 = -59299;

    t145 = (((x601/x602)>x603)>x604);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x605 = 16318255076LLU;
	uint64_t x606 = 7LLU;
	int8_t x607 = -1;

    t146 = (((x605/x606)>x607)>x608);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x609 = 794U;
	uint32_t x610 = 63U;
	uint8_t x611 = UINT8_MAX;
	int32_t t147 = -48467931;

    t147 = (((x609/x610)>x611)>x612);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x619 = INT32_MIN;
	int64_t x620 = 412883698LL;
	int32_t t148 = 0;

    t148 = (((x617/x618)>x619)>x620);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x621 = 7952U;
	static int32_t x622 = INT32_MIN;
	int64_t x623 = INT64_MAX;
	int8_t x624 = -1;
	volatile int32_t t149 = -57370;

    t149 = (((x621/x622)>x623)>x624);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x625 = INT16_MAX;
	volatile int8_t x626 = 18;
	int16_t x627 = INT16_MAX;
	volatile uint32_t x628 = UINT32_MAX;
	volatile int32_t t150 = -6024;

    t150 = (((x625/x626)>x627)>x628);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x629 = 147U;
	uint16_t x632 = 17254U;
	int32_t t151 = -3685;

    t151 = (((x629/x630)>x631)>x632);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x633 = INT32_MAX;
	int64_t x634 = INT64_MAX;
	static volatile uint32_t x635 = UINT32_MAX;
	uint16_t x636 = UINT16_MAX;
	int32_t t152 = 14022;

    t152 = (((x633/x634)>x635)>x636);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x637 = INT64_MIN;
	uint16_t x638 = 3693U;
	uint16_t x639 = 267U;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t153 = -11521;

    t153 = (((x637/x638)>x639)>x640);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x641 = 109;
	static uint32_t x642 = 70005023U;
	int32_t x643 = -443;
	int32_t x644 = -1;
	volatile int32_t t154 = -13162;

    t154 = (((x641/x642)>x643)>x644);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x650 = INT16_MAX;
	int32_t x651 = 0;
	uint16_t x652 = 64U;

    t155 = (((x649/x650)>x651)>x652);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x654 = INT32_MIN;
	int64_t x655 = -47267498871LL;
	int32_t t156 = 276487;

    t156 = (((x653/x654)>x655)>x656);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x657 = INT64_MAX;
	uint8_t x658 = UINT8_MAX;
	int8_t x659 = INT8_MIN;
	volatile int32_t x660 = INT32_MIN;

    t157 = (((x657/x658)>x659)>x660);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x661 = INT32_MIN;
	int16_t x662 = INT16_MIN;
	int16_t x663 = -1;
	int8_t x664 = -1;

    t158 = (((x661/x662)>x663)>x664);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x665 = INT64_MAX;
	uint8_t x666 = 12U;
	int16_t x667 = -1;
	static int64_t x668 = INT64_MIN;
	int32_t t159 = 59;

    t159 = (((x665/x666)>x667)>x668);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x669 = 732305LLU;
	int32_t x670 = -1940537;
	static int8_t x671 = INT8_MAX;
	static int32_t x672 = INT32_MIN;
	volatile int32_t t160 = 0;

    t160 = (((x669/x670)>x671)>x672);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x674 = 386671U;
	volatile int32_t t161 = 447180;

    t161 = (((x673/x674)>x675)>x676);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x677 = INT64_MIN;
	int16_t x678 = INT16_MAX;
	int32_t x679 = -1;
	volatile int32_t t162 = -578;

    t162 = (((x677/x678)>x679)>x680);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x681 = 5U;
	uint16_t x683 = 7U;
	int8_t x684 = INT8_MAX;
	static int32_t t163 = -971337659;

    t163 = (((x681/x682)>x683)>x684);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x687 = 1LL;
	int32_t x688 = 0;
	static int32_t t164 = 13716;

    t164 = (((x685/x686)>x687)>x688);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x689 = UINT64_MAX;
	int16_t x690 = INT16_MAX;
	volatile int32_t x691 = -14;

    t165 = (((x689/x690)>x691)>x692);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x693 = -1;
	static int64_t x694 = INT64_MIN;
	int16_t x695 = INT16_MAX;
	int16_t x696 = INT16_MIN;
	int32_t t166 = -5417;

    t166 = (((x693/x694)>x695)>x696);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x697 = 31403LL;
	int64_t x698 = -2LL;
	uint64_t x699 = UINT64_MAX;
	volatile uint32_t x700 = 11374U;

    t167 = (((x697/x698)>x699)>x700);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x701 = 701617668342LL;
	int8_t x702 = INT8_MIN;
	static volatile uint16_t x703 = 3U;
	static int64_t x704 = -106LL;
	int32_t t168 = 453052;

    t168 = (((x701/x702)>x703)>x704);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x705 = 17866LLU;
	volatile int32_t x706 = INT32_MIN;
	volatile int32_t x707 = INT32_MIN;
	int64_t x708 = -1737578004LL;
	volatile int32_t t169 = 44758572;

    t169 = (((x705/x706)>x707)>x708);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x709 = INT32_MAX;
	uint32_t x710 = UINT32_MAX;
	volatile int64_t x711 = INT64_MAX;
	volatile int16_t x712 = INT16_MIN;
	int32_t t170 = 230;

    t170 = (((x709/x710)>x711)>x712);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x715 = INT32_MIN;
	static int16_t x716 = INT16_MAX;
	int32_t t171 = -224;

    t171 = (((x713/x714)>x715)>x716);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x718 = INT16_MIN;
	static int8_t x719 = -7;
	volatile uint64_t x720 = 48630155171898948LLU;
	int32_t t172 = 1;

    t172 = (((x717/x718)>x719)>x720);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x721 = UINT8_MAX;
	uint32_t x722 = 827U;

    t173 = (((x721/x722)>x723)>x724);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x725 = INT8_MIN;
	int64_t x727 = -7LL;
	int16_t x728 = INT16_MAX;

    t174 = (((x725/x726)>x727)>x728);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x729 = 2050336U;
	uint16_t x730 = 52U;
	static int32_t x731 = -1;
	int32_t t175 = 352897549;

    t175 = (((x729/x730)>x731)>x732);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x733 = 0U;
	uint8_t x734 = 13U;
	volatile uint32_t x735 = 133U;
	static volatile uint64_t x736 = 1150705772999739305LLU;
	static volatile int32_t t176 = 0;

    t176 = (((x733/x734)>x735)>x736);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x737 = INT8_MIN;
	volatile int64_t x738 = INT64_MAX;
	int16_t x739 = -203;
	static int64_t x740 = INT64_MIN;
	int32_t t177 = 0;

    t177 = (((x737/x738)>x739)>x740);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x742 = INT8_MAX;
	static volatile int32_t t178 = -12;

    t178 = (((x741/x742)>x743)>x744);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x745 = INT16_MIN;
	volatile int32_t x746 = INT32_MIN;
	int8_t x747 = INT8_MIN;
	static volatile uint64_t x748 = 862LLU;
	static int32_t t179 = 5;

    t179 = (((x745/x746)>x747)>x748);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x750 = -3;
	static uint32_t x751 = 4515014U;
	static int8_t x752 = INT8_MIN;
	int32_t t180 = 7;

    t180 = (((x749/x750)>x751)>x752);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x753 = INT8_MIN;
	static uint64_t x754 = UINT64_MAX;
	int64_t x755 = -14370290228476051LL;
	uint32_t x756 = 61527061U;
	volatile int32_t t181 = -29;

    t181 = (((x753/x754)>x755)>x756);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x757 = 1LL;
	int64_t x759 = INT64_MIN;
	volatile uint8_t x760 = 10U;
	int32_t t182 = 1255;

    t182 = (((x757/x758)>x759)>x760);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x761 = 4094477U;
	int8_t x762 = INT8_MIN;
	int64_t x764 = -1LL;
	volatile int32_t t183 = -1306;

    t183 = (((x761/x762)>x763)>x764);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x765 = INT16_MAX;
	uint32_t x766 = 19389406U;
	uint64_t x767 = 477742446746LLU;
	int16_t x768 = INT16_MIN;
	static int32_t t184 = -11;

    t184 = (((x765/x766)>x767)>x768);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x769 = -1;
	volatile int32_t x770 = INT32_MIN;
	static int16_t x771 = INT16_MIN;
	int16_t x772 = -1;
	static volatile int32_t t185 = -589569;

    t185 = (((x769/x770)>x771)>x772);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x773 = INT16_MIN;
	int32_t x775 = INT32_MAX;
	volatile int32_t t186 = 578;

    t186 = (((x773/x774)>x775)>x776);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x777 = 4050467U;
	uint16_t x778 = 1535U;
	int16_t x779 = -1;
	int32_t x780 = INT32_MIN;
	int32_t t187 = 69884;

    t187 = (((x777/x778)>x779)>x780);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x783 = INT64_MIN;
	uint32_t x784 = 371179898U;
	volatile int32_t t188 = -860551;

    t188 = (((x781/x782)>x783)>x784);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x785 = INT8_MIN;
	int8_t x786 = INT8_MAX;
	static volatile uint64_t x788 = UINT64_MAX;
	int32_t t189 = 4;

    t189 = (((x785/x786)>x787)>x788);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x790 = 33U;
	static int64_t x791 = 447494821027LL;
	int8_t x792 = INT8_MAX;
	static volatile int32_t t190 = 1;

    t190 = (((x789/x790)>x791)>x792);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = -1;
	int16_t x794 = INT16_MIN;
	int32_t t191 = 46768926;

    t191 = (((x793/x794)>x795)>x796);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x797 = 4U;
	volatile uint32_t x798 = 1969U;
	static int8_t x799 = -1;
	int16_t x800 = 7090;
	volatile int32_t t192 = 1776389;

    t192 = (((x797/x798)>x799)>x800);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x801 = 20163522U;
	static volatile uint8_t x803 = UINT8_MAX;
	uint8_t x804 = 13U;

    t193 = (((x801/x802)>x803)>x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x805 = UINT16_MAX;
	int32_t x806 = INT32_MAX;
	int64_t x807 = INT64_MAX;
	int32_t x808 = -1;
	int32_t t194 = -446;

    t194 = (((x805/x806)>x807)>x808);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x809 = INT32_MIN;
	volatile uint16_t x811 = 2838U;
	static uint32_t x812 = 1243770206U;
	int32_t t195 = 30078232;

    t195 = (((x809/x810)>x811)>x812);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x813 = INT32_MIN;
	volatile uint16_t x815 = 7U;
	volatile uint64_t x816 = UINT64_MAX;
	int32_t t196 = 226424680;

    t196 = (((x813/x814)>x815)>x816);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x817 = 1;
	uint32_t x818 = UINT32_MAX;
	uint8_t x819 = 7U;
	volatile int32_t t197 = -1118949;

    t197 = (((x817/x818)>x819)>x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x821 = 457LL;
	volatile int8_t x822 = INT8_MIN;
	int8_t x823 = -61;
	volatile int8_t x824 = INT8_MIN;
	volatile int32_t t198 = -3035293;

    t198 = (((x821/x822)>x823)>x824);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x825 = 574;
	static int16_t x826 = -1;
	int16_t x827 = -8671;
	static int32_t t199 = -18;

    t199 = (((x825/x826)>x827)>x828);

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

