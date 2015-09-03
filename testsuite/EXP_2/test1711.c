#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x18 = INT64_MAX;
uint64_t x20 = UINT64_MAX;
int8_t x33 = INT8_MIN;
static int64_t x36 = -22054957383515LL;
static int8_t x38 = -1;
int16_t x39 = INT16_MAX;
volatile int16_t x42 = INT16_MAX;
int32_t t10 = -526056;
int32_t x49 = INT32_MIN;
volatile int32_t x50 = -10228058;
int64_t x56 = INT64_MAX;
int64_t x65 = INT64_MIN;
int32_t x67 = -1;
static int32_t t15 = 1;
uint8_t x80 = 4U;
static int32_t t18 = 75257;
volatile int64_t x86 = INT64_MIN;
static int16_t x91 = INT16_MIN;
volatile int32_t x93 = INT32_MIN;
int32_t x99 = INT32_MIN;
int32_t x101 = -1;
int32_t x108 = INT32_MAX;
int64_t x124 = INT64_MIN;
int32_t t27 = -398579;
volatile int32_t x125 = -1000976;
volatile int64_t x126 = INT64_MAX;
int32_t x130 = 537258;
int64_t x131 = INT64_MAX;
volatile int32_t t31 = 0;
static int32_t x149 = INT32_MIN;
int32_t t33 = 1639;
static int8_t x155 = INT8_MIN;
int8_t x157 = -16;
static uint8_t x158 = 0U;
volatile uint32_t x160 = UINT32_MAX;
int16_t x171 = 13441;
volatile int32_t t40 = -12;
volatile uint16_t x183 = UINT16_MAX;
uint32_t x189 = UINT32_MAX;
static uint32_t x198 = 1068436524U;
uint32_t x201 = 128344565U;
int32_t x202 = INT32_MIN;
int8_t x203 = INT8_MAX;
static uint64_t x205 = UINT64_MAX;
int32_t x208 = 95233;
int32_t t47 = -12;
static int32_t t50 = 187369;
static volatile int64_t x223 = -4304480136381527107LL;
uint8_t x224 = UINT8_MAX;
int8_t x226 = INT8_MIN;
volatile int64_t x239 = -1LL;
int32_t x244 = INT32_MIN;
int64_t x246 = -505403286566LL;
static uint8_t x249 = 0U;
static uint8_t x252 = UINT8_MAX;
int8_t x259 = INT8_MIN;
int16_t x260 = INT16_MAX;
int64_t x261 = -53828769LL;
int32_t x266 = INT32_MIN;
static int32_t x274 = INT32_MIN;
int64_t x287 = 2477649372979LL;
uint32_t x288 = 9U;
int32_t x294 = INT32_MAX;
static int64_t x295 = 8504478222379LL;
int64_t x299 = INT64_MIN;
int32_t x302 = INT32_MAX;
uint32_t x314 = 0U;
static int64_t x317 = INT64_MIN;
uint32_t x331 = 810462220U;
int8_t x332 = INT8_MIN;
int32_t t75 = -31;
volatile int32_t t76 = 5165315;
volatile uint8_t x338 = 2U;
int32_t t77 = 1816;
int32_t x341 = INT32_MAX;
int16_t x345 = INT16_MIN;
volatile int32_t x349 = -518;
volatile uint64_t x350 = UINT64_MAX;
int16_t x351 = INT16_MAX;
volatile int32_t t80 = 24;
uint8_t x353 = 92U;
int32_t x354 = -1;
int8_t x358 = -1;
int8_t x360 = -1;
static volatile int64_t x366 = INT64_MIN;
uint64_t x367 = 13140784457149LLU;
int64_t x373 = INT64_MAX;
uint32_t x374 = 14768013U;
int16_t x377 = INT16_MAX;
uint64_t x379 = 32068LLU;
int8_t x382 = 23;
static int8_t x385 = -1;
uint64_t x400 = UINT64_MAX;
int16_t x404 = -2;
static volatile int8_t x411 = INT8_MIN;
int16_t x412 = -3;
static int32_t x414 = -1;
int8_t x415 = INT8_MIN;
static volatile int32_t t95 = -15780;
int64_t x431 = -7160734244561LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MAX;
	uint64_t x3 = UINT64_MAX;
	static uint32_t x4 = 379416133U;
	volatile int32_t t0 = -8444;

	t0 = ((x1-(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 68U;
	volatile uint8_t x6 = UINT8_MAX;
	volatile int8_t x7 = 34;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -7003088;

	t1 = ((x5-(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = INT16_MIN;
	static int8_t x14 = INT8_MIN;
	uint64_t x15 = 1541993804492LLU;
	int8_t x16 = INT8_MAX;
	volatile int32_t t2 = -52;

	t2 = ((x13-(x14&x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 21U;
	static uint16_t x19 = UINT16_MAX;
	static int32_t t3 = -32;

	t3 = ((x17-(x18&x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MAX;
	static volatile int32_t x22 = -1;
	int64_t x23 = -523707LL;
	uint64_t x24 = 7270087400688729LLU;
	volatile int32_t t4 = 4;

	t4 = ((x21-(x22&x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	int32_t x26 = -1;
	static uint64_t x27 = 49LLU;
	volatile uint16_t x28 = 1U;
	volatile int32_t t5 = -1987706;

	t5 = ((x25-(x26&x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 4558436266573LLU;
	int32_t x30 = INT32_MIN;
	uint64_t x31 = 4234988675LLU;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t6 = -952789962;

	t6 = ((x29-(x30&x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	int32_t t7 = -1221758;

	t7 = ((x33-(x34&x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = 0;
	volatile uint32_t x40 = 393U;
	int32_t t8 = 16541;

	t8 = ((x37-(x38&x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 1;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = 456U;
	volatile int32_t t9 = 31051263;

	t9 = ((x41-(x42&x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 7U;
	uint64_t x46 = 797362005123414454LLU;
	uint16_t x47 = UINT16_MAX;
	volatile uint16_t x48 = 4U;

	t10 = ((x45-(x46&x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x51 = INT8_MIN;
	volatile uint32_t x52 = 17U;
	volatile int32_t t11 = 1498476;

	t11 = ((x49-(x50&x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static int32_t t12 = 6;

	t12 = ((x53-(x54&x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -699;
	int16_t x58 = -2;
	volatile uint16_t x59 = 39U;
	uint32_t x60 = 1617268605U;
	volatile int32_t t13 = 3;

	t13 = ((x57-(x58&x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	int64_t x64 = -51756429088LL;
	volatile int32_t t14 = 8535752;

	t14 = ((x61-(x62&x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = INT32_MIN;
	int64_t x68 = 1238528757430453399LL;

	t15 = ((x65-(x66&x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = 31542U;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t16 = 348601;

	t16 = ((x69-(x70&x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 394U;
	int8_t x78 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	static volatile int32_t t17 = 1439;

	t17 = ((x77-(x78&x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = INT16_MIN;
	static int32_t x82 = 23;
	volatile int32_t x83 = -1;
	static int16_t x84 = INT16_MIN;

	t18 = ((x81-(x82&x83))==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = INT64_MIN;
	int64_t x87 = 16083978230LL;
	int8_t x88 = INT8_MAX;
	volatile int32_t t19 = -2;

	t19 = ((x85-(x86&x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 1U;
	static uint8_t x90 = 0U;
	static uint32_t x92 = 3952817U;
	int32_t t20 = -4;

	t20 = ((x89-(x90&x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = INT64_MIN;
	uint8_t x95 = 3U;
	int64_t x96 = INT64_MIN;
	static int32_t t21 = 1;

	t21 = ((x93-(x94&x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	int16_t x98 = INT16_MAX;
	volatile int8_t x100 = 1;
	int32_t t22 = -2586320;

	t22 = ((x97-(x98&x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x102 = 27U;
	uint32_t x103 = UINT32_MAX;
	volatile uint16_t x104 = 1835U;
	static volatile int32_t t23 = 10192;

	t23 = ((x101-(x102&x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	uint16_t x106 = 166U;
	int64_t x107 = INT64_MAX;
	volatile int32_t t24 = 592305188;

	t24 = ((x105-(x106&x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 1;
	int16_t x110 = INT16_MIN;
	int16_t x111 = -287;
	static int8_t x112 = INT8_MIN;
	volatile int32_t t25 = -13519;

	t25 = ((x109-(x110&x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x117 = 0U;
	int16_t x118 = 64;
	volatile uint16_t x119 = UINT16_MAX;
	int64_t x120 = 1LL;
	static volatile int32_t t26 = -5;

	t26 = ((x117-(x118&x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x121 = UINT16_MAX;
	uint64_t x122 = 972LLU;
	static volatile int64_t x123 = INT64_MIN;

	t27 = ((x121-(x122&x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x127 = 17;
	uint64_t x128 = 12461747605153LLU;
	int32_t t28 = 90;

	t28 = ((x125-(x126&x127))==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x129 = 246223U;
	volatile int8_t x132 = INT8_MAX;
	int32_t t29 = 6;

	t29 = ((x129-(x130&x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = UINT8_MAX;
	uint8_t x134 = 1U;
	uint64_t x135 = UINT64_MAX;
	uint64_t x136 = UINT64_MAX;
	volatile int32_t t30 = -1;

	t30 = ((x133-(x134&x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -2326057LL;
	volatile int32_t x138 = INT32_MIN;
	uint8_t x139 = 39U;
	int16_t x140 = INT16_MIN;

	t31 = ((x137-(x138&x139))==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 30U;
	int8_t x147 = 3;
	int8_t x148 = INT8_MAX;
	int32_t t32 = 3094159;

	t32 = ((x145-(x146&x147))==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x150 = INT32_MIN;
	static int16_t x151 = INT16_MAX;
	uint8_t x152 = UINT8_MAX;

	t33 = ((x149-(x150&x151))==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MIN;
	static volatile int32_t x154 = -408059;
	int64_t x156 = INT64_MIN;
	static int32_t t34 = 8667;

	t34 = ((x153-(x154&x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x159 = UINT32_MAX;
	volatile int32_t t35 = 7981;

	t35 = ((x157-(x158&x159))==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 2028U;
	static uint64_t x162 = UINT64_MAX;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = 243;
	static volatile int32_t t36 = -61;

	t36 = ((x161-(x162&x163))==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x165 = UINT32_MAX;
	int64_t x166 = -1LL;
	uint8_t x167 = 14U;
	uint64_t x168 = 744746662686734LLU;
	int32_t t37 = 2296705;

	t37 = ((x165-(x166&x167))==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -15;
	volatile int64_t x170 = INT64_MIN;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t38 = 18963;

	t38 = ((x169-(x170&x171))==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = 1;
	static uint8_t x174 = 1U;
	uint8_t x175 = 0U;
	int64_t x176 = 2LL;
	static volatile int32_t t39 = -41378177;

	t39 = ((x173-(x174&x175))==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MAX;
	int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MAX;
	volatile int8_t x180 = INT8_MAX;

	t40 = ((x177-(x178&x179))==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -1;
	static int32_t x182 = INT32_MIN;
	int32_t x184 = 1384;
	int32_t t41 = 29103;

	t41 = ((x181-(x182&x183))==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	volatile uint8_t x186 = 1U;
	uint32_t x187 = UINT32_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t42 = 84;

	t42 = ((x185-(x186&x187))==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = 1898247;
	uint16_t x191 = 1545U;
	uint64_t x192 = UINT64_MAX;
	int32_t t43 = -151690;

	t43 = ((x189-(x190&x191))==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x193 = 20219LL;
	int32_t x194 = INT32_MIN;
	int8_t x195 = 1;
	int16_t x196 = -1;
	int32_t t44 = 0;

	t44 = ((x193-(x194&x195))==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x197 = -42;
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = -26601108;
	volatile int32_t t45 = -63220992;

	t45 = ((x197-(x198&x199))==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x204 = INT32_MAX;
	int32_t t46 = 53;

	t46 = ((x201-(x202&x203))==x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x206 = -502;
	uint8_t x207 = UINT8_MAX;

	t47 = ((x205-(x206&x207))==x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -1714387833LL;
	int32_t x210 = 24968;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	int32_t t48 = 48;

	t48 = ((x209-(x210&x211))==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int64_t x214 = -6830166939047LL;
	int8_t x215 = -1;
	int64_t x216 = 20LL;
	volatile int32_t t49 = -928657;

	t49 = ((x213-(x214&x215))==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x217 = 335U;
	static int32_t x218 = INT32_MAX;
	int64_t x219 = 2LL;
	volatile int8_t x220 = -16;

	t50 = ((x217-(x218&x219))==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 597373290807LLU;
	volatile int32_t x222 = INT32_MIN;
	volatile int32_t t51 = -416043;

	t51 = ((x221-(x222&x223))==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	static int32_t x228 = INT32_MAX;
	int32_t t52 = -658994729;

	t52 = ((x225-(x226&x227))==x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = UINT8_MAX;
	static uint16_t x234 = UINT16_MAX;
	volatile uint32_t x235 = 633169568U;
	int16_t x236 = -7;
	static int32_t t53 = 0;

	t53 = ((x233-(x234&x235))==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -29508260846LL;
	int64_t x238 = INT64_MIN;
	volatile int32_t x240 = INT32_MIN;
	volatile int32_t t54 = 2;

	t54 = ((x237-(x238&x239))==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = UINT64_MAX;
	int64_t x242 = -1LL;
	int64_t x243 = -6420567751945LL;
	volatile int32_t t55 = 3850502;

	t55 = ((x241-(x242&x243))==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MIN;
	static uint16_t x247 = 189U;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t56 = 8;

	t56 = ((x245-(x246&x247))==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x250 = 239;
	static uint16_t x251 = UINT16_MAX;
	int32_t t57 = 2;

	t57 = ((x249-(x250&x251))==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 216420LLU;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -1;
	int32_t t58 = -343387;

	t58 = ((x253-(x254&x255))==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MAX;
	uint32_t x258 = UINT32_MAX;
	static int32_t t59 = 12824;

	t59 = ((x257-(x258&x259))==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x262 = 1U;
	uint16_t x263 = 29682U;
	volatile int16_t x264 = INT16_MIN;
	static volatile int32_t t60 = -571168;

	t60 = ((x261-(x262&x263))==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	int64_t x267 = 396LL;
	int32_t x268 = INT32_MIN;
	volatile int32_t t61 = 3;

	t61 = ((x265-(x266&x267))==x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	static int16_t x270 = INT16_MIN;
	volatile int16_t x271 = 3505;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t62 = -608951;

	t62 = ((x269-(x270&x271))==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x273 = 12114269LLU;
	int8_t x275 = INT8_MIN;
	int32_t x276 = -20516390;
	static int32_t t63 = -11271644;

	t63 = ((x273-(x274&x275))==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x281 = -22;
	int8_t x282 = INT8_MIN;
	volatile uint8_t x283 = 5U;
	volatile uint32_t x284 = 5742U;
	int32_t t64 = -18226;

	t64 = ((x281-(x282&x283))==x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x285 = -149;
	int16_t x286 = 178;
	volatile int32_t t65 = -74528137;

	t65 = ((x285-(x286&x287))==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x289 = INT8_MAX;
	uint32_t x290 = 172259997U;
	int16_t x291 = 8;
	int16_t x292 = 578;
	volatile int32_t t66 = -881698;

	t66 = ((x289-(x290&x291))==x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x293 = UINT64_MAX;
	int8_t x296 = INT8_MAX;
	int32_t t67 = 57;

	t67 = ((x293-(x294&x295))==x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = -1;
	static int16_t x298 = INT16_MIN;
	static int16_t x300 = INT16_MIN;
	int32_t t68 = 127434194;

	t68 = ((x297-(x298&x299))==x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x301 = INT8_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile uint16_t x304 = 18U;
	int32_t t69 = -110561825;

	t69 = ((x301-(x302&x303))==x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = 358847LLU;
	volatile int64_t x306 = 407647LL;
	int8_t x307 = INT8_MAX;
	int32_t x308 = -3379;
	int32_t t70 = 777861120;

	t70 = ((x305-(x306&x307))==x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	static uint64_t x315 = 665LLU;
	static int8_t x316 = -59;
	int32_t t71 = -20138;

	t71 = ((x313-(x314&x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x318 = INT64_MIN;
	int64_t x319 = 2400313565LL;
	static volatile uint16_t x320 = 25299U;
	volatile int32_t t72 = -1913272;

	t72 = ((x317-(x318&x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = -1;
	volatile int32_t x322 = INT32_MAX;
	static int64_t x323 = INT64_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t73 = 103;

	t73 = ((x321-(x322&x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = UINT64_MAX;
	static uint64_t x326 = 13804471315376LLU;
	int8_t x327 = INT8_MIN;
	static uint32_t x328 = UINT32_MAX;
	volatile int32_t t74 = 268;

	t74 = ((x325-(x326&x327))==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = 1799U;
	static int8_t x330 = INT8_MIN;

	t75 = ((x329-(x330&x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x333 = 32380U;
	int8_t x334 = 0;
	static uint32_t x335 = 640U;
	uint16_t x336 = 9914U;

	t76 = ((x333-(x334&x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = -57928;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 87LLU;

	t77 = ((x337-(x338&x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x342 = INT8_MIN;
	uint8_t x343 = 1U;
	int8_t x344 = -1;
	volatile int32_t t78 = 71440231;

	t78 = ((x341-(x342&x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x346 = 3;
	int32_t x347 = INT32_MAX;
	int8_t x348 = INT8_MAX;
	int32_t t79 = 26;

	t79 = ((x345-(x346&x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x352 = -1;

	t80 = ((x349-(x350&x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x355 = 30U;
	static uint16_t x356 = UINT16_MAX;
	int32_t t81 = -5930787;

	t81 = ((x353-(x354&x355))==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = 182497826LLU;
	uint64_t x359 = UINT64_MAX;
	volatile int32_t t82 = 75728258;

	t82 = ((x357-(x358&x359))==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MAX;
	int16_t x362 = INT16_MAX;
	static int8_t x363 = 0;
	int8_t x364 = INT8_MAX;
	int32_t t83 = 502850461;

	t83 = ((x361-(x362&x363))==x364);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x365 = INT16_MIN;
	int8_t x368 = -1;
	static volatile int32_t t84 = -13540;

	t84 = ((x365-(x366&x367))==x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x375 = -3094449523811017LL;
	int8_t x376 = INT8_MIN;
	int32_t t85 = -15532083;

	t85 = ((x373-(x374&x375))==x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x378 = INT8_MIN;
	int32_t x380 = INT32_MIN;
	int32_t t86 = 11;

	t86 = ((x377-(x378&x379))==x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x381 = 68877;
	static uint16_t x383 = UINT16_MAX;
	static volatile int8_t x384 = -22;
	int32_t t87 = -197062115;

	t87 = ((x381-(x382&x383))==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x386 = INT64_MAX;
	int8_t x387 = -1;
	static volatile int32_t x388 = -22839;
	int32_t t88 = -172436933;

	t88 = ((x385-(x386&x387))==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x389 = -11;
	volatile uint64_t x390 = 533236325LLU;
	uint8_t x391 = UINT8_MAX;
	static uint32_t x392 = 30U;
	int32_t t89 = -758659644;

	t89 = ((x389-(x390&x391))==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x393 = -1762;
	int16_t x394 = -80;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = 138;
	static int32_t t90 = 1739;

	t90 = ((x393-(x394&x395))==x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x397 = 0U;
	uint64_t x398 = UINT64_MAX;
	uint16_t x399 = UINT16_MAX;
	volatile int32_t t91 = -11243;

	t91 = ((x397-(x398&x399))==x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = 420U;
	uint32_t x402 = 26U;
	uint32_t x403 = UINT32_MAX;
	volatile int32_t t92 = -4641952;

	t92 = ((x401-(x402&x403))==x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x405 = 61050517;
	int16_t x406 = INT16_MAX;
	volatile int64_t x407 = INT64_MAX;
	uint8_t x408 = 47U;
	int32_t t93 = 2267;

	t93 = ((x405-(x406&x407))==x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x409 = INT64_MIN;
	int64_t x410 = INT64_MIN;
	volatile int32_t t94 = -11992;

	t94 = ((x409-(x410&x411))==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x413 = 75;
	uint32_t x416 = UINT32_MAX;

	t95 = ((x413-(x414&x415))==x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = -1;
	uint8_t x418 = 7U;
	static uint8_t x419 = 16U;
	int64_t x420 = -98967LL;
	int32_t t96 = -62;

	t96 = ((x417-(x418&x419))==x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = -608972720667939386LL;
	int16_t x422 = -25;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t97 = 6495735;

	t97 = ((x421-(x422&x423))==x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x426 = 13U;
	int32_t x427 = INT32_MAX;
	int64_t x428 = -1LL;
	int32_t t98 = -212940952;

	t98 = ((x425-(x426&x427))==x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x429 = UINT8_MAX;
	volatile int32_t x430 = INT32_MIN;
	int8_t x432 = INT8_MAX;
	volatile int32_t t99 = 65592504;

	t99 = ((x429-(x430&x431))==x432);

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

