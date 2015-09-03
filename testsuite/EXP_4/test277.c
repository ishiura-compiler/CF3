#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x23 = UINT64_MAX;
int32_t t1 = 2;
int32_t t2 = -1673;
static uint16_t x47 = 16678U;
volatile int8_t x57 = 1;
static int64_t x58 = INT64_MIN;
int32_t t6 = 15132985;
uint32_t x65 = UINT32_MAX;
int16_t x71 = 6862;
int64_t x93 = INT64_MIN;
uint8_t x96 = UINT8_MAX;
int32_t x106 = INT32_MAX;
int32_t t12 = 6;
uint64_t x147 = 384665LLU;
static int16_t x205 = -1;
volatile int32_t x206 = INT32_MIN;
int64_t x209 = 108429337994LL;
int8_t x211 = -2;
volatile int64_t t20 = -108LL;
int16_t x240 = INT16_MIN;
volatile int64_t t21 = 2486225500LL;
static uint8_t x247 = UINT8_MAX;
int64_t x248 = -6404173365LL;
static int32_t x249 = -1;
uint32_t x263 = UINT32_MAX;
static uint16_t x285 = 4548U;
int32_t t27 = -865494;
int64_t x305 = -1LL;
int64_t t28 = 1627292465086325LL;
int64_t x315 = -30242LL;
static volatile int32_t x338 = INT32_MIN;
volatile uint32_t t32 = UINT32_MAX;
int64_t x352 = -560424747865LL;
int16_t x370 = -1;
int64_t x371 = -1LL;
static int32_t x372 = -1;
static volatile int32_t t35 = 137;
int16_t x376 = 2;
volatile int32_t t36 = 14612;
static volatile uint32_t x400 = 23U;
int64_t x409 = INT64_MAX;
volatile uint8_t x410 = 1U;
uint64_t x412 = 3LLU;
int8_t x434 = INT8_MAX;
volatile uint32_t x435 = 28124233U;
static volatile int16_t x436 = -1;
int64_t x444 = -45854591338LL;
int64_t x457 = INT64_MIN;
int64_t x459 = INT64_MAX;
volatile uint32_t t47 = 412831U;
int8_t x497 = INT8_MAX;
int64_t x498 = INT64_MIN;
int16_t x515 = INT16_MAX;
int8_t x531 = -2;
uint8_t x532 = 8U;
volatile int16_t x564 = INT16_MIN;
int16_t x565 = -76;
volatile int32_t t58 = -163;
uint8_t x573 = 125U;
volatile int32_t x574 = -57641392;
int64_t x586 = INT64_MIN;
uint64_t x595 = 27LLU;
int64_t x602 = INT64_MIN;
int16_t x613 = -1;
static volatile int16_t x621 = 558;
uint32_t x624 = UINT32_MAX;
volatile int16_t x626 = -1;
int8_t x627 = INT8_MIN;
static int32_t x634 = INT32_MIN;
uint32_t x653 = 142327660U;
volatile int32_t x656 = -1028222835;
static volatile int16_t x669 = -1;
int16_t x677 = -348;
int64_t x679 = INT64_MAX;
int32_t x686 = INT32_MAX;
int16_t x697 = -20;
int16_t x710 = 1;
static int16_t x712 = 57;
int32_t x714 = 1867700;
uint64_t x715 = UINT64_MAX;
volatile int32_t t76 = 71049197;
volatile uint32_t x726 = 0U;
uint16_t x727 = 10U;
int32_t x731 = INT32_MIN;
volatile int32_t t81 = INT32_MIN;
uint16_t x758 = 305U;
int32_t t84 = 103460446;
uint8_t x776 = UINT8_MAX;
volatile uint8_t x790 = UINT8_MAX;
int8_t x808 = INT8_MIN;
volatile uint64_t t90 = 1619378104293068LLU;
int64_t x816 = -502723491196390LL;
uint8_t x821 = UINT8_MAX;
int64_t x823 = INT64_MIN;
int32_t x824 = INT32_MIN;
uint8_t x837 = UINT8_MAX;
int32_t x838 = INT32_MIN;
int64_t x839 = 2364565817972794LL;
int64_t x840 = 6LL;
uint8_t x844 = 2U;
int32_t t95 = -1218;
uint8_t x853 = 1U;
int32_t x858 = INT32_MIN;
volatile uint32_t x863 = 1U;


void f0(void) {
	int16_t x21 = INT16_MIN;
	volatile uint64_t x22 = 118449044723LLU;
	volatile int8_t x24 = 1;
	volatile int32_t t0 = 7474069;

	t0 = (x21/(x22<(x23-x24)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = 33;
	volatile uint64_t x26 = 23124LLU;
	static int32_t x27 = -1;
	uint16_t x28 = UINT16_MAX;

	t1 = (x25/(x26<(x27-x28)));

	if (t1 != 33) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x29 = -1;
	volatile int32_t x30 = INT32_MIN;
	static volatile int16_t x31 = -1;
	static int16_t x32 = INT16_MIN;

	t2 = (x29/(x30<(x31-x32)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x45 = INT32_MAX;
	int64_t x46 = INT64_MIN;
	int16_t x48 = INT16_MAX;
	volatile int32_t t3 = INT32_MAX;

	t3 = (x45/(x46<(x47-x48)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	int8_t x51 = -9;
	int32_t x52 = INT32_MIN;
	volatile int32_t t4 = 3735674;

	t4 = (x49/(x50<(x51-x52)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x53 = 4393594035073LLU;
	int64_t x54 = -116831687650LL;
	static int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;
	uint64_t t5 = 108LLU;

	t5 = (x53/(x54<(x55-x56)));

	if (t5 != 4393594035073LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x59 = 6950LL;
	uint32_t x60 = 4175720U;

	t6 = (x57/(x58<(x59-x60)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x66 = INT16_MIN;
	int16_t x67 = -1;
	int64_t x68 = -1992615502339263880LL;
	uint32_t t7 = UINT32_MAX;

	t7 = (x65/(x66<(x67-x68)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x69 = 14;
	volatile int64_t x70 = INT64_MIN;
	uint64_t x72 = 2864643839753LLU;
	int32_t t8 = -535710948;

	t8 = (x69/(x70<(x71-x72)));

	if (t8 != 14) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	volatile uint16_t x87 = UINT16_MAX;
	uint32_t x88 = 45138229U;
	int32_t t9 = 1719;

	t9 = (x85/(x86<(x87-x88)));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x94 = 1068291562699LLU;
	static int64_t x95 = INT64_MAX;
	int64_t t10 = INT64_MIN;

	t10 = (x93/(x94<(x95-x96)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x97 = INT16_MAX;
	static uint32_t x98 = 7U;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = 7879;
	volatile int32_t t11 = -1970;

	t11 = (x97/(x98<(x99-x100)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x105 = INT8_MIN;
	uint64_t x107 = UINT64_MAX;
	uint32_t x108 = 32U;

	t12 = (x105/(x106<(x107-x108)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x117 = INT8_MIN;
	static volatile int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MAX;
	static int16_t x120 = -1;
	volatile int32_t t13 = 58;

	t13 = (x117/(x118<(x119-x120)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x133 = -1LL;
	static uint64_t x134 = 415LLU;
	uint8_t x135 = 4U;
	int32_t x136 = INT32_MAX;
	int64_t t14 = -48116LL;

	t14 = (x133/(x134<(x135-x136)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = 121U;
	int64_t x148 = 114347LL;
	int32_t t15 = INT32_MIN;

	t15 = (x145/(x146<(x147-x148)));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x173 = UINT64_MAX;
	int8_t x174 = INT8_MIN;
	int32_t x175 = -1;
	int8_t x176 = INT8_MIN;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x173/(x174<(x175-x176)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = INT32_MIN;
	volatile uint8_t x183 = 2U;
	static int32_t x184 = 17255647;
	static volatile int32_t t17 = -1;

	t17 = (x181/(x182<(x183-x184)));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x201 = INT8_MAX;
	uint32_t x202 = 0U;
	uint32_t x203 = UINT32_MAX;
	static volatile int64_t x204 = -1LL;
	int32_t t18 = -76394981;

	t18 = (x201/(x202<(x203-x204)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x207 = 14227U;
	uint16_t x208 = 0U;
	static int32_t t19 = -512997;

	t19 = (x205/(x206<(x207-x208)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x210 = INT8_MIN;
	int8_t x212 = -6;

	t20 = (x209/(x210<(x211-x212)));

	if (t20 != 108429337994LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x237 = 2028161109305LL;
	uint32_t x238 = 4233U;
	static int32_t x239 = 2078;

	t21 = (x237/(x238<(x239-x240)));

	if (t21 != 2028161109305LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x245 = 127U;
	static int64_t x246 = -1LL;
	volatile int32_t t22 = 0;

	t22 = (x245/(x246<(x247-x248)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x250 = 5677LLU;
	int16_t x251 = INT16_MIN;
	int8_t x252 = -1;
	int32_t t23 = 327807960;

	t23 = (x249/(x250<(x251-x252)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x253 = INT64_MIN;
	volatile int32_t x254 = -29461;
	static int8_t x255 = 5;
	volatile int16_t x256 = 2;
	int64_t t24 = INT64_MIN;

	t24 = (x253/(x254<(x255-x256)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x261 = INT32_MIN;
	static int16_t x262 = 7;
	static int16_t x264 = 11172;
	int32_t t25 = INT32_MIN;

	t25 = (x261/(x262<(x263-x264)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x281 = INT64_MIN;
	volatile int32_t x282 = INT32_MIN;
	static volatile int16_t x283 = -1;
	volatile int32_t x284 = -1;
	int64_t t26 = INT64_MIN;

	t26 = (x281/(x282<(x283-x284)));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x286 = 5U;
	uint64_t x287 = UINT64_MAX;
	volatile int64_t x288 = INT64_MIN;

	t27 = (x285/(x286<(x287-x288)));

	if (t27 != 4548) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x306 = 127161LLU;
	int16_t x307 = -2;
	volatile int64_t x308 = 612712LL;

	t28 = (x305/(x306<(x307-x308)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x313 = 3U;
	volatile int16_t x314 = 121;
	int32_t x316 = INT32_MIN;
	int32_t t29 = 98640575;

	t29 = (x313/(x314<(x315-x316)));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x325 = 1360406LL;
	int8_t x326 = INT8_MAX;
	int32_t x327 = 0;
	int16_t x328 = INT16_MIN;
	volatile int64_t t30 = 133LL;

	t30 = (x325/(x326<(x327-x328)));

	if (t30 != 1360406LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x337 = INT16_MAX;
	uint8_t x339 = 33U;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t31 = -7;

	t31 = (x337/(x338<(x339-x340)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x345 = UINT32_MAX;
	static int64_t x346 = -32056958534035LL;
	uint8_t x347 = 12U;
	int32_t x348 = INT32_MAX;

	t32 = (x345/(x346<(x347-x348)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x350 = -1;
	volatile int16_t x351 = INT16_MAX;
	volatile int32_t t33 = -4103474;

	t33 = (x349/(x350<(x351-x352)));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x353 = INT16_MAX;
	int16_t x354 = INT16_MIN;
	static int8_t x355 = -1;
	int8_t x356 = 1;
	static volatile int32_t t34 = 66091134;

	t34 = (x353/(x354<(x355-x356)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x369 = -1;

	t35 = (x369/(x370<(x371-x372)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x373 = 3;
	int64_t x374 = INT64_MIN;
	int16_t x375 = -229;

	t36 = (x373/(x374<(x375-x376)));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = 1540;
	uint32_t x395 = 11980743U;
	static int8_t x396 = -1;
	volatile int64_t t37 = INT64_MIN;

	t37 = (x393/(x394<(x395-x396)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x397 = -1LL;
	int32_t x398 = 54;
	int32_t x399 = INT32_MAX;
	int64_t t38 = 11237831682LL;

	t38 = (x397/(x398<(x399-x400)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x401 = 420U;
	int64_t x402 = 376929263307LL;
	volatile int64_t x403 = INT64_MIN;
	uint64_t x404 = UINT64_MAX;
	int32_t t39 = -307;

	t39 = (x401/(x402<(x403-x404)));

	if (t39 != 420) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x411 = INT32_MAX;
	int64_t t40 = INT64_MAX;

	t40 = (x409/(x410<(x411-x412)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x417 = -2;
	static uint32_t x418 = 17U;
	volatile int16_t x419 = INT16_MAX;
	uint16_t x420 = 1U;
	volatile int32_t t41 = -74673761;

	t41 = (x417/(x418<(x419-x420)));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x421 = INT32_MAX;
	int16_t x422 = 922;
	int64_t x423 = INT64_MAX;
	static uint8_t x424 = UINT8_MAX;
	static int32_t t42 = INT32_MAX;

	t42 = (x421/(x422<(x423-x424)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x433 = UINT64_MAX;
	uint64_t t43 = UINT64_MAX;

	t43 = (x433/(x434<(x435-x436)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x441 = -16;
	uint64_t x442 = 0LLU;
	uint8_t x443 = 48U;
	volatile int32_t t44 = 3;

	t44 = (x441/(x442<(x443-x444)));

	if (t44 != -16) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x458 = 0U;
	static int16_t x460 = INT16_MAX;
	int64_t t45 = INT64_MIN;

	t45 = (x457/(x458<(x459-x460)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x473 = 6;
	uint8_t x474 = 2U;
	static int8_t x475 = INT8_MAX;
	uint64_t x476 = 17680432942960LLU;
	volatile int32_t t46 = 1018;

	t46 = (x473/(x474<(x475-x476)));

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x489 = 6774160U;
	int32_t x490 = INT32_MIN;
	static volatile int16_t x491 = INT16_MAX;
	static int64_t x492 = -1LL;

	t47 = (x489/(x490<(x491-x492)));

	if (t47 != 6774160U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x499 = INT16_MIN;
	static int64_t x500 = -27626LL;
	volatile int32_t t48 = 44;

	t48 = (x497/(x498<(x499-x500)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x509 = 1701U;
	int16_t x510 = INT16_MIN;
	int32_t x511 = 33003746;
	volatile uint8_t x512 = 54U;
	static volatile int32_t t49 = 1;

	t49 = (x509/(x510<(x511-x512)));

	if (t49 != 1701) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x513 = 17;
	uint16_t x514 = 9U;
	uint16_t x516 = 6027U;
	int32_t t50 = 146842;

	t50 = (x513/(x514<(x515-x516)));

	if (t50 != 17) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x517 = INT16_MAX;
	int8_t x518 = INT8_MIN;
	int16_t x519 = INT16_MAX;
	static volatile uint8_t x520 = 37U;
	static int32_t t51 = 3743812;

	t51 = (x517/(x518<(x519-x520)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x525 = INT64_MIN;
	int16_t x526 = 0;
	int64_t x527 = 94821907164830757LL;
	static int64_t x528 = -1LL;
	int64_t t52 = INT64_MIN;

	t52 = (x525/(x526<(x527-x528)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x529 = INT16_MIN;
	volatile int16_t x530 = INT16_MIN;
	volatile int32_t t53 = 171078;

	t53 = (x529/(x530<(x531-x532)));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x533 = UINT8_MAX;
	int64_t x534 = 133861395LL;
	int16_t x535 = INT16_MIN;
	uint64_t x536 = 1267LLU;
	int32_t t54 = -2089;

	t54 = (x533/(x534<(x535-x536)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x557 = 2711904010291LL;
	int64_t x558 = INT64_MIN;
	uint32_t x559 = UINT32_MAX;
	volatile uint8_t x560 = 0U;
	volatile int64_t t55 = 436432082356LL;

	t55 = (x557/(x558<(x559-x560)));

	if (t55 != 2711904010291LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x561 = UINT64_MAX;
	static volatile int64_t x562 = -66525LL;
	int8_t x563 = INT8_MAX;
	static volatile uint64_t t56 = UINT64_MAX;

	t56 = (x561/(x562<(x563-x564)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x566 = INT16_MIN;
	static int8_t x567 = INT8_MAX;
	uint16_t x568 = 462U;
	int32_t t57 = 0;

	t57 = (x565/(x566<(x567-x568)));

	if (t57 != -76) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x569 = INT16_MIN;
	uint8_t x570 = 0U;
	int8_t x571 = INT8_MAX;
	volatile int16_t x572 = INT16_MIN;

	t58 = (x569/(x570<(x571-x572)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x575 = 197171;
	int8_t x576 = 1;
	volatile int32_t t59 = 51688;

	t59 = (x573/(x574<(x575-x576)));

	if (t59 != 125) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x585 = INT8_MIN;
	static int64_t x587 = INT64_MIN;
	volatile int64_t x588 = -4113399354363393LL;
	int32_t t60 = -31;

	t60 = (x585/(x586<(x587-x588)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x593 = INT16_MIN;
	int16_t x594 = INT16_MAX;
	uint16_t x596 = UINT16_MAX;
	int32_t t61 = -450;

	t61 = (x593/(x594<(x595-x596)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x597 = -1;
	int16_t x598 = 963;
	volatile uint64_t x599 = 22470162LLU;
	static volatile uint16_t x600 = 63U;
	int32_t t62 = -1343529;

	t62 = (x597/(x598<(x599-x600)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x601 = 6U;
	volatile int32_t x603 = -29;
	static int16_t x604 = -29;
	volatile int32_t t63 = 31;

	t63 = (x601/(x602<(x603-x604)));

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x614 = 12U;
	static volatile int16_t x615 = -1;
	int32_t x616 = -36;
	static int32_t t64 = -171;

	t64 = (x613/(x614<(x615-x616)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x622 = INT8_MIN;
	int8_t x623 = INT8_MIN;
	volatile int32_t t65 = -9;

	t65 = (x621/(x622<(x623-x624)));

	if (t65 != 558) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x625 = 297U;
	volatile int16_t x628 = INT16_MIN;
	static int32_t t66 = 2;

	t66 = (x625/(x626<(x627-x628)));

	if (t66 != 297) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x633 = INT8_MIN;
	uint8_t x635 = UINT8_MAX;
	int64_t x636 = -107302596993LL;
	int32_t t67 = -223511;

	t67 = (x633/(x634<(x635-x636)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x645 = -28;
	uint16_t x646 = UINT16_MAX;
	volatile int64_t x647 = -1619200658977LL;
	int64_t x648 = INT64_MIN;
	volatile int32_t t68 = 548978647;

	t68 = (x645/(x646<(x647-x648)));

	if (t68 != -28) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x654 = INT8_MAX;
	volatile int16_t x655 = -1;
	volatile uint32_t t69 = 455428U;

	t69 = (x653/(x654<(x655-x656)));

	if (t69 != 142327660U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x657 = INT64_MIN;
	static int64_t x658 = -527865673631LL;
	static int8_t x659 = INT8_MIN;
	int64_t x660 = -1LL;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x657/(x658<(x659-x660)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x670 = 15116U;
	volatile int16_t x671 = INT16_MAX;
	volatile uint32_t x672 = UINT32_MAX;
	int32_t t71 = -186655045;

	t71 = (x669/(x670<(x671-x672)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x678 = 1032;
	int8_t x680 = 1;
	static int32_t t72 = 153;

	t72 = (x677/(x678<(x679-x680)));

	if (t72 != -348) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x685 = -1;
	volatile int64_t x687 = INT64_MIN;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t73 = -1960;

	t73 = (x685/(x686<(x687-x688)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x698 = INT32_MIN;
	static int16_t x699 = -1;
	volatile int8_t x700 = -1;
	int32_t t74 = 28415;

	t74 = (x697/(x698<(x699-x700)));

	if (t74 != -20) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x709 = 102032663021LLU;
	static int8_t x711 = INT8_MAX;
	uint64_t t75 = 1054505899LLU;

	t75 = (x709/(x710<(x711-x712)));

	if (t75 != 102032663021LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x713 = INT16_MIN;
	int32_t x716 = INT32_MIN;

	t76 = (x713/(x714<(x715-x716)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x721 = INT8_MIN;
	volatile int16_t x722 = -1;
	int8_t x723 = INT8_MAX;
	volatile int64_t x724 = -1LL;
	volatile int32_t t77 = 24974418;

	t77 = (x721/(x722<(x723-x724)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x725 = INT32_MIN;
	uint8_t x728 = 64U;
	int32_t t78 = INT32_MIN;

	t78 = (x725/(x726<(x727-x728)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x729 = INT32_MIN;
	volatile uint16_t x730 = 60U;
	uint32_t x732 = 2367377U;
	volatile int32_t t79 = INT32_MIN;

	t79 = (x729/(x730<(x731-x732)));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x741 = UINT8_MAX;
	uint8_t x742 = UINT8_MAX;
	int8_t x743 = INT8_MIN;
	uint32_t x744 = 233U;
	static volatile int32_t t80 = 486514852;

	t80 = (x741/(x742<(x743-x744)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x749 = INT32_MIN;
	int64_t x750 = -1LL;
	int16_t x751 = -1;
	static int8_t x752 = -10;

	t81 = (x749/(x750<(x751-x752)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x757 = -1;
	static int64_t x759 = -34137LL;
	static int32_t x760 = INT32_MIN;
	static int32_t t82 = 49305;

	t82 = (x757/(x758<(x759-x760)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x761 = -115LL;
	int32_t x762 = 149904479;
	volatile int32_t x763 = -1;
	int32_t x764 = INT32_MIN;
	int64_t t83 = -1394443LL;

	t83 = (x761/(x762<(x763-x764)));

	if (t83 != -115LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x765 = UINT16_MAX;
	uint8_t x766 = UINT8_MAX;
	uint32_t x767 = 31578U;
	uint8_t x768 = UINT8_MAX;

	t84 = (x765/(x766<(x767-x768)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x773 = 3773088644736962299LLU;
	int64_t x774 = INT64_MIN;
	int32_t x775 = INT32_MAX;
	static volatile uint64_t t85 = 6631785059LLU;

	t85 = (x773/(x774<(x775-x776)));

	if (t85 != 3773088644736962299LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x781 = INT8_MAX;
	int16_t x782 = INT16_MIN;
	uint8_t x783 = UINT8_MAX;
	uint8_t x784 = 7U;
	volatile int32_t t86 = 347819;

	t86 = (x781/(x782<(x783-x784)));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x785 = INT16_MAX;
	uint8_t x786 = 0U;
	int16_t x787 = 9199;
	int16_t x788 = 0;
	volatile int32_t t87 = 2974698;

	t87 = (x785/(x786<(x787-x788)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x789 = -1LL;
	static int8_t x791 = 15;
	int16_t x792 = INT16_MIN;
	int64_t t88 = 10001943617149LL;

	t88 = (x789/(x790<(x791-x792)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x793 = INT32_MIN;
	static int16_t x794 = INT16_MAX;
	int64_t x795 = 19691032199LL;
	int8_t x796 = -1;
	volatile int32_t t89 = INT32_MIN;

	t89 = (x793/(x794<(x795-x796)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x805 = 62LLU;
	int8_t x806 = -1;
	uint16_t x807 = 21597U;

	t90 = (x805/(x806<(x807-x808)));

	if (t90 != 62LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x813 = 6339U;
	uint32_t x814 = 1438U;
	uint64_t x815 = UINT64_MAX;
	volatile uint32_t t91 = 223740246U;

	t91 = (x813/(x814<(x815-x816)));

	if (t91 != 6339U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x822 = 625589797317LLU;
	int32_t t92 = -56662803;

	t92 = (x821/(x822<(x823-x824)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t t93 = 192465393;

	t93 = (x837/(x838<(x839-x840)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x841 = 823816606;
	volatile uint8_t x842 = UINT8_MAX;
	int32_t x843 = INT32_MAX;
	static int32_t t94 = -27869;

	t94 = (x841/(x842<(x843-x844)));

	if (t94 != 823816606) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x845 = 0U;
	int16_t x846 = INT16_MAX;
	int64_t x847 = 3746459235LL;
	int32_t x848 = -539582436;

	t95 = (x845/(x846<(x847-x848)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x854 = UINT16_MAX;
	uint32_t x855 = 942U;
	volatile uint32_t x856 = 5380975U;
	volatile int32_t t96 = 37692286;

	t96 = (x853/(x854<(x855-x856)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x857 = INT8_MIN;
	int16_t x859 = INT16_MAX;
	int32_t x860 = INT32_MAX;
	volatile int32_t t97 = -157;

	t97 = (x857/(x858<(x859-x860)));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x861 = -500;
	int16_t x862 = 554;
	static int8_t x864 = INT8_MAX;
	int32_t t98 = 365;

	t98 = (x861/(x862<(x863-x864)));

	if (t98 != -500) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x865 = INT8_MIN;
	uint8_t x866 = 41U;
	int32_t x867 = INT32_MIN;
	uint64_t x868 = 6550515768499779LLU;
	volatile int32_t t99 = -24732;

	t99 = (x865/(x866<(x867-x868)));

	if (t99 != -128) { NG(); } else { ; }
	
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

