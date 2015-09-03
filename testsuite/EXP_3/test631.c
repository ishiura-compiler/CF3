#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = UINT8_MAX;
volatile int64_t x12 = INT64_MIN;
int8_t x13 = -46;
int32_t t1 = -5;
volatile uint64_t x40 = UINT64_MAX;
int32_t t5 = 236495623;
int32_t x53 = -1;
volatile int8_t x62 = INT8_MIN;
volatile int32_t t8 = 845;
int16_t x73 = INT16_MIN;
static int32_t x82 = 50;
uint16_t x89 = 143U;
static int64_t x91 = -1LL;
volatile int32_t x109 = INT32_MIN;
int16_t x111 = 758;
int32_t x125 = -1;
int16_t x129 = INT16_MIN;
volatile int32_t x148 = -285;
volatile int32_t t20 = 13377448;
volatile uint32_t x161 = 3U;
uint8_t x163 = 61U;
static int32_t t23 = 9700900;
static uint8_t x189 = UINT8_MAX;
int32_t x192 = 128807775;
volatile int32_t t24 = -4471953;
int64_t x207 = -1LL;
volatile int16_t x211 = -137;
volatile int32_t t26 = 185;
static uint16_t x235 = 1068U;
static int32_t t28 = -415;
uint32_t x249 = 1U;
int8_t x260 = INT8_MIN;
volatile int32_t t32 = -321;
static volatile int32_t x265 = 523;
uint64_t x305 = 594113881LLU;
int16_t x307 = -9759;
volatile uint32_t x308 = UINT32_MAX;
int32_t x317 = INT32_MIN;
int8_t x319 = 3;
static int64_t x327 = INT64_MAX;
static int32_t t41 = 27686;
uint64_t x349 = UINT64_MAX;
int8_t x352 = INT8_MIN;
uint64_t x354 = UINT64_MAX;
uint64_t x355 = UINT64_MAX;
volatile int32_t t43 = 783980194;
static int64_t x379 = -3558LL;
int32_t t49 = 41349;
volatile int16_t x397 = 483;
int64_t x406 = INT64_MAX;
volatile int32_t t51 = -1304;
int32_t t52 = -43761397;
int64_t x433 = 1026289LL;
static int16_t x449 = -4;
int64_t x450 = 3956450LL;
int64_t x460 = -58263508LL;
int8_t x469 = 1;
uint32_t x470 = 24115087U;
uint16_t x498 = UINT16_MAX;
static int32_t t62 = 0;
uint8_t x504 = 24U;
uint16_t x505 = 6U;
volatile int8_t x506 = INT8_MIN;
uint16_t x515 = UINT16_MAX;
static uint8_t x517 = 79U;
uint8_t x519 = 57U;
int64_t x524 = INT64_MIN;
int8_t x549 = INT8_MIN;
int32_t x550 = INT32_MIN;
uint64_t x562 = 178748720449086LLU;
int8_t x563 = -2;
static int16_t x575 = -1;
int32_t t74 = 1318;
static volatile int32_t x579 = -1;
volatile int32_t t77 = -84777;
uint16_t x605 = UINT16_MAX;
uint16_t x625 = UINT16_MAX;
uint32_t x626 = 91487U;
static uint64_t x629 = 57368313760949778LLU;
uint64_t x649 = 1286818586347LLU;
int16_t x650 = INT16_MIN;
uint32_t x656 = UINT32_MAX;
int64_t x657 = -237515049826973141LL;
int32_t x659 = 1619007;
volatile int32_t t87 = -576815;
volatile int64_t x674 = -1994342184909LL;
int32_t t89 = -8674;
int32_t t93 = 11646;
uint32_t x706 = 1U;
volatile int8_t x708 = INT8_MAX;
uint16_t x718 = 118U;
int32_t x720 = INT32_MAX;
volatile int16_t x744 = INT16_MAX;
uint8_t x748 = UINT8_MAX;


void f0(void) {
	int16_t x9 = -19;
	uint64_t x11 = UINT64_MAX;
	volatile int32_t t0 = 1838403;

	t0 = ((x9<=x10)>>(x11/x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x14 = UINT64_MAX;
	uint64_t x15 = 24901412947487LLU;
	static int32_t x16 = INT32_MIN;

	t1 = ((x13<=x14)>>(x15/x16));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t2 = 1;

	t2 = ((x17<=x18)>>(x19/x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = -3891;
	uint64_t x26 = UINT64_MAX;
	static int16_t x27 = INT16_MIN;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t3 = -279;

	t3 = ((x25<=x26)>>(x27/x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x37 = UINT64_MAX;
	static uint64_t x38 = 6575947LLU;
	volatile int16_t x39 = INT16_MIN;
	volatile int32_t t4 = 49262;

	t4 = ((x37<=x38)>>(x39/x40));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x45 = -1;
	int32_t x46 = INT32_MIN;
	int16_t x47 = -1;
	int64_t x48 = -1LL;

	t5 = ((x45<=x46)>>(x47/x48));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = UINT8_MAX;
	int64_t x50 = INT64_MAX;
	volatile int16_t x51 = INT16_MAX;
	int32_t x52 = INT32_MAX;
	int32_t t6 = 1131327;

	t6 = ((x49<=x50)>>(x51/x52));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x54 = UINT16_MAX;
	static uint8_t x55 = 31U;
	int64_t x56 = INT64_MAX;
	volatile int32_t t7 = -419446;

	t7 = ((x53<=x54)>>(x55/x56));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x61 = UINT16_MAX;
	int16_t x63 = INT16_MIN;
	static uint32_t x64 = UINT32_MAX;

	t8 = ((x61<=x62)>>(x63/x64));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x74 = INT32_MIN;
	uint32_t x75 = 10289082U;
	static int16_t x76 = -1;
	volatile int32_t t9 = -3839;

	t9 = ((x73<=x74)>>(x75/x76));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x81 = UINT16_MAX;
	int64_t x83 = -7137648LL;
	int32_t x84 = INT32_MIN;
	int32_t t10 = -433;

	t10 = ((x81<=x82)>>(x83/x84));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x90 = 24866U;
	static volatile int64_t x92 = 86LL;
	volatile int32_t t11 = 3359509;

	t11 = ((x89<=x90)>>(x91/x92));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x97 = -1;
	volatile uint64_t x98 = UINT64_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	volatile int32_t t12 = 765;

	t12 = ((x97<=x98)>>(x99/x100));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x101 = -1;
	static int32_t x102 = INT32_MAX;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = -1;
	static volatile int32_t t13 = -28560075;

	t13 = ((x101<=x102)>>(x103/x104));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x110 = -42258803;
	int32_t x112 = INT32_MAX;
	volatile int32_t t14 = 4426;

	t14 = ((x109<=x110)>>(x111/x112));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t15 = -498;

	t15 = ((x117<=x118)>>(x119/x120));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x126 = INT16_MAX;
	int16_t x127 = -2424;
	int64_t x128 = INT64_MIN;
	volatile int32_t t16 = 2340141;

	t16 = ((x125<=x126)>>(x127/x128));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x130 = 22298888LLU;
	static uint8_t x131 = 82U;
	int32_t x132 = INT32_MAX;
	int32_t t17 = -1718873;

	t17 = ((x129<=x130)>>(x131/x132));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int8_t x134 = INT8_MAX;
	volatile int8_t x135 = -1;
	int32_t x136 = 56007;
	static int32_t t18 = 1024;

	t18 = ((x133<=x134)>>(x135/x136));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x142 = 184U;
	static int16_t x143 = INT16_MIN;
	int32_t x144 = INT32_MIN;
	int32_t t19 = 390607;

	t19 = ((x141<=x142)>>(x143/x144));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x145 = -1;
	uint64_t x146 = 1956298049092LLU;
	uint32_t x147 = 63202U;

	t20 = ((x145<=x146)>>(x147/x148));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x153 = INT8_MAX;
	int64_t x154 = INT64_MIN;
	volatile int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t21 = -63607;

	t21 = ((x153<=x154)>>(x155/x156));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x162 = INT16_MAX;
	int64_t x164 = INT64_MIN;
	int32_t t22 = -2;

	t22 = ((x161<=x162)>>(x163/x164));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x169 = -1;
	uint32_t x170 = 1U;
	uint32_t x171 = 0U;
	uint8_t x172 = 4U;

	t23 = ((x169<=x170)>>(x171/x172));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x190 = 1987U;
	static int8_t x191 = INT8_MIN;

	t24 = ((x189<=x190)>>(x191/x192));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x205 = INT32_MIN;
	static int32_t x206 = INT32_MIN;
	uint8_t x208 = 2U;
	volatile int32_t t25 = 708156999;

	t25 = ((x205<=x206)>>(x207/x208));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	int8_t x212 = INT8_MIN;

	t26 = ((x209<=x210)>>(x211/x212));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x225 = -99;
	int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t27 = -1;

	t27 = ((x225<=x226)>>(x227/x228));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x233 = 1U;
	int8_t x234 = -1;
	static uint64_t x236 = UINT64_MAX;

	t28 = ((x233<=x234)>>(x235/x236));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x245 = 3U;
	volatile int32_t x246 = -1;
	int64_t x247 = -1LL;
	int32_t x248 = -2089;
	volatile int32_t t29 = 104474;

	t29 = ((x245<=x246)>>(x247/x248));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x250 = INT32_MIN;
	uint8_t x251 = UINT8_MAX;
	uint64_t x252 = 8458016LLU;
	int32_t t30 = 0;

	t30 = ((x249<=x250)>>(x251/x252));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x253 = 15561;
	int64_t x254 = INT64_MAX;
	uint32_t x255 = 180U;
	uint64_t x256 = 9268899575423076LLU;
	volatile int32_t t31 = -677;

	t31 = ((x253<=x254)>>(x255/x256));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x257 = INT16_MIN;
	volatile int32_t x258 = -3248;
	static int8_t x259 = -1;

	t32 = ((x257<=x258)>>(x259/x260));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x261 = UINT64_MAX;
	static volatile uint8_t x262 = 6U;
	uint8_t x263 = UINT8_MAX;
	static int32_t x264 = INT32_MAX;
	int32_t t33 = 7415312;

	t33 = ((x261<=x262)>>(x263/x264));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x266 = -29;
	uint32_t x267 = 366826036U;
	int8_t x268 = INT8_MIN;
	int32_t t34 = 1512;

	t34 = ((x265<=x266)>>(x267/x268));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x293 = INT64_MIN;
	volatile int16_t x294 = -175;
	int8_t x295 = INT8_MAX;
	uint64_t x296 = 470819815LLU;
	int32_t t35 = 196635396;

	t35 = ((x293<=x294)>>(x295/x296));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x306 = INT32_MAX;
	static int32_t t36 = 4748980;

	t36 = ((x305<=x306)>>(x307/x308));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = 1334691U;
	int64_t x315 = -5LL;
	int16_t x316 = INT16_MIN;
	int32_t t37 = -3650;

	t37 = ((x313<=x314)>>(x315/x316));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x318 = UINT16_MAX;
	int16_t x320 = 4;
	int32_t t38 = -10;

	t38 = ((x317<=x318)>>(x319/x320));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x321 = INT16_MIN;
	int16_t x322 = -1;
	int32_t x323 = -1;
	int32_t x324 = INT32_MIN;
	int32_t t39 = -757;

	t39 = ((x321<=x322)>>(x323/x324));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x325 = INT64_MIN;
	int8_t x326 = 3;
	static volatile int64_t x328 = INT64_MIN;
	volatile int32_t t40 = 8;

	t40 = ((x325<=x326)>>(x327/x328));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x337 = 19948785231596LL;
	static uint16_t x338 = 29573U;
	volatile int32_t x339 = -1;
	static int8_t x340 = -1;

	t41 = ((x337<=x338)>>(x339/x340));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x350 = 53;
	volatile uint64_t x351 = 2070353LLU;
	static volatile int32_t t42 = 1;

	t42 = ((x349<=x350)>>(x351/x352));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x353 = -1LL;
	volatile int8_t x356 = INT8_MIN;

	t43 = ((x353<=x354)>>(x355/x356));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x357 = -96479654;
	int16_t x358 = -1349;
	static uint64_t x359 = UINT64_MAX;
	int64_t x360 = INT64_MIN;
	int32_t t44 = 5519;

	t44 = ((x357<=x358)>>(x359/x360));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x365 = 13LLU;
	uint8_t x366 = 2U;
	int32_t x367 = -1;
	volatile uint8_t x368 = 3U;
	static int32_t t45 = 10797;

	t45 = ((x365<=x366)>>(x367/x368));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x377 = -1;
	int32_t x378 = INT32_MAX;
	uint64_t x380 = 6643364333885354416LLU;
	volatile int32_t t46 = 7;

	t46 = ((x377<=x378)>>(x379/x380));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x381 = INT8_MAX;
	int8_t x382 = -58;
	volatile int16_t x383 = -20;
	int32_t x384 = INT32_MAX;
	volatile int32_t t47 = -266368;

	t47 = ((x381<=x382)>>(x383/x384));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x385 = UINT64_MAX;
	int64_t x386 = INT64_MIN;
	int32_t x387 = 4426;
	int32_t x388 = -39898;
	int32_t t48 = -3204;

	t48 = ((x385<=x386)>>(x387/x388));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x393 = INT8_MIN;
	static uint16_t x394 = UINT16_MAX;
	int16_t x395 = 35;
	uint64_t x396 = 6281LLU;

	t49 = ((x393<=x394)>>(x395/x396));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x398 = INT16_MAX;
	uint16_t x399 = 12301U;
	uint64_t x400 = 1907208LLU;
	int32_t t50 = 8;

	t50 = ((x397<=x398)>>(x399/x400));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x405 = 2954291201LL;
	static uint16_t x407 = 46U;
	uint64_t x408 = 227716534897934LLU;

	t51 = ((x405<=x406)>>(x407/x408));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x409 = INT64_MIN;
	int64_t x410 = -1LL;
	uint8_t x411 = 1U;
	int64_t x412 = -18265319LL;

	t52 = ((x409<=x410)>>(x411/x412));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x429 = INT32_MIN;
	int32_t x430 = INT32_MIN;
	int8_t x431 = -1;
	static volatile int8_t x432 = -1;
	volatile int32_t t53 = 7167552;

	t53 = ((x429<=x430)>>(x431/x432));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x434 = UINT64_MAX;
	static uint32_t x435 = 5U;
	int8_t x436 = 7;
	int32_t t54 = 423066;

	t54 = ((x433<=x434)>>(x435/x436));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x437 = 58926922642904916LL;
	int64_t x438 = -1LL;
	static int16_t x439 = -1;
	uint32_t x440 = UINT32_MAX;
	int32_t t55 = 395058;

	t55 = ((x437<=x438)>>(x439/x440));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x441 = 819U;
	static int8_t x442 = INT8_MIN;
	int64_t x443 = -1LL;
	volatile int8_t x444 = INT8_MIN;
	volatile int32_t t56 = -10256250;

	t56 = ((x441<=x442)>>(x443/x444));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x451 = INT32_MIN;
	volatile uint64_t x452 = UINT64_MAX;
	volatile int32_t t57 = -7589679;

	t57 = ((x449<=x450)>>(x451/x452));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x457 = -444LL;
	static int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MIN;
	int32_t t58 = -9;

	t58 = ((x457<=x458)>>(x459/x460));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x461 = -1;
	int16_t x462 = INT16_MIN;
	static int32_t x463 = -1;
	int32_t x464 = INT32_MIN;
	static volatile int32_t t59 = -535;

	t59 = ((x461<=x462)>>(x463/x464));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x471 = -1;
	int64_t x472 = -1LL;
	int32_t t60 = -12302373;

	t60 = ((x469<=x470)>>(x471/x472));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x485 = INT16_MIN;
	static uint64_t x486 = 119235LLU;
	uint32_t x487 = 497172U;
	volatile int16_t x488 = -1;
	int32_t t61 = -4;

	t61 = ((x485<=x486)>>(x487/x488));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x497 = -1;
	int16_t x499 = -3;
	volatile int16_t x500 = INT16_MIN;

	t62 = ((x497<=x498)>>(x499/x500));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x501 = 0;
	int32_t x502 = -1;
	volatile uint16_t x503 = 57U;
	static volatile int32_t t63 = -2169;

	t63 = ((x501<=x502)>>(x503/x504));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x507 = 2;
	int16_t x508 = 59;
	int32_t t64 = -254252;

	t64 = ((x505<=x506)>>(x507/x508));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x509 = 509837086496LLU;
	uint64_t x510 = UINT64_MAX;
	int16_t x511 = -1;
	static int16_t x512 = -1;
	volatile int32_t t65 = 161228;

	t65 = ((x509<=x510)>>(x511/x512));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x513 = 1U;
	int8_t x514 = INT8_MIN;
	int32_t x516 = INT32_MIN;
	static volatile int32_t t66 = -31;

	t66 = ((x513<=x514)>>(x515/x516));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x518 = -1;
	volatile int8_t x520 = INT8_MIN;
	volatile int32_t t67 = 1583;

	t67 = ((x517<=x518)>>(x519/x520));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x521 = 1213826;
	volatile int16_t x522 = -1;
	int32_t x523 = -417936;
	volatile int32_t t68 = -6257006;

	t68 = ((x521<=x522)>>(x523/x524));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x529 = INT64_MIN;
	uint16_t x530 = 118U;
	int32_t x531 = -853851;
	static int32_t x532 = INT32_MIN;
	int32_t t69 = 0;

	t69 = ((x529<=x530)>>(x531/x532));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x537 = UINT32_MAX;
	int32_t x538 = INT32_MIN;
	int64_t x539 = 345622766615LL;
	uint64_t x540 = 51442724281440LLU;
	volatile int32_t t70 = 53300552;

	t70 = ((x537<=x538)>>(x539/x540));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x551 = -1;
	int8_t x552 = 51;
	static volatile int32_t t71 = -2328973;

	t71 = ((x549<=x550)>>(x551/x552));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x557 = INT8_MIN;
	int16_t x558 = INT16_MIN;
	static int8_t x559 = INT8_MIN;
	static int32_t x560 = INT32_MIN;
	static volatile int32_t t72 = -1013876;

	t72 = ((x557<=x558)>>(x559/x560));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x561 = 126;
	static int8_t x564 = INT8_MIN;
	int32_t t73 = 4046;

	t73 = ((x561<=x562)>>(x563/x564));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x573 = UINT32_MAX;
	static int16_t x574 = INT16_MAX;
	int16_t x576 = -3;

	t74 = ((x573<=x574)>>(x575/x576));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x577 = -1;
	int32_t x578 = -3;
	volatile int64_t x580 = -1LL;
	int32_t t75 = -2;

	t75 = ((x577<=x578)>>(x579/x580));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x581 = 30U;
	volatile int16_t x582 = INT16_MIN;
	int64_t x583 = -1LL;
	int16_t x584 = INT16_MAX;
	int32_t t76 = 39004123;

	t76 = ((x581<=x582)>>(x583/x584));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x589 = INT64_MAX;
	volatile int16_t x590 = INT16_MIN;
	uint8_t x591 = UINT8_MAX;
	static volatile uint32_t x592 = 1302177U;

	t77 = ((x589<=x590)>>(x591/x592));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x601 = -1;
	static int64_t x602 = INT64_MIN;
	int64_t x603 = -1LL;
	int16_t x604 = -1;
	volatile int32_t t78 = -425781875;

	t78 = ((x601<=x602)>>(x603/x604));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x606 = INT64_MIN;
	static int32_t x607 = -1;
	int16_t x608 = INT16_MIN;
	static int32_t t79 = 14751052;

	t79 = ((x605<=x606)>>(x607/x608));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x609 = 24U;
	static int32_t x610 = INT32_MAX;
	static volatile uint8_t x611 = 0U;
	int8_t x612 = INT8_MIN;
	static volatile int32_t t80 = 5429;

	t80 = ((x609<=x610)>>(x611/x612));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x617 = -192;
	uint16_t x618 = UINT16_MAX;
	int64_t x619 = INT64_MAX;
	int64_t x620 = INT64_MIN;
	int32_t t81 = 365486;

	t81 = ((x617<=x618)>>(x619/x620));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x627 = INT8_MIN;
	volatile int64_t x628 = -23305395LL;
	int32_t t82 = 23441;

	t82 = ((x625<=x626)>>(x627/x628));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x630 = 845;
	volatile int16_t x631 = 9;
	int8_t x632 = INT8_MIN;
	volatile int32_t t83 = -21341740;

	t83 = ((x629<=x630)>>(x631/x632));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x651 = UINT32_MAX;
	uint64_t x652 = UINT64_MAX;
	int32_t t84 = -4101;

	t84 = ((x649<=x650)>>(x651/x652));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x653 = INT64_MIN;
	volatile uint16_t x654 = 211U;
	int16_t x655 = INT16_MIN;
	int32_t t85 = 7130;

	t85 = ((x653<=x654)>>(x655/x656));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x658 = -6;
	uint64_t x660 = UINT64_MAX;
	int32_t t86 = 841279;

	t86 = ((x657<=x658)>>(x659/x660));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x661 = -1LL;
	int8_t x662 = INT8_MAX;
	int32_t x663 = 146341;
	uint16_t x664 = UINT16_MAX;

	t87 = ((x661<=x662)>>(x663/x664));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x669 = 65718082240947LL;
	static int16_t x670 = INT16_MAX;
	int16_t x671 = INT16_MAX;
	static int32_t x672 = INT32_MIN;
	int32_t t88 = -1;

	t88 = ((x669<=x670)>>(x671/x672));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x673 = -58966LL;
	volatile uint8_t x675 = UINT8_MAX;
	uint64_t x676 = 112425205127210123LLU;

	t89 = ((x673<=x674)>>(x675/x676));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x685 = -1;
	uint8_t x686 = 30U;
	static int8_t x687 = 11;
	int32_t x688 = -814412;
	int32_t t90 = 1;

	t90 = ((x685<=x686)>>(x687/x688));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x689 = 0;
	int8_t x690 = INT8_MIN;
	uint8_t x691 = 2U;
	uint64_t x692 = 45LLU;
	volatile int32_t t91 = -290;

	t91 = ((x689<=x690)>>(x691/x692));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x693 = -407;
	static int32_t x694 = INT32_MIN;
	int16_t x695 = 4;
	int16_t x696 = 2;
	volatile int32_t t92 = 81433;

	t92 = ((x693<=x694)>>(x695/x696));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x701 = UINT16_MAX;
	uint16_t x702 = UINT16_MAX;
	static uint32_t x703 = 37811U;
	int64_t x704 = INT64_MAX;

	t93 = ((x701<=x702)>>(x703/x704));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x705 = 13U;
	static int8_t x707 = 54;
	int32_t t94 = -39229298;

	t94 = ((x705<=x706)>>(x707/x708));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x717 = UINT8_MAX;
	int8_t x719 = -1;
	volatile int32_t t95 = 255;

	t95 = ((x717<=x718)>>(x719/x720));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x721 = 11529U;
	static int8_t x722 = INT8_MAX;
	volatile int16_t x723 = -1;
	uint16_t x724 = 14U;
	int32_t t96 = -4051;

	t96 = ((x721<=x722)>>(x723/x724));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x741 = 386338349;
	int32_t x742 = -525117;
	int32_t x743 = -128;
	static volatile int32_t t97 = 810;

	t97 = ((x741<=x742)>>(x743/x744));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x745 = UINT64_MAX;
	int8_t x746 = INT8_MIN;
	uint8_t x747 = UINT8_MAX;
	int32_t t98 = -379;

	t98 = ((x745<=x746)>>(x747/x748));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x757 = -1239;
	int16_t x758 = INT16_MIN;
	uint32_t x759 = 8152U;
	int64_t x760 = INT64_MAX;
	volatile int32_t t99 = 176214;

	t99 = ((x757<=x758)>>(x759/x760));

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

