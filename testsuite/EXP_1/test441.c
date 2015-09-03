#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = 4U;
uint32_t x4 = 16U;
uint32_t t0 = 746701U;
volatile uint64_t x7 = UINT64_MAX;
uint64_t x9 = 9995891LLU;
static int8_t x10 = INT8_MAX;
int32_t t2 = -19;
static uint64_t x20 = 4467855788695LLU;
static volatile uint8_t x22 = 1U;
static int64_t x23 = 494491348425700LL;
uint16_t x29 = 339U;
uint32_t x33 = UINT32_MAX;
int32_t x36 = INT32_MIN;
volatile int32_t t7 = 4560;
int32_t x46 = -486;
int8_t x48 = INT8_MAX;
int64_t x49 = -6LL;
uint8_t x53 = 72U;
static int32_t t11 = 4135;
volatile int16_t x59 = -1;
static volatile int32_t t12 = -1310268;
volatile int32_t t13 = 7;
int8_t x85 = 21;
volatile int64_t x93 = INT64_MAX;
int32_t x95 = INT32_MIN;
int32_t t19 = 6;
uint64_t x101 = 256163LLU;
volatile uint32_t x102 = 48722U;
volatile uint32_t t21 = UINT32_MAX;
uint32_t x109 = 334U;
static volatile uint64_t x117 = 130999478425LLU;
static volatile int32_t t25 = -1;
static uint16_t x128 = UINT16_MAX;
static int32_t x141 = 19567;
volatile int64_t x144 = -4418458182869LL;
volatile int64_t t27 = 3649LL;
int8_t x170 = -43;
volatile int8_t x171 = -3;
int8_t x173 = 0;
uint64_t x174 = 2048960LLU;
int8_t x176 = INT8_MAX;
int16_t x181 = 3;
int16_t x183 = -1317;
volatile int16_t x198 = -1;
volatile int64_t t36 = 501335526554LL;
int64_t x216 = 0LL;
int64_t t38 = -9960581575LL;
int32_t x218 = 102;
volatile int32_t t39 = -149;
uint32_t x221 = 56U;
volatile uint8_t x226 = UINT8_MAX;
uint16_t x230 = 28236U;
static uint64_t t44 = UINT64_MAX;
static int16_t x243 = 1;
uint32_t x244 = 365U;
uint32_t t45 = 40732U;
int8_t x252 = -27;
volatile int32_t t49 = -304870;
int8_t x276 = INT8_MIN;
uint64_t x280 = UINT64_MAX;
uint64_t t51 = UINT64_MAX;
int16_t x281 = INT16_MAX;
uint16_t x282 = 7102U;
int16_t x285 = -1;
uint64_t t54 = 6249939612LLU;
static int8_t x293 = INT8_MIN;
int64_t x299 = 528371021133LL;
int32_t t56 = 434;
int32_t t58 = INT32_MAX;
uint8_t x313 = 22U;
int32_t t60 = -1;
int16_t x320 = -328;
static int64_t x334 = -1LL;
static volatile int32_t x335 = INT32_MIN;
int32_t x351 = INT32_MAX;
volatile int8_t x352 = INT8_MIN;
static uint16_t x354 = 2U;
static uint64_t x370 = UINT64_MAX;
uint16_t x371 = 28206U;
static int64_t x377 = -1LL;
int32_t t71 = 65549;
static uint32_t x387 = UINT32_MAX;
volatile int32_t t73 = -12292008;
int64_t x396 = INT64_MAX;
volatile int32_t t76 = 6192;
int8_t x406 = INT8_MIN;
int16_t x408 = -1;
volatile int32_t t77 = -20497;
volatile int64_t x410 = -8LL;
volatile int8_t x411 = -1;
static volatile uint16_t x415 = 0U;
int32_t x421 = -24;
volatile int32_t x425 = -2620004;
int32_t x426 = -1;
int8_t x427 = 20;
int32_t x433 = INT32_MIN;
int32_t x436 = INT32_MIN;
uint16_t x441 = 224U;
int16_t x443 = INT16_MIN;
int32_t x458 = INT32_MIN;
int8_t x463 = -17;
uint8_t x482 = 34U;
volatile uint64_t t94 = 3779816451LLU;
static uint64_t x488 = 259LLU;
static int8_t x489 = INT8_MIN;
int8_t x491 = 3;
int8_t x498 = INT8_MIN;
static volatile uint64_t x506 = 1422692516LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = 3933LLU;

	t0 = (((x1*x2)==x3)|x4);

	if (t0 != 16U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 9396705U;
	uint8_t x6 = UINT8_MAX;
	static int64_t x8 = INT64_MIN;
	volatile int64_t t1 = INT64_MIN;

	t1 = (((x5*x6)==x7)|x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = INT64_MIN;
	int8_t x12 = 24;

	t2 = (((x9*x10)==x11)|x12);

	if (t2 != 24) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = -1;
	int16_t x18 = -1;
	static volatile int64_t x19 = -1LL;
	static uint64_t t3 = 521355310080LLU;

	t3 = (((x17*x18)==x19)|x20);

	if (t3 != 4467855788695LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MAX;
	int8_t x24 = INT8_MAX;
	volatile int32_t t4 = -19816;

	t4 = (((x21*x22)==x23)|x24);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 96819554710084LLU;
	uint32_t x26 = 16271U;
	int64_t x27 = 17486LL;
	int32_t x28 = -419;
	int32_t t5 = 17;

	t5 = (((x25*x26)==x27)|x28);

	if (t5 != -419) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = 91U;
	volatile int8_t x31 = INT8_MAX;
	static int64_t x32 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = (((x29*x30)==x31)|x32);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x34 = 1U;
	volatile int16_t x35 = -1;

	t7 = (((x33*x34)==x35)|x36);

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	int32_t x39 = 33857;
	uint8_t x40 = 65U;
	int32_t t8 = 3221864;

	t8 = (((x37*x38)==x39)|x40);

	if (t8 != 65) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 30U;
	int16_t x47 = -1;
	volatile int32_t t9 = 251613;

	t9 = (((x45*x46)==x47)|x48);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = INT32_MAX;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t10 = -1;

	t10 = (((x49*x50)==x51)|x52);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = -1;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;

	t11 = (((x53*x54)==x55)|x56);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	volatile int16_t x58 = 0;
	int8_t x60 = -1;

	t12 = (((x57*x58)==x59)|x60);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	int16_t x67 = INT16_MAX;
	int16_t x68 = -1;

	t13 = (((x65*x66)==x67)|x68);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = 1615LL;
	int8_t x70 = -1;
	volatile int64_t x71 = INT64_MAX;
	int8_t x72 = -1;
	static volatile int32_t t14 = 39259;

	t14 = (((x69*x70)==x71)|x72);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x73 = -983374735881225985LL;
	static volatile int8_t x74 = -1;
	static uint32_t x75 = 10037185U;
	static volatile int32_t x76 = INT32_MAX;
	int32_t t15 = INT32_MAX;

	t15 = (((x73*x74)==x75)|x76);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x86 = 524U;
	static uint64_t x87 = 6LLU;
	int16_t x88 = INT16_MIN;
	int32_t t16 = 676;

	t16 = (((x85*x86)==x87)|x88);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 535012314U;
	int16_t x90 = INT16_MAX;
	uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 2U;
	static volatile int32_t t17 = -19172465;

	t17 = (((x89*x90)==x91)|x92);

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x94 = -1LL;
	int32_t x96 = 15827781;
	int32_t t18 = 635736;

	t18 = (((x93*x94)==x95)|x96);

	if (t18 != 15827781) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 3U;
	static int8_t x98 = INT8_MAX;
	uint64_t x99 = 9816962LLU;
	static int16_t x100 = 115;

	t19 = (((x97*x98)==x99)|x100);

	if (t19 != 115) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x103 = -1;
	uint16_t x104 = 27U;
	int32_t t20 = -12350263;

	t20 = (((x101*x102)==x103)|x104);

	if (t20 != 27) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = -1;
	static int16_t x106 = INT16_MIN;
	volatile int64_t x107 = INT64_MIN;
	static uint32_t x108 = UINT32_MAX;

	t21 = (((x105*x106)==x107)|x108);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x110 = 525U;
	int8_t x111 = INT8_MIN;
	static uint16_t x112 = 0U;
	volatile int32_t t22 = -1068632631;

	t22 = (((x109*x110)==x111)|x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = 3;
	int64_t x114 = 3251712584LL;
	uint64_t x115 = UINT64_MAX;
	int16_t x116 = -1;
	static int32_t t23 = -287932;

	t23 = (((x113*x114)==x115)|x116);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x118 = 1U;
	int64_t x119 = 1391504437152LL;
	uint64_t x120 = 24196469601338099LLU;
	uint64_t t24 = 19405334LLU;

	t24 = (((x117*x118)==x119)|x120);

	if (t24 != 24196469601338099LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -1;
	volatile uint32_t x122 = 8260712U;
	int16_t x123 = INT16_MIN;
	volatile int32_t x124 = -1388446;

	t25 = (((x121*x122)==x123)|x124);

	if (t25 != -1388446) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = -1;
	static int8_t x126 = -1;
	uint32_t x127 = 15047428U;
	int32_t t26 = 471075;

	t26 = (((x125*x126)==x127)|x128);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;

	t27 = (((x141*x142)==x143)|x144);

	if (t27 != -4418458182869LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = 1U;
	int64_t x146 = -206LL;
	uint16_t x147 = UINT16_MAX;
	int32_t x148 = 0;
	volatile int32_t t28 = -134;

	t28 = (((x145*x146)==x147)|x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = -368;
	int64_t x158 = -1LL;
	volatile uint64_t x159 = UINT64_MAX;
	int32_t x160 = -1;
	static volatile int32_t t29 = -53973;

	t29 = (((x157*x158)==x159)|x160);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x169 = INT8_MIN;
	static int8_t x172 = -1;
	static volatile int32_t t30 = -245081847;

	t30 = (((x169*x170)==x171)|x172);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x175 = INT8_MIN;
	int32_t t31 = 582849346;

	t31 = (((x173*x174)==x175)|x176);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x182 = -1;
	uint16_t x184 = 6U;
	int32_t t32 = -1547;

	t32 = (((x181*x182)==x183)|x184);

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = 25;
	uint16_t x190 = 11061U;
	uint16_t x191 = UINT16_MAX;
	volatile uint32_t x192 = UINT32_MAX;
	static volatile uint32_t t33 = UINT32_MAX;

	t33 = (((x189*x190)==x191)|x192);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x197 = 0;
	static volatile int8_t x199 = -1;
	volatile int64_t x200 = INT64_MIN;
	int64_t t34 = INT64_MIN;

	t34 = (((x197*x198)==x199)|x200);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x201 = 0U;
	uint8_t x202 = UINT8_MAX;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t35 = 7326;

	t35 = (((x201*x202)==x203)|x204);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = INT32_MIN;
	static uint32_t x206 = UINT32_MAX;
	int16_t x207 = INT16_MIN;
	int64_t x208 = -3207344434167LL;

	t36 = (((x205*x206)==x207)|x208);

	if (t36 != -3207344434167LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = 13;
	int16_t x210 = INT16_MIN;
	static int32_t x211 = INT32_MIN;
	static int64_t x212 = -1LL;
	volatile int64_t t37 = -136253LL;

	t37 = (((x209*x210)==x211)|x212);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x213 = 0U;
	volatile int64_t x214 = -2328040645770486959LL;
	int32_t x215 = 233228;

	t38 = (((x213*x214)==x215)|x216);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x217 = UINT8_MAX;
	static uint64_t x219 = UINT64_MAX;
	int32_t x220 = -108;

	t39 = (((x217*x218)==x219)|x220);

	if (t39 != -108) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x222 = 66U;
	int16_t x223 = 1;
	static uint64_t x224 = 7705565LLU;
	static uint64_t t40 = 54LLU;

	t40 = (((x221*x222)==x223)|x224);

	if (t40 != 7705565LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x225 = 2561U;
	int64_t x227 = INT64_MAX;
	int8_t x228 = -1;
	volatile int32_t t41 = -633958;

	t41 = (((x225*x226)==x227)|x228);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x229 = -4762967112LL;
	int16_t x231 = -2188;
	int32_t x232 = 870;
	int32_t t42 = 7285434;

	t42 = (((x229*x230)==x231)|x232);

	if (t42 != 870) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x233 = INT8_MIN;
	volatile int32_t x234 = -1;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MIN;
	static volatile int64_t t43 = INT64_MIN;

	t43 = (((x233*x234)==x235)|x236);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x237 = 33770;
	static volatile uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MAX;
	static uint64_t x240 = UINT64_MAX;

	t44 = (((x237*x238)==x239)|x240);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x241 = 11U;
	uint32_t x242 = 7361U;

	t45 = (((x241*x242)==x243)|x244);

	if (t45 != 365U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x249 = UINT32_MAX;
	int32_t x250 = -1;
	uint64_t x251 = UINT64_MAX;
	int32_t t46 = 14593;

	t46 = (((x249*x250)==x251)|x252);

	if (t46 != -27) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = INT8_MIN;
	uint64_t x254 = UINT64_MAX;
	static int16_t x255 = -14050;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t47 = -49070372;

	t47 = (((x253*x254)==x255)|x256);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = 1437136998500LL;
	volatile int16_t x262 = INT16_MIN;
	volatile int32_t x263 = 1738200;
	int64_t x264 = INT64_MIN;
	int64_t t48 = INT64_MIN;

	t48 = (((x261*x262)==x263)|x264);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x269 = 12128812LL;
	volatile int8_t x270 = INT8_MAX;
	static volatile int32_t x271 = INT32_MAX;
	volatile uint8_t x272 = 0U;

	t49 = (((x269*x270)==x271)|x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = -1;
	uint16_t x275 = 3U;
	volatile int32_t t50 = -10;

	t50 = (((x273*x274)==x275)|x276);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x277 = -11439;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = 412;

	t51 = (((x277*x278)==x279)|x280);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x283 = 1180202137U;
	int64_t x284 = INT64_MAX;
	int64_t t52 = INT64_MAX;

	t52 = (((x281*x282)==x283)|x284);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x286 = 7014U;
	static int32_t x287 = INT32_MIN;
	uint16_t x288 = 6U;
	int32_t t53 = 27;

	t53 = (((x285*x286)==x287)|x288);

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = 33;
	int16_t x291 = -1;
	uint64_t x292 = 1688359278LLU;

	t54 = (((x289*x290)==x291)|x292);

	if (t54 != 1688359278LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x294 = UINT64_MAX;
	static int16_t x295 = INT16_MIN;
	volatile uint8_t x296 = 3U;
	static volatile int32_t t55 = 1872006;

	t55 = (((x293*x294)==x295)|x296);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x297 = UINT16_MAX;
	volatile int64_t x298 = 1191LL;
	volatile int8_t x300 = INT8_MIN;

	t56 = (((x297*x298)==x299)|x300);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x301 = -2011261;
	int8_t x302 = INT8_MIN;
	uint8_t x303 = 84U;
	uint64_t x304 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = (((x301*x302)==x303)|x304);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x305 = 121022235U;
	int64_t x306 = -1184959LL;
	uint8_t x307 = 48U;
	int32_t x308 = INT32_MAX;

	t58 = (((x305*x306)==x307)|x308);

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x309 = 75775;
	static int8_t x310 = INT8_MIN;
	uint16_t x311 = UINT16_MAX;
	static int32_t x312 = -1;
	volatile int32_t t59 = -3571333;

	t59 = (((x309*x310)==x311)|x312);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x314 = 38090161806LLU;
	int32_t x315 = -6;
	uint8_t x316 = 55U;

	t60 = (((x313*x314)==x315)|x316);

	if (t60 != 55) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x317 = UINT16_MAX;
	volatile uint64_t x318 = 1929832797314LLU;
	uint8_t x319 = 1U;
	volatile int32_t t61 = 3;

	t61 = (((x317*x318)==x319)|x320);

	if (t61 != -328) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = -1LL;
	int32_t x323 = -3839763;
	int32_t x324 = INT32_MAX;
	int32_t t62 = INT32_MAX;

	t62 = (((x321*x322)==x323)|x324);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x333 = 428585928132LLU;
	int32_t x336 = INT32_MAX;
	int32_t t63 = INT32_MAX;

	t63 = (((x333*x334)==x335)|x336);

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = -1LL;
	static uint32_t x338 = 43U;
	int8_t x339 = -1;
	volatile uint64_t x340 = 2LLU;
	uint64_t t64 = 898602158LLU;

	t64 = (((x337*x338)==x339)|x340);

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x341 = INT8_MAX;
	static int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	int16_t x344 = -74;
	static int32_t t65 = 13;

	t65 = (((x341*x342)==x343)|x344);

	if (t65 != -74) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = UINT16_MAX;
	int32_t t66 = -57;

	t66 = (((x349*x350)==x351)|x352);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x353 = INT16_MIN;
	static int16_t x355 = -266;
	int64_t x356 = 942LL;
	int64_t t67 = -247794497145LL;

	t67 = (((x353*x354)==x355)|x356);

	if (t67 != 942LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = -1;
	volatile int16_t x358 = INT16_MAX;
	volatile int32_t x359 = INT32_MIN;
	int8_t x360 = -1;
	static volatile int32_t t68 = 2176;

	t68 = (((x357*x358)==x359)|x360);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x361 = -1;
	int8_t x362 = -1;
	volatile uint32_t x363 = UINT32_MAX;
	uint64_t x364 = 209359879324LLU;
	uint64_t t69 = 543600896197603LLU;

	t69 = (((x361*x362)==x363)|x364);

	if (t69 != 209359879324LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x369 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	volatile int32_t t70 = -13;

	t70 = (((x369*x370)==x371)|x372);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x378 = UINT16_MAX;
	int64_t x379 = -1LL;
	volatile int8_t x380 = INT8_MIN;

	t71 = (((x377*x378)==x379)|x380);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	static volatile int32_t x384 = INT32_MIN;
	static volatile int32_t t72 = INT32_MIN;

	t72 = (((x381*x382)==x383)|x384);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x385 = -1LL;
	uint8_t x386 = UINT8_MAX;
	volatile int8_t x388 = -1;

	t73 = (((x385*x386)==x387)|x388);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x389 = -1;
	int8_t x390 = INT8_MAX;
	static volatile int32_t x391 = -97219;
	int64_t x392 = -546489102562486LL;
	static int64_t t74 = -99LL;

	t74 = (((x389*x390)==x391)|x392);

	if (t74 != -546489102562486LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x393 = INT32_MAX;
	volatile uint32_t x394 = 2095622U;
	int8_t x395 = INT8_MIN;
	static volatile int64_t t75 = INT64_MAX;

	t75 = (((x393*x394)==x395)|x396);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x401 = -6717337;
	uint64_t x402 = 1126578883831LLU;
	static volatile int8_t x403 = -1;
	uint16_t x404 = UINT16_MAX;

	t76 = (((x401*x402)==x403)|x404);

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x405 = 1U;
	uint16_t x407 = UINT16_MAX;

	t77 = (((x405*x406)==x407)|x408);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x409 = 2U;
	int64_t x412 = INT64_MAX;
	int64_t t78 = INT64_MAX;

	t78 = (((x409*x410)==x411)|x412);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x413 = UINT8_MAX;
	uint64_t x414 = UINT64_MAX;
	int16_t x416 = INT16_MAX;
	int32_t t79 = -39128883;

	t79 = (((x413*x414)==x415)|x416);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x417 = -10;
	static volatile int16_t x418 = INT16_MAX;
	static int64_t x419 = INT64_MAX;
	static int32_t x420 = INT32_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = (((x417*x418)==x419)|x420);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x422 = INT8_MAX;
	uint32_t x423 = 12U;
	int64_t x424 = INT64_MIN;
	volatile int64_t t81 = INT64_MIN;

	t81 = (((x421*x422)==x423)|x424);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x428 = UINT8_MAX;
	static volatile int32_t t82 = -92;

	t82 = (((x425*x426)==x427)|x428);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x429 = 84U;
	uint8_t x430 = UINT8_MAX;
	int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MIN;
	volatile int32_t t83 = INT32_MIN;

	t83 = (((x429*x430)==x431)|x432);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x434 = 1104378U;
	volatile int32_t x435 = INT32_MIN;
	int32_t t84 = INT32_MIN;

	t84 = (((x433*x434)==x435)|x436);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x437 = 147268214561087LLU;
	int8_t x438 = INT8_MIN;
	int64_t x439 = INT64_MIN;
	volatile int64_t x440 = -4917653LL;
	volatile int64_t t85 = 2916602769988488018LL;

	t85 = (((x437*x438)==x439)|x440);

	if (t85 != -4917653LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x442 = 122U;
	uint64_t x444 = 354371948LLU;
	uint64_t t86 = 78832521892339600LLU;

	t86 = (((x441*x442)==x443)|x444);

	if (t86 != 354371948LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x445 = -46;
	int32_t x446 = -1;
	int16_t x447 = INT16_MIN;
	static uint16_t x448 = 7469U;
	volatile int32_t t87 = 299722;

	t87 = (((x445*x446)==x447)|x448);

	if (t87 != 7469) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x453 = -12;
	int8_t x454 = -57;
	static int64_t x455 = -1LL;
	int64_t x456 = -448676546585LL;
	volatile int64_t t88 = 1539LL;

	t88 = (((x453*x454)==x455)|x456);

	if (t88 != -448676546585LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x457 = 21LL;
	volatile int8_t x459 = -1;
	volatile uint8_t x460 = 9U;
	volatile int32_t t89 = -231;

	t89 = (((x457*x458)==x459)|x460);

	if (t89 != 9) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x461 = 376633547U;
	int32_t x462 = INT32_MAX;
	volatile int16_t x464 = -1;
	static volatile int32_t t90 = -344651;

	t90 = (((x461*x462)==x463)|x464);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x465 = -1;
	volatile uint8_t x466 = 3U;
	int8_t x467 = INT8_MIN;
	uint8_t x468 = 16U;
	int32_t t91 = 139;

	t91 = (((x465*x466)==x467)|x468);

	if (t91 != 16) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x469 = 21U;
	volatile uint32_t x470 = 1U;
	static int64_t x471 = -1LL;
	static volatile int8_t x472 = -1;
	volatile int32_t t92 = -14;

	t92 = (((x469*x470)==x471)|x472);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x477 = 96U;
	uint8_t x478 = UINT8_MAX;
	static uint32_t x479 = 1191U;
	uint32_t x480 = 40516465U;
	uint32_t t93 = 2039015U;

	t93 = (((x477*x478)==x479)|x480);

	if (t93 != 40516465U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x481 = INT16_MIN;
	static uint16_t x483 = 8989U;
	static uint64_t x484 = 63114245665445425LLU;

	t94 = (((x481*x482)==x483)|x484);

	if (t94 != 63114245665445425LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x485 = 5882318477061896LLU;
	static uint16_t x486 = UINT16_MAX;
	uint16_t x487 = 2U;
	volatile uint64_t t95 = 622965186258277362LLU;

	t95 = (((x485*x486)==x487)|x488);

	if (t95 != 259LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x490 = 3U;
	int8_t x492 = 26;
	int32_t t96 = 2600;

	t96 = (((x489*x490)==x491)|x492);

	if (t96 != 26) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x493 = 7707057;
	volatile int8_t x494 = INT8_MIN;
	volatile uint8_t x495 = UINT8_MAX;
	int8_t x496 = INT8_MAX;
	static volatile int32_t t97 = 59987;

	t97 = (((x493*x494)==x495)|x496);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x497 = INT8_MIN;
	uint64_t x499 = 2725LLU;
	int64_t x500 = INT64_MAX;
	volatile int64_t t98 = INT64_MAX;

	t98 = (((x497*x498)==x499)|x500);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x505 = UINT8_MAX;
	int8_t x507 = INT8_MIN;
	int16_t x508 = -3394;
	int32_t t99 = -28761;

	t99 = (((x505*x506)==x507)|x508);

	if (t99 != -3394) { NG(); } else { ; }
	
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

