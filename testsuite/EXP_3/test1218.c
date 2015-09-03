#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = 60692508;
int8_t x15 = INT8_MIN;
volatile int32_t t2 = 36599752;
uint64_t x18 = 3637774101938360334LLU;
uint32_t x20 = 1993964385U;
int16_t x21 = INT16_MAX;
int16_t x22 = 2619;
static int32_t t6 = -24;
volatile int32_t t7 = 484;
int8_t x73 = INT8_MAX;
int16_t x74 = 3;
int16_t x96 = -9;
int8_t x105 = -7;
static volatile uint16_t x107 = 70U;
int32_t x108 = INT32_MIN;
static volatile int32_t t19 = 83;
uint16_t x109 = 496U;
volatile int8_t x118 = -1;
int32_t t22 = 5347;
volatile int16_t x132 = -1;
int32_t x135 = INT32_MAX;
uint32_t x136 = 0U;
volatile int32_t t25 = 2918;
volatile int8_t x137 = -1;
static volatile uint8_t x143 = UINT8_MAX;
static volatile int16_t x146 = 11;
static volatile int32_t t29 = -1049813857;
uint8_t x156 = UINT8_MAX;
int32_t x166 = -1;
static int16_t x167 = INT16_MAX;
volatile int32_t t32 = -232;
uint8_t x171 = UINT8_MAX;
static int16_t x173 = INT16_MAX;
int64_t x174 = -1LL;
int64_t x200 = -761983745767LL;
uint8_t x206 = 0U;
static int64_t x208 = -8154678880268LL;
uint16_t x218 = UINT16_MAX;
int32_t x234 = INT32_MIN;
uint16_t x236 = 537U;
static int8_t x243 = INT8_MAX;
static volatile uint64_t x244 = 103549016665062113LLU;
int32_t t41 = 32971;
uint16_t x254 = 1U;
int16_t x255 = INT16_MIN;
int32_t x260 = -1;
volatile int32_t t45 = -6148;
volatile uint8_t x269 = 30U;
static int32_t t47 = 1;
uint32_t x282 = UINT32_MAX;
int16_t x283 = INT16_MIN;
static volatile int32_t t50 = 0;
int64_t x310 = -1LL;
static int16_t x316 = 2085;
volatile int32_t t58 = -306505189;
static uint8_t x340 = UINT8_MAX;
int8_t x345 = INT8_MIN;
int8_t x346 = INT8_MIN;
volatile int8_t x362 = INT8_MAX;
int16_t x368 = 0;
static uint64_t x373 = 171575077LLU;
static volatile int32_t t64 = 3068296;
int32_t x385 = -1;
static volatile uint16_t x387 = 26U;
int64_t x389 = -1LL;
int32_t x391 = -8181265;
int16_t x395 = -9;
uint16_t x400 = 2U;
int64_t x402 = INT64_MAX;
volatile int32_t t71 = -6310;
uint16_t x409 = 3232U;
uint16_t x412 = 7U;
int8_t x413 = -1;
volatile uint16_t x414 = UINT16_MAX;
int16_t x416 = -674;
static uint16_t x422 = 1U;
int64_t x442 = -1LL;
volatile int8_t x452 = -58;
int16_t x459 = -1;
volatile int8_t x464 = -1;
uint8_t x465 = 0U;
volatile int16_t x479 = INT16_MIN;
uint32_t x487 = 3586297U;
uint8_t x502 = 0U;
uint8_t x505 = 3U;
volatile int32_t x507 = INT32_MAX;
volatile int32_t t93 = 399874288;
int32_t x510 = 1;
int64_t x511 = INT64_MIN;
static int16_t x520 = INT16_MIN;
volatile int64_t x527 = -207711256348483206LL;
int32_t x529 = -45;
uint64_t x534 = 239735501LLU;
int32_t x535 = INT32_MAX;
uint16_t x536 = UINT16_MAX;


void f0(void) {
	int8_t x1 = -1;
	int64_t x2 = 41278336510125681LL;
	int64_t x3 = -583825260LL;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = -752695918;

	t0 = ((x1*x2)<(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = UINT8_MAX;
	volatile uint64_t x10 = UINT64_MAX;
	static int64_t x11 = -67475722922LL;
	volatile int32_t t1 = 7103426;

	t1 = ((x9*x10)<(x11==x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -86884993LL;
	uint64_t x14 = UINT64_MAX;
	volatile uint32_t x16 = 190413U;

	t2 = ((x13*x14)<(x15==x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 14540U;
	volatile int8_t x19 = 11;
	int32_t t3 = 221636;

	t3 = ((x17*x18)<(x19==x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x23 = INT64_MIN;
	uint64_t x24 = 639LLU;
	static int32_t t4 = -4659;

	t4 = ((x21*x22)<(x23==x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	uint8_t x30 = 4U;
	int64_t x31 = INT64_MAX;
	uint64_t x32 = 833615052LLU;
	int32_t t5 = 225065;

	t5 = ((x29*x30)<(x31==x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x33 = 104U;
	static volatile uint32_t x34 = 9234U;
	static int32_t x35 = INT32_MIN;
	int8_t x36 = 24;

	t6 = ((x33*x34)<(x35==x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 1;
	static int8_t x38 = INT8_MIN;
	uint64_t x39 = 4176576076088171917LLU;
	uint16_t x40 = 1888U;

	t7 = ((x37*x38)<(x39==x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = INT8_MIN;
	volatile int16_t x42 = -249;
	static int8_t x43 = -31;
	static int8_t x44 = INT8_MIN;
	int32_t t8 = -806;

	t8 = ((x41*x42)<(x43==x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 2735U;
	static volatile uint8_t x50 = 1U;
	int8_t x51 = 46;
	int16_t x52 = -3;
	volatile int32_t t9 = -153201666;

	t9 = ((x49*x50)<(x51==x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = 3;
	int64_t x54 = -1LL;
	volatile uint32_t x55 = 125724810U;
	uint64_t x56 = 16307173621LLU;
	int32_t t10 = 64109;

	t10 = ((x53*x54)<(x55==x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = 1;
	int16_t x58 = 189;
	static uint32_t x59 = 7U;
	static uint32_t x60 = 816U;
	volatile int32_t t11 = 3965538;

	t11 = ((x57*x58)<(x59==x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 27723224U;
	int8_t x62 = -1;
	int8_t x63 = -15;
	volatile int32_t x64 = INT32_MAX;
	int32_t t12 = -908834083;

	t12 = ((x61*x62)<(x63==x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 1U;
	static int64_t x70 = INT64_MIN;
	int64_t x71 = -58378877LL;
	volatile int64_t x72 = INT64_MAX;
	static volatile int32_t t13 = -1851;

	t13 = ((x69*x70)<(x71==x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	volatile int32_t t14 = 1695418;

	t14 = ((x73*x74)<(x75==x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x81 = 7;
	static uint16_t x82 = 1U;
	int64_t x83 = -128488251671583250LL;
	int64_t x84 = INT64_MIN;
	int32_t t15 = -107924282;

	t15 = ((x81*x82)<(x83==x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = 180LL;
	volatile int16_t x86 = -14;
	static volatile int32_t x87 = INT32_MIN;
	int64_t x88 = -1LL;
	int32_t t16 = 24684615;

	t16 = ((x85*x86)<(x87==x88));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = -35;
	uint32_t x90 = 1269924579U;
	uint8_t x91 = 50U;
	volatile int16_t x92 = INT16_MAX;
	int32_t t17 = -488358619;

	t17 = ((x89*x90)<(x91==x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x93 = INT32_MIN;
	uint64_t x94 = 980222288576982158LLU;
	int32_t x95 = INT32_MIN;
	int32_t t18 = -5;

	t18 = ((x93*x94)<(x95==x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x106 = 11386126553270LLU;

	t19 = ((x105*x106)<(x107==x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x110 = -44;
	uint8_t x111 = UINT8_MAX;
	static int64_t x112 = INT64_MAX;
	volatile int32_t t20 = 30;

	t20 = ((x109*x110)<(x111==x112));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = UINT32_MAX;
	volatile uint8_t x119 = 51U;
	int16_t x120 = -1;
	static volatile int32_t t21 = -138018936;

	t21 = ((x117*x118)<(x119==x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x121 = 17326LLU;
	int64_t x122 = INT64_MAX;
	int32_t x123 = -6;
	volatile int16_t x124 = -90;

	t22 = ((x121*x122)<(x123==x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x125 = INT8_MIN;
	volatile int64_t x126 = -20087895360842110LL;
	int32_t x127 = -38485042;
	uint16_t x128 = 1U;
	volatile int32_t t23 = -14270;

	t23 = ((x125*x126)<(x127==x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x129 = 818060448516527243LLU;
	volatile int16_t x130 = -1;
	int64_t x131 = INT64_MAX;
	volatile int32_t t24 = 6268115;

	t24 = ((x129*x130)<(x131==x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x133 = 1;
	static uint8_t x134 = 5U;

	t25 = ((x133*x134)<(x135==x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x138 = -177;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 4635U;
	volatile int32_t t26 = -1023;

	t26 = ((x137*x138)<(x139==x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x141 = 13U;
	int16_t x142 = -7678;
	int32_t x144 = -1242010;
	static volatile int32_t t27 = -6644;

	t27 = ((x141*x142)<(x143==x144));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x145 = 2U;
	static int32_t x147 = -1;
	static uint64_t x148 = UINT64_MAX;
	volatile int32_t t28 = -1048056;

	t28 = ((x145*x146)<(x147==x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = INT8_MIN;
	int64_t x150 = 2383808652637LL;
	uint16_t x151 = 0U;
	uint64_t x152 = UINT64_MAX;

	t29 = ((x149*x150)<(x151==x152));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x153 = INT64_MAX;
	int32_t x154 = -1;
	static volatile int8_t x155 = INT8_MIN;
	int32_t t30 = -18505283;

	t30 = ((x153*x154)<(x155==x156));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x161 = 151068U;
	static uint32_t x162 = 636434U;
	int32_t x163 = INT32_MAX;
	uint16_t x164 = UINT16_MAX;
	int32_t t31 = 1;

	t31 = ((x161*x162)<(x163==x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = 1023;
	int64_t x168 = INT64_MAX;

	t32 = ((x165*x166)<(x167==x168));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x169 = -1;
	int8_t x170 = -63;
	int32_t x172 = -6979836;
	int32_t t33 = 4351677;

	t33 = ((x169*x170)<(x171==x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x175 = -3;
	volatile int8_t x176 = -1;
	int32_t t34 = 1;

	t34 = ((x173*x174)<(x175==x176));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x189 = 106U;
	static uint16_t x190 = 4U;
	int16_t x191 = -192;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t35 = 1;

	t35 = ((x189*x190)<(x191==x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MIN;
	int8_t x199 = -1;
	static volatile int32_t t36 = 17578660;

	t36 = ((x197*x198)<(x199==x200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x205 = INT16_MIN;
	int32_t x207 = -1353;
	int32_t t37 = 15483721;

	t37 = ((x205*x206)<(x207==x208));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x217 = 167U;
	uint64_t x219 = 121080413282898028LLU;
	static int16_t x220 = -1;
	volatile int32_t t38 = -2367;

	t38 = ((x217*x218)<(x219==x220));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x221 = 936525162528334LLU;
	int16_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	static volatile int64_t x224 = -49490380216917LL;
	int32_t t39 = 41926541;

	t39 = ((x221*x222)<(x223==x224));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x233 = UINT32_MAX;
	int64_t x235 = -467932571727736450LL;
	int32_t t40 = 253;

	t40 = ((x233*x234)<(x235==x236));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = INT32_MIN;
	uint32_t x242 = 1666422U;

	t41 = ((x241*x242)<(x243==x244));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x245 = INT64_MAX;
	uint8_t x246 = 1U;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	volatile int32_t t42 = -207235;

	t42 = ((x245*x246)<(x247==x248));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = -441211LL;
	int8_t x250 = INT8_MAX;
	int32_t x251 = 928097951;
	uint32_t x252 = 765400810U;
	volatile int32_t t43 = -1745;

	t43 = ((x249*x250)<(x251==x252));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x253 = -1991183577413557LL;
	volatile int16_t x256 = -1;
	volatile int32_t t44 = 577426;

	t44 = ((x253*x254)<(x255==x256));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x257 = 1140U;
	int16_t x258 = INT16_MAX;
	static uint32_t x259 = UINT32_MAX;

	t45 = ((x257*x258)<(x259==x260));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x270 = -33866;
	volatile uint64_t x271 = 1LLU;
	static int32_t x272 = -4719518;
	int32_t t46 = 3996100;

	t46 = ((x269*x270)<(x271==x272));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x273 = -1;
	uint8_t x274 = 3U;
	volatile uint16_t x275 = 726U;
	volatile int32_t x276 = 1048579264;

	t47 = ((x273*x274)<(x275==x276));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x281 = 1;
	int16_t x284 = -1;
	volatile int32_t t48 = -50053;

	t48 = ((x281*x282)<(x283==x284));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x285 = UINT32_MAX;
	uint16_t x286 = 300U;
	uint32_t x287 = 5U;
	static int8_t x288 = 1;
	volatile int32_t t49 = 1;

	t49 = ((x285*x286)<(x287==x288));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x293 = INT8_MAX;
	volatile int32_t x294 = 1950;
	int16_t x295 = INT16_MIN;
	static int32_t x296 = -1;

	t50 = ((x293*x294)<(x295==x296));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x297 = -1;
	int64_t x298 = -1LL;
	uint64_t x299 = UINT64_MAX;
	uint32_t x300 = 3U;
	int32_t t51 = 10;

	t51 = ((x297*x298)<(x299==x300));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x301 = 20U;
	volatile uint32_t x302 = 12U;
	volatile uint64_t x303 = UINT64_MAX;
	int16_t x304 = 41;
	int32_t t52 = -2087;

	t52 = ((x301*x302)<(x303==x304));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x305 = INT8_MIN;
	int16_t x306 = -23;
	uint8_t x307 = 25U;
	static int8_t x308 = -6;
	static int32_t t53 = 52889;

	t53 = ((x305*x306)<(x307==x308));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x309 = -1;
	int32_t x311 = INT32_MIN;
	static int32_t x312 = INT32_MIN;
	int32_t t54 = 1533254;

	t54 = ((x309*x310)<(x311==x312));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x313 = INT16_MIN;
	int8_t x314 = 6;
	int32_t x315 = -1;
	volatile int32_t t55 = -257;

	t55 = ((x313*x314)<(x315==x316));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x317 = UINT64_MAX;
	int8_t x318 = -21;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	int32_t t56 = 26670277;

	t56 = ((x317*x318)<(x319==x320));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x321 = 0;
	volatile uint32_t x322 = UINT32_MAX;
	volatile uint8_t x323 = UINT8_MAX;
	int64_t x324 = INT64_MIN;
	volatile int32_t t57 = -4140;

	t57 = ((x321*x322)<(x323==x324));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x333 = -3956657LL;
	int8_t x334 = INT8_MIN;
	uint64_t x335 = 7377892866274402LLU;
	int64_t x336 = INT64_MIN;

	t58 = ((x333*x334)<(x335==x336));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x337 = 59;
	volatile int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	static int32_t t59 = 9;

	t59 = ((x337*x338)<(x339==x340));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x347 = INT8_MIN;
	volatile uint8_t x348 = UINT8_MAX;
	volatile int32_t t60 = -481647;

	t60 = ((x345*x346)<(x347==x348));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x361 = INT8_MAX;
	uint16_t x363 = 49U;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t61 = 585180033;

	t61 = ((x361*x362)<(x363==x364));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x365 = -1206;
	static uint64_t x366 = 474LLU;
	int16_t x367 = -1;
	volatile int32_t t62 = -38855;

	t62 = ((x365*x366)<(x367==x368));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x369 = -1;
	volatile int64_t x370 = -62426035LL;
	volatile int8_t x371 = INT8_MAX;
	int64_t x372 = INT64_MAX;
	int32_t t63 = 1975478;

	t63 = ((x369*x370)<(x371==x372));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x374 = -2785374404522525675LL;
	uint32_t x375 = 85970961U;
	int32_t x376 = 3810004;

	t64 = ((x373*x374)<(x375==x376));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x377 = INT16_MIN;
	volatile uint64_t x378 = 31123LLU;
	int16_t x379 = 4;
	static volatile int16_t x380 = INT16_MAX;
	volatile int32_t t65 = 7;

	t65 = ((x377*x378)<(x379==x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	static uint64_t x383 = 0LLU;
	volatile int64_t x384 = -884603552LL;
	static volatile int32_t t66 = -3887;

	t66 = ((x381*x382)<(x383==x384));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x386 = INT8_MIN;
	uint32_t x388 = 6U;
	int32_t t67 = 432632041;

	t67 = ((x385*x386)<(x387==x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x390 = INT8_MAX;
	int64_t x392 = 12372LL;
	int32_t t68 = 229079195;

	t68 = ((x389*x390)<(x391==x392));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x393 = -1;
	int16_t x394 = INT16_MAX;
	static volatile int64_t x396 = INT64_MIN;
	volatile int32_t t69 = 14;

	t69 = ((x393*x394)<(x395==x396));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x397 = 5U;
	static uint16_t x398 = 1U;
	int8_t x399 = INT8_MIN;
	int32_t t70 = -484315;

	t70 = ((x397*x398)<(x399==x400));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x401 = -1;
	volatile int32_t x403 = INT32_MIN;
	uint8_t x404 = 0U;

	t71 = ((x401*x402)<(x403==x404));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x405 = 19924897;
	uint64_t x406 = 634764495314401LLU;
	volatile int64_t x407 = INT64_MIN;
	int64_t x408 = -1LL;
	volatile int32_t t72 = 77566224;

	t72 = ((x405*x406)<(x407==x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x410 = 307;
	int16_t x411 = INT16_MIN;
	static int32_t t73 = 0;

	t73 = ((x409*x410)<(x411==x412));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x415 = INT16_MIN;
	int32_t t74 = 253935549;

	t74 = ((x413*x414)<(x415==x416));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x417 = 0;
	int32_t x418 = INT32_MAX;
	int8_t x419 = -1;
	static int8_t x420 = INT8_MIN;
	int32_t t75 = -256341;

	t75 = ((x417*x418)<(x419==x420));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = 0;
	int8_t x423 = INT8_MIN;
	volatile int32_t x424 = 2;
	volatile int32_t t76 = -359807;

	t76 = ((x421*x422)<(x423==x424));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = -1;
	static volatile int8_t x426 = INT8_MIN;
	uint16_t x427 = UINT16_MAX;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t77 = -5073;

	t77 = ((x425*x426)<(x427==x428));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x437 = 6U;
	static int64_t x438 = -3994047823LL;
	static volatile uint8_t x439 = UINT8_MAX;
	uint8_t x440 = 6U;
	static volatile int32_t t78 = 1;

	t78 = ((x437*x438)<(x439==x440));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x441 = INT16_MIN;
	volatile int64_t x443 = INT64_MIN;
	uint32_t x444 = 401479U;
	int32_t t79 = 17090970;

	t79 = ((x441*x442)<(x443==x444));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x449 = INT8_MIN;
	int16_t x450 = INT16_MIN;
	int64_t x451 = 3879716LL;
	static volatile int32_t t80 = 44002;

	t80 = ((x449*x450)<(x451==x452));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x453 = INT16_MIN;
	static uint32_t x454 = UINT32_MAX;
	int8_t x455 = -10;
	int16_t x456 = INT16_MIN;
	volatile int32_t t81 = -676767;

	t81 = ((x453*x454)<(x455==x456));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x457 = 9U;
	int8_t x458 = INT8_MIN;
	volatile uint32_t x460 = 21847U;
	static volatile int32_t t82 = -42516686;

	t82 = ((x457*x458)<(x459==x460));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x461 = 452351501U;
	volatile uint32_t x462 = 7U;
	static volatile int16_t x463 = -434;
	int32_t t83 = 10949351;

	t83 = ((x461*x462)<(x463==x464));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x466 = 16107724969446148LLU;
	static uint32_t x467 = 4437303U;
	uint16_t x468 = 6301U;
	volatile int32_t t84 = 0;

	t84 = ((x465*x466)<(x467==x468));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x469 = UINT16_MAX;
	static volatile int16_t x470 = INT16_MIN;
	int8_t x471 = -1;
	int32_t x472 = INT32_MIN;
	volatile int32_t t85 = 3706011;

	t85 = ((x469*x470)<(x471==x472));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x473 = INT16_MIN;
	volatile uint16_t x474 = UINT16_MAX;
	int8_t x475 = -1;
	volatile int64_t x476 = INT64_MIN;
	int32_t t86 = -118737661;

	t86 = ((x473*x474)<(x475==x476));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x477 = 0U;
	int8_t x478 = INT8_MIN;
	static volatile int16_t x480 = INT16_MAX;
	static volatile int32_t t87 = -273564;

	t87 = ((x477*x478)<(x479==x480));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x481 = -1;
	int64_t x482 = 7949794689014365LL;
	uint16_t x483 = UINT16_MAX;
	volatile int32_t x484 = INT32_MAX;
	int32_t t88 = -14335;

	t88 = ((x481*x482)<(x483==x484));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x485 = INT8_MIN;
	volatile int16_t x486 = -11672;
	int8_t x488 = -1;
	volatile int32_t t89 = 6806;

	t89 = ((x485*x486)<(x487==x488));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x489 = INT64_MAX;
	int8_t x490 = -1;
	uint64_t x491 = 114917128004807766LLU;
	int64_t x492 = INT64_MAX;
	int32_t t90 = -247364124;

	t90 = ((x489*x490)<(x491==x492));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x493 = 24566102;
	volatile int64_t x494 = -72795024477LL;
	uint64_t x495 = 1473018472LLU;
	uint16_t x496 = 1U;
	int32_t t91 = -1826;

	t91 = ((x493*x494)<(x495==x496));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x501 = UINT32_MAX;
	int8_t x503 = 11;
	uint32_t x504 = UINT32_MAX;
	static int32_t t92 = 4;

	t92 = ((x501*x502)<(x503==x504));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x506 = 3U;
	int8_t x508 = 10;

	t93 = ((x505*x506)<(x507==x508));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x509 = UINT8_MAX;
	volatile int64_t x512 = INT64_MIN;
	static volatile int32_t t94 = 25;

	t94 = ((x509*x510)<(x511==x512));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x517 = -2;
	static volatile int16_t x518 = -1;
	static uint16_t x519 = 7U;
	static volatile int32_t t95 = -117579;

	t95 = ((x517*x518)<(x519==x520));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x521 = 9125206988335912102LLU;
	int16_t x522 = -7;
	static uint64_t x523 = 162004204128LLU;
	uint32_t x524 = 84U;
	volatile int32_t t96 = 46;

	t96 = ((x521*x522)<(x523==x524));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x525 = 136U;
	int8_t x526 = 26;
	uint8_t x528 = 102U;
	static int32_t t97 = 38367201;

	t97 = ((x525*x526)<(x527==x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x530 = UINT32_MAX;
	static int64_t x531 = INT64_MIN;
	volatile uint32_t x532 = UINT32_MAX;
	static volatile int32_t t98 = 15071;

	t98 = ((x529*x530)<(x531==x532));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x533 = -1LL;
	int32_t t99 = -61;

	t99 = ((x533*x534)<(x535==x536));

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

