#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x14 = -21754553234762463LL;
static int8_t x26 = INT8_MAX;
static volatile int32_t t4 = -50856626;
int32_t t11 = -236583;
static uint32_t x106 = 766647U;
int64_t x107 = INT64_MAX;
uint32_t x121 = 13U;
volatile uint64_t x122 = 251749554006072981LLU;
int32_t t15 = -1857;
static int64_t x165 = INT64_MIN;
int64_t x166 = -13439LL;
int8_t x167 = INT8_MIN;
volatile int8_t x197 = 10;
uint32_t x222 = 129874U;
int16_t x223 = INT16_MIN;
uint16_t x224 = UINT16_MAX;
uint64_t x228 = 1644091462LLU;
uint16_t x231 = 4U;
int64_t x232 = INT64_MIN;
static volatile int32_t t28 = 52;
int32_t t31 = 19;
int64_t x306 = INT64_MIN;
volatile int32_t x307 = -1;
int32_t x308 = -1;
volatile int32_t t32 = 1;
static int8_t x310 = -7;
static int32_t x330 = -1;
int64_t x338 = -1LL;
int64_t x348 = INT64_MIN;
int32_t t36 = 5;
int32_t x351 = 0;
uint32_t x353 = UINT32_MAX;
uint32_t x356 = 1457031876U;
uint32_t x362 = 1U;
static volatile int32_t x363 = -264865795;
uint8_t x364 = UINT8_MAX;
static int16_t x369 = -1;
int32_t x372 = 22697;
volatile int16_t x392 = -1;
int32_t x400 = 224222;
int32_t t42 = -2;
static int64_t x420 = -1LL;
volatile int32_t x422 = -1;
static uint8_t x423 = 23U;
int8_t x428 = INT8_MIN;
int8_t x429 = INT8_MAX;
int8_t x432 = INT8_MIN;
volatile int32_t t48 = 699;
int32_t t50 = -22;
int8_t x465 = INT8_MIN;
volatile int32_t x466 = 11;
int32_t t52 = 289;
int32_t x511 = INT32_MAX;
int64_t x524 = -1LL;
uint32_t x534 = 52U;
int64_t x536 = 272479748LL;
int8_t x541 = INT8_MAX;
volatile int32_t x561 = -1;
int16_t x588 = -1;
int32_t x595 = INT32_MAX;
volatile int16_t x597 = INT16_MAX;
int8_t x599 = INT8_MIN;
volatile int32_t t70 = -28;
uint8_t x629 = UINT8_MAX;
uint32_t x642 = 377410064U;
int16_t x651 = -1745;
static int8_t x673 = INT8_MIN;
int16_t x675 = -1;
static int64_t x688 = 201LL;
static int16_t x699 = 31;
volatile int32_t t79 = -909;
int32_t x716 = INT32_MAX;
static volatile int32_t t81 = -12297500;
int64_t x733 = INT64_MIN;
static int16_t x734 = INT16_MIN;
volatile int64_t x735 = -1LL;
volatile int16_t x738 = -851;
volatile int8_t x740 = 0;
volatile int32_t t83 = -182;
static uint32_t x756 = 2356815U;
uint8_t x761 = 1U;
int64_t x764 = 16204081LL;
uint64_t x782 = 460229LLU;
int8_t x790 = INT8_MIN;
uint8_t x791 = UINT8_MAX;
uint32_t x792 = 76108131U;
static int8_t x806 = INT8_MIN;
int64_t x839 = INT64_MIN;
static int32_t t95 = 67179;
int16_t x842 = 7;
static volatile uint8_t x844 = UINT8_MAX;
uint16_t x856 = UINT16_MAX;
int32_t t98 = -308111;


void f0(void) {
	int32_t x9 = INT32_MAX;
	int64_t x10 = INT64_MIN;
	volatile int16_t x11 = INT16_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t0 = 4120888;

	t0 = ((x9%(x10<x11))<=x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 34149208438473LL;
	static int8_t x15 = INT8_MAX;
	volatile int32_t x16 = INT32_MIN;
	static volatile int32_t t1 = -2015;

	t1 = ((x13%(x14<x15))<=x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = -4;
	int8_t x18 = INT8_MIN;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = -9763;
	volatile int32_t t2 = 0;

	t2 = ((x17%(x18<x19))<=x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x27 = 1150U;
	int8_t x28 = INT8_MIN;
	int32_t t3 = 0;

	t3 = ((x25%(x26<x27))<=x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x37 = -1LL;
	static int32_t x38 = -314935102;
	int32_t x39 = -1;
	static volatile int16_t x40 = 311;

	t4 = ((x37%(x38<x39))<=x40);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x53 = INT64_MIN;
	static volatile uint32_t x54 = 410U;
	uint64_t x55 = 14186683301LLU;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t5 = -22640156;

	t5 = ((x53%(x54<x55))<=x56);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x57 = UINT16_MAX;
	uint32_t x58 = 18324U;
	int8_t x59 = -1;
	uint64_t x60 = 127524LLU;
	volatile int32_t t6 = -1;

	t6 = ((x57%(x58<x59))<=x60);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x65 = 3486147421957855126LLU;
	volatile uint16_t x66 = 49U;
	uint32_t x67 = 1106780113U;
	int8_t x68 = INT8_MIN;
	static int32_t t7 = -14324;

	t7 = ((x65%(x66<x67))<=x68);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x73 = INT64_MAX;
	volatile int32_t x74 = -1118793;
	int8_t x75 = 4;
	int32_t x76 = 19583042;
	static volatile int32_t t8 = -11856;

	t8 = ((x73%(x74<x75))<=x76);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x81 = -3;
	int16_t x82 = -1;
	int64_t x83 = INT64_MAX;
	volatile int32_t x84 = INT32_MIN;
	int32_t t9 = -53463672;

	t9 = ((x81%(x82<x83))<=x84);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x89 = -1;
	int64_t x90 = INT64_MIN;
	int64_t x91 = -8866521LL;
	volatile uint32_t x92 = 831935U;
	volatile int32_t t10 = -93960420;

	t10 = ((x89%(x90<x91))<=x92);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x97 = -1LL;
	int64_t x98 = INT64_MIN;
	uint16_t x99 = 3537U;
	int32_t x100 = INT32_MAX;

	t11 = ((x97%(x98<x99))<=x100);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x101 = 1U;
	int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MAX;
	int16_t x104 = -2500;
	volatile int32_t t12 = -1;

	t12 = ((x101%(x102<x103))<=x104);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x105 = UINT16_MAX;
	uint8_t x108 = 26U;
	int32_t t13 = 31216375;

	t13 = ((x105%(x106<x107))<=x108);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -11;
	uint8_t x116 = UINT8_MAX;
	static int32_t t14 = -640083;

	t14 = ((x113%(x114<x115))<=x116);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x123 = -1;
	int32_t x124 = INT32_MAX;

	t15 = ((x121%(x122<x123))<=x124);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x141 = 3U;
	volatile int8_t x142 = -2;
	int16_t x143 = -1;
	static volatile int16_t x144 = INT16_MIN;
	int32_t t16 = 63;

	t16 = ((x141%(x142<x143))<=x144);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x168 = 15246164LLU;
	static int32_t t17 = 1452339;

	t17 = ((x165%(x166<x167))<=x168);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int32_t x175 = -1;
	int64_t x176 = 1246417300529979118LL;
	int32_t t18 = -1;

	t18 = ((x173%(x174<x175))<=x176);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x177 = 28198833;
	int64_t x178 = INT64_MIN;
	int64_t x179 = 124473133897465802LL;
	static int64_t x180 = -1LL;
	int32_t t19 = 808831;

	t19 = ((x177%(x178<x179))<=x180);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x181 = INT32_MAX;
	static volatile int32_t x182 = INT32_MIN;
	int16_t x183 = -324;
	int64_t x184 = INT64_MIN;
	static volatile int32_t t20 = 159862;

	t20 = ((x181%(x182<x183))<=x184);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MIN;
	uint8_t x195 = 7U;
	int8_t x196 = INT8_MIN;
	static int32_t t21 = -20;

	t21 = ((x193%(x194<x195))<=x196);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x198 = 20U;
	uint8_t x199 = 56U;
	int64_t x200 = -1LL;
	static volatile int32_t t22 = 3589;

	t22 = ((x197%(x198<x199))<=x200);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x217 = INT32_MIN;
	static volatile int8_t x218 = -1;
	int32_t x219 = INT32_MAX;
	uint8_t x220 = 12U;
	static int32_t t23 = -63;

	t23 = ((x217%(x218<x219))<=x220);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x221 = 24U;
	int32_t t24 = 1;

	t24 = ((x221%(x222<x223))<=x224);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x225 = -1;
	volatile int8_t x226 = INT8_MIN;
	volatile int32_t x227 = -1;
	static int32_t t25 = -30;

	t25 = ((x225%(x226<x227))<=x228);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x229 = INT32_MIN;
	volatile int32_t x230 = INT32_MIN;
	int32_t t26 = -5046527;

	t26 = ((x229%(x230<x231))<=x232);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x253 = 172;
	static int64_t x254 = INT64_MIN;
	volatile int64_t x255 = -4899121313536LL;
	int64_t x256 = -2462988575LL;
	volatile int32_t t27 = -5972;

	t27 = ((x253%(x254<x255))<=x256);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x261 = -64;
	uint8_t x262 = UINT8_MAX;
	uint32_t x263 = 47790432U;
	int32_t x264 = 5966;

	t28 = ((x261%(x262<x263))<=x264);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = 24;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = -1846;
	volatile int32_t t29 = -2;

	t29 = ((x265%(x266<x267))<=x268);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int64_t x270 = -1701949LL;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = 1;
	volatile int32_t t30 = 401;

	t30 = ((x269%(x270<x271))<=x272);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x281 = -633312696644LL;
	volatile int32_t x282 = INT32_MIN;
	int16_t x283 = -1;
	int8_t x284 = INT8_MIN;

	t31 = ((x281%(x282<x283))<=x284);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x305 = -1LL;

	t32 = ((x305%(x306<x307))<=x308);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x309 = 0U;
	static uint32_t x311 = UINT32_MAX;
	volatile uint8_t x312 = 0U;
	static int32_t t33 = 51;

	t33 = ((x309%(x310<x311))<=x312);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x329 = INT16_MIN;
	static uint8_t x331 = 0U;
	int64_t x332 = INT64_MAX;
	volatile int32_t t34 = 581343971;

	t34 = ((x329%(x330<x331))<=x332);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x337 = 6U;
	uint8_t x339 = 19U;
	int64_t x340 = INT64_MIN;
	int32_t t35 = -2518;

	t35 = ((x337%(x338<x339))<=x340);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = 7U;
	int16_t x347 = 447;

	t36 = ((x345%(x346<x347))<=x348);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x349 = INT64_MIN;
	int16_t x350 = -1;
	int16_t x352 = -4498;
	volatile int32_t t37 = -157632;

	t37 = ((x349%(x350<x351))<=x352);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MAX;
	int32_t t38 = -39;

	t38 = ((x353%(x354<x355))<=x356);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int32_t t39 = 3385;

	t39 = ((x361%(x362<x363))<=x364);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x370 = -14077;
	int8_t x371 = INT8_MIN;
	int32_t t40 = -47;

	t40 = ((x369%(x370<x371))<=x372);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x389 = 527;
	int64_t x390 = INT64_MIN;
	volatile int32_t x391 = INT32_MIN;
	volatile int32_t t41 = 321352247;

	t41 = ((x389%(x390<x391))<=x392);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x397 = 691126LL;
	int8_t x398 = INT8_MAX;
	uint64_t x399 = 1178258796024LLU;

	t42 = ((x397%(x398<x399))<=x400);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x409 = 33269LL;
	int32_t x410 = -1;
	uint16_t x411 = 70U;
	uint32_t x412 = 3U;
	int32_t t43 = 1646352;

	t43 = ((x409%(x410<x411))<=x412);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x413 = INT8_MIN;
	int8_t x414 = -1;
	int32_t x415 = INT32_MAX;
	volatile int32_t x416 = 1442794;
	int32_t t44 = -1208;

	t44 = ((x413%(x414<x415))<=x416);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x417 = INT16_MIN;
	static int64_t x418 = INT64_MIN;
	static uint16_t x419 = UINT16_MAX;
	static int32_t t45 = -843879527;

	t45 = ((x417%(x418<x419))<=x420);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x421 = INT16_MIN;
	int64_t x424 = 977LL;
	volatile int32_t t46 = -1238;

	t46 = ((x421%(x422<x423))<=x424);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x425 = -1LL;
	uint32_t x426 = 12U;
	static uint64_t x427 = 48069LLU;
	int32_t t47 = -331345;

	t47 = ((x425%(x426<x427))<=x428);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x430 = INT32_MIN;
	static int32_t x431 = -1;

	t48 = ((x429%(x430<x431))<=x432);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x433 = INT64_MAX;
	uint16_t x434 = 0U;
	uint32_t x435 = 83540U;
	static int64_t x436 = 100130305498413LL;
	volatile int32_t t49 = -1956;

	t49 = ((x433%(x434<x435))<=x436);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x441 = -3615939477885586231LL;
	volatile int32_t x442 = INT32_MIN;
	int8_t x443 = INT8_MIN;
	static int64_t x444 = -1LL;

	t50 = ((x441%(x442<x443))<=x444);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x453 = -19;
	static volatile int32_t x454 = -1;
	int8_t x455 = INT8_MAX;
	uint16_t x456 = 1U;
	volatile int32_t t51 = 3319;

	t51 = ((x453%(x454<x455))<=x456);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x467 = UINT8_MAX;
	volatile int8_t x468 = INT8_MIN;

	t52 = ((x465%(x466<x467))<=x468);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x485 = 49U;
	volatile int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MAX;
	uint16_t x488 = UINT16_MAX;
	volatile int32_t t53 = -2;

	t53 = ((x485%(x486<x487))<=x488);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x489 = 39U;
	uint32_t x490 = 101329403U;
	volatile int32_t x491 = INT32_MIN;
	static uint8_t x492 = 5U;
	volatile int32_t t54 = 16306441;

	t54 = ((x489%(x490<x491))<=x492);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x497 = UINT64_MAX;
	volatile uint32_t x498 = 93023542U;
	int8_t x499 = -1;
	int8_t x500 = -1;
	volatile int32_t t55 = -167250;

	t55 = ((x497%(x498<x499))<=x500);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x501 = 7988U;
	volatile int64_t x502 = INT64_MIN;
	int8_t x503 = INT8_MAX;
	static int8_t x504 = -2;
	volatile int32_t t56 = -93107;

	t56 = ((x501%(x502<x503))<=x504);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x509 = 5U;
	int64_t x510 = -58574173895536LL;
	int8_t x512 = INT8_MIN;
	int32_t t57 = 3130961;

	t57 = ((x509%(x510<x511))<=x512);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x521 = 27609LLU;
	static int8_t x522 = 0;
	int16_t x523 = 468;
	volatile int32_t t58 = 19933928;

	t58 = ((x521%(x522<x523))<=x524);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x533 = 1U;
	int16_t x535 = -1;
	volatile int32_t t59 = -1;

	t59 = ((x533%(x534<x535))<=x536);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x537 = 127171;
	static int64_t x538 = INT64_MIN;
	static int32_t x539 = INT32_MIN;
	volatile uint16_t x540 = 14591U;
	volatile int32_t t60 = -27216;

	t60 = ((x537%(x538<x539))<=x540);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x542 = -10;
	int8_t x543 = 0;
	int8_t x544 = -1;
	int32_t t61 = 28036332;

	t61 = ((x541%(x542<x543))<=x544);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x562 = -6;
	int16_t x563 = -2;
	uint64_t x564 = UINT64_MAX;
	int32_t t62 = 4448;

	t62 = ((x561%(x562<x563))<=x564);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x565 = 931;
	int16_t x566 = INT16_MIN;
	int8_t x567 = -1;
	volatile uint8_t x568 = 22U;
	int32_t t63 = 0;

	t63 = ((x565%(x566<x567))<=x568);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x569 = INT16_MIN;
	static int16_t x570 = 21;
	uint8_t x571 = UINT8_MAX;
	volatile int16_t x572 = INT16_MAX;
	volatile int32_t t64 = 597571;

	t64 = ((x569%(x570<x571))<=x572);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x581 = INT16_MAX;
	int32_t x582 = -24447;
	int64_t x583 = 232LL;
	int64_t x584 = INT64_MIN;
	int32_t t65 = -25848240;

	t65 = ((x581%(x582<x583))<=x584);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x585 = 1;
	int32_t x586 = -515500699;
	volatile uint16_t x587 = 11051U;
	static int32_t t66 = 88;

	t66 = ((x585%(x586<x587))<=x588);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x593 = INT8_MIN;
	uint8_t x594 = UINT8_MAX;
	int8_t x596 = INT8_MAX;
	int32_t t67 = 207;

	t67 = ((x593%(x594<x595))<=x596);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x598 = INT32_MIN;
	int8_t x600 = INT8_MIN;
	int32_t t68 = -3686;

	t68 = ((x597%(x598<x599))<=x600);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x605 = 118U;
	uint16_t x606 = 0U;
	static int8_t x607 = 32;
	int32_t x608 = INT32_MAX;
	static volatile int32_t t69 = -22;

	t69 = ((x605%(x606<x607))<=x608);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x621 = -2;
	int64_t x622 = -1LL;
	int32_t x623 = 362712214;
	uint16_t x624 = 1U;

	t70 = ((x621%(x622<x623))<=x624);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x630 = 18U;
	static uint32_t x631 = 1390926U;
	int64_t x632 = INT64_MAX;
	int32_t t71 = -5;

	t71 = ((x629%(x630<x631))<=x632);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x641 = INT16_MIN;
	static int8_t x643 = -1;
	volatile int8_t x644 = INT8_MIN;
	int32_t t72 = 68;

	t72 = ((x641%(x642<x643))<=x644);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x649 = -1LL;
	int64_t x650 = INT64_MIN;
	int8_t x652 = -54;
	volatile int32_t t73 = 13288604;

	t73 = ((x649%(x650<x651))<=x652);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x669 = INT16_MIN;
	uint16_t x670 = UINT16_MAX;
	uint64_t x671 = UINT64_MAX;
	uint8_t x672 = 24U;
	volatile int32_t t74 = 70;

	t74 = ((x669%(x670<x671))<=x672);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x674 = 54544U;
	uint64_t x676 = 6371908LLU;
	int32_t t75 = 108237204;

	t75 = ((x673%(x674<x675))<=x676);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x685 = 0;
	uint32_t x686 = 950U;
	static uint64_t x687 = 6803334LLU;
	int32_t t76 = -1053424;

	t76 = ((x685%(x686<x687))<=x688);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x697 = 34738066874368LLU;
	volatile int64_t x698 = -54840884039992854LL;
	volatile int32_t x700 = 6990358;
	static int32_t t77 = -8;

	t77 = ((x697%(x698<x699))<=x700);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x701 = -1LL;
	int64_t x702 = -64535143280LL;
	int8_t x703 = -1;
	int32_t x704 = 8014702;
	static int32_t t78 = -124791;

	t78 = ((x701%(x702<x703))<=x704);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x705 = 14;
	int32_t x706 = 1;
	static int32_t x707 = 890862712;
	int16_t x708 = INT16_MAX;

	t79 = ((x705%(x706<x707))<=x708);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x709 = 1U;
	int64_t x710 = INT64_MIN;
	static uint32_t x711 = 64736484U;
	int64_t x712 = -1LL;
	volatile int32_t t80 = 6671;

	t80 = ((x709%(x710<x711))<=x712);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x713 = -1;
	volatile int32_t x714 = INT32_MIN;
	int8_t x715 = -1;

	t81 = ((x713%(x714<x715))<=x716);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x736 = -2;
	static int32_t t82 = 304;

	t82 = ((x733%(x734<x735))<=x736);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x737 = 819661;
	static int64_t x739 = -1LL;

	t83 = ((x737%(x738<x739))<=x740);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x741 = INT32_MIN;
	int64_t x742 = -1LL;
	volatile uint8_t x743 = 36U;
	int32_t x744 = -1;
	int32_t t84 = 469671;

	t84 = ((x741%(x742<x743))<=x744);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x753 = 1LLU;
	int64_t x754 = -1069210569LL;
	static int16_t x755 = -1;
	static int32_t t85 = 934;

	t85 = ((x753%(x754<x755))<=x756);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x762 = 82LLU;
	volatile int64_t x763 = -1LL;
	static volatile int32_t t86 = 7872;

	t86 = ((x761%(x762<x763))<=x764);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x765 = 230548U;
	int32_t x766 = -1;
	int32_t x767 = 364;
	int8_t x768 = INT8_MIN;
	int32_t t87 = -99;

	t87 = ((x765%(x766<x767))<=x768);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x769 = -22;
	static int16_t x770 = -226;
	int8_t x771 = 24;
	int64_t x772 = INT64_MAX;
	volatile int32_t t88 = -224;

	t88 = ((x769%(x770<x771))<=x772);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x773 = UINT16_MAX;
	int16_t x774 = INT16_MIN;
	volatile int8_t x775 = 1;
	volatile int64_t x776 = INT64_MIN;
	int32_t t89 = 7882;

	t89 = ((x773%(x774<x775))<=x776);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x781 = 33U;
	int8_t x783 = INT8_MIN;
	uint64_t x784 = UINT64_MAX;
	static int32_t t90 = 4980;

	t90 = ((x781%(x782<x783))<=x784);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x789 = INT64_MIN;
	int32_t t91 = -86;

	t91 = ((x789%(x790<x791))<=x792);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x793 = INT8_MIN;
	uint8_t x794 = 101U;
	volatile uint32_t x795 = UINT32_MAX;
	uint32_t x796 = 33221779U;
	volatile int32_t t92 = -638;

	t92 = ((x793%(x794<x795))<=x796);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x805 = INT32_MIN;
	uint32_t x807 = UINT32_MAX;
	uint8_t x808 = UINT8_MAX;
	int32_t t93 = 9;

	t93 = ((x805%(x806<x807))<=x808);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x813 = 99715873U;
	uint64_t x814 = 542171199853LLU;
	int8_t x815 = -38;
	volatile int32_t x816 = INT32_MAX;
	int32_t t94 = 952202;

	t94 = ((x813%(x814<x815))<=x816);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x837 = UINT64_MAX;
	static volatile uint64_t x838 = 71313244LLU;
	volatile int64_t x840 = INT64_MIN;

	t95 = ((x837%(x838<x839))<=x840);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x841 = UINT32_MAX;
	uint64_t x843 = UINT64_MAX;
	static volatile int32_t t96 = 7360;

	t96 = ((x841%(x842<x843))<=x844);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x849 = INT8_MAX;
	volatile uint16_t x850 = 54U;
	uint64_t x851 = UINT64_MAX;
	static int64_t x852 = -1LL;
	volatile int32_t t97 = 403;

	t97 = ((x849%(x850<x851))<=x852);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x853 = UINT32_MAX;
	int8_t x854 = -29;
	int16_t x855 = 15;

	t98 = ((x853%(x854<x855))<=x856);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x861 = 1069303376699LLU;
	volatile int8_t x862 = INT8_MIN;
	uint16_t x863 = 89U;
	volatile int16_t x864 = -1;
	int32_t t99 = 949227024;

	t99 = ((x861%(x862<x863))<=x864);

	if (t99 != 1) { NG(); } else { ; }
	
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

