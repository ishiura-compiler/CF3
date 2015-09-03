#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -230350926;
static uint16_t x3 = 19U;
volatile int64_t x5 = 2014618952895LL;
int8_t x8 = 63;
int64_t x26 = -374449704063217661LL;
uint8_t x27 = 2U;
uint8_t x31 = UINT8_MAX;
uint8_t x41 = 0U;
uint16_t x42 = 48U;
uint64_t x62 = 2LLU;
volatile uint64_t x85 = UINT64_MAX;
static int32_t x87 = 412;
volatile int32_t x104 = -15218324;
uint32_t x109 = 3841889U;
int16_t x110 = -4;
int16_t x112 = -1;
volatile int32_t t17 = 92;
int32_t x129 = INT32_MAX;
int64_t x133 = -1LL;
int8_t x134 = 5;
volatile uint8_t x140 = 0U;
volatile int64_t t22 = 2551239829LL;
uint16_t x149 = 80U;
volatile int32_t t25 = 95011226;
volatile int32_t x168 = 80;
int16_t x171 = 220;
int64_t x176 = 812LL;
int64_t t29 = -15LL;
static int8_t x180 = -1;
int32_t x186 = 36860173;
volatile uint16_t x188 = UINT16_MAX;
int64_t x194 = 3179664521LL;
static int16_t x197 = INT16_MAX;
int64_t x198 = INT64_MAX;
volatile int8_t x205 = -1;
static int16_t x208 = INT16_MIN;
int64_t t36 = -518520703LL;
volatile int16_t x213 = 7;
int64_t x215 = 105805LL;
uint16_t x217 = 6712U;
int64_t x219 = INT64_MIN;
uint64_t t38 = 0LLU;
uint16_t x222 = 788U;
int8_t x224 = 2;
static int64_t t39 = 16372451502LL;
int16_t x227 = -1;
uint32_t x233 = 11U;
uint8_t x235 = 66U;
int16_t x238 = 910;
static int64_t t43 = -2693LL;
int8_t x256 = -1;
volatile int32_t x257 = INT32_MAX;
int32_t x260 = INT32_MIN;
uint16_t x264 = 2U;
int64_t x265 = INT64_MIN;
volatile int16_t x268 = INT16_MIN;
volatile int32_t x279 = -2609422;
static uint8_t x281 = UINT8_MAX;
volatile int8_t x284 = -1;
int16_t x293 = 895;
volatile int32_t t54 = -1368515;
static volatile int64_t x304 = 8673604311LL;
volatile uint8_t x309 = 29U;
int16_t x310 = -1;
int32_t x314 = INT32_MIN;
volatile int16_t x340 = INT16_MIN;
static volatile uint64_t t64 = 99819629621463LLU;
uint32_t x365 = UINT32_MAX;
uint16_t x384 = 3U;
static int64_t x392 = -1LL;
int64_t x394 = INT64_MAX;
int16_t x396 = 1;
int32_t t71 = 1;
uint64_t x406 = UINT64_MAX;
int8_t x413 = INT8_MIN;
static volatile uint64_t t74 = 22121LLU;
volatile int32_t x419 = -13229;
int64_t x420 = -1LL;
uint32_t x427 = 1U;
uint64_t x428 = UINT64_MAX;
volatile int8_t x434 = -1;
int16_t x441 = INT16_MIN;
static uint8_t x445 = 0U;
int32_t t82 = 1;
static int8_t x458 = INT8_MIN;
volatile int32_t t83 = 15638;
int32_t x463 = -1;
static int8_t x477 = -27;
int64_t x478 = INT64_MIN;
volatile int32_t x481 = INT32_MIN;
int32_t x484 = -1;
static int32_t x487 = 37726;
static volatile int32_t t88 = 2;
static uint8_t x491 = 124U;
volatile int64_t t89 = -941273144358LL;
int64_t x494 = INT64_MIN;
int8_t x495 = -58;
static uint64_t x496 = 1216616LLU;
uint32_t x498 = UINT32_MAX;
int32_t t91 = 21;
volatile uint16_t x508 = 0U;
static int16_t x509 = -1;
static volatile int32_t x510 = 337830;
int32_t x512 = -9;
int16_t x517 = INT16_MIN;
int64_t x534 = 58256LL;
static int16_t x536 = 13701;


void f0(void) {
	uint64_t x2 = 1LLU;
	static uint8_t x4 = 10U;
	static int32_t t0 = 4863773;

	t0 = ((x1==x2)*(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = -32;
	uint32_t x7 = UINT32_MAX;
	uint32_t t1 = 55491U;

	t1 = ((x5==x6)*(x7*x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MIN;
	int8_t x15 = -10;
	static uint16_t x16 = 109U;
	int32_t t2 = -49656731;

	t2 = ((x13==x14)*(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = 7LL;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = UINT32_MAX;
	uint32_t t3 = 6875782U;

	t3 = ((x17==x18)*(x19*x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -32543;
	uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t4 = 22LLU;

	t4 = ((x25==x26)*(x27*x28));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	static uint8_t x30 = UINT8_MAX;
	volatile uint16_t x32 = 504U;
	int32_t t5 = 0;

	t5 = ((x29==x30)*(x31*x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x37 = 68LLU;
	uint8_t x38 = 10U;
	int16_t x39 = 0;
	int16_t x40 = 2658;
	int32_t t6 = 4;

	t6 = ((x37==x38)*(x39*x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x43 = INT32_MIN;
	uint32_t x44 = UINT32_MAX;
	volatile uint32_t t7 = 171121U;

	t7 = ((x41==x42)*(x43*x44));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = 2;
	int32_t x50 = -109788;
	uint32_t x51 = 15198U;
	int64_t x52 = -289479801LL;
	static volatile int64_t t8 = -4001351053828LL;

	t8 = ((x49==x50)*(x51*x52));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x61 = UINT8_MAX;
	volatile int8_t x63 = -29;
	int8_t x64 = -1;
	volatile int32_t t9 = -68871944;

	t9 = ((x61==x62)*(x63*x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x69 = -28567LL;
	int8_t x70 = INT8_MIN;
	static int64_t x71 = 262581078822LL;
	int16_t x72 = -1;
	static volatile int64_t t10 = 4214353408LL;

	t10 = ((x69==x70)*(x71*x72));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x73 = 9U;
	volatile int16_t x74 = 1;
	uint16_t x75 = UINT16_MAX;
	static uint32_t x76 = 31507U;
	volatile uint32_t t11 = 6085U;

	t11 = ((x73==x74)*(x75*x76));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = INT64_MAX;
	uint16_t x78 = UINT16_MAX;
	volatile uint8_t x79 = 7U;
	static int16_t x80 = INT16_MIN;
	volatile int32_t t12 = -409426;

	t12 = ((x77==x78)*(x79*x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x86 = 1056;
	int16_t x88 = 1;
	volatile int32_t t13 = -3036;

	t13 = ((x85==x86)*(x87*x88));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x93 = INT32_MAX;
	int16_t x94 = -5;
	volatile int8_t x95 = -4;
	int16_t x96 = 1;
	volatile int32_t t14 = -173296415;

	t14 = ((x93==x94)*(x95*x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = -28;
	int8_t x102 = -31;
	volatile int32_t x103 = -1;
	int32_t t15 = -66;

	t15 = ((x101==x102)*(x103*x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x105 = 1U;
	static int32_t x106 = INT32_MIN;
	int8_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t16 = -2;

	t16 = ((x105==x106)*(x107*x108));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x111 = INT16_MIN;

	t17 = ((x109==x110)*(x111*x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x117 = 8955LLU;
	int8_t x118 = INT8_MIN;
	int32_t x119 = 1192;
	uint16_t x120 = 24U;
	int32_t t18 = -7;

	t18 = ((x117==x118)*(x119*x120));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x121 = 0U;
	int64_t x122 = -1LL;
	int16_t x123 = INT16_MAX;
	int16_t x124 = 574;
	static volatile int32_t t19 = -3762;

	t19 = ((x121==x122)*(x123*x124));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x130 = INT32_MIN;
	volatile uint16_t x131 = 5U;
	int16_t x132 = INT16_MAX;
	int32_t t20 = -2;

	t20 = ((x129==x130)*(x131*x132));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x135 = -14349;
	int16_t x136 = -1;
	static int32_t t21 = 0;

	t21 = ((x133==x134)*(x135*x136));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MIN;

	t22 = ((x137==x138)*(x139*x140));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x141 = INT16_MIN;
	static volatile uint64_t x142 = 3531915077541789LLU;
	uint8_t x143 = UINT8_MAX;
	int8_t x144 = 0;
	int32_t t23 = 391392;

	t23 = ((x141==x142)*(x143*x144));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x150 = INT16_MIN;
	uint64_t x151 = 13219LLU;
	volatile int32_t x152 = -1;
	static volatile uint64_t t24 = 1LLU;

	t24 = ((x149==x150)*(x151*x152));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x153 = 87100449LL;
	int32_t x154 = -1;
	int8_t x155 = INT8_MAX;
	static uint16_t x156 = 4435U;

	t25 = ((x153==x154)*(x155*x156));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x161 = -146;
	int64_t x162 = -1LL;
	int64_t x163 = 106304624608073LL;
	volatile int64_t x164 = -1LL;
	int64_t t26 = -3740923494LL;

	t26 = ((x161==x162)*(x163*x164));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x165 = -30;
	static int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	volatile int32_t t27 = -10;

	t27 = ((x165==x166)*(x167*x168));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = 43717606021920863LL;
	int16_t x172 = INT16_MIN;
	volatile int32_t t28 = 207;

	t28 = ((x169==x170)*(x171*x172));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x173 = UINT64_MAX;
	uint64_t x174 = 164423836LLU;
	uint32_t x175 = UINT32_MAX;

	t29 = ((x173==x174)*(x175*x176));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x177 = UINT32_MAX;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = 9;
	int32_t t30 = 1745;

	t30 = ((x177==x178)*(x179*x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x185 = -1;
	int64_t x187 = 11582234682LL;
	int64_t t31 = -108LL;

	t31 = ((x185==x186)*(x187*x188));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x193 = INT32_MIN;
	static uint32_t x195 = 9U;
	int16_t x196 = INT16_MIN;
	volatile uint32_t t32 = 375076U;

	t32 = ((x193==x194)*(x195*x196));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x199 = 442U;
	int16_t x200 = INT16_MIN;
	uint32_t t33 = 55556U;

	t33 = ((x197==x198)*(x199*x200));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x201 = UINT64_MAX;
	volatile int16_t x202 = INT16_MIN;
	static int16_t x203 = -1;
	uint32_t x204 = UINT32_MAX;
	uint32_t t34 = 175881U;

	t34 = ((x201==x202)*(x203*x204));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x206 = 26U;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t t35 = 7952870;

	t35 = ((x205==x206)*(x207*x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x209 = INT64_MAX;
	int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;

	t36 = ((x209==x210)*(x211*x212));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x214 = INT32_MIN;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t37 = 1153503761191528LLU;

	t37 = ((x213==x214)*(x215*x216));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x218 = UINT8_MAX;
	static volatile uint64_t x220 = 294067016731610LLU;

	t38 = ((x217==x218)*(x219*x220));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x221 = INT16_MAX;
	int64_t x223 = -4124398LL;

	t39 = ((x221==x222)*(x223*x224));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x225 = -2130987;
	uint64_t x226 = UINT64_MAX;
	volatile int16_t x228 = -1;
	volatile int32_t t40 = 88267;

	t40 = ((x225==x226)*(x227*x228));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x234 = INT16_MIN;
	uint32_t x236 = 116865217U;
	uint32_t t41 = 0U;

	t41 = ((x233==x234)*(x235*x236));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = -5;
	int16_t x239 = INT16_MIN;
	int64_t x240 = -1LL;
	int64_t t42 = -33650088336932039LL;

	t42 = ((x237==x238)*(x239*x240));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x241 = 7819955U;
	volatile uint32_t x242 = 1U;
	int16_t x243 = INT16_MIN;
	static int64_t x244 = 5LL;

	t43 = ((x241==x242)*(x243*x244));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x245 = 16417692;
	int8_t x246 = INT8_MIN;
	int64_t x247 = -11033536LL;
	int32_t x248 = -1;
	int64_t t44 = 42611645LL;

	t44 = ((x245==x246)*(x247*x248));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = 8266;
	uint8_t x251 = 7U;
	volatile uint8_t x252 = 8U;
	int32_t t45 = -1724123;

	t45 = ((x249==x250)*(x251*x252));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x253 = 0U;
	static int64_t x254 = INT64_MAX;
	static int16_t x255 = 134;
	int32_t t46 = 9;

	t46 = ((x253==x254)*(x255*x256));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x258 = INT16_MIN;
	uint64_t x259 = 85346018894969789LLU;
	uint64_t t47 = 155LLU;

	t47 = ((x257==x258)*(x259*x260));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = 237425280387487LLU;
	uint64_t t48 = 0LLU;

	t48 = ((x261==x262)*(x263*x264));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x266 = UINT16_MAX;
	uint64_t x267 = 9114658024509065784LLU;
	static volatile uint64_t t49 = 43563613194612539LLU;

	t49 = ((x265==x266)*(x267*x268));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x273 = 1U;
	int64_t x274 = INT64_MIN;
	static uint32_t x275 = 1242U;
	int64_t x276 = -2086651797919395LL;
	int64_t t50 = 546LL;

	t50 = ((x273==x274)*(x275*x276));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x277 = -462LL;
	volatile int32_t x278 = -205678681;
	volatile uint32_t x280 = 0U;
	volatile uint32_t t51 = 0U;

	t51 = ((x277==x278)*(x279*x280));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x282 = -433;
	volatile uint32_t x283 = 6047436U;
	volatile uint32_t t52 = 16630709U;

	t52 = ((x281==x282)*(x283*x284));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x289 = INT32_MAX;
	volatile int16_t x290 = INT16_MIN;
	volatile uint16_t x291 = UINT16_MAX;
	static int8_t x292 = INT8_MIN;
	int32_t t53 = -513717;

	t53 = ((x289==x290)*(x291*x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x294 = INT64_MIN;
	int8_t x295 = INT8_MIN;
	volatile int8_t x296 = INT8_MIN;

	t54 = ((x293==x294)*(x295*x296));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x301 = INT64_MAX;
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 20U;
	volatile int64_t t55 = 7071484507809LL;

	t55 = ((x301==x302)*(x303*x304));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x305 = 6896652620541LLU;
	int16_t x306 = 1041;
	uint16_t x307 = 3U;
	uint8_t x308 = 31U;
	int32_t t56 = 61347;

	t56 = ((x305==x306)*(x307*x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;
	static volatile int32_t t57 = -101281380;

	t57 = ((x309==x310)*(x311*x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x313 = INT8_MIN;
	int64_t x315 = -1LL;
	static int16_t x316 = -1;
	int64_t t58 = -10565817LL;

	t58 = ((x313==x314)*(x315*x316));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x325 = INT16_MIN;
	uint64_t x326 = UINT64_MAX;
	static uint64_t x327 = 206099106650091921LLU;
	int32_t x328 = -1;
	volatile uint64_t t59 = 2025410194LLU;

	t59 = ((x325==x326)*(x327*x328));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x329 = INT16_MIN;
	volatile int16_t x330 = 7;
	uint64_t x331 = 88172719LLU;
	int16_t x332 = INT16_MIN;
	uint64_t t60 = 56347973725296LLU;

	t60 = ((x329==x330)*(x331*x332));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x333 = 1U;
	volatile uint32_t x334 = 98095U;
	int16_t x335 = INT16_MIN;
	volatile int16_t x336 = INT16_MIN;
	int32_t t61 = -7619;

	t61 = ((x333==x334)*(x335*x336));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x337 = INT64_MIN;
	uint16_t x338 = 29U;
	int32_t x339 = -1;
	volatile int32_t t62 = -3471631;

	t62 = ((x337==x338)*(x339*x340));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x345 = -5071;
	uint8_t x346 = 13U;
	volatile uint8_t x347 = 17U;
	int16_t x348 = -25;
	int32_t t63 = 73704937;

	t63 = ((x345==x346)*(x347*x348));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x361 = INT8_MIN;
	static uint8_t x362 = 13U;
	static uint64_t x363 = 31455895763LLU;
	static volatile uint8_t x364 = UINT8_MAX;

	t64 = ((x361==x362)*(x363*x364));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x366 = 985156284;
	volatile int32_t x367 = INT32_MIN;
	uint64_t x368 = 540254873523LLU;
	volatile uint64_t t65 = 64826931151LLU;

	t65 = ((x365==x366)*(x367*x368));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x369 = 57;
	volatile int8_t x370 = INT8_MAX;
	uint16_t x371 = UINT16_MAX;
	uint16_t x372 = 26917U;
	volatile int32_t t66 = 2;

	t66 = ((x369==x370)*(x371*x372));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x377 = INT64_MAX;
	int8_t x378 = -1;
	volatile uint8_t x379 = 8U;
	volatile uint16_t x380 = 66U;
	volatile int32_t t67 = 14157606;

	t67 = ((x377==x378)*(x379*x380));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x381 = INT64_MAX;
	int64_t x382 = -1249945666787LL;
	int16_t x383 = -87;
	int32_t t68 = 265734968;

	t68 = ((x381==x382)*(x383*x384));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x385 = INT16_MIN;
	uint64_t x386 = 2LLU;
	volatile int32_t x387 = -1;
	uint8_t x388 = 5U;
	static volatile int32_t t69 = -35817344;

	t69 = ((x385==x386)*(x387*x388));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x389 = 63U;
	int16_t x390 = -1;
	volatile uint32_t x391 = 2047417410U;
	int64_t t70 = 532476800LL;

	t70 = ((x389==x390)*(x391*x392));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x393 = 750328434227LL;
	int32_t x395 = -1;

	t71 = ((x393==x394)*(x395*x396));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x397 = -1;
	volatile uint8_t x398 = UINT8_MAX;
	uint64_t x399 = UINT64_MAX;
	volatile int64_t x400 = INT64_MIN;
	volatile uint64_t t72 = 740915913LLU;

	t72 = ((x397==x398)*(x399*x400));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x405 = INT32_MAX;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MAX;
	int32_t t73 = -10743719;

	t73 = ((x405==x406)*(x407*x408));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x414 = INT64_MIN;
	static uint64_t x415 = 8863686222172898LLU;
	int16_t x416 = INT16_MAX;

	t74 = ((x413==x414)*(x415*x416));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x417 = UINT64_MAX;
	static volatile int8_t x418 = 12;
	int64_t t75 = -497LL;

	t75 = ((x417==x418)*(x419*x420));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x425 = INT8_MIN;
	int16_t x426 = 917;
	uint64_t t76 = 7LLU;

	t76 = ((x425==x426)*(x427*x428));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x433 = -325;
	int8_t x435 = -52;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t77 = -18458086;

	t77 = ((x433==x434)*(x435*x436));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x437 = -23239325291780552LL;
	int16_t x438 = -12;
	int32_t x439 = -1;
	int8_t x440 = INT8_MAX;
	volatile int32_t t78 = 773743;

	t78 = ((x437==x438)*(x439*x440));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x442 = -4;
	static int16_t x443 = INT16_MAX;
	uint64_t x444 = 73075LLU;
	volatile uint64_t t79 = 216882598LLU;

	t79 = ((x441==x442)*(x443*x444));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x446 = 4160089U;
	uint16_t x447 = 21U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t80 = -224560021;

	t80 = ((x445==x446)*(x447*x448));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x449 = INT16_MAX;
	int16_t x450 = INT16_MIN;
	static int32_t x451 = 26;
	int8_t x452 = -10;
	volatile int32_t t81 = 15986;

	t81 = ((x449==x450)*(x451*x452));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x453 = 256861;
	volatile int64_t x454 = INT64_MAX;
	static int16_t x455 = 376;
	int16_t x456 = 217;

	t82 = ((x453==x454)*(x455*x456));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x457 = INT64_MIN;
	uint16_t x459 = 903U;
	int8_t x460 = 5;

	t83 = ((x457==x458)*(x459*x460));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x461 = INT16_MAX;
	int32_t x462 = -1;
	volatile int16_t x464 = INT16_MIN;
	volatile int32_t t84 = 1836;

	t84 = ((x461==x462)*(x463*x464));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x473 = -1LL;
	int32_t x474 = 199452045;
	volatile int16_t x475 = INT16_MIN;
	static uint8_t x476 = 0U;
	int32_t t85 = 6;

	t85 = ((x473==x474)*(x475*x476));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x479 = INT64_MIN;
	uint64_t x480 = UINT64_MAX;
	uint64_t t86 = 97104976LLU;

	t86 = ((x477==x478)*(x479*x480));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x482 = INT16_MIN;
	static int8_t x483 = INT8_MIN;
	volatile int32_t t87 = -25289;

	t87 = ((x481==x482)*(x483*x484));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x485 = -59034934;
	int16_t x486 = INT16_MAX;
	uint16_t x488 = 53U;

	t88 = ((x485==x486)*(x487*x488));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x489 = INT8_MAX;
	uint32_t x490 = 778984U;
	volatile int64_t x492 = -1LL;

	t89 = ((x489==x490)*(x491*x492));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x493 = -3;
	uint64_t t90 = 81755453762523639LLU;

	t90 = ((x493==x494)*(x495*x496));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x497 = 0U;
	int16_t x499 = -1;
	uint8_t x500 = 7U;

	t91 = ((x497==x498)*(x499*x500));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x501 = 259051U;
	uint16_t x502 = 20U;
	static uint64_t x503 = 11693929861606LLU;
	uint64_t x504 = UINT64_MAX;
	volatile uint64_t t92 = 1728LLU;

	t92 = ((x501==x502)*(x503*x504));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x505 = UINT64_MAX;
	static int16_t x506 = INT16_MAX;
	int16_t x507 = -1;
	int32_t t93 = 101659359;

	t93 = ((x505==x506)*(x507*x508));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x511 = 13U;
	volatile int32_t t94 = -9;

	t94 = ((x509==x510)*(x511*x512));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x518 = INT64_MIN;
	volatile int8_t x519 = INT8_MAX;
	int8_t x520 = -20;
	int32_t t95 = -265425553;

	t95 = ((x517==x518)*(x519*x520));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x521 = INT32_MIN;
	int8_t x522 = INT8_MIN;
	int8_t x523 = 1;
	static volatile int32_t x524 = INT32_MIN;
	volatile int32_t t96 = -1;

	t96 = ((x521==x522)*(x523*x524));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x525 = 6U;
	int32_t x526 = INT32_MIN;
	volatile int8_t x527 = INT8_MIN;
	volatile int64_t x528 = -4057323594LL;
	static volatile int64_t t97 = -28480LL;

	t97 = ((x525==x526)*(x527*x528));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x533 = INT64_MAX;
	static uint8_t x535 = 0U;
	int32_t t98 = 213;

	t98 = ((x533==x534)*(x535*x536));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x537 = UINT8_MAX;
	int8_t x538 = 6;
	int16_t x539 = INT16_MAX;
	volatile int16_t x540 = INT16_MAX;
	static int32_t t99 = 120663810;

	t99 = ((x537==x538)*(x539*x540));

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

