#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 62510;
static int32_t t2 = -29113905;
int8_t x89 = INT8_MIN;
int8_t x90 = INT8_MAX;
volatile int32_t t7 = -106590;
uint32_t x97 = UINT32_MAX;
static uint8_t x98 = 114U;
volatile int8_t x103 = INT8_MIN;
volatile int32_t t9 = -6741;
uint16_t x150 = 13887U;
int64_t x153 = INT64_MIN;
uint32_t x155 = 227588U;
static uint16_t x163 = 25U;
static int32_t t16 = 14285;
uint64_t x174 = UINT64_MAX;
volatile int32_t t17 = -9254;
uint64_t x181 = 0LLU;
uint8_t x182 = 26U;
int32_t x193 = INT32_MAX;
uint8_t x195 = 10U;
volatile int32_t t20 = -229527;
static int32_t t21 = 108291;
int16_t x214 = INT16_MIN;
static int32_t x263 = INT32_MIN;
static int8_t x265 = INT8_MIN;
volatile int8_t x269 = -18;
int32_t x271 = INT32_MIN;
static int16_t x275 = INT16_MAX;
int16_t x283 = INT16_MAX;
int32_t t28 = -3779286;
static int8_t x311 = 7;
int8_t x317 = 0;
volatile int32_t x319 = INT32_MIN;
int8_t x326 = INT8_MIN;
int32_t t32 = -6446;
volatile int32_t t34 = 508244659;
int16_t x371 = INT16_MAX;
volatile int32_t t35 = -31;
int64_t x375 = -1LL;
static volatile int16_t x376 = -1;
volatile int32_t t36 = 17728;
uint32_t x377 = 14742435U;
uint32_t x378 = 3325U;
volatile int32_t t37 = 2;
uint16_t x384 = 265U;
int32_t t38 = -85;
int32_t x385 = 2;
int16_t x404 = -1;
int8_t x407 = INT8_MIN;
int32_t x410 = 3;
uint64_t x446 = 991412703457328LLU;
int64_t x447 = INT64_MIN;
int32_t t46 = 0;
static int8_t x450 = 32;
volatile int32_t t47 = 2543;
volatile int32_t t50 = 1;
static volatile int32_t t51 = -3364483;
uint8_t x490 = 48U;
uint64_t x491 = 15LLU;
int16_t x494 = 7;
int64_t x497 = -1606945LL;
int32_t t57 = -51924;
int16_t x514 = 14817;
static int32_t x515 = -1;
volatile uint64_t x523 = 262710LLU;
volatile uint64_t x529 = 11446246266511LLU;
volatile int32_t x530 = INT32_MAX;
uint8_t x550 = UINT8_MAX;
static int64_t x574 = INT64_MAX;
static int32_t t64 = 19883084;
volatile int8_t x578 = 12;
volatile int32_t t65 = 792;
static int8_t x593 = INT8_MIN;
int32_t t67 = 33229678;
uint8_t x597 = 56U;
volatile int32_t x598 = 126;
volatile int64_t x600 = 1529833404813401LL;
static volatile uint32_t x603 = 92668U;
uint64_t x611 = 74066079LLU;
static uint32_t x616 = 62897U;
int32_t t71 = 292755;
volatile int32_t t72 = -97623;
uint16_t x624 = UINT16_MAX;
volatile uint8_t x626 = 0U;
volatile int32_t t74 = 4905;
int16_t x644 = INT16_MIN;
int32_t t77 = 59;
static int16_t x648 = INT16_MIN;
int32_t x660 = -40;
int32_t t81 = -53;
volatile int32_t x684 = 50704;
int32_t t82 = -16375;
uint64_t x685 = UINT64_MAX;
static int64_t x687 = -1LL;
uint16_t x718 = 18U;
volatile int8_t x719 = INT8_MIN;
volatile int32_t t88 = -1103;
int32_t x726 = INT32_MAX;
static volatile int32_t t89 = 4095876;
static volatile uint64_t x749 = 89702324LLU;
int16_t x751 = INT16_MIN;
static int16_t x771 = -1;
static volatile int64_t x772 = INT64_MAX;
volatile uint8_t x778 = UINT8_MAX;
volatile int8_t x792 = INT8_MAX;
int32_t x795 = 499135;
static volatile int32_t t95 = -54;
uint64_t x813 = UINT64_MAX;
volatile int16_t x825 = INT16_MIN;
volatile uint16_t x826 = UINT16_MAX;
int64_t x828 = INT64_MIN;
int32_t t99 = 120459;


void f0(void) {
	uint8_t x13 = 1U;
	uint16_t x14 = 6U;
	int8_t x15 = -3;
	static volatile int64_t x16 = 3714797566LL;

	t0 = ((x13==x14)%(x15<=x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 3U;
	uint32_t x24 = UINT32_MAX;
	int32_t t1 = 114078;

	t1 = ((x21==x22)%(x23<=x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	static int8_t x35 = -1;
	static uint64_t x36 = UINT64_MAX;

	t2 = ((x33==x34)%(x35<=x36));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x41 = -1727;
	volatile int64_t x42 = 1659731LL;
	int64_t x43 = INT64_MIN;
	int8_t x44 = -1;
	int32_t t3 = -39585234;

	t3 = ((x41==x42)%(x43<=x44));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x61 = UINT16_MAX;
	uint16_t x62 = 8228U;
	static uint16_t x63 = 3146U;
	uint64_t x64 = 1021104337338409021LLU;
	volatile int32_t t4 = 11205;

	t4 = ((x61==x62)%(x63<=x64));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x65 = 976U;
	volatile int32_t x66 = INT32_MIN;
	uint16_t x67 = UINT16_MAX;
	volatile uint64_t x68 = UINT64_MAX;
	volatile int32_t t5 = 40572689;

	t5 = ((x65==x66)%(x67<=x68));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x81 = 0;
	static int32_t x82 = INT32_MIN;
	volatile int16_t x83 = 430;
	uint32_t x84 = UINT32_MAX;
	int32_t t6 = 15;

	t6 = ((x81==x82)%(x83<=x84));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x91 = 1141704U;
	int32_t x92 = INT32_MIN;

	t7 = ((x89==x90)%(x91<=x92));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x99 = -220675;
	volatile uint16_t x100 = UINT16_MAX;
	int32_t t8 = -845;

	t8 = ((x97==x98)%(x99<=x100));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MAX;
	uint8_t x104 = 8U;

	t9 = ((x101==x102)%(x103<=x104));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x117 = -784;
	static int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;
	int16_t x120 = 6;
	static volatile int32_t t10 = 1;

	t10 = ((x117==x118)%(x119<=x120));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x125 = 259LLU;
	static int64_t x126 = -1LL;
	static int8_t x127 = INT8_MAX;
	uint64_t x128 = 1018248LLU;
	int32_t t11 = 959553;

	t11 = ((x125==x126)%(x127<=x128));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x129 = INT32_MIN;
	uint32_t x130 = 25715U;
	static int64_t x131 = INT64_MIN;
	int16_t x132 = -347;
	volatile int32_t t12 = -1377198;

	t12 = ((x129==x130)%(x131<=x132));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x149 = -62;
	int8_t x151 = 1;
	int8_t x152 = 6;
	volatile int32_t t13 = -625;

	t13 = ((x149==x150)%(x151<=x152));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x154 = -1;
	volatile int32_t x156 = INT32_MIN;
	int32_t t14 = -12161224;

	t14 = ((x153==x154)%(x155<=x156));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = INT64_MIN;
	uint16_t x159 = 0U;
	int64_t x160 = INT64_MAX;
	volatile int32_t t15 = -1569041;

	t15 = ((x157==x158)%(x159<=x160));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x161 = 2063LL;
	uint16_t x162 = 4080U;
	uint8_t x164 = UINT8_MAX;

	t16 = ((x161==x162)%(x163<=x164));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x173 = 3790U;
	static int64_t x175 = INT64_MIN;
	uint16_t x176 = UINT16_MAX;

	t17 = ((x173==x174)%(x175<=x176));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x177 = 378323U;
	uint32_t x178 = UINT32_MAX;
	static volatile int16_t x179 = 4849;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t18 = -3;

	t18 = ((x177==x178)%(x179<=x180));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x183 = 16;
	int16_t x184 = INT16_MAX;
	volatile int32_t t19 = 115;

	t19 = ((x181==x182)%(x183<=x184));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x194 = -1LL;
	int16_t x196 = 2913;

	t20 = ((x193==x194)%(x195<=x196));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x209 = -28;
	static int16_t x210 = -49;
	static int32_t x211 = INT32_MIN;
	int8_t x212 = -15;

	t21 = ((x209==x210)%(x211<=x212));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x213 = 14;
	int16_t x215 = -1;
	uint16_t x216 = 8110U;
	int32_t t22 = 1;

	t22 = ((x213==x214)%(x215<=x216));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MIN;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t23 = 114165;

	t23 = ((x261==x262)%(x263<=x264));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x266 = -1;
	static volatile uint8_t x267 = UINT8_MAX;
	static int32_t x268 = INT32_MAX;
	int32_t t24 = -196516;

	t24 = ((x265==x266)%(x267<=x268));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x270 = 23;
	uint8_t x272 = 42U;
	volatile int32_t t25 = 62448716;

	t25 = ((x269==x270)%(x271<=x272));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = -138593425587983372LL;
	static uint32_t x276 = 115390388U;
	volatile int32_t t26 = -29669;

	t26 = ((x273==x274)%(x275<=x276));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x281 = INT8_MIN;
	int16_t x282 = 9538;
	int16_t x284 = INT16_MAX;
	static volatile int32_t t27 = 267018458;

	t27 = ((x281==x282)%(x283<=x284));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x293 = INT16_MIN;
	volatile uint64_t x294 = UINT64_MAX;
	int16_t x295 = -1;
	int8_t x296 = INT8_MAX;

	t28 = ((x293==x294)%(x295<=x296));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x309 = 2489061;
	static uint16_t x310 = 181U;
	uint32_t x312 = 263U;
	int32_t t29 = 0;

	t29 = ((x309==x310)%(x311<=x312));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x313 = INT8_MAX;
	static int64_t x314 = 205LL;
	int8_t x315 = INT8_MIN;
	volatile int32_t x316 = INT32_MAX;
	int32_t t30 = 24692453;

	t30 = ((x313==x314)%(x315<=x316));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x318 = -1LL;
	int32_t x320 = INT32_MIN;
	int32_t t31 = -8;

	t31 = ((x317==x318)%(x319<=x320));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x325 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	volatile int32_t x328 = -142;

	t32 = ((x325==x326)%(x327<=x328));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x361 = INT16_MAX;
	uint8_t x362 = 4U;
	int8_t x363 = INT8_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	static volatile int32_t t33 = -3575;

	t33 = ((x361==x362)%(x363<=x364));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x365 = -10988;
	int16_t x366 = 463;
	static uint32_t x367 = 125833U;
	static uint32_t x368 = UINT32_MAX;

	t34 = ((x365==x366)%(x367<=x368));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x369 = 15103;
	volatile int32_t x370 = INT32_MIN;
	uint16_t x372 = UINT16_MAX;

	t35 = ((x369==x370)%(x371<=x372));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x373 = INT8_MIN;
	volatile int8_t x374 = INT8_MAX;

	t36 = ((x373==x374)%(x375<=x376));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x379 = -496;
	int16_t x380 = 7;

	t37 = ((x377==x378)%(x379<=x380));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x381 = INT64_MAX;
	uint64_t x382 = 116426949940063LLU;
	int16_t x383 = -1554;

	t38 = ((x381==x382)%(x383<=x384));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x386 = INT64_MIN;
	volatile uint64_t x387 = 232793950LLU;
	int16_t x388 = INT16_MIN;
	volatile int32_t t39 = 99;

	t39 = ((x385==x386)%(x387<=x388));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x393 = 14893068U;
	static volatile int8_t x394 = INT8_MAX;
	uint32_t x395 = 10654557U;
	volatile int32_t x396 = INT32_MIN;
	int32_t t40 = -1083;

	t40 = ((x393==x394)%(x395<=x396));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x401 = UINT8_MAX;
	int64_t x402 = INT64_MAX;
	volatile int16_t x403 = -811;
	static int32_t t41 = -135;

	t41 = ((x401==x402)%(x403<=x404));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x405 = INT32_MIN;
	int16_t x406 = -1;
	int64_t x408 = 1LL;
	int32_t t42 = 356;

	t42 = ((x405==x406)%(x407<=x408));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x409 = INT64_MIN;
	volatile int32_t x411 = 50;
	static uint64_t x412 = 2947091853487373LLU;
	static int32_t t43 = -11;

	t43 = ((x409==x410)%(x411<=x412));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x413 = UINT16_MAX;
	int16_t x414 = 1;
	volatile int32_t x415 = -492954;
	volatile uint8_t x416 = UINT8_MAX;
	int32_t t44 = 22524;

	t44 = ((x413==x414)%(x415<=x416));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x429 = 4;
	int32_t x430 = -1488;
	int64_t x431 = -183785LL;
	int8_t x432 = INT8_MIN;
	int32_t t45 = -117;

	t45 = ((x429==x430)%(x431<=x432));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x445 = 5U;
	uint32_t x448 = 27288U;

	t46 = ((x445==x446)%(x447<=x448));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x449 = 14;
	int8_t x451 = INT8_MIN;
	int32_t x452 = INT32_MAX;

	t47 = ((x449==x450)%(x451<=x452));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x457 = INT32_MIN;
	int16_t x458 = INT16_MIN;
	volatile int16_t x459 = -11529;
	int8_t x460 = INT8_MIN;
	int32_t t48 = 793;

	t48 = ((x457==x458)%(x459<=x460));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x465 = 12133225;
	static int64_t x466 = 4014184266LL;
	static int8_t x467 = -1;
	volatile uint16_t x468 = 12U;
	int32_t t49 = -31576381;

	t49 = ((x465==x466)%(x467<=x468));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x473 = UINT64_MAX;
	volatile int32_t x474 = 38841328;
	volatile uint64_t x475 = 96334786780458047LLU;
	int8_t x476 = -1;

	t50 = ((x473==x474)%(x475<=x476));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x477 = INT8_MIN;
	volatile int8_t x478 = INT8_MIN;
	int64_t x479 = -905347132451411LL;
	int8_t x480 = 7;

	t51 = ((x477==x478)%(x479<=x480));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x481 = 110U;
	uint16_t x482 = 6711U;
	int8_t x483 = INT8_MAX;
	uint32_t x484 = 4663U;
	int32_t t52 = -183633;

	t52 = ((x481==x482)%(x483<=x484));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x485 = -261904971;
	static uint16_t x486 = 25830U;
	volatile int8_t x487 = -1;
	volatile int32_t x488 = INT32_MAX;
	volatile int32_t t53 = -76720285;

	t53 = ((x485==x486)%(x487<=x488));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x489 = INT8_MIN;
	uint8_t x492 = UINT8_MAX;
	int32_t t54 = -31775;

	t54 = ((x489==x490)%(x491<=x492));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x493 = UINT32_MAX;
	int16_t x495 = INT16_MIN;
	uint8_t x496 = 121U;
	int32_t t55 = 485127755;

	t55 = ((x493==x494)%(x495<=x496));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x498 = 1U;
	int8_t x499 = -1;
	static int32_t x500 = 2;
	int32_t t56 = -62886;

	t56 = ((x497==x498)%(x499<=x500));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x501 = 519720549U;
	int64_t x502 = INT64_MAX;
	uint8_t x503 = 3U;
	static int16_t x504 = INT16_MAX;

	t57 = ((x501==x502)%(x503<=x504));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x513 = -1;
	int64_t x516 = INT64_MAX;
	volatile int32_t t58 = -34;

	t58 = ((x513==x514)%(x515<=x516));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x517 = INT64_MIN;
	int16_t x518 = INT16_MIN;
	static uint64_t x519 = 738532425LLU;
	static int32_t x520 = -1;
	int32_t t59 = 41870291;

	t59 = ((x517==x518)%(x519<=x520));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x521 = 8732481988717LLU;
	int32_t x522 = INT32_MAX;
	uint64_t x524 = 36769579077174479LLU;
	volatile int32_t t60 = 513223079;

	t60 = ((x521==x522)%(x523<=x524));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x531 = INT16_MIN;
	int16_t x532 = 1608;
	volatile int32_t t61 = -51697;

	t61 = ((x529==x530)%(x531<=x532));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x549 = INT32_MIN;
	int8_t x551 = INT8_MIN;
	static uint16_t x552 = 106U;
	int32_t t62 = -16095102;

	t62 = ((x549==x550)%(x551<=x552));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x569 = UINT64_MAX;
	uint32_t x570 = 185767413U;
	int16_t x571 = INT16_MIN;
	int64_t x572 = -1LL;
	static volatile int32_t t63 = -25227282;

	t63 = ((x569==x570)%(x571<=x572));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x573 = -49;
	int16_t x575 = -1;
	int64_t x576 = INT64_MAX;

	t64 = ((x573==x574)%(x575<=x576));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x577 = 1U;
	int64_t x579 = INT64_MIN;
	volatile int32_t x580 = -829;

	t65 = ((x577==x578)%(x579<=x580));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x585 = 1140515064716091LL;
	static int64_t x586 = -4001650111641825LL;
	static volatile int32_t x587 = INT32_MIN;
	static uint64_t x588 = UINT64_MAX;
	int32_t t66 = 3535839;

	t66 = ((x585==x586)%(x587<=x588));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x594 = INT8_MIN;
	static uint8_t x595 = 1U;
	volatile int16_t x596 = 6;

	t67 = ((x593==x594)%(x595<=x596));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x599 = INT32_MAX;
	int32_t t68 = -3;

	t68 = ((x597==x598)%(x599<=x600));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x601 = INT32_MIN;
	static uint64_t x602 = UINT64_MAX;
	int32_t x604 = -343;
	volatile int32_t t69 = 0;

	t69 = ((x601==x602)%(x603<=x604));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x609 = INT16_MIN;
	static int16_t x610 = -4;
	volatile int8_t x612 = INT8_MIN;
	volatile int32_t t70 = 32164730;

	t70 = ((x609==x610)%(x611<=x612));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x613 = 504U;
	int8_t x614 = INT8_MIN;
	int32_t x615 = 8;

	t71 = ((x613==x614)%(x615<=x616));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x617 = 2481487LL;
	volatile int64_t x618 = 743242198723LL;
	static volatile int64_t x619 = INT64_MIN;
	volatile int16_t x620 = INT16_MIN;

	t72 = ((x617==x618)%(x619<=x620));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x621 = 107847629922LL;
	static uint32_t x622 = 1720253U;
	int64_t x623 = -9739732693LL;
	volatile int32_t t73 = -130172;

	t73 = ((x621==x622)%(x623<=x624));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x625 = -1;
	int32_t x627 = -255;
	int8_t x628 = -1;

	t74 = ((x625==x626)%(x627<=x628));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x633 = -1;
	int8_t x634 = -1;
	uint64_t x635 = 141LLU;
	int16_t x636 = -488;
	volatile int32_t t75 = 756733885;

	t75 = ((x633==x634)%(x635<=x636));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x637 = INT8_MAX;
	int64_t x638 = -1LL;
	int32_t x639 = 0;
	int64_t x640 = 2985010681140LL;
	static volatile int32_t t76 = 1;

	t76 = ((x637==x638)%(x639<=x640));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x641 = 3LLU;
	uint64_t x642 = 76900836093363340LLU;
	uint64_t x643 = 26135756166LLU;

	t77 = ((x641==x642)%(x643<=x644));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x645 = 93U;
	static int32_t x646 = INT32_MIN;
	int32_t x647 = INT32_MIN;
	int32_t t78 = 1767;

	t78 = ((x645==x646)%(x647<=x648));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x649 = INT16_MAX;
	int16_t x650 = INT16_MAX;
	int8_t x651 = 0;
	static uint16_t x652 = UINT16_MAX;
	volatile int32_t t79 = -94024;

	t79 = ((x649==x650)%(x651<=x652));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x657 = UINT16_MAX;
	int64_t x658 = -2700426756229LL;
	static volatile int32_t x659 = -67;
	static int32_t t80 = 1939859;

	t80 = ((x657==x658)%(x659<=x660));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x665 = UINT64_MAX;
	int8_t x666 = 27;
	static int16_t x667 = -1;
	uint32_t x668 = UINT32_MAX;

	t81 = ((x665==x666)%(x667<=x668));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x681 = 390750435U;
	int32_t x682 = -109063;
	int64_t x683 = INT64_MIN;

	t82 = ((x681==x682)%(x683<=x684));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x686 = INT8_MAX;
	uint8_t x688 = 0U;
	volatile int32_t t83 = 3;

	t83 = ((x685==x686)%(x687<=x688));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x689 = -1;
	volatile int8_t x690 = 20;
	static int16_t x691 = 5;
	int16_t x692 = 3347;
	volatile int32_t t84 = 1313;

	t84 = ((x689==x690)%(x691<=x692));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x697 = 43815404;
	volatile int16_t x698 = -1;
	int64_t x699 = INT64_MIN;
	int64_t x700 = 16232011LL;
	volatile int32_t t85 = 64532108;

	t85 = ((x697==x698)%(x699<=x700));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x705 = 5114255U;
	uint32_t x706 = UINT32_MAX;
	int8_t x707 = -1;
	int32_t x708 = INT32_MAX;
	int32_t t86 = 536162165;

	t86 = ((x705==x706)%(x707<=x708));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x709 = -1;
	static volatile int8_t x710 = INT8_MAX;
	uint8_t x711 = 7U;
	uint8_t x712 = 114U;
	volatile int32_t t87 = -77;

	t87 = ((x709==x710)%(x711<=x712));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x717 = 1;
	int8_t x720 = INT8_MIN;

	t88 = ((x717==x718)%(x719<=x720));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x725 = 615074582LL;
	static int16_t x727 = INT16_MIN;
	int16_t x728 = -1;

	t89 = ((x725==x726)%(x727<=x728));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x750 = 7975U;
	int32_t x752 = -1;
	static volatile int32_t t90 = 291612231;

	t90 = ((x749==x750)%(x751<=x752));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x765 = UINT8_MAX;
	uint64_t x766 = 5020870709717LLU;
	static volatile uint32_t x767 = 8176807U;
	volatile int16_t x768 = -7;
	int32_t t91 = 3512157;

	t91 = ((x765==x766)%(x767<=x768));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x769 = -1LL;
	uint8_t x770 = 47U;
	volatile int32_t t92 = -1054;

	t92 = ((x769==x770)%(x771<=x772));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x777 = INT64_MIN;
	uint32_t x779 = UINT32_MAX;
	int16_t x780 = -1;
	volatile int32_t t93 = 121;

	t93 = ((x777==x778)%(x779<=x780));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x789 = -1;
	int64_t x790 = INT64_MIN;
	volatile int32_t x791 = -1;
	int32_t t94 = 3;

	t94 = ((x789==x790)%(x791<=x792));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x793 = UINT64_MAX;
	static int16_t x794 = 229;
	int32_t x796 = INT32_MAX;

	t95 = ((x793==x794)%(x795<=x796));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x809 = INT64_MIN;
	int64_t x810 = INT64_MIN;
	int16_t x811 = -1;
	uint8_t x812 = 0U;
	int32_t t96 = 217;

	t96 = ((x809==x810)%(x811<=x812));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x814 = 1223LLU;
	uint64_t x815 = 31780LLU;
	volatile int64_t x816 = INT64_MIN;
	static int32_t t97 = -450498978;

	t97 = ((x813==x814)%(x815<=x816));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x817 = 8187;
	static int8_t x818 = INT8_MIN;
	static uint32_t x819 = 1345336535U;
	static int32_t x820 = INT32_MIN;
	volatile int32_t t98 = 180604975;

	t98 = ((x817==x818)%(x819<=x820));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x827 = INT64_MIN;

	t99 = ((x825==x826)%(x827<=x828));

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

