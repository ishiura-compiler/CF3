#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -12;
uint32_t x8 = 415704913U;
int32_t x20 = -1;
volatile uint64_t t2 = 263200886852307LLU;
int16_t x25 = INT16_MAX;
int64_t x27 = 2126607744108178803LL;
static volatile int16_t x34 = 21;
static volatile uint32_t t6 = 1U;
int8_t x37 = -1;
volatile uint8_t x38 = UINT8_MAX;
volatile int32_t x39 = 7281;
int32_t x44 = INT32_MIN;
volatile uint64_t t9 = 3235LLU;
volatile uint8_t x53 = UINT8_MAX;
int16_t x56 = INT16_MIN;
volatile uint32_t t11 = 1037531678U;
uint16_t x94 = UINT16_MAX;
int64_t t12 = -18564802145LL;
int32_t x103 = INT32_MIN;
uint8_t x108 = UINT8_MAX;
volatile int64_t t14 = 7891055273268844LL;
static volatile uint64_t t16 = 17740081LLU;
static uint64_t x125 = 2670711069279487650LLU;
uint8_t x143 = 38U;
int32_t t19 = -1;
volatile uint32_t x158 = 373921U;
static volatile uint64_t x163 = UINT64_MAX;
uint64_t x164 = UINT64_MAX;
volatile uint64_t t23 = 211431LLU;
int32_t x179 = 31771865;
int64_t t25 = 5760273LL;
static uint64_t t26 = 92091231059LLU;
uint64_t t27 = 498844LLU;
int16_t x196 = -1;
int8_t x197 = INT8_MIN;
static volatile uint8_t x200 = UINT8_MAX;
uint32_t x203 = 5455U;
uint32_t t30 = 291493395U;
int64_t t31 = 34651LL;
volatile int8_t x209 = INT8_MAX;
uint8_t x220 = 107U;
static uint8_t x226 = 28U;
static int32_t x231 = 157733820;
volatile int8_t x243 = -1;
int64_t x244 = INT64_MIN;
int8_t x246 = INT8_MAX;
int16_t x296 = 850;
static int64_t x297 = 96374LL;
static volatile uint8_t x301 = 1U;
volatile int16_t x348 = INT16_MAX;
volatile int16_t x350 = -1;
volatile int32_t x352 = 3675498;
volatile int32_t t47 = 271;
int32_t x394 = -1;
int8_t x397 = 2;
int32_t x406 = INT32_MIN;
static volatile int32_t x407 = INT32_MIN;
int16_t x411 = INT16_MAX;
int64_t x414 = INT64_MIN;
int64_t x417 = INT64_MIN;
static int16_t x421 = -1;
static volatile int32_t x422 = INT32_MAX;
volatile int8_t x429 = 39;
uint64_t x443 = 6682LLU;
int8_t x444 = -1;
uint8_t x447 = 1U;
int8_t x448 = INT8_MIN;
static int8_t x452 = INT8_MIN;
volatile int16_t x457 = INT16_MIN;
int32_t x475 = 83555630;
int64_t x489 = 937LL;
int8_t x496 = 3;
uint64_t t72 = 4011690576802LLU;
static int16_t x498 = -1;
volatile uint32_t t75 = 45524527U;
volatile uint32_t x518 = UINT32_MAX;
int8_t x523 = INT8_MIN;
volatile uint64_t x536 = UINT64_MAX;
static uint8_t x548 = 3U;
int64_t t83 = 70LL;
volatile uint64_t t86 = 543407LLU;
volatile int64_t t89 = 15433LL;
volatile int32_t x608 = -51812006;
uint32_t t91 = 6U;
int32_t x619 = -1;
int64_t t92 = -1LL;
static int8_t x628 = INT8_MAX;
int32_t x631 = INT32_MAX;
int32_t x634 = INT32_MIN;
int64_t x635 = -1LL;
int32_t x636 = -2611344;
volatile int64_t t95 = -50LL;
static uint16_t x638 = 376U;
int32_t x639 = INT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile uint64_t x3 = UINT64_MAX;
	int64_t x4 = 632784782035908LL;
	static volatile uint64_t t0 = 9LLU;

	t0 = (x1%((x2&x3)%x4));

	if (t0 != 170183301480639LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int8_t x6 = -1;
	int16_t x7 = INT16_MIN;
	uint32_t t1 = 825648U;

	t1 = (x5%((x6&x7)%x8));

	if (t1 != 20519957U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x17 = 6210778954663257218LLU;
	int8_t x18 = -1;
	uint64_t x19 = 9122193016LLU;

	t2 = (x17%((x18&x19)%x20));

	if (t2 != 2985602266LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = 4;
	static int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;
	static volatile int32_t x24 = INT32_MAX;
	volatile int64_t t3 = -130153701114340LL;

	t3 = (x21%((x22&x23)%x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = INT32_MIN;
	uint32_t x28 = 1846909145U;
	static volatile int64_t t4 = 2056804099610LL;

	t4 = (x25%((x26&x27)%x28));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 12U;
	volatile int64_t x30 = 52678961LL;
	static volatile int16_t x31 = -1;
	int32_t x32 = INT32_MIN;
	int64_t t5 = 369813996499051088LL;

	t5 = (x29%((x30&x31)%x32));

	if (t5 != 12LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x33 = 510605U;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MAX;

	t6 = (x33%((x34&x35)%x36));

	if (t6 != 11U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x40 = INT8_MAX;
	int32_t t7 = -14979;

	t7 = (x37%((x38&x39)%x40));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = 689729423LLU;
	uint16_t x43 = 79U;
	static volatile uint64_t t8 = 999911LLU;

	t8 = (x41%((x42&x43)%x44));

	if (t8 != 8LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 4U;
	volatile int32_t x46 = INT32_MIN;
	uint64_t x47 = UINT64_MAX;
	static uint8_t x48 = UINT8_MAX;

	t9 = (x45%((x46&x47)%x48));

	if (t9 != 4LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x54 = 3;
	int8_t x55 = -10;
	int32_t t10 = -945291582;

	t10 = (x53%((x54&x55)%x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x81 = -1;
	volatile int8_t x82 = INT8_MAX;
	uint32_t x83 = 209306U;
	int16_t x84 = INT16_MAX;

	t11 = (x81%((x82&x83)%x84));

	if (t11 != 21U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x93 = -252468220063146LL;
	uint8_t x95 = UINT8_MAX;
	volatile int32_t x96 = -16554209;

	t12 = (x93%((x94&x95)%x96));

	if (t12 != -6LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	int64_t x104 = INT64_MAX;
	int64_t t13 = -95633LL;

	t13 = (x101%((x102&x103)%x104));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x105 = INT64_MIN;
	volatile int32_t x106 = -92;
	volatile int16_t x107 = INT16_MIN;

	t14 = (x105%((x106&x107)%x108));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	int16_t x119 = -3580;
	uint64_t x120 = 35279840204290265LLU;
	uint64_t t15 = 10405524406LLU;

	t15 = (x117%((x118&x119)%x120));

	if (t15 != 15584344621667946LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x121 = UINT32_MAX;
	int16_t x122 = 175;
	volatile uint64_t x123 = 98400LLU;
	int16_t x124 = -1;

	t16 = (x121%((x122&x123)%x124));

	if (t16 != 31LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x126 = -2;
	uint8_t x127 = 23U;
	uint8_t x128 = 60U;
	uint64_t t17 = 6795257639441LLU;

	t17 = (x125%((x126&x127)%x128));

	if (t17 != 20LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x129 = -2;
	uint32_t x130 = 1113U;
	int32_t x131 = -1806;
	int32_t x132 = -1;
	uint32_t t18 = 2U;

	t18 = (x129%((x130&x131)%x132));

	if (t18 != 14U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x141 = -1;
	int32_t x142 = INT32_MAX;
	int16_t x144 = -4;

	t19 = (x141%((x142&x143)%x144));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MAX;
	volatile uint32_t x155 = 38512101U;
	static int8_t x156 = -1;
	static uint32_t t20 = 12U;

	t20 = (x153%((x154&x155)%x156));

	if (t20 != 53U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x157 = 16344155484042LLU;
	volatile uint32_t x159 = UINT32_MAX;
	uint32_t x160 = 1583017673U;
	uint64_t t21 = 631997546LLU;

	t21 = (x157%((x158&x159)%x160));

	if (t21 != 146499LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x161 = INT32_MIN;
	uint8_t x162 = UINT8_MAX;
	uint64_t t22 = 406416577221210LLU;

	t22 = (x161%((x162&x163)%x164));

	if (t22 != 128LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x165 = 154576619118332961LLU;
	uint32_t x166 = 9U;
	int16_t x167 = 991;
	int32_t x168 = 603840406;

	t23 = (x165%((x166&x167)%x168));

	if (t23 != 6LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x173 = -1;
	int64_t x174 = INT64_MAX;
	volatile int32_t x175 = INT32_MIN;
	uint32_t x176 = 715247256U;
	int64_t t24 = 2686622970LL;

	t24 = (x173%((x174&x175)%x176));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	volatile int64_t x180 = 3738045515061933964LL;

	t25 = (x177%((x178&x179)%x180));

	if (t25 != -18768693LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x181 = INT8_MAX;
	static uint64_t x182 = UINT64_MAX;
	static int64_t x183 = -22832841145387LL;
	static volatile int64_t x184 = -1LL;

	t26 = (x181%((x182&x183)%x184));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x189 = UINT32_MAX;
	volatile uint32_t x190 = 173U;
	uint64_t x191 = 625559LLU;
	int16_t x192 = INT16_MIN;

	t27 = (x189%((x190&x191)%x192));

	if (t27 != 24LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x193 = -48418253;
	volatile uint64_t x194 = 1683LLU;
	uint16_t x195 = 221U;
	uint64_t t28 = 17360094746LLU;

	t28 = (x193%((x194&x195)%x196));

	if (t28 != 113LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x198 = 52U;
	volatile int8_t x199 = INT8_MAX;
	int32_t t29 = 33439;

	t29 = (x197%((x198&x199)%x200));

	if (t29 != -24) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x201 = 92U;
	uint16_t x202 = UINT16_MAX;
	int16_t x204 = -702;

	t30 = (x201%((x202&x203)%x204));

	if (t30 != 92U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x205 = INT32_MAX;
	volatile uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = -1;
	int64_t x208 = -3140780840LL;

	t31 = (x205%((x206&x207)%x208));

	if (t31 != 993297192LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x210 = INT16_MAX;
	static uint8_t x211 = 10U;
	static int16_t x212 = INT16_MAX;
	volatile int32_t t32 = 964680376;

	t32 = (x209%((x210&x211)%x212));

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x217 = 58;
	int8_t x218 = INT8_MAX;
	static int64_t x219 = 2716084305257964611LL;
	int64_t t33 = 468LL;

	t33 = (x217%((x218&x219)%x220));

	if (t33 != 58LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x225 = INT16_MIN;
	int32_t x227 = -1;
	static uint8_t x228 = 97U;
	int32_t t34 = -553;

	t34 = (x225%((x226&x227)%x228));

	if (t34 != -8) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x229 = 631660777991282LLU;
	int16_t x230 = -1;
	static int8_t x232 = INT8_MIN;
	volatile uint64_t t35 = 4045LLU;

	t35 = (x229%((x230&x231)%x232));

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x241 = INT16_MIN;
	static volatile int8_t x242 = INT8_MIN;
	static volatile int64_t t36 = -2075293LL;

	t36 = (x241%((x242&x243)%x244));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x245 = 11U;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = -3;
	volatile uint64_t t37 = 366359593038128LLU;

	t37 = (x245%((x246&x247)%x248));

	if (t37 != 11LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x265 = 61U;
	int16_t x266 = -1;
	uint16_t x267 = 201U;
	int64_t x268 = 1570678349739LL;
	int64_t t38 = -2383684089454404LL;

	t38 = (x265%((x266&x267)%x268));

	if (t38 != 61LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x277 = 609573LLU;
	int64_t x278 = -1LL;
	volatile uint16_t x279 = 608U;
	uint8_t x280 = 15U;
	uint64_t t39 = 1702600LLU;

	t39 = (x277%((x278&x279)%x280));

	if (t39 != 5LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x293 = INT8_MIN;
	static volatile uint8_t x294 = 1U;
	uint8_t x295 = 1U;
	static int32_t t40 = -31294253;

	t40 = (x293%((x294&x295)%x296));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x298 = -39;
	uint32_t x299 = UINT32_MAX;
	uint64_t x300 = 464523LLU;
	volatile uint64_t t41 = 758LLU;

	t41 = (x297%((x298&x299)%x300));

	if (t41 != 96374LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x302 = -2;
	volatile int16_t x303 = -1;
	int8_t x304 = INT8_MAX;
	volatile int32_t t42 = -2;

	t42 = (x301%((x302&x303)%x304));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x305 = INT8_MIN;
	uint64_t x306 = UINT64_MAX;
	static volatile int16_t x307 = INT16_MIN;
	volatile uint16_t x308 = 5U;
	volatile uint64_t t43 = 2LLU;

	t43 = (x305%((x306&x307)%x308));

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = -1LL;
	int64_t x331 = -38909039LL;
	int8_t x332 = INT8_MAX;
	static volatile int64_t t44 = 187926461LL;

	t44 = (x329%((x330&x331)%x332));

	if (t44 != 10LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x337 = 12548821U;
	int64_t x338 = INT64_MIN;
	int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MAX;
	int64_t t45 = -4LL;

	t45 = (x337%((x338&x339)%x340));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MAX;
	static int16_t x347 = INT16_MIN;
	volatile int64_t t46 = 25680132LL;

	t46 = (x345%((x346&x347)%x348));

	if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x349 = UINT16_MAX;
	volatile uint16_t x351 = 22634U;

	t47 = (x349%((x350&x351)%x352));

	if (t47 != 20267) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x365 = -525208489132LL;
	int8_t x366 = -1;
	volatile int64_t x367 = INT64_MIN;
	uint16_t x368 = UINT16_MAX;
	static int64_t t48 = -1692289LL;

	t48 = (x365%((x366&x367)%x368));

	if (t48 != -3244LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x373 = INT16_MAX;
	volatile uint8_t x374 = 25U;
	uint64_t x375 = UINT64_MAX;
	int16_t x376 = -7;
	volatile uint64_t t49 = 47726297679216767LLU;

	t49 = (x373%((x374&x375)%x376));

	if (t49 != 17LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x377 = 1944U;
	static int32_t x378 = 937434;
	int32_t x379 = INT32_MAX;
	static int8_t x380 = INT8_MAX;
	int32_t t50 = -118299319;

	t50 = (x377%((x378&x379)%x380));

	if (t50 != 17) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x381 = -4720;
	int32_t x382 = -1;
	int8_t x383 = -28;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t51 = 94587U;

	t51 = (x381%((x382&x383)%x384));

	if (t51 != 4294962576U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x385 = 35;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = -1;
	volatile int64_t x388 = -424988497092LL;
	volatile int64_t t52 = 382431LL;

	t52 = (x385%((x386&x387)%x388));

	if (t52 != 35LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x393 = 72U;
	int32_t x395 = -49477;
	volatile int32_t x396 = 21141763;
	static volatile uint32_t t53 = 754206U;

	t53 = (x393%((x394&x395)%x396));

	if (t53 != 72U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x398 = 106883068889LLU;
	static int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MIN;
	uint64_t t54 = 35LLU;

	t54 = (x397%((x398&x399)%x400));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x405 = 1593379769606LL;
	int64_t x408 = -5027LL;
	static int64_t t55 = -9729683747008LL;

	t55 = (x405%((x406&x407)%x408));

	if (t55 != 791LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x409 = -13007;
	volatile int16_t x410 = INT16_MAX;
	static volatile uint16_t x412 = 354U;
	volatile int32_t t56 = -91497;

	t56 = (x409%((x410&x411)%x412));

	if (t56 != -72) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x413 = UINT16_MAX;
	static int16_t x415 = -1;
	uint16_t x416 = 29U;
	volatile int64_t t57 = 15298LL;

	t57 = (x413%((x414&x415)%x416));

	if (t57 != 3LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x418 = -18750;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int8_t x420 = INT8_MIN;
	volatile int64_t t58 = 4113941695105LL;

	t58 = (x417%((x418&x419)%x420));

	if (t58 != -8LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x423 = INT64_MAX;
	static uint16_t x424 = 21304U;
	static int64_t t59 = -1LL;

	t59 = (x421%((x422&x423)%x424));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x425 = INT8_MAX;
	int64_t x426 = 2888585527293366LL;
	int32_t x427 = -1;
	static int16_t x428 = INT16_MIN;
	int64_t t60 = 6851200677358764LL;

	t60 = (x425%((x426&x427)%x428));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x430 = 97U;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MAX;
	static int64_t t61 = -10150455LL;

	t61 = (x429%((x430&x431)%x432));

	if (t61 != 39LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x437 = -1LL;
	int32_t x438 = 59737555;
	uint32_t x439 = 4116626U;
	static uint64_t x440 = 419189654538232LLU;
	uint64_t t62 = 16759LLU;

	t62 = (x437%((x438&x439)%x440));

	if (t62 != 846105LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x441 = UINT16_MAX;
	int32_t x442 = -1;
	uint64_t t63 = 155818108021278LLU;

	t63 = (x441%((x442&x443)%x444));

	if (t63 != 5397LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x445 = UINT16_MAX;
	int64_t x446 = 43130965629LL;
	volatile int64_t t64 = -1504673421981082LL;

	t64 = (x445%((x446&x447)%x448));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x449 = -1;
	int32_t x450 = 387264;
	static volatile uint16_t x451 = UINT16_MAX;
	static int32_t t65 = 7;

	t65 = (x449%((x450&x451)%x452));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x458 = 5;
	int8_t x459 = -1;
	int32_t x460 = INT32_MIN;
	volatile int32_t t66 = -96;

	t66 = (x457%((x458&x459)%x460));

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x469 = -2;
	int32_t x470 = -130663754;
	int16_t x471 = -24;
	uint32_t x472 = 16435020U;
	volatile uint32_t t67 = 19090U;

	t67 = (x469%((x470&x471)%x472));

	if (t67 != 5710274U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x473 = INT32_MIN;
	static uint32_t x474 = 68936534U;
	uint8_t x476 = UINT8_MAX;
	uint32_t t68 = 233U;

	t68 = (x473%((x474&x475)%x476));

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x477 = 1683LLU;
	int32_t x478 = INT32_MIN;
	static uint64_t x479 = UINT64_MAX;
	int32_t x480 = INT32_MAX;
	volatile uint64_t t69 = 58729429035619402LLU;

	t69 = (x477%((x478&x479)%x480));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x485 = 517692512776827LL;
	uint64_t x486 = 16747269297980LLU;
	int16_t x487 = INT16_MAX;
	static int64_t x488 = INT64_MIN;
	uint64_t t70 = 6446680407475290103LLU;

	t70 = (x485%((x486&x487)%x488));

	if (t70 != 3551LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x490 = 1U;
	static int16_t x491 = INT16_MAX;
	uint8_t x492 = UINT8_MAX;
	volatile int64_t t71 = 3390LL;

	t71 = (x489%((x490&x491)%x492));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x493 = 26U;
	int64_t x494 = INT64_MIN;
	uint64_t x495 = UINT64_MAX;

	t72 = (x493%((x494&x495)%x496));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x497 = INT32_MIN;
	int8_t x499 = -1;
	int64_t x500 = 27527942810966LL;
	int64_t t73 = 24320172378444589LL;

	t73 = (x497%((x498&x499)%x500));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x501 = -24;
	volatile int8_t x502 = -1;
	int8_t x503 = INT8_MIN;
	int64_t x504 = 3LL;
	int64_t t74 = -57809394998LL;

	t74 = (x501%((x502&x503)%x504));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x509 = UINT32_MAX;
	uint32_t x510 = UINT32_MAX;
	volatile int32_t x511 = INT32_MIN;
	int8_t x512 = -1;

	t75 = (x509%((x510&x511)%x512));

	if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x513 = UINT32_MAX;
	uint64_t x514 = 1523367668803137LLU;
	int8_t x515 = 1;
	static volatile uint64_t x516 = UINT64_MAX;
	uint64_t t76 = 42401684121285381LLU;

	t76 = (x513%((x514&x515)%x516));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x517 = 739538223;
	uint64_t x519 = 2048090387531LLU;
	int32_t x520 = -41060;
	uint64_t t77 = 103LLU;

	t77 = (x517%((x518&x519)%x520));

	if (t77 != 739538223LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x521 = -2345;
	uint16_t x522 = 1825U;
	static int32_t x524 = INT32_MIN;
	int32_t t78 = -7;

	t78 = (x521%((x522&x523)%x524));

	if (t78 != -553) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x525 = 1U;
	volatile int16_t x526 = 310;
	uint32_t x527 = 5U;
	int8_t x528 = INT8_MAX;
	volatile uint32_t t79 = 335910U;

	t79 = (x525%((x526&x527)%x528));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x533 = -856;
	static uint64_t x534 = 78528891492082LLU;
	uint8_t x535 = UINT8_MAX;
	uint64_t t80 = 89541540448619071LLU;

	t80 = (x533%((x534&x535)%x536));

	if (t80 != 84LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x541 = INT64_MIN;
	int32_t x542 = 405818240;
	int32_t x543 = -5103851;
	int32_t x544 = INT32_MIN;
	volatile int64_t t81 = 878133LL;

	t81 = (x541%((x542&x543)%x544));

	if (t81 != -27977216LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x545 = UINT32_MAX;
	int32_t x546 = INT32_MAX;
	volatile int32_t x547 = 550;
	volatile uint32_t t82 = 988206910U;

	t82 = (x545%((x546&x547)%x548));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x549 = 17U;
	static volatile int64_t x550 = 52371906LL;
	int64_t x551 = -70171038255801051LL;
	int64_t x552 = INT64_MAX;

	t83 = (x549%((x550&x551)%x552));

	if (t83 != 17LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x553 = 0;
	uint16_t x554 = UINT16_MAX;
	uint64_t x555 = UINT64_MAX;
	volatile int8_t x556 = INT8_MIN;
	uint64_t t84 = 538705122853LLU;

	t84 = (x553%((x554&x555)%x556));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x565 = -278061630657665474LL;
	uint16_t x566 = 10993U;
	uint8_t x567 = UINT8_MAX;
	uint64_t x568 = UINT64_MAX;
	volatile uint64_t t85 = 520490969330LLU;

	t85 = (x565%((x566&x567)%x568));

	if (t85 != 209LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x569 = INT64_MAX;
	int32_t x570 = INT32_MIN;
	static volatile int64_t x571 = 183291361241524LL;
	static uint64_t x572 = UINT64_MAX;

	t86 = (x569%((x570&x571)%x572));

	if (t86 != 42144366591999LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x585 = 9;
	int16_t x586 = INT16_MAX;
	static int64_t x587 = -391777879217903676LL;
	int8_t x588 = INT8_MIN;
	volatile int64_t t87 = 0LL;

	t87 = (x585%((x586&x587)%x588));

	if (t87 != 9LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x593 = 0U;
	uint16_t x594 = 186U;
	int8_t x595 = -1;
	static uint16_t x596 = 5898U;
	volatile int32_t t88 = 13049;

	t88 = (x593%((x594&x595)%x596));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x601 = INT8_MIN;
	static int8_t x602 = 49;
	int64_t x603 = INT64_MAX;
	static uint8_t x604 = UINT8_MAX;

	t89 = (x601%((x602&x603)%x604));

	if (t89 != -30LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x605 = 0;
	volatile int8_t x606 = INT8_MIN;
	int8_t x607 = INT8_MIN;
	static volatile int32_t t90 = 2397237;

	t90 = (x605%((x606&x607)%x608));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x609 = 34;
	uint32_t x610 = 18U;
	int16_t x611 = -327;
	uint32_t x612 = 21640724U;

	t91 = (x609%((x610&x611)%x612));

	if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x617 = -1;
	int64_t x618 = INT64_MAX;
	int16_t x620 = INT16_MIN;

	t92 = (x617%((x618&x619)%x620));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x625 = UINT8_MAX;
	int8_t x626 = -1;
	uint8_t x627 = UINT8_MAX;
	volatile int32_t t93 = 535175278;

	t93 = (x625%((x626&x627)%x628));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x629 = INT8_MAX;
	volatile int8_t x630 = -1;
	int8_t x632 = INT8_MIN;
	int32_t t94 = 591592;

	t94 = (x629%((x630&x631)%x632));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x633 = 2U;

	t95 = (x633%((x634&x635)%x636));

	if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x637 = 36611935779869318LLU;
	int64_t x640 = INT64_MIN;
	volatile uint64_t t96 = 33752837806240662LLU;

	t96 = (x637%((x638&x639)%x640));

	if (t96 != 6LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x641 = INT64_MIN;
	int64_t x642 = INT64_MIN;
	int64_t x643 = -7LL;
	uint8_t x644 = UINT8_MAX;
	volatile int64_t t97 = -363179262849LL;

	t97 = (x641%((x642&x643)%x644));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x645 = UINT32_MAX;
	int64_t x646 = -1LL;
	int64_t x647 = -1LL;
	int64_t x648 = INT64_MAX;
	int64_t t98 = -238692374217458LL;

	t98 = (x645%((x646&x647)%x648));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x649 = 1;
	static int8_t x650 = INT8_MIN;
	int16_t x651 = INT16_MIN;
	int16_t x652 = 2616;
	volatile int32_t t99 = -30;

	t99 = (x649%((x650&x651)%x652));

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

