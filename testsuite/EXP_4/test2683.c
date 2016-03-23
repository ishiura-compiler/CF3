
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

uint8_t x1 = UINT8_MAX;
static int64_t x2 = INT64_MIN;
uint32_t x3 = UINT32_MAX;
int16_t x4 = INT16_MAX;
uint64_t x7 = 0LLU;
int64_t x8 = INT64_MAX;
int16_t x11 = INT16_MIN;
int32_t x14 = 4;
uint8_t x19 = 111U;
int32_t t5 = -32692339;
int32_t x31 = INT32_MAX;
int64_t x36 = INT64_MAX;
int64_t x40 = 2304419301945533LL;
int32_t t10 = -84116;
uint64_t x45 = 25LLU;
int32_t x47 = INT32_MIN;
int16_t x51 = INT16_MAX;
static int32_t x56 = 461;
volatile int8_t x59 = INT8_MIN;
uint64_t x63 = 11134604414LLU;
uint16_t x64 = 22U;
static volatile int32_t t15 = -41;
int8_t x77 = -41;
int32_t x78 = INT32_MIN;
int32_t x80 = -1;
int32_t x83 = -1;
int8_t x85 = INT8_MIN;
uint64_t x95 = UINT64_MAX;
uint16_t x99 = 1561U;
int32_t x104 = -1;
uint16_t x105 = 0U;
volatile int32_t t26 = 46606;
uint16_t x112 = UINT16_MAX;
int64_t x119 = INT64_MIN;
uint8_t x121 = 0U;
int32_t t30 = 105014357;
int32_t x126 = -3311;
int8_t x127 = -1;
int8_t x129 = INT8_MIN;
uint16_t x133 = 26U;
static int32_t t34 = -382886205;
static int64_t x142 = INT64_MAX;
int8_t x144 = -41;
int32_t t35 = 30232;
uint16_t x152 = 9112U;
int32_t x153 = 393;
int8_t x154 = -13;
int64_t x159 = INT64_MIN;
volatile int32_t t39 = 1;
volatile int32_t x163 = -1102923;
uint64_t x166 = 2LLU;
int64_t x171 = INT64_MIN;
int32_t t42 = -1;
uint32_t x177 = 858U;
int32_t x182 = INT32_MIN;
volatile int32_t t46 = -2670;
int16_t x193 = -191;
uint16_t x195 = 4725U;
int64_t x198 = -2269189131715698LL;
volatile uint8_t x204 = 1U;
static volatile uint16_t x206 = UINT16_MAX;
uint16_t x218 = 61U;
volatile int32_t t54 = -9830922;
volatile uint64_t x222 = 982152894215455492LLU;
uint16_t x223 = UINT16_MAX;
static int16_t x224 = 1;
static volatile int64_t x226 = INT64_MAX;
volatile int8_t x232 = INT8_MIN;
int8_t x247 = -1;
volatile int32_t t63 = -3854;
static int64_t x257 = INT64_MAX;
volatile int32_t x260 = INT32_MAX;
volatile int32_t t68 = 119;
int16_t x281 = -1;
volatile uint16_t x295 = 915U;
static volatile uint32_t x299 = 26764593U;
static uint8_t x306 = 0U;
int64_t x308 = INT64_MIN;
int16_t x310 = -834;
int16_t x323 = -1396;
int32_t x324 = INT32_MAX;
static int32_t t80 = 152246;
int32_t x328 = INT32_MAX;
uint64_t x332 = 1442714682335972495LLU;
volatile int32_t t82 = -106;
volatile int32_t t83 = 20;
int32_t t84 = 4;
volatile int32_t x347 = -32;
uint8_t x350 = UINT8_MAX;
volatile int32_t t87 = -5116956;
int16_t x355 = -2;
volatile int32_t t88 = -4092705;
volatile uint16_t x367 = 3U;
static int64_t x373 = -12036602062LL;
uint16_t x378 = 17U;
uint16_t x380 = 9U;
static uint16_t x384 = UINT16_MAX;
int32_t x385 = 4671;
int16_t x387 = INT16_MAX;
static volatile int16_t x390 = INT16_MIN;
uint8_t x393 = UINT8_MAX;
int16_t x395 = 927;
volatile int32_t t99 = 931;
volatile uint8_t x419 = 112U;
static volatile int32_t t105 = -104815;
uint16_t x426 = UINT16_MAX;
uint32_t x431 = 1716244U;
volatile int8_t x444 = 0;
int32_t x452 = -1;
volatile int32_t t112 = -61;
static int64_t x458 = -1LL;
int32_t t114 = 2025;
int32_t x461 = -1;
volatile int8_t x469 = INT8_MAX;
uint16_t x470 = 1897U;
static int32_t t118 = 304447;
volatile int64_t x489 = INT64_MIN;
uint32_t x494 = UINT32_MAX;
int8_t x499 = INT8_MAX;
int8_t x502 = -2;
uint8_t x504 = 15U;
int64_t x512 = -1LL;
uint8_t x515 = 3U;
int8_t x530 = INT8_MAX;
static int32_t t133 = -544777;
int16_t x540 = 247;
int8_t x546 = INT8_MAX;
int32_t x549 = INT32_MIN;
int32_t t137 = 8994249;
uint32_t x554 = UINT32_MAX;
uint16_t x561 = UINT16_MAX;
uint64_t x564 = UINT64_MAX;
volatile int16_t x567 = INT16_MIN;
int8_t x569 = -1;
uint64_t x586 = UINT64_MAX;
int32_t x588 = 2466;
volatile int32_t t146 = 5;
int8_t x596 = INT8_MIN;
int16_t x608 = -1;
int32_t x610 = INT32_MIN;
int8_t x611 = 0;
volatile int32_t x613 = INT32_MIN;
int16_t x627 = 7063;
int32_t x631 = INT32_MAX;
int8_t x632 = 1;
int32_t t158 = 2924689;
volatile int16_t x637 = INT16_MAX;
int64_t x639 = INT64_MIN;
int64_t x642 = -15LL;
int8_t x643 = INT8_MAX;
int32_t t162 = -15983139;
static volatile int32_t t163 = -174949;
int32_t x658 = INT32_MAX;
volatile int64_t x669 = INT64_MIN;
int32_t x671 = INT32_MIN;
volatile int32_t t167 = 0;
static uint64_t x673 = UINT64_MAX;
static int8_t x674 = INT8_MAX;
int64_t x677 = INT64_MIN;
int16_t x684 = INT16_MIN;
int32_t t170 = 94157;
volatile int32_t t171 = 2825436;
volatile uint64_t x692 = UINT64_MAX;
int32_t x694 = INT32_MAX;
static int64_t x695 = 1LL;
int8_t x697 = -3;
static uint16_t x704 = UINT16_MAX;
static volatile uint8_t x705 = 80U;
int64_t x709 = -1LL;
volatile int32_t t177 = 41;
uint16_t x713 = 1279U;
volatile int64_t x716 = -1LL;
volatile int64_t x717 = INT64_MIN;
int32_t x727 = INT32_MIN;
int64_t x728 = INT64_MIN;
uint16_t x730 = 6U;
static int8_t x737 = INT8_MIN;
int32_t t185 = -254;
int32_t x745 = INT32_MAX;
static int32_t x746 = INT32_MAX;
static volatile int32_t t186 = 93;
static int64_t x750 = INT64_MIN;
int32_t t187 = -64899819;
uint8_t x754 = UINT8_MAX;
static int8_t x757 = INT8_MIN;
volatile uint64_t x759 = UINT64_MAX;
volatile int32_t t190 = 13368;
uint32_t x765 = 202953U;
volatile uint32_t x768 = UINT32_MAX;
static int16_t x770 = INT16_MIN;
static int32_t t192 = -296;
int16_t x778 = 189;
int32_t x787 = 8680;
volatile int32_t t196 = -16439963;


void f0(void) {
    	volatile int32_t t0 = -4345291;

    t0 = (x1>(x2<=(x3^x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 29LL;
	static uint8_t x6 = 2U;
	volatile int32_t t1 = -2;

    t1 = (x5>(x6<=(x7^x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 1LLU;
	int64_t x10 = -1582245450LL;
	volatile int32_t x12 = -11574297;
	static volatile int32_t t2 = -358145;

    t2 = (x9>(x10<=(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	uint32_t x15 = 1U;
	static uint8_t x16 = 4U;
	volatile int32_t t3 = 3;

    t3 = (x13>(x14<=(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 6074544U;
	volatile int16_t x18 = -1;
	int8_t x20 = 0;
	volatile int32_t t4 = 45633861;

    t4 = (x17>(x18<=(x19^x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	volatile int32_t x22 = -141768;
	int8_t x23 = INT8_MIN;
	int16_t x24 = 12199;

    t5 = (x21>(x22<=(x23^x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MIN;
	uint16_t x26 = 367U;
	static int16_t x27 = 11;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -67640328;

    t6 = (x25>(x26<=(x27^x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	uint32_t x30 = UINT32_MAX;
	volatile uint8_t x32 = 1U;
	volatile int32_t t7 = 0;

    t7 = (x29>(x30<=(x31^x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int64_t x34 = -1LL;
	volatile int64_t x35 = -1LL;
	static volatile int32_t t8 = -101577;

    t8 = (x33>(x34<=(x35^x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	volatile int16_t x38 = 891;
	static uint16_t x39 = UINT16_MAX;
	int32_t t9 = 2;

    t9 = (x37>(x38<=(x39^x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = 1766421;
	int32_t x42 = -1;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = 0U;

    t10 = (x41>(x42<=(x43^x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = INT16_MIN;
	static int32_t x48 = -1;
	int32_t t11 = 12;

    t11 = (x45>(x46<=(x47^x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	static uint8_t x52 = 5U;
	int32_t t12 = -809171;

    t12 = (x49>(x50<=(x51^x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	volatile int32_t x54 = -1;
	volatile uint32_t x55 = 4U;
	static volatile int32_t t13 = 31;

    t13 = (x53>(x54<=(x55^x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	static int8_t x58 = -1;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = -919920;

    t14 = (x57>(x58<=(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = 7276093;
	int64_t x62 = INT64_MIN;

    t15 = (x61>(x62<=(x63^x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 65U;
	volatile int8_t x66 = INT8_MIN;
	uint8_t x67 = 1U;
	volatile int32_t x68 = -1;
	int32_t t16 = -208802;

    t16 = (x65>(x66<=(x67^x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 3LLU;
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MAX;
	volatile int8_t x72 = INT8_MIN;
	static int32_t t17 = -32;

    t17 = (x69>(x70<=(x71^x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	int8_t x74 = 2;
	static uint64_t x75 = UINT64_MAX;
	volatile uint8_t x76 = 23U;
	int32_t t18 = -13;

    t18 = (x73>(x74<=(x75^x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x79 = INT32_MIN;
	volatile int32_t t19 = -341;

    t19 = (x77>(x78<=(x79^x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	static int8_t x82 = 7;
	uint64_t x84 = 7079LLU;
	volatile int32_t t20 = -1;

    t20 = (x81>(x82<=(x83^x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = -3;
	int64_t x87 = INT64_MIN;
	int8_t x88 = -1;
	int32_t t21 = 0;

    t21 = (x85>(x86<=(x87^x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 0U;
	uint32_t x90 = 6695U;
	int8_t x91 = 1;
	int8_t x92 = INT8_MIN;
	static int32_t t22 = 1;

    t22 = (x89>(x90<=(x91^x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	volatile int64_t x94 = INT64_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -2670;

    t23 = (x93>(x94<=(x95^x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = -1;
	int64_t x98 = INT64_MAX;
	static uint32_t x100 = 74113U;
	volatile int32_t t24 = -12031141;

    t24 = (x97>(x98<=(x99^x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = -1;
	int16_t x102 = -1;
	uint32_t x103 = 399U;
	volatile int32_t t25 = -60331892;

    t25 = (x101>(x102<=(x103^x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x106 = -2688024355243277LL;
	static uint16_t x107 = 1376U;
	uint8_t x108 = 120U;

    t26 = (x105>(x106<=(x107^x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 1;
	uint64_t x110 = UINT64_MAX;
	int16_t x111 = -1;
	volatile int32_t t27 = 9;

    t27 = (x109>(x110<=(x111^x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = 999LLU;
	volatile int16_t x114 = INT16_MIN;
	int32_t x115 = -391468127;
	uint32_t x116 = 15U;
	int32_t t28 = -96514;

    t28 = (x113>(x114<=(x115^x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	int64_t x118 = INT64_MAX;
	volatile uint16_t x120 = 1U;
	int32_t t29 = -172613;

    t29 = (x117>(x118<=(x119^x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x122 = INT16_MIN;
	static int64_t x123 = INT64_MIN;
	int8_t x124 = 0;

    t30 = (x121>(x122<=(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = INT8_MAX;
	int16_t x128 = INT16_MAX;
	int32_t t31 = -25537;

    t31 = (x125>(x126<=(x127^x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x130 = UINT64_MAX;
	volatile uint16_t x131 = 150U;
	volatile int8_t x132 = -1;
	volatile int32_t t32 = 19;

    t32 = (x129>(x130<=(x131^x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x134 = 73U;
	volatile uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t33 = -3;

    t33 = (x133>(x134<=(x135^x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	static int64_t x138 = INT64_MAX;
	uint64_t x139 = UINT64_MAX;
	static int8_t x140 = INT8_MIN;

    t34 = (x137>(x138<=(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x141 = UINT8_MAX;
	int8_t x143 = 1;

    t35 = (x141>(x142<=(x143^x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -65;
	static int64_t x146 = INT64_MAX;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -3;
	int32_t t36 = -24;

    t36 = (x145>(x146<=(x147^x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x149 = 1U;
	static uint16_t x150 = 27448U;
	static volatile int64_t x151 = -1LL;
	volatile int32_t t37 = -438;

    t37 = (x149>(x150<=(x151^x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x155 = INT8_MAX;
	uint8_t x156 = 98U;
	static volatile int32_t t38 = -12550;

    t38 = (x153>(x154<=(x155^x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x157 = 251657199U;
	int8_t x158 = 3;
	int64_t x160 = -1LL;

    t39 = (x157>(x158<=(x159^x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 0;
	int8_t x162 = INT8_MIN;
	static volatile int32_t x164 = -1;
	volatile int32_t t40 = 369263;

    t40 = (x161>(x162<=(x163^x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	int32_t x167 = -10614;
	int32_t x168 = -7;
	static int32_t t41 = -75622805;

    t41 = (x165>(x166<=(x167^x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MAX;
	volatile int8_t x172 = INT8_MIN;

    t42 = (x169>(x170<=(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	static volatile uint16_t x174 = UINT16_MAX;
	uint32_t x175 = 536725478U;
	volatile uint16_t x176 = 58U;
	volatile int32_t t43 = -2519699;

    t43 = (x173>(x174<=(x175^x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	static volatile int32_t t44 = -11601269;

    t44 = (x177>(x178<=(x179^x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MAX;
	uint8_t x183 = 28U;
	int16_t x184 = INT16_MIN;
	static int32_t t45 = 8307427;

    t45 = (x181>(x182<=(x183^x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MIN;
	volatile int64_t x187 = -1LL;
	uint8_t x188 = 2U;

    t46 = (x185>(x186<=(x187^x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 273;
	static int16_t x190 = INT16_MIN;
	volatile int32_t x191 = INT32_MIN;
	int16_t x192 = -1;
	int32_t t47 = -16;

    t47 = (x189>(x190<=(x191^x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = INT32_MIN;
	volatile uint32_t x196 = 9909244U;
	volatile int32_t t48 = 1053201486;

    t48 = (x193>(x194<=(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MAX;
	int8_t x199 = -50;
	int64_t x200 = INT64_MAX;
	volatile int32_t t49 = -140401806;

    t49 = (x197>(x198<=(x199^x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = 92U;
	volatile int32_t x202 = INT32_MIN;
	static int32_t x203 = INT32_MIN;
	volatile int32_t t50 = 46;

    t50 = (x201>(x202<=(x203^x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	int32_t x207 = INT32_MIN;
	volatile uint32_t x208 = UINT32_MAX;
	int32_t t51 = -14501563;

    t51 = (x205>(x206<=(x207^x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = 64098622700900LL;
	volatile uint8_t x210 = 6U;
	int8_t x211 = INT8_MIN;
	uint16_t x212 = 46U;
	static int32_t t52 = -2379;

    t52 = (x209>(x210<=(x211^x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = -13;
	int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MIN;
	int32_t t53 = 0;

    t53 = (x213>(x214<=(x215^x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 1U;
	static int8_t x219 = 5;
	int32_t x220 = 965892;

    t54 = (x217>(x218<=(x219^x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -197831294;
	volatile int32_t t55 = -5256;

    t55 = (x221>(x222<=(x223^x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 53U;
	static volatile uint8_t x227 = 81U;
	int64_t x228 = INT64_MIN;
	static volatile int32_t t56 = 49050002;

    t56 = (x225>(x226<=(x227^x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 14U;
	static uint16_t x230 = UINT16_MAX;
	static uint8_t x231 = 0U;
	volatile int32_t t57 = 246297;

    t57 = (x229>(x230<=(x231^x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 0;
	uint64_t x234 = 6887LLU;
	int8_t x235 = -3;
	int16_t x236 = -1;
	int32_t t58 = 208924999;

    t58 = (x233>(x234<=(x235^x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x237 = 31302LLU;
	static int32_t x238 = INT32_MIN;
	int64_t x239 = 19LL;
	static uint32_t x240 = UINT32_MAX;
	volatile int32_t t59 = 4646;

    t59 = (x237>(x238<=(x239^x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 1408U;
	volatile uint32_t x242 = 3U;
	int16_t x243 = -1;
	int64_t x244 = INT64_MAX;
	int32_t t60 = -44;

    t60 = (x241>(x242<=(x243^x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	uint8_t x246 = 4U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 793;

    t61 = (x245>(x246<=(x247^x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = 14;

    t62 = (x249>(x250<=(x251^x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	uint64_t x254 = 48422LLU;
	int32_t x255 = INT32_MIN;
	int16_t x256 = -222;

    t63 = (x253>(x254<=(x255^x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = INT32_MAX;
	uint64_t x259 = UINT64_MAX;
	static int32_t t64 = 264071117;

    t64 = (x257>(x258<=(x259^x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MIN;
	int32_t x262 = -1;
	int8_t x263 = INT8_MIN;
	static uint8_t x264 = UINT8_MAX;
	static int32_t t65 = 62753515;

    t65 = (x261>(x262<=(x263^x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 11405004453LLU;
	uint64_t x266 = 41731594LLU;
	static volatile int8_t x267 = 2;
	uint32_t x268 = 3U;
	int32_t t66 = -4338907;

    t66 = (x265>(x266<=(x267^x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	volatile int16_t x271 = INT16_MIN;
	uint64_t x272 = 0LLU;
	int32_t t67 = -3577266;

    t67 = (x269>(x270<=(x271^x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int64_t x274 = INT64_MIN;
	static int8_t x275 = -46;
	int16_t x276 = INT16_MIN;

    t68 = (x273>(x274<=(x275^x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	uint16_t x278 = 6075U;
	int32_t x279 = -1;
	int16_t x280 = INT16_MIN;
	int32_t t69 = 4;

    t69 = (x277>(x278<=(x279^x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = 381LL;
	int32_t x283 = INT32_MIN;
	int8_t x284 = -52;
	volatile int32_t t70 = -71;

    t70 = (x281>(x282<=(x283^x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 1;
	uint16_t x286 = UINT16_MAX;
	volatile int64_t x287 = INT64_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -8;

    t71 = (x285>(x286<=(x287^x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	uint32_t x290 = UINT32_MAX;
	uint64_t x291 = 24421LLU;
	int8_t x292 = INT8_MIN;
	int32_t t72 = -50845224;

    t72 = (x289>(x290<=(x291^x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	int32_t x294 = -99;
	volatile uint16_t x296 = UINT16_MAX;
	int32_t t73 = 55870;

    t73 = (x293>(x294<=(x295^x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	volatile uint16_t x298 = 4U;
	int32_t x300 = -1;
	volatile int32_t t74 = 10043;

    t74 = (x297>(x298<=(x299^x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = -1LL;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = INT32_MAX;
	volatile int32_t t75 = 43;

    t75 = (x301>(x302<=(x303^x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	static volatile int32_t t76 = 15166510;

    t76 = (x305>(x306<=(x307^x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 2141411272LLU;
	int8_t x311 = -1;
	int16_t x312 = 125;
	static int32_t t77 = 141470234;

    t77 = (x309>(x310<=(x311^x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	uint64_t x314 = 126176931894224347LLU;
	volatile uint32_t x315 = 50U;
	uint64_t x316 = 340LLU;
	volatile int32_t t78 = -184643;

    t78 = (x313>(x314<=(x315^x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	static int64_t x318 = 373LL;
	int64_t x319 = INT64_MAX;
	volatile int64_t x320 = 9826554LL;
	static int32_t t79 = -47;

    t79 = (x317>(x318<=(x319^x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	int32_t x322 = 40902079;

    t80 = (x321>(x322<=(x323^x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	volatile int64_t x326 = -1LL;
	static int32_t x327 = INT32_MIN;
	int32_t t81 = 0;

    t81 = (x325>(x326<=(x327^x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = -18665;
	int32_t x330 = INT32_MAX;
	volatile int32_t x331 = -1;

    t82 = (x329>(x330<=(x331^x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = -1LL;
	static int32_t x334 = INT32_MIN;
	static int64_t x335 = INT64_MIN;
	int32_t x336 = 453445;

    t83 = (x333>(x334<=(x335^x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x337 = 1347132740785763LLU;
	volatile int32_t x338 = -1;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = 1;

    t84 = (x337>(x338<=(x339^x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = -1;
	static uint32_t x342 = UINT32_MAX;
	int16_t x343 = 2;
	int32_t x344 = 942;
	volatile int32_t t85 = -14345;

    t85 = (x341>(x342<=(x343^x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = 1U;
	static volatile uint16_t x346 = UINT16_MAX;
	volatile int64_t x348 = -1LL;
	int32_t t86 = 1466212;

    t86 = (x345>(x346<=(x347^x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	volatile int32_t x351 = INT32_MIN;
	int32_t x352 = -8287;

    t87 = (x349>(x350<=(x351^x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	uint64_t x354 = 5482624LLU;
	volatile int16_t x356 = INT16_MIN;

    t88 = (x353>(x354<=(x355^x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 10U;
	volatile uint8_t x358 = 1U;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -2013;

    t89 = (x357>(x358<=(x359^x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x361 = 13U;
	int8_t x362 = 7;
	int8_t x363 = INT8_MIN;
	int64_t x364 = -1LL;
	int32_t t90 = -3;

    t90 = (x361>(x362<=(x363^x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	static int32_t x366 = INT32_MIN;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = -29912;

    t91 = (x365>(x366<=(x367^x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = 381264328256LL;
	int32_t x370 = INT32_MIN;
	uint64_t x371 = 49LLU;
	uint16_t x372 = 24U;
	int32_t t92 = 1;

    t92 = (x369>(x370<=(x371^x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x374 = 6;
	volatile int32_t x375 = -1831;
	uint8_t x376 = 0U;
	volatile int32_t t93 = -5;

    t93 = (x373>(x374<=(x375^x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x377 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	static volatile int32_t t94 = 26400;

    t94 = (x377>(x378<=(x379^x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = 810LL;
	int64_t x382 = INT64_MAX;
	uint16_t x383 = 0U;
	int32_t t95 = -22;

    t95 = (x381>(x382<=(x383^x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x386 = 84165466U;
	int32_t x388 = -2;
	volatile int32_t t96 = -4776262;

    t96 = (x385>(x386<=(x387^x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 1068U;
	int64_t x391 = 240277LL;
	uint8_t x392 = UINT8_MAX;
	int32_t t97 = -997035;

    t97 = (x389>(x390<=(x391^x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x394 = INT16_MAX;
	int16_t x396 = 12;
	static int32_t t98 = -1481384;

    t98 = (x393>(x394<=(x395^x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	uint64_t x398 = UINT64_MAX;
	static volatile uint32_t x399 = 100U;
	int32_t x400 = INT32_MIN;

    t99 = (x397>(x398<=(x399^x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	volatile int16_t x402 = -1;
	int64_t x403 = INT64_MIN;
	static int8_t x404 = -14;
	static volatile int32_t t100 = -114;

    t100 = (x401>(x402<=(x403^x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = -2706516683LL;
	int16_t x406 = -1;
	static uint8_t x407 = 11U;
	uint8_t x408 = 1U;
	static volatile int32_t t101 = -236851404;

    t101 = (x405>(x406<=(x407^x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	uint16_t x410 = 0U;
	uint16_t x411 = 3284U;
	static int64_t x412 = -412118844LL;
	static int32_t t102 = -4103;

    t102 = (x409>(x410<=(x411^x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 30U;
	volatile int8_t x414 = -26;
	uint64_t x415 = 4893527LLU;
	static uint8_t x416 = 91U;
	volatile int32_t t103 = -14;

    t103 = (x413>(x414<=(x415^x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	static int8_t x418 = -15;
	int16_t x420 = INT16_MIN;
	int32_t t104 = -3929;

    t104 = (x417>(x418<=(x419^x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MAX;
	uint32_t x422 = 3U;
	int16_t x423 = INT16_MAX;
	volatile uint16_t x424 = 40U;

    t105 = (x421>(x422<=(x423^x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 97722697LL;
	uint8_t x427 = 88U;
	int64_t x428 = 20213417LL;
	volatile int32_t t106 = -488;

    t106 = (x425>(x426<=(x427^x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -7720723690861LL;
	static int64_t x430 = INT64_MAX;
	int8_t x432 = -1;
	volatile int32_t t107 = 6538;

    t107 = (x429>(x430<=(x431^x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = 4430LL;
	int8_t x434 = 0;
	uint32_t x435 = 63U;
	static uint16_t x436 = UINT16_MAX;
	int32_t t108 = 1921814;

    t108 = (x433>(x434<=(x435^x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = UINT16_MAX;
	int64_t x438 = INT64_MAX;
	int32_t x439 = INT32_MAX;
	volatile int8_t x440 = INT8_MIN;
	static int32_t t109 = 7414;

    t109 = (x437>(x438<=(x439^x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = 14LL;
	volatile int32_t x442 = INT32_MIN;
	int8_t x443 = -1;
	static int32_t t110 = 2;

    t110 = (x441>(x442<=(x443^x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -1;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = INT32_MIN;
	uint8_t x448 = 5U;
	int32_t t111 = -17705;

    t111 = (x445>(x446<=(x447^x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	uint32_t x450 = UINT32_MAX;
	uint32_t x451 = 7U;

    t112 = (x449>(x450<=(x451^x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MAX;
	int64_t x454 = 2858051372712699LL;
	int16_t x455 = 359;
	int32_t x456 = 0;
	volatile int32_t t113 = -3989819;

    t113 = (x453>(x454<=(x455^x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -879;
	static uint64_t x459 = UINT64_MAX;
	volatile int32_t x460 = -83596;

    t114 = (x457>(x458<=(x459^x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = INT64_MAX;
	static int32_t x463 = -1;
	static int8_t x464 = INT8_MIN;
	int32_t t115 = -271;

    t115 = (x461>(x462<=(x463^x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile uint64_t x466 = UINT64_MAX;
	int8_t x467 = -22;
	static uint16_t x468 = 0U;
	static volatile int32_t t116 = 629351;

    t116 = (x465>(x466<=(x467^x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x471 = INT16_MIN;
	volatile int8_t x472 = INT8_MIN;
	volatile int32_t t117 = -2189;

    t117 = (x469>(x470<=(x471^x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 15;
	int16_t x474 = -1;
	int64_t x475 = INT64_MAX;
	static volatile int8_t x476 = -1;

    t118 = (x473>(x474<=(x475^x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	uint16_t x478 = UINT16_MAX;
	int8_t x479 = 1;
	static uint16_t x480 = 16U;
	volatile int32_t t119 = 10190653;

    t119 = (x477>(x478<=(x479^x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = INT8_MIN;
	volatile int8_t x482 = INT8_MAX;
	static int32_t x483 = INT32_MAX;
	int8_t x484 = INT8_MIN;
	static int32_t t120 = 1;

    t120 = (x481>(x482<=(x483^x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = UINT64_MAX;
	static volatile uint64_t x486 = 4530166114082LLU;
	int64_t x487 = -1LL;
	volatile int64_t x488 = -1390379339LL;
	int32_t t121 = 153672338;

    t121 = (x485>(x486<=(x487^x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x490 = -1LL;
	static int16_t x491 = -2;
	volatile int8_t x492 = 6;
	static volatile int32_t t122 = 1;

    t122 = (x489>(x490<=(x491^x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = 437;
	int16_t x495 = -191;
	int64_t x496 = -1LL;
	int32_t t123 = -795733807;

    t123 = (x493>(x494<=(x495^x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 897515U;
	uint64_t x498 = UINT64_MAX;
	int32_t x500 = -40883;
	volatile int32_t t124 = 646;

    t124 = (x497>(x498<=(x499^x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	volatile int32_t x503 = INT32_MIN;
	int32_t t125 = -4507530;

    t125 = (x501>(x502<=(x503^x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	uint64_t x506 = UINT64_MAX;
	int64_t x507 = INT64_MAX;
	int16_t x508 = -1;
	volatile int32_t t126 = 9;

    t126 = (x505>(x506<=(x507^x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 1293061U;
	int64_t x510 = 4110973055669LL;
	int32_t x511 = -15700;
	int32_t t127 = -4;

    t127 = (x509>(x510<=(x511^x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x513 = INT16_MAX;
	int8_t x514 = 60;
	int32_t x516 = INT32_MIN;
	int32_t t128 = -3777748;

    t128 = (x513>(x514<=(x515^x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	static volatile uint16_t x518 = 2U;
	int16_t x519 = -1;
	volatile uint32_t x520 = UINT32_MAX;
	volatile int32_t t129 = -363;

    t129 = (x517>(x518<=(x519^x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = UINT32_MAX;
	int32_t x522 = 0;
	int16_t x523 = INT16_MIN;
	uint64_t x524 = UINT64_MAX;
	static int32_t t130 = -10728777;

    t130 = (x521>(x522<=(x523^x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 10283U;
	uint16_t x526 = 56U;
	int16_t x527 = -1;
	int16_t x528 = -28;
	volatile int32_t t131 = -3677;

    t131 = (x525>(x526<=(x527^x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x529 = UINT8_MAX;
	int16_t x531 = INT16_MIN;
	static int16_t x532 = INT16_MIN;
	volatile int32_t t132 = 317423065;

    t132 = (x529>(x530<=(x531^x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x533 = 12305003894440LLU;
	uint16_t x534 = UINT16_MAX;
	uint8_t x535 = UINT8_MAX;
	uint8_t x536 = 36U;

    t133 = (x533>(x534<=(x535^x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	int8_t x538 = -3;
	int8_t x539 = INT8_MIN;
	static int32_t t134 = 16360;

    t134 = (x537>(x538<=(x539^x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -51;
	volatile int16_t x542 = -2;
	uint8_t x543 = UINT8_MAX;
	int32_t x544 = INT32_MIN;
	volatile int32_t t135 = 30;

    t135 = (x541>(x542<=(x543^x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	int8_t x547 = -8;
	int32_t x548 = -1050918890;
	int32_t t136 = 131505755;

    t136 = (x545>(x546<=(x547^x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x550 = INT8_MIN;
	int16_t x551 = 24;
	int8_t x552 = -39;

    t137 = (x549>(x550<=(x551^x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	int16_t x555 = INT16_MAX;
	static uint16_t x556 = 259U;
	static int32_t t138 = -1;

    t138 = (x553>(x554<=(x555^x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = UINT32_MAX;
	static volatile int64_t x558 = -1LL;
	uint32_t x559 = UINT32_MAX;
	uint32_t x560 = 8625U;
	static volatile int32_t t139 = 47055;

    t139 = (x557>(x558<=(x559^x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = -1LL;
	int8_t x563 = -1;
	static int32_t t140 = -3;

    t140 = (x561>(x562<=(x563^x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	static int16_t x566 = -1;
	int32_t x568 = INT32_MAX;
	int32_t t141 = -7021;

    t141 = (x565>(x566<=(x567^x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = 82144665U;
	int32_t x571 = INT32_MAX;
	uint64_t x572 = UINT64_MAX;
	int32_t t142 = -9378089;

    t142 = (x569>(x570<=(x571^x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x573 = -1;
	int8_t x574 = 6;
	int8_t x575 = 1;
	uint32_t x576 = 53974U;
	volatile int32_t t143 = -22;

    t143 = (x573>(x574<=(x575^x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = INT8_MAX;
	uint16_t x578 = 236U;
	int8_t x579 = -1;
	static volatile int8_t x580 = 20;
	int32_t t144 = -38591636;

    t144 = (x577>(x578<=(x579^x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = INT8_MIN;
	int32_t x582 = 5665;
	int64_t x583 = INT64_MIN;
	volatile int32_t x584 = 309;
	int32_t t145 = -53930367;

    t145 = (x581>(x582<=(x583^x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 12U;
	static uint64_t x587 = 78497LLU;

    t146 = (x585>(x586<=(x587^x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	uint16_t x590 = 6270U;
	volatile int64_t x591 = INT64_MIN;
	uint16_t x592 = 1U;
	volatile int32_t t147 = -232436;

    t147 = (x589>(x590<=(x591^x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	volatile uint32_t x594 = 1787204597U;
	static int64_t x595 = 181657330089624730LL;
	int32_t t148 = -10;

    t148 = (x593>(x594<=(x595^x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	static volatile int32_t x598 = -1;
	int64_t x599 = INT64_MIN;
	int32_t x600 = -246;
	int32_t t149 = 1;

    t149 = (x597>(x598<=(x599^x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x601 = INT32_MIN;
	uint64_t x602 = UINT64_MAX;
	int8_t x603 = INT8_MIN;
	static volatile uint8_t x604 = 2U;
	volatile int32_t t150 = -10116716;

    t150 = (x601>(x602<=(x603^x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 239166LLU;
	volatile uint8_t x606 = 1U;
	volatile int8_t x607 = -1;
	static int32_t t151 = 1231323;

    t151 = (x605>(x606<=(x607^x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = 60285106LL;
	static int8_t x612 = -1;
	int32_t t152 = 4473;

    t152 = (x609>(x610<=(x611^x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = 1;
	int64_t x615 = -1LL;
	int8_t x616 = INT8_MAX;
	int32_t t153 = -227353611;

    t153 = (x613>(x614<=(x615^x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	int16_t x618 = INT16_MIN;
	int64_t x619 = 851499087099LL;
	int16_t x620 = INT16_MIN;
	static volatile int32_t t154 = 906;

    t154 = (x617>(x618<=(x619^x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = -1;
	uint32_t x622 = UINT32_MAX;
	uint64_t x623 = 190866976609LLU;
	volatile int32_t x624 = INT32_MIN;
	volatile int32_t t155 = 253;

    t155 = (x621>(x622<=(x623^x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 1276;
	volatile int32_t x626 = INT32_MIN;
	uint8_t x628 = 1U;
	volatile int32_t t156 = -151228;

    t156 = (x625>(x626<=(x627^x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 21U;
	int64_t x630 = 242205671962021222LL;
	static int32_t t157 = -119887;

    t157 = (x629>(x630<=(x631^x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 43194U;
	volatile uint32_t x634 = 328215414U;
	static uint32_t x635 = UINT32_MAX;
	volatile int16_t x636 = -1;

    t158 = (x633>(x634<=(x635^x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = INT64_MIN;
	volatile int32_t x640 = 259;
	volatile int32_t t159 = -7785277;

    t159 = (x637>(x638<=(x639^x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 244LLU;
	int32_t x644 = INT32_MIN;
	volatile int32_t t160 = -38297;

    t160 = (x641>(x642<=(x643^x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 1U;
	uint32_t x646 = 550150276U;
	static int32_t x647 = INT32_MAX;
	int64_t x648 = -1LL;
	volatile int32_t t161 = 1;

    t161 = (x645>(x646<=(x647^x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 2U;
	volatile uint16_t x650 = 91U;
	int64_t x651 = 6753047LL;
	static volatile int8_t x652 = INT8_MIN;

    t162 = (x649>(x650<=(x651^x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 59U;
	volatile int8_t x654 = -1;
	uint16_t x655 = UINT16_MAX;
	uint16_t x656 = 72U;

    t163 = (x653>(x654<=(x655^x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x657 = INT16_MIN;
	int16_t x659 = -492;
	int16_t x660 = -4028;
	volatile int32_t t164 = 180590805;

    t164 = (x657>(x658<=(x659^x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1852116;
	uint16_t x662 = UINT16_MAX;
	int64_t x663 = INT64_MIN;
	int8_t x664 = -1;
	int32_t t165 = -43862;

    t165 = (x661>(x662<=(x663^x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	int32_t x666 = -123427;
	static volatile uint32_t x667 = UINT32_MAX;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t166 = -195911944;

    t166 = (x665>(x666<=(x667^x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x670 = UINT64_MAX;
	uint32_t x672 = UINT32_MAX;

    t167 = (x669>(x670<=(x671^x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x675 = 1LL;
	int32_t x676 = -1;
	static volatile int32_t t168 = -389009;

    t168 = (x673>(x674<=(x675^x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x678 = 13736U;
	int8_t x679 = INT8_MAX;
	int16_t x680 = INT16_MIN;
	volatile int32_t t169 = 2;

    t169 = (x677>(x678<=(x679^x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x681 = 0;
	volatile int32_t x682 = -1;
	static uint32_t x683 = 618083U;

    t170 = (x681>(x682<=(x683^x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = INT8_MIN;
	int64_t x686 = -20098LL;
	static uint16_t x687 = 1544U;
	static volatile uint64_t x688 = 2616651201142838539LLU;

    t171 = (x685>(x686<=(x687^x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 15310804075LLU;
	int16_t x690 = INT16_MIN;
	int32_t x691 = INT32_MIN;
	int32_t t172 = 595;

    t172 = (x689>(x690<=(x691^x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x693 = -1;
	static int64_t x696 = INT64_MIN;
	volatile int32_t t173 = 22218;

    t173 = (x693>(x694<=(x695^x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = INT64_MIN;
	int32_t x699 = INT32_MAX;
	uint32_t x700 = 569910U;
	int32_t t174 = 16796;

    t174 = (x697>(x698<=(x699^x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = -674;
	int16_t x702 = INT16_MIN;
	static int64_t x703 = -4139233528322145386LL;
	int32_t t175 = 775;

    t175 = (x701>(x702<=(x703^x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = INT64_MAX;
	uint16_t x707 = UINT16_MAX;
	int16_t x708 = INT16_MIN;
	int32_t t176 = -13;

    t176 = (x705>(x706<=(x707^x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x710 = UINT64_MAX;
	int16_t x711 = INT16_MIN;
	uint32_t x712 = 3851385U;

    t177 = (x709>(x710<=(x711^x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x714 = 264233748U;
	int32_t x715 = INT32_MAX;
	volatile int32_t t178 = -39959460;

    t178 = (x713>(x714<=(x715^x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x718 = 121309233841105LLU;
	static uint16_t x719 = UINT16_MAX;
	int16_t x720 = 30;
	int32_t t179 = -317877977;

    t179 = (x717>(x718<=(x719^x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	uint16_t x722 = UINT16_MAX;
	uint16_t x723 = 422U;
	int16_t x724 = INT16_MIN;
	static int32_t t180 = -17;

    t180 = (x721>(x722<=(x723^x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 81844U;
	int32_t x726 = 1474807;
	volatile int32_t t181 = 837178;

    t181 = (x725>(x726<=(x727^x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	int64_t x731 = -85LL;
	uint16_t x732 = 21U;
	int32_t t182 = 161;

    t182 = (x729>(x730<=(x731^x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = UINT8_MAX;
	static int32_t x734 = INT32_MAX;
	volatile uint32_t x735 = 25U;
	int64_t x736 = INT64_MIN;
	int32_t t183 = -55040;

    t183 = (x733>(x734<=(x735^x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x738 = 121U;
	static int32_t x739 = INT32_MAX;
	static int8_t x740 = 1;
	volatile int32_t t184 = -239179940;

    t184 = (x737>(x738<=(x739^x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x741 = 6574308;
	int64_t x742 = INT64_MIN;
	volatile int64_t x743 = INT64_MIN;
	int32_t x744 = -1;

    t185 = (x741>(x742<=(x743^x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x747 = 8U;
	int64_t x748 = INT64_MIN;

    t186 = (x745>(x746<=(x747^x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = 655;
	static int64_t x751 = -1LL;
	uint8_t x752 = 1U;

    t187 = (x749>(x750<=(x751^x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = 1;
	int64_t x755 = INT64_MAX;
	int32_t x756 = -1605952;
	volatile int32_t t188 = 10;

    t188 = (x753>(x754<=(x755^x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x758 = UINT8_MAX;
	uint16_t x760 = UINT16_MAX;
	int32_t t189 = -99;

    t189 = (x757>(x758<=(x759^x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = INT8_MIN;
	volatile uint32_t x762 = UINT32_MAX;
	volatile uint64_t x763 = 235791134LLU;
	uint64_t x764 = 12532886LLU;

    t190 = (x761>(x762<=(x763^x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = 2U;
	volatile int32_t x767 = INT32_MIN;
	static volatile int32_t t191 = 1874;

    t191 = (x765>(x766<=(x767^x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = INT16_MAX;
	static uint32_t x771 = UINT32_MAX;
	int16_t x772 = 1;

    t192 = (x769>(x770<=(x771^x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -1;
	int8_t x774 = -1;
	static volatile uint8_t x775 = 4U;
	uint16_t x776 = UINT16_MAX;
	static int32_t t193 = 10567098;

    t193 = (x773>(x774<=(x775^x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	static int8_t x779 = -1;
	int32_t x780 = -6182279;
	volatile int32_t t194 = -1;

    t194 = (x777>(x778<=(x779^x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = 47210651;
	int8_t x782 = -1;
	static int32_t x783 = 46084334;
	int8_t x784 = INT8_MIN;
	static volatile int32_t t195 = 18068007;

    t195 = (x781>(x782<=(x783^x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 3U;
	static int32_t x786 = 113;
	int8_t x788 = INT8_MIN;

    t196 = (x785>(x786<=(x787^x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 388U;
	uint32_t x790 = 38U;
	static int64_t x791 = INT64_MIN;
	uint64_t x792 = 7LLU;
	int32_t t197 = 28048;

    t197 = (x789>(x790<=(x791^x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	int16_t x794 = INT16_MIN;
	static int32_t x795 = 135409202;
	int32_t x796 = -1;
	static int32_t t198 = -1516;

    t198 = (x793>(x794<=(x795^x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	int32_t x798 = INT32_MIN;
	int64_t x799 = INT64_MAX;
	static int8_t x800 = INT8_MAX;
	volatile int32_t t199 = -28;

    t199 = (x797>(x798<=(x799^x800)));

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

