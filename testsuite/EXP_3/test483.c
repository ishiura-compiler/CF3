
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

int64_t x1 = INT64_MAX;
int8_t x3 = INT8_MIN;
volatile int32_t x6 = INT32_MIN;
volatile int16_t x8 = -2;
uint8_t x10 = 1U;
uint64_t x13 = 1080288587680LLU;
int64_t x16 = 15275LL;
uint32_t x24 = 24U;
int8_t x27 = -1;
uint64_t x29 = 485851857021083812LLU;
int8_t x35 = -1;
volatile uint32_t x47 = 2022043U;
volatile int32_t t11 = -410;
int32_t t12 = 109685423;
int8_t x77 = INT8_MAX;
static int8_t x78 = -1;
static int32_t t16 = -24835;
int8_t x86 = INT8_MAX;
uint16_t x97 = UINT16_MAX;
uint64_t x103 = 441960LLU;
volatile int64_t x104 = INT64_MIN;
static int64_t x105 = INT64_MIN;
uint8_t x126 = 9U;
int16_t x130 = INT16_MAX;
int64_t x140 = -1LL;
int16_t x144 = -1583;
int64_t x149 = -1LL;
int8_t x152 = 1;
int8_t x171 = -12;
int32_t x172 = 9139;
volatile int8_t x174 = -17;
volatile int8_t x179 = INT8_MIN;
static volatile int32_t t34 = 0;
int64_t x187 = INT64_MAX;
int32_t t35 = 1;
int16_t x199 = -1;
int64_t x202 = 1041332466620203328LL;
uint64_t x203 = 157820608025003879LLU;
int64_t x204 = INT64_MAX;
int32_t t40 = -136284;
volatile int32_t t42 = 10855608;
int64_t x225 = -1LL;
uint32_t x227 = 512022356U;
int16_t x229 = 29;
int16_t x230 = INT16_MIN;
int32_t t44 = 254245;
volatile int32_t t46 = 1;
int64_t x243 = 181551751594141LL;
static uint8_t x258 = 125U;
static volatile uint64_t x264 = 37704736049LLU;
int8_t x277 = -1;
int16_t x280 = INT16_MAX;
volatile int64_t x281 = 3641462566587504LL;
int16_t x285 = -1;
static int64_t x287 = 19286398399043LL;
uint32_t x301 = 1U;
static volatile int64_t x313 = -1LL;
int32_t x314 = -1585231;
int64_t x326 = -1LL;
volatile uint32_t x327 = 723U;
static int8_t x341 = 0;
int32_t t63 = 6991713;
int8_t x346 = INT8_MIN;
int8_t x348 = INT8_MIN;
static volatile int32_t t64 = -954040268;
volatile int32_t t65 = -3976;
static int64_t x357 = INT64_MIN;
static int16_t x360 = 1;
volatile int16_t x363 = INT16_MIN;
int32_t t67 = 517464;
volatile uint64_t x366 = 1724063884586452LLU;
int8_t x368 = INT8_MIN;
uint64_t x369 = 21669535335356LLU;
uint32_t x379 = 26945783U;
int64_t x384 = -7204LL;
int16_t x389 = INT16_MIN;
int32_t x395 = -324;
static volatile int32_t t74 = -1;
int16_t x407 = -1;
int32_t x410 = INT32_MIN;
int32_t x420 = -703;
int64_t x426 = -157556592984095487LL;
volatile int32_t t79 = -16702692;
uint16_t x434 = 33U;
uint8_t x436 = 0U;
int32_t t81 = 2402;
uint32_t x441 = 1270U;
uint16_t x449 = 117U;
int32_t t84 = -57808;
static int64_t x466 = 100751176943264LL;
volatile int32_t x470 = 37915;
int16_t x472 = INT16_MIN;
int64_t x473 = INT64_MAX;
volatile int32_t t91 = 28860;
static int8_t x489 = INT8_MIN;
static int16_t x520 = INT16_MIN;
static uint8_t x528 = 1U;
volatile int8_t x536 = INT8_MIN;
static int32_t x538 = INT32_MIN;
uint32_t x539 = UINT32_MAX;
int64_t x548 = -3LL;
int64_t x557 = INT64_MIN;
int32_t x585 = INT32_MIN;
int16_t x586 = INT16_MIN;
int8_t x588 = 0;
int32_t x589 = INT32_MAX;
uint8_t x594 = 4U;
uint32_t x597 = 15973U;
uint32_t x598 = 449446U;
int32_t x601 = INT32_MIN;
static volatile int8_t x606 = INT8_MAX;
volatile int8_t x608 = 60;
uint64_t x622 = UINT64_MAX;
uint16_t x624 = 29U;
static int64_t x639 = 2580408601457LL;
volatile int32_t t122 = -867;
volatile uint64_t x645 = UINT64_MAX;
volatile int32_t x647 = 560;
uint32_t x648 = 9975966U;
uint64_t x652 = 47304633286LLU;
int32_t t126 = -30599;
int32_t x662 = -1;
int16_t x672 = INT16_MIN;
static uint64_t x689 = 4309821740120LLU;
int64_t x695 = -1LL;
int32_t t134 = 51;
int16_t x710 = INT16_MAX;
int8_t x711 = -15;
int64_t x713 = INT64_MIN;
uint32_t x721 = 59818093U;
int8_t x722 = INT8_MAX;
volatile int8_t x723 = -5;
int8_t x745 = INT8_MIN;
uint16_t x746 = 3U;
uint16_t x747 = 3638U;
int32_t x749 = -1;
int32_t t142 = -21;
volatile int16_t x753 = INT16_MAX;
static int32_t x756 = -1;
static uint64_t x757 = 1271LLU;
int16_t x758 = -610;
int64_t x759 = -1LL;
volatile int32_t t144 = -208776240;
volatile int8_t x767 = -1;
int32_t x776 = -1;
uint16_t x782 = UINT16_MAX;
int16_t x786 = INT16_MAX;
static int8_t x787 = -1;
int32_t t152 = -1;
static int64_t x801 = 134982550062LL;
uint8_t x803 = 8U;
int8_t x804 = INT8_MIN;
int32_t t153 = -578;
uint64_t x805 = 217622302832203865LLU;
volatile int8_t x807 = 28;
volatile int8_t x808 = INT8_MIN;
volatile int32_t t155 = 718;
int16_t x820 = 1;
static uint32_t x823 = 1403431U;
volatile uint8_t x826 = UINT8_MAX;
int8_t x828 = INT8_MIN;
volatile int8_t x840 = -1;
int16_t x851 = -3;
int8_t x853 = 0;
volatile uint64_t x861 = 768600065257355LLU;
int32_t t162 = 0;
uint8_t x866 = UINT8_MAX;
int32_t x876 = -12;
int16_t x877 = 1;
static uint64_t x880 = UINT64_MAX;
int64_t x882 = -22989383188614198LL;
int8_t x896 = 25;
volatile int32_t t168 = 124875794;
volatile int8_t x898 = -1;
uint64_t x899 = 72417294427LLU;
int32_t t169 = 41700;
static int32_t x901 = INT32_MAX;
volatile uint32_t x913 = UINT32_MAX;
uint16_t x916 = 3442U;
int32_t x918 = 6729;
int16_t x920 = -1;
int16_t x922 = -1;
static uint8_t x923 = UINT8_MAX;
volatile uint8_t x928 = 0U;
static int64_t x929 = INT64_MIN;
uint32_t x930 = 656307438U;
uint32_t x938 = 79U;
volatile int32_t t177 = 144845;
uint8_t x945 = 1U;
uint8_t x946 = 77U;
static int16_t x950 = INT16_MAX;
int8_t x954 = INT8_MIN;
uint8_t x956 = 4U;
int16_t x965 = -1;
volatile int16_t x972 = 102;
int64_t x979 = -1LL;
volatile int64_t x987 = -215LL;
int32_t x996 = INT32_MAX;
uint16_t x999 = 147U;
volatile int32_t t190 = -2;
uint64_t x1002 = 587565332LLU;
uint32_t x1005 = 33U;
int32_t t193 = -7639;
volatile uint8_t x1033 = UINT8_MAX;
uint32_t x1036 = UINT32_MAX;
static int64_t x1053 = INT64_MIN;
uint64_t x1063 = 520LLU;
static int16_t x1072 = INT16_MIN;
volatile int32_t t199 = -248;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	volatile uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 0;

    t0 = ((x1!=x2)!=(x3*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MIN;
	uint32_t x7 = 789U;
	volatile int32_t t1 = 1392;

    t1 = ((x5!=x6)!=(x7*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	static uint32_t x11 = 1163475034U;
	uint32_t x12 = 479176U;
	volatile int32_t t2 = 423106342;

    t2 = ((x9!=x10)!=(x11*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = 9U;
	uint64_t x15 = UINT64_MAX;
	int32_t t3 = -622787;

    t3 = ((x13!=x14)!=(x15*x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	uint16_t x18 = 285U;
	static int64_t x19 = 12LL;
	int32_t x20 = 0;
	volatile int32_t t4 = 1684001;

    t4 = ((x17!=x18)!=(x19*x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 42783732;
	int16_t x22 = 7;
	uint8_t x23 = 1U;
	volatile int32_t t5 = -57;

    t5 = ((x21!=x22)!=(x23*x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = INT8_MAX;
	uint8_t x26 = 116U;
	static uint64_t x28 = UINT64_MAX;
	int32_t t6 = -465132029;

    t6 = ((x25!=x26)!=(x27*x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = INT32_MAX;
	volatile int16_t x31 = 599;
	uint64_t x32 = 104874LLU;
	static int32_t t7 = -817415679;

    t7 = ((x29!=x30)!=(x31*x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -8;
	int64_t x34 = INT64_MAX;
	uint16_t x36 = 131U;
	int32_t t8 = 2158755;

    t8 = ((x33!=x34)!=(x35*x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = 32181218720LL;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 25U;
	static int32_t x44 = -1280693;
	volatile int32_t t9 = 92;

    t9 = ((x41!=x42)!=(x43*x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -1;
	static int64_t x46 = 114762076055646LL;
	volatile int32_t x48 = -1;
	volatile int32_t t10 = 118881;

    t10 = ((x45!=x46)!=(x47*x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x53 = 1017U;
	static int16_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	uint64_t x56 = 1281LLU;

    t11 = ((x53!=x54)!=(x55*x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = 28U;
	int8_t x62 = INT8_MAX;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = -1;

    t12 = ((x61!=x62)!=(x63*x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x65 = UINT32_MAX;
	static int8_t x66 = -1;
	static volatile int64_t x67 = 813194076LL;
	uint8_t x68 = 105U;
	int32_t t13 = -1007934;

    t13 = ((x65!=x66)!=(x67*x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = UINT32_MAX;
	int32_t x70 = -19445747;
	int64_t x71 = -1LL;
	static int64_t x72 = 76LL;
	int32_t t14 = -10500688;

    t14 = ((x69!=x70)!=(x71*x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x73 = UINT32_MAX;
	static int32_t x74 = -1;
	static uint64_t x75 = 27LLU;
	static int16_t x76 = -1;
	int32_t t15 = -311189;

    t15 = ((x73!=x74)!=(x75*x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x79 = INT32_MIN;
	static uint32_t x80 = UINT32_MAX;

    t16 = ((x77!=x78)!=(x79*x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x85 = 898081834U;
	volatile int32_t x87 = 0;
	uint32_t x88 = 3948U;
	static volatile int32_t t17 = 1799;

    t17 = ((x85!=x86)!=(x87*x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x98 = 13;
	static uint64_t x99 = UINT64_MAX;
	uint16_t x100 = 253U;
	int32_t t18 = 0;

    t18 = ((x97!=x98)!=(x99*x100));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x101 = -416;
	static int8_t x102 = -13;
	int32_t t19 = -955653;

    t19 = ((x101!=x102)!=(x103*x104));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x106 = 2U;
	uint64_t x107 = UINT64_MAX;
	int8_t x108 = INT8_MAX;
	int32_t t20 = 0;

    t20 = ((x105!=x106)!=(x107*x108));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x109 = INT8_MAX;
	volatile uint64_t x110 = UINT64_MAX;
	volatile uint32_t x111 = 5715U;
	volatile int16_t x112 = INT16_MIN;
	int32_t t21 = 1;

    t21 = ((x109!=x110)!=(x111*x112));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x113 = 506U;
	static int64_t x114 = INT64_MIN;
	int8_t x115 = -8;
	uint64_t x116 = 1506724970910LLU;
	int32_t t22 = -13974668;

    t22 = ((x113!=x114)!=(x115*x116));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x117 = INT32_MIN;
	static volatile int64_t x118 = INT64_MIN;
	int64_t x119 = 7289748244830LL;
	volatile uint16_t x120 = UINT16_MAX;
	volatile int32_t t23 = -90;

    t23 = ((x117!=x118)!=(x119*x120));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x121 = -234844;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = INT64_MIN;
	static uint64_t x124 = UINT64_MAX;
	int32_t t24 = 414;

    t24 = ((x121!=x122)!=(x123*x124));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = 49;
	uint16_t x127 = UINT16_MAX;
	static uint64_t x128 = UINT64_MAX;
	volatile int32_t t25 = 111918053;

    t25 = ((x125!=x126)!=(x127*x128));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x129 = 13913U;
	int32_t x131 = -1;
	volatile int8_t x132 = INT8_MIN;
	static volatile int32_t t26 = 130379;

    t26 = ((x129!=x130)!=(x131*x132));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x137 = -7134;
	uint32_t x138 = 2U;
	static uint16_t x139 = 374U;
	static volatile int32_t t27 = -17159721;

    t27 = ((x137!=x138)!=(x139*x140));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x141 = UINT64_MAX;
	volatile int64_t x142 = INT64_MAX;
	int16_t x143 = INT16_MAX;
	volatile int32_t t28 = -143;

    t28 = ((x141!=x142)!=(x143*x144));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x150 = INT8_MIN;
	uint16_t x151 = UINT16_MAX;
	int32_t t29 = 92801350;

    t29 = ((x149!=x150)!=(x151*x152));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x157 = UINT64_MAX;
	static int32_t x158 = INT32_MIN;
	uint8_t x159 = 24U;
	int32_t x160 = -437689;
	int32_t t30 = -304726742;

    t30 = ((x157!=x158)!=(x159*x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x161 = -209;
	uint8_t x162 = UINT8_MAX;
	int64_t x163 = -561LL;
	int64_t x164 = 5LL;
	int32_t t31 = 249;

    t31 = ((x161!=x162)!=(x163*x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x169 = INT64_MIN;
	static uint64_t x170 = 120603LLU;
	int32_t t32 = 1;

    t32 = ((x169!=x170)!=(x171*x172));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x173 = -53037688693030LL;
	volatile int16_t x175 = INT16_MIN;
	static uint64_t x176 = 7479LLU;
	int32_t t33 = -1750690;

    t33 = ((x173!=x174)!=(x175*x176));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x177 = -1;
	int32_t x178 = -1;
	int8_t x180 = 0;

    t34 = ((x177!=x178)!=(x179*x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x185 = 11377543936LLU;
	volatile uint8_t x186 = 24U;
	static int32_t x188 = -1;

    t35 = ((x185!=x186)!=(x187*x188));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MAX;
	int16_t x195 = -1;
	int8_t x196 = INT8_MIN;
	int32_t t36 = 32250742;

    t36 = ((x193!=x194)!=(x195*x196));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x197 = 38761849U;
	int64_t x198 = -1LL;
	static int8_t x200 = INT8_MIN;
	int32_t t37 = -15559;

    t37 = ((x197!=x198)!=(x199*x200));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x201 = INT64_MIN;
	volatile int32_t t38 = 296188346;

    t38 = ((x201!=x202)!=(x203*x204));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x205 = -9440891;
	uint8_t x206 = UINT8_MAX;
	volatile int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t39 = 1042293164;

    t39 = ((x205!=x206)!=(x207*x208));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x213 = INT16_MIN;
	static int32_t x214 = -1;
	volatile int8_t x215 = -1;
	uint64_t x216 = UINT64_MAX;

    t40 = ((x213!=x214)!=(x215*x216));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x217 = 27U;
	volatile uint64_t x218 = 424749254703063LLU;
	int8_t x219 = -1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t41 = 8663876;

    t41 = ((x217!=x218)!=(x219*x220));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x221 = INT64_MAX;
	volatile int32_t x222 = INT32_MIN;
	static int32_t x223 = -1;
	static uint8_t x224 = UINT8_MAX;

    t42 = ((x221!=x222)!=(x223*x224));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x226 = -1;
	int32_t x228 = 9889467;
	volatile int32_t t43 = -52651;

    t43 = ((x225!=x226)!=(x227*x228));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x231 = 2;
	int16_t x232 = INT16_MIN;

    t44 = ((x229!=x230)!=(x231*x232));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x233 = -11;
	static volatile uint64_t x234 = 1007710938563568824LLU;
	uint16_t x235 = UINT16_MAX;
	uint8_t x236 = 27U;
	int32_t t45 = -10;

    t45 = ((x233!=x234)!=(x235*x236));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x237 = -767;
	int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;

    t46 = ((x237!=x238)!=(x239*x240));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x241 = 43173744LLU;
	int16_t x242 = INT16_MAX;
	uint16_t x244 = 20U;
	volatile int32_t t47 = -232885879;

    t47 = ((x241!=x242)!=(x243*x244));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x253 = 23U;
	static int8_t x254 = INT8_MAX;
	int32_t x255 = -1;
	static uint64_t x256 = UINT64_MAX;
	int32_t t48 = -78579;

    t48 = ((x253!=x254)!=(x255*x256));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x257 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = -538;
	volatile int32_t t49 = 69753068;

    t49 = ((x257!=x258)!=(x259*x260));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	int64_t x263 = INT64_MIN;
	volatile int32_t t50 = 6787;

    t50 = ((x261!=x262)!=(x263*x264));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MAX;
	int32_t t51 = 112649;

    t51 = ((x277!=x278)!=(x279*x280));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x282 = INT64_MAX;
	static volatile int8_t x283 = INT8_MIN;
	int64_t x284 = -1LL;
	volatile int32_t t52 = -1754525;

    t52 = ((x281!=x282)!=(x283*x284));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x286 = -6;
	int32_t x288 = 0;
	volatile int32_t t53 = 11321;

    t53 = ((x285!=x286)!=(x287*x288));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	int32_t x292 = INT32_MAX;
	int32_t t54 = -1284896;

    t54 = ((x289!=x290)!=(x291*x292));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x297 = 1850U;
	uint16_t x298 = 30U;
	volatile int16_t x299 = -1;
	int16_t x300 = 157;
	int32_t t55 = -243;

    t55 = ((x297!=x298)!=(x299*x300));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x302 = -378;
	int16_t x303 = 3749;
	uint32_t x304 = UINT32_MAX;
	int32_t t56 = 18623673;

    t56 = ((x301!=x302)!=(x303*x304));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x305 = 15U;
	volatile uint64_t x306 = UINT64_MAX;
	int16_t x307 = 0;
	int32_t x308 = INT32_MAX;
	static volatile int32_t t57 = 104;

    t57 = ((x305!=x306)!=(x307*x308));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x309 = 9407675U;
	int16_t x310 = -1;
	uint16_t x311 = 1521U;
	int8_t x312 = 1;
	static int32_t t58 = -26005833;

    t58 = ((x309!=x310)!=(x311*x312));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x315 = 3U;
	static int16_t x316 = -1;
	volatile int32_t t59 = -2525;

    t59 = ((x313!=x314)!=(x315*x316));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x321 = 10;
	static volatile uint16_t x322 = 2022U;
	int64_t x323 = 13021012617432294LL;
	int16_t x324 = -1;
	int32_t t60 = 1;

    t60 = ((x321!=x322)!=(x323*x324));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x325 = INT8_MIN;
	uint32_t x328 = UINT32_MAX;
	static int32_t t61 = -53477;

    t61 = ((x325!=x326)!=(x327*x328));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x329 = -1;
	uint8_t x330 = 1U;
	static int16_t x331 = 2076;
	static int8_t x332 = INT8_MIN;
	volatile int32_t t62 = -214964;

    t62 = ((x329!=x330)!=(x331*x332));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x342 = -1;
	static uint8_t x343 = UINT8_MAX;
	static volatile uint32_t x344 = 3U;

    t63 = ((x341!=x342)!=(x343*x344));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x345 = 12U;
	uint64_t x347 = 6363052LLU;

    t64 = ((x345!=x346)!=(x347*x348));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x353 = 70;
	static int8_t x354 = -2;
	uint64_t x355 = 10262225LLU;
	uint16_t x356 = 7794U;

    t65 = ((x353!=x354)!=(x355*x356));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	static int32_t t66 = 1535;

    t66 = ((x357!=x358)!=(x359*x360));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x361 = -7391LL;
	static int16_t x362 = 218;
	static int64_t x364 = -7726460LL;

    t67 = ((x361!=x362)!=(x363*x364));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x365 = 3655382986LLU;
	volatile int8_t x367 = 1;
	volatile int32_t t68 = -2729;

    t68 = ((x365!=x366)!=(x367*x368));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x370 = -16;
	uint16_t x371 = 1488U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t69 = 10896083;

    t69 = ((x369!=x370)!=(x371*x372));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	volatile int8_t x380 = INT8_MIN;
	static int32_t t70 = 0;

    t70 = ((x377!=x378)!=(x379*x380));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x381 = INT32_MAX;
	uint16_t x382 = 14U;
	uint32_t x383 = 3513U;
	int32_t t71 = -20;

    t71 = ((x381!=x382)!=(x383*x384));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x385 = 11267;
	static int32_t x386 = 97344;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	int32_t t72 = 0;

    t72 = ((x385!=x386)!=(x387*x388));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x390 = INT8_MIN;
	uint16_t x391 = 969U;
	volatile int16_t x392 = -16;
	int32_t t73 = 54382832;

    t73 = ((x389!=x390)!=(x391*x392));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x393 = 25U;
	volatile uint16_t x394 = 11182U;
	int32_t x396 = 54;

    t74 = ((x393!=x394)!=(x395*x396));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x397 = UINT16_MAX;
	int64_t x398 = INT64_MIN;
	volatile uint16_t x399 = UINT16_MAX;
	int16_t x400 = INT16_MIN;
	int32_t t75 = 15789;

    t75 = ((x397!=x398)!=(x399*x400));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x405 = 840346442;
	int8_t x406 = 14;
	static volatile uint16_t x408 = 251U;
	volatile int32_t t76 = -375;

    t76 = ((x405!=x406)!=(x407*x408));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x409 = INT32_MIN;
	static volatile int8_t x411 = INT8_MIN;
	volatile int8_t x412 = -1;
	volatile int32_t t77 = 14237;

    t77 = ((x409!=x410)!=(x411*x412));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x417 = UINT16_MAX;
	uint16_t x418 = 1U;
	static uint64_t x419 = 507LLU;
	int32_t t78 = -25614;

    t78 = ((x417!=x418)!=(x419*x420));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x425 = INT8_MAX;
	volatile int32_t x427 = -1;
	uint16_t x428 = 3U;

    t79 = ((x425!=x426)!=(x427*x428));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x433 = INT8_MIN;
	uint32_t x435 = UINT32_MAX;
	static int32_t t80 = 1;

    t80 = ((x433!=x434)!=(x435*x436));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x437 = 23U;
	static int16_t x438 = -1;
	int16_t x439 = INT16_MIN;
	uint64_t x440 = UINT64_MAX;

    t81 = ((x437!=x438)!=(x439*x440));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x442 = 1745U;
	static int16_t x443 = INT16_MIN;
	int8_t x444 = INT8_MAX;
	int32_t t82 = -1146;

    t82 = ((x441!=x442)!=(x443*x444));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x445 = INT16_MIN;
	volatile int64_t x446 = -3583LL;
	int32_t x447 = 69;
	static uint32_t x448 = 12801787U;
	int32_t t83 = -73200220;

    t83 = ((x445!=x446)!=(x447*x448));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x450 = INT64_MAX;
	int8_t x451 = -5;
	uint16_t x452 = 974U;

    t84 = ((x449!=x450)!=(x451*x452));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x457 = INT64_MIN;
	volatile int64_t x458 = -6499LL;
	uint8_t x459 = 6U;
	int16_t x460 = -1;
	static volatile int32_t t85 = -479990;

    t85 = ((x457!=x458)!=(x459*x460));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x461 = 6226;
	uint16_t x462 = UINT16_MAX;
	uint8_t x463 = 21U;
	uint8_t x464 = 3U;
	volatile int32_t t86 = 209;

    t86 = ((x461!=x462)!=(x463*x464));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x465 = INT16_MAX;
	uint8_t x467 = UINT8_MAX;
	int16_t x468 = INT16_MIN;
	int32_t t87 = 422;

    t87 = ((x465!=x466)!=(x467*x468));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x469 = 6;
	int8_t x471 = -1;
	volatile int32_t t88 = 603;

    t88 = ((x469!=x470)!=(x471*x472));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x474 = 2007632LLU;
	int8_t x475 = -1;
	volatile uint16_t x476 = 978U;
	volatile int32_t t89 = -233254;

    t89 = ((x473!=x474)!=(x475*x476));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x477 = INT32_MAX;
	uint64_t x478 = 413718983LLU;
	uint16_t x479 = 7U;
	volatile int8_t x480 = 3;
	int32_t t90 = -119291;

    t90 = ((x477!=x478)!=(x479*x480));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x481 = 3857216U;
	int64_t x482 = 590941030144492LL;
	int16_t x483 = INT16_MIN;
	volatile int16_t x484 = INT16_MIN;

    t91 = ((x481!=x482)!=(x483*x484));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x490 = 12;
	int8_t x491 = INT8_MIN;
	volatile int8_t x492 = INT8_MIN;
	volatile int32_t t92 = 30;

    t92 = ((x489!=x490)!=(x491*x492));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	int16_t x494 = INT16_MAX;
	int8_t x495 = -1;
	int16_t x496 = -15;
	volatile int32_t t93 = 474;

    t93 = ((x493!=x494)!=(x495*x496));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x505 = INT8_MIN;
	volatile uint32_t x506 = 32561U;
	int8_t x507 = INT8_MIN;
	int16_t x508 = INT16_MIN;
	volatile int32_t t94 = -76;

    t94 = ((x505!=x506)!=(x507*x508));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x509 = 1089U;
	static uint16_t x510 = UINT16_MAX;
	int32_t x511 = INT32_MAX;
	volatile uint32_t x512 = 59U;
	int32_t t95 = -11998747;

    t95 = ((x509!=x510)!=(x511*x512));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x517 = -33;
	int8_t x518 = INT8_MIN;
	int64_t x519 = -1LL;
	volatile int32_t t96 = -67;

    t96 = ((x517!=x518)!=(x519*x520));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x521 = 2073506LL;
	volatile int32_t x522 = INT32_MIN;
	volatile uint32_t x523 = 1021281U;
	int64_t x524 = 5329012671LL;
	int32_t t97 = -17538568;

    t97 = ((x521!=x522)!=(x523*x524));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x525 = INT64_MIN;
	volatile uint32_t x526 = 287047U;
	int32_t x527 = INT32_MAX;
	volatile int32_t t98 = -382496;

    t98 = ((x525!=x526)!=(x527*x528));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x529 = 48223738652595LL;
	int64_t x530 = -2944922799LL;
	int16_t x531 = -98;
	int16_t x532 = -1;
	volatile int32_t t99 = -13881;

    t99 = ((x529!=x530)!=(x531*x532));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x533 = INT64_MIN;
	int64_t x534 = -511005646868991LL;
	int16_t x535 = INT16_MIN;
	volatile int32_t t100 = -25;

    t100 = ((x533!=x534)!=(x535*x536));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x537 = UINT32_MAX;
	static uint16_t x540 = 6U;
	volatile int32_t t101 = 0;

    t101 = ((x537!=x538)!=(x539*x540));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x541 = INT64_MIN;
	int8_t x542 = INT8_MIN;
	uint64_t x543 = 18LLU;
	static int64_t x544 = INT64_MAX;
	static volatile int32_t t102 = -4658668;

    t102 = ((x541!=x542)!=(x543*x544));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x545 = UINT32_MAX;
	uint64_t x546 = 107380391388657167LLU;
	int8_t x547 = INT8_MIN;
	int32_t t103 = -1;

    t103 = ((x545!=x546)!=(x547*x548));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x558 = -1;
	uint32_t x559 = UINT32_MAX;
	uint32_t x560 = 60170070U;
	volatile int32_t t104 = -4772986;

    t104 = ((x557!=x558)!=(x559*x560));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x561 = UINT32_MAX;
	int8_t x562 = -1;
	uint64_t x563 = UINT64_MAX;
	int8_t x564 = 61;
	int32_t t105 = -1129;

    t105 = ((x561!=x562)!=(x563*x564));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x565 = -1;
	uint64_t x566 = UINT64_MAX;
	volatile int16_t x567 = -1;
	int8_t x568 = -35;
	static volatile int32_t t106 = 9272;

    t106 = ((x565!=x566)!=(x567*x568));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x569 = UINT64_MAX;
	static int32_t x570 = -1;
	volatile uint32_t x571 = 360048976U;
	uint64_t x572 = 1917820607139012303LLU;
	volatile int32_t t107 = 79;

    t107 = ((x569!=x570)!=(x571*x572));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x573 = -3;
	int8_t x574 = 1;
	static uint64_t x575 = UINT64_MAX;
	volatile uint32_t x576 = 521614U;
	volatile int32_t t108 = 157182408;

    t108 = ((x573!=x574)!=(x575*x576));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x581 = UINT8_MAX;
	uint16_t x582 = 1U;
	int32_t x583 = -1;
	static uint64_t x584 = 45719405685LLU;
	int32_t t109 = -763556;

    t109 = ((x581!=x582)!=(x583*x584));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x587 = 11U;
	int32_t t110 = -4;

    t110 = ((x585!=x586)!=(x587*x588));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x590 = INT32_MIN;
	uint64_t x591 = UINT64_MAX;
	volatile uint8_t x592 = 10U;
	volatile int32_t t111 = 370527;

    t111 = ((x589!=x590)!=(x591*x592));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x595 = INT64_MIN;
	uint64_t x596 = 132015LLU;
	int32_t t112 = -10;

    t112 = ((x593!=x594)!=(x595*x596));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x599 = -1LL;
	int8_t x600 = INT8_MIN;
	static int32_t t113 = 139224;

    t113 = ((x597!=x598)!=(x599*x600));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x602 = INT32_MAX;
	uint64_t x603 = UINT64_MAX;
	int16_t x604 = INT16_MAX;
	int32_t t114 = 57880195;

    t114 = ((x601!=x602)!=(x603*x604));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x605 = INT64_MIN;
	int32_t x607 = -16244286;
	int32_t t115 = -3758;

    t115 = ((x605!=x606)!=(x607*x608));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x609 = INT16_MAX;
	uint64_t x610 = 1LLU;
	volatile int32_t x611 = INT32_MIN;
	uint64_t x612 = UINT64_MAX;
	static int32_t t116 = -3528;

    t116 = ((x609!=x610)!=(x611*x612));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x621 = 2974159477240820LL;
	volatile uint32_t x623 = 643056479U;
	static int32_t t117 = -965;

    t117 = ((x621!=x622)!=(x623*x624));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x625 = 3397970U;
	static int64_t x626 = 49810648244LL;
	uint8_t x627 = 6U;
	int8_t x628 = -62;
	volatile int32_t t118 = -11170340;

    t118 = ((x625!=x626)!=(x627*x628));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x629 = -63;
	int16_t x630 = INT16_MIN;
	int32_t x631 = INT32_MIN;
	static uint64_t x632 = 236LLU;
	int32_t t119 = 2759;

    t119 = ((x629!=x630)!=(x631*x632));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x633 = -16;
	uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MIN;
	static int8_t x636 = 1;
	int32_t t120 = -2052889;

    t120 = ((x633!=x634)!=(x635*x636));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x637 = INT16_MAX;
	int16_t x638 = INT16_MAX;
	volatile uint64_t x640 = UINT64_MAX;
	static volatile int32_t t121 = -1272678;

    t121 = ((x637!=x638)!=(x639*x640));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x641 = 9706U;
	static volatile uint32_t x642 = 7U;
	uint8_t x643 = 14U;
	static int8_t x644 = -1;

    t122 = ((x641!=x642)!=(x643*x644));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x646 = UINT64_MAX;
	static int32_t t123 = 3886011;

    t123 = ((x645!=x646)!=(x647*x648));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x649 = -1;
	static int32_t x650 = 963502;
	int32_t x651 = -73242;
	volatile int32_t t124 = 537778673;

    t124 = ((x649!=x650)!=(x651*x652));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x653 = INT8_MAX;
	int64_t x654 = -1LL;
	volatile uint16_t x655 = 32U;
	volatile uint8_t x656 = 119U;
	volatile int32_t t125 = 12112571;

    t125 = ((x653!=x654)!=(x655*x656));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x657 = 3980374;
	static int8_t x658 = -3;
	int64_t x659 = INT64_MAX;
	static int32_t x660 = -1;

    t126 = ((x657!=x658)!=(x659*x660));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x661 = 9521918;
	uint8_t x663 = 1U;
	volatile int64_t x664 = -21LL;
	static volatile int32_t t127 = 149729;

    t127 = ((x661!=x662)!=(x663*x664));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x665 = INT32_MIN;
	int8_t x666 = INT8_MIN;
	int64_t x667 = -1LL;
	int8_t x668 = -1;
	volatile int32_t t128 = -2221228;

    t128 = ((x665!=x666)!=(x667*x668));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x669 = 18939725023LLU;
	int32_t x670 = 1612365;
	int16_t x671 = -74;
	int32_t t129 = 2156290;

    t129 = ((x669!=x670)!=(x671*x672));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x690 = INT32_MIN;
	uint16_t x691 = 198U;
	int16_t x692 = 214;
	int32_t t130 = 266;

    t130 = ((x689!=x690)!=(x691*x692));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x693 = 30U;
	int8_t x694 = -2;
	int32_t x696 = INT32_MAX;
	volatile int32_t t131 = 1;

    t131 = ((x693!=x694)!=(x695*x696));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x697 = 1;
	volatile int32_t x698 = INT32_MIN;
	int16_t x699 = INT16_MAX;
	int64_t x700 = 17923840LL;
	int32_t t132 = -155756;

    t132 = ((x697!=x698)!=(x699*x700));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	int16_t x702 = 63;
	volatile int64_t x703 = -581395151LL;
	int16_t x704 = 578;
	int32_t t133 = -10;

    t133 = ((x701!=x702)!=(x703*x704));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x705 = -78500;
	int64_t x706 = -1LL;
	uint64_t x707 = 472553226938872949LLU;
	volatile uint64_t x708 = 5545LLU;

    t134 = ((x705!=x706)!=(x707*x708));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x709 = 2897042622110821LL;
	int8_t x712 = -27;
	int32_t t135 = 3597176;

    t135 = ((x709!=x710)!=(x711*x712));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x714 = 1998737621110542778LLU;
	static int16_t x715 = -1;
	static volatile int16_t x716 = -8163;
	volatile int32_t t136 = -5309331;

    t136 = ((x713!=x714)!=(x715*x716));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x717 = 687356;
	uint32_t x718 = 1U;
	volatile uint8_t x719 = 9U;
	static int16_t x720 = 805;
	volatile int32_t t137 = -9158581;

    t137 = ((x717!=x718)!=(x719*x720));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x724 = INT16_MIN;
	static volatile int32_t t138 = 87278;

    t138 = ((x721!=x722)!=(x723*x724));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x725 = 19;
	static volatile int32_t x726 = -2443057;
	static int64_t x727 = INT64_MIN;
	uint64_t x728 = 413468030387848LLU;
	int32_t t139 = 35619;

    t139 = ((x725!=x726)!=(x727*x728));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x729 = 34U;
	int8_t x730 = 0;
	uint32_t x731 = UINT32_MAX;
	int32_t x732 = -1;
	volatile int32_t t140 = 337;

    t140 = ((x729!=x730)!=(x731*x732));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x748 = -1;
	volatile int32_t t141 = 299049;

    t141 = ((x745!=x746)!=(x747*x748));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x750 = 164U;
	static int16_t x751 = 0;
	volatile int16_t x752 = -6;

    t142 = ((x749!=x750)!=(x751*x752));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x754 = INT8_MAX;
	int8_t x755 = INT8_MAX;
	int32_t t143 = -9134;

    t143 = ((x753!=x754)!=(x755*x756));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x760 = 108LL;

    t144 = ((x757!=x758)!=(x759*x760));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x761 = 6U;
	static int64_t x762 = 36396993257731LL;
	int32_t x763 = INT32_MAX;
	static int8_t x764 = -1;
	volatile int32_t t145 = -1388;

    t145 = ((x761!=x762)!=(x763*x764));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x765 = UINT8_MAX;
	int16_t x766 = -15205;
	static uint64_t x768 = 60054187LLU;
	volatile int32_t t146 = 557042;

    t146 = ((x765!=x766)!=(x767*x768));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x769 = 5U;
	volatile uint16_t x770 = 214U;
	static volatile uint32_t x771 = 1U;
	volatile uint32_t x772 = 1477332U;
	int32_t t147 = -282;

    t147 = ((x769!=x770)!=(x771*x772));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x773 = -786186LL;
	uint32_t x774 = UINT32_MAX;
	uint64_t x775 = UINT64_MAX;
	int32_t t148 = -148653637;

    t148 = ((x773!=x774)!=(x775*x776));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x781 = -2122944432714968903LL;
	volatile uint16_t x783 = UINT16_MAX;
	int64_t x784 = -57402891788696LL;
	int32_t t149 = 4;

    t149 = ((x781!=x782)!=(x783*x784));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x785 = 24U;
	volatile uint8_t x788 = 58U;
	static volatile int32_t t150 = -946892;

    t150 = ((x785!=x786)!=(x787*x788));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x789 = 1336U;
	uint8_t x790 = 74U;
	volatile int16_t x791 = -212;
	volatile int8_t x792 = -1;
	volatile int32_t t151 = 5881907;

    t151 = ((x789!=x790)!=(x791*x792));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x797 = 728U;
	int8_t x798 = 43;
	uint16_t x799 = 6U;
	int8_t x800 = INT8_MIN;

    t152 = ((x797!=x798)!=(x799*x800));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x802 = 231524380U;

    t153 = ((x801!=x802)!=(x803*x804));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x806 = 7U;
	static volatile int32_t t154 = 0;

    t154 = ((x805!=x806)!=(x807*x808));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x813 = 38;
	uint32_t x814 = UINT32_MAX;
	volatile uint16_t x815 = 0U;
	static volatile uint8_t x816 = 5U;

    t155 = ((x813!=x814)!=(x815*x816));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x817 = INT16_MIN;
	static int32_t x818 = INT32_MIN;
	volatile uint8_t x819 = 24U;
	int32_t t156 = -1;

    t156 = ((x817!=x818)!=(x819*x820));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x821 = -1;
	int64_t x822 = -71909470713LL;
	uint64_t x824 = 832031548948523LLU;
	volatile int32_t t157 = 0;

    t157 = ((x821!=x822)!=(x823*x824));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x825 = INT32_MIN;
	static int8_t x827 = -12;
	int32_t t158 = -224452;

    t158 = ((x825!=x826)!=(x827*x828));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x838 = -16;
	uint64_t x839 = UINT64_MAX;
	static int32_t t159 = 221747566;

    t159 = ((x837!=x838)!=(x839*x840));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x849 = UINT8_MAX;
	int8_t x850 = INT8_MAX;
	volatile uint8_t x852 = 2U;
	int32_t t160 = 89152;

    t160 = ((x849!=x850)!=(x851*x852));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x854 = 352U;
	int16_t x855 = -1;
	uint8_t x856 = 43U;
	volatile int32_t t161 = 33696;

    t161 = ((x853!=x854)!=(x855*x856));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x862 = 6061078935670046424LLU;
	uint64_t x863 = 190289667293945927LLU;
	int64_t x864 = -4LL;

    t162 = ((x861!=x862)!=(x863*x864));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x865 = 62U;
	int64_t x867 = 4LL;
	uint8_t x868 = 0U;
	int32_t t163 = 750;

    t163 = ((x865!=x866)!=(x867*x868));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x873 = INT8_MIN;
	volatile int32_t x874 = INT32_MAX;
	uint32_t x875 = 1404U;
	int32_t t164 = 202902;

    t164 = ((x873!=x874)!=(x875*x876));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x878 = 5614U;
	int64_t x879 = INT64_MAX;
	volatile int32_t t165 = -119;

    t165 = ((x877!=x878)!=(x879*x880));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x881 = -1;
	volatile uint64_t x883 = UINT64_MAX;
	uint32_t x884 = 6099399U;
	int32_t t166 = -100;

    t166 = ((x881!=x882)!=(x883*x884));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x885 = INT16_MIN;
	volatile int64_t x886 = 3915601554LL;
	volatile int16_t x887 = INT16_MIN;
	int8_t x888 = INT8_MIN;
	volatile int32_t t167 = -163339017;

    t167 = ((x885!=x886)!=(x887*x888));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x893 = INT32_MIN;
	uint32_t x894 = 200304U;
	int16_t x895 = -1;

    t168 = ((x893!=x894)!=(x895*x896));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x897 = INT32_MAX;
	uint8_t x900 = UINT8_MAX;

    t169 = ((x897!=x898)!=(x899*x900));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x902 = 446869LLU;
	int16_t x903 = INT16_MAX;
	volatile uint64_t x904 = 23783322303487241LLU;
	static volatile int32_t t170 = 36;

    t170 = ((x901!=x902)!=(x903*x904));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x909 = UINT32_MAX;
	volatile uint16_t x910 = 5U;
	static int32_t x911 = 912353;
	int8_t x912 = INT8_MIN;
	volatile int32_t t171 = 1;

    t171 = ((x909!=x910)!=(x911*x912));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x914 = 80U;
	uint16_t x915 = 4038U;
	volatile int32_t t172 = 2461278;

    t172 = ((x913!=x914)!=(x915*x916));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x917 = INT8_MAX;
	int64_t x919 = -3LL;
	int32_t t173 = -13118916;

    t173 = ((x917!=x918)!=(x919*x920));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint32_t x921 = 267095665U;
	uint8_t x924 = 14U;
	static int32_t t174 = 26596349;

    t174 = ((x921!=x922)!=(x923*x924));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x925 = 810135419580686LL;
	volatile uint64_t x926 = 125695767394079833LLU;
	uint32_t x927 = UINT32_MAX;
	static volatile int32_t t175 = -1123361;

    t175 = ((x925!=x926)!=(x927*x928));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x931 = -1;
	volatile int32_t x932 = 7914170;
	int32_t t176 = -10172861;

    t176 = ((x929!=x930)!=(x931*x932));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x937 = INT64_MAX;
	uint16_t x939 = UINT16_MAX;
	int32_t x940 = -1;

    t177 = ((x937!=x938)!=(x939*x940));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x941 = INT64_MIN;
	int32_t x942 = INT32_MIN;
	static int8_t x943 = 1;
	uint16_t x944 = 68U;
	volatile int32_t t178 = -17869429;

    t178 = ((x941!=x942)!=(x943*x944));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x947 = -36;
	int32_t x948 = -1;
	volatile int32_t t179 = -67838217;

    t179 = ((x945!=x946)!=(x947*x948));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x949 = UINT16_MAX;
	int64_t x951 = -1LL;
	int64_t x952 = 9340843141575LL;
	volatile int32_t t180 = 422;

    t180 = ((x949!=x950)!=(x951*x952));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x953 = -1LL;
	int8_t x955 = 1;
	int32_t t181 = 736784813;

    t181 = ((x953!=x954)!=(x955*x956));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x961 = INT32_MIN;
	static uint16_t x962 = UINT16_MAX;
	uint32_t x963 = UINT32_MAX;
	static int8_t x964 = INT8_MIN;
	static int32_t t182 = 872213;

    t182 = ((x961!=x962)!=(x963*x964));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x966 = INT8_MIN;
	volatile int8_t x967 = -27;
	int16_t x968 = -3;
	int32_t t183 = -55055097;

    t183 = ((x965!=x966)!=(x967*x968));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x969 = -1;
	uint8_t x970 = 84U;
	int8_t x971 = 2;
	volatile int32_t t184 = -69;

    t184 = ((x969!=x970)!=(x971*x972));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x977 = -1;
	int16_t x978 = 12073;
	static int8_t x980 = INT8_MAX;
	volatile int32_t t185 = 97689546;

    t185 = ((x977!=x978)!=(x979*x980));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x981 = INT16_MAX;
	static uint8_t x982 = 1U;
	int8_t x983 = 26;
	uint64_t x984 = 66230848LLU;
	volatile int32_t t186 = 645191885;

    t186 = ((x981!=x982)!=(x983*x984));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x985 = 4362;
	int32_t x986 = INT32_MIN;
	volatile uint16_t x988 = 3860U;
	static volatile int32_t t187 = -779;

    t187 = ((x985!=x986)!=(x987*x988));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x989 = 108U;
	int16_t x990 = INT16_MIN;
	static volatile int16_t x991 = -3175;
	static volatile uint32_t x992 = 887688700U;
	int32_t t188 = -1;

    t188 = ((x989!=x990)!=(x991*x992));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x993 = INT16_MAX;
	uint16_t x994 = 131U;
	uint64_t x995 = 2532LLU;
	static int32_t t189 = 2;

    t189 = ((x993!=x994)!=(x995*x996));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x997 = INT64_MIN;
	static int32_t x998 = -1;
	uint32_t x1000 = 5431U;

    t190 = ((x997!=x998)!=(x999*x1000));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1001 = UINT64_MAX;
	static int64_t x1003 = -1LL;
	static uint32_t x1004 = 2666U;
	int32_t t191 = 22;

    t191 = ((x1001!=x1002)!=(x1003*x1004));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1006 = 1;
	volatile int8_t x1007 = INT8_MIN;
	static uint16_t x1008 = UINT16_MAX;
	int32_t t192 = -1020273460;

    t192 = ((x1005!=x1006)!=(x1007*x1008));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1009 = -50;
	int16_t x1010 = INT16_MAX;
	int32_t x1011 = -1;
	static uint64_t x1012 = 2LLU;

    t193 = ((x1009!=x1010)!=(x1011*x1012));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1029 = INT32_MIN;
	int16_t x1030 = INT16_MIN;
	volatile int32_t x1031 = -1;
	int64_t x1032 = -94028837429291LL;
	static volatile int32_t t194 = 200652;

    t194 = ((x1029!=x1030)!=(x1031*x1032));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1034 = 54U;
	static int32_t x1035 = INT32_MIN;
	static int32_t t195 = 66007179;

    t195 = ((x1033!=x1034)!=(x1035*x1036));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1049 = INT32_MIN;
	uint64_t x1050 = UINT64_MAX;
	uint64_t x1051 = UINT64_MAX;
	int64_t x1052 = INT64_MIN;
	int32_t t196 = -115006;

    t196 = ((x1049!=x1050)!=(x1051*x1052));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1054 = -1;
	uint32_t x1055 = UINT32_MAX;
	int16_t x1056 = INT16_MIN;
	volatile int32_t t197 = 305;

    t197 = ((x1053!=x1054)!=(x1055*x1056));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1061 = UINT16_MAX;
	int64_t x1062 = 665164530312LL;
	uint64_t x1064 = UINT64_MAX;
	volatile int32_t t198 = -55020456;

    t198 = ((x1061!=x1062)!=(x1063*x1064));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1069 = 7;
	static int16_t x1070 = -1;
	volatile int32_t x1071 = -1;

    t199 = ((x1069!=x1070)!=(x1071*x1072));

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

