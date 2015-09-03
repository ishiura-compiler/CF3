#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int8_t x20 = 43;
int32_t x24 = INT32_MIN;
int16_t x33 = INT16_MIN;
uint32_t x34 = 13U;
int16_t x35 = INT16_MIN;
uint64_t x40 = 50338394207104663LLU;
volatile int64_t t6 = -250901375869101LL;
static uint64_t x41 = 16615859LLU;
int16_t x42 = -13044;
uint8_t x55 = 1U;
volatile uint64_t x58 = 6887646361LLU;
int32_t x65 = INT32_MAX;
int64_t x83 = -1LL;
static int32_t t14 = -6779;
static int8_t x85 = INT8_MAX;
int32_t x91 = INT32_MIN;
uint32_t x118 = 2004137U;
int32_t t21 = 0;
int32_t x124 = INT32_MAX;
int16_t x135 = -7801;
volatile int32_t t25 = -3725958;
int32_t x154 = -1;
static int16_t x155 = 2;
int64_t x156 = INT64_MAX;
int16_t x158 = INT16_MIN;
static volatile uint32_t x163 = 1884925U;
static int16_t x166 = INT16_MAX;
volatile int32_t t33 = -2050086;
int64_t x179 = 3072816190327LL;
int32_t x194 = 30918;
int32_t x196 = 328;
uint64_t x198 = 2655034339657645557LLU;
volatile uint32_t x205 = 8495642U;
volatile uint64_t t42 = UINT64_MAX;
uint8_t x216 = 5U;
int8_t x226 = INT8_MIN;
uint32_t x228 = 1198610U;
volatile int32_t t52 = 29;
int16_t x260 = -1;
volatile int16_t x263 = 16;
uint64_t x266 = 142389097939LLU;
int64_t x281 = 16946142224859LL;
int32_t x300 = INT32_MIN;
static volatile uint16_t x310 = 10U;
uint64_t x318 = UINT64_MAX;
int32_t x319 = 259784;
static volatile int64_t x324 = INT64_MIN;
static int32_t x333 = 171310;
volatile int16_t x334 = INT16_MIN;
volatile int32_t t67 = -45823;
static uint64_t x342 = UINT64_MAX;
static volatile int8_t x348 = INT8_MIN;
int16_t x350 = INT16_MIN;
static int32_t t70 = 181341;
int8_t x360 = INT8_MIN;
uint32_t x362 = 435858295U;
int8_t x363 = 0;
volatile int8_t x373 = INT8_MAX;
int32_t t75 = -1210;
int32_t x385 = -1;
int64_t x388 = -1LL;
static int32_t x390 = INT32_MIN;
volatile int32_t t77 = -180;
static int16_t x394 = 1;
uint8_t x395 = 3U;
int32_t t79 = -65185739;
int8_t x407 = 0;
static int8_t x414 = 1;
volatile uint16_t x420 = UINT16_MAX;
uint64_t x430 = UINT64_MAX;
int8_t x432 = -1;
volatile int32_t t85 = INT32_MIN;
int16_t x433 = INT16_MIN;
volatile uint64_t x436 = 274973520989LLU;
volatile int64_t x437 = INT64_MIN;
int64_t x443 = 151628LL;
static uint32_t x450 = UINT32_MAX;
uint64_t x455 = 4042336688535598LLU;
int8_t x479 = INT8_MIN;
static int32_t x480 = -1;
int32_t t94 = -553578024;
int64_t x485 = 390535270833477426LL;
static int32_t x489 = INT32_MIN;
volatile int64_t x493 = 8284055211845637LL;
static int16_t x496 = INT16_MIN;
volatile uint32_t x497 = 357030154U;


void f0(void) {
	static int8_t x1 = -1;
	uint16_t x2 = 10289U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -32738416;

	t0 = (x1*((x2*x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = 1991;
	static volatile int16_t x14 = -1;
	uint64_t x15 = 8319746LLU;
	volatile int64_t x16 = INT64_MIN;
	volatile int32_t t1 = 9;

	t1 = (x13*((x14*x15)<=x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 41U;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 91U;
	int32_t t2 = -231009959;

	t2 = (x17*((x18*x19)<=x20));

	if (t2 != 41) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 28712751855435LLU;
	int16_t x22 = -1;
	uint64_t x23 = UINT64_MAX;
	volatile uint64_t t3 = 3684833397556LLU;

	t3 = (x21*((x22*x23)<=x24));

	if (t3 != 28712751855435LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int64_t x26 = INT64_MIN;
	volatile uint64_t x27 = UINT64_MAX;
	int16_t x28 = INT16_MAX;
	volatile uint64_t t4 = 8785746500474LLU;

	t4 = (x25*((x26*x27)<=x28));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x36 = 1U;
	int32_t t5 = 863400839;

	t5 = (x33*((x34*x35)<=x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x37 = -1LL;
	uint32_t x38 = 133936U;
	int64_t x39 = 47096159451557LL;

	t6 = (x37*((x38*x39)<=x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x43 = INT16_MIN;
	volatile uint8_t x44 = UINT8_MAX;
	uint64_t t7 = 65475930551453422LLU;

	t7 = (x41*((x42*x43)<=x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = -1;
	int64_t x54 = -1LL;
	uint8_t x56 = UINT8_MAX;
	int32_t t8 = 2043;

	t8 = (x53*((x54*x55)<=x56));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = INT32_MIN;
	static int64_t x59 = -1LL;
	static uint32_t x60 = UINT32_MAX;
	volatile int32_t t9 = -797409667;

	t9 = (x57*((x58*x59)<=x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 13590092U;
	int8_t x62 = -1;
	uint8_t x63 = 57U;
	static int8_t x64 = -1;
	uint32_t t10 = 397328818U;

	t10 = (x61*((x62*x63)<=x64));

	if (t10 != 13590092U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x66 = INT8_MIN;
	int8_t x67 = 2;
	uint32_t x68 = 94901U;
	int32_t t11 = 66835;

	t11 = (x65*((x66*x67)<=x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MIN;
	static volatile int64_t x70 = -1LL;
	int8_t x71 = INT8_MAX;
	int64_t x72 = -375621575626149904LL;
	int32_t t12 = 1;

	t12 = (x69*((x70*x71)<=x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = INT16_MIN;
	static int16_t x74 = INT16_MAX;
	static volatile uint8_t x75 = 2U;
	int64_t x76 = -1LL;
	int32_t t13 = -1;

	t13 = (x73*((x74*x75)<=x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = 990U;
	uint8_t x82 = 4U;
	int8_t x84 = -1;

	t14 = (x81*((x82*x83)<=x84));

	if (t14 != 990) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x86 = 14U;
	uint16_t x87 = UINT16_MAX;
	uint16_t x88 = 14713U;
	static int32_t t15 = -59893;

	t15 = (x85*((x86*x87)<=x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = 103693979;
	static int64_t x90 = -1LL;
	static int64_t x92 = INT64_MIN;
	int32_t t16 = 49;

	t16 = (x89*((x90*x91)<=x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = 1372;
	int64_t x98 = 4100097247062741058LL;
	uint8_t x99 = 1U;
	int8_t x100 = -5;
	volatile int32_t t17 = 137;

	t17 = (x97*((x98*x99)<=x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = -15;
	uint16_t x102 = 6U;
	volatile uint16_t x103 = 6740U;
	static int32_t x104 = INT32_MAX;
	int32_t t18 = -6;

	t18 = (x101*((x102*x103)<=x104));

	if (t18 != -15) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = 110U;
	uint8_t x106 = 110U;
	int16_t x107 = 1;
	uint32_t x108 = 208758084U;
	int32_t t19 = -2;

	t19 = (x105*((x106*x107)<=x108));

	if (t19 != 110) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = 1U;
	volatile int8_t x111 = -1;
	volatile int8_t x112 = -14;
	int32_t t20 = -15901319;

	t20 = (x109*((x110*x111)<=x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x117 = 2895842;
	volatile uint64_t x119 = UINT64_MAX;
	int32_t x120 = 106846;

	t21 = (x117*((x118*x119)<=x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = INT64_MAX;
	volatile int32_t x122 = -1;
	volatile int16_t x123 = INT16_MIN;
	volatile int64_t t22 = INT64_MAX;

	t22 = (x121*((x122*x123)<=x124));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x133 = UINT32_MAX;
	uint32_t x134 = UINT32_MAX;
	int16_t x136 = INT16_MIN;
	uint32_t t23 = UINT32_MAX;

	t23 = (x133*((x134*x135)<=x136));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x137 = UINT64_MAX;
	volatile int32_t x138 = 0;
	int8_t x139 = -53;
	volatile int64_t x140 = -30994428011LL;
	uint64_t t24 = 964619603902538LLU;

	t24 = (x137*((x138*x139)<=x140));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 81U;
	uint16_t x142 = 12U;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 1U;

	t25 = (x141*((x142*x143)<=x144));

	if (t25 != 81) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = -1;
	uint8_t x146 = UINT8_MAX;
	uint16_t x147 = 0U;
	volatile int8_t x148 = INT8_MIN;
	int32_t t26 = -39042;

	t26 = (x145*((x146*x147)<=x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x149 = INT32_MAX;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = 1130084LLU;
	int8_t x152 = INT8_MIN;
	volatile int32_t t27 = INT32_MAX;

	t27 = (x149*((x150*x151)<=x152));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x153 = -15555404234LL;
	int64_t t28 = -5183221LL;

	t28 = (x153*((x154*x155)<=x156));

	if (t28 != -15555404234LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x157 = 9130302464LLU;
	int8_t x159 = INT8_MIN;
	static int16_t x160 = INT16_MAX;
	uint64_t t29 = 3883620365296LLU;

	t29 = (x157*((x158*x159)<=x160));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x161 = UINT16_MAX;
	static volatile int16_t x162 = INT16_MIN;
	volatile int32_t x164 = -1;
	volatile int32_t t30 = -376138;

	t30 = (x161*((x162*x163)<=x164));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x165 = UINT64_MAX;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	uint64_t t31 = UINT64_MAX;

	t31 = (x165*((x166*x167)<=x168));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = INT8_MIN;
	volatile uint16_t x170 = 138U;
	uint64_t x171 = UINT64_MAX;
	int32_t x172 = INT32_MIN;
	static int32_t t32 = 11786554;

	t32 = (x169*((x170*x171)<=x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x173 = 1U;
	volatile uint16_t x174 = 6U;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = -1;

	t33 = (x173*((x174*x175)<=x176));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x177 = INT32_MIN;
	int64_t x178 = -197612LL;
	int64_t x180 = INT64_MIN;
	int32_t t34 = -4;

	t34 = (x177*((x178*x179)<=x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x181 = 1502U;
	uint64_t x182 = 23332042750LLU;
	int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	static uint32_t t35 = 1223059530U;

	t35 = (x181*((x182*x183)<=x184));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = 49U;
	int8_t x186 = 14;
	static int8_t x187 = 1;
	volatile uint64_t x188 = 18839950LLU;
	static volatile int32_t t36 = 2;

	t36 = (x185*((x186*x187)<=x188));

	if (t36 != 49) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x189 = 201U;
	uint32_t x190 = 3U;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MIN;
	uint32_t t37 = 1558U;

	t37 = (x189*((x190*x191)<=x192));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = 24786LL;
	uint64_t x195 = 3095788083LLU;
	int64_t t38 = -60147545900LL;

	t38 = (x193*((x194*x195)<=x196));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x199 = INT16_MIN;
	static uint32_t x200 = UINT32_MAX;
	volatile int32_t t39 = -25724070;

	t39 = (x197*((x198*x199)<=x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = -1;
	volatile uint8_t x202 = 1U;
	uint8_t x203 = 1U;
	int8_t x204 = -61;
	static int32_t t40 = 160087;

	t40 = (x201*((x202*x203)<=x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x206 = -219;
	int16_t x207 = -1;
	int16_t x208 = INT16_MIN;
	volatile uint32_t t41 = 8299U;

	t41 = (x205*((x206*x207)<=x208));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = -1;
	int8_t x211 = 0;
	volatile int32_t x212 = 697;

	t42 = (x209*((x210*x211)<=x212));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x213 = 445U;
	int32_t x214 = -1;
	volatile int32_t x215 = -1;
	int32_t t43 = -745709;

	t43 = (x213*((x214*x215)<=x216));

	if (t43 != 445) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x217 = INT64_MIN;
	static int16_t x218 = INT16_MIN;
	uint64_t x219 = UINT64_MAX;
	uint64_t x220 = 361LLU;
	volatile int64_t t44 = -197LL;

	t44 = (x217*((x218*x219)<=x220));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = INT32_MAX;
	static int64_t x222 = 0LL;
	int64_t x223 = -1LL;
	uint16_t x224 = UINT16_MAX;
	int32_t t45 = INT32_MAX;

	t45 = (x221*((x222*x223)<=x224));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x225 = INT64_MAX;
	static int8_t x227 = INT8_MAX;
	static int64_t t46 = -597456560685058228LL;

	t46 = (x225*((x226*x227)<=x228));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x229 = INT16_MAX;
	static uint64_t x230 = UINT64_MAX;
	static int16_t x231 = INT16_MAX;
	static int64_t x232 = INT64_MIN;
	volatile int32_t t47 = 1115;

	t47 = (x229*((x230*x231)<=x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = 0;
	int32_t x234 = -1;
	uint32_t x235 = UINT32_MAX;
	static int16_t x236 = 98;
	volatile int32_t t48 = -3;

	t48 = (x233*((x234*x235)<=x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = 1;
	int32_t x239 = 47;
	uint64_t x240 = UINT64_MAX;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x237*((x238*x239)<=x240));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = -1;
	int16_t x242 = INT16_MAX;
	int16_t x243 = -1;
	static int8_t x244 = -21;
	int32_t t50 = -253;

	t50 = (x241*((x242*x243)<=x244));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x249 = 1768U;
	int32_t x250 = -6806;
	volatile uint16_t x251 = 4U;
	uint32_t x252 = 6U;
	uint32_t t51 = 10922991U;

	t51 = (x249*((x250*x251)<=x252));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x253 = 0U;
	static volatile int16_t x254 = INT16_MIN;
	uint16_t x255 = 330U;
	int64_t x256 = INT64_MIN;

	t52 = (x253*((x254*x255)<=x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x257 = 1U;
	volatile int16_t x258 = -1;
	int32_t x259 = 1149603;
	static int32_t t53 = 2;

	t53 = (x257*((x258*x259)<=x260));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x261 = INT16_MIN;
	uint8_t x262 = 2U;
	static uint32_t x264 = 106340U;
	volatile int32_t t54 = -2;

	t54 = (x261*((x262*x263)<=x264));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = 15865192940791LL;
	int8_t x267 = -1;
	volatile int8_t x268 = INT8_MIN;
	volatile int64_t t55 = -9670813LL;

	t55 = (x265*((x266*x267)<=x268));

	if (t55 != 15865192940791LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x269 = UINT64_MAX;
	int8_t x270 = -1;
	uint16_t x271 = 12U;
	int32_t x272 = INT32_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = (x269*((x270*x271)<=x272));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x282 = -1LL;
	static int32_t x283 = INT32_MIN;
	static int32_t x284 = -270720559;
	int64_t t57 = 75774LL;

	t57 = (x281*((x282*x283)<=x284));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = -736;
	uint32_t x299 = UINT32_MAX;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x297*((x298*x299)<=x300));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x301 = 109357926U;
	volatile int16_t x302 = 0;
	int64_t x303 = 28164116254324LL;
	static int16_t x304 = -45;
	volatile uint32_t t59 = 3U;

	t59 = (x301*((x302*x303)<=x304));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x305 = -97;
	uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t60 = -477;

	t60 = (x305*((x306*x307)<=x308));

	if (t60 != -97) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = -1LL;
	int16_t x311 = -2902;
	int64_t x312 = INT64_MAX;
	int64_t t61 = 4039LL;

	t61 = (x309*((x310*x311)<=x312));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x317 = INT64_MIN;
	static uint32_t x320 = 3903254U;
	int64_t t62 = 242672378099LL;

	t62 = (x317*((x318*x319)<=x320));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x321 = 8384677;
	volatile int8_t x322 = -26;
	int64_t x323 = 151822162691123610LL;
	volatile int32_t t63 = 18;

	t63 = (x321*((x322*x323)<=x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x325 = INT16_MAX;
	static int8_t x326 = 37;
	uint8_t x327 = 1U;
	int32_t x328 = 108412;
	volatile int32_t t64 = -19;

	t64 = (x325*((x326*x327)<=x328));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x329 = 4967177039288971LLU;
	uint16_t x330 = UINT16_MAX;
	static volatile uint64_t x331 = 3670LLU;
	int32_t x332 = 72;
	volatile uint64_t t65 = 2114062631218LLU;

	t65 = (x329*((x330*x331)<=x332));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x335 = -1;
	static uint16_t x336 = 3429U;
	volatile int32_t t66 = -1019328;

	t66 = (x333*((x334*x335)<=x336));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x337 = INT8_MIN;
	uint16_t x338 = 228U;
	int8_t x339 = INT8_MIN;
	volatile int64_t x340 = -1LL;

	t67 = (x337*((x338*x339)<=x340));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x341 = UINT64_MAX;
	uint8_t x343 = 1U;
	static uint8_t x344 = 3U;
	uint64_t t68 = 99224502LLU;

	t68 = (x341*((x342*x343)<=x344));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x345 = 2006382581331765363LL;
	static int8_t x346 = INT8_MIN;
	static volatile int8_t x347 = INT8_MAX;
	int64_t t69 = 1631031LL;

	t69 = (x345*((x346*x347)<=x348));

	if (t69 != 2006382581331765363LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = INT16_MAX;
	int64_t x351 = 57675LL;
	uint32_t x352 = UINT32_MAX;

	t70 = (x349*((x350*x351)<=x352));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x357 = 14U;
	int16_t x358 = -1;
	int64_t x359 = -1LL;
	int32_t t71 = -2806;

	t71 = (x357*((x358*x359)<=x360));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x361 = -1;
	int64_t x364 = INT64_MAX;
	int32_t t72 = -4;

	t72 = (x361*((x362*x363)<=x364));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t73 = -140311910;

	t73 = (x373*((x374*x375)<=x376));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = -1LL;
	volatile int64_t x378 = -1LL;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;
	static int64_t t74 = -28047202564LL;

	t74 = (x377*((x378*x379)<=x380));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x381 = INT32_MAX;
	uint64_t x382 = 116174835169LLU;
	volatile uint64_t x383 = UINT64_MAX;
	uint32_t x384 = UINT32_MAX;

	t75 = (x381*((x382*x383)<=x384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x386 = 2U;
	static int16_t x387 = 60;
	static volatile int32_t t76 = -2629056;

	t76 = (x385*((x386*x387)<=x388));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = INT16_MIN;
	uint64_t x391 = 38030782560LLU;
	volatile uint16_t x392 = 307U;

	t77 = (x389*((x390*x391)<=x392));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x393 = INT64_MAX;
	uint8_t x396 = 48U;
	int64_t t78 = INT64_MAX;

	t78 = (x393*((x394*x395)<=x396));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x397 = 20U;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	int64_t x400 = -1LL;

	t79 = (x397*((x398*x399)<=x400));

	if (t79 != 20) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x405 = UINT32_MAX;
	volatile uint16_t x406 = UINT16_MAX;
	uint64_t x408 = 28696LLU;
	uint32_t t80 = UINT32_MAX;

	t80 = (x405*((x406*x407)<=x408));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x413 = INT16_MIN;
	uint32_t x415 = 22U;
	int32_t x416 = INT32_MIN;
	volatile int32_t t81 = 0;

	t81 = (x413*((x414*x415)<=x416));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x417 = -896;
	int64_t x418 = INT64_MAX;
	int8_t x419 = -1;
	static int32_t t82 = 12030903;

	t82 = (x417*((x418*x419)<=x420));

	if (t82 != -896) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x421 = UINT32_MAX;
	int32_t x422 = -1;
	volatile uint8_t x423 = UINT8_MAX;
	static int64_t x424 = 61713908884LL;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x421*((x422*x423)<=x424));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x425 = -1;
	int8_t x426 = -1;
	uint64_t x427 = UINT64_MAX;
	uint32_t x428 = 7470U;
	static volatile int32_t t84 = 986207;

	t84 = (x425*((x426*x427)<=x428));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x429 = INT32_MIN;
	static volatile int64_t x431 = -1LL;

	t85 = (x429*((x430*x431)<=x432));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x434 = INT8_MIN;
	int8_t x435 = -1;
	volatile int32_t t86 = -124;

	t86 = (x433*((x434*x435)<=x436));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x438 = 1;
	volatile int32_t x439 = INT32_MIN;
	uint16_t x440 = 4465U;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x437*((x438*x439)<=x440));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x441 = 6U;
	int32_t x442 = 231;
	int64_t x444 = INT64_MIN;
	int32_t t88 = -63;

	t88 = (x441*((x442*x443)<=x444));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x445 = INT16_MIN;
	uint64_t x446 = UINT64_MAX;
	static int32_t x447 = -1;
	uint64_t x448 = UINT64_MAX;
	volatile int32_t t89 = -626989098;

	t89 = (x445*((x446*x447)<=x448));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x449 = 209195U;
	uint32_t x451 = UINT32_MAX;
	int16_t x452 = INT16_MIN;
	uint32_t t90 = 1085128U;

	t90 = (x449*((x450*x451)<=x452));

	if (t90 != 209195U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x453 = 25U;
	int32_t x454 = -1;
	static int64_t x456 = INT64_MIN;
	static volatile int32_t t91 = -56785;

	t91 = (x453*((x454*x455)<=x456));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x457 = 51;
	int8_t x458 = 10;
	int32_t x459 = 1530;
	int32_t x460 = 3;
	volatile int32_t t92 = 1;

	t92 = (x457*((x458*x459)<=x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x477 = INT8_MIN;
	static int64_t x478 = 70277522938518436LL;
	volatile int32_t t93 = -1;

	t93 = (x477*((x478*x479)<=x480));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x481 = 738;
	int64_t x482 = INT64_MIN;
	uint64_t x483 = 866565684365700LLU;
	uint64_t x484 = 48725708337LLU;

	t94 = (x481*((x482*x483)<=x484));

	if (t94 != 738) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x486 = INT8_MIN;
	uint64_t x487 = 356776244LLU;
	int32_t x488 = INT32_MAX;
	volatile int64_t t95 = -65604479646LL;

	t95 = (x485*((x486*x487)<=x488));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x490 = -1;
	int8_t x491 = -1;
	volatile uint16_t x492 = 0U;
	static volatile int32_t t96 = 22266681;

	t96 = (x489*((x490*x491)<=x492));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x494 = 669332136135170LL;
	static uint16_t x495 = 142U;
	volatile int64_t t97 = -9702849396LL;

	t97 = (x493*((x494*x495)<=x496));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x498 = -1;
	int16_t x499 = 348;
	int16_t x500 = -25;
	static uint32_t t98 = 869U;

	t98 = (x497*((x498*x499)<=x500));

	if (t98 != 357030154U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x501 = -1;
	uint32_t x502 = UINT32_MAX;
	static uint64_t x503 = 7712448786544154537LLU;
	int16_t x504 = -61;
	int32_t t99 = 797483822;

	t99 = (x501*((x502*x503)<=x504));

	if (t99 != -1) { NG(); } else { ; }
	
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


    return 0;
}

