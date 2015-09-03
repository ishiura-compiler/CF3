#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint64_t x6 = 31LLU;
int64_t x8 = -1LL;
int64_t x18 = 2765913999148789LL;
int16_t x28 = INT16_MIN;
int64_t t7 = 79699LL;
uint8_t x42 = UINT8_MAX;
int32_t t9 = 12;
int64_t x60 = 6LL;
static uint16_t x61 = 95U;
static int64_t x62 = 4417663691296369LL;
int64_t t11 = 885463572233846082LL;
static int16_t x70 = -6065;
int8_t x75 = INT8_MIN;
uint32_t t15 = 159U;
int8_t x82 = INT8_MIN;
volatile int32_t t16 = 4801;
volatile int32_t t17 = 5409;
static int64_t x97 = -1LL;
static uint8_t x99 = 15U;
static int32_t t20 = 5785257;
int64_t x103 = INT64_MAX;
static volatile uint64_t t21 = 53900370LLU;
int32_t x107 = -1;
uint8_t x111 = UINT8_MAX;
uint32_t x113 = UINT32_MAX;
volatile int16_t x121 = 118;
int16_t x122 = -2866;
uint32_t x123 = 659346U;
int64_t x125 = INT64_MIN;
uint64_t t27 = 136LLU;
static int32_t x131 = -2;
int32_t x133 = INT32_MAX;
static int8_t x139 = INT8_MAX;
uint64_t x146 = 2082328321LLU;
volatile uint64_t x154 = 64692324997LLU;
volatile int8_t x156 = INT8_MAX;
volatile int32_t x157 = -3829;
volatile int32_t t36 = 5;
uint32_t x167 = 1450255114U;
uint32_t x170 = 0U;
volatile int16_t x177 = INT16_MIN;
uint16_t x184 = 14U;
uint32_t x195 = UINT32_MAX;
int16_t x208 = 5;
uint16_t x215 = 259U;
static volatile uint64_t x220 = 7506479LLU;
static uint16_t x233 = 13U;
uint8_t x236 = 23U;
int64_t x240 = INT64_MIN;
volatile int64_t t51 = 3871795017578997212LL;
volatile int16_t x245 = INT16_MIN;
static volatile int16_t x247 = INT16_MAX;
int64_t x249 = -1LL;
int64_t t54 = -317083196LL;
int64_t x254 = -1LL;
static int32_t x266 = INT32_MAX;
int32_t x270 = INT32_MIN;
int32_t t58 = -2991693;
int8_t x273 = -1;
int64_t x275 = -145429LL;
int16_t x276 = INT16_MIN;
static int8_t x282 = -1;
volatile int64_t x289 = INT64_MAX;
volatile int32_t t63 = -1909583;
int16_t x294 = -1;
static volatile int16_t x303 = -1;
volatile uint8_t x309 = UINT8_MAX;
volatile uint16_t x310 = UINT16_MAX;
static int32_t t68 = -834;
uint32_t x317 = UINT32_MAX;
int16_t x318 = INT16_MIN;
static int32_t x319 = -17;
int32_t t69 = 49;
int32_t x331 = 0;
static volatile int32_t x332 = -1;
volatile int32_t t72 = -91319;
uint64_t x334 = 2613675275378594112LLU;
volatile int32_t t74 = -465067313;
static int8_t x347 = -1;
uint8_t x352 = 0U;
int8_t x358 = INT8_MIN;
uint32_t x371 = UINT32_MAX;
int16_t x375 = -1;
int16_t x378 = 0;
int64_t x388 = 435451660LL;
volatile int32_t x396 = -3437;
int32_t t84 = 1;
volatile uint32_t x399 = UINT32_MAX;
volatile int64_t t85 = -10LL;
int8_t x404 = 0;
int32_t t86 = 0;
int64_t x409 = INT64_MIN;
int8_t x416 = INT8_MIN;
volatile int64_t x417 = -2384LL;
int64_t x420 = INT64_MIN;
int64_t x429 = INT64_MIN;
uint16_t x437 = 8077U;
volatile int16_t x439 = INT16_MIN;
uint8_t x448 = UINT8_MAX;
int16_t x449 = -1;
uint32_t x457 = 666670U;
int32_t t98 = 0;
volatile uint32_t x482 = UINT32_MAX;
int8_t x483 = -18;


void f0(void) {
	static volatile int16_t x1 = -3;
	static volatile int8_t x2 = 1;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 27;

	t0 = ((x1==(x2*x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 3109851LLU;
	volatile uint32_t x7 = UINT32_MAX;
	static int64_t t1 = -1399536862689129LL;

	t1 = ((x5==(x6*x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -38726LL;
	int16_t x10 = INT16_MIN;
	static uint32_t x11 = UINT32_MAX;
	int32_t x12 = -2712;
	static volatile int32_t t2 = -6931650;

	t2 = ((x9==(x10*x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 2;
	int8_t x14 = INT8_MIN;
	static uint16_t x15 = 6218U;
	static int64_t x16 = -8588LL;
	static int64_t t3 = -3752LL;

	t3 = ((x13==(x14*x15))*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint16_t x19 = 578U;
	volatile uint16_t x20 = 7134U;
	volatile int32_t t4 = -97;

	t4 = ((x17==(x18*x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile uint8_t x22 = UINT8_MAX;
	uint64_t x23 = 194856LLU;
	volatile uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 5;

	t5 = ((x21==(x22*x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 2837;
	int32_t x26 = 1;
	int64_t x27 = INT64_MAX;
	int32_t t6 = -16;

	t6 = ((x25==(x26*x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint64_t x30 = 4061LLU;
	uint64_t x31 = UINT64_MAX;
	volatile int64_t x32 = -8568748500LL;

	t7 = ((x29==(x30*x31))*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -56829534495081LL;
	volatile int64_t x34 = -1524844022218LL;
	int16_t x35 = -1;
	int64_t x36 = -1LL;
	int64_t t8 = 553290980849773LL;

	t8 = ((x33==(x34*x35))*x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 294U;
	static int32_t x43 = -3311559;
	static int32_t x44 = -1;

	t9 = ((x41==(x42*x43))*x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x57 = INT64_MIN;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MIN;
	volatile int64_t t10 = -675961LL;

	t10 = ((x57==(x58*x59))*x60);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x63 = 106U;
	int64_t x64 = -1LL;

	t11 = ((x61==(x62*x63))*x64);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	int32_t x66 = -19011025;
	int8_t x67 = -53;
	int16_t x68 = INT16_MIN;
	int32_t t12 = 29194;

	t12 = ((x65==(x66*x67))*x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = INT64_MAX;
	uint8_t x71 = 2U;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t13 = 0U;

	t13 = ((x69==(x70*x71))*x72);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x73 = -1;
	uint16_t x74 = 98U;
	volatile int32_t x76 = INT32_MIN;
	int32_t t14 = -213840;

	t14 = ((x73==(x74*x75))*x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int32_t x78 = 2766;
	int16_t x79 = 1;
	static uint32_t x80 = 6U;

	t15 = ((x77==(x78*x79))*x80);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = -352766993828347380LL;
	uint8_t x83 = UINT8_MAX;
	static int16_t x84 = -1;

	t16 = ((x81==(x82*x83))*x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = 0U;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = 1098987691183LLU;
	int16_t x88 = -1;

	t17 = ((x85==(x86*x87))*x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -53;
	int8_t x90 = -1;
	int32_t x91 = INT32_MAX;
	static uint32_t x92 = 893084777U;
	uint32_t t18 = 8738695U;

	t18 = ((x89==(x90*x91))*x92);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = 84730173548LL;
	static int32_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int32_t x96 = 335;
	int32_t t19 = 212866;

	t19 = ((x93==(x94*x95))*x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x98 = 28007U;
	int8_t x100 = INT8_MAX;

	t20 = ((x97==(x98*x99))*x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	static uint64_t x102 = 83553097LLU;
	uint64_t x104 = UINT64_MAX;

	t21 = ((x101==(x102*x103))*x104);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x106 = -3782154200600LL;
	int64_t x108 = INT64_MIN;
	volatile int64_t t22 = 1611959575174567929LL;

	t22 = ((x105==(x106*x107))*x108);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = INT32_MIN;
	int16_t x110 = -38;
	int8_t x112 = -1;
	int32_t t23 = -1;

	t23 = ((x109==(x110*x111))*x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x114 = 429317U;
	static int64_t x115 = -1LL;
	int16_t x116 = INT16_MAX;
	volatile int32_t t24 = -61;

	t24 = ((x113==(x114*x115))*x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	uint8_t x119 = 1U;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t25 = -11;

	t25 = ((x117==(x118*x119))*x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x124 = 330U;
	int32_t t26 = 15;

	t26 = ((x121==(x122*x123))*x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x126 = 1124057LLU;
	int32_t x127 = INT32_MIN;
	uint64_t x128 = 4249LLU;

	t27 = ((x125==(x126*x127))*x128);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = UINT64_MAX;
	static volatile int64_t x130 = -261831LL;
	uint16_t x132 = 185U;
	volatile int32_t t28 = 66676;

	t28 = ((x129==(x130*x131))*x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x134 = INT32_MIN;
	int64_t x135 = 826056077LL;
	int32_t x136 = INT32_MIN;
	volatile int32_t t29 = 3;

	t29 = ((x133==(x134*x135))*x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 7U;
	uint8_t x138 = 2U;
	int16_t x140 = INT16_MIN;
	volatile int32_t t30 = -26;

	t30 = ((x137==(x138*x139))*x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = 1;
	static volatile int32_t x142 = -23079;
	int32_t x143 = -1;
	uint8_t x144 = 1U;
	static volatile int32_t t31 = 4;

	t31 = ((x141==(x142*x143))*x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x145 = -1;
	static int64_t x147 = -1847841360LL;
	volatile int16_t x148 = INT16_MIN;
	volatile int32_t t32 = 41698224;

	t32 = ((x145==(x146*x147))*x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = INT32_MAX;
	int64_t x150 = -1LL;
	static int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	int32_t t33 = -5495641;

	t33 = ((x149==(x150*x151))*x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x153 = INT8_MIN;
	volatile int16_t x155 = INT16_MAX;
	volatile int32_t t34 = -1;

	t34 = ((x153==(x154*x155))*x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x158 = INT64_MAX;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MIN;
	volatile int32_t t35 = -13067063;

	t35 = ((x157==(x158*x159))*x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = INT64_MAX;
	volatile int8_t x162 = 8;
	int16_t x163 = 92;
	int16_t x164 = -217;

	t36 = ((x161==(x162*x163))*x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = 9;
	int32_t x166 = INT32_MIN;
	int16_t x168 = -1;
	volatile int32_t t37 = -178593340;

	t37 = ((x165==(x166*x167))*x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 101U;
	static int32_t x171 = -1;
	volatile uint64_t x172 = UINT64_MAX;
	volatile uint64_t t38 = 3179LLU;

	t38 = ((x169==(x170*x171))*x172);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x178 = -1LL;
	volatile int16_t x179 = INT16_MAX;
	static int8_t x180 = INT8_MIN;
	int32_t t39 = 300;

	t39 = ((x177==(x178*x179))*x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x181 = INT8_MIN;
	uint32_t x182 = 18461800U;
	int16_t x183 = INT16_MAX;
	volatile int32_t t40 = -127355446;

	t40 = ((x181==(x182*x183))*x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x185 = INT8_MIN;
	static uint8_t x186 = 4U;
	uint8_t x187 = 7U;
	static uint16_t x188 = 17768U;
	int32_t t41 = -48;

	t41 = ((x185==(x186*x187))*x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = -1LL;
	static int32_t x191 = -229;
	int8_t x192 = INT8_MIN;
	volatile int32_t t42 = -1381888;

	t42 = ((x189==(x190*x191))*x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MAX;
	uint16_t x194 = UINT16_MAX;
	int8_t x196 = -1;
	int32_t t43 = -2;

	t43 = ((x193==(x194*x195))*x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x197 = INT8_MIN;
	int16_t x198 = 205;
	volatile int8_t x199 = INT8_MIN;
	int64_t x200 = -1LL;
	volatile int64_t t44 = -5152977858432580LL;

	t44 = ((x197==(x198*x199))*x200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = 0LLU;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t45 = 4;

	t45 = ((x201==(x202*x203))*x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1460406687675422LL;
	static int16_t x206 = 1;
	int16_t x207 = INT16_MAX;
	int32_t t46 = -10260;

	t46 = ((x205==(x206*x207))*x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int8_t x214 = -1;
	static volatile int16_t x216 = INT16_MIN;
	volatile int32_t t47 = -57573;

	t47 = ((x213==(x214*x215))*x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x217 = INT8_MAX;
	uint8_t x218 = 11U;
	volatile uint16_t x219 = UINT16_MAX;
	uint64_t t48 = 17138330851325LLU;

	t48 = ((x217==(x218*x219))*x220);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x225 = -91770679;
	int32_t x226 = INT32_MAX;
	volatile uint32_t x227 = UINT32_MAX;
	int64_t x228 = INT64_MAX;
	static int64_t t49 = 29184622538615219LL;

	t49 = ((x225==(x226*x227))*x228);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x234 = 0;
	volatile int16_t x235 = -1;
	int32_t t50 = 7;

	t50 = ((x233==(x234*x235))*x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x237 = -1;
	int64_t x238 = -31LL;
	static volatile uint8_t x239 = 3U;

	t51 = ((x237==(x238*x239))*x240);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = INT16_MIN;
	static volatile uint32_t x242 = 110975U;
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MAX;
	volatile int32_t t52 = 391218391;

	t52 = ((x241==(x242*x243))*x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x246 = 0;
	int32_t x248 = INT32_MIN;
	volatile int32_t t53 = 122751;

	t53 = ((x245==(x246*x247))*x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x250 = 15345;
	int16_t x251 = -1;
	static int64_t x252 = INT64_MIN;

	t54 = ((x249==(x250*x251))*x252);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = 3LL;
	int32_t x255 = INT32_MAX;
	uint32_t x256 = 13452842U;
	volatile uint32_t t55 = 4679021U;

	t55 = ((x253==(x254*x255))*x256);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x257 = 161078589891933LLU;
	uint64_t x258 = 404944302LLU;
	static uint16_t x259 = UINT16_MAX;
	volatile int16_t x260 = -113;
	volatile int32_t t56 = 9351;

	t56 = ((x257==(x258*x259))*x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = INT8_MIN;
	int64_t x267 = -13696LL;
	static uint64_t x268 = 18LLU;
	uint64_t t57 = 837913996026454LLU;

	t57 = ((x265==(x266*x267))*x268);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = INT16_MIN;
	int8_t x271 = 0;
	uint16_t x272 = 4119U;

	t58 = ((x269==(x270*x271))*x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x274 = 3769U;
	int32_t t59 = -2529;

	t59 = ((x273==(x274*x275))*x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x277 = 727LL;
	int32_t x278 = -1941;
	volatile int64_t x279 = -1LL;
	int16_t x280 = 1621;
	volatile int32_t t60 = 0;

	t60 = ((x277==(x278*x279))*x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MIN;
	int64_t x283 = -48LL;
	uint16_t x284 = UINT16_MAX;
	int32_t t61 = 138806418;

	t61 = ((x281==(x282*x283))*x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	int8_t x287 = -6;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t62 = 24606;

	t62 = ((x285==(x286*x287))*x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x290 = -1;
	volatile uint32_t x291 = 19357705U;
	int8_t x292 = -3;

	t63 = ((x289==(x290*x291))*x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = -34190150021099LL;
	static volatile int16_t x295 = INT16_MIN;
	static int32_t x296 = INT32_MIN;
	int32_t t64 = -9;

	t64 = ((x293==(x294*x295))*x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = -1;
	int8_t x302 = -1;
	static int16_t x304 = INT16_MAX;
	int32_t t65 = 925042;

	t65 = ((x301==(x302*x303))*x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x305 = -23345LL;
	int64_t x306 = -1LL;
	int16_t x307 = 1;
	int32_t x308 = INT32_MIN;
	int32_t t66 = 48401;

	t66 = ((x305==(x306*x307))*x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MAX;
	static volatile int32_t t67 = 1;

	t67 = ((x309==(x310*x311))*x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x313 = 1;
	static int16_t x314 = INT16_MIN;
	int64_t x315 = 6328470497044LL;
	uint16_t x316 = 3691U;

	t68 = ((x313==(x314*x315))*x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x320 = 24293U;

	t69 = ((x317==(x318*x319))*x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = -8292634352031196LL;
	int16_t x322 = 63;
	volatile uint32_t x323 = 211650560U;
	uint32_t x324 = 8U;
	uint32_t t70 = 141U;

	t70 = ((x321==(x322*x323))*x324);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x325 = 1085274252U;
	int8_t x326 = -1;
	static int16_t x327 = 1193;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t71 = -65332;

	t71 = ((x325==(x326*x327))*x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x329 = 128790760974LLU;
	uint16_t x330 = 1U;

	t72 = ((x329==(x330*x331))*x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x335 = 3165U;
	int64_t x336 = INT64_MAX;
	int64_t t73 = -121439514616143LL;

	t73 = ((x333==(x334*x335))*x336);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x337 = 139059861LLU;
	int8_t x338 = INT8_MIN;
	static int64_t x339 = -1LL;
	int8_t x340 = 1;

	t74 = ((x337==(x338*x339))*x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MIN;
	int32_t x348 = -6056;
	int32_t t75 = 6;

	t75 = ((x345==(x346*x347))*x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x349 = 1U;
	volatile int32_t x350 = -1;
	int32_t x351 = INT32_MAX;
	static volatile int32_t t76 = -80;

	t76 = ((x349==(x350*x351))*x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	volatile int32_t x359 = -1;
	static uint64_t x360 = 44503483LLU;
	volatile uint64_t t77 = 447217890013283481LLU;

	t77 = ((x357==(x358*x359))*x360);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = INT32_MIN;
	uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 3U;
	static uint16_t x368 = 24U;
	volatile int32_t t78 = -1;

	t78 = ((x365==(x366*x367))*x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x369 = 6344375U;
	int64_t x370 = -1LL;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t79 = -85;

	t79 = ((x369==(x370*x371))*x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = UINT64_MAX;
	int8_t x374 = INT8_MIN;
	int16_t x376 = INT16_MAX;
	volatile int32_t t80 = -83836;

	t80 = ((x373==(x374*x375))*x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x379 = 0U;
	volatile int32_t x380 = INT32_MAX;
	static volatile int32_t t81 = 61011;

	t81 = ((x377==(x378*x379))*x380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x381 = 36U;
	static uint64_t x382 = 2LLU;
	static int64_t x383 = 7539072LL;
	int16_t x384 = INT16_MIN;
	int32_t t82 = -245572;

	t82 = ((x381==(x382*x383))*x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x385 = 331U;
	volatile uint64_t x386 = 8906027541332LLU;
	static int8_t x387 = INT8_MIN;
	int64_t t83 = -57318951578LL;

	t83 = ((x385==(x386*x387))*x388);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	uint32_t x395 = 493332862U;

	t84 = ((x393==(x394*x395))*x396);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x397 = 63U;
	uint8_t x398 = 0U;
	int64_t x400 = -1LL;

	t85 = ((x397==(x398*x399))*x400);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x401 = 1170256U;
	uint32_t x402 = UINT32_MAX;
	volatile int8_t x403 = INT8_MIN;

	t86 = ((x401==(x402*x403))*x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	int8_t x412 = -1;
	int32_t t87 = 1;

	t87 = ((x409==(x410*x411))*x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint32_t x414 = 3U;
	int64_t x415 = -3079330011264LL;
	volatile int32_t t88 = 99467;

	t88 = ((x413==(x414*x415))*x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x418 = 303U;
	static volatile uint16_t x419 = 438U;
	int64_t t89 = 21547904153LL;

	t89 = ((x417==(x418*x419))*x420);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = INT8_MIN;
	uint8_t x422 = 0U;
	uint16_t x423 = UINT16_MAX;
	static int64_t x424 = INT64_MIN;
	static volatile int64_t t90 = -1625515465LL;

	t90 = ((x421==(x422*x423))*x424);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = -1;
	uint8_t x426 = 24U;
	int64_t x427 = -22389LL;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t91 = 5;

	t91 = ((x425==(x426*x427))*x428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x430 = 1308U;
	volatile int64_t x431 = 0LL;
	int8_t x432 = INT8_MAX;
	static volatile int32_t t92 = 791489;

	t92 = ((x429==(x430*x431))*x432);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x433 = -118;
	volatile uint8_t x434 = 18U;
	static int32_t x435 = 74;
	static int8_t x436 = INT8_MIN;
	static int32_t t93 = -69821;

	t93 = ((x433==(x434*x435))*x436);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x438 = 641U;
	int16_t x440 = -4828;
	int32_t t94 = -15291;

	t94 = ((x437==(x438*x439))*x440);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x445 = 66968709018LL;
	int32_t x446 = INT32_MIN;
	volatile uint64_t x447 = UINT64_MAX;
	volatile int32_t t95 = -971199167;

	t95 = ((x445==(x446*x447))*x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x450 = INT16_MAX;
	int16_t x451 = 7;
	uint8_t x452 = 0U;
	volatile int32_t t96 = 685168804;

	t96 = ((x449==(x450*x451))*x452);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x458 = 903767U;
	volatile int32_t x459 = 3;
	static uint16_t x460 = 106U;
	int32_t t97 = -1276879;

	t97 = ((x457==(x458*x459))*x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x465 = 127U;
	static int16_t x466 = -8619;
	uint32_t x467 = 14494U;
	int16_t x468 = 0;

	t98 = ((x465==(x466*x467))*x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x481 = UINT32_MAX;
	uint32_t x484 = UINT32_MAX;
	uint32_t t99 = 10751943U;

	t99 = ((x481==(x482*x483))*x484);

	if (t99 != 0U) { NG(); } else { ; }
	
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

