#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x19 = INT64_MAX;
int32_t x31 = INT32_MAX;
volatile uint32_t x32 = 121U;
int64_t x50 = INT64_MAX;
static volatile int64_t t5 = 768171230491356LL;
static int64_t x57 = INT64_MIN;
uint32_t x58 = 2674U;
static volatile uint8_t x60 = UINT8_MAX;
int64_t x74 = 279378808LL;
int32_t x77 = -1;
int16_t x79 = 12;
volatile uint64_t t9 = 134433606LLU;
int64_t x92 = 91829977369536474LL;
volatile uint8_t x101 = 0U;
int8_t x104 = INT8_MAX;
int64_t x106 = 992040910361520879LL;
int64_t x108 = 6987921382LL;
volatile uint64_t x113 = 24752LLU;
int16_t x116 = INT16_MAX;
int32_t x123 = 9604;
int32_t x124 = INT32_MIN;
int16_t x137 = 0;
uint64_t x138 = UINT64_MAX;
int64_t x150 = -1LL;
volatile int64_t x171 = -455090LL;
int32_t x202 = 16157476;
static uint8_t x205 = 20U;
int64_t x208 = INT64_MIN;
volatile int64_t t23 = -7674596LL;
int16_t x211 = 16;
int32_t x215 = 152;
volatile int64_t t25 = -15710432848LL;
volatile uint64_t t27 = 156807799801052LLU;
volatile int64_t x226 = -1LL;
volatile uint64_t x227 = UINT64_MAX;
int8_t x230 = INT8_MAX;
int32_t x242 = INT32_MIN;
static uint32_t x243 = 31230U;
int16_t x244 = INT16_MIN;
int32_t x258 = 2;
volatile int32_t t32 = 6;
static int16_t x272 = INT16_MIN;
int16_t x294 = -1;
volatile uint64_t t37 = 1747813905923LLU;
volatile uint64_t x352 = 2664109LLU;
uint16_t x357 = UINT16_MAX;
uint64_t x362 = UINT64_MAX;
volatile uint64_t t42 = 138020LLU;
uint64_t x373 = 78456415LLU;
int64_t x395 = -1LL;
int16_t x406 = INT16_MAX;
int64_t x407 = -1LL;
int32_t x408 = INT32_MIN;
uint32_t x417 = UINT32_MAX;
int16_t x418 = INT16_MIN;
int32_t x429 = 1574;
static int16_t x432 = INT16_MIN;
volatile int32_t t48 = 84453091;
uint16_t x466 = UINT16_MAX;
int16_t x467 = -16324;
int16_t x470 = INT16_MIN;
int16_t x471 = 74;
int32_t x486 = INT32_MAX;
int8_t x487 = INT8_MAX;
int8_t x489 = 18;
static uint8_t x490 = 2U;
static uint16_t x493 = 7549U;
uint64_t x501 = 3741686696986LLU;
volatile uint64_t t60 = 2LLU;
int8_t x517 = INT8_MIN;
volatile int16_t x520 = -1;
uint64_t x535 = UINT64_MAX;
int64_t x537 = INT64_MIN;
uint64_t x546 = 41304327640627584LLU;
volatile uint16_t x547 = 20279U;
uint64_t x568 = 43782126436034024LLU;
volatile int32_t x584 = 777263682;
uint64_t x585 = 65LLU;
int32_t x594 = -108979830;
volatile int8_t x596 = -5;
int64_t x605 = -13LL;
uint8_t x607 = UINT8_MAX;
static volatile int64_t t70 = -15LL;
volatile uint64_t t72 = 112407542840058LLU;
int32_t x621 = -1;
uint8_t x624 = 56U;
uint64_t x627 = 1057890064LLU;
volatile uint64_t x628 = 510LLU;
volatile uint64_t t75 = 461168417729465613LLU;
volatile int64_t x653 = -3946934094598558389LL;
uint16_t x654 = UINT16_MAX;
int8_t x675 = INT8_MAX;
uint32_t x676 = 5498U;
volatile uint32_t x685 = UINT32_MAX;
uint8_t x688 = 12U;
uint16_t x722 = 21125U;
static uint32_t x737 = UINT32_MAX;
int32_t x742 = -1;
volatile uint8_t x744 = UINT8_MAX;
volatile uint32_t x767 = 2176838U;
uint16_t x781 = 613U;
uint64_t x782 = UINT64_MAX;
static int64_t x793 = INT64_MIN;
uint16_t x811 = UINT16_MAX;
int64_t x820 = -15613035723LL;
static uint32_t x823 = 30995U;
int8_t x824 = -1;
static int8_t x827 = INT8_MIN;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static int32_t x2 = INT32_MIN;
	uint32_t x3 = 39U;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 309474LL;

	t0 = (x1%((x2/x3)%x4));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x13 = UINT64_MAX;
	static int64_t x14 = INT64_MIN;
	int16_t x15 = 508;
	int8_t x16 = INT8_MAX;
	uint64_t t1 = 12290995311722370LLU;

	t1 = (x13%((x14/x15)%x16));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x17 = INT16_MIN;
	int64_t x18 = INT64_MIN;
	volatile int64_t x20 = 25318228165935436LL;
	volatile int64_t t2 = 175973321LL;

	t2 = (x17%((x18/x19)%x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x29 = -1;
	int32_t x30 = INT32_MIN;
	volatile uint32_t t3 = 172096U;

	t3 = (x29%((x30/x31)%x32));

	if (t3 != 15U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = 38998278767947LLU;
	uint64_t x39 = 963680194973LLU;
	int16_t x40 = -2;
	static volatile uint64_t t4 = 2912561110LLU;

	t4 = (x37%((x38/x39)%x40));

	if (t4 != 8LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x49 = -1LL;
	static int64_t x51 = INT64_MAX;
	volatile uint8_t x52 = UINT8_MAX;

	t5 = (x49%((x50/x51)%x52));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x59 = 10;
	volatile int64_t t6 = 740252164073799855LL;

	t6 = (x57%((x58/x59)%x60));

	if (t6 != -8LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x73 = 2;
	int8_t x75 = INT8_MIN;
	static uint32_t x76 = UINT32_MAX;
	volatile int64_t t7 = -127147576819801643LL;

	t7 = (x73%((x74/x75)%x76));

	if (t7 != 2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x78 = INT64_MIN;
	int8_t x80 = 40;
	int64_t t8 = -16190401075277LL;

	t8 = (x77%((x78/x79)%x80));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x81 = -1LL;
	volatile int64_t x82 = -20402373LL;
	uint64_t x83 = 12563223LLU;
	static volatile uint8_t x84 = UINT8_MAX;

	t9 = (x81%((x82/x83)%x84));

	if (t9 != 23LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x89 = 3304U;
	uint64_t x90 = 163445706584335278LLU;
	static int8_t x91 = INT8_MAX;
	uint64_t t10 = 54911822LLU;

	t10 = (x89%((x90/x91)%x92));

	if (t10 != 3304LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x102 = INT16_MIN;
	static int16_t x103 = INT16_MIN;
	volatile int32_t t11 = 13362967;

	t11 = (x101%((x102/x103)%x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x105 = INT16_MIN;
	int32_t x107 = 59;
	int64_t t12 = 583242477883LL;

	t12 = (x105%((x106/x107)%x108));

	if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x114 = INT32_MIN;
	static int32_t x115 = INT32_MIN;
	volatile uint64_t t13 = 157151969071LLU;

	t13 = (x113%((x114/x115)%x116));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x121 = 57U;
	int64_t x122 = INT64_MIN;
	volatile int64_t t14 = 2355510144447812LL;

	t14 = (x121%((x122/x123)%x124));

	if (t14 != 57LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x133 = 7559U;
	int16_t x134 = INT16_MIN;
	int16_t x135 = -1;
	int32_t x136 = 48476506;
	volatile uint32_t t15 = 664367U;

	t15 = (x133%((x134/x135)%x136));

	if (t15 != 7559U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x139 = INT8_MAX;
	int32_t x140 = INT32_MIN;
	volatile uint64_t t16 = 2078956022LLU;

	t16 = (x137%((x138/x139)%x140));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x141 = 15782U;
	int8_t x142 = INT8_MAX;
	int64_t x143 = -1LL;
	uint16_t x144 = 483U;
	int64_t t17 = 1847935880545952LL;

	t17 = (x141%((x142/x143)%x144));

	if (t17 != 34LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x149 = 251014LLU;
	static uint64_t x151 = UINT64_MAX;
	volatile uint64_t x152 = 1277227572LLU;
	volatile uint64_t t18 = 95278836525571LLU;

	t18 = (x149%((x150/x151)%x152));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x157 = 155369089U;
	static int32_t x158 = INT32_MIN;
	static int8_t x159 = 7;
	int32_t x160 = INT32_MIN;
	static volatile uint32_t t19 = 371346U;

	t19 = (x157%((x158/x159)%x160));

	if (t19 != 155369089U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x169 = INT64_MIN;
	int32_t x170 = -432524742;
	uint8_t x172 = 6U;
	volatile int64_t t20 = -11462615LL;

	t20 = (x169%((x170/x171)%x172));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int64_t x194 = 6736327497940LL;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = 127143448004491678LL;
	int64_t t21 = -55188LL;

	t21 = (x193%((x194/x195)%x196));

	if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x201 = INT8_MIN;
	int64_t x203 = -1061LL;
	int64_t x204 = -2918626LL;
	volatile int64_t t22 = 682668055923204468LL;

	t22 = (x201%((x202/x203)%x204));

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;

	t23 = (x205%((x206/x207)%x208));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x209 = 35;
	static volatile int32_t x210 = 201035235;
	int32_t x212 = 55196;
	volatile int32_t t24 = -10322077;

	t24 = (x209%((x210/x211)%x212));

	if (t24 != 35) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x213 = -323LL;
	static int32_t x214 = -9594476;
	int32_t x216 = INT32_MIN;

	t25 = (x213%((x214/x215)%x216));

	if (t25 != -323LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x217 = INT32_MIN;
	volatile int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	int8_t x220 = -5;
	int32_t t26 = 5;

	t26 = (x217%((x218/x219)%x220));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x221 = 369315U;
	uint64_t x222 = UINT64_MAX;
	volatile int32_t x223 = -6;
	static int32_t x224 = -81966;

	t27 = (x221%((x222/x223)%x224));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x225 = 1021073U;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t28 = 66221261503256656LLU;

	t28 = (x225%((x226/x227)%x228));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x229 = 90U;
	int32_t x231 = 14;
	int8_t x232 = INT8_MAX;
	int32_t t29 = 42934;

	t29 = (x229%((x230/x231)%x232));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x241 = -1;
	uint32_t t30 = 109U;

	t30 = (x241%((x242/x243)%x244));

	if (t30 != 30315U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x253 = INT8_MIN;
	uint64_t x254 = UINT64_MAX;
	volatile uint32_t x255 = 538150687U;
	volatile uint64_t x256 = 16263029336817371LLU;
	uint64_t t31 = 2218671510760330655LLU;

	t31 = (x253%((x254/x255)%x256));

	if (t31 != 286576699LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x257 = INT32_MAX;
	int16_t x259 = -1;
	volatile uint16_t x260 = 1710U;

	t32 = (x257%((x258/x259)%x260));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x261 = 897;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 53200038600681LLU;
	volatile int32_t x264 = 3982;
	volatile uint64_t t33 = 3LLU;

	t33 = (x261%((x262/x263)%x264));

	if (t33 != 279LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x265 = 41871570U;
	int64_t x266 = INT64_MAX;
	int32_t x267 = -1;
	uint8_t x268 = 32U;
	volatile int64_t t34 = -337051857LL;

	t34 = (x265%((x266/x267)%x268));

	if (t34 != 25LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x269 = 2618U;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MIN;
	volatile uint64_t t35 = 49295975LLU;

	t35 = (x269%((x270/x271)%x272));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x293 = INT16_MIN;
	uint32_t x295 = 52889U;
	int64_t x296 = INT64_MAX;
	int64_t t36 = -6347LL;

	t36 = (x293%((x294/x295)%x296));

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x297 = UINT64_MAX;
	int32_t x298 = INT32_MAX;
	int32_t x299 = INT32_MAX;
	int32_t x300 = INT32_MIN;

	t37 = (x297%((x298/x299)%x300));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x305 = 65986355469LLU;
	int64_t x306 = INT64_MIN;
	volatile uint64_t x307 = 137375175LLU;
	int8_t x308 = -1;
	volatile uint64_t t38 = 6091948203208LLU;

	t38 = (x305%((x306/x307)%x308));

	if (t38 != 65986355469LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x313 = INT64_MAX;
	int32_t x314 = INT32_MIN;
	uint16_t x315 = UINT16_MAX;
	static int16_t x316 = INT16_MAX;
	int64_t t39 = -625LL;

	t39 = (x313%((x314/x315)%x316));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x349 = -13287;
	int16_t x350 = 70;
	volatile int8_t x351 = -4;
	volatile uint64_t t40 = 70911LLU;

	t40 = (x349%((x350/x351)%x352));

	if (t40 != 1518575LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x358 = 802860U;
	volatile uint32_t x359 = 150U;
	volatile int32_t x360 = INT32_MAX;
	static volatile uint32_t t41 = 2014157387U;

	t41 = (x357%((x358/x359)%x360));

	if (t41 != 1311U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x361 = 643LLU;
	uint32_t x363 = 2U;
	volatile int16_t x364 = 15031;

	t42 = (x361%((x362/x363)%x364));

	if (t42 != 643LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x374 = INT32_MIN;
	static int32_t x375 = 322293234;
	static uint16_t x376 = UINT16_MAX;
	static uint64_t t43 = 10141034128LLU;

	t43 = (x373%((x374/x375)%x376));

	if (t43 != 78456415LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x393 = UINT32_MAX;
	uint8_t x394 = UINT8_MAX;
	uint32_t x396 = 14138537U;
	static int64_t t44 = 63214332736LL;

	t44 = (x393%((x394/x395)%x396));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x405 = INT64_MAX;
	int64_t t45 = 83412LL;

	t45 = (x405%((x406/x407)%x408));

	if (t45 != 7LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x419 = 20974075232962682LLU;
	uint16_t x420 = UINT16_MAX;
	volatile uint64_t t46 = 6355846752280051570LLU;

	t46 = (x417%((x418/x419)%x420));

	if (t46 != 132LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x430 = -581890681394LL;
	uint8_t x431 = 2U;
	static int64_t t47 = -4LL;

	t47 = (x429%((x430/x431)%x432));

	if (t47 != 1574LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x433 = 10231U;
	uint16_t x434 = 1U;
	static int32_t x435 = -1;
	static int16_t x436 = INT16_MIN;

	t48 = (x433%((x434/x435)%x436));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x441 = INT32_MIN;
	int16_t x442 = -15271;
	uint16_t x443 = 1U;
	int64_t x444 = 2075164803LL;
	int64_t t49 = -3425606523954249768LL;

	t49 = (x441%((x442/x443)%x444));

	if (t49 != -14544LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x453 = UINT64_MAX;
	static int64_t x454 = INT64_MAX;
	int8_t x455 = -1;
	volatile uint8_t x456 = 3U;
	static volatile uint64_t t50 = 1739197770827978765LLU;

	t50 = (x453%((x454/x455)%x456));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x461 = 3878U;
	int8_t x462 = INT8_MIN;
	uint16_t x463 = 11U;
	int64_t x464 = -3901LL;
	volatile int64_t t51 = -985689LL;

	t51 = (x461%((x462/x463)%x464));

	if (t51 != 6LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x465 = -14LL;
	static uint16_t x468 = UINT16_MAX;
	volatile int64_t t52 = 15LL;

	t52 = (x465%((x466/x467)%x468));

	if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x469 = 7U;
	static int64_t x472 = INT64_MIN;
	volatile int64_t t53 = 13116199274LL;

	t53 = (x469%((x470/x471)%x472));

	if (t53 != 7LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x477 = 2448353U;
	uint64_t x478 = UINT64_MAX;
	int32_t x479 = INT32_MIN;
	volatile uint64_t x480 = UINT64_MAX;
	static volatile uint64_t t54 = 4633LLU;

	t54 = (x477%((x478/x479)%x480));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x481 = UINT64_MAX;
	int16_t x482 = INT16_MIN;
	volatile int8_t x483 = INT8_MIN;
	volatile uint32_t x484 = UINT32_MAX;
	volatile uint64_t t55 = 205495827401610LLU;

	t55 = (x481%((x482/x483)%x484));

	if (t55 != 255LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x485 = INT8_MIN;
	int64_t x488 = INT64_MIN;
	int64_t t56 = -108195LL;

	t56 = (x485%((x486/x487)%x488));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x491 = -1;
	uint64_t x492 = UINT64_MAX;
	uint64_t t57 = 2930695547LLU;

	t57 = (x489%((x490/x491)%x492));

	if (t57 != 18LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x494 = 8330194382856LL;
	int64_t x495 = -54LL;
	uint64_t x496 = 87474442LLU;
	static volatile uint64_t t58 = 947476102765LLU;

	t58 = (x493%((x494/x495)%x496));

	if (t58 != 7549LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x502 = 35142064795778LL;
	int64_t x503 = 96990936429LL;
	int32_t x504 = INT32_MIN;
	static volatile uint64_t t59 = 19329901276694970LLU;

	t59 = (x501%((x502/x503)%x504));

	if (t59 != 234LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x513 = INT32_MIN;
	static uint64_t x514 = UINT64_MAX;
	int32_t x515 = INT32_MIN;
	volatile uint32_t x516 = UINT32_MAX;

	t60 = (x513%((x514/x515)%x516));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x518 = INT32_MIN;
	uint32_t x519 = 2109206697U;
	volatile uint32_t t61 = 0U;

	t61 = (x517%((x518/x519)%x520));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x533 = 411615848LL;
	volatile int8_t x534 = -1;
	static volatile int32_t x536 = INT32_MAX;
	uint64_t t62 = 47549047232606LLU;

	t62 = (x533%((x534/x535)%x536));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x538 = -1LL;
	volatile int8_t x539 = -1;
	static int8_t x540 = INT8_MIN;
	volatile int64_t t63 = 698095424618LL;

	t63 = (x537%((x538/x539)%x540));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x545 = INT32_MAX;
	int16_t x548 = INT16_MIN;
	volatile uint64_t t64 = 18LLU;

	t64 = (x545%((x546/x547)%x548));

	if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x565 = -1;
	int64_t x566 = INT64_MAX;
	uint16_t x567 = 1U;
	volatile uint64_t t65 = 15641LLU;

	t65 = (x565%((x566/x567)%x568));

	if (t65 != 10311886639276104LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x581 = INT8_MIN;
	volatile int16_t x582 = -1;
	uint64_t x583 = 44374631LLU;
	volatile uint64_t t66 = 240691117915LLU;

	t66 = (x581%((x582/x583)%x584));

	if (t66 != 421391848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x586 = INT32_MAX;
	static int32_t x587 = -1;
	int8_t x588 = INT8_MIN;
	volatile uint64_t t67 = 43209411524058LLU;

	t67 = (x585%((x586/x587)%x588));

	if (t67 != 65LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x593 = INT32_MAX;
	static int32_t x595 = 58;
	volatile int32_t t68 = 938;

	t68 = (x593%((x594/x595)%x596));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x606 = 1779;
	static int16_t x608 = 2225;
	int64_t t69 = -7LL;

	t69 = (x605%((x606/x607)%x608));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x609 = 19404U;
	static int32_t x610 = INT32_MAX;
	int64_t x611 = -37800312LL;
	static int32_t x612 = INT32_MIN;

	t70 = (x609%((x610/x611)%x612));

	if (t70 != 28LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x613 = UINT32_MAX;
	uint16_t x614 = 13U;
	int8_t x615 = -1;
	uint8_t x616 = 4U;
	volatile uint32_t t71 = 33013914U;

	t71 = (x613%((x614/x615)%x616));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x617 = INT32_MIN;
	int16_t x618 = INT16_MIN;
	uint16_t x619 = 29U;
	volatile uint64_t x620 = 1665254LLU;

	t72 = (x617%((x618/x619)%x620));

	if (t72 != 2621LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x622 = -824813383973624558LL;
	int64_t x623 = -120860884317685LL;
	static int64_t t73 = 6902642864LL;

	t73 = (x621%((x622/x623)%x624));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x625 = INT8_MIN;
	int64_t x626 = 259392257005325LL;
	uint64_t t74 = 493972308761412LLU;

	t74 = (x625%((x626/x627)%x628));

	if (t74 != 368LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x645 = 336372LLU;
	int8_t x646 = 10;
	static int32_t x647 = -1;
	uint64_t x648 = 24831501436461264LLU;

	t75 = (x645%((x646/x647)%x648));

	if (t75 != 336372LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x649 = INT64_MAX;
	int64_t x650 = -7987LL;
	int8_t x651 = 46;
	uint64_t x652 = UINT64_MAX;
	static volatile uint64_t t76 = 1LLU;

	t76 = (x649%((x650/x651)%x652));

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x655 = 20U;
	volatile int8_t x656 = -16;
	int64_t t77 = -29970510045757891LL;

	t77 = (x653%((x654/x655)%x656));

	if (t77 != -9LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x665 = INT32_MAX;
	static uint32_t x666 = UINT32_MAX;
	int8_t x667 = -1;
	volatile int32_t x668 = -52;
	static uint32_t t78 = 11414U;

	t78 = (x665%((x666/x667)%x668));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x669 = UINT64_MAX;
	int16_t x670 = INT16_MIN;
	uint32_t x671 = 2236U;
	int16_t x672 = INT16_MIN;
	volatile uint64_t t79 = 13354459786LLU;

	t79 = (x669%((x670/x671)%x672));

	if (t79 != 565021LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x673 = INT8_MIN;
	static int64_t x674 = INT64_MAX;
	volatile int64_t t80 = -1396689988341298932LL;

	t80 = (x673%((x674/x675)%x676));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x677 = 18U;
	int64_t x678 = -3658827720894044330LL;
	int8_t x679 = INT8_MAX;
	volatile uint64_t x680 = 319748414697843896LLU;
	uint64_t t81 = 1LLU;

	t81 = (x677%((x678/x679)%x680));

	if (t81 != 18LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x686 = INT16_MIN;
	uint8_t x687 = 3U;
	volatile uint32_t t82 = 1317426U;

	t82 = (x685%((x686/x687)%x688));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x689 = INT64_MIN;
	int32_t x690 = INT32_MIN;
	static int32_t x691 = INT32_MIN;
	int32_t x692 = -4587903;
	int64_t t83 = 6589286844860691LL;

	t83 = (x689%((x690/x691)%x692));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x697 = INT64_MIN;
	volatile int32_t x698 = INT32_MAX;
	int16_t x699 = 1;
	uint8_t x700 = 5U;
	volatile int64_t t84 = -77LL;

	t84 = (x697%((x698/x699)%x700));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x713 = UINT8_MAX;
	volatile int8_t x714 = INT8_MIN;
	int8_t x715 = -1;
	int32_t x716 = INT32_MIN;
	volatile int32_t t85 = -56505;

	t85 = (x713%((x714/x715)%x716));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x721 = -49168;
	int8_t x723 = INT8_MIN;
	int8_t x724 = INT8_MIN;
	static int32_t t86 = 298768;

	t86 = (x721%((x722/x723)%x724));

	if (t86 != -32) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x738 = 34U;
	static uint16_t x739 = 24U;
	int16_t x740 = INT16_MIN;
	volatile uint32_t t87 = 132730U;

	t87 = (x737%((x738/x739)%x740));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x741 = 84194U;
	static volatile int16_t x743 = -1;
	volatile uint32_t t88 = 29U;

	t88 = (x741%((x742/x743)%x744));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x749 = INT32_MIN;
	uint32_t x750 = 674U;
	volatile uint8_t x751 = UINT8_MAX;
	int64_t x752 = INT64_MIN;
	int64_t t89 = -2300847592LL;

	t89 = (x749%((x750/x751)%x752));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x765 = -1;
	int32_t x766 = INT32_MIN;
	int8_t x768 = INT8_MIN;
	volatile uint32_t t90 = 7883U;

	t90 = (x765%((x766/x767)%x768));

	if (t90 != 595U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x777 = -1;
	int64_t x778 = 683633989977LL;
	static int32_t x779 = -760823;
	int16_t x780 = INT16_MIN;
	static int64_t t91 = -657LL;

	t91 = (x777%((x778/x779)%x780));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x783 = -1;
	int64_t x784 = INT64_MIN;
	volatile uint64_t t92 = 2458830878LLU;

	t92 = (x781%((x782/x783)%x784));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x794 = 1007U;
	static uint32_t x795 = 1U;
	volatile int8_t x796 = INT8_MIN;
	int64_t t93 = 0LL;

	t93 = (x793%((x794/x795)%x796));

	if (t93 != -246LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x801 = 1078U;
	static uint64_t x802 = UINT64_MAX;
	static int8_t x803 = -19;
	int32_t x804 = -1;
	uint64_t t94 = 26569734354LLU;

	t94 = (x801%((x802/x803)%x804));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x805 = 1;
	static int32_t x806 = -1;
	int16_t x807 = -1;
	volatile uint64_t x808 = UINT64_MAX;
	static uint64_t t95 = 64699234138668823LLU;

	t95 = (x805%((x806/x807)%x808));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x809 = -1;
	int32_t x810 = INT32_MAX;
	uint32_t x812 = 2085372502U;
	volatile uint32_t t96 = 1221425U;

	t96 = (x809%((x810/x811)%x812));

	if (t96 != 32767U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x817 = INT32_MIN;
	volatile int16_t x818 = INT16_MIN;
	int8_t x819 = INT8_MIN;
	static int64_t t97 = -2966LL;

	t97 = (x817%((x818/x819)%x820));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x821 = 14U;
	static int16_t x822 = -1;
	volatile uint32_t t98 = 0U;

	t98 = (x821%((x822/x823)%x824));

	if (t98 != 14U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x825 = 1U;
	uint8_t x826 = UINT8_MAX;
	volatile uint32_t x828 = 44127360U;
	static uint32_t t99 = 13321U;

	t99 = (x825%((x826/x827)%x828));

	if (t99 != 1U) { NG(); } else { ; }
	
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

