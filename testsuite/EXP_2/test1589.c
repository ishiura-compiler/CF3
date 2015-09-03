#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x26 = INT8_MIN;
uint8_t x33 = UINT8_MAX;
static volatile int32_t x34 = -1;
int8_t x67 = -7;
static uint8_t x69 = 0U;
int64_t x72 = -1LL;
static volatile int64_t t6 = -120LL;
int32_t t7 = 27688;
int16_t x116 = -109;
volatile int64_t t9 = -47840543266LL;
int16_t x142 = INT16_MIN;
volatile uint32_t t11 = 31545U;
int8_t x146 = INT8_MIN;
uint16_t x161 = UINT16_MAX;
volatile uint64_t x176 = 10925219LLU;
int64_t x179 = -1LL;
uint8_t x209 = 6U;
uint8_t x225 = 18U;
uint64_t x230 = 55730838337760235LLU;
volatile uint32_t t20 = 3U;
uint32_t x238 = 10871253U;
static volatile int16_t x239 = INT16_MIN;
volatile uint64_t x248 = 6LLU;
int16_t x254 = INT16_MAX;
volatile int64_t x255 = INT64_MIN;
static int64_t x286 = -1LL;
int32_t x311 = INT32_MIN;
int32_t x356 = INT32_MIN;
volatile uint64_t t29 = 3799LLU;
int8_t x372 = INT8_MAX;
volatile int32_t t31 = 1;
static uint16_t x390 = 25745U;
int32_t x391 = INT32_MIN;
uint64_t x398 = 5302LLU;
int64_t x399 = INT64_MAX;
static uint16_t x407 = 45U;
int8_t x408 = INT8_MIN;
static int32_t t38 = 1;
static int16_t x428 = -1;
int32_t t40 = 4348;
volatile int8_t x437 = INT8_MAX;
uint64_t x453 = 594257LLU;
volatile uint64_t x464 = UINT64_MAX;
uint16_t x468 = 5U;
int32_t t44 = 1;
int16_t x482 = INT16_MIN;
int64_t x483 = INT64_MIN;
static volatile uint64_t t47 = 3923841438853981LLU;
uint32_t x488 = 289U;
volatile uint32_t t48 = 11155890U;
volatile int64_t x518 = -241357421005LL;
int32_t t51 = -12160852;
uint16_t x522 = UINT16_MAX;
static uint64_t x535 = 503212528499505042LLU;
static volatile int64_t t54 = 1LL;
uint32_t x567 = 986035981U;
uint16_t x581 = 12U;
volatile uint64_t t58 = 668145312700LLU;
int8_t x607 = INT8_MIN;
static int32_t t61 = -176218530;
int32_t x627 = -50931958;
volatile uint64_t t65 = 18082LLU;
int16_t x684 = INT16_MIN;
volatile uint16_t x687 = UINT16_MAX;
uint32_t x706 = 955795304U;
static uint16_t x707 = UINT16_MAX;
int16_t x713 = INT16_MAX;
int32_t t70 = 45160367;
int8_t x738 = -1;
int32_t x740 = INT32_MAX;
uint64_t x741 = 106204068918722761LLU;
uint8_t x762 = 53U;
volatile uint64_t x763 = UINT64_MAX;
volatile uint8_t x765 = 1U;
volatile int64_t x766 = -32271938746LL;
uint64_t t76 = 597442973663334LLU;
int8_t x773 = 1;
static int16_t x778 = INT16_MIN;
volatile uint64_t x861 = UINT64_MAX;
int64_t x862 = INT64_MAX;
uint32_t x869 = 456416488U;
int32_t t87 = -62172;
volatile uint16_t x893 = 16475U;
int16_t x894 = -1;
int16_t x916 = 9;
int32_t t89 = 6431;
volatile uint16_t x925 = 892U;
volatile int32_t x928 = -1;
volatile int32_t t90 = 542978;
volatile int32_t t91 = -404;
volatile uint64_t x941 = UINT64_MAX;
static int16_t x942 = -1;
int16_t x969 = 841;
uint8_t x970 = UINT8_MAX;
int32_t t95 = 8356755;
int16_t x992 = INT16_MAX;
int16_t x999 = INT16_MAX;


void f0(void) {
	int32_t x13 = INT32_MAX;
	volatile int64_t x14 = -21324LL;
	int16_t x15 = INT16_MIN;
	static volatile int32_t x16 = -1;
	volatile int32_t t0 = 346717;

	t0 = ((x13<<(x14<=x15))*x16);

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x17 = 444U;
	int8_t x18 = 22;
	int8_t x19 = -1;
	int8_t x20 = -1;
	int32_t t1 = 30;

	t1 = ((x17<<(x18<=x19))*x20);

	if (t1 != -444) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = 3;
	volatile int64_t x27 = 5422LL;
	static volatile uint64_t x28 = UINT64_MAX;
	uint64_t t2 = 357180LLU;

	t2 = ((x25<<(x26<=x27))*x28);

	if (t2 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 3U;
	uint32_t x30 = UINT32_MAX;
	static int32_t x31 = INT32_MAX;
	int32_t x32 = -7087;
	volatile int32_t t3 = 272371055;

	t3 = ((x29<<(x30<=x31))*x32);

	if (t3 != -21261) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x35 = UINT8_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t4 = -2346718;

	t4 = ((x33<<(x34<=x35))*x36);

	if (t4 != -65280) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x65 = 3U;
	int64_t x66 = INT64_MAX;
	int8_t x68 = 1;
	static volatile uint32_t t5 = 920397376U;

	t5 = ((x65<<(x66<=x67))*x68);

	if (t5 != 3U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x70 = 1;
	static int8_t x71 = 59;

	t6 = ((x69<<(x70<=x71))*x72);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x73 = UINT8_MAX;
	volatile int32_t x74 = 156027093;
	uint16_t x75 = 4U;
	int8_t x76 = 0;

	t7 = ((x73<<(x74<=x75))*x76);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x85 = 2276U;
	static int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MIN;
	int8_t x88 = -28;
	int32_t t8 = 8;

	t8 = ((x85<<(x86<=x87))*x88);

	if (t8 != -127456) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x113 = 21663634691LL;
	volatile uint16_t x114 = 641U;
	int16_t x115 = -1;

	t9 = ((x113<<(x114<=x115))*x116);

	if (t9 != -2361336181319LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x125 = 1;
	uint16_t x126 = UINT16_MAX;
	volatile uint16_t x127 = 248U;
	uint8_t x128 = 0U;
	static volatile int32_t t10 = 447907;

	t10 = ((x125<<(x126<=x127))*x128);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x141 = 14694292U;
	static volatile int32_t x143 = INT32_MIN;
	static int16_t x144 = 18;

	t11 = ((x141<<(x142<=x143))*x144);

	if (t11 != 264497256U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x145 = 55;
	int64_t x147 = 2009901787LL;
	int16_t x148 = INT16_MAX;
	volatile int32_t t12 = 3881;

	t12 = ((x145<<(x146<=x147))*x148);

	if (t12 != 3604370) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x153 = 21U;
	static volatile int16_t x154 = -2909;
	volatile int32_t x155 = INT32_MIN;
	int16_t x156 = 2;
	int32_t t13 = 1873;

	t13 = ((x153<<(x154<=x155))*x156);

	if (t13 != 42) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x162 = INT16_MAX;
	volatile uint32_t x163 = UINT32_MAX;
	volatile int8_t x164 = INT8_MAX;
	int32_t t14 = 10641835;

	t14 = ((x161<<(x162<=x163))*x164);

	if (t14 != 16645890) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x173 = 11805681LLU;
	int8_t x174 = INT8_MAX;
	int32_t x175 = INT32_MAX;
	uint64_t t15 = 23716992LLU;

	t15 = ((x173<<(x174<=x175))*x176);

	if (t15 != 257959300738278LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x177 = UINT64_MAX;
	volatile int16_t x178 = INT16_MIN;
	int32_t x180 = 54;
	uint64_t t16 = 111181317LLU;

	t16 = ((x177<<(x178<=x179))*x180);

	if (t16 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x201 = UINT64_MAX;
	uint8_t x202 = 27U;
	int64_t x203 = -1LL;
	volatile int64_t x204 = 288LL;
	uint64_t t17 = 15012885923LLU;

	t17 = ((x201<<(x202<=x203))*x204);

	if (t17 != 18446744073709551328LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x210 = UINT16_MAX;
	uint64_t x211 = 2LLU;
	static int32_t x212 = 11;
	volatile int32_t t18 = -18;

	t18 = ((x209<<(x210<=x211))*x212);

	if (t18 != 66) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x226 = -17;
	int32_t x227 = INT32_MAX;
	uint8_t x228 = 1U;
	volatile int32_t t19 = -404;

	t19 = ((x225<<(x226<=x227))*x228);

	if (t19 != 36) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x229 = INT8_MAX;
	int64_t x231 = -394267LL;
	uint32_t x232 = UINT32_MAX;

	t20 = ((x229<<(x230<=x231))*x232);

	if (t20 != 4294967042U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x237 = 309U;
	static int8_t x240 = INT8_MIN;
	int32_t t21 = -3;

	t21 = ((x237<<(x238<=x239))*x240);

	if (t21 != -79104) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x245 = INT8_MAX;
	int32_t x246 = INT32_MIN;
	static volatile int32_t x247 = INT32_MIN;
	volatile uint64_t t22 = 422676861398361971LLU;

	t22 = ((x245<<(x246<=x247))*x248);

	if (t22 != 1524LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x253 = INT8_MAX;
	int16_t x256 = INT16_MIN;
	volatile int32_t t23 = 6209;

	t23 = ((x253<<(x254<=x255))*x256);

	if (t23 != -4161536) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x257 = 3768338LLU;
	int32_t x258 = -1;
	uint8_t x259 = 103U;
	int64_t x260 = INT64_MAX;
	volatile uint64_t t24 = 24366016154398LLU;

	t24 = ((x257<<(x258<=x259))*x260);

	if (t24 != 18446744073702014940LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x261 = 3;
	int64_t x262 = -1LL;
	int8_t x263 = 2;
	uint8_t x264 = UINT8_MAX;
	int32_t t25 = 1;

	t25 = ((x261<<(x262<=x263))*x264);

	if (t25 != 1530) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x285 = 23268U;
	static volatile uint8_t x287 = 52U;
	uint16_t x288 = 24409U;
	volatile int32_t t26 = -136;

	t26 = ((x285<<(x286<=x287))*x288);

	if (t26 != 1135897224) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MIN;
	volatile int8_t x312 = -1;
	volatile int32_t t27 = -240367804;

	t27 = ((x309<<(x310<=x311))*x312);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x353 = 6U;
	int64_t x354 = 6482980985007424LL;
	static volatile int8_t x355 = 1;
	uint32_t t28 = 0U;

	t28 = ((x353<<(x354<=x355))*x356);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x357 = 16320LLU;
	int32_t x358 = -1;
	uint16_t x359 = 5U;
	int64_t x360 = INT64_MIN;

	t29 = ((x357<<(x358<=x359))*x360);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x365 = 0;
	int64_t x366 = -668LL;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = -1;
	volatile int32_t t30 = -10322583;

	t30 = ((x365<<(x366<=x367))*x368);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x369 = 1268497;
	uint32_t x370 = 17619U;
	int64_t x371 = -1235798LL;

	t31 = ((x369<<(x370<=x371))*x372);

	if (t31 != 161099119) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x377 = 118U;
	volatile int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	int8_t x380 = 3;
	static int32_t t32 = 1;

	t32 = ((x377<<(x378<=x379))*x380);

	if (t32 != 708) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x389 = 22;
	int64_t x392 = 885681294408535LL;
	int64_t t33 = 652713055043195LL;

	t33 = ((x389<<(x390<=x391))*x392);

	if (t33 != 19484988476987770LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x393 = 6U;
	int8_t x394 = INT8_MAX;
	uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t34 = -870092884;

	t34 = ((x393<<(x394<=x395))*x396);

	if (t34 != -393216) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x397 = 326239275373LLU;
	int32_t x400 = -1;
	uint64_t t35 = 213037543LLU;

	t35 = ((x397<<(x398<=x399))*x400);

	if (t35 != 18446743421231000870LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x405 = UINT64_MAX;
	uint64_t x406 = UINT64_MAX;
	volatile uint64_t t36 = 31745018LLU;

	t36 = ((x405<<(x406<=x407))*x408);

	if (t36 != 128LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x409 = INT16_MAX;
	static uint64_t x410 = 30187227LLU;
	int64_t x411 = INT64_MIN;
	int16_t x412 = INT16_MIN;
	static int32_t t37 = 3589;

	t37 = ((x409<<(x410<=x411))*x412);

	if (t37 != -2147418112) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x413 = 1;
	uint16_t x414 = 3U;
	uint64_t x415 = 216194427LLU;
	static int16_t x416 = INT16_MAX;

	t38 = ((x413<<(x414<=x415))*x416);

	if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x421 = 21U;
	int16_t x422 = 1362;
	int16_t x423 = -6;
	int32_t x424 = -1;
	volatile int32_t t39 = 29;

	t39 = ((x421<<(x422<=x423))*x424);

	if (t39 != -21) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x425 = 16;
	uint16_t x426 = 4463U;
	uint8_t x427 = 12U;

	t40 = ((x425<<(x426<=x427))*x428);

	if (t40 != -16) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x438 = UINT8_MAX;
	int32_t x439 = INT32_MIN;
	static int16_t x440 = -1;
	static volatile int32_t t41 = -20587;

	t41 = ((x437<<(x438<=x439))*x440);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x454 = INT64_MIN;
	uint32_t x455 = UINT32_MAX;
	int16_t x456 = -1;
	volatile uint64_t t42 = 508977421506379LLU;

	t42 = ((x453<<(x454<=x455))*x456);

	if (t42 != 18446744073708363102LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x461 = INT64_MAX;
	int8_t x462 = -1;
	static int16_t x463 = INT16_MIN;
	static uint64_t t43 = 3057996279030LLU;

	t43 = ((x461<<(x462<=x463))*x464);

	if (t43 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x465 = 7U;
	static uint32_t x466 = UINT32_MAX;
	int8_t x467 = INT8_MIN;

	t44 = ((x465<<(x466<=x467))*x468);

	if (t44 != 35) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x469 = 146U;
	static volatile int32_t x470 = -7058;
	int16_t x471 = INT16_MIN;
	int16_t x472 = 1;
	uint32_t t45 = 25155718U;

	t45 = ((x469<<(x470<=x471))*x472);

	if (t45 != 146U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x477 = 1193096876653700LL;
	int8_t x478 = INT8_MIN;
	int8_t x479 = INT8_MAX;
	int8_t x480 = 1;
	int64_t t46 = 424568148576816LL;

	t46 = ((x477<<(x478<=x479))*x480);

	if (t46 != 2386193753307400LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x481 = UINT8_MAX;
	uint64_t x484 = 333459LLU;

	t47 = ((x481<<(x482<=x483))*x484);

	if (t47 != 85032045LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x485 = 307U;
	int32_t x486 = -2695176;
	uint64_t x487 = 1129109519146250685LLU;

	t48 = ((x485<<(x486<=x487))*x488);

	if (t48 != 88723U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x501 = 413489553;
	int32_t x502 = -1;
	uint16_t x503 = 3U;
	int32_t x504 = -1;
	int32_t t49 = -206;

	t49 = ((x501<<(x502<=x503))*x504);

	if (t49 != -826979106) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x513 = INT32_MAX;
	volatile int16_t x514 = INT16_MIN;
	static uint64_t x515 = 19288448606LLU;
	int8_t x516 = -1;
	int32_t t50 = 59098;

	t50 = ((x513<<(x514<=x515))*x516);

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x517 = 0;
	int16_t x519 = INT16_MIN;
	int32_t x520 = -1585664;

	t51 = ((x517<<(x518<=x519))*x520);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x521 = 0U;
	int64_t x523 = INT64_MAX;
	int16_t x524 = INT16_MIN;
	int32_t t52 = 448492577;

	t52 = ((x521<<(x522<=x523))*x524);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x533 = UINT64_MAX;
	int64_t x534 = INT64_MIN;
	volatile int8_t x536 = 2;
	uint64_t t53 = 652460897601779LLU;

	t53 = ((x533<<(x534<=x535))*x536);

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x541 = 677779LL;
	uint16_t x542 = UINT16_MAX;
	uint64_t x543 = 2170598100902LLU;
	volatile int8_t x544 = INT8_MIN;

	t54 = ((x541<<(x542<=x543))*x544);

	if (t54 != -173511424LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x565 = 80U;
	int64_t x566 = INT64_MIN;
	int32_t x568 = -1;
	static int32_t t55 = 2;

	t55 = ((x565<<(x566<=x567))*x568);

	if (t55 != -160) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x577 = UINT32_MAX;
	int32_t x578 = 18149;
	int64_t x579 = INT64_MIN;
	int32_t x580 = 8244846;
	uint32_t t56 = 80U;

	t56 = ((x577<<(x578<=x579))*x580);

	if (t56 != 4286722450U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x582 = 3603U;
	int32_t x583 = INT32_MIN;
	int32_t x584 = 38461705;
	volatile int32_t t57 = 197;

	t57 = ((x581<<(x582<=x583))*x584);

	if (t57 != 461540460) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x585 = 3U;
	int32_t x586 = INT32_MAX;
	int64_t x587 = -1LL;
	uint64_t x588 = 30713080480LLU;

	t58 = ((x585<<(x586<=x587))*x588);

	if (t58 != 92139241440LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x593 = 76U;
	volatile int8_t x594 = INT8_MAX;
	static int16_t x595 = INT16_MIN;
	volatile int64_t x596 = 6619518949879LL;
	int64_t t59 = 7394730403356559LL;

	t59 = ((x593<<(x594<=x595))*x596);

	if (t59 != 503083440190804LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x605 = 18780611675LLU;
	static int8_t x606 = INT8_MAX;
	static int8_t x608 = 1;
	volatile uint64_t t60 = 16733986LLU;

	t60 = ((x605<<(x606<=x607))*x608);

	if (t60 != 18780611675LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x617 = 87;
	volatile int32_t x618 = 0;
	volatile int8_t x619 = INT8_MIN;
	static int16_t x620 = INT16_MIN;

	t61 = ((x617<<(x618<=x619))*x620);

	if (t61 != -2850816) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x625 = UINT64_MAX;
	uint32_t x626 = 524997181U;
	int64_t x628 = -1LL;
	static volatile uint64_t t62 = 65765636675619LLU;

	t62 = ((x625<<(x626<=x627))*x628);

	if (t62 != 2LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x649 = 12439U;
	int16_t x650 = INT16_MIN;
	uint64_t x651 = 215183509855500LLU;
	volatile int16_t x652 = 1;
	int32_t t63 = -772549;

	t63 = ((x649<<(x650<=x651))*x652);

	if (t63 != 12439) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x661 = UINT64_MAX;
	uint32_t x662 = 89U;
	int8_t x663 = INT8_MAX;
	int8_t x664 = -1;
	static volatile uint64_t t64 = 9LLU;

	t64 = ((x661<<(x662<=x663))*x664);

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x673 = 20U;
	int32_t x674 = INT32_MAX;
	static uint64_t x675 = 1418856938401LLU;
	uint64_t x676 = 7967821LLU;

	t65 = ((x673<<(x674<=x675))*x676);

	if (t65 != 318712840LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x681 = 438U;
	int8_t x682 = -1;
	int64_t x683 = -1LL;
	uint32_t t66 = 4U;

	t66 = ((x681<<(x682<=x683))*x684);

	if (t66 != 4266262528U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x685 = 57U;
	int8_t x686 = INT8_MIN;
	uint32_t x688 = 894U;
	uint32_t t67 = 382457U;

	t67 = ((x685<<(x686<=x687))*x688);

	if (t67 != 101916U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x697 = 165;
	static int8_t x698 = 1;
	uint8_t x699 = 2U;
	volatile int16_t x700 = -1;
	volatile int32_t t68 = 0;

	t68 = ((x697<<(x698<=x699))*x700);

	if (t68 != -330) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x705 = 8U;
	uint32_t x708 = 270U;
	volatile uint32_t t69 = 232900129U;

	t69 = ((x705<<(x706<=x707))*x708);

	if (t69 != 2160U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x714 = INT64_MIN;
	int8_t x715 = 1;
	static volatile int16_t x716 = -8005;

	t70 = ((x713<<(x714<=x715))*x716);

	if (t70 != -524599670) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x733 = 666976LLU;
	int32_t x734 = -1578;
	int64_t x735 = INT64_MIN;
	static volatile uint64_t x736 = UINT64_MAX;
	volatile uint64_t t71 = 14517777LLU;

	t71 = ((x733<<(x734<=x735))*x736);

	if (t71 != 18446744073708884640LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x737 = 525944587305LLU;
	int16_t x739 = 13907;
	volatile uint64_t t72 = 1829857643456065453LLU;

	t72 = ((x737<<(x738<=x739))*x740);

	if (t72 != 8412023938737305518LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x742 = -2;
	uint8_t x743 = 11U;
	int8_t x744 = INT8_MIN;
	volatile uint64_t t73 = 1122553LLU;

	t73 = ((x741<<(x742<=x743))*x744);

	if (t73 != 9705246504226076416LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x757 = 1;
	static int64_t x758 = -1LL;
	uint8_t x759 = 0U;
	int64_t x760 = -1LL;
	int64_t t74 = 15LL;

	t74 = ((x757<<(x758<=x759))*x760);

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x761 = UINT8_MAX;
	static uint64_t x764 = 36528636658667556LLU;
	volatile uint64_t t75 = 28LLU;

	t75 = ((x761<<(x762<=x763))*x764);

	if (t75 != 182860622210901944LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x767 = 14856917499832854LLU;
	uint64_t x768 = 17LLU;

	t76 = ((x765<<(x766<=x767))*x768);

	if (t76 != 17LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x769 = UINT8_MAX;
	uint16_t x770 = 24001U;
	static int16_t x771 = -1;
	int8_t x772 = INT8_MAX;
	int32_t t77 = 67;

	t77 = ((x769<<(x770<=x771))*x772);

	if (t77 != 32385) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x774 = INT8_MIN;
	volatile int16_t x775 = -1;
	uint32_t x776 = 4U;
	static uint32_t t78 = 26285U;

	t78 = ((x773<<(x774<=x775))*x776);

	if (t78 != 8U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x777 = UINT64_MAX;
	int8_t x779 = INT8_MAX;
	static uint16_t x780 = UINT16_MAX;
	static volatile uint64_t t79 = 11521332855LLU;

	t79 = ((x777<<(x778<=x779))*x780);

	if (t79 != 18446744073709420546LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x789 = 59069091208907042LL;
	int8_t x790 = -60;
	int16_t x791 = 171;
	uint8_t x792 = 1U;
	static int64_t t80 = -488667297LL;

	t80 = ((x789<<(x790<=x791))*x792);

	if (t80 != 118138182417814084LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x821 = 6U;
	int8_t x822 = INT8_MIN;
	volatile int8_t x823 = INT8_MIN;
	int8_t x824 = 2;
	static volatile int32_t t81 = 471060656;

	t81 = ((x821<<(x822<=x823))*x824);

	if (t81 != 24) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x825 = 67249238U;
	int16_t x826 = INT16_MAX;
	int64_t x827 = 1959603470LL;
	int32_t x828 = 444159355;
	volatile uint32_t t82 = 1686586320U;

	t82 = ((x825<<(x826<=x827))*x828);

	if (t82 != 394004132U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x841 = 508709323U;
	int8_t x842 = -1;
	int16_t x843 = 1901;
	static volatile int32_t x844 = INT32_MIN;
	volatile uint32_t t83 = 251434U;

	t83 = ((x841<<(x842<=x843))*x844);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x849 = 1007931320670LL;
	int16_t x850 = INT16_MIN;
	static int64_t x851 = -677882LL;
	int8_t x852 = 48;
	volatile int64_t t84 = -791019115435551LL;

	t84 = ((x849<<(x850<=x851))*x852);

	if (t84 != 48380703392160LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x863 = 5U;
	uint16_t x864 = 634U;
	uint64_t t85 = 112415743975143LLU;

	t85 = ((x861<<(x862<=x863))*x864);

	if (t85 != 18446744073709550982LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x870 = 0;
	int8_t x871 = -1;
	uint32_t x872 = UINT32_MAX;
	uint32_t t86 = 14U;

	t86 = ((x869<<(x870<=x871))*x872);

	if (t86 != 3838550808U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x889 = INT8_MAX;
	int16_t x890 = 0;
	int64_t x891 = INT64_MIN;
	volatile int8_t x892 = INT8_MIN;

	t87 = ((x889<<(x890<=x891))*x892);

	if (t87 != -16256) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x895 = 14U;
	volatile int8_t x896 = -1;
	volatile int32_t t88 = 1155629;

	t88 = ((x893<<(x894<=x895))*x896);

	if (t88 != -16475) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x913 = 1;
	int16_t x914 = -1;
	static uint16_t x915 = 129U;

	t89 = ((x913<<(x914<=x915))*x916);

	if (t89 != 18) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x926 = INT8_MAX;
	volatile int64_t x927 = -1LL;

	t90 = ((x925<<(x926<=x927))*x928);

	if (t90 != -892) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x937 = UINT8_MAX;
	volatile uint32_t x938 = UINT32_MAX;
	uint32_t x939 = UINT32_MAX;
	int16_t x940 = INT16_MAX;

	t91 = ((x937<<(x938<=x939))*x940);

	if (t91 != 16711170) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x943 = UINT16_MAX;
	int8_t x944 = INT8_MAX;
	uint64_t t92 = 5237228LLU;

	t92 = ((x941<<(x942<=x943))*x944);

	if (t92 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x949 = 51U;
	uint32_t x950 = 7U;
	int16_t x951 = -1;
	uint8_t x952 = 20U;
	volatile int32_t t93 = -55260885;

	t93 = ((x949<<(x950<=x951))*x952);

	if (t93 != 2040) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x953 = UINT16_MAX;
	int8_t x954 = INT8_MIN;
	int64_t x955 = INT64_MIN;
	uint8_t x956 = 2U;
	int32_t t94 = -1;

	t94 = ((x953<<(x954<=x955))*x956);

	if (t94 != 131070) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x971 = 482145623932989LLU;
	uint8_t x972 = 25U;

	t95 = ((x969<<(x970<=x971))*x972);

	if (t95 != 42050) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x973 = 197036LLU;
	int8_t x974 = INT8_MAX;
	int16_t x975 = -1;
	static uint8_t x976 = UINT8_MAX;
	volatile uint64_t t96 = 1011694587305LLU;

	t96 = ((x973<<(x974<=x975))*x976);

	if (t96 != 50244180LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x985 = 6U;
	int64_t x986 = INT64_MIN;
	static int32_t x987 = -426;
	uint8_t x988 = UINT8_MAX;
	int32_t t97 = 61940471;

	t97 = ((x985<<(x986<=x987))*x988);

	if (t97 != 3060) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x989 = UINT16_MAX;
	int32_t x990 = 10906811;
	int32_t x991 = -1;
	int32_t t98 = -166761078;

	t98 = ((x989<<(x990<=x991))*x992);

	if (t98 != 2147385345) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x997 = 3;
	uint8_t x998 = 18U;
	int64_t x1000 = -73954636112LL;
	int64_t t99 = 332765898814LL;

	t99 = ((x997<<(x998<=x999))*x1000);

	if (t99 != -443727816672LL) { NG(); } else { ; }
	
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

