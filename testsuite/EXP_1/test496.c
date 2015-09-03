#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = 1466326382LLU;
int8_t x14 = -1;
int64_t x23 = INT64_MIN;
volatile uint64_t t3 = 336330528922194LLU;
int64_t x27 = INT64_MIN;
static int64_t t4 = -15644LL;
int32_t x42 = -1;
static volatile int64_t t5 = 2246040870LL;
int8_t x47 = -7;
int8_t x60 = -1;
static volatile uint32_t x62 = UINT32_MAX;
static volatile int8_t x76 = 21;
int32_t t11 = -3;
int8_t x85 = INT8_MAX;
volatile int8_t x86 = -1;
int8_t x91 = -1;
static uint16_t x94 = 16652U;
static int16_t x97 = INT16_MAX;
int8_t x98 = INT8_MIN;
uint64_t x113 = UINT64_MAX;
int64_t x116 = -1LL;
int8_t x142 = -1;
int16_t x149 = INT16_MAX;
int8_t x150 = -2;
static int8_t x157 = INT8_MAX;
static uint16_t x168 = UINT16_MAX;
uint64_t t28 = 566LLU;
volatile uint16_t x182 = 163U;
static uint32_t t30 = 997641069U;
static int16_t x185 = 3912;
static int8_t x190 = INT8_MIN;
int16_t x210 = 12;
int32_t x211 = INT32_MIN;
volatile uint32_t t38 = 4631095U;
int8_t x230 = 13;
static int16_t x239 = INT16_MAX;
int8_t x259 = -1;
uint64_t x268 = UINT64_MAX;
volatile int64_t t46 = 1535184252LL;
volatile int64_t t47 = -587666214627067LL;
volatile int64_t t48 = 74989101LL;
int8_t x289 = -1;
volatile int32_t x291 = INT32_MAX;
volatile int32_t x310 = INT32_MIN;
int16_t x320 = -58;
uint64_t t55 = 1440LLU;
uint16_t x323 = UINT16_MAX;
static int16_t x359 = -2212;
volatile uint16_t x362 = 6789U;
uint32_t x363 = 15U;
int32_t x364 = -954;
volatile uint64_t t61 = 51390511LLU;
uint64_t x374 = 28925LLU;
volatile uint64_t t63 = 214472035571992LLU;
int32_t x378 = INT32_MIN;
volatile int32_t x379 = -19811;
static int8_t x386 = -3;
int32_t x393 = 59134596;
uint64_t t67 = 537479LLU;
static uint32_t x404 = UINT32_MAX;
static volatile int64_t x412 = -1LL;
int32_t x419 = INT32_MIN;
volatile uint16_t x441 = 9U;
int8_t x455 = -8;
int8_t x462 = INT8_MIN;
static int64_t t78 = -10309196169243690LL;
int32_t x470 = INT32_MIN;
int32_t x479 = 468654476;
int16_t x486 = INT16_MIN;
uint64_t x488 = 344396LLU;
int16_t x489 = INT16_MAX;
uint32_t x492 = 3U;
volatile int64_t x495 = -1LL;
int32_t x497 = INT32_MAX;
static uint8_t x501 = UINT8_MAX;
volatile int16_t x502 = -1;
int32_t x504 = INT32_MIN;
int8_t x505 = INT8_MAX;
int8_t x507 = INT8_MIN;
static int16_t x533 = -128;
volatile int16_t x540 = -1;
static int16_t x546 = -144;
int64_t x547 = 0LL;
int8_t x550 = INT8_MIN;
int32_t x554 = -1;
int16_t x558 = INT16_MIN;
uint64_t x567 = UINT64_MAX;
int64_t t99 = -10LL;


void f0(void) {
	volatile uint32_t x10 = 4057975U;
	volatile int32_t x11 = INT32_MIN;
	volatile uint8_t x12 = 18U;
	volatile uint64_t t0 = 1402080344915LLU;

	t0 = (((x9*x10)^x11)-x12);

	if (t0 != 18440793758834321424LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MAX;
	volatile int32_t x15 = 261117750;
	int8_t x16 = INT8_MIN;
	int32_t t1 = -62;

	t1 = (((x13*x14)^x15)-x16);

	if (t1 != -261117641) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	static volatile int8_t x18 = INT8_MIN;
	uint8_t x19 = UINT8_MAX;
	volatile uint8_t x20 = 15U;
	volatile uint64_t t2 = 1LLU;

	t2 = (((x17*x18)^x19)-x20);

	if (t2 != 112LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MAX;
	uint64_t x24 = 67082537LLU;

	t3 = (((x21*x22)^x23)-x24);

	if (t3 != 9223372036787660504LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x25 = -3;
	int16_t x26 = INT16_MAX;
	uint16_t x28 = 9018U;

	t4 = (((x25*x26)^x27)-x28);

	if (t4 != 9223372036854668489LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = -2906313LL;
	int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;

	t5 = (((x41*x42)^x43)-x44);

	if (t5 != -2144544567LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = 12;
	int32_t x46 = -1;
	int8_t x48 = -2;
	int32_t t6 = -1685;

	t6 = (((x45*x46)^x47)-x48);

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x49 = 2U;
	int32_t x50 = 10396;
	static int16_t x51 = -1;
	uint8_t x52 = 6U;
	volatile int32_t t7 = -24026232;

	t7 = (((x49*x50)^x51)-x52);

	if (t7 != -20799) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x53 = -1;
	uint32_t x54 = UINT32_MAX;
	int16_t x55 = INT16_MAX;
	volatile int16_t x56 = INT16_MIN;
	uint32_t t8 = 894040417U;

	t8 = (((x53*x54)^x55)-x56);

	if (t8 != 65534U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = 1328;
	volatile uint16_t x58 = 55U;
	static int64_t x59 = -4302LL;
	int64_t t9 = 3286197176993LL;

	t9 = (((x57*x58)^x59)-x60);

	if (t9 != -69021LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x63 = 5749U;
	volatile int8_t x64 = INT8_MIN;
	uint32_t t10 = 1743U;

	t10 = (((x61*x62)^x63)-x64);

	if (t10 != 2147489525U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x73 = UINT16_MAX;
	uint8_t x74 = 20U;
	int8_t x75 = -23;

	t11 = (((x73*x74)^x75)-x76);

	if (t11 != -1310736) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = INT16_MIN;
	int8_t x82 = INT8_MIN;
	volatile uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MAX;
	static volatile int32_t t12 = 3097842;

	t12 = (((x81*x82)^x83)-x84);

	if (t12 != 4161792) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x87 = INT16_MAX;
	uint16_t x88 = UINT16_MAX;
	int32_t t13 = 7488187;

	t13 = (((x85*x86)^x87)-x88);

	if (t13 != -98177) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x89 = -188;
	uint32_t x90 = 7304221U;
	uint32_t x92 = UINT32_MAX;
	uint32_t t14 = 4U;

	t14 = (((x89*x90)^x91)-x92);

	if (t14 != 1373193548U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = INT8_MIN;
	int8_t x95 = INT8_MIN;
	static uint16_t x96 = 2U;
	int32_t t15 = 2;

	t15 = (((x93*x94)^x95)-x96);

	if (t15 != 2131326) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x99 = 0;
	int64_t x100 = -1LL;
	int64_t t16 = -984851638213463168LL;

	t16 = (((x97*x98)^x99)-x100);

	if (t16 != -4194175LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = INT8_MAX;
	static int16_t x102 = -406;
	volatile int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;
	static int64_t t17 = -1827826458941593757LL;

	t17 = (((x101*x102)^x103)-x104);

	if (t17 != 9223372036854691479LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = 19;
	static uint16_t x110 = 109U;
	volatile int64_t x111 = 73LL;
	uint16_t x112 = UINT16_MAX;
	volatile int64_t t18 = 0LL;

	t18 = (((x109*x110)^x111)-x112);

	if (t18 != -63393LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x114 = -1;
	static volatile uint8_t x115 = 6U;
	volatile uint64_t t19 = 320892702827129372LLU;

	t19 = (((x113*x114)^x115)-x116);

	if (t19 != 8LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x117 = 3U;
	static int32_t x118 = INT32_MAX;
	static volatile int32_t x119 = -1561;
	uint64_t x120 = 14668628938354153LLU;
	uint64_t t20 = 21LLU;

	t20 = (((x117*x118)^x119)-x120);

	if (t20 != 18432075446918682673LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = 958597LL;
	uint64_t x130 = 83073937994LLU;
	static uint64_t x131 = 5785LLU;
	static uint64_t x132 = UINT64_MAX;
	volatile uint64_t t21 = 11LLU;

	t21 = (((x129*x130)^x131)-x132);

	if (t21 != 79634427739240172LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x133 = UINT32_MAX;
	uint32_t x134 = UINT32_MAX;
	uint32_t x135 = 28990U;
	int64_t x136 = INT64_MAX;
	int64_t t22 = -696597502340065LL;

	t22 = (((x133*x134)^x135)-x136);

	if (t22 != -9223372036854746816LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x141 = -1;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -4442927LL;
	volatile int64_t t23 = -251LL;

	t23 = (((x141*x142)^x143)-x144);

	if (t23 != 4442800LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x145 = UINT16_MAX;
	int64_t x146 = -1LL;
	volatile uint64_t x147 = 408LLU;
	static int8_t x148 = -27;
	uint64_t t24 = 93825722714LLU;

	t24 = (((x145*x146)^x147)-x148);

	if (t24 != 18446744073709486516LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x151 = -7;
	uint32_t x152 = 5998U;
	volatile uint32_t t25 = 0U;

	t25 = (((x149*x150)^x151)-x152);

	if (t25 != 59533U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x153 = -1;
	static uint64_t x154 = UINT64_MAX;
	volatile int16_t x155 = 3531;
	volatile uint16_t x156 = 6U;
	volatile uint64_t t26 = 11001611388246LLU;

	t26 = (((x153*x154)^x155)-x156);

	if (t26 != 3524LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	int32_t x160 = -3954151;
	static int32_t t27 = 3548;

	t27 = (((x157*x158)^x159)-x160);

	if (t27 != 3986792) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x165 = -1;
	static volatile int8_t x166 = -1;
	volatile uint64_t x167 = 164LLU;

	t28 = (((x165*x166)^x167)-x168);

	if (t28 != 18446744073709486246LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x173 = 6LLU;
	int32_t x174 = -234610272;
	static int64_t x175 = INT64_MIN;
	uint32_t x176 = 736328U;
	volatile uint64_t t29 = 30855539473LLU;

	t29 = (((x173*x174)^x175)-x176);

	if (t29 != 9223372035446377848LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = 1;
	uint32_t x183 = UINT32_MAX;
	uint8_t x184 = 5U;

	t30 = (((x181*x182)^x183)-x184);

	if (t30 != 4294967127U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x186 = 4581532140289011LLU;
	uint32_t x187 = 5696U;
	int64_t x188 = INT64_MIN;
	volatile uint64_t t31 = 83LLU;

	t31 = (((x185*x186)^x187)-x188);

	if (t31 != 8699581695955832600LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x189 = UINT64_MAX;
	int32_t x191 = -1;
	int16_t x192 = 5223;
	static volatile uint64_t t32 = 419686748253422546LLU;

	t32 = (((x189*x190)^x191)-x192);

	if (t32 != 18446744073709546264LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	int8_t x200 = -1;
	int64_t t33 = -9LL;

	t33 = (((x197*x198)^x199)-x200);

	if (t33 != -1073741824LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x205 = -3;
	int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	volatile uint8_t x208 = UINT8_MAX;
	volatile int32_t t34 = -71371521;

	t34 = (((x205*x206)^x207)-x208);

	if (t34 != 98048) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x209 = 586U;
	uint16_t x212 = UINT16_MAX;
	volatile uint32_t t35 = 1725750U;

	t35 = (((x209*x210)^x211)-x212);

	if (t35 != 2147425145U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x213 = UINT16_MAX;
	int8_t x214 = INT8_MIN;
	int8_t x215 = 0;
	static int64_t x216 = -1LL;
	int64_t t36 = -191721042813LL;

	t36 = (((x213*x214)^x215)-x216);

	if (t36 != -8388479LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x217 = INT16_MIN;
	int16_t x218 = 0;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = UINT16_MAX;
	static volatile int32_t t37 = 34;

	t37 = (((x217*x218)^x219)-x220);

	if (t37 != -98303) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x221 = UINT8_MAX;
	uint32_t x222 = 1928306357U;
	static uint32_t x223 = UINT32_MAX;
	int8_t x224 = -1;

	t38 = (((x221*x222)^x223)-x224);

	if (t38 != 2203118005U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x225 = 3592LLU;
	volatile int8_t x226 = 0;
	static int64_t x227 = -1LL;
	uint8_t x228 = 15U;
	uint64_t t39 = 3252LLU;

	t39 = (((x225*x226)^x227)-x228);

	if (t39 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x229 = 10278U;
	volatile int64_t x231 = 364LL;
	static uint8_t x232 = 81U;
	int64_t t40 = -43968037719929LL;

	t40 = (((x229*x230)^x231)-x232);

	if (t40 != 133169LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x237 = -1;
	int32_t x238 = -1;
	int64_t x240 = 67263647840220553LL;
	static int64_t t41 = 49560684747LL;

	t41 = (((x237*x238)^x239)-x240);

	if (t41 != -67263647840187787LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x245 = 13U;
	volatile int64_t x246 = -20726LL;
	static volatile uint16_t x247 = 0U;
	int16_t x248 = -263;
	static volatile int64_t t42 = -11022LL;

	t42 = (((x245*x246)^x247)-x248);

	if (t42 != -269175LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MAX;
	int8_t x260 = 7;
	static int32_t t43 = 0;

	t43 = (((x257*x258)^x259)-x260);

	if (t43 != -4161417) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = 2;
	static uint16_t x262 = 303U;
	uint64_t x263 = 111301LLU;
	uint16_t x264 = UINT16_MAX;
	static volatile uint64_t t44 = 1845206367109702LLU;

	t44 = (((x261*x262)^x263)-x264);

	if (t44 != 45212LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x265 = INT16_MIN;
	int8_t x266 = 0;
	static int8_t x267 = INT8_MIN;
	static volatile uint64_t t45 = 30169018LLU;

	t45 = (((x265*x266)^x267)-x268);

	if (t45 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	int32_t x271 = -89515;
	int64_t x272 = -1046582989913LL;

	t46 = (((x269*x270)^x271)-x272);

	if (t46 != 1048730384046LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x277 = -1;
	int64_t x278 = -188637LL;
	uint8_t x279 = 0U;
	int32_t x280 = INT32_MIN;

	t47 = (((x277*x278)^x279)-x280);

	if (t47 != 2147672285LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x281 = -36;
	uint32_t x282 = 8064U;
	int8_t x283 = INT8_MAX;
	static int64_t x284 = 0LL;

	t48 = (((x281*x282)^x283)-x284);

	if (t48 != 4294677119LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x290 = INT8_MAX;
	uint64_t x292 = 2012815153889127348LLU;
	uint64_t t49 = 69LLU;

	t49 = (((x289*x290)^x291)-x292);

	if (t49 != 16433928917672940746LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x293 = 0U;
	int32_t x294 = INT32_MAX;
	uint16_t x295 = 2U;
	uint64_t x296 = UINT64_MAX;
	static volatile uint64_t t50 = 4499055160141439323LLU;

	t50 = (((x293*x294)^x295)-x296);

	if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x297 = INT16_MAX;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = INT32_MIN;
	volatile int64_t x300 = -1LL;
	int64_t t51 = -4488698316LL;

	t51 = (((x297*x298)^x299)-x300);

	if (t51 != -98302LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x301 = 15;
	int16_t x302 = INT16_MAX;
	uint64_t x303 = 97733748692024LLU;
	static int32_t x304 = INT32_MIN;
	static uint64_t t52 = 959544720378864382LLU;

	t52 = (((x301*x302)^x303)-x304);

	if (t52 != 97735895739337LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x305 = 215U;
	static uint8_t x306 = 121U;
	int16_t x307 = 2033;
	int64_t x308 = 11012573LL;
	int64_t t53 = 20493168LL;

	t53 = (((x305*x306)^x307)-x308);

	if (t53 != -10987375LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x309 = 1376161233U;
	int64_t x311 = -2754586185951203LL;
	volatile int8_t x312 = INT8_MAX;
	volatile int64_t t54 = -9511553LL;

	t54 = (((x309*x310)^x311)-x312);

	if (t54 != -2754588333434978LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x317 = INT16_MIN;
	volatile uint64_t x318 = 31069724137LLU;
	int32_t x319 = INT32_MAX;

	t55 = (((x317*x318)^x319)-x320);

	if (t55 != 18445725980417097785LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x321 = 25U;
	static uint16_t x322 = UINT16_MAX;
	int8_t x324 = -6;
	volatile uint32_t t56 = 13428641U;

	t56 = (((x321*x322)^x323)-x324);

	if (t56 != 1572894U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x325 = -1LL;
	int16_t x326 = INT16_MIN;
	static uint16_t x327 = UINT16_MAX;
	volatile int16_t x328 = -1;
	volatile int64_t t57 = 364041744LL;

	t57 = (((x325*x326)^x327)-x328);

	if (t57 != 32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x337 = 34;
	static int16_t x338 = 4;
	int32_t x339 = 6897;
	int32_t x340 = -1;
	int32_t t58 = -660;

	t58 = (((x337*x338)^x339)-x340);

	if (t58 != 6778) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x353 = 13762971U;
	static uint16_t x354 = UINT16_MAX;
	int16_t x355 = INT16_MIN;
	uint64_t x356 = 5311550LLU;
	static uint64_t t59 = 5LLU;

	t59 = (((x353*x354)^x355)-x356);

	if (t59 != 4276515367LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x357 = 41;
	int16_t x358 = INT16_MIN;
	static int8_t x360 = -1;
	volatile int32_t t60 = 4;

	t60 = (((x357*x358)^x359)-x360);

	if (t60 != 1341277) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x361 = 569LLU;

	t61 = (((x361*x362)^x363)-x364);

	if (t61 != 3863884LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x369 = 1;
	int16_t x370 = 4;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = UINT64_MAX;
	uint64_t t62 = 3293860512LLU;

	t62 = (((x369*x370)^x371)-x372);

	if (t62 != 18446744073709518853LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x375 = 7U;
	volatile int16_t x376 = INT16_MIN;

	t63 = (((x373*x374)^x375)-x376);

	if (t63 != 18446744072761769991LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x377 = 14826LLU;
	static volatile int8_t x380 = INT8_MIN;
	volatile uint64_t t64 = 2LLU;

	t64 = (((x377*x378)^x379)-x380);

	if (t64 != 31838592545565LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x381 = UINT16_MAX;
	static int16_t x382 = INT16_MIN;
	uint8_t x383 = 1U;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t65 = 51362193156614LL;

	t65 = (((x381*x382)^x383)-x384);

	if (t65 != 9223372034707324929LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x385 = 94796630U;
	int8_t x387 = 1;
	static int16_t x388 = 713;
	volatile uint32_t t66 = 1U;

	t66 = (((x385*x386)^x387)-x388);

	if (t66 != 4010576694U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x394 = UINT64_MAX;
	static volatile int32_t x395 = INT32_MAX;
	int64_t x396 = INT64_MIN;

	t67 = (((x393*x394)^x395)-x396);

	if (t67 != 9223372034766426755LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x397 = 6682;
	volatile int64_t x398 = 4513450266LL;
	uint32_t x399 = UINT32_MAX;
	static volatile int8_t x400 = 21;
	volatile int64_t t68 = 63963085628LL;

	t68 = (((x397*x398)^x399)-x400);

	if (t68 != 30155351060294LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x401 = UINT8_MAX;
	volatile int16_t x402 = -1;
	volatile int16_t x403 = INT16_MIN;
	volatile uint32_t t69 = 10757U;

	t69 = (((x401*x402)^x403)-x404);

	if (t69 != 32514U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x409 = -1;
	int16_t x410 = 0;
	int32_t x411 = INT32_MIN;
	int64_t t70 = 305LL;

	t70 = (((x409*x410)^x411)-x412);

	if (t70 != -2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x417 = -7;
	static volatile int16_t x418 = -1;
	int32_t x420 = 2;
	static volatile int32_t t71 = 10;

	t71 = (((x417*x418)^x419)-x420);

	if (t71 != -2147483643) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x421 = 342518259;
	volatile int64_t x422 = -1LL;
	int32_t x423 = -7241467;
	uint64_t x424 = 2049651LLU;
	uint64_t t72 = 213379328748691LLU;

	t72 = (((x421*x422)^x423)-x424);

	if (t72 != 333762709LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x429 = -1;
	uint32_t x430 = UINT32_MAX;
	uint16_t x431 = UINT16_MAX;
	static uint32_t x432 = 1743376U;
	volatile uint32_t t73 = 165241848U;

	t73 = (((x429*x430)^x431)-x432);

	if (t73 != 4293289454U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x437 = UINT8_MAX;
	int64_t x438 = -3162909750LL;
	int32_t x439 = INT32_MIN;
	int16_t x440 = -1;
	int64_t t74 = -830289797LL;

	t74 = (((x437*x438)^x439)-x440);

	if (t74 != 806218233399LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x442 = UINT32_MAX;
	int32_t x443 = INT32_MIN;
	volatile uint16_t x444 = 183U;
	uint32_t t75 = 735U;

	t75 = (((x441*x442)^x443)-x444);

	if (t75 != 2147483456U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x453 = 2843746U;
	uint8_t x454 = 55U;
	static volatile int64_t x456 = -1LL;
	volatile int64_t t76 = -2274190013LL;

	t76 = (((x453*x454)^x455)-x456);

	if (t76 != 4138561271LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x461 = INT16_MAX;
	int8_t x463 = 10;
	int64_t x464 = INT64_MIN;
	static int64_t t77 = 16401661333LL;

	t77 = (((x461*x462)^x463)-x464);

	if (t77 != 9223372036850581642LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x465 = -2708552LL;
	volatile int32_t x466 = INT32_MAX;
	volatile uint16_t x467 = 6198U;
	uint8_t x468 = UINT8_MAX;

	t78 = (((x465*x466)^x467)-x468);

	if (t78 != -5816571127051393LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x469 = 1;
	uint16_t x471 = UINT16_MAX;
	volatile uint16_t x472 = 3399U;
	static int32_t t79 = -8579;

	t79 = (((x469*x470)^x471)-x472);

	if (t79 != -2147421512) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x473 = -110;
	volatile uint16_t x474 = UINT16_MAX;
	uint32_t x475 = 6140500U;
	static int8_t x476 = -1;
	uint32_t t80 = 91682U;

	t80 = (((x473*x474)^x475)-x476);

	if (t80 != 4291801659U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x477 = -1999915619971855LL;
	int8_t x478 = INT8_MIN;
	int16_t x480 = -13206;
	static int64_t t81 = 70551733832LL;

	t81 = (((x477*x478)^x479)-x480);

	if (t81 != 255989199492534690LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x485 = -25;
	uint16_t x487 = 2U;
	uint64_t t82 = 231LLU;

	t82 = (((x485*x486)^x487)-x488);

	if (t82 != 474806LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x490 = 16079U;
	volatile uint16_t x491 = 2U;
	volatile uint32_t t83 = 40653U;

	t83 = (((x489*x490)^x491)-x492);

	if (t83 != 526860592U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x493 = -21;
	volatile uint64_t x494 = 14510LLU;
	int16_t x496 = INT16_MAX;
	uint64_t t84 = 581053632556534094LLU;

	t84 = (((x493*x494)^x495)-x496);

	if (t84 != 271942LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x498 = 1426U;
	volatile uint64_t x499 = 87052LLU;
	int8_t x500 = -1;
	volatile uint64_t t85 = 350004737792360LLU;

	t85 = (((x497*x498)^x499)-x500);

	if (t85 != 4294880867LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x503 = 0U;
	volatile int32_t t86 = 13732635;

	t86 = (((x501*x502)^x503)-x504);

	if (t86 != 2147483393) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x506 = 116;
	volatile uint16_t x508 = 14506U;
	static volatile int32_t t87 = -1;

	t87 = (((x505*x506)^x507)-x508);

	if (t87 != -29342) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x513 = UINT64_MAX;
	static int16_t x514 = INT16_MAX;
	volatile uint8_t x515 = 23U;
	static uint8_t x516 = UINT8_MAX;
	volatile uint64_t t88 = 65481LLU;

	t88 = (((x513*x514)^x515)-x516);

	if (t88 != 18446744073709518615LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x521 = INT16_MAX;
	int32_t x522 = -1;
	volatile int32_t x523 = INT32_MIN;
	static uint16_t x524 = 24344U;
	int32_t t89 = -66501187;

	t89 = (((x521*x522)^x523)-x524);

	if (t89 != 2147426537) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x529 = INT32_MIN;
	int64_t x530 = 393558393LL;
	uint32_t x531 = 466017266U;
	static int64_t x532 = 1836640956578LL;
	int64_t t90 = 1386160369LL;

	t90 = (((x529*x530)^x531)-x532);

	if (t90 != -845162049675596976LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x534 = -1;
	int64_t x535 = INT64_MIN;
	uint64_t x536 = 2746827473048829315LLU;
	uint64_t t91 = 190603676LLU;

	t91 = (((x533*x534)^x535)-x536);

	if (t91 != 6476544563805946621LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x537 = UINT8_MAX;
	int8_t x538 = 2;
	static int64_t x539 = -1LL;
	static volatile int64_t t92 = -1938LL;

	t92 = (((x537*x538)^x539)-x540);

	if (t92 != -510LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x545 = UINT32_MAX;
	uint32_t x548 = 1337U;
	volatile int64_t t93 = 6LL;

	t93 = (((x545*x546)^x547)-x548);

	if (t93 != -1193LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x549 = 22155U;
	volatile uint16_t x551 = UINT16_MAX;
	uint32_t x552 = 242169U;
	uint32_t t94 = 85U;

	t94 = (((x549*x550)^x551)-x552);

	if (t94 != 4291859334U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x553 = -1LL;
	uint32_t x555 = 4U;
	int16_t x556 = -3;
	int64_t t95 = -15659685LL;

	t95 = (((x553*x554)^x555)-x556);

	if (t95 != 8LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x557 = -5801LL;
	uint8_t x559 = 1U;
	int64_t x560 = -1LL;
	int64_t t96 = 123928741301976878LL;

	t96 = (((x557*x558)^x559)-x560);

	if (t96 != 190087170LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x565 = -1;
	int8_t x566 = INT8_MAX;
	int32_t x568 = INT32_MIN;
	uint64_t t97 = 1LLU;

	t97 = (((x565*x566)^x567)-x568);

	if (t97 != 2147483774LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x569 = 12U;
	int16_t x570 = -234;
	uint16_t x571 = 318U;
	static int8_t x572 = INT8_MIN;
	int32_t t98 = 260614125;

	t98 = (((x569*x570)^x571)-x572);

	if (t98 != -2890) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x573 = 5U;
	int8_t x574 = -63;
	static int64_t x575 = -24LL;
	uint8_t x576 = 106U;

	t99 = (((x573*x574)^x575)-x576);

	if (t99 != 195LL) { NG(); } else { ; }
	
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

