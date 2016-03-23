
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

static int16_t x2 = INT16_MIN;
int8_t x3 = INT8_MIN;
static uint64_t x27 = UINT64_MAX;
static int64_t x29 = -1LL;
int8_t x32 = INT8_MAX;
static volatile int16_t x33 = INT16_MAX;
int64_t x39 = -1LL;
uint16_t x43 = 3591U;
uint8_t x46 = 99U;
uint64_t x55 = 57131837LLU;
int16_t x67 = -1;
volatile uint32_t t9 = 508U;
volatile int16_t x71 = INT16_MAX;
int64_t x72 = 70808611LL;
int64_t t10 = 37089852665LL;
uint16_t x83 = 16699U;
int16_t x106 = INT16_MIN;
int8_t x107 = -1;
uint8_t x108 = 20U;
int64_t x114 = -609177815LL;
volatile int64_t t14 = 520445910LL;
uint8_t x120 = 26U;
int32_t x128 = INT32_MIN;
int32_t t17 = -205243;
static volatile int8_t x131 = INT8_MAX;
int64_t x132 = INT64_MIN;
int64_t x133 = -1LL;
uint64_t t19 = 4333698155356623622LLU;
int32_t x148 = INT32_MIN;
static int8_t x157 = INT8_MIN;
static int8_t x160 = -2;
int16_t x173 = -1;
volatile int8_t x198 = INT8_MIN;
int8_t x200 = 19;
int16_t x205 = 2;
int16_t x206 = -1;
int32_t x212 = INT32_MIN;
uint8_t x219 = 117U;
static volatile int16_t x227 = 1;
int8_t x229 = 1;
static int16_t x238 = -1;
int32_t x247 = -137427379;
volatile uint64_t t37 = 230263LLU;
uint8_t x256 = UINT8_MAX;
volatile int64_t t40 = 2037275618343621LL;
uint16_t x272 = 1U;
int16_t x284 = -8;
volatile int32_t x291 = INT32_MIN;
uint16_t x304 = UINT16_MAX;
uint64_t x316 = UINT64_MAX;
static uint64_t t50 = 27LLU;
int32_t x322 = INT32_MAX;
static int8_t x331 = -5;
int8_t x339 = -24;
static int16_t x355 = 1;
volatile int32_t t59 = 1612;
uint16_t x377 = 86U;
uint8_t x378 = 0U;
volatile uint32_t x382 = 1004171U;
uint8_t x383 = 1U;
static int32_t x388 = -939411878;
volatile int32_t t63 = -3612673;
int16_t x405 = INT16_MIN;
int32_t x408 = -1;
volatile int32_t t64 = 0;
volatile int64_t t65 = -11588LL;
static int8_t x422 = INT8_MAX;
volatile uint16_t x426 = UINT16_MAX;
int64_t x427 = -1LL;
volatile uint32_t x456 = 857U;
int8_t x461 = -1;
int8_t x462 = INT8_MAX;
int16_t x473 = INT16_MIN;
volatile int32_t t73 = 9;
static volatile uint64_t t75 = 0LLU;
volatile uint32_t t78 = 322U;
int64_t x514 = 3309LL;
volatile uint32_t x518 = 43U;
volatile int16_t x529 = 32;
static int16_t x531 = INT16_MAX;
int16_t x556 = INT16_MIN;
int64_t t87 = -11687173LL;
int32_t x558 = -416;
int8_t x559 = INT8_MAX;
int16_t x561 = -1;
static volatile int8_t x563 = -1;
int8_t x571 = INT8_MAX;
volatile int32_t x576 = INT32_MIN;
static volatile int16_t x580 = 99;
uint32_t x585 = 16U;
uint32_t x598 = UINT32_MAX;
volatile int64_t t95 = -356430377439LL;
uint32_t x602 = 29U;
uint64_t t97 = 5223978LLU;
uint64_t x609 = 5986847727LLU;
uint16_t x610 = 12U;
uint32_t x611 = 5935U;
uint16_t x629 = 25U;
int8_t x632 = 28;
uint16_t x641 = UINT16_MAX;
int8_t x642 = INT8_MAX;
volatile int8_t x643 = INT8_MIN;
static int32_t x653 = -1;
volatile int16_t x655 = -5;
int32_t x656 = -1;
uint64_t x662 = 2385459614878LLU;
int8_t x666 = -2;
volatile uint64_t x668 = 219243851888895LLU;
uint16_t x669 = 44U;
int32_t x670 = -1;
uint64_t t108 = 6LLU;
int8_t x682 = -1;
uint32_t x686 = UINT32_MAX;
int64_t x706 = -20179730191LL;
volatile uint32_t x718 = 1U;
int64_t t114 = -28904LL;
static volatile int32_t t115 = -725;
int32_t x733 = 0;
int16_t x741 = INT16_MAX;
int8_t x742 = -1;
volatile uint16_t x745 = 1U;
static int32_t t119 = -1;
int16_t x754 = -1;
int16_t x755 = 4035;
int32_t t121 = -6610;
uint16_t x771 = UINT16_MAX;
int16_t x776 = -107;
static volatile int16_t x781 = 2521;
uint32_t x787 = 221156370U;
static uint32_t t126 = 29734888U;
int64_t x794 = INT64_MIN;
volatile uint64_t t128 = 30LLU;
int64_t x797 = -78LL;
static int16_t x798 = INT16_MIN;
int8_t x800 = INT8_MAX;
static uint16_t x803 = 16U;
volatile uint64_t x807 = UINT64_MAX;
volatile int16_t x810 = INT16_MIN;
int64_t x819 = 52LL;
int32_t x820 = 66917108;
int16_t x842 = INT16_MAX;
static uint32_t x843 = UINT32_MAX;
int16_t x846 = -1;
int32_t x847 = -1;
static uint16_t x848 = 595U;
int8_t x850 = -7;
int64_t x852 = INT64_MAX;
volatile int64_t t138 = 15LL;
static uint64_t x862 = UINT64_MAX;
static int8_t x865 = INT8_MAX;
int32_t x875 = -1;
int64_t x876 = 573192185778518706LL;
volatile uint16_t x880 = UINT16_MAX;
uint16_t x883 = 569U;
volatile uint64_t t145 = 372035LLU;
static uint64_t x887 = 204924LLU;
int32_t x897 = 1;
static int8_t x898 = -3;
uint64_t t148 = 22LLU;
uint64_t t149 = 3977863489LLU;
int16_t x909 = -1;
static uint8_t x911 = 5U;
volatile int8_t x914 = INT8_MAX;
int32_t t154 = -16207259;
int64_t x933 = INT64_MAX;
uint64_t t155 = 535551697485145LLU;
int64_t x937 = -12114170622051LL;
uint8_t x939 = 0U;
volatile int32_t t157 = 208043;
int64_t x949 = -1LL;
static volatile uint32_t x957 = 122641105U;
static int64_t x959 = 68856LL;
int8_t x960 = INT8_MAX;
int64_t t159 = 92205963LL;
int8_t x963 = INT8_MIN;
int64_t x964 = INT64_MAX;
int8_t x969 = -1;
int8_t x973 = INT8_MIN;
static uint8_t x978 = 119U;
int16_t x989 = INT16_MIN;
int8_t x991 = -1;
int64_t x995 = -7825064LL;
volatile int64_t t166 = 12140467452417LL;
volatile int32_t t167 = 0;
volatile uint64_t x1004 = UINT64_MAX;
volatile int8_t x1005 = -1;
int16_t x1007 = INT16_MAX;
int32_t x1014 = INT32_MAX;
volatile int8_t x1022 = INT8_MIN;
uint32_t t171 = 897204U;
int16_t x1037 = 2;
static uint64_t x1040 = 1035024356508LLU;
volatile uint64_t t174 = 6LLU;
uint64_t t175 = 1135LLU;
uint64_t x1073 = 2198366788536LLU;
volatile int8_t x1075 = -1;
static int32_t x1094 = 817;
uint16_t x1096 = 1U;
static uint8_t x1097 = 22U;
static uint32_t x1099 = UINT32_MAX;
int8_t x1101 = INT8_MIN;
volatile int32_t x1110 = -1;
uint8_t x1112 = 7U;
volatile uint64_t t184 = 4399LLU;
static int32_t x1125 = -1;
int8_t x1134 = INT8_MIN;
int32_t x1135 = -1;
int16_t x1143 = -1;
uint16_t x1165 = 10286U;
int64_t x1166 = INT64_MAX;
int32_t x1169 = INT32_MIN;
uint64_t t192 = 254LLU;
uint16_t x1175 = 1U;
volatile int32_t t193 = 11334;
int32_t t194 = -7302662;
static volatile uint64_t x1205 = 30LLU;
int64_t t199 = 275148LL;


void f0(void) {
    	volatile uint32_t x1 = 47U;
	int8_t x4 = -1;
	static uint32_t t0 = 31366U;

    t0 = ((x1*(x2*x3))/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x17 = 39U;
	static int64_t x18 = -592550LL;
	int64_t x19 = 6LL;
	int32_t x20 = INT32_MIN;
	volatile int64_t t1 = -212630LL;

    t1 = ((x17*(x18*x19))/x20);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x25 = INT16_MAX;
	uint8_t x26 = 12U;
	volatile int8_t x28 = INT8_MIN;
	uint64_t t2 = 910985532LLU;

    t2 = ((x25*(x26*x27))/x28);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x30 = INT8_MIN;
	volatile uint64_t x31 = 2400305LLU;
	volatile uint64_t t3 = 1653LLU;

    t3 = ((x29*(x30*x31))/x32);

    if (t3 != 2419205LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x34 = INT8_MIN;
	uint32_t x35 = UINT32_MAX;
	static volatile uint32_t x36 = 2676072U;
	volatile uint32_t t4 = 3U;

    t4 = ((x33*(x34*x35))/x36);

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x37 = 53564154928LLU;
	int8_t x38 = INT8_MIN;
	static int16_t x40 = -1;
	uint64_t t5 = 983542441LLU;

    t5 = ((x37*(x38*x39))/x40);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x41 = 31LLU;
	int16_t x42 = -5936;
	volatile int8_t x44 = 8;
	volatile uint64_t t6 = 12294764790827257LLU;

    t6 = ((x41*(x42*x43))/x44);

    if (t6 != 2305843009131093770LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x45 = UINT16_MAX;
	volatile int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t7 = -13106088;

    t7 = ((x45*(x46*x47))/x48);

    if (t7 != 25343) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x53 = -1;
	static volatile int32_t x54 = -206;
	uint64_t x56 = 3102498LLU;
	uint64_t t8 = 24899LLU;

    t8 = ((x53*(x54*x55))/x56);

    if (t8 != 3793LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x65 = 751U;
	uint8_t x66 = 100U;
	int32_t x68 = INT32_MIN;

    t9 = ((x65*(x66*x67))/x68);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x69 = 1147LL;
	int8_t x70 = -1;

    t10 = ((x69*(x70*x71))/x72);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x81 = UINT32_MAX;
	int8_t x82 = 7;
	uint8_t x84 = 1U;
	volatile uint32_t t11 = 2121662U;

    t11 = ((x81*(x82*x83))/x84);

    if (t11 != 4294850403U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x93 = 19U;
	volatile int64_t x94 = 937LL;
	int32_t x95 = INT32_MIN;
	volatile int32_t x96 = INT32_MIN;
	static volatile int64_t t12 = -3278103339898360423LL;

    t12 = ((x93*(x94*x95))/x96);

    if (t12 != 17803LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x105 = 13980U;
	static volatile uint32_t t13 = 3U;

    t13 = ((x105*(x106*x107))/x108);

    if (t13 != 22904832U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x113 = 290;
	int16_t x115 = -1;
	volatile int32_t x116 = INT32_MAX;

    t14 = ((x113*(x114*x115))/x116);

    if (t14 != 82LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x117 = INT8_MIN;
	uint16_t x118 = 10U;
	uint16_t x119 = 25291U;
	volatile int32_t t15 = 335830;

    t15 = ((x117*(x118*x119))/x120);

    if (t15 != -1245095) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x121 = UINT64_MAX;
	int16_t x122 = -1601;
	int8_t x123 = -1;
	int8_t x124 = INT8_MIN;
	volatile uint64_t t16 = 6345560965453197LLU;

    t16 = ((x121*(x122*x123))/x124);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x125 = 1043;
	int8_t x126 = INT8_MIN;
	static int32_t x127 = -15;

    t17 = ((x125*(x126*x127))/x128);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x129 = INT8_MIN;
	static volatile int32_t x130 = -1;
	int64_t t18 = -99690429837LL;

    t18 = ((x129*(x130*x131))/x132);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x134 = -1LL;
	uint64_t x135 = 41676113LLU;
	uint64_t x136 = 5404413LLU;

    t19 = ((x133*(x134*x135))/x136);

    if (t19 != 7LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x141 = INT8_MIN;
	volatile int8_t x142 = INT8_MIN;
	int32_t x143 = -1;
	static int32_t x144 = 10;
	int32_t t20 = 1;

    t20 = ((x141*(x142*x143))/x144);

    if (t20 != -1638) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x145 = 31;
	int16_t x146 = -1;
	static uint64_t x147 = UINT64_MAX;
	uint64_t t21 = 28167086780576LLU;

    t21 = ((x145*(x146*x147))/x148);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x158 = -83254566145429303LL;
	static uint64_t x159 = UINT64_MAX;
	volatile uint64_t t22 = 1261LLU;

    t22 = ((x157*(x158*x159))/x160);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x165 = INT8_MIN;
	volatile uint8_t x166 = UINT8_MAX;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = -1LL;
	volatile int64_t t23 = 719167676577170904LL;

    t23 = ((x165*(x166*x167))/x168);

    if (t23 != 8323200LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x174 = -1LL;
	int16_t x175 = -1;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t24 = 8883827571870LL;

    t24 = ((x173*(x174*x175))/x176);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x177 = 58U;
	uint32_t x178 = 988672808U;
	volatile uint16_t x179 = 28679U;
	int8_t x180 = INT8_MAX;
	volatile uint32_t t25 = 1U;

    t25 = ((x177*(x178*x179))/x180);

    if (t25 != 14724768U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x181 = INT8_MIN;
	uint16_t x182 = 4U;
	static uint32_t x183 = 33U;
	int64_t x184 = -616830LL;
	int64_t t26 = -318174648899495LL;

    t26 = ((x181*(x182*x183))/x184);

    if (t26 != -6962LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x189 = 977125986986767LL;
	uint8_t x190 = 1U;
	volatile int16_t x191 = -55;
	static int32_t x192 = INT32_MAX;
	static volatile int64_t t27 = 4193313851062248LL;

    t27 = ((x189*(x190*x191))/x192);

    if (t27 != -25025535LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x197 = -1LL;
	volatile int32_t x199 = -1;
	int64_t t28 = -568087537412264LL;

    t28 = ((x197*(x198*x199))/x200);

    if (t28 != -6LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x201 = INT16_MAX;
	int8_t x202 = 9;
	static int64_t x203 = -1LL;
	uint16_t x204 = 127U;
	volatile int64_t t29 = -17LL;

    t29 = ((x201*(x202*x203))/x204);

    if (t29 != -2322LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x207 = INT8_MAX;
	uint8_t x208 = 3U;
	int32_t t30 = 3506463;

    t30 = ((x205*(x206*x207))/x208);

    if (t30 != -84) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x209 = 676;
	int32_t x210 = INT32_MIN;
	uint32_t x211 = 39932445U;
	uint32_t t31 = 14U;

    t31 = ((x209*(x210*x211))/x212);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x217 = 300U;
	static volatile uint32_t x218 = UINT32_MAX;
	volatile int8_t x220 = INT8_MIN;
	uint32_t t32 = 765715128U;

    t32 = ((x217*(x218*x219))/x220);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x225 = -1;
	int64_t x226 = -1LL;
	int64_t x228 = INT64_MIN;
	volatile int64_t t33 = 18636911185698985LL;

    t33 = ((x225*(x226*x227))/x228);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x230 = 1964562011704203709LLU;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MIN;
	static volatile uint64_t t34 = 83LLU;

    t34 = ((x229*(x230*x231))/x232);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x237 = -2269087;
	volatile int32_t x239 = -1;
	uint8_t x240 = 17U;
	volatile int32_t t35 = 32017274;

    t35 = ((x237*(x238*x239))/x240);

    if (t35 != -133475) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x241 = -1LL;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	static int64_t t36 = -8LL;

    t36 = ((x241*(x242*x243))/x244);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x245 = 21100LL;
	uint64_t x246 = 41412755888424LLU;
	int64_t x248 = 26502408645052LL;

    t37 = ((x245*(x246*x247))/x248);

    if (t37 != 544110LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x253 = INT32_MIN;
	int16_t x254 = -3;
	int64_t x255 = -1LL;
	int64_t t38 = 12LL;

    t38 = ((x253*(x254*x255))/x256);

    if (t38 != -25264513LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x257 = 1;
	uint64_t x258 = 90284469497896LLU;
	static int16_t x259 = -72;
	volatile uint8_t x260 = UINT8_MAX;
	volatile uint64_t t39 = 1094705073218LLU;

    t39 = ((x257*(x258*x259))/x260);

    if (t39 != 72314680752571384LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x261 = -1LL;
	static uint8_t x262 = 0U;
	uint32_t x263 = 1533740226U;
	int8_t x264 = INT8_MIN;

    t40 = ((x261*(x262*x263))/x264);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x269 = 1742U;
	uint16_t x270 = UINT16_MAX;
	uint32_t x271 = 220U;
	static uint32_t t41 = 28239993U;

    t41 = ((x269*(x270*x271))/x272);

    if (t41 != 3640796920U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	uint32_t x274 = 1166352762U;
	int8_t x275 = -1;
	uint32_t x276 = 23U;
	volatile uint32_t t42 = 84057U;

    t42 = ((x273*(x274*x275))/x276);

    if (t42 != 140337235U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x277 = -1LL;
	uint64_t x278 = 20889LLU;
	int16_t x279 = 17;
	static uint16_t x280 = 275U;
	uint64_t t43 = 5753032978109018061LLU;

    t43 = ((x277*(x278*x279))/x280);

    if (t43 != 67079069358942532LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x281 = 1333U;
	int64_t x282 = 7424500LL;
	int32_t x283 = 102;
	int64_t t44 = -431332404063222330LL;

    t44 = ((x281*(x282*x283))/x284);

    if (t44 != -126184945875LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x285 = 120U;
	volatile int16_t x286 = -1;
	uint8_t x287 = 1U;
	static volatile int64_t x288 = -1LL;
	int64_t t45 = 0LL;

    t45 = ((x285*(x286*x287))/x288);

    if (t45 != 120LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x289 = INT8_MIN;
	volatile int64_t x290 = -1LL;
	uint32_t x292 = 6U;
	int64_t t46 = 25728728852LL;

    t46 = ((x289*(x290*x291))/x292);

    if (t46 != -45812984490LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x293 = INT16_MAX;
	int16_t x294 = INT16_MIN;
	static uint64_t x295 = UINT64_MAX;
	int64_t x296 = -5702202123LL;
	volatile uint64_t t47 = 30500LLU;

    t47 = ((x293*(x294*x295))/x296);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x301 = -1321566045028LL;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	volatile int64_t t48 = -2090607494179548614LL;

    t48 = ((x301*(x302*x303))/x304);

    if (t48 != 84578936270257LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x305 = -1;
	volatile uint16_t x306 = 0U;
	volatile uint32_t x307 = 17317U;
	int16_t x308 = INT16_MIN;
	static volatile uint32_t t49 = 0U;

    t49 = ((x305*(x306*x307))/x308);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x313 = -1;
	int8_t x314 = -4;
	uint64_t x315 = UINT64_MAX;

    t50 = ((x313*(x314*x315))/x316);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x317 = -106136;
	int64_t x318 = -25480663393LL;
	uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 142LLU;
	uint64_t t51 = 4349637859LLU;

    t51 = ((x317*(x318*x319))/x320);

    if (t51 != 129887603225490649LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x321 = 182LLU;
	int64_t x323 = -1LL;
	volatile uint8_t x324 = UINT8_MAX;
	volatile uint64_t t52 = 63430217941LLU;

    t52 = ((x321*(x322*x323))/x324);

    if (t52 != 72340171305362854LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x329 = 99U;
	int16_t x330 = INT16_MIN;
	uint8_t x332 = 7U;
	static volatile int32_t t53 = 180237;

    t53 = ((x329*(x330*x331))/x332);

    if (t53 != 2317165) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x337 = -192163104883760LL;
	uint32_t x338 = UINT32_MAX;
	int32_t x340 = 2037932;
	static int64_t t54 = -201474454924004438LL;

    t54 = ((x337*(x338*x339))/x340);

    if (t54 != -2263036508LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x341 = 245U;
	int64_t x342 = -1LL;
	int8_t x343 = 30;
	uint16_t x344 = UINT16_MAX;
	volatile int64_t t55 = 661LL;

    t55 = ((x341*(x342*x343))/x344);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x345 = 1;
	static uint64_t x346 = UINT64_MAX;
	static volatile int64_t x347 = INT64_MAX;
	int32_t x348 = INT32_MIN;
	uint64_t t56 = 1274302208070255LLU;

    t56 = ((x345*(x346*x347))/x348);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x349 = -1;
	int16_t x350 = 4;
	int8_t x351 = 9;
	volatile uint64_t x352 = 27LLU;
	uint64_t t57 = 71LLU;

    t57 = ((x349*(x350*x351))/x352);

    if (t57 != 683212743470724132LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x353 = INT16_MAX;
	uint8_t x354 = 1U;
	volatile int16_t x356 = INT16_MIN;
	int32_t t58 = -5;

    t58 = ((x353*(x354*x355))/x356);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x357 = UINT8_MAX;
	int16_t x358 = -1;
	int8_t x359 = -59;
	static int8_t x360 = INT8_MAX;

    t59 = ((x357*(x358*x359))/x360);

    if (t59 != 118) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x369 = UINT16_MAX;
	uint32_t x370 = 4597U;
	uint8_t x371 = UINT8_MAX;
	volatile uint16_t x372 = UINT16_MAX;
	volatile uint32_t t60 = 1398639U;

    t60 = ((x369*(x370*x371))/x372);

    if (t60 != 58105U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x379 = INT64_MIN;
	int8_t x380 = INT8_MIN;
	static int64_t t61 = -10013034590LL;

    t61 = ((x377*(x378*x379))/x380);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x381 = 88U;
	int16_t x384 = 4080;
	uint32_t t62 = 63672U;

    t62 = ((x381*(x382*x383))/x384);

    if (t62 != 21658U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x385 = INT8_MIN;
	static int8_t x386 = 35;
	static int32_t x387 = 35932;

    t63 = ((x385*(x386*x387))/x388);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x406 = 20800U;
	uint8_t x407 = 1U;

    t64 = ((x405*(x406*x407))/x408);

    if (t64 != 681574400) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x409 = -1LL;
	int16_t x410 = INT16_MAX;
	uint16_t x411 = 5U;
	int16_t x412 = INT16_MIN;

    t65 = ((x409*(x410*x411))/x412);

    if (t65 != 4LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x413 = 6U;
	int32_t x414 = INT32_MIN;
	volatile int8_t x415 = 0;
	uint16_t x416 = 1U;
	int32_t t66 = -11;

    t66 = ((x413*(x414*x415))/x416);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x417 = -90;
	int32_t x418 = -1;
	uint64_t x419 = 38515432634LLU;
	volatile int8_t x420 = -1;
	volatile uint64_t t67 = 1573782726996959LLU;

    t67 = ((x417*(x418*x419))/x420);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x421 = -28;
	volatile int16_t x423 = -14369;
	int64_t x424 = INT64_MIN;
	int64_t t68 = 48598288389LL;

    t68 = ((x421*(x422*x423))/x424);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x425 = INT32_MIN;
	static int32_t x428 = -1;
	volatile int64_t t69 = 2020LL;

    t69 = ((x425*(x426*x427))/x428);

    if (t69 != -140735340871680LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x445 = -16515305LL;
	uint16_t x446 = 30U;
	volatile int16_t x447 = INT16_MAX;
	uint8_t x448 = 2U;
	int64_t t70 = 602950475905LL;

    t70 = ((x445*(x446*x447))/x448);

    if (t70 != -8117354984025LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x453 = UINT8_MAX;
	static volatile uint8_t x454 = UINT8_MAX;
	uint64_t x455 = 3346874LLU;
	static volatile uint64_t t71 = 2247941197056138LLU;

    t71 = ((x453*(x454*x455))/x456);

    if (t71 != 253944552LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x463 = -1;
	volatile int8_t x464 = 3;
	static volatile int32_t t72 = 1482993;

    t72 = ((x461*(x462*x463))/x464);

    if (t72 != 42) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x474 = INT8_MAX;
	volatile uint8_t x475 = 2U;
	int8_t x476 = -1;

    t73 = ((x473*(x474*x475))/x476);

    if (t73 != 8323072) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x477 = 59;
	volatile uint16_t x478 = 6555U;
	uint16_t x479 = 0U;
	static int16_t x480 = INT16_MIN;
	int32_t t74 = 2520454;

    t74 = ((x477*(x478*x479))/x480);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x489 = INT32_MIN;
	uint64_t x490 = UINT64_MAX;
	int64_t x491 = INT64_MIN;
	volatile uint64_t x492 = 535523087832LLU;

    t75 = ((x489*(x490*x491))/x492);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x493 = -413314793LL;
	volatile int32_t x494 = INT32_MAX;
	static volatile uint64_t x495 = 61LLU;
	volatile uint32_t x496 = UINT32_MAX;
	volatile uint64_t t76 = 14751517786147LLU;

    t76 = ((x493*(x494*x495))/x496);

    if (t76 != 278800707LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x505 = -1LL;
	int64_t x506 = -477030845LL;
	volatile uint32_t x507 = 20743810U;
	uint32_t x508 = 51462540U;
	int64_t t77 = 315279548LL;

    t77 = ((x505*(x506*x507))/x508);

    if (t77 != 192284275LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x509 = 0;
	uint8_t x510 = 5U;
	uint32_t x511 = 5599419U;
	int8_t x512 = -1;

    t78 = ((x509*(x510*x511))/x512);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x513 = -1;
	int32_t x515 = INT32_MIN;
	uint64_t x516 = 22374611870388203LLU;
	uint64_t t79 = 481692032LLU;

    t79 = ((x513*(x514*x515))/x516);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x517 = 1045906651U;
	static uint8_t x519 = UINT8_MAX;
	volatile int16_t x520 = -1;
	uint32_t t80 = 4325U;

    t80 = ((x517*(x518*x519))/x520);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x525 = INT16_MAX;
	static int32_t x526 = INT32_MIN;
	uint32_t x527 = 14839U;
	int64_t x528 = INT64_MIN;
	int64_t t81 = 7776465956150886LL;

    t81 = ((x525*(x526*x527))/x528);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x530 = INT8_MIN;
	uint8_t x532 = 1U;
	int32_t t82 = -63;

    t82 = ((x529*(x530*x531))/x532);

    if (t82 != -134213632) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x533 = INT8_MAX;
	uint32_t x534 = 3U;
	static int64_t x535 = -380820299LL;
	int64_t x536 = INT64_MAX;
	volatile int64_t t83 = -457995593544LL;

    t83 = ((x533*(x534*x535))/x536);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x537 = 210LL;
	volatile int32_t x538 = -42351;
	uint8_t x539 = 8U;
	int32_t x540 = -222;
	volatile int64_t t84 = 85626396LL;

    t84 = ((x537*(x538*x539))/x540);

    if (t84 != 320494LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = -1LL;
	volatile int16_t x543 = 0;
	int64_t x544 = -1LL;
	volatile int64_t t85 = -33427966514419LL;

    t85 = ((x541*(x542*x543))/x544);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x545 = UINT8_MAX;
	int8_t x546 = INT8_MIN;
	uint8_t x547 = 38U;
	volatile uint64_t x548 = UINT64_MAX;
	uint64_t t86 = 5697009199749877LLU;

    t86 = ((x545*(x546*x547))/x548);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x553 = 7418;
	static int16_t x554 = INT16_MIN;
	static int64_t x555 = -32LL;

    t87 = ((x553*(x554*x555))/x556);

    if (t87 != -237376LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x557 = 1997599168U;
	int8_t x560 = INT8_MIN;
	uint32_t t88 = 13U;

    t88 = ((x557*(x558*x559))/x560);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x562 = -1;
	static uint32_t x564 = UINT32_MAX;
	uint32_t t89 = 718789661U;

    t89 = ((x561*(x562*x563))/x564);

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x569 = -27008488126038LL;
	int8_t x570 = -1;
	uint16_t x572 = UINT16_MAX;
	int64_t t90 = -7LL;

    t90 = ((x569*(x570*x571))/x572);

    if (t90 != 52339635187LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	int16_t x574 = 1081;
	int16_t x575 = -23;
	uint64_t t91 = 31708704305LLU;

    t91 = ((x573*(x574*x575))/x576);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x577 = INT8_MIN;
	volatile int16_t x578 = -1;
	uint64_t x579 = 4592097929254786LLU;
	volatile uint64_t t92 = 163625493256809443LLU;

    t92 = ((x577*(x578*x579))/x580);

    if (t92 != 5937257928733460LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x581 = 2418636LLU;
	int16_t x582 = -763;
	volatile int64_t x583 = -1LL;
	int8_t x584 = INT8_MAX;
	volatile uint64_t t93 = 132316LLU;

    t93 = ((x581*(x582*x583))/x584);

    if (t93 != 14530860LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x586 = INT16_MAX;
	static uint32_t x587 = 7437U;
	int64_t x588 = INT64_MAX;
	int64_t t94 = -481850727LL;

    t94 = ((x585*(x586*x587))/x588);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x597 = -1;
	int64_t x599 = -1LL;
	static uint8_t x600 = 41U;

    t95 = ((x597*(x598*x599))/x600);

    if (t95 != 104755299LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x601 = 1;
	static uint32_t x603 = 437474607U;
	uint8_t x604 = UINT8_MAX;
	static uint32_t t96 = 261906U;

    t96 = ((x601*(x602*x603))/x604);

    if (t96 != 16065996U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x605 = -1;
	uint64_t x606 = 7LLU;
	int32_t x607 = INT32_MIN;
	uint64_t x608 = 978LLU;

    t97 = ((x605*(x606*x607))/x608);

    if (t97 != 15370537LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x612 = INT64_MIN;
	volatile uint64_t t98 = 6930764120463738LLU;

    t98 = ((x609*(x610*x611))/x612);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x613 = 10U;
	int16_t x614 = INT16_MAX;
	int8_t x615 = 0;
	int32_t x616 = INT32_MIN;
	volatile int32_t t99 = 224145;

    t99 = ((x613*(x614*x615))/x616);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x625 = -1;
	static uint16_t x626 = UINT16_MAX;
	volatile int16_t x627 = 5641;
	int32_t x628 = -1;
	int32_t t100 = 292778;

    t100 = ((x625*(x626*x627))/x628);

    if (t100 != 369682935) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x630 = -9;
	int8_t x631 = INT8_MAX;
	int32_t t101 = 432082;

    t101 = ((x629*(x630*x631))/x632);

    if (t101 != -1020) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x644 = INT16_MIN;
	static int32_t t102 = 3;

    t102 = ((x641*(x642*x643))/x644);

    if (t102 != 32511) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x649 = INT64_MAX;
	int8_t x650 = -1;
	static volatile uint64_t x651 = 608513390LLU;
	int8_t x652 = -1;
	static uint64_t t103 = 15240037LLU;

    t103 = ((x649*(x650*x651))/x652);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x654 = -1LL;
	volatile int64_t t104 = 9752670859LL;

    t104 = ((x653*(x654*x655))/x656);

    if (t104 != 5LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x661 = -7;
	int16_t x663 = -1;
	int64_t x664 = -1LL;
	static uint64_t t105 = 2347LLU;

    t105 = ((x661*(x662*x663))/x664);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x665 = 37U;
	int32_t x667 = 84;
	static volatile uint64_t t106 = 24634LLU;

    t106 = ((x665*(x666*x667))/x668);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x671 = 0;
	uint16_t x672 = 5U;
	int32_t t107 = 0;

    t107 = ((x669*(x670*x671))/x672);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x673 = INT16_MIN;
	volatile int64_t x674 = -1563721LL;
	static uint32_t x675 = 61891743U;
	uint64_t x676 = 250543697702LLU;

    t108 = ((x673*(x674*x675))/x676);

    if (t108 != 12657805LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x681 = 0U;
	uint64_t x683 = 587965861LLU;
	uint16_t x684 = UINT16_MAX;
	volatile uint64_t t109 = 25LLU;

    t109 = ((x681*(x682*x683))/x684);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x685 = 15U;
	static uint64_t x687 = UINT64_MAX;
	static uint16_t x688 = 1160U;
	volatile uint64_t t110 = 3025664065582674978LLU;

    t110 = ((x685*(x686*x687))/x688);

    if (t110 != 15902365525245726LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x693 = 9989;
	static uint64_t x694 = 858354037116289LLU;
	int16_t x695 = -59;
	volatile int64_t x696 = INT64_MIN;
	volatile uint64_t t111 = 594LLU;

    t111 = ((x693*(x694*x695))/x696);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x701 = INT16_MAX;
	static int32_t x702 = INT32_MIN;
	volatile uint64_t x703 = 37882LLU;
	int16_t x704 = 1410;
	uint64_t t112 = 50996589577509LLU;

    t112 = ((x701*(x702*x703))/x704);

    if (t112 != 11192281317550948LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x705 = -766048LL;
	static uint8_t x707 = 7U;
	int16_t x708 = -6237;
	static int64_t t113 = 1920290LL;

    t113 = ((x705*(x706*x707))/x708);

    if (t113 != -17349766502082LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x717 = -1LL;
	static uint8_t x719 = 1U;
	static int64_t x720 = -1LL;

    t114 = ((x717*(x718*x719))/x720);

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x721 = 2;
	uint16_t x722 = 224U;
	int16_t x723 = INT16_MAX;
	int32_t x724 = INT32_MAX;

    t115 = ((x721*(x722*x723))/x724);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x734 = -1;
	volatile int16_t x735 = INT16_MIN;
	int64_t x736 = INT64_MIN;
	volatile int64_t t116 = 359129090930LL;

    t116 = ((x733*(x734*x735))/x736);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x737 = INT16_MIN;
	volatile uint32_t x738 = UINT32_MAX;
	uint64_t x739 = 5LLU;
	uint16_t x740 = 47U;
	uint64_t t117 = 7413867777394LLU;

    t117 = ((x737*(x738*x739))/x740);

    if (t117 != 392468944388679549LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x743 = INT8_MAX;
	int32_t x744 = INT32_MIN;
	int32_t t118 = -1;

    t118 = ((x741*(x742*x743))/x744);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x746 = INT8_MIN;
	uint16_t x747 = 25U;
	static int8_t x748 = -1;

    t119 = ((x745*(x746*x747))/x748);

    if (t119 != 3200) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x753 = -1LL;
	int64_t x756 = INT64_MIN;
	volatile int64_t t120 = 101235635683105819LL;

    t120 = ((x753*(x754*x755))/x756);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x765 = 12U;
	int8_t x766 = -1;
	int32_t x767 = 1;
	int16_t x768 = -1;

    t121 = ((x765*(x766*x767))/x768);

    if (t121 != 12) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x769 = 375038552U;
	static volatile uint8_t x770 = 4U;
	int8_t x772 = INT8_MAX;
	uint32_t t122 = 4U;

    t122 = ((x769*(x770*x771))/x772);

    if (t122 != 6335557U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x773 = -26;
	int64_t x774 = 48LL;
	uint32_t x775 = 37947061U;
	int64_t t123 = 8355333LL;

    t123 = ((x773*(x774*x775))/x776);

    if (t123 != 442597496LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x777 = -1;
	uint8_t x778 = 1U;
	int32_t x779 = -1;
	static int64_t x780 = INT64_MIN;
	static volatile int64_t t124 = 8785249LL;

    t124 = ((x777*(x778*x779))/x780);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x782 = UINT64_MAX;
	volatile int8_t x783 = INT8_MIN;
	int32_t x784 = INT32_MIN;
	uint64_t t125 = 8218761368898257727LLU;

    t125 = ((x781*(x782*x783))/x784);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x785 = INT16_MIN;
	uint8_t x786 = UINT8_MAX;
	int16_t x788 = INT16_MIN;

    t126 = ((x785*(x786*x787))/x788);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x789 = 12U;
	static volatile uint8_t x790 = UINT8_MAX;
	static int32_t x791 = -21705;
	int32_t x792 = -1;
	static volatile int32_t t127 = 0;

    t127 = ((x789*(x790*x791))/x792);

    if (t127 != 66417300) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x793 = INT64_MAX;
	uint64_t x795 = UINT64_MAX;
	uint16_t x796 = 140U;

    t128 = ((x793*(x794*x795))/x796);

    if (t128 != 65881228834676970LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x799 = 458U;
	int64_t t129 = 577717127LL;

    t129 = ((x797*(x798*x799))/x800);

    if (t129 != -2628636575LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x801 = -1;
	uint64_t x802 = 29975507LLU;
	uint16_t x804 = UINT16_MAX;
	volatile uint64_t t130 = 24LLU;

    t130 = ((x801*(x802*x803))/x804);

    if (t130 != 281479271736170LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x805 = 38;
	static int16_t x806 = 23;
	int32_t x808 = INT32_MIN;
	volatile uint64_t t131 = 41987224632952LLU;

    t131 = ((x805*(x806*x807))/x808);

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x809 = INT16_MIN;
	uint32_t x811 = 204525U;
	int8_t x812 = 4;
	uint32_t t132 = 4154483U;

    t132 = ((x809*(x810*x811))/x812);

    if (t132 != 268435456U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x817 = -1;
	int16_t x818 = -1;
	volatile int64_t t133 = -775469678494086LL;

    t133 = ((x817*(x818*x819))/x820);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x833 = INT64_MIN;
	uint32_t x834 = UINT32_MAX;
	int16_t x835 = -1;
	int64_t x836 = -181898476LL;
	int64_t t134 = -65701746971179375LL;

    t134 = ((x833*(x834*x835))/x836);

    if (t134 != 50706153452LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x837 = INT8_MAX;
	int16_t x838 = INT16_MIN;
	int8_t x839 = -13;
	volatile int8_t x840 = -1;
	volatile int32_t t135 = 497;

    t135 = ((x837*(x838*x839))/x840);

    if (t135 != -54099968) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint32_t x841 = 5340U;
	static int16_t x844 = INT16_MIN;
	uint32_t t136 = 17953U;

    t136 = ((x841*(x842*x843))/x844);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x845 = INT8_MIN;
	int32_t t137 = 5;

    t137 = ((x845*(x846*x847))/x848);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x849 = 85U;
	static int8_t x851 = INT8_MIN;

    t138 = ((x849*(x850*x851))/x852);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x857 = INT8_MAX;
	uint64_t x858 = 28255936752548622LLU;
	int32_t x859 = 1083;
	int64_t x860 = INT64_MIN;
	uint64_t t139 = 4379849191894LLU;

    t139 = ((x857*(x858*x859))/x860);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x861 = 27U;
	volatile int64_t x863 = INT64_MAX;
	int16_t x864 = -1;
	volatile uint64_t t140 = 1581516316035LLU;

    t140 = ((x861*(x862*x863))/x864);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x866 = -1;
	volatile int8_t x867 = -1;
	int32_t x868 = 7;
	int32_t t141 = 1;

    t141 = ((x865*(x866*x867))/x868);

    if (t141 != 18) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x869 = INT64_MIN;
	static uint64_t x870 = UINT64_MAX;
	uint32_t x871 = 5157U;
	volatile uint16_t x872 = UINT16_MAX;
	uint64_t t142 = 6966662892707LLU;

    t142 = ((x869*(x870*x871))/x872);

    if (t142 != 140739635871744LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x873 = INT8_MIN;
	volatile int16_t x874 = 2538;
	int64_t t143 = 12LL;

    t143 = ((x873*(x874*x875))/x876);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x877 = 1LLU;
	int8_t x878 = 5;
	uint64_t x879 = 3508554707686135LLU;
	volatile uint64_t t144 = 6345858609781374995LLU;

    t144 = ((x877*(x878*x879))/x880);

    if (t144 != 267685565551LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x881 = 2080825707090954864LLU;
	uint16_t x882 = 1014U;
	static volatile int32_t x884 = 588093668;

    t145 = ((x881*(x882*x883))/x884);

    if (t145 != 24974103742LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x885 = INT8_MIN;
	uint64_t x886 = 1000932114831LLU;
	uint64_t x888 = 1356080613719342834LLU;
	uint64_t t146 = 198097108377LLU;

    t146 = ((x885*(x886*x887))/x888);

    if (t146 != 7LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x893 = INT32_MAX;
	int64_t x894 = INT64_MIN;
	uint64_t x895 = UINT64_MAX;
	uint32_t x896 = 4674U;
	volatile uint64_t t147 = 13303523839948LLU;

    t147 = ((x893*(x894*x895))/x896);

    if (t147 != 1973335908612489LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x899 = 3535;
	uint64_t x900 = UINT64_MAX;

    t148 = ((x897*(x898*x899))/x900);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x901 = -1;
	static uint64_t x902 = UINT64_MAX;
	int64_t x903 = INT64_MAX;
	static uint64_t x904 = UINT64_MAX;

    t149 = ((x901*(x902*x903))/x904);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x905 = 0;
	int8_t x906 = INT8_MIN;
	volatile uint32_t x907 = 5834426U;
	static uint16_t x908 = 1U;
	volatile uint32_t t150 = 7702464U;

    t150 = ((x905*(x906*x907))/x908);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x910 = 25840LLU;
	int16_t x912 = -3;
	volatile uint64_t t151 = 3440LLU;

    t151 = ((x909*(x910*x911))/x912);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x913 = UINT8_MAX;
	uint16_t x915 = 301U;
	int32_t x916 = 11113;
	static volatile int32_t t152 = 918;

    t152 = ((x913*(x914*x915))/x916);

    if (t152 != 877) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x917 = 13;
	int8_t x918 = -1;
	int8_t x919 = -1;
	int16_t x920 = -1;
	int32_t t153 = -1;

    t153 = ((x917*(x918*x919))/x920);

    if (t153 != -13) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x925 = -1;
	int16_t x926 = 216;
	int8_t x927 = 3;
	int32_t x928 = -213;

    t154 = ((x925*(x926*x927))/x928);

    if (t154 != 3) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x934 = 18203059479910131LLU;
	static int64_t x935 = 6801730LL;
	uint16_t x936 = UINT16_MAX;

    t155 = ((x933*(x934*x935))/x936);

    if (t155 != 34339916828795LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x938 = 14970960U;
	int16_t x940 = -1;
	volatile int64_t t156 = 173458707919LL;

    t156 = ((x937*(x938*x939))/x940);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x945 = UINT16_MAX;
	int16_t x946 = -1;
	static volatile uint8_t x947 = UINT8_MAX;
	uint16_t x948 = 3U;

    t157 = ((x945*(x946*x947))/x948);

    if (t157 != -5570475) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x950 = INT8_MAX;
	uint16_t x951 = UINT16_MAX;
	uint16_t x952 = 5192U;
	int64_t t158 = 285LL;

    t158 = ((x949*(x950*x951))/x952);

    if (t158 != -1603LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x958 = 61U;

    t159 = ((x957*(x958*x959))/x960);

    if (t159 != 4056056153375LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x961 = UINT32_MAX;
	uint32_t x962 = 21621153U;
	int64_t t160 = -1LL;

    t160 = ((x961*(x962*x963))/x964);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x970 = INT16_MIN;
	uint64_t x971 = UINT64_MAX;
	int8_t x972 = INT8_MIN;
	volatile uint64_t t161 = 5466254313428380579LLU;

    t161 = ((x969*(x970*x971))/x972);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x974 = 265989278LLU;
	volatile uint64_t x975 = 824147679075LLU;
	static uint16_t x976 = 12U;
	static uint64_t t162 = 225LLU;

    t162 = ((x973*(x974*x975))/x976);

    if (t162 != 1374614708455246229LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x977 = INT16_MAX;
	int32_t x979 = -1;
	uint64_t x980 = 1779LLU;
	uint64_t t163 = 759550218053443LLU;

    t163 = ((x977*(x978*x979))/x980);

    if (t163 != 10369164740700198LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x981 = -1;
	uint32_t x982 = UINT32_MAX;
	static int32_t x983 = 220047241;
	uint32_t x984 = 8217001U;
	volatile uint32_t t164 = 4052U;

    t164 = ((x981*(x982*x983))/x984);

    if (t164 != 26U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x990 = -257735639336LL;
	int64_t x992 = -12717533LL;
	int64_t t165 = -17956428193936LL;

    t165 = ((x989*(x990*x991))/x992);

    if (t165 != 664081738LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x993 = -1;
	int16_t x994 = -1;
	static int16_t x996 = INT16_MIN;

    t166 = ((x993*(x994*x995))/x996);

    if (t166 != 238LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x997 = INT16_MIN;
	static volatile int8_t x998 = 1;
	int16_t x999 = 1;
	uint16_t x1000 = 29370U;

    t167 = ((x997*(x998*x999))/x1000);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1001 = -6;
	int8_t x1002 = -1;
	uint64_t x1003 = UINT64_MAX;
	uint64_t t168 = 490516305261747LLU;

    t168 = ((x1001*(x1002*x1003))/x1004);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1006 = -86;
	int8_t x1008 = INT8_MIN;
	int32_t t169 = -29;

    t169 = ((x1005*(x1006*x1007))/x1008);

    if (t169 != -22015) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1013 = INT64_MIN;
	uint64_t x1015 = 13533936314669910LLU;
	volatile int64_t x1016 = INT64_MIN;
	volatile uint64_t t170 = 16963182888852LLU;

    t170 = ((x1013*(x1014*x1015))/x1016);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1021 = 134038251U;
	uint32_t x1023 = 501684U;
	int8_t x1024 = INT8_MIN;

    t171 = ((x1021*(x1022*x1023))/x1024);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1029 = UINT32_MAX;
	int32_t x1030 = -1;
	uint8_t x1031 = 26U;
	int8_t x1032 = INT8_MIN;
	volatile uint32_t t172 = 29803458U;

    t172 = ((x1029*(x1030*x1031))/x1032);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x1038 = -57645002194337LL;
	uint8_t x1039 = UINT8_MAX;
	uint64_t t173 = 2330255640830069LLU;

    t173 = ((x1037*(x1038*x1039))/x1040);

    if (t173 != 17794117LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1041 = 28501LLU;
	int8_t x1042 = INT8_MIN;
	static uint64_t x1043 = 3819306992180982614LLU;
	uint16_t x1044 = 4660U;

    t174 = ((x1041*(x1042*x1043))/x1044);

    if (t174 != 661414504453178LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x1061 = 32013794U;
	int64_t x1062 = 1980065042LL;
	uint64_t x1063 = 844905LLU;
	uint8_t x1064 = 53U;

    t175 = ((x1061*(x1062*x1063))/x1064);

    if (t175 != 134305599280334541LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x1065 = 32336U;
	static uint64_t x1066 = 4154315LLU;
	int64_t x1067 = -1LL;
	uint8_t x1068 = UINT8_MAX;
	uint64_t t176 = 7099606130LLU;

    t176 = ((x1065*(x1066*x1067))/x1068);

    if (t176 != 72340172311276948LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1074 = INT8_MAX;
	int32_t x1076 = -1;
	static volatile uint64_t t177 = 189823639095373LLU;

    t177 = ((x1073*(x1074*x1075))/x1076);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1081 = -36;
	int32_t x1082 = INT32_MAX;
	static int8_t x1083 = 0;
	volatile uint64_t x1084 = 26115LLU;
	volatile uint64_t t178 = 15586361LLU;

    t178 = ((x1081*(x1082*x1083))/x1084);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint8_t x1093 = 24U;
	int8_t x1095 = INT8_MIN;
	static int32_t t179 = 394235;

    t179 = ((x1093*(x1094*x1095))/x1096);

    if (t179 != -2509824) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1098 = INT32_MIN;
	volatile uint32_t x1100 = 1657908U;
	static uint32_t t180 = 3U;

    t180 = ((x1097*(x1098*x1099))/x1100);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x1102 = INT16_MIN;
	static int8_t x1103 = -27;
	int64_t x1104 = INT64_MAX;
	int64_t t181 = -9156LL;

    t181 = ((x1101*(x1102*x1103))/x1104);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1105 = INT8_MIN;
	int16_t x1106 = -1;
	uint64_t x1107 = UINT64_MAX;
	uint16_t x1108 = UINT16_MAX;
	volatile uint64_t t182 = 8696LLU;

    t182 = ((x1105*(x1106*x1107))/x1108);

    if (t182 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x1109 = 1114U;
	volatile uint16_t x1111 = 1U;
	int32_t t183 = -4038331;

    t183 = ((x1109*(x1110*x1111))/x1112);

    if (t183 != -159) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x1117 = 467066LL;
	uint64_t x1118 = UINT64_MAX;
	uint32_t x1119 = UINT32_MAX;
	static int64_t x1120 = INT64_MIN;

    t184 = ((x1117*(x1118*x1119))/x1120);

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1121 = -1;
	uint32_t x1122 = UINT32_MAX;
	static uint16_t x1123 = UINT16_MAX;
	int32_t x1124 = -5330712;
	uint32_t t185 = 31221U;

    t185 = ((x1121*(x1122*x1123))/x1124);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1126 = -125584224LL;
	volatile uint32_t x1127 = UINT32_MAX;
	static uint32_t x1128 = 30U;
	volatile int64_t t186 = -1079872181547LL;

    t186 = ((x1125*(x1126*x1127))/x1128);

    if (t186 != 17979337828265136LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1129 = UINT16_MAX;
	uint8_t x1130 = 8U;
	int16_t x1131 = -1;
	uint8_t x1132 = UINT8_MAX;
	int32_t t187 = -1;

    t187 = ((x1129*(x1130*x1131))/x1132);

    if (t187 != -2056) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1133 = 1;
	uint32_t x1136 = 2U;
	uint32_t t188 = 1U;

    t188 = ((x1133*(x1134*x1135))/x1136);

    if (t188 != 64U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1141 = 1691U;
	static volatile int8_t x1142 = 25;
	static volatile uint64_t x1144 = 856030019098543876LLU;
	uint64_t t189 = 3138083385248814570LLU;

    t189 = ((x1141*(x1142*x1143))/x1144);

    if (t189 != 21LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1157 = 6U;
	uint32_t x1158 = UINT32_MAX;
	static int64_t x1159 = -1LL;
	int64_t x1160 = -2408LL;
	static volatile int64_t t190 = -7526LL;

    t190 = ((x1157*(x1158*x1159))/x1160);

    if (t190 != 10701745LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1167 = 128LLU;
	int8_t x1168 = 27;
	static volatile uint64_t t191 = 1523770LLU;

    t191 = ((x1165*(x1166*x1167))/x1168);

    if (t191 != 683212743470675370LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1170 = INT8_MIN;
	uint64_t x1171 = 615119LLU;
	int8_t x1172 = 10;

    t192 = ((x1169*(x1170*x1171))/x1172);

    if (t192 != 16908262324148633LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1173 = INT8_MIN;
	uint8_t x1174 = 42U;
	int8_t x1176 = INT8_MIN;

    t193 = ((x1173*(x1174*x1175))/x1176);

    if (t193 != 42) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1189 = -1;
	uint8_t x1190 = 13U;
	int32_t x1191 = 1;
	uint16_t x1192 = 166U;

    t194 = ((x1189*(x1190*x1191))/x1192);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1206 = -97212410855283LL;
	int8_t x1207 = -1;
	int32_t x1208 = INT32_MIN;
	static uint64_t t195 = 13525273409384312LLU;

    t195 = ((x1205*(x1206*x1207))/x1208);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1209 = INT8_MAX;
	volatile int64_t x1210 = -1LL;
	static int16_t x1211 = -1;
	int8_t x1212 = INT8_MAX;
	volatile int64_t t196 = 1LL;

    t196 = ((x1209*(x1210*x1211))/x1212);

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1217 = -1;
	int8_t x1218 = 1;
	static uint16_t x1219 = 6U;
	int16_t x1220 = INT16_MAX;
	volatile int32_t t197 = 1;

    t197 = ((x1217*(x1218*x1219))/x1220);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1229 = UINT64_MAX;
	volatile int8_t x1230 = -1;
	volatile uint16_t x1231 = 29462U;
	static int64_t x1232 = 305246211163LL;
	volatile uint64_t t198 = 16524171985404LLU;

    t198 = ((x1229*(x1230*x1231))/x1232);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x1233 = 121U;
	int64_t x1234 = 2115551177LL;
	static volatile int8_t x1235 = -1;
	volatile int32_t x1236 = INT32_MIN;

    t199 = ((x1233*(x1234*x1235))/x1236);

    if (t199 != 119LL) { NG(); } else { ; }
	
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

