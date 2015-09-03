#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
volatile uint64_t t0 = 7847LLU;
volatile int64_t t1 = 11LL;
volatile int64_t t2 = -966939LL;
static uint64_t x20 = 4154353433703LLU;
volatile uint64_t t4 = 10LLU;
int32_t x22 = -1;
uint16_t x23 = UINT16_MAX;
uint64_t t5 = 61437849415412LLU;
int32_t x27 = 0;
int8_t x32 = 44;
volatile int64_t x39 = INT64_MIN;
int32_t x40 = INT32_MAX;
static int64_t t9 = -477869016194231LL;
int16_t x44 = -83;
int8_t x52 = INT8_MIN;
int16_t x54 = INT16_MAX;
static int8_t x64 = 25;
int32_t x67 = INT32_MIN;
uint32_t x68 = UINT32_MAX;
uint8_t x69 = 15U;
int8_t x71 = -9;
int64_t t19 = -467LL;
int16_t x82 = INT16_MIN;
int16_t x83 = INT16_MIN;
int64_t x100 = -31974043591LL;
volatile uint64_t t25 = 3339415516LLU;
uint64_t x110 = 39992995504527LLU;
static volatile int16_t x111 = 842;
int64_t x114 = INT64_MIN;
volatile int32_t x119 = INT32_MAX;
volatile int8_t x122 = -5;
uint32_t x127 = UINT32_MAX;
uint32_t x132 = UINT32_MAX;
int32_t x134 = INT32_MIN;
int64_t x136 = -1LL;
static uint16_t x138 = 2U;
volatile int64_t t34 = 2135335LL;
int8_t x148 = -2;
int32_t x150 = INT32_MIN;
volatile uint32_t t36 = 2159U;
uint32_t x157 = 12618981U;
volatile int16_t x159 = INT16_MIN;
int64_t x173 = INT64_MAX;
uint16_t x175 = 76U;
int32_t x179 = -28003;
int16_t x183 = -1;
static volatile uint64_t t43 = 33LLU;
int16_t x194 = -1;
int64_t x196 = INT64_MIN;
static volatile int64_t t45 = -1909415350629LL;
int16_t x199 = INT16_MIN;
int64_t x214 = -140582221913982595LL;
volatile int16_t x229 = INT16_MIN;
int32_t x231 = -842519518;
volatile int64_t t54 = 6302852431064676LL;
volatile int64_t t56 = 131726392838161LL;
static volatile uint16_t x243 = 0U;
uint64_t t57 = 97948858839331027LLU;
static int64_t t58 = 15301LL;
static int8_t x252 = INT8_MAX;
int8_t x254 = INT8_MIN;
int32_t t61 = 22;
static int32_t x264 = -1;
int32_t x265 = -125;
int16_t x268 = 8109;
int8_t x276 = -1;
static volatile int64_t x280 = INT64_MIN;
int64_t t65 = 7933276284880LL;
uint64_t x289 = 53737768882LLU;
int32_t x295 = INT32_MIN;
int32_t x297 = -1;
volatile int8_t x298 = 45;
uint32_t t70 = 34001U;
volatile int16_t x302 = INT16_MAX;
uint64_t x309 = UINT64_MAX;
int64_t t73 = -10712720LL;
int32_t x318 = 13;
int64_t x326 = INT64_MIN;
uint8_t x328 = UINT8_MAX;
uint32_t x340 = 10290212U;
uint8_t x342 = 64U;
static volatile int32_t x344 = 84301612;
uint64_t t81 = 219080017376112LLU;
int64_t x352 = -176140243LL;
int16_t x355 = 372;
static volatile int16_t x357 = -912;
int32_t x360 = -19940;
volatile int32_t t84 = 0;
volatile uint16_t x365 = 9U;
volatile uint16_t x367 = UINT16_MAX;
uint32_t x368 = 14480807U;
int8_t x370 = 1;
int32_t t87 = 8620894;
int16_t x374 = INT16_MAX;
uint8_t x380 = 11U;
int16_t x381 = 1;
int64_t t91 = 1371419LL;
volatile int64_t x398 = INT64_MIN;
int8_t x399 = -1;
int64_t x402 = INT64_MIN;
int64_t t95 = -301777LL;
int64_t t96 = -5795131424873LL;
static int8_t x414 = 1;
int32_t x419 = INT32_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = 14302889LLU;
	int8_t x4 = INT8_MIN;

	t0 = ((x1/x2)&(x3/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int64_t x6 = -1LL;
	int32_t x7 = INT32_MAX;
	int8_t x8 = -6;

	t1 = ((x5/x6)&(x7/x8));

	if (t1 != -357924863LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 578U;
	uint32_t x10 = UINT32_MAX;
	static int64_t x11 = -47LL;
	int64_t x12 = INT64_MIN;

	t2 = ((x9/x10)&(x11/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	uint8_t x14 = 3U;
	int32_t x15 = 90;
	int8_t x16 = INT8_MIN;
	static int64_t t3 = -4901LL;

	t3 = ((x13/x14)&(x15/x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int32_t x18 = -1;
	int16_t x19 = 18;

	t4 = ((x17/x18)&(x19/x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile uint64_t x24 = 1608LLU;

	t5 = ((x21/x22)&(x23/x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static uint8_t x26 = UINT8_MAX;
	static uint32_t x28 = 3045U;
	volatile uint32_t t6 = 1436891U;

	t6 = ((x25/x26)&(x27/x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -7785;
	int8_t x30 = 2;
	static int16_t x31 = INT16_MIN;
	volatile int32_t t7 = -1;

	t7 = ((x29/x30)&(x31/x32));

	if (t7 != -4088) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = INT32_MIN;
	uint64_t x34 = 1459884899LLU;
	int16_t x35 = INT16_MAX;
	uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 2054332386LLU;

	t8 = ((x33/x34)&(x35/x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -28;
	volatile int32_t x38 = 351;

	t9 = ((x37/x38)&(x39/x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = -9;
	uint32_t t10 = 27766U;

	t10 = ((x41/x42)&(x43/x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MAX;
	int32_t x47 = -90;
	static int8_t x48 = -30;
	volatile int64_t t11 = 2089934404076LL;

	t11 = ((x45/x46)&(x47/x48));

	if (t11 != 3LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1LLU;
	int32_t x50 = -262297394;
	static int16_t x51 = -1;
	volatile uint64_t t12 = 1LLU;

	t12 = ((x49/x50)&(x51/x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	int16_t x55 = INT16_MIN;
	static int8_t x56 = -1;
	int32_t t13 = -3;

	t13 = ((x53/x54)&(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 1040478629LLU;
	uint8_t x58 = 6U;
	volatile int32_t x59 = 26692;
	int8_t x60 = -1;
	static uint64_t t14 = 917477344821359373LLU;

	t14 = ((x57/x58)&(x59/x60));

	if (t14 != 173413040LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -122514;
	uint16_t x62 = 99U;
	uint8_t x63 = UINT8_MAX;
	volatile int32_t t15 = 264;

	t15 = ((x61/x62)&(x63/x64));

	if (t15 != 10) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 2539467457321924272LLU;
	volatile int32_t x66 = INT32_MAX;
	volatile uint64_t t16 = 717818426LLU;

	t16 = ((x65/x66)&(x67/x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = UINT16_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = 1186623;

	t17 = ((x69/x70)&(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 9324LLU;
	int16_t x74 = INT16_MAX;
	int8_t x75 = -1;
	int8_t x76 = 1;
	uint64_t t18 = 1LLU;

	t18 = ((x73/x74)&(x75/x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 303657977LL;
	static uint16_t x78 = 21U;
	int8_t x79 = -2;
	int64_t x80 = INT64_MIN;

	t19 = ((x77/x78)&(x79/x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -347223;

	t20 = ((x81/x82)&(x83/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 10U;
	static uint8_t x88 = 2U;
	uint64_t t21 = 805448LLU;

	t21 = ((x85/x86)&(x87/x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x93 = UINT32_MAX;
	int32_t x94 = 332075;
	int32_t x95 = -1;
	volatile uint64_t x96 = UINT64_MAX;
	uint64_t t22 = 995163445622LLU;

	t22 = ((x93/x94)&(x95/x96));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = -42;
	int32_t x98 = INT32_MAX;
	int32_t x99 = 3886034;
	int64_t t23 = 4198261741523535LL;

	t23 = ((x97/x98)&(x99/x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MAX;
	int64_t t24 = -6875519030668LL;

	t24 = ((x101/x102)&(x103/x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	static int32_t x106 = INT32_MIN;
	int16_t x107 = -1;
	uint64_t x108 = 8723805533822612021LLU;

	t25 = ((x105/x106)&(x107/x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x109 = UINT32_MAX;
	static int8_t x112 = -1;
	uint64_t t26 = 12474173644641LLU;

	t26 = ((x109/x110)&(x111/x112));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	int8_t x115 = 1;
	int8_t x116 = 3;
	int64_t t27 = -778786LL;

	t27 = ((x113/x114)&(x115/x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = UINT32_MAX;
	static int16_t x118 = INT16_MIN;
	static int32_t x120 = INT32_MIN;
	volatile uint32_t t28 = 1U;

	t28 = ((x117/x118)&(x119/x120));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -189;
	int16_t x123 = -1;
	volatile int64_t x124 = -209524504080982LL;
	int64_t t29 = 42922LL;

	t29 = ((x121/x122)&(x123/x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	static uint64_t x126 = 11553161692484LLU;
	int8_t x128 = -1;
	uint64_t t30 = 529744LLU;

	t30 = ((x125/x126)&(x127/x128));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = -29;
	uint16_t x130 = 279U;
	uint64_t x131 = 15169626240376LLU;
	uint64_t t31 = 3825LLU;

	t31 = ((x129/x130)&(x131/x132));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 99523791799LLU;
	static int16_t x135 = 0;
	volatile uint64_t t32 = 3262630489209LLU;

	t32 = ((x133/x134)&(x135/x136));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = 969188321U;
	volatile uint32_t t33 = 28U;

	t33 = ((x137/x138)&(x139/x140));

	if (t33 != 4U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -172;
	uint8_t x142 = 11U;
	int64_t x143 = INT64_MAX;
	int32_t x144 = INT32_MIN;

	t34 = ((x141/x142)&(x143/x144));

	if (t34 != -4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	volatile uint32_t x146 = UINT32_MAX;
	int64_t x147 = INT64_MIN;
	volatile int64_t t35 = -7464255255757LL;

	t35 = ((x145/x146)&(x147/x148));

	if (t35 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = 423U;
	static uint32_t x151 = UINT32_MAX;
	uint32_t x152 = 4U;

	t36 = ((x149/x150)&(x151/x152));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x158 = 28U;
	int64_t x160 = INT64_MIN;
	volatile int64_t t37 = -2421861LL;

	t37 = ((x157/x158)&(x159/x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x165 = INT16_MIN;
	int16_t x166 = -12;
	int32_t x167 = 104231;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t38 = 3;

	t38 = ((x165/x166)&(x167/x168));

	if (t38 != 2178) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x170 = UINT64_MAX;
	static volatile int8_t x171 = INT8_MIN;
	static int64_t x172 = -3944328669585560219LL;
	uint64_t t39 = 129182870636367686LLU;

	t39 = ((x169/x170)&(x171/x172));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x174 = INT64_MAX;
	int8_t x176 = -2;
	volatile int64_t t40 = 164LL;

	t40 = ((x173/x174)&(x175/x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MAX;
	static int64_t x178 = INT64_MAX;
	static uint8_t x180 = 28U;
	int64_t t41 = 947702LL;

	t41 = ((x177/x178)&(x179/x180));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MAX;
	volatile int64_t x184 = INT64_MIN;
	volatile int64_t t42 = -57LL;

	t42 = ((x181/x182)&(x183/x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x185 = UINT64_MAX;
	static int64_t x186 = -1LL;
	static int32_t x187 = -1;
	int64_t x188 = -493351002LL;

	t43 = ((x185/x186)&(x187/x188));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	static volatile int64_t x190 = INT64_MIN;
	uint16_t x191 = 66U;
	uint64_t x192 = UINT64_MAX;
	uint64_t t44 = 131838166333493619LLU;

	t44 = ((x189/x190)&(x191/x192));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 14U;
	uint16_t x195 = 38U;

	t45 = ((x193/x194)&(x195/x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = -1;
	uint32_t x198 = UINT32_MAX;
	int64_t x200 = -1LL;
	int64_t t46 = -1529628483LL;

	t46 = ((x197/x198)&(x199/x200));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x202 = -1;
	int8_t x203 = -1;
	volatile int16_t x204 = INT16_MAX;
	uint64_t t47 = 1997142747LLU;

	t47 = ((x201/x202)&(x203/x204));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t x206 = 6325;
	static int16_t x207 = -1;
	volatile uint16_t x208 = UINT16_MAX;
	volatile uint32_t t48 = 1583313U;

	t48 = ((x205/x206)&(x207/x208));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = -122;
	int8_t x210 = 1;
	int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MAX;
	volatile int64_t t49 = 88LL;

	t49 = ((x209/x210)&(x211/x212));

	if (t49 != -72624976668147962LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -23;
	int8_t x215 = INT8_MIN;
	static volatile int8_t x216 = -24;
	int64_t t50 = -306556023657076190LL;

	t50 = ((x213/x214)&(x215/x216));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x217 = INT8_MAX;
	static volatile int32_t x218 = -1;
	int8_t x219 = INT8_MAX;
	int32_t x220 = INT32_MIN;
	volatile int32_t t51 = 2480293;

	t51 = ((x217/x218)&(x219/x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MAX;
	int32_t x222 = 84;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t52 = 745710693;

	t52 = ((x221/x222)&(x223/x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x225 = 15257U;
	volatile uint16_t x226 = 2U;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MIN;
	int32_t t53 = -21;

	t53 = ((x225/x226)&(x227/x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = -1LL;
	static volatile int8_t x232 = 19;

	t54 = ((x229/x230)&(x231/x232));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = UINT16_MAX;
	volatile int32_t x234 = INT32_MAX;
	static int32_t x235 = 161359617;
	static int64_t x236 = -1LL;
	int64_t t55 = -239720209812861994LL;

	t55 = ((x233/x234)&(x235/x236));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = 18730;
	static int8_t x239 = INT8_MAX;
	uint16_t x240 = 420U;

	t56 = ((x237/x238)&(x239/x240));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = -1;
	uint64_t x242 = 264788822374179755LLU;
	int8_t x244 = INT8_MIN;

	t57 = ((x241/x242)&(x243/x244));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = -1;
	static int64_t x247 = 2612LL;
	volatile uint32_t x248 = 18233572U;

	t58 = ((x245/x246)&(x247/x248));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MIN;
	int8_t x251 = -5;
	static volatile int64_t t59 = -2317919439809LL;

	t59 = ((x249/x250)&(x251/x252));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x253 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MAX;
	uint64_t t60 = 29598329313746LLU;

	t60 = ((x253/x254)&(x255/x256));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = 1U;
	int8_t x258 = -1;
	uint16_t x259 = 850U;
	static uint8_t x260 = 15U;

	t61 = ((x257/x258)&(x259/x260));

	if (t61 != 56) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x261 = INT32_MAX;
	volatile int8_t x262 = -1;
	static uint8_t x263 = UINT8_MAX;
	volatile int32_t t62 = -703;

	t62 = ((x261/x262)&(x263/x264));

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	int32_t t63 = 1;

	t63 = ((x265/x266)&(x267/x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = 28;
	static int8_t x275 = INT8_MIN;
	int32_t t64 = 20;

	t64 = ((x273/x274)&(x275/x276));

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = -1;
	volatile uint16_t x278 = 1U;
	uint8_t x279 = 11U;

	t65 = ((x277/x278)&(x279/x280));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x281 = -1LL;
	volatile int64_t x282 = INT64_MAX;
	static uint16_t x283 = UINT16_MAX;
	static int32_t x284 = INT32_MAX;
	int64_t t66 = 939785538554LL;

	t66 = ((x281/x282)&(x283/x284));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x285 = INT8_MIN;
	volatile int16_t x286 = INT16_MIN;
	static volatile uint32_t x287 = 1660U;
	int32_t x288 = INT32_MIN;
	volatile uint32_t t67 = 53589U;

	t67 = ((x285/x286)&(x287/x288));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x290 = UINT8_MAX;
	int64_t x291 = -41LL;
	static uint64_t x292 = 3301337653508120007LLU;
	volatile uint64_t t68 = 169344LLU;

	t68 = ((x289/x290)&(x291/x292));

	if (t68 != 4LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = INT16_MIN;
	static int32_t x294 = -2304;
	int32_t x296 = INT32_MIN;
	static int32_t t69 = 2;

	t69 = ((x293/x294)&(x295/x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x299 = UINT16_MAX;
	uint32_t x300 = 1086039293U;

	t70 = ((x297/x298)&(x299/x300));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	static int64_t x303 = -225917597110009779LL;
	uint64_t x304 = 31957426287832822LLU;
	volatile uint64_t t71 = 12059357871LLU;

	t71 = ((x301/x302)&(x303/x304));

	if (t71 != 570LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x310 = 4889;
	int8_t x311 = INT8_MIN;
	int64_t x312 = -1LL;
	uint64_t t72 = 2754304707059LLU;

	t72 = ((x309/x310)&(x311/x312));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = 52149993132LL;
	uint32_t x314 = 7295U;
	int8_t x315 = INT8_MIN;
	static int32_t x316 = INT32_MIN;

	t73 = ((x313/x314)&(x315/x316));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x317 = UINT64_MAX;
	static uint16_t x319 = UINT16_MAX;
	int16_t x320 = INT16_MIN;
	uint64_t t74 = 56LLU;

	t74 = ((x317/x318)&(x319/x320));

	if (t74 != 1418980313362273201LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x321 = INT8_MIN;
	int8_t x322 = 51;
	int64_t x323 = -1LL;
	uint32_t x324 = UINT32_MAX;
	volatile int64_t t75 = -35LL;

	t75 = ((x321/x322)&(x323/x324));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x325 = UINT64_MAX;
	static uint64_t x327 = 177061801429LLU;
	static volatile uint64_t t76 = 19381680162LLU;

	t76 = ((x325/x326)&(x327/x328));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x329 = -26;
	int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	volatile int32_t x332 = 954965416;
	volatile int64_t t77 = -23621LL;

	t77 = ((x329/x330)&(x331/x332));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = -3;
	volatile int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int8_t x336 = -1;
	volatile int32_t t78 = -19856;

	t78 = ((x333/x334)&(x335/x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = 12U;
	volatile uint16_t x338 = 385U;
	uint16_t x339 = 6202U;
	volatile uint32_t t79 = 3U;

	t79 = ((x337/x338)&(x339/x340));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = 6426U;
	int16_t x343 = -1;
	uint32_t t80 = 3465U;

	t80 = ((x341/x342)&(x343/x344));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = 263U;
	uint64_t x346 = 95677203747307LLU;
	static int16_t x347 = -3490;
	uint64_t x348 = UINT64_MAX;

	t81 = ((x345/x346)&(x347/x348));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = -107;
	int8_t x350 = -1;
	volatile int16_t x351 = INT16_MIN;
	volatile int64_t t82 = 3LL;

	t82 = ((x349/x350)&(x351/x352));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -1;
	static uint64_t x354 = 477297195582LLU;
	int64_t x356 = INT64_MIN;
	uint64_t t83 = 3063004405596782LLU;

	t83 = ((x353/x354)&(x355/x356));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x358 = 4;
	uint8_t x359 = UINT8_MAX;

	t84 = ((x357/x358)&(x359/x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x361 = -537;
	int32_t x362 = -111675;
	int8_t x363 = INT8_MAX;
	uint64_t x364 = UINT64_MAX;
	uint64_t t85 = 1971492664LLU;

	t85 = ((x361/x362)&(x363/x364));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x366 = INT16_MIN;
	static uint32_t t86 = 610036U;

	t86 = ((x365/x366)&(x367/x368));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x369 = 6;
	uint16_t x371 = 9658U;
	int32_t x372 = 195;

	t87 = ((x369/x370)&(x371/x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MAX;
	uint8_t x375 = 4U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t88 = -463790;

	t88 = ((x373/x374)&(x375/x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = 6493;
	uint64_t x378 = UINT64_MAX;
	uint32_t x379 = 293U;
	volatile uint64_t t89 = 210300075437946LLU;

	t89 = ((x377/x378)&(x379/x380));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x382 = INT32_MIN;
	int16_t x383 = -1;
	int64_t x384 = -2151381370758616809LL;
	volatile int64_t t90 = -4433LL;

	t90 = ((x381/x382)&(x383/x384));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x385 = INT64_MIN;
	volatile uint16_t x386 = UINT16_MAX;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = UINT32_MAX;

	t91 = ((x385/x386)&(x387/x388));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MIN;
	uint8_t x390 = 1U;
	uint32_t x391 = 193560684U;
	uint8_t x392 = 14U;
	static volatile uint32_t t92 = 675560669U;

	t92 = ((x389/x390)&(x391/x392));

	if (t92 != 13825664U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = 0LL;
	static int32_t x394 = -1;
	int32_t x395 = INT32_MAX;
	int64_t x396 = -756435151LL;
	static int64_t t93 = -63008575202LL;

	t93 = ((x393/x394)&(x395/x396));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x397 = UINT32_MAX;
	int16_t x400 = 465;
	volatile int64_t t94 = -16825170768222185LL;

	t94 = ((x397/x398)&(x399/x400));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MAX;
	volatile int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;

	t95 = ((x401/x402)&(x403/x404));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x405 = -65799136LL;
	volatile int32_t x406 = 307456636;
	volatile int8_t x407 = INT8_MAX;
	int16_t x408 = INT16_MIN;

	t96 = ((x405/x406)&(x407/x408));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = 887232203612282390LLU;
	volatile int16_t x410 = 1850;
	static volatile int64_t x411 = INT64_MIN;
	static volatile int64_t x412 = INT64_MIN;
	volatile uint64_t t97 = 5459388728157485LLU;

	t97 = ((x409/x410)&(x411/x412));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MIN;
	int16_t x415 = -484;
	static int32_t x416 = -18;
	static int32_t t98 = -118;

	t98 = ((x413/x414)&(x415/x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = UINT8_MAX;
	int32_t x418 = -737;
	int8_t x420 = -15;
	int32_t t99 = -137;

	t99 = ((x417/x418)&(x419/x420));

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

