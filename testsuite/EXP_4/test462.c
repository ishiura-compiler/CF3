#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 51039LLU;
static int32_t x6 = INT32_MAX;
int32_t t1 = 674;
uint64_t x14 = UINT64_MAX;
volatile uint32_t t3 = 287449U;
int8_t x35 = INT8_MIN;
uint32_t x54 = 1714617U;
volatile uint32_t t5 = UINT32_MAX;
volatile uint64_t t7 = UINT64_MAX;
volatile int16_t x86 = -1;
uint32_t x87 = UINT32_MAX;
static int32_t x91 = 48;
volatile int32_t t10 = 1;
int32_t x122 = -20426075;
static int16_t x139 = -7361;
volatile int64_t x187 = 297395LL;
int32_t x198 = -97225;
static int16_t x262 = 1248;
volatile uint16_t x265 = 3U;
int16_t x267 = 0;
volatile int32_t t22 = -5852077;
int64_t x282 = INT64_MIN;
volatile int32_t x287 = -159292;
int8_t x297 = INT8_MAX;
int8_t x300 = -1;
volatile uint64_t x303 = 2023629LLU;
uint8_t x305 = UINT8_MAX;
uint64_t x321 = 8162271LLU;
int32_t x322 = -385473922;
volatile uint64_t x325 = 322LLU;
volatile int32_t x338 = 739999;
volatile uint16_t x339 = UINT16_MAX;
volatile uint64_t t34 = 1695326046171LLU;
static uint8_t x359 = UINT8_MAX;
int64_t x370 = -1LL;
int8_t x371 = INT8_MAX;
uint8_t x373 = 0U;
int16_t x374 = INT16_MIN;
uint32_t x381 = 45U;
int16_t x384 = -1;
volatile uint32_t t38 = 122U;
int32_t x393 = INT32_MAX;
int64_t t40 = -4027LL;
static volatile uint16_t x415 = UINT16_MAX;
volatile int32_t t41 = 1;
static volatile uint8_t x417 = 81U;
volatile int64_t x418 = -1LL;
int16_t x444 = INT16_MIN;
int32_t x446 = INT32_MIN;
int32_t x448 = INT32_MIN;
static int64_t x462 = INT64_MAX;
uint32_t x463 = 395560144U;
static int16_t x475 = INT16_MIN;
int16_t x476 = INT16_MIN;
volatile int32_t x481 = 48566;
static volatile uint8_t x483 = 51U;
uint32_t x485 = UINT32_MAX;
static volatile int32_t x486 = INT32_MIN;
static uint32_t x501 = 1796829076U;
static uint32_t t52 = 172U;
int64_t t53 = -13820565LL;
int32_t t55 = -22810547;
uint32_t x525 = 1U;
static int8_t x528 = INT8_MIN;
static volatile int8_t x530 = 6;
int16_t x556 = 14618;
volatile uint32_t t58 = 3285988U;
int64_t t62 = -9201690240482515LL;
int32_t t64 = 0;
int16_t x621 = 27;
static uint32_t x623 = 8599U;
int16_t x624 = 42;
static uint32_t x675 = 56U;
static uint16_t x676 = 31488U;
volatile int32_t t70 = 124;
int16_t x682 = INT16_MAX;
int16_t x712 = 4;
uint32_t x713 = 164503U;
static volatile int32_t t75 = 182998;
int16_t x732 = 159;
uint64_t t76 = 3LLU;
static uint16_t x735 = UINT16_MAX;
volatile int32_t t78 = 1;
int16_t x765 = 61;
static int16_t x767 = 0;
int32_t x772 = -1051496572;
int32_t x774 = 66;
uint64_t x782 = UINT64_MAX;
volatile uint32_t t83 = 1822441U;
volatile uint32_t x787 = UINT32_MAX;
volatile uint16_t x789 = 6842U;
uint64_t x828 = UINT64_MAX;
static int32_t t90 = -78054;
uint32_t x857 = 3U;
static int8_t x860 = INT8_MIN;
volatile int8_t x882 = -1;
volatile int16_t x905 = 663;
static uint16_t x906 = 60U;
int8_t x927 = -13;
uint64_t t98 = 348483626873587256LLU;
static uint32_t x931 = 1051870U;
int32_t t99 = -4018716;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int32_t x3 = -1;
	int32_t x4 = INT32_MAX;
	uint64_t t0 = 16724350994437485LLU;

	t0 = (x1>>(x2<=(x3*x4)));

	if (t0 != 51039LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 12008;
	uint32_t x7 = UINT32_MAX;
	volatile int64_t x8 = 1233328LL;

	t1 = (x5>>(x6<=(x7*x8)));

	if (t1 != 6004) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	static int16_t x15 = 2272;
	volatile int64_t x16 = -1LL;
	int32_t t2 = 10508098;

	t2 = (x13>>(x14<=(x15*x16)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 2094U;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	int64_t x20 = 100282139550693LL;

	t3 = (x17>>(x18<=(x19*x20)));

	if (t3 != 2094U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = 18097304296536LLU;
	int32_t x34 = INT32_MAX;
	uint8_t x36 = 26U;
	volatile uint64_t t4 = 112381105284332LLU;

	t4 = (x33>>(x34<=(x35*x36)));

	if (t4 != 18097304296536LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x53 = UINT32_MAX;
	static int8_t x55 = INT8_MIN;
	static uint8_t x56 = 0U;

	t5 = (x53>>(x54<=(x55*x56)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x57 = 69126LLU;
	volatile uint16_t x58 = 2491U;
	int64_t x59 = INT64_MAX;
	static int8_t x60 = -1;
	uint64_t t6 = 0LLU;

	t6 = (x57>>(x58<=(x59*x60)));

	if (t6 != 69126LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x65 = UINT64_MAX;
	uint64_t x66 = 2827848988524LLU;
	static volatile int8_t x67 = -63;
	volatile int8_t x68 = -1;

	t7 = (x65>>(x66<=(x67*x68)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x77 = 0;
	int64_t x78 = INT64_MIN;
	static uint64_t x79 = UINT64_MAX;
	uint8_t x80 = UINT8_MAX;
	int32_t t8 = 17378930;

	t8 = (x77>>(x78<=(x79*x80)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x85 = 0U;
	volatile int64_t x88 = 0LL;
	volatile int32_t t9 = 2;

	t9 = (x85>>(x86<=(x87*x88)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x89 = INT16_MAX;
	uint64_t x90 = UINT64_MAX;
	int8_t x92 = -1;

	t10 = (x89>>(x90<=(x91*x92)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x93 = 533071498;
	int16_t x94 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	int8_t x96 = INT8_MIN;
	static int32_t t11 = -134;

	t11 = (x93>>(x94<=(x95*x96)));

	if (t11 != 533071498) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x109 = INT32_MAX;
	int8_t x110 = -4;
	uint32_t x111 = 636U;
	volatile int32_t x112 = 464;
	int32_t t12 = INT32_MAX;

	t12 = (x109>>(x110<=(x111*x112)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x113 = 13U;
	volatile int16_t x114 = -21;
	volatile int64_t x115 = INT64_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t13 = -593948344;

	t13 = (x113>>(x114<=(x115*x116)));

	if (t13 != 13) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x121 = UINT8_MAX;
	uint32_t x123 = UINT32_MAX;
	uint64_t x124 = UINT64_MAX;
	static int32_t t14 = -2;

	t14 = (x121>>(x122<=(x123*x124)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x137 = 32364090LLU;
	static uint16_t x138 = UINT16_MAX;
	volatile uint32_t x140 = UINT32_MAX;
	uint64_t t15 = 20968711LLU;

	t15 = (x137>>(x138<=(x139*x140)));

	if (t15 != 32364090LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x149 = 13602012U;
	static int32_t x150 = -669199056;
	uint32_t x151 = 31295717U;
	uint32_t x152 = 1U;
	uint32_t t16 = 137304U;

	t16 = (x149>>(x150<=(x151*x152)));

	if (t16 != 13602012U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x169 = 27U;
	volatile uint32_t x170 = 941U;
	volatile int32_t x171 = -1;
	volatile int16_t x172 = INT16_MIN;
	volatile int32_t t17 = -1;

	t17 = (x169>>(x170<=(x171*x172)));

	if (t17 != 13) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x185 = 2U;
	static volatile int8_t x186 = -5;
	volatile int32_t x188 = -7804877;
	int32_t t18 = -204428;

	t18 = (x185>>(x186<=(x187*x188)));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x197 = INT16_MAX;
	int64_t x199 = -1LL;
	volatile int64_t x200 = 82LL;
	volatile int32_t t19 = 7;

	t19 = (x197>>(x198<=(x199*x200)));

	if (t19 != 16383) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x213 = INT16_MAX;
	volatile int8_t x214 = 1;
	uint32_t x215 = 0U;
	int16_t x216 = INT16_MAX;
	volatile int32_t t20 = 12671;

	t20 = (x213>>(x214<=(x215*x216)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x261 = 3U;
	int64_t x263 = 90LL;
	int8_t x264 = -1;
	static int32_t t21 = -10782127;

	t21 = (x261>>(x262<=(x263*x264)));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x266 = -58027395;
	volatile int32_t x268 = -317316;

	t22 = (x265>>(x266<=(x267*x268)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x277 = 73613636051681LLU;
	int16_t x278 = 2991;
	static uint32_t x279 = 0U;
	int8_t x280 = INT8_MIN;
	uint64_t t23 = 394543252LLU;

	t23 = (x277>>(x278<=(x279*x280)));

	if (t23 != 73613636051681LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x281 = 37U;
	int16_t x283 = INT16_MIN;
	int32_t x284 = -11947;
	int32_t t24 = -129;

	t24 = (x281>>(x282<=(x283*x284)));

	if (t24 != 18) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x285 = 0;
	static int8_t x286 = INT8_MIN;
	int64_t x288 = 24287LL;
	volatile int32_t t25 = -61966053;

	t25 = (x285>>(x286<=(x287*x288)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x293 = 312U;
	int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MIN;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t26 = 1728864;

	t26 = (x293>>(x294<=(x295*x296)));

	if (t26 != 312) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x298 = INT32_MAX;
	static int32_t x299 = 2032;
	static volatile int32_t t27 = 712;

	t27 = (x297>>(x298<=(x299*x300)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x301 = 7;
	volatile uint8_t x302 = 50U;
	uint16_t x304 = 28831U;
	int32_t t28 = 189;

	t28 = (x301>>(x302<=(x303*x304)));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x306 = -55;
	uint16_t x307 = 0U;
	volatile int16_t x308 = INT16_MIN;
	int32_t t29 = -1;

	t29 = (x305>>(x306<=(x307*x308)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x309 = 37LLU;
	volatile int16_t x310 = -1;
	static int64_t x311 = -30165347526946620LL;
	static int32_t x312 = -4;
	volatile uint64_t t30 = 30448034212102LLU;

	t30 = (x309>>(x310<=(x311*x312)));

	if (t30 != 18LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x323 = -1LL;
	static uint16_t x324 = 5U;
	volatile uint64_t t31 = 86896LLU;

	t31 = (x321>>(x322<=(x323*x324)));

	if (t31 != 4081135LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	int8_t x328 = INT8_MIN;
	volatile uint64_t t32 = 2LLU;

	t32 = (x325>>(x326<=(x327*x328)));

	if (t32 != 161LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x337 = 0;
	int16_t x340 = INT16_MAX;
	int32_t t33 = -50;

	t33 = (x337>>(x338<=(x339*x340)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x341 = 28954641LLU;
	uint16_t x342 = 18U;
	static volatile int32_t x343 = INT32_MIN;
	static uint32_t x344 = 29455612U;

	t34 = (x341>>(x342<=(x343*x344)));

	if (t34 != 28954641LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x357 = UINT16_MAX;
	volatile uint32_t x358 = 666500565U;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int32_t t35 = -1;

	t35 = (x357>>(x358<=(x359*x360)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x369 = INT32_MAX;
	int8_t x372 = -1;
	static int32_t t36 = INT32_MAX;

	t36 = (x369>>(x370<=(x371*x372)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = INT64_MIN;
	int32_t t37 = -311789;

	t37 = (x373>>(x374<=(x375*x376)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x382 = 0U;
	volatile int32_t x383 = -1;

	t38 = (x381>>(x382<=(x383*x384)));

	if (t38 != 22U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x394 = INT64_MAX;
	volatile int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MAX;
	static volatile int32_t t39 = INT32_MAX;

	t39 = (x393>>(x394<=(x395*x396)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x405 = 1940731397724LL;
	int64_t x406 = INT64_MIN;
	int32_t x407 = INT32_MAX;
	volatile uint32_t x408 = 332409885U;

	t40 = (x405>>(x406<=(x407*x408)));

	if (t40 != 970365698862LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x413 = 81U;
	static int64_t x414 = 183633494169LL;
	volatile int16_t x416 = -1;

	t41 = (x413>>(x414<=(x415*x416)));

	if (t41 != 81) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x419 = 348115229LLU;
	int16_t x420 = INT16_MAX;
	static int32_t t42 = 3;

	t42 = (x417>>(x418<=(x419*x420)));

	if (t42 != 81) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x425 = 818;
	int32_t x426 = 722263;
	int64_t x427 = 7LL;
	int16_t x428 = INT16_MIN;
	int32_t t43 = 486982808;

	t43 = (x425>>(x426<=(x427*x428)));

	if (t43 != 818) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x429 = INT32_MAX;
	volatile int16_t x430 = -1;
	static uint64_t x431 = 78962481606171788LLU;
	int32_t x432 = INT32_MIN;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x429>>(x430<=(x431*x432)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x441 = INT32_MAX;
	int16_t x442 = -1;
	uint64_t x443 = UINT64_MAX;
	int32_t t45 = INT32_MAX;

	t45 = (x441>>(x442<=(x443*x444)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x445 = 48;
	static uint64_t x447 = UINT64_MAX;
	static int32_t t46 = 0;

	t46 = (x445>>(x446<=(x447*x448)));

	if (t46 != 48) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x461 = 39LL;
	uint8_t x464 = UINT8_MAX;
	int64_t t47 = -184228747161LL;

	t47 = (x461>>(x462<=(x463*x464)));

	if (t47 != 39LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x465 = 2133;
	int64_t x466 = -76885378410694665LL;
	static int8_t x467 = INT8_MAX;
	uint16_t x468 = UINT16_MAX;
	int32_t t48 = 3587386;

	t48 = (x465>>(x466<=(x467*x468)));

	if (t48 != 1066) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x473 = 0;
	static uint32_t x474 = 32U;
	volatile int32_t t49 = 6216;

	t49 = (x473>>(x474<=(x475*x476)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x482 = INT16_MAX;
	static uint16_t x484 = 7582U;
	int32_t t50 = 249859;

	t50 = (x481>>(x482<=(x483*x484)));

	if (t50 != 24283) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x487 = 4924996757904LL;
	static int32_t x488 = -1;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x485>>(x486<=(x487*x488)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x502 = 52;
	volatile int16_t x503 = INT16_MIN;
	volatile int16_t x504 = -1;

	t52 = (x501>>(x502<=(x503*x504)));

	if (t52 != 898414538U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x513 = INT64_MAX;
	uint16_t x514 = 0U;
	volatile int16_t x515 = -1;
	volatile int32_t x516 = -1;

	t53 = (x513>>(x514<=(x515*x516)));

	if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x517 = INT16_MAX;
	uint16_t x518 = 3U;
	int32_t x519 = -5;
	int8_t x520 = -1;
	int32_t t54 = -162400;

	t54 = (x517>>(x518<=(x519*x520)));

	if (t54 != 16383) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x521 = 24;
	uint16_t x522 = 228U;
	static uint32_t x523 = 2563U;
	int8_t x524 = INT8_MIN;

	t55 = (x521>>(x522<=(x523*x524)));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x526 = INT32_MAX;
	uint64_t x527 = 2030840627213317274LLU;
	uint32_t t56 = 16304U;

	t56 = (x525>>(x526<=(x527*x528)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x529 = 34;
	static int16_t x531 = 2;
	int16_t x532 = -1;
	int32_t t57 = -404607;

	t57 = (x529>>(x530<=(x531*x532)));

	if (t57 != 34) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x553 = UINT32_MAX;
	volatile int32_t x554 = INT32_MIN;
	int64_t x555 = 108220826509LL;

	t58 = (x553>>(x554<=(x555*x556)));

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x557 = UINT32_MAX;
	int64_t x558 = -27108270LL;
	int8_t x559 = -1;
	uint16_t x560 = UINT16_MAX;
	volatile uint32_t t59 = 794651U;

	t59 = (x557>>(x558<=(x559*x560)));

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x561 = INT32_MAX;
	static int32_t x562 = INT32_MIN;
	uint32_t x563 = UINT32_MAX;
	uint8_t x564 = UINT8_MAX;
	int32_t t60 = -61187;

	t60 = (x561>>(x562<=(x563*x564)));

	if (t60 != 1073741823) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x585 = 14522356109300LLU;
	uint32_t x586 = 15298U;
	int8_t x587 = -1;
	uint64_t x588 = UINT64_MAX;
	volatile uint64_t t61 = 2095LLU;

	t61 = (x585>>(x586<=(x587*x588)));

	if (t61 != 14522356109300LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x589 = INT64_MAX;
	static int64_t x590 = INT64_MIN;
	uint32_t x591 = UINT32_MAX;
	uint16_t x592 = 5U;

	t62 = (x589>>(x590<=(x591*x592)));

	if (t62 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x597 = INT64_MAX;
	int32_t x598 = -1;
	uint32_t x599 = 0U;
	uint16_t x600 = UINT16_MAX;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x597>>(x598<=(x599*x600)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x609 = INT16_MAX;
	volatile uint32_t x610 = 41197U;
	int32_t x611 = 2;
	uint32_t x612 = UINT32_MAX;

	t64 = (x609>>(x610<=(x611*x612)));

	if (t64 != 16383) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x622 = INT64_MIN;
	volatile int32_t t65 = 10;

	t65 = (x621>>(x622<=(x623*x624)));

	if (t65 != 13) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x625 = UINT16_MAX;
	int8_t x626 = INT8_MAX;
	static int32_t x627 = INT32_MAX;
	static int64_t x628 = 84LL;
	volatile int32_t t66 = -12171;

	t66 = (x625>>(x626<=(x627*x628)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x637 = 5247769U;
	static int32_t x638 = 257;
	int64_t x639 = INT64_MIN;
	uint64_t x640 = 1390337912886LLU;
	static volatile uint32_t t67 = 3U;

	t67 = (x637>>(x638<=(x639*x640)));

	if (t67 != 5247769U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x661 = 903899;
	volatile int64_t x662 = INT64_MAX;
	volatile uint32_t x663 = 312U;
	static int16_t x664 = -1;
	volatile int32_t t68 = 12427301;

	t68 = (x661>>(x662<=(x663*x664)));

	if (t68 != 903899) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x669 = UINT32_MAX;
	int8_t x670 = -20;
	uint64_t x671 = 309LLU;
	int32_t x672 = INT32_MIN;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = (x669>>(x670<=(x671*x672)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x673 = INT16_MAX;
	int16_t x674 = INT16_MAX;

	t70 = (x673>>(x674<=(x675*x676)));

	if (t70 != 16383) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x681 = UINT32_MAX;
	uint16_t x683 = 9U;
	volatile int64_t x684 = 33919LL;
	volatile uint32_t t71 = 41515U;

	t71 = (x681>>(x682<=(x683*x684)));

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x693 = INT16_MAX;
	int8_t x694 = -7;
	int8_t x695 = -1;
	volatile uint8_t x696 = UINT8_MAX;
	volatile int32_t t72 = -1598914;

	t72 = (x693>>(x694<=(x695*x696)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x709 = INT32_MAX;
	uint32_t x710 = 376997407U;
	int32_t x711 = -1;
	static int32_t t73 = 504;

	t73 = (x709>>(x710<=(x711*x712)));

	if (t73 != 1073741823) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x714 = 2U;
	volatile uint64_t x715 = 6392280975313LLU;
	int16_t x716 = INT16_MAX;
	uint32_t t74 = 101U;

	t74 = (x713>>(x714<=(x715*x716)));

	if (t74 != 82251U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x725 = INT16_MAX;
	uint8_t x726 = 0U;
	int16_t x727 = -1;
	uint16_t x728 = 19U;

	t75 = (x725>>(x726<=(x727*x728)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x729 = 195623482468LLU;
	uint64_t x730 = 840978173454LLU;
	static uint16_t x731 = UINT16_MAX;

	t76 = (x729>>(x730<=(x731*x732)));

	if (t76 != 195623482468LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x733 = 1;
	int32_t x734 = INT32_MAX;
	int16_t x736 = INT16_MAX;
	int32_t t77 = -59057558;

	t77 = (x733>>(x734<=(x735*x736)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x737 = 1;
	volatile uint16_t x738 = 1U;
	uint64_t x739 = 157199242885LLU;
	volatile int64_t x740 = -111LL;

	t78 = (x737>>(x738<=(x739*x740)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x766 = INT16_MIN;
	volatile uint8_t x768 = 105U;
	int32_t t79 = 948171649;

	t79 = (x765>>(x766<=(x767*x768)));

	if (t79 != 30) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x769 = 96976364888991496LLU;
	volatile uint8_t x770 = 16U;
	uint32_t x771 = UINT32_MAX;
	uint64_t t80 = 122560413525422LLU;

	t80 = (x769>>(x770<=(x771*x772)));

	if (t80 != 48488182444495748LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x773 = 1860LLU;
	int8_t x775 = -9;
	static int16_t x776 = -107;
	volatile uint64_t t81 = 381804360357526LLU;

	t81 = (x773>>(x774<=(x775*x776)));

	if (t81 != 930LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x777 = UINT64_MAX;
	int64_t x778 = 7LL;
	int16_t x779 = -6037;
	int8_t x780 = -1;
	static uint64_t t82 = 800LLU;

	t82 = (x777>>(x778<=(x779*x780)));

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x781 = 3U;
	static uint16_t x783 = 569U;
	static int16_t x784 = -2;

	t83 = (x781>>(x782<=(x783*x784)));

	if (t83 != 3U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x785 = 10426U;
	volatile int16_t x786 = -3;
	uint16_t x788 = 19U;
	uint32_t t84 = 11U;

	t84 = (x785>>(x786<=(x787*x788)));

	if (t84 != 10426U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x790 = UINT16_MAX;
	int32_t x791 = 102397;
	volatile uint32_t x792 = UINT32_MAX;
	int32_t t85 = 31560823;

	t85 = (x789>>(x790<=(x791*x792)));

	if (t85 != 3421) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x805 = 1;
	int16_t x806 = INT16_MIN;
	uint8_t x807 = 61U;
	int16_t x808 = -35;
	int32_t t86 = -19858;

	t86 = (x805>>(x806<=(x807*x808)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x817 = 3U;
	static int8_t x818 = -29;
	static int32_t x819 = -615275948;
	uint32_t x820 = UINT32_MAX;
	volatile int32_t t87 = 1;

	t87 = (x817>>(x818<=(x819*x820)));

	if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x825 = 214LL;
	int16_t x826 = 1;
	static int64_t x827 = -1LL;
	int64_t t88 = -8332588925LL;

	t88 = (x825>>(x826<=(x827*x828)));

	if (t88 != 107LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x829 = 7782064LLU;
	volatile int8_t x830 = 7;
	volatile uint32_t x831 = 39U;
	int8_t x832 = INT8_MIN;
	uint64_t t89 = 2057648470621676012LLU;

	t89 = (x829>>(x830<=(x831*x832)));

	if (t89 != 3891032LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x837 = 3U;
	static uint32_t x838 = 5U;
	int16_t x839 = INT16_MAX;
	static uint8_t x840 = 19U;

	t90 = (x837>>(x838<=(x839*x840)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x841 = INT64_MAX;
	int8_t x842 = INT8_MIN;
	volatile int32_t x843 = 5705024;
	volatile int32_t x844 = -1;
	static int64_t t91 = INT64_MAX;

	t91 = (x841>>(x842<=(x843*x844)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x858 = 3110840LLU;
	int64_t x859 = -169079305LL;
	volatile uint32_t t92 = 31U;

	t92 = (x857>>(x858<=(x859*x860)));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x861 = 1362U;
	int16_t x862 = INT16_MAX;
	int16_t x863 = -1225;
	static uint32_t x864 = 504U;
	volatile uint32_t t93 = 12320556U;

	t93 = (x861>>(x862<=(x863*x864)));

	if (t93 != 681U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x881 = UINT8_MAX;
	static int32_t x883 = -1;
	int64_t x884 = -2537712766178100822LL;
	int32_t t94 = -518;

	t94 = (x881>>(x882<=(x883*x884)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x889 = 0;
	int32_t x890 = -1;
	volatile int16_t x891 = INT16_MIN;
	uint8_t x892 = 2U;
	volatile int32_t t95 = 7744;

	t95 = (x889>>(x890<=(x891*x892)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x907 = 61U;
	uint64_t x908 = 21370726962343008LLU;
	static int32_t t96 = 89;

	t96 = (x905>>(x906<=(x907*x908)));

	if (t96 != 331) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x913 = 0U;
	int64_t x914 = 0LL;
	static int8_t x915 = 17;
	uint64_t x916 = 8206000LLU;
	volatile int32_t t97 = 1910;

	t97 = (x913>>(x914<=(x915*x916)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x925 = UINT64_MAX;
	volatile uint8_t x926 = 127U;
	static uint32_t x928 = 18473U;

	t98 = (x925>>(x926<=(x927*x928)));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x929 = UINT8_MAX;
	int16_t x930 = -3721;
	int8_t x932 = -1;

	t99 = (x929>>(x930<=(x931*x932)));

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

