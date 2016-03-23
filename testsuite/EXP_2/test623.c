
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

static uint16_t x2 = 19446U;
int8_t x9 = INT8_MAX;
static uint16_t x19 = 102U;
uint16_t x27 = 559U;
int32_t t5 = 7;
int32_t x32 = 0;
uint8_t x35 = 29U;
uint64_t x41 = 1360160781248558LLU;
static int8_t x46 = -1;
int8_t x49 = INT8_MIN;
int64_t x51 = -1LL;
static volatile int8_t x52 = INT8_MIN;
volatile int32_t t13 = -19000;
uint64_t x70 = UINT64_MAX;
volatile int16_t x84 = INT16_MIN;
int16_t x85 = INT16_MIN;
int32_t t19 = 8470;
int64_t x90 = -1764925LL;
volatile int32_t t20 = -16;
int64_t x93 = 1525347111LL;
int32_t t22 = 75884994;
uint8_t x105 = 3U;
int32_t x106 = INT32_MAX;
static int16_t x107 = INT16_MIN;
static volatile int32_t t24 = -393;
static int32_t t25 = -11898636;
uint8_t x120 = 8U;
int16_t x126 = -1;
volatile int64_t x128 = INT64_MAX;
static int32_t x137 = -1;
uint8_t x140 = 11U;
int32_t t33 = -692;
int16_t x170 = INT16_MIN;
uint8_t x172 = 1U;
static uint16_t x174 = UINT16_MAX;
volatile int32_t x180 = INT32_MIN;
static int64_t x188 = 107831907038750LL;
int32_t t42 = -3211;
int16_t x201 = -1;
int8_t x204 = 1;
static volatile int32_t t46 = -10027277;
int8_t x205 = -52;
int16_t x207 = INT16_MIN;
volatile uint32_t x214 = 17547U;
int16_t x215 = 163;
int8_t x217 = -1;
uint64_t x225 = 19413LLU;
int64_t x238 = INT64_MIN;
int64_t x245 = INT64_MIN;
int32_t t56 = 100;
volatile int32_t t59 = -11747218;
int16_t x262 = INT16_MIN;
uint16_t x263 = UINT16_MAX;
int16_t x265 = -1;
volatile int32_t t61 = 2;
int8_t x273 = INT8_MIN;
int16_t x285 = -1;
uint64_t x287 = 8LLU;
int32_t t67 = -2837;
int64_t x296 = INT64_MIN;
volatile int32_t t68 = -148;
uint8_t x298 = 50U;
volatile int8_t x300 = -9;
static volatile int64_t x311 = INT64_MAX;
volatile int32_t x315 = -86;
static int8_t x321 = INT8_MAX;
static uint32_t x322 = 21539005U;
static int64_t x327 = INT64_MAX;
volatile int32_t t76 = -657286462;
uint8_t x342 = 6U;
uint16_t x349 = 12U;
int64_t x354 = 2267474969001994449LL;
static int16_t x355 = INT16_MIN;
volatile uint8_t x359 = 76U;
int64_t x361 = -1LL;
static uint16_t x368 = 1551U;
uint8_t x369 = 3U;
volatile uint64_t x375 = 5518LLU;
volatile int32_t t87 = 95;
static uint64_t x382 = 6130788568306535524LLU;
uint16_t x387 = UINT16_MAX;
static int16_t x398 = INT16_MIN;
int64_t x399 = 14310851529LL;
uint64_t x401 = UINT64_MAX;
static uint32_t x410 = 644136U;
volatile int32_t t94 = -42515353;
static int64_t x415 = INT64_MAX;
static uint64_t x416 = UINT64_MAX;
int64_t x442 = INT64_MAX;
volatile uint8_t x450 = 15U;
uint32_t x452 = 2775874U;
int32_t x459 = INT32_MIN;
int32_t t102 = -101312336;
int16_t x487 = -1;
int8_t x488 = 0;
volatile int32_t t107 = 6;
static int16_t x496 = -8455;
int32_t t109 = -1667;
int16_t x505 = -1;
volatile int32_t x516 = INT32_MIN;
volatile int32_t t114 = 108753;
int16_t x523 = -1;
int8_t x524 = 0;
int64_t x528 = -956LL;
static int32_t x532 = -7;
int16_t x538 = 1563;
static uint32_t x548 = UINT32_MAX;
static uint8_t x550 = UINT8_MAX;
int16_t x557 = 8187;
int32_t t126 = 142;
int32_t x577 = INT32_MIN;
int8_t x578 = -1;
int8_t x582 = 4;
static uint64_t x583 = UINT64_MAX;
static volatile int32_t t128 = -21;
int32_t x585 = INT32_MAX;
volatile int32_t t130 = 115525;
uint16_t x598 = UINT16_MAX;
int8_t x603 = INT8_MIN;
int16_t x604 = INT16_MIN;
static int16_t x616 = INT16_MIN;
int32_t t137 = 25192;
static int16_t x624 = INT16_MAX;
volatile int32_t t140 = -49;
int8_t x636 = -1;
static int8_t x640 = -1;
static int16_t x642 = -2470;
uint16_t x646 = 43U;
static int64_t x647 = -2541298LL;
int32_t t144 = -82526886;
int8_t x652 = -1;
volatile int8_t x669 = 1;
int64_t x678 = -1LL;
volatile uint64_t x679 = 238388565986LLU;
volatile int32_t t153 = 27;
int32_t t154 = -722;
uint64_t x703 = 18504528103LLU;
static int8_t x707 = INT8_MIN;
volatile int32_t t157 = -18797069;
static int32_t x714 = 209;
uint16_t x715 = 4065U;
static int64_t x723 = -1277879791LL;
int32_t t162 = -11073;
int8_t x750 = INT8_MIN;
uint64_t x751 = 706244889457LLU;
uint8_t x752 = 0U;
static volatile uint32_t x768 = 3733010U;
int32_t x772 = -1;
int16_t x779 = -1713;
int64_t x780 = -36556LL;
volatile int32_t t172 = -492;
int8_t x788 = INT8_MAX;
uint8_t x807 = 13U;
volatile int64_t x821 = INT64_MAX;
int32_t t182 = -6862;
uint64_t x825 = 0LLU;
uint8_t x834 = UINT8_MAX;
static uint64_t x837 = 253LLU;
int32_t t186 = -28626881;
int32_t x841 = 13843259;
static uint16_t x844 = 228U;
int16_t x848 = INT16_MIN;
int32_t t191 = 59490562;
uint32_t x862 = UINT32_MAX;
uint32_t x875 = 1611889312U;
int64_t x879 = INT64_MIN;
int32_t t196 = -17;
static volatile uint8_t x881 = 28U;
int8_t x882 = INT8_MAX;
uint32_t x884 = 877304U;
int8_t x887 = 9;
volatile int8_t x892 = INT8_MIN;


void f0(void) {
    	uint64_t x1 = 2016661755575023745LLU;
	static int64_t x3 = -581554877638LL;
	int32_t x4 = -266739866;
	int32_t t0 = 372;

    t0 = ((x1*(x2/x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 5;
	volatile uint16_t x6 = 239U;
	static int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	static volatile int32_t t1 = -1584591;

    t1 = ((x5*(x6/x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x10 = -19098966116036080LL;
	int8_t x11 = -11;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = -771238176;

    t2 = ((x9*(x10/x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	int16_t x14 = -4;
	int16_t x15 = 3347;
	volatile int16_t x16 = -14;
	volatile int32_t t3 = -47;

    t3 = ((x13*(x14/x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int64_t x18 = -1LL;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = 15;

    t4 = ((x17*(x18/x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	uint16_t x26 = 14456U;
	uint8_t x28 = 0U;

    t5 = ((x25*(x26/x27))!=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -1;
	int32_t x30 = -24521;
	uint32_t x31 = UINT32_MAX;
	volatile int32_t t6 = 53857095;

    t6 = ((x29*(x30/x31))!=x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	volatile int8_t x34 = 2;
	volatile int64_t x36 = -1536LL;
	volatile int32_t t7 = 258648;

    t7 = ((x33*(x34/x35))!=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x42 = 3203U;
	int64_t x43 = INT64_MIN;
	static int8_t x44 = -1;
	volatile int32_t t8 = -5558;

    t8 = ((x41*(x42/x43))!=x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x45 = INT16_MIN;
	int32_t x47 = 23815331;
	int32_t x48 = 106956709;
	volatile int32_t t9 = -61811036;

    t9 = ((x45*(x46/x47))!=x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x50 = -1;
	static int32_t t10 = -173;

    t10 = ((x49*(x50/x51))!=x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -1;
	volatile int16_t x54 = -1;
	int64_t x55 = -1LL;
	uint64_t x56 = UINT64_MAX;
	static volatile int32_t t11 = -266;

    t11 = ((x53*(x54/x55))!=x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MIN;
	volatile int16_t x59 = -8;
	int16_t x60 = -1914;
	int32_t t12 = 377;

    t12 = ((x57*(x58/x59))!=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x61 = 0U;
	int16_t x62 = -8910;
	int8_t x63 = INT8_MIN;
	volatile uint16_t x64 = UINT16_MAX;

    t13 = ((x61*(x62/x63))!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x65 = 3317980U;
	static volatile int16_t x66 = INT16_MAX;
	int32_t x67 = -12811171;
	int8_t x68 = -1;
	static volatile int32_t t14 = -26;

    t14 = ((x65*(x66/x67))!=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = 5U;
	uint32_t x71 = 55U;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t15 = 7000;

    t15 = ((x69*(x70/x71))!=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x73 = 18351830416LLU;
	int8_t x74 = -19;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = -3566;
	volatile int32_t t16 = -405661053;

    t16 = ((x73*(x74/x75))!=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x77 = -1;
	int8_t x78 = -1;
	static int8_t x79 = INT8_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t17 = -108;

    t17 = ((x77*(x78/x79))!=x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = -8;
	volatile uint32_t x82 = 59U;
	int16_t x83 = INT16_MIN;
	static volatile int32_t t18 = 127;

    t18 = ((x81*(x82/x83))!=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x86 = INT8_MIN;
	uint32_t x87 = UINT32_MAX;
	uint32_t x88 = 232U;

    t19 = ((x85*(x86/x87))!=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MIN;

    t20 = ((x89*(x90/x91))!=x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x94 = 12U;
	int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t21 = 284796;

    t21 = ((x93*(x94/x95))!=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 227253657671LLU;
	int8_t x98 = 36;
	volatile int16_t x99 = INT16_MIN;
	static int32_t x100 = 227637;

    t22 = ((x97*(x98/x99))!=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	uint32_t x103 = UINT32_MAX;
	volatile int64_t x104 = -1LL;
	volatile int32_t t23 = -48546;

    t23 = ((x101*(x102/x103))!=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x108 = 4U;

    t24 = ((x105*(x106/x107))!=x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x109 = INT8_MAX;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MAX;
	int64_t x112 = INT64_MIN;

    t25 = ((x109*(x110/x111))!=x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x113 = 2U;
	uint16_t x114 = 2869U;
	static int64_t x115 = -483LL;
	uint8_t x116 = 2U;
	volatile int32_t t26 = -4085648;

    t26 = ((x113*(x114/x115))!=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x117 = 4215462506LL;
	int32_t x118 = -1;
	int8_t x119 = INT8_MIN;
	volatile int32_t t27 = 54;

    t27 = ((x117*(x118/x119))!=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x121 = 187LL;
	int64_t x122 = INT64_MIN;
	volatile int64_t x123 = INT64_MIN;
	int32_t x124 = 37473;
	volatile int32_t t28 = -33286590;

    t28 = ((x121*(x122/x123))!=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = -307;
	uint16_t x127 = 2532U;
	volatile int32_t t29 = 2;

    t29 = ((x125*(x126/x127))!=x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = INT8_MIN;
	static int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MIN;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t30 = 355234205;

    t30 = ((x133*(x134/x135))!=x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x138 = -7;
	static int64_t x139 = INT64_MAX;
	int32_t t31 = -1167751;

    t31 = ((x137*(x138/x139))!=x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = INT8_MIN;
	volatile int64_t x142 = -4600394301197LL;
	int64_t x143 = INT64_MAX;
	uint64_t x144 = 25870LLU;
	int32_t t32 = -69539569;

    t32 = ((x141*(x142/x143))!=x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x145 = UINT32_MAX;
	uint16_t x146 = 31783U;
	uint16_t x147 = UINT16_MAX;
	int32_t x148 = INT32_MAX;

    t33 = ((x145*(x146/x147))!=x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x149 = INT16_MIN;
	volatile int8_t x150 = INT8_MIN;
	static uint16_t x151 = 17671U;
	uint64_t x152 = 0LLU;
	int32_t t34 = -26948611;

    t34 = ((x149*(x150/x151))!=x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = INT16_MIN;
	int8_t x154 = -1;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = -1LL;
	volatile int32_t t35 = -100848726;

    t35 = ((x153*(x154/x155))!=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	uint8_t x159 = 9U;
	int64_t x160 = INT64_MAX;
	volatile int32_t t36 = -45027201;

    t36 = ((x157*(x158/x159))!=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x165 = UINT8_MAX;
	static int16_t x166 = INT16_MIN;
	volatile int16_t x167 = INT16_MIN;
	volatile int32_t x168 = -110;
	int32_t t37 = -4852246;

    t37 = ((x165*(x166/x167))!=x168);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x169 = 7869U;
	volatile uint64_t x171 = 2493LLU;
	volatile int32_t t38 = 260056936;

    t38 = ((x169*(x170/x171))!=x172);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x173 = 49U;
	int64_t x175 = INT64_MIN;
	int64_t x176 = -1LL;
	int32_t t39 = -13042854;

    t39 = ((x173*(x174/x175))!=x176);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x177 = -1;
	uint16_t x178 = UINT16_MAX;
	static int32_t x179 = INT32_MIN;
	static int32_t t40 = 5203318;

    t40 = ((x177*(x178/x179))!=x180);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x181 = INT8_MIN;
	volatile uint32_t x182 = 4321U;
	int32_t x183 = -1;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t41 = 24951;

    t41 = ((x181*(x182/x183))!=x184);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = UINT64_MAX;

    t42 = ((x185*(x186/x187))!=x188);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = -16;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	int32_t x192 = 107;
	volatile int32_t t43 = -520440;

    t43 = ((x189*(x190/x191))!=x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = 417;
	volatile uint16_t x194 = 308U;
	volatile int32_t x195 = -1;
	static int16_t x196 = -1;
	volatile int32_t t44 = 88630;

    t44 = ((x193*(x194/x195))!=x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x197 = 236080U;
	static volatile int32_t x198 = -2;
	uint16_t x199 = 7U;
	int32_t x200 = 111438;
	static int32_t t45 = 23370;

    t45 = ((x197*(x198/x199))!=x200);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x202 = -4096;
	uint64_t x203 = UINT64_MAX;

    t46 = ((x201*(x202/x203))!=x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x206 = -1;
	uint32_t x208 = 101253630U;
	static volatile int32_t t47 = -3;

    t47 = ((x205*(x206/x207))!=x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x209 = UINT16_MAX;
	volatile uint8_t x210 = 4U;
	static int16_t x211 = INT16_MIN;
	uint8_t x212 = UINT8_MAX;
	int32_t t48 = 1407;

    t48 = ((x209*(x210/x211))!=x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x213 = 16304U;
	uint32_t x216 = 755371U;
	volatile int32_t t49 = 51671;

    t49 = ((x213*(x214/x215))!=x216);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x218 = 423768569177LLU;
	int64_t x219 = INT64_MAX;
	int64_t x220 = INT64_MAX;
	volatile int32_t t50 = 3;

    t50 = ((x217*(x218/x219))!=x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = 3;
	uint64_t x222 = 62488LLU;
	int8_t x223 = -5;
	int16_t x224 = 2;
	volatile int32_t t51 = 111534;

    t51 = ((x221*(x222/x223))!=x224);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x226 = -1;
	uint8_t x227 = 3U;
	static int64_t x228 = INT64_MIN;
	volatile int32_t t52 = -1073173339;

    t52 = ((x225*(x226/x227))!=x228);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = 8295477LL;
	volatile uint16_t x230 = 3U;
	uint64_t x231 = 8251348325LLU;
	static int16_t x232 = -1;
	volatile int32_t t53 = 460593;

    t53 = ((x229*(x230/x231))!=x232);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x233 = 17;
	static int64_t x234 = 139414LL;
	int8_t x235 = -1;
	int8_t x236 = 6;
	int32_t t54 = -107085;

    t54 = ((x233*(x234/x235))!=x236);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x237 = 73200392304292LLU;
	static uint64_t x239 = UINT64_MAX;
	int8_t x240 = -1;
	static int32_t t55 = 4287;

    t55 = ((x237*(x238/x239))!=x240);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MIN;
	int32_t x248 = -2;

    t56 = ((x245*(x246/x247))!=x248);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x249 = 5U;
	uint8_t x250 = UINT8_MAX;
	static uint16_t x251 = 812U;
	volatile int64_t x252 = -448283LL;
	int32_t t57 = 1;

    t57 = ((x249*(x250/x251))!=x252);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MAX;
	int64_t x255 = INT64_MAX;
	int16_t x256 = 91;
	int32_t t58 = -4;

    t58 = ((x253*(x254/x255))!=x256);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x257 = 1;
	volatile int64_t x258 = -1LL;
	int32_t x259 = INT32_MAX;
	int64_t x260 = -21316LL;

    t59 = ((x257*(x258/x259))!=x260);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = -53;
	int64_t x264 = 109740463889LL;
	int32_t t60 = -231174;

    t60 = ((x261*(x262/x263))!=x264);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x266 = -1;
	int64_t x267 = INT64_MIN;
	uint16_t x268 = 10160U;

    t61 = ((x265*(x266/x267))!=x268);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x269 = 7U;
	int8_t x270 = INT8_MIN;
	int64_t x271 = 3156485335765LL;
	uint8_t x272 = 5U;
	volatile int32_t t62 = -6041507;

    t62 = ((x269*(x270/x271))!=x272);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x274 = 16427714U;
	int32_t x275 = 880660245;
	static int32_t x276 = -109;
	int32_t t63 = 1549;

    t63 = ((x273*(x274/x275))!=x276);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x277 = UINT64_MAX;
	static int16_t x278 = INT16_MIN;
	uint16_t x279 = 183U;
	int16_t x280 = -1;
	static volatile int32_t t64 = 1;

    t64 = ((x277*(x278/x279))!=x280);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = -1;
	int8_t x282 = -1;
	uint32_t x283 = 2U;
	volatile int8_t x284 = INT8_MIN;
	int32_t t65 = 913283;

    t65 = ((x281*(x282/x283))!=x284);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x286 = 69777046786907LLU;
	uint64_t x288 = UINT64_MAX;
	static int32_t t66 = -153;

    t66 = ((x285*(x286/x287))!=x288);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x289 = -1;
	int16_t x290 = -1;
	volatile int16_t x291 = INT16_MIN;
	int32_t x292 = 106671507;

    t67 = ((x289*(x290/x291))!=x292);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x293 = 1145U;
	uint16_t x294 = 1U;
	int8_t x295 = INT8_MIN;

    t68 = ((x293*(x294/x295))!=x296);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x297 = 6U;
	int32_t x299 = 108;
	int32_t t69 = 593139510;

    t69 = ((x297*(x298/x299))!=x300);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x301 = -1LL;
	volatile int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = 24U;
	volatile int32_t t70 = 13712;

    t70 = ((x301*(x302/x303))!=x304);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x309 = -1LL;
	int16_t x310 = -1;
	uint32_t x312 = UINT32_MAX;
	int32_t t71 = 4317;

    t71 = ((x309*(x310/x311))!=x312);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x313 = UINT8_MAX;
	uint32_t x314 = 422228030U;
	uint16_t x316 = 425U;
	static volatile int32_t t72 = 515473074;

    t72 = ((x313*(x314/x315))!=x316);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x317 = -573154410LL;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = -1;
	static volatile uint32_t x320 = UINT32_MAX;
	volatile int32_t t73 = 337;

    t73 = ((x317*(x318/x319))!=x320);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x323 = -1809344LL;
	int64_t x324 = 10702430738LL;
	volatile int32_t t74 = -218940;

    t74 = ((x321*(x322/x323))!=x324);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x325 = UINT16_MAX;
	int16_t x326 = 10;
	static uint8_t x328 = UINT8_MAX;
	int32_t t75 = 409;

    t75 = ((x325*(x326/x327))!=x328);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x329 = INT16_MIN;
	volatile uint8_t x330 = 18U;
	int32_t x331 = 32108816;
	int8_t x332 = INT8_MAX;

    t76 = ((x329*(x330/x331))!=x332);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x333 = UINT16_MAX;
	volatile uint16_t x334 = 2009U;
	int32_t x335 = INT32_MIN;
	static volatile int64_t x336 = INT64_MIN;
	static volatile int32_t t77 = 15080;

    t77 = ((x333*(x334/x335))!=x336);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = -5875895;
	volatile int32_t x340 = 1274999;
	static volatile int32_t t78 = -125;

    t78 = ((x337*(x338/x339))!=x340);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x341 = INT8_MAX;
	uint64_t x343 = 687319LLU;
	volatile int16_t x344 = 719;
	int32_t t79 = -7396;

    t79 = ((x341*(x342/x343))!=x344);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x345 = INT8_MAX;
	static uint16_t x346 = 23U;
	uint64_t x347 = 130107429952561883LLU;
	int16_t x348 = -6;
	int32_t t80 = -42278;

    t80 = ((x345*(x346/x347))!=x348);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x350 = 12670;
	uint64_t x351 = UINT64_MAX;
	volatile uint32_t x352 = 959689U;
	volatile int32_t t81 = -485;

    t81 = ((x349*(x350/x351))!=x352);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x353 = 0U;
	int8_t x356 = -1;
	int32_t t82 = 28562941;

    t82 = ((x353*(x354/x355))!=x356);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x357 = 2U;
	static int64_t x358 = 174401297354LL;
	static uint64_t x360 = UINT64_MAX;
	int32_t t83 = -6551013;

    t83 = ((x357*(x358/x359))!=x360);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x362 = 115;
	int16_t x363 = 1020;
	int16_t x364 = INT16_MIN;
	int32_t t84 = 66523000;

    t84 = ((x361*(x362/x363))!=x364);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x365 = INT64_MAX;
	uint16_t x366 = UINT16_MAX;
	uint32_t x367 = 86443120U;
	volatile int32_t t85 = -405041502;

    t85 = ((x365*(x366/x367))!=x368);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x370 = 11148U;
	volatile uint64_t x371 = UINT64_MAX;
	int64_t x372 = -194807034632493244LL;
	volatile int32_t t86 = -354485704;

    t86 = ((x369*(x370/x371))!=x372);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x373 = 13U;
	static volatile int16_t x374 = INT16_MIN;
	volatile int32_t x376 = 656;

    t87 = ((x373*(x374/x375))!=x376);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x377 = 10382;
	static int32_t x378 = 3;
	static int64_t x379 = INT64_MAX;
	static uint16_t x380 = 23907U;
	volatile int32_t t88 = -1003466811;

    t88 = ((x377*(x378/x379))!=x380);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x381 = INT64_MIN;
	volatile int8_t x383 = -1;
	int64_t x384 = INT64_MIN;
	int32_t t89 = -825169;

    t89 = ((x381*(x382/x383))!=x384);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x385 = 18U;
	uint64_t x386 = UINT64_MAX;
	int8_t x388 = 45;
	int32_t t90 = -104556754;

    t90 = ((x385*(x386/x387))!=x388);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x389 = INT32_MAX;
	volatile int16_t x390 = -472;
	static volatile int64_t x391 = INT64_MIN;
	static int64_t x392 = INT64_MAX;
	volatile int32_t t91 = -124324;

    t91 = ((x389*(x390/x391))!=x392);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x397 = -1;
	uint32_t x400 = 14U;
	volatile int32_t t92 = 740398;

    t92 = ((x397*(x398/x399))!=x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x402 = INT32_MAX;
	static int16_t x403 = 469;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t93 = -925139743;

    t93 = ((x401*(x402/x403))!=x404);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x409 = 1788968405315LL;
	static int8_t x411 = INT8_MAX;
	static volatile int8_t x412 = 25;

    t94 = ((x409*(x410/x411))!=x412);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x413 = 0;
	int32_t x414 = INT32_MAX;
	volatile int32_t t95 = -810;

    t95 = ((x413*(x414/x415))!=x416);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x421 = 1592967252681934LL;
	static uint32_t x422 = UINT32_MAX;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = 6467U;
	int32_t t96 = 32;

    t96 = ((x421*(x422/x423))!=x424);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x425 = INT32_MIN;
	volatile uint32_t x426 = 1266466U;
	uint16_t x427 = 1386U;
	int64_t x428 = 3361985LL;
	static volatile int32_t t97 = 338933;

    t97 = ((x425*(x426/x427))!=x428);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x429 = INT64_MIN;
	uint64_t x430 = 1022662249408LLU;
	int16_t x431 = 2;
	int64_t x432 = -1LL;
	int32_t t98 = 21161013;

    t98 = ((x429*(x430/x431))!=x432);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = INT64_MAX;
	volatile uint64_t x443 = 61137941695LLU;
	int32_t x444 = 7374176;
	volatile int32_t t99 = 98208;

    t99 = ((x441*(x442/x443))!=x444);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x449 = 1823;
	static int64_t x451 = 1664955279LL;
	volatile int32_t t100 = -8787;

    t100 = ((x449*(x450/x451))!=x452);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x453 = -1;
	volatile uint8_t x454 = 0U;
	static uint8_t x455 = 88U;
	int32_t x456 = -1;
	volatile int32_t t101 = 6559;

    t101 = ((x453*(x454/x455))!=x456);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x457 = INT32_MAX;
	static int8_t x458 = -3;
	volatile int64_t x460 = -30452405LL;

    t102 = ((x457*(x458/x459))!=x460);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x461 = -1LL;
	uint32_t x462 = 26093U;
	int64_t x463 = -1LL;
	int64_t x464 = 7888867916231774LL;
	int32_t t103 = -823;

    t103 = ((x461*(x462/x463))!=x464);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x465 = INT32_MIN;
	int32_t x466 = -1;
	volatile int8_t x467 = INT8_MIN;
	int16_t x468 = -6;
	int32_t t104 = 0;

    t104 = ((x465*(x466/x467))!=x468);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x469 = 86729522332876LL;
	int8_t x470 = 17;
	int16_t x471 = INT16_MAX;
	int32_t x472 = INT32_MIN;
	volatile int32_t t105 = -62514;

    t105 = ((x469*(x470/x471))!=x472);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x477 = INT32_MIN;
	uint32_t x478 = 4306506U;
	int8_t x479 = -3;
	uint32_t x480 = UINT32_MAX;
	static volatile int32_t t106 = 2525;

    t106 = ((x477*(x478/x479))!=x480);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x485 = INT8_MAX;
	uint16_t x486 = UINT16_MAX;

    t107 = ((x485*(x486/x487))!=x488);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x489 = 0;
	volatile int16_t x490 = INT16_MIN;
	int64_t x491 = INT64_MIN;
	int16_t x492 = INT16_MAX;
	int32_t t108 = 1020044876;

    t108 = ((x489*(x490/x491))!=x492);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x493 = 69U;
	int16_t x494 = 11;
	int16_t x495 = INT16_MIN;

    t109 = ((x493*(x494/x495))!=x496);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x501 = 9023709155219640547LLU;
	int32_t x502 = INT32_MIN;
	uint8_t x503 = 41U;
	int64_t x504 = INT64_MIN;
	int32_t t110 = -386915633;

    t110 = ((x501*(x502/x503))!=x504);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x506 = 84U;
	static int8_t x507 = INT8_MIN;
	uint16_t x508 = UINT16_MAX;
	static int32_t t111 = -70371;

    t111 = ((x505*(x506/x507))!=x508);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x509 = 1006U;
	volatile int8_t x510 = -1;
	uint32_t x511 = 2305038U;
	volatile int16_t x512 = INT16_MAX;
	volatile int32_t t112 = -144786954;

    t112 = ((x509*(x510/x511))!=x512);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x513 = INT64_MIN;
	int32_t x514 = INT32_MIN;
	uint64_t x515 = UINT64_MAX;
	volatile int32_t t113 = 1;

    t113 = ((x513*(x514/x515))!=x516);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x517 = -1LL;
	static int8_t x518 = INT8_MIN;
	int8_t x519 = INT8_MIN;
	int8_t x520 = INT8_MAX;

    t114 = ((x517*(x518/x519))!=x520);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x521 = INT16_MAX;
	int16_t x522 = INT16_MIN;
	volatile int32_t t115 = 9081073;

    t115 = ((x521*(x522/x523))!=x524);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x525 = INT16_MIN;
	static int16_t x526 = INT16_MIN;
	int8_t x527 = -1;
	volatile int32_t t116 = -911;

    t116 = ((x525*(x526/x527))!=x528);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x529 = -1;
	volatile uint64_t x530 = 2LLU;
	uint16_t x531 = 183U;
	int32_t t117 = -972687551;

    t117 = ((x529*(x530/x531))!=x532);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x533 = UINT32_MAX;
	static int32_t x534 = INT32_MIN;
	volatile uint16_t x535 = 10U;
	int16_t x536 = INT16_MAX;
	volatile int32_t t118 = 3;

    t118 = ((x533*(x534/x535))!=x536);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x537 = INT8_MAX;
	int8_t x539 = 2;
	static int32_t x540 = INT32_MAX;
	volatile int32_t t119 = -47;

    t119 = ((x537*(x538/x539))!=x540);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x541 = -9LL;
	int8_t x542 = 2;
	static int8_t x543 = INT8_MAX;
	static volatile uint16_t x544 = 11013U;
	int32_t t120 = 238520346;

    t120 = ((x541*(x542/x543))!=x544);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x545 = UINT8_MAX;
	volatile int64_t x546 = -1LL;
	int16_t x547 = INT16_MIN;
	int32_t t121 = -553733713;

    t121 = ((x545*(x546/x547))!=x548);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x549 = INT16_MIN;
	uint16_t x551 = UINT16_MAX;
	static int16_t x552 = -1;
	int32_t t122 = 3;

    t122 = ((x549*(x550/x551))!=x552);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x558 = -1;
	int8_t x559 = 9;
	static int16_t x560 = 6362;
	static volatile int32_t t123 = -21;

    t123 = ((x557*(x558/x559))!=x560);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x561 = INT32_MIN;
	int8_t x562 = -1;
	uint32_t x563 = 52U;
	int32_t x564 = INT32_MIN;
	volatile int32_t t124 = -96;

    t124 = ((x561*(x562/x563))!=x564);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x569 = 10;
	int64_t x570 = -2038LL;
	int8_t x571 = -1;
	int16_t x572 = -15662;
	volatile int32_t t125 = -235952636;

    t125 = ((x569*(x570/x571))!=x572);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x573 = 11577278356LL;
	int32_t x574 = 4;
	int16_t x575 = 10330;
	static int64_t x576 = -1LL;

    t126 = ((x573*(x574/x575))!=x576);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x579 = -1;
	int8_t x580 = 1;
	int32_t t127 = 71876138;

    t127 = ((x577*(x578/x579))!=x580);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x581 = 12790LLU;
	int64_t x584 = -74LL;

    t128 = ((x581*(x582/x583))!=x584);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x586 = INT32_MIN;
	int32_t x587 = INT32_MIN;
	volatile uint32_t x588 = UINT32_MAX;
	volatile int32_t t129 = 42370;

    t129 = ((x585*(x586/x587))!=x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x589 = UINT16_MAX;
	uint8_t x590 = 28U;
	uint16_t x591 = 1073U;
	volatile int8_t x592 = INT8_MIN;

    t130 = ((x589*(x590/x591))!=x592);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x593 = INT8_MIN;
	int64_t x594 = -1LL;
	static uint32_t x595 = UINT32_MAX;
	uint16_t x596 = 2U;
	int32_t t131 = -1;

    t131 = ((x593*(x594/x595))!=x596);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x597 = 26521830219490LL;
	int8_t x599 = INT8_MIN;
	static uint64_t x600 = UINT64_MAX;
	volatile int32_t t132 = -12020;

    t132 = ((x597*(x598/x599))!=x600);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x601 = -1;
	int64_t x602 = -684303041002LL;
	int32_t t133 = 227706383;

    t133 = ((x601*(x602/x603))!=x604);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x605 = INT8_MIN;
	uint16_t x606 = UINT16_MAX;
	volatile int32_t x607 = -69350861;
	volatile int64_t x608 = -4LL;
	int32_t t134 = -10753;

    t134 = ((x605*(x606/x607))!=x608);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x609 = -4;
	int8_t x610 = 3;
	int8_t x611 = INT8_MIN;
	uint8_t x612 = 56U;
	int32_t t135 = -4168091;

    t135 = ((x609*(x610/x611))!=x612);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x613 = 513073U;
	volatile uint16_t x614 = UINT16_MAX;
	uint16_t x615 = 1U;
	int32_t t136 = 1;

    t136 = ((x613*(x614/x615))!=x616);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x617 = UINT16_MAX;
	uint32_t x618 = 4190012U;
	static int64_t x619 = -3275507174805874426LL;
	volatile int16_t x620 = 2;

    t137 = ((x617*(x618/x619))!=x620);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x622 = -1;
	int64_t x623 = INT64_MIN;
	volatile int32_t t138 = 1510;

    t138 = ((x621*(x622/x623))!=x624);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x625 = INT16_MIN;
	static int8_t x626 = INT8_MIN;
	int64_t x627 = INT64_MIN;
	int32_t x628 = INT32_MIN;
	volatile int32_t t139 = -62577;

    t139 = ((x625*(x626/x627))!=x628);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x629 = INT16_MIN;
	static uint8_t x630 = 22U;
	int8_t x631 = 1;
	int8_t x632 = 0;

    t140 = ((x629*(x630/x631))!=x632);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x633 = INT64_MIN;
	int16_t x634 = 791;
	uint16_t x635 = 23896U;
	int32_t t141 = 107;

    t141 = ((x633*(x634/x635))!=x636);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x637 = 0;
	int32_t x638 = INT32_MIN;
	uint16_t x639 = UINT16_MAX;
	volatile int32_t t142 = -132973489;

    t142 = ((x637*(x638/x639))!=x640);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x641 = -1;
	volatile uint16_t x643 = 1U;
	uint32_t x644 = 4U;
	static int32_t t143 = 1001133403;

    t143 = ((x641*(x642/x643))!=x644);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x645 = INT64_MIN;
	uint8_t x648 = 74U;

    t144 = ((x645*(x646/x647))!=x648);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x649 = 3LLU;
	int64_t x650 = INT64_MIN;
	uint8_t x651 = UINT8_MAX;
	volatile int32_t t145 = 509897;

    t145 = ((x649*(x650/x651))!=x652);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x653 = INT8_MAX;
	int64_t x654 = -1179728077761LL;
	volatile int16_t x655 = INT16_MIN;
	int8_t x656 = -1;
	int32_t t146 = 250248;

    t146 = ((x653*(x654/x655))!=x656);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x661 = INT32_MAX;
	int32_t x662 = 21430501;
	int64_t x663 = INT64_MIN;
	static volatile int8_t x664 = INT8_MAX;
	volatile int32_t t147 = -3247629;

    t147 = ((x661*(x662/x663))!=x664);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x670 = 11291;
	uint32_t x671 = 98654U;
	static int16_t x672 = INT16_MIN;
	int32_t t148 = -52279337;

    t148 = ((x669*(x670/x671))!=x672);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x673 = -1LL;
	uint16_t x674 = 938U;
	uint64_t x675 = 47738495LLU;
	volatile uint32_t x676 = 364716U;
	volatile int32_t t149 = -16067977;

    t149 = ((x673*(x674/x675))!=x676);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x677 = 1U;
	int32_t x680 = -190661;
	static volatile int32_t t150 = -7856;

    t150 = ((x677*(x678/x679))!=x680);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x681 = -6463;
	int32_t x682 = INT32_MAX;
	int32_t x683 = INT32_MIN;
	uint8_t x684 = 6U;
	int32_t t151 = 124;

    t151 = ((x681*(x682/x683))!=x684);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x689 = INT16_MAX;
	static uint16_t x690 = UINT16_MAX;
	volatile uint16_t x691 = 3U;
	volatile int64_t x692 = INT64_MIN;
	int32_t t152 = -7499692;

    t152 = ((x689*(x690/x691))!=x692);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x693 = 6U;
	uint8_t x694 = UINT8_MAX;
	uint8_t x695 = 1U;
	static volatile uint64_t x696 = UINT64_MAX;

    t153 = ((x693*(x694/x695))!=x696);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x697 = UINT64_MAX;
	int64_t x698 = INT64_MAX;
	int64_t x699 = -1LL;
	int32_t x700 = -1;

    t154 = ((x697*(x698/x699))!=x700);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x701 = INT64_MIN;
	volatile int8_t x702 = INT8_MIN;
	int64_t x704 = INT64_MAX;
	int32_t t155 = -2;

    t155 = ((x701*(x702/x703))!=x704);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x705 = INT32_MAX;
	uint64_t x706 = 5576217708LLU;
	volatile int64_t x708 = INT64_MIN;
	static volatile int32_t t156 = -269;

    t156 = ((x705*(x706/x707))!=x708);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x710 = 249979LLU;
	uint64_t x711 = 1341LLU;
	static volatile uint8_t x712 = 8U;

    t157 = ((x709*(x710/x711))!=x712);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x713 = UINT8_MAX;
	int64_t x716 = -1486LL;
	static volatile int32_t t158 = 6;

    t158 = ((x713*(x714/x715))!=x716);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x717 = INT64_MIN;
	int16_t x718 = -3;
	uint64_t x719 = UINT64_MAX;
	static int32_t x720 = -16;
	static int32_t t159 = -33006;

    t159 = ((x717*(x718/x719))!=x720);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x721 = -1;
	int8_t x722 = -1;
	volatile int8_t x724 = INT8_MIN;
	int32_t t160 = 8;

    t160 = ((x721*(x722/x723))!=x724);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x725 = 71860050U;
	volatile uint16_t x726 = 8U;
	int16_t x727 = INT16_MIN;
	volatile uint64_t x728 = UINT64_MAX;
	volatile int32_t t161 = -128053;

    t161 = ((x725*(x726/x727))!=x728);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x729 = 3721193476912815LLU;
	static int8_t x730 = 4;
	int32_t x731 = INT32_MIN;
	volatile int16_t x732 = INT16_MIN;

    t162 = ((x729*(x730/x731))!=x732);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	volatile int64_t x734 = INT64_MIN;
	uint8_t x735 = UINT8_MAX;
	int64_t x736 = INT64_MIN;
	int32_t t163 = 192417;

    t163 = ((x733*(x734/x735))!=x736);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x737 = -16254762;
	volatile uint32_t x738 = 17U;
	volatile int16_t x739 = 49;
	int16_t x740 = INT16_MIN;
	static volatile int32_t t164 = 2728872;

    t164 = ((x737*(x738/x739))!=x740);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x745 = 743LLU;
	volatile uint64_t x746 = UINT64_MAX;
	volatile int8_t x747 = INT8_MAX;
	uint32_t x748 = UINT32_MAX;
	volatile int32_t t165 = 27;

    t165 = ((x745*(x746/x747))!=x748);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x749 = 28;
	int32_t t166 = -1;

    t166 = ((x749*(x750/x751))!=x752);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x753 = -1;
	static int32_t x754 = INT32_MAX;
	uint16_t x755 = 9U;
	int8_t x756 = 11;
	int32_t t167 = 303329465;

    t167 = ((x753*(x754/x755))!=x756);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x757 = 1746;
	uint16_t x758 = 1U;
	int8_t x759 = INT8_MAX;
	uint8_t x760 = UINT8_MAX;
	volatile int32_t t168 = -18109576;

    t168 = ((x757*(x758/x759))!=x760);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x765 = -1;
	volatile int64_t x766 = 4448LL;
	int32_t x767 = INT32_MAX;
	static volatile int32_t t169 = 36851;

    t169 = ((x765*(x766/x767))!=x768);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x769 = -14;
	int8_t x770 = INT8_MIN;
	static int16_t x771 = INT16_MIN;
	volatile int32_t t170 = -164;

    t170 = ((x769*(x770/x771))!=x772);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x773 = INT64_MAX;
	int16_t x774 = INT16_MIN;
	volatile int64_t x775 = INT64_MIN;
	volatile int64_t x776 = INT64_MIN;
	volatile int32_t t171 = -1;

    t171 = ((x773*(x774/x775))!=x776);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x777 = UINT64_MAX;
	static uint32_t x778 = 2693552U;

    t172 = ((x777*(x778/x779))!=x780);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x781 = -1;
	uint16_t x782 = 1U;
	int16_t x783 = 13376;
	volatile int16_t x784 = 1;
	volatile int32_t t173 = 25;

    t173 = ((x781*(x782/x783))!=x784);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x785 = -40587873038448LL;
	uint32_t x786 = 23U;
	int8_t x787 = INT8_MIN;
	volatile int32_t t174 = -293354224;

    t174 = ((x785*(x786/x787))!=x788);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x789 = 3U;
	static uint8_t x790 = 46U;
	int8_t x791 = INT8_MIN;
	volatile int8_t x792 = 2;
	int32_t t175 = -6;

    t175 = ((x789*(x790/x791))!=x792);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x793 = 57LLU;
	static uint8_t x794 = 39U;
	static volatile int8_t x795 = -12;
	static int8_t x796 = INT8_MIN;
	int32_t t176 = 2306;

    t176 = ((x793*(x794/x795))!=x796);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x797 = -1;
	volatile int32_t x798 = INT32_MAX;
	volatile int64_t x799 = INT64_MIN;
	int16_t x800 = INT16_MAX;
	volatile int32_t t177 = 250532118;

    t177 = ((x797*(x798/x799))!=x800);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x801 = 500U;
	volatile uint16_t x802 = UINT16_MAX;
	uint16_t x803 = 344U;
	volatile uint16_t x804 = 5U;
	volatile int32_t t178 = 823410583;

    t178 = ((x801*(x802/x803))!=x804);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x805 = INT64_MAX;
	static volatile int64_t x806 = -1LL;
	int64_t x808 = INT64_MIN;
	static int32_t t179 = -3104234;

    t179 = ((x805*(x806/x807))!=x808);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x813 = INT8_MIN;
	int8_t x814 = 1;
	uint32_t x815 = UINT32_MAX;
	uint16_t x816 = UINT16_MAX;
	int32_t t180 = -82350612;

    t180 = ((x813*(x814/x815))!=x816);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x817 = UINT32_MAX;
	uint64_t x818 = 466389781356406929LLU;
	int64_t x819 = 224428595LL;
	uint16_t x820 = 3328U;
	volatile int32_t t181 = -7751353;

    t181 = ((x817*(x818/x819))!=x820);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x822 = 0U;
	static volatile uint32_t x823 = 51373669U;
	static uint8_t x824 = 0U;

    t182 = ((x821*(x822/x823))!=x824);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x826 = INT64_MIN;
	int16_t x827 = INT16_MIN;
	int8_t x828 = 1;
	int32_t t183 = -63173;

    t183 = ((x825*(x826/x827))!=x828);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x829 = 3826U;
	volatile uint64_t x830 = 8472592LLU;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MAX;
	volatile int32_t t184 = 229397911;

    t184 = ((x829*(x830/x831))!=x832);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x833 = -1;
	int32_t x835 = -258248;
	volatile uint16_t x836 = 134U;
	volatile int32_t t185 = -1329780;

    t185 = ((x833*(x834/x835))!=x836);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x838 = -1;
	int32_t x839 = -25753;
	volatile int64_t x840 = INT64_MIN;

    t186 = ((x837*(x838/x839))!=x840);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x842 = UINT16_MAX;
	int64_t x843 = 144832340LL;
	int32_t t187 = -42985;

    t187 = ((x841*(x842/x843))!=x844);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x845 = 1306U;
	static int16_t x846 = -63;
	static int64_t x847 = INT64_MIN;
	volatile int32_t t188 = -215068054;

    t188 = ((x845*(x846/x847))!=x848);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x849 = -1;
	int64_t x850 = -1LL;
	volatile int32_t x851 = 164257452;
	int8_t x852 = INT8_MAX;
	int32_t t189 = -52;

    t189 = ((x849*(x850/x851))!=x852);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x853 = -1;
	int32_t x854 = INT32_MAX;
	int32_t x855 = INT32_MIN;
	int8_t x856 = -1;
	static int32_t t190 = 152907;

    t190 = ((x853*(x854/x855))!=x856);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x857 = 119533235148384LL;
	uint16_t x858 = 29U;
	int16_t x859 = INT16_MAX;
	volatile int64_t x860 = INT64_MIN;

    t191 = ((x857*(x858/x859))!=x860);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x861 = -101773361857LL;
	volatile uint32_t x863 = UINT32_MAX;
	volatile uint8_t x864 = 14U;
	int32_t t192 = -9;

    t192 = ((x861*(x862/x863))!=x864);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x865 = INT64_MAX;
	int16_t x866 = INT16_MAX;
	int32_t x867 = -95023;
	static volatile uint64_t x868 = 497LLU;
	volatile int32_t t193 = 55;

    t193 = ((x865*(x866/x867))!=x868);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x869 = -1;
	int32_t x870 = -1;
	uint32_t x871 = UINT32_MAX;
	int32_t x872 = INT32_MIN;
	int32_t t194 = 41229;

    t194 = ((x869*(x870/x871))!=x872);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x873 = INT8_MAX;
	uint8_t x874 = 3U;
	uint8_t x876 = 24U;
	volatile int32_t t195 = -78884;

    t195 = ((x873*(x874/x875))!=x876);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x877 = -3;
	int16_t x878 = INT16_MIN;
	int16_t x880 = -1;

    t196 = ((x877*(x878/x879))!=x880);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x883 = INT8_MAX;
	volatile int32_t t197 = 4;

    t197 = ((x881*(x882/x883))!=x884);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x885 = -18659;
	volatile int8_t x886 = 7;
	uint64_t x888 = 1834782003337LLU;
	int32_t t198 = 0;

    t198 = ((x885*(x886/x887))!=x888);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint8_t x889 = 2U;
	int8_t x890 = -1;
	static int64_t x891 = -1LL;
	int32_t t199 = 1;

    t199 = ((x889*(x890/x891))!=x892);

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

