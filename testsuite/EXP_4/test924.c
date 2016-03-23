
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

int8_t x5 = INT8_MIN;
uint32_t x20 = UINT32_MAX;
uint32_t x21 = UINT32_MAX;
int16_t x22 = INT16_MIN;
int8_t x28 = 1;
volatile uint64_t x29 = UINT64_MAX;
uint32_t x37 = 2438U;
volatile uint32_t t8 = 2605U;
static uint64_t t11 = UINT64_MAX;
static uint32_t x55 = 1642702046U;
volatile int32_t t13 = 1803;
uint16_t x63 = 0U;
volatile int32_t t14 = -25939;
uint32_t t15 = UINT32_MAX;
uint32_t x69 = 84387421U;
uint32_t x70 = 33775222U;
volatile int8_t x83 = -1;
static int8_t x96 = INT8_MAX;
int32_t t22 = 363;
uint64_t x100 = UINT64_MAX;
volatile int32_t t24 = -81;
int8_t x111 = -1;
volatile int64_t x120 = 19LL;
uint32_t x131 = UINT32_MAX;
uint8_t x133 = 0U;
static int32_t x146 = INT32_MIN;
static uint8_t x149 = 103U;
static volatile uint32_t x156 = 8296317U;
int32_t t37 = 236;
int16_t x157 = 78;
volatile int16_t x159 = 1;
static uint32_t x160 = 259093966U;
static int32_t t41 = 4374558;
int32_t x177 = INT32_MAX;
volatile int16_t x185 = -49;
static uint32_t x195 = 1500U;
volatile int32_t x198 = INT32_MIN;
static int8_t x199 = INT8_MIN;
volatile int32_t x201 = -40881;
volatile uint32_t x204 = 11861234U;
int32_t x205 = 12210;
int32_t t50 = -1470878;
int16_t x218 = INT16_MAX;
int32_t t52 = 1563954;
int32_t x221 = INT32_MAX;
static int64_t x225 = INT64_MIN;
static int16_t x228 = INT16_MIN;
volatile int64_t t54 = INT64_MIN;
int32_t x231 = -1;
static int8_t x241 = INT8_MAX;
static volatile int32_t t58 = 1899951;
int32_t x251 = 57;
int16_t x258 = INT16_MIN;
uint16_t x263 = 2540U;
static volatile int8_t x270 = INT8_MIN;
int8_t x271 = INT8_MIN;
static volatile int32_t t65 = 56299753;
int64_t x283 = 35330888764247LL;
static int32_t x289 = INT32_MIN;
uint64_t x290 = 21236LLU;
int64_t x292 = INT64_MIN;
uint32_t x294 = UINT32_MAX;
static uint8_t x299 = UINT8_MAX;
int32_t x302 = -98418741;
uint8_t x303 = 1U;
uint16_t x304 = 1U;
static int64_t t71 = -857327737281LL;
volatile int32_t x306 = INT32_MIN;
int16_t x308 = INT16_MIN;
static int32_t x310 = INT32_MAX;
int32_t t73 = 375;
int8_t x321 = INT8_MIN;
static int8_t x328 = INT8_MAX;
static int64_t t77 = INT64_MIN;
static int32_t t78 = -1331865;
uint64_t x350 = UINT64_MAX;
volatile uint64_t x358 = UINT64_MAX;
uint32_t t85 = 2U;
uint32_t x368 = 320U;
static volatile int32_t t88 = 14;
static int64_t x374 = -1LL;
int64_t x381 = INT64_MIN;
volatile uint32_t t92 = 15U;
static volatile int64_t t97 = INT64_MIN;
uint8_t x409 = 50U;
int16_t x411 = -31;
volatile int32_t t98 = -146783;
int32_t x413 = INT32_MAX;
static volatile uint64_t x417 = 46180LLU;
int32_t x420 = INT32_MIN;
volatile uint32_t x424 = 8115U;
volatile int64_t x426 = INT64_MIN;
uint32_t x429 = 93U;
static int8_t x432 = INT8_MIN;
static uint32_t t103 = 29935587U;
int8_t x444 = INT8_MAX;
static uint16_t x445 = 1U;
volatile int32_t t107 = 526503;
int16_t x463 = -1;
uint16_t x464 = UINT16_MAX;
int8_t x466 = -45;
volatile uint32_t t112 = 1074041U;
int32_t x492 = 112;
int32_t x500 = -1;
int32_t t119 = INT32_MAX;
int16_t x501 = 1;
int16_t x509 = -60;
static int32_t x521 = 21411140;
static int8_t x528 = INT8_MAX;
uint32_t x530 = 10893351U;
volatile int32_t t127 = INT32_MAX;
int32_t x534 = INT32_MIN;
int32_t x539 = -127486046;
int32_t t129 = 87884477;
int8_t x543 = 1;
int32_t t132 = 13;
uint16_t x556 = UINT16_MAX;
static int32_t t134 = 2;
uint16_t x561 = 8U;
int64_t x566 = INT64_MIN;
uint32_t x576 = 1835472U;
volatile uint32_t x583 = UINT32_MAX;
int64_t x596 = -1LL;
int64_t x597 = INT64_MIN;
int64_t x598 = -1LL;
int16_t x600 = 83;
static int64_t t143 = INT64_MIN;
int8_t x602 = -1;
static int32_t t145 = 1125;
static volatile int16_t x613 = -44;
int64_t x620 = INT64_MIN;
int16_t x622 = INT16_MIN;
volatile int32_t t150 = 89115696;
volatile int8_t x630 = 1;
static volatile uint32_t x631 = 4396U;
volatile int32_t t151 = -2814773;
volatile int16_t x635 = -1;
int32_t t153 = -80427682;
int16_t x643 = -14;
int32_t x644 = INT32_MIN;
volatile int32_t t154 = -122877;
uint16_t x648 = 8142U;
int32_t x649 = 0;
static int64_t x655 = INT64_MIN;
int64_t x657 = INT64_MIN;
int32_t t160 = INT32_MIN;
uint32_t x670 = 20U;
int8_t x672 = INT8_MAX;
volatile uint32_t x682 = 65371206U;
static int64_t t164 = 1263088161LL;
int32_t t167 = 1133073;
int32_t x699 = INT32_MAX;
int64_t x709 = INT64_MIN;
int64_t x711 = INT64_MIN;
int64_t x712 = INT64_MIN;
static volatile int16_t x715 = -1;
uint32_t x722 = 1130696742U;
uint8_t x727 = UINT8_MAX;
int32_t x728 = -1;
int16_t x729 = 2;
uint64_t x730 = 73711LLU;
int64_t x736 = INT64_MAX;
volatile int16_t x748 = -1;
static int64_t t186 = -1887556745285462LL;
int8_t x777 = -6;
int32_t x783 = INT32_MIN;
static uint16_t x792 = 48U;
uint64_t x803 = UINT64_MAX;
static int64_t x805 = -1LL;
int64_t t194 = -3913964918577172LL;
volatile uint32_t t195 = 316U;
int32_t x819 = INT32_MIN;
static int32_t x825 = -1;
int64_t x826 = INT64_MIN;
int64_t x829 = INT64_MIN;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MIN;
	volatile uint64_t x3 = 16LLU;
	static int16_t x4 = 3905;
	volatile int32_t t0 = INT32_MIN;

    t0 = (x1^(x2<=(x3%x4)));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -3202;

    t1 = (x5^(x6<=(x7%x8)));

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 124U;
	uint32_t x10 = 150268U;
	int32_t x11 = INT32_MIN;
	static int8_t x12 = -9;
	static int32_t t2 = 2124476;

    t2 = (x9^(x10<=(x11%x12)));

    if (t2 != 125) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MIN;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = -9;
	volatile int32_t t3 = 27;

    t3 = (x17^(x18<=(x19%x20)));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x23 = -1LL;
	uint64_t x24 = 1831152083018463LLU;
	static uint32_t t4 = UINT32_MAX;

    t4 = (x21^(x22<=(x23%x24)));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -522657186;
	uint8_t x26 = 4U;
	static int64_t x27 = INT64_MIN;
	int32_t t5 = -185165;

    t5 = (x25^(x26<=(x27%x28)));

    if (t5 != -522657186) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = 31;
	int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	uint64_t t6 = UINT64_MAX;

    t6 = (x29^(x30<=(x31%x32)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 4756LLU;
	int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MAX;
	int32_t x36 = -1;
	uint64_t t7 = 3180670261850761LLU;

    t7 = (x33^(x34<=(x35%x36)));

    if (t7 != 4757LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x38 = 2;
	volatile int64_t x39 = INT64_MIN;
	static int64_t x40 = -40919222292LL;

    t8 = (x37^(x38<=(x39%x40)));

    if (t8 != 2438U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x41 = INT32_MAX;
	int16_t x42 = -8369;
	uint8_t x43 = 1U;
	uint16_t x44 = 42U;
	volatile int32_t t9 = 462898;

    t9 = (x41^(x42<=(x43%x44)));

    if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MIN;
	static volatile uint16_t x46 = 6184U;
	uint32_t x47 = 0U;
	volatile int32_t x48 = -2658;
	volatile int32_t t10 = INT32_MIN;

    t10 = (x45^(x46<=(x47%x48)));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = UINT64_MAX;
	int64_t x50 = 507147805422523730LL;
	uint8_t x51 = 4U;
	volatile int32_t x52 = 75673060;

    t11 = (x49^(x50<=(x51%x52)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x53 = UINT64_MAX;
	int8_t x54 = -19;
	int32_t x56 = 98137858;
	static uint64_t t12 = UINT64_MAX;

    t12 = (x53^(x54<=(x55%x56)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = -8;
	uint32_t x58 = 27U;
	static int64_t x59 = -221197146840347LL;
	uint16_t x60 = 3207U;

    t13 = (x57^(x58<=(x59%x60)));

    if (t13 != -8) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 16346U;
	volatile uint64_t x62 = 14160628813LLU;
	volatile int16_t x64 = INT16_MIN;

    t14 = (x61^(x62<=(x63%x64)));

    if (t14 != 16346) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x65 = UINT32_MAX;
	volatile uint64_t x66 = UINT64_MAX;
	static uint8_t x67 = UINT8_MAX;
	int16_t x68 = -1;

    t15 = (x65^(x66<=(x67%x68)));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x71 = INT16_MAX;
	int8_t x72 = 32;
	uint32_t t16 = 0U;

    t16 = (x69^(x70<=(x71%x72)));

    if (t16 != 84387421U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	static volatile int16_t x74 = -1;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -10;
	volatile int32_t t17 = 9;

    t17 = (x73^(x74<=(x75%x76)));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 26U;
	int8_t x78 = INT8_MAX;
	volatile int32_t x79 = -1;
	uint8_t x80 = 104U;
	static volatile int32_t t18 = -1;

    t18 = (x77^(x78<=(x79%x80)));

    if (t18 != 26) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	int32_t x82 = -1;
	uint64_t x84 = 1185708069970LLU;
	int64_t t19 = INT64_MIN;

    t19 = (x81^(x82<=(x83%x84)));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -1LL;
	int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	volatile uint8_t x88 = 6U;
	static volatile int64_t t20 = -24LL;

    t20 = (x85^(x86<=(x87%x88)));

    if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MIN;
	uint8_t x90 = 54U;
	uint8_t x91 = UINT8_MAX;
	volatile int16_t x92 = INT16_MAX;
	int32_t t21 = -7795274;

    t21 = (x89^(x90<=(x91%x92)));

    if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	static int8_t x94 = INT8_MAX;
	uint64_t x95 = 101976497LLU;

    t22 = (x93^(x94<=(x95%x96)));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MAX;
	uint32_t x98 = 3U;
	volatile int32_t x99 = INT32_MIN;
	static volatile int32_t t23 = 85943;

    t23 = (x97^(x98<=(x99%x100)));

    if (t23 != 32766) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x101 = 11528;
	static int16_t x102 = 1877;
	volatile int64_t x103 = 5LL;
	static int32_t x104 = -1;

    t24 = (x101^(x102<=(x103%x104)));

    if (t24 != 11528) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -390LL;
	int64_t x106 = -17121LL;
	int16_t x107 = 13;
	int8_t x108 = -1;
	volatile int64_t t25 = 6960843LL;

    t25 = (x105^(x106<=(x107%x108)));

    if (t25 != -389LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = 10190U;
	uint16_t x110 = UINT16_MAX;
	static int32_t x112 = INT32_MIN;
	volatile uint32_t t26 = 6953731U;

    t26 = (x109^(x110<=(x111%x112)));

    if (t26 != 10190U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	volatile int64_t x114 = -1LL;
	int8_t x115 = 0;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t27 = 16732535;

    t27 = (x113^(x114<=(x115%x116)));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	static int32_t x119 = -1;
	volatile int32_t t28 = -4521;

    t28 = (x117^(x118<=(x119%x120)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x121 = INT64_MIN;
	uint16_t x122 = 1054U;
	static volatile int64_t x123 = 31590329166LL;
	int32_t x124 = INT32_MIN;
	int64_t t29 = 14175744773805LL;

    t29 = (x121^(x122<=(x123%x124)));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = 1673351;
	uint64_t x126 = 14LLU;
	static volatile uint8_t x127 = UINT8_MAX;
	int8_t x128 = INT8_MIN;
	volatile int32_t t30 = 0;

    t30 = (x125^(x126<=(x127%x128)));

    if (t30 != 1673350) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MIN;
	uint8_t x130 = UINT8_MAX;
	volatile int64_t x132 = -1LL;
	volatile int32_t t31 = -1092;

    t31 = (x129^(x130<=(x131%x132)));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	static uint8_t x136 = UINT8_MAX;
	volatile int32_t t32 = -4257;

    t32 = (x133^(x134<=(x135%x136)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = INT8_MAX;
	int16_t x138 = -1;
	static uint64_t x139 = 1698500702718784LLU;
	uint16_t x140 = 1U;
	int32_t t33 = -33265;

    t33 = (x137^(x138<=(x139%x140)));

    if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x141 = 44U;
	volatile int32_t x142 = INT32_MAX;
	int16_t x143 = INT16_MIN;
	static volatile int32_t x144 = 16676821;
	static volatile int32_t t34 = 982301908;

    t34 = (x141^(x142<=(x143%x144)));

    if (t34 != 44) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MIN;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 114595503U;
	volatile int32_t t35 = -22308391;

    t35 = (x145^(x146<=(x147%x148)));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MIN;
	static int64_t x152 = -1805464128980093833LL;
	int32_t t36 = -52679;

    t36 = (x149^(x150<=(x151%x152)));

    if (t36 != 103) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MIN;
	volatile uint64_t x155 = UINT64_MAX;

    t37 = (x153^(x154<=(x155%x156)));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x158 = 9U;
	int32_t t38 = -11053;

    t38 = (x157^(x158<=(x159%x160)));

    if (t38 != 78) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MAX;
	int32_t x163 = -6120;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = 89;

    t39 = (x161^(x162<=(x163%x164)));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MAX;
	volatile uint64_t x166 = UINT64_MAX;
	int8_t x167 = INT8_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t40 = 5;

    t40 = (x165^(x166<=(x167%x168)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = 1;
	static int16_t x170 = INT16_MAX;
	int64_t x171 = 1136194123857514147LL;
	static int64_t x172 = -1LL;

    t41 = (x169^(x170<=(x171%x172)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x173 = INT8_MAX;
	static int16_t x174 = 1;
	int16_t x175 = 179;
	uint16_t x176 = 117U;
	volatile int32_t t42 = 701;

    t42 = (x173^(x174<=(x175%x176)));

    if (t42 != 126) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x178 = INT32_MAX;
	int32_t x179 = INT32_MAX;
	int16_t x180 = -1;
	int32_t t43 = INT32_MAX;

    t43 = (x177^(x178<=(x179%x180)));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x181 = UINT32_MAX;
	static uint16_t x182 = 5U;
	static volatile int16_t x183 = INT16_MIN;
	volatile uint16_t x184 = 6U;
	volatile uint32_t t44 = UINT32_MAX;

    t44 = (x181^(x182<=(x183%x184)));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x186 = 43;
	static volatile int16_t x187 = 540;
	static volatile uint64_t x188 = UINT64_MAX;
	int32_t t45 = 16300855;

    t45 = (x185^(x186<=(x187%x188)));

    if (t45 != -50) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x193 = UINT8_MAX;
	static uint8_t x194 = UINT8_MAX;
	int32_t x196 = INT32_MAX;
	int32_t t46 = 185;

    t46 = (x193^(x194<=(x195%x196)));

    if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = -1;
	int32_t x200 = INT32_MIN;
	int32_t t47 = 67;

    t47 = (x197^(x198<=(x199%x200)));

    if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;
	int32_t t48 = 4766;

    t48 = (x201^(x202<=(x203%x204)));

    if (t48 != -40882) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x206 = UINT64_MAX;
	int16_t x207 = 24;
	int32_t x208 = INT32_MIN;
	volatile int32_t t49 = 0;

    t49 = (x205^(x206<=(x207%x208)));

    if (t49 != 12210) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = -1;
	int64_t x210 = 418928778LL;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = UINT8_MAX;

    t50 = (x209^(x210<=(x211%x212)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x213 = INT32_MAX;
	int16_t x214 = 14189;
	static uint64_t x215 = 551258208LLU;
	int32_t x216 = 1;
	int32_t t51 = INT32_MAX;

    t51 = (x213^(x214<=(x215%x216)));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = 183132;
	int32_t x219 = 585743;
	uint16_t x220 = 127U;

    t52 = (x217^(x218<=(x219%x220)));

    if (t52 != 183132) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x222 = -1;
	uint32_t x223 = 930884034U;
	int16_t x224 = INT16_MIN;
	int32_t t53 = INT32_MAX;

    t53 = (x221^(x222<=(x223%x224)));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x226 = 3U;
	int16_t x227 = INT16_MIN;

    t54 = (x225^(x226<=(x227%x228)));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = UINT64_MAX;
	volatile int64_t x230 = -416419116082496LL;
	uint32_t x232 = 1979905041U;
	volatile uint64_t t55 = 1357LLU;

    t55 = (x229^(x230<=(x231%x232)));

    if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x233 = UINT8_MAX;
	static uint64_t x234 = 804850107543LLU;
	uint16_t x235 = 1U;
	volatile int64_t x236 = 14355307731667014LL;
	static volatile int32_t t56 = -1917;

    t56 = (x233^(x234<=(x235%x236)));

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = INT32_MIN;
	volatile uint8_t x238 = 0U;
	uint32_t x239 = UINT32_MAX;
	int32_t x240 = -1;
	int32_t t57 = 363501;

    t57 = (x237^(x238<=(x239%x240)));

    if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x242 = 1085U;
	volatile uint16_t x243 = UINT16_MAX;
	uint32_t x244 = UINT32_MAX;

    t58 = (x241^(x242<=(x243%x244)));

    if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x245 = -6;
	int8_t x246 = INT8_MIN;
	static uint16_t x247 = 408U;
	static volatile int16_t x248 = INT16_MIN;
	int32_t t59 = -89959;

    t59 = (x245^(x246<=(x247%x248)));

    if (t59 != -5) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x249 = INT64_MAX;
	int16_t x250 = -1;
	int32_t x252 = INT32_MIN;
	int64_t t60 = -1081644236LL;

    t60 = (x249^(x250<=(x251%x252)));

    if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = INT8_MIN;
	static int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MAX;
	volatile int32_t t61 = 3986;

    t61 = (x257^(x258<=(x259%x260)));

    if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x261 = 6876U;
	uint32_t x262 = 73370274U;
	volatile int16_t x264 = INT16_MIN;
	volatile uint32_t t62 = 482U;

    t62 = (x261^(x262<=(x263%x264)));

    if (t62 != 6876U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = -1;
	int8_t x266 = 5;
	int64_t x267 = -1LL;
	volatile uint64_t x268 = UINT64_MAX;
	volatile int32_t t63 = 810995900;

    t63 = (x265^(x266<=(x267%x268)));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x269 = INT32_MIN;
	int8_t x272 = INT8_MAX;
	int32_t t64 = 49916585;

    t64 = (x269^(x270<=(x271%x272)));

    if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = INT32_MAX;
	int64_t x274 = -839301LL;
	int16_t x275 = -1;
	int64_t x276 = INT64_MIN;

    t65 = (x273^(x274<=(x275%x276)));

    if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x281 = 3U;
	static uint8_t x282 = 3U;
	int8_t x284 = -1;
	int32_t t66 = -76;

    t66 = (x281^(x282<=(x283%x284)));

    if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x285 = UINT32_MAX;
	int16_t x286 = -21;
	uint32_t x287 = UINT32_MAX;
	uint16_t x288 = UINT16_MAX;
	volatile uint32_t t67 = UINT32_MAX;

    t67 = (x285^(x286<=(x287%x288)));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x291 = 260;
	volatile int32_t t68 = INT32_MIN;

    t68 = (x289^(x290<=(x291%x292)));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x293 = INT32_MIN;
	static uint16_t x295 = 204U;
	volatile uint8_t x296 = 4U;
	volatile int32_t t69 = INT32_MIN;

    t69 = (x293^(x294<=(x295%x296)));

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = INT16_MIN;
	static uint16_t x298 = UINT16_MAX;
	int64_t x300 = INT64_MAX;
	static volatile int32_t t70 = 820626;

    t70 = (x297^(x298<=(x299%x300)));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = INT64_MAX;

    t71 = (x301^(x302<=(x303%x304)));

    if (t71 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x305 = INT32_MIN;
	static int32_t x307 = -14601;
	volatile int32_t t72 = -2478;

    t72 = (x305^(x306<=(x307%x308)));

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x309 = INT16_MIN;
	int64_t x311 = -1629393577LL;
	static int32_t x312 = -1;

    t73 = (x309^(x310<=(x311%x312)));

    if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x313 = UINT8_MAX;
	static volatile int32_t x314 = -989822;
	int8_t x315 = -44;
	static int64_t x316 = INT64_MAX;
	volatile int32_t t74 = -1539026;

    t74 = (x313^(x314<=(x315%x316)));

    if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = INT32_MIN;
	static uint16_t x318 = 3073U;
	int16_t x319 = -9806;
	int32_t x320 = -1;
	int32_t t75 = INT32_MIN;

    t75 = (x317^(x318<=(x319%x320)));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x322 = INT32_MAX;
	volatile int32_t x323 = INT32_MIN;
	volatile int32_t x324 = -27;
	int32_t t76 = -316;

    t76 = (x321^(x322<=(x323%x324)));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = INT64_MIN;
	static int16_t x326 = INT16_MAX;
	int64_t x327 = 13015LL;

    t77 = (x325^(x326<=(x327%x328)));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x329 = 6U;
	uint8_t x330 = UINT8_MAX;
	uint8_t x331 = 119U;
	int16_t x332 = -12038;

    t78 = (x329^(x330<=(x331%x332)));

    if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x333 = INT64_MAX;
	static volatile uint32_t x334 = 900818470U;
	uint8_t x335 = 0U;
	uint8_t x336 = UINT8_MAX;
	static volatile int64_t t79 = INT64_MAX;

    t79 = (x333^(x334<=(x335%x336)));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x337 = -31890492643646LL;
	int16_t x338 = INT16_MAX;
	int8_t x339 = -1;
	static int64_t x340 = INT64_MIN;
	static int64_t t80 = 21821LL;

    t80 = (x337^(x338<=(x339%x340)));

    if (t80 != -31890492643646LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x341 = -1LL;
	int32_t x342 = INT32_MIN;
	static volatile int8_t x343 = 0;
	volatile int8_t x344 = -61;
	int64_t t81 = -24942LL;

    t81 = (x341^(x342<=(x343%x344)));

    if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x345 = -11;
	volatile int16_t x346 = -1;
	uint16_t x347 = 7U;
	int8_t x348 = INT8_MAX;
	int32_t t82 = -8963030;

    t82 = (x345^(x346<=(x347%x348)));

    if (t82 != -12) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x349 = 1;
	int32_t x351 = -76895774;
	int8_t x352 = INT8_MIN;
	volatile int32_t t83 = 2795;

    t83 = (x349^(x350<=(x351%x352)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x353 = 58U;
	int8_t x354 = 1;
	int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MAX;
	int32_t t84 = -12598;

    t84 = (x353^(x354<=(x355%x356)));

    if (t84 != 58) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x357 = 458951075U;
	int32_t x359 = 133198;
	int32_t x360 = 109;

    t85 = (x357^(x358<=(x359%x360)));

    if (t85 != 458951075U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x361 = INT8_MAX;
	static uint16_t x362 = UINT16_MAX;
	uint8_t x363 = 76U;
	int16_t x364 = -134;
	volatile int32_t t86 = 900903036;

    t86 = (x361^(x362<=(x363%x364)));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x365 = 5U;
	volatile int32_t x366 = INT32_MAX;
	volatile int16_t x367 = -2;
	volatile int32_t t87 = -1440;

    t87 = (x365^(x366<=(x367%x368)));

    if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x369 = -1;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	int64_t x372 = INT64_MIN;

    t88 = (x369^(x370<=(x371%x372)));

    if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile uint64_t x375 = 58308628647862LLU;
	int64_t x376 = -1LL;
	volatile uint64_t t89 = UINT64_MAX;

    t89 = (x373^(x374<=(x375%x376)));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x377 = INT64_MIN;
	uint16_t x378 = 153U;
	static int8_t x379 = INT8_MAX;
	uint32_t x380 = 634089U;
	volatile int64_t t90 = INT64_MIN;

    t90 = (x377^(x378<=(x379%x380)));

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x382 = 0U;
	volatile int32_t x383 = INT32_MIN;
	int32_t x384 = -226801715;
	int64_t t91 = INT64_MIN;

    t91 = (x381^(x382<=(x383%x384)));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x385 = 5U;
	int64_t x386 = -1LL;
	static int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;

    t92 = (x385^(x386<=(x387%x388)));

    if (t92 != 5U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x389 = -1;
	int16_t x390 = INT16_MIN;
	int32_t x391 = -46;
	static int64_t x392 = INT64_MAX;
	int32_t t93 = -61940630;

    t93 = (x389^(x390<=(x391%x392)));

    if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = -20;
	static int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MAX;
	volatile int32_t t94 = -5801;

    t94 = (x393^(x394<=(x395%x396)));

    if (t94 != -19) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x397 = 0U;
	int64_t x398 = 2703258219LL;
	uint8_t x399 = 52U;
	volatile int64_t x400 = INT64_MIN;
	int32_t t95 = -2;

    t95 = (x397^(x398<=(x399%x400)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x401 = -1;
	static uint64_t x402 = UINT64_MAX;
	uint8_t x403 = 70U;
	uint8_t x404 = 36U;
	int32_t t96 = -22;

    t96 = (x401^(x402<=(x403%x404)));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x406 = -1;
	int16_t x407 = INT16_MIN;
	static int32_t x408 = -366418;

    t97 = (x405^(x406<=(x407%x408)));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x410 = INT8_MIN;
	int16_t x412 = INT16_MIN;

    t98 = (x409^(x410<=(x411%x412)));

    if (t98 != 51) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x414 = -1;
	volatile int16_t x415 = -1;
	static volatile uint8_t x416 = 10U;
	static volatile int32_t t99 = 691200122;

    t99 = (x413^(x414<=(x415%x416)));

    if (t99 != 2147483646) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x418 = 13326291U;
	int8_t x419 = INT8_MIN;
	uint64_t t100 = 41LLU;

    t100 = (x417^(x418<=(x419%x420)));

    if (t100 != 46181LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x421 = INT64_MIN;
	int32_t x422 = -1;
	int32_t x423 = INT32_MIN;
	volatile int64_t t101 = INT64_MIN;

    t101 = (x421^(x422<=(x423%x424)));

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x425 = -72;
	int8_t x427 = INT8_MAX;
	uint32_t x428 = UINT32_MAX;
	static volatile int32_t t102 = 2886;

    t102 = (x425^(x426<=(x427%x428)));

    if (t102 != -71) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x430 = 91947LL;
	int64_t x431 = -5610024636LL;

    t103 = (x429^(x430<=(x431%x432)));

    if (t103 != 93U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x433 = INT64_MIN;
	volatile int16_t x434 = INT16_MIN;
	uint16_t x435 = UINT16_MAX;
	volatile int8_t x436 = INT8_MAX;
	static volatile int64_t t104 = 15LL;

    t104 = (x433^(x434<=(x435%x436)));

    if (t104 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x437 = INT64_MIN;
	uint32_t x438 = 6670475U;
	int64_t x439 = -33726854979999754LL;
	static int32_t x440 = INT32_MIN;
	volatile int64_t t105 = INT64_MIN;

    t105 = (x437^(x438<=(x439%x440)));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x441 = -1;
	static volatile uint64_t x442 = UINT64_MAX;
	static volatile int16_t x443 = 234;
	int32_t t106 = 760186;

    t106 = (x441^(x442<=(x443%x444)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x446 = INT32_MIN;
	uint64_t x447 = 53554186LLU;
	uint16_t x448 = UINT16_MAX;

    t107 = (x445^(x446<=(x447%x448)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x449 = 775U;
	int16_t x450 = -3065;
	volatile int8_t x451 = INT8_MIN;
	int64_t x452 = INT64_MIN;
	volatile int32_t t108 = 49072822;

    t108 = (x449^(x450<=(x451%x452)));

    if (t108 != 774) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x453 = 431U;
	int8_t x454 = 1;
	int16_t x455 = 0;
	uint8_t x456 = UINT8_MAX;
	int32_t t109 = -30307305;

    t109 = (x453^(x454<=(x455%x456)));

    if (t109 != 431) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x457 = INT64_MIN;
	static volatile int32_t x458 = -1;
	volatile int64_t x459 = 15471392811LL;
	static uint64_t x460 = 369081528086293LLU;
	int64_t t110 = INT64_MIN;

    t110 = (x457^(x458<=(x459%x460)));

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x461 = INT64_MIN;
	static uint16_t x462 = UINT16_MAX;
	volatile int64_t t111 = INT64_MIN;

    t111 = (x461^(x462<=(x463%x464)));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x465 = 31U;
	int64_t x467 = 254048600442LL;
	int32_t x468 = INT32_MIN;

    t112 = (x465^(x466<=(x467%x468)));

    if (t112 != 30U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x469 = 19115;
	uint64_t x470 = 2718477LLU;
	static volatile int32_t x471 = INT32_MIN;
	uint64_t x472 = UINT64_MAX;
	static volatile int32_t t113 = -367634;

    t113 = (x469^(x470<=(x471%x472)));

    if (t113 != 19114) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x473 = INT64_MIN;
	volatile uint64_t x474 = 65410LLU;
	int8_t x475 = -25;
	static int8_t x476 = -1;
	static volatile int64_t t114 = INT64_MIN;

    t114 = (x473^(x474<=(x475%x476)));

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x477 = -1;
	int32_t x478 = INT32_MIN;
	volatile uint32_t x479 = 1011196953U;
	volatile uint8_t x480 = 2U;
	static volatile int32_t t115 = 14;

    t115 = (x477^(x478<=(x479%x480)));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = INT32_MIN;
	int8_t x482 = 54;
	int8_t x483 = -1;
	int32_t x484 = INT32_MIN;
	volatile int32_t t116 = INT32_MIN;

    t116 = (x481^(x482<=(x483%x484)));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x485 = 26U;
	static int16_t x486 = INT16_MAX;
	uint64_t x487 = UINT64_MAX;
	static int8_t x488 = -1;
	uint32_t t117 = 1U;

    t117 = (x485^(x486<=(x487%x488)));

    if (t117 != 26U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x489 = 12U;
	volatile int64_t x490 = INT64_MAX;
	static uint64_t x491 = 4774974321LLU;
	static volatile int32_t t118 = -23439;

    t118 = (x489^(x490<=(x491%x492)));

    if (t118 != 12) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x497 = INT32_MAX;
	uint64_t x498 = 16082436322LLU;
	int16_t x499 = -1;

    t119 = (x497^(x498<=(x499%x500)));

    if (t119 != INT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x502 = 77629397LLU;
	uint16_t x503 = 125U;
	static int64_t x504 = -13624611771LL;
	volatile int32_t t120 = 28930071;

    t120 = (x501^(x502<=(x503%x504)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x505 = 53U;
	volatile uint32_t x506 = UINT32_MAX;
	uint64_t x507 = 14742945694LLU;
	uint32_t x508 = 4053U;
	volatile int32_t t121 = -46;

    t121 = (x505^(x506<=(x507%x508)));

    if (t121 != 53) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x510 = INT32_MAX;
	uint64_t x511 = 952653002892LLU;
	volatile int8_t x512 = -1;
	volatile int32_t t122 = 16206663;

    t122 = (x509^(x510<=(x511%x512)));

    if (t122 != -59) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x513 = INT64_MAX;
	int64_t x514 = 528719857116395LL;
	int16_t x515 = INT16_MAX;
	volatile int8_t x516 = INT8_MIN;
	int64_t t123 = INT64_MAX;

    t123 = (x513^(x514<=(x515%x516)));

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x517 = UINT16_MAX;
	int8_t x518 = INT8_MIN;
	uint64_t x519 = UINT64_MAX;
	int32_t x520 = -702;
	static volatile int32_t t124 = 1865369;

    t124 = (x517^(x518<=(x519%x520)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x522 = INT16_MIN;
	int32_t x523 = INT32_MIN;
	int32_t x524 = -382928;
	volatile int32_t t125 = 431352;

    t125 = (x521^(x522<=(x523%x524)));

    if (t125 != 21411141) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = -17415826305290267LL;
	uint64_t x526 = UINT64_MAX;
	static volatile int32_t x527 = -99736;
	volatile int64_t t126 = 337197070122LL;

    t126 = (x525^(x526<=(x527%x528)));

    if (t126 != -17415826305290267LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x529 = INT32_MAX;
	static uint8_t x531 = 25U;
	uint64_t x532 = UINT64_MAX;

    t127 = (x529^(x530<=(x531%x532)));

    if (t127 != INT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x533 = -1;
	static uint64_t x535 = UINT64_MAX;
	uint16_t x536 = 4U;
	static int32_t t128 = -70;

    t128 = (x533^(x534<=(x535%x536)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x537 = INT16_MIN;
	int16_t x538 = -1;
	int16_t x540 = -245;

    t129 = (x537^(x538<=(x539%x540)));

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x541 = -1670;
	volatile uint32_t x542 = 749339U;
	int64_t x544 = INT64_MIN;
	volatile int32_t t130 = 14717395;

    t130 = (x541^(x542<=(x543%x544)));

    if (t130 != -1670) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x545 = 0;
	uint64_t x546 = 185256780896LLU;
	int8_t x547 = INT8_MAX;
	volatile int8_t x548 = INT8_MAX;
	volatile int32_t t131 = 0;

    t131 = (x545^(x546<=(x547%x548)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x549 = 12;
	int8_t x550 = -14;
	uint32_t x551 = UINT32_MAX;
	volatile int32_t x552 = INT32_MIN;

    t132 = (x549^(x550<=(x551%x552)));

    if (t132 != 12) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x553 = -4856406LL;
	static uint16_t x554 = 17665U;
	int32_t x555 = INT32_MAX;
	int64_t t133 = 58219109985LL;

    t133 = (x553^(x554<=(x555%x556)));

    if (t133 != -4856405LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x557 = INT16_MIN;
	static volatile int32_t x558 = 59824302;
	int32_t x559 = INT32_MIN;
	uint8_t x560 = UINT8_MAX;

    t134 = (x557^(x558<=(x559%x560)));

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x562 = -150;
	int64_t x563 = INT64_MIN;
	volatile int8_t x564 = INT8_MIN;
	int32_t t135 = 79464;

    t135 = (x561^(x562<=(x563%x564)));

    if (t135 != 9) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x565 = 53LL;
	static int8_t x567 = 0;
	volatile int64_t x568 = INT64_MIN;
	static volatile int64_t t136 = 18650407047631LL;

    t136 = (x565^(x566<=(x567%x568)));

    if (t136 != 52LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x573 = 3822U;
	uint16_t x574 = UINT16_MAX;
	int16_t x575 = INT16_MIN;
	volatile int32_t t137 = -528214484;

    t137 = (x573^(x574<=(x575%x576)));

    if (t137 != 3823) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x577 = -1;
	int16_t x578 = 6871;
	int8_t x579 = INT8_MAX;
	static int32_t x580 = 13;
	volatile int32_t t138 = -1021927784;

    t138 = (x577^(x578<=(x579%x580)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x581 = 1;
	int64_t x582 = INT64_MIN;
	volatile int8_t x584 = -1;
	int32_t t139 = -103038;

    t139 = (x581^(x582<=(x583%x584)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x585 = 0U;
	int32_t x586 = 188600622;
	int64_t x587 = INT64_MAX;
	int32_t x588 = INT32_MIN;
	static int32_t t140 = -9041;

    t140 = (x585^(x586<=(x587%x588)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x589 = 11U;
	int8_t x590 = INT8_MIN;
	int8_t x591 = -6;
	uint32_t x592 = 11534821U;
	volatile int32_t t141 = 1;

    t141 = (x589^(x590<=(x591%x592)));

    if (t141 != 11) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x593 = INT8_MIN;
	volatile int64_t x594 = 4479LL;
	volatile uint32_t x595 = 52U;
	static volatile int32_t t142 = 23113672;

    t142 = (x593^(x594<=(x595%x596)));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x599 = -8;

    t143 = (x597^(x598<=(x599%x600)));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x601 = INT64_MIN;
	static int32_t x603 = 452883;
	uint32_t x604 = 61U;
	volatile int64_t t144 = INT64_MIN;

    t144 = (x601^(x602<=(x603%x604)));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x605 = -77339;
	uint8_t x606 = 5U;
	int8_t x607 = 12;
	uint32_t x608 = 956967U;

    t145 = (x605^(x606<=(x607%x608)));

    if (t145 != -77340) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x609 = INT16_MIN;
	uint16_t x610 = 119U;
	int8_t x611 = INT8_MAX;
	static int8_t x612 = 25;
	int32_t t146 = 4511008;

    t146 = (x609^(x610<=(x611%x612)));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x614 = 118106471U;
	volatile int64_t x615 = INT64_MAX;
	static int32_t x616 = -1;
	volatile int32_t t147 = -15966;

    t147 = (x613^(x614<=(x615%x616)));

    if (t147 != -44) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = -1;
	uint16_t x618 = 6U;
	int32_t x619 = -26812722;
	volatile int32_t t148 = 127832156;

    t148 = (x617^(x618<=(x619%x620)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	uint64_t x623 = 2005LLU;
	static uint8_t x624 = 2U;
	int32_t t149 = -4731;

    t149 = (x621^(x622<=(x623%x624)));

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x625 = 137;
	int64_t x626 = INT64_MIN;
	static int8_t x627 = 1;
	static uint32_t x628 = 3U;

    t150 = (x625^(x626<=(x627%x628)));

    if (t150 != 136) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = -1;
	static uint8_t x632 = UINT8_MAX;

    t151 = (x629^(x630<=(x631%x632)));

    if (t151 != -2) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x633 = 14U;
	uint32_t x634 = 54072U;
	int8_t x636 = -1;
	int32_t t152 = -5045276;

    t152 = (x633^(x634<=(x635%x636)));

    if (t152 != 14) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x637 = -22;
	int16_t x638 = INT16_MAX;
	int32_t x639 = INT32_MIN;
	volatile int64_t x640 = 56834651359198LL;

    t153 = (x637^(x638<=(x639%x640)));

    if (t153 != -22) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x641 = 0U;
	uint64_t x642 = 61191768087067450LLU;

    t154 = (x641^(x642<=(x643%x644)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x645 = -3;
	volatile uint32_t x646 = 526158171U;
	int16_t x647 = 15596;
	static volatile int32_t t155 = -115909;

    t155 = (x645^(x646<=(x647%x648)));

    if (t155 != -3) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x650 = INT16_MIN;
	static int64_t x651 = -180493237LL;
	volatile uint16_t x652 = UINT16_MAX;
	volatile int32_t t156 = -373;

    t156 = (x649^(x650<=(x651%x652)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x653 = -158993280;
	uint64_t x654 = UINT64_MAX;
	int32_t x656 = INT32_MIN;
	volatile int32_t t157 = -10;

    t157 = (x653^(x654<=(x655%x656)));

    if (t157 != -158993280) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x658 = -1136772266656167329LL;
	volatile uint64_t x659 = 4LLU;
	int16_t x660 = -3152;
	int64_t t158 = INT64_MIN;

    t158 = (x657^(x658<=(x659%x660)));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x661 = UINT32_MAX;
	volatile int8_t x662 = -5;
	uint8_t x663 = 0U;
	int32_t x664 = INT32_MAX;
	uint32_t t159 = 3025087U;

    t159 = (x661^(x662<=(x663%x664)));

    if (t159 != 4294967294U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x665 = INT32_MIN;
	uint8_t x666 = 59U;
	volatile int16_t x667 = INT16_MIN;
	int16_t x668 = INT16_MIN;

    t160 = (x665^(x666<=(x667%x668)));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x669 = INT16_MAX;
	int64_t x671 = INT64_MAX;
	int32_t t161 = 75984061;

    t161 = (x669^(x670<=(x671%x672)));

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x673 = UINT16_MAX;
	volatile int8_t x674 = INT8_MIN;
	int64_t x675 = -1LL;
	uint64_t x676 = 9492382865LLU;
	int32_t t162 = -52268775;

    t162 = (x673^(x674<=(x675%x676)));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x677 = 22U;
	uint64_t x678 = UINT64_MAX;
	volatile int8_t x679 = -6;
	static int64_t x680 = INT64_MIN;
	static uint32_t t163 = 4424U;

    t163 = (x677^(x678<=(x679%x680)));

    if (t163 != 22U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x681 = -586LL;
	int8_t x683 = 0;
	int16_t x684 = -1;

    t164 = (x681^(x682<=(x683%x684)));

    if (t164 != -586LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x685 = 217113LLU;
	static int8_t x686 = INT8_MIN;
	int32_t x687 = INT32_MIN;
	static int16_t x688 = -1;
	volatile uint64_t t165 = 2289930647LLU;

    t165 = (x685^(x686<=(x687%x688)));

    if (t165 != 217112LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x689 = -1;
	int16_t x690 = INT16_MIN;
	int8_t x691 = 1;
	static int8_t x692 = INT8_MIN;
	volatile int32_t t166 = -7684;

    t166 = (x689^(x690<=(x691%x692)));

    if (t166 != -2) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x693 = INT8_MAX;
	int32_t x694 = -1;
	int16_t x695 = 2003;
	volatile int16_t x696 = 1;

    t167 = (x693^(x694<=(x695%x696)));

    if (t167 != 126) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x697 = -99855;
	uint32_t x698 = UINT32_MAX;
	int8_t x700 = -1;
	volatile int32_t t168 = -389;

    t168 = (x697^(x698<=(x699%x700)));

    if (t168 != -99855) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x701 = 60U;
	volatile uint64_t x702 = UINT64_MAX;
	int16_t x703 = -1;
	int64_t x704 = -1LL;
	uint32_t t169 = 12U;

    t169 = (x701^(x702<=(x703%x704)));

    if (t169 != 60U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x705 = -1;
	int16_t x706 = -3569;
	int32_t x707 = INT32_MAX;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t170 = 26213557;

    t170 = (x705^(x706<=(x707%x708)));

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x710 = INT32_MIN;
	volatile int64_t t171 = -170194759LL;

    t171 = (x709^(x710<=(x711%x712)));

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x713 = INT64_MAX;
	uint16_t x714 = 18U;
	static uint8_t x716 = UINT8_MAX;
	volatile int64_t t172 = INT64_MAX;

    t172 = (x713^(x714<=(x715%x716)));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x717 = INT32_MAX;
	int64_t x718 = INT64_MIN;
	volatile int8_t x719 = -1;
	int8_t x720 = INT8_MAX;
	volatile int32_t t173 = 58662561;

    t173 = (x717^(x718<=(x719%x720)));

    if (t173 != 2147483646) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x721 = INT32_MIN;
	static uint32_t x723 = 106966U;
	static volatile int16_t x724 = INT16_MIN;
	volatile int32_t t174 = INT32_MIN;

    t174 = (x721^(x722<=(x723%x724)));

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x725 = UINT64_MAX;
	uint32_t x726 = UINT32_MAX;
	volatile uint64_t t175 = UINT64_MAX;

    t175 = (x725^(x726<=(x727%x728)));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x731 = -1LL;
	int32_t x732 = INT32_MAX;
	int32_t t176 = -117328716;

    t176 = (x729^(x730<=(x731%x732)));

    if (t176 != 3) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	uint64_t x734 = UINT64_MAX;
	static int16_t x735 = INT16_MAX;
	volatile uint64_t t177 = UINT64_MAX;

    t177 = (x733^(x734<=(x735%x736)));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x737 = 396U;
	volatile int16_t x738 = INT16_MIN;
	int16_t x739 = 3656;
	int16_t x740 = INT16_MAX;
	volatile int32_t t178 = 2544967;

    t178 = (x737^(x738<=(x739%x740)));

    if (t178 != 397) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x741 = -30;
	int8_t x742 = -1;
	int16_t x743 = -1;
	int16_t x744 = 8111;
	volatile int32_t t179 = -1;

    t179 = (x741^(x742<=(x743%x744)));

    if (t179 != -29) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x745 = INT32_MIN;
	int8_t x746 = -1;
	volatile uint64_t x747 = UINT64_MAX;
	int32_t t180 = INT32_MIN;

    t180 = (x745^(x746<=(x747%x748)));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x753 = 6U;
	int8_t x754 = -7;
	int64_t x755 = 6584272LL;
	static volatile int64_t x756 = INT64_MIN;
	volatile int32_t t181 = 319417;

    t181 = (x753^(x754<=(x755%x756)));

    if (t181 != 7) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x757 = INT64_MIN;
	volatile int16_t x758 = INT16_MAX;
	int8_t x759 = INT8_MAX;
	static uint64_t x760 = 13LLU;
	volatile int64_t t182 = INT64_MIN;

    t182 = (x757^(x758<=(x759%x760)));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x761 = 2993223;
	uint32_t x762 = 400487184U;
	int16_t x763 = INT16_MAX;
	int16_t x764 = INT16_MAX;
	static volatile int32_t t183 = -20;

    t183 = (x761^(x762<=(x763%x764)));

    if (t183 != 2993223) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x765 = -10;
	static volatile int32_t x766 = 2326;
	uint64_t x767 = 8912269520147LLU;
	int32_t x768 = -1;
	static volatile int32_t t184 = 962;

    t184 = (x765^(x766<=(x767%x768)));

    if (t184 != -9) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x769 = INT8_MIN;
	int8_t x770 = INT8_MIN;
	volatile int32_t x771 = INT32_MIN;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t185 = -10798501;

    t185 = (x769^(x770<=(x771%x772)));

    if (t185 != -127) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x773 = -14LL;
	uint16_t x774 = 1U;
	static int8_t x775 = -1;
	uint16_t x776 = 8558U;

    t186 = (x773^(x774<=(x775%x776)));

    if (t186 != -14LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x778 = INT16_MAX;
	int64_t x779 = -1LL;
	int64_t x780 = -1LL;
	volatile int32_t t187 = 1;

    t187 = (x777^(x778<=(x779%x780)));

    if (t187 != -6) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x781 = INT32_MAX;
	static int32_t x782 = 86106;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t188 = -147491078;

    t188 = (x781^(x782<=(x783%x784)));

    if (t188 != 2147483646) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x785 = 0U;
	int64_t x786 = INT64_MIN;
	int8_t x787 = -1;
	uint32_t x788 = UINT32_MAX;
	int32_t t189 = 6919910;

    t189 = (x785^(x786<=(x787%x788)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x789 = UINT16_MAX;
	uint64_t x790 = 12363697765914451LLU;
	static int32_t x791 = INT32_MIN;
	volatile int32_t t190 = 116;

    t190 = (x789^(x790<=(x791%x792)));

    if (t190 != 65534) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = 6;
	int8_t x794 = -1;
	uint64_t x795 = 20267019LLU;
	uint32_t x796 = 441012584U;
	int32_t t191 = 6769514;

    t191 = (x793^(x794<=(x795%x796)));

    if (t191 != 6) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x797 = UINT64_MAX;
	int64_t x798 = INT64_MIN;
	static int16_t x799 = INT16_MIN;
	uint16_t x800 = 3873U;
	uint64_t t192 = 503LLU;

    t192 = (x797^(x798<=(x799%x800)));

    if (t192 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x801 = INT8_MAX;
	volatile int64_t x802 = INT64_MAX;
	int16_t x804 = -1;
	volatile int32_t t193 = -76498;

    t193 = (x801^(x802<=(x803%x804)));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x806 = 96;
	int64_t x807 = INT64_MIN;
	static uint32_t x808 = 46U;

    t194 = (x805^(x806<=(x807%x808)));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x809 = UINT32_MAX;
	uint16_t x810 = UINT16_MAX;
	static uint64_t x811 = 56482806LLU;
	int32_t x812 = -16251;

    t195 = (x809^(x810<=(x811%x812)));

    if (t195 != 4294967294U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x813 = 29457U;
	volatile int16_t x814 = INT16_MIN;
	volatile int8_t x815 = INT8_MIN;
	int8_t x816 = INT8_MIN;
	volatile int32_t t196 = 124348748;

    t196 = (x813^(x814<=(x815%x816)));

    if (t196 != 29456) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x817 = 3U;
	int32_t x818 = INT32_MIN;
	static volatile int32_t x820 = INT32_MIN;
	int32_t t197 = 2;

    t197 = (x817^(x818<=(x819%x820)));

    if (t197 != 2) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x827 = 314262459676686309LLU;
	int32_t x828 = -41005400;
	int32_t t198 = 157015187;

    t198 = (x825^(x826<=(x827%x828)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x830 = INT32_MIN;
	int32_t x831 = INT32_MIN;
	volatile int8_t x832 = -1;
	volatile int64_t t199 = 1922681975286LL;

    t199 = (x829^(x830<=(x831%x832)));

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

