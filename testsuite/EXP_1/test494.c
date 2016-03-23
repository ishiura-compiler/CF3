
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

volatile int8_t x10 = INT8_MIN;
volatile int64_t x12 = INT64_MIN;
static volatile int32_t t2 = -25832452;
static int8_t x21 = -41;
volatile uint8_t x22 = 47U;
static volatile int64_t x24 = INT64_MAX;
static volatile uint64_t t5 = 8203241613131663LLU;
int8_t x30 = INT8_MAX;
static int16_t x36 = INT16_MIN;
uint64_t t8 = 24LLU;
uint64_t x41 = UINT64_MAX;
uint32_t x45 = 169U;
int8_t x48 = 52;
volatile int32_t t10 = 401;
volatile int64_t x52 = -1LL;
static uint8_t x60 = UINT8_MAX;
static uint64_t t14 = 205265144LLU;
static uint32_t x65 = 3619U;
volatile int8_t x66 = INT8_MIN;
uint64_t x77 = 15011088156875205LLU;
int8_t x81 = -1;
static volatile int32_t x84 = INT32_MAX;
static uint32_t x86 = UINT32_MAX;
volatile int32_t x95 = INT32_MIN;
uint64_t x100 = 84478828379276LLU;
uint16_t x105 = UINT16_MAX;
volatile int64_t x113 = -1LL;
int16_t x114 = INT16_MAX;
volatile uint8_t x116 = 95U;
uint64_t x118 = 855369358191725LLU;
int32_t x124 = -1;
static uint32_t x142 = 713075746U;
static uint64_t x144 = 49933498349LLU;
volatile uint64_t t32 = 3991LLU;
static volatile uint16_t x149 = 990U;
int32_t t34 = -1592;
uint32_t x158 = UINT32_MAX;
uint8_t x159 = UINT8_MAX;
uint8_t x167 = 117U;
static volatile uint32_t x171 = 7U;
uint64_t x177 = UINT64_MAX;
int16_t x187 = INT16_MAX;
uint64_t x215 = 797998016LLU;
int32_t t41 = 976535;
static int8_t x220 = INT8_MIN;
int64_t x223 = INT64_MIN;
int32_t x230 = INT32_MIN;
uint16_t x235 = 818U;
static int8_t x242 = 40;
volatile int8_t x247 = 0;
static int32_t t48 = 224911;
volatile int8_t x249 = INT8_MAX;
static uint64_t x252 = UINT64_MAX;
uint8_t x260 = UINT8_MAX;
uint32_t x274 = 1046333U;
int8_t x282 = 4;
static int32_t x284 = INT32_MIN;
static int8_t x286 = INT8_MAX;
static volatile int8_t x287 = INT8_MAX;
volatile uint64_t t56 = 77979741571LLU;
int16_t x289 = -1;
int8_t x297 = INT8_MIN;
int8_t x298 = INT8_MIN;
uint64_t x315 = 84199439858720658LLU;
int8_t x322 = -1;
int32_t x327 = INT32_MIN;
int64_t x331 = INT64_MIN;
volatile uint16_t x332 = 1951U;
volatile uint16_t x359 = 177U;
static uint32_t x361 = 1577251U;
int32_t x362 = 134665;
uint64_t x372 = UINT64_MAX;
int32_t x378 = -672;
int64_t x383 = 1LL;
int32_t x394 = -1787301;
volatile int64_t x407 = INT64_MAX;
uint16_t x413 = UINT16_MAX;
uint16_t x416 = 94U;
static int32_t t80 = -9964;
int8_t x419 = 6;
int16_t x420 = INT16_MAX;
volatile int32_t t84 = 61129315;
static uint16_t x433 = 3710U;
volatile int16_t x434 = -251;
int8_t x442 = 40;
uint64_t x443 = 11130251758147LLU;
static volatile int32_t t87 = -57742;
uint32_t x454 = 236674087U;
uint16_t x458 = 5451U;
int16_t x468 = -1;
volatile int32_t x472 = INT32_MAX;
uint64_t x475 = UINT64_MAX;
static uint64_t x479 = 370LLU;
int32_t x480 = -1;
uint8_t x482 = 0U;
int64_t x483 = 5414LL;
uint64_t x487 = 106862601089LLU;
int32_t t95 = -124252822;
int64_t x491 = 22102451LL;
uint32_t x492 = 7U;
int32_t t97 = 179;
static int32_t x503 = 106347418;
static uint16_t x505 = 8U;
int32_t x508 = INT32_MIN;
volatile int16_t x509 = INT16_MIN;
int8_t x512 = INT8_MAX;
int8_t x527 = INT8_MIN;
int8_t x528 = -1;
volatile uint32_t x539 = 300265U;
static uint64_t x541 = UINT64_MAX;
int8_t x547 = INT8_MAX;
uint64_t x565 = UINT64_MAX;
int16_t x566 = INT16_MIN;
int32_t x573 = INT32_MAX;
volatile int16_t x574 = -1;
int64_t x575 = INT64_MAX;
int16_t x578 = -1;
uint32_t x589 = 2146U;
uint32_t x591 = UINT32_MAX;
int32_t t116 = 40947;
static volatile int64_t x599 = INT64_MIN;
int16_t x600 = INT16_MIN;
int64_t x607 = -763773LL;
volatile int8_t x613 = -1;
static int8_t x614 = INT8_MIN;
int32_t t120 = -37965278;
int8_t x621 = -1;
int8_t x622 = INT8_MAX;
volatile int16_t x624 = INT16_MIN;
int8_t x645 = -26;
volatile int32_t t126 = -55;
int16_t x657 = INT16_MIN;
int64_t x667 = -1255114LL;
static int8_t x668 = INT8_MAX;
uint64_t x670 = 542812280503739447LLU;
volatile int16_t x672 = INT16_MAX;
int32_t t129 = 198881;
int32_t x678 = INT32_MAX;
uint64_t x685 = 15050720731993129LLU;
int8_t x687 = -1;
uint64_t x691 = 391935681791LLU;
volatile int32_t t133 = 1;
static int8_t x706 = -1;
volatile int32_t t136 = 109066;
int32_t t137 = -130241067;
uint8_t x728 = 1U;
int16_t x729 = -1;
uint8_t x735 = 2U;
uint8_t x736 = 2U;
uint32_t x737 = 0U;
static int16_t x739 = 14;
int16_t x740 = -1;
static volatile uint64_t x748 = 6LLU;
volatile uint64_t t142 = 210298878114470LLU;
static int32_t x754 = INT32_MIN;
volatile int64_t x757 = -1LL;
int16_t x760 = -1;
uint8_t x781 = UINT8_MAX;
int8_t x784 = -1;
int32_t x787 = 555;
volatile int32_t t150 = -791;
static volatile int64_t t152 = 94902748771613083LL;
int16_t x798 = INT16_MAX;
static int16_t x801 = INT16_MIN;
int8_t x805 = INT8_MIN;
int32_t x806 = -7;
int64_t t155 = -83LL;
uint32_t t156 = 27U;
volatile int32_t t158 = 16;
uint32_t x826 = 11183U;
uint32_t x834 = 12552914U;
static uint32_t t161 = 113842U;
static int16_t x840 = INT16_MIN;
int64_t x843 = INT64_MIN;
int16_t x844 = -1;
volatile int32_t t163 = -21;
int8_t x869 = 9;
uint64_t x884 = 778LLU;
volatile int64_t t167 = -1051051199LL;
int16_t x901 = INT16_MIN;
int16_t x912 = 4;
uint64_t x920 = 490378450725155292LLU;
int32_t t175 = 913872;
int64_t x936 = -1LL;
int64_t t177 = 976188407836LL;
static int64_t x943 = INT64_MAX;
int16_t x944 = INT16_MIN;
volatile int32_t t178 = -12;
static int16_t x952 = 57;
int32_t x961 = -1;
static int16_t x976 = INT16_MIN;
int64_t x987 = INT64_MAX;
uint8_t x990 = 30U;
volatile int16_t x996 = INT16_MIN;
volatile uint64_t x1018 = UINT64_MAX;
volatile uint32_t x1019 = UINT32_MAX;
int8_t x1021 = INT8_MAX;
int64_t x1023 = INT64_MAX;
static volatile uint32_t x1030 = 5093780U;
uint16_t x1034 = 59U;
int32_t x1040 = INT32_MAX;
volatile uint16_t x1047 = 2557U;
int64_t x1048 = -1LL;
int16_t x1051 = 0;
static int32_t t197 = -188;
int8_t x1053 = -1;
static volatile int32_t t198 = 0;
uint8_t x1058 = 37U;
volatile uint32_t t199 = 534U;


void f0(void) {
    	static uint64_t x5 = 9324335LLU;
	int16_t x6 = INT16_MIN;
	static volatile uint32_t x7 = 536U;
	int32_t x8 = -4162530;
	int32_t t0 = -88;

    t0 = (((x5*x6)==x7)/x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 252711121U;
	uint32_t x11 = UINT32_MAX;
	int64_t t1 = -31656978869LL;

    t1 = (((x9*x10)==x11)/x12);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = 27;
	int8_t x14 = 0;
	int8_t x15 = -1;
	volatile int8_t x16 = INT8_MAX;

    t2 = (((x13*x14)==x15)/x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MIN;
	volatile uint64_t x18 = 1800839699LLU;
	static volatile uint32_t x19 = 1685216U;
	int32_t x20 = INT32_MIN;
	int32_t t3 = -25554;

    t3 = (((x17*x18)==x19)/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x23 = INT8_MIN;
	volatile int64_t t4 = -31LL;

    t4 = (((x21*x22)==x23)/x24);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MAX;
	static uint16_t x26 = 1U;
	static int32_t x27 = INT32_MIN;
	static volatile uint64_t x28 = 1967177031978LLU;

    t5 = (((x25*x26)==x27)/x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = 13422344LL;
	uint32_t x31 = 1971417180U;
	volatile uint8_t x32 = 22U;
	int32_t t6 = -16;

    t6 = (((x29*x30)==x31)/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = UINT16_MAX;
	static uint32_t x34 = UINT32_MAX;
	int8_t x35 = 2;
	int32_t t7 = -76262222;

    t7 = (((x33*x34)==x35)/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 5279U;
	uint64_t x38 = 463LLU;
	volatile uint16_t x39 = 831U;
	volatile uint64_t x40 = 62527LLU;

    t8 = (((x37*x38)==x39)/x40);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = 44755U;
	uint32_t x43 = UINT32_MAX;
	static uint64_t x44 = 14LLU;
	uint64_t t9 = 8337539712399213LLU;

    t9 = (((x41*x42)==x43)/x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x46 = INT16_MAX;
	static int16_t x47 = INT16_MIN;

    t10 = (((x45*x46)==x47)/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = 7802200LL;
	int16_t x50 = INT16_MIN;
	volatile uint8_t x51 = UINT8_MAX;
	static volatile int64_t t11 = 1851616178579LL;

    t11 = (((x49*x50)==x51)/x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x54 = -1LL;
	int8_t x55 = -16;
	int16_t x56 = INT16_MAX;
	int32_t t12 = 0;

    t12 = (((x53*x54)==x55)/x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 797U;
	int32_t t13 = 3518;

    t13 = (((x57*x58)==x59)/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 3154U;
	uint16_t x62 = 6402U;
	static int64_t x63 = -16224LL;
	uint64_t x64 = 968121003867308LLU;

    t14 = (((x61*x62)==x63)/x64);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x67 = 18880221;
	int8_t x68 = 10;
	int32_t t15 = -23999;

    t15 = (((x65*x66)==x67)/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = INT8_MAX;
	volatile int16_t x74 = -1;
	uint16_t x75 = UINT16_MAX;
	volatile int64_t x76 = INT64_MAX;
	static volatile int64_t t16 = -19327412958591025LL;

    t16 = (((x73*x74)==x75)/x76);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x78 = UINT8_MAX;
	uint16_t x79 = 274U;
	static int64_t x80 = INT64_MIN;
	static volatile int64_t t17 = -4LL;

    t17 = (((x77*x78)==x79)/x80);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x82 = INT32_MAX;
	volatile uint64_t x83 = UINT64_MAX;
	int32_t t18 = -8;

    t18 = (((x81*x82)==x83)/x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = INT8_MAX;
	int8_t x87 = -1;
	static int8_t x88 = INT8_MAX;
	volatile int32_t t19 = -25280;

    t19 = (((x85*x86)==x87)/x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x93 = -1;
	int8_t x94 = -16;
	int8_t x96 = INT8_MIN;
	volatile int32_t t20 = -3;

    t20 = (((x93*x94)==x95)/x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x97 = 24U;
	uint64_t x98 = UINT64_MAX;
	uint64_t x99 = 1LLU;
	uint64_t t21 = 214066533360LLU;

    t21 = (((x97*x98)==x99)/x100);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x101 = 753;
	int8_t x102 = INT8_MIN;
	uint8_t x103 = 4U;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t22 = 180774676572218827LLU;

    t22 = (((x101*x102)==x103)/x104);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x106 = -1;
	int64_t x107 = -3915042019008167LL;
	uint8_t x108 = 43U;
	static int32_t t23 = 795816;

    t23 = (((x105*x106)==x107)/x108);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = 8U;
	static uint64_t x110 = UINT64_MAX;
	int64_t x111 = 1281482875LL;
	int32_t x112 = -1;
	static int32_t t24 = 6;

    t24 = (((x109*x110)==x111)/x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x115 = INT64_MIN;
	int32_t t25 = 748;

    t25 = (((x113*x114)==x115)/x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x117 = 242U;
	static int8_t x119 = INT8_MAX;
	uint8_t x120 = 2U;
	volatile int32_t t26 = -220132;

    t26 = (((x117*x118)==x119)/x120);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x121 = INT16_MIN;
	static int32_t x122 = -1;
	static volatile int16_t x123 = INT16_MAX;
	volatile int32_t t27 = 1058678295;

    t27 = (((x121*x122)==x123)/x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = INT8_MIN;
	int64_t x126 = 51890128927692LL;
	static volatile uint8_t x127 = 19U;
	static uint16_t x128 = 330U;
	volatile int32_t t28 = 813387719;

    t28 = (((x125*x126)==x127)/x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x129 = -195443816790256LL;
	int8_t x130 = INT8_MAX;
	uint16_t x131 = UINT16_MAX;
	volatile uint8_t x132 = 18U;
	volatile int32_t t29 = -3385;

    t29 = (((x129*x130)==x131)/x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x133 = 89LLU;
	uint32_t x134 = 298067090U;
	static volatile int8_t x135 = INT8_MIN;
	int64_t x136 = 4LL;
	int64_t t30 = -93LL;

    t30 = (((x133*x134)==x135)/x136);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MIN;
	volatile int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	int64_t x140 = -1LL;
	int64_t t31 = -13LL;

    t31 = (((x137*x138)==x139)/x140);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x141 = 0U;
	int8_t x143 = INT8_MAX;

    t32 = (((x141*x142)==x143)/x144);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = -1;
	volatile int64_t x146 = INT64_MAX;
	int16_t x147 = -1;
	static uint8_t x148 = UINT8_MAX;
	int32_t t33 = -2635788;

    t33 = (((x145*x146)==x147)/x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MIN;
	static int16_t x152 = INT16_MIN;

    t34 = (((x149*x150)==x151)/x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x157 = INT16_MIN;
	int64_t x160 = -1LL;
	volatile int64_t t35 = -2188308LL;

    t35 = (((x157*x158)==x159)/x160);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x165 = UINT32_MAX;
	static volatile int8_t x166 = INT8_MAX;
	int8_t x168 = -1;
	int32_t t36 = -137052;

    t36 = (((x165*x166)==x167)/x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = INT8_MIN;
	uint8_t x170 = 1U;
	static int32_t x172 = -46;
	volatile int32_t t37 = 760010;

    t37 = (((x169*x170)==x171)/x172);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x178 = INT64_MIN;
	uint32_t x179 = 49853U;
	static int8_t x180 = -1;
	int32_t t38 = 1;

    t38 = (((x177*x178)==x179)/x180);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = INT16_MAX;
	static int32_t x186 = 8936;
	int8_t x188 = INT8_MAX;
	int32_t t39 = -51;

    t39 = (((x185*x186)==x187)/x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x193 = 9U;
	volatile int32_t x194 = INT32_MAX;
	int32_t x195 = -25198704;
	static volatile int16_t x196 = INT16_MIN;
	int32_t t40 = 159131;

    t40 = (((x193*x194)==x195)/x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x213 = UINT8_MAX;
	static int16_t x214 = INT16_MAX;
	int32_t x216 = INT32_MIN;

    t41 = (((x213*x214)==x215)/x216);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x217 = 92142565LLU;
	int32_t x218 = 1;
	int8_t x219 = INT8_MAX;
	volatile int32_t t42 = 7856715;

    t42 = (((x217*x218)==x219)/x220);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x221 = INT8_MAX;
	static int16_t x222 = INT16_MAX;
	int32_t x224 = -1;
	volatile int32_t t43 = -1644;

    t43 = (((x221*x222)==x223)/x224);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x225 = 10380441;
	int64_t x226 = -14LL;
	static int8_t x227 = INT8_MIN;
	uint8_t x228 = 42U;
	static int32_t t44 = -204733;

    t44 = (((x225*x226)==x227)/x228);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x229 = -358989947LL;
	int8_t x231 = 62;
	int64_t x232 = INT64_MIN;
	static int64_t t45 = 0LL;

    t45 = (((x229*x230)==x231)/x232);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x233 = -1LL;
	static uint16_t x234 = UINT16_MAX;
	int8_t x236 = 62;
	int32_t t46 = 4;

    t46 = (((x233*x234)==x235)/x236);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x241 = UINT64_MAX;
	uint8_t x243 = 4U;
	uint64_t x244 = 113434LLU;
	uint64_t t47 = 3009420LLU;

    t47 = (((x241*x242)==x243)/x244);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x245 = -1LL;
	int16_t x246 = 877;
	int8_t x248 = INT8_MIN;

    t48 = (((x245*x246)==x247)/x248);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x250 = 0;
	int16_t x251 = INT16_MIN;
	volatile uint64_t t49 = 4356425LLU;

    t49 = (((x249*x250)==x251)/x252);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x253 = -1535557537056553LL;
	int16_t x254 = 592;
	volatile int64_t x255 = -2836924091518LL;
	volatile int64_t x256 = -1LL;
	int64_t t50 = -120LL;

    t50 = (((x253*x254)==x255)/x256);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x257 = -105;
	int64_t x258 = -11116LL;
	static int16_t x259 = -12444;
	int32_t t51 = -2421263;

    t51 = (((x257*x258)==x259)/x260);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x261 = 10861930LL;
	uint16_t x262 = UINT16_MAX;
	static uint16_t x263 = UINT16_MAX;
	uint8_t x264 = 1U;
	static int32_t t52 = 0;

    t52 = (((x261*x262)==x263)/x264);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x265 = INT32_MIN;
	volatile uint64_t x266 = 67687483421LLU;
	uint32_t x267 = UINT32_MAX;
	uint32_t x268 = UINT32_MAX;
	uint32_t t53 = 207989498U;

    t53 = (((x265*x266)==x267)/x268);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x273 = -64347;
	uint16_t x275 = 2U;
	int32_t x276 = INT32_MIN;
	int32_t t54 = 47709;

    t54 = (((x273*x274)==x275)/x276);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x281 = 18461LLU;
	volatile int32_t x283 = INT32_MIN;
	volatile int32_t t55 = -27;

    t55 = (((x281*x282)==x283)/x284);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x285 = 0U;
	volatile uint64_t x288 = 120LLU;

    t56 = (((x285*x286)==x287)/x288);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x290 = UINT64_MAX;
	static volatile uint16_t x291 = 14U;
	int16_t x292 = INT16_MIN;
	int32_t t57 = -1124;

    t57 = (((x289*x290)==x291)/x292);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MAX;
	static volatile int64_t t58 = 10580649145335LL;

    t58 = (((x297*x298)==x299)/x300);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x309 = INT16_MAX;
	uint16_t x310 = 24741U;
	uint8_t x311 = 20U;
	volatile int8_t x312 = -1;
	static int32_t t59 = -19412;

    t59 = (((x309*x310)==x311)/x312);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x313 = -11;
	static uint32_t x314 = 1347U;
	static int32_t x316 = -1;
	int32_t t60 = 20;

    t60 = (((x313*x314)==x315)/x316);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x317 = -45;
	int8_t x318 = -1;
	int64_t x319 = INT64_MAX;
	static uint8_t x320 = 97U;
	int32_t t61 = -4952054;

    t61 = (((x317*x318)==x319)/x320);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x321 = INT16_MIN;
	static int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MAX;
	volatile int32_t t62 = -2935062;

    t62 = (((x321*x322)==x323)/x324);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x325 = UINT32_MAX;
	int8_t x326 = 0;
	int8_t x328 = INT8_MIN;
	volatile int32_t t63 = -3246;

    t63 = (((x325*x326)==x327)/x328);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x329 = 1524U;
	int8_t x330 = INT8_MAX;
	static int32_t t64 = 9157;

    t64 = (((x329*x330)==x331)/x332);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = -1;
	volatile uint64_t x343 = UINT64_MAX;
	volatile int16_t x344 = -115;
	volatile int32_t t65 = 2911;

    t65 = (((x341*x342)==x343)/x344);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x349 = 59;
	static uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MIN;
	int16_t x352 = -808;
	static int32_t t66 = 820;

    t66 = (((x349*x350)==x351)/x352);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x357 = -1;
	static int8_t x358 = 7;
	int16_t x360 = INT16_MAX;
	int32_t t67 = 47981;

    t67 = (((x357*x358)==x359)/x360);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x363 = 12372U;
	uint8_t x364 = 12U;
	static volatile int32_t t68 = -2;

    t68 = (((x361*x362)==x363)/x364);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x369 = 15088U;
	uint16_t x370 = 1U;
	static uint16_t x371 = UINT16_MAX;
	static volatile uint64_t t69 = 172827032935LLU;

    t69 = (((x369*x370)==x371)/x372);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x373 = 11428U;
	static int8_t x374 = INT8_MAX;
	int8_t x375 = 2;
	int16_t x376 = 1;
	int32_t t70 = -624151;

    t70 = (((x373*x374)==x375)/x376);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x377 = -1;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = -1;
	int32_t t71 = 150;

    t71 = (((x377*x378)==x379)/x380);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x381 = -1LL;
	int8_t x382 = INT8_MIN;
	int8_t x384 = -1;
	volatile int32_t t72 = 1581541;

    t72 = (((x381*x382)==x383)/x384);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x385 = 7LLU;
	static uint32_t x386 = 3U;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	int32_t t73 = 22143;

    t73 = (((x385*x386)==x387)/x388);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x389 = 0U;
	uint32_t x390 = 185455U;
	uint8_t x391 = 60U;
	static uint32_t x392 = UINT32_MAX;
	uint32_t t74 = 1U;

    t74 = (((x389*x390)==x391)/x392);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x393 = 0;
	int16_t x395 = -1;
	static uint16_t x396 = UINT16_MAX;
	static volatile int32_t t75 = -80;

    t75 = (((x393*x394)==x395)/x396);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x397 = 5774137U;
	static int32_t x398 = -14653611;
	static int8_t x399 = INT8_MIN;
	static int64_t x400 = INT64_MAX;
	volatile int64_t t76 = 1LL;

    t76 = (((x397*x398)==x399)/x400);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x401 = -1;
	volatile uint16_t x402 = 16U;
	volatile int16_t x403 = -139;
	static volatile int32_t x404 = -1;
	volatile int32_t t77 = 24;

    t77 = (((x401*x402)==x403)/x404);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x405 = UINT32_MAX;
	int16_t x406 = INT16_MAX;
	volatile uint64_t x408 = 17789350652299305LLU;
	volatile uint64_t t78 = 8662168379239254LLU;

    t78 = (((x405*x406)==x407)/x408);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x409 = 1;
	volatile int32_t x410 = INT32_MIN;
	uint8_t x411 = 19U;
	int16_t x412 = 30;
	int32_t t79 = 0;

    t79 = (((x409*x410)==x411)/x412);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x414 = 6U;
	uint8_t x415 = UINT8_MAX;

    t80 = (((x413*x414)==x415)/x416);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x417 = INT64_MAX;
	static volatile uint64_t x418 = 101990707LLU;
	volatile int32_t t81 = 29;

    t81 = (((x417*x418)==x419)/x420);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x421 = 5U;
	static uint64_t x422 = 6883872868005058LLU;
	int64_t x423 = INT64_MIN;
	uint32_t x424 = 2077395393U;
	volatile uint32_t t82 = 276822343U;

    t82 = (((x421*x422)==x423)/x424);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x425 = UINT16_MAX;
	static int16_t x426 = INT16_MIN;
	uint8_t x427 = UINT8_MAX;
	volatile int64_t x428 = 202652642531505257LL;
	volatile int64_t t83 = 10780LL;

    t83 = (((x425*x426)==x427)/x428);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x429 = -15470;
	int8_t x430 = -1;
	int16_t x431 = INT16_MIN;
	static volatile int8_t x432 = INT8_MIN;

    t84 = (((x429*x430)==x431)/x432);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x435 = 40676750U;
	static int64_t x436 = INT64_MIN;
	static int64_t t85 = 452883LL;

    t85 = (((x433*x434)==x435)/x436);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x441 = 2208U;
	int16_t x444 = -1;
	int32_t t86 = 6985197;

    t86 = (((x441*x442)==x443)/x444);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x449 = -3013;
	volatile uint32_t x450 = 2U;
	int32_t x451 = -1;
	uint8_t x452 = 1U;

    t87 = (((x449*x450)==x451)/x452);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x453 = 1;
	static uint8_t x455 = 2U;
	uint8_t x456 = 6U;
	static int32_t t88 = -12916245;

    t88 = (((x453*x454)==x455)/x456);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x457 = 5420LLU;
	static volatile int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MAX;
	volatile int32_t t89 = -1469278;

    t89 = (((x457*x458)==x459)/x460);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x465 = 5257U;
	uint64_t x466 = 11LLU;
	uint16_t x467 = 21476U;
	int32_t t90 = 2085726;

    t90 = (((x465*x466)==x467)/x468);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x469 = 5;
	uint8_t x470 = UINT8_MAX;
	volatile uint16_t x471 = 46U;
	int32_t t91 = -31282;

    t91 = (((x469*x470)==x471)/x472);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x473 = 92U;
	uint64_t x474 = UINT64_MAX;
	int16_t x476 = INT16_MIN;
	volatile int32_t t92 = 78;

    t92 = (((x473*x474)==x475)/x476);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x477 = -7927;
	volatile int8_t x478 = -7;
	static volatile int32_t t93 = -6;

    t93 = (((x477*x478)==x479)/x480);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x481 = 0;
	uint32_t x484 = UINT32_MAX;
	volatile uint32_t t94 = 229880504U;

    t94 = (((x481*x482)==x483)/x484);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x485 = INT32_MIN;
	int64_t x486 = -12LL;
	int8_t x488 = INT8_MIN;

    t95 = (((x485*x486)==x487)/x488);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x489 = 52;
	int32_t x490 = -1;
	volatile uint32_t t96 = 16U;

    t96 = (((x489*x490)==x491)/x492);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x493 = 44U;
	static int16_t x494 = 1;
	static uint32_t x495 = 5878919U;
	uint8_t x496 = 3U;

    t97 = (((x493*x494)==x495)/x496);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x497 = 41U;
	uint32_t x498 = 6657613U;
	int16_t x499 = -1;
	static int16_t x500 = INT16_MAX;
	volatile int32_t t98 = 64753241;

    t98 = (((x497*x498)==x499)/x500);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x501 = -1;
	uint32_t x502 = 195U;
	int64_t x504 = INT64_MIN;
	volatile int64_t t99 = -3028654698024946LL;

    t99 = (((x501*x502)==x503)/x504);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x506 = INT8_MIN;
	volatile int32_t x507 = INT32_MAX;
	volatile int32_t t100 = 12549217;

    t100 = (((x505*x506)==x507)/x508);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x510 = 2U;
	volatile int32_t x511 = INT32_MIN;
	volatile int32_t t101 = -20856599;

    t101 = (((x509*x510)==x511)/x512);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x513 = INT8_MAX;
	uint16_t x514 = 596U;
	static uint8_t x515 = 31U;
	int32_t x516 = INT32_MIN;
	volatile int32_t t102 = 2116874;

    t102 = (((x513*x514)==x515)/x516);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x526 = 0;
	static volatile int32_t t103 = 1688428;

    t103 = (((x525*x526)==x527)/x528);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x533 = 2U;
	volatile uint8_t x534 = 23U;
	static volatile int8_t x535 = INT8_MIN;
	int8_t x536 = INT8_MIN;
	static int32_t t104 = 1077;

    t104 = (((x533*x534)==x535)/x536);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x537 = INT16_MIN;
	static volatile int8_t x538 = -1;
	static int32_t x540 = 53;
	static volatile int32_t t105 = -26169323;

    t105 = (((x537*x538)==x539)/x540);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x542 = 109250260;
	static volatile int16_t x543 = -8171;
	int32_t x544 = 28;
	int32_t t106 = 58;

    t106 = (((x541*x542)==x543)/x544);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x545 = -28;
	volatile uint16_t x546 = 2U;
	uint64_t x548 = 6435779630506LLU;
	static uint64_t t107 = 182657401643LLU;

    t107 = (((x545*x546)==x547)/x548);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x549 = 12792U;
	volatile int16_t x550 = INT16_MIN;
	uint64_t x551 = 7349679LLU;
	volatile uint16_t x552 = 14U;
	volatile int32_t t108 = 125165889;

    t108 = (((x549*x550)==x551)/x552);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x561 = INT32_MIN;
	volatile int64_t x562 = -7LL;
	int8_t x563 = INT8_MIN;
	volatile int16_t x564 = -1808;
	volatile int32_t t109 = 4223;

    t109 = (((x561*x562)==x563)/x564);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x567 = UINT64_MAX;
	int16_t x568 = -2;
	volatile int32_t t110 = 8939;

    t110 = (((x565*x566)==x567)/x568);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x569 = UINT16_MAX;
	int8_t x570 = -2;
	int16_t x571 = -1;
	int8_t x572 = INT8_MIN;
	int32_t t111 = -1338;

    t111 = (((x569*x570)==x571)/x572);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x576 = -90890058;
	volatile int32_t t112 = 114;

    t112 = (((x573*x574)==x575)/x576);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x577 = 2469666U;
	uint16_t x579 = UINT16_MAX;
	volatile uint32_t x580 = 710467225U;
	volatile uint32_t t113 = 70594361U;

    t113 = (((x577*x578)==x579)/x580);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x585 = -1;
	int64_t x586 = -1LL;
	uint64_t x587 = 205286LLU;
	static int8_t x588 = -1;
	volatile int32_t t114 = 26913;

    t114 = (((x585*x586)==x587)/x588);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x590 = INT16_MIN;
	int32_t x592 = INT32_MAX;
	int32_t t115 = 110884285;

    t115 = (((x589*x590)==x591)/x592);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x593 = INT32_MAX;
	uint32_t x594 = 0U;
	int64_t x595 = -6178932LL;
	int32_t x596 = -1;

    t116 = (((x593*x594)==x595)/x596);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x597 = 5U;
	static volatile uint16_t x598 = 3U;
	int32_t t117 = 3;

    t117 = (((x597*x598)==x599)/x600);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x605 = 19136U;
	uint64_t x606 = 409008LLU;
	int64_t x608 = INT64_MIN;
	volatile int64_t t118 = -63460575887LL;

    t118 = (((x605*x606)==x607)/x608);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x609 = 1U;
	int8_t x610 = INT8_MIN;
	static uint64_t x611 = UINT64_MAX;
	int64_t x612 = INT64_MAX;
	volatile int64_t t119 = 106089LL;

    t119 = (((x609*x610)==x611)/x612);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x615 = INT8_MIN;
	int8_t x616 = 13;

    t120 = (((x613*x614)==x615)/x616);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x617 = -2937;
	int8_t x618 = 0;
	int32_t x619 = INT32_MAX;
	int32_t x620 = -71;
	int32_t t121 = 272716638;

    t121 = (((x617*x618)==x619)/x620);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x623 = 499596U;
	volatile int32_t t122 = -13543522;

    t122 = (((x621*x622)==x623)/x624);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x629 = UINT64_MAX;
	uint16_t x630 = UINT16_MAX;
	volatile int8_t x631 = INT8_MIN;
	int32_t x632 = 28;
	int32_t t123 = 146;

    t123 = (((x629*x630)==x631)/x632);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x633 = -1LL;
	volatile int16_t x634 = INT16_MIN;
	int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MIN;
	int32_t t124 = 1;

    t124 = (((x633*x634)==x635)/x636);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x637 = INT8_MAX;
	static int16_t x638 = 5;
	volatile uint16_t x639 = 664U;
	int8_t x640 = -1;
	volatile int32_t t125 = 2183842;

    t125 = (((x637*x638)==x639)/x640);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x646 = UINT32_MAX;
	int8_t x647 = INT8_MIN;
	static int32_t x648 = -98;

    t126 = (((x645*x646)==x647)/x648);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x658 = INT16_MAX;
	volatile uint8_t x659 = UINT8_MAX;
	static int8_t x660 = INT8_MIN;
	static volatile int32_t t127 = 921319;

    t127 = (((x657*x658)==x659)/x660);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x665 = 1;
	volatile uint8_t x666 = UINT8_MAX;
	int32_t t128 = 1786401;

    t128 = (((x665*x666)==x667)/x668);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x669 = 1;
	int64_t x671 = -1LL;

    t129 = (((x669*x670)==x671)/x672);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x673 = INT8_MIN;
	int64_t x674 = 387327LL;
	int32_t x675 = -1;
	static uint64_t x676 = 262786041217302251LLU;
	uint64_t t130 = 1453516246964967676LLU;

    t130 = (((x673*x674)==x675)/x676);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x677 = UINT32_MAX;
	int8_t x679 = INT8_MIN;
	volatile uint16_t x680 = 862U;
	int32_t t131 = -478678;

    t131 = (((x677*x678)==x679)/x680);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x686 = 122LLU;
	int8_t x688 = 4;
	volatile int32_t t132 = 47409;

    t132 = (((x685*x686)==x687)/x688);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x689 = 860U;
	static int32_t x690 = 2012362;
	int32_t x692 = INT32_MIN;

    t133 = (((x689*x690)==x691)/x692);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x697 = 699U;
	int64_t x698 = -1LL;
	volatile int64_t x699 = INT64_MIN;
	static int8_t x700 = INT8_MAX;
	int32_t t134 = 665;

    t134 = (((x697*x698)==x699)/x700);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x701 = INT16_MIN;
	uint64_t x702 = 13481708649802353LLU;
	int32_t x703 = INT32_MIN;
	int32_t x704 = INT32_MIN;
	volatile int32_t t135 = 152973671;

    t135 = (((x701*x702)==x703)/x704);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x705 = 53089LL;
	int8_t x707 = INT8_MIN;
	volatile int16_t x708 = -1;

    t136 = (((x705*x706)==x707)/x708);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x717 = 322;
	int32_t x718 = -1;
	volatile int64_t x719 = 927635755LL;
	static int8_t x720 = -1;

    t137 = (((x717*x718)==x719)/x720);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x725 = INT8_MIN;
	static int8_t x726 = INT8_MIN;
	int64_t x727 = -2659564933LL;
	volatile int32_t t138 = 334;

    t138 = (((x725*x726)==x727)/x728);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x730 = UINT64_MAX;
	int8_t x731 = -1;
	int16_t x732 = INT16_MIN;
	int32_t t139 = 330743844;

    t139 = (((x729*x730)==x731)/x732);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x733 = INT8_MIN;
	uint16_t x734 = UINT16_MAX;
	static int32_t t140 = 1666;

    t140 = (((x733*x734)==x735)/x736);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x738 = 48536172905332202LLU;
	volatile int32_t t141 = -235981;

    t141 = (((x737*x738)==x739)/x740);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x745 = 2;
	uint64_t x746 = 11293156820712475LLU;
	volatile int32_t x747 = INT32_MIN;

    t142 = (((x745*x746)==x747)/x748);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x749 = 3405612381608807583LLU;
	int32_t x750 = INT32_MIN;
	static int16_t x751 = INT16_MIN;
	uint8_t x752 = 22U;
	volatile int32_t t143 = 12818;

    t143 = (((x749*x750)==x751)/x752);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x753 = 4925424LLU;
	static volatile int8_t x755 = INT8_MIN;
	static int16_t x756 = INT16_MIN;
	static int32_t t144 = -1;

    t144 = (((x753*x754)==x755)/x756);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x758 = 37203LL;
	static int64_t x759 = -29293834872LL;
	volatile int32_t t145 = -6802;

    t145 = (((x757*x758)==x759)/x760);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x761 = UINT64_MAX;
	volatile int64_t x762 = -478LL;
	int32_t x763 = -944555;
	int32_t x764 = -175860;
	static volatile int32_t t146 = 21541;

    t146 = (((x761*x762)==x763)/x764);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x773 = 180LLU;
	static volatile int8_t x774 = 0;
	int16_t x775 = -1;
	int8_t x776 = -1;
	int32_t t147 = -42982700;

    t147 = (((x773*x774)==x775)/x776);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x777 = -28;
	uint16_t x778 = 17U;
	volatile int8_t x779 = -1;
	uint32_t x780 = 894544642U;
	static uint32_t t148 = 724U;

    t148 = (((x777*x778)==x779)/x780);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x782 = UINT32_MAX;
	static uint8_t x783 = 28U;
	volatile int32_t t149 = -163055316;

    t149 = (((x781*x782)==x783)/x784);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x785 = -1;
	uint8_t x786 = UINT8_MAX;
	uint16_t x788 = 4814U;

    t150 = (((x785*x786)==x787)/x788);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x789 = 121U;
	int16_t x790 = -3590;
	int16_t x791 = -1;
	volatile int64_t x792 = INT64_MAX;
	int64_t t151 = 65352045062173667LL;

    t151 = (((x789*x790)==x791)/x792);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x793 = 111U;
	uint64_t x794 = 29919232LLU;
	static int16_t x795 = INT16_MIN;
	int64_t x796 = 81175LL;

    t152 = (((x793*x794)==x795)/x796);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x797 = -1;
	int8_t x799 = INT8_MAX;
	static int16_t x800 = INT16_MIN;
	int32_t t153 = -627;

    t153 = (((x797*x798)==x799)/x800);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x802 = 104U;
	volatile int32_t x803 = INT32_MAX;
	int16_t x804 = 6;
	static volatile int32_t t154 = 136;

    t154 = (((x801*x802)==x803)/x804);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x807 = 232602920957LL;
	int64_t x808 = INT64_MAX;

    t155 = (((x805*x806)==x807)/x808);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x809 = INT8_MAX;
	int16_t x810 = 968;
	uint8_t x811 = UINT8_MAX;
	volatile uint32_t x812 = UINT32_MAX;

    t156 = (((x809*x810)==x811)/x812);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x813 = 279LLU;
	int32_t x814 = 68;
	uint8_t x815 = UINT8_MAX;
	int8_t x816 = -1;
	int32_t t157 = -6926165;

    t157 = (((x813*x814)==x815)/x816);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x817 = -178586088844740386LL;
	volatile int8_t x818 = -1;
	int16_t x819 = INT16_MAX;
	uint8_t x820 = UINT8_MAX;

    t158 = (((x817*x818)==x819)/x820);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x825 = -17;
	static uint64_t x827 = 186137800LLU;
	int64_t x828 = INT64_MAX;
	int64_t t159 = -131725421951430LL;

    t159 = (((x825*x826)==x827)/x828);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x829 = -4;
	volatile int8_t x830 = INT8_MIN;
	int64_t x831 = -1LL;
	static int16_t x832 = INT16_MIN;
	static volatile int32_t t160 = 530900581;

    t160 = (((x829*x830)==x831)/x832);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x833 = -1;
	static int16_t x835 = INT16_MAX;
	uint32_t x836 = 1U;

    t161 = (((x833*x834)==x835)/x836);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x837 = 25;
	int8_t x838 = INT8_MIN;
	int8_t x839 = -1;
	int32_t t162 = -5;

    t162 = (((x837*x838)==x839)/x840);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x841 = UINT16_MAX;
	int64_t x842 = -1LL;

    t163 = (((x841*x842)==x843)/x844);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x849 = 13970U;
	int16_t x850 = INT16_MAX;
	int64_t x851 = 781778990643LL;
	int32_t x852 = 762463331;
	static volatile int32_t t164 = 5;

    t164 = (((x849*x850)==x851)/x852);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x870 = -19;
	uint8_t x871 = 29U;
	int64_t x872 = -13380678936LL;
	int64_t t165 = 15781637505138LL;

    t165 = (((x869*x870)==x871)/x872);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x881 = 835172LLU;
	uint8_t x882 = UINT8_MAX;
	static volatile int16_t x883 = -1;
	uint64_t t166 = 262750197911949LLU;

    t166 = (((x881*x882)==x883)/x884);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x885 = -1;
	uint16_t x886 = 1U;
	volatile int32_t x887 = -5649896;
	int64_t x888 = 1032331LL;

    t167 = (((x885*x886)==x887)/x888);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x889 = INT8_MIN;
	uint64_t x890 = 113487138LLU;
	static int16_t x891 = INT16_MIN;
	uint32_t x892 = 354U;
	uint32_t t168 = 2677103U;

    t168 = (((x889*x890)==x891)/x892);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x893 = 182U;
	uint64_t x894 = UINT64_MAX;
	volatile int16_t x895 = INT16_MIN;
	volatile uint8_t x896 = 18U;
	int32_t t169 = -18;

    t169 = (((x893*x894)==x895)/x896);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x902 = INT16_MIN;
	uint8_t x903 = UINT8_MAX;
	volatile int64_t x904 = -147829534795LL;
	static volatile int64_t t170 = -573854013870320789LL;

    t170 = (((x901*x902)==x903)/x904);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x905 = INT16_MIN;
	uint16_t x906 = 14484U;
	uint32_t x907 = 59075U;
	int8_t x908 = -1;
	static int32_t t171 = -56217;

    t171 = (((x905*x906)==x907)/x908);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x909 = INT8_MIN;
	volatile int16_t x910 = -1;
	int64_t x911 = INT64_MAX;
	int32_t t172 = 7365;

    t172 = (((x909*x910)==x911)/x912);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x917 = 90U;
	int32_t x918 = -869;
	uint8_t x919 = 1U;
	static volatile uint64_t t173 = 12LLU;

    t173 = (((x917*x918)==x919)/x920);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x921 = -8298;
	int16_t x922 = INT16_MIN;
	int8_t x923 = 1;
	int32_t x924 = INT32_MAX;
	volatile int32_t t174 = 2045;

    t174 = (((x921*x922)==x923)/x924);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x925 = -326LL;
	uint8_t x926 = 1U;
	int8_t x927 = 28;
	volatile int16_t x928 = INT16_MIN;

    t175 = (((x925*x926)==x927)/x928);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x929 = 48U;
	int16_t x930 = -147;
	static int16_t x931 = -1;
	uint8_t x932 = 20U;
	volatile int32_t t176 = -339842;

    t176 = (((x929*x930)==x931)/x932);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x933 = 199;
	uint64_t x934 = UINT64_MAX;
	int32_t x935 = INT32_MIN;

    t177 = (((x933*x934)==x935)/x936);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x941 = INT8_MIN;
	static int8_t x942 = INT8_MAX;

    t178 = (((x941*x942)==x943)/x944);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x945 = 37381737U;
	uint16_t x946 = UINT16_MAX;
	int32_t x947 = INT32_MIN;
	static uint8_t x948 = UINT8_MAX;
	volatile int32_t t179 = -6474976;

    t179 = (((x945*x946)==x947)/x948);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x949 = 1;
	uint32_t x950 = 240U;
	uint64_t x951 = UINT64_MAX;
	int32_t t180 = 757444;

    t180 = (((x949*x950)==x951)/x952);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x962 = 186199U;
	int32_t x963 = -1;
	int16_t x964 = INT16_MIN;
	volatile int32_t t181 = 4696;

    t181 = (((x961*x962)==x963)/x964);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x969 = 8;
	volatile int8_t x970 = 10;
	static uint16_t x971 = UINT16_MAX;
	int16_t x972 = INT16_MIN;
	volatile int32_t t182 = -7;

    t182 = (((x969*x970)==x971)/x972);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x973 = -1;
	uint8_t x974 = UINT8_MAX;
	int32_t x975 = -1;
	volatile int32_t t183 = -2;

    t183 = (((x973*x974)==x975)/x976);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x985 = UINT16_MAX;
	static int16_t x986 = -1;
	volatile int16_t x988 = INT16_MIN;
	int32_t t184 = 131723;

    t184 = (((x985*x986)==x987)/x988);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x989 = UINT8_MAX;
	int64_t x991 = 15025350627038LL;
	int32_t x992 = -1144;
	volatile int32_t t185 = -2472752;

    t185 = (((x989*x990)==x991)/x992);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x993 = INT8_MAX;
	int64_t x994 = -1LL;
	int8_t x995 = INT8_MIN;
	int32_t t186 = 560217748;

    t186 = (((x993*x994)==x995)/x996);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x997 = INT8_MIN;
	int16_t x998 = -1;
	volatile uint8_t x999 = UINT8_MAX;
	int8_t x1000 = 1;
	int32_t t187 = 12147;

    t187 = (((x997*x998)==x999)/x1000);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1001 = 235U;
	uint16_t x1002 = 0U;
	uint32_t x1003 = UINT32_MAX;
	int8_t x1004 = INT8_MIN;
	volatile int32_t t188 = -2;

    t188 = (((x1001*x1002)==x1003)/x1004);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1005 = -1;
	int32_t x1006 = -1;
	volatile uint16_t x1007 = UINT16_MAX;
	volatile uint32_t x1008 = 2301U;
	uint32_t t189 = 707770320U;

    t189 = (((x1005*x1006)==x1007)/x1008);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1017 = 14369644181095517LL;
	int8_t x1020 = -51;
	static volatile int32_t t190 = 1945;

    t190 = (((x1017*x1018)==x1019)/x1020);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1022 = -3489787;
	static int8_t x1024 = -1;
	static int32_t t191 = -604965;

    t191 = (((x1021*x1022)==x1023)/x1024);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1025 = INT16_MAX;
	int16_t x1026 = INT16_MIN;
	static volatile int32_t x1027 = INT32_MIN;
	volatile int32_t x1028 = INT32_MIN;
	volatile int32_t t192 = 15178;

    t192 = (((x1025*x1026)==x1027)/x1028);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1029 = -1;
	int64_t x1031 = -1LL;
	uint32_t x1032 = 5855993U;
	static uint32_t t193 = 304U;

    t193 = (((x1029*x1030)==x1031)/x1032);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x1033 = 3698;
	static volatile uint16_t x1035 = 17U;
	int16_t x1036 = INT16_MIN;
	volatile int32_t t194 = 4080330;

    t194 = (((x1033*x1034)==x1035)/x1036);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1037 = -1;
	int8_t x1038 = 45;
	volatile int64_t x1039 = INT64_MIN;
	volatile int32_t t195 = -55478;

    t195 = (((x1037*x1038)==x1039)/x1040);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1045 = -12;
	int32_t x1046 = 4;
	volatile int64_t t196 = -167494LL;

    t196 = (((x1045*x1046)==x1047)/x1048);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1049 = 143898580891563417LL;
	static int8_t x1050 = -1;
	volatile uint16_t x1052 = 1U;

    t197 = (((x1049*x1050)==x1051)/x1052);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1054 = 15378U;
	int32_t x1055 = -888;
	int32_t x1056 = 2169388;

    t198 = (((x1053*x1054)==x1055)/x1056);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1057 = -1;
	uint16_t x1059 = 716U;
	volatile uint32_t x1060 = 9241540U;

    t199 = (((x1057*x1058)==x1059)/x1060);

    if (t199 != 0U) { NG(); } else { ; }
	
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

