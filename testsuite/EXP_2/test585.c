#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 13;
int8_t x6 = -1;
static volatile int64_t x25 = INT64_MAX;
static int32_t x29 = 791849;
int8_t x30 = INT8_MIN;
volatile int64_t x32 = 161367787110324874LL;
static uint8_t x45 = UINT8_MAX;
int64_t x73 = 2148521234976741LL;
volatile uint16_t x80 = 2U;
volatile int64_t t6 = 489337357116LL;
uint64_t x101 = UINT64_MAX;
int16_t x102 = 1;
static int8_t x104 = 27;
int8_t x108 = 24;
int8_t x143 = -3;
int8_t x179 = INT8_MAX;
int16_t x195 = INT16_MIN;
uint8_t x201 = UINT8_MAX;
static int32_t x204 = 4;
uint8_t x213 = 107U;
int32_t x214 = 1;
uint16_t x215 = 17U;
static uint64_t x234 = 2947780764426862696LLU;
volatile int64_t x236 = INT64_MAX;
int16_t x258 = -1;
volatile int8_t x262 = -1;
uint32_t x281 = 380012132U;
int32_t x283 = INT32_MAX;
int8_t x284 = INT8_MIN;
uint32_t t22 = 334937486U;
static int8_t x309 = INT8_MAX;
int16_t x310 = INT16_MAX;
static volatile int32_t x312 = -1;
volatile int64_t t24 = 8413905780LL;
int32_t t27 = 32040;
volatile int8_t x374 = -3;
int32_t x375 = -298672614;
uint8_t x413 = 12U;
uint32_t x425 = 43U;
int16_t x428 = -27;
uint32_t x439 = 356699453U;
uint8_t x445 = 0U;
static int32_t x446 = -1;
int8_t x458 = 20;
int64_t x459 = INT64_MIN;
uint64_t t36 = 126950016165LLU;
uint32_t x469 = 2252309U;
uint8_t x472 = 0U;
static uint16_t x474 = 0U;
int16_t x476 = INT16_MAX;
int8_t x503 = INT8_MAX;
static uint16_t x509 = 32U;
uint64_t x510 = 25005153722LLU;
volatile uint32_t t45 = 1097990700U;
static uint64_t x557 = 8LLU;
volatile uint64_t x563 = UINT64_MAX;
uint32_t x579 = 12142301U;
volatile uint32_t x589 = 84561U;
volatile uint32_t t50 = 8758313U;
int8_t x621 = INT8_MAX;
int16_t x623 = INT16_MIN;
uint8_t x624 = 0U;
int32_t x639 = 364361;
int16_t x667 = INT16_MIN;
uint16_t x689 = 236U;
uint32_t x691 = 193359880U;
int32_t x692 = INT32_MAX;
uint8_t x747 = UINT8_MAX;
uint64_t x751 = UINT64_MAX;
uint32_t t60 = 2099090199U;
uint32_t t61 = 62856320U;
int16_t x790 = -17;
uint32_t t63 = 751U;
uint32_t x801 = UINT32_MAX;
uint32_t t65 = 150846U;
int64_t x869 = 606496449443475LL;
uint16_t x889 = UINT16_MAX;
int8_t x891 = 6;
int16_t x939 = INT16_MIN;
static volatile uint16_t x940 = UINT16_MAX;
uint16_t x943 = UINT16_MAX;
int16_t x944 = INT16_MAX;
volatile uint64_t t79 = 13LLU;
int64_t x972 = -1LL;
uint64_t x973 = 939437LLU;
uint8_t x976 = 0U;
int64_t t85 = -8121668LL;
static volatile int32_t t86 = -97159271;
volatile int32_t t87 = 168443200;
static uint32_t x1057 = 6017223U;
uint32_t t88 = 16U;
uint16_t x1072 = 1U;
uint16_t x1073 = 26919U;
int16_t x1074 = 3697;
int16_t x1076 = INT16_MIN;
int16_t x1093 = 102;
int32_t x1101 = INT32_MAX;
uint16_t x1128 = UINT16_MAX;
static volatile int32_t t97 = -1;
int32_t x1132 = 1138;
volatile int32_t t98 = -1;
int8_t x1137 = 14;


void f0(void) {
	int64_t x7 = INT64_MAX;
	volatile int16_t x8 = INT16_MAX;
	int32_t t0 = -10790493;

	t0 = ((x5<<(x6/x7))^x8);

	if (t0 != 32754) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x26 = -1;
	uint16_t x27 = UINT16_MAX;
	int8_t x28 = 3;
	static int64_t t1 = 1316802LL;

	t1 = ((x25<<(x26/x27))^x28);

	if (t1 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x31 = INT16_MIN;
	int64_t t2 = 65516036067916030LL;

	t2 = ((x29<<(x30/x31))^x32);

	if (t2 != 161367787110584227LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x46 = UINT64_MAX;
	static int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t3 = 0;

	t3 = ((x45<<(x46/x47))^x48);

	if (t3 != -2147483138) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x65 = INT32_MAX;
	int32_t x66 = 1863512;
	uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 5025U;
	uint32_t t4 = 2U;

	t4 = ((x65<<(x66/x67))^x68);

	if (t4 != 2147478622U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x74 = UINT8_MAX;
	static volatile int32_t x75 = INT32_MAX;
	static uint8_t x76 = UINT8_MAX;
	static volatile int64_t t5 = 4017121757965684094LL;

	t5 = ((x73<<(x74/x75))^x76);

	if (t5 != 2148521234976538LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x77 = INT64_MAX;
	int8_t x78 = -2;
	int8_t x79 = 22;

	t6 = ((x77<<(x78/x79))^x80);

	if (t6 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x103 = UINT16_MAX;
	static uint64_t t7 = 8976LLU;

	t7 = ((x101<<(x102/x103))^x104);

	if (t7 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x105 = INT16_MAX;
	int8_t x106 = INT8_MAX;
	uint32_t x107 = UINT32_MAX;
	volatile int32_t t8 = 318976;

	t8 = ((x105<<(x106/x107))^x108);

	if (t8 != 32743) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x121 = 98U;
	static uint16_t x122 = 262U;
	static volatile int64_t x123 = INT64_MIN;
	volatile int32_t x124 = -1;
	uint32_t t9 = 2U;

	t9 = ((x121<<(x122/x123))^x124);

	if (t9 != 4294967197U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x125 = UINT16_MAX;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = UINT32_MAX;
	uint8_t x128 = 22U;
	int32_t t10 = -5;

	t10 = ((x125<<(x126/x127))^x128);

	if (t10 != 65513) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x137 = 1;
	volatile int8_t x138 = INT8_MAX;
	int32_t x139 = 7131;
	int8_t x140 = INT8_MAX;
	volatile int32_t t11 = 43826363;

	t11 = ((x137<<(x138/x139))^x140);

	if (t11 != 126) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x141 = 1960815470LLU;
	static volatile int8_t x142 = 0;
	volatile uint16_t x144 = UINT16_MAX;
	uint64_t t12 = 448366LLU;

	t12 = ((x141<<(x142/x143))^x144);

	if (t12 != 1960793233LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x177 = INT16_MAX;
	uint8_t x178 = 43U;
	volatile int8_t x180 = INT8_MAX;
	volatile int32_t t13 = -30082;

	t13 = ((x177<<(x178/x179))^x180);

	if (t13 != 32640) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x193 = 97813847323944LL;
	int32_t x194 = 1;
	int16_t x196 = 14834;
	int64_t t14 = 1732909LL;

	t14 = ((x193<<(x194/x195))^x196);

	if (t14 != 97813847313626LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x202 = -5;
	static int32_t x203 = -34;
	int32_t t15 = -114;

	t15 = ((x201<<(x202/x203))^x204);

	if (t15 != 251) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x216 = -14254;
	static int32_t t16 = -5759;

	t16 = ((x213<<(x214/x215))^x216);

	if (t16 != -14279) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x221 = INT64_MAX;
	uint8_t x222 = UINT8_MAX;
	uint32_t x223 = UINT32_MAX;
	uint8_t x224 = 1U;
	int64_t t17 = 911LL;

	t17 = ((x221<<(x222/x223))^x224);

	if (t17 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x233 = INT8_MAX;
	uint64_t x235 = UINT64_MAX;
	volatile int64_t t18 = -111LL;

	t18 = ((x233<<(x234/x235))^x236);

	if (t18 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x237 = 278017;
	int16_t x238 = 176;
	int32_t x239 = -15766560;
	int64_t x240 = INT64_MAX;
	int64_t t19 = -445LL;

	t19 = ((x237<<(x238/x239))^x240);

	if (t19 != 9223372036854497790LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x259 = -1;
	volatile int16_t x260 = INT16_MIN;
	int32_t t20 = 1;

	t20 = ((x257<<(x258/x259))^x260);

	if (t20 != -98306) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x261 = INT16_MAX;
	static int64_t x263 = -1918537758144LL;
	volatile int8_t x264 = -4;
	volatile int32_t t21 = -2016;

	t21 = ((x261<<(x262/x263))^x264);

	if (t21 != -32765) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x282 = 40U;

	t22 = ((x281<<(x282/x283))^x284);

	if (t22 != 3914955236U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x311 = INT32_MAX;
	volatile int32_t t23 = 315;

	t23 = ((x309<<(x310/x311))^x312);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x321 = 6;
	static volatile int64_t x322 = -1LL;
	int32_t x323 = INT32_MAX;
	static int64_t x324 = -279259501326430LL;

	t24 = ((x321<<(x322/x323))^x324);

	if (t24 != -279259501326428LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x329 = 20U;
	static volatile int64_t x330 = -1LL;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MAX;
	static int32_t t25 = 183429967;

	t25 = ((x329<<(x330/x331))^x332);

	if (t25 != 32747) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = 9U;
	volatile int32_t t26 = 98037064;

	t26 = ((x341<<(x342/x343))^x344);

	if (t26 != 246) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x369 = 55;
	volatile int16_t x370 = INT16_MIN;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = 0;

	t27 = ((x369<<(x370/x371))^x372);

	if (t27 != 55) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x373 = UINT8_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t28 = 199797;

	t28 = ((x373<<(x374/x375))^x376);

	if (t28 != -2147483393) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x381 = 2737489U;
	volatile int32_t x382 = -1;
	uint16_t x383 = 171U;
	uint64_t x384 = 94244183073095784LLU;
	volatile uint64_t t29 = 6794966824610158623LLU;

	t29 = ((x381<<(x382/x383))^x384);

	if (t29 != 94244183070590265LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x414 = UINT32_MAX;
	volatile uint64_t x415 = UINT64_MAX;
	int16_t x416 = INT16_MIN;
	int32_t t30 = -89;

	t30 = ((x413<<(x414/x415))^x416);

	if (t30 != -32756) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x417 = INT64_MAX;
	uint8_t x418 = UINT8_MAX;
	static uint16_t x419 = 31911U;
	uint16_t x420 = 0U;
	volatile int64_t t31 = INT64_MAX;

	t31 = ((x417<<(x418/x419))^x420);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x426 = 14753089U;
	int32_t x427 = INT32_MIN;
	volatile uint32_t t32 = 26132U;

	t32 = ((x425<<(x426/x427))^x428);

	if (t32 != 4294967246U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x437 = 3U;
	volatile int8_t x438 = -1;
	static int32_t x440 = 10205618;
	static volatile int32_t t33 = -490463;

	t33 = ((x437<<(x438/x439))^x440);

	if (t33 != 10193330) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x447 = 883940804U;
	int64_t x448 = INT64_MAX;
	int64_t t34 = INT64_MAX;

	t34 = ((x445<<(x446/x447))^x448);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x453 = 14712U;
	int8_t x454 = INT8_MIN;
	volatile uint64_t x455 = UINT64_MAX;
	static int32_t x456 = -1;
	static uint32_t t35 = 181U;

	t35 = ((x453<<(x454/x455))^x456);

	if (t35 != 4294952583U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x457 = 60353946348900LLU;
	int8_t x460 = INT8_MIN;

	t36 = ((x457<<(x458/x459))^x460);

	if (t36 != 18446683719763202788LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x461 = 2U;
	int32_t x462 = INT32_MIN;
	static int64_t x463 = 742240125128395813LL;
	volatile int64_t x464 = -254482727462587862LL;
	static int64_t t37 = -4356687100677341LL;

	t37 = ((x461<<(x462/x463))^x464);

	if (t37 != -254482727462587864LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x465 = 23984640LLU;
	static uint32_t x466 = UINT32_MAX;
	uint64_t x467 = UINT64_MAX;
	int8_t x468 = -19;
	volatile uint64_t t38 = 4041375912LLU;

	t38 = ((x465<<(x466/x467))^x468);

	if (t38 != 18446744073685566957LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x470 = INT16_MIN;
	static uint32_t x471 = UINT32_MAX;
	uint32_t t39 = 5561931U;

	t39 = ((x469<<(x470/x471))^x472);

	if (t39 != 2252309U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x473 = 9833;
	static int8_t x475 = -1;
	int32_t t40 = 750372;

	t40 = ((x473<<(x474/x475))^x476);

	if (t40 != 22934) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x477 = 62U;
	int8_t x478 = -9;
	int16_t x479 = 35;
	volatile int8_t x480 = -1;
	static int32_t t41 = -12390;

	t41 = ((x477<<(x478/x479))^x480);

	if (t41 != -63) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x481 = 160069965;
	static int8_t x482 = -1;
	volatile int16_t x483 = -166;
	uint16_t x484 = UINT16_MAX;
	int32_t t42 = -2789;

	t42 = ((x481<<(x482/x483))^x484);

	if (t42 != 160073394) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x501 = 400062260467LL;
	int8_t x502 = INT8_MAX;
	int8_t x504 = INT8_MIN;
	static volatile int64_t t43 = -21031LL;

	t43 = ((x501<<(x502/x503))^x504);

	if (t43 != -800124520858LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x511 = -6;
	int16_t x512 = 3093;
	volatile int32_t t44 = 440;

	t44 = ((x509<<(x510/x511))^x512);

	if (t44 != 3125) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x533 = 252;
	static int8_t x534 = 0;
	int32_t x535 = INT32_MIN;
	uint32_t x536 = UINT32_MAX;

	t45 = ((x533<<(x534/x535))^x536);

	if (t45 != 4294967043U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x558 = -1LL;
	volatile uint32_t x559 = UINT32_MAX;
	int16_t x560 = INT16_MAX;
	volatile uint64_t t46 = 105419022340LLU;

	t46 = ((x557<<(x558/x559))^x560);

	if (t46 != 32759LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x561 = UINT64_MAX;
	volatile uint64_t x562 = 3138258309567149LLU;
	static int64_t x564 = 125883654LL;
	volatile uint64_t t47 = 1561168327535LLU;

	t47 = ((x561<<(x562/x563))^x564);

	if (t47 != 18446744073583667961LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x573 = 1;
	uint16_t x574 = 0U;
	int32_t x575 = 155;
	int64_t x576 = -1LL;
	int64_t t48 = 26624866LL;

	t48 = ((x573<<(x574/x575))^x576);

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x577 = UINT8_MAX;
	uint16_t x578 = 16U;
	static int64_t x580 = INT64_MIN;
	static volatile int64_t t49 = 92424173518542823LL;

	t49 = ((x577<<(x578/x579))^x580);

	if (t49 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x590 = 51U;
	uint32_t x591 = 81091694U;
	static int16_t x592 = -1016;

	t50 = ((x589<<(x590/x591))^x592);

	if (t50 != 4294882905U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x622 = 84U;
	volatile int32_t t51 = 117150313;

	t51 = ((x621<<(x622/x623))^x624);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x637 = 457594936U;
	int32_t x638 = 108117;
	volatile int8_t x640 = 0;
	static uint32_t t52 = 703166U;

	t52 = ((x637<<(x638/x639))^x640);

	if (t52 != 457594936U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x665 = 46U;
	uint32_t x666 = 957902U;
	int64_t x668 = INT64_MIN;
	int64_t t53 = -115180181684531181LL;

	t53 = ((x665<<(x666/x667))^x668);

	if (t53 != -9223372036854775762LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x677 = 8192428083LLU;
	static uint8_t x678 = UINT8_MAX;
	uint64_t x679 = 134716996770174LLU;
	int32_t x680 = INT32_MAX;
	uint64_t t54 = 65659185LLU;

	t54 = ((x677<<(x678/x679))^x680);

	if (t54 != 6839957452LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x690 = INT32_MIN;
	volatile int32_t t55 = 16066;

	t55 = ((x689<<(x690/x691))^x692);

	if (t55 != 2147000319) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x713 = 9U;
	int64_t x714 = -95885299LL;
	int32_t x715 = INT32_MIN;
	int16_t x716 = -1;
	volatile int32_t t56 = -1769;

	t56 = ((x713<<(x714/x715))^x716);

	if (t56 != -10) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x721 = 21U;
	static int32_t x722 = 1;
	static uint8_t x723 = 5U;
	int8_t x724 = -7;
	static int32_t t57 = 1713689;

	t57 = ((x721<<(x722/x723))^x724);

	if (t57 != -20) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x745 = 417U;
	static int64_t x746 = -1LL;
	int16_t x748 = INT16_MIN;
	volatile int32_t t58 = -2590255;

	t58 = ((x745<<(x746/x747))^x748);

	if (t58 != -32351) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x749 = UINT16_MAX;
	uint8_t x750 = UINT8_MAX;
	static int8_t x752 = -6;
	int32_t t59 = -503011486;

	t59 = ((x749<<(x750/x751))^x752);

	if (t59 != -65531) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x769 = 1149689501U;
	volatile int8_t x770 = 1;
	uint32_t x771 = UINT32_MAX;
	int16_t x772 = -640;

	t60 = ((x769<<(x770/x771))^x772);

	if (t60 != 3145278237U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x777 = 29;
	volatile int64_t x778 = -1LL;
	int32_t x779 = INT32_MIN;
	uint32_t x780 = 21U;

	t61 = ((x777<<(x778/x779))^x780);

	if (t61 != 8U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x789 = 516694U;
	int64_t x791 = -1LL;
	uint8_t x792 = 13U;
	volatile uint32_t t62 = 692U;

	t62 = ((x789<<(x790/x791))^x792);

	if (t62 != 3299606541U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x797 = 117415U;
	int32_t x798 = -1;
	static int32_t x799 = -413467;
	volatile int32_t x800 = -1;

	t63 = ((x797<<(x798/x799))^x800);

	if (t63 != 4294849880U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x802 = -1;
	volatile int32_t x803 = -29675;
	static uint32_t x804 = UINT32_MAX;
	static volatile uint32_t t64 = 9U;

	t64 = ((x801<<(x802/x803))^x804);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x817 = 2708U;
	static uint8_t x818 = 52U;
	static uint32_t x819 = UINT32_MAX;
	volatile int32_t x820 = INT32_MIN;

	t65 = ((x817<<(x818/x819))^x820);

	if (t65 != 2147486356U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x833 = 15U;
	uint8_t x834 = 4U;
	int64_t x835 = INT64_MAX;
	int8_t x836 = INT8_MAX;
	static volatile int32_t t66 = -1;

	t66 = ((x833<<(x834/x835))^x836);

	if (t66 != 112) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x849 = INT8_MAX;
	volatile int16_t x850 = INT16_MIN;
	uint16_t x851 = UINT16_MAX;
	int64_t x852 = -31026148LL;
	int64_t t67 = -496016306862LL;

	t67 = ((x849<<(x850/x851))^x852);

	if (t67 != -31026077LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x853 = INT32_MAX;
	static int8_t x854 = INT8_MIN;
	static volatile int64_t x855 = INT64_MAX;
	int8_t x856 = INT8_MIN;
	int32_t t68 = 1;

	t68 = ((x853<<(x854/x855))^x856);

	if (t68 != -2147483521) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x857 = 983953069783401444LL;
	static volatile int8_t x858 = -1;
	uint8_t x859 = 20U;
	volatile int32_t x860 = 6399109;
	static volatile int64_t t69 = 74062725LL;

	t69 = ((x857<<(x858/x859))^x860);

	if (t69 != 983953069789800289LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x870 = 1792U;
	uint64_t x871 = UINT64_MAX;
	uint32_t x872 = 1419U;
	volatile int64_t t70 = 21280LL;

	t70 = ((x869<<(x870/x871))^x872);

	if (t70 != 606496449442584LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x881 = 587U;
	int8_t x882 = INT8_MIN;
	int8_t x883 = INT8_MIN;
	volatile uint64_t x884 = 1683500770592273501LLU;
	static uint64_t t71 = 5280LLU;

	t71 = ((x881<<(x882/x883))^x884);

	if (t71 != 1683500770592272587LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x885 = UINT8_MAX;
	int64_t x886 = INT64_MIN;
	int64_t x887 = INT64_MIN;
	int16_t x888 = -1;
	volatile int32_t t72 = -6854280;

	t72 = ((x885<<(x886/x887))^x888);

	if (t72 != -511) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x890 = 1U;
	int8_t x892 = INT8_MAX;
	int32_t t73 = 0;

	t73 = ((x889<<(x890/x891))^x892);

	if (t73 != 65408) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x909 = INT32_MAX;
	volatile int64_t x910 = 4063785017496279LL;
	int64_t x911 = -895088813192094660LL;
	int16_t x912 = 594;
	volatile int32_t t74 = -1;

	t74 = ((x909<<(x910/x911))^x912);

	if (t74 != 2147483053) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x933 = 22;
	static int64_t x934 = 34LL;
	static int64_t x935 = INT64_MIN;
	volatile int64_t x936 = INT64_MAX;
	volatile int64_t t75 = -17243995887052LL;

	t75 = ((x933<<(x934/x935))^x936);

	if (t75 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x937 = 4226144227LL;
	uint64_t x938 = 473906249LLU;
	volatile int64_t t76 = 232354432583LL;

	t76 = ((x937<<(x938/x939))^x940);

	if (t76 != 4226099228LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x941 = UINT16_MAX;
	int8_t x942 = INT8_MIN;
	volatile int32_t t77 = 351814396;

	t77 = ((x941<<(x942/x943))^x944);

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x945 = 10725;
	static int16_t x946 = 0;
	volatile uint8_t x947 = UINT8_MAX;
	uint16_t x948 = 3024U;
	volatile int32_t t78 = 120;

	t78 = ((x945<<(x946/x947))^x948);

	if (t78 != 8757) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x949 = 484LLU;
	int32_t x950 = INT32_MAX;
	int64_t x951 = INT64_MIN;
	int16_t x952 = INT16_MIN;

	t79 = ((x949<<(x950/x951))^x952);

	if (t79 != 18446744073709519332LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x961 = UINT8_MAX;
	static volatile int16_t x962 = INT16_MAX;
	volatile int16_t x963 = INT16_MIN;
	uint16_t x964 = 1793U;
	volatile int32_t t80 = 88;

	t80 = ((x961<<(x962/x963))^x964);

	if (t80 != 2046) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x969 = INT8_MAX;
	int8_t x970 = INT8_MAX;
	int8_t x971 = INT8_MAX;
	int64_t t81 = -81268LL;

	t81 = ((x969<<(x970/x971))^x972);

	if (t81 != -255LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x974 = -1;
	volatile int64_t x975 = INT64_MIN;
	uint64_t t82 = 1LLU;

	t82 = ((x973<<(x974/x975))^x976);

	if (t82 != 939437LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x981 = 50U;
	int8_t x982 = INT8_MAX;
	int64_t x983 = INT64_MAX;
	int32_t x984 = 6029485;
	static int32_t t83 = -686;

	t83 = ((x981<<(x982/x983))^x984);

	if (t83 != 6029471) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x997 = UINT16_MAX;
	uint32_t x998 = UINT32_MAX;
	int64_t x999 = 2354689216460LL;
	int16_t x1000 = INT16_MIN;
	volatile int32_t t84 = -575040;

	t84 = ((x997<<(x998/x999))^x1000);

	if (t84 != -32769) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x1005 = 2U;
	volatile uint64_t x1006 = UINT64_MAX;
	int32_t x1007 = INT32_MIN;
	int64_t x1008 = 11595516773522LL;

	t85 = ((x1005<<(x1006/x1007))^x1008);

	if (t85 != 11595516773526LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1033 = INT32_MAX;
	int64_t x1034 = -433026829LL;
	int64_t x1035 = INT64_MIN;
	int8_t x1036 = -49;

	t86 = ((x1033<<(x1034/x1035))^x1036);

	if (t86 != -2147483600) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x1045 = 148;
	int16_t x1046 = INT16_MIN;
	int64_t x1047 = -102099200222LL;
	static int8_t x1048 = INT8_MAX;

	t87 = ((x1045<<(x1046/x1047))^x1048);

	if (t87 != 235) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1058 = UINT64_MAX;
	volatile int64_t x1059 = INT64_MIN;
	int32_t x1060 = INT32_MIN;

	t88 = ((x1057<<(x1058/x1059))^x1060);

	if (t88 != 2159518094U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x1069 = INT64_MAX;
	int8_t x1070 = 0;
	static int64_t x1071 = INT64_MAX;
	int64_t t89 = 4062739LL;

	t89 = ((x1069<<(x1070/x1071))^x1072);

	if (t89 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x1075 = UINT8_MAX;
	volatile int32_t t90 = 486672021;

	t90 = ((x1073<<(x1074/x1075))^x1076);

	if (t90 != -441040896) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1085 = INT16_MAX;
	volatile int16_t x1086 = INT16_MIN;
	int64_t x1087 = INT64_MIN;
	int16_t x1088 = INT16_MIN;
	int32_t t91 = -14890359;

	t91 = ((x1085<<(x1086/x1087))^x1088);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1094 = 55U;
	int32_t x1095 = INT32_MIN;
	uint64_t x1096 = UINT64_MAX;
	volatile uint64_t t92 = 84973942LLU;

	t92 = ((x1093<<(x1094/x1095))^x1096);

	if (t92 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x1097 = 8U;
	int64_t x1098 = -1LL;
	volatile int16_t x1099 = INT16_MIN;
	int64_t x1100 = INT64_MAX;
	volatile int64_t t93 = -34663006126889LL;

	t93 = ((x1097<<(x1098/x1099))^x1100);

	if (t93 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1102 = 11713217700501758LLU;
	static int32_t x1103 = INT32_MIN;
	volatile int8_t x1104 = -1;
	static volatile int32_t t94 = INT32_MIN;

	t94 = ((x1101<<(x1102/x1103))^x1104);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x1105 = 2U;
	int16_t x1106 = INT16_MAX;
	int32_t x1107 = INT32_MIN;
	int64_t x1108 = -1LL;
	static int64_t t95 = -7184256333LL;

	t95 = ((x1105<<(x1106/x1107))^x1108);

	if (t95 != -3LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1113 = UINT32_MAX;
	int16_t x1114 = -1;
	volatile int64_t x1115 = INT64_MAX;
	static int16_t x1116 = INT16_MAX;
	uint32_t t96 = 0U;

	t96 = ((x1113<<(x1114/x1115))^x1116);

	if (t96 != 4294934528U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x1125 = UINT8_MAX;
	int32_t x1126 = -1;
	int32_t x1127 = 2497;

	t97 = ((x1125<<(x1126/x1127))^x1128);

	if (t97 != 65280) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1129 = 0;
	uint8_t x1130 = 5U;
	volatile uint32_t x1131 = 6517508U;

	t98 = ((x1129<<(x1130/x1131))^x1132);

	if (t98 != 1138) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x1138 = INT32_MIN;
	volatile uint32_t x1139 = UINT32_MAX;
	int8_t x1140 = -5;
	volatile int32_t t99 = 8;

	t99 = ((x1137<<(x1138/x1139))^x1140);

	if (t99 != -11) { NG(); } else { ; }
	
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

