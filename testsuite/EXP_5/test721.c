#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x13 = 95U;
int8_t x15 = INT8_MIN;
int32_t x16 = INT32_MIN;
uint64_t t1 = UINT64_MAX;
static uint32_t x41 = 342U;
volatile uint32_t t3 = 1008777U;
int8_t x70 = -1;
volatile int8_t x110 = INT8_MIN;
volatile int16_t x112 = -3;
volatile int64_t t8 = INT64_MAX;
int8_t x146 = 0;
static uint32_t t9 = 3587U;
int16_t x153 = INT16_MAX;
int64_t x157 = 1415775453591557528LL;
static uint16_t x158 = 0U;
int16_t x185 = 1;
volatile uint16_t x195 = UINT16_MAX;
static uint32_t x241 = 305U;
volatile uint8_t x243 = 58U;
int16_t x244 = INT16_MIN;
uint64_t x253 = 6358320LLU;
int8_t x255 = 1;
volatile uint64_t t20 = 3086496794564LLU;
static uint16_t x269 = UINT16_MAX;
static volatile int8_t x276 = INT8_MAX;
static uint64_t x277 = UINT64_MAX;
uint8_t x279 = 2U;
uint64_t t23 = UINT64_MAX;
uint32_t x337 = 1662818U;
uint32_t t26 = 8598U;
static uint8_t x343 = 3U;
uint8_t x352 = 3U;
int32_t x375 = INT32_MIN;
int16_t x398 = INT16_MIN;
int16_t x399 = INT16_MAX;
volatile uint16_t x400 = 9463U;
static volatile int16_t x403 = INT16_MAX;
static volatile uint64_t t33 = 17LLU;
uint16_t x419 = 20U;
int8_t x423 = INT8_MIN;
volatile int8_t x424 = INT8_MIN;
uint32_t x427 = UINT32_MAX;
volatile int32_t t36 = 3;
int32_t x432 = INT32_MIN;
int32_t x438 = -1;
static uint16_t x444 = UINT16_MAX;
uint64_t x452 = 35017916397LLU;
volatile uint8_t x453 = UINT8_MAX;
int32_t t41 = -8268;
volatile int16_t x463 = INT16_MIN;
int32_t x477 = 813;
int32_t t46 = 128162;
int32_t x503 = 4018;
volatile int32_t x505 = 30485841;
int64_t x507 = INT64_MIN;
uint32_t x508 = UINT32_MAX;
int16_t x524 = -1;
uint32_t x530 = 16U;
int8_t x531 = -1;
uint32_t x533 = 6211U;
volatile int64_t x540 = 3964216817214LL;
static uint32_t t55 = UINT32_MAX;
int8_t x542 = INT8_MIN;
volatile int32_t t56 = 642;
uint64_t x546 = UINT64_MAX;
int32_t x548 = INT32_MAX;
volatile uint16_t x550 = 12U;
int32_t t58 = 15;
int16_t x557 = 152;
uint64_t x576 = UINT64_MAX;
volatile int8_t x592 = INT8_MAX;
volatile int8_t x595 = INT8_MIN;
int64_t x596 = INT64_MAX;
static int8_t x637 = 0;
volatile int16_t x638 = INT16_MIN;
int32_t t67 = -4027535;
uint64_t x644 = UINT64_MAX;
int32_t x645 = INT32_MAX;
int64_t x646 = -107393295595946128LL;
int32_t t70 = -14943;
int32_t x703 = INT32_MIN;
uint8_t x706 = 1U;
int16_t x708 = INT16_MAX;
uint64_t x714 = UINT64_MAX;
int32_t t75 = 889629054;
volatile int64_t x717 = 3966843035304166353LL;
int64_t x735 = INT64_MIN;
volatile uint32_t t79 = UINT32_MAX;
static uint16_t x745 = 20679U;
volatile int32_t t80 = -2;
int64_t x766 = INT64_MIN;
static int64_t x782 = INT64_MIN;
int32_t x821 = INT32_MAX;
volatile int32_t x824 = INT32_MIN;
volatile int32_t x849 = INT32_MAX;
int64_t x894 = -1LL;
volatile uint32_t x909 = 63U;
static int8_t x915 = INT8_MAX;
static int64_t t94 = -14692542292995696LL;
volatile int32_t t95 = -254989080;
static int32_t t96 = 1192;
uint64_t x991 = 697LLU;
int32_t t98 = INT32_MAX;


void f0(void) {
	int8_t x14 = -1;
	volatile uint32_t t0 = 33902U;

	t0 = (x13<<((x14%x15)/x16));

	if (t0 != 95U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int64_t x34 = 547677508140295315LL;
	int32_t x35 = -1;
	uint32_t x36 = 385661U;

	t1 = (x33<<((x34%x35)/x36));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x37 = UINT32_MAX;
	uint16_t x38 = UINT16_MAX;
	uint32_t x39 = 100671301U;
	int32_t x40 = INT32_MAX;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x37<<((x38%x39)/x40));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x42 = INT8_MIN;
	int64_t x43 = -13LL;
	static int32_t x44 = 637604;

	t3 = (x41<<((x42%x43)/x44));

	if (t3 != 342U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x53 = 7684;
	int16_t x54 = INT16_MAX;
	static volatile uint16_t x55 = 298U;
	int64_t x56 = INT64_MAX;
	static int32_t t4 = -547040;

	t4 = (x53<<((x54%x55)/x56));

	if (t4 != 7684) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x71 = -1;
	int16_t x72 = INT16_MAX;
	volatile int32_t t5 = -901907;

	t5 = (x69<<((x70%x71)/x72));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x73 = 3933522;
	int32_t x74 = INT32_MIN;
	int64_t x75 = -7LL;
	int64_t x76 = INT64_MIN;
	static int32_t t6 = 8;

	t6 = (x73<<((x74%x75)/x76));

	if (t6 != 3933522) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x109 = INT32_MAX;
	uint64_t x111 = 10726946LLU;
	static volatile int32_t t7 = INT32_MAX;

	t7 = (x109<<((x110%x111)/x112));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x129 = INT64_MAX;
	volatile int32_t x130 = INT32_MIN;
	uint16_t x131 = 7641U;
	uint64_t x132 = UINT64_MAX;

	t8 = (x129<<((x130%x131)/x132));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x145 = 190655U;
	int8_t x147 = -1;
	int8_t x148 = 8;

	t9 = (x145<<((x146%x147)/x148));

	if (t9 != 190655U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x149 = 5U;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -2988;
	int16_t x152 = INT16_MAX;
	volatile int32_t t10 = 11913242;

	t10 = (x149<<((x150%x151)/x152));

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x154 = INT32_MAX;
	volatile int16_t x155 = 3928;
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t11 = -411;

	t11 = (x153<<((x154%x155)/x156));

	if (t11 != 67106816) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x159 = INT32_MIN;
	int16_t x160 = 11994;
	volatile int64_t t12 = -1585757LL;

	t12 = (x157<<((x158%x159)/x160));

	if (t12 != 1415775453591557528LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x186 = -4081;
	volatile uint16_t x187 = 6816U;
	int64_t x188 = 4707082143447063LL;
	static volatile int32_t t13 = 89177;

	t13 = (x185<<((x186%x187)/x188));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x189 = 225626U;
	static int8_t x190 = INT8_MAX;
	int16_t x191 = INT16_MIN;
	int16_t x192 = INT16_MIN;
	static uint32_t t14 = 0U;

	t14 = (x189<<((x190%x191)/x192));

	if (t14 != 225626U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x193 = 1039U;
	static int64_t x194 = INT64_MIN;
	int64_t x196 = 511629LL;
	int32_t t15 = 7186801;

	t15 = (x193<<((x194%x195)/x196));

	if (t15 != 1039) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x209 = 1U;
	volatile int64_t x210 = INT64_MIN;
	uint8_t x211 = 1U;
	static uint32_t x212 = 1U;
	int32_t t16 = 94899;

	t16 = (x209<<((x210%x211)/x212));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x217 = 10956U;
	int64_t x218 = INT64_MIN;
	int32_t x219 = 4027;
	static int32_t x220 = INT32_MIN;
	volatile int32_t t17 = -392846623;

	t17 = (x217<<((x218%x219)/x220));

	if (t17 != 10956) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x237 = 28U;
	static uint64_t x238 = 195620040LLU;
	volatile uint32_t x239 = UINT32_MAX;
	volatile uint32_t x240 = 2054978233U;
	int32_t t18 = -12;

	t18 = (x237<<((x238%x239)/x240));

	if (t18 != 28) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x242 = 13436U;
	uint32_t t19 = 782293U;

	t19 = (x241<<((x242%x243)/x244));

	if (t19 != 305U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x254 = INT64_MAX;
	static uint64_t x256 = UINT64_MAX;

	t20 = (x253<<((x254%x255)/x256));

	if (t20 != 6358320LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x270 = -1;
	uint16_t x271 = 1339U;
	static int8_t x272 = INT8_MIN;
	int32_t t21 = -1658980;

	t21 = (x269<<((x270%x271)/x272));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x273 = 2;
	int32_t x274 = -1;
	static int64_t x275 = -1LL;
	volatile int32_t t22 = 114900;

	t22 = (x273<<((x274%x275)/x276));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x278 = 31341611U;
	int64_t x280 = INT64_MAX;

	t23 = (x277<<((x278%x279)/x280));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	int8_t x295 = 2;
	uint8_t x296 = 23U;
	volatile int32_t t24 = -946232821;

	t24 = (x293<<((x294%x295)/x296));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x301 = UINT64_MAX;
	static uint64_t x302 = 2768LLU;
	uint64_t x303 = 231654702LLU;
	uint32_t x304 = UINT32_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = (x301<<((x302%x303)/x304));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x338 = 2LL;
	volatile uint16_t x339 = 64U;
	int64_t x340 = INT64_MIN;

	t26 = (x337<<((x338%x339)/x340));

	if (t26 != 1662818U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x341 = 253U;
	int16_t x342 = 24;
	int32_t x344 = INT32_MAX;
	volatile int32_t t27 = -219;

	t27 = (x341<<((x342%x343)/x344));

	if (t27 != 253) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x349 = UINT32_MAX;
	volatile uint8_t x350 = 22U;
	static int8_t x351 = 2;
	uint32_t t28 = UINT32_MAX;

	t28 = (x349<<((x350%x351)/x352));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x373 = INT8_MAX;
	int16_t x374 = INT16_MAX;
	volatile int64_t x376 = -1637114228666LL;
	int32_t t29 = 1173124;

	t29 = (x373<<((x374%x375)/x376));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x385 = 27U;
	int16_t x386 = INT16_MIN;
	static int32_t x387 = INT32_MIN;
	static uint32_t x388 = UINT32_MAX;
	int32_t t30 = 7684383;

	t30 = (x385<<((x386%x387)/x388));

	if (t30 != 27) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x397 = 233941273895LL;
	volatile int64_t t31 = -59326234264621569LL;

	t31 = (x397<<((x398%x399)/x400));

	if (t31 != 233941273895LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x401 = UINT64_MAX;
	uint64_t x402 = 25564484365911LLU;
	uint8_t x404 = UINT8_MAX;
	volatile uint64_t t32 = 6641LLU;

	t32 = (x401<<((x402%x403)/x404));

	if (t32 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x413 = 152551656783728LLU;
	uint64_t x414 = 500LLU;
	uint64_t x415 = 1741087528920LLU;
	int16_t x416 = INT16_MAX;

	t33 = (x413<<((x414%x415)/x416));

	if (t33 != 152551656783728LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x417 = 1058099621923327828LLU;
	volatile int64_t x418 = -339624175530LL;
	volatile int32_t x420 = -1;
	static volatile uint64_t t34 = 1LLU;

	t34 = (x417<<((x418%x419)/x420));

	if (t34 != 13582856574333702144LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x421 = 17137585LL;
	volatile int32_t x422 = -12;
	static volatile int64_t t35 = -35203228355878LL;

	t35 = (x421<<((x422%x423)/x424));

	if (t35 != 17137585LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x425 = UINT16_MAX;
	static uint8_t x426 = 11U;
	int16_t x428 = INT16_MIN;

	t36 = (x425<<((x426%x427)/x428));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x429 = 3716965478634546LLU;
	uint8_t x430 = 52U;
	int64_t x431 = INT64_MIN;
	volatile uint64_t t37 = 35216054220298353LLU;

	t37 = (x429<<((x430%x431)/x432));

	if (t37 != 3716965478634546LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x437 = INT32_MAX;
	volatile int32_t x439 = -1;
	uint16_t x440 = 22047U;
	volatile int32_t t38 = INT32_MAX;

	t38 = (x437<<((x438%x439)/x440));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x441 = 1;
	int16_t x442 = INT16_MIN;
	static int16_t x443 = 3;
	int32_t t39 = 3;

	t39 = (x441<<((x442%x443)/x444));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x449 = 11057;
	volatile int8_t x450 = 36;
	volatile int64_t x451 = -4091519LL;
	volatile int32_t t40 = 93;

	t40 = (x449<<((x450%x451)/x452));

	if (t40 != 11057) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x454 = 1U;
	static uint32_t x455 = UINT32_MAX;
	int16_t x456 = INT16_MIN;

	t41 = (x453<<((x454%x455)/x456));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x461 = 4U;
	uint16_t x462 = 821U;
	uint16_t x464 = 23430U;
	static int32_t t42 = 7984696;

	t42 = (x461<<((x462%x463)/x464));

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x465 = INT16_MAX;
	int16_t x466 = 105;
	static int32_t x467 = -372;
	uint32_t x468 = 1205U;
	int32_t t43 = 3965;

	t43 = (x465<<((x466%x467)/x468));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x469 = 0;
	static volatile uint64_t x470 = 13916LLU;
	int32_t x471 = INT32_MAX;
	volatile int16_t x472 = INT16_MIN;
	static volatile int32_t t44 = -24874;

	t44 = (x469<<((x470%x471)/x472));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x473 = 375656806LL;
	volatile uint64_t x474 = 42480842515280LLU;
	static volatile int64_t x475 = -1LL;
	int64_t x476 = -1LL;
	int64_t t45 = -3LL;

	t45 = (x473<<((x474%x475)/x476));

	if (t45 != 375656806LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x478 = 439371382368LLU;
	int64_t x479 = INT64_MIN;
	int32_t x480 = -1;

	t46 = (x477<<((x478%x479)/x480));

	if (t46 != 813) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x489 = 9U;
	uint8_t x490 = 1U;
	int16_t x491 = INT16_MIN;
	uint16_t x492 = UINT16_MAX;
	int32_t t47 = -425;

	t47 = (x489<<((x490%x491)/x492));

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x501 = 0U;
	uint8_t x502 = UINT8_MAX;
	static volatile int32_t x504 = INT32_MAX;
	int32_t t48 = -6086880;

	t48 = (x501<<((x502%x503)/x504));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x506 = INT64_MIN;
	volatile int32_t t49 = -127;

	t49 = (x505<<((x506%x507)/x508));

	if (t49 != 30485841) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x509 = UINT32_MAX;
	int32_t x510 = -1;
	static int8_t x511 = INT8_MIN;
	int16_t x512 = 19;
	uint32_t t50 = UINT32_MAX;

	t50 = (x509<<((x510%x511)/x512));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x521 = 2041;
	int16_t x522 = INT16_MIN;
	static uint8_t x523 = 8U;
	volatile int32_t t51 = 7342315;

	t51 = (x521<<((x522%x523)/x524));

	if (t51 != 2041) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x525 = UINT32_MAX;
	int16_t x526 = INT16_MAX;
	static int8_t x527 = INT8_MAX;
	static int32_t x528 = INT32_MIN;
	static uint32_t t52 = UINT32_MAX;

	t52 = (x525<<((x526%x527)/x528));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x529 = UINT32_MAX;
	volatile int32_t x532 = -189;
	uint32_t t53 = UINT32_MAX;

	t53 = (x529<<((x530%x531)/x532));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x534 = UINT64_MAX;
	int64_t x535 = INT64_MIN;
	int32_t x536 = -133226270;
	volatile uint32_t t54 = 74U;

	t54 = (x533<<((x534%x535)/x536));

	if (t54 != 6211U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x537 = UINT32_MAX;
	int8_t x538 = INT8_MIN;
	static int32_t x539 = -1;

	t55 = (x537<<((x538%x539)/x540));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x541 = UINT8_MAX;
	static uint8_t x543 = 1U;
	int8_t x544 = -3;

	t56 = (x541<<((x542%x543)/x544));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x545 = 72U;
	int64_t x547 = 23329395LL;
	uint32_t t57 = 124579485U;

	t57 = (x545<<((x546%x547)/x548));

	if (t57 != 72U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x549 = 452815;
	static volatile int8_t x551 = 3;
	static uint8_t x552 = UINT8_MAX;

	t58 = (x549<<((x550%x551)/x552));

	if (t58 != 452815) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x558 = UINT64_MAX;
	uint64_t x559 = 2020LLU;
	int64_t x560 = -6422245958LL;
	volatile int32_t t59 = 13048480;

	t59 = (x557<<((x558%x559)/x560));

	if (t59 != 152) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x573 = 177143199LL;
	uint32_t x574 = UINT32_MAX;
	uint8_t x575 = 13U;
	volatile int64_t t60 = -204509670LL;

	t60 = (x573<<((x574%x575)/x576));

	if (t60 != 177143199LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x577 = 1;
	volatile int32_t x578 = INT32_MAX;
	static uint32_t x579 = UINT32_MAX;
	int32_t x580 = -1;
	static volatile int32_t t61 = 281;

	t61 = (x577<<((x578%x579)/x580));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x589 = UINT32_MAX;
	uint64_t x590 = UINT64_MAX;
	static volatile uint16_t x591 = UINT16_MAX;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (x589<<((x590%x591)/x592));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x593 = 231374;
	uint8_t x594 = UINT8_MAX;
	int32_t t63 = 451066;

	t63 = (x593<<((x594%x595)/x596));

	if (t63 != 231374) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x597 = 7448U;
	int32_t x598 = INT32_MIN;
	volatile int32_t x599 = -326;
	int16_t x600 = INT16_MAX;
	static volatile int32_t t64 = 0;

	t64 = (x597<<((x598%x599)/x600));

	if (t64 != 7448) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x613 = 274947385543695031LLU;
	volatile uint8_t x614 = UINT8_MAX;
	int64_t x615 = -14254042975LL;
	static int8_t x616 = INT8_MAX;
	uint64_t t65 = 240503229678101220LLU;

	t65 = (x613<<((x614%x615)/x616));

	if (t65 != 1099789542174780124LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x617 = 25204683LLU;
	int16_t x618 = INT16_MIN;
	static int8_t x619 = INT8_MIN;
	uint8_t x620 = 1U;
	uint64_t t66 = 27110949LLU;

	t66 = (x617<<((x618%x619)/x620));

	if (t66 != 25204683LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x639 = INT16_MIN;
	int16_t x640 = 80;

	t67 = (x637<<((x638%x639)/x640));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x641 = UINT64_MAX;
	int16_t x642 = INT16_MIN;
	uint16_t x643 = 866U;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x641<<((x642%x643)/x644));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x647 = -2;
	uint16_t x648 = 74U;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x645<<((x646%x647)/x648));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x661 = 1197;
	volatile int16_t x662 = -1;
	uint32_t x663 = 874187U;
	uint64_t x664 = UINT64_MAX;

	t70 = (x661<<((x662%x663)/x664));

	if (t70 != 1197) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x697 = 585U;
	uint64_t x698 = UINT64_MAX;
	int16_t x699 = -1;
	static int32_t x700 = -1;
	volatile uint32_t t71 = 39889545U;

	t71 = (x697<<((x698%x699)/x700));

	if (t71 != 585U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x701 = INT32_MAX;
	int64_t x702 = -485581367868081085LL;
	int32_t x704 = INT32_MIN;
	int32_t t72 = INT32_MAX;

	t72 = (x701<<((x702%x703)/x704));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x705 = 28U;
	int64_t x707 = INT64_MIN;
	static volatile int32_t t73 = -1;

	t73 = (x705<<((x706%x707)/x708));

	if (t73 != 28) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x709 = INT32_MAX;
	volatile int64_t x710 = INT64_MIN;
	uint16_t x711 = 374U;
	int32_t x712 = 283;
	volatile int32_t t74 = INT32_MAX;

	t74 = (x709<<((x710%x711)/x712));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x713 = 7U;
	uint16_t x715 = 1U;
	uint32_t x716 = 62U;

	t75 = (x713<<((x714%x715)/x716));

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x718 = -1LL;
	int8_t x719 = INT8_MIN;
	volatile int16_t x720 = -1;
	static int64_t t76 = -152270320996282205LL;

	t76 = (x717<<((x718%x719)/x720));

	if (t76 != 7933686070608332706LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x729 = UINT32_MAX;
	int32_t x730 = -1;
	int8_t x731 = INT8_MIN;
	int8_t x732 = INT8_MIN;
	static volatile uint32_t t77 = UINT32_MAX;

	t77 = (x729<<((x730%x731)/x732));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x733 = 2U;
	int16_t x734 = -1;
	int32_t x736 = 50;
	static int32_t t78 = 5;

	t78 = (x733<<((x734%x735)/x736));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x741 = UINT32_MAX;
	volatile int32_t x742 = 8339833;
	int64_t x743 = INT64_MIN;
	uint64_t x744 = UINT64_MAX;

	t79 = (x741<<((x742%x743)/x744));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x746 = 2271U;
	int32_t x747 = INT32_MAX;
	int8_t x748 = -3;

	t80 = (x745<<((x746%x747)/x748));

	if (t80 != 20679) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x765 = 3947564U;
	volatile int64_t x767 = INT64_MAX;
	volatile int16_t x768 = INT16_MIN;
	volatile uint32_t t81 = 1304U;

	t81 = (x765<<((x766%x767)/x768));

	if (t81 != 3947564U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x781 = 22;
	uint32_t x783 = UINT32_MAX;
	volatile int64_t x784 = INT64_MIN;
	volatile int32_t t82 = -21;

	t82 = (x781<<((x782%x783)/x784));

	if (t82 != 22) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x793 = 5899041700LLU;
	int16_t x794 = 215;
	static int8_t x795 = 25;
	uint32_t x796 = 15632U;
	uint64_t t83 = 101340912LLU;

	t83 = (x793<<((x794%x795)/x796));

	if (t83 != 5899041700LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x822 = 8U;
	int32_t x823 = -1;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x821<<((x822%x823)/x824));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x841 = UINT16_MAX;
	volatile uint8_t x842 = 2U;
	static volatile int16_t x843 = 1131;
	static int32_t x844 = 16130172;
	static int32_t t85 = 0;

	t85 = (x841<<((x842%x843)/x844));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x850 = INT64_MAX;
	int32_t x851 = -1;
	uint32_t x852 = UINT32_MAX;
	volatile int32_t t86 = INT32_MAX;

	t86 = (x849<<((x850%x851)/x852));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x857 = 0;
	int8_t x858 = -2;
	static int8_t x859 = INT8_MIN;
	int8_t x860 = INT8_MIN;
	static int32_t t87 = -69847;

	t87 = (x857<<((x858%x859)/x860));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x865 = 4U;
	static uint64_t x866 = 3639582181682LLU;
	volatile int64_t x867 = -1LL;
	int16_t x868 = INT16_MIN;
	volatile int32_t t88 = 112270280;

	t88 = (x865<<((x866%x867)/x868));

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x893 = INT64_MAX;
	int16_t x895 = -1;
	volatile int32_t x896 = INT32_MIN;
	volatile int64_t t89 = INT64_MAX;

	t89 = (x893<<((x894%x895)/x896));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x897 = UINT64_MAX;
	volatile int8_t x898 = 2;
	volatile int8_t x899 = INT8_MIN;
	volatile int32_t x900 = INT32_MAX;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x897<<((x898%x899)/x900));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x901 = 24U;
	int8_t x902 = -1;
	int32_t x903 = 3283144;
	int64_t x904 = INT64_MIN;
	uint32_t t91 = 1687489155U;

	t91 = (x901<<((x902%x903)/x904));

	if (t91 != 24U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x905 = 3;
	uint16_t x906 = 777U;
	uint16_t x907 = UINT16_MAX;
	int16_t x908 = -786;
	int32_t t92 = 91128;

	t92 = (x905<<((x906%x907)/x908));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x910 = INT32_MAX;
	int16_t x911 = 5898;
	uint64_t x912 = UINT64_MAX;
	uint32_t t93 = 6884015U;

	t93 = (x909<<((x910%x911)/x912));

	if (t93 != 63U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x913 = 4887480LL;
	static int8_t x914 = INT8_MIN;
	int8_t x916 = INT8_MIN;

	t94 = (x913<<((x914%x915)/x916));

	if (t94 != 4887480LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x973 = 25234;
	int64_t x974 = -490406890926LL;
	int8_t x975 = -1;
	int32_t x976 = 122;

	t95 = (x973<<((x974%x975)/x976));

	if (t95 != 25234) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x981 = INT8_MAX;
	uint16_t x982 = UINT16_MAX;
	int8_t x983 = -6;
	int64_t x984 = INT64_MAX;

	t96 = (x981<<((x982%x983)/x984));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x989 = UINT64_MAX;
	uint16_t x990 = 13930U;
	static uint64_t x992 = 29118963585920LLU;
	static volatile uint64_t t97 = UINT64_MAX;

	t97 = (x989<<((x990%x991)/x992));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1001 = INT32_MAX;
	static volatile int64_t x1002 = INT64_MIN;
	uint64_t x1003 = 73926346990LLU;
	static int8_t x1004 = INT8_MIN;

	t98 = (x1001<<((x1002%x1003)/x1004));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1005 = UINT64_MAX;
	int8_t x1006 = INT8_MIN;
	int8_t x1007 = 18;
	int16_t x1008 = INT16_MIN;
	static volatile uint64_t t99 = UINT64_MAX;

	t99 = (x1005<<((x1006%x1007)/x1008));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

