#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x30 = -1;
int64_t x31 = INT64_MAX;
volatile uint32_t t2 = 4345U;
static volatile uint16_t x57 = 864U;
volatile int32_t t5 = INT32_MAX;
static int8_t x91 = INT8_MAX;
int32_t x100 = INT32_MIN;
int32_t t7 = -441631;
volatile int16_t x118 = -1;
uint64_t x144 = 182259868LLU;
static uint8_t x173 = UINT8_MAX;
uint16_t x176 = 3556U;
static volatile int8_t x208 = -1;
volatile int32_t x209 = 25970918;
int32_t t19 = 1046550;
volatile uint8_t x257 = 0U;
volatile uint32_t x258 = 7170U;
int32_t t21 = 1478;
int16_t x301 = INT16_MAX;
int8_t x302 = 6;
volatile int8_t x316 = -1;
int32_t t25 = 7;
int16_t x337 = 39;
int8_t x338 = INT8_MAX;
static volatile uint64_t x346 = UINT64_MAX;
int16_t x348 = INT16_MAX;
uint64_t x393 = UINT64_MAX;
static uint64_t x394 = 129493930472418LLU;
volatile uint64_t t30 = UINT64_MAX;
int8_t x399 = -30;
static volatile uint8_t x402 = 52U;
uint8_t x410 = UINT8_MAX;
int32_t x418 = INT32_MIN;
int32_t x420 = INT32_MIN;
volatile int64_t t34 = INT64_MAX;
int64_t x421 = INT64_MAX;
int8_t x430 = INT8_MIN;
volatile uint16_t x441 = 26U;
uint8_t x449 = 32U;
int64_t x450 = -1LL;
static uint32_t t42 = UINT32_MAX;
int32_t x485 = 81926326;
int32_t t43 = -472400;
uint32_t t44 = 136U;
int8_t x510 = -10;
int64_t x511 = INT64_MAX;
uint64_t x517 = UINT64_MAX;
uint64_t x533 = 77916244182696654LLU;
static uint64_t t47 = 98657LLU;
uint64_t x544 = UINT64_MAX;
static int64_t t50 = 823022323490858LL;
int32_t t51 = -17036;
int32_t x602 = INT32_MAX;
int64_t x604 = INT64_MAX;
static uint64_t x631 = 31535269109446LLU;
int64_t t54 = INT64_MAX;
int32_t t55 = 478185648;
int64_t x690 = -1LL;
int64_t x692 = INT64_MIN;
int16_t x701 = 0;
int8_t x714 = -1;
volatile uint64_t x727 = 1725580LLU;
volatile int8_t x728 = INT8_MAX;
uint8_t x733 = 7U;
volatile int8_t x734 = -1;
uint16_t x745 = 1129U;
volatile uint32_t t62 = 15284944U;
int32_t x779 = INT32_MIN;
uint16_t x805 = 3992U;
int32_t t64 = 125;
uint32_t x816 = 2U;
int32_t x826 = -1;
volatile int32_t x828 = -147174;
static uint16_t x833 = 278U;
int32_t x836 = INT32_MAX;
static int64_t x837 = INT64_MAX;
int32_t x839 = INT32_MIN;
volatile uint32_t t70 = 3U;
static int64_t x913 = INT64_MAX;
static uint8_t x925 = 56U;
volatile int32_t t77 = -164;
uint16_t x940 = 92U;
int8_t x979 = INT8_MAX;
uint8_t x1025 = UINT8_MAX;
volatile int64_t x1026 = INT64_MIN;
uint8_t x1030 = 14U;
static int64_t x1031 = -32624006LL;
volatile int64_t x1053 = INT64_MAX;
uint64_t x1122 = 12426LLU;
int32_t x1124 = INT32_MIN;
int16_t x1161 = INT16_MAX;


void f0(void) {
	uint16_t x25 = 341U;
	int16_t x26 = -3040;
	int32_t x27 = INT32_MIN;
	volatile int32_t x28 = INT32_MIN;
	int32_t t0 = 1483467;

	t0 = (x25<<((x26/x27)&x28));

	if (t0 != 341) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x29 = 1;
	int8_t x32 = -49;
	static int32_t t1 = -2150077;

	t1 = (x29<<((x30/x31)&x32));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x49 = 3898U;
	volatile int32_t x50 = -1778;
	int16_t x51 = 27;
	int8_t x52 = 7;

	t2 = (x49<<((x50/x51)&x52));

	if (t2 != 498944U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x58 = 0;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t3 = 25211;

	t3 = (x57<<((x58/x59)&x60));

	if (t3 != 864) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x69 = 609294788941LL;
	int32_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	static int64_t t4 = 1385000419LL;

	t4 = (x69<<((x70/x71)&x72));

	if (t4 != 609294788941LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x81 = INT32_MAX;
	static int16_t x82 = -1;
	uint16_t x83 = 2U;
	volatile uint64_t x84 = 11531LLU;

	t5 = (x81<<((x82/x83)&x84));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 444655646U;
	uint16_t x92 = 1U;
	uint64_t t6 = 2845625773932LLU;

	t6 = (x89<<((x90/x91)&x92));

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x98 = 1U;
	int32_t x99 = -1042598067;

	t7 = (x97<<((x98/x99)&x100));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x113 = 1;
	int8_t x114 = INT8_MIN;
	volatile int64_t x115 = -3167797599880LL;
	volatile uint64_t x116 = UINT64_MAX;
	int32_t t8 = -654;

	t8 = (x113<<((x114/x115)&x116));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x117 = 357;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = INT64_MIN;
	static volatile int32_t t9 = 912;

	t9 = (x117<<((x118/x119)&x120));

	if (t9 != 357) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x125 = UINT16_MAX;
	volatile int32_t x126 = INT32_MAX;
	int8_t x127 = INT8_MIN;
	static int8_t x128 = 0;
	volatile int32_t t10 = 127903565;

	t10 = (x125<<((x126/x127)&x128));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x141 = UINT8_MAX;
	volatile int8_t x142 = INT8_MIN;
	int32_t x143 = 143;
	volatile int32_t t11 = 206225682;

	t11 = (x141<<((x142/x143)&x144));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x157 = 2U;
	int16_t x158 = -1;
	uint16_t x159 = UINT16_MAX;
	volatile int16_t x160 = INT16_MAX;
	int32_t t12 = 0;

	t12 = (x157<<((x158/x159)&x160));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x161 = UINT16_MAX;
	int16_t x162 = INT16_MIN;
	int64_t x163 = 14489941791LL;
	uint32_t x164 = UINT32_MAX;
	int32_t t13 = 13011;

	t13 = (x161<<((x162/x163)&x164));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x174 = -1LL;
	int16_t x175 = -1;
	static volatile int32_t t14 = 72648635;

	t14 = (x173<<((x174/x175)&x176));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x181 = 3U;
	int16_t x182 = -7;
	int64_t x183 = 139431620310056LL;
	volatile uint32_t x184 = UINT32_MAX;
	int32_t t15 = 12863;

	t15 = (x181<<((x182/x183)&x184));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x193 = 43U;
	static int8_t x194 = -1;
	static int64_t x195 = 1705966558670009725LL;
	int32_t x196 = -96914;
	static int32_t t16 = 64504526;

	t16 = (x193<<((x194/x195)&x196));

	if (t16 != 43) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x197 = 280LL;
	uint32_t x198 = 143U;
	int8_t x199 = -1;
	int32_t x200 = INT32_MIN;
	int64_t t17 = 4123137464859534279LL;

	t17 = (x197<<((x198/x199)&x200));

	if (t17 != 280LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x205 = 18U;
	int16_t x206 = INT16_MAX;
	int16_t x207 = INT16_MAX;
	volatile int32_t t18 = -1;

	t18 = (x205<<((x206/x207)&x208));

	if (t18 != 36) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	static uint8_t x212 = 25U;

	t19 = (x209<<((x210/x211)&x212));

	if (t19 != 25970918) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x213 = 6767426U;
	uint16_t x214 = 4276U;
	int64_t x215 = INT64_MIN;
	int8_t x216 = INT8_MIN;
	uint32_t t20 = 110U;

	t20 = (x213<<((x214/x215)&x216));

	if (t20 != 6767426U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x259 = INT64_MAX;
	volatile int16_t x260 = INT16_MAX;

	t21 = (x257<<((x258/x259)&x260));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x297 = UINT64_MAX;
	static int8_t x298 = 26;
	volatile uint64_t x299 = 145915695974LLU;
	volatile int8_t x300 = INT8_MAX;
	uint64_t t22 = UINT64_MAX;

	t22 = (x297<<((x298/x299)&x300));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x303 = UINT16_MAX;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t23 = -1;

	t23 = (x301<<((x302/x303)&x304));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x305 = 164;
	int64_t x306 = 11176LL;
	int16_t x307 = INT16_MIN;
	uint64_t x308 = 175627606468379652LLU;
	int32_t t24 = -3006254;

	t24 = (x305<<((x306/x307)&x308));

	if (t24 != 164) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x313 = 1763101;
	uint32_t x314 = 45631832U;
	int16_t x315 = INT16_MIN;

	t25 = (x313<<((x314/x315)&x316));

	if (t25 != 1763101) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x317 = INT64_MAX;
	volatile int32_t x318 = INT32_MAX;
	volatile int32_t x319 = INT32_MIN;
	volatile int16_t x320 = INT16_MIN;
	int64_t t26 = INT64_MAX;

	t26 = (x317<<((x318/x319)&x320));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x339 = INT64_MAX;
	static int8_t x340 = -1;
	int32_t t27 = -204;

	t27 = (x337<<((x338/x339)&x340));

	if (t27 != 39) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x345 = 16U;
	int8_t x347 = -1;
	static int32_t t28 = -3831;

	t28 = (x345<<((x346/x347)&x348));

	if (t28 != 32) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x377 = 124;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = -2642;
	int8_t x380 = 0;
	static int32_t t29 = 11380286;

	t29 = (x377<<((x378/x379)&x380));

	if (t29 != 124) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x395 = -1;
	volatile int64_t x396 = -1LL;

	t30 = (x393<<((x394/x395)&x396));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x397 = UINT8_MAX;
	int16_t x398 = -1;
	static volatile int64_t x400 = INT64_MAX;
	static volatile int32_t t31 = -17;

	t31 = (x397<<((x398/x399)&x400));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x401 = 111U;
	uint32_t x403 = 488050U;
	int64_t x404 = 1LL;
	static uint32_t t32 = 903096175U;

	t32 = (x401<<((x402/x403)&x404));

	if (t32 != 111U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x409 = 12;
	static int16_t x411 = INT16_MIN;
	static int8_t x412 = INT8_MIN;
	volatile int32_t t33 = -14;

	t33 = (x409<<((x410/x411)&x412));

	if (t33 != 12) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x417 = INT64_MAX;
	int8_t x419 = INT8_MIN;

	t34 = (x417<<((x418/x419)&x420));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x422 = -1;
	int8_t x423 = INT8_MIN;
	static int8_t x424 = INT8_MIN;
	int64_t t35 = INT64_MAX;

	t35 = (x421<<((x422/x423)&x424));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x429 = 1036586551199070770LL;
	int64_t x431 = 1619306779LL;
	int16_t x432 = 424;
	volatile int64_t t36 = -2634785284640LL;

	t36 = (x429<<((x430/x431)&x432));

	if (t36 != 1036586551199070770LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x442 = 30536U;
	int8_t x443 = -1;
	static int64_t x444 = INT64_MIN;
	volatile int32_t t37 = -97141017;

	t37 = (x441<<((x442/x443)&x444));

	if (t37 != 26) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x451 = -1;
	static int16_t x452 = INT16_MAX;
	volatile int32_t t38 = 12617971;

	t38 = (x449<<((x450/x451)&x452));

	if (t38 != 64) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x457 = 896U;
	static uint32_t x458 = UINT32_MAX;
	volatile int64_t x459 = -1LL;
	int8_t x460 = 1;
	static int32_t t39 = -95839;

	t39 = (x457<<((x458/x459)&x460));

	if (t39 != 1792) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x469 = UINT32_MAX;
	volatile int16_t x470 = 12;
	static int16_t x471 = INT16_MIN;
	int8_t x472 = INT8_MAX;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x469<<((x470/x471)&x472));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x473 = 0;
	static volatile uint64_t x474 = 110241511LLU;
	volatile int8_t x475 = INT8_MAX;
	int64_t x476 = INT64_MIN;
	static int32_t t41 = 7749464;

	t41 = (x473<<((x474/x475)&x476));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x477 = UINT32_MAX;
	int32_t x478 = INT32_MIN;
	volatile int64_t x479 = INT64_MAX;
	volatile int32_t x480 = -1;

	t42 = (x477<<((x478/x479)&x480));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x486 = 15U;
	static uint64_t x487 = UINT64_MAX;
	uint8_t x488 = 72U;

	t43 = (x485<<((x486/x487)&x488));

	if (t43 != 81926326) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x493 = 57229U;
	uint64_t x494 = 2588506722179103693LLU;
	int32_t x495 = INT32_MIN;
	static volatile int64_t x496 = -204099LL;

	t44 = (x493<<((x494/x495)&x496));

	if (t44 != 57229U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x509 = 462;
	uint32_t x512 = 180436U;
	int32_t t45 = -16;

	t45 = (x509<<((x510/x511)&x512));

	if (t45 != 462) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x518 = 1U;
	uint32_t x519 = 14312U;
	uint32_t x520 = 127276046U;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x517<<((x518/x519)&x520));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x534 = -1LL;
	int16_t x535 = INT16_MIN;
	uint8_t x536 = 21U;

	t47 = (x533<<((x534/x535)&x536));

	if (t47 != 77916244182696654LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x537 = UINT64_MAX;
	uint8_t x538 = 4U;
	uint64_t x539 = UINT64_MAX;
	uint64_t x540 = 455074LLU;
	uint64_t t48 = UINT64_MAX;

	t48 = (x537<<((x538/x539)&x540));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x541 = UINT32_MAX;
	uint8_t x542 = 50U;
	volatile uint32_t x543 = 1337240U;
	uint32_t t49 = UINT32_MAX;

	t49 = (x541<<((x542/x543)&x544));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x553 = 141648282700998587LL;
	static uint8_t x554 = 5U;
	static uint16_t x555 = UINT16_MAX;
	int16_t x556 = -159;

	t50 = (x553<<((x554/x555)&x556));

	if (t50 != 141648282700998587LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x581 = 42U;
	volatile int32_t x582 = INT32_MIN;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = 1;

	t51 = (x581<<((x582/x583)&x584));

	if (t51 != 42) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x597 = 2U;
	int32_t x598 = INT32_MAX;
	int16_t x599 = -1;
	static uint32_t x600 = 1U;
	static int32_t t52 = 51927908;

	t52 = (x597<<((x598/x599)&x600));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x601 = 21U;
	int32_t x603 = INT32_MIN;
	volatile int32_t t53 = 112;

	t53 = (x601<<((x602/x603)&x604));

	if (t53 != 21) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x629 = INT64_MAX;
	static volatile uint16_t x630 = 462U;
	volatile int64_t x632 = -1351LL;

	t54 = (x629<<((x630/x631)&x632));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x661 = INT8_MAX;
	uint32_t x662 = 14968U;
	static int32_t x663 = -24176;
	uint64_t x664 = UINT64_MAX;

	t55 = (x661<<((x662/x663)&x664));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x689 = 855LL;
	volatile int8_t x691 = INT8_MIN;
	static int64_t t56 = -2002706LL;

	t56 = (x689<<((x690/x691)&x692));

	if (t56 != 855LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x702 = -1;
	int8_t x703 = INT8_MIN;
	static uint32_t x704 = 438032914U;
	int32_t t57 = -31447;

	t57 = (x701<<((x702/x703)&x704));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x713 = UINT32_MAX;
	volatile uint8_t x715 = 9U;
	volatile int8_t x716 = -1;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (x713<<((x714/x715)&x716));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x725 = UINT64_MAX;
	int16_t x726 = INT16_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = (x725<<((x726/x727)&x728));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x735 = 3196;
	uint16_t x736 = UINT16_MAX;
	static volatile int32_t t60 = 223317152;

	t60 = (x733<<((x734/x735)&x736));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x746 = UINT32_MAX;
	int64_t x747 = INT64_MAX;
	static int8_t x748 = INT8_MIN;
	int32_t t61 = -5;

	t61 = (x745<<((x746/x747)&x748));

	if (t61 != 1129) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x765 = 3023U;
	int32_t x766 = -1;
	volatile int8_t x767 = 4;
	int8_t x768 = 1;

	t62 = (x765<<((x766/x767)&x768));

	if (t62 != 3023U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x777 = 30;
	uint16_t x778 = 3946U;
	int32_t x780 = 2589;
	static int32_t t63 = 218391;

	t63 = (x777<<((x778/x779)&x780));

	if (t63 != 30) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x806 = 11U;
	volatile uint16_t x807 = 3U;
	volatile uint16_t x808 = 12054U;

	t64 = (x805<<((x806/x807)&x808));

	if (t64 != 15968) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x813 = 21U;
	static uint64_t x814 = 1LLU;
	volatile int32_t x815 = INT32_MIN;
	int32_t t65 = 1086655;

	t65 = (x813<<((x814/x815)&x816));

	if (t65 != 21) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x825 = 71912254U;
	static uint32_t x827 = UINT32_MAX;
	static volatile uint32_t t66 = 3995562U;

	t66 = (x825<<((x826/x827)&x828));

	if (t66 != 71912254U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x829 = 20LLU;
	int64_t x830 = -1LL;
	static int16_t x831 = 15;
	static int32_t x832 = INT32_MAX;
	static uint64_t t67 = 65738093688990LLU;

	t67 = (x829<<((x830/x831)&x832));

	if (t67 != 20LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x834 = INT16_MIN;
	volatile int32_t x835 = -10186930;
	int32_t t68 = 6515;

	t68 = (x833<<((x834/x835)&x836));

	if (t68 != 278) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x838 = -1;
	int8_t x840 = INT8_MIN;
	static volatile int64_t t69 = INT64_MAX;

	t69 = (x837<<((x838/x839)&x840));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x841 = 22874871U;
	static uint16_t x842 = UINT16_MAX;
	static uint32_t x843 = UINT32_MAX;
	int32_t x844 = INT32_MIN;

	t70 = (x841<<((x842/x843)&x844));

	if (t70 != 22874871U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x861 = UINT64_MAX;
	int16_t x862 = 1;
	int64_t x863 = 128972706122LL;
	static int16_t x864 = INT16_MIN;
	static uint64_t t71 = UINT64_MAX;

	t71 = (x861<<((x862/x863)&x864));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x873 = 55735380U;
	uint32_t x874 = 0U;
	int8_t x875 = INT8_MAX;
	volatile uint8_t x876 = 56U;
	static uint32_t t72 = 415813U;

	t72 = (x873<<((x874/x875)&x876));

	if (t72 != 55735380U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x877 = UINT16_MAX;
	int8_t x878 = -1;
	int16_t x879 = INT16_MIN;
	volatile int32_t x880 = INT32_MIN;
	int32_t t73 = 9212995;

	t73 = (x877<<((x878/x879)&x880));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x881 = 459578648086LLU;
	static int64_t x882 = INT64_MAX;
	int8_t x883 = INT8_MIN;
	uint32_t x884 = 809U;
	volatile uint64_t t74 = 1704594748216LLU;

	t74 = (x881<<((x882/x883)&x884));

	if (t74 != 919157296172LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x914 = 40174168U;
	uint32_t x915 = UINT32_MAX;
	int16_t x916 = -15;
	int64_t t75 = INT64_MAX;

	t75 = (x913<<((x914/x915)&x916));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x921 = 2090523076U;
	int8_t x922 = -1;
	int32_t x923 = INT32_MIN;
	static uint8_t x924 = 25U;
	volatile uint32_t t76 = 508U;

	t76 = (x921<<((x922/x923)&x924));

	if (t76 != 2090523076U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x926 = 109U;
	int8_t x927 = INT8_MIN;
	uint32_t x928 = UINT32_MAX;

	t77 = (x925<<((x926/x927)&x928));

	if (t77 != 56) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x937 = UINT32_MAX;
	int32_t x938 = INT32_MIN;
	static volatile int8_t x939 = INT8_MIN;
	uint32_t t78 = UINT32_MAX;

	t78 = (x937<<((x938/x939)&x940));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x945 = 34158795347560330LLU;
	int32_t x946 = 29;
	uint8_t x947 = 7U;
	static volatile uint8_t x948 = 24U;
	volatile uint64_t t79 = 17335LLU;

	t79 = (x945<<((x946/x947)&x948));

	if (t79 != 34158795347560330LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x953 = 231U;
	uint64_t x954 = 2484LLU;
	uint16_t x955 = 346U;
	uint64_t x956 = 239546863098LLU;
	int32_t t80 = -145;

	t80 = (x953<<((x954/x955)&x956));

	if (t80 != 924) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x969 = 29U;
	volatile uint16_t x970 = 648U;
	volatile uint32_t x971 = 6373U;
	static int8_t x972 = INT8_MIN;
	volatile int32_t t81 = -63848900;

	t81 = (x969<<((x970/x971)&x972));

	if (t81 != 29) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x977 = UINT64_MAX;
	int8_t x978 = INT8_MAX;
	int8_t x980 = INT8_MIN;
	static uint64_t t82 = UINT64_MAX;

	t82 = (x977<<((x978/x979)&x980));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x985 = INT16_MAX;
	static uint64_t x986 = 13954046881LLU;
	uint32_t x987 = UINT32_MAX;
	int64_t x988 = INT64_MIN;
	int32_t t83 = -2;

	t83 = (x985<<((x986/x987)&x988));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1005 = 26593789;
	uint32_t x1006 = UINT32_MAX;
	static int8_t x1007 = -1;
	int64_t x1008 = -1LL;
	volatile int32_t t84 = 0;

	t84 = (x1005<<((x1006/x1007)&x1008));

	if (t84 != 53187578) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x1027 = 1;
	uint16_t x1028 = 24U;
	int32_t t85 = -18863;

	t85 = (x1025<<((x1026/x1027)&x1028));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x1029 = UINT16_MAX;
	int32_t x1032 = -23042;
	int32_t t86 = -128398209;

	t86 = (x1029<<((x1030/x1031)&x1032));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1049 = 53;
	uint8_t x1050 = 9U;
	static int8_t x1051 = 7;
	static int16_t x1052 = -1;
	static int32_t t87 = 1;

	t87 = (x1049<<((x1050/x1051)&x1052));

	if (t87 != 106) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1054 = INT32_MIN;
	volatile int64_t x1055 = INT64_MAX;
	int32_t x1056 = -1;
	static int64_t t88 = INT64_MAX;

	t88 = (x1053<<((x1054/x1055)&x1056));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x1061 = UINT32_MAX;
	uint64_t x1062 = UINT64_MAX;
	int64_t x1063 = INT64_MIN;
	uint8_t x1064 = 5U;
	uint32_t t89 = 17607U;

	t89 = (x1061<<((x1062/x1063)&x1064));

	if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x1065 = 225U;
	static int8_t x1066 = INT8_MAX;
	int64_t x1067 = 114904053939537340LL;
	uint32_t x1068 = 6U;
	volatile int32_t t90 = 1;

	t90 = (x1065<<((x1066/x1067)&x1068));

	if (t90 != 225) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1077 = UINT16_MAX;
	int8_t x1078 = 51;
	uint32_t x1079 = 5962999U;
	int8_t x1080 = INT8_MAX;
	int32_t t91 = 19;

	t91 = (x1077<<((x1078/x1079)&x1080));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x1089 = 108U;
	static uint8_t x1090 = UINT8_MAX;
	int64_t x1091 = 15188814394760381LL;
	volatile int8_t x1092 = -1;
	int32_t t92 = -3994333;

	t92 = (x1089<<((x1090/x1091)&x1092));

	if (t92 != 108) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x1097 = 49U;
	uint8_t x1098 = 28U;
	int16_t x1099 = INT16_MAX;
	int64_t x1100 = INT64_MIN;
	int32_t t93 = 20396697;

	t93 = (x1097<<((x1098/x1099)&x1100));

	if (t93 != 49) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x1117 = UINT16_MAX;
	volatile int32_t x1118 = INT32_MAX;
	volatile int32_t x1119 = INT32_MAX;
	int32_t x1120 = 47557;
	volatile int32_t t94 = -212;

	t94 = (x1117<<((x1118/x1119)&x1120));

	if (t94 != 131070) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x1121 = UINT16_MAX;
	int64_t x1123 = INT64_MIN;
	volatile int32_t t95 = -1;

	t95 = (x1121<<((x1122/x1123)&x1124));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x1145 = INT16_MAX;
	volatile int8_t x1146 = 4;
	uint32_t x1147 = UINT32_MAX;
	int16_t x1148 = -1;
	int32_t t96 = 92398702;

	t96 = (x1145<<((x1146/x1147)&x1148));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1149 = 54;
	int32_t x1150 = -19282977;
	volatile uint64_t x1151 = 3257598LLU;
	static volatile int8_t x1152 = 14;
	int32_t t97 = -78862455;

	t97 = (x1149<<((x1150/x1151)&x1152));

	if (t97 != 884736) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x1153 = 1124580837170949089LL;
	int8_t x1154 = -1;
	static volatile int8_t x1155 = -1;
	int64_t x1156 = INT64_MIN;
	volatile int64_t t98 = -1LL;

	t98 = (x1153<<((x1154/x1155)&x1156));

	if (t98 != 1124580837170949089LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1162 = 11248156LLU;
	int64_t x1163 = -1LL;
	int32_t x1164 = 38;
	int32_t t99 = -358;

	t99 = (x1161<<((x1162/x1163)&x1164));

	if (t99 != 32767) { NG(); } else { ; }
	
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

