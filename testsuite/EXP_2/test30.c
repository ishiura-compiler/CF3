#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = -1LL;
volatile uint16_t x27 = UINT16_MAX;
volatile int64_t x31 = INT64_MIN;
static int8_t x42 = INT8_MIN;
volatile int32_t x45 = -517606021;
static uint16_t x60 = 18756U;
int64_t x66 = 16046629209400LL;
uint16_t x86 = UINT16_MAX;
int32_t x91 = INT32_MIN;
uint16_t x92 = UINT16_MAX;
int16_t x100 = -304;
static volatile uint8_t x103 = 0U;
int64_t x108 = -1LL;
static int8_t x118 = -1;
uint64_t t20 = 24LLU;
int8_t x122 = INT8_MAX;
int64_t x124 = -1LL;
uint16_t x127 = 0U;
int64_t t22 = 4020766LL;
uint16_t x134 = UINT16_MAX;
int64_t x152 = 113895587LL;
static volatile int32_t t27 = -3;
int32_t t28 = 4314234;
uint32_t x176 = UINT32_MAX;
int16_t x196 = INT16_MAX;
static volatile int8_t x200 = -1;
int8_t x201 = -1;
uint32_t x202 = 1682U;
int64_t x206 = -1LL;
uint64_t t35 = 1464LLU;
volatile int64_t t37 = -1938LL;
int64_t x243 = 2409970LL;
volatile uint64_t t41 = 156LLU;
static int16_t x248 = INT16_MIN;
int8_t x251 = INT8_MAX;
int16_t x252 = 129;
uint8_t x256 = 12U;
uint8_t x261 = 6U;
uint64_t x266 = 2631665153LLU;
static int64_t x268 = INT64_MIN;
int32_t x273 = INT32_MIN;
int8_t x278 = -1;
static volatile int32_t t48 = -1;
volatile uint8_t x299 = 16U;
uint32_t x301 = 211135U;
uint64_t t51 = 579951LLU;
int64_t x310 = -53LL;
volatile uint64_t t53 = 6102733026LLU;
uint16_t x337 = 705U;
volatile int8_t x346 = INT8_MIN;
int64_t x376 = INT64_MIN;
uint64_t t63 = 637444191LLU;
volatile int64_t x390 = INT64_MIN;
volatile int64_t t65 = -53211859LL;
uint32_t x396 = UINT32_MAX;
static uint32_t t66 = 21U;
static uint64_t x422 = 2970733964208LLU;
static uint8_t x433 = 2U;
int16_t x445 = 254;
volatile int8_t x448 = INT8_MAX;
volatile int64_t t74 = -973296851391530LL;
int16_t x451 = -17;
uint8_t x452 = 1U;
uint32_t x463 = 163U;
int32_t x464 = 16163312;
static int16_t x465 = INT16_MAX;
volatile int8_t x471 = INT8_MIN;
static int16_t x472 = 11;
uint8_t x481 = 8U;
int32_t t83 = -41330485;
int16_t x503 = -1;
uint16_t x510 = 18U;
uint16_t x511 = 461U;
int64_t x539 = 63724778419LL;
int16_t x572 = INT16_MIN;
uint8_t x575 = 112U;
int8_t x577 = INT8_MIN;
int8_t x578 = INT8_MIN;
int32_t t95 = 89002860;
int64_t x584 = INT64_MIN;
static uint8_t x593 = UINT8_MAX;
uint16_t x597 = UINT16_MAX;


void f0(void) {
	int16_t x1 = 431;
	static int32_t x2 = -1;
	volatile int32_t x3 = -1089;
	int16_t x4 = -1;
	int32_t t0 = -418;

	t0 = ((x1*(x2+x3))/x4);

	if (t0 != 469790) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x7 = INT8_MAX;
	uint16_t x8 = UINT16_MAX;
	static volatile int64_t t1 = 39955515LL;

	t1 = ((x5*(x6+x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MIN;
	uint64_t x15 = 2LLU;
	volatile int16_t x16 = -1954;
	volatile uint64_t t2 = 42LLU;

	t2 = ((x13*(x14+x15))/x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 12471U;
	int64_t x18 = -4082644LL;
	uint32_t x19 = 35134U;
	static volatile uint32_t x20 = UINT32_MAX;
	volatile int64_t t3 = 57785544326584LL;

	t3 = ((x17*(x18+x19))/x20);

	if (t3 != -11LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = UINT32_MAX;
	int32_t x22 = 9187866;
	static uint32_t x23 = 11040310U;
	int32_t x24 = 130122439;
	volatile uint32_t t4 = 7000U;

	t4 = ((x21*(x22+x23))/x24);

	if (t4 != 32U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = 0U;
	int16_t x26 = INT16_MAX;
	static int32_t x28 = -1;
	volatile uint32_t t5 = 72942U;

	t5 = ((x25*(x26+x27))/x28);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x29 = INT8_MAX;
	int64_t x30 = INT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile int64_t t6 = 2046595892715LL;

	t6 = ((x29*(x30+x31))/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -96;
	static uint8_t x34 = 1U;
	static uint64_t x35 = UINT64_MAX;
	int64_t x36 = -1LL;
	uint64_t t7 = 5382965949645LLU;

	t7 = ((x33*(x34+x35))/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 0U;
	int8_t x43 = INT8_MIN;
	static int64_t x44 = -1176293598LL;
	volatile int64_t t8 = 12415498946364LL;

	t8 = ((x41*(x42+x43))/x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x46 = 29U;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MIN;
	volatile uint32_t t9 = 36047U;

	t9 = ((x45*(x46+x47))/x48);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 5U;
	int32_t x58 = -1;
	int64_t x59 = 12450190053110LL;
	volatile int64_t t10 = 5LL;

	t10 = ((x57*(x58+x59))/x60);

	if (t10 != 3318988604LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x61 = -1;
	int16_t x62 = -1;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = 3449;
	static uint64_t t11 = 32LLU;

	t11 = ((x61*(x62+x63))/x64);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int16_t x67 = -15198;
	static uint32_t x68 = 6031U;
	int64_t t12 = -827941354LL;

	t12 = ((x65*(x66+x67))/x68);

	if (t12 != 678476279973LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = 15LL;
	static int64_t x74 = -1LL;
	int32_t x75 = -1;
	int8_t x76 = INT8_MIN;
	volatile int64_t t13 = -26235383911LL;

	t13 = ((x73*(x74+x75))/x76);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = -5;
	static int16_t x82 = 941;
	volatile int16_t x83 = -48;
	int32_t x84 = INT32_MAX;
	volatile int32_t t14 = 2404;

	t14 = ((x81*(x82+x83))/x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = 388U;
	int64_t x87 = -272LL;
	int64_t x88 = -1LL;
	volatile int64_t t15 = -4625726047704288LL;

	t15 = ((x85*(x86+x87))/x88);

	if (t15 != -25322044LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = 262593178262033LLU;
	uint64_t t16 = 1864539681985LLU;

	t16 = ((x89*(x90+x91))/x92);

	if (t16 != 67188997843773LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -1LL;
	int16_t x98 = -1;
	int32_t x99 = INT32_MAX;
	int64_t t17 = -349922380598005LL;

	t17 = ((x97*(x98+x99))/x100);

	if (t17 != 7064090LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = INT16_MIN;
	volatile int16_t x102 = -1;
	static int8_t x104 = -10;
	volatile int32_t t18 = 1;

	t18 = ((x101*(x102+x103))/x104);

	if (t18 != -3276) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x105 = 60U;
	int8_t x106 = 1;
	int8_t x107 = -7;
	volatile int64_t t19 = 1613378608757589LL;

	t19 = ((x105*(x106+x107))/x108);

	if (t19 != -4294966936LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x117 = 1U;
	static uint64_t x119 = 10286736LLU;
	int64_t x120 = 179287291LL;

	t20 = ((x117*(x118+x119))/x120);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 0U;
	uint16_t x123 = 7U;
	static volatile int64_t t21 = -2063895388695616419LL;

	t21 = ((x121*(x122+x123))/x124);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x125 = INT16_MAX;
	static int16_t x126 = INT16_MIN;
	static int64_t x128 = 12858LL;

	t22 = ((x125*(x126+x127))/x128);

	if (t22 != -83505LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x133 = INT8_MIN;
	int16_t x135 = INT16_MAX;
	int32_t x136 = -1;
	static int32_t t23 = 125844;

	t23 = ((x133*(x134+x135))/x136);

	if (t23 != 12582656) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x149 = 7393U;
	uint8_t x150 = UINT8_MAX;
	int16_t x151 = 16;
	volatile int64_t t24 = -7516563972470540LL;

	t24 = ((x149*(x150+x151))/x152);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x153 = -9;
	static uint8_t x154 = 15U;
	uint64_t x155 = 5LLU;
	int64_t x156 = INT64_MIN;
	uint64_t t25 = 893280059157890LLU;

	t25 = ((x153*(x154+x155))/x156);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x161 = 194;
	int16_t x162 = INT16_MAX;
	static uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 47U;
	uint32_t t26 = 13087664U;

	t26 = ((x161*(x162+x163))/x164);

	if (t26 != 136303U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x165 = 92U;
	int16_t x166 = INT16_MIN;
	volatile int16_t x167 = 2250;
	int8_t x168 = -3;

	t27 = ((x165*(x166+x167))/x168);

	if (t27 != 935885) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x169 = -1;
	int32_t x170 = -1432995;
	int16_t x171 = -45;
	volatile uint8_t x172 = 12U;

	t28 = ((x169*(x170+x171))/x172);

	if (t28 != 119420) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x173 = UINT32_MAX;
	volatile uint32_t x174 = 47415270U;
	uint16_t x175 = 124U;
	uint32_t t29 = 281989695U;

	t29 = ((x173*(x174+x175))/x176);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x181 = INT16_MIN;
	volatile uint64_t x182 = UINT64_MAX;
	int8_t x183 = INT8_MIN;
	int32_t x184 = -70;
	volatile uint64_t t30 = 672456476946537LLU;

	t30 = ((x181*(x182+x183))/x184);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x193 = 25;
	int16_t x194 = 339;
	static uint64_t x195 = 17LLU;
	uint64_t t31 = 31740185351964LLU;

	t31 = ((x193*(x194+x195))/x196);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x197 = 1136261639128LLU;
	static int8_t x198 = INT8_MIN;
	static uint8_t x199 = 2U;
	volatile uint64_t t32 = 34671610274LLU;

	t32 = ((x197*(x198+x199))/x200);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x203 = 126U;
	static int32_t x204 = INT32_MAX;
	uint32_t t33 = 196807053U;

	t33 = ((x201*(x202+x203))/x204);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x205 = 966;
	uint16_t x207 = UINT16_MAX;
	int64_t x208 = -112256470LL;
	static int64_t t34 = 722849130985534LL;

	t34 = ((x205*(x206+x207))/x208);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x209 = INT8_MIN;
	uint8_t x210 = 2U;
	static int32_t x211 = 7613;
	uint64_t x212 = 1776427710668805LLU;

	t35 = ((x209*(x210+x211))/x212);

	if (t35 != 10384LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x213 = 878U;
	int8_t x214 = 22;
	int8_t x215 = INT8_MIN;
	int8_t x216 = -1;
	int32_t t36 = -17449201;

	t36 = ((x213*(x214+x215))/x216);

	if (t36 != 93068) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x217 = -1;
	static uint8_t x218 = 86U;
	static volatile int64_t x219 = -27987253228242026LL;
	volatile int32_t x220 = INT32_MAX;

	t37 = ((x217*(x218+x219))/x220);

	if (t37 != 13032580LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x221 = 1803U;
	int8_t x222 = 13;
	static int8_t x223 = INT8_MIN;
	volatile int32_t x224 = INT32_MIN;
	uint32_t t38 = 15700U;

	t38 = ((x221*(x222+x223))/x224);

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x229 = INT8_MIN;
	static int64_t x230 = -1LL;
	static uint16_t x231 = UINT16_MAX;
	int16_t x232 = -1;
	static int64_t t39 = -9380LL;

	t39 = ((x229*(x230+x231))/x232);

	if (t39 != 8388352LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x237 = UINT64_MAX;
	static volatile int8_t x238 = INT8_MIN;
	volatile int16_t x239 = INT16_MIN;
	int8_t x240 = INT8_MAX;
	static volatile uint64_t t40 = 354756663LLU;

	t40 = ((x237*(x238+x239))/x240);

	if (t40 != 259LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x241 = INT8_MAX;
	uint64_t x242 = 112763599182LLU;
	int32_t x244 = INT32_MIN;

	t41 = ((x241*(x242+x243))/x244);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x245 = 313U;
	int8_t x246 = INT8_MIN;
	uint32_t x247 = 115337412U;
	volatile uint32_t t42 = 11U;

	t42 = ((x245*(x246+x247))/x248);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = INT64_MAX;
	int8_t x250 = INT8_MIN;
	volatile int64_t t43 = 3208LL;

	t43 = ((x249*(x250+x251))/x252);

	if (t43 != -71499008037633920LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x253 = 1110908406789858756LLU;
	volatile uint16_t x254 = UINT16_MAX;
	static int8_t x255 = INT8_MIN;
	uint64_t t44 = 70477204088846LLU;

	t44 = ((x253*(x254+x255))/x256);

	if (t44 != 1492333386339782490LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	volatile int64_t t45 = 24LL;

	t45 = ((x261*(x262+x263))/x264);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x267 = 3754LLU;
	uint64_t t46 = 5895564976465LLU;

	t46 = ((x265*(x266+x267))/x268);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x274 = 1045635979LLU;
	uint64_t x275 = UINT64_MAX;
	uint16_t x276 = UINT16_MAX;
	volatile uint64_t t47 = 48266LLU;

	t47 = ((x273*(x274+x275))/x276);

	if (t47 != 247215349190418LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x277 = -1;
	int32_t x279 = -1;
	uint16_t x280 = 7U;

	t48 = ((x277*(x278+x279))/x280);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x281 = -1;
	static volatile uint64_t x282 = UINT64_MAX;
	volatile int32_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	uint64_t t49 = 88915772LLU;

	t49 = ((x281*(x282+x283))/x284);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x297 = -42;
	uint8_t x298 = 13U;
	int8_t x300 = -15;
	volatile int32_t t50 = 47;

	t50 = ((x297*(x298+x299))/x300);

	if (t50 != 81) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x302 = INT32_MAX;
	int32_t x303 = INT32_MIN;
	uint64_t x304 = 18578427LLU;

	t51 = ((x301*(x302+x303))/x304);

	if (t51 != 231LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x309 = UINT16_MAX;
	volatile int32_t x311 = 218240;
	uint32_t x312 = UINT32_MAX;
	volatile int64_t t52 = 754893410538834LL;

	t52 = ((x309*(x310+x311))/x312);

	if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x321 = UINT32_MAX;
	int32_t x322 = -1;
	static int16_t x323 = INT16_MAX;
	uint64_t x324 = UINT64_MAX;

	t53 = ((x321*(x322+x323))/x324);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x329 = -1LL;
	volatile int32_t x330 = INT32_MAX;
	static int16_t x331 = -1;
	int16_t x332 = 10;
	int64_t t54 = 9736LL;

	t54 = ((x329*(x330+x331))/x332);

	if (t54 != -214748364LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x338 = 3995LLU;
	static int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	uint64_t t55 = 257575674651LLU;

	t55 = ((x337*(x338+x339))/x340);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x341 = -1LL;
	int64_t x342 = -13733498191LL;
	int32_t x343 = -1;
	uint32_t x344 = 1039105773U;
	volatile int64_t t56 = -26441LL;

	t56 = ((x341*(x342+x343))/x344);

	if (t56 != 13LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x345 = 815LLU;
	int8_t x347 = INT8_MIN;
	uint64_t x348 = UINT64_MAX;
	static volatile uint64_t t57 = 72298423673460151LLU;

	t57 = ((x345*(x346+x347))/x348);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x353 = -12882;
	uint32_t x354 = 425339U;
	static int64_t x355 = -7LL;
	int8_t x356 = -1;
	volatile int64_t t58 = -120421824490398584LL;

	t58 = ((x353*(x354+x355))/x356);

	if (t58 != 5479126824LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = -1;
	uint64_t x359 = 73998314LLU;
	uint16_t x360 = 14U;
	uint64_t t59 = 321487103115LLU;

	t59 = ((x357*(x358+x359))/x360);

	if (t59 != 1317624576016983396LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x365 = INT8_MIN;
	uint8_t x366 = 7U;
	uint64_t x367 = 11LLU;
	int64_t x368 = 24876692886448LL;
	static uint64_t t60 = 759390432284968879LLU;

	t60 = ((x365*(x366+x367))/x368);

	if (t60 != 741527LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x373 = -1;
	int16_t x374 = 266;
	uint16_t x375 = 14488U;
	static volatile int64_t t61 = 596544592634854LL;

	t61 = ((x373*(x374+x375))/x376);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x377 = UINT64_MAX;
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = INT8_MAX;
	int16_t x380 = INT16_MAX;
	uint64_t t62 = 889606105LLU;

	t62 = ((x377*(x378+x379))/x380);

	if (t62 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MAX;
	int32_t x383 = 586804139;
	uint8_t x384 = 1U;

	t63 = ((x381*(x382+x383))/x384);

	if (t63 != 18446744073122714710LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x385 = 1062502475377LL;
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = UINT32_MAX;
	volatile int64_t t64 = 301850259788220LL;

	t64 = ((x385*(x386+x387))/x388);

	if (t64 != -8043167LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x389 = 0;
	int16_t x391 = 0;
	uint16_t x392 = 213U;

	t65 = ((x389*(x390+x391))/x392);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x393 = INT8_MAX;
	int16_t x394 = 17;
	uint16_t x395 = 16957U;

	t66 = ((x393*(x394+x395))/x396);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x397 = UINT32_MAX;
	static uint32_t x398 = 3U;
	uint32_t x399 = UINT32_MAX;
	int8_t x400 = INT8_MIN;
	volatile uint32_t t67 = 409U;

	t67 = ((x397*(x398+x399))/x400);

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x401 = 23200545U;
	static uint8_t x402 = 0U;
	volatile uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MAX;
	volatile uint64_t t68 = 74997116062371LLU;

	t68 = ((x401*(x402+x403))/x404);

	if (t68 != 562967133814091LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x405 = -671105926654439LL;
	volatile uint8_t x406 = 6U;
	static uint8_t x407 = 4U;
	int8_t x408 = -1;
	static int64_t t69 = -4577111492236782040LL;

	t69 = ((x405*(x406+x407))/x408);

	if (t69 != 6711059266544390LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x421 = INT32_MIN;
	static int32_t x423 = INT32_MIN;
	int16_t x424 = 113;
	static volatile uint64_t t70 = 221672717751681844LLU;

	t70 = ((x421*(x422+x423))/x424);

	if (t70 != 67101989619778550LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x429 = UINT16_MAX;
	uint32_t x430 = UINT32_MAX;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 514U;
	volatile uint32_t t71 = 688703U;

	t71 = ((x429*(x430+x431))/x432);

	if (t71 != 8339520U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x434 = -17;
	volatile uint32_t x435 = UINT32_MAX;
	volatile int64_t x436 = 19612230LL;
	static volatile int64_t t72 = 4770LL;

	t72 = ((x433*(x434+x435))/x436);

	if (t72 != 218LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x441 = 1LL;
	uint64_t x442 = 1939LLU;
	volatile int8_t x443 = INT8_MIN;
	int8_t x444 = -1;
	uint64_t t73 = 4099479665368901348LLU;

	t73 = ((x441*(x442+x443))/x444);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x446 = -1LL;
	static int16_t x447 = INT16_MIN;

	t74 = ((x445*(x446+x447))/x448);

	if (t74 != -65538LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x449 = 5350083LLU;
	int32_t x450 = -1;
	static volatile uint64_t t75 = 38000433877LLU;

	t75 = ((x449*(x450+x451))/x452);

	if (t75 != 18446744073613250122LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x457 = 22646744U;
	uint32_t x458 = UINT32_MAX;
	static int32_t x459 = -160;
	volatile int8_t x460 = INT8_MIN;
	static uint32_t t76 = 13983U;

	t76 = ((x457*(x458+x459))/x460);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x461 = 458849LLU;
	static int32_t x462 = 103;
	static volatile uint64_t t77 = 603LLU;

	t77 = ((x461*(x462+x463))/x464);

	if (t77 != 7LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x466 = 0U;
	volatile int8_t x467 = INT8_MAX;
	int8_t x468 = 15;
	int32_t t78 = 20143868;

	t78 = ((x465*(x466+x467))/x468);

	if (t78 != 277427) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x469 = INT16_MIN;
	uint16_t x470 = 9U;
	static int32_t t79 = 167473;

	t79 = ((x469*(x470+x471))/x472);

	if (t79 != 354490) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x473 = INT8_MIN;
	uint32_t x474 = 883955928U;
	int32_t x475 = -26791;
	static uint64_t x476 = 2LLU;
	uint64_t t80 = 13835LLU;

	t80 = ((x473*(x474+x475))/x476);

	if (t80 != 1410593728LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x482 = 1;
	volatile uint8_t x483 = 6U;
	volatile int8_t x484 = 1;
	volatile int32_t t81 = 7043;

	t81 = ((x481*(x482+x483))/x484);

	if (t81 != 56) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x489 = -1;
	int64_t x490 = INT64_MIN;
	uint16_t x491 = 1U;
	int16_t x492 = INT16_MIN;
	volatile int64_t t82 = -7992913072LL;

	t82 = ((x489*(x490+x491))/x492);

	if (t82 != -281474976710655LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x493 = 1844U;
	int8_t x494 = INT8_MIN;
	int16_t x495 = -893;
	static int16_t x496 = -3;

	t83 = ((x493*(x494+x495))/x496);

	if (t83 != 627574) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x501 = INT8_MAX;
	static uint32_t x502 = 201842797U;
	static volatile int8_t x504 = INT8_MIN;
	volatile uint32_t t84 = 10U;

	t84 = ((x501*(x502+x503))/x504);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x505 = INT16_MIN;
	uint64_t x506 = UINT64_MAX;
	int32_t x507 = 127405262;
	int16_t x508 = INT16_MIN;
	volatile uint64_t t85 = 96028552347180418LLU;

	t85 = ((x505*(x506+x507))/x508);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x509 = -1;
	int16_t x512 = INT16_MAX;
	volatile int32_t t86 = 248;

	t86 = ((x509*(x510+x511))/x512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x517 = 25;
	uint16_t x518 = UINT16_MAX;
	static uint16_t x519 = UINT16_MAX;
	uint8_t x520 = 3U;
	int32_t t87 = -185635;

	t87 = ((x517*(x518+x519))/x520);

	if (t87 != 1092250) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x529 = UINT64_MAX;
	volatile uint16_t x530 = 6U;
	int64_t x531 = -1063344140103LL;
	int32_t x532 = -6522;
	uint64_t t88 = 2725968688LLU;

	t88 = ((x529*(x530+x531))/x532);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x533 = UINT32_MAX;
	static uint64_t x534 = 870480534297LLU;
	volatile uint32_t x535 = 1840345274U;
	int32_t x536 = INT32_MAX;
	static uint64_t t89 = 38919LLU;

	t89 = ((x533*(x534+x535))/x536);

	if (t89 != 885036560LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x537 = -226067;
	volatile int64_t x538 = 974607760LL;
	int16_t x540 = INT16_MAX;
	volatile int64_t t90 = -1LL;

	t90 = ((x537*(x538+x539))/x540);

	if (t90 != -446375809055LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x541 = INT8_MAX;
	volatile uint8_t x542 = 5U;
	int16_t x543 = 685;
	uint8_t x544 = 42U;
	volatile int32_t t91 = -530;

	t91 = ((x541*(x542+x543))/x544);

	if (t91 != 2086) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x561 = 1;
	int16_t x562 = INT16_MIN;
	uint16_t x563 = 29U;
	int16_t x564 = INT16_MIN;
	volatile int32_t t92 = -233157727;

	t92 = ((x561*(x562+x563))/x564);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x569 = INT64_MIN;
	static volatile uint64_t x570 = UINT64_MAX;
	uint8_t x571 = 7U;
	uint64_t t93 = 24065305LLU;

	t93 = ((x569*(x570+x571))/x572);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x573 = UINT32_MAX;
	int16_t x574 = INT16_MIN;
	uint16_t x576 = UINT16_MAX;
	uint32_t t94 = 5U;

	t94 = ((x573*(x574+x575))/x576);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x579 = INT16_MAX;
	static uint16_t x580 = UINT16_MAX;

	t95 = ((x577*(x578+x579))/x580);

	if (t95 != -63) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x581 = -1;
	int16_t x582 = INT16_MAX;
	static volatile uint8_t x583 = 7U;
	volatile int64_t t96 = 62LL;

	t96 = ((x581*(x582+x583))/x584);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x585 = -1;
	static int32_t x586 = -1;
	int64_t x587 = 6091LL;
	int8_t x588 = -1;
	static int64_t t97 = 50923LL;

	t97 = ((x585*(x586+x587))/x588);

	if (t97 != 6090LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x594 = UINT32_MAX;
	int16_t x595 = INT16_MIN;
	uint32_t x596 = 17408698U;
	uint32_t t98 = 409324727U;

	t98 = ((x593*(x594+x595))/x596);

	if (t98 != 246U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x598 = UINT32_MAX;
	volatile uint64_t x599 = 3721LLU;
	int16_t x600 = INT16_MIN;
	uint64_t t99 = 357821493027406LLU;

	t99 = ((x597*(x598+x599))/x600);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

