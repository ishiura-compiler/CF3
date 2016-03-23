
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

static volatile uint32_t t0 = 13U;
int16_t x8 = INT16_MIN;
int64_t x11 = -1LL;
volatile int16_t x12 = INT16_MAX;
volatile uint32_t x14 = 1729146U;
volatile int8_t x15 = INT8_MAX;
uint8_t x18 = 0U;
int64_t x26 = -17312892144001LL;
static int8_t x28 = -1;
uint64_t x37 = UINT64_MAX;
int16_t x38 = INT16_MIN;
int8_t x41 = 14;
static int16_t x49 = INT16_MIN;
int16_t x55 = -12;
static volatile int64_t t13 = -66101350LL;
uint32_t x64 = 14996U;
uint32_t x73 = UINT32_MAX;
uint16_t x76 = UINT16_MAX;
static int8_t x79 = -1;
int64_t x85 = INT64_MIN;
int16_t x87 = -13765;
static int64_t t21 = 8956872884576598LL;
static uint64_t x97 = 20604196304LLU;
static uint8_t x98 = 2U;
int32_t t24 = -653;
static volatile uint32_t x106 = 5963921U;
int8_t x111 = INT8_MIN;
uint16_t x112 = 939U;
uint32_t x113 = 139U;
int32_t x117 = INT32_MIN;
int32_t x119 = -36;
volatile int64_t t29 = 495431966300715730LL;
static uint32_t x121 = 364877U;
int32_t x125 = INT32_MIN;
int32_t x127 = INT32_MAX;
int64_t t32 = -6668337978985726LL;
volatile int64_t x136 = INT64_MIN;
uint32_t x137 = 12583959U;
static uint16_t x143 = 5U;
volatile int32_t t35 = 7725;
int8_t x146 = -57;
static uint8_t x151 = 3U;
static int8_t x154 = 55;
int8_t x158 = -1;
static int8_t x161 = -4;
static int32_t x165 = -12;
int8_t x175 = INT8_MIN;
uint32_t x176 = UINT32_MAX;
uint16_t x182 = 0U;
int8_t x189 = -1;
volatile uint8_t x194 = UINT8_MAX;
volatile int32_t t48 = 13;
int32_t x198 = INT32_MAX;
int32_t t49 = -3991074;
int32_t x205 = INT32_MAX;
int32_t t51 = -42;
static int16_t x209 = 2;
volatile uint64_t x215 = UINT64_MAX;
uint64_t x223 = 3121196678LLU;
volatile int32_t x224 = -773784;
static volatile int32_t t55 = -1430;
int32_t x227 = INT32_MIN;
int32_t x228 = -1;
volatile int16_t x230 = 0;
static int8_t x240 = -1;
uint64_t x242 = 306414166057LLU;
uint16_t x245 = UINT16_MAX;
uint8_t x247 = 13U;
int64_t x251 = -3518595LL;
int8_t x252 = -1;
int64_t t63 = -468296LL;
int16_t x260 = 5884;
uint64_t x262 = 13278322258592LLU;
int8_t x266 = INT8_MAX;
volatile uint16_t x268 = 1U;
uint64_t x274 = 4377466956787832057LLU;
volatile int32_t t68 = 69493679;
static uint16_t x279 = 3163U;
static int32_t x280 = 0;
static int64_t x285 = INT64_MIN;
uint64_t x294 = 215219LLU;
int8_t x301 = INT8_MIN;
uint32_t x308 = 1410431U;
int8_t x313 = INT8_MIN;
static int64_t x316 = INT64_MIN;
volatile int64_t t78 = -1678703573275135LL;
int16_t x321 = -1;
static uint16_t x322 = UINT16_MAX;
volatile int64_t x325 = 79311351510472LL;
uint64_t x336 = 276186011122965224LLU;
static uint64_t x338 = 124011939LLU;
int32_t x339 = -1;
int64_t x340 = INT64_MAX;
static int32_t x347 = 46576;
volatile int8_t x352 = INT8_MIN;
volatile int64_t x357 = -1LL;
uint64_t x366 = 424531611LLU;
uint32_t x367 = 932483U;
int64_t x376 = 3969737782358904LL;
static int16_t x381 = 1;
volatile int8_t x387 = -14;
int8_t x392 = -1;
int32_t t97 = -32243;
uint32_t x393 = 27473533U;
int8_t x397 = INT8_MIN;
int16_t x400 = INT16_MIN;
int8_t x410 = INT8_MIN;
static uint8_t x413 = UINT8_MAX;
uint16_t x414 = UINT16_MAX;
uint8_t x416 = UINT8_MAX;
int8_t x421 = INT8_MIN;
int32_t t106 = 274;
volatile uint8_t x448 = UINT8_MAX;
volatile int32_t t111 = -1;
uint32_t t112 = 1386U;
volatile int8_t x457 = INT8_MIN;
int8_t x465 = INT8_MIN;
int32_t x466 = 85;
static volatile int32_t t116 = -790266523;
volatile uint32_t x475 = 83U;
int32_t x483 = INT32_MIN;
static int64_t x488 = -1841733940253330572LL;
uint8_t x489 = 102U;
static uint64_t x492 = UINT64_MAX;
int64_t x493 = -1LL;
int64_t x497 = INT64_MIN;
static int32_t t125 = 20;
int8_t x506 = -1;
static uint8_t x513 = 1U;
int32_t t132 = -1;
int16_t x536 = -1;
int16_t x538 = INT16_MAX;
int64_t t134 = -942LL;
int64_t t135 = -426946911LL;
uint16_t x552 = 10U;
int16_t x555 = -8307;
static uint64_t t138 = 7798LLU;
static volatile int32_t x565 = INT32_MIN;
static int32_t x574 = INT32_MAX;
uint64_t t144 = 195423020LLU;
static int64_t x584 = 21043527LL;
int64_t x591 = -1LL;
volatile int8_t x592 = INT8_MIN;
volatile int8_t x598 = INT8_MAX;
int64_t x608 = INT64_MAX;
static volatile uint32_t x612 = 2189U;
int64_t x616 = -4996250792668LL;
int32_t x629 = -84459158;
static volatile int64_t x630 = INT64_MIN;
int64_t x636 = 408296873126936LL;
static volatile int32_t t160 = 139211804;
static int16_t x645 = INT16_MIN;
static uint32_t x647 = 905U;
uint64_t x665 = 42247846804551061LLU;
int32_t t166 = 21338658;
volatile int32_t t167 = -5953189;
volatile int32_t t168 = 0;
static volatile int32_t t170 = 336;
static int16_t x709 = -1;
int64_t x710 = -1923LL;
uint64_t x717 = 61448LLU;
volatile uint32_t x720 = 1692U;
uint8_t x723 = UINT8_MAX;
int64_t x728 = INT64_MIN;
volatile int64_t t181 = 26LL;
uint8_t x734 = 4U;
static int64_t x736 = -1LL;
volatile uint8_t x739 = 127U;
static uint8_t x744 = 0U;
int8_t x753 = INT8_MAX;
int32_t x756 = -9484290;
static volatile int32_t t188 = 3;
volatile int8_t x757 = -4;
int32_t x758 = INT32_MAX;
int64_t x763 = INT64_MIN;
static volatile uint64_t x764 = 5765367751573390LLU;
static int64_t x768 = INT64_MIN;
uint32_t x770 = 843068U;
static int64_t t192 = 172LL;
static int16_t x773 = INT16_MIN;
volatile uint16_t x774 = 7U;
int32_t t193 = -364;
volatile uint8_t x778 = 20U;
volatile int32_t t197 = -56012030;
volatile int32_t x798 = INT32_MIN;
static int64_t t199 = 6134480139LL;


void f0(void) {
    	int32_t x1 = -480222725;
	uint16_t x2 = 4U;
	uint8_t x3 = UINT8_MAX;
	uint32_t x4 = UINT32_MAX;

    t0 = (((x1&x2)==x3)&x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint16_t x6 = UINT16_MAX;
	uint64_t x7 = UINT64_MAX;
	volatile int32_t t1 = -3;

    t1 = (((x5&x6)==x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	int8_t x10 = -1;
	int32_t t2 = -20;

    t2 = (((x9&x10)==x11)&x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	static int32_t x16 = -14711515;
	int32_t t3 = -399485709;

    t3 = (((x13&x14)==x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 3;
	static int64_t x19 = -135582345966LL;
	int16_t x20 = -1;
	static int32_t t4 = 1;

    t4 = (((x17&x18)==x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 23;
	int64_t x22 = INT64_MIN;
	volatile int8_t x23 = INT8_MIN;
	static uint32_t x24 = UINT32_MAX;
	static volatile uint32_t t5 = 15320388U;

    t5 = (((x21&x22)==x23)&x24);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x25 = 14U;
	volatile uint8_t x27 = 113U;
	volatile int32_t t6 = -905085244;

    t6 = (((x25&x26)==x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	int16_t x30 = -3893;
	static int32_t x31 = -1;
	int64_t x32 = -1LL;
	int64_t t7 = 1209LL;

    t7 = (((x29&x30)==x31)&x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MAX;
	volatile int16_t x36 = -1;
	int32_t t8 = 31167;

    t8 = (((x33&x34)==x35)&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x39 = INT8_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 119463587;

    t9 = (((x37&x38)==x39)&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	static int64_t x43 = 3502368824305105LL;
	int16_t x44 = -1101;
	volatile int32_t t10 = 237;

    t10 = (((x41&x42)==x43)&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int8_t x46 = -1;
	uint32_t x47 = 266330723U;
	uint8_t x48 = 54U;
	int32_t t11 = 0;

    t11 = (((x45&x46)==x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = -1LL;
	static int16_t x51 = INT16_MAX;
	static int64_t x52 = -51LL;
	int64_t t12 = -24369651042904LL;

    t12 = (((x49&x50)==x51)&x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -3;
	int64_t x54 = -1047334LL;
	volatile int64_t x56 = INT64_MAX;

    t13 = (((x53&x54)==x55)&x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = -1LL;
	int16_t x58 = INT16_MAX;
	static int8_t x59 = INT8_MAX;
	uint64_t x60 = 12159632343LLU;
	uint64_t t14 = 578692LLU;

    t14 = (((x57&x58)==x59)&x60);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	volatile int32_t x62 = -1;
	static int8_t x63 = -1;
	volatile uint32_t t15 = 14789366U;

    t15 = (((x61&x62)==x63)&x64);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 0;
	int8_t x66 = 27;
	volatile int8_t x67 = INT8_MIN;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 1;

    t16 = (((x65&x66)==x67)&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = UINT16_MAX;
	uint16_t x70 = 2249U;
	volatile uint32_t x71 = UINT32_MAX;
	int8_t x72 = 6;
	int32_t t17 = 55251;

    t17 = (((x69&x70)==x71)&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x74 = UINT8_MAX;
	int16_t x75 = INT16_MIN;
	volatile int32_t t18 = -8;

    t18 = (((x73&x74)==x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 6;
	uint16_t x78 = 5U;
	int8_t x80 = INT8_MAX;
	int32_t t19 = -478161186;

    t19 = (((x77&x78)==x79)&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	uint32_t x82 = 1852U;
	volatile int16_t x83 = INT16_MAX;
	volatile int32_t x84 = 22;
	static volatile int32_t t20 = -240027634;

    t20 = (((x81&x82)==x83)&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = INT64_MIN;
	static int64_t x88 = -1350733LL;

    t21 = (((x85&x86)==x87)&x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MAX;
	int16_t x91 = 511;
	int16_t x92 = INT16_MIN;
	int32_t t22 = 1;

    t22 = (((x89&x90)==x91)&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = INT32_MIN;
	volatile int16_t x94 = -136;
	uint64_t x95 = UINT64_MAX;
	int16_t x96 = 3;
	int32_t t23 = 67609929;

    t23 = (((x93&x94)==x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x99 = -1;
	uint8_t x100 = UINT8_MAX;

    t24 = (((x97&x98)==x99)&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int64_t x102 = -22654694LL;
	int8_t x103 = INT8_MIN;
	static uint16_t x104 = 5U;
	static int32_t t25 = 16132;

    t25 = (((x101&x102)==x103)&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 1LL;
	static uint32_t x107 = UINT32_MAX;
	volatile uint64_t x108 = 26992360782684868LLU;
	volatile uint64_t t26 = 50880438198182LLU;

    t26 = (((x105&x106)==x107)&x108);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = -39293857901LL;
	int32_t x110 = INT32_MIN;
	volatile int32_t t27 = 0;

    t27 = (((x109&x110)==x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x114 = 75630U;
	int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t28 = -372;

    t28 = (((x113&x114)==x115)&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = 2;
	int64_t x120 = 54374365095219LL;

    t29 = (((x117&x118)==x119)&x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = -1;
	uint64_t x123 = UINT64_MAX;
	uint16_t x124 = 633U;
	volatile int32_t t30 = -10521;

    t30 = (((x121&x122)==x123)&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MAX;
	int8_t x128 = -1;
	volatile int32_t t31 = 1074918;

    t31 = (((x125&x126)==x127)&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MAX;
	uint8_t x131 = 2U;
	int64_t x132 = 111056003294024840LL;

    t32 = (((x129&x130)==x131)&x132);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	volatile uint16_t x134 = 2U;
	int8_t x135 = -1;
	int64_t t33 = -209LL;

    t33 = (((x133&x134)==x135)&x136);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t34 = -121LL;

    t34 = (((x137&x138)==x139)&x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = 11029;
	uint16_t x142 = UINT16_MAX;
	static volatile int8_t x144 = -1;

    t35 = (((x141&x142)==x143)&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	volatile uint32_t x147 = 81U;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 169;

    t36 = (((x145&x146)==x147)&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int64_t x150 = 98552322046215291LL;
	int16_t x152 = INT16_MAX;
	volatile int32_t t37 = 160726;

    t37 = (((x149&x150)==x151)&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = -1LL;
	int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MAX;
	volatile int64_t t38 = 220991617LL;

    t38 = (((x153&x154)==x155)&x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 20U;
	volatile int64_t x159 = -5591414LL;
	int16_t x160 = INT16_MAX;
	static volatile int32_t t39 = 141095;

    t39 = (((x157&x158)==x159)&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	static uint16_t x164 = 2119U;
	volatile int32_t t40 = 95921;

    t40 = (((x161&x162)==x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 0U;
	static volatile uint16_t x168 = 1061U;
	volatile int32_t t41 = 49122615;

    t41 = (((x165&x166)==x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	int16_t x170 = 4;
	int64_t x171 = INT64_MAX;
	uint32_t x172 = 142U;
	uint32_t t42 = 0U;

    t42 = (((x169&x170)==x171)&x172);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = INT64_MIN;
	int32_t x174 = 83;
	volatile uint32_t t43 = 4622923U;

    t43 = (((x173&x174)==x175)&x176);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = 2824787;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 3691275;

    t44 = (((x177&x178)==x179)&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 1010LL;
	int16_t x183 = 0;
	volatile int64_t x184 = 84056LL;
	int64_t t45 = 104555108690LL;

    t45 = (((x181&x182)==x183)&x184);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 7U;
	int16_t x186 = -1;
	volatile int64_t x187 = INT64_MIN;
	uint16_t x188 = 8U;
	volatile int32_t t46 = 13845;

    t46 = (((x185&x186)==x187)&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x190 = UINT32_MAX;
	static volatile int8_t x191 = 14;
	int32_t x192 = -53229634;
	volatile int32_t t47 = -102;

    t47 = (((x189&x190)==x191)&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MAX;
	uint16_t x195 = 4249U;
	uint16_t x196 = 688U;

    t48 = (((x193&x194)==x195)&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	volatile int64_t x199 = -1LL;
	static int16_t x200 = 843;

    t49 = (((x197&x198)==x199)&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = INT64_MIN;
	static int64_t x202 = INT64_MIN;
	uint16_t x203 = 1U;
	int64_t x204 = -6581562311557792LL;
	volatile int64_t t50 = -14497LL;

    t50 = (((x201&x202)==x203)&x204);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x206 = 54U;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = 15U;

    t51 = (((x205&x206)==x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = -55;
	volatile int32_t t52 = -53;

    t52 = (((x209&x210)==x211)&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 18U;
	uint32_t x214 = 1530868U;
	int16_t x216 = -1;
	static int32_t t53 = 827979;

    t53 = (((x213&x214)==x215)&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MIN;
	static uint8_t x218 = 1U;
	volatile uint16_t x219 = 18U;
	static int32_t x220 = -1;
	static int32_t t54 = 904;

    t54 = (((x217&x218)==x219)&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = UINT32_MAX;
	int16_t x222 = 4329;

    t55 = (((x221&x222)==x223)&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	int16_t x226 = -4025;
	volatile int32_t t56 = 210417668;

    t56 = (((x225&x226)==x227)&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	int16_t x231 = INT16_MAX;
	uint64_t x232 = 343LLU;
	volatile uint64_t t57 = 15869511541274475LLU;

    t57 = (((x229&x230)==x231)&x232);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	int16_t x234 = INT16_MAX;
	static int64_t x235 = 964716749LL;
	static int16_t x236 = -1;
	static volatile int32_t t58 = 371418;

    t58 = (((x233&x234)==x235)&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	static int64_t x238 = INT64_MIN;
	int16_t x239 = -1;
	static int32_t t59 = 1;

    t59 = (((x237&x238)==x239)&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = 19004337;
	uint16_t x243 = UINT16_MAX;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 83824313;

    t60 = (((x241&x242)==x243)&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x246 = 52U;
	static int16_t x248 = INT16_MAX;
	volatile int32_t t61 = -3997800;

    t61 = (((x245&x246)==x247)&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 2U;
	int64_t x250 = 3LL;
	int32_t t62 = -738625928;

    t62 = (((x249&x250)==x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	int64_t x254 = INT64_MAX;
	int16_t x255 = -1950;
	static volatile int64_t x256 = -287106216510976599LL;

    t63 = (((x253&x254)==x255)&x256);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MAX;
	int32_t x258 = -1;
	static uint64_t x259 = 276234738397LLU;
	volatile int32_t t64 = 188358;

    t64 = (((x257&x258)==x259)&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	uint16_t x263 = 19U;
	uint64_t x264 = UINT64_MAX;
	uint64_t t65 = 83647650290817963LLU;

    t65 = (((x261&x262)==x263)&x264);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -1;
	int8_t x267 = 56;
	volatile int32_t t66 = 100767;

    t66 = (((x265&x266)==x267)&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 127266171LLU;
	int16_t x270 = INT16_MAX;
	int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MIN;
	volatile int64_t t67 = -890171822LL;

    t67 = (((x269&x270)==x271)&x272);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -581840743;
	static int64_t x275 = -1LL;
	uint8_t x276 = 1U;

    t68 = (((x273&x274)==x275)&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 8;
	volatile int64_t x278 = INT64_MIN;
	volatile int32_t t69 = -7803509;

    t69 = (((x277&x278)==x279)&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	volatile uint32_t x282 = 1667211785U;
	static int16_t x283 = -1;
	int64_t x284 = INT64_MAX;
	volatile int64_t t70 = -137LL;

    t70 = (((x281&x282)==x283)&x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x286 = UINT8_MAX;
	volatile uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;
	volatile int64_t t71 = -622412LL;

    t71 = (((x285&x286)==x287)&x288);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	int64_t x290 = -940738305834344LL;
	int8_t x291 = -1;
	uint8_t x292 = 124U;
	int32_t t72 = 0;

    t72 = (((x289&x290)==x291)&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	int8_t x295 = -1;
	uint32_t x296 = 10U;
	volatile uint32_t t73 = 27U;

    t73 = (((x293&x294)==x295)&x296);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 45U;
	uint8_t x298 = 0U;
	int64_t x299 = INT64_MIN;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 3;

    t74 = (((x297&x298)==x299)&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x302 = -4;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -37834;

    t75 = (((x301&x302)==x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 435434748867095LLU;
	static volatile int32_t x306 = -1001;
	int64_t x307 = INT64_MIN;
	uint32_t t76 = 1948U;

    t76 = (((x305&x306)==x307)&x308);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 17869;
	int8_t x310 = -3;
	static int16_t x311 = -12;
	volatile int8_t x312 = INT8_MIN;
	int32_t t77 = 230;

    t77 = (((x309&x310)==x311)&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = 185U;
	int16_t x315 = -543;

    t78 = (((x313&x314)==x315)&x316);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -5;
	int64_t x318 = -1LL;
	static int32_t x319 = 45;
	static uint8_t x320 = 5U;
	static volatile int32_t t79 = 109746;

    t79 = (((x317&x318)==x319)&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x323 = INT16_MIN;
	static volatile int16_t x324 = INT16_MIN;
	int32_t t80 = -14846290;

    t80 = (((x321&x322)==x323)&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x326 = 1U;
	int16_t x327 = -116;
	static volatile uint16_t x328 = 54U;
	static int32_t t81 = -1;

    t81 = (((x325&x326)==x327)&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 2LLU;
	int64_t x330 = INT64_MIN;
	volatile int8_t x331 = -8;
	uint16_t x332 = UINT16_MAX;
	int32_t t82 = -6221;

    t82 = (((x329&x330)==x331)&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x333 = 39U;
	uint32_t x334 = UINT32_MAX;
	static int32_t x335 = INT32_MIN;
	uint64_t t83 = 8006112LLU;

    t83 = (((x333&x334)==x335)&x336);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int64_t t84 = 168844LL;

    t84 = (((x337&x338)==x339)&x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x341 = UINT64_MAX;
	volatile int8_t x342 = -1;
	static int32_t x343 = 5618825;
	volatile int32_t x344 = -1;
	static int32_t t85 = 176;

    t85 = (((x341&x342)==x343)&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x345 = UINT32_MAX;
	uint8_t x346 = 20U;
	int64_t x348 = INT64_MIN;
	volatile int64_t t86 = -221642210765LL;

    t86 = (((x345&x346)==x347)&x348);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 811779LL;
	uint64_t x350 = 3378483677206LLU;
	int32_t x351 = INT32_MIN;
	int32_t t87 = 29101;

    t87 = (((x349&x350)==x351)&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	uint16_t x354 = 38U;
	int8_t x355 = INT8_MAX;
	static uint16_t x356 = 37U;
	volatile int32_t t88 = 10;

    t88 = (((x353&x354)==x355)&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x358 = -4;
	int32_t x359 = INT32_MIN;
	static uint16_t x360 = 162U;
	static int32_t t89 = 2;

    t89 = (((x357&x358)==x359)&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	uint16_t x362 = 335U;
	volatile int16_t x363 = INT16_MIN;
	uint16_t x364 = 508U;
	static volatile int32_t t90 = 0;

    t90 = (((x361&x362)==x363)&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x365 = 2U;
	int64_t x368 = INT64_MIN;
	static volatile int64_t t91 = -2172815862LL;

    t91 = (((x365&x366)==x367)&x368);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = 1U;
	int32_t x370 = INT32_MIN;
	uint32_t x371 = 103599U;
	volatile uint16_t x372 = UINT16_MAX;
	int32_t t92 = 406732;

    t92 = (((x369&x370)==x371)&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = 12;
	static int64_t x374 = -1LL;
	int64_t x375 = -1LL;
	int64_t t93 = -91107392345827077LL;

    t93 = (((x373&x374)==x375)&x376);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x377 = -1;
	int8_t x378 = 33;
	uint8_t x379 = 0U;
	int64_t x380 = -1LL;
	volatile int64_t t94 = -40285LL;

    t94 = (((x377&x378)==x379)&x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x382 = -1LL;
	uint32_t x383 = 109U;
	uint8_t x384 = 7U;
	volatile int32_t t95 = -124949474;

    t95 = (((x381&x382)==x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = UINT16_MAX;
	static int64_t x386 = INT64_MIN;
	volatile int64_t x388 = 479709336LL;
	static int64_t t96 = 14765092056LL;

    t96 = (((x385&x386)==x387)&x388);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = INT16_MAX;
	int32_t x390 = 0;
	static uint16_t x391 = UINT16_MAX;

    t97 = (((x389&x390)==x391)&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x394 = INT64_MIN;
	static uint8_t x395 = UINT8_MAX;
	static int16_t x396 = -1;
	int32_t t98 = -1828318;

    t98 = (((x393&x394)==x395)&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x398 = 2U;
	int64_t x399 = -1272124131LL;
	volatile int32_t t99 = 31495787;

    t99 = (((x397&x398)==x399)&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = -2063085;
	int8_t x402 = INT8_MIN;
	uint32_t x403 = 48074U;
	uint32_t x404 = UINT32_MAX;
	uint32_t t100 = 10595958U;

    t100 = (((x401&x402)==x403)&x404);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	volatile int64_t x406 = 687LL;
	uint8_t x407 = UINT8_MAX;
	int16_t x408 = INT16_MIN;
	volatile int32_t t101 = -101;

    t101 = (((x405&x406)==x407)&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 126272613160LL;
	int64_t x411 = INT64_MIN;
	int32_t x412 = 49506;
	static volatile int32_t t102 = -4;

    t102 = (((x409&x410)==x411)&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x415 = -1;
	volatile int32_t t103 = 0;

    t103 = (((x413&x414)==x415)&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -1LL;
	volatile uint32_t x418 = 243U;
	int16_t x419 = INT16_MAX;
	volatile int16_t x420 = INT16_MIN;
	int32_t t104 = -1776;

    t104 = (((x417&x418)==x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MAX;
	int64_t x424 = INT64_MAX;
	volatile int64_t t105 = 1523059707905LL;

    t105 = (((x421&x422)==x423)&x424);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MIN;
	static uint64_t x426 = 59LLU;
	int32_t x427 = INT32_MIN;
	volatile int8_t x428 = -1;

    t106 = (((x425&x426)==x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x429 = UINT8_MAX;
	static volatile int32_t x430 = -1;
	volatile int16_t x431 = -1;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = -4536;

    t107 = (((x429&x430)==x431)&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x433 = 4U;
	int64_t x434 = INT64_MIN;
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = -5467001LL;
	int64_t t108 = 51LL;

    t108 = (((x433&x434)==x435)&x436);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -1;
	int64_t x438 = INT64_MIN;
	volatile uint64_t x439 = 658LLU;
	static int64_t x440 = INT64_MIN;
	volatile int64_t t109 = 1524LL;

    t109 = (((x437&x438)==x439)&x440);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MAX;
	int8_t x442 = INT8_MAX;
	volatile int16_t x443 = -1;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t110 = -3;

    t110 = (((x441&x442)==x443)&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 4;
	uint64_t x446 = 3879858537LLU;
	volatile int32_t x447 = 335822;

    t111 = (((x445&x446)==x447)&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MAX;
	int8_t x451 = -5;
	uint32_t x452 = 813751U;

    t112 = (((x449&x450)==x451)&x452);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	int16_t x454 = -1;
	int64_t x455 = INT64_MAX;
	volatile int64_t x456 = -125LL;
	static int64_t t113 = 0LL;

    t113 = (((x453&x454)==x455)&x456);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x458 = UINT16_MAX;
	int64_t x459 = INT64_MIN;
	volatile int16_t x460 = -1;
	int32_t t114 = -1493200;

    t114 = (((x457&x458)==x459)&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	static uint32_t x462 = UINT32_MAX;
	uint64_t x463 = 452482204669681841LLU;
	int16_t x464 = -18;
	int32_t t115 = -210;

    t115 = (((x461&x462)==x463)&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x467 = 2462;
	int16_t x468 = 401;

    t116 = (((x465&x466)==x467)&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = INT32_MIN;
	volatile int8_t x471 = INT8_MIN;
	int16_t x472 = INT16_MIN;
	volatile int32_t t117 = 55062725;

    t117 = (((x469&x470)==x471)&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 453503943008897LLU;
	int64_t x474 = INT64_MAX;
	int64_t x476 = -1LL;
	static volatile int64_t t118 = -236773155557672375LL;

    t118 = (((x473&x474)==x475)&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MAX;
	static uint64_t x478 = 258307358820LLU;
	int32_t x479 = 5106462;
	uint16_t x480 = 2555U;
	volatile int32_t t119 = -302361;

    t119 = (((x477&x478)==x479)&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = 2891;
	int32_t x482 = INT32_MIN;
	volatile int64_t x484 = INT64_MIN;
	volatile int64_t t120 = -55525LL;

    t120 = (((x481&x482)==x483)&x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x485 = INT8_MIN;
	int32_t x486 = INT32_MIN;
	static uint8_t x487 = UINT8_MAX;
	volatile int64_t t121 = -112922575354781595LL;

    t121 = (((x485&x486)==x487)&x488);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MAX;
	uint64_t t122 = 73LLU;

    t122 = (((x489&x490)==x491)&x492);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x494 = 1;
	int64_t x495 = INT64_MAX;
	static volatile int8_t x496 = INT8_MAX;
	volatile int32_t t123 = 252255012;

    t123 = (((x493&x494)==x495)&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MAX;
	volatile uint16_t x499 = UINT16_MAX;
	int32_t x500 = INT32_MAX;
	int32_t t124 = 709464950;

    t124 = (((x497&x498)==x499)&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x501 = 49108877LLU;
	volatile uint8_t x502 = 31U;
	int16_t x503 = -1;
	int8_t x504 = -1;

    t125 = (((x501&x502)==x503)&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int64_t x507 = 3392928772847568014LL;
	uint32_t x508 = 3133887U;
	uint32_t t126 = 92U;

    t126 = (((x505&x506)==x507)&x508);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	static int32_t x510 = INT32_MIN;
	static uint8_t x511 = 0U;
	static uint8_t x512 = 0U;
	volatile int32_t t127 = -2;

    t127 = (((x509&x510)==x511)&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = INT32_MIN;
	int32_t x515 = 3;
	int8_t x516 = INT8_MIN;
	int32_t t128 = -5764;

    t128 = (((x513&x514)==x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MAX;
	uint8_t x518 = UINT8_MAX;
	uint64_t x519 = 146585707462149LLU;
	int8_t x520 = 7;
	volatile int32_t t129 = 13;

    t129 = (((x517&x518)==x519)&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = UINT8_MAX;
	uint64_t x522 = 182518LLU;
	int64_t x523 = -1LL;
	int16_t x524 = INT16_MAX;
	int32_t t130 = 121652;

    t130 = (((x521&x522)==x523)&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MIN;
	volatile int8_t x526 = INT8_MIN;
	int16_t x527 = 1606;
	int16_t x528 = -1;
	int32_t t131 = 9672;

    t131 = (((x525&x526)==x527)&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = -1;
	int64_t x530 = INT64_MAX;
	volatile int64_t x531 = 10LL;
	int16_t x532 = 14152;

    t132 = (((x529&x530)==x531)&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 1U;
	volatile int8_t x534 = -1;
	int16_t x535 = INT16_MIN;
	volatile int32_t t133 = -1;

    t133 = (((x533&x534)==x535)&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 3U;
	int32_t x539 = -2385463;
	int64_t x540 = -237859302545LL;

    t134 = (((x537&x538)==x539)&x540);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = 1U;
	static int16_t x542 = INT16_MIN;
	int32_t x543 = INT32_MIN;
	volatile int64_t x544 = -120890713LL;

    t135 = (((x541&x542)==x543)&x544);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = INT64_MIN;
	uint64_t x546 = 120158826642710LLU;
	int8_t x547 = 57;
	uint16_t x548 = 38U;
	volatile int32_t t136 = 306871;

    t136 = (((x545&x546)==x547)&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = -1;
	uint8_t x550 = UINT8_MAX;
	uint64_t x551 = 790493945189LLU;
	int32_t t137 = 531;

    t137 = (((x549&x550)==x551)&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	static int16_t x554 = INT16_MIN;
	uint64_t x556 = 2592661433LLU;

    t138 = (((x553&x554)==x555)&x556);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	static int32_t x558 = 404;
	uint8_t x559 = 121U;
	int16_t x560 = -3104;
	static int32_t t139 = 0;

    t139 = (((x557&x558)==x559)&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -19LL;
	static volatile int32_t x562 = INT32_MIN;
	uint64_t x563 = 3874LLU;
	static int16_t x564 = -1;
	static int32_t t140 = 6;

    t140 = (((x561&x562)==x563)&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x566 = 56546U;
	int64_t x567 = -1LL;
	uint64_t x568 = UINT64_MAX;
	uint64_t t141 = 220204750480545LLU;

    t141 = (((x565&x566)==x567)&x568);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 82122043;
	volatile uint64_t x570 = 49LLU;
	static volatile int8_t x571 = 19;
	static int32_t x572 = INT32_MAX;
	volatile int32_t t142 = 61921033;

    t142 = (((x569&x570)==x571)&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MAX;
	static volatile int16_t x575 = -139;
	int8_t x576 = 0;
	volatile int32_t t143 = 357159906;

    t143 = (((x573&x574)==x575)&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 73U;
	int16_t x578 = 6818;
	uint8_t x579 = 78U;
	uint64_t x580 = UINT64_MAX;

    t144 = (((x577&x578)==x579)&x580);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 76U;
	int8_t x582 = INT8_MIN;
	volatile int16_t x583 = INT16_MIN;
	int64_t t145 = 0LL;

    t145 = (((x581&x582)==x583)&x584);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x585 = 58853515712089429LLU;
	volatile int16_t x586 = INT16_MIN;
	int64_t x587 = INT64_MAX;
	int8_t x588 = -1;
	volatile int32_t t146 = -39;

    t146 = (((x585&x586)==x587)&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 2516U;
	int8_t x590 = INT8_MIN;
	int32_t t147 = 1;

    t147 = (((x589&x590)==x591)&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	uint32_t x594 = UINT32_MAX;
	uint16_t x595 = UINT16_MAX;
	int8_t x596 = INT8_MIN;
	int32_t t148 = 33936;

    t148 = (((x593&x594)==x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = INT64_MIN;
	int32_t x599 = INT32_MAX;
	uint8_t x600 = 72U;
	volatile int32_t t149 = 94909151;

    t149 = (((x597&x598)==x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	volatile int16_t x602 = -3876;
	int32_t x603 = INT32_MAX;
	volatile int8_t x604 = INT8_MIN;
	static volatile int32_t t150 = 1957;

    t150 = (((x601&x602)==x603)&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = 3;
	volatile uint64_t x606 = 94211115523434LLU;
	int64_t x607 = INT64_MIN;
	volatile int64_t t151 = 338955791347290208LL;

    t151 = (((x605&x606)==x607)&x608);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = 0;
	uint8_t x610 = 1U;
	static uint32_t x611 = UINT32_MAX;
	uint32_t t152 = 0U;

    t152 = (((x609&x610)==x611)&x612);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = -370125;
	uint32_t x614 = 15634U;
	uint8_t x615 = 3U;
	static volatile int64_t t153 = -230921393051701LL;

    t153 = (((x613&x614)==x615)&x616);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x617 = INT64_MIN;
	int8_t x618 = INT8_MAX;
	int16_t x619 = -1;
	volatile int32_t x620 = -1780635;
	volatile int32_t t154 = 971841;

    t154 = (((x617&x618)==x619)&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = -1LL;
	uint32_t x622 = 281U;
	volatile int64_t x623 = 903LL;
	static int16_t x624 = -149;
	int32_t t155 = -3;

    t155 = (((x621&x622)==x623)&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 3;
	uint32_t x626 = 1580U;
	volatile uint16_t x627 = UINT16_MAX;
	static int8_t x628 = INT8_MIN;
	volatile int32_t t156 = 27973059;

    t156 = (((x625&x626)==x627)&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x631 = 277040449;
	volatile int16_t x632 = -1;
	int32_t t157 = -1;

    t157 = (((x629&x630)==x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	static int64_t x634 = 0LL;
	uint8_t x635 = 21U;
	volatile int64_t t158 = -10531641624539044LL;

    t158 = (((x633&x634)==x635)&x636);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 211LLU;
	int64_t x638 = -1LL;
	static uint32_t x639 = 58259U;
	int8_t x640 = -1;
	int32_t t159 = -3;

    t159 = (((x637&x638)==x639)&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	int8_t x642 = INT8_MIN;
	static int16_t x643 = INT16_MAX;
	static int32_t x644 = INT32_MAX;

    t160 = (((x641&x642)==x643)&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = INT32_MAX;
	static int32_t x648 = INT32_MAX;
	int32_t t161 = -1;

    t161 = (((x645&x646)==x647)&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	uint64_t x650 = 348612721942LLU;
	static uint64_t x651 = 1786306407LLU;
	uint32_t x652 = 1862831855U;
	volatile uint32_t t162 = 113754U;

    t162 = (((x649&x650)==x651)&x652);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	volatile int16_t x654 = INT16_MAX;
	uint16_t x655 = 391U;
	uint32_t x656 = UINT32_MAX;
	volatile uint32_t t163 = 5U;

    t163 = (((x653&x654)==x655)&x656);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x657 = -1;
	uint64_t x658 = 24449071346LLU;
	static uint16_t x659 = UINT16_MAX;
	uint64_t x660 = UINT64_MAX;
	uint64_t t164 = 130451690027806LLU;

    t164 = (((x657&x658)==x659)&x660);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = 0;
	int64_t x662 = -1LL;
	uint32_t x663 = 18U;
	static uint32_t x664 = 12605U;
	volatile uint32_t t165 = 75355241U;

    t165 = (((x661&x662)==x663)&x664);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint32_t x666 = UINT32_MAX;
	volatile int16_t x667 = INT16_MAX;
	int16_t x668 = -1;

    t166 = (((x665&x666)==x667)&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x669 = INT32_MIN;
	int16_t x670 = INT16_MAX;
	int32_t x671 = 84631;
	static int16_t x672 = INT16_MIN;

    t167 = (((x669&x670)==x671)&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x673 = INT64_MAX;
	int8_t x674 = INT8_MIN;
	int64_t x675 = 357LL;
	int8_t x676 = INT8_MIN;

    t168 = (((x673&x674)==x675)&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	int64_t x678 = INT64_MIN;
	uint64_t x679 = UINT64_MAX;
	uint8_t x680 = 4U;
	volatile int32_t t169 = 132042635;

    t169 = (((x677&x678)==x679)&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = 5;
	int8_t x682 = -30;
	uint32_t x683 = UINT32_MAX;
	int16_t x684 = -5;

    t170 = (((x681&x682)==x683)&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x685 = 516U;
	static int16_t x686 = INT16_MIN;
	static volatile int32_t x687 = -308864;
	static int8_t x688 = INT8_MAX;
	volatile int32_t t171 = -46291;

    t171 = (((x685&x686)==x687)&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -1LL;
	int8_t x690 = INT8_MAX;
	int32_t x691 = INT32_MIN;
	static int8_t x692 = INT8_MIN;
	int32_t t172 = 100;

    t172 = (((x689&x690)==x691)&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int32_t x694 = INT32_MIN;
	static volatile uint32_t x695 = 2127033U;
	static uint8_t x696 = 17U;
	volatile int32_t t173 = -15530590;

    t173 = (((x693&x694)==x695)&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -165;
	volatile uint32_t x698 = UINT32_MAX;
	int8_t x699 = -1;
	volatile int16_t x700 = -46;
	int32_t t174 = 7268076;

    t174 = (((x697&x698)==x699)&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 0;
	int16_t x702 = -1;
	uint16_t x703 = 7427U;
	static uint64_t x704 = UINT64_MAX;
	uint64_t t175 = 2591369LLU;

    t175 = (((x701&x702)==x703)&x704);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = INT64_MIN;
	volatile uint64_t x706 = UINT64_MAX;
	static int16_t x707 = INT16_MIN;
	int64_t x708 = INT64_MIN;
	volatile int64_t t176 = -29475107201871LL;

    t176 = (((x705&x706)==x707)&x708);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x711 = -1LL;
	static int16_t x712 = -16260;
	static int32_t t177 = -110378219;

    t177 = (((x709&x710)==x711)&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = 244323;
	uint64_t x714 = UINT64_MAX;
	volatile int64_t x715 = -1LL;
	static uint8_t x716 = UINT8_MAX;
	volatile int32_t t178 = -10;

    t178 = (((x713&x714)==x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x718 = 8251606179737236LL;
	int16_t x719 = INT16_MIN;
	volatile uint32_t t179 = 2058573U;

    t179 = (((x717&x718)==x719)&x720);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	int64_t x722 = -6592067086603LL;
	int64_t x724 = -1LL;
	int64_t t180 = 2LL;

    t180 = (((x721&x722)==x723)&x724);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = INT16_MIN;
	uint64_t x726 = 166534252LLU;
	volatile uint8_t x727 = 0U;

    t181 = (((x725&x726)==x727)&x728);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MIN;
	int32_t x730 = 2871;
	uint32_t x731 = UINT32_MAX;
	static uint32_t x732 = 2726U;
	uint32_t t182 = 47182232U;

    t182 = (((x729&x730)==x731)&x732);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 11939U;
	uint64_t x735 = 4864LLU;
	static volatile int64_t t183 = 18017601LL;

    t183 = (((x733&x734)==x735)&x736);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = -8402;
	uint32_t x738 = 401265U;
	int16_t x740 = INT16_MIN;
	volatile int32_t t184 = 24698;

    t184 = (((x737&x738)==x739)&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 311U;
	static uint32_t x742 = 11U;
	uint64_t x743 = 3012729389660640LLU;
	int32_t t185 = -6;

    t185 = (((x741&x742)==x743)&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = INT8_MAX;
	uint64_t x746 = 192742484677283LLU;
	static int8_t x747 = -1;
	int32_t x748 = -112;
	int32_t t186 = 109218;

    t186 = (((x745&x746)==x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = 194241370904LL;
	int16_t x750 = -1;
	int16_t x751 = INT16_MAX;
	volatile int32_t x752 = -28;
	static int32_t t187 = -14154;

    t187 = (((x749&x750)==x751)&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x754 = UINT32_MAX;
	static int64_t x755 = INT64_MIN;

    t188 = (((x753&x754)==x755)&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x759 = 15252214LLU;
	uint64_t x760 = UINT64_MAX;
	volatile uint64_t t189 = 18043LLU;

    t189 = (((x757&x758)==x759)&x760);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int16_t x762 = INT16_MIN;
	uint64_t t190 = 11679957551083602LLU;

    t190 = (((x761&x762)==x763)&x764);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int8_t x766 = INT8_MAX;
	int32_t x767 = -1;
	int64_t t191 = -38372160661133LL;

    t191 = (((x765&x766)==x767)&x768);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	volatile int64_t x771 = -1635257593147690LL;
	static int64_t x772 = INT64_MIN;

    t192 = (((x769&x770)==x771)&x772);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x775 = -56;
	int16_t x776 = INT16_MIN;

    t193 = (((x773&x774)==x775)&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 157U;
	int8_t x779 = -1;
	uint8_t x780 = 8U;
	static int32_t t194 = -32124;

    t194 = (((x777&x778)==x779)&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint8_t x781 = 119U;
	uint16_t x782 = 83U;
	int16_t x783 = INT16_MIN;
	static int16_t x784 = INT16_MIN;
	int32_t t195 = 11;

    t195 = (((x781&x782)==x783)&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = 23U;
	int8_t x786 = 11;
	volatile int16_t x787 = INT16_MIN;
	int64_t x788 = INT64_MIN;
	volatile int64_t t196 = -58LL;

    t196 = (((x785&x786)==x787)&x788);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 22;
	uint64_t x790 = 38LLU;
	int64_t x791 = 4LL;
	static int32_t x792 = 16563;

    t197 = (((x789&x790)==x791)&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	int64_t x794 = -1543055671201225502LL;
	volatile int32_t x795 = -1;
	int64_t x796 = INT64_MAX;
	int64_t t198 = -13LL;

    t198 = (((x793&x794)==x795)&x796);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 9U;
	int16_t x799 = -1;
	static int64_t x800 = INT64_MIN;

    t199 = (((x797&x798)==x799)&x800);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

