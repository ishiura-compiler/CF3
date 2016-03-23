
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

uint8_t x1 = 1U;
uint64_t x2 = UINT64_MAX;
int8_t x5 = INT8_MAX;
int8_t x7 = INT8_MIN;
static volatile int16_t x8 = INT16_MAX;
volatile uint64_t x12 = 2078656836LLU;
int8_t x18 = -1;
static int32_t x19 = INT32_MAX;
int32_t t4 = 15454;
int16_t x23 = INT16_MIN;
static volatile int32_t t5 = -4106696;
static int8_t x26 = INT8_MIN;
uint32_t x31 = 92080U;
volatile int64_t x34 = INT64_MIN;
int32_t t9 = 69909;
int32_t x41 = 3096169;
volatile uint64_t x43 = UINT64_MAX;
volatile int32_t t10 = -414;
static uint64_t x45 = 7650232751493893620LLU;
static volatile int32_t t12 = -5;
static int8_t x57 = 0;
int8_t x58 = -11;
static volatile int32_t t15 = -15;
static int32_t x68 = -1;
uint32_t x76 = 14308U;
uint8_t x77 = 101U;
int16_t x80 = 2;
static int64_t x87 = -979567825825LL;
static volatile int32_t t21 = 90082097;
static int32_t t23 = 53;
volatile int8_t x98 = INT8_MIN;
volatile int32_t t24 = -76799;
int16_t x107 = INT16_MAX;
volatile int16_t x110 = 12;
volatile int64_t x116 = INT64_MIN;
int32_t t28 = 2801839;
static int64_t x119 = -1LL;
volatile int32_t x123 = 438948576;
int8_t x126 = -1;
uint32_t x130 = 706U;
int32_t t34 = -89555161;
int8_t x151 = INT8_MIN;
int8_t x155 = -1;
static int8_t x178 = INT8_MIN;
static uint8_t x201 = UINT8_MAX;
int8_t x210 = INT8_MIN;
volatile int64_t x213 = INT64_MIN;
uint64_t x214 = UINT64_MAX;
volatile int32_t t50 = 96;
int64_t x221 = -88235LL;
static int32_t t52 = -224460320;
volatile int64_t x225 = INT64_MAX;
volatile int16_t x228 = INT16_MIN;
int64_t x231 = 2348LL;
uint32_t x232 = 13399U;
static volatile uint64_t x238 = 353930734LLU;
static uint64_t x243 = 2038969295301LLU;
volatile int16_t x252 = -1;
int32_t x254 = INT32_MAX;
volatile int32_t t60 = -3;
uint8_t x260 = 0U;
volatile int32_t t64 = -9667;
int8_t x274 = -1;
uint16_t x278 = 78U;
uint16_t x279 = UINT16_MAX;
int16_t x291 = -1;
volatile int32_t x294 = INT32_MAX;
static int32_t x296 = 138;
int8_t x297 = INT8_MAX;
uint32_t x301 = 503063U;
volatile int8_t x302 = INT8_MIN;
int32_t t72 = 0;
volatile uint16_t x308 = 8066U;
uint8_t x312 = UINT8_MAX;
uint16_t x320 = UINT16_MAX;
static int32_t t76 = -847971;
static uint32_t x322 = UINT32_MAX;
static uint32_t x323 = 1474706060U;
int32_t t78 = -5993;
static volatile int16_t x330 = -1;
static int32_t x336 = INT32_MIN;
volatile int32_t t80 = 10130;
uint32_t x340 = 2035525U;
static int32_t x343 = INT32_MIN;
volatile int16_t x346 = -8441;
int16_t x348 = INT16_MIN;
int32_t t83 = 1;
uint16_t x352 = 3958U;
static int32_t x353 = INT32_MAX;
uint16_t x360 = 2099U;
uint64_t x361 = 64085798LLU;
static uint16_t x364 = 12902U;
int8_t x374 = -1;
uint8_t x376 = UINT8_MAX;
static int64_t x378 = -1LL;
int16_t x379 = INT16_MAX;
volatile int32_t x381 = 4963165;
int64_t x383 = 6810LL;
int32_t x390 = -27874;
int32_t x396 = -472950776;
volatile uint64_t x400 = 2294131171176106556LLU;
volatile int32_t t96 = -1142799;
volatile int64_t x401 = -1LL;
static int8_t x402 = 1;
int8_t x408 = 0;
volatile int64_t x409 = INT64_MIN;
static int64_t x412 = -62909771902355991LL;
static int8_t x424 = -1;
static volatile int32_t t102 = -29681448;
uint16_t x429 = UINT16_MAX;
int16_t x432 = INT16_MAX;
int32_t t103 = 58;
uint64_t x434 = 14433724580190LLU;
static int32_t t104 = -3;
volatile int16_t x439 = -1;
int32_t t105 = 144;
int32_t t106 = 1256666;
static volatile int16_t x445 = -1;
int16_t x446 = -1;
static int16_t x455 = INT16_MIN;
volatile int16_t x458 = INT16_MAX;
volatile int32_t t115 = -13;
static int32_t x483 = INT32_MIN;
uint64_t x486 = UINT64_MAX;
int8_t x489 = INT8_MIN;
volatile int16_t x491 = INT16_MAX;
int64_t x493 = -18752909621LL;
int8_t x496 = -1;
int32_t t119 = -6646;
int16_t x497 = INT16_MIN;
int64_t x525 = -1LL;
uint32_t x526 = UINT32_MAX;
int32_t x528 = -448995910;
uint64_t x533 = 1841279368256LLU;
int16_t x537 = -1;
volatile uint64_t x538 = UINT64_MAX;
static int64_t x546 = INT64_MAX;
int64_t x550 = -1LL;
int8_t x551 = -9;
static int8_t x565 = INT8_MIN;
uint8_t x567 = 2U;
int32_t t135 = -3274;
volatile int32_t x569 = INT32_MIN;
static int16_t x575 = INT16_MAX;
static uint16_t x580 = 13U;
volatile int32_t t138 = 65743;
uint16_t x584 = 1U;
int16_t x586 = -1;
static volatile int32_t t141 = 3331530;
static uint16_t x597 = UINT16_MAX;
volatile int32_t t145 = -1613;
int64_t x609 = 9026363248638542LL;
int16_t x613 = INT16_MIN;
int8_t x620 = -2;
static int64_t x624 = INT64_MIN;
int64_t x628 = INT64_MIN;
static int16_t x631 = -1;
uint8_t x638 = 43U;
volatile int32_t t153 = 0;
uint32_t x641 = 27842327U;
int16_t x645 = INT16_MIN;
int16_t x651 = INT16_MIN;
static int32_t t157 = 3558;
uint8_t x666 = 6U;
int8_t x667 = -3;
int64_t x669 = 31394301285LL;
int16_t x676 = INT16_MIN;
int64_t x678 = INT64_MIN;
volatile int32_t x680 = -135332819;
uint32_t x689 = 203U;
static volatile int32_t t165 = 1938;
int8_t x696 = 8;
static int32_t t166 = 219724;
volatile int32_t t167 = 9;
uint16_t x702 = UINT16_MAX;
static int32_t t168 = -1909513;
static int16_t x706 = INT16_MAX;
volatile uint8_t x711 = 58U;
int32_t x715 = INT32_MIN;
int32_t t171 = -840199479;
uint16_t x718 = 341U;
static uint64_t x722 = 18LLU;
int16_t x727 = INT16_MIN;
static uint8_t x731 = UINT8_MAX;
volatile int8_t x734 = INT8_MIN;
volatile int16_t x735 = INT16_MIN;
volatile int32_t t177 = -2816;
volatile int16_t x743 = 2280;
int64_t x744 = INT64_MIN;
volatile int32_t t178 = -10571034;
static int32_t x746 = INT32_MIN;
uint16_t x753 = UINT16_MAX;
int32_t x755 = 23144835;
volatile int8_t x759 = INT8_MAX;
volatile int32_t x762 = 602;
int32_t x771 = INT32_MIN;
int32_t t184 = 167033;
int64_t x773 = 17243062576923LL;
int8_t x778 = INT8_MIN;
int32_t t187 = 26634284;
int16_t x795 = -1;
int16_t x798 = 1;
volatile int64_t x799 = INT64_MAX;
int64_t x805 = 87669691225LL;
int8_t x811 = INT8_MAX;
int64_t x812 = -1LL;
volatile int8_t x814 = 1;
int8_t x815 = 11;
int64_t x817 = 238761LL;
int32_t x824 = -1;
uint8_t x829 = 2U;
int16_t x831 = -1;


void f0(void) {
    	int8_t x3 = INT8_MAX;
	static int8_t x4 = 2;
	volatile int32_t t0 = -7;

    t0 = ((x1&(x2%x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	volatile int32_t t1 = -10;

    t1 = ((x5&(x6%x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int64_t x10 = 483876300311LL;
	uint16_t x11 = 1253U;
	volatile int32_t t2 = -266139;

    t2 = ((x9&(x10%x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 5966U;
	uint64_t x14 = 286855238626548176LLU;
	int32_t x15 = INT32_MAX;
	uint16_t x16 = 2117U;
	volatile int32_t t3 = 259;

    t3 = ((x13&(x14%x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 8U;
	uint32_t x20 = 20269U;

    t4 = ((x17&(x18%x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int8_t x22 = -1;
	volatile int64_t x24 = INT64_MAX;

    t5 = ((x21&(x22%x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	uint64_t x27 = 3481LLU;
	uint32_t x28 = 0U;
	int32_t t6 = 22101;

    t6 = ((x25&(x26%x27))!=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = -1637;
	static volatile uint64_t x30 = 50063350446LLU;
	static volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 12037730;

    t7 = ((x29&(x30%x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -6096275733LL;
	int16_t x35 = INT16_MAX;
	static int8_t x36 = 23;
	int32_t t8 = 1;

    t8 = ((x33&(x34%x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	static int16_t x38 = 3;
	static int16_t x39 = INT16_MIN;
	uint64_t x40 = 7507LLU;

    t9 = ((x37&(x38%x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MIN;
	uint8_t x44 = 13U;

    t10 = ((x41&(x42%x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 134033231;

    t11 = ((x45&(x46%x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -4;
	int64_t x50 = -1LL;
	int16_t x51 = -1;
	uint64_t x52 = 51023013827LLU;

    t12 = ((x49&(x50%x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = -817;
	static uint32_t x54 = 6286573U;
	int64_t x55 = 7659318864876LL;
	int8_t x56 = -19;
	static volatile int32_t t13 = 1597;

    t13 = ((x53&(x54%x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = -229;

    t14 = ((x57&(x58%x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x61 = 5U;
	static volatile uint16_t x62 = UINT16_MAX;
	int16_t x63 = -1;
	uint64_t x64 = 4462748797539494LLU;

    t15 = ((x61&(x62%x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	int8_t x66 = INT8_MIN;
	int8_t x67 = INT8_MIN;
	volatile int32_t t16 = 6476235;

    t16 = ((x65&(x66%x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 27U;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = UINT32_MAX;
	volatile int64_t x72 = 2470235761191408524LL;
	volatile int32_t t17 = 1;

    t17 = ((x69&(x70%x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MIN;
	volatile int32_t x75 = -1;
	int32_t t18 = 1;

    t18 = ((x73&(x74%x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	volatile int32_t t19 = 11;

    t19 = ((x77&(x78%x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -1;
	static int8_t x82 = -1;
	int16_t x83 = INT16_MIN;
	volatile uint64_t x84 = 1LLU;
	int32_t t20 = -39048168;

    t20 = ((x81&(x82%x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -46;
	int16_t x86 = -12;
	int16_t x88 = INT16_MIN;

    t21 = ((x85&(x86%x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MAX;
	static int64_t x90 = INT64_MAX;
	volatile int64_t x91 = -1LL;
	uint16_t x92 = 6365U;
	static volatile int32_t t22 = -19699;

    t22 = ((x89&(x90%x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = -33;
	uint16_t x94 = UINT16_MAX;
	static int16_t x95 = -157;
	uint64_t x96 = 82248LLU;

    t23 = ((x93&(x94%x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 1;
	volatile uint8_t x99 = 30U;
	int8_t x100 = INT8_MAX;

    t24 = ((x97&(x98%x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static int8_t x102 = -3;
	int64_t x103 = -2337676LL;
	int32_t x104 = -2683;
	volatile int32_t t25 = -16;

    t25 = ((x101&(x102%x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 1516597603661743LLU;
	static int32_t x106 = INT32_MAX;
	int64_t x108 = INT64_MAX;
	static volatile int32_t t26 = 26143393;

    t26 = ((x105&(x106%x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = -21;
	uint64_t x111 = 49409109795341LLU;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -16439;

    t27 = ((x109&(x110%x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 5U;
	static uint16_t x114 = 1662U;
	int32_t x115 = INT32_MIN;

    t28 = ((x113&(x114%x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	int8_t x118 = 1;
	int32_t x120 = -1;
	int32_t t29 = -12887;

    t29 = ((x117&(x118%x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MIN;
	int16_t x122 = 13514;
	volatile uint16_t x124 = 280U;
	int32_t t30 = 24;

    t30 = ((x121&(x122%x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	int32_t x127 = -17721;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -113621230;

    t31 = ((x125&(x126%x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint64_t x129 = 11578895464766495LLU;
	uint32_t x131 = UINT32_MAX;
	volatile int8_t x132 = -5;
	static int32_t t32 = -2619574;

    t32 = ((x129&(x130%x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -706;
	uint16_t x134 = 2006U;
	uint8_t x135 = 63U;
	volatile uint16_t x136 = 463U;
	static int32_t t33 = 71782;

    t33 = ((x133&(x134%x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 313U;
	volatile uint16_t x138 = 4177U;
	volatile int64_t x139 = -1LL;
	volatile int64_t x140 = INT64_MIN;

    t34 = ((x137&(x138%x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = INT64_MIN;
	int16_t x146 = 468;
	static int64_t x147 = INT64_MIN;
	int16_t x148 = -1;
	int32_t t35 = 4067;

    t35 = ((x145&(x146%x147))!=x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = -1;
	int16_t x150 = INT16_MAX;
	int64_t x152 = INT64_MIN;
	int32_t t36 = -3;

    t36 = ((x149&(x150%x151))!=x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x153 = -1;
	int16_t x154 = -1;
	volatile uint8_t x156 = 50U;
	int32_t t37 = -11995305;

    t37 = ((x153&(x154%x155))!=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x157 = 25202U;
	static int64_t x158 = INT64_MIN;
	int16_t x159 = 6405;
	volatile int8_t x160 = INT8_MAX;
	int32_t t38 = -26;

    t38 = ((x157&(x158%x159))!=x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x161 = INT16_MIN;
	volatile uint64_t x162 = UINT64_MAX;
	uint32_t x163 = UINT32_MAX;
	static int8_t x164 = INT8_MIN;
	static int32_t t39 = -1;

    t39 = ((x161&(x162%x163))!=x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MIN;
	static volatile int8_t x167 = -62;
	static int64_t x168 = INT64_MIN;
	int32_t t40 = -131584039;

    t40 = ((x165&(x166%x167))!=x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MAX;
	volatile int16_t x170 = -22;
	volatile int64_t x171 = 163444313170430348LL;
	uint8_t x172 = 48U;
	static int32_t t41 = 2;

    t41 = ((x169&(x170%x171))!=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x177 = INT64_MAX;
	int64_t x179 = -1LL;
	static int32_t x180 = -6;
	int32_t t42 = -195;

    t42 = ((x177&(x178%x179))!=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x181 = 1U;
	static int8_t x182 = INT8_MAX;
	static int32_t x183 = 426088551;
	int64_t x184 = -60628LL;
	volatile int32_t t43 = 3158;

    t43 = ((x181&(x182%x183))!=x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = 0U;
	uint64_t x186 = UINT64_MAX;
	int16_t x187 = -1;
	static volatile int32_t x188 = 1689;
	volatile int32_t t44 = -243105;

    t44 = ((x185&(x186%x187))!=x188);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = INT16_MIN;
	uint16_t x190 = UINT16_MAX;
	int8_t x191 = 1;
	static int32_t x192 = -1;
	int32_t t45 = -3420;

    t45 = ((x189&(x190%x191))!=x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x197 = 55LLU;
	int8_t x198 = INT8_MAX;
	int16_t x199 = -1;
	uint32_t x200 = 16356U;
	int32_t t46 = 14764158;

    t46 = ((x197&(x198%x199))!=x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x202 = -1;
	static int16_t x203 = 4153;
	volatile int32_t x204 = INT32_MIN;
	int32_t t47 = -183517;

    t47 = ((x201&(x202%x203))!=x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x205 = 23U;
	uint32_t x206 = 123095758U;
	int64_t x207 = -16750226235836242LL;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t48 = -113;

    t48 = ((x205&(x206%x207))!=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = INT8_MIN;
	uint8_t x211 = UINT8_MAX;
	static int32_t x212 = 41649;
	int32_t t49 = 2;

    t49 = ((x209&(x210%x211))!=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x215 = INT64_MIN;
	int8_t x216 = 3;

    t50 = ((x213&(x214%x215))!=x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x217 = INT32_MIN;
	uint16_t x218 = 1532U;
	int8_t x219 = INT8_MIN;
	uint8_t x220 = 0U;
	volatile int32_t t51 = 0;

    t51 = ((x217&(x218%x219))!=x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x222 = 2;
	int16_t x223 = -1;
	int32_t x224 = INT32_MIN;

    t52 = ((x221&(x222%x223))!=x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x226 = 3U;
	int64_t x227 = INT64_MIN;
	int32_t t53 = 6;

    t53 = ((x225&(x226%x227))!=x228);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x229 = UINT8_MAX;
	volatile int8_t x230 = INT8_MIN;
	volatile int32_t t54 = 44662524;

    t54 = ((x229&(x230%x231))!=x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = INT16_MIN;
	static int16_t x234 = INT16_MIN;
	static int16_t x235 = -1;
	int8_t x236 = INT8_MAX;
	volatile int32_t t55 = -328003715;

    t55 = ((x233&(x234%x235))!=x236);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = -1LL;
	uint64_t x239 = 5LLU;
	int32_t x240 = INT32_MIN;
	int32_t t56 = 19428425;

    t56 = ((x237&(x238%x239))!=x240);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t57 = 375033689;

    t57 = ((x241&(x242%x243))!=x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = 119576335287232958LL;
	uint32_t x246 = 109272U;
	static uint16_t x247 = UINT16_MAX;
	uint32_t x248 = 139U;
	static int32_t t58 = 27926570;

    t58 = ((x245&(x246%x247))!=x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = 11;
	static volatile uint32_t x250 = 33U;
	int64_t x251 = INT64_MIN;
	static int32_t t59 = -81971718;

    t59 = ((x249&(x250%x251))!=x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x253 = -52;
	int64_t x255 = -1LL;
	uint32_t x256 = 3578U;

    t60 = ((x253&(x254%x255))!=x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = INT32_MAX;
	uint64_t x258 = 361037218427LLU;
	uint32_t x259 = 893U;
	volatile int32_t t61 = 10;

    t61 = ((x257&(x258%x259))!=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x261 = -1873969306LL;
	int8_t x262 = -57;
	static int16_t x263 = -1;
	int8_t x264 = 1;
	int32_t t62 = -847;

    t62 = ((x261&(x262%x263))!=x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x265 = 1;
	static int8_t x266 = INT8_MIN;
	static volatile int16_t x267 = -1204;
	static volatile int32_t x268 = -1;
	int32_t t63 = 33892748;

    t63 = ((x265&(x266%x267))!=x268);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x269 = 490U;
	int32_t x270 = -132437;
	volatile int64_t x271 = INT64_MIN;
	int32_t x272 = INT32_MIN;

    t64 = ((x269&(x270%x271))!=x272);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = -1LL;
	volatile int64_t x275 = -1LL;
	static int16_t x276 = -7;
	int32_t t65 = -56073;

    t65 = ((x273&(x274%x275))!=x276);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x277 = INT32_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t66 = 45593230;

    t66 = ((x277&(x278%x279))!=x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x281 = INT16_MAX;
	volatile uint32_t x282 = 10U;
	uint32_t x283 = 1947U;
	int64_t x284 = -103301714LL;
	int32_t t67 = -10795124;

    t67 = ((x281&(x282%x283))!=x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x285 = INT32_MIN;
	volatile int64_t x286 = INT64_MIN;
	uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t68 = 22839693;

    t68 = ((x285&(x286%x287))!=x288);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x289 = INT8_MIN;
	int64_t x290 = 9921510254631863LL;
	int32_t x292 = INT32_MAX;
	volatile int32_t t69 = 1648555;

    t69 = ((x289&(x290%x291))!=x292);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x293 = 1U;
	uint64_t x295 = 655350642956328LLU;
	int32_t t70 = 8556;

    t70 = ((x293&(x294%x295))!=x296);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x298 = 12606U;
	int32_t x299 = INT32_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t71 = -26107;

    t71 = ((x297&(x298%x299))!=x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x303 = 15U;
	int8_t x304 = -1;

    t72 = ((x301&(x302%x303))!=x304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x305 = -1;
	int8_t x306 = 0;
	int8_t x307 = 2;
	int32_t t73 = -40189;

    t73 = ((x305&(x306%x307))!=x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x309 = 2768U;
	int64_t x310 = INT64_MIN;
	uint64_t x311 = UINT64_MAX;
	int32_t t74 = -3410469;

    t74 = ((x309&(x310%x311))!=x312);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = INT8_MAX;
	static volatile int64_t x314 = INT64_MAX;
	static volatile int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MAX;
	volatile int32_t t75 = 1;

    t75 = ((x313&(x314%x315))!=x316);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x317 = INT16_MIN;
	int8_t x318 = 1;
	int32_t x319 = INT32_MIN;

    t76 = ((x317&(x318%x319))!=x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = 30U;
	uint32_t x324 = 1U;
	int32_t t77 = -3164;

    t77 = ((x321&(x322%x323))!=x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x325 = INT64_MIN;
	static uint16_t x326 = 3472U;
	uint32_t x327 = 21630U;
	static int8_t x328 = -1;

    t78 = ((x325&(x326%x327))!=x328);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x329 = 13120980LL;
	static int16_t x331 = 79;
	int64_t x332 = -1LL;
	static volatile int32_t t79 = -47198579;

    t79 = ((x329&(x330%x331))!=x332);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x333 = 11U;
	volatile int16_t x334 = -4152;
	int8_t x335 = 3;

    t80 = ((x333&(x334%x335))!=x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MIN;
	int16_t x338 = 15049;
	int32_t x339 = -1;
	volatile int32_t t81 = -229;

    t81 = ((x337&(x338%x339))!=x340);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x341 = INT8_MAX;
	int8_t x342 = INT8_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t82 = -97827901;

    t82 = ((x341&(x342%x343))!=x344);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = INT16_MIN;
	volatile int64_t x347 = INT64_MAX;

    t83 = ((x345&(x346%x347))!=x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	volatile uint16_t x351 = 20U;
	volatile int32_t t84 = 32;

    t84 = ((x349&(x350%x351))!=x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x354 = INT32_MIN;
	static int32_t x355 = -1;
	int64_t x356 = INT64_MAX;
	int32_t t85 = 20548833;

    t85 = ((x353&(x354%x355))!=x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MIN;
	int64_t x358 = -403992314LL;
	int64_t x359 = INT64_MIN;
	volatile int32_t t86 = -18;

    t86 = ((x357&(x358%x359))!=x360);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x362 = 1LLU;
	int8_t x363 = 6;
	static volatile int32_t t87 = -144;

    t87 = ((x361&(x362%x363))!=x364);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 174503206U;
	int32_t x367 = -1;
	volatile int8_t x368 = 0;
	int32_t t88 = -6;

    t88 = ((x365&(x366%x367))!=x368);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = -94820323;
	int32_t x370 = 167;
	uint8_t x371 = 10U;
	uint32_t x372 = 0U;
	volatile int32_t t89 = 8;

    t89 = ((x369&(x370%x371))!=x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x373 = 43U;
	uint16_t x375 = 108U;
	volatile int32_t t90 = 14;

    t90 = ((x373&(x374%x375))!=x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = INT64_MIN;
	int16_t x380 = INT16_MAX;
	static int32_t t91 = 16155144;

    t91 = ((x377&(x378%x379))!=x380);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x382 = INT8_MIN;
	uint16_t x384 = 3U;
	volatile int32_t t92 = -626067;

    t92 = ((x381&(x382%x383))!=x384);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = -954406161276857181LL;
	uint16_t x386 = UINT16_MAX;
	uint32_t x387 = UINT32_MAX;
	static volatile int16_t x388 = INT16_MIN;
	volatile int32_t t93 = -10434630;

    t93 = ((x385&(x386%x387))!=x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = INT16_MIN;
	volatile uint16_t x391 = 9922U;
	volatile uint64_t x392 = 3LLU;
	volatile int32_t t94 = -66182844;

    t94 = ((x389&(x390%x391))!=x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x393 = INT64_MIN;
	int8_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t95 = 117861334;

    t95 = ((x393&(x394%x395))!=x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x397 = 4872U;
	int32_t x398 = -27267452;
	int8_t x399 = -29;

    t96 = ((x397&(x398%x399))!=x400);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x403 = -1;
	volatile int16_t x404 = INT16_MAX;
	int32_t t97 = -212762;

    t97 = ((x401&(x402%x403))!=x404);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x405 = INT64_MIN;
	int64_t x406 = -54168LL;
	uint32_t x407 = UINT32_MAX;
	static int32_t t98 = 181589;

    t98 = ((x405&(x406%x407))!=x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x410 = UINT32_MAX;
	uint64_t x411 = 1987LLU;
	int32_t t99 = 0;

    t99 = ((x409&(x410%x411))!=x412);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x417 = -1;
	int16_t x418 = -12063;
	uint64_t x419 = 51077LLU;
	uint32_t x420 = 202254U;
	volatile int32_t t100 = -1;

    t100 = ((x417&(x418%x419))!=x420);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x421 = -1;
	int32_t x422 = -1;
	volatile uint64_t x423 = 5781595LLU;
	int32_t t101 = -81;

    t101 = ((x421&(x422%x423))!=x424);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x425 = -3822514;
	uint8_t x426 = UINT8_MAX;
	volatile uint16_t x427 = UINT16_MAX;
	static int8_t x428 = -19;

    t102 = ((x425&(x426%x427))!=x428);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x430 = -1;
	int8_t x431 = INT8_MIN;

    t103 = ((x429&(x430%x431))!=x432);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x433 = INT32_MIN;
	uint16_t x435 = UINT16_MAX;
	uint64_t x436 = 0LLU;

    t104 = ((x433&(x434%x435))!=x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x437 = -1LL;
	int8_t x438 = INT8_MIN;
	static int32_t x440 = 0;

    t105 = ((x437&(x438%x439))!=x440);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MAX;
	int32_t x443 = -1;
	int64_t x444 = INT64_MAX;

    t106 = ((x441&(x442%x443))!=x444);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x447 = INT64_MAX;
	volatile int16_t x448 = INT16_MIN;
	static volatile int32_t t107 = 8114279;

    t107 = ((x445&(x446%x447))!=x448);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x449 = UINT64_MAX;
	int32_t x450 = INT32_MAX;
	volatile uint8_t x451 = UINT8_MAX;
	int32_t x452 = -1;
	static volatile int32_t t108 = 65165960;

    t108 = ((x449&(x450%x451))!=x452);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x453 = INT8_MIN;
	uint32_t x454 = UINT32_MAX;
	volatile int32_t x456 = -1;
	volatile int32_t t109 = 25;

    t109 = ((x453&(x454%x455))!=x456);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x457 = INT64_MAX;
	int32_t x459 = INT32_MIN;
	volatile uint8_t x460 = UINT8_MAX;
	static int32_t t110 = 3248;

    t110 = ((x457&(x458%x459))!=x460);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x461 = INT8_MIN;
	static uint64_t x462 = UINT64_MAX;
	static uint32_t x463 = 7462763U;
	volatile int8_t x464 = INT8_MAX;
	volatile int32_t t111 = -17;

    t111 = ((x461&(x462%x463))!=x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x465 = INT16_MIN;
	uint16_t x466 = 2920U;
	volatile int64_t x467 = 32312802094213LL;
	uint8_t x468 = 9U;
	volatile int32_t t112 = -14262904;

    t112 = ((x465&(x466%x467))!=x468);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = 55292147500LL;
	int16_t x470 = INT16_MIN;
	int64_t x471 = -15373953LL;
	volatile uint64_t x472 = 66291780252LLU;
	volatile int32_t t113 = 10;

    t113 = ((x469&(x470%x471))!=x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x473 = 21;
	int16_t x474 = -1282;
	int64_t x475 = -1042392928LL;
	int64_t x476 = INT64_MAX;
	int32_t t114 = -3;

    t114 = ((x473&(x474%x475))!=x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = 10LL;
	int64_t x478 = INT64_MAX;
	uint16_t x479 = 3U;
	int16_t x480 = -4753;

    t115 = ((x477&(x478%x479))!=x480);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x481 = INT16_MIN;
	static uint64_t x482 = 39256585LLU;
	static int8_t x484 = -1;
	volatile int32_t t116 = 330250;

    t116 = ((x481&(x482%x483))!=x484);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x485 = 1;
	int8_t x487 = -5;
	static uint8_t x488 = 3U;
	volatile int32_t t117 = -3;

    t117 = ((x485&(x486%x487))!=x488);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x490 = 741340974LLU;
	uint32_t x492 = 181U;
	int32_t t118 = -1087;

    t118 = ((x489&(x490%x491))!=x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x494 = INT32_MIN;
	static int64_t x495 = INT64_MIN;

    t119 = ((x493&(x494%x495))!=x496);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	int64_t x500 = -1LL;
	int32_t t120 = -92;

    t120 = ((x497&(x498%x499))!=x500);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x505 = INT16_MIN;
	uint16_t x506 = 12U;
	int16_t x507 = INT16_MIN;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t121 = 12632829;

    t121 = ((x505&(x506%x507))!=x508);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = -1;
	int32_t x510 = INT32_MIN;
	static int32_t x511 = -70949774;
	uint32_t x512 = 123547U;
	volatile int32_t t122 = -10;

    t122 = ((x509&(x510%x511))!=x512);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x517 = -1751756;
	static uint8_t x518 = UINT8_MAX;
	int8_t x519 = INT8_MIN;
	volatile uint8_t x520 = UINT8_MAX;
	volatile int32_t t123 = 88064;

    t123 = ((x517&(x518%x519))!=x520);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x521 = UINT32_MAX;
	uint64_t x522 = 49107LLU;
	uint32_t x523 = 2038U;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t124 = -5028;

    t124 = ((x521&(x522%x523))!=x524);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x527 = 1;
	int32_t t125 = 122;

    t125 = ((x525&(x526%x527))!=x528);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x529 = INT64_MIN;
	int16_t x530 = 738;
	int32_t x531 = -3395570;
	volatile int8_t x532 = -58;
	volatile int32_t t126 = -69;

    t126 = ((x529&(x530%x531))!=x532);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x534 = 1U;
	static int32_t x535 = INT32_MIN;
	int32_t x536 = -480;
	static volatile int32_t t127 = -28487;

    t127 = ((x533&(x534%x535))!=x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x539 = 11441;
	int16_t x540 = -1;
	static int32_t t128 = -1238166;

    t128 = ((x537&(x538%x539))!=x540);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x541 = INT8_MIN;
	volatile int8_t x542 = -1;
	uint16_t x543 = UINT16_MAX;
	volatile int16_t x544 = INT16_MIN;
	volatile int32_t t129 = 7306;

    t129 = ((x541&(x542%x543))!=x544);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x545 = INT16_MIN;
	uint8_t x547 = UINT8_MAX;
	int8_t x548 = INT8_MIN;
	volatile int32_t t130 = 390011067;

    t130 = ((x545&(x546%x547))!=x548);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x549 = 1U;
	static volatile uint8_t x552 = UINT8_MAX;
	volatile int32_t t131 = 9;

    t131 = ((x549&(x550%x551))!=x552);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x553 = UINT32_MAX;
	static int32_t x554 = INT32_MIN;
	int32_t x555 = INT32_MIN;
	int64_t x556 = 780235989203867031LL;
	volatile int32_t t132 = -3489238;

    t132 = ((x553&(x554%x555))!=x556);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x557 = INT16_MIN;
	volatile uint32_t x558 = 10U;
	volatile int16_t x559 = INT16_MIN;
	int8_t x560 = INT8_MAX;
	int32_t t133 = 0;

    t133 = ((x557&(x558%x559))!=x560);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x561 = 76120U;
	int32_t x562 = -53;
	volatile int16_t x563 = INT16_MAX;
	int16_t x564 = -44;
	int32_t t134 = 347285;

    t134 = ((x561&(x562%x563))!=x564);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x566 = INT8_MIN;
	volatile int8_t x568 = -50;

    t135 = ((x565&(x566%x567))!=x568);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x570 = 22131534U;
	uint8_t x571 = 2U;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t136 = -765;

    t136 = ((x569&(x570%x571))!=x572);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x573 = UINT8_MAX;
	int16_t x574 = 76;
	volatile uint64_t x576 = 63860053486LLU;
	volatile int32_t t137 = -7684971;

    t137 = ((x573&(x574%x575))!=x576);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x577 = 7425LL;
	volatile int8_t x578 = INT8_MIN;
	int8_t x579 = INT8_MIN;

    t138 = ((x577&(x578%x579))!=x580);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x581 = UINT64_MAX;
	uint8_t x582 = 43U;
	static int64_t x583 = 1918815379714228LL;
	int32_t t139 = -471549;

    t139 = ((x581&(x582%x583))!=x584);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x585 = INT16_MIN;
	static int8_t x587 = -60;
	static int32_t x588 = INT32_MAX;
	static int32_t t140 = 5467453;

    t140 = ((x585&(x586%x587))!=x588);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x589 = -9601722154LL;
	volatile int16_t x590 = INT16_MIN;
	uint32_t x591 = UINT32_MAX;
	static volatile uint16_t x592 = UINT16_MAX;

    t141 = ((x589&(x590%x591))!=x592);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x593 = -11;
	int32_t x594 = -1;
	uint64_t x595 = 3586229289888983365LLU;
	uint64_t x596 = 13604LLU;
	volatile int32_t t142 = 62;

    t142 = ((x593&(x594%x595))!=x596);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x598 = INT32_MIN;
	int64_t x599 = -1LL;
	static int32_t x600 = 6305869;
	int32_t t143 = 45;

    t143 = ((x597&(x598%x599))!=x600);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x601 = -1;
	static int64_t x602 = 40558817774289LL;
	volatile int8_t x603 = INT8_MAX;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t144 = -5204;

    t144 = ((x601&(x602%x603))!=x604);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x605 = 25;
	volatile int32_t x606 = INT32_MIN;
	int16_t x607 = INT16_MAX;
	uint64_t x608 = UINT64_MAX;

    t145 = ((x605&(x606%x607))!=x608);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x610 = UINT16_MAX;
	volatile int32_t x611 = -1;
	static int8_t x612 = INT8_MIN;
	static volatile int32_t t146 = -492;

    t146 = ((x609&(x610%x611))!=x612);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x614 = INT16_MIN;
	static uint64_t x615 = 888206047880760LLU;
	uint32_t x616 = UINT32_MAX;
	volatile int32_t t147 = -2;

    t147 = ((x613&(x614%x615))!=x616);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x617 = INT8_MAX;
	volatile uint8_t x618 = 15U;
	int32_t x619 = INT32_MIN;
	volatile int32_t t148 = -3;

    t148 = ((x617&(x618%x619))!=x620);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x621 = -1;
	int64_t x622 = -6233882134907LL;
	uint64_t x623 = UINT64_MAX;
	static volatile int32_t t149 = -11268;

    t149 = ((x621&(x622%x623))!=x624);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x625 = INT8_MIN;
	int8_t x626 = INT8_MIN;
	int16_t x627 = -1;
	int32_t t150 = -3114;

    t150 = ((x625&(x626%x627))!=x628);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x629 = INT16_MIN;
	int64_t x630 = INT64_MIN;
	int16_t x632 = INT16_MAX;
	static volatile int32_t t151 = 80;

    t151 = ((x629&(x630%x631))!=x632);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x633 = INT8_MIN;
	uint8_t x634 = 1U;
	volatile uint64_t x635 = 12694088234803555LLU;
	uint16_t x636 = 22U;
	volatile int32_t t152 = 139;

    t152 = ((x633&(x634%x635))!=x636);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x637 = INT16_MIN;
	int8_t x639 = 6;
	int8_t x640 = INT8_MIN;

    t153 = ((x637&(x638%x639))!=x640);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x642 = 401;
	int32_t x643 = 6268607;
	uint16_t x644 = 1621U;
	int32_t t154 = 0;

    t154 = ((x641&(x642%x643))!=x644);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x646 = 251;
	int8_t x647 = INT8_MAX;
	volatile int32_t x648 = INT32_MIN;
	static int32_t t155 = 13;

    t155 = ((x645&(x646%x647))!=x648);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x649 = INT16_MIN;
	int64_t x650 = -1LL;
	uint32_t x652 = UINT32_MAX;
	volatile int32_t t156 = -55;

    t156 = ((x649&(x650%x651))!=x652);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x653 = -1;
	volatile int32_t x654 = -1690210;
	static uint16_t x655 = 2032U;
	uint64_t x656 = 13990544531435LLU;

    t157 = ((x653&(x654%x655))!=x656);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x657 = 272068LL;
	volatile int64_t x658 = -1LL;
	int32_t x659 = -1;
	int16_t x660 = INT16_MAX;
	volatile int32_t t158 = -3728391;

    t158 = ((x657&(x658%x659))!=x660);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x661 = 472;
	int16_t x662 = INT16_MIN;
	int64_t x663 = -3019588894LL;
	static volatile uint16_t x664 = 135U;
	int32_t t159 = -1888576;

    t159 = ((x661&(x662%x663))!=x664);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x665 = 308087867U;
	int32_t x668 = INT32_MIN;
	int32_t t160 = 653579182;

    t160 = ((x665&(x666%x667))!=x668);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x670 = -1LL;
	int64_t x671 = -1LL;
	int64_t x672 = -1LL;
	int32_t t161 = -1299;

    t161 = ((x669&(x670%x671))!=x672);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x673 = INT16_MAX;
	int64_t x674 = -1LL;
	volatile int64_t x675 = INT64_MIN;
	volatile int32_t t162 = -2428349;

    t162 = ((x673&(x674%x675))!=x676);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x677 = 88U;
	int64_t x679 = -425988826092LL;
	volatile int32_t t163 = -3;

    t163 = ((x677&(x678%x679))!=x680);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x681 = -1;
	int16_t x682 = -13;
	int64_t x683 = -66100103LL;
	volatile int32_t x684 = -66;
	volatile int32_t t164 = -353;

    t164 = ((x681&(x682%x683))!=x684);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x690 = -1;
	uint32_t x691 = 79234622U;
	volatile uint16_t x692 = 6U;

    t165 = ((x689&(x690%x691))!=x692);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x693 = 11250U;
	volatile int32_t x694 = INT32_MIN;
	int16_t x695 = -128;

    t166 = ((x693&(x694%x695))!=x696);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = INT64_MIN;
	volatile int16_t x698 = 1692;
	int16_t x699 = INT16_MAX;
	int16_t x700 = INT16_MIN;

    t167 = ((x697&(x698%x699))!=x700);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = INT8_MAX;
	static uint32_t x703 = 7304U;
	static int8_t x704 = 29;

    t168 = ((x701&(x702%x703))!=x704);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x705 = INT8_MIN;
	volatile int32_t x707 = INT32_MIN;
	int32_t x708 = INT32_MIN;
	int32_t t169 = -77518;

    t169 = ((x705&(x706%x707))!=x708);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x709 = -1LL;
	int8_t x710 = INT8_MAX;
	static uint16_t x712 = 179U;
	volatile int32_t t170 = 218;

    t170 = ((x709&(x710%x711))!=x712);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x713 = 9U;
	uint64_t x714 = UINT64_MAX;
	uint16_t x716 = 12248U;

    t171 = ((x713&(x714%x715))!=x716);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x717 = -2116;
	static uint64_t x719 = 2902LLU;
	int64_t x720 = INT64_MIN;
	int32_t t172 = -44281794;

    t172 = ((x717&(x718%x719))!=x720);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x721 = INT64_MIN;
	uint8_t x723 = 1U;
	uint32_t x724 = UINT32_MAX;
	int32_t t173 = 3;

    t173 = ((x721&(x722%x723))!=x724);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = -1;
	static volatile int8_t x728 = INT8_MIN;
	int32_t t174 = -153500089;

    t174 = ((x725&(x726%x727))!=x728);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x729 = 1857680892LLU;
	uint8_t x730 = 2U;
	uint32_t x732 = UINT32_MAX;
	int32_t t175 = 870961236;

    t175 = ((x729&(x730%x731))!=x732);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x733 = 100643705056271371LL;
	int64_t x736 = INT64_MIN;
	volatile int32_t t176 = 1;

    t176 = ((x733&(x734%x735))!=x736);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x737 = 58762;
	int16_t x738 = -1;
	uint16_t x739 = 215U;
	int64_t x740 = INT64_MIN;

    t177 = ((x737&(x738%x739))!=x740);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x741 = 908U;
	int16_t x742 = 212;

    t178 = ((x741&(x742%x743))!=x744);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x745 = 264U;
	static int8_t x747 = 1;
	int16_t x748 = -121;
	volatile int32_t t179 = 14382;

    t179 = ((x745&(x746%x747))!=x748);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x754 = INT32_MAX;
	static uint64_t x756 = 0LLU;
	int32_t t180 = -15;

    t180 = ((x753&(x754%x755))!=x756);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x757 = 0;
	int64_t x758 = -1LL;
	int16_t x760 = -46;
	volatile int32_t t181 = -204503;

    t181 = ((x757&(x758%x759))!=x760);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x761 = INT64_MIN;
	volatile int64_t x763 = INT64_MIN;
	int64_t x764 = INT64_MAX;
	int32_t t182 = -5;

    t182 = ((x761&(x762%x763))!=x764);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x765 = 12U;
	static volatile int32_t x766 = 6004;
	int64_t x767 = -52685339543LL;
	uint16_t x768 = 8U;
	int32_t t183 = 4513139;

    t183 = ((x765&(x766%x767))!=x768);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x769 = -116104081;
	static int64_t x770 = INT64_MAX;
	int16_t x772 = -1;

    t184 = ((x769&(x770%x771))!=x772);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x774 = INT64_MAX;
	static uint64_t x775 = 903178042548153034LLU;
	int64_t x776 = -1975129LL;
	int32_t t185 = 3985977;

    t185 = ((x773&(x774%x775))!=x776);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x777 = INT16_MIN;
	static uint32_t x779 = 227755U;
	static volatile int16_t x780 = -1;
	volatile int32_t t186 = 260217346;

    t186 = ((x777&(x778%x779))!=x780);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x781 = 107368235498606931LLU;
	int8_t x782 = -6;
	uint64_t x783 = 24131LLU;
	static volatile int32_t x784 = INT32_MIN;

    t187 = ((x781&(x782%x783))!=x784);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x785 = 0;
	volatile int16_t x786 = INT16_MIN;
	int8_t x787 = INT8_MAX;
	uint64_t x788 = 212279LLU;
	volatile int32_t t188 = 48;

    t188 = ((x785&(x786%x787))!=x788);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x789 = UINT64_MAX;
	uint16_t x790 = 4U;
	int32_t x791 = INT32_MAX;
	int32_t x792 = INT32_MAX;
	volatile int32_t t189 = -169705;

    t189 = ((x789&(x790%x791))!=x792);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x793 = 2578567380962845LLU;
	int8_t x794 = INT8_MIN;
	int16_t x796 = INT16_MIN;
	volatile int32_t t190 = -1932479;

    t190 = ((x793&(x794%x795))!=x796);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x797 = 2007318082940110LLU;
	uint64_t x800 = 199829330980LLU;
	static int32_t t191 = -1;

    t191 = ((x797&(x798%x799))!=x800);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x801 = INT16_MAX;
	int8_t x802 = INT8_MIN;
	int64_t x803 = INT64_MIN;
	volatile int8_t x804 = INT8_MIN;
	int32_t t192 = 3550368;

    t192 = ((x801&(x802%x803))!=x804);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x806 = INT16_MIN;
	int32_t x807 = INT32_MAX;
	int32_t x808 = INT32_MIN;
	static volatile int32_t t193 = -140793;

    t193 = ((x805&(x806%x807))!=x808);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x809 = INT32_MIN;
	int32_t x810 = INT32_MIN;
	int32_t t194 = -2632156;

    t194 = ((x809&(x810%x811))!=x812);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x813 = INT64_MIN;
	int32_t x816 = INT32_MIN;
	int32_t t195 = -3254147;

    t195 = ((x813&(x814%x815))!=x816);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x818 = -29206080472LL;
	int8_t x819 = 1;
	int16_t x820 = INT16_MAX;
	static int32_t t196 = 0;

    t196 = ((x817&(x818%x819))!=x820);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x821 = UINT16_MAX;
	int16_t x822 = INT16_MIN;
	uint64_t x823 = 1275978773LLU;
	volatile int32_t t197 = -26;

    t197 = ((x821&(x822%x823))!=x824);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x825 = -11882LL;
	uint8_t x826 = UINT8_MAX;
	int8_t x827 = -1;
	int32_t x828 = INT32_MIN;
	volatile int32_t t198 = 1;

    t198 = ((x825&(x826%x827))!=x828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x830 = INT64_MIN;
	int16_t x832 = -1;
	int32_t t199 = 74;

    t199 = ((x829&(x830%x831))!=x832);

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

