
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

int32_t x12 = INT32_MAX;
int64_t x15 = INT64_MIN;
uint16_t x20 = UINT16_MAX;
static uint16_t x33 = 1U;
int16_t x46 = -1;
int64_t t6 = -16804847565650210LL;
int8_t x51 = 3;
uint32_t x54 = 3U;
int32_t x64 = INT32_MIN;
static int16_t x79 = 0;
uint64_t x84 = UINT64_MAX;
uint64_t t12 = 66038LLU;
int8_t x86 = INT8_MIN;
volatile uint8_t x90 = UINT8_MAX;
volatile int32_t x92 = -1;
int8_t x93 = INT8_MIN;
static volatile uint16_t x100 = UINT16_MAX;
volatile uint32_t x102 = 51U;
uint64_t t17 = 234546572672140LLU;
volatile int8_t x106 = INT8_MAX;
volatile uint32_t x107 = 7U;
int8_t x114 = INT8_MAX;
int16_t x117 = 2638;
int8_t x119 = INT8_MIN;
int32_t x139 = -1;
volatile uint32_t t22 = 93994U;
uint32_t x149 = 15989U;
static volatile int64_t x158 = -1LL;
volatile int64_t t28 = 1250LL;
static int64_t t32 = 174521LL;
int8_t x203 = INT8_MIN;
uint16_t x212 = UINT16_MAX;
int16_t x213 = -2739;
uint16_t x219 = UINT16_MAX;
int64_t t37 = -3397LL;
int8_t x231 = INT8_MIN;
volatile int16_t x234 = INT16_MAX;
int32_t x236 = -1;
int8_t x242 = -1;
static volatile int32_t t41 = -376;
uint32_t x263 = UINT32_MAX;
int16_t x272 = -1159;
static int8_t x278 = INT8_MAX;
int16_t x280 = -1;
static int8_t x282 = 0;
int32_t x283 = -1;
uint32_t x287 = UINT32_MAX;
uint32_t x300 = 174780155U;
int32_t x302 = -1;
static uint8_t x314 = 58U;
static int64_t x315 = -19357775057727011LL;
uint8_t x316 = 80U;
static int16_t x328 = INT16_MAX;
static volatile uint32_t t57 = 16U;
int16_t x334 = -4;
uint16_t x351 = UINT16_MAX;
int32_t x354 = INT32_MAX;
int64_t x367 = INT64_MIN;
static uint64_t t61 = 33567505772907LLU;
int32_t x374 = -1;
uint16_t x378 = 0U;
uint64_t t64 = 20027473068290LLU;
uint64_t x387 = UINT64_MAX;
static int64_t x388 = INT64_MIN;
uint64_t t66 = 0LLU;
static int16_t x399 = 5580;
volatile int32_t t68 = 1979745;
int8_t x407 = INT8_MIN;
volatile uint64_t t70 = 63142LLU;
uint16_t x409 = UINT16_MAX;
static int32_t x413 = INT32_MIN;
int64_t x415 = 0LL;
static uint8_t x426 = 72U;
volatile int16_t x427 = -1;
uint32_t t75 = 60U;
int16_t x437 = INT16_MAX;
volatile int32_t x443 = INT32_MIN;
uint64_t t79 = 26124LLU;
volatile int64_t x451 = INT64_MAX;
int8_t x452 = 1;
int32_t t82 = -1;
int64_t x464 = -1LL;
volatile int16_t x474 = INT16_MAX;
static volatile int32_t t85 = 3805;
static int64_t x478 = -1LL;
volatile int32_t x479 = -120854;
volatile uint32_t x503 = 6651U;
volatile uint32_t x509 = 281U;
volatile uint32_t t89 = 0U;
volatile uint32_t x513 = 183703U;
int16_t x515 = INT16_MIN;
volatile uint8_t x517 = 15U;
static int32_t x525 = -644973;
uint64_t x531 = 139056958LLU;
static int8_t x534 = -1;
uint32_t x538 = UINT32_MAX;
int32_t x539 = 56;
uint64_t x558 = 807LLU;
uint8_t x560 = 9U;
uint16_t x565 = 6017U;
uint32_t x566 = 70640U;
volatile uint32_t t98 = 2455370U;
int64_t x569 = -12LL;
volatile int64_t x570 = -1LL;
int64_t x581 = -38960405621771301LL;
int8_t x588 = -1;
uint16_t x590 = UINT16_MAX;
uint32_t x591 = UINT32_MAX;
volatile int8_t x593 = INT8_MIN;
int16_t x603 = INT16_MIN;
int8_t x607 = INT8_MIN;
int8_t x619 = INT8_MIN;
int16_t x624 = INT16_MIN;
uint16_t x625 = 899U;
volatile uint8_t x626 = 7U;
int64_t x628 = -720348914LL;
volatile uint8_t x629 = UINT8_MAX;
int32_t x652 = -1;
int64_t x665 = -106002414LL;
int16_t x666 = INT16_MIN;
uint16_t x668 = UINT16_MAX;
int16_t x671 = -1;
volatile int16_t x676 = INT16_MIN;
uint64_t x684 = 352448601097LLU;
volatile int64_t x707 = -2119553623LL;
int8_t x713 = INT8_MIN;
int32_t x723 = INT32_MIN;
int32_t x725 = INT32_MAX;
int8_t x728 = -1;
volatile int8_t x742 = 17;
int16_t x743 = INT16_MAX;
int16_t x745 = -1;
int64_t x753 = INT64_MAX;
int64_t x757 = INT64_MAX;
int16_t x758 = -1;
uint64_t t131 = 445302LLU;
int32_t x762 = -1;
volatile int32_t x767 = INT32_MIN;
volatile uint64_t x768 = UINT64_MAX;
volatile uint64_t t133 = 1122975636LLU;
uint16_t x770 = 330U;
int64_t x772 = INT64_MAX;
static int64_t x775 = -570767121LL;
static int64_t x781 = 15670973LL;
static volatile uint16_t x783 = 16764U;
uint32_t x787 = 780U;
volatile int32_t x788 = -3862;
uint32_t t138 = 197238U;
int32_t x792 = 398821;
uint8_t x810 = 63U;
static uint64_t x813 = 1875LLU;
int8_t x815 = INT8_MIN;
volatile int8_t x818 = INT8_MAX;
uint32_t x825 = UINT32_MAX;
int16_t x839 = 51;
int32_t x851 = INT32_MIN;
uint8_t x859 = 0U;
int64_t x863 = 17192LL;
volatile uint64_t t154 = 12606865527LLU;
int64_t x878 = -1LL;
int16_t x884 = -799;
int8_t x888 = -1;
volatile int64_t t157 = -485478823162LL;
int16_t x889 = -1;
static int16_t x892 = 2613;
volatile int32_t t158 = -33265865;
static volatile int8_t x893 = -23;
uint32_t x894 = 2347U;
volatile int64_t x899 = INT64_MIN;
uint8_t x900 = 12U;
volatile int64_t t161 = -318317992873279392LL;
int32_t x911 = 3;
int16_t x914 = -1;
volatile int64_t x915 = INT64_MIN;
static uint32_t x928 = UINT32_MAX;
int32_t x935 = -1;
int8_t x947 = -1;
static uint32_t x953 = 978762U;
volatile uint16_t x970 = 1301U;
volatile uint64_t x980 = 2447LLU;
int16_t x985 = 84;
int32_t x987 = INT32_MIN;
uint64_t t175 = 556000084459680LLU;
static int16_t x1006 = 24;
static int16_t x1007 = INT16_MIN;
volatile int16_t x1012 = INT16_MAX;
static volatile int32_t t180 = -1;
static int64_t x1020 = -1LL;
volatile int16_t x1023 = 5576;
uint64_t x1026 = 199507651155892LLU;
static int16_t x1038 = INT16_MIN;
int8_t x1039 = INT8_MIN;
int16_t x1040 = INT16_MIN;
uint32_t x1044 = 143U;
uint32_t t187 = 798U;
int8_t x1059 = INT8_MIN;
int32_t t189 = 6;
int16_t x1066 = -1;
uint16_t x1068 = 11457U;
volatile int16_t x1073 = INT16_MIN;
static int32_t x1075 = 1;
int8_t x1082 = INT8_MIN;
int8_t x1086 = -1;
volatile int64_t t195 = -3352843892787LL;
int16_t x1100 = -1;
int64_t x1120 = 1510LL;


void f0(void) {
    	int8_t x9 = -21;
	volatile int32_t x10 = 1958;
	int64_t x11 = 162736656561013LL;
	volatile int64_t t0 = -43LL;

    t0 = (((x9*x10)^x11)%x12);

    if (t0 != -345816045LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x13 = INT16_MAX;
	static int16_t x14 = INT16_MIN;
	uint32_t x16 = 7320U;
	int64_t t1 = 61299604575LL;

    t1 = (((x13*x14)^x15)%x16);

    if (t1 != 3192LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x17 = 14;
	uint32_t x18 = 128166U;
	int32_t x19 = 8;
	uint32_t t2 = 1431878520U;

    t2 = (((x17*x18)^x19)%x20);

    if (t2 != 24887U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x25 = 0LLU;
	int64_t x26 = -1LL;
	int64_t x27 = INT64_MAX;
	volatile int8_t x28 = INT8_MAX;
	volatile uint64_t t3 = 1754LLU;

    t3 = (((x25*x26)^x27)%x28);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x34 = -29;
	static int16_t x35 = -1;
	volatile int32_t x36 = -1;
	int32_t t4 = -3;

    t4 = (((x33*x34)^x35)%x36);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x37 = UINT8_MAX;
	uint16_t x38 = UINT16_MAX;
	int32_t x39 = -1;
	static uint64_t x40 = 423LLU;
	uint64_t t5 = 2117489LLU;

    t5 = (((x37*x38)^x39)%x40);

    if (t5 != 60LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x45 = -1;
	int64_t x47 = -75171LL;
	int8_t x48 = -1;

    t6 = (((x45*x46)^x47)%x48);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x49 = -4721LL;
	uint64_t x50 = UINT64_MAX;
	int64_t x52 = -656857655LL;
	volatile uint64_t t7 = 8877671562022389069LLU;

    t7 = (((x49*x50)^x51)%x52);

    if (t7 != 4722LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x53 = -1;
	uint8_t x55 = 28U;
	int64_t x56 = -7099907959356LL;
	volatile int64_t t8 = -4501460494182036734LL;

    t8 = (((x53*x54)^x55)%x56);

    if (t8 != 4294967265LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x61 = -28996798084132898LL;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MAX;
	int64_t t9 = 817824LL;

    t9 = (((x61*x62)^x63)%x64);

    if (t9 != -1145179683LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x69 = -1;
	int32_t x70 = -111801;
	static uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	volatile int32_t t10 = -214;

    t10 = (((x69*x70)^x71)%x72);

    if (t10 != 70) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x77 = 6;
	static int32_t x78 = -1184;
	int32_t x80 = 123;
	volatile int32_t t11 = -12332;

    t11 = (((x77*x78)^x79)%x80);

    if (t11 != -93) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x81 = INT8_MIN;
	int64_t x82 = -1LL;
	static int16_t x83 = INT16_MAX;

    t12 = (((x81*x82)^x83)%x84);

    if (t12 != 32639LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x85 = UINT32_MAX;
	int16_t x87 = -1;
	int32_t x88 = -11380;
	volatile uint32_t t13 = 21859194U;

    t13 = (((x85*x86)^x87)%x88);

    if (t13 != 11251U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x89 = 8315409232LL;
	int8_t x91 = INT8_MAX;
	int64_t t14 = 3LL;

    t14 = (((x89*x90)^x91)%x92);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x94 = -330449556858LL;
	volatile int16_t x95 = INT16_MIN;
	volatile int8_t x96 = INT8_MAX;
	volatile int64_t t15 = 1368097653LL;

    t15 = (((x93*x94)^x95)%x96);

    if (t15 != -92LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x97 = 125178U;
	int16_t x98 = -203;
	static int16_t x99 = -1;
	uint32_t t16 = 220U;

    t16 = (((x97*x98)^x99)%x100);

    if (t16 != 49088U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x101 = 313951859LLU;
	int16_t x103 = -3760;
	uint16_t x104 = UINT16_MAX;

    t17 = (((x101*x102)^x103)%x104);

    if (t17 != 32601LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x105 = INT8_MIN;
	int16_t x108 = INT16_MIN;
	uint32_t t18 = 63764U;

    t18 = (((x105*x106)^x107)%x108);

    if (t18 != 16519U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x113 = -12;
	static int16_t x115 = INT16_MAX;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t19 = -947706329;

    t19 = (((x113*x114)^x115)%x116);

    if (t19 != -31245) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x118 = INT16_MIN;
	int32_t x120 = 55945046;
	int32_t t20 = 12657;

    t20 = (((x117*x118)^x119)%x120);

    if (t20 != 30496810) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x121 = 9;
	static uint64_t x122 = UINT64_MAX;
	int16_t x123 = 12;
	uint64_t x124 = 64286465829731978LLU;
	volatile uint64_t t21 = 13892419115592LLU;

    t21 = (((x121*x122)^x123)%x124);

    if (t21 != 60814846406205903LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x137 = 63756U;
	static int32_t x138 = INT32_MAX;
	int16_t x140 = INT16_MIN;

    t22 = (((x137*x138)^x139)%x140);

    if (t22 != 63755U) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x141 = 2;
	static uint32_t x142 = 0U;
	volatile int16_t x143 = -2;
	static int16_t x144 = -1;
	uint32_t t23 = 0U;

    t23 = (((x141*x142)^x143)%x144);

    if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x150 = 0;
	int16_t x151 = -1;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t24 = 11487241008LLU;

    t24 = (((x149*x150)^x151)%x152);

    if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x153 = -1736393825LL;
	uint16_t x154 = 0U;
	int32_t x155 = 22551245;
	uint8_t x156 = 55U;
	volatile int64_t t25 = 28865LL;

    t25 = (((x153*x154)^x155)%x156);

    if (t25 != 35LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x157 = 156;
	int64_t x159 = 1655LL;
	int8_t x160 = -1;
	int64_t t26 = -13703624LL;

    t26 = (((x157*x158)^x159)%x160);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x161 = 0U;
	int16_t x162 = -3294;
	volatile uint32_t x163 = 353U;
	int8_t x164 = INT8_MIN;
	uint32_t t27 = 207702U;

    t27 = (((x161*x162)^x163)%x164);

    if (t27 != 353U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x169 = UINT32_MAX;
	int16_t x170 = -1103;
	int64_t x171 = -82LL;
	volatile int64_t x172 = 93357547LL;

    t28 = (((x169*x170)^x171)%x172);

    if (t28 != -1055LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x173 = INT32_MAX;
	volatile int64_t x174 = -1LL;
	int16_t x175 = 31;
	uint32_t x176 = 324U;
	int64_t t29 = 20159924929672603LL;

    t29 = (((x173*x174)^x175)%x176);

    if (t29 != -278LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x177 = -1;
	int8_t x178 = INT8_MAX;
	int32_t x179 = -1;
	int64_t x180 = 853957918840LL;
	static int64_t t30 = 15707899825409LL;

    t30 = (((x177*x178)^x179)%x180);

    if (t30 != 126LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x189 = 27601471;
	int16_t x190 = -1;
	int16_t x191 = 0;
	int8_t x192 = -28;
	static int32_t t31 = -4;

    t31 = (((x189*x190)^x191)%x192);

    if (t31 != -23) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x193 = INT16_MIN;
	int64_t x194 = 75273178LL;
	int32_t x195 = -1;
	int16_t x196 = INT16_MAX;

    t32 = (((x193*x194)^x195)%x196);

    if (t32 != 7378LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x201 = 99315LLU;
	uint8_t x202 = UINT8_MAX;
	uint32_t x204 = 900U;
	uint64_t t33 = 1175983751145LLU;

    t33 = (((x201*x202)^x203)%x204);

    if (t33 != 589LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x209 = UINT64_MAX;
	static int32_t x210 = INT32_MAX;
	uint8_t x211 = 29U;
	uint64_t t34 = 15340809659417189LLU;

    t34 = (((x209*x210)^x211)%x212);

    if (t34 != 32796LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x214 = INT16_MIN;
	uint16_t x215 = 387U;
	int8_t x216 = -5;
	volatile int32_t t35 = 44983;

    t35 = (((x213*x214)^x215)%x216);

    if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x217 = INT32_MIN;
	uint64_t x218 = 3418451127061930LLU;
	int8_t x220 = -1;
	uint64_t t36 = 22067151941187LLU;

    t36 = (((x217*x218)^x219)%x220);

    if (t36 != 16821464861912399871LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x221 = -57LL;
	static uint16_t x222 = UINT16_MAX;
	volatile int8_t x223 = 7;
	static uint16_t x224 = UINT16_MAX;

    t37 = (((x221*x222)^x223)%x224);

    if (t37 != -65530LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x229 = UINT32_MAX;
	static int16_t x230 = 79;
	uint16_t x232 = 30U;
	uint32_t t38 = 43271U;

    t38 = (((x229*x230)^x231)%x232);

    if (t38 != 19U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x233 = -1LL;
	int32_t x235 = INT32_MIN;
	int64_t t39 = -8LL;

    t39 = (((x233*x234)^x235)%x236);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x237 = -29;
	int16_t x238 = 7;
	int8_t x239 = -1;
	volatile uint32_t x240 = UINT32_MAX;
	static volatile uint32_t t40 = 5U;

    t40 = (((x237*x238)^x239)%x240);

    if (t40 != 202U) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x241 = -1;
	int8_t x243 = -1;
	int8_t x244 = INT8_MIN;

    t41 = (((x241*x242)^x243)%x244);

    if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x245 = UINT64_MAX;
	static int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	static uint64_t x248 = UINT64_MAX;
	uint64_t t42 = 103631656684214522LLU;

    t42 = (((x245*x246)^x247)%x248);

    if (t42 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x249 = -1LL;
	static volatile int8_t x250 = -1;
	int8_t x251 = -1;
	int8_t x252 = INT8_MIN;
	int64_t t43 = -2041220LL;

    t43 = (((x249*x250)^x251)%x252);

    if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x253 = INT32_MIN;
	int64_t x254 = -1LL;
	int16_t x255 = -1;
	uint8_t x256 = UINT8_MAX;
	static volatile int64_t t44 = 16648087LL;

    t44 = (((x253*x254)^x255)%x256);

    if (t44 != -129LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x261 = -1;
	uint16_t x262 = UINT16_MAX;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t45 = 11998093U;

    t45 = (((x261*x262)^x263)%x264);

    if (t45 != 65534U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x265 = INT8_MAX;
	static int64_t x266 = -104389429593511LL;
	uint32_t x267 = UINT32_MAX;
	volatile int8_t x268 = -9;
	static int64_t t46 = 3LL;

    t46 = (((x265*x266)^x267)%x268);

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x269 = INT8_MIN;
	int32_t x270 = -1862867;
	uint16_t x271 = 76U;
	int32_t t47 = -8;

    t47 = (((x269*x270)^x271)%x272);

    if (t47 != 187) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	static volatile uint8_t x274 = 14U;
	uint16_t x275 = UINT16_MAX;
	static uint8_t x276 = UINT8_MAX;
	uint32_t t48 = 33903U;

    t48 = (((x273*x274)^x275)%x276);

    if (t48 != 13U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x277 = INT8_MIN;
	uint32_t x279 = 567U;
	static volatile uint32_t t49 = 209652235U;

    t49 = (((x277*x278)^x279)%x280);

    if (t49 != 4294951607U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x281 = 10;
	uint64_t x284 = 1724040778LLU;
	uint64_t t50 = 151706475605LLU;

    t50 = (((x281*x282)^x283)%x284);

    if (t50 != 680567731LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x285 = 0U;
	static uint8_t x286 = UINT8_MAX;
	static uint8_t x288 = UINT8_MAX;
	volatile uint32_t t51 = 1751311U;

    t51 = (((x285*x286)^x287)%x288);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	int16_t x290 = -49;
	int64_t x291 = -1LL;
	int16_t x292 = -1;
	uint64_t t52 = 2677380278901LLU;

    t52 = (((x289*x290)^x291)%x292);

    if (t52 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x297 = -1;
	volatile uint16_t x298 = UINT16_MAX;
	int16_t x299 = 63;
	uint32_t t53 = 0U;

    t53 = (((x297*x298)^x299)%x300);

    if (t53 != 100178102U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x301 = 14U;
	uint64_t x303 = UINT64_MAX;
	uint64_t x304 = 30149074LLU;
	uint64_t t54 = 276848922782LLU;

    t54 = (((x301*x302)^x303)%x304);

    if (t54 != 29474095LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x313 = -28;
	volatile int64_t t55 = 0LL;

    t55 = (((x313*x314)^x315)%x316);

    if (t55 != 37LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x321 = INT16_MAX;
	uint16_t x322 = UINT16_MAX;
	int32_t x323 = INT32_MAX;
	static uint16_t x324 = UINT16_MAX;
	int32_t t56 = 1;

    t56 = (((x321*x322)^x323)%x324);

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = -1;

    t57 = (((x325*x326)^x327)%x328);

    if (t57 != 32642U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x333 = -1;
	volatile int32_t x335 = -478;
	int32_t x336 = INT32_MIN;
	volatile int32_t t58 = 0;

    t58 = (((x333*x334)^x335)%x336);

    if (t58 != -474) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x349 = 33249;
	int8_t x350 = -1;
	int8_t x352 = INT8_MIN;
	volatile int32_t t59 = -120;

    t59 = (((x349*x350)^x351)%x352);

    if (t59 != -32) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x353 = -1;
	int32_t x355 = -1;
	uint64_t x356 = 62113033511747784LLU;
	uint64_t t60 = 14625434LLU;

    t60 = (((x353*x354)^x355)%x356);

    if (t60 != 2147483646LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x365 = UINT64_MAX;
	static int8_t x366 = INT8_MAX;
	int8_t x368 = INT8_MIN;

    t61 = (((x365*x366)^x367)%x368);

    if (t61 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x373 = UINT16_MAX;
	static volatile int8_t x375 = INT8_MIN;
	static int8_t x376 = INT8_MIN;
	int32_t t62 = -3665;

    t62 = (((x373*x374)^x375)%x376);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x377 = INT32_MIN;
	uint32_t x379 = 15U;
	static int8_t x380 = INT8_MIN;
	uint32_t t63 = 1525159280U;

    t63 = (((x377*x378)^x379)%x380);

    if (t63 != 15U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x381 = 5777502U;
	uint64_t x382 = 931504248LLU;
	int64_t x383 = -1LL;
	int32_t x384 = INT32_MIN;

    t64 = (((x381*x382)^x383)%x384);

    if (t64 != 18441362306053723119LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x385 = INT32_MIN;
	volatile uint32_t x386 = 59476U;
	static volatile uint64_t t65 = 99891150520784747LLU;

    t65 = (((x385*x386)^x387)%x388);

    if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x389 = 13;
	uint8_t x390 = 12U;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = UINT8_MAX;

    t66 = (((x389*x390)^x391)%x392);

    if (t66 != 99LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x393 = 23187U;
	static uint8_t x394 = 42U;
	int64_t x395 = INT64_MAX;
	static uint16_t x396 = UINT16_MAX;
	int64_t t67 = -3299204LL;

    t67 = (((x393*x394)^x395)%x396);

    if (t67 != 41938LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x397 = 896U;
	uint8_t x398 = 8U;
	volatile int32_t x400 = 388984967;

    t68 = (((x397*x398)^x399)%x400);

    if (t68 != 2508) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x401 = UINT32_MAX;
	int32_t x402 = -7622807;
	volatile uint8_t x403 = 84U;
	int16_t x404 = INT16_MAX;
	static uint32_t t69 = 1U;

    t69 = (((x401*x402)^x403)%x404);

    if (t69 != 20907U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x405 = UINT64_MAX;
	uint64_t x406 = 13840336835LLU;
	static int16_t x408 = -14;

    t70 = (((x405*x406)^x407)%x408);

    if (t70 != 13840336829LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x410 = INT16_MIN;
	uint16_t x411 = 16U;
	int32_t x412 = -1;
	int32_t t71 = 7;

    t71 = (((x409*x410)^x411)%x412);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x414 = 28432159U;
	int32_t x416 = INT32_MAX;
	int64_t t72 = 11635123424LL;

    t72 = (((x413*x414)^x415)%x416);

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x421 = 9U;
	int8_t x422 = INT8_MIN;
	uint64_t x423 = 3986976244LLU;
	int8_t x424 = -7;
	volatile uint64_t t73 = 464LLU;

    t73 = (((x421*x422)^x423)%x424);

    if (t73 != 18446744069722576500LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x425 = -42864673369042LL;
	static int16_t x428 = INT16_MAX;
	int64_t t74 = -1392058LL;

    t74 = (((x425*x426)^x427)%x428);

    if (t74 != 22987LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x429 = UINT32_MAX;
	volatile int16_t x430 = INT16_MAX;
	int8_t x431 = -1;
	uint8_t x432 = UINT8_MAX;

    t75 = (((x429*x430)^x431)%x432);

    if (t75 != 126U) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x433 = UINT8_MAX;
	uint64_t x434 = 340050LLU;
	static int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	uint64_t t76 = 1099880760LLU;

    t76 = (((x433*x434)^x435)%x436);

    if (t76 != 9223372034794004910LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x438 = INT8_MIN;
	int16_t x439 = 464;
	static int64_t x440 = INT64_MIN;
	int64_t t77 = 7788554294LL;

    t77 = (((x437*x438)^x439)%x440);

    if (t77 != -4193968LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x441 = -1223957079538922LL;
	int32_t x442 = -1;
	int8_t x444 = INT8_MIN;
	int64_t t78 = 28148416980LL;

    t78 = (((x441*x442)^x443)%x444);

    if (t78 != -22LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x445 = 1313U;
	uint16_t x446 = 2U;
	volatile uint16_t x447 = 7071U;
	uint64_t x448 = 24056LLU;

    t79 = (((x445*x446)^x447)%x448);

    if (t79 != 4573LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x449 = INT8_MAX;
	int8_t x450 = INT8_MAX;
	int64_t t80 = -91078154LL;

    t80 = (((x449*x450)^x451)%x452);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x453 = INT8_MIN;
	volatile int8_t x454 = 26;
	int16_t x455 = -1;
	int32_t x456 = INT32_MIN;
	volatile int32_t t81 = 12253026;

    t81 = (((x453*x454)^x455)%x456);

    if (t81 != 3327) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x457 = -1;
	uint8_t x458 = 1U;
	int32_t x459 = -1;
	int8_t x460 = -12;

    t82 = (((x457*x458)^x459)%x460);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x461 = 572709481;
	int64_t x462 = -1LL;
	int8_t x463 = -1;
	static volatile int64_t t83 = -81619501132LL;

    t83 = (((x461*x462)^x463)%x464);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x469 = -1;
	static int16_t x470 = -1;
	static int32_t x471 = INT32_MAX;
	int8_t x472 = INT8_MIN;
	volatile int32_t t84 = 16184;

    t84 = (((x469*x470)^x471)%x472);

    if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x473 = INT8_MAX;
	volatile uint8_t x475 = 108U;
	static uint16_t x476 = 39U;

    t85 = (((x473*x474)^x475)%x476);

    if (t85 != 22) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x477 = INT16_MAX;
	volatile uint32_t x480 = 399U;
	volatile int64_t t86 = 23435LL;

    t86 = (((x477*x478)^x479)%x480);

    if (t86 != 394LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x485 = -1LL;
	uint64_t x486 = UINT64_MAX;
	int32_t x487 = -1;
	static int8_t x488 = INT8_MIN;
	volatile uint64_t t87 = 416535LLU;

    t87 = (((x485*x486)^x487)%x488);

    if (t87 != 126LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x501 = -17;
	volatile uint64_t x502 = 1060301697LLU;
	int32_t x504 = INT32_MIN;
	static uint64_t t88 = 48700811LLU;

    t88 = (((x501*x502)^x503)%x504);

    if (t88 != 18446744055684416916LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x510 = UINT16_MAX;
	int16_t x511 = INT16_MIN;
	volatile uint16_t x512 = 16U;

    t89 = (((x509*x510)^x511)%x512);

    if (t89 != 7U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x514 = INT8_MIN;
	int32_t x516 = INT32_MIN;
	volatile uint32_t t90 = 13U;

    t90 = (((x513*x514)^x515)%x516);

    if (t90 != 23508096U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x518 = 5200327;
	static uint64_t x519 = UINT64_MAX;
	volatile int32_t x520 = INT32_MIN;
	uint64_t t91 = 960512138LLU;

    t91 = (((x517*x518)^x519)%x520);

    if (t91 != 2069478742LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x521 = UINT32_MAX;
	int16_t x522 = INT16_MIN;
	static int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MAX;
	int64_t t92 = -134LL;

    t92 = (((x521*x522)^x523)%x524);

    if (t92 != -126LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x526 = 1163977640794890540LLU;
	uint16_t x527 = 59U;
	int8_t x528 = INT8_MIN;
	static volatile uint64_t t93 = 31LLU;

    t93 = (((x525*x526)^x527)%x528);

    if (t93 != 11439395428395412607LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x529 = 43U;
	int8_t x530 = -1;
	int16_t x532 = 50;
	volatile uint64_t t94 = 2965769505423LLU;

    t94 = (((x529*x530)^x531)%x532);

    if (t94 != 49LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x533 = INT8_MAX;
	int64_t x535 = -2183701312LL;
	uint32_t x536 = 8U;
	int64_t t95 = 3255LL;

    t95 = (((x533*x534)^x535)%x536);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x540 = 31339728403311LL;
	volatile int64_t t96 = 44671572212994011LL;

    t96 = (((x537*x538)^x539)%x540);

    if (t96 != 2147483704LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x557 = 68540403503556584LLU;
	int64_t x559 = -1LL;
	volatile uint64_t t97 = 793566500289LLU;

    t97 = (((x557*x558)^x559)%x560);

    if (t97 != 8LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x567 = 0;
	uint8_t x568 = UINT8_MAX;

    t98 = (((x565*x566)^x567)%x568);

    if (t98 != 250U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x571 = UINT32_MAX;
	volatile int16_t x572 = INT16_MAX;
	volatile int64_t t99 = -1687165LL;

    t99 = (((x569*x570)^x571)%x572);

    if (t99 != 32758LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x582 = 1100308350076734LLU;
	volatile int32_t x583 = INT32_MAX;
	int64_t x584 = -16473428494015LL;
	volatile uint64_t t100 = 5560642780929816LLU;

    t100 = (((x581*x582)^x583)%x584);

    if (t100 != 2583516942845309941LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x585 = UINT64_MAX;
	static volatile uint8_t x586 = UINT8_MAX;
	static int64_t x587 = INT64_MIN;
	static uint64_t t101 = 25814693603520786LLU;

    t101 = (((x585*x586)^x587)%x588);

    if (t101 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x589 = INT16_MAX;
	int64_t x592 = -1368900126405033147LL;
	volatile int64_t t102 = 7055857998497451LL;

    t102 = (((x589*x590)^x591)%x592);

    if (t102 != 2147581950LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x594 = 560U;
	int32_t x595 = INT32_MAX;
	static int64_t x596 = -1LL;
	volatile int64_t t103 = 2807593267680751LL;

    t103 = (((x593*x594)^x595)%x596);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x601 = UINT64_MAX;
	int32_t x602 = -1;
	int64_t x604 = -1LL;
	volatile uint64_t t104 = 329874538141LLU;

    t104 = (((x601*x602)^x603)%x604);

    if (t104 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x605 = UINT8_MAX;
	static int8_t x606 = INT8_MIN;
	volatile uint32_t x608 = UINT32_MAX;
	volatile uint32_t t105 = 129835U;

    t105 = (((x605*x606)^x607)%x608);

    if (t105 != 32512U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x613 = 1U;
	uint64_t x614 = UINT64_MAX;
	uint16_t x615 = UINT16_MAX;
	volatile uint32_t x616 = 24309U;
	uint64_t t106 = 94848365998LLU;

    t106 = (((x613*x614)^x615)%x616);

    if (t106 != 22869LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x617 = -1;
	static volatile int16_t x618 = -5015;
	volatile uint64_t x620 = 53538664182115LLU;
	uint64_t t107 = 1085270125714309LLU;

    t107 = (((x617*x618)^x619)%x620);

    if (t107 != 50868426005384LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x621 = -1LL;
	volatile uint16_t x622 = 1U;
	static uint16_t x623 = 0U;
	int64_t t108 = 8280542604881LL;

    t108 = (((x621*x622)^x623)%x624);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x627 = INT32_MAX;
	int64_t t109 = 11553319138565LL;

    t109 = (((x625*x626)^x627)%x628);

    if (t109 != 706779526LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x630 = 605049470LLU;
	static int16_t x631 = INT16_MIN;
	uint64_t x632 = UINT64_MAX;
	uint64_t t110 = 69142019381000LLU;

    t110 = (((x629*x630)^x631)%x632);

    if (t110 != 18446743919421926274LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x633 = UINT16_MAX;
	int8_t x634 = INT8_MIN;
	uint16_t x635 = 24357U;
	static int16_t x636 = INT16_MAX;
	int32_t t111 = 17;

    t111 = (((x633*x634)^x635)%x636);

    if (t111 != -8538) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x641 = INT32_MIN;
	volatile uint32_t x642 = 1445258130U;
	uint64_t x643 = UINT64_MAX;
	uint16_t x644 = UINT16_MAX;
	uint64_t t112 = 188551864534150LLU;

    t112 = (((x641*x642)^x643)%x644);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x645 = 937641222U;
	uint32_t x646 = 143U;
	uint8_t x647 = 2U;
	int64_t x648 = -1LL;
	int64_t t113 = 6870553350136LL;

    t113 = (((x645*x646)^x647)%x648);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x649 = 22150192424948364LLU;
	int64_t x650 = INT64_MAX;
	volatile int32_t x651 = INT32_MIN;
	uint64_t t114 = 507384677696307023LLU;

    t114 = (((x649*x650)^x651)%x652);

    if (t114 != 22150194062552436LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	int8_t x662 = INT8_MIN;
	uint64_t x663 = 113664838LLU;
	int8_t x664 = INT8_MAX;
	static volatile uint64_t t115 = 498317348LLU;

    t115 = (((x661*x662)^x663)%x664);

    if (t115 != 93LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x667 = -62;
	volatile int64_t t116 = 991674434800LL;

    t116 = (((x665*x666)^x667)%x668);

    if (t116 != -48989LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x669 = 15806593997359797LL;
	static volatile uint64_t x670 = 41180971998LLU;
	int8_t x672 = 1;
	uint64_t t117 = 10109935464901223LLU;

    t117 = (((x669*x670)^x671)%x672);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x673 = 11482U;
	uint64_t x674 = 84723038654137LLU;
	static int16_t x675 = INT16_MAX;
	uint64_t t118 = 423851583532LLU;

    t118 = (((x673*x674)^x675)%x676);

    if (t118 != 972789929826790005LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x677 = -13956;
	uint8_t x678 = 0U;
	int64_t x679 = INT64_MIN;
	volatile int32_t x680 = INT32_MIN;
	int64_t t119 = -3989LL;

    t119 = (((x677*x678)^x679)%x680);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x681 = 771U;
	int32_t x682 = INT32_MIN;
	uint32_t x683 = 20U;
	uint64_t t120 = 3404LLU;

    t120 = (((x681*x682)^x683)%x684);

    if (t120 != 2147483668LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x689 = INT8_MIN;
	int16_t x690 = INT16_MIN;
	int32_t x691 = -82093;
	volatile int64_t x692 = -1LL;
	int64_t t121 = -7007LL;

    t121 = (((x689*x690)^x691)%x692);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x705 = 0;
	uint64_t x706 = 1431013139LLU;
	int16_t x708 = 106;
	volatile uint64_t t122 = 20900662531LLU;

    t122 = (((x705*x706)^x707)%x708);

    if (t122 != 79LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x714 = INT16_MIN;
	int8_t x715 = -1;
	uint64_t x716 = 21045435252LLU;
	volatile uint64_t t123 = 44962662195LLU;

    t123 = (((x713*x714)^x715)%x716);

    if (t123 != 8439727391LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x721 = 2722U;
	int32_t x722 = 46;
	int32_t x724 = INT32_MIN;
	int32_t t124 = -8225172;

    t124 = (((x721*x722)^x723)%x724);

    if (t124 != -2147358436) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x726 = -1LL;
	static uint16_t x727 = 1284U;
	int64_t t125 = 51192458716337782LL;

    t125 = (((x725*x726)^x727)%x728);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x729 = 1U;
	volatile int32_t x730 = INT32_MIN;
	uint32_t x731 = 4102U;
	int64_t x732 = INT64_MIN;
	static volatile int64_t t126 = -25227LL;

    t126 = (((x729*x730)^x731)%x732);

    if (t126 != 2147487750LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x733 = -2035423001670LL;
	int8_t x734 = INT8_MIN;
	volatile int16_t x735 = INT16_MAX;
	int64_t x736 = 422278LL;
	static int64_t t127 = -696LL;

    t127 = (((x733*x734)^x735)%x736);

    if (t127 != 309819LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x741 = 31;
	volatile int8_t x744 = -1;
	static volatile int32_t t128 = -25;

    t128 = (((x741*x742)^x743)%x744);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x746 = 3848LLU;
	int32_t x747 = -21;
	int32_t x748 = INT32_MAX;
	static volatile uint64_t t129 = 1172LLU;

    t129 = (((x745*x746)^x747)%x748);

    if (t129 != 3859LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x754 = -1;
	volatile uint8_t x755 = 0U;
	int32_t x756 = INT32_MIN;
	volatile int64_t t130 = -423735992096LL;

    t130 = (((x753*x754)^x755)%x756);

    if (t130 != -2147483647LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x759 = -1LL;
	uint64_t x760 = UINT64_MAX;

    t131 = (((x757*x758)^x759)%x760);

    if (t131 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x761 = -1;
	int64_t x763 = INT64_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile int64_t t132 = -41145050931LL;

    t132 = (((x761*x762)^x763)%x764);

    if (t132 != -2147483647LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x765 = -1LL;
	volatile int16_t x766 = -1239;

    t133 = (((x765*x766)^x767)%x768);

    if (t133 != 18446744071562069207LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x769 = -5;
	volatile uint64_t x771 = 967335393948177LLU;
	static volatile uint64_t t134 = 107LLU;

    t134 = (((x769*x770)^x771)%x772);

    if (t134 != 9222404701460827040LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x773 = INT32_MAX;
	int8_t x774 = -1;
	uint64_t x776 = 94LLU;
	uint64_t t135 = 80522727860LLU;

    t135 = (((x773*x774)^x775)%x776);

    if (t135 != 6LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x777 = 4U;
	int16_t x778 = 25;
	int16_t x779 = INT16_MAX;
	int64_t x780 = -1LL;
	int64_t t136 = 17971LL;

    t136 = (((x777*x778)^x779)%x780);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x782 = 53;
	int8_t x784 = -1;
	int64_t t137 = -31669470LL;

    t137 = (((x781*x782)^x783)%x784);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x785 = -1;
	uint8_t x786 = 112U;

    t138 = (((x785*x786)^x787)%x788);

    if (t138 != 2994U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x789 = INT8_MAX;
	uint32_t x790 = 28U;
	int8_t x791 = -2;
	uint32_t t139 = 1857766U;

    t139 = (((x789*x790)^x791)%x792);

    if (t139 != 60389U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x793 = 2453917098514235018LLU;
	volatile int32_t x794 = INT32_MIN;
	volatile int16_t x795 = INT16_MIN;
	int32_t x796 = INT32_MAX;
	volatile uint64_t t140 = 28289793LLU;

    t140 = (((x793*x794)^x795)%x796);

    if (t140 != 87178893LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x797 = INT16_MIN;
	static uint64_t x798 = 352517LLU;
	uint32_t x799 = UINT32_MAX;
	volatile uint16_t x800 = 24U;
	uint64_t t141 = 1756678399575LLU;

    t141 = (((x797*x798)^x799)%x800);

    if (t141 != 23LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x805 = -8006;
	int64_t x806 = -1LL;
	int64_t x807 = -1LL;
	volatile int32_t x808 = INT32_MIN;
	int64_t t142 = 87LL;

    t142 = (((x805*x806)^x807)%x808);

    if (t142 != -8007LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x809 = -49;
	static int32_t x811 = INT32_MAX;
	volatile int8_t x812 = 49;
	int32_t t143 = -6326638;

    t143 = (((x809*x810)^x811)%x812);

    if (t143 != -45) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x814 = INT8_MAX;
	int32_t x816 = 457841;
	static volatile uint64_t t144 = 14971234LLU;

    t144 = (((x813*x814)^x815)%x816);

    if (t144 != 422840LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x817 = 2947U;
	int16_t x819 = INT16_MAX;
	volatile int32_t x820 = 4;
	volatile int32_t t145 = -617567;

    t145 = (((x817*x818)^x819)%x820);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x826 = INT32_MAX;
	int64_t x827 = 104LL;
	uint16_t x828 = 293U;
	volatile int64_t t146 = -535395080304222907LL;

    t146 = (((x825*x826)^x827)%x828);

    if (t146 != 25LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x833 = -1;
	int32_t x834 = -196102050;
	int8_t x835 = -1;
	int16_t x836 = -1;
	int32_t t147 = 0;

    t147 = (((x833*x834)^x835)%x836);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x837 = UINT16_MAX;
	static volatile int8_t x838 = INT8_MIN;
	int64_t x840 = INT64_MAX;
	int64_t t148 = 0LL;

    t148 = (((x837*x838)^x839)%x840);

    if (t148 != -8388429LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x841 = 826U;
	int8_t x842 = INT8_MAX;
	uint16_t x843 = 284U;
	static int8_t x844 = 1;
	volatile int32_t t149 = -100313;

    t149 = (((x841*x842)^x843)%x844);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x849 = -1;
	int8_t x850 = 7;
	volatile int8_t x852 = -1;
	static int32_t t150 = -667151;

    t150 = (((x849*x850)^x851)%x852);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x857 = UINT8_MAX;
	static int64_t x858 = -1LL;
	int8_t x860 = INT8_MIN;
	int64_t t151 = 31442071546LL;

    t151 = (((x857*x858)^x859)%x860);

    if (t151 != -127LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x861 = 9619550606717748LL;
	volatile uint64_t x862 = UINT64_MAX;
	int16_t x864 = INT16_MAX;
	volatile uint64_t t152 = 3LLU;

    t152 = (((x861*x862)^x863)%x864);

    if (t152 != 18826LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x869 = INT16_MIN;
	static int8_t x870 = INT8_MIN;
	uint64_t x871 = 0LLU;
	volatile uint64_t x872 = 1867LLU;
	volatile uint64_t t153 = 3902568LLU;

    t153 = (((x869*x870)^x871)%x872);

    if (t153 != 1022LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x873 = UINT64_MAX;
	static int32_t x874 = 1499;
	volatile uint64_t x875 = UINT64_MAX;
	int8_t x876 = INT8_MIN;

    t154 = (((x873*x874)^x875)%x876);

    if (t154 != 1498LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x877 = -2;
	int8_t x879 = INT8_MAX;
	volatile uint16_t x880 = UINT16_MAX;
	int64_t t155 = -371277LL;

    t155 = (((x877*x878)^x879)%x880);

    if (t155 != 125LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x881 = -1;
	int64_t x882 = -1LL;
	int32_t x883 = INT32_MIN;
	int64_t t156 = -3266215030555047LL;

    t156 = (((x881*x882)^x883)%x884);

    if (t156 != -161LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x885 = UINT16_MAX;
	uint8_t x886 = 37U;
	volatile int64_t x887 = -15232LL;

    t157 = (((x885*x886)^x887)%x888);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x890 = UINT16_MAX;
	int8_t x891 = -1;

    t158 = (((x889*x890)^x891)%x892);

    if (t158 != 209) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x895 = INT8_MIN;
	int32_t x896 = INT32_MIN;
	uint32_t t159 = 5722444U;

    t159 = (((x893*x894)^x895)%x896);

    if (t159 != 53923U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x897 = UINT8_MAX;
	int16_t x898 = INT16_MIN;
	int64_t t160 = 332LL;

    t160 = (((x897*x898)^x899)%x900);

    if (t160 != 8LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x901 = -1LL;
	int16_t x902 = 11760;
	uint8_t x903 = UINT8_MAX;
	int64_t x904 = INT64_MAX;

    t161 = (((x901*x902)^x903)%x904);

    if (t161 != -11537LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x909 = 1160U;
	int8_t x910 = INT8_MAX;
	int16_t x912 = -1;
	int32_t t162 = -1;

    t162 = (((x909*x910)^x911)%x912);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x913 = 1;
	uint8_t x916 = UINT8_MAX;
	volatile int64_t t163 = 3614923LL;

    t163 = (((x913*x914)^x915)%x916);

    if (t163 != 127LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x917 = -1;
	int64_t x918 = INT64_MAX;
	int16_t x919 = -1;
	static volatile int32_t x920 = INT32_MIN;
	volatile int64_t t164 = 46885713681281LL;

    t164 = (((x917*x918)^x919)%x920);

    if (t164 != 2147483646LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x921 = 1;
	volatile int8_t x922 = -1;
	static int16_t x923 = 2262;
	static uint32_t x924 = 1U;
	volatile uint32_t t165 = 34820207U;

    t165 = (((x921*x922)^x923)%x924);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x925 = INT32_MIN;
	volatile uint32_t x926 = 8U;
	int32_t x927 = -1;
	static uint32_t t166 = 3U;

    t166 = (((x925*x926)^x927)%x928);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x933 = 38;
	uint16_t x934 = 7U;
	uint64_t x936 = 488305860071158LLU;
	uint64_t t167 = 154294613220450430LLU;

    t167 = (((x933*x934)^x935)%x936);

    if (t167 != 13597801415583LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x945 = INT32_MAX;
	int32_t x946 = -1;
	int16_t x948 = 244;
	int32_t t168 = 0;

    t168 = (((x945*x946)^x947)%x948);

    if (t168 != 118) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x949 = UINT64_MAX;
	uint64_t x950 = 7615436855073LLU;
	int64_t x951 = -10276499525278008LL;
	int32_t x952 = 11384;
	uint64_t t169 = 3LLU;

    t169 = (((x949*x950)^x951)%x952);

    if (t169 != 2679LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x954 = 61U;
	uint64_t x955 = 3542361666LLU;
	int8_t x956 = -1;
	volatile uint64_t t170 = 338180056070943LLU;

    t170 = (((x953*x954)^x955)%x956);

    if (t170 != 3500876512LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x957 = -3LL;
	volatile int32_t x958 = INT32_MAX;
	int32_t x959 = -1;
	volatile uint32_t x960 = 2316U;
	volatile int64_t t171 = -3029368771260371410LL;

    t171 = (((x957*x958)^x959)%x960);

    if (t171 != 1316LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x961 = -1;
	int16_t x962 = -1;
	int8_t x963 = INT8_MAX;
	int8_t x964 = -1;
	int32_t t172 = -189325;

    t172 = (((x961*x962)^x963)%x964);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x969 = 67975166U;
	static int8_t x971 = INT8_MAX;
	volatile int16_t x972 = -4935;
	uint32_t t173 = 12U;

    t173 = (((x969*x970)^x971)%x972);

    if (t173 != 2536345001U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x977 = -64284LL;
	volatile int32_t x978 = -1;
	uint32_t x979 = 129980U;
	volatile uint64_t t174 = 1077639250LLU;

    t174 = (((x977*x978)^x979)%x980);

    if (t174 != 2074LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x986 = -2;
	uint64_t x988 = UINT64_MAX;

    t175 = (((x985*x986)^x987)%x988);

    if (t175 != 2147483480LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x993 = INT8_MIN;
	volatile int32_t x994 = -4146707;
	uint8_t x995 = 1U;
	int16_t x996 = -1;
	volatile int32_t t176 = -7;

    t176 = (((x993*x994)^x995)%x996);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x997 = INT64_MAX;
	int32_t x998 = -1;
	int32_t x999 = -1138551;
	int16_t x1000 = -1;
	volatile int64_t t177 = -1LL;

    t177 = (((x997*x998)^x999)%x1000);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1001 = 24U;
	volatile uint16_t x1002 = 2U;
	int64_t x1003 = INT64_MIN;
	uint16_t x1004 = 708U;
	static volatile int64_t t178 = -1LL;

    t178 = (((x1001*x1002)^x1003)%x1004);

    if (t178 != -692LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1005 = 1U;
	volatile uint64_t x1008 = UINT64_MAX;
	volatile uint64_t t179 = 40449LLU;

    t179 = (((x1005*x1006)^x1007)%x1008);

    if (t179 != 18446744073709518872LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1009 = INT8_MAX;
	int8_t x1010 = INT8_MIN;
	int16_t x1011 = -29;

    t180 = (((x1009*x1010)^x1011)%x1012);

    if (t180 != 16227) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1017 = INT16_MIN;
	int16_t x1018 = INT16_MIN;
	volatile int64_t x1019 = INT64_MIN;
	static int64_t t181 = -14603LL;

    t181 = (((x1017*x1018)^x1019)%x1020);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1021 = 90U;
	volatile int8_t x1022 = INT8_MAX;
	uint64_t x1024 = 21424LLU;
	volatile uint64_t t182 = 1577390922896846LLU;

    t182 = (((x1021*x1022)^x1023)%x1024);

    if (t182 != 14702LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1025 = 241636LLU;
	int8_t x1027 = -19;
	int32_t x1028 = 15;
	volatile uint64_t t183 = 75LLU;

    t183 = (((x1025*x1026)^x1027)%x1028);

    if (t183 != 9LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1029 = 93U;
	uint16_t x1030 = 0U;
	int64_t x1031 = INT64_MAX;
	uint32_t x1032 = 164501141U;
	int64_t t184 = -3545587794909914222LL;

    t184 = (((x1029*x1030)^x1031)%x1032);

    if (t184 != 130130987LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x1037 = 12LLU;
	uint64_t t185 = 1582749946205LLU;

    t185 = (((x1037*x1038)^x1039)%x1040);

    if (t185 != 393088LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1041 = INT32_MIN;
	int64_t x1042 = -1LL;
	uint32_t x1043 = UINT32_MAX;
	int64_t t186 = -6485213117564813LL;

    t186 = (((x1041*x1042)^x1043)%x1044);

    if (t186 != 23LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1045 = 31U;
	int8_t x1046 = 4;
	volatile int8_t x1047 = INT8_MIN;
	uint32_t x1048 = 9863378U;

    t187 = (((x1045*x1046)^x1047)%x1048);

    if (t187 != 4397862U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1049 = 529752LLU;
	uint16_t x1050 = UINT16_MAX;
	uint64_t x1051 = 7061992892LLU;
	static volatile int8_t x1052 = INT8_MIN;
	static uint64_t t188 = 850718689LLU;

    t188 = (((x1049*x1050)^x1051)%x1052);

    if (t188 != 41634930452LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1057 = INT8_MAX;
	int8_t x1058 = 7;
	uint16_t x1060 = 12U;

    t189 = (((x1057*x1058)^x1059)%x1060);

    if (t189 != -7) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1061 = -1;
	volatile int64_t x1062 = -1LL;
	uint8_t x1063 = 108U;
	int64_t x1064 = INT64_MAX;
	static int64_t t190 = -234040240275518LL;

    t190 = (((x1061*x1062)^x1063)%x1064);

    if (t190 != 109LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x1065 = 74U;
	uint64_t x1067 = 4LLU;
	volatile uint64_t t191 = 275084278902552348LLU;

    t191 = (((x1065*x1066)^x1067)%x1068);

    if (t191 != 2485LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1074 = -1;
	int8_t x1076 = INT8_MIN;
	static int32_t t192 = -72994;

    t192 = (((x1073*x1074)^x1075)%x1076);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1081 = 7;
	uint16_t x1083 = 1U;
	int32_t x1084 = INT32_MIN;
	volatile int32_t t193 = 817;

    t193 = (((x1081*x1082)^x1083)%x1084);

    if (t193 != -895) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1085 = UINT16_MAX;
	int32_t x1087 = INT32_MIN;
	static volatile uint8_t x1088 = UINT8_MAX;
	static int32_t t194 = 1;

    t194 = (((x1085*x1086)^x1087)%x1088);

    if (t194 != 128) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1089 = -54;
	int64_t x1090 = -1LL;
	volatile int8_t x1091 = -1;
	int16_t x1092 = INT16_MIN;

    t195 = (((x1089*x1090)^x1091)%x1092);

    if (t195 != -55LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1097 = INT16_MAX;
	uint64_t x1098 = 788261773221LLU;
	static int64_t x1099 = -137421025594LL;
	static uint64_t t196 = 1385579LLU;

    t196 = (((x1097*x1098)^x1099)%x1100);

    if (t196 != 18420915104726118045LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1105 = 363428884755LL;
	static int16_t x1106 = -1;
	int16_t x1107 = INT16_MAX;
	static uint8_t x1108 = UINT8_MAX;
	static int64_t t197 = -36LL;

    t197 = (((x1105*x1106)^x1107)%x1108);

    if (t197 != -188LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1113 = INT8_MIN;
	uint32_t x1114 = 30556U;
	static int16_t x1115 = -2057;
	static int32_t x1116 = 23;
	volatile uint32_t t198 = 10083530U;

    t198 = (((x1113*x1114)^x1115)%x1116);

    if (t198 != 8U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1117 = -1LL;
	int32_t x1118 = -1;
	volatile int32_t x1119 = -3353;
	volatile int64_t t199 = -182390909271623LL;

    t199 = (((x1117*x1118)^x1119)%x1120);

    if (t199 != -334LL) { NG(); } else { ; }
	
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

