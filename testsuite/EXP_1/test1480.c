#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
volatile uint64_t t0 = 128285777LLU;
uint16_t x5 = UINT16_MAX;
static int64_t x12 = INT64_MAX;
uint32_t x15 = 445U;
int64_t x18 = INT64_MIN;
volatile int64_t t7 = -137029193784834495LL;
uint16_t x37 = 41U;
static volatile int64_t x39 = -2925058593988LL;
int32_t t14 = -33029;
static int64_t x63 = INT64_MAX;
uint16_t x64 = 967U;
int64_t x74 = -1LL;
int8_t x79 = INT8_MIN;
int64_t x80 = 15060345096158LL;
volatile int64_t x85 = 36000565404LL;
static uint64_t x86 = UINT64_MAX;
int32_t t21 = -3358146;
int32_t x98 = -559670848;
volatile uint16_t x99 = UINT16_MAX;
int16_t x101 = -1;
volatile uint16_t x105 = UINT16_MAX;
int32_t x116 = INT32_MIN;
volatile int32_t t28 = -203520;
static volatile uint32_t x120 = 9U;
static volatile uint32_t t29 = 79264555U;
static uint32_t x122 = 6U;
uint32_t x128 = 148472U;
uint64_t x129 = UINT64_MAX;
uint64_t x130 = 1LLU;
volatile int64_t x131 = -91238557756006LL;
static volatile int64_t t34 = 3296603493981167472LL;
static int8_t x144 = -1;
uint32_t x146 = 35209416U;
int32_t x147 = -3164444;
volatile int32_t x158 = INT32_MIN;
static uint8_t x159 = 0U;
static int64_t x163 = INT64_MIN;
volatile int32_t t40 = 228734;
uint16_t x184 = 18354U;
static uint16_t x186 = UINT16_MAX;
int8_t x187 = 14;
volatile int32_t t46 = -540;
volatile uint32_t x195 = 12299475U;
uint16_t x198 = 9764U;
static int16_t x199 = 11;
volatile uint64_t x203 = UINT64_MAX;
int64_t x205 = -27615366103597LL;
volatile int8_t x206 = 1;
int32_t t51 = 7;
static uint64_t x210 = 306LLU;
uint32_t x211 = UINT32_MAX;
int32_t t52 = -7331;
int16_t x214 = INT16_MIN;
int8_t x215 = INT8_MIN;
static uint32_t x223 = 1715992U;
int16_t x228 = INT16_MIN;
int64_t x230 = INT64_MAX;
uint64_t x231 = 2361081LLU;
volatile int8_t x238 = -45;
uint32_t x239 = UINT32_MAX;
volatile int32_t t60 = 0;
int16_t x247 = INT16_MAX;
int64_t x252 = -1LL;
uint32_t x253 = UINT32_MAX;
volatile int32_t t64 = 13281150;
int8_t x261 = 59;
static volatile int32_t t65 = -371;
int8_t x267 = 0;
int8_t x269 = INT8_MIN;
static int8_t x283 = -1;
int64_t x284 = -1LL;
volatile int8_t x286 = INT8_MIN;
int32_t t71 = 3407;
uint32_t x295 = 128955622U;
static int16_t x298 = INT16_MAX;
uint32_t t74 = 49268U;
static volatile uint64_t x306 = 166035103426019LLU;
uint16_t x308 = 32U;
volatile int32_t t76 = -313711986;
int32_t x311 = 0;
int64_t x312 = -156512631001283379LL;
int32_t x319 = -1815074;
int32_t t79 = 5;
int64_t x321 = INT64_MAX;
int8_t x323 = INT8_MIN;
static int8_t x326 = 7;
int64_t t81 = 451707883LL;
uint64_t x329 = UINT64_MAX;
int16_t x331 = INT16_MIN;
static uint8_t x333 = UINT8_MAX;
static int64_t x341 = INT64_MIN;
uint64_t x347 = 98LLU;
static int8_t x354 = INT8_MIN;
uint8_t x355 = UINT8_MAX;
uint32_t x357 = 464736405U;
volatile int8_t x361 = INT8_MAX;
int16_t x364 = -1;
int8_t x374 = 30;
static int16_t x382 = INT16_MAX;
static uint8_t x384 = 1U;
int32_t t95 = -75858072;
static uint16_t x398 = UINT16_MAX;
static int16_t x400 = -7488;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	int32_t x3 = 744;

	t0 = (((x1<x2)<=x3)&x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 24525LLU;
	int8_t x7 = 0;
	static int16_t x8 = -1;
	int32_t t1 = -1;

	t1 = (((x5<x6)<=x7)&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 139832530649LL;
	volatile int8_t x10 = INT8_MIN;
	static volatile int16_t x11 = -3594;
	volatile int64_t t2 = -4167489LL;

	t2 = (((x9<x10)<=x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 98U;
	static int16_t x14 = INT16_MIN;
	uint16_t x16 = 6U;
	volatile int32_t t3 = 53;

	t3 = (((x13<x14)<=x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	uint32_t x19 = 511U;
	int8_t x20 = -1;
	int32_t t4 = 3;

	t4 = (((x17<x18)<=x19)&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 4939U;
	uint32_t x22 = 12470U;
	int32_t x23 = 305483092;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -38;

	t5 = (((x21<x22)<=x23)&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int32_t x26 = -1;
	int64_t x27 = INT64_MAX;
	uint64_t x28 = 518294LLU;
	uint64_t t6 = 1389039793LLU;

	t6 = (((x25<x26)<=x27)&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 2614;
	uint8_t x30 = UINT8_MAX;
	static volatile int32_t x31 = 615357;
	int64_t x32 = INT64_MIN;

	t7 = (((x29<x30)<=x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -981;
	static int64_t x34 = -1LL;
	int16_t x35 = -1;
	static int8_t x36 = INT8_MIN;
	static int32_t t8 = -4;

	t8 = (((x33<x34)<=x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -1;
	uint8_t x40 = 33U;
	volatile int32_t t9 = 2582;

	t9 = (((x37<x38)<=x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 5917U;
	int16_t x42 = -5;
	int32_t x43 = INT32_MIN;
	int32_t x44 = -1;
	volatile int32_t t10 = 89;

	t10 = (((x41<x42)<=x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = -12;
	int64_t x47 = INT64_MIN;
	static int16_t x48 = -6463;
	int32_t t11 = 7;

	t11 = (((x45<x46)<=x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -245549;
	static int32_t x50 = INT32_MIN;
	int8_t x51 = -16;
	volatile int64_t x52 = 9LL;
	int64_t t12 = 125935923LL;

	t12 = (((x49<x50)<=x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 96U;
	int64_t x54 = INT64_MIN;
	int64_t x55 = -1LL;
	uint32_t x56 = 343690288U;
	volatile uint32_t t13 = 6U;

	t13 = (((x53<x54)<=x55)&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = UINT16_MAX;
	int16_t x59 = -1;
	static int8_t x60 = INT8_MIN;

	t14 = (((x57<x58)<=x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 0U;
	int64_t x62 = 51788296052LL;
	volatile int32_t t15 = 11690;

	t15 = (((x61<x62)<=x63)&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1893156938789LL;
	int32_t x66 = -1;
	uint64_t x67 = 20932297LLU;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -122;

	t16 = (((x65<x66)<=x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 504545381898LLU;
	int64_t x70 = 18804466040466277LL;
	int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MAX;
	int64_t t17 = 1LL;

	t17 = (((x69<x70)<=x71)&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int32_t x75 = INT32_MIN;
	int64_t x76 = 17985368097464LL;
	static int64_t t18 = -7939281931984620LL;

	t18 = (((x73<x74)<=x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	volatile int64_t t19 = 43458919118034529LL;

	t19 = (((x77<x78)<=x79)&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = INT16_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t20 = 8896LL;

	t20 = (((x81<x82)<=x83)&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x87 = INT16_MIN;
	uint16_t x88 = 12186U;

	t21 = (((x85<x86)<=x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -939895573884596164LL;
	int32_t x90 = INT32_MIN;
	static int32_t x91 = 374;
	static int16_t x92 = INT16_MIN;
	int32_t t22 = 2362204;

	t22 = (((x89<x90)<=x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 1264;
	int8_t x94 = -1;
	static int64_t x95 = -61629256454201LL;
	int32_t x96 = 1;
	volatile int32_t t23 = -6317176;

	t23 = (((x93<x94)<=x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	static volatile int32_t x100 = -1;
	volatile int32_t t24 = -107;

	t24 = (((x97<x98)<=x99)&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MIN;
	int8_t x103 = -1;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 516356;

	t25 = (((x101<x102)<=x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -8191114;

	t26 = (((x105<x106)<=x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = INT32_MAX;
	int16_t x111 = INT16_MAX;
	int8_t x112 = -8;
	int32_t t27 = -3319;

	t27 = (((x109<x110)<=x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 0U;
	uint64_t x114 = 17422112LLU;
	volatile int8_t x115 = 56;

	t28 = (((x113<x114)<=x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	volatile uint8_t x118 = UINT8_MAX;
	int64_t x119 = INT64_MIN;

	t29 = (((x117<x118)<=x119)&x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MAX;
	int64_t t30 = 11708LL;

	t30 = (((x121<x122)<=x123)&x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = -1;
	uint64_t x127 = 9947LLU;
	uint32_t t31 = 735790063U;

	t31 = (((x125<x126)<=x127)&x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x132 = -225072979LL;
	int64_t t32 = 103LL;

	t32 = (((x129<x130)<=x131)&x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 12;
	uint32_t x134 = UINT32_MAX;
	int64_t x135 = INT64_MIN;
	int32_t x136 = -9573;
	volatile int32_t t33 = -29;

	t33 = (((x133<x134)<=x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	int32_t x138 = 8;
	int32_t x139 = INT32_MAX;
	int64_t x140 = 124LL;

	t34 = (((x137<x138)<=x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MAX;
	int64_t x143 = INT64_MAX;
	volatile int32_t t35 = -1738927;

	t35 = (((x141<x142)<=x143)&x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int64_t x148 = INT64_MAX;
	volatile int64_t t36 = 25808175232108LL;

	t36 = (((x145<x146)<=x147)&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 44U;
	volatile uint64_t x150 = 4370LLU;
	int32_t x151 = -1;
	static volatile int64_t x152 = 16846LL;
	volatile int64_t t37 = -2786897440LL;

	t37 = (((x149<x150)<=x151)&x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	volatile uint16_t x154 = 4372U;
	int64_t x155 = INT64_MIN;
	int8_t x156 = -1;
	volatile int32_t t38 = 94503322;

	t38 = (((x153<x154)<=x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = 1788;

	t39 = (((x157<x158)<=x159)&x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = 3622164U;
	volatile int16_t x164 = -4184;

	t40 = (((x161<x162)<=x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	volatile int64_t x166 = -5562353038470624LL;
	uint32_t x167 = 1U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t41 = 112272549LL;

	t41 = (((x165<x166)<=x167)&x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = 1U;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = UINT64_MAX;
	uint64_t t42 = 152511552415721612LLU;

	t42 = (((x169<x170)<=x171)&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int64_t x174 = 1603225LL;
	int64_t x175 = -68428815LL;
	volatile int16_t x176 = -1;
	static volatile int32_t t43 = 187584;

	t43 = (((x173<x174)<=x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int8_t x178 = -1;
	int64_t x179 = -1LL;
	uint32_t x180 = 2431U;
	uint32_t t44 = 29955956U;

	t44 = (((x177<x178)<=x179)&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MAX;
	int8_t x183 = -2;
	volatile int32_t t45 = 358660;

	t45 = (((x181<x182)<=x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	int32_t x188 = -1;

	t46 = (((x185<x186)<=x187)&x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MIN;
	volatile int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	uint16_t x192 = 4U;
	int32_t t47 = -189096651;

	t47 = (((x189<x190)<=x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	static uint16_t x194 = UINT16_MAX;
	static int8_t x196 = INT8_MAX;
	volatile int32_t t48 = 739437;

	t48 = (((x193<x194)<=x195)&x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 80141681U;
	uint32_t x200 = 1U;
	volatile uint32_t t49 = 1U;

	t49 = (((x197<x198)<=x199)&x200);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 8241;
	int16_t x202 = 875;
	int16_t x204 = -7;
	volatile int32_t t50 = 85;

	t50 = (((x201<x202)<=x203)&x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x207 = INT8_MIN;
	volatile int8_t x208 = -1;

	t51 = (((x205<x206)<=x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	static int32_t x212 = INT32_MIN;

	t52 = (((x209<x210)<=x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	static volatile int64_t x216 = 1102566955313LL;
	int64_t t53 = -387397LL;

	t53 = (((x213<x214)<=x215)&x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MAX;
	int32_t x218 = INT32_MIN;
	static int32_t x219 = 657632217;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = -60139;

	t54 = (((x217<x218)<=x219)&x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 20U;
	volatile uint32_t x222 = UINT32_MAX;
	uint32_t x224 = 1U;
	volatile uint32_t t55 = 422U;

	t55 = (((x221<x222)<=x223)&x224);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -12553;
	static int16_t x226 = -1;
	uint8_t x227 = UINT8_MAX;
	int32_t t56 = -234931974;

	t56 = (((x225<x226)<=x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -3;
	int32_t x232 = INT32_MIN;
	int32_t t57 = 31974524;

	t57 = (((x229<x230)<=x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 23;
	uint16_t x234 = 7745U;
	int16_t x235 = 0;
	volatile int64_t x236 = INT64_MIN;
	int64_t t58 = -18566253738LL;

	t58 = (((x233<x234)<=x235)&x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 6;
	int8_t x240 = 13;
	volatile int32_t t59 = 0;

	t59 = (((x237<x238)<=x239)&x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 1648432041U;
	int32_t x242 = INT32_MIN;
	static volatile int16_t x243 = INT16_MIN;
	static int8_t x244 = 10;

	t60 = (((x241<x242)<=x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 16335U;
	int32_t x246 = INT32_MIN;
	static int64_t x248 = 234LL;
	int64_t t61 = -8616867681867406LL;

	t61 = (((x245<x246)<=x247)&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 32456U;
	int8_t x250 = INT8_MIN;
	static int8_t x251 = -10;
	int64_t t62 = 308013678LL;

	t62 = (((x249<x250)<=x251)&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = INT32_MIN;
	int8_t x255 = INT8_MIN;
	uint64_t x256 = 900301LLU;
	uint64_t t63 = 56LLU;

	t63 = (((x253<x254)<=x255)&x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = 7;
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MAX;
	int16_t x260 = INT16_MIN;

	t64 = (((x257<x258)<=x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x262 = INT8_MIN;
	int64_t x263 = -1LL;
	int8_t x264 = -10;

	t65 = (((x261<x262)<=x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -2526;
	static int8_t x266 = -1;
	int8_t x268 = 1;
	volatile int32_t t66 = -10044792;

	t66 = (((x265<x266)<=x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -1;
	int16_t x271 = INT16_MAX;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = -16185;

	t67 = (((x269<x270)<=x271)&x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MAX;
	int32_t x276 = -334;
	volatile int32_t t68 = -487;

	t68 = (((x273<x274)<=x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile int64_t x278 = INT64_MAX;
	int32_t x279 = INT32_MIN;
	static uint16_t x280 = 51U;
	volatile int32_t t69 = -460;

	t69 = (((x277<x278)<=x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	int32_t x282 = -1;
	int64_t t70 = -1LL;

	t70 = (((x281<x282)<=x283)&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	uint8_t x287 = 0U;
	static volatile int16_t x288 = -1;

	t71 = (((x285<x286)<=x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 31287949504063671LLU;
	volatile uint8_t x290 = 64U;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = 92U;
	static volatile int32_t t72 = 6;

	t72 = (((x289<x290)<=x291)&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 29915LLU;
	int16_t x294 = INT16_MIN;
	int8_t x296 = -1;
	static int32_t t73 = -80538;

	t73 = (((x293<x294)<=x295)&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int32_t x299 = INT32_MIN;
	uint32_t x300 = UINT32_MAX;

	t74 = (((x297<x298)<=x299)&x300);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x301 = 3;
	static int32_t x302 = INT32_MAX;
	static int16_t x303 = INT16_MIN;
	volatile int8_t x304 = INT8_MIN;
	volatile int32_t t75 = -22431439;

	t75 = (((x301<x302)<=x303)&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 31948U;
	uint16_t x307 = UINT16_MAX;

	t76 = (((x305<x306)<=x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -2123;
	int8_t x310 = INT8_MIN;
	volatile int64_t t77 = -4LL;

	t77 = (((x309<x310)<=x311)&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 455;
	int32_t x314 = INT32_MIN;
	volatile uint32_t x315 = 7U;
	int16_t x316 = 142;
	int32_t t78 = 1;

	t78 = (((x313<x314)<=x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 1047U;
	int8_t x318 = INT8_MIN;
	uint8_t x320 = 7U;

	t79 = (((x317<x318)<=x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MIN;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = -10;

	t80 = (((x321<x322)<=x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 21690U;
	int64_t x327 = INT64_MIN;
	int64_t x328 = 94661489988887953LL;

	t81 = (((x325<x326)<=x327)&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x330 = UINT16_MAX;
	uint8_t x332 = 28U;
	static int32_t t82 = 20332427;

	t82 = (((x329<x330)<=x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MIN;
	int16_t x335 = -3;
	int64_t x336 = 79862306LL;
	int64_t t83 = -526LL;

	t83 = (((x333<x334)<=x335)&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = 37U;
	static int8_t x338 = INT8_MIN;
	uint16_t x339 = 23512U;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 3950982;

	t84 = (((x337<x338)<=x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x342 = 2037U;
	int16_t x343 = -64;
	static int16_t x344 = 19;
	static volatile int32_t t85 = -31941626;

	t85 = (((x341<x342)<=x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	uint8_t x346 = 0U;
	int32_t x348 = 3698074;
	volatile int32_t t86 = 907762;

	t86 = (((x345<x346)<=x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x349 = 14;
	volatile int64_t x350 = INT64_MIN;
	static volatile int64_t x351 = -202420LL;
	volatile int8_t x352 = -1;
	volatile int32_t t87 = -1;

	t87 = (((x349<x350)<=x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 262831536771637LLU;
	int32_t x356 = -1;
	int32_t t88 = -28314;

	t88 = (((x353<x354)<=x355)&x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = 40331;
	static volatile int32_t x359 = INT32_MAX;
	int8_t x360 = -1;
	int32_t t89 = 1429;

	t89 = (((x357<x358)<=x359)&x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x362 = UINT8_MAX;
	static uint16_t x363 = UINT16_MAX;
	int32_t t90 = 1;

	t90 = (((x361<x362)<=x363)&x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MAX;
	int64_t x366 = INT64_MIN;
	int32_t x367 = -29674;
	static uint32_t x368 = 864014306U;
	volatile uint32_t t91 = 3U;

	t91 = (((x365<x366)<=x367)&x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int64_t x370 = -1LL;
	uint32_t x371 = UINT32_MAX;
	uint32_t x372 = 881U;
	uint32_t t92 = 541U;

	t92 = (((x369<x370)<=x371)&x372);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 8001514U;
	static volatile uint16_t x375 = UINT16_MAX;
	uint32_t x376 = UINT32_MAX;
	uint32_t t93 = 117823906U;

	t93 = (((x373<x374)<=x375)&x376);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 1U;
	uint64_t x378 = UINT64_MAX;
	int64_t x379 = -1LL;
	uint8_t x380 = 9U;
	int32_t t94 = -705;

	t94 = (((x377<x378)<=x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	static int8_t x383 = INT8_MIN;

	t95 = (((x381<x382)<=x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	static volatile int16_t x386 = INT16_MIN;
	static uint8_t x387 = UINT8_MAX;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = 743633;

	t96 = (((x385<x386)<=x387)&x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -231546296985LL;
	volatile int8_t x390 = 54;
	static int16_t x391 = 1;
	static uint32_t x392 = 13424565U;
	uint32_t t97 = 1049U;

	t97 = (((x389<x390)<=x391)&x392);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = UINT64_MAX;
	int8_t x394 = INT8_MAX;
	int16_t x395 = -1235;
	uint64_t x396 = 271834275916270616LLU;
	uint64_t t98 = 14129LLU;

	t98 = (((x393<x394)<=x395)&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 3U;
	static uint64_t x399 = 5372159590669LLU;
	int32_t t99 = -591015716;

	t99 = (((x397<x398)<=x399)&x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

