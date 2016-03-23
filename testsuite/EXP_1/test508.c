
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

int16_t x5 = INT16_MIN;
int16_t x6 = INT16_MAX;
static int32_t x11 = INT32_MAX;
volatile int32_t x18 = INT32_MIN;
static volatile uint64_t t2 = 3232041LLU;
int8_t x24 = INT8_MIN;
uint16_t x25 = 0U;
uint32_t x26 = 8195267U;
uint32_t x42 = 9695591U;
static int32_t x46 = -1;
volatile int32_t x54 = -238;
static uint8_t x55 = UINT8_MAX;
int64_t x56 = -1LL;
uint16_t x57 = UINT16_MAX;
volatile int64_t t8 = -69301191892258462LL;
int32_t x65 = -665083366;
uint32_t x66 = 5445262U;
uint8_t x67 = 1U;
int64_t x87 = 177041315824LL;
volatile int32_t x88 = INT32_MIN;
uint64_t x89 = UINT64_MAX;
int8_t x90 = INT8_MAX;
int8_t x97 = -2;
int32_t t15 = -10;
volatile int16_t x128 = -759;
int8_t x137 = 26;
static int32_t t19 = -754;
static int8_t x145 = 58;
volatile uint32_t x146 = 51U;
static uint64_t x148 = 83083340722772553LLU;
uint64_t t21 = 498485799688LLU;
int32_t x152 = INT32_MIN;
static int16_t x167 = -3132;
int8_t x178 = INT8_MIN;
int8_t x182 = -29;
uint32_t t27 = 23094U;
volatile uint8_t x188 = 1U;
static int8_t x190 = 1;
int8_t x192 = INT8_MIN;
static uint8_t x205 = UINT8_MAX;
volatile uint64_t t30 = 140559798187LLU;
volatile uint64_t t32 = 1775478657LLU;
static int16_t x227 = 8;
uint64_t x243 = 21474949LLU;
uint64_t x244 = 186495434610940826LLU;
int16_t x246 = -1;
uint32_t x253 = 44700343U;
int32_t t39 = 13042;
int64_t x264 = INT64_MAX;
static int16_t x270 = -7;
int16_t x271 = INT16_MIN;
int64_t x275 = 14336760LL;
int64_t x284 = INT64_MAX;
uint32_t x288 = 132036U;
int64_t x290 = 843653929731238151LL;
static int64_t x302 = -8643147970LL;
int32_t t50 = 508;
static uint32_t x311 = 14U;
int32_t x314 = -1;
volatile int32_t t52 = 2;
static uint8_t x330 = 52U;
uint32_t x335 = 582U;
static volatile int32_t x336 = INT32_MAX;
volatile int32_t t55 = -27330967;
volatile int8_t x339 = INT8_MAX;
int32_t t56 = -7;
static uint8_t x341 = 126U;
int32_t x344 = -123204;
int16_t x350 = INT16_MIN;
static volatile int32_t t58 = 6;
volatile int8_t x365 = 1;
static int8_t x366 = INT8_MAX;
int16_t x367 = -15;
volatile uint8_t x369 = UINT8_MAX;
int16_t x388 = -1;
int32_t x419 = INT32_MIN;
static int8_t x423 = 0;
volatile int16_t x424 = INT16_MIN;
volatile int32_t t68 = -2;
int64_t x456 = -309105814LL;
int64_t t73 = -1415367001692986596LL;
volatile uint64_t t74 = 749605008091LLU;
static volatile int64_t x477 = -63148772LL;
uint16_t x478 = UINT16_MAX;
volatile int8_t x479 = INT8_MAX;
int16_t x502 = INT16_MAX;
int16_t x524 = -8;
int32_t t84 = 109315;
int8_t x537 = 0;
int16_t x546 = -5;
volatile uint8_t x553 = 10U;
static int16_t x556 = INT16_MIN;
uint64_t x563 = UINT64_MAX;
volatile int32_t t92 = 4139686;
volatile int32_t t93 = -128940570;
volatile int64_t x586 = -1LL;
int8_t x591 = INT8_MIN;
static int8_t x592 = -1;
static uint16_t x598 = 2U;
volatile int64_t t97 = -2533229178850090LL;
int8_t x605 = INT8_MIN;
volatile int16_t x607 = -489;
static volatile uint64_t t99 = 31899310025534444LLU;
volatile int16_t x609 = -1;
uint64_t x621 = UINT64_MAX;
int16_t x622 = -1;
int32_t x623 = -1;
int8_t x628 = -1;
static int16_t x629 = INT16_MIN;
volatile int32_t t104 = -1;
volatile uint16_t x641 = 19U;
uint64_t x648 = UINT64_MAX;
static int8_t x654 = -1;
static int32_t x655 = INT32_MIN;
uint16_t x656 = 117U;
volatile int16_t x665 = INT16_MIN;
volatile int64_t x666 = -1LL;
volatile uint8_t x668 = UINT8_MAX;
uint32_t x674 = 58711976U;
int64_t x676 = INT64_MIN;
int64_t x677 = -53923059LL;
volatile int32_t t112 = 24;
volatile uint16_t x687 = 30918U;
int64_t x703 = 71LL;
int8_t x707 = 5;
uint8_t x710 = 0U;
int64_t t119 = 78919351LL;
int16_t x722 = 491;
volatile int32_t t120 = 217851235;
uint16_t x726 = UINT16_MAX;
int16_t x727 = 1;
int32_t t121 = -7578;
static int16_t x730 = 2;
uint64_t x738 = 128816578112803LLU;
int32_t x752 = -1;
volatile int32_t t125 = -1;
volatile int64_t x757 = -1LL;
static int8_t x760 = INT8_MAX;
int16_t x773 = INT16_MIN;
int32_t x775 = 80116;
static volatile uint32_t x778 = 13397U;
uint64_t x782 = 1542096LLU;
uint64_t t131 = 59LLU;
int64_t x791 = 1539061LL;
int64_t t132 = 48913018077761LL;
uint16_t x794 = UINT16_MAX;
int8_t x796 = INT8_MIN;
static volatile int32_t t134 = -254;
int64_t t135 = -20LL;
uint8_t x819 = 5U;
uint8_t x820 = 2U;
uint8_t x827 = 0U;
int8_t x833 = INT8_MAX;
volatile uint64_t x834 = UINT64_MAX;
int32_t t140 = -14133094;
int8_t x844 = INT8_MIN;
uint8_t x848 = 3U;
volatile int32_t x855 = INT32_MIN;
volatile int32_t t144 = -32218419;
int32_t x857 = INT32_MIN;
int64_t x859 = INT64_MAX;
int16_t x870 = INT16_MIN;
uint32_t x882 = UINT32_MAX;
int32_t t148 = 516486320;
uint32_t x885 = 22U;
int8_t x888 = INT8_MAX;
static int32_t t149 = 6928;
volatile uint64_t x890 = 1190507091728555404LLU;
static int64_t x901 = 120672890250315LL;
int64_t x903 = -2420LL;
volatile int8_t x921 = INT8_MIN;
int8_t x932 = INT8_MIN;
int32_t x942 = -25942;
volatile int32_t t159 = -7343;
static int64_t t161 = -118LL;
static uint64_t x999 = 86923709753316LLU;
int16_t x1000 = -1;
int16_t x1015 = 432;
volatile uint32_t x1016 = UINT32_MAX;
volatile uint32_t t169 = 4678543U;
uint32_t x1019 = 332164U;
int16_t x1028 = -1732;
int8_t x1029 = INT8_MIN;
int16_t x1032 = INT16_MIN;
volatile uint64_t x1035 = 1183321239LLU;
volatile int32_t t175 = 0;
uint8_t x1044 = UINT8_MAX;
int64_t x1051 = 74310LL;
int32_t t178 = 7;
int64_t x1054 = -201124108LL;
int32_t x1055 = 8279;
int8_t x1058 = -1;
uint16_t x1060 = UINT16_MAX;
int32_t t180 = 20;
static uint64_t x1064 = 42703LLU;
volatile uint64_t t181 = 96930733877428923LLU;
static int64_t x1065 = -4436LL;
int32_t t182 = -437;
int32_t x1081 = -687;
int16_t x1083 = INT16_MIN;
int8_t x1084 = INT8_MAX;
int32_t t186 = 18;
volatile int32_t t188 = 1;
static volatile uint8_t x1093 = UINT8_MAX;
int16_t x1100 = -2;
volatile int32_t x1117 = -4317928;
int64_t x1129 = 55037564LL;
volatile int16_t x1133 = INT16_MIN;
static int16_t x1135 = -6;
volatile uint8_t x1145 = 3U;
static volatile int32_t t197 = -1609712;
int8_t x1157 = 10;
uint16_t x1158 = 61U;


void f0(void) {
    	int8_t x7 = -1;
	uint16_t x8 = 2U;
	int32_t t0 = -149095768;

    t0 = (((x5*x6)>x7)/x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -1;
	uint64_t x10 = 929320928411943890LLU;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 66552865;

    t1 = (((x9*x10)>x11)/x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = 884617U;
	int32_t x19 = INT32_MIN;
	uint64_t x20 = UINT64_MAX;

    t2 = (((x17*x18)>x19)/x20);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x21 = INT8_MIN;
	int32_t x22 = -1;
	int64_t x23 = 105963787LL;
	int32_t t3 = 310;

    t3 = (((x21*x22)>x23)/x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x27 = 689U;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t4 = 19726786LL;

    t4 = (((x25*x26)>x27)/x28);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x41 = 79LLU;
	uint16_t x43 = 29U;
	static int8_t x44 = INT8_MIN;
	int32_t t5 = -224290497;

    t5 = (((x41*x42)>x43)/x44);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x45 = 0U;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t6 = -217919198;

    t6 = (((x45*x46)>x47)/x48);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x53 = -1;
	volatile int64_t t7 = 10330LL;

    t7 = (((x53*x54)>x55)/x56);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x58 = 8954;
	int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;

    t8 = (((x57*x58)>x59)/x60);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x68 = -1;
	int32_t t9 = -858;

    t9 = (((x65*x66)>x67)/x68);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x77 = -1;
	volatile int8_t x78 = INT8_MIN;
	uint8_t x79 = 55U;
	static volatile int16_t x80 = 9;
	int32_t t10 = 107489;

    t10 = (((x77*x78)>x79)/x80);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x85 = -1LL;
	int16_t x86 = INT16_MAX;
	volatile int32_t t11 = 26;

    t11 = (((x85*x86)>x87)/x88);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x91 = -15;
	static int16_t x92 = -1;
	int32_t t12 = -13;

    t12 = (((x89*x90)>x91)/x92);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x98 = -1;
	uint64_t x99 = 217311563LLU;
	uint32_t x100 = 33U;
	uint32_t t13 = 3482193U;

    t13 = (((x97*x98)>x99)/x100);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x101 = 10U;
	int64_t x102 = -1LL;
	int16_t x103 = INT16_MIN;
	int64_t x104 = -2146378909LL;
	int64_t t14 = 753LL;

    t14 = (((x101*x102)>x103)/x104);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x113 = 1002U;
	static int32_t x114 = 1;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = 1;

    t15 = (((x113*x114)>x115)/x116);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = 5;
	uint64_t x127 = UINT64_MAX;
	static int32_t t16 = -1398358;

    t16 = (((x125*x126)>x127)/x128);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x129 = 3925127401187649004LLU;
	int64_t x130 = INT64_MIN;
	int32_t x131 = -1;
	int64_t x132 = INT64_MAX;
	volatile int64_t t17 = 1LL;

    t17 = (((x129*x130)>x131)/x132);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x133 = UINT16_MAX;
	uint32_t x134 = 100U;
	volatile int16_t x135 = -222;
	int32_t x136 = -129;
	int32_t t18 = 135821;

    t18 = (((x133*x134)>x135)/x136);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x138 = INT16_MIN;
	int32_t x139 = INT32_MIN;
	volatile int8_t x140 = -1;

    t19 = (((x137*x138)>x139)/x140);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x141 = -122;
	uint8_t x142 = UINT8_MAX;
	int8_t x143 = -1;
	int64_t x144 = 7015LL;
	volatile int64_t t20 = 243940150045094664LL;

    t20 = (((x141*x142)>x143)/x144);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x147 = 1;

    t21 = (((x145*x146)>x147)/x148);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x149 = 1317;
	static volatile int32_t x150 = -19689;
	uint32_t x151 = 77963539U;
	volatile int32_t t22 = 425553;

    t22 = (((x149*x150)>x151)/x152);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x157 = 206U;
	static uint16_t x158 = 14U;
	static int16_t x159 = -2928;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t23 = -1;

    t23 = (((x157*x158)>x159)/x160);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x165 = -1;
	int8_t x166 = 10;
	int32_t x168 = INT32_MIN;
	int32_t t24 = 614;

    t24 = (((x165*x166)>x167)/x168);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x173 = -3;
	static int64_t x174 = 105LL;
	static int16_t x175 = INT16_MIN;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t25 = 124710978;

    t25 = (((x173*x174)>x175)/x176);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x177 = 37450U;
	int16_t x179 = 2452;
	int64_t x180 = -1LL;
	volatile int64_t t26 = -2745396474808449LL;

    t26 = (((x177*x178)>x179)/x180);

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x181 = -1LL;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;

    t27 = (((x181*x182)>x183)/x184);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x185 = 1U;
	int64_t x186 = -79063781611790LL;
	int8_t x187 = INT8_MIN;
	volatile int32_t t28 = 5259450;

    t28 = (((x185*x186)>x187)/x188);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x189 = 0U;
	int32_t x191 = -8933567;
	volatile int32_t t29 = -57;

    t29 = (((x189*x190)>x191)/x192);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x206 = 1U;
	static uint64_t x207 = 115338575473309LLU;
	static uint64_t x208 = 89814011LLU;

    t30 = (((x205*x206)>x207)/x208);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x209 = 125U;
	int16_t x210 = 343;
	uint64_t x211 = 40135217678247LLU;
	uint32_t x212 = 126552457U;
	volatile uint32_t t31 = 1905U;

    t31 = (((x209*x210)>x211)/x212);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x217 = -1;
	int16_t x218 = INT16_MAX;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = UINT64_MAX;

    t32 = (((x217*x218)>x219)/x220);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x221 = -1;
	int32_t x222 = -21;
	int64_t x223 = INT64_MIN;
	volatile uint16_t x224 = 15937U;
	int32_t t33 = -50;

    t33 = (((x221*x222)>x223)/x224);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x225 = INT32_MAX;
	uint32_t x226 = UINT32_MAX;
	uint32_t x228 = 2931U;
	uint32_t t34 = 535632892U;

    t34 = (((x225*x226)>x227)/x228);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x229 = 235404655107154831LLU;
	volatile int64_t x230 = 2208LL;
	volatile uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MIN;
	volatile int64_t t35 = 151871990LL;

    t35 = (((x229*x230)>x231)/x232);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x233 = -18080806300595LL;
	static int16_t x234 = 148;
	volatile uint64_t x235 = 24364629634991LLU;
	int64_t x236 = -1LL;
	static int64_t t36 = 0LL;

    t36 = (((x233*x234)>x235)/x236);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	volatile uint64_t t37 = 29162LLU;

    t37 = (((x241*x242)>x243)/x244);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x245 = 3;
	int32_t x247 = INT32_MIN;
	uint8_t x248 = 116U;
	volatile int32_t t38 = 44846;

    t38 = (((x245*x246)>x247)/x248);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;

    t39 = (((x253*x254)>x255)/x256);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x257 = 154259490U;
	static volatile int64_t x258 = 39LL;
	int32_t x259 = INT32_MIN;
	volatile int16_t x260 = -3960;
	volatile int32_t t40 = 57861043;

    t40 = (((x257*x258)>x259)/x260);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x261 = 60516941989947LLU;
	int64_t x262 = 5467LL;
	uint8_t x263 = 3U;
	int64_t t41 = -3686928778LL;

    t41 = (((x261*x262)>x263)/x264);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	static volatile uint8_t x266 = 15U;
	static int64_t x267 = -1LL;
	volatile uint16_t x268 = UINT16_MAX;
	int32_t t42 = 69;

    t42 = (((x265*x266)>x267)/x268);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x269 = INT8_MAX;
	uint32_t x272 = 1695531U;
	volatile uint32_t t43 = 22980416U;

    t43 = (((x269*x270)>x271)/x272);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x273 = 83610408U;
	static uint32_t x274 = 8289462U;
	volatile uint32_t x276 = 1252054483U;
	volatile uint32_t t44 = 4U;

    t44 = (((x273*x274)>x275)/x276);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x281 = 3U;
	static int32_t x282 = 178;
	volatile int64_t x283 = INT64_MIN;
	static int64_t t45 = 398261109LL;

    t45 = (((x281*x282)>x283)/x284);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x285 = 68;
	static uint8_t x286 = UINT8_MAX;
	int16_t x287 = -1;
	uint32_t t46 = 128681472U;

    t46 = (((x285*x286)>x287)/x288);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x289 = -1LL;
	uint8_t x291 = 6U;
	uint32_t x292 = 4864327U;
	uint32_t t47 = 12U;

    t47 = (((x289*x290)>x291)/x292);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x297 = UINT64_MAX;
	int64_t x298 = 4086566212728LL;
	uint64_t x299 = UINT64_MAX;
	static int32_t x300 = INT32_MAX;
	static int32_t t48 = -459;

    t48 = (((x297*x298)>x299)/x300);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x301 = 8;
	int16_t x303 = INT16_MAX;
	int32_t x304 = -463988;
	volatile int32_t t49 = -3;

    t49 = (((x301*x302)>x303)/x304);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x305 = INT16_MIN;
	volatile int16_t x306 = -1;
	static volatile int8_t x307 = -1;
	volatile uint8_t x308 = 3U;

    t50 = (((x305*x306)>x307)/x308);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x309 = UINT32_MAX;
	uint64_t x310 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t51 = -3;

    t51 = (((x309*x310)>x311)/x312);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x313 = -2068439LL;
	int64_t x315 = INT64_MIN;
	int16_t x316 = 47;

    t52 = (((x313*x314)>x315)/x316);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x317 = INT32_MAX;
	int16_t x318 = -1;
	uint16_t x319 = UINT16_MAX;
	uint32_t x320 = 104149U;
	static uint32_t t53 = 1676U;

    t53 = (((x317*x318)>x319)/x320);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x329 = 239291U;
	static int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t54 = -50512073;

    t54 = (((x329*x330)>x331)/x332);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x333 = INT8_MIN;
	uint32_t x334 = 828513U;

    t55 = (((x333*x334)>x335)/x336);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x337 = 122U;
	uint16_t x338 = UINT16_MAX;
	uint8_t x340 = 1U;

    t56 = (((x337*x338)>x339)/x340);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x342 = 3U;
	uint32_t x343 = 244227U;
	static volatile int32_t t57 = -2;

    t57 = (((x341*x342)>x343)/x344);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x349 = INT16_MIN;
	int64_t x351 = -1LL;
	volatile int16_t x352 = -1;

    t58 = (((x349*x350)>x351)/x352);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x353 = INT16_MIN;
	int8_t x354 = -1;
	uint32_t x355 = 851029024U;
	int32_t x356 = INT32_MIN;
	int32_t t59 = -28873232;

    t59 = (((x353*x354)>x355)/x356);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x361 = UINT64_MAX;
	uint16_t x362 = UINT16_MAX;
	volatile uint16_t x363 = 2U;
	uint32_t x364 = 51715U;
	uint32_t t60 = 7535U;

    t60 = (((x361*x362)>x363)/x364);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x368 = 112674116U;
	volatile uint32_t t61 = 205290123U;

    t61 = (((x365*x366)>x367)/x368);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x370 = -28;
	static int64_t x371 = -1LL;
	uint32_t x372 = UINT32_MAX;
	uint32_t t62 = 1817257U;

    t62 = (((x369*x370)>x371)/x372);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x385 = 14110U;
	int64_t x386 = -1LL;
	uint8_t x387 = 25U;
	static int32_t t63 = -268671;

    t63 = (((x385*x386)>x387)/x388);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x389 = INT16_MIN;
	volatile int64_t x390 = 38145007LL;
	int16_t x391 = 0;
	int8_t x392 = -1;
	volatile int32_t t64 = 144118;

    t64 = (((x389*x390)>x391)/x392);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x405 = 458300845;
	int64_t x406 = 893141LL;
	static uint32_t x407 = UINT32_MAX;
	uint64_t x408 = 8622064769872938LLU;
	static uint64_t t65 = 7409002435LLU;

    t65 = (((x405*x406)>x407)/x408);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x417 = -1;
	volatile uint32_t x418 = 5U;
	uint8_t x420 = UINT8_MAX;
	int32_t t66 = -1158;

    t66 = (((x417*x418)>x419)/x420);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x421 = 13U;
	int8_t x422 = INT8_MAX;
	int32_t t67 = 40362;

    t67 = (((x421*x422)>x423)/x424);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x433 = UINT32_MAX;
	int32_t x434 = 534127;
	int32_t x435 = INT32_MIN;
	volatile uint16_t x436 = 22U;

    t68 = (((x433*x434)>x435)/x436);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x437 = -1;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MIN;
	volatile int16_t x440 = 377;
	volatile int32_t t69 = 3153017;

    t69 = (((x437*x438)>x439)/x440);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x445 = 2U;
	int16_t x446 = INT16_MAX;
	static int32_t x447 = -23426;
	volatile uint16_t x448 = 1U;
	static volatile int32_t t70 = 109191;

    t70 = (((x445*x446)>x447)/x448);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x449 = UINT16_MAX;
	int64_t x450 = 25LL;
	uint32_t x451 = 27397687U;
	int16_t x452 = INT16_MIN;
	int32_t t71 = 1360691;

    t71 = (((x449*x450)>x451)/x452);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x453 = 212801250LL;
	static volatile int32_t x454 = -123;
	volatile int32_t x455 = INT32_MIN;
	volatile int64_t t72 = -113LL;

    t72 = (((x453*x454)>x455)/x456);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x469 = -1LL;
	volatile int16_t x470 = INT16_MAX;
	uint32_t x471 = UINT32_MAX;
	int64_t x472 = INT64_MAX;

    t73 = (((x469*x470)>x471)/x472);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x473 = UINT8_MAX;
	uint16_t x474 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	uint64_t x476 = 141488LLU;

    t74 = (((x473*x474)>x475)/x476);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x480 = INT64_MIN;
	int64_t t75 = -388761062678577535LL;

    t75 = (((x477*x478)>x479)/x480);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x481 = -1LL;
	static int32_t x482 = 1378;
	volatile int8_t x483 = -1;
	static volatile int16_t x484 = 601;
	static int32_t t76 = -3;

    t76 = (((x481*x482)>x483)/x484);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x485 = -1;
	int16_t x486 = INT16_MIN;
	uint8_t x487 = UINT8_MAX;
	volatile int32_t x488 = INT32_MIN;
	int32_t t77 = 381095;

    t77 = (((x485*x486)>x487)/x488);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x489 = -149;
	int8_t x490 = INT8_MAX;
	int32_t x491 = 8;
	int16_t x492 = -1;
	int32_t t78 = 406151;

    t78 = (((x489*x490)>x491)/x492);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x501 = -1;
	volatile uint32_t x503 = 8403U;
	volatile uint64_t x504 = 1808181968LLU;
	volatile uint64_t t79 = 87648596727967110LLU;

    t79 = (((x501*x502)>x503)/x504);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x505 = -1;
	volatile int16_t x506 = INT16_MAX;
	int64_t x507 = INT64_MIN;
	static uint64_t x508 = 904963026276776LLU;
	volatile uint64_t t80 = 7398200450437266340LLU;

    t80 = (((x505*x506)>x507)/x508);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x513 = 97U;
	int64_t x514 = 1651LL;
	uint32_t x515 = 0U;
	volatile int32_t x516 = INT32_MIN;
	int32_t t81 = -129030872;

    t81 = (((x513*x514)>x515)/x516);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x517 = 10502U;
	static volatile uint16_t x518 = 6435U;
	uint8_t x519 = 0U;
	volatile int32_t x520 = -1;
	int32_t t82 = -4;

    t82 = (((x517*x518)>x519)/x520);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x521 = -1287;
	int16_t x522 = -1;
	int16_t x523 = INT16_MIN;
	int32_t t83 = 105;

    t83 = (((x521*x522)>x523)/x524);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x525 = -2;
	int8_t x526 = -1;
	volatile int8_t x527 = 1;
	int32_t x528 = -2;

    t84 = (((x525*x526)>x527)/x528);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x533 = 28U;
	static int8_t x534 = INT8_MIN;
	static volatile int16_t x535 = -19;
	volatile int16_t x536 = INT16_MIN;
	volatile int32_t t85 = -3972283;

    t85 = (((x533*x534)>x535)/x536);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x538 = -1;
	volatile int32_t x539 = 98;
	volatile int8_t x540 = INT8_MIN;
	volatile int32_t t86 = 1;

    t86 = (((x537*x538)>x539)/x540);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x541 = -1LL;
	volatile int16_t x542 = INT16_MAX;
	uint8_t x543 = 13U;
	int8_t x544 = 1;
	int32_t t87 = 28292;

    t87 = (((x541*x542)>x543)/x544);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x545 = -1LL;
	int64_t x547 = INT64_MAX;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t88 = 1707095400070692447LLU;

    t88 = (((x545*x546)>x547)/x548);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x549 = -1;
	static int64_t x550 = 931507349537LL;
	static uint64_t x551 = UINT64_MAX;
	int16_t x552 = -1;
	int32_t t89 = 3150;

    t89 = (((x549*x550)>x551)/x552);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x554 = 13;
	int8_t x555 = INT8_MAX;
	volatile int32_t t90 = 33;

    t90 = (((x553*x554)>x555)/x556);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x561 = 14U;
	int16_t x562 = INT16_MAX;
	int32_t x564 = INT32_MAX;
	int32_t t91 = 116627554;

    t91 = (((x561*x562)>x563)/x564);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x573 = -1995325880LL;
	static uint32_t x574 = 934923U;
	int16_t x575 = INT16_MIN;
	volatile int16_t x576 = -2;

    t92 = (((x573*x574)>x575)/x576);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x577 = UINT64_MAX;
	volatile int16_t x578 = INT16_MAX;
	int32_t x579 = INT32_MAX;
	volatile uint16_t x580 = 23751U;

    t93 = (((x577*x578)>x579)/x580);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x581 = -1LL;
	uint64_t x582 = 212376LLU;
	uint16_t x583 = 8U;
	int32_t x584 = -1;
	volatile int32_t t94 = -269967511;

    t94 = (((x581*x582)>x583)/x584);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x585 = INT32_MIN;
	static uint64_t x587 = UINT64_MAX;
	volatile uint32_t x588 = 29087U;
	volatile uint32_t t95 = 13003U;

    t95 = (((x585*x586)>x587)/x588);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x589 = 5U;
	int64_t x590 = 859046032752490004LL;
	int32_t t96 = 7;

    t96 = (((x589*x590)>x591)/x592);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x597 = 4551LL;
	int8_t x599 = -62;
	int64_t x600 = INT64_MAX;

    t97 = (((x597*x598)>x599)/x600);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x601 = -1;
	static int8_t x602 = INT8_MAX;
	int8_t x603 = 11;
	uint64_t x604 = 217840LLU;
	volatile uint64_t t98 = 174682868890LLU;

    t98 = (((x601*x602)>x603)/x604);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x606 = 12031148616693614LL;
	uint64_t x608 = 77127401490822897LLU;

    t99 = (((x605*x606)>x607)/x608);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x610 = 101959LL;
	static volatile uint16_t x611 = 29510U;
	int16_t x612 = -1;
	volatile int32_t t100 = -66701086;

    t100 = (((x609*x610)>x611)/x612);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x624 = -1;
	static int32_t t101 = 28522;

    t101 = (((x621*x622)>x623)/x624);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x625 = INT16_MIN;
	static uint32_t x626 = 311U;
	int8_t x627 = -1;
	volatile int32_t t102 = 23957;

    t102 = (((x625*x626)>x627)/x628);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x630 = 14;
	uint8_t x631 = 127U;
	int32_t x632 = -17805;
	volatile int32_t t103 = -159166422;

    t103 = (((x629*x630)>x631)/x632);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x637 = UINT32_MAX;
	static int64_t x638 = -1LL;
	uint16_t x639 = UINT16_MAX;
	int16_t x640 = -1;

    t104 = (((x637*x638)>x639)/x640);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x642 = UINT64_MAX;
	static uint64_t x643 = UINT64_MAX;
	int8_t x644 = 5;
	volatile int32_t t105 = -14329;

    t105 = (((x641*x642)>x643)/x644);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x645 = 616935894133860750LLU;
	int32_t x646 = INT32_MAX;
	int64_t x647 = -5704LL;
	volatile uint64_t t106 = 7311550745970LLU;

    t106 = (((x645*x646)>x647)/x648);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x653 = UINT64_MAX;
	int32_t t107 = 590472;

    t107 = (((x653*x654)>x655)/x656);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x661 = 24U;
	int32_t x662 = -1;
	static uint8_t x663 = UINT8_MAX;
	int64_t x664 = -1LL;
	volatile int64_t t108 = 88649878LL;

    t108 = (((x661*x662)>x663)/x664);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x667 = -7447242958348LL;
	int32_t t109 = 22601;

    t109 = (((x665*x666)>x667)/x668);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x673 = 107094138LLU;
	static volatile int32_t x675 = INT32_MIN;
	volatile int64_t t110 = -50726432023770LL;

    t110 = (((x673*x674)>x675)/x676);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x678 = -3;
	int8_t x679 = -1;
	static int16_t x680 = 3;
	volatile int32_t t111 = -3;

    t111 = (((x677*x678)>x679)/x680);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x681 = UINT64_MAX;
	volatile uint32_t x682 = 1893178U;
	int16_t x683 = -11;
	uint8_t x684 = 90U;

    t112 = (((x681*x682)>x683)/x684);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x685 = INT8_MIN;
	uint16_t x686 = 20U;
	static uint32_t x688 = UINT32_MAX;
	uint32_t t113 = 1629713U;

    t113 = (((x685*x686)>x687)/x688);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x689 = 824135LL;
	int32_t x690 = -1;
	int64_t x691 = -21989584LL;
	int32_t x692 = INT32_MIN;
	volatile int32_t t114 = -112;

    t114 = (((x689*x690)>x691)/x692);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x697 = 0;
	int8_t x698 = INT8_MIN;
	int8_t x699 = 44;
	uint8_t x700 = UINT8_MAX;
	volatile int32_t t115 = -13;

    t115 = (((x697*x698)>x699)/x700);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x701 = -1;
	static volatile int16_t x702 = 1;
	int16_t x704 = INT16_MIN;
	volatile int32_t t116 = -61111625;

    t116 = (((x701*x702)>x703)/x704);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x705 = -1LL;
	volatile int8_t x706 = INT8_MAX;
	int8_t x708 = 14;
	volatile int32_t t117 = 1013;

    t117 = (((x705*x706)>x707)/x708);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x709 = INT32_MIN;
	uint32_t x711 = UINT32_MAX;
	volatile uint64_t x712 = 436116LLU;
	static uint64_t t118 = 246187114LLU;

    t118 = (((x709*x710)>x711)/x712);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x717 = INT64_MAX;
	static uint64_t x718 = 8474946552883117LLU;
	static int64_t x719 = INT64_MIN;
	int64_t x720 = INT64_MAX;

    t119 = (((x717*x718)>x719)/x720);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x721 = 3016382917LL;
	volatile uint16_t x723 = 19080U;
	volatile uint16_t x724 = UINT16_MAX;

    t120 = (((x721*x722)>x723)/x724);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x725 = -2608;
	uint8_t x728 = 3U;

    t121 = (((x725*x726)>x727)/x728);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x729 = 599;
	uint64_t x731 = 1264LLU;
	uint16_t x732 = UINT16_MAX;
	int32_t t122 = -6;

    t122 = (((x729*x730)>x731)/x732);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x737 = INT32_MIN;
	volatile uint16_t x739 = UINT16_MAX;
	uint32_t x740 = 8104784U;
	volatile uint32_t t123 = 89293740U;

    t123 = (((x737*x738)>x739)/x740);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x745 = 12041368477LLU;
	static int8_t x746 = INT8_MIN;
	volatile uint16_t x747 = UINT16_MAX;
	uint32_t x748 = UINT32_MAX;
	volatile uint32_t t124 = 46151U;

    t124 = (((x745*x746)>x747)/x748);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x749 = -3386;
	int32_t x750 = -4975;
	int8_t x751 = INT8_MIN;

    t125 = (((x749*x750)>x751)/x752);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x753 = UINT8_MAX;
	int32_t x754 = -77;
	uint32_t x755 = 171U;
	int8_t x756 = INT8_MIN;
	int32_t t126 = -125289063;

    t126 = (((x753*x754)>x755)/x756);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x758 = UINT8_MAX;
	int64_t x759 = 10LL;
	volatile int32_t t127 = 3722776;

    t127 = (((x757*x758)>x759)/x760);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x765 = 65261732014LLU;
	int32_t x766 = INT32_MIN;
	int16_t x767 = INT16_MIN;
	uint32_t x768 = 5833U;
	volatile uint32_t t128 = 3834U;

    t128 = (((x765*x766)>x767)/x768);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x774 = 0;
	volatile int8_t x776 = -1;
	int32_t t129 = 1;

    t129 = (((x773*x774)>x775)/x776);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x777 = 1U;
	static uint16_t x779 = 56U;
	volatile int8_t x780 = INT8_MIN;
	volatile int32_t t130 = -56324;

    t130 = (((x777*x778)>x779)/x780);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x781 = -30;
	uint8_t x783 = UINT8_MAX;
	static uint64_t x784 = 1068052LLU;

    t131 = (((x781*x782)>x783)/x784);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x789 = INT64_MAX;
	volatile int8_t x790 = 1;
	int64_t x792 = -1LL;

    t132 = (((x789*x790)>x791)/x792);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x793 = INT8_MIN;
	static int8_t x795 = -1;
	int32_t t133 = 29;

    t133 = (((x793*x794)>x795)/x796);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x801 = -1;
	int32_t x802 = 1;
	static int16_t x803 = INT16_MIN;
	uint16_t x804 = UINT16_MAX;

    t134 = (((x801*x802)>x803)/x804);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x809 = 1U;
	static int8_t x810 = -1;
	int16_t x811 = -1;
	int64_t x812 = INT64_MAX;

    t135 = (((x809*x810)>x811)/x812);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x813 = -314;
	int8_t x814 = 1;
	int16_t x815 = 0;
	static uint64_t x816 = 5971823LLU;
	uint64_t t136 = 170418139LLU;

    t136 = (((x813*x814)>x815)/x816);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x817 = -127942023LL;
	uint16_t x818 = 14009U;
	int32_t t137 = 5388501;

    t137 = (((x817*x818)>x819)/x820);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x825 = -1LL;
	volatile uint8_t x826 = 2U;
	uint64_t x828 = 50LLU;
	volatile uint64_t t138 = 7983196LLU;

    t138 = (((x825*x826)>x827)/x828);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x829 = -1LL;
	int32_t x830 = INT32_MAX;
	static uint32_t x831 = UINT32_MAX;
	static uint8_t x832 = 8U;
	int32_t t139 = -91816;

    t139 = (((x829*x830)>x831)/x832);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x835 = INT32_MIN;
	uint16_t x836 = 2U;

    t140 = (((x833*x834)>x835)/x836);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x837 = INT16_MAX;
	uint8_t x838 = 7U;
	int16_t x839 = INT16_MIN;
	int32_t x840 = -816;
	int32_t t141 = -432;

    t141 = (((x837*x838)>x839)/x840);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x841 = 718391131328LLU;
	int8_t x842 = INT8_MAX;
	static volatile int16_t x843 = -1;
	int32_t t142 = 87322724;

    t142 = (((x841*x842)>x843)/x844);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x845 = INT8_MIN;
	int8_t x846 = INT8_MAX;
	static int64_t x847 = INT64_MAX;
	volatile int32_t t143 = -2722;

    t143 = (((x845*x846)>x847)/x848);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x853 = -1;
	int16_t x854 = -1;
	int8_t x856 = 1;

    t144 = (((x853*x854)>x855)/x856);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x858 = 80291LLU;
	int32_t x860 = -126816;
	int32_t t145 = 1845013;

    t145 = (((x857*x858)>x859)/x860);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x861 = INT8_MIN;
	static int16_t x862 = -1;
	uint8_t x863 = UINT8_MAX;
	volatile uint16_t x864 = 17U;
	int32_t t146 = 407063;

    t146 = (((x861*x862)>x863)/x864);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x869 = INT8_MAX;
	static volatile int8_t x871 = -4;
	int32_t x872 = INT32_MIN;
	int32_t t147 = -14624455;

    t147 = (((x869*x870)>x871)/x872);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x881 = 13U;
	int64_t x883 = 92313940LL;
	int16_t x884 = INT16_MIN;

    t148 = (((x881*x882)>x883)/x884);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x886 = -1929;
	uint64_t x887 = 16495602935197LLU;

    t149 = (((x885*x886)>x887)/x888);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x889 = INT64_MIN;
	uint16_t x891 = UINT16_MAX;
	int32_t x892 = INT32_MIN;
	int32_t t150 = 215022;

    t150 = (((x889*x890)>x891)/x892);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x893 = -1;
	uint64_t x894 = UINT64_MAX;
	int64_t x895 = -1LL;
	static int16_t x896 = INT16_MIN;
	static volatile int32_t t151 = -660958;

    t151 = (((x893*x894)>x895)/x896);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x897 = UINT64_MAX;
	uint64_t x898 = UINT64_MAX;
	volatile int32_t x899 = INT32_MAX;
	static int8_t x900 = -1;
	int32_t t152 = -65;

    t152 = (((x897*x898)>x899)/x900);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x902 = 9U;
	uint16_t x904 = 5156U;
	static volatile int32_t t153 = -165;

    t153 = (((x901*x902)>x903)/x904);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x905 = 784063014U;
	int16_t x906 = -1;
	int64_t x907 = -71640890LL;
	volatile int8_t x908 = INT8_MAX;
	volatile int32_t t154 = -18835;

    t154 = (((x905*x906)>x907)/x908);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x917 = INT16_MIN;
	static uint64_t x918 = 287134746175438LLU;
	static int8_t x919 = 0;
	uint8_t x920 = 1U;
	volatile int32_t t155 = 51098;

    t155 = (((x917*x918)>x919)/x920);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x922 = INT16_MAX;
	int8_t x923 = INT8_MAX;
	int8_t x924 = -1;
	volatile int32_t t156 = -134687;

    t156 = (((x921*x922)>x923)/x924);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x929 = -1LL;
	volatile int64_t x930 = INT64_MAX;
	uint32_t x931 = 495113709U;
	volatile int32_t t157 = 2151175;

    t157 = (((x929*x930)>x931)/x932);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x941 = 41U;
	static uint32_t x943 = UINT32_MAX;
	int8_t x944 = 1;
	int32_t t158 = -10;

    t158 = (((x941*x942)>x943)/x944);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x949 = UINT8_MAX;
	int64_t x950 = -1LL;
	volatile int16_t x951 = INT16_MIN;
	uint16_t x952 = UINT16_MAX;

    t159 = (((x949*x950)>x951)/x952);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x953 = -2;
	int8_t x954 = INT8_MIN;
	volatile int32_t x955 = 3;
	int8_t x956 = 50;
	static volatile int32_t t160 = 871096;

    t160 = (((x953*x954)>x955)/x956);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x957 = INT8_MIN;
	static volatile uint8_t x958 = 0U;
	uint32_t x959 = 5530U;
	static volatile int64_t x960 = INT64_MIN;

    t161 = (((x957*x958)>x959)/x960);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x961 = -1;
	uint16_t x962 = UINT16_MAX;
	int32_t x963 = -249282;
	static volatile uint8_t x964 = 11U;
	int32_t t162 = -46;

    t162 = (((x961*x962)>x963)/x964);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x965 = -1732699368LL;
	volatile int16_t x966 = -126;
	int8_t x967 = INT8_MIN;
	int8_t x968 = -1;
	volatile int32_t t163 = 983;

    t163 = (((x965*x966)>x967)/x968);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x973 = INT16_MIN;
	uint16_t x974 = 71U;
	uint16_t x975 = 16787U;
	int32_t x976 = INT32_MAX;
	int32_t t164 = -6418;

    t164 = (((x973*x974)>x975)/x976);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x989 = 7U;
	static uint8_t x990 = 21U;
	volatile int16_t x991 = -1;
	int64_t x992 = INT64_MIN;
	volatile int64_t t165 = 3926295353197874LL;

    t165 = (((x989*x990)>x991)/x992);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x997 = 4U;
	int16_t x998 = 4018;
	int32_t t166 = -100083;

    t166 = (((x997*x998)>x999)/x1000);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x1001 = INT64_MAX;
	volatile int32_t x1002 = -1;
	volatile int8_t x1003 = INT8_MIN;
	static int32_t x1004 = INT32_MIN;
	volatile int32_t t167 = 1;

    t167 = (((x1001*x1002)>x1003)/x1004);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1005 = INT16_MIN;
	uint16_t x1006 = 13U;
	volatile int64_t x1007 = INT64_MIN;
	uint8_t x1008 = 5U;
	int32_t t168 = -76;

    t168 = (((x1005*x1006)>x1007)/x1008);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1013 = -421017680;
	static volatile uint16_t x1014 = 0U;

    t169 = (((x1013*x1014)>x1015)/x1016);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1017 = 74U;
	int8_t x1018 = 1;
	uint64_t x1020 = 127759194836956LLU;
	uint64_t t170 = 1644210140231LLU;

    t170 = (((x1017*x1018)>x1019)/x1020);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1021 = 1146337825496098303LL;
	static volatile uint64_t x1022 = 1048050811LLU;
	int64_t x1023 = -387500393908216LL;
	int16_t x1024 = INT16_MIN;
	int32_t t171 = -49;

    t171 = (((x1021*x1022)>x1023)/x1024);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1025 = -4;
	volatile int64_t x1026 = -185567019623216LL;
	static int16_t x1027 = 1034;
	volatile int32_t t172 = 3744725;

    t172 = (((x1025*x1026)>x1027)/x1028);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1030 = INT16_MIN;
	static uint16_t x1031 = 11U;
	volatile int32_t t173 = 10740;

    t173 = (((x1029*x1030)>x1031)/x1032);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1033 = -22;
	uint32_t x1034 = UINT32_MAX;
	volatile uint8_t x1036 = 3U;
	int32_t t174 = -939021;

    t174 = (((x1033*x1034)>x1035)/x1036);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1037 = 203267244LLU;
	static uint16_t x1038 = 2862U;
	uint64_t x1039 = 3LLU;
	int8_t x1040 = 16;

    t175 = (((x1037*x1038)>x1039)/x1040);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1041 = UINT8_MAX;
	uint16_t x1042 = 797U;
	uint64_t x1043 = UINT64_MAX;
	int32_t t176 = -345181231;

    t176 = (((x1041*x1042)>x1043)/x1044);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x1045 = INT16_MAX;
	int16_t x1046 = INT16_MIN;
	int16_t x1047 = INT16_MAX;
	uint8_t x1048 = UINT8_MAX;
	volatile int32_t t177 = 10988851;

    t177 = (((x1045*x1046)>x1047)/x1048);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1049 = UINT16_MAX;
	int16_t x1050 = -1;
	uint16_t x1052 = UINT16_MAX;

    t178 = (((x1049*x1050)>x1051)/x1052);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x1053 = 124U;
	int8_t x1056 = 1;
	int32_t t179 = 22;

    t179 = (((x1053*x1054)>x1055)/x1056);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1057 = INT8_MIN;
	int8_t x1059 = INT8_MAX;

    t180 = (((x1057*x1058)>x1059)/x1060);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1061 = -1;
	static int16_t x1062 = 0;
	volatile int16_t x1063 = INT16_MIN;

    t181 = (((x1061*x1062)>x1063)/x1064);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1066 = INT16_MIN;
	static int32_t x1067 = INT32_MIN;
	int32_t x1068 = -1;

    t182 = (((x1065*x1066)>x1067)/x1068);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x1069 = INT8_MIN;
	static volatile int8_t x1070 = INT8_MIN;
	volatile int8_t x1071 = INT8_MAX;
	int64_t x1072 = INT64_MIN;
	static volatile int64_t t183 = -356850701011LL;

    t183 = (((x1069*x1070)>x1071)/x1072);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1073 = 695LL;
	uint8_t x1074 = 26U;
	int8_t x1075 = 1;
	uint32_t x1076 = 56231U;
	uint32_t t184 = 1867630554U;

    t184 = (((x1073*x1074)>x1075)/x1076);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1077 = INT64_MAX;
	static volatile int16_t x1078 = -1;
	static uint16_t x1079 = UINT16_MAX;
	volatile int8_t x1080 = INT8_MAX;
	volatile int32_t t185 = -4096;

    t185 = (((x1077*x1078)>x1079)/x1080);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1082 = 1101U;

    t186 = (((x1081*x1082)>x1083)/x1084);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x1085 = 1425U;
	int8_t x1086 = 0;
	uint16_t x1087 = 3656U;
	int16_t x1088 = INT16_MIN;
	int32_t t187 = -12;

    t187 = (((x1085*x1086)>x1087)/x1088);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1089 = 1;
	static volatile uint8_t x1090 = 3U;
	uint16_t x1091 = 10U;
	int16_t x1092 = -1;

    t188 = (((x1089*x1090)>x1091)/x1092);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1094 = 188339099959LLU;
	int16_t x1095 = INT16_MAX;
	static int8_t x1096 = INT8_MIN;
	volatile int32_t t189 = 97;

    t189 = (((x1093*x1094)>x1095)/x1096);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1097 = 326772073U;
	static int16_t x1098 = INT16_MIN;
	int32_t x1099 = -29203924;
	volatile int32_t t190 = 0;

    t190 = (((x1097*x1098)>x1099)/x1100);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1105 = INT64_MIN;
	int8_t x1106 = 0;
	int16_t x1107 = 3024;
	int8_t x1108 = -1;
	int32_t t191 = 65404;

    t191 = (((x1105*x1106)>x1107)/x1108);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1118 = -1;
	int32_t x1119 = INT32_MIN;
	int64_t x1120 = INT64_MIN;
	int64_t t192 = 6398942373LL;

    t192 = (((x1117*x1118)>x1119)/x1120);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1121 = INT8_MAX;
	uint8_t x1122 = 2U;
	static volatile int8_t x1123 = -1;
	int32_t x1124 = INT32_MIN;
	int32_t t193 = 15053;

    t193 = (((x1121*x1122)>x1123)/x1124);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1125 = 1;
	volatile int64_t x1126 = INT64_MAX;
	int16_t x1127 = -1;
	int8_t x1128 = 5;
	volatile int32_t t194 = -8343124;

    t194 = (((x1125*x1126)>x1127)/x1128);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1130 = UINT32_MAX;
	static int32_t x1131 = INT32_MAX;
	int64_t x1132 = -1LL;
	volatile int64_t t195 = -462797LL;

    t195 = (((x1129*x1130)>x1131)/x1132);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1134 = -1;
	int16_t x1136 = -111;
	volatile int32_t t196 = -59014;

    t196 = (((x1133*x1134)>x1135)/x1136);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1146 = -2276720LL;
	volatile int32_t x1147 = 2104349;
	uint8_t x1148 = UINT8_MAX;

    t197 = (((x1145*x1146)>x1147)/x1148);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1153 = 0U;
	volatile uint64_t x1154 = 115865781LLU;
	int8_t x1155 = 1;
	int16_t x1156 = -14;
	volatile int32_t t198 = -7;

    t198 = (((x1153*x1154)>x1155)/x1156);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1159 = INT8_MIN;
	int64_t x1160 = INT64_MAX;
	static volatile int64_t t199 = 317085LL;

    t199 = (((x1157*x1158)>x1159)/x1160);

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

