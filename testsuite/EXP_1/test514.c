
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

uint8_t x1 = UINT8_MAX;
uint16_t x5 = UINT16_MAX;
int32_t x48 = 1;
int32_t x54 = -1;
int64_t x59 = -1LL;
static volatile uint16_t x71 = 684U;
static int16_t x84 = -1;
static int32_t x86 = 1;
int32_t x92 = 1;
volatile int32_t t16 = 121;
int32_t t17 = -196389400;
static int16_t x104 = -2;
int16_t x116 = INT16_MIN;
volatile int32_t t22 = -29;
int16_t x147 = INT16_MIN;
static uint16_t x155 = 795U;
uint64_t x158 = 351793LLU;
uint32_t x161 = 1U;
static int32_t x166 = -1;
uint32_t x174 = 41944U;
static int16_t x177 = -1;
static volatile int32_t t32 = -5619710;
volatile int64_t x181 = INT64_MAX;
uint64_t x182 = 6554989549120057255LLU;
int32_t x184 = 0;
static int16_t x185 = INT16_MIN;
int64_t x187 = -1LL;
int8_t x192 = INT8_MAX;
volatile int32_t t38 = -358;
int32_t x209 = -1;
int8_t x210 = -1;
volatile int16_t x212 = INT16_MIN;
int32_t x225 = -489496;
static int8_t x228 = INT8_MIN;
int8_t x231 = INT8_MIN;
int16_t x244 = -44;
volatile int32_t t45 = -1;
static int16_t x249 = INT16_MIN;
volatile int32_t t46 = 1894078;
volatile uint32_t x254 = 11742U;
volatile int32_t t47 = 31;
int64_t x265 = INT64_MAX;
int32_t t51 = -1;
int64_t x282 = INT64_MAX;
int32_t t53 = 801123016;
static int8_t x287 = -1;
static volatile int16_t x310 = INT16_MIN;
int16_t x312 = INT16_MIN;
uint64_t x313 = UINT64_MAX;
volatile int32_t x330 = -1;
static int32_t t64 = -16345;
static int32_t x345 = INT32_MIN;
int64_t x347 = -1LL;
static volatile int16_t x360 = 14531;
int32_t t67 = -69;
volatile int32_t t69 = -588;
uint16_t x374 = UINT16_MAX;
volatile int16_t x389 = -1;
static int64_t x394 = INT64_MIN;
int32_t t75 = -9360784;
int32_t x404 = INT32_MIN;
int32_t t76 = 3467302;
static uint16_t x405 = 155U;
int64_t x407 = INT64_MIN;
uint32_t x423 = UINT32_MAX;
volatile int32_t t80 = -53851;
static int32_t t81 = -5510;
volatile int32_t t82 = 652565;
int32_t x433 = INT32_MAX;
uint16_t x446 = 1U;
static int32_t x448 = INT32_MIN;
volatile int32_t t88 = -1033089065;
volatile int32_t t90 = -779186;
int16_t x485 = -1;
int16_t x487 = -15;
static int32_t t91 = -1;
static uint64_t x493 = 2583830774482LLU;
int32_t x498 = -32;
static uint64_t x506 = 3LLU;
static int32_t x507 = -1;
static volatile int32_t t95 = -21;
int8_t x525 = 0;
static int16_t x526 = INT16_MIN;
static volatile int32_t t97 = -1;
static uint64_t x547 = 8159986LLU;
volatile int32_t t99 = 2681339;
volatile int64_t x565 = -7702LL;
int32_t t102 = 138499;
int8_t x577 = 5;
int64_t x579 = INT64_MIN;
static volatile uint16_t x593 = 6U;
uint8_t x594 = 5U;
int16_t x600 = INT16_MIN;
static int32_t t106 = 336;
int16_t x611 = INT16_MIN;
static int8_t x623 = INT8_MIN;
int32_t x626 = INT32_MAX;
static volatile uint64_t x639 = 7082242171LLU;
volatile int64_t x640 = INT64_MAX;
int32_t t113 = 2;
int64_t x643 = INT64_MIN;
static int64_t x656 = -1LL;
int8_t x693 = 1;
int32_t t123 = 0;
volatile int32_t x710 = 194764;
uint64_t x742 = UINT64_MAX;
int32_t x743 = -1;
uint8_t x749 = UINT8_MAX;
int16_t x756 = 2785;
volatile uint64_t x762 = 918LLU;
int32_t t132 = 22;
volatile int8_t x771 = -30;
uint64_t x772 = 1465235161045LLU;
uint64_t x776 = 1192980527299255LLU;
int32_t t135 = -14230;
uint16_t x806 = 4025U;
static int64_t x816 = INT64_MIN;
volatile int32_t t143 = 20786;
uint32_t x822 = 17464923U;
int8_t x830 = INT8_MIN;
int32_t x840 = 47741688;
int8_t x855 = INT8_MIN;
int8_t x856 = -1;
volatile int32_t t148 = 239835;
static int32_t x863 = 15273239;
uint32_t x869 = 1U;
volatile int8_t x872 = INT8_MIN;
int8_t x878 = -1;
int64_t x879 = 0LL;
volatile int8_t x883 = -1;
int32_t t153 = -191;
static uint8_t x891 = 55U;
static int8_t x896 = -38;
static int32_t t156 = -1;
static int16_t x920 = INT16_MAX;
int32_t t160 = 1022083829;
volatile int32_t t161 = 64306;
int32_t t162 = -324137;
uint64_t x930 = 8302276803975349848LLU;
int32_t t164 = 1;
uint64_t x943 = 169351LLU;
uint32_t x951 = 10U;
volatile int32_t t167 = 292528049;
static volatile uint32_t x958 = 75988U;
static uint8_t x959 = 50U;
static int16_t x960 = INT16_MIN;
uint64_t x969 = UINT64_MAX;
int32_t x970 = -2;
volatile int32_t t171 = -1616;
int8_t x993 = 1;
int64_t x1009 = INT64_MIN;
int16_t x1011 = -14;
int8_t x1012 = INT8_MIN;
uint8_t x1015 = UINT8_MAX;
volatile int64_t x1028 = INT64_MIN;
int32_t x1031 = -1;
volatile int8_t x1032 = INT8_MAX;
uint8_t x1035 = UINT8_MAX;
volatile uint16_t x1037 = UINT16_MAX;
volatile int32_t x1050 = -41675;
uint16_t x1067 = UINT16_MAX;
static int8_t x1068 = INT8_MIN;
volatile int32_t t187 = -5995433;
int32_t t188 = -104105068;
int64_t x1079 = 1LL;
volatile int8_t x1083 = -1;
int16_t x1085 = -1;
static volatile uint16_t x1089 = UINT16_MAX;
static int32_t x1093 = INT32_MIN;
int8_t x1096 = INT8_MIN;
volatile int32_t t196 = -5328;
int16_t x1122 = INT16_MIN;
uint64_t x1124 = 2302536042800806929LLU;
int8_t x1127 = INT8_MAX;


void f0(void) {
    	uint8_t x2 = 2U;
	static int64_t x3 = -1LL;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 53;

    t0 = (((x1*x2)>x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 1U;
	static int8_t x7 = -1;
	static uint64_t x8 = UINT64_MAX;
	int32_t t1 = 2622;

    t1 = (((x5*x6)>x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = INT32_MIN;
	uint64_t x14 = 388443423269LLU;
	int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t2 = -421793;

    t2 = (((x13*x14)>x15)<=x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x21 = 872710U;
	uint8_t x22 = 1U;
	int8_t x23 = -1;
	uint32_t x24 = 394U;
	volatile int32_t t3 = 9924519;

    t3 = (((x21*x22)>x23)<=x24);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MIN;
	int16_t x36 = -1;
	volatile int32_t t4 = 326425663;

    t4 = (((x33*x34)>x35)<=x36);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x37 = 3450U;
	uint64_t x38 = 1965893446LLU;
	volatile int64_t x39 = INT64_MAX;
	int16_t x40 = INT16_MIN;
	volatile int32_t t5 = -515;

    t5 = (((x37*x38)>x39)<=x40);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x45 = 79357859510179LL;
	int8_t x46 = -1;
	volatile uint64_t x47 = UINT64_MAX;
	int32_t t6 = -87538;

    t6 = (((x45*x46)>x47)<=x48);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x49 = 1;
	static uint16_t x50 = UINT16_MAX;
	int32_t x51 = -1;
	int32_t x52 = 0;
	volatile int32_t t7 = 42382267;

    t7 = (((x49*x50)>x51)<=x52);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x53 = -1;
	int8_t x55 = 18;
	static int64_t x56 = INT64_MAX;
	int32_t t8 = 143;

    t8 = (((x53*x54)>x55)<=x56);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x57 = -1398523784LL;
	int32_t x58 = INT32_MIN;
	static int64_t x60 = -1LL;
	volatile int32_t t9 = 58;

    t9 = (((x57*x58)>x59)<=x60);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x65 = 71826471LL;
	int32_t x66 = 643607641;
	volatile uint8_t x67 = 1U;
	static uint32_t x68 = 1U;
	volatile int32_t t10 = 4517027;

    t10 = (((x65*x66)>x67)<=x68);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MIN;
	volatile int16_t x72 = INT16_MAX;
	int32_t t11 = 17253;

    t11 = (((x69*x70)>x71)<=x72);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x73 = INT8_MIN;
	uint64_t x74 = 150LLU;
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = INT32_MIN;
	volatile int32_t t12 = -18;

    t12 = (((x73*x74)>x75)<=x76);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x77 = 4U;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = -45653LL;
	uint64_t x80 = 1074LLU;
	static int32_t t13 = 91;

    t13 = (((x77*x78)>x79)<=x80);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x81 = -15;
	int8_t x82 = INT8_MIN;
	static volatile int32_t x83 = -1;
	volatile int32_t t14 = -3;

    t14 = (((x81*x82)>x83)<=x84);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x85 = 1664482;
	uint16_t x87 = 1342U;
	uint16_t x88 = UINT16_MAX;
	int32_t t15 = -595843881;

    t15 = (((x85*x86)>x87)<=x88);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x89 = 9U;
	int16_t x90 = 390;
	static int8_t x91 = INT8_MIN;

    t16 = (((x89*x90)>x91)<=x92);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x93 = INT64_MIN;
	uint64_t x94 = 3LLU;
	int32_t x95 = -324861208;
	static uint32_t x96 = 1502579U;

    t17 = (((x93*x94)>x95)<=x96);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x101 = -1;
	volatile uint16_t x102 = 8U;
	volatile int64_t x103 = INT64_MIN;
	int32_t t18 = 151686;

    t18 = (((x101*x102)>x103)<=x104);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x114 = -18;
	int8_t x115 = INT8_MIN;
	volatile int32_t t19 = 269233678;

    t19 = (((x113*x114)>x115)<=x116);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x117 = -3;
	volatile uint16_t x118 = 1994U;
	uint64_t x119 = 67453905086304889LLU;
	int32_t x120 = -726660;
	int32_t t20 = 512121672;

    t20 = (((x117*x118)>x119)<=x120);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x121 = 2714;
	int8_t x122 = 1;
	static int64_t x123 = -14LL;
	uint32_t x124 = 35U;
	volatile int32_t t21 = -694682;

    t21 = (((x121*x122)>x123)<=x124);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x125 = 5U;
	static uint32_t x126 = 313605U;
	static uint64_t x127 = 621174LLU;
	volatile int32_t x128 = INT32_MIN;

    t22 = (((x125*x126)>x127)<=x128);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x129 = INT32_MAX;
	uint16_t x130 = 1U;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t23 = 311063;

    t23 = (((x129*x130)>x131)<=x132);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x137 = 61885;
	int32_t x138 = -1;
	uint8_t x139 = 43U;
	uint8_t x140 = 29U;
	volatile int32_t t24 = 5443774;

    t24 = (((x137*x138)>x139)<=x140);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x145 = -1;
	uint32_t x146 = 107U;
	int16_t x148 = -1;
	int32_t t25 = 8;

    t25 = (((x145*x146)>x147)<=x148);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x153 = -1LL;
	uint8_t x154 = UINT8_MAX;
	static int8_t x156 = INT8_MAX;
	volatile int32_t t26 = -1;

    t26 = (((x153*x154)>x155)<=x156);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x157 = -2LL;
	uint8_t x159 = UINT8_MAX;
	int32_t x160 = INT32_MIN;
	int32_t t27 = 850012174;

    t27 = (((x157*x158)>x159)<=x160);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x162 = 7760518LLU;
	int32_t x163 = INT32_MIN;
	static int32_t x164 = -1;
	int32_t t28 = 25172;

    t28 = (((x161*x162)>x163)<=x164);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x165 = 0;
	volatile int64_t x167 = -63LL;
	uint64_t x168 = 3524927476062496160LLU;
	volatile int32_t t29 = 1544288;

    t29 = (((x165*x166)>x167)<=x168);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x169 = 19594U;
	uint32_t x170 = 303625983U;
	int16_t x171 = INT16_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t30 = -3;

    t30 = (((x169*x170)>x171)<=x172);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x173 = INT32_MIN;
	uint8_t x175 = 92U;
	volatile uint8_t x176 = 7U;
	volatile int32_t t31 = -23293;

    t31 = (((x173*x174)>x175)<=x176);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x178 = 1242813901U;
	volatile int32_t x179 = INT32_MAX;
	int64_t x180 = -84937650LL;

    t32 = (((x177*x178)>x179)<=x180);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x183 = UINT16_MAX;
	int32_t t33 = -87045317;

    t33 = (((x181*x182)>x183)<=x184);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x186 = UINT8_MAX;
	volatile uint64_t x188 = UINT64_MAX;
	int32_t t34 = 27;

    t34 = (((x185*x186)>x187)<=x188);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int16_t x191 = -1;
	int32_t t35 = 30;

    t35 = (((x189*x190)>x191)<=x192);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x193 = UINT32_MAX;
	int32_t x194 = 59358030;
	static int32_t x195 = INT32_MIN;
	volatile uint64_t x196 = UINT64_MAX;
	int32_t t36 = 1;

    t36 = (((x193*x194)>x195)<=x196);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x201 = 5073LLU;
	static int8_t x202 = INT8_MIN;
	uint8_t x203 = UINT8_MAX;
	uint32_t x204 = 1112U;
	volatile int32_t t37 = -842706434;

    t37 = (((x201*x202)>x203)<=x204);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x205 = UINT32_MAX;
	uint16_t x206 = UINT16_MAX;
	uint64_t x207 = 1515995757176LLU;
	int64_t x208 = -1LL;

    t38 = (((x205*x206)>x207)<=x208);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x211 = INT16_MIN;
	volatile int32_t t39 = -12893;

    t39 = (((x209*x210)>x211)<=x212);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x213 = -1;
	int16_t x214 = INT16_MIN;
	static uint16_t x215 = 9U;
	static uint8_t x216 = 1U;
	volatile int32_t t40 = -93226175;

    t40 = (((x213*x214)>x215)<=x216);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x217 = -1;
	uint64_t x218 = 268449353800LLU;
	uint16_t x219 = UINT16_MAX;
	static int16_t x220 = 1;
	volatile int32_t t41 = -49753;

    t41 = (((x217*x218)>x219)<=x220);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x226 = 1U;
	static int8_t x227 = INT8_MIN;
	static int32_t t42 = -552990107;

    t42 = (((x225*x226)>x227)<=x228);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x229 = -15;
	uint16_t x230 = 20013U;
	volatile uint32_t x232 = UINT32_MAX;
	int32_t t43 = 6310;

    t43 = (((x229*x230)>x231)<=x232);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x241 = 63;
	uint16_t x242 = 14083U;
	int64_t x243 = INT64_MAX;
	int32_t t44 = 61;

    t44 = (((x241*x242)>x243)<=x244);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x245 = INT16_MAX;
	static int64_t x246 = -1LL;
	int8_t x247 = INT8_MAX;
	static int16_t x248 = INT16_MIN;

    t45 = (((x245*x246)>x247)<=x248);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x250 = -1;
	static int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MAX;

    t46 = (((x249*x250)>x251)<=x252);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x253 = 2125U;
	static uint32_t x255 = 434U;
	int64_t x256 = -1LL;

    t47 = (((x253*x254)>x255)<=x256);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x257 = -1;
	int32_t x258 = -4017;
	static int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t48 = 542741016;

    t48 = (((x257*x258)>x259)<=x260);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x261 = -1;
	int16_t x262 = 0;
	static int8_t x263 = INT8_MAX;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t49 = -890;

    t49 = (((x261*x262)>x263)<=x264);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MIN;
	int32_t x268 = INT32_MAX;
	int32_t t50 = 979754;

    t50 = (((x265*x266)>x267)<=x268);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x273 = -1;
	static int16_t x274 = INT16_MAX;
	uint8_t x275 = 2U;
	int8_t x276 = INT8_MIN;

    t51 = (((x273*x274)>x275)<=x276);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x277 = INT8_MIN;
	static uint16_t x278 = 5U;
	uint32_t x279 = 12942726U;
	uint64_t x280 = 91076536510LLU;
	int32_t t52 = 1731;

    t52 = (((x277*x278)>x279)<=x280);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x281 = 1U;
	volatile int16_t x283 = 175;
	uint8_t x284 = 3U;

    t53 = (((x281*x282)>x283)<=x284);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x285 = UINT32_MAX;
	int32_t x286 = -1;
	uint64_t x288 = 54755439698LLU;
	int32_t t54 = -921501;

    t54 = (((x285*x286)>x287)<=x288);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x289 = UINT16_MAX;
	static int8_t x290 = INT8_MIN;
	uint16_t x291 = 600U;
	uint8_t x292 = UINT8_MAX;
	int32_t t55 = 118159554;

    t55 = (((x289*x290)>x291)<=x292);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x305 = INT8_MIN;
	volatile int8_t x306 = INT8_MIN;
	static uint32_t x307 = UINT32_MAX;
	volatile uint32_t x308 = 6U;
	static volatile int32_t t56 = 468580967;

    t56 = (((x305*x306)>x307)<=x308);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x309 = INT16_MAX;
	volatile int64_t x311 = INT64_MIN;
	int32_t t57 = -1;

    t57 = (((x309*x310)>x311)<=x312);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x314 = -3425185957726LL;
	int16_t x315 = -14;
	uint32_t x316 = 2973U;
	volatile int32_t t58 = 833134197;

    t58 = (((x313*x314)>x315)<=x316);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x317 = -399892;
	int64_t x318 = -1LL;
	int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MAX;
	volatile int32_t t59 = -10;

    t59 = (((x317*x318)>x319)<=x320);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x321 = UINT64_MAX;
	static int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MAX;
	int16_t x324 = 2;
	int32_t t60 = 10753;

    t60 = (((x321*x322)>x323)<=x324);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x325 = -21LL;
	static volatile uint32_t x326 = 88958U;
	int64_t x327 = INT64_MIN;
	int8_t x328 = -1;
	volatile int32_t t61 = -88503763;

    t61 = (((x325*x326)>x327)<=x328);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x329 = 743153124986299LL;
	int64_t x331 = INT64_MAX;
	uint32_t x332 = UINT32_MAX;
	int32_t t62 = -15223955;

    t62 = (((x329*x330)>x331)<=x332);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x333 = 6;
	int16_t x334 = -1639;
	int8_t x335 = INT8_MIN;
	int8_t x336 = 4;
	volatile int32_t t63 = -15733;

    t63 = (((x333*x334)>x335)<=x336);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x341 = INT32_MAX;
	int16_t x342 = -1;
	int8_t x343 = 1;
	int8_t x344 = -58;

    t64 = (((x341*x342)>x343)<=x344);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x346 = 0U;
	uint16_t x348 = 5U;
	int32_t t65 = -11248730;

    t65 = (((x345*x346)>x347)<=x348);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x353 = 37140029642358384LLU;
	int32_t x354 = -1;
	volatile int64_t x355 = -1LL;
	int16_t x356 = 12;
	int32_t t66 = 8880152;

    t66 = (((x353*x354)>x355)<=x356);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x357 = INT16_MIN;
	static uint64_t x358 = UINT64_MAX;
	volatile int64_t x359 = INT64_MIN;

    t67 = (((x357*x358)>x359)<=x360);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x361 = -1LL;
	volatile int64_t x362 = 0LL;
	volatile int32_t x363 = INT32_MAX;
	volatile uint16_t x364 = 6U;
	volatile int32_t t68 = -182084;

    t68 = (((x361*x362)>x363)<=x364);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x369 = INT8_MIN;
	int32_t x370 = -104151;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MAX;

    t69 = (((x369*x370)>x371)<=x372);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x373 = UINT8_MAX;
	uint64_t x375 = 3147248486LLU;
	uint16_t x376 = 13932U;
	int32_t t70 = 1;

    t70 = (((x373*x374)>x375)<=x376);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x381 = -1;
	static uint64_t x382 = 2803637LLU;
	uint8_t x383 = UINT8_MAX;
	static int64_t x384 = INT64_MIN;
	int32_t t71 = -15964353;

    t71 = (((x381*x382)>x383)<=x384);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x385 = 3536887322LLU;
	uint32_t x386 = 15225U;
	uint16_t x387 = 5U;
	int32_t x388 = -1;
	static int32_t t72 = -1695975;

    t72 = (((x385*x386)>x387)<=x388);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint32_t x390 = 841316702U;
	static int8_t x391 = INT8_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t73 = -1;

    t73 = (((x389*x390)>x391)<=x392);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x393 = UINT64_MAX;
	int32_t x395 = -1256602;
	int16_t x396 = INT16_MIN;
	static int32_t t74 = -665;

    t74 = (((x393*x394)>x395)<=x396);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	volatile int64_t x398 = -48LL;
	volatile int16_t x399 = INT16_MIN;
	int8_t x400 = -1;

    t75 = (((x397*x398)>x399)<=x400);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x401 = -1;
	uint32_t x402 = 11887489U;
	int32_t x403 = INT32_MIN;

    t76 = (((x401*x402)>x403)<=x404);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x406 = -248;
	uint64_t x408 = 9885780009110LLU;
	int32_t t77 = -62271092;

    t77 = (((x405*x406)>x407)<=x408);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x409 = 1U;
	volatile int16_t x410 = -80;
	int16_t x411 = -19;
	uint8_t x412 = 54U;
	static int32_t t78 = -11360;

    t78 = (((x409*x410)>x411)<=x412);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x413 = UINT8_MAX;
	static int32_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	int64_t x416 = -1027453LL;
	volatile int32_t t79 = -2;

    t79 = (((x413*x414)>x415)<=x416);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x421 = 1324;
	int8_t x422 = -1;
	static volatile uint32_t x424 = 7908U;

    t80 = (((x421*x422)>x423)<=x424);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x425 = 12;
	volatile int8_t x426 = INT8_MAX;
	int64_t x427 = -1LL;
	int16_t x428 = INT16_MIN;

    t81 = (((x425*x426)>x427)<=x428);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x429 = 7U;
	int8_t x430 = -1;
	volatile int8_t x431 = INT8_MIN;
	static int8_t x432 = INT8_MAX;

    t82 = (((x429*x430)>x431)<=x432);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x434 = UINT32_MAX;
	int64_t x435 = -1LL;
	volatile int16_t x436 = -1;
	static volatile int32_t t83 = 112;

    t83 = (((x433*x434)>x435)<=x436);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x437 = -15;
	volatile int32_t x438 = -1;
	uint8_t x439 = 1U;
	uint64_t x440 = 310458137LLU;
	int32_t t84 = -343;

    t84 = (((x437*x438)>x439)<=x440);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x441 = 602LLU;
	static int64_t x442 = -3974457485LL;
	int64_t x443 = INT64_MIN;
	static uint16_t x444 = UINT16_MAX;
	int32_t t85 = 70;

    t85 = (((x441*x442)>x443)<=x444);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x445 = 0;
	static int32_t x447 = -16061833;
	volatile int32_t t86 = 3294;

    t86 = (((x445*x446)>x447)<=x448);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x457 = 3681LLU;
	uint32_t x458 = UINT32_MAX;
	int32_t x459 = 4;
	int64_t x460 = -607704LL;
	int32_t t87 = -402660912;

    t87 = (((x457*x458)>x459)<=x460);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x461 = UINT32_MAX;
	static int16_t x462 = INT16_MAX;
	int32_t x463 = INT32_MAX;
	int32_t x464 = INT32_MIN;

    t88 = (((x461*x462)>x463)<=x464);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x465 = 450635LLU;
	uint8_t x466 = 0U;
	uint16_t x467 = 15U;
	static int8_t x468 = 11;
	volatile int32_t t89 = -1;

    t89 = (((x465*x466)>x467)<=x468);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x481 = 0LL;
	volatile uint16_t x482 = UINT16_MAX;
	volatile int64_t x483 = -1LL;
	static uint32_t x484 = UINT32_MAX;

    t90 = (((x481*x482)>x483)<=x484);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x486 = -151;
	int16_t x488 = 9255;

    t91 = (((x485*x486)>x487)<=x488);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x494 = -6;
	uint8_t x495 = 59U;
	uint64_t x496 = UINT64_MAX;
	int32_t t92 = -16;

    t92 = (((x493*x494)>x495)<=x496);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x497 = UINT8_MAX;
	int16_t x499 = 1;
	int64_t x500 = INT64_MAX;
	volatile int32_t t93 = -199172447;

    t93 = (((x497*x498)>x499)<=x500);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x505 = 146U;
	uint16_t x508 = 73U;
	volatile int32_t t94 = -255;

    t94 = (((x505*x506)>x507)<=x508);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x513 = 121U;
	uint64_t x514 = 2091222275LLU;
	uint8_t x515 = UINT8_MAX;
	int32_t x516 = -1;

    t95 = (((x513*x514)>x515)<=x516);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x527 = 9U;
	volatile uint64_t x528 = 871LLU;
	int32_t t96 = 70275216;

    t96 = (((x525*x526)>x527)<=x528);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x529 = 4U;
	volatile int32_t x530 = -1;
	int16_t x531 = INT16_MIN;
	volatile int8_t x532 = -1;

    t97 = (((x529*x530)>x531)<=x532);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x533 = 49U;
	uint16_t x534 = 59U;
	volatile uint32_t x535 = UINT32_MAX;
	uint16_t x536 = 32U;
	static int32_t t98 = 49289;

    t98 = (((x533*x534)>x535)<=x536);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x545 = INT64_MIN;
	uint64_t x546 = UINT64_MAX;
	static uint64_t x548 = 1076625400927395477LLU;

    t99 = (((x545*x546)>x547)<=x548);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x553 = -1LL;
	int16_t x554 = -1;
	int32_t x555 = INT32_MIN;
	volatile uint8_t x556 = 47U;
	int32_t t100 = -35;

    t100 = (((x553*x554)>x555)<=x556);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x561 = 0;
	uint8_t x562 = UINT8_MAX;
	static volatile int8_t x563 = INT8_MIN;
	volatile int16_t x564 = -1;
	int32_t t101 = 19411;

    t101 = (((x561*x562)>x563)<=x564);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x566 = UINT32_MAX;
	int8_t x567 = INT8_MAX;
	int32_t x568 = INT32_MIN;

    t102 = (((x565*x566)>x567)<=x568);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x578 = -237;
	int32_t x580 = -13953917;
	volatile int32_t t103 = -83;

    t103 = (((x577*x578)>x579)<=x580);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x581 = UINT64_MAX;
	volatile uint32_t x582 = 237200U;
	int8_t x583 = -1;
	static int32_t x584 = 362793865;
	volatile int32_t t104 = 24472;

    t104 = (((x581*x582)>x583)<=x584);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x595 = 2657;
	volatile int8_t x596 = INT8_MIN;
	int32_t t105 = 3;

    t105 = (((x593*x594)>x595)<=x596);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x597 = 22043479947391340LLU;
	uint8_t x598 = 17U;
	uint8_t x599 = UINT8_MAX;

    t106 = (((x597*x598)>x599)<=x600);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x609 = 5333U;
	int16_t x610 = -1;
	int16_t x612 = INT16_MAX;
	volatile int32_t t107 = 0;

    t107 = (((x609*x610)>x611)<=x612);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x613 = UINT32_MAX;
	int64_t x614 = -4867562LL;
	int64_t x615 = -152143225933355LL;
	static uint64_t x616 = 3251205286340LLU;
	volatile int32_t t108 = -28;

    t108 = (((x613*x614)>x615)<=x616);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint8_t x617 = 3U;
	int8_t x618 = INT8_MAX;
	volatile uint32_t x619 = UINT32_MAX;
	static int8_t x620 = INT8_MIN;
	static volatile int32_t t109 = 1;

    t109 = (((x617*x618)>x619)<=x620);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x621 = 1LL;
	static int8_t x622 = 3;
	uint64_t x624 = 66LLU;
	static volatile int32_t t110 = -13182;

    t110 = (((x621*x622)>x623)<=x624);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x625 = UINT32_MAX;
	static uint8_t x627 = 48U;
	volatile int64_t x628 = INT64_MIN;
	int32_t t111 = -3187246;

    t111 = (((x625*x626)>x627)<=x628);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x633 = -1;
	volatile int8_t x634 = 36;
	int8_t x635 = INT8_MIN;
	uint16_t x636 = 476U;
	static int32_t t112 = 11;

    t112 = (((x633*x634)>x635)<=x636);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x637 = 3758221U;
	uint16_t x638 = 14U;

    t113 = (((x637*x638)>x639)<=x640);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x641 = UINT8_MAX;
	int8_t x642 = 2;
	int32_t x644 = 91;
	int32_t t114 = 0;

    t114 = (((x641*x642)>x643)<=x644);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x649 = -11624;
	volatile int32_t x650 = 6;
	uint64_t x651 = 36790773026LLU;
	static volatile uint64_t x652 = 243LLU;
	volatile int32_t t115 = -1;

    t115 = (((x649*x650)>x651)<=x652);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x653 = INT16_MIN;
	int8_t x654 = -1;
	static volatile int16_t x655 = 2;
	static int32_t t116 = 1;

    t116 = (((x653*x654)>x655)<=x656);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x669 = INT16_MAX;
	volatile uint16_t x670 = UINT16_MAX;
	static int8_t x671 = -3;
	static int16_t x672 = INT16_MIN;
	volatile int32_t t117 = -531491565;

    t117 = (((x669*x670)>x671)<=x672);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x677 = -1;
	static volatile int64_t x678 = -14268LL;
	static uint32_t x679 = UINT32_MAX;
	static int16_t x680 = INT16_MAX;
	static volatile int32_t t118 = 26934526;

    t118 = (((x677*x678)>x679)<=x680);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x685 = -2;
	volatile int16_t x686 = INT16_MIN;
	uint8_t x687 = UINT8_MAX;
	uint16_t x688 = 22583U;
	volatile int32_t t119 = 53947;

    t119 = (((x685*x686)>x687)<=x688);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x689 = -1;
	volatile int16_t x690 = -12;
	static uint16_t x691 = 42U;
	uint64_t x692 = 1403858LLU;
	volatile int32_t t120 = 1017299;

    t120 = (((x689*x690)>x691)<=x692);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x694 = 9U;
	static volatile int32_t x695 = 235342648;
	volatile int64_t x696 = -44043475215085LL;
	static volatile int32_t t121 = 3;

    t121 = (((x693*x694)>x695)<=x696);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x697 = -1;
	int32_t x698 = INT32_MAX;
	volatile int32_t x699 = -1;
	static int16_t x700 = -3725;
	static volatile int32_t t122 = -76;

    t122 = (((x697*x698)>x699)<=x700);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x701 = 7446;
	uint32_t x702 = 432U;
	int64_t x703 = INT64_MIN;
	volatile int16_t x704 = -66;

    t123 = (((x701*x702)>x703)<=x704);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x705 = 1;
	volatile int16_t x706 = 5012;
	static uint64_t x707 = UINT64_MAX;
	int32_t x708 = INT32_MAX;
	volatile int32_t t124 = 91126;

    t124 = (((x705*x706)>x707)<=x708);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x709 = UINT32_MAX;
	int64_t x711 = 26069698055LL;
	int16_t x712 = INT16_MIN;
	volatile int32_t t125 = -414;

    t125 = (((x709*x710)>x711)<=x712);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x729 = -1;
	int16_t x730 = 36;
	int8_t x731 = INT8_MIN;
	int32_t x732 = INT32_MIN;
	static int32_t t126 = 30977275;

    t126 = (((x729*x730)>x731)<=x732);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x737 = INT32_MIN;
	volatile int64_t x738 = -1LL;
	int64_t x739 = INT64_MIN;
	int16_t x740 = INT16_MAX;
	int32_t t127 = -683190;

    t127 = (((x737*x738)>x739)<=x740);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x741 = 76U;
	uint8_t x744 = 3U;
	static int32_t t128 = 4;

    t128 = (((x741*x742)>x743)<=x744);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x750 = UINT16_MAX;
	int8_t x751 = -1;
	uint64_t x752 = UINT64_MAX;
	int32_t t129 = -6059180;

    t129 = (((x749*x750)>x751)<=x752);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x753 = 855321845LLU;
	int32_t x754 = -6799342;
	volatile int32_t x755 = INT32_MIN;
	volatile int32_t t130 = -1701384;

    t130 = (((x753*x754)>x755)<=x756);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x757 = -1;
	static volatile int8_t x758 = INT8_MAX;
	uint32_t x759 = 131318840U;
	volatile int16_t x760 = INT16_MIN;
	int32_t t131 = -5884;

    t131 = (((x757*x758)>x759)<=x760);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x761 = INT32_MAX;
	int32_t x763 = INT32_MIN;
	volatile int64_t x764 = INT64_MIN;

    t132 = (((x761*x762)>x763)<=x764);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x765 = UINT16_MAX;
	int64_t x766 = -1LL;
	static uint8_t x767 = 0U;
	uint32_t x768 = UINT32_MAX;
	volatile int32_t t133 = -3957487;

    t133 = (((x765*x766)>x767)<=x768);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x769 = 33069568LL;
	int16_t x770 = INT16_MAX;
	int32_t t134 = 175;

    t134 = (((x769*x770)>x771)<=x772);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x773 = 31;
	volatile int32_t x774 = -11392865;
	int16_t x775 = -1;

    t135 = (((x773*x774)>x775)<=x776);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x777 = -1;
	volatile int64_t x778 = -14054871LL;
	int32_t x779 = INT32_MIN;
	int64_t x780 = -515303798669LL;
	int32_t t136 = -24;

    t136 = (((x777*x778)>x779)<=x780);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x781 = INT8_MIN;
	volatile uint8_t x782 = UINT8_MAX;
	static int8_t x783 = 1;
	volatile uint32_t x784 = 389379U;
	volatile int32_t t137 = -928;

    t137 = (((x781*x782)>x783)<=x784);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x785 = INT32_MIN;
	volatile uint32_t x786 = 27521534U;
	volatile int16_t x787 = -121;
	int8_t x788 = -1;
	volatile int32_t t138 = -374668;

    t138 = (((x785*x786)>x787)<=x788);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x797 = UINT32_MAX;
	uint16_t x798 = 2553U;
	int16_t x799 = -3804;
	int32_t x800 = 14263;
	volatile int32_t t139 = 192505;

    t139 = (((x797*x798)>x799)<=x800);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x801 = 2LLU;
	static int8_t x802 = -1;
	int8_t x803 = INT8_MIN;
	int16_t x804 = 55;
	static volatile int32_t t140 = 52804;

    t140 = (((x801*x802)>x803)<=x804);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x805 = 1U;
	uint32_t x807 = UINT32_MAX;
	static uint16_t x808 = 491U;
	int32_t t141 = 647;

    t141 = (((x805*x806)>x807)<=x808);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x809 = UINT16_MAX;
	int16_t x810 = 15169;
	int64_t x811 = -1LL;
	uint64_t x812 = UINT64_MAX;
	static volatile int32_t t142 = 530660;

    t142 = (((x809*x810)>x811)<=x812);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x813 = -1;
	uint16_t x814 = UINT16_MAX;
	int16_t x815 = 7;

    t143 = (((x813*x814)>x815)<=x816);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x821 = UINT32_MAX;
	static uint16_t x823 = 10719U;
	static int32_t x824 = -253836386;
	volatile int32_t t144 = 1048444;

    t144 = (((x821*x822)>x823)<=x824);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x829 = 5861U;
	int64_t x831 = INT64_MAX;
	int64_t x832 = -1LL;
	static int32_t t145 = 3589053;

    t145 = (((x829*x830)>x831)<=x832);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x837 = 28;
	uint8_t x838 = 4U;
	volatile int8_t x839 = -1;
	volatile int32_t t146 = -2;

    t146 = (((x837*x838)>x839)<=x840);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x849 = -1LL;
	uint32_t x850 = 7U;
	volatile int16_t x851 = INT16_MIN;
	uint64_t x852 = UINT64_MAX;
	int32_t t147 = 3767923;

    t147 = (((x849*x850)>x851)<=x852);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x853 = -1420;
	uint16_t x854 = 9U;

    t148 = (((x853*x854)>x855)<=x856);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x861 = INT32_MIN;
	volatile uint64_t x862 = UINT64_MAX;
	int32_t x864 = -1;
	int32_t t149 = -196;

    t149 = (((x861*x862)>x863)<=x864);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x865 = 3U;
	int8_t x866 = -31;
	uint32_t x867 = 2U;
	uint8_t x868 = 0U;
	int32_t t150 = 178522;

    t150 = (((x865*x866)>x867)<=x868);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x870 = INT8_MAX;
	static int16_t x871 = -1;
	static int32_t t151 = -127;

    t151 = (((x869*x870)>x871)<=x872);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x877 = INT16_MIN;
	int64_t x880 = INT64_MIN;
	volatile int32_t t152 = 468;

    t152 = (((x877*x878)>x879)<=x880);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x881 = 6U;
	uint32_t x882 = 1438215276U;
	int32_t x884 = 475846071;

    t153 = (((x881*x882)>x883)<=x884);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x885 = -1;
	int8_t x886 = INT8_MAX;
	static int16_t x887 = INT16_MIN;
	int32_t x888 = -67;
	int32_t t154 = -1528044;

    t154 = (((x885*x886)>x887)<=x888);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x889 = -1;
	uint64_t x890 = UINT64_MAX;
	uint64_t x892 = 129698LLU;
	int32_t t155 = -3048311;

    t155 = (((x889*x890)>x891)<=x892);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x893 = UINT8_MAX;
	static volatile uint16_t x894 = UINT16_MAX;
	volatile int64_t x895 = INT64_MIN;

    t156 = (((x893*x894)>x895)<=x896);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x897 = INT8_MIN;
	volatile uint16_t x898 = 3302U;
	int8_t x899 = -22;
	static uint64_t x900 = 228236018824LLU;
	int32_t t157 = -380526186;

    t157 = (((x897*x898)>x899)<=x900);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x909 = 3940341829128440373LLU;
	int8_t x910 = INT8_MAX;
	int16_t x911 = INT16_MIN;
	static int8_t x912 = -1;
	volatile int32_t t158 = 37501770;

    t158 = (((x909*x910)>x911)<=x912);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x913 = INT16_MIN;
	int32_t x914 = -1;
	int32_t x915 = 2553;
	static volatile uint32_t x916 = 158U;
	static int32_t t159 = -29912721;

    t159 = (((x913*x914)>x915)<=x916);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x917 = 1U;
	int64_t x918 = INT64_MIN;
	uint8_t x919 = 21U;

    t160 = (((x917*x918)>x919)<=x920);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x921 = 78U;
	uint32_t x922 = 10903U;
	volatile uint16_t x923 = UINT16_MAX;
	uint8_t x924 = 3U;

    t161 = (((x921*x922)>x923)<=x924);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x925 = UINT32_MAX;
	int16_t x926 = INT16_MIN;
	int32_t x927 = INT32_MIN;
	int8_t x928 = -1;

    t162 = (((x925*x926)>x927)<=x928);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x929 = INT32_MIN;
	int16_t x931 = INT16_MAX;
	volatile int16_t x932 = -22;
	int32_t t163 = 481;

    t163 = (((x929*x930)>x931)<=x932);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x933 = INT32_MIN;
	uint64_t x934 = UINT64_MAX;
	volatile int16_t x935 = 29;
	int64_t x936 = -1LL;

    t164 = (((x933*x934)>x935)<=x936);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x941 = -2;
	int64_t x942 = 1299699632727424558LL;
	int64_t x944 = INT64_MIN;
	int32_t t165 = -7519;

    t165 = (((x941*x942)>x943)<=x944);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x949 = INT8_MIN;
	int32_t x950 = -1;
	uint16_t x952 = 4864U;
	volatile int32_t t166 = 9527;

    t166 = (((x949*x950)>x951)<=x952);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x953 = 17U;
	static int16_t x954 = INT16_MAX;
	volatile int64_t x955 = INT64_MIN;
	int32_t x956 = INT32_MIN;

    t167 = (((x953*x954)>x955)<=x956);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x957 = INT32_MIN;
	static int32_t t168 = 1;

    t168 = (((x957*x958)>x959)<=x960);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x965 = INT8_MAX;
	int64_t x966 = -179LL;
	static int16_t x967 = 389;
	int16_t x968 = INT16_MAX;
	volatile int32_t t169 = 16036762;

    t169 = (((x965*x966)>x967)<=x968);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x971 = INT16_MIN;
	int64_t x972 = INT64_MIN;
	volatile int32_t t170 = -96252993;

    t170 = (((x969*x970)>x971)<=x972);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x977 = -1;
	int16_t x978 = INT16_MAX;
	int32_t x979 = 17949054;
	static int8_t x980 = 5;

    t171 = (((x977*x978)>x979)<=x980);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x981 = 5;
	volatile int8_t x982 = -1;
	int32_t x983 = INT32_MIN;
	static int16_t x984 = INT16_MIN;
	int32_t t172 = -83476927;

    t172 = (((x981*x982)>x983)<=x984);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x994 = INT32_MIN;
	volatile int32_t x995 = INT32_MAX;
	static volatile uint64_t x996 = UINT64_MAX;
	int32_t t173 = 120;

    t173 = (((x993*x994)>x995)<=x996);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x997 = -20971330;
	uint64_t x998 = 601LLU;
	int8_t x999 = -1;
	static uint16_t x1000 = UINT16_MAX;
	volatile int32_t t174 = -9;

    t174 = (((x997*x998)>x999)<=x1000);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1005 = INT8_MAX;
	int8_t x1006 = INT8_MIN;
	int8_t x1007 = INT8_MIN;
	volatile uint8_t x1008 = 120U;
	volatile int32_t t175 = -34161941;

    t175 = (((x1005*x1006)>x1007)<=x1008);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1010 = 0;
	static int32_t t176 = 97128;

    t176 = (((x1009*x1010)>x1011)<=x1012);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1013 = 0;
	int8_t x1014 = INT8_MAX;
	uint8_t x1016 = 5U;
	int32_t t177 = -338927;

    t177 = (((x1013*x1014)>x1015)<=x1016);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1021 = INT8_MIN;
	int64_t x1022 = -1LL;
	int64_t x1023 = 38702LL;
	volatile int32_t x1024 = -1;
	volatile int32_t t178 = 3912149;

    t178 = (((x1021*x1022)>x1023)<=x1024);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x1025 = 45;
	int64_t x1026 = -1LL;
	uint8_t x1027 = UINT8_MAX;
	int32_t t179 = 4855323;

    t179 = (((x1025*x1026)>x1027)<=x1028);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x1029 = 414906810297905LL;
	int16_t x1030 = 0;
	int32_t t180 = -2254837;

    t180 = (((x1029*x1030)>x1031)<=x1032);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x1033 = 7727884569562LL;
	static int64_t x1034 = -1LL;
	uint16_t x1036 = UINT16_MAX;
	int32_t t181 = -37778997;

    t181 = (((x1033*x1034)>x1035)<=x1036);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x1038 = INT16_MIN;
	static uint16_t x1039 = 59U;
	uint64_t x1040 = 4328LLU;
	static int32_t t182 = -1;

    t182 = (((x1037*x1038)>x1039)<=x1040);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1041 = 3U;
	uint32_t x1042 = 743U;
	volatile uint16_t x1043 = 545U;
	static volatile int32_t x1044 = 24371;
	int32_t t183 = 157;

    t183 = (((x1041*x1042)>x1043)<=x1044);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x1049 = INT8_MIN;
	static int16_t x1051 = -290;
	static volatile int8_t x1052 = INT8_MIN;
	volatile int32_t t184 = 199105;

    t184 = (((x1049*x1050)>x1051)<=x1052);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x1053 = 1U;
	uint16_t x1054 = 2U;
	volatile int8_t x1055 = INT8_MAX;
	static int32_t x1056 = INT32_MAX;
	int32_t t185 = -422072;

    t185 = (((x1053*x1054)>x1055)<=x1056);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x1061 = 2U;
	uint8_t x1062 = 2U;
	int32_t x1063 = INT32_MIN;
	static volatile int16_t x1064 = INT16_MIN;
	volatile int32_t t186 = -4603976;

    t186 = (((x1061*x1062)>x1063)<=x1064);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1065 = -1LL;
	uint32_t x1066 = 31853935U;

    t187 = (((x1065*x1066)>x1067)<=x1068);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1069 = INT8_MIN;
	uint16_t x1070 = UINT16_MAX;
	static int64_t x1071 = INT64_MIN;
	static int64_t x1072 = INT64_MIN;

    t188 = (((x1069*x1070)>x1071)<=x1072);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1073 = -1;
	int64_t x1074 = 1668991119355437145LL;
	static int64_t x1075 = -53868LL;
	static volatile int8_t x1076 = INT8_MAX;
	int32_t t189 = 3580950;

    t189 = (((x1073*x1074)>x1075)<=x1076);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1077 = -1;
	uint16_t x1078 = 13U;
	uint64_t x1080 = 8400459796839138710LLU;
	volatile int32_t t190 = -16750734;

    t190 = (((x1077*x1078)>x1079)<=x1080);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1081 = UINT16_MAX;
	int64_t x1082 = -909361964LL;
	int32_t x1084 = -8692;
	static int32_t t191 = 7436;

    t191 = (((x1081*x1082)>x1083)<=x1084);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1086 = 12;
	int32_t x1087 = INT32_MIN;
	volatile int16_t x1088 = -4;
	int32_t t192 = -35444;

    t192 = (((x1085*x1086)>x1087)<=x1088);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1090 = -1;
	static int8_t x1091 = -2;
	uint64_t x1092 = 6918459LLU;
	static int32_t t193 = 9533562;

    t193 = (((x1089*x1090)>x1091)<=x1092);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1094 = UINT32_MAX;
	int16_t x1095 = INT16_MIN;
	volatile int32_t t194 = -769;

    t194 = (((x1093*x1094)>x1095)<=x1096);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1109 = 71;
	static uint16_t x1110 = 11U;
	volatile int64_t x1111 = INT64_MAX;
	int32_t x1112 = INT32_MIN;
	int32_t t195 = -1;

    t195 = (((x1109*x1110)>x1111)<=x1112);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1113 = -1;
	volatile uint16_t x1114 = 138U;
	int32_t x1115 = -1851682;
	int16_t x1116 = INT16_MAX;

    t196 = (((x1113*x1114)>x1115)<=x1116);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1117 = 31990634944746553LL;
	uint32_t x1118 = 0U;
	int16_t x1119 = INT16_MIN;
	static uint16_t x1120 = UINT16_MAX;
	int32_t t197 = -60909727;

    t197 = (((x1117*x1118)>x1119)<=x1120);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1121 = -14194;
	int8_t x1123 = -1;
	volatile int32_t t198 = -20351;

    t198 = (((x1121*x1122)>x1123)<=x1124);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1125 = -1;
	static int8_t x1126 = -1;
	int16_t x1128 = INT16_MIN;
	volatile int32_t t199 = 610621366;

    t199 = (((x1125*x1126)>x1127)<=x1128);

    if (t199 != 0) { NG(); } else { ; }
	
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

