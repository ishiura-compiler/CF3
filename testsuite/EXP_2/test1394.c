#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x3 = INT32_MAX;
uint8_t x9 = 4U;
uint8_t x10 = 0U;
int64_t x11 = 2695204353922LL;
int8_t x20 = INT8_MAX;
static uint64_t x33 = UINT64_MAX;
static volatile int64_t x38 = -2064778923557047LL;
static int32_t x52 = -1;
int32_t t7 = 131;
int16_t x65 = -1;
int32_t x66 = 42;
int32_t x90 = INT32_MIN;
int32_t x103 = INT32_MAX;
int64_t x115 = INT64_MAX;
int32_t x136 = INT32_MIN;
volatile uint32_t t12 = 1U;
uint64_t x138 = 36650053LLU;
int32_t t13 = -54;
volatile int32_t x198 = -107;
uint64_t x239 = 63961636198849LLU;
uint16_t x240 = UINT16_MAX;
static int16_t x280 = INT16_MIN;
volatile uint32_t t20 = 5677U;
static int32_t x293 = INT32_MAX;
int16_t x312 = -1;
volatile int16_t x323 = 146;
static uint8_t x337 = 18U;
static int16_t x338 = INT16_MIN;
uint32_t x357 = UINT32_MAX;
volatile uint32_t x361 = UINT32_MAX;
volatile uint8_t x365 = 5U;
static int64_t t34 = -904785070756LL;
uint16_t x389 = UINT16_MAX;
static volatile int32_t t36 = -256002;
static uint8_t x425 = UINT8_MAX;
int64_t x450 = -1LL;
int32_t x501 = -1;
int8_t x521 = 1;
int16_t x524 = INT16_MAX;
uint64_t x533 = 3236720875786109221LLU;
static uint8_t x536 = 19U;
static int64_t x546 = INT64_MIN;
volatile int32_t x547 = 132827126;
int32_t t49 = -40680;
static int64_t x558 = INT64_MIN;
uint32_t x560 = UINT32_MAX;
volatile uint64_t t50 = 42736545244LLU;
volatile int32_t t51 = -2;
uint8_t x612 = 0U;
volatile int16_t x615 = 0;
volatile uint64_t t57 = 5002146867LLU;
int64_t x642 = INT64_MIN;
static uint64_t x644 = UINT64_MAX;
static int64_t x652 = -1LL;
volatile int8_t x658 = INT8_MIN;
static int16_t x659 = -1;
static uint64_t x662 = 236LLU;
static int8_t x668 = 15;
static volatile int32_t t64 = -277;
uint16_t x677 = 20U;
static uint32_t x678 = 647974U;
static volatile int8_t x683 = INT8_MAX;
static int64_t x693 = 2778269203584225LL;
int64_t t68 = 385LL;
int8_t x713 = -1;
int8_t x718 = -1;
int8_t x732 = INT8_MIN;
uint64_t x739 = 8290744LLU;
uint32_t x741 = UINT32_MAX;
uint8_t x777 = 6U;
int32_t x785 = INT32_MIN;
static int64_t x790 = -1LL;
static int64_t x794 = INT64_MIN;
volatile uint64_t x795 = UINT64_MAX;
uint32_t t84 = 6U;
volatile uint16_t x832 = UINT16_MAX;
int32_t x834 = -7101276;
int8_t x835 = -1;
static volatile int32_t t86 = 343234;
int64_t x843 = INT64_MAX;
volatile uint32_t t90 = 2U;
uint16_t x873 = 77U;
int8_t x876 = -1;
int8_t x893 = INT8_MAX;
static int16_t x918 = 80;
uint16_t x919 = 346U;
volatile int64_t t96 = -101LL;
int32_t x930 = 132230804;
uint64_t t98 = 5960335916LLU;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	volatile uint16_t x2 = 30U;
	volatile uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 12319383142367LLU;

	t0 = ((x1/(x2<x3))*x4);

	if (t0 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x12 = -1622694;
	static int32_t t1 = 51;

	t1 = ((x9/(x10<x11))*x12);

	if (t1 != -6490776) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -15258;
	int16_t x18 = 30;
	uint16_t x19 = UINT16_MAX;
	int32_t t2 = 0;

	t2 = ((x17/(x18<x19))*x20);

	if (t2 != -1937766) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = 201810LLU;
	int64_t x30 = -15LL;
	static int32_t x31 = -1;
	volatile uint64_t x32 = 95866677065685013LLU;
	static volatile uint64_t t3 = 65392LLU;

	t3 = ((x29/(x30<x31))*x32);

	if (t3 != 14666309378282379962LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x34 = 1U;
	int16_t x35 = -34;
	int8_t x36 = -4;
	static volatile uint64_t t4 = 219673346443348LLU;

	t4 = ((x33/(x34<x35))*x36);

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	static volatile int32_t t5 = 11292;

	t5 = ((x37/(x38<x39))*x40);

	if (t5 != 1073741824) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = -1;
	static int32_t x50 = -1;
	volatile uint16_t x51 = 1357U;
	volatile int32_t t6 = 8083212;

	t6 = ((x49/(x50<x51))*x52);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x61 = 47U;
	volatile uint64_t x62 = 1810128977937047391LLU;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 11U;

	t7 = ((x61/(x62<x63))*x64);

	if (t7 != 517) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x67 = 4232LL;
	static int16_t x68 = INT16_MAX;
	static volatile int32_t t8 = -3342;

	t8 = ((x65/(x66<x67))*x68);

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x89 = -1;
	static int64_t x91 = -1LL;
	int8_t x92 = INT8_MIN;
	int32_t t9 = -31;

	t9 = ((x89/(x90<x91))*x92);

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x101 = -279290685065934293LL;
	volatile int16_t x102 = INT16_MAX;
	volatile uint16_t x104 = 3U;
	volatile int64_t t10 = -9254541641LL;

	t10 = ((x101/(x102<x103))*x104);

	if (t10 != -837872055197802879LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x113 = INT32_MAX;
	int32_t x114 = INT32_MAX;
	volatile int64_t x116 = 61LL;
	int64_t t11 = -55679215999300525LL;

	t11 = ((x113/(x114<x115))*x116);

	if (t11 != 130996502467LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x133 = 2374U;
	static int64_t x134 = -59156LL;
	uint16_t x135 = UINT16_MAX;

	t12 = ((x133/(x134<x135))*x136);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x137 = 7878;
	static int64_t x139 = INT64_MIN;
	volatile int16_t x140 = INT16_MIN;

	t13 = ((x137/(x138<x139))*x140);

	if (t13 != -258146304) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x153 = 152U;
	int64_t x154 = INT64_MIN;
	static uint16_t x155 = 246U;
	static int64_t x156 = -30243700025LL;
	int64_t t14 = -25300514LL;

	t14 = ((x153/(x154<x155))*x156);

	if (t14 != -4597042403800LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x197 = 1LLU;
	int8_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	static volatile uint64_t t15 = 50LLU;

	t15 = ((x197/(x198<x199))*x200);

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x217 = -1;
	uint16_t x218 = 16019U;
	int16_t x219 = INT16_MAX;
	static uint16_t x220 = 417U;
	static int32_t t16 = 14992106;

	t16 = ((x217/(x218<x219))*x220);

	if (t16 != -417) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x221 = -1;
	volatile uint32_t x222 = 2041509317U;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = 42U;
	int32_t t17 = -432401;

	t17 = ((x221/(x222<x223))*x224);

	if (t17 != -42) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x237 = 177975U;
	uint32_t x238 = 107145157U;
	static volatile uint32_t t18 = 79453U;

	t18 = ((x237/(x238<x239))*x240);

	if (t18 != 3073657033U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x257 = 1;
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 86U;
	int64_t x260 = 3459960597777122655LL;
	int64_t t19 = 1007598136017LL;

	t19 = ((x257/(x258<x259))*x260);

	if (t19 != 3459960597777122655LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x277 = 471U;
	volatile uint64_t x278 = 190LLU;
	int32_t x279 = INT32_MAX;

	t20 = ((x277/(x278<x279))*x280);

	if (t20 != 4279533568U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x285 = 362162625900251293LLU;
	int64_t x286 = INT64_MIN;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = 110;
	volatile uint64_t t21 = 9193050965LLU;

	t21 = ((x285/(x286<x287))*x288);

	if (t21 != 2944400701608538998LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MAX;
	int64_t x296 = -1LL;
	int64_t t22 = 7111101522200LL;

	t22 = ((x293/(x294<x295))*x296);

	if (t22 != -2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x301 = -126991124LL;
	uint64_t x302 = 0LLU;
	static int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;
	static int64_t t23 = 3084887500265180097LL;

	t23 = ((x301/(x302<x303))*x304);

	if (t23 != 272711362231140352LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x305 = -1;
	int16_t x306 = -1;
	int16_t x307 = 113;
	int64_t x308 = 1963508LL;
	volatile int64_t t24 = 2163449506374050582LL;

	t24 = ((x305/(x306<x307))*x308);

	if (t24 != -1963508LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	static int16_t x311 = -1;
	static int32_t t25 = -28484;

	t25 = ((x309/(x310<x311))*x312);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x313 = 8999;
	int8_t x314 = 2;
	volatile int16_t x315 = INT16_MAX;
	static int64_t x316 = -1LL;
	int64_t t26 = 31866828312LL;

	t26 = ((x313/(x314<x315))*x316);

	if (t26 != -8999LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x317 = 1U;
	uint16_t x318 = 3743U;
	uint16_t x319 = 32700U;
	volatile int64_t x320 = -1LL;
	int64_t t27 = -321995304LL;

	t27 = ((x317/(x318<x319))*x320);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x321 = INT16_MIN;
	static volatile int32_t x322 = -1;
	int16_t x324 = -2108;
	volatile int32_t t28 = 1;

	t28 = ((x321/(x322<x323))*x324);

	if (t28 != 69074944) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x339 = UINT8_MAX;
	static uint8_t x340 = UINT8_MAX;
	int32_t t29 = 479558;

	t29 = ((x337/(x338<x339))*x340);

	if (t29 != 4590) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x353 = -58756569LL;
	uint32_t x354 = 9348869U;
	int8_t x355 = -3;
	int32_t x356 = -3666;
	volatile int64_t t30 = -11LL;

	t30 = ((x353/(x354<x355))*x356);

	if (t30 != 215401581954LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x358 = INT64_MIN;
	int16_t x359 = -1;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t31 = 24U;

	t31 = ((x357/(x358<x359))*x360);

	if (t31 != 32768U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	volatile int16_t x364 = 6;
	volatile uint32_t t32 = 130U;

	t32 = ((x361/(x362<x363))*x364);

	if (t32 != 4294967290U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x366 = -401374LL;
	int8_t x367 = 1;
	int64_t x368 = -1930725080LL;
	int64_t t33 = -327802981065679974LL;

	t33 = ((x365/(x366<x367))*x368);

	if (t33 != -9653625400LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x373 = -1;
	int16_t x374 = -14678;
	static int16_t x375 = INT16_MAX;
	int64_t x376 = -25241LL;

	t34 = ((x373/(x374<x375))*x376);

	if (t34 != 25241LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x385 = -1LL;
	int16_t x386 = -4;
	volatile int32_t x387 = INT32_MAX;
	uint8_t x388 = 107U;
	int64_t t35 = 1992871LL;

	t35 = ((x385/(x386<x387))*x388);

	if (t35 != -107LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x390 = 1;
	uint64_t x391 = 4353053765541224LLU;
	static uint8_t x392 = 0U;

	t36 = ((x389/(x390<x391))*x392);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x401 = INT16_MAX;
	int64_t x402 = INT64_MIN;
	int8_t x403 = 1;
	int32_t x404 = 39447;
	volatile int32_t t37 = 0;

	t37 = ((x401/(x402<x403))*x404);

	if (t37 != 1292559849) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x413 = -1;
	volatile uint64_t x414 = 2146771406141042033LLU;
	int64_t x415 = INT64_MAX;
	volatile int64_t x416 = -1LL;
	int64_t t38 = 0LL;

	t38 = ((x413/(x414<x415))*x416);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x426 = -27812162498563LL;
	int32_t x427 = INT32_MIN;
	int32_t x428 = 461611;
	static volatile int32_t t39 = -4746;

	t39 = ((x425/(x426<x427))*x428);

	if (t39 != 117710805) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x449 = 22U;
	static volatile int32_t x451 = 2427247;
	int16_t x452 = INT16_MIN;
	volatile uint32_t t40 = 178318U;

	t40 = ((x449/(x450<x451))*x452);

	if (t40 != 4294246400U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x481 = -14;
	volatile int8_t x482 = 19;
	uint32_t x483 = 5728899U;
	int8_t x484 = INT8_MAX;
	static int32_t t41 = 4075533;

	t41 = ((x481/(x482<x483))*x484);

	if (t41 != -1778) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x497 = UINT16_MAX;
	int8_t x498 = INT8_MAX;
	volatile uint64_t x499 = 2366962112621LLU;
	uint8_t x500 = 59U;
	static volatile int32_t t42 = -5991722;

	t42 = ((x497/(x498<x499))*x500);

	if (t42 != 3866565) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x502 = 0;
	uint64_t x503 = UINT64_MAX;
	static int16_t x504 = -1;
	int32_t t43 = 65166;

	t43 = ((x501/(x502<x503))*x504);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x505 = UINT8_MAX;
	int32_t x506 = -46608157;
	static uint16_t x507 = 1U;
	int32_t x508 = -1;
	volatile int32_t t44 = 179;

	t44 = ((x505/(x506<x507))*x508);

	if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x513 = INT8_MIN;
	int64_t x514 = INT64_MIN;
	int32_t x515 = -303;
	int16_t x516 = -99;
	volatile int32_t t45 = -31627772;

	t45 = ((x513/(x514<x515))*x516);

	if (t45 != 12672) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x522 = INT16_MIN;
	volatile uint16_t x523 = 0U;
	static int32_t t46 = -18413;

	t46 = ((x521/(x522<x523))*x524);

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x534 = 4U;
	int32_t x535 = INT32_MAX;
	uint64_t t47 = 108333150632975LLU;

	t47 = ((x533/(x534<x535))*x536);

	if (t47 != 6157464418807420351LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x545 = 499255LLU;
	int64_t x548 = INT64_MIN;
	volatile uint64_t t48 = 20246LLU;

	t48 = ((x545/(x546<x547))*x548);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x549 = INT16_MAX;
	volatile uint8_t x550 = 0U;
	uint16_t x551 = UINT16_MAX;
	int16_t x552 = INT16_MIN;

	t49 = ((x549/(x550<x551))*x552);

	if (t49 != -1073709056) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x557 = 861897987342169496LLU;
	uint16_t x559 = 14U;

	t50 = ((x557/(x558<x559))*x560);

	if (t50 != 2031512593962142312LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x561 = INT8_MIN;
	volatile int8_t x562 = 0;
	volatile uint8_t x563 = 107U;
	volatile int32_t x564 = -1;

	t51 = ((x561/(x562<x563))*x564);

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x565 = 2779LLU;
	uint8_t x566 = 4U;
	static uint64_t x567 = UINT64_MAX;
	int64_t x568 = -1LL;
	uint64_t t52 = 168244LLU;

	t52 = ((x565/(x566<x567))*x568);

	if (t52 != 18446744073709548837LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x569 = 19U;
	volatile int8_t x570 = INT8_MAX;
	uint32_t x571 = UINT32_MAX;
	static int16_t x572 = INT16_MIN;
	int32_t t53 = 172;

	t53 = ((x569/(x570<x571))*x572);

	if (t53 != -622592) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x601 = -242;
	uint32_t x602 = UINT32_MAX;
	volatile int64_t x603 = INT64_MAX;
	uint8_t x604 = UINT8_MAX;
	int32_t t54 = -1182;

	t54 = ((x601/(x602<x603))*x604);

	if (t54 != -61710) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x609 = -79126730350824LL;
	static uint32_t x610 = 128549056U;
	int64_t x611 = INT64_MAX;
	int64_t t55 = 81039943262LL;

	t55 = ((x609/(x610<x611))*x612);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x613 = -1;
	int16_t x614 = -1;
	int16_t x616 = INT16_MIN;
	static volatile int32_t t56 = 421;

	t56 = ((x613/(x614<x615))*x616);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x637 = 4959362050950LLU;
	volatile int32_t x638 = INT32_MIN;
	static int8_t x639 = -23;
	int8_t x640 = 1;

	t57 = ((x637/(x638<x639))*x640);

	if (t57 != 4959362050950LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x641 = 111933781448080545LLU;
	int32_t x643 = INT32_MIN;
	static volatile uint64_t t58 = 1094514212127LLU;

	t58 = ((x641/(x642<x643))*x644);

	if (t58 != 18334810292261471071LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x645 = -1413;
	static int8_t x646 = -1;
	uint8_t x647 = UINT8_MAX;
	int64_t x648 = -1LL;
	volatile int64_t t59 = 12196491LL;

	t59 = ((x645/(x646<x647))*x648);

	if (t59 != 1413LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x649 = 28647807201477LLU;
	volatile int16_t x650 = 1;
	static uint64_t x651 = UINT64_MAX;
	volatile uint64_t t60 = 110720649735299973LLU;

	t60 = ((x649/(x650<x651))*x652);

	if (t60 != 18446715425902350139LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x653 = 110028LL;
	volatile int32_t x654 = INT32_MIN;
	int16_t x655 = INT16_MIN;
	static volatile uint8_t x656 = UINT8_MAX;
	volatile int64_t t61 = -4013659156305514LL;

	t61 = ((x653/(x654<x655))*x656);

	if (t61 != 28057140LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x657 = 1U;
	volatile int16_t x660 = INT16_MAX;
	static int32_t t62 = 141182076;

	t62 = ((x657/(x658<x659))*x660);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x661 = UINT16_MAX;
	int64_t x663 = -1LL;
	uint8_t x664 = 50U;
	volatile int32_t t63 = -35;

	t63 = ((x661/(x662<x663))*x664);

	if (t63 != 3276750) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x665 = INT16_MAX;
	volatile uint32_t x666 = 4402325U;
	static int32_t x667 = -1;

	t64 = ((x665/(x666<x667))*x668);

	if (t64 != 491505) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x679 = -23;
	uint64_t x680 = UINT64_MAX;
	static uint64_t t65 = 2361676313LLU;

	t65 = ((x677/(x678<x679))*x680);

	if (t65 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x681 = -1;
	int8_t x682 = 17;
	static int8_t x684 = -1;
	static int32_t t66 = -366798971;

	t66 = ((x681/(x682<x683))*x684);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x685 = 5520367U;
	int8_t x686 = 2;
	int64_t x687 = 43188610LL;
	uint8_t x688 = 0U;
	static uint32_t t67 = 98754U;

	t67 = ((x685/(x686<x687))*x688);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x694 = 52;
	volatile uint64_t x695 = UINT64_MAX;
	int8_t x696 = INT8_MAX;

	t68 = ((x693/(x694<x695))*x696);

	if (t68 != 352840188855196575LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x697 = 2920U;
	int64_t x698 = INT64_MIN;
	int64_t x699 = -145LL;
	int8_t x700 = INT8_MAX;
	int32_t t69 = 1;

	t69 = ((x697/(x698<x699))*x700);

	if (t69 != 370840) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x701 = 1;
	int16_t x702 = INT16_MIN;
	int16_t x703 = 112;
	volatile int64_t x704 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = ((x701/(x702<x703))*x704);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x705 = 2508338533594LLU;
	int16_t x706 = INT16_MIN;
	int8_t x707 = -1;
	int64_t x708 = INT64_MAX;
	uint64_t t71 = 3002478110260LLU;

	t71 = ((x705/(x706<x707))*x708);

	if (t71 != 18446741565371018022LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x714 = UINT8_MAX;
	uint32_t x715 = 14144305U;
	int32_t x716 = INT32_MAX;
	volatile int32_t t72 = 1368604;

	t72 = ((x713/(x714<x715))*x716);

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x717 = UINT64_MAX;
	int8_t x719 = 5;
	volatile uint16_t x720 = 8170U;
	uint64_t t73 = 6172175153587529263LLU;

	t73 = ((x717/(x718<x719))*x720);

	if (t73 != 18446744073709543446LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x721 = INT32_MAX;
	static uint8_t x722 = 2U;
	uint16_t x723 = UINT16_MAX;
	static int8_t x724 = 1;
	static volatile int32_t t74 = INT32_MAX;

	t74 = ((x721/(x722<x723))*x724);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x729 = -24;
	int16_t x730 = INT16_MIN;
	volatile int64_t x731 = 4297684687226380410LL;
	volatile int32_t t75 = 1;

	t75 = ((x729/(x730<x731))*x732);

	if (t75 != 3072) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x737 = 8U;
	int32_t x738 = 18138;
	int8_t x740 = -1;
	volatile int32_t t76 = 7098;

	t76 = ((x737/(x738<x739))*x740);

	if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x742 = -222951355820765LL;
	volatile int16_t x743 = INT16_MAX;
	volatile int64_t x744 = 217363LL;
	volatile int64_t t77 = -3082384410524LL;

	t77 = ((x741/(x742<x743))*x744);

	if (t77 != 933566976143085LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x745 = -1LL;
	volatile int64_t x746 = -1519483598147301633LL;
	int8_t x747 = 44;
	int8_t x748 = INT8_MIN;
	int64_t t78 = -2985018447837188LL;

	t78 = ((x745/(x746<x747))*x748);

	if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x773 = 0;
	int32_t x774 = -235303;
	int16_t x775 = INT16_MIN;
	static int32_t x776 = 8442271;
	volatile int32_t t79 = 3310;

	t79 = ((x773/(x774<x775))*x776);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x778 = 4U;
	int32_t x779 = -1;
	uint16_t x780 = 7U;
	volatile int32_t t80 = 1;

	t80 = ((x777/(x778<x779))*x780);

	if (t80 != 42) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x786 = 3;
	uint64_t x787 = UINT64_MAX;
	int64_t x788 = 13LL;
	int64_t t81 = -267LL;

	t81 = ((x785/(x786<x787))*x788);

	if (t81 != -27917287424LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x789 = -20LL;
	static int16_t x791 = 0;
	int16_t x792 = INT16_MAX;
	volatile int64_t t82 = -2338884057400LL;

	t82 = ((x789/(x790<x791))*x792);

	if (t82 != -655340LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x793 = 44839115192904478LLU;
	int64_t x796 = 6963629620LL;
	static uint64_t t83 = 1929492907763LLU;

	t83 = ((x793/(x794<x795))*x796);

	if (t83 != 8164096253044549144LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x825 = -12;
	int64_t x826 = -2563547052284482LL;
	int32_t x827 = -1;
	uint32_t x828 = UINT32_MAX;

	t84 = ((x825/(x826<x827))*x828);

	if (t84 != 12U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x829 = INT16_MAX;
	static volatile int32_t x830 = INT32_MIN;
	int64_t x831 = INT64_MAX;
	int32_t t85 = -141;

	t85 = ((x829/(x830<x831))*x832);

	if (t85 != 2147385345) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x833 = INT8_MAX;
	int8_t x836 = INT8_MIN;

	t86 = ((x833/(x834<x835))*x836);

	if (t86 != -16256) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x841 = 214783383146635651LLU;
	volatile int16_t x842 = INT16_MIN;
	static volatile int16_t x844 = 0;
	uint64_t t87 = 621248029LLU;

	t87 = ((x841/(x842<x843))*x844);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x849 = INT32_MIN;
	int8_t x850 = INT8_MAX;
	uint32_t x851 = 65392746U;
	uint64_t x852 = 1070161716LLU;
	uint64_t t88 = 987877026470117559LLU;

	t88 = ((x849/(x850<x851))*x852);

	if (t88 != 16148589287883931648LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x861 = -1;
	static volatile int8_t x862 = 0;
	uint32_t x863 = 1337307721U;
	int8_t x864 = INT8_MIN;
	static int32_t t89 = -3623;

	t89 = ((x861/(x862<x863))*x864);

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x869 = 9;
	int32_t x870 = -242;
	int32_t x871 = 1029505;
	uint32_t x872 = 1U;

	t90 = ((x869/(x870<x871))*x872);

	if (t90 != 9U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x874 = 1;
	uint16_t x875 = 4U;
	int32_t t91 = 3195;

	t91 = ((x873/(x874<x875))*x876);

	if (t91 != -77) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x894 = 56289U;
	int32_t x895 = INT32_MIN;
	int16_t x896 = INT16_MIN;
	int32_t t92 = 99889361;

	t92 = ((x893/(x894<x895))*x896);

	if (t92 != -4161536) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x905 = UINT32_MAX;
	int16_t x906 = 0;
	uint8_t x907 = 16U;
	int8_t x908 = INT8_MIN;
	uint32_t t93 = 13U;

	t93 = ((x905/(x906<x907))*x908);

	if (t93 != 128U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x909 = 872LLU;
	uint64_t x910 = 184727139LLU;
	int64_t x911 = -1LL;
	uint16_t x912 = 5699U;
	uint64_t t94 = 4193466LLU;

	t94 = ((x909/(x910<x911))*x912);

	if (t94 != 4969528LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x913 = 704334587486757LLU;
	uint16_t x914 = UINT16_MAX;
	static volatile uint32_t x915 = UINT32_MAX;
	uint32_t x916 = 7845789U;
	volatile uint64_t t95 = 10898LLU;

	t95 = ((x913/(x914<x915))*x916);

	if (t95 != 10484080783979783089LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x917 = 19U;
	int64_t x920 = 2829406615903LL;

	t96 = ((x917/(x918<x919))*x920);

	if (t96 != 53758725702157LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x921 = 10575U;
	int16_t x922 = -3047;
	int16_t x923 = -1;
	volatile uint32_t x924 = 4853U;
	static volatile uint32_t t97 = 97907U;

	t97 = ((x921/(x922<x923))*x924);

	if (t97 != 51320475U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x929 = 2;
	int64_t x931 = 4200291446LL;
	uint64_t x932 = UINT64_MAX;

	t98 = ((x929/(x930<x931))*x932);

	if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x933 = INT8_MAX;
	static int64_t x934 = INT64_MIN;
	volatile int8_t x935 = INT8_MAX;
	volatile int8_t x936 = INT8_MIN;
	volatile int32_t t99 = 15;

	t99 = ((x933/(x934<x935))*x936);

	if (t99 != -16256) { NG(); } else { ; }
	
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

