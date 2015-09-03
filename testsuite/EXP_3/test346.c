#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x8 = 227U;
volatile int32_t t1 = -13;
static volatile int8_t x36 = 5;
int8_t x39 = -1;
volatile int32_t t4 = 127518;
static int32_t x51 = 14451901;
uint32_t x52 = UINT32_MAX;
int32_t t6 = -2393;
int32_t x64 = -1;
int64_t x80 = -403876822LL;
volatile int16_t x105 = -1;
int32_t x142 = -32950;
static uint32_t x143 = 24599168U;
volatile int32_t x159 = 1029985110;
static int32_t t20 = -2790;
int64_t x177 = -36220273LL;
static int32_t x178 = INT32_MIN;
static uint32_t x180 = 5U;
volatile uint64_t x190 = UINT64_MAX;
int64_t x196 = INT64_MIN;
volatile int32_t t29 = 3;
static volatile int32_t x215 = -1;
int8_t x218 = -14;
volatile uint32_t x219 = 1023951465U;
static int8_t x228 = 0;
volatile int64_t x234 = 175247528386572161LL;
int32_t x249 = INT32_MIN;
int64_t x265 = INT64_MIN;
uint16_t x269 = 0U;
static uint32_t x280 = 2824U;
int16_t x286 = INT16_MIN;
int64_t x287 = -1LL;
int16_t x295 = INT16_MIN;
int16_t x306 = INT16_MAX;
uint64_t x310 = 1171002520572LLU;
uint32_t x338 = UINT32_MAX;
int8_t x342 = INT8_MAX;
int32_t t50 = -356;
uint8_t x346 = 10U;
volatile int32_t t52 = 21029938;
volatile uint16_t x358 = 1975U;
int16_t x359 = 1;
volatile int8_t x363 = 14;
static uint64_t x364 = 2966512505115535888LLU;
int32_t t55 = -1830;
volatile int8_t x369 = 2;
int32_t x370 = 798;
int32_t t56 = 640762636;
int64_t x374 = INT64_MAX;
volatile int32_t t57 = 245073444;
static volatile uint64_t x401 = UINT64_MAX;
uint64_t x403 = 8477009475766945980LLU;
volatile int32_t t59 = -195997;
static int16_t x416 = INT16_MAX;
static uint8_t x419 = 14U;
int8_t x420 = 0;
int32_t t63 = -101689;
uint64_t x425 = 9967337017LLU;
int64_t x446 = 1831014310922LL;
static volatile int32_t t66 = -18882302;
uint64_t x450 = 382285708427931LLU;
int8_t x472 = INT8_MIN;
uint8_t x476 = 0U;
static int8_t x482 = 0;
uint16_t x483 = UINT16_MAX;
static int64_t x490 = 10044983333LL;
static int16_t x494 = 5280;
int32_t t77 = 7;
int64_t x513 = 460945108324200506LL;
uint16_t x533 = 3U;
static uint16_t x536 = 10U;
int16_t x538 = INT16_MIN;
uint8_t x540 = 46U;
static int32_t t83 = 6555;
static int8_t x543 = -1;
uint8_t x547 = 1U;
int32_t x548 = INT32_MIN;
static volatile int32_t t85 = 175709;
int32_t x564 = -36886805;
int32_t t87 = 32;
uint16_t x570 = 100U;
int16_t x575 = INT16_MIN;
volatile uint64_t x587 = UINT64_MAX;
int64_t x591 = -1LL;
int16_t x592 = 1999;
volatile int32_t t93 = -10046733;
static int32_t t94 = 543915042;
volatile uint32_t x620 = UINT32_MAX;
int64_t x623 = INT64_MAX;
volatile int16_t x625 = 1;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint8_t x2 = 0U;
	static volatile uint32_t x3 = UINT32_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -263;

	t0 = ((x1+x2)==(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static int8_t x6 = -1;
	int16_t x7 = 829;

	t1 = ((x5+x6)==(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = 0;
	static volatile uint64_t x30 = 56352194154LLU;
	int16_t x31 = -1;
	uint32_t x32 = 55560038U;
	int32_t t2 = 7946152;

	t2 = ((x29+x30)==(x31*x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = -1;
	uint64_t x35 = 3538718691497596LLU;
	int32_t t3 = 67463;

	t3 = ((x33+x34)==(x35*x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x37 = -16284;
	volatile uint64_t x38 = 73998280175LLU;
	volatile int8_t x40 = INT8_MIN;

	t4 = ((x37+x38)==(x39*x40));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x49 = -1;
	volatile uint64_t x50 = 3160462487993LLU;
	volatile int32_t t5 = -31;

	t5 = ((x49+x50)==(x51*x52));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x53 = 359572532LLU;
	volatile int64_t x54 = -681335292LL;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = UINT16_MAX;

	t6 = ((x53+x54)==(x55*x56));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x57 = -4476897318424994781LL;
	static volatile int32_t x58 = INT32_MIN;
	int8_t x59 = -3;
	int16_t x60 = INT16_MAX;
	int32_t t7 = -899080;

	t7 = ((x57+x58)==(x59*x60));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x61 = INT16_MAX;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = -1;
	static int32_t t8 = 11;

	t8 = ((x61+x62)==(x63*x64));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x77 = -282238LL;
	static uint8_t x78 = 34U;
	uint8_t x79 = UINT8_MAX;
	int32_t t9 = 14754824;

	t9 = ((x77+x78)==(x79*x80));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x97 = 0U;
	uint8_t x98 = 85U;
	int64_t x99 = -3293913LL;
	uint64_t x100 = 2LLU;
	volatile int32_t t10 = 97826;

	t10 = ((x97+x98)==(x99*x100));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x101 = -464625753431LL;
	int64_t x102 = 38223LL;
	uint32_t x103 = 9828079U;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t11 = -639071992;

	t11 = ((x101+x102)==(x103*x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x106 = 226490694193608LLU;
	volatile int8_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	int32_t t12 = -496297361;

	t12 = ((x105+x106)==(x107*x108));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x113 = 9;
	uint16_t x114 = 45U;
	static uint32_t x115 = 2512027U;
	int32_t x116 = INT32_MIN;
	volatile int32_t t13 = -4117;

	t13 = ((x113+x114)==(x115*x116));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x121 = 10572LL;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = 4U;
	uint16_t x124 = 7U;
	volatile int32_t t14 = 136;

	t14 = ((x121+x122)==(x123*x124));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x125 = -1;
	int16_t x126 = INT16_MAX;
	uint8_t x127 = UINT8_MAX;
	uint64_t x128 = UINT64_MAX;
	int32_t t15 = -532311235;

	t15 = ((x125+x126)==(x127*x128));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x133 = 363;
	uint32_t x134 = UINT32_MAX;
	uint16_t x135 = UINT16_MAX;
	static int16_t x136 = INT16_MAX;
	volatile int32_t t16 = 2;

	t16 = ((x133+x134)==(x135*x136));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = 179;
	uint32_t x140 = 823U;
	volatile int32_t t17 = -12;

	t17 = ((x137+x138)==(x139*x140));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x141 = UINT16_MAX;
	volatile uint8_t x144 = UINT8_MAX;
	int32_t t18 = -84531;

	t18 = ((x141+x142)==(x143*x144));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x153 = -1LL;
	int16_t x154 = INT16_MIN;
	uint8_t x155 = 77U;
	static uint8_t x156 = 3U;
	int32_t t19 = -7;

	t19 = ((x153+x154)==(x155*x156));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x157 = UINT16_MAX;
	static int32_t x158 = INT32_MIN;
	int64_t x160 = 162564331LL;

	t20 = ((x157+x158)==(x159*x160));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x165 = 27098U;
	volatile int64_t x166 = -1LL;
	volatile int32_t x167 = -63;
	uint64_t x168 = UINT64_MAX;
	int32_t t21 = 3;

	t21 = ((x165+x166)==(x167*x168));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x173 = INT8_MIN;
	volatile int8_t x174 = -1;
	int8_t x175 = INT8_MIN;
	int8_t x176 = 0;
	volatile int32_t t22 = 6;

	t22 = ((x173+x174)==(x175*x176));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x179 = UINT8_MAX;
	volatile int32_t t23 = -850221;

	t23 = ((x177+x178)==(x179*x180));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x181 = -2263019LL;
	int32_t x182 = -1;
	int64_t x183 = INT64_MAX;
	int8_t x184 = 0;
	volatile int32_t t24 = -13095;

	t24 = ((x181+x182)==(x183*x184));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x185 = UINT16_MAX;
	int8_t x186 = -1;
	int64_t x187 = INT64_MAX;
	int16_t x188 = -1;
	int32_t t25 = -1;

	t25 = ((x185+x186)==(x187*x188));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x189 = -1;
	int8_t x191 = -47;
	uint32_t x192 = 511849214U;
	volatile int32_t t26 = 1;

	t26 = ((x189+x190)==(x191*x192));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x193 = 1;
	uint16_t x194 = 119U;
	uint64_t x195 = 969188247585207901LLU;
	int32_t t27 = -1;

	t27 = ((x193+x194)==(x195*x196));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x201 = -1;
	uint16_t x202 = 29U;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t28 = 0;

	t28 = ((x201+x202)==(x203*x204));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x205 = 0;
	int8_t x206 = INT8_MIN;
	static int64_t x207 = -1LL;
	static int8_t x208 = INT8_MIN;

	t29 = ((x205+x206)==(x207*x208));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x209 = 95U;
	static int16_t x210 = -1;
	int32_t x211 = -7860217;
	int8_t x212 = INT8_MIN;
	volatile int32_t t30 = 0;

	t30 = ((x209+x210)==(x211*x212));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x213 = 0U;
	int64_t x214 = -1LL;
	uint32_t x216 = 234U;
	volatile int32_t t31 = -7;

	t31 = ((x213+x214)==(x215*x216));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x217 = -1;
	volatile uint16_t x220 = 4U;
	volatile int32_t t32 = -1846;

	t32 = ((x217+x218)==(x219*x220));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x225 = INT32_MIN;
	static uint16_t x226 = 314U;
	int64_t x227 = INT64_MAX;
	volatile int32_t t33 = -5752;

	t33 = ((x225+x226)==(x227*x228));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x233 = INT16_MAX;
	static int64_t x235 = INT64_MAX;
	int64_t x236 = -1LL;
	volatile int32_t t34 = -7302;

	t34 = ((x233+x234)==(x235*x236));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	static int8_t x247 = 0;
	int16_t x248 = 20;
	volatile int32_t t35 = 3;

	t35 = ((x245+x246)==(x247*x248));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x250 = 1315492149084395LLU;
	uint16_t x251 = 49U;
	volatile uint8_t x252 = 15U;
	volatile int32_t t36 = 485;

	t36 = ((x249+x250)==(x251*x252));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile int8_t x254 = -1;
	volatile uint16_t x255 = UINT16_MAX;
	int32_t x256 = -1;
	int32_t t37 = 92985328;

	t37 = ((x253+x254)==(x255*x256));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x257 = 1U;
	int64_t x258 = INT64_MIN;
	static int16_t x259 = INT16_MAX;
	volatile uint8_t x260 = 50U;
	volatile int32_t t38 = -5135223;

	t38 = ((x257+x258)==(x259*x260));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x266 = 0U;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t39 = -46;

	t39 = ((x265+x266)==(x267*x268));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x270 = -1;
	uint32_t x271 = 43862215U;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t40 = -1;

	t40 = ((x269+x270)==(x271*x272));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x277 = 1481;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 2432994U;
	int32_t t41 = 12;

	t41 = ((x277+x278)==(x279*x280));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x285 = 140U;
	int32_t x288 = INT32_MAX;
	static volatile int32_t t42 = 34046;

	t42 = ((x285+x286)==(x287*x288));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x293 = INT16_MAX;
	uint32_t x294 = 513U;
	uint16_t x296 = UINT16_MAX;
	int32_t t43 = -947564;

	t43 = ((x293+x294)==(x295*x296));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x297 = 22726135U;
	int16_t x298 = INT16_MAX;
	int8_t x299 = INT8_MIN;
	int16_t x300 = 3;
	volatile int32_t t44 = 3999964;

	t44 = ((x297+x298)==(x299*x300));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x305 = INT64_MIN;
	int64_t x307 = -1LL;
	static uint8_t x308 = 0U;
	static volatile int32_t t45 = 950700;

	t45 = ((x305+x306)==(x307*x308));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x309 = INT16_MAX;
	uint8_t x311 = 7U;
	uint8_t x312 = 125U;
	volatile int32_t t46 = 57258089;

	t46 = ((x309+x310)==(x311*x312));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x329 = 36468U;
	int16_t x330 = INT16_MIN;
	int64_t x331 = -6LL;
	static volatile int32_t x332 = INT32_MAX;
	int32_t t47 = 20458532;

	t47 = ((x329+x330)==(x331*x332));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x333 = 329;
	volatile uint32_t x334 = UINT32_MAX;
	volatile int8_t x335 = -1;
	uint32_t x336 = 5535U;
	int32_t t48 = -26;

	t48 = ((x333+x334)==(x335*x336));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x337 = -1LL;
	int8_t x339 = -1;
	int32_t x340 = -1;
	static volatile int32_t t49 = -10952;

	t49 = ((x337+x338)==(x339*x340));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x341 = INT8_MIN;
	uint64_t x343 = 214697LLU;
	int32_t x344 = INT32_MIN;

	t50 = ((x341+x342)==(x343*x344));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x345 = 2180752LLU;
	static uint16_t x347 = UINT16_MAX;
	volatile int8_t x348 = INT8_MIN;
	int32_t t51 = -13027468;

	t51 = ((x345+x346)==(x347*x348));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MAX;
	uint16_t x351 = 8161U;
	int16_t x352 = INT16_MAX;

	t52 = ((x349+x350)==(x351*x352));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x357 = UINT16_MAX;
	static int32_t x360 = INT32_MAX;
	static volatile int32_t t53 = -213344;

	t53 = ((x357+x358)==(x359*x360));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x361 = 1;
	int32_t x362 = INT32_MIN;
	int32_t t54 = -665;

	t54 = ((x361+x362)==(x363*x364));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x365 = 599U;
	int8_t x366 = 3;
	static uint64_t x367 = 1895331351266959107LLU;
	static uint32_t x368 = UINT32_MAX;

	t55 = ((x365+x366)==(x367*x368));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x371 = UINT64_MAX;
	uint32_t x372 = 970257U;

	t56 = ((x369+x370)==(x371*x372));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x373 = UINT64_MAX;
	static int32_t x375 = -1;
	int16_t x376 = INT16_MAX;

	t57 = ((x373+x374)==(x375*x376));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x385 = -1;
	static uint64_t x386 = 998842236791354LLU;
	uint64_t x387 = 30LLU;
	int64_t x388 = INT64_MAX;
	static int32_t t58 = 91975830;

	t58 = ((x385+x386)==(x387*x388));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x402 = INT8_MAX;
	static volatile uint16_t x404 = 2469U;

	t59 = ((x401+x402)==(x403*x404));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x409 = INT32_MAX;
	int64_t x410 = -1LL;
	volatile int16_t x411 = -518;
	uint32_t x412 = 0U;
	static volatile int32_t t60 = -192;

	t60 = ((x409+x410)==(x411*x412));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x413 = INT16_MIN;
	static int8_t x414 = INT8_MIN;
	static int8_t x415 = INT8_MIN;
	volatile int32_t t61 = -9456608;

	t61 = ((x413+x414)==(x415*x416));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x417 = 1U;
	int8_t x418 = 8;
	static int32_t t62 = 31755;

	t62 = ((x417+x418)==(x419*x420));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x421 = INT32_MAX;
	static int64_t x422 = INT64_MIN;
	int16_t x423 = 0;
	int32_t x424 = INT32_MIN;

	t63 = ((x421+x422)==(x423*x424));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x426 = INT32_MIN;
	int16_t x427 = -1274;
	static uint16_t x428 = 941U;
	int32_t t64 = 402;

	t64 = ((x425+x426)==(x427*x428));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x429 = INT8_MIN;
	uint32_t x430 = 4022U;
	uint16_t x431 = UINT16_MAX;
	volatile uint32_t x432 = 5651U;
	int32_t t65 = -7;

	t65 = ((x429+x430)==(x431*x432));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x445 = INT64_MIN;
	uint64_t x447 = 43752244333178LLU;
	uint8_t x448 = 14U;

	t66 = ((x445+x446)==(x447*x448));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x449 = -1;
	static uint32_t x451 = UINT32_MAX;
	uint32_t x452 = UINT32_MAX;
	static int32_t t67 = -897;

	t67 = ((x449+x450)==(x451*x452));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x453 = INT16_MIN;
	uint8_t x454 = 79U;
	int8_t x455 = -3;
	uint32_t x456 = 773U;
	static volatile int32_t t68 = -1090324;

	t68 = ((x453+x454)==(x455*x456));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x469 = -20;
	volatile int32_t x470 = INT32_MAX;
	uint8_t x471 = 103U;
	int32_t t69 = -503899;

	t69 = ((x469+x470)==(x471*x472));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x473 = -6571215089494LL;
	int8_t x474 = -6;
	int16_t x475 = -1;
	volatile int32_t t70 = 6464710;

	t70 = ((x473+x474)==(x475*x476));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x477 = -1;
	int16_t x478 = -80;
	int16_t x479 = INT16_MIN;
	volatile int16_t x480 = INT16_MIN;
	int32_t t71 = 1;

	t71 = ((x477+x478)==(x479*x480));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x481 = 14;
	volatile uint16_t x484 = 3303U;
	int32_t t72 = 6356981;

	t72 = ((x481+x482)==(x483*x484));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x489 = -1;
	int8_t x491 = INT8_MIN;
	static int8_t x492 = 28;
	static volatile int32_t t73 = -51684;

	t73 = ((x489+x490)==(x491*x492));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x493 = UINT16_MAX;
	uint64_t x495 = 4962710702742LLU;
	static volatile uint64_t x496 = UINT64_MAX;
	int32_t t74 = -14173342;

	t74 = ((x493+x494)==(x495*x496));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x497 = UINT64_MAX;
	static int64_t x498 = INT64_MIN;
	int16_t x499 = -69;
	uint16_t x500 = 1502U;
	int32_t t75 = 437;

	t75 = ((x497+x498)==(x499*x500));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x501 = -1LL;
	uint64_t x502 = 9586916954LLU;
	static uint8_t x503 = 7U;
	uint32_t x504 = 5129U;
	static volatile int32_t t76 = 0;

	t76 = ((x501+x502)==(x503*x504));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x509 = -33787876792LL;
	uint8_t x510 = 1U;
	uint64_t x511 = UINT64_MAX;
	volatile int8_t x512 = 31;

	t77 = ((x509+x510)==(x511*x512));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x514 = INT16_MAX;
	static volatile uint8_t x515 = 6U;
	int16_t x516 = 35;
	volatile int32_t t78 = -378;

	t78 = ((x513+x514)==(x515*x516));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x521 = 471111633U;
	uint64_t x522 = 1LLU;
	volatile int32_t x523 = -1;
	static volatile int64_t x524 = -120910759784642636LL;
	static int32_t t79 = 19788539;

	t79 = ((x521+x522)==(x523*x524));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x525 = 304172U;
	int8_t x526 = 0;
	static int16_t x527 = 0;
	static int8_t x528 = INT8_MIN;
	volatile int32_t t80 = 630636;

	t80 = ((x525+x526)==(x527*x528));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x529 = -1;
	volatile uint8_t x530 = 6U;
	static int64_t x531 = INT64_MIN;
	uint64_t x532 = UINT64_MAX;
	volatile int32_t t81 = -113445;

	t81 = ((x529+x530)==(x531*x532));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x534 = UINT64_MAX;
	int8_t x535 = -1;
	int32_t t82 = -932525;

	t82 = ((x533+x534)==(x535*x536));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x537 = INT8_MIN;
	static int64_t x539 = -52470718420196034LL;

	t83 = ((x537+x538)==(x539*x540));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x541 = -1;
	static uint64_t x542 = UINT64_MAX;
	static uint64_t x544 = 87947571117487LLU;
	int32_t t84 = 401924;

	t84 = ((x541+x542)==(x543*x544));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x545 = 10607660700411226LLU;
	uint64_t x546 = 1028636524547614593LLU;

	t85 = ((x545+x546)==(x547*x548));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x561 = INT32_MAX;
	uint64_t x562 = 1048271057716LLU;
	uint8_t x563 = 2U;
	volatile int32_t t86 = 893301526;

	t86 = ((x561+x562)==(x563*x564));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x565 = 240302U;
	volatile int8_t x566 = INT8_MIN;
	static int16_t x567 = -1;
	static int32_t x568 = -1;

	t87 = ((x565+x566)==(x567*x568));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x569 = 15086253U;
	volatile uint32_t x571 = 0U;
	static uint32_t x572 = 480072500U;
	static volatile int32_t t88 = 68;

	t88 = ((x569+x570)==(x571*x572));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x573 = UINT8_MAX;
	volatile int64_t x574 = INT64_MIN;
	int64_t x576 = -65846250696638LL;
	volatile int32_t t89 = -7557;

	t89 = ((x573+x574)==(x575*x576));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x581 = -1;
	int16_t x582 = -1;
	volatile int8_t x583 = INT8_MAX;
	int32_t x584 = 21;
	int32_t t90 = 3740474;

	t90 = ((x581+x582)==(x583*x584));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x585 = 211;
	volatile int32_t x586 = INT32_MIN;
	static uint8_t x588 = UINT8_MAX;
	int32_t t91 = -262012200;

	t91 = ((x585+x586)==(x587*x588));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x589 = 0;
	int8_t x590 = INT8_MIN;
	volatile int32_t t92 = -4409;

	t92 = ((x589+x590)==(x591*x592));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x593 = 6764015055LL;
	int32_t x594 = 147469;
	static int32_t x595 = -1;
	uint64_t x596 = UINT64_MAX;

	t93 = ((x593+x594)==(x595*x596));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x609 = -1;
	int8_t x610 = INT8_MIN;
	static int16_t x611 = INT16_MIN;
	int64_t x612 = -31167017LL;

	t94 = ((x609+x610)==(x611*x612));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x617 = -1LL;
	int16_t x618 = INT16_MAX;
	static int16_t x619 = 51;
	int32_t t95 = 6667559;

	t95 = ((x617+x618)==(x619*x620));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x621 = -1LL;
	int32_t x622 = 6397310;
	volatile int16_t x624 = -1;
	volatile int32_t t96 = 230575;

	t96 = ((x621+x622)==(x623*x624));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x626 = 54U;
	uint64_t x627 = UINT64_MAX;
	volatile int32_t x628 = 29;
	static int32_t t97 = -22099419;

	t97 = ((x625+x626)==(x627*x628));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x633 = INT64_MAX;
	int32_t x634 = INT32_MIN;
	volatile uint32_t x635 = 15823U;
	int64_t x636 = -1LL;
	static int32_t t98 = -105;

	t98 = ((x633+x634)==(x635*x636));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x641 = 130853870;
	volatile int8_t x642 = INT8_MIN;
	uint16_t x643 = 195U;
	static uint8_t x644 = 27U;
	static volatile int32_t t99 = 55043;

	t99 = ((x641+x642)==(x643*x644));

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

