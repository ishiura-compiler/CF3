#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
static int64_t x8 = INT64_MIN;
uint32_t x16 = 1012809310U;
int64_t x18 = 15944416LL;
int32_t x20 = INT32_MIN;
uint8_t x21 = 6U;
volatile int64_t t5 = -400667066LL;
uint16_t x28 = 7208U;
uint16_t x29 = 8270U;
uint32_t x31 = UINT32_MAX;
static uint32_t t7 = 0U;
uint8_t x37 = UINT8_MAX;
int32_t x39 = -1;
int64_t x40 = INT64_MIN;
uint8_t x42 = UINT8_MAX;
int8_t x49 = INT8_MIN;
volatile int32_t t13 = 14940;
int16_t x68 = INT16_MAX;
int64_t x73 = -1LL;
int8_t x75 = 43;
int8_t x82 = -3;
int64_t x83 = INT64_MAX;
int8_t x93 = -54;
static volatile int32_t t25 = 723933;
int32_t x115 = 1;
volatile int64_t t27 = -1926702110089987727LL;
uint32_t x118 = 27819U;
static int8_t x120 = INT8_MAX;
int32_t x123 = INT32_MAX;
uint32_t x130 = UINT32_MAX;
uint32_t x132 = 7U;
volatile int16_t x136 = INT16_MIN;
static uint64_t t32 = UINT64_MAX;
int16_t x139 = INT16_MIN;
int64_t x147 = INT64_MIN;
volatile uint8_t x152 = UINT8_MAX;
volatile uint64_t x155 = 6003258178150344LLU;
int16_t x160 = 619;
volatile int64_t t39 = 368589962LL;
uint64_t x168 = 3143951450537647LLU;
uint8_t x175 = 17U;
int64_t x177 = INT64_MIN;
uint16_t x178 = UINT16_MAX;
int16_t x184 = -1;
static volatile int32_t x185 = INT32_MIN;
uint64_t x193 = 8579848474242288LLU;
int64_t x199 = -264058376712338LL;
uint32_t x208 = 279U;
int64_t x210 = INT64_MAX;
volatile int16_t x216 = -1;
int16_t x221 = INT16_MIN;
volatile int32_t x225 = 114638482;
int64_t x239 = 116027299859688612LL;
int64_t x244 = -1LL;
uint64_t t59 = UINT64_MAX;
volatile int32_t x255 = -45;
static uint32_t x256 = 79907U;
volatile uint32_t t62 = 4326U;
uint16_t x258 = UINT16_MAX;
uint8_t x259 = UINT8_MAX;
int8_t x262 = INT8_MIN;
int8_t x264 = INT8_MIN;
int16_t x268 = -5;
static volatile int64_t t65 = -16818309803722LL;
uint16_t x271 = 7536U;
uint16_t x276 = 1573U;
uint16_t x277 = 15775U;
volatile int64_t x279 = INT64_MIN;
volatile int64_t t68 = -26313259880726604LL;
int64_t t70 = -6337157465776751LL;
volatile uint16_t x291 = 2657U;
volatile uint64_t t71 = 1748757284189LLU;
int32_t x294 = -40;
static int64_t x296 = -74LL;
static volatile int64_t t73 = 5675224802257173LL;
volatile int64_t t74 = INT64_MAX;
static uint64_t t75 = 319561LLU;
static uint32_t x310 = UINT32_MAX;
uint32_t x312 = 984516042U;
volatile int64_t t76 = 8153176726818LL;
static volatile int16_t x314 = INT16_MIN;
volatile int64_t t78 = 2474568922886LL;
uint8_t x322 = 0U;
uint32_t x328 = 144164617U;
int16_t x329 = -1;
int8_t x331 = INT8_MIN;
uint64_t x338 = 5356545993140541080LLU;
int64_t x339 = -5156LL;
int32_t x340 = -1;
static uint8_t x355 = UINT8_MAX;
volatile uint64_t x357 = 171720715750433LLU;
int8_t x363 = INT8_MIN;
static int32_t t87 = -11375;
static int8_t x371 = INT8_MAX;
int64_t t89 = 2083285595299587LL;
volatile int8_t x374 = INT8_MAX;
uint16_t x378 = UINT16_MAX;
volatile int64_t t92 = 11925903LL;
int32_t x387 = INT32_MAX;
int32_t x392 = -1;
uint8_t x395 = UINT8_MAX;
int32_t x397 = INT32_MIN;
uint64_t x404 = 11946882540LLU;
int32_t x406 = -6470820;
static volatile int8_t x409 = INT8_MAX;
int16_t x411 = 149;
int16_t x412 = 7373;


void f0(void) {
	volatile uint16_t x2 = 568U;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x1-(x2/x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MAX;
	int64_t t1 = -64471119275194LL;

	t1 = ((x5-(x6/x7))|x8);

	if (t1 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 39U;
	volatile uint8_t x10 = UINT8_MAX;
	int16_t x11 = 7158;
	volatile int8_t x12 = -1;
	int32_t t2 = -144;

	t2 = ((x9-(x10/x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static uint32_t x14 = 1392U;
	static int16_t x15 = -1;
	volatile int64_t t3 = INT64_MAX;

	t3 = ((x13-(x14/x15))|x16);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	volatile uint8_t x19 = UINT8_MAX;
	static volatile int64_t t4 = -6117571306600LL;

	t4 = ((x17-(x18/x19))|x20);

	if (t4 != -62528LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 109U;
	int64_t x23 = 4097321LL;
	static uint8_t x24 = 7U;

	t5 = ((x21-(x22/x23))|x24);

	if (t5 != 7LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 8131687U;
	static int64_t x26 = -1LL;
	static int16_t x27 = INT16_MAX;
	int64_t t6 = 56185751596375788LL;

	t6 = ((x25-(x26/x27))|x28);

	if (t6 != 8133743LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x30 = UINT16_MAX;
	static int16_t x32 = 186;

	t7 = ((x29-(x30/x31))|x32);

	if (t7 != 8446U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	static int32_t x34 = INT32_MIN;
	volatile uint8_t x35 = UINT8_MAX;
	static int8_t x36 = -7;
	int32_t t8 = 633773591;

	t8 = ((x33-(x34/x35))|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MIN;
	int64_t t9 = 15318743LL;

	t9 = ((x37-(x38/x39))|x40);

	if (t9 != -32513LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 57U;
	int32_t x43 = -9285970;
	int32_t x44 = -1;
	int32_t t10 = -319361;

	t10 = ((x41-(x42/x43))|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -1LL;
	int8_t x46 = -1;
	uint16_t x47 = 6100U;
	static uint16_t x48 = UINT16_MAX;
	int64_t t11 = -10066306109635LL;

	t11 = ((x45-(x46/x47))|x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int8_t x51 = 13;
	static uint64_t x52 = UINT64_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x49-(x50/x51))|x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	volatile int32_t x54 = INT32_MIN;
	static uint16_t x55 = 2U;
	static volatile int8_t x56 = 39;

	t13 = ((x53-(x54/x55))|x56);

	if (t13 != 1073774591) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 62U;
	uint64_t x58 = 2227161138LLU;
	int32_t x59 = INT32_MIN;
	int32_t x60 = -1;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x57-(x58/x59))|x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 12643U;
	uint8_t x62 = 5U;
	int64_t x63 = -1LL;
	uint64_t x64 = 70953496484LLU;
	static volatile uint64_t t15 = 120LLU;

	t15 = ((x61-(x62/x63))|x64);

	if (t15 != 70953500652LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 55;
	static uint32_t x66 = UINT32_MAX;
	static int16_t x67 = INT16_MIN;
	volatile uint32_t t16 = 68194U;

	t16 = ((x65-(x66/x67))|x68);

	if (t16 != 32767U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 1U;
	int16_t x70 = INT16_MIN;
	static volatile uint32_t x71 = 33U;
	uint16_t x72 = 147U;
	static volatile uint32_t t17 = 14608U;

	t17 = ((x69-(x70/x71))|x72);

	if (t17 != 4164817911U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -7729;
	int8_t x76 = INT8_MIN;
	int64_t t18 = -913542LL;

	t18 = ((x73-(x74/x75))|x76);

	if (t18 != -78LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MIN;
	int8_t x79 = -3;
	int8_t x80 = 1;
	int64_t t19 = -149449654220LL;

	t19 = ((x77-(x78/x79))|x80);

	if (t19 != -3074457341323291307LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 27U;
	int8_t x84 = -3;
	int64_t t20 = -1LL;

	t20 = ((x81-(x82/x83))|x84);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MAX;
	volatile int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MAX;
	volatile int64_t t21 = 1LL;

	t21 = ((x85-(x86/x87))|x88);

	if (t21 != 2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	static int64_t x90 = INT64_MIN;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 26U;
	int64_t t22 = -31249728838117849LL;

	t22 = ((x89-(x90/x91))|x92);

	if (t22 != 32766LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x94 = 5376921U;
	volatile uint8_t x95 = UINT8_MAX;
	static uint16_t x96 = UINT16_MAX;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = ((x93-(x94/x95))|x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -12992;
	static int32_t x98 = INT32_MAX;
	int16_t x99 = 5;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 7291;

	t24 = ((x97-(x98/x99))|x100);

	if (t24 != -89) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	int32_t x102 = INT32_MIN;
	int32_t x103 = -98;
	int32_t x104 = INT32_MAX;

	t25 = ((x101-(x102/x103))|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 1;
	int32_t x106 = INT32_MIN;
	static volatile int16_t x107 = INT16_MAX;
	uint32_t x108 = 5652177U;
	volatile uint32_t t26 = 62765461U;

	t26 = ((x105-(x106/x107))|x108);

	if (t26 != 5717715U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = 0;
	int64_t x116 = INT64_MIN;

	t27 = ((x113-(x114/x115))|x116);

	if (t27 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x117 = UINT16_MAX;
	uint32_t x119 = UINT32_MAX;
	static uint32_t t28 = 373578U;

	t28 = ((x117-(x118/x119))|x120);

	if (t28 != 65535U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x121 = UINT16_MAX;
	int16_t x122 = 1;
	static int32_t x124 = -3;
	volatile int32_t t29 = 5479;

	t29 = ((x121-(x122/x123))|x124);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = 443372LL;
	int16_t x127 = -1;
	volatile int8_t x128 = -1;
	volatile int64_t t30 = 10411LL;

	t30 = ((x125-(x126/x127))|x128);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -422513018LL;
	uint16_t x131 = 2662U;
	static int64_t t31 = -12964299926LL;

	t31 = ((x129-(x130/x131))|x132);

	if (t31 != -424126449LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x133 = UINT64_MAX;
	uint64_t x134 = 1699502399282LLU;
	int64_t x135 = INT64_MIN;

	t32 = ((x133-(x134/x135))|x136);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MAX;
	uint8_t x140 = 1U;
	int32_t t33 = -694316649;

	t33 = ((x137-(x138/x139))|x140);

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x141 = -1;
	uint8_t x142 = 6U;
	volatile uint32_t x143 = 63827069U;
	int16_t x144 = -7081;
	static volatile uint32_t t34 = UINT32_MAX;

	t34 = ((x141-(x142/x143))|x144);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 57553006615082LL;
	int64_t x146 = INT64_MIN;
	int32_t x148 = -1;
	volatile int64_t t35 = -45211841961LL;

	t35 = ((x145-(x146/x147))|x148);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = -1;
	int32_t x150 = -1;
	int8_t x151 = 57;
	int32_t t36 = -966761;

	t36 = ((x149-(x150/x151))|x152);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	static int16_t x154 = INT16_MIN;
	int16_t x156 = -1;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x153-(x154/x155))|x156);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -862240967432LL;
	uint8_t x158 = 0U;
	int8_t x159 = INT8_MIN;
	volatile int64_t t38 = -579137LL;

	t38 = ((x157-(x158/x159))|x160);

	if (t38 != -862240966917LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	int64_t x162 = 61770LL;
	uint16_t x163 = 12451U;
	int16_t x164 = INT16_MAX;

	t39 = ((x161-(x162/x163))|x164);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = -93839103;
	static uint16_t x166 = 23258U;
	int16_t x167 = 1;
	volatile uint64_t t40 = 3148472LLU;

	t40 = ((x165-(x166/x167))|x168);

	if (t40 != 18446744073699589807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x169 = 121374994U;
	int32_t x170 = 7;
	int16_t x171 = INT16_MIN;
	static int32_t x172 = INT32_MIN;
	uint32_t t41 = 622U;

	t41 = ((x169-(x170/x171))|x172);

	if (t41 != 2268858642U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	uint8_t x174 = 5U;
	volatile uint8_t x176 = 0U;
	volatile int32_t t42 = -590;

	t42 = ((x173-(x174/x175))|x176);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x179 = 126752U;
	static int32_t x180 = -55268284;
	volatile int64_t t43 = -259080LL;

	t43 = ((x177-(x178/x179))|x180);

	if (t43 != -55268284LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = UINT32_MAX;
	uint8_t x182 = 101U;
	static int32_t x183 = INT32_MIN;
	static uint32_t t44 = UINT32_MAX;

	t44 = ((x181-(x182/x183))|x184);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x186 = -13202;
	volatile uint32_t x187 = 5306U;
	static volatile int32_t x188 = INT32_MIN;
	static volatile uint32_t t45 = 1812068999U;

	t45 = ((x185-(x186/x187))|x188);

	if (t45 != 4294157844U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x189 = 3121343156030487783LLU;
	volatile uint32_t x190 = UINT32_MAX;
	uint8_t x191 = UINT8_MAX;
	static int8_t x192 = INT8_MAX;
	volatile uint64_t t46 = 1003072503543218LLU;

	t46 = ((x189-(x190/x191))|x192);

	if (t46 != 3121343156013644799LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x194 = 0U;
	int64_t x195 = INT64_MAX;
	int8_t x196 = 0;
	volatile uint64_t t47 = 167889LLU;

	t47 = ((x193-(x194/x195))|x196);

	if (t47 != 8579848474242288LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = UINT64_MAX;
	uint32_t x198 = 5U;
	static uint32_t x200 = UINT32_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = ((x197-(x198/x199))|x200);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x201 = 4;
	static int64_t x202 = -9LL;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MAX;
	static int64_t t49 = -32578603297LL;

	t49 = ((x201-(x202/x203))|x204);

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = UINT16_MAX;
	uint32_t x206 = 1370700700U;
	volatile uint16_t x207 = 2506U;
	uint32_t t50 = 5173192U;

	t50 = ((x205-(x206/x207))|x208);

	if (t50 != 4294485887U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 71U;
	volatile uint32_t x211 = 146268U;
	uint64_t x212 = 494114197319803476LLU;
	volatile uint64_t t51 = 25LLU;

	t51 = ((x209-(x210/x211))|x212);

	if (t51 != 18446733897757359061LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = INT32_MIN;
	int32_t x214 = 56;
	int32_t x215 = INT32_MIN;
	int32_t t52 = 0;

	t52 = ((x213-(x214/x215))|x216);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 4108005095618LLU;
	int16_t x218 = -1;
	volatile int16_t x219 = -63;
	static volatile uint32_t x220 = 29111U;
	volatile uint64_t t53 = 46792281889870718LLU;

	t53 = ((x217-(x218/x219))|x220);

	if (t53 != 4108005112311LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x222 = 22U;
	int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t54 = 48LL;

	t54 = ((x221-(x222/x223))|x224);

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 925351922391LLU;
	uint32_t x228 = 1659501U;
	static volatile uint64_t t55 = 162040541856LLU;

	t55 = ((x225-(x226/x227))|x228);

	if (t55 != 96293501LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -850851291010LL;
	int16_t x230 = INT16_MIN;
	volatile uint64_t x231 = 780928110013595LLU;
	int64_t x232 = INT64_MAX;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = ((x229-(x230/x231))|x232);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = 14;
	static uint16_t x234 = 3638U;
	static int16_t x235 = -1;
	volatile int64_t x236 = -1LL;
	volatile int64_t t57 = 8213781301LL;

	t57 = ((x233-(x234/x235))|x236);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = 72502801941182999LL;
	int8_t x240 = -1;
	volatile int64_t t58 = -22143469003472071LL;

	t58 = ((x237-(x238/x239))|x240);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = -1;
	int8_t x242 = INT8_MAX;
	uint64_t x243 = UINT64_MAX;

	t59 = ((x241-(x242/x243))|x244);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x245 = INT64_MIN;
	uint8_t x246 = 1U;
	int16_t x247 = -1;
	static uint8_t x248 = 9U;
	static int64_t t60 = 607165093463LL;

	t60 = ((x245-(x246/x247))|x248);

	if (t60 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = -1076330427445535LL;
	static volatile uint64_t x250 = 1666643229469986LLU;
	int32_t x251 = INT32_MIN;
	static volatile uint32_t x252 = UINT32_MAX;
	volatile uint64_t t61 = 136829009LLU;

	t61 = ((x249-(x250/x251))|x252);

	if (t61 != 18445667746315239423LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MAX;
	static uint8_t x254 = 1U;

	t62 = ((x253-(x254/x255))|x256);

	if (t62 != 98303U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x257 = 7U;
	static int16_t x260 = 742;
	static int32_t t63 = 2;

	t63 = ((x257-(x258/x259))|x260);

	if (t63 != -26) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	int16_t x263 = INT16_MAX;
	static int32_t t64 = -940;

	t64 = ((x261-(x262/x263))|x264);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MIN;
	volatile int64_t x267 = INT64_MIN;

	t65 = ((x265-(x266/x267))|x268);

	if (t65 != -5LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = -7395233915070LL;
	volatile int8_t x272 = INT8_MIN;
	static int64_t t66 = 29674993LL;

	t66 = ((x269-(x270/x271))|x272);

	if (t66 != -112LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = INT32_MAX;
	static int16_t x275 = INT16_MAX;
	int32_t t67 = 3906561;

	t67 = ((x273-(x274/x275))|x276);

	if (t67 != -32771) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x278 = INT8_MIN;
	int32_t x280 = INT32_MIN;

	t68 = ((x277-(x278/x279))|x280);

	if (t68 != -2147467873LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = INT32_MIN;
	volatile int8_t x282 = -1;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = 276U;
	static uint32_t t69 = 3U;

	t69 = ((x281-(x282/x283))|x284);

	if (t69 != 2147483924U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = -1;
	volatile uint32_t x286 = UINT32_MAX;
	int64_t x287 = -1LL;
	static int64_t x288 = -13084LL;

	t70 = ((x285-(x286/x287))|x288);

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = INT32_MIN;
	volatile int64_t x290 = INT64_MAX;
	static volatile uint64_t x292 = 3LLU;

	t71 = ((x289-(x290/x291))|x292);

	if (t71 != 18443272723411200535LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = 16343;
	volatile int32_t x295 = INT32_MIN;
	volatile int64_t t72 = 774LL;

	t72 = ((x293-(x294/x295))|x296);

	if (t72 != -9LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -54963;
	int16_t x298 = 53;
	int64_t x299 = INT64_MIN;
	int64_t x300 = -1LL;

	t73 = ((x297-(x298/x299))|x300);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	int64_t x302 = INT64_MIN;
	volatile int8_t x303 = 1;
	uint32_t x304 = 10599U;

	t74 = ((x301-(x302/x303))|x304);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MAX;
	static uint64_t x306 = 205318451999LLU;
	uint32_t x307 = 909U;
	uint64_t x308 = 185984500909LLU;

	t75 = ((x305-(x306/x307))|x308);

	if (t75 != 186823439535LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = 5U;
	int64_t x311 = -743350435LL;

	t76 = ((x309-(x310/x311))|x312);

	if (t76 != 984516042LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = -432179816551226LL;
	int32_t x315 = -3236068;
	uint8_t x316 = 4U;
	volatile int64_t t77 = 212LL;

	t77 = ((x313-(x314/x315))|x316);

	if (t77 != -432179816551226LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MIN;
	int64_t x319 = -360LL;
	volatile int8_t x320 = INT8_MIN;

	t78 = ((x317-(x318/x319))|x320);

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x321 = 11U;
	int64_t x323 = 11088515LL;
	uint32_t x324 = UINT32_MAX;
	int64_t t79 = -1LL;

	t79 = ((x321-(x322/x323))|x324);

	if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MAX;
	static int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	volatile int64_t t80 = 431049380LL;

	t80 = ((x325-(x326/x327))|x328);

	if (t80 != -281472829227009LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x330 = INT32_MIN;
	int64_t x332 = 148452762068899LL;
	int64_t t81 = 1624568778LL;

	t81 = ((x329-(x330/x331))|x332);

	if (t81 != -16777217LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = -1;
	uint32_t x334 = 1U;
	int16_t x335 = INT16_MIN;
	int64_t x336 = -1LL;
	int64_t t82 = -30LL;

	t82 = ((x333-(x334/x335))|x336);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 86U;
	uint64_t t83 = UINT64_MAX;

	t83 = ((x337-(x338/x339))|x340);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x341 = 2U;
	static int16_t x342 = INT16_MIN;
	static volatile uint16_t x343 = 5526U;
	int64_t x344 = INT64_MIN;
	int64_t t84 = 421961464742575661LL;

	t84 = ((x341-(x342/x343))|x344);

	if (t84 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = UINT16_MAX;
	int64_t x354 = INT64_MIN;
	int8_t x356 = 1;
	volatile int64_t t85 = 7289465LL;

	t85 = ((x353-(x354/x355))|x356);

	if (t85 != 36170086419103871LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x358 = INT64_MAX;
	static int16_t x359 = -27;
	int64_t x360 = INT64_MIN;
	static uint64_t t86 = 4191798300461016273LLU;

	t86 = ((x357-(x358/x359))|x360);

	if (t86 != 9565150129305888307LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MIN;
	static int8_t x362 = 0;
	volatile int8_t x364 = INT8_MIN;

	t87 = ((x361-(x362/x363))|x364);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x365 = 2169375U;
	uint8_t x366 = UINT8_MAX;
	volatile int64_t x367 = -1LL;
	static uint16_t x368 = 0U;
	volatile int64_t t88 = 225873266324LL;

	t88 = ((x365-(x366/x367))|x368);

	if (t88 != 2169630LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 2U;
	int16_t x370 = 164;
	static int64_t x372 = INT64_MIN;

	t89 = ((x369-(x370/x371))|x372);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = -2240205168896LL;
	int32_t x375 = 7782;
	int64_t x376 = INT64_MIN;
	static int64_t t90 = 25084697LL;

	t90 = ((x373-(x374/x375))|x376);

	if (t90 != -2240205168896LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x377 = 1353U;
	int16_t x379 = -1;
	int16_t x380 = INT16_MAX;
	volatile int32_t t91 = 220528;

	t91 = ((x377-(x378/x379))|x380);

	if (t91 != 98303) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int16_t x382 = -1;
	int64_t x383 = INT64_MIN;
	volatile uint16_t x384 = 46U;

	t92 = ((x381-(x382/x383))|x384);

	if (t92 != 65535LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = 163U;
	int64_t x386 = INT64_MIN;
	int64_t x388 = 4024LL;
	int64_t t93 = 5046517148981304LL;

	t93 = ((x385-(x386/x387))|x388);

	if (t93 != 4294971325LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MIN;
	int32_t x390 = 287;
	int16_t x391 = -7;
	int64_t t94 = -2609698682336187LL;

	t94 = ((x389-(x390/x391))|x392);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -48;
	int8_t x394 = INT8_MAX;
	int32_t x396 = INT32_MIN;
	static int32_t t95 = 14853322;

	t95 = ((x393-(x394/x395))|x396);

	if (t95 != -48) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x398 = -1;
	uint16_t x399 = 301U;
	volatile int64_t x400 = INT64_MIN;
	int64_t t96 = -11LL;

	t96 = ((x397-(x398/x399))|x400);

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x401 = -656;
	int16_t x402 = 0;
	uint8_t x403 = 12U;
	volatile uint64_t t97 = 105179LLU;

	t97 = ((x401-(x402/x403))|x404);

	if (t97 != 18446744073709551100LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x405 = UINT8_MAX;
	static volatile uint64_t x407 = UINT64_MAX;
	int32_t x408 = INT32_MIN;
	uint64_t t98 = 1073265822LLU;

	t98 = ((x405-(x406/x407))|x408);

	if (t98 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x410 = INT32_MIN;
	static volatile int32_t t99 = 18;

	t99 = ((x409-(x410/x411))|x412);

	if (t99 != 14417901) { NG(); } else { ; }
	
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

