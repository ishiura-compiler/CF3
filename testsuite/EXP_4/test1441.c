#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = -1;
volatile int32_t t2 = 1368595;
int64_t x25 = 300364377LL;
int64_t x30 = 128982895890339LL;
uint64_t x32 = UINT64_MAX;
volatile int64_t t6 = 911825293995LL;
int8_t x51 = 0;
uint64_t x79 = 4070620537731014467LLU;
int8_t x81 = -52;
static volatile int16_t x83 = -1;
int64_t x84 = 1627LL;
int64_t x88 = INT64_MAX;
static volatile uint64_t x93 = 112374021448LLU;
int8_t x95 = -1;
static volatile uint64_t t15 = 0LLU;
volatile int64_t x100 = 745427548870220105LL;
static int32_t t16 = -10;
uint32_t x102 = 684830296U;
int32_t x115 = -3255;
int8_t x120 = INT8_MIN;
volatile int32_t x150 = 11517424;
volatile int32_t t21 = -575702;
int32_t t23 = -1;
int32_t x179 = INT32_MIN;
static uint64_t x182 = UINT64_MAX;
int16_t x185 = INT16_MIN;
int32_t x187 = INT32_MAX;
static volatile int8_t x188 = INT8_MIN;
int64_t x189 = 54421696631174443LL;
static int16_t x203 = -1;
int32_t x207 = -1;
volatile uint32_t x214 = 46328457U;
int16_t x215 = -1;
volatile int64_t t32 = 1264116850681266920LL;
int16_t x233 = INT16_MIN;
volatile int8_t x240 = INT8_MIN;
uint32_t t35 = 19249146U;
static volatile uint64_t x252 = 13563037336842LLU;
volatile int32_t t36 = 186342;
uint8_t x278 = UINT8_MAX;
uint64_t x284 = 118869573248LLU;
volatile uint64_t t42 = 13908LLU;
volatile uint16_t x290 = UINT16_MAX;
uint32_t x292 = UINT32_MAX;
static int8_t x297 = INT8_MAX;
int32_t x299 = INT32_MIN;
int16_t x300 = INT16_MAX;
static uint8_t x306 = UINT8_MAX;
static uint8_t x307 = 81U;
int16_t x312 = INT16_MIN;
int32_t x319 = INT32_MIN;
uint32_t x320 = 1836440U;
uint32_t t47 = 40323357U;
int64_t x321 = INT64_MIN;
int16_t x325 = INT16_MAX;
int8_t x327 = -26;
int16_t x328 = INT16_MIN;
uint16_t x337 = 3125U;
volatile uint16_t x341 = UINT16_MAX;
static uint32_t x343 = UINT32_MAX;
int32_t t51 = -16436677;
int8_t x353 = INT8_MIN;
int8_t x360 = -1;
uint32_t t53 = 5U;
int8_t x367 = INT8_MAX;
volatile int32_t t54 = 1;
int8_t x379 = INT8_MIN;
int8_t x391 = INT8_MIN;
uint64_t x392 = 2012LLU;
uint32_t x405 = UINT32_MAX;
int16_t x408 = 2882;
int16_t x411 = INT16_MAX;
int64_t x425 = -392975902236069085LL;
volatile int16_t x431 = -24;
int16_t x452 = -20;
int64_t x456 = -839867430115872770LL;
uint8_t x476 = 11U;
int16_t x477 = INT16_MIN;
static volatile int32_t t70 = 15364;
uint16_t x498 = 1U;
volatile uint64_t x502 = 0LLU;
uint64_t x519 = 2021514329803618LLU;
int8_t x540 = -1;
static volatile int32_t x541 = 1;
volatile uint32_t x566 = UINT32_MAX;
uint32_t x579 = 36U;
volatile int32_t t84 = 3687723;
volatile int8_t x585 = 2;
uint16_t x588 = 23330U;
static volatile int32_t x595 = 1;
uint8_t x600 = 25U;
uint64_t t88 = 491LLU;
int32_t x613 = INT32_MIN;
int16_t x619 = -7823;
static int64_t x622 = INT64_MAX;
int32_t x624 = 2578;
int64_t t93 = INT64_MAX;
int8_t x633 = INT8_MIN;
uint8_t x637 = 18U;
static volatile int64_t t98 = -4LL;


void f0(void) {
	uint64_t x1 = 78545706502LLU;
	static uint64_t x2 = UINT64_MAX;
	uint16_t x3 = UINT16_MAX;
	int64_t x4 = -1LL;
	volatile uint64_t t0 = 762LLU;

	t0 = (x1&(x2>>(x3<x4)));

	if (t0 != 78545706502LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = 26U;
	static int32_t x11 = -1;
	uint64_t x12 = UINT64_MAX;
	int32_t t1 = -26049450;

	t1 = (x9&(x10>>(x11<x12)));

	if (t1 != 26) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = INT16_MIN;
	uint8_t x14 = UINT8_MAX;
	static uint32_t x15 = UINT32_MAX;
	int16_t x16 = -1;

	t2 = (x13&(x14>>(x15<x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = 0;
	uint32_t x19 = 1158019703U;
	static int8_t x20 = 1;
	volatile int64_t t3 = -11082792326LL;

	t3 = (x17&(x18>>(x19<x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = 29416U;
	uint8_t x22 = UINT8_MAX;
	volatile int16_t x23 = INT16_MIN;
	uint16_t x24 = 2U;
	uint32_t t4 = 940U;

	t4 = (x21&(x22>>(x23<x24)));

	if (t4 != 104U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = UINT8_MAX;
	uint32_t x27 = 456751591U;
	uint64_t x28 = UINT64_MAX;
	volatile int64_t t5 = 36136169LL;

	t5 = (x25&(x26>>(x27<x28)));

	if (t5 != 89LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MAX;
	int8_t x31 = -25;

	t6 = (x29&(x30>>(x31<x32)));

	if (t6 != 81LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	uint32_t x38 = 100115U;
	static uint32_t x39 = 24212U;
	uint16_t x40 = 2U;
	volatile uint32_t t7 = 21748U;

	t7 = (x37&(x38>>(x39<x40)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x49 = UINT16_MAX;
	uint16_t x50 = 17880U;
	int16_t x52 = INT16_MIN;
	int32_t t8 = 0;

	t8 = (x49&(x50>>(x51<x52)));

	if (t8 != 17880) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 428U;
	uint32_t x55 = 1018701U;
	static uint32_t x56 = 218U;
	volatile uint32_t t9 = 756434828U;

	t9 = (x53&(x54>>(x55<x56)));

	if (t9 != 172U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = INT32_MAX;
	int64_t x58 = INT64_MAX;
	uint8_t x59 = UINT8_MAX;
	uint16_t x60 = 3U;
	int64_t t10 = -1951617LL;

	t10 = (x57&(x58>>(x59<x60)));

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	static uint8_t x66 = UINT8_MAX;
	int8_t x67 = INT8_MAX;
	int32_t x68 = 2;
	int32_t t11 = 85;

	t11 = (x65&(x66>>(x67<x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = 12047624373LL;
	int8_t x78 = 45;
	int16_t x80 = -1;
	volatile int64_t t12 = -10LL;

	t12 = (x77&(x78>>(x79<x80)));

	if (t12 != 20LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x82 = 1U;
	volatile int32_t t13 = 1;

	t13 = (x81&(x82>>(x83<x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = -1;
	int16_t x86 = INT16_MAX;
	static int16_t x87 = INT16_MAX;
	volatile int32_t t14 = 49;

	t14 = (x85&(x86>>(x87<x88)));

	if (t14 != 16383) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x94 = 238U;
	int8_t x96 = INT8_MAX;

	t15 = (x93&(x94>>(x95<x96)));

	if (t15 != 64LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x97 = 1U;
	volatile uint16_t x98 = 32635U;
	int8_t x99 = INT8_MIN;

	t16 = (x97&(x98>>(x99<x100)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = 14262855;
	static int64_t x103 = INT64_MAX;
	uint64_t x104 = 268910895531120LLU;
	uint32_t t17 = 242395U;

	t17 = (x101&(x102>>(x103<x104)));

	if (t17 != 13738560U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x113 = 47567U;
	volatile int32_t x114 = 0;
	static volatile int64_t x116 = -1LL;
	uint32_t t18 = 4U;

	t18 = (x113&(x114>>(x115<x116)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x117 = UINT64_MAX;
	int8_t x118 = 8;
	uint16_t x119 = 3050U;
	static volatile uint64_t t19 = 1147197LLU;

	t19 = (x117&(x118>>(x119<x120)));

	if (t19 != 8LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x133 = 6U;
	uint8_t x134 = UINT8_MAX;
	static int16_t x135 = 1;
	uint16_t x136 = 104U;
	volatile uint32_t t20 = 0U;

	t20 = (x133&(x134>>(x135<x136)));

	if (t20 != 6U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x149 = -1;
	int8_t x151 = -1;
	static int64_t x152 = INT64_MIN;

	t21 = (x149&(x150>>(x151<x152)));

	if (t21 != 11517424) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x153 = 0;
	uint16_t x154 = 0U;
	int64_t x155 = INT64_MIN;
	volatile uint64_t x156 = 20997LLU;
	int32_t t22 = 1;

	t22 = (x153&(x154>>(x155<x156)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x165 = INT8_MIN;
	static uint8_t x166 = 1U;
	int64_t x167 = INT64_MAX;
	static int8_t x168 = -9;

	t23 = (x165&(x166>>(x167<x168)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x169 = -2LL;
	volatile uint32_t x170 = UINT32_MAX;
	static int64_t x171 = INT64_MIN;
	static uint64_t x172 = 21328997LLU;
	volatile int64_t t24 = 43288831315837993LL;

	t24 = (x169&(x170>>(x171<x172)));

	if (t24 != 4294967294LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x177 = 25LL;
	static uint64_t x178 = 2973LLU;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t25 = 7209305581530898409LLU;

	t25 = (x177&(x178>>(x179<x180)));

	if (t25 != 8LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x181 = -1;
	uint16_t x183 = 3840U;
	uint16_t x184 = 1030U;
	uint64_t t26 = UINT64_MAX;

	t26 = (x181&(x182>>(x183<x184)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x186 = 23U;
	int32_t t27 = -115451;

	t27 = (x185&(x186>>(x187<x188)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x190 = 594U;
	uint64_t x191 = 255004677450643332LLU;
	static uint8_t x192 = 102U;
	static volatile int64_t t28 = 16371425682776LL;

	t28 = (x189&(x190>>(x191<x192)));

	if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x193 = 170U;
	uint32_t x194 = 3967049U;
	volatile uint32_t x195 = UINT32_MAX;
	static int32_t x196 = INT32_MIN;
	volatile uint32_t t29 = 77015250U;

	t29 = (x193&(x194>>(x195<x196)));

	if (t29 != 8U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x201 = INT8_MAX;
	uint32_t x202 = 9796U;
	static uint16_t x204 = 8U;
	uint32_t t30 = 25975891U;

	t30 = (x201&(x202>>(x203<x204)));

	if (t30 != 34U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x205 = INT32_MIN;
	uint8_t x206 = 100U;
	static volatile int32_t x208 = INT32_MAX;
	int32_t t31 = 1820;

	t31 = (x205&(x206>>(x207<x208)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x213 = 7822178694928355LL;
	volatile int64_t x216 = INT64_MIN;

	t32 = (x213&(x214>>(x215<x216)));

	if (t32 != 37880449LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x234 = 2351U;
	volatile int64_t x235 = 8861583680083LL;
	volatile int32_t x236 = INT32_MIN;
	static volatile int32_t t33 = 1672342;

	t33 = (x233&(x234>>(x235<x236)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x237 = INT64_MAX;
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = 5;
	volatile int64_t t34 = 52036951LL;

	t34 = (x237&(x238>>(x239<x240)));

	if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x241 = 59387045U;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	static int16_t x244 = -1650;

	t35 = (x241&(x242>>(x243<x244)));

	if (t35 != 11429U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x249 = -1;
	int8_t x250 = INT8_MAX;
	int8_t x251 = INT8_MIN;

	t36 = (x249&(x250>>(x251<x252)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x253 = -1;
	int64_t x254 = INT64_MAX;
	static int8_t x255 = -1;
	uint16_t x256 = 23U;
	int64_t t37 = -7248092723LL;

	t37 = (x253&(x254>>(x255<x256)));

	if (t37 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x257 = INT16_MAX;
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 16242024U;
	int32_t t38 = 705147913;

	t38 = (x257&(x258>>(x259<x260)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x273 = 99762359120336LLU;
	uint32_t x274 = UINT32_MAX;
	volatile int64_t x275 = -365294LL;
	uint32_t x276 = UINT32_MAX;
	uint64_t t39 = 501LLU;

	t39 = (x273&(x274>>(x275<x276)));

	if (t39 != 1006252496LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x277 = INT32_MAX;
	volatile int8_t x279 = -1;
	volatile int64_t x280 = INT64_MIN;
	static int32_t t40 = -484;

	t40 = (x277&(x278>>(x279<x280)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x281 = 16U;
	static int8_t x282 = 62;
	uint32_t x283 = 252U;
	int32_t t41 = -1433742;

	t41 = (x281&(x282>>(x283<x284)));

	if (t41 != 16) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x285 = UINT64_MAX;
	uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 3U;
	volatile uint64_t x288 = 1831950489301919LLU;

	t42 = (x285&(x286>>(x287<x288)));

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x289 = INT16_MIN;
	uint32_t x291 = UINT32_MAX;
	int32_t t43 = 302087200;

	t43 = (x289&(x290>>(x291<x292)));

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x298 = 98543453U;
	uint32_t t44 = 2507598U;

	t44 = (x297&(x298>>(x299<x300)));

	if (t44 != 46U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x305 = 2982512U;
	volatile int16_t x308 = INT16_MIN;
	static uint32_t t45 = 240U;

	t45 = (x305&(x306>>(x307<x308)));

	if (t45 != 112U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x309 = INT32_MIN;
	static int32_t x310 = INT32_MAX;
	static int64_t x311 = -268007348842972LL;
	volatile int32_t t46 = 22424082;

	t46 = (x309&(x310>>(x311<x312)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x317 = -4;
	static uint32_t x318 = UINT32_MAX;

	t47 = (x317&(x318>>(x319<x320)));

	if (t47 != 4294967292U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x322 = INT32_MAX;
	volatile uint16_t x323 = UINT16_MAX;
	static int8_t x324 = INT8_MAX;
	int64_t t48 = -3090209248LL;

	t48 = (x321&(x322>>(x323<x324)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x326 = UINT8_MAX;
	int32_t t49 = 813484;

	t49 = (x325&(x326>>(x327<x328)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x338 = UINT16_MAX;
	int64_t x339 = INT64_MIN;
	int32_t x340 = -1;
	volatile int32_t t50 = -22696077;

	t50 = (x337&(x338>>(x339<x340)));

	if (t50 != 3125) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x342 = INT32_MAX;
	int8_t x344 = -10;

	t51 = (x341&(x342>>(x343<x344)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x354 = 35U;
	static volatile uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MAX;
	static volatile uint32_t t52 = 80703351U;

	t52 = (x353&(x354>>(x355<x356)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x357 = INT16_MAX;
	uint32_t x358 = 33820453U;
	int32_t x359 = INT32_MAX;

	t53 = (x357&(x358>>(x359<x360)));

	if (t53 != 3877U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = INT8_MAX;
	int32_t x368 = 1;

	t54 = (x365&(x366>>(x367<x368)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = 4571260487755685LL;
	int64_t x375 = INT64_MAX;
	uint16_t x376 = 5U;
	int64_t t55 = 105162097LL;

	t55 = (x373&(x374>>(x375<x376)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x377 = 4118971974574251812LLU;
	static volatile uint16_t x378 = UINT16_MAX;
	volatile uint8_t x380 = UINT8_MAX;
	volatile uint64_t t56 = 31169018073279LLU;

	t56 = (x377&(x378>>(x379<x380)));

	if (t56 != 7972LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x389 = INT64_MAX;
	int8_t x390 = INT8_MAX;
	static int64_t t57 = 9LL;

	t57 = (x389&(x390>>(x391<x392)));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x401 = UINT8_MAX;
	static volatile uint8_t x402 = UINT8_MAX;
	uint64_t x403 = 1313508LLU;
	int32_t x404 = INT32_MIN;
	volatile int32_t t58 = -119588208;

	t58 = (x401&(x402>>(x403<x404)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x406 = 43932280LL;
	int16_t x407 = -1;
	static int64_t t59 = 217176556LL;

	t59 = (x405&(x406>>(x407<x408)));

	if (t59 != 21966140LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x409 = 7972350;
	static volatile int16_t x410 = INT16_MAX;
	uint8_t x412 = UINT8_MAX;
	int32_t t60 = -3;

	t60 = (x409&(x410>>(x411<x412)));

	if (t60 != 9726) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x426 = 38758LLU;
	int16_t x427 = -82;
	uint8_t x428 = 2U;
	static uint64_t t61 = 282738898016686LLU;

	t61 = (x425&(x426>>(x427<x428)));

	if (t61 != 803LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x429 = 54U;
	uint64_t x430 = UINT64_MAX;
	int16_t x432 = INT16_MAX;
	uint64_t t62 = 1LLU;

	t62 = (x429&(x430>>(x431<x432)));

	if (t62 != 54LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x437 = -3;
	volatile uint32_t x438 = 390751U;
	volatile int16_t x439 = -4;
	volatile uint8_t x440 = 102U;
	static volatile uint32_t t63 = 1239U;

	t63 = (x437&(x438>>(x439<x440)));

	if (t63 != 195373U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x449 = 3;
	uint32_t x450 = 1342239U;
	uint16_t x451 = UINT16_MAX;
	uint32_t t64 = 384424128U;

	t64 = (x449&(x450>>(x451<x452)));

	if (t64 != 3U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x453 = 88;
	static volatile uint64_t x454 = 1256043889585230LLU;
	uint32_t x455 = UINT32_MAX;
	uint64_t t65 = 33398032875LLU;

	t65 = (x453&(x454>>(x455<x456)));

	if (t65 != 72LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x469 = INT8_MIN;
	uint8_t x470 = UINT8_MAX;
	static uint64_t x471 = UINT64_MAX;
	uint16_t x472 = 6U;
	volatile int32_t t66 = 84;

	t66 = (x469&(x470>>(x471<x472)));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x473 = INT16_MAX;
	static int64_t x474 = 3947756674113445690LL;
	int32_t x475 = INT32_MIN;
	int64_t t67 = 73969LL;

	t67 = (x473&(x474>>(x475<x476)));

	if (t67 != 20381LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x478 = UINT16_MAX;
	volatile int32_t x479 = INT32_MAX;
	static volatile uint32_t x480 = 85653597U;
	static int32_t t68 = -145;

	t68 = (x477&(x478>>(x479<x480)));

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x485 = -6895219LL;
	volatile uint8_t x486 = UINT8_MAX;
	int16_t x487 = 402;
	int64_t x488 = INT64_MIN;
	volatile int64_t t69 = -16588945485358875LL;

	t69 = (x485&(x486>>(x487<x488)));

	if (t69 != 141LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x489 = -1;
	int16_t x490 = INT16_MAX;
	int16_t x491 = -3;
	volatile int64_t x492 = INT64_MIN;

	t70 = (x489&(x490>>(x491<x492)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x493 = 46913042U;
	static volatile uint8_t x494 = 11U;
	volatile int8_t x495 = -1;
	int16_t x496 = -1;
	static volatile uint32_t t71 = 11331911U;

	t71 = (x493&(x494>>(x495<x496)));

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x497 = -2314;
	uint16_t x499 = 49U;
	static int64_t x500 = INT64_MIN;
	int32_t t72 = -4804;

	t72 = (x497&(x498>>(x499<x500)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x501 = INT16_MIN;
	int8_t x503 = INT8_MIN;
	int16_t x504 = INT16_MIN;
	static volatile uint64_t t73 = 294594923408286053LLU;

	t73 = (x501&(x502>>(x503<x504)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x517 = -2582287339222LL;
	volatile uint32_t x518 = 9554963U;
	static int16_t x520 = INT16_MIN;
	volatile int64_t t74 = 6532286683067LL;

	t74 = (x517&(x518>>(x519<x520)));

	if (t74 != 532488LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x521 = 0LL;
	int8_t x522 = 1;
	volatile int32_t x523 = INT32_MIN;
	int16_t x524 = INT16_MAX;
	int64_t t75 = -473318LL;

	t75 = (x521&(x522>>(x523<x524)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x525 = 262;
	int8_t x526 = 15;
	static int16_t x527 = -1;
	int64_t x528 = INT64_MIN;
	volatile int32_t t76 = -169212688;

	t76 = (x525&(x526>>(x527<x528)));

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	int64_t x535 = INT64_MIN;
	int16_t x536 = -1;
	volatile int32_t t77 = 23005;

	t77 = (x533&(x534>>(x535<x536)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x537 = 40025431446LL;
	volatile int8_t x538 = INT8_MAX;
	volatile uint64_t x539 = UINT64_MAX;
	int64_t t78 = 141LL;

	t78 = (x537&(x538>>(x539<x540)));

	if (t78 != 22LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x542 = 0;
	int16_t x543 = -24;
	int8_t x544 = 0;
	static volatile int32_t t79 = 103;

	t79 = (x541&(x542>>(x543<x544)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x545 = -1;
	uint16_t x546 = UINT16_MAX;
	int8_t x547 = INT8_MIN;
	static uint16_t x548 = UINT16_MAX;
	static int32_t t80 = -27870536;

	t80 = (x545&(x546>>(x547<x548)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x557 = UINT64_MAX;
	int64_t x558 = 112987742862114LL;
	uint32_t x559 = UINT32_MAX;
	int8_t x560 = -3;
	volatile uint64_t t81 = 9682430177775206LLU;

	t81 = (x557&(x558>>(x559<x560)));

	if (t81 != 112987742862114LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x565 = INT64_MIN;
	int32_t x567 = INT32_MAX;
	int64_t x568 = 136098216783679145LL;
	volatile int64_t t82 = -4LL;

	t82 = (x565&(x566>>(x567<x568)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x569 = INT64_MIN;
	int8_t x570 = INT8_MAX;
	uint64_t x571 = 4080394776789LLU;
	uint16_t x572 = 8U;
	static volatile int64_t t83 = 142979654LL;

	t83 = (x569&(x570>>(x571<x572)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x577 = UINT8_MAX;
	int16_t x578 = 0;
	int16_t x580 = INT16_MAX;

	t84 = (x577&(x578>>(x579<x580)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x586 = 171505U;
	volatile int64_t x587 = INT64_MIN;
	volatile uint32_t t85 = 768U;

	t85 = (x585&(x586>>(x587<x588)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x589 = -1LL;
	uint64_t x590 = UINT64_MAX;
	uint32_t x591 = 13U;
	int8_t x592 = 29;
	volatile uint64_t t86 = 174387LLU;

	t86 = (x589&(x590>>(x591<x592)));

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x593 = 2889U;
	uint8_t x594 = UINT8_MAX;
	int16_t x596 = 181;
	int32_t t87 = 85;

	t87 = (x593&(x594>>(x595<x596)));

	if (t87 != 73) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x597 = -1;
	uint64_t x598 = UINT64_MAX;
	int32_t x599 = INT32_MIN;

	t88 = (x597&(x598>>(x599<x600)));

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x605 = -1;
	int16_t x606 = 1463;
	int8_t x607 = INT8_MIN;
	uint8_t x608 = 19U;
	static int32_t t89 = 35942812;

	t89 = (x605&(x606>>(x607<x608)));

	if (t89 != 731) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x609 = INT16_MIN;
	int64_t x610 = INT64_MAX;
	int8_t x611 = -1;
	static int16_t x612 = 3;
	int64_t t90 = 435830672376465771LL;

	t90 = (x609&(x610>>(x611<x612)));

	if (t90 != 4611686018427355136LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x614 = 40247;
	volatile int64_t x615 = -865LL;
	int32_t x616 = 1061635540;
	int32_t t91 = 19033;

	t91 = (x613&(x614>>(x615<x616)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x617 = 1U;
	volatile int8_t x618 = 0;
	static volatile int16_t x620 = -1;
	volatile int32_t t92 = 51;

	t92 = (x617&(x618>>(x619<x620)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x621 = INT64_MAX;
	uint32_t x623 = 232676U;

	t93 = (x621&(x622>>(x623<x624)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x634 = UINT64_MAX;
	static int64_t x635 = INT64_MIN;
	int8_t x636 = INT8_MIN;
	uint64_t t94 = 104LLU;

	t94 = (x633&(x634>>(x635<x636)));

	if (t94 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x638 = INT64_MAX;
	uint64_t x639 = 22056877940276386LLU;
	uint8_t x640 = UINT8_MAX;
	int64_t t95 = 7884332LL;

	t95 = (x637&(x638>>(x639<x640)));

	if (t95 != 18LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x649 = INT32_MAX;
	uint8_t x650 = 0U;
	int16_t x651 = -1;
	volatile int32_t x652 = INT32_MIN;
	volatile int32_t t96 = -4467;

	t96 = (x649&(x650>>(x651<x652)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x653 = -1;
	volatile uint64_t x654 = 24445360528LLU;
	int8_t x655 = 0;
	int32_t x656 = INT32_MIN;
	static volatile uint64_t t97 = 46394570034LLU;

	t97 = (x653&(x654>>(x655<x656)));

	if (t97 != 24445360528LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x661 = 253U;
	int64_t x662 = 18539033620555LL;
	volatile uint8_t x663 = UINT8_MAX;
	int64_t x664 = 21412133393428LL;

	t98 = (x661&(x662>>(x663<x664)));

	if (t98 != 37LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x665 = UINT16_MAX;
	volatile uint8_t x666 = 5U;
	volatile int32_t x667 = INT32_MIN;
	int64_t x668 = INT64_MAX;
	static volatile int32_t t99 = -98620847;

	t99 = (x665&(x666>>(x667<x668)));

	if (t99 != 2) { NG(); } else { ; }
	
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

