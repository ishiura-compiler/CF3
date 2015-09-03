#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
volatile uint8_t x4 = 5U;
uint8_t x13 = UINT8_MAX;
uint64_t x30 = 4681208273LLU;
uint8_t x39 = 5U;
volatile uint64_t x44 = 450763LLU;
int64_t x45 = -1LL;
int64_t x47 = INT64_MIN;
volatile uint64_t x51 = 7605136218LLU;
int8_t x54 = -1;
static int64_t x55 = -1LL;
static int8_t x56 = -1;
int16_t x68 = INT16_MAX;
static int64_t x70 = INT64_MAX;
volatile int32_t t15 = -381;
uint8_t x74 = UINT8_MAX;
static int16_t x76 = 4;
int32_t t16 = 1017;
int8_t x81 = INT8_MIN;
int64_t x92 = -66734LL;
volatile int32_t t20 = -330;
int16_t x106 = INT16_MIN;
int32_t x107 = -1;
int64_t x108 = 6355489924LL;
static volatile int32_t t25 = -410;
volatile int32_t x118 = INT32_MAX;
int64_t t26 = -131569590818299660LL;
int32_t t27 = 1780850;
int16_t x125 = -1;
uint64_t x126 = 422917078212415010LLU;
volatile int32_t x128 = 254043;
int8_t x132 = -1;
volatile uint16_t x135 = UINT16_MAX;
uint32_t x140 = UINT32_MAX;
int64_t t33 = 522842900LL;
int8_t x159 = INT8_MIN;
int16_t x164 = 19;
uint16_t x168 = 1U;
volatile int64_t x170 = -1LL;
uint16_t x172 = UINT16_MAX;
int32_t t37 = 372379;
int8_t x174 = INT8_MIN;
int32_t x178 = -416576055;
volatile int64_t t39 = -12546936157434423LL;
int32_t x181 = INT32_MIN;
uint16_t x182 = UINT16_MAX;
uint16_t x187 = UINT16_MAX;
uint8_t x188 = 7U;
static int8_t x194 = INT8_MAX;
uint8_t x201 = 77U;
int64_t x204 = -111456574899LL;
static int64_t t44 = 34390955903557LL;
int64_t x212 = INT64_MIN;
static volatile int64_t t46 = -122115384815761536LL;
volatile uint32_t t47 = 2743U;
int64_t x218 = INT64_MIN;
static int32_t x225 = INT32_MAX;
static uint64_t x226 = UINT64_MAX;
int64_t x236 = -1LL;
static volatile int64_t x238 = -1LL;
volatile uint32_t t53 = 7850U;
uint16_t x242 = 283U;
int64_t x244 = INT64_MAX;
static int32_t t55 = -27063;
int8_t x251 = 0;
uint64_t x253 = 1813068839279970993LLU;
volatile int16_t x258 = -229;
int8_t x264 = -3;
static volatile int32_t t59 = 0;
int8_t x265 = INT8_MIN;
uint16_t x266 = 45U;
int64_t x267 = -7858520LL;
int32_t x268 = -1;
static int32_t t60 = -3596703;
int8_t x269 = -45;
int16_t x273 = INT16_MIN;
int64_t x275 = -28637869LL;
volatile int32_t t62 = -264967022;
int32_t x277 = INT32_MAX;
int8_t x284 = 6;
static uint8_t x287 = UINT8_MAX;
uint8_t x291 = UINT8_MAX;
int64_t x292 = 473670LL;
uint16_t x300 = 1254U;
int8_t x303 = 1;
volatile uint16_t x309 = 1310U;
int32_t x317 = INT32_MIN;
static int32_t x320 = INT32_MAX;
int32_t x323 = -3019;
volatile int32_t t73 = -29;
uint16_t x325 = 0U;
static uint16_t x328 = 1000U;
int64_t x330 = INT64_MIN;
int32_t x331 = INT32_MAX;
int32_t x332 = INT32_MIN;
int16_t x338 = -1;
volatile uint8_t x346 = UINT8_MAX;
uint16_t x349 = UINT16_MAX;
volatile uint16_t x354 = UINT16_MAX;
uint16_t x355 = 15U;
uint8_t x356 = UINT8_MAX;
static int8_t x360 = INT8_MIN;
int32_t t82 = 259607;
int16_t x365 = INT16_MIN;
int16_t x379 = INT16_MAX;
int16_t x380 = INT16_MIN;
int64_t x384 = 278287037LL;
volatile int64_t x385 = -1LL;
int8_t x386 = 1;
int8_t x387 = 0;
int32_t x388 = INT32_MAX;
static volatile int32_t t89 = -5;
uint64_t x393 = 970LLU;
static uint8_t x396 = UINT8_MAX;
uint8_t x406 = 54U;
volatile int8_t x414 = -5;
int32_t x425 = -1;
int32_t x426 = INT32_MIN;
int64_t x430 = INT64_MIN;
int32_t t99 = 1;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int16_t x3 = -48;
	static int32_t t0 = -672328;

	t0 = (((x1%x2)<=x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x6 = -1;
	uint16_t x7 = 2U;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -420;

	t1 = (((x5%x6)<=x7)%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 3408U;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	static int32_t x12 = -1;
	int32_t t2 = 6;

	t2 = (((x9%x10)<=x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 46U;
	uint32_t x15 = UINT32_MAX;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 100U;

	t3 = (((x13%x14)<=x15)%x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile int64_t x18 = INT64_MIN;
	static int16_t x19 = 552;
	int16_t x20 = INT16_MAX;
	int32_t t4 = 932141704;

	t4 = (((x17%x18)<=x19)%x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint8_t x22 = 2U;
	uint32_t x23 = UINT32_MAX;
	static volatile int8_t x24 = -2;
	volatile int32_t t5 = 8628732;

	t5 = (((x21%x22)<=x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int16_t x31 = -1;
	int64_t x32 = -1LL;
	volatile int64_t t6 = 8023654567LL;

	t6 = (((x29%x30)<=x31)%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 5U;
	int32_t x34 = -1;
	volatile int64_t x35 = INT64_MAX;
	volatile int32_t x36 = -462;
	volatile int32_t t7 = 1436961;

	t7 = (((x33%x34)<=x35)%x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 953824069261636LLU;
	int32_t x38 = INT32_MAX;
	volatile int16_t x40 = -3552;
	int32_t t8 = 101;

	t8 = (((x37%x38)<=x39)%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 16U;
	int8_t x42 = INT8_MIN;
	int8_t x43 = -4;
	uint64_t t9 = 6LLU;

	t9 = (((x41%x42)<=x43)%x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = -20331242;

	t10 = (((x45%x46)<=x47)%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	uint8_t x50 = 5U;
	volatile int32_t x52 = -770281;
	volatile int32_t t11 = -61;

	t11 = (((x49%x50)<=x51)%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 2470379LLU;
	volatile int32_t t12 = -107532167;

	t12 = (((x53%x54)<=x55)%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 1U;
	int64_t x58 = INT64_MIN;
	uint64_t x59 = 520176356LLU;
	int32_t x60 = 4147014;
	volatile int32_t t13 = 5356;

	t13 = (((x57%x58)<=x59)%x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = 4;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	int32_t t14 = -437;

	t14 = (((x65%x66)<=x67)%x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = INT16_MAX;
	static int16_t x71 = -1;
	int16_t x72 = -1;

	t15 = (((x69%x70)<=x71)%x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 4919536;
	static int8_t x75 = 19;

	t16 = (((x73%x74)<=x75)%x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x82 = -100;
	static int16_t x83 = INT16_MAX;
	int64_t x84 = INT64_MIN;
	static int64_t t17 = 1706359295994849203LL;

	t17 = (((x81%x82)<=x83)%x84);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x85 = 11U;
	volatile int8_t x86 = -6;
	int32_t x87 = INT32_MAX;
	int16_t x88 = -1;
	int32_t t18 = -99904281;

	t18 = (((x85%x86)<=x87)%x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x89 = INT64_MIN;
	uint32_t x90 = 7459489U;
	int16_t x91 = -5590;
	int64_t t19 = -442308988431900LL;

	t19 = (((x89%x90)<=x91)%x92);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = 3076;
	uint16_t x94 = 1U;
	uint8_t x95 = 6U;
	int32_t x96 = -1;

	t20 = (((x93%x94)<=x95)%x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	int8_t x99 = -4;
	volatile int32_t x100 = -1;
	int32_t t21 = 9507904;

	t21 = (((x97%x98)<=x99)%x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = -1;
	volatile uint64_t x103 = 1LLU;
	uint8_t x104 = 13U;
	int32_t t22 = -22188;

	t22 = (((x101%x102)<=x103)%x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 4823462689LLU;
	int64_t t23 = -111200227596LL;

	t23 = (((x105%x106)<=x107)%x108);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	int8_t x110 = -49;
	int32_t x111 = INT32_MIN;
	static int32_t x112 = INT32_MIN;
	volatile int32_t t24 = 17948482;

	t24 = (((x109%x110)<=x111)%x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = 229297986692856LL;
	uint32_t x114 = 12799U;
	int16_t x115 = 0;
	static int32_t x116 = INT32_MAX;

	t25 = (((x113%x114)<=x115)%x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x117 = 186232LL;
	int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MAX;

	t26 = (((x117%x118)<=x119)%x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 30122444U;
	volatile int64_t x122 = 4177375LL;
	volatile uint16_t x123 = 2047U;
	int16_t x124 = -27;

	t27 = (((x121%x122)<=x123)%x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x127 = 17LLU;
	volatile int32_t t28 = 1601;

	t28 = (((x125%x126)<=x127)%x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 0U;
	uint32_t x130 = 871280U;
	static uint32_t x131 = 4981U;
	volatile int32_t t29 = -2;

	t29 = (((x129%x130)<=x131)%x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	volatile int8_t x134 = INT8_MIN;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t30 = 3LLU;

	t30 = (((x133%x134)<=x135)%x136);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = 49U;
	uint8_t x139 = 8U;
	uint32_t t31 = 6U;

	t31 = (((x137%x138)<=x139)%x140);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = 2632;
	int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	volatile int32_t x144 = -1;
	int32_t t32 = 4669926;

	t32 = (((x141%x142)<=x143)%x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = INT32_MAX;
	static int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;

	t33 = (((x153%x154)<=x155)%x156);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -1LL;
	static int16_t x158 = INT16_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t34 = 1;

	t34 = (((x157%x158)<=x159)%x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MAX;
	static uint32_t x162 = UINT32_MAX;
	volatile int64_t x163 = -328950032LL;
	static volatile int32_t t35 = -79050873;

	t35 = (((x161%x162)<=x163)%x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = -1;
	uint8_t x166 = 23U;
	volatile uint64_t x167 = 485472948204415LLU;
	static volatile int32_t t36 = -186307;

	t36 = (((x165%x166)<=x167)%x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = INT64_MIN;
	int16_t x171 = -1;

	t37 = (((x169%x170)<=x171)%x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -1;
	uint16_t x175 = 40U;
	uint16_t x176 = 3U;
	volatile int32_t t38 = -27;

	t38 = (((x173%x174)<=x175)%x176);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = 7;
	int64_t x179 = INT64_MAX;
	int64_t x180 = INT64_MIN;

	t39 = (((x177%x178)<=x179)%x180);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x183 = -3774;
	volatile int64_t x184 = INT64_MIN;
	volatile int64_t t40 = 305693371LL;

	t40 = (((x181%x182)<=x183)%x184);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = -1;
	uint32_t x186 = UINT32_MAX;
	int32_t t41 = -3062;

	t41 = (((x185%x186)<=x187)%x188);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MAX;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = UINT64_MAX;
	uint64_t t42 = 510674LLU;

	t42 = (((x193%x194)<=x195)%x196);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 17218860160440941LLU;
	static uint8_t x199 = UINT8_MAX;
	volatile int64_t x200 = 23350785LL;
	int64_t t43 = 511318LL;

	t43 = (((x197%x198)<=x199)%x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x202 = -1;
	int64_t x203 = INT64_MIN;

	t44 = (((x201%x202)<=x203)%x204);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = INT16_MIN;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = 39326U;
	volatile uint32_t t45 = 11756U;

	t45 = (((x205%x206)<=x207)%x208);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x209 = 1;
	static int16_t x210 = 24;
	int64_t x211 = INT64_MIN;

	t46 = (((x209%x210)<=x211)%x212);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MAX;
	int64_t x214 = -517382324100552LL;
	volatile int64_t x215 = -1LL;
	uint32_t x216 = UINT32_MAX;

	t47 = (((x213%x214)<=x215)%x216);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x217 = 1U;
	int32_t x219 = INT32_MIN;
	int32_t x220 = -1;
	int32_t t48 = -1;

	t48 = (((x217%x218)<=x219)%x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x221 = INT32_MAX;
	static int8_t x222 = INT8_MIN;
	volatile int16_t x223 = INT16_MIN;
	uint16_t x224 = UINT16_MAX;
	static volatile int32_t t49 = 39636;

	t49 = (((x221%x222)<=x223)%x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x227 = INT16_MIN;
	uint8_t x228 = UINT8_MAX;
	int32_t t50 = -10657955;

	t50 = (((x225%x226)<=x227)%x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = UINT8_MAX;
	static int8_t x230 = INT8_MAX;
	uint64_t x231 = 2269130362804018153LLU;
	uint16_t x232 = 474U;
	int32_t t51 = -3167;

	t51 = (((x229%x230)<=x231)%x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = 0U;
	volatile uint16_t x234 = UINT16_MAX;
	volatile int16_t x235 = INT16_MAX;
	volatile int64_t t52 = -11462625868697LL;

	t52 = (((x233%x234)<=x235)%x236);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -32;
	int32_t x239 = INT32_MIN;
	volatile uint32_t x240 = UINT32_MAX;

	t53 = (((x237%x238)<=x239)%x240);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x241 = INT8_MAX;
	uint64_t x243 = 61026518LLU;
	int64_t t54 = 1667668LL;

	t54 = (((x241%x242)<=x243)%x244);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = INT32_MAX;
	uint64_t x246 = 1685297305600535667LLU;
	int64_t x247 = -1LL;
	int8_t x248 = -1;

	t55 = (((x245%x246)<=x247)%x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x249 = 1298377LLU;
	int16_t x250 = INT16_MAX;
	int64_t x252 = -1LL;
	static volatile int64_t t56 = 83287392117467LL;

	t56 = (((x249%x250)<=x251)%x252);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x254 = 444651LL;
	int64_t x255 = -173335LL;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t57 = -285173;

	t57 = (((x253%x254)<=x255)%x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = INT64_MAX;
	int32_t x259 = INT32_MIN;
	volatile int64_t x260 = -239272357878527054LL;
	int64_t t58 = -1LL;

	t58 = (((x257%x258)<=x259)%x260);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x261 = UINT16_MAX;
	int32_t x262 = -744;
	int16_t x263 = INT16_MIN;

	t59 = (((x261%x262)<=x263)%x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {


	t60 = (((x265%x266)<=x267)%x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x270 = 1LLU;
	int32_t x271 = -1;
	uint8_t x272 = 53U;
	volatile int32_t t61 = 0;

	t61 = (((x269%x270)<=x271)%x272);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x274 = 6612643235946393LLU;
	volatile uint16_t x276 = 12874U;

	t62 = (((x273%x274)<=x275)%x276);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x278 = 186U;
	uint8_t x279 = UINT8_MAX;
	uint8_t x280 = 118U;
	volatile int32_t t63 = 725;

	t63 = (((x277%x278)<=x279)%x280);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = -39;
	uint16_t x282 = 1U;
	uint16_t x283 = 32U;
	int32_t t64 = -463;

	t64 = (((x281%x282)<=x283)%x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = -1;
	static int16_t x286 = -1;
	uint16_t x288 = UINT16_MAX;
	static volatile int32_t t65 = 577915;

	t65 = (((x285%x286)<=x287)%x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = -1;
	uint32_t x290 = 38265068U;
	volatile int64_t t66 = -60477203918953LL;

	t66 = (((x289%x290)<=x291)%x292);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x297 = 28U;
	uint8_t x298 = UINT8_MAX;
	static uint32_t x299 = 4039U;
	int32_t t67 = 527787473;

	t67 = (((x297%x298)<=x299)%x300);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MAX;
	int16_t x304 = 83;
	volatile int32_t t68 = -226014970;

	t68 = (((x301%x302)<=x303)%x304);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x305 = INT8_MIN;
	volatile int32_t x306 = -1;
	static volatile uint16_t x307 = 3444U;
	int8_t x308 = INT8_MIN;
	int32_t t69 = -232980264;

	t69 = (((x305%x306)<=x307)%x308);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = INT64_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t70 = 235719772;

	t70 = (((x309%x310)<=x311)%x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x313 = 6418571667644895LLU;
	int16_t x314 = INT16_MAX;
	uint32_t x315 = 9877U;
	uint8_t x316 = 4U;
	int32_t t71 = -708;

	t71 = (((x313%x314)<=x315)%x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x318 = INT32_MIN;
	static uint64_t x319 = 6508938328007LLU;
	int32_t t72 = 980551678;

	t72 = (((x317%x318)<=x319)%x320);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x321 = 7U;
	volatile int64_t x322 = -1LL;
	int16_t x324 = INT16_MAX;

	t73 = (((x321%x322)<=x323)%x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x326 = INT16_MIN;
	volatile int8_t x327 = 2;
	volatile int32_t t74 = -80655;

	t74 = (((x325%x326)<=x327)%x328);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x329 = 10;
	int32_t t75 = -2;

	t75 = (((x329%x330)<=x331)%x332);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = 504500174042502327LL;
	uint8_t x334 = UINT8_MAX;
	volatile int32_t x335 = -268;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t76 = 1;

	t76 = (((x333%x334)<=x335)%x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x337 = 5271156674938LLU;
	volatile int8_t x339 = INT8_MIN;
	static uint64_t x340 = 1525LLU;
	uint64_t t77 = 9280LLU;

	t77 = (((x337%x338)<=x339)%x340);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x341 = 63438490644318599LLU;
	uint8_t x342 = 95U;
	int64_t x343 = 173144680712LL;
	volatile int64_t x344 = -76077LL;
	static volatile int64_t t78 = -347262930LL;

	t78 = (((x341%x342)<=x343)%x344);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x345 = 979U;
	uint64_t x347 = 7885288543LLU;
	static uint16_t x348 = UINT16_MAX;
	static volatile int32_t t79 = 16010;

	t79 = (((x345%x346)<=x347)%x348);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x350 = INT32_MIN;
	volatile uint32_t x351 = 1457U;
	uint16_t x352 = 7022U;
	volatile int32_t t80 = 0;

	t80 = (((x349%x350)<=x351)%x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x353 = 2375;
	static int32_t t81 = -5808;

	t81 = (((x353%x354)<=x355)%x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x358 = -5231;
	volatile int8_t x359 = -17;

	t82 = (((x357%x358)<=x359)%x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x366 = UINT32_MAX;
	static uint64_t x367 = 3LLU;
	int8_t x368 = INT8_MIN;
	int32_t t83 = -915;

	t83 = (((x365%x366)<=x367)%x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MIN;
	static int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MAX;
	volatile int64_t t84 = -268163986353542633LL;

	t84 = (((x369%x370)<=x371)%x372);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = -1;
	uint64_t x374 = 1283LLU;
	uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 39U;
	int32_t t85 = 120497;

	t85 = (((x373%x374)<=x375)%x376);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x378 = UINT8_MAX;
	volatile int32_t t86 = 5349;

	t86 = (((x377%x378)<=x379)%x380);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x381 = -8890872;
	static int32_t x382 = -18691;
	static volatile int64_t x383 = INT64_MIN;
	int64_t t87 = 80547279395042LL;

	t87 = (((x381%x382)<=x383)%x384);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t t88 = 3185;

	t88 = (((x385%x386)<=x387)%x388);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x389 = 10U;
	volatile uint8_t x390 = 5U;
	volatile int16_t x391 = INT16_MIN;
	int32_t x392 = 473537516;

	t89 = (((x389%x390)<=x391)%x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x394 = 2U;
	int8_t x395 = -31;
	int32_t t90 = 234;

	t90 = (((x393%x394)<=x395)%x396);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x397 = 127U;
	int32_t x398 = INT32_MAX;
	int8_t x399 = -1;
	int32_t x400 = 1;
	int32_t t91 = -3408;

	t91 = (((x397%x398)<=x399)%x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = INT16_MIN;
	volatile int64_t x402 = INT64_MIN;
	static int8_t x403 = INT8_MIN;
	int64_t x404 = -18526250443LL;
	int64_t t92 = -4108816373LL;

	t92 = (((x401%x402)<=x403)%x404);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x405 = 1U;
	uint32_t x407 = UINT32_MAX;
	int8_t x408 = -1;
	int32_t t93 = -1;

	t93 = (((x405%x406)<=x407)%x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = 15U;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 360U;
	int16_t x412 = INT16_MIN;
	volatile int32_t t94 = -3641;

	t94 = (((x409%x410)<=x411)%x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = UINT8_MAX;
	volatile uint64_t x415 = 47527LLU;
	uint32_t x416 = 62U;
	volatile uint32_t t95 = 96198U;

	t95 = (((x413%x414)<=x415)%x416);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x417 = -1;
	volatile int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	volatile int8_t x420 = -21;
	volatile int32_t t96 = 4089;

	t96 = (((x417%x418)<=x419)%x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x421 = 7U;
	static uint64_t x422 = 5LLU;
	int16_t x423 = INT16_MIN;
	static volatile int8_t x424 = -1;
	volatile int32_t t97 = 0;

	t97 = (((x421%x422)<=x423)%x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x427 = INT8_MIN;
	volatile int64_t x428 = -1LL;
	volatile int64_t t98 = 29897283326111LL;

	t98 = (((x425%x426)<=x427)%x428);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = INT8_MIN;
	volatile int32_t x431 = INT32_MAX;
	static uint8_t x432 = 79U;

	t99 = (((x429%x430)<=x431)%x432);

	if (t99 != 1) { NG(); } else { ; }
	
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

