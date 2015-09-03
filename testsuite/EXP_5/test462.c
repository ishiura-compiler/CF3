#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = -1;
static int32_t x39 = -1;
uint64_t x45 = UINT64_MAX;
volatile int64_t x46 = -1LL;
volatile uint64_t t4 = 1LLU;
static uint32_t x89 = 17U;
int64_t x99 = 12321LL;
int16_t x100 = 68;
volatile int64_t x117 = 400215771LL;
int16_t x121 = INT16_MAX;
static int32_t x122 = INT32_MAX;
volatile int16_t x144 = INT16_MIN;
int8_t x154 = -12;
static int32_t t12 = 1551107;
int32_t x158 = -1;
int16_t x160 = -9647;
static volatile int64_t x188 = -1LL;
static volatile int32_t t16 = -931914372;
uint8_t x225 = 34U;
uint8_t x234 = 12U;
int32_t t18 = -223;
uint32_t t20 = 2634U;
uint64_t x297 = 493818193LLU;
uint16_t x298 = 59U;
static uint32_t x299 = 1816692U;
uint64_t x354 = UINT64_MAX;
int8_t x355 = 1;
int8_t x381 = INT8_MAX;
static int32_t t28 = 1049547;
int8_t x394 = 6;
uint16_t x404 = 84U;
static int16_t x417 = 5;
int32_t x419 = -1;
uint32_t x447 = UINT32_MAX;
int32_t t37 = 100765874;
int32_t t39 = -27866594;
int32_t t41 = -4803310;
static int32_t x501 = INT32_MAX;
int64_t x509 = 1946762134076689LL;
static volatile uint32_t x522 = 850673U;
int64_t x533 = INT64_MAX;
static volatile uint32_t x534 = 101U;
uint32_t x536 = UINT32_MAX;
int64_t t45 = -15013LL;
static uint8_t x538 = 3U;
volatile int64_t x552 = -1704816747229350329LL;
uint32_t x554 = 6426326U;
uint64_t x555 = 1433LLU;
static volatile int64_t x556 = INT64_MAX;
volatile uint64_t t49 = 1267LLU;
uint64_t x558 = 22074419097848LLU;
volatile int16_t x559 = -1;
static int32_t t51 = INT32_MAX;
static uint64_t x576 = 13291022589418LLU;
volatile int32_t t52 = -3;
int8_t x578 = INT8_MIN;
static volatile uint16_t x582 = 0U;
volatile uint64_t t54 = 270476961590220LLU;
uint8_t x614 = 1U;
int64_t x621 = 0LL;
int32_t t58 = INT32_MAX;
volatile int8_t x659 = INT8_MIN;
volatile uint32_t x661 = UINT32_MAX;
int16_t x667 = INT16_MIN;
uint32_t x674 = 20271U;
volatile int64_t t63 = 51325LL;
volatile uint32_t t64 = 88U;
int8_t x703 = -1;
volatile uint16_t x706 = 4U;
volatile int32_t t67 = -1990277;
int16_t x732 = INT16_MIN;
uint32_t x737 = 0U;
uint32_t x765 = 425240U;
volatile uint32_t t72 = 49U;
static volatile uint64_t x776 = 150272319441LLU;
volatile uint32_t x779 = 137336391U;
volatile int16_t x780 = INT16_MIN;
uint64_t x797 = 186659382LLU;
uint8_t x805 = UINT8_MAX;
uint32_t x807 = 15U;
volatile uint16_t x809 = UINT16_MAX;
volatile int8_t x811 = INT8_MAX;
uint64_t x813 = 7226331223064001901LLU;
volatile uint64_t t79 = 784038216LLU;
static int16_t x819 = -1;
static volatile int8_t x835 = 14;
static int32_t t81 = 235;
int64_t x840 = INT64_MIN;
int32_t t83 = -13;
int16_t x847 = -522;
int32_t t84 = -33208626;
static int8_t x860 = 0;
static int8_t x871 = INT8_MIN;
volatile int64_t x881 = INT64_MAX;
int8_t x886 = 0;
static uint8_t x887 = UINT8_MAX;
uint64_t x905 = 768263070LLU;
uint8_t x913 = 50U;
uint64_t x915 = 506980878244541538LLU;
int32_t x916 = -1;
int32_t t93 = 51;
uint8_t x940 = UINT8_MAX;
static uint16_t x949 = 6408U;
volatile uint32_t t98 = 41U;
int64_t x986 = 1028673699LL;


void f0(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MAX;
	int32_t x12 = INT32_MIN;
	int64_t t0 = INT64_MAX;

	t0 = (x9>>((x10*x11)<=x12));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x25 = 1003132698LLU;
	int8_t x26 = INT8_MIN;
	static uint8_t x27 = 113U;
	int64_t x28 = -26771375331312LL;
	uint64_t t1 = 0LLU;

	t1 = (x25>>((x26*x27)<=x28));

	if (t1 != 1003132698LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x37 = 31U;
	int16_t x38 = 12197;
	static uint16_t x40 = 3067U;
	static int32_t t2 = -74;

	t2 = (x37>>((x38*x39)<=x40));

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x47 = INT16_MIN;
	uint8_t x48 = UINT8_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = (x45>>((x46*x47)<=x48));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x65 = UINT64_MAX;
	uint32_t x66 = 49212705U;
	static volatile uint16_t x67 = 0U;
	volatile int64_t x68 = INT64_MAX;

	t4 = (x65>>((x66*x67)<=x68));

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x90 = 0U;
	uint8_t x91 = UINT8_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile uint32_t t5 = 34U;

	t5 = (x89>>((x90*x91)<=x92));

	if (t5 != 8U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x93 = 3200841602666452LLU;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = 0U;
	uint8_t x96 = 7U;
	static uint64_t t6 = 7549LLU;

	t6 = (x93>>((x94*x95)<=x96));

	if (t6 != 1600420801333226LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = -580;
	uint64_t t7 = 44925522060552078LLU;

	t7 = (x97>>((x98*x99)<=x100));

	if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x101 = 191U;
	uint16_t x102 = 5U;
	int32_t x103 = -1;
	static volatile int64_t x104 = INT64_MIN;
	static uint32_t t8 = 3U;

	t8 = (x101>>((x102*x103)<=x104));

	if (t8 != 191U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x118 = INT16_MAX;
	static int64_t x119 = -22331763LL;
	int32_t x120 = INT32_MIN;
	volatile int64_t t9 = -417774570540290LL;

	t9 = (x117>>((x118*x119)<=x120));

	if (t9 != 200107885LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x123 = -1;
	uint32_t x124 = 1996475313U;
	static int32_t t10 = -869;

	t10 = (x121>>((x122*x123)<=x124));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x141 = UINT32_MAX;
	static int16_t x142 = INT16_MAX;
	int8_t x143 = 1;
	uint32_t t11 = UINT32_MAX;

	t11 = (x141>>((x142*x143)<=x144));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x153 = UINT16_MAX;
	uint64_t x155 = 329031575909182LLU;
	static int32_t x156 = 3463523;

	t12 = (x153>>((x154*x155)<=x156));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x157 = 1813;
	static volatile int8_t x159 = INT8_MIN;
	static volatile int32_t t13 = -716605;

	t13 = (x157>>((x158*x159)<=x160));

	if (t13 != 1813) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x165 = 7;
	volatile int32_t x166 = -1;
	static uint64_t x167 = UINT64_MAX;
	uint64_t x168 = 139841772866375LLU;
	int32_t t14 = -1317;

	t14 = (x165>>((x166*x167)<=x168));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = 1064807;
	int8_t x175 = -4;
	volatile uint64_t x176 = 378LLU;
	int32_t t15 = INT32_MAX;

	t15 = (x173>>((x174*x175)<=x176));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x185 = 1U;
	uint8_t x186 = 63U;
	int64_t x187 = 4LL;

	t16 = (x185>>((x186*x187)<=x188));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x226 = 1;
	int16_t x227 = INT16_MAX;
	int32_t x228 = -8;
	volatile int32_t t17 = 459;

	t17 = (x225>>((x226*x227)<=x228));

	if (t17 != 34) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x233 = 1;
	static uint64_t x235 = UINT64_MAX;
	int64_t x236 = -1LL;

	t18 = (x233>>((x234*x235)<=x236));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 27867U;
	static uint16_t x252 = 175U;
	volatile int32_t t19 = -60839;

	t19 = (x249>>((x250*x251)<=x252));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x257 = 150647U;
	static volatile uint32_t x258 = 90735260U;
	int8_t x259 = INT8_MIN;
	uint8_t x260 = 29U;

	t20 = (x257>>((x258*x259)<=x260));

	if (t20 != 150647U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x261 = UINT32_MAX;
	volatile int16_t x262 = INT16_MIN;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = 1;
	uint32_t t21 = 117854U;

	t21 = (x261>>((x262*x263)<=x264));

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x281 = 88236LL;
	int32_t x282 = -133;
	int8_t x283 = -1;
	static uint8_t x284 = UINT8_MAX;
	int64_t t22 = -891709335LL;

	t22 = (x281>>((x282*x283)<=x284));

	if (t22 != 44118LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x293 = UINT32_MAX;
	uint32_t x294 = UINT32_MAX;
	volatile int32_t x295 = INT32_MIN;
	volatile uint16_t x296 = 437U;
	static uint32_t t23 = UINT32_MAX;

	t23 = (x293>>((x294*x295)<=x296));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t24 = 4716678666LLU;

	t24 = (x297>>((x298*x299)<=x300));

	if (t24 != 246909096LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x349 = 1;
	int8_t x350 = INT8_MIN;
	int8_t x351 = -1;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t25 = -112143498;

	t25 = (x349>>((x350*x351)<=x352));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	uint32_t t26 = UINT32_MAX;

	t26 = (x353>>((x354*x355)<=x356));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x382 = INT16_MIN;
	volatile int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t27 = -1;

	t27 = (x381>>((x382*x383)<=x384));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x389 = UINT16_MAX;
	static int32_t x390 = -1;
	int64_t x391 = -109328482220875591LL;
	uint64_t x392 = 495269133LLU;

	t28 = (x389>>((x390*x391)<=x392));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x393 = 15162277638LL;
	static uint16_t x395 = 587U;
	int32_t x396 = INT32_MIN;
	static int64_t t29 = 15LL;

	t29 = (x393>>((x394*x395)<=x396));

	if (t29 != 15162277638LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x397 = 0;
	int32_t x398 = -1;
	static uint32_t x399 = UINT32_MAX;
	int16_t x400 = -547;
	int32_t t30 = -3;

	t30 = (x397>>((x398*x399)<=x400));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x401 = INT8_MAX;
	int64_t x402 = 51346177762949LL;
	int16_t x403 = -2340;
	volatile int32_t t31 = 0;

	t31 = (x401>>((x402*x403)<=x404));

	if (t31 != 63) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x409 = 624342U;
	int16_t x410 = -1;
	int8_t x411 = -1;
	int8_t x412 = INT8_MAX;
	static uint32_t t32 = 105U;

	t32 = (x409>>((x410*x411)<=x412));

	if (t32 != 312171U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x413 = INT8_MAX;
	int16_t x414 = INT16_MAX;
	static volatile uint8_t x415 = UINT8_MAX;
	int64_t x416 = INT64_MAX;
	volatile int32_t t33 = -399969;

	t33 = (x413>>((x414*x415)<=x416));

	if (t33 != 63) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x418 = -1;
	uint64_t x420 = 1164339659385LLU;
	volatile int32_t t34 = -56070;

	t34 = (x417>>((x418*x419)<=x420));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x429 = UINT16_MAX;
	static int16_t x430 = INT16_MIN;
	uint64_t x431 = 7083LLU;
	int32_t x432 = INT32_MAX;
	static volatile int32_t t35 = 3158;

	t35 = (x429>>((x430*x431)<=x432));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x433 = 41U;
	volatile int8_t x434 = -1;
	int32_t x435 = -1;
	static int8_t x436 = INT8_MAX;
	volatile uint32_t t36 = 249U;

	t36 = (x433>>((x434*x435)<=x436));

	if (t36 != 20U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x445 = 0;
	int16_t x446 = -1;
	int8_t x448 = INT8_MIN;

	t37 = (x445>>((x446*x447)<=x448));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x449 = UINT32_MAX;
	int16_t x450 = -1;
	int64_t x451 = -1LL;
	volatile int8_t x452 = -3;
	uint32_t t38 = UINT32_MAX;

	t38 = (x449>>((x450*x451)<=x452));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x453 = 57;
	int8_t x454 = -1;
	int32_t x455 = -16091;
	int8_t x456 = INT8_MIN;

	t39 = (x453>>((x454*x455)<=x456));

	if (t39 != 57) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x461 = 80959U;
	int64_t x462 = -1LL;
	int64_t x463 = -926292752LL;
	volatile uint16_t x464 = 1U;
	uint32_t t40 = 983U;

	t40 = (x461>>((x462*x463)<=x464));

	if (t40 != 80959U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x497 = 39;
	uint32_t x498 = 30U;
	volatile uint8_t x499 = UINT8_MAX;
	int32_t x500 = -11598;

	t41 = (x497>>((x498*x499)<=x500));

	if (t41 != 19) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x502 = UINT16_MAX;
	static uint32_t x503 = 230U;
	volatile int64_t x504 = INT64_MIN;
	int32_t t42 = INT32_MAX;

	t42 = (x501>>((x502*x503)<=x504));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MAX;
	volatile int64_t t43 = -380114224385479223LL;

	t43 = (x509>>((x510*x511)<=x512));

	if (t43 != 1946762134076689LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x521 = INT32_MAX;
	int8_t x523 = 0;
	uint16_t x524 = 7U;
	volatile int32_t t44 = 361390352;

	t44 = (x521>>((x522*x523)<=x524));

	if (t44 != 1073741823) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x535 = UINT32_MAX;

	t45 = (x533>>((x534*x535)<=x536));

	if (t45 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x537 = INT64_MAX;
	volatile int16_t x539 = -1;
	int32_t x540 = -1;
	int64_t t46 = -1LL;

	t46 = (x537>>((x538*x539)<=x540));

	if (t46 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x545 = 8U;
	static int16_t x546 = -1;
	int16_t x547 = INT16_MIN;
	volatile uint32_t x548 = UINT32_MAX;
	volatile int32_t t47 = -84;

	t47 = (x545>>((x546*x547)<=x548));

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x549 = 27U;
	static volatile int8_t x550 = 0;
	static uint8_t x551 = 79U;
	volatile int32_t t48 = -11329;

	t48 = (x549>>((x550*x551)<=x552));

	if (t48 != 27) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x553 = UINT64_MAX;

	t49 = (x553>>((x554*x555)<=x556));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x557 = 121LLU;
	int64_t x560 = -1LL;
	uint64_t t50 = 97LLU;

	t50 = (x557>>((x558*x559)<=x560));

	if (t50 != 60LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x569 = INT32_MAX;
	uint8_t x570 = UINT8_MAX;
	uint32_t x571 = 1928196U;
	static uint16_t x572 = 12U;

	t51 = (x569>>((x570*x571)<=x572));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x573 = 0U;
	static uint64_t x574 = UINT64_MAX;
	uint8_t x575 = 1U;

	t52 = (x573>>((x574*x575)<=x576));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x577 = UINT64_MAX;
	uint8_t x579 = UINT8_MAX;
	int64_t x580 = INT64_MAX;
	volatile uint64_t t53 = 13729557455395844LLU;

	t53 = (x577>>((x578*x579)<=x580));

	if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x581 = 2839450353870063LLU;
	static volatile uint16_t x583 = 21U;
	int32_t x584 = -6787261;

	t54 = (x581>>((x582*x583)<=x584));

	if (t54 != 2839450353870063LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x585 = UINT32_MAX;
	int64_t x586 = -3258452LL;
	int16_t x587 = INT16_MIN;
	uint8_t x588 = UINT8_MAX;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x585>>((x586*x587)<=x588));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x613 = INT8_MAX;
	int64_t x615 = 2133441LL;
	int16_t x616 = INT16_MIN;
	volatile int32_t t56 = -12936;

	t56 = (x613>>((x614*x615)<=x616));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x622 = UINT8_MAX;
	int32_t x623 = -1;
	static uint16_t x624 = 5U;
	static volatile int64_t t57 = -1LL;

	t57 = (x621>>((x622*x623)<=x624));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x637 = INT32_MAX;
	int64_t x638 = INT64_MAX;
	volatile int16_t x639 = 1;
	static int64_t x640 = INT64_MIN;

	t58 = (x637>>((x638*x639)<=x640));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x649 = INT32_MAX;
	volatile int64_t x650 = -1LL;
	volatile uint64_t x651 = 63488LLU;
	volatile int16_t x652 = -1;
	static int32_t t59 = -345121;

	t59 = (x649>>((x650*x651)<=x652));

	if (t59 != 1073741823) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x657 = 6996036U;
	int64_t x658 = 27744725702629LL;
	volatile int64_t x660 = -235076172782172686LL;
	uint32_t t60 = 61U;

	t60 = (x657>>((x658*x659)<=x660));

	if (t60 != 6996036U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x662 = INT32_MIN;
	uint8_t x663 = 0U;
	int8_t x664 = INT8_MIN;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (x661>>((x662*x663)<=x664));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x665 = 27174383000LL;
	int64_t x666 = -7824106LL;
	int32_t x668 = -1;
	int64_t t62 = 30489462798397117LL;

	t62 = (x665>>((x666*x667)<=x668));

	if (t62 != 27174383000LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x673 = 60234415146LL;
	int32_t x675 = -2739740;
	uint8_t x676 = UINT8_MAX;

	t63 = (x673>>((x674*x675)<=x676));

	if (t63 != 60234415146LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x685 = 747899059U;
	volatile int16_t x686 = -1;
	static uint8_t x687 = 69U;
	uint32_t x688 = UINT32_MAX;

	t64 = (x685>>((x686*x687)<=x688));

	if (t64 != 373949529U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x701 = UINT32_MAX;
	int16_t x702 = INT16_MIN;
	uint8_t x704 = UINT8_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (x701>>((x702*x703)<=x704));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x705 = INT32_MAX;
	static int16_t x707 = INT16_MAX;
	int16_t x708 = INT16_MIN;
	int32_t t66 = INT32_MAX;

	t66 = (x705>>((x706*x707)<=x708));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x717 = 5;
	int8_t x718 = INT8_MIN;
	int32_t x719 = -966525;
	int32_t x720 = INT32_MIN;

	t67 = (x717>>((x718*x719)<=x720));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x725 = INT16_MAX;
	int8_t x726 = INT8_MIN;
	int8_t x727 = INT8_MAX;
	int8_t x728 = INT8_MIN;
	volatile int32_t t68 = 3807;

	t68 = (x725>>((x726*x727)<=x728));

	if (t68 != 16383) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x729 = 20118448U;
	uint64_t x730 = 2896583956838672701LLU;
	int8_t x731 = -33;
	volatile uint32_t t69 = 1U;

	t69 = (x729>>((x730*x731)<=x732));

	if (t69 != 10059224U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x738 = INT8_MAX;
	static uint16_t x739 = 1761U;
	volatile uint64_t x740 = UINT64_MAX;
	uint32_t t70 = 74155U;

	t70 = (x737>>((x738*x739)<=x740));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x749 = 13449803U;
	int64_t x750 = -1LL;
	volatile int8_t x751 = -4;
	int64_t x752 = INT64_MAX;
	uint32_t t71 = 27887089U;

	t71 = (x749>>((x750*x751)<=x752));

	if (t71 != 6724901U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x766 = -1;
	uint64_t x767 = UINT64_MAX;
	int32_t x768 = -6;

	t72 = (x765>>((x766*x767)<=x768));

	if (t72 != 212620U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x773 = 1U;
	uint64_t x774 = UINT64_MAX;
	int16_t x775 = INT16_MAX;
	int32_t t73 = -1;

	t73 = (x773>>((x774*x775)<=x776));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x777 = 5;
	int64_t x778 = -1LL;
	int32_t t74 = -510643379;

	t74 = (x777>>((x778*x779)<=x780));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x793 = 54U;
	int16_t x794 = -1;
	uint64_t x795 = 236273635346492891LLU;
	int32_t x796 = INT32_MAX;
	volatile int32_t t75 = 115;

	t75 = (x793>>((x794*x795)<=x796));

	if (t75 != 54) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x798 = INT16_MAX;
	volatile uint32_t x799 = UINT32_MAX;
	volatile uint16_t x800 = UINT16_MAX;
	volatile uint64_t t76 = 33307285271737760LLU;

	t76 = (x797>>((x798*x799)<=x800));

	if (t76 != 186659382LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x806 = INT8_MAX;
	volatile uint8_t x808 = 7U;
	volatile int32_t t77 = 1644;

	t77 = (x805>>((x806*x807)<=x808));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x810 = INT8_MIN;
	uint16_t x812 = 23142U;
	int32_t t78 = -1816;

	t78 = (x809>>((x810*x811)<=x812));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x814 = 107LL;
	uint32_t x815 = UINT32_MAX;
	int8_t x816 = -1;

	t79 = (x813>>((x814*x815)<=x816));

	if (t79 != 7226331223064001901LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x817 = 0;
	uint32_t x818 = UINT32_MAX;
	uint16_t x820 = UINT16_MAX;
	static int32_t t80 = 912566;

	t80 = (x817>>((x818*x819)<=x820));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x833 = 3005;
	uint8_t x834 = UINT8_MAX;
	static uint8_t x836 = 10U;

	t81 = (x833>>((x834*x835)<=x836));

	if (t81 != 3005) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x837 = UINT64_MAX;
	int16_t x838 = INT16_MAX;
	uint16_t x839 = UINT16_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (x837>>((x838*x839)<=x840));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x841 = 57U;
	int16_t x842 = INT16_MIN;
	int64_t x843 = 5961019863LL;
	int64_t x844 = -5978LL;

	t83 = (x841>>((x842*x843)<=x844));

	if (t83 != 28) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x845 = 2;
	static uint32_t x846 = 61237421U;
	static int8_t x848 = INT8_MIN;

	t84 = (x845>>((x846*x847)<=x848));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x849 = UINT16_MAX;
	uint32_t x850 = 125U;
	int16_t x851 = INT16_MAX;
	int8_t x852 = INT8_MIN;
	static volatile int32_t t85 = 8902512;

	t85 = (x849>>((x850*x851)<=x852));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x857 = 1;
	uint64_t x858 = 21694472888357467LLU;
	uint32_t x859 = 1U;
	static volatile int32_t t86 = -2;

	t86 = (x857>>((x858*x859)<=x860));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x869 = INT64_MAX;
	static int8_t x870 = INT8_MIN;
	static int32_t x872 = 4101136;
	volatile int64_t t87 = 1LL;

	t87 = (x869>>((x870*x871)<=x872));

	if (t87 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x877 = 120805238662768LLU;
	static uint32_t x878 = 730603440U;
	static int16_t x879 = INT16_MIN;
	uint32_t x880 = 1991U;
	static uint64_t t88 = 237LLU;

	t88 = (x877>>((x878*x879)<=x880));

	if (t88 != 120805238662768LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x882 = -1;
	int16_t x883 = -1;
	uint8_t x884 = 22U;
	static volatile int64_t t89 = -13247518617160LL;

	t89 = (x881>>((x882*x883)<=x884));

	if (t89 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x885 = 9U;
	volatile int8_t x888 = INT8_MIN;
	static int32_t t90 = -441;

	t90 = (x885>>((x886*x887)<=x888));

	if (t90 != 9) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x897 = INT64_MAX;
	uint64_t x898 = 4693597889316LLU;
	uint32_t x899 = 11705986U;
	uint8_t x900 = 11U;
	volatile int64_t t91 = INT64_MAX;

	t91 = (x897>>((x898*x899)<=x900));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x906 = -13;
	static uint8_t x907 = 1U;
	int8_t x908 = INT8_MIN;
	volatile uint64_t t92 = 2902446004172586951LLU;

	t92 = (x905>>((x906*x907)<=x908));

	if (t92 != 768263070LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x914 = -1;

	t93 = (x913>>((x914*x915)<=x916));

	if (t93 != 25) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x929 = INT32_MAX;
	volatile int16_t x930 = INT16_MIN;
	int16_t x931 = -53;
	int16_t x932 = -1;
	int32_t t94 = INT32_MAX;

	t94 = (x929>>((x930*x931)<=x932));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x937 = 104096024867LLU;
	uint64_t x938 = 816889883LLU;
	int64_t x939 = -1LL;
	volatile uint64_t t95 = 3LLU;

	t95 = (x937>>((x938*x939)<=x940));

	if (t95 != 104096024867LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x950 = 3640273U;
	int32_t x951 = 36;
	uint64_t x952 = 577487077555750921LLU;
	volatile int32_t t96 = 774763;

	t96 = (x949>>((x950*x951)<=x952));

	if (t96 != 3204) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x973 = 1;
	static uint8_t x974 = UINT8_MAX;
	uint8_t x975 = 0U;
	uint32_t x976 = UINT32_MAX;
	int32_t t97 = 24;

	t97 = (x973>>((x974*x975)<=x976));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x981 = 652838926U;
	int8_t x982 = -5;
	uint64_t x983 = 740049593045LLU;
	int64_t x984 = -1477729511938119LL;

	t98 = (x981>>((x982*x983)<=x984));

	if (t98 != 652838926U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x985 = 32U;
	int32_t x987 = -20084;
	volatile uint32_t x988 = UINT32_MAX;
	volatile uint32_t t99 = 7730U;

	t99 = (x985>>((x986*x987)<=x988));

	if (t99 != 16U) { NG(); } else { ; }
	
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

