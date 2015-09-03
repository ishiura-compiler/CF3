#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = 1;
static uint32_t x14 = 1830U;
int8_t x15 = INT8_MIN;
uint32_t t1 = 54041222U;
int8_t x32 = INT8_MAX;
volatile uint64_t t3 = 2594000180067LLU;
volatile int64_t t4 = 831074404LL;
static volatile int32_t x60 = INT32_MAX;
uint64_t t7 = 15609174360844LLU;
uint8_t x76 = 13U;
int64_t t8 = -27397496703461LL;
int16_t x78 = -1;
static int32_t x85 = INT32_MIN;
static volatile uint64_t x88 = UINT64_MAX;
static int64_t x105 = 3682763LL;
volatile int64_t t12 = 126LL;
int64_t x109 = 3LL;
static uint16_t x124 = 3903U;
int16_t x129 = INT16_MIN;
static int64_t x131 = INT64_MAX;
int16_t x167 = -1;
uint8_t x177 = UINT8_MAX;
int32_t x185 = INT32_MAX;
uint64_t x190 = 34LLU;
int64_t x208 = -1LL;
uint16_t x214 = 21U;
uint32_t x226 = 3765U;
uint8_t x228 = UINT8_MAX;
volatile uint32_t t24 = 1700490174U;
int8_t x240 = -2;
static int32_t x268 = INT32_MIN;
static int64_t x280 = -1LL;
int32_t t27 = -6;
uint32_t x318 = 4988698U;
int8_t x328 = INT8_MIN;
int16_t x334 = -1;
static uint16_t x341 = 915U;
int32_t x344 = -1;
int8_t x354 = -16;
static uint64_t x383 = 31755106300949LLU;
static int8_t x385 = INT8_MAX;
int64_t x397 = 441708LL;
int32_t x400 = 130501;
int64_t t39 = 3423LL;
int64_t x425 = 1973845230713681LL;
int8_t x431 = INT8_MIN;
uint64_t x441 = 1250561485812311946LLU;
int64_t x443 = INT64_MAX;
int8_t x492 = INT8_MAX;
uint64_t t45 = 932LLU;
static volatile int64_t x518 = -221116241402771540LL;
int32_t t49 = 304;
static int32_t t51 = -997580;
volatile uint32_t t52 = 0U;
uint8_t x644 = UINT8_MAX;
static volatile int16_t x666 = INT16_MAX;
static int16_t x668 = -1;
int64_t t54 = -47085956LL;
static int32_t x685 = -1;
uint8_t x707 = 8U;
int32_t t58 = 239259583;
uint64_t x710 = 3286291011242080LLU;
volatile int8_t x712 = -39;
int16_t x723 = 0;
static int32_t x733 = -1;
int32_t x735 = INT32_MAX;
uint16_t x736 = 1U;
volatile uint16_t x754 = 10U;
uint16_t x759 = 5U;
int64_t x805 = -1LL;
uint16_t x839 = 2U;
int8_t x841 = 1;
int8_t x842 = -1;
uint64_t x845 = UINT64_MAX;
int8_t x847 = 1;
int8_t x849 = INT8_MAX;
uint16_t x868 = 128U;
int32_t x889 = INT32_MAX;
static uint32_t x890 = UINT32_MAX;
int8_t x931 = INT8_MIN;
volatile uint16_t x933 = 13805U;
int8_t x937 = INT8_MAX;
int16_t x943 = -506;
int8_t x1015 = INT8_MIN;
uint32_t x1021 = 16629085U;
static int32_t x1022 = INT32_MIN;
int32_t t93 = -12722;
int16_t x1033 = INT16_MAX;
int64_t t95 = 4924554919325508LL;
uint16_t x1065 = UINT16_MAX;
static uint16_t x1067 = 47U;
int64_t x1073 = 7469504856LL;
uint64_t x1074 = UINT64_MAX;
volatile int32_t x1103 = INT32_MIN;
int8_t x1107 = 1;


void f0(void) {
	volatile uint8_t x16 = 2U;
	static volatile uint32_t t0 = 4595995U;

	t0 = ((x13&x14)>>(x15%x16));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x17 = 56U;
	static int32_t x18 = -1;
	int64_t x19 = 142343LL;
	int8_t x20 = INT8_MIN;

	t1 = ((x17&x18)>>(x19%x20));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x25 = UINT16_MAX;
	volatile uint8_t x26 = 99U;
	static uint16_t x27 = UINT16_MAX;
	int16_t x28 = 13;
	int32_t t2 = 16497136;

	t2 = ((x25&x26)>>(x27%x28));

	if (t2 != 24) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = 4076388282LLU;
	volatile uint16_t x30 = 14434U;
	uint16_t x31 = 313U;

	t3 = ((x29&x30)>>(x31%x32));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x37 = INT64_MAX;
	static volatile int32_t x38 = INT32_MAX;
	static uint32_t x39 = 95570245U;
	volatile uint8_t x40 = 1U;

	t4 = ((x37&x38)>>(x39%x40));

	if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x49 = 25129U;
	int16_t x50 = 0;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t5 = -1;

	t5 = ((x49&x50)>>(x51%x52));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x57 = INT8_MIN;
	uint32_t x58 = 8911033U;
	volatile int64_t x59 = INT64_MAX;
	volatile uint32_t t6 = 1004163846U;

	t6 = ((x57&x58)>>(x59%x60));

	if (t6 != 4455488U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x61 = 11557074990386LLU;
	int8_t x62 = INT8_MIN;
	int32_t x63 = 260358926;
	int8_t x64 = -1;

	t7 = ((x61&x62)>>(x63%x64));

	if (t7 != 11557074990336LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x73 = 1;
	int64_t x74 = -1LL;
	volatile uint16_t x75 = 1U;

	t8 = ((x73&x74)>>(x75%x76));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x77 = 2;
	static volatile int16_t x79 = 23;
	static volatile int64_t x80 = 3884289LL;
	volatile int32_t t9 = 6;

	t9 = ((x77&x78)>>(x79%x80));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x86 = 250393LLU;
	static int8_t x87 = -1;
	uint64_t t10 = 8545173LLU;

	t10 = ((x85&x86)>>(x87%x88));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x101 = 18U;
	int32_t x102 = INT32_MAX;
	uint32_t x103 = 6U;
	uint16_t x104 = 1942U;
	volatile int32_t t11 = -9894455;

	t11 = ((x101&x102)>>(x103%x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = -1;
	uint32_t x108 = UINT32_MAX;

	t12 = ((x105&x106)>>(x107%x108));

	if (t12 != 3682763LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x110 = 1838U;
	int32_t x111 = 17731236;
	uint8_t x112 = 20U;
	volatile int64_t t13 = -2LL;

	t13 = ((x109&x110)>>(x111%x112));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x113 = INT16_MIN;
	volatile uint16_t x114 = 428U;
	int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;
	volatile int32_t t14 = -1;

	t14 = ((x113&x114)>>(x115%x116));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x121 = -1;
	uint64_t x122 = 77325650290163276LLU;
	int16_t x123 = 2;
	uint64_t t15 = 24845388247LLU;

	t15 = ((x121&x122)>>(x123%x124));

	if (t15 != 19331412572540819LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x130 = 5495317676306LL;
	volatile uint8_t x132 = 20U;
	int64_t t16 = 8671816504780564LL;

	t16 = ((x129&x130)>>(x131%x132));

	if (t16 != 42932169216LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x161 = -1;
	static uint64_t x162 = 54355133702945045LLU;
	volatile uint32_t x163 = 3U;
	int32_t x164 = -1;
	uint64_t t17 = 25LLU;

	t17 = ((x161&x162)>>(x163%x164));

	if (t17 != 6794391712868130LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x165 = 2352U;
	volatile int64_t x166 = INT64_MIN;
	uint64_t x168 = UINT64_MAX;
	int64_t t18 = 1815192584865LL;

	t18 = ((x165&x166)>>(x167%x168));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x178 = INT64_MIN;
	int16_t x179 = -1;
	uint32_t x180 = 12U;
	volatile int64_t t19 = -964289926316LL;

	t19 = ((x177&x178)>>(x179%x180));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x186 = INT16_MAX;
	uint8_t x187 = 26U;
	int8_t x188 = 1;
	int32_t t20 = -1;

	t20 = ((x185&x186)>>(x187%x188));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x189 = INT32_MIN;
	static int8_t x191 = 1;
	uint32_t x192 = 56423U;
	static volatile uint64_t t21 = 12793137LLU;

	t21 = ((x189&x190)>>(x191%x192));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x205 = -1;
	static uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = -61;
	static uint32_t t22 = UINT32_MAX;

	t22 = ((x205&x206)>>(x207%x208));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x213 = 846155902U;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = -1LL;
	volatile uint32_t t23 = 249603U;

	t23 = ((x213&x214)>>(x215%x216));

	if (t23 != 20U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x225 = INT32_MAX;
	uint16_t x227 = UINT16_MAX;

	t24 = ((x225&x226)>>(x227%x228));

	if (t24 != 3765U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x237 = -7;
	volatile int8_t x238 = 1;
	volatile uint8_t x239 = 0U;
	int32_t t25 = -15823031;

	t25 = ((x237&x238)>>(x239%x240));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x265 = 3531;
	int32_t x266 = -1;
	int16_t x267 = 21;
	int32_t t26 = 18589;

	t26 = ((x265&x266)>>(x267%x268));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x277 = 14U;
	static int16_t x278 = -1;
	uint64_t x279 = UINT64_MAX;

	t27 = ((x277&x278)>>(x279%x280));

	if (t27 != 14) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x317 = INT8_MIN;
	int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MIN;
	volatile uint32_t t28 = 150207928U;

	t28 = ((x317&x318)>>(x319%x320));

	if (t28 != 4988672U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x325 = -1;
	static volatile int64_t x326 = INT64_MAX;
	static uint8_t x327 = 2U;
	volatile int64_t t29 = 692814246133924392LL;

	t29 = ((x325&x326)>>(x327%x328));

	if (t29 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x333 = 3729521U;
	int8_t x335 = INT8_MIN;
	static int8_t x336 = INT8_MIN;
	uint32_t t30 = 552U;

	t30 = ((x333&x334)>>(x335%x336));

	if (t30 != 3729521U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = INT64_MIN;
	volatile uint32_t t31 = 37144U;

	t31 = ((x341&x342)>>(x343%x344));

	if (t31 != 915U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x349 = 1;
	int16_t x350 = INT16_MIN;
	int64_t x351 = 26018521206423575LL;
	int8_t x352 = 6;
	int32_t t32 = 164049867;

	t32 = ((x349&x350)>>(x351%x352));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x353 = 2511383038LL;
	volatile int8_t x355 = -1;
	int64_t x356 = -1LL;
	static volatile int64_t t33 = 3007559147962LL;

	t33 = ((x353&x354)>>(x355%x356));

	if (t33 != 2511383024LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x357 = 1661611U;
	uint8_t x358 = UINT8_MAX;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = -2;
	uint32_t t34 = 15126680U;

	t34 = ((x357&x358)>>(x359%x360));

	if (t34 != 85U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MIN;
	uint8_t x384 = 9U;
	int32_t t35 = 95;

	t35 = ((x381&x382)>>(x383%x384));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x386 = 4728177631877LLU;
	volatile int32_t x387 = 11;
	volatile int32_t x388 = INT32_MIN;
	uint64_t t36 = 7487250251596278681LLU;

	t36 = ((x385&x386)>>(x387%x388));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x398 = 0U;
	uint8_t x399 = 3U;
	volatile int64_t t37 = -338512282598292511LL;

	t37 = ((x397&x398)>>(x399%x400));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x405 = 7U;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = INT16_MIN;
	int8_t x408 = -1;
	uint64_t t38 = 31LLU;

	t38 = ((x405&x406)>>(x407%x408));

	if (t38 != 7LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x413 = -1;
	int64_t x414 = 63LL;
	volatile int32_t x415 = INT32_MIN;
	int32_t x416 = INT32_MIN;

	t39 = ((x413&x414)>>(x415%x416));

	if (t39 != 63LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x426 = INT64_MAX;
	int16_t x427 = 11990;
	uint8_t x428 = 37U;
	static volatile int64_t t40 = 9546119LL;

	t40 = ((x425&x426)>>(x427%x428));

	if (t40 != 493461307678420LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x429 = INT32_MAX;
	volatile uint8_t x430 = 3U;
	volatile int8_t x432 = 1;
	volatile int32_t t41 = -217;

	t41 = ((x429&x430)>>(x431%x432));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x442 = -1924563;
	volatile uint64_t x444 = 7LLU;
	static uint64_t t42 = 667486447221LLU;

	t42 = ((x441&x442)>>(x443%x444));

	if (t42 != 1250561485812310536LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x453 = 9U;
	volatile int16_t x454 = 1058;
	uint32_t x455 = 1U;
	int8_t x456 = INT8_MIN;
	volatile int32_t t43 = 200;

	t43 = ((x453&x454)>>(x455%x456));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x461 = 1175U;
	int16_t x462 = INT16_MAX;
	static uint64_t x463 = UINT64_MAX;
	volatile int8_t x464 = INT8_MAX;
	volatile int32_t t44 = 1907;

	t44 = ((x461&x462)>>(x463%x464));

	if (t44 != 587) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x489 = 31257180622429521LLU;
	volatile uint64_t x490 = UINT64_MAX;
	int32_t x491 = INT32_MAX;

	t45 = ((x489&x490)>>(x491%x492));

	if (t45 != 244196723612730LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x517 = INT64_MAX;
	uint8_t x519 = 2U;
	int32_t x520 = INT32_MIN;
	static int64_t t46 = 46396LL;

	t46 = ((x517&x518)>>(x519%x520));

	if (t46 != 2250563948863001067LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x521 = INT64_MAX;
	volatile uint8_t x522 = 6U;
	int8_t x523 = INT8_MIN;
	int16_t x524 = -1;
	int64_t t47 = -42751284793430990LL;

	t47 = ((x521&x522)>>(x523%x524));

	if (t47 != 6LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x525 = -1;
	uint32_t x526 = 14803819U;
	uint64_t x527 = 1008LLU;
	int8_t x528 = 10;
	uint32_t t48 = 585U;

	t48 = ((x525&x526)>>(x527%x528));

	if (t48 != 57827U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x569 = INT8_MIN;
	volatile int16_t x570 = INT16_MAX;
	int64_t x571 = -1LL;
	volatile int64_t x572 = -1LL;

	t49 = ((x569&x570)>>(x571%x572));

	if (t49 != 32640) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x601 = -1;
	uint16_t x602 = 7412U;
	int8_t x603 = 0;
	int32_t x604 = INT32_MIN;
	volatile int32_t t50 = -23275;

	t50 = ((x601&x602)>>(x603%x604));

	if (t50 != 7412) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x625 = UINT8_MAX;
	int16_t x626 = 2966;
	static volatile int16_t x627 = 3;
	int16_t x628 = INT16_MIN;

	t51 = ((x625&x626)>>(x627%x628));

	if (t51 != 18) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x629 = INT16_MIN;
	uint32_t x630 = UINT32_MAX;
	int8_t x631 = 25;
	uint16_t x632 = 7621U;

	t52 = ((x629&x630)>>(x631%x632));

	if (t52 != 127U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x641 = INT32_MIN;
	int64_t x642 = 53LL;
	uint16_t x643 = 1U;
	volatile int64_t t53 = 8869135107367002LL;

	t53 = ((x641&x642)>>(x643%x644));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x665 = -587612787701641136LL;
	int32_t x667 = INT32_MAX;

	t54 = ((x665&x666)>>(x667%x668));

	if (t54 != 4176LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x686 = 2U;
	uint32_t x687 = UINT32_MAX;
	volatile int64_t x688 = -1LL;
	volatile int32_t t55 = 74;

	t55 = ((x685&x686)>>(x687%x688));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x697 = 1718766750U;
	volatile int8_t x698 = 1;
	uint32_t x699 = UINT32_MAX;
	int16_t x700 = -1;
	volatile uint32_t t56 = 1U;

	t56 = ((x697&x698)>>(x699%x700));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x701 = INT32_MIN;
	uint16_t x702 = 0U;
	volatile int64_t x703 = 7LL;
	volatile int64_t x704 = INT64_MIN;
	int32_t t57 = 62;

	t57 = ((x701&x702)>>(x703%x704));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x705 = INT32_MIN;
	int8_t x706 = 10;
	volatile uint32_t x708 = UINT32_MAX;

	t58 = ((x705&x706)>>(x707%x708));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x709 = INT8_MIN;
	uint8_t x711 = UINT8_MAX;
	uint64_t t59 = 142120329104231LLU;

	t59 = ((x709&x710)>>(x711%x712));

	if (t59 != 1567025666LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x717 = UINT64_MAX;
	uint8_t x718 = 21U;
	uint32_t x719 = 0U;
	static int32_t x720 = 800;
	volatile uint64_t t60 = 1575LLU;

	t60 = ((x717&x718)>>(x719%x720));

	if (t60 != 21LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x721 = -1;
	volatile int16_t x722 = INT16_MAX;
	int8_t x724 = -1;
	volatile int32_t t61 = -1;

	t61 = ((x721&x722)>>(x723%x724));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x725 = 1062102446923552243LLU;
	volatile int64_t x726 = INT64_MIN;
	int32_t x727 = INT32_MIN;
	int8_t x728 = INT8_MIN;
	volatile uint64_t t62 = 20303LLU;

	t62 = ((x725&x726)>>(x727%x728));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x734 = INT8_MAX;
	volatile int32_t t63 = 3074;

	t63 = ((x733&x734)>>(x735%x736));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x753 = INT64_MIN;
	int16_t x755 = 1;
	static volatile int16_t x756 = -9;
	volatile int64_t t64 = 217357289124304LL;

	t64 = ((x753&x754)>>(x755%x756));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x757 = 3U;
	volatile uint16_t x758 = 99U;
	volatile int32_t x760 = INT32_MIN;
	int32_t t65 = 70774;

	t65 = ((x757&x758)>>(x759%x760));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x761 = 13;
	int64_t x762 = INT64_MIN;
	int8_t x763 = INT8_MIN;
	int64_t x764 = -1LL;
	int64_t t66 = 183LL;

	t66 = ((x761&x762)>>(x763%x764));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x765 = 7;
	int8_t x766 = -1;
	int8_t x767 = INT8_MIN;
	int8_t x768 = INT8_MIN;
	int32_t t67 = -27391;

	t67 = ((x765&x766)>>(x767%x768));

	if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x777 = 51U;
	uint16_t x778 = 5U;
	volatile int64_t x779 = INT64_MIN;
	static int64_t x780 = INT64_MIN;
	int32_t t68 = -31525788;

	t68 = ((x777&x778)>>(x779%x780));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x793 = 496U;
	static int16_t x794 = 583;
	int16_t x795 = 1567;
	static int16_t x796 = -1;
	int32_t t69 = -4739;

	t69 = ((x793&x794)>>(x795%x796));

	if (t69 != 64) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x801 = 3591037620189479750LL;
	uint16_t x802 = 87U;
	uint8_t x803 = 10U;
	uint64_t x804 = UINT64_MAX;
	int64_t t70 = -1299043444722LL;

	t70 = ((x801&x802)>>(x803%x804));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x806 = 209LL;
	int64_t x807 = -9LL;
	static volatile int16_t x808 = -1;
	int64_t t71 = -14346476020777LL;

	t71 = ((x805&x806)>>(x807%x808));

	if (t71 != 209LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x817 = INT16_MAX;
	static int16_t x818 = -14877;
	int8_t x819 = INT8_MIN;
	uint8_t x820 = 1U;
	int32_t t72 = 0;

	t72 = ((x817&x818)>>(x819%x820));

	if (t72 != 17891) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x829 = INT64_MIN;
	volatile uint8_t x830 = UINT8_MAX;
	int32_t x831 = INT32_MIN;
	int64_t x832 = -1LL;
	int64_t t73 = 144990141LL;

	t73 = ((x829&x830)>>(x831%x832));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x837 = INT32_MAX;
	static int8_t x838 = -1;
	volatile int64_t x840 = INT64_MIN;
	int32_t t74 = 982;

	t74 = ((x837&x838)>>(x839%x840));

	if (t74 != 536870911) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x843 = 1U;
	int16_t x844 = -1;
	volatile int32_t t75 = 2958208;

	t75 = ((x841&x842)>>(x843%x844));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x846 = 24594032429293136LL;
	int16_t x848 = INT16_MIN;
	uint64_t t76 = 193330225307952717LLU;

	t76 = ((x845&x846)>>(x847%x848));

	if (t76 != 12297016214646568LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x850 = 3154U;
	uint8_t x851 = 0U;
	int64_t x852 = INT64_MAX;
	static int32_t t77 = -1663;

	t77 = ((x849&x850)>>(x851%x852));

	if (t77 != 82) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x861 = INT8_MAX;
	static int32_t x862 = 19535208;
	static int16_t x863 = INT16_MAX;
	static int8_t x864 = INT8_MAX;
	int32_t t78 = -167;

	t78 = ((x861&x862)>>(x863%x864));

	if (t78 != 52) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x865 = INT16_MIN;
	uint16_t x866 = 19634U;
	static int8_t x867 = 1;
	int32_t t79 = -9;

	t79 = ((x865&x866)>>(x867%x868));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x881 = 7585291U;
	uint64_t x882 = 101489037LLU;
	static int32_t x883 = INT32_MIN;
	uint32_t x884 = 13U;
	static uint64_t t80 = 6609848351670982LLU;

	t80 = ((x881&x882)>>(x883%x884));

	if (t80 != 19LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x891 = 5U;
	volatile int32_t x892 = INT32_MAX;
	uint32_t t81 = 652345U;

	t81 = ((x889&x890)>>(x891%x892));

	if (t81 != 67108863U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x897 = INT8_MAX;
	volatile uint8_t x898 = 3U;
	int64_t x899 = INT64_MAX;
	static volatile int8_t x900 = 11;
	volatile int32_t t82 = 2095826;

	t82 = ((x897&x898)>>(x899%x900));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x909 = 767LLU;
	int64_t x910 = -2225763013495313LL;
	uint32_t x911 = UINT32_MAX;
	int8_t x912 = -60;
	uint64_t t83 = 49247333893348207LLU;

	t83 = ((x909&x910)>>(x911%x912));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x929 = -1;
	int16_t x930 = 7;
	int8_t x932 = INT8_MIN;
	volatile int32_t t84 = 264931113;

	t84 = ((x929&x930)>>(x931%x932));

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x934 = 7U;
	int8_t x935 = 16;
	uint16_t x936 = UINT16_MAX;
	volatile int32_t t85 = -3104814;

	t85 = ((x933&x934)>>(x935%x936));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x938 = 13U;
	int32_t x939 = INT32_MIN;
	static int32_t x940 = INT32_MIN;
	static int32_t t86 = 1;

	t86 = ((x937&x938)>>(x939%x940));

	if (t86 != 13) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x941 = 87119533498LL;
	int8_t x942 = 1;
	int16_t x944 = -1;
	int64_t t87 = 150LL;

	t87 = ((x941&x942)>>(x943%x944));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x961 = UINT32_MAX;
	static int8_t x962 = INT8_MIN;
	static uint8_t x963 = 1U;
	uint16_t x964 = 4U;
	uint32_t t88 = 4U;

	t88 = ((x961&x962)>>(x963%x964));

	if (t88 != 2147483584U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x981 = 18;
	int32_t x982 = 714;
	static int64_t x983 = -1LL;
	int16_t x984 = 1;
	volatile int32_t t89 = 992117354;

	t89 = ((x981&x982)>>(x983%x984));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x993 = INT8_MIN;
	int16_t x994 = 411;
	uint8_t x995 = UINT8_MAX;
	int8_t x996 = 1;
	int32_t t90 = 1257753;

	t90 = ((x993&x994)>>(x995%x996));

	if (t90 != 384) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x1013 = 100U;
	int8_t x1014 = -1;
	volatile int8_t x1016 = INT8_MIN;
	volatile int32_t t91 = 3319;

	t91 = ((x1013&x1014)>>(x1015%x1016));

	if (t91 != 100) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x1023 = INT16_MAX;
	volatile uint8_t x1024 = 18U;
	uint32_t t92 = 25071428U;

	t92 = ((x1021&x1022)>>(x1023%x1024));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1025 = INT8_MAX;
	volatile uint8_t x1026 = 1U;
	int8_t x1027 = 16;
	int16_t x1028 = -1;

	t93 = ((x1025&x1026)>>(x1027%x1028));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1034 = -2;
	uint32_t x1035 = 90U;
	uint32_t x1036 = 2U;
	int32_t t94 = 2;

	t94 = ((x1033&x1034)>>(x1035%x1036));

	if (t94 != 32766) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1061 = 81U;
	int64_t x1062 = INT64_MAX;
	int32_t x1063 = INT32_MIN;
	uint32_t x1064 = 16U;

	t95 = ((x1061&x1062)>>(x1063%x1064));

	if (t95 != 81LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1066 = INT64_MAX;
	int8_t x1068 = -13;
	int64_t t96 = -198606724LL;

	t96 = ((x1065&x1066)>>(x1067%x1068));

	if (t96 != 255LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x1075 = -1525;
	static int32_t x1076 = -1;
	uint64_t t97 = 6LLU;

	t97 = ((x1073&x1074)>>(x1075%x1076));

	if (t97 != 7469504856LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1101 = 30U;
	volatile int32_t x1102 = 986789614;
	int8_t x1104 = INT8_MIN;
	volatile int32_t t98 = 204;

	t98 = ((x1101&x1102)>>(x1103%x1104));

	if (t98 != 14) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1105 = INT8_MIN;
	int8_t x1106 = 0;
	int32_t x1108 = -1;
	volatile int32_t t99 = 120579;

	t99 = ((x1105&x1106)>>(x1107%x1108));

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

