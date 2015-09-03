#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t3 = -477LL;
int16_t x40 = INT16_MAX;
int16_t x50 = INT16_MIN;
static int32_t x60 = INT32_MIN;
uint16_t x63 = 10U;
volatile uint16_t x70 = 2977U;
int32_t t9 = INT32_MAX;
int16_t x73 = INT16_MAX;
volatile int64_t t11 = INT64_MAX;
uint64_t x121 = 1144526320515484078LLU;
int64_t x123 = -1LL;
volatile uint64_t t14 = 62714LLU;
int16_t x132 = INT16_MIN;
static int32_t x148 = INT32_MIN;
volatile int8_t x160 = -1;
int64_t t20 = 6237190112096LL;
static uint8_t x213 = 9U;
volatile uint32_t x247 = UINT32_MAX;
int16_t x248 = INT16_MAX;
volatile uint64_t t27 = UINT64_MAX;
static int64_t x277 = INT64_MAX;
static uint16_t x279 = UINT16_MAX;
int32_t x301 = INT32_MAX;
int64_t x303 = INT64_MAX;
int64_t x308 = -1LL;
volatile int32_t t32 = 7280375;
int32_t x323 = 7839186;
volatile int8_t x327 = 62;
volatile int16_t x330 = INT16_MIN;
int8_t x349 = INT8_MAX;
static int64_t x354 = INT64_MIN;
uint64_t t40 = 6111106853322146LLU;
volatile int64_t x373 = 180259915993134LL;
volatile int64_t x384 = INT64_MIN;
uint32_t x394 = 444804U;
uint64_t x397 = 50648148866214110LLU;
volatile uint64_t x400 = 6LLU;
volatile uint8_t x432 = 27U;
uint16_t x433 = 117U;
int16_t x447 = INT16_MIN;
volatile int32_t t52 = 1171;
int16_t x497 = 6875;
int32_t t55 = 311;
static uint8_t x505 = 9U;
uint64_t x512 = UINT64_MAX;
volatile int8_t x518 = INT8_MAX;
volatile uint32_t t61 = 561206U;
int32_t x535 = 22905956;
int32_t x536 = INT32_MAX;
int32_t x550 = -1;
uint32_t x553 = UINT32_MAX;
uint16_t x554 = UINT16_MAX;
uint8_t x555 = 99U;
int64_t x563 = 110686820165517434LL;
static int64_t x568 = -599553545786560LL;
static int32_t x575 = 5432;
static int64_t x576 = -1LL;
static volatile int32_t t67 = INT32_MAX;
static volatile int32_t x592 = INT32_MIN;
static volatile int64_t t69 = INT64_MAX;
int32_t x594 = INT32_MIN;
uint8_t x603 = UINT8_MAX;
uint8_t x604 = 18U;
uint32_t t72 = 930U;
static int32_t t75 = 7710828;
int8_t x646 = -63;
uint64_t x663 = 644666662445766LLU;
static volatile uint32_t x711 = 0U;
int16_t x746 = -1;
volatile uint8_t x761 = 4U;
int32_t x763 = -85287263;
int16_t x764 = INT16_MAX;
static uint8_t x765 = 6U;
int8_t x766 = INT8_MAX;
int16_t x777 = 21;
int32_t x778 = 338682335;
volatile uint8_t x780 = 2U;
uint8_t x781 = 111U;
int16_t x783 = -1;
static volatile int32_t t86 = -1;
uint32_t x786 = 33566942U;
uint64_t t87 = UINT64_MAX;
int64_t x801 = 51338598899361252LL;
int64_t x805 = INT64_MAX;
uint16_t x849 = UINT16_MAX;
uint16_t x851 = 2U;
int8_t x852 = -1;
static int32_t t93 = -365601;
volatile uint64_t t94 = UINT64_MAX;
uint16_t x861 = UINT16_MAX;
uint64_t x868 = UINT64_MAX;
volatile int8_t x885 = INT8_MAX;
volatile uint16_t x890 = UINT16_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int8_t x2 = INT8_MIN;
	uint16_t x3 = UINT16_MAX;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = 73362;

	t0 = (x1<<((x2-x3)==x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = INT64_MAX;
	uint64_t x18 = UINT64_MAX;
	int16_t x19 = -1;
	volatile int32_t x20 = INT32_MAX;
	static int64_t t1 = INT64_MAX;

	t1 = (x17<<((x18-x19)==x20));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = UINT16_MAX;
	uint64_t x22 = 56635423508129LLU;
	volatile int64_t x23 = INT64_MIN;
	static int64_t x24 = INT64_MAX;
	volatile int32_t t2 = 4819;

	t2 = (x21<<((x22-x23)==x24));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x29 = 230995046479LL;
	int32_t x30 = INT32_MIN;
	int16_t x31 = -18;
	int32_t x32 = 1;

	t3 = (x29<<((x30-x31)==x32));

	if (t3 != 230995046479LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x37 = INT32_MAX;
	int32_t x38 = -14;
	int16_t x39 = -1;
	int32_t t4 = INT32_MAX;

	t4 = (x37<<((x38-x39)==x40));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x45 = INT32_MAX;
	uint32_t x46 = 2375U;
	static uint64_t x47 = 74032807LLU;
	int8_t x48 = INT8_MIN;
	volatile int32_t t5 = INT32_MAX;

	t5 = (x45<<((x46-x47)==x48));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = 7117633LLU;
	int32_t x51 = -1;
	static int64_t x52 = 0LL;
	volatile uint64_t t6 = 593290327046716040LLU;

	t6 = (x49<<((x50-x51)==x52));

	if (t6 != 7117633LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x57 = 1438U;
	int64_t x58 = INT64_MIN;
	int64_t x59 = -1LL;
	static volatile int32_t t7 = 437466;

	t7 = (x57<<((x58-x59)==x60));

	if (t7 != 1438) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x61 = 258685U;
	static volatile int64_t x62 = -4737924483478LL;
	uint8_t x64 = 10U;
	static volatile uint32_t t8 = 25904U;

	t8 = (x61<<((x62-x63)==x64));

	if (t8 != 258685U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x69 = INT32_MAX;
	volatile int64_t x71 = -1LL;
	static int16_t x72 = 70;

	t9 = (x69<<((x70-x71)==x72));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x74 = INT8_MIN;
	uint32_t x75 = 2962203U;
	int16_t x76 = 7656;
	volatile int32_t t10 = -7999290;

	t10 = (x73<<((x74-x75)==x76));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x101 = INT64_MAX;
	static int64_t x102 = 58LL;
	volatile int32_t x103 = INT32_MAX;
	int8_t x104 = -1;

	t11 = (x101<<((x102-x103)==x104));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x105 = 1404796472219817LLU;
	int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	int8_t x108 = -1;
	static uint64_t t12 = 15370627LLU;

	t12 = (x105<<((x106-x107)==x108));

	if (t12 != 1404796472219817LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MAX;
	uint32_t x119 = 24394705U;
	volatile int32_t x120 = -1;
	volatile int32_t t13 = -7;

	t13 = (x117<<((x118-x119)==x120));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x122 = UINT16_MAX;
	volatile int16_t x124 = INT16_MAX;

	t14 = (x121<<((x122-x123)==x124));

	if (t14 != 1144526320515484078LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x129 = 1048326671699LL;
	static uint64_t x130 = 57LLU;
	uint32_t x131 = 466715260U;
	int64_t t15 = 88800LL;

	t15 = (x129<<((x130-x131)==x132));

	if (t15 != 1048326671699LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x145 = 222U;
	int64_t x146 = -1LL;
	int64_t x147 = INT64_MIN;
	volatile int32_t t16 = 2773540;

	t16 = (x145<<((x146-x147)==x148));

	if (t16 != 222) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x149 = 1811029439U;
	uint32_t x150 = 1640098U;
	int8_t x151 = INT8_MAX;
	volatile uint64_t x152 = UINT64_MAX;
	volatile uint32_t t17 = 462501661U;

	t17 = (x149<<((x150-x151)==x152));

	if (t17 != 1811029439U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x157 = 8U;
	uint8_t x158 = 1U;
	volatile int64_t x159 = -60113533487740458LL;
	int32_t t18 = -46;

	t18 = (x157<<((x158-x159)==x160));

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x161 = UINT16_MAX;
	static int64_t x162 = 1730651LL;
	volatile int32_t x163 = 522;
	static int64_t x164 = -5422LL;
	volatile int32_t t19 = -3;

	t19 = (x161<<((x162-x163)==x164));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x169 = 1920803781LL;
	volatile int64_t x170 = -118911762LL;
	int32_t x171 = INT32_MAX;
	static int64_t x172 = INT64_MIN;

	t20 = (x169<<((x170-x171)==x172));

	if (t20 != 1920803781LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x189 = UINT64_MAX;
	int64_t x190 = -1LL;
	volatile int16_t x191 = 214;
	int64_t x192 = INT64_MIN;
	static uint64_t t21 = UINT64_MAX;

	t21 = (x189<<((x190-x191)==x192));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x193 = UINT16_MAX;
	static int8_t x194 = INT8_MIN;
	static int32_t x195 = 49179;
	uint8_t x196 = 4U;
	volatile int32_t t22 = -97122941;

	t22 = (x193<<((x194-x195)==x196));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x214 = -1;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = INT32_MAX;
	static volatile int32_t t23 = -1677;

	t23 = (x213<<((x214-x215)==x216));

	if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 25U;
	volatile int16_t x219 = 12582;
	static uint64_t x220 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x217<<((x218-x219)==x220));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x221 = INT8_MAX;
	static int16_t x222 = 54;
	uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t25 = -162262496;

	t25 = (x221<<((x222-x223)==x224));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x245 = INT16_MAX;
	int32_t x246 = -1;
	volatile int32_t t26 = -21388;

	t26 = (x245<<((x246-x247)==x248));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MAX;
	static volatile uint64_t x256 = UINT64_MAX;

	t27 = (x253<<((x254-x255)==x256));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x278 = INT8_MIN;
	static int16_t x280 = INT16_MAX;
	static int64_t t28 = INT64_MAX;

	t28 = (x277<<((x278-x279)==x280));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int8_t x282 = 0;
	int16_t x283 = INT16_MAX;
	int64_t x284 = 4122557423LL;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x281<<((x282-x283)==x284));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x285 = 1;
	int64_t x286 = -1LL;
	int64_t x287 = INT64_MIN;
	int8_t x288 = -1;
	static volatile int32_t t30 = 296465;

	t30 = (x285<<((x286-x287)==x288));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x302 = INT8_MAX;
	int8_t x304 = -1;
	int32_t t31 = INT32_MAX;

	t31 = (x301<<((x302-x303)==x304));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x305 = 2U;
	static int16_t x306 = 1641;
	volatile uint32_t x307 = UINT32_MAX;

	t32 = (x305<<((x306-x307)==x308));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x321 = INT64_MAX;
	int16_t x322 = INT16_MIN;
	static int8_t x324 = -1;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x321<<((x322-x323)==x324));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x325 = UINT8_MAX;
	uint64_t x326 = 146772247343LLU;
	int16_t x328 = -1;
	volatile int32_t t34 = 2090143;

	t34 = (x325<<((x326-x327)==x328));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x329 = 61357013;
	uint32_t x331 = 358U;
	int8_t x332 = -1;
	int32_t t35 = -1;

	t35 = (x329<<((x330-x331)==x332));

	if (t35 != 61357013) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x333 = 3;
	static uint8_t x334 = 38U;
	uint8_t x335 = 34U;
	volatile int8_t x336 = -60;
	int32_t t36 = 2;

	t36 = (x333<<((x334-x335)==x336));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x350 = 48;
	uint16_t x351 = 1778U;
	int16_t x352 = -1;
	int32_t t37 = -96;

	t37 = (x349<<((x350-x351)==x352));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x353 = 6490450334941LL;
	int8_t x355 = -11;
	int16_t x356 = -1;
	volatile int64_t t38 = -3764735274055523635LL;

	t38 = (x353<<((x354-x355)==x356));

	if (t38 != 6490450334941LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x361 = 1799U;
	static int64_t x362 = -1LL;
	static int32_t x363 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	volatile uint32_t t39 = 80339U;

	t39 = (x361<<((x362-x363)==x364));

	if (t39 != 1799U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x369 = 15732759734LLU;
	uint8_t x370 = UINT8_MAX;
	static uint8_t x371 = UINT8_MAX;
	static uint32_t x372 = 2090494U;

	t40 = (x369<<((x370-x371)==x372));

	if (t40 != 15732759734LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	volatile int16_t x376 = INT16_MAX;
	static volatile int64_t t41 = 9LL;

	t41 = (x373<<((x374-x375)==x376));

	if (t41 != 180259915993134LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x381 = INT64_MAX;
	uint32_t x382 = 5U;
	uint8_t x383 = 7U;
	int64_t t42 = INT64_MAX;

	t42 = (x381<<((x382-x383)==x384));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x389 = UINT8_MAX;
	uint64_t x390 = 6536222573646362LLU;
	int8_t x391 = INT8_MIN;
	volatile int32_t x392 = -1;
	static int32_t t43 = -1;

	t43 = (x389<<((x390-x391)==x392));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x393 = UINT16_MAX;
	int32_t x395 = INT32_MAX;
	uint8_t x396 = 6U;
	int32_t t44 = -592581;

	t44 = (x393<<((x394-x395)==x396));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x398 = -1LL;
	volatile int64_t x399 = 10136453745061LL;
	volatile uint64_t t45 = 21LLU;

	t45 = (x397<<((x398-x399)==x400));

	if (t45 != 50648148866214110LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x405 = INT32_MAX;
	volatile int32_t x406 = INT32_MIN;
	static uint64_t x407 = 176472LLU;
	volatile uint8_t x408 = 1U;
	static int32_t t46 = INT32_MAX;

	t46 = (x405<<((x406-x407)==x408));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x417 = 8571712318037897632LLU;
	uint16_t x418 = UINT16_MAX;
	static int8_t x419 = 1;
	int32_t x420 = INT32_MIN;
	uint64_t t47 = 20906786LLU;

	t47 = (x417<<((x418-x419)==x420));

	if (t47 != 8571712318037897632LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x425 = INT64_MAX;
	uint32_t x426 = UINT32_MAX;
	int8_t x427 = INT8_MAX;
	volatile uint32_t x428 = 710511232U;
	int64_t t48 = INT64_MAX;

	t48 = (x425<<((x426-x427)==x428));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x429 = 3U;
	int16_t x430 = INT16_MAX;
	uint64_t x431 = 38967816LLU;
	int32_t t49 = -2292793;

	t49 = (x429<<((x430-x431)==x432));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x434 = UINT64_MAX;
	int16_t x435 = INT16_MAX;
	uint32_t x436 = UINT32_MAX;
	int32_t t50 = -383705589;

	t50 = (x433<<((x434-x435)==x436));

	if (t50 != 117) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x445 = UINT32_MAX;
	uint64_t x446 = 1471314681LLU;
	static uint64_t x448 = UINT64_MAX;
	uint32_t t51 = UINT32_MAX;

	t51 = (x445<<((x446-x447)==x448));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x469 = 2U;
	static volatile int16_t x470 = -1;
	uint64_t x471 = 9472949827537LLU;
	uint16_t x472 = 3730U;

	t52 = (x469<<((x470-x471)==x472));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x485 = UINT32_MAX;
	uint16_t x486 = UINT16_MAX;
	static int16_t x487 = -1;
	int16_t x488 = INT16_MIN;
	uint32_t t53 = UINT32_MAX;

	t53 = (x485<<((x486-x487)==x488));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x489 = 35U;
	volatile uint32_t x490 = 635U;
	int64_t x491 = 18LL;
	int8_t x492 = 3;
	int32_t t54 = 3420;

	t54 = (x489<<((x490-x491)==x492));

	if (t54 != 35) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x498 = UINT8_MAX;
	uint32_t x499 = 10189U;
	int64_t x500 = -397451648LL;

	t55 = (x497<<((x498-x499)==x500));

	if (t55 != 6875) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x501 = 38197149356512705LL;
	int8_t x502 = -1;
	int16_t x503 = INT16_MIN;
	int16_t x504 = INT16_MAX;
	volatile int64_t t56 = -2LL;

	t56 = (x501<<((x502-x503)==x504));

	if (t56 != 76394298713025410LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x506 = -1;
	volatile int8_t x507 = INT8_MIN;
	volatile uint8_t x508 = 2U;
	int32_t t57 = -644126;

	t57 = (x505<<((x506-x507)==x508));

	if (t57 != 9) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x509 = INT32_MAX;
	volatile int32_t x510 = -1830;
	int8_t x511 = INT8_MAX;
	volatile int32_t t58 = INT32_MAX;

	t58 = (x509<<((x510-x511)==x512));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x513 = INT8_MAX;
	volatile int64_t x514 = 1LL;
	uint8_t x515 = UINT8_MAX;
	int64_t x516 = -7154556577LL;
	volatile int32_t t59 = 1374985;

	t59 = (x513<<((x514-x515)==x516));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x517 = INT8_MAX;
	static volatile int32_t x519 = 46981;
	uint64_t x520 = 95912771014LLU;
	static int32_t t60 = -30912157;

	t60 = (x517<<((x518-x519)==x520));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x529 = 6586U;
	uint32_t x530 = 529U;
	uint16_t x531 = UINT16_MAX;
	int16_t x532 = -1;

	t61 = (x529<<((x530-x531)==x532));

	if (t61 != 6586U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x533 = UINT16_MAX;
	volatile int16_t x534 = INT16_MIN;
	volatile int32_t t62 = 5;

	t62 = (x533<<((x534-x535)==x536));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x549 = INT64_MAX;
	int64_t x551 = -1LL;
	static int64_t x552 = -1LL;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x549<<((x550-x551)==x552));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x556 = UINT64_MAX;
	static volatile uint32_t t64 = UINT32_MAX;

	t64 = (x553<<((x554-x555)==x556));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x561 = INT16_MAX;
	int8_t x562 = 0;
	int8_t x564 = 1;
	volatile int32_t t65 = -921;

	t65 = (x561<<((x562-x563)==x564));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x565 = UINT8_MAX;
	int16_t x566 = 26;
	int16_t x567 = INT16_MIN;
	int32_t t66 = 0;

	t66 = (x565<<((x566-x567)==x568));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x573 = INT32_MAX;
	int8_t x574 = 20;

	t67 = (x573<<((x574-x575)==x576));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x577 = UINT64_MAX;
	uint64_t x578 = 158LLU;
	static uint16_t x579 = 255U;
	volatile uint8_t x580 = UINT8_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x577<<((x578-x579)==x580));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x589 = INT64_MAX;
	uint8_t x590 = 5U;
	uint32_t x591 = 10035796U;

	t69 = (x589<<((x590-x591)==x592));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x593 = 57U;
	int16_t x595 = -1;
	int64_t x596 = -1LL;
	int32_t t70 = 6207;

	t70 = (x593<<((x594-x595)==x596));

	if (t70 != 57) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x601 = 8U;
	int32_t x602 = -1;
	int32_t t71 = -445;

	t71 = (x601<<((x602-x603)==x604));

	if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x609 = 3320U;
	int8_t x610 = -1;
	int8_t x611 = INT8_MAX;
	static int8_t x612 = -1;

	t72 = (x609<<((x610-x611)==x612));

	if (t72 != 3320U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x613 = 56073617U;
	volatile int64_t x614 = -1LL;
	int8_t x615 = 8;
	static uint8_t x616 = UINT8_MAX;
	uint32_t t73 = 12862824U;

	t73 = (x613<<((x614-x615)==x616));

	if (t73 != 56073617U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x621 = 10;
	static int8_t x622 = -1;
	int16_t x623 = -1;
	uint64_t x624 = 41669241LLU;
	int32_t t74 = 290;

	t74 = (x621<<((x622-x623)==x624));

	if (t74 != 10) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x637 = UINT8_MAX;
	int32_t x638 = -1;
	int8_t x639 = INT8_MAX;
	static int16_t x640 = -610;

	t75 = (x637<<((x638-x639)==x640));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x645 = UINT8_MAX;
	int32_t x647 = -1;
	int16_t x648 = -2606;
	int32_t t76 = 166507;

	t76 = (x645<<((x646-x647)==x648));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x661 = INT32_MAX;
	static uint8_t x662 = UINT8_MAX;
	static uint8_t x664 = 7U;
	static int32_t t77 = INT32_MAX;

	t77 = (x661<<((x662-x663)==x664));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x705 = INT16_MAX;
	int32_t x706 = -52;
	static uint32_t x707 = UINT32_MAX;
	static int16_t x708 = 1;
	int32_t t78 = -386643;

	t78 = (x705<<((x706-x707)==x708));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x709 = 3583260U;
	int16_t x710 = INT16_MAX;
	static int64_t x712 = 596835091362109LL;
	static uint32_t t79 = 66063414U;

	t79 = (x709<<((x710-x711)==x712));

	if (t79 != 3583260U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x733 = 41U;
	volatile uint8_t x734 = 0U;
	uint32_t x735 = UINT32_MAX;
	volatile uint32_t x736 = 2U;
	int32_t t80 = 564390444;

	t80 = (x733<<((x734-x735)==x736));

	if (t80 != 41) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x745 = 3482U;
	static int16_t x747 = INT16_MIN;
	int32_t x748 = 3965220;
	int32_t t81 = -56;

	t81 = (x745<<((x746-x747)==x748));

	if (t81 != 3482) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x749 = UINT64_MAX;
	static int16_t x750 = INT16_MIN;
	volatile int8_t x751 = -1;
	static int16_t x752 = INT16_MIN;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (x749<<((x750-x751)==x752));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x762 = 7231;
	int32_t t83 = -1;

	t83 = (x761<<((x762-x763)==x764));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x767 = -1;
	uint64_t x768 = 432920927236LLU;
	volatile int32_t t84 = 9011;

	t84 = (x765<<((x766-x767)==x768));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x779 = 0U;
	static int32_t t85 = -990;

	t85 = (x777<<((x778-x779)==x780));

	if (t85 != 21) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x782 = 25676;
	volatile int16_t x784 = 1;

	t86 = (x781<<((x782-x783)==x784));

	if (t86 != 111) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x785 = UINT64_MAX;
	static int16_t x787 = INT16_MAX;
	volatile int16_t x788 = 167;

	t87 = (x785<<((x786-x787)==x788));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x802 = UINT16_MAX;
	static int32_t x803 = -1;
	int64_t x804 = INT64_MIN;
	volatile int64_t t88 = -3LL;

	t88 = (x801<<((x802-x803)==x804));

	if (t88 != 51338598899361252LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x806 = 3;
	static int64_t x807 = -5LL;
	volatile int64_t x808 = 811158868179768241LL;
	int64_t t89 = INT64_MAX;

	t89 = (x805<<((x806-x807)==x808));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x809 = UINT16_MAX;
	int64_t x810 = 1LL;
	uint64_t x811 = UINT64_MAX;
	int16_t x812 = -1;
	int32_t t90 = 0;

	t90 = (x809<<((x810-x811)==x812));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x817 = UINT8_MAX;
	static volatile int16_t x818 = -53;
	int32_t x819 = 478808664;
	static int8_t x820 = INT8_MAX;
	static volatile int32_t t91 = -1287121;

	t91 = (x817<<((x818-x819)==x820));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x845 = 27U;
	uint32_t x846 = UINT32_MAX;
	static uint16_t x847 = UINT16_MAX;
	uint64_t x848 = 86LLU;
	uint32_t t92 = 11330255U;

	t92 = (x845<<((x846-x847)==x848));

	if (t92 != 27U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x850 = -2;

	t93 = (x849<<((x850-x851)==x852));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x853 = UINT64_MAX;
	uint32_t x854 = 72363356U;
	volatile int64_t x855 = INT64_MAX;
	int8_t x856 = INT8_MIN;

	t94 = (x853<<((x854-x855)==x856));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x862 = -1;
	int8_t x863 = INT8_MAX;
	static int64_t x864 = INT64_MIN;
	int32_t t95 = 2198;

	t95 = (x861<<((x862-x863)==x864));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x865 = INT32_MAX;
	volatile int16_t x866 = 4035;
	static int8_t x867 = 1;
	int32_t t96 = INT32_MAX;

	t96 = (x865<<((x866-x867)==x868));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x877 = UINT16_MAX;
	int32_t x878 = -6258932;
	volatile int16_t x879 = -48;
	int8_t x880 = -8;
	int32_t t97 = 1268;

	t97 = (x877<<((x878-x879)==x880));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x886 = 1937794815200LL;
	static uint32_t x887 = UINT32_MAX;
	uint16_t x888 = 508U;
	volatile int32_t t98 = 2096474;

	t98 = (x885<<((x886-x887)==x888));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x889 = 0U;
	int8_t x891 = INT8_MIN;
	static volatile uint8_t x892 = 1U;
	volatile uint32_t t99 = 165984U;

	t99 = (x889<<((x890-x891)==x892));

	if (t99 != 0U) { NG(); } else { ; }
	
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

