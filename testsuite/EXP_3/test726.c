
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

static int8_t x5 = -1;
volatile uint32_t t1 = 1953954629U;
static volatile int16_t x10 = -1;
static uint32_t x11 = 4366399U;
int64_t x15 = 23912577898425LL;
static int32_t x16 = INT32_MIN;
volatile int32_t x17 = INT32_MIN;
int64_t x19 = 0LL;
uint8_t x20 = UINT8_MAX;
volatile uint32_t t5 = 648156U;
uint8_t x26 = 13U;
int8_t x28 = 48;
uint32_t x36 = UINT32_MAX;
int32_t x39 = -369411;
int32_t x40 = INT32_MIN;
volatile int32_t t9 = -1;
int8_t x41 = INT8_MIN;
volatile int16_t x42 = -42;
volatile uint64_t x44 = 123LLU;
static uint32_t x51 = UINT32_MAX;
volatile uint32_t t11 = 1044482U;
uint16_t x57 = 18U;
int32_t x58 = INT32_MIN;
static volatile uint64_t t14 = 2071080661455211LLU;
int32_t t15 = -762798;
int64_t x70 = -150375410LL;
volatile int8_t x72 = -1;
int8_t x93 = INT8_MIN;
uint64_t x99 = UINT64_MAX;
uint64_t x100 = 45617888783655LLU;
volatile uint64_t x108 = 304404626LLU;
uint16_t x111 = UINT16_MAX;
volatile int64_t t26 = -2073341487966338LL;
uint32_t x114 = 84U;
int64_t x118 = -1LL;
int16_t x119 = INT16_MIN;
static int32_t t28 = -5436;
int64_t x122 = -13718817215462LL;
volatile int64_t x124 = INT64_MAX;
uint8_t x131 = UINT8_MAX;
static int8_t x132 = 10;
int64_t x133 = -47722216328LL;
static int8_t x144 = -1;
volatile int32_t t34 = -766546;
volatile int8_t x145 = INT8_MAX;
int8_t x149 = INT8_MAX;
int64_t x150 = INT64_MIN;
int16_t x154 = 13839;
int32_t x155 = INT32_MAX;
int64_t t37 = 30LL;
int16_t x166 = INT16_MAX;
int8_t x176 = INT8_MIN;
volatile int32_t t42 = -3;
volatile int64_t x179 = -1LL;
int32_t x180 = 248510;
int16_t x185 = INT16_MIN;
int64_t x191 = -673472545817870910LL;
int16_t x196 = -1;
int64_t x199 = INT64_MAX;
uint64_t t47 = 1286699788713380LLU;
int8_t x202 = -1;
int32_t x205 = 8412960;
int8_t x215 = INT8_MAX;
int64_t x228 = INT64_MIN;
int64_t x231 = INT64_MAX;
volatile int32_t t56 = -2874120;
int8_t x245 = INT8_MAX;
uint32_t x247 = 41U;
uint16_t x249 = UINT16_MAX;
int16_t x252 = INT16_MIN;
int64_t x254 = INT64_MIN;
volatile int8_t x265 = -1;
int8_t x268 = INT8_MIN;
uint64_t x272 = UINT64_MAX;
uint64_t t65 = 342LLU;
static int64_t t67 = 19143499312LL;
uint16_t x283 = 108U;
int32_t x299 = INT32_MAX;
static int32_t t72 = 105;
uint64_t x301 = UINT64_MAX;
int8_t x304 = -1;
volatile int16_t x306 = -1;
volatile int8_t x307 = 0;
volatile int64_t t75 = -19561340032638031LL;
volatile int32_t x323 = INT32_MIN;
int32_t t78 = 20243;
int16_t x326 = INT16_MAX;
volatile int8_t x328 = 1;
int64_t x332 = 863LL;
uint64_t x337 = 3806LLU;
int16_t x340 = INT16_MIN;
volatile int64_t x342 = INT64_MIN;
int32_t x346 = -1;
volatile int32_t t84 = -62862660;
int32_t x352 = -55404567;
uint64_t x355 = 34403451439244660LLU;
uint16_t x356 = 345U;
int16_t x359 = INT16_MIN;
volatile uint64_t x362 = 265674059215LLU;
uint64_t x374 = 18LLU;
static volatile int8_t x383 = INT8_MIN;
volatile int32_t x384 = -1016643647;
volatile int32_t t93 = -4213;
int32_t x388 = INT32_MIN;
static volatile uint16_t x389 = 11U;
int8_t x390 = -9;
int64_t t96 = -3232229777LL;
int16_t x400 = 55;
volatile uint64_t x405 = 19739584LLU;
int64_t x410 = 2069332LL;
int32_t t100 = -6309937;
int64_t t102 = 194994896LL;
uint8_t x444 = 41U;
int16_t x449 = -1;
static volatile uint64_t t110 = 2134864817LLU;
int32_t x453 = INT32_MIN;
int32_t x458 = -1;
int64_t x459 = INT64_MIN;
volatile int32_t x464 = -1;
volatile int32_t t114 = 79077836;
volatile uint8_t x474 = 0U;
volatile int64_t t116 = 0LL;
volatile int16_t x480 = 9097;
static int64_t x484 = 217LL;
int64_t t118 = 11720514LL;
volatile int32_t t119 = -1060;
int8_t x490 = INT8_MIN;
int64_t x498 = 81442701931827LL;
int64_t t122 = 913318429573LL;
static uint16_t x506 = 825U;
uint32_t x508 = 178510U;
uint64_t t124 = 123823534LLU;
uint16_t x512 = 2U;
int16_t x517 = -1;
uint32_t x518 = 3614U;
uint8_t x522 = UINT8_MAX;
uint16_t x525 = 1U;
volatile uint64_t x530 = UINT64_MAX;
int32_t x536 = INT32_MIN;
static volatile int64_t t131 = 965883707LL;
int16_t x537 = INT16_MIN;
uint64_t x541 = 32759032709LLU;
int64_t x542 = INT64_MIN;
int64_t x547 = INT64_MIN;
int64_t x549 = INT64_MAX;
static int8_t x554 = -1;
int16_t x557 = INT16_MIN;
int16_t x559 = 6;
uint64_t x561 = UINT64_MAX;
int32_t x569 = 723523779;
volatile int16_t x570 = INT16_MIN;
static int8_t x572 = -1;
volatile int16_t x574 = INT16_MIN;
volatile int32_t x575 = -65292353;
volatile int32_t x580 = 32741;
static int32_t x581 = 295;
static uint32_t t143 = 1129150991U;
uint64_t x585 = UINT64_MAX;
static int16_t x588 = 28;
int32_t t144 = 0;
static volatile int8_t x590 = -1;
uint8_t x593 = UINT8_MAX;
int32_t x596 = -1;
volatile int64_t x603 = -1LL;
int64_t x604 = INT64_MIN;
int32_t t149 = -410;
static int64_t x609 = INT64_MAX;
int64_t x613 = -956608LL;
static volatile int64_t t151 = 44LL;
static volatile uint64_t x619 = 18711615957LLU;
volatile int64_t x620 = INT64_MIN;
uint32_t t153 = 454U;
uint32_t x630 = 229U;
int16_t x638 = 111;
static volatile uint16_t x640 = 29253U;
int32_t x641 = INT32_MAX;
volatile int32_t t160 = 71123;
static volatile int16_t x657 = -885;
int16_t x671 = INT16_MAX;
volatile uint16_t x680 = 921U;
static int8_t x685 = INT8_MIN;
int64_t x693 = 2072305681564LL;
static int16_t x695 = INT16_MIN;
static int16_t x696 = INT16_MAX;
int32_t x704 = -1;
volatile int8_t x707 = -57;
static uint32_t x708 = UINT32_MAX;
static uint8_t x714 = 27U;
int32_t x723 = INT32_MAX;
volatile int16_t x730 = 12884;
volatile int16_t x731 = 15884;
uint16_t x738 = 107U;
int32_t x757 = -1;
int64_t x763 = -1LL;
uint8_t x768 = 5U;
volatile int64_t x785 = INT64_MAX;
int64_t x790 = -1LL;
static volatile int32_t t190 = -1063904;
uint64_t x795 = 131288618400LLU;
static int8_t x796 = INT8_MIN;
uint8_t x797 = 10U;
volatile int64_t t192 = -368821143129493LL;
static uint16_t x810 = 634U;
volatile int32_t t195 = -2002966;
int16_t x814 = -1;
static int32_t x820 = 237327863;
uint32_t x826 = 5032U;
int16_t x827 = -1;
int32_t x828 = -18853410;
static volatile int32_t t198 = -1;
int32_t x829 = INT32_MIN;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MAX;
	volatile int16_t x3 = -6;
	int64_t x4 = -163919438LL;
	volatile int64_t t0 = -12505LL;

    t0 = ((x1<=x2)&(x3/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -12507427570LL;
	static uint16_t x7 = 33U;
	uint32_t x8 = UINT32_MAX;

    t1 = ((x5<=x6)&(x7/x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	static uint32_t x12 = 214U;
	uint32_t t2 = 10675470U;

    t2 = ((x9<=x10)&(x11/x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x13 = 7U;
	uint8_t x14 = UINT8_MAX;
	volatile int64_t t3 = 512049LL;

    t3 = ((x13<=x14)&(x15/x16));

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = 7;
	static volatile int64_t t4 = -89474302993LL;

    t4 = ((x17<=x18)&(x19/x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -55;
	static uint32_t x22 = 59236608U;
	static int32_t x23 = -49107;
	uint32_t x24 = 51207986U;

    t5 = ((x21<=x22)&(x23/x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint8_t x27 = 124U;
	volatile int32_t t6 = 9676;

    t6 = ((x25<=x26)&(x27/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 10U;
	static int32_t x30 = INT32_MIN;
	uint8_t x31 = UINT8_MAX;
	static volatile uint16_t x32 = 12833U;
	volatile int32_t t7 = 2084988;

    t7 = ((x29<=x30)&(x31/x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x33 = -87LL;
	int64_t x34 = INT64_MIN;
	static uint64_t x35 = UINT64_MAX;
	volatile uint64_t t8 = 1512560672094458962LLU;

    t8 = ((x33<=x34)&(x35/x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = 17;
	uint32_t x38 = 1U;

    t9 = ((x37<=x38)&(x39/x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x43 = 5201374U;
	volatile uint64_t t10 = 727LLU;

    t10 = ((x41<=x42)&(x43/x44));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -67;
	volatile int64_t x50 = -29896LL;
	uint8_t x52 = UINT8_MAX;

    t11 = ((x49<=x50)&(x51/x52));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x53 = INT8_MIN;
	int8_t x54 = 1;
	uint8_t x55 = 82U;
	int32_t x56 = -1;
	static int32_t t12 = 91;

    t12 = ((x53<=x54)&(x55/x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t13 = 108762089620LLU;

    t13 = ((x57<=x58)&(x59/x60));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x61 = UINT64_MAX;
	uint16_t x62 = 7U;
	uint64_t x63 = 4499LLU;
	int16_t x64 = INT16_MAX;

    t14 = ((x61<=x62)&(x63/x64));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 6274U;
	static volatile uint64_t x66 = UINT64_MAX;
	static int16_t x67 = -64;
	int16_t x68 = -8916;

    t15 = ((x65<=x66)&(x67/x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x69 = UINT32_MAX;
	int64_t x71 = -1714871748770LL;
	volatile int64_t t16 = -123467265914779LL;

    t16 = ((x69<=x70)&(x71/x72));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 23U;
	int64_t x74 = INT64_MAX;
	static int8_t x75 = INT8_MAX;
	uint8_t x76 = 39U;
	volatile int32_t t17 = -5965256;

    t17 = ((x73<=x74)&(x75/x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = -1;
	volatile int64_t x78 = INT64_MIN;
	volatile uint16_t x79 = 3U;
	int64_t x80 = INT64_MIN;
	int64_t t18 = -1LL;

    t18 = ((x77<=x78)&(x79/x80));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = 0LL;
	volatile uint64_t x82 = UINT64_MAX;
	uint32_t x83 = 243U;
	int32_t x84 = -1;
	uint32_t t19 = 5U;

    t19 = ((x81<=x82)&(x83/x84));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 3U;
	int64_t x86 = 3753373527LL;
	int16_t x87 = -1;
	int64_t x88 = -1022761349LL;
	static int64_t t20 = 128539216074925428LL;

    t20 = ((x85<=x86)&(x87/x88));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -1LL;
	int16_t x90 = INT16_MIN;
	static int64_t x91 = 14199LL;
	uint16_t x92 = UINT16_MAX;
	static volatile int64_t t21 = 501760681093400259LL;

    t21 = ((x89<=x90)&(x91/x92));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x94 = -1;
	static int64_t x95 = 11782538615373LL;
	volatile int32_t x96 = -115468;
	int64_t t22 = 1LL;

    t22 = ((x93<=x94)&(x95/x96));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = 5715749746338LLU;
	static volatile int16_t x98 = -23;
	volatile uint64_t t23 = 6085205LLU;

    t23 = ((x97<=x98)&(x99/x100));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x101 = -1;
	static int8_t x102 = -1;
	int32_t x103 = -23;
	static uint32_t x104 = 33183U;
	volatile uint32_t t24 = 188269U;

    t24 = ((x101<=x102)&(x103/x104));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x105 = INT32_MIN;
	volatile int8_t x106 = INT8_MIN;
	static volatile uint16_t x107 = UINT16_MAX;
	volatile uint64_t t25 = 444802503173464LLU;

    t25 = ((x105<=x106)&(x107/x108));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MAX;
	uint64_t x110 = 20479128378927LLU;
	static int64_t x112 = -7218068LL;

    t26 = ((x109<=x110)&(x111/x112));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	static int8_t x115 = -1;
	uint16_t x116 = 213U;
	int32_t t27 = -5470;

    t27 = ((x113<=x114)&(x115/x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -7276662;
	static int16_t x120 = -1;

    t28 = ((x117<=x118)&(x119/x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	static int8_t x123 = 23;
	volatile int64_t t29 = 6291592825LL;

    t29 = ((x121<=x122)&(x123/x124));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = INT64_MIN;
	uint16_t x126 = UINT16_MAX;
	volatile uint32_t x127 = 284U;
	int8_t x128 = INT8_MIN;
	volatile uint32_t t30 = 5321U;

    t30 = ((x125<=x126)&(x127/x128));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x129 = 1527U;
	int8_t x130 = 22;
	volatile int32_t t31 = -690589246;

    t31 = ((x129<=x130)&(x131/x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x134 = INT8_MAX;
	int32_t x135 = INT32_MIN;
	uint16_t x136 = 187U;
	int32_t t32 = 470;

    t32 = ((x133<=x134)&(x135/x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x137 = -1LL;
	uint64_t x138 = 29767368935LLU;
	static int16_t x139 = -5;
	int64_t x140 = 42315816LL;
	static volatile int64_t t33 = -188225272557LL;

    t33 = ((x137<=x138)&(x139/x140));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x141 = INT8_MIN;
	int16_t x142 = INT16_MIN;
	volatile uint8_t x143 = 3U;

    t34 = ((x141<=x142)&(x143/x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 829295461;

    t35 = ((x145<=x146)&(x147/x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x151 = INT32_MAX;
	volatile int32_t x152 = -225591;
	int32_t t36 = -115980803;

    t36 = ((x149<=x150)&(x151/x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x153 = UINT16_MAX;
	int64_t x156 = INT64_MIN;

    t37 = ((x153<=x154)&(x155/x156));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	uint16_t x158 = 2659U;
	static int8_t x159 = -1;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t38 = -681435459;

    t38 = ((x157<=x158)&(x159/x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = INT32_MAX;
	volatile uint8_t x162 = 21U;
	static int64_t x163 = -1LL;
	static uint16_t x164 = 3U;
	int64_t t39 = 0LL;

    t39 = ((x161<=x162)&(x163/x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 1U;
	int64_t x167 = INT64_MIN;
	volatile uint32_t x168 = 11510U;
	volatile int64_t t40 = -2LL;

    t40 = ((x165<=x166)&(x167/x168));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = 18;
	int8_t x170 = 0;
	int8_t x171 = INT8_MAX;
	uint8_t x172 = 9U;
	int32_t t41 = 32464;

    t41 = ((x169<=x170)&(x171/x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x173 = INT64_MAX;
	int8_t x174 = -51;
	int32_t x175 = INT32_MIN;

    t42 = ((x173<=x174)&(x175/x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = INT32_MIN;
	static int8_t x178 = -5;
	volatile int64_t t43 = 7414188469827LL;

    t43 = ((x177<=x178)&(x179/x180));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x186 = 1760890902LLU;
	int64_t x187 = -7LL;
	int32_t x188 = INT32_MIN;
	int64_t t44 = -56309137276785000LL;

    t44 = ((x185<=x186)&(x187/x188));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x189 = INT16_MIN;
	uint8_t x190 = 16U;
	int8_t x192 = -1;
	volatile int64_t t45 = -111433075368LL;

    t45 = ((x189<=x190)&(x191/x192));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x193 = 1U;
	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = 21078784U;
	static uint32_t t46 = 795895287U;

    t46 = ((x193<=x194)&(x195/x196));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x197 = INT8_MIN;
	static uint8_t x198 = UINT8_MAX;
	static volatile uint64_t x200 = 2372884712042427403LLU;

    t47 = ((x197<=x198)&(x199/x200));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = -45165180530LL;
	static int8_t x203 = INT8_MAX;
	static int16_t x204 = INT16_MAX;
	int32_t t48 = 89284;

    t48 = ((x201<=x202)&(x203/x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x206 = INT8_MIN;
	static volatile uint64_t x207 = 11LLU;
	uint8_t x208 = 1U;
	volatile uint64_t t49 = 0LLU;

    t49 = ((x205<=x206)&(x207/x208));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MIN;
	int64_t x211 = -34688941249423LL;
	int16_t x212 = 321;
	volatile int64_t t50 = 522LL;

    t50 = ((x209<=x210)&(x211/x212));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x213 = 255U;
	static int8_t x214 = -1;
	volatile uint8_t x216 = 12U;
	volatile int32_t t51 = 1027558319;

    t51 = ((x213<=x214)&(x215/x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x217 = 12U;
	volatile uint64_t x218 = UINT64_MAX;
	int8_t x219 = -1;
	uint32_t x220 = 1608U;
	uint32_t t52 = 233085U;

    t52 = ((x217<=x218)&(x219/x220));

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = 689623U;
	static int32_t x222 = INT32_MAX;
	int8_t x223 = -6;
	int64_t x224 = 112314837071993LL;
	volatile int64_t t53 = -2LL;

    t53 = ((x221<=x222)&(x223/x224));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MIN;
	static int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	int64_t t54 = -1680LL;

    t54 = ((x225<=x226)&(x227/x228));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = INT64_MIN;
	int32_t x230 = 66079;
	uint32_t x232 = UINT32_MAX;
	volatile int64_t t55 = 200846040LL;

    t55 = ((x229<=x230)&(x231/x232));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;

    t56 = ((x233<=x234)&(x235/x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x237 = -1LL;
	volatile int32_t x238 = INT32_MAX;
	static uint64_t x239 = 4310962105717947LLU;
	int8_t x240 = INT8_MIN;
	volatile uint64_t t57 = 3LLU;

    t57 = ((x237<=x238)&(x239/x240));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x241 = UINT64_MAX;
	uint32_t x242 = 30386U;
	uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MIN;
	static uint32_t t58 = 28U;

    t58 = ((x241<=x242)&(x243/x244));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x246 = 1U;
	volatile int16_t x248 = INT16_MIN;
	volatile uint32_t t59 = 961030793U;

    t59 = ((x245<=x246)&(x247/x248));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x250 = -1LL;
	int8_t x251 = INT8_MIN;
	volatile int32_t t60 = 4303697;

    t60 = ((x249<=x250)&(x251/x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = 51065273200073LL;
	int32_t x255 = -974;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t61 = 159040LLU;

    t61 = ((x253<=x254)&(x255/x256));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x257 = UINT16_MAX;
	static int16_t x258 = -1;
	int8_t x259 = 5;
	static uint64_t x260 = 1364LLU;
	static uint64_t t62 = 439679762810684LLU;

    t62 = ((x257<=x258)&(x259/x260));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = 1;
	int32_t x262 = -1;
	uint8_t x263 = 2U;
	uint64_t x264 = 33322093964832LLU;
	static uint64_t t63 = 6902LLU;

    t63 = ((x261<=x262)&(x263/x264));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x266 = -1;
	static volatile int16_t x267 = INT16_MIN;
	int32_t t64 = 1504923;

    t64 = ((x265<=x266)&(x267/x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = 25;
	static int8_t x270 = -1;
	int8_t x271 = INT8_MAX;

    t65 = ((x269<=x270)&(x271/x272));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x273 = UINT64_MAX;
	static int8_t x274 = -7;
	volatile int16_t x275 = INT16_MIN;
	static int32_t x276 = INT32_MIN;
	int32_t t66 = -11139699;

    t66 = ((x273<=x274)&(x275/x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x277 = UINT8_MAX;
	uint8_t x278 = 65U;
	int64_t x279 = INT64_MAX;
	volatile int64_t x280 = -1591405920437335LL;

    t67 = ((x277<=x278)&(x279/x280));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x281 = 1005133706U;
	int32_t x282 = INT32_MIN;
	volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t68 = -350;

    t68 = ((x281<=x282)&(x283/x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = INT32_MAX;
	int32_t x286 = INT32_MAX;
	int16_t x287 = -1;
	uint8_t x288 = UINT8_MAX;
	int32_t t69 = 2224424;

    t69 = ((x285<=x286)&(x287/x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x289 = 2LLU;
	volatile int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	static int16_t x292 = INT16_MIN;
	int64_t t70 = 1073173065LL;

    t70 = ((x289<=x290)&(x291/x292));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x293 = 2019992936LLU;
	static uint32_t x294 = 1182687417U;
	int64_t x295 = INT64_MIN;
	static uint32_t x296 = 1811U;
	volatile int64_t t71 = 3978899331LL;

    t71 = ((x293<=x294)&(x295/x296));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x297 = -1;
	static int8_t x298 = INT8_MAX;
	volatile int16_t x300 = INT16_MIN;

    t72 = ((x297<=x298)&(x299/x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x302 = 7;
	int16_t x303 = INT16_MIN;
	static int32_t t73 = -2042511;

    t73 = ((x301<=x302)&(x303/x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x305 = UINT32_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t74 = -571;

    t74 = ((x305<=x306)&(x307/x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x309 = 3U;
	int8_t x310 = INT8_MIN;
	static int64_t x311 = INT64_MAX;
	int32_t x312 = INT32_MAX;

    t75 = ((x309<=x310)&(x311/x312));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = INT8_MAX;
	static int16_t x314 = INT16_MAX;
	uint32_t x315 = 3511U;
	volatile int16_t x316 = INT16_MAX;
	volatile uint32_t t76 = 2870525U;

    t76 = ((x313<=x314)&(x315/x316));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	int32_t x319 = -1;
	int64_t x320 = -57802LL;
	volatile int64_t t77 = -481259700548783LL;

    t77 = ((x317<=x318)&(x319/x320));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 0U;
	uint16_t x322 = 3U;
	int16_t x324 = INT16_MAX;

    t78 = ((x321<=x322)&(x323/x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = -1;
	volatile int32_t x327 = INT32_MIN;
	volatile int32_t t79 = -948;

    t79 = ((x325<=x326)&(x327/x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x329 = 108543U;
	volatile int16_t x330 = INT16_MIN;
	int32_t x331 = -16454;
	static int64_t t80 = -412812049LL;

    t80 = ((x329<=x330)&(x331/x332));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	uint16_t x336 = 2331U;
	volatile int32_t t81 = -3770;

    t81 = ((x333<=x334)&(x335/x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x338 = 233476U;
	static int8_t x339 = INT8_MAX;
	int32_t t82 = -115;

    t82 = ((x337<=x338)&(x339/x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x341 = UINT32_MAX;
	int32_t x343 = INT32_MIN;
	int16_t x344 = -3050;
	int32_t t83 = 29588260;

    t83 = ((x341<=x342)&(x343/x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x345 = UINT16_MAX;
	int16_t x347 = 589;
	int8_t x348 = 42;

    t84 = ((x345<=x346)&(x347/x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;
	static int64_t x351 = 277LL;
	int64_t t85 = 151656377918337LL;

    t85 = ((x349<=x350)&(x351/x352));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x353 = -1;
	uint32_t x354 = UINT32_MAX;
	static volatile uint64_t t86 = 23452324381029LLU;

    t86 = ((x353<=x354)&(x355/x356));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x357 = INT64_MAX;
	uint16_t x358 = 844U;
	static int16_t x360 = INT16_MIN;
	int32_t t87 = -2400498;

    t87 = ((x357<=x358)&(x359/x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = INT16_MAX;
	uint16_t x363 = 25862U;
	int32_t x364 = INT32_MAX;
	volatile int32_t t88 = -15;

    t88 = ((x361<=x362)&(x363/x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x365 = UINT64_MAX;
	static volatile int32_t x366 = -4867;
	volatile int32_t x367 = -46623;
	static int16_t x368 = INT16_MIN;
	int32_t t89 = 3;

    t89 = ((x365<=x366)&(x367/x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x369 = INT8_MAX;
	int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MIN;
	static int64_t x372 = INT64_MAX;
	int64_t t90 = 4305279929806704LL;

    t90 = ((x369<=x370)&(x371/x372));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x373 = INT8_MIN;
	uint8_t x375 = 2U;
	static int64_t x376 = 39198853588LL;
	int64_t t91 = 22581144739189LL;

    t91 = ((x373<=x374)&(x375/x376));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x377 = 42LLU;
	static int16_t x378 = -7;
	uint64_t x379 = UINT64_MAX;
	static volatile int32_t x380 = 27435206;
	uint64_t t92 = 2LLU;

    t92 = ((x377<=x378)&(x379/x380));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x381 = INT16_MIN;
	volatile uint8_t x382 = UINT8_MAX;

    t93 = ((x381<=x382)&(x383/x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x385 = -1LL;
	static int16_t x386 = 25;
	int64_t x387 = -1LL;
	volatile int64_t t94 = 1010781856139LL;

    t94 = ((x385<=x386)&(x387/x388));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x391 = INT32_MIN;
	uint32_t x392 = UINT32_MAX;
	static volatile uint32_t t95 = 20U;

    t95 = ((x389<=x390)&(x391/x392));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x393 = 2U;
	volatile int8_t x394 = INT8_MAX;
	volatile int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MAX;

    t96 = ((x393<=x394)&(x395/x396));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x397 = 2U;
	volatile int64_t x398 = -12886672924097LL;
	uint32_t x399 = 282U;
	static volatile uint32_t t97 = 67897089U;

    t97 = ((x397<=x398)&(x399/x400));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = INT32_MIN;
	int8_t x402 = -26;
	int64_t x403 = INT64_MIN;
	uint8_t x404 = 14U;
	volatile int64_t t98 = 119752656LL;

    t98 = ((x401<=x402)&(x403/x404));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x406 = 194U;
	int8_t x407 = 0;
	volatile int64_t x408 = -1LL;
	volatile int64_t t99 = 137304253469LL;

    t99 = ((x405<=x406)&(x407/x408));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x409 = INT16_MIN;
	volatile int16_t x411 = -4;
	static int32_t x412 = 6539;

    t100 = ((x409<=x410)&(x411/x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x413 = 155U;
	uint32_t x414 = 62565U;
	static int32_t x415 = INT32_MIN;
	int64_t x416 = INT64_MIN;
	int64_t t101 = 21LL;

    t101 = ((x413<=x414)&(x415/x416));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x417 = UINT32_MAX;
	int32_t x418 = -57067;
	uint8_t x419 = 1U;
	int64_t x420 = -1LL;

    t102 = ((x417<=x418)&(x419/x420));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = INT64_MAX;
	int8_t x422 = 12;
	uint16_t x423 = 70U;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t103 = 226;

    t103 = ((x421<=x422)&(x423/x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MAX;
	int16_t x427 = INT16_MIN;
	static uint64_t x428 = UINT64_MAX;
	uint64_t t104 = 2679524024LLU;

    t104 = ((x425<=x426)&(x427/x428));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x429 = INT16_MIN;
	int64_t x430 = 137710130224745522LL;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = INT16_MIN;
	volatile uint32_t t105 = 352U;

    t105 = ((x429<=x430)&(x431/x432));

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x433 = 29955LLU;
	int64_t x434 = -85004LL;
	uint16_t x435 = 989U;
	uint8_t x436 = 7U;
	volatile int32_t t106 = 64225;

    t106 = ((x433<=x434)&(x435/x436));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = 65U;
	static uint8_t x438 = 15U;
	int64_t x439 = -6LL;
	uint16_t x440 = 4808U;
	volatile int64_t t107 = -10295LL;

    t107 = ((x437<=x438)&(x439/x440));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = INT16_MIN;
	static uint64_t x442 = 3LLU;
	int32_t x443 = 108816;
	int32_t t108 = -56288;

    t108 = ((x441<=x442)&(x443/x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile int64_t x446 = 141089205373368341LL;
	uint32_t x447 = 1845658U;
	static volatile int8_t x448 = INT8_MIN;
	volatile uint32_t t109 = 1893U;

    t109 = ((x445<=x446)&(x447/x448));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x450 = -1LL;
	uint64_t x451 = 721447988262LLU;
	static uint16_t x452 = 10U;

    t110 = ((x449<=x450)&(x451/x452));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x454 = INT64_MAX;
	uint8_t x455 = UINT8_MAX;
	static volatile uint32_t x456 = UINT32_MAX;
	volatile uint32_t t111 = 1008332083U;

    t111 = ((x453<=x454)&(x455/x456));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x457 = 14U;
	int32_t x460 = -10;
	int64_t t112 = -29LL;

    t112 = ((x457<=x458)&(x459/x460));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = INT64_MAX;
	volatile uint32_t x462 = 179U;
	int16_t x463 = INT16_MIN;
	int32_t t113 = 3206380;

    t113 = ((x461<=x462)&(x463/x464));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x465 = UINT64_MAX;
	static volatile int8_t x466 = 1;
	static uint8_t x467 = UINT8_MAX;
	uint8_t x468 = 6U;

    t114 = ((x465<=x466)&(x467/x468));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x469 = INT16_MAX;
	int32_t x470 = INT32_MIN;
	uint16_t x471 = 996U;
	int8_t x472 = INT8_MIN;
	int32_t t115 = 1149046;

    t115 = ((x469<=x470)&(x471/x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = INT64_MIN;
	uint16_t x475 = 37U;
	int64_t x476 = -1LL;

    t116 = ((x473<=x474)&(x475/x476));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x477 = INT16_MAX;
	static int32_t x478 = -15935249;
	uint32_t x479 = UINT32_MAX;
	static uint32_t t117 = 2893U;

    t117 = ((x477<=x478)&(x479/x480));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x481 = 136U;
	volatile int8_t x482 = -23;
	int64_t x483 = -3457928265577499LL;

    t118 = ((x481<=x482)&(x483/x484));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x485 = 6044U;
	int32_t x486 = 5;
	uint8_t x487 = 0U;
	volatile uint8_t x488 = 49U;

    t119 = ((x485<=x486)&(x487/x488));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = 0;
	volatile int8_t x491 = INT8_MIN;
	int8_t x492 = -1;
	int32_t t120 = -1;

    t120 = ((x489<=x490)&(x491/x492));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x493 = 6LLU;
	uint8_t x494 = 2U;
	int8_t x495 = -5;
	static volatile int16_t x496 = -1;
	int32_t t121 = -1;

    t121 = ((x493<=x494)&(x495/x496));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x497 = INT8_MIN;
	static volatile int64_t x499 = -1LL;
	int8_t x500 = -1;

    t122 = ((x497<=x498)&(x499/x500));

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x501 = INT64_MAX;
	static uint32_t x502 = UINT32_MAX;
	int32_t x503 = INT32_MIN;
	uint16_t x504 = UINT16_MAX;
	static int32_t t123 = -3;

    t123 = ((x501<=x502)&(x503/x504));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x505 = UINT64_MAX;
	volatile uint64_t x507 = 11LLU;

    t124 = ((x505<=x506)&(x507/x508));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x509 = UINT16_MAX;
	int64_t x510 = -77319037210575LL;
	static int64_t x511 = INT64_MIN;
	static volatile int64_t t125 = -38523098357LL;

    t125 = ((x509<=x510)&(x511/x512));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x513 = 3U;
	static int16_t x514 = -344;
	int32_t x515 = INT32_MAX;
	volatile uint32_t x516 = 1362991U;
	static uint32_t t126 = 173157U;

    t126 = ((x513<=x514)&(x515/x516));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x519 = 7894U;
	uint32_t x520 = 310977655U;
	uint32_t t127 = 19U;

    t127 = ((x517<=x518)&(x519/x520));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x521 = INT32_MIN;
	uint16_t x523 = UINT16_MAX;
	int16_t x524 = 72;
	volatile int32_t t128 = -18112741;

    t128 = ((x521<=x522)&(x523/x524));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x526 = INT32_MAX;
	int64_t x527 = -3985177578LL;
	int64_t x528 = INT64_MIN;
	static int64_t t129 = -170090273965LL;

    t129 = ((x525<=x526)&(x527/x528));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x529 = 285U;
	uint8_t x531 = 0U;
	int8_t x532 = -1;
	volatile int32_t t130 = -1;

    t130 = ((x529<=x530)&(x531/x532));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x533 = 507;
	static int64_t x534 = INT64_MIN;
	static int64_t x535 = 15863643533916LL;

    t131 = ((x533<=x534)&(x535/x536));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x538 = 65588916610LL;
	int16_t x539 = INT16_MIN;
	int64_t x540 = -1LL;
	int64_t t132 = -62973144LL;

    t132 = ((x537<=x538)&(x539/x540));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x543 = INT16_MIN;
	int32_t x544 = -1;
	volatile int32_t t133 = -103180;

    t133 = ((x541<=x542)&(x543/x544));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x545 = INT64_MAX;
	int8_t x546 = INT8_MIN;
	int32_t x548 = INT32_MIN;
	static int64_t t134 = 2971673LL;

    t134 = ((x545<=x546)&(x547/x548));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x550 = 3U;
	static int8_t x551 = 1;
	int32_t x552 = INT32_MAX;
	int32_t t135 = 2009;

    t135 = ((x549<=x550)&(x551/x552));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x553 = UINT32_MAX;
	uint64_t x555 = 406168LLU;
	static volatile int64_t x556 = INT64_MAX;
	uint64_t t136 = 440218358LLU;

    t136 = ((x553<=x554)&(x555/x556));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x558 = 6;
	int32_t x560 = -333642;
	int32_t t137 = 48796724;

    t137 = ((x557<=x558)&(x559/x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x562 = 14330227U;
	volatile int16_t x563 = -26;
	int16_t x564 = 1396;
	volatile int32_t t138 = -2;

    t138 = ((x561<=x562)&(x563/x564));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x565 = -1;
	int32_t x566 = INT32_MIN;
	int32_t x567 = -1661;
	static int64_t x568 = INT64_MAX;
	volatile int64_t t139 = -33889665446LL;

    t139 = ((x565<=x566)&(x567/x568));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x571 = UINT8_MAX;
	volatile int32_t t140 = 47957;

    t140 = ((x569<=x570)&(x571/x572));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x573 = UINT32_MAX;
	static int32_t x576 = -865;
	volatile int32_t t141 = -26689;

    t141 = ((x573<=x574)&(x575/x576));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x577 = INT32_MIN;
	int32_t x578 = INT32_MIN;
	uint16_t x579 = 153U;
	static int32_t t142 = -13552041;

    t142 = ((x577<=x578)&(x579/x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x582 = INT64_MIN;
	static volatile uint32_t x583 = UINT32_MAX;
	static int16_t x584 = -5542;

    t143 = ((x581<=x582)&(x583/x584));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x586 = INT64_MAX;
	int32_t x587 = INT32_MAX;

    t144 = ((x585<=x586)&(x587/x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x589 = 360LL;
	uint16_t x591 = UINT16_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t145 = -5965;

    t145 = ((x589<=x590)&(x591/x592));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x594 = 1;
	static int8_t x595 = -3;
	static volatile int32_t t146 = 79;

    t146 = ((x593<=x594)&(x595/x596));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x597 = 1;
	int16_t x598 = 0;
	uint8_t x599 = 6U;
	uint16_t x600 = 2804U;
	static int32_t t147 = -3393;

    t147 = ((x597<=x598)&(x599/x600));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x601 = INT32_MIN;
	uint16_t x602 = UINT16_MAX;
	volatile int64_t t148 = -1627010386815482466LL;

    t148 = ((x601<=x602)&(x603/x604));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x605 = 477990;
	int64_t x606 = 12LL;
	int8_t x607 = INT8_MIN;
	static volatile uint8_t x608 = UINT8_MAX;

    t149 = ((x605<=x606)&(x607/x608));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x610 = INT8_MIN;
	int64_t x611 = -821122704766560LL;
	uint32_t x612 = 28606076U;
	volatile int64_t t150 = 54010866702808836LL;

    t150 = ((x609<=x610)&(x611/x612));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x614 = INT32_MIN;
	int8_t x615 = INT8_MIN;
	int64_t x616 = INT64_MAX;

    t151 = ((x613<=x614)&(x615/x616));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x617 = INT32_MAX;
	uint64_t x618 = 965824952923LLU;
	volatile uint64_t t152 = 908718082768464937LLU;

    t152 = ((x617<=x618)&(x619/x620));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x621 = -1;
	int16_t x622 = INT16_MAX;
	uint32_t x623 = UINT32_MAX;
	static int16_t x624 = -1;

    t153 = ((x621<=x622)&(x623/x624));

    if (t153 != 1U) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x625 = -1;
	static uint64_t x626 = 70243939169470LLU;
	static int64_t x627 = INT64_MAX;
	static int16_t x628 = -58;
	int64_t t154 = 24857LL;

    t154 = ((x625<=x626)&(x627/x628));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x629 = 1;
	static uint64_t x631 = 16133382LLU;
	int16_t x632 = INT16_MIN;
	static uint64_t t155 = 210680LLU;

    t155 = ((x629<=x630)&(x631/x632));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x633 = INT16_MAX;
	int64_t x634 = 726932LL;
	static uint16_t x635 = 253U;
	volatile uint16_t x636 = UINT16_MAX;
	volatile int32_t t156 = -102926789;

    t156 = ((x633<=x634)&(x635/x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x637 = 39U;
	static int16_t x639 = INT16_MIN;
	int32_t t157 = -1;

    t157 = ((x637<=x638)&(x639/x640));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x642 = -1;
	uint64_t x643 = 13950LLU;
	int64_t x644 = INT64_MIN;
	static uint64_t t158 = 24LLU;

    t158 = ((x641<=x642)&(x643/x644));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x645 = INT8_MIN;
	int64_t x646 = -1LL;
	static int16_t x647 = INT16_MIN;
	uint32_t x648 = UINT32_MAX;
	uint32_t t159 = 911901841U;

    t159 = ((x645<=x646)&(x647/x648));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x649 = INT16_MIN;
	uint16_t x650 = 0U;
	static volatile int32_t x651 = INT32_MIN;
	int16_t x652 = 102;

    t160 = ((x649<=x650)&(x651/x652));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x653 = INT64_MIN;
	int16_t x654 = -1;
	static uint64_t x655 = 5568844619LLU;
	int32_t x656 = INT32_MAX;
	volatile uint64_t t161 = 196523076832099LLU;

    t161 = ((x653<=x654)&(x655/x656));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x658 = INT16_MIN;
	int16_t x659 = -1;
	volatile int64_t x660 = -40LL;
	volatile int64_t t162 = -30LL;

    t162 = ((x657<=x658)&(x659/x660));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x665 = 846LL;
	volatile int16_t x666 = 4204;
	int32_t x667 = -446;
	int8_t x668 = INT8_MAX;
	static volatile int32_t t163 = 83;

    t163 = ((x665<=x666)&(x667/x668));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x669 = INT32_MIN;
	static int8_t x670 = INT8_MIN;
	int16_t x672 = INT16_MAX;
	volatile int32_t t164 = -182;

    t164 = ((x669<=x670)&(x671/x672));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x673 = INT16_MAX;
	static int32_t x674 = 7;
	volatile int32_t x675 = -906247;
	static uint32_t x676 = 24110950U;
	uint32_t t165 = 7U;

    t165 = ((x673<=x674)&(x675/x676));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x677 = INT32_MIN;
	static int16_t x678 = INT16_MAX;
	uint32_t x679 = UINT32_MAX;
	volatile uint32_t t166 = 23311956U;

    t166 = ((x677<=x678)&(x679/x680));

    if (t166 != 1U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x681 = -1LL;
	int8_t x682 = INT8_MIN;
	int16_t x683 = INT16_MAX;
	static int8_t x684 = INT8_MIN;
	volatile int32_t t167 = 12296;

    t167 = ((x681<=x682)&(x683/x684));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x686 = INT16_MIN;
	volatile uint64_t x687 = 52352636241182856LLU;
	uint8_t x688 = UINT8_MAX;
	uint64_t t168 = 252823LLU;

    t168 = ((x685<=x686)&(x687/x688));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x689 = -1;
	int8_t x690 = -3;
	uint8_t x691 = UINT8_MAX;
	uint16_t x692 = 6176U;
	int32_t t169 = 691039;

    t169 = ((x689<=x690)&(x691/x692));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x694 = INT32_MIN;
	volatile int32_t t170 = 365614;

    t170 = ((x693<=x694)&(x695/x696));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x697 = 40387001598LL;
	static volatile uint64_t x698 = 1247626406372LLU;
	uint8_t x699 = 7U;
	static int32_t x700 = -149333708;
	volatile int32_t t171 = 969;

    t171 = ((x697<=x698)&(x699/x700));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x701 = 0U;
	int64_t x702 = INT64_MIN;
	int16_t x703 = INT16_MIN;
	int32_t t172 = -3922769;

    t172 = ((x701<=x702)&(x703/x704));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x705 = INT8_MIN;
	volatile uint8_t x706 = 17U;
	uint32_t t173 = 1899U;

    t173 = ((x705<=x706)&(x707/x708));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x713 = INT32_MIN;
	static int64_t x715 = -4LL;
	static volatile int64_t x716 = INT64_MIN;
	int64_t t174 = 15082403190229LL;

    t174 = ((x713<=x714)&(x715/x716));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x717 = INT64_MIN;
	int32_t x718 = INT32_MIN;
	uint32_t x719 = 7U;
	int64_t x720 = 905548634990471LL;
	static int64_t t175 = -1036658031382785533LL;

    t175 = ((x717<=x718)&(x719/x720));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x721 = INT32_MIN;
	volatile int64_t x722 = INT64_MIN;
	int64_t x724 = -1LL;
	volatile int64_t t176 = 3164023970869661LL;

    t176 = ((x721<=x722)&(x723/x724));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x725 = -1;
	uint32_t x726 = 0U;
	int32_t x727 = INT32_MIN;
	volatile int64_t x728 = INT64_MIN;
	volatile int64_t t177 = -237940881LL;

    t177 = ((x725<=x726)&(x727/x728));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x729 = -1;
	int8_t x732 = -1;
	static volatile int32_t t178 = -726219;

    t178 = ((x729<=x730)&(x731/x732));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x733 = -4;
	volatile uint16_t x734 = 7U;
	int8_t x735 = -41;
	volatile int32_t x736 = -187058357;
	volatile int32_t t179 = 12;

    t179 = ((x733<=x734)&(x735/x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x737 = UINT16_MAX;
	static int32_t x739 = -1;
	static volatile int8_t x740 = INT8_MIN;
	volatile int32_t t180 = 634606481;

    t180 = ((x737<=x738)&(x739/x740));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	volatile uint16_t x742 = 267U;
	volatile uint16_t x743 = 3028U;
	int16_t x744 = -14080;
	int32_t t181 = -123;

    t181 = ((x741<=x742)&(x743/x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x749 = INT16_MIN;
	static int64_t x750 = -1LL;
	volatile uint64_t x751 = 461569254403628458LLU;
	int32_t x752 = -452;
	uint64_t t182 = 854631LLU;

    t182 = ((x749<=x750)&(x751/x752));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x753 = 1436U;
	uint64_t x754 = UINT64_MAX;
	volatile int32_t x755 = 1316;
	static int64_t x756 = -1LL;
	int64_t t183 = 0LL;

    t183 = ((x753<=x754)&(x755/x756));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x758 = INT8_MIN;
	volatile int32_t x759 = INT32_MIN;
	uint32_t x760 = 247155U;
	uint32_t t184 = 879U;

    t184 = ((x757<=x758)&(x759/x760));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x761 = -1LL;
	static volatile int16_t x762 = INT16_MIN;
	static int8_t x764 = INT8_MIN;
	int64_t t185 = 28324806533LL;

    t185 = ((x761<=x762)&(x763/x764));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x765 = -316;
	uint64_t x766 = 368048510LLU;
	int32_t x767 = -72312;
	int32_t t186 = 32141957;

    t186 = ((x765<=x766)&(x767/x768));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x769 = INT16_MIN;
	int8_t x770 = INT8_MIN;
	int64_t x771 = INT64_MIN;
	int32_t x772 = INT32_MIN;
	static int64_t t187 = -17747441633LL;

    t187 = ((x769<=x770)&(x771/x772));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x781 = 12;
	int64_t x782 = -1LL;
	int32_t x783 = INT32_MAX;
	volatile uint16_t x784 = 6487U;
	volatile int32_t t188 = -387049089;

    t188 = ((x781<=x782)&(x783/x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x786 = 8526063638147019LLU;
	volatile int8_t x787 = INT8_MIN;
	int16_t x788 = -1;
	int32_t t189 = 173;

    t189 = ((x785<=x786)&(x787/x788));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x789 = UINT8_MAX;
	uint8_t x791 = 1U;
	volatile uint16_t x792 = 15U;

    t190 = ((x789<=x790)&(x791/x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x793 = 251916962434336LL;
	volatile int64_t x794 = INT64_MIN;
	volatile uint64_t t191 = 456448070LLU;

    t191 = ((x793<=x794)&(x795/x796));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x798 = UINT32_MAX;
	int16_t x799 = -28;
	static int64_t x800 = 145136184LL;

    t192 = ((x797<=x798)&(x799/x800));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x801 = 3157437039125513LLU;
	int64_t x802 = INT64_MAX;
	volatile int64_t x803 = INT64_MIN;
	uint16_t x804 = UINT16_MAX;
	volatile int64_t t193 = 15LL;

    t193 = ((x801<=x802)&(x803/x804));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = INT32_MIN;
	uint16_t x806 = 2U;
	int16_t x807 = -1;
	uint16_t x808 = 308U;
	int32_t t194 = 4;

    t194 = ((x805<=x806)&(x807/x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x809 = UINT16_MAX;
	int32_t x811 = INT32_MIN;
	int32_t x812 = INT32_MAX;

    t195 = ((x809<=x810)&(x811/x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x813 = -145241813824019160LL;
	int16_t x815 = INT16_MIN;
	int16_t x816 = -1;
	static volatile int32_t t196 = 3;

    t196 = ((x813<=x814)&(x815/x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x817 = INT64_MIN;
	int8_t x818 = INT8_MAX;
	uint64_t x819 = 334345732273552LLU;
	static volatile uint64_t t197 = 234866703043395155LLU;

    t197 = ((x817<=x818)&(x819/x820));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = INT16_MIN;

    t198 = ((x825<=x826)&(x827/x828));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x830 = INT32_MIN;
	volatile int64_t x831 = INT64_MIN;
	int64_t x832 = -1216749870780092LL;
	int64_t t199 = 22218152362607590LL;

    t199 = ((x829<=x830)&(x831/x832));

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

