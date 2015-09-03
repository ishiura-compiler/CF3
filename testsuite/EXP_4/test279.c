#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = 1U;
uint32_t x34 = 8250177U;
uint64_t t3 = 413840270579456291LLU;
uint32_t x42 = 62435U;
int32_t x50 = INT32_MIN;
volatile uint16_t x72 = 194U;
static volatile uint64_t x82 = UINT64_MAX;
int16_t x100 = -1;
volatile uint32_t t12 = UINT32_MAX;
int16_t x107 = INT16_MAX;
volatile int16_t x136 = INT16_MAX;
int64_t x142 = INT64_MAX;
uint64_t x149 = UINT64_MAX;
volatile int8_t x164 = INT8_MIN;
uint64_t x173 = 69725352573LLU;
int64_t x176 = INT64_MIN;
uint64_t t23 = 749093LLU;
uint32_t x188 = 3394U;
static volatile uint8_t x189 = 1U;
volatile int16_t x200 = INT16_MIN;
int16_t x217 = 5410;
uint32_t x218 = 149218U;
static volatile uint64_t x233 = 25LLU;
int32_t x235 = -1;
static int16_t x245 = INT16_MAX;
static int64_t x246 = INT64_MIN;
uint64_t x247 = 1656LLU;
static uint8_t x249 = UINT8_MAX;
volatile int16_t x250 = -1;
int32_t t32 = -322329860;
uint16_t x263 = 53U;
uint32_t t34 = 274U;
uint8_t x265 = UINT8_MAX;
static int8_t x276 = 0;
uint16_t x281 = UINT16_MAX;
volatile uint64_t x285 = 2590032778248LLU;
static volatile uint64_t t38 = 39629LLU;
uint32_t x293 = 955837U;
uint16_t x301 = 208U;
uint64_t x320 = 3405LLU;
int8_t x328 = -2;
uint64_t x329 = 9821182850627LLU;
uint64_t x330 = 8421740323LLU;
static uint16_t x332 = 2U;
volatile int16_t x339 = INT16_MIN;
int16_t x354 = INT16_MAX;
uint64_t x360 = 25740362396539LLU;
volatile int32_t t47 = -1119281;
int32_t t48 = 13;
volatile int32_t t51 = -35902267;
volatile int32_t x400 = 907947181;
volatile uint32_t x401 = 2U;
uint16_t x405 = UINT16_MAX;
static volatile int32_t x415 = -1;
uint16_t x426 = 1U;
volatile int32_t x445 = 525119;
volatile int64_t x456 = 65075LL;
uint64_t x490 = UINT64_MAX;
int32_t x501 = 1599161;
uint16_t x502 = 9254U;
int64_t x504 = INT64_MIN;
volatile int16_t x516 = -1;
int32_t x544 = INT32_MIN;
int64_t x546 = 1988758634762931061LL;
volatile uint64_t x557 = 2077757763674167LLU;
static volatile uint16_t x558 = UINT16_MAX;
int8_t x564 = INT8_MIN;
volatile int32_t t76 = -21;
volatile uint8_t x591 = 0U;
volatile uint32_t x593 = UINT32_MAX;
int64_t x594 = 2201118762024973179LL;
static int32_t x596 = -41;
uint32_t t78 = UINT32_MAX;
int8_t x610 = -13;
volatile int32_t t81 = 3;
volatile uint32_t x633 = 29792U;
static uint8_t x634 = 3U;
int32_t x650 = INT32_MIN;
volatile uint8_t x675 = UINT8_MAX;
int32_t x677 = 1;
static int16_t x684 = INT16_MIN;
volatile int32_t t88 = INT32_MAX;
int16_t x708 = -1;
volatile uint32_t x769 = UINT32_MAX;
uint32_t x777 = 7U;
int16_t x779 = INT16_MIN;
uint8_t x780 = UINT8_MAX;
static int8_t x792 = INT8_MIN;
int16_t x802 = 417;
static int64_t x804 = -1LL;
volatile int32_t t97 = -1898661;
int16_t x807 = INT16_MAX;


void f0(void) {
	uint16_t x10 = UINT16_MAX;
	uint16_t x11 = 7U;
	int16_t x12 = 0;
	int32_t t0 = -14;

	t0 = (x9<<(x10<(x11-x12)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = 0U;
	int8_t x14 = 0;
	static int8_t x15 = INT8_MIN;
	uint8_t x16 = 5U;
	static int32_t t1 = 118261;

	t1 = (x13<<(x14<(x15-x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = INT8_MAX;
	static int64_t x22 = INT64_MAX;
	int16_t x23 = INT16_MAX;
	uint32_t x24 = UINT32_MAX;
	int32_t t2 = -619936;

	t2 = (x21<<(x22<(x23-x24)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x33 = 20264318LLU;
	volatile int8_t x35 = 4;
	static volatile uint64_t x36 = 7044564270375485LLU;

	t3 = (x33<<(x34<(x35-x36)));

	if (t3 != 40528636LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = INT8_MAX;
	static uint16_t x38 = UINT16_MAX;
	static volatile uint16_t x39 = 15529U;
	int8_t x40 = INT8_MAX;
	volatile int32_t t4 = -1014774605;

	t4 = (x37<<(x38<(x39-x40)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x41 = 26884U;
	volatile int8_t x43 = -1;
	static int64_t x44 = INT64_MAX;
	static int32_t t5 = 174;

	t5 = (x41<<(x42<(x43-x44)));

	if (t5 != 26884) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 1708LLU;
	volatile uint16_t x46 = UINT16_MAX;
	static volatile int8_t x47 = -6;
	uint16_t x48 = 0U;
	volatile uint64_t t6 = 599359476702494LLU;

	t6 = (x45<<(x46<(x47-x48)));

	if (t6 != 1708LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x49 = 275775U;
	uint8_t x51 = UINT8_MAX;
	static volatile int16_t x52 = INT16_MIN;
	static uint32_t t7 = 43386545U;

	t7 = (x49<<(x50<(x51-x52)));

	if (t7 != 551550U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x69 = 1867116544LLU;
	uint8_t x70 = UINT8_MAX;
	int32_t x71 = -1;
	uint64_t t8 = 3841288080LLU;

	t8 = (x69<<(x70<(x71-x72)));

	if (t8 != 1867116544LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x73 = 4;
	int8_t x74 = INT8_MIN;
	int32_t x75 = 68289;
	uint32_t x76 = 4194U;
	volatile int32_t t9 = -1;

	t9 = (x73<<(x74<(x75-x76)));

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x81 = 0;
	int32_t x83 = INT32_MIN;
	volatile int64_t x84 = -76849LL;
	int32_t t10 = -208;

	t10 = (x81<<(x82<(x83-x84)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x85 = 23;
	static volatile int16_t x86 = INT16_MIN;
	int16_t x87 = 3345;
	volatile uint64_t x88 = 2548698LLU;
	int32_t t11 = 139194372;

	t11 = (x85<<(x86<(x87-x88)));

	if (t11 != 23) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x97 = UINT32_MAX;
	int8_t x98 = 27;
	int16_t x99 = 0;

	t12 = (x97<<(x98<(x99-x100)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x105 = 20U;
	uint32_t x106 = 78U;
	int8_t x108 = INT8_MIN;
	int32_t t13 = 1;

	t13 = (x105<<(x106<(x107-x108)));

	if (t13 != 40) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = -2;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t14 = 7408783;

	t14 = (x113<<(x114<(x115-x116)));

	if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x117 = UINT8_MAX;
	uint16_t x118 = UINT16_MAX;
	static int8_t x119 = INT8_MIN;
	uint64_t x120 = 58151864659LLU;
	static int32_t t15 = 1837;

	t15 = (x117<<(x118<(x119-x120)));

	if (t15 != 510) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x121 = UINT16_MAX;
	static volatile uint64_t x122 = 1708203LLU;
	uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 6U;
	volatile int32_t t16 = 0;

	t16 = (x121<<(x122<(x123-x124)));

	if (t16 != 131070) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x133 = INT32_MAX;
	int32_t x134 = -24964;
	int8_t x135 = -1;
	static int32_t t17 = INT32_MAX;

	t17 = (x133<<(x134<(x135-x136)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x141 = 6292413U;
	volatile int8_t x143 = 0;
	static int32_t x144 = 14;
	uint32_t t18 = 136U;

	t18 = (x141<<(x142<(x143-x144)));

	if (t18 != 6292413U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x150 = -1LL;
	volatile int32_t x151 = -93074794;
	int32_t x152 = INT32_MIN;
	volatile uint64_t t19 = 689LLU;

	t19 = (x149<<(x150<(x151-x152)));

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x157 = INT16_MAX;
	int16_t x158 = 52;
	int16_t x159 = -1;
	static int64_t x160 = -1LL;
	int32_t t20 = 0;

	t20 = (x157<<(x158<(x159-x160)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x161 = INT8_MAX;
	int16_t x162 = 4859;
	int64_t x163 = -1LL;
	int32_t t21 = -13;

	t21 = (x161<<(x162<(x163-x164)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x169 = 66193LLU;
	int64_t x170 = 51729102199LL;
	uint32_t x171 = 29U;
	int16_t x172 = -2449;
	uint64_t t22 = 1765LLU;

	t22 = (x169<<(x170<(x171-x172)));

	if (t22 != 66193LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x174 = -1;
	volatile int64_t x175 = INT64_MIN;

	t23 = (x173<<(x174<(x175-x176)));

	if (t23 != 139450705146LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x177 = 172429;
	static int8_t x178 = -24;
	int64_t x179 = -68694001468LL;
	static volatile int32_t x180 = -1;
	int32_t t24 = -1;

	t24 = (x177<<(x178<(x179-x180)));

	if (t24 != 172429) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x185 = 19262;
	volatile uint64_t x186 = 57607576125262LLU;
	int16_t x187 = INT16_MIN;
	volatile int32_t t25 = 161284689;

	t25 = (x185<<(x186<(x187-x188)));

	if (t25 != 19262) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x190 = INT16_MIN;
	int64_t x191 = -7659LL;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t26 = -2343;

	t26 = (x189<<(x190<(x191-x192)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x197 = 36137U;
	volatile uint64_t x198 = 16LLU;
	volatile int32_t x199 = 0;
	uint32_t t27 = 76042U;

	t27 = (x197<<(x198<(x199-x200)));

	if (t27 != 72274U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x213 = INT16_MAX;
	volatile int32_t x214 = INT32_MIN;
	static int64_t x215 = INT64_MIN;
	static int16_t x216 = INT16_MIN;
	static volatile int32_t t28 = -836416;

	t28 = (x213<<(x214<(x215-x216)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x219 = -1756;
	static int16_t x220 = -1;
	static volatile int32_t t29 = 32711;

	t29 = (x217<<(x218<(x219-x220)));

	if (t29 != 10820) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x234 = -77;
	static int32_t x236 = INT32_MIN;
	uint64_t t30 = 5876LLU;

	t30 = (x233<<(x234<(x235-x236)));

	if (t30 != 50LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x248 = UINT16_MAX;
	static volatile int32_t t31 = -2;

	t31 = (x245<<(x246<(x247-x248)));

	if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x251 = UINT16_MAX;
	int64_t x252 = INT64_MAX;

	t32 = (x249<<(x250<(x251-x252)));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x253 = 33U;
	volatile int16_t x254 = -1;
	uint32_t x255 = 2551U;
	volatile int8_t x256 = -9;
	int32_t t33 = 5381;

	t33 = (x253<<(x254<(x255-x256)));

	if (t33 != 33) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int8_t x262 = -1;
	uint8_t x264 = 1U;

	t34 = (x261<<(x262<(x263-x264)));

	if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x266 = -1;
	int32_t x267 = INT32_MIN;
	int32_t x268 = -23019;
	static int32_t t35 = -1115409;

	t35 = (x265<<(x266<(x267-x268)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x273 = UINT32_MAX;
	int8_t x274 = -1;
	uint16_t x275 = 226U;
	uint32_t t36 = 123U;

	t36 = (x273<<(x274<(x275-x276)));

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x282 = INT64_MIN;
	static uint32_t x283 = 3221U;
	int16_t x284 = -1;
	volatile int32_t t37 = 0;

	t37 = (x281<<(x282<(x283-x284)));

	if (t37 != 131070) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x286 = -59;
	static uint32_t x287 = UINT32_MAX;
	static uint32_t x288 = 1326124085U;

	t38 = (x285<<(x286<(x287-x288)));

	if (t38 != 2590032778248LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x294 = INT16_MAX;
	uint64_t x295 = UINT64_MAX;
	static uint64_t x296 = 49099120991222938LLU;
	volatile uint32_t t39 = 10326U;

	t39 = (x293<<(x294<(x295-x296)));

	if (t39 != 1911674U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t40 = -703731;

	t40 = (x301<<(x302<(x303-x304)));

	if (t40 != 416) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x317 = UINT64_MAX;
	static uint32_t x318 = UINT32_MAX;
	static int64_t x319 = INT64_MAX;
	volatile uint64_t t41 = 3375LLU;

	t41 = (x317<<(x318<(x319-x320)));

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x325 = 2869640977LLU;
	uint8_t x326 = 5U;
	int8_t x327 = INT8_MAX;
	volatile uint64_t t42 = 16514970355LLU;

	t42 = (x325<<(x326<(x327-x328)));

	if (t42 != 5739281954LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x331 = 1U;
	uint64_t t43 = 728331505696LLU;

	t43 = (x329<<(x330<(x331-x332)));

	if (t43 != 9821182850627LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x333 = 8711211972868424LLU;
	int32_t x334 = -7126589;
	int64_t x335 = -8302LL;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t44 = 819157LLU;

	t44 = (x333<<(x334<(x335-x336)));

	if (t44 != 17422423945736848LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x337 = 1405427U;
	int64_t x338 = INT64_MIN;
	int32_t x340 = 475;
	volatile uint32_t t45 = 45620U;

	t45 = (x337<<(x338<(x339-x340)));

	if (t45 != 2810854U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x353 = 67855540782935282LLU;
	uint64_t x355 = 1553LLU;
	int8_t x356 = -1;
	uint64_t t46 = 1754603877650LLU;

	t46 = (x353<<(x354<(x355-x356)));

	if (t46 != 67855540782935282LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x357 = 11U;
	int16_t x358 = -1;
	static uint8_t x359 = 7U;

	t47 = (x357<<(x358<(x359-x360)));

	if (t47 != 11) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x361 = 11210U;
	static int64_t x362 = -1LL;
	volatile int8_t x363 = -1;
	static int16_t x364 = 4342;

	t48 = (x361<<(x362<(x363-x364)));

	if (t48 != 11210) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x365 = 339;
	int32_t x366 = -9933;
	uint16_t x367 = UINT16_MAX;
	static int16_t x368 = 8719;
	volatile int32_t t49 = -288;

	t49 = (x365<<(x366<(x367-x368)));

	if (t49 != 678) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x377 = 485287196LLU;
	uint8_t x378 = 12U;
	uint64_t x379 = UINT64_MAX;
	static int16_t x380 = INT16_MIN;
	static volatile uint64_t t50 = 0LLU;

	t50 = (x377<<(x378<(x379-x380)));

	if (t50 != 970574392LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x389 = UINT16_MAX;
	static uint32_t x390 = 116286U;
	int32_t x391 = INT32_MAX;
	uint16_t x392 = 2U;

	t51 = (x389<<(x390<(x391-x392)));

	if (t51 != 131070) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x397 = 667U;
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = INT16_MIN;
	volatile int32_t t52 = -102340588;

	t52 = (x397<<(x398<(x399-x400)));

	if (t52 != 667) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x402 = -8775;
	volatile int64_t x403 = -1LL;
	int8_t x404 = -6;
	uint32_t t53 = 41U;

	t53 = (x401<<(x402<(x403-x404)));

	if (t53 != 4U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x406 = -765226257365LL;
	int32_t x407 = -1;
	static int64_t x408 = -1LL;
	static int32_t t54 = 0;

	t54 = (x405<<(x406<(x407-x408)));

	if (t54 != 131070) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x409 = UINT16_MAX;
	volatile uint32_t x410 = 7U;
	static int64_t x411 = INT64_MIN;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t55 = -11544768;

	t55 = (x409<<(x410<(x411-x412)));

	if (t55 != 131070) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x413 = 1164U;
	int16_t x414 = INT16_MAX;
	int32_t x416 = 3107242;
	volatile int32_t t56 = 71985017;

	t56 = (x413<<(x414<(x415-x416)));

	if (t56 != 1164) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x425 = 4985177;
	static volatile int8_t x427 = -1;
	uint64_t x428 = UINT64_MAX;
	int32_t t57 = -5703649;

	t57 = (x425<<(x426<(x427-x428)));

	if (t57 != 4985177) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x446 = INT32_MAX;
	int64_t x447 = INT64_MAX;
	uint8_t x448 = 108U;
	int32_t t58 = -78485;

	t58 = (x445<<(x446<(x447-x448)));

	if (t58 != 1050238) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x453 = UINT32_MAX;
	volatile int32_t x454 = -1;
	uint8_t x455 = 6U;
	uint32_t t59 = UINT32_MAX;

	t59 = (x453<<(x454<(x455-x456)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x469 = 2468;
	int64_t x470 = INT64_MIN;
	uint32_t x471 = 151749U;
	static int16_t x472 = INT16_MIN;
	static int32_t t60 = 3521615;

	t60 = (x469<<(x470<(x471-x472)));

	if (t60 != 4936) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x473 = 24;
	volatile int64_t x474 = INT64_MIN;
	int8_t x475 = INT8_MIN;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t61 = -50067147;

	t61 = (x473<<(x474<(x475-x476)));

	if (t61 != 48) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x481 = UINT32_MAX;
	int16_t x482 = 12629;
	uint64_t x483 = 4814299LLU;
	uint32_t x484 = 758722U;
	uint32_t t62 = 229U;

	t62 = (x481<<(x482<(x483-x484)));

	if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x489 = UINT64_MAX;
	static int32_t x491 = -3146;
	int64_t x492 = -1LL;
	uint64_t t63 = UINT64_MAX;

	t63 = (x489<<(x490<(x491-x492)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x503 = -1;
	int32_t t64 = 190;

	t64 = (x501<<(x502<(x503-x504)));

	if (t64 != 3198322) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x505 = 18;
	volatile uint64_t x506 = UINT64_MAX;
	int32_t x507 = INT32_MIN;
	volatile uint32_t x508 = UINT32_MAX;
	int32_t t65 = 659838;

	t65 = (x505<<(x506<(x507-x508)));

	if (t65 != 18) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x509 = INT16_MAX;
	volatile uint16_t x510 = UINT16_MAX;
	volatile int64_t x511 = -1LL;
	int32_t x512 = -1;
	volatile int32_t t66 = -3552339;

	t66 = (x509<<(x510<(x511-x512)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x513 = 3695U;
	uint32_t x514 = 37615555U;
	static int32_t x515 = INT32_MIN;
	static int32_t t67 = -7357426;

	t67 = (x513<<(x514<(x515-x516)));

	if (t67 != 7390) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x517 = 55776LLU;
	volatile int16_t x518 = 2;
	int32_t x519 = -1;
	volatile int16_t x520 = INT16_MIN;
	volatile uint64_t t68 = 4998158904LLU;

	t68 = (x517<<(x518<(x519-x520)));

	if (t68 != 111552LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x521 = INT32_MAX;
	volatile uint64_t x522 = UINT64_MAX;
	static int64_t x523 = 41LL;
	int16_t x524 = INT16_MIN;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x521<<(x522<(x523-x524)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x537 = UINT16_MAX;
	uint64_t x538 = 47733LLU;
	int16_t x539 = -1;
	int16_t x540 = INT16_MIN;
	static int32_t t70 = 3072576;

	t70 = (x537<<(x538<(x539-x540)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x541 = 49U;
	static int16_t x542 = INT16_MAX;
	int64_t x543 = -1LL;
	volatile int32_t t71 = 29;

	t71 = (x541<<(x542<(x543-x544)));

	if (t71 != 98) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x545 = 2429;
	int16_t x547 = 10;
	int8_t x548 = INT8_MIN;
	int32_t t72 = -964;

	t72 = (x545<<(x546<(x547-x548)));

	if (t72 != 2429) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x559 = 1727518674U;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t73 = 104914365981LLU;

	t73 = (x557<<(x558<(x559-x560)));

	if (t73 != 4155515527348334LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x561 = 30233324295LL;
	static uint16_t x562 = 105U;
	int16_t x563 = INT16_MIN;
	volatile int64_t t74 = 44090476374591LL;

	t74 = (x561<<(x562<(x563-x564)));

	if (t74 != 30233324295LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x565 = UINT16_MAX;
	int8_t x566 = 20;
	uint16_t x567 = 110U;
	int16_t x568 = -1871;
	static volatile int32_t t75 = 4;

	t75 = (x565<<(x566<(x567-x568)));

	if (t75 != 131070) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x573 = INT16_MAX;
	volatile int8_t x574 = 0;
	uint16_t x575 = 225U;
	uint64_t x576 = 4298845371LLU;

	t76 = (x573<<(x574<(x575-x576)));

	if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x589 = 7084U;
	uint64_t x590 = UINT64_MAX;
	int32_t x592 = -1;
	int32_t t77 = 0;

	t77 = (x589<<(x590<(x591-x592)));

	if (t77 != 7084) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x595 = -10;

	t78 = (x593<<(x594<(x595-x596)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x609 = 1U;
	static int32_t x611 = -1050;
	volatile uint32_t x612 = UINT32_MAX;
	int32_t t79 = 1393059;

	t79 = (x609<<(x610<(x611-x612)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x613 = 7;
	uint8_t x614 = UINT8_MAX;
	static uint8_t x615 = 4U;
	int16_t x616 = 8;
	int32_t t80 = 57;

	t80 = (x613<<(x614<(x615-x616)));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x621 = INT16_MAX;
	int8_t x622 = INT8_MAX;
	volatile int64_t x623 = 6818875825850346LL;
	static volatile uint32_t x624 = 568U;

	t81 = (x621<<(x622<(x623-x624)));

	if (t81 != 65534) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x629 = INT8_MAX;
	static int32_t x630 = -1;
	int16_t x631 = INT16_MIN;
	int16_t x632 = 0;
	static int32_t t82 = -1987338;

	t82 = (x629<<(x630<(x631-x632)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x635 = -1;
	int64_t x636 = INT64_MAX;
	uint32_t t83 = 2713U;

	t83 = (x633<<(x634<(x635-x636)));

	if (t83 != 29792U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x649 = 2LLU;
	volatile uint32_t x651 = UINT32_MAX;
	static uint32_t x652 = UINT32_MAX;
	volatile uint64_t t84 = 926447960LLU;

	t84 = (x649<<(x650<(x651-x652)));

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x661 = INT32_MAX;
	static volatile uint8_t x662 = 1U;
	int16_t x663 = INT16_MIN;
	uint8_t x664 = 27U;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x661<<(x662<(x663-x664)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x673 = INT8_MAX;
	int32_t x674 = INT32_MIN;
	static int64_t x676 = INT64_MAX;
	static int32_t t86 = 469;

	t86 = (x673<<(x674<(x675-x676)));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x678 = -42243;
	static int8_t x679 = -1;
	int32_t x680 = -1;
	volatile int32_t t87 = -56431855;

	t87 = (x677<<(x678<(x679-x680)));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x681 = INT32_MAX;
	uint32_t x682 = UINT32_MAX;
	uint16_t x683 = UINT16_MAX;

	t88 = (x681<<(x682<(x683-x684)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x705 = INT8_MAX;
	static int8_t x706 = INT8_MIN;
	uint32_t x707 = UINT32_MAX;
	volatile int32_t t89 = -42269;

	t89 = (x705<<(x706<(x707-x708)));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x709 = INT64_MAX;
	int16_t x710 = INT16_MAX;
	static int32_t x711 = -33;
	int32_t x712 = 14;
	static volatile int64_t t90 = INT64_MAX;

	t90 = (x709<<(x710<(x711-x712)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x717 = 935U;
	int32_t x718 = INT32_MIN;
	static int64_t x719 = -1LL;
	uint8_t x720 = UINT8_MAX;
	static volatile uint32_t t91 = 5579986U;

	t91 = (x717<<(x718<(x719-x720)));

	if (t91 != 1870U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x721 = UINT16_MAX;
	static int64_t x722 = INT64_MIN;
	uint8_t x723 = 56U;
	uint16_t x724 = UINT16_MAX;
	int32_t t92 = -1;

	t92 = (x721<<(x722<(x723-x724)));

	if (t92 != 131070) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x770 = INT64_MIN;
	int8_t x771 = INT8_MAX;
	volatile int16_t x772 = INT16_MIN;
	volatile uint32_t t93 = 22U;

	t93 = (x769<<(x770<(x771-x772)));

	if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x778 = INT16_MAX;
	uint32_t t94 = 483U;

	t94 = (x777<<(x778<(x779-x780)));

	if (t94 != 7U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x781 = 4722081664179LL;
	int16_t x782 = INT16_MIN;
	static int64_t x783 = -225987LL;
	volatile int32_t x784 = INT32_MIN;
	int64_t t95 = -8479613891731LL;

	t95 = (x781<<(x782<(x783-x784)));

	if (t95 != 9444163328358LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x789 = INT8_MAX;
	volatile int16_t x790 = 7;
	int16_t x791 = -1;
	int32_t t96 = -8988247;

	t96 = (x789<<(x790<(x791-x792)));

	if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x801 = 114U;
	int32_t x803 = INT32_MAX;

	t97 = (x801<<(x802<(x803-x804)));

	if (t97 != 228) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x805 = 444;
	static int8_t x806 = -2;
	volatile int16_t x808 = INT16_MIN;
	static volatile int32_t t98 = 7820;

	t98 = (x805<<(x806<(x807-x808)));

	if (t98 != 888) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x821 = 1;
	static int64_t x822 = INT64_MIN;
	int16_t x823 = INT16_MAX;
	uint8_t x824 = 1U;
	int32_t t99 = -3440116;

	t99 = (x821<<(x822<(x823-x824)));

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

