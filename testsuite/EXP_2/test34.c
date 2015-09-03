#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 206U;
uint32_t x6 = 31U;
uint32_t x9 = 11040U;
int64_t x23 = INT64_MIN;
uint16_t x26 = 31625U;
volatile int64_t x27 = -3LL;
int64_t x28 = INT64_MIN;
int64_t x31 = -1LL;
uint32_t x35 = UINT32_MAX;
int8_t x36 = INT8_MIN;
static volatile int32_t t6 = -226;
int32_t x50 = -1;
volatile int32_t t12 = -6206;
volatile uint32_t x71 = UINT32_MAX;
int64_t x84 = INT64_MIN;
int8_t x85 = INT8_MIN;
uint64_t x86 = 29LLU;
int32_t x91 = -1;
volatile int32_t t18 = 1963;
static int32_t x98 = INT32_MIN;
static uint64_t x100 = 30655673LLU;
uint16_t x102 = 6277U;
static uint32_t x110 = 251440382U;
int32_t x111 = INT32_MIN;
static int16_t x121 = INT16_MAX;
int16_t x123 = INT16_MAX;
uint16_t x132 = 4808U;
static uint64_t x137 = UINT64_MAX;
static uint32_t x138 = 514452U;
int16_t x145 = INT16_MIN;
uint32_t x149 = 209591952U;
int8_t x153 = INT8_MIN;
static int8_t x158 = INT8_MIN;
uint16_t x159 = UINT16_MAX;
volatile uint8_t x171 = 5U;
int16_t x175 = INT16_MIN;
int16_t x178 = 54;
static int32_t t32 = 88;
volatile int32_t t34 = 248565;
uint16_t x194 = 1285U;
int64_t x201 = -1LL;
static volatile int32_t t36 = -1;
static int16_t x206 = INT16_MIN;
static int8_t x207 = -1;
int8_t x221 = INT8_MIN;
uint16_t x223 = 3445U;
int8_t x238 = INT8_MIN;
uint8_t x239 = 15U;
uint32_t x241 = UINT32_MAX;
uint8_t x242 = 2U;
volatile int8_t x244 = -12;
uint16_t x248 = 3U;
uint32_t x249 = 1386001265U;
uint16_t x256 = 6942U;
volatile int32_t t50 = -71;
volatile int32_t t51 = 2;
int32_t x284 = INT32_MAX;
int16_t x285 = -1;
volatile int8_t x313 = 27;
int32_t x316 = INT32_MIN;
int8_t x318 = INT8_MAX;
int32_t t57 = 0;
int32_t x339 = -3;
static uint8_t x351 = 0U;
int32_t t59 = -5707;
uint8_t x357 = 7U;
uint64_t x383 = 2133492309128LLU;
uint64_t x387 = 108LLU;
int32_t x388 = -1;
int16_t x419 = INT16_MIN;
volatile uint16_t x420 = 68U;
uint16_t x431 = 9599U;
static volatile uint64_t x432 = 10509LLU;
volatile int32_t t72 = -230875;
int16_t x435 = 5;
int16_t x440 = -82;
static uint8_t x442 = UINT8_MAX;
volatile int16_t x443 = INT16_MAX;
int32_t t76 = -3766782;
uint16_t x449 = 10U;
static volatile int32_t t77 = -3471665;
uint16_t x470 = UINT16_MAX;
volatile int32_t t81 = 2744;
uint64_t x478 = 1871LLU;
int16_t x483 = 2010;
int32_t t85 = -87;
int32_t x500 = INT32_MAX;
int16_t x501 = INT16_MIN;
int16_t x503 = INT16_MAX;
uint32_t x506 = UINT32_MAX;
int32_t x509 = INT32_MAX;
uint8_t x515 = 4U;
volatile int32_t t90 = -9792496;
int16_t x520 = INT16_MAX;
int64_t x529 = 1LL;
uint16_t x530 = 16U;
uint32_t x531 = UINT32_MAX;
uint8_t x532 = 0U;
static volatile int32_t t93 = 3;
volatile int64_t x561 = 5165029LL;
int32_t x564 = INT32_MAX;
static int32_t x565 = -1;
static uint8_t x569 = 1U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = 570519389;

	t0 = ((x1*(x2+x3))==x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 217173005025292841LLU;
	int64_t x7 = -1LL;
	static volatile uint64_t x8 = 8LLU;
	int32_t t1 = 12169;

	t1 = ((x5*(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x10 = 1U;
	static int32_t x11 = -1;
	uint64_t x12 = 1873048226LLU;
	volatile int32_t t2 = -7;

	t2 = ((x9*(x10+x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x21 = -1LL;
	volatile uint64_t x22 = UINT64_MAX;
	static int32_t x24 = INT32_MIN;
	int32_t t3 = 55566;

	t3 = ((x21*(x22+x23))==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x25 = -1;
	int32_t t4 = 279158073;

	t4 = ((x25*(x26+x27))==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = -3;
	int8_t x30 = INT8_MAX;
	uint32_t x32 = UINT32_MAX;
	int32_t t5 = 0;

	t5 = ((x29*(x30+x31))==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = UINT8_MAX;
	uint16_t x34 = 48U;

	t6 = ((x33*(x34+x35))==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 45U;
	uint64_t x38 = 1960119697LLU;
	int32_t x39 = INT32_MIN;
	int32_t x40 = -2;
	int32_t t7 = 84823344;

	t7 = ((x37*(x38+x39))==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = 10532;
	static int16_t x42 = INT16_MIN;
	int16_t x43 = -1;
	int32_t x44 = INT32_MAX;
	volatile int32_t t8 = -4492917;

	t8 = ((x41*(x42+x43))==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 3U;
	int16_t x51 = -489;
	int64_t x52 = -1574206261866187LL;
	static int32_t t9 = -53;

	t9 = ((x49*(x50+x51))==x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 3832U;
	uint8_t x58 = 3U;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t10 = -534;

	t10 = ((x57*(x58+x59))==x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x61 = -1;
	static volatile uint32_t x62 = 1931381861U;
	int8_t x63 = -1;
	uint16_t x64 = 25312U;
	int32_t t11 = -17788913;

	t11 = ((x61*(x62+x63))==x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x65 = 3;
	uint8_t x66 = 0U;
	uint16_t x67 = UINT16_MAX;
	uint16_t x68 = UINT16_MAX;

	t12 = ((x65*(x66+x67))==x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = 1620;
	int16_t x72 = -1;
	int32_t t13 = 6;

	t13 = ((x69*(x70+x71))==x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -1083727090364LL;
	uint64_t x78 = 256998967009561183LLU;
	int64_t x79 = INT64_MIN;
	volatile uint16_t x80 = 49U;
	volatile int32_t t14 = 1;

	t14 = ((x77*(x78+x79))==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = -1;
	int8_t x82 = -29;
	int8_t x83 = INT8_MIN;
	int32_t t15 = 2;

	t15 = ((x81*(x82+x83))==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x87 = 1396390U;
	int16_t x88 = INT16_MAX;
	volatile int32_t t16 = 39487701;

	t16 = ((x85*(x86+x87))==x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = 4475U;
	int64_t x92 = -1LL;
	volatile int32_t t17 = 49;

	t17 = ((x89*(x90+x91))==x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x93 = 3U;
	int32_t x94 = -1;
	static int32_t x95 = -1;
	uint64_t x96 = 152LLU;

	t18 = ((x93*(x94+x95))==x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MAX;
	uint64_t x99 = 330081LLU;
	int32_t t19 = -61950686;

	t19 = ((x97*(x98+x99))==x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = UINT64_MAX;
	static volatile uint32_t x103 = UINT32_MAX;
	static int16_t x104 = -1;
	static volatile int32_t t20 = -556;

	t20 = ((x101*(x102+x103))==x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	volatile int8_t x112 = 1;
	static int32_t t21 = 41;

	t21 = ((x109*(x110+x111))==x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = 11;
	int8_t x114 = INT8_MAX;
	volatile int64_t x115 = -1LL;
	int8_t x116 = INT8_MAX;
	int32_t t22 = -582117279;

	t22 = ((x113*(x114+x115))==x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x122 = 15;
	static volatile int64_t x124 = -410673143782LL;
	volatile int32_t t23 = -188132692;

	t23 = ((x121*(x122+x123))==x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = 199U;
	volatile uint32_t x130 = 10U;
	uint32_t x131 = 1125U;
	int32_t t24 = 115;

	t24 = ((x129*(x130+x131))==x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x139 = INT32_MIN;
	volatile int8_t x140 = 1;
	int32_t t25 = -58768;

	t25 = ((x137*(x138+x139))==x140);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x146 = INT16_MIN;
	uint32_t x147 = 375767U;
	static int16_t x148 = -3191;
	static int32_t t26 = -469899659;

	t26 = ((x145*(x146+x147))==x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x150 = 416U;
	int32_t x151 = INT32_MIN;
	int8_t x152 = -1;
	static int32_t t27 = 62048634;

	t27 = ((x149*(x150+x151))==x152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x154 = UINT8_MAX;
	static uint8_t x155 = 5U;
	static int16_t x156 = INT16_MIN;
	int32_t t28 = 35068;

	t28 = ((x153*(x154+x155))==x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x157 = UINT32_MAX;
	volatile uint64_t x160 = 102LLU;
	volatile int32_t t29 = 54;

	t29 = ((x157*(x158+x159))==x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x170 = UINT64_MAX;
	uint16_t x172 = 7U;
	volatile int32_t t30 = -54157279;

	t30 = ((x169*(x170+x171))==x172);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x173 = 82766897773LLU;
	volatile int16_t x174 = INT16_MIN;
	uint16_t x176 = 10965U;
	int32_t t31 = -5268009;

	t31 = ((x173*(x174+x175))==x176);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x177 = UINT32_MAX;
	static int64_t x179 = -1LL;
	int32_t x180 = INT32_MAX;

	t32 = ((x177*(x178+x179))==x180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x181 = 1;
	int64_t x182 = INT64_MAX;
	int64_t x183 = -682940214232LL;
	static int8_t x184 = 21;
	volatile int32_t t33 = 436837584;

	t33 = ((x181*(x182+x183))==x184);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x185 = 11U;
	volatile uint64_t x186 = 139696LLU;
	int8_t x187 = 56;
	int32_t x188 = INT32_MAX;

	t34 = ((x185*(x186+x187))==x188);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = INT32_MIN;
	volatile uint64_t x195 = 337198LLU;
	volatile int64_t x196 = 174LL;
	int32_t t35 = -11799;

	t35 = ((x193*(x194+x195))==x196);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x202 = -1LL;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;

	t36 = ((x201*(x202+x203))==x204);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x205 = 1382;
	int32_t x208 = INT32_MAX;
	int32_t t37 = -130243913;

	t37 = ((x205*(x206+x207))==x208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x209 = 65;
	uint16_t x210 = 2U;
	int8_t x211 = -6;
	volatile uint16_t x212 = 198U;
	int32_t t38 = -4605762;

	t38 = ((x209*(x210+x211))==x212);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x213 = 193025737U;
	volatile int16_t x214 = INT16_MIN;
	volatile int16_t x215 = -1;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t39 = 16410743;

	t39 = ((x213*(x214+x215))==x216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x222 = 1260U;
	static int8_t x224 = -1;
	int32_t t40 = 3792;

	t40 = ((x221*(x222+x223))==x224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x225 = 40584522758LLU;
	int32_t x226 = -1;
	volatile uint64_t x227 = UINT64_MAX;
	uint8_t x228 = 4U;
	int32_t t41 = -717;

	t41 = ((x225*(x226+x227))==x228);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x229 = -1;
	int64_t x230 = -241LL;
	int32_t x231 = INT32_MAX;
	volatile uint64_t x232 = 421LLU;
	static int32_t t42 = -1;

	t42 = ((x229*(x230+x231))==x232);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x237 = 39;
	uint64_t x240 = UINT64_MAX;
	int32_t t43 = 0;

	t43 = ((x237*(x238+x239))==x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x243 = 96LL;
	volatile int32_t t44 = -25;

	t44 = ((x241*(x242+x243))==x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x245 = -1;
	uint8_t x246 = 4U;
	uint64_t x247 = 42627824LLU;
	volatile int32_t t45 = 1;

	t45 = ((x245*(x246+x247))==x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x250 = -1;
	uint8_t x251 = 2U;
	uint32_t x252 = 152U;
	int32_t t46 = 0;

	t46 = ((x249*(x250+x251))==x252);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x253 = INT32_MAX;
	uint32_t x254 = 1628720U;
	int16_t x255 = 7;
	int32_t t47 = -12204309;

	t47 = ((x253*(x254+x255))==x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x257 = INT32_MAX;
	volatile int64_t x258 = INT64_MAX;
	int64_t x259 = INT64_MIN;
	int32_t x260 = 8;
	int32_t t48 = -1741556;

	t48 = ((x257*(x258+x259))==x260);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = 6;
	static int64_t x266 = -106LL;
	volatile uint64_t x267 = UINT64_MAX;
	int32_t x268 = 1635671;
	volatile int32_t t49 = 195362;

	t49 = ((x265*(x266+x267))==x268);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x273 = 3025688301825340597LLU;
	volatile uint32_t x274 = 6813329U;
	uint8_t x275 = 2U;
	int16_t x276 = -1;

	t50 = ((x273*(x274+x275))==x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x277 = UINT32_MAX;
	static int64_t x278 = INT64_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile int8_t x280 = 59;

	t51 = ((x277*(x278+x279))==x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x281 = INT64_MIN;
	volatile uint8_t x282 = 32U;
	volatile uint64_t x283 = 9505LLU;
	static int32_t t52 = -972;

	t52 = ((x281*(x282+x283))==x284);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x286 = 25658592004LLU;
	int32_t x287 = INT32_MIN;
	int8_t x288 = -48;
	int32_t t53 = 1531041;

	t53 = ((x285*(x286+x287))==x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = 84LL;
	static int32_t x290 = -96134904;
	int16_t x291 = -1;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t54 = 10408;

	t54 = ((x289*(x290+x291))==x292);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x314 = UINT32_MAX;
	volatile int16_t x315 = INT16_MAX;
	int32_t t55 = 3059;

	t55 = ((x313*(x314+x315))==x316);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x317 = INT16_MIN;
	static int16_t x319 = 1018;
	static int64_t x320 = INT64_MIN;
	static int32_t t56 = -10;

	t56 = ((x317*(x318+x319))==x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;

	t57 = ((x321*(x322+x323))==x324);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x337 = -1LL;
	int8_t x338 = -33;
	int64_t x340 = 0LL;
	volatile int32_t t58 = 1353698;

	t58 = ((x337*(x338+x339))==x340);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x349 = 2093LLU;
	int16_t x350 = -1;
	static uint8_t x352 = UINT8_MAX;

	t59 = ((x349*(x350+x351))==x352);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x358 = UINT8_MAX;
	static volatile int16_t x359 = 85;
	int64_t x360 = INT64_MIN;
	int32_t t60 = 0;

	t60 = ((x357*(x358+x359))==x360);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x361 = INT16_MIN;
	volatile int64_t x362 = 3591415940931LL;
	volatile int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t61 = -13;

	t61 = ((x361*(x362+x363))==x364);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x373 = -1;
	static int32_t x374 = -1;
	int16_t x375 = 1;
	int32_t x376 = INT32_MIN;
	static volatile int32_t t62 = 4388856;

	t62 = ((x373*(x374+x375))==x376);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x377 = 781LLU;
	volatile int32_t x378 = INT32_MIN;
	static int64_t x379 = -1LL;
	uint8_t x380 = 19U;
	int32_t t63 = -13520832;

	t63 = ((x377*(x378+x379))==x380);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MIN;
	int32_t x384 = -1;
	volatile int32_t t64 = -81271970;

	t64 = ((x381*(x382+x383))==x384);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x385 = -57;
	static volatile uint32_t x386 = 28U;
	volatile int32_t t65 = 156;

	t65 = ((x385*(x386+x387))==x388);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x389 = -1;
	int8_t x390 = 14;
	uint16_t x391 = 810U;
	uint8_t x392 = UINT8_MAX;
	int32_t t66 = -2;

	t66 = ((x389*(x390+x391))==x392);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x393 = 1110U;
	volatile uint64_t x394 = 17762502777448192LLU;
	volatile int8_t x395 = 1;
	uint8_t x396 = 1U;
	volatile int32_t t67 = -43850;

	t67 = ((x393*(x394+x395))==x396);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x405 = INT32_MAX;
	int8_t x406 = INT8_MAX;
	uint64_t x407 = UINT64_MAX;
	static volatile int64_t x408 = -5455738632LL;
	volatile int32_t t68 = 1945;

	t68 = ((x405*(x406+x407))==x408);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x409 = -1;
	int16_t x410 = INT16_MIN;
	volatile uint64_t x411 = 16LLU;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t69 = -8256;

	t69 = ((x409*(x410+x411))==x412);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x417 = -1;
	int32_t x418 = 1;
	int32_t t70 = -123;

	t70 = ((x417*(x418+x419))==x420);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x425 = -1LL;
	volatile int8_t x426 = INT8_MIN;
	static uint8_t x427 = 3U;
	volatile int64_t x428 = INT64_MAX;
	static volatile int32_t t71 = 2;

	t71 = ((x425*(x426+x427))==x428);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x429 = 10729;
	int8_t x430 = INT8_MIN;

	t72 = ((x429*(x430+x431))==x432);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x433 = INT8_MAX;
	int8_t x434 = INT8_MIN;
	volatile uint16_t x436 = 23U;
	volatile int32_t t73 = 10400669;

	t73 = ((x433*(x434+x435))==x436);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x437 = UINT32_MAX;
	static volatile uint32_t x438 = 10U;
	static int16_t x439 = -2713;
	static int32_t t74 = -269384;

	t74 = ((x437*(x438+x439))==x440);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x441 = 1644274U;
	volatile int64_t x444 = 5802LL;
	int32_t t75 = 46;

	t75 = ((x441*(x442+x443))==x444);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x445 = UINT64_MAX;
	int64_t x446 = -1LL;
	volatile int8_t x447 = INT8_MIN;
	static uint32_t x448 = 1673849U;

	t76 = ((x445*(x446+x447))==x448);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x450 = INT16_MIN;
	static uint64_t x451 = 418478581573905623LLU;
	int64_t x452 = INT64_MIN;

	t77 = ((x449*(x450+x451))==x452);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x457 = INT8_MIN;
	int16_t x458 = 1;
	volatile int64_t x459 = 107698LL;
	volatile int32_t x460 = INT32_MAX;
	int32_t t78 = 4;

	t78 = ((x457*(x458+x459))==x460);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x461 = -1;
	static uint32_t x462 = 3232U;
	uint32_t x463 = 8763882U;
	static uint64_t x464 = 3808676803073LLU;
	int32_t t79 = 406849;

	t79 = ((x461*(x462+x463))==x464);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x465 = INT16_MIN;
	volatile uint32_t x466 = UINT32_MAX;
	int64_t x467 = -1LL;
	int8_t x468 = 1;
	int32_t t80 = -268052;

	t80 = ((x465*(x466+x467))==x468);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x469 = -1;
	static volatile int32_t x471 = 0;
	volatile uint16_t x472 = 1U;

	t81 = ((x469*(x470+x471))==x472);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x477 = -820586628441334216LL;
	volatile int64_t x479 = 1901140557LL;
	static volatile uint32_t x480 = 2U;
	int32_t t82 = -3;

	t82 = ((x477*(x478+x479))==x480);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x481 = 2U;
	static int8_t x482 = -40;
	int32_t x484 = 706501386;
	static int32_t t83 = -320096;

	t83 = ((x481*(x482+x483))==x484);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x485 = 7U;
	uint64_t x486 = UINT64_MAX;
	volatile int64_t x487 = -18060739048LL;
	int64_t x488 = -1LL;
	volatile int32_t t84 = -1;

	t84 = ((x485*(x486+x487))==x488);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x489 = INT32_MIN;
	volatile int64_t x490 = -139LL;
	int16_t x491 = 77;
	static uint16_t x492 = 16272U;

	t85 = ((x489*(x490+x491))==x492);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x497 = -1;
	volatile int8_t x498 = INT8_MIN;
	static volatile int16_t x499 = INT16_MAX;
	volatile int32_t t86 = -142286;

	t86 = ((x497*(x498+x499))==x500);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x502 = 247;
	volatile uint8_t x504 = 42U;
	static volatile int32_t t87 = 1;

	t87 = ((x501*(x502+x503))==x504);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x505 = INT32_MAX;
	static uint16_t x507 = 0U;
	int32_t x508 = -131958;
	volatile int32_t t88 = 45753;

	t88 = ((x505*(x506+x507))==x508);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x510 = 39697U;
	static int32_t x511 = INT32_MIN;
	uint32_t x512 = 962405U;
	static volatile int32_t t89 = 1927;

	t89 = ((x509*(x510+x511))==x512);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x513 = INT8_MIN;
	volatile int8_t x514 = INT8_MIN;
	int64_t x516 = 276982LL;

	t90 = ((x513*(x514+x515))==x516);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x517 = INT8_MIN;
	int16_t x518 = INT16_MAX;
	uint64_t x519 = UINT64_MAX;
	int32_t t91 = -187413268;

	t91 = ((x517*(x518+x519))==x520);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t t92 = -426841770;

	t92 = ((x529*(x530+x531))==x532);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x537 = 9639U;
	volatile int8_t x538 = 6;
	volatile int64_t x539 = 5429453LL;
	int64_t x540 = 897932571750LL;

	t93 = ((x537*(x538+x539))==x540);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x549 = INT16_MIN;
	int8_t x550 = INT8_MIN;
	static int64_t x551 = 189962923783049LL;
	int8_t x552 = INT8_MIN;
	volatile int32_t t94 = -9945648;

	t94 = ((x549*(x550+x551))==x552);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x553 = INT32_MIN;
	static int64_t x554 = -1LL;
	uint16_t x555 = 3U;
	int16_t x556 = -1;
	volatile int32_t t95 = 9;

	t95 = ((x553*(x554+x555))==x556);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x562 = INT8_MIN;
	uint32_t x563 = 201U;
	volatile int32_t t96 = 552;

	t96 = ((x561*(x562+x563))==x564);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x566 = INT32_MIN;
	static uint8_t x567 = UINT8_MAX;
	static uint32_t x568 = 2689U;
	static int32_t t97 = -809413605;

	t97 = ((x565*(x566+x567))==x568);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x570 = -1725836;
	volatile int64_t x571 = INT64_MAX;
	int64_t x572 = INT64_MIN;
	volatile int32_t t98 = -1954;

	t98 = ((x569*(x570+x571))==x572);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x577 = -1LL;
	volatile int8_t x578 = INT8_MIN;
	volatile int32_t x579 = INT32_MAX;
	static int8_t x580 = 60;
	volatile int32_t t99 = 47;

	t99 = ((x577*(x578+x579))==x580);

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

