
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

static volatile int64_t x2 = -1LL;
uint32_t x4 = 816387U;
int64_t x5 = -28045576273LL;
int8_t x9 = -1;
static uint16_t x12 = UINT16_MAX;
volatile int32_t t2 = -96006442;
int64_t t3 = -51006402603676881LL;
volatile int32_t t5 = 133775293;
static uint16_t x26 = 1U;
volatile int16_t x29 = INT16_MIN;
int32_t x41 = 82998;
static int64_t x46 = -1LL;
volatile uint64_t t14 = 62698LLU;
int32_t x65 = INT32_MIN;
uint32_t x66 = 471009899U;
volatile int16_t x68 = 0;
static volatile int16_t x74 = INT16_MIN;
static uint64_t x75 = 4970200685071374LLU;
int16_t x77 = -1;
int8_t x80 = INT8_MIN;
uint32_t x84 = 998747120U;
int64_t x89 = INT64_MAX;
int64_t x92 = -1LL;
volatile uint16_t x94 = 9U;
volatile int32_t t24 = -2321460;
int8_t x103 = INT8_MIN;
static int64_t x108 = INT64_MIN;
static volatile int32_t x119 = -1;
uint16_t x120 = UINT16_MAX;
int32_t x128 = 66553875;
int32_t t31 = 829;
int16_t x129 = INT16_MAX;
static int32_t x134 = -2461832;
int64_t x136 = 0LL;
int64_t x138 = -3540025589927LL;
int16_t x146 = 6;
uint64_t x152 = UINT64_MAX;
volatile int32_t t38 = 74855951;
volatile int32_t x161 = INT32_MIN;
int32_t x165 = INT32_MIN;
uint32_t x169 = 12192376U;
int64_t x180 = 464974815LL;
uint64_t x182 = 0LLU;
uint32_t x184 = UINT32_MAX;
volatile int32_t t46 = 14035;
int8_t x195 = 0;
volatile int64_t x198 = -1LL;
int32_t x201 = INT32_MIN;
uint8_t x208 = UINT8_MAX;
int32_t t52 = 1;
static int8_t x213 = INT8_MIN;
volatile int32_t t54 = -207687;
static volatile int64_t x228 = 1511071503805941LL;
uint8_t x232 = 4U;
int32_t x235 = 1396919;
static int32_t x241 = 942461873;
volatile int32_t t60 = 2020;
volatile int64_t t61 = 62584LL;
volatile int32_t x250 = 4139801;
static volatile uint64_t x252 = 3255491458252LLU;
int8_t x255 = INT8_MIN;
static int32_t x267 = INT32_MIN;
static int16_t x276 = INT16_MIN;
int64_t x288 = 85761408LL;
static int32_t x289 = -7774;
volatile int32_t x296 = -1;
uint64_t x301 = 1071745207636LLU;
int32_t x302 = -1;
volatile int32_t t76 = 2855;
volatile uint64_t x312 = 5795617111LLU;
int16_t x314 = INT16_MIN;
int64_t x315 = -11743LL;
uint32_t x319 = 24U;
int32_t x323 = 3420;
volatile int16_t x325 = -1;
static int64_t x328 = INT64_MIN;
int32_t x329 = -152;
int32_t x332 = INT32_MIN;
int32_t t83 = 8048;
volatile int64_t x347 = -3LL;
volatile int32_t t86 = 90847873;
int8_t x352 = 1;
int8_t x356 = -1;
int64_t x357 = INT64_MIN;
uint64_t x358 = 1195761309291992963LLU;
int8_t x373 = -13;
static int32_t x374 = INT32_MAX;
uint64_t x383 = 8300785LLU;
int32_t x384 = INT32_MIN;
int16_t x386 = -1;
static uint8_t x389 = 6U;
static int8_t x398 = INT8_MAX;
int8_t x403 = -11;
int8_t x405 = -1;
int16_t x409 = INT16_MIN;
volatile int64_t x413 = INT64_MIN;
static int64_t x422 = 107649424162097LL;
uint8_t x428 = UINT8_MAX;
volatile int32_t t106 = 0;
volatile uint16_t x436 = 9237U;
int16_t x438 = INT16_MIN;
int64_t x448 = INT64_MIN;
volatile int16_t x450 = INT16_MAX;
int64_t x452 = INT64_MIN;
volatile int8_t x457 = INT8_MIN;
int16_t x458 = INT16_MAX;
int32_t x464 = -1;
int32_t t116 = 1032985196;
int32_t t117 = -239126;
int8_t x473 = INT8_MIN;
int32_t t123 = 956329524;
static int8_t x505 = -1;
volatile int16_t x508 = -1;
int64_t x515 = 1LL;
int32_t x521 = -1;
volatile int8_t x524 = -1;
int16_t x525 = -1;
volatile int32_t x526 = -17;
uint8_t x529 = UINT8_MAX;
int8_t x534 = INT8_MIN;
int32_t x536 = INT32_MIN;
int32_t x541 = INT32_MAX;
int16_t x547 = INT16_MAX;
int32_t x557 = -1;
uint8_t x562 = 2U;
int32_t t141 = 311715557;
int8_t x569 = -15;
int32_t x570 = -13825;
static volatile int32_t t144 = 4039;
static volatile int32_t x611 = INT32_MIN;
int8_t x613 = INT8_MAX;
int64_t x628 = -1LL;
static uint64_t x631 = 256279965647846432LLU;
int32_t t157 = -360185;
static int64_t x636 = INT64_MIN;
static volatile int16_t x638 = INT16_MIN;
volatile int8_t x650 = INT8_MIN;
uint8_t x654 = UINT8_MAX;
uint8_t x655 = 29U;
volatile uint16_t x657 = UINT16_MAX;
int32_t t164 = -167473;
uint8_t x666 = 1U;
int64_t t166 = INT64_MIN;
uint64_t x682 = UINT64_MAX;
int64_t x685 = 6928885235LL;
static uint8_t x687 = UINT8_MAX;
int32_t x690 = INT32_MAX;
volatile int64_t t174 = -478LL;
volatile int64_t x702 = INT64_MAX;
uint64_t x703 = UINT64_MAX;
volatile int32_t t176 = 3811114;
volatile uint8_t x718 = UINT8_MAX;
int32_t x719 = INT32_MAX;
int32_t x722 = INT32_MIN;
int64_t x723 = INT64_MAX;
int16_t x727 = -48;
int32_t x734 = INT32_MIN;
int64_t x736 = INT64_MIN;
uint8_t x739 = 21U;
volatile int32_t t184 = -126057;
static int64_t x743 = INT64_MIN;
int8_t x744 = INT8_MIN;
int64_t t185 = 1131LL;
volatile int32_t x747 = INT32_MAX;
int8_t x748 = INT8_MAX;
volatile int64_t t189 = 107538472LL;
int8_t x763 = -1;
int64_t x771 = INT64_MIN;
int64_t t193 = 60LL;
uint16_t x778 = 348U;
uint8_t x788 = 10U;
static uint8_t x790 = 1U;


void f0(void) {
    	volatile int8_t x1 = -4;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = -1878111;

    t0 = (x1^(x2!=(x3!=x4)));

    if (t0 != -3) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MAX;
	int64_t t1 = 2699550076102055770LL;

    t1 = (x5^(x6!=(x7!=x8)));

    if (t1 != -28045576274LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = -10784069LL;
	volatile int8_t x11 = -1;

    t2 = (x9^(x10!=(x11!=x12)));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -474324761425LL;
	static uint8_t x14 = 29U;
	static int16_t x15 = INT16_MIN;
	static int64_t x16 = 254048817LL;

    t3 = (x13^(x14!=(x15!=x16)));

    if (t3 != -474324761426LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 427617;
	static uint8_t x18 = UINT8_MAX;
	volatile uint16_t x19 = 9U;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -234610012;

    t4 = (x17^(x18!=(x19!=x20)));

    if (t4 != 427616) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 95U;
	volatile int8_t x22 = 19;
	uint32_t x23 = 17U;
	int32_t x24 = INT32_MIN;

    t5 = (x21^(x22!=(x23!=x24)));

    if (t5 != 94) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 0;
	int32_t x27 = INT32_MIN;
	uint64_t x28 = 127762LLU;
	int32_t t6 = -71;

    t6 = (x25^(x26!=(x27!=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 1U;
	static int64_t x31 = -75LL;
	uint8_t x32 = 32U;
	int32_t t7 = -11484584;

    t7 = (x29^(x30!=(x31!=x32)));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	static uint16_t x34 = 625U;
	uint32_t x35 = 137607U;
	static int16_t x36 = -1;
	volatile int64_t t8 = -49217LL;

    t8 = (x33^(x34!=(x35!=x36)));

    if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	uint16_t x38 = 130U;
	uint16_t x39 = UINT16_MAX;
	uint32_t x40 = 88U;
	volatile int64_t t9 = 1833537850490155269LL;

    t9 = (x37^(x38!=(x39!=x40)));

    if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x42 = -1;
	int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MAX;
	int32_t t10 = -14377214;

    t10 = (x41^(x42!=(x43!=x44)));

    if (t10 != 82999) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x45 = UINT8_MAX;
	static int64_t x47 = -137058872972LL;
	static int64_t x48 = -128423646LL;
	int32_t t11 = -9;

    t11 = (x45^(x46!=(x47!=x48)));

    if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	volatile uint64_t x50 = UINT64_MAX;
	int8_t x51 = 5;
	int32_t x52 = -1;
	static uint32_t t12 = 6U;

    t12 = (x49^(x50!=(x51!=x52)));

    if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MAX;
	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -10254654693195227LL;
	volatile int32_t t13 = -1372;

    t13 = (x53^(x54!=(x55!=x56)));

    if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 26819641705LLU;
	static int8_t x58 = -1;
	static int8_t x59 = INT8_MIN;
	static uint64_t x60 = 45LLU;

    t14 = (x57^(x58!=(x59!=x60)));

    if (t14 != 26819641704LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x61 = UINT8_MAX;
	static uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	volatile uint32_t x64 = UINT32_MAX;
	int32_t t15 = 21580;

    t15 = (x61^(x62!=(x63!=x64)));

    if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x67 = 4U;
	int32_t t16 = -29;

    t16 = (x65^(x66!=(x67!=x68)));

    if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 62U;
	uint64_t x70 = 447713LLU;
	int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	volatile uint32_t t17 = 92U;

    t17 = (x69^(x70!=(x71!=x72)));

    if (t17 != 63U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 23;

    t18 = (x73^(x74!=(x75!=x76)));

    if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = -32;
	volatile uint8_t x79 = 2U;
	int32_t t19 = -20766;

    t19 = (x77^(x78!=(x79!=x80)));

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 157084;
	uint8_t x82 = 59U;
	volatile int8_t x83 = INT8_MIN;
	static int32_t t20 = 298064;

    t20 = (x81^(x82!=(x83!=x84)));

    if (t20 != 157085) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 60545206LLU;
	static int16_t x86 = INT16_MAX;
	int64_t x87 = 820658436385095LL;
	volatile int8_t x88 = INT8_MIN;
	volatile uint64_t t21 = 2025100315276904LLU;

    t21 = (x85^(x86!=(x87!=x88)));

    if (t21 != 60545207LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x90 = 70502149092549102LLU;
	uint8_t x91 = 1U;
	int64_t t22 = 132289427692186091LL;

    t22 = (x89^(x90!=(x91!=x92)));

    if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 6567;
	static uint32_t x95 = 522154U;
	uint8_t x96 = 59U;
	volatile int32_t t23 = 916;

    t23 = (x93^(x94!=(x95!=x96)));

    if (t23 != 6566) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = 1;
	uint32_t x98 = 31606U;
	static int64_t x99 = -1LL;
	int32_t x100 = -1778;

    t24 = (x97^(x98!=(x99!=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = INT8_MIN;
	int32_t x102 = 109337514;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = -60;

    t25 = (x101^(x102!=(x103!=x104)));

    if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x105 = 3U;
	static volatile int8_t x106 = INT8_MIN;
	static int32_t x107 = INT32_MIN;
	volatile int32_t t26 = 4835512;

    t26 = (x105^(x106!=(x107!=x108)));

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 17U;
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MIN;
	volatile uint32_t t27 = 193663U;

    t27 = (x109^(x110!=(x111!=x112)));

    if (t27 != 16U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	int8_t x114 = -1;
	volatile uint8_t x115 = 3U;
	uint16_t x116 = 2U;
	int64_t t28 = -85786498LL;

    t28 = (x113^(x114!=(x115!=x116)));

    if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x117 = 37U;
	int64_t x118 = -613LL;
	uint32_t t29 = 15697U;

    t29 = (x117^(x118!=(x119!=x120)));

    if (t29 != 36U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 45130778LLU;
	int64_t x122 = 4022LL;
	static uint8_t x123 = UINT8_MAX;
	int8_t x124 = INT8_MIN;
	volatile uint64_t t30 = 2919339550732LLU;

    t30 = (x121^(x122!=(x123!=x124)));

    if (t30 != 45130779LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 1U;
	int32_t x126 = INT32_MAX;
	uint8_t x127 = 53U;

    t31 = (x125^(x126!=(x127!=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = -1;
	static int16_t x131 = 0;
	static int8_t x132 = INT8_MIN;
	int32_t t32 = -665;

    t32 = (x129^(x130!=(x131!=x132)));

    if (t32 != 32766) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 4U;
	int64_t x135 = 14LL;
	volatile int32_t t33 = -3554;

    t33 = (x133^(x134!=(x135!=x136)));

    if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 11559878;
	int64_t x139 = 54384030127858LL;
	uint64_t x140 = UINT64_MAX;
	int32_t t34 = 1885;

    t34 = (x137^(x138!=(x139!=x140)));

    if (t34 != 11559879) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	uint64_t x142 = 5LLU;
	static volatile int16_t x143 = INT16_MAX;
	static int32_t x144 = -1;
	volatile int64_t t35 = -65121191919867736LL;

    t35 = (x141^(x142!=(x143!=x144)));

    if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	uint32_t x147 = 23U;
	int64_t x148 = -486579607LL;
	static int32_t t36 = 1025432017;

    t36 = (x145^(x146!=(x147!=x148)));

    if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int16_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	volatile int32_t t37 = 22;

    t37 = (x149^(x150!=(x151!=x152)));

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 2U;
	int64_t x154 = INT64_MIN;
	uint32_t x155 = UINT32_MAX;
	int16_t x156 = INT16_MAX;

    t38 = (x153^(x154!=(x155!=x156)));

    if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int64_t x158 = INT64_MAX;
	volatile int16_t x159 = 3;
	uint64_t x160 = 3343218788731905LLU;
	int32_t t39 = -10841812;

    t39 = (x157^(x158!=(x159!=x160)));

    if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x162 = -1;
	volatile int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = -10251;

    t40 = (x161^(x162!=(x163!=x164)));

    if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	volatile int16_t x167 = -1;
	uint16_t x168 = UINT16_MAX;
	int32_t t41 = -45;

    t41 = (x165^(x166!=(x167!=x168)));

    if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = INT8_MAX;
	int8_t x171 = 17;
	int32_t x172 = INT32_MIN;
	static uint32_t t42 = 48U;

    t42 = (x169^(x170!=(x171!=x172)));

    if (t42 != 12192377U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	int16_t x174 = INT16_MIN;
	int8_t x175 = 16;
	volatile int64_t x176 = -1LL;
	volatile int32_t t43 = -478336964;

    t43 = (x173^(x174!=(x175!=x176)));

    if (t43 != 2147483646) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1009;
	int32_t x178 = 127685;
	uint16_t x179 = 9U;
	static int32_t t44 = -1371;

    t44 = (x177^(x178!=(x179!=x180)));

    if (t44 != -1010) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 38928220572LL;
	static int16_t x183 = -30;
	int64_t t45 = -568986551687LL;

    t45 = (x181^(x182!=(x183!=x184)));

    if (t45 != 38928220573LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	static uint16_t x186 = UINT16_MAX;
	int8_t x187 = INT8_MAX;
	uint64_t x188 = UINT64_MAX;

    t46 = (x185^(x186!=(x187!=x188)));

    if (t46 != 32766) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	volatile int64_t x191 = -4845553184357084LL;
	static uint16_t x192 = 498U;
	volatile int64_t t47 = 6143363090908LL;

    t47 = (x189^(x190!=(x191!=x192)));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MAX;
	static int64_t x194 = INT64_MAX;
	int32_t x196 = -1;
	static int32_t t48 = -1772021;

    t48 = (x193^(x194!=(x195!=x196)));

    if (t48 != 2147483646) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MIN;
	static int8_t x199 = INT8_MAX;
	uint64_t x200 = UINT64_MAX;
	static int32_t t49 = -17;

    t49 = (x197^(x198!=(x199!=x200)));

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x202 = -1;
	int16_t x203 = INT16_MAX;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = -519;

    t50 = (x201^(x202!=(x203!=x204)));

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -36;
	volatile uint16_t x206 = 20U;
	int16_t x207 = INT16_MAX;
	volatile int32_t t51 = 970;

    t51 = (x205^(x206!=(x207!=x208)));

    if (t51 != -35) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	volatile uint8_t x212 = 1U;

    t52 = (x209^(x210!=(x211!=x212)));

    if (t52 != 126) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x214 = 18373U;
	int16_t x215 = INT16_MIN;
	int8_t x216 = -7;
	volatile int32_t t53 = 225079;

    t53 = (x213^(x214!=(x215!=x216)));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 26;
	int32_t x218 = -1;
	static int32_t x219 = -1;
	int64_t x220 = -49483LL;

    t54 = (x217^(x218!=(x219!=x220)));

    if (t54 != 27) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	int8_t x223 = 0;
	int16_t x224 = -1;
	volatile int32_t t55 = -2265121;

    t55 = (x221^(x222!=(x223!=x224)));

    if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	int16_t x226 = INT16_MIN;
	volatile int8_t x227 = INT8_MAX;
	int32_t t56 = -1;

    t56 = (x225^(x226!=(x227!=x228)));

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -7;
	volatile uint8_t x230 = UINT8_MAX;
	int16_t x231 = -1;
	int32_t t57 = -255;

    t57 = (x229^(x230!=(x231!=x232)));

    if (t57 != -8) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	uint32_t x234 = UINT32_MAX;
	int32_t x236 = INT32_MIN;
	volatile uint64_t t58 = 69225001768276LLU;

    t58 = (x233^(x234!=(x235!=x236)));

    if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = 5247885;
	volatile uint64_t x238 = 0LLU;
	static volatile uint32_t x239 = 518854U;
	static int32_t x240 = 1578518;
	int32_t t59 = 12;

    t59 = (x237^(x238!=(x239!=x240)));

    if (t59 != 5247884) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = -1;
	int8_t x243 = -19;
	int8_t x244 = -48;

    t60 = (x241^(x242!=(x243!=x244)));

    if (t60 != 942461872) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -278047LL;
	int32_t x246 = INT32_MAX;
	volatile int64_t x247 = -1LL;
	int32_t x248 = INT32_MIN;

    t61 = (x245^(x246!=(x247!=x248)));

    if (t61 != -278048LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 66U;
	static int64_t x251 = -4571843142LL;
	int32_t t62 = 0;

    t62 = (x249^(x250!=(x251!=x252)));

    if (t62 != 67) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 40U;
	int16_t x254 = INT16_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile uint32_t t63 = 530338765U;

    t63 = (x253^(x254!=(x255!=x256)));

    if (t63 != 41U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MAX;
	int32_t x258 = INT32_MAX;
	int16_t x259 = -1;
	uint16_t x260 = 0U;
	int32_t t64 = 7;

    t64 = (x257^(x258!=(x259!=x260)));

    if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = INT32_MAX;
	volatile int64_t x262 = -839LL;
	static uint32_t x263 = 25961475U;
	int32_t x264 = INT32_MIN;
	static int32_t t65 = 21;

    t65 = (x261^(x262!=(x263!=x264)));

    if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -7;
	static uint64_t x266 = 299144059689LLU;
	int8_t x268 = 28;
	static int32_t t66 = 113;

    t66 = (x265^(x266!=(x267!=x268)));

    if (t66 != -8) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	int16_t x270 = -16127;
	static int16_t x271 = INT16_MIN;
	int32_t x272 = -237;
	volatile int64_t t67 = -206253575204LL;

    t67 = (x269^(x270!=(x271!=x272)));

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	int64_t x274 = 95LL;
	int32_t x275 = 125871783;
	volatile int64_t t68 = 1067246600420169377LL;

    t68 = (x273^(x274!=(x275!=x276)));

    if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x277 = 2009U;
	int64_t x278 = INT64_MIN;
	volatile int8_t x279 = 1;
	static uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -3;

    t69 = (x277^(x278!=(x279!=x280)));

    if (t69 != 2008) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x281 = 2U;
	static uint16_t x282 = 86U;
	int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MAX;
	static int32_t t70 = 0;

    t70 = (x281^(x282!=(x283!=x284)));

    if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	uint32_t x287 = UINT32_MAX;
	int32_t t71 = 1428683;

    t71 = (x285^(x286!=(x287!=x288)));

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = INT64_MIN;
	uint16_t x291 = 0U;
	uint64_t x292 = UINT64_MAX;
	static int32_t t72 = 125;

    t72 = (x289^(x290!=(x291!=x292)));

    if (t72 != -7773) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int8_t x295 = 14;
	int32_t t73 = -52584;

    t73 = (x293^(x294!=(x295!=x296)));

    if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = UINT16_MAX;
	int64_t x298 = INT64_MAX;
	uint32_t x299 = 37539U;
	uint32_t x300 = 127U;
	int32_t t74 = -8904;

    t74 = (x297^(x298!=(x299!=x300)));

    if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x303 = -502322481;
	uint64_t x304 = 144075887725428422LLU;
	static uint64_t t75 = 535303789696480LLU;

    t75 = (x301^(x302!=(x303!=x304)));

    if (t75 != 1071745207637LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 2663U;
	static int32_t x306 = INT32_MIN;
	int16_t x307 = 0;
	uint64_t x308 = UINT64_MAX;

    t76 = (x305^(x306!=(x307!=x308)));

    if (t76 != 2662) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = 88;
	static int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	volatile int32_t t77 = 290;

    t77 = (x309^(x310!=(x311!=x312)));

    if (t77 != 89) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 72U;
	static int16_t x316 = -10227;
	int32_t t78 = 7418262;

    t78 = (x313^(x314!=(x315!=x316)));

    if (t78 != 73) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = 1360931252810964560LLU;
	int32_t x318 = -1;
	uint8_t x320 = UINT8_MAX;
	volatile uint64_t t79 = 5472911035309039115LLU;

    t79 = (x317^(x318!=(x319!=x320)));

    if (t79 != 1360931252810964561LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 28121U;
	volatile int64_t x322 = INT64_MAX;
	int64_t x324 = -1LL;
	static volatile uint32_t t80 = 487U;

    t80 = (x321^(x322!=(x323!=x324)));

    if (t80 != 28120U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x326 = 4989275LL;
	int64_t x327 = INT64_MIN;
	volatile int32_t t81 = 39572;

    t81 = (x325^(x326!=(x327!=x328)));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = INT8_MIN;
	int8_t x331 = 2;
	volatile int32_t t82 = -5011;

    t82 = (x329^(x330!=(x331!=x332)));

    if (t82 != -151) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	uint32_t x334 = 57U;
	static int64_t x335 = 53528824920LL;
	int64_t x336 = -3877183897937177LL;

    t83 = (x333^(x334!=(x335!=x336)));

    if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	int64_t x338 = -7751LL;
	int16_t x339 = 0;
	uint64_t x340 = 3129014867889LLU;
	int64_t t84 = -16276773106187861LL;

    t84 = (x337^(x338!=(x339!=x340)));

    if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 2824;
	static int32_t x342 = 5;
	int64_t x343 = -1476750771082519LL;
	int32_t x344 = -1;
	volatile int32_t t85 = -112541;

    t85 = (x341^(x342!=(x343!=x344)));

    if (t85 != 2825) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 1;
	int32_t x346 = -1;
	static volatile int32_t x348 = INT32_MIN;

    t86 = (x345^(x346!=(x347!=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = UINT8_MAX;
	int32_t x350 = -7264;
	uint8_t x351 = 0U;
	static volatile int32_t t87 = -17805807;

    t87 = (x349^(x350!=(x351!=x352)));

    if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = 6941676842112LL;
	int32_t x354 = INT32_MAX;
	static int32_t x355 = INT32_MIN;
	int64_t t88 = -17241583699946146LL;

    t88 = (x353^(x354!=(x355!=x356)));

    if (t88 != 6941676842113LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x359 = 119293537567LLU;
	uint16_t x360 = UINT16_MAX;
	int64_t t89 = -13090LL;

    t89 = (x357^(x358!=(x359!=x360)));

    if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x361 = 25U;
	volatile int8_t x362 = -1;
	static volatile int8_t x363 = 59;
	int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 433623802;

    t90 = (x361^(x362!=(x363!=x364)));

    if (t90 != 24) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = INT16_MIN;
	int8_t x366 = -29;
	static int8_t x367 = -1;
	int16_t x368 = -1;
	static int32_t t91 = 121;

    t91 = (x365^(x366!=(x367!=x368)));

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x369 = 434U;
	static int16_t x370 = INT16_MIN;
	volatile int64_t x371 = INT64_MIN;
	int8_t x372 = -2;
	int32_t t92 = 5;

    t92 = (x369^(x370!=(x371!=x372)));

    if (t92 != 435) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x375 = 3;
	int8_t x376 = -1;
	volatile int32_t t93 = 126650146;

    t93 = (x373^(x374!=(x375!=x376)));

    if (t93 != -14) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = INT64_MIN;
	volatile int16_t x378 = -252;
	int32_t x379 = -211612;
	int64_t x380 = 454009427254LL;
	int64_t t94 = -3611LL;

    t94 = (x377^(x378!=(x379!=x380)));

    if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x381 = UINT16_MAX;
	uint8_t x382 = UINT8_MAX;
	int32_t t95 = 1734971;

    t95 = (x381^(x382!=(x383!=x384)));

    if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	int16_t x388 = -12;
	int32_t t96 = 65973;

    t96 = (x385^(x386!=(x387!=x388)));

    if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = INT16_MAX;
	static volatile uint8_t x391 = 9U;
	uint16_t x392 = 373U;
	int32_t t97 = -134761404;

    t97 = (x389^(x390!=(x391!=x392)));

    if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x393 = 782189099832131LLU;
	static int16_t x394 = INT16_MIN;
	volatile int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MAX;
	uint64_t t98 = 126224602LLU;

    t98 = (x393^(x394!=(x395!=x396)));

    if (t98 != 782189099832130LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	static int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	int64_t t99 = -208LL;

    t99 = (x397^(x398!=(x399!=x400)));

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 12U;
	static volatile uint32_t x402 = 25346593U;
	int64_t x404 = INT64_MIN;
	int32_t t100 = -148394037;

    t100 = (x401^(x402!=(x403!=x404)));

    if (t100 != 13) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = INT64_MIN;
	uint16_t x407 = 820U;
	int16_t x408 = 2029;
	volatile int32_t t101 = 504454524;

    t101 = (x405^(x406!=(x407!=x408)));

    if (t101 != -2) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = INT16_MAX;
	int8_t x411 = 1;
	int64_t x412 = -1LL;
	volatile int32_t t102 = 1;

    t102 = (x409^(x410!=(x411!=x412)));

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x414 = INT32_MIN;
	uint32_t x415 = 114410U;
	static uint32_t x416 = 542387U;
	int64_t t103 = -490573214755LL;

    t103 = (x413^(x414!=(x415!=x416)));

    if (t103 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 81U;
	int8_t x418 = INT8_MAX;
	int8_t x419 = 1;
	uint8_t x420 = 1U;
	volatile int32_t t104 = 1852;

    t104 = (x417^(x418!=(x419!=x420)));

    if (t104 != 80) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	static volatile int8_t x423 = INT8_MAX;
	static int64_t x424 = -24827542LL;
	static volatile int32_t t105 = -5;

    t105 = (x421^(x422!=(x423!=x424)));

    if (t105 != -2) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 238U;
	static int8_t x426 = -3;
	uint16_t x427 = 2447U;

    t106 = (x425^(x426!=(x427!=x428)));

    if (t106 != 239) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x429 = -4;
	uint16_t x430 = UINT16_MAX;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MIN;
	volatile int32_t t107 = -105;

    t107 = (x429^(x430!=(x431!=x432)));

    if (t107 != -3) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 17;
	static int16_t x434 = -2;
	int8_t x435 = 1;
	static volatile int32_t t108 = -22893044;

    t108 = (x433^(x434!=(x435!=x436)));

    if (t108 != 16) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -10858;
	int8_t x439 = 0;
	static int64_t x440 = -1LL;
	volatile int32_t t109 = -2;

    t109 = (x437^(x438!=(x439!=x440)));

    if (t109 != -10857) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	volatile uint16_t x442 = 3U;
	volatile int16_t x443 = 4;
	static int32_t x444 = INT32_MAX;
	int32_t t110 = -33051;

    t110 = (x441^(x442!=(x443!=x444)));

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = -72;
	uint64_t x446 = 2130LLU;
	int64_t x447 = INT64_MIN;
	volatile int32_t t111 = -1;

    t111 = (x445^(x446!=(x447!=x448)));

    if (t111 != -71) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -5;
	volatile uint64_t x451 = 1384085676LLU;
	volatile int32_t t112 = -882363;

    t112 = (x449^(x450!=(x451!=x452)));

    if (t112 != -6) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	volatile int8_t x454 = 1;
	volatile int64_t x455 = 23525166981LL;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t113 = 121263;

    t113 = (x453^(x454!=(x455!=x456)));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x459 = INT8_MIN;
	volatile uint32_t x460 = UINT32_MAX;
	int32_t t114 = -624;

    t114 = (x457^(x458!=(x459!=x460)));

    if (t114 != -127) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = -1;
	static int32_t x462 = INT32_MIN;
	static volatile uint32_t x463 = 56121644U;
	volatile int32_t t115 = -44824725;

    t115 = (x461^(x462!=(x463!=x464)));

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	int32_t x466 = -1;
	int16_t x467 = INT16_MIN;
	static volatile uint16_t x468 = UINT16_MAX;

    t116 = (x465^(x466!=(x467!=x468)));

    if (t116 != 32766) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	volatile uint32_t x470 = 922U;
	int16_t x471 = -2;
	static int32_t x472 = INT32_MIN;

    t117 = (x469^(x470!=(x471!=x472)));

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x474 = 7U;
	int32_t x475 = 7;
	int8_t x476 = -1;
	int32_t t118 = -42;

    t118 = (x473^(x474!=(x475!=x476)));

    if (t118 != -127) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 6U;
	static int8_t x478 = -3;
	uint8_t x479 = UINT8_MAX;
	int64_t x480 = INT64_MAX;
	uint32_t t119 = 203445253U;

    t119 = (x477^(x478!=(x479!=x480)));

    if (t119 != 7U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 16662128U;
	static int32_t x482 = 3274;
	static uint64_t x483 = UINT64_MAX;
	int16_t x484 = INT16_MIN;
	static volatile uint32_t t120 = 14387U;

    t120 = (x481^(x482!=(x483!=x484)));

    if (t120 != 16662129U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = -16375;
	static int8_t x486 = INT8_MIN;
	volatile uint32_t x487 = UINT32_MAX;
	static int16_t x488 = -1;
	int32_t t121 = -33427;

    t121 = (x485^(x486!=(x487!=x488)));

    if (t121 != -16376) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	uint32_t x490 = 6402493U;
	int16_t x491 = -7455;
	int64_t x492 = 1607664460LL;
	volatile int64_t t122 = -1055323LL;

    t122 = (x489^(x490!=(x491!=x492)));

    if (t122 != -2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	uint32_t x494 = UINT32_MAX;
	uint32_t x495 = 54U;
	int8_t x496 = -1;

    t123 = (x493^(x494!=(x495!=x496)));

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	static int8_t x498 = INT8_MIN;
	uint32_t x499 = 36465111U;
	int8_t x500 = INT8_MAX;
	volatile int32_t t124 = 15323;

    t124 = (x497^(x498!=(x499!=x500)));

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MAX;
	volatile int32_t x502 = -393417;
	int64_t x503 = 3848098706LL;
	int8_t x504 = INT8_MIN;
	volatile int64_t t125 = -432616LL;

    t125 = (x501^(x502!=(x503!=x504)));

    if (t125 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x506 = INT32_MIN;
	static uint16_t x507 = UINT16_MAX;
	static volatile int32_t t126 = -10;

    t126 = (x505^(x506!=(x507!=x508)));

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = 945947030U;
	static int16_t x510 = INT16_MAX;
	int64_t x511 = 16613958872661979LL;
	uint64_t x512 = UINT64_MAX;
	uint32_t t127 = 66617552U;

    t127 = (x509^(x510!=(x511!=x512)));

    if (t127 != 945947031U) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x513 = INT16_MIN;
	uint8_t x514 = 122U;
	int16_t x516 = INT16_MIN;
	volatile int32_t t128 = -1811738;

    t128 = (x513^(x514!=(x515!=x516)));

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = UINT64_MAX;
	uint32_t x518 = 0U;
	uint64_t x519 = 613LLU;
	int32_t x520 = INT32_MIN;
	uint64_t t129 = 1162LLU;

    t129 = (x517^(x518!=(x519!=x520)));

    if (t129 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = INT64_MIN;
	int16_t x523 = -1;
	volatile int32_t t130 = 4289;

    t130 = (x521^(x522!=(x523!=x524)));

    if (t130 != -2) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x527 = 41U;
	int32_t x528 = 13;
	int32_t t131 = 175944;

    t131 = (x525^(x526!=(x527!=x528)));

    if (t131 != -2) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x530 = INT64_MIN;
	int16_t x531 = INT16_MAX;
	uint64_t x532 = 254878700104617LLU;
	static volatile int32_t t132 = -51;

    t132 = (x529^(x530!=(x531!=x532)));

    if (t132 != 254) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	int32_t x535 = -1;
	static volatile int32_t t133 = 343139;

    t133 = (x533^(x534!=(x535!=x536)));

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x537 = 277532U;
	volatile int32_t x538 = INT32_MIN;
	uint8_t x539 = 44U;
	uint8_t x540 = UINT8_MAX;
	static uint32_t t134 = 441U;

    t134 = (x537^(x538!=(x539!=x540)));

    if (t134 != 277533U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = -2041667;
	volatile int8_t x543 = INT8_MAX;
	int8_t x544 = INT8_MAX;
	static volatile int32_t t135 = 99;

    t135 = (x541^(x542!=(x543!=x544)));

    if (t135 != 2147483646) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int16_t x546 = INT16_MIN;
	static int64_t x548 = INT64_MAX;
	int32_t t136 = 151;

    t136 = (x545^(x546!=(x547!=x548)));

    if (t136 != -2) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x549 = 8733181U;
	volatile int8_t x550 = 3;
	uint8_t x551 = UINT8_MAX;
	uint8_t x552 = 36U;
	uint32_t t137 = 94U;

    t137 = (x549^(x550!=(x551!=x552)));

    if (t137 != 8733180U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = INT16_MAX;
	int64_t x554 = INT64_MIN;
	uint32_t x555 = UINT32_MAX;
	int8_t x556 = INT8_MAX;
	volatile int32_t t138 = 86024671;

    t138 = (x553^(x554!=(x555!=x556)));

    if (t138 != 32766) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = -1;
	static volatile int8_t x559 = INT8_MAX;
	int32_t x560 = INT32_MAX;
	int32_t t139 = 21;

    t139 = (x557^(x558!=(x559!=x560)));

    if (t139 != -2) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	uint16_t x563 = 12U;
	volatile int8_t x564 = -1;
	int64_t t140 = 29343374210LL;

    t140 = (x561^(x562!=(x563!=x564)));

    if (t140 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x565 = 72U;
	uint16_t x566 = 118U;
	uint8_t x567 = 0U;
	volatile uint32_t x568 = 9146U;

    t141 = (x565^(x566!=(x567!=x568)));

    if (t141 != 73) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x571 = UINT16_MAX;
	uint32_t x572 = 232264U;
	static volatile int32_t t142 = -57;

    t142 = (x569^(x570!=(x571!=x572)));

    if (t142 != -16) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 81U;
	int8_t x574 = 1;
	static volatile int32_t x575 = 2943825;
	volatile int8_t x576 = INT8_MIN;
	int32_t t143 = 8139;

    t143 = (x573^(x574!=(x575!=x576)));

    if (t143 != 81) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	volatile int16_t x578 = -1;
	static int8_t x579 = 1;
	int8_t x580 = INT8_MAX;

    t144 = (x577^(x578!=(x579!=x580)));

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x581 = INT32_MIN;
	uint32_t x582 = 6U;
	int32_t x583 = -1;
	int16_t x584 = INT16_MIN;
	static int32_t t145 = 95;

    t145 = (x581^(x582!=(x583!=x584)));

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 1450448897U;
	volatile int32_t x586 = -1;
	static int8_t x587 = INT8_MIN;
	static uint32_t x588 = 1625U;
	volatile uint32_t t146 = 330534U;

    t146 = (x585^(x586!=(x587!=x588)));

    if (t146 != 1450448896U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int64_t x590 = -1LL;
	int64_t x591 = -1LL;
	int16_t x592 = INT16_MAX;
	int32_t t147 = 7;

    t147 = (x589^(x590!=(x591!=x592)));

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x593 = -857763564145556969LL;
	static uint16_t x594 = 3U;
	int16_t x595 = INT16_MIN;
	volatile uint64_t x596 = UINT64_MAX;
	int64_t t148 = -12873880553145LL;

    t148 = (x593^(x594!=(x595!=x596)));

    if (t148 != -857763564145556970LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1LL;
	int32_t x598 = INT32_MIN;
	static int8_t x599 = 1;
	int64_t x600 = INT64_MIN;
	static int64_t t149 = 19981239506707726LL;

    t149 = (x597^(x598!=(x599!=x600)));

    if (t149 != -2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 1990304LLU;
	volatile int8_t x602 = -3;
	static int32_t x603 = -8304869;
	int8_t x604 = 13;
	volatile uint64_t t150 = 0LLU;

    t150 = (x601^(x602!=(x603!=x604)));

    if (t150 != 1990305LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = INT8_MIN;
	static volatile uint64_t x606 = 4229295629348080391LLU;
	volatile int64_t x607 = INT64_MIN;
	static int64_t x608 = -1LL;
	volatile int32_t t151 = 14352;

    t151 = (x605^(x606!=(x607!=x608)));

    if (t151 != -127) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	static int16_t x610 = INT16_MIN;
	int64_t x612 = INT64_MIN;
	int32_t t152 = -781415364;

    t152 = (x609^(x610!=(x611!=x612)));

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x614 = INT16_MIN;
	uint32_t x615 = UINT32_MAX;
	uint32_t x616 = UINT32_MAX;
	volatile int32_t t153 = 58883345;

    t153 = (x613^(x614!=(x615!=x616)));

    if (t153 != 126) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = UINT16_MAX;
	static uint64_t x618 = 275540LLU;
	int8_t x619 = 1;
	static int16_t x620 = 9;
	int32_t t154 = 3;

    t154 = (x617^(x618!=(x619!=x620)));

    if (t154 != 65534) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -15371;
	int64_t x622 = INT64_MAX;
	int32_t x623 = INT32_MIN;
	int64_t x624 = INT64_MIN;
	static int32_t t155 = 0;

    t155 = (x621^(x622!=(x623!=x624)));

    if (t155 != -15372) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	static int8_t x626 = INT8_MIN;
	int32_t x627 = INT32_MIN;
	static int64_t t156 = -259048914634267LL;

    t156 = (x625^(x626!=(x627!=x628)));

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	int16_t x630 = -1;
	int8_t x632 = -1;

    t157 = (x629^(x630!=(x631!=x632)));

    if (t157 != 126) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = UINT64_MAX;
	uint32_t x634 = UINT32_MAX;
	int16_t x635 = INT16_MIN;
	volatile uint64_t t158 = 241103LLU;

    t158 = (x633^(x634!=(x635!=x636)));

    if (t158 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = -1891;
	static int64_t x639 = -272349054518LL;
	volatile int8_t x640 = 4;
	int32_t t159 = -186642098;

    t159 = (x637^(x638!=(x639!=x640)));

    if (t159 != -1892) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x641 = 621530024923868LLU;
	int16_t x642 = 1168;
	int16_t x643 = -1;
	int8_t x644 = 1;
	uint64_t t160 = 219914370326085LLU;

    t160 = (x641^(x642!=(x643!=x644)));

    if (t160 != 621530024923869LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = -1;
	int16_t x646 = -50;
	static volatile uint32_t x647 = UINT32_MAX;
	static int16_t x648 = INT16_MAX;
	static int32_t t161 = 2667844;

    t161 = (x645^(x646!=(x647!=x648)));

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int32_t x651 = INT32_MAX;
	uint16_t x652 = 7161U;
	static int32_t t162 = -14144;

    t162 = (x649^(x650!=(x651!=x652)));

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = -4070;
	int8_t x656 = -1;
	volatile int32_t t163 = 3100098;

    t163 = (x653^(x654!=(x655!=x656)));

    if (t163 != -4069) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x658 = 485U;
	uint8_t x659 = UINT8_MAX;
	static uint32_t x660 = 5993882U;

    t164 = (x657^(x658!=(x659!=x660)));

    if (t164 != 65534) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = UINT32_MAX;
	uint16_t x662 = UINT16_MAX;
	volatile int32_t x663 = -1;
	uint32_t x664 = UINT32_MAX;
	uint32_t t165 = 2U;

    t165 = (x661^(x662!=(x663!=x664)));

    if (t165 != 4294967294U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int32_t x667 = -1;
	int16_t x668 = INT16_MIN;

    t166 = (x665^(x666!=(x667!=x668)));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = INT8_MIN;
	volatile uint16_t x670 = 21U;
	uint16_t x671 = 20U;
	int16_t x672 = INT16_MIN;
	int32_t t167 = 26;

    t167 = (x669^(x670!=(x671!=x672)));

    if (t167 != -127) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	int8_t x674 = INT8_MIN;
	int32_t x675 = INT32_MAX;
	uint64_t x676 = UINT64_MAX;
	volatile int32_t t168 = 5675;

    t168 = (x673^(x674!=(x675!=x676)));

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x677 = 4047094394LLU;
	static volatile int32_t x678 = INT32_MIN;
	int16_t x679 = INT16_MIN;
	volatile int64_t x680 = INT64_MAX;
	static uint64_t t169 = 234188750LLU;

    t169 = (x677^(x678!=(x679!=x680)));

    if (t169 != 4047094395LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	int32_t x683 = INT32_MAX;
	volatile uint16_t x684 = 1U;
	static volatile int64_t t170 = 25643994LL;

    t170 = (x681^(x682!=(x683!=x684)));

    if (t170 != -2LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x686 = INT16_MIN;
	static volatile uint8_t x688 = 90U;
	int64_t t171 = 24685LL;

    t171 = (x685^(x686!=(x687!=x688)));

    if (t171 != 6928885234LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = UINT32_MAX;
	int16_t x691 = INT16_MIN;
	int16_t x692 = 5;
	volatile uint32_t t172 = 13240U;

    t172 = (x689^(x690!=(x691!=x692)));

    if (t172 != 4294967294U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = INT64_MIN;
	static uint8_t x694 = 45U;
	volatile int8_t x695 = -6;
	uint16_t x696 = UINT16_MAX;
	int64_t t173 = 100935962873942645LL;

    t173 = (x693^(x694!=(x695!=x696)));

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MAX;
	int64_t x698 = INT64_MIN;
	uint8_t x699 = UINT8_MAX;
	int32_t x700 = -1;

    t174 = (x697^(x698!=(x699!=x700)));

    if (t174 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 15U;
	static uint8_t x704 = 5U;
	int32_t t175 = -4676935;

    t175 = (x701^(x702!=(x703!=x704)));

    if (t175 != 14) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = 484522;
	volatile int32_t x706 = INT32_MIN;
	int64_t x707 = -1LL;
	int8_t x708 = INT8_MIN;

    t176 = (x705^(x706!=(x707!=x708)));

    if (t176 != 484523) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	uint16_t x710 = 9U;
	int8_t x711 = INT8_MIN;
	volatile uint32_t x712 = 691U;
	int32_t t177 = -2481435;

    t177 = (x709^(x710!=(x711!=x712)));

    if (t177 != 126) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = UINT32_MAX;
	int32_t x714 = -1;
	uint32_t x715 = UINT32_MAX;
	int32_t x716 = -68;
	uint32_t t178 = 7512098U;

    t178 = (x713^(x714!=(x715!=x716)));

    if (t178 != 4294967294U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = INT32_MIN;
	int8_t x720 = -2;
	static volatile int32_t t179 = -4;

    t179 = (x717^(x718!=(x719!=x720)));

    if (t179 != -2147483647) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int16_t x724 = INT16_MIN;
	volatile int32_t t180 = 105909939;

    t180 = (x721^(x722!=(x723!=x724)));

    if (t180 != -2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = -1;
	static uint16_t x726 = UINT16_MAX;
	volatile int64_t x728 = INT64_MAX;
	volatile int32_t t181 = -409;

    t181 = (x725^(x726!=(x727!=x728)));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x729 = 1019U;
	static volatile uint8_t x730 = UINT8_MAX;
	int64_t x731 = INT64_MIN;
	volatile uint64_t x732 = UINT64_MAX;
	volatile int32_t t182 = -11642644;

    t182 = (x729^(x730!=(x731!=x732)));

    if (t182 != 1018) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	int32_t x735 = -1;
	static uint64_t t183 = 15LLU;

    t183 = (x733^(x734!=(x735!=x736)));

    if (t183 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 18U;
	uint32_t x738 = 132U;
	uint32_t x740 = 34620U;

    t184 = (x737^(x738!=(x739!=x740)));

    if (t184 != 19) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	int8_t x742 = INT8_MAX;

    t185 = (x741^(x742!=(x743!=x744)));

    if (t185 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -2;
	volatile int32_t x746 = 113903;
	volatile int32_t t186 = 933486;

    t186 = (x745^(x746!=(x747!=x748)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 7U;
	static int64_t x750 = -28324228161306LL;
	uint16_t x751 = UINT16_MAX;
	int32_t x752 = INT32_MIN;
	volatile int32_t t187 = 3281962;

    t187 = (x749^(x750!=(x751!=x752)));

    if (t187 != 6) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = 30398;
	static int32_t x754 = -1;
	uint16_t x755 = UINT16_MAX;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = 3;

    t188 = (x753^(x754!=(x755!=x756)));

    if (t188 != 30399) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = 7124998580LL;
	uint8_t x758 = 86U;
	volatile int16_t x759 = -1;
	uint8_t x760 = 60U;

    t189 = (x757^(x758!=(x759!=x760)));

    if (t189 != 7124998581LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	volatile int32_t x762 = INT32_MIN;
	uint32_t x764 = 121096U;
	int32_t t190 = -196468;

    t190 = (x761^(x762!=(x763!=x764)));

    if (t190 != -2) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = -1;
	int8_t x766 = -10;
	int16_t x767 = INT16_MIN;
	uint16_t x768 = 20457U;
	int32_t t191 = 0;

    t191 = (x765^(x766!=(x767!=x768)));

    if (t191 != -2) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 728154;
	int8_t x770 = -1;
	uint64_t x772 = 2533045433901444887LLU;
	static int32_t t192 = 239796784;

    t192 = (x769^(x770!=(x771!=x772)));

    if (t192 != 728155) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	uint8_t x774 = 1U;
	int8_t x775 = INT8_MIN;
	uint64_t x776 = UINT64_MAX;

    t193 = (x773^(x774!=(x775!=x776)));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 2381;
	volatile int64_t x779 = -1LL;
	int8_t x780 = INT8_MAX;
	static volatile int32_t t194 = -90851135;

    t194 = (x777^(x778!=(x779!=x780)));

    if (t194 != 2380) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	int16_t x782 = INT16_MIN;
	int64_t x783 = 621109642LL;
	static int8_t x784 = -2;
	int32_t t195 = 892789;

    t195 = (x781^(x782!=(x783!=x784)));

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 1U;
	uint8_t x786 = UINT8_MAX;
	volatile int32_t x787 = INT32_MIN;
	volatile int32_t t196 = 3815;

    t196 = (x785^(x786!=(x787!=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MIN;
	volatile uint64_t x791 = UINT64_MAX;
	uint64_t x792 = 142975320473122040LLU;
	volatile int32_t t197 = -297284;

    t197 = (x789^(x790!=(x791!=x792)));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -1LL;
	uint64_t x794 = 119803057LLU;
	static int16_t x795 = -12;
	uint16_t x796 = 24U;
	int64_t t198 = 46271497LL;

    t198 = (x793^(x794!=(x795!=x796)));

    if (t198 != -2LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x798 = -2;
	volatile int16_t x799 = -1;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t199 = -331030082;

    t199 = (x797^(x798!=(x799!=x800)));

    if (t199 != -127) { NG(); } else { ; }
	
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

