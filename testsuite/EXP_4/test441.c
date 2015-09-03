#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 322324;
uint8_t x5 = 4U;
volatile int32_t t1 = 3267;
volatile int32_t t2 = -51;
int16_t x13 = -1;
uint16_t x20 = UINT16_MAX;
int8_t x33 = 0;
static volatile int32_t x35 = INT32_MIN;
int32_t x41 = INT32_MIN;
uint16_t x43 = 84U;
volatile int16_t x47 = -1;
static int16_t x63 = 1;
volatile int32_t t9 = 18924107;
int32_t x66 = 4;
static int64_t x68 = 3448300542285967797LL;
volatile uint64_t x78 = 300368779383LLU;
static int32_t t13 = INT32_MAX;
static int8_t x82 = 1;
uint32_t x83 = 7663351U;
int8_t x85 = -19;
int64_t x86 = -1LL;
volatile uint32_t x98 = 6390U;
int32_t t18 = 761;
uint16_t x103 = 1835U;
int16_t x104 = -1;
volatile int32_t t19 = 483393201;
int16_t x106 = -1;
int32_t x109 = INT32_MAX;
int16_t x112 = INT16_MIN;
static int32_t t21 = INT32_MAX;
int64_t x118 = -1LL;
static uint64_t x121 = UINT64_MAX;
volatile int8_t x123 = 12;
uint32_t x127 = 1055444U;
static int16_t x145 = INT16_MIN;
static int8_t x148 = -2;
int32_t x155 = 12111;
int8_t x156 = INT8_MIN;
volatile int32_t x159 = -1;
int64_t t30 = -14032052232903587LL;
volatile int32_t x161 = -14896;
uint32_t x175 = UINT32_MAX;
uint8_t x181 = 1U;
uint16_t x184 = 19U;
int32_t t35 = 457282;
volatile uint64_t x198 = 3076781LLU;
volatile int32_t t37 = -15006;
volatile int16_t x204 = 51;
int16_t x223 = INT16_MIN;
static uint32_t t41 = UINT32_MAX;
int16_t x229 = INT16_MIN;
int16_t x251 = INT16_MIN;
volatile int32_t x255 = -1;
int32_t x258 = INT32_MAX;
int16_t x260 = 424;
uint8_t x266 = UINT8_MAX;
uint8_t x267 = 16U;
int32_t t51 = -2007111;
volatile uint64_t x281 = 7421186452LLU;
volatile int32_t x284 = -1;
int32_t x290 = INT32_MAX;
static volatile int32_t t55 = -11625;
volatile uint8_t x296 = 31U;
int8_t x298 = INT8_MAX;
volatile int32_t t57 = -247012;
int8_t x306 = INT8_MAX;
int64_t x307 = INT64_MIN;
uint16_t x308 = 0U;
int64_t x312 = 2LL;
static int8_t x329 = 15;
int64_t x330 = INT64_MIN;
volatile int8_t x345 = 5;
uint32_t x353 = UINT32_MAX;
int32_t x354 = INT32_MAX;
uint32_t t66 = UINT32_MAX;
volatile uint64_t x376 = 326067172585286596LLU;
static volatile int32_t x377 = INT32_MAX;
static int16_t x380 = INT16_MIN;
static int16_t x387 = INT16_MIN;
volatile uint32_t t71 = 2U;
volatile int8_t x389 = -1;
uint32_t x391 = UINT32_MAX;
uint8_t x392 = 3U;
int8_t x399 = 5;
int32_t t73 = 5654;
int64_t x401 = 934243820LL;
volatile int8_t x403 = 0;
int8_t x404 = INT8_MAX;
volatile int64_t t74 = -14041LL;
int8_t x408 = INT8_MIN;
volatile int32_t t76 = -2;
static int32_t x421 = INT32_MIN;
int8_t x423 = -22;
static volatile int32_t t79 = INT32_MIN;
uint8_t x437 = 89U;
uint16_t x447 = 671U;
uint64_t x451 = UINT64_MAX;
int64_t x454 = INT64_MIN;
int32_t t84 = 14742;
int8_t x461 = INT8_MIN;
int32_t x466 = 0;
volatile uint16_t x470 = UINT16_MAX;
int8_t x477 = INT8_MIN;
static int16_t x482 = -1;
int32_t x485 = 446;
int32_t x487 = INT32_MIN;
uint8_t x488 = 1U;
int32_t t90 = 563916606;
int8_t x496 = INT8_MAX;
int32_t t93 = INT32_MIN;
static uint16_t x508 = 0U;
int32_t x513 = INT32_MIN;
int16_t x521 = INT16_MIN;
static volatile int32_t t97 = 83;


void f0(void) {
	static volatile int16_t x1 = INT16_MAX;
	uint16_t x2 = UINT16_MAX;
	volatile int64_t x3 = -33300687642286LL;
	uint16_t x4 = 31U;

	t0 = (x1|(x2==(x3*x4)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	static uint16_t x7 = 203U;
	uint16_t x8 = 161U;

	t1 = (x5|(x6==(x7*x8)));

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 0U;
	static uint16_t x10 = 381U;
	volatile uint64_t x11 = 706083115363479LLU;
	uint32_t x12 = 12742307U;

	t2 = (x9|(x10==(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 78U;
	uint8_t x15 = 15U;
	uint8_t x16 = 46U;
	volatile int32_t t3 = 1;

	t3 = (x13|(x14==(x15*x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 3832;
	int16_t x18 = INT16_MIN;
	int16_t x19 = -1;
	volatile int32_t t4 = -1;

	t4 = (x17|(x18==(x19*x20)));

	if (t4 != 3832) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x34 = 5215334LLU;
	uint8_t x36 = 0U;
	static volatile int32_t t5 = -8;

	t5 = (x33|(x34==(x35*x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = -1;
	int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -1;
	int32_t t6 = 3540558;

	t6 = (x37|(x38==(x39*x40)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x42 = INT16_MIN;
	static uint16_t x44 = UINT16_MAX;
	volatile int32_t t7 = INT32_MIN;

	t7 = (x41|(x42==(x43*x44)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 2888119LLU;
	int32_t x46 = INT32_MIN;
	volatile int16_t x48 = INT16_MIN;
	uint64_t t8 = 3LLU;

	t8 = (x45|(x46==(x47*x48)));

	if (t8 != 2888119LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MAX;
	int32_t x62 = 61;
	uint64_t x64 = UINT64_MAX;

	t9 = (x61|(x62==(x63*x64)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = 75U;
	int16_t x67 = -1;
	volatile int32_t t10 = 4;

	t10 = (x65|(x66==(x67*x68)));

	if (t10 != 75) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x69 = INT32_MAX;
	static int32_t x70 = 0;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t11 = INT32_MAX;

	t11 = (x69|(x70==(x71*x72)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = -45807987LL;
	uint32_t x74 = UINT32_MAX;
	static int16_t x75 = -376;
	int64_t x76 = -1LL;
	int64_t t12 = 7487202768LL;

	t12 = (x73|(x74==(x75*x76)));

	if (t12 != -45807987LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MAX;
	volatile uint8_t x79 = UINT8_MAX;
	uint32_t x80 = UINT32_MAX;

	t13 = (x77|(x78==(x79*x80)));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -5366405777LL;
	int16_t x84 = -1;
	int64_t t14 = 6715261131645LL;

	t14 = (x81|(x82==(x83*x84)));

	if (t14 != -5366405777LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x87 = -1;
	static uint16_t x88 = UINT16_MAX;
	int32_t t15 = 1328;

	t15 = (x85|(x86==(x87*x88)));

	if (t15 != -19) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = 331;
	int32_t x91 = 198457;
	int8_t x92 = INT8_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = (x89|(x90==(x91*x92)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = -1;
	int32_t x94 = INT32_MIN;
	int16_t x95 = -63;
	uint8_t x96 = 1U;
	int32_t t17 = -59;

	t17 = (x93|(x94==(x95*x96)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x97 = INT8_MIN;
	int16_t x99 = 1051;
	volatile int8_t x100 = -1;

	t18 = (x97|(x98==(x99*x100)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 1U;
	uint8_t x102 = 0U;

	t19 = (x101|(x102==(x103*x104)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = UINT32_MAX;
	static int16_t x107 = INT16_MAX;
	uint32_t x108 = 181919U;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x105|(x106==(x107*x108)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x110 = -1;
	volatile int16_t x111 = 1;

	t21 = (x109|(x110==(x111*x112)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	int16_t x115 = INT16_MAX;
	static uint32_t x116 = 36U;
	int64_t t22 = INT64_MIN;

	t22 = (x113|(x114==(x115*x116)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x117 = -1;
	int64_t x119 = -12910LL;
	volatile int32_t x120 = INT32_MIN;
	int32_t t23 = -48;

	t23 = (x117|(x118==(x119*x120)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x122 = -1;
	uint16_t x124 = 83U;
	static volatile uint64_t t24 = UINT64_MAX;

	t24 = (x121|(x122==(x123*x124)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MAX;
	static uint16_t x128 = 248U;
	volatile int64_t t25 = INT64_MIN;

	t25 = (x125|(x126==(x127*x128)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MAX;
	int16_t x138 = 4199;
	int8_t x139 = -1;
	int16_t x140 = -214;
	int32_t t26 = INT32_MAX;

	t26 = (x137|(x138==(x139*x140)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x141 = 30U;
	static uint8_t x142 = 16U;
	volatile uint32_t x143 = UINT32_MAX;
	int8_t x144 = INT8_MIN;
	volatile uint32_t t27 = 29742797U;

	t27 = (x141|(x142==(x143*x144)));

	if (t27 != 30U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x146 = 15795U;
	volatile uint64_t x147 = 876678151LLU;
	volatile int32_t t28 = -3567;

	t28 = (x145|(x146==(x147*x148)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = -155561512LL;
	uint64_t x154 = 3794608LLU;
	int64_t t29 = -4690552541948538LL;

	t29 = (x153|(x154==(x155*x156)));

	if (t29 != -155561512LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x157 = 71444264778191264LL;
	int16_t x158 = INT16_MIN;
	uint8_t x160 = 4U;

	t30 = (x157|(x158==(x159*x160)));

	if (t30 != 71444264778191264LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x162 = 1U;
	uint64_t x163 = 4394LLU;
	uint32_t x164 = 64507934U;
	int32_t t31 = -24;

	t31 = (x161|(x162==(x163*x164)));

	if (t31 != -14896) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = -2;
	int32_t x171 = INT32_MIN;
	int64_t x172 = -1LL;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x169|(x170==(x171*x172)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x173 = UINT16_MAX;
	static int8_t x174 = INT8_MIN;
	volatile int8_t x176 = 13;
	volatile int32_t t33 = 275;

	t33 = (x173|(x174==(x175*x176)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x182 = 103U;
	int8_t x183 = INT8_MIN;
	volatile int32_t t34 = 0;

	t34 = (x181|(x182==(x183*x184)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x189 = 157U;
	uint32_t x190 = 1802U;
	volatile int16_t x191 = INT16_MIN;
	int16_t x192 = -1;

	t35 = (x189|(x190==(x191*x192)));

	if (t35 != 157) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x193 = 1U;
	int8_t x194 = -1;
	int64_t x195 = 58LL;
	int64_t x196 = -24728954895LL;
	static volatile uint32_t t36 = 7U;

	t36 = (x193|(x194==(x195*x196)));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x197 = 0U;
	int8_t x199 = -1;
	int8_t x200 = INT8_MAX;

	t37 = (x197|(x198==(x199*x200)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x202 = 4U;
	volatile uint32_t x203 = 5624U;
	int64_t t38 = INT64_MIN;

	t38 = (x201|(x202==(x203*x204)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x209 = INT8_MIN;
	int32_t x210 = -11172;
	static int64_t x211 = -1LL;
	volatile int8_t x212 = 1;
	volatile int32_t t39 = 236;

	t39 = (x209|(x210==(x211*x212)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x217 = 9;
	static volatile int32_t x218 = 1;
	volatile int8_t x219 = -1;
	volatile uint8_t x220 = 2U;
	int32_t t40 = -644;

	t40 = (x217|(x218==(x219*x220)));

	if (t40 != 9) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	volatile int32_t x224 = -1;

	t41 = (x221|(x222==(x223*x224)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x225 = 467675937622387020LLU;
	static uint16_t x226 = UINT16_MAX;
	volatile int8_t x227 = INT8_MIN;
	uint16_t x228 = 918U;
	volatile uint64_t t42 = 26401178283LLU;

	t42 = (x225|(x226==(x227*x228)));

	if (t42 != 467675937622387020LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x230 = 3230U;
	static int64_t x231 = -1LL;
	static volatile int32_t x232 = INT32_MAX;
	int32_t t43 = -59;

	t43 = (x229|(x230==(x231*x232)));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x237 = -21;
	int32_t x238 = INT32_MAX;
	volatile int16_t x239 = -16167;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t44 = 183571;

	t44 = (x237|(x238==(x239*x240)));

	if (t44 != -21) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x241 = 155LLU;
	static uint64_t x242 = UINT64_MAX;
	static uint16_t x243 = UINT16_MAX;
	static int8_t x244 = 20;
	volatile uint64_t t45 = 91632736907LLU;

	t45 = (x241|(x242==(x243*x244)));

	if (t45 != 155LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MAX;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = 1933434717332802LLU;
	static int32_t t46 = 1909732;

	t46 = (x245|(x246==(x247*x248)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = INT64_MIN;
	static uint32_t x250 = 1898U;
	int8_t x252 = INT8_MAX;
	int64_t t47 = INT64_MIN;

	t47 = (x249|(x250==(x251*x252)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = 12LL;
	volatile uint32_t x256 = 1066U;
	volatile int32_t t48 = 267;

	t48 = (x253|(x254==(x255*x256)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = 55627LL;
	static uint8_t x259 = 78U;
	volatile int64_t t49 = 5LL;

	t49 = (x257|(x258==(x259*x260)));

	if (t49 != 55627LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x261 = -1LL;
	int8_t x262 = 1;
	int8_t x263 = -1;
	volatile uint16_t x264 = 2U;
	int64_t t50 = -441130LL;

	t50 = (x261|(x262==(x263*x264)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = -14;
	volatile int8_t x268 = -1;

	t51 = (x265|(x266==(x267*x268)));

	if (t51 != -14) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MAX;
	int64_t x275 = -2083331LL;
	int16_t x276 = -1;
	int32_t t52 = -359;

	t52 = (x273|(x274==(x275*x276)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 10822U;
	uint64_t x279 = 3086510772530498864LLU;
	uint64_t x280 = 4948573498463LLU;
	int32_t t53 = -58;

	t53 = (x277|(x278==(x279*x280)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x282 = 1;
	static uint64_t x283 = 53777693062LLU;
	volatile uint64_t t54 = 44879011098LLU;

	t54 = (x281|(x282==(x283*x284)));

	if (t54 != 7421186452LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x289 = -1;
	int16_t x291 = 0;
	static volatile uint16_t x292 = 581U;

	t55 = (x289|(x290==(x291*x292)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x293 = UINT64_MAX;
	uint64_t x294 = 26873LLU;
	volatile uint32_t x295 = 141527706U;
	static volatile uint64_t t56 = UINT64_MAX;

	t56 = (x293|(x294==(x295*x296)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MIN;

	t57 = (x297|(x298==(x299*x300)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x305|(x306==(x307*x308)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x309 = INT8_MIN;
	uint8_t x310 = 14U;
	uint16_t x311 = 5U;
	int32_t t59 = 1;

	t59 = (x309|(x310==(x311*x312)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x313 = -1;
	static int64_t x314 = INT64_MAX;
	volatile int8_t x315 = -1;
	uint8_t x316 = 1U;
	int32_t t60 = -57;

	t60 = (x313|(x314==(x315*x316)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = 332940LLU;
	static volatile int16_t x323 = INT16_MAX;
	int8_t x324 = -1;
	volatile int32_t t61 = 205784;

	t61 = (x321|(x322==(x323*x324)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x331 = 18432U;
	uint16_t x332 = 14U;
	volatile int32_t t62 = 2;

	t62 = (x329|(x330==(x331*x332)));

	if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x341 = INT8_MIN;
	static volatile int32_t x342 = -1;
	static int16_t x343 = INT16_MAX;
	volatile uint8_t x344 = 28U;
	volatile int32_t t63 = -737000571;

	t63 = (x341|(x342==(x343*x344)));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x346 = 1LL;
	uint16_t x347 = UINT16_MAX;
	volatile uint32_t x348 = 6U;
	volatile int32_t t64 = -7495284;

	t64 = (x345|(x346==(x347*x348)));

	if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x349 = -16760077400269LL;
	int16_t x350 = INT16_MIN;
	static uint16_t x351 = 1U;
	volatile int16_t x352 = INT16_MIN;
	int64_t t65 = -889081210790378317LL;

	t65 = (x349|(x350==(x351*x352)));

	if (t65 != -16760077400269LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x355 = 0U;
	volatile int16_t x356 = INT16_MIN;

	t66 = (x353|(x354==(x355*x356)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = UINT8_MAX;
	volatile int32_t x363 = -1;
	uint16_t x364 = UINT16_MAX;
	int32_t t67 = -8;

	t67 = (x361|(x362==(x363*x364)));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x369 = 1;
	int16_t x370 = INT16_MAX;
	int16_t x371 = -1;
	static int8_t x372 = -22;
	volatile int32_t t68 = 218;

	t68 = (x369|(x370==(x371*x372)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x373 = 1;
	uint8_t x374 = UINT8_MAX;
	int64_t x375 = 695LL;
	volatile int32_t t69 = 3;

	t69 = (x373|(x374==(x375*x376)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x378 = -1;
	uint8_t x379 = 36U;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x377|(x378==(x379*x380)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x385 = 62628U;
	static int64_t x386 = -1LL;
	int8_t x388 = 0;

	t71 = (x385|(x386==(x387*x388)));

	if (t71 != 62628U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x390 = UINT32_MAX;
	int32_t t72 = 41476;

	t72 = (x389|(x390==(x391*x392)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = INT16_MAX;
	volatile int8_t x398 = INT8_MIN;
	int32_t x400 = -1;

	t73 = (x397|(x398==(x399*x400)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x402 = UINT32_MAX;

	t74 = (x401|(x402==(x403*x404)));

	if (t74 != 934243820LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x405 = INT16_MIN;
	static uint8_t x406 = 1U;
	static uint16_t x407 = 12740U;
	int32_t t75 = -175;

	t75 = (x405|(x406==(x407*x408)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x409 = -81;
	int32_t x410 = 1;
	uint64_t x411 = 1021567235562LLU;
	int16_t x412 = INT16_MAX;

	t76 = (x409|(x410==(x411*x412)));

	if (t76 != -81) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x413 = INT16_MAX;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MIN;
	static uint64_t x416 = UINT64_MAX;
	static int32_t t77 = -1366398;

	t77 = (x413|(x414==(x415*x416)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = INT64_MAX;
	static int64_t x418 = 3LL;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = -7;
	int64_t t78 = INT64_MAX;

	t78 = (x417|(x418==(x419*x420)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x422 = INT8_MAX;
	uint16_t x424 = UINT16_MAX;

	t79 = (x421|(x422==(x423*x424)));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x433 = -1;
	uint64_t x434 = UINT64_MAX;
	int8_t x435 = -1;
	int8_t x436 = -24;
	int32_t t80 = 0;

	t80 = (x433|(x434==(x435*x436)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x438 = -1;
	int16_t x439 = -1;
	int32_t x440 = INT32_MAX;
	int32_t t81 = -24184;

	t81 = (x437|(x438==(x439*x440)));

	if (t81 != 89) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x445 = 1733LLU;
	static uint32_t x446 = 24U;
	int64_t x448 = 93311LL;
	volatile uint64_t t82 = 28731LLU;

	t82 = (x445|(x446==(x447*x448)));

	if (t82 != 1733LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x449 = UINT32_MAX;
	uint32_t x450 = 993U;
	volatile int8_t x452 = -5;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x449|(x450==(x451*x452)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x453 = 1505U;
	uint8_t x455 = 6U;
	int8_t x456 = -1;

	t84 = (x453|(x454==(x455*x456)));

	if (t84 != 1505) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x462 = INT64_MAX;
	int16_t x463 = -88;
	uint16_t x464 = 54U;
	volatile int32_t t85 = -42827;

	t85 = (x461|(x462==(x463*x464)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x465 = 7U;
	int32_t x467 = -1;
	uint32_t x468 = 769801U;
	volatile int32_t t86 = 1;

	t86 = (x465|(x466==(x467*x468)));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x469 = 1;
	int64_t x471 = -5659171637LL;
	static int16_t x472 = INT16_MIN;
	static volatile int32_t t87 = 544073;

	t87 = (x469|(x470==(x471*x472)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x478 = INT16_MAX;
	uint16_t x479 = 2U;
	static int32_t x480 = -1;
	int32_t t88 = 11135246;

	t88 = (x477|(x478==(x479*x480)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x481 = 2024U;
	int8_t x483 = 19;
	static int64_t x484 = 12LL;
	uint32_t t89 = 55661742U;

	t89 = (x481|(x482==(x483*x484)));

	if (t89 != 2024U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x486 = INT64_MIN;

	t90 = (x485|(x486==(x487*x488)));

	if (t90 != 446) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x489 = INT16_MAX;
	int16_t x490 = INT16_MIN;
	int64_t x491 = -1LL;
	int8_t x492 = INT8_MIN;
	static int32_t t91 = 165;

	t91 = (x489|(x490==(x491*x492)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x493 = 1177;
	int64_t x494 = INT64_MIN;
	int8_t x495 = 1;
	volatile int32_t t92 = 186090;

	t92 = (x493|(x494==(x495*x496)));

	if (t92 != 1177) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x501 = INT32_MIN;
	uint32_t x502 = 1837U;
	static int8_t x503 = INT8_MIN;
	int16_t x504 = 0;

	t93 = (x501|(x502==(x503*x504)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x505 = 6310U;
	int32_t x506 = INT32_MIN;
	uint32_t x507 = UINT32_MAX;
	static volatile int32_t t94 = 10737;

	t94 = (x505|(x506==(x507*x508)));

	if (t94 != 6310) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x514 = UINT32_MAX;
	static uint8_t x515 = UINT8_MAX;
	volatile int16_t x516 = -362;
	int32_t t95 = INT32_MIN;

	t95 = (x513|(x514==(x515*x516)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = -1;
	int8_t x518 = INT8_MIN;
	uint64_t x519 = 297949308074439LLU;
	volatile int32_t x520 = -1;
	static volatile int32_t t96 = -18610611;

	t96 = (x517|(x518==(x519*x520)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x522 = -13238435751LL;
	uint32_t x523 = UINT32_MAX;
	static int32_t x524 = -1;

	t97 = (x521|(x522==(x523*x524)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x529 = UINT8_MAX;
	uint8_t x530 = UINT8_MAX;
	static int8_t x531 = INT8_MIN;
	uint32_t x532 = 3340U;
	volatile int32_t t98 = 4;

	t98 = (x529|(x530==(x531*x532)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x533 = 0;
	int32_t x534 = 636;
	static uint8_t x535 = 77U;
	uint16_t x536 = 29407U;
	int32_t t99 = 256907;

	t99 = (x533|(x534==(x535*x536)));

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

