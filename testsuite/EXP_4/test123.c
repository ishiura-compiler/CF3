#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 11093364;
static int16_t x23 = INT16_MIN;
uint32_t t4 = 26U;
uint64_t x43 = 23757743332851LLU;
static volatile int64_t x69 = 73694881728154LL;
volatile int64_t t8 = -13020558632LL;
static volatile int64_t x79 = -1LL;
uint32_t x80 = 219U;
volatile int64_t x82 = 1LL;
static int8_t x97 = INT8_MAX;
int16_t x101 = 1;
uint64_t x108 = UINT64_MAX;
volatile int32_t t13 = -21449208;
uint32_t x115 = UINT32_MAX;
volatile int32_t t14 = 0;
static int64_t x119 = -13LL;
uint16_t x122 = 451U;
int64_t x131 = -1LL;
uint64_t x132 = UINT64_MAX;
int32_t x156 = -1;
int32_t x189 = 8530472;
int8_t x251 = INT8_MAX;
static uint32_t x253 = UINT32_MAX;
volatile int32_t x254 = INT32_MIN;
int8_t x255 = 6;
int8_t x266 = INT8_MIN;
static volatile uint16_t x273 = UINT16_MAX;
uint64_t x274 = 2651289876LLU;
uint64_t x276 = 114759682LLU;
int16_t x283 = 7;
int64_t x294 = 92380414468LL;
int16_t x308 = -1;
static int8_t x316 = INT8_MIN;
int32_t x326 = -453;
int16_t x338 = -36;
uint16_t x340 = UINT16_MAX;
volatile int32_t t41 = 211435110;
int8_t x358 = INT8_MAX;
uint8_t x366 = UINT8_MAX;
static int8_t x367 = -1;
volatile int32_t t43 = -1;
static int32_t x394 = INT32_MIN;
uint32_t t47 = 733244U;
uint16_t x425 = 44U;
volatile int32_t x426 = INT32_MAX;
uint64_t x428 = UINT64_MAX;
static int32_t t49 = -682362;
static int32_t x446 = INT32_MIN;
static int64_t x454 = 63050379986LL;
int32_t x470 = INT32_MIN;
int8_t x471 = -1;
int64_t x474 = INT64_MAX;
int8_t x483 = -1;
uint16_t x484 = 328U;
int32_t x486 = -1;
uint8_t x492 = UINT8_MAX;
volatile uint64_t t57 = 1464741038504LLU;
volatile uint64_t x502 = 1115928609430445854LLU;
int8_t x515 = 10;
int16_t x521 = 4;
volatile uint32_t x524 = 2507U;
volatile int32_t t61 = -168;
int64_t x530 = INT64_MAX;
static int32_t x531 = 36;
int32_t x567 = -47;
uint16_t x571 = 10U;
static int8_t x572 = 0;
int32_t t69 = 55202654;
int64_t x576 = INT64_MAX;
volatile int8_t x616 = -4;
uint64_t x622 = 1076456LLU;
volatile uint64_t t73 = 1647968812LLU;
uint16_t x632 = UINT16_MAX;
static uint32_t x638 = 910U;
uint8_t x649 = 12U;
int8_t x650 = INT8_MIN;
volatile uint16_t x656 = 203U;
uint64_t x708 = UINT64_MAX;
int64_t x724 = -1LL;
static int64_t x731 = -838571202LL;
static int16_t x746 = 12;
int64_t x747 = INT64_MAX;
uint16_t x775 = UINT16_MAX;
int16_t x819 = INT16_MIN;
uint8_t x834 = UINT8_MAX;
int32_t x836 = 3221;
uint64_t t94 = 1019296LLU;
static int8_t x853 = 1;
int64_t x854 = 34592355623717LL;
uint8_t x863 = 2U;


void f0(void) {
	uint8_t x1 = 38U;
	volatile uint64_t x2 = UINT64_MAX;
	volatile int32_t x3 = -862996;
	uint32_t x4 = 263914069U;

	t0 = (x1<<(x2<=(x3+x4)));

	if (t0 != 38) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = 0;
	uint64_t x18 = 425LLU;
	volatile int8_t x19 = 1;
	uint8_t x20 = 4U;
	volatile int32_t t1 = -13106;

	t1 = (x17<<(x18<=(x19+x20)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x21 = UINT64_MAX;
	uint32_t x22 = 1563733334U;
	int64_t x24 = INT64_MAX;
	uint64_t t2 = 162LLU;

	t2 = (x21<<(x22<=(x23+x24)));

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 716U;
	static int64_t x30 = -1LL;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = 35;
	static int32_t t3 = -62;

	t3 = (x29<<(x30<=(x31+x32)));

	if (t3 != 716) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x33 = 10U;
	int16_t x34 = INT16_MIN;
	static uint8_t x35 = 5U;
	static uint64_t x36 = 129LLU;

	t4 = (x33<<(x34<=(x35+x36)));

	if (t4 != 10U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x41 = 3U;
	int16_t x42 = 3;
	volatile int32_t x44 = 3230;
	int32_t t5 = -4;

	t5 = (x41<<(x42<=(x43+x44)));

	if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 8678U;
	int8_t x46 = INT8_MIN;
	int64_t x47 = 4075LL;
	int32_t x48 = INT32_MIN;
	int32_t t6 = 8597913;

	t6 = (x45<<(x46<=(x47+x48)));

	if (t6 != 8678) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x70 = -586;
	static int64_t x71 = -18392LL;
	uint64_t x72 = UINT64_MAX;
	static int64_t t7 = -258258613291376224LL;

	t7 = (x69<<(x70<=(x71+x72)));

	if (t7 != 73694881728154LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x73 = 4685759LL;
	static volatile uint8_t x74 = 0U;
	int64_t x75 = -351330785562LL;
	int32_t x76 = INT32_MAX;

	t8 = (x73<<(x74<=(x75+x76)));

	if (t8 != 4685759LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x77 = UINT32_MAX;
	int32_t x78 = -1;
	uint32_t t9 = 232237195U;

	t9 = (x77<<(x78<=(x79+x80)));

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x81 = 1036741257U;
	uint64_t x83 = 7041045665168971969LLU;
	uint64_t x84 = 11927530311304LLU;
	volatile uint32_t t10 = 14346U;

	t10 = (x81<<(x82<=(x83+x84)));

	if (t10 != 2073482514U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x98 = -1;
	uint8_t x99 = 32U;
	uint16_t x100 = 0U;
	static volatile int32_t t11 = -693163;

	t11 = (x97<<(x98<=(x99+x100)));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x102 = 2;
	uint16_t x103 = UINT16_MAX;
	uint32_t x104 = 837372159U;
	volatile int32_t t12 = -54714730;

	t12 = (x101<<(x102<=(x103+x104)));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x105 = 0;
	static uint8_t x106 = 108U;
	int64_t x107 = -21290148179263340LL;

	t13 = (x105<<(x106<=(x107+x108)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x114 = -5849181;
	static uint32_t x116 = 7505056U;

	t14 = (x113<<(x114<=(x115+x116)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x117 = 30U;
	volatile int8_t x118 = INT8_MIN;
	int16_t x120 = INT16_MAX;
	static volatile int32_t t15 = -192639169;

	t15 = (x117<<(x118<=(x119+x120)));

	if (t15 != 60) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x121 = 4LLU;
	int8_t x123 = -1;
	volatile int16_t x124 = INT16_MIN;
	volatile uint64_t t16 = 151621444405795450LLU;

	t16 = (x121<<(x122<=(x123+x124)));

	if (t16 != 4LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x125 = 125891275203LL;
	int8_t x126 = -1;
	static int8_t x127 = 8;
	volatile int32_t x128 = INT32_MIN;
	volatile int64_t t17 = -6386564707LL;

	t17 = (x125<<(x126<=(x127+x128)));

	if (t17 != 125891275203LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MIN;
	volatile uint32_t t18 = 1319895336U;

	t18 = (x129<<(x130<=(x131+x132)));

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x133 = 958212910U;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 14U;
	int16_t x136 = INT16_MAX;
	volatile uint32_t t19 = 1U;

	t19 = (x133<<(x134<=(x135+x136)));

	if (t19 != 958212910U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x137 = 1;
	int8_t x138 = -22;
	int32_t x139 = -1;
	volatile int64_t x140 = 1710737119970LL;
	int32_t t20 = -13314695;

	t20 = (x137<<(x138<=(x139+x140)));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x153 = UINT64_MAX;
	volatile int16_t x154 = 3808;
	int16_t x155 = INT16_MAX;
	uint64_t t21 = 56212746LLU;

	t21 = (x153<<(x154<=(x155+x156)));

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x161 = 13;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t22 = 4592;

	t22 = (x161<<(x162<=(x163+x164)));

	if (t22 != 13) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x165 = 3U;
	int16_t x166 = INT16_MAX;
	static int32_t x167 = INT32_MIN;
	uint64_t x168 = 799328549293602LLU;
	int32_t t23 = -482498197;

	t23 = (x165<<(x166<=(x167+x168)));

	if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x169 = 0U;
	static int8_t x170 = INT8_MAX;
	int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	int32_t t24 = 0;

	t24 = (x169<<(x170<=(x171+x172)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x190 = INT64_MIN;
	int8_t x191 = -4;
	volatile int16_t x192 = -1;
	int32_t t25 = 9;

	t25 = (x189<<(x190<=(x191+x192)));

	if (t25 != 17060944) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x205 = 411U;
	int8_t x206 = 3;
	static volatile uint64_t x207 = UINT64_MAX;
	uint16_t x208 = UINT16_MAX;
	uint32_t t26 = 89U;

	t26 = (x205<<(x206<=(x207+x208)));

	if (t26 != 822U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x209 = 833U;
	int64_t x210 = -15330LL;
	int32_t x211 = -2509;
	static volatile uint32_t x212 = 6U;
	volatile int32_t t27 = 205;

	t27 = (x209<<(x210<=(x211+x212)));

	if (t27 != 1666) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x249 = 6618LLU;
	uint16_t x250 = 7U;
	static int16_t x252 = INT16_MIN;
	uint64_t t28 = 325496291537LLU;

	t28 = (x249<<(x250<=(x251+x252)));

	if (t28 != 6618LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x256 = 0;
	volatile uint32_t t29 = 93750U;

	t29 = (x253<<(x254<=(x255+x256)));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x261 = INT16_MAX;
	uint8_t x262 = 6U;
	uint16_t x263 = 211U;
	static volatile int8_t x264 = INT8_MAX;
	int32_t t30 = -52;

	t30 = (x261<<(x262<=(x263+x264)));

	if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x265 = 1038928492LLU;
	volatile int8_t x267 = 11;
	uint8_t x268 = 15U;
	uint64_t t31 = 15LLU;

	t31 = (x265<<(x266<=(x267+x268)));

	if (t31 != 2077856984LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int8_t x270 = INT8_MIN;
	uint64_t x271 = 27857LLU;
	static uint8_t x272 = UINT8_MAX;
	uint64_t t32 = UINT64_MAX;

	t32 = (x269<<(x270<=(x271+x272)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x275 = -3;
	int32_t t33 = 0;

	t33 = (x273<<(x274<=(x275+x276)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x281 = UINT64_MAX;
	static volatile int64_t x282 = INT64_MAX;
	int8_t x284 = -1;
	static uint64_t t34 = UINT64_MAX;

	t34 = (x281<<(x282<=(x283+x284)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x293 = 31466149966816246LL;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = 0;
	static int64_t t35 = -743LL;

	t35 = (x293<<(x294<=(x295+x296)));

	if (t35 != 31466149966816246LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x305 = 107244;
	int16_t x306 = -1;
	uint32_t x307 = 309160U;
	volatile int32_t t36 = -53;

	t36 = (x305<<(x306<=(x307+x308)));

	if (t36 != 107244) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x313 = 0U;
	int32_t x314 = INT32_MIN;
	int64_t x315 = 1939LL;
	volatile int32_t t37 = 50;

	t37 = (x313<<(x314<=(x315+x316)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x325 = 20U;
	int32_t x327 = 15;
	int8_t x328 = INT8_MIN;
	int32_t t38 = -1;

	t38 = (x325<<(x326<=(x327+x328)));

	if (t38 != 40) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x337 = 40U;
	int32_t x339 = INT32_MIN;
	volatile int32_t t39 = -1;

	t39 = (x337<<(x338<=(x339+x340)));

	if (t39 != 40) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x341 = 96900LLU;
	int16_t x342 = -702;
	int8_t x343 = -1;
	int8_t x344 = -1;
	volatile uint64_t t40 = 2833184050LLU;

	t40 = (x341<<(x342<=(x343+x344)));

	if (t40 != 193800LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = -17;
	uint8_t x355 = 5U;
	int32_t x356 = -1;

	t41 = (x353<<(x354<=(x355+x356)));

	if (t41 != 131070) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x357 = INT8_MAX;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = UINT64_MAX;
	static int32_t t42 = 26859;

	t42 = (x357<<(x358<=(x359+x360)));

	if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x365 = 2U;
	static int16_t x368 = -1;

	t43 = (x365<<(x366<=(x367+x368)));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x377 = INT16_MAX;
	volatile int8_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t44 = 1;

	t44 = (x377<<(x378<=(x379+x380)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x381 = INT8_MAX;
	int64_t x382 = INT64_MAX;
	volatile int16_t x383 = 9;
	static uint8_t x384 = 1U;
	volatile int32_t t45 = -585737521;

	t45 = (x381<<(x382<=(x383+x384)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = 3193U;
	int16_t x387 = 2950;
	uint8_t x388 = 3U;
	int32_t t46 = -205;

	t46 = (x385<<(x386<=(x387+x388)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int16_t x395 = 58;
	static int16_t x396 = INT16_MIN;

	t47 = (x393<<(x394<=(x395+x396)));

	if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x417 = 183U;
	int64_t x418 = -1LL;
	volatile int16_t x419 = 829;
	int32_t x420 = 972001897;
	int32_t t48 = 1976488;

	t48 = (x417<<(x418<=(x419+x420)));

	if (t48 != 366) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x427 = 1557542942807579LLU;

	t49 = (x425<<(x426<=(x427+x428)));

	if (t49 != 88) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x445 = 5298U;
	volatile int8_t x447 = -1;
	int64_t x448 = 415504093LL;
	uint32_t t50 = 221U;

	t50 = (x445<<(x446<=(x447+x448)));

	if (t50 != 10596U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x453 = 4670U;
	uint32_t x455 = UINT32_MAX;
	int32_t x456 = 15;
	volatile int32_t t51 = -11;

	t51 = (x453<<(x454<=(x455+x456)));

	if (t51 != 4670) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x461 = 1;
	static int32_t x462 = -1;
	uint8_t x463 = 54U;
	static int32_t x464 = INT32_MIN;
	int32_t t52 = -32922454;

	t52 = (x461<<(x462<=(x463+x464)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x469 = 29211546266LL;
	int16_t x472 = 27;
	volatile int64_t t53 = 4LL;

	t53 = (x469<<(x470<=(x471+x472)));

	if (t53 != 58423092532LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x473 = 187LLU;
	uint32_t x475 = UINT32_MAX;
	int32_t x476 = INT32_MAX;
	volatile uint64_t t54 = 673607LLU;

	t54 = (x473<<(x474<=(x475+x476)));

	if (t54 != 187LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x481 = 126U;
	int64_t x482 = INT64_MAX;
	int32_t t55 = 30494078;

	t55 = (x481<<(x482<=(x483+x484)));

	if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x485 = UINT16_MAX;
	int64_t x487 = -35029LL;
	int32_t x488 = INT32_MIN;
	volatile int32_t t56 = -3;

	t56 = (x485<<(x486<=(x487+x488)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x489 = UINT64_MAX;
	uint8_t x490 = 28U;
	uint32_t x491 = 59U;

	t57 = (x489<<(x490<=(x491+x492)));

	if (t57 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x501 = UINT32_MAX;
	static int8_t x503 = -2;
	volatile uint8_t x504 = UINT8_MAX;
	uint32_t t58 = UINT32_MAX;

	t58 = (x501<<(x502<=(x503+x504)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x509 = UINT16_MAX;
	int64_t x510 = INT64_MIN;
	uint8_t x511 = 21U;
	int16_t x512 = INT16_MAX;
	volatile int32_t t59 = 127;

	t59 = (x509<<(x510<=(x511+x512)));

	if (t59 != 131070) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x513 = 5584295LLU;
	int16_t x514 = INT16_MIN;
	uint8_t x516 = UINT8_MAX;
	volatile uint64_t t60 = 36LLU;

	t60 = (x513<<(x514<=(x515+x516)));

	if (t60 != 11168590LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x522 = 20LLU;
	int8_t x523 = -1;

	t61 = (x521<<(x522<=(x523+x524)));

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x529 = 1422;
	uint16_t x532 = 8U;
	volatile int32_t t62 = 0;

	t62 = (x529<<(x530<=(x531+x532)));

	if (t62 != 1422) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x545 = 12U;
	uint32_t x546 = 126U;
	static uint8_t x547 = 93U;
	uint32_t x548 = 203540415U;
	static volatile int32_t t63 = 1;

	t63 = (x545<<(x546<=(x547+x548)));

	if (t63 != 24) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x549 = 1U;
	static int64_t x550 = INT64_MIN;
	int32_t x551 = INT32_MAX;
	int16_t x552 = -1;
	static int32_t t64 = 141;

	t64 = (x549<<(x550<=(x551+x552)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x553 = INT8_MAX;
	volatile uint32_t x554 = 40808U;
	volatile uint32_t x555 = 95839U;
	int64_t x556 = -162031452301066961LL;
	static int32_t t65 = 16378;

	t65 = (x553<<(x554<=(x555+x556)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x557 = 2U;
	int16_t x558 = -1;
	static uint16_t x559 = 37U;
	int32_t x560 = -1;
	volatile int32_t t66 = 0;

	t66 = (x557<<(x558<=(x559+x560)));

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x561 = 1U;
	uint8_t x562 = 8U;
	int8_t x563 = INT8_MAX;
	volatile uint32_t x564 = UINT32_MAX;
	volatile uint32_t t67 = 690749329U;

	t67 = (x561<<(x562<=(x563+x564)));

	if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x565 = 180LL;
	int64_t x566 = INT64_MIN;
	static uint32_t x568 = UINT32_MAX;
	volatile int64_t t68 = 2607098132748753940LL;

	t68 = (x565<<(x566<=(x567+x568)));

	if (t68 != 360LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x569 = 5;
	static int16_t x570 = INT16_MIN;

	t69 = (x569<<(x570<=(x571+x572)));

	if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x573 = 26;
	uint8_t x574 = UINT8_MAX;
	int16_t x575 = -1;
	int32_t t70 = 216450829;

	t70 = (x573<<(x574<=(x575+x576)));

	if (t70 != 52) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x585 = 14894418024552484LLU;
	volatile int16_t x586 = -1;
	volatile int32_t x587 = 16646359;
	int16_t x588 = INT16_MAX;
	static uint64_t t71 = 642635071387390002LLU;

	t71 = (x585<<(x586<=(x587+x588)));

	if (t71 != 29788836049104968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x613 = 1447593126U;
	int16_t x614 = INT16_MIN;
	int32_t x615 = 11906182;
	uint32_t t72 = 114015U;

	t72 = (x613<<(x614<=(x615+x616)));

	if (t72 != 2895186252U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x621 = 27081854296917LLU;
	static uint16_t x623 = 1U;
	int16_t x624 = -48;

	t73 = (x621<<(x622<=(x623+x624)));

	if (t73 != 54163708593834LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x629 = 1;
	uint64_t x630 = 35LLU;
	uint32_t x631 = UINT32_MAX;
	int32_t t74 = -41;

	t74 = (x629<<(x630<=(x631+x632)));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x637 = INT16_MAX;
	static uint8_t x639 = 13U;
	uint64_t x640 = 283088973002LLU;
	int32_t t75 = 1624640;

	t75 = (x637<<(x638<=(x639+x640)));

	if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x641 = UINT16_MAX;
	uint8_t x642 = 10U;
	uint16_t x643 = 631U;
	volatile int32_t x644 = 375685477;
	int32_t t76 = -424526382;

	t76 = (x641<<(x642<=(x643+x644)));

	if (t76 != 131070) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x651 = UINT16_MAX;
	volatile int8_t x652 = -1;
	volatile int32_t t77 = 55994;

	t77 = (x649<<(x650<=(x651+x652)));

	if (t77 != 24) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x653 = 430LL;
	static uint64_t x654 = UINT64_MAX;
	static int64_t x655 = 368156328LL;
	int64_t t78 = -916726066189374251LL;

	t78 = (x653<<(x654<=(x655+x656)));

	if (t78 != 430LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x665 = UINT16_MAX;
	volatile int64_t x666 = -366956LL;
	volatile int8_t x667 = -4;
	volatile uint32_t x668 = 795U;
	volatile int32_t t79 = 1066837;

	t79 = (x665<<(x666<=(x667+x668)));

	if (t79 != 131070) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x693 = UINT16_MAX;
	static volatile int16_t x694 = INT16_MIN;
	static int8_t x695 = 6;
	int32_t x696 = 2482029;
	static int32_t t80 = 740485;

	t80 = (x693<<(x694<=(x695+x696)));

	if (t80 != 131070) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x697 = 4336645362128008205LLU;
	volatile int16_t x698 = -1;
	static volatile uint8_t x699 = 1U;
	static int64_t x700 = -1LL;
	volatile uint64_t t81 = 21991605644864LLU;

	t81 = (x697<<(x698<=(x699+x700)));

	if (t81 != 8673290724256016410LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x705 = UINT64_MAX;
	volatile int8_t x706 = -18;
	int16_t x707 = -1;
	volatile uint64_t t82 = 713661102510383LLU;

	t82 = (x705<<(x706<=(x707+x708)));

	if (t82 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x721 = UINT64_MAX;
	static int32_t x722 = -649226;
	static int64_t x723 = -773459300154112LL;
	uint64_t t83 = UINT64_MAX;

	t83 = (x721<<(x722<=(x723+x724)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x729 = 1624;
	uint64_t x730 = UINT64_MAX;
	int32_t x732 = INT32_MAX;
	volatile int32_t t84 = 36977;

	t84 = (x729<<(x730<=(x731+x732)));

	if (t84 != 1624) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x741 = UINT64_MAX;
	int8_t x742 = -4;
	int8_t x743 = 1;
	int8_t x744 = -2;
	uint64_t t85 = 24347391606LLU;

	t85 = (x741<<(x742<=(x743+x744)));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x745 = 1;
	volatile int64_t x748 = INT64_MIN;
	int32_t t86 = 84556;

	t86 = (x745<<(x746<=(x747+x748)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x765 = INT8_MAX;
	int64_t x766 = -1LL;
	volatile uint16_t x767 = UINT16_MAX;
	int16_t x768 = 107;
	static volatile int32_t t87 = 1;

	t87 = (x765<<(x766<=(x767+x768)));

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x773 = 5983481334968LLU;
	uint64_t x774 = UINT64_MAX;
	int32_t x776 = -73954;
	volatile uint64_t t88 = 6170932316LLU;

	t88 = (x773<<(x774<=(x775+x776)));

	if (t88 != 5983481334968LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x785 = 13377811093LLU;
	volatile int32_t x786 = INT32_MAX;
	static int8_t x787 = INT8_MAX;
	static volatile int64_t x788 = 0LL;
	static volatile uint64_t t89 = 1490797973994019218LLU;

	t89 = (x785<<(x786<=(x787+x788)));

	if (t89 != 13377811093LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x789 = UINT8_MAX;
	static int16_t x790 = INT16_MAX;
	int8_t x791 = -1;
	int8_t x792 = INT8_MIN;
	int32_t t90 = 192919;

	t90 = (x789<<(x790<=(x791+x792)));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x817 = INT64_MAX;
	volatile int8_t x818 = -1;
	static volatile int64_t x820 = -33163653LL;
	static int64_t t91 = INT64_MAX;

	t91 = (x817<<(x818<=(x819+x820)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x821 = 1003LLU;
	int32_t x822 = -1;
	uint32_t x823 = 86448291U;
	volatile uint8_t x824 = 53U;
	volatile uint64_t t92 = 4310984205402676LLU;

	t92 = (x821<<(x822<=(x823+x824)));

	if (t92 != 1003LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x829 = 0U;
	int16_t x830 = INT16_MIN;
	volatile uint8_t x831 = 1U;
	volatile int64_t x832 = -26360409907366LL;
	int32_t t93 = -86196;

	t93 = (x829<<(x830<=(x831+x832)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x833 = 83767493LLU;
	int16_t x835 = INT16_MAX;

	t94 = (x833<<(x834<=(x835+x836)));

	if (t94 != 167534986LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x837 = 0U;
	int32_t x838 = INT32_MIN;
	static uint8_t x839 = 26U;
	uint16_t x840 = 10479U;
	int32_t t95 = 908385;

	t95 = (x837<<(x838<=(x839+x840)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x841 = 99U;
	int64_t x842 = INT64_MIN;
	int16_t x843 = 1;
	static int32_t x844 = -45185;
	static volatile int32_t t96 = -4671;

	t96 = (x841<<(x842<=(x843+x844)));

	if (t96 != 198) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x845 = 739U;
	volatile int32_t x846 = INT32_MAX;
	int16_t x847 = INT16_MAX;
	volatile int8_t x848 = INT8_MAX;
	int32_t t97 = 437436777;

	t97 = (x845<<(x846<=(x847+x848)));

	if (t97 != 739) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x855 = -1;
	static int16_t x856 = INT16_MIN;
	int32_t t98 = 1;

	t98 = (x853<<(x854<=(x855+x856)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x861 = 7624;
	int64_t x862 = -1LL;
	uint16_t x864 = 564U;
	volatile int32_t t99 = -4;

	t99 = (x861<<(x862<=(x863+x864)));

	if (t99 != 15248) { NG(); } else { ; }
	
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

