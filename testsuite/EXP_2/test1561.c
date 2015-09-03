#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x14 = INT8_MIN;
int8_t x19 = 1;
int16_t x30 = INT16_MIN;
int16_t x31 = INT16_MIN;
int16_t x33 = -1;
int64_t x34 = -1LL;
volatile uint64_t t4 = 5023LLU;
volatile uint16_t x42 = 58U;
volatile uint16_t x46 = 241U;
int16_t x65 = -1;
int64_t x66 = -1LL;
int64_t x75 = INT64_MAX;
static volatile int16_t x86 = INT16_MIN;
int32_t x102 = INT32_MIN;
volatile int32_t x110 = INT32_MIN;
volatile uint64_t t13 = 35906786720LLU;
int8_t x138 = INT8_MIN;
volatile int8_t x139 = INT8_MIN;
int64_t x142 = INT64_MIN;
volatile int32_t t15 = 223;
uint32_t x145 = 21233535U;
static volatile int16_t x148 = 0;
uint64_t x157 = UINT64_MAX;
static int8_t x159 = INT8_MAX;
int8_t x160 = 55;
volatile int32_t t18 = 305381071;
int16_t x174 = 1;
static uint8_t x175 = 1U;
int16_t x176 = -7722;
int32_t x181 = -4819870;
int16_t x189 = INT16_MIN;
uint64_t x190 = 17234647LLU;
static int16_t x215 = -1;
volatile int32_t x221 = INT32_MIN;
uint64_t x223 = 31213603268486674LLU;
static int64_t x224 = -1LL;
int8_t x228 = -1;
volatile uint64_t t27 = 59863467LLU;
int64_t x240 = 3456968909LL;
static int64_t x242 = -1LL;
static volatile int64_t x243 = INT64_MAX;
volatile uint32_t t30 = 42362639U;
static int64_t x261 = -229617LL;
uint16_t x267 = UINT16_MAX;
int32_t x279 = -2;
volatile int8_t x294 = INT8_MIN;
volatile uint64_t t36 = 61133163563326723LLU;
static int32_t x307 = INT32_MAX;
uint64_t t37 = 63499399582LLU;
static int16_t x364 = INT16_MAX;
int16_t x367 = 45;
volatile uint32_t x368 = 14U;
static uint32_t t41 = 92U;
int64_t t42 = -6888883416296LL;
volatile uint64_t x375 = UINT64_MAX;
volatile int32_t t43 = -71112524;
volatile int32_t t44 = -396175;
uint32_t t47 = 273951818U;
int8_t x413 = INT8_MIN;
static int32_t t48 = -6;
uint64_t t49 = 11116833LLU;
volatile int8_t x431 = INT8_MAX;
volatile uint32_t x471 = 111500551U;
int8_t x478 = -1;
uint64_t x482 = 0LLU;
uint32_t x484 = UINT32_MAX;
int32_t x493 = INT32_MIN;
int32_t x504 = -125914327;
int64_t t56 = 25457552012LL;
uint64_t x505 = 2498542593676601729LLU;
static uint32_t x523 = UINT32_MAX;
int16_t x531 = INT16_MIN;
uint8_t x535 = 30U;
int16_t x540 = INT16_MAX;
static volatile int32_t t63 = -124;
int16_t x550 = -1;
int8_t x566 = INT8_MIN;
uint8_t x571 = UINT8_MAX;
int8_t x587 = 14;
volatile uint16_t x639 = UINT16_MAX;
int8_t x640 = -3;
volatile uint32_t t73 = 2090014881U;
int64_t x651 = 7554611203384LL;
int64_t x653 = INT64_MIN;
int32_t x690 = -1;
volatile int32_t x695 = INT32_MAX;
int32_t t79 = -437743968;
uint8_t x731 = 7U;
static int16_t x732 = INT16_MIN;
uint32_t x737 = 77U;
static volatile int64_t x738 = INT64_MIN;
uint32_t t82 = 9380U;
volatile uint8_t x749 = 3U;
static volatile int32_t x757 = -1;
uint64_t x765 = 6392342LLU;
int64_t x767 = -1LL;
uint8_t x779 = UINT8_MAX;
static int16_t x780 = 56;
volatile int32_t t87 = 174;
int64_t x787 = INT64_MAX;
int32_t x789 = INT32_MIN;
volatile uint16_t x817 = 2257U;
uint32_t t92 = 68726U;
static int64_t x822 = INT64_MIN;
static int32_t x827 = INT32_MIN;
static volatile int64_t t94 = -354066339LL;
uint32_t x839 = UINT32_MAX;
int8_t x842 = 3;
static uint8_t x870 = 6U;


void f0(void) {
	static volatile int16_t x13 = INT16_MIN;
	static volatile int32_t x15 = INT32_MAX;
	volatile uint64_t x16 = 92572LLU;
	uint64_t t0 = 269450LLU;

	t0 = ((x13/(x14<=x15))+x16);

	if (t0 != 59804LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = 26U;
	int64_t x18 = INT64_MIN;
	static uint16_t x20 = 2053U;
	int32_t t1 = 105924631;

	t1 = ((x17/(x18<=x19))+x20);

	if (t1 != 2079) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x29 = INT8_MIN;
	int16_t x32 = -1;
	int32_t t2 = 145198;

	t2 = ((x29/(x30<=x31))+x32);

	if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x35 = INT16_MAX;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t3 = 1;

	t3 = ((x33/(x34<=x35))+x36);

	if (t3 != 126) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x37 = 1634850LLU;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	volatile int64_t x40 = INT64_MIN;

	t4 = ((x37/(x38<=x39))+x40);

	if (t4 != 9223372036856410658LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = INT16_MAX;
	static volatile uint64_t x43 = 4394837355278692LLU;
	int16_t x44 = -1;
	static int32_t t5 = 220766;

	t5 = ((x41/(x42<=x43))+x44);

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = UINT16_MAX;
	volatile uint32_t x47 = 688596784U;
	uint16_t x48 = 4U;
	volatile int32_t t6 = 343;

	t6 = ((x45/(x46<=x47))+x48);

	if (t6 != 65539) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x61 = 1;
	volatile int8_t x62 = INT8_MIN;
	int64_t x63 = 267939083LL;
	int32_t x64 = -1;
	volatile int32_t t7 = -7680490;

	t7 = ((x61/(x62<=x63))+x64);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x67 = -1;
	int16_t x68 = -19;
	volatile int32_t t8 = -66171684;

	t8 = ((x65/(x66<=x67))+x68);

	if (t8 != -20) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x73 = INT64_MAX;
	static uint64_t x74 = 448975450241LLU;
	int8_t x76 = INT8_MIN;
	int64_t t9 = -10455748539267LL;

	t9 = ((x73/(x74<=x75))+x76);

	if (t9 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x85 = UINT8_MAX;
	int64_t x87 = -1LL;
	uint32_t x88 = UINT32_MAX;
	uint32_t t10 = 516108013U;

	t10 = ((x85/(x86<=x87))+x88);

	if (t10 != 254U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x101 = 556811513846953LLU;
	static int8_t x103 = INT8_MIN;
	static int32_t x104 = 1;
	static uint64_t t11 = 5825548LLU;

	t11 = ((x101/(x102<=x103))+x104);

	if (t11 != 556811513846954LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x105 = 4889LLU;
	volatile int16_t x106 = INT16_MIN;
	uint8_t x107 = 10U;
	int8_t x108 = -4;
	uint64_t t12 = 513413466LLU;

	t12 = ((x105/(x106<=x107))+x108);

	if (t12 != 4885LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x109 = UINT64_MAX;
	volatile int32_t x111 = -1;
	int64_t x112 = INT64_MIN;

	t13 = ((x109/(x110<=x111))+x112);

	if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x137 = 767640U;
	uint8_t x140 = 1U;
	uint32_t t14 = 1U;

	t14 = ((x137/(x138<=x139))+x140);

	if (t14 != 767641U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x141 = 28U;
	static uint32_t x143 = 240125535U;
	int32_t x144 = -1;

	t15 = ((x141/(x142<=x143))+x144);

	if (t15 != 27) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x146 = -347LL;
	int8_t x147 = -1;
	uint32_t t16 = 455468U;

	t16 = ((x145/(x146<=x147))+x148);

	if (t16 != 21233535U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x158 = -1;
	volatile uint64_t t17 = 25LLU;

	t17 = ((x157/(x158<=x159))+x160);

	if (t17 != 54LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x169 = 12U;
	uint64_t x170 = 11199082884703LLU;
	static volatile int64_t x171 = INT64_MIN;
	int8_t x172 = 49;

	t18 = ((x169/(x170<=x171))+x172);

	if (t18 != 61) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x173 = -1LL;
	volatile int64_t t19 = 1550792511662662619LL;

	t19 = ((x173/(x174<=x175))+x176);

	if (t19 != -7723LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MIN;
	uint32_t x184 = 165551U;
	uint32_t t20 = 10213539U;

	t20 = ((x181/(x182<=x183))+x184);

	if (t20 != 4290312977U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x191 = -1LL;
	uint16_t x192 = 724U;
	volatile int32_t t21 = 132554088;

	t21 = ((x189/(x190<=x191))+x192);

	if (t21 != -32044) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = -14;
	volatile uint64_t x195 = UINT64_MAX;
	volatile int32_t x196 = -1;
	int32_t t22 = -574533414;

	t22 = ((x193/(x194<=x195))+x196);

	if (t22 != 126) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x201 = -1LL;
	int64_t x202 = INT64_MIN;
	volatile uint16_t x203 = 207U;
	uint16_t x204 = 2667U;
	static int64_t t23 = 1491686213LL;

	t23 = ((x201/(x202<=x203))+x204);

	if (t23 != 2666LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x205 = 54U;
	uint64_t x206 = 761539LLU;
	int8_t x207 = INT8_MIN;
	static int32_t x208 = -4;
	int32_t t24 = -15260;

	t24 = ((x205/(x206<=x207))+x208);

	if (t24 != 50) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x213 = INT64_MIN;
	uint32_t x214 = 5069U;
	uint16_t x216 = UINT16_MAX;
	volatile int64_t t25 = 8322735532LL;

	t25 = ((x213/(x214<=x215))+x216);

	if (t25 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x222 = 197292272U;
	volatile int64_t t26 = 116024446331300921LL;

	t26 = ((x221/(x222<=x223))+x224);

	if (t26 != -2147483649LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x225 = 221560442LLU;
	uint16_t x226 = 1896U;
	int16_t x227 = 15693;

	t27 = ((x225/(x226<=x227))+x228);

	if (t27 != 221560441LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = 2;
	uint16_t x239 = 27U;
	int64_t t28 = 133306185231034776LL;

	t28 = ((x237/(x238<=x239))+x240);

	if (t28 != 3456936141LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x244 = UINT8_MAX;
	uint64_t t29 = 1019039745496241LLU;

	t29 = ((x241/(x242<=x243))+x244);

	if (t29 != 254LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = -1;
	volatile int16_t x247 = 0;
	uint32_t x248 = UINT32_MAX;

	t30 = ((x245/(x246<=x247))+x248);

	if (t30 != 4294967167U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x262 = INT16_MIN;
	int64_t x263 = 0LL;
	int16_t x264 = INT16_MIN;
	int64_t t31 = 1463535767LL;

	t31 = ((x261/(x262<=x263))+x264);

	if (t31 != -262385LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = -1LL;
	int32_t x268 = INT32_MIN;
	int64_t t32 = -413488862062917762LL;

	t32 = ((x265/(x266<=x267))+x268);

	if (t32 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x277 = -1;
	int64_t x278 = INT64_MIN;
	uint64_t x280 = 51011458023786LLU;
	uint64_t t33 = 25413907064694LLU;

	t33 = ((x277/(x278<=x279))+x280);

	if (t33 != 51011458023785LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x285 = INT16_MAX;
	int32_t x286 = -1;
	volatile int32_t x287 = 453013;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t34 = 1929U;

	t34 = ((x285/(x286<=x287))+x288);

	if (t34 != 32766U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x293 = 320554504U;
	uint32_t x295 = UINT32_MAX;
	static uint64_t x296 = 78482274LLU;
	volatile uint64_t t35 = 268525066773LLU;

	t35 = ((x293/(x294<=x295))+x296);

	if (t35 != 399036778LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x297 = 92420357380724LLU;
	int8_t x298 = INT8_MIN;
	static uint8_t x299 = UINT8_MAX;
	uint32_t x300 = 6743U;

	t36 = ((x297/(x298<=x299))+x300);

	if (t36 != 92420357387467LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x305 = UINT64_MAX;
	uint32_t x306 = 2270U;
	int32_t x308 = INT32_MIN;

	t37 = ((x305/(x306<=x307))+x308);

	if (t37 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x325 = INT16_MAX;
	int32_t x326 = INT32_MIN;
	volatile int16_t x327 = -1;
	uint8_t x328 = 110U;
	static volatile int32_t t38 = -2257;

	t38 = ((x325/(x326<=x327))+x328);

	if (t38 != 32877) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x357 = -10542LL;
	int32_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	int64_t x360 = 23738613660LL;
	int64_t t39 = 4208279745866428261LL;

	t39 = ((x357/(x358<=x359))+x360);

	if (t39 != 23738603118LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x361 = 475LL;
	int64_t x362 = -6141657392953468LL;
	volatile uint8_t x363 = UINT8_MAX;
	int64_t t40 = -102762601920404858LL;

	t40 = ((x361/(x362<=x363))+x364);

	if (t40 != 33242LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MIN;

	t41 = ((x365/(x366<=x367))+x368);

	if (t41 != 13U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x369 = -64;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MAX;
	int64_t x372 = -1LL;

	t42 = ((x369/(x370<=x371))+x372);

	if (t42 != -65LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x373 = INT8_MAX;
	static volatile uint32_t x374 = 150959693U;
	static volatile int8_t x376 = 0;

	t43 = ((x373/(x374<=x375))+x376);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x378 = -1;
	int8_t x379 = -1;
	int16_t x380 = INT16_MIN;

	t44 = ((x377/(x378<=x379))+x380);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x385 = -35375075;
	uint64_t x386 = 1652107839LLU;
	int8_t x387 = -2;
	int8_t x388 = 1;
	int32_t t45 = -7586031;

	t45 = ((x385/(x386<=x387))+x388);

	if (t45 != -35375074) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x389 = UINT16_MAX;
	volatile int64_t x390 = -1LL;
	uint16_t x391 = 15U;
	int8_t x392 = -40;
	volatile int32_t t46 = 2;

	t46 = ((x389/(x390<=x391))+x392);

	if (t46 != 65495) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x405 = INT32_MIN;
	int64_t x406 = -12067587382862110LL;
	int32_t x407 = INT32_MAX;
	static uint32_t x408 = 745737657U;

	t47 = ((x405/(x406<=x407))+x408);

	if (t47 != 2893221305U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = -1;
	static uint16_t x416 = 99U;

	t48 = ((x413/(x414<=x415))+x416);

	if (t48 != -29) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x425 = 363366548836LLU;
	uint16_t x426 = 164U;
	int64_t x427 = 417836710047498LL;
	static volatile int8_t x428 = INT8_MIN;

	t49 = ((x425/(x426<=x427))+x428);

	if (t49 != 363366548708LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x429 = -3699713671650LL;
	int8_t x430 = INT8_MAX;
	int32_t x432 = INT32_MAX;
	int64_t t50 = -3643846LL;

	t50 = ((x429/(x430<=x431))+x432);

	if (t50 != -3697566188003LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x469 = UINT32_MAX;
	volatile int8_t x470 = 7;
	volatile int32_t x472 = -6;
	static volatile uint32_t t51 = 3U;

	t51 = ((x469/(x470<=x471))+x472);

	if (t51 != 4294967289U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x477 = INT64_MIN;
	int16_t x479 = 2105;
	uint16_t x480 = 18U;
	volatile int64_t t52 = -3515731675LL;

	t52 = ((x477/(x478<=x479))+x480);

	if (t52 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x481 = INT16_MIN;
	int8_t x483 = -1;
	volatile uint32_t t53 = 1U;

	t53 = ((x481/(x482<=x483))+x484);

	if (t53 != 4294934527U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x494 = -1;
	volatile int32_t x495 = INT32_MAX;
	volatile int8_t x496 = 0;
	static volatile int32_t t54 = INT32_MIN;

	t54 = ((x493/(x494<=x495))+x496);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x497 = INT8_MIN;
	int8_t x498 = INT8_MAX;
	int16_t x499 = INT16_MAX;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t55 = 115;

	t55 = ((x497/(x498<=x499))+x500);

	if (t55 != 65407) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x501 = -10890614071207085LL;
	uint32_t x502 = UINT32_MAX;
	int16_t x503 = -1;

	t56 = ((x501/(x502<=x503))+x504);

	if (t56 != -10890614197121412LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x506 = 0U;
	volatile int16_t x507 = 61;
	static uint32_t x508 = UINT32_MAX;
	static volatile uint64_t t57 = 443532LLU;

	t57 = ((x505/(x506<=x507))+x508);

	if (t57 != 2498542597971569024LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x513 = UINT32_MAX;
	static int16_t x514 = INT16_MAX;
	int32_t x515 = INT32_MAX;
	uint8_t x516 = UINT8_MAX;
	static uint32_t t58 = 8926925U;

	t58 = ((x513/(x514<=x515))+x516);

	if (t58 != 254U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x521 = 359730676952664251LLU;
	static int8_t x522 = INT8_MIN;
	int16_t x524 = -1;
	uint64_t t59 = 20LLU;

	t59 = ((x521/(x522<=x523))+x524);

	if (t59 != 359730676952664250LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x529 = 933U;
	int32_t x530 = INT32_MIN;
	uint8_t x532 = 54U;
	volatile int32_t t60 = -852767257;

	t60 = ((x529/(x530<=x531))+x532);

	if (t60 != 987) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x533 = INT8_MAX;
	int16_t x534 = 1;
	static uint32_t x536 = UINT32_MAX;
	static uint32_t t61 = 123U;

	t61 = ((x533/(x534<=x535))+x536);

	if (t61 != 126U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x537 = 2050U;
	volatile int8_t x538 = INT8_MIN;
	int32_t x539 = 5553;
	int32_t t62 = 987136066;

	t62 = ((x537/(x538<=x539))+x540);

	if (t62 != 34817) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x541 = INT16_MIN;
	int64_t x542 = -1511073962861LL;
	int32_t x543 = -1;
	static int32_t x544 = -68924964;

	t63 = ((x541/(x542<=x543))+x544);

	if (t63 != -68957732) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x545 = 187127LL;
	int8_t x546 = INT8_MIN;
	uint64_t x547 = UINT64_MAX;
	uint64_t x548 = 0LLU;
	static uint64_t t64 = 5687652LLU;

	t64 = ((x545/(x546<=x547))+x548);

	if (t64 != 187127LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x549 = INT8_MIN;
	int16_t x551 = INT16_MAX;
	uint64_t x552 = 101646LLU;
	uint64_t t65 = 2632LLU;

	t65 = ((x549/(x550<=x551))+x552);

	if (t65 != 101518LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x565 = INT8_MIN;
	int16_t x567 = -61;
	int8_t x568 = 0;
	int32_t t66 = -5;

	t66 = ((x565/(x566<=x567))+x568);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x569 = 0U;
	int32_t x570 = INT32_MIN;
	static int32_t x572 = INT32_MAX;
	static uint32_t t67 = 57417U;

	t67 = ((x569/(x570<=x571))+x572);

	if (t67 != 2147483647U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x581 = 43736471847LLU;
	static int32_t x582 = -14109491;
	int8_t x583 = INT8_MIN;
	volatile int32_t x584 = 55729900;
	uint64_t t68 = 356845834014774463LLU;

	t68 = ((x581/(x582<=x583))+x584);

	if (t68 != 43792201747LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x585 = -1;
	volatile int16_t x586 = INT16_MIN;
	int32_t x588 = INT32_MAX;
	volatile int32_t t69 = 4;

	t69 = ((x585/(x586<=x587))+x588);

	if (t69 != 2147483646) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x593 = UINT8_MAX;
	int64_t x594 = INT64_MIN;
	int32_t x595 = 5371;
	int64_t x596 = INT64_MIN;
	volatile int64_t t70 = 15394473552021LL;

	t70 = ((x593/(x594<=x595))+x596);

	if (t70 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x613 = -15;
	volatile int32_t x614 = -1;
	int16_t x615 = 1;
	int32_t x616 = INT32_MAX;
	int32_t t71 = -330;

	t71 = ((x613/(x614<=x615))+x616);

	if (t71 != 2147483632) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x621 = 41437753U;
	int8_t x622 = -1;
	static uint16_t x623 = 96U;
	uint8_t x624 = 14U;
	volatile uint32_t t72 = 59798182U;

	t72 = ((x621/(x622<=x623))+x624);

	if (t72 != 41437767U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x637 = 1483625U;
	int64_t x638 = -6012LL;

	t73 = ((x637/(x638<=x639))+x640);

	if (t73 != 1483622U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x649 = INT32_MIN;
	static volatile uint8_t x650 = UINT8_MAX;
	uint8_t x652 = 12U;
	volatile int32_t t74 = 1;

	t74 = ((x649/(x650<=x651))+x652);

	if (t74 != -2147483636) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x654 = INT16_MIN;
	uint16_t x655 = 13477U;
	static int32_t x656 = INT32_MAX;
	int64_t t75 = 3555431437845806LL;

	t75 = ((x653/(x654<=x655))+x656);

	if (t75 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x661 = -1436656158843509816LL;
	static volatile uint16_t x662 = 22194U;
	int32_t x663 = INT32_MAX;
	int16_t x664 = 0;
	volatile int64_t t76 = 303619LL;

	t76 = ((x661/(x662<=x663))+x664);

	if (t76 != -1436656158843509816LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x689 = 2U;
	volatile int64_t x691 = -1LL;
	int32_t x692 = -130861503;
	static volatile int32_t t77 = -503484;

	t77 = ((x689/(x690<=x691))+x692);

	if (t77 != -130861501) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x693 = -1;
	uint8_t x694 = 31U;
	int64_t x696 = 45013096430LL;
	int64_t t78 = 28026LL;

	t78 = ((x693/(x694<=x695))+x696);

	if (t78 != 45013096429LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x713 = INT8_MIN;
	uint64_t x714 = 2447LLU;
	int32_t x715 = 54293;
	int8_t x716 = -3;

	t79 = ((x713/(x714<=x715))+x716);

	if (t79 != -131) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x729 = INT16_MIN;
	int16_t x730 = -1;
	int32_t t80 = -507;

	t80 = ((x729/(x730<=x731))+x732);

	if (t80 != -65536) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x739 = INT16_MAX;
	static uint16_t x740 = 24U;
	volatile uint32_t t81 = 29U;

	t81 = ((x737/(x738<=x739))+x740);

	if (t81 != 101U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x745 = 41U;
	static int16_t x746 = -1;
	uint16_t x747 = 121U;
	uint16_t x748 = 70U;

	t82 = ((x745/(x746<=x747))+x748);

	if (t82 != 111U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x750 = 13U;
	int16_t x751 = INT16_MAX;
	volatile int8_t x752 = INT8_MIN;
	int32_t t83 = 8328816;

	t83 = ((x749/(x750<=x751))+x752);

	if (t83 != -125) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x758 = 3661067153050832351LLU;
	int16_t x759 = INT16_MIN;
	volatile int16_t x760 = INT16_MAX;
	int32_t t84 = -123181;

	t84 = ((x757/(x758<=x759))+x760);

	if (t84 != 32766) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x766 = INT64_MIN;
	volatile int8_t x768 = 1;
	uint64_t t85 = 50LLU;

	t85 = ((x765/(x766<=x767))+x768);

	if (t85 != 6392343LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x777 = -46997483;
	int8_t x778 = INT8_MAX;
	volatile int32_t t86 = -496114;

	t86 = ((x777/(x778<=x779))+x780);

	if (t86 != -46997427) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x781 = 15289;
	static int16_t x782 = -1;
	uint16_t x783 = UINT16_MAX;
	int32_t x784 = INT32_MIN;

	t87 = ((x781/(x782<=x783))+x784);

	if (t87 != -2147468359) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x785 = 32520U;
	static uint8_t x786 = 18U;
	volatile int64_t x788 = INT64_MIN;
	volatile int64_t t88 = 819776LL;

	t88 = ((x785/(x786<=x787))+x788);

	if (t88 != -9223372036854743288LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x790 = 31U;
	uint32_t x791 = UINT32_MAX;
	int64_t x792 = -51306987935222LL;
	int64_t t89 = 24307926946LL;

	t89 = ((x789/(x790<=x791))+x792);

	if (t89 != -51309135418870LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x793 = INT64_MIN;
	volatile uint8_t x794 = 37U;
	int16_t x795 = INT16_MAX;
	uint8_t x796 = 13U;
	volatile int64_t t90 = 12628631104LL;

	t90 = ((x793/(x794<=x795))+x796);

	if (t90 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x813 = INT8_MIN;
	static int16_t x814 = INT16_MIN;
	uint32_t x815 = UINT32_MAX;
	static volatile int8_t x816 = INT8_MIN;
	static volatile int32_t t91 = 664170877;

	t91 = ((x813/(x814<=x815))+x816);

	if (t91 != -256) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x818 = INT8_MIN;
	uint16_t x819 = 680U;
	static uint32_t x820 = 3601368U;

	t92 = ((x817/(x818<=x819))+x820);

	if (t92 != 3603625U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x821 = INT32_MAX;
	static int64_t x823 = -19742LL;
	uint64_t x824 = 1308238288940LLU;
	uint64_t t93 = 16659136LLU;

	t93 = ((x821/(x822<=x823))+x824);

	if (t93 != 1310385772587LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x825 = -47321LL;
	uint32_t x826 = 133314318U;
	int16_t x828 = -1;

	t94 = ((x825/(x826<=x827))+x828);

	if (t94 != -47322LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x829 = UINT8_MAX;
	volatile int16_t x830 = -1;
	uint64_t x831 = UINT64_MAX;
	uint16_t x832 = UINT16_MAX;
	static int32_t t95 = -274523091;

	t95 = ((x829/(x830<=x831))+x832);

	if (t95 != 65790) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x837 = 1;
	int16_t x838 = INT16_MIN;
	int64_t x840 = 516330553197LL;
	static volatile int64_t t96 = -62419LL;

	t96 = ((x837/(x838<=x839))+x840);

	if (t96 != 516330553198LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x841 = 204LLU;
	uint64_t x843 = 11982675743965968LLU;
	int32_t x844 = -1;
	volatile uint64_t t97 = 90LLU;

	t97 = ((x841/(x842<=x843))+x844);

	if (t97 != 203LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x849 = 1U;
	static volatile int16_t x850 = -1;
	int16_t x851 = -1;
	int16_t x852 = -14;
	static volatile int32_t t98 = 910;

	t98 = ((x849/(x850<=x851))+x852);

	if (t98 != -13) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x869 = INT16_MIN;
	uint16_t x871 = UINT16_MAX;
	volatile uint8_t x872 = 12U;
	volatile int32_t t99 = -361;

	t99 = ((x869/(x870<=x871))+x872);

	if (t99 != -32756) { NG(); } else { ; }
	
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

