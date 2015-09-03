#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = UINT32_MAX;
volatile int32_t t1 = 0;
static int16_t x23 = INT16_MIN;
static volatile int32_t t5 = -472;
volatile int16_t x25 = -1;
uint16_t x28 = UINT16_MAX;
int64_t x29 = -97425574204840980LL;
int32_t x33 = INT32_MIN;
volatile int16_t x35 = INT16_MIN;
volatile uint8_t x41 = UINT8_MAX;
int16_t x48 = -1;
volatile uint16_t x56 = 54U;
volatile int64_t x57 = -1LL;
uint16_t x58 = 4U;
int16_t x63 = 0;
volatile int32_t t15 = -3971;
static int32_t t16 = -10;
int8_t x72 = INT8_MAX;
int32_t x74 = -1;
int8_t x77 = 0;
int32_t x84 = INT32_MAX;
static int32_t t20 = 38;
volatile int16_t x90 = INT16_MIN;
int8_t x91 = INT8_MIN;
volatile int32_t x94 = -1;
volatile int32_t t24 = 11114;
int32_t x109 = -1034;
static uint64_t x110 = 728275686011LLU;
int64_t x112 = INT64_MAX;
volatile uint64_t x117 = 109256347541644LLU;
int32_t x118 = INT32_MIN;
int64_t x119 = -1LL;
uint32_t x120 = 20086U;
int32_t t30 = -953121;
int16_t x139 = -1;
int64_t x140 = INT64_MIN;
volatile int64_t x155 = -1LL;
int16_t x159 = -1;
static volatile int32_t x160 = 7;
int32_t x163 = -2089569;
int32_t t37 = -3055;
int32_t x165 = 938939;
int64_t x166 = INT64_MIN;
int64_t x167 = -29955275LL;
volatile int32_t t39 = 199;
uint32_t x187 = 4U;
static volatile int8_t x190 = 1;
volatile int32_t t44 = 97;
int16_t x193 = -992;
int8_t x198 = INT8_MAX;
volatile int32_t t46 = 1;
uint32_t x203 = 104649U;
int16_t x206 = INT16_MAX;
static volatile uint32_t x209 = 523804482U;
int64_t x212 = 48757510674991LL;
int64_t x215 = INT64_MIN;
int64_t x222 = INT64_MIN;
int64_t x232 = -1LL;
volatile uint32_t x236 = 100955U;
int32_t t55 = -10008;
volatile uint8_t x242 = 45U;
volatile uint8_t x246 = 13U;
int8_t x248 = INT8_MIN;
static int16_t x254 = INT16_MIN;
static uint32_t x255 = UINT32_MAX;
volatile int32_t t60 = 192357;
int32_t x258 = -1;
uint64_t x263 = 4189LLU;
int32_t t66 = 0;
static int16_t x286 = -14329;
int16_t x287 = INT16_MAX;
volatile int32_t t68 = 2;
volatile int64_t x291 = INT64_MIN;
static volatile int32_t t69 = -830719;
uint8_t x293 = 46U;
volatile int8_t x298 = -2;
uint32_t x307 = UINT32_MAX;
int8_t x328 = INT8_MAX;
static uint64_t x330 = 3194805646425599LLU;
static int32_t x331 = 203410295;
int64_t x334 = -1LL;
int32_t t80 = 14407169;
int8_t x337 = -2;
volatile int32_t x339 = -2174935;
int32_t t81 = 9;
int32_t x351 = INT32_MIN;
static int8_t x352 = INT8_MIN;
int32_t t87 = 10284;
uint64_t x366 = 26LLU;
volatile int32_t t89 = -124014;
int16_t x380 = -5021;
int32_t x383 = -214529;
volatile int32_t t93 = 641;
uint16_t x391 = 19974U;
uint16_t x394 = UINT16_MAX;
static int64_t x395 = INT64_MIN;
int64_t x398 = INT64_MAX;
volatile int32_t t96 = 1;
volatile int8_t x402 = 37;
int64_t x406 = -5LL;
volatile int64_t x410 = -164768LL;
static int8_t x412 = -7;


void f0(void) {
	int32_t x2 = -14825814;
	static int8_t x3 = -2;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 21361534;

	t0 = (((x1/x2)<=x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = -1;
	int8_t x7 = -1;
	int64_t x8 = INT64_MIN;

	t1 = (((x5/x6)<=x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	volatile int8_t x10 = -1;
	int8_t x11 = -1;
	int8_t x12 = 0;
	volatile int32_t t2 = -12;

	t2 = (((x9/x10)<=x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static int32_t x14 = -262469418;
	uint8_t x15 = 43U;
	static uint16_t x16 = 20483U;
	int32_t t3 = -139405;

	t3 = (((x13/x14)<=x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 128701280U;
	uint16_t x18 = 32366U;
	int64_t x19 = -1LL;
	int64_t x20 = -2683506LL;
	volatile int32_t t4 = -4032784;

	t4 = (((x17/x18)<=x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint32_t x22 = UINT32_MAX;
	int16_t x24 = INT16_MIN;

	t5 = (((x21/x22)<=x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	volatile int32_t t6 = -1;

	t6 = (((x25/x26)<=x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MAX;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 1813;

	t7 = (((x29/x30)<=x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 173125;

	t8 = (((x33/x34)<=x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int32_t x38 = -837;
	int64_t x39 = INT64_MAX;
	volatile uint16_t x40 = 1U;
	int32_t t9 = -69454;

	t9 = (((x37/x38)<=x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = 1294LL;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t10 = 6181010;

	t10 = (((x41/x42)<=x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile uint64_t x46 = 653498806573LLU;
	static uint32_t x47 = 53U;
	volatile int32_t t11 = 1;

	t11 = (((x45/x46)<=x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 268245986;
	int16_t x50 = INT16_MIN;
	int64_t x51 = -2754705292603888LL;
	int8_t x52 = -53;
	int32_t t12 = -93287054;

	t12 = (((x49/x50)<=x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 8U;
	int16_t x54 = INT16_MIN;
	uint16_t x55 = 31179U;
	int32_t t13 = 132;

	t13 = (((x53/x54)<=x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x59 = -28460LL;
	static volatile uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 508236499;

	t14 = (((x57/x58)<=x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = UINT8_MAX;
	int32_t x62 = -1;
	volatile int32_t x64 = -11;

	t15 = (((x61/x62)<=x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 730U;
	int8_t x66 = INT8_MIN;
	volatile int32_t x67 = -1;
	int16_t x68 = INT16_MIN;

	t16 = (((x65/x66)<=x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MAX;
	int8_t x71 = -2;
	volatile int32_t t17 = 174224603;

	t17 = (((x69/x70)<=x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	int64_t x75 = -1LL;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 1;

	t18 = (((x73/x74)<=x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 3U;
	int32_t x79 = -643641657;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -327;

	t19 = (((x77/x78)<=x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static volatile int32_t x82 = 3;
	int64_t x83 = INT64_MIN;

	t20 = (((x81/x82)<=x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 42;
	uint16_t x86 = UINT16_MAX;
	int64_t x87 = 74656413107372267LL;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = -18;

	t21 = (((x85/x86)<=x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -25;
	int32_t x92 = -13;
	volatile int32_t t22 = 0;

	t22 = (((x89/x90)<=x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	static int16_t x95 = 891;
	static int32_t x96 = INT32_MIN;
	static volatile int32_t t23 = -1948;

	t23 = (((x93/x94)<=x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint16_t x98 = UINT16_MAX;
	volatile uint64_t x99 = 11389310LLU;
	int32_t x100 = -1;

	t24 = (((x97/x98)<=x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x111 = -2;
	int32_t t25 = 130983;

	t25 = (((x109/x110)<=x111)<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -32313207;
	int32_t x114 = -1;
	static uint16_t x115 = 3526U;
	uint16_t x116 = 4U;
	volatile int32_t t26 = -162;

	t26 = (((x113/x114)<=x115)<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t t27 = 13;

	t27 = (((x117/x118)<=x119)<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 33U;
	int16_t x122 = 6;
	static volatile int8_t x123 = -6;
	volatile int8_t x124 = INT8_MAX;
	volatile int32_t t28 = 30937;

	t28 = (((x121/x122)<=x123)<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = -1;
	static int64_t x126 = -1LL;
	uint16_t x127 = 350U;
	int64_t x128 = -1LL;
	int32_t t29 = 23025311;

	t29 = (((x125/x126)<=x127)<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MAX;
	static int8_t x130 = INT8_MIN;
	static uint8_t x131 = UINT8_MAX;
	volatile int32_t x132 = 54;

	t30 = (((x129/x130)<=x131)<=x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = 64773211475810493LL;
	int16_t x138 = -1837;
	int32_t t31 = -1;

	t31 = (((x137/x138)<=x139)<=x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x141 = 741254047LLU;
	uint8_t x142 = 127U;
	volatile uint32_t x143 = 1992869U;
	int64_t x144 = INT64_MIN;
	volatile int32_t t32 = -130384510;

	t32 = (((x141/x142)<=x143)<=x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 205U;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = 7U;
	static uint8_t x148 = 15U;
	volatile int32_t t33 = -800093;

	t33 = (((x145/x146)<=x147)<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x149 = 29069202917917LLU;
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	static volatile int32_t t34 = -220;

	t34 = (((x149/x150)<=x151)<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MAX;
	uint32_t x154 = 24955739U;
	int64_t x156 = INT64_MAX;
	int32_t t35 = -1450;

	t35 = (((x153/x154)<=x155)<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -42LL;
	int32_t x158 = -1;
	int32_t t36 = -1;

	t36 = (((x157/x158)<=x159)<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = 2853;
	volatile uint8_t x162 = 10U;
	uint8_t x164 = UINT8_MAX;

	t37 = (((x161/x162)<=x163)<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x168 = -909667786;
	volatile int32_t t38 = 0;

	t38 = (((x165/x166)<=x167)<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x169 = 13U;
	int16_t x170 = 14;
	volatile uint8_t x171 = 1U;
	int16_t x172 = -98;

	t39 = (((x169/x170)<=x171)<=x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 0LLU;
	static int8_t x174 = -1;
	int16_t x175 = -1;
	static uint8_t x176 = 0U;
	static volatile int32_t t40 = 7457207;

	t40 = (((x173/x174)<=x175)<=x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MAX;
	volatile int32_t x178 = -27;
	static int32_t x179 = 194;
	uint64_t x180 = UINT64_MAX;
	static int32_t t41 = 327507250;

	t41 = (((x177/x178)<=x179)<=x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = INT16_MIN;
	int32_t x183 = INT32_MIN;
	static volatile int8_t x184 = INT8_MIN;
	volatile int32_t t42 = -5849557;

	t42 = (((x181/x182)<=x183)<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MAX;
	static volatile uint16_t x186 = 29278U;
	static int8_t x188 = 1;
	int32_t t43 = 2848670;

	t43 = (((x185/x186)<=x187)<=x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -8023068292613986LL;
	int16_t x191 = -1;
	uint16_t x192 = UINT16_MAX;

	t44 = (((x189/x190)<=x191)<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x194 = 3;
	uint8_t x195 = 5U;
	uint32_t x196 = 1U;
	volatile int32_t t45 = 2246;

	t45 = (((x193/x194)<=x195)<=x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -8924;
	uint16_t x199 = 24309U;
	uint64_t x200 = 471801325001LLU;

	t46 = (((x197/x198)<=x199)<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	volatile uint16_t x202 = 144U;
	int8_t x204 = -22;
	static int32_t t47 = 10193565;

	t47 = (((x201/x202)<=x203)<=x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 3U;
	static int16_t x207 = -227;
	uint32_t x208 = 25U;
	int32_t t48 = 2029;

	t48 = (((x205/x206)<=x207)<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = INT32_MAX;
	int32_t t49 = 0;

	t49 = (((x209/x210)<=x211)<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	volatile uint64_t x214 = 600699LLU;
	int8_t x216 = -1;
	int32_t t50 = 41594;

	t50 = (((x213/x214)<=x215)<=x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = 19;
	int32_t x218 = INT32_MAX;
	uint32_t x219 = 47051637U;
	static int32_t x220 = 4169964;
	volatile int32_t t51 = 90981;

	t51 = (((x217/x218)<=x219)<=x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -1LL;
	int32_t x223 = -667;
	volatile uint16_t x224 = 2183U;
	volatile int32_t t52 = -10;

	t52 = (((x221/x222)<=x223)<=x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x226 = 14201U;
	uint64_t x227 = UINT64_MAX;
	uint64_t x228 = UINT64_MAX;
	int32_t t53 = -1188;

	t53 = (((x225/x226)<=x227)<=x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x229 = INT8_MIN;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = -1;
	int32_t t54 = 4883316;

	t54 = (((x229/x230)<=x231)<=x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 0U;
	static volatile int64_t x234 = INT64_MIN;
	int64_t x235 = -7LL;

	t55 = (((x233/x234)<=x235)<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -1;
	volatile int64_t x238 = 2LL;
	int32_t x239 = 1031027047;
	int8_t x240 = INT8_MIN;
	volatile int32_t t56 = 2;

	t56 = (((x237/x238)<=x239)<=x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = -12668326;
	uint8_t x243 = UINT8_MAX;
	static int64_t x244 = INT64_MAX;
	volatile int32_t t57 = 22;

	t57 = (((x241/x242)<=x243)<=x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = -6;
	static volatile int32_t x247 = INT32_MIN;
	static volatile int32_t t58 = -944419892;

	t58 = (((x245/x246)<=x247)<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 521433923U;
	static int16_t x250 = INT16_MAX;
	static int64_t x251 = INT64_MIN;
	uint16_t x252 = 272U;
	static volatile int32_t t59 = 1192;

	t59 = (((x249/x250)<=x251)<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -16080;
	volatile int8_t x256 = 29;

	t60 = (((x253/x254)<=x255)<=x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MIN;
	int32_t x259 = 47420298;
	int8_t x260 = INT8_MIN;
	int32_t t61 = -257;

	t61 = (((x257/x258)<=x259)<=x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MAX;
	static int64_t x262 = INT64_MIN;
	uint64_t x264 = UINT64_MAX;
	int32_t t62 = -1;

	t62 = (((x261/x262)<=x263)<=x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x265 = UINT32_MAX;
	uint32_t x266 = 1009961U;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = 0U;
	volatile int32_t t63 = -8290873;

	t63 = (((x265/x266)<=x267)<=x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MAX;
	static volatile int32_t t64 = -1774;

	t64 = (((x269/x270)<=x271)<=x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	uint64_t x274 = 2LLU;
	volatile int8_t x275 = INT8_MAX;
	int32_t x276 = INT32_MAX;
	int32_t t65 = -21461558;

	t65 = (((x273/x274)<=x275)<=x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = INT16_MAX;
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = 1;
	volatile int16_t x280 = INT16_MIN;

	t66 = (((x277/x278)<=x279)<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = -1;
	int16_t x282 = INT16_MAX;
	static int16_t x283 = 0;
	int8_t x284 = -55;
	volatile int32_t t67 = -5;

	t67 = (((x281/x282)<=x283)<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MAX;
	int16_t x288 = INT16_MIN;

	t68 = (((x285/x286)<=x287)<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 3U;
	static int16_t x290 = INT16_MAX;
	uint64_t x292 = UINT64_MAX;

	t69 = (((x289/x290)<=x291)<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x294 = 75U;
	uint16_t x295 = 2U;
	static int64_t x296 = INT64_MAX;
	static int32_t t70 = -3;

	t70 = (((x293/x294)<=x295)<=x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MAX;
	volatile int32_t x299 = 13;
	static int32_t x300 = 182360406;
	volatile int32_t t71 = 14604;

	t71 = (((x297/x298)<=x299)<=x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x301 = UINT64_MAX;
	volatile int16_t x302 = 60;
	volatile int16_t x303 = INT16_MIN;
	uint64_t x304 = 91794LLU;
	int32_t t72 = 822;

	t72 = (((x301/x302)<=x303)<=x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = UINT32_MAX;
	static int64_t x306 = INT64_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t73 = -2;

	t73 = (((x305/x306)<=x307)<=x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 7U;
	volatile int64_t x310 = INT64_MAX;
	static int8_t x311 = -1;
	static int64_t x312 = INT64_MIN;
	int32_t t74 = 782;

	t74 = (((x309/x310)<=x311)<=x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	static uint64_t x314 = 2867132995LLU;
	uint64_t x315 = 702523387265LLU;
	int32_t x316 = INT32_MIN;
	volatile int32_t t75 = 943703;

	t75 = (((x313/x314)<=x315)<=x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = UINT32_MAX;
	uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 1343U;
	int32_t x320 = INT32_MIN;
	static int32_t t76 = -884110;

	t76 = (((x317/x318)<=x319)<=x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = INT8_MAX;
	static volatile int32_t x322 = INT32_MIN;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = INT64_MIN;
	volatile int32_t t77 = 1;

	t77 = (((x321/x322)<=x323)<=x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = 78476245422812LL;
	uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 6U;
	int32_t t78 = -9586708;

	t78 = (((x325/x326)<=x327)<=x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = INT8_MIN;
	volatile int16_t x332 = -1;
	volatile int32_t t79 = 1;

	t79 = (((x329/x330)<=x331)<=x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x333 = INT16_MAX;
	uint16_t x335 = UINT16_MAX;
	static int32_t x336 = -1;

	t80 = (((x333/x334)<=x335)<=x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x338 = -1;
	int8_t x340 = INT8_MIN;

	t81 = (((x337/x338)<=x339)<=x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = 44;
	volatile int8_t x342 = -1;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MAX;
	volatile int32_t t82 = -7;

	t82 = (((x341/x342)<=x343)<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = -6;
	volatile uint64_t x346 = UINT64_MAX;
	static int16_t x347 = INT16_MAX;
	int64_t x348 = -2617952485276047LL;
	volatile int32_t t83 = -2692585;

	t83 = (((x345/x346)<=x347)<=x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 8082032289529104458LLU;
	static uint16_t x350 = UINT16_MAX;
	volatile int32_t t84 = -383;

	t84 = (((x349/x350)<=x351)<=x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	volatile int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MAX;
	volatile int32_t x356 = -1;
	int32_t t85 = -1;

	t85 = (((x353/x354)<=x355)<=x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 13573U;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t86 = -5;

	t86 = (((x357/x358)<=x359)<=x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MAX;
	int32_t x363 = 3856734;
	static int8_t x364 = INT8_MIN;

	t87 = (((x361/x362)<=x363)<=x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MIN;
	static uint16_t x367 = 23U;
	uint16_t x368 = 304U;
	int32_t t88 = 604302360;

	t88 = (((x365/x366)<=x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 1U;
	int32_t x370 = -935717089;
	uint64_t x371 = 480LLU;
	int16_t x372 = INT16_MIN;

	t89 = (((x369/x370)<=x371)<=x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x373 = 882226564LLU;
	int32_t x374 = -34841;
	uint16_t x375 = 10U;
	int32_t x376 = INT32_MIN;
	int32_t t90 = -1;

	t90 = (((x373/x374)<=x375)<=x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x377 = 478U;
	int32_t x378 = 194;
	static int64_t x379 = INT64_MIN;
	volatile int32_t t91 = -6458;

	t91 = (((x377/x378)<=x379)<=x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int8_t x382 = INT8_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t92 = -181538;

	t92 = (((x381/x382)<=x383)<=x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = UINT16_MAX;
	static uint32_t x386 = 3311497U;
	static volatile int16_t x387 = -1;
	int32_t x388 = INT32_MAX;

	t93 = (((x385/x386)<=x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x389 = UINT8_MAX;
	int8_t x390 = 9;
	int16_t x392 = INT16_MIN;
	volatile int32_t t94 = -19;

	t94 = (((x389/x390)<=x391)<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x393 = 5345;
	uint16_t x396 = 0U;
	static int32_t t95 = 0;

	t95 = (((x393/x394)<=x395)<=x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x397 = UINT16_MAX;
	static volatile int8_t x399 = INT8_MAX;
	uint16_t x400 = UINT16_MAX;

	t96 = (((x397/x398)<=x399)<=x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x401 = 29;
	volatile int16_t x403 = INT16_MIN;
	int16_t x404 = 5;
	int32_t t97 = 15;

	t97 = (((x401/x402)<=x403)<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	volatile int32_t x407 = INT32_MAX;
	int32_t x408 = -1;
	int32_t t98 = -32220819;

	t98 = (((x405/x406)<=x407)<=x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	static uint8_t x411 = 1U;
	int32_t t99 = 102475927;

	t99 = (((x409/x410)<=x411)<=x412);

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

