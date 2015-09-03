#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x32 = INT16_MAX;
volatile int64_t t5 = 132748681LL;
static int16_t x38 = 83;
static volatile uint8_t x40 = 2U;
int8_t x46 = 0;
int32_t x51 = 5;
static volatile uint32_t t8 = 11U;
static int8_t x61 = INT8_MIN;
int32_t t10 = -836424;
volatile uint16_t x76 = 238U;
int16_t x94 = -1;
int16_t x118 = -1;
static volatile uint16_t x119 = 6U;
uint64_t x120 = 549311335294345718LLU;
int64_t x126 = -948340LL;
volatile int32_t t20 = 1038769;
uint8_t x133 = 2U;
static int8_t x143 = INT8_MIN;
static int8_t x156 = INT8_MAX;
int64_t x159 = INT64_MIN;
volatile uint32_t x160 = UINT32_MAX;
int32_t t28 = 1;
int64_t x175 = -47145384479254588LL;
volatile int32_t t31 = 283914052;
static uint64_t t33 = 2200115429427LLU;
static uint32_t x202 = UINT32_MAX;
int64_t x204 = 54076373320180LL;
volatile int64_t t34 = -128358720933LL;
static uint8_t x205 = UINT8_MAX;
volatile int16_t x207 = 2242;
volatile int32_t x214 = -1;
volatile int64_t x216 = -1LL;
volatile int8_t x234 = 1;
static volatile int32_t t40 = -952120;
int8_t x241 = -1;
int32_t x242 = -1;
static uint64_t x256 = 185374034LLU;
uint32_t x260 = 2432540U;
volatile uint64_t x265 = UINT64_MAX;
int64_t x266 = INT64_MIN;
int8_t x267 = -9;
int32_t t45 = -755854848;
static volatile uint16_t x273 = 9629U;
uint64_t x311 = 1927971322LLU;
static int16_t x317 = 9;
int64_t x323 = -8088549680801727LL;
volatile uint32_t x327 = 56096632U;
static int16_t x328 = INT16_MIN;
volatile uint64_t x330 = 916638770877308375LLU;
uint16_t x332 = 0U;
static uint8_t x341 = 3U;
uint8_t x344 = 89U;
volatile uint16_t x353 = 141U;
static int32_t t60 = -36;
static uint64_t x369 = 40LLU;
int64_t x370 = -1LL;
volatile int16_t x371 = -8;
int16_t x373 = -1;
int16_t x374 = 5453;
int8_t x378 = INT8_MAX;
int64_t x379 = -1LL;
uint32_t x381 = 585208U;
volatile uint64_t t65 = 223652664512LLU;
uint32_t x397 = 10571451U;
uint64_t t68 = 38771809666LLU;
volatile int32_t t69 = 8;
int32_t x408 = -1;
uint8_t x413 = 1U;
uint64_t x425 = UINT64_MAX;
static int16_t x433 = INT16_MAX;
int8_t x436 = INT8_MIN;
int32_t t76 = -33153531;
int8_t x437 = INT8_MIN;
static uint32_t x445 = 423U;
int32_t t78 = -518489;
uint8_t x453 = 1U;
uint32_t x456 = 75795U;
uint64_t x467 = 3061424LLU;
volatile int64_t t83 = 39917267406168036LL;
int8_t x478 = INT8_MIN;
static volatile int32_t t85 = -1070254;
static int32_t t86 = 182004172;
static volatile int32_t x519 = INT32_MAX;
uint8_t x520 = UINT8_MAX;
volatile int32_t t93 = 0;
static volatile uint64_t t94 = 4708943978121513LLU;
uint64_t x545 = 77774172568449LLU;
static int8_t x548 = -1;
int32_t x553 = -1;
uint16_t x559 = 31U;


void f0(void) {
	static uint32_t x1 = 52888U;
	uint16_t x2 = 31U;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = 1;

	t0 = (((x1*x2)<=x3)-x4);

	if (t0 != -32766) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MIN;
	static int8_t x7 = INT8_MAX;
	int16_t x8 = 0;
	int32_t t1 = 125987396;

	t1 = (((x5*x6)<=x7)-x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = 0;
	int16_t x22 = INT16_MIN;
	int8_t x23 = 3;
	static int8_t x24 = -1;
	int32_t t2 = 10688169;

	t2 = (((x21*x22)<=x23)-x24);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 80LLU;
	volatile int32_t x26 = -1768;
	static int64_t x27 = INT64_MIN;
	int32_t x28 = 972786;
	int32_t t3 = 161089;

	t3 = (((x25*x26)<=x27)-x28);

	if (t3 != -972786) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -347727080840906LL;
	int8_t x30 = -1;
	int32_t x31 = 0;
	volatile int32_t t4 = -3059337;

	t4 = (((x29*x30)<=x31)-x32);

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = -1;
	uint16_t x35 = 455U;
	int64_t x36 = INT64_MAX;

	t5 = (((x33*x34)<=x35)-x36);

	if (t5 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x37 = 69293U;
	uint32_t x39 = UINT32_MAX;
	volatile int32_t t6 = -4157;

	t6 = (((x37*x38)<=x39)-x40);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x45 = INT32_MIN;
	volatile int8_t x47 = INT8_MAX;
	uint8_t x48 = 7U;
	int32_t t7 = 47131587;

	t7 = (((x45*x46)<=x47)-x48);

	if (t7 != -6) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x49 = 168U;
	int64_t x50 = -1LL;
	uint32_t x52 = UINT32_MAX;

	t8 = (((x49*x50)<=x51)-x52);

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MAX;
	uint16_t x64 = 229U;
	int32_t t9 = -7110128;

	t9 = (((x61*x62)<=x63)-x64);

	if (t9 != -229) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = -1LL;
	int8_t x66 = INT8_MAX;
	uint8_t x67 = 6U;
	static volatile int32_t x68 = 166520;

	t10 = (((x65*x66)<=x67)-x68);

	if (t10 != -166519) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t11 = -713;

	t11 = (((x69*x70)<=x71)-x72);

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x73 = UINT32_MAX;
	int32_t x74 = INT32_MAX;
	static volatile uint64_t x75 = 11LLU;
	volatile int32_t t12 = -12462242;

	t12 = (((x73*x74)<=x75)-x76);

	if (t12 != -238) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x81 = 243195264U;
	static uint64_t x82 = 177630133LLU;
	uint8_t x83 = UINT8_MAX;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t13 = 1787261084U;

	t13 = (((x81*x82)<=x83)-x84);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = INT8_MIN;
	static int64_t x90 = -1085107599668416LL;
	int16_t x91 = -16086;
	static int16_t x92 = INT16_MIN;
	int32_t t14 = 2694256;

	t14 = (((x89*x90)<=x91)-x92);

	if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x93 = -1;
	int32_t x95 = INT32_MIN;
	static uint64_t x96 = 11471826782625738LLU;
	uint64_t t15 = 211LLU;

	t15 = (((x93*x94)<=x95)-x96);

	if (t15 != 18435272246926925878LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x97 = INT8_MAX;
	uint16_t x98 = UINT16_MAX;
	uint32_t x99 = 792307U;
	int64_t x100 = -1LL;
	static int64_t t16 = 2LL;

	t16 = (((x97*x98)<=x99)-x100);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = 202935LLU;
	int32_t x102 = INT32_MIN;
	int32_t x103 = -1;
	static int32_t x104 = INT32_MAX;
	volatile int32_t t17 = 412056290;

	t17 = (((x101*x102)<=x103)-x104);

	if (t17 != -2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x117 = UINT64_MAX;
	uint64_t t18 = 871258034802LLU;

	t18 = (((x117*x118)<=x119)-x120);

	if (t18 != 17897432738415205899LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x121 = 9034560LLU;
	static uint16_t x122 = 3074U;
	uint8_t x123 = 37U;
	int32_t x124 = 1;
	int32_t t19 = 38;

	t19 = (((x121*x122)<=x123)-x124);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x125 = -1;
	volatile int16_t x127 = -675;
	volatile uint8_t x128 = UINT8_MAX;

	t20 = (((x125*x126)<=x127)-x128);

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x129 = 151U;
	int32_t x130 = 4473654;
	uint16_t x131 = UINT16_MAX;
	static int32_t x132 = -1;
	int32_t t21 = -4245;

	t21 = (((x129*x130)<=x131)-x132);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x134 = 18U;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -14584059;
	volatile int32_t t22 = -16;

	t22 = (((x133*x134)<=x135)-x136);

	if (t22 != 14584059) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = -708;
	int16_t x144 = INT16_MIN;
	volatile int32_t t23 = 3468848;

	t23 = (((x141*x142)<=x143)-x144);

	if (t23 != 32769) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = INT8_MAX;
	int16_t x146 = -1;
	static int16_t x147 = INT16_MIN;
	uint16_t x148 = 47U;
	volatile int32_t t24 = -363264;

	t24 = (((x145*x146)<=x147)-x148);

	if (t24 != -47) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x149 = 86590U;
	static int16_t x150 = INT16_MAX;
	static uint32_t x151 = UINT32_MAX;
	int64_t x152 = 45105170025LL;
	volatile int64_t t25 = 1689LL;

	t25 = (((x149*x150)<=x151)-x152);

	if (t25 != -45105170024LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x153 = -96643LL;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = 1;
	volatile int32_t t26 = -132548;

	t26 = (((x153*x154)<=x155)-x156);

	if (t26 != -126) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x157 = 8688528LL;
	int16_t x158 = INT16_MIN;
	volatile uint32_t t27 = 2192674U;

	t27 = (((x157*x158)<=x159)-x160);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x169 = -1LL;
	volatile uint64_t x170 = 7976495457810697LLU;
	int8_t x171 = INT8_MAX;
	uint8_t x172 = UINT8_MAX;

	t28 = (((x169*x170)<=x171)-x172);

	if (t28 != -255) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x173 = UINT64_MAX;
	int16_t x174 = -1;
	uint16_t x176 = UINT16_MAX;
	int32_t t29 = -410875966;

	t29 = (((x173*x174)<=x175)-x176);

	if (t29 != -65534) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x177 = -1LL;
	uint16_t x178 = 0U;
	int64_t x179 = INT64_MIN;
	static int64_t x180 = -250062308456861056LL;
	static int64_t t30 = 8LL;

	t30 = (((x177*x178)<=x179)-x180);

	if (t30 != 250062308456861056LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = 603;
	int8_t x182 = INT8_MAX;
	uint8_t x183 = 15U;
	int8_t x184 = INT8_MIN;

	t31 = (((x181*x182)<=x183)-x184);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x185 = UINT64_MAX;
	uint16_t x186 = 0U;
	uint16_t x187 = UINT16_MAX;
	int32_t x188 = -1;
	volatile int32_t t32 = -2275801;

	t32 = (((x185*x186)<=x187)-x188);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x197 = 523154U;
	volatile int32_t x198 = 1214464;
	uint8_t x199 = UINT8_MAX;
	static uint64_t x200 = 6LLU;

	t33 = (((x197*x198)<=x199)-x200);

	if (t33 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x201 = 0U;
	volatile int32_t x203 = INT32_MAX;

	t34 = (((x201*x202)<=x203)-x204);

	if (t34 != -54076373320179LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x206 = -1;
	volatile int16_t x208 = -1;
	int32_t t35 = 202;

	t35 = (((x205*x206)<=x207)-x208);

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = -1;
	int32_t x210 = 21;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	int32_t t36 = 1323298;

	t36 = (((x209*x210)<=x211)-x212);

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x213 = 12290727178588252LL;
	volatile int16_t x215 = -36;
	static volatile int64_t t37 = -3039717740LL;

	t37 = (((x213*x214)<=x215)-x216);

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x217 = 962246U;
	uint16_t x218 = 1869U;
	uint16_t x219 = 14858U;
	uint32_t x220 = 51495888U;
	volatile uint32_t t38 = 487427683U;

	t38 = (((x217*x218)<=x219)-x220);

	if (t38 != 4243471408U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x225 = 20747LLU;
	int32_t x226 = INT32_MAX;
	int64_t x227 = -1LL;
	int16_t x228 = INT16_MIN;
	volatile int32_t t39 = -968210913;

	t39 = (((x225*x226)<=x227)-x228);

	if (t39 != 32769) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x233 = INT64_MIN;
	uint16_t x235 = 24U;
	int8_t x236 = INT8_MIN;

	t40 = (((x233*x234)<=x235)-x236);

	if (t40 != 129) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x243 = INT64_MIN;
	static int8_t x244 = INT8_MIN;
	static volatile int32_t t41 = 102;

	t41 = (((x241*x242)<=x243)-x244);

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x249 = 13U;
	static volatile uint16_t x250 = UINT16_MAX;
	uint8_t x251 = 1U;
	static int16_t x252 = -1;
	volatile int32_t t42 = -1;

	t42 = (((x249*x250)<=x251)-x252);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x253 = -28728LL;
	uint16_t x254 = 1U;
	uint16_t x255 = 8631U;
	static uint64_t t43 = 2255LLU;

	t43 = (((x253*x254)<=x255)-x256);

	if (t43 != 18446744073524177583LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x257 = UINT8_MAX;
	static int16_t x258 = -1;
	static int64_t x259 = INT64_MIN;
	volatile uint32_t t44 = 1354679U;

	t44 = (((x257*x258)<=x259)-x260);

	if (t44 != 4292534756U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x268 = INT16_MIN;

	t45 = (((x265*x266)<=x267)-x268);

	if (t45 != 32769) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x274 = -1;
	static volatile int8_t x275 = INT8_MIN;
	volatile int32_t x276 = -1;
	volatile int32_t t46 = 52;

	t46 = (((x273*x274)<=x275)-x276);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x277 = 161598319U;
	uint32_t x278 = 509561715U;
	int64_t x279 = -1LL;
	static uint32_t x280 = 909U;
	static volatile uint32_t t47 = 88547U;

	t47 = (((x277*x278)<=x279)-x280);

	if (t47 != 4294966387U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x281 = 1;
	uint8_t x282 = 37U;
	int16_t x283 = INT16_MIN;
	int64_t x284 = -1LL;
	int64_t t48 = -30LL;

	t48 = (((x281*x282)<=x283)-x284);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x289 = -8011724LL;
	volatile int32_t x290 = -46140;
	volatile uint64_t x291 = 1978227LLU;
	int64_t x292 = INT64_MAX;
	int64_t t49 = 764583366LL;

	t49 = (((x289*x290)<=x291)-x292);

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x309 = 10156;
	uint16_t x310 = 205U;
	static uint64_t x312 = 14102LLU;
	volatile uint64_t t50 = 4718073619489LLU;

	t50 = (((x309*x310)<=x311)-x312);

	if (t50 != 18446744073709537515LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x313 = -21994237531894LL;
	int8_t x314 = -1;
	static uint16_t x315 = UINT16_MAX;
	int64_t x316 = -1LL;
	int64_t t51 = 31602LL;

	t51 = (((x313*x314)<=x315)-x316);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = -1;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t52 = -855255997;

	t52 = (((x317*x318)<=x319)-x320);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x321 = INT32_MAX;
	int16_t x322 = -1;
	int64_t x324 = -1LL;
	volatile int64_t t53 = -571510LL;

	t53 = (((x321*x322)<=x323)-x324);

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x325 = 1U;
	uint16_t x326 = UINT16_MAX;
	static int32_t t54 = 1777;

	t54 = (((x325*x326)<=x327)-x328);

	if (t54 != 32769) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x329 = INT8_MAX;
	int64_t x331 = INT64_MIN;
	volatile int32_t t55 = 11484;

	t55 = (((x329*x330)<=x331)-x332);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x337 = INT16_MIN;
	int64_t x338 = -1LL;
	int8_t x339 = -1;
	int32_t x340 = INT32_MAX;
	volatile int32_t t56 = -253;

	t56 = (((x337*x338)<=x339)-x340);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x342 = 2U;
	int16_t x343 = INT16_MAX;
	int32_t t57 = 8924;

	t57 = (((x341*x342)<=x343)-x344);

	if (t57 != -88) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = -569;
	int16_t x347 = -1944;
	uint16_t x348 = 82U;
	int32_t t58 = -3556750;

	t58 = (((x345*x346)<=x347)-x348);

	if (t58 != -82) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x349 = 2;
	static uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 56911U;
	int8_t x352 = -1;
	volatile int32_t t59 = 6638;

	t59 = (((x349*x350)<=x351)-x352);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MAX;
	volatile int8_t x356 = -1;

	t60 = (((x353*x354)<=x355)-x356);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x357 = -21;
	uint16_t x358 = 2507U;
	volatile uint16_t x359 = UINT16_MAX;
	volatile uint64_t x360 = 51659457286467816LLU;
	volatile uint64_t t61 = 10540951LLU;

	t61 = (((x357*x358)<=x359)-x360);

	if (t61 != 18395084616423083801LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x372 = 1083957410498203LLU;
	volatile uint64_t t62 = 331298937405LLU;

	t62 = (((x369*x370)<=x371)-x372);

	if (t62 != 18445660116299053414LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x375 = INT32_MAX;
	int8_t x376 = INT8_MIN;
	int32_t t63 = -1329936;

	t63 = (((x373*x374)<=x375)-x376);

	if (t63 != 129) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x377 = -1;
	static int64_t x380 = 2298553028LL;
	static int64_t t64 = 89116390872101974LL;

	t64 = (((x377*x378)<=x379)-x380);

	if (t64 != -2298553027LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	volatile uint64_t x384 = 7194946299072039688LLU;

	t65 = (((x381*x382)<=x383)-x384);

	if (t65 != 11251797774637511928LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = INT16_MAX;
	int8_t x391 = 7;
	uint16_t x392 = 249U;
	static volatile int32_t t66 = 0;

	t66 = (((x389*x390)<=x391)-x392);

	if (t66 != -249) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x393 = 6U;
	volatile int64_t x394 = -1LL;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = 75142930LLU;
	uint64_t t67 = 1062131335863LLU;

	t67 = (((x393*x394)<=x395)-x396);

	if (t67 != 18446744073634408686LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x398 = UINT16_MAX;
	uint8_t x399 = 17U;
	uint64_t x400 = 2878156712616376072LLU;

	t68 = (((x397*x398)<=x399)-x400);

	if (t68 != 15568587361093175544LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x401 = -5041;
	static uint16_t x402 = UINT16_MAX;
	static volatile int16_t x403 = 3;
	volatile int32_t x404 = -1;

	t69 = (((x401*x402)<=x403)-x404);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x405 = UINT16_MAX;
	uint32_t x406 = 689U;
	volatile int16_t x407 = INT16_MIN;
	int32_t t70 = -25;

	t70 = (((x405*x406)<=x407)-x408);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x409 = INT16_MIN;
	volatile uint64_t x410 = 1729218886582LLU;
	int32_t x411 = INT32_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t71 = -888;

	t71 = (((x409*x410)<=x411)-x412);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x414 = 0U;
	int32_t x415 = INT32_MIN;
	int8_t x416 = 0;
	volatile int32_t t72 = 3536386;

	t72 = (((x413*x414)<=x415)-x416);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x417 = 1U;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = 98U;
	int16_t x420 = -3047;
	int32_t t73 = 3026304;

	t73 = (((x417*x418)<=x419)-x420);

	if (t73 != 3047) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x421 = 1;
	uint32_t x422 = UINT32_MAX;
	int16_t x423 = INT16_MAX;
	volatile int16_t x424 = INT16_MIN;
	volatile int32_t t74 = 29151465;

	t74 = (((x421*x422)<=x423)-x424);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x426 = INT16_MIN;
	volatile int8_t x427 = 0;
	volatile int32_t x428 = -1;
	volatile int32_t t75 = -1098;

	t75 = (((x425*x426)<=x427)-x428);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x434 = INT16_MIN;
	int16_t x435 = 14823;

	t76 = (((x433*x434)<=x435)-x436);

	if (t76 != 129) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x438 = 2U;
	int32_t x439 = -37;
	static uint32_t x440 = UINT32_MAX;
	static uint32_t t77 = 513040388U;

	t77 = (((x437*x438)<=x439)-x440);

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x446 = -1;
	int8_t x447 = INT8_MIN;
	volatile int32_t x448 = -35435864;

	t78 = (((x445*x446)<=x447)-x448);

	if (t78 != 35435865) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x454 = INT16_MIN;
	int8_t x455 = -1;
	volatile uint32_t t79 = 366U;

	t79 = (((x453*x454)<=x455)-x456);

	if (t79 != 4294891502U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x457 = -1;
	uint32_t x458 = 14480U;
	static uint64_t x459 = UINT64_MAX;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t80 = 78311LLU;

	t80 = (((x457*x458)<=x459)-x460);

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x461 = -1;
	uint32_t x462 = 29100U;
	uint8_t x463 = 4U;
	uint8_t x464 = 52U;
	volatile int32_t t81 = -11;

	t81 = (((x461*x462)<=x463)-x464);

	if (t81 != -52) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x465 = INT8_MAX;
	int32_t x466 = -1;
	volatile int8_t x468 = -62;
	volatile int32_t t82 = 1030186;

	t82 = (((x465*x466)<=x467)-x468);

	if (t82 != 62) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x469 = 6879835571794LLU;
	uint64_t x470 = 128177935702214LLU;
	uint16_t x471 = 1U;
	int64_t x472 = -89372LL;

	t83 = (((x469*x470)<=x471)-x472);

	if (t83 != 89372LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x473 = 108913;
	uint8_t x474 = UINT8_MAX;
	uint8_t x475 = UINT8_MAX;
	int8_t x476 = INT8_MIN;
	volatile int32_t t84 = -1292;

	t84 = (((x473*x474)<=x475)-x476);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x477 = 4U;
	int16_t x479 = 1;
	static int16_t x480 = -464;

	t85 = (((x477*x478)<=x479)-x480);

	if (t85 != 465) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x485 = 87U;
	uint8_t x486 = UINT8_MAX;
	static uint16_t x487 = UINT16_MAX;
	int32_t x488 = 482065945;

	t86 = (((x485*x486)<=x487)-x488);

	if (t86 != -482065944) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x489 = UINT64_MAX;
	int8_t x490 = INT8_MAX;
	uint32_t x491 = 1048119597U;
	int8_t x492 = INT8_MIN;
	volatile int32_t t87 = 8806960;

	t87 = (((x489*x490)<=x491)-x492);

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x497 = INT8_MIN;
	uint32_t x498 = 158U;
	uint16_t x499 = 27U;
	uint32_t x500 = UINT32_MAX;
	static volatile uint32_t t88 = 1U;

	t88 = (((x497*x498)<=x499)-x500);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x501 = -1;
	uint64_t x502 = 13LLU;
	uint64_t x503 = 26257LLU;
	uint32_t x504 = 2685U;
	volatile uint32_t t89 = 14296U;

	t89 = (((x501*x502)<=x503)-x504);

	if (t89 != 4294964611U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x505 = -1;
	uint64_t x506 = 182050314LLU;
	static volatile int16_t x507 = -224;
	int16_t x508 = 1219;
	int32_t t90 = 365553537;

	t90 = (((x505*x506)<=x507)-x508);

	if (t90 != -1218) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x509 = 0U;
	volatile uint32_t x510 = 112U;
	volatile uint16_t x511 = 3970U;
	int32_t x512 = -1;
	int32_t t91 = 559164613;

	t91 = (((x509*x510)<=x511)-x512);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x513 = 57;
	static int8_t x514 = INT8_MIN;
	int16_t x515 = INT16_MIN;
	static uint64_t x516 = 192220686296757LLU;
	volatile uint64_t t92 = 10714476382750623LLU;

	t92 = (((x513*x514)<=x515)-x516);

	if (t92 != 18446551853023254859LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x517 = INT32_MAX;
	uint64_t x518 = 8LLU;

	t93 = (((x517*x518)<=x519)-x520);

	if (t93 != -255) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x521 = -1;
	int8_t x522 = -3;
	volatile uint8_t x523 = 3U;
	uint64_t x524 = 19166LLU;

	t94 = (((x521*x522)<=x523)-x524);

	if (t94 != 18446744073709532451LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x537 = 149U;
	volatile uint64_t x538 = 8121620597LLU;
	uint64_t x539 = 15128012116490LLU;
	uint64_t x540 = UINT64_MAX;
	uint64_t t95 = 1147189883LLU;

	t95 = (((x537*x538)<=x539)-x540);

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x546 = 0U;
	static int16_t x547 = INT16_MIN;
	volatile int32_t t96 = 242250;

	t96 = (((x545*x546)<=x547)-x548);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x554 = 29;
	uint16_t x555 = UINT16_MAX;
	uint8_t x556 = 3U;
	int32_t t97 = -2594931;

	t97 = (((x553*x554)<=x555)-x556);

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x557 = 6502;
	uint16_t x558 = 11U;
	volatile int8_t x560 = 1;
	int32_t t98 = 0;

	t98 = (((x557*x558)<=x559)-x560);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x565 = UINT32_MAX;
	static int32_t x566 = INT32_MIN;
	volatile uint32_t x567 = 54561734U;
	int16_t x568 = INT16_MIN;
	int32_t t99 = 177;

	t99 = (((x565*x566)<=x567)-x568);

	if (t99 != 32768) { NG(); } else { ; }
	
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

