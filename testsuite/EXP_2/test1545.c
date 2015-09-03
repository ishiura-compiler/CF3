#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -4;
volatile int8_t x2 = INT8_MIN;
int16_t x5 = -1303;
int8_t x8 = 1;
volatile int32_t x9 = -1;
volatile uint32_t x11 = 221541U;
int64_t x12 = -61546950413698564LL;
int32_t x14 = INT32_MIN;
volatile int32_t t4 = -1;
int8_t x33 = -38;
int32_t x35 = INT32_MAX;
int16_t x43 = INT16_MIN;
static volatile uint32_t t11 = 71U;
int64_t x54 = 33902610LL;
volatile int64_t x57 = -720066781933452LL;
volatile uint64_t x63 = 2LLU;
uint16_t x68 = UINT16_MAX;
int64_t x77 = INT64_MIN;
int8_t x81 = -24;
uint64_t x84 = UINT64_MAX;
volatile uint32_t x93 = 458U;
volatile int16_t x102 = -406;
int16_t x103 = -1;
int32_t x107 = -137696499;
int32_t x110 = 29090;
int8_t x113 = -6;
int32_t x114 = INT32_MAX;
volatile int32_t x117 = -1;
volatile int64_t x118 = INT64_MIN;
volatile int32_t t28 = 9812952;
int32_t x121 = 635;
static int64_t x123 = -207501LL;
static int64_t x128 = INT64_MIN;
int64_t t30 = INT64_MIN;
int64_t t31 = INT64_MIN;
int16_t x142 = -1;
int32_t x146 = INT32_MAX;
int64_t x147 = INT64_MIN;
int32_t x148 = -1;
int16_t x149 = INT16_MIN;
int32_t x154 = INT32_MIN;
static int64_t x155 = INT64_MIN;
volatile int16_t x170 = -15;
static uint64_t x171 = 44LLU;
int32_t x177 = INT32_MIN;
int32_t t43 = INT32_MIN;
volatile int64_t x186 = 33566278LL;
volatile int16_t x194 = -1;
int8_t x221 = INT8_MIN;
int64_t t54 = 117905457180LL;
int16_t x231 = INT16_MIN;
static int8_t x235 = INT8_MIN;
uint8_t x248 = 0U;
int32_t t59 = -1;
uint64_t x249 = UINT64_MAX;
int64_t x253 = 749484381570395LL;
volatile int64_t t61 = -5724347101524LL;
static int16_t x257 = -2;
int32_t x260 = -1;
static int8_t x263 = INT8_MIN;
static int64_t t63 = 3515LL;
uint32_t x269 = 5U;
int16_t x282 = INT16_MIN;
uint8_t x285 = 120U;
uint16_t x293 = 3U;
static volatile uint64_t x295 = UINT64_MAX;
int64_t t71 = 5LL;
int64_t x297 = 443772682074LL;
volatile int64_t x302 = -1LL;
int16_t x304 = INT16_MIN;
volatile int8_t x305 = INT8_MAX;
static int64_t x306 = INT64_MAX;
static uint8_t x307 = 1U;
int64_t x310 = 641930186455LL;
volatile int16_t x328 = INT16_MIN;
int16_t x338 = -1;
uint32_t x340 = UINT32_MAX;
static uint16_t x348 = 10U;
int32_t t84 = 3;
uint32_t t85 = 4U;
uint16_t x355 = 249U;
static int8_t x359 = INT8_MIN;
uint32_t t88 = 5850U;
uint32_t t91 = 5424227U;
int32_t x383 = -1053;
int8_t x388 = INT8_MIN;
uint32_t x389 = UINT32_MAX;
int32_t x390 = 14170086;
int16_t x392 = 0;
volatile int8_t x405 = INT8_MIN;
int32_t t99 = -84;


void f0(void) {
	int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

	t0 = ((x1-(x2<=x3))&x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = -1;
	int8_t x7 = INT8_MIN;
	int32_t t1 = 556;

	t1 = ((x5-(x6<=x7))&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = 1900871U;
	volatile int64_t t2 = -272650173985604LL;

	t2 = ((x9-(x10<=x11))&x12);

	if (t2 != -61546950413698564LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int8_t x15 = INT8_MIN;
	int16_t x16 = -1827;
	int32_t t3 = 638;

	t3 = ((x13-(x14<=x15))&x16);

	if (t3 != -1828) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -7;
	uint16_t x18 = 5744U;
	volatile int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;

	t4 = ((x17-(x18<=x19))&x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	uint64_t x22 = 592440196250LLU;
	volatile int16_t x23 = INT16_MIN;
	uint8_t x24 = 0U;
	static volatile int32_t t5 = -11128797;

	t5 = ((x21-(x22<=x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static volatile int32_t x26 = INT32_MIN;
	uint8_t x27 = 1U;
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = 10553;

	t6 = ((x25-(x26<=x27))&x28);

	if (t6 != 2147483519) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int16_t x30 = 2;
	static uint32_t x31 = UINT32_MAX;
	static volatile int64_t x32 = INT64_MIN;
	int64_t t7 = -8465301149544LL;

	t7 = ((x29-(x30<=x31))&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = 745;

	t8 = ((x33-(x34<=x35))&x36);

	if (t8 != 217) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	uint64_t x38 = 14192LLU;
	volatile int32_t x39 = -1;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -166915;

	t9 = ((x37-(x38<=x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 14081U;
	int64_t x42 = -1LL;
	uint8_t x44 = 5U;
	volatile uint32_t t10 = 23087U;

	t10 = ((x41-(x42<=x43))&x44);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 520483U;
	static uint16_t x46 = 8416U;
	uint32_t x47 = 6U;
	uint16_t x48 = 27244U;

	t11 = ((x45-(x46<=x47))&x48);

	if (t11 != 24608U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int64_t x50 = 10LL;
	static volatile uint8_t x51 = UINT8_MAX;
	volatile int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -817052260;

	t12 = ((x49-(x50<=x51))&x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 3034LLU;
	int8_t x55 = 1;
	int32_t x56 = -1;
	uint64_t t13 = 5588707141LLU;

	t13 = ((x53-(x54<=x55))&x56);

	if (t13 != 3034LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1115525LL;
	int8_t x59 = INT8_MIN;
	static int32_t x60 = INT32_MIN;
	int64_t t14 = 0LL;

	t14 = ((x57-(x58<=x59))&x60);

	if (t14 != -720068447043584LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = 1001065111388LL;
	int32_t x64 = INT32_MIN;
	int64_t t15 = INT64_MIN;

	t15 = ((x61-(x62<=x63))&x64);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	uint8_t x66 = 21U;
	volatile int16_t x67 = 0;
	static int32_t t16 = 13391151;

	t16 = ((x65-(x66<=x67))&x68);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = 6068LL;
	static uint8_t x72 = 13U;
	static uint64_t t17 = 164582893195LLU;

	t17 = ((x69-(x70<=x71))&x72);

	if (t17 != 13LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -574902610;
	volatile int8_t x74 = 1;
	static int16_t x75 = 56;
	int8_t x76 = -21;
	int32_t t18 = -2597;

	t18 = ((x73-(x74<=x75))&x76);

	if (t18 != -574902615) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 4580U;
	int8_t x79 = -1;
	uint8_t x80 = UINT8_MAX;
	volatile int64_t t19 = 68LL;

	t19 = ((x77-(x78<=x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	int16_t x83 = -2783;
	static uint64_t t20 = 506LLU;

	t20 = ((x81-(x82<=x83))&x84);

	if (t20 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	int8_t x86 = INT8_MIN;
	int8_t x87 = -1;
	int8_t x88 = INT8_MAX;
	static int64_t t21 = 4LL;

	t21 = ((x85-(x86<=x87))&x88);

	if (t21 != 126LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x89 = UINT32_MAX;
	static int16_t x90 = INT16_MIN;
	static uint8_t x91 = 42U;
	int16_t x92 = -1704;
	volatile uint32_t t22 = 356023503U;

	t22 = ((x89-(x90<=x91))&x92);

	if (t22 != 4294965592U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = 34608LL;
	uint16_t x95 = UINT16_MAX;
	static int16_t x96 = -1;
	uint32_t t23 = 117U;

	t23 = ((x93-(x94<=x95))&x96);

	if (t23 != 457U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = INT8_MIN;
	uint64_t x104 = 152386860095LLU;
	volatile uint64_t t24 = 13927982246LLU;

	t24 = ((x101-(x102<=x103))&x104);

	if (t24 != 152386860095LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 5U;
	int16_t x106 = -284;
	int32_t x108 = INT32_MIN;
	static int32_t t25 = 1694181;

	t25 = ((x105-(x106<=x107))&x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 0;
	int32_t x111 = -1;
	int16_t x112 = -1;
	volatile int32_t t26 = -14;

	t26 = ((x109-(x110<=x111))&x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x115 = -1;
	static int16_t x116 = -1;
	volatile int32_t t27 = 31963515;

	t27 = ((x113-(x114<=x115))&x116);

	if (t27 != -6) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x119 = 228463;
	volatile int32_t x120 = INT32_MAX;

	t28 = ((x117-(x118<=x119))&x120);

	if (t28 != 2147483646) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x122 = 344;
	int16_t x124 = INT16_MIN;
	static int32_t t29 = 7670185;

	t29 = ((x121-(x122<=x123))&x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -78491;
	static int16_t x126 = -1482;
	uint32_t x127 = 20U;

	t30 = ((x125-(x126<=x127))&x128);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x129 = INT16_MIN;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;
	int64_t x132 = INT64_MIN;

	t31 = ((x129-(x130<=x131))&x132);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = 32U;
	int8_t x134 = -24;
	static uint8_t x135 = UINT8_MAX;
	uint16_t x136 = 2256U;
	static volatile int32_t t32 = -13310;

	t32 = ((x133-(x134<=x135))&x136);

	if (t32 != 16) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x137 = 952;
	int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;
	int32_t t33 = 294736;

	t33 = ((x137-(x138<=x139))&x140);

	if (t33 != 183) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = UINT64_MAX;
	static uint64_t x143 = 109142402753138LLU;
	uint16_t x144 = 12106U;
	volatile uint64_t t34 = 452115LLU;

	t34 = ((x141-(x142<=x143))&x144);

	if (t34 != 12106LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = -1;
	int32_t t35 = 225059912;

	t35 = ((x145-(x146<=x147))&x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x150 = INT32_MAX;
	int16_t x151 = -1;
	static uint32_t x152 = 6442381U;
	volatile uint32_t t36 = 1U;

	t36 = ((x149-(x150<=x151))&x152);

	if (t36 != 6422528U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 4931550399LLU;
	uint64_t x156 = UINT64_MAX;
	uint64_t t37 = 162065446LLU;

	t37 = ((x153-(x154<=x155))&x156);

	if (t37 != 4931550399LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = -198;
	uint16_t x158 = 1139U;
	int16_t x159 = -1;
	uint8_t x160 = UINT8_MAX;
	static int32_t t38 = 1896;

	t38 = ((x157-(x158<=x159))&x160);

	if (t38 != 58) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MAX;
	uint16_t x163 = 51U;
	uint16_t x164 = 494U;
	volatile int32_t t39 = -27078;

	t39 = ((x161-(x162<=x163))&x164);

	if (t39 != 238) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 14U;
	int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MAX;
	uint64_t x168 = 106737LLU;
	uint64_t t40 = 789LLU;

	t40 = ((x165-(x166<=x167))&x168);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = 864U;
	int64_t x172 = -1LL;
	volatile int64_t t41 = 2LL;

	t41 = ((x169-(x170<=x171))&x172);

	if (t41 != 864LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MAX;
	int32_t x174 = 496;
	int8_t x175 = -1;
	int32_t x176 = 14205;
	int32_t t42 = -2838;

	t42 = ((x173-(x174<=x175))&x176);

	if (t42 != 125) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x178 = 22;
	int8_t x179 = -1;
	static volatile int32_t x180 = INT32_MIN;

	t43 = ((x177-(x178<=x179))&x180);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 26U;
	uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 4U;
	static uint16_t x184 = 67U;
	int32_t t44 = -1149;

	t44 = ((x181-(x182<=x183))&x184);

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -49355674674LL;
	volatile int32_t x187 = -31735;
	static int16_t x188 = INT16_MIN;
	volatile int64_t t45 = 1161968960281939LL;

	t45 = ((x185-(x186<=x187))&x188);

	if (t45 != -49355685888LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x189 = -1;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = 45U;
	int8_t x192 = -14;
	volatile int32_t t46 = 2136;

	t46 = ((x189-(x190<=x191))&x192);

	if (t46 != -14) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 10838LLU;
	volatile uint8_t x195 = 50U;
	int64_t x196 = INT64_MIN;
	uint64_t t47 = 504LLU;

	t47 = ((x193-(x194<=x195))&x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = 1;
	int64_t x202 = 343LL;
	uint64_t x203 = 21327027LLU;
	int8_t x204 = -1;
	int32_t t48 = 72;

	t48 = ((x201-(x202<=x203))&x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MAX;
	uint8_t x206 = 10U;
	volatile int8_t x207 = INT8_MIN;
	volatile int32_t x208 = -1;
	volatile int32_t t49 = INT32_MAX;

	t49 = ((x205-(x206<=x207))&x208);

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = -1;
	int8_t x210 = 1;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = 15;
	volatile int32_t t50 = -124;

	t50 = ((x209-(x210<=x211))&x212);

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 111U;
	int32_t x214 = 1;
	static volatile uint32_t x215 = 2406U;
	int8_t x216 = INT8_MAX;
	volatile int32_t t51 = -45;

	t51 = ((x213-(x214<=x215))&x216);

	if (t51 != 110) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x217 = INT16_MIN;
	static int32_t x218 = INT32_MAX;
	int64_t x219 = -6107520LL;
	uint64_t x220 = UINT64_MAX;
	uint64_t t52 = 26350797LLU;

	t52 = ((x217-(x218<=x219))&x220);

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x222 = 20U;
	int8_t x223 = 0;
	int16_t x224 = INT16_MIN;
	int32_t t53 = 12267362;

	t53 = ((x221-(x222<=x223))&x224);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MAX;
	static int16_t x226 = INT16_MAX;
	int16_t x227 = INT16_MIN;
	int64_t x228 = 46833341LL;

	t54 = ((x225-(x226<=x227))&x228);

	if (t54 != 61LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x229 = INT16_MIN;
	uint8_t x230 = 13U;
	uint16_t x232 = 6U;
	int32_t t55 = 1;

	t55 = ((x229-(x230<=x231))&x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -2;
	int32_t x234 = INT32_MIN;
	int8_t x236 = 11;
	int32_t t56 = -111;

	t56 = ((x233-(x234<=x235))&x236);

	if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x237 = -1;
	int16_t x238 = INT16_MIN;
	static int32_t x239 = -5916;
	int16_t x240 = -1;
	int32_t t57 = -855125;

	t57 = ((x237-(x238<=x239))&x240);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x241 = -2062;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	int64_t x244 = -1000LL;
	static volatile int64_t t58 = 676LL;

	t58 = ((x241-(x242<=x243))&x244);

	if (t58 != -3056LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MIN;

	t59 = ((x245-(x246<=x247))&x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x250 = INT16_MIN;
	static int32_t x251 = INT32_MIN;
	uint8_t x252 = 12U;
	static uint64_t t60 = 98004028LLU;

	t60 = ((x249-(x250<=x251))&x252);

	if (t60 != 12LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MAX;
	int8_t x255 = -59;
	int32_t x256 = INT32_MAX;

	t61 = ((x253-(x254<=x255))&x256);

	if (t61 != 1851000155LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x258 = 66910144U;
	static int8_t x259 = -15;
	int32_t t62 = 32159;

	t62 = ((x257-(x258<=x259))&x260);

	if (t62 != -3) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	static int32_t x262 = -9;
	int64_t x264 = INT64_MAX;

	t63 = ((x261-(x262<=x263))&x264);

	if (t63 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = INT16_MAX;
	uint64_t x266 = UINT64_MAX;
	static uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MAX;
	volatile int32_t t64 = -2;

	t64 = ((x265-(x266<=x267))&x268);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x270 = 5842LL;
	int64_t x271 = INT64_MIN;
	uint32_t x272 = 49609U;
	static volatile uint32_t t65 = 0U;

	t65 = ((x269-(x270<=x271))&x272);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MAX;
	uint64_t x274 = 959LLU;
	static uint16_t x275 = 981U;
	int16_t x276 = -1;
	volatile int64_t t66 = -6660710832977LL;

	t66 = ((x273-(x274<=x275))&x276);

	if (t66 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	int8_t x279 = 0;
	int8_t x280 = 1;
	int32_t t67 = 1;

	t67 = ((x277-(x278<=x279))&x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = 6U;
	int32_t x283 = -1;
	uint16_t x284 = 26U;
	static int32_t t68 = 12;

	t68 = ((x281-(x282<=x283))&x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x286 = 65;
	int32_t x287 = INT32_MIN;
	static volatile int32_t x288 = INT32_MIN;
	volatile int32_t t69 = 1424;

	t69 = ((x285-(x286<=x287))&x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x289 = -602;
	int32_t x290 = INT32_MIN;
	volatile int16_t x291 = INT16_MIN;
	static uint64_t x292 = UINT64_MAX;
	uint64_t t70 = 34558932286202184LLU;

	t70 = ((x289-(x290<=x291))&x292);

	if (t70 != 18446744073709551013LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x294 = UINT32_MAX;
	int64_t x296 = -1558059680882LL;

	t71 = ((x293-(x294<=x295))&x296);

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x298 = 104311LLU;
	volatile int8_t x299 = INT8_MAX;
	static volatile int8_t x300 = INT8_MIN;
	static volatile int64_t t72 = -8892974LL;

	t72 = ((x297-(x298<=x299))&x300);

	if (t72 != 443772681984LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x301 = 1125;
	static uint8_t x303 = UINT8_MAX;
	volatile int32_t t73 = 6089;

	t73 = ((x301-(x302<=x303))&x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x308 = -4;
	volatile int32_t t74 = 235731;

	t74 = ((x305-(x306<=x307))&x308);

	if (t74 != 124) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = -7;
	volatile int16_t x311 = -381;
	uint64_t x312 = 74908205359LLU;
	uint64_t t75 = 528641283110447234LLU;

	t75 = ((x309-(x310<=x311))&x312);

	if (t75 != 74908205353LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	static int16_t x315 = 16;
	int16_t x316 = INT16_MIN;
	volatile int32_t t76 = 509783;

	t76 = ((x313-(x314<=x315))&x316);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x317 = 3122LL;
	int8_t x318 = INT8_MIN;
	volatile int8_t x319 = INT8_MIN;
	static uint32_t x320 = UINT32_MAX;
	volatile int64_t t77 = -190822025842057LL;

	t77 = ((x317-(x318<=x319))&x320);

	if (t77 != 3121LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = UINT16_MAX;
	static volatile int32_t x322 = -1;
	volatile int8_t x323 = -1;
	volatile int32_t x324 = INT32_MIN;
	static int32_t t78 = -40;

	t78 = ((x321-(x322<=x323))&x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x325 = 20863172U;
	static int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	static uint32_t t79 = 3U;

	t79 = ((x325-(x326<=x327))&x328);

	if (t79 != 20840448U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x329 = UINT16_MAX;
	int64_t x330 = -1455001006529313LL;
	int16_t x331 = -1;
	static uint8_t x332 = UINT8_MAX;
	static volatile int32_t t80 = -25;

	t80 = ((x329-(x330<=x331))&x332);

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MAX;
	static int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	int16_t x336 = -1987;
	volatile int64_t t81 = -23385569421538948LL;

	t81 = ((x333-(x334<=x335))&x336);

	if (t81 != 9223372036854773821LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 7U;
	volatile int32_t x339 = -1;
	static uint32_t t82 = 2612U;

	t82 = ((x337-(x338<=x339))&x340);

	if (t82 != 6U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x341 = 1;
	int32_t x342 = INT32_MIN;
	int8_t x343 = -39;
	volatile int16_t x344 = INT16_MAX;
	volatile int32_t t83 = 3507;

	t83 = ((x341-(x342<=x343))&x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x345 = INT32_MAX;
	int8_t x346 = INT8_MIN;
	int32_t x347 = 43;

	t84 = ((x345-(x346<=x347))&x348);

	if (t84 != 10) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x349 = 547107815U;
	int8_t x350 = -2;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = INT8_MAX;

	t85 = ((x349-(x350<=x351))&x352);

	if (t85 != 102U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x353 = -62;
	int8_t x354 = -1;
	uint32_t x356 = 35649110U;
	uint32_t t86 = 175057992U;

	t86 = ((x353-(x354<=x355))&x356);

	if (t86 != 35649088U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x357 = 549U;
	int32_t x358 = -1;
	int16_t x360 = INT16_MIN;
	uint32_t t87 = 4471999U;

	t87 = ((x357-(x358<=x359))&x360);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x361 = 19;
	volatile uint64_t x362 = 106967649169381680LLU;
	int64_t x363 = INT64_MAX;
	static uint32_t x364 = UINT32_MAX;

	t88 = ((x361-(x362<=x363))&x364);

	if (t88 != 18U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x365 = -25;
	static int8_t x366 = INT8_MAX;
	volatile int32_t x367 = INT32_MIN;
	static int64_t x368 = -2046LL;
	int64_t t89 = -7591545526272LL;

	t89 = ((x365-(x366<=x367))&x368);

	if (t89 != -2046LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -40729534;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MIN;
	static int8_t x372 = 0;
	volatile int32_t t90 = 22;

	t90 = ((x369-(x370<=x371))&x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = -1;
	int8_t x378 = -4;
	uint16_t x379 = 185U;
	uint32_t x380 = UINT32_MAX;

	t91 = ((x377-(x378<=x379))&x380);

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = -3LL;
	uint32_t x382 = UINT32_MAX;
	int8_t x384 = INT8_MIN;
	volatile int64_t t92 = 8606725287LL;

	t92 = ((x381-(x382<=x383))&x384);

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x386 = -37690197;
	int32_t x387 = 16255508;
	int32_t t93 = -168069;

	t93 = ((x385-(x386<=x387))&x388);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x391 = UINT16_MAX;
	uint32_t t94 = 90593775U;

	t94 = ((x389-(x390<=x391))&x392);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	int16_t x394 = -1;
	int16_t x395 = INT16_MIN;
	static uint8_t x396 = 105U;
	static volatile int64_t t95 = -1126586811406943506LL;

	t95 = ((x393-(x394<=x395))&x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = 71783608176LL;
	int64_t x398 = 84241959536LL;
	static uint32_t x399 = 717522U;
	static int32_t x400 = -249174;
	static int64_t t96 = -1552888693802000828LL;

	t96 = ((x397-(x398<=x399))&x400);

	if (t96 != 71783424544LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 578133305LLU;
	static int32_t x402 = INT32_MAX;
	uint32_t x403 = 11U;
	uint64_t x404 = UINT64_MAX;
	static uint64_t t97 = 3261LLU;

	t97 = ((x401-(x402<=x403))&x404);

	if (t97 != 578133305LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x406 = 46U;
	int8_t x407 = -36;
	uint8_t x408 = 0U;
	volatile int32_t t98 = -868382467;

	t98 = ((x405-(x406<=x407))&x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x409 = INT16_MAX;
	int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MIN;
	uint8_t x412 = 3U;

	t99 = ((x409-(x410<=x411))&x412);

	if (t99 != 2) { NG(); } else { ; }
	
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

