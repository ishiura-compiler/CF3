
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

static volatile int32_t x2 = INT32_MIN;
uint16_t x17 = 50U;
volatile int32_t t2 = -1063433;
uint8_t x24 = 43U;
volatile int16_t x29 = INT16_MIN;
static uint64_t x40 = UINT64_MAX;
int32_t t8 = 2688259;
uint8_t x60 = UINT8_MAX;
static int16_t x65 = 41;
volatile int32_t t13 = 7;
int32_t t14 = -15908;
volatile int8_t x74 = -1;
uint32_t x76 = 920149983U;
volatile uint32_t x78 = UINT32_MAX;
volatile int64_t x80 = INT64_MIN;
int32_t x85 = INT32_MAX;
int32_t t19 = 28;
int32_t t20 = -110980;
int32_t t21 = 252371970;
int32_t t22 = -10600;
uint8_t x109 = 127U;
static int32_t x112 = -1;
volatile int64_t x114 = -89806065944080582LL;
int32_t x115 = -1;
volatile int32_t x121 = -1;
static int8_t x122 = INT8_MIN;
uint64_t x128 = UINT64_MAX;
volatile int32_t t28 = 0;
uint64_t x135 = UINT64_MAX;
volatile int32_t t29 = -6685223;
int64_t x137 = INT64_MIN;
int32_t x149 = 1;
int8_t x153 = INT8_MIN;
int64_t x156 = 17522463340LL;
int64_t x159 = 94562LL;
int8_t x164 = 28;
volatile int64_t x174 = -1LL;
volatile int32_t t38 = -10522;
uint16_t x177 = 5U;
static int8_t x187 = INT8_MAX;
static volatile int32_t t41 = 905417220;
int8_t x197 = INT8_MIN;
static int64_t x205 = INT64_MIN;
static uint16_t x206 = UINT16_MAX;
int32_t t47 = -83962;
int8_t x213 = INT8_MAX;
uint64_t x214 = UINT64_MAX;
static volatile int32_t t48 = -810876;
int8_t x226 = -1;
uint8_t x228 = 3U;
static int16_t x232 = INT16_MIN;
int64_t x233 = -2661756365606281194LL;
uint32_t x239 = 0U;
int32_t x242 = INT32_MAX;
static int32_t x248 = -14;
static int32_t t55 = 65820391;
uint8_t x251 = UINT8_MAX;
volatile uint8_t x253 = 0U;
int64_t x275 = 213824LL;
uint64_t x276 = 1137810159LLU;
int32_t x282 = 606795910;
volatile int16_t x294 = 82;
volatile int32_t t68 = -643982458;
int32_t x307 = INT32_MAX;
uint32_t x315 = 2074884U;
int32_t x324 = 1003;
static volatile int8_t x327 = -1;
volatile int8_t x328 = INT8_MIN;
int16_t x335 = -25;
uint16_t x337 = UINT16_MAX;
volatile int32_t t79 = 367021974;
volatile int16_t x347 = -27;
int32_t x348 = INT32_MIN;
volatile int16_t x352 = INT16_MAX;
volatile uint32_t x380 = 22U;
int8_t x387 = 12;
volatile int16_t x395 = 1;
volatile int64_t x396 = INT64_MIN;
static int64_t x401 = INT64_MIN;
uint8_t x405 = 63U;
volatile uint64_t x416 = 87536LLU;
uint64_t x419 = 191925680LLU;
static int8_t x427 = INT8_MAX;
uint16_t x429 = UINT16_MAX;
uint32_t x431 = UINT32_MAX;
int8_t x436 = -1;
uint64_t x437 = UINT64_MAX;
int16_t x439 = INT16_MAX;
volatile int32_t t103 = 545610;
static uint64_t x448 = 5139097242036547158LLU;
uint32_t x449 = 6464555U;
volatile uint32_t x450 = 1U;
static uint32_t x451 = UINT32_MAX;
int8_t x453 = -1;
int64_t x455 = -1LL;
uint8_t x456 = 16U;
uint64_t x459 = 12567509LLU;
volatile int32_t t107 = -3762429;
static volatile int16_t x466 = -104;
uint16_t x467 = 19480U;
int8_t x470 = INT8_MIN;
static volatile int32_t x471 = INT32_MAX;
int16_t x472 = INT16_MAX;
int16_t x473 = -1;
uint64_t x475 = UINT64_MAX;
int16_t x476 = INT16_MIN;
volatile int32_t t111 = 70;
int64_t x478 = INT64_MIN;
int8_t x483 = -1;
static uint16_t x487 = 280U;
volatile int32_t t114 = -26;
int16_t x492 = -142;
uint8_t x494 = UINT8_MAX;
static int64_t x496 = INT64_MIN;
int16_t x500 = INT16_MIN;
static volatile int8_t x505 = INT8_MAX;
int32_t x512 = INT32_MAX;
int64_t x514 = -1LL;
uint16_t x519 = UINT16_MAX;
int64_t x522 = INT64_MIN;
uint32_t x527 = 30U;
int32_t t123 = -38097480;
int16_t x529 = 21;
int8_t x536 = INT8_MIN;
uint16_t x544 = 3U;
uint32_t x550 = UINT32_MAX;
static volatile int8_t x551 = INT8_MIN;
int64_t x561 = 1704949230357LL;
static uint8_t x567 = UINT8_MAX;
volatile int32_t t132 = 1;
static uint32_t x574 = 106U;
int16_t x575 = -852;
int64_t x579 = 1996110876404LL;
int32_t x580 = INT32_MIN;
int32_t x583 = INT32_MIN;
int16_t x587 = 1203;
uint8_t x588 = 28U;
uint64_t x597 = 68415114404LLU;
uint16_t x604 = 3444U;
volatile int64_t x609 = INT64_MAX;
int64_t x610 = 178952LL;
int64_t x611 = INT64_MAX;
volatile uint8_t x615 = 5U;
volatile uint8_t x633 = UINT8_MAX;
int16_t x634 = INT16_MIN;
uint16_t x637 = UINT16_MAX;
uint16_t x639 = 149U;
volatile int32_t x641 = -1;
static int16_t x647 = -53;
uint8_t x648 = 31U;
static uint8_t x651 = UINT8_MAX;
uint32_t x652 = 63141012U;
static int64_t x654 = INT64_MAX;
volatile uint8_t x657 = 3U;
int64_t x663 = -18300446LL;
uint32_t x669 = UINT32_MAX;
int16_t x672 = INT16_MAX;
uint32_t x676 = 609029675U;
int8_t x678 = INT8_MIN;
static int32_t x680 = INT32_MIN;
int8_t x686 = INT8_MAX;
static uint16_t x688 = 29U;
int8_t x689 = INT8_MIN;
int8_t x691 = 0;
uint16_t x700 = 3011U;
static uint32_t x702 = 21U;
int16_t x705 = INT16_MIN;
uint64_t x708 = 7126261576130LLU;
int8_t x709 = INT8_MAX;
uint64_t x710 = 0LLU;
int16_t x738 = INT16_MIN;
volatile int32_t t173 = -8314;
int32_t x741 = INT32_MAX;
volatile int32_t t175 = -178440;
volatile int8_t x760 = INT8_MIN;
uint8_t x761 = UINT8_MAX;
int8_t x766 = INT8_MIN;
int16_t x768 = INT16_MIN;
volatile int64_t x775 = INT64_MAX;
uint64_t x779 = 997642510943883LLU;
volatile int32_t x784 = INT32_MAX;
int8_t x808 = INT8_MAX;
static int32_t t189 = -53984;
int32_t x814 = 21861;
volatile uint64_t x818 = 7394480LLU;
int32_t t192 = 615277;
uint8_t x825 = 41U;
uint8_t x829 = 5U;
int32_t t195 = -156;
uint32_t x845 = 36548U;
int64_t x852 = -1LL;


void f0(void) {
    	int64_t x1 = -1887414993LL;
	int32_t x3 = -204695;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = -23233;

    t0 = ((x1>x2)!=(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x13 = -1;
	int64_t x14 = -1LL;
	volatile uint32_t x15 = 16688372U;
	int16_t x16 = 13423;
	int32_t t1 = -4385;

    t1 = ((x13>x14)!=(x15/x16));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x18 = -506824425274LL;
	static uint64_t x19 = 7569741LLU;
	static volatile int64_t x20 = 1117730LL;

    t2 = ((x17>x18)!=(x19/x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = -1;
	uint32_t x22 = 397033438U;
	int64_t x23 = INT64_MIN;
	volatile int32_t t3 = 92906610;

    t3 = ((x21>x22)!=(x23/x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x30 = -1LL;
	static int64_t x31 = 397113376LL;
	int16_t x32 = -3;
	volatile int32_t t4 = 0;

    t4 = ((x29>x30)!=(x31/x32));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x33 = INT8_MIN;
	int32_t x34 = -1;
	volatile uint8_t x35 = 2U;
	volatile uint64_t x36 = 26LLU;
	int32_t t5 = 20037;

    t5 = ((x33>x34)!=(x35/x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x37 = 21146U;
	volatile int16_t x38 = 1;
	volatile uint32_t x39 = 19274U;
	volatile int32_t t6 = -173349;

    t6 = ((x37>x38)!=(x39/x40));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x41 = INT64_MAX;
	uint64_t x42 = 0LLU;
	uint64_t x43 = 5274761667215LLU;
	static int64_t x44 = INT64_MIN;
	static volatile int32_t t7 = 201079148;

    t7 = ((x41>x42)!=(x43/x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x45 = 7;
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = -1;
	uint64_t x48 = 862LLU;

    t8 = ((x45>x46)!=(x47/x48));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x49 = INT32_MAX;
	volatile int64_t x50 = INT64_MIN;
	int8_t x51 = -1;
	uint32_t x52 = 23474U;
	volatile int32_t t9 = -130510;

    t9 = ((x49>x50)!=(x51/x52));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = 2;
	static int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MAX;
	uint8_t x56 = 26U;
	volatile int32_t t10 = -953894;

    t10 = ((x53>x54)!=(x55/x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x57 = 1698U;
	static volatile int16_t x58 = -3830;
	int32_t x59 = -1;
	int32_t t11 = 1033984;

    t11 = ((x57>x58)!=(x59/x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = 847486395LL;
	uint16_t x62 = 6064U;
	int16_t x63 = -1;
	int16_t x64 = INT16_MIN;
	int32_t t12 = -205214;

    t12 = ((x61>x62)!=(x63/x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x66 = 19434U;
	static int8_t x67 = -1;
	int64_t x68 = INT64_MIN;

    t13 = ((x65>x66)!=(x67/x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x69 = INT8_MAX;
	static volatile int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	static int16_t x72 = 457;

    t14 = ((x69>x70)!=(x71/x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = INT16_MIN;
	int8_t x75 = INT8_MAX;
	volatile int32_t t15 = -31;

    t15 = ((x73>x74)!=(x75/x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x77 = INT32_MIN;
	static int32_t x79 = INT32_MAX;
	static volatile int32_t t16 = 195;

    t16 = ((x77>x78)!=(x79/x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x81 = INT64_MAX;
	int16_t x82 = INT16_MAX;
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = -1;
	volatile int32_t t17 = 1529;

    t17 = ((x81>x82)!=(x83/x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x86 = 20137261946LLU;
	int64_t x87 = -3088960313496219LL;
	volatile uint64_t x88 = UINT64_MAX;
	static int32_t t18 = -3793;

    t18 = ((x85>x86)!=(x87/x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x93 = 28U;
	static uint16_t x94 = 15019U;
	int8_t x95 = -1;
	volatile uint16_t x96 = UINT16_MAX;

    t19 = ((x93>x94)!=(x95/x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = 7959232242346081LL;
	int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	uint64_t x100 = UINT64_MAX;

    t20 = ((x97>x98)!=(x99/x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x101 = 4305U;
	static int64_t x102 = INT64_MIN;
	int8_t x103 = 1;
	volatile uint16_t x104 = UINT16_MAX;

    t21 = ((x101>x102)!=(x103/x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = INT8_MAX;
	int32_t x106 = INT32_MIN;
	int8_t x107 = INT8_MIN;
	static uint16_t x108 = 8005U;

    t22 = ((x105>x106)!=(x107/x108));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x110 = 18089U;
	static volatile uint16_t x111 = 3931U;
	volatile int32_t t23 = -504;

    t23 = ((x109>x110)!=(x111/x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x113 = 1U;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t24 = 7511;

    t24 = ((x113>x114)!=(x115/x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x117 = UINT16_MAX;
	int8_t x118 = 6;
	int32_t x119 = -302;
	static int8_t x120 = -45;
	volatile int32_t t25 = -23;

    t25 = ((x117>x118)!=(x119/x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x123 = 0;
	static uint64_t x124 = 105840566768765158LLU;
	volatile int32_t t26 = 792;

    t26 = ((x121>x122)!=(x123/x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = -1;
	uint64_t x126 = 112165701267LLU;
	int16_t x127 = -1;
	int32_t t27 = -4092;

    t27 = ((x125>x126)!=(x127/x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x129 = 115152929LLU;
	static uint32_t x130 = UINT32_MAX;
	int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MAX;

    t28 = ((x129>x130)!=(x131/x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = INT16_MIN;
	int8_t x134 = -1;
	static volatile uint8_t x136 = 18U;

    t29 = ((x133>x134)!=(x135/x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x138 = -1LL;
	int32_t x139 = INT32_MAX;
	static int8_t x140 = -58;
	volatile int32_t t30 = -81;

    t30 = ((x137>x138)!=(x139/x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x145 = 55245162848590654LLU;
	int8_t x146 = INT8_MIN;
	int64_t x147 = -6616282923LL;
	uint8_t x148 = 3U;
	int32_t t31 = -666834814;

    t31 = ((x145>x146)!=(x147/x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x150 = UINT8_MAX;
	static int64_t x151 = INT64_MIN;
	volatile uint16_t x152 = 31879U;
	static int32_t t32 = 0;

    t32 = ((x149>x150)!=(x151/x152));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x154 = -34;
	volatile uint32_t x155 = 13U;
	volatile int32_t t33 = -1405855;

    t33 = ((x153>x154)!=(x155/x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = INT64_MIN;
	uint64_t x158 = UINT64_MAX;
	int64_t x160 = INT64_MIN;
	int32_t t34 = 55620;

    t34 = ((x157>x158)!=(x159/x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x161 = INT16_MAX;
	volatile uint16_t x162 = UINT16_MAX;
	int64_t x163 = INT64_MIN;
	volatile int32_t t35 = -36;

    t35 = ((x161>x162)!=(x163/x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x165 = -1;
	int16_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	uint16_t x168 = 12125U;
	int32_t t36 = 109;

    t36 = ((x165>x166)!=(x167/x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = 17U;
	int16_t x170 = 1;
	uint32_t x171 = 2U;
	static int16_t x172 = INT16_MIN;
	static volatile int32_t t37 = -3;

    t37 = ((x169>x170)!=(x171/x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x173 = 2321795121819009328LLU;
	volatile int32_t x175 = 50033;
	uint8_t x176 = 1U;

    t38 = ((x173>x174)!=(x175/x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x178 = 82203917267LLU;
	static int16_t x179 = 1;
	int8_t x180 = -1;
	volatile int32_t t39 = -18;

    t39 = ((x177>x178)!=(x179/x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x181 = 9531477949926LLU;
	static uint64_t x182 = 192764LLU;
	volatile uint64_t x183 = 116648470419LLU;
	int64_t x184 = 865477961243LL;
	volatile int32_t t40 = 2042;

    t40 = ((x181>x182)!=(x183/x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x185 = 5999;
	volatile uint16_t x186 = 2514U;
	int16_t x188 = INT16_MIN;

    t41 = ((x185>x186)!=(x187/x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x189 = 1;
	uint16_t x190 = 13377U;
	static uint64_t x191 = 3644273LLU;
	int16_t x192 = INT16_MIN;
	int32_t t42 = 59537;

    t42 = ((x189>x190)!=(x191/x192));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MAX;
	int8_t x195 = INT8_MAX;
	int32_t x196 = -570619296;
	volatile int32_t t43 = 8599387;

    t43 = ((x193>x194)!=(x195/x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x198 = -56524006026865LL;
	uint16_t x199 = 15U;
	static volatile uint64_t x200 = UINT64_MAX;
	volatile int32_t t44 = -1950;

    t44 = ((x197>x198)!=(x199/x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x201 = INT16_MAX;
	uint8_t x202 = 57U;
	int8_t x203 = 0;
	int16_t x204 = INT16_MIN;
	int32_t t45 = 87601720;

    t45 = ((x201>x202)!=(x203/x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x207 = 2U;
	uint8_t x208 = UINT8_MAX;
	int32_t t46 = 1485;

    t46 = ((x205>x206)!=(x207/x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x209 = INT16_MIN;
	static volatile uint64_t x210 = 32994119310697LLU;
	int8_t x211 = INT8_MAX;
	int16_t x212 = INT16_MAX;

    t47 = ((x209>x210)!=(x211/x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x215 = INT16_MIN;
	static volatile uint8_t x216 = UINT8_MAX;

    t48 = ((x213>x214)!=(x215/x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = -1;
	volatile uint64_t x218 = 11511658LLU;
	static int8_t x219 = INT8_MIN;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t49 = 15;

    t49 = ((x217>x218)!=(x219/x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = INT8_MIN;
	int64_t x227 = -131442913558854LL;
	volatile int32_t t50 = 27849351;

    t50 = ((x225>x226)!=(x227/x228));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x229 = 4794899U;
	int16_t x230 = INT16_MAX;
	volatile int16_t x231 = INT16_MIN;
	volatile int32_t t51 = -1221;

    t51 = ((x229>x230)!=(x231/x232));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x234 = 437781659U;
	int32_t x235 = -1;
	uint8_t x236 = 75U;
	volatile int32_t t52 = -185;

    t52 = ((x233>x234)!=(x235/x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x237 = 3745LLU;
	int64_t x238 = -228610729906162LL;
	int8_t x240 = INT8_MIN;
	volatile int32_t t53 = 613838;

    t53 = ((x237>x238)!=(x239/x240));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x241 = INT32_MIN;
	uint8_t x243 = 4U;
	int32_t x244 = -2768171;
	int32_t t54 = 147697320;

    t54 = ((x241>x242)!=(x243/x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x245 = 0;
	volatile int64_t x246 = -1482787562031651LL;
	int8_t x247 = INT8_MIN;

    t55 = ((x245>x246)!=(x247/x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x249 = 2760LLU;
	static volatile int16_t x250 = INT16_MIN;
	static int64_t x252 = -1LL;
	int32_t t56 = -7451182;

    t56 = ((x249>x250)!=(x251/x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x254 = -854711502254954LL;
	static volatile int32_t x255 = INT32_MIN;
	int64_t x256 = 2362356924174923LL;
	int32_t t57 = 11;

    t57 = ((x253>x254)!=(x255/x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = INT32_MIN;
	int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t58 = -12283;

    t58 = ((x257>x258)!=(x259/x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x261 = INT8_MIN;
	static volatile uint64_t x262 = 8846LLU;
	int64_t x263 = -1LL;
	static int16_t x264 = 1946;
	volatile int32_t t59 = -31251853;

    t59 = ((x261>x262)!=(x263/x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x265 = 72304187728667LL;
	int64_t x266 = INT64_MIN;
	volatile uint16_t x267 = 66U;
	volatile int8_t x268 = -1;
	int32_t t60 = 30102124;

    t60 = ((x265>x266)!=(x267/x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x269 = 7402LLU;
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = 463;
	int8_t x272 = -1;
	volatile int32_t t61 = -218;

    t61 = ((x269>x270)!=(x271/x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x273 = -1LL;
	int16_t x274 = -15;
	volatile int32_t t62 = -1;

    t62 = ((x273>x274)!=(x275/x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x277 = INT16_MIN;
	static uint16_t x278 = 73U;
	static int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t63 = 886749050;

    t63 = ((x277>x278)!=(x279/x280));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x281 = 1905963626081LLU;
	uint8_t x283 = 2U;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t64 = -46742;

    t64 = ((x281>x282)!=(x283/x284));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x285 = INT8_MIN;
	int8_t x286 = -1;
	volatile int32_t x287 = INT32_MIN;
	volatile int16_t x288 = INT16_MIN;
	static volatile int32_t t65 = -407;

    t65 = ((x285>x286)!=(x287/x288));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x289 = 10U;
	volatile uint64_t x290 = UINT64_MAX;
	int16_t x291 = -156;
	static uint32_t x292 = 102264U;
	volatile int32_t t66 = -57031239;

    t66 = ((x289>x290)!=(x291/x292));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MIN;
	volatile uint8_t x295 = 20U;
	static int16_t x296 = 7296;
	int32_t t67 = 1047938;

    t67 = ((x293>x294)!=(x295/x296));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x297 = -8640;
	uint8_t x298 = 3U;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MIN;

    t68 = ((x297>x298)!=(x299/x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x301 = 30366U;
	int64_t x302 = -1LL;
	int8_t x303 = 2;
	int64_t x304 = -6979LL;
	int32_t t69 = 700751;

    t69 = ((x301>x302)!=(x303/x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x305 = -1;
	int64_t x306 = -347961681165357LL;
	volatile int8_t x308 = 9;
	int32_t t70 = 7;

    t70 = ((x305>x306)!=(x307/x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int64_t x309 = -12492898252391LL;
	static int16_t x310 = INT16_MAX;
	volatile int8_t x311 = -1;
	volatile uint16_t x312 = 1392U;
	volatile int32_t t71 = 20386926;

    t71 = ((x309>x310)!=(x311/x312));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x313 = 19;
	int32_t x314 = 827;
	static int64_t x316 = -1LL;
	volatile int32_t t72 = -13921;

    t72 = ((x313>x314)!=(x315/x316));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x317 = UINT16_MAX;
	int32_t x318 = INT32_MIN;
	uint64_t x319 = 11174398LLU;
	int32_t x320 = 3721025;
	volatile int32_t t73 = -5250885;

    t73 = ((x317>x318)!=(x319/x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x321 = 11474384187007LLU;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = UINT16_MAX;
	int32_t t74 = -363134;

    t74 = ((x321>x322)!=(x323/x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = -1;
	uint8_t x326 = UINT8_MAX;
	static int32_t t75 = -3466;

    t75 = ((x325>x326)!=(x327/x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x329 = INT8_MAX;
	uint64_t x330 = 87497127LLU;
	uint64_t x331 = 5LLU;
	int16_t x332 = INT16_MAX;
	int32_t t76 = -1;

    t76 = ((x329>x330)!=(x331/x332));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x333 = -48;
	uint8_t x334 = UINT8_MAX;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t77 = -13;

    t77 = ((x333>x334)!=(x335/x336));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x338 = -1;
	int16_t x339 = INT16_MIN;
	int32_t x340 = -54844577;
	static int32_t t78 = -9616;

    t78 = ((x337>x338)!=(x339/x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x341 = 37LLU;
	uint8_t x342 = 21U;
	int16_t x343 = INT16_MIN;
	int8_t x344 = -1;

    t79 = ((x341>x342)!=(x343/x344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MAX;
	volatile int32_t t80 = -6706870;

    t80 = ((x345>x346)!=(x347/x348));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x349 = UINT16_MAX;
	int32_t x350 = INT32_MIN;
	static int8_t x351 = 47;
	int32_t t81 = -235505;

    t81 = ((x349>x350)!=(x351/x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x353 = UINT16_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	static volatile int16_t x356 = -1;
	int32_t t82 = -71953;

    t82 = ((x353>x354)!=(x355/x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x357 = INT16_MAX;
	volatile int32_t x358 = INT32_MAX;
	uint64_t x359 = 3604013430LLU;
	int32_t x360 = INT32_MIN;
	int32_t t83 = 483;

    t83 = ((x357>x358)!=(x359/x360));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x361 = 2U;
	volatile int8_t x362 = -1;
	static volatile int32_t x363 = INT32_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t84 = -129951;

    t84 = ((x361>x362)!=(x363/x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x369 = INT8_MAX;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = 10U;
	static int64_t x372 = INT64_MAX;
	volatile int32_t t85 = 56;

    t85 = ((x369>x370)!=(x371/x372));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x373 = INT32_MIN;
	static int32_t x374 = INT32_MAX;
	volatile uint8_t x375 = 0U;
	uint32_t x376 = 385990003U;
	volatile int32_t t86 = 56230277;

    t86 = ((x373>x374)!=(x375/x376));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = -1;
	int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	int32_t t87 = 0;

    t87 = ((x377>x378)!=(x379/x380));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 4746154LLU;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = UINT16_MAX;
	uint16_t x384 = 4620U;
	static int32_t t88 = 26;

    t88 = ((x381>x382)!=(x383/x384));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x385 = -244421790048663LL;
	uint32_t x386 = UINT32_MAX;
	int16_t x388 = 6;
	static int32_t t89 = 1;

    t89 = ((x385>x386)!=(x387/x388));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	static uint32_t x391 = UINT32_MAX;
	int32_t x392 = INT32_MIN;
	int32_t t90 = 232441;

    t90 = ((x389>x390)!=(x391/x392));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x393 = UINT32_MAX;
	int16_t x394 = INT16_MIN;
	volatile int32_t t91 = -24274810;

    t91 = ((x393>x394)!=(x395/x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x397 = 1804876381U;
	uint64_t x398 = 2074790004833LLU;
	volatile int16_t x399 = INT16_MIN;
	int8_t x400 = -1;
	int32_t t92 = -764222068;

    t92 = ((x397>x398)!=(x399/x400));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x402 = INT32_MIN;
	int32_t x403 = 217;
	volatile uint16_t x404 = 89U;
	int32_t t93 = 1;

    t93 = ((x401>x402)!=(x403/x404));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x406 = INT32_MIN;
	uint32_t x407 = 8299384U;
	int16_t x408 = -1;
	int32_t t94 = 1634;

    t94 = ((x405>x406)!=(x407/x408));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	int32_t x412 = INT32_MIN;
	volatile int32_t t95 = -581741;

    t95 = ((x409>x410)!=(x411/x412));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x413 = INT64_MAX;
	uint8_t x414 = UINT8_MAX;
	static int8_t x415 = INT8_MIN;
	int32_t t96 = 6191;

    t96 = ((x413>x414)!=(x415/x416));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x417 = 183U;
	int32_t x418 = INT32_MIN;
	static int32_t x420 = INT32_MIN;
	volatile int32_t t97 = 1;

    t97 = ((x417>x418)!=(x419/x420));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x421 = 0U;
	uint32_t x422 = 0U;
	static int64_t x423 = 859133141714880538LL;
	int32_t x424 = -1;
	static volatile int32_t t98 = 246;

    t98 = ((x421>x422)!=(x423/x424));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x425 = 0;
	uint64_t x426 = 16315583849LLU;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t99 = -30283121;

    t99 = ((x425>x426)!=(x427/x428));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x430 = INT64_MIN;
	int64_t x432 = 1088107LL;
	int32_t t100 = -1558405;

    t100 = ((x429>x430)!=(x431/x432));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x433 = 81072499;
	int32_t x434 = -1;
	uint32_t x435 = UINT32_MAX;
	static volatile int32_t t101 = -1562940;

    t101 = ((x433>x434)!=(x435/x436));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x438 = 308320291LLU;
	volatile int64_t x440 = -1LL;
	volatile int32_t t102 = -74275;

    t102 = ((x437>x438)!=(x439/x440));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x441 = INT8_MIN;
	int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MAX;
	uint64_t x444 = 22LLU;

    t103 = ((x441>x442)!=(x443/x444));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x445 = -197LL;
	uint64_t x446 = UINT64_MAX;
	static int64_t x447 = INT64_MIN;
	volatile int32_t t104 = -229;

    t104 = ((x445>x446)!=(x447/x448));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x452 = 10U;
	volatile int32_t t105 = 63;

    t105 = ((x449>x450)!=(x451/x452));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x454 = 81308575;
	volatile int32_t t106 = 4881;

    t106 = ((x453>x454)!=(x455/x456));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x457 = INT16_MIN;
	int16_t x458 = -7;
	int32_t x460 = INT32_MIN;

    t107 = ((x457>x458)!=(x459/x460));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x461 = -1;
	static int64_t x462 = -1LL;
	int64_t x463 = INT64_MAX;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t108 = -13621517;

    t108 = ((x461>x462)!=(x463/x464));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x465 = INT16_MAX;
	volatile int64_t x468 = -1LL;
	static int32_t t109 = -25127766;

    t109 = ((x465>x466)!=(x467/x468));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x469 = -1;
	int32_t t110 = 3;

    t110 = ((x469>x470)!=(x471/x472));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x474 = -108;

    t111 = ((x473>x474)!=(x475/x476));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x477 = -1LL;
	int8_t x479 = -1;
	volatile int16_t x480 = INT16_MIN;
	int32_t t112 = -434;

    t112 = ((x477>x478)!=(x479/x480));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x481 = 7269U;
	int8_t x482 = -14;
	uint16_t x484 = 389U;
	volatile int32_t t113 = 989815;

    t113 = ((x481>x482)!=(x483/x484));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x485 = 11887;
	static int16_t x486 = INT16_MAX;
	uint32_t x488 = UINT32_MAX;

    t114 = ((x485>x486)!=(x487/x488));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	volatile uint32_t x490 = UINT32_MAX;
	uint32_t x491 = 565712U;
	volatile int32_t t115 = 328683600;

    t115 = ((x489>x490)!=(x491/x492));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x493 = 0;
	int8_t x495 = -1;
	static int32_t t116 = -357016;

    t116 = ((x493>x494)!=(x495/x496));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x497 = INT64_MIN;
	int64_t x498 = -49073958180879874LL;
	uint8_t x499 = UINT8_MAX;
	int32_t t117 = -47;

    t117 = ((x497>x498)!=(x499/x500));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x506 = INT16_MIN;
	uint64_t x507 = 134170586622LLU;
	int16_t x508 = -61;
	int32_t t118 = 3175;

    t118 = ((x505>x506)!=(x507/x508));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x509 = -1;
	int32_t x510 = -55573;
	int64_t x511 = INT64_MIN;
	volatile int32_t t119 = 20356498;

    t119 = ((x509>x510)!=(x511/x512));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x513 = 3757U;
	uint16_t x515 = 7860U;
	volatile int32_t x516 = INT32_MIN;
	volatile int32_t t120 = 8;

    t120 = ((x513>x514)!=(x515/x516));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x517 = -1;
	volatile uint64_t x518 = UINT64_MAX;
	volatile int64_t x520 = 326815LL;
	int32_t t121 = -269907;

    t121 = ((x517>x518)!=(x519/x520));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x521 = INT32_MIN;
	volatile int16_t x523 = -1;
	static int32_t x524 = -6567826;
	static volatile int32_t t122 = -159271;

    t122 = ((x521>x522)!=(x523/x524));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x525 = INT8_MIN;
	uint32_t x526 = UINT32_MAX;
	volatile int8_t x528 = INT8_MIN;

    t123 = ((x525>x526)!=(x527/x528));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x530 = INT16_MIN;
	static int8_t x531 = -1;
	int16_t x532 = -1;
	volatile int32_t t124 = -14409;

    t124 = ((x529>x530)!=(x531/x532));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint64_t x533 = UINT64_MAX;
	int8_t x534 = -2;
	static uint32_t x535 = 558144683U;
	int32_t t125 = -52471;

    t125 = ((x533>x534)!=(x535/x536));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x541 = 1229074862457LLU;
	int16_t x542 = 0;
	volatile int8_t x543 = INT8_MIN;
	static volatile int32_t t126 = -1528168;

    t126 = ((x541>x542)!=(x543/x544));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x545 = INT64_MIN;
	int64_t x546 = -1LL;
	uint32_t x547 = 120187967U;
	volatile uint32_t x548 = 42979872U;
	volatile int32_t t127 = 0;

    t127 = ((x545>x546)!=(x547/x548));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x549 = 7U;
	int32_t x552 = -1;
	volatile int32_t t128 = 78554;

    t128 = ((x549>x550)!=(x551/x552));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x553 = INT8_MAX;
	int64_t x554 = INT64_MIN;
	static uint16_t x555 = 472U;
	int8_t x556 = -18;
	volatile int32_t t129 = -45144;

    t129 = ((x553>x554)!=(x555/x556));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x557 = -1LL;
	int8_t x558 = 39;
	int8_t x559 = INT8_MIN;
	int32_t x560 = INT32_MIN;
	int32_t t130 = 4868934;

    t130 = ((x557>x558)!=(x559/x560));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x562 = INT64_MAX;
	int16_t x563 = INT16_MIN;
	uint16_t x564 = 171U;
	int32_t t131 = 81463051;

    t131 = ((x561>x562)!=(x563/x564));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x565 = INT8_MIN;
	static volatile int8_t x566 = 1;
	int8_t x568 = INT8_MIN;

    t132 = ((x565>x566)!=(x567/x568));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x573 = INT16_MIN;
	int16_t x576 = INT16_MIN;
	int32_t t133 = 7507;

    t133 = ((x573>x574)!=(x575/x576));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x577 = -598586LL;
	static int32_t x578 = -235481598;
	volatile int32_t t134 = 13;

    t134 = ((x577>x578)!=(x579/x580));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x581 = 220U;
	static int64_t x582 = -4050LL;
	uint32_t x584 = UINT32_MAX;
	static volatile int32_t t135 = 0;

    t135 = ((x581>x582)!=(x583/x584));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x585 = 107U;
	uint16_t x586 = 3398U;
	volatile int32_t t136 = 1;

    t136 = ((x585>x586)!=(x587/x588));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x589 = INT16_MAX;
	int16_t x590 = 3;
	static uint16_t x591 = 88U;
	int8_t x592 = -1;
	static int32_t t137 = 619756;

    t137 = ((x589>x590)!=(x591/x592));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x593 = 54094989U;
	int16_t x594 = 0;
	int16_t x595 = -1;
	uint64_t x596 = 1271115LLU;
	volatile int32_t t138 = 19;

    t138 = ((x593>x594)!=(x595/x596));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x598 = 24614LLU;
	int64_t x599 = INT64_MIN;
	static volatile int8_t x600 = 5;
	int32_t t139 = -840102686;

    t139 = ((x597>x598)!=(x599/x600));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x601 = 2U;
	static int64_t x602 = -1LL;
	int32_t x603 = INT32_MIN;
	int32_t t140 = -1483;

    t140 = ((x601>x602)!=(x603/x604));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x605 = INT8_MAX;
	int32_t x606 = -1;
	uint16_t x607 = 4716U;
	int16_t x608 = 14;
	static int32_t t141 = -27;

    t141 = ((x605>x606)!=(x607/x608));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x612 = INT64_MAX;
	volatile int32_t t142 = -6;

    t142 = ((x609>x610)!=(x611/x612));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x613 = 4U;
	uint32_t x614 = 485690885U;
	static volatile int8_t x616 = -14;
	int32_t t143 = 270;

    t143 = ((x613>x614)!=(x615/x616));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x617 = 12620113615951282LL;
	int64_t x618 = -4333682LL;
	uint16_t x619 = 59U;
	int64_t x620 = -1LL;
	volatile int32_t t144 = -62176978;

    t144 = ((x617>x618)!=(x619/x620));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x625 = INT64_MAX;
	uint8_t x626 = 68U;
	int8_t x627 = INT8_MAX;
	int64_t x628 = 3885882LL;
	int32_t t145 = -6694;

    t145 = ((x625>x626)!=(x627/x628));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x629 = -955168243LL;
	int16_t x630 = INT16_MIN;
	uint64_t x631 = 55039716703935LLU;
	int64_t x632 = -897569LL;
	int32_t t146 = 3944;

    t146 = ((x629>x630)!=(x631/x632));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x635 = -1;
	volatile int16_t x636 = INT16_MIN;
	volatile int32_t t147 = 7;

    t147 = ((x633>x634)!=(x635/x636));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x638 = INT32_MAX;
	int16_t x640 = 1;
	volatile int32_t t148 = 39430;

    t148 = ((x637>x638)!=(x639/x640));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x642 = -1150;
	volatile int16_t x643 = 29;
	volatile uint8_t x644 = 1U;
	int32_t t149 = -19;

    t149 = ((x641>x642)!=(x643/x644));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x645 = INT64_MIN;
	volatile int32_t x646 = INT32_MAX;
	static volatile int32_t t150 = -1;

    t150 = ((x645>x646)!=(x647/x648));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x650 = INT8_MIN;
	int32_t t151 = 3391650;

    t151 = ((x649>x650)!=(x651/x652));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x653 = 23409U;
	int32_t x655 = -1;
	uint64_t x656 = 1425202809945162LLU;
	static volatile int32_t t152 = -15865;

    t152 = ((x653>x654)!=(x655/x656));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x658 = -908631366870017730LL;
	int32_t x659 = INT32_MAX;
	static uint8_t x660 = 5U;
	int32_t t153 = 17683;

    t153 = ((x657>x658)!=(x659/x660));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x661 = 31LL;
	int64_t x662 = INT64_MAX;
	static uint32_t x664 = 179636431U;
	int32_t t154 = 1095;

    t154 = ((x661>x662)!=(x663/x664));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x665 = -1;
	volatile int32_t x666 = INT32_MAX;
	uint32_t x667 = 33341292U;
	int16_t x668 = -1;
	int32_t t155 = 0;

    t155 = ((x665>x666)!=(x667/x668));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x670 = INT64_MIN;
	int8_t x671 = -1;
	volatile int32_t t156 = 1;

    t156 = ((x669>x670)!=(x671/x672));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x673 = 30U;
	uint32_t x674 = 2495U;
	volatile uint32_t x675 = 505750U;
	volatile int32_t t157 = 120;

    t157 = ((x673>x674)!=(x675/x676));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x677 = UINT8_MAX;
	volatile uint32_t x679 = UINT32_MAX;
	volatile int32_t t158 = -2050153;

    t158 = ((x677>x678)!=(x679/x680));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x681 = -1LL;
	int32_t x682 = INT32_MAX;
	int16_t x683 = INT16_MIN;
	static int8_t x684 = INT8_MAX;
	int32_t t159 = -186386;

    t159 = ((x681>x682)!=(x683/x684));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x685 = 16379454U;
	int64_t x687 = -1LL;
	volatile int32_t t160 = -54;

    t160 = ((x685>x686)!=(x687/x688));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x690 = 5585876;
	int64_t x692 = -1LL;
	int32_t t161 = -968527338;

    t161 = ((x689>x690)!=(x691/x692));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x693 = UINT32_MAX;
	int32_t x694 = INT32_MIN;
	int8_t x695 = 7;
	static volatile int32_t x696 = -1;
	int32_t t162 = 2904974;

    t162 = ((x693>x694)!=(x695/x696));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x697 = UINT8_MAX;
	volatile int8_t x698 = INT8_MIN;
	int32_t x699 = INT32_MIN;
	volatile int32_t t163 = 7;

    t163 = ((x697>x698)!=(x699/x700));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x701 = UINT32_MAX;
	int16_t x703 = INT16_MIN;
	uint32_t x704 = 3U;
	volatile int32_t t164 = -813;

    t164 = ((x701>x702)!=(x703/x704));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x706 = INT64_MAX;
	uint16_t x707 = 14621U;
	int32_t t165 = 48374442;

    t165 = ((x705>x706)!=(x707/x708));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x711 = INT64_MIN;
	volatile uint32_t x712 = UINT32_MAX;
	static volatile int32_t t166 = 12;

    t166 = ((x709>x710)!=(x711/x712));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x713 = 7817U;
	int8_t x714 = -1;
	int64_t x715 = INT64_MIN;
	int8_t x716 = INT8_MAX;
	volatile int32_t t167 = -1245556;

    t167 = ((x713>x714)!=(x715/x716));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x717 = 54246621628154187LL;
	int16_t x718 = 0;
	int16_t x719 = 140;
	volatile int32_t x720 = -3050;
	static volatile int32_t t168 = 6893;

    t168 = ((x717>x718)!=(x719/x720));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x721 = INT32_MAX;
	int8_t x722 = 37;
	uint16_t x723 = 3372U;
	static int16_t x724 = INT16_MIN;
	static volatile int32_t t169 = -408496;

    t169 = ((x721>x722)!=(x723/x724));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x725 = 0U;
	uint32_t x726 = 12224U;
	static uint32_t x727 = UINT32_MAX;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t170 = -2;

    t170 = ((x725>x726)!=(x727/x728));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x729 = INT8_MAX;
	int16_t x730 = -109;
	int64_t x731 = 1852002829273216054LL;
	volatile int16_t x732 = INT16_MAX;
	volatile int32_t t171 = -123;

    t171 = ((x729>x730)!=(x731/x732));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x733 = INT32_MIN;
	static uint32_t x734 = 551252975U;
	uint32_t x735 = 2578U;
	int64_t x736 = INT64_MIN;
	volatile int32_t t172 = 1;

    t172 = ((x733>x734)!=(x735/x736));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x737 = 79U;
	volatile int32_t x739 = 13;
	uint32_t x740 = UINT32_MAX;

    t173 = ((x737>x738)!=(x739/x740));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x742 = 4U;
	uint64_t x743 = 143085995360847713LLU;
	static uint8_t x744 = UINT8_MAX;
	volatile int32_t t174 = -54;

    t174 = ((x741>x742)!=(x743/x744));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x745 = UINT16_MAX;
	static int8_t x746 = INT8_MAX;
	static int8_t x747 = 12;
	uint16_t x748 = 3U;

    t175 = ((x745>x746)!=(x747/x748));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x749 = -5;
	int64_t x750 = INT64_MIN;
	uint64_t x751 = 33839LLU;
	uint8_t x752 = UINT8_MAX;
	static volatile int32_t t176 = -1;

    t176 = ((x749>x750)!=(x751/x752));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x753 = UINT64_MAX;
	uint16_t x754 = 2645U;
	volatile int16_t x755 = INT16_MIN;
	int32_t x756 = -1;
	volatile int32_t t177 = 107979;

    t177 = ((x753>x754)!=(x755/x756));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x757 = INT32_MAX;
	uint32_t x758 = 9889U;
	int16_t x759 = -1;
	static volatile int32_t t178 = -6;

    t178 = ((x757>x758)!=(x759/x760));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x762 = -1;
	int8_t x763 = INT8_MIN;
	uint32_t x764 = 45439518U;
	volatile int32_t t179 = -9401283;

    t179 = ((x761>x762)!=(x763/x764));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x765 = 3554958709220308LL;
	int64_t x767 = -1LL;
	volatile int32_t t180 = 309;

    t180 = ((x765>x766)!=(x767/x768));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x769 = -1;
	int16_t x770 = INT16_MAX;
	volatile int8_t x771 = INT8_MIN;
	static uint64_t x772 = 35LLU;
	int32_t t181 = 2;

    t181 = ((x769>x770)!=(x771/x772));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x773 = 0;
	int16_t x774 = -1;
	int8_t x776 = INT8_MIN;
	int32_t t182 = 89018;

    t182 = ((x773>x774)!=(x775/x776));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	int8_t x778 = -1;
	uint64_t x780 = UINT64_MAX;
	int32_t t183 = -101053638;

    t183 = ((x777>x778)!=(x779/x780));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x781 = 1392U;
	uint16_t x782 = 20770U;
	volatile int8_t x783 = 1;
	int32_t t184 = -2267051;

    t184 = ((x781>x782)!=(x783/x784));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x785 = 379872856U;
	static int8_t x786 = -13;
	int16_t x787 = INT16_MIN;
	static volatile int64_t x788 = INT64_MIN;
	volatile int32_t t185 = 79398;

    t185 = ((x785>x786)!=(x787/x788));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x789 = 41399576U;
	volatile int32_t x790 = INT32_MIN;
	static volatile uint32_t x791 = UINT32_MAX;
	int32_t x792 = INT32_MIN;
	static volatile int32_t t186 = -145382339;

    t186 = ((x789>x790)!=(x791/x792));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x793 = -1;
	volatile int64_t x794 = -1LL;
	uint64_t x795 = UINT64_MAX;
	static int16_t x796 = INT16_MIN;
	int32_t t187 = 0;

    t187 = ((x793>x794)!=(x795/x796));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = 91;
	int16_t x803 = INT16_MIN;
	static int32_t x804 = INT32_MAX;
	int32_t t188 = 846599;

    t188 = ((x801>x802)!=(x803/x804));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x805 = 0U;
	int64_t x806 = INT64_MIN;
	int16_t x807 = INT16_MIN;

    t189 = ((x805>x806)!=(x807/x808));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x809 = INT32_MAX;
	int32_t x810 = -420234;
	int32_t x811 = INT32_MIN;
	int32_t x812 = INT32_MIN;
	static volatile int32_t t190 = -24734;

    t190 = ((x809>x810)!=(x811/x812));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x813 = INT64_MIN;
	int8_t x815 = INT8_MIN;
	int32_t x816 = -1;
	volatile int32_t t191 = 257181027;

    t191 = ((x813>x814)!=(x815/x816));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x817 = -7LL;
	int32_t x819 = -1;
	int32_t x820 = INT32_MAX;

    t192 = ((x817>x818)!=(x819/x820));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x821 = UINT16_MAX;
	int32_t x822 = INT32_MAX;
	uint8_t x823 = 1U;
	int16_t x824 = INT16_MIN;
	int32_t t193 = 312;

    t193 = ((x821>x822)!=(x823/x824));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x826 = INT32_MIN;
	int32_t x827 = INT32_MAX;
	volatile uint8_t x828 = 1U;
	int32_t t194 = -2;

    t194 = ((x825>x826)!=(x827/x828));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x830 = UINT16_MAX;
	int64_t x831 = -36135310275135777LL;
	int16_t x832 = -7;

    t195 = ((x829>x830)!=(x831/x832));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x833 = INT8_MIN;
	uint64_t x834 = 64067975LLU;
	int16_t x835 = INT16_MAX;
	static int64_t x836 = INT64_MIN;
	volatile int32_t t196 = -49670413;

    t196 = ((x833>x834)!=(x835/x836));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x837 = 11341154452541LL;
	volatile int64_t x838 = INT64_MIN;
	int32_t x839 = INT32_MIN;
	volatile uint64_t x840 = UINT64_MAX;
	volatile int32_t t197 = -218;

    t197 = ((x837>x838)!=(x839/x840));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x846 = -13041481;
	uint32_t x847 = UINT32_MAX;
	static int8_t x848 = INT8_MIN;
	volatile int32_t t198 = 7291036;

    t198 = ((x845>x846)!=(x847/x848));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x849 = 418;
	int32_t x850 = INT32_MIN;
	int16_t x851 = 0;
	volatile int32_t t199 = 13141;

    t199 = ((x849>x850)!=(x851/x852));

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

