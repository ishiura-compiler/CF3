#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = INT16_MIN;
volatile uint32_t x20 = UINT32_MAX;
static volatile uint16_t x21 = 25563U;
static int16_t x38 = INT16_MIN;
int16_t x39 = INT16_MIN;
static volatile int64_t x40 = -1LL;
volatile int64_t t4 = -44408741934LL;
uint8_t x45 = UINT8_MAX;
uint64_t x69 = 1LLU;
static int8_t x93 = INT8_MAX;
volatile int8_t x103 = INT8_MAX;
int16_t x111 = INT16_MIN;
volatile int32_t x118 = -11032;
int8_t x121 = INT8_MIN;
int32_t x134 = -1;
volatile int64_t t16 = 0LL;
int32_t x167 = INT32_MIN;
static int64_t x200 = -10098597LL;
int32_t x223 = -23023366;
int32_t x229 = 14355362;
int16_t x250 = -2783;
static volatile uint64_t x253 = 237842801223950LLU;
int16_t x256 = INT16_MAX;
uint32_t t27 = UINT32_MAX;
volatile int8_t x294 = INT8_MIN;
uint64_t x295 = UINT64_MAX;
int32_t x322 = -1;
int16_t x338 = INT16_MIN;
int32_t t33 = INT32_MIN;
int64_t x362 = INT64_MIN;
int32_t x384 = 6391;
static int64_t x402 = INT64_MIN;
uint32_t x404 = 24U;
int64_t x412 = 51451LL;
int32_t t38 = 196;
int8_t x428 = -2;
int8_t x430 = INT8_MIN;
static volatile uint32_t x432 = 2U;
uint32_t x440 = UINT32_MAX;
uint32_t x475 = 24U;
static uint32_t t45 = UINT32_MAX;
uint16_t x513 = 451U;
int32_t t46 = 0;
int32_t x518 = INT32_MIN;
volatile uint32_t t47 = UINT32_MAX;
volatile int32_t x527 = -1;
int32_t x595 = INT32_MIN;
volatile int64_t t51 = -62595335LL;
int16_t x597 = -13932;
uint64_t x599 = UINT64_MAX;
uint64_t x619 = 42731737LLU;
int64_t x622 = INT64_MIN;
uint32_t x627 = 25374537U;
volatile int8_t x628 = 2;
int8_t x631 = INT8_MIN;
int32_t x656 = INT32_MIN;
int8_t x667 = INT8_MIN;
int32_t x676 = -1;
int32_t x681 = INT32_MAX;
volatile int8_t x708 = INT8_MIN;
uint64_t x715 = 830323LLU;
volatile int8_t x716 = -7;
int16_t x736 = -1;
int8_t x740 = INT8_MIN;
static int32_t t65 = 8;
uint8_t x771 = UINT8_MAX;
int64_t x772 = INT64_MAX;
int64_t x778 = INT64_MIN;
uint8_t x781 = 1U;
int32_t x791 = INT32_MAX;
static int64_t x799 = 528322183413069LL;
uint8_t x800 = 4U;
int32_t x805 = INT32_MIN;
int8_t x815 = -1;
int32_t x816 = INT32_MIN;
int64_t x826 = INT64_MIN;
int8_t x849 = -1;
int32_t x863 = INT32_MIN;
int8_t x876 = 26;
volatile int32_t x898 = -1;
int32_t x899 = INT32_MIN;
int8_t x900 = INT8_MIN;
static int64_t x903 = -1LL;
uint8_t x904 = UINT8_MAX;
static int64_t x905 = -1LL;
int32_t x906 = INT32_MIN;
volatile int64_t t84 = -7342616068LL;
int8_t x913 = INT8_MIN;
int32_t x937 = INT32_MAX;
static uint16_t x944 = UINT16_MAX;
int16_t x955 = INT16_MAX;
int32_t x956 = INT32_MIN;
volatile int64_t x979 = 181495118437LL;
int32_t x982 = -894;
int8_t x984 = 5;
uint32_t x1000 = UINT32_MAX;
volatile uint64_t t93 = 216464LLU;
int32_t x1003 = INT32_MIN;
int16_t x1008 = 0;
int32_t t96 = 4018;
int64_t x1032 = -12467997022LL;
static volatile uint32_t t98 = UINT32_MAX;
static uint32_t x1035 = UINT32_MAX;


void f0(void) {
	uint8_t x13 = UINT8_MAX;
	static int8_t x14 = -60;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t0 = 993119;

	t0 = (x13/(x14<(x15==x16)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = INT8_MAX;
	int16_t x18 = -1;
	int64_t x19 = -500142LL;
	static int32_t t1 = -2676234;

	t1 = (x17/(x18<(x19==x20)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x22 = INT16_MIN;
	int8_t x23 = -1;
	volatile int8_t x24 = 1;
	static int32_t t2 = -92;

	t2 = (x21/(x22<(x23==x24)));

	if (t2 != 25563) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t t3 = UINT32_MAX;

	t3 = (x37/(x38<(x39==x40)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x41 = 3227043438LL;
	int32_t x42 = -1;
	uint16_t x43 = 1872U;
	volatile int8_t x44 = INT8_MAX;

	t4 = (x41/(x42<(x43==x44)));

	if (t4 != 3227043438LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x46 = -1;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = 9U;
	int32_t t5 = 1553504;

	t5 = (x45/(x46<(x47==x48)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x65 = INT16_MAX;
	volatile int64_t x66 = -1LL;
	uint16_t x67 = 22U;
	uint64_t x68 = 28457894744836LLU;
	int32_t t6 = -100;

	t6 = (x65/(x66<(x67==x68)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x70 = -1;
	int8_t x71 = -1;
	int32_t x72 = INT32_MIN;
	static uint64_t t7 = 3913123813573LLU;

	t7 = (x69/(x70<(x71==x72)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x85 = 9056688847242344LL;
	int64_t x86 = INT64_MIN;
	int64_t x87 = 5820243LL;
	uint32_t x88 = UINT32_MAX;
	int64_t t8 = -428987667026LL;

	t8 = (x85/(x86<(x87==x88)));

	if (t8 != 9056688847242344LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x94 = INT64_MIN;
	volatile int32_t x95 = INT32_MIN;
	int32_t x96 = -1;
	int32_t t9 = -2493;

	t9 = (x93/(x94<(x95==x96)));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x101 = INT64_MIN;
	volatile int64_t x102 = INT64_MIN;
	static int64_t x104 = -1LL;
	int64_t t10 = INT64_MIN;

	t10 = (x101/(x102<(x103==x104)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x105 = 108U;
	int8_t x106 = INT8_MIN;
	static volatile uint64_t x107 = 371140801LLU;
	static int8_t x108 = -1;
	int32_t t11 = 8;

	t11 = (x105/(x106<(x107==x108)));

	if (t11 != 108) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x109 = 35;
	static int16_t x110 = INT16_MIN;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t12 = -1803;

	t12 = (x109/(x110<(x111==x112)));

	if (t12 != 35) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x113 = -8;
	int16_t x114 = -19;
	int64_t x115 = 1665609835LL;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t13 = -515148588;

	t13 = (x113/(x114<(x115==x116)));

	if (t13 != -8) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x117 = 156;
	volatile int8_t x119 = -1;
	volatile uint16_t x120 = 3U;
	int32_t t14 = -61104;

	t14 = (x117/(x118<(x119==x120)));

	if (t14 != 156) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x122 = -1;
	static uint8_t x123 = UINT8_MAX;
	int8_t x124 = 0;
	volatile int32_t t15 = 1;

	t15 = (x121/(x122<(x123==x124)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x133 = -1LL;
	volatile int64_t x135 = -298022605234617LL;
	int16_t x136 = -1;

	t16 = (x133/(x134<(x135==x136)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x141 = INT64_MAX;
	static int32_t x142 = -1399434;
	volatile uint64_t x143 = 274918597LLU;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x141/(x142<(x143==x144)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	static int64_t x151 = -1LL;
	int64_t x152 = -1LL;
	volatile int32_t t18 = -809284864;

	t18 = (x149/(x150<(x151==x152)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x165 = -1;
	int8_t x166 = -1;
	static volatile int64_t x168 = -1LL;
	volatile int32_t t19 = 29;

	t19 = (x165/(x166<(x167==x168)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = 7828U;
	int32_t t20 = INT32_MIN;

	t20 = (x197/(x198<(x199==x200)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x201 = -1;
	int64_t x202 = INT64_MIN;
	volatile uint8_t x203 = 48U;
	uint16_t x204 = 15U;
	volatile int32_t t21 = -1;

	t21 = (x201/(x202<(x203==x204)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	int64_t x219 = INT64_MIN;
	int64_t x220 = -32897739LL;
	volatile int32_t t22 = INT32_MIN;

	t22 = (x217/(x218<(x219==x220)));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x221 = 32;
	int32_t x222 = -419037;
	int32_t x224 = -405790;
	volatile int32_t t23 = -1627;

	t23 = (x221/(x222<(x223==x224)));

	if (t23 != 32) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x230 = INT8_MIN;
	uint32_t x231 = 990334U;
	static uint16_t x232 = 218U;
	int32_t t24 = -195;

	t24 = (x229/(x230<(x231==x232)));

	if (t24 != 14355362) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x249 = 1996364674U;
	uint32_t x251 = UINT32_MAX;
	static int8_t x252 = INT8_MAX;
	static volatile uint32_t t25 = 10625U;

	t25 = (x249/(x250<(x251==x252)));

	if (t25 != 1996364674U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x254 = INT8_MIN;
	uint32_t x255 = UINT32_MAX;
	uint64_t t26 = 14792737276LLU;

	t26 = (x253/(x254<(x255==x256)));

	if (t26 != 237842801223950LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int8_t x262 = INT8_MIN;
	volatile uint8_t x263 = 1U;
	volatile int16_t x264 = 1;

	t27 = (x261/(x262<(x263==x264)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x293 = INT16_MAX;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t28 = 5500875;

	t28 = (x293/(x294<(x295==x296)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x317 = UINT32_MAX;
	int16_t x318 = -1;
	int64_t x319 = INT64_MIN;
	volatile int32_t x320 = -109417;
	uint32_t t29 = UINT32_MAX;

	t29 = (x317/(x318<(x319==x320)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x321 = INT16_MAX;
	int64_t x323 = -1LL;
	static int64_t x324 = INT64_MIN;
	volatile int32_t t30 = -10911;

	t30 = (x321/(x322<(x323==x324)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x333 = 3642;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = -1;
	static uint8_t x336 = 0U;
	volatile int32_t t31 = -131396886;

	t31 = (x333/(x334<(x335==x336)));

	if (t31 != 3642) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x337 = -1;
	uint16_t x339 = 1U;
	uint8_t x340 = 0U;
	int32_t t32 = 22734059;

	t32 = (x337/(x338<(x339==x340)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x357 = INT32_MIN;
	static int16_t x358 = INT16_MIN;
	static int8_t x359 = 3;
	static volatile uint16_t x360 = 313U;

	t33 = (x357/(x358<(x359==x360)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x361 = INT64_MAX;
	static int16_t x363 = INT16_MAX;
	volatile int32_t x364 = INT32_MIN;
	int64_t t34 = INT64_MAX;

	t34 = (x361/(x362<(x363==x364)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x381 = -291;
	volatile int32_t x382 = -1;
	uint8_t x383 = UINT8_MAX;
	volatile int32_t t35 = -6423;

	t35 = (x381/(x382<(x383==x384)));

	if (t35 != -291) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -18;
	int32_t x399 = INT32_MIN;
	static int32_t x400 = INT32_MIN;
	int64_t t36 = INT64_MIN;

	t36 = (x397/(x398<(x399==x400)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x401 = UINT16_MAX;
	int8_t x403 = INT8_MIN;
	int32_t t37 = -6;

	t37 = (x401/(x402<(x403==x404)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int64_t x410 = -620403307740682681LL;
	uint32_t x411 = UINT32_MAX;

	t38 = (x409/(x410<(x411==x412)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x425 = 39LLU;
	int32_t x426 = -1;
	static int32_t x427 = INT32_MAX;
	static uint64_t t39 = 5801257897333LLU;

	t39 = (x425/(x426<(x427==x428)));

	if (t39 != 39LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x429 = 223597532339745231LLU;
	int16_t x431 = -14434;
	uint64_t t40 = 57LLU;

	t40 = (x429/(x430<(x431==x432)));

	if (t40 != 223597532339745231LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x437 = INT8_MAX;
	int16_t x438 = -1;
	int16_t x439 = INT16_MAX;
	volatile int32_t t41 = 12262508;

	t41 = (x437/(x438<(x439==x440)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x465 = 16U;
	int64_t x466 = -7763342440988956LL;
	int8_t x467 = -1;
	uint16_t x468 = 447U;
	int32_t t42 = -627450;

	t42 = (x465/(x466<(x467==x468)));

	if (t42 != 16) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x473 = INT16_MAX;
	static volatile int64_t x474 = -2LL;
	uint8_t x476 = 83U;
	volatile int32_t t43 = -6;

	t43 = (x473/(x474<(x475==x476)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x489 = 6928005702163301LL;
	static volatile int8_t x490 = INT8_MIN;
	int64_t x491 = -1LL;
	uint8_t x492 = 12U;
	int64_t t44 = -1LL;

	t44 = (x489/(x490<(x491==x492)));

	if (t44 != 6928005702163301LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x497 = UINT32_MAX;
	int8_t x498 = -46;
	static int8_t x499 = -1;
	static uint32_t x500 = UINT32_MAX;

	t45 = (x497/(x498<(x499==x500)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x514 = INT32_MIN;
	uint64_t x515 = 75195453459019917LLU;
	int16_t x516 = INT16_MAX;

	t46 = (x513/(x514<(x515==x516)));

	if (t46 != 451) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x517 = UINT32_MAX;
	int32_t x519 = 0;
	volatile int8_t x520 = -1;

	t47 = (x517/(x518<(x519==x520)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x525 = 0U;
	volatile int32_t x526 = INT32_MIN;
	volatile uint16_t x528 = UINT16_MAX;
	volatile uint32_t t48 = 235801668U;

	t48 = (x525/(x526<(x527==x528)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x529 = INT64_MIN;
	int64_t x530 = INT64_MIN;
	volatile uint16_t x531 = 2036U;
	volatile uint32_t x532 = 1044534054U;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x529/(x530<(x531==x532)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x541 = INT16_MIN;
	int32_t x542 = -6681;
	volatile int32_t x543 = INT32_MAX;
	uint64_t x544 = 56102LLU;
	volatile int32_t t50 = 985763;

	t50 = (x541/(x542<(x543==x544)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x593 = -1LL;
	volatile int64_t x594 = -1LL;
	volatile int64_t x596 = INT64_MIN;

	t51 = (x593/(x594<(x595==x596)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x598 = -492;
	int16_t x600 = 3;
	volatile int32_t t52 = 393323846;

	t52 = (x597/(x598<(x599==x600)));

	if (t52 != -13932) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x617 = INT16_MAX;
	static int32_t x618 = INT32_MIN;
	int32_t x620 = -1;
	static volatile int32_t t53 = -3;

	t53 = (x617/(x618<(x619==x620)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x621 = 22527031418LLU;
	int64_t x623 = INT64_MIN;
	int16_t x624 = INT16_MIN;
	uint64_t t54 = 16128780827LLU;

	t54 = (x621/(x622<(x623==x624)));

	if (t54 != 22527031418LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x625 = UINT32_MAX;
	int64_t x626 = -419108LL;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x625/(x626<(x627==x628)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x629 = UINT8_MAX;
	volatile int64_t x630 = -512135005226954LL;
	volatile int8_t x632 = -1;
	volatile int32_t t56 = -104148233;

	t56 = (x629/(x630<(x631==x632)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x653 = UINT64_MAX;
	volatile int8_t x654 = INT8_MIN;
	uint32_t x655 = 471U;
	uint64_t t57 = UINT64_MAX;

	t57 = (x653/(x654<(x655==x656)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x665 = INT64_MAX;
	int32_t x666 = INT32_MIN;
	int32_t x668 = -1;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x665/(x666<(x667==x668)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x673 = 1122390417U;
	int8_t x674 = -20;
	int64_t x675 = INT64_MAX;
	uint32_t t59 = 2184U;

	t59 = (x673/(x674<(x675==x676)));

	if (t59 != 1122390417U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x682 = -1;
	int16_t x683 = INT16_MIN;
	int64_t x684 = INT64_MIN;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x681/(x682<(x683==x684)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x701 = INT64_MIN;
	int8_t x702 = -5;
	uint32_t x703 = 213U;
	int64_t x704 = INT64_MAX;
	int64_t t61 = INT64_MIN;

	t61 = (x701/(x702<(x703==x704)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x705 = INT16_MIN;
	int32_t x706 = -4387912;
	uint8_t x707 = UINT8_MAX;
	volatile int32_t t62 = -51677;

	t62 = (x705/(x706<(x707==x708)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x713 = UINT32_MAX;
	int16_t x714 = INT16_MIN;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x713/(x714<(x715==x716)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x733 = UINT8_MAX;
	int32_t x734 = -28122;
	volatile int8_t x735 = INT8_MIN;
	static int32_t t64 = 656;

	t64 = (x733/(x734<(x735==x736)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x737 = 11863U;
	static int16_t x738 = -663;
	uint8_t x739 = 12U;

	t65 = (x737/(x738<(x739==x740)));

	if (t65 != 11863) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x741 = INT64_MAX;
	int8_t x742 = -2;
	uint16_t x743 = UINT16_MAX;
	static volatile uint32_t x744 = 1412965056U;
	volatile int64_t t66 = INT64_MAX;

	t66 = (x741/(x742<(x743==x744)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x753 = INT64_MIN;
	int32_t x754 = -1047915;
	volatile uint8_t x755 = 34U;
	volatile uint16_t x756 = 7U;
	int64_t t67 = INT64_MIN;

	t67 = (x753/(x754<(x755==x756)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x757 = INT8_MAX;
	int64_t x758 = -3730859920LL;
	int8_t x759 = INT8_MIN;
	static uint32_t x760 = 111610195U;
	int32_t t68 = -210894171;

	t68 = (x757/(x758<(x759==x760)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x769 = 215;
	volatile int8_t x770 = INT8_MIN;
	int32_t t69 = -483;

	t69 = (x769/(x770<(x771==x772)));

	if (t69 != 215) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x777 = 771138;
	int32_t x779 = INT32_MIN;
	volatile int8_t x780 = -9;
	int32_t t70 = 435394;

	t70 = (x777/(x778<(x779==x780)));

	if (t70 != 771138) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x782 = -1LL;
	static uint8_t x783 = 55U;
	static int8_t x784 = INT8_MIN;
	volatile int32_t t71 = -57;

	t71 = (x781/(x782<(x783==x784)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x789 = UINT32_MAX;
	int64_t x790 = INT64_MIN;
	uint32_t x792 = 60284600U;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x789/(x790<(x791==x792)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x797 = 1LL;
	volatile int8_t x798 = -1;
	static int64_t t73 = -89186728799912LL;

	t73 = (x797/(x798<(x799==x800)));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x801 = UINT32_MAX;
	volatile int16_t x802 = INT16_MIN;
	int8_t x803 = INT8_MAX;
	uint64_t x804 = UINT64_MAX;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (x801/(x802<(x803==x804)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x806 = -1;
	int16_t x807 = -486;
	uint64_t x808 = 12246835394005346LLU;
	int32_t t75 = INT32_MIN;

	t75 = (x805/(x806<(x807==x808)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x813 = INT16_MIN;
	int16_t x814 = -1;
	static volatile int32_t t76 = -35;

	t76 = (x813/(x814<(x815==x816)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x821 = INT64_MIN;
	static int16_t x822 = -1;
	uint64_t x823 = 254525LLU;
	volatile int64_t x824 = -1LL;
	static int64_t t77 = INT64_MIN;

	t77 = (x821/(x822<(x823==x824)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x825 = INT32_MIN;
	uint64_t x827 = 274084263845765600LLU;
	volatile int64_t x828 = INT64_MIN;
	static int32_t t78 = INT32_MIN;

	t78 = (x825/(x826<(x827==x828)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x850 = -1;
	uint8_t x851 = UINT8_MAX;
	uint8_t x852 = UINT8_MAX;
	static volatile int32_t t79 = 1405412;

	t79 = (x849/(x850<(x851==x852)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x861 = 3715633U;
	static int64_t x862 = -1LL;
	volatile uint32_t x864 = 38921734U;
	volatile uint32_t t80 = 900096U;

	t80 = (x861/(x862<(x863==x864)));

	if (t80 != 3715633U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x873 = 0U;
	int16_t x874 = INT16_MIN;
	int8_t x875 = 5;
	volatile int32_t t81 = 340504148;

	t81 = (x873/(x874<(x875==x876)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x897 = INT8_MIN;
	volatile int32_t t82 = -86;

	t82 = (x897/(x898<(x899==x900)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x901 = -46785LL;
	volatile int16_t x902 = INT16_MIN;
	int64_t t83 = -818LL;

	t83 = (x901/(x902<(x903==x904)));

	if (t83 != -46785LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x907 = INT64_MIN;
	uint16_t x908 = 5U;

	t84 = (x905/(x906<(x907==x908)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x914 = INT32_MIN;
	int16_t x915 = -1;
	int16_t x916 = -1977;
	int32_t t85 = 8004;

	t85 = (x913/(x914<(x915==x916)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x917 = -30220031;
	int16_t x918 = -1;
	int64_t x919 = -1470534699LL;
	uint64_t x920 = UINT64_MAX;
	volatile int32_t t86 = 13795;

	t86 = (x917/(x918<(x919==x920)));

	if (t86 != -30220031) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x929 = -9;
	int8_t x930 = -1;
	uint32_t x931 = 507343U;
	volatile uint16_t x932 = 11U;
	int32_t t87 = -1924895;

	t87 = (x929/(x930<(x931==x932)));

	if (t87 != -9) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x938 = INT64_MIN;
	int32_t x939 = 3;
	int16_t x940 = INT16_MAX;
	int32_t t88 = INT32_MAX;

	t88 = (x937/(x938<(x939==x940)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x941 = 230275907U;
	int64_t x942 = -1LL;
	static int16_t x943 = 0;
	volatile uint32_t t89 = 7004U;

	t89 = (x941/(x942<(x943==x944)));

	if (t89 != 230275907U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x953 = INT32_MAX;
	volatile int8_t x954 = INT8_MIN;
	volatile int32_t t90 = INT32_MAX;

	t90 = (x953/(x954<(x955==x956)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x977 = 7U;
	int64_t x978 = -1LL;
	int8_t x980 = INT8_MIN;
	volatile int32_t t91 = 8021;

	t91 = (x977/(x978<(x979==x980)));

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x981 = UINT64_MAX;
	int32_t x983 = -1;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x981/(x982<(x983==x984)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x997 = 2LLU;
	int8_t x998 = INT8_MIN;
	int64_t x999 = INT64_MIN;

	t93 = (x997/(x998<(x999==x1000)));

	if (t93 != 2LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1001 = 3U;
	int16_t x1002 = INT16_MIN;
	int16_t x1004 = INT16_MIN;
	volatile uint32_t t94 = 27U;

	t94 = (x1001/(x1002<(x1003==x1004)));

	if (t94 != 3U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1005 = 740;
	int32_t x1006 = -1;
	uint16_t x1007 = UINT16_MAX;
	volatile int32_t t95 = 11;

	t95 = (x1005/(x1006<(x1007==x1008)));

	if (t95 != 740) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1021 = -1;
	int8_t x1022 = INT8_MIN;
	static volatile uint16_t x1023 = 9U;
	uint16_t x1024 = 7U;

	t96 = (x1021/(x1022<(x1023==x1024)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1025 = 64U;
	int64_t x1026 = INT64_MIN;
	uint32_t x1027 = UINT32_MAX;
	static uint16_t x1028 = 2923U;
	int32_t t97 = 319355613;

	t97 = (x1025/(x1026<(x1027==x1028)));

	if (t97 != 64) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x1029 = UINT32_MAX;
	int8_t x1030 = INT8_MIN;
	int8_t x1031 = -1;

	t98 = (x1029/(x1030<(x1031==x1032)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x1033 = INT64_MAX;
	int8_t x1034 = -1;
	uint16_t x1036 = 30U;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x1033/(x1034<(x1035==x1036)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

