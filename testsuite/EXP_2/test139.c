#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 57U;
volatile int64_t x5 = INT64_MAX;
int8_t x8 = -1;
static int16_t x12 = 1830;
static int16_t x14 = INT16_MAX;
static uint32_t x15 = 357U;
volatile int64_t x18 = INT64_MIN;
int64_t x27 = -1LL;
static volatile int16_t x30 = INT16_MAX;
int64_t x37 = INT64_MIN;
int16_t x38 = -1;
uint8_t x45 = UINT8_MAX;
int64_t x46 = -47748914427LL;
int8_t x53 = 0;
int32_t x65 = INT32_MAX;
volatile int32_t t15 = 1082;
uint8_t x77 = UINT8_MAX;
int16_t x78 = -2;
int16_t x90 = INT16_MIN;
int64_t x92 = INT64_MIN;
int32_t t22 = -332133465;
int8_t x101 = -1;
int32_t x110 = -160;
int64_t x112 = INT64_MAX;
static uint16_t x120 = UINT16_MAX;
static int64_t x121 = 1114133559097287086LL;
int16_t x124 = -1;
int32_t x136 = 10421299;
volatile int32_t t35 = -3216961;
volatile int32_t t36 = -3533806;
int16_t x171 = INT16_MIN;
int8_t x172 = INT8_MIN;
volatile int32_t t37 = 6906827;
int64_t x175 = -2735LL;
int32_t t38 = 99891034;
int16_t x181 = -1;
static volatile int8_t x183 = 1;
uint16_t x186 = 847U;
volatile int8_t x189 = -3;
volatile int16_t x191 = 27;
volatile int16_t x192 = INT16_MIN;
static uint16_t x194 = 0U;
int32_t x196 = 394759807;
uint64_t x198 = 92180300LLU;
static int64_t x199 = 10476659501LL;
static int16_t x201 = 6331;
uint16_t x204 = UINT16_MAX;
static uint8_t x205 = 10U;
uint16_t x206 = 0U;
int8_t x208 = -1;
volatile int32_t t47 = -26537010;
int8_t x217 = INT8_MIN;
volatile uint32_t x221 = 121U;
int32_t x226 = -1;
int32_t t51 = 326458;
uint32_t x229 = 18952U;
static uint16_t x232 = 8U;
static uint16_t x233 = 50U;
static volatile int8_t x250 = -1;
volatile int32_t t57 = -575281894;
int64_t x261 = INT64_MIN;
uint32_t x264 = UINT32_MAX;
uint32_t x271 = 49U;
volatile int32_t t62 = 0;
int32_t t63 = 59;
static volatile int8_t x286 = INT8_MAX;
static int8_t x294 = 1;
int8_t x298 = INT8_MIN;
volatile int32_t t66 = 6325947;
volatile uint64_t x311 = UINT64_MAX;
volatile int32_t t69 = 13522001;
volatile int32_t t70 = -9238710;
volatile uint16_t x332 = 1U;
uint32_t x347 = 337U;
uint32_t x352 = 9U;
int8_t x355 = INT8_MIN;
int8_t x358 = INT8_MIN;
int8_t x360 = INT8_MAX;
int32_t t80 = -1332;
int16_t x369 = INT16_MIN;
volatile uint32_t x372 = 282U;
uint32_t x375 = UINT32_MAX;
volatile int32_t t84 = 427;
uint64_t x385 = UINT64_MAX;
uint16_t x388 = UINT16_MAX;
int8_t x391 = 1;
int8_t x392 = INT8_MIN;
static uint64_t x393 = UINT64_MAX;
uint32_t x395 = UINT32_MAX;
static int8_t x398 = INT8_MIN;
int8_t x402 = -1;
int32_t x405 = -1;
int8_t x406 = INT8_MIN;
uint64_t x412 = 3LLU;
int32_t t91 = -214;
volatile int32_t x417 = INT32_MAX;
int32_t x421 = INT32_MAX;
int8_t x423 = -10;
volatile int32_t x428 = -1;
int16_t x429 = -1771;
int16_t x432 = 38;
uint32_t x434 = 10532270U;


void f0(void) {
	int64_t x2 = -22283582574820LL;
	volatile int32_t x3 = -64;
	int16_t x4 = -1;
	volatile int32_t t0 = -253097;

	t0 = ((x1&(x2+x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	uint8_t x7 = UINT8_MAX;
	int32_t t1 = 208310;

	t1 = ((x5&(x6+x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static uint32_t x10 = 1082U;
	static uint16_t x11 = 1052U;
	int32_t t2 = 3;

	t2 = ((x9&(x10+x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -19;

	t3 = ((x13&(x14+x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = -1;
	volatile int32_t t4 = -486;

	t4 = ((x17&(x18+x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -13;
	int64_t x26 = -11985LL;
	int16_t x28 = 2;
	int32_t t5 = 2070569;

	t5 = ((x25&(x26+x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MIN;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	static volatile int32_t t6 = 78112423;

	t6 = ((x29&(x30+x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 16516103U;
	volatile int8_t x34 = INT8_MAX;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = -1;
	int32_t t7 = -11346;

	t7 = ((x33&(x34+x35))<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x39 = INT64_MAX;
	uint32_t x40 = 359U;
	int32_t t8 = 2;

	t8 = ((x37&(x38+x39))<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x41 = 150LLU;
	volatile uint8_t x42 = 28U;
	int8_t x43 = -5;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t9 = 16116;

	t9 = ((x41&(x42+x43))<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x47 = -1;
	int8_t x48 = INT8_MAX;
	int32_t t10 = 9022593;

	t10 = ((x45&(x46+x47))<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	uint8_t x50 = 83U;
	uint16_t x51 = 1389U;
	uint8_t x52 = 1U;
	volatile int32_t t11 = -1;

	t11 = ((x49&(x50+x51))<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = 2972LLU;
	volatile uint64_t x55 = 554321480022LLU;
	static volatile int8_t x56 = -1;
	volatile int32_t t12 = -151;

	t12 = ((x53&(x54+x55))<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	static volatile uint64_t x58 = 1034636326533942738LLU;
	int8_t x59 = INT8_MIN;
	uint16_t x60 = 20U;
	static volatile int32_t t13 = -454052607;

	t13 = ((x57&(x58+x59))<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = -1;
	uint32_t x63 = 258U;
	int16_t x64 = -1;
	volatile int32_t t14 = -913094;

	t14 = ((x61&(x62+x63))<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x66 = -1;
	uint16_t x67 = 786U;
	uint16_t x68 = 972U;

	t15 = ((x65&(x66+x67))<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MAX;
	int64_t x72 = INT64_MIN;
	static int32_t t16 = -3862;

	t16 = ((x69&(x70+x71))<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x79 = 13;
	static volatile int8_t x80 = 40;
	volatile int32_t t17 = 52636;

	t17 = ((x77&(x78+x79))<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = 7;
	int32_t x82 = 20635;
	uint16_t x83 = 1U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t18 = 20;

	t18 = ((x81&(x82+x83))<x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	uint32_t x86 = 182823U;
	uint64_t x87 = 805661240864077609LLU;
	int64_t x88 = INT64_MIN;
	volatile int32_t t19 = 463469;

	t19 = ((x85&(x86+x87))<x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x91 = 503LLU;
	static int32_t t20 = -221;

	t20 = ((x89&(x90+x91))<x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = -1LL;
	int64_t x94 = 112066062077LL;
	uint16_t x95 = UINT16_MAX;
	static int32_t x96 = 5281900;
	volatile int32_t t21 = -20222700;

	t21 = ((x93&(x94+x95))<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -17;
	int32_t x98 = INT32_MIN;
	int64_t x99 = -1LL;
	int32_t x100 = INT32_MIN;

	t22 = ((x97&(x98+x99))<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x102 = UINT64_MAX;
	volatile int64_t x103 = -216149243268997401LL;
	int64_t x104 = INT64_MIN;
	int32_t t23 = 104926294;

	t23 = ((x101&(x102+x103))<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	static uint8_t x106 = UINT8_MAX;
	int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	int32_t t24 = -278847015;

	t24 = ((x105&(x106+x107))<x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint64_t x111 = 45LLU;
	static int32_t t25 = 243274218;

	t25 = ((x109&(x110+x111))<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = -1;
	static volatile int32_t x114 = -1;
	static int64_t x115 = -1LL;
	int16_t x116 = 550;
	volatile int32_t t26 = -30277;

	t26 = ((x113&(x114+x115))<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = 24264U;
	static int16_t x118 = INT16_MIN;
	int16_t x119 = -4;
	static volatile int32_t t27 = 182;

	t27 = ((x117&(x118+x119))<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = -705;
	volatile int16_t x123 = INT16_MIN;
	int32_t t28 = 3;

	t28 = ((x121&(x122+x123))<x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	int64_t x128 = 937LL;
	int32_t t29 = -7;

	t29 = ((x125&(x126+x127))<x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x129 = 2248855471012916LLU;
	volatile int64_t x130 = -1LL;
	uint32_t x131 = 4U;
	static uint64_t x132 = 885447825999492659LLU;
	int32_t t30 = -2374943;

	t30 = ((x129&(x130+x131))<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = -1LL;
	int64_t x134 = INT64_MAX;
	static volatile uint64_t x135 = 467018LLU;
	int32_t t31 = -21;

	t31 = ((x133&(x134+x135))<x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MAX;
	volatile uint16_t x142 = UINT16_MAX;
	int32_t x143 = -1;
	static uint32_t x144 = UINT32_MAX;
	volatile int32_t t32 = 2;

	t32 = ((x141&(x142+x143))<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x145 = 75344151;
	int16_t x146 = INT16_MAX;
	int16_t x147 = -5182;
	static int16_t x148 = -7;
	static int32_t t33 = 4137555;

	t33 = ((x145&(x146+x147))<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	volatile int64_t x150 = 0LL;
	int32_t x151 = INT32_MAX;
	uint64_t x152 = 1697316702805LLU;
	static volatile int32_t t34 = -149;

	t34 = ((x149&(x150+x151))<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	static volatile int32_t x159 = 667119021;
	int16_t x160 = 5458;

	t35 = ((x157&(x158+x159))<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x165 = 0;
	int16_t x166 = -1;
	int16_t x167 = -1;
	int64_t x168 = INT64_MIN;

	t36 = ((x165&(x166+x167))<x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 1U;
	static uint32_t x170 = 16002U;

	t37 = ((x169&(x170+x171))<x172);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = UINT8_MAX;
	uint16_t x174 = 254U;
	int8_t x176 = -1;

	t38 = ((x173&(x174+x175))<x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = -505LL;
	volatile int8_t x179 = -3;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t39 = 32897594;

	t39 = ((x177&(x178+x179))<x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x182 = 9U;
	int8_t x184 = -39;
	int32_t t40 = -116901316;

	t40 = ((x181&(x182+x183))<x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = -6;
	volatile int32_t x187 = 43;
	int8_t x188 = 22;
	volatile int32_t t41 = -21668550;

	t41 = ((x185&(x186+x187))<x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x190 = INT64_MIN;
	static int32_t t42 = -58;

	t42 = ((x189&(x190+x191))<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = -11987;
	int8_t x195 = -36;
	int32_t t43 = 78116847;

	t43 = ((x193&(x194+x195))<x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -1;
	static volatile int8_t x200 = -1;
	int32_t t44 = -936577;

	t44 = ((x197&(x198+x199))<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x202 = INT64_MIN;
	uint64_t x203 = 49205LLU;
	volatile int32_t t45 = -536265326;

	t45 = ((x201&(x202+x203))<x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x207 = 3241402U;
	int32_t t46 = -54362878;

	t46 = ((x205&(x206+x207))<x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x209 = 1;
	uint32_t x210 = 8U;
	static int8_t x211 = -34;
	uint16_t x212 = 2490U;

	t47 = ((x209&(x210+x211))<x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -1;
	volatile int8_t x214 = INT8_MIN;
	int64_t x215 = 215686LL;
	int64_t x216 = INT64_MAX;
	int32_t t48 = 1012;

	t48 = ((x213&(x214+x215))<x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x218 = -1LL;
	static int16_t x219 = INT16_MAX;
	static uint32_t x220 = UINT32_MAX;
	int32_t t49 = -358;

	t49 = ((x217&(x218+x219))<x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x222 = INT64_MIN;
	static uint16_t x223 = 1022U;
	int16_t x224 = -934;
	static int32_t t50 = -2295;

	t50 = ((x221&(x222+x223))<x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MIN;
	static uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MAX;

	t51 = ((x225&(x226+x227))<x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x230 = -1;
	int64_t x231 = INT64_MAX;
	int32_t t52 = -2794834;

	t52 = ((x229&(x230+x231))<x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x234 = -21;
	volatile int16_t x235 = INT16_MIN;
	volatile uint16_t x236 = UINT16_MAX;
	volatile int32_t t53 = 1933040;

	t53 = ((x233&(x234+x235))<x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 23U;
	volatile int32_t x238 = INT32_MIN;
	uint32_t x239 = UINT32_MAX;
	int32_t x240 = -1;
	volatile int32_t t54 = 417752;

	t54 = ((x237&(x238+x239))<x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MAX;
	uint32_t x251 = 132707961U;
	static volatile int32_t x252 = INT32_MIN;
	int32_t t55 = -15521;

	t55 = ((x249&(x250+x251))<x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 82931141801423219LLU;
	static uint16_t x254 = 167U;
	int32_t x255 = 1;
	int8_t x256 = 0;
	volatile int32_t t56 = 8577;

	t56 = ((x253&(x254+x255))<x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = INT64_MIN;
	volatile int32_t x258 = 672;
	int16_t x259 = -1;
	static uint16_t x260 = 8U;

	t57 = ((x257&(x258+x259))<x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x262 = 81569933701323LLU;
	static int8_t x263 = INT8_MIN;
	volatile int32_t t58 = -356009271;

	t58 = ((x261&(x262+x263))<x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x265 = 1540291;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = -1;
	int64_t x268 = -109LL;
	volatile int32_t t59 = 171;

	t59 = ((x265&(x266+x267))<x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = -1;
	static uint8_t x270 = 66U;
	volatile int8_t x272 = -1;
	volatile int32_t t60 = 2851;

	t60 = ((x269&(x270+x271))<x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	uint16_t x275 = UINT16_MAX;
	uint64_t x276 = 88318209LLU;
	static volatile int32_t t61 = -5633;

	t61 = ((x273&(x274+x275))<x276);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	int16_t x278 = -1;
	int32_t x279 = -1;
	volatile uint8_t x280 = UINT8_MAX;

	t62 = ((x277&(x278+x279))<x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = 0;
	volatile uint16_t x282 = 52U;
	int16_t x283 = -4;
	int16_t x284 = INT16_MIN;

	t63 = ((x281&(x282+x283))<x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x285 = 977168315488590668LLU;
	static uint64_t x287 = 1797259573577LLU;
	int8_t x288 = INT8_MAX;
	int32_t t64 = 31371373;

	t64 = ((x285&(x286+x287))<x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = -1;
	int8_t x295 = 47;
	static uint32_t x296 = 1143541U;
	int32_t t65 = 45318;

	t65 = ((x293&(x294+x295))<x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x297 = -1;
	uint32_t x299 = UINT32_MAX;
	uint8_t x300 = 10U;

	t66 = ((x297&(x298+x299))<x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x301 = INT8_MIN;
	static int64_t x302 = -26522046440292488LL;
	int16_t x303 = 5;
	int32_t x304 = INT32_MIN;
	int32_t t67 = -19376;

	t67 = ((x301&(x302+x303))<x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = -1;
	int8_t x306 = INT8_MIN;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t68 = -7539;

	t68 = ((x305&(x306+x307))<x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x309 = UINT16_MAX;
	static volatile int32_t x310 = -1;
	static int64_t x312 = INT64_MAX;

	t69 = ((x309&(x310+x311))<x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = -1;
	int16_t x318 = -4;
	volatile uint16_t x319 = 0U;
	int64_t x320 = -1LL;

	t70 = ((x317&(x318+x319))<x320);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = 11882U;
	uint32_t x322 = UINT32_MAX;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = 0U;
	volatile int32_t t71 = 400505;

	t71 = ((x321&(x322+x323))<x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x325 = -858656202LL;
	int16_t x326 = 395;
	volatile int64_t x327 = -110LL;
	static int16_t x328 = INT16_MIN;
	int32_t t72 = -15845058;

	t72 = ((x325&(x326+x327))<x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x329 = 2U;
	uint8_t x330 = 1U;
	uint8_t x331 = 10U;
	static int32_t t73 = 63697629;

	t73 = ((x329&(x330+x331))<x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = INT64_MIN;
	volatile int32_t x338 = -1;
	volatile int8_t x339 = INT8_MIN;
	static uint16_t x340 = UINT16_MAX;
	int32_t t74 = 836053;

	t74 = ((x337&(x338+x339))<x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = 257932;
	volatile int64_t x342 = 807920986LL;
	int8_t x343 = INT8_MIN;
	static uint16_t x344 = 0U;
	int32_t t75 = -7;

	t75 = ((x341&(x342+x343))<x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = -1;
	int64_t x346 = INT64_MIN;
	int16_t x348 = 3;
	int32_t t76 = 36530;

	t76 = ((x345&(x346+x347))<x348);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x349 = 14U;
	int32_t x350 = INT32_MIN;
	volatile uint8_t x351 = UINT8_MAX;
	int32_t t77 = -11;

	t77 = ((x349&(x350+x351))<x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = -1;
	static int16_t x354 = INT16_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t78 = 34363768;

	t78 = ((x353&(x354+x355))<x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = -1;
	uint64_t x359 = UINT64_MAX;
	int32_t t79 = -2367050;

	t79 = ((x357&(x358+x359))<x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x361 = UINT16_MAX;
	static int64_t x362 = 1608251527109LL;
	int8_t x363 = -1;
	int32_t x364 = INT32_MIN;

	t80 = ((x361&(x362+x363))<x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x365 = -3306824LL;
	uint32_t x366 = 24094U;
	volatile int16_t x367 = -1;
	int64_t x368 = -1LL;
	int32_t t81 = 138;

	t81 = ((x365&(x366+x367))<x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x370 = 13802;
	int64_t x371 = -616880095748047790LL;
	int32_t t82 = 25;

	t82 = ((x369&(x370+x371))<x372);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x373 = -5;
	uint64_t x374 = 60860879LLU;
	int32_t x376 = 48;
	static int32_t t83 = 34;

	t83 = ((x373&(x374+x375))<x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int8_t x382 = INT8_MIN;
	uint64_t x383 = 864618805712021745LLU;
	int64_t x384 = 506940LL;

	t84 = ((x381&(x382+x383))<x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x386 = UINT64_MAX;
	static uint32_t x387 = UINT32_MAX;
	int32_t t85 = -27;

	t85 = ((x385&(x386+x387))<x388);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MIN;
	int32_t t86 = -2115;

	t86 = ((x389&(x390+x391))<x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x394 = INT32_MIN;
	uint16_t x396 = 14U;
	static int32_t t87 = 33999;

	t87 = ((x393&(x394+x395))<x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x397 = 45;
	static int16_t x399 = -1;
	static volatile int8_t x400 = INT8_MIN;
	int32_t t88 = -62810;

	t88 = ((x397&(x398+x399))<x400);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = -1LL;
	int64_t x403 = 35042667157270043LL;
	int64_t x404 = INT64_MIN;
	static int32_t t89 = 3293718;

	t89 = ((x401&(x402+x403))<x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x407 = 11786;
	static int16_t x408 = 1;
	static int32_t t90 = 575107248;

	t90 = ((x405&(x406+x407))<x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x409 = 3U;
	int64_t x410 = 22LL;
	static uint64_t x411 = UINT64_MAX;

	t91 = ((x409&(x410+x411))<x412);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = INT32_MAX;
	int64_t x414 = INT64_MIN;
	volatile int8_t x415 = INT8_MAX;
	int32_t x416 = -1;
	volatile int32_t t92 = -225352472;

	t92 = ((x413&(x414+x415))<x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x418 = INT64_MIN;
	uint8_t x419 = UINT8_MAX;
	int64_t x420 = INT64_MIN;
	volatile int32_t t93 = -568;

	t93 = ((x417&(x418+x419))<x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x422 = 6U;
	int32_t x424 = INT32_MAX;
	volatile int32_t t94 = 2;

	t94 = ((x421&(x422+x423))<x424);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x425 = INT16_MAX;
	int8_t x426 = INT8_MAX;
	int32_t x427 = INT32_MIN;
	volatile int32_t t95 = -4262;

	t95 = ((x425&(x426+x427))<x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x430 = 21005895U;
	int16_t x431 = INT16_MIN;
	static volatile int32_t t96 = -2;

	t96 = ((x429&(x430+x431))<x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = INT16_MIN;
	static volatile int32_t x435 = -422521;
	int16_t x436 = INT16_MAX;
	volatile int32_t t97 = -2;

	t97 = ((x433&(x434+x435))<x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x437 = UINT8_MAX;
	int16_t x438 = 62;
	volatile uint64_t x439 = 387070122LLU;
	static int16_t x440 = -13;
	volatile int32_t t98 = 9395462;

	t98 = ((x437&(x438+x439))<x440);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = INT32_MIN;
	static int32_t x442 = INT32_MIN;
	volatile int64_t x443 = INT64_MAX;
	int32_t x444 = INT32_MIN;
	static volatile int32_t t99 = 221930205;

	t99 = ((x441&(x442+x443))<x444);

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

