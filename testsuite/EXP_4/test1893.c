#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 26U;
int16_t x2 = -1376;
uint8_t x4 = UINT8_MAX;
int32_t t1 = -261754387;
int8_t x39 = INT8_MIN;
int32_t x41 = INT32_MAX;
int64_t x47 = -1173193LL;
uint8_t x48 = UINT8_MAX;
uint32_t x51 = 1U;
int64_t x60 = INT64_MAX;
volatile int32_t t11 = 2033;
int16_t x79 = INT16_MIN;
static int64_t x80 = -284870937641919572LL;
volatile int64_t x109 = 7047888742948327LL;
static int16_t x111 = -421;
int8_t x114 = INT8_MIN;
int32_t x115 = INT32_MIN;
volatile int8_t x116 = INT8_MIN;
volatile int16_t x117 = -1;
int32_t t19 = -10;
volatile int8_t x123 = 20;
int32_t t20 = 270;
uint8_t x139 = UINT8_MAX;
int16_t x140 = 3689;
int8_t x149 = 1;
static int8_t x150 = -1;
static int16_t x151 = INT16_MIN;
int64_t x153 = INT64_MIN;
int64_t x160 = -1LL;
static volatile int32_t t30 = -541744637;
volatile uint16_t x174 = UINT16_MAX;
static int16_t x175 = INT16_MIN;
int32_t t31 = 53914;
static uint8_t x190 = 110U;
volatile int8_t x194 = -1;
uint16_t x195 = 4038U;
int16_t x196 = INT16_MAX;
uint8_t x212 = 46U;
volatile int32_t t39 = -125282;
static int32_t t41 = -7942966;
uint16_t x240 = 14892U;
int8_t x256 = -1;
volatile int64_t x262 = -6458046100421LL;
volatile int16_t x265 = -10;
volatile int32_t t46 = 970664368;
int64_t x269 = -263754LL;
static int64_t x270 = -1LL;
volatile int8_t x272 = INT8_MIN;
int64_t x291 = -1LL;
uint64_t x297 = UINT64_MAX;
int16_t x298 = INT16_MIN;
static uint64_t x303 = 85403230739218LLU;
volatile int8_t x311 = -1;
static int16_t x318 = -1;
int32_t x320 = INT32_MIN;
int32_t x323 = INT32_MAX;
int8_t x324 = -1;
static uint8_t x328 = UINT8_MAX;
int64_t x337 = INT64_MIN;
int32_t t57 = -10999886;
volatile uint64_t x361 = 271489LLU;
static int32_t t62 = 437878743;
int16_t x372 = INT16_MIN;
uint64_t x377 = 6190870952LLU;
int32_t x379 = INT32_MIN;
int32_t x384 = INT32_MAX;
int32_t t66 = 635;
volatile int32_t t68 = 356283770;
int32_t x393 = INT32_MAX;
static volatile int8_t x394 = 38;
int64_t x395 = INT64_MAX;
int16_t x398 = INT16_MAX;
volatile uint16_t x407 = UINT16_MAX;
volatile int64_t x412 = INT64_MIN;
volatile uint32_t x417 = 1787289U;
uint32_t x419 = 3004083U;
static uint8_t x426 = 3U;
volatile int16_t x432 = INT16_MIN;
int32_t t78 = -14;
static uint32_t x436 = 325256U;
volatile uint64_t x439 = UINT64_MAX;
int8_t x451 = INT8_MIN;
volatile uint16_t x484 = 895U;
volatile int32_t x490 = -827;
uint8_t x491 = UINT8_MAX;
volatile int32_t t90 = 44717245;
uint8_t x498 = UINT8_MAX;
uint8_t x499 = UINT8_MAX;
volatile int32_t t91 = -1;
static int16_t x502 = INT16_MIN;
volatile uint16_t x503 = 8U;
volatile int32_t t92 = -447309;
int64_t x506 = 13931LL;
int8_t x508 = INT8_MAX;
volatile int32_t t96 = 668467;
volatile int32_t t97 = 8913659;
static uint64_t x538 = UINT64_MAX;


void f0(void) {
	int32_t x3 = -1;
	int32_t t0 = 26569205;

	t0 = (x1==(x2*(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 12;
	volatile int32_t x6 = -1;
	static volatile int8_t x7 = 15;
	static int64_t x8 = INT64_MIN;

	t1 = (x5==(x6*(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 2884LL;
	int8_t x14 = -10;
	int16_t x15 = -1;
	static uint32_t x16 = 120U;
	static int32_t t2 = 21577;

	t2 = (x13==(x14*(x15|x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x25 = 44U;
	static int8_t x26 = INT8_MIN;
	int32_t x27 = -1;
	int32_t x28 = 74271;
	static int32_t t3 = -7;

	t3 = (x25==(x26*(x27|x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x37 = UINT32_MAX;
	uint8_t x38 = 61U;
	int32_t x40 = 54071;
	int32_t t4 = -78219;

	t4 = (x37==(x38*(x39|x40)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x42 = -1;
	uint64_t x43 = 33450677649LLU;
	volatile uint32_t x44 = 66402014U;
	int32_t t5 = 26746;

	t5 = (x41==(x42*(x43|x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x45 = -1LL;
	int8_t x46 = 1;
	int32_t t6 = 9;

	t6 = (x45==(x46*(x47|x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MAX;
	static int8_t x50 = -1;
	int8_t x52 = INT8_MIN;
	int32_t t7 = 489146;

	t7 = (x49==(x50*(x51|x52)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x53 = 506U;
	uint64_t x54 = 13310570857964770LLU;
	int8_t x55 = INT8_MIN;
	volatile int16_t x56 = 50;
	static int32_t t8 = -1;

	t8 = (x53==(x54*(x55|x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = INT8_MAX;
	volatile int32_t x58 = -1;
	int32_t x59 = INT32_MAX;
	volatile int32_t t9 = 3;

	t9 = (x57==(x58*(x59|x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x61 = INT32_MIN;
	uint64_t x62 = 100305769912838721LLU;
	volatile int64_t x63 = INT64_MAX;
	uint16_t x64 = UINT16_MAX;
	static volatile int32_t t10 = 15658730;

	t10 = (x61==(x62*(x63|x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = -31LL;
	int8_t x66 = -1;
	volatile uint16_t x67 = 20U;
	uint32_t x68 = 740U;

	t11 = (x65==(x66*(x67|x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x69 = 56;
	volatile int16_t x70 = INT16_MAX;
	uint64_t x71 = 260960LLU;
	int16_t x72 = -1;
	volatile int32_t t12 = -14000;

	t12 = (x69==(x70*(x71|x72)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x77 = -1;
	uint32_t x78 = 567U;
	volatile int32_t t13 = 31473;

	t13 = (x77==(x78*(x79|x80)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = 165;
	int16_t x86 = INT16_MIN;
	int32_t x87 = -1;
	int64_t x88 = INT64_MIN;
	volatile int32_t t14 = -1194307;

	t14 = (x85==(x86*(x87|x88)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 407586384LLU;
	static int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t15 = -3057796;

	t15 = (x89==(x90*(x91|x92)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 6868564U;
	int32_t x107 = INT32_MAX;
	volatile uint32_t x108 = 61U;
	volatile int32_t t16 = 973117;

	t16 = (x105==(x106*(x107|x108)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x110 = -1LL;
	static int32_t x112 = 232414;
	volatile int32_t t17 = -419219;

	t17 = (x109==(x110*(x111|x112)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = 15688181288527LL;
	int32_t t18 = 21;

	t18 = (x113==(x114*(x115|x116)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x118 = -7;
	static volatile int8_t x119 = -26;
	uint16_t x120 = 147U;

	t19 = (x117==(x118*(x119|x120)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x121 = INT64_MIN;
	volatile int8_t x122 = INT8_MIN;
	uint64_t x124 = UINT64_MAX;

	t20 = (x121==(x122*(x123|x124)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x129 = 1042138LLU;
	volatile uint16_t x130 = 7U;
	uint16_t x131 = UINT16_MAX;
	uint16_t x132 = 117U;
	int32_t t21 = 30;

	t21 = (x129==(x130*(x131|x132)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = 204131585U;
	volatile uint32_t x135 = UINT32_MAX;
	static volatile int32_t x136 = 1420;
	volatile int32_t t22 = 436;

	t22 = (x133==(x134*(x135|x136)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x137 = UINT16_MAX;
	uint32_t x138 = 431U;
	volatile int32_t t23 = 2;

	t23 = (x137==(x138*(x139|x140)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x141 = 98U;
	int64_t x142 = -9737783LL;
	volatile int64_t x143 = 12LL;
	uint64_t x144 = UINT64_MAX;
	static volatile int32_t t24 = 10;

	t24 = (x141==(x142*(x143|x144)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x145 = 269726782060LLU;
	int32_t x146 = INT32_MIN;
	volatile int64_t x147 = -1LL;
	int64_t x148 = -1144430307909LL;
	int32_t t25 = 14648;

	t25 = (x145==(x146*(x147|x148)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t26 = -8152;

	t26 = (x149==(x150*(x151|x152)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x154 = INT32_MIN;
	static int16_t x155 = -246;
	uint64_t x156 = UINT64_MAX;
	static volatile int32_t t27 = -5;

	t27 = (x153==(x154*(x155|x156)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x157 = -24;
	uint16_t x158 = 46U;
	uint64_t x159 = UINT64_MAX;
	int32_t t28 = 0;

	t28 = (x157==(x158*(x159|x160)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = -2;
	int32_t x163 = INT32_MIN;
	int64_t x164 = -849613581108742497LL;
	int32_t t29 = 2;

	t29 = (x161==(x162*(x163|x164)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x165 = UINT64_MAX;
	volatile uint8_t x166 = UINT8_MAX;
	static uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MAX;

	t30 = (x165==(x166*(x167|x168)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = INT8_MIN;
	int64_t x176 = 0LL;

	t31 = (x173==(x174*(x175|x176)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x177 = 659609609LLU;
	int8_t x178 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t32 = -11733;

	t32 = (x177==(x178*(x179|x180)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x181 = UINT32_MAX;
	static uint8_t x182 = UINT8_MAX;
	static int8_t x183 = -1;
	int8_t x184 = INT8_MIN;
	volatile int32_t t33 = -10661503;

	t33 = (x181==(x182*(x183|x184)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x189 = -1;
	static volatile int64_t x191 = -241904LL;
	uint8_t x192 = 25U;
	volatile int32_t t34 = 1;

	t34 = (x189==(x190*(x191|x192)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x193 = -1;
	int32_t t35 = 1;

	t35 = (x193==(x194*(x195|x196)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x201 = 29;
	volatile uint8_t x202 = 19U;
	int32_t x203 = INT32_MIN;
	uint64_t x204 = 29750815702955LLU;
	volatile int32_t t36 = 25042;

	t36 = (x201==(x202*(x203|x204)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x209 = 26965164;
	static int8_t x210 = INT8_MIN;
	uint8_t x211 = 11U;
	volatile int32_t t37 = 32;

	t37 = (x209==(x210*(x211|x212)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = INT64_MAX;
	volatile int64_t x214 = INT64_MAX;
	int8_t x215 = -1;
	int64_t x216 = 207077740356680LL;
	int32_t t38 = 42013536;

	t38 = (x213==(x214*(x215|x216)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint8_t x218 = UINT8_MAX;
	static volatile int64_t x219 = INT64_MAX;
	static int64_t x220 = INT64_MIN;

	t39 = (x217==(x218*(x219|x220)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x225 = 2U;
	uint16_t x226 = UINT16_MAX;
	static uint32_t x227 = 532018992U;
	static int64_t x228 = -1LL;
	int32_t t40 = -11548;

	t40 = (x225==(x226*(x227|x228)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x229 = INT64_MAX;
	int32_t x230 = INT32_MAX;
	volatile int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MIN;

	t41 = (x229==(x230*(x231|x232)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	int8_t x239 = -7;
	static int32_t t42 = -1054271439;

	t42 = (x237==(x238*(x239|x240)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x241 = 3U;
	int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t43 = -7928;

	t43 = (x241==(x242*(x243|x244)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = 23;
	static volatile int16_t x254 = 6390;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t t44 = 15825;

	t44 = (x253==(x254*(x255|x256)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x261 = -1;
	int16_t x263 = INT16_MIN;
	static uint8_t x264 = 1U;
	volatile int32_t t45 = -94497;

	t45 = (x261==(x262*(x263|x264)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x266 = UINT64_MAX;
	static uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MIN;

	t46 = (x265==(x266*(x267|x268)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x271 = UINT8_MAX;
	int32_t t47 = -5230152;

	t47 = (x269==(x270*(x271|x272)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x277 = 376481LLU;
	int32_t x278 = -1;
	uint16_t x279 = UINT16_MAX;
	uint16_t x280 = 438U;
	int32_t t48 = 3341;

	t48 = (x277==(x278*(x279|x280)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x289 = 3895252U;
	static int8_t x290 = INT8_MAX;
	volatile int64_t x292 = -93LL;
	volatile int32_t t49 = -147;

	t49 = (x289==(x290*(x291|x292)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x299 = -49;
	int16_t x300 = INT16_MIN;
	int32_t t50 = 1248;

	t50 = (x297==(x298*(x299|x300)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x301 = INT64_MAX;
	int8_t x302 = 39;
	int32_t x304 = 1742636;
	static int32_t t51 = -3860255;

	t51 = (x301==(x302*(x303|x304)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = -1;
	volatile int16_t x310 = INT16_MIN;
	static uint64_t x312 = UINT64_MAX;
	int32_t t52 = -598925927;

	t52 = (x309==(x310*(x311|x312)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x317 = -1;
	uint8_t x319 = UINT8_MAX;
	int32_t t53 = 5;

	t53 = (x317==(x318*(x319|x320)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x321 = 1U;
	uint64_t x322 = 4739623990960LLU;
	int32_t t54 = 0;

	t54 = (x321==(x322*(x323|x324)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x325 = INT64_MIN;
	static volatile uint64_t x326 = 1354427LLU;
	static volatile int32_t x327 = -1;
	volatile int32_t t55 = -253;

	t55 = (x325==(x326*(x327|x328)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x333 = 9544U;
	uint16_t x334 = 868U;
	static int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MIN;
	int32_t t56 = 8;

	t56 = (x333==(x334*(x335|x336)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;
	static uint64_t x340 = 6369603LLU;

	t57 = (x337==(x338*(x339|x340)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = -130LL;
	int32_t x343 = -1;
	volatile uint32_t x344 = 5671128U;
	int32_t t58 = -821152541;

	t58 = (x341==(x342*(x343|x344)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x345 = INT8_MIN;
	static int16_t x346 = -1;
	volatile uint8_t x347 = UINT8_MAX;
	int32_t x348 = -3946;
	int32_t t59 = -6641;

	t59 = (x345==(x346*(x347|x348)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x349 = -102812108LL;
	static int32_t x350 = -1;
	uint32_t x351 = 1U;
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t60 = -4360459;

	t60 = (x349==(x350*(x351|x352)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x353 = 1;
	int32_t x354 = INT32_MIN;
	uint8_t x355 = 1U;
	static int64_t x356 = -1LL;
	volatile int32_t t61 = 78808328;

	t61 = (x353==(x354*(x355|x356)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x362 = 324U;
	volatile int64_t x363 = 22753055481303161LL;
	static int32_t x364 = INT32_MAX;

	t62 = (x361==(x362*(x363|x364)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x369 = 1847608LLU;
	int32_t x370 = 1825;
	int32_t x371 = -49988;
	int32_t t63 = -1828;

	t63 = (x369==(x370*(x371|x372)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x373 = INT64_MAX;
	static int16_t x374 = -6;
	static int16_t x375 = -1;
	uint16_t x376 = 43U;
	static volatile int32_t t64 = -12;

	t64 = (x373==(x374*(x375|x376)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x378 = 167762000U;
	volatile uint16_t x380 = 1444U;
	int32_t t65 = 12;

	t65 = (x377==(x378*(x379|x380)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MIN;
	int64_t x383 = -1LL;

	t66 = (x381==(x382*(x383|x384)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x385 = INT32_MIN;
	volatile uint8_t x386 = 10U;
	volatile int32_t x387 = -982;
	int16_t x388 = INT16_MIN;
	int32_t t67 = -22492;

	t67 = (x385==(x386*(x387|x388)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x389 = INT8_MIN;
	int16_t x390 = -1;
	int8_t x391 = 1;
	volatile uint64_t x392 = 112507862LLU;

	t68 = (x389==(x390*(x391|x392)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x396 = -12959845LL;
	int32_t t69 = 2994792;

	t69 = (x393==(x394*(x395|x396)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x397 = INT64_MAX;
	int8_t x399 = 10;
	volatile int16_t x400 = -6797;
	volatile int32_t t70 = -9077;

	t70 = (x397==(x398*(x399|x400)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = -1;
	static int16_t x403 = -1;
	uint16_t x404 = UINT16_MAX;
	int32_t t71 = -715576239;

	t71 = (x401==(x402*(x403|x404)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x405 = -106;
	int8_t x406 = INT8_MIN;
	int8_t x408 = INT8_MAX;
	int32_t t72 = -342;

	t72 = (x405==(x406*(x407|x408)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x409 = UINT32_MAX;
	static int16_t x410 = INT16_MAX;
	int8_t x411 = -1;
	static volatile int32_t t73 = 2;

	t73 = (x409==(x410*(x411|x412)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x413 = -1;
	uint64_t x414 = 33442648LLU;
	int64_t x415 = INT64_MAX;
	static int16_t x416 = INT16_MAX;
	static volatile int32_t t74 = -1;

	t74 = (x413==(x414*(x415|x416)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x418 = -1;
	int32_t x420 = -31651038;
	int32_t t75 = -444700;

	t75 = (x417==(x418*(x419|x420)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x421 = 79U;
	static int8_t x422 = -14;
	uint32_t x423 = 2872U;
	int16_t x424 = 92;
	int32_t t76 = 1078294;

	t76 = (x421==(x422*(x423|x424)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x425 = 8462U;
	int64_t x427 = 70175LL;
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t77 = -106250;

	t77 = (x425==(x426*(x427|x428)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x429 = 22;
	int32_t x430 = -1685;
	int64_t x431 = INT64_MIN;

	t78 = (x429==(x430*(x431|x432)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x433 = -1LL;
	int32_t x434 = -6663;
	int8_t x435 = INT8_MIN;
	volatile int32_t t79 = 60;

	t79 = (x433==(x434*(x435|x436)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x437 = UINT16_MAX;
	static volatile int64_t x438 = INT64_MIN;
	int16_t x440 = 438;
	volatile int32_t t80 = 1892233;

	t80 = (x437==(x438*(x439|x440)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = INT64_MIN;
	int8_t x446 = 1;
	static int64_t x447 = INT64_MIN;
	static int16_t x448 = -1;
	volatile int32_t t81 = -5759;

	t81 = (x445==(x446*(x447|x448)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x449 = INT8_MIN;
	uint64_t x450 = UINT64_MAX;
	volatile uint64_t x452 = 113102473LLU;
	volatile int32_t t82 = 2895;

	t82 = (x449==(x450*(x451|x452)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x453 = UINT64_MAX;
	int64_t x454 = 10083787261248422LL;
	int8_t x455 = -1;
	int64_t x456 = INT64_MAX;
	volatile int32_t t83 = -7545;

	t83 = (x453==(x454*(x455|x456)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x457 = -1LL;
	static volatile uint16_t x458 = 37U;
	int32_t x459 = 945;
	uint16_t x460 = 86U;
	static int32_t t84 = -126;

	t84 = (x457==(x458*(x459|x460)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x465 = 1080155932275757LLU;
	int64_t x466 = -4006LL;
	int8_t x467 = INT8_MIN;
	uint32_t x468 = 34057671U;
	volatile int32_t t85 = 206937;

	t85 = (x465==(x466*(x467|x468)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x473 = INT32_MIN;
	int16_t x474 = 1;
	int64_t x475 = -15LL;
	int64_t x476 = -1LL;
	int32_t t86 = -5770;

	t86 = (x473==(x474*(x475|x476)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x477 = UINT32_MAX;
	static int16_t x478 = -1;
	uint64_t x479 = 3010884373796086LLU;
	int64_t x480 = 4LL;
	int32_t t87 = -90;

	t87 = (x477==(x478*(x479|x480)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x481 = UINT8_MAX;
	int64_t x482 = -38780908LL;
	volatile int16_t x483 = INT16_MIN;
	int32_t t88 = -315553;

	t88 = (x481==(x482*(x483|x484)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x485 = INT8_MIN;
	volatile int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MIN;
	int32_t x488 = -1;
	volatile int32_t t89 = -19;

	t89 = (x485==(x486*(x487|x488)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x489 = INT8_MIN;
	static int16_t x492 = INT16_MIN;

	t90 = (x489==(x490*(x491|x492)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x497 = 46U;
	static int8_t x500 = INT8_MAX;

	t91 = (x497==(x498*(x499|x500)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x501 = 74514;
	int64_t x504 = -135831267778617LL;

	t92 = (x501==(x502*(x503|x504)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x505 = INT16_MIN;
	int8_t x507 = INT8_MIN;
	volatile int32_t t93 = -1;

	t93 = (x505==(x506*(x507|x508)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x509 = INT8_MIN;
	int32_t x510 = -1;
	uint32_t x511 = UINT32_MAX;
	static int16_t x512 = -3;
	volatile int32_t t94 = 0;

	t94 = (x509==(x510*(x511|x512)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x513 = 0U;
	int64_t x514 = 1LL;
	volatile uint32_t x515 = 347073U;
	int64_t x516 = -1LL;
	volatile int32_t t95 = -3584;

	t95 = (x513==(x514*(x515|x516)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x521 = UINT8_MAX;
	volatile int8_t x522 = 0;
	int8_t x523 = -1;
	volatile int32_t x524 = -64608;

	t96 = (x521==(x522*(x523|x524)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x525 = 3U;
	uint64_t x526 = 16191363LLU;
	static volatile uint16_t x527 = UINT16_MAX;
	int16_t x528 = INT16_MAX;

	t97 = (x525==(x526*(x527|x528)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x533 = INT16_MIN;
	static int8_t x534 = -1;
	int8_t x535 = 0;
	volatile int8_t x536 = INT8_MIN;
	static volatile int32_t t98 = 22600021;

	t98 = (x533==(x534*(x535|x536)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x537 = INT16_MIN;
	static int32_t x539 = 822950;
	static volatile uint16_t x540 = 19U;
	volatile int32_t t99 = 119284991;

	t99 = (x537==(x538*(x539|x540)));

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

