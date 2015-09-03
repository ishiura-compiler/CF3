#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 126;
uint32_t x44 = UINT32_MAX;
volatile uint64_t x73 = 3752LLU;
volatile int8_t x74 = INT8_MIN;
static int8_t x76 = INT8_MAX;
static int32_t x79 = INT32_MAX;
int32_t x82 = -7;
volatile int32_t t8 = 77;
static int8_t x85 = INT8_MAX;
uint64_t x86 = 35276383244202912LLU;
volatile uint64_t x88 = 21LLU;
int32_t t9 = -1597392;
int16_t x108 = 2213;
static volatile int32_t t10 = 5689576;
static int32_t x115 = -122;
int8_t x129 = 5;
volatile int32_t t12 = -221208192;
int8_t x139 = -8;
uint16_t x153 = 30U;
int16_t x159 = 15388;
int16_t x160 = INT16_MIN;
static int32_t t17 = 750741;
int32_t x176 = INT32_MIN;
uint32_t x177 = 183099U;
int32_t x178 = -1;
int32_t t20 = -101067;
int32_t x183 = INT32_MIN;
int64_t x189 = 590360959LL;
volatile int8_t x190 = INT8_MIN;
uint64_t x192 = 7232942520324450LLU;
volatile int64_t x194 = INT64_MAX;
int64_t x206 = -1LL;
int64_t x239 = -9LL;
uint64_t x242 = 1LLU;
uint32_t x249 = 58U;
int16_t x252 = INT16_MIN;
int32_t x266 = INT32_MAX;
static volatile int8_t x276 = INT8_MIN;
static int16_t x278 = -442;
volatile int32_t t35 = -7573814;
int64_t x287 = INT64_MIN;
int64_t x294 = -1LL;
volatile int32_t x297 = 30;
volatile int8_t x335 = INT8_MIN;
uint32_t x336 = UINT32_MAX;
static uint8_t x345 = 70U;
volatile int8_t x348 = 1;
int32_t t46 = 15240254;
static volatile int8_t x369 = INT8_MAX;
uint64_t x372 = UINT64_MAX;
int32_t x386 = INT32_MIN;
volatile int8_t x387 = 53;
int8_t x399 = INT8_MIN;
static uint32_t x400 = 38911476U;
int32_t t50 = -11526;
uint32_t x402 = UINT32_MAX;
volatile int16_t x417 = INT16_MAX;
uint64_t x422 = 981248965028255LLU;
volatile int64_t x423 = INT64_MIN;
uint16_t x438 = 1U;
uint16_t x442 = 29U;
uint64_t x443 = 229937750828LLU;
static uint32_t x444 = 10331U;
int8_t x472 = INT8_MIN;
int8_t x495 = 0;
int64_t x498 = 10140935141096LL;
int16_t x507 = INT16_MIN;
volatile int32_t t64 = -641604;
uint32_t x510 = 4452U;
int16_t x511 = INT16_MIN;
static volatile int32_t t65 = -57;
uint16_t x520 = 345U;
static volatile int32_t t66 = 45339090;
uint64_t x524 = 708924294828LLU;
static uint8_t x525 = 2U;
int64_t x531 = INT64_MIN;
int16_t x538 = INT16_MIN;
static int32_t x557 = INT32_MAX;
static int64_t x558 = -619776LL;
int16_t x559 = INT16_MIN;
int32_t t73 = -19079;
static int16_t x571 = -3;
int32_t x598 = INT32_MIN;
int16_t x600 = INT16_MIN;
static volatile int32_t t77 = -197026;
int32_t x606 = -1;
uint16_t x615 = 1022U;
volatile int32_t t79 = -7659;
volatile uint32_t x617 = 1U;
int32_t x623 = INT32_MIN;
int32_t t82 = -1;
volatile uint16_t x632 = 14U;
volatile int32_t t83 = 0;
int32_t x645 = 9364;
int16_t x646 = 2;
static int8_t x649 = INT8_MAX;
int64_t x651 = -40592629101179240LL;
uint32_t x652 = 18U;
volatile int8_t x667 = 5;
int32_t t86 = 12739;
volatile int32_t t87 = -904;
int32_t x680 = INT32_MIN;
int16_t x701 = 103;
static int16_t x702 = INT16_MIN;
int8_t x714 = 9;
static int32_t t93 = -1004961040;
uint64_t x729 = UINT64_MAX;
int32_t x738 = -1;
int16_t x748 = -5;
int32_t x753 = 131541;
volatile int32_t x756 = -54830712;
uint16_t x760 = 340U;


void f0(void) {
	int16_t x1 = 1;
	uint32_t x2 = 131313U;
	static int8_t x3 = 0;
	int16_t x4 = -6639;
	static int32_t t0 = 2675810;

	t0 = ((x1>>(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 398906LLU;
	int16_t x10 = -1;
	static int16_t x11 = INT16_MAX;
	static uint32_t x12 = 49251675U;

	t1 = ((x9>>(x10<x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = 4656;
	int16_t x14 = 9050;
	volatile int64_t x15 = 1983226845176998936LL;
	uint16_t x16 = 204U;
	int32_t t2 = -2234060;

	t2 = ((x13>>(x14<x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = 32U;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = -1;
	uint64_t x28 = 32349LLU;
	int32_t t3 = 80600237;

	t3 = ((x25>>(x26<x27))==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = 5;
	uint8_t x38 = 53U;
	int16_t x39 = 0;
	volatile uint8_t x40 = UINT8_MAX;
	int32_t t4 = 1752733;

	t4 = ((x37>>(x38<x39))==x40);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MAX;
	static volatile uint32_t x43 = UINT32_MAX;
	int32_t t5 = 13839380;

	t5 = ((x41>>(x42<x43))==x44);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x75 = INT16_MIN;
	volatile int32_t t6 = -3;

	t6 = ((x73>>(x74<x75))==x76);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x77 = 0;
	static int16_t x78 = INT16_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t7 = -70;

	t7 = ((x77>>(x78<x79))==x80);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x83 = 6;
	int32_t x84 = INT32_MIN;

	t8 = ((x81>>(x82<x83))==x84);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x87 = INT16_MIN;

	t9 = ((x85>>(x86<x87))==x88);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x105 = 2215198615287301LLU;
	volatile uint32_t x106 = 93544U;
	int8_t x107 = -1;

	t10 = ((x105>>(x106<x107))==x108);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x113 = UINT8_MAX;
	static int64_t x114 = -1LL;
	uint32_t x116 = 4692U;
	volatile int32_t t11 = -1;

	t11 = ((x113>>(x114<x115))==x116);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x130 = 207U;
	int32_t x131 = -1220;
	static uint8_t x132 = 54U;

	t12 = ((x129>>(x130<x131))==x132);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x137 = 14266U;
	volatile int16_t x138 = 2160;
	int8_t x140 = INT8_MIN;
	volatile int32_t t13 = -208782238;

	t13 = ((x137>>(x138<x139))==x140);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int8_t x142 = INT8_MIN;
	static volatile uint32_t x143 = 218727U;
	static volatile int64_t x144 = 2180681LL;
	int32_t t14 = 482974333;

	t14 = ((x141>>(x142<x143))==x144);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 12U;
	static volatile int8_t x156 = -1;
	int32_t t15 = -11141;

	t15 = ((x153>>(x154<x155))==x156);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x157 = 2U;
	int8_t x158 = -1;
	int32_t t16 = 21283313;

	t16 = ((x157>>(x158<x159))==x160);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = -1;
	int16_t x163 = INT16_MIN;
	volatile uint8_t x164 = 0U;

	t17 = ((x161>>(x162<x163))==x164);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x165 = 91401168LLU;
	static int32_t x166 = -24290867;
	int16_t x167 = 8978;
	int32_t x168 = INT32_MIN;
	volatile int32_t t18 = 367623;

	t18 = ((x165>>(x166<x167))==x168);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x173 = INT32_MAX;
	uint64_t x174 = 40630LLU;
	volatile int16_t x175 = -1;
	int32_t t19 = -237;

	t19 = ((x173>>(x174<x175))==x176);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x179 = 425U;
	int64_t x180 = INT64_MAX;

	t20 = ((x177>>(x178<x179))==x180);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = 45682089529914LL;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t21 = -298722536;

	t21 = ((x181>>(x182<x183))==x184);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x185 = 476717598U;
	uint8_t x186 = 106U;
	uint64_t x187 = 42884131410136LLU;
	uint8_t x188 = UINT8_MAX;
	static volatile int32_t t22 = 64;

	t22 = ((x185>>(x186<x187))==x188);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x191 = INT16_MAX;
	volatile int32_t t23 = -1214435;

	t23 = ((x189>>(x190<x191))==x192);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x193 = 32U;
	int8_t x195 = INT8_MIN;
	static uint8_t x196 = 36U;
	static int32_t t24 = -6048;

	t24 = ((x193>>(x194<x195))==x196);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x197 = 205406LLU;
	int32_t x198 = 744708530;
	uint16_t x199 = 1U;
	int8_t x200 = -29;
	volatile int32_t t25 = -736263;

	t25 = ((x197>>(x198<x199))==x200);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x205 = UINT8_MAX;
	static int8_t x207 = 14;
	static int64_t x208 = INT64_MIN;
	static volatile int32_t t26 = -254668553;

	t26 = ((x205>>(x206<x207))==x208);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MIN;
	static int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MAX;
	volatile int32_t t27 = -11214124;

	t27 = ((x217>>(x218<x219))==x220);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x233 = 508125094900940320LLU;
	static volatile int32_t x234 = INT32_MIN;
	int16_t x235 = -4716;
	int16_t x236 = INT16_MIN;
	int32_t t28 = 3270;

	t28 = ((x233>>(x234<x235))==x236);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x237 = 1U;
	uint16_t x238 = UINT16_MAX;
	volatile int16_t x240 = INT16_MIN;
	int32_t t29 = 622154689;

	t29 = ((x237>>(x238<x239))==x240);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x241 = INT64_MAX;
	volatile uint64_t x243 = UINT64_MAX;
	static int32_t x244 = -7;
	int32_t t30 = -3381;

	t30 = ((x241>>(x242<x243))==x244);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x250 = INT32_MIN;
	uint16_t x251 = 84U;
	int32_t t31 = 432492;

	t31 = ((x249>>(x250<x251))==x252);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x261 = INT64_MAX;
	uint32_t x262 = 5913289U;
	volatile int64_t x263 = INT64_MIN;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t32 = -5772;

	t32 = ((x261>>(x262<x263))==x264);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x265 = 64U;
	uint16_t x267 = UINT16_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t33 = -5507730;

	t33 = ((x265>>(x266<x267))==x268);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x273 = 14U;
	int64_t x274 = -6961690271LL;
	int64_t x275 = -94LL;
	volatile int32_t t34 = 93;

	t34 = ((x273>>(x274<x275))==x276);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x277 = 44U;
	int16_t x279 = 1;
	int16_t x280 = -1;

	t35 = ((x277>>(x278<x279))==x280);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x286 = INT16_MIN;
	uint64_t x288 = 20481499046LLU;
	int32_t t36 = 1;

	t36 = ((x285>>(x286<x287))==x288);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x289 = UINT8_MAX;
	int32_t x290 = 66;
	int8_t x291 = -1;
	int16_t x292 = INT16_MAX;
	volatile int32_t t37 = -5006;

	t37 = ((x289>>(x290<x291))==x292);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x293 = 133069LLU;
	uint16_t x295 = 6127U;
	int64_t x296 = INT64_MAX;
	static int32_t t38 = 391767638;

	t38 = ((x293>>(x294<x295))==x296);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = 1U;
	static int32_t t39 = 1;

	t39 = ((x297>>(x298<x299))==x300);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x301 = 7781U;
	int32_t x302 = INT32_MIN;
	static uint32_t x303 = 3328U;
	static int16_t x304 = -1;
	int32_t t40 = 184706;

	t40 = ((x301>>(x302<x303))==x304);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x317 = 3001U;
	static uint64_t x318 = 332729LLU;
	int16_t x319 = 13834;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t41 = -23069;

	t41 = ((x317>>(x318<x319))==x320);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x325 = UINT32_MAX;
	int32_t x326 = -1;
	int32_t x327 = 1;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t42 = 4160414;

	t42 = ((x325>>(x326<x327))==x328);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x333 = INT64_MAX;
	int16_t x334 = 1787;
	int32_t t43 = 0;

	t43 = ((x333>>(x334<x335))==x336);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x346 = -1;
	int64_t x347 = INT64_MIN;
	int32_t t44 = -1630;

	t44 = ((x345>>(x346<x347))==x348);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x349 = INT32_MAX;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -15277005387LL;
	uint8_t x352 = UINT8_MAX;
	int32_t t45 = 6;

	t45 = ((x349>>(x350<x351))==x352);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = 124;
	static int8_t x367 = INT8_MAX;
	int32_t x368 = INT32_MAX;

	t46 = ((x365>>(x366<x367))==x368);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x370 = -1LL;
	int16_t x371 = -1;
	volatile int32_t t47 = 14;

	t47 = ((x369>>(x370<x371))==x372);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x373 = 3;
	static uint32_t x374 = UINT32_MAX;
	int32_t x375 = -1;
	volatile int16_t x376 = 801;
	int32_t t48 = 196026;

	t48 = ((x373>>(x374<x375))==x376);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x385 = 3U;
	int32_t x388 = -1;
	int32_t t49 = -37927;

	t49 = ((x385>>(x386<x387))==x388);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x397 = UINT16_MAX;
	volatile int32_t x398 = INT32_MIN;

	t50 = ((x397>>(x398<x399))==x400);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x401 = UINT8_MAX;
	int16_t x403 = -1;
	int32_t x404 = INT32_MAX;
	int32_t t51 = -749035;

	t51 = ((x401>>(x402<x403))==x404);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x409 = 3;
	volatile int8_t x410 = -1;
	int16_t x411 = -11399;
	static volatile uint64_t x412 = 650LLU;
	static volatile int32_t t52 = 9;

	t52 = ((x409>>(x410<x411))==x412);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x413 = 1U;
	uint64_t x414 = 0LLU;
	int8_t x415 = 1;
	int8_t x416 = INT8_MIN;
	static int32_t t53 = -732402;

	t53 = ((x413>>(x414<x415))==x416);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x418 = INT8_MIN;
	static int32_t x419 = INT32_MIN;
	volatile int16_t x420 = -1;
	int32_t t54 = -710858;

	t54 = ((x417>>(x418<x419))==x420);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x421 = 1704U;
	int64_t x424 = -111317763470441LL;
	volatile int32_t t55 = -71391;

	t55 = ((x421>>(x422<x423))==x424);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x429 = 142087526;
	static int16_t x430 = INT16_MIN;
	int8_t x431 = -1;
	int32_t x432 = INT32_MAX;
	int32_t t56 = -6;

	t56 = ((x429>>(x430<x431))==x432);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x437 = 763U;
	int16_t x439 = -1;
	volatile uint32_t x440 = 1901U;
	int32_t t57 = 456839;

	t57 = ((x437>>(x438<x439))==x440);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x441 = 15127335U;
	volatile int32_t t58 = -6;

	t58 = ((x441>>(x442<x443))==x444);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x457 = INT32_MAX;
	uint16_t x458 = UINT16_MAX;
	static int32_t x459 = -9518636;
	uint8_t x460 = UINT8_MAX;
	static volatile int32_t t59 = -5298;

	t59 = ((x457>>(x458<x459))==x460);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x469 = UINT64_MAX;
	int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MAX;
	int32_t t60 = 0;

	t60 = ((x469>>(x470<x471))==x472);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x477 = 0U;
	volatile int64_t x478 = 82LL;
	static volatile int16_t x479 = -1;
	int16_t x480 = -1;
	int32_t t61 = -33367;

	t61 = ((x477>>(x478<x479))==x480);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x493 = INT64_MAX;
	volatile int16_t x494 = INT16_MIN;
	int16_t x496 = INT16_MIN;
	int32_t t62 = 98285704;

	t62 = ((x493>>(x494<x495))==x496);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x497 = 23;
	volatile uint16_t x499 = UINT16_MAX;
	volatile uint8_t x500 = 4U;
	static int32_t t63 = -1642764;

	t63 = ((x497>>(x498<x499))==x500);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x505 = 3249;
	int64_t x506 = INT64_MAX;
	int32_t x508 = INT32_MIN;

	t64 = ((x505>>(x506<x507))==x508);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x509 = 6110U;
	volatile int8_t x512 = -38;

	t65 = ((x509>>(x510<x511))==x512);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x517 = 0U;
	uint16_t x518 = UINT16_MAX;
	volatile int8_t x519 = -1;

	t66 = ((x517>>(x518<x519))==x520);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x521 = UINT32_MAX;
	int32_t x522 = 1;
	int32_t x523 = -1540;
	static volatile int32_t t67 = -225;

	t67 = ((x521>>(x522<x523))==x524);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x526 = INT64_MIN;
	int32_t x527 = INT32_MIN;
	uint64_t x528 = UINT64_MAX;
	int32_t t68 = -8;

	t68 = ((x525>>(x526<x527))==x528);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x529 = 1LLU;
	uint8_t x530 = UINT8_MAX;
	static uint8_t x532 = 6U;
	int32_t t69 = -3520464;

	t69 = ((x529>>(x530<x531))==x532);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x537 = INT32_MAX;
	volatile uint8_t x539 = 31U;
	static int8_t x540 = -1;
	static int32_t t70 = -992014;

	t70 = ((x537>>(x538<x539))==x540);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x553 = INT32_MAX;
	int8_t x554 = -1;
	uint8_t x555 = UINT8_MAX;
	volatile int32_t x556 = 30071651;
	static int32_t t71 = -29971918;

	t71 = ((x553>>(x554<x555))==x556);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x560 = INT32_MIN;
	volatile int32_t t72 = -83;

	t72 = ((x557>>(x558<x559))==x560);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x561 = 0;
	int16_t x562 = INT16_MIN;
	volatile int32_t x563 = -1;
	volatile int64_t x564 = -35481759221LL;

	t73 = ((x561>>(x562<x563))==x564);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x569 = 1;
	int64_t x570 = INT64_MIN;
	int8_t x572 = INT8_MIN;
	int32_t t74 = 5;

	t74 = ((x569>>(x570<x571))==x572);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x585 = 4LL;
	uint64_t x586 = 282190LLU;
	uint64_t x587 = 3243LLU;
	uint32_t x588 = UINT32_MAX;
	volatile int32_t t75 = 1350741;

	t75 = ((x585>>(x586<x587))==x588);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x597 = 983U;
	uint16_t x599 = 7U;
	volatile int32_t t76 = 961;

	t76 = ((x597>>(x598<x599))==x600);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x601 = INT8_MAX;
	int16_t x602 = INT16_MAX;
	uint64_t x603 = UINT64_MAX;
	int16_t x604 = INT16_MIN;

	t77 = ((x601>>(x602<x603))==x604);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x605 = 467305000U;
	uint32_t x607 = 29905U;
	volatile int16_t x608 = INT16_MIN;
	static int32_t t78 = -16180;

	t78 = ((x605>>(x606<x607))==x608);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x613 = INT64_MAX;
	volatile uint16_t x614 = UINT16_MAX;
	int32_t x616 = 236831;

	t79 = ((x613>>(x614<x615))==x616);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x618 = INT16_MAX;
	uint64_t x619 = UINT64_MAX;
	uint64_t x620 = 395710LLU;
	int32_t t80 = 1;

	t80 = ((x617>>(x618<x619))==x620);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x621 = INT32_MAX;
	static int8_t x622 = INT8_MAX;
	int16_t x624 = 6;
	int32_t t81 = -27610077;

	t81 = ((x621>>(x622<x623))==x624);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x625 = 10U;
	int16_t x626 = -8;
	uint8_t x627 = UINT8_MAX;
	volatile int64_t x628 = INT64_MIN;

	t82 = ((x625>>(x626<x627))==x628);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x629 = INT64_MAX;
	uint32_t x630 = UINT32_MAX;
	static int32_t x631 = INT32_MIN;

	t83 = ((x629>>(x630<x631))==x632);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x647 = INT64_MAX;
	volatile uint8_t x648 = UINT8_MAX;
	volatile int32_t t84 = 582965921;

	t84 = ((x645>>(x646<x647))==x648);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x650 = 34653508000380LLU;
	volatile int32_t t85 = -10;

	t85 = ((x649>>(x650<x651))==x652);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x665 = 36U;
	uint32_t x666 = 70U;
	uint8_t x668 = 3U;

	t86 = ((x665>>(x666<x667))==x668);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x673 = 642014082681708143LLU;
	uint64_t x674 = UINT64_MAX;
	int16_t x675 = 1750;
	uint16_t x676 = 3302U;

	t87 = ((x673>>(x674<x675))==x676);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x677 = UINT32_MAX;
	static int32_t x678 = INT32_MIN;
	uint8_t x679 = 115U;
	int32_t t88 = -19;

	t88 = ((x677>>(x678<x679))==x680);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x685 = 42;
	static volatile int32_t x686 = INT32_MIN;
	volatile int16_t x687 = 1210;
	static int8_t x688 = 33;
	static int32_t t89 = 14063314;

	t89 = ((x685>>(x686<x687))==x688);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x689 = UINT32_MAX;
	uint8_t x690 = 13U;
	int64_t x691 = 858977621LL;
	int8_t x692 = INT8_MIN;
	int32_t t90 = 1;

	t90 = ((x689>>(x690<x691))==x692);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x693 = INT32_MAX;
	static volatile uint32_t x694 = 713U;
	uint64_t x695 = 15919284403200618LLU;
	uint16_t x696 = UINT16_MAX;
	int32_t t91 = -259349;

	t91 = ((x693>>(x694<x695))==x696);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x703 = 59;
	int64_t x704 = -1LL;
	static int32_t t92 = 5120816;

	t92 = ((x701>>(x702<x703))==x704);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x713 = 41922LLU;
	uint8_t x715 = 28U;
	volatile int64_t x716 = -1LL;

	t93 = ((x713>>(x714<x715))==x716);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x730 = -2116;
	volatile int16_t x731 = INT16_MIN;
	int32_t x732 = INT32_MIN;
	volatile int32_t t94 = 45819;

	t94 = ((x729>>(x730<x731))==x732);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x737 = INT8_MAX;
	volatile uint16_t x739 = 1672U;
	static volatile uint16_t x740 = 12588U;
	int32_t t95 = 2503167;

	t95 = ((x737>>(x738<x739))==x740);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x745 = 10235763U;
	volatile uint16_t x746 = 394U;
	volatile int64_t x747 = INT64_MAX;
	int32_t t96 = -1916159;

	t96 = ((x745>>(x746<x747))==x748);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x754 = INT8_MIN;
	volatile uint32_t x755 = 984094U;
	static int32_t t97 = 206;

	t97 = ((x753>>(x754<x755))==x756);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x757 = INT16_MAX;
	volatile int8_t x758 = INT8_MAX;
	int8_t x759 = -5;
	volatile int32_t t98 = -17095799;

	t98 = ((x757>>(x758<x759))==x760);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x761 = 7283080LLU;
	static int16_t x762 = INT16_MAX;
	volatile int16_t x763 = -10814;
	int32_t x764 = -1;
	volatile int32_t t99 = 1;

	t99 = ((x761>>(x762<x763))==x764);

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

