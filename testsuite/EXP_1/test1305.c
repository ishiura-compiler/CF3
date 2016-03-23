
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

int8_t x2 = -1;
int64_t x11 = INT64_MAX;
int64_t x12 = INT64_MIN;
uint16_t x15 = 10493U;
int64_t x16 = 1676360LL;
uint64_t x17 = 64750917862099896LLU;
volatile int32_t x21 = 40;
static int8_t x25 = INT8_MIN;
volatile int16_t x27 = INT16_MIN;
int64_t x29 = INT64_MIN;
static int16_t x31 = INT16_MIN;
int16_t x34 = INT16_MIN;
int8_t x40 = -50;
int32_t t9 = 928689717;
uint64_t x48 = 8564LLU;
volatile uint64_t t11 = 1547074566792LLU;
int16_t x49 = -19;
volatile int32_t x55 = -2;
static uint16_t x61 = 19487U;
static int32_t x63 = INT32_MIN;
int32_t x66 = -126769931;
uint64_t t17 = 1LLU;
static uint16_t x74 = UINT16_MAX;
int16_t x75 = INT16_MAX;
int32_t t19 = 1;
int64_t x91 = 44885319311532803LL;
static volatile int32_t x92 = 4;
int64_t t23 = -1LL;
static uint32_t x100 = 263372301U;
int8_t x102 = INT8_MIN;
volatile uint16_t x104 = 34U;
int32_t x109 = INT32_MAX;
int32_t x114 = INT32_MIN;
volatile uint8_t x115 = UINT8_MAX;
uint16_t x120 = 1U;
static int8_t x126 = 32;
int64_t x127 = INT64_MAX;
static volatile int32_t t31 = -499008;
int8_t x130 = INT8_MIN;
uint16_t x133 = UINT16_MAX;
int8_t x134 = INT8_MIN;
volatile uint16_t x136 = 22032U;
volatile int8_t x140 = -1;
int8_t x142 = INT8_MIN;
volatile int64_t x144 = INT64_MIN;
volatile int32_t t36 = 2347522;
static uint64_t x149 = 23720LLU;
int8_t x150 = INT8_MIN;
static uint32_t x151 = 3852704U;
static int8_t x153 = INT8_MIN;
volatile uint64_t t38 = 16033LLU;
static int8_t x166 = INT8_MIN;
static int32_t t42 = 408;
static int8_t x174 = INT8_MIN;
int16_t x179 = -1;
volatile uint64_t x182 = 6048332354353314LLU;
volatile int32_t t45 = 1037576;
static int64_t x186 = INT64_MIN;
volatile int16_t x190 = 11;
volatile int64_t x191 = -1LL;
int8_t x208 = 0;
volatile int32_t x210 = INT32_MIN;
int64_t x217 = 18221772LL;
uint64_t x218 = 1918927770245695743LLU;
int32_t x221 = INT32_MIN;
volatile int32_t t57 = -1085;
int8_t x239 = INT8_MIN;
int16_t x240 = -96;
uint32_t x246 = 13417U;
uint32_t x249 = UINT32_MAX;
int16_t x250 = -9001;
uint32_t x253 = 99U;
static volatile int32_t t64 = -460469;
int32_t x265 = INT32_MAX;
int8_t x277 = -1;
static volatile uint8_t x278 = 126U;
uint64_t x279 = 3142LLU;
uint8_t x280 = UINT8_MAX;
volatile int32_t t69 = -761883;
int16_t x281 = INT16_MIN;
uint64_t x282 = 24LLU;
volatile uint64_t x290 = 55069LLU;
volatile int32_t x296 = INT32_MIN;
uint64_t x299 = 33LLU;
uint64_t x303 = 17LLU;
static volatile int64_t x310 = INT64_MIN;
volatile int8_t x313 = INT8_MAX;
int16_t x314 = -1;
static int64_t x316 = 2126786110414187LL;
int32_t x319 = -3;
int64_t x323 = -734020826441054LL;
uint64_t t80 = 248908979LLU;
uint64_t x332 = 43460518243306LLU;
volatile uint64_t t82 = 3806824LLU;
volatile int32_t x344 = INT32_MAX;
uint8_t x348 = 3U;
volatile int64_t t87 = -6351LL;
static int8_t x361 = INT8_MIN;
static int16_t x372 = -1;
volatile int8_t x376 = -1;
static int32_t x378 = -1;
int64_t x380 = 38933LL;
volatile int64_t t94 = -12LL;
static uint64_t x381 = 5LLU;
uint32_t x383 = UINT32_MAX;
int64_t x384 = 86855869355LL;
int64_t t95 = 62857627080239LL;
static int16_t x392 = INT16_MAX;
static volatile int32_t t97 = 8050;
int32_t x395 = INT32_MIN;
static volatile uint8_t x398 = 7U;
static int32_t x414 = INT32_MIN;
int16_t x417 = 31;
static int8_t x424 = INT8_MIN;
int8_t x428 = 9;
uint32_t x430 = 242419U;
int8_t x434 = 3;
uint16_t x446 = UINT16_MAX;
int32_t x449 = INT32_MAX;
int32_t x452 = 41959743;
volatile uint8_t x459 = 29U;
volatile int64_t t114 = 929815895337LL;
uint16_t x466 = UINT16_MAX;
int32_t t116 = INT32_MAX;
uint64_t x481 = 1100471625LLU;
uint32_t x484 = 1996927998U;
int8_t x485 = -1;
static int64_t t122 = -1386837LL;
uint64_t x495 = 644798238LLU;
uint32_t t123 = UINT32_MAX;
volatile int64_t t127 = -1999343LL;
static int16_t x517 = INT16_MIN;
static int8_t x527 = INT8_MIN;
volatile uint16_t x545 = UINT16_MAX;
static uint16_t x548 = UINT16_MAX;
int8_t x553 = INT8_MIN;
static uint16_t x555 = UINT16_MAX;
int32_t x557 = INT32_MAX;
int32_t x560 = INT32_MAX;
volatile int64_t t143 = INT64_MIN;
uint16_t x578 = 396U;
uint16_t x585 = 43U;
static volatile uint16_t x589 = UINT16_MAX;
static int32_t x591 = INT32_MAX;
static int8_t x594 = -2;
uint16_t x596 = 8U;
volatile int32_t t150 = -3270587;
int8_t x610 = -1;
volatile int64_t t152 = -58068567649234LL;
int16_t x613 = -1777;
int8_t x623 = INT8_MAX;
static int16_t x624 = INT16_MIN;
static volatile int8_t x625 = -1;
static int8_t x629 = -6;
int32_t x631 = 401816;
int32_t x633 = -1;
int32_t x644 = -1;
static int8_t x645 = 0;
int32_t x647 = -62195291;
uint32_t x648 = 108U;
volatile uint32_t t161 = 145653454U;
volatile int64_t x649 = -2LL;
int64_t x659 = INT64_MIN;
static int8_t x661 = INT8_MIN;
volatile int16_t x665 = -177;
int32_t x666 = -1;
int32_t x668 = 5202;
int16_t x670 = -1;
static int64_t x671 = -3197099577735131096LL;
int16_t x676 = INT16_MIN;
int16_t x683 = -1;
volatile int32_t t170 = -3912;
int8_t x688 = INT8_MIN;
uint8_t x692 = 3U;
static uint32_t x696 = UINT32_MAX;
uint32_t x697 = 216393396U;
int8_t x699 = 1;
int32_t x700 = INT32_MIN;
int8_t x709 = -1;
int32_t x714 = INT32_MAX;
uint64_t x717 = 14604173389LLU;
static volatile uint16_t x718 = UINT16_MAX;
int8_t x719 = -1;
uint16_t x725 = 206U;
int16_t x727 = INT16_MAX;
uint32_t t181 = 11U;
static int64_t x738 = -28622056LL;
static int16_t x739 = INT16_MAX;
volatile int32_t t184 = -305069;
int8_t x743 = INT8_MIN;
int32_t x746 = 11543;
static int64_t x750 = -1LL;
static int32_t x751 = INT32_MAX;
static int32_t t188 = -13;
int32_t x762 = INT32_MAX;
int8_t x765 = INT8_MAX;
uint8_t x769 = 0U;
static int64_t x775 = -1LL;
static int16_t x776 = 2;
volatile uint16_t x783 = UINT16_MAX;
int8_t x784 = -1;
static volatile int64_t t196 = INT64_MIN;
volatile uint8_t x789 = 10U;
int8_t x792 = -1;
static uint64_t x799 = 366600LLU;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	uint16_t x3 = 1914U;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -108574466;

    t0 = (((x1!=x2)<=x3)*x4);

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	static volatile uint8_t x6 = UINT8_MAX;
	static uint32_t x7 = 93444014U;
	uint32_t x8 = 2U;
	uint32_t t1 = 7U;

    t1 = (((x5!=x6)<=x7)*x8);

    if (t1 != 2U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 19U;
	volatile int64_t t2 = INT64_MIN;

    t2 = (((x9!=x10)<=x11)*x12);

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 1;
	int64_t x14 = INT64_MIN;
	int64_t t3 = -1261732019392876061LL;

    t3 = (((x13!=x14)<=x15)*x16);

    if (t3 != 1676360LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = 1LLU;
	volatile uint64_t t4 = 1068046374803557LLU;

    t4 = (((x17!=x18)<=x19)*x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 108U;
	volatile int32_t x23 = -2774;
	static int8_t x24 = -24;
	int32_t t5 = 3244;

    t5 = (((x21!=x22)<=x23)*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x26 = INT32_MIN;
	volatile uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t6 = 10LLU;

    t6 = (((x25!=x26)<=x27)*x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x30 = UINT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 30747;

    t7 = (((x29!=x30)<=x31)*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	int32_t x36 = 1118;
	int32_t t8 = -46;

    t8 = (((x33!=x34)<=x35)*x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -816;
	static int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;

    t9 = (((x37!=x38)<=x39)*x40);

    if (t9 != -50) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x41 = -1LL;
	int8_t x42 = INT8_MIN;
	uint8_t x43 = 3U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = INT32_MIN;

    t10 = (((x41!=x42)<=x43)*x44);

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 11;
	static volatile int8_t x46 = INT8_MAX;
	int8_t x47 = INT8_MIN;

    t11 = (((x45!=x46)<=x47)*x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 63890916400LLU;
	uint8_t x51 = UINT8_MAX;
	static int8_t x52 = 1;
	int32_t t12 = -81;

    t12 = (((x49!=x50)<=x51)*x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 8371187552056LLU;
	int32_t x54 = 193125;
	volatile int64_t x56 = INT64_MAX;
	static volatile int64_t t13 = 0LL;

    t13 = (((x53!=x54)<=x55)*x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	uint16_t x58 = 3637U;
	volatile int8_t x59 = INT8_MAX;
	uint32_t x60 = 644957863U;
	volatile uint32_t t14 = 349609U;

    t14 = (((x57!=x58)<=x59)*x60);

    if (t14 != 644957863U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = 7106U;
	static int64_t x64 = -1LL;
	volatile int64_t t15 = 1036945756096LL;

    t15 = (((x61!=x62)<=x63)*x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MAX;
	int64_t t16 = INT64_MAX;

    t16 = (((x65!=x66)<=x67)*x68);

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	uint32_t x70 = 1U;
	static int16_t x71 = INT16_MAX;
	uint64_t x72 = 266568742781777LLU;

    t17 = (((x69!=x70)<=x71)*x72);

    if (t17 != 266568742781777LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x73 = -23;
	static volatile int64_t x76 = -9850324810055148LL;
	int64_t t18 = -8643334235LL;

    t18 = (((x73!=x74)<=x75)*x76);

    if (t18 != -9850324810055148LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	uint32_t x78 = 233124460U;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MIN;

    t19 = (((x77!=x78)<=x79)*x80);

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = 1LLU;
	int16_t x82 = -1;
	int8_t x83 = INT8_MAX;
	uint8_t x84 = 4U;
	volatile int32_t t20 = 2;

    t20 = (((x81!=x82)<=x83)*x84);

    if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 878;
	int64_t x86 = -120790LL;
	volatile int8_t x87 = INT8_MIN;
	int16_t x88 = -1;
	static volatile int32_t t21 = -868624;

    t21 = (((x85!=x86)<=x87)*x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 2;
	uint8_t x90 = 63U;
	volatile int32_t t22 = 4879;

    t22 = (((x89!=x90)<=x91)*x92);

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	int64_t x94 = 13331LL;
	volatile int8_t x95 = -1;
	int64_t x96 = INT64_MAX;

    t23 = (((x93!=x94)<=x95)*x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = -5539454;
	int32_t x98 = -973779;
	int16_t x99 = INT16_MIN;
	volatile uint32_t t24 = 17637367U;

    t24 = (((x97!=x98)<=x99)*x100);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	static int64_t x103 = -1LL;
	int32_t t25 = 16467;

    t25 = (((x101!=x102)<=x103)*x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 1U;
	static uint8_t x106 = 1U;
	static int32_t x107 = INT32_MAX;
	static int32_t x108 = INT32_MIN;
	int32_t t26 = INT32_MIN;

    t26 = (((x105!=x106)<=x107)*x108);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = 9051759681932425217LLU;
	int16_t x111 = -1;
	int64_t x112 = INT64_MIN;
	int64_t t27 = 17119LL;

    t27 = (((x109!=x110)<=x111)*x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 420353485808LL;
	static int64_t x116 = -31770LL;
	static volatile int64_t t28 = 134266895408LL;

    t28 = (((x113!=x114)<=x115)*x116);

    if (t28 != -31770LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x117 = INT32_MIN;
	uint32_t x118 = UINT32_MAX;
	volatile int8_t x119 = INT8_MIN;
	int32_t t29 = -242870;

    t29 = (((x117!=x118)<=x119)*x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 0U;
	int64_t x122 = -31938776020348LL;
	int32_t x123 = -1;
	int64_t x124 = 160153613745LL;
	int64_t t30 = 1825054967344LL;

    t30 = (((x121!=x122)<=x123)*x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x125 = UINT8_MAX;
	int16_t x128 = INT16_MIN;

    t31 = (((x125!=x126)<=x127)*x128);

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int64_t x131 = INT64_MAX;
	static volatile uint8_t x132 = 1U;
	volatile int32_t t32 = 46838014;

    t32 = (((x129!=x130)<=x131)*x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x135 = INT8_MIN;
	volatile int32_t t33 = 1015;

    t33 = (((x133!=x134)<=x135)*x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	uint16_t x138 = 443U;
	uint32_t x139 = 24U;
	volatile int32_t t34 = 0;

    t34 = (((x137!=x138)<=x139)*x140);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 1;
	uint16_t x143 = 0U;
	int64_t t35 = 1LL;

    t35 = (((x141!=x142)<=x143)*x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = INT64_MIN;
	int64_t x146 = 2881282116517LL;
	int64_t x147 = INT64_MAX;
	volatile int8_t x148 = 3;

    t36 = (((x145!=x146)<=x147)*x148);

    if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x152 = 15U;
	volatile int32_t t37 = -205000;

    t37 = (((x149!=x150)<=x151)*x152);

    if (t37 != 15) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x154 = -1;
	volatile int16_t x155 = INT16_MIN;
	static uint64_t x156 = 388998122188970772LLU;

    t38 = (((x153!=x154)<=x155)*x156);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	int64_t x158 = INT64_MIN;
	static uint32_t x159 = 24U;
	uint16_t x160 = 642U;
	int32_t t39 = 1;

    t39 = (((x157!=x158)<=x159)*x160);

    if (t39 != 642) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = INT32_MAX;
	static int32_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -21;
	volatile int32_t t40 = -8304569;

    t40 = (((x161!=x162)<=x163)*x164);

    if (t40 != -21) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = -1;
	static int32_t x167 = 2;
	int64_t x168 = INT64_MIN;
	static int64_t t41 = INT64_MIN;

    t41 = (((x165!=x166)<=x167)*x168);

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 10;
	static int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	static int16_t x172 = INT16_MIN;

    t42 = (((x169!=x170)<=x171)*x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 0;

    t43 = (((x173!=x174)<=x175)*x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = 25;
	int64_t x178 = INT64_MAX;
	int64_t x180 = 560762LL;
	int64_t t44 = 140142274LL;

    t44 = (((x177!=x178)<=x179)*x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 8U;
	int16_t x183 = INT16_MIN;
	volatile uint8_t x184 = 17U;

    t45 = (((x181!=x182)<=x183)*x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 22U;
	int16_t x187 = -1;
	int64_t x188 = -11100LL;
	static int64_t t46 = -59788LL;

    t46 = (((x185!=x186)<=x187)*x188);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	uint32_t x192 = UINT32_MAX;
	static volatile uint32_t t47 = 4970U;

    t47 = (((x189!=x190)<=x191)*x192);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = -28167;
	uint32_t x194 = 3U;
	int64_t x195 = -74LL;
	int32_t x196 = 1;
	int32_t t48 = -24513753;

    t48 = (((x193!=x194)<=x195)*x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 5U;
	int64_t x198 = INT64_MIN;
	uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 70931943U;
	volatile uint32_t t49 = 6U;

    t49 = (((x197!=x198)<=x199)*x200);

    if (t49 != 70931943U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 1U;
	static int16_t x202 = INT16_MAX;
	static volatile int16_t x203 = 329;
	static uint64_t x204 = 20589537121LLU;
	uint64_t t50 = 1LLU;

    t50 = (((x201!=x202)<=x203)*x204);

    if (t50 != 20589537121LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x205 = 32737U;
	volatile uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 14U;
	volatile int32_t t51 = 809239104;

    t51 = (((x205!=x206)<=x207)*x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x209 = INT16_MIN;
	int8_t x211 = -58;
	static uint32_t x212 = UINT32_MAX;
	uint32_t t52 = 315734U;

    t52 = (((x209!=x210)<=x211)*x212);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 615U;
	int8_t x214 = INT8_MIN;
	static int16_t x215 = INT16_MAX;
	volatile int32_t x216 = -14366;
	volatile int32_t t53 = -7321;

    t53 = (((x213!=x214)<=x215)*x216);

    if (t53 != -14366) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x219 = 1U;
	uint64_t x220 = UINT64_MAX;
	uint64_t t54 = UINT64_MAX;

    t54 = (((x217!=x218)<=x219)*x220);

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x222 = INT16_MAX;
	uint8_t x223 = 1U;
	uint8_t x224 = 9U;
	int32_t t55 = 1;

    t55 = (((x221!=x222)<=x223)*x224);

    if (t55 != 9) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -1;
	uint32_t x226 = 90U;
	int64_t x227 = -1LL;
	volatile int16_t x228 = INT16_MAX;
	int32_t t56 = 3641894;

    t56 = (((x225!=x226)<=x227)*x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x229 = 14LLU;
	int64_t x230 = -1LL;
	int32_t x231 = 280;
	int32_t x232 = 18;

    t57 = (((x229!=x230)<=x231)*x232);

    if (t57 != 18) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = INT8_MIN;
	uint32_t x234 = 987U;
	int8_t x235 = -1;
	int32_t x236 = -1;
	int32_t t58 = 497;

    t58 = (((x233!=x234)<=x235)*x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 68062U;
	uint16_t x238 = 30U;
	int32_t t59 = 221594275;

    t59 = (((x237!=x238)<=x239)*x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 99U;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = INT64_MAX;
	volatile int8_t x244 = -1;
	int32_t t60 = -133282;

    t60 = (((x241!=x242)<=x243)*x244);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = 48645;
	static volatile int8_t x247 = 1;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -223721;

    t61 = (((x245!=x246)<=x247)*x248);

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x251 = -208279LL;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t62 = 7355906;

    t62 = (((x249!=x250)<=x251)*x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x254 = -646;
	int8_t x255 = 1;
	int32_t x256 = -1;
	volatile int32_t t63 = 9867;

    t63 = (((x253!=x254)<=x255)*x256);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	static uint16_t x258 = UINT16_MAX;
	static int16_t x259 = INT16_MIN;
	volatile int16_t x260 = 27;

    t64 = (((x257!=x258)<=x259)*x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 31U;
	volatile uint32_t x262 = 16U;
	static volatile int64_t x263 = -1LL;
	static int16_t x264 = INT16_MIN;
	static volatile int32_t t65 = 28744047;

    t65 = (((x261!=x262)<=x263)*x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x266 = UINT64_MAX;
	uint32_t x267 = UINT32_MAX;
	static volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 240430634;

    t66 = (((x265!=x266)<=x267)*x268);

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	volatile int16_t x270 = -10;
	int16_t x271 = -1;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -415049;

    t67 = (((x269!=x270)<=x271)*x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -2861LL;
	int16_t x274 = INT16_MAX;
	int16_t x275 = 2378;
	int32_t x276 = INT32_MAX;
	int32_t t68 = INT32_MAX;

    t68 = (((x273!=x274)<=x275)*x276);

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    

    t69 = (((x277!=x278)<=x279)*x280);

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x283 = INT16_MIN;
	uint32_t x284 = UINT32_MAX;
	static volatile uint32_t t70 = 1322829U;

    t70 = (((x281!=x282)<=x283)*x284);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MAX;
	static uint32_t x286 = 728473U;
	int32_t x287 = INT32_MAX;
	int16_t x288 = -1910;
	static int32_t t71 = -762915;

    t71 = (((x285!=x286)<=x287)*x288);

    if (t71 != -1910) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MAX;
	volatile uint16_t x291 = 230U;
	int64_t x292 = 2083981253LL;
	volatile int64_t t72 = 31479LL;

    t72 = (((x289!=x290)<=x291)*x292);

    if (t72 != 2083981253LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 31U;
	uint8_t x294 = UINT8_MAX;
	uint8_t x295 = 0U;
	int32_t t73 = 292330;

    t73 = (((x293!=x294)<=x295)*x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = 232528238;
	int16_t x298 = 9;
	int32_t x300 = -2;
	int32_t t74 = 4;

    t74 = (((x297!=x298)<=x299)*x300);

    if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	uint32_t x302 = 0U;
	static int64_t x304 = INT64_MIN;
	int64_t t75 = INT64_MIN;

    t75 = (((x301!=x302)<=x303)*x304);

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = -1;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = 4875369LLU;
	int64_t x308 = 32665LL;
	int64_t t76 = -819741LL;

    t76 = (((x305!=x306)<=x307)*x308);

    if (t76 != 32665LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	int32_t x311 = -1;
	static uint64_t x312 = 10453798453352LLU;
	uint64_t t77 = 5816504LLU;

    t77 = (((x309!=x310)<=x311)*x312);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x315 = INT16_MIN;
	static volatile int64_t t78 = 2311591724584889LL;

    t78 = (((x313!=x314)<=x315)*x316);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MAX;
	int32_t x318 = INT32_MIN;
	static int32_t x320 = -38;
	int32_t t79 = -136;

    t79 = (((x317!=x318)<=x319)*x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	int16_t x322 = 12;
	volatile uint64_t x324 = UINT64_MAX;

    t80 = (((x321!=x322)<=x323)*x324);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = INT16_MAX;
	int8_t x326 = -1;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 34672;

    t81 = (((x325!=x326)<=x327)*x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 10;
	volatile uint16_t x330 = UINT16_MAX;
	static int32_t x331 = 79;

    t82 = (((x329!=x330)<=x331)*x332);

    if (t82 != 43460518243306LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -1;
	static int32_t x334 = INT32_MAX;
	uint64_t x335 = UINT64_MAX;
	volatile uint32_t x336 = 229711568U;
	uint32_t t83 = 1282742U;

    t83 = (((x333!=x334)<=x335)*x336);

    if (t83 != 229711568U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 965U;
	int16_t x339 = INT16_MIN;
	static int64_t x340 = INT64_MAX;
	int64_t t84 = -55LL;

    t84 = (((x337!=x338)<=x339)*x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 3200;
	int16_t x342 = INT16_MAX;
	static uint16_t x343 = 347U;
	volatile int32_t t85 = INT32_MAX;

    t85 = (((x341!=x342)<=x343)*x344);

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = 713384476188534997LL;
	uint64_t x346 = 748076431732171LLU;
	uint32_t x347 = 205478226U;
	int32_t t86 = 14;

    t86 = (((x345!=x346)<=x347)*x348);

    if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	volatile int32_t x350 = INT32_MIN;
	volatile int32_t x351 = INT32_MIN;
	int64_t x352 = 13591654488106LL;

    t87 = (((x349!=x350)<=x351)*x352);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MAX;
	static int8_t x354 = -1;
	volatile int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = 503504832589295LLU;
	volatile uint64_t t88 = 37LLU;

    t88 = (((x353!=x354)<=x355)*x356);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = UINT32_MAX;
	static int8_t x358 = INT8_MIN;
	int64_t x359 = 1374064947578LL;
	int64_t x360 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

    t89 = (((x357!=x358)<=x359)*x360);

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = INT64_MIN;
	uint16_t x363 = UINT16_MAX;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t90 = INT32_MIN;

    t90 = (((x361!=x362)<=x363)*x364);

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MIN;
	static volatile int64_t x367 = 18990648569058775LL;
	int16_t x368 = INT16_MIN;
	int32_t t91 = 137113;

    t91 = (((x365!=x366)<=x367)*x368);

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = INT8_MAX;
	int8_t x370 = -1;
	uint32_t x371 = UINT32_MAX;
	int32_t t92 = -148234382;

    t92 = (((x369!=x370)<=x371)*x372);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	int8_t x374 = 0;
	static uint64_t x375 = 7923473536842080LLU;
	int32_t t93 = 0;

    t93 = (((x373!=x374)<=x375)*x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 99U;
	volatile uint8_t x379 = 0U;

    t94 = (((x377!=x378)<=x379)*x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x382 = -1;

    t95 = (((x381!=x382)<=x383)*x384);

    if (t95 != 86855869355LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = INT8_MIN;
	static int32_t x386 = -31763683;
	int8_t x387 = 52;
	volatile int8_t x388 = INT8_MIN;
	static volatile int32_t t96 = 184;

    t96 = (((x385!=x386)<=x387)*x388);

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 60466800928219LL;
	int16_t x390 = INT16_MAX;
	static uint32_t x391 = UINT32_MAX;

    t97 = (((x389!=x390)<=x391)*x392);

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x393 = 751659366U;
	volatile uint8_t x394 = 2U;
	uint16_t x396 = 3084U;
	int32_t t98 = -53046870;

    t98 = (((x393!=x394)<=x395)*x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = 2LL;
	int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t99 = 28;

    t99 = (((x397!=x398)<=x399)*x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = -114533;
	int16_t x402 = INT16_MIN;
	uint8_t x403 = 87U;
	static int8_t x404 = -1;
	static int32_t t100 = -6;

    t100 = (((x401!=x402)<=x403)*x404);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 9U;
	static uint32_t x406 = UINT32_MAX;
	static uint16_t x407 = 0U;
	int8_t x408 = -1;
	volatile int32_t t101 = 535570616;

    t101 = (((x405!=x406)<=x407)*x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	static uint64_t x410 = UINT64_MAX;
	uint64_t x411 = 23LLU;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t102 = UINT32_MAX;

    t102 = (((x409!=x410)<=x411)*x412);

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = 0;
	uint64_t x415 = 245349737042072LLU;
	int8_t x416 = 60;
	volatile int32_t t103 = 60075304;

    t103 = (((x413!=x414)<=x415)*x416);

    if (t103 != 60) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = INT16_MIN;
	int64_t x419 = -1LL;
	int16_t x420 = INT16_MIN;
	static volatile int32_t t104 = -1784;

    t104 = (((x417!=x418)<=x419)*x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = INT64_MIN;
	uint8_t x422 = UINT8_MAX;
	int16_t x423 = INT16_MIN;
	volatile int32_t t105 = -2048060;

    t105 = (((x421!=x422)<=x423)*x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	int16_t x426 = -1;
	uint16_t x427 = UINT16_MAX;
	int32_t t106 = -8022;

    t106 = (((x425!=x426)<=x427)*x428);

    if (t106 != 9) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x429 = UINT16_MAX;
	static uint8_t x431 = UINT8_MAX;
	int64_t x432 = INT64_MIN;
	static volatile int64_t t107 = INT64_MIN;

    t107 = (((x429!=x430)<=x431)*x432);

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 16338U;
	int32_t x435 = INT32_MIN;
	int8_t x436 = INT8_MIN;
	volatile int32_t t108 = 15;

    t108 = (((x433!=x434)<=x435)*x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = 1;
	int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	uint64_t x440 = 28475488LLU;
	uint64_t t109 = 314594839027LLU;

    t109 = (((x437!=x438)<=x439)*x440);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x441 = INT32_MIN;
	volatile uint64_t x442 = UINT64_MAX;
	volatile int8_t x443 = -4;
	int32_t x444 = INT32_MIN;
	int32_t t110 = 1;

    t110 = (((x441!=x442)<=x443)*x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 217706299U;
	uint16_t x447 = 6U;
	volatile int64_t x448 = INT64_MIN;
	static volatile int64_t t111 = INT64_MIN;

    t111 = (((x445!=x446)<=x447)*x448);

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x450 = INT64_MIN;
	static volatile int8_t x451 = INT8_MIN;
	volatile int32_t t112 = 260;

    t112 = (((x449!=x450)<=x451)*x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x453 = 32U;
	static int16_t x454 = INT16_MIN;
	static volatile int32_t x455 = 0;
	volatile uint16_t x456 = UINT16_MAX;
	int32_t t113 = -1391600;

    t113 = (((x453!=x454)<=x455)*x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint64_t x457 = 1506297389479028913LLU;
	int64_t x458 = 136379666797520293LL;
	int64_t x460 = -33989LL;

    t114 = (((x457!=x458)<=x459)*x460);

    if (t114 != -33989LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MIN;
	int64_t x462 = INT64_MIN;
	static volatile uint32_t x463 = 32U;
	int64_t x464 = -1LL;
	volatile int64_t t115 = -110LL;

    t115 = (((x461!=x462)<=x463)*x464);

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 61U;
	uint8_t x467 = UINT8_MAX;
	static int32_t x468 = INT32_MAX;

    t116 = (((x465!=x466)<=x467)*x468);

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 11942740U;
	static int64_t x470 = -1LL;
	uint64_t x471 = 315335386161LLU;
	int64_t x472 = -1LL;
	volatile int64_t t117 = -4LL;

    t117 = (((x469!=x470)<=x471)*x472);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 15U;
	static int64_t x474 = -1LL;
	int32_t x475 = -3;
	volatile uint32_t x476 = 1849899U;
	static volatile uint32_t t118 = 44553U;

    t118 = (((x473!=x474)<=x475)*x476);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x477 = UINT16_MAX;
	volatile int8_t x478 = 1;
	int64_t x479 = -36LL;
	int64_t x480 = INT64_MIN;
	volatile int64_t t119 = -7455378230596708LL;

    t119 = (((x477!=x478)<=x479)*x480);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x482 = 10076U;
	int32_t x483 = INT32_MAX;
	volatile uint32_t t120 = 25U;

    t120 = (((x481!=x482)<=x483)*x484);

    if (t120 != 1996927998U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x486 = INT64_MIN;
	uint8_t x487 = 20U;
	static int64_t x488 = INT64_MAX;
	int64_t t121 = INT64_MAX;

    t121 = (((x485!=x486)<=x487)*x488);

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 95831994LL;
	volatile int32_t x490 = -99949681;
	uint64_t x491 = UINT64_MAX;
	int64_t x492 = -1LL;

    t122 = (((x489!=x490)<=x491)*x492);

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 63037113822569468LLU;
	volatile int64_t x494 = 6429156082LL;
	static uint32_t x496 = UINT32_MAX;

    t123 = (((x493!=x494)<=x495)*x496);

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	static volatile int8_t x498 = INT8_MIN;
	volatile uint16_t x499 = 218U;
	static int64_t x500 = -1857862592893048LL;
	int64_t t124 = 0LL;

    t124 = (((x497!=x498)<=x499)*x500);

    if (t124 != -1857862592893048LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = INT64_MIN;
	volatile int16_t x502 = INT16_MIN;
	int8_t x503 = -12;
	int32_t x504 = INT32_MAX;
	static int32_t t125 = 0;

    t125 = (((x501!=x502)<=x503)*x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 12332U;
	volatile int64_t x506 = -1LL;
	int16_t x507 = INT16_MIN;
	static volatile int8_t x508 = INT8_MIN;
	volatile int32_t t126 = -2919707;

    t126 = (((x505!=x506)<=x507)*x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = -16921103583505LL;
	uint64_t x510 = 12577432LLU;
	static uint16_t x511 = 5747U;
	volatile int64_t x512 = -17295338760LL;

    t127 = (((x509!=x510)<=x511)*x512);

    if (t127 != -17295338760LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = 62;
	int16_t x514 = INT16_MIN;
	volatile int16_t x515 = INT16_MIN;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t128 = 56972853;

    t128 = (((x513!=x514)<=x515)*x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x518 = 225851739LLU;
	volatile int8_t x519 = -1;
	int16_t x520 = INT16_MAX;
	volatile int32_t t129 = 806;

    t129 = (((x517!=x518)<=x519)*x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x521 = INT64_MAX;
	int8_t x522 = 42;
	static int32_t x523 = -1;
	uint8_t x524 = UINT8_MAX;
	static int32_t t130 = 1;

    t130 = (((x521!=x522)<=x523)*x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	int16_t x526 = INT16_MAX;
	static volatile uint32_t x528 = 15778U;
	volatile uint32_t t131 = 66960310U;

    t131 = (((x525!=x526)<=x527)*x528);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x529 = 3U;
	int32_t x530 = -1;
	static int64_t x531 = 84LL;
	int16_t x532 = 0;
	volatile int32_t t132 = -8365528;

    t132 = (((x529!=x530)<=x531)*x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -32949982331LL;
	uint16_t x534 = 92U;
	int8_t x535 = -5;
	uint64_t x536 = 7608LLU;
	static volatile uint64_t t133 = 12127052LLU;

    t133 = (((x533!=x534)<=x535)*x536);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -1;
	int64_t x538 = INT64_MIN;
	int32_t x539 = -1;
	volatile int8_t x540 = INT8_MAX;
	volatile int32_t t134 = 325761459;

    t134 = (((x537!=x538)<=x539)*x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MAX;
	uint16_t x542 = 13914U;
	int8_t x543 = -2;
	uint64_t x544 = UINT64_MAX;
	static uint64_t t135 = 32229045743LLU;

    t135 = (((x541!=x542)<=x543)*x544);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x546 = 123U;
	int16_t x547 = INT16_MIN;
	static volatile int32_t t136 = -1694;

    t136 = (((x545!=x546)<=x547)*x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = -1;
	uint64_t x551 = 5915301220441912LLU;
	static int8_t x552 = INT8_MIN;
	int32_t t137 = 43185971;

    t137 = (((x549!=x550)<=x551)*x552);

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = 14;
	uint8_t x556 = 11U;
	volatile int32_t t138 = 1392;

    t138 = (((x553!=x554)<=x555)*x556);

    if (t138 != 11) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x558 = INT64_MIN;
	static uint64_t x559 = 1167LLU;
	int32_t t139 = INT32_MAX;

    t139 = (((x557!=x558)<=x559)*x560);

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -30;
	int64_t x562 = -16125595331496220LL;
	int64_t x563 = -11241481338476LL;
	volatile uint64_t x564 = 1LLU;
	uint64_t t140 = 65278584969655LLU;

    t140 = (((x561!=x562)<=x563)*x564);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = INT32_MIN;
	volatile int16_t x566 = -1;
	int64_t x567 = -1LL;
	volatile int8_t x568 = 0;
	static volatile int32_t t141 = -94044251;

    t141 = (((x565!=x566)<=x567)*x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = UINT32_MAX;
	int32_t x570 = -24;
	static int64_t x571 = -1LL;
	int8_t x572 = INT8_MAX;
	volatile int32_t t142 = -4729733;

    t142 = (((x569!=x570)<=x571)*x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x573 = INT32_MAX;
	int16_t x574 = 183;
	uint32_t x575 = UINT32_MAX;
	int64_t x576 = INT64_MIN;

    t143 = (((x573!=x574)<=x575)*x576);

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	int32_t x579 = 3;
	int16_t x580 = -1;
	int32_t t144 = -5745;

    t144 = (((x577!=x578)<=x579)*x580);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint16_t x581 = 5U;
	volatile int16_t x582 = 0;
	int8_t x583 = -4;
	int64_t x584 = INT64_MIN;
	volatile int64_t t145 = 11462981684668524LL;

    t145 = (((x581!=x582)<=x583)*x584);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = INT32_MIN;
	int64_t x587 = -1LL;
	int64_t x588 = 125454110294LL;
	volatile int64_t t146 = -112878588387LL;

    t146 = (((x585!=x586)<=x587)*x588);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = INT64_MIN;
	int8_t x592 = INT8_MAX;
	volatile int32_t t147 = -3462;

    t147 = (((x589!=x590)<=x591)*x592);

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x593 = UINT64_MAX;
	uint16_t x595 = 5U;
	int32_t t148 = -124;

    t148 = (((x593!=x594)<=x595)*x596);

    if (t148 != 8) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x597 = INT32_MAX;
	uint64_t x598 = 1107LLU;
	static volatile int16_t x599 = 53;
	int64_t x600 = -5879378LL;
	volatile int64_t t149 = -424213808LL;

    t149 = (((x597!=x598)<=x599)*x600);

    if (t149 != -5879378LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x601 = INT64_MIN;
	int16_t x602 = -1;
	int64_t x603 = INT64_MIN;
	static int32_t x604 = INT32_MAX;

    t150 = (((x601!=x602)<=x603)*x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 4U;
	uint32_t x606 = 1U;
	volatile int32_t x607 = 2003107;
	int8_t x608 = INT8_MAX;
	volatile int32_t t151 = -207;

    t151 = (((x605!=x606)<=x607)*x608);

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	static uint32_t x611 = UINT32_MAX;
	volatile int64_t x612 = 59LL;

    t152 = (((x609!=x610)<=x611)*x612);

    if (t152 != 59LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = 111321;
	int32_t x615 = -1507292;
	volatile uint32_t x616 = 65705253U;
	volatile uint32_t t153 = 7U;

    t153 = (((x613!=x614)<=x615)*x616);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x617 = 1385401U;
	int32_t x618 = INT32_MIN;
	static int8_t x619 = 0;
	volatile int8_t x620 = INT8_MIN;
	volatile int32_t t154 = -372133556;

    t154 = (((x617!=x618)<=x619)*x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x621 = -1;
	volatile int8_t x622 = INT8_MIN;
	static volatile int32_t t155 = -1132049;

    t155 = (((x621!=x622)<=x623)*x624);

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x626 = 3865;
	volatile int64_t x627 = -1LL;
	uint16_t x628 = 2176U;
	static volatile int32_t t156 = 31924;

    t156 = (((x625!=x626)<=x627)*x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x630 = INT32_MAX;
	uint16_t x632 = 7125U;
	int32_t t157 = 203021;

    t157 = (((x629!=x630)<=x631)*x632);

    if (t157 != 7125) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x634 = UINT8_MAX;
	uint64_t x635 = 102LLU;
	int32_t x636 = -1;
	volatile int32_t t158 = -24527225;

    t158 = (((x633!=x634)<=x635)*x636);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = -1LL;
	uint16_t x638 = UINT16_MAX;
	volatile uint64_t x639 = UINT64_MAX;
	uint32_t x640 = 15704U;
	volatile uint32_t t159 = 119191U;

    t159 = (((x637!=x638)<=x639)*x640);

    if (t159 != 15704U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = -2857LL;
	volatile int64_t x642 = INT64_MAX;
	int64_t x643 = INT64_MIN;
	int32_t t160 = 10837;

    t160 = (((x641!=x642)<=x643)*x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x646 = 22660425LLU;

    t161 = (((x645!=x646)<=x647)*x648);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x650 = -265625037;
	int32_t x651 = INT32_MIN;
	volatile uint32_t x652 = UINT32_MAX;
	uint32_t t162 = 115252499U;

    t162 = (((x649!=x650)<=x651)*x652);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x653 = INT8_MIN;
	static uint64_t x654 = 1967567LLU;
	uint16_t x655 = 1U;
	int32_t x656 = 0;
	volatile int32_t t163 = 70874287;

    t163 = (((x653!=x654)<=x655)*x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = 0;
	int32_t x660 = -1;
	int32_t t164 = 202;

    t164 = (((x657!=x658)<=x659)*x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x662 = INT8_MAX;
	int64_t x663 = -63372070158LL;
	uint8_t x664 = UINT8_MAX;
	static volatile int32_t t165 = 16904;

    t165 = (((x661!=x662)<=x663)*x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x667 = INT32_MIN;
	int32_t t166 = 8;

    t166 = (((x665!=x666)<=x667)*x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = UINT8_MAX;
	static volatile uint32_t x672 = UINT32_MAX;
	volatile uint32_t t167 = 2078U;

    t167 = (((x669!=x670)<=x671)*x672);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MAX;
	volatile uint16_t x674 = 26U;
	uint32_t x675 = UINT32_MAX;
	volatile int32_t t168 = -8164343;

    t168 = (((x673!=x674)<=x675)*x676);

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	int16_t x678 = -642;
	int32_t x679 = -1;
	static volatile int16_t x680 = INT16_MIN;
	volatile int32_t t169 = 222849;

    t169 = (((x677!=x678)<=x679)*x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = 0;
	int64_t x682 = INT64_MIN;
	int16_t x684 = INT16_MIN;

    t170 = (((x681!=x682)<=x683)*x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 34U;
	int32_t x686 = -691011;
	uint16_t x687 = 1813U;
	int32_t t171 = 219948;

    t171 = (((x685!=x686)<=x687)*x688);

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MAX;
	static uint16_t x690 = 70U;
	int64_t x691 = INT64_MIN;
	volatile int32_t t172 = 0;

    t172 = (((x689!=x690)<=x691)*x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -1;
	uint8_t x694 = UINT8_MAX;
	volatile int16_t x695 = INT16_MIN;
	volatile uint32_t t173 = 351148352U;

    t173 = (((x693!=x694)<=x695)*x696);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x698 = -50;
	static volatile int32_t t174 = INT32_MIN;

    t174 = (((x697!=x698)<=x699)*x700);

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x701 = 13027744387LL;
	volatile uint8_t x702 = UINT8_MAX;
	uint32_t x703 = UINT32_MAX;
	uint16_t x704 = 6960U;
	int32_t t175 = 1;

    t175 = (((x701!=x702)<=x703)*x704);

    if (t175 != 6960) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	volatile int16_t x706 = INT16_MIN;
	volatile int32_t x707 = INT32_MAX;
	volatile int8_t x708 = 16;
	int32_t t176 = -10413;

    t176 = (((x705!=x706)<=x707)*x708);

    if (t176 != 16) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = -3968;
	int64_t x711 = 250427976029725450LL;
	int16_t x712 = -1;
	volatile int32_t t177 = -3;

    t177 = (((x709!=x710)<=x711)*x712);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 2;
	static volatile int16_t x715 = -1;
	int16_t x716 = INT16_MAX;
	int32_t t178 = -1;

    t178 = (((x713!=x714)<=x715)*x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x720 = -1LL;
	static int64_t t179 = 1LL;

    t179 = (((x717!=x718)<=x719)*x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x721 = 1U;
	static int32_t x722 = INT32_MIN;
	uint32_t x723 = 6696955U;
	int8_t x724 = -1;
	static volatile int32_t t180 = -151800343;

    t180 = (((x721!=x722)<=x723)*x724);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MAX;
	uint32_t x728 = 425U;

    t181 = (((x725!=x726)<=x727)*x728);

    if (t181 != 425U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	int8_t x730 = -1;
	int8_t x731 = -1;
	int64_t x732 = INT64_MIN;
	int64_t t182 = 125LL;

    t182 = (((x729!=x730)<=x731)*x732);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 14;
	volatile int32_t x734 = INT32_MIN;
	static uint64_t x735 = UINT64_MAX;
	int64_t x736 = 35981LL;
	int64_t t183 = 2122422399878592889LL;

    t183 = (((x733!=x734)<=x735)*x736);

    if (t183 != 35981LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -1;
	int8_t x740 = 2;

    t184 = (((x737!=x738)<=x739)*x740);

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 2U;
	uint16_t x742 = UINT16_MAX;
	int16_t x744 = 5;
	volatile int32_t t185 = 1707;

    t185 = (((x741!=x742)<=x743)*x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = INT64_MAX;
	int32_t x747 = INT32_MIN;
	int32_t x748 = 122069;
	int32_t t186 = -177679731;

    t186 = (((x745!=x746)<=x747)*x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x749 = 5U;
	int8_t x752 = 61;
	volatile int32_t t187 = 0;

    t187 = (((x749!=x750)<=x751)*x752);

    if (t187 != 61) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = 0;
	int32_t x754 = -1;
	uint64_t x755 = 16872LLU;
	int16_t x756 = INT16_MIN;

    t188 = (((x753!=x754)<=x755)*x756);

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	int32_t x758 = INT32_MAX;
	volatile uint64_t x759 = 43LLU;
	uint8_t x760 = UINT8_MAX;
	int32_t t189 = 153930;

    t189 = (((x757!=x758)<=x759)*x760);

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	int8_t x763 = INT8_MIN;
	int8_t x764 = 7;
	int32_t t190 = -9;

    t190 = (((x761!=x762)<=x763)*x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = 8376960;
	static int64_t x767 = 772859868LL;
	static uint32_t x768 = 279946094U;
	uint32_t t191 = 897958U;

    t191 = (((x765!=x766)<=x767)*x768);

    if (t191 != 279946094U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = INT16_MIN;
	static uint64_t x771 = UINT64_MAX;
	static uint32_t x772 = 545990228U;
	volatile uint32_t t192 = 55027U;

    t192 = (((x769!=x770)<=x771)*x772);

    if (t192 != 545990228U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	int32_t x774 = -435047476;
	volatile int32_t t193 = 0;

    t193 = (((x773!=x774)<=x775)*x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = 0;
	int8_t x778 = INT8_MIN;
	volatile int16_t x779 = -1866;
	volatile int8_t x780 = INT8_MIN;
	static volatile int32_t t194 = -6129;

    t194 = (((x777!=x778)<=x779)*x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = INT8_MIN;
	static int16_t x782 = INT16_MIN;
	volatile int32_t t195 = 2245;

    t195 = (((x781!=x782)<=x783)*x784);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 11U;
	int8_t x786 = -1;
	uint64_t x787 = 8LLU;
	static int64_t x788 = INT64_MIN;

    t196 = (((x785!=x786)<=x787)*x788);

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = 2LL;
	volatile uint32_t x791 = 2603952U;
	volatile int32_t t197 = 7719460;

    t197 = (((x789!=x790)<=x791)*x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 41427U;
	volatile int8_t x794 = INT8_MIN;
	uint64_t x795 = 2LLU;
	volatile uint64_t x796 = UINT64_MAX;
	volatile uint64_t t198 = UINT64_MAX;

    t198 = (((x793!=x794)<=x795)*x796);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = UINT32_MAX;
	int64_t x798 = INT64_MIN;
	int16_t x800 = -1;
	int32_t t199 = -5817;

    t199 = (((x797!=x798)<=x799)*x800);

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

