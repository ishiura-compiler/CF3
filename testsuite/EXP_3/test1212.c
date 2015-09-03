#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = INT16_MAX;
int16_t x8 = INT16_MAX;
volatile int32_t t1 = 131016236;
volatile int8_t x14 = INT8_MAX;
int8_t x24 = INT8_MIN;
int16_t x30 = -884;
int64_t x31 = -125332377631267404LL;
uint32_t x32 = 377U;
uint16_t x36 = 116U;
uint64_t x42 = 98758927LLU;
int16_t x49 = 1;
volatile int32_t x57 = -1;
static volatile uint8_t x71 = 63U;
volatile uint8_t x84 = UINT8_MAX;
uint64_t x93 = UINT64_MAX;
volatile int64_t x124 = -479196283633702LL;
uint8_t x125 = UINT8_MAX;
int64_t x137 = -1LL;
uint8_t x141 = 32U;
int32_t x144 = INT32_MAX;
uint8_t x147 = 6U;
int16_t x153 = INT16_MIN;
int8_t x154 = INT8_MAX;
volatile int16_t x155 = -599;
uint8_t x168 = 1U;
int8_t x170 = INT8_MIN;
int32_t x178 = INT32_MIN;
volatile uint64_t x179 = 13666732015LLU;
int16_t x181 = INT16_MIN;
int8_t x184 = INT8_MAX;
int16_t x187 = -1;
uint64_t x189 = 1LLU;
uint32_t x196 = UINT32_MAX;
uint8_t x198 = 33U;
static int8_t x202 = INT8_MIN;
volatile int16_t x204 = 223;
int32_t t37 = 86109886;
int8_t x205 = 0;
volatile uint64_t x207 = UINT64_MAX;
int64_t x208 = INT64_MIN;
volatile uint8_t x232 = 2U;
static volatile uint64_t t40 = 37266546549749LLU;
int8_t x238 = -57;
int16_t x239 = INT16_MIN;
uint8_t x240 = UINT8_MAX;
static volatile uint16_t x244 = 908U;
volatile uint64_t t42 = 7103452654267759242LLU;
uint8_t x253 = 6U;
uint32_t x263 = UINT32_MAX;
int64_t t46 = 64359LL;
uint32_t x269 = UINT32_MAX;
volatile uint32_t t47 = 74U;
volatile uint32_t x278 = 3U;
int32_t t51 = -126;
int32_t x294 = INT32_MAX;
uint64_t x312 = 5449137340LLU;
int32_t x321 = -1;
static int8_t x322 = -7;
uint8_t x323 = 1U;
static int8_t x328 = -1;
int64_t t57 = 795LL;
uint64_t t59 = 487052442715LLU;
uint8_t x346 = 34U;
int64_t x348 = 26711318311437LL;
static volatile uint64_t t60 = 125921523620914507LLU;
int16_t x351 = -251;
uint64_t t62 = 6557005714LLU;
static volatile uint32_t x370 = 166697780U;
int32_t t64 = 131765;
int64_t x380 = -1LL;
uint16_t x381 = 35U;
static int32_t x384 = INT32_MIN;
static int64_t x392 = -2776937381LL;
uint32_t x396 = 4739409U;
int8_t x415 = -1;
uint8_t x423 = 6U;
int8_t x424 = -24;
volatile int8_t x430 = INT8_MAX;
static volatile uint64_t x431 = 48170271505476LLU;
uint16_t x432 = 0U;
int16_t x433 = -3;
static uint32_t x436 = UINT32_MAX;
uint8_t x445 = UINT8_MAX;
int32_t t79 = -13038281;
static int8_t x449 = -1;
uint8_t x452 = 2U;
int32_t t81 = 13060;
uint32_t x462 = 3597328U;
int32_t x464 = -116;
static int16_t x467 = 0;
static int32_t x468 = INT32_MIN;
static int32_t t83 = -5733;
int8_t x483 = INT8_MAX;
static int64_t x485 = 0LL;
static uint16_t x487 = 102U;
volatile uint64_t t87 = 65458226278LLU;
uint16_t x501 = UINT16_MAX;
uint8_t x502 = 100U;
uint64_t x513 = UINT64_MAX;
volatile int32_t x540 = INT32_MIN;
int64_t x547 = 532572712LL;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	static uint8_t x2 = 58U;
	int32_t x3 = INT32_MAX;
	int32_t x4 = 318340;
	volatile int32_t t0 = 329;

	t0 = ((x1*x2)*(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -22031;
	int64_t x7 = INT64_MIN;

	t1 = ((x5*x6)*(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -21607542623282LL;
	uint8_t x10 = 1U;
	int64_t x11 = INT64_MIN;
	int16_t x12 = 109;
	int64_t t2 = 548208682300LL;

	t2 = ((x9*x10)*(x11==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = -9242LL;
	uint64_t t3 = 1LLU;

	t3 = ((x13*x14)*(x15==x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = INT64_MAX;
	volatile int16_t x20 = INT16_MIN;
	int64_t t4 = 1781949165LL;

	t4 = ((x17*x18)*(x19==x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 0;
	uint16_t x22 = UINT16_MAX;
	uint32_t x23 = 1008497103U;
	volatile int32_t t5 = -32374;

	t5 = ((x21*x22)*(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = UINT64_MAX;
	static int16_t x28 = 0;
	int32_t t6 = -3984;

	t6 = ((x25*x26)*(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int32_t t7 = -54531;

	t7 = ((x29*x30)*(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint8_t x34 = 40U;
	uint8_t x35 = 11U;
	volatile int32_t t8 = 2189;

	t8 = ((x33*x34)*(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 779;
	int8_t x38 = INT8_MAX;
	static uint64_t x39 = 4LLU;
	int64_t x40 = -452889881LL;
	static int32_t t9 = 483110561;

	t9 = ((x37*x38)*(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	volatile uint64_t x43 = 0LLU;
	int32_t x44 = INT32_MIN;
	uint64_t t10 = 43309LLU;

	t10 = ((x41*x42)*(x43==x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = INT64_MAX;
	int32_t x51 = INT32_MAX;
	static volatile int64_t x52 = -3896972668783771LL;
	int64_t t11 = -1919444335837LL;

	t11 = ((x49*x50)*(x51==x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = 0;
	static uint64_t x59 = 373LLU;
	static int8_t x60 = 18;
	int32_t t12 = -3;

	t12 = ((x57*x58)*(x59==x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 20479884464968LLU;
	int64_t x66 = -11914942992LL;
	static int16_t x67 = -6513;
	uint16_t x68 = 46U;
	uint64_t t13 = 10LLU;

	t13 = ((x65*x66)*(x67==x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 1;
	int8_t x70 = 1;
	static uint32_t x72 = UINT32_MAX;
	int32_t t14 = -226;

	t14 = ((x69*x70)*(x71==x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MIN;
	volatile uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MAX;
	uint16_t x76 = 67U;
	volatile uint32_t t15 = 19076797U;

	t15 = ((x73*x74)*(x75==x76));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = 6U;
	int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MIN;
	volatile int32_t t16 = 10;

	t16 = ((x81*x82)*(x83==x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x94 = INT32_MAX;
	uint32_t x95 = 5074U;
	static int8_t x96 = INT8_MIN;
	uint64_t t17 = 23396072221209789LLU;

	t17 = ((x93*x94)*(x95==x96));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = 586U;
	int32_t x98 = 39;
	int16_t x99 = 1;
	int16_t x100 = INT16_MAX;
	int32_t t18 = -291;

	t18 = ((x97*x98)*(x99==x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = -1676;
	int8_t x110 = -28;
	int16_t x111 = 775;
	volatile uint64_t x112 = 10593436711LLU;
	int32_t t19 = -4783;

	t19 = ((x109*x110)*(x111==x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x117 = 8U;
	uint64_t x118 = 7666300994LLU;
	int8_t x119 = INT8_MAX;
	uint64_t x120 = 113188403774173LLU;
	volatile uint64_t t20 = 42155093297457123LLU;

	t20 = ((x117*x118)*(x119==x120));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 81U;
	int16_t x122 = -1;
	static int64_t x123 = INT64_MIN;
	volatile uint32_t t21 = 1277U;

	t21 = ((x121*x122)*(x123==x124));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x126 = 398LLU;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 19U;
	volatile uint64_t t22 = 228LLU;

	t22 = ((x125*x126)*(x127==x128));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x129 = 1525U;
	uint16_t x130 = UINT16_MAX;
	static int64_t x131 = -953315101LL;
	int8_t x132 = INT8_MIN;
	int32_t t23 = -577917;

	t23 = ((x129*x130)*(x131==x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x138 = 215485LLU;
	int16_t x139 = -5;
	static int16_t x140 = INT16_MAX;
	static uint64_t t24 = 359653790718418261LLU;

	t24 = ((x137*x138)*(x139==x140));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x142 = 3186686194127522LLU;
	int8_t x143 = INT8_MAX;
	volatile uint64_t t25 = 911295088LLU;

	t25 = ((x141*x142)*(x143==x144));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x145 = -7893;
	int8_t x146 = -1;
	static uint8_t x148 = 56U;
	int32_t t26 = 1;

	t26 = ((x145*x146)*(x147==x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x149 = INT8_MIN;
	int8_t x150 = 31;
	int8_t x151 = INT8_MAX;
	volatile int64_t x152 = 4489490843201405712LL;
	int32_t t27 = -5;

	t27 = ((x149*x150)*(x151==x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t28 = -1;

	t28 = ((x153*x154)*(x155==x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x165 = -33;
	uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 3U;
	uint32_t t29 = 89524U;

	t29 = ((x165*x166)*(x167==x168));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x169 = INT8_MIN;
	int8_t x171 = -1;
	volatile uint32_t x172 = 63731959U;
	int32_t t30 = -26258;

	t30 = ((x169*x170)*(x171==x172));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x177 = 0U;
	uint32_t x180 = UINT32_MAX;
	static int32_t t31 = 100707895;

	t31 = ((x177*x178)*(x179==x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x182 = -1;
	uint8_t x183 = 26U;
	volatile int32_t t32 = 0;

	t32 = ((x181*x182)*(x183==x184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x185 = 2U;
	int8_t x186 = INT8_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t33 = -31;

	t33 = ((x185*x186)*(x187==x188));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x190 = INT16_MIN;
	int16_t x191 = -5;
	int8_t x192 = 8;
	volatile uint64_t t34 = 16316818432LLU;

	t34 = ((x189*x190)*(x191==x192));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x193 = 1U;
	int64_t x194 = INT64_MAX;
	int16_t x195 = -1;
	volatile int64_t t35 = INT64_MAX;

	t35 = ((x193*x194)*(x195==x196));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = -511LL;
	uint64_t x199 = 538363363846224988LLU;
	uint32_t x200 = UINT32_MAX;
	int64_t t36 = 3368479244738598973LL;

	t36 = ((x197*x198)*(x199==x200));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x201 = INT8_MIN;
	int16_t x203 = -5083;

	t37 = ((x201*x202)*(x203==x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x206 = INT16_MAX;
	int32_t t38 = 25;

	t38 = ((x205*x206)*(x207==x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = 0;
	int64_t x230 = -1LL;
	volatile int32_t x231 = INT32_MAX;
	int64_t t39 = 12711092LL;

	t39 = ((x229*x230)*(x231==x232));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x233 = 5753LLU;
	int8_t x234 = -59;
	volatile uint32_t x235 = 41216919U;
	static int8_t x236 = INT8_MIN;

	t40 = ((x233*x234)*(x235==x236));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x237 = 15507U;
	volatile uint32_t t41 = 6U;

	t41 = ((x237*x238)*(x239==x240));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x241 = 0;
	static uint64_t x242 = UINT64_MAX;
	uint16_t x243 = 0U;

	t42 = ((x241*x242)*(x243==x244));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x245 = 365502;
	int8_t x246 = INT8_MIN;
	uint64_t x247 = 135139497512LLU;
	int8_t x248 = INT8_MAX;
	int32_t t43 = 4380522;

	t43 = ((x245*x246)*(x247==x248));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x254 = 363703956530LLU;
	static int16_t x255 = 93;
	int16_t x256 = INT16_MIN;
	uint64_t t44 = 2570LLU;

	t44 = ((x253*x254)*(x255==x256));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x257 = -3241LL;
	int8_t x258 = INT8_MIN;
	static int8_t x259 = -2;
	uint64_t x260 = 445LLU;
	static int64_t t45 = -161542769463608LL;

	t45 = ((x257*x258)*(x259==x260));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x261 = -1LL;
	uint32_t x262 = UINT32_MAX;
	int16_t x264 = INT16_MIN;

	t46 = ((x261*x262)*(x263==x264));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x270 = 0;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 347U;

	t47 = ((x269*x270)*(x271==x272));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x277 = 8543U;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = -3;
	static volatile uint32_t t48 = 1953U;

	t48 = ((x277*x278)*(x279==x280));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x281 = -1;
	static volatile int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	int32_t x284 = -26028261;
	int32_t t49 = -2265514;

	t49 = ((x281*x282)*(x283==x284));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x285 = 43694LL;
	static uint64_t x286 = 7172065636044LLU;
	uint64_t x287 = 36749890473520LLU;
	uint16_t x288 = UINT16_MAX;
	volatile uint64_t t50 = 389LLU;

	t50 = ((x285*x286)*(x287==x288));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x289 = -1;
	int8_t x290 = -1;
	int32_t x291 = INT32_MAX;
	int8_t x292 = INT8_MAX;

	t51 = ((x289*x290)*(x291==x292));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x293 = UINT32_MAX;
	int16_t x295 = INT16_MIN;
	static int64_t x296 = INT64_MAX;
	uint32_t t52 = 1004U;

	t52 = ((x293*x294)*(x295==x296));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x301 = UINT16_MAX;
	uint64_t x302 = 87LLU;
	uint16_t x303 = 1U;
	int8_t x304 = -2;
	volatile uint64_t t53 = 519073177425LLU;

	t53 = ((x301*x302)*(x303==x304));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = 890U;
	int16_t x307 = 12413;
	uint16_t x308 = 11U;
	volatile int32_t t54 = 853760706;

	t54 = ((x305*x306)*(x307==x308));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x309 = 1U;
	uint32_t x310 = UINT32_MAX;
	static int32_t x311 = INT32_MIN;
	volatile uint32_t t55 = 6466890U;

	t55 = ((x309*x310)*(x311==x312));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x324 = 44U;
	volatile int32_t t56 = 23331;

	t56 = ((x321*x322)*(x323==x324));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x325 = -560920;
	int64_t x326 = -5634964954LL;
	int8_t x327 = -31;

	t57 = ((x325*x326)*(x327==x328));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x337 = INT64_MAX;
	uint64_t x338 = 84642LLU;
	int8_t x339 = INT8_MAX;
	uint16_t x340 = 11808U;
	volatile uint64_t t58 = 14742LLU;

	t58 = ((x337*x338)*(x339==x340));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x341 = INT64_MIN;
	uint64_t x342 = UINT64_MAX;
	volatile uint8_t x343 = UINT8_MAX;
	volatile int8_t x344 = -1;

	t59 = ((x341*x342)*(x343==x344));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x345 = UINT64_MAX;
	static int32_t x347 = 106266062;

	t60 = ((x345*x346)*(x347==x348));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x350 = 12;
	uint16_t x352 = 7U;
	uint32_t t61 = 25083U;

	t61 = ((x349*x350)*(x351==x352));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x365 = 5604LL;
	uint64_t x366 = UINT64_MAX;
	uint16_t x367 = 5852U;
	int16_t x368 = INT16_MIN;

	t62 = ((x365*x366)*(x367==x368));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x369 = 45U;
	static volatile int16_t x371 = -1;
	int32_t x372 = -1;
	uint32_t t63 = 27488U;

	t63 = ((x369*x370)*(x371==x372));

	if (t63 != 3206432804U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x373 = 27U;
	uint8_t x374 = 2U;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MAX;

	t64 = ((x373*x374)*(x375==x376));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x377 = 15U;
	static int16_t x378 = INT16_MIN;
	uint32_t x379 = 15U;
	volatile int32_t t65 = -754;

	t65 = ((x377*x378)*(x379==x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x382 = INT16_MAX;
	static volatile uint64_t x383 = UINT64_MAX;
	int32_t t66 = 11722456;

	t66 = ((x381*x382)*(x383==x384));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x385 = UINT8_MAX;
	volatile uint8_t x386 = 8U;
	int32_t x387 = 101594;
	int16_t x388 = INT16_MAX;
	volatile int32_t t67 = 630468387;

	t67 = ((x385*x386)*(x387==x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x389 = INT8_MIN;
	static int32_t x390 = -1;
	uint32_t x391 = 673412U;
	volatile int32_t t68 = -4762126;

	t68 = ((x389*x390)*(x391==x392));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x393 = 17130U;
	uint16_t x394 = 6477U;
	uint8_t x395 = 29U;
	int32_t t69 = 4508;

	t69 = ((x393*x394)*(x395==x396));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	int8_t x399 = INT8_MAX;
	static volatile int16_t x400 = INT16_MIN;
	volatile int32_t t70 = 483264367;

	t70 = ((x397*x398)*(x399==x400));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x405 = 7025U;
	int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MIN;
	int8_t x408 = 0;
	uint32_t t71 = 456U;

	t71 = ((x405*x406)*(x407==x408));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x413 = -1;
	int32_t x414 = 224876436;
	int8_t x416 = INT8_MIN;
	volatile int32_t t72 = -15372015;

	t72 = ((x413*x414)*(x415==x416));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x417 = 2U;
	uint8_t x418 = 1U;
	int16_t x419 = INT16_MIN;
	int16_t x420 = -18;
	int32_t t73 = 2;

	t73 = ((x417*x418)*(x419==x420));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	volatile int32_t t74 = -256;

	t74 = ((x421*x422)*(x423==x424));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x425 = 10;
	static uint32_t x426 = 855275018U;
	volatile uint8_t x427 = 1U;
	volatile int32_t x428 = 52274;
	uint32_t t75 = 26379510U;

	t75 = ((x425*x426)*(x427==x428));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x429 = 37U;
	int32_t t76 = -309331345;

	t76 = ((x429*x430)*(x431==x432));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x434 = 349LLU;
	int16_t x435 = -1;
	uint64_t t77 = 256502968201614149LLU;

	t77 = ((x433*x434)*(x435==x436));

	if (t77 != 18446744073709550569LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x441 = -1;
	int32_t x442 = INT32_MAX;
	static int64_t x443 = INT64_MAX;
	volatile uint16_t x444 = 5708U;
	volatile int32_t t78 = -44685099;

	t78 = ((x441*x442)*(x443==x444));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x446 = UINT16_MAX;
	int16_t x447 = INT16_MAX;
	static int32_t x448 = INT32_MIN;

	t79 = ((x445*x446)*(x447==x448));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x450 = UINT16_MAX;
	static int64_t x451 = 4171023738699LL;
	int32_t t80 = 245914302;

	t80 = ((x449*x450)*(x451==x452));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x453 = 0;
	int8_t x454 = -1;
	volatile uint64_t x455 = 13LLU;
	int8_t x456 = 0;

	t81 = ((x453*x454)*(x455==x456));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x461 = 76U;
	uint16_t x463 = UINT16_MAX;
	static uint32_t t82 = 1528048U;

	t82 = ((x461*x462)*(x463==x464));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x465 = INT8_MIN;
	uint16_t x466 = 1184U;

	t83 = ((x465*x466)*(x467==x468));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x477 = UINT16_MAX;
	int8_t x478 = -1;
	static uint32_t x479 = UINT32_MAX;
	static int8_t x480 = INT8_MAX;
	int32_t t84 = 1;

	t84 = ((x477*x478)*(x479==x480));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x481 = 15U;
	int16_t x482 = INT16_MIN;
	int64_t x484 = INT64_MIN;
	int32_t t85 = 5;

	t85 = ((x481*x482)*(x483==x484));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x486 = 10097;
	uint32_t x488 = 94U;
	int64_t t86 = -357371778954481LL;

	t86 = ((x485*x486)*(x487==x488));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x489 = 13954269209599LLU;
	static volatile int32_t x490 = -56566;
	int16_t x491 = -1;
	int32_t x492 = INT32_MIN;

	t87 = ((x489*x490)*(x491==x492));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x493 = 197328589;
	static int8_t x494 = -1;
	uint32_t x495 = 26928U;
	int64_t x496 = -24328493LL;
	static volatile int32_t t88 = 20497923;

	t88 = ((x493*x494)*(x495==x496));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x503 = INT8_MAX;
	int32_t x504 = -215896;
	int32_t t89 = 1291245;

	t89 = ((x501*x502)*(x503==x504));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x505 = -7;
	static uint64_t x506 = 6724406390LLU;
	uint64_t x507 = 4LLU;
	static volatile uint16_t x508 = 23U;
	volatile uint64_t t90 = 4640295225LLU;

	t90 = ((x505*x506)*(x507==x508));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x514 = 2;
	static int64_t x515 = INT64_MAX;
	static uint8_t x516 = 3U;
	volatile uint64_t t91 = 178304717906517LLU;

	t91 = ((x513*x514)*(x515==x516));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x517 = 1;
	volatile uint16_t x518 = UINT16_MAX;
	static int16_t x519 = 0;
	int16_t x520 = INT16_MIN;
	volatile int32_t t92 = -19;

	t92 = ((x517*x518)*(x519==x520));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x521 = 0U;
	int8_t x522 = -1;
	uint8_t x523 = 0U;
	uint32_t x524 = 289078U;
	volatile int32_t t93 = 0;

	t93 = ((x521*x522)*(x523==x524));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x525 = -1;
	static uint64_t x526 = UINT64_MAX;
	int16_t x527 = 0;
	int16_t x528 = INT16_MIN;
	volatile uint64_t t94 = 490193206310LLU;

	t94 = ((x525*x526)*(x527==x528));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x533 = 563995330U;
	uint16_t x534 = 3U;
	uint64_t x535 = UINT64_MAX;
	uint8_t x536 = UINT8_MAX;
	uint32_t t95 = 3778U;

	t95 = ((x533*x534)*(x535==x536));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x537 = -1LL;
	static int8_t x538 = -1;
	static int16_t x539 = -1;
	int64_t t96 = 1772348LL;

	t96 = ((x537*x538)*(x539==x540));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x541 = -1;
	int8_t x542 = -1;
	int64_t x543 = 5158LL;
	int64_t x544 = INT64_MIN;
	volatile int32_t t97 = -8598384;

	t97 = ((x541*x542)*(x543==x544));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x545 = -1;
	volatile int32_t x546 = -1;
	int32_t x548 = INT32_MIN;
	volatile int32_t t98 = 22479150;

	t98 = ((x545*x546)*(x547==x548));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x549 = INT16_MAX;
	int64_t x550 = -108045706LL;
	static int8_t x551 = INT8_MIN;
	int32_t x552 = INT32_MIN;
	int64_t t99 = 10493689LL;

	t99 = ((x549*x550)*(x551==x552));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

