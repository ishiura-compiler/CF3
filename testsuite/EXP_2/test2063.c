#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x17 = -1;
volatile int32_t t2 = 39547206;
static int8_t x26 = 30;
static volatile int64_t x36 = 27842625294003309LL;
int64_t x37 = INT64_MIN;
static uint64_t x71 = UINT64_MAX;
int8_t x90 = 1;
volatile int8_t x93 = INT8_MIN;
uint64_t x107 = 357147LLU;
int16_t x111 = INT16_MIN;
uint8_t x112 = 4U;
uint8_t x113 = UINT8_MAX;
int32_t x118 = -1;
volatile int32_t t18 = 76817133;
uint8_t x121 = 21U;
volatile uint32_t x122 = UINT32_MAX;
static int32_t x123 = INT32_MAX;
int32_t t19 = -4;
int32_t t21 = 10103;
int32_t x133 = -1;
static int64_t x134 = INT64_MIN;
static int32_t x135 = -1;
int8_t x137 = INT8_MAX;
static uint32_t x145 = 1021U;
int32_t t25 = -13359522;
static volatile int32_t t27 = -4;
int8_t x166 = -41;
static uint16_t x195 = 30U;
int32_t t31 = -400807436;
volatile uint16_t x201 = UINT16_MAX;
int8_t x202 = -1;
int8_t x208 = INT8_MIN;
static uint8_t x212 = UINT8_MAX;
uint32_t x215 = UINT32_MAX;
uint32_t x217 = UINT32_MAX;
uint64_t x218 = 5440180993LLU;
uint64_t x219 = 52LLU;
int16_t x222 = INT16_MIN;
uint8_t x240 = UINT8_MAX;
static uint32_t x251 = UINT32_MAX;
static int32_t t42 = -186805;
static volatile int8_t x254 = INT8_MIN;
uint32_t x267 = 36738U;
uint64_t x273 = 4821044685597515309LLU;
volatile int8_t x277 = INT8_MAX;
volatile uint32_t x280 = 1114U;
volatile uint64_t x282 = 3398847197041691LLU;
static int32_t x284 = INT32_MIN;
int32_t t49 = -92;
volatile uint8_t x292 = UINT8_MAX;
static int32_t x293 = 552317254;
int32_t t51 = -1;
volatile int32_t t54 = 94615;
static uint64_t x316 = 102LLU;
volatile int32_t t56 = -8046616;
uint8_t x323 = 110U;
int16_t x324 = INT16_MIN;
static int32_t x339 = INT32_MIN;
int8_t x345 = -12;
int8_t x350 = -1;
int32_t t62 = -639031601;
volatile uint8_t x366 = 5U;
volatile int32_t t64 = -49652;
static int64_t x376 = INT64_MAX;
int16_t x383 = INT16_MIN;
int32_t t68 = 512518411;
uint64_t x404 = 350866363LLU;
static int16_t x411 = -1;
uint8_t x414 = 6U;
static volatile int64_t x416 = -1LL;
int16_t x417 = -1;
int8_t x418 = -1;
int64_t x420 = -7990649339525740LL;
uint8_t x430 = UINT8_MAX;
int32_t x439 = INT32_MIN;
uint32_t x445 = UINT32_MAX;
static uint32_t x448 = 97527623U;
static int32_t t77 = 3158677;
uint64_t x450 = 5640009206973LLU;
int16_t x451 = -10301;
int32_t x457 = 13988;
static int64_t x460 = INT64_MAX;
int32_t x463 = INT32_MIN;
volatile int32_t t81 = 16570;
volatile uint8_t x490 = UINT8_MAX;
volatile int8_t x493 = INT8_MIN;
int8_t x501 = -3;
int32_t x510 = 33183543;
volatile int16_t x513 = INT16_MAX;
int32_t x517 = INT32_MIN;
volatile int32_t t89 = 27;
int64_t x526 = INT64_MAX;
uint64_t x537 = UINT64_MAX;
int8_t x539 = -33;
int64_t x546 = INT64_MAX;
static volatile int16_t x551 = -6562;
uint8_t x558 = 0U;
int32_t x559 = INT32_MIN;
int32_t t96 = -1599068;
int64_t x575 = 17773LL;
int8_t x577 = -1;
volatile int8_t x578 = INT8_MIN;
static int8_t x580 = -3;
uint32_t x582 = 7650U;


void f0(void) {
	volatile int8_t x1 = -19;
	volatile int64_t x2 = -1LL;
	volatile int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -5;

	t0 = ((x1*(x2^x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 656312U;
	int64_t x10 = -1LL;
	static volatile int16_t x11 = 1;
	uint8_t x12 = UINT8_MAX;
	int32_t t1 = 9;

	t1 = ((x9*(x10^x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x18 = 1;
	int32_t x19 = INT32_MIN;
	int64_t x20 = -1LL;

	t2 = ((x17*(x18^x19))<x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = INT32_MAX;
	uint32_t x27 = 12787U;
	int8_t x28 = INT8_MIN;
	int32_t t3 = -3730;

	t3 = ((x25*(x26^x27))<x28);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = -3;
	int64_t x30 = -1LL;
	int32_t x31 = INT32_MAX;
	int32_t x32 = -570;
	int32_t t4 = 462;

	t4 = ((x29*(x30^x31))<x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = 34;
	static int8_t x34 = INT8_MIN;
	volatile int32_t x35 = -1;
	volatile int32_t t5 = 122;

	t5 = ((x33*(x34^x35))<x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x38 = 46702783LLU;
	uint16_t x39 = 0U;
	int8_t x40 = -1;
	volatile int32_t t6 = 49847;

	t6 = ((x37*(x38^x39))<x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = -1;
	int64_t x46 = -1LL;
	int8_t x47 = INT8_MIN;
	int16_t x48 = -1;
	static volatile int32_t t7 = -1787091;

	t7 = ((x45*(x46^x47))<x48);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x57 = 1U;
	int8_t x58 = -1;
	int32_t x59 = -652427196;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t8 = 347316;

	t8 = ((x57*(x58^x59))<x60);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = 1;
	uint8_t x72 = 2U;
	volatile int32_t t9 = -2892;

	t9 = ((x69*(x70^x71))<x72);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x77 = -73241839653461LL;
	uint8_t x78 = 4U;
	uint64_t x79 = UINT64_MAX;
	uint16_t x80 = 0U;
	volatile int32_t t10 = -7;

	t10 = ((x77*(x78^x79))<x80);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x85 = 32U;
	int8_t x86 = 11;
	static int32_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	static int32_t t11 = 6;

	t11 = ((x85*(x86^x87))<x88);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = UINT8_MAX;
	static int32_t t12 = 24;

	t12 = ((x89*(x90^x91))<x92);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x94 = 5397064LL;
	int16_t x95 = 1;
	volatile uint32_t x96 = 66U;
	volatile int32_t t13 = -367389173;

	t13 = ((x93*(x94^x95))<x96);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x101 = -1;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = 1;
	static int32_t x104 = INT32_MIN;
	static volatile int32_t t14 = -1;

	t14 = ((x101*(x102^x103))<x104);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x105 = 19171U;
	volatile int16_t x106 = INT16_MIN;
	int32_t x108 = 627906292;
	static volatile int32_t t15 = 15;

	t15 = ((x105*(x106^x107))<x108);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x109 = -15823LL;
	uint64_t x110 = 8388102LLU;
	volatile int32_t t16 = -1724730;

	t16 = ((x109*(x110^x111))<x112);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x114 = -183198;
	int16_t x115 = -31;
	static int16_t x116 = -1;
	int32_t t17 = 295;

	t17 = ((x113*(x114^x115))<x116);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x117 = -1;
	int16_t x119 = 52;
	int32_t x120 = 12039;

	t18 = ((x117*(x118^x119))<x120);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x124 = INT32_MIN;

	t19 = ((x121*(x122^x123))<x124);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x125 = 35LLU;
	static volatile int64_t x126 = -1LL;
	uint32_t x127 = UINT32_MAX;
	uint16_t x128 = UINT16_MAX;
	static volatile int32_t t20 = 1;

	t20 = ((x125*(x126^x127))<x128);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x129 = UINT8_MAX;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = -1;

	t21 = ((x129*(x130^x131))<x132);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t22 = 103;

	t22 = ((x133*(x134^x135))<x136);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x138 = INT8_MAX;
	uint32_t x139 = 21U;
	static int16_t x140 = INT16_MIN;
	static volatile int32_t t23 = -43;

	t23 = ((x137*(x138^x139))<x140);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x146 = 7893635981936LLU;
	int8_t x147 = -1;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t24 = 15681742;

	t24 = ((x145*(x146^x147))<x148);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x149 = INT16_MIN;
	static uint16_t x150 = UINT16_MAX;
	volatile uint8_t x151 = 7U;
	int8_t x152 = -1;

	t25 = ((x149*(x150^x151))<x152);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x153 = 0U;
	volatile uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 712LLU;
	volatile int64_t x156 = INT64_MIN;
	volatile int32_t t26 = 3710153;

	t26 = ((x153*(x154^x155))<x156);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x161 = 2;
	int16_t x162 = INT16_MAX;
	uint16_t x163 = 4U;
	volatile int32_t x164 = INT32_MIN;

	t27 = ((x161*(x162^x163))<x164);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x165 = 1140250523U;
	static int8_t x167 = 57;
	volatile uint8_t x168 = UINT8_MAX;
	int32_t t28 = 14399;

	t28 = ((x165*(x166^x167))<x168);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = -4993LL;
	static volatile int64_t x170 = -1LL;
	static uint64_t x171 = UINT64_MAX;
	static uint32_t x172 = 512U;
	volatile int32_t t29 = -50;

	t29 = ((x169*(x170^x171))<x172);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x185 = 992558670U;
	static uint32_t x186 = 446U;
	static volatile int8_t x187 = -1;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t30 = 1723;

	t30 = ((x185*(x186^x187))<x188);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x193 = UINT64_MAX;
	static int64_t x194 = -1LL;
	int16_t x196 = -1;

	t31 = ((x193*(x194^x195))<x196);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x203 = UINT8_MAX;
	uint16_t x204 = 32635U;
	volatile int32_t t32 = -2;

	t32 = ((x201*(x202^x203))<x204);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x205 = 51252788783LLU;
	int32_t x206 = -1;
	static int16_t x207 = 1496;
	int32_t t33 = 2481;

	t33 = ((x205*(x206^x207))<x208);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x209 = UINT64_MAX;
	static volatile int64_t x210 = INT64_MAX;
	int16_t x211 = 3;
	int32_t t34 = -142936975;

	t34 = ((x209*(x210^x211))<x212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x213 = 1U;
	int8_t x214 = INT8_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t35 = 500;

	t35 = ((x213*(x214^x215))<x216);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x220 = 6U;
	static int32_t t36 = 1069;

	t36 = ((x217*(x218^x219))<x220);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x221 = 10LLU;
	static uint64_t x223 = UINT64_MAX;
	uint32_t x224 = 77865U;
	static int32_t t37 = -60915163;

	t37 = ((x221*(x222^x223))<x224);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x225 = -10;
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = 1957;
	int32_t x228 = 119;
	volatile int32_t t38 = 1;

	t38 = ((x225*(x226^x227))<x228);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x233 = 4LL;
	volatile uint32_t x234 = 1739184U;
	int8_t x235 = -1;
	uint16_t x236 = 1975U;
	static int32_t t39 = -1216;

	t39 = ((x233*(x234^x235))<x236);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x237 = 478;
	int16_t x238 = INT16_MIN;
	static uint8_t x239 = 23U;
	static int32_t t40 = -204149;

	t40 = ((x237*(x238^x239))<x240);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = INT32_MAX;
	volatile uint32_t x242 = UINT32_MAX;
	volatile uint8_t x243 = UINT8_MAX;
	static uint8_t x244 = UINT8_MAX;
	int32_t t41 = -1021613522;

	t41 = ((x241*(x242^x243))<x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x249 = INT16_MIN;
	uint8_t x250 = UINT8_MAX;
	uint64_t x252 = UINT64_MAX;

	t42 = ((x249*(x250^x251))<x252);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x253 = INT16_MIN;
	volatile int8_t x255 = 0;
	int16_t x256 = -1;
	int32_t t43 = -5671643;

	t43 = ((x253*(x254^x255))<x256);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x261 = 1U;
	volatile int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MIN;
	volatile int16_t x264 = -1;
	static int32_t t44 = 1999189;

	t44 = ((x261*(x262^x263))<x264);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MAX;
	volatile int16_t x268 = -6229;
	static volatile int32_t t45 = 154682057;

	t45 = ((x265*(x266^x267))<x268);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x269 = 1;
	static int64_t x270 = INT64_MAX;
	static int64_t x271 = INT64_MIN;
	uint64_t x272 = 4338845LLU;
	int32_t t46 = 14564799;

	t46 = ((x269*(x270^x271))<x272);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x274 = 0U;
	uint64_t x275 = 514552534574736985LLU;
	uint16_t x276 = 6835U;
	volatile int32_t t47 = 3526334;

	t47 = ((x273*(x274^x275))<x276);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x278 = UINT8_MAX;
	static uint16_t x279 = UINT16_MAX;
	volatile int32_t t48 = 798752;

	t48 = ((x277*(x278^x279))<x280);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x281 = -1;
	int8_t x283 = INT8_MAX;

	t49 = ((x281*(x282^x283))<x284);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x289 = -1;
	static volatile int64_t x290 = 766166LL;
	static int32_t x291 = INT32_MIN;
	static volatile int32_t t50 = 3;

	t50 = ((x289*(x290^x291))<x292);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x294 = INT16_MAX;
	uint32_t x295 = UINT32_MAX;
	volatile int8_t x296 = INT8_MIN;

	t51 = ((x293*(x294^x295))<x296);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x297 = INT8_MIN;
	int64_t x298 = -8717342070118LL;
	int32_t x299 = 1881653;
	int32_t x300 = 165;
	volatile int32_t t52 = -733517958;

	t52 = ((x297*(x298^x299))<x300);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x305 = INT8_MIN;
	static volatile uint16_t x306 = 248U;
	static int32_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int32_t t53 = -880361686;

	t53 = ((x305*(x306^x307))<x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x309 = -3;
	int32_t x310 = INT32_MIN;
	int64_t x311 = 187017602808703015LL;
	int32_t x312 = -775;

	t54 = ((x309*(x310^x311))<x312);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x313 = 1U;
	uint64_t x314 = 3708022086LLU;
	volatile uint64_t x315 = 14922166055120120LLU;
	volatile int32_t t55 = 27535;

	t55 = ((x313*(x314^x315))<x316);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x317 = INT32_MIN;
	volatile uint32_t x318 = 19986U;
	int16_t x319 = -1;
	uint16_t x320 = 3931U;

	t56 = ((x317*(x318^x319))<x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x321 = INT16_MIN;
	volatile int8_t x322 = 14;
	volatile int32_t t57 = 6970;

	t57 = ((x321*(x322^x323))<x324);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	int64_t x335 = 3620798415582LL;
	static int8_t x336 = INT8_MAX;
	volatile int32_t t58 = 83791688;

	t58 = ((x333*(x334^x335))<x336);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x337 = 7U;
	int32_t x338 = INT32_MIN;
	static int8_t x340 = INT8_MAX;
	int32_t t59 = 785384670;

	t59 = ((x337*(x338^x339))<x340);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x346 = 130;
	uint32_t x347 = 2965U;
	volatile uint16_t x348 = 17U;
	int32_t t60 = -1611036;

	t60 = ((x345*(x346^x347))<x348);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x349 = -1;
	int16_t x351 = INT16_MIN;
	int32_t x352 = 554;
	int32_t t61 = 788784;

	t61 = ((x349*(x350^x351))<x352);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x358 = -1;
	volatile uint64_t x359 = UINT64_MAX;
	volatile int64_t x360 = INT64_MAX;

	t62 = ((x357*(x358^x359))<x360);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x365 = 1;
	uint16_t x367 = 536U;
	int16_t x368 = -4572;
	int32_t t63 = -7;

	t63 = ((x365*(x366^x367))<x368);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x369 = INT16_MIN;
	static uint16_t x370 = 2040U;
	int8_t x371 = -1;
	volatile uint8_t x372 = 13U;

	t64 = ((x369*(x370^x371))<x372);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x373 = -1LL;
	static volatile uint16_t x374 = UINT16_MAX;
	static int32_t x375 = 1844;
	int32_t t65 = -11603933;

	t65 = ((x373*(x374^x375))<x376);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MIN;
	int16_t x379 = -104;
	volatile int64_t x380 = -7LL;
	volatile int32_t t66 = 3;

	t66 = ((x377*(x378^x379))<x380);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x381 = 891;
	int8_t x382 = INT8_MIN;
	uint16_t x384 = 279U;
	volatile int32_t t67 = 443410;

	t67 = ((x381*(x382^x383))<x384);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x385 = 55;
	static int16_t x386 = -1;
	uint64_t x387 = 273990LLU;
	int8_t x388 = INT8_MIN;

	t68 = ((x385*(x386^x387))<x388);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x401 = -2518;
	int8_t x402 = 3;
	int8_t x403 = INT8_MIN;
	volatile int32_t t69 = 1;

	t69 = ((x401*(x402^x403))<x404);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x409 = 953292LLU;
	volatile int16_t x410 = 3147;
	uint64_t x412 = UINT64_MAX;
	int32_t t70 = 5;

	t70 = ((x409*(x410^x411))<x412);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x413 = 16U;
	int8_t x415 = INT8_MIN;
	int32_t t71 = 203;

	t71 = ((x413*(x414^x415))<x416);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x419 = 1U;
	int32_t t72 = -7130508;

	t72 = ((x417*(x418^x419))<x420);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x421 = -1;
	int32_t x422 = -1;
	uint8_t x423 = 8U;
	int64_t x424 = INT64_MAX;
	static int32_t t73 = -140062710;

	t73 = ((x421*(x422^x423))<x424);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x429 = 0U;
	uint32_t x431 = UINT32_MAX;
	volatile int64_t x432 = -1LL;
	static volatile int32_t t74 = 12;

	t74 = ((x429*(x430^x431))<x432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x437 = 0U;
	uint32_t x438 = 3U;
	volatile int8_t x440 = INT8_MIN;
	static volatile int32_t t75 = 788421;

	t75 = ((x437*(x438^x439))<x440);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x441 = 6678LLU;
	volatile int32_t x442 = INT32_MIN;
	volatile int8_t x443 = INT8_MIN;
	volatile int8_t x444 = 6;
	volatile int32_t t76 = 130442229;

	t76 = ((x441*(x442^x443))<x444);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x446 = INT32_MIN;
	uint32_t x447 = 37278U;

	t77 = ((x445*(x446^x447))<x448);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x449 = INT8_MAX;
	int16_t x452 = -1;
	volatile int32_t t78 = -1;

	t78 = ((x449*(x450^x451))<x452);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x458 = 7U;
	int8_t x459 = -1;
	volatile int32_t t79 = 11;

	t79 = ((x457*(x458^x459))<x460);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x461 = INT8_MIN;
	static uint32_t x462 = UINT32_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t80 = 1219;

	t80 = ((x461*(x462^x463))<x464);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x465 = -12;
	int32_t x466 = INT32_MIN;
	static int64_t x467 = -1LL;
	int32_t x468 = INT32_MIN;

	t81 = ((x465*(x466^x467))<x468);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x473 = UINT16_MAX;
	static int32_t x474 = INT32_MIN;
	uint64_t x475 = UINT64_MAX;
	uint8_t x476 = 70U;
	volatile int32_t t82 = 27;

	t82 = ((x473*(x474^x475))<x476);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x481 = -1;
	volatile int8_t x482 = INT8_MAX;
	int16_t x483 = INT16_MAX;
	volatile int16_t x484 = 859;
	int32_t t83 = -14;

	t83 = ((x481*(x482^x483))<x484);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x489 = 3U;
	int8_t x491 = INT8_MIN;
	static int16_t x492 = 677;
	int32_t t84 = -10184;

	t84 = ((x489*(x490^x491))<x492);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x494 = 191359295U;
	uint32_t x495 = 33U;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t85 = 596;

	t85 = ((x493*(x494^x495))<x496);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x502 = 2U;
	int64_t x503 = -53016LL;
	int64_t x504 = -458LL;
	int32_t t86 = 28404479;

	t86 = ((x501*(x502^x503))<x504);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x509 = -1LL;
	static uint8_t x511 = 1U;
	int32_t x512 = INT32_MAX;
	volatile int32_t t87 = -150996833;

	t87 = ((x509*(x510^x511))<x512);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x514 = INT8_MIN;
	int16_t x515 = -6690;
	volatile uint64_t x516 = 14458416769327973LLU;
	static int32_t t88 = 5;

	t88 = ((x513*(x514^x515))<x516);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x518 = 29U;
	static uint8_t x519 = 1U;
	int64_t x520 = 5LL;

	t89 = ((x517*(x518^x519))<x520);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x525 = UINT16_MAX;
	uint64_t x527 = UINT64_MAX;
	int8_t x528 = -18;
	volatile int32_t t90 = 857;

	t90 = ((x525*(x526^x527))<x528);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x533 = 5;
	int32_t x534 = -762958;
	uint32_t x535 = 715998925U;
	uint64_t x536 = 11678530339856LLU;
	volatile int32_t t91 = -36;

	t91 = ((x533*(x534^x535))<x536);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x538 = 135302500U;
	volatile int8_t x540 = 1;
	int32_t t92 = 3;

	t92 = ((x537*(x538^x539))<x540);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x541 = INT32_MIN;
	static uint64_t x542 = 1683LLU;
	int16_t x543 = -2194;
	uint64_t x544 = 107275724421186LLU;
	volatile int32_t t93 = 1611240;

	t93 = ((x541*(x542^x543))<x544);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x545 = 53U;
	uint64_t x547 = 2957587232388147LLU;
	static int32_t x548 = -1;
	int32_t t94 = 18;

	t94 = ((x545*(x546^x547))<x548);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x549 = 6LLU;
	int32_t x550 = 26061527;
	static int16_t x552 = INT16_MAX;
	volatile int32_t t95 = -289251;

	t95 = ((x549*(x550^x551))<x552);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x557 = 71636132665LLU;
	uint32_t x560 = 1000U;

	t96 = ((x557*(x558^x559))<x560);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x573 = 30618516519LLU;
	int16_t x574 = -1;
	int32_t x576 = -1;
	int32_t t97 = 247;

	t97 = ((x573*(x574^x575))<x576);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x579 = INT16_MIN;
	volatile int32_t t98 = -20930;

	t98 = ((x577*(x578^x579))<x580);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x581 = INT16_MIN;
	int8_t x583 = INT8_MIN;
	volatile int16_t x584 = -104;
	int32_t t99 = -119810;

	t99 = ((x581*(x582^x583))<x584);

	if (t99 != 1) { NG(); } else { ; }
	
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

