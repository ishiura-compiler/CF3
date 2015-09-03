#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int16_t x3 = -1;
int32_t t1 = 100;
int16_t x11 = 234;
int32_t x16 = -2630740;
static volatile int32_t t3 = 38947;
volatile int32_t t5 = -95126868;
int16_t x29 = INT16_MAX;
int32_t x34 = INT32_MIN;
volatile int32_t t8 = -1;
int64_t x39 = INT64_MIN;
uint8_t x43 = 30U;
int64_t x46 = -11551678662557LL;
int32_t t11 = -2753948;
int32_t x50 = INT32_MIN;
static uint8_t x56 = 8U;
volatile int32_t t13 = -355;
int16_t x62 = INT16_MAX;
int16_t x76 = INT16_MAX;
uint16_t x79 = 453U;
volatile int32_t x85 = INT32_MIN;
int32_t t21 = -5;
int8_t x89 = INT8_MIN;
static volatile int32_t x100 = INT32_MIN;
int32_t x101 = -1016;
int16_t x102 = INT16_MIN;
int16_t x105 = -82;
uint64_t x106 = UINT64_MAX;
int16_t x108 = 12235;
int32_t x111 = -207700682;
int32_t t28 = -12376;
int8_t x122 = INT8_MIN;
int64_t x125 = 0LL;
int64_t x126 = INT64_MAX;
int16_t x127 = 0;
int64_t x132 = 514429LL;
volatile int32_t t32 = -166289710;
uint8_t x135 = 8U;
uint16_t x140 = 3585U;
int32_t x144 = INT32_MIN;
int64_t x150 = -1LL;
volatile int32_t x155 = 57823;
volatile uint32_t x167 = UINT32_MAX;
int32_t t42 = 244839;
int16_t x183 = INT16_MAX;
int32_t x186 = 416;
int64_t x187 = INT64_MAX;
static int64_t x188 = -1LL;
int32_t t46 = 51035463;
volatile uint64_t x191 = 34344LLU;
uint8_t x193 = 99U;
int32_t x194 = INT32_MAX;
int64_t x196 = INT64_MAX;
int8_t x199 = INT8_MIN;
int8_t x200 = 31;
uint32_t x208 = 470107845U;
int32_t x211 = INT32_MAX;
static uint64_t x213 = UINT64_MAX;
int8_t x216 = -1;
int64_t x219 = -741LL;
int8_t x226 = -1;
volatile int32_t t56 = -26487;
int8_t x237 = 3;
int16_t x239 = INT16_MAX;
uint64_t x243 = 417876561524372LLU;
int32_t t60 = 32763773;
int32_t x250 = 7770;
int16_t x257 = 5541;
uint16_t x261 = UINT16_MAX;
int16_t x263 = INT16_MIN;
static int32_t x271 = -13;
static int8_t x273 = 54;
int64_t x276 = INT64_MIN;
uint64_t x282 = UINT64_MAX;
uint16_t x287 = UINT16_MAX;
int64_t x290 = 3655906LL;
uint64_t x295 = UINT64_MAX;
uint16_t x309 = 42U;
volatile int16_t x311 = -1;
int64_t x312 = -1LL;
int32_t t79 = 42077;
int8_t x328 = INT8_MIN;
int32_t t81 = 10;
uint16_t x334 = 197U;
volatile uint8_t x339 = UINT8_MAX;
volatile int32_t t84 = 430;
static uint64_t x341 = 1807969262LLU;
volatile int8_t x350 = INT8_MIN;
int32_t t87 = -39527;
static int32_t t88 = 1058408;
int64_t x366 = 335LL;
uint16_t x367 = 2266U;
int16_t x369 = -1;
static uint32_t x371 = 1U;
int64_t x373 = INT64_MIN;
volatile int32_t t93 = -156;
static uint64_t x383 = 273583227863LLU;
int8_t x386 = INT8_MIN;
int64_t x396 = INT64_MIN;
int64_t x398 = -1LL;


void f0(void) {
	uint64_t x2 = 5425733LLU;
	static int64_t x4 = INT64_MIN;
	static volatile int32_t t0 = 7;

	t0 = (((x1&x2)<=x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1581U;
	uint16_t x6 = 2U;
	int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MIN;

	t1 = (((x5&x6)<=x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MIN;
	volatile uint16_t x12 = 803U;
	volatile int32_t t2 = 983;

	t2 = (((x9&x10)<=x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -4766208;
	int8_t x14 = INT8_MAX;
	static int64_t x15 = -1LL;

	t3 = (((x13&x14)<=x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	static volatile int8_t x18 = -1;
	static uint64_t x19 = 3425739LLU;
	static int32_t x20 = -1;
	int32_t t4 = -732273;

	t4 = (((x17&x18)<=x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int16_t x22 = INT16_MIN;
	uint64_t x23 = 19017LLU;
	int16_t x24 = INT16_MIN;

	t5 = (((x21&x22)<=x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int8_t x26 = INT8_MIN;
	volatile int64_t x27 = -1LL;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -38;

	t6 = (((x25&x26)<=x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = UINT32_MAX;
	static volatile int8_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = -21068;

	t7 = (((x29&x30)<=x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x35 = 0U;
	static uint8_t x36 = UINT8_MAX;

	t8 = (((x33&x34)<=x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int8_t x38 = -1;
	uint32_t x40 = 211U;
	volatile int32_t t9 = -518295783;

	t9 = (((x37&x38)<=x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int32_t x42 = -2159518;
	uint32_t x44 = 1661596U;
	int32_t t10 = -10177741;

	t10 = (((x41&x42)<=x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = 19688;
	static int32_t x47 = -1037541020;
	int64_t x48 = INT64_MAX;

	t11 = (((x45&x46)<=x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	uint64_t x51 = 13579012LLU;
	volatile uint32_t x52 = 74U;
	volatile int32_t t12 = 228912;

	t12 = (((x49&x50)<=x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MAX;
	int16_t x54 = INT16_MIN;
	uint16_t x55 = 6U;

	t13 = (((x53&x54)<=x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	volatile int32_t x58 = INT32_MAX;
	int64_t x59 = 127LL;
	int16_t x60 = INT16_MAX;
	static volatile int32_t t14 = -134600;

	t14 = (((x57&x58)<=x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 50U;
	uint8_t x63 = UINT8_MAX;
	int32_t x64 = -1039047;
	volatile int32_t t15 = -302582;

	t15 = (((x61&x62)<=x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x65 = -1LL;
	volatile uint32_t x66 = 4883065U;
	volatile uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 2U;
	volatile int32_t t16 = 464832;

	t16 = (((x65&x66)<=x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	static int64_t x70 = INT64_MAX;
	static volatile int16_t x71 = -1;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -193675;

	t17 = (((x69&x70)<=x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MIN;
	volatile int16_t x75 = -475;
	static int32_t t18 = -86;

	t18 = (((x73&x74)<=x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 30U;
	int16_t x78 = INT16_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = -3598;

	t19 = (((x77&x78)<=x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	static int32_t x83 = INT32_MAX;
	int16_t x84 = -1;
	static volatile int32_t t20 = 708;

	t20 = (((x81&x82)<=x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = INT8_MAX;
	static int8_t x87 = 28;
	int8_t x88 = -1;

	t21 = (((x85&x86)<=x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x90 = 1428LLU;
	uint16_t x91 = 5611U;
	int32_t x92 = INT32_MAX;
	int32_t t22 = 1;

	t22 = (((x89&x90)<=x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -47;
	int64_t x94 = INT64_MAX;
	int32_t x95 = -1046;
	int64_t x96 = INT64_MIN;
	static volatile int32_t t23 = 4;

	t23 = (((x93&x94)<=x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 110U;
	uint8_t x98 = UINT8_MAX;
	uint64_t x99 = 196555976043727906LLU;
	int32_t t24 = -95675;

	t24 = (((x97&x98)<=x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x103 = -1;
	int32_t x104 = 7;
	int32_t t25 = -84202233;

	t25 = (((x101&x102)<=x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x107 = -1;
	volatile int32_t t26 = -13505;

	t26 = (((x105&x106)<=x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -15241LL;
	int8_t x110 = -2;
	uint32_t x112 = 552664U;
	volatile int32_t t27 = -196941;

	t27 = (((x109&x110)<=x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	static uint64_t x114 = 739480828458842478LLU;
	volatile uint64_t x115 = UINT64_MAX;
	volatile int16_t x116 = -4772;

	t28 = (((x113&x114)<=x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = UINT8_MAX;
	volatile int8_t x118 = -1;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -45;

	t29 = (((x117&x118)<=x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	volatile int64_t x123 = INT64_MIN;
	static int64_t x124 = 21904884LL;
	int32_t t30 = 14621;

	t30 = (((x121&x122)<=x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x128 = INT32_MAX;
	int32_t t31 = 4053;

	t31 = (((x125&x126)<=x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MIN;

	t32 = (((x129&x130)<=x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MAX;
	uint32_t x134 = 5U;
	int16_t x136 = INT16_MIN;
	int32_t t33 = 1964029;

	t33 = (((x133&x134)<=x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 15730689;
	static uint64_t x138 = UINT64_MAX;
	volatile int32_t x139 = 10175;
	int32_t t34 = -686813;

	t34 = (((x137&x138)<=x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = 10;
	uint8_t x142 = 7U;
	uint32_t x143 = 122755U;
	static int32_t t35 = -13;

	t35 = (((x141&x142)<=x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MAX;
	static int32_t x146 = INT32_MIN;
	static uint16_t x147 = 141U;
	uint8_t x148 = 3U;
	int32_t t36 = -127798612;

	t36 = (((x145&x146)<=x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int16_t x151 = INT16_MAX;
	uint32_t x152 = 6U;
	int32_t t37 = -416;

	t37 = (((x149&x150)<=x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 23952U;
	int16_t x154 = 2279;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t38 = 866813;

	t38 = (((x153&x154)<=x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 4;
	int16_t x158 = INT16_MIN;
	int32_t x159 = -1;
	uint8_t x160 = 13U;
	int32_t t39 = 217767;

	t39 = (((x157&x158)<=x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 129U;
	int32_t x162 = INT32_MIN;
	static uint32_t x163 = UINT32_MAX;
	volatile int8_t x164 = INT8_MIN;
	static int32_t t40 = -803859;

	t40 = (((x161&x162)<=x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -14664;
	uint8_t x166 = 51U;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 5;

	t41 = (((x165&x166)<=x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 6615;
	static int32_t x170 = -1;
	volatile int16_t x171 = INT16_MIN;
	int64_t x172 = -1421LL;

	t42 = (((x169&x170)<=x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = 9;
	static uint8_t x174 = 79U;
	uint8_t x175 = 40U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 7312863;

	t43 = (((x173&x174)<=x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 28987LL;
	volatile int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MAX;
	volatile int64_t x180 = -1LL;
	int32_t t44 = -601220;

	t44 = (((x177&x178)<=x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = -2;
	uint16_t x184 = 3753U;
	volatile int32_t t45 = -3938;

	t45 = (((x181&x182)<=x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;

	t46 = (((x185&x186)<=x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 289922470676454003LLU;
	uint16_t x190 = UINT16_MAX;
	int8_t x192 = 4;
	int32_t t47 = 3;

	t47 = (((x189&x190)<=x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x195 = 728U;
	volatile int32_t t48 = 1;

	t48 = (((x193&x194)<=x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MAX;
	int32_t t49 = 8058788;

	t49 = (((x197&x198)<=x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 2U;
	static int16_t x202 = -22;
	uint32_t x203 = 1669U;
	int64_t x204 = INT64_MAX;
	volatile int32_t t50 = 220269;

	t50 = (((x201&x202)<=x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -1LL;
	int64_t x207 = -16LL;
	int32_t t51 = 8167291;

	t51 = (((x205&x206)<=x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	volatile int32_t x210 = -22;
	uint32_t x212 = UINT32_MAX;
	int32_t t52 = 296457244;

	t52 = (((x209&x210)<=x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = 92;
	int64_t x215 = INT64_MAX;
	int32_t t53 = 1502;

	t53 = (((x213&x214)<=x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	uint64_t x218 = UINT64_MAX;
	static uint16_t x220 = 5631U;
	volatile int32_t t54 = 43296214;

	t54 = (((x217&x218)<=x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 10U;
	volatile int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MIN;
	int8_t x224 = 14;
	int32_t t55 = 1;

	t55 = (((x221&x222)<=x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	static int16_t x228 = INT16_MIN;

	t56 = (((x225&x226)<=x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	static volatile int16_t x230 = -1;
	int8_t x231 = INT8_MAX;
	int64_t x232 = -1LL;
	static int32_t t57 = 59;

	t57 = (((x229&x230)<=x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	volatile int32_t x234 = INT32_MIN;
	int16_t x235 = 24;
	uint16_t x236 = UINT16_MAX;
	static int32_t t58 = -1;

	t58 = (((x233&x234)<=x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;
	uint64_t x240 = 1577260900329LLU;
	int32_t t59 = -190;

	t59 = (((x237&x238)<=x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int64_t x244 = 2817256LL;

	t60 = (((x241&x242)<=x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -33;
	uint64_t x246 = 245854005LLU;
	static volatile int16_t x247 = 441;
	static int16_t x248 = INT16_MIN;
	int32_t t61 = -5881627;

	t61 = (((x245&x246)<=x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int32_t x251 = INT32_MAX;
	uint32_t x252 = 29873405U;
	volatile int32_t t62 = 1;

	t62 = (((x249&x250)<=x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -1LL;
	volatile int64_t x254 = INT64_MIN;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MIN;
	int32_t t63 = 292;

	t63 = (((x253&x254)<=x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x258 = -795401LL;
	static int16_t x259 = -1;
	int16_t x260 = -8850;
	static volatile int32_t t64 = 70936;

	t64 = (((x257&x258)<=x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MIN;
	volatile uint16_t x264 = 3928U;
	volatile int32_t t65 = -77159993;

	t65 = (((x261&x262)<=x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = 669;
	static int8_t x266 = INT8_MIN;
	int8_t x267 = -1;
	static int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 3693926;

	t66 = (((x265&x266)<=x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = 0;
	int32_t x272 = INT32_MIN;
	int32_t t67 = 1;

	t67 = (((x269&x270)<=x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	int64_t x275 = INT64_MIN;
	int32_t t68 = -14;

	t68 = (((x273&x274)<=x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	static int8_t x278 = -1;
	static int32_t x279 = INT32_MIN;
	uint32_t x280 = 1784U;
	static int32_t t69 = -175414250;

	t69 = (((x277&x278)<=x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = -2;
	int16_t x283 = -93;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -8;

	t70 = (((x281&x282)<=x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int8_t x286 = -4;
	int16_t x288 = INT16_MAX;
	int32_t t71 = 13;

	t71 = (((x285&x286)<=x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x289 = 0U;
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t72 = -238735902;

	t72 = (((x289&x290)<=x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 3;
	int8_t x294 = 17;
	static volatile int32_t x296 = -21670;
	int32_t t73 = 52982;

	t73 = (((x293&x294)<=x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	static int16_t x298 = 9;
	int64_t x299 = INT64_MAX;
	int8_t x300 = INT8_MAX;
	int32_t t74 = 1;

	t74 = (((x297&x298)<=x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = 2;
	int16_t x302 = -10;
	volatile int64_t x303 = INT64_MIN;
	uint16_t x304 = 2614U;
	int32_t t75 = -529;

	t75 = (((x301&x302)<=x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = UINT16_MAX;
	volatile int16_t x306 = 383;
	int32_t x307 = -58;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = -45600;

	t76 = (((x305&x306)<=x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MIN;
	volatile int32_t t77 = 8094;

	t77 = (((x309&x310)<=x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 8U;
	int32_t x314 = INT32_MAX;
	uint8_t x315 = 1U;
	static int16_t x316 = 55;
	int32_t t78 = 29327225;

	t78 = (((x313&x314)<=x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MIN;
	volatile int16_t x319 = 11;
	volatile uint32_t x320 = 51403321U;

	t79 = (((x317&x318)<=x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 675936043;
	int32_t x322 = -1;
	uint64_t x323 = 8384027142LLU;
	uint16_t x324 = 1250U;
	static volatile int32_t t80 = -540132391;

	t80 = (((x321&x322)<=x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x325 = UINT16_MAX;
	int16_t x326 = -1;
	int16_t x327 = INT16_MIN;

	t81 = (((x325&x326)<=x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int64_t x330 = INT64_MAX;
	static volatile uint64_t x331 = 4080019360LLU;
	uint32_t x332 = 1816U;
	volatile int32_t t82 = -2;

	t82 = (((x329&x330)<=x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MAX;
	volatile int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MAX;
	static int32_t t83 = 968;

	t83 = (((x333&x334)<=x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = -8;
	int16_t x338 = INT16_MIN;
	volatile uint32_t x340 = UINT32_MAX;

	t84 = (((x337&x338)<=x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MIN;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MAX;
	int32_t t85 = -16086;

	t85 = (((x341&x342)<=x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = 9;
	uint8_t x347 = 0U;
	int32_t x348 = INT32_MIN;
	int32_t t86 = 542;

	t86 = (((x345&x346)<=x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = INT64_MIN;
	int32_t x351 = 279908;
	int64_t x352 = INT64_MIN;

	t87 = (((x349&x350)<=x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 2U;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = -1;

	t88 = (((x353&x354)<=x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	int32_t x359 = INT32_MIN;
	static int64_t x360 = INT64_MIN;
	int32_t t89 = 3713484;

	t89 = (((x357&x358)<=x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	volatile int64_t x362 = -1LL;
	int8_t x363 = -2;
	volatile int64_t x364 = INT64_MIN;
	static volatile int32_t t90 = -2977;

	t90 = (((x361&x362)<=x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = -25484LL;
	uint32_t x368 = UINT32_MAX;
	int32_t t91 = -1;

	t91 = (((x365&x366)<=x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x370 = INT32_MIN;
	volatile int32_t x372 = -47844;
	volatile int32_t t92 = -3885361;

	t92 = (((x369&x370)<=x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x374 = INT8_MAX;
	int64_t x375 = INT64_MIN;
	static int32_t x376 = INT32_MIN;

	t93 = (((x373&x374)<=x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = -7;
	static volatile int16_t x378 = -1197;
	static uint16_t x379 = 12696U;
	int8_t x380 = INT8_MAX;
	int32_t t94 = -26222535;

	t94 = (((x377&x378)<=x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MAX;
	uint16_t x382 = 15136U;
	volatile int32_t x384 = INT32_MIN;
	int32_t t95 = 9059;

	t95 = (((x381&x382)<=x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 71U;
	volatile int32_t t96 = 698007509;

	t96 = (((x385&x386)<=x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = 0LL;
	static uint64_t x392 = 799377351796109488LLU;
	int32_t t97 = 227;

	t97 = (((x389&x390)<=x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 20LL;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	volatile int32_t t98 = 6;

	t98 = (((x393&x394)<=x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 2636895513LLU;
	static uint16_t x399 = 13479U;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = -83;

	t99 = (((x397&x398)<=x399)<=x400);

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

