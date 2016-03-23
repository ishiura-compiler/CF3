
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

int8_t x2 = INT8_MIN;
int8_t x8 = -31;
int32_t t2 = -56;
volatile int16_t x14 = -1;
uint32_t x15 = 0U;
uint16_t x18 = UINT16_MAX;
uint32_t x19 = 6234U;
int64_t x22 = INT64_MIN;
int64_t x25 = INT64_MAX;
static uint8_t x27 = 31U;
uint16_t x28 = 56U;
static int32_t t7 = -1676;
volatile int8_t x36 = 0;
int16_t x45 = INT16_MAX;
int32_t t11 = 3093;
int8_t x54 = INT8_MIN;
int32_t t13 = 0;
volatile int16_t x57 = 13;
uint16_t x59 = UINT16_MAX;
volatile uint32_t x70 = 325U;
int64_t x76 = INT64_MIN;
uint32_t x78 = UINT32_MAX;
int64_t x87 = INT64_MIN;
int16_t x89 = INT16_MAX;
static uint8_t x91 = 25U;
int16_t x92 = INT16_MIN;
int32_t t24 = 0;
uint32_t x101 = 15899222U;
int32_t t28 = 162767;
volatile uint16_t x125 = 3056U;
int32_t x129 = 89;
volatile int32_t x132 = 0;
int64_t x135 = -31519LL;
int16_t x136 = INT16_MIN;
static uint32_t x139 = 35U;
uint16_t x140 = 0U;
volatile int64_t x141 = -1LL;
int32_t t35 = -21861099;
static int16_t x155 = INT16_MAX;
int64_t x161 = INT64_MIN;
uint32_t x163 = 4U;
volatile int16_t x167 = INT16_MAX;
int16_t x172 = INT16_MIN;
volatile int32_t t42 = -60716;
volatile int32_t t43 = -1171416;
static uint8_t x177 = UINT8_MAX;
static uint8_t x179 = 0U;
static int32_t x183 = 10958179;
int16_t x186 = INT16_MAX;
uint64_t x189 = 10121388387LLU;
volatile int32_t x193 = -1;
int64_t x194 = INT64_MIN;
int8_t x196 = -1;
int32_t x197 = INT32_MIN;
static int32_t t49 = -803226;
uint32_t x202 = UINT32_MAX;
int32_t t51 = -4263220;
uint32_t x209 = 939206U;
uint64_t x221 = UINT64_MAX;
static int32_t t55 = -629292;
int32_t t56 = -119;
int64_t x233 = INT64_MIN;
int32_t x237 = INT32_MIN;
int8_t x240 = INT8_MAX;
int32_t t59 = 2113463;
int32_t t60 = -1431978;
volatile int32_t t61 = 15706;
int8_t x252 = INT8_MIN;
uint32_t x253 = 961227U;
volatile int32_t t63 = 207041791;
uint64_t x262 = 68993820226LLU;
volatile int64_t x263 = INT64_MIN;
int8_t x273 = -1;
volatile uint32_t x277 = 905U;
int8_t x285 = INT8_MAX;
int8_t x287 = INT8_MIN;
int16_t x290 = INT16_MIN;
static uint32_t x291 = 1U;
volatile int8_t x304 = INT8_MAX;
volatile int32_t t76 = 13937;
static int64_t x311 = INT64_MAX;
static int32_t x312 = INT32_MIN;
volatile uint16_t x313 = UINT16_MAX;
uint32_t x326 = 1773109956U;
int8_t x327 = INT8_MIN;
static volatile int64_t x331 = INT64_MIN;
static int32_t t82 = 226149;
int64_t x339 = 1256660470907740LL;
static volatile int8_t x342 = 7;
static int8_t x345 = 6;
volatile int32_t x346 = INT32_MIN;
int32_t x348 = -1;
uint8_t x353 = 0U;
int32_t t88 = 470658;
int64_t x358 = 1LL;
uint32_t x365 = 6154724U;
volatile int64_t x367 = -4148933061218164109LL;
volatile int8_t x371 = 6;
int32_t t92 = 11545985;
int32_t x373 = INT32_MIN;
volatile int16_t x376 = -1;
int32_t x378 = INT32_MIN;
uint32_t x383 = 1768773486U;
volatile int64_t x384 = 290635LL;
static int8_t x388 = -4;
uint16_t x392 = 11U;
int64_t x393 = INT64_MAX;
volatile int32_t t98 = 20738;
int32_t x402 = INT32_MIN;
static uint64_t x406 = UINT64_MAX;
static int8_t x413 = INT8_MIN;
static int8_t x421 = INT8_MIN;
int32_t t105 = 13;
static int8_t x431 = -1;
int32_t x432 = INT32_MIN;
static int16_t x434 = INT16_MIN;
int32_t t108 = 127781;
int8_t x441 = INT8_MAX;
uint64_t x443 = UINT64_MAX;
uint8_t x444 = 68U;
int32_t x445 = INT32_MIN;
int32_t t113 = -13;
static volatile int32_t t115 = 29209;
uint8_t x469 = 64U;
uint32_t x477 = 1022780588U;
uint8_t x479 = 35U;
int32_t x488 = -17088;
int32_t t122 = 2;
int32_t t124 = -12084;
static uint8_t x502 = 3U;
int32_t x505 = -399429275;
int32_t t126 = -1046374;
static uint16_t x510 = 25742U;
volatile int32_t t127 = -35594;
uint64_t x514 = 4292917647364467062LLU;
uint8_t x517 = 0U;
volatile uint8_t x524 = 67U;
int32_t t130 = 6044;
int32_t t131 = 32;
volatile uint32_t x537 = 1522U;
static int16_t x540 = INT16_MAX;
uint32_t x542 = UINT32_MAX;
int32_t t136 = -33849;
int16_t x552 = INT16_MIN;
int32_t x557 = -88370;
int16_t x559 = INT16_MIN;
int32_t x560 = INT32_MIN;
int32_t x565 = INT32_MIN;
uint8_t x568 = 29U;
volatile int32_t x572 = INT32_MIN;
int32_t t142 = 4;
int64_t x574 = INT64_MAX;
int32_t x575 = -128878160;
volatile int64_t x584 = 62749LL;
volatile int16_t x586 = -22;
volatile uint64_t x590 = 36LLU;
int32_t x592 = INT32_MAX;
int16_t x598 = INT16_MIN;
int64_t x607 = INT64_MAX;
volatile int32_t t151 = -821195689;
static volatile int32_t t152 = -327;
volatile uint32_t x614 = 79340564U;
int8_t x615 = 4;
int8_t x622 = -1;
static volatile int8_t x623 = -1;
static uint16_t x624 = 1270U;
static volatile int64_t x626 = 0LL;
static int32_t x631 = INT32_MIN;
volatile int32_t t157 = -156470;
int32_t x636 = 103;
volatile int32_t t159 = -348776851;
int16_t x641 = INT16_MAX;
static int64_t x642 = -1LL;
int32_t x644 = 14;
int32_t t160 = -4508;
volatile int16_t x645 = INT16_MAX;
uint64_t x648 = 6500LLU;
static uint8_t x651 = UINT8_MAX;
int64_t x653 = INT64_MAX;
int8_t x668 = INT8_MAX;
int64_t x669 = 2298561LL;
int32_t t168 = 16175466;
volatile int32_t t170 = -8068983;
volatile int8_t x687 = INT8_MIN;
uint16_t x691 = 1U;
int32_t t172 = 1615551;
uint16_t x693 = 1590U;
uint16_t x698 = 30U;
int8_t x700 = 11;
int16_t x701 = -2564;
int64_t x702 = -1LL;
uint8_t x704 = 1U;
volatile int8_t x715 = -1;
static uint16_t x718 = 2789U;
static volatile int32_t t179 = 210028;
int16_t x724 = INT16_MAX;
int32_t x727 = -1;
static volatile int32_t t181 = -3180;
uint32_t x735 = 556U;
volatile int32_t t183 = 179484695;
int32_t x744 = 58375;
static int16_t x756 = INT16_MIN;
int64_t x757 = -1000LL;
volatile uint32_t x760 = 4454666U;
static uint64_t x766 = UINT64_MAX;
int32_t t191 = -95;
int8_t x774 = INT8_MIN;
volatile int32_t t195 = -22798010;
static int32_t x791 = INT32_MIN;
static volatile int16_t x792 = -1;
int32_t t197 = 0;
volatile int32_t x793 = -1;
volatile uint16_t x795 = 1U;


void f0(void) {
    	volatile uint64_t x1 = 1971602954202934686LLU;
	volatile int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -12;

    t0 = ((x1==(x2!=x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -40;
	uint32_t x6 = UINT32_MAX;
	static volatile int8_t x7 = -18;
	volatile int32_t t1 = 0;

    t1 = ((x5==(x6!=x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 0;
	int8_t x10 = -1;
	volatile int8_t x11 = -3;
	static volatile int32_t x12 = INT32_MIN;

    t2 = ((x9==(x10!=x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	volatile uint16_t x16 = 4647U;
	int32_t t3 = 23362785;

    t3 = ((x13==(x14!=x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	static volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 65;

    t4 = ((x17==(x18!=x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 1228LLU;
	volatile uint64_t x23 = 57541319899310475LLU;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -841;

    t5 = ((x21==(x22!=x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = 1U;
	volatile int32_t t6 = -1;

    t6 = ((x25==(x26!=x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -125;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = 3310;
	int8_t x32 = INT8_MIN;

    t7 = ((x29==(x30!=x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x34 = -1;
	int8_t x35 = INT8_MIN;
	volatile int32_t t8 = -33;

    t8 = ((x33==(x34!=x35))!=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int8_t x38 = 0;
	int8_t x39 = INT8_MIN;
	static volatile int64_t x40 = INT64_MAX;
	int32_t t9 = 2091;

    t9 = ((x37==(x38!=x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	volatile int16_t x42 = INT16_MIN;
	static int16_t x43 = -1;
	uint32_t x44 = 29601500U;
	static volatile int32_t t10 = -260956415;

    t10 = ((x41==(x42!=x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MAX;
	int16_t x48 = INT16_MIN;

    t11 = ((x45==(x46!=x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MAX;
	volatile uint32_t x51 = 186U;
	int32_t x52 = INT32_MIN;
	static int32_t t12 = 54240971;

    t12 = ((x49==(x50!=x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	volatile uint64_t x55 = UINT64_MAX;
	int64_t x56 = INT64_MIN;

    t13 = ((x53==(x54!=x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x58 = 5572880U;
	int16_t x60 = 1;
	volatile int32_t t14 = 245;

    t14 = ((x57==(x58!=x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = 6;
	int8_t x62 = INT8_MIN;
	static int16_t x63 = INT16_MIN;
	static int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = 3771;

    t15 = ((x61==(x62!=x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -6742906073361636LL;
	uint64_t x66 = 106278499257LLU;
	volatile int16_t x67 = -1;
	static uint8_t x68 = 9U;
	static volatile int32_t t16 = 261;

    t16 = ((x65==(x66!=x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x69 = 221103533029223259LLU;
	volatile int8_t x71 = -1;
	static int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 5292150;

    t17 = ((x69==(x70!=x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	static int64_t x74 = 481053522346LL;
	int32_t x75 = 238879;
	volatile int32_t t18 = 13728;

    t18 = ((x73==(x74!=x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	int16_t x79 = 83;
	volatile int32_t x80 = -1;
	int32_t t19 = -933522;

    t19 = ((x77==(x78!=x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 83;
	int16_t x82 = 1234;
	int64_t x83 = -1949978871223661LL;
	uint32_t x84 = 1033637759U;
	volatile int32_t t20 = -2862;

    t20 = ((x81==(x82!=x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	static uint64_t x86 = UINT64_MAX;
	int8_t x88 = -1;
	int32_t t21 = 56;

    t21 = ((x85==(x86!=x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = -899023355041668LL;
	int32_t t22 = 8906243;

    t22 = ((x89==(x90!=x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	int16_t x94 = INT16_MIN;
	int64_t x95 = INT64_MIN;
	int32_t x96 = -1;
	int32_t t23 = -2000195;

    t23 = ((x93==(x94!=x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 184437559U;
	int8_t x98 = 0;
	volatile int64_t x99 = -1LL;
	volatile uint8_t x100 = 76U;

    t24 = ((x97==(x98!=x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x102 = INT16_MIN;
	volatile int32_t x103 = 82700;
	int64_t x104 = INT64_MAX;
	static volatile int32_t t25 = -12502018;

    t25 = ((x101==(x102!=x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MIN;
	uint32_t x106 = 516171685U;
	volatile int8_t x107 = INT8_MAX;
	int16_t x108 = INT16_MAX;
	int32_t t26 = -929892015;

    t26 = ((x105==(x106!=x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x109 = UINT8_MAX;
	static int64_t x110 = -1LL;
	int32_t x111 = -23463;
	uint32_t x112 = 1460U;
	volatile int32_t t27 = -639;

    t27 = ((x109==(x110!=x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	volatile int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = 974545257LLU;

    t28 = ((x113==(x114!=x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x117 = -32991113084LL;
	volatile uint16_t x118 = UINT16_MAX;
	static uint8_t x119 = UINT8_MAX;
	volatile uint16_t x120 = 151U;
	int32_t t29 = 34680520;

    t29 = ((x117==(x118!=x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 344447LLU;
	static uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 847068U;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -52;

    t30 = ((x121==(x122!=x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x126 = 3131;
	int64_t x127 = INT64_MIN;
	volatile uint16_t x128 = 350U;
	int32_t t31 = -56;

    t31 = ((x125==(x126!=x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;
	int32_t t32 = 1;

    t32 = ((x129==(x130!=x131))!=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = 29U;
	uint32_t x134 = UINT32_MAX;
	volatile int32_t t33 = 17;

    t33 = ((x133==(x134!=x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 533U;
	uint32_t x138 = 1615769167U;
	volatile int32_t t34 = 0;

    t34 = ((x137==(x138!=x139))!=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = -1;
	static volatile uint16_t x143 = UINT16_MAX;
	volatile int32_t x144 = -4;

    t35 = ((x141==(x142!=x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	int64_t x146 = -1LL;
	int64_t x147 = INT64_MAX;
	volatile int8_t x148 = -1;
	volatile int32_t t36 = -2;

    t36 = ((x145==(x146!=x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = 22228454LL;
	static uint16_t x150 = UINT16_MAX;
	volatile int32_t x151 = INT32_MIN;
	static int8_t x152 = -1;
	volatile int32_t t37 = 1900;

    t37 = ((x149==(x150!=x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -75831363;
	int64_t x154 = INT64_MIN;
	int32_t x156 = -3;
	volatile int32_t t38 = -140;

    t38 = ((x153==(x154!=x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MIN;
	static uint16_t x159 = 2U;
	int32_t x160 = INT32_MAX;
	static volatile int32_t t39 = 5;

    t39 = ((x157==(x158!=x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = UINT16_MAX;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 24719;

    t40 = ((x161==(x162!=x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 21U;
	static int8_t x166 = -1;
	volatile uint8_t x168 = 20U;
	static int32_t t41 = 13;

    t41 = ((x165==(x166!=x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = 3;
	static int32_t x170 = INT32_MIN;
	volatile uint64_t x171 = 62413903176LLU;

    t42 = ((x169==(x170!=x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -5751752;
	static int32_t x174 = INT32_MAX;
	volatile int16_t x175 = -1;
	volatile int64_t x176 = INT64_MAX;

    t43 = ((x173==(x174!=x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x178 = INT64_MIN;
	volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = -27081376;

    t44 = ((x177==(x178!=x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = INT64_MAX;
	volatile int16_t x182 = -3;
	volatile uint32_t x184 = 6U;
	static volatile int32_t t45 = 95;

    t45 = ((x181==(x182!=x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MAX;
	uint8_t x187 = UINT8_MAX;
	static volatile uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = -7;

    t46 = ((x185==(x186!=x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -1LL;
	static uint32_t x191 = UINT32_MAX;
	uint64_t x192 = 86777LLU;
	static volatile int32_t t47 = -62;

    t47 = ((x189==(x190!=x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x195 = 69059U;
	int32_t t48 = 532;

    t48 = ((x193==(x194!=x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x198 = UINT16_MAX;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = -1;

    t49 = ((x197==(x198!=x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	uint8_t x203 = 8U;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -1772;

    t50 = ((x201==(x202!=x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x205 = -49;
	volatile uint8_t x206 = 60U;
	static volatile uint16_t x207 = UINT16_MAX;
	uint32_t x208 = 82U;

    t51 = ((x205==(x206!=x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x210 = UINT8_MAX;
	volatile uint64_t x211 = 892528LLU;
	int64_t x212 = -307305LL;
	int32_t t52 = -3681;

    t52 = ((x209==(x210!=x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = INT64_MAX;
	int8_t x214 = -1;
	volatile uint16_t x215 = 1707U;
	int8_t x216 = -1;
	volatile int32_t t53 = 144;

    t53 = ((x213==(x214!=x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = 1441154994277661LL;
	int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	static int32_t x220 = 0;
	int32_t t54 = -380;

    t54 = ((x217==(x218!=x219))!=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x222 = -1;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = 120U;

    t55 = ((x221==(x222!=x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1065791271657997658LL;
	uint32_t x226 = UINT32_MAX;
	int32_t x227 = -1;
	int32_t x228 = 361084;

    t56 = ((x225==(x226!=x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MIN;
	static int64_t x231 = -1LL;
	int32_t x232 = 115331653;
	int32_t t57 = 467305553;

    t57 = ((x229==(x230!=x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = INT64_MAX;
	int64_t x235 = INT64_MIN;
	int16_t x236 = 74;
	int32_t t58 = -43708;

    t58 = ((x233==(x234!=x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x238 = UINT8_MAX;
	static int8_t x239 = 7;

    t59 = ((x237==(x238!=x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = 98U;
	int32_t x244 = INT32_MIN;

    t60 = ((x241==(x242!=x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	volatile uint8_t x247 = 124U;
	static uint16_t x248 = UINT16_MAX;

    t61 = ((x245==(x246!=x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 4U;
	volatile int8_t x250 = INT8_MIN;
	int64_t x251 = 1337406LL;
	int32_t t62 = -911;

    t62 = ((x249==(x250!=x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x254 = -1;
	static uint8_t x255 = 4U;
	volatile uint32_t x256 = 621U;

    t63 = ((x253==(x254!=x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -24;
	static int8_t x258 = -2;
	volatile uint32_t x259 = UINT32_MAX;
	uint16_t x260 = UINT16_MAX;
	static int32_t t64 = -1;

    t64 = ((x257==(x258!=x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	uint16_t x264 = 1350U;
	static int32_t t65 = -111082;

    t65 = ((x261==(x262!=x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = 270;
	int8_t x266 = 0;
	uint64_t x267 = 83876547173657150LLU;
	uint64_t x268 = 6947555260261422LLU;
	static volatile int32_t t66 = 8;

    t66 = ((x265==(x266!=x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -15712536LL;
	volatile uint32_t x270 = 179649U;
	volatile uint64_t x271 = 223807931839LLU;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -1;

    t67 = ((x269==(x270!=x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x274 = -116322LL;
	volatile uint32_t x275 = 1710439U;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = -57987816;

    t68 = ((x273==(x274!=x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x278 = INT16_MIN;
	uint8_t x279 = UINT8_MAX;
	int8_t x280 = 1;
	static volatile int32_t t69 = -170;

    t69 = ((x277==(x278!=x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	int64_t x282 = 1029428828LL;
	static uint32_t x283 = 6059847U;
	uint16_t x284 = UINT16_MAX;
	static int32_t t70 = -643518;

    t70 = ((x281==(x282!=x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x286 = 121U;
	int32_t x288 = INT32_MIN;
	static int32_t t71 = -17315;

    t71 = ((x285==(x286!=x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x289 = INT32_MAX;
	int64_t x292 = INT64_MAX;
	volatile int32_t t72 = -26789887;

    t72 = ((x289==(x290!=x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = 227767LL;
	volatile int16_t x294 = -1;
	uint32_t x295 = 878U;
	static uint64_t x296 = 7471576152587LLU;
	volatile int32_t t73 = -30;

    t73 = ((x293==(x294!=x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int8_t x298 = -1;
	volatile uint64_t x299 = 45LLU;
	volatile int32_t x300 = -1201;
	volatile int32_t t74 = 0;

    t74 = ((x297==(x298!=x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = 123;
	int16_t x302 = -1;
	static uint8_t x303 = 4U;
	int32_t t75 = 4621223;

    t75 = ((x301==(x302!=x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = UINT16_MAX;
	static int8_t x306 = INT8_MIN;
	static int32_t x307 = 8218261;
	volatile int16_t x308 = -1;

    t76 = ((x305==(x306!=x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	volatile int32_t t77 = -218817;

    t77 = ((x309==(x310!=x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x314 = INT8_MIN;
	int64_t x315 = 4456671LL;
	uint32_t x316 = 373844U;
	int32_t t78 = 6388;

    t78 = ((x313==(x314!=x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x317 = 8268U;
	static int32_t x318 = INT32_MIN;
	uint8_t x319 = 0U;
	uint8_t x320 = 1U;
	static volatile int32_t t79 = 6;

    t79 = ((x317==(x318!=x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MIN;
	uint16_t x323 = 10735U;
	int8_t x324 = INT8_MIN;
	int32_t t80 = -7551932;

    t80 = ((x321==(x322!=x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = INT16_MIN;
	int64_t x328 = INT64_MAX;
	static int32_t t81 = -694364;

    t81 = ((x325==(x326!=x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -1LL;
	static int16_t x330 = INT16_MIN;
	int32_t x332 = INT32_MAX;

    t82 = ((x329==(x330!=x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = -64678;
	static int32_t x334 = -1;
	int32_t x335 = -1;
	static volatile uint8_t x336 = 0U;
	volatile int32_t t83 = 0;

    t83 = ((x333==(x334!=x335))!=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = 5002;
	uint16_t x338 = 2614U;
	int64_t x340 = -1LL;
	volatile int32_t t84 = -716365;

    t84 = ((x337==(x338!=x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x341 = 14880154U;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t85 = 1;

    t85 = ((x341==(x342!=x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x347 = -1;
	int32_t t86 = 49876;

    t86 = ((x345==(x346!=x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int32_t x350 = -1;
	static int32_t x351 = INT32_MIN;
	int32_t x352 = 509;
	volatile int32_t t87 = 30172;

    t87 = ((x349==(x350!=x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x354 = -1;
	static volatile uint8_t x355 = 94U;
	int64_t x356 = -6208801334670LL;

    t88 = ((x353==(x354!=x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = -24;
	static uint64_t x359 = 11LLU;
	int32_t x360 = 5;
	int32_t t89 = -226623;

    t89 = ((x357==(x358!=x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	static uint64_t x362 = UINT64_MAX;
	int32_t x363 = INT32_MAX;
	uint32_t x364 = 10573U;
	volatile int32_t t90 = 129590325;

    t90 = ((x361==(x362!=x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x366 = UINT32_MAX;
	static uint8_t x368 = 1U;
	volatile int32_t t91 = 1;

    t91 = ((x365==(x366!=x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MAX;
	int32_t x370 = -376;
	static volatile int32_t x372 = INT32_MAX;

    t92 = ((x369==(x370!=x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x374 = INT64_MIN;
	volatile int32_t x375 = INT32_MIN;
	int32_t t93 = 499417607;

    t93 = ((x373==(x374!=x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x377 = -1;
	static int32_t x379 = INT32_MIN;
	int32_t x380 = 8787;
	int32_t t94 = 4222;

    t94 = ((x377==(x378!=x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 3214164422323855621LL;
	static int8_t x382 = -11;
	int32_t t95 = -45050;

    t95 = ((x381==(x382!=x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 2U;
	int32_t t96 = 1444;

    t96 = ((x385==(x386!=x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = 220212LL;
	volatile int32_t x390 = 373685279;
	int64_t x391 = -1LL;
	volatile int32_t t97 = -7;

    t97 = ((x389==(x390!=x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x394 = 146659482961355537LL;
	int8_t x395 = 0;
	int16_t x396 = INT16_MIN;

    t98 = ((x393==(x394!=x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 2;
	static uint32_t x398 = 811551558U;
	static int8_t x399 = -59;
	uint8_t x400 = UINT8_MAX;
	int32_t t99 = -6;

    t99 = ((x397==(x398!=x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = 18640710LLU;
	volatile int32_t t100 = 449702;

    t100 = ((x401==(x402!=x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	int64_t x407 = -1331591344LL;
	int8_t x408 = INT8_MIN;
	volatile int32_t t101 = -25;

    t101 = ((x405==(x406!=x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = 0;
	volatile int8_t x410 = -10;
	int32_t x411 = INT32_MAX;
	int8_t x412 = INT8_MAX;
	volatile int32_t t102 = 3;

    t102 = ((x409==(x410!=x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x414 = INT8_MIN;
	int64_t x415 = INT64_MIN;
	volatile int8_t x416 = 11;
	volatile int32_t t103 = 806503;

    t103 = ((x413==(x414!=x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	int16_t x418 = INT16_MAX;
	int64_t x419 = -1LL;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t104 = -7526900;

    t104 = ((x417==(x418!=x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x422 = INT64_MIN;
	int64_t x423 = -28372246497790390LL;
	volatile int8_t x424 = INT8_MAX;

    t105 = ((x421==(x422!=x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 30U;
	int16_t x426 = INT16_MIN;
	int32_t x427 = 1760;
	int64_t x428 = -7526697851066LL;
	volatile int32_t t106 = -20032947;

    t106 = ((x425==(x426!=x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x429 = 7U;
	volatile uint8_t x430 = 13U;
	static volatile int32_t t107 = -4184;

    t107 = ((x429==(x430!=x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	uint32_t x435 = UINT32_MAX;
	uint16_t x436 = UINT16_MAX;

    t108 = ((x433==(x434!=x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 27044;
	static int16_t x438 = INT16_MAX;
	int16_t x439 = 0;
	volatile int64_t x440 = -1LL;
	int32_t t109 = 408;

    t109 = ((x437==(x438!=x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x442 = INT32_MIN;
	static volatile int32_t t110 = 4615;

    t110 = ((x441==(x442!=x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x446 = INT16_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	volatile uint32_t x448 = 326U;
	int32_t t111 = 87991529;

    t111 = ((x445==(x446!=x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	int16_t x450 = INT16_MAX;
	int64_t x451 = 479360LL;
	static volatile uint32_t x452 = 20U;
	static volatile int32_t t112 = -223036;

    t112 = ((x449==(x450!=x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 32576U;
	int64_t x454 = INT64_MIN;
	int16_t x455 = -1;
	int8_t x456 = -1;

    t113 = ((x453==(x454!=x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -690;
	volatile int64_t x458 = INT64_MIN;
	uint64_t x459 = UINT64_MAX;
	int16_t x460 = -1;
	static int32_t t114 = 25;

    t114 = ((x457==(x458!=x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	static volatile int32_t x462 = INT32_MIN;
	int8_t x463 = INT8_MIN;
	int8_t x464 = INT8_MIN;

    t115 = ((x461==(x462!=x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	volatile int64_t x466 = -221435LL;
	volatile uint64_t x467 = UINT64_MAX;
	static uint64_t x468 = 831284LLU;
	int32_t t116 = 25;

    t116 = ((x465==(x466!=x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = -1;
	volatile uint16_t x471 = UINT16_MAX;
	int8_t x472 = INT8_MIN;
	int32_t t117 = 331122919;

    t117 = ((x469==(x470!=x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 0U;
	volatile int16_t x474 = 15;
	uint32_t x475 = UINT32_MAX;
	int64_t x476 = -44731769703128956LL;
	int32_t t118 = -2;

    t118 = ((x473==(x474!=x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = -18;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t119 = -13810486;

    t119 = ((x477==(x478!=x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = INT32_MIN;
	static uint8_t x482 = UINT8_MAX;
	volatile int16_t x483 = 3;
	static uint8_t x484 = 94U;
	int32_t t120 = -2847227;

    t120 = ((x481==(x482!=x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	static volatile int16_t x486 = INT16_MAX;
	uint32_t x487 = 2U;
	int32_t t121 = -484717;

    t121 = ((x485==(x486!=x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 9055606422304446112LLU;
	int32_t x490 = -214164;
	int16_t x491 = 0;
	int8_t x492 = INT8_MIN;

    t122 = ((x489==(x490!=x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MAX;
	static int16_t x494 = -9;
	uint16_t x495 = 0U;
	static volatile int64_t x496 = -1708215367770LL;
	int32_t t123 = 212326134;

    t123 = ((x493==(x494!=x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int64_t x498 = -1LL;
	int32_t x499 = -1;
	int64_t x500 = -1932595974292512209LL;

    t124 = ((x497==(x498!=x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -1;
	int32_t x503 = INT32_MIN;
	int64_t x504 = -1LL;
	volatile int32_t t125 = 467875792;

    t125 = ((x501==(x502!=x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x506 = INT8_MAX;
	int64_t x507 = -1LL;
	uint16_t x508 = 0U;

    t126 = ((x505==(x506!=x507))!=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 4093239229319LLU;
	int32_t x511 = -1;
	int64_t x512 = 187061539LL;

    t127 = ((x509==(x510!=x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 0U;
	volatile uint8_t x515 = UINT8_MAX;
	volatile int16_t x516 = 0;
	volatile int32_t t128 = 69178;

    t128 = ((x513==(x514!=x515))!=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x518 = -1LL;
	uint64_t x519 = 31163949024701443LLU;
	volatile int8_t x520 = -35;
	int32_t t129 = -9391;

    t129 = ((x517==(x518!=x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x521 = INT8_MIN;
	static int16_t x522 = INT16_MAX;
	int32_t x523 = INT32_MIN;

    t130 = ((x521==(x522!=x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 10U;
	uint64_t x526 = 19884439LLU;
	static volatile int64_t x527 = -1LL;
	uint32_t x528 = 1U;

    t131 = ((x525==(x526!=x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = -1;
	int8_t x530 = INT8_MIN;
	static uint16_t x531 = 667U;
	int64_t x532 = -1LL;
	int32_t t132 = 497;

    t132 = ((x529==(x530!=x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = INT8_MIN;
	volatile int32_t x534 = INT32_MAX;
	int16_t x535 = 0;
	int16_t x536 = INT16_MIN;
	volatile int32_t t133 = -1;

    t133 = ((x533==(x534!=x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = 841220008004LL;
	uint16_t x539 = 230U;
	volatile int32_t t134 = -3464515;

    t134 = ((x537==(x538!=x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 21017U;
	int32_t x543 = 9937073;
	volatile int32_t x544 = -997551918;
	volatile int32_t t135 = -315868;

    t135 = ((x541==(x542!=x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -18;
	static volatile uint64_t x546 = UINT64_MAX;
	int16_t x547 = -2;
	static int8_t x548 = INT8_MIN;

    t136 = ((x545==(x546!=x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MIN;
	static uint16_t x550 = 106U;
	uint32_t x551 = UINT32_MAX;
	static int32_t t137 = -15;

    t137 = ((x549==(x550!=x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x553 = UINT16_MAX;
	uint16_t x554 = 54U;
	int8_t x555 = 41;
	uint64_t x556 = 57174347678LLU;
	int32_t t138 = -30560;

    t138 = ((x553==(x554!=x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x558 = 151U;
	volatile int32_t t139 = 144175978;

    t139 = ((x557==(x558!=x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = -1;
	int8_t x562 = 8;
	int64_t x563 = -1LL;
	uint16_t x564 = 3023U;
	int32_t t140 = -861;

    t140 = ((x561==(x562!=x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x566 = INT8_MAX;
	static int64_t x567 = 0LL;
	int32_t t141 = -45318;

    t141 = ((x565==(x566!=x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	int64_t x570 = 7742142990LL;
	static volatile int64_t x571 = -4LL;

    t142 = ((x569==(x570!=x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = 7003473LLU;
	int8_t x576 = INT8_MIN;
	static volatile int32_t t143 = -20563955;

    t143 = ((x573==(x574!=x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -183820700723020301LL;
	volatile uint8_t x578 = 33U;
	volatile int32_t x579 = INT32_MIN;
	volatile int16_t x580 = INT16_MIN;
	int32_t t144 = -4904;

    t144 = ((x577==(x578!=x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x581 = INT32_MAX;
	int64_t x582 = 1LL;
	uint64_t x583 = UINT64_MAX;
	int32_t t145 = 87892;

    t145 = ((x581==(x582!=x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MAX;
	int8_t x587 = 1;
	int64_t x588 = -1LL;
	int32_t t146 = 375;

    t146 = ((x585==(x586!=x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 31210U;
	uint32_t x591 = 53084U;
	volatile int32_t t147 = 1;

    t147 = ((x589==(x590!=x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	uint8_t x594 = 6U;
	int8_t x595 = 3;
	int8_t x596 = 23;
	volatile int32_t t148 = -119128;

    t148 = ((x593==(x594!=x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = INT32_MIN;
	uint32_t x599 = 13023U;
	volatile int64_t x600 = INT64_MIN;
	static volatile int32_t t149 = 823864;

    t149 = ((x597==(x598!=x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 310030615U;
	static int32_t x602 = -516151;
	static volatile uint32_t x603 = 13U;
	int32_t x604 = INT32_MAX;
	int32_t t150 = 563471745;

    t150 = ((x601==(x602!=x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -124508374508002LL;
	uint64_t x606 = UINT64_MAX;
	int8_t x608 = -1;

    t151 = ((x605==(x606!=x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 0U;
	static int16_t x610 = INT16_MIN;
	int32_t x611 = 993;
	static int16_t x612 = INT16_MIN;

    t152 = ((x609==(x610!=x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -1LL;
	int16_t x616 = 11;
	int32_t t153 = -1;

    t153 = ((x613==(x614!=x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 2U;
	uint64_t x618 = 69782903760512LLU;
	int64_t x619 = INT64_MAX;
	volatile int32_t x620 = INT32_MIN;
	int32_t t154 = 780769922;

    t154 = ((x617==(x618!=x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	static volatile int32_t t155 = -112;

    t155 = ((x621==(x622!=x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 93U;
	static int64_t x627 = -1LL;
	uint16_t x628 = 3U;
	static volatile int32_t t156 = 172078662;

    t156 = ((x625==(x626!=x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -24273304202306184LL;
	int32_t x630 = 1160600;
	int8_t x632 = INT8_MAX;

    t157 = ((x629==(x630!=x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -990368168595642LL;
	volatile int16_t x634 = -1;
	int8_t x635 = INT8_MIN;
	static volatile int32_t t158 = -1;

    t158 = ((x633==(x634!=x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	volatile int32_t x638 = INT32_MIN;
	static int8_t x639 = -1;
	int64_t x640 = 5193693628LL;

    t159 = ((x637==(x638!=x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x643 = INT64_MIN;

    t160 = ((x641==(x642!=x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = INT16_MIN;
	volatile int64_t x647 = INT64_MIN;
	static int32_t t161 = -14908;

    t161 = ((x645==(x646!=x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 2U;
	int16_t x650 = INT16_MIN;
	static uint8_t x652 = 0U;
	volatile int32_t t162 = -37822;

    t162 = ((x649==(x650!=x651))!=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x654 = 3;
	static uint32_t x655 = UINT32_MAX;
	int8_t x656 = INT8_MIN;
	static volatile int32_t t163 = -142915110;

    t163 = ((x653==(x654!=x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int16_t x658 = -1;
	static int32_t x659 = INT32_MAX;
	int32_t x660 = INT32_MIN;
	int32_t t164 = 361335546;

    t164 = ((x657==(x658!=x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x662 = INT64_MIN;
	static int32_t x663 = 342487235;
	uint8_t x664 = UINT8_MAX;
	int32_t t165 = 3117;

    t165 = ((x661==(x662!=x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -174;
	volatile int32_t x666 = -1;
	int16_t x667 = INT16_MAX;
	volatile int32_t t166 = 61557761;

    t166 = ((x665==(x666!=x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x670 = -21537;
	uint32_t x671 = 734U;
	int8_t x672 = -1;
	int32_t t167 = 16326;

    t167 = ((x669==(x670!=x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = 3U;
	volatile int32_t x674 = 248836;
	int16_t x675 = INT16_MIN;
	volatile int64_t x676 = -1LL;

    t168 = ((x673==(x674!=x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	int16_t x678 = INT16_MIN;
	static int64_t x679 = -1LL;
	uint32_t x680 = 411636090U;
	static volatile int32_t t169 = 3012062;

    t169 = ((x677==(x678!=x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 1694322U;
	uint8_t x682 = UINT8_MAX;
	volatile int32_t x683 = 1;
	int16_t x684 = INT16_MAX;

    t170 = ((x681==(x682!=x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x685 = 26;
	uint16_t x686 = 2463U;
	int64_t x688 = INT64_MIN;
	int32_t t171 = -131;

    t171 = ((x685==(x686!=x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = UINT64_MAX;
	volatile uint8_t x690 = 42U;
	int32_t x692 = INT32_MIN;

    t172 = ((x689==(x690!=x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MAX;
	volatile int8_t x695 = -1;
	static int8_t x696 = INT8_MIN;
	static volatile int32_t t173 = 55675828;

    t173 = ((x693==(x694!=x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x699 = INT32_MAX;
	int32_t t174 = -543;

    t174 = ((x697==(x698!=x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x703 = INT64_MIN;
	volatile int32_t t175 = -42762;

    t175 = ((x701==(x702!=x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile int64_t x706 = INT64_MAX;
	uint16_t x707 = 3U;
	static int16_t x708 = INT16_MAX;
	static int32_t t176 = -5316203;

    t176 = ((x705==(x706!=x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -4073;
	int32_t x710 = INT32_MAX;
	uint32_t x711 = 13U;
	int8_t x712 = -45;
	int32_t t177 = 90787697;

    t177 = ((x709==(x710!=x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 33225939U;
	static uint32_t x714 = 845038075U;
	int16_t x716 = INT16_MAX;
	int32_t t178 = -6814;

    t178 = ((x713==(x714!=x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 8862;
	static int16_t x719 = INT16_MAX;
	volatile int64_t x720 = -895955699LL;

    t179 = ((x717==(x718!=x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	static volatile int32_t x722 = INT32_MIN;
	volatile int16_t x723 = -1;
	volatile int32_t t180 = -3573144;

    t180 = ((x721==(x722!=x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MIN;
	volatile int16_t x728 = INT16_MIN;

    t181 = ((x725==(x726!=x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = -1;
	int32_t x730 = INT32_MAX;
	volatile int64_t x731 = -1339285180190845867LL;
	static volatile int32_t x732 = INT32_MIN;
	int32_t t182 = -818603;

    t182 = ((x729==(x730!=x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	uint64_t x734 = UINT64_MAX;
	int16_t x736 = INT16_MAX;

    t183 = ((x733==(x734!=x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = 61589157264723222LL;
	uint32_t x738 = 2961U;
	int64_t x739 = -1LL;
	uint8_t x740 = UINT8_MAX;
	int32_t t184 = -85452;

    t184 = ((x737==(x738!=x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 43817;
	static int32_t x742 = -1;
	volatile int16_t x743 = INT16_MIN;
	volatile int32_t t185 = 0;

    t185 = ((x741==(x742!=x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	uint64_t x746 = 7571LLU;
	int64_t x747 = INT64_MIN;
	int32_t x748 = 0;
	volatile int32_t t186 = -6899677;

    t186 = ((x745==(x746!=x747))!=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = INT8_MIN;
	int64_t x750 = 78110LL;
	static volatile int64_t x751 = -69412309015590367LL;
	static volatile uint16_t x752 = UINT16_MAX;
	static int32_t t187 = 6319386;

    t187 = ((x749==(x750!=x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 11U;
	int16_t x754 = -1;
	static uint32_t x755 = UINT32_MAX;
	int32_t t188 = -21567;

    t188 = ((x753==(x754!=x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x758 = -1LL;
	uint16_t x759 = 968U;
	volatile int32_t t189 = 764622;

    t189 = ((x757==(x758!=x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 225LLU;
	uint16_t x762 = UINT16_MAX;
	uint32_t x763 = 106226U;
	int32_t x764 = INT32_MIN;
	volatile int32_t t190 = -1;

    t190 = ((x761==(x762!=x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = 6;
	uint64_t x767 = UINT64_MAX;
	int32_t x768 = -1;

    t191 = ((x765==(x766!=x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = 196;
	int8_t x770 = 11;
	volatile int16_t x771 = INT16_MAX;
	int8_t x772 = INT8_MAX;
	int32_t t192 = -86991449;

    t192 = ((x769==(x770!=x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MAX;
	int64_t x775 = -1232014LL;
	int8_t x776 = INT8_MIN;
	int32_t t193 = -949;

    t193 = ((x773==(x774!=x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	uint64_t x778 = UINT64_MAX;
	static int32_t x779 = 82756;
	static volatile uint8_t x780 = 20U;
	volatile int32_t t194 = 369523283;

    t194 = ((x777==(x778!=x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	int64_t x782 = INT64_MIN;
	static int64_t x783 = INT64_MIN;
	static int64_t x784 = -1LL;

    t195 = ((x781==(x782!=x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	uint64_t x786 = UINT64_MAX;
	int64_t x787 = 919870390870896LL;
	int32_t x788 = 321271;
	volatile int32_t t196 = 395781528;

    t196 = ((x785==(x786!=x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 17U;
	uint64_t x790 = 1LLU;

    t197 = ((x789==(x790!=x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x794 = INT8_MIN;
	static int64_t x796 = INT64_MIN;
	int32_t t198 = -2;

    t198 = ((x793==(x794!=x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 929U;
	int8_t x798 = INT8_MAX;
	uint8_t x799 = 6U;
	volatile int32_t x800 = INT32_MAX;
	static int32_t t199 = 78776;

    t199 = ((x797==(x798!=x799))!=x800);

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

