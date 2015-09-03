#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -504026;
static uint32_t t4 = 189761272U;
volatile int64_t t5 = -268LL;
static volatile int32_t x102 = INT32_MIN;
static int8_t x113 = 1;
uint32_t x115 = 407800U;
int64_t x118 = INT64_MIN;
int32_t x137 = 2436812;
int32_t x139 = INT32_MIN;
int8_t x141 = INT8_MAX;
int8_t x143 = 4;
static int32_t x144 = -1;
static int64_t x152 = 19317LL;
int16_t x168 = -9358;
static int8_t x169 = INT8_MIN;
int64_t x172 = INT64_MIN;
int32_t t13 = -94228;
int8_t x185 = INT8_MIN;
int32_t x196 = 5973;
int32_t x204 = INT32_MIN;
int8_t x206 = -1;
int64_t x207 = -356082904760167159LL;
volatile uint64_t x209 = UINT64_MAX;
volatile uint64_t t18 = 0LLU;
int32_t x214 = INT32_MIN;
static volatile uint16_t x215 = UINT16_MAX;
int32_t t21 = 171585;
int64_t x240 = INT64_MAX;
volatile int8_t x250 = -60;
int64_t x252 = -12LL;
volatile uint16_t x272 = UINT16_MAX;
int64_t x284 = 1LL;
int8_t x294 = INT8_MIN;
int16_t x295 = 2;
volatile int32_t t34 = -106413455;
int64_t x371 = INT64_MIN;
volatile int32_t t36 = -1166;
uint32_t x377 = 299U;
int8_t x378 = -1;
int32_t x387 = INT32_MIN;
int16_t x398 = -1;
volatile int32_t t41 = 100721;
int64_t x407 = INT64_MIN;
int32_t x408 = -1;
static int32_t t45 = -351;
volatile uint32_t t46 = 0U;
static volatile int32_t x429 = -1;
int64_t x431 = INT64_MIN;
volatile int32_t t47 = 123837378;
int8_t x442 = -1;
int8_t x450 = -1;
static int8_t x458 = INT8_MIN;
int16_t x462 = -1;
int32_t x464 = -1;
int32_t x472 = INT32_MAX;
volatile int16_t x473 = -1;
uint64_t x475 = 100172308695997LLU;
uint32_t x488 = 20947149U;
static volatile int64_t x528 = INT64_MIN;
int8_t x533 = INT8_MAX;
uint32_t x535 = 29U;
int32_t x537 = INT32_MAX;
int64_t x553 = -1LL;
static volatile int32_t x567 = -2808;
static volatile uint64_t x568 = 375LLU;
static int8_t x570 = INT8_MIN;
static int8_t x571 = INT8_MIN;
int8_t x572 = -1;
int16_t x581 = INT16_MIN;
static uint64_t x596 = UINT64_MAX;
volatile uint8_t x601 = 1U;
static int32_t x618 = INT32_MIN;
int16_t x620 = INT16_MIN;
static volatile int64_t t72 = -1LL;
int64_t x629 = INT64_MAX;
int8_t x643 = INT8_MAX;
int16_t x660 = -1;
int64_t x665 = 538080421530LL;
volatile int32_t x686 = -1130864;
int8_t x690 = INT8_MIN;
int8_t x693 = INT8_MAX;
uint16_t x713 = 1U;
static uint32_t t86 = 509027U;
int16_t x759 = -64;
uint32_t x760 = UINT32_MAX;
int8_t x772 = -1;
volatile int32_t x790 = -1;
int64_t t93 = -167LL;
uint32_t x821 = 10U;
int32_t x839 = INT32_MIN;
static int32_t t98 = 315;


void f0(void) {
	int8_t x5 = 0;
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	int64_t x8 = 10775031544LL;
	int32_t t0 = -995;

	t0 = (x5%(x6<(x7<x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x13 = INT8_MAX;
	volatile int32_t x14 = INT32_MIN;
	volatile uint64_t x15 = UINT64_MAX;
	int16_t x16 = 124;

	t1 = (x13%(x14<(x15<x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -1LL;
	volatile int64_t x18 = -1LL;
	int8_t x19 = INT8_MIN;
	int16_t x20 = -1;
	int64_t t2 = -849359838182749812LL;

	t2 = (x17%(x18<(x19<x20)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = -3968;
	int8_t x23 = INT8_MAX;
	int32_t x24 = 53355760;
	int32_t t3 = 0;

	t3 = (x21%(x22<(x23<x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x33 = 1U;
	int8_t x34 = INT8_MIN;
	static uint8_t x35 = UINT8_MAX;
	uint8_t x36 = 1U;

	t4 = (x33%(x34<(x35<x36)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x69 = INT64_MAX;
	volatile int32_t x70 = INT32_MIN;
	static volatile uint16_t x71 = 6U;
	static volatile int32_t x72 = 16;

	t5 = (x69%(x70<(x71<x72)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x101 = -1;
	int64_t x103 = -13747356862544LL;
	int16_t x104 = 3729;
	static int32_t t6 = 23227;

	t6 = (x101%(x102<(x103<x104)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x114 = -781509;
	int16_t x116 = INT16_MIN;
	volatile int32_t t7 = 4914;

	t7 = (x113%(x114<(x115<x116)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x119 = 33123110U;
	int64_t x120 = INT64_MIN;
	volatile int32_t t8 = 54296222;

	t8 = (x117%(x118<(x119<x120)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x138 = -1;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t9 = -62;

	t9 = (x137%(x138<(x139<x140)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x142 = -1;
	volatile int32_t t10 = 14413461;

	t10 = (x141%(x142<(x143<x144)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x149 = -60777314835LL;
	int32_t x150 = -494469;
	int8_t x151 = -37;
	static volatile int64_t t11 = -1054678LL;

	t11 = (x149%(x150<(x151<x152)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x165 = -1;
	static volatile int32_t x166 = -1;
	static volatile uint32_t x167 = 2867U;
	static volatile int32_t t12 = 205747746;

	t12 = (x165%(x166<(x167<x168)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x170 = INT64_MIN;
	static int32_t x171 = -1;

	t13 = (x169%(x170<(x171<x172)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x186 = INT32_MIN;
	static int64_t x187 = INT64_MIN;
	static int64_t x188 = INT64_MIN;
	volatile int32_t t14 = 7548;

	t14 = (x185%(x186<(x187<x188)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x193 = 4075098364080224LLU;
	int8_t x194 = -7;
	static uint16_t x195 = UINT16_MAX;
	uint64_t t15 = 493171364LLU;

	t15 = (x193%(x194<(x195<x196)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x201 = 14830389152993038LL;
	static int64_t x202 = -9846LL;
	int8_t x203 = 0;
	int64_t t16 = -24LL;

	t16 = (x201%(x202<(x203<x204)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x205 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t17 = -16;

	t17 = (x205%(x206<(x207<x208)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MAX;

	t18 = (x209%(x210<(x211<x212)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x213 = INT32_MIN;
	int64_t x216 = 3716421624LL;
	volatile int32_t t19 = -3;

	t19 = (x213%(x214<(x215<x216)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x217 = -1LL;
	int8_t x218 = -4;
	volatile int8_t x219 = INT8_MIN;
	uint8_t x220 = 126U;
	int64_t t20 = 20472317475LL;

	t20 = (x217%(x218<(x219<x220)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x221 = -1;
	int64_t x222 = -1985919920309LL;
	static uint32_t x223 = 504094718U;
	int64_t x224 = INT64_MIN;

	t21 = (x221%(x222<(x223<x224)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x225 = 0U;
	int32_t x226 = INT32_MIN;
	static int32_t x227 = -6;
	uint16_t x228 = 35U;
	int32_t t22 = 1;

	t22 = (x225%(x226<(x227<x228)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x233 = INT16_MAX;
	static volatile int64_t x234 = INT64_MIN;
	int16_t x235 = -1;
	int16_t x236 = INT16_MIN;
	static int32_t t23 = -28465233;

	t23 = (x233%(x234<(x235<x236)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x237 = INT64_MAX;
	int64_t x238 = INT64_MIN;
	static int16_t x239 = 4;
	volatile int64_t t24 = 1LL;

	t24 = (x237%(x238<(x239<x240)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x249 = 0U;
	volatile int16_t x251 = INT16_MIN;
	int32_t t25 = -960784593;

	t25 = (x249%(x250<(x251<x252)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x269 = 19469444U;
	volatile int8_t x270 = INT8_MIN;
	static uint32_t x271 = UINT32_MAX;
	uint32_t t26 = 26159U;

	t26 = (x269%(x270<(x271<x272)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x281 = INT32_MIN;
	static int32_t x282 = INT32_MIN;
	volatile int8_t x283 = -19;
	volatile int32_t t27 = 2361692;

	t27 = (x281%(x282<(x283<x284)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x285 = -1428733305LL;
	int8_t x286 = INT8_MIN;
	int8_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	int64_t t28 = 260LL;

	t28 = (x285%(x286<(x287<x288)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x293 = 2U;
	int8_t x296 = 3;
	volatile int32_t t29 = 147276;

	t29 = (x293%(x294<(x295<x296)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x305 = 1U;
	static int8_t x306 = INT8_MIN;
	int8_t x307 = -4;
	uint8_t x308 = 1U;
	static int32_t t30 = -14764696;

	t30 = (x305%(x306<(x307<x308)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x309 = INT8_MIN;
	static int32_t x310 = 0;
	volatile int64_t x311 = INT64_MIN;
	static uint8_t x312 = 61U;
	static volatile int32_t t31 = 356668;

	t31 = (x309%(x310<(x311<x312)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x329 = 1082U;
	static uint64_t x330 = 0LLU;
	uint16_t x331 = 873U;
	uint32_t x332 = 7684823U;
	static int32_t t32 = 64404;

	t32 = (x329%(x330<(x331<x332)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = -1;
	volatile int8_t x335 = INT8_MIN;
	uint8_t x336 = UINT8_MAX;
	static volatile int32_t t33 = 111062;

	t33 = (x333%(x334<(x335<x336)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x337 = INT8_MIN;
	int64_t x338 = -1LL;
	volatile int64_t x339 = INT64_MIN;
	int16_t x340 = 6;

	t34 = (x337%(x338<(x339<x340)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x345 = -14006LL;
	int8_t x346 = -1;
	volatile int64_t x347 = INT64_MIN;
	uint16_t x348 = 193U;
	static int64_t t35 = 1201239LL;

	t35 = (x345%(x346<(x347<x348)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x369 = INT8_MIN;
	int32_t x370 = -1;
	int64_t x372 = 2257329815LL;

	t36 = (x369%(x370<(x371<x372)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x379 = 1;
	int16_t x380 = -6621;
	volatile uint32_t t37 = 10232773U;

	t37 = (x377%(x378<(x379<x380)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x381 = 3935LLU;
	static int32_t x382 = -69308;
	static volatile int64_t x383 = INT64_MIN;
	int32_t x384 = -8;
	uint64_t t38 = 22LLU;

	t38 = (x381%(x382<(x383<x384)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x385 = UINT64_MAX;
	uint8_t x386 = 0U;
	uint16_t x388 = 8074U;
	uint64_t t39 = 9017018187777847656LLU;

	t39 = (x385%(x386<(x387<x388)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x397 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MAX;
	volatile int64_t t40 = -24504049355903LL;

	t40 = (x397%(x398<(x399<x400)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x401 = 1U;
	int32_t x402 = -579;
	int32_t x403 = INT32_MIN;
	int32_t x404 = INT32_MAX;

	t41 = (x401%(x402<(x403<x404)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x405 = 73434U;
	volatile int64_t x406 = INT64_MIN;
	volatile uint32_t t42 = 1073852490U;

	t42 = (x405%(x406<(x407<x408)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x413 = INT8_MIN;
	int16_t x414 = INT16_MIN;
	volatile int16_t x415 = INT16_MIN;
	int8_t x416 = -1;
	volatile int32_t t43 = -2031876;

	t43 = (x413%(x414<(x415<x416)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = INT64_MIN;
	int8_t x419 = INT8_MIN;
	int8_t x420 = 1;
	static int32_t t44 = -14990875;

	t44 = (x417%(x418<(x419<x420)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x421 = 537636;
	volatile int8_t x422 = -1;
	static int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MIN;

	t45 = (x421%(x422<(x423<x424)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x425 = 8U;
	int8_t x426 = INT8_MIN;
	volatile uint8_t x427 = UINT8_MAX;
	int8_t x428 = INT8_MAX;

	t46 = (x425%(x426<(x427<x428)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x430 = INT64_MIN;
	int32_t x432 = INT32_MIN;

	t47 = (x429%(x430<(x431<x432)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x433 = -394174;
	static int16_t x434 = INT16_MIN;
	int16_t x435 = -1;
	static uint32_t x436 = UINT32_MAX;
	static volatile int32_t t48 = -416590814;

	t48 = (x433%(x434<(x435<x436)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x441 = 636090660549476LLU;
	int16_t x443 = INT16_MIN;
	volatile int32_t x444 = INT32_MIN;
	uint64_t t49 = 210123725187LLU;

	t49 = (x441%(x442<(x443<x444)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x449 = INT32_MAX;
	int64_t x451 = -41702375LL;
	int8_t x452 = 2;
	int32_t t50 = 369916859;

	t50 = (x449%(x450<(x451<x452)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x457 = INT8_MIN;
	int16_t x459 = 507;
	uint8_t x460 = 59U;
	volatile int32_t t51 = -98263;

	t51 = (x457%(x458<(x459<x460)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x461 = -1;
	int64_t x463 = -72630459196LL;
	volatile int32_t t52 = 33426;

	t52 = (x461%(x462<(x463<x464)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x469 = INT64_MIN;
	int8_t x470 = INT8_MIN;
	volatile int64_t x471 = -692268527485637844LL;
	volatile int64_t t53 = -34239412766LL;

	t53 = (x469%(x470<(x471<x472)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x474 = INT64_MIN;
	volatile int32_t x476 = INT32_MIN;
	static volatile int32_t t54 = -119;

	t54 = (x473%(x474<(x475<x476)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x485 = INT8_MIN;
	int64_t x486 = -1LL;
	int32_t x487 = INT32_MIN;
	int32_t t55 = 655;

	t55 = (x485%(x486<(x487<x488)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x501 = INT16_MIN;
	int64_t x502 = INT64_MIN;
	uint32_t x503 = UINT32_MAX;
	int8_t x504 = INT8_MIN;
	volatile int32_t t56 = -208246872;

	t56 = (x501%(x502<(x503<x504)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x505 = INT32_MIN;
	volatile int64_t x506 = INT64_MIN;
	static uint8_t x507 = 76U;
	int64_t x508 = INT64_MAX;
	volatile int32_t t57 = -193881770;

	t57 = (x505%(x506<(x507<x508)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x513 = INT8_MIN;
	int8_t x514 = -3;
	uint8_t x515 = 3U;
	int64_t x516 = INT64_MIN;
	int32_t t58 = -54225363;

	t58 = (x513%(x514<(x515<x516)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x521 = 339;
	int16_t x522 = INT16_MIN;
	int8_t x523 = 5;
	int32_t x524 = -83;
	static volatile int32_t t59 = -9290;

	t59 = (x521%(x522<(x523<x524)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x525 = 7229U;
	static int64_t x526 = INT64_MIN;
	int64_t x527 = 29574445596307326LL;
	volatile int32_t t60 = -11403752;

	t60 = (x525%(x526<(x527<x528)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x534 = INT8_MIN;
	static int8_t x536 = -1;
	int32_t t61 = 153798;

	t61 = (x533%(x534<(x535<x536)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x538 = -59;
	volatile int16_t x539 = INT16_MIN;
	uint32_t x540 = 503U;
	volatile int32_t t62 = 26;

	t62 = (x537%(x538<(x539<x540)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x541 = 2U;
	volatile int8_t x542 = -1;
	int8_t x543 = INT8_MAX;
	int16_t x544 = INT16_MIN;
	static int32_t t63 = -62339;

	t63 = (x541%(x542<(x543<x544)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x554 = -1;
	uint64_t x555 = 1993047519106LLU;
	int64_t x556 = -1LL;
	volatile int64_t t64 = 637926LL;

	t64 = (x553%(x554<(x555<x556)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x565 = 1LLU;
	int64_t x566 = -548506LL;
	uint64_t t65 = 14089426499107030LLU;

	t65 = (x565%(x566<(x567<x568)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x569 = 260LLU;
	uint64_t t66 = 165LLU;

	t66 = (x569%(x570<(x571<x572)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x582 = -69;
	static int64_t x583 = 276628962798554263LL;
	int32_t x584 = INT32_MIN;
	int32_t t67 = 1570984;

	t67 = (x581%(x582<(x583<x584)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x585 = INT32_MIN;
	int32_t x586 = -3396997;
	int64_t x587 = -1LL;
	int16_t x588 = INT16_MIN;
	static int32_t t68 = 138261;

	t68 = (x585%(x586<(x587<x588)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x593 = INT64_MAX;
	int8_t x594 = -1;
	volatile int64_t x595 = INT64_MAX;
	int64_t t69 = -16113277882379666LL;

	t69 = (x593%(x594<(x595<x596)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x597 = INT64_MIN;
	int16_t x598 = INT16_MIN;
	volatile int16_t x599 = INT16_MIN;
	static int32_t x600 = 1;
	volatile int64_t t70 = 925257708991687500LL;

	t70 = (x597%(x598<(x599<x600)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x602 = INT32_MIN;
	volatile int64_t x603 = INT64_MIN;
	static int16_t x604 = -1;
	int32_t t71 = 395457992;

	t71 = (x601%(x602<(x603<x604)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x617 = 0LL;
	int8_t x619 = 3;

	t72 = (x617%(x618<(x619<x620)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x630 = INT32_MIN;
	volatile uint8_t x631 = 13U;
	volatile int16_t x632 = -1;
	int64_t t73 = -7946528419LL;

	t73 = (x629%(x630<(x631<x632)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x641 = INT16_MAX;
	volatile int16_t x642 = -163;
	static int8_t x644 = INT8_MAX;
	volatile int32_t t74 = 2698;

	t74 = (x641%(x642<(x643<x644)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x657 = -1LL;
	int32_t x658 = INT32_MIN;
	volatile uint32_t x659 = 1U;
	volatile int64_t t75 = -798752LL;

	t75 = (x657%(x658<(x659<x660)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x666 = 0U;
	volatile int8_t x667 = 0;
	volatile int64_t x668 = 14904862086813LL;
	static int64_t t76 = 6205840134LL;

	t76 = (x665%(x666<(x667<x668)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x685 = -1LL;
	volatile int8_t x687 = 2;
	int32_t x688 = -1;
	int64_t t77 = -4LL;

	t77 = (x685%(x686<(x687<x688)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x689 = INT32_MAX;
	static uint8_t x691 = UINT8_MAX;
	int16_t x692 = -1;
	int32_t t78 = 80689;

	t78 = (x689%(x690<(x691<x692)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x694 = INT8_MIN;
	int64_t x695 = 14293248885659LL;
	int32_t x696 = 0;
	volatile int32_t t79 = -61;

	t79 = (x693%(x694<(x695<x696)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x697 = INT64_MAX;
	int8_t x698 = -1;
	uint64_t x699 = 412890LLU;
	volatile uint64_t x700 = UINT64_MAX;
	int64_t t80 = 30476150722LL;

	t80 = (x697%(x698<(x699<x700)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x705 = UINT16_MAX;
	volatile int64_t x706 = -7160612190741LL;
	int16_t x707 = 3;
	uint8_t x708 = 99U;
	static volatile int32_t t81 = 506;

	t81 = (x705%(x706<(x707<x708)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x709 = INT8_MIN;
	static int32_t x710 = -1;
	static volatile uint8_t x711 = UINT8_MAX;
	int64_t x712 = -1LL;
	volatile int32_t t82 = -349472;

	t82 = (x709%(x710<(x711<x712)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x714 = -1;
	uint64_t x715 = 107LLU;
	int16_t x716 = -1;
	volatile int32_t t83 = -6982;

	t83 = (x713%(x714<(x715<x716)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x717 = 16587U;
	int32_t x718 = -1;
	uint64_t x719 = 1174308LLU;
	uint16_t x720 = 7497U;
	int32_t t84 = 117;

	t84 = (x717%(x718<(x719<x720)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x737 = 232163U;
	int64_t x738 = -54994593218LL;
	int16_t x739 = INT16_MIN;
	int16_t x740 = 4;
	uint32_t t85 = 5650U;

	t85 = (x737%(x738<(x739<x740)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x741 = 122U;
	volatile int16_t x742 = INT16_MIN;
	uint64_t x743 = UINT64_MAX;
	int32_t x744 = INT32_MIN;

	t86 = (x741%(x742<(x743<x744)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x757 = INT32_MAX;
	int32_t x758 = INT32_MIN;
	static int32_t t87 = -505392;

	t87 = (x757%(x758<(x759<x760)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x769 = UINT64_MAX;
	int8_t x770 = INT8_MIN;
	volatile int64_t x771 = -1LL;
	volatile uint64_t t88 = 446597900247LLU;

	t88 = (x769%(x770<(x771<x772)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x773 = INT8_MIN;
	int64_t x774 = -1LL;
	int8_t x775 = INT8_MIN;
	int32_t x776 = INT32_MAX;
	volatile int32_t t89 = 35034181;

	t89 = (x773%(x774<(x775<x776)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x785 = -19505;
	int64_t x786 = -1LL;
	static int64_t x787 = 481730064LL;
	uint32_t x788 = 3079710U;
	int32_t t90 = 191;

	t90 = (x785%(x786<(x787<x788)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x789 = INT32_MAX;
	uint16_t x791 = UINT16_MAX;
	volatile int64_t x792 = INT64_MIN;
	volatile int32_t t91 = -82;

	t91 = (x789%(x790<(x791<x792)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x793 = INT64_MIN;
	volatile int8_t x794 = -1;
	static volatile int16_t x795 = INT16_MIN;
	uint64_t x796 = UINT64_MAX;
	volatile int64_t t92 = -5368282098333173LL;

	t92 = (x793%(x794<(x795<x796)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x801 = INT64_MAX;
	int8_t x802 = -1;
	uint16_t x803 = 12U;
	int16_t x804 = INT16_MIN;

	t93 = (x801%(x802<(x803<x804)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x805 = 1U;
	int64_t x806 = -1LL;
	volatile uint64_t x807 = 195LLU;
	volatile int8_t x808 = INT8_MIN;
	volatile int32_t t94 = 337579;

	t94 = (x805%(x806<(x807<x808)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x813 = 1030480LLU;
	int8_t x814 = INT8_MIN;
	int16_t x815 = INT16_MIN;
	uint64_t x816 = 14537493047629121LLU;
	static volatile uint64_t t95 = 1345363747LLU;

	t95 = (x813%(x814<(x815<x816)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x817 = 132029554U;
	int8_t x818 = INT8_MIN;
	int64_t x819 = INT64_MIN;
	int32_t x820 = -1;
	uint32_t t96 = 28U;

	t96 = (x817%(x818<(x819<x820)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x822 = INT64_MIN;
	uint32_t x823 = UINT32_MAX;
	int32_t x824 = INT32_MIN;
	uint32_t t97 = 73696U;

	t97 = (x821%(x822<(x823<x824)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x837 = UINT8_MAX;
	int64_t x838 = -10827LL;
	volatile int32_t x840 = -1;

	t98 = (x837%(x838<(x839<x840)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x845 = -1;
	uint32_t x846 = 0U;
	int32_t x847 = -121022615;
	uint8_t x848 = UINT8_MAX;
	int32_t t99 = -376944446;

	t99 = (x845%(x846<(x847<x848)));

	if (t99 != 0) { NG(); } else { ; }
	
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

