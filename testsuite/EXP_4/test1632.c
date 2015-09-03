#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MAX;
static int32_t t1 = 3207;
uint8_t x25 = 2U;
int8_t x44 = -10;
int16_t x45 = INT16_MAX;
volatile int32_t t6 = -7719;
static uint32_t x66 = 948U;
int64_t x90 = 7254LL;
static int8_t x92 = 27;
int64_t x110 = INT64_MIN;
uint8_t x118 = 81U;
volatile uint64_t x126 = 17104980837632932LLU;
static int64_t x128 = -1LL;
int32_t x157 = INT32_MAX;
static int32_t x158 = INT32_MIN;
int32_t x176 = INT32_MIN;
int8_t x179 = -8;
int8_t x216 = 1;
static uint64_t x233 = UINT64_MAX;
int16_t x234 = INT16_MIN;
volatile uint64_t x235 = 103LLU;
volatile uint64_t x236 = 49174875709910079LLU;
int16_t x256 = INT16_MIN;
int32_t t30 = -267064347;
static int32_t x279 = INT32_MIN;
uint8_t x280 = UINT8_MAX;
int8_t x287 = INT8_MAX;
volatile int32_t x288 = INT32_MIN;
int16_t x295 = INT16_MIN;
uint32_t x296 = UINT32_MAX;
uint32_t x310 = 3386959U;
int64_t x311 = -1LL;
volatile uint8_t x316 = 3U;
int32_t t35 = 716176;
static volatile int32_t t37 = -34630;
volatile uint16_t x341 = 1413U;
static int32_t x342 = INT32_MAX;
static uint64_t t40 = 43852448180825668LLU;
volatile int8_t x350 = INT8_MAX;
volatile uint32_t x368 = 2019062U;
volatile uint64_t t44 = 7LLU;
static int32_t x369 = INT32_MAX;
volatile int32_t t45 = 10746;
volatile uint64_t x381 = 741158952LLU;
int64_t x382 = -1LL;
static int8_t x395 = INT8_MIN;
int64_t x414 = -15463LL;
int64_t x416 = INT64_MIN;
int16_t x430 = 8;
static volatile uint64_t t51 = 723767LLU;
int64_t x457 = 56LL;
int32_t x459 = 1;
int16_t x485 = 0;
volatile int32_t t55 = 22;
uint16_t x498 = 2015U;
int32_t t57 = -209966582;
uint32_t t59 = UINT32_MAX;
int8_t x519 = -1;
static volatile int64_t x523 = -50154870LL;
uint32_t x524 = UINT32_MAX;
static int8_t x532 = INT8_MAX;
uint16_t x533 = 7747U;
int32_t x536 = 25;
int32_t x543 = -259;
uint16_t x544 = UINT16_MAX;
int32_t x550 = -120614605;
uint8_t x551 = UINT8_MAX;
int64_t x555 = 7446396033405LL;
int8_t x564 = 20;
static uint64_t t69 = 7931811475LLU;
static int8_t x571 = 7;
int32_t t73 = 101385187;
uint64_t x597 = 34LLU;
int16_t x616 = INT16_MIN;
volatile uint32_t x617 = 8U;
volatile uint64_t x624 = UINT64_MAX;
static volatile uint64_t t78 = 487962357LLU;
volatile int32_t x627 = INT32_MAX;
int32_t x629 = 1995229;
int8_t x631 = INT8_MIN;
int16_t x636 = INT16_MAX;
static volatile int8_t x642 = -7;
int32_t x643 = -1;
uint64_t x646 = UINT64_MAX;
static int32_t t83 = 2;
uint64_t x649 = 14225592615531604LLU;
int32_t x670 = 1032529;
uint16_t x671 = 0U;
static uint16_t x685 = 3888U;
int16_t x686 = 5273;
static int32_t x687 = -6;
int32_t x691 = INT32_MIN;
volatile int32_t t88 = -182671655;
uint64_t x697 = 9145986403945LLU;
uint32_t x698 = 93546842U;
uint64_t t89 = 16170783LLU;
int32_t x704 = INT32_MIN;
volatile int8_t x712 = INT8_MAX;
int32_t t93 = -765;
uint16_t x725 = 3U;
int64_t x743 = INT64_MIN;
int64_t x744 = -1LL;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = -1;
	int32_t t0 = -5519;

	t0 = (x1>>(x2<(x3<=x4)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	static int8_t x6 = 0;
	static int32_t x7 = INT32_MIN;

	t1 = (x5>>(x6<(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	int32_t x14 = -1;
	volatile int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MAX;
	int64_t t2 = -7LL;

	t2 = (x13>>(x14<(x15<=x16)));

	if (t2 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	int32_t x28 = -794167899;
	volatile int32_t t3 = -1400052;

	t3 = (x25>>(x26<(x27<=x28)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int64_t x30 = INT64_MIN;
	static uint64_t x31 = UINT64_MAX;
	uint16_t x32 = 0U;
	static uint32_t t4 = 134527291U;

	t4 = (x29>>(x30<(x31<=x32)));

	if (t4 != 2147483647U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x41 = 129375LLU;
	uint32_t x42 = 917772U;
	int8_t x43 = -3;
	uint64_t t5 = 1181579381379991LLU;

	t5 = (x41>>(x42<(x43<=x44)));

	if (t5 != 129375LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x46 = 808LLU;
	uint8_t x47 = UINT8_MAX;
	volatile int64_t x48 = 1369624659762603119LL;

	t6 = (x45>>(x46<(x47<=x48)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = INT8_MAX;
	int32_t x58 = INT32_MAX;
	int16_t x59 = INT16_MAX;
	volatile int32_t x60 = INT32_MAX;
	volatile int32_t t7 = -1;

	t7 = (x57>>(x58<(x59<=x60)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x65 = UINT16_MAX;
	int8_t x67 = -1;
	uint8_t x68 = 96U;
	int32_t t8 = -380;

	t8 = (x65>>(x66<(x67<=x68)));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x77 = 96U;
	static volatile uint32_t x78 = 54U;
	volatile int64_t x79 = -1LL;
	int32_t x80 = 8;
	static volatile int32_t t9 = -56904;

	t9 = (x77>>(x78<(x79<=x80)));

	if (t9 != 96) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x89 = 2;
	int32_t x91 = INT32_MAX;
	volatile int32_t t10 = -17;

	t10 = (x89>>(x90<(x91<=x92)));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x93 = 336U;
	static int16_t x94 = 59;
	int8_t x95 = -1;
	static int64_t x96 = 1852711851LL;
	volatile int32_t t11 = -1;

	t11 = (x93>>(x94<(x95<=x96)));

	if (t11 != 336) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x109 = 2;
	int64_t x111 = 655854359354LL;
	volatile int8_t x112 = -1;
	volatile int32_t t12 = 5917753;

	t12 = (x109>>(x110<(x111<=x112)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x117 = 7757U;
	int32_t x119 = INT32_MIN;
	int64_t x120 = -1LL;
	volatile uint32_t t13 = 121U;

	t13 = (x117>>(x118<(x119<=x120)));

	if (t13 != 7757U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x125 = 101689U;
	volatile int16_t x127 = -884;
	uint32_t t14 = 361820285U;

	t14 = (x125>>(x126<(x127<=x128)));

	if (t14 != 101689U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x129 = 30794453615LLU;
	uint16_t x130 = 12U;
	int8_t x131 = -1;
	int8_t x132 = INT8_MAX;
	volatile uint64_t t15 = 8806728422246LLU;

	t15 = (x129>>(x130<(x131<=x132)));

	if (t15 != 30794453615LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x133 = 12737;
	static uint16_t x134 = 3179U;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -1;
	volatile int32_t t16 = 575666991;

	t16 = (x133>>(x134<(x135<=x136)));

	if (t16 != 12737) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x159 = -1LL;
	volatile int64_t x160 = INT64_MIN;
	int32_t t17 = -13681;

	t17 = (x157>>(x158<(x159<=x160)));

	if (t17 != 1073741823) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x161 = 11106U;
	int32_t x162 = -61;
	uint32_t x163 = 0U;
	uint32_t x164 = 0U;
	volatile int32_t t18 = 0;

	t18 = (x161>>(x162<(x163<=x164)));

	if (t18 != 5553) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x169 = 2;
	int16_t x170 = INT16_MIN;
	static int32_t x171 = 572490670;
	int16_t x172 = 15917;
	int32_t t19 = -30;

	t19 = (x169>>(x170<(x171<=x172)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x173 = 11661935290121LLU;
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MAX;
	uint64_t t20 = 858936295LLU;

	t20 = (x173>>(x174<(x175<=x176)));

	if (t20 != 11661935290121LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x177 = 51;
	static int8_t x178 = -1;
	int32_t x180 = INT32_MIN;
	volatile int32_t t21 = -1;

	t21 = (x177>>(x178<(x179<=x180)));

	if (t21 != 25) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x185 = 791U;
	static volatile uint32_t x186 = 939U;
	int8_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile uint32_t t22 = 27U;

	t22 = (x185>>(x186<(x187<=x188)));

	if (t22 != 791U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x197 = UINT64_MAX;
	static uint16_t x198 = 39U;
	int16_t x199 = INT16_MIN;
	volatile int8_t x200 = -1;
	static uint64_t t23 = UINT64_MAX;

	t23 = (x197>>(x198<(x199<=x200)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x201 = 5512U;
	int8_t x202 = -1;
	uint16_t x203 = 30349U;
	volatile uint64_t x204 = 2579954844915LLU;
	int32_t t24 = 1009;

	t24 = (x201>>(x202<(x203<=x204)));

	if (t24 != 2756) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x213 = INT8_MAX;
	int64_t x214 = -1LL;
	int64_t x215 = INT64_MAX;
	volatile int32_t t25 = 1;

	t25 = (x213>>(x214<(x215<=x216)));

	if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t t26 = 12391495LLU;

	t26 = (x233>>(x234<(x235<=x236)));

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x245 = 28;
	int8_t x246 = INT8_MIN;
	int16_t x247 = -18;
	volatile int8_t x248 = INT8_MAX;
	int32_t t27 = -735;

	t27 = (x245>>(x246<(x247<=x248)));

	if (t27 != 14) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x253 = 34U;
	int64_t x254 = -1756014115LL;
	int8_t x255 = INT8_MIN;
	volatile int32_t t28 = -5;

	t28 = (x253>>(x254<(x255<=x256)));

	if (t28 != 17) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x261 = INT16_MAX;
	uint16_t x262 = 29802U;
	uint16_t x263 = UINT16_MAX;
	static int64_t x264 = INT64_MAX;
	volatile int32_t t29 = -961990;

	t29 = (x261>>(x262<(x263<=x264)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x265 = 5489;
	int32_t x266 = 203782;
	uint64_t x267 = 11470201266036564LLU;
	int64_t x268 = INT64_MIN;

	t30 = (x265>>(x266<(x267<=x268)));

	if (t30 != 5489) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x277 = 9136182329LLU;
	int32_t x278 = INT32_MIN;
	static uint64_t t31 = 20186819757LLU;

	t31 = (x277>>(x278<(x279<=x280)));

	if (t31 != 4568091164LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x285 = UINT32_MAX;
	uint64_t x286 = 1236182002892243LLU;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x285>>(x286<(x287<=x288)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x293 = 3U;
	static int8_t x294 = -1;
	volatile uint32_t t33 = 4139U;

	t33 = (x293>>(x294<(x295<=x296)));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x309 = 3095498690992384357LL;
	int32_t x312 = 31;
	int64_t t34 = -14LL;

	t34 = (x309>>(x310<(x311<=x312)));

	if (t34 != 3095498690992384357LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x313 = INT16_MAX;
	static uint32_t x314 = 931U;
	static int16_t x315 = -11551;

	t35 = (x313>>(x314<(x315<=x316)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x321 = 0U;
	static int8_t x322 = INT8_MAX;
	int16_t x323 = INT16_MIN;
	static uint64_t x324 = 243790674038009034LLU;
	int32_t t36 = -94775750;

	t36 = (x321>>(x322<(x323<=x324)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int64_t x326 = -3LL;
	volatile int64_t x327 = -116656651599LL;
	int8_t x328 = INT8_MAX;

	t37 = (x325>>(x326<(x327<=x328)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x337 = 5U;
	uint16_t x338 = 489U;
	int16_t x339 = -8874;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t38 = 0;

	t38 = (x337>>(x338<(x339<=x340)));

	if (t38 != 5) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x343 = 0U;
	int64_t x344 = INT64_MAX;
	volatile int32_t t39 = 15;

	t39 = (x341>>(x342<(x343<=x344)));

	if (t39 != 1413) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x345 = 101393LLU;
	static uint32_t x346 = 55394266U;
	static volatile uint64_t x347 = 55554466797LLU;
	static int16_t x348 = INT16_MAX;

	t40 = (x345>>(x346<(x347<=x348)));

	if (t40 != 101393LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x349 = INT32_MAX;
	volatile int16_t x351 = INT16_MAX;
	int16_t x352 = -244;
	static volatile int32_t t41 = INT32_MAX;

	t41 = (x349>>(x350<(x351<=x352)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x357 = 1373U;
	static int8_t x358 = INT8_MIN;
	static int64_t x359 = INT64_MAX;
	int16_t x360 = -1;
	volatile int32_t t42 = 1;

	t42 = (x357>>(x358<(x359<=x360)));

	if (t42 != 686) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = UINT64_MAX;
	static int16_t x364 = INT16_MIN;
	int32_t t43 = 4391;

	t43 = (x361>>(x362<(x363<=x364)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x365 = 57536LLU;
	uint64_t x366 = 91417889497LLU;
	volatile uint16_t x367 = UINT16_MAX;

	t44 = (x365>>(x366<(x367<=x368)));

	if (t44 != 57536LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x370 = INT64_MIN;
	static uint32_t x371 = 4U;
	uint8_t x372 = UINT8_MAX;

	t45 = (x369>>(x370<(x371<=x372)));

	if (t45 != 1073741823) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x377 = UINT64_MAX;
	uint32_t x378 = UINT32_MAX;
	int16_t x379 = INT16_MAX;
	uint32_t x380 = 2017816U;
	uint64_t t46 = UINT64_MAX;

	t46 = (x377>>(x378<(x379<=x380)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	static uint64_t t47 = 25994LLU;

	t47 = (x381>>(x382<(x383<=x384)));

	if (t47 != 370579476LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x393 = 505U;
	uint8_t x394 = UINT8_MAX;
	static int64_t x396 = INT64_MIN;
	uint32_t t48 = 0U;

	t48 = (x393>>(x394<(x395<=x396)));

	if (t48 != 505U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x413 = UINT8_MAX;
	int32_t x415 = 189;
	volatile int32_t t49 = 4186852;

	t49 = (x413>>(x414<(x415<=x416)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x417 = INT32_MAX;
	int8_t x418 = -1;
	int32_t x419 = -2606553;
	uint8_t x420 = UINT8_MAX;
	static int32_t t50 = 1245720;

	t50 = (x417>>(x418<(x419<=x420)));

	if (t50 != 1073741823) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x429 = 4450LLU;
	volatile int32_t x431 = INT32_MIN;
	uint8_t x432 = 1U;

	t51 = (x429>>(x430<(x431<=x432)));

	if (t51 != 4450LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x433 = 13;
	int16_t x434 = -87;
	volatile uint32_t x435 = 2014327681U;
	int8_t x436 = INT8_MIN;
	int32_t t52 = 1376;

	t52 = (x433>>(x434<(x435<=x436)));

	if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x458 = INT32_MIN;
	static int64_t x460 = INT64_MIN;
	int64_t t53 = -373984545583589392LL;

	t53 = (x457>>(x458<(x459<=x460)));

	if (t53 != 28LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x465 = UINT16_MAX;
	int64_t x466 = 96LL;
	uint8_t x467 = 75U;
	int16_t x468 = 0;
	int32_t t54 = 1998;

	t54 = (x465>>(x466<(x467<=x468)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x486 = INT32_MIN;
	int64_t x487 = -3366677499LL;
	uint8_t x488 = UINT8_MAX;

	t55 = (x485>>(x486<(x487<=x488)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x489 = 13069U;
	uint16_t x490 = 52U;
	int32_t x491 = INT32_MAX;
	int16_t x492 = -7570;
	volatile int32_t t56 = 123565046;

	t56 = (x489>>(x490<(x491<=x492)));

	if (t56 != 13069) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x497 = 11U;
	int8_t x499 = -13;
	int8_t x500 = INT8_MAX;

	t57 = (x497>>(x498<(x499<=x500)));

	if (t57 != 11) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x505 = UINT16_MAX;
	static int16_t x506 = -1;
	volatile int64_t x507 = 9073363498767LL;
	volatile uint64_t x508 = 557687094489385756LLU;
	int32_t t58 = 3316915;

	t58 = (x505>>(x506<(x507<=x508)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x509 = UINT32_MAX;
	uint64_t x510 = 35977290LLU;
	int16_t x511 = 1390;
	int8_t x512 = -1;

	t59 = (x509>>(x510<(x511<=x512)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x517 = 14;
	static int8_t x518 = INT8_MAX;
	int64_t x520 = -1LL;
	volatile int32_t t60 = -1823;

	t60 = (x517>>(x518<(x519<=x520)));

	if (t60 != 14) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x521 = 5U;
	static volatile int32_t x522 = INT32_MIN;
	static volatile int32_t t61 = -1394;

	t61 = (x521>>(x522<(x523<=x524)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x529 = 22008U;
	int32_t x530 = -1;
	uint64_t x531 = 6585683144932154LLU;
	static volatile int32_t t62 = -92;

	t62 = (x529>>(x530<(x531<=x532)));

	if (t62 != 11004) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x534 = 21935U;
	uint64_t x535 = 6976421969287834820LLU;
	static int32_t t63 = -229096875;

	t63 = (x533>>(x534<(x535<=x536)));

	if (t63 != 7747) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x537 = 4;
	static int32_t x538 = INT32_MIN;
	volatile int32_t x539 = INT32_MIN;
	uint16_t x540 = 955U;
	int32_t t64 = 2739407;

	t64 = (x537>>(x538<(x539<=x540)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x541 = UINT8_MAX;
	uint8_t x542 = 11U;
	volatile int32_t t65 = 11;

	t65 = (x541>>(x542<(x543<=x544)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x549 = 5687194024036153LLU;
	static volatile int16_t x552 = 1;
	volatile uint64_t t66 = 908LLU;

	t66 = (x549>>(x550<(x551<=x552)));

	if (t66 != 2843597012018076LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x553 = 3U;
	static int8_t x554 = -1;
	int16_t x556 = 1;
	int32_t t67 = 15;

	t67 = (x553>>(x554<(x555<=x556)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x557 = 0;
	volatile int8_t x558 = INT8_MAX;
	static int64_t x559 = INT64_MIN;
	int32_t x560 = -1;
	int32_t t68 = 841504;

	t68 = (x557>>(x558<(x559<=x560)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x561 = 5374465149591096LLU;
	int16_t x562 = -1;
	static volatile int32_t x563 = INT32_MIN;

	t69 = (x561>>(x562<(x563<=x564)));

	if (t69 != 2687232574795548LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x569 = UINT16_MAX;
	int32_t x570 = -1;
	int64_t x572 = INT64_MAX;
	volatile int32_t t70 = 127128;

	t70 = (x569>>(x570<(x571<=x572)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x573 = UINT64_MAX;
	static volatile uint32_t x574 = UINT32_MAX;
	int8_t x575 = INT8_MIN;
	int16_t x576 = INT16_MAX;
	uint64_t t71 = UINT64_MAX;

	t71 = (x573>>(x574<(x575<=x576)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x589 = INT8_MAX;
	int64_t x590 = -2826LL;
	int16_t x591 = -6;
	int16_t x592 = -1;
	int32_t t72 = -141125689;

	t72 = (x589>>(x590<(x591<=x592)));

	if (t72 != 63) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x593 = INT16_MAX;
	static uint32_t x594 = 3U;
	volatile uint8_t x595 = 2U;
	uint16_t x596 = UINT16_MAX;

	t73 = (x593>>(x594<(x595<=x596)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x598 = UINT16_MAX;
	static int32_t x599 = -1;
	uint64_t x600 = 98009450045500907LLU;
	uint64_t t74 = 2837836501637655895LLU;

	t74 = (x597>>(x598<(x599<=x600)));

	if (t74 != 34LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x609 = 16U;
	int8_t x610 = -58;
	volatile uint16_t x611 = 27728U;
	volatile uint64_t x612 = 79951828179986740LLU;
	volatile int32_t t75 = 28861;

	t75 = (x609>>(x610<(x611<=x612)));

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x613 = UINT64_MAX;
	int16_t x614 = INT16_MIN;
	uint32_t x615 = UINT32_MAX;
	uint64_t t76 = 15019995LLU;

	t76 = (x613>>(x614<(x615<=x616)));

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x618 = -1;
	int8_t x619 = INT8_MAX;
	int8_t x620 = INT8_MIN;
	volatile uint32_t t77 = 3454U;

	t77 = (x617>>(x618<(x619<=x620)));

	if (t77 != 4U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x621 = 239612175756LLU;
	static int8_t x622 = INT8_MIN;
	static uint64_t x623 = UINT64_MAX;

	t78 = (x621>>(x622<(x623<=x624)));

	if (t78 != 119806087878LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x625 = 8U;
	uint8_t x626 = UINT8_MAX;
	int16_t x628 = -1;
	volatile int32_t t79 = -23424565;

	t79 = (x625>>(x626<(x627<=x628)));

	if (t79 != 8) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x630 = INT8_MIN;
	int32_t x632 = INT32_MIN;
	static volatile int32_t t80 = 116731;

	t80 = (x629>>(x630<(x631<=x632)));

	if (t80 != 997614) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x633 = UINT8_MAX;
	int64_t x634 = INT64_MIN;
	int16_t x635 = -1;
	int32_t t81 = 3262142;

	t81 = (x633>>(x634<(x635<=x636)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x641 = 61083U;
	int32_t x644 = INT32_MIN;
	static volatile uint32_t t82 = 4U;

	t82 = (x641>>(x642<(x643<=x644)));

	if (t82 != 30541U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x645 = UINT16_MAX;
	int16_t x647 = INT16_MIN;
	static int8_t x648 = -22;

	t83 = (x645>>(x646<(x647<=x648)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x650 = INT8_MIN;
	static uint64_t x651 = 32796735128995LLU;
	int32_t x652 = 1;
	volatile uint64_t t84 = 708532484481076616LLU;

	t84 = (x649>>(x650<(x651<=x652)));

	if (t84 != 7112796307765802LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x653 = INT16_MAX;
	static volatile int32_t x654 = 1;
	volatile int8_t x655 = INT8_MIN;
	uint64_t x656 = UINT64_MAX;
	static volatile int32_t t85 = -589;

	t85 = (x653>>(x654<(x655<=x656)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x669 = 13;
	volatile int64_t x672 = -221518703112LL;
	static int32_t t86 = 3;

	t86 = (x669>>(x670<(x671<=x672)));

	if (t86 != 13) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x688 = 1680738479LLU;
	int32_t t87 = -130;

	t87 = (x685>>(x686<(x687<=x688)));

	if (t87 != 3888) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x689 = 0U;
	volatile int32_t x690 = -637141;
	int64_t x692 = INT64_MAX;

	t88 = (x689>>(x690<(x691<=x692)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x699 = INT64_MAX;
	static uint8_t x700 = 0U;

	t89 = (x697>>(x698<(x699<=x700)));

	if (t89 != 9145986403945LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x701 = 14LLU;
	volatile int64_t x702 = -1LL;
	int32_t x703 = INT32_MIN;
	static volatile uint64_t t90 = 2876580538148367LLU;

	t90 = (x701>>(x702<(x703<=x704)));

	if (t90 != 7LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x705 = 0;
	int32_t x706 = -1;
	static int64_t x707 = -1LL;
	int32_t x708 = INT32_MAX;
	volatile int32_t t91 = 22841;

	t91 = (x705>>(x706<(x707<=x708)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x709 = 6U;
	volatile int64_t x710 = INT64_MIN;
	uint64_t x711 = 22LLU;
	int32_t t92 = -249;

	t92 = (x709>>(x710<(x711<=x712)));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x713 = 326U;
	uint32_t x714 = 552U;
	uint8_t x715 = 14U;
	int16_t x716 = -3;

	t93 = (x713>>(x714<(x715<=x716)));

	if (t93 != 326) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x717 = UINT8_MAX;
	volatile uint64_t x718 = UINT64_MAX;
	int32_t x719 = 16;
	int32_t x720 = -1;
	volatile int32_t t94 = 29369;

	t94 = (x717>>(x718<(x719<=x720)));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x721 = 223913;
	static int8_t x722 = INT8_MIN;
	int8_t x723 = -1;
	int32_t x724 = INT32_MIN;
	static int32_t t95 = 0;

	t95 = (x721>>(x722<(x723<=x724)));

	if (t95 != 111956) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x726 = INT16_MAX;
	static int8_t x727 = INT8_MIN;
	int64_t x728 = -97807126436525LL;
	volatile int32_t t96 = 214;

	t96 = (x725>>(x726<(x727<=x728)));

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x733 = 1741U;
	volatile int16_t x734 = INT16_MIN;
	uint16_t x735 = 694U;
	static int8_t x736 = 4;
	int32_t t97 = 1003;

	t97 = (x733>>(x734<(x735<=x736)));

	if (t97 != 870) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x737 = 67178004LLU;
	uint64_t x738 = 2703942LLU;
	static uint64_t x739 = 3845139897768112LLU;
	int8_t x740 = 1;
	uint64_t t98 = 188416275349117163LLU;

	t98 = (x737>>(x738<(x739<=x740)));

	if (t98 != 67178004LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x741 = 3LLU;
	int8_t x742 = 9;
	uint64_t t99 = 930744LLU;

	t99 = (x741>>(x742<(x743<=x744)));

	if (t99 != 3LLU) { NG(); } else { ; }
	
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

