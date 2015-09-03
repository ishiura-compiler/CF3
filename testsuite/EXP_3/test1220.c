#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = 0U;
uint16_t x13 = UINT16_MAX;
volatile int8_t x15 = 3;
uint32_t x18 = UINT32_MAX;
int32_t x19 = 2978;
volatile uint16_t x22 = 1256U;
int64_t t4 = -312789764001LL;
static uint8_t x35 = UINT8_MAX;
uint32_t x39 = 197U;
uint64_t x46 = UINT64_MAX;
uint8_t x48 = UINT8_MAX;
volatile uint64_t t8 = 17325383359798805LLU;
int64_t x49 = -6LL;
static int16_t x56 = 869;
uint16_t x76 = 16828U;
int8_t x80 = 0;
uint16_t x82 = 56U;
int16_t x86 = INT16_MIN;
volatile int32_t t16 = 9946;
volatile uint32_t t19 = 2777303U;
uint64_t x101 = 3443567477320998LLU;
static uint64_t t20 = 463967080291300306LLU;
uint32_t x105 = 78607U;
uint32_t x107 = 310U;
int8_t x109 = -1;
int8_t x111 = INT8_MIN;
int64_t x120 = INT64_MAX;
int8_t x122 = INT8_MIN;
int32_t t25 = 3710040;
volatile uint32_t t27 = 732226U;
volatile uint32_t t28 = 69U;
volatile int8_t x138 = INT8_MAX;
int16_t x145 = -58;
uint32_t x148 = 317395662U;
static int8_t x157 = -49;
volatile int64_t x161 = -62777612LL;
static volatile int16_t x162 = 254;
int16_t x167 = INT16_MIN;
static int64_t x196 = INT64_MAX;
volatile int64_t t38 = 15061607497815LL;
int8_t x203 = -10;
int32_t x230 = -1;
int32_t t43 = 214916;
uint64_t x251 = 7776093360781327LLU;
uint64_t t48 = 7LLU;
uint32_t x261 = 1U;
static uint16_t x262 = 1285U;
volatile uint32_t x267 = UINT32_MAX;
int16_t x268 = -1;
volatile int32_t t54 = 2;
int64_t t55 = 5973LL;
int32_t t56 = 88;
int16_t x298 = 1;
int8_t x300 = INT8_MAX;
static int8_t x304 = INT8_MAX;
static volatile int8_t x305 = INT8_MIN;
uint8_t x308 = UINT8_MAX;
int64_t x319 = INT64_MAX;
volatile int64_t t64 = -4157LL;
static int32_t x346 = -1;
int8_t x349 = INT8_MAX;
uint32_t x351 = UINT32_MAX;
static int16_t x352 = INT16_MAX;
int32_t x355 = INT32_MIN;
static volatile uint64_t t67 = 111738664332531287LLU;
int64_t x360 = INT64_MIN;
uint32_t t69 = 2U;
uint32_t x369 = 16068U;
volatile uint16_t x370 = UINT16_MAX;
uint64_t x372 = 120899LLU;
uint16_t x374 = UINT16_MAX;
static int32_t x380 = INT32_MAX;
uint8_t x382 = 24U;
int64_t x387 = 3461LL;
volatile uint32_t x406 = UINT32_MAX;
volatile int16_t x407 = INT16_MAX;
int16_t x409 = -9;
uint64_t x411 = 2213905472777LLU;
int32_t x415 = -1;
int8_t x417 = INT8_MAX;
uint32_t x419 = UINT32_MAX;
int8_t x421 = -1;
int32_t t82 = 8398840;
int32_t x441 = -55372;
static int64_t x442 = -1LL;
volatile uint16_t x451 = UINT16_MAX;
static uint64_t x456 = UINT64_MAX;
volatile uint8_t x457 = 0U;
volatile uint32_t t88 = 7U;
static volatile int32_t x476 = INT32_MIN;
static uint64_t x479 = 8114590428LLU;
volatile int32_t t91 = 2;
int64_t t92 = 79875074217032LL;
int16_t x487 = INT16_MIN;
uint64_t x489 = UINT64_MAX;
volatile int8_t x495 = 7;
int64_t x496 = 10LL;
uint16_t x498 = 2U;
volatile uint16_t x521 = 24U;


void f0(void) {
	uint32_t x5 = 1017U;
	int16_t x6 = INT16_MAX;
	static int8_t x7 = -1;
	int32_t x8 = -7;
	uint32_t t0 = 1U;

	t0 = ((x5*x6)&(x7==x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	uint16_t x10 = 104U;
	uint16_t x11 = 14124U;
	int64_t t1 = 252972109348704LL;

	t1 = ((x9*x10)&(x11==x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x14 = 7U;
	int64_t x16 = INT64_MAX;
	volatile int32_t t2 = 19;

	t2 = ((x13*x14)&(x15==x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = INT8_MAX;
	int16_t x20 = -1;
	uint32_t t3 = 10173349U;

	t3 = ((x17*x18)&(x19==x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -222LL;
	static int8_t x23 = 49;
	int32_t x24 = INT32_MIN;

	t4 = ((x21*x22)&(x23==x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = UINT32_MAX;
	volatile int32_t x34 = -1;
	int64_t x36 = INT64_MIN;
	uint32_t t5 = 2U;

	t5 = ((x33*x34)&(x35==x36));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = -1;
	volatile int64_t x38 = 2007149159337LL;
	uint16_t x40 = 25228U;
	int64_t t6 = 7942878355109569LL;

	t6 = ((x37*x38)&(x39==x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 0;
	int8_t x42 = 0;
	int8_t x43 = -1;
	int16_t x44 = -1252;
	static int32_t t7 = 6695204;

	t7 = ((x41*x42)&(x43==x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x45 = UINT32_MAX;
	volatile uint64_t x47 = 6149359086LLU;

	t8 = ((x45*x46)&(x47==x48));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x50 = INT16_MIN;
	static uint32_t x51 = UINT32_MAX;
	uint64_t x52 = 1623898LLU;
	volatile int64_t t9 = -42573LL;

	t9 = ((x49*x50)&(x51==x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 32U;
	int16_t x54 = INT16_MAX;
	static uint8_t x55 = 3U;
	volatile int32_t t10 = -380425175;

	t10 = ((x53*x54)&(x55==x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int16_t x58 = -1;
	volatile int16_t x59 = -1;
	int64_t x60 = INT64_MIN;
	uint64_t t11 = 1847467390937980443LLU;

	t11 = ((x57*x58)&(x59==x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = UINT32_MAX;
	int8_t x66 = 25;
	int32_t x67 = 11020251;
	int64_t x68 = INT64_MIN;
	volatile uint32_t t12 = 3492U;

	t12 = ((x65*x66)&(x67==x68));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = -429437214LL;
	static uint16_t x74 = 204U;
	int8_t x75 = -1;
	static volatile int64_t t13 = 1638656514961LL;

	t13 = ((x73*x74)&(x75==x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x77 = 366LLU;
	static int64_t x78 = -1LL;
	uint64_t x79 = 10201727808844LLU;
	volatile uint64_t t14 = 110371341044LLU;

	t14 = ((x77*x78)&(x79==x80));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x81 = INT8_MAX;
	volatile int8_t x83 = -1;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int32_t t15 = -5301902;

	t15 = ((x81*x82)&(x83==x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = UINT8_MAX;
	volatile int16_t x87 = -1;
	static int16_t x88 = 158;

	t16 = ((x85*x86)&(x87==x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x89 = INT32_MIN;
	uint64_t x90 = 1LLU;
	int64_t x91 = -23563574LL;
	uint32_t x92 = UINT32_MAX;
	static uint64_t t17 = 6204LLU;

	t17 = ((x89*x90)&(x91==x92));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x93 = INT32_MIN;
	uint64_t x94 = 14361LLU;
	uint16_t x95 = 7U;
	volatile int64_t x96 = 2LL;
	volatile uint64_t t18 = 7LLU;

	t18 = ((x93*x94)&(x95==x96));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = 63942U;
	static int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	volatile int64_t x100 = 48939373690698459LL;

	t19 = ((x97*x98)&(x99==x100));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x102 = INT16_MIN;
	int8_t x103 = -2;
	uint32_t x104 = 1U;

	t20 = ((x101*x102)&(x103==x104));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x106 = -14;
	int16_t x108 = INT16_MIN;
	uint32_t t21 = 10001069U;

	t21 = ((x105*x106)&(x107==x108));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x110 = -1074019LL;
	int32_t x112 = 959;
	int64_t t22 = -393734511349246981LL;

	t22 = ((x109*x110)&(x111==x112));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -3596;
	int32_t x114 = -1;
	int32_t x115 = 55085;
	int64_t x116 = -1LL;
	static volatile int32_t t23 = -504;

	t23 = ((x113*x114)&(x115==x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	static volatile uint16_t x118 = UINT16_MAX;
	volatile int32_t x119 = -9851199;
	int32_t t24 = -3;

	t24 = ((x117*x118)&(x119==x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = 2046;
	volatile uint64_t x123 = 8390560266948LLU;
	int8_t x124 = -20;

	t25 = ((x121*x122)&(x123==x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = 2U;
	static int8_t x126 = INT8_MIN;
	uint64_t x127 = 6656488930225673012LLU;
	int8_t x128 = INT8_MIN;
	int32_t t26 = -65216102;

	t26 = ((x125*x126)&(x127==x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = 3895U;
	volatile int32_t x130 = -100919;
	int64_t x131 = INT64_MAX;
	volatile int16_t x132 = -23;

	t27 = ((x129*x130)&(x131==x132));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 22U;
	int32_t x134 = -1;
	int16_t x135 = -1;
	int16_t x136 = INT16_MIN;

	t28 = ((x133*x134)&(x135==x136));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x137 = -12LL;
	int32_t x139 = 6;
	uint64_t x140 = UINT64_MAX;
	static int64_t t29 = 678LL;

	t29 = ((x137*x138)&(x139==x140));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = 0;
	uint16_t x142 = 2583U;
	uint64_t x143 = UINT64_MAX;
	int64_t x144 = 108524834466LL;
	int32_t t30 = -6218;

	t30 = ((x141*x142)&(x143==x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x146 = 11U;
	int64_t x147 = INT64_MAX;
	volatile int32_t t31 = -11;

	t31 = ((x145*x146)&(x147==x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = -1LL;
	static int16_t x150 = INT16_MAX;
	int64_t x151 = -1LL;
	int16_t x152 = INT16_MAX;
	volatile int64_t t32 = 2922662535118871LL;

	t32 = ((x149*x150)&(x151==x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x158 = 3435U;
	int32_t x159 = INT32_MAX;
	int64_t x160 = -1LL;
	int32_t t33 = -27472332;

	t33 = ((x157*x158)&(x159==x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x163 = INT64_MAX;
	int64_t x164 = -1LL;
	static int64_t t34 = -126LL;

	t34 = ((x161*x162)&(x163==x164));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = 54;
	uint64_t x166 = 158LLU;
	int32_t x168 = -29;
	uint64_t t35 = 565690LLU;

	t35 = ((x165*x166)&(x167==x168));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = 1;
	static int64_t x178 = INT64_MIN;
	static int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	int64_t t36 = -73LL;

	t36 = ((x177*x178)&(x179==x180));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x185 = UINT64_MAX;
	volatile int32_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	static int32_t x188 = INT32_MIN;
	uint64_t t37 = 138931070823885LLU;

	t37 = ((x185*x186)&(x187==x188));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x193 = 0U;
	int64_t x194 = -1LL;
	uint16_t x195 = UINT16_MAX;

	t38 = ((x193*x194)&(x195==x196));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x197 = INT16_MAX;
	uint64_t x198 = 17318680625LLU;
	static int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MAX;
	static uint64_t t39 = 71898343641LLU;

	t39 = ((x197*x198)&(x199==x200));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x201 = UINT8_MAX;
	uint8_t x202 = 19U;
	volatile int8_t x204 = INT8_MAX;
	int32_t t40 = -25;

	t40 = ((x201*x202)&(x203==x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x205 = 61361989U;
	int16_t x206 = INT16_MIN;
	static int64_t x207 = INT64_MAX;
	volatile int64_t x208 = 34901LL;
	volatile uint32_t t41 = 126407U;

	t41 = ((x205*x206)&(x207==x208));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x225 = 1243U;
	volatile uint8_t x226 = UINT8_MAX;
	uint64_t x227 = UINT64_MAX;
	uint8_t x228 = 26U;
	volatile uint32_t t42 = 23120960U;

	t42 = ((x225*x226)&(x227==x228));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x229 = 1;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;

	t43 = ((x229*x230)&(x231==x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x233 = INT16_MAX;
	int16_t x234 = -1;
	static int32_t x235 = INT32_MAX;
	int64_t x236 = -2590313LL;
	int32_t t44 = -102;

	t44 = ((x233*x234)&(x235==x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MAX;
	volatile uint16_t x238 = 697U;
	static int16_t x239 = -1;
	int8_t x240 = INT8_MIN;
	int32_t t45 = 1;

	t45 = ((x237*x238)&(x239==x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x241 = INT16_MAX;
	volatile int32_t x242 = 1;
	int32_t x243 = -721505951;
	uint8_t x244 = UINT8_MAX;
	static int32_t t46 = 2842;

	t46 = ((x241*x242)&(x243==x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = -1;
	volatile int32_t x246 = -1;
	static volatile int16_t x247 = INT16_MAX;
	static uint64_t x248 = 28504410736LLU;
	static int32_t t47 = 4205;

	t47 = ((x245*x246)&(x247==x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x249 = UINT64_MAX;
	int64_t x250 = -1LL;
	int64_t x252 = INT64_MAX;

	t48 = ((x249*x250)&(x251==x252));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x257 = UINT8_MAX;
	int32_t x258 = -1;
	uint64_t x259 = 331LLU;
	uint64_t x260 = 2110938533218217LLU;
	volatile int32_t t49 = -11943634;

	t49 = ((x257*x258)&(x259==x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x263 = UINT16_MAX;
	static volatile int8_t x264 = INT8_MIN;
	static volatile uint32_t t50 = 104U;

	t50 = ((x261*x262)&(x263==x264));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x265 = 107505397U;
	int32_t x266 = -1;
	volatile uint32_t t51 = 1U;

	t51 = ((x265*x266)&(x267==x268));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = -1;
	static volatile uint16_t x270 = 4U;
	volatile uint64_t x271 = 14449131LLU;
	uint8_t x272 = 23U;
	int32_t t52 = -117;

	t52 = ((x269*x270)&(x271==x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x273 = 336613501U;
	int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MAX;
	int16_t x276 = -2844;
	volatile uint32_t t53 = 182346U;

	t53 = ((x273*x274)&(x275==x276));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x277 = INT8_MAX;
	volatile int8_t x278 = 1;
	int64_t x279 = -1LL;
	volatile int8_t x280 = -1;

	t54 = ((x277*x278)&(x279==x280));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x281 = INT32_MIN;
	int64_t x282 = 1LL;
	int8_t x283 = 2;
	int8_t x284 = 0;

	t55 = ((x281*x282)&(x283==x284));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = -1;
	int8_t x290 = INT8_MIN;
	volatile int32_t x291 = INT32_MAX;
	uint32_t x292 = 23950U;

	t56 = ((x289*x290)&(x291==x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x293 = 1920U;
	static uint8_t x294 = 16U;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t57 = 506345;

	t57 = ((x293*x294)&(x295==x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x297 = INT16_MAX;
	static uint16_t x299 = 1356U;
	int32_t t58 = -17;

	t58 = ((x297*x298)&(x299==x300));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x301 = UINT32_MAX;
	uint16_t x302 = 21337U;
	int8_t x303 = INT8_MIN;
	uint32_t t59 = 562824U;

	t59 = ((x301*x302)&(x303==x304));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x306 = -1;
	int8_t x307 = -1;
	int32_t t60 = 65339141;

	t60 = ((x305*x306)&(x307==x308));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x317 = UINT16_MAX;
	int8_t x318 = 0;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t61 = -1;

	t61 = ((x317*x318)&(x319==x320));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x325 = -1LL;
	int8_t x326 = 0;
	int8_t x327 = INT8_MIN;
	static volatile int32_t x328 = INT32_MAX;
	int64_t t62 = -289431845069LL;

	t62 = ((x325*x326)&(x327==x328));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x329 = 999854067U;
	static uint8_t x330 = UINT8_MAX;
	int8_t x331 = -1;
	int16_t x332 = INT16_MIN;
	uint32_t t63 = 24U;

	t63 = ((x329*x330)&(x331==x332));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = -1;
	static volatile int64_t x334 = -1LL;
	uint32_t x335 = 301U;
	int8_t x336 = INT8_MIN;

	t64 = ((x333*x334)&(x335==x336));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x345 = 5U;
	static volatile uint16_t x347 = UINT16_MAX;
	static uint8_t x348 = UINT8_MAX;
	volatile int32_t t65 = -11529899;

	t65 = ((x345*x346)&(x347==x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x350 = 3421;
	int32_t t66 = -2705128;

	t66 = ((x349*x350)&(x351==x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x353 = -1;
	uint64_t x354 = 12350982168LLU;
	uint16_t x356 = 0U;

	t67 = ((x353*x354)&(x355==x356));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = INT16_MIN;
	int32_t x358 = -1;
	static volatile int16_t x359 = 54;
	int32_t t68 = 50893;

	t68 = ((x357*x358)&(x359==x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = -1;
	int8_t x363 = INT8_MAX;
	static int32_t x364 = 3;

	t69 = ((x361*x362)&(x363==x364));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x371 = -1;
	uint32_t t70 = 117U;

	t70 = ((x369*x370)&(x371==x372));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x373 = -1;
	static volatile int8_t x375 = INT8_MAX;
	static uint64_t x376 = UINT64_MAX;
	static int32_t t71 = -663;

	t71 = ((x373*x374)&(x375==x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x377 = -1;
	uint16_t x378 = 4U;
	uint32_t x379 = UINT32_MAX;
	int32_t t72 = 7944;

	t72 = ((x377*x378)&(x379==x380));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x381 = INT8_MIN;
	int8_t x383 = 0;
	int32_t x384 = INT32_MIN;
	int32_t t73 = 47087225;

	t73 = ((x381*x382)&(x383==x384));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x385 = INT64_MAX;
	uint64_t x386 = UINT64_MAX;
	uint8_t x388 = 14U;
	uint64_t t74 = 7154207053LLU;

	t74 = ((x385*x386)&(x387==x388));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = -1;
	uint64_t x391 = 107LLU;
	int32_t x392 = -145968;
	int32_t t75 = 1;

	t75 = ((x389*x390)&(x391==x392));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int64_t x398 = -1LL;
	int8_t x399 = 0;
	static int8_t x400 = -1;
	int64_t t76 = -7994587LL;

	t76 = ((x397*x398)&(x399==x400));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x405 = 333LL;
	int16_t x408 = -1;
	int64_t t77 = -384335LL;

	t77 = ((x405*x406)&(x407==x408));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x410 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t78 = -3;

	t78 = ((x409*x410)&(x411==x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x413 = 13259270;
	uint32_t x414 = 1002U;
	volatile int8_t x416 = 0;
	static volatile uint32_t t79 = 918225U;

	t79 = ((x413*x414)&(x415==x416));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x418 = -15167689;
	static uint32_t x420 = UINT32_MAX;
	int32_t t80 = 2412724;

	t80 = ((x417*x418)&(x419==x420));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x422 = -35;
	uint32_t x423 = 29893720U;
	static int16_t x424 = -21;
	static int32_t t81 = 55772;

	t81 = ((x421*x422)&(x423==x424));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x425 = INT16_MIN;
	static int32_t x426 = -1;
	int64_t x427 = -1LL;
	static volatile int32_t x428 = INT32_MAX;

	t82 = ((x425*x426)&(x427==x428));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x429 = INT64_MIN;
	volatile uint8_t x430 = 1U;
	volatile uint64_t x431 = UINT64_MAX;
	uint16_t x432 = 1U;
	static int64_t t83 = -7028407545073LL;

	t83 = ((x429*x430)&(x431==x432));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x437 = 16;
	volatile int32_t x438 = -1;
	int32_t x439 = 238699;
	static uint64_t x440 = 603006991217800689LLU;
	volatile int32_t t84 = -7543858;

	t84 = ((x437*x438)&(x439==x440));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x443 = 14647U;
	uint16_t x444 = 19267U;
	int64_t t85 = 3LL;

	t85 = ((x441*x442)&(x443==x444));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x449 = -1;
	int32_t x450 = -92798119;
	uint64_t x452 = 254562200LLU;
	volatile int32_t t86 = 3624151;

	t86 = ((x449*x450)&(x451==x452));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x453 = INT16_MIN;
	static int32_t x454 = 839;
	static int64_t x455 = 373212454LL;
	static volatile int32_t t87 = 45;

	t87 = ((x453*x454)&(x455==x456));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x458 = 7964U;
	int8_t x459 = INT8_MIN;
	static int8_t x460 = -1;

	t88 = ((x457*x458)&(x459==x460));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x469 = UINT16_MAX;
	uint64_t x470 = 89172LLU;
	uint64_t x471 = UINT64_MAX;
	static int64_t x472 = -1LL;
	uint64_t t89 = 57877371400735524LLU;

	t89 = ((x469*x470)&(x471==x472));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x473 = -160;
	static int32_t x474 = 180147;
	int16_t x475 = INT16_MIN;
	volatile int32_t t90 = 1758;

	t90 = ((x473*x474)&(x475==x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x477 = 19928;
	static int16_t x478 = INT16_MIN;
	uint16_t x480 = 196U;

	t91 = ((x477*x478)&(x479==x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x481 = -79465170941143LL;
	static int16_t x482 = -1;
	int64_t x483 = -2057657LL;
	volatile uint32_t x484 = UINT32_MAX;

	t92 = ((x481*x482)&(x483==x484));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x485 = 3;
	volatile int32_t x486 = 428;
	int32_t x488 = -1;
	int32_t t93 = -139638;

	t93 = ((x485*x486)&(x487==x488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x490 = INT32_MAX;
	static int32_t x491 = INT32_MAX;
	volatile uint64_t x492 = UINT64_MAX;
	uint64_t t94 = 0LLU;

	t94 = ((x489*x490)&(x491==x492));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x493 = -1;
	volatile int16_t x494 = 2;
	volatile int32_t t95 = -88;

	t95 = ((x493*x494)&(x495==x496));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x497 = 422664U;
	int32_t x499 = INT32_MAX;
	static int32_t x500 = INT32_MIN;
	uint32_t t96 = 8211970U;

	t96 = ((x497*x498)&(x499==x500));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x501 = -2283521LL;
	volatile uint32_t x502 = 403U;
	volatile int32_t x503 = -388145;
	static int64_t x504 = INT64_MIN;
	volatile int64_t t97 = 995474LL;

	t97 = ((x501*x502)&(x503==x504));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = -1LL;
	int8_t x518 = INT8_MAX;
	static int32_t x519 = -1;
	uint32_t x520 = UINT32_MAX;
	volatile int64_t t98 = -391243863LL;

	t98 = ((x517*x518)&(x519==x520));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x522 = INT8_MIN;
	int32_t x523 = INT32_MAX;
	int16_t x524 = -1;
	volatile int32_t t99 = 357;

	t99 = ((x521*x522)&(x523==x524));

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

