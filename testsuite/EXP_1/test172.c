
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

int8_t x5 = 1;
int16_t x6 = INT16_MIN;
volatile uint32_t x11 = UINT32_MAX;
int8_t x18 = 1;
int16_t x23 = INT16_MIN;
static int64_t x26 = -1LL;
volatile int32_t t8 = -745;
int8_t x48 = 1;
uint8_t x58 = 3U;
static volatile int16_t x62 = INT16_MAX;
uint32_t x66 = 2505U;
static int64_t x71 = 1646202570LL;
volatile uint32_t x74 = UINT32_MAX;
int16_t x75 = INT16_MAX;
static volatile int32_t x78 = INT32_MIN;
int64_t x79 = INT64_MIN;
int64_t x94 = -19770LL;
int64_t t20 = 17LL;
static volatile int64_t x113 = 402084484122982LL;
volatile int64_t t24 = 51292847589673368LL;
static int64_t x118 = -188269354148599780LL;
uint64_t t26 = 26495LLU;
int8_t x130 = 1;
uint8_t x137 = 12U;
uint32_t x139 = 2143877922U;
uint64_t x147 = UINT64_MAX;
uint16_t x162 = 1379U;
uint64_t x180 = 799177406LLU;
volatile uint64_t t37 = 12193LLU;
int16_t x192 = INT16_MAX;
int8_t x203 = -1;
int8_t x214 = INT8_MIN;
static uint64_t t45 = 1026891250LLU;
int32_t x222 = 34620;
volatile uint64_t t48 = 1094LLU;
static int8_t x238 = -5;
int8_t x242 = -6;
int16_t x256 = INT16_MAX;
int8_t x259 = INT8_MAX;
static int8_t x262 = -2;
volatile int64_t t58 = 47066814835LL;
uint8_t x276 = 3U;
static int8_t x280 = -1;
static int32_t x285 = 9;
int8_t x290 = -1;
int16_t x291 = INT16_MAX;
uint64_t t62 = 79LLU;
uint64_t t63 = 113LLU;
volatile int16_t x300 = INT16_MIN;
int32_t t64 = 176;
static int64_t x302 = -1LL;
volatile int32_t x303 = INT32_MIN;
static volatile int64_t x308 = INT64_MIN;
uint64_t t66 = 243074LLU;
static volatile uint64_t t67 = 116918355977129520LLU;
int64_t x328 = INT64_MIN;
volatile uint64_t x331 = 1506109848404314LLU;
static int32_t x332 = INT32_MIN;
volatile int16_t x333 = INT16_MAX;
static int16_t x334 = INT16_MAX;
static uint32_t x347 = UINT32_MAX;
int64_t t72 = 907590553832834LL;
int64_t t73 = -605093085094398LL;
volatile int32_t x361 = 0;
uint16_t x362 = 0U;
int64_t t76 = 827263259160682194LL;
uint32_t t77 = 249U;
int8_t x373 = 1;
int32_t x380 = INT32_MIN;
volatile int8_t x381 = INT8_MIN;
int16_t x384 = INT16_MAX;
uint32_t x394 = 317U;
volatile int8_t x395 = -1;
static volatile uint32_t t82 = 891U;
static uint16_t x397 = UINT16_MAX;
uint64_t x399 = 7LLU;
int64_t x400 = 78869229LL;
int16_t x402 = -11871;
uint16_t x404 = UINT16_MAX;
uint64_t x408 = UINT64_MAX;
static int64_t x412 = -1LL;
static int16_t x420 = -1;
static uint64_t t88 = 16600974703311618LLU;
int16_t x427 = 46;
uint16_t x429 = 1U;
int64_t x443 = -3908049001LL;
volatile int32_t x449 = INT32_MIN;
static volatile uint8_t x450 = 47U;
int64_t x453 = 376006527439LL;
static volatile int64_t t98 = 375235255493838368LL;
volatile uint64_t t99 = 3069LLU;
static int16_t x479 = INT16_MAX;
int16_t x481 = -14;
int64_t t101 = 71552262597555LL;
int8_t x485 = INT8_MIN;
uint16_t x486 = 121U;
static int32_t t102 = 14834;
int8_t x493 = -1;
int16_t x497 = 42;
volatile uint16_t x503 = UINT16_MAX;
int16_t x509 = INT16_MAX;
int64_t x515 = -7942516257024LL;
int64_t t108 = 1LL;
int32_t x517 = -41816283;
int32_t x531 = INT32_MAX;
int64_t x543 = INT64_MIN;
volatile int64_t t113 = 1099764396492868LL;
uint16_t x545 = 39U;
uint8_t x566 = UINT8_MAX;
volatile int8_t x568 = INT8_MAX;
int32_t x571 = INT32_MIN;
int64_t x575 = -1LL;
uint64_t t119 = 491447992867LLU;
volatile int8_t x578 = -20;
int64_t x584 = -1LL;
volatile int16_t x616 = INT16_MAX;
static int64_t t124 = -8601775656524156LL;
int64_t x622 = INT64_MIN;
static int64_t x623 = INT64_MIN;
static int64_t x634 = INT64_MIN;
volatile int16_t x641 = INT16_MAX;
static int16_t x642 = INT16_MAX;
int64_t x644 = -46LL;
uint8_t x646 = 1U;
int32_t x647 = -14631844;
volatile int32_t x650 = -919072;
int64_t x655 = -1LL;
static int16_t x656 = -1;
static volatile int64_t t134 = -4509991129816319311LL;
int32_t x666 = -1;
int8_t x668 = INT8_MIN;
volatile int8_t x673 = INT8_MAX;
int64_t t136 = 33970816067070183LL;
int32_t x682 = -1;
static int8_t x683 = 0;
volatile int32_t x688 = -1;
volatile int64_t t138 = -1714LL;
uint16_t x692 = 24U;
int16_t x697 = INT16_MAX;
int8_t x700 = -1;
static volatile int16_t x701 = INT16_MAX;
int64_t x707 = INT64_MAX;
static volatile int16_t x727 = INT16_MIN;
static int16_t x735 = INT16_MAX;
static int64_t t146 = -661031072924572801LL;
int32_t x739 = 1;
volatile int64_t t147 = 11154843929LL;
int64_t x741 = -1LL;
int64_t x744 = INT64_MIN;
int64_t t148 = 32LL;
static uint8_t x750 = 15U;
volatile uint64_t t150 = 13407928370355LLU;
static int32_t x754 = -1;
static uint64_t t153 = 168201154681531664LLU;
int16_t x769 = INT16_MIN;
volatile int8_t x774 = -10;
int64_t x778 = INT64_MAX;
int64_t t157 = -2455370LL;
uint32_t x791 = 5U;
int8_t x792 = INT8_MAX;
static uint16_t x793 = UINT16_MAX;
volatile uint8_t x801 = UINT8_MAX;
static int64_t x807 = INT64_MAX;
static int16_t x812 = INT16_MIN;
int8_t x815 = -1;
int64_t x819 = INT64_MAX;
int16_t x823 = INT16_MAX;
int64_t t167 = 150LL;
static uint64_t x826 = 3733LLU;
volatile int8_t x834 = 6;
int8_t x846 = 9;
int32_t x850 = 1693992;
uint32_t x851 = 51U;
uint32_t x859 = 191184753U;
uint64_t x874 = 10416LLU;
int32_t x878 = INT32_MIN;
volatile int32_t x886 = INT32_MAX;
uint8_t x888 = 14U;
uint16_t x890 = 18U;
uint64_t x891 = 261700100240278LLU;
int16_t x894 = INT16_MAX;
static uint16_t x903 = UINT16_MAX;
static uint8_t x908 = 3U;
static int8_t x912 = INT8_MIN;
volatile int64_t t187 = 1145LL;
uint8_t x914 = 8U;
int8_t x915 = 21;
int32_t x918 = -1;
volatile uint32_t x920 = 26U;
uint32_t t189 = 3807U;
static volatile uint16_t x924 = 1952U;
int32_t x933 = -27843;
volatile uint64_t x945 = 1138348LLU;
uint8_t x951 = 37U;
volatile uint64_t x956 = UINT64_MAX;
int64_t x957 = INT64_MIN;
static volatile int64_t t197 = -1237005206053752820LL;
uint8_t x961 = UINT8_MAX;
uint32_t x964 = UINT32_MAX;
uint64_t x968 = 21989450LLU;


void f0(void) {
    	volatile uint16_t x1 = UINT16_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	uint32_t x3 = UINT32_MAX;
	static uint8_t x4 = 29U;
	uint32_t t0 = 203586255U;

    t0 = (((x1+x2)|x3)/x4);

    if (t0 != 148102320U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x7 = INT64_MIN;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 560455133LL;

    t1 = (((x5+x6)|x7)/x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 13993560170645355LLU;
	int64_t x10 = 242540742LL;
	int32_t x12 = -2;
	volatile uint64_t t2 = 4283160795438732728LLU;

    t2 = (((x9+x10)|x11)/x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 1U;
	static int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MIN;
	static int8_t x16 = INT8_MAX;
	int32_t t3 = 4369019;

    t3 = (((x13+x14)|x15)/x16);

    if (t3 != -258) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	static uint8_t x20 = UINT8_MAX;
	int64_t t4 = 235315556281632LL;

    t4 = (((x17+x18)|x19)/x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 201536681616LLU;
	static volatile int32_t x22 = INT32_MIN;
	int32_t x24 = INT32_MIN;
	static volatile uint64_t t5 = 3900801163667043LLU;

    t5 = (((x21+x22)|x23)/x24);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int8_t x27 = INT8_MIN;
	static int8_t x28 = -2;
	int64_t t6 = -298793LL;

    t6 = (((x25+x26)|x27)/x28);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 1LL;
	int32_t x30 = INT32_MIN;
	int64_t x31 = 191672410158LL;
	int32_t x32 = INT32_MIN;
	int64_t t7 = 1665584060919792785LL;

    t7 = (((x29+x30)|x31)/x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	int16_t x38 = -1507;
	int8_t x39 = -1;
	static int8_t x40 = 1;

    t8 = (((x37+x38)|x39)/x40);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x45 = 3U;
	static int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	uint32_t t9 = 81364U;

    t9 = (((x45+x46)|x47)/x48);

    if (t9 != 4294967171U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = UINT16_MAX;
	volatile int64_t x50 = INT64_MIN;
	uint8_t x51 = UINT8_MAX;
	static uint32_t x52 = UINT32_MAX;
	int64_t t10 = -2813804LL;

    t10 = (((x49+x50)|x51)/x52);

    if (t10 != -2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = UINT16_MAX;
	int32_t x54 = -115;
	volatile int16_t x55 = INT16_MAX;
	int64_t x56 = INT64_MIN;
	volatile int64_t t11 = -336793LL;

    t11 = (((x53+x54)|x55)/x56);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x57 = 75U;
	int64_t x59 = -2776LL;
	static volatile uint16_t x60 = 11362U;
	volatile int64_t t12 = 6784LL;

    t12 = (((x57+x58)|x59)/x60);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MIN;
	uint64_t x63 = 2414441442LLU;
	static int64_t x64 = 36LL;
	uint64_t t13 = 162LLU;

    t13 = (((x61+x62)|x63)/x64);

    if (t13 != 512409557550806357LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x65 = INT64_MIN;
	uint64_t x67 = 415LLU;
	static int16_t x68 = INT16_MIN;
	static uint64_t t14 = 236700228LLU;

    t14 = (((x65+x66)|x67)/x68);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = -1;
	int8_t x70 = INT8_MIN;
	int8_t x72 = -1;
	int64_t t15 = 41586LL;

    t15 = (((x69+x70)|x71)/x72);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = UINT8_MAX;
	uint64_t x76 = UINT64_MAX;
	uint64_t t16 = 13463919448193642LLU;

    t16 = (((x73+x74)|x75)/x76);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x77 = UINT8_MAX;
	uint64_t x80 = 135104603025LLU;
	volatile uint64_t t17 = 537844LLU;

    t17 = (((x77+x78)|x79)/x80);

    if (t17 != 136536754LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = -407699022;
	uint64_t x86 = UINT64_MAX;
	static uint32_t x87 = 7U;
	uint16_t x88 = UINT16_MAX;
	uint64_t t18 = 212588322LLU;

    t18 = (((x85+x86)|x87)/x88);

    if (t18 != 281479271737267LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = 3820;
	int8_t x90 = 16;
	int16_t x91 = -4785;
	volatile uint16_t x92 = 169U;
	static int32_t t19 = 496575564;

    t19 = (((x89+x90)|x91)/x92);

    if (t19 != -24) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x93 = -1;
	volatile uint32_t x95 = 2721091U;
	int32_t x96 = INT32_MIN;

    t20 = (((x93+x94)|x95)/x96);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x101 = 195914331LL;
	static int32_t x102 = INT32_MIN;
	int64_t x103 = -1LL;
	volatile int32_t x104 = -438450;
	int64_t t21 = -391111LL;

    t21 = (((x101+x102)|x103)/x104);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = INT16_MIN;
	volatile int8_t x106 = 7;
	volatile int64_t x107 = -1004452LL;
	uint8_t x108 = 40U;
	volatile int64_t t22 = 58130614453937690LL;

    t22 = (((x105+x106)|x107)/x108);

    if (t22 != -535LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x109 = 251023466611390LL;
	uint64_t x110 = 8347865120377228LLU;
	uint64_t x111 = UINT64_MAX;
	uint16_t x112 = 192U;
	volatile uint64_t t23 = 31775102701LLU;

    t23 = (((x109+x110)|x111)/x112);

    if (t23 != 96076792050570581LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x114 = INT64_MIN;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MAX;

    t24 = (((x113+x114)|x115)/x116);

    if (t24 != -4294780062LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x117 = UINT64_MAX;
	int64_t x119 = -1LL;
	int8_t x120 = INT8_MIN;
	uint64_t t25 = 1527429564456LLU;

    t25 = (((x117+x118)|x119)/x120);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x121 = UINT8_MAX;
	int32_t x122 = INT32_MIN;
	uint64_t x123 = 4757933040LLU;
	volatile int16_t x124 = INT16_MIN;

    t26 = (((x121+x122)|x123)/x124);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x129 = 84277LLU;
	uint32_t x131 = UINT32_MAX;
	int8_t x132 = -1;
	volatile uint64_t t27 = 790935836032191LLU;

    t27 = (((x129+x130)|x131)/x132);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x133 = INT32_MAX;
	int32_t x134 = -1;
	uint64_t x135 = 60LLU;
	static int16_t x136 = INT16_MIN;
	uint64_t t28 = 56785831741554LLU;

    t28 = (((x133+x134)|x135)/x136);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x138 = -835736;
	static uint16_t x140 = 1U;
	volatile uint32_t t29 = 165410U;

    t29 = (((x137+x138)|x139)/x140);

    if (t29 != 4294705014U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x141 = -1LL;
	static int64_t x142 = -252246944149LL;
	uint32_t x143 = 43U;
	uint64_t x144 = 222315453729181LLU;
	volatile uint64_t t30 = 734722029LLU;

    t30 = (((x141+x142)|x143)/x144);

    if (t30 != 82975LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = INT32_MIN;
	static uint64_t x146 = UINT64_MAX;
	uint32_t x148 = UINT32_MAX;
	static volatile uint64_t t31 = 446457240172LLU;

    t31 = (((x145+x146)|x147)/x148);

    if (t31 != 4294967297LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x149 = INT16_MIN;
	uint32_t x150 = 4872U;
	volatile uint8_t x151 = 89U;
	static int8_t x152 = 32;
	volatile uint32_t t32 = 2118555607U;

    t32 = (((x149+x150)|x151)/x152);

    if (t32 != 134216858U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = INT16_MIN;
	uint16_t x163 = 11580U;
	volatile int64_t x164 = 75LL;
	static volatile int64_t t33 = 1692LL;

    t33 = (((x161+x162)|x163)/x164);

    if (t33 != -281LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x165 = -1;
	int32_t x166 = 472;
	static int32_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int32_t t34 = 128;

    t34 = (((x165+x166)|x167)/x168);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x169 = -1;
	volatile int16_t x170 = -1;
	volatile int32_t x171 = INT32_MIN;
	static uint32_t x172 = 104660162U;
	uint32_t t35 = 60876398U;

    t35 = (((x169+x170)|x171)/x172);

    if (t35 != 41U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x173 = INT16_MAX;
	static int32_t x174 = -6119;
	int32_t x175 = INT32_MIN;
	volatile uint64_t x176 = UINT64_MAX;
	volatile uint64_t t36 = 34704942079362690LLU;

    t36 = (((x173+x174)|x175)/x176);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x177 = -1LL;
	volatile int16_t x178 = -5938;
	static int8_t x179 = INT8_MIN;

    t37 = (((x177+x178)|x179)/x180);

    if (t37 != 23082164154LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x181 = INT8_MAX;
	int64_t x182 = -3LL;
	uint32_t x183 = 0U;
	int8_t x184 = 15;
	volatile int64_t t38 = 79682288163665LL;

    t38 = (((x181+x182)|x183)/x184);

    if (t38 != 8LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x185 = 206303693U;
	static int64_t x186 = -124982LL;
	uint8_t x187 = 12U;
	static int16_t x188 = -1;
	volatile int64_t t39 = -304400976801451LL;

    t39 = (((x185+x186)|x187)/x188);

    if (t39 != -206178719LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x189 = UINT16_MAX;
	static volatile int64_t x190 = INT64_MIN;
	volatile int64_t x191 = -7416966LL;
	volatile int64_t t40 = -18688125LL;

    t40 = (((x189+x190)|x191)/x192);

    if (t40 != -226LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x197 = -1;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	static uint8_t x200 = 11U;
	volatile int64_t t41 = -24657LL;

    t41 = (((x197+x198)|x199)/x200);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	uint16_t x204 = 14U;
	volatile int32_t t42 = -87451;

    t42 = (((x201+x202)|x203)/x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = INT64_MIN;
	static int64_t x206 = INT64_MAX;
	int32_t x207 = -66;
	uint32_t x208 = UINT32_MAX;
	int64_t t43 = -20181754LL;

    t43 = (((x205+x206)|x207)/x208);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = 1;
	volatile int8_t x212 = -44;
	uint32_t t44 = 578U;

    t44 = (((x209+x210)|x211)/x212);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x213 = UINT64_MAX;
	uint8_t x215 = 108U;
	int32_t x216 = INT32_MIN;

    t45 = (((x213+x214)|x215)/x216);

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x217 = INT16_MAX;
	uint32_t x218 = 0U;
	int8_t x219 = INT8_MAX;
	uint32_t x220 = 2U;
	static volatile uint32_t t46 = 10388751U;

    t46 = (((x217+x218)|x219)/x220);

    if (t46 != 16383U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x221 = INT8_MIN;
	static int16_t x223 = INT16_MAX;
	uint32_t x224 = 238082498U;
	static uint32_t t47 = 803349U;

    t47 = (((x221+x222)|x223)/x224);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x225 = 2014447;
	static int8_t x226 = 56;
	volatile uint64_t x227 = UINT64_MAX;
	volatile int8_t x228 = INT8_MIN;

    t48 = (((x225+x226)|x227)/x228);

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = -87189;
	volatile int32_t x234 = INT32_MAX;
	static int32_t x235 = INT32_MAX;
	static int8_t x236 = -1;
	volatile int32_t t49 = 7908044;

    t49 = (((x233+x234)|x235)/x236);

    if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x237 = INT8_MIN;
	static int64_t x239 = INT64_MIN;
	int32_t x240 = 1;
	volatile int64_t t50 = 104425748LL;

    t50 = (((x237+x238)|x239)/x240);

    if (t50 != -133LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x241 = -1;
	volatile int64_t x243 = 20438853187934692LL;
	static volatile int8_t x244 = INT8_MIN;
	int64_t t51 = 627606511486LL;

    t51 = (((x241+x242)|x243)/x244);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	static uint64_t x246 = 37132613LLU;
	volatile int16_t x247 = -1;
	int64_t x248 = INT64_MAX;
	volatile uint64_t t52 = 30033594LLU;

    t52 = (((x245+x246)|x247)/x248);

    if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x249 = 453955739976073LL;
	int16_t x250 = -4;
	volatile int8_t x251 = 3;
	int8_t x252 = -11;
	int64_t t53 = 50483410601LL;

    t53 = (((x249+x250)|x251)/x252);

    if (t53 != -41268703634188LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x253 = 5U;
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	int64_t t54 = 29LL;

    t54 = (((x253+x254)|x255)/x256);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x257 = INT32_MIN;
	uint8_t x258 = 1U;
	volatile int64_t x260 = -1LL;
	int64_t t55 = 91629246756LL;

    t55 = (((x257+x258)|x259)/x260);

    if (t55 != 2147483521LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x261 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t56 = 23;

    t56 = (((x261+x262)|x263)/x264);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x265 = INT16_MIN;
	uint64_t x266 = 14LLU;
	int64_t x267 = INT64_MAX;
	volatile int8_t x268 = 1;
	volatile uint64_t t57 = UINT64_MAX;

    t57 = (((x265+x266)|x267)/x268);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x270 = -1LL;
	static int8_t x271 = INT8_MIN;
	int16_t x272 = -8;

    t58 = (((x269+x270)|x271)/x272);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x273 = UINT64_MAX;
	uint64_t x274 = 2410883981996715035LLU;
	int32_t x275 = -535788327;
	volatile uint64_t t59 = 37LLU;

    t59 = (((x273+x274)|x275)/x276);

    if (t59 != 6148914691133580361LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x277 = -5763765LL;
	int16_t x278 = -1;
	int64_t x279 = 3630438961092LL;
	volatile int64_t t60 = -24491LL;

    t60 = (((x277+x278)|x279)/x280);

    if (t60 != 5353522LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x286 = UINT32_MAX;
	uint16_t x287 = 9U;
	static int32_t x288 = -1;
	uint32_t t61 = 200339187U;

    t61 = (((x285+x286)|x287)/x288);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x289 = INT16_MAX;
	volatile uint64_t x292 = 457LLU;

    t62 = (((x289+x290)|x291)/x292);

    if (t62 != 71LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x293 = INT64_MIN;
	int8_t x294 = 5;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = 10213;

    t63 = (((x293+x294)|x295)/x296);

    if (t63 != 1806202298414721LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x297 = INT32_MIN;
	int16_t x298 = INT16_MAX;
	int8_t x299 = INT8_MAX;

    t64 = (((x297+x298)|x299)/x300);

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x301 = 41U;
	int16_t x304 = 457;
	int64_t t65 = -704LL;

    t65 = (((x301+x302)|x303)/x304);

    if (t65 != -4699088LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x305 = INT32_MAX;
	volatile uint64_t x306 = 1781628141314033LLU;
	int8_t x307 = -57;

    t66 = (((x305+x306)|x307)/x308);

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x313 = 12;
	static uint64_t x314 = 0LLU;
	int64_t x315 = 402906426071335104LL;
	uint32_t x316 = 31U;

    t67 = (((x313+x314)|x315)/x316);

    if (t67 != 12996981486172100LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x321 = 0U;
	int16_t x322 = INT16_MAX;
	volatile int16_t x323 = -1;
	int16_t x324 = INT16_MAX;
	static volatile int32_t t68 = 946211;

    t68 = (((x321+x322)|x323)/x324);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x325 = 2;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 1088806161302999LLU;
	static uint64_t t69 = 432695LLU;

    t69 = (((x325+x326)|x327)/x328);

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 2913U;
	volatile uint64_t t70 = 2138232258123716258LLU;

    t70 = (((x329+x330)|x331)/x332);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x335 = 2U;
	int64_t x336 = -1LL;
	static int64_t t71 = -3913740684852351LL;

    t71 = (((x333+x334)|x335)/x336);

    if (t71 != -65534LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MIN;
	int64_t x348 = INT64_MIN;

    t72 = (((x345+x346)|x347)/x348);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x349 = UINT16_MAX;
	int32_t x350 = -1;
	int64_t x351 = INT64_MIN;
	int16_t x352 = 3;

    t73 = (((x349+x350)|x351)/x352);

    if (t73 != -3074457345618236758LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x353 = 1LLU;
	uint32_t x354 = UINT32_MAX;
	volatile int8_t x355 = 1;
	int64_t x356 = INT64_MAX;
	volatile uint64_t t74 = 3048297484LLU;

    t74 = (((x353+x354)|x355)/x356);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x357 = INT64_MIN;
	int64_t x358 = INT64_MAX;
	int32_t x359 = -64516;
	int8_t x360 = INT8_MIN;
	static int64_t t75 = -184857151343LL;

    t75 = (((x357+x358)|x359)/x360);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x363 = 3U;
	int64_t x364 = INT64_MAX;

    t76 = (((x361+x362)|x363)/x364);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x369 = INT8_MAX;
	int32_t x370 = INT32_MIN;
	uint32_t x371 = 702240U;
	volatile uint16_t x372 = UINT16_MAX;

    t77 = (((x369+x370)|x371)/x372);

    if (t77 != 32779U) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x374 = 54096502628856107LLU;
	int8_t x375 = -1;
	volatile uint64_t x376 = 507293LLU;
	volatile uint64_t t78 = 206135LLU;

    t78 = (((x373+x374)|x375)/x376);

    if (t78 != 36363096028743LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x377 = 814011U;
	volatile int32_t x378 = 856;
	uint32_t x379 = UINT32_MAX;
	uint32_t t79 = 2036950U;

    t79 = (((x377+x378)|x379)/x380);

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x382 = UINT16_MAX;
	static int16_t x383 = INT16_MIN;
	static volatile int32_t t80 = -1;

    t80 = (((x381+x382)|x383)/x384);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x389 = 87U;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	static int16_t x392 = -12;
	static volatile uint64_t t81 = 343LLU;

    t81 = (((x389+x390)|x391)/x392);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = 0;
	static int32_t x396 = 2;

    t82 = (((x393+x394)|x395)/x396);

    if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x398 = 6305045363LLU;
	uint64_t t83 = 93182816LLU;

    t83 = (((x397+x398)|x399)/x400);

    if (t83 != 79LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x401 = INT8_MAX;
	static uint32_t x403 = 13U;
	static volatile uint32_t t84 = 424955162U;

    t84 = (((x401+x402)|x403)/x404);

    if (t84 != 65536U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x405 = 1LL;
	int8_t x406 = -1;
	static int64_t x407 = -1LL;
	volatile uint64_t t85 = 48LLU;

    t85 = (((x405+x406)|x407)/x408);

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x409 = 10;
	volatile uint16_t x410 = 18U;
	volatile int64_t x411 = -29942LL;
	int64_t t86 = -1727636596LL;

    t86 = (((x409+x410)|x411)/x412);

    if (t86 != 29922LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x413 = -3;
	int16_t x414 = INT16_MIN;
	int16_t x415 = -1;
	uint16_t x416 = 64U;
	int32_t t87 = -25;

    t87 = (((x413+x414)|x415)/x416);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;
	static volatile uint64_t x419 = 579120LLU;

    t88 = (((x417+x418)|x419)/x420);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	volatile int8_t x422 = -1;
	int8_t x423 = -1;
	static int16_t x424 = 2039;
	volatile int32_t t89 = 70;

    t89 = (((x421+x422)|x423)/x424);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x425 = 51;
	volatile int64_t x426 = INT64_MIN;
	volatile uint32_t x428 = UINT32_MAX;
	int64_t t90 = 177627303640LL;

    t90 = (((x425+x426)|x427)/x428);

    if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x430 = 11U;
	volatile int8_t x431 = INT8_MIN;
	int64_t x432 = -1LL;
	volatile int64_t t91 = -2441806209042LL;

    t91 = (((x429+x430)|x431)/x432);

    if (t91 != 116LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x437 = 26U;
	volatile int8_t x438 = 0;
	uint8_t x439 = 2U;
	static int8_t x440 = -1;
	int32_t t92 = 1;

    t92 = (((x437+x438)|x439)/x440);

    if (t92 != -26) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x441 = 1933175078405076121LL;
	static int16_t x442 = 608;
	uint16_t x444 = UINT16_MAX;
	int64_t t93 = 1LL;

    t93 = (((x441+x442)|x443)/x444);

    if (t93 != -8192LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x451 = UINT64_MAX;
	uint64_t x452 = 52815451LLU;
	volatile uint64_t t94 = 3546338183607109115LLU;

    t94 = (((x449+x450)|x451)/x452);

    if (t94 != 349267945732LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x454 = 15;
	uint64_t x455 = 8326045957470201LLU;
	static volatile int32_t x456 = INT32_MIN;
	uint64_t t95 = 39579LLU;

    t95 = (((x453+x454)|x455)/x456);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x457 = 0;
	volatile int32_t x458 = INT32_MIN;
	int64_t x459 = -1LL;
	int64_t x460 = -14828LL;
	int64_t t96 = -13LL;

    t96 = (((x457+x458)|x459)/x460);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x461 = 1;
	uint16_t x462 = 524U;
	uint64_t x463 = 5319545257229599577LLU;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t97 = 54712405941LLU;

    t97 = (((x461+x462)|x463)/x464);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x465 = INT64_MIN;
	int16_t x466 = 3255;
	uint32_t x467 = 21U;
	uint16_t x468 = 300U;

    t98 = (((x465+x466)|x467)/x468);

    if (t98 != -30744573456182575LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x473 = 27U;
	int64_t x474 = INT64_MIN;
	static uint16_t x475 = UINT16_MAX;
	uint64_t x476 = 8347379930544071LLU;

    t99 = (((x473+x474)|x475)/x476);

    if (t99 != 1104LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = 1;
	static int32_t x478 = 85802;
	int16_t x480 = 327;
	static int32_t t100 = 22;

    t100 = (((x477+x478)|x479)/x480);

    if (t100 != 300) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x482 = -1;
	int16_t x483 = INT16_MIN;
	volatile int64_t x484 = 1175484LL;

    t101 = (((x481+x482)|x483)/x484);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x487 = INT16_MAX;
	int16_t x488 = INT16_MIN;

    t102 = (((x485+x486)|x487)/x488);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x494 = 17;
	static volatile int32_t x495 = -1;
	int64_t x496 = 9978972LL;
	static int64_t t103 = 118290007LL;

    t103 = (((x493+x494)|x495)/x496);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x498 = -1;
	uint64_t x499 = UINT64_MAX;
	uint64_t x500 = 59321463256151265LLU;
	static volatile uint64_t t104 = 177143LLU;

    t104 = (((x497+x498)|x499)/x500);

    if (t104 != 310LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x501 = INT32_MIN;
	int64_t x502 = -1LL;
	int8_t x504 = INT8_MIN;
	int64_t t105 = 62487056165812LL;

    t105 = (((x501+x502)|x503)/x504);

    if (t105 != 16777216LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x505 = -1;
	uint8_t x506 = 44U;
	uint32_t x507 = 43U;
	volatile uint16_t x508 = 826U;
	uint32_t t106 = 3690U;

    t106 = (((x505+x506)|x507)/x508);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x510 = INT64_MIN;
	int8_t x511 = INT8_MIN;
	int32_t x512 = INT32_MIN;
	volatile int64_t t107 = -21435758285594542LL;

    t107 = (((x509+x510)|x511)/x512);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x513 = UINT32_MAX;
	int8_t x514 = -10;
	int32_t x516 = 6906;

    t108 = (((x513+x514)|x515)/x516);

    if (t108 != -1149926807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x518 = -3298;
	uint16_t x519 = 9553U;
	int8_t x520 = INT8_MAX;
	volatile int32_t t109 = -37;

    t109 = (((x517+x518)|x519)/x520);

    if (t109 != -329277) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x525 = INT64_MIN;
	uint16_t x526 = 225U;
	volatile uint32_t x527 = UINT32_MAX;
	int8_t x528 = 3;
	static volatile int64_t t110 = 73025LL;

    t110 = (((x525+x526)|x527)/x528);

    if (t110 != -3074457344186602837LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x529 = INT8_MIN;
	static uint8_t x530 = 71U;
	int16_t x532 = -1;
	int32_t t111 = 0;

    t111 = (((x529+x530)|x531)/x532);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x533 = INT16_MIN;
	static int8_t x534 = INT8_MIN;
	static volatile int32_t x535 = -953334;
	int32_t x536 = INT32_MIN;
	volatile int32_t t112 = 245261047;

    t112 = (((x533+x534)|x535)/x536);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x541 = -1;
	uint32_t x542 = UINT32_MAX;
	int64_t x544 = 10LL;

    t113 = (((x541+x542)|x543)/x544);

    if (t113 != -922337203255980851LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x546 = INT32_MIN;
	uint8_t x547 = 19U;
	int16_t x548 = INT16_MAX;
	static volatile int32_t t114 = -862526139;

    t114 = (((x545+x546)|x547)/x548);

    if (t114 != -65537) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x549 = -20398;
	int16_t x550 = -1;
	uint32_t x551 = 31580708U;
	int64_t x552 = INT64_MIN;
	volatile int64_t t115 = 3LL;

    t115 = (((x549+x550)|x551)/x552);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x561 = -1;
	int16_t x562 = -6238;
	int16_t x563 = 11481;
	volatile int8_t x564 = 16;
	int32_t t116 = 3933;

    t116 = (((x561+x562)|x563)/x564);

    if (t116 != -256) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x565 = -50241675;
	uint16_t x567 = 25U;
	int32_t t117 = -1552397;

    t117 = (((x565+x566)|x567)/x568);

    if (t117 != -395601) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x569 = INT64_MIN;
	uint16_t x570 = 0U;
	static int16_t x572 = INT16_MIN;
	volatile int64_t t118 = -85328LL;

    t118 = (((x569+x570)|x571)/x572);

    if (t118 != 65536LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x573 = UINT16_MAX;
	uint64_t x574 = UINT64_MAX;
	int16_t x576 = INT16_MAX;

    t119 = (((x573+x574)|x575)/x576);

    if (t119 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x577 = UINT16_MAX;
	int32_t x579 = INT32_MAX;
	static int8_t x580 = -1;
	int32_t t120 = -2;

    t120 = (((x577+x578)|x579)/x580);

    if (t120 != -2147483647) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x581 = INT16_MAX;
	int64_t x582 = INT64_MIN;
	int16_t x583 = INT16_MIN;
	volatile int64_t t121 = 222914381586LL;

    t121 = (((x581+x582)|x583)/x584);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x589 = -10;
	int64_t x590 = 21643053650690362LL;
	volatile int8_t x591 = 3;
	int64_t x592 = INT64_MIN;
	volatile int64_t t122 = 101837288382794LL;

    t122 = (((x589+x590)|x591)/x592);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x601 = -1LL;
	int16_t x602 = INT16_MIN;
	int16_t x603 = -3;
	volatile int8_t x604 = -1;
	int64_t t123 = -19728849541754LL;

    t123 = (((x601+x602)|x603)/x604);

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x613 = 26U;
	static int32_t x614 = INT32_MIN;
	int64_t x615 = 17157LL;

    t124 = (((x613+x614)|x615)/x616);

    if (t124 != -65537LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x617 = INT64_MAX;
	int32_t x618 = INT32_MIN;
	int32_t x619 = -1;
	volatile int64_t x620 = 46LL;
	static volatile int64_t t125 = -619532782285891947LL;

    t125 = (((x617+x618)|x619)/x620);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x621 = UINT32_MAX;
	static int32_t x624 = INT32_MIN;
	int64_t t126 = 2LL;

    t126 = (((x621+x622)|x623)/x624);

    if (t126 != 4294967294LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x625 = 111U;
	static int8_t x626 = -7;
	volatile uint8_t x627 = UINT8_MAX;
	int16_t x628 = -1;
	uint32_t t127 = 4395U;

    t127 = (((x625+x626)|x627)/x628);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x629 = 14983U;
	uint8_t x630 = UINT8_MAX;
	uint64_t x631 = 7LLU;
	uint64_t x632 = 468579LLU;
	uint64_t t128 = 28150202923LLU;

    t128 = (((x629+x630)|x631)/x632);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x633 = INT32_MAX;
	int8_t x635 = INT8_MIN;
	uint64_t x636 = 486LLU;
	uint64_t t129 = 38317270LLU;

    t129 = (((x633+x634)|x635)/x636);

    if (t129 != 37956263526151340LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x643 = 0U;
	int64_t t130 = -1075LL;

    t130 = (((x641+x642)|x643)/x644);

    if (t130 != -1424LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x645 = 29U;
	static int16_t x648 = INT16_MIN;
	int32_t t131 = 373;

    t131 = (((x645+x646)|x647)/x648);

    if (t131 != 446) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x649 = -33432;
	int8_t x651 = INT8_MIN;
	static int8_t x652 = 5;
	static int32_t t132 = 62770940;

    t132 = (((x649+x650)|x651)/x652);

    if (t132 != -11) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x653 = UINT32_MAX;
	uint8_t x654 = 1U;
	volatile int64_t t133 = 2943661LL;

    t133 = (((x653+x654)|x655)/x656);

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x657 = INT32_MAX;
	int64_t x658 = INT64_MIN;
	uint32_t x659 = 30U;
	uint8_t x660 = 48U;

    t134 = (((x657+x658)|x659)/x660);

    if (t134 != -192153584056401920LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x665 = UINT8_MAX;
	int32_t x667 = INT32_MIN;
	volatile int32_t t135 = 34;

    t135 = (((x665+x666)|x667)/x668);

    if (t135 != 16777214) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x674 = UINT8_MAX;
	volatile int8_t x675 = -54;
	volatile int64_t x676 = 74480347480LL;

    t136 = (((x673+x674)|x675)/x676);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x681 = 11U;
	uint8_t x684 = 28U;
	int32_t t137 = -634;

    t137 = (((x681+x682)|x683)/x684);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x685 = 118676530429519678LL;
	uint16_t x686 = UINT16_MAX;
	volatile int32_t x687 = 1688645;

    t138 = (((x685+x686)|x687)/x688);

    if (t138 != -118676530430732157LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x689 = 5;
	static int16_t x690 = -1;
	uint32_t x691 = UINT32_MAX;
	uint32_t t139 = 53636U;

    t139 = (((x689+x690)|x691)/x692);

    if (t139 != 178956970U) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x698 = 7LLU;
	uint32_t x699 = 5464799U;
	volatile uint64_t t140 = 10608LLU;

    t140 = (((x697+x698)|x699)/x700);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x702 = UINT64_MAX;
	int64_t x703 = INT64_MIN;
	static volatile int16_t x704 = -1;
	uint64_t t141 = 136LLU;

    t141 = (((x701+x702)|x703)/x704);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x705 = 1;
	int16_t x706 = -1;
	int8_t x708 = INT8_MIN;
	int64_t t142 = 397LL;

    t142 = (((x705+x706)|x707)/x708);

    if (t142 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x713 = 24760U;
	volatile int8_t x714 = -1;
	uint16_t x715 = UINT16_MAX;
	uint16_t x716 = 3U;
	int32_t t143 = 3;

    t143 = (((x713+x714)|x715)/x716);

    if (t143 != 21845) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x721 = INT16_MAX;
	static uint16_t x722 = 9U;
	uint16_t x723 = UINT16_MAX;
	volatile uint64_t x724 = 123251LLU;
	uint64_t t144 = 3LLU;

    t144 = (((x721+x722)|x723)/x724);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x725 = -1;
	volatile uint16_t x726 = UINT16_MAX;
	int32_t x728 = INT32_MAX;
	static int32_t t145 = -213836498;

    t145 = (((x725+x726)|x727)/x728);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x733 = 1LL;
	int32_t x734 = -3;
	int64_t x736 = -1LL;

    t146 = (((x733+x734)|x735)/x736);

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x737 = 4403U;
	int64_t x738 = INT64_MIN;
	volatile uint16_t x740 = UINT16_MAX;

    t147 = (((x737+x738)|x739)/x740);

    if (t147 != -140739635871744LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x742 = -1;
	int8_t x743 = INT8_MAX;

    t148 = (((x741+x742)|x743)/x744);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x745 = 10U;
	static int64_t x746 = 733871LL;
	int8_t x747 = INT8_MAX;
	static uint8_t x748 = UINT8_MAX;
	int64_t t149 = 3LL;

    t149 = (((x745+x746)|x747)/x748);

    if (t149 != 2878LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x749 = 0U;
	volatile uint64_t x751 = UINT64_MAX;
	int32_t x752 = 130665;

    t150 = (((x749+x750)|x751)/x752);

    if (t150 != 141175862501125LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x753 = UINT32_MAX;
	static volatile uint16_t x755 = UINT16_MAX;
	int32_t x756 = -1;
	volatile uint32_t t151 = 55U;

    t151 = (((x753+x754)|x755)/x756);

    if (t151 != 1U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x757 = INT32_MAX;
	int64_t x758 = INT64_MIN;
	int8_t x759 = INT8_MIN;
	volatile uint64_t x760 = UINT64_MAX;
	static volatile uint64_t t152 = 2723428695317LLU;

    t152 = (((x757+x758)|x759)/x760);

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x761 = UINT16_MAX;
	volatile int16_t x762 = -1;
	volatile uint64_t x763 = UINT64_MAX;
	int32_t x764 = 468003813;

    t153 = (((x761+x762)|x763)/x764);

    if (t153 != 39415798677LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x765 = 0;
	int16_t x766 = -1;
	static uint8_t x767 = 88U;
	int8_t x768 = 61;
	volatile int32_t t154 = -5536;

    t154 = (((x765+x766)|x767)/x768);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x770 = -20;
	uint8_t x771 = UINT8_MAX;
	static uint64_t x772 = UINT64_MAX;
	uint64_t t155 = 640087668423547659LLU;

    t155 = (((x769+x770)|x771)/x772);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x773 = 0U;
	int8_t x775 = -1;
	volatile int8_t x776 = INT8_MAX;
	volatile int32_t t156 = -3;

    t156 = (((x773+x774)|x775)/x776);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x777 = INT64_MIN;
	int32_t x779 = INT32_MIN;
	static volatile int16_t x780 = INT16_MAX;

    t157 = (((x777+x778)|x779)/x780);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x781 = INT32_MIN;
	uint8_t x782 = 74U;
	uint8_t x783 = 42U;
	volatile int32_t x784 = INT32_MAX;
	int32_t t158 = 252054136;

    t158 = (((x781+x782)|x783)/x784);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x785 = 20457U;
	int16_t x786 = 3;
	uint8_t x787 = 4U;
	static int32_t x788 = -1;
	volatile int32_t t159 = -31498233;

    t159 = (((x785+x786)|x787)/x788);

    if (t159 != -20460) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x789 = UINT64_MAX;
	uint8_t x790 = UINT8_MAX;
	uint64_t t160 = 21252680359LLU;

    t160 = (((x789+x790)|x791)/x792);

    if (t160 != 2LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x794 = UINT32_MAX;
	uint8_t x795 = 2U;
	int16_t x796 = INT16_MAX;
	volatile uint32_t t161 = 53996058U;

    t161 = (((x793+x794)|x795)/x796);

    if (t161 != 2U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x802 = 162847792990604LLU;
	int16_t x803 = INT16_MIN;
	static int64_t x804 = INT64_MAX;
	volatile uint64_t t162 = 46LLU;

    t162 = (((x801+x802)|x803)/x804);

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x805 = INT32_MAX;
	int32_t x806 = -1;
	int32_t x808 = INT32_MAX;
	int64_t t163 = 103940595834331160LL;

    t163 = (((x805+x806)|x807)/x808);

    if (t163 != 4294967298LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x809 = 5347;
	int32_t x810 = 352813;
	static uint64_t x811 = UINT64_MAX;
	volatile uint64_t t164 = 150595087054683LLU;

    t164 = (((x809+x810)|x811)/x812);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x813 = 24608U;
	static uint8_t x814 = 35U;
	int32_t x816 = 481;
	volatile int32_t t165 = 1053223;

    t165 = (((x813+x814)|x815)/x816);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x817 = INT16_MIN;
	int16_t x818 = 7;
	int16_t x820 = INT16_MAX;
	volatile int64_t t166 = 294595832743LL;

    t166 = (((x817+x818)|x819)/x820);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x821 = -5226054729LL;
	volatile uint8_t x822 = 6U;
	uint32_t x824 = 360738725U;

    t167 = (((x821+x822)|x823)/x824);

    if (t167 != -14LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x825 = INT64_MAX;
	static int32_t x827 = INT32_MIN;
	static volatile int8_t x828 = INT8_MIN;
	static uint64_t t168 = 1767479311LLU;

    t168 = (((x825+x826)|x827)/x828);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x829 = 470LLU;
	int64_t x830 = INT64_MIN;
	uint64_t x831 = UINT64_MAX;
	static int8_t x832 = INT8_MIN;
	static volatile uint64_t t169 = 151134801381139760LLU;

    t169 = (((x829+x830)|x831)/x832);

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x833 = -1;
	static uint64_t x835 = 51730804LLU;
	static volatile int32_t x836 = -1;
	volatile uint64_t t170 = 372808446332492LLU;

    t170 = (((x833+x834)|x835)/x836);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x837 = -1;
	int32_t x838 = -1;
	static volatile uint32_t x839 = 857553U;
	volatile int8_t x840 = INT8_MAX;
	volatile uint32_t t171 = 383012U;

    t171 = (((x837+x838)|x839)/x840);

    if (t171 != 33818640U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x845 = -175;
	int8_t x847 = INT8_MIN;
	static int32_t x848 = INT32_MIN;
	static int32_t t172 = -520618439;

    t172 = (((x845+x846)|x847)/x848);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x849 = -1;
	int64_t x852 = INT64_MIN;
	volatile int64_t t173 = 1901707705810LL;

    t173 = (((x849+x850)|x851)/x852);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x853 = -92;
	int8_t x854 = 1;
	int64_t x855 = INT64_MAX;
	int8_t x856 = -28;
	static volatile int64_t t174 = 1672538471719218LL;

    t174 = (((x853+x854)|x855)/x856);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x857 = UINT16_MAX;
	int16_t x858 = 1751;
	volatile int32_t x860 = -1;
	uint32_t t175 = 8152768U;

    t175 = (((x857+x858)|x859)/x860);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x861 = INT8_MIN;
	int16_t x862 = INT16_MIN;
	int16_t x863 = INT16_MIN;
	volatile uint8_t x864 = UINT8_MAX;
	int32_t t176 = 26872;

    t176 = (((x861+x862)|x863)/x864);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x865 = INT8_MIN;
	int8_t x866 = -1;
	uint32_t x867 = 15U;
	volatile uint8_t x868 = UINT8_MAX;
	static volatile uint32_t t177 = 359533U;

    t177 = (((x865+x866)|x867)/x868);

    if (t177 != 16843008U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x869 = INT8_MIN;
	uint64_t x870 = 51216LLU;
	int16_t x871 = INT16_MIN;
	volatile int16_t x872 = INT16_MAX;
	static uint64_t t178 = 1885004269592054202LLU;

    t178 = (((x869+x870)|x871)/x872);

    if (t178 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x873 = INT16_MIN;
	int8_t x875 = INT8_MIN;
	int64_t x876 = -1LL;
	uint64_t t179 = 1378669529330LLU;

    t179 = (((x873+x874)|x875)/x876);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x877 = INT32_MAX;
	int64_t x879 = 721929313375407536LL;
	static int16_t x880 = INT16_MIN;
	int64_t t180 = -2286LL;

    t180 = (((x877+x878)|x879)/x880);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x885 = -439;
	int8_t x887 = INT8_MIN;
	int32_t t181 = 442;

    t181 = (((x885+x886)|x887)/x888);

    if (t181 != -4) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x889 = -1;
	static uint8_t x892 = UINT8_MAX;
	volatile uint64_t t182 = 611685801465355LLU;

    t182 = (((x889+x890)|x891)/x892);

    if (t182 != 1026274902903LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x893 = 6U;
	static int32_t x895 = INT32_MIN;
	uint32_t x896 = UINT32_MAX;
	uint32_t t183 = 739U;

    t183 = (((x893+x894)|x895)/x896);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x897 = 474011LLU;
	volatile int64_t x898 = 18526028LL;
	static int16_t x899 = INT16_MIN;
	int16_t x900 = 2285;
	static uint64_t t184 = 45442478LLU;

    t184 = (((x897+x898)|x899)/x900);

    if (t184 != 8072973336415556LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x901 = -1;
	uint32_t x902 = UINT32_MAX;
	int16_t x904 = -21;
	uint32_t t185 = 45U;

    t185 = (((x901+x902)|x903)/x904);

    if (t185 != 1U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x905 = INT8_MAX;
	static int32_t x906 = INT32_MIN;
	uint8_t x907 = 19U;
	volatile int32_t t186 = 1779;

    t186 = (((x905+x906)|x907)/x908);

    if (t186 != -715827840) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x909 = -215130LL;
	static volatile int8_t x910 = -1;
	int16_t x911 = INT16_MAX;

    t187 = (((x909+x910)|x911)/x912);

    if (t187 != 1536LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x913 = INT8_MAX;
	int8_t x916 = -1;
	int32_t t188 = 1766654;

    t188 = (((x913+x914)|x915)/x916);

    if (t188 != -151) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x917 = UINT16_MAX;
	int32_t x919 = -1;

    t189 = (((x917+x918)|x919)/x920);

    if (t189 != 165191049U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x921 = INT8_MIN;
	int16_t x922 = -7807;
	static int32_t x923 = INT32_MAX;
	volatile int32_t t190 = 471043766;

    t190 = (((x921+x922)|x923)/x924);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x929 = 2;
	static volatile uint32_t x930 = 157456U;
	int32_t x931 = INT32_MIN;
	static int32_t x932 = -1;
	volatile uint32_t t191 = 0U;

    t191 = (((x929+x930)|x931)/x932);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x934 = 29;
	static uint32_t x935 = 8189U;
	int32_t x936 = -884927002;
	volatile uint32_t t192 = 19U;

    t192 = (((x933+x934)|x935)/x936);

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x941 = -314799;
	uint8_t x942 = 3U;
	uint8_t x943 = 55U;
	int32_t x944 = INT32_MIN;
	volatile int32_t t193 = -3310;

    t193 = (((x941+x942)|x943)/x944);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x946 = INT32_MIN;
	int8_t x947 = -1;
	int64_t x948 = 3LL;
	uint64_t t194 = 28008382994LLU;

    t194 = (((x945+x946)|x947)/x948);

    if (t194 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x949 = 0;
	uint64_t x950 = 8LLU;
	int32_t x952 = INT32_MAX;
	volatile uint64_t t195 = 7746676LLU;

    t195 = (((x949+x950)|x951)/x952);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x953 = 0LLU;
	volatile int8_t x954 = 3;
	static uint32_t x955 = 2164U;
	uint64_t t196 = 49060075051686894LLU;

    t196 = (((x953+x954)|x955)/x956);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x958 = 435537U;
	int16_t x959 = -1;
	uint32_t x960 = 3343582U;

    t197 = (((x957+x958)|x959)/x960);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x962 = -1;
	int8_t x963 = INT8_MIN;
	volatile uint32_t t198 = 1744U;

    t198 = (((x961+x962)|x963)/x964);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x965 = INT8_MIN;
	volatile int8_t x966 = -1;
	volatile uint8_t x967 = 22U;
	uint64_t t199 = 164181261405LLU;

    t199 = (((x965+x966)|x967)/x968);

    if (t199 != 838890653186LLU) { NG(); } else { ; }
	
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

