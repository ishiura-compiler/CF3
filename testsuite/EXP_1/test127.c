#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -5;
uint16_t x6 = 491U;
int32_t t1 = -565784465;
uint32_t x10 = 875897506U;
volatile uint8_t x13 = 47U;
static uint32_t x16 = 13234635U;
volatile uint8_t x23 = 21U;
int64_t x24 = 92281285699895796LL;
static int32_t t8 = -6241142;
static int64_t x44 = 21464138LL;
volatile int32_t x46 = -1;
volatile int8_t x48 = 0;
static volatile uint16_t x49 = 29U;
int8_t x54 = 1;
int32_t x55 = INT32_MIN;
int8_t x59 = INT8_MIN;
int16_t x61 = INT16_MIN;
int32_t t14 = 30926;
int16_t x70 = INT16_MAX;
int32_t x72 = 123185;
uint16_t x80 = 94U;
uint64_t x81 = UINT64_MAX;
uint8_t x89 = 26U;
int32_t t21 = -58436603;
int16_t x97 = 384;
volatile uint64_t x98 = 1259861LLU;
int16_t x99 = -1;
uint8_t x103 = UINT8_MAX;
uint8_t x104 = UINT8_MAX;
static int64_t x108 = 36524LL;
uint16_t x111 = 3U;
volatile int32_t t25 = 2965;
static uint8_t x126 = UINT8_MAX;
uint8_t x132 = 36U;
int32_t t29 = 77505306;
volatile uint8_t x134 = UINT8_MAX;
int8_t x138 = INT8_MIN;
int16_t x140 = -12;
uint64_t x144 = UINT64_MAX;
volatile int64_t x148 = INT64_MIN;
int8_t x156 = -1;
volatile int32_t t35 = -1;
static volatile int64_t x159 = INT64_MIN;
int8_t x161 = 0;
int64_t x162 = INT64_MAX;
int32_t x164 = INT32_MAX;
int32_t t37 = -360743;
uint8_t x166 = 5U;
static int32_t t40 = -1;
int16_t x180 = -1;
int32_t t41 = 60;
uint16_t x184 = 566U;
int32_t t42 = -406851;
static uint8_t x189 = 1U;
int16_t x193 = 0;
int64_t x195 = -1LL;
static volatile uint16_t x206 = 228U;
static int32_t x212 = INT32_MIN;
volatile int8_t x217 = INT8_MIN;
static uint16_t x225 = UINT16_MAX;
int64_t x233 = -1LL;
int16_t x237 = -146;
int8_t x245 = INT8_MIN;
uint32_t x247 = 13347490U;
static volatile int64_t x254 = -3811209LL;
int64_t x256 = -1LL;
static uint64_t x262 = 772059963LLU;
int32_t x264 = INT32_MAX;
int32_t x268 = INT32_MAX;
volatile int32_t t59 = -29010347;
uint8_t x272 = 0U;
volatile int32_t t60 = -252918;
volatile int32_t t61 = -3;
int32_t x277 = -1;
uint64_t x280 = 96414899146LLU;
int16_t x284 = 4;
static int32_t x286 = INT32_MIN;
uint64_t x288 = 1LLU;
int16_t x289 = 53;
volatile int32_t t65 = 1552745;
uint32_t x294 = 133452767U;
static int32_t x301 = -1;
int8_t x308 = INT8_MIN;
static int8_t x309 = -1;
static uint64_t x310 = 92979028LLU;
int32_t t70 = 983089898;
uint32_t x316 = UINT32_MAX;
volatile int32_t t71 = -81459;
uint8_t x321 = 17U;
volatile uint16_t x322 = 4U;
int16_t x323 = -1;
int8_t x330 = INT8_MAX;
static int32_t x331 = INT32_MAX;
uint8_t x333 = 65U;
static uint8_t x334 = UINT8_MAX;
uint16_t x337 = UINT16_MAX;
volatile uint16_t x339 = 22111U;
int32_t t77 = 843955;
volatile int64_t x347 = 4333380853800657599LL;
uint16_t x348 = 97U;
static int32_t t79 = 9839839;
uint32_t x355 = 201716U;
volatile int8_t x361 = INT8_MIN;
int32_t x363 = -54;
int32_t t82 = -400960116;
static volatile uint64_t x370 = 245917705452LLU;
static uint8_t x371 = 6U;
static int32_t t87 = 4;
volatile int16_t x393 = 2444;
int8_t x396 = -1;
static int64_t x402 = -1LL;
uint16_t x404 = 454U;
volatile int32_t t89 = -1;
int16_t x407 = INT16_MIN;
static int32_t t90 = -68981250;
volatile int32_t x415 = INT32_MIN;
volatile int32_t t93 = -12;
volatile int64_t x433 = -80153503101395LL;
uint8_t x438 = 1U;
volatile int32_t t98 = -229;


void f0(void) {
	volatile int16_t x1 = -1;
	uint64_t x3 = 211630766444899LLU;
	static uint32_t x4 = 1214382562U;
	int32_t t0 = 293422634;

	t0 = (((x1+x2)<=x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 24649898454835LLU;
	int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MIN;

	t1 = (((x5+x6)<=x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int32_t x11 = INT32_MIN;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 21099;

	t2 = (((x9+x10)<=x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 1U;
	static int8_t x15 = -1;
	int32_t t3 = 0;

	t3 = (((x13+x14)<=x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 5;
	uint64_t x22 = 20230LLU;
	static int32_t t4 = 13217443;

	t4 = (((x21+x22)<=x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	volatile int8_t x26 = INT8_MAX;
	static int8_t x27 = 18;
	static int64_t x28 = INT64_MIN;
	volatile int32_t t5 = 530602771;

	t5 = (((x25+x26)<=x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 2;
	uint16_t x30 = 31U;
	int64_t x31 = 27457268341030812LL;
	uint8_t x32 = 3U;
	volatile int32_t t6 = -12;

	t6 = (((x29+x30)<=x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	static int32_t t7 = 184738777;

	t7 = (((x33+x34)<=x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 8;
	int32_t x38 = -325337;
	uint8_t x39 = UINT8_MAX;
	static volatile int16_t x40 = -1;

	t8 = (((x37+x38)<=x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 1;
	uint32_t x42 = 28U;
	int64_t x43 = INT64_MIN;
	static volatile int32_t t9 = 39;

	t9 = (((x41+x42)<=x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x45 = -19LL;
	int16_t x47 = 2017;
	volatile int32_t t10 = 877808019;

	t10 = (((x45+x46)<=x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = INT16_MIN;
	static int32_t x51 = INT32_MIN;
	int16_t x52 = -1;
	int32_t t11 = 0;

	t11 = (((x49+x50)<=x51)<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -3969;
	uint64_t x56 = 1166457582895472LLU;
	volatile int32_t t12 = 18;

	t12 = (((x53+x54)<=x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	volatile int16_t x58 = INT16_MAX;
	uint8_t x60 = 24U;
	volatile int32_t t13 = 0;

	t13 = (((x57+x58)<=x59)<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x62 = UINT16_MAX;
	volatile uint16_t x63 = 7401U;
	uint32_t x64 = 697949997U;

	t14 = (((x61+x62)<=x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MAX;
	static int8_t x66 = INT8_MAX;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = 227508418LL;
	volatile int32_t t15 = -2;

	t15 = (((x65+x66)<=x67)<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	int32_t x71 = INT32_MIN;
	volatile int32_t t16 = -172801280;

	t16 = (((x69+x70)<=x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = -146644;
	int8_t x78 = INT8_MIN;
	int16_t x79 = -1;
	int32_t t17 = 3;

	t17 = (((x77+x78)<=x79)<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x82 = -2;
	int64_t x83 = -1LL;
	volatile int16_t x84 = -49;
	volatile int32_t t18 = 109694;

	t18 = (((x81+x82)<=x83)<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	static volatile int16_t x86 = INT16_MIN;
	int8_t x87 = -1;
	int8_t x88 = INT8_MAX;
	volatile int32_t t19 = -378552507;

	t19 = (((x85+x86)<=x87)<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = INT16_MAX;
	uint32_t x91 = 205920U;
	int16_t x92 = INT16_MAX;
	volatile int32_t t20 = 10627;

	t20 = (((x89+x90)<=x91)<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	uint32_t x94 = 16U;
	int32_t x95 = INT32_MAX;
	uint8_t x96 = 2U;

	t21 = (((x93+x94)<=x95)<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x100 = -1;
	volatile int32_t t22 = -2047;

	t22 = (((x97+x98)<=x99)<=x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	static volatile uint16_t x102 = 147U;
	int32_t t23 = 7563361;

	t23 = (((x101+x102)<=x103)<=x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = 1756506549524LLU;
	int8_t x107 = INT8_MAX;
	int32_t t24 = -1;

	t24 = (((x105+x106)<=x107)<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 26;
	uint32_t x110 = 12727508U;
	volatile int16_t x112 = INT16_MIN;

	t25 = (((x109+x110)<=x111)<=x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x113 = UINT16_MAX;
	int64_t x114 = -1LL;
	static int8_t x115 = INT8_MAX;
	uint64_t x116 = 1940380040LLU;
	int32_t t26 = -232877683;

	t26 = (((x113+x114)<=x115)<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = 26;
	uint32_t x122 = 123074657U;
	int32_t x123 = -462;
	uint16_t x124 = UINT16_MAX;
	static volatile int32_t t27 = 502769;

	t27 = (((x121+x122)<=x123)<=x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = 12516194267219LL;
	uint16_t x127 = 4U;
	uint64_t x128 = UINT64_MAX;
	int32_t t28 = 8353305;

	t28 = (((x125+x126)<=x127)<=x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MAX;

	t29 = (((x129+x130)<=x131)<=x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x133 = 1U;
	volatile int8_t x135 = INT8_MAX;
	int16_t x136 = 403;
	volatile int32_t t30 = -84644127;

	t30 = (((x133+x134)<=x135)<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = 13543;
	uint64_t x139 = 68743LLU;
	volatile int32_t t31 = 46;

	t31 = (((x137+x138)<=x139)<=x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -1954596;
	int16_t x142 = INT16_MIN;
	volatile int16_t x143 = 1;
	volatile int32_t t32 = 999600320;

	t32 = (((x141+x142)<=x143)<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MAX;
	int32_t x146 = INT32_MIN;
	uint32_t x147 = 483U;
	int32_t t33 = -13;

	t33 = (((x145+x146)<=x147)<=x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x149 = 637273485U;
	int16_t x150 = INT16_MIN;
	static int64_t x151 = 1113204452536965LL;
	int8_t x152 = INT8_MIN;
	volatile int32_t t34 = -244;

	t34 = (((x149+x150)<=x151)<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 2U;
	int64_t x154 = 67017290136082LL;
	uint64_t x155 = 71484388861LLU;

	t35 = (((x153+x154)<=x155)<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MAX;
	int8_t x158 = INT8_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t36 = 3;

	t36 = (((x157+x158)<=x159)<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x163 = UINT16_MAX;

	t37 = (((x161+x162)<=x163)<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = 12;
	static volatile int8_t x167 = INT8_MIN;
	volatile int64_t x168 = -3699153LL;
	volatile int32_t t38 = 5;

	t38 = (((x165+x166)<=x167)<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int16_t x170 = INT16_MIN;
	int64_t x171 = -2LL;
	int8_t x172 = -1;
	static int32_t t39 = 4;

	t39 = (((x169+x170)<=x171)<=x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x173 = UINT16_MAX;
	volatile int16_t x174 = 2022;
	static uint8_t x175 = 23U;
	volatile int8_t x176 = -1;

	t40 = (((x173+x174)<=x175)<=x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	static volatile int64_t x179 = -1LL;

	t41 = (((x177+x178)<=x179)<=x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = 409;
	volatile int8_t x182 = -1;
	volatile uint8_t x183 = 25U;

	t42 = (((x181+x182)<=x183)<=x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x190 = UINT8_MAX;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t43 = -1212194;

	t43 = (((x189+x190)<=x191)<=x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x194 = INT32_MAX;
	int32_t x196 = -1;
	int32_t t44 = 370740448;

	t44 = (((x193+x194)<=x195)<=x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = -1;
	volatile int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t45 = 8;

	t45 = (((x197+x198)<=x199)<=x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1LL;
	uint8_t x207 = 6U;
	int16_t x208 = 16300;
	int32_t t46 = -40348909;

	t46 = (((x205+x206)<=x207)<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = INT8_MAX;
	uint16_t x210 = 7934U;
	static uint32_t x211 = 35U;
	volatile int32_t t47 = -391;

	t47 = (((x209+x210)<=x211)<=x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x218 = 1408U;
	uint16_t x219 = UINT16_MAX;
	int64_t x220 = 13524126455108LL;
	static volatile int32_t t48 = 32504;

	t48 = (((x217+x218)<=x219)<=x220);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x221 = 1;
	int32_t x222 = -218;
	int16_t x223 = 98;
	int8_t x224 = -1;
	int32_t t49 = -231632716;

	t49 = (((x221+x222)<=x223)<=x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x226 = UINT64_MAX;
	int32_t x227 = INT32_MIN;
	volatile uint32_t x228 = UINT32_MAX;
	volatile int32_t t50 = -363324903;

	t50 = (((x225+x226)<=x227)<=x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x229 = 337009554U;
	int32_t x230 = -6768912;
	int32_t x231 = -2;
	volatile int32_t x232 = INT32_MIN;
	int32_t t51 = 3259425;

	t51 = (((x229+x230)<=x231)<=x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = -1852041285756522633LL;
	int8_t x236 = -14;
	static volatile int32_t t52 = -14;

	t52 = (((x233+x234)<=x235)<=x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x238 = 10LLU;
	int16_t x239 = -1;
	int8_t x240 = -1;
	volatile int32_t t53 = -1901579;

	t53 = (((x237+x238)<=x239)<=x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x246 = 12770U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t54 = -61950611;

	t54 = (((x245+x246)<=x247)<=x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = 292197196LLU;
	int32_t x250 = 1477065;
	int8_t x251 = INT8_MAX;
	static int64_t x252 = -14441543680LL;
	int32_t t55 = 248;

	t55 = (((x249+x250)<=x251)<=x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x253 = 2;
	int32_t x255 = 390846;
	int32_t t56 = -110;

	t56 = (((x253+x254)<=x255)<=x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = UINT16_MAX;
	uint64_t x258 = 395438335808627927LLU;
	static int32_t x259 = INT32_MIN;
	volatile uint16_t x260 = 3173U;
	int32_t t57 = -1;

	t57 = (((x257+x258)<=x259)<=x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x261 = 2;
	static int64_t x263 = -7124298018LL;
	static volatile int32_t t58 = -714982;

	t58 = (((x261+x262)<=x263)<=x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = 4;
	volatile int8_t x266 = INT8_MIN;
	uint32_t x267 = UINT32_MAX;

	t59 = (((x265+x266)<=x267)<=x268);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = 15U;
	volatile uint32_t x270 = 110U;
	uint32_t x271 = 6U;

	t60 = (((x269+x270)<=x271)<=x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = UINT16_MAX;
	uint64_t x274 = 11854367878LLU;
	volatile uint32_t x275 = 3U;
	int16_t x276 = -1;

	t61 = (((x273+x274)<=x275)<=x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x278 = INT8_MIN;
	static volatile int64_t x279 = INT64_MIN;
	volatile int32_t t62 = -242358;

	t62 = (((x277+x278)<=x279)<=x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x281 = 3147U;
	uint8_t x282 = 101U;
	int16_t x283 = INT16_MIN;
	volatile int32_t t63 = -2;

	t63 = (((x281+x282)<=x283)<=x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 1U;
	int64_t x287 = INT64_MIN;
	volatile int32_t t64 = -272499983;

	t64 = (((x285+x286)<=x287)<=x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	static volatile int32_t x292 = 1394;

	t65 = (((x289+x290)<=x291)<=x292);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MAX;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MIN;
	int32_t t66 = 1550672;

	t66 = (((x293+x294)<=x295)<=x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = -1LL;
	volatile int16_t x298 = INT16_MIN;
	volatile int32_t x299 = INT32_MAX;
	static uint16_t x300 = 36U;
	static int32_t t67 = -46;

	t67 = (((x297+x298)<=x299)<=x300);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x302 = INT8_MAX;
	static int64_t x303 = INT64_MIN;
	int32_t x304 = -1;
	volatile int32_t t68 = 17;

	t68 = (((x301+x302)<=x303)<=x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = -255567583;
	uint64_t x306 = 17519234703714LLU;
	int32_t x307 = INT32_MAX;
	volatile int32_t t69 = -64271;

	t69 = (((x305+x306)<=x307)<=x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;

	t70 = (((x309+x310)<=x311)<=x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x313 = -1;
	uint8_t x314 = 1U;
	uint64_t x315 = UINT64_MAX;

	t71 = (((x313+x314)<=x315)<=x316);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x317 = -1;
	uint32_t x318 = UINT32_MAX;
	int8_t x319 = 1;
	int64_t x320 = -1LL;
	volatile int32_t t72 = 2;

	t72 = (((x317+x318)<=x319)<=x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x324 = INT8_MIN;
	volatile int32_t t73 = -19571858;

	t73 = (((x321+x322)<=x323)<=x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x325 = 6214173;
	int32_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	volatile int32_t t74 = -2649;

	t74 = (((x325+x326)<=x327)<=x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = INT64_MIN;
	int32_t x332 = INT32_MIN;
	static int32_t t75 = 12918;

	t75 = (((x329+x330)<=x331)<=x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x335 = INT64_MAX;
	int64_t x336 = -95044221347LL;
	volatile int32_t t76 = -396555742;

	t76 = (((x333+x334)<=x335)<=x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x338 = -1089345712611LL;
	static volatile uint16_t x340 = 71U;

	t77 = (((x337+x338)<=x339)<=x340);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x346 = -1LL;
	int32_t t78 = 18213235;

	t78 = (((x345+x346)<=x347)<=x348);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = -143280712810548997LL;
	uint8_t x350 = 8U;
	static uint16_t x351 = 12U;
	int64_t x352 = INT64_MAX;

	t79 = (((x349+x350)<=x351)<=x352);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = INT8_MAX;
	int32_t x354 = INT32_MIN;
	volatile int64_t x356 = -32411081LL;
	int32_t t80 = -584598786;

	t80 = (((x353+x354)<=x355)<=x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x357 = -2;
	volatile int64_t x358 = -18157520998892LL;
	int32_t x359 = 1489;
	volatile int8_t x360 = 4;
	int32_t t81 = 240751;

	t81 = (((x357+x358)<=x359)<=x360);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x362 = UINT8_MAX;
	uint32_t x364 = 180U;

	t82 = (((x361+x362)<=x363)<=x364);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x369 = UINT32_MAX;
	uint16_t x372 = UINT16_MAX;
	int32_t t83 = -172;

	t83 = (((x369+x370)<=x371)<=x372);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = 12101U;
	int8_t x374 = INT8_MIN;
	int32_t x375 = -1;
	int16_t x376 = -1;
	volatile int32_t t84 = 7935;

	t84 = (((x373+x374)<=x375)<=x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = 10;
	static volatile int16_t x382 = 1382;
	int32_t x383 = -1;
	uint32_t x384 = 224445U;
	volatile int32_t t85 = -43550879;

	t85 = (((x381+x382)<=x383)<=x384);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x385 = 27U;
	uint8_t x386 = UINT8_MAX;
	volatile int32_t x387 = INT32_MIN;
	int16_t x388 = 0;
	int32_t t86 = 343288765;

	t86 = (((x385+x386)<=x387)<=x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x389 = 16938921746838LLU;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MAX;
	static volatile uint8_t x392 = UINT8_MAX;

	t87 = (((x389+x390)<=x391)<=x392);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x394 = INT64_MIN;
	volatile int32_t x395 = -1;
	int32_t t88 = -1054;

	t88 = (((x393+x394)<=x395)<=x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = INT8_MIN;
	static int8_t x403 = INT8_MAX;

	t89 = (((x401+x402)<=x403)<=x404);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = 1111301;
	int16_t x406 = INT16_MIN;
	int64_t x408 = INT64_MIN;

	t90 = (((x405+x406)<=x407)<=x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = -1LL;
	uint64_t x410 = 9546555164LLU;
	volatile uint64_t x411 = 826413LLU;
	uint8_t x412 = UINT8_MAX;
	static int32_t t91 = 58;

	t91 = (((x409+x410)<=x411)<=x412);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x413 = 215954574760LLU;
	static int8_t x414 = -1;
	static uint64_t x416 = UINT64_MAX;
	int32_t t92 = 1;

	t92 = (((x413+x414)<=x415)<=x416);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x417 = INT32_MAX;
	int8_t x418 = -63;
	int32_t x419 = INT32_MIN;
	volatile int64_t x420 = INT64_MIN;

	t93 = (((x417+x418)<=x419)<=x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x421 = INT8_MAX;
	uint8_t x422 = 7U;
	static uint64_t x423 = UINT64_MAX;
	uint16_t x424 = UINT16_MAX;
	int32_t t94 = 4;

	t94 = (((x421+x422)<=x423)<=x424);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = INT8_MIN;
	uint32_t x426 = 6U;
	uint64_t x427 = 1LLU;
	uint64_t x428 = UINT64_MAX;
	volatile int32_t t95 = -1;

	t95 = (((x425+x426)<=x427)<=x428);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = -1;
	static int16_t x430 = -1;
	static volatile int16_t x431 = INT16_MIN;
	int16_t x432 = 163;
	int32_t t96 = -200;

	t96 = (((x429+x430)<=x431)<=x432);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x434 = INT64_MAX;
	int64_t x435 = INT64_MIN;
	uint16_t x436 = 3U;
	volatile int32_t t97 = 12;

	t97 = (((x433+x434)<=x435)<=x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x437 = INT8_MAX;
	static uint16_t x439 = UINT16_MAX;
	uint32_t x440 = UINT32_MAX;

	t98 = (((x437+x438)<=x439)<=x440);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x449 = 1762797LLU;
	volatile int8_t x450 = -1;
	int16_t x451 = -1;
	int32_t x452 = -3160;
	volatile int32_t t99 = 3206;

	t99 = (((x449+x450)<=x451)<=x452);

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

