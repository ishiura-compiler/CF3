#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = -1LL;
static volatile int16_t x14 = 1015;
volatile int32_t t1 = -25;
int8_t x27 = INT8_MIN;
uint8_t x29 = UINT8_MAX;
static volatile int8_t x31 = 0;
int32_t x34 = -1594;
volatile int32_t t5 = 30693660;
int64_t x38 = INT64_MAX;
volatile uint32_t x40 = 3357513U;
static int32_t t6 = -60;
volatile uint32_t x45 = 3U;
int8_t x46 = INT8_MAX;
int16_t x90 = -1;
int32_t t16 = -497;
uint32_t x124 = 906545U;
volatile int32_t t17 = 213;
uint32_t x126 = 627863478U;
int32_t t19 = -54323;
int32_t x143 = -1;
int32_t x149 = 1770;
static int32_t t22 = -730377685;
int32_t x163 = -1;
static int8_t x174 = INT8_MAX;
static int32_t t25 = -48677;
int8_t x177 = INT8_MIN;
uint16_t x179 = 95U;
int16_t x191 = -13854;
uint8_t x202 = UINT8_MAX;
int32_t t31 = -54706;
static int32_t t32 = -31884381;
volatile uint16_t x227 = 275U;
uint32_t x229 = 1824U;
static int16_t x238 = -1;
int8_t x240 = INT8_MIN;
volatile int64_t x251 = -1LL;
static volatile int32_t t38 = 9150;
static int8_t x263 = INT8_MIN;
int16_t x265 = 1;
int64_t x270 = -1804845LL;
int8_t x271 = INT8_MAX;
static int8_t x274 = INT8_MAX;
uint8_t x278 = UINT8_MAX;
int32_t x289 = -1;
int16_t x293 = -1;
int16_t x295 = INT16_MIN;
static volatile int8_t x296 = 0;
int32_t t49 = -530;
static int64_t x302 = INT64_MIN;
uint8_t x304 = 53U;
int32_t t50 = -9520160;
volatile uint64_t x315 = 114553487852554LLU;
int8_t x320 = -1;
int8_t x321 = INT8_MAX;
int16_t x328 = INT16_MAX;
int64_t x340 = INT64_MAX;
int32_t x344 = -1;
volatile int32_t t58 = 884492;
int8_t x356 = -9;
volatile uint16_t x360 = UINT16_MAX;
int16_t x368 = INT16_MIN;
static uint16_t x370 = 9U;
uint16_t x371 = UINT16_MAX;
static int32_t t64 = -1;
uint8_t x378 = 6U;
volatile int64_t x397 = -1LL;
int16_t x407 = -1;
int8_t x409 = -1;
int8_t x412 = -1;
volatile int32_t t71 = -3;
int32_t x416 = -1;
static int32_t t72 = 1;
uint16_t x420 = 645U;
volatile int32_t t73 = 467470;
uint16_t x422 = UINT16_MAX;
int8_t x424 = INT8_MIN;
uint16_t x428 = UINT16_MAX;
uint16_t x437 = 768U;
static int32_t x439 = -1;
static volatile uint32_t x442 = 651U;
int64_t x454 = -824LL;
uint64_t x455 = UINT64_MAX;
volatile int32_t x456 = -17;
static int16_t x460 = INT16_MIN;
int8_t x461 = -1;
int8_t x474 = 36;
static int32_t x476 = -1;
int32_t t83 = 13777170;
int32_t t85 = 39420616;
uint64_t x505 = 184421652LLU;
uint16_t x510 = 145U;
int8_t x513 = INT8_MIN;
uint64_t x523 = 1LLU;
static volatile int16_t x525 = 34;
int64_t x527 = 2186787735LL;
int8_t x528 = INT8_MIN;
int32_t t92 = -58305443;
uint32_t x533 = 70U;
int32_t t93 = 10193;
uint64_t x542 = 2029209823598762LLU;
volatile int32_t t95 = -10947;
uint32_t x551 = UINT32_MAX;
uint32_t x558 = 61U;
int16_t x560 = INT16_MIN;
volatile int32_t x563 = INT32_MIN;
volatile int32_t t99 = -17;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int64_t x2 = INT64_MIN;
	int16_t x3 = -706;
	volatile int32_t t0 = 166871968;

	t0 = ((x1/x2)<(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = INT32_MIN;
	uint16_t x15 = 0U;
	int16_t x16 = -2219;

	t1 = ((x13/x14)<(x15*x16));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = INT16_MIN;
	static volatile int32_t x22 = -56781860;
	uint8_t x23 = UINT8_MAX;
	volatile int16_t x24 = INT16_MAX;
	int32_t t2 = -3107677;

	t2 = ((x21/x22)<(x23*x24));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = 400117;
	int8_t x26 = 1;
	volatile int8_t x28 = -1;
	int32_t t3 = 2932694;

	t3 = ((x25/x26)<(x27*x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x30 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t4 = 13015;

	t4 = ((x29/x30)<(x31*x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 0;
	int8_t x35 = INT8_MAX;
	int8_t x36 = -1;

	t5 = ((x33/x34)<(x35*x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	int32_t x39 = -1;

	t6 = ((x37/x38)<(x39*x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x47 = 0;
	int8_t x48 = -1;
	volatile int32_t t7 = -9;

	t7 = ((x45/x46)<(x47*x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x49 = 1787LLU;
	uint16_t x50 = 66U;
	int32_t x51 = 9528;
	static int8_t x52 = 47;
	static int32_t t8 = -70491593;

	t8 = ((x49/x50)<(x51*x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x61 = -1;
	volatile uint16_t x62 = UINT16_MAX;
	int16_t x63 = -30;
	int16_t x64 = INT16_MIN;
	volatile int32_t t9 = 14;

	t9 = ((x61/x62)<(x63*x64));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x77 = 1398043577659LL;
	int16_t x78 = -7;
	uint16_t x79 = 87U;
	int16_t x80 = 8783;
	volatile int32_t t10 = 1450;

	t10 = ((x77/x78)<(x79*x80));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x81 = -3556;
	volatile int64_t x82 = 23819464088LL;
	uint64_t x83 = 20104397881126202LLU;
	int16_t x84 = -1;
	int32_t t11 = 551;

	t11 = ((x81/x82)<(x83*x84));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x89 = INT16_MIN;
	volatile int8_t x91 = INT8_MAX;
	volatile int8_t x92 = INT8_MIN;
	int32_t t12 = 5;

	t12 = ((x89/x90)<(x91*x92));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x93 = 1083107981U;
	static uint8_t x94 = 15U;
	static volatile int8_t x95 = -28;
	static int16_t x96 = 12847;
	int32_t t13 = -655893142;

	t13 = ((x93/x94)<(x95*x96));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = -1;
	int16_t x98 = 127;
	uint8_t x99 = 6U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t14 = 578760;

	t14 = ((x97/x98)<(x99*x100));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = 0;
	uint16_t x102 = 7U;
	int32_t x103 = INT32_MIN;
	uint32_t x104 = UINT32_MAX;
	static int32_t t15 = -2;

	t15 = ((x101/x102)<(x103*x104));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int64_t x119 = 47749383979804LL;
	static int64_t x120 = -1LL;

	t16 = ((x117/x118)<(x119*x120));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x121 = -577LL;
	int32_t x122 = INT32_MIN;
	int8_t x123 = -1;

	t17 = ((x121/x122)<(x123*x124));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x127 = -1;
	static uint16_t x128 = 16U;
	volatile int32_t t18 = -16923598;

	t18 = ((x125/x126)<(x127*x128));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x129 = -204151004;
	int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MIN;

	t19 = ((x129/x130)<(x131*x132));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x133 = 3293722700710725514LLU;
	int64_t x134 = -1LL;
	uint64_t x135 = 45818119855LLU;
	static int64_t x136 = -1LL;
	volatile int32_t t20 = -1;

	t20 = ((x133/x134)<(x135*x136));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x141 = 1;
	int16_t x142 = 389;
	uint16_t x144 = 13855U;
	volatile int32_t t21 = 121876;

	t21 = ((x141/x142)<(x143*x144));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x150 = INT16_MIN;
	volatile int64_t x151 = -590189LL;
	uint32_t x152 = 759454U;

	t22 = ((x149/x150)<(x151*x152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x157 = 0;
	uint64_t x158 = 64275622178844LLU;
	int64_t x159 = -1193927744977656756LL;
	uint64_t x160 = 2LLU;
	volatile int32_t t23 = -107;

	t23 = ((x157/x158)<(x159*x160));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x161 = INT64_MIN;
	volatile int8_t x162 = 55;
	uint32_t x164 = 80519U;
	static volatile int32_t t24 = 29;

	t24 = ((x161/x162)<(x163*x164));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x173 = INT32_MAX;
	volatile int64_t x175 = -390138LL;
	uint64_t x176 = UINT64_MAX;

	t25 = ((x173/x174)<(x175*x176));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x178 = -214102;
	uint8_t x180 = 3U;
	int32_t t26 = 63649;

	t26 = ((x177/x178)<(x179*x180));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int64_t x186 = INT64_MIN;
	static uint32_t x187 = 48584372U;
	uint8_t x188 = 0U;
	volatile int32_t t27 = -10850629;

	t27 = ((x185/x186)<(x187*x188));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x189 = -1LL;
	static int8_t x190 = 15;
	int32_t x192 = 849;
	int32_t t28 = -8983;

	t28 = ((x189/x190)<(x191*x192));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x193 = INT64_MIN;
	static int8_t x194 = INT8_MAX;
	volatile int32_t x195 = INT32_MAX;
	static uint32_t x196 = UINT32_MAX;
	int32_t t29 = -42880925;

	t29 = ((x193/x194)<(x195*x196));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x203 = UINT16_MAX;
	int32_t x204 = 1573;
	int32_t t30 = 13;

	t30 = ((x201/x202)<(x203*x204));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = 12598U;
	int8_t x207 = INT8_MAX;
	volatile int64_t x208 = 1448494245874LL;

	t31 = ((x205/x206)<(x207*x208));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = 181;
	int16_t x224 = INT16_MAX;

	t32 = ((x221/x222)<(x223*x224));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x225 = INT16_MIN;
	uint16_t x226 = 15264U;
	uint64_t x228 = 2120314LLU;
	int32_t t33 = 498809315;

	t33 = ((x225/x226)<(x227*x228));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x230 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	static int32_t x232 = 2894;
	int32_t t34 = 59287877;

	t34 = ((x229/x230)<(x231*x232));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = 1;
	int16_t x235 = INT16_MAX;
	static uint16_t x236 = 310U;
	volatile int32_t t35 = 20347;

	t35 = ((x233/x234)<(x235*x236));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x237 = INT16_MIN;
	volatile int16_t x239 = 427;
	static int32_t t36 = 231261532;

	t36 = ((x237/x238)<(x239*x240));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x241 = INT64_MIN;
	static uint32_t x242 = UINT32_MAX;
	int32_t x243 = 7;
	volatile uint16_t x244 = 46U;
	volatile int32_t t37 = 1;

	t37 = ((x241/x242)<(x243*x244));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x249 = 7;
	int64_t x250 = INT64_MIN;
	int16_t x252 = INT16_MIN;

	t38 = ((x249/x250)<(x251*x252));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	uint64_t x255 = 155186878259668LLU;
	int32_t x256 = INT32_MAX;
	int32_t t39 = 2041;

	t39 = ((x253/x254)<(x255*x256));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x257 = 59868195159635211LLU;
	static uint32_t x258 = 2171225U;
	uint8_t x259 = 106U;
	int8_t x260 = -1;
	int32_t t40 = 1;

	t40 = ((x257/x258)<(x259*x260));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x261 = 1;
	volatile int8_t x262 = -25;
	static int32_t x264 = -23;
	int32_t t41 = 165;

	t41 = ((x261/x262)<(x263*x264));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x266 = 914931849057153458LL;
	int64_t x267 = INT64_MIN;
	uint8_t x268 = 1U;
	int32_t t42 = 556831;

	t42 = ((x265/x266)<(x267*x268));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x269 = INT8_MAX;
	static int32_t x272 = 65;
	static volatile int32_t t43 = 36;

	t43 = ((x269/x270)<(x271*x272));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x273 = INT16_MAX;
	int8_t x275 = -1;
	int16_t x276 = 14;
	int32_t t44 = 256;

	t44 = ((x273/x274)<(x275*x276));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x277 = -1;
	int32_t x279 = -1;
	uint64_t x280 = UINT64_MAX;
	int32_t t45 = 488522;

	t45 = ((x277/x278)<(x279*x280));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x281 = INT64_MAX;
	volatile uint64_t x282 = 40951069130LLU;
	static int8_t x283 = 0;
	volatile uint8_t x284 = 0U;
	volatile int32_t t46 = 131418288;

	t46 = ((x281/x282)<(x283*x284));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x290 = INT32_MAX;
	int16_t x291 = INT16_MAX;
	static uint8_t x292 = 21U;
	volatile int32_t t47 = -24430;

	t47 = ((x289/x290)<(x291*x292));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x294 = UINT32_MAX;
	volatile int32_t t48 = -29082;

	t48 = ((x293/x294)<(x295*x296));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x297 = 86748305LLU;
	int32_t x298 = INT32_MIN;
	uint16_t x299 = 19U;
	int8_t x300 = 19;

	t49 = ((x297/x298)<(x299*x300));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x301 = 441127U;
	static volatile uint16_t x303 = 137U;

	t50 = ((x301/x302)<(x303*x304));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	int8_t x311 = INT8_MIN;
	static int16_t x312 = INT16_MIN;
	int32_t t51 = 14;

	t51 = ((x309/x310)<(x311*x312));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x313 = -204;
	int8_t x314 = -11;
	uint8_t x316 = 2U;
	static int32_t t52 = 33586;

	t52 = ((x313/x314)<(x315*x316));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x318 = 3667453U;
	volatile int16_t x319 = INT16_MAX;
	int32_t t53 = 2356;

	t53 = ((x317/x318)<(x319*x320));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x322 = INT16_MAX;
	volatile uint8_t x323 = 18U;
	static int8_t x324 = INT8_MIN;
	int32_t t54 = 6453137;

	t54 = ((x321/x322)<(x323*x324));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x325 = -1;
	volatile int64_t x326 = INT64_MAX;
	volatile int16_t x327 = INT16_MIN;
	volatile int32_t t55 = 106732;

	t55 = ((x325/x326)<(x327*x328));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x329 = INT16_MIN;
	uint8_t x330 = 58U;
	int16_t x331 = 4;
	uint16_t x332 = 219U;
	static int32_t t56 = 19577354;

	t56 = ((x329/x330)<(x331*x332));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x337 = INT32_MAX;
	static int64_t x338 = -955LL;
	volatile uint8_t x339 = 1U;
	volatile int32_t t57 = 38232;

	t57 = ((x337/x338)<(x339*x340));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x341 = -1;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;

	t58 = ((x341/x342)<(x343*x344));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x349 = -1LL;
	uint16_t x350 = UINT16_MAX;
	static uint16_t x351 = UINT16_MAX;
	uint64_t x352 = UINT64_MAX;
	int32_t t59 = 471053;

	t59 = ((x349/x350)<(x351*x352));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x353 = 10627;
	int16_t x354 = -11798;
	int8_t x355 = INT8_MIN;
	volatile int32_t t60 = 155061630;

	t60 = ((x353/x354)<(x355*x356));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x357 = 100692U;
	static int16_t x358 = INT16_MIN;
	int8_t x359 = -1;
	int32_t t61 = 5;

	t61 = ((x357/x358)<(x359*x360));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x361 = 26;
	int64_t x362 = INT64_MIN;
	static uint16_t x363 = UINT16_MAX;
	uint8_t x364 = 4U;
	static volatile int32_t t62 = 923;

	t62 = ((x361/x362)<(x363*x364));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x365 = -156978519LL;
	uint32_t x366 = 15010U;
	int16_t x367 = -222;
	int32_t t63 = -11830894;

	t63 = ((x365/x366)<(x367*x368));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x369 = -1LL;
	uint8_t x372 = UINT8_MAX;

	t64 = ((x369/x370)<(x371*x372));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = INT16_MIN;
	volatile uint32_t x374 = 29045475U;
	uint32_t x375 = 0U;
	volatile uint8_t x376 = UINT8_MAX;
	volatile int32_t t65 = 338;

	t65 = ((x373/x374)<(x375*x376));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x377 = 40102LLU;
	int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t66 = -227341141;

	t66 = ((x377/x378)<(x379*x380));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x381 = UINT32_MAX;
	static int64_t x382 = 57860668637034LL;
	int64_t x383 = -1LL;
	uint64_t x384 = UINT64_MAX;
	static volatile int32_t t67 = -53;

	t67 = ((x381/x382)<(x383*x384));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x389 = -65LL;
	uint32_t x390 = 2000U;
	int16_t x391 = 3621;
	int16_t x392 = 112;
	int32_t t68 = 13273338;

	t68 = ((x389/x390)<(x391*x392));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x398 = 2U;
	static int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	int32_t t69 = -3251;

	t69 = ((x397/x398)<(x399*x400));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x405 = 143866854503701062LLU;
	static volatile uint32_t x406 = 2203887U;
	volatile int64_t x408 = -1807007414765LL;
	volatile int32_t t70 = -3;

	t70 = ((x405/x406)<(x407*x408));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x410 = 542795592633425528LL;
	static int64_t x411 = -711018369704149989LL;

	t71 = ((x409/x410)<(x411*x412));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x413 = UINT8_MAX;
	volatile uint32_t x414 = 1993U;
	int8_t x415 = -1;

	t72 = ((x413/x414)<(x415*x416));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x417 = 8965U;
	int64_t x418 = INT64_MIN;
	volatile uint16_t x419 = 1U;

	t73 = ((x417/x418)<(x419*x420));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x421 = INT64_MIN;
	int32_t x423 = -561;
	static int32_t t74 = 86247;

	t74 = ((x421/x422)<(x423*x424));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x425 = -10;
	int64_t x426 = -2213004241018899273LL;
	static volatile int16_t x427 = INT16_MIN;
	volatile int32_t t75 = 7336513;

	t75 = ((x425/x426)<(x427*x428));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x429 = INT64_MIN;
	uint16_t x430 = UINT16_MAX;
	uint32_t x431 = UINT32_MAX;
	volatile int32_t x432 = 3297;
	int32_t t76 = -4556;

	t76 = ((x429/x430)<(x431*x432));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x438 = INT64_MAX;
	static int32_t x440 = -1;
	static int32_t t77 = 11321;

	t77 = ((x437/x438)<(x439*x440));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x441 = INT8_MAX;
	int16_t x443 = -1;
	volatile int16_t x444 = 2582;
	int32_t t78 = 0;

	t78 = ((x441/x442)<(x443*x444));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x449 = INT32_MIN;
	int64_t x450 = INT64_MIN;
	int16_t x451 = -1;
	uint8_t x452 = 4U;
	volatile int32_t t79 = 1;

	t79 = ((x449/x450)<(x451*x452));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x453 = 2821U;
	int32_t t80 = -1;

	t80 = ((x453/x454)<(x455*x456));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x457 = INT16_MAX;
	uint64_t x458 = UINT64_MAX;
	uint64_t x459 = 9303682929232LLU;
	volatile int32_t t81 = -8706;

	t81 = ((x457/x458)<(x459*x460));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x462 = UINT16_MAX;
	int16_t x463 = INT16_MAX;
	static int32_t x464 = -1;
	int32_t t82 = -330535;

	t82 = ((x461/x462)<(x463*x464));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x473 = 15U;
	int8_t x475 = INT8_MAX;

	t83 = ((x473/x474)<(x475*x476));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x477 = 113192844U;
	volatile int16_t x478 = 2;
	static uint16_t x479 = 4523U;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t84 = 5;

	t84 = ((x477/x478)<(x479*x480));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x489 = INT16_MIN;
	static uint64_t x490 = 59111LLU;
	uint8_t x491 = 3U;
	static volatile uint64_t x492 = 13919698784488069LLU;

	t85 = ((x489/x490)<(x491*x492));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x497 = INT16_MAX;
	static uint32_t x498 = UINT32_MAX;
	uint64_t x499 = 235LLU;
	int64_t x500 = INT64_MIN;
	int32_t t86 = -3034;

	t86 = ((x497/x498)<(x499*x500));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x506 = INT32_MIN;
	static int64_t x507 = -83245485316485LL;
	uint64_t x508 = UINT64_MAX;
	int32_t t87 = 156;

	t87 = ((x505/x506)<(x507*x508));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x509 = -1LL;
	int32_t x511 = INT32_MAX;
	int32_t x512 = 0;
	static int32_t t88 = 507375354;

	t88 = ((x509/x510)<(x511*x512));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x514 = -1;
	int8_t x515 = 0;
	uint64_t x516 = UINT64_MAX;
	int32_t t89 = 6218378;

	t89 = ((x513/x514)<(x515*x516));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x521 = INT64_MAX;
	volatile int64_t x522 = INT64_MIN;
	volatile uint8_t x524 = 57U;
	static int32_t t90 = -1160653;

	t90 = ((x521/x522)<(x523*x524));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x526 = UINT64_MAX;
	int32_t t91 = 522433185;

	t91 = ((x525/x526)<(x527*x528));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x529 = 9733056658357LLU;
	static int32_t x530 = -18960;
	volatile int32_t x531 = 787;
	int32_t x532 = -3791;

	t92 = ((x529/x530)<(x531*x532));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x534 = -136638418695263LL;
	uint16_t x535 = 187U;
	volatile int16_t x536 = INT16_MAX;

	t93 = ((x533/x534)<(x535*x536));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x537 = INT64_MIN;
	uint32_t x538 = 1U;
	int8_t x539 = INT8_MAX;
	int16_t x540 = -1;
	int32_t t94 = -1;

	t94 = ((x537/x538)<(x539*x540));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x541 = 1;
	uint32_t x543 = 3U;
	static int64_t x544 = -1LL;

	t95 = ((x541/x542)<(x543*x544));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x545 = 5236;
	static volatile int64_t x546 = -75001375095LL;
	static uint64_t x547 = UINT64_MAX;
	int64_t x548 = INT64_MIN;
	int32_t t96 = 14952617;

	t96 = ((x545/x546)<(x547*x548));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x549 = 283LL;
	int16_t x550 = INT16_MIN;
	static uint16_t x552 = 928U;
	static int32_t t97 = -3487923;

	t97 = ((x549/x550)<(x551*x552));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x557 = -1;
	uint8_t x559 = 83U;
	int32_t t98 = 38;

	t98 = ((x557/x558)<(x559*x560));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x561 = 1U;
	static uint32_t x562 = 12U;
	uint64_t x564 = 8940181489794LLU;

	t99 = ((x561/x562)<(x563*x564));

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

