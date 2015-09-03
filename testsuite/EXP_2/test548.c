#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x34 = INT8_MIN;
volatile int8_t x43 = INT8_MIN;
int32_t x52 = -2063;
volatile int64_t t4 = -7823299448060386LL;
int16_t x64 = INT16_MIN;
volatile int64_t x106 = -56293739586459085LL;
volatile uint64_t x109 = 13LLU;
int8_t x111 = INT8_MIN;
int64_t x114 = INT64_MIN;
volatile uint64_t x115 = 6260LLU;
static volatile uint64_t x118 = 2507465292440431339LLU;
static int16_t x144 = -1;
int64_t t12 = 239038122927832LL;
int8_t x177 = INT8_MIN;
volatile int8_t x178 = INT8_MIN;
uint32_t x179 = 698545U;
static uint32_t t15 = 15045427U;
int32_t x225 = -1;
static uint32_t x235 = 986U;
volatile int64_t t20 = -255541LL;
int32_t x249 = INT32_MAX;
int32_t x252 = 446;
uint16_t x258 = 1277U;
int32_t x260 = INT32_MIN;
volatile int32_t t24 = -124;
int32_t x266 = INT32_MAX;
int16_t x267 = INT16_MAX;
volatile int32_t t26 = -365767213;
uint8_t x325 = 28U;
int64_t x328 = -1LL;
static int16_t x342 = INT16_MIN;
int32_t x346 = INT32_MAX;
uint64_t x352 = UINT64_MAX;
int16_t x360 = INT16_MIN;
int32_t x376 = 994605895;
static volatile uint64_t t34 = 784524LLU;
volatile int32_t x381 = INT32_MAX;
volatile int32_t t36 = -12;
int8_t x415 = 1;
volatile int64_t x424 = -1LL;
volatile int32_t x437 = -4;
uint32_t x440 = 7181U;
int32_t x466 = INT32_MIN;
uint32_t x468 = 77732501U;
uint64_t x482 = 956830054244313LLU;
volatile uint16_t x489 = 49U;
static int32_t x490 = INT32_MAX;
int32_t t49 = -13568;
int8_t x493 = INT8_MIN;
static int8_t x494 = INT8_MAX;
int16_t x496 = INT16_MAX;
uint32_t x499 = 3342U;
int16_t x500 = INT16_MAX;
static uint64_t x504 = 2129098233666LLU;
uint64_t x515 = UINT64_MAX;
volatile uint8_t x527 = 31U;
int8_t x528 = INT8_MAX;
int64_t x529 = 123397649519140LL;
int8_t x531 = 9;
volatile int8_t x532 = INT8_MIN;
int64_t x544 = 9322282645117043LL;
volatile int64_t t56 = -1996253LL;
static volatile int8_t x556 = INT8_MAX;
uint8_t x559 = 104U;
int16_t x561 = -1;
static uint64_t x570 = UINT64_MAX;
int16_t x597 = 329;
volatile uint64_t x598 = UINT64_MAX;
uint8_t x599 = 2U;
static volatile int8_t x606 = INT8_MIN;
uint16_t x637 = 5U;
int16_t x638 = INT16_MIN;
static uint64_t t68 = 7LLU;
int32_t x648 = INT32_MAX;
volatile int64_t t69 = 1630162715703283998LL;
int64_t x658 = INT64_MAX;
uint64_t x664 = 621LLU;
volatile int64_t x669 = 2LL;
uint16_t x678 = UINT16_MAX;
volatile int32_t t74 = -350800;
volatile uint32_t x683 = 5U;
int8_t x700 = INT8_MAX;
volatile int16_t x718 = -1;
volatile int64_t x738 = 24950938LL;
int32_t x739 = -1;
int64_t t82 = -7095LL;
int64_t t83 = -6296282256119LL;
int64_t x765 = 52491LL;
static int8_t x766 = INT8_MAX;
static int64_t t84 = -485625240LL;
int64_t t85 = -122592LL;
static int32_t x781 = -1;
static int32_t x788 = -1;
volatile int32_t x798 = -4097164;
int32_t x810 = -234666283;
static uint32_t t91 = 50U;
static int32_t x816 = INT32_MIN;
int16_t x820 = INT16_MIN;
static int32_t x842 = INT32_MIN;
int16_t x843 = -2294;
uint64_t t97 = 0LLU;
int64_t x864 = -1LL;
int16_t x870 = INT16_MIN;


void f0(void) {
	static uint8_t x21 = UINT8_MAX;
	volatile int16_t x22 = INT16_MAX;
	int16_t x23 = 4;
	uint8_t x24 = 16U;
	volatile int32_t t0 = -2255826;

	t0 = ((x21/(x22/x23))-x24);

	if (t0 != -16) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x33 = 79U;
	uint32_t x35 = 3263U;
	uint8_t x36 = UINT8_MAX;
	uint32_t t1 = 853U;

	t1 = ((x33/(x34/x35))-x36);

	if (t1 != 4294967041U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x37 = INT32_MIN;
	int32_t x38 = -211482;
	uint32_t x39 = 241291U;
	int32_t x40 = -18;
	volatile uint32_t t2 = 26681248U;

	t2 = ((x37/(x38/x39))-x40);

	if (t2 != 120669U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x41 = -824063;
	int32_t x42 = -196919533;
	static int64_t x44 = INT64_MAX;
	volatile int64_t t3 = -105LL;

	t3 = ((x41/(x42/x43))-x44);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x49 = -1275521783692434LL;
	int8_t x50 = 2;
	uint8_t x51 = 1U;

	t4 = ((x49/(x50/x51))-x52);

	if (t4 != -637760891844154LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x61 = UINT64_MAX;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = 46508018U;
	static uint64_t t5 = 374821335496727LLU;

	t5 = ((x61/(x62/x63))-x64);

	if (t5 != 200508087757745285LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x85 = 2016016769U;
	int16_t x86 = INT16_MIN;
	int8_t x87 = 10;
	uint16_t x88 = 212U;
	volatile uint32_t t6 = 494809U;

	t6 = ((x85/(x86/x87))-x88);

	if (t6 != 4294967084U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x105 = INT32_MAX;
	uint8_t x107 = 123U;
	static uint64_t x108 = 436468693607754732LLU;
	volatile uint64_t t7 = 419690249948932LLU;

	t7 = ((x105/(x106/x107))-x108);

	if (t7 != 18010275380101796884LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x110 = INT32_MAX;
	volatile int64_t x112 = 276753126LL;
	uint64_t t8 = 1926974265097LLU;

	t8 = ((x109/(x110/x111))-x112);

	if (t8 != 18446744073432798490LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x113 = -377;
	uint16_t x116 = UINT16_MAX;
	uint64_t t9 = 609394312488054727LLU;

	t9 = ((x113/(x114/x115))-x116);

	if (t9 != 18446744073709498601LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x117 = 12936666LLU;
	uint16_t x119 = 26U;
	uint32_t x120 = UINT32_MAX;
	volatile uint64_t t10 = 134632453252674899LLU;

	t10 = ((x117/(x118/x119))-x120);

	if (t10 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x121 = INT64_MAX;
	uint16_t x122 = UINT16_MAX;
	uint16_t x123 = 551U;
	int32_t x124 = -1;
	int64_t t11 = -647416361LL;

	t11 = ((x121/(x122/x123))-x124);

	if (t11 != 78164169803854033LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x141 = INT64_MIN;
	volatile int64_t x142 = INT64_MAX;
	int8_t x143 = -1;

	t12 = ((x141/(x142/x143))-x144);

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MIN;
	volatile int16_t x159 = INT16_MIN;
	static int16_t x160 = INT16_MIN;
	int64_t t13 = 615316468662LL;

	t13 = ((x157/(x158/x159))-x160);

	if (t13 != 32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x161 = 5U;
	uint32_t x162 = 127355U;
	uint16_t x163 = 882U;
	uint64_t x164 = 1823LLU;
	volatile uint64_t t14 = 557832964842903657LLU;

	t14 = ((x161/(x162/x163))-x164);

	if (t14 != 18446744073709549793LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x180 = -1;

	t15 = ((x177/(x178/x179))-x180);

	if (t15 != 698596U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x181 = 13;
	int64_t x182 = INT64_MIN;
	volatile uint32_t x183 = UINT32_MAX;
	int8_t x184 = -1;
	static volatile int64_t t16 = 527LL;

	t16 = ((x181/(x182/x183))-x184);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x197 = 1018820948LL;
	static uint8_t x198 = UINT8_MAX;
	uint8_t x199 = UINT8_MAX;
	static volatile uint16_t x200 = 112U;
	volatile int64_t t17 = -746921208489788849LL;

	t17 = ((x197/(x198/x199))-x200);

	if (t17 != 1018820836LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x226 = INT64_MIN;
	int32_t x227 = 7;
	int64_t x228 = INT64_MAX;
	static int64_t t18 = 12LL;

	t18 = ((x225/(x226/x227))-x228);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x233 = INT64_MAX;
	static uint32_t x234 = 3735U;
	static int16_t x236 = INT16_MIN;
	static int64_t t19 = 946387288978263LL;

	t19 = ((x233/(x234/x235))-x236);

	if (t19 != 3074457345618291370LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x237 = 232U;
	static volatile int64_t x238 = INT64_MAX;
	volatile int16_t x239 = -1;
	int8_t x240 = INT8_MAX;

	t20 = ((x237/(x238/x239))-x240);

	if (t20 != -127LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x241 = INT64_MAX;
	int64_t x242 = 6460LL;
	volatile uint8_t x243 = 12U;
	int32_t x244 = INT32_MAX;
	volatile int64_t t21 = -6807LL;

	t21 = ((x241/(x242/x243))-x244);

	if (t21 != 17143812047413705LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x245 = UINT64_MAX;
	static uint64_t x246 = 249LLU;
	uint8_t x247 = 17U;
	uint32_t x248 = 16U;
	volatile uint64_t t22 = 1001146129769LLU;

	t22 = ((x245/(x246/x247))-x248);

	if (t22 != 1317624576693539385LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x250 = INT32_MIN;
	static uint16_t x251 = 2U;
	volatile int32_t t23 = -439798897;

	t23 = ((x249/(x250/x251))-x252);

	if (t23 != -447) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x257 = INT32_MIN;
	uint8_t x259 = 106U;

	t24 = ((x257/(x258/x259))-x260);

	if (t24 != 1968526678) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x265 = UINT32_MAX;
	uint64_t x268 = 1291LLU;
	uint64_t t25 = 3778289228683LLU;

	t25 = ((x265/(x266/x267))-x268);

	if (t25 != 64243LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x293 = 99U;
	static uint8_t x294 = 8U;
	int16_t x295 = -2;
	int8_t x296 = INT8_MIN;

	t26 = ((x293/(x294/x295))-x296);

	if (t26 != 104) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x309 = INT16_MAX;
	static int64_t x310 = -2242698681996442561LL;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = 0;
	int64_t t27 = 862100LL;

	t27 = ((x309/(x310/x311))-x312);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x326 = INT16_MAX;
	volatile uint16_t x327 = 23U;
	static volatile int64_t t28 = -69065LL;

	t28 = ((x325/(x326/x327))-x328);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x337 = UINT8_MAX;
	static uint64_t x338 = 8769246201103001691LLU;
	int32_t x339 = 3;
	volatile int16_t x340 = INT16_MIN;
	static uint64_t t29 = 3074684414LLU;

	t29 = ((x337/(x338/x339))-x340);

	if (t29 != 32768LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x341 = 3308144;
	uint8_t x343 = 9U;
	uint64_t x344 = UINT64_MAX;
	static uint64_t t30 = 34608472970LLU;

	t30 = ((x341/(x342/x343))-x344);

	if (t30 != 18446744073709550709LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x345 = INT64_MAX;
	int8_t x347 = INT8_MIN;
	static uint64_t x348 = 2072654LLU;
	uint64_t t31 = 0LLU;

	t31 = ((x345/(x346/x347))-x348);

	if (t31 != 18446743523951632306LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x349 = INT8_MIN;
	volatile int16_t x350 = INT16_MAX;
	volatile int16_t x351 = INT16_MAX;
	volatile uint64_t t32 = 595154130104LLU;

	t32 = ((x349/(x350/x351))-x352);

	if (t32 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x357 = 6U;
	volatile uint32_t x358 = 1457945U;
	uint32_t x359 = 6755U;
	static uint32_t t33 = 143691U;

	t33 = ((x357/(x358/x359))-x360);

	if (t33 != 32768U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x373 = 59386LLU;
	static uint32_t x374 = 332507290U;
	uint16_t x375 = 4741U;

	t34 = ((x373/(x374/x375))-x376);

	if (t34 != 18446744072714945721LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x377 = -7913727860LL;
	int64_t x378 = INT64_MIN;
	int16_t x379 = -130;
	uint64_t x380 = 8453720826107145LLU;
	static uint64_t t35 = 152788348512379651LLU;

	t35 = ((x377/(x378/x379))-x380);

	if (t35 != 18438290352883444471LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x382 = 8655U;
	volatile int16_t x383 = 167;
	volatile int8_t x384 = INT8_MIN;

	t36 = ((x381/(x382/x383))-x384);

	if (t36 != 42107650) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x389 = -36;
	volatile int64_t x390 = INT64_MIN;
	uint32_t x391 = UINT32_MAX;
	int32_t x392 = 0;
	volatile int64_t t37 = 129443415608LL;

	t37 = ((x389/(x390/x391))-x392);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x401 = UINT16_MAX;
	int64_t x402 = INT64_MIN;
	static int32_t x403 = INT32_MIN;
	int8_t x404 = -6;
	static volatile int64_t t38 = -548LL;

	t38 = ((x401/(x402/x403))-x404);

	if (t38 != 6LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x413 = -11875395506481277LL;
	int8_t x414 = INT8_MIN;
	static uint8_t x416 = UINT8_MAX;
	volatile int64_t t39 = -19LL;

	t39 = ((x413/(x414/x415))-x416);

	if (t39 != 92776527394129LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	int8_t x423 = -1;
	volatile int64_t t40 = -30739LL;

	t40 = ((x421/(x422/x423))-x424);

	if (t40 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x433 = INT64_MAX;
	int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MIN;
	volatile int8_t x436 = -1;
	static volatile int64_t t41 = -173LL;

	t41 = ((x433/(x434/x435))-x436);

	if (t41 != 549755813888LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x438 = -1LL;
	uint64_t x439 = 130LLU;
	uint64_t t42 = 7590442726LLU;

	t42 = ((x437/(x438/x439))-x440);

	if (t42 != 18446744073709544565LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x465 = -1012733LL;
	volatile int16_t x467 = INT16_MAX;
	int64_t t43 = -44033LL;

	t43 = ((x465/(x466/x467))-x468);

	if (t43 != -77732486LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x469 = UINT8_MAX;
	int8_t x470 = INT8_MIN;
	volatile int16_t x471 = 100;
	volatile int16_t x472 = INT16_MAX;
	int32_t t44 = -996;

	t44 = ((x469/(x470/x471))-x472);

	if (t44 != -33022) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x473 = 1;
	static int32_t x474 = INT32_MAX;
	uint16_t x475 = 21836U;
	int16_t x476 = INT16_MAX;
	volatile int32_t t45 = 3858;

	t45 = ((x473/(x474/x475))-x476);

	if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x477 = -61;
	int64_t x478 = -17467448479389LL;
	volatile int16_t x479 = INT16_MIN;
	static int32_t x480 = 1;
	static volatile int64_t t46 = 30333605774764108LL;

	t46 = ((x477/(x478/x479))-x480);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x481 = -1;
	volatile uint64_t x483 = 111471LLU;
	int8_t x484 = 58;
	uint64_t t47 = 754318753313671LLU;

	t47 = ((x481/(x482/x483))-x484);

	if (t47 != 2149051385LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x485 = 323951LLU;
	int32_t x486 = INT32_MAX;
	volatile uint8_t x487 = 4U;
	int8_t x488 = 7;
	volatile uint64_t t48 = 27LLU;

	t48 = ((x485/(x486/x487))-x488);

	if (t48 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x491 = -1;
	volatile int8_t x492 = -1;

	t49 = ((x489/(x490/x491))-x492);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x495 = 2;
	volatile int32_t t50 = -25583;

	t50 = ((x493/(x494/x495))-x496);

	if (t50 != -32769) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x497 = INT8_MAX;
	int32_t x498 = INT32_MIN;
	uint32_t t51 = 637450U;

	t51 = ((x497/(x498/x499))-x500);

	if (t51 != 4294934529U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x501 = INT32_MIN;
	volatile int8_t x502 = -1;
	static int8_t x503 = -1;
	volatile uint64_t t52 = 9338727LLU;

	t52 = ((x501/(x502/x503))-x504);

	if (t52 != 18446741942463834302LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x513 = INT32_MIN;
	int16_t x514 = -1;
	int32_t x516 = -32783;
	volatile uint64_t t53 = 1480257LLU;

	t53 = ((x513/(x514/x515))-x516);

	if (t53 != 18446744071562100751LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x525 = 15U;
	uint32_t x526 = UINT32_MAX;
	volatile uint32_t t54 = 0U;

	t54 = ((x525/(x526/x527))-x528);

	if (t54 != 4294967169U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x530 = INT64_MAX;
	int64_t t55 = -15645605957LL;

	t55 = ((x529/(x530/x531))-x532);

	if (t55 != 128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x541 = -2099;
	uint8_t x542 = UINT8_MAX;
	int8_t x543 = -1;

	t56 = ((x541/(x542/x543))-x544);

	if (t56 != -9322282645117035LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x545 = INT16_MIN;
	uint32_t x546 = UINT32_MAX;
	uint16_t x547 = 4U;
	uint8_t x548 = 6U;
	volatile uint32_t t57 = 1U;

	t57 = ((x545/(x546/x547))-x548);

	if (t57 != 4294967293U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x553 = 10;
	static volatile int64_t x554 = INT64_MAX;
	volatile int64_t x555 = -1LL;
	int64_t t58 = 60301808379011608LL;

	t58 = ((x553/(x554/x555))-x556);

	if (t58 != -127LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x557 = 34287570LLU;
	static int16_t x558 = INT16_MIN;
	uint16_t x560 = 2U;
	uint64_t t59 = 12189279LLU;

	t59 = ((x557/(x558/x559))-x560);

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x562 = INT64_MAX;
	static int8_t x563 = -1;
	int32_t x564 = -1;
	static volatile int64_t t60 = -7042LL;

	t60 = ((x561/(x562/x563))-x564);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x569 = -1;
	volatile uint64_t x571 = 357248904389691LLU;
	uint32_t x572 = UINT32_MAX;
	uint64_t t61 = 8109685LLU;

	t61 = ((x569/(x570/x571))-x572);

	if (t61 != 357248422641101LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x581 = -1;
	static uint64_t x582 = UINT64_MAX;
	static int32_t x583 = INT32_MIN;
	int32_t x584 = -1;
	uint64_t t62 = 3412782173883969271LLU;

	t62 = ((x581/(x582/x583))-x584);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x600 = INT64_MIN;
	uint64_t t63 = 4LLU;

	t63 = ((x597/(x598/x599))-x600);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x605 = INT16_MIN;
	static uint8_t x607 = 29U;
	uint32_t x608 = UINT32_MAX;
	volatile uint32_t t64 = 140372U;

	t64 = ((x605/(x606/x607))-x608);

	if (t64 != 8193U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x609 = INT32_MAX;
	int64_t x610 = INT64_MIN;
	static uint32_t x611 = 4024U;
	int16_t x612 = -1;
	volatile int64_t t65 = -8931363465258589LL;

	t65 = ((x609/(x610/x611))-x612);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x613 = -1;
	int8_t x614 = -1;
	int64_t x615 = -1LL;
	int8_t x616 = INT8_MAX;
	int64_t t66 = 42023794493833LL;

	t66 = ((x613/(x614/x615))-x616);

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x629 = 3;
	uint32_t x630 = UINT32_MAX;
	static int64_t x631 = 359286LL;
	uint8_t x632 = 1U;
	volatile int64_t t67 = -131051516290LL;

	t67 = ((x629/(x630/x631))-x632);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x639 = 155100173576LLU;
	int64_t x640 = INT64_MAX;

	t68 = ((x637/(x638/x639))-x640);

	if (t68 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x645 = 0U;
	int64_t x646 = INT64_MIN;
	volatile int8_t x647 = -40;

	t69 = ((x645/(x646/x647))-x648);

	if (t69 != -2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x657 = INT16_MIN;
	int16_t x659 = 109;
	int64_t x660 = INT64_MAX;
	volatile int64_t t70 = -10667179710326LL;

	t70 = ((x657/(x658/x659))-x660);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x661 = INT16_MIN;
	int32_t x662 = INT32_MIN;
	uint32_t x663 = 3370043U;
	uint64_t t71 = 6424LLU;

	t71 = ((x661/(x662/x663))-x664);

	if (t71 != 6741819LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x665 = UINT64_MAX;
	int64_t x666 = -21640LL;
	int16_t x667 = -1134;
	int32_t x668 = INT32_MAX;
	volatile uint64_t t72 = 55098675LLU;

	t72 = ((x665/(x666/x667))-x668);

	if (t72 != 970881264889861174LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x670 = INT16_MIN;
	int16_t x671 = 102;
	int16_t x672 = INT16_MIN;
	volatile int64_t t73 = 753468199698LL;

	t73 = ((x669/(x670/x671))-x672);

	if (t73 != 32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x677 = -1;
	static volatile int8_t x679 = INT8_MIN;
	int16_t x680 = -1;

	t74 = ((x677/(x678/x679))-x680);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x681 = -8742;
	uint64_t x682 = 30295536530847522LLU;
	uint32_t x684 = 12U;
	volatile uint64_t t75 = 449713LLU;

	t75 = ((x681/(x682/x683))-x684);

	if (t75 != 3032LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x697 = INT8_MAX;
	static uint64_t x698 = 16LLU;
	int8_t x699 = 1;
	uint64_t t76 = 102497LLU;

	t76 = ((x697/(x698/x699))-x700);

	if (t76 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x701 = INT64_MIN;
	volatile uint64_t x702 = UINT64_MAX;
	volatile uint8_t x703 = 6U;
	uint64_t x704 = UINT64_MAX;
	volatile uint64_t t77 = 812071605453418199LLU;

	t77 = ((x701/(x702/x703))-x704);

	if (t77 != 4LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x713 = INT8_MIN;
	uint8_t x714 = UINT8_MAX;
	int8_t x715 = INT8_MAX;
	int32_t x716 = 3083;
	int32_t t78 = 16511391;

	t78 = ((x713/(x714/x715))-x716);

	if (t78 != -3147) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x717 = 42U;
	static uint64_t x719 = 53520LLU;
	int64_t x720 = -1LL;
	volatile uint64_t t79 = 1138LLU;

	t79 = ((x717/(x718/x719))-x720);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x721 = 90U;
	volatile int16_t x722 = INT16_MIN;
	int64_t x723 = 1LL;
	int8_t x724 = -1;
	int64_t t80 = 365LL;

	t80 = ((x721/(x722/x723))-x724);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x729 = 341;
	uint64_t x730 = UINT64_MAX;
	int64_t x731 = INT64_MAX;
	static int16_t x732 = INT16_MAX;
	volatile uint64_t t81 = 75480LLU;

	t81 = ((x729/(x730/x731))-x732);

	if (t81 != 18446744073709519019LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x737 = INT32_MAX;
	int8_t x740 = INT8_MIN;

	t82 = ((x737/(x738/x739))-x740);

	if (t82 != 42LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x745 = -1;
	static volatile int64_t x746 = INT64_MIN;
	int64_t x747 = -6LL;
	int8_t x748 = INT8_MIN;

	t83 = ((x745/(x746/x747))-x748);

	if (t83 != 128LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x767 = 7;
	volatile int16_t x768 = -1;

	t84 = ((x765/(x766/x767))-x768);

	if (t84 != 2917LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x773 = 4333907U;
	int8_t x774 = INT8_MAX;
	static int64_t x775 = -1LL;
	volatile int16_t x776 = INT16_MIN;

	t85 = ((x773/(x774/x775))-x776);

	if (t85 != -1357LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x777 = INT64_MAX;
	volatile uint64_t x778 = 7967268718794089028LLU;
	volatile uint64_t x779 = 1994172130612608513LLU;
	uint32_t x780 = UINT32_MAX;
	uint64_t t86 = 241186806311LLU;

	t86 = ((x777/(x778/x779))-x780);

	if (t86 != 3074457341323291307LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x782 = INT16_MIN;
	int64_t x783 = -1LL;
	static int32_t x784 = INT32_MAX;
	int64_t t87 = 45217LL;

	t87 = ((x781/(x782/x783))-x784);

	if (t87 != -2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x785 = 933U;
	uint32_t x786 = UINT32_MAX;
	int8_t x787 = INT8_MIN;
	static volatile uint32_t t88 = 423748113U;

	t88 = ((x785/(x786/x787))-x788);

	if (t88 != 934U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x793 = 3U;
	static int64_t x794 = INT64_MAX;
	volatile int32_t x795 = -1;
	static int64_t x796 = -5723511677377LL;
	volatile int64_t t89 = -15992276015478177LL;

	t89 = ((x793/(x794/x795))-x796);

	if (t89 != 5723511677377LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x797 = -1;
	uint16_t x799 = 10134U;
	static volatile int8_t x800 = 3;
	int32_t t90 = -3;

	t90 = ((x797/(x798/x799))-x800);

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x809 = INT32_MIN;
	static int8_t x811 = INT8_MIN;
	uint32_t x812 = UINT32_MAX;

	t91 = ((x809/(x810/x811))-x812);

	if (t91 != 4294966126U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x813 = 4LLU;
	volatile int8_t x814 = -1;
	volatile int8_t x815 = -1;
	volatile uint64_t t92 = 1012520936LLU;

	t92 = ((x813/(x814/x815))-x816);

	if (t92 != 2147483652LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x817 = INT8_MAX;
	static uint16_t x818 = UINT16_MAX;
	static int32_t x819 = -7;
	int32_t t93 = -4343;

	t93 = ((x817/(x818/x819))-x820);

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x825 = -67185;
	int64_t x826 = INT64_MIN;
	uint16_t x827 = 12392U;
	volatile int32_t x828 = INT32_MIN;
	int64_t t94 = 204103LL;

	t94 = ((x825/(x826/x827))-x828);

	if (t94 != 2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x829 = UINT8_MAX;
	static volatile uint8_t x830 = 18U;
	int8_t x831 = -1;
	int16_t x832 = -3;
	volatile int32_t t95 = 51;

	t95 = ((x829/(x830/x831))-x832);

	if (t95 != -11) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x841 = -1;
	int8_t x844 = INT8_MIN;
	volatile int32_t t96 = 6699045;

	t96 = ((x841/(x842/x843))-x844);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x849 = 16686156693895LLU;
	int64_t x850 = -1LL;
	volatile int32_t x851 = -1;
	static uint8_t x852 = 10U;

	t97 = ((x849/(x850/x851))-x852);

	if (t97 != 16686156693885LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x861 = 504U;
	int8_t x862 = 53;
	uint8_t x863 = 42U;
	int64_t t98 = -5LL;

	t98 = ((x861/(x862/x863))-x864);

	if (t98 != 505LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x869 = UINT16_MAX;
	uint32_t x871 = 2046313U;
	static volatile int16_t x872 = INT16_MIN;
	uint32_t t99 = 4921U;

	t99 = ((x869/(x870/x871))-x872);

	if (t99 != 32799U) { NG(); } else { ; }
	
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

