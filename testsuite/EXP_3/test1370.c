#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MAX;
int32_t x3 = INT32_MIN;
int32_t x49 = -2;
volatile int32_t t4 = 249924;
uint8_t x62 = 1U;
volatile uint64_t t5 = 464234091999LLU;
uint64_t x69 = 2334992LLU;
int8_t x71 = INT8_MIN;
uint8_t x72 = 1U;
uint32_t x83 = 41154U;
static int16_t x90 = INT16_MIN;
volatile uint64_t t8 = 142423929692672950LLU;
uint8_t x108 = 12U;
uint16_t x114 = UINT16_MAX;
int32_t x115 = -1;
uint32_t x160 = 1363U;
uint8_t x161 = 2U;
int16_t x163 = INT16_MIN;
uint32_t x199 = 192100U;
static int32_t t17 = 217286;
volatile int32_t t18 = -6332;
static int16_t x213 = -119;
int16_t x234 = INT16_MIN;
int32_t t23 = 7799086;
uint32_t t25 = 7158U;
int64_t x310 = -1LL;
int16_t x326 = INT16_MIN;
uint64_t x340 = UINT64_MAX;
volatile uint64_t x351 = 1962631036534LLU;
int16_t x352 = INT16_MIN;
volatile int64_t t33 = 430155843065LL;
volatile int8_t x373 = -1;
int32_t x387 = INT32_MIN;
int32_t x390 = 117;
static volatile uint64_t x391 = 4325LLU;
int16_t x392 = INT16_MIN;
int32_t t36 = 190585665;
static int8_t x397 = INT8_MIN;
int8_t x417 = 7;
int64_t x429 = INT64_MIN;
volatile int16_t x434 = -1;
int8_t x440 = -1;
volatile int32_t x447 = INT32_MIN;
static volatile uint8_t x453 = 3U;
uint16_t x454 = UINT16_MAX;
volatile int64_t x456 = 883214773884603488LL;
static int64_t x474 = -16301914165395LL;
int32_t x480 = INT32_MAX;
uint16_t x504 = 5915U;
volatile int64_t t49 = 2LL;
volatile uint16_t x505 = 3362U;
int32_t t50 = 6338438;
uint16_t x524 = 3675U;
volatile int32_t t52 = 169;
uint16_t x529 = UINT16_MAX;
int16_t x530 = INT16_MIN;
int32_t t53 = -1792;
uint32_t x560 = UINT32_MAX;
static uint32_t x609 = 37U;
uint64_t x612 = 3009447587055128LLU;
uint32_t t61 = 40U;
int32_t t67 = 706;
volatile int32_t x653 = -1158615;
static int64_t t68 = -139183115LL;
uint64_t x665 = 101032LLU;
static int64_t x685 = INT64_MAX;
int8_t x712 = INT8_MIN;
static volatile int64_t x717 = 52LL;
uint16_t x722 = 282U;
static int8_t x724 = -1;
int32_t x733 = INT32_MIN;
int16_t x758 = INT16_MAX;
volatile int32_t t78 = -1731570;
int32_t t84 = 26298;
static int8_t x802 = INT8_MAX;
int32_t x804 = 638047734;
int16_t x826 = INT16_MAX;
uint16_t x880 = 25965U;
static uint16_t x885 = UINT16_MAX;
static uint64_t x886 = 89LLU;
volatile int64_t x887 = -1LL;
uint32_t x888 = UINT32_MAX;
static volatile int32_t t93 = -172227;
int8_t x917 = INT8_MIN;
int8_t x918 = 14;
int8_t x948 = -1;
volatile int8_t x953 = -4;
uint32_t x956 = UINT32_MAX;
static uint8_t x957 = 31U;
volatile int64_t t99 = -12348148960LL;


void f0(void) {
	volatile uint64_t x1 = 1269772274106230986LLU;
	int8_t x4 = -52;
	uint64_t t0 = 53092LLU;

	t0 = ((x1-x2)%(x3<x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x13 = -36;
	uint16_t x14 = UINT16_MAX;
	uint64_t x15 = 62003LLU;
	int8_t x16 = -1;
	static volatile int32_t t1 = -107627429;

	t1 = ((x13-x14)%(x15<x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	int32_t x19 = -1;
	static uint16_t x20 = UINT16_MAX;
	int32_t t2 = 3;

	t2 = ((x17-x18)%(x19<x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 14U;
	int8_t x22 = INT8_MAX;
	int8_t x23 = INT8_MIN;
	uint8_t x24 = 97U;
	static volatile int32_t t3 = 723898793;

	t3 = ((x21-x22)%(x23<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x50 = INT8_MIN;
	volatile int16_t x51 = INT16_MIN;
	int32_t x52 = -13974;

	t4 = ((x49-x50)%(x51<x52));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x61 = 5083158398154287235LLU;
	static uint64_t x63 = 227961974842888LLU;
	int64_t x64 = INT64_MAX;

	t5 = ((x61-x62)%(x63<x64));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x70 = UINT8_MAX;
	volatile uint64_t t6 = 569261LLU;

	t6 = ((x69-x70)%(x71<x72));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x81 = -1;
	uint32_t x82 = UINT32_MAX;
	uint64_t x84 = 1847929541089053567LLU;
	static volatile uint32_t t7 = 10246466U;

	t7 = ((x81-x82)%(x83<x84));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int64_t x91 = -2321711079418LL;
	uint64_t x92 = UINT64_MAX;

	t8 = ((x89-x90)%(x91<x92));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x97 = UINT16_MAX;
	uint8_t x98 = 0U;
	volatile int16_t x99 = 1;
	uint32_t x100 = 917614U;
	volatile int32_t t9 = 245431;

	t9 = ((x97-x98)%(x99<x100));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x105 = UINT32_MAX;
	uint8_t x106 = UINT8_MAX;
	static volatile uint8_t x107 = 0U;
	static volatile uint32_t t10 = 379U;

	t10 = ((x105-x106)%(x107<x108));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x113 = UINT8_MAX;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t11 = 558037;

	t11 = ((x113-x114)%(x115<x116));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x129 = INT64_MIN;
	int64_t x130 = -1LL;
	int8_t x131 = INT8_MIN;
	int32_t x132 = 56517579;
	int64_t t12 = 60492508965989LL;

	t12 = ((x129-x130)%(x131<x132));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = -1;
	int32_t x143 = -1;
	static uint16_t x144 = 86U;
	int32_t t13 = -18256;

	t13 = ((x141-x142)%(x143<x144));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x157 = 119;
	static uint32_t x158 = UINT32_MAX;
	static volatile int8_t x159 = INT8_MAX;
	uint32_t t14 = 60U;

	t14 = ((x157-x158)%(x159<x160));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x162 = 235U;
	int64_t x164 = -1LL;
	uint32_t t15 = 147214U;

	t15 = ((x161-x162)%(x163<x164));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x181 = 29U;
	volatile uint8_t x182 = 6U;
	int32_t x183 = 1;
	static uint32_t x184 = 5U;
	static volatile int32_t t16 = 23197;

	t16 = ((x181-x182)%(x183<x184));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x197 = 1;
	static int8_t x198 = INT8_MIN;
	static uint32_t x200 = 6577563U;

	t17 = ((x197-x198)%(x199<x200));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x205 = INT16_MAX;
	static uint16_t x206 = 240U;
	volatile int64_t x207 = -148LL;
	int32_t x208 = INT32_MAX;

	t18 = ((x205-x206)%(x207<x208));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	volatile int32_t x212 = 14968;
	int32_t t19 = -1656;

	t19 = ((x209-x210)%(x211<x212));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x214 = 71818197733435LLU;
	static int64_t x215 = 142LL;
	static int64_t x216 = INT64_MAX;
	volatile uint64_t t20 = 17LLU;

	t20 = ((x213-x214)%(x215<x216));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x233 = 13;
	int8_t x235 = INT8_MAX;
	uint16_t x236 = 7315U;
	volatile int32_t t21 = -859192;

	t21 = ((x233-x234)%(x235<x236));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x253 = -1LL;
	static volatile uint8_t x254 = UINT8_MAX;
	int16_t x255 = -21;
	volatile int8_t x256 = -1;
	static int64_t t22 = -10872333919LL;

	t22 = ((x253-x254)%(x255<x256));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x257 = -1;
	static int32_t x258 = INT32_MIN;
	static volatile int8_t x259 = -1;
	int32_t x260 = 3435445;

	t23 = ((x257-x258)%(x259<x260));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x261 = UINT8_MAX;
	volatile uint64_t x262 = UINT64_MAX;
	int8_t x263 = INT8_MIN;
	volatile int64_t x264 = 2023676LL;
	static volatile uint64_t t24 = 13732727140LLU;

	t24 = ((x261-x262)%(x263<x264));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x266 = 299U;
	volatile uint32_t x267 = 44554209U;
	volatile int8_t x268 = -8;

	t25 = ((x265-x266)%(x267<x268));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MAX;
	uint32_t x280 = 2013249U;
	int64_t t26 = -13760464005628138LL;

	t26 = ((x277-x278)%(x279<x280));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x293 = 1720U;
	uint32_t x294 = 191445932U;
	int8_t x295 = -1;
	static volatile int64_t x296 = INT64_MAX;
	static volatile uint32_t t27 = 15000U;

	t27 = ((x293-x294)%(x295<x296));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x311 = 17U;
	volatile int32_t x312 = INT32_MAX;
	int64_t t28 = 52661056875526LL;

	t28 = ((x309-x310)%(x311<x312));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x325 = -1129630;
	static uint32_t x327 = 2102371417U;
	int32_t x328 = INT32_MIN;
	static int32_t t29 = -3;

	t29 = ((x325-x326)%(x327<x328));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x337 = 2U;
	uint32_t x338 = UINT32_MAX;
	volatile uint32_t x339 = UINT32_MAX;
	uint32_t t30 = 4080702U;

	t30 = ((x337-x338)%(x339<x340));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x341 = 59U;
	volatile uint32_t x342 = 6U;
	static int16_t x343 = 7923;
	uint64_t x344 = UINT64_MAX;
	volatile uint32_t t31 = 3804866U;

	t31 = ((x341-x342)%(x343<x344));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x349 = INT32_MIN;
	static int32_t x350 = -4616;
	int32_t t32 = -1161;

	t32 = ((x349-x350)%(x351<x352));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x365 = -1LL;
	int64_t x366 = -326907127LL;
	int8_t x367 = INT8_MAX;
	uint32_t x368 = 980U;

	t33 = ((x365-x366)%(x367<x368));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x374 = INT8_MIN;
	volatile int16_t x375 = -1;
	static uint16_t x376 = 2U;
	volatile int32_t t34 = -5347;

	t34 = ((x373-x374)%(x375<x376));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x385 = -15547189;
	static uint32_t x386 = 1415938884U;
	volatile int16_t x388 = INT16_MIN;
	static volatile uint32_t t35 = 641442754U;

	t35 = ((x385-x386)%(x387<x388));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x389 = -41;

	t36 = ((x389-x390)%(x391<x392));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x398 = INT32_MIN;
	int8_t x399 = 2;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t37 = -19;

	t37 = ((x397-x398)%(x399<x400));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	static volatile int8_t x412 = -1;
	int32_t t38 = -1483;

	t38 = ((x409-x410)%(x411<x412));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x418 = -1;
	static volatile int32_t x419 = INT32_MIN;
	static int16_t x420 = -1;
	volatile int32_t t39 = 1350;

	t39 = ((x417-x418)%(x419<x420));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x430 = INT8_MIN;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	static volatile int64_t t40 = 3955248112015LL;

	t40 = ((x429-x430)%(x431<x432));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x433 = -1LL;
	volatile int64_t x435 = INT64_MIN;
	int64_t x436 = -3648230LL;
	int64_t t41 = -876020549266754180LL;

	t41 = ((x433-x434)%(x435<x436));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x437 = 90839458776LL;
	static volatile uint32_t x438 = 29319U;
	volatile uint64_t x439 = 6346463787400LLU;
	volatile int64_t t42 = -993LL;

	t42 = ((x437-x438)%(x439<x440));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x441 = 8U;
	int32_t x442 = -17350;
	uint16_t x443 = 6U;
	static int64_t x444 = INT64_MAX;
	int32_t t43 = 38324226;

	t43 = ((x441-x442)%(x443<x444));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x445 = 8872376U;
	uint64_t x446 = UINT64_MAX;
	int64_t x448 = INT64_MAX;
	volatile uint64_t t44 = 181265LLU;

	t44 = ((x445-x446)%(x447<x448));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x455 = 2LLU;
	volatile int32_t t45 = 379;

	t45 = ((x453-x454)%(x455<x456));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x473 = -1LL;
	int16_t x475 = 0;
	uint8_t x476 = 1U;
	int64_t t46 = 43429243571LL;

	t46 = ((x473-x474)%(x475<x476));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x477 = 234U;
	int8_t x478 = INT8_MIN;
	int8_t x479 = INT8_MIN;
	volatile uint32_t t47 = 3838U;

	t47 = ((x477-x478)%(x479<x480));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x493 = UINT16_MAX;
	volatile uint32_t x494 = UINT32_MAX;
	int16_t x495 = INT16_MIN;
	static volatile int8_t x496 = INT8_MIN;
	uint32_t t48 = 6U;

	t48 = ((x493-x494)%(x495<x496));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x501 = INT64_MIN;
	volatile int8_t x502 = 0;
	int8_t x503 = INT8_MIN;

	t49 = ((x501-x502)%(x503<x504));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x506 = -110;
	int16_t x507 = -137;
	volatile int32_t x508 = INT32_MAX;

	t50 = ((x505-x506)%(x507<x508));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x517 = 2;
	uint32_t x518 = 673U;
	uint64_t x519 = 0LLU;
	int16_t x520 = -186;
	uint32_t t51 = 1305467U;

	t51 = ((x517-x518)%(x519<x520));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x521 = 0;
	int32_t x522 = -44064;
	int8_t x523 = -1;

	t52 = ((x521-x522)%(x523<x524));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x531 = INT16_MIN;
	int32_t x532 = 31202881;

	t53 = ((x529-x530)%(x531<x532));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x537 = INT8_MAX;
	int8_t x538 = INT8_MIN;
	uint16_t x539 = 4U;
	uint64_t x540 = 3494127230LLU;
	volatile int32_t t54 = 12691;

	t54 = ((x537-x538)%(x539<x540));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x545 = INT8_MAX;
	uint32_t x546 = 1838U;
	static uint32_t x547 = 308U;
	static uint16_t x548 = UINT16_MAX;
	static uint32_t t55 = 4U;

	t55 = ((x545-x546)%(x547<x548));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x549 = INT64_MIN;
	static uint64_t x550 = UINT64_MAX;
	int16_t x551 = -1;
	int32_t x552 = INT32_MAX;
	uint64_t t56 = 38341LLU;

	t56 = ((x549-x550)%(x551<x552));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x557 = UINT64_MAX;
	volatile int32_t x558 = -1;
	volatile int64_t x559 = 26660LL;
	uint64_t t57 = 2158582849999153LLU;

	t57 = ((x557-x558)%(x559<x560));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x561 = 1444299;
	int32_t x562 = INT32_MAX;
	volatile int8_t x563 = -1;
	int8_t x564 = INT8_MAX;
	volatile int32_t t58 = 58448800;

	t58 = ((x561-x562)%(x563<x564));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x569 = INT8_MIN;
	static volatile int64_t x570 = -1LL;
	int32_t x571 = INT32_MIN;
	int8_t x572 = 14;
	volatile int64_t t59 = -1288LL;

	t59 = ((x569-x570)%(x571<x572));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x577 = 1;
	int64_t x578 = -37061334466266883LL;
	static int8_t x579 = INT8_MIN;
	volatile int16_t x580 = -1;
	int64_t t60 = 23038626LL;

	t60 = ((x577-x578)%(x579<x580));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x610 = -1;
	uint32_t x611 = 1350136409U;

	t61 = ((x609-x610)%(x611<x612));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x617 = INT32_MIN;
	static volatile int64_t x618 = INT64_MIN;
	int16_t x619 = 0;
	uint32_t x620 = UINT32_MAX;
	int64_t t62 = -359938LL;

	t62 = ((x617-x618)%(x619<x620));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x629 = 61;
	int8_t x630 = INT8_MIN;
	static uint32_t x631 = 42U;
	int8_t x632 = -32;
	int32_t t63 = 1;

	t63 = ((x629-x630)%(x631<x632));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x633 = 8879LL;
	int8_t x634 = -1;
	int32_t x635 = 320929823;
	volatile int32_t x636 = INT32_MAX;
	volatile int64_t t64 = -34238670421184LL;

	t64 = ((x633-x634)%(x635<x636));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x637 = -2;
	uint8_t x638 = UINT8_MAX;
	int32_t x639 = INT32_MIN;
	int8_t x640 = INT8_MIN;
	int32_t t65 = 5297;

	t65 = ((x637-x638)%(x639<x640));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x645 = INT16_MAX;
	static uint32_t x646 = 396556U;
	static volatile int64_t x647 = INT64_MIN;
	static int64_t x648 = -11480903084LL;
	volatile uint32_t t66 = 181711U;

	t66 = ((x645-x646)%(x647<x648));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x649 = INT8_MIN;
	int16_t x650 = INT16_MAX;
	static int8_t x651 = INT8_MIN;
	int64_t x652 = INT64_MAX;

	t67 = ((x649-x650)%(x651<x652));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x654 = INT64_MIN;
	int64_t x655 = 0LL;
	int64_t x656 = INT64_MAX;

	t68 = ((x653-x654)%(x655<x656));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x666 = INT32_MIN;
	int16_t x667 = INT16_MIN;
	int32_t x668 = 7;
	volatile uint64_t t69 = 3LLU;

	t69 = ((x665-x666)%(x667<x668));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x677 = -1;
	int32_t x678 = INT32_MIN;
	volatile int32_t x679 = 1;
	uint8_t x680 = 3U;
	static int32_t t70 = -3452;

	t70 = ((x677-x678)%(x679<x680));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x686 = UINT32_MAX;
	int32_t x687 = -326222;
	int16_t x688 = 1;
	static int64_t t71 = 9LL;

	t71 = ((x685-x686)%(x687<x688));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x693 = 133U;
	static int16_t x694 = INT16_MIN;
	int8_t x695 = 1;
	int32_t x696 = INT32_MAX;
	volatile int32_t t72 = -180896;

	t72 = ((x693-x694)%(x695<x696));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x709 = -6;
	volatile int64_t x710 = -1LL;
	int64_t x711 = INT64_MIN;
	static volatile int64_t t73 = -7207837338196254LL;

	t73 = ((x709-x710)%(x711<x712));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x718 = -29;
	uint8_t x719 = 78U;
	volatile int64_t x720 = 11137760677LL;
	int64_t t74 = -62979340961582693LL;

	t74 = ((x717-x718)%(x719<x720));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x721 = INT8_MAX;
	volatile int32_t x723 = INT32_MIN;
	static volatile int32_t t75 = 26667;

	t75 = ((x721-x722)%(x723<x724));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x729 = INT8_MAX;
	static int32_t x730 = INT32_MAX;
	int8_t x731 = -1;
	int16_t x732 = 197;
	static volatile int32_t t76 = -999;

	t76 = ((x729-x730)%(x731<x732));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x734 = INT32_MIN;
	uint32_t x735 = 2619U;
	uint32_t x736 = 29431U;
	volatile int32_t t77 = 25;

	t77 = ((x733-x734)%(x735<x736));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x757 = INT8_MIN;
	uint8_t x759 = 0U;
	uint32_t x760 = 12U;

	t78 = ((x757-x758)%(x759<x760));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x765 = 3U;
	uint64_t x766 = 30LLU;
	int64_t x767 = -990606905LL;
	volatile int64_t x768 = 11740700032591LL;
	volatile uint64_t t79 = 166977748178959891LLU;

	t79 = ((x765-x766)%(x767<x768));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x769 = 7;
	static int32_t x770 = -1;
	int16_t x771 = -1;
	uint16_t x772 = 4036U;
	int32_t t80 = -5;

	t80 = ((x769-x770)%(x771<x772));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x773 = 4U;
	int8_t x774 = 1;
	int16_t x775 = -5;
	int16_t x776 = INT16_MAX;
	volatile int32_t t81 = -2232;

	t81 = ((x773-x774)%(x775<x776));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x781 = 735436382LL;
	int32_t x782 = INT32_MIN;
	int8_t x783 = 0;
	int16_t x784 = INT16_MAX;
	int64_t t82 = -1LL;

	t82 = ((x781-x782)%(x783<x784));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x789 = INT8_MIN;
	static int16_t x790 = 12608;
	static volatile int8_t x791 = INT8_MIN;
	int64_t x792 = INT64_MAX;
	static int32_t t83 = 7432;

	t83 = ((x789-x790)%(x791<x792));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x793 = -3;
	static int8_t x794 = -9;
	int64_t x795 = INT64_MIN;
	int8_t x796 = INT8_MIN;

	t84 = ((x793-x794)%(x795<x796));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x801 = INT8_MIN;
	int32_t x803 = INT32_MIN;
	int32_t t85 = -6050;

	t85 = ((x801-x802)%(x803<x804));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x825 = -1;
	volatile int16_t x827 = -34;
	volatile int8_t x828 = -1;
	volatile int32_t t86 = -59914;

	t86 = ((x825-x826)%(x827<x828));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x829 = INT32_MAX;
	uint8_t x830 = 0U;
	static int64_t x831 = INT64_MIN;
	int16_t x832 = INT16_MIN;
	volatile int32_t t87 = -1584336;

	t87 = ((x829-x830)%(x831<x832));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x837 = 176463250934LLU;
	static int8_t x838 = INT8_MIN;
	uint16_t x839 = 1U;
	static int8_t x840 = INT8_MAX;
	uint64_t t88 = 130305257842LLU;

	t88 = ((x837-x838)%(x839<x840));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x861 = -1;
	int8_t x862 = -1;
	uint16_t x863 = UINT16_MAX;
	volatile int32_t x864 = INT32_MAX;
	int32_t t89 = 116;

	t89 = ((x861-x862)%(x863<x864));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x873 = -48785LL;
	volatile int8_t x874 = -1;
	int64_t x875 = INT64_MIN;
	uint16_t x876 = 122U;
	volatile int64_t t90 = 836LL;

	t90 = ((x873-x874)%(x875<x876));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x877 = UINT8_MAX;
	volatile uint16_t x878 = 1U;
	int8_t x879 = 19;
	static int32_t t91 = 50366;

	t91 = ((x877-x878)%(x879<x880));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t t92 = 2LLU;

	t92 = ((x885-x886)%(x887<x888));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x889 = UINT16_MAX;
	volatile int16_t x890 = -226;
	int8_t x891 = INT8_MIN;
	volatile uint16_t x892 = 283U;

	t93 = ((x889-x890)%(x891<x892));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x901 = UINT8_MAX;
	static int16_t x902 = 63;
	static int8_t x903 = -1;
	int32_t x904 = INT32_MAX;
	int32_t t94 = 23;

	t94 = ((x901-x902)%(x903<x904));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x905 = 0U;
	static int8_t x906 = -1;
	uint8_t x907 = UINT8_MAX;
	uint16_t x908 = 19692U;
	uint32_t t95 = 15513486U;

	t95 = ((x905-x906)%(x907<x908));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x919 = INT64_MIN;
	int8_t x920 = -62;
	static volatile int32_t t96 = -8003;

	t96 = ((x917-x918)%(x919<x920));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x945 = INT32_MAX;
	static uint32_t x946 = 196U;
	int64_t x947 = INT64_MIN;
	static uint32_t t97 = 39U;

	t97 = ((x945-x946)%(x947<x948));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x954 = 105137880LLU;
	int32_t x955 = INT32_MAX;
	volatile uint64_t t98 = 4746880509555053433LLU;

	t98 = ((x953-x954)%(x955<x956));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x958 = 4635355689LL;
	int64_t x959 = INT64_MIN;
	uint32_t x960 = 20284329U;

	t99 = ((x957-x958)%(x959<x960));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

