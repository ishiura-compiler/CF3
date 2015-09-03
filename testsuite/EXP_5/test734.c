#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x25 = UINT64_MAX;
int16_t x26 = -14858;
volatile uint8_t x28 = 24U;
volatile int32_t t2 = -317;
uint32_t x62 = 1718812U;
int64_t x64 = -1LL;
int8_t x69 = INT8_MAX;
static int32_t x70 = INT32_MIN;
int8_t x83 = -1;
static volatile int16_t x90 = INT16_MAX;
uint16_t x91 = 3200U;
int16_t x92 = -1;
static int32_t t9 = -89717409;
static int32_t t10 = -127531828;
int64_t x126 = INT64_MIN;
int64_t x156 = -31LL;
int32_t t13 = 15975;
int32_t x182 = INT32_MIN;
int16_t x217 = 23;
int8_t x220 = -1;
uint16_t x237 = 2742U;
int16_t x240 = INT16_MIN;
int16_t x241 = INT16_MAX;
int8_t x249 = INT8_MAX;
uint64_t x282 = 49427963898631033LLU;
int8_t x284 = 3;
int64_t x331 = -1LL;
int8_t x332 = INT8_MAX;
uint8_t x370 = UINT8_MAX;
uint16_t x374 = UINT16_MAX;
static volatile uint32_t t28 = UINT32_MAX;
int8_t x388 = 24;
volatile uint32_t x404 = 107218U;
static int32_t t31 = -1003940100;
static uint32_t x413 = 12U;
volatile uint32_t t32 = 266820789U;
static int32_t t35 = -10439509;
uint16_t x485 = 883U;
uint32_t x487 = UINT32_MAX;
int8_t x488 = INT8_MIN;
volatile int32_t x539 = -1;
uint16_t x569 = 121U;
int16_t x582 = INT16_MIN;
uint64_t x599 = 32LLU;
int16_t x600 = 7;
volatile int16_t x633 = 245;
int8_t x663 = -1;
volatile int64_t x666 = INT64_MAX;
volatile uint32_t x689 = 145999U;
static int16_t x691 = INT16_MIN;
static uint32_t t50 = 11368U;
int32_t x699 = -1;
int16_t x711 = INT16_MIN;
int8_t x714 = -43;
int32_t x715 = -1;
volatile int32_t t55 = -116;
uint16_t x782 = 2U;
uint16_t x833 = 14790U;
static int8_t x835 = 1;
uint8_t x856 = 86U;
static uint64_t x869 = 6738583583357664551LLU;
volatile uint64_t x877 = UINT64_MAX;
volatile uint64_t t67 = UINT64_MAX;
static int8_t x910 = 1;
int32_t x911 = -1;
int32_t x946 = INT32_MAX;
volatile uint8_t x948 = 26U;
int16_t x952 = -1;
int64_t x953 = INT64_MAX;
int16_t x958 = -1;
static volatile int32_t t72 = INT32_MAX;
static int32_t t76 = 14411;
uint64_t t78 = 979588174148628LLU;
uint64_t x1037 = 145844385270080063LLU;
int8_t x1044 = -1;
int8_t x1052 = -54;
uint64_t t82 = 15347619LLU;
static volatile uint8_t x1070 = 0U;
int32_t x1082 = INT32_MAX;
volatile int32_t x1112 = -1;
volatile int64_t t86 = -3289191262957LL;
uint16_t x1136 = 5U;
int64_t x1169 = INT64_MAX;
volatile uint64_t x1171 = UINT64_MAX;
int32_t x1236 = INT32_MIN;
static uint16_t x1254 = 0U;
int64_t x1264 = -1LL;
uint32_t t91 = 108U;
static int32_t x1293 = INT32_MAX;
int8_t x1302 = 0;
static volatile uint64_t t93 = 251489996146057635LLU;
static int32_t x1313 = 4;
uint64_t x1321 = 75268855483543LLU;
uint16_t x1323 = 1U;
static uint64_t x1337 = 1370950719778959LLU;
int8_t x1358 = INT8_MIN;


void f0(void) {
	uint16_t x13 = 909U;
	int32_t x14 = 640934359;
	volatile int32_t x15 = INT32_MAX;
	int16_t x16 = 23;
	static int32_t t0 = -55188;

	t0 = (x13<<((x14%x15)%x16));

	if (t0 != 58176) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x27 = 62LLU;
	volatile uint64_t t1 = 512LLU;

	t1 = (x25<<((x26%x27)%x28));

	if (t1 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x41 = INT8_MAX;
	int8_t x42 = 17;
	volatile uint8_t x43 = 8U;
	int64_t x44 = -30446LL;

	t2 = (x41<<((x42%x43)%x44));

	if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x53 = INT8_MAX;
	static uint8_t x54 = UINT8_MAX;
	int64_t x55 = 177661LL;
	uint32_t x56 = 3U;
	volatile int32_t t3 = 0;

	t3 = (x53<<((x54%x55)%x56));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x61 = INT8_MAX;
	int64_t x63 = -16216LL;
	int32_t t4 = -31603298;

	t4 = (x61<<((x62%x63)%x64));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x65 = 8841U;
	uint16_t x66 = UINT16_MAX;
	static int32_t x67 = -1;
	volatile uint64_t x68 = UINT64_MAX;
	volatile int32_t t5 = 1;

	t5 = (x65<<((x66%x67)%x68));

	if (t5 != 8841) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t6 = -128300;

	t6 = (x69<<((x70%x71)%x72));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	static int32_t x79 = 1360278;
	int8_t x80 = -1;
	int32_t t7 = -57;

	t7 = (x77<<((x78%x79)%x80));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int8_t x82 = INT8_MIN;
	uint32_t x84 = 1254580U;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = (x81<<((x82%x83)%x84));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x89 = UINT16_MAX;

	t9 = (x89<<((x90%x91)%x92));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x97 = 894;
	volatile int32_t x98 = INT32_MIN;
	int8_t x99 = INT8_MAX;
	volatile int64_t x100 = -1LL;

	t10 = (x97<<((x98%x99)%x100));

	if (t10 != 894) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x101 = UINT32_MAX;
	int32_t x102 = INT32_MAX;
	volatile uint16_t x103 = 31U;
	int32_t x104 = INT32_MAX;
	uint32_t t11 = 5417068U;

	t11 = (x101<<((x102%x103)%x104));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x125 = 53U;
	static int32_t x127 = INT32_MIN;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t12 = 42728;

	t12 = (x125<<((x126%x127)%x128));

	if (t12 != 53) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x153 = 30;
	static uint8_t x154 = 6U;
	int64_t x155 = INT64_MIN;

	t13 = (x153<<((x154%x155)%x156));

	if (t13 != 1920) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x183 = -1LL;
	static int8_t x184 = INT8_MIN;
	uint32_t t14 = UINT32_MAX;

	t14 = (x181<<((x182%x183)%x184));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MAX;
	volatile int8_t x195 = -1;
	int32_t x196 = -92232;
	uint32_t t15 = UINT32_MAX;

	t15 = (x193<<((x194%x195)%x196));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x218 = INT64_MIN;
	static int64_t x219 = INT64_MIN;
	int32_t t16 = -1;

	t16 = (x217<<((x218%x219)%x220));

	if (t16 != 23) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x238 = INT16_MIN;
	int64_t x239 = INT64_MIN;
	static volatile int32_t t17 = -57042;

	t17 = (x237<<((x238%x239)%x240));

	if (t17 != 2742) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x242 = -1;
	uint8_t x243 = 1U;
	uint64_t x244 = 374610LLU;
	static int32_t t18 = 19582788;

	t18 = (x241<<((x242%x243)%x244));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x250 = -1;
	volatile int32_t x251 = INT32_MAX;
	int8_t x252 = 1;
	int32_t t19 = 103220551;

	t19 = (x249<<((x250%x251)%x252));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x281 = 1U;
	static volatile int8_t x283 = 14;
	volatile int32_t t20 = 295740;

	t20 = (x281<<((x282%x283)%x284));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x289 = UINT8_MAX;
	int8_t x290 = -1;
	int32_t x291 = -1;
	static int16_t x292 = -1910;
	int32_t t21 = 1;

	t21 = (x289<<((x290%x291)%x292));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x329 = 6196U;
	volatile uint32_t x330 = 635U;
	int32_t t22 = -53062980;

	t22 = (x329<<((x330%x331)%x332));

	if (t22 != 6196) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x333 = INT32_MAX;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MIN;
	uint8_t x336 = 1U;
	int32_t t23 = INT32_MAX;

	t23 = (x333<<((x334%x335)%x336));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x345 = UINT16_MAX;
	uint16_t x346 = 2U;
	int16_t x347 = -6;
	uint8_t x348 = UINT8_MAX;
	static volatile int32_t t24 = 318847296;

	t24 = (x345<<((x346%x347)%x348));

	if (t24 != 262140) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x357 = 31279U;
	int32_t x358 = INT32_MAX;
	uint8_t x359 = 27U;
	int32_t x360 = -1;
	uint32_t t25 = 1036U;

	t25 = (x357<<((x358%x359)%x360));

	if (t25 != 31279U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x369 = 3124573;
	volatile int32_t x371 = -1;
	int32_t x372 = -1;
	int32_t t26 = 669;

	t26 = (x369<<((x370%x371)%x372));

	if (t26 != 3124573) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x373 = 2609864LL;
	int64_t x375 = -135503321403843LL;
	int8_t x376 = -13;
	static volatile int64_t t27 = 74626663109557LL;

	t27 = (x373<<((x374%x375)%x376));

	if (t27 != 10439456LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MAX;
	int16_t x380 = -1;

	t28 = (x377<<((x378%x379)%x380));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x381 = 0U;
	int32_t x382 = 3;
	volatile uint16_t x383 = UINT16_MAX;
	int32_t x384 = INT32_MAX;
	static int32_t t29 = 22;

	t29 = (x381<<((x382%x383)%x384));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x385 = 7U;
	int64_t x386 = -1LL;
	uint8_t x387 = 1U;
	static int32_t t30 = 118;

	t30 = (x385<<((x386%x387)%x388));

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x401 = 393U;
	int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;

	t31 = (x401<<((x402%x403)%x404));

	if (t31 != 393) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x414 = INT64_MAX;
	volatile int64_t x415 = INT64_MAX;
	static int8_t x416 = -1;

	t32 = (x413<<((x414%x415)%x416));

	if (t32 != 12U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x421 = INT16_MAX;
	uint64_t x422 = UINT64_MAX;
	static uint16_t x423 = 12U;
	static volatile int16_t x424 = -30;
	int32_t t33 = -174708289;

	t33 = (x421<<((x422%x423)%x424));

	if (t33 != 262136) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x433 = UINT32_MAX;
	uint32_t x434 = UINT32_MAX;
	int64_t x435 = INT64_MIN;
	uint16_t x436 = UINT16_MAX;
	static uint32_t t34 = UINT32_MAX;

	t34 = (x433<<((x434%x435)%x436));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x437 = 0;
	volatile int64_t x438 = 43552LL;
	uint8_t x439 = UINT8_MAX;
	int8_t x440 = -1;

	t35 = (x437<<((x438%x439)%x440));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x486 = INT64_MIN;
	volatile int32_t t36 = 1;

	t36 = (x485<<((x486%x487)%x488));

	if (t36 != 883) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x489 = UINT16_MAX;
	int32_t x490 = INT32_MAX;
	static int64_t x491 = -1LL;
	static int32_t x492 = INT32_MAX;
	int32_t t37 = -19717;

	t37 = (x489<<((x490%x491)%x492));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x521 = 11U;
	static volatile int8_t x522 = 2;
	int8_t x523 = -1;
	static int32_t x524 = -1;
	int32_t t38 = 1682;

	t38 = (x521<<((x522%x523)%x524));

	if (t38 != 11) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x537 = 0U;
	int32_t x538 = INT32_MIN;
	int16_t x540 = -1;
	volatile int32_t t39 = -125;

	t39 = (x537<<((x538%x539)%x540));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x561 = 1103143585362365LL;
	int32_t x562 = INT32_MAX;
	int8_t x563 = -1;
	int16_t x564 = INT16_MIN;
	volatile int64_t t40 = 1993314452LL;

	t40 = (x561<<((x562%x563)%x564));

	if (t40 != 1103143585362365LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x570 = INT64_MIN;
	static int16_t x571 = 736;
	static int16_t x572 = -1;
	static volatile int32_t t41 = -76;

	t41 = (x569<<((x570%x571)%x572));

	if (t41 != 121) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x581 = UINT64_MAX;
	int16_t x583 = INT16_MAX;
	int16_t x584 = 1;
	static uint64_t t42 = UINT64_MAX;

	t42 = (x581<<((x582%x583)%x584));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x597 = UINT8_MAX;
	int16_t x598 = INT16_MIN;
	volatile int32_t t43 = -44;

	t43 = (x597<<((x598%x599)%x600));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x634 = 1;
	volatile int32_t x635 = INT32_MAX;
	volatile int32_t x636 = -1;
	static int32_t t44 = -204;

	t44 = (x633<<((x634%x635)%x636));

	if (t44 != 245) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x641 = UINT32_MAX;
	volatile int16_t x642 = INT16_MIN;
	volatile int16_t x643 = INT16_MIN;
	int64_t x644 = INT64_MIN;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (x641<<((x642%x643)%x644));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x657 = 495U;
	int32_t x658 = INT32_MIN;
	volatile uint16_t x659 = 1U;
	uint32_t x660 = 96013249U;
	static int32_t t46 = 124;

	t46 = (x657<<((x658%x659)%x660));

	if (t46 != 495) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x661 = 954285124219LLU;
	int32_t x662 = -1;
	int8_t x664 = INT8_MIN;
	uint64_t t47 = 343446976LLU;

	t47 = (x661<<((x662%x663)%x664));

	if (t47 != 954285124219LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x665 = 233910;
	uint16_t x667 = 41U;
	static volatile uint32_t x668 = 399474508U;
	int32_t t48 = -25911;

	t48 = (x665<<((x666%x667)%x668));

	if (t48 != 29940480) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x673 = UINT8_MAX;
	int64_t x674 = -1LL;
	int16_t x675 = 2;
	volatile int64_t x676 = -1LL;
	int32_t t49 = -6;

	t49 = (x673<<((x674%x675)%x676));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x690 = 14U;
	volatile uint8_t x692 = 34U;

	t50 = (x689<<((x690%x691)%x692));

	if (t50 != 2392047616U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x697 = 58U;
	int8_t x698 = INT8_MAX;
	uint8_t x700 = UINT8_MAX;
	int32_t t51 = 565539163;

	t51 = (x697<<((x698%x699)%x700));

	if (t51 != 58) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x705 = 109;
	uint64_t x706 = UINT64_MAX;
	static int8_t x707 = -1;
	uint64_t x708 = 5682129280334988LLU;
	int32_t t52 = 6;

	t52 = (x705<<((x706%x707)%x708));

	if (t52 != 109) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x709 = INT8_MAX;
	static volatile int16_t x710 = INT16_MIN;
	uint16_t x712 = UINT16_MAX;
	static int32_t t53 = -3225106;

	t53 = (x709<<((x710%x711)%x712));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x713 = 0;
	static int32_t x716 = INT32_MIN;
	int32_t t54 = 42423102;

	t54 = (x713<<((x714%x715)%x716));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x717 = 0;
	int32_t x718 = -1505665;
	int16_t x719 = -1;
	int16_t x720 = -1;

	t55 = (x717<<((x718%x719)%x720));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x721 = 402;
	uint16_t x722 = UINT16_MAX;
	uint64_t x723 = UINT64_MAX;
	uint8_t x724 = 81U;
	int32_t t56 = 33;

	t56 = (x721<<((x722%x723)%x724));

	if (t56 != 25728) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x733 = 2388561370LLU;
	uint8_t x734 = UINT8_MAX;
	int8_t x735 = -1;
	uint8_t x736 = 3U;
	uint64_t t57 = 191LLU;

	t57 = (x733<<((x734%x735)%x736));

	if (t57 != 2388561370LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x761 = 320U;
	int64_t x762 = -2151LL;
	int8_t x763 = 3;
	static uint8_t x764 = UINT8_MAX;
	volatile int32_t t58 = -3915926;

	t58 = (x761<<((x762%x763)%x764));

	if (t58 != 320) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x781 = 181172954LL;
	volatile int16_t x783 = -4;
	int64_t x784 = -1LL;
	volatile int64_t t59 = 4LL;

	t59 = (x781<<((x782%x783)%x784));

	if (t59 != 181172954LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x809 = INT8_MAX;
	int8_t x810 = INT8_MAX;
	int64_t x811 = INT64_MAX;
	int64_t x812 = -1LL;
	int32_t t60 = -492;

	t60 = (x809<<((x810%x811)%x812));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x834 = INT64_MIN;
	static int16_t x836 = -178;
	int32_t t61 = 7;

	t61 = (x833<<((x834%x835)%x836));

	if (t61 != 14790) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x841 = 6;
	uint32_t x842 = 7547U;
	int16_t x843 = 8;
	volatile int8_t x844 = -27;
	int32_t t62 = 93;

	t62 = (x841<<((x842%x843)%x844));

	if (t62 != 48) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x849 = INT16_MAX;
	int32_t x850 = -1;
	static volatile uint16_t x851 = UINT16_MAX;
	static uint32_t x852 = 3U;
	int32_t t63 = -407;

	t63 = (x849<<((x850%x851)%x852));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x853 = UINT32_MAX;
	int8_t x854 = 32;
	volatile uint8_t x855 = 3U;
	uint32_t t64 = 13392U;

	t64 = (x853<<((x854%x855)%x856));

	if (t64 != 4294967292U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x861 = INT16_MAX;
	volatile uint32_t x862 = UINT32_MAX;
	static int32_t x863 = 1941351;
	volatile int64_t x864 = -1LL;
	int32_t t65 = -1034369;

	t65 = (x861<<((x862%x863)%x864));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x870 = 1;
	uint32_t x871 = 295964U;
	uint32_t x872 = 57224U;
	static volatile uint64_t t66 = 216791LLU;

	t66 = (x869<<((x870%x871)%x872));

	if (t66 != 13477167166715329102LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x878 = -4435;
	static int64_t x879 = -1LL;
	static uint64_t x880 = UINT64_MAX;

	t67 = (x877<<((x878%x879)%x880));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x909 = 3;
	int32_t x912 = INT32_MAX;
	volatile int32_t t68 = 1;

	t68 = (x909<<((x910%x911)%x912));

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x945 = 0;
	static uint32_t x947 = 1527U;
	volatile int32_t t69 = 358733837;

	t69 = (x945<<((x946%x947)%x948));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x949 = INT16_MAX;
	int32_t x950 = -2;
	volatile int64_t x951 = INT64_MIN;
	int32_t t70 = -109;

	t70 = (x949<<((x950%x951)%x952));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x954 = -8417696296508608LL;
	int16_t x955 = -1;
	int16_t x956 = INT16_MAX;
	int64_t t71 = INT64_MAX;

	t71 = (x953<<((x954%x955)%x956));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x957 = INT32_MAX;
	int8_t x959 = INT8_MAX;
	int32_t x960 = -1;

	t72 = (x957<<((x958%x959)%x960));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x985 = UINT8_MAX;
	uint16_t x986 = UINT16_MAX;
	uint16_t x987 = UINT16_MAX;
	uint8_t x988 = 3U;
	int32_t t73 = -3;

	t73 = (x985<<((x986%x987)%x988));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x993 = INT64_MAX;
	volatile uint8_t x994 = UINT8_MAX;
	int8_t x995 = 1;
	int64_t x996 = -1LL;
	int64_t t74 = INT64_MAX;

	t74 = (x993<<((x994%x995)%x996));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1009 = INT64_MAX;
	uint64_t x1010 = UINT64_MAX;
	uint8_t x1011 = UINT8_MAX;
	static uint16_t x1012 = 94U;
	int64_t t75 = INT64_MAX;

	t75 = (x1009<<((x1010%x1011)%x1012));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1017 = UINT16_MAX;
	uint32_t x1018 = UINT32_MAX;
	uint16_t x1019 = 15U;
	uint8_t x1020 = 53U;

	t76 = (x1017<<((x1018%x1019)%x1020));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x1025 = 0U;
	static int64_t x1026 = INT64_MIN;
	int16_t x1027 = INT16_MIN;
	static int8_t x1028 = -2;
	int32_t t77 = -25019;

	t77 = (x1025<<((x1026%x1027)%x1028));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1033 = 4139380392763886348LLU;
	int64_t x1034 = 133872098008241LL;
	int8_t x1035 = 14;
	int8_t x1036 = -1;

	t78 = (x1033<<((x1034%x1035)%x1036));

	if (t78 != 4139380392763886348LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x1038 = INT32_MAX;
	static int8_t x1039 = 1;
	static uint8_t x1040 = 5U;
	uint64_t t79 = 63765342LLU;

	t79 = (x1037<<((x1038%x1039)%x1040));

	if (t79 != 145844385270080063LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1041 = 35075551;
	int32_t x1042 = -15195;
	int32_t x1043 = -9855737;
	volatile int32_t t80 = 1831;

	t80 = (x1041<<((x1042%x1043)%x1044));

	if (t80 != 35075551) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1045 = 1902755366664LLU;
	volatile int64_t x1046 = INT64_MIN;
	uint32_t x1047 = 124U;
	int8_t x1048 = -1;
	static uint64_t t81 = 144499LLU;

	t81 = (x1045<<((x1046%x1047)%x1048));

	if (t81 != 1902755366664LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x1049 = 2305LLU;
	volatile int16_t x1050 = 499;
	uint16_t x1051 = 6029U;

	t82 = (x1049<<((x1050%x1051)%x1052));

	if (t82 != 18882560LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1057 = INT16_MAX;
	uint64_t x1058 = UINT64_MAX;
	int16_t x1059 = INT16_MAX;
	static int64_t x1060 = INT64_MIN;
	volatile int32_t t83 = -96;

	t83 = (x1057<<((x1058%x1059)%x1060));

	if (t83 != 1073709056) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1069 = UINT16_MAX;
	static volatile int32_t x1071 = INT32_MIN;
	int32_t x1072 = -196288;
	static int32_t t84 = 541111;

	t84 = (x1069<<((x1070%x1071)%x1072));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x1081 = INT32_MAX;
	uint32_t x1083 = 110U;
	int8_t x1084 = 1;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x1081<<((x1082%x1083)%x1084));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1109 = 67443LL;
	uint64_t x1110 = UINT64_MAX;
	static volatile int8_t x1111 = 29;

	t86 = (x1109<<((x1110%x1111)%x1112));

	if (t86 != 565752889344LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1133 = 1U;
	int32_t x1134 = -2726;
	uint64_t x1135 = 2282409101LLU;
	volatile int32_t t87 = 69725;

	t87 = (x1133<<((x1134%x1135)%x1136));

	if (t87 != 16) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1170 = -1;
	int8_t x1172 = -1;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x1169<<((x1170%x1171)%x1172));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x1233 = 56576616LL;
	int64_t x1234 = INT64_MIN;
	static int8_t x1235 = INT8_MIN;
	volatile int64_t t89 = -5622678033785LL;

	t89 = (x1233<<((x1234%x1235)%x1236));

	if (t89 != 56576616LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1253 = 46147640256LLU;
	int16_t x1255 = 97;
	static uint8_t x1256 = 3U;
	uint64_t t90 = 267713563143737LLU;

	t90 = (x1253<<((x1254%x1255)%x1256));

	if (t90 != 46147640256LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1261 = 11U;
	int16_t x1262 = INT16_MIN;
	volatile int32_t x1263 = INT32_MIN;

	t91 = (x1261<<((x1262%x1263)%x1264));

	if (t91 != 11U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1294 = INT16_MAX;
	int8_t x1295 = INT8_MIN;
	int64_t x1296 = -1LL;
	int32_t t92 = INT32_MAX;

	t92 = (x1293<<((x1294%x1295)%x1296));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x1301 = 94LLU;
	uint64_t x1303 = UINT64_MAX;
	int16_t x1304 = INT16_MIN;

	t93 = (x1301<<((x1302%x1303)%x1304));

	if (t93 != 94LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x1314 = -1LL;
	int8_t x1315 = 1;
	static int16_t x1316 = INT16_MAX;
	int32_t t94 = 56094;

	t94 = (x1313<<((x1314%x1315)%x1316));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x1322 = 26U;
	uint32_t x1324 = 4419U;
	uint64_t t95 = 2378901797465993989LLU;

	t95 = (x1321<<((x1322%x1323)%x1324));

	if (t95 != 75268855483543LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x1338 = 38U;
	static uint64_t x1339 = 114LLU;
	int32_t x1340 = -161;
	uint64_t t96 = 234229789LLU;

	t96 = (x1337<<((x1338%x1339)%x1340));

	if (t96 != 12253207993708969984LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1353 = 0U;
	uint64_t x1354 = 35768577093129126LLU;
	volatile int8_t x1355 = 1;
	int64_t x1356 = INT64_MIN;
	volatile int32_t t97 = 3233;

	t97 = (x1353<<((x1354%x1355)%x1356));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1357 = 1005LLU;
	static int8_t x1359 = INT8_MIN;
	static uint8_t x1360 = 24U;
	uint64_t t98 = 2LLU;

	t98 = (x1357<<((x1358%x1359)%x1360));

	if (t98 != 1005LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x1369 = UINT8_MAX;
	int32_t x1370 = 414176;
	int8_t x1371 = 7;
	int16_t x1372 = -1;
	int32_t t99 = 1780;

	t99 = (x1369<<((x1370%x1371)%x1372));

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

