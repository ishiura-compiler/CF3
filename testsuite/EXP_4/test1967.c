#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x24 = 21U;
uint64_t x26 = 59990LLU;
uint64_t t2 = UINT64_MAX;
int16_t x48 = -10531;
volatile int64_t t3 = 1973458134652330LL;
volatile int32_t t4 = -4;
int8_t x54 = INT8_MIN;
volatile uint32_t x55 = 187U;
int32_t t5 = -737686335;
volatile uint16_t x68 = UINT16_MAX;
volatile int32_t t8 = -79;
int8_t x77 = -62;
int64_t x86 = INT64_MIN;
int64_t x99 = INT64_MAX;
int8_t x101 = INT8_MIN;
volatile int8_t x115 = -3;
int16_t x125 = INT16_MAX;
int64_t x127 = INT64_MIN;
int8_t x143 = INT8_MIN;
int8_t x144 = INT8_MIN;
int8_t x178 = INT8_MAX;
volatile int32_t t21 = 107800;
uint16_t x207 = UINT16_MAX;
int32_t x220 = INT32_MAX;
int32_t t27 = 1;
int64_t x268 = INT64_MIN;
int8_t x277 = 1;
static uint32_t x278 = 12U;
int8_t x285 = -31;
int16_t x286 = INT16_MIN;
int32_t t30 = -1;
uint16_t x302 = UINT16_MAX;
int32_t x309 = INT32_MIN;
volatile uint32_t x336 = 261534527U;
static int64_t x343 = INT64_MAX;
int16_t x346 = -1;
static int32_t x347 = 15;
volatile uint16_t x349 = UINT16_MAX;
int32_t x351 = -1;
uint32_t x372 = UINT32_MAX;
volatile int32_t t38 = -126;
int16_t x382 = INT16_MIN;
int64_t t39 = 21326LL;
volatile int16_t x387 = 0;
int32_t x394 = -62529472;
int16_t x396 = INT16_MIN;
int8_t x400 = -2;
volatile uint32_t t42 = 7451524U;
uint8_t x417 = 16U;
uint32_t x424 = 2828292U;
int16_t x429 = INT16_MAX;
static int16_t x464 = 4;
static int32_t t49 = -5137459;
uint16_t x466 = 1274U;
uint64_t x467 = 1300174142454452467LLU;
uint16_t x493 = UINT16_MAX;
uint32_t x496 = 31051027U;
int32_t x508 = INT32_MAX;
uint8_t x519 = 7U;
static int32_t t58 = -503;
int16_t x523 = 128;
static volatile int8_t x524 = -1;
int64_t x549 = INT64_MIN;
int32_t x569 = 56459588;
static uint16_t x571 = 23U;
static int32_t t62 = -39768;
volatile int64_t x573 = INT64_MAX;
static int32_t x578 = INT32_MIN;
static uint64_t x590 = 159261287LLU;
volatile int32_t t67 = -33708838;
int64_t x606 = -146979LL;
volatile int32_t t69 = -1;
int16_t x622 = INT16_MIN;
uint64_t x639 = UINT64_MAX;
static int64_t t71 = INT64_MAX;
uint8_t x645 = 1U;
int32_t t73 = -127199;
int8_t x656 = 23;
int64_t x662 = -8042522LL;
volatile int32_t t76 = INT32_MAX;
volatile int16_t x688 = INT16_MIN;
int16_t x694 = 139;
static int64_t x697 = -1LL;
static uint32_t x703 = 1927481U;
volatile int32_t t81 = 49586635;
int32_t x715 = -1;
int64_t x725 = INT64_MIN;
volatile int64_t t84 = INT64_MIN;
uint8_t x741 = 110U;
int16_t x745 = INT16_MIN;
uint8_t x762 = 110U;
int16_t x769 = 10868;
static int8_t x791 = INT8_MIN;
uint32_t x792 = UINT32_MAX;
static uint8_t x797 = 3U;
int64_t x798 = -2369LL;
int8_t x800 = -1;
uint32_t x808 = 7U;
volatile int64_t t94 = INT64_MIN;
static int8_t x812 = INT8_MIN;
int64_t t95 = 99LL;
volatile int16_t x857 = -132;
int8_t x860 = 43;
static uint16_t x864 = 7U;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	volatile uint32_t x2 = 1560911512U;
	static int8_t x3 = INT8_MIN;
	static int16_t x4 = -1;
	int32_t t0 = -86;

	t0 = (x1/(x2<(x3|x4)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = -1233742973720316085LL;
	static int16_t x23 = 33;
	int64_t t1 = INT64_MIN;

	t1 = (x21/(x22<(x23|x24)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = UINT8_MAX;

	t2 = (x25/(x26<(x27|x28)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x45 = -2126433749LL;
	volatile uint32_t x46 = 139113U;
	int32_t x47 = -54669;

	t3 = (x45/(x46<(x47|x48)));

	if (t3 != -2126433749LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x49 = 2;
	volatile int64_t x50 = -1LL;
	static int32_t x51 = INT32_MAX;
	uint16_t x52 = UINT16_MAX;

	t4 = (x49/(x50<(x51|x52)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x53 = -951;
	static volatile int8_t x56 = -1;

	t5 = (x53/(x54<(x55|x56)));

	if (t5 != -951) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x58 = 595622LLU;
	int16_t x59 = INT16_MAX;
	volatile int64_t x60 = -1LL;
	volatile int64_t t6 = INT64_MIN;

	t6 = (x57/(x58<(x59|x60)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x65 = -1;
	volatile uint8_t x66 = UINT8_MAX;
	volatile uint64_t x67 = UINT64_MAX;
	int32_t t7 = 14899;

	t7 = (x65/(x66<(x67|x68)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x69 = INT8_MAX;
	volatile int32_t x70 = 836;
	volatile uint64_t x71 = 51LLU;
	int16_t x72 = INT16_MAX;

	t8 = (x69/(x70<(x71|x72)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x78 = UINT16_MAX;
	uint64_t x79 = UINT64_MAX;
	static int64_t x80 = 2070319892042LL;
	int32_t t9 = 1;

	t9 = (x77/(x78<(x79|x80)));

	if (t9 != -62) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x85 = INT8_MIN;
	int16_t x87 = 14922;
	uint16_t x88 = 505U;
	volatile int32_t t10 = 0;

	t10 = (x85/(x86<(x87|x88)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x89 = INT16_MIN;
	uint64_t x90 = 37017558LLU;
	int16_t x91 = -68;
	int8_t x92 = -52;
	volatile int32_t t11 = -421;

	t11 = (x89/(x90<(x91|x92)));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x97 = INT32_MIN;
	static volatile int16_t x98 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	int32_t t12 = INT32_MIN;

	t12 = (x97/(x98<(x99|x100)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x102 = 1516799156U;
	int8_t x103 = INT8_MIN;
	static uint16_t x104 = UINT16_MAX;
	int32_t t13 = 224969;

	t13 = (x101/(x102<(x103|x104)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x109 = -1;
	uint64_t x110 = 2177677768445757LLU;
	volatile int8_t x111 = -13;
	int32_t x112 = -1;
	int32_t t14 = -10117159;

	t14 = (x109/(x110<(x111|x112)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x113 = -1;
	int32_t x114 = INT32_MIN;
	uint64_t x116 = 6443LLU;
	static volatile int32_t t15 = 0;

	t15 = (x113/(x114<(x115|x116)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x117 = UINT32_MAX;
	static uint64_t x118 = 4LLU;
	int32_t x119 = INT32_MAX;
	int8_t x120 = -3;
	uint32_t t16 = UINT32_MAX;

	t16 = (x117/(x118<(x119|x120)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x126 = 336740033161643676LLU;
	static int16_t x128 = -1;
	int32_t t17 = 355;

	t17 = (x125/(x126<(x127|x128)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x141 = INT64_MIN;
	volatile uint32_t x142 = 1825143513U;
	volatile int64_t t18 = INT64_MIN;

	t18 = (x141/(x142<(x143|x144)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x153 = INT32_MIN;
	static volatile int16_t x154 = INT16_MAX;
	int32_t x155 = INT32_MIN;
	uint64_t x156 = 127892LLU;
	static volatile int32_t t19 = INT32_MIN;

	t19 = (x153/(x154<(x155|x156)));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x169 = -2;
	volatile int8_t x170 = INT8_MIN;
	int8_t x171 = 1;
	int64_t x172 = INT64_MAX;
	int32_t t20 = -1165;

	t20 = (x169/(x170<(x171|x172)));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x177 = 153829249;
	volatile uint32_t x179 = UINT32_MAX;
	uint32_t x180 = 7U;

	t21 = (x177/(x178<(x179|x180)));

	if (t21 != 153829249) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x205 = -1;
	int32_t x206 = INT32_MIN;
	int8_t x208 = 1;
	static int32_t t22 = -7022386;

	t22 = (x205/(x206<(x207|x208)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int8_t x210 = INT8_MIN;
	int8_t x211 = -1;
	uint16_t x212 = 9832U;
	int32_t t23 = -276;

	t23 = (x209/(x210<(x211|x212)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x213 = -29LL;
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MAX;
	uint16_t x216 = 3881U;
	int64_t t24 = -218LL;

	t24 = (x213/(x214<(x215|x216)));

	if (t24 != -29LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x217 = 3U;
	volatile uint8_t x218 = 1U;
	uint16_t x219 = 54U;
	volatile int32_t t25 = -8874;

	t25 = (x217/(x218<(x219|x220)));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x225 = INT32_MIN;
	uint8_t x226 = 12U;
	uint64_t x227 = 316235901031966443LLU;
	volatile int8_t x228 = INT8_MIN;
	int32_t t26 = INT32_MIN;

	t26 = (x225/(x226<(x227|x228)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x261 = -1;
	volatile int16_t x262 = INT16_MIN;
	volatile uint16_t x263 = UINT16_MAX;
	uint8_t x264 = 9U;

	t27 = (x261/(x262<(x263|x264)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x265 = INT8_MAX;
	static uint32_t x266 = 5816806U;
	volatile uint64_t x267 = 0LLU;
	int32_t t28 = -53557345;

	t28 = (x265/(x266<(x267|x268)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x279 = INT32_MAX;
	int32_t x280 = -4373846;
	int32_t t29 = 6019704;

	t29 = (x277/(x278<(x279|x280)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x287 = UINT64_MAX;
	volatile int32_t x288 = -1;

	t30 = (x285/(x286<(x287|x288)));

	if (t30 != -31) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x301 = -7348256LL;
	volatile uint64_t x303 = UINT64_MAX;
	int16_t x304 = -1;
	volatile int64_t t31 = 1173LL;

	t31 = (x301/(x302<(x303|x304)));

	if (t31 != -7348256LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x310 = INT64_MIN;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = INT8_MAX;
	int32_t t32 = INT32_MIN;

	t32 = (x309/(x310<(x311|x312)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x333 = INT64_MAX;
	static int32_t x334 = 584981036;
	int8_t x335 = INT8_MIN;
	int64_t t33 = INT64_MAX;

	t33 = (x333/(x334<(x335|x336)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x341 = 16774455U;
	uint16_t x342 = 5U;
	static uint16_t x344 = 6217U;
	volatile uint32_t t34 = 3626490U;

	t34 = (x341/(x342<(x343|x344)));

	if (t34 != 16774455U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x345 = 10U;
	static uint8_t x348 = 103U;
	volatile int32_t t35 = 58758;

	t35 = (x345/(x346<(x347|x348)));

	if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x350 = 1483U;
	static uint64_t x352 = UINT64_MAX;
	int32_t t36 = -815446;

	t36 = (x349/(x350<(x351|x352)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x357 = -1;
	volatile int64_t x358 = -1LL;
	volatile int32_t x359 = INT32_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t37 = -790355;

	t37 = (x357/(x358<(x359|x360)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x369 = -1;
	uint16_t x370 = UINT16_MAX;
	static uint16_t x371 = 2U;

	t38 = (x369/(x370<(x371|x372)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x381 = -478LL;
	int16_t x383 = -1;
	uint8_t x384 = UINT8_MAX;

	t39 = (x381/(x382<(x383|x384)));

	if (t39 != -478LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = 0;
	uint8_t x388 = 70U;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x385/(x386<(x387|x388)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x393 = 14U;
	static uint32_t x395 = 596U;
	static int32_t t41 = 149;

	t41 = (x393/(x394<(x395|x396)));

	if (t41 != 14) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x397 = 51998U;
	uint64_t x398 = 2LLU;
	volatile int64_t x399 = -1LL;

	t42 = (x397/(x398<(x399|x400)));

	if (t42 != 51998U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x401 = -1;
	int8_t x402 = -18;
	int32_t x403 = INT32_MAX;
	int16_t x404 = INT16_MIN;
	static int32_t t43 = -22;

	t43 = (x401/(x402<(x403|x404)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x413 = INT64_MAX;
	volatile int8_t x414 = INT8_MIN;
	uint16_t x415 = 10566U;
	uint8_t x416 = UINT8_MAX;
	int64_t t44 = INT64_MAX;

	t44 = (x413/(x414<(x415|x416)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x418 = 23U;
	uint16_t x419 = 70U;
	static uint32_t x420 = 60U;
	static int32_t t45 = -428819;

	t45 = (x417/(x418<(x419|x420)));

	if (t45 != 16) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x421 = 29272659U;
	uint16_t x422 = UINT16_MAX;
	int16_t x423 = INT16_MIN;
	uint32_t t46 = 104002748U;

	t46 = (x421/(x422<(x423|x424)));

	if (t46 != 29272659U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x430 = UINT32_MAX;
	int8_t x431 = INT8_MIN;
	static uint64_t x432 = UINT64_MAX;
	int32_t t47 = -30721109;

	t47 = (x429/(x430<(x431|x432)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x457 = INT64_MIN;
	int8_t x458 = -10;
	int64_t x459 = -1LL;
	volatile uint16_t x460 = 44U;
	int64_t t48 = INT64_MIN;

	t48 = (x457/(x458<(x459|x460)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x461 = 15U;
	static uint8_t x462 = UINT8_MAX;
	int64_t x463 = INT64_MAX;

	t49 = (x461/(x462<(x463|x464)));

	if (t49 != 15) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x465 = -1;
	int64_t x468 = 1944054113423218LL;
	volatile int32_t t50 = -16637;

	t50 = (x465/(x466<(x467|x468)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x469 = INT16_MIN;
	uint32_t x470 = 383U;
	int8_t x471 = INT8_MAX;
	int16_t x472 = -15;
	static volatile int32_t t51 = 7858816;

	t51 = (x469/(x470<(x471|x472)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MIN;
	uint8_t x475 = 4U;
	static int32_t x476 = INT32_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = (x473/(x474<(x475|x476)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x481 = 60U;
	int8_t x482 = -20;
	uint64_t x483 = 38075LLU;
	int8_t x484 = -1;
	static int32_t t53 = -897;

	t53 = (x481/(x482<(x483|x484)));

	if (t53 != 60) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MIN;
	volatile int32_t t54 = 190467156;

	t54 = (x493/(x494<(x495|x496)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x497 = UINT8_MAX;
	int16_t x498 = INT16_MIN;
	int16_t x499 = INT16_MIN;
	uint32_t x500 = 397U;
	int32_t t55 = 1936;

	t55 = (x497/(x498<(x499|x500)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x505 = 12U;
	int8_t x506 = 10;
	int16_t x507 = INT16_MAX;
	int32_t t56 = 28921;

	t56 = (x505/(x506<(x507|x508)));

	if (t56 != 12) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x509 = 1729LLU;
	volatile int64_t x510 = -16626275457880840LL;
	int64_t x511 = INT64_MIN;
	int32_t x512 = INT32_MIN;
	uint64_t t57 = 1662627LLU;

	t57 = (x509/(x510<(x511|x512)));

	if (t57 != 1729LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x517 = INT16_MAX;
	int64_t x518 = INT64_MIN;
	static volatile int64_t x520 = INT64_MIN;

	t58 = (x517/(x518<(x519|x520)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x521 = 8940U;
	uint32_t x522 = 1135087811U;
	volatile int32_t t59 = 767736378;

	t59 = (x521/(x522<(x523|x524)));

	if (t59 != 8940) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x550 = -33546LL;
	static volatile uint32_t x551 = UINT32_MAX;
	int8_t x552 = INT8_MIN;
	static int64_t t60 = INT64_MIN;

	t60 = (x549/(x550<(x551|x552)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x561 = INT64_MAX;
	int32_t x562 = -7292;
	static int64_t x563 = -4003028482097163LL;
	int8_t x564 = -1;
	int64_t t61 = INT64_MAX;

	t61 = (x561/(x562<(x563|x564)));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x570 = INT32_MIN;
	int32_t x572 = INT32_MAX;

	t62 = (x569/(x570<(x571|x572)));

	if (t62 != 56459588) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x574 = 35613291U;
	int8_t x575 = INT8_MIN;
	uint8_t x576 = 5U;
	static int64_t t63 = INT64_MAX;

	t63 = (x573/(x574<(x575|x576)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x577 = INT32_MIN;
	int8_t x579 = 2;
	static int16_t x580 = 25;
	volatile int32_t t64 = INT32_MIN;

	t64 = (x577/(x578<(x579|x580)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x585 = INT16_MAX;
	int32_t x586 = 925170174;
	uint32_t x587 = UINT32_MAX;
	static int16_t x588 = 313;
	int32_t t65 = 6038415;

	t65 = (x585/(x586<(x587|x588)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x589 = 1;
	static int16_t x591 = INT16_MIN;
	uint32_t x592 = UINT32_MAX;
	volatile int32_t t66 = -1171;

	t66 = (x589/(x590<(x591|x592)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x593 = 1;
	static int32_t x594 = INT32_MIN;
	int32_t x595 = 101;
	volatile int16_t x596 = INT16_MIN;

	t67 = (x593/(x594<(x595|x596)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x597 = -54753430354LL;
	uint32_t x598 = UINT32_MAX;
	int64_t x599 = 467081284521641153LL;
	static int32_t x600 = 22059;
	volatile int64_t t68 = 20799363237LL;

	t68 = (x597/(x598<(x599|x600)));

	if (t68 != -54753430354LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x605 = 81U;
	static uint16_t x607 = UINT16_MAX;
	uint16_t x608 = UINT16_MAX;

	t69 = (x605/(x606<(x607|x608)));

	if (t69 != 81) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x621 = UINT16_MAX;
	uint32_t x623 = UINT32_MAX;
	int8_t x624 = 24;
	volatile int32_t t70 = -342161;

	t70 = (x621/(x622<(x623|x624)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x637 = INT64_MAX;
	int64_t x638 = INT64_MIN;
	int64_t x640 = 99LL;

	t71 = (x637/(x638<(x639|x640)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x646 = INT8_MIN;
	int32_t x647 = -1;
	uint64_t x648 = UINT64_MAX;
	static int32_t t72 = -121066;

	t72 = (x645/(x646<(x647|x648)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x649 = -476;
	int16_t x650 = INT16_MIN;
	static uint32_t x651 = UINT32_MAX;
	volatile int8_t x652 = -1;

	t73 = (x649/(x650<(x651|x652)));

	if (t73 != -476) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x653 = UINT64_MAX;
	static int16_t x654 = INT16_MIN;
	uint16_t x655 = 1750U;
	uint64_t t74 = UINT64_MAX;

	t74 = (x653/(x654<(x655|x656)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x661 = 731U;
	volatile int8_t x663 = INT8_MIN;
	uint64_t x664 = 4252311312259752984LLU;
	volatile int32_t t75 = -67673450;

	t75 = (x661/(x662<(x663|x664)));

	if (t75 != 731) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x673 = INT32_MAX;
	int8_t x674 = 1;
	int8_t x675 = -1;
	uint32_t x676 = 104193U;

	t76 = (x673/(x674<(x675|x676)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x681 = INT64_MAX;
	static int16_t x682 = INT16_MIN;
	static int16_t x683 = INT16_MAX;
	int64_t x684 = INT64_MAX;
	volatile int64_t t77 = INT64_MAX;

	t77 = (x681/(x682<(x683|x684)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x685 = UINT64_MAX;
	int32_t x686 = -145383;
	uint16_t x687 = UINT16_MAX;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x685/(x686<(x687|x688)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x693 = 14391U;
	int8_t x695 = -3;
	uint32_t x696 = UINT32_MAX;
	volatile int32_t t79 = 18794;

	t79 = (x693/(x694<(x695|x696)));

	if (t79 != 14391) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x698 = 95U;
	uint32_t x699 = UINT32_MAX;
	volatile uint32_t x700 = UINT32_MAX;
	int64_t t80 = 7876LL;

	t80 = (x697/(x698<(x699|x700)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x701 = 824U;
	static int32_t x702 = INT32_MIN;
	static int64_t x704 = INT64_MAX;

	t81 = (x701/(x702<(x703|x704)));

	if (t81 != 824) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x705 = INT16_MIN;
	int16_t x706 = -1;
	uint16_t x707 = UINT16_MAX;
	int16_t x708 = 0;
	static volatile int32_t t82 = -748324;

	t82 = (x705/(x706<(x707|x708)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x713 = UINT32_MAX;
	int64_t x714 = INT64_MIN;
	int32_t x716 = INT32_MIN;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x713/(x714<(x715|x716)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x726 = INT64_MIN;
	uint64_t x727 = 46638831674018838LLU;
	static int64_t x728 = -1LL;

	t84 = (x725/(x726<(x727|x728)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x737 = INT32_MAX;
	uint16_t x738 = 12243U;
	volatile uint32_t x739 = 184796U;
	int8_t x740 = 2;
	static volatile int32_t t85 = INT32_MAX;

	t85 = (x737/(x738<(x739|x740)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x742 = -4108624626965LL;
	int32_t x743 = INT32_MIN;
	static int32_t x744 = -35280360;
	static volatile int32_t t86 = 2;

	t86 = (x741/(x742<(x743|x744)));

	if (t86 != 110) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x746 = INT8_MAX;
	uint32_t x747 = 165001U;
	int16_t x748 = -1;
	volatile int32_t t87 = -2280;

	t87 = (x745/(x746<(x747|x748)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x761 = INT32_MIN;
	uint32_t x763 = 1022210195U;
	uint16_t x764 = 309U;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x761/(x762<(x763|x764)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x765 = 88761754U;
	int32_t x766 = 926;
	volatile uint64_t x767 = UINT64_MAX;
	volatile int64_t x768 = -96306LL;
	uint32_t t89 = 629509U;

	t89 = (x765/(x766<(x767|x768)));

	if (t89 != 88761754U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x770 = INT64_MIN;
	static int32_t x771 = -1;
	int8_t x772 = INT8_MIN;
	volatile int32_t t90 = -23693;

	t90 = (x769/(x770<(x771|x772)));

	if (t90 != 10868) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x785 = 13U;
	int32_t x786 = INT32_MIN;
	uint8_t x787 = UINT8_MAX;
	int16_t x788 = INT16_MIN;
	int32_t t91 = -11299893;

	t91 = (x785/(x786<(x787|x788)));

	if (t91 != 13) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x789 = INT32_MIN;
	int64_t x790 = INT64_MIN;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x789/(x790<(x791|x792)));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x799 = 212U;
	static int32_t t93 = -107915136;

	t93 = (x797/(x798<(x799|x800)));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x805 = INT64_MIN;
	static volatile uint16_t x806 = 1332U;
	int32_t x807 = -3551;

	t94 = (x805/(x806<(x807|x808)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x809 = -3705256441LL;
	int32_t x810 = INT32_MIN;
	uint16_t x811 = UINT16_MAX;

	t95 = (x809/(x810<(x811|x812)));

	if (t95 != -3705256441LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x817 = -1LL;
	uint64_t x818 = 193444LLU;
	uint64_t x819 = UINT64_MAX;
	uint16_t x820 = 526U;
	int64_t t96 = 153846720LL;

	t96 = (x817/(x818<(x819|x820)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x841 = -6;
	static int32_t x842 = INT32_MIN;
	uint64_t x843 = UINT64_MAX;
	static uint32_t x844 = 12935U;
	volatile int32_t t97 = -7;

	t97 = (x841/(x842<(x843|x844)));

	if (t97 != -6) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x858 = -1;
	static int8_t x859 = INT8_MAX;
	static int32_t t98 = 0;

	t98 = (x857/(x858<(x859|x860)));

	if (t98 != -132) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x861 = INT8_MIN;
	volatile int64_t x862 = -15708LL;
	int8_t x863 = -1;
	int32_t t99 = 44;

	t99 = (x861/(x862<(x863|x864)));

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

