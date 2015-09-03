#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x27 = 23639649826212LLU;
uint64_t x36 = 68LLU;
uint8_t x38 = UINT8_MAX;
volatile int16_t x39 = 11555;
int16_t x41 = INT16_MIN;
volatile uint8_t x42 = 104U;
static volatile int32_t t7 = -64796;
int16_t x50 = INT16_MAX;
uint32_t x51 = 975990U;
uint64_t x52 = 202230LLU;
static uint8_t x54 = 87U;
uint64_t x57 = 1036162LLU;
static uint16_t x59 = 8553U;
static volatile uint32_t x61 = UINT32_MAX;
int32_t t12 = -672;
uint64_t x75 = UINT64_MAX;
static volatile int32_t x76 = -1;
int32_t x77 = 1676092;
int64_t x95 = -1LL;
static uint8_t x96 = 0U;
int16_t x98 = INT16_MAX;
static volatile int8_t x99 = INT8_MIN;
uint16_t x107 = 23771U;
static uint32_t x110 = UINT32_MAX;
volatile int32_t x112 = INT32_MIN;
int32_t t25 = 106766090;
int32_t x119 = INT32_MAX;
volatile int32_t x129 = INT32_MIN;
int16_t x136 = INT16_MIN;
int32_t x139 = INT32_MIN;
volatile int32_t x145 = 6928897;
int64_t x147 = 27870993848709275LL;
int8_t x152 = INT8_MIN;
volatile uint64_t x160 = 15981034007125466LLU;
int32_t t35 = -151;
static uint32_t x167 = UINT32_MAX;
uint64_t x172 = UINT64_MAX;
static int32_t x181 = INT32_MIN;
int32_t t40 = -7;
static uint64_t x187 = 606634961965830LLU;
int32_t t42 = -388849861;
int32_t t43 = 59376;
int64_t x199 = INT64_MIN;
int32_t t44 = 1524;
uint16_t x204 = UINT16_MAX;
int32_t x205 = 1;
static int64_t x206 = INT64_MIN;
static int16_t x219 = -6;
int32_t t53 = -115;
int64_t x237 = INT64_MIN;
volatile int8_t x238 = -1;
static uint32_t x240 = UINT32_MAX;
static uint16_t x244 = 6U;
uint32_t x247 = UINT32_MAX;
uint64_t x248 = UINT64_MAX;
int8_t x255 = INT8_MIN;
int8_t x262 = 0;
static volatile int8_t x265 = INT8_MAX;
static int32_t x266 = -1;
int8_t x267 = -1;
static int32_t t61 = -539639;
static uint16_t x272 = 2U;
static int32_t t64 = 33004617;
volatile uint32_t x283 = UINT32_MAX;
int32_t t65 = -41653;
int64_t x295 = -1LL;
int32_t x300 = INT32_MIN;
uint8_t x318 = UINT8_MAX;
volatile int32_t t74 = -1;
volatile int16_t x326 = 0;
uint32_t x328 = UINT32_MAX;
static uint8_t x338 = 2U;
uint64_t x354 = UINT64_MAX;
uint64_t x360 = 958LLU;
volatile int8_t x363 = INT8_MAX;
uint8_t x364 = 2U;
static volatile int32_t t83 = 0;
uint32_t x368 = 86403601U;
int64_t x372 = 53628674LL;
int16_t x383 = -3148;
int32_t t89 = 322286;
volatile int16_t x389 = -1;
int32_t x398 = INT32_MIN;
int64_t x403 = INT64_MIN;
int16_t x406 = -1;
int32_t x408 = INT32_MIN;
int16_t x415 = INT16_MAX;
int64_t x418 = INT64_MAX;
static uint8_t x421 = UINT8_MAX;
uint64_t x422 = UINT64_MAX;
int32_t x424 = INT32_MIN;
int8_t x425 = 7;
int16_t x432 = -1;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	uint32_t x2 = 8945U;
	static uint64_t x3 = UINT64_MAX;
	int64_t x4 = 7619LL;
	volatile int32_t t0 = 1978;

	t0 = ((x1&(x2/x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 90810U;
	uint32_t x6 = 9634U;
	int64_t x7 = -5848972105371030LL;
	int64_t x8 = 4219617LL;
	static int32_t t1 = -76731751;

	t1 = ((x5&(x6/x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 670U;
	int32_t x14 = INT32_MIN;
	static volatile int32_t x15 = 604096;
	uint32_t x16 = 2U;
	static int32_t t2 = 3751308;

	t2 = ((x13&(x14/x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x25 = 3LLU;
	int64_t x26 = INT64_MIN;
	uint16_t x28 = 62U;
	volatile int32_t t3 = -23985041;

	t3 = ((x25&(x26/x27))<x28);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x29 = INT32_MAX;
	int8_t x30 = -1;
	int8_t x31 = 1;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t4 = -25327;

	t4 = ((x29&(x30/x31))<x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MAX;
	uint16_t x34 = 6906U;
	static uint64_t x35 = UINT64_MAX;
	int32_t t5 = 63266;

	t5 = ((x33&(x34/x35))<x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x37 = INT8_MIN;
	static int64_t x40 = INT64_MAX;
	static volatile int32_t t6 = -29;

	t6 = ((x37&(x38/x39))<x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x43 = -1;
	volatile int8_t x44 = -18;

	t7 = ((x41&(x42/x43))<x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 15001438U;
	volatile int32_t x46 = INT32_MIN;
	volatile uint32_t x47 = 346531360U;
	static uint64_t x48 = UINT64_MAX;
	int32_t t8 = -9065096;

	t8 = ((x45&(x46/x47))<x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 60803799U;
	static volatile int32_t t9 = -780733;

	t9 = ((x49&(x50/x51))<x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	int16_t x55 = 421;
	uint8_t x56 = 120U;
	static volatile int32_t t10 = -909;

	t10 = ((x53&(x54/x55))<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x58 = INT8_MIN;
	volatile int32_t x60 = -1;
	static volatile int32_t t11 = 60513174;

	t11 = ((x57&(x58/x59))<x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x62 = INT8_MIN;
	int16_t x63 = -1;
	int8_t x64 = -1;

	t12 = ((x61&(x62/x63))<x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = UINT16_MAX;
	uint64_t x66 = 267610529456641LLU;
	int8_t x67 = -1;
	static int16_t x68 = INT16_MIN;
	int32_t t13 = -432903;

	t13 = ((x65&(x66/x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = -1346;
	uint8_t x71 = UINT8_MAX;
	uint64_t x72 = 1804226442758497LLU;
	volatile int32_t t14 = 38875;

	t14 = ((x69&(x70/x71))<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MAX;
	uint16_t x74 = 15441U;
	int32_t t15 = 14861;

	t15 = ((x73&(x74/x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x78 = UINT16_MAX;
	uint64_t x79 = 1856439817388LLU;
	volatile uint8_t x80 = 7U;
	int32_t t16 = 31;

	t16 = ((x77&(x78/x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1LL;
	uint64_t x82 = UINT64_MAX;
	static int64_t x83 = INT64_MAX;
	volatile int8_t x84 = INT8_MAX;
	volatile int32_t t17 = 3;

	t17 = ((x81&(x82/x83))<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x85 = 9294782464946LLU;
	uint32_t x86 = UINT32_MAX;
	int16_t x87 = INT16_MIN;
	static int32_t x88 = INT32_MIN;
	int32_t t18 = 60837349;

	t18 = ((x85&(x86/x87))<x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = 0LL;
	int64_t x91 = INT64_MAX;
	static int16_t x92 = -1;
	int32_t t19 = 88;

	t19 = ((x89&(x90/x91))<x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	int64_t x94 = INT64_MAX;
	volatile int32_t t20 = 191712;

	t20 = ((x93&(x94/x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = 15636;
	uint64_t x100 = 12486702607LLU;
	volatile int32_t t21 = -8915455;

	t21 = ((x97&(x98/x99))<x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = UINT64_MAX;
	int8_t x104 = 1;
	int32_t t22 = -3629;

	t22 = ((x101&(x102/x103))<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x105 = 3350U;
	volatile int8_t x106 = -1;
	uint8_t x108 = 3U;
	int32_t t23 = 150440;

	t23 = ((x105&(x106/x107))<x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = 2921;
	int16_t x111 = -352;
	static volatile int32_t t24 = 348130;

	t24 = ((x109&(x110/x111))<x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	static int64_t x114 = INT64_MIN;
	static uint8_t x115 = 6U;
	int64_t x116 = -1LL;

	t25 = ((x113&(x114/x115))<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MIN;
	static int16_t x118 = INT16_MAX;
	int8_t x120 = -1;
	volatile int32_t t26 = 220292;

	t26 = ((x117&(x118/x119))<x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 2907953073969548845LLU;
	int64_t x122 = -1LL;
	int64_t x123 = INT64_MIN;
	uint16_t x124 = 12046U;
	int32_t t27 = -958788423;

	t27 = ((x121&(x122/x123))<x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x125 = 368U;
	int8_t x126 = INT8_MIN;
	static int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MIN;
	static int32_t t28 = -2;

	t28 = ((x125&(x126/x127))<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x130 = INT16_MAX;
	static uint32_t x131 = 6505765U;
	int64_t x132 = -121LL;
	int32_t t29 = 51192173;

	t29 = ((x129&(x130/x131))<x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x133 = 50283LL;
	int16_t x134 = 366;
	volatile int8_t x135 = -1;
	volatile int32_t t30 = 2703;

	t30 = ((x133&(x134/x135))<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile uint16_t x138 = 10522U;
	static volatile int64_t x140 = INT64_MAX;
	int32_t t31 = -5144722;

	t31 = ((x137&(x138/x139))<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 266U;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	static int64_t x144 = INT64_MIN;
	static volatile int32_t t32 = -587784503;

	t32 = ((x141&(x142/x143))<x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x146 = 0;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t33 = 100761407;

	t33 = ((x145&(x146/x147))<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x149 = 88137989559124LLU;
	int32_t x150 = 7746;
	int16_t x151 = 140;
	volatile int32_t t34 = 2951;

	t34 = ((x149&(x150/x151))<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 6390U;
	static uint32_t x158 = 100167U;
	static int16_t x159 = INT16_MAX;

	t35 = ((x157&(x158/x159))<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x165 = INT32_MIN;
	static int16_t x166 = -205;
	int16_t x168 = INT16_MIN;
	int32_t t36 = -994225082;

	t36 = ((x165&(x166/x167))<x168);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 3U;
	volatile int32_t x170 = INT32_MIN;
	static volatile int64_t x171 = -1LL;
	volatile int32_t t37 = 220626065;

	t37 = ((x169&(x170/x171))<x172);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	static volatile int64_t x175 = INT64_MIN;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t38 = 2;

	t38 = ((x173&(x174/x175))<x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	volatile int16_t x178 = INT16_MIN;
	static int64_t x179 = INT64_MAX;
	static int16_t x180 = 8874;
	volatile int32_t t39 = -9985739;

	t39 = ((x177&(x178/x179))<x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x182 = -1;
	static int8_t x183 = INT8_MAX;
	volatile int16_t x184 = INT16_MIN;

	t40 = ((x181&(x182/x183))<x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 10U;
	int8_t x186 = 0;
	static volatile uint32_t x188 = UINT32_MAX;
	volatile int32_t t41 = 483944588;

	t41 = ((x185&(x186/x187))<x188);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	static int64_t x190 = 7102LL;
	int64_t x191 = -1LL;
	int64_t x192 = INT64_MAX;

	t42 = ((x189&(x190/x191))<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = 1;
	static int16_t x194 = INT16_MIN;
	volatile int16_t x195 = 8347;
	static uint16_t x196 = 27865U;

	t43 = ((x193&(x194/x195))<x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = -1;
	static uint64_t x200 = UINT64_MAX;

	t44 = ((x197&(x198/x199))<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x201 = 6U;
	int64_t x202 = INT64_MAX;
	uint64_t x203 = 16451237LLU;
	static volatile int32_t t45 = -26476333;

	t45 = ((x201&(x202/x203))<x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x207 = INT16_MIN;
	volatile uint32_t x208 = 5563009U;
	static volatile int32_t t46 = -71563;

	t46 = ((x205&(x206/x207))<x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x209 = INT64_MIN;
	static volatile int32_t x210 = INT32_MAX;
	static volatile uint8_t x211 = 127U;
	int8_t x212 = -11;
	int32_t t47 = -26688;

	t47 = ((x209&(x210/x211))<x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x213 = INT16_MIN;
	uint32_t x214 = 1332359U;
	int64_t x215 = INT64_MAX;
	uint64_t x216 = 153LLU;
	int32_t t48 = 460006781;

	t48 = ((x213&(x214/x215))<x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 3U;
	volatile int8_t x218 = INT8_MAX;
	static int32_t x220 = INT32_MIN;
	static int32_t t49 = -25520;

	t49 = ((x217&(x218/x219))<x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = -1;
	volatile int8_t x222 = 0;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MAX;
	int32_t t50 = -1855210;

	t50 = ((x221&(x222/x223))<x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x225 = UINT32_MAX;
	uint16_t x226 = 4530U;
	static volatile int16_t x227 = INT16_MAX;
	uint16_t x228 = 1734U;
	static volatile int32_t t51 = 9;

	t51 = ((x225&(x226/x227))<x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x229 = INT32_MIN;
	uint8_t x230 = 3U;
	uint64_t x231 = UINT64_MAX;
	uint32_t x232 = 632632222U;
	volatile int32_t t52 = -27024373;

	t52 = ((x229&(x230/x231))<x232);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = UINT8_MAX;
	uint64_t x234 = 218222233769667834LLU;
	int8_t x235 = 61;
	int64_t x236 = INT64_MIN;

	t53 = ((x233&(x234/x235))<x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x239 = 1U;
	static int32_t t54 = -132;

	t54 = ((x237&(x238/x239))<x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	uint16_t x242 = UINT16_MAX;
	int16_t x243 = INT16_MIN;
	int32_t t55 = -23713731;

	t55 = ((x241&(x242/x243))<x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x245 = INT32_MIN;
	static int8_t x246 = INT8_MIN;
	volatile int32_t t56 = -437;

	t56 = ((x245&(x246/x247))<x248);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = -49447845;
	int64_t x250 = INT64_MIN;
	uint64_t x251 = 3171677432LLU;
	int8_t x252 = 1;
	volatile int32_t t57 = 82;

	t57 = ((x249&(x250/x251))<x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 10LLU;
	volatile int16_t x254 = INT16_MIN;
	uint64_t x256 = UINT64_MAX;
	int32_t t58 = -1;

	t58 = ((x253&(x254/x255))<x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x257 = UINT8_MAX;
	static int32_t x258 = 30408539;
	volatile uint64_t x259 = 2LLU;
	volatile uint16_t x260 = 1U;
	static int32_t t59 = -1;

	t59 = ((x257&(x258/x259))<x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x261 = -1;
	uint64_t x263 = UINT64_MAX;
	volatile int16_t x264 = INT16_MIN;
	int32_t t60 = 7702142;

	t60 = ((x261&(x262/x263))<x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x268 = UINT64_MAX;

	t61 = ((x265&(x266/x267))<x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = -1;
	int64_t x270 = INT64_MIN;
	uint64_t x271 = UINT64_MAX;
	static int32_t t62 = 68520;

	t62 = ((x269&(x270/x271))<x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = -1LL;
	uint16_t x274 = 3U;
	volatile int32_t x275 = INT32_MAX;
	uint16_t x276 = 5U;
	volatile int32_t t63 = 16176826;

	t63 = ((x273&(x274/x275))<x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x277 = INT16_MAX;
	uint32_t x278 = UINT32_MAX;
	uint32_t x279 = 448U;
	int16_t x280 = -17;

	t64 = ((x277&(x278/x279))<x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = UINT32_MAX;
	static int32_t x282 = INT32_MIN;
	static uint32_t x284 = UINT32_MAX;

	t65 = ((x281&(x282/x283))<x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x285 = -30;
	int16_t x286 = INT16_MIN;
	volatile uint64_t x287 = 1962847LLU;
	uint32_t x288 = 487U;
	int32_t t66 = 61619;

	t66 = ((x285&(x286/x287))<x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -196591;
	int32_t x296 = 28425443;
	volatile int32_t t67 = 53695694;

	t67 = ((x293&(x294/x295))<x296);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x297 = -1;
	uint32_t x298 = 61411U;
	uint16_t x299 = 5584U;
	volatile int32_t t68 = -221503;

	t68 = ((x297&(x298/x299))<x300);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = -1;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	static int8_t x304 = INT8_MIN;
	int32_t t69 = 42690;

	t69 = ((x301&(x302/x303))<x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x305 = 241661491U;
	static int8_t x306 = INT8_MAX;
	int8_t x307 = INT8_MAX;
	static int64_t x308 = INT64_MIN;
	volatile int32_t t70 = 12;

	t70 = ((x305&(x306/x307))<x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MIN;
	uint32_t x311 = UINT32_MAX;
	uint64_t x312 = 11519899926452LLU;
	volatile int32_t t71 = -252;

	t71 = ((x309&(x310/x311))<x312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x313 = -1;
	volatile int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MAX;
	volatile int32_t t72 = -228;

	t72 = ((x313&(x314/x315))<x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = UINT64_MAX;
	int32_t x319 = INT32_MAX;
	int64_t x320 = INT64_MIN;
	int32_t t73 = -14021352;

	t73 = ((x317&(x318/x319))<x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	int16_t x322 = 1323;
	int8_t x323 = INT8_MIN;
	uint64_t x324 = 3LLU;

	t74 = ((x321&(x322/x323))<x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x325 = 217483LLU;
	uint16_t x327 = UINT16_MAX;
	volatile int32_t t75 = 259918594;

	t75 = ((x325&(x326/x327))<x328);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = INT8_MAX;
	static uint16_t x330 = UINT16_MAX;
	int16_t x331 = -1;
	int32_t x332 = INT32_MIN;
	static int32_t t76 = 56;

	t76 = ((x329&(x330/x331))<x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 50U;
	static int64_t x335 = -1LL;
	uint32_t x336 = UINT32_MAX;
	static volatile int32_t t77 = -118057713;

	t77 = ((x333&(x334/x335))<x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x337 = -2;
	uint32_t x339 = 58685U;
	int16_t x340 = -1;
	int32_t t78 = -19228;

	t78 = ((x337&(x338/x339))<x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = -1;
	int8_t x346 = 1;
	int8_t x347 = 1;
	static int64_t x348 = INT64_MIN;
	int32_t t79 = -13178034;

	t79 = ((x345&(x346/x347))<x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x349 = -37;
	int8_t x350 = 13;
	int32_t x351 = -1;
	int8_t x352 = -1;
	volatile int32_t t80 = 7;

	t80 = ((x349&(x350/x351))<x352);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x353 = 5884U;
	static uint32_t x355 = 3174026U;
	uint16_t x356 = 115U;
	int32_t t81 = 17;

	t81 = ((x353&(x354/x355))<x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = 3190354312645069720LLU;
	int8_t x358 = -1;
	int8_t x359 = INT8_MIN;
	volatile int32_t t82 = -14676;

	t82 = ((x357&(x358/x359))<x360);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = -27;

	t83 = ((x361&(x362/x363))<x364);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x365 = UINT64_MAX;
	int16_t x366 = INT16_MIN;
	static volatile int32_t x367 = INT32_MAX;
	int32_t t84 = 1966890;

	t84 = ((x365&(x366/x367))<x368);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x369 = 11674U;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = 38U;
	static int32_t t85 = -165;

	t85 = ((x369&(x370/x371))<x372);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x374 = INT32_MIN;
	static int16_t x375 = INT16_MIN;
	static uint32_t x376 = 408U;
	int32_t t86 = 1;

	t86 = ((x373&(x374/x375))<x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x377 = 3U;
	int8_t x378 = -1;
	static volatile int16_t x379 = -1;
	int32_t x380 = -30066;
	volatile int32_t t87 = -87888442;

	t87 = ((x377&(x378/x379))<x380);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int64_t x382 = 31185477815593568LL;
	uint8_t x384 = 1U;
	int32_t t88 = -14412;

	t88 = ((x381&(x382/x383))<x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x385 = -1;
	uint16_t x386 = 29U;
	static volatile int32_t x387 = -1;
	static int8_t x388 = INT8_MAX;

	t89 = ((x385&(x386/x387))<x388);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x390 = 2029U;
	uint64_t x391 = 76496209412LLU;
	uint32_t x392 = 17839U;
	volatile int32_t t90 = 938862;

	t90 = ((x389&(x390/x391))<x392);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x397 = INT32_MAX;
	int16_t x399 = INT16_MIN;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t91 = -265783430;

	t91 = ((x397&(x398/x399))<x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = 24;
	uint8_t x402 = 1U;
	uint64_t x404 = UINT64_MAX;
	volatile int32_t t92 = -157299;

	t92 = ((x401&(x402/x403))<x404);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x405 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	static int32_t t93 = -105178;

	t93 = ((x405&(x406/x407))<x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MIN;
	static uint32_t x410 = 717U;
	uint8_t x411 = UINT8_MAX;
	uint32_t x412 = 780790676U;
	int32_t t94 = 1;

	t94 = ((x409&(x410/x411))<x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = INT64_MAX;
	static int8_t x414 = INT8_MIN;
	int8_t x416 = 1;
	int32_t t95 = 74;

	t95 = ((x413&(x414/x415))<x416);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = INT64_MAX;
	uint32_t x419 = 14391U;
	static int64_t x420 = -222506320LL;
	static int32_t t96 = 12134492;

	t96 = ((x417&(x418/x419))<x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x423 = UINT8_MAX;
	volatile int32_t t97 = -2840468;

	t97 = ((x421&(x422/x423))<x424);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x426 = -1;
	int32_t x427 = INT32_MAX;
	uint8_t x428 = UINT8_MAX;
	int32_t t98 = 3238;

	t98 = ((x425&(x426/x427))<x428);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = 14;
	volatile int32_t x430 = INT32_MAX;
	int8_t x431 = 15;
	int32_t t99 = -402726588;

	t99 = ((x429&(x430/x431))<x432);

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

