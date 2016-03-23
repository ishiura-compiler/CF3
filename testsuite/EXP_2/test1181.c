
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

static volatile int8_t x2 = INT8_MIN;
uint32_t x3 = 86495U;
int16_t x6 = INT16_MIN;
volatile uint32_t x8 = UINT32_MAX;
int32_t x12 = -426195;
volatile int32_t t2 = -2393;
uint64_t x16 = UINT64_MAX;
int64_t x18 = INT64_MIN;
int16_t x27 = INT16_MIN;
volatile int16_t x28 = 14525;
uint64_t t5 = 527436168509636326LLU;
uint64_t x31 = 16LLU;
static int8_t x33 = -1;
int64_t x34 = 1753324108924LL;
int64_t t7 = -13458645983271034LL;
uint16_t x37 = 11177U;
static int32_t x45 = -59055;
volatile int32_t x52 = -8568;
int32_t x62 = -1;
static int32_t x66 = -1038;
uint64_t x69 = UINT64_MAX;
uint32_t x72 = 488995928U;
uint64_t t16 = 723LLU;
static volatile int32_t t18 = -696;
int32_t t19 = -5;
int64_t x88 = 70LL;
int16_t x90 = INT16_MIN;
uint16_t x92 = UINT16_MAX;
int64_t x101 = 1584801837LL;
int64_t x106 = INT64_MIN;
int64_t x108 = INT64_MAX;
static int64_t x109 = -6905LL;
int32_t t28 = 94589226;
int32_t x121 = -1126;
volatile int16_t x122 = INT16_MIN;
int32_t x127 = INT32_MAX;
int16_t x128 = -20;
int64_t x131 = -1LL;
volatile uint64_t x132 = UINT64_MAX;
uint64_t t33 = 13LLU;
volatile int64_t x144 = -3972LL;
int32_t x145 = -1;
volatile uint16_t x153 = 611U;
uint32_t x157 = 689336268U;
int32_t x161 = 1982709;
static volatile uint64_t x165 = UINT64_MAX;
uint16_t x169 = UINT16_MAX;
int32_t x174 = INT32_MAX;
int64_t x179 = 3274LL;
volatile int8_t x184 = -5;
int32_t t44 = -471;
uint8_t x187 = 35U;
int32_t x188 = 50372919;
int32_t t47 = -431061;
int32_t t50 = 108941;
int32_t x216 = 2615;
uint64_t x221 = 1702043818241147963LLU;
static uint8_t x223 = UINT8_MAX;
static uint16_t x227 = UINT16_MAX;
static int16_t x236 = INT16_MIN;
volatile int32_t t57 = -18325;
int64_t x245 = 293424436535244931LL;
static int16_t x251 = -1801;
int16_t x255 = INT16_MAX;
int8_t x257 = INT8_MIN;
uint16_t x259 = 118U;
volatile int32_t t63 = 14;
volatile int32_t t64 = -596545942;
int32_t x272 = INT32_MIN;
static volatile int32_t t65 = -225991069;
volatile int32_t t69 = 1106;
int32_t x300 = 841535;
volatile int16_t x303 = INT16_MIN;
int64_t x304 = -1LL;
int16_t x306 = -9;
int64_t x314 = -182LL;
uint64_t x320 = 1340050421592825834LLU;
uint64_t x325 = 3048154LLU;
volatile uint64_t t77 = 1580557985172548190LLU;
uint32_t x333 = 717225839U;
int8_t x334 = INT8_MAX;
volatile int64_t x336 = -1LL;
volatile int64_t t79 = -155LL;
int64_t x338 = -1LL;
uint64_t x339 = 11430957012867775LLU;
static uint16_t x340 = UINT16_MAX;
int32_t x342 = INT32_MIN;
int32_t x348 = INT32_MIN;
int32_t x351 = 0;
int64_t x359 = 852546LL;
volatile int32_t t85 = -94295;
uint16_t x361 = UINT16_MAX;
uint16_t x362 = 4946U;
int32_t t86 = -765;
uint32_t x366 = UINT32_MAX;
volatile uint64_t t88 = 252721LLU;
volatile int16_t x374 = INT16_MIN;
uint32_t x396 = 19664485U;
static volatile int64_t x399 = INT64_MIN;
int32_t x409 = INT32_MIN;
volatile int8_t x411 = 0;
static uint8_t x412 = UINT8_MAX;
int8_t x416 = -1;
uint16_t x420 = UINT16_MAX;
int32_t t100 = -2074713;
int64_t x426 = -96LL;
static int32_t t103 = -63987;
static int32_t t104 = -3817;
int8_t x447 = -1;
int8_t x453 = INT8_MIN;
uint16_t x463 = UINT16_MAX;
int8_t x464 = -1;
volatile uint64_t x477 = 59LLU;
int8_t x479 = 49;
volatile int32_t x483 = -530;
int32_t x487 = INT32_MIN;
volatile int32_t t116 = 13845;
int32_t t117 = 23756;
static volatile int32_t t119 = 109229663;
int32_t x507 = -19;
volatile uint64_t t120 = 358677324LLU;
int32_t x509 = INT32_MIN;
static int64_t x514 = -1LL;
volatile uint16_t x517 = 28U;
uint64_t x521 = UINT64_MAX;
int16_t x525 = 3;
int8_t x531 = INT8_MAX;
volatile uint16_t x538 = UINT16_MAX;
static volatile uint16_t x539 = 3U;
volatile int64_t t130 = 832710LL;
uint8_t x551 = 111U;
volatile uint8_t x555 = 14U;
static int16_t x557 = INT16_MIN;
int32_t x561 = -22193;
int64_t x563 = -356536264884284LL;
uint8_t x564 = UINT8_MAX;
uint32_t x570 = 1295920U;
int8_t x572 = -1;
uint16_t x573 = 0U;
int64_t x582 = -4734146432416634LL;
volatile uint16_t x585 = 152U;
volatile int32_t x589 = INT32_MIN;
volatile uint64_t x590 = UINT64_MAX;
int8_t x592 = -1;
static uint32_t t142 = 63U;
int16_t x604 = -10;
uint16_t x612 = 24253U;
volatile int32_t t145 = -278;
static int16_t x613 = INT16_MIN;
int8_t x616 = INT8_MIN;
static int16_t x618 = 1770;
int32_t x621 = INT32_MIN;
int16_t x622 = INT16_MAX;
int16_t x623 = INT16_MIN;
int64_t x636 = -1LL;
static int64_t t150 = 69337481103652LL;
int32_t x640 = -24153324;
uint64_t x643 = 148LLU;
int8_t x647 = INT8_MAX;
int64_t x649 = INT64_MIN;
uint32_t t155 = 124U;
int32_t x659 = -7;
int64_t t157 = 33294155LL;
volatile uint16_t x668 = UINT16_MAX;
int16_t x671 = INT16_MIN;
int64_t x675 = INT64_MIN;
uint64_t x676 = 683LLU;
int16_t x677 = -69;
volatile int64_t x682 = INT64_MIN;
static int32_t x690 = -1;
uint16_t x692 = 7266U;
volatile uint8_t x695 = 0U;
volatile int8_t x698 = -23;
volatile uint16_t x701 = 32U;
uint32_t x703 = 138U;
static volatile int64_t x712 = -69195561LL;
static volatile uint32_t x719 = UINT32_MAX;
int8_t x726 = INT8_MIN;
static int16_t x727 = INT16_MAX;
int64_t x731 = -22205928212974LL;
static int32_t x732 = INT32_MIN;
uint16_t x733 = UINT16_MAX;
uint16_t x739 = UINT16_MAX;
volatile uint16_t x743 = 216U;
uint32_t x744 = UINT32_MAX;
uint16_t x749 = UINT16_MAX;
uint16_t x750 = 29477U;
static int64_t x751 = INT64_MIN;
volatile int32_t t177 = 4826457;
int8_t x753 = 30;
volatile uint8_t x758 = UINT8_MAX;
static int64_t x771 = -65540LL;
uint32_t x777 = 3818U;
int16_t x780 = INT16_MAX;
static uint32_t t182 = 2109303U;
volatile int32_t x781 = 10840;
int16_t x783 = INT16_MIN;
volatile uint32_t t183 = 92U;
int16_t x789 = INT16_MIN;
volatile int64_t x795 = -631592163269LL;
uint64_t x804 = 4165906230LLU;
static int64_t t189 = 145656087LL;
volatile int16_t x813 = 21;
uint8_t x815 = 3U;
int64_t x818 = -1LL;
uint64_t x820 = 30253922224787LLU;
volatile uint16_t x821 = 670U;
int16_t x824 = INT16_MAX;
static uint64_t x828 = 546025942158LLU;
uint64_t x830 = 2350212616099873LLU;
static int32_t t196 = -6;
int64_t x840 = -1LL;
static uint32_t x845 = 104U;
uint64_t x848 = 49681LLU;
uint64_t t199 = 974192252LLU;


void f0(void) {
    	uint32_t x1 = 38U;
	static int64_t x4 = INT64_MIN;
	int64_t t0 = 3887888423054891573LL;

    t0 = ((x1+(x2!=x3))%x4);

    if (t0 != 39LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int64_t x7 = -1LL;
	static uint32_t t1 = 7U;

    t1 = ((x5+(x6!=x7))%x8);

    if (t1 != 4294967169U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 127U;
	static int16_t x10 = INT16_MAX;
	uint32_t x11 = 0U;

    t2 = ((x9+(x10!=x11))%x12);

    if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 80U;
	int8_t x15 = INT8_MAX;
	static volatile uint64_t t3 = 426LLU;

    t3 = ((x13+(x14!=x15))%x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x17 = INT64_MIN;
	int32_t x19 = -1;
	int64_t x20 = INT64_MIN;
	int64_t t4 = 5969657630458384LL;

    t4 = ((x17+(x18!=x19))%x20);

    if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = UINT64_MAX;
	volatile int16_t x26 = -1;

    t5 = ((x25+(x26!=x27))%x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = 67657241690265LL;
	static uint16_t x30 = 1U;
	uint8_t x32 = 12U;
	volatile int64_t t6 = 1496LL;

    t6 = ((x29+(x30!=x31))%x32);

    if (t6 != 10LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x35 = 45422;
	int64_t x36 = 421190551LL;

    t7 = ((x33+(x34!=x35))%x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x38 = INT32_MIN;
	static volatile int64_t x39 = INT64_MIN;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t8 = 13U;

    t8 = ((x37+(x38!=x39))%x40);

    if (t8 != 11178U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x41 = UINT64_MAX;
	uint16_t x42 = 27449U;
	int32_t x43 = INT32_MIN;
	int64_t x44 = 370778583541323354LL;
	static volatile uint64_t t9 = 8LLU;

    t9 = ((x41+(x42!=x43))%x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x46 = 16012;
	int64_t x47 = INT64_MIN;
	volatile int16_t x48 = INT16_MAX;
	int32_t t10 = 471940817;

    t10 = ((x45+(x46!=x47))%x48);

    if (t10 != -26287) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	volatile uint8_t x50 = 25U;
	int64_t x51 = INT64_MIN;
	volatile uint32_t t11 = 34648067U;

    t11 = ((x49+(x50!=x51))%x52);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x53 = -1;
	static uint32_t x54 = 1256085U;
	uint32_t x55 = UINT32_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t12 = 20842697896LLU;

    t12 = ((x53+(x54!=x55))%x56);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = INT8_MAX;
	static int8_t x58 = INT8_MAX;
	uint16_t x59 = 3U;
	uint16_t x60 = 2785U;
	static int32_t t13 = 1;

    t13 = ((x57+(x58!=x59))%x60);

    if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = 495639152LLU;
	static uint32_t x63 = 2U;
	uint8_t x64 = UINT8_MAX;
	uint64_t t14 = 121227835561947334LLU;

    t14 = ((x61+(x62!=x63))%x64);

    if (t14 != 243LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x65 = -1;
	int16_t x67 = -1;
	volatile uint32_t x68 = UINT32_MAX;
	uint32_t t15 = 155070477U;

    t15 = ((x65+(x66!=x67))%x68);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x70 = UINT8_MAX;
	uint64_t x71 = UINT64_MAX;

    t16 = ((x69+(x70!=x71))%x72);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -4660;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MAX;
	static int32_t t17 = -10;

    t17 = ((x73+(x74!=x75))%x76);

    if (t17 != -4659) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = -1;
	volatile int64_t x78 = INT64_MIN;
	int16_t x79 = -1;
	int16_t x80 = -1;

    t18 = ((x77+(x78!=x79))%x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MIN;
	uint32_t x82 = 1940U;
	int32_t x83 = INT32_MAX;
	int32_t x84 = -1;

    t19 = ((x81+(x82!=x83))%x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 3426LLU;
	static uint64_t x86 = 206849LLU;
	volatile int16_t x87 = INT16_MAX;
	volatile uint64_t t20 = 31006373262LLU;

    t20 = ((x85+(x86!=x87))%x88);

    if (t20 != 67LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = UINT16_MAX;
	int8_t x91 = -26;
	volatile int32_t t21 = -10088622;

    t21 = ((x89+(x90!=x91))%x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 8U;
	int16_t x94 = -1;
	volatile int64_t x95 = INT64_MIN;
	uint8_t x96 = 52U;
	volatile int32_t t22 = 32217069;

    t22 = ((x93+(x94!=x95))%x96);

    if (t22 != 9) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 963U;
	int64_t x98 = 15394803133LL;
	volatile int64_t x99 = -1LL;
	int16_t x100 = INT16_MAX;
	uint32_t t23 = 4305858U;

    t23 = ((x97+(x98!=x99))%x100);

    if (t23 != 964U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x102 = INT16_MIN;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = -1;
	volatile int64_t t24 = -1206219852433969LL;

    t24 = ((x101+(x102!=x103))%x104);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -1;
	uint16_t x107 = 3U;
	volatile int64_t t25 = -686586486299545893LL;

    t25 = ((x105+(x106!=x107))%x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x110 = 1;
	static uint32_t x111 = 22868227U;
	uint16_t x112 = UINT16_MAX;
	static int64_t t26 = -3614208LL;

    t26 = ((x109+(x110!=x111))%x112);

    if (t26 != -6904LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 92022812U;
	int8_t x114 = INT8_MIN;
	volatile int32_t x115 = 5;
	int64_t x116 = INT64_MIN;
	int64_t t27 = 63851942212LL;

    t27 = ((x113+(x114!=x115))%x116);

    if (t27 != 92022813LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = 197;
	int32_t x118 = INT32_MIN;
	static volatile int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MIN;

    t28 = ((x117+(x118!=x119))%x120);

    if (t28 != 70) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t29 = -408329567;

    t29 = ((x121+(x122!=x123))%x124);

    if (t29 != -101) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = -1;
	static int8_t x126 = -2;
	static volatile int32_t t30 = -4;

    t30 = ((x125+(x126!=x127))%x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	volatile uint64_t t31 = 65211898968696302LLU;

    t31 = ((x129+(x130!=x131))%x132);

    if (t31 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = -1;

    t32 = ((x133+(x134!=x135))%x136);

    if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = UINT64_MAX;
	uint32_t x138 = UINT32_MAX;
	static int16_t x139 = INT16_MIN;
	int8_t x140 = INT8_MIN;

    t33 = ((x137+(x138!=x139))%x140);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x141 = 178766553632498LLU;
	int16_t x142 = -4;
	int64_t x143 = INT64_MIN;
	uint64_t t34 = 5828409361220909LLU;

    t34 = ((x141+(x142!=x143))%x144);

    if (t34 != 178766553632499LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x146 = 62146LLU;
	int8_t x147 = -2;
	static int8_t x148 = INT8_MAX;
	volatile int32_t t35 = 39807;

    t35 = ((x145+(x146!=x147))%x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = 114;
	int8_t x150 = -1;
	int32_t x151 = -1;
	int32_t x152 = INT32_MIN;
	volatile int32_t t36 = 17;

    t36 = ((x149+(x150!=x151))%x152);

    if (t36 != 114) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x154 = 38;
	static volatile int8_t x155 = INT8_MAX;
	volatile int32_t x156 = 150901445;
	volatile int32_t t37 = 74841;

    t37 = ((x153+(x154!=x155))%x156);

    if (t37 != 612) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x158 = 10U;
	int8_t x159 = INT8_MIN;
	volatile uint16_t x160 = 19U;
	volatile uint32_t t38 = 399U;

    t38 = ((x157+(x158!=x159))%x160);

    if (t38 != 5U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MAX;
	int32_t x164 = 1723970;
	int32_t t39 = 1;

    t39 = ((x161+(x162!=x163))%x164);

    if (t39 != 258740) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x166 = INT8_MAX;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -3222;
	volatile uint64_t t40 = 61130976709LLU;

    t40 = ((x165+(x166!=x167))%x168);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x170 = INT64_MIN;
	uint16_t x171 = 1U;
	static uint64_t x172 = 10258569741019120LLU;
	static uint64_t t41 = 34LLU;

    t41 = ((x169+(x170!=x171))%x172);

    if (t41 != 65536LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = INT8_MIN;
	volatile int16_t x175 = -1;
	int16_t x176 = -1;
	volatile int32_t t42 = 39638298;

    t42 = ((x173+(x174!=x175))%x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x177 = 113435012U;
	int16_t x178 = 506;
	static int32_t x180 = -1;
	volatile uint32_t t43 = 58U;

    t43 = ((x177+(x178!=x179))%x180);

    if (t43 != 113435013U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x181 = INT16_MIN;
	uint16_t x182 = 130U;
	static int16_t x183 = INT16_MIN;

    t44 = ((x181+(x182!=x183))%x184);

    if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = 585977LLU;
	int64_t x186 = INT64_MAX;
	uint64_t t45 = 118392027698340480LLU;

    t45 = ((x185+(x186!=x187))%x188);

    if (t45 != 585978LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x189 = 51U;
	int64_t x190 = INT64_MIN;
	volatile int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MAX;
	volatile int64_t t46 = 37725379855655LL;

    t46 = ((x189+(x190!=x191))%x192);

    if (t46 != 51LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x193 = INT8_MAX;
	static int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MAX;
	int16_t x196 = 347;

    t47 = ((x193+(x194!=x195))%x196);

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x197 = 219U;
	static int32_t x198 = -3458153;
	int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	uint32_t t48 = 2076U;

    t48 = ((x197+(x198!=x199))%x200);

    if (t48 != 220U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x201 = INT8_MIN;
	int32_t x202 = -1;
	int16_t x203 = INT16_MAX;
	int64_t x204 = -1LL;
	int64_t t49 = 549070813666408LL;

    t49 = ((x201+(x202!=x203))%x204);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = 0;
	static volatile int16_t x206 = INT16_MAX;
	int64_t x207 = INT64_MAX;
	volatile int32_t x208 = 38;

    t50 = ((x205+(x206!=x207))%x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = INT32_MIN;
	static int8_t x210 = 20;
	uint64_t x211 = 173LLU;
	volatile int16_t x212 = -58;
	volatile int32_t t51 = -31;

    t51 = ((x209+(x210!=x211))%x212);

    if (t51 != -7) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = -1;
	static int16_t x214 = INT16_MAX;
	volatile int64_t x215 = 233189394LL;
	volatile int32_t t52 = 6;

    t52 = ((x213+(x214!=x215))%x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = -1;
	int64_t x218 = -1LL;
	int8_t x219 = 43;
	uint32_t x220 = 72U;
	uint32_t t53 = 4U;

    t53 = ((x217+(x218!=x219))%x220);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x222 = 578U;
	static int32_t x224 = INT32_MIN;
	static uint64_t t54 = 0LLU;

    t54 = ((x221+(x222!=x223))%x224);

    if (t54 != 1702043818241147964LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = 766U;
	int8_t x226 = -1;
	volatile int8_t x228 = INT8_MAX;
	volatile int32_t t55 = 0;

    t55 = ((x225+(x226!=x227))%x228);

    if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	volatile uint32_t x235 = 94714U;
	int32_t t56 = -3146;

    t56 = ((x233+(x234!=x235))%x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x237 = INT16_MAX;
	int32_t x238 = 88220;
	static int8_t x239 = -1;
	int32_t x240 = 565537572;

    t57 = ((x237+(x238!=x239))%x240);

    if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x241 = -1;
	volatile uint8_t x242 = 12U;
	int32_t x243 = INT32_MIN;
	volatile int8_t x244 = 2;
	static int32_t t58 = 1340844;

    t58 = ((x241+(x242!=x243))%x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x246 = 3LL;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	int64_t t59 = 138385380823294LL;

    t59 = ((x245+(x246!=x247))%x248);

    if (t59 != 1813657732LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = -122908619739LL;
	uint32_t x250 = 29U;
	static volatile uint16_t x252 = UINT16_MAX;
	int64_t t60 = 10361443045LL;

    t60 = ((x249+(x250!=x251))%x252);

    if (t60 != -20963LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	volatile int8_t x256 = -1;
	int32_t t61 = -8;

    t61 = ((x253+(x254!=x255))%x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x258 = UINT32_MAX;
	int64_t x260 = INT64_MIN;
	int64_t t62 = 3788018535LL;

    t62 = ((x257+(x258!=x259))%x260);

    if (t62 != -127LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x261 = 2006U;
	int32_t x262 = INT32_MAX;
	uint16_t x263 = 43U;
	volatile int8_t x264 = -1;

    t63 = ((x261+(x262!=x263))%x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x265 = 2U;
	static int8_t x266 = INT8_MIN;
	uint32_t x267 = 0U;
	static int16_t x268 = -53;

    t64 = ((x265+(x266!=x267))%x268);

    if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x269 = 16U;
	uint64_t x270 = 10415030745486858LLU;
	volatile int8_t x271 = INT8_MIN;

    t65 = ((x269+(x270!=x271))%x272);

    if (t65 != 17) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	int8_t x274 = INT8_MIN;
	int32_t x275 = -1;
	uint32_t x276 = 610631U;
	static uint32_t t66 = 2995U;

    t66 = ((x273+(x274!=x275))%x276);

    if (t66 != 32768U) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x277 = 350475591103620LL;
	int16_t x278 = INT16_MIN;
	static int16_t x279 = -1;
	static uint64_t x280 = 100888985LLU;
	uint64_t t67 = 0LLU;

    t67 = ((x277+(x278!=x279))%x280);

    if (t67 != 70114716LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x285 = 2U;
	int32_t x286 = 0;
	uint32_t x287 = 73873U;
	int64_t x288 = -10602LL;
	int64_t t68 = -2484116969193LL;

    t68 = ((x285+(x286!=x287))%x288);

    if (t68 != 3LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x289 = 0;
	int8_t x290 = INT8_MAX;
	int8_t x291 = 0;
	uint8_t x292 = 28U;

    t69 = ((x289+(x290!=x291))%x292);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x293 = UINT16_MAX;
	uint8_t x294 = 7U;
	static volatile int16_t x295 = 451;
	uint8_t x296 = 52U;
	int32_t t70 = -28711;

    t70 = ((x293+(x294!=x295))%x296);

    if (t70 != 16) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x297 = 3U;
	static int32_t x298 = 408543404;
	static int64_t x299 = INT64_MAX;
	volatile int32_t t71 = 102134;

    t71 = ((x297+(x298!=x299))%x300);

    if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x301 = 939U;
	uint64_t x302 = UINT64_MAX;
	volatile int64_t t72 = -3194LL;

    t72 = ((x301+(x302!=x303))%x304);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x305 = 124189195919834307LLU;
	uint16_t x307 = 1080U;
	static int16_t x308 = -1;
	volatile uint64_t t73 = 1838601525LLU;

    t73 = ((x305+(x306!=x307))%x308);

    if (t73 != 124189195919834308LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x309 = -3;
	static int32_t x310 = INT32_MAX;
	int64_t x311 = -1LL;
	static volatile int32_t x312 = INT32_MAX;
	int32_t t74 = 115532849;

    t74 = ((x309+(x310!=x311))%x312);

    if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x313 = 288U;
	uint8_t x315 = 5U;
	static int8_t x316 = -28;
	volatile int32_t t75 = 300712388;

    t75 = ((x313+(x314!=x315))%x316);

    if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = 2;
	int8_t x318 = 47;
	int32_t x319 = -38;
	uint64_t t76 = 221162128LLU;

    t76 = ((x317+(x318!=x319))%x320);

    if (t76 != 3LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x326 = INT8_MIN;
	int8_t x327 = -5;
	static volatile uint64_t x328 = 229LLU;

    t77 = ((x325+(x326!=x327))%x328);

    if (t77 != 165LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x329 = UINT64_MAX;
	static volatile uint16_t x330 = 2U;
	static int64_t x331 = -1LL;
	uint32_t x332 = 1914609402U;
	volatile uint64_t t78 = 6618603403LLU;

    t78 = ((x329+(x330!=x331))%x332);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x335 = UINT16_MAX;

    t79 = ((x333+(x334!=x335))%x336);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x337 = 7;
	int32_t t80 = 256896441;

    t80 = ((x337+(x338!=x339))%x340);

    if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = -25;
	int16_t x343 = INT16_MIN;
	static volatile int32_t x344 = INT32_MIN;
	volatile int32_t t81 = -250;

    t81 = ((x341+(x342!=x343))%x344);

    if (t81 != -24) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x345 = 505;
	int8_t x346 = INT8_MAX;
	uint16_t x347 = UINT16_MAX;
	static volatile int32_t t82 = -2;

    t82 = ((x345+(x346!=x347))%x348);

    if (t82 != 506) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x349 = INT32_MIN;
	int64_t x350 = 47LL;
	static uint8_t x352 = 1U;
	static int32_t t83 = 2050056;

    t83 = ((x349+(x350!=x351))%x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x353 = 50U;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = 0LLU;
	static int64_t x356 = -6720211LL;
	int64_t t84 = -173543LL;

    t84 = ((x353+(x354!=x355))%x356);

    if (t84 != 51LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x357 = -1;
	uint32_t x358 = 6U;
	int8_t x360 = INT8_MAX;

    t85 = ((x357+(x358!=x359))%x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x363 = 0LL;
	static int16_t x364 = INT16_MIN;

    t86 = ((x361+(x362!=x363))%x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x365 = 3401U;
	int32_t x367 = -1;
	int16_t x368 = INT16_MIN;
	int32_t t87 = 889;

    t87 = ((x365+(x366!=x367))%x368);

    if (t87 != 3401) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x369 = 12218LLU;
	static uint16_t x370 = 1158U;
	uint32_t x371 = UINT32_MAX;
	static int32_t x372 = -33644;

    t88 = ((x369+(x370!=x371))%x372);

    if (t88 != 12219LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = 7;
	uint64_t x375 = UINT64_MAX;
	int8_t x376 = 1;
	static int32_t t89 = -12911680;

    t89 = ((x373+(x374!=x375))%x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x377 = INT8_MIN;
	static int16_t x378 = INT16_MIN;
	uint8_t x379 = UINT8_MAX;
	static uint32_t x380 = 802867020U;
	static uint32_t t90 = 764340570U;

    t90 = ((x377+(x378!=x379))%x380);

    if (t90 != 280632069U) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x381 = -1;
	uint32_t x382 = 4U;
	int8_t x383 = INT8_MAX;
	static int32_t x384 = -5;
	int32_t t91 = 944270405;

    t91 = ((x381+(x382!=x383))%x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x385 = 855315839824760LLU;
	uint64_t x386 = 5104454794194726LLU;
	volatile int32_t x387 = -62210592;
	volatile int16_t x388 = 333;
	volatile uint64_t t92 = 789783889189379304LLU;

    t92 = ((x385+(x386!=x387))%x388);

    if (t92 != 264LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	int16_t x392 = -4045;
	volatile int32_t t93 = -15887;

    t93 = ((x389+(x390!=x391))%x392);

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = 3;
	int64_t x394 = INT64_MAX;
	int16_t x395 = 1;
	volatile uint32_t t94 = 272030240U;

    t94 = ((x393+(x394!=x395))%x396);

    if (t94 != 4U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x397 = 2628826117688011173LL;
	int32_t x398 = INT32_MAX;
	int8_t x400 = INT8_MAX;
	volatile int64_t t95 = 1LL;

    t95 = ((x397+(x398!=x399))%x400);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x401 = 112U;
	int64_t x402 = INT64_MAX;
	static uint8_t x403 = 30U;
	static uint16_t x404 = 225U;
	volatile int32_t t96 = -869595793;

    t96 = ((x401+(x402!=x403))%x404);

    if (t96 != 113) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x405 = 3U;
	uint8_t x406 = 57U;
	uint32_t x407 = 1610326U;
	static int8_t x408 = INT8_MIN;
	int32_t t97 = 3;

    t97 = ((x405+(x406!=x407))%x408);

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x410 = 5698599LL;
	static int32_t t98 = -978498;

    t98 = ((x409+(x410!=x411))%x412);

    if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = INT32_MIN;
	int8_t x414 = INT8_MIN;
	static volatile int64_t x415 = INT64_MIN;
	int32_t t99 = -36448;

    t99 = ((x413+(x414!=x415))%x416);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x417 = 34U;
	volatile uint8_t x418 = 1U;
	int64_t x419 = -1LL;

    t100 = ((x417+(x418!=x419))%x420);

    if (t100 != 35) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x421 = INT8_MIN;
	volatile int64_t x422 = INT64_MIN;
	static int64_t x423 = INT64_MAX;
	int64_t x424 = INT64_MIN;
	int64_t t101 = -13745873465LL;

    t101 = ((x421+(x422!=x423))%x424);

    if (t101 != -127LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = -1;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t102 = -45;

    t102 = ((x425+(x426!=x427))%x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x429 = INT32_MIN;
	int16_t x430 = INT16_MAX;
	int8_t x431 = -1;
	static int8_t x432 = INT8_MIN;

    t103 = ((x429+(x430!=x431))%x432);

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x433 = 3U;
	uint64_t x434 = 1232218099867LLU;
	volatile int64_t x435 = INT64_MIN;
	int32_t x436 = 156;

    t104 = ((x433+(x434!=x435))%x436);

    if (t104 != 4) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x441 = 10712385764LLU;
	int64_t x442 = INT64_MAX;
	volatile int32_t x443 = 124;
	volatile int32_t x444 = -20751;
	static uint64_t t105 = 451LLU;

    t105 = ((x441+(x442!=x443))%x444);

    if (t105 != 10712385765LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = INT16_MIN;
	static uint32_t x446 = UINT32_MAX;
	volatile int8_t x448 = -1;
	volatile int32_t t106 = 30989;

    t106 = ((x445+(x446!=x447))%x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = -872;
	int8_t x450 = INT8_MAX;
	int64_t x451 = -21LL;
	static int8_t x452 = -1;
	volatile int32_t t107 = -333;

    t107 = ((x449+(x450!=x451))%x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x454 = INT32_MIN;
	int16_t x455 = INT16_MIN;
	static int16_t x456 = INT16_MIN;
	volatile int32_t t108 = -4;

    t108 = ((x453+(x454!=x455))%x456);

    if (t108 != -127) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x457 = -78;
	int8_t x458 = INT8_MIN;
	static volatile int64_t x459 = INT64_MIN;
	int64_t x460 = INT64_MIN;
	static volatile int64_t t109 = -104165896374235LL;

    t109 = ((x457+(x458!=x459))%x460);

    if (t109 != -77LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x461 = UINT8_MAX;
	uint16_t x462 = 3556U;
	int32_t t110 = 1050213215;

    t110 = ((x461+(x462!=x463))%x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = 2330;
	int16_t x466 = -168;
	int8_t x467 = 12;
	static volatile uint16_t x468 = UINT16_MAX;
	int32_t t111 = -831;

    t111 = ((x465+(x466!=x467))%x468);

    if (t111 != 2331) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = INT8_MIN;
	uint16_t x470 = UINT16_MAX;
	static int16_t x471 = INT16_MIN;
	int32_t x472 = 54;
	static volatile int32_t t112 = -60;

    t112 = ((x469+(x470!=x471))%x472);

    if (t112 != -19) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x473 = UINT8_MAX;
	static int64_t x474 = -1LL;
	int16_t x475 = INT16_MIN;
	int32_t x476 = INT32_MIN;
	volatile int32_t t113 = 19831;

    t113 = ((x473+(x474!=x475))%x476);

    if (t113 != 256) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x478 = INT8_MIN;
	int16_t x480 = INT16_MIN;
	static uint64_t t114 = 60052693977867853LLU;

    t114 = ((x477+(x478!=x479))%x480);

    if (t114 != 60LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x481 = INT16_MIN;
	volatile uint8_t x482 = 22U;
	int16_t x484 = 923;
	volatile int32_t t115 = 97425;

    t115 = ((x481+(x482!=x483))%x484);

    if (t115 != -462) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x485 = UINT16_MAX;
	int8_t x486 = INT8_MIN;
	int16_t x488 = -1;

    t116 = ((x485+(x486!=x487))%x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x493 = INT16_MIN;
	uint16_t x494 = 158U;
	int64_t x495 = -251465440585LL;
	static uint16_t x496 = 1U;

    t117 = ((x493+(x494!=x495))%x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x497 = INT16_MIN;
	volatile uint8_t x498 = 37U;
	int64_t x499 = -1LL;
	static volatile int32_t x500 = 2676;
	static volatile int32_t t118 = -3;

    t118 = ((x497+(x498!=x499))%x500);

    if (t118 != -655) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x501 = INT16_MIN;
	static volatile int16_t x502 = INT16_MAX;
	static int16_t x503 = INT16_MIN;
	int16_t x504 = INT16_MIN;

    t119 = ((x501+(x502!=x503))%x504);

    if (t119 != -32767) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x505 = 3142015422935630LLU;
	int64_t x506 = -296545347LL;
	uint32_t x508 = UINT32_MAX;

    t120 = ((x505+(x506!=x507))%x508);

    if (t120 != 2033507316LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x510 = -79;
	int16_t x511 = -1;
	int32_t x512 = INT32_MIN;
	volatile int32_t t121 = 359625;

    t121 = ((x509+(x510!=x511))%x512);

    if (t121 != -2147483647) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x513 = -26139085866170LL;
	uint16_t x515 = 815U;
	int8_t x516 = INT8_MIN;
	int64_t t122 = 4385737900LL;

    t122 = ((x513+(x514!=x515))%x516);

    if (t122 != -57LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x518 = INT32_MAX;
	uint16_t x519 = 7101U;
	int8_t x520 = -3;
	volatile int32_t t123 = -2;

    t123 = ((x517+(x518!=x519))%x520);

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x522 = INT16_MIN;
	uint32_t x523 = 52U;
	int8_t x524 = -1;
	volatile uint64_t t124 = 13115735013741LLU;

    t124 = ((x521+(x522!=x523))%x524);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x526 = INT64_MAX;
	int8_t x527 = -1;
	static uint8_t x528 = 13U;
	int32_t t125 = -13;

    t125 = ((x525+(x526!=x527))%x528);

    if (t125 != 4) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x529 = 3U;
	static uint8_t x530 = UINT8_MAX;
	uint16_t x532 = 41U;
	uint32_t t126 = 7045494U;

    t126 = ((x529+(x530!=x531))%x532);

    if (t126 != 4U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x533 = 57U;
	volatile int64_t x534 = INT64_MIN;
	int16_t x535 = INT16_MIN;
	uint16_t x536 = 11164U;
	static volatile int32_t t127 = -2190;

    t127 = ((x533+(x534!=x535))%x536);

    if (t127 != 58) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x537 = 1U;
	int32_t x540 = INT32_MIN;
	volatile int32_t t128 = 1;

    t128 = ((x537+(x538!=x539))%x540);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x541 = 3667744LLU;
	static volatile int8_t x542 = INT8_MIN;
	uint64_t x543 = 416LLU;
	volatile int8_t x544 = -1;
	volatile uint64_t t129 = 603720866271105877LLU;

    t129 = ((x541+(x542!=x543))%x544);

    if (t129 != 3667745LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x545 = 122U;
	uint64_t x546 = 293143LLU;
	static int8_t x547 = -1;
	static int64_t x548 = INT64_MAX;

    t130 = ((x545+(x546!=x547))%x548);

    if (t130 != 123LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x549 = INT32_MIN;
	int16_t x550 = -1;
	int64_t x552 = -5792LL;
	int64_t t131 = 64479008743LL;

    t131 = ((x549+(x550!=x551))%x552);

    if (t131 != -1183LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = INT16_MIN;
	static volatile uint16_t x554 = 5033U;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t132 = -257133634;

    t132 = ((x553+(x554!=x555))%x556);

    if (t132 != -32767) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x558 = -6836323LL;
	volatile uint32_t x559 = 362517U;
	static uint64_t x560 = 1464243136867LLU;
	uint64_t t133 = 48306318758506654LLU;

    t133 = ((x557+(x558!=x559))%x560);

    if (t133 != 1112933617735LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x562 = 0;
	int32_t t134 = -360;

    t134 = ((x561+(x562!=x563))%x564);

    if (t134 != -7) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x565 = 0U;
	uint8_t x566 = 6U;
	int8_t x567 = INT8_MIN;
	static int8_t x568 = INT8_MIN;
	volatile int32_t t135 = 267147704;

    t135 = ((x565+(x566!=x567))%x568);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x569 = -1;
	volatile int64_t x571 = INT64_MIN;
	static int32_t t136 = 378362;

    t136 = ((x569+(x570!=x571))%x572);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x574 = -1;
	int32_t x575 = -4;
	int32_t x576 = INT32_MIN;
	static int32_t t137 = 17225477;

    t137 = ((x573+(x574!=x575))%x576);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x577 = 12876796661LL;
	int64_t x578 = 62961037323765LL;
	int64_t x579 = INT64_MIN;
	static uint32_t x580 = 14755U;
	static int64_t t138 = -1126792981028LL;

    t138 = ((x577+(x578!=x579))%x580);

    if (t138 != 4877LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x581 = 10695034U;
	uint16_t x583 = 18211U;
	static uint32_t x584 = 114U;
	volatile uint32_t t139 = 0U;

    t139 = ((x581+(x582!=x583))%x584);

    if (t139 != 11U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x586 = INT16_MIN;
	int8_t x587 = 0;
	int8_t x588 = INT8_MAX;
	static volatile int32_t t140 = -339;

    t140 = ((x585+(x586!=x587))%x588);

    if (t140 != 26) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x591 = 11U;
	volatile int32_t t141 = -1;

    t141 = ((x589+(x590!=x591))%x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x597 = INT32_MIN;
	int16_t x598 = INT16_MIN;
	uint32_t x599 = UINT32_MAX;
	static uint32_t x600 = 51U;

    t142 = ((x597+(x598!=x599))%x600);

    if (t142 != 27U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x601 = 2U;
	int16_t x602 = INT16_MIN;
	volatile uint64_t x603 = 27052795LLU;
	int32_t t143 = -840043;

    t143 = ((x601+(x602!=x603))%x604);

    if (t143 != 3) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x605 = -1;
	static uint64_t x606 = 12LLU;
	uint64_t x607 = 31876815092103402LLU;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t144 = -65699270;

    t144 = ((x605+(x606!=x607))%x608);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x609 = -20;
	volatile int64_t x610 = INT64_MAX;
	int64_t x611 = INT64_MIN;

    t145 = ((x609+(x610!=x611))%x612);

    if (t145 != -19) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x614 = -1;
	volatile int32_t x615 = INT32_MIN;
	int32_t t146 = -429232288;

    t146 = ((x613+(x614!=x615))%x616);

    if (t146 != -127) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x617 = -1;
	int16_t x619 = 1;
	int64_t x620 = 2134408LL;
	volatile int64_t t147 = 176488283551821713LL;

    t147 = ((x617+(x618!=x619))%x620);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x624 = INT32_MIN;
	int32_t t148 = 118204;

    t148 = ((x621+(x622!=x623))%x624);

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x625 = INT8_MAX;
	volatile uint64_t x626 = UINT64_MAX;
	volatile int32_t x627 = -471;
	volatile int64_t x628 = 4093324710LL;
	int64_t t149 = 17111418867944221LL;

    t149 = ((x625+(x626!=x627))%x628);

    if (t149 != 128LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x633 = 40U;
	int32_t x634 = 67;
	int8_t x635 = INT8_MIN;

    t150 = ((x633+(x634!=x635))%x636);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x637 = 21U;
	int8_t x638 = INT8_MAX;
	volatile int32_t x639 = INT32_MIN;
	volatile int32_t t151 = 161299126;

    t151 = ((x637+(x638!=x639))%x640);

    if (t151 != 22) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = -1;
	int8_t x644 = -1;
	int32_t t152 = 74;

    t152 = ((x641+(x642!=x643))%x644);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x645 = -937269LL;
	int8_t x646 = 6;
	static uint64_t x648 = 1078071780LLU;
	uint64_t t153 = 0LLU;

    t153 = ((x645+(x646!=x647))%x648);

    if (t153 != 673525148LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x650 = UINT8_MAX;
	int64_t x651 = INT64_MIN;
	int32_t x652 = INT32_MIN;
	volatile int64_t t154 = -4616169LL;

    t154 = ((x649+(x650!=x651))%x652);

    if (t154 != -2147483647LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x653 = 1997716U;
	int32_t x654 = INT32_MAX;
	static int32_t x655 = 35;
	int8_t x656 = INT8_MIN;

    t155 = ((x653+(x654!=x655))%x656);

    if (t155 != 1997717U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x657 = 35250;
	int64_t x658 = INT64_MAX;
	int16_t x660 = -1;
	int32_t t156 = -3;

    t156 = ((x657+(x658!=x659))%x660);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x661 = 3538571774852695LL;
	volatile int16_t x662 = 1;
	int64_t x663 = -22584214130LL;
	volatile int8_t x664 = -5;

    t157 = ((x661+(x662!=x663))%x664);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x665 = INT64_MIN;
	static volatile int16_t x666 = -43;
	int64_t x667 = 26328LL;
	volatile int64_t t158 = -59339339628486LL;

    t158 = ((x665+(x666!=x667))%x668);

    if (t158 != -32767LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x669 = INT32_MIN;
	int8_t x670 = INT8_MIN;
	static int32_t x672 = INT32_MIN;
	int32_t t159 = -2779349;

    t159 = ((x669+(x670!=x671))%x672);

    if (t159 != -2147483647) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x673 = INT16_MIN;
	int16_t x674 = 1663;
	uint64_t t160 = 4508307123654LLU;

    t160 = ((x673+(x674!=x675))%x676);

    if (t160 != 188LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x678 = 1;
	uint8_t x679 = 35U;
	static int8_t x680 = -49;
	int32_t t161 = -3;

    t161 = ((x677+(x678!=x679))%x680);

    if (t161 != -19) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x681 = INT32_MIN;
	uint32_t x683 = 33476745U;
	static int8_t x684 = -1;
	volatile int32_t t162 = -202;

    t162 = ((x681+(x682!=x683))%x684);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x689 = UINT32_MAX;
	int16_t x691 = -1;
	volatile uint32_t t163 = 386301U;

    t163 = ((x689+(x690!=x691))%x692);

    if (t163 != 5631U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x693 = UINT16_MAX;
	volatile int8_t x694 = -41;
	int64_t x696 = INT64_MIN;
	static int64_t t164 = -779888LL;

    t164 = ((x693+(x694!=x695))%x696);

    if (t164 != 65536LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x697 = INT8_MIN;
	static int8_t x699 = INT8_MIN;
	volatile int16_t x700 = -96;
	volatile int32_t t165 = 0;

    t165 = ((x697+(x698!=x699))%x700);

    if (t165 != -31) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x702 = -1;
	volatile int32_t x704 = INT32_MIN;
	volatile int32_t t166 = 23219;

    t166 = ((x701+(x702!=x703))%x704);

    if (t166 != 33) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x705 = -1;
	int64_t x706 = -1LL;
	int32_t x707 = INT32_MAX;
	static uint16_t x708 = UINT16_MAX;
	volatile int32_t t167 = 4;

    t167 = ((x705+(x706!=x707))%x708);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = INT64_MIN;
	static int16_t x711 = -476;
	volatile int64_t t168 = 170423154092436984LL;

    t168 = ((x709+(x710!=x711))%x712);

    if (t168 != -32767LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x717 = UINT8_MAX;
	int8_t x718 = -1;
	uint32_t x720 = 849072819U;
	uint32_t t169 = 34730U;

    t169 = ((x717+(x718!=x719))%x720);

    if (t169 != 255U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x721 = UINT16_MAX;
	int32_t x722 = INT32_MIN;
	volatile int64_t x723 = -1LL;
	static int32_t x724 = INT32_MAX;
	volatile int32_t t170 = 3797710;

    t170 = ((x721+(x722!=x723))%x724);

    if (t170 != 65536) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x725 = INT64_MIN;
	static int8_t x728 = 5;
	int64_t t171 = 26858055LL;

    t171 = ((x725+(x726!=x727))%x728);

    if (t171 != -2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x729 = INT16_MIN;
	uint64_t x730 = 9LLU;
	static int32_t t172 = 0;

    t172 = ((x729+(x730!=x731))%x732);

    if (t172 != -32767) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x734 = INT32_MIN;
	int8_t x735 = INT8_MAX;
	uint64_t x736 = 2065208658506933LLU;
	static volatile uint64_t t173 = 24LLU;

    t173 = ((x733+(x734!=x735))%x736);

    if (t173 != 65536LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x737 = 1699U;
	uint8_t x738 = UINT8_MAX;
	int16_t x740 = 962;
	int32_t t174 = 857319;

    t174 = ((x737+(x738!=x739))%x740);

    if (t174 != 738) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x741 = -1;
	int8_t x742 = 0;
	volatile uint32_t t175 = 30578U;

    t175 = ((x741+(x742!=x743))%x744);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x745 = INT64_MIN;
	static volatile uint8_t x746 = 102U;
	uint16_t x747 = 2168U;
	int32_t x748 = INT32_MIN;
	static int64_t t176 = 852868797LL;

    t176 = ((x745+(x746!=x747))%x748);

    if (t176 != -2147483647LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x752 = -2277;

    t177 = ((x749+(x750!=x751))%x752);

    if (t177 != 1780) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x754 = INT8_MIN;
	static volatile int8_t x755 = -1;
	int32_t x756 = INT32_MIN;
	static int32_t t178 = 4064805;

    t178 = ((x753+(x754!=x755))%x756);

    if (t178 != 31) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x757 = 0U;
	int16_t x759 = -1;
	static int8_t x760 = INT8_MIN;
	volatile int32_t t179 = -35425;

    t179 = ((x757+(x758!=x759))%x760);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x761 = 20U;
	uint64_t x762 = 17500548063307LLU;
	int16_t x763 = INT16_MIN;
	volatile int16_t x764 = INT16_MIN;
	volatile uint32_t t180 = 2983U;

    t180 = ((x761+(x762!=x763))%x764);

    if (t180 != 21U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x769 = -1733364801825LL;
	static volatile uint32_t x770 = UINT32_MAX;
	uint16_t x772 = 75U;
	static int64_t t181 = -19044LL;

    t181 = ((x769+(x770!=x771))%x772);

    if (t181 != -74LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x778 = 0U;
	static volatile int32_t x779 = INT32_MIN;

    t182 = ((x777+(x778!=x779))%x780);

    if (t182 != 3819U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x782 = INT8_MIN;
	static uint32_t x784 = UINT32_MAX;

    t183 = ((x781+(x782!=x783))%x784);

    if (t183 != 10841U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x785 = INT8_MIN;
	static volatile int64_t x786 = -1LL;
	int16_t x787 = -11636;
	volatile int32_t x788 = INT32_MIN;
	static int32_t t184 = 49791;

    t184 = ((x785+(x786!=x787))%x788);

    if (t184 != -127) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x790 = INT16_MAX;
	static uint8_t x791 = 0U;
	int8_t x792 = INT8_MIN;
	static int32_t t185 = 108;

    t185 = ((x789+(x790!=x791))%x792);

    if (t185 != -127) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x793 = 1;
	static uint32_t x794 = 160962032U;
	volatile uint64_t x796 = UINT64_MAX;
	static volatile uint64_t t186 = 28159908291090463LLU;

    t186 = ((x793+(x794!=x795))%x796);

    if (t186 != 2LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x797 = INT16_MIN;
	uint16_t x798 = 994U;
	int16_t x799 = -1;
	volatile int64_t x800 = -1LL;
	int64_t t187 = -258968773893888LL;

    t187 = ((x797+(x798!=x799))%x800);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x801 = -1;
	static int8_t x802 = INT8_MAX;
	uint64_t x803 = UINT64_MAX;
	static uint64_t t188 = 4580173LLU;

    t188 = ((x801+(x802!=x803))%x804);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x805 = INT64_MIN;
	uint64_t x806 = 28LLU;
	uint64_t x807 = 3802871295LLU;
	volatile int8_t x808 = -1;

    t189 = ((x805+(x806!=x807))%x808);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x809 = 31598U;
	int8_t x810 = -3;
	int32_t x811 = INT32_MAX;
	int32_t x812 = 63325;
	volatile uint32_t t190 = 1372493684U;

    t190 = ((x809+(x810!=x811))%x812);

    if (t190 != 31599U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x814 = 583294826LLU;
	uint8_t x816 = UINT8_MAX;
	static volatile int32_t t191 = 301924724;

    t191 = ((x813+(x814!=x815))%x816);

    if (t191 != 22) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x817 = 11U;
	int8_t x819 = 0;
	volatile uint64_t t192 = 1352592100424499080LLU;

    t192 = ((x817+(x818!=x819))%x820);

    if (t192 != 12LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x822 = INT64_MIN;
	int16_t x823 = INT16_MIN;
	static int32_t t193 = 21;

    t193 = ((x821+(x822!=x823))%x824);

    if (t193 != 671) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x825 = INT32_MIN;
	volatile uint32_t x826 = 80U;
	int16_t x827 = -10;
	volatile uint64_t t194 = 285783843501354095LLU;

    t194 = ((x825+(x826!=x827))%x828);

    if (t194 != 211035372849LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x829 = 1U;
	int64_t x831 = -1LL;
	static int8_t x832 = INT8_MAX;
	int32_t t195 = 1018472;

    t195 = ((x829+(x830!=x831))%x832);

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x833 = INT16_MIN;
	int64_t x834 = -1LL;
	int64_t x835 = INT64_MIN;
	static int16_t x836 = -1;

    t196 = ((x833+(x834!=x835))%x836);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x837 = -1236;
	uint8_t x838 = UINT8_MAX;
	int64_t x839 = -1LL;
	static volatile int64_t t197 = -15758388LL;

    t197 = ((x837+(x838!=x839))%x840);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x841 = UINT16_MAX;
	static volatile int32_t x842 = -1;
	static int8_t x843 = -1;
	static uint32_t x844 = UINT32_MAX;
	volatile uint32_t t198 = 2092102U;

    t198 = ((x841+(x842!=x843))%x844);

    if (t198 != 65535U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x846 = INT32_MAX;
	static int32_t x847 = 0;

    t199 = ((x845+(x846!=x847))%x848);

    if (t199 != 105LLU) { NG(); } else { ; }
	
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

