#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t2 = UINT64_MAX;
static int32_t t3 = 7479334;
static int32_t x30 = -1;
static uint64_t t6 = 9662LLU;
volatile int64_t x43 = INT64_MIN;
int32_t x56 = -1;
int8_t x60 = 13;
static uint64_t t11 = 10870176771182LLU;
static int32_t x72 = INT32_MIN;
uint64_t t12 = 90176343580415LLU;
volatile int8_t x76 = -29;
volatile int32_t t14 = -586479;
static int64_t x87 = INT64_MIN;
int32_t t16 = -1;
static int8_t x130 = INT8_MIN;
static volatile int32_t t19 = 30808;
uint16_t x142 = 7746U;
int32_t t22 = 1;
static int64_t x150 = -1LL;
int8_t x152 = INT8_MAX;
uint32_t x159 = UINT32_MAX;
static uint32_t x160 = UINT32_MAX;
static int32_t x167 = 5692;
uint32_t t26 = 65330U;
static volatile int16_t x170 = -1;
volatile uint8_t x181 = UINT8_MAX;
uint8_t x185 = UINT8_MAX;
int32_t t31 = INT32_MAX;
volatile uint64_t x206 = 12156140LLU;
uint64_t x213 = 413225LLU;
int64_t x216 = -22587501175825LL;
volatile int16_t x220 = -13;
uint16_t x233 = 336U;
uint8_t x235 = 10U;
int32_t x253 = INT32_MAX;
static int8_t x257 = INT8_MAX;
static int64_t x260 = INT64_MAX;
int32_t x270 = 27516;
static uint16_t x272 = 12866U;
int32_t t45 = INT32_MAX;
int32_t t48 = 176;
volatile uint16_t x333 = 0U;
int32_t x338 = -1;
int32_t x368 = 1196700;
static int8_t x380 = -20;
int32_t x388 = INT32_MIN;
uint32_t x393 = UINT32_MAX;
volatile int64_t x395 = -25098LL;
uint16_t x398 = 14165U;
uint64_t t59 = 66599LLU;
uint8_t x425 = 4U;
uint32_t x426 = 88146035U;
uint64_t x432 = UINT64_MAX;
volatile uint16_t x434 = 14673U;
int32_t x473 = 53608;
int16_t x476 = 9733;
int32_t t64 = -2347382;
uint32_t x481 = UINT32_MAX;
static int16_t x491 = INT16_MIN;
int32_t x498 = 840237093;
int32_t x509 = 65;
int64_t x510 = INT64_MIN;
int16_t x528 = INT16_MIN;
int16_t x531 = INT16_MIN;
volatile int32_t t73 = -454;
uint8_t x542 = UINT8_MAX;
int16_t x550 = INT16_MIN;
int8_t x554 = 2;
static int8_t x558 = 1;
volatile int64_t x559 = -1LL;
int32_t x564 = 53;
volatile int32_t t79 = -40;
uint32_t x569 = 5637U;
static uint32_t t80 = 2032U;
int16_t x573 = 1899;
uint16_t x585 = UINT16_MAX;
uint32_t x587 = 105666U;
volatile int32_t t83 = 29010336;
int16_t x589 = 15;
static uint64_t x593 = 0LLU;
int64_t x595 = -1LL;
volatile uint64_t t87 = 7014LLU;
volatile uint8_t x618 = 12U;
uint8_t x629 = 1U;
volatile int32_t t91 = INT32_MAX;
int16_t x638 = INT16_MAX;
uint32_t x640 = UINT32_MAX;
volatile uint64_t t93 = UINT64_MAX;
uint16_t x645 = UINT16_MAX;
int8_t x646 = -1;
static volatile int64_t x653 = INT64_MAX;
int32_t t97 = 928805;


void f0(void) {
	int32_t x1 = 44265;
	volatile uint16_t x2 = 136U;
	volatile uint32_t x3 = UINT32_MAX;
	int64_t x4 = -162585936LL;
	int32_t t0 = 25204280;

	t0 = (x1>>(x2==(x3|x4)));

	if (t0 != 44265) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1LLU;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MIN;
	volatile int16_t x8 = INT16_MAX;
	volatile uint64_t t1 = 136825714264501LLU;

	t1 = (x5>>(x6==(x7|x8)));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	static uint16_t x10 = 1U;
	static uint16_t x11 = UINT16_MAX;
	uint32_t x12 = 1U;

	t2 = (x9>>(x10==(x11|x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	uint16_t x14 = UINT16_MAX;
	static volatile int8_t x15 = -1;
	uint64_t x16 = 93414093610025LLU;

	t3 = (x13>>(x14==(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 58U;
	uint8_t x22 = 57U;
	int16_t x23 = -7287;
	static int8_t x24 = INT8_MAX;
	static volatile int32_t t4 = -81155157;

	t4 = (x21>>(x22==(x23|x24)));

	if (t4 != 58) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	uint64_t x26 = 30611640973420LLU;
	static int8_t x27 = -1;
	int64_t x28 = INT64_MIN;
	volatile int32_t t5 = INT32_MAX;

	t5 = (x25>>(x26==(x27|x28)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 51674941762LLU;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;

	t6 = (x29>>(x30==(x31|x32)));

	if (t6 != 51674941762LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x37 = 2776;
	volatile uint32_t x38 = UINT32_MAX;
	static uint8_t x39 = 17U;
	int32_t x40 = -3;
	static volatile int32_t t7 = 52;

	t7 = (x37>>(x38==(x39|x40)));

	if (t7 != 2776) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x41 = 0U;
	int16_t x42 = INT16_MIN;
	volatile int8_t x44 = -2;
	volatile int32_t t8 = -1079225;

	t8 = (x41>>(x42==(x43|x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 4U;
	uint8_t x46 = 1U;
	int8_t x47 = INT8_MAX;
	int32_t x48 = 14378;
	volatile int32_t t9 = 5693;

	t9 = (x45>>(x46==(x47|x48)));

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x53 = 0;
	int64_t x54 = -1LL;
	uint8_t x55 = 10U;
	volatile int32_t t10 = 316619;

	t10 = (x53>>(x54==(x55|x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = 931788642800LLU;
	int8_t x58 = INT8_MIN;
	volatile int8_t x59 = INT8_MIN;

	t11 = (x57>>(x58==(x59|x60)));

	if (t11 != 931788642800LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = 8509717250413LLU;
	int32_t x70 = INT32_MIN;
	static int8_t x71 = INT8_MAX;

	t12 = (x69>>(x70==(x71|x72)));

	if (t12 != 8509717250413LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x74 = 1;
	static uint8_t x75 = 63U;
	static volatile int32_t t13 = -42112897;

	t13 = (x73>>(x74==(x75|x76)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = 7221U;
	uint16_t x82 = 13510U;
	volatile int8_t x83 = INT8_MIN;
	static uint32_t x84 = 8U;

	t14 = (x81>>(x82==(x83|x84)));

	if (t14 != 7221) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x85 = 64027LLU;
	static int8_t x86 = INT8_MAX;
	int32_t x88 = INT32_MAX;
	uint64_t t15 = 2797LLU;

	t15 = (x85>>(x86==(x87|x88)));

	if (t15 != 64027LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 20U;
	volatile int32_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = -1;

	t16 = (x89>>(x90==(x91|x92)));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = INT64_MAX;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = -1;
	uint32_t x100 = 11911U;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x97>>(x98==(x99|x100)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x121 = INT64_MAX;
	static volatile int32_t x122 = INT32_MIN;
	uint64_t x123 = 170755978470524LLU;
	uint16_t x124 = 3193U;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x121>>(x122==(x123|x124)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x129 = INT8_MAX;
	static int64_t x131 = INT64_MIN;
	volatile uint8_t x132 = UINT8_MAX;

	t19 = (x129>>(x130==(x131|x132)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x133 = 938U;
	int8_t x134 = INT8_MIN;
	static int32_t x135 = 475859;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t20 = 24586;

	t20 = (x133>>(x134==(x135|x136)));

	if (t20 != 938) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x137 = 1548143305315465637LL;
	int16_t x138 = INT16_MAX;
	volatile uint32_t x139 = 77394582U;
	int16_t x140 = INT16_MIN;
	int64_t t21 = -7367LL;

	t21 = (x137>>(x138==(x139|x140)));

	if (t21 != 1548143305315465637LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x141 = UINT16_MAX;
	uint64_t x143 = 6654628736009427LLU;
	uint64_t x144 = 3569520839LLU;

	t22 = (x141>>(x142==(x143|x144)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x145 = 2178U;
	int8_t x146 = -10;
	int8_t x147 = 1;
	int8_t x148 = INT8_MIN;
	volatile int32_t t23 = -85163536;

	t23 = (x145>>(x146==(x147|x148)));

	if (t23 != 2178) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x149 = 37778295LLU;
	volatile uint8_t x151 = 119U;
	volatile uint64_t t24 = 3664349166117755LLU;

	t24 = (x149>>(x150==(x151|x152)));

	if (t24 != 37778295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x157 = 964U;
	uint8_t x158 = 0U;
	int32_t t25 = 27;

	t25 = (x157>>(x158==(x159|x160)));

	if (t25 != 964) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x165 = 0U;
	int64_t x166 = 727344628LL;
	int16_t x168 = 51;

	t26 = (x165>>(x166==(x167|x168)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x169 = 8705666;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MIN;
	volatile int32_t t27 = -1614;

	t27 = (x169>>(x170==(x171|x172)));

	if (t27 != 8705666) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x173 = INT16_MAX;
	static volatile int32_t x174 = -1;
	static volatile uint8_t x175 = 7U;
	int64_t x176 = INT64_MIN;
	int32_t t28 = -5;

	t28 = (x173>>(x174==(x175|x176)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x182 = 150642545U;
	static uint32_t x183 = 231U;
	volatile int8_t x184 = INT8_MIN;
	int32_t t29 = 6;

	t29 = (x181>>(x182==(x183|x184)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x186 = INT64_MAX;
	static int64_t x187 = INT64_MAX;
	int8_t x188 = 0;
	int32_t t30 = -48431;

	t30 = (x185>>(x186==(x187|x188)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MAX;
	int16_t x203 = -1;
	volatile int32_t x204 = INT32_MAX;

	t31 = (x201>>(x202==(x203|x204)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x205 = 1780;
	int16_t x207 = INT16_MAX;
	uint64_t x208 = 17163128937024LLU;
	int32_t t32 = -15590357;

	t32 = (x205>>(x206==(x207|x208)));

	if (t32 != 1780) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x209 = UINT8_MAX;
	uint16_t x210 = 98U;
	int32_t x211 = INT32_MIN;
	static uint64_t x212 = 2620958LLU;
	volatile int32_t t33 = 384916;

	t33 = (x209>>(x210==(x211|x212)));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MAX;
	uint64_t t34 = 1LLU;

	t34 = (x213>>(x214==(x215|x216)));

	if (t34 != 413225LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x217 = 0;
	static int64_t x218 = -4424656588061263692LL;
	int64_t x219 = 22721967LL;
	volatile int32_t t35 = -2903;

	t35 = (x217>>(x218==(x219|x220)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x234 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	static int32_t t36 = 61593;

	t36 = (x233>>(x234==(x235|x236)));

	if (t36 != 336) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x237 = 39436076U;
	volatile int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MIN;
	volatile uint32_t t37 = 348304731U;

	t37 = (x237>>(x238==(x239|x240)));

	if (t37 != 39436076U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x254 = 32U;
	static int64_t x255 = 2009LL;
	volatile uint8_t x256 = 19U;
	int32_t t38 = INT32_MAX;

	t38 = (x253>>(x254==(x255|x256)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x258 = 4287U;
	int32_t x259 = INT32_MAX;
	int32_t t39 = -461111;

	t39 = (x257>>(x258==(x259|x260)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x265 = UINT16_MAX;
	static int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	int8_t x268 = -1;
	static int32_t t40 = 8312570;

	t40 = (x265>>(x266==(x267|x268)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x269 = INT64_MAX;
	int8_t x271 = INT8_MAX;
	int64_t t41 = INT64_MAX;

	t41 = (x269>>(x270==(x271|x272)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x277 = 26U;
	volatile int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	int8_t x280 = -11;
	int32_t t42 = -3983323;

	t42 = (x277>>(x278==(x279|x280)));

	if (t42 != 26) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x281 = INT32_MAX;
	uint64_t x282 = 75LLU;
	volatile int16_t x283 = 0;
	int64_t x284 = -1LL;
	volatile int32_t t43 = INT32_MAX;

	t43 = (x281>>(x282==(x283|x284)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MAX;
	int8_t x299 = INT8_MAX;
	int64_t x300 = INT64_MIN;
	uint32_t t44 = UINT32_MAX;

	t44 = (x297>>(x298==(x299|x300)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x301 = INT32_MAX;
	int64_t x302 = -1LL;
	uint32_t x303 = 1356479445U;
	int32_t x304 = INT32_MIN;

	t45 = (x301>>(x302==(x303|x304)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x313 = 35U;
	volatile uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	int8_t x316 = 0;
	int32_t t46 = 1045192650;

	t46 = (x313>>(x314==(x315|x316)));

	if (t46 != 35) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x317 = 1U;
	int64_t x318 = INT64_MIN;
	static uint16_t x319 = 16193U;
	static int8_t x320 = -1;
	volatile int32_t t47 = 310349263;

	t47 = (x317>>(x318==(x319|x320)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x329 = 29977U;
	int32_t x330 = 21993970;
	static volatile int32_t x331 = INT32_MIN;
	int16_t x332 = INT16_MIN;

	t48 = (x329>>(x330==(x331|x332)));

	if (t48 != 29977) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x334 = 1059061284U;
	int8_t x335 = 15;
	uint64_t x336 = 526611240681248LLU;
	volatile int32_t t49 = -105479573;

	t49 = (x333>>(x334==(x335|x336)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x337 = 23U;
	volatile int8_t x339 = -1;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t50 = 4856357;

	t50 = (x337>>(x338==(x339|x340)));

	if (t50 != 11) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 515335327131682LLU;
	static int8_t x348 = -1;
	uint64_t t51 = UINT64_MAX;

	t51 = (x345>>(x346==(x347|x348)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x365 = 3904U;
	uint16_t x366 = UINT16_MAX;
	static uint64_t x367 = 30655LLU;
	volatile uint32_t t52 = 3763504U;

	t52 = (x365>>(x366==(x367|x368)));

	if (t52 != 3904U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x377 = 212U;
	int64_t x378 = 4LL;
	uint64_t x379 = 244546446127826LLU;
	volatile int32_t t53 = 19;

	t53 = (x377>>(x378==(x379|x380)));

	if (t53 != 212) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x385 = INT64_MAX;
	int64_t x386 = -1LL;
	uint32_t x387 = 26U;
	int64_t t54 = INT64_MAX;

	t54 = (x385>>(x386==(x387|x388)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x389 = UINT8_MAX;
	static int64_t x390 = -75995288LL;
	int16_t x391 = -117;
	int64_t x392 = INT64_MAX;
	int32_t t55 = 260366812;

	t55 = (x389>>(x390==(x391|x392)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x394 = 3U;
	int64_t x396 = INT64_MIN;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x393>>(x394==(x395|x396)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x397 = 1;
	uint64_t x399 = 6LLU;
	uint32_t x400 = 2U;
	int32_t t57 = 376708363;

	t57 = (x397>>(x398==(x399|x400)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x401 = INT16_MAX;
	int32_t x402 = -1;
	static int32_t x403 = -380623;
	int8_t x404 = -1;
	static volatile int32_t t58 = 4970996;

	t58 = (x401>>(x402==(x403|x404)));

	if (t58 != 16383) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x405 = 12485LLU;
	uint32_t x406 = 811646092U;
	static volatile int8_t x407 = INT8_MIN;
	uint32_t x408 = UINT32_MAX;

	t59 = (x405>>(x406==(x407|x408)));

	if (t59 != 12485LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x427 = 82;
	volatile uint64_t x428 = 524731381061LLU;
	int32_t t60 = 26;

	t60 = (x425>>(x426==(x427|x428)));

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x429 = 2U;
	int16_t x430 = INT16_MIN;
	volatile uint16_t x431 = UINT16_MAX;
	volatile int32_t t61 = 1401554;

	t61 = (x429>>(x430==(x431|x432)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x433 = 2U;
	static int64_t x435 = -1LL;
	static volatile uint8_t x436 = 7U;
	volatile int32_t t62 = -16;

	t62 = (x433>>(x434==(x435|x436)));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x449 = INT16_MAX;
	int64_t x450 = -10599060LL;
	static int32_t x451 = -1;
	uint16_t x452 = 707U;
	int32_t t63 = 405541;

	t63 = (x449>>(x450==(x451|x452)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x474 = 1912355931444730LLU;
	int8_t x475 = 10;

	t64 = (x473>>(x474==(x475|x476)));

	if (t64 != 53608) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x477 = INT64_MAX;
	uint16_t x478 = 361U;
	int32_t x479 = 22131;
	static int32_t x480 = -1;
	volatile int64_t t65 = INT64_MAX;

	t65 = (x477>>(x478==(x479|x480)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x482 = 998592658944537631LL;
	int32_t x483 = -1;
	volatile int32_t x484 = -1;
	uint32_t t66 = UINT32_MAX;

	t66 = (x481>>(x482==(x483|x484)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x485 = 2;
	int32_t x486 = -6;
	static int16_t x487 = INT16_MIN;
	static int8_t x488 = 1;
	volatile int32_t t67 = 304211;

	t67 = (x485>>(x486==(x487|x488)));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x489 = 301139105045751LLU;
	uint32_t x490 = 391343U;
	volatile int16_t x492 = -1;
	uint64_t t68 = 2LLU;

	t68 = (x489>>(x490==(x491|x492)));

	if (t68 != 301139105045751LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x497 = 121424374513581LLU;
	volatile uint64_t x499 = 1394236789554LLU;
	uint16_t x500 = 1U;
	uint64_t t69 = 508204880LLU;

	t69 = (x497>>(x498==(x499|x500)));

	if (t69 != 121424374513581LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x511 = -37;
	int32_t x512 = INT32_MIN;
	volatile int32_t t70 = 22;

	t70 = (x509>>(x510==(x511|x512)));

	if (t70 != 65) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x525 = UINT8_MAX;
	static int16_t x526 = -52;
	volatile uint32_t x527 = UINT32_MAX;
	int32_t t71 = -118477;

	t71 = (x525>>(x526==(x527|x528)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x529 = UINT16_MAX;
	int64_t x530 = INT64_MIN;
	static uint8_t x532 = UINT8_MAX;
	volatile int32_t t72 = 57843159;

	t72 = (x529>>(x530==(x531|x532)));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x533 = INT8_MAX;
	int32_t x534 = -1;
	static volatile uint16_t x535 = UINT16_MAX;
	uint16_t x536 = 1856U;

	t73 = (x533>>(x534==(x535|x536)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x541 = INT16_MAX;
	volatile int8_t x543 = INT8_MIN;
	int32_t x544 = -1;
	volatile int32_t t74 = -371340;

	t74 = (x541>>(x542==(x543|x544)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x549 = 121091;
	int32_t x551 = INT32_MAX;
	int64_t x552 = INT64_MAX;
	int32_t t75 = 0;

	t75 = (x549>>(x550==(x551|x552)));

	if (t75 != 121091) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x553 = 58454;
	static int64_t x555 = 1009366072938LL;
	volatile uint32_t x556 = 28568U;
	volatile int32_t t76 = 7333;

	t76 = (x553>>(x554==(x555|x556)));

	if (t76 != 58454) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x557 = UINT8_MAX;
	volatile uint8_t x560 = UINT8_MAX;
	volatile int32_t t77 = -154409450;

	t77 = (x557>>(x558==(x559|x560)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x561 = INT32_MAX;
	uint64_t x562 = 290606LLU;
	int8_t x563 = -1;
	static int32_t t78 = INT32_MAX;

	t78 = (x561>>(x562==(x563|x564)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x565 = 18;
	int16_t x566 = -2;
	uint32_t x567 = 110318U;
	int64_t x568 = INT64_MAX;

	t79 = (x565>>(x566==(x567|x568)));

	if (t79 != 18) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x570 = 2995555604LLU;
	int32_t x571 = 0;
	static int64_t x572 = -1LL;

	t80 = (x569>>(x570==(x571|x572)));

	if (t80 != 5637U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x574 = INT8_MAX;
	uint32_t x575 = UINT32_MAX;
	static int32_t x576 = INT32_MIN;
	static int32_t t81 = -152;

	t81 = (x573>>(x574==(x575|x576)));

	if (t81 != 1899) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x577 = 42887736;
	int8_t x578 = INT8_MIN;
	int32_t x579 = -19166859;
	volatile int64_t x580 = INT64_MIN;
	volatile int32_t t82 = -2;

	t82 = (x577>>(x578==(x579|x580)));

	if (t82 != 42887736) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x586 = INT8_MIN;
	static uint64_t x588 = UINT64_MAX;

	t83 = (x585>>(x586==(x587|x588)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x590 = -125;
	static int8_t x591 = INT8_MIN;
	uint32_t x592 = 11316088U;
	int32_t t84 = 43427;

	t84 = (x589>>(x590==(x591|x592)));

	if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x594 = 1271U;
	int8_t x596 = 1;
	uint64_t t85 = 403595948LLU;

	t85 = (x593>>(x594==(x595|x596)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x601 = UINT16_MAX;
	int8_t x602 = 2;
	volatile uint32_t x603 = 3U;
	uint64_t x604 = 7227129LLU;
	static volatile int32_t t86 = -127850;

	t86 = (x601>>(x602==(x603|x604)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x609 = 139463791974214LLU;
	int32_t x610 = -4384;
	static int16_t x611 = INT16_MAX;
	int64_t x612 = -1LL;

	t87 = (x609>>(x610==(x611|x612)));

	if (t87 != 139463791974214LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x617 = INT32_MAX;
	int64_t x619 = -1LL;
	volatile int8_t x620 = INT8_MIN;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x617>>(x618==(x619|x620)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x621 = INT16_MAX;
	uint16_t x622 = 11U;
	static int32_t x623 = INT32_MIN;
	static int8_t x624 = INT8_MIN;
	volatile int32_t t89 = -2770;

	t89 = (x621>>(x622==(x623|x624)));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x630 = 424495U;
	static uint32_t x631 = 25716893U;
	volatile uint16_t x632 = 1U;
	int32_t t90 = 11;

	t90 = (x629>>(x630==(x631|x632)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x633 = INT32_MAX;
	int16_t x634 = INT16_MIN;
	int8_t x635 = -47;
	volatile int64_t x636 = INT64_MIN;

	t91 = (x633>>(x634==(x635|x636)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x637 = 15564536LLU;
	int64_t x639 = -1902926908LL;
	volatile uint64_t t92 = 57822031303LLU;

	t92 = (x637>>(x638==(x639|x640)));

	if (t92 != 15564536LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x641 = UINT64_MAX;
	volatile uint8_t x642 = 99U;
	static int32_t x643 = -28;
	static int16_t x644 = INT16_MIN;

	t93 = (x641>>(x642==(x643|x644)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x647 = -1;
	static uint16_t x648 = 1U;
	int32_t t94 = 28;

	t94 = (x645>>(x646==(x647|x648)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x649 = 7648;
	volatile int16_t x650 = INT16_MIN;
	static int32_t x651 = 194;
	uint64_t x652 = 219565326009248LLU;
	volatile int32_t t95 = 211552;

	t95 = (x649>>(x650==(x651|x652)));

	if (t95 != 7648) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x654 = -107268LL;
	int64_t x655 = -15119264LL;
	static int16_t x656 = INT16_MIN;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x653>>(x654==(x655|x656)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x657 = 55U;
	volatile int64_t x658 = INT64_MIN;
	int64_t x659 = -23874571LL;
	int64_t x660 = INT64_MIN;

	t97 = (x657>>(x658==(x659|x660)));

	if (t97 != 55) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x661 = 1428;
	int8_t x662 = 0;
	int64_t x663 = INT64_MAX;
	volatile int64_t x664 = INT64_MIN;
	volatile int32_t t98 = 166345;

	t98 = (x661>>(x662==(x663|x664)));

	if (t98 != 1428) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x665 = UINT8_MAX;
	static int64_t x666 = INT64_MIN;
	int8_t x667 = INT8_MAX;
	int8_t x668 = INT8_MIN;
	volatile int32_t t99 = 1;

	t99 = (x665>>(x666==(x667|x668)));

	if (t99 != 255) { NG(); } else { ; }
	
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

