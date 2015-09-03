#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x35 = -14395144LL;
uint16_t x76 = 14U;
static uint64_t x77 = 368103428099625LLU;
int64_t x78 = -46LL;
uint64_t t3 = 1644987980648929LLU;
int32_t x84 = INT32_MIN;
int16_t x87 = -1860;
int32_t x105 = -1;
uint64_t x117 = UINT64_MAX;
static int16_t x119 = -1;
int8_t x130 = INT8_MAX;
int64_t x134 = -1344142810LL;
uint8_t x184 = 21U;
int64_t x200 = -1LL;
static int32_t x209 = -9167768;
static uint8_t x210 = 41U;
int64_t x212 = INT64_MIN;
int64_t x267 = 27298634848863LL;
int32_t t23 = -72073056;
volatile int32_t t25 = INT32_MAX;
int8_t x300 = 5;
static int32_t x311 = 15348692;
int16_t x326 = INT16_MIN;
volatile uint8_t x327 = 0U;
uint32_t t29 = UINT32_MAX;
int8_t x350 = INT8_MIN;
static int8_t x351 = INT8_MAX;
int32_t x362 = -520491;
uint8_t x363 = 56U;
int32_t x364 = 3033;
uint32_t t34 = 26765U;
int32_t x371 = INT32_MAX;
volatile int8_t x372 = INT8_MIN;
int32_t t35 = -551075;
int16_t x403 = INT16_MIN;
volatile uint64_t x425 = 146LLU;
int64_t x426 = 8LL;
static int32_t t40 = -707566;
volatile int16_t x441 = INT16_MIN;
static volatile uint8_t x450 = UINT8_MAX;
static int8_t x454 = INT8_MAX;
uint64_t x475 = UINT64_MAX;
volatile int32_t t45 = -475664;
static uint64_t t46 = UINT64_MAX;
static uint32_t x485 = 1U;
int16_t x486 = INT16_MIN;
int32_t x487 = 164;
volatile int16_t x498 = INT16_MIN;
static int16_t x500 = INT16_MIN;
int64_t x512 = 0LL;
uint64_t x515 = 2101606759298400644LLU;
int64_t t53 = INT64_MAX;
int16_t x530 = INT16_MIN;
int8_t x538 = 13;
int16_t x550 = 0;
int16_t x552 = -1;
volatile uint32_t t58 = 5U;
int16_t x558 = INT16_MIN;
int32_t x565 = INT32_MIN;
int32_t t62 = -6373247;
static int32_t t63 = 387847;
int32_t x607 = INT32_MAX;
static int64_t x638 = INT64_MIN;
static volatile int32_t t69 = 18;
volatile int32_t t71 = INT32_MIN;
uint64_t x696 = 10851LLU;
uint64_t t72 = 390363LLU;
volatile int32_t t74 = -16097921;
int32_t x723 = -1;
volatile int64_t t76 = -65196LL;
int16_t x737 = 0;
static int64_t x759 = INT64_MAX;
int32_t x760 = INT32_MIN;
uint32_t x765 = 31U;
int8_t x766 = -1;
int8_t x773 = INT8_MAX;
int32_t x775 = INT32_MAX;
int8_t x778 = INT8_MIN;
int16_t x779 = -1;
static int16_t x782 = INT16_MIN;
volatile int32_t t82 = -3143;
volatile int64_t t83 = 32633134110236LL;
int8_t x793 = INT8_MAX;
int32_t x794 = INT32_MIN;
volatile int64_t x819 = INT64_MAX;
int64_t x826 = -48930649LL;
uint16_t x827 = 672U;
int64_t x828 = INT64_MAX;
uint64_t x831 = 185LLU;
static volatile int64_t t91 = 813LL;
int8_t x859 = INT8_MAX;
int32_t x867 = INT32_MAX;
uint8_t x868 = 7U;
int64_t x869 = -1LL;
uint32_t x879 = UINT32_MAX;
int8_t x880 = INT8_MIN;
uint32_t t96 = 2784U;
int64_t x888 = INT64_MIN;
static volatile int64_t x894 = 472LL;
int64_t x896 = -1LL;
volatile uint64_t t99 = 261618724669784LLU;


void f0(void) {
	int32_t x9 = INT32_MIN;
	static int16_t x10 = -1;
	uint8_t x11 = 24U;
	static int64_t x12 = INT64_MIN;
	static volatile int64_t t0 = INT64_MIN;

	t0 = ((x9%(x10<x11))+x12);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x33 = INT64_MIN;
	static int32_t x34 = INT32_MIN;
	int16_t x36 = INT16_MIN;
	static int64_t t1 = 900940359221054LL;

	t1 = ((x33%(x34<x35))+x36);

	if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MAX;
	volatile int32_t t2 = -61146;

	t2 = ((x73%(x74<x75))+x76);

	if (t2 != 14) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x79 = 47U;
	uint32_t x80 = UINT32_MAX;

	t3 = ((x77%(x78<x79))+x80);

	if (t3 != 4294967295LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	uint64_t x83 = UINT64_MAX;
	int64_t t4 = 5LL;

	t4 = ((x81%(x82<x83))+x84);

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	static uint64_t x88 = 495521993LLU;
	volatile uint64_t t5 = 50831LLU;

	t5 = ((x85%(x86<x87))+x88);

	if (t5 != 495521993LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x89 = 439;
	int32_t x90 = -6692964;
	static volatile uint16_t x91 = 205U;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t6 = -66621438;

	t6 = ((x89%(x90<x91))+x92);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x93 = 78U;
	static int8_t x94 = 6;
	static volatile int8_t x95 = INT8_MAX;
	int64_t x96 = -1LL;
	volatile int64_t t7 = 253903LL;

	t7 = ((x93%(x94<x95))+x96);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x101 = INT64_MAX;
	int64_t x102 = INT64_MIN;
	static int64_t x103 = 14205045780LL;
	volatile uint16_t x104 = 1081U;
	int64_t t8 = 76867LL;

	t8 = ((x101%(x102<x103))+x104);

	if (t8 != 1081LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x106 = 788307327931543737LLU;
	volatile int32_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x105%(x106<x107))+x108);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x113 = INT32_MIN;
	int64_t x114 = -24412241967477746LL;
	volatile int8_t x115 = INT8_MIN;
	uint8_t x116 = 23U;
	static int32_t t10 = -65;

	t10 = ((x113%(x114<x115))+x116);

	if (t10 != 23) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x118 = 400U;
	int8_t x120 = INT8_MAX;
	static uint64_t t11 = 511131090004540LLU;

	t11 = ((x117%(x118<x119))+x120);

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x129 = 1U;
	uint32_t x131 = UINT32_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t12 = -259577923;

	t12 = ((x129%(x130<x131))+x132);

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x133 = -1;
	uint16_t x135 = 110U;
	int16_t x136 = -273;
	static volatile int32_t t13 = 3791368;

	t13 = ((x133%(x134<x135))+x136);

	if (t13 != -273) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x137 = INT16_MAX;
	int64_t x138 = -1LL;
	uint16_t x139 = UINT16_MAX;
	static int64_t x140 = -175271237487209LL;
	int64_t t14 = 7786089776572567LL;

	t14 = ((x137%(x138<x139))+x140);

	if (t14 != -175271237487209LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x145 = 8U;
	uint64_t x146 = 1500021871268736056LLU;
	int16_t x147 = -6613;
	int16_t x148 = INT16_MIN;
	static int32_t t15 = -3285467;

	t15 = ((x145%(x146<x147))+x148);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x157 = -41901LL;
	volatile uint32_t x158 = 83175U;
	volatile int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MAX;
	static int64_t t16 = -864137797936076057LL;

	t16 = ((x157%(x158<x159))+x160);

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x177 = -1;
	int16_t x178 = 1;
	int64_t x179 = INT64_MAX;
	int16_t x180 = 0;
	int32_t t17 = 0;

	t17 = ((x177%(x178<x179))+x180);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x181 = 21010522041LLU;
	int64_t x182 = INT64_MIN;
	volatile int64_t x183 = -1LL;
	uint64_t t18 = 8740603139062266LLU;

	t18 = ((x181%(x182<x183))+x184);

	if (t18 != 21LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x189 = 1643LLU;
	uint32_t x190 = 3963258U;
	uint32_t x191 = UINT32_MAX;
	int8_t x192 = -1;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x189%(x190<x191))+x192);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x197 = 2424U;
	static int32_t x198 = INT32_MIN;
	int64_t x199 = 21148959438401576LL;
	static int64_t t20 = 5896883178880327LL;

	t20 = ((x197%(x198<x199))+x200);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x211 = 6520099284004LL;
	int64_t t21 = INT64_MIN;

	t21 = ((x209%(x210<x211))+x212);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x265 = 0;
	int16_t x266 = INT16_MAX;
	volatile int64_t x268 = -1832846416222497LL;
	int64_t t22 = -87LL;

	t22 = ((x265%(x266<x267))+x268);

	if (t22 != -1832846416222497LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	volatile int64_t x271 = INT64_MAX;
	static int8_t x272 = 3;

	t23 = ((x269%(x270<x271))+x272);

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x281 = -40;
	int16_t x282 = INT16_MIN;
	volatile int8_t x283 = -12;
	volatile uint64_t x284 = 625917499174370LLU;
	volatile uint64_t t24 = 32LLU;

	t24 = ((x281%(x282<x283))+x284);

	if (t24 != 625917499174370LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = -1LL;
	volatile int32_t x287 = INT32_MAX;
	volatile int32_t x288 = INT32_MAX;

	t25 = ((x285%(x286<x287))+x288);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x297 = -1;
	int64_t x298 = INT64_MIN;
	static uint64_t x299 = UINT64_MAX;
	int32_t t26 = -251320823;

	t26 = ((x297%(x298<x299))+x300);

	if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x309 = UINT32_MAX;
	uint16_t x310 = 146U;
	uint16_t x312 = 257U;
	static uint32_t t27 = 56714U;

	t27 = ((x309%(x310<x311))+x312);

	if (t27 != 257U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x325 = -30LL;
	int16_t x328 = INT16_MIN;
	static int64_t t28 = 56619559LL;

	t28 = ((x325%(x326<x327))+x328);

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MIN;
	int64_t x331 = -1LL;
	uint32_t x332 = UINT32_MAX;

	t29 = ((x329%(x330<x331))+x332);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x341 = INT8_MIN;
	uint8_t x342 = 8U;
	uint16_t x343 = 11U;
	int16_t x344 = -1;
	int32_t t30 = -3235439;

	t30 = ((x341%(x342<x343))+x344);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int64_t x346 = -1LL;
	uint8_t x347 = UINT8_MAX;
	volatile uint8_t x348 = 33U;
	volatile uint64_t t31 = 103312953LLU;

	t31 = ((x345%(x346<x347))+x348);

	if (t31 != 33LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x352 = 3U;
	volatile int32_t t32 = 50104;

	t32 = ((x349%(x350<x351))+x352);

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x361 = INT8_MIN;
	volatile int32_t t33 = 90929837;

	t33 = ((x361%(x362<x363))+x364);

	if (t33 != 3033) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x365 = 245U;
	volatile int64_t x366 = INT64_MIN;
	static int16_t x367 = 5;
	uint32_t x368 = 7562U;

	t34 = ((x365%(x366<x367))+x368);

	if (t34 != 7562U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x369 = INT16_MAX;
	int32_t x370 = INT32_MIN;

	t35 = ((x369%(x370<x371))+x372);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int32_t x402 = INT32_MIN;
	int8_t x404 = INT8_MAX;
	volatile uint64_t t36 = 13560522704851LLU;

	t36 = ((x401%(x402<x403))+x404);

	if (t36 != 127LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x417 = 877U;
	int16_t x418 = -1;
	uint8_t x419 = UINT8_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t37 = INT32_MIN;

	t37 = ((x417%(x418<x419))+x420);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x427 = 5055046U;
	volatile int64_t x428 = INT64_MIN;
	volatile uint64_t t38 = 1LLU;

	t38 = ((x425%(x426<x427))+x428);

	if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x433 = INT64_MIN;
	int64_t x434 = -11LL;
	uint32_t x435 = 5U;
	volatile int8_t x436 = INT8_MAX;
	int64_t t39 = 0LL;

	t39 = ((x433%(x434<x435))+x436);

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MIN;
	int8_t x439 = INT8_MIN;
	volatile int16_t x440 = INT16_MIN;

	t40 = ((x437%(x438<x439))+x440);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x442 = 427570U;
	int8_t x443 = INT8_MIN;
	volatile uint16_t x444 = UINT16_MAX;
	int32_t t41 = -128623763;

	t41 = ((x441%(x442<x443))+x444);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x449 = -17;
	uint16_t x451 = UINT16_MAX;
	static int16_t x452 = INT16_MAX;
	int32_t t42 = 136910;

	t42 = ((x449%(x450<x451))+x452);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x453 = 1U;
	uint16_t x455 = 791U;
	int8_t x456 = -1;
	volatile int32_t t43 = -26;

	t43 = ((x453%(x454<x455))+x456);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x461 = 2192920LLU;
	int64_t x462 = INT64_MIN;
	static int8_t x463 = 18;
	uint64_t x464 = 4512991587343418LLU;
	uint64_t t44 = 831LLU;

	t44 = ((x461%(x462<x463))+x464);

	if (t44 != 4512991587343418LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x473 = INT8_MIN;
	int64_t x474 = INT64_MAX;
	uint16_t x476 = 1U;

	t45 = ((x473%(x474<x475))+x476);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x477 = UINT64_MAX;
	int32_t x478 = INT32_MIN;
	static uint8_t x479 = 1U;
	static volatile uint64_t x480 = UINT64_MAX;

	t46 = ((x477%(x478<x479))+x480);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x488 = -45412397;
	volatile uint32_t t47 = 62878274U;

	t47 = ((x485%(x486<x487))+x488);

	if (t47 != 4249554899U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x493 = -1;
	int64_t x494 = INT64_MIN;
	uint8_t x495 = 3U;
	uint64_t x496 = UINT64_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = ((x493%(x494<x495))+x496);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x497 = UINT16_MAX;
	uint8_t x499 = UINT8_MAX;
	int32_t t49 = 9156;

	t49 = ((x497%(x498<x499))+x500);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x505 = UINT32_MAX;
	volatile int32_t x506 = -26616;
	volatile uint16_t x507 = 13057U;
	static int16_t x508 = INT16_MIN;
	static uint32_t t50 = 203362123U;

	t50 = ((x505%(x506<x507))+x508);

	if (t50 != 4294934528U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x509 = 15;
	int64_t x510 = -1LL;
	uint32_t x511 = 546619U;
	static volatile int64_t t51 = -87295LL;

	t51 = ((x509%(x510<x511))+x512);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x513 = INT8_MIN;
	int32_t x514 = 11;
	int16_t x516 = INT16_MIN;
	volatile int32_t t52 = 15;

	t52 = ((x513%(x514<x515))+x516);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x521 = 268241;
	uint16_t x522 = 28347U;
	volatile int64_t x523 = 1846309634LL;
	int64_t x524 = INT64_MAX;

	t53 = ((x521%(x522<x523))+x524);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x529 = 90LL;
	static uint8_t x531 = 22U;
	int16_t x532 = 32;
	static int64_t t54 = -2167173LL;

	t54 = ((x529%(x530<x531))+x532);

	if (t54 != 32LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x533 = 84771496LLU;
	int64_t x534 = INT64_MIN;
	int8_t x535 = INT8_MAX;
	static int32_t x536 = INT32_MAX;
	volatile uint64_t t55 = 532974629LLU;

	t55 = ((x533%(x534<x535))+x536);

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x537 = INT64_MAX;
	uint64_t x539 = UINT64_MAX;
	uint8_t x540 = 3U;
	volatile int64_t t56 = 7554LL;

	t56 = ((x537%(x538<x539))+x540);

	if (t56 != 3LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x549 = 11;
	volatile uint8_t x551 = UINT8_MAX;
	int32_t t57 = -211529253;

	t57 = ((x549%(x550<x551))+x552);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x553 = 3410U;
	int32_t x554 = -1;
	int8_t x555 = 1;
	uint8_t x556 = 18U;

	t58 = ((x553%(x554<x555))+x556);

	if (t58 != 18U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x557 = UINT8_MAX;
	int16_t x559 = -1;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x557%(x558<x559))+x560);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x566 = -133810129120952060LL;
	uint32_t x567 = UINT32_MAX;
	volatile uint16_t x568 = 123U;
	volatile int32_t t60 = -45931088;

	t60 = ((x565%(x566<x567))+x568);

	if (t60 != 123) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x585 = 26725;
	int8_t x586 = INT8_MIN;
	int64_t x587 = INT64_MAX;
	uint8_t x588 = 8U;
	volatile int32_t t61 = -59;

	t61 = ((x585%(x586<x587))+x588);

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x593 = 116U;
	static int8_t x594 = INT8_MAX;
	int32_t x595 = INT32_MAX;
	uint8_t x596 = UINT8_MAX;

	t62 = ((x593%(x594<x595))+x596);

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x597 = INT8_MIN;
	int8_t x598 = INT8_MAX;
	uint32_t x599 = UINT32_MAX;
	uint8_t x600 = 0U;

	t63 = ((x597%(x598<x599))+x600);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x605 = INT16_MIN;
	int16_t x606 = -1;
	uint16_t x608 = UINT16_MAX;
	int32_t t64 = -2125;

	t64 = ((x605%(x606<x607))+x608);

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x609 = 82U;
	uint16_t x610 = 5848U;
	int32_t x611 = 142356;
	int64_t x612 = INT64_MIN;
	static volatile int64_t t65 = INT64_MIN;

	t65 = ((x609%(x610<x611))+x612);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x613 = -191436570;
	static uint16_t x614 = 23755U;
	int32_t x615 = INT32_MAX;
	uint8_t x616 = 12U;
	int32_t t66 = 4267416;

	t66 = ((x613%(x614<x615))+x616);

	if (t66 != 12) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x621 = UINT16_MAX;
	int16_t x622 = INT16_MIN;
	uint16_t x623 = 212U;
	volatile int64_t x624 = INT64_MIN;
	int64_t t67 = INT64_MIN;

	t67 = ((x621%(x622<x623))+x624);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x637 = INT16_MAX;
	volatile int32_t x639 = -1;
	int32_t x640 = -19613;
	int32_t t68 = 3;

	t68 = ((x637%(x638<x639))+x640);

	if (t68 != -19613) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x657 = UINT8_MAX;
	int64_t x658 = -1LL;
	static uint8_t x659 = UINT8_MAX;
	uint8_t x660 = 86U;

	t69 = ((x657%(x658<x659))+x660);

	if (t69 != 86) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x673 = UINT8_MAX;
	int32_t x674 = INT32_MIN;
	int64_t x675 = 3283452985145LL;
	volatile uint32_t x676 = 176U;
	static uint32_t t70 = 255049U;

	t70 = ((x673%(x674<x675))+x676);

	if (t70 != 176U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x677 = INT8_MIN;
	volatile int8_t x678 = -35;
	int16_t x679 = INT16_MAX;
	int32_t x680 = INT32_MIN;

	t71 = ((x677%(x678<x679))+x680);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x693 = -1LL;
	volatile int16_t x694 = INT16_MIN;
	int8_t x695 = -11;

	t72 = ((x693%(x694<x695))+x696);

	if (t72 != 10851LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x709 = INT64_MIN;
	static uint8_t x710 = 66U;
	uint16_t x711 = UINT16_MAX;
	static volatile int64_t x712 = INT64_MIN;
	static volatile int64_t t73 = INT64_MIN;

	t73 = ((x709%(x710<x711))+x712);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x717 = 1U;
	int16_t x718 = -231;
	int32_t x719 = -1;
	int16_t x720 = INT16_MIN;

	t74 = ((x717%(x718<x719))+x720);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x721 = INT32_MIN;
	int8_t x722 = INT8_MIN;
	uint32_t x724 = UINT32_MAX;
	static volatile uint32_t t75 = UINT32_MAX;

	t75 = ((x721%(x722<x723))+x724);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x729 = -60200021922LL;
	int8_t x730 = INT8_MIN;
	static uint16_t x731 = 5490U;
	int64_t x732 = -192028741308LL;

	t76 = ((x729%(x730<x731))+x732);

	if (t76 != -192028741308LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x738 = INT64_MIN;
	static int16_t x739 = 1499;
	volatile int64_t x740 = INT64_MAX;
	volatile int64_t t77 = INT64_MAX;

	t77 = ((x737%(x738<x739))+x740);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x757 = UINT32_MAX;
	uint64_t x758 = 475497381022451LLU;
	volatile uint32_t t78 = 59848U;

	t78 = ((x757%(x758<x759))+x760);

	if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x767 = 0;
	int8_t x768 = INT8_MIN;
	volatile uint32_t t79 = 50U;

	t79 = ((x765%(x766<x767))+x768);

	if (t79 != 4294967168U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x774 = 62LLU;
	uint32_t x776 = UINT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = ((x773%(x774<x775))+x776);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x777 = 13U;
	int64_t x780 = 465174546768072292LL;
	volatile int64_t t81 = 7656390782LL;

	t81 = ((x777%(x778<x779))+x780);

	if (t81 != 465174546768072292LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x781 = -61;
	int32_t x783 = INT32_MAX;
	int32_t x784 = 27542;

	t82 = ((x781%(x782<x783))+x784);

	if (t82 != 27542) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x789 = INT64_MAX;
	int16_t x790 = INT16_MIN;
	int32_t x791 = 470769520;
	uint32_t x792 = UINT32_MAX;

	t83 = ((x789%(x790<x791))+x792);

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x795 = 2U;
	volatile int8_t x796 = INT8_MIN;
	volatile int32_t t84 = -734257;

	t84 = ((x793%(x794<x795))+x796);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x797 = -44;
	uint8_t x798 = UINT8_MAX;
	int64_t x799 = 59770965460221LL;
	volatile int64_t x800 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = ((x797%(x798<x799))+x800);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x813 = -1;
	uint8_t x814 = 6U;
	static uint16_t x815 = UINT16_MAX;
	volatile uint64_t x816 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x813%(x814<x815))+x816);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x817 = -468889834694LL;
	volatile uint32_t x818 = 1978013U;
	int32_t x820 = -41966760;
	static int64_t t87 = 668037LL;

	t87 = ((x817%(x818<x819))+x820);

	if (t87 != -41966760LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x825 = 17073189U;
	int64_t t88 = INT64_MAX;

	t88 = ((x825%(x826<x827))+x828);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x829 = 30033837LLU;
	uint8_t x830 = 6U;
	int64_t x832 = INT64_MAX;
	volatile uint64_t t89 = 3638LLU;

	t89 = ((x829%(x830<x831))+x832);

	if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x833 = INT32_MIN;
	int32_t x834 = -382;
	static int32_t x835 = -1;
	volatile uint16_t x836 = 61U;
	static volatile int32_t t90 = -127943;

	t90 = ((x833%(x834<x835))+x836);

	if (t90 != 61) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x853 = -19990172737LL;
	static int8_t x854 = -31;
	int8_t x855 = -1;
	volatile int16_t x856 = 1;

	t91 = ((x853%(x854<x855))+x856);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x857 = INT8_MIN;
	int32_t x858 = INT32_MIN;
	int32_t x860 = INT32_MIN;
	int32_t t92 = INT32_MIN;

	t92 = ((x857%(x858<x859))+x860);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x861 = 338381732LLU;
	int8_t x862 = 1;
	uint16_t x863 = 115U;
	int32_t x864 = INT32_MIN;
	volatile uint64_t t93 = 234743783141694945LLU;

	t93 = ((x861%(x862<x863))+x864);

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x865 = -1;
	int16_t x866 = -2;
	int32_t t94 = 1218;

	t94 = ((x865%(x866<x867))+x868);

	if (t94 != 7) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x870 = -588;
	static int8_t x871 = -1;
	uint8_t x872 = 26U;
	static int64_t t95 = -28427LL;

	t95 = ((x869%(x870<x871))+x872);

	if (t95 != 26LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x877 = 471675U;
	int16_t x878 = INT16_MIN;

	t96 = ((x877%(x878<x879))+x880);

	if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x885 = INT16_MIN;
	int32_t x886 = 272638443;
	uint32_t x887 = UINT32_MAX;
	volatile int64_t t97 = INT64_MIN;

	t97 = ((x885%(x886<x887))+x888);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x893 = -1LL;
	uint32_t x895 = 999U;
	int64_t t98 = 27388886256982LL;

	t98 = ((x893%(x894<x895))+x896);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x897 = UINT64_MAX;
	static int8_t x898 = INT8_MIN;
	static uint64_t x899 = UINT64_MAX;
	uint32_t x900 = 291457U;

	t99 = ((x897%(x898<x899))+x900);

	if (t99 != 291457LLU) { NG(); } else { ; }
	
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

