#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
static int16_t x3 = 7644;
int64_t x6 = 89172511823LL;
int32_t x9 = INT32_MIN;
uint8_t x32 = UINT8_MAX;
volatile int8_t x39 = INT8_MIN;
int32_t x42 = INT32_MAX;
volatile uint32_t t7 = 258539672U;
int8_t x76 = 28;
static volatile uint8_t x77 = UINT8_MAX;
uint8_t x78 = 11U;
uint32_t t11 = 7321248U;
static int64_t x95 = INT64_MIN;
int32_t x98 = -1;
static int64_t x100 = -71938704LL;
volatile int64_t t14 = -3893LL;
static int32_t x117 = -1;
static int64_t t17 = 499LL;
uint8_t x130 = 0U;
static uint16_t x151 = 143U;
int64_t x153 = INT64_MAX;
static int8_t x160 = INT8_MAX;
static int16_t x182 = INT16_MIN;
int64_t x187 = -4795994103160LL;
static int8_t x198 = INT8_MIN;
static uint32_t x211 = 300910U;
int8_t x242 = -1;
uint32_t x248 = 1U;
int64_t x253 = INT64_MAX;
uint16_t x255 = 6U;
int8_t x256 = -1;
uint64_t t33 = UINT64_MAX;
volatile uint32_t t34 = 7701U;
static uint8_t x284 = 16U;
volatile uint8_t x285 = 76U;
int64_t t37 = 40LL;
static int64_t x297 = -11573173LL;
uint64_t t38 = 2463234171115442737LLU;
int32_t t39 = -142116;
static uint64_t t40 = UINT64_MAX;
int8_t x320 = -1;
uint8_t x344 = UINT8_MAX;
int16_t x356 = INT16_MAX;
volatile int64_t t46 = 31035399895070736LL;
int16_t x365 = -1;
static uint16_t x368 = 6U;
static int8_t x373 = -29;
uint16_t x397 = UINT16_MAX;
static int64_t t51 = -10050682903775785LL;
volatile int32_t x404 = INT32_MIN;
int16_t x409 = INT16_MIN;
volatile uint64_t t56 = 27307041897927LLU;
int64_t x438 = INT64_MIN;
int64_t t57 = 1303614598LL;
int32_t x465 = 0;
static volatile int16_t x467 = INT16_MAX;
int16_t x469 = INT16_MIN;
static volatile int32_t t61 = -32;
int32_t x477 = -1;
int32_t x495 = INT32_MIN;
int64_t t63 = -21042219LL;
int32_t x499 = -557591;
int8_t x500 = 61;
int64_t x502 = INT64_MIN;
int32_t x503 = 87666;
int32_t x505 = -4;
static uint32_t x507 = 15U;
volatile int64_t t66 = 37403776LL;
uint64_t x519 = 86009104681612LLU;
static int8_t x520 = 14;
volatile uint16_t x521 = 23U;
uint16_t x536 = 3100U;
uint16_t x537 = UINT16_MAX;
volatile int8_t x546 = INT8_MAX;
int32_t x558 = -1;
int32_t t73 = 13;
static int8_t x577 = 3;
int32_t x579 = 724051030;
int16_t x580 = -692;
uint64_t t75 = 10375673LLU;
volatile int16_t x589 = INT16_MIN;
static volatile uint32_t x590 = UINT32_MAX;
int64_t t78 = 93453LL;
uint64_t x642 = 1850697054687767LLU;
volatile uint64_t t84 = UINT64_MAX;
uint32_t t86 = 102688U;
volatile int32_t x675 = INT32_MIN;
uint32_t x687 = UINT32_MAX;
int16_t x688 = -1;
static int8_t x710 = 1;
static uint32_t x711 = 4111647U;
uint64_t x718 = 557919953628122700LLU;
int32_t x746 = -244475836;
volatile int64_t t94 = 2LL;
static int32_t x759 = INT32_MIN;
uint16_t x760 = 13475U;
static int32_t t97 = -2738224;
static volatile int32_t t98 = -46599;
volatile int64_t t99 = -40336LL;


void f0(void) {
	int32_t x2 = INT32_MIN;
	volatile uint16_t x4 = 386U;
	int64_t t0 = 2529040865LL;

	t0 = (x1|(x2%(x3/x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int32_t x7 = INT32_MIN;
	static int32_t x8 = INT32_MIN;
	static int64_t t1 = -239151920LL;

	t1 = (x5|(x6%(x7/x8)));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = -1;
	volatile uint32_t t2 = 114607U;

	t2 = (x9|(x10%(x11/x12)));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -37;
	int8_t x14 = 63;
	int64_t x15 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = 7090712215092877LL;

	t3 = (x13|(x14%(x15/x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = 15U;
	int8_t x30 = INT8_MIN;
	volatile int32_t x31 = INT32_MIN;
	static int32_t t4 = -10291;

	t4 = (x29|(x30%(x31/x32)));

	if (t4 != -113) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = -14;
	uint8_t x34 = 7U;
	int8_t x35 = -2;
	uint32_t x36 = 1075U;
	volatile uint32_t t5 = 122533U;

	t5 = (x33|(x34%(x35/x36)));

	if (t5 != 4294967287U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -40;
	uint16_t x38 = 6U;
	int8_t x40 = -1;
	int32_t t6 = 137175469;

	t6 = (x37|(x38%(x39/x40)));

	if (t6 != -34) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x41 = 1696832869U;
	volatile int16_t x43 = -1484;
	int8_t x44 = 7;

	t7 = (x41|(x42%(x43/x44)));

	if (t7 != 1696833015U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 5229U;
	static int64_t x50 = INT64_MAX;
	uint64_t x51 = UINT64_MAX;
	int32_t x52 = -1;
	volatile uint64_t t8 = 10874023801730LLU;

	t8 = (x49|(x50%(x51/x52)));

	if (t8 != 5229LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x73 = 3;
	int32_t x74 = INT32_MIN;
	uint16_t x75 = UINT16_MAX;
	volatile int32_t t9 = -1328;

	t9 = (x73|(x74%(x75/x76)));

	if (t9 != -125) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x79 = INT32_MIN;
	volatile int16_t x80 = -1137;
	int32_t t10 = -4362696;

	t10 = (x77|(x78%(x79/x80)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x85 = 5U;
	int16_t x86 = -1893;
	uint32_t x87 = UINT32_MAX;
	int16_t x88 = INT16_MIN;

	t11 = (x85|(x86%(x87/x88)));

	if (t11 != 5U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x89 = -2;
	int32_t x90 = INT32_MIN;
	uint16_t x91 = UINT16_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	static int32_t t12 = -18;

	t12 = (x89|(x90%(x91/x92)));

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x93 = 78579399105855900LLU;
	uint16_t x94 = UINT16_MAX;
	volatile uint16_t x96 = 35U;
	volatile uint64_t t13 = 8433533168LLU;

	t13 = (x93|(x94%(x95/x96)));

	if (t13 != 78579399105904639LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x97 = 51015809U;
	int64_t x99 = INT64_MIN;

	t14 = (x97|(x98%(x99/x100)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x113 = INT64_MIN;
	uint16_t x114 = 14U;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 47LLU;
	uint64_t t15 = 296673LLU;

	t15 = (x113|(x114%(x115/x116)));

	if (t15 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t16 = -7495;

	t16 = (x117|(x118%(x119/x120)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x125 = -1;
	volatile int64_t x126 = -26943939315721LL;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;

	t17 = (x125|(x126%(x127/x128)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x129 = INT64_MAX;
	int16_t x131 = -1;
	static uint64_t x132 = UINT64_MAX;
	static uint64_t t18 = 5LLU;

	t18 = (x129|(x130%(x131/x132)));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x133 = -1;
	volatile int16_t x134 = INT16_MAX;
	int8_t x135 = -13;
	uint32_t x136 = 294235U;
	static uint32_t t19 = UINT32_MAX;

	t19 = (x133|(x134%(x135/x136)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x149 = INT32_MAX;
	volatile uint8_t x150 = UINT8_MAX;
	int8_t x152 = INT8_MIN;
	volatile int32_t t20 = INT32_MAX;

	t20 = (x149|(x150%(x151/x152)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x154 = 2429U;
	int64_t x155 = -1LL;
	volatile int8_t x156 = -1;
	int64_t t21 = INT64_MAX;

	t21 = (x153|(x154%(x155/x156)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x157 = 3275U;
	int64_t x158 = 1000922115634409LL;
	uint8_t x159 = UINT8_MAX;
	volatile int64_t t22 = 4022453LL;

	t22 = (x157|(x158%(x159/x160)));

	if (t22 != 3275LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x169 = 14U;
	volatile uint16_t x170 = 83U;
	int16_t x171 = INT16_MAX;
	volatile int8_t x172 = INT8_MIN;
	int32_t t23 = -126915891;

	t23 = (x169|(x170%(x171/x172)));

	if (t23 != 95) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x181 = 1;
	int16_t x183 = -9;
	uint32_t x184 = 994338505U;
	uint32_t t24 = 2177U;

	t24 = (x181|(x182%(x183/x184)));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x185 = INT8_MIN;
	volatile int8_t x186 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	volatile int64_t t25 = 14223659762263553LL;

	t25 = (x185|(x186%(x187/x188)));

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x197 = 1;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = 33;
	int32_t t26 = 66398818;

	t26 = (x197|(x198%(x199/x200)));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x201 = -130;
	volatile uint32_t x202 = 9U;
	static int64_t x203 = 4705882884429575LL;
	int8_t x204 = 2;
	int64_t t27 = 58481317485LL;

	t27 = (x201|(x202%(x203/x204)));

	if (t27 != -129LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x209 = 817U;
	int32_t x210 = -1;
	uint16_t x212 = 1U;
	static volatile uint32_t t28 = 1646537U;

	t28 = (x209|(x210%(x211/x212)));

	if (t28 != 79665U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x237 = -7001490083407LL;
	static int16_t x238 = 3;
	uint16_t x239 = 31504U;
	uint32_t x240 = 1429U;
	volatile int64_t t29 = 21966301LL;

	t29 = (x237|(x238%(x239/x240)));

	if (t29 != -7001490083405LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x241 = -1;
	volatile int64_t x243 = INT64_MIN;
	static uint64_t x244 = 101547050382302LLU;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x241|(x242%(x243/x244)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x245 = 1776397;
	uint64_t x246 = 15947886LLU;
	int16_t x247 = 7;
	volatile uint64_t t31 = 6642LLU;

	t31 = (x245|(x246%(x247/x248)));

	if (t31 != 1776399LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x254 = -1;
	static volatile int64_t t32 = -559917LL;

	t32 = (x253|(x254%(x255/x256)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x257 = -1LL;
	int16_t x258 = INT16_MAX;
	uint64_t x259 = UINT64_MAX;
	uint64_t x260 = UINT64_MAX;

	t33 = (x257|(x258%(x259/x260)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x261 = UINT16_MAX;
	static uint32_t x262 = 30328U;
	volatile int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MAX;

	t34 = (x261|(x262%(x263/x264)));

	if (t34 != 65535U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x281 = 3U;
	volatile uint16_t x282 = 1884U;
	uint32_t x283 = 136U;
	uint32_t t35 = 5332994U;

	t35 = (x281|(x282%(x283/x284)));

	if (t35 != 7U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x286 = 0U;
	volatile int64_t x287 = INT64_MIN;
	uint16_t x288 = 17638U;
	static volatile int64_t t36 = 7176LL;

	t36 = (x285|(x286%(x287/x288)));

	if (t36 != 76LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x293 = INT8_MIN;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MIN;
	uint32_t x296 = 180428606U;

	t37 = (x293|(x294%(x295/x296)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x298 = -801129236;
	uint64_t x299 = UINT64_MAX;
	uint32_t x300 = 14341U;

	t38 = (x297|(x298%(x299/x300)));

	if (t38 != 18446744073706367595LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x301 = INT8_MAX;
	volatile uint8_t x302 = 19U;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = INT8_MAX;

	t39 = (x301|(x302%(x303/x304)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x313 = UINT64_MAX;
	int8_t x314 = -1;
	volatile int8_t x315 = INT8_MIN;
	int32_t x316 = -1;

	t40 = (x313|(x314%(x315/x316)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x317 = -1;
	uint8_t x318 = 60U;
	uint8_t x319 = UINT8_MAX;
	int32_t t41 = 6;

	t41 = (x317|(x318%(x319/x320)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x333 = -1;
	int16_t x334 = INT16_MAX;
	static int8_t x335 = INT8_MIN;
	uint64_t x336 = 21363010178LLU;
	uint64_t t42 = UINT64_MAX;

	t42 = (x333|(x334%(x335/x336)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x341 = INT64_MIN;
	volatile int8_t x342 = INT8_MAX;
	int64_t x343 = INT64_MIN;
	volatile int64_t t43 = -30339214692029LL;

	t43 = (x341|(x342%(x343/x344)));

	if (t43 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x349 = -1;
	int16_t x350 = INT16_MIN;
	static int32_t x351 = INT32_MAX;
	int8_t x352 = -1;
	static int32_t t44 = -7;

	t44 = (x349|(x350%(x351/x352)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x353 = INT32_MIN;
	static volatile int16_t x354 = INT16_MAX;
	static int64_t x355 = -224789565LL;
	volatile int64_t t45 = 2044LL;

	t45 = (x353|(x354%(x355/x356)));

	if (t45 != -2147478321LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x357 = -1;
	int64_t x358 = INT64_MAX;
	uint16_t x359 = UINT16_MAX;
	uint16_t x360 = 5U;

	t46 = (x357|(x358%(x359/x360)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x366 = -60;
	uint16_t x367 = 28U;
	volatile int32_t t47 = -4357;

	t47 = (x365|(x366%(x367/x368)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x369 = 463580U;
	static uint64_t x370 = 10LLU;
	volatile int64_t x371 = INT64_MIN;
	volatile int32_t x372 = 3318;
	uint64_t t48 = 2548042409289LLU;

	t48 = (x369|(x370%(x371/x372)));

	if (t48 != 463582LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x374 = -24587;
	int64_t x375 = 12587275LL;
	uint16_t x376 = 119U;
	int64_t t49 = -167944737434229LL;

	t49 = (x373|(x374%(x375/x376)));

	if (t49 != -9LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x389 = 0;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MAX;
	volatile int16_t x392 = INT16_MAX;
	static int32_t t50 = 206413;

	t50 = (x389|(x390%(x391/x392)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x398 = INT16_MAX;
	int64_t x399 = 640130039674876491LL;
	int32_t x400 = -3;

	t51 = (x397|(x398%(x399/x400)));

	if (t51 != 65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x401 = -4915720;
	uint16_t x402 = UINT16_MAX;
	static volatile uint32_t x403 = UINT32_MAX;
	uint32_t t52 = 11U;

	t52 = (x401|(x402%(x403/x404)));

	if (t52 != 4290051576U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x410 = 4338362496LLU;
	uint32_t x411 = 4U;
	volatile int32_t x412 = 1;
	uint64_t t53 = 4353193LLU;

	t53 = (x409|(x410%(x411/x412)));

	if (t53 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x413 = -1;
	volatile int16_t x414 = -1;
	int8_t x415 = INT8_MIN;
	volatile int8_t x416 = 57;
	volatile int32_t t54 = -501360183;

	t54 = (x413|(x414%(x415/x416)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x417 = -3;
	int32_t x418 = -1;
	volatile int16_t x419 = INT16_MIN;
	int16_t x420 = 8;
	volatile int32_t t55 = -22018;

	t55 = (x417|(x418%(x419/x420)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x433 = 521625222LLU;
	static int16_t x434 = INT16_MAX;
	static int64_t x435 = INT64_MAX;
	int8_t x436 = INT8_MIN;

	t56 = (x433|(x434%(x435/x436)));

	if (t56 != 521633791LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x437 = INT8_MAX;
	static uint32_t x439 = UINT32_MAX;
	int16_t x440 = -1;

	t57 = (x437|(x438%(x439/x440)));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x445 = 89U;
	uint32_t x446 = UINT32_MAX;
	int16_t x447 = INT16_MIN;
	volatile uint64_t x448 = 35821848LLU;
	volatile uint64_t t58 = 33068LLU;

	t58 = (x445|(x446%(x447/x448)));

	if (t58 != 4294967295LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x466 = INT64_MAX;
	int32_t x468 = -1;
	volatile int64_t t59 = -12LL;

	t59 = (x465|(x466%(x467/x468)));

	if (t59 != 7LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x470 = INT64_MAX;
	volatile uint8_t x471 = 21U;
	int8_t x472 = -1;
	volatile int64_t t60 = 115426513LL;

	t60 = (x469|(x470%(x471/x472)));

	if (t60 != -32761LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x473 = INT8_MIN;
	int8_t x474 = 0;
	volatile int8_t x475 = INT8_MIN;
	uint8_t x476 = 61U;

	t61 = (x473|(x474%(x475/x476)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x478 = UINT32_MAX;
	volatile int32_t x479 = INT32_MAX;
	uint32_t x480 = 133675572U;
	uint32_t t62 = UINT32_MAX;

	t62 = (x477|(x478%(x479/x480)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x493 = INT64_MIN;
	int32_t x494 = -1;
	int16_t x496 = 1730;

	t63 = (x493|(x494%(x495/x496)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x497 = INT8_MIN;
	int32_t x498 = -1;
	volatile int32_t t64 = -41;

	t64 = (x497|(x498%(x499/x500)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x501 = 7U;
	uint8_t x504 = UINT8_MAX;
	volatile int64_t t65 = 0LL;

	t65 = (x501|(x502%(x503/x504)));

	if (t65 != -145LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x506 = 7978U;
	int64_t x508 = -1LL;

	t66 = (x505|(x506%(x507/x508)));

	if (t66 != -3LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x509 = -407517670806900LL;
	int16_t x510 = INT16_MIN;
	int32_t x511 = -6885685;
	int32_t x512 = -1;
	int64_t t67 = 1841511092492074LL;

	t67 = (x509|(x510%(x511/x512)));

	if (t67 != -5492LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x517 = -1;
	int8_t x518 = INT8_MIN;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x517|(x518%(x519/x520)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x522 = 21U;
	static int32_t x523 = INT32_MIN;
	static volatile int16_t x524 = INT16_MIN;
	int32_t t69 = 20828004;

	t69 = (x521|(x522%(x523/x524)));

	if (t69 != 23) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x533 = UINT64_MAX;
	uint16_t x534 = 894U;
	uint32_t x535 = 247827U;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x533|(x534%(x535/x536)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x538 = INT8_MAX;
	uint32_t x539 = 1938655U;
	int8_t x540 = 1;
	volatile uint32_t t71 = 1196339811U;

	t71 = (x537|(x538%(x539/x540)));

	if (t71 != 65535U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x545 = 75;
	static uint64_t x547 = UINT64_MAX;
	volatile int32_t x548 = INT32_MIN;
	uint64_t t72 = 92575974703218LLU;

	t72 = (x545|(x546%(x547/x548)));

	if (t72 != 75LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x557 = INT32_MAX;
	volatile int32_t x559 = -9933;
	static int32_t x560 = -1;

	t73 = (x557|(x558%(x559/x560)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x578 = 35LLU;
	volatile uint64_t t74 = 346094LLU;

	t74 = (x577|(x578%(x579/x580)));

	if (t74 != 35LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x581 = 3971511745219690894LLU;
	static int16_t x582 = INT16_MIN;
	int32_t x583 = INT32_MIN;
	uint64_t x584 = 274578LLU;

	t75 = (x581|(x582%(x583/x584)));

	if (t75 != 3971511745219894158LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x585 = -1;
	int16_t x586 = -218;
	volatile int16_t x587 = INT16_MIN;
	uint64_t x588 = 339607LLU;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x585|(x586%(x587/x588)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x591 = 140U;
	int8_t x592 = 1;
	static volatile uint32_t t77 = 0U;

	t77 = (x589|(x590%(x591/x592)));

	if (t77 != 4294934643U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x601 = INT8_MIN;
	int64_t x602 = -1LL;
	static int16_t x603 = INT16_MAX;
	int8_t x604 = INT8_MIN;

	t78 = (x601|(x602%(x603/x604)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x621 = -1;
	volatile int32_t x622 = -1;
	uint64_t x623 = UINT64_MAX;
	static int16_t x624 = INT16_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = (x621|(x622%(x623/x624)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x625 = -1;
	int8_t x626 = INT8_MIN;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = 2;
	volatile int32_t t80 = -215;

	t80 = (x625|(x626%(x627/x628)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x633 = 11137834154LL;
	int64_t x634 = INT64_MIN;
	static int32_t x635 = 345;
	int8_t x636 = -7;
	static volatile int64_t t81 = -340956LL;

	t81 = (x633|(x634%(x635/x636)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x641 = UINT16_MAX;
	uint32_t x643 = UINT32_MAX;
	int16_t x644 = INT16_MIN;
	volatile uint64_t t82 = 1487795733755182299LLU;

	t82 = (x641|(x642%(x643/x644)));

	if (t82 != 65535LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x649 = -1;
	int32_t x650 = 269692582;
	static uint32_t x651 = 319746073U;
	static uint8_t x652 = UINT8_MAX;
	uint32_t t83 = UINT32_MAX;

	t83 = (x649|(x650%(x651/x652)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x653 = -1LL;
	volatile int8_t x654 = 1;
	int8_t x655 = INT8_MIN;
	uint64_t x656 = 70LLU;

	t84 = (x653|(x654%(x655/x656)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x657 = 4339U;
	static int16_t x658 = -32;
	uint32_t x659 = UINT32_MAX;
	int16_t x660 = INT16_MAX;
	uint32_t t85 = 881086791U;

	t85 = (x657|(x658%(x659/x660)));

	if (t85 != 131067U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x661 = INT8_MAX;
	volatile uint32_t x662 = 1466541U;
	int16_t x663 = INT16_MIN;
	int16_t x664 = -1;

	t86 = (x661|(x662%(x663/x664)));

	if (t86 != 24831U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x673 = 49887LL;
	int8_t x674 = INT8_MIN;
	int8_t x676 = -3;
	int64_t t87 = -38788251314562708LL;

	t87 = (x673|(x674%(x675/x676)));

	if (t87 != -33LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x685 = -1;
	uint32_t x686 = 9U;
	uint32_t t88 = UINT32_MAX;

	t88 = (x685|(x686%(x687/x688)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x689 = 4U;
	int32_t x690 = -1615131;
	int8_t x691 = INT8_MAX;
	int8_t x692 = 1;
	int32_t t89 = 452436290;

	t89 = (x689|(x690%(x691/x692)));

	if (t89 != -68) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x709 = UINT8_MAX;
	uint32_t x712 = 236U;
	volatile uint32_t t90 = 0U;

	t90 = (x709|(x710%(x711/x712)));

	if (t90 != 255U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x717 = -1LL;
	uint16_t x719 = UINT16_MAX;
	static int16_t x720 = 1;
	uint64_t t91 = UINT64_MAX;

	t91 = (x717|(x718%(x719/x720)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x729 = -1;
	static int16_t x730 = INT16_MAX;
	int32_t x731 = INT32_MIN;
	uint16_t x732 = 2467U;
	static volatile int32_t t92 = 2505517;

	t92 = (x729|(x730%(x731/x732)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x745 = INT32_MIN;
	static volatile int64_t x747 = INT64_MIN;
	int64_t x748 = -1697100018040506LL;
	volatile int64_t t93 = 9LL;

	t93 = (x745|(x746%(x747/x748)));

	if (t93 != -176LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x749 = INT32_MAX;
	int8_t x750 = INT8_MAX;
	static volatile int64_t x751 = INT64_MIN;
	int64_t x752 = INT64_MIN;

	t94 = (x749|(x750%(x751/x752)));

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x757 = 141U;
	static int32_t x758 = INT32_MIN;
	volatile int32_t t95 = 32;

	t95 = (x757|(x758%(x759/x760)));

	if (t95 != -13315) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x761 = 1U;
	volatile uint8_t x762 = 16U;
	int8_t x763 = -1;
	uint16_t x764 = 1U;
	static int32_t t96 = -36105023;

	t96 = (x761|(x762%(x763/x764)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x785 = INT8_MIN;
	int32_t x786 = -811;
	int8_t x787 = INT8_MAX;
	uint8_t x788 = 2U;

	t97 = (x785|(x786%(x787/x788)));

	if (t97 != -55) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x793 = INT8_MAX;
	int8_t x794 = INT8_MIN;
	int32_t x795 = INT32_MIN;
	volatile int16_t x796 = 4716;

	t98 = (x793|(x794%(x795/x796)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x797 = 11497U;
	int16_t x798 = INT16_MIN;
	int64_t x799 = INT64_MIN;
	int32_t x800 = INT32_MIN;

	t99 = (x797|(x798%(x799/x800)));

	if (t99 != -21271LL) { NG(); } else { ; }
	
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

