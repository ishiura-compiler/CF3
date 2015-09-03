#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = 65785;
int16_t x4 = INT16_MIN;
uint64_t x11 = 9166585LLU;
volatile int32_t t2 = 355;
int32_t x20 = -149;
volatile int32_t x21 = INT32_MIN;
static int8_t x24 = 0;
int8_t x29 = INT8_MAX;
uint16_t x31 = UINT16_MAX;
uint8_t x38 = 5U;
static int8_t x39 = INT8_MIN;
static uint64_t x43 = UINT64_MAX;
volatile int32_t t9 = -239;
uint32_t x46 = 14756969U;
int8_t x49 = -1;
int8_t x50 = INT8_MAX;
int32_t t11 = -670;
static int8_t x72 = INT8_MIN;
volatile int32_t t16 = 0;
int8_t x83 = -49;
volatile uint64_t x86 = 1654LLU;
uint32_t x91 = UINT32_MAX;
int32_t t19 = 5705;
int16_t x97 = -3;
static int8_t x102 = 6;
uint8_t x108 = 10U;
uint8_t x109 = 7U;
volatile int64_t x110 = -1525522103451613773LL;
int64_t x112 = -205LL;
uint16_t x115 = 26676U;
static volatile uint16_t x125 = 9473U;
volatile int8_t x127 = 1;
int64_t x129 = INT64_MIN;
static int32_t t29 = -1;
int16_t x154 = -1;
uint16_t x163 = UINT16_MAX;
int8_t x179 = -1;
uint32_t x185 = 248U;
volatile int32_t x191 = -1287901;
int32_t x194 = 33050327;
int8_t x195 = -1;
volatile uint16_t x200 = 0U;
uint16_t x203 = UINT16_MAX;
int64_t x204 = INT64_MIN;
static uint64_t x205 = 92528035412881492LLU;
int16_t x210 = INT16_MIN;
uint64_t x211 = 269637911933099LLU;
int8_t x223 = 4;
int32_t t42 = -12761778;
static uint8_t x227 = UINT8_MAX;
uint64_t x228 = 852LLU;
static uint64_t t43 = 10LLU;
static volatile uint32_t t45 = 1700U;
int32_t x248 = -10038;
int8_t x250 = -1;
uint16_t x251 = 14U;
static uint64_t x258 = UINT64_MAX;
static uint64_t x265 = UINT64_MAX;
static int16_t x266 = 1;
uint16_t x275 = 0U;
uint64_t x276 = 12984364562LLU;
uint16_t x304 = UINT16_MAX;
static int8_t x307 = INT8_MIN;
int32_t x308 = INT32_MAX;
volatile uint64_t x318 = 12457641LLU;
int16_t x319 = 0;
int16_t x322 = 28;
uint8_t x323 = 3U;
int8_t x324 = 0;
volatile int32_t t63 = 134428334;
int8_t x326 = INT8_MIN;
int16_t x331 = 9480;
int64_t x333 = INT64_MAX;
static uint64_t x347 = 34658LLU;
uint32_t x348 = UINT32_MAX;
int16_t x349 = INT16_MIN;
uint8_t x356 = 33U;
int8_t x358 = INT8_MIN;
uint16_t x359 = 151U;
int64_t x360 = INT64_MIN;
volatile uint16_t x362 = UINT16_MAX;
static volatile uint64_t t73 = 143LLU;
volatile uint16_t x374 = UINT16_MAX;
volatile uint32_t x383 = UINT32_MAX;
int8_t x384 = -3;
volatile int32_t t78 = 0;
uint64_t x418 = 13863LLU;
volatile int32_t t83 = 362;
uint64_t x424 = UINT64_MAX;
int64_t x425 = INT64_MIN;
int32_t x429 = -1;
static uint64_t x431 = 71634670611334646LLU;
static int16_t x436 = INT16_MIN;
volatile uint64_t x438 = 951589876LLU;
static volatile int32_t x442 = -19243;
volatile int8_t x443 = INT8_MIN;
volatile int8_t x448 = INT8_MAX;
int32_t x472 = -1;
static int32_t t95 = 156657025;
static int16_t x483 = INT16_MIN;
volatile int64_t x484 = 5871147296LL;
int16_t x485 = INT16_MAX;
volatile int32_t t98 = 14799;
int32_t x499 = INT32_MIN;


void f0(void) {
	static uint64_t x2 = 29978683LLU;
	static uint8_t x3 = UINT8_MAX;
	volatile int32_t t0 = -60561241;

	t0 = (x1&((x2*x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = 26U;
	uint8_t x10 = 38U;
	volatile uint8_t x12 = 51U;
	volatile int32_t t1 = -1;

	t1 = (x9&((x10*x11)<=x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 204U;
	uint32_t x14 = 14196U;
	volatile uint64_t x15 = 112634953780609426LLU;
	static int64_t x16 = INT64_MIN;

	t2 = (x13&((x14*x15)<=x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 6268;
	uint16_t x18 = 1796U;
	uint64_t x19 = 3584281423893871LLU;
	int32_t t3 = -408;

	t3 = (x17&((x18*x19)<=x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MAX;
	int16_t x23 = -75;
	int32_t t4 = -24;

	t4 = (x21&((x22*x23)<=x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	static int8_t x26 = -1;
	int8_t x27 = -1;
	volatile int8_t x28 = 0;
	volatile int32_t t5 = 1;

	t5 = (x25&((x26*x27)<=x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = 1;
	static uint32_t x32 = UINT32_MAX;
	volatile int32_t t6 = 407735070;

	t6 = (x29&((x30*x31)<=x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	uint64_t x36 = 13820766LLU;
	uint64_t t7 = 12056322LLU;

	t7 = (x33&((x34*x35)<=x36));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	volatile uint16_t x40 = UINT16_MAX;
	volatile int32_t t8 = 56172229;

	t8 = (x37&((x38*x39)<=x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = -1LL;
	int64_t x44 = -1LL;

	t9 = (x41&((x42*x43)<=x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = 52U;
	uint32_t x47 = 403437598U;
	static int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -99681;

	t10 = (x45&((x46*x47)<=x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x51 = INT16_MIN;
	static volatile int16_t x52 = 716;

	t11 = (x49&((x50*x51)<=x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -5;
	uint32_t x58 = 1800045U;
	uint16_t x59 = 5U;
	static volatile int64_t x60 = INT64_MIN;
	int32_t t12 = 35;

	t12 = (x57&((x58*x59)<=x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	static int8_t x62 = INT8_MAX;
	static int64_t x63 = -1LL;
	int8_t x64 = INT8_MAX;
	int64_t t13 = 167162177050491656LL;

	t13 = (x61&((x62*x63)<=x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = INT32_MIN;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MAX;
	int32_t t14 = -455544;

	t14 = (x69&((x70*x71)<=x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = 7353;
	uint16_t x74 = 117U;
	uint8_t x75 = 93U;
	static volatile uint8_t x76 = 38U;
	int32_t t15 = -735;

	t15 = (x73&((x74*x75)<=x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -1;
	int64_t x78 = 7543LL;
	int16_t x79 = 125;
	uint16_t x80 = 931U;

	t16 = (x77&((x78*x79)<=x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = INT64_MIN;
	uint64_t x82 = 728722275847LLU;
	static volatile int32_t x84 = -379;
	static int64_t t17 = 1LL;

	t17 = (x81&((x82*x83)<=x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -1LL;
	uint8_t x87 = UINT8_MAX;
	uint16_t x88 = 0U;
	int64_t t18 = 1LL;

	t18 = (x85&((x86*x87)<=x88));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MAX;
	static int64_t x90 = -1LL;
	int16_t x92 = INT16_MAX;

	t19 = (x89&((x90*x91)<=x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile int32_t t20 = -3;

	t20 = (x97&((x98*x99)<=x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x101 = 456;
	uint8_t x103 = 36U;
	int16_t x104 = INT16_MAX;
	volatile int32_t t21 = 201198;

	t21 = (x101&((x102*x103)<=x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -57142771215611LL;
	static int16_t x106 = -1;
	volatile int64_t x107 = -1LL;
	volatile int64_t t22 = 1176711207019987LL;

	t22 = (x105&((x106*x107)<=x108));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x111 = -1;
	static volatile int32_t t23 = -240;

	t23 = (x109&((x110*x111)<=x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x114 = 31138447U;
	static int64_t x116 = INT64_MIN;
	volatile int64_t t24 = -773751866666481LL;

	t24 = (x113&((x114*x115)<=x116));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x126 = 2U;
	uint8_t x128 = UINT8_MAX;
	int32_t t25 = -9;

	t25 = (x125&((x126*x127)<=x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x130 = 6124123828LLU;
	int8_t x131 = -1;
	uint16_t x132 = 61U;
	static int64_t t26 = 1713LL;

	t26 = (x129&((x130*x131)<=x132));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = UINT64_MAX;
	static uint8_t x134 = UINT8_MAX;
	volatile uint64_t x135 = UINT64_MAX;
	uint16_t x136 = 24615U;
	volatile uint64_t t27 = 254606009841208336LLU;

	t27 = (x133&((x134*x135)<=x136));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x141 = UINT16_MAX;
	static volatile int8_t x142 = -1;
	volatile int8_t x143 = -1;
	static volatile int16_t x144 = -504;
	int32_t t28 = 127;

	t28 = (x141&((x142*x143)<=x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = 0;
	uint32_t x146 = 9U;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MIN;

	t29 = (x145&((x146*x147)<=x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = 9960072LL;
	int8_t x155 = INT8_MAX;
	uint8_t x156 = 12U;
	int64_t t30 = -258756524049392847LL;

	t30 = (x153&((x154*x155)<=x156));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x161 = 0;
	int16_t x162 = 19;
	int64_t x164 = -227880648755LL;
	volatile int32_t t31 = 8400761;

	t31 = (x161&((x162*x163)<=x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = 16;
	volatile int8_t x174 = -1;
	volatile int32_t x175 = INT32_MAX;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t32 = 58869;

	t32 = (x173&((x174*x175)<=x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x177 = INT64_MIN;
	volatile int32_t x178 = -1;
	static uint16_t x180 = 606U;
	int64_t t33 = 3629518312853447471LL;

	t33 = (x177&((x178*x179)<=x180));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x181 = 3U;
	volatile int32_t x182 = 3388;
	static int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	uint32_t t34 = 1U;

	t34 = (x181&((x182*x183)<=x184));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x186 = -1;
	int8_t x187 = INT8_MAX;
	int8_t x188 = -1;
	volatile uint32_t t35 = 1516U;

	t35 = (x185&((x186*x187)<=x188));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x189 = 4;
	uint8_t x190 = 2U;
	static int8_t x192 = INT8_MAX;
	volatile int32_t t36 = 32457141;

	t36 = (x189&((x190*x191)<=x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x193 = 433232U;
	volatile uint32_t x196 = 7147U;
	uint32_t t37 = 0U;

	t37 = (x193&((x194*x195)<=x196));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x197 = 0;
	int32_t x198 = INT32_MAX;
	uint64_t x199 = 13067780525779208LLU;
	int32_t t38 = -3;

	t38 = (x197&((x198*x199)<=x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = -1;
	int32_t x202 = 93;
	static int32_t t39 = 116985;

	t39 = (x201&((x202*x203)<=x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x206 = 34U;
	volatile int16_t x207 = -1;
	int8_t x208 = INT8_MIN;
	static uint64_t t40 = 59574335705LLU;

	t40 = (x205&((x206*x207)<=x208));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = -27510559761829367LL;
	uint8_t x212 = 16U;
	static int64_t t41 = 657411226LL;

	t41 = (x209&((x210*x211)<=x212));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x221 = 1;
	uint8_t x222 = UINT8_MAX;
	volatile uint64_t x224 = UINT64_MAX;

	t42 = (x221&((x222*x223)<=x224));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x225 = 1593342652484897066LLU;
	int64_t x226 = -1LL;

	t43 = (x225&((x226*x227)<=x228));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = 10890791771564581LLU;
	uint8_t x230 = UINT8_MAX;
	int64_t x231 = -296548LL;
	uint8_t x232 = 21U;
	volatile uint64_t t44 = 92073706998057LLU;

	t44 = (x229&((x230*x231)<=x232));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x241 = 7777570U;
	volatile int8_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	static uint16_t x244 = 0U;

	t45 = (x241&((x242*x243)<=x244));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x245 = 3855LLU;
	uint16_t x246 = 10U;
	int32_t x247 = -32;
	volatile uint64_t t46 = 278872092LLU;

	t46 = (x245&((x246*x247)<=x248));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x249 = -1;
	uint8_t x252 = 3U;
	static int32_t t47 = -11521;

	t47 = (x249&((x250*x251)<=x252));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x253 = INT8_MAX;
	static volatile int32_t x254 = 11;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = 85728;
	int32_t t48 = 61;

	t48 = (x253&((x254*x255)<=x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	int16_t x259 = INT16_MAX;
	volatile uint16_t x260 = 1540U;
	uint64_t t49 = 683LLU;

	t49 = (x257&((x258*x259)<=x260));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x261 = 1704571LLU;
	int32_t x262 = -1;
	int8_t x263 = INT8_MIN;
	volatile int8_t x264 = 19;
	volatile uint64_t t50 = 708LLU;

	t50 = (x261&((x262*x263)<=x264));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x267 = INT32_MAX;
	static int32_t x268 = INT32_MIN;
	static uint64_t t51 = 79367627059LLU;

	t51 = (x265&((x266*x267)<=x268));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = -3034;
	uint32_t x270 = 4970U;
	volatile int32_t x271 = INT32_MAX;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t52 = 1;

	t52 = (x269&((x270*x271)<=x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x273 = -31;
	static int64_t x274 = INT64_MAX;
	int32_t t53 = -75239973;

	t53 = (x273&((x274*x275)<=x276));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = -3923;
	int64_t x279 = -1LL;
	int32_t x280 = 1247;
	volatile uint32_t t54 = 2658325U;

	t54 = (x277&((x278*x279)<=x280));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x281 = 6050296146LLU;
	int64_t x282 = -1LL;
	int16_t x283 = -35;
	static int16_t x284 = INT16_MIN;
	volatile uint64_t t55 = 681579LLU;

	t55 = (x281&((x282*x283)<=x284));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x285 = UINT8_MAX;
	static volatile int16_t x286 = -1;
	int16_t x287 = INT16_MIN;
	int32_t x288 = 48;
	int32_t t56 = 2;

	t56 = (x285&((x286*x287)<=x288));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x293 = -1;
	volatile uint64_t x294 = 96LLU;
	volatile int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	static volatile int32_t t57 = -696406018;

	t57 = (x293&((x294*x295)<=x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x301 = INT8_MIN;
	static int32_t x302 = INT32_MIN;
	int8_t x303 = 0;
	static volatile int32_t t58 = 248192570;

	t58 = (x301&((x302*x303)<=x304));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x305 = UINT8_MAX;
	static int32_t x306 = -1;
	int32_t t59 = -48;

	t59 = (x305&((x306*x307)<=x308));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x309 = INT8_MAX;
	uint32_t x310 = UINT32_MAX;
	uint16_t x311 = 1U;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t60 = 422949791;

	t60 = (x309&((x310*x311)<=x312));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x313 = 2;
	int16_t x314 = 121;
	static uint32_t x315 = UINT32_MAX;
	int16_t x316 = INT16_MIN;
	volatile int32_t t61 = -2148768;

	t61 = (x313&((x314*x315)<=x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x320 = 5508;
	int32_t t62 = -970350060;

	t62 = (x317&((x318*x319)<=x320));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x321 = INT16_MAX;

	t63 = (x321&((x322*x323)<=x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x325 = INT32_MAX;
	int8_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile int32_t t64 = -8063;

	t64 = (x325&((x326*x327)<=x328));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x329 = INT32_MAX;
	static volatile int8_t x330 = -1;
	int64_t x332 = INT64_MAX;
	int32_t t65 = -331383749;

	t65 = (x329&((x330*x331)<=x332));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x334 = INT8_MIN;
	uint64_t x335 = 902587836451LLU;
	static volatile int64_t x336 = -262540168LL;
	static volatile int64_t t66 = -24738181572528LL;

	t66 = (x333&((x334*x335)<=x336));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = -55686757122789018LL;
	int8_t x338 = INT8_MIN;
	int8_t x339 = -36;
	uint64_t x340 = UINT64_MAX;
	volatile int64_t t67 = 61791945837216LL;

	t67 = (x337&((x338*x339)<=x340));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x341 = 186827599623LLU;
	uint8_t x342 = 0U;
	static uint64_t x343 = 3690360LLU;
	static uint16_t x344 = UINT16_MAX;
	uint64_t t68 = 3310751060949LLU;

	t68 = (x341&((x342*x343)<=x344));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x345 = 725U;
	int64_t x346 = 2621592533774LL;
	int32_t t69 = 6;

	t69 = (x345&((x346*x347)<=x348));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x350 = 28U;
	static int16_t x351 = INT16_MAX;
	int64_t x352 = -137840725832400LL;
	volatile int32_t t70 = -100386;

	t70 = (x349&((x350*x351)<=x352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x353 = 14U;
	static int64_t x354 = INT64_MIN;
	uint64_t x355 = UINT64_MAX;
	int32_t t71 = 986;

	t71 = (x353&((x354*x355)<=x356));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x357 = INT64_MIN;
	volatile int64_t t72 = 269304313697041LL;

	t72 = (x357&((x358*x359)<=x360));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x361 = 8584928585631998493LLU;
	static int32_t x363 = -7124;
	volatile uint32_t x364 = 5U;

	t73 = (x361&((x362*x363)<=x364));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x369 = 73U;
	volatile uint64_t x370 = 7920620971307116LLU;
	int32_t x371 = INT32_MIN;
	static int64_t x372 = INT64_MAX;
	int32_t t74 = 8633105;

	t74 = (x369&((x370*x371)<=x372));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x373 = INT16_MIN;
	static int64_t x375 = -256294454LL;
	int16_t x376 = INT16_MIN;
	volatile int32_t t75 = -95;

	t75 = (x373&((x374*x375)<=x376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x377 = 745571752U;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	volatile uint32_t t76 = 1480U;

	t76 = (x377&((x378*x379)<=x380));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x381 = INT16_MAX;
	volatile uint16_t x382 = UINT16_MAX;
	int32_t t77 = 82;

	t77 = (x381&((x382*x383)<=x384));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x397 = 51;
	uint64_t x398 = 35584899057LLU;
	uint64_t x399 = 450466122LLU;
	int16_t x400 = INT16_MIN;

	t78 = (x397&((x398*x399)<=x400));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = INT64_MAX;
	static uint16_t x402 = 1U;
	static uint64_t x403 = 493320LLU;
	int16_t x404 = 4;
	volatile int64_t t79 = -3321828LL;

	t79 = (x401&((x402*x403)<=x404));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x405 = INT32_MIN;
	volatile uint16_t x406 = UINT16_MAX;
	volatile int16_t x407 = INT16_MAX;
	int32_t x408 = 15432;
	volatile int32_t t80 = -202567;

	t80 = (x405&((x406*x407)<=x408));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x409 = INT64_MAX;
	volatile int32_t x410 = -7010169;
	volatile uint8_t x411 = UINT8_MAX;
	int32_t x412 = -11631653;
	static int64_t t81 = -200LL;

	t81 = (x409&((x410*x411)<=x412));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x413 = -793;
	uint8_t x414 = 60U;
	static int32_t x415 = -29194;
	volatile uint64_t x416 = UINT64_MAX;
	volatile int32_t t82 = 50826;

	t82 = (x413&((x414*x415)<=x416));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x417 = 1U;
	int16_t x419 = INT16_MIN;
	static int64_t x420 = 823994855114LL;

	t83 = (x417&((x418*x419)<=x420));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x421 = 713U;
	int32_t x422 = -1;
	volatile uint32_t x423 = 0U;
	int32_t t84 = 22;

	t84 = (x421&((x422*x423)<=x424));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x426 = 1U;
	int8_t x427 = INT8_MAX;
	volatile int32_t x428 = INT32_MIN;
	volatile int64_t t85 = 91LL;

	t85 = (x425&((x426*x427)<=x428));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x430 = -1;
	int32_t x432 = 3;
	static volatile int32_t t86 = -2018;

	t86 = (x429&((x430*x431)<=x432));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x433 = 6U;
	int16_t x434 = INT16_MAX;
	volatile int8_t x435 = 0;
	static volatile int32_t t87 = -477954844;

	t87 = (x433&((x434*x435)<=x436));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x437 = 942;
	int16_t x439 = INT16_MIN;
	int32_t x440 = INT32_MAX;
	int32_t t88 = 169671522;

	t88 = (x437&((x438*x439)<=x440));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x441 = INT16_MAX;
	static int8_t x444 = INT8_MIN;
	int32_t t89 = 979407;

	t89 = (x441&((x442*x443)<=x444));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x445 = -132841077LL;
	int8_t x446 = 3;
	int64_t x447 = -1LL;
	volatile int64_t t90 = -1LL;

	t90 = (x445&((x446*x447)<=x448));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x449 = -926;
	static int8_t x450 = -1;
	uint32_t x451 = UINT32_MAX;
	int32_t x452 = INT32_MAX;
	volatile int32_t t91 = 680195;

	t91 = (x449&((x450*x451)<=x452));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x457 = INT8_MIN;
	uint64_t x458 = 827LLU;
	int32_t x459 = -6;
	static volatile uint8_t x460 = 5U;
	volatile int32_t t92 = -219026116;

	t92 = (x457&((x458*x459)<=x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x461 = 15803585080967LL;
	volatile uint64_t x462 = 1634750055365LLU;
	uint8_t x463 = 3U;
	int8_t x464 = INT8_MIN;
	volatile int64_t t93 = 3178504961170830LL;

	t93 = (x461&((x462*x463)<=x464));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x469 = -265839686680304LL;
	int16_t x470 = 330;
	uint64_t x471 = UINT64_MAX;
	static int64_t t94 = 6LL;

	t94 = (x469&((x470*x471)<=x472));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x473 = 4U;
	int64_t x474 = 159186LL;
	volatile uint8_t x475 = 13U;
	static uint16_t x476 = 4U;

	t95 = (x473&((x474*x475)<=x476));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x481 = 0U;
	static volatile int8_t x482 = -54;
	volatile int32_t t96 = -1;

	t96 = (x481&((x482*x483)<=x484));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x486 = 80U;
	static int64_t x487 = -1LL;
	uint32_t x488 = UINT32_MAX;
	int32_t t97 = 3;

	t97 = (x485&((x486*x487)<=x488));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x493 = 148U;
	static int16_t x494 = -1;
	uint8_t x495 = UINT8_MAX;
	volatile uint32_t x496 = 140664917U;

	t98 = (x493&((x494*x495)<=x496));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x497 = INT8_MAX;
	static uint32_t x498 = 164U;
	int64_t x500 = INT64_MIN;
	volatile int32_t t99 = 13;

	t99 = (x497&((x498*x499)<=x500));

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

