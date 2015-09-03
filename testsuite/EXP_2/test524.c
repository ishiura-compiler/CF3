#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 3;
int64_t t0 = -260754178925795LL;
static uint64_t x11 = 12759278918LLU;
int16_t x17 = INT16_MAX;
static int16_t x20 = INT16_MAX;
static int16_t x26 = -1;
int32_t x33 = INT32_MIN;
uint8_t x34 = 52U;
static int8_t x41 = INT8_MIN;
uint64_t x42 = UINT64_MAX;
int64_t x47 = -1LL;
static int16_t x58 = INT16_MIN;
uint64_t x60 = 849260995654LLU;
volatile uint32_t t15 = 179399667U;
uint8_t x84 = 6U;
int8_t x86 = INT8_MIN;
static int8_t x90 = INT8_MAX;
uint16_t x102 = 36U;
static uint16_t x103 = 302U;
uint16_t x106 = 11191U;
static volatile uint16_t x128 = 8120U;
int16_t x129 = -4110;
static volatile int32_t t28 = 20;
int16_t x133 = 1453;
static int64_t x143 = -3821682621995LL;
uint32_t x159 = 319343U;
static volatile uint32_t t36 = 109015U;
uint8_t x167 = 93U;
static int64_t x177 = INT64_MIN;
volatile int8_t x178 = -18;
volatile int32_t x179 = INT32_MIN;
uint8_t x181 = UINT8_MAX;
uint32_t x184 = 63912130U;
uint64_t x191 = UINT64_MAX;
uint8_t x192 = 29U;
volatile uint8_t x205 = UINT8_MAX;
uint64_t t47 = 11946624898675709LLU;
int32_t x221 = INT32_MAX;
int64_t t50 = 196129LL;
int8_t x235 = INT8_MIN;
uint8_t x242 = 0U;
static volatile uint64_t t54 = 1134688230130743743LLU;
int8_t x260 = INT8_MIN;
static int8_t x265 = INT8_MIN;
uint32_t x267 = UINT32_MAX;
volatile uint32_t t57 = 193546656U;
static uint32_t x272 = UINT32_MAX;
static uint8_t x276 = 48U;
int16_t x278 = INT16_MIN;
int32_t x281 = -1;
static int16_t x282 = INT16_MIN;
uint64_t x283 = UINT64_MAX;
static int64_t x296 = INT64_MAX;
uint8_t x305 = UINT8_MAX;
static uint64_t x306 = UINT64_MAX;
uint16_t x308 = UINT16_MAX;
static uint64_t t65 = 135880921776LLU;
static int16_t x312 = INT16_MIN;
int8_t x318 = 14;
int64_t x322 = INT64_MAX;
volatile int64_t t69 = -57260LL;
int64_t x335 = 958LL;
int32_t x341 = INT32_MIN;
static int16_t x350 = INT16_MAX;
int8_t x357 = 23;
int16_t x378 = INT16_MIN;
static int8_t x379 = INT8_MIN;
int32_t x384 = INT32_MIN;
int32_t x386 = INT32_MIN;
int32_t x388 = INT32_MAX;
int64_t x399 = -1LL;
int8_t x405 = 0;
volatile int64_t x418 = 60LL;
static int64_t t92 = -87394254715177LL;
volatile int64_t t93 = -3287582452278891LL;
uint32_t x425 = UINT32_MAX;
uint16_t x428 = 216U;
static int16_t x432 = INT16_MIN;
volatile int8_t x433 = INT8_MIN;
volatile int8_t x440 = -1;


void f0(void) {
	volatile uint32_t x1 = 7U;
	int64_t x2 = INT64_MAX;
	int64_t x3 = INT64_MAX;

	t0 = ((x1-(x2/x3))/x4);

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -255015738LL;
	static int64_t x6 = 495489223LL;
	uint8_t x7 = 5U;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 47036510621713LL;

	t1 = ((x5-(x6/x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	static uint16_t x10 = UINT16_MAX;
	static int32_t x12 = 3;
	static uint64_t t2 = 2100329434929124LLU;

	t2 = ((x9-(x10/x11))/x12);

	if (t2 != 6148914691236517162LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int32_t x14 = -1;
	int16_t x15 = INT16_MAX;
	uint8_t x16 = 2U;
	int32_t t3 = -15;

	t3 = ((x13-(x14/x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	volatile int16_t x19 = INT16_MAX;
	volatile int32_t t4 = 1;

	t4 = ((x17-(x18/x19))/x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -1LL;
	int64_t x27 = 28873537343743915LL;
	volatile int32_t x28 = INT32_MAX;
	int64_t t5 = -2110523573237404032LL;

	t5 = ((x25-(x26/x27))/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MIN;
	static uint32_t x31 = UINT32_MAX;
	uint16_t x32 = 6235U;
	uint64_t t6 = 8909976231LLU;

	t6 = ((x29-(x30/x31))/x32);

	if (t6 != 2958579642936576LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x35 = -1LL;
	static int32_t x36 = -3495151;
	int64_t t7 = 1051121155LL;

	t7 = ((x33-(x34/x35))/x36);

	if (t7 != 614LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -102426745170LL;
	int16_t x38 = 1;
	static volatile int16_t x39 = -1;
	volatile int16_t x40 = INT16_MIN;
	volatile int64_t t8 = -58078779724LL;

	t8 = ((x37-(x38/x39))/x40);

	if (t8 != 3125816LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x43 = -1;
	uint64_t x44 = 10746LLU;
	volatile uint64_t t9 = 237440LLU;

	t9 = ((x41-(x42/x43))/x44);

	if (t9 != 1716614933343527LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 1803107;
	uint64_t x46 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;
	uint64_t t10 = 33592308LLU;

	t10 = ((x45-(x46/x47))/x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = UINT8_MAX;
	static uint32_t x51 = 135520697U;
	int16_t x52 = INT16_MIN;
	static volatile uint32_t t11 = 19U;

	t11 = ((x49-(x50/x51))/x52);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = 22;
	static int64_t x59 = INT64_MIN;
	volatile uint64_t t12 = 43943845941038538LLU;

	t12 = ((x57-(x58/x59))/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	int8_t x66 = -1;
	int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MIN;
	int64_t t13 = -29815082LL;

	t13 = ((x65-(x66/x67))/x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = 6U;
	int64_t x71 = INT64_MAX;
	uint16_t x72 = UINT16_MAX;
	int64_t t14 = 1006820613310360439LL;

	t14 = ((x69-(x70/x71))/x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x74 = 75U;
	uint32_t x75 = UINT32_MAX;
	uint16_t x76 = UINT16_MAX;

	t15 = ((x73-(x74/x75))/x76);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = 8;
	int16_t x82 = -1;
	int16_t x83 = INT16_MAX;
	static volatile int32_t t16 = -871217;

	t16 = ((x81-(x82/x83))/x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x85 = 17858;
	int64_t x87 = -1LL;
	int8_t x88 = 11;
	static volatile int64_t t17 = -1024198LL;

	t17 = ((x85-(x86/x87))/x88);

	if (t17 != 1611LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	static int64_t x91 = -1793024LL;
	volatile uint64_t x92 = 13605LLU;
	volatile uint64_t t18 = 364LLU;

	t18 = ((x89-(x90/x91))/x92);

	if (t18 != 1355879755509703LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MAX;
	volatile uint8_t x94 = 33U;
	volatile uint16_t x95 = 793U;
	int64_t x96 = -36181936206LL;
	volatile int64_t t19 = -4224494805711LL;

	t19 = ((x93-(x94/x95))/x96);

	if (t19 != -254916486LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 20585LL;
	volatile int8_t x98 = -1;
	int16_t x99 = -59;
	static int16_t x100 = 1;
	int64_t t20 = 416762416LL;

	t20 = ((x97-(x98/x99))/x100);

	if (t20 != 20585LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	int32_t x104 = INT32_MAX;
	static int32_t t21 = -265246129;

	t21 = ((x101-(x102/x103))/x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = -1;
	uint32_t x107 = UINT32_MAX;
	volatile int16_t x108 = -3;
	uint32_t t22 = 296U;

	t22 = ((x105-(x106/x107))/x108);

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 2934243512709LLU;
	int64_t x110 = -1LL;
	int8_t x111 = -7;
	uint32_t x112 = 86551U;
	volatile uint64_t t23 = 12LLU;

	t23 = ((x109-(x110/x111))/x112);

	if (t23 != 33901901LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	uint64_t x114 = 1654297687877LLU;
	static int32_t x115 = 497;
	uint32_t x116 = UINT32_MAX;
	uint64_t t24 = 57LLU;

	t24 = ((x113-(x114/x115))/x116);

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 2031548LLU;
	uint32_t x118 = 18597U;
	static int16_t x119 = -1611;
	static int32_t x120 = INT32_MIN;
	volatile uint64_t t25 = 322475LLU;

	t25 = ((x117-(x118/x119))/x120);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MAX;
	static int32_t x122 = -1;
	static int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MIN;
	int64_t t26 = 16356964273525055LL;

	t26 = ((x121-(x122/x123))/x124);

	if (t26 != -281474976710655LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	int16_t x126 = 53;
	int64_t x127 = INT64_MIN;
	volatile int64_t t27 = -1009369432LL;

	t27 = ((x125-(x126/x127))/x128);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x130 = INT16_MAX;
	static int16_t x131 = 2900;
	volatile int8_t x132 = 7;

	t28 = ((x129-(x130/x131))/x132);

	if (t28 != -588) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x134 = 203705146438776LLU;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MIN;
	static uint64_t t29 = 16193966838LLU;

	t29 = ((x133-(x134/x135))/x136);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = -7LL;
	int32_t x138 = INT32_MAX;
	volatile int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MAX;
	volatile int64_t t30 = -271728849862LL;

	t30 = ((x137-(x138/x139))/x140);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -8110;
	int32_t x142 = INT32_MIN;
	uint64_t x144 = 15448026435LLU;
	static volatile uint64_t t31 = 4770771108LLU;

	t31 = ((x141-(x142/x143))/x144);

	if (t31 != 1194116552LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = -1;
	uint16_t x148 = 29U;
	volatile uint64_t t32 = 2859473LLU;

	t32 = ((x145-(x146/x147))/x148);

	if (t32 != 318047311615681924LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x149 = -51;
	uint16_t x150 = 1173U;
	static int32_t x151 = -1089604;
	int16_t x152 = INT16_MIN;
	volatile int32_t t33 = -1;

	t33 = ((x149-(x150/x151))/x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x153 = 85U;
	int64_t x154 = -1905155009148713LL;
	volatile int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t34 = 11582437205998808LL;

	t34 = ((x153-(x154/x155))/x156);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -116860951908LL;
	int8_t x158 = -1;
	int16_t x160 = INT16_MAX;
	int64_t t35 = -438210698796LL;

	t35 = ((x157-(x158/x159))/x160);

	if (t35 != -3566422LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = INT8_MAX;
	static uint32_t x162 = 62U;
	int32_t x163 = 5261326;
	uint8_t x164 = 7U;

	t36 = ((x161-(x162/x163))/x164);

	if (t36 != 18U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t37 = -5378938;

	t37 = ((x165-(x166/x167))/x168);

	if (t37 != -703) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -1LL;
	volatile int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	volatile int8_t x172 = 28;
	int64_t t38 = 179535222LL;

	t38 = ((x169-(x170/x171))/x172);

	if (t38 != -10052677739666LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t39 = 487LLU;

	t39 = ((x177-(x178/x179))/x180);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = -191;
	volatile uint32_t t40 = 67027924U;

	t40 = ((x181-(x182/x183))/x184);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = UINT16_MAX;
	static int8_t x186 = -1;
	static int64_t x187 = 208030LL;
	int8_t x188 = INT8_MIN;
	int64_t t41 = 29201544136400LL;

	t41 = ((x185-(x186/x187))/x188);

	if (t41 != -511LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x189 = INT64_MAX;
	static uint32_t x190 = UINT32_MAX;
	uint64_t t42 = 50LLU;

	t42 = ((x189-(x190/x191))/x192);

	if (t42 != 318047311615681924LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = -11;
	int8_t x194 = -12;
	static int32_t x195 = 2190;
	int64_t x196 = INT64_MIN;
	volatile int64_t t43 = 3027LL;

	t43 = ((x193-(x194/x195))/x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 18;
	int64_t x198 = INT64_MIN;
	int32_t x199 = 2271;
	uint64_t x200 = 20738LLU;
	volatile uint64_t t44 = 1976508705LLU;

	t44 = ((x197-(x198/x199))/x200);

	if (t44 != 195841948966LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x206 = 270291U;
	volatile int32_t x207 = INT32_MIN;
	int64_t x208 = 6122983906933LL;
	int64_t t45 = -216834814879292127LL;

	t45 = ((x205-(x206/x207))/x208);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MAX;
	int16_t x210 = INT16_MAX;
	int16_t x211 = -1;
	uint8_t x212 = 1U;
	static volatile int32_t t46 = -1783980;

	t46 = ((x209-(x210/x211))/x212);

	if (t46 != 32894) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x214 = 3564483LL;
	int32_t x215 = 3;
	static int64_t x216 = -1LL;

	t47 = ((x213-(x214/x215))/x216);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x217 = INT16_MAX;
	uint8_t x218 = 0U;
	volatile int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	int64_t t48 = 15848LL;

	t48 = ((x217-(x218/x219))/x220);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int16_t x224 = -1;
	volatile int64_t t49 = 139385735453594LL;

	t49 = ((x221-(x222/x223))/x224);

	if (t49 != 2147483649LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x229 = 3U;
	volatile uint16_t x230 = UINT16_MAX;
	int64_t x231 = INT64_MIN;
	int32_t x232 = -128184028;

	t50 = ((x229-(x230/x231))/x232);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x233 = 6455514U;
	int16_t x234 = INT16_MIN;
	volatile int8_t x236 = -1;
	volatile uint32_t t51 = 5751150U;

	t51 = ((x233-(x234/x235))/x236);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = -1;
	uint8_t x238 = UINT8_MAX;
	volatile int32_t x239 = 88296367;
	int64_t x240 = -1LL;
	int64_t t52 = -57LL;

	t52 = ((x237-(x238/x239))/x240);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x241 = 23U;
	volatile int16_t x243 = INT16_MIN;
	static uint64_t x244 = UINT64_MAX;
	volatile uint64_t t53 = 1403611451LLU;

	t53 = ((x241-(x242/x243))/x244);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x245 = INT64_MIN;
	uint64_t x246 = 0LLU;
	volatile int64_t x247 = INT64_MIN;
	int16_t x248 = 4188;

	t54 = ((x245-(x246/x247))/x248);

	if (t54 != 2202333342133423LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -1757815;
	uint64_t x250 = 13LLU;
	volatile int64_t x251 = INT64_MIN;
	static int64_t x252 = INT64_MIN;
	uint64_t t55 = 1767579LLU;

	t55 = ((x249-(x250/x251))/x252);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = 0LL;
	volatile uint64_t x258 = 117LLU;
	uint16_t x259 = 123U;
	uint64_t t56 = 6608012860234LLU;

	t56 = ((x257-(x258/x259))/x260);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x266 = UINT16_MAX;
	int16_t x268 = INT16_MAX;

	t57 = ((x265-(x266/x267))/x268);

	if (t57 != 131075U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x269 = 54U;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MIN;
	uint64_t t58 = 1LLU;

	t58 = ((x269-(x270/x271))/x272);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MAX;
	int32_t x275 = INT32_MIN;
	int32_t t59 = -218625;

	t59 = ((x273-(x274/x275))/x276);

	if (t59 != -682) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = 152LL;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 222750U;
	int64_t t60 = 3797771839LL;

	t60 = ((x277-(x278/x279))/x280);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x284 = INT8_MIN;
	volatile uint64_t t61 = 620LLU;

	t61 = ((x281-(x282/x283))/x284);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = -18;
	uint32_t x290 = UINT32_MAX;
	int16_t x291 = INT16_MIN;
	int64_t x292 = -1LL;
	int64_t t62 = 2010002868585LL;

	t62 = ((x289-(x290/x291))/x292);

	if (t62 != -4294967277LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = 0;
	int8_t x294 = -1;
	static int16_t x295 = -1;
	volatile int64_t t63 = -63814641587631LL;

	t63 = ((x293-(x294/x295))/x296);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = 19U;
	int64_t x298 = -1LL;
	uint16_t x299 = 2U;
	volatile int64_t x300 = INT64_MAX;
	volatile int64_t t64 = -9111LL;

	t64 = ((x297-(x298/x299))/x300);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x307 = 15LL;

	t65 = ((x305-(x306/x307))/x308);

	if (t65 != 262713986960589LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = UINT16_MAX;
	uint16_t x310 = 47U;
	uint32_t x311 = UINT32_MAX;
	volatile uint32_t t66 = 2065496U;

	t66 = ((x309-(x310/x311))/x312);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = 1795;
	volatile uint16_t x314 = 57U;
	uint8_t x315 = 2U;
	int32_t x316 = INT32_MIN;
	int32_t t67 = 5537;

	t67 = ((x313-(x314/x315))/x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	static uint16_t x320 = 2798U;
	volatile int32_t t68 = -3541;

	t68 = ((x317-(x318/x319))/x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = INT16_MIN;
	int16_t x323 = -1872;
	static int16_t x324 = 20;

	t69 = ((x321-(x322/x323))/x324);

	if (t69 != 246350748845978LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x325 = 0U;
	int16_t x326 = INT16_MAX;
	int64_t x327 = -7064663827516450LL;
	int8_t x328 = -1;
	volatile int64_t t70 = -62LL;

	t70 = ((x325-(x326/x327))/x328);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x333 = 1557042LLU;
	volatile int8_t x334 = INT8_MIN;
	int64_t x336 = -96LL;
	uint64_t t71 = 1LLU;

	t71 = ((x333-(x334/x335))/x336);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = -1;
	uint64_t x338 = 10346490029959LLU;
	uint8_t x339 = 1U;
	volatile int32_t x340 = 14467;
	volatile uint64_t t72 = 69139545553582708LLU;

	t72 = ((x337-(x338/x339))/x340);

	if (t72 != 1275090462930774LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x342 = 4558;
	int8_t x343 = -54;
	static volatile uint64_t x344 = 5145127073113874LLU;
	volatile uint64_t t73 = 486717046036LLU;

	t73 = ((x341-(x342/x343))/x344);

	if (t73 != 3585LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = 2935994LL;
	volatile uint64_t x346 = UINT64_MAX;
	uint64_t x347 = 18077LLU;
	int8_t x348 = INT8_MIN;
	volatile uint64_t t74 = 61810443503726LLU;

	t74 = ((x345-(x346/x347))/x348);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x349 = 28U;
	uint32_t x351 = UINT32_MAX;
	static int16_t x352 = -1;
	uint32_t t75 = 20U;

	t75 = ((x349-(x350/x351))/x352);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = INT8_MAX;
	static volatile int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = 4;
	int32_t t76 = -11455126;

	t76 = ((x353-(x354/x355))/x356);

	if (t76 != 31) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x358 = INT8_MIN;
	int32_t x359 = 1;
	int16_t x360 = -2331;
	int32_t t77 = -290;

	t77 = ((x357-(x358/x359))/x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x361 = INT8_MIN;
	static int64_t x362 = INT64_MIN;
	static int32_t x363 = INT32_MIN;
	volatile int64_t x364 = INT64_MIN;
	int64_t t78 = 98LL;

	t78 = ((x361-(x362/x363))/x364);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x365 = -1;
	int64_t x366 = -1LL;
	static volatile int32_t x367 = INT32_MIN;
	int16_t x368 = 1592;
	volatile int64_t t79 = -47807LL;

	t79 = ((x365-(x366/x367))/x368);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x369 = -1;
	int8_t x370 = INT8_MAX;
	volatile int64_t x371 = 16922943745525968LL;
	int32_t x372 = INT32_MIN;
	volatile int64_t t80 = -1LL;

	t80 = ((x369-(x370/x371))/x372);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x373 = INT16_MAX;
	volatile uint32_t x374 = 0U;
	int16_t x375 = INT16_MAX;
	int64_t x376 = INT64_MIN;
	static volatile int64_t t81 = 6015845533092752LL;

	t81 = ((x373-(x374/x375))/x376);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x377 = INT16_MIN;
	uint16_t x380 = 2U;
	static volatile int32_t t82 = -5514;

	t82 = ((x377-(x378/x379))/x380);

	if (t82 != -16512) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x381 = 639492;
	volatile int16_t x382 = INT16_MAX;
	int32_t x383 = 7574548;
	volatile int32_t t83 = 466332444;

	t83 = ((x381-(x382/x383))/x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x385 = -1962663694604701782LL;
	int8_t x387 = INT8_MIN;
	int64_t t84 = 2596491452053LL;

	t84 = ((x385-(x386/x387))/x388);

	if (t84 != -913936503LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = 3287198LLU;
	int16_t x390 = -249;
	uint64_t x391 = 11LLU;
	int8_t x392 = INT8_MIN;
	volatile uint64_t t85 = 46960160218947LLU;

	t85 = ((x389-(x390/x391))/x392);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	volatile int8_t x396 = INT8_MIN;
	volatile uint64_t t86 = 2260476395LLU;

	t86 = ((x393-(x394/x395))/x396);

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x397 = INT16_MAX;
	int32_t x398 = INT32_MIN;
	int32_t x400 = 9881;
	static int64_t t87 = 6913513917091221LL;

	t87 = ((x397-(x398/x399))/x400);

	if (t87 != -217331LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = INT32_MIN;
	int64_t x402 = INT64_MIN;
	volatile uint8_t x403 = 1U;
	int8_t x404 = 1;
	volatile int64_t t88 = -8451739944993LL;

	t88 = ((x401-(x402/x403))/x404);

	if (t88 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x406 = INT16_MAX;
	int32_t x407 = -6297;
	int64_t x408 = INT64_MAX;
	volatile int64_t t89 = 0LL;

	t89 = ((x405-(x406/x407))/x408);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x409 = 1U;
	static int64_t x410 = -1LL;
	static uint16_t x411 = 847U;
	int16_t x412 = INT16_MIN;
	int64_t t90 = 3LL;

	t90 = ((x409-(x410/x411))/x412);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = INT64_MIN;
	static int32_t x414 = INT32_MIN;
	int8_t x415 = 7;
	int64_t x416 = INT64_MAX;
	static volatile int64_t t91 = 123353LL;

	t91 = ((x413-(x414/x415))/x416);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x417 = 52863;
	uint16_t x419 = UINT16_MAX;
	uint32_t x420 = 10167378U;

	t92 = ((x417-(x418/x419))/x420);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MIN;
	static volatile int64_t x422 = INT64_MIN;
	uint8_t x423 = 48U;
	int16_t x424 = 2349;

	t93 = ((x421-(x422/x423))/x424);

	if (t93 != 81802291168010LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x426 = 6996U;
	uint16_t x427 = UINT16_MAX;
	volatile uint32_t t94 = 9529374U;

	t94 = ((x425-(x426/x427))/x428);

	if (t94 != 19884107U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x429 = UINT8_MAX;
	int8_t x430 = INT8_MIN;
	volatile int16_t x431 = INT16_MIN;
	int32_t t95 = 12748616;

	t95 = ((x429-(x430/x431))/x432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x434 = INT32_MAX;
	int8_t x435 = 2;
	volatile uint8_t x436 = UINT8_MAX;
	int32_t t96 = 355;

	t96 = ((x433-(x434/x435))/x436);

	if (t96 != -4210752) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x437 = 1130U;
	int32_t x438 = -67075352;
	int32_t x439 = -27;
	uint32_t t97 = 330369U;

	t97 = ((x437-(x438/x439))/x440);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x441 = 5123262804791LLU;
	int16_t x442 = INT16_MIN;
	int8_t x443 = INT8_MAX;
	uint16_t x444 = UINT16_MAX;
	volatile uint64_t t98 = 1975425129718537LLU;

	t98 = ((x441-(x442/x443))/x444);

	if (t98 != 78175979LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x445 = INT32_MIN;
	int64_t x446 = INT64_MIN;
	uint16_t x447 = UINT16_MAX;
	volatile int16_t x448 = INT16_MAX;
	int64_t t99 = 282961330262105680LL;

	t99 = ((x445-(x446/x447))/x448);

	if (t99 != 4295098373LL) { NG(); } else { ; }
	
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

