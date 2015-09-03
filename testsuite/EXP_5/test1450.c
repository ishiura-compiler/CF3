#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = 3179LL;
static uint64_t x18 = 308709049497LLU;
uint8_t x39 = 8U;
int16_t x42 = INT16_MIN;
int64_t x55 = -1LL;
int32_t x62 = -1;
volatile int32_t x64 = INT32_MIN;
int32_t x78 = INT32_MAX;
static int16_t x86 = 3067;
int32_t x87 = 2746;
static volatile uint32_t t11 = 586360U;
int16_t x89 = 6938;
int16_t x98 = 325;
uint16_t x99 = 4198U;
volatile int8_t x102 = -1;
volatile int32_t x113 = 24169526;
int8_t x119 = INT8_MAX;
static volatile int64_t x120 = -989520391223006LL;
int32_t x124 = INT32_MIN;
int32_t x125 = INT32_MAX;
volatile uint8_t x141 = 62U;
uint16_t x149 = 3U;
int8_t x154 = -1;
static volatile int32_t x155 = -9511;
static uint64_t x167 = UINT64_MAX;
uint64_t x168 = 5LLU;
static int64_t x174 = INT64_MAX;
int16_t x176 = INT16_MIN;
volatile int32_t x181 = 201;
uint32_t x182 = 147592U;
int8_t x184 = -42;
int32_t t26 = 0;
uint32_t x217 = UINT32_MAX;
uint8_t x218 = 3U;
uint64_t x250 = 236LLU;
int16_t x251 = INT16_MIN;
static uint64_t x282 = UINT64_MAX;
volatile int8_t x287 = -19;
static volatile int32_t x295 = INT32_MIN;
int8_t x296 = 7;
uint8_t x302 = 1U;
volatile uint32_t t38 = 1U;
static int8_t x320 = 21;
static int16_t x333 = INT16_MAX;
uint64_t x361 = 7854022925823263LLU;
int8_t x364 = 5;
volatile int32_t t48 = -2863;
uint16_t x375 = 4U;
uint64_t t49 = UINT64_MAX;
static int16_t x380 = INT16_MAX;
static int64_t t50 = -23241499LL;
uint16_t x392 = UINT16_MAX;
int32_t x393 = 25;
uint64_t x397 = UINT64_MAX;
int8_t x402 = INT8_MIN;
uint64_t x425 = 111LLU;
uint64_t x456 = UINT64_MAX;
int8_t x479 = INT8_MAX;
uint16_t x480 = 906U;
static int8_t x487 = INT8_MIN;
uint64_t t63 = 162805377416556333LLU;
int16_t x493 = INT16_MAX;
uint16_t x505 = 18583U;
uint32_t x507 = UINT32_MAX;
volatile int32_t t66 = 75739;
volatile int32_t t67 = -64337;
uint64_t x515 = 1559913701504687LLU;
volatile int32_t t68 = -27;
int64_t x530 = -29128LL;
static volatile int8_t x564 = -1;
uint32_t t76 = 42U;
int32_t x576 = 25;
volatile int32_t t77 = 6171;
volatile uint32_t x585 = 2024133U;
static int64_t x588 = -30683LL;
uint8_t x603 = 4U;
volatile int8_t x604 = INT8_MIN;
volatile int32_t t80 = -519127933;
int64_t x605 = INT64_MAX;
int32_t x607 = -14497;
uint8_t x613 = 31U;
volatile int32_t t82 = -11;
int16_t x622 = 1;
int8_t x627 = INT8_MIN;
static int32_t x646 = -1;
volatile int64_t x647 = INT64_MAX;
uint32_t x648 = 25U;
volatile uint16_t x657 = 139U;
uint8_t x669 = 28U;
volatile int8_t x682 = INT8_MAX;
int64_t x684 = -1LL;
int32_t t90 = 268;
volatile uint8_t x687 = 0U;
volatile uint32_t x689 = UINT32_MAX;
uint64_t x690 = 11LLU;
volatile int8_t x692 = INT8_MIN;
static volatile uint32_t t92 = UINT32_MAX;
int64_t x693 = INT64_MAX;
volatile uint8_t x702 = 14U;
uint64_t x703 = 3239145787731864287LLU;
static volatile int64_t t94 = -928755717246939689LL;
volatile uint16_t x715 = 4471U;
int32_t x717 = INT32_MAX;
static int8_t x726 = -45;
static int8_t x739 = 7;
uint32_t t99 = 59707U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static uint8_t x2 = 15U;
	int64_t x3 = -1746384728LL;
	static volatile int16_t x4 = INT16_MIN;
	int32_t t0 = -22;

	t0 = (x1>>((x2<x3)==x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 755239964156319234LL;
	int64_t x6 = INT64_MIN;
	volatile int16_t x7 = INT16_MIN;
	int16_t x8 = 1257;

	t1 = (x5>>((x6<x7)==x8));

	if (t1 != 755239964156319234LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MAX;
	uint8_t x19 = 3U;
	volatile int16_t x20 = 14;
	int32_t t2 = INT32_MAX;

	t2 = (x17>>((x18<x19)==x20));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	uint64_t t3 = UINT64_MAX;

	t3 = (x37>>((x38<x39)==x40));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x41 = 84U;
	uint16_t x43 = 21676U;
	int64_t x44 = -181293520948633903LL;
	static volatile uint32_t t4 = 576654U;

	t4 = (x41>>((x42<x43)==x44));

	if (t4 != 84U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x53 = INT64_MAX;
	int64_t x54 = 402526LL;
	volatile int16_t x56 = INT16_MIN;
	volatile int64_t t5 = INT64_MAX;

	t5 = (x53>>((x54<x55)==x56));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x61 = 3;
	uint8_t x63 = UINT8_MAX;
	volatile int32_t t6 = -137375;

	t6 = (x61>>((x62<x63)==x64));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x69 = 673U;
	int16_t x70 = INT16_MAX;
	static volatile uint8_t x71 = 9U;
	static int16_t x72 = INT16_MAX;
	uint32_t t7 = 234829U;

	t7 = (x69>>((x70<x71)==x72));

	if (t7 != 673U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x73 = 1;
	uint64_t x74 = 7602259LLU;
	int64_t x75 = 647205453229LL;
	uint8_t x76 = 23U;
	int32_t t8 = -771;

	t8 = (x73>>((x74<x75)==x76));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x77 = INT64_MAX;
	int64_t x79 = INT64_MAX;
	volatile int16_t x80 = INT16_MIN;
	int64_t t9 = INT64_MAX;

	t9 = (x77>>((x78<x79)==x80));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x81 = 8U;
	int8_t x82 = 0;
	uint16_t x83 = 7U;
	int32_t x84 = -16617576;
	volatile int32_t t10 = -1;

	t10 = (x81>>((x82<x83)==x84));

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x85 = 3407U;
	int32_t x88 = INT32_MAX;

	t11 = (x85>>((x86<x87)==x88));

	if (t11 != 3407U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x90 = 24U;
	uint64_t x91 = 0LLU;
	static uint64_t x92 = 66143019767216724LLU;
	static volatile int32_t t12 = -504923;

	t12 = (x89>>((x90<x91)==x92));

	if (t12 != 6938) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x97 = INT64_MAX;
	static int8_t x100 = INT8_MIN;
	static int64_t t13 = INT64_MAX;

	t13 = (x97>>((x98<x99)==x100));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x101 = 6530U;
	static uint32_t x103 = 4809U;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t14 = -5;

	t14 = (x101>>((x102<x103)==x104));

	if (t14 != 6530) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x109 = INT32_MAX;
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MAX;
	volatile int16_t x112 = 61;
	volatile int32_t t15 = INT32_MAX;

	t15 = (x109>>((x110<x111)==x112));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x114 = 7U;
	static uint8_t x115 = UINT8_MAX;
	int64_t x116 = -2392560598552378576LL;
	volatile int32_t t16 = 229009;

	t16 = (x113>>((x114<x115)==x116));

	if (t16 != 24169526) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x117 = UINT8_MAX;
	volatile uint32_t x118 = 33922U;
	static volatile int32_t t17 = -29;

	t17 = (x117>>((x118<x119)==x120));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x121 = 33U;
	uint8_t x122 = UINT8_MAX;
	uint8_t x123 = 107U;
	static volatile int32_t t18 = 7;

	t18 = (x121>>((x122<x123)==x124));

	if (t18 != 33) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x126 = 321096756U;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = -1;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x125>>((x126<x127)==x128));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x133 = 3;
	static uint32_t x134 = UINT32_MAX;
	int64_t x135 = -2897325793937LL;
	static int32_t x136 = INT32_MIN;
	int32_t t20 = -224044;

	t20 = (x133>>((x134<x135)==x136));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x142 = -514771;
	static volatile int8_t x143 = 28;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t21 = 1026421625;

	t21 = (x141>>((x142<x143)==x144));

	if (t21 != 62) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x150 = -1;
	uint8_t x151 = UINT8_MAX;
	static uint16_t x152 = 9U;
	static volatile int32_t t22 = 256261745;

	t22 = (x149>>((x150<x151)==x152));

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x153 = 7U;
	static volatile int32_t x156 = INT32_MIN;
	static int32_t t23 = -19;

	t23 = (x153>>((x154<x155)==x156));

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x165 = INT32_MAX;
	int32_t x166 = INT32_MIN;
	int32_t t24 = INT32_MAX;

	t24 = (x165>>((x166<x167)==x168));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x173 = 28U;
	uint32_t x175 = UINT32_MAX;
	volatile int32_t t25 = -1;

	t25 = (x173>>((x174<x175)==x176));

	if (t25 != 28) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x183 = 367U;

	t26 = (x181>>((x182<x183)==x184));

	if (t26 != 201) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x197 = UINT8_MAX;
	volatile int16_t x198 = INT16_MAX;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -1;
	volatile int32_t t27 = 232;

	t27 = (x197>>((x198<x199)==x200));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x219 = 306739549326270LLU;
	int32_t x220 = -7053811;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (x217>>((x218<x219)==x220));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x237 = 1645545U;
	static int64_t x238 = -1LL;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -1;
	volatile uint32_t t29 = 4077858U;

	t29 = (x237>>((x238<x239)==x240));

	if (t29 != 1645545U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x245 = 312;
	int32_t x246 = INT32_MIN;
	volatile int8_t x247 = -49;
	int16_t x248 = -1046;
	int32_t t30 = 3822;

	t30 = (x245>>((x246<x247)==x248));

	if (t30 != 312) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x249 = INT16_MAX;
	uint64_t x252 = 142432892LLU;
	int32_t t31 = 1;

	t31 = (x249>>((x250<x251)==x252));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x253 = INT64_MAX;
	int32_t x254 = 1359808;
	volatile int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	static volatile int64_t t32 = INT64_MAX;

	t32 = (x253>>((x254<x255)==x256));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x269 = 5308U;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = 5U;
	int8_t x272 = -44;
	int32_t t33 = -14073138;

	t33 = (x269>>((x270<x271)==x272));

	if (t33 != 5308) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x281 = 0U;
	static int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int32_t t34 = -593242869;

	t34 = (x281>>((x282<x283)==x284));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x285 = INT16_MAX;
	uint16_t x286 = 140U;
	int8_t x288 = -1;
	static int32_t t35 = -6;

	t35 = (x285>>((x286<x287)==x288));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x293 = INT8_MAX;
	static int8_t x294 = 50;
	volatile int32_t t36 = 503573479;

	t36 = (x293>>((x294<x295)==x296));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x301 = 3787029087153LL;
	int64_t x303 = INT64_MAX;
	uint32_t x304 = UINT32_MAX;
	int64_t t37 = 206965227534301LL;

	t37 = (x301>>((x302<x303)==x304));

	if (t37 != 3787029087153LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x309 = 1U;
	int64_t x310 = 3501628LL;
	volatile uint16_t x311 = 6U;
	int64_t x312 = 72058LL;

	t38 = (x309>>((x310<x311)==x312));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x313 = UINT32_MAX;
	volatile uint8_t x314 = 28U;
	int32_t x315 = -1;
	int32_t x316 = -1;
	uint32_t t39 = UINT32_MAX;

	t39 = (x313>>((x314<x315)==x316));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x317 = 961430159U;
	static volatile uint16_t x318 = UINT16_MAX;
	volatile uint16_t x319 = 26U;
	static volatile uint32_t t40 = 20U;

	t40 = (x317>>((x318<x319)==x320));

	if (t40 != 961430159U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x321 = 11U;
	int64_t x322 = -112984904906633149LL;
	int16_t x323 = INT16_MIN;
	volatile int32_t x324 = -1;
	int32_t t41 = -561547873;

	t41 = (x321>>((x322<x323)==x324));

	if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x329 = 0U;
	volatile int32_t x330 = -2;
	int64_t x331 = INT64_MAX;
	int64_t x332 = 22501896355697733LL;
	volatile int32_t t42 = 54;

	t42 = (x329>>((x330<x331)==x332));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x334 = 17U;
	volatile int16_t x335 = -31;
	static uint64_t x336 = UINT64_MAX;
	int32_t t43 = -105872807;

	t43 = (x333>>((x334<x335)==x336));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x341 = INT64_MAX;
	uint64_t x342 = 1819LLU;
	uint32_t x343 = 4U;
	int32_t x344 = 888;
	volatile int64_t t44 = INT64_MAX;

	t44 = (x341>>((x342<x343)==x344));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x353 = 0U;
	int32_t x354 = INT32_MIN;
	volatile int8_t x355 = INT8_MIN;
	static volatile int64_t x356 = INT64_MIN;
	volatile int32_t t45 = -5;

	t45 = (x353>>((x354<x355)==x356));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x362 = 2U;
	int8_t x363 = -1;
	uint64_t t46 = 1867270133LLU;

	t46 = (x361>>((x362<x363)==x364));

	if (t46 != 7854022925823263LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x365 = INT64_MAX;
	int32_t x366 = 351559142;
	static uint64_t x367 = 338957285466867178LLU;
	int16_t x368 = INT16_MIN;
	volatile int64_t t47 = INT64_MAX;

	t47 = (x365>>((x366<x367)==x368));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x369 = 1;
	uint16_t x370 = UINT16_MAX;
	int8_t x371 = INT8_MIN;
	int8_t x372 = -1;

	t48 = (x369>>((x370<x371)==x372));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x373 = UINT64_MAX;
	uint8_t x374 = 15U;
	volatile uint16_t x376 = 223U;

	t49 = (x373>>((x374<x375)==x376));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x377 = 379222898LL;
	uint64_t x378 = UINT64_MAX;
	static uint64_t x379 = 3150087460LLU;

	t50 = (x377>>((x378<x379)==x380));

	if (t50 != 379222898LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x389 = 9;
	int16_t x390 = -1;
	static volatile int64_t x391 = INT64_MIN;
	volatile int32_t t51 = 494;

	t51 = (x389>>((x390<x391)==x392));

	if (t51 != 9) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x394 = 6737;
	volatile uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t52 = 261;

	t52 = (x393>>((x394<x395)==x396));

	if (t52 != 25) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x397>>((x398<x399)==x400));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x401 = 28U;
	int16_t x403 = INT16_MIN;
	static int64_t x404 = -1LL;
	int32_t t54 = 13999;

	t54 = (x401>>((x402<x403)==x404));

	if (t54 != 28) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x413 = UINT16_MAX;
	static uint16_t x414 = 2U;
	int16_t x415 = INT16_MIN;
	volatile uint64_t x416 = UINT64_MAX;
	int32_t t55 = -11;

	t55 = (x413>>((x414<x415)==x416));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = UINT64_MAX;
	int32_t x419 = 1;
	static volatile int8_t x420 = INT8_MAX;
	uint32_t t56 = UINT32_MAX;

	t56 = (x417>>((x418<x419)==x420));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x426 = UINT64_MAX;
	int32_t x427 = -1;
	volatile int32_t x428 = INT32_MAX;
	volatile uint64_t t57 = 1133721528LLU;

	t57 = (x425>>((x426<x427)==x428));

	if (t57 != 111LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x441 = 40U;
	uint16_t x442 = UINT16_MAX;
	int16_t x443 = -71;
	int32_t x444 = INT32_MAX;
	int32_t t58 = -11946;

	t58 = (x441>>((x442<x443)==x444));

	if (t58 != 40) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x449 = UINT64_MAX;
	volatile int16_t x450 = INT16_MIN;
	uint64_t x451 = UINT64_MAX;
	static int64_t x452 = INT64_MAX;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x449>>((x450<x451)==x452));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x453 = 5;
	int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MAX;
	int32_t t60 = 800000;

	t60 = (x453>>((x454<x455)==x456));

	if (t60 != 5) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x469 = INT8_MAX;
	int64_t x470 = -1LL;
	uint16_t x471 = UINT16_MAX;
	uint32_t x472 = 137682U;
	volatile int32_t t61 = 0;

	t61 = (x469>>((x470<x471)==x472));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x477 = 0;
	static uint32_t x478 = 1U;
	int32_t t62 = 13545;

	t62 = (x477>>((x478<x479)==x480));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x485 = 6164844246481LLU;
	static int8_t x486 = -1;
	uint16_t x488 = 4015U;

	t63 = (x485>>((x486<x487)==x488));

	if (t63 != 6164844246481LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x494 = 21653U;
	uint32_t x495 = 985818465U;
	static int64_t x496 = -1LL;
	static int32_t t64 = -98;

	t64 = (x493>>((x494<x495)==x496));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x501 = INT16_MAX;
	int16_t x502 = INT16_MAX;
	int64_t x503 = -5421117599LL;
	uint32_t x504 = 208U;
	static volatile int32_t t65 = 0;

	t65 = (x501>>((x502<x503)==x504));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x506 = 10902875U;
	int64_t x508 = INT64_MIN;

	t66 = (x505>>((x506<x507)==x508));

	if (t66 != 18583) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x509 = 1;
	int16_t x510 = 37;
	volatile int32_t x511 = INT32_MIN;
	volatile int64_t x512 = -3942705LL;

	t67 = (x509>>((x510<x511)==x512));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x513 = 211704;
	static int8_t x514 = INT8_MIN;
	uint64_t x516 = 29894704LLU;

	t68 = (x513>>((x514<x515)==x516));

	if (t68 != 211704) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x517 = 708U;
	static int32_t x518 = -1;
	int8_t x519 = INT8_MAX;
	int8_t x520 = 11;
	int32_t t69 = 1;

	t69 = (x517>>((x518<x519)==x520));

	if (t69 != 708) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x525 = 97002675;
	volatile uint32_t x526 = 312071704U;
	static int32_t x527 = 1173320;
	volatile uint32_t x528 = UINT32_MAX;
	static volatile int32_t t70 = -995325;

	t70 = (x525>>((x526<x527)==x528));

	if (t70 != 97002675) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x529 = 7347765407LL;
	int8_t x531 = INT8_MAX;
	uint32_t x532 = 25518805U;
	volatile int64_t t71 = -715496148LL;

	t71 = (x529>>((x530<x531)==x532));

	if (t71 != 7347765407LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x533 = 2697522815970LLU;
	int32_t x534 = INT32_MIN;
	int64_t x535 = 5828LL;
	static volatile int16_t x536 = INT16_MIN;
	volatile uint64_t t72 = 3167709141319670LLU;

	t72 = (x533>>((x534<x535)==x536));

	if (t72 != 2697522815970LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x545 = INT8_MAX;
	int32_t x546 = -21451701;
	int8_t x547 = INT8_MIN;
	int8_t x548 = INT8_MAX;
	volatile int32_t t73 = -108;

	t73 = (x545>>((x546<x547)==x548));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x553 = 3U;
	static int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MIN;
	int8_t x556 = -3;
	int32_t t74 = 71764;

	t74 = (x553>>((x554<x555)==x556));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x557 = 94U;
	uint64_t x558 = UINT64_MAX;
	uint16_t x559 = 3709U;
	int8_t x560 = INT8_MIN;
	int32_t t75 = -2034082;

	t75 = (x557>>((x558<x559)==x560));

	if (t75 != 94) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x561 = 68342533U;
	uint8_t x562 = 1U;
	uint32_t x563 = 1U;

	t76 = (x561>>((x562<x563)==x564));

	if (t76 != 68342533U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x573 = UINT16_MAX;
	int8_t x574 = INT8_MIN;
	uint8_t x575 = 3U;

	t77 = (x573>>((x574<x575)==x576));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x586 = INT64_MAX;
	uint16_t x587 = 1U;
	uint32_t t78 = 157287921U;

	t78 = (x585>>((x586<x587)==x588));

	if (t78 != 2024133U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x589 = INT16_MAX;
	int64_t x590 = -1LL;
	int8_t x591 = INT8_MAX;
	int64_t x592 = -1LL;
	volatile int32_t t79 = 32955786;

	t79 = (x589>>((x590<x591)==x592));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x601 = INT16_MAX;
	int8_t x602 = -1;

	t80 = (x601>>((x602<x603)==x604));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x606 = INT16_MIN;
	volatile int64_t x608 = 15695448582363956LL;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x605>>((x606<x607)==x608));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x614 = INT64_MIN;
	uint16_t x615 = 1892U;
	static volatile uint8_t x616 = 39U;

	t82 = (x613>>((x614<x615)==x616));

	if (t82 != 31) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x621 = 53U;
	volatile int64_t x623 = 128016LL;
	static uint8_t x624 = 34U;
	volatile int32_t t83 = 467091681;

	t83 = (x621>>((x622<x623)==x624));

	if (t83 != 53) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x625 = 1U;
	volatile int64_t x626 = -1LL;
	int16_t x628 = INT16_MAX;
	int32_t t84 = -5749571;

	t84 = (x625>>((x626<x627)==x628));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x633 = UINT8_MAX;
	uint32_t x634 = UINT32_MAX;
	int16_t x635 = INT16_MIN;
	int64_t x636 = 3459LL;
	static volatile int32_t t85 = -1;

	t85 = (x633>>((x634<x635)==x636));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x641 = 0U;
	static int32_t x642 = INT32_MIN;
	static int8_t x643 = -1;
	int64_t x644 = INT64_MAX;
	volatile int32_t t86 = 6938507;

	t86 = (x641>>((x642<x643)==x644));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x645 = 0U;
	volatile int32_t t87 = 600096;

	t87 = (x645>>((x646<x647)==x648));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x658 = UINT32_MAX;
	int8_t x659 = INT8_MAX;
	int16_t x660 = INT16_MIN;
	int32_t t88 = 33697;

	t88 = (x657>>((x658<x659)==x660));

	if (t88 != 139) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x670 = 24780U;
	int16_t x671 = -13;
	int64_t x672 = INT64_MIN;
	volatile int32_t t89 = 60;

	t89 = (x669>>((x670<x671)==x672));

	if (t89 != 28) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x681 = 0;
	uint16_t x683 = 3U;

	t90 = (x681>>((x682<x683)==x684));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x685 = 953650105216812061LLU;
	int64_t x686 = INT64_MAX;
	int64_t x688 = -3603535224683097710LL;
	volatile uint64_t t91 = 115LLU;

	t91 = (x685>>((x686<x687)==x688));

	if (t91 != 953650105216812061LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x691 = 1785U;

	t92 = (x689>>((x690<x691)==x692));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x694 = UINT16_MAX;
	int64_t x695 = INT64_MIN;
	int16_t x696 = 0;
	static int64_t t93 = -581228727LL;

	t93 = (x693>>((x694<x695)==x696));

	if (t93 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x701 = 110714539310626LL;
	int32_t x704 = -1;

	t94 = (x701>>((x702<x703)==x704));

	if (t94 != 110714539310626LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x705 = INT64_MAX;
	uint32_t x706 = UINT32_MAX;
	int8_t x707 = INT8_MIN;
	int32_t x708 = -1389786;
	int64_t t95 = INT64_MAX;

	t95 = (x705>>((x706<x707)==x708));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x713 = 0;
	static int32_t x714 = 2740707;
	static int16_t x716 = -1;
	static volatile int32_t t96 = 7;

	t96 = (x713>>((x714<x715)==x716));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x718 = 454U;
	int16_t x719 = INT16_MIN;
	static int32_t x720 = -1;
	volatile int32_t t97 = INT32_MAX;

	t97 = (x717>>((x718<x719)==x720));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x725 = 208689U;
	static uint64_t x727 = UINT64_MAX;
	uint16_t x728 = 145U;
	static uint32_t t98 = 75105U;

	t98 = (x725>>((x726<x727)==x728));

	if (t98 != 208689U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x737 = 269106U;
	volatile int8_t x738 = INT8_MIN;
	uint32_t x740 = 33501860U;

	t99 = (x737>>((x738<x739)==x740));

	if (t99 != 269106U) { NG(); } else { ; }
	
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

