#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x21 = 0U;
int8_t x32 = -1;
uint8_t x62 = UINT8_MAX;
uint64_t x93 = UINT64_MAX;
int64_t x95 = -1LL;
static volatile uint64_t x114 = UINT64_MAX;
int32_t t6 = -53252;
static volatile int64_t x137 = 112425146090618LL;
int8_t x138 = -1;
int32_t x140 = INT32_MAX;
volatile int16_t x142 = INT16_MAX;
volatile int32_t x150 = -78127;
volatile uint64_t t10 = 7237229LLU;
uint8_t x184 = 50U;
uint8_t x186 = UINT8_MAX;
uint16_t x204 = 484U;
static uint8_t x213 = UINT8_MAX;
uint64_t x225 = UINT64_MAX;
uint8_t x242 = 117U;
volatile int32_t t22 = 1;
int64_t x248 = INT64_MIN;
uint64_t x274 = 946470366LLU;
volatile int32_t t25 = 0;
volatile int8_t x326 = -1;
int64_t x333 = 1883530451LL;
int8_t x371 = 13;
static volatile int64_t t31 = INT64_MAX;
volatile uint16_t x374 = UINT16_MAX;
int64_t t33 = INT64_MAX;
int8_t x410 = INT8_MIN;
uint32_t x417 = UINT32_MAX;
uint32_t x418 = 488U;
volatile uint32_t t35 = UINT32_MAX;
int32_t x438 = INT32_MAX;
int64_t x439 = -86473290976885LL;
volatile int64_t t36 = 70342877LL;
volatile int16_t x457 = 1669;
volatile int32_t t37 = -863;
uint64_t x466 = 39119716LLU;
uint64_t t38 = UINT64_MAX;
uint16_t x477 = 23U;
uint64_t x480 = UINT64_MAX;
static volatile int32_t t40 = -5;
static volatile int32_t x503 = 6823931;
uint32_t t44 = 23114U;
volatile int16_t x539 = 5;
static volatile uint64_t t45 = 15405898308642065LLU;
volatile int32_t t46 = -11;
int64_t x563 = 53854781508239856LL;
int64_t x564 = 1134291295547559LL;
int16_t x572 = INT16_MIN;
int32_t t48 = 62664;
int16_t x600 = -1;
volatile int64_t x638 = -1LL;
int32_t t54 = -6958698;
int32_t t55 = -59606255;
int8_t x660 = -1;
volatile int32_t x663 = 11581965;
static uint32_t x716 = 1899228U;
uint64_t x729 = 65411928385463387LLU;
uint64_t t61 = 9223LLU;
int32_t x747 = INT32_MIN;
int8_t x758 = INT8_MAX;
int64_t x760 = INT64_MIN;
int32_t x762 = -542040;
static int64_t x763 = -1LL;
static int32_t x769 = 106208656;
int16_t x771 = INT16_MIN;
static int32_t x788 = -1;
static volatile uint32_t x814 = 5U;
uint32_t x817 = 104U;
int32_t x819 = INT32_MIN;
int64_t x827 = INT64_MIN;
volatile int32_t t72 = 3167;
static int8_t x846 = -1;
static int64_t x849 = 34280892LL;
volatile int64_t t77 = INT64_MAX;
uint32_t x912 = 1220U;
uint32_t t80 = 1747813427U;
uint16_t x921 = 7665U;
int32_t x923 = INT32_MIN;
volatile uint8_t x931 = UINT8_MAX;
int64_t x965 = 3LL;
volatile int64_t x977 = INT64_MAX;
static int32_t x979 = INT32_MIN;
int8_t x997 = 7;
int32_t x1000 = -1;
uint64_t x1005 = 5597837861914822LLU;
static uint8_t x1014 = UINT8_MAX;
uint64_t t87 = UINT64_MAX;
int32_t x1017 = INT32_MAX;
int32_t t88 = INT32_MAX;
static volatile uint64_t x1027 = 2005LLU;
volatile uint32_t x1028 = UINT32_MAX;
int8_t x1029 = INT8_MAX;
int32_t t90 = 6685304;
volatile int8_t x1082 = -1;
static int64_t x1108 = 2481637036461514935LL;
static uint64_t x1116 = 25295560180596LLU;
int8_t x1141 = 0;
static uint8_t x1142 = 63U;


void f0(void) {
	uint8_t x13 = 14U;
	uint16_t x14 = 0U;
	static int8_t x15 = 4;
	static uint8_t x16 = 125U;
	static volatile int32_t t0 = 0;

	t0 = (x13>>(x14/(x15|x16)));

	if (t0 != 14) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x22 = -1LL;
	int64_t x23 = -1LL;
	int32_t x24 = INT32_MIN;
	volatile int32_t t1 = -1778507;

	t1 = (x21>>(x22/(x23|x24)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x29 = INT32_MAX;
	int16_t x30 = -2;
	uint64_t x31 = 23778126LLU;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x29>>(x30/(x31|x32)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x61 = 203LL;
	uint16_t x63 = 2U;
	volatile int16_t x64 = 126;
	int64_t t3 = -24LL;

	t3 = (x61>>(x62/(x63|x64)));

	if (t3 != 50LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x94 = 3200047LLU;
	int8_t x96 = INT8_MIN;
	static uint64_t t4 = UINT64_MAX;

	t4 = (x93>>(x94/(x95|x96)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x101 = UINT32_MAX;
	static uint16_t x102 = 4U;
	static int16_t x103 = -400;
	int32_t x104 = -29661262;
	uint32_t t5 = UINT32_MAX;

	t5 = (x101>>(x102/(x103|x104)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x113 = 40;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = INT64_MIN;

	t6 = (x113>>(x114/(x115|x116)));

	if (t6 != 20) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x117 = 31U;
	uint16_t x118 = 83U;
	uint32_t x119 = 549258U;
	int16_t x120 = -1;
	volatile int32_t t7 = 156;

	t7 = (x117>>(x118/(x119|x120)));

	if (t7 != 31) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x139 = -8040599LL;
	int64_t t8 = 10020610LL;

	t8 = (x137>>(x138/(x139|x140)));

	if (t8 != 56212573045309LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x141 = 60296U;
	int64_t x143 = -1LL;
	uint64_t x144 = 27LLU;
	volatile uint32_t t9 = 5U;

	t9 = (x141>>(x142/(x143|x144)));

	if (t9 != 60296U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x149 = 2682687875355177379LLU;
	volatile int8_t x151 = -8;
	uint64_t x152 = 329496224775973LLU;

	t10 = (x149>>(x150/(x151|x152)));

	if (t10 != 2682687875355177379LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x173 = UINT8_MAX;
	uint64_t x174 = 5LLU;
	static uint32_t x175 = 4695607U;
	volatile int16_t x176 = 0;
	volatile int32_t t11 = 9;

	t11 = (x173>>(x174/(x175|x176)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x177 = 22642U;
	static int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	static volatile uint32_t x180 = 2328638U;
	static int32_t t12 = 29094;

	t12 = (x177>>(x178/(x179|x180)));

	if (t12 != 11321) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x181 = UINT32_MAX;
	static uint64_t x182 = 90LLU;
	uint64_t x183 = UINT64_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x181>>(x182/(x183|x184)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x185 = INT16_MAX;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = 4;
	static int32_t t14 = -732163;

	t14 = (x185>>(x186/(x187|x188)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x197 = 1U;
	volatile int8_t x198 = 20;
	uint32_t x199 = 39345492U;
	static int16_t x200 = INT16_MAX;
	int32_t t15 = 679585385;

	t15 = (x197>>(x198/(x199|x200)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x201 = 10202U;
	int32_t x202 = 34;
	static volatile uint64_t x203 = 1420851447983607LLU;
	volatile uint32_t t16 = 3U;

	t16 = (x201>>(x202/(x203|x204)));

	if (t16 != 10202U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x205 = 4U;
	int32_t x206 = 2249682;
	int64_t x207 = INT64_MIN;
	uint32_t x208 = 1604U;
	static int32_t t17 = 0;

	t17 = (x205>>(x206/(x207|x208)));

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x214 = -1;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = 809U;
	int32_t t18 = 1;

	t18 = (x213>>(x214/(x215|x216)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x226 = INT8_MAX;
	static uint16_t x227 = UINT16_MAX;
	int16_t x228 = 1;
	uint64_t t19 = UINT64_MAX;

	t19 = (x225>>(x226/(x227|x228)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x229 = INT8_MAX;
	volatile int16_t x230 = 0;
	static int32_t x231 = 229930233;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t20 = -103941186;

	t20 = (x229>>(x230/(x231|x232)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x237 = 9;
	uint8_t x238 = 2U;
	volatile int32_t x239 = 289;
	int16_t x240 = INT16_MIN;
	volatile int32_t t21 = -116;

	t21 = (x237>>(x238/(x239|x240)));

	if (t21 != 9) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x241 = UINT8_MAX;
	uint64_t x243 = UINT64_MAX;
	volatile int8_t x244 = 56;

	t22 = (x241>>(x242/(x243|x244)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x245 = INT16_MAX;
	int8_t x246 = 31;
	int16_t x247 = 54;
	int32_t t23 = -999301;

	t23 = (x245>>(x246/(x247|x248)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x273 = UINT8_MAX;
	static int16_t x275 = -1;
	static int8_t x276 = -1;
	volatile int32_t t24 = -61;

	t24 = (x273>>(x274/(x275|x276)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x293 = 16U;
	uint16_t x294 = 2271U;
	volatile uint32_t x295 = 40765U;
	uint8_t x296 = 1U;

	t25 = (x293>>(x294/(x295|x296)));

	if (t25 != 16) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x297 = 552828866571579LLU;
	static int8_t x298 = INT8_MAX;
	uint32_t x299 = 610687U;
	volatile int32_t x300 = 4;
	uint64_t t26 = 1789LLU;

	t26 = (x297>>(x298/(x299|x300)));

	if (t26 != 552828866571579LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x313 = INT8_MAX;
	volatile uint16_t x314 = UINT16_MAX;
	uint8_t x315 = UINT8_MAX;
	volatile int64_t x316 = 238616675LL;
	int32_t t27 = 513674747;

	t27 = (x313>>(x314/(x315|x316)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x325 = 2U;
	int32_t x327 = 0;
	static volatile int32_t x328 = INT32_MAX;
	volatile int32_t t28 = -4;

	t28 = (x325>>(x326/(x327|x328)));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x334 = INT32_MAX;
	volatile uint64_t x335 = 410866558860LLU;
	static volatile int8_t x336 = INT8_MIN;
	static volatile int64_t t29 = -2854930LL;

	t29 = (x333>>(x334/(x335|x336)));

	if (t29 != 1883530451LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x349 = 19004LL;
	static int64_t x350 = -123LL;
	uint32_t x351 = 35988U;
	int8_t x352 = INT8_MAX;
	volatile int64_t t30 = 2689997171010571473LL;

	t30 = (x349>>(x350/(x351|x352)));

	if (t30 != 19004LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x369 = INT64_MAX;
	uint32_t x370 = 8269U;
	volatile uint16_t x372 = UINT16_MAX;

	t31 = (x369>>(x370/(x371|x372)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x373 = UINT8_MAX;
	uint32_t x375 = 1U;
	volatile int16_t x376 = 3439;
	int32_t t32 = -54;

	t32 = (x373>>(x374/(x375|x376)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MIN;
	static int16_t x395 = INT16_MAX;
	volatile int64_t x396 = -3242601666739100999LL;

	t33 = (x393>>(x394/(x395|x396)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x409 = 468620512383LLU;
	int16_t x411 = -4845;
	int32_t x412 = 231581957;
	static volatile uint64_t t34 = 1925194846LLU;

	t34 = (x409>>(x410/(x411|x412)));

	if (t34 != 468620512383LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x419 = 1;
	volatile int64_t x420 = INT64_MIN;

	t35 = (x417>>(x418/(x419|x420)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x437 = 202849830286121902LL;
	volatile int64_t x440 = INT64_MIN;

	t36 = (x437>>(x438/(x439|x440)));

	if (t36 != 202849830286121902LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x458 = INT16_MIN;
	volatile uint64_t x459 = 5175414852766950LLU;
	static int64_t x460 = -2652686LL;

	t37 = (x457>>(x458/(x459|x460)));

	if (t37 != 834) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x465 = UINT64_MAX;
	uint16_t x467 = 549U;
	volatile int8_t x468 = INT8_MIN;

	t38 = (x465>>(x466/(x467|x468)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x469 = INT8_MAX;
	int8_t x470 = -1;
	uint64_t x471 = 18222LLU;
	static int8_t x472 = INT8_MIN;
	int32_t t39 = -210511;

	t39 = (x469>>(x470/(x471|x472)));

	if (t39 != 63) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x478 = 7484LLU;
	volatile int8_t x479 = INT8_MIN;

	t40 = (x477>>(x478/(x479|x480)));

	if (t40 != 23) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x485 = 4093099LL;
	int64_t x486 = -1LL;
	int8_t x487 = INT8_MAX;
	int16_t x488 = INT16_MAX;
	volatile int64_t t41 = 1512366857855455LL;

	t41 = (x485>>(x486/(x487|x488)));

	if (t41 != 4093099LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x489 = INT32_MAX;
	static volatile int16_t x490 = -97;
	uint8_t x491 = 1U;
	volatile int64_t x492 = INT64_MAX;
	int32_t t42 = INT32_MAX;

	t42 = (x489>>(x490/(x491|x492)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x501 = INT64_MAX;
	int16_t x502 = INT16_MAX;
	static uint8_t x504 = 16U;
	int64_t t43 = INT64_MAX;

	t43 = (x501>>(x502/(x503|x504)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x521 = 422U;
	uint16_t x522 = 675U;
	uint32_t x523 = UINT32_MAX;
	uint16_t x524 = UINT16_MAX;

	t44 = (x521>>(x522/(x523|x524)));

	if (t44 != 422U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x537 = UINT64_MAX;
	volatile int8_t x538 = INT8_MAX;
	int8_t x540 = INT8_MAX;

	t45 = (x537>>(x538/(x539|x540)));

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x557 = 44;
	volatile uint8_t x558 = UINT8_MAX;
	static int8_t x559 = 22;
	uint16_t x560 = 26U;

	t46 = (x557>>(x558/(x559|x560)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x561 = 3712978U;
	uint8_t x562 = 0U;
	volatile uint32_t t47 = 5U;

	t47 = (x561>>(x562/(x563|x564)));

	if (t47 != 3712978U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x569 = INT32_MAX;
	static int16_t x570 = INT16_MIN;
	int16_t x571 = INT16_MIN;

	t48 = (x569>>(x570/(x571|x572)));

	if (t48 != 1073741823) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x577 = 25U;
	int16_t x578 = 414;
	uint64_t x579 = 1559501LLU;
	int64_t x580 = INT64_MAX;
	int32_t t49 = -116620;

	t49 = (x577>>(x578/(x579|x580)));

	if (t49 != 25) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x593 = INT16_MAX;
	int32_t x594 = -1;
	int64_t x595 = INT64_MIN;
	volatile int32_t x596 = -205862;
	volatile int32_t t50 = 128735766;

	t50 = (x593>>(x594/(x595|x596)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x597 = INT16_MAX;
	volatile int8_t x598 = -1;
	int8_t x599 = -1;
	volatile int32_t t51 = 16;

	t51 = (x597>>(x598/(x599|x600)));

	if (t51 != 16383) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x609 = 5;
	uint32_t x610 = 696511202U;
	volatile int8_t x611 = INT8_MIN;
	static int32_t x612 = -1;
	volatile int32_t t52 = -9642851;

	t52 = (x609>>(x610/(x611|x612)));

	if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x621 = 13U;
	static int32_t x622 = -1;
	int8_t x623 = INT8_MIN;
	static volatile int8_t x624 = 2;
	volatile uint32_t t53 = 213631771U;

	t53 = (x621>>(x622/(x623|x624)));

	if (t53 != 13U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x637 = 274906;
	static int64_t x639 = INT64_MIN;
	volatile int8_t x640 = INT8_MAX;

	t54 = (x637>>(x638/(x639|x640)));

	if (t54 != 274906) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x653 = 13U;
	int8_t x654 = -1;
	int64_t x655 = INT64_MIN;
	static uint32_t x656 = 9254331U;

	t55 = (x653>>(x654/(x655|x656)));

	if (t55 != 13) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x657 = INT64_MAX;
	volatile uint64_t x658 = 254409LLU;
	static int16_t x659 = 1;
	volatile int64_t t56 = INT64_MAX;

	t56 = (x657>>(x658/(x659|x660)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x661 = INT32_MAX;
	uint8_t x662 = 9U;
	uint32_t x664 = 416080309U;
	int32_t t57 = INT32_MAX;

	t57 = (x661>>(x662/(x663|x664)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x705 = 33261785486LLU;
	static int16_t x706 = -1;
	int16_t x707 = INT16_MIN;
	static uint32_t x708 = 3U;
	volatile uint64_t t58 = 1LLU;

	t58 = (x705>>(x706/(x707|x708)));

	if (t58 != 16630892743LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x713 = UINT16_MAX;
	int64_t x714 = 829LL;
	int64_t x715 = INT64_MIN;
	int32_t t59 = -50649090;

	t59 = (x713>>(x714/(x715|x716)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x721 = 850U;
	static volatile int16_t x722 = INT16_MIN;
	static volatile uint64_t x723 = 184LLU;
	int8_t x724 = -1;
	volatile uint32_t t60 = 4036U;

	t60 = (x721>>(x722/(x723|x724)));

	if (t60 != 850U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x730 = 4U;
	volatile uint16_t x731 = 170U;
	int8_t x732 = INT8_MAX;

	t61 = (x729>>(x730/(x731|x732)));

	if (t61 != 65411928385463387LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x745 = INT16_MAX;
	uint64_t x746 = 2196230512LLU;
	int16_t x748 = -1;
	int32_t t62 = -118;

	t62 = (x745>>(x746/(x747|x748)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x757 = 0U;
	uint64_t x759 = 1160767LLU;
	static volatile int32_t t63 = -2446;

	t63 = (x757>>(x758/(x759|x760)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x761 = UINT16_MAX;
	uint64_t x764 = 809443LLU;
	static int32_t t64 = 299;

	t64 = (x761>>(x762/(x763|x764)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x770 = 5U;
	uint16_t x772 = 306U;
	volatile int32_t t65 = 583792;

	t65 = (x769>>(x770/(x771|x772)));

	if (t65 != 106208656) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x785 = UINT32_MAX;
	uint32_t x786 = 15U;
	int16_t x787 = -1;
	uint32_t t66 = UINT32_MAX;

	t66 = (x785>>(x786/(x787|x788)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x793 = 28U;
	static uint32_t x794 = 4520U;
	int32_t x795 = INT32_MIN;
	int16_t x796 = -1;
	static int32_t t67 = 5504157;

	t67 = (x793>>(x794/(x795|x796)));

	if (t67 != 28) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x797 = 30U;
	static int32_t x798 = -74733694;
	static int32_t x799 = -1;
	static uint64_t x800 = UINT64_MAX;
	volatile uint32_t t68 = 11608674U;

	t68 = (x797>>(x798/(x799|x800)));

	if (t68 != 30U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x805 = 100U;
	uint8_t x806 = UINT8_MAX;
	static volatile int32_t x807 = -290450;
	int16_t x808 = INT16_MIN;
	static int32_t t69 = -368960;

	t69 = (x805>>(x806/(x807|x808)));

	if (t69 != 100) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x813 = 22385U;
	static uint16_t x815 = 5811U;
	int32_t x816 = INT32_MAX;
	int32_t t70 = 82;

	t70 = (x813>>(x814/(x815|x816)));

	if (t70 != 22385) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x818 = 6;
	volatile uint16_t x820 = UINT16_MAX;
	uint32_t t71 = 0U;

	t71 = (x817>>(x818/(x819|x820)));

	if (t71 != 104U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x825 = 9846617;
	int8_t x826 = INT8_MIN;
	uint64_t x828 = 2420368767600525435LLU;

	t72 = (x825>>(x826/(x827|x828)));

	if (t72 != 4923308) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x841 = UINT64_MAX;
	uint32_t x842 = 1U;
	uint8_t x843 = UINT8_MAX;
	static int32_t x844 = -51235;
	uint64_t t73 = UINT64_MAX;

	t73 = (x841>>(x842/(x843|x844)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x845 = 25;
	static uint16_t x847 = 948U;
	uint32_t x848 = 311232530U;
	int32_t t74 = -4000160;

	t74 = (x845>>(x846/(x847|x848)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x850 = INT8_MAX;
	int16_t x851 = INT16_MAX;
	uint8_t x852 = 5U;
	static volatile int64_t t75 = 735484296956804LL;

	t75 = (x849>>(x850/(x851|x852)));

	if (t75 != 34280892LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x853 = 139U;
	int16_t x854 = -7;
	static int64_t x855 = INT64_MAX;
	volatile int32_t x856 = INT32_MAX;
	uint32_t t76 = 24702U;

	t76 = (x853>>(x854/(x855|x856)));

	if (t76 != 139U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x877 = INT64_MAX;
	int32_t x878 = INT32_MAX;
	int16_t x879 = INT16_MIN;
	static uint64_t x880 = 277203522911857LLU;

	t77 = (x877>>(x878/(x879|x880)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x893 = 798U;
	int64_t x894 = -1LL;
	int64_t x895 = 6LL;
	uint32_t x896 = 88U;
	int32_t t78 = -59;

	t78 = (x893>>(x894/(x895|x896)));

	if (t78 != 798) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x905 = 105U;
	static uint64_t x906 = 57058577286875826LLU;
	static volatile int8_t x907 = INT8_MIN;
	volatile int64_t x908 = 173LL;
	volatile int32_t t79 = -40970;

	t79 = (x905>>(x906/(x907|x908)));

	if (t79 != 105) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x909 = 11369U;
	uint32_t x910 = 26996117U;
	static int16_t x911 = INT16_MIN;

	t80 = (x909>>(x910/(x911|x912)));

	if (t80 != 11369U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x922 = 42U;
	int64_t x924 = -444177867424639346LL;
	int32_t t81 = 13349362;

	t81 = (x921>>(x922/(x923|x924)));

	if (t81 != 7665) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x929 = UINT32_MAX;
	static int32_t x930 = -1;
	volatile int32_t x932 = -1;
	static uint32_t t82 = 822787U;

	t82 = (x929>>(x930/(x931|x932)));

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x966 = 224483719U;
	volatile int16_t x967 = INT16_MAX;
	int64_t x968 = -172417492200LL;
	int64_t t83 = 29560LL;

	t83 = (x965>>(x966/(x967|x968)));

	if (t83 != 3LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x978 = INT32_MIN;
	uint8_t x980 = 27U;
	volatile int64_t t84 = -5737560LL;

	t84 = (x977>>(x978/(x979|x980)));

	if (t84 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x998 = 2800631650440LLU;
	volatile int16_t x999 = INT16_MIN;
	static int32_t t85 = -5778922;

	t85 = (x997>>(x998/(x999|x1000)));

	if (t85 != 7) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1006 = -420;
	volatile int32_t x1007 = 537344;
	volatile uint32_t x1008 = 622042539U;
	uint64_t t86 = 25298697166281471LLU;

	t86 = (x1005>>(x1006/(x1007|x1008)));

	if (t86 != 87466216592419LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x1013 = UINT64_MAX;
	uint8_t x1015 = 5U;
	uint64_t x1016 = 6119388451920332LLU;

	t87 = (x1013>>(x1014/(x1015|x1016)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1018 = -1;
	int8_t x1019 = INT8_MIN;
	uint16_t x1020 = 1158U;

	t88 = (x1017>>(x1018/(x1019|x1020)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1025 = 1U;
	uint32_t x1026 = 6224861U;
	volatile int32_t t89 = -22;

	t89 = (x1025>>(x1026/(x1027|x1028)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1030 = 0U;
	int8_t x1031 = 4;
	uint64_t x1032 = 786612877897906LLU;

	t90 = (x1029>>(x1030/(x1031|x1032)));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x1049 = 108;
	static uint64_t x1050 = 6251191029LLU;
	static int32_t x1051 = 88020;
	static uint32_t x1052 = 400394984U;
	int32_t t91 = 2;

	t91 = (x1049>>(x1050/(x1051|x1052)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1081 = 3938U;
	uint32_t x1083 = 1901U;
	int32_t x1084 = -1;
	volatile uint32_t t92 = 21U;

	t92 = (x1081>>(x1082/(x1083|x1084)));

	if (t92 != 1969U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1089 = 1;
	int16_t x1090 = -1;
	int8_t x1091 = INT8_MIN;
	volatile int32_t x1092 = -1;
	static int32_t t93 = -44;

	t93 = (x1089>>(x1090/(x1091|x1092)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x1097 = 48U;
	static volatile uint32_t x1098 = UINT32_MAX;
	static int32_t x1099 = -3958865;
	uint32_t x1100 = UINT32_MAX;
	volatile int32_t t94 = 10;

	t94 = (x1097>>(x1098/(x1099|x1100)));

	if (t94 != 24) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1105 = INT8_MAX;
	static int64_t x1106 = INT64_MIN;
	uint64_t x1107 = 2028553LLU;
	int32_t t95 = 508;

	t95 = (x1105>>(x1106/(x1107|x1108)));

	if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1113 = 30U;
	uint16_t x1114 = 999U;
	uint16_t x1115 = UINT16_MAX;
	static volatile int32_t t96 = 5;

	t96 = (x1113>>(x1114/(x1115|x1116)));

	if (t96 != 30) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1121 = 5070139437325LLU;
	uint16_t x1122 = UINT16_MAX;
	uint32_t x1123 = UINT32_MAX;
	uint64_t x1124 = UINT64_MAX;
	volatile uint64_t t97 = 5416633320810LLU;

	t97 = (x1121>>(x1122/(x1123|x1124)));

	if (t97 != 5070139437325LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x1137 = 31295;
	int16_t x1138 = -1;
	volatile uint32_t x1139 = 1U;
	int64_t x1140 = INT64_MIN;
	int32_t t98 = 123112632;

	t98 = (x1137>>(x1138/(x1139|x1140)));

	if (t98 != 31295) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1143 = INT16_MAX;
	uint64_t x1144 = 4LLU;
	volatile int32_t t99 = 117;

	t99 = (x1141>>(x1142/(x1143|x1144)));

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

