#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -890118284;
uint8_t x53 = 31U;
volatile uint8_t x71 = 3U;
int32_t t4 = INT32_MIN;
static int32_t x85 = INT32_MIN;
uint32_t x109 = UINT32_MAX;
int32_t x111 = 10612776;
int8_t x112 = 5;
volatile int8_t x147 = -1;
static int16_t x194 = -7921;
uint16_t x216 = UINT16_MAX;
uint16_t x241 = 30671U;
int64_t x256 = 3694379641LL;
int32_t x274 = INT32_MIN;
int64_t x296 = INT64_MIN;
volatile uint32_t x316 = 15948344U;
int64_t x325 = -311552304594836475LL;
int64_t t29 = -856042783805LL;
static volatile int64_t t30 = INT64_MIN;
volatile int16_t x362 = INT16_MAX;
int32_t t34 = -56015522;
int32_t x378 = -1;
static int64_t x393 = -1712095251043263429LL;
uint32_t x402 = 15U;
uint32_t x405 = UINT32_MAX;
uint16_t x412 = UINT16_MAX;
int16_t x428 = -28;
static uint8_t x437 = 44U;
int32_t t43 = -18102;
uint8_t x461 = UINT8_MAX;
static int16_t x462 = -1;
int32_t t44 = -3881;
static int16_t x473 = INT16_MAX;
static volatile int64_t x475 = INT64_MIN;
volatile int64_t x505 = INT64_MIN;
volatile int32_t x550 = INT32_MIN;
int16_t x555 = INT16_MAX;
int16_t x558 = -1;
volatile int8_t x559 = 29;
int16_t x561 = -1;
int16_t x562 = INT16_MIN;
static int64_t x594 = -1LL;
static int8_t x610 = -1;
uint32_t t57 = 0U;
volatile int32_t t58 = -1848;
int32_t t59 = -2000;
int32_t t60 = 119;
int32_t x644 = INT32_MAX;
int32_t t64 = 5697515;
int8_t x692 = -1;
volatile int32_t t67 = 4985;
volatile int16_t x726 = 9;
static int8_t x727 = INT8_MIN;
int16_t x779 = -1876;
static volatile int32_t t72 = 104;
int64_t x784 = -1LL;
volatile int32_t t73 = INT32_MAX;
int64_t x790 = -73444299281LL;
int8_t x811 = 1;
uint32_t x834 = 3U;
int8_t x835 = INT8_MAX;
static uint16_t x855 = UINT16_MAX;
int64_t x856 = INT64_MAX;
static int64_t x877 = 59014947325LL;
uint64_t x880 = 106612616LLU;
static int64_t t80 = -32LL;
volatile int64_t t82 = -453145LL;
uint32_t x889 = 813969617U;
int64_t x890 = -1LL;
static int32_t x936 = -1;
volatile int32_t t87 = 951894;
int64_t x940 = INT64_MIN;
uint64_t x943 = 100359LLU;
uint32_t x944 = UINT32_MAX;
int32_t x949 = INT32_MIN;
static uint64_t t92 = UINT64_MAX;
uint64_t t94 = 420017406729135999LLU;
int32_t t97 = 66178561;
static int16_t x994 = -1;
volatile int8_t x1000 = INT8_MIN;


void f0(void) {
	uint8_t x25 = 8U;
	static int16_t x26 = INT16_MIN;
	static volatile int64_t x27 = INT64_MIN;
	int8_t x28 = -1;

	t0 = (x25/(x26<=(x27%x28)));

	if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x49 = INT8_MAX;
	int64_t x50 = INT64_MIN;
	static int64_t x51 = INT64_MAX;
	static int64_t x52 = 86601687577627654LL;
	int32_t t1 = 3215;

	t1 = (x49/(x50<=(x51%x52)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x54 = -1;
	int8_t x55 = -1;
	int32_t x56 = -1;
	volatile int32_t t2 = 2;

	t2 = (x53/(x54<=(x55%x56)));

	if (t2 != 31) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x69 = 2LLU;
	int16_t x70 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	uint64_t t3 = 90796501831349LLU;

	t3 = (x69/(x70<=(x71%x72)));

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	volatile int64_t x83 = -13519615LL;
	int8_t x84 = -1;

	t4 = (x81/(x82<=(x83%x84)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x86 = -3222127946870LL;
	int16_t x87 = INT16_MAX;
	int64_t x88 = -28471725074LL;
	static int32_t t5 = INT32_MIN;

	t5 = (x85/(x86<=(x87%x88)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x110 = INT8_MIN;
	uint32_t t6 = UINT32_MAX;

	t6 = (x109/(x110<=(x111%x112)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x145 = 316;
	int64_t x146 = INT64_MIN;
	int32_t x148 = -445833015;
	static volatile int32_t t7 = -1;

	t7 = (x145/(x146<=(x147%x148)));

	if (t7 != 316) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x149 = -1;
	int16_t x150 = INT16_MIN;
	uint8_t x151 = 0U;
	int32_t x152 = INT32_MAX;
	int32_t t8 = 52;

	t8 = (x149/(x150<=(x151%x152)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x153 = INT64_MIN;
	int32_t x154 = 915039272;
	volatile int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MAX;
	int64_t t9 = INT64_MIN;

	t9 = (x153/(x154<=(x155%x156)));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x169 = UINT8_MAX;
	int64_t x170 = INT64_MIN;
	uint32_t x171 = 9385608U;
	int16_t x172 = -1;
	int32_t t10 = -42082;

	t10 = (x169/(x170<=(x171%x172)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x193 = -3330;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 234;
	static volatile int32_t t11 = -7874;

	t11 = (x193/(x194<=(x195%x196)));

	if (t11 != -3330) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = 5U;
	int16_t x203 = INT16_MIN;
	uint16_t x204 = UINT16_MAX;
	int32_t t12 = INT32_MIN;

	t12 = (x201/(x202<=(x203%x204)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x209 = 6221101938913LL;
	int32_t x210 = INT32_MIN;
	int16_t x211 = -18;
	volatile int16_t x212 = INT16_MIN;
	int64_t t13 = -790702906715853LL;

	t13 = (x209/(x210<=(x211%x212)));

	if (t13 != 6221101938913LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x213 = 29U;
	int32_t x214 = -27;
	volatile int64_t x215 = -1LL;
	static volatile int32_t t14 = 923922;

	t14 = (x213/(x214<=(x215%x216)));

	if (t14 != 29) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x217 = UINT64_MAX;
	int16_t x218 = -1;
	uint16_t x219 = 10U;
	int64_t x220 = 211535178LL;
	static volatile uint64_t t15 = UINT64_MAX;

	t15 = (x217/(x218<=(x219%x220)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x242 = 5;
	uint32_t x243 = 37U;
	int8_t x244 = INT8_MIN;
	volatile int32_t t16 = 260286689;

	t16 = (x241/(x242<=(x243%x244)));

	if (t16 != 30671) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x249 = INT8_MIN;
	uint64_t x250 = 105LLU;
	int8_t x251 = -1;
	uint16_t x252 = 2767U;
	static volatile int32_t t17 = -614;

	t17 = (x249/(x250<=(x251%x252)));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x253 = -9540;
	volatile uint16_t x254 = UINT16_MAX;
	uint32_t x255 = UINT32_MAX;
	static int32_t t18 = -747;

	t18 = (x253/(x254<=(x255%x256)));

	if (t18 != -9540) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x257 = -6;
	volatile int64_t x258 = INT64_MIN;
	static int32_t x259 = INT32_MIN;
	static uint16_t x260 = 25773U;
	volatile int32_t t19 = 6591;

	t19 = (x257/(x258<=(x259%x260)));

	if (t19 != -6) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x261 = 1;
	static int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	volatile int32_t x264 = -11;
	volatile int32_t t20 = 1931;

	t20 = (x261/(x262<=(x263%x264)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x265 = INT64_MIN;
	static volatile int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	volatile int32_t x268 = -1;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x265/(x266<=(x267%x268)));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x273 = 0;
	static int32_t x275 = -1541;
	int8_t x276 = INT8_MIN;
	int32_t t22 = 1948;

	t22 = (x273/(x274<=(x275%x276)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x286 = -51;
	uint8_t x287 = UINT8_MAX;
	static int32_t x288 = INT32_MIN;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x285/(x286<=(x287%x288)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x293 = -1LL;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 32094U;
	volatile int64_t t24 = 1452370LL;

	t24 = (x293/(x294<=(x295%x296)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x297 = -2;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	static uint32_t x300 = UINT32_MAX;
	volatile int32_t t25 = -68;

	t25 = (x297/(x298<=(x299%x300)));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x313 = INT8_MIN;
	static uint32_t x314 = 8U;
	int16_t x315 = INT16_MIN;
	static volatile int32_t t26 = 3869;

	t26 = (x313/(x314<=(x315%x316)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x317 = UINT32_MAX;
	static int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	volatile int16_t x320 = INT16_MIN;
	uint32_t t27 = UINT32_MAX;

	t27 = (x317/(x318<=(x319%x320)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x321 = INT8_MIN;
	volatile int64_t x322 = INT64_MIN;
	static int16_t x323 = -1;
	int8_t x324 = INT8_MIN;
	static int32_t t28 = -6814171;

	t28 = (x321/(x322<=(x323%x324)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x326 = INT8_MAX;
	uint16_t x327 = 2530U;
	int16_t x328 = -398;

	t29 = (x325/(x326<=(x327%x328)));

	if (t29 != -311552304594836475LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x329 = INT64_MIN;
	static uint16_t x330 = 9U;
	uint8_t x331 = UINT8_MAX;
	uint64_t x332 = 1554073497778LLU;

	t30 = (x329/(x330<=(x331%x332)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x333 = INT64_MIN;
	uint8_t x334 = 2U;
	volatile int64_t x335 = -34779911547580093LL;
	uint64_t x336 = 8608106834725262LLU;
	int64_t t31 = INT64_MIN;

	t31 = (x333/(x334<=(x335%x336)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x361 = -116750LL;
	int64_t x363 = 187487706066LL;
	static int32_t x364 = -936390;
	volatile int64_t t32 = 0LL;

	t32 = (x361/(x362<=(x363%x364)));

	if (t32 != -116750LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x365 = INT8_MIN;
	static int32_t x366 = -1;
	static int8_t x367 = INT8_MAX;
	static int16_t x368 = -1;
	int32_t t33 = 261678;

	t33 = (x365/(x366<=(x367%x368)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x369 = UINT16_MAX;
	volatile int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MAX;

	t34 = (x369/(x370<=(x371%x372)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x377 = 4U;
	int32_t x379 = -1;
	int64_t x380 = 27679394263LL;
	volatile int32_t t35 = 0;

	t35 = (x377/(x378<=(x379%x380)));

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x394 = -1;
	int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MIN;
	int64_t t36 = -1226613974582795LL;

	t36 = (x393/(x394<=(x395%x396)));

	if (t36 != -1712095251043263429LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x397 = 7387696916173LL;
	int8_t x398 = INT8_MIN;
	volatile int8_t x399 = INT8_MIN;
	uint16_t x400 = UINT16_MAX;
	volatile int64_t t37 = 15513382200391840LL;

	t37 = (x397/(x398<=(x399%x400)));

	if (t37 != 7387696916173LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x401 = INT64_MIN;
	static int8_t x403 = INT8_MIN;
	volatile uint32_t x404 = UINT32_MAX;
	int64_t t38 = INT64_MIN;

	t38 = (x401/(x402<=(x403%x404)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x406 = 1U;
	int16_t x407 = 642;
	volatile int32_t x408 = 759;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x405/(x406<=(x407%x408)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	int8_t x411 = INT8_MAX;
	static volatile int32_t t40 = -27;

	t40 = (x409/(x410<=(x411%x412)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x417 = -263915073;
	uint8_t x418 = 0U;
	uint16_t x419 = 413U;
	int64_t x420 = -5933164529014LL;
	int32_t t41 = 161479648;

	t41 = (x417/(x418<=(x419%x420)));

	if (t41 != -263915073) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x425 = UINT8_MAX;
	int16_t x426 = -1;
	int8_t x427 = 5;
	int32_t t42 = 19;

	t42 = (x425/(x426<=(x427%x428)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x438 = 3U;
	static uint32_t x439 = UINT32_MAX;
	int32_t x440 = INT32_MIN;

	t43 = (x437/(x438<=(x439%x440)));

	if (t43 != 44) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x463 = 1U;
	static int8_t x464 = -3;

	t44 = (x461/(x462<=(x463%x464)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x474 = INT8_MAX;
	uint64_t x476 = 56708487960617707LLU;
	volatile int32_t t45 = 3668;

	t45 = (x473/(x474<=(x475%x476)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x485 = INT8_MAX;
	static volatile uint32_t x486 = 0U;
	uint16_t x487 = UINT16_MAX;
	static int16_t x488 = -1;
	int32_t t46 = -532650333;

	t46 = (x485/(x486<=(x487%x488)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x489 = INT16_MIN;
	static int8_t x490 = -1;
	int16_t x491 = INT16_MAX;
	static int16_t x492 = INT16_MIN;
	int32_t t47 = -36688066;

	t47 = (x489/(x490<=(x491%x492)));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x506 = -4392277775654768583LL;
	int64_t x507 = INT64_MIN;
	int64_t x508 = INT64_MAX;
	int64_t t48 = INT64_MIN;

	t48 = (x505/(x506<=(x507%x508)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x509 = -237LL;
	volatile int64_t x510 = INT64_MIN;
	uint8_t x511 = 67U;
	int8_t x512 = INT8_MAX;
	int64_t t49 = -644528LL;

	t49 = (x509/(x510<=(x511%x512)));

	if (t49 != -237LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x537 = 3274838181835105LLU;
	int32_t x538 = -1;
	int64_t x539 = -1LL;
	uint8_t x540 = 1U;
	uint64_t t50 = 370681LLU;

	t50 = (x537/(x538<=(x539%x540)));

	if (t50 != 3274838181835105LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x549 = INT16_MAX;
	int16_t x551 = -1;
	int16_t x552 = 166;
	volatile int32_t t51 = 567412626;

	t51 = (x549/(x550<=(x551%x552)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x553 = 206U;
	int64_t x554 = -7727LL;
	static int16_t x556 = INT16_MAX;
	int32_t t52 = 3082454;

	t52 = (x553/(x554<=(x555%x556)));

	if (t52 != 206) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x557 = UINT64_MAX;
	volatile int8_t x560 = INT8_MIN;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x557/(x558<=(x559%x560)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x563 = 177589253;
	volatile int64_t x564 = INT64_MIN;
	volatile int32_t t54 = 32;

	t54 = (x561/(x562<=(x563%x564)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x593 = 25U;
	static uint32_t x595 = 472497U;
	uint32_t x596 = 39092590U;
	int32_t t55 = 1;

	t55 = (x593/(x594<=(x595%x596)));

	if (t55 != 25) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x605 = -8058041;
	uint8_t x606 = 5U;
	uint16_t x607 = 106U;
	uint32_t x608 = 132878182U;
	int32_t t56 = 506922442;

	t56 = (x605/(x606<=(x607%x608)));

	if (t56 != -8058041) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x609 = 2457102U;
	int8_t x611 = INT8_MIN;
	int8_t x612 = INT8_MIN;

	t57 = (x609/(x610<=(x611%x612)));

	if (t57 != 2457102U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x613 = -1;
	int64_t x614 = -11901894558LL;
	volatile int16_t x615 = -1;
	int32_t x616 = -500;

	t58 = (x613/(x614<=(x615%x616)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x617 = -191;
	int64_t x618 = -1LL;
	volatile uint8_t x619 = 51U;
	uint16_t x620 = 3606U;

	t59 = (x617/(x618<=(x619%x620)));

	if (t59 != -191) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x633 = INT8_MIN;
	int32_t x634 = -1;
	int32_t x635 = 694469840;
	int32_t x636 = -1;

	t60 = (x633/(x634<=(x635%x636)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x637 = 337545U;
	int8_t x638 = -1;
	int16_t x639 = INT16_MIN;
	volatile int8_t x640 = -1;
	static volatile uint32_t t61 = 296242U;

	t61 = (x637/(x638<=(x639%x640)));

	if (t61 != 337545U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x641 = -1;
	uint64_t x642 = 65369250678366547LLU;
	int8_t x643 = -1;
	volatile int32_t t62 = 26460;

	t62 = (x641/(x642<=(x643%x644)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x665 = -1;
	int32_t x666 = INT32_MIN;
	static int16_t x667 = INT16_MIN;
	int32_t x668 = -1;
	static int32_t t63 = 55627;

	t63 = (x665/(x666<=(x667%x668)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x669 = 13;
	int16_t x670 = -30;
	uint16_t x671 = 11U;
	int32_t x672 = INT32_MAX;

	t64 = (x669/(x670<=(x671%x672)));

	if (t64 != 13) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x689 = INT8_MAX;
	int64_t x690 = INT64_MIN;
	uint8_t x691 = 43U;
	int32_t t65 = -56;

	t65 = (x689/(x690<=(x691%x692)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x693 = -1;
	static int64_t x694 = INT64_MIN;
	static int32_t x695 = INT32_MIN;
	int16_t x696 = 11179;
	int32_t t66 = 15;

	t66 = (x693/(x694<=(x695%x696)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x717 = 13571U;
	int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MIN;
	int64_t x720 = -4092923LL;

	t67 = (x717/(x718<=(x719%x720)));

	if (t67 != 13571) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x725 = -2;
	uint64_t x728 = UINT64_MAX;
	int32_t t68 = -4991;

	t68 = (x725/(x726<=(x727%x728)));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x729 = UINT8_MAX;
	int8_t x730 = INT8_MIN;
	static volatile int16_t x731 = 30;
	int8_t x732 = INT8_MIN;
	volatile int32_t t69 = -126416728;

	t69 = (x729/(x730<=(x731%x732)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x769 = 149477092552799498LLU;
	int8_t x770 = INT8_MIN;
	volatile int32_t x771 = 0;
	volatile int16_t x772 = 5843;
	static volatile uint64_t t70 = 49309LLU;

	t70 = (x769/(x770<=(x771%x772)));

	if (t70 != 149477092552799498LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x773 = 177U;
	static int8_t x774 = INT8_MIN;
	int8_t x775 = 0;
	int8_t x776 = -3;
	int32_t t71 = -64073;

	t71 = (x773/(x774<=(x775%x776)));

	if (t71 != 177) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x777 = 324;
	uint64_t x778 = 912069787630165963LLU;
	int64_t x780 = 12681925176425389LL;

	t72 = (x777/(x778<=(x779%x780)));

	if (t72 != 324) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x781 = INT32_MAX;
	int8_t x782 = -1;
	int64_t x783 = INT64_MIN;

	t73 = (x781/(x782<=(x783%x784)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x789 = INT64_MIN;
	uint16_t x791 = 578U;
	int8_t x792 = INT8_MIN;
	static int64_t t74 = INT64_MIN;

	t74 = (x789/(x790<=(x791%x792)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x805 = INT64_MIN;
	uint64_t x806 = 632013803837LLU;
	static volatile int32_t x807 = INT32_MIN;
	int8_t x808 = INT8_MAX;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x805/(x806<=(x807%x808)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x809 = 14U;
	int16_t x810 = INT16_MIN;
	static int8_t x812 = -1;
	static int32_t t76 = -1;

	t76 = (x809/(x810<=(x811%x812)));

	if (t76 != 14) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x833 = INT32_MIN;
	volatile int32_t x836 = INT32_MIN;
	static int32_t t77 = INT32_MIN;

	t77 = (x833/(x834<=(x835%x836)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x845 = INT32_MIN;
	static volatile int8_t x846 = -1;
	static int16_t x847 = INT16_MAX;
	uint8_t x848 = 54U;
	int32_t t78 = INT32_MIN;

	t78 = (x845/(x846<=(x847%x848)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x853 = -1;
	int16_t x854 = INT16_MIN;
	int32_t t79 = 1780;

	t79 = (x853/(x854<=(x855%x856)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x878 = UINT8_MAX;
	uint64_t x879 = 321206993LLU;

	t80 = (x877/(x878<=(x879%x880)));

	if (t80 != 59014947325LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x881 = INT32_MAX;
	int8_t x882 = INT8_MIN;
	int32_t x883 = 51;
	int32_t x884 = -14;
	static int32_t t81 = INT32_MAX;

	t81 = (x881/(x882<=(x883%x884)));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x885 = -10191638267589302LL;
	volatile int8_t x886 = 11;
	volatile int64_t x887 = INT64_MAX;
	uint64_t x888 = 480LLU;

	t82 = (x885/(x886<=(x887%x888)));

	if (t82 != -10191638267589302LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x891 = INT64_MAX;
	int16_t x892 = -26;
	uint32_t t83 = 49U;

	t83 = (x889/(x890<=(x891%x892)));

	if (t83 != 813969617U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x897 = 596;
	int32_t x898 = 1;
	uint8_t x899 = 37U;
	int16_t x900 = INT16_MIN;
	volatile int32_t t84 = 18549;

	t84 = (x897/(x898<=(x899%x900)));

	if (t84 != 596) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x901 = UINT16_MAX;
	static volatile int16_t x902 = -1;
	uint16_t x903 = 13U;
	int64_t x904 = -1LL;
	volatile int32_t t85 = 1;

	t85 = (x901/(x902<=(x903%x904)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x925 = 123749407711927LLU;
	int8_t x926 = -1;
	volatile uint16_t x927 = UINT16_MAX;
	int8_t x928 = 2;
	volatile uint64_t t86 = 457147039761694317LLU;

	t86 = (x925/(x926<=(x927%x928)));

	if (t86 != 123749407711927LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x933 = 1;
	uint16_t x934 = UINT16_MAX;
	uint32_t x935 = 88345U;

	t87 = (x933/(x934<=(x935%x936)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x937 = 13;
	int8_t x938 = INT8_MIN;
	int64_t x939 = INT64_MAX;
	int32_t t88 = 127086;

	t88 = (x937/(x938<=(x939%x940)));

	if (t88 != 13) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x941 = INT32_MIN;
	volatile uint8_t x942 = 5U;
	int32_t t89 = INT32_MIN;

	t89 = (x941/(x942<=(x943%x944)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x945 = -1;
	int8_t x946 = -1;
	volatile int64_t x947 = -1LL;
	volatile int8_t x948 = INT8_MAX;
	volatile int32_t t90 = 6;

	t90 = (x945/(x946<=(x947%x948)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x950 = INT8_MAX;
	uint32_t x951 = 1034499U;
	int64_t x952 = INT64_MAX;
	static int32_t t91 = INT32_MIN;

	t91 = (x949/(x950<=(x951%x952)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x953 = UINT64_MAX;
	int16_t x954 = INT16_MIN;
	static volatile int8_t x955 = -1;
	int16_t x956 = 11576;

	t92 = (x953/(x954<=(x955%x956)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x957 = INT64_MAX;
	int8_t x958 = 1;
	int8_t x959 = 7;
	int64_t x960 = INT64_MIN;
	int64_t t93 = INT64_MAX;

	t93 = (x957/(x958<=(x959%x960)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x965 = 1569LLU;
	volatile int16_t x966 = -1;
	volatile int16_t x967 = 958;
	int16_t x968 = INT16_MAX;

	t94 = (x965/(x966<=(x967%x968)));

	if (t94 != 1569LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x973 = 27U;
	int8_t x974 = INT8_MIN;
	uint8_t x975 = UINT8_MAX;
	volatile int8_t x976 = 48;
	volatile int32_t t95 = -141217399;

	t95 = (x973/(x974<=(x975%x976)));

	if (t95 != 27) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x977 = -3;
	int32_t x978 = INT32_MIN;
	int64_t x979 = INT64_MIN;
	volatile int8_t x980 = INT8_MIN;
	volatile int32_t t96 = -45;

	t96 = (x977/(x978<=(x979%x980)));

	if (t96 != -3) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x989 = 16305;
	int64_t x990 = INT64_MIN;
	volatile int64_t x991 = -1LL;
	int32_t x992 = -1;

	t97 = (x989/(x990<=(x991%x992)));

	if (t97 != 16305) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x993 = 5LLU;
	static uint16_t x995 = 1442U;
	int32_t x996 = 811891112;
	static volatile uint64_t t98 = 12441178050LLU;

	t98 = (x993/(x994<=(x995%x996)));

	if (t98 != 5LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x997 = 61;
	int8_t x998 = 1;
	uint32_t x999 = 118208935U;
	int32_t t99 = 51234;

	t99 = (x997/(x998<=(x999%x1000)));

	if (t99 != 61) { NG(); } else { ; }
	
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

