#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x41 = 131U;
volatile int8_t x57 = INT8_MIN;
uint16_t x58 = UINT16_MAX;
int32_t x72 = INT32_MAX;
int64_t x75 = INT64_MIN;
volatile int16_t x84 = -435;
int32_t t6 = 100625;
uint16_t x90 = UINT16_MAX;
int32_t t8 = INT32_MIN;
static int32_t x113 = -224370481;
int32_t t10 = 20294;
uint16_t x122 = UINT16_MAX;
int32_t t12 = 483;
static uint64_t t13 = 327456LLU;
static uint16_t x131 = UINT16_MAX;
static volatile int32_t t14 = INT32_MAX;
volatile int16_t x139 = INT16_MAX;
int32_t x149 = 777843;
int32_t x152 = INT32_MIN;
int64_t x173 = -2949061860221600018LL;
volatile uint8_t x174 = 124U;
uint32_t x176 = UINT32_MAX;
static int8_t x178 = -1;
static int8_t x181 = INT8_MIN;
uint64_t x184 = UINT64_MAX;
int64_t x226 = INT64_MAX;
int32_t x233 = INT32_MIN;
volatile int32_t t27 = INT32_MIN;
int64_t x237 = INT64_MIN;
uint64_t x239 = UINT64_MAX;
static int16_t x253 = -1075;
volatile uint64_t x255 = UINT64_MAX;
int32_t t30 = -4453;
int64_t x274 = INT64_MIN;
int8_t x276 = 1;
volatile uint32_t x293 = 7U;
uint32_t t34 = 322808U;
static volatile uint16_t x334 = UINT16_MAX;
volatile int8_t x335 = INT8_MIN;
int32_t x337 = INT32_MIN;
volatile int32_t t36 = INT32_MIN;
static volatile int64_t x343 = INT64_MIN;
volatile int64_t x349 = INT64_MIN;
int16_t x363 = INT16_MAX;
int8_t x373 = -3;
uint8_t x375 = 4U;
int32_t x392 = 3828787;
int32_t t44 = -63449;
int16_t x393 = -13662;
static volatile int32_t t45 = 27096;
static uint64_t x402 = 0LLU;
int16_t x403 = INT16_MIN;
volatile int64_t x404 = -2LL;
static int16_t x419 = -10;
int64_t x422 = INT64_MIN;
uint8_t x428 = 86U;
volatile int16_t x431 = INT16_MIN;
uint16_t x432 = 93U;
int8_t x442 = INT8_MIN;
volatile uint8_t x455 = 29U;
int16_t x462 = INT16_MIN;
volatile int32_t x464 = -460210656;
uint8_t x475 = UINT8_MAX;
static int16_t x493 = 988;
int64_t x494 = INT64_MIN;
int16_t x497 = INT16_MIN;
int64_t x507 = -1LL;
volatile int32_t t60 = -6;
uint32_t x509 = 29254U;
uint64_t x515 = 45592446LLU;
int64_t x523 = -1LL;
uint64_t x527 = 2580350593800992738LLU;
volatile uint64_t x530 = 521560695LLU;
uint32_t x531 = UINT32_MAX;
static int64_t x532 = -1LL;
int32_t t65 = -245752;
static volatile uint64_t x537 = 667580705684296LLU;
int32_t x538 = INT32_MIN;
static uint32_t x549 = UINT32_MAX;
int16_t x551 = INT16_MIN;
uint64_t x552 = 14236801331LLU;
static volatile int32_t x568 = -1;
int64_t x574 = INT64_MAX;
volatile int64_t x576 = -437LL;
volatile uint32_t t71 = UINT32_MAX;
volatile int64_t t73 = 1336929481929716601LL;
static uint16_t x620 = 301U;
volatile int32_t t76 = 506683874;
volatile int64_t x635 = INT64_MIN;
int32_t x650 = INT32_MIN;
volatile int32_t x651 = INT32_MIN;
volatile int32_t x657 = -3;
int32_t x681 = 36216656;
static int64_t x683 = INT64_MAX;
uint16_t x688 = 28U;
uint32_t x706 = 112362U;
volatile int32_t x736 = 592672557;
int32_t t86 = 54613149;
int32_t x749 = INT32_MIN;
volatile int64_t t88 = INT64_MIN;
uint32_t x781 = 458U;
volatile uint32_t t89 = 253U;
static int64_t x791 = -1LL;
int64_t x792 = -1LL;
static int32_t t91 = 75;
uint64_t x844 = UINT64_MAX;
int16_t x845 = INT16_MIN;
int16_t x846 = INT16_MIN;
static volatile int8_t x853 = -1;
int8_t x854 = -17;


void f0(void) {
	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = 1;
	int64_t t0 = INT64_MIN;

	t0 = (x21/((x22^x23)<x24));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x37 = UINT32_MAX;
	int64_t x38 = INT64_MAX;
	static int8_t x39 = INT8_MIN;
	int8_t x40 = 11;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x37/((x38^x39)<x40));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x42 = 58092586U;
	int32_t x43 = INT32_MAX;
	int8_t x44 = -1;
	int32_t t2 = -61959;

	t2 = (x41/((x42^x43)<x44));

	if (t2 != 131) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x59 = -1;
	static uint32_t x60 = UINT32_MAX;
	static volatile int32_t t3 = 3;

	t3 = (x57/((x58^x59)<x60));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = 0;
	static uint32_t x71 = 326995U;
	volatile int32_t t4 = 51012;

	t4 = (x69/((x70^x71)<x72));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x73 = -1LL;
	uint8_t x74 = UINT8_MAX;
	uint8_t x76 = 2U;
	volatile int64_t t5 = -955LL;

	t5 = (x73/((x74^x75)<x76));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x81 = 0;
	int32_t x82 = INT32_MIN;
	uint8_t x83 = 6U;

	t6 = (x81/((x82^x83)<x84));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x85 = UINT32_MAX;
	static uint8_t x86 = 2U;
	int8_t x87 = -1;
	volatile uint16_t x88 = UINT16_MAX;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x85/((x86^x87)<x88));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x89 = INT32_MIN;
	static volatile int16_t x91 = INT16_MIN;
	volatile int16_t x92 = -1;

	t8 = (x89/((x90^x91)<x92));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x101 = INT16_MAX;
	int8_t x102 = 38;
	int64_t x103 = INT64_MIN;
	int32_t x104 = 723;
	volatile int32_t t9 = 831770;

	t9 = (x101/((x102^x103)<x104));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x114 = 426682467048884LLU;
	int16_t x115 = -1;
	int8_t x116 = -1;

	t10 = (x113/((x114^x115)<x116));

	if (t10 != -224370481) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x117 = UINT16_MAX;
	int16_t x118 = -1;
	uint64_t x119 = 39LLU;
	int16_t x120 = -1;
	static volatile int32_t t11 = -1;

	t11 = (x117/((x118^x119)<x120));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x121 = -175;
	uint16_t x123 = 7455U;
	uint16_t x124 = UINT16_MAX;

	t12 = (x121/((x122^x123)<x124));

	if (t12 != -175) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x125 = 3672LLU;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = 537U;
	static volatile int32_t x128 = 6;

	t13 = (x125/((x126^x127)<x128));

	if (t13 != 3672LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x129 = INT32_MAX;
	uint32_t x130 = 2222U;
	int32_t x132 = -1;

	t14 = (x129/((x130^x131)<x132));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x133 = 22840078U;
	volatile int32_t x134 = -1;
	volatile int8_t x135 = -1;
	static uint32_t x136 = 3U;
	volatile uint32_t t15 = 262780076U;

	t15 = (x133/((x134^x135)<x136));

	if (t15 != 22840078U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x137 = -1;
	volatile int16_t x138 = -1;
	uint8_t x140 = UINT8_MAX;
	static volatile int32_t t16 = 5;

	t16 = (x137/((x138^x139)<x140));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x150 = UINT32_MAX;
	int16_t x151 = -1784;
	volatile int32_t t17 = 599998314;

	t17 = (x149/((x150^x151)<x152));

	if (t17 != 777843) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x161 = 67;
	uint32_t x162 = UINT32_MAX;
	uint32_t x163 = 1827823099U;
	uint64_t x164 = 775334373352LLU;
	int32_t t18 = 11095;

	t18 = (x161/((x162^x163)<x164));

	if (t18 != 67) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x169 = UINT8_MAX;
	int16_t x170 = INT16_MIN;
	int32_t x171 = 840358824;
	static int32_t x172 = INT32_MAX;
	int32_t t19 = -2;

	t19 = (x169/((x170^x171)<x172));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x175 = 109U;
	int64_t t20 = -15589291LL;

	t20 = (x173/((x174^x175)<x176));

	if (t20 != -2949061860221600018LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x177 = INT64_MIN;
	volatile int8_t x179 = INT8_MAX;
	int64_t x180 = -3LL;
	int64_t t21 = INT64_MIN;

	t21 = (x177/((x178^x179)<x180));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x182 = -8;
	volatile int16_t x183 = -29;
	int32_t t22 = 1950361;

	t22 = (x181/((x182^x183)<x184));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x189 = 1U;
	int8_t x190 = -6;
	static uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MAX;
	uint32_t t23 = 4516U;

	t23 = (x189/((x190^x191)<x192));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x209 = -806877754;
	int64_t x210 = INT64_MIN;
	static uint8_t x211 = UINT8_MAX;
	static volatile int16_t x212 = INT16_MIN;
	volatile int32_t t24 = -3070;

	t24 = (x209/((x210^x211)<x212));

	if (t24 != -806877754) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x217 = 16083231LLU;
	static int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	uint64_t t25 = 177768566936109LLU;

	t25 = (x217/((x218^x219)<x220));

	if (t25 != 16083231LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x225 = -891LL;
	int16_t x227 = INT16_MIN;
	int8_t x228 = -52;
	volatile int64_t t26 = -318186246670LL;

	t26 = (x225/((x226^x227)<x228));

	if (t26 != -891LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = INT64_MIN;
	static int32_t x236 = INT32_MIN;

	t27 = (x233/((x234^x235)<x236));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x238 = 3292908497234695LL;
	static int16_t x240 = -553;
	int64_t t28 = INT64_MIN;

	t28 = (x237/((x238^x239)<x240));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x245 = 148;
	int32_t x246 = INT32_MAX;
	volatile int64_t x247 = -1LL;
	int16_t x248 = -289;
	volatile int32_t t29 = -1;

	t29 = (x245/((x246^x247)<x248));

	if (t29 != 148) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x254 = -1;
	int8_t x256 = INT8_MIN;

	t30 = (x253/((x254^x255)<x256));

	if (t30 != -1075) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x265 = -2940;
	volatile int64_t x266 = INT64_MIN;
	static volatile uint8_t x267 = 14U;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t31 = -82;

	t31 = (x265/((x266^x267)<x268));

	if (t31 != -2940) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x269 = 14246U;
	int16_t x270 = INT16_MIN;
	uint16_t x271 = 632U;
	uint16_t x272 = 32282U;
	int32_t t32 = -104644;

	t32 = (x269/((x270^x271)<x272));

	if (t32 != 14246) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x273 = 357853LLU;
	int64_t x275 = INT64_MAX;
	uint64_t t33 = 10751984647LLU;

	t33 = (x273/((x274^x275)<x276));

	if (t33 != 357853LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x294 = INT32_MAX;
	int64_t x295 = INT64_MAX;
	static volatile int64_t x296 = INT64_MAX;

	t34 = (x293/((x294^x295)<x296));

	if (t34 != 7U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x333 = INT64_MAX;
	int64_t x336 = -5LL;
	int64_t t35 = INT64_MAX;

	t35 = (x333/((x334^x335)<x336));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x338 = -1;
	int8_t x339 = 1;
	int8_t x340 = 3;

	t36 = (x337/((x338^x339)<x340));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x341 = INT32_MAX;
	uint64_t x342 = UINT64_MAX;
	volatile int32_t x344 = INT32_MIN;
	int32_t t37 = INT32_MAX;

	t37 = (x341/((x342^x343)<x344));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x350 = -4022785039299375898LL;
	int8_t x351 = INT8_MAX;
	volatile uint16_t x352 = 1313U;
	static volatile int64_t t38 = INT64_MIN;

	t38 = (x349/((x350^x351)<x352));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x357 = 2260;
	static volatile int16_t x358 = 2025;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MAX;
	volatile int32_t t39 = -3212158;

	t39 = (x357/((x358^x359)<x360));

	if (t39 != 2260) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x361 = -1LL;
	int8_t x362 = INT8_MIN;
	int8_t x364 = 0;
	int64_t t40 = -10LL;

	t40 = (x361/((x362^x363)<x364));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x369 = 8U;
	int64_t x370 = -139LL;
	uint32_t x371 = 680486U;
	volatile uint16_t x372 = 31515U;
	volatile int32_t t41 = 3;

	t41 = (x369/((x370^x371)<x372));

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x374 = -1;
	uint8_t x376 = UINT8_MAX;
	static volatile int32_t t42 = 2820171;

	t42 = (x373/((x374^x375)<x376));

	if (t42 != -3) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MAX;
	uint16_t x383 = UINT16_MAX;
	uint64_t x384 = 179685404225LLU;
	volatile int32_t t43 = -387;

	t43 = (x381/((x382^x383)<x384));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x389 = 4U;
	uint16_t x390 = 346U;
	volatile uint16_t x391 = 119U;

	t44 = (x389/((x390^x391)<x392));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x394 = UINT64_MAX;
	int32_t x395 = -54053;
	int16_t x396 = -2403;

	t45 = (x393/((x394^x395)<x396));

	if (t45 != -13662) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x401 = UINT32_MAX;
	static uint32_t t46 = UINT32_MAX;

	t46 = (x401/((x402^x403)<x404));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x409 = -86;
	int32_t x410 = INT32_MAX;
	uint64_t x411 = 1573925675861LLU;
	volatile int16_t x412 = INT16_MIN;
	int32_t t47 = 4930793;

	t47 = (x409/((x410^x411)<x412));

	if (t47 != -86) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MAX;
	int64_t x420 = -1LL;
	volatile int64_t t48 = INT64_MIN;

	t48 = (x417/((x418^x419)<x420));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x421 = INT32_MAX;
	int8_t x423 = INT8_MAX;
	volatile int32_t x424 = INT32_MAX;
	int32_t t49 = INT32_MAX;

	t49 = (x421/((x422^x423)<x424));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x425 = INT32_MIN;
	static uint16_t x426 = 407U;
	int64_t x427 = INT64_MIN;
	static int32_t t50 = INT32_MIN;

	t50 = (x425/((x426^x427)<x428));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x429 = INT32_MIN;
	volatile int8_t x430 = 3;
	int32_t t51 = INT32_MIN;

	t51 = (x429/((x430^x431)<x432));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x441 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	uint32_t x444 = 415354192U;
	int32_t t52 = 48273597;

	t52 = (x441/((x442^x443)<x444));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x445 = INT8_MIN;
	volatile int16_t x446 = INT16_MIN;
	uint8_t x447 = 1U;
	int16_t x448 = INT16_MAX;
	volatile int32_t t53 = -15048;

	t53 = (x445/((x446^x447)<x448));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x453 = INT8_MIN;
	static int32_t x454 = -1;
	uint8_t x456 = 17U;
	static int32_t t54 = 15;

	t54 = (x453/((x454^x455)<x456));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x461 = 31U;
	volatile int32_t x463 = INT32_MAX;
	int32_t t55 = -60678;

	t55 = (x461/((x462^x463)<x464));

	if (t55 != 31) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x473 = INT16_MIN;
	static uint8_t x474 = UINT8_MAX;
	int16_t x476 = 1964;
	int32_t t56 = 3;

	t56 = (x473/((x474^x475)<x476));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x489 = -1LL;
	uint16_t x490 = 495U;
	int16_t x491 = INT16_MIN;
	int8_t x492 = -1;
	volatile int64_t t57 = -345LL;

	t57 = (x489/((x490^x491)<x492));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x495 = 107U;
	int32_t x496 = 315235275;
	static volatile int32_t t58 = 257607637;

	t58 = (x493/((x494^x495)<x496));

	if (t58 != 988) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x498 = 2369219;
	int8_t x499 = INT8_MIN;
	int16_t x500 = 186;
	static volatile int32_t t59 = 1;

	t59 = (x497/((x498^x499)<x500));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x505 = -114;
	volatile int16_t x506 = 5659;
	int64_t x508 = 53504094359LL;

	t60 = (x505/((x506^x507)<x508));

	if (t60 != -114) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x510 = INT16_MIN;
	static int32_t x511 = -1;
	uint64_t x512 = UINT64_MAX;
	uint32_t t61 = 9U;

	t61 = (x509/((x510^x511)<x512));

	if (t61 != 29254U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x513 = UINT8_MAX;
	int32_t x514 = INT32_MAX;
	int8_t x516 = -4;
	int32_t t62 = -506;

	t62 = (x513/((x514^x515)<x516));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x521 = 337224LL;
	static int32_t x522 = INT32_MAX;
	volatile int16_t x524 = INT16_MAX;
	static int64_t t63 = 15880778739897LL;

	t63 = (x521/((x522^x523)<x524));

	if (t63 != 337224LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x525 = INT8_MAX;
	int32_t x526 = -79978600;
	static int64_t x528 = -1LL;
	int32_t t64 = -130;

	t64 = (x525/((x526^x527)<x528));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x529 = INT16_MIN;

	t65 = (x529/((x530^x531)<x532));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x533 = -1;
	volatile int8_t x534 = 15;
	int32_t x535 = INT32_MIN;
	static int64_t x536 = 28209751498LL;
	static volatile int32_t t66 = -16735713;

	t66 = (x533/((x534^x535)<x536));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x539 = UINT32_MAX;
	int16_t x540 = -1;
	uint64_t t67 = 1544513822191922LLU;

	t67 = (x537/((x538^x539)<x540));

	if (t67 != 667580705684296LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x550 = INT16_MIN;
	uint32_t t68 = UINT32_MAX;

	t68 = (x549/((x550^x551)<x552));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x565 = INT8_MIN;
	int16_t x566 = 3;
	volatile int32_t x567 = INT32_MIN;
	int32_t t69 = 1;

	t69 = (x565/((x566^x567)<x568));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x573 = 4U;
	volatile uint64_t x575 = 24184974530037885LLU;
	int32_t t70 = -7622989;

	t70 = (x573/((x574^x575)<x576));

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x577 = UINT32_MAX;
	static int8_t x578 = -1;
	uint16_t x579 = UINT16_MAX;
	static int16_t x580 = -1;

	t71 = (x577/((x578^x579)<x580));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x581 = 39027912;
	static uint64_t x582 = 78081LLU;
	volatile uint32_t x583 = 375262U;
	uint64_t x584 = UINT64_MAX;
	volatile int32_t t72 = -14675611;

	t72 = (x581/((x582^x583)<x584));

	if (t72 != 39027912) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x593 = -168341350761720680LL;
	int8_t x594 = INT8_MAX;
	uint8_t x595 = 79U;
	volatile int64_t x596 = INT64_MAX;

	t73 = (x593/((x594^x595)<x596));

	if (t73 != -168341350761720680LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x609 = INT16_MIN;
	int16_t x610 = -1687;
	static int16_t x611 = -1;
	uint64_t x612 = UINT64_MAX;
	int32_t t74 = -645464444;

	t74 = (x609/((x610^x611)<x612));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x617 = INT32_MIN;
	static volatile int32_t x618 = -1;
	int32_t x619 = INT32_MAX;
	static int32_t t75 = INT32_MIN;

	t75 = (x617/((x618^x619)<x620));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x625 = INT8_MIN;
	int16_t x626 = 78;
	int64_t x627 = -1LL;
	int16_t x628 = -1;

	t76 = (x625/((x626^x627)<x628));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x633 = -1;
	static volatile int8_t x634 = 53;
	int32_t x636 = INT32_MIN;
	static volatile int32_t t77 = -1007648594;

	t77 = (x633/((x634^x635)<x636));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x645 = 313LL;
	volatile int16_t x646 = -1;
	int32_t x647 = INT32_MAX;
	int8_t x648 = INT8_MIN;
	volatile int64_t t78 = -9LL;

	t78 = (x645/((x646^x647)<x648));

	if (t78 != 313LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x649 = -1;
	static uint16_t x652 = UINT16_MAX;
	int32_t t79 = -310551185;

	t79 = (x649/((x650^x651)<x652));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x658 = UINT32_MAX;
	int32_t x659 = 220318;
	int64_t x660 = 4162883096867648LL;
	volatile int32_t t80 = 49668;

	t80 = (x657/((x658^x659)<x660));

	if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x673 = -1;
	int64_t x674 = INT64_MIN;
	static int16_t x675 = INT16_MAX;
	static int8_t x676 = INT8_MIN;
	static int32_t t81 = -501;

	t81 = (x673/((x674^x675)<x676));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x682 = INT64_MIN;
	int8_t x684 = INT8_MAX;
	int32_t t82 = -109532;

	t82 = (x681/((x682^x683)<x684));

	if (t82 != 36216656) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x685 = UINT32_MAX;
	static uint8_t x686 = 124U;
	int16_t x687 = -31;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x685/((x686^x687)<x688));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x705 = 465299636LLU;
	int8_t x707 = 16;
	int8_t x708 = INT8_MIN;
	uint64_t t84 = 28680007499562260LLU;

	t84 = (x705/((x706^x707)<x708));

	if (t84 != 465299636LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x733 = -1165;
	int8_t x734 = 1;
	uint8_t x735 = 3U;
	static volatile int32_t t85 = 734;

	t85 = (x733/((x734^x735)<x736));

	if (t85 != -1165) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x745 = 13U;
	uint32_t x746 = 41326517U;
	volatile int32_t x747 = -16031;
	uint64_t x748 = UINT64_MAX;

	t86 = (x745/((x746^x747)<x748));

	if (t86 != 13) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x750 = 255624879LLU;
	uint8_t x751 = 37U;
	int16_t x752 = -48;
	volatile int32_t t87 = INT32_MIN;

	t87 = (x749/((x750^x751)<x752));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x757 = INT64_MIN;
	int8_t x758 = -1;
	int16_t x759 = INT16_MAX;
	int32_t x760 = -1514;

	t88 = (x757/((x758^x759)<x760));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x782 = -1LL;
	static int16_t x783 = 210;
	uint16_t x784 = 47U;

	t89 = (x781/((x782^x783)<x784));

	if (t89 != 458U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x789 = INT32_MAX;
	volatile uint64_t x790 = 654404467062096954LLU;
	int32_t t90 = INT32_MAX;

	t90 = (x789/((x790^x791)<x792));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x797 = -54;
	volatile int32_t x798 = -1;
	int32_t x799 = INT32_MAX;
	int16_t x800 = INT16_MAX;

	t91 = (x797/((x798^x799)<x800));

	if (t91 != -54) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x817 = 1;
	int32_t x818 = -235;
	static uint16_t x819 = 12999U;
	int32_t x820 = 885746618;
	int32_t t92 = -19928848;

	t92 = (x817/((x818^x819)<x820));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x821 = INT16_MAX;
	static int16_t x822 = -1066;
	volatile uint32_t x823 = 70165U;
	volatile int8_t x824 = INT8_MIN;
	int32_t t93 = -362659779;

	t93 = (x821/((x822^x823)<x824));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x825 = INT32_MIN;
	int16_t x826 = INT16_MAX;
	uint8_t x827 = UINT8_MAX;
	int16_t x828 = INT16_MAX;
	volatile int32_t t94 = INT32_MIN;

	t94 = (x825/((x826^x827)<x828));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x829 = INT8_MIN;
	static int64_t x830 = INT64_MAX;
	static int64_t x831 = -1LL;
	uint8_t x832 = 1U;
	int32_t t95 = -5288;

	t95 = (x829/((x830^x831)<x832));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x833 = 145U;
	int8_t x834 = -1;
	uint32_t x835 = UINT32_MAX;
	uint32_t x836 = 268U;
	int32_t t96 = -68;

	t96 = (x833/((x834^x835)<x836));

	if (t96 != 145) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x841 = -1;
	uint8_t x842 = 1U;
	int32_t x843 = INT32_MIN;
	volatile int32_t t97 = 82;

	t97 = (x841/((x842^x843)<x844));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x847 = INT64_MAX;
	volatile int32_t x848 = -998778208;
	volatile int32_t t98 = 87167;

	t98 = (x845/((x846^x847)<x848));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x855 = INT8_MAX;
	volatile int16_t x856 = INT16_MAX;
	volatile int32_t t99 = 50692;

	t99 = (x853/((x854^x855)<x856));

	if (t99 != -1) { NG(); } else { ; }
	
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

