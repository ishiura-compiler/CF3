#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = 201;
int32_t x6 = 5;
int64_t x7 = -22LL;
uint32_t x13 = 502734536U;
int32_t t4 = -2;
uint32_t x26 = UINT32_MAX;
int16_t x28 = INT16_MIN;
uint64_t x36 = 30904LLU;
volatile int32_t t12 = -790;
static volatile uint8_t x55 = 60U;
int32_t x63 = 56;
int32_t t15 = -30;
volatile int32_t t16 = 15459341;
int64_t x82 = -79002LL;
volatile int32_t t21 = -528467;
static int32_t x89 = INT32_MAX;
int32_t t25 = 888912455;
int16_t x111 = 1441;
int64_t x112 = INT64_MAX;
static volatile int32_t t27 = 578;
uint16_t x118 = 306U;
int16_t x119 = -6;
int32_t t29 = 0;
static uint64_t x122 = 8999739443484547486LLU;
int32_t t31 = 13083;
volatile int8_t x131 = 9;
static uint64_t x133 = 1413435400170LLU;
uint64_t x136 = 138383016LLU;
volatile int16_t x142 = 1826;
int8_t x144 = 1;
volatile int32_t t35 = -790962;
int32_t t36 = -24485762;
int64_t x151 = INT64_MIN;
int8_t x152 = -3;
uint8_t x160 = 9U;
static volatile int32_t t39 = 586772991;
static int32_t t42 = -335;
int32_t x173 = -10;
static int8_t x175 = INT8_MAX;
static volatile int32_t t45 = 19963;
uint32_t x197 = 33U;
static int16_t x200 = INT16_MIN;
volatile uint16_t x202 = 0U;
uint64_t x206 = 1909870610649239389LLU;
int16_t x207 = INT16_MIN;
uint8_t x209 = 4U;
uint16_t x212 = 9U;
volatile int8_t x213 = INT8_MIN;
uint64_t x216 = UINT64_MAX;
int16_t x220 = INT16_MAX;
static uint8_t x223 = UINT8_MAX;
uint8_t x228 = 4U;
static volatile int32_t t56 = 262;
static int32_t x230 = INT32_MIN;
uint16_t x232 = 11U;
int16_t x237 = -1;
static int8_t x240 = INT8_MAX;
int32_t x245 = INT32_MIN;
uint32_t x247 = 3434584U;
int32_t t61 = -952477572;
static uint8_t x249 = 28U;
static int8_t x250 = -1;
int64_t x254 = -185745683574560388LL;
static volatile int64_t x257 = -1LL;
volatile uint8_t x261 = 1U;
int32_t x264 = INT32_MIN;
uint64_t x269 = 129039LLU;
int32_t x270 = -18761201;
int32_t x277 = INT32_MIN;
int32_t x290 = INT32_MAX;
int16_t x292 = INT16_MIN;
int8_t x303 = INT8_MIN;
volatile int32_t x306 = -1;
int16_t x308 = 15;
uint32_t x309 = UINT32_MAX;
static int64_t x321 = INT64_MIN;
int8_t x324 = INT8_MAX;
static int32_t x329 = -1;
static int8_t x331 = -1;
int32_t x334 = -224;
int16_t x338 = 2;
int32_t x341 = INT32_MAX;
static int16_t x352 = INT16_MIN;
int16_t x359 = 1523;
static int16_t x361 = -1;
int32_t t90 = -4;
volatile int16_t x369 = -548;
int8_t x376 = INT8_MIN;
static int16_t x383 = 25;
int16_t x384 = -6857;
volatile int64_t x388 = INT64_MIN;
volatile int16_t x390 = INT16_MIN;
uint64_t x391 = UINT64_MAX;
volatile int32_t t99 = 46412;


void f0(void) {
	static uint16_t x1 = 183U;
	static volatile int8_t x2 = -1;
	volatile int8_t x3 = -1;
	volatile int32_t t0 = -214736;

	t0 = (((x1==x2)&x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 71188982;

	t1 = (((x5==x6)&x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = 0;
	int32_t x11 = 1525;
	static int64_t x12 = INT64_MIN;
	int32_t t2 = -96;

	t2 = (((x9==x10)&x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MIN;
	static int16_t x15 = 1228;
	uint64_t x16 = 1502076802179017882LLU;
	int32_t t3 = 3101;

	t3 = (((x13==x14)&x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1178;
	int32_t x18 = -1;
	volatile int8_t x19 = 42;
	static volatile uint64_t x20 = 8LLU;

	t4 = (((x17==x18)&x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static int64_t x22 = -1LL;
	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = 52;
	int32_t t5 = 28;

	t5 = (((x21==x22)&x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 63760379U;
	static int32_t x27 = INT32_MIN;
	static volatile int32_t t6 = 30944423;

	t6 = (((x25==x26)&x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -31;
	int32_t x30 = INT32_MAX;
	uint8_t x31 = 2U;
	static volatile int8_t x32 = -37;
	volatile int32_t t7 = 21690;

	t7 = (((x29==x30)&x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int8_t x34 = -1;
	volatile uint8_t x35 = 4U;
	int32_t t8 = 122;

	t8 = (((x33==x34)&x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 19096347734539922LLU;
	volatile int64_t x38 = -2176786350LL;
	int8_t x39 = -1;
	volatile int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = -193455;

	t9 = (((x37==x38)&x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MAX;
	int16_t x43 = -16;
	int8_t x44 = INT8_MIN;
	static int32_t t10 = -4006604;

	t10 = (((x41==x42)&x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static int16_t x46 = INT16_MIN;
	uint32_t x47 = 2148088U;
	uint8_t x48 = 20U;
	volatile int32_t t11 = 0;

	t11 = (((x45==x46)&x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 883748U;
	uint8_t x50 = 54U;
	static volatile int32_t x51 = 5092893;
	volatile uint8_t x52 = 4U;

	t12 = (((x49==x50)&x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int32_t x54 = INT32_MIN;
	int8_t x56 = INT8_MIN;
	int32_t t13 = 6600351;

	t13 = (((x53==x54)&x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static int64_t x58 = -1LL;
	static volatile int16_t x59 = INT16_MIN;
	volatile int64_t x60 = INT64_MAX;
	int32_t t14 = -101333;

	t14 = (((x57==x58)&x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int8_t x62 = INT8_MAX;
	int8_t x64 = -5;

	t15 = (((x61==x62)&x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = 1;
	int16_t x66 = -36;
	int8_t x67 = 46;
	static int8_t x68 = 1;

	t16 = (((x65==x66)&x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 37U;
	static uint64_t x70 = 11364LLU;
	int32_t x71 = INT32_MIN;
	uint32_t x72 = 523634U;
	int32_t t17 = -413245;

	t17 = (((x69==x70)&x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = -1;
	uint64_t x75 = 26520035LLU;
	static int32_t x76 = -1;
	int32_t t18 = -89;

	t18 = (((x73==x74)&x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 95U;
	uint16_t x78 = UINT16_MAX;
	volatile int64_t x79 = -1LL;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = -3394050;

	t19 = (((x77==x78)&x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x83 = 143191;
	int8_t x84 = -1;
	volatile int32_t t20 = -28560038;

	t20 = (((x81==x82)&x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 1011;
	static volatile uint32_t x86 = UINT32_MAX;
	uint64_t x87 = 8302033447LLU;
	int32_t x88 = INT32_MAX;

	t21 = (((x85==x86)&x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = -1;
	volatile int16_t x91 = INT16_MAX;
	static int16_t x92 = INT16_MIN;
	volatile int32_t t22 = -175;

	t22 = (((x89==x90)&x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 23420U;
	static volatile int8_t x94 = INT8_MAX;
	volatile uint16_t x95 = 3799U;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = 405364;

	t23 = (((x93==x94)&x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint16_t x98 = 449U;
	int8_t x99 = -20;
	uint8_t x100 = 5U;
	int32_t t24 = -157123275;

	t24 = (((x97==x98)&x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MIN;
	static uint16_t x103 = UINT16_MAX;
	static int64_t x104 = -1LL;

	t25 = (((x101==x102)&x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1468;
	int64_t x106 = INT64_MAX;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = INT8_MAX;
	int32_t t26 = 2502876;

	t26 = (((x105==x106)&x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	int16_t x110 = INT16_MAX;

	t27 = (((x109==x110)&x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -110070;
	uint32_t x114 = 84U;
	int16_t x115 = 15433;
	static volatile uint32_t x116 = 6869U;
	int32_t t28 = 8200;

	t28 = (((x113==x114)&x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	static uint16_t x120 = 6769U;

	t29 = (((x117==x118)&x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	static volatile int32_t x123 = INT32_MIN;
	int16_t x124 = -1;
	static volatile int32_t t30 = -765865;

	t30 = (((x121==x122)&x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 7;
	uint32_t x126 = 0U;
	static int8_t x127 = INT8_MIN;
	static int64_t x128 = -216618521674LL;

	t31 = (((x125==x126)&x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MAX;
	uint8_t x130 = 1U;
	int8_t x132 = INT8_MAX;
	int32_t t32 = -4;

	t32 = (((x129==x130)&x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	static int64_t x135 = -1LL;
	static int32_t t33 = 316912317;

	t33 = (((x133==x134)&x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 3975926U;
	int8_t x138 = -1;
	int64_t x139 = -1LL;
	int32_t x140 = INT32_MIN;
	static int32_t t34 = 477230806;

	t34 = (((x137==x138)&x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -26;
	static int16_t x143 = INT16_MAX;

	t35 = (((x141==x142)&x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	static volatile uint32_t x146 = 26743U;
	static int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MAX;

	t36 = (((x145==x146)&x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 138186LLU;
	int32_t x150 = INT32_MIN;
	int32_t t37 = 16181760;

	t37 = (((x149==x150)&x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 1U;
	int8_t x154 = -2;
	int8_t x155 = -1;
	int32_t x156 = 1;
	int32_t t38 = 118;

	t38 = (((x153==x154)&x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 10U;
	uint16_t x158 = 1U;
	volatile int64_t x159 = INT64_MAX;

	t39 = (((x157==x158)&x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MIN;
	int32_t x163 = 3;
	static int16_t x164 = -1;
	volatile int32_t t40 = -4939;

	t40 = (((x161==x162)&x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int32_t x166 = INT32_MIN;
	int16_t x167 = 21;
	volatile int16_t x168 = -1;
	volatile int32_t t41 = 188;

	t41 = (((x165==x166)&x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 22LLU;
	int16_t x170 = 113;
	int16_t x171 = -10810;
	volatile int8_t x172 = -1;

	t42 = (((x169==x170)&x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x174 = INT8_MIN;
	volatile int8_t x176 = 1;
	static int32_t t43 = 30690447;

	t43 = (((x173==x174)&x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 1;

	t44 = (((x177==x178)&x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 1466094321418568LLU;
	static volatile int64_t x182 = INT64_MAX;
	volatile uint8_t x183 = 7U;
	uint8_t x184 = UINT8_MAX;

	t45 = (((x181==x182)&x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 1;
	uint8_t x186 = 1U;
	static uint16_t x187 = UINT16_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 121617578;

	t46 = (((x185==x186)&x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -27;
	volatile uint8_t x190 = 4U;
	static uint32_t x191 = 5863U;
	int16_t x192 = 4967;
	static volatile int32_t t47 = 1;

	t47 = (((x189==x190)&x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	uint64_t x194 = 19LLU;
	int32_t x195 = INT32_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = 5396;

	t48 = (((x193==x194)&x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -489111LL;
	int32_t x199 = INT32_MAX;
	volatile int32_t t49 = 20;

	t49 = (((x197==x198)&x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	static volatile int8_t x203 = -1;
	volatile int64_t x204 = -328421567465247682LL;
	int32_t t50 = -1464578;

	t50 = (((x201==x202)&x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = 125;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = 153651;

	t51 = (((x205==x206)&x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = UINT16_MAX;
	volatile uint64_t x211 = 441924521561241LLU;
	int32_t t52 = 37087631;

	t52 = (((x209==x210)&x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x214 = UINT8_MAX;
	static int64_t x215 = INT64_MIN;
	volatile int32_t t53 = 0;

	t53 = (((x213==x214)&x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = 11287;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = INT32_MIN;
	static int32_t t54 = -10;

	t54 = (((x217==x218)&x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MIN;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -815843297;

	t55 = (((x221==x222)&x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = UINT64_MAX;
	volatile int64_t x226 = INT64_MIN;
	int32_t x227 = 2073127;

	t56 = (((x225==x226)&x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int32_t x231 = 316;
	volatile int32_t t57 = 30305;

	t57 = (((x229==x230)&x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 6881;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = -1LL;
	int8_t x236 = -1;
	int32_t t58 = -1724;

	t58 = (((x233==x234)&x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MAX;
	int32_t t59 = -1;

	t59 = (((x237==x238)&x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	int64_t x242 = -1LL;
	uint32_t x243 = 31514U;
	int32_t x244 = INT32_MAX;
	static int32_t t60 = -1;

	t60 = (((x241==x242)&x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = 5536796;
	volatile int32_t x248 = 264;

	t61 = (((x245==x246)&x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x251 = INT32_MIN;
	uint8_t x252 = 1U;
	int32_t t62 = -12;

	t62 = (((x249==x250)&x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 540U;
	int16_t x255 = INT16_MIN;
	static uint32_t x256 = 0U;
	volatile int32_t t63 = -30;

	t63 = (((x253==x254)&x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = 5U;
	volatile uint64_t x259 = 7549LLU;
	volatile uint8_t x260 = UINT8_MAX;
	volatile int32_t t64 = 2722186;

	t64 = (((x257==x258)&x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = UINT8_MAX;
	volatile int16_t x263 = -3;
	int32_t t65 = 160852;

	t65 = (((x261==x262)&x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = UINT32_MAX;
	uint32_t x268 = 1385989U;
	int32_t t66 = -107180313;

	t66 = (((x265==x266)&x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x271 = INT8_MIN;
	uint16_t x272 = 3U;
	static volatile int32_t t67 = -1195;

	t67 = (((x269==x270)&x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = -1;
	volatile int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = -2116904;

	t68 = (((x273==x274)&x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = -8;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -1;

	t69 = (((x277==x278)&x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	int32_t x282 = INT32_MIN;
	volatile int8_t x283 = INT8_MAX;
	volatile int8_t x284 = INT8_MAX;
	int32_t t70 = 362;

	t70 = (((x281==x282)&x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x285 = INT32_MAX;
	uint32_t x286 = 0U;
	uint8_t x287 = 12U;
	int16_t x288 = INT16_MAX;
	static volatile int32_t t71 = -5;

	t71 = (((x285==x286)&x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 17;
	int16_t x291 = 379;
	int32_t t72 = 9810399;

	t72 = (((x289==x290)&x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MAX;
	static uint8_t x295 = UINT8_MAX;
	static int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 93813650;

	t73 = (((x293==x294)&x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = 851;
	int64_t x298 = -5LL;
	int64_t x299 = -1LL;
	volatile int8_t x300 = INT8_MIN;
	static volatile int32_t t74 = -115084;

	t74 = (((x297==x298)&x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 4618U;
	volatile int8_t x302 = INT8_MIN;
	static int64_t x304 = INT64_MIN;
	static volatile int32_t t75 = -1;

	t75 = (((x301==x302)&x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	static int64_t x307 = -118244413939875171LL;
	static volatile int32_t t76 = 2;

	t76 = (((x305==x306)&x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = -1;
	static int32_t x311 = INT32_MIN;
	static volatile int8_t x312 = INT8_MAX;
	int32_t t77 = 13;

	t77 = (((x309==x310)&x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	static uint32_t x314 = UINT32_MAX;
	static uint32_t x315 = 123U;
	volatile int64_t x316 = -1LL;
	static volatile int32_t t78 = 453259;

	t78 = (((x313==x314)&x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	uint32_t x318 = UINT32_MAX;
	static volatile uint16_t x319 = 10U;
	int8_t x320 = -1;
	int32_t t79 = -1424;

	t79 = (((x317==x318)&x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MAX;
	static int64_t x323 = 6945206785544LL;
	volatile int32_t t80 = 594365577;

	t80 = (((x321==x322)&x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 4U;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = UINT32_MAX;
	static uint8_t x328 = 1U;
	volatile int32_t t81 = 80987;

	t81 = (((x325==x326)&x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = 7U;
	uint32_t x332 = 13945U;
	volatile int32_t t82 = 3;

	t82 = (((x329==x330)&x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -47;
	static int32_t x335 = -1;
	uint16_t x336 = 26070U;
	static int32_t t83 = 969168;

	t83 = (((x333==x334)&x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 2U;
	int64_t x339 = -1LL;
	static int32_t x340 = INT32_MAX;
	volatile int32_t t84 = -6215279;

	t84 = (((x337==x338)&x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = -1;
	int16_t x343 = -123;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = -13233;

	t85 = (((x341==x342)&x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int32_t x346 = -1;
	static uint32_t x347 = 1040640U;
	int64_t x348 = -1LL;
	int32_t t86 = -99782;

	t86 = (((x345==x346)&x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	static int8_t x351 = -4;
	int32_t t87 = -438989;

	t87 = (((x349==x350)&x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 967659571066201667LLU;
	static int16_t x355 = -1;
	int64_t x356 = INT64_MAX;
	volatile int32_t t88 = 121307704;

	t88 = (((x353==x354)&x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	uint32_t x358 = 3528292U;
	int64_t x360 = 74609514240385LL;
	int32_t t89 = 1639;

	t89 = (((x357==x358)&x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	int16_t x363 = -1;
	volatile uint16_t x364 = UINT16_MAX;

	t90 = (((x361==x362)&x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	uint16_t x366 = 44U;
	static volatile int8_t x367 = INT8_MAX;
	static uint8_t x368 = 10U;
	volatile int32_t t91 = 538;

	t91 = (((x365==x366)&x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MAX;
	int32_t x371 = 6;
	static int8_t x372 = 12;
	volatile int32_t t92 = 96084658;

	t92 = (((x369==x370)&x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	uint8_t x374 = 28U;
	volatile int32_t x375 = INT32_MAX;
	int32_t t93 = 102213577;

	t93 = (((x373==x374)&x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 143073U;
	int8_t x378 = 0;
	static int32_t x379 = -2;
	uint8_t x380 = 3U;
	int32_t t94 = 12367;

	t94 = (((x377==x378)&x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = 109U;
	volatile int8_t x382 = -43;
	volatile int32_t t95 = -22895;

	t95 = (((x381==x382)&x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -1;
	int16_t x386 = 1;
	int8_t x387 = INT8_MIN;
	static volatile int32_t t96 = -6;

	t96 = (((x385==x386)&x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 42290270;

	t97 = (((x389==x390)&x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 22711850LL;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 10U;
	uint8_t x396 = 7U;
	static volatile int32_t t98 = 0;

	t98 = (((x393==x394)&x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = INT64_MAX;
	int8_t x399 = INT8_MAX;
	volatile int16_t x400 = -1;

	t99 = (((x397==x398)&x399)<=x400);

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
