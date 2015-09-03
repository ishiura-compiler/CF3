#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = 3U;
uint64_t x14 = 2LLU;
static int8_t x16 = INT8_MAX;
int64_t x22 = INT64_MIN;
int64_t x25 = INT64_MIN;
volatile int64_t x26 = 437614279644LL;
uint16_t x41 = 101U;
int16_t x48 = INT16_MIN;
uint64_t x95 = UINT64_MAX;
int8_t x98 = 0;
uint64_t x100 = 1426944479028257LLU;
int32_t t15 = 17;
uint64_t x128 = UINT64_MAX;
static int16_t x131 = INT16_MIN;
int64_t x134 = 137223944391LL;
int64_t x139 = -1LL;
int8_t x141 = -1;
int16_t x146 = 7014;
int16_t x147 = INT16_MAX;
volatile int32_t t22 = -1892;
static volatile uint8_t x156 = 1U;
int8_t x161 = 26;
int32_t x177 = INT32_MAX;
volatile int8_t x180 = -3;
int64_t x189 = -4051159644LL;
int32_t x191 = -9126;
static int16_t x196 = 241;
int32_t t30 = 224108;
int16_t x204 = INT16_MIN;
int32_t t32 = -4037;
uint16_t x219 = UINT16_MAX;
static uint8_t x222 = 2U;
volatile int32_t t35 = 98363;
volatile uint8_t x251 = 26U;
int16_t x252 = -496;
volatile int32_t t38 = -1;
volatile uint16_t x256 = 721U;
volatile int64_t x265 = INT64_MIN;
volatile uint32_t x271 = UINT32_MAX;
uint64_t t43 = 438206LLU;
volatile uint32_t x284 = UINT32_MAX;
static int8_t x318 = -7;
uint8_t x319 = 1U;
volatile int32_t x325 = 57;
int16_t x328 = 7191;
uint64_t x335 = UINT64_MAX;
uint32_t t53 = 35664897U;
int32_t x349 = -1;
int16_t x355 = INT16_MIN;
volatile uint8_t x358 = 2U;
static volatile int64_t x360 = -1LL;
int32_t x363 = -1;
static volatile int32_t t58 = 56334;
static int8_t x370 = INT8_MIN;
volatile int64_t t60 = 114LL;
uint32_t x393 = 2311586U;
volatile uint64_t x414 = UINT64_MAX;
uint16_t x415 = 3U;
int8_t x416 = INT8_MIN;
int8_t x420 = -1;
int16_t x434 = INT16_MAX;
int16_t x444 = INT16_MIN;
int64_t x450 = INT64_MAX;
static int32_t t70 = -15258;
int32_t x460 = -1;
volatile uint32_t t71 = 7441U;
static int32_t t72 = -402;
volatile uint64_t x472 = UINT64_MAX;
int8_t x478 = INT8_MIN;
static int32_t x479 = -1;
int64_t x483 = INT64_MIN;
volatile uint64_t t77 = 2574143485195185016LLU;
int16_t x521 = INT16_MIN;
int16_t x524 = 1;
volatile int64_t x535 = -1LL;
int16_t x550 = INT16_MIN;
volatile int8_t x554 = -1;
volatile int32_t t87 = 3;
int8_t x565 = -1;
volatile int32_t x567 = -1;
int16_t x569 = INT16_MIN;
volatile int16_t x570 = -1;
volatile uint64_t t89 = 2958900182478908110LLU;
static uint32_t x577 = 342U;
volatile int32_t t90 = -21;
int64_t x585 = INT64_MIN;
int16_t x588 = 336;
int32_t x599 = -1;
static int32_t t93 = 59;
uint32_t x615 = UINT32_MAX;
uint32_t t96 = 4901435U;


void f0(void) {
	volatile int64_t x1 = 2615795LL;
	static uint8_t x2 = UINT8_MAX;
	uint8_t x3 = 4U;
	static uint64_t x4 = 31LLU;
	volatile uint64_t t0 = 8LLU;

	t0 = ((x1<x2)%(x3*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 51U;
	int8_t x6 = -1;
	volatile int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -12;

	t1 = ((x5<x6)%(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	volatile uint32_t x10 = UINT32_MAX;
	volatile uint16_t x11 = UINT16_MAX;
	static int32_t t2 = 0;

	t2 = ((x9<x10)%(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -10;
	int16_t x15 = INT16_MAX;
	static int32_t t3 = -2;

	t3 = ((x13<x14)%(x15*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -6751253447276255LL;
	int64_t x23 = -1LL;
	uint8_t x24 = 12U;
	volatile int64_t t4 = -1171189474950LL;

	t4 = ((x21<x22)%(x23*x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x27 = 498U;
	int64_t x28 = -1417933075304LL;
	int64_t t5 = -15770094LL;

	t5 = ((x25<x26)%(x27*x28));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	uint32_t x30 = 1687172U;
	int64_t x31 = 727382LL;
	static int32_t x32 = INT32_MAX;
	int64_t t6 = -106038365LL;

	t6 = ((x29<x30)%(x31*x32));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x42 = 2;
	static volatile int8_t x43 = INT8_MIN;
	int16_t x44 = -1;
	int32_t t7 = 11;

	t7 = ((x41<x42)%(x43*x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = UINT32_MAX;
	volatile int64_t x46 = -261838739572LL;
	volatile uint16_t x47 = 3U;
	int32_t t8 = 52;

	t8 = ((x45<x46)%(x47*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x57 = 4009U;
	uint8_t x58 = 10U;
	uint16_t x59 = UINT16_MAX;
	volatile uint32_t x60 = 3U;
	volatile uint32_t t9 = 1790272972U;

	t9 = ((x57<x58)%(x59*x60));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	int16_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	uint64_t t10 = 32491566LLU;

	t10 = ((x61<x62)%(x63*x64));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x69 = INT16_MAX;
	static volatile int64_t x70 = -16550203LL;
	int16_t x71 = -1;
	uint16_t x72 = 993U;
	volatile int32_t t11 = -4447201;

	t11 = ((x69<x70)%(x71*x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x93 = INT64_MIN;
	static int16_t x94 = INT16_MIN;
	volatile uint64_t x96 = UINT64_MAX;
	volatile uint64_t t12 = 588LLU;

	t12 = ((x93<x94)%(x95*x96));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x97 = -1LL;
	static volatile uint8_t x99 = 90U;
	uint64_t t13 = 2927851563319687062LLU;

	t13 = ((x97<x98)%(x99*x100));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x101 = -13721;
	int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MIN;
	static int8_t x104 = INT8_MAX;
	int32_t t14 = 0;

	t14 = ((x101<x102)%(x103*x104));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x109 = -285LL;
	uint64_t x110 = UINT64_MAX;
	int8_t x111 = INT8_MAX;
	volatile uint8_t x112 = UINT8_MAX;

	t15 = ((x109<x110)%(x111*x112));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x121 = 850;
	static uint64_t x122 = UINT64_MAX;
	int32_t x123 = -102783;
	volatile int16_t x124 = -10;
	int32_t t16 = -1;

	t16 = ((x121<x122)%(x123*x124));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x125 = INT32_MAX;
	static uint64_t x126 = 400591LLU;
	static volatile int32_t x127 = INT32_MIN;
	uint64_t t17 = 2679338LLU;

	t17 = ((x125<x126)%(x127*x128));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x129 = 5421721141LLU;
	uint32_t x130 = 2U;
	static volatile int8_t x132 = 32;
	int32_t t18 = 13467;

	t18 = ((x129<x130)%(x131*x132));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x133 = INT16_MIN;
	volatile int16_t x135 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	int32_t t19 = -4207;

	t19 = ((x133<x134)%(x135*x136));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x137 = 30314U;
	int64_t x138 = -1LL;
	int8_t x140 = -1;
	volatile int64_t t20 = -6905731461319193LL;

	t20 = ((x137<x138)%(x139*x140));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x142 = -1;
	uint32_t x143 = 37547U;
	static int16_t x144 = INT16_MIN;
	volatile uint32_t t21 = 1U;

	t21 = ((x141<x142)%(x143*x144));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = 1705270623LL;
	static int8_t x148 = INT8_MIN;

	t22 = ((x145<x146)%(x147*x148));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x153 = 467U;
	uint32_t x154 = 7324U;
	volatile uint16_t x155 = UINT16_MAX;
	int32_t t23 = 32606092;

	t23 = ((x153<x154)%(x155*x156));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x162 = -1LL;
	volatile uint16_t x163 = 258U;
	uint64_t x164 = 53097940LLU;
	static volatile uint64_t t24 = 3830675446LLU;

	t24 = ((x161<x162)%(x163*x164));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x165 = 45U;
	uint32_t x166 = 11003U;
	int8_t x167 = -1;
	static int16_t x168 = INT16_MIN;
	int32_t t25 = 9956;

	t25 = ((x165<x166)%(x167*x168));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x178 = 240;
	int16_t x179 = -1;
	volatile int32_t t26 = -3115965;

	t26 = ((x177<x178)%(x179*x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x181 = 219U;
	int8_t x182 = -1;
	int16_t x183 = INT16_MIN;
	volatile uint16_t x184 = 14U;
	volatile int32_t t27 = 595998;

	t27 = ((x181<x182)%(x183*x184));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x185 = 36U;
	volatile int32_t x186 = INT32_MIN;
	uint64_t x187 = 1365918352936LLU;
	int32_t x188 = 15;
	volatile uint64_t t28 = 4204633793907229LLU;

	t28 = ((x185<x186)%(x187*x188));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x190 = 13U;
	volatile int64_t x192 = -1LL;
	volatile int64_t t29 = -354227532535810LL;

	t29 = ((x189<x190)%(x191*x192));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = -1;
	static int64_t x194 = INT64_MAX;
	int16_t x195 = -27;

	t30 = ((x193<x194)%(x195*x196));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x197 = 2U;
	int16_t x198 = INT16_MIN;
	int32_t x199 = -1;
	volatile int8_t x200 = INT8_MIN;
	int32_t t31 = -30018859;

	t31 = ((x197<x198)%(x199*x200));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x201 = -1;
	static uint16_t x202 = 43U;
	uint16_t x203 = 502U;

	t32 = ((x201<x202)%(x203*x204));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x213 = UINT64_MAX;
	uint64_t x214 = 1399740916055LLU;
	int16_t x215 = INT16_MAX;
	static uint8_t x216 = 3U;
	volatile int32_t t33 = 768612283;

	t33 = ((x213<x214)%(x215*x216));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = UINT64_MAX;
	volatile uint8_t x220 = UINT8_MAX;
	volatile int32_t t34 = -14559024;

	t34 = ((x217<x218)%(x219*x220));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x221 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	static uint8_t x224 = 1U;

	t35 = ((x221<x222)%(x223*x224));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x229 = UINT8_MAX;
	uint8_t x230 = 3U;
	uint16_t x231 = 687U;
	int8_t x232 = 1;
	int32_t t36 = -7534177;

	t36 = ((x229<x230)%(x231*x232));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x245 = INT16_MAX;
	int8_t x246 = INT8_MIN;
	int64_t x247 = -22LL;
	uint32_t x248 = UINT32_MAX;
	static volatile int64_t t37 = -522368LL;

	t37 = ((x245<x246)%(x247*x248));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x249 = 118U;
	static int16_t x250 = INT16_MIN;

	t38 = ((x249<x250)%(x251*x252));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x253 = INT16_MAX;
	volatile uint64_t x254 = UINT64_MAX;
	uint32_t x255 = 208229U;
	uint32_t t39 = 12U;

	t39 = ((x253<x254)%(x255*x256));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = -1;
	uint32_t x263 = 1998164U;
	volatile int8_t x264 = -1;
	volatile uint32_t t40 = 24640397U;

	t40 = ((x261<x262)%(x263*x264));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x266 = 2;
	uint64_t x267 = 25194946LLU;
	volatile int16_t x268 = INT16_MAX;
	uint64_t t41 = 2916109457566383LLU;

	t41 = ((x265<x266)%(x267*x268));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = -1;
	uint16_t x272 = UINT16_MAX;
	volatile uint32_t t42 = 3931791U;

	t42 = ((x269<x270)%(x271*x272));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x273 = -17;
	uint16_t x274 = UINT16_MAX;
	uint16_t x275 = 318U;
	uint64_t x276 = 3290971492LLU;

	t43 = ((x273<x274)%(x275*x276));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x277 = 0U;
	int64_t x278 = -112800547LL;
	int64_t x279 = -1LL;
	volatile int16_t x280 = INT16_MAX;
	int64_t t44 = 4492528268LL;

	t44 = ((x277<x278)%(x279*x280));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	static volatile uint32_t t45 = 49756169U;

	t45 = ((x281<x282)%(x283*x284));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x293 = -1LL;
	uint32_t x294 = 770U;
	uint64_t x295 = 3307LLU;
	static int16_t x296 = INT16_MAX;
	uint64_t t46 = 11628743LLU;

	t46 = ((x293<x294)%(x295*x296));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x297 = -1;
	int16_t x298 = INT16_MAX;
	int32_t x299 = 26229369;
	int16_t x300 = -1;
	int32_t t47 = 7556939;

	t47 = ((x297<x298)%(x299*x300));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x313 = -1;
	int64_t x314 = 4250175661641018096LL;
	int8_t x315 = -1;
	static int16_t x316 = 1251;
	int32_t t48 = -80518;

	t48 = ((x313<x314)%(x315*x316));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x317 = 255897099LLU;
	uint64_t x320 = 755791792LLU;
	uint64_t t49 = 13874308729210LLU;

	t49 = ((x317<x318)%(x319*x320));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x326 = INT8_MAX;
	volatile uint8_t x327 = 9U;
	volatile int32_t t50 = 0;

	t50 = ((x325<x326)%(x327*x328));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x333 = 42;
	static int16_t x334 = 5729;
	int16_t x336 = INT16_MIN;
	static uint64_t t51 = 2709596372258796981LLU;

	t51 = ((x333<x334)%(x335*x336));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x337 = -1;
	volatile uint64_t x338 = UINT64_MAX;
	int8_t x339 = -1;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t52 = 205294U;

	t52 = ((x337<x338)%(x339*x340));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x341 = INT8_MAX;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	volatile uint32_t x344 = UINT32_MAX;

	t53 = ((x341<x342)%(x343*x344));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x345 = INT32_MAX;
	static int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	volatile uint32_t x348 = 105706479U;
	uint32_t t54 = 74066851U;

	t54 = ((x345<x346)%(x347*x348));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x350 = 765224574684850663LL;
	int8_t x351 = -1;
	static int64_t x352 = 21LL;
	static int64_t t55 = -3LL;

	t55 = ((x349<x350)%(x351*x352));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x353 = 5U;
	volatile int32_t x354 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t56 = -1119;

	t56 = ((x353<x354)%(x355*x356));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x357 = 9LL;
	int64_t x359 = INT64_MAX;
	int64_t t57 = 1831818863029LL;

	t57 = ((x357<x358)%(x359*x360));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	uint8_t x364 = 2U;

	t58 = ((x361<x362)%(x363*x364));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x365 = -453589183;
	static uint16_t x366 = 113U;
	static int8_t x367 = INT8_MAX;
	uint32_t x368 = 56U;
	static uint32_t t59 = 8082515U;

	t59 = ((x365<x366)%(x367*x368));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x369 = INT8_MIN;
	static volatile int64_t x371 = INT64_MAX;
	int32_t x372 = -1;

	t60 = ((x369<x370)%(x371*x372));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x377 = INT64_MIN;
	uint32_t x378 = 1953U;
	int8_t x379 = -1;
	static int16_t x380 = INT16_MIN;
	int32_t t61 = 165684040;

	t61 = ((x377<x378)%(x379*x380));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x394 = INT64_MIN;
	volatile int16_t x395 = -126;
	int16_t x396 = -1;
	static volatile int32_t t62 = -250509;

	t62 = ((x393<x394)%(x395*x396));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x397 = 7247U;
	int8_t x398 = INT8_MIN;
	uint8_t x399 = 15U;
	int8_t x400 = -1;
	int32_t t63 = -2636;

	t63 = ((x397<x398)%(x399*x400));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x401 = INT8_MAX;
	int64_t x402 = INT64_MIN;
	static volatile int8_t x403 = INT8_MIN;
	int16_t x404 = -2089;
	volatile int32_t t64 = 22;

	t64 = ((x401<x402)%(x403*x404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x413 = 65;
	volatile int32_t t65 = 523;

	t65 = ((x413<x414)%(x415*x416));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x417 = INT8_MIN;
	uint16_t x418 = 4U;
	int64_t x419 = INT64_MAX;
	volatile int64_t t66 = -16419601418LL;

	t66 = ((x417<x418)%(x419*x420));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x433 = INT64_MAX;
	int64_t x435 = -1LL;
	volatile int8_t x436 = -49;
	volatile int64_t t67 = 124679134730806878LL;

	t67 = ((x433<x434)%(x435*x436));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x441 = -30;
	static uint8_t x442 = UINT8_MAX;
	int32_t x443 = -52;
	int32_t t68 = -21573001;

	t68 = ((x441<x442)%(x443*x444));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x445 = 1;
	uint16_t x446 = UINT16_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	uint32_t x448 = 4U;
	volatile uint32_t t69 = 4U;

	t69 = ((x445<x446)%(x447*x448));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x449 = -1LL;
	static uint16_t x451 = UINT16_MAX;
	static int16_t x452 = INT16_MIN;

	t70 = ((x449<x450)%(x451*x452));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x457 = 33;
	uint32_t x458 = 43U;
	uint32_t x459 = 7190638U;

	t71 = ((x457<x458)%(x459*x460));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x461 = UINT16_MAX;
	volatile int32_t x462 = -1;
	volatile int16_t x463 = 6312;
	static int8_t x464 = INT8_MIN;

	t72 = ((x461<x462)%(x463*x464));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x469 = INT16_MIN;
	volatile uint64_t x470 = UINT64_MAX;
	static int8_t x471 = INT8_MIN;
	volatile uint64_t t73 = 41234700865439337LLU;

	t73 = ((x469<x470)%(x471*x472));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x477 = UINT64_MAX;
	int16_t x480 = -181;
	int32_t t74 = 658385;

	t74 = ((x477<x478)%(x479*x480));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x481 = -1946LL;
	int16_t x482 = INT16_MAX;
	volatile uint64_t x484 = 1LLU;
	uint64_t t75 = 6716LLU;

	t75 = ((x481<x482)%(x483*x484));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x493 = UINT8_MAX;
	int64_t x494 = -8398561405094LL;
	volatile uint32_t x495 = UINT32_MAX;
	int8_t x496 = -1;
	volatile uint32_t t76 = 61U;

	t76 = ((x493<x494)%(x495*x496));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x501 = 55U;
	volatile int32_t x502 = -5270759;
	static uint64_t x503 = 324LLU;
	uint32_t x504 = UINT32_MAX;

	t77 = ((x501<x502)%(x503*x504));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x509 = INT64_MIN;
	int8_t x510 = INT8_MIN;
	static volatile int8_t x511 = -1;
	static int32_t x512 = 2009904;
	volatile int32_t t78 = -1;

	t78 = ((x509<x510)%(x511*x512));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x513 = 1164802896LL;
	volatile uint32_t x514 = 1U;
	static int8_t x515 = -1;
	volatile int8_t x516 = -1;
	int32_t t79 = -3;

	t79 = ((x513<x514)%(x515*x516));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x517 = INT64_MAX;
	int32_t x518 = INT32_MIN;
	static uint64_t x519 = 145337156547033055LLU;
	int64_t x520 = -1LL;
	volatile uint64_t t80 = 647935689368LLU;

	t80 = ((x517<x518)%(x519*x520));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x522 = -1LL;
	int16_t x523 = INT16_MIN;
	volatile int32_t t81 = 1282;

	t81 = ((x521<x522)%(x523*x524));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x525 = 1435717937LL;
	int16_t x526 = -2750;
	volatile int8_t x527 = 14;
	static int16_t x528 = -1;
	int32_t t82 = -95667497;

	t82 = ((x525<x526)%(x527*x528));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x529 = -1;
	uint8_t x530 = UINT8_MAX;
	volatile int32_t x531 = -1;
	static int16_t x532 = INT16_MIN;
	volatile int32_t t83 = 276;

	t83 = ((x529<x530)%(x531*x532));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x533 = INT8_MIN;
	int64_t x534 = INT64_MAX;
	uint8_t x536 = 1U;
	int64_t t84 = 399LL;

	t84 = ((x533<x534)%(x535*x536));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x537 = UINT8_MAX;
	static int8_t x538 = INT8_MIN;
	uint64_t x539 = 866LLU;
	int32_t x540 = -3762;
	volatile uint64_t t85 = 1132520189LLU;

	t85 = ((x537<x538)%(x539*x540));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x549 = INT32_MAX;
	int32_t x551 = -1;
	volatile int64_t x552 = -1499LL;
	int64_t t86 = 4080LL;

	t86 = ((x549<x550)%(x551*x552));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x553 = 1U;
	static int32_t x555 = -1;
	static volatile uint16_t x556 = UINT16_MAX;

	t87 = ((x553<x554)%(x555*x556));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x566 = INT32_MAX;
	volatile int64_t x568 = 4281694325882301159LL;
	volatile int64_t t88 = -3789882LL;

	t88 = ((x565<x566)%(x567*x568));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x571 = -1;
	static uint64_t x572 = 6LLU;

	t89 = ((x569<x570)%(x571*x572));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x578 = UINT32_MAX;
	int16_t x579 = INT16_MAX;
	static uint8_t x580 = 66U;

	t90 = ((x577<x578)%(x579*x580));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x586 = 1441U;
	int16_t x587 = INT16_MIN;
	volatile int32_t t91 = 43;

	t91 = ((x585<x586)%(x587*x588));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x593 = INT64_MIN;
	static int64_t x594 = INT64_MIN;
	int64_t x595 = -41284355320LL;
	int64_t x596 = -1LL;
	static int64_t t92 = -91152016066782648LL;

	t92 = ((x593<x594)%(x595*x596));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x597 = 0;
	uint32_t x598 = 87840U;
	static int8_t x600 = INT8_MIN;

	t93 = ((x597<x598)%(x599*x600));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x601 = INT16_MIN;
	uint64_t x602 = 42468637461395LLU;
	int8_t x603 = INT8_MAX;
	int8_t x604 = 4;
	static volatile int32_t t94 = 7;

	t94 = ((x601<x602)%(x603*x604));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x605 = 120562558LLU;
	uint64_t x606 = 762812390817397LLU;
	volatile int64_t x607 = -1LL;
	static int16_t x608 = INT16_MIN;
	volatile int64_t t95 = 26LL;

	t95 = ((x605<x606)%(x607*x608));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x613 = 527627191226072LLU;
	volatile int8_t x614 = INT8_MIN;
	int32_t x616 = INT32_MAX;

	t96 = ((x613<x614)%(x615*x616));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x621 = -1LL;
	static int16_t x622 = 125;
	volatile int16_t x623 = 5;
	volatile uint64_t x624 = 7749949LLU;
	uint64_t t97 = 88212270LLU;

	t97 = ((x621<x622)%(x623*x624));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x625 = -836;
	uint8_t x626 = 15U;
	int16_t x627 = 83;
	static volatile int32_t x628 = -1;
	int32_t t98 = -22725105;

	t98 = ((x625<x626)%(x627*x628));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x637 = -519;
	int8_t x638 = -1;
	uint8_t x639 = 93U;
	uint16_t x640 = UINT16_MAX;
	int32_t t99 = -846;

	t99 = ((x637<x638)%(x639*x640));

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

