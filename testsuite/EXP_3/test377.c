#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = 116U;
uint64_t x3 = UINT64_MAX;
int64_t x24 = -1LL;
uint64_t t2 = 272948195451970311LLU;
int16_t x35 = INT16_MIN;
int16_t x36 = -1;
static int8_t x38 = INT8_MIN;
volatile uint64_t x62 = 18774953LLU;
uint64_t t8 = 51200470920880425LLU;
int16_t x80 = INT16_MIN;
volatile uint32_t t11 = 1471551U;
uint16_t x92 = 7U;
int8_t x106 = INT8_MAX;
int16_t x115 = INT16_MAX;
volatile uint64_t t17 = 7881850LLU;
volatile uint64_t t18 = 11172601343211LLU;
uint8_t x127 = 14U;
int8_t x136 = -38;
int16_t x138 = -1;
volatile int8_t x139 = INT8_MIN;
uint8_t x161 = 1U;
static uint8_t x200 = UINT8_MAX;
int8_t x203 = -1;
uint64_t x204 = UINT64_MAX;
static uint8_t x209 = 5U;
int64_t x215 = -1LL;
static volatile int16_t x228 = INT16_MAX;
static int32_t x247 = -2;
int8_t x250 = INT8_MAX;
volatile uint64_t t36 = 843615663375LLU;
int16_t x253 = -5021;
static uint16_t x255 = UINT16_MAX;
int32_t x257 = -1;
volatile uint64_t t38 = 0LLU;
volatile int32_t t39 = -27792710;
uint16_t x268 = 15681U;
volatile uint64_t t43 = 1639198243122865LLU;
volatile uint32_t t45 = 206U;
uint64_t x324 = UINT64_MAX;
int16_t x332 = INT16_MIN;
int16_t x334 = INT16_MIN;
static int32_t t51 = 1637575;
uint8_t x340 = UINT8_MAX;
uint64_t x349 = UINT64_MAX;
static uint32_t x353 = 2439U;
volatile uint16_t x363 = 3067U;
static volatile uint32_t x369 = 52U;
volatile uint64_t t57 = 16206LLU;
volatile int8_t x384 = INT8_MIN;
static int8_t x406 = 8;
uint64_t x446 = 19070927399LLU;
static volatile uint64_t t66 = 8776936318044288664LLU;
int8_t x473 = INT8_MIN;
static uint64_t x478 = 137LLU;
uint64_t t70 = 5855433721347218LLU;
uint16_t x490 = UINT16_MAX;
int64_t t71 = -85642639814360551LL;
volatile uint32_t t72 = 1U;
int8_t x505 = INT8_MAX;
uint8_t x506 = UINT8_MAX;
int16_t x530 = 561;
static volatile int32_t x543 = -5249;
int32_t x544 = -11;
uint32_t x548 = UINT32_MAX;
volatile uint32_t t79 = 16577U;
int64_t x555 = -22993927822089LL;
static volatile int64_t x556 = -1LL;
volatile int16_t x567 = INT16_MAX;
static uint32_t x576 = 2052543808U;
int64_t t82 = 7LL;
static uint8_t x577 = UINT8_MAX;
volatile uint16_t x584 = UINT16_MAX;
static int64_t x605 = -66178611783849LL;
int8_t x607 = -1;
volatile int64_t x617 = 43LL;
int32_t x618 = INT32_MIN;
int16_t x621 = 108;
int32_t x629 = INT32_MIN;
int32_t x631 = -1;
uint64_t t90 = 1LLU;
volatile int64_t x676 = -1LL;
volatile int64_t t95 = -460001984894LL;
int8_t x682 = 14;
volatile int32_t t96 = -182662203;
int8_t x693 = -18;
static uint32_t x694 = UINT32_MAX;
uint32_t t98 = 37706370U;


void f0(void) {
	uint16_t x1 = 179U;
	int64_t x4 = INT64_MIN;
	uint64_t t0 = 10419361597LLU;

	t0 = ((x1*x2)^(x3*x4));

	if (t0 != 9223372036854796572LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 10890521965LLU;
	int64_t x6 = INT64_MIN;
	volatile int64_t x7 = 7979242769036LL;
	uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = 11LLU;

	t1 = ((x5*x6)^(x7*x8));

	if (t1 != 9223364057612006772LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 46407872LLU;
	volatile uint64_t x22 = 190050061LLU;
	volatile int16_t x23 = INT16_MIN;

	t2 = ((x21*x22)^(x23*x24));

	if (t2 != 8819818904447424LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x33 = 6LL;
	uint64_t x34 = 1352433194620589LLU;
	uint64_t t3 = 30LLU;

	t3 = ((x33*x34)^(x35*x36));

	if (t3 != 8114599167756302LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = 1U;
	uint64_t x39 = 10405LLU;
	int32_t x40 = -1;
	uint64_t t4 = 77LLU;

	t4 = ((x37*x38)^(x39*x40));

	if (t4 != 10459LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x45 = -1;
	int16_t x46 = -925;
	int8_t x47 = -1;
	uint8_t x48 = 11U;
	volatile int32_t t5 = -1687;

	t5 = ((x45*x46)^(x47*x48));

	if (t5 != -920) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x53 = -1;
	uint16_t x54 = 2U;
	int16_t x55 = INT16_MAX;
	int8_t x56 = 5;
	volatile int32_t t6 = 21;

	t6 = ((x53*x54)^(x55*x56));

	if (t6 != -163835) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x61 = INT8_MIN;
	volatile int16_t x63 = -1;
	int8_t x64 = 2;
	volatile uint64_t t7 = 0LLU;

	t7 = ((x61*x62)^(x63*x64));

	if (t7 != 2403193982LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x69 = -1LL;
	volatile int8_t x70 = -2;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t x72 = INT32_MAX;

	t8 = ((x69*x70)^(x71*x72));

	if (t8 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x73 = 100205718639LLU;
	static uint8_t x74 = UINT8_MAX;
	int32_t x75 = -1;
	int8_t x76 = INT8_MAX;
	uint64_t t9 = 11359LLU;

	t9 = ((x73*x74)^(x75*x76));

	if (t9 != 18446718521251298576LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x77 = 1;
	int8_t x78 = -1;
	static uint8_t x79 = 9U;
	static int32_t t10 = 19463;

	t10 = ((x77*x78)^(x79*x80));

	if (t10 != 294911) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = INT16_MIN;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = -1;
	uint16_t x84 = UINT16_MAX;

	t11 = ((x81*x82)^(x83*x84));

	if (t11 != 4294934529U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x85 = 0U;
	int32_t x86 = INT32_MIN;
	static int32_t x87 = -1;
	volatile int64_t x88 = -344739724334581366LL;
	static volatile int64_t t12 = -2859108LL;

	t12 = ((x85*x86)^(x87*x88));

	if (t12 != 344739724334581366LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = 1U;
	uint32_t x91 = UINT32_MAX;
	uint32_t t13 = 388U;

	t13 = ((x89*x90)^(x91*x92));

	if (t13 != 121U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = -1;
	uint32_t x94 = UINT32_MAX;
	static uint32_t x95 = 85U;
	uint16_t x96 = UINT16_MAX;
	static volatile uint32_t t14 = 1432U;

	t14 = ((x93*x94)^(x95*x96));

	if (t14 != 5570474U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = 3809001318LLU;
	uint16_t x107 = 26U;
	volatile int16_t x108 = INT16_MAX;
	uint64_t t15 = 170LLU;

	t15 = ((x105*x106)^(x107*x108));

	if (t15 != 483743370364LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x113 = 109241204376776LLU;
	uint32_t x114 = UINT32_MAX;
	int64_t x116 = -1LL;
	volatile uint64_t t16 = 5567871682187LLU;

	t16 = ((x113*x114)^(x115*x116));

	if (t16 != 5535450138667842361LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	uint32_t x119 = 418539U;
	int8_t x120 = INT8_MIN;

	t17 = ((x117*x118)^(x119*x120));

	if (t17 != 4241394305LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x121 = 22695677433686LLU;
	int32_t x122 = INT32_MAX;
	uint16_t x123 = 480U;
	static int64_t x124 = -1LL;

	t18 = ((x121*x122)^(x123*x124));

	if (t18 != 16148440386732988042LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x125 = -1;
	int16_t x126 = -31;
	int8_t x128 = INT8_MAX;
	volatile int32_t t19 = 827;

	t19 = ((x125*x126)^(x127*x128));

	if (t19 != 1773) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x133 = -1LL;
	int8_t x134 = 1;
	static volatile int32_t x135 = -1;
	volatile int64_t t20 = -1988LL;

	t20 = ((x133*x134)^(x135*x136));

	if (t20 != -39LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x137 = 1U;
	volatile uint16_t x140 = 7918U;
	int32_t t21 = -895136846;

	t21 = ((x137*x138)^(x139*x140));

	if (t21 != 1013503) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x145 = -1;
	volatile int16_t x146 = INT16_MIN;
	volatile int32_t x147 = -1;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t22 = 59902;

	t22 = ((x145*x146)^(x147*x148));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x153 = 3;
	uint64_t x154 = 28673005956741444LLU;
	static volatile int64_t x155 = 583457LL;
	uint32_t x156 = UINT32_MAX;
	uint64_t t23 = 2LLU;

	t23 = ((x153*x154)^(x155*x156));

	if (t23 != 88241270050403091LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x162 = -1;
	int32_t x163 = INT32_MIN;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t24 = 63856LLU;

	t24 = ((x161*x162)^(x163*x164));

	if (t24 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x169 = UINT64_MAX;
	int16_t x170 = 3358;
	static volatile int8_t x171 = -2;
	int8_t x172 = -1;
	uint64_t t25 = 4773069187183LLU;

	t25 = ((x169*x170)^(x171*x172));

	if (t25 != 18446744073709548256LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x181 = INT32_MAX;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	uint64_t x184 = 4157493LLU;
	volatile uint64_t t26 = 4904946607LLU;

	t26 = ((x181*x182)^(x183*x184));

	if (t26 != 2143326154LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x197 = 259702U;
	int64_t x198 = -3211585LL;
	volatile uint32_t x199 = 12U;
	static volatile int64_t t27 = 23142210150252LL;

	t27 = ((x197*x198)^(x199*x200));

	if (t27 != -834055045634LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x201 = 2979U;
	static uint32_t x202 = UINT32_MAX;
	volatile uint64_t t28 = 1374970LLU;

	t28 = ((x201*x202)^(x203*x204));

	if (t28 != 4294964316LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	int8_t x207 = -3;
	uint8_t x208 = 5U;
	volatile int32_t t29 = 28910662;

	t29 = ((x205*x206)^(x207*x208));

	if (t29 != -143) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x210 = 11U;
	static uint64_t x211 = 0LLU;
	int8_t x212 = 10;
	uint64_t t30 = 861LLU;

	t30 = ((x209*x210)^(x211*x212));

	if (t30 != 55LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x213 = UINT64_MAX;
	static int16_t x214 = INT16_MIN;
	int8_t x216 = INT8_MAX;
	uint64_t t31 = 1682107315282752740LLU;

	t31 = ((x213*x214)^(x215*x216));

	if (t31 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x225 = INT8_MIN;
	static int64_t x226 = 184LL;
	uint32_t x227 = UINT32_MAX;
	volatile int64_t t32 = 65456391521LL;

	t32 = ((x225*x226)^(x227*x228));

	if (t32 != -4294958079LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x229 = -12253;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 47660504867506LLU;
	uint16_t x232 = 4U;
	uint64_t t33 = 86016LLU;

	t33 = ((x229*x230)^(x231*x232));

	if (t33 != 18446553431690824597LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = -1;
	volatile int32_t x243 = INT32_MAX;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t34 = 218870732LLU;

	t34 = ((x241*x242)^(x243*x244));

	if (t34 != 2147483392LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x246 = INT64_MIN;
	int16_t x248 = INT16_MIN;
	static volatile uint64_t t35 = 6672527769411LLU;

	t35 = ((x245*x246)^(x247*x248));

	if (t35 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x249 = 5;
	static volatile uint32_t x251 = 20005U;
	uint64_t x252 = 244LLU;

	t36 = ((x249*x250)^(x251*x252));

	if (t36 != 4880703LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x254 = -1;
	static int8_t x256 = 12;
	int32_t t37 = 74;

	t37 = ((x253*x254)^(x255*x256));

	if (t37 != 781417) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x258 = 18370265LLU;
	int32_t x259 = INT32_MIN;
	uint32_t x260 = 9856U;

	t38 = ((x257*x258)^(x259*x260));

	if (t38 != 18446744073691181351LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x261 = -1;
	int8_t x262 = -26;
	int16_t x263 = -1;
	int8_t x264 = -8;

	t39 = ((x261*x262)^(x263*x264));

	if (t39 != 18) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x265 = 115U;
	static uint16_t x266 = UINT16_MAX;
	static uint8_t x267 = 29U;
	static int32_t t40 = 82964777;

	t40 = ((x265*x266)^(x267*x268));

	if (t40 != 7606224) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x269 = 910U;
	int16_t x270 = INT16_MAX;
	int64_t x271 = -57546628012056LL;
	int16_t x272 = INT16_MIN;
	volatile int64_t t41 = -1286604064294401038LL;

	t41 = ((x269*x270)^(x271*x272));

	if (t41 != 1885687906728344690LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x273 = -422;
	int8_t x274 = INT8_MAX;
	int8_t x275 = -7;
	static int16_t x276 = INT16_MAX;
	int32_t t42 = 2619;

	t42 = ((x273*x274)^(x275*x276));

	if (t42 != 241313) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x277 = 712672LLU;
	int64_t x278 = INT64_MIN;
	volatile uint16_t x279 = 3U;
	int32_t x280 = -76;

	t43 = ((x277*x278)^(x279*x280));

	if (t43 != 18446744073709551388LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x281 = 38LL;
	static uint64_t x282 = 736LLU;
	int16_t x283 = -66;
	int32_t x284 = 183600;
	static uint64_t t44 = 177896755LLU;

	t44 = ((x281*x282)^(x283*x284));

	if (t44 != 18446744073697457376LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x285 = 23U;
	int8_t x286 = 17;
	int8_t x287 = -15;
	static uint32_t x288 = 17U;

	t45 = ((x285*x286)^(x287*x288));

	if (t45 != 4294966918U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x289 = 21U;
	volatile int16_t x290 = INT16_MIN;
	int16_t x291 = INT16_MIN;
	uint8_t x292 = 63U;
	int32_t t46 = 2;

	t46 = ((x289*x290)^(x291*x292));

	if (t46 != 1376256) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x309 = 187U;
	volatile int8_t x310 = -1;
	volatile int16_t x311 = -2189;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t47 = -4581;

	t47 = ((x309*x310)^(x311*x312));

	if (t47 != -71729339) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x321 = -1LL;
	uint64_t x322 = UINT64_MAX;
	uint16_t x323 = 5U;
	static volatile uint64_t t48 = 70072605692553LLU;

	t48 = ((x321*x322)^(x323*x324));

	if (t48 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x325 = -14LL;
	int64_t x326 = -1LL;
	int64_t x327 = -12LL;
	volatile uint32_t x328 = UINT32_MAX;
	int64_t t49 = -109235244LL;

	t49 = ((x325*x326)^(x327*x328));

	if (t49 != -51539607550LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x329 = -1;
	int32_t x330 = INT32_MAX;
	static uint8_t x331 = 1U;
	volatile int32_t t50 = 318826808;

	t50 = ((x329*x330)^(x331*x332));

	if (t50 != 2147450881) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x333 = -1;
	int16_t x335 = -7991;
	volatile int16_t x336 = INT16_MAX;

	t51 = ((x333*x334)^(x335*x336));

	if (t51 != -261873865) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x337 = 0LLU;
	volatile uint64_t x338 = UINT64_MAX;
	static int16_t x339 = INT16_MAX;
	volatile uint64_t t52 = 5900725219LLU;

	t52 = ((x337*x338)^(x339*x340));

	if (t52 != 8355585LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x350 = 552350LL;
	static uint16_t x351 = UINT16_MAX;
	uint8_t x352 = 5U;
	static volatile uint64_t t53 = 7675686259LLU;

	t53 = ((x349*x350)^(x351*x352));

	if (t53 != 18446744073708727705LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x354 = 703188155LL;
	volatile int16_t x355 = INT16_MIN;
	static int32_t x356 = 10;
	volatile int64_t t54 = 1LL;

	t54 = ((x353*x354)^(x355*x356));

	if (t54 != -1715075642979LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x361 = 3677U;
	volatile int32_t x362 = -1;
	int8_t x364 = -1;
	volatile int32_t t55 = 1;

	t55 = ((x361*x362)^(x363*x364));

	if (t55 != 1446) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x365 = -260755LL;
	int32_t x366 = INT32_MIN;
	static int16_t x367 = -1;
	int32_t x368 = 120788067;
	int64_t t56 = -2711400219794016130LL;

	t56 = ((x365*x366)^(x367*x368));

	if (t56 != -559967219422307LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x370 = INT32_MIN;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = INT16_MIN;

	t57 = ((x369*x370)^(x371*x372));

	if (t57 != 32768LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x381 = UINT32_MAX;
	int16_t x382 = 0;
	int16_t x383 = -1;
	uint32_t t58 = 3769U;

	t58 = ((x381*x382)^(x383*x384));

	if (t58 != 128U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x385 = 310586;
	int64_t x386 = -3981LL;
	int8_t x387 = 20;
	int8_t x388 = INT8_MAX;
	volatile int64_t t59 = -43300329LL;

	t59 = ((x385*x386)^(x387*x388));

	if (t59 != -1236440862LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x393 = 55;
	int16_t x394 = INT16_MAX;
	static volatile int32_t x395 = -317;
	volatile int32_t x396 = 83272;
	volatile int32_t t60 = 349139;

	t60 = ((x393*x394)^(x395*x396));

	if (t60 != -25802223) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x405 = UINT64_MAX;
	int16_t x407 = -4;
	int16_t x408 = INT16_MAX;
	volatile uint64_t t61 = 1053716LLU;

	t61 = ((x405*x406)^(x407*x408));

	if (t61 != 131068LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x413 = UINT16_MAX;
	static uint64_t x414 = UINT64_MAX;
	static int8_t x415 = 3;
	int8_t x416 = INT8_MIN;
	uint64_t t62 = 423227176883492LLU;

	t62 = ((x413*x414)^(x415*x416));

	if (t62 != 65153LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x417 = 7U;
	int8_t x418 = INT8_MAX;
	uint32_t x419 = 1U;
	volatile int8_t x420 = -3;
	uint32_t t63 = 43782081U;

	t63 = ((x417*x418)^(x419*x420));

	if (t63 != 4294966404U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x425 = INT32_MAX;
	uint64_t x426 = 6221LLU;
	static int64_t x427 = 15136LL;
	volatile uint64_t x428 = UINT64_MAX;
	uint64_t t64 = 14129LLU;

	t64 = ((x425*x426)^(x427*x428));

	if (t64 != 18446730714213786451LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x433 = INT16_MIN;
	int8_t x434 = -3;
	int16_t x435 = -1;
	int32_t x436 = 3114;
	static int32_t t65 = -1;

	t65 = ((x433*x434)^(x435*x436));

	if (t65 != -101418) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x445 = 288623770U;
	volatile uint16_t x447 = 31934U;
	int16_t x448 = -1;

	t66 = ((x445*x446)^(x447*x448));

	if (t66 != 12942421110413859892LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x449 = 57U;
	uint32_t x450 = 5672296U;
	int8_t x451 = -1;
	volatile int32_t x452 = -976;
	volatile uint32_t t67 = 3U;

	t67 = ((x449*x450)^(x451*x452));

	if (t67 != 323321848U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x461 = 8061;
	uint64_t x462 = 211900519LLU;
	uint64_t x463 = 334572LLU;
	int16_t x464 = INT16_MIN;
	uint64_t t68 = 1144798289LLU;

	t68 = ((x461*x462)^(x463*x464));

	if (t68 != 18446742359060685643LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x474 = UINT16_MAX;
	int32_t x475 = INT32_MIN;
	int16_t x476 = 0;
	volatile int32_t t69 = 93;

	t69 = ((x473*x474)^(x475*x476));

	if (t69 != -8388480) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x477 = INT32_MIN;
	static volatile int32_t x479 = 10;
	int32_t x480 = -1;

	t70 = ((x477*x478)^(x479*x480));

	if (t70 != 294205259766LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x489 = 49531713U;
	int64_t x491 = -1LL;
	int8_t x492 = -1;

	t71 = ((x489*x490)^(x491*x492));

	if (t71 != 3360502974LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x493 = INT16_MIN;
	uint16_t x494 = 88U;
	uint32_t x495 = 15U;
	int32_t x496 = INT32_MIN;

	t72 = ((x493*x494)^(x495*x496));

	if (t72 != 2144600064U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x507 = INT32_MAX;
	int16_t x508 = -1;
	volatile int32_t t73 = -9763;

	t73 = ((x505*x506)^(x507*x508));

	if (t73 != -2147451264) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x513 = INT8_MIN;
	volatile uint64_t x514 = 6489LLU;
	volatile int16_t x515 = -1;
	uint8_t x516 = UINT8_MAX;
	volatile uint64_t t74 = 135840805353410949LLU;

	t74 = ((x513*x514)^(x515*x516));

	if (t74 != 830593LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x521 = 3970U;
	uint32_t x522 = UINT32_MAX;
	static volatile int8_t x523 = INT8_MIN;
	static int8_t x524 = -1;
	uint32_t t75 = 51108U;

	t75 = ((x521*x522)^(x523*x524));

	if (t75 != 4294963454U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x529 = 27U;
	int8_t x531 = 0;
	uint64_t x532 = 74580230929440LLU;
	volatile uint64_t t76 = 827LLU;

	t76 = ((x529*x530)^(x531*x532));

	if (t76 != 15147LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x537 = UINT32_MAX;
	uint16_t x538 = UINT16_MAX;
	static int16_t x539 = INT16_MIN;
	int8_t x540 = INT8_MIN;
	volatile uint32_t t77 = 72524U;

	t77 = ((x537*x538)^(x539*x540));

	if (t77 != 4290707457U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x541 = -1;
	int32_t x542 = -15;
	volatile int32_t t78 = -22808096;

	t78 = ((x541*x542)^(x543*x544));

	if (t78 != 57732) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x545 = INT8_MIN;
	volatile uint32_t x546 = 1046019998U;
	int8_t x547 = INT8_MAX;

	t79 = ((x545*x546)^(x547*x548));

	if (t79 != 746573441U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x553 = 1;
	volatile uint8_t x554 = UINT8_MAX;
	int64_t t80 = 4230841571927232LL;

	t80 = ((x553*x554)^(x555*x556));

	if (t80 != 22993927822326LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x565 = 0U;
	int32_t x566 = 49846637;
	uint8_t x568 = UINT8_MAX;
	uint32_t t81 = 609U;

	t81 = ((x565*x566)^(x567*x568));

	if (t81 != 8355585U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x573 = -1LL;
	volatile uint16_t x574 = UINT16_MAX;
	uint16_t x575 = 117U;

	t82 = ((x573*x574)^(x575*x576));

	if (t82 != -3924363711LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x578 = -1;
	uint32_t x579 = 295161075U;
	volatile uint64_t x580 = 3192130645984LLU;
	uint64_t t83 = 516795LLU;

	t83 = ((x577*x578)^(x579*x580));

	if (t83 != 17037978823814811297LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x581 = 1;
	volatile int16_t x582 = INT16_MAX;
	uint16_t x583 = 10025U;
	static int32_t t84 = -1;

	t84 = ((x581*x582)^(x583*x584));

	if (t84 != 656975656) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x589 = UINT16_MAX;
	static volatile int8_t x590 = INT8_MIN;
	int64_t x591 = INT64_MAX;
	uint64_t x592 = 5614465537988LLU;
	volatile uint64_t t85 = 1541139404968LLU;

	t85 = ((x589*x590)^(x591*x592));

	if (t85 != 5614466410684LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x606 = 0;
	int16_t x608 = -4;
	int64_t t86 = -434LL;

	t86 = ((x605*x606)^(x607*x608));

	if (t86 != 4LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x619 = 10;
	uint16_t x620 = UINT16_MAX;
	static int64_t t87 = 1835596238483LL;

	t87 = ((x617*x618)^(x619*x620));

	if (t87 != -92341141514LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x622 = INT16_MIN;
	static int16_t x623 = -69;
	uint32_t x624 = 32954U;
	uint32_t t88 = 107U;

	t88 = ((x621*x622)^(x623*x624));

	if (t88 != 1527262U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x625 = UINT16_MAX;
	volatile uint8_t x626 = 21U;
	static int64_t x627 = -1026442LL;
	int16_t x628 = 0;
	int64_t t89 = 1301069LL;

	t89 = ((x625*x626)^(x627*x628));

	if (t89 != 1376235LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x630 = UINT64_MAX;
	static volatile int32_t x632 = INT32_MAX;

	t90 = ((x629*x630)^(x631*x632));

	if (t90 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x637 = -1;
	static uint8_t x638 = 21U;
	int16_t x639 = 1;
	static int8_t x640 = INT8_MIN;
	volatile int32_t t91 = -24270;

	t91 = ((x637*x638)^(x639*x640));

	if (t91 != 107) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x645 = 5U;
	volatile uint8_t x646 = UINT8_MAX;
	int8_t x647 = -29;
	int64_t x648 = -1LL;
	int64_t t92 = 1418503875958847LL;

	t92 = ((x645*x646)^(x647*x648));

	if (t92 != 1254LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x665 = -1;
	int8_t x666 = 6;
	volatile int16_t x667 = -1;
	int8_t x668 = 18;
	volatile int32_t t93 = -30153;

	t93 = ((x665*x666)^(x667*x668));

	if (t93 != 20) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x673 = UINT64_MAX;
	int16_t x674 = -1;
	uint64_t x675 = UINT64_MAX;
	static uint64_t t94 = 19717292LLU;

	t94 = ((x673*x674)^(x675*x676));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x677 = -1;
	int64_t x678 = INT64_MAX;
	uint32_t x679 = UINT32_MAX;
	int64_t x680 = -1LL;

	t95 = ((x677*x678)^(x679*x680));

	if (t95 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x681 = -29;
	uint8_t x683 = 120U;
	uint8_t x684 = 40U;

	t96 = ((x681*x682)^(x683*x684));

	if (t96 != -4950) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x689 = INT8_MAX;
	int32_t x690 = -1;
	static uint8_t x691 = 1U;
	int32_t x692 = -1;
	int32_t t97 = -6212;

	t97 = ((x689*x690)^(x691*x692));

	if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x695 = -1;
	static volatile uint16_t x696 = 345U;

	t98 = ((x693*x694)^(x695*x696));

	if (t98 != 4294966965U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x721 = 32U;
	volatile uint16_t x722 = 61U;
	uint8_t x723 = 76U;
	volatile int16_t x724 = -1;
	volatile int32_t t99 = -865920074;

	t99 = ((x721*x722)^(x723*x724));

	if (t99 != -2028) { NG(); } else { ; }
	
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

