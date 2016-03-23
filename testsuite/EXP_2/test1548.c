
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

static int16_t x3 = INT16_MIN;
int64_t x6 = INT64_MIN;
uint64_t x9 = 6161613864257071442LLU;
int8_t x10 = 27;
int16_t x12 = 4154;
uint64_t x19 = 117992629LLU;
uint8_t x25 = UINT8_MAX;
volatile int16_t x36 = INT16_MIN;
int64_t x41 = -42367LL;
int8_t x42 = 7;
int8_t x48 = INT8_MIN;
volatile int16_t x52 = INT16_MIN;
static int32_t t12 = -7126;
uint32_t x53 = 141U;
uint16_t x56 = 48U;
int32_t t13 = 63;
volatile int32_t x58 = INT32_MIN;
static volatile int32_t t16 = 17628094;
uint64_t x74 = UINT64_MAX;
uint32_t x87 = 8640U;
uint64_t x90 = 753181204275LLU;
static uint64_t x96 = UINT64_MAX;
int32_t x98 = -10790489;
uint32_t x105 = 65U;
int32_t t26 = -6817964;
static uint64_t x109 = 28035836321659466LLU;
volatile uint64_t x110 = 1425182LLU;
int32_t t28 = 50662;
int8_t x125 = INT8_MIN;
int32_t x127 = INT32_MIN;
volatile int16_t x140 = INT16_MIN;
static uint32_t x142 = 11281331U;
volatile int32_t t35 = 3135488;
static int64_t x145 = 26073LL;
int16_t x152 = 1;
uint16_t x159 = 1097U;
static volatile int32_t t39 = -1518;
static int64_t x163 = -1LL;
int16_t x164 = INT16_MAX;
int32_t t41 = 139145;
uint16_t x170 = UINT16_MAX;
uint32_t x177 = 338350U;
int32_t x179 = INT32_MIN;
volatile int32_t t44 = 2;
static int32_t t45 = -104543;
uint32_t x188 = 30209179U;
int32_t t46 = 50731;
uint32_t x189 = 0U;
int64_t x190 = 675518728975LL;
int32_t x192 = -1;
uint64_t x196 = 49693036585LLU;
int8_t x198 = -1;
static volatile int32_t t49 = -121316887;
volatile int32_t t52 = -3528;
volatile int16_t x213 = INT16_MIN;
int32_t x214 = -1;
static int32_t x219 = INT32_MAX;
static int32_t t54 = -90;
static int8_t x221 = INT8_MAX;
int32_t x222 = -1;
int16_t x223 = INT16_MAX;
volatile int32_t t55 = 8109227;
int16_t x230 = INT16_MAX;
uint64_t x249 = 179LLU;
int16_t x258 = -42;
int8_t x260 = INT8_MIN;
int32_t t64 = -853644;
static volatile int32_t t65 = 234718;
int64_t x265 = INT64_MIN;
volatile int32_t t66 = -40665;
int16_t x269 = -10;
static volatile int64_t x271 = 1103108829LL;
volatile int8_t x272 = 12;
int16_t x274 = INT16_MAX;
static uint64_t x283 = 6141148041LLU;
static volatile int32_t t71 = -21744438;
uint16_t x290 = 14385U;
int64_t x303 = -1LL;
volatile int32_t t75 = -1;
static volatile int8_t x305 = 11;
volatile int16_t x307 = INT16_MAX;
int8_t x309 = INT8_MAX;
volatile int8_t x310 = -1;
volatile int32_t t79 = -859513;
uint8_t x328 = 45U;
int32_t t82 = -121;
static int8_t x334 = 6;
uint16_t x336 = UINT16_MAX;
volatile int8_t x338 = INT8_MIN;
volatile int32_t t85 = -1316;
int32_t x346 = INT32_MIN;
static volatile int32_t t86 = -887;
int32_t t88 = -2381025;
volatile uint64_t x361 = UINT64_MAX;
uint16_t x365 = 1805U;
int16_t x371 = INT16_MIN;
int32_t t96 = 248861184;
uint32_t x392 = UINT32_MAX;
volatile int16_t x399 = INT16_MIN;
volatile int32_t t99 = -7019616;
volatile int16_t x401 = -1;
int32_t x405 = 99723103;
volatile uint64_t x406 = 4336098384028387LLU;
uint64_t x412 = UINT64_MAX;
int16_t x415 = 471;
int64_t x419 = -1LL;
static int16_t x423 = INT16_MAX;
uint16_t x425 = 6963U;
int8_t x429 = 1;
int32_t t107 = 1;
static uint16_t x442 = 13U;
int32_t x444 = -1;
volatile uint32_t x455 = UINT32_MAX;
int8_t x464 = INT8_MAX;
volatile int32_t t118 = -84;
volatile int32_t x480 = -27;
volatile int64_t x485 = INT64_MIN;
uint32_t x487 = 4U;
int32_t t121 = 734;
int8_t x491 = INT8_MAX;
static int16_t x497 = -1;
uint16_t x498 = UINT16_MAX;
volatile int32_t x500 = INT32_MIN;
int32_t t124 = -52363853;
uint8_t x504 = UINT8_MAX;
volatile int32_t t125 = -4415987;
int8_t x508 = -1;
int32_t x514 = -1;
volatile int16_t x520 = INT16_MAX;
int64_t x526 = INT64_MIN;
int32_t x531 = INT32_MIN;
uint8_t x532 = 10U;
volatile int32_t t132 = 1007606;
uint16_t x537 = UINT16_MAX;
uint8_t x540 = UINT8_MAX;
static uint16_t x541 = 5863U;
static uint8_t x550 = UINT8_MAX;
int8_t x554 = 0;
static volatile int16_t x558 = -1;
int8_t x563 = INT8_MAX;
static int32_t t142 = -18345;
int64_t x573 = INT64_MAX;
volatile int32_t t143 = 145211;
volatile uint8_t x577 = UINT8_MAX;
int32_t x581 = 212790;
uint16_t x584 = UINT16_MAX;
volatile int32_t t149 = -100012;
int64_t x605 = INT64_MIN;
int8_t x607 = 0;
int32_t x612 = -1;
volatile int32_t t152 = -792;
static int16_t x619 = INT16_MIN;
int64_t x622 = 105317LL;
static uint8_t x626 = UINT8_MAX;
volatile int32_t t156 = 29;
uint64_t x632 = 162619899LLU;
uint8_t x642 = 0U;
int32_t x646 = INT32_MIN;
static uint64_t x657 = 616070817208LLU;
uint8_t x662 = 13U;
int32_t x664 = INT32_MIN;
static int16_t x678 = 935;
static volatile int32_t t170 = 2;
static int16_t x690 = INT16_MAX;
uint32_t x691 = 961U;
static int8_t x693 = INT8_MAX;
int32_t x700 = INT32_MIN;
int64_t x705 = INT64_MIN;
static int64_t x707 = -11737498LL;
int64_t x708 = 765372LL;
uint64_t x709 = 114732LLU;
int16_t x715 = -1;
int32_t t179 = 14139;
int32_t x722 = INT32_MIN;
uint64_t x725 = 2022137309219LLU;
uint32_t x728 = UINT32_MAX;
int8_t x741 = INT8_MIN;
uint8_t x748 = UINT8_MAX;
int64_t x750 = -1LL;
static int64_t x756 = 51LL;
static volatile int64_t x763 = -225905258LL;
static int8_t x765 = INT8_MAX;
uint16_t x766 = 161U;
int32_t t191 = 15119;
int16_t x770 = 2243;
int32_t x771 = INT32_MIN;
int16_t x783 = INT16_MIN;
uint64_t x785 = UINT64_MAX;
volatile int16_t x787 = INT16_MIN;
int64_t x789 = -381162450LL;
int8_t x790 = INT8_MIN;
int16_t x791 = INT16_MAX;
volatile int16_t x792 = -10383;
volatile int16_t x797 = -1;
volatile int8_t x798 = 0;
int64_t x800 = -1LL;


void f0(void) {
    	static int8_t x1 = -12;
	volatile int64_t x2 = INT64_MIN;
	uint16_t x4 = 52U;
	int32_t t0 = -1;

    t0 = ((x1|(x2==x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 1;
	volatile int32_t x7 = INT32_MAX;
	int8_t x8 = -60;
	volatile int32_t t1 = -14;

    t1 = ((x5|(x6==x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x11 = INT16_MIN;
	static int32_t t2 = 1355909;

    t2 = ((x9|(x10==x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -3;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MAX;
	volatile int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = -426383;

    t3 = ((x13|(x14==x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -1LL;
	static int64_t x18 = -1LL;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = 410417;

    t4 = ((x17|(x18==x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -17;
	int32_t x22 = -728;
	uint8_t x23 = 127U;
	int32_t x24 = INT32_MAX;
	int32_t t5 = -1;

    t5 = ((x21|(x22==x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -191128LL;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -10;

    t6 = ((x25|(x26==x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 1;
	int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	int64_t x32 = INT64_MIN;
	int32_t t7 = 2;

    t7 = ((x29|(x30==x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = UINT32_MAX;
	int8_t x34 = INT8_MIN;
	uint32_t x35 = 1U;
	static volatile int32_t t8 = -1649;

    t8 = ((x33|(x34==x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = -1;
	volatile int32_t t9 = 5168;

    t9 = ((x37|(x38==x39))==x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x43 = UINT64_MAX;
	static int16_t x44 = -1;
	int32_t t10 = 6856;

    t10 = ((x41|(x42==x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 2795;
	int32_t x46 = -1;
	static uint8_t x47 = UINT8_MAX;
	int32_t t11 = 9532780;

    t11 = ((x45|(x46==x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MAX;
	static int64_t x51 = INT64_MIN;

    t12 = ((x49|(x50==x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x54 = INT32_MIN;
	uint16_t x55 = 14U;

    t13 = ((x53|(x54==x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x59 = -5184;
	int64_t x60 = INT64_MAX;
	int32_t t14 = 13;

    t14 = ((x57|(x58==x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MIN;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = -340811061;

    t15 = ((x61|(x62==x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	uint64_t x66 = UINT64_MAX;
	volatile uint8_t x67 = 0U;
	volatile uint32_t x68 = 394272820U;

    t16 = ((x65|(x66==x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = UINT64_MAX;
	int16_t x70 = -1;
	static int32_t x71 = 20099;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -100801;

    t17 = ((x69|(x70==x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int8_t x75 = INT8_MAX;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 1;

    t18 = ((x73|(x74==x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = 1;
	uint32_t x78 = UINT32_MAX;
	uint8_t x79 = 4U;
	int64_t x80 = 1636064357LL;
	volatile int32_t t19 = -3642;

    t19 = ((x77|(x78==x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = 123535;
	uint8_t x82 = 9U;
	volatile int8_t x83 = 0;
	static volatile uint32_t x84 = 28316U;
	volatile int32_t t20 = 2451355;

    t20 = ((x81|(x82==x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -26520267286101145LL;
	uint32_t x86 = 141348422U;
	int8_t x88 = INT8_MAX;
	int32_t t21 = 29113033;

    t21 = ((x85|(x86==x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 12U;
	static int8_t x91 = INT8_MIN;
	static volatile int8_t x92 = -27;
	volatile int32_t t22 = 19092345;

    t22 = ((x89|(x90==x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 12U;
	int32_t x94 = 2474;
	uint16_t x95 = UINT16_MAX;
	int32_t t23 = 53393;

    t23 = ((x93|(x94==x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 20U;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = -1LL;
	int32_t t24 = -22905852;

    t24 = ((x97|(x98==x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 34538U;
	uint8_t x102 = 45U;
	int32_t x103 = -699559511;
	static int32_t x104 = 1;
	int32_t t25 = 105;

    t25 = ((x101|(x102==x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MIN;
	volatile int8_t x107 = -2;
	int8_t x108 = INT8_MIN;

    t26 = ((x105|(x106==x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x111 = 4U;
	int8_t x112 = -1;
	volatile int32_t t27 = -1;

    t27 = ((x109|(x110==x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	uint8_t x114 = 5U;
	volatile int8_t x115 = -5;
	static uint64_t x116 = 184749100597479718LLU;

    t28 = ((x113|(x114==x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 595;
	int8_t x118 = -15;
	volatile int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 186853;

    t29 = ((x117|(x118==x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -7;
	static int8_t x122 = INT8_MIN;
	volatile int16_t x123 = INT16_MAX;
	volatile int64_t x124 = INT64_MAX;
	volatile int32_t t30 = -7;

    t30 = ((x121|(x122==x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = INT8_MAX;
	volatile int16_t x128 = 169;
	int32_t t31 = -2512;

    t31 = ((x125|(x126==x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = 0U;
	int8_t x131 = -1;
	volatile uint16_t x132 = UINT16_MAX;
	int32_t t32 = 255;

    t32 = ((x129|(x130==x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 1561LLU;
	volatile int16_t x134 = INT16_MAX;
	uint64_t x135 = UINT64_MAX;
	int8_t x136 = INT8_MAX;
	int32_t t33 = -1462135;

    t33 = ((x133|(x134==x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	int8_t x138 = INT8_MAX;
	static volatile uint64_t x139 = 228032LLU;
	int32_t t34 = 441902091;

    t34 = ((x137|(x138==x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int16_t x143 = -1;
	int32_t x144 = -8703341;

    t35 = ((x141|(x142==x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	volatile int8_t x148 = INT8_MIN;
	int32_t t36 = 12;

    t36 = ((x145|(x146==x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MIN;
	int32_t x150 = 1576345;
	volatile int32_t x151 = INT32_MIN;
	static int32_t t37 = 104;

    t37 = ((x149|(x150==x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int32_t x154 = 667901;
	int16_t x155 = -1;
	int16_t x156 = 9760;
	volatile int32_t t38 = 390523194;

    t38 = ((x153|(x154==x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 0U;
	static uint32_t x158 = UINT32_MAX;
	volatile int16_t x160 = INT16_MIN;

    t39 = ((x157|(x158==x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MAX;
	int32_t t40 = 1;

    t40 = ((x161|(x162==x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -7890738198523194LL;
	volatile uint64_t x166 = UINT64_MAX;
	uint64_t x167 = 126068225LLU;
	int64_t x168 = -1LL;

    t41 = ((x165|(x166==x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	static uint64_t x171 = 0LLU;
	int16_t x172 = 3273;
	volatile int32_t t42 = 740829486;

    t42 = ((x169|(x170==x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = 63;
	uint8_t x174 = UINT8_MAX;
	static volatile int64_t x175 = INT64_MAX;
	uint8_t x176 = 4U;
	static int32_t t43 = 19986044;

    t43 = ((x173|(x174==x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x178 = 3256U;
	uint64_t x180 = 73LLU;

    t44 = ((x177|(x178==x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 12743727;
	static volatile uint32_t x182 = UINT32_MAX;
	int32_t x183 = -196790;
	static int16_t x184 = INT16_MAX;

    t45 = ((x181|(x182==x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MIN;
	volatile int64_t x187 = INT64_MAX;

    t46 = ((x185|(x186==x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x191 = INT64_MIN;
	volatile int32_t t47 = -1;

    t47 = ((x189|(x190==x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	int64_t x194 = -1LL;
	int64_t x195 = INT64_MIN;
	int32_t t48 = -27400671;

    t48 = ((x193|(x194==x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = UINT16_MAX;
	uint8_t x199 = UINT8_MAX;
	static int64_t x200 = 4408934210553LL;

    t49 = ((x197|(x198==x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	static volatile int64_t x202 = INT64_MAX;
	static uint64_t x203 = UINT64_MAX;
	uint16_t x204 = UINT16_MAX;
	static volatile int32_t t50 = -14038279;

    t50 = ((x201|(x202==x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 46U;
	uint32_t x206 = 8005U;
	static volatile uint8_t x207 = 39U;
	uint32_t x208 = 26868355U;
	volatile int32_t t51 = -721;

    t51 = ((x205|(x206==x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = 3867133456967LL;
	int16_t x210 = -1;
	volatile int32_t x211 = INT32_MAX;
	uint8_t x212 = 1U;

    t52 = ((x209|(x210==x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x215 = -1144754675483999577LL;
	volatile int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 0;

    t53 = ((x213|(x214==x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 52649U;
	volatile uint64_t x218 = UINT64_MAX;
	volatile int8_t x220 = -1;

    t54 = ((x217|(x218==x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x224 = 69752U;

    t55 = ((x221|(x222==x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 1U;
	static int32_t x226 = INT32_MAX;
	int8_t x227 = INT8_MIN;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = -3;

    t56 = ((x225|(x226==x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = UINT64_MAX;
	int8_t x231 = INT8_MAX;
	int16_t x232 = 0;
	volatile int32_t t57 = 588;

    t57 = ((x229|(x230==x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	uint64_t x234 = 283686LLU;
	int32_t x235 = -7;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = -64686;

    t58 = ((x233|(x234==x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 34U;
	int16_t x238 = -3997;
	uint64_t x239 = 7136754475688LLU;
	uint16_t x240 = 39U;
	int32_t t59 = 9999;

    t59 = ((x237|(x238==x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 1U;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = 1U;
	volatile uint32_t x244 = UINT32_MAX;
	volatile int32_t t60 = 0;

    t60 = ((x241|(x242==x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 3U;
	int16_t x246 = -1;
	static int8_t x247 = INT8_MIN;
	uint32_t x248 = 7U;
	int32_t t61 = -771908740;

    t61 = ((x245|(x246==x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x250 = 492937633LLU;
	int16_t x251 = INT16_MIN;
	int64_t x252 = -842852615LL;
	volatile int32_t t62 = -3336953;

    t62 = ((x249|(x250==x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = UINT8_MAX;
	uint8_t x254 = 1U;
	int32_t x255 = -1;
	uint8_t x256 = 71U;
	static volatile int32_t t63 = 54765855;

    t63 = ((x253|(x254==x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	volatile uint64_t x259 = 23246992953925LLU;

    t64 = ((x257|(x258==x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int32_t x262 = INT32_MAX;
	int8_t x263 = INT8_MIN;
	volatile uint64_t x264 = 124456LLU;

    t65 = ((x261|(x262==x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = INT8_MIN;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = INT32_MIN;

    t66 = ((x265|(x266==x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = -1;
	int32_t t67 = 707869;

    t67 = ((x269|(x270==x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 369209823930451844LLU;
	int8_t x275 = 0;
	uint8_t x276 = 47U;
	static int32_t t68 = -186982392;

    t68 = ((x273|(x274==x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MIN;
	volatile uint16_t x278 = 4543U;
	int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -1;

    t69 = ((x277|(x278==x279))==x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x281 = INT16_MIN;
	uint64_t x282 = 4010317395LLU;
	int64_t x284 = INT64_MIN;
	static volatile int32_t t70 = -4;

    t70 = ((x281|(x282==x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = 65763998165212486LLU;
	static int16_t x286 = INT16_MIN;
	uint16_t x287 = 5615U;
	uint64_t x288 = UINT64_MAX;

    t71 = ((x285|(x286==x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -24;
	uint16_t x291 = UINT16_MAX;
	uint8_t x292 = 11U;
	int32_t t72 = 1473;

    t72 = ((x289|(x290==x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	int8_t x294 = -1;
	int32_t x295 = INT32_MAX;
	volatile int32_t x296 = 277749;
	volatile int32_t t73 = -1;

    t73 = ((x293|(x294==x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	int64_t x298 = -33875706119134LL;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	int32_t t74 = -14143;

    t74 = ((x297|(x298==x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 50851U;
	int32_t x302 = -1;
	volatile int64_t x304 = INT64_MIN;

    t75 = ((x301|(x302==x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x306 = 1;
	int32_t x308 = -1;
	int32_t t76 = -28213;

    t76 = ((x305|(x306==x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x311 = 66U;
	int32_t x312 = 94209047;
	int32_t t77 = 35111;

    t77 = ((x309|(x310==x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 514U;
	uint32_t x314 = UINT32_MAX;
	uint8_t x315 = 69U;
	static int16_t x316 = 475;
	volatile int32_t t78 = -8268;

    t78 = ((x313|(x314==x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x317 = INT8_MIN;
	int32_t x318 = -1031;
	volatile uint64_t x319 = 4083831551434221810LLU;
	int8_t x320 = 3;

    t79 = ((x317|(x318==x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 3302;
	int64_t x322 = -1LL;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = 38;

    t80 = ((x321|(x322==x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 1425884052U;
	uint64_t x326 = 3LLU;
	volatile int64_t x327 = INT64_MIN;
	volatile int32_t t81 = 87;

    t81 = ((x325|(x326==x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MAX;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = INT64_MIN;

    t82 = ((x329|(x330==x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = -62686;
	int16_t x335 = -4662;
	int32_t t83 = 58842144;

    t83 = ((x333|(x334==x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	uint8_t x339 = 6U;
	volatile int8_t x340 = -1;
	int32_t t84 = 1487254;

    t84 = ((x337|(x338==x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = UINT16_MAX;
	int32_t x344 = INT32_MIN;

    t85 = ((x341|(x342==x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x345 = 1523U;
	uint16_t x347 = 13739U;
	int16_t x348 = INT16_MIN;

    t86 = ((x345|(x346==x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = UINT64_MAX;
	int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = -6;

    t87 = ((x349|(x350==x351))==x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 11U;
	volatile uint32_t x354 = 1122551860U;
	volatile uint8_t x355 = UINT8_MAX;
	int32_t x356 = -1;

    t88 = ((x353|(x354==x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = -2317;
	int64_t x358 = INT64_MIN;
	static uint64_t x359 = 5097491735LLU;
	int8_t x360 = 1;
	volatile int32_t t89 = -7;

    t89 = ((x357|(x358==x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x362 = 84U;
	int8_t x363 = -1;
	static int16_t x364 = INT16_MIN;
	int32_t t90 = -1;

    t90 = ((x361|(x362==x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x366 = -34;
	int8_t x367 = -1;
	int16_t x368 = 1;
	int32_t t91 = -30249;

    t91 = ((x365|(x366==x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1;
	uint32_t x370 = 1U;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = -803277;

    t92 = ((x369|(x370==x371))==x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x373 = UINT16_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MAX;
	static int32_t x376 = -1;
	volatile int32_t t93 = -30181;

    t93 = ((x373|(x374==x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 15121U;
	int8_t x378 = -1;
	uint16_t x379 = 1899U;
	int32_t x380 = INT32_MAX;
	int32_t t94 = 26909;

    t94 = ((x377|(x378==x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	int8_t x382 = -1;
	static int16_t x383 = -8;
	uint8_t x384 = 51U;
	volatile int32_t t95 = 157;

    t95 = ((x381|(x382==x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 31U;
	int64_t x386 = 8589232039LL;
	static int64_t x387 = -1LL;
	int32_t x388 = -1;

    t96 = ((x385|(x386==x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	volatile int32_t t97 = -180195419;

    t97 = ((x389|(x390==x391))==x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MAX;
	uint8_t x394 = 106U;
	static int32_t x395 = 5767564;
	static int16_t x396 = INT16_MAX;
	static volatile int32_t t98 = -319004;

    t98 = ((x393|(x394==x395))==x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint32_t x398 = 1387U;
	uint64_t x400 = 2929298022LLU;

    t99 = ((x397|(x398==x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x402 = 3;
	volatile int64_t x403 = INT64_MAX;
	uint8_t x404 = 4U;
	int32_t t100 = 26;

    t100 = ((x401|(x402==x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x407 = 104850;
	int16_t x408 = INT16_MIN;
	int32_t t101 = 0;

    t101 = ((x405|(x406==x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 755319848477LL;
	uint16_t x410 = 29763U;
	int32_t x411 = 1;
	int32_t t102 = 16496554;

    t102 = ((x409|(x410==x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint8_t x414 = UINT8_MAX;
	static int64_t x416 = INT64_MIN;
	int32_t t103 = -3;

    t103 = ((x413|(x414==x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	int8_t x418 = INT8_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t104 = -9;

    t104 = ((x417|(x418==x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 7LLU;
	int8_t x422 = -1;
	int16_t x424 = 9;
	volatile int32_t t105 = 0;

    t105 = ((x421|(x422==x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x426 = INT8_MIN;
	int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MIN;
	volatile int32_t t106 = 1;

    t106 = ((x425|(x426==x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x430 = 120537U;
	uint64_t x431 = UINT64_MAX;
	int8_t x432 = INT8_MIN;

    t107 = ((x429|(x430==x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	uint16_t x434 = 5U;
	int64_t x435 = INT64_MIN;
	int8_t x436 = INT8_MIN;
	int32_t t108 = 6404943;

    t108 = ((x433|(x434==x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = -1;
	uint16_t x438 = 8798U;
	uint8_t x439 = 1U;
	int8_t x440 = -1;
	int32_t t109 = 2805;

    t109 = ((x437|(x438==x439))==x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MAX;
	static uint8_t x443 = 63U;
	static int32_t t110 = -3922088;

    t110 = ((x441|(x442==x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile int32_t x446 = -9;
	int16_t x447 = -1;
	int64_t x448 = -1LL;
	static int32_t t111 = 178686;

    t111 = ((x445|(x446==x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 1215712LLU;
	uint16_t x450 = UINT16_MAX;
	int64_t x451 = INT64_MIN;
	int64_t x452 = -1LL;
	volatile int32_t t112 = 21540106;

    t112 = ((x449|(x450==x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = INT8_MIN;
	uint64_t x454 = 7974LLU;
	uint64_t x456 = UINT64_MAX;
	int32_t t113 = 301841;

    t113 = ((x453|(x454==x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 11364U;
	int32_t x458 = -37996670;
	uint64_t x459 = UINT64_MAX;
	volatile int32_t x460 = -166;
	volatile int32_t t114 = 189800901;

    t114 = ((x457|(x458==x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x461 = UINT64_MAX;
	uint32_t x462 = 148762U;
	uint32_t x463 = 11956U;
	static volatile int32_t t115 = 936;

    t115 = ((x461|(x462==x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -245;
	int32_t x466 = INT32_MAX;
	int16_t x467 = INT16_MIN;
	int64_t x468 = 367139972527662001LL;
	int32_t t116 = 2950423;

    t116 = ((x465|(x466==x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = 3;
	int16_t x470 = INT16_MAX;
	static int32_t x471 = 125832773;
	static uint64_t x472 = 2209830LLU;
	int32_t t117 = 9770;

    t117 = ((x469|(x470==x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 8;
	int16_t x474 = -96;
	volatile uint8_t x475 = UINT8_MAX;
	uint16_t x476 = UINT16_MAX;

    t118 = ((x473|(x474==x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 24U;
	uint32_t x478 = 378176510U;
	static int16_t x479 = INT16_MIN;
	volatile int32_t t119 = 104027991;

    t119 = ((x477|(x478==x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x481 = 43U;
	static int8_t x482 = 16;
	volatile uint64_t x483 = UINT64_MAX;
	int32_t x484 = INT32_MIN;
	int32_t t120 = 4094399;

    t120 = ((x481|(x482==x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x486 = INT16_MIN;
	static int8_t x488 = INT8_MIN;

    t121 = ((x485|(x486==x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	int16_t x490 = -1371;
	int16_t x492 = INT16_MAX;
	volatile int32_t t122 = -7;

    t122 = ((x489|(x490==x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = UINT16_MAX;
	int64_t x494 = 7909960034792LL;
	static int16_t x495 = -1;
	static uint32_t x496 = UINT32_MAX;
	int32_t t123 = 157321;

    t123 = ((x493|(x494==x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x499 = INT64_MIN;

    t124 = ((x497|(x498==x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -1;
	static uint8_t x502 = 12U;
	uint8_t x503 = UINT8_MAX;

    t125 = ((x501|(x502==x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MAX;
	int16_t x506 = 110;
	uint32_t x507 = 177U;
	static int32_t t126 = -126623792;

    t126 = ((x505|(x506==x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -36;
	uint16_t x510 = 97U;
	static int16_t x511 = INT16_MAX;
	int8_t x512 = 6;
	int32_t t127 = -6260030;

    t127 = ((x509|(x510==x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	uint16_t x515 = UINT16_MAX;
	static uint8_t x516 = UINT8_MAX;
	static volatile int32_t t128 = -99649;

    t128 = ((x513|(x514==x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	volatile int32_t x518 = 754;
	volatile uint8_t x519 = 0U;
	int32_t t129 = -5771499;

    t129 = ((x517|(x518==x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = INT32_MIN;
	volatile int32_t x522 = INT32_MIN;
	int16_t x523 = INT16_MIN;
	uint32_t x524 = 390984U;
	volatile int32_t t130 = -978;

    t130 = ((x521|(x522==x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = UINT16_MAX;
	uint16_t x527 = 353U;
	static uint64_t x528 = 124136441LLU;
	volatile int32_t t131 = 22726;

    t131 = ((x525|(x526==x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 359U;
	volatile uint8_t x530 = UINT8_MAX;

    t132 = ((x529|(x530==x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = INT16_MIN;
	static volatile int16_t x534 = INT16_MAX;
	int16_t x535 = -16163;
	uint16_t x536 = 87U;
	int32_t t133 = -2;

    t133 = ((x533|(x534==x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x538 = 111LLU;
	uint16_t x539 = 8973U;
	volatile int32_t t134 = -975;

    t134 = ((x537|(x538==x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = -15;
	int64_t x543 = INT64_MIN;
	int16_t x544 = INT16_MIN;
	static int32_t t135 = 359;

    t135 = ((x541|(x542==x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -1;
	int8_t x546 = -2;
	static int32_t x547 = INT32_MIN;
	volatile int64_t x548 = INT64_MAX;
	int32_t t136 = -3847;

    t136 = ((x545|(x546==x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 358439407U;
	volatile int64_t x551 = INT64_MIN;
	volatile int16_t x552 = INT16_MAX;
	static volatile int32_t t137 = -15089625;

    t137 = ((x549|(x550==x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = INT32_MIN;
	uint16_t x555 = 612U;
	int16_t x556 = INT16_MIN;
	volatile int32_t t138 = 692557897;

    t138 = ((x553|(x554==x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MAX;
	volatile uint64_t x559 = 335337179030LLU;
	int32_t x560 = INT32_MIN;
	volatile int32_t t139 = -66016648;

    t139 = ((x557|(x558==x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 945U;
	static uint16_t x562 = 12789U;
	volatile int32_t x564 = INT32_MAX;
	int32_t t140 = -337;

    t140 = ((x561|(x562==x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	int8_t x566 = INT8_MIN;
	uint32_t x567 = 2538532U;
	int16_t x568 = INT16_MIN;
	int32_t t141 = -515;

    t141 = ((x565|(x566==x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = INT32_MAX;
	int64_t x570 = 213578LL;
	volatile int64_t x571 = -1LL;
	int8_t x572 = INT8_MIN;

    t142 = ((x569|(x570==x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = -1LL;
	static int64_t x575 = -1LL;
	static int32_t x576 = -1;

    t143 = ((x573|(x574==x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = 1;
	static uint16_t x579 = 5307U;
	int8_t x580 = INT8_MIN;
	int32_t t144 = 1;

    t144 = ((x577|(x578==x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x582 = 0;
	int32_t x583 = INT32_MAX;
	int32_t t145 = 38;

    t145 = ((x581|(x582==x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	int64_t x586 = 1099LL;
	static int16_t x587 = -1;
	int64_t x588 = -1LL;
	int32_t t146 = 132088955;

    t146 = ((x585|(x586==x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 1347U;
	uint32_t x590 = UINT32_MAX;
	static uint16_t x591 = 3618U;
	static int64_t x592 = -1LL;
	volatile int32_t t147 = 1;

    t147 = ((x589|(x590==x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = -71;
	uint16_t x594 = UINT16_MAX;
	static volatile uint16_t x595 = 331U;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = -173;

    t148 = ((x593|(x594==x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 435796368466885272LL;
	int32_t x598 = INT32_MIN;
	int32_t x599 = 771;
	int64_t x600 = -1LL;

    t149 = ((x597|(x598==x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 1U;
	int32_t x602 = 672861;
	int16_t x603 = -1;
	uint32_t x604 = UINT32_MAX;
	int32_t t150 = 3;

    t150 = ((x601|(x602==x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x606 = -8906538;
	int64_t x608 = -1LL;
	volatile int32_t t151 = 33326;

    t151 = ((x605|(x606==x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	static uint16_t x610 = UINT16_MAX;
	static volatile int32_t x611 = INT32_MIN;

    t152 = ((x609|(x610==x611))==x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x613 = UINT64_MAX;
	uint32_t x614 = 433933611U;
	static int8_t x615 = -6;
	volatile uint8_t x616 = UINT8_MAX;
	int32_t t153 = 516;

    t153 = ((x613|(x614==x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 1;
	static volatile int64_t x618 = -4LL;
	uint32_t x620 = 389U;
	int32_t t154 = 2;

    t154 = ((x617|(x618==x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 220609U;
	volatile uint16_t x623 = UINT16_MAX;
	uint8_t x624 = UINT8_MAX;
	int32_t t155 = 50;

    t155 = ((x621|(x622==x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	int32_t x627 = -1;
	int32_t x628 = INT32_MIN;

    t156 = ((x625|(x626==x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 2;
	static volatile int64_t x630 = INT64_MAX;
	int64_t x631 = 2LL;
	int32_t t157 = 324;

    t157 = ((x629|(x630==x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = INT32_MAX;
	uint32_t x634 = 320U;
	static uint64_t x635 = 189LLU;
	uint8_t x636 = 25U;
	volatile int32_t t158 = -81;

    t158 = ((x633|(x634==x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 0U;
	static int64_t x638 = 15751852116596LL;
	int16_t x639 = INT16_MIN;
	int32_t x640 = INT32_MAX;
	volatile int32_t t159 = -162;

    t159 = ((x637|(x638==x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	uint8_t x643 = 3U;
	uint16_t x644 = 1U;
	int32_t t160 = -10228046;

    t160 = ((x641|(x642==x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	int16_t x647 = INT16_MIN;
	static volatile int32_t x648 = INT32_MIN;
	int32_t t161 = 4403498;

    t161 = ((x645|(x646==x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	uint32_t x650 = 2U;
	uint16_t x651 = 14628U;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t162 = -18307;

    t162 = ((x649|(x650==x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	static int8_t x654 = 51;
	int32_t x655 = INT32_MIN;
	int32_t x656 = 129;
	int32_t t163 = 11726;

    t163 = ((x653|(x654==x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x658 = 13025563358LLU;
	int32_t x659 = -1;
	int64_t x660 = -1LL;
	static volatile int32_t t164 = -3;

    t164 = ((x657|(x658==x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x661 = 0U;
	volatile uint64_t x663 = UINT64_MAX;
	int32_t t165 = -7005;

    t165 = ((x661|(x662==x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	static int8_t x666 = 1;
	int8_t x667 = 1;
	int16_t x668 = -658;
	int32_t t166 = -13656;

    t166 = ((x665|(x666==x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	uint64_t x670 = UINT64_MAX;
	volatile uint32_t x671 = 54U;
	uint8_t x672 = 7U;
	int32_t t167 = -18041;

    t167 = ((x669|(x670==x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x673 = UINT64_MAX;
	static int16_t x674 = -1621;
	static volatile int16_t x675 = -1;
	int8_t x676 = INT8_MIN;
	volatile int32_t t168 = -22287538;

    t168 = ((x673|(x674==x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	int16_t x679 = 7799;
	volatile uint32_t x680 = 785U;
	static volatile int32_t t169 = -3316;

    t169 = ((x677|(x678==x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = INT16_MIN;
	static uint16_t x682 = 356U;
	static uint64_t x683 = 895011722465660483LLU;
	int64_t x684 = 8674LL;

    t170 = ((x681|(x682==x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 2089855864U;
	int32_t x686 = INT32_MIN;
	uint64_t x687 = 922284LLU;
	int8_t x688 = -1;
	int32_t t171 = 31332;

    t171 = ((x685|(x686==x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	int64_t x692 = INT64_MIN;
	volatile int32_t t172 = -15;

    t172 = ((x689|(x690==x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x694 = 78U;
	volatile int32_t x695 = -76413;
	int32_t x696 = INT32_MIN;
	int32_t t173 = -2696650;

    t173 = ((x693|(x694==x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	volatile int64_t x698 = INT64_MIN;
	int8_t x699 = INT8_MIN;
	int32_t t174 = -129691;

    t174 = ((x697|(x698==x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x701 = UINT32_MAX;
	int64_t x702 = INT64_MIN;
	uint64_t x703 = 38403LLU;
	uint64_t x704 = 3161602068361653606LLU;
	static volatile int32_t t175 = 287565;

    t175 = ((x701|(x702==x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = -229;
	int32_t t176 = -10353372;

    t176 = ((x705|(x706==x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = INT16_MIN;
	int8_t x711 = INT8_MAX;
	uint32_t x712 = UINT32_MAX;
	int32_t t177 = 1045783;

    t177 = ((x709|(x710==x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = UINT8_MAX;
	int32_t x714 = -1;
	int16_t x716 = 18;
	static int32_t t178 = 519;

    t178 = ((x713|(x714==x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = INT32_MIN;
	volatile int32_t x718 = INT32_MIN;
	volatile uint32_t x719 = UINT32_MAX;
	static volatile int16_t x720 = INT16_MIN;

    t179 = ((x717|(x718==x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = INT16_MIN;
	int16_t x723 = INT16_MIN;
	volatile uint16_t x724 = 0U;
	volatile int32_t t180 = -665;

    t180 = ((x721|(x722==x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x726 = INT8_MIN;
	static int64_t x727 = INT64_MIN;
	int32_t t181 = -607;

    t181 = ((x725|(x726==x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -948595LL;
	int16_t x730 = INT16_MAX;
	int32_t x731 = -1;
	uint8_t x732 = 8U;
	int32_t t182 = 237;

    t182 = ((x729|(x730==x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 6925LLU;
	int64_t x734 = INT64_MAX;
	uint32_t x735 = UINT32_MAX;
	static int64_t x736 = INT64_MAX;
	int32_t t183 = 118194924;

    t183 = ((x733|(x734==x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 12900U;
	volatile int64_t x738 = -1LL;
	static volatile int64_t x739 = INT64_MAX;
	static int8_t x740 = INT8_MAX;
	static volatile int32_t t184 = -3;

    t184 = ((x737|(x738==x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x742 = 0U;
	volatile int32_t x743 = 2235160;
	int64_t x744 = 1050863817071749LL;
	int32_t t185 = 211;

    t185 = ((x741|(x742==x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = 38662;
	volatile uint64_t x746 = UINT64_MAX;
	volatile int8_t x747 = -1;
	volatile int32_t t186 = -1;

    t186 = ((x745|(x746==x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = -1632397924LL;
	int16_t x751 = 0;
	uint32_t x752 = 9318U;
	volatile int32_t t187 = -3957;

    t187 = ((x749|(x750==x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 34U;
	static uint8_t x754 = 73U;
	int32_t x755 = INT32_MIN;
	static int32_t t188 = 0;

    t188 = ((x753|(x754==x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	int16_t x758 = -1;
	volatile int8_t x759 = INT8_MIN;
	uint16_t x760 = UINT16_MAX;
	int32_t t189 = 5932;

    t189 = ((x757|(x758==x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = INT32_MAX;
	static int32_t x762 = -15;
	static int32_t x764 = INT32_MIN;
	int32_t t190 = -241457;

    t190 = ((x761|(x762==x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x767 = 0U;
	volatile int16_t x768 = INT16_MAX;

    t191 = ((x765|(x766==x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	static int8_t x772 = INT8_MIN;
	int32_t t192 = -798675;

    t192 = ((x769|(x770==x771))==x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	int16_t x774 = -444;
	int64_t x775 = -1LL;
	static int32_t x776 = INT32_MIN;
	int32_t t193 = -236383569;

    t193 = ((x773|(x774==x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = 2U;
	int32_t x778 = INT32_MIN;
	int16_t x779 = INT16_MIN;
	volatile int8_t x780 = -1;
	int32_t t194 = -30;

    t194 = ((x777|(x778==x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 5U;
	uint32_t x782 = 12U;
	int64_t x784 = 28352933901682758LL;
	int32_t t195 = 399;

    t195 = ((x781|(x782==x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = 0;
	int32_t x788 = INT32_MIN;
	volatile int32_t t196 = -1;

    t196 = ((x785|(x786==x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t t197 = 8;

    t197 = ((x789|(x790==x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x793 = 4407U;
	uint64_t x794 = 102616837196076LLU;
	uint8_t x795 = UINT8_MAX;
	int8_t x796 = INT8_MIN;
	static volatile int32_t t198 = 9;

    t198 = ((x793|(x794==x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x799 = INT16_MIN;
	volatile int32_t t199 = -30;

    t199 = ((x797|(x798==x799))==x800);

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

