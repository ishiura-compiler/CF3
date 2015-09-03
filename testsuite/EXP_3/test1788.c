#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x51 = 38422744U;
volatile int16_t x56 = 2;
uint8_t x62 = 23U;
uint32_t x70 = 455547593U;
volatile int64_t x88 = INT64_MIN;
int16_t x94 = INT16_MAX;
static int16_t x96 = INT16_MIN;
static uint16_t x111 = 3U;
int16_t x114 = INT16_MIN;
volatile int16_t x115 = INT16_MIN;
int16_t x116 = INT16_MAX;
int32_t t13 = 16770425;
volatile int16_t x134 = INT16_MIN;
static int32_t x140 = 4;
int32_t t16 = 911877;
int16_t x154 = -1;
int8_t x156 = 1;
uint64_t x162 = 17357187843339731LLU;
static uint16_t x163 = UINT16_MAX;
volatile int64_t x164 = INT64_MIN;
static int64_t x166 = -44975LL;
volatile int32_t t20 = 619351376;
int8_t x181 = INT8_MIN;
uint8_t x183 = 6U;
uint8_t x207 = 2U;
volatile int32_t t24 = 0;
int64_t x226 = INT64_MIN;
static uint64_t x232 = 425774503LLU;
int64_t x234 = INT64_MIN;
uint8_t x276 = UINT8_MAX;
static volatile int32_t t31 = -1024744919;
int32_t x281 = INT32_MIN;
static int64_t x309 = 86603123779936519LL;
int64_t x317 = INT64_MIN;
uint8_t x319 = 110U;
static volatile int32_t t34 = 255916886;
int32_t x341 = INT32_MIN;
int32_t x352 = INT32_MIN;
volatile int32_t t38 = -23;
volatile uint8_t x370 = 6U;
uint8_t x373 = UINT8_MAX;
static uint64_t x386 = 56836931478865682LLU;
int64_t x397 = -46962LL;
static int16_t x398 = INT16_MIN;
static int32_t x420 = 28;
int32_t t46 = -1;
int32_t x469 = INT32_MAX;
static int64_t x482 = INT64_MAX;
int16_t x488 = INT16_MIN;
static int8_t x503 = -1;
volatile int32_t t50 = 2;
int16_t x506 = INT16_MAX;
int32_t x523 = 1;
uint32_t x524 = UINT32_MAX;
volatile int32_t t52 = -6;
uint16_t x531 = 7U;
uint64_t x555 = 1930LLU;
int32_t x571 = 18;
static uint64_t x572 = 1680481261211223951LLU;
int8_t x605 = 61;
uint8_t x606 = 20U;
uint8_t x607 = 1U;
int16_t x608 = -1;
int32_t x625 = INT32_MIN;
volatile int32_t x641 = INT32_MAX;
volatile int32_t t60 = -85772477;
volatile uint32_t x671 = 18U;
uint8_t x672 = UINT8_MAX;
volatile int32_t t63 = 7773;
volatile int32_t t64 = -12120472;
uint64_t x722 = UINT64_MAX;
uint16_t x751 = 0U;
int8_t x752 = INT8_MIN;
uint8_t x775 = 0U;
int32_t t71 = 4054630;
int64_t x781 = INT64_MAX;
int16_t x803 = INT16_MAX;
uint8_t x807 = 22U;
volatile int16_t x809 = INT16_MIN;
int64_t x815 = INT64_MIN;
volatile int64_t x816 = INT64_MAX;
uint32_t x827 = 22590662U;
int32_t x833 = INT32_MIN;
uint64_t x869 = 0LLU;
int8_t x872 = 12;
int64_t x878 = 2149365754164426LL;
int64_t x879 = INT64_MIN;
int32_t t81 = -3907;
int32_t x883 = INT32_MIN;
int8_t x900 = INT8_MAX;
int16_t x909 = INT16_MIN;
int64_t x912 = INT64_MIN;
int16_t x915 = INT16_MIN;
int64_t x917 = INT64_MIN;
int32_t x924 = -3408993;
volatile int32_t t88 = 18291761;
uint32_t x949 = 30484589U;
uint8_t x964 = 0U;
int32_t t91 = 31;
static volatile int64_t x979 = INT64_MIN;
static uint16_t x1006 = 26892U;
static uint16_t x1026 = UINT16_MAX;
int8_t x1027 = 5;
uint32_t x1033 = UINT32_MAX;
volatile int64_t x1043 = INT64_MIN;


void f0(void) {
	int8_t x9 = -3;
	int16_t x10 = -1;
	static int32_t x11 = INT32_MIN;
	volatile int32_t x12 = 29511;
	static int32_t t0 = 4563854;

	t0 = ((x9==x10)>>(x11&x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x13 = 64U;
	int64_t x14 = INT64_MAX;
	volatile int32_t x15 = INT32_MIN;
	volatile int16_t x16 = 14313;
	static int32_t t1 = 7429;

	t1 = ((x13==x14)>>(x15&x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x29 = 24U;
	uint16_t x30 = 26858U;
	static volatile uint64_t x31 = 82LLU;
	int8_t x32 = INT8_MIN;
	int32_t t2 = 356803025;

	t2 = ((x29==x30)>>(x31&x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x49 = 69U;
	static int8_t x50 = -1;
	volatile int32_t x52 = INT32_MIN;
	int32_t t3 = 9;

	t3 = ((x49==x50)>>(x51&x52));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x53 = INT32_MAX;
	static int16_t x54 = INT16_MIN;
	int64_t x55 = -1LL;
	static volatile int32_t t4 = 430;

	t4 = ((x53==x54)>>(x55&x56));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x61 = INT8_MIN;
	static int32_t x63 = -2;
	uint8_t x64 = 1U;
	static int32_t t5 = 2504;

	t5 = ((x61==x62)>>(x63&x64));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x71 = 330U;
	static uint8_t x72 = 6U;
	int32_t t6 = -2;

	t6 = ((x69==x70)>>(x71&x72));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x73 = 34U;
	static volatile int16_t x74 = INT16_MAX;
	static volatile int32_t x75 = INT32_MIN;
	uint32_t x76 = 8U;
	volatile int32_t t7 = -13981976;

	t7 = ((x73==x74)>>(x75&x76));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x86 = 1U;
	uint16_t x87 = 4957U;
	static volatile int32_t t8 = -1027;

	t8 = ((x85==x86)>>(x87&x88));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x93 = 257U;
	uint8_t x95 = 18U;
	int32_t t9 = 6;

	t9 = ((x93==x94)>>(x95&x96));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x105 = -1LL;
	int32_t x106 = INT32_MIN;
	static volatile uint64_t x107 = 19LLU;
	uint16_t x108 = 10U;
	static volatile int32_t t10 = -63;

	t10 = ((x105==x106)>>(x107&x108));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x109 = 25;
	static uint16_t x110 = UINT16_MAX;
	static int32_t x112 = INT32_MAX;
	int32_t t11 = -226603;

	t11 = ((x109==x110)>>(x111&x112));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x113 = 29525427364777LLU;
	int32_t t12 = 57840;

	t12 = ((x113==x114)>>(x115&x116));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x121 = 52U;
	static int8_t x122 = 0;
	int16_t x123 = INT16_MAX;
	uint16_t x124 = 8U;

	t13 = ((x121==x122)>>(x123&x124));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MAX;
	uint64_t x131 = 1LLU;
	volatile int64_t x132 = INT64_MIN;
	int32_t t14 = -1;

	t14 = ((x129==x130)>>(x131&x132));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x133 = UINT32_MAX;
	int64_t x135 = INT64_MIN;
	int16_t x136 = 23;
	int32_t t15 = 1;

	t15 = ((x133==x134)>>(x135&x136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x137 = 0LL;
	volatile int16_t x138 = -1;
	int32_t x139 = -1;

	t16 = ((x137==x138)>>(x139&x140));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x153 = UINT8_MAX;
	static uint16_t x155 = 12U;
	volatile int32_t t17 = -328;

	t17 = ((x153==x154)>>(x155&x156));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int8_t x159 = 12;
	int64_t x160 = -1LL;
	static volatile int32_t t18 = 11945;

	t18 = ((x157==x158)>>(x159&x160));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x161 = -37;
	int32_t t19 = 1;

	t19 = ((x161==x162)>>(x163&x164));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x165 = -1;
	int32_t x167 = 30233934;
	int8_t x168 = 18;

	t20 = ((x165==x166)>>(x167&x168));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x169 = -1;
	int32_t x170 = INT32_MIN;
	volatile int32_t x171 = 7;
	int8_t x172 = -20;
	int32_t t21 = 5;

	t21 = ((x169==x170)>>(x171&x172));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x173 = UINT16_MAX;
	static int64_t x174 = INT64_MAX;
	uint32_t x175 = 125U;
	int32_t x176 = -833636;
	int32_t t22 = 5054734;

	t22 = ((x173==x174)>>(x175&x176));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x182 = INT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t23 = -1;

	t23 = ((x181==x182)>>(x183&x184));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x205 = 1;
	static uint64_t x206 = 3862557626696637LLU;
	volatile int64_t x208 = INT64_MIN;

	t24 = ((x205==x206)>>(x207&x208));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x217 = -203;
	int32_t x218 = 1;
	volatile int16_t x219 = INT16_MIN;
	int16_t x220 = 64;
	int32_t t25 = -1;

	t25 = ((x217==x218)>>(x219&x220));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x225 = -1LL;
	volatile int8_t x227 = INT8_MIN;
	uint32_t x228 = 7U;
	int32_t t26 = -4;

	t26 = ((x225==x226)>>(x227&x228));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x229 = 9929965LLU;
	static int64_t x230 = -1LL;
	int16_t x231 = 1;
	static int32_t t27 = -37;

	t27 = ((x229==x230)>>(x231&x232));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x233 = -1;
	static int16_t x235 = 7;
	static int32_t x236 = -313555028;
	volatile int32_t t28 = -47;

	t28 = ((x233==x234)>>(x235&x236));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x237 = 384020881644LLU;
	int64_t x238 = INT64_MAX;
	uint8_t x239 = 1U;
	int8_t x240 = INT8_MIN;
	volatile int32_t t29 = -3;

	t29 = ((x237==x238)>>(x239&x240));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x253 = -1;
	int32_t x254 = -1;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = 0U;
	int32_t t30 = 24640726;

	t30 = ((x253==x254)>>(x255&x256));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x273 = 309177451;
	uint8_t x274 = 18U;
	int16_t x275 = 4;

	t31 = ((x273==x274)>>(x275&x276));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = 0;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t32 = 2446;

	t32 = ((x281==x282)>>(x283&x284));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x310 = 89U;
	uint8_t x311 = UINT8_MAX;
	static uint64_t x312 = 1LLU;
	static int32_t t33 = 1;

	t33 = ((x309==x310)>>(x311&x312));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x318 = 2483957307611411LLU;
	int64_t x320 = 1LL;

	t34 = ((x317==x318)>>(x319&x320));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x337 = 1U;
	static int32_t x338 = INT32_MIN;
	static uint16_t x339 = UINT16_MAX;
	uint32_t x340 = 0U;
	int32_t t35 = -1390;

	t35 = ((x337==x338)>>(x339&x340));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x342 = INT16_MIN;
	uint16_t x343 = 67U;
	static int32_t x344 = -145490;
	static volatile int32_t t36 = 23680041;

	t36 = ((x341==x342)>>(x343&x344));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MAX;
	int8_t x351 = 1;
	volatile int32_t t37 = 1;

	t37 = ((x349==x350)>>(x351&x352));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x357 = -28;
	uint8_t x358 = 7U;
	uint32_t x359 = 327U;
	int8_t x360 = 28;

	t38 = ((x357==x358)>>(x359&x360));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x369 = -224;
	int32_t x371 = INT32_MIN;
	volatile int32_t x372 = INT32_MAX;
	int32_t t39 = -369786;

	t39 = ((x369==x370)>>(x371&x372));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x374 = INT8_MAX;
	int8_t x375 = 28;
	int8_t x376 = 14;
	volatile int32_t t40 = 859;

	t40 = ((x373==x374)>>(x375&x376));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x385 = -1;
	int64_t x387 = INT64_MIN;
	static uint32_t x388 = UINT32_MAX;
	static volatile int32_t t41 = 88;

	t41 = ((x385==x386)>>(x387&x388));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x393 = INT16_MAX;
	int16_t x394 = -1;
	int16_t x395 = -663;
	static int8_t x396 = 0;
	static int32_t t42 = 59762;

	t42 = ((x393==x394)>>(x395&x396));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x399 = 3;
	volatile int8_t x400 = INT8_MIN;
	volatile int32_t t43 = -2191;

	t43 = ((x397==x398)>>(x399&x400));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x409 = 5007U;
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = INT8_MIN;
	uint8_t x412 = 2U;
	int32_t t44 = -964234442;

	t44 = ((x409==x410)>>(x411&x412));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x417 = 1U;
	int64_t x418 = 3141LL;
	uint32_t x419 = 3737U;
	int32_t t45 = 231666893;

	t45 = ((x417==x418)>>(x419&x420));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x445 = -180636250999745LL;
	int8_t x446 = -1;
	volatile int8_t x447 = 11;
	volatile int64_t x448 = 3571619304919744LL;

	t46 = ((x445==x446)>>(x447&x448));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x470 = 102;
	int64_t x471 = 0LL;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t47 = 0;

	t47 = ((x469==x470)>>(x471&x472));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x481 = UINT16_MAX;
	int8_t x483 = 53;
	int16_t x484 = 2;
	static int32_t t48 = -822;

	t48 = ((x481==x482)>>(x483&x484));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x485 = -1LL;
	static volatile int16_t x486 = INT16_MIN;
	volatile uint32_t x487 = 2490U;
	static volatile int32_t t49 = 178;

	t49 = ((x485==x486)>>(x487&x488));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x501 = -1;
	int16_t x502 = 292;
	uint8_t x504 = 2U;

	t50 = ((x501==x502)>>(x503&x504));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x505 = 4735;
	volatile uint8_t x507 = 9U;
	int64_t x508 = INT64_MAX;
	int32_t t51 = -253312;

	t51 = ((x505==x506)>>(x507&x508));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x521 = INT32_MIN;
	int16_t x522 = INT16_MAX;

	t52 = ((x521==x522)>>(x523&x524));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x525 = 11616;
	volatile int64_t x526 = INT64_MIN;
	uint8_t x527 = 1U;
	int16_t x528 = INT16_MIN;
	volatile int32_t t53 = -131;

	t53 = ((x525==x526)>>(x527&x528));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x529 = INT16_MIN;
	uint8_t x530 = UINT8_MAX;
	int16_t x532 = INT16_MIN;
	int32_t t54 = 3190538;

	t54 = ((x529==x530)>>(x531&x532));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x553 = INT32_MAX;
	int8_t x554 = -1;
	int8_t x556 = 1;
	static volatile int32_t t55 = 43284745;

	t55 = ((x553==x554)>>(x555&x556));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x561 = 26U;
	int16_t x562 = INT16_MIN;
	volatile int64_t x563 = INT64_MIN;
	static uint8_t x564 = 61U;
	int32_t t56 = 0;

	t56 = ((x561==x562)>>(x563&x564));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x569 = -1LL;
	int64_t x570 = INT64_MAX;
	volatile int32_t t57 = -16347742;

	t57 = ((x569==x570)>>(x571&x572));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t t58 = -2599;

	t58 = ((x605==x606)>>(x607&x608));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x626 = 7316092LL;
	int32_t x627 = INT32_MIN;
	uint32_t x628 = 3683U;
	static int32_t t59 = -332390;

	t59 = ((x625==x626)>>(x627&x628));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x642 = UINT32_MAX;
	uint16_t x643 = 21U;
	int64_t x644 = -1671LL;

	t60 = ((x641==x642)>>(x643&x644));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x661 = 1U;
	uint32_t x662 = 119891U;
	static volatile int32_t x663 = INT32_MAX;
	int8_t x664 = 0;
	int32_t t61 = 97;

	t61 = ((x661==x662)>>(x663&x664));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x669 = 58964390584LLU;
	int64_t x670 = -1LL;
	static int32_t t62 = 36911;

	t62 = ((x669==x670)>>(x671&x672));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x673 = INT32_MAX;
	uint16_t x674 = UINT16_MAX;
	int8_t x675 = 3;
	volatile int8_t x676 = INT8_MIN;

	t63 = ((x673==x674)>>(x675&x676));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x681 = 9U;
	uint16_t x682 = 259U;
	uint64_t x683 = 675471329446189412LLU;
	volatile uint8_t x684 = 0U;

	t64 = ((x681==x682)>>(x683&x684));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x721 = UINT16_MAX;
	int8_t x723 = INT8_MIN;
	static int8_t x724 = INT8_MAX;
	volatile int32_t t65 = 406;

	t65 = ((x721==x722)>>(x723&x724));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x729 = INT8_MAX;
	int16_t x730 = INT16_MIN;
	int32_t x731 = INT32_MIN;
	static int64_t x732 = 19866904LL;
	volatile int32_t t66 = 12;

	t66 = ((x729==x730)>>(x731&x732));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x737 = 210LLU;
	int64_t x738 = -26843107LL;
	int32_t x739 = -1;
	uint64_t x740 = 1LLU;
	int32_t t67 = 682922;

	t67 = ((x737==x738)>>(x739&x740));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x749 = 3850775147400659LLU;
	volatile int8_t x750 = 1;
	volatile int32_t t68 = 25501;

	t68 = ((x749==x750)>>(x751&x752));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x761 = 1;
	int32_t x762 = INT32_MAX;
	uint32_t x763 = UINT32_MAX;
	uint8_t x764 = 1U;
	static volatile int32_t t69 = -949;

	t69 = ((x761==x762)>>(x763&x764));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x769 = 21U;
	uint8_t x770 = UINT8_MAX;
	static uint8_t x771 = 58U;
	int8_t x772 = INT8_MIN;
	int32_t t70 = -997085475;

	t70 = ((x769==x770)>>(x771&x772));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x773 = INT16_MIN;
	int8_t x774 = INT8_MAX;
	volatile int32_t x776 = -5851;

	t71 = ((x773==x774)>>(x775&x776));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x782 = 18833966034798882LL;
	int32_t x783 = 3;
	uint16_t x784 = 103U;
	volatile int32_t t72 = 677865023;

	t72 = ((x781==x782)>>(x783&x784));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x801 = UINT32_MAX;
	int32_t x802 = 672606;
	int8_t x804 = 4;
	static volatile int32_t t73 = -30;

	t73 = ((x801==x802)>>(x803&x804));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x805 = 21476U;
	volatile int16_t x806 = INT16_MAX;
	int16_t x808 = -1;
	static volatile int32_t t74 = -38179;

	t74 = ((x805==x806)>>(x807&x808));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x810 = INT64_MAX;
	int8_t x811 = INT8_MIN;
	static int8_t x812 = INT8_MAX;
	int32_t t75 = 670985;

	t75 = ((x809==x810)>>(x811&x812));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x813 = -1;
	int64_t x814 = 67141490072463101LL;
	volatile int32_t t76 = -1;

	t76 = ((x813==x814)>>(x815&x816));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x825 = INT16_MIN;
	int64_t x826 = INT64_MIN;
	int64_t x828 = INT64_MIN;
	static volatile int32_t t77 = 1;

	t77 = ((x825==x826)>>(x827&x828));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x834 = INT64_MAX;
	int32_t x835 = INT32_MIN;
	int32_t x836 = INT32_MAX;
	volatile int32_t t78 = 30;

	t78 = ((x833==x834)>>(x835&x836));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x870 = INT8_MAX;
	volatile int16_t x871 = -8572;
	volatile int32_t t79 = 10176346;

	t79 = ((x869==x870)>>(x871&x872));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x873 = INT16_MIN;
	static int16_t x874 = INT16_MIN;
	int16_t x875 = INT16_MIN;
	volatile int32_t x876 = 1;
	static int32_t t80 = 847545;

	t80 = ((x873==x874)>>(x875&x876));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x877 = 1288;
	volatile int64_t x880 = 5113572327233740LL;

	t81 = ((x877==x878)>>(x879&x880));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x881 = INT8_MIN;
	int8_t x882 = -1;
	int32_t x884 = INT32_MAX;
	int32_t t82 = -3172;

	t82 = ((x881==x882)>>(x883&x884));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x893 = INT32_MAX;
	int16_t x894 = -1;
	static int64_t x895 = 0LL;
	static volatile int64_t x896 = 293234306634LL;
	int32_t t83 = -480289;

	t83 = ((x893==x894)>>(x895&x896));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x897 = 65U;
	static uint64_t x898 = 23122786LLU;
	static uint16_t x899 = 1U;
	static volatile int32_t t84 = -3;

	t84 = ((x897==x898)>>(x899&x900));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x910 = -26;
	int64_t x911 = 119011518068636LL;
	int32_t t85 = -1;

	t85 = ((x909==x910)>>(x911&x912));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x913 = INT8_MIN;
	static uint64_t x914 = 0LLU;
	static int16_t x916 = 2937;
	volatile int32_t t86 = 30003173;

	t86 = ((x913==x914)>>(x915&x916));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x918 = UINT64_MAX;
	int32_t x919 = 15;
	int16_t x920 = -1;
	volatile int32_t t87 = -630001019;

	t87 = ((x917==x918)>>(x919&x920));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x921 = INT8_MIN;
	int64_t x922 = -1LL;
	int16_t x923 = 88;

	t88 = ((x921==x922)>>(x923&x924));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x941 = INT32_MIN;
	static int32_t x942 = INT32_MIN;
	static int32_t x943 = INT32_MIN;
	volatile uint64_t x944 = 17LLU;
	volatile int32_t t89 = -34240;

	t89 = ((x941==x942)>>(x943&x944));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x950 = INT32_MAX;
	int32_t x951 = INT32_MIN;
	static volatile int32_t x952 = 12121;
	static volatile int32_t t90 = 1643914;

	t90 = ((x949==x950)>>(x951&x952));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x961 = 85U;
	static uint16_t x962 = 9371U;
	volatile int8_t x963 = -6;

	t91 = ((x961==x962)>>(x963&x964));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x977 = UINT16_MAX;
	uint8_t x978 = 30U;
	uint16_t x980 = 289U;
	int32_t t92 = 470699;

	t92 = ((x977==x978)>>(x979&x980));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x997 = 31433;
	int32_t x998 = INT32_MIN;
	int64_t x999 = -11747LL;
	static uint8_t x1000 = 1U;
	static volatile int32_t t93 = 5516371;

	t93 = ((x997==x998)>>(x999&x1000));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x1005 = -4;
	uint8_t x1007 = 10U;
	static int32_t x1008 = INT32_MAX;
	static int32_t t94 = -319174;

	t94 = ((x1005==x1006)>>(x1007&x1008));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1009 = INT16_MAX;
	int32_t x1010 = INT32_MIN;
	static int64_t x1011 = INT64_MIN;
	uint8_t x1012 = 1U;
	volatile int32_t t95 = -4806;

	t95 = ((x1009==x1010)>>(x1011&x1012));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1017 = INT16_MAX;
	int8_t x1018 = INT8_MAX;
	uint8_t x1019 = UINT8_MAX;
	volatile int32_t x1020 = INT32_MIN;
	volatile int32_t t96 = -74985196;

	t96 = ((x1017==x1018)>>(x1019&x1020));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1025 = INT32_MIN;
	uint64_t x1028 = 5546912LLU;
	volatile int32_t t97 = 23019385;

	t97 = ((x1025==x1026)>>(x1027&x1028));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1034 = INT32_MAX;
	static int8_t x1035 = INT8_MIN;
	int8_t x1036 = 15;
	int32_t t98 = -29;

	t98 = ((x1033==x1034)>>(x1035&x1036));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1041 = -1;
	volatile uint16_t x1042 = 15U;
	uint16_t x1044 = 3U;
	static int32_t t99 = -54681;

	t99 = ((x1041==x1042)>>(x1043&x1044));

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

