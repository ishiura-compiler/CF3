#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x21 = 1480857LLU;
volatile uint32_t t3 = UINT32_MAX;
uint16_t x32 = 129U;
uint32_t x56 = UINT32_MAX;
int8_t x59 = -1;
uint16_t x67 = UINT16_MAX;
uint32_t x74 = 10520U;
volatile uint16_t x95 = 24U;
static uint16_t x101 = 74U;
int64_t x102 = INT64_MIN;
volatile int16_t x106 = INT16_MIN;
static uint8_t x109 = 0U;
static int64_t x114 = INT64_MIN;
volatile int32_t t16 = -971230;
int16_t x126 = -1;
uint64_t x128 = 279955427032565693LLU;
uint16_t x166 = 1U;
static volatile int64_t x168 = INT64_MIN;
int16_t x183 = INT16_MIN;
int8_t x192 = -13;
static uint32_t t25 = 1457431U;
volatile uint32_t t28 = 509620U;
static int16_t x224 = INT16_MAX;
int8_t x232 = INT8_MIN;
static int8_t x243 = INT8_MIN;
uint8_t x254 = 10U;
static int32_t x270 = INT32_MIN;
int64_t x271 = 3LL;
int32_t t40 = -37711564;
volatile int64_t x294 = -1LL;
volatile uint32_t t43 = 3163513U;
volatile int8_t x318 = INT8_MIN;
static uint16_t x333 = UINT16_MAX;
uint8_t x334 = 3U;
static volatile uint16_t x362 = UINT16_MAX;
static int32_t x363 = 52246;
static int8_t x364 = INT8_MIN;
int64_t x376 = -1LL;
static uint64_t t55 = UINT64_MAX;
int64_t x377 = 28541864833205135LL;
int16_t x382 = -1;
int64_t x384 = INT64_MIN;
static volatile uint64_t t57 = UINT64_MAX;
volatile int8_t x385 = INT8_MAX;
static int16_t x387 = INT16_MIN;
int32_t t58 = 120597759;
uint32_t x391 = UINT32_MAX;
volatile int16_t x392 = INT16_MIN;
volatile int32_t t61 = 20322635;
static int8_t x401 = INT8_MAX;
volatile int8_t x402 = -1;
uint32_t x404 = 822920U;
volatile int32_t t62 = -483429606;
static int8_t x418 = -1;
int16_t x429 = 2;
uint32_t x431 = UINT32_MAX;
static volatile int32_t t66 = 1222;
int16_t x434 = -120;
uint16_t x435 = UINT16_MAX;
uint8_t x436 = 11U;
static int16_t x460 = -1;
uint8_t x497 = 3U;
static int8_t x498 = -5;
uint16_t x499 = 2532U;
int32_t t71 = 233857693;
static int32_t x504 = INT32_MAX;
int32_t t72 = -229182;
uint8_t x509 = 16U;
static int32_t x511 = INT32_MAX;
volatile int8_t x512 = INT8_MIN;
int64_t x532 = -27261799LL;
static int16_t x536 = INT16_MAX;
uint8_t x549 = 3U;
int16_t x553 = 16030;
int64_t x557 = 7LL;
uint16_t x565 = 230U;
int64_t x567 = INT64_MIN;
uint64_t x576 = UINT64_MAX;
int8_t x581 = 0;
uint8_t x582 = UINT8_MAX;
uint8_t x584 = 83U;
int32_t x593 = 1;
uint16_t x595 = 4550U;
volatile int32_t t85 = -281;
uint8_t x603 = 0U;
int32_t t86 = 0;
static int16_t x610 = INT16_MIN;
volatile uint16_t x611 = 1U;
int32_t t88 = 381992938;
uint16_t x616 = 69U;
static int32_t t89 = 445;
int64_t t90 = INT64_MAX;
int16_t x626 = INT16_MIN;
static int8_t x627 = INT8_MAX;
volatile uint8_t x629 = 50U;
uint32_t x641 = 105526U;
static int32_t x643 = INT32_MAX;
volatile uint32_t x645 = 8271U;
int64_t x654 = -1LL;
volatile uint64_t x655 = UINT64_MAX;
int64_t x660 = 7697LL;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = 1;
	int32_t x3 = INT32_MAX;
	uint64_t x4 = 642LLU;
	volatile int32_t t0 = 2447;

	t0 = (x1<<(x2==(x3|x4)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = 5;
	int32_t x10 = 541;
	uint32_t x11 = 894767364U;
	int8_t x12 = -11;
	int32_t t1 = 36;

	t1 = (x9<<(x10==(x11|x12)));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x22 = -1161;
	int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t2 = 22679227LLU;

	t2 = (x21<<(x22==(x23|x24)));

	if (t2 != 1480857LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = UINT32_MAX;
	volatile uint16_t x26 = 766U;
	int64_t x27 = -5890LL;
	volatile int8_t x28 = INT8_MIN;

	t3 = (x25<<(x26==(x27|x28)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = INT64_MAX;
	int16_t x30 = INT16_MAX;
	int8_t x31 = INT8_MAX;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x29<<(x30==(x31|x32)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x45 = UINT8_MAX;
	uint32_t x46 = UINT32_MAX;
	volatile int16_t x47 = -980;
	static int64_t x48 = 138613430814527210LL;
	int32_t t5 = -3841;

	t5 = (x45<<(x46==(x47|x48)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x53 = UINT16_MAX;
	int32_t x54 = -804;
	uint8_t x55 = 33U;
	int32_t t6 = -898768442;

	t6 = (x53<<(x54==(x55|x56)));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x57 = 1U;
	uint32_t x58 = 1002370022U;
	int16_t x60 = INT16_MIN;
	int32_t t7 = -241159;

	t7 = (x57<<(x58==(x59|x60)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x66 = 5615;
	int16_t x68 = -1;
	volatile int32_t t8 = 108789;

	t8 = (x65<<(x66==(x67|x68)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x73 = 6U;
	static volatile int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	uint32_t t9 = 885367830U;

	t9 = (x73<<(x74==(x75|x76)));

	if (t9 != 6U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x93 = UINT32_MAX;
	static int64_t x94 = INT64_MAX;
	static volatile int8_t x96 = -1;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x93<<(x94==(x95|x96)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x103 = 25U;
	uint8_t x104 = UINT8_MAX;
	static int32_t t11 = -2951;

	t11 = (x101<<(x102==(x103|x104)));

	if (t11 != 74) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x105 = 24268U;
	uint64_t x107 = 32104943LLU;
	static volatile uint64_t x108 = 2074977383812755LLU;
	volatile int32_t t12 = -96312;

	t12 = (x105<<(x106==(x107|x108)));

	if (t12 != 24268) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x110 = -75359066944LL;
	volatile int8_t x111 = INT8_MIN;
	volatile uint64_t x112 = 50LLU;
	volatile int32_t t13 = 25194;

	t13 = (x109<<(x110==(x111|x112)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x113 = 791822746U;
	static int8_t x115 = -15;
	int64_t x116 = -316246LL;
	uint32_t t14 = 395000609U;

	t14 = (x113<<(x114==(x115|x116)));

	if (t14 != 791822746U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int32_t x118 = -1;
	int8_t x119 = -1;
	int16_t x120 = INT16_MIN;
	static uint32_t t15 = 38394777U;

	t15 = (x117<<(x118==(x119|x120)));

	if (t15 != 4294967294U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	volatile int32_t x124 = INT32_MIN;

	t16 = (x121<<(x122==(x123|x124)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x125 = 1541U;
	int8_t x127 = -3;
	int32_t t17 = -2218;

	t17 = (x125<<(x126==(x127|x128)));

	if (t17 != 1541) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x133 = 4666109926753LL;
	static int16_t x134 = -1;
	volatile uint16_t x135 = UINT16_MAX;
	volatile uint16_t x136 = 7U;
	static volatile int64_t t18 = 1786654LL;

	t18 = (x133<<(x134==(x135|x136)));

	if (t18 != 4666109926753LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x137 = 243;
	volatile int32_t x138 = -1;
	static int16_t x139 = -62;
	int64_t x140 = INT64_MIN;
	volatile int32_t t19 = 104826;

	t19 = (x137<<(x138==(x139|x140)));

	if (t19 != 243) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x145 = INT8_MAX;
	int16_t x146 = INT16_MIN;
	volatile int32_t x147 = -1;
	int16_t x148 = INT16_MAX;
	volatile int32_t t20 = -13461;

	t20 = (x145<<(x146==(x147|x148)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x165 = INT64_MAX;
	static int32_t x167 = INT32_MIN;
	volatile int64_t t21 = INT64_MAX;

	t21 = (x165<<(x166==(x167|x168)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x169 = INT16_MAX;
	int64_t x170 = -363052484LL;
	int16_t x171 = INT16_MAX;
	static int64_t x172 = INT64_MIN;
	volatile int32_t t22 = -30545;

	t22 = (x169<<(x170==(x171|x172)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x173 = 33U;
	static int16_t x174 = INT16_MAX;
	uint8_t x175 = 3U;
	int64_t x176 = -132363394372687787LL;
	int32_t t23 = 9787;

	t23 = (x173<<(x174==(x175|x176)));

	if (t23 != 33) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = -1;
	volatile int8_t x184 = -24;
	static volatile int32_t t24 = -6;

	t24 = (x181<<(x182==(x183|x184)));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x189 = 55118U;
	int16_t x190 = INT16_MIN;
	int32_t x191 = -1;

	t25 = (x189<<(x190==(x191|x192)));

	if (t25 != 55118U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x201 = 1194935662653LLU;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MAX;
	static volatile uint32_t x204 = UINT32_MAX;
	volatile uint64_t t26 = 455221151LLU;

	t26 = (x201<<(x202==(x203|x204)));

	if (t26 != 1194935662653LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x205 = 5LLU;
	int8_t x206 = -1;
	uint32_t x207 = UINT32_MAX;
	volatile uint16_t x208 = 2U;
	static volatile uint64_t t27 = 3LLU;

	t27 = (x205<<(x206==(x207|x208)));

	if (t27 != 10LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x209 = 10U;
	int8_t x210 = -28;
	int32_t x211 = -134;
	int8_t x212 = -1;

	t28 = (x209<<(x210==(x211|x212)));

	if (t28 != 10U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x221 = INT8_MAX;
	int8_t x222 = 0;
	static int16_t x223 = -4892;
	static volatile int32_t t29 = 464667;

	t29 = (x221<<(x222==(x223|x224)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x225 = 1503U;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	static int32_t x228 = INT32_MAX;
	uint32_t t30 = 10081368U;

	t30 = (x225<<(x226==(x227|x228)));

	if (t30 != 1503U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x229 = 39LLU;
	int8_t x230 = INT8_MIN;
	volatile int32_t x231 = -1;
	static uint64_t t31 = 20229185070939028LLU;

	t31 = (x229<<(x230==(x231|x232)));

	if (t31 != 39LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x233 = 182;
	int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t32 = -849355;

	t32 = (x233<<(x234==(x235|x236)));

	if (t32 != 182) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x237 = INT32_MAX;
	volatile uint16_t x238 = 47U;
	static uint8_t x239 = 83U;
	int64_t x240 = -2715534133LL;
	static int32_t t33 = INT32_MAX;

	t33 = (x237<<(x238==(x239|x240)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x241 = UINT16_MAX;
	volatile uint16_t x242 = 0U;
	uint64_t x244 = 2LLU;
	volatile int32_t t34 = 627603;

	t34 = (x241<<(x242==(x243|x244)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x245 = 507009603887LLU;
	int32_t x246 = -1;
	static uint64_t x247 = 164666339LLU;
	uint8_t x248 = UINT8_MAX;
	volatile uint64_t t35 = 13113492LLU;

	t35 = (x245<<(x246==(x247|x248)));

	if (t35 != 507009603887LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x253 = 673711U;
	int32_t x255 = -1;
	int16_t x256 = -5;
	volatile uint32_t t36 = 473U;

	t36 = (x253<<(x254==(x255|x256)));

	if (t36 != 673711U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x257 = 16183LLU;
	static uint8_t x258 = 1U;
	uint32_t x259 = UINT32_MAX;
	int8_t x260 = 0;
	volatile uint64_t t37 = 196068492191LLU;

	t37 = (x257<<(x258==(x259|x260)));

	if (t37 != 16183LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x261 = INT64_MAX;
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = -125946929;
	int64_t x264 = INT64_MIN;
	static volatile int64_t t38 = INT64_MAX;

	t38 = (x261<<(x262==(x263|x264)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x265 = 62;
	int16_t x266 = 20;
	volatile int64_t x267 = INT64_MAX;
	int8_t x268 = INT8_MAX;
	volatile int32_t t39 = -80;

	t39 = (x265<<(x266==(x267|x268)));

	if (t39 != 62) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static volatile uint64_t x272 = 95776160415063778LLU;

	t40 = (x269<<(x270==(x271|x272)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x273 = 60U;
	int64_t x274 = 488LL;
	static uint8_t x275 = 2U;
	volatile int16_t x276 = 3;
	int32_t t41 = -86956604;

	t41 = (x273<<(x274==(x275|x276)));

	if (t41 != 60) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 1984U;
	uint8_t x287 = 11U;
	volatile int64_t x288 = -1LL;
	uint64_t t42 = UINT64_MAX;

	t42 = (x285<<(x286==(x287|x288)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x293 = 116212844U;
	static int32_t x295 = INT32_MAX;
	int16_t x296 = -930;

	t43 = (x293<<(x294==(x295|x296)));

	if (t43 != 232425688U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x297 = 264906028U;
	uint8_t x298 = UINT8_MAX;
	volatile int8_t x299 = -1;
	int16_t x300 = 2316;
	volatile uint32_t t44 = 14U;

	t44 = (x297<<(x298==(x299|x300)));

	if (t44 != 264906028U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x305 = 30641LL;
	uint8_t x306 = 48U;
	static int16_t x307 = -1;
	static uint64_t x308 = 49019118691LLU;
	int64_t t45 = 435965293LL;

	t45 = (x305<<(x306==(x307|x308)));

	if (t45 != 30641LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x309 = 1;
	int32_t x310 = INT32_MIN;
	static int8_t x311 = INT8_MIN;
	uint16_t x312 = 2852U;
	int32_t t46 = 459785590;

	t46 = (x309<<(x310==(x311|x312)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x317 = 10593138LL;
	int16_t x319 = INT16_MIN;
	static int16_t x320 = INT16_MAX;
	volatile int64_t t47 = 971651993680948581LL;

	t47 = (x317<<(x318==(x319|x320)));

	if (t47 != 10593138LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x321 = 1490187645417728458LLU;
	volatile int64_t x322 = INT64_MIN;
	int64_t x323 = -1LL;
	int8_t x324 = -1;
	volatile uint64_t t48 = 55LLU;

	t48 = (x321<<(x322==(x323|x324)));

	if (t48 != 1490187645417728458LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x325 = UINT8_MAX;
	uint8_t x326 = 40U;
	int64_t x327 = INT64_MAX;
	volatile uint32_t x328 = UINT32_MAX;
	int32_t t49 = -2;

	t49 = (x325<<(x326==(x327|x328)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x335 = 115LLU;
	static int32_t x336 = INT32_MAX;
	int32_t t50 = 60;

	t50 = (x333<<(x334==(x335|x336)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x357 = 1847977454222177LL;
	int32_t x358 = INT32_MAX;
	uint8_t x359 = 1U;
	int16_t x360 = INT16_MAX;
	static volatile int64_t t51 = 131467305385507LL;

	t51 = (x357<<(x358==(x359|x360)));

	if (t51 != 1847977454222177LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x361 = INT8_MAX;
	int32_t t52 = -474282794;

	t52 = (x361<<(x362==(x363|x364)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x365 = 28;
	uint32_t x366 = 2256343U;
	int64_t x367 = INT64_MAX;
	volatile int64_t x368 = 763LL;
	volatile int32_t t53 = 2389;

	t53 = (x365<<(x366==(x367|x368)));

	if (t53 != 28) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x369 = 14718U;
	static int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MIN;
	int32_t x372 = INT32_MIN;
	static volatile int32_t t54 = 873359713;

	t54 = (x369<<(x370==(x371|x372)));

	if (t54 != 29436) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x373 = UINT64_MAX;
	uint64_t x374 = 27426138596004LLU;
	int8_t x375 = -42;

	t55 = (x373<<(x374==(x375|x376)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	int8_t x380 = -1;
	volatile int64_t t56 = -3LL;

	t56 = (x377<<(x378==(x379|x380)));

	if (t56 != 28541864833205135LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x381 = UINT64_MAX;
	static int64_t x383 = INT64_MIN;

	t57 = (x381<<(x382==(x383|x384)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x386 = 0;
	int64_t x388 = 159717409922630LL;

	t58 = (x385<<(x386==(x387|x388)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x389 = 6823483591LLU;
	static volatile int64_t x390 = 212128647LL;
	uint64_t t59 = 66582106668823385LLU;

	t59 = (x389<<(x390==(x391|x392)));

	if (t59 != 6823483591LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x393 = INT8_MAX;
	uint16_t x394 = 1746U;
	int8_t x395 = 1;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t60 = 271960638;

	t60 = (x393<<(x394==(x395|x396)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x397 = 2U;
	int8_t x398 = 0;
	int8_t x399 = 0;
	int64_t x400 = 1641919962778414910LL;

	t61 = (x397<<(x398==(x399|x400)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x403 = INT64_MIN;

	t62 = (x401<<(x402==(x403|x404)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x405 = UINT8_MAX;
	uint64_t x406 = 207283233646227LLU;
	uint64_t x407 = 122600687460LLU;
	static int64_t x408 = -1037901079040813LL;
	int32_t t63 = -3097583;

	t63 = (x405<<(x406==(x407|x408)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x417 = 63LLU;
	uint32_t x419 = 0U;
	static int32_t x420 = INT32_MAX;
	static uint64_t t64 = 2518138143529279LLU;

	t64 = (x417<<(x418==(x419|x420)));

	if (t64 != 63LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x425 = 36963885768770753LL;
	static volatile int32_t x426 = INT32_MIN;
	int16_t x427 = 0;
	int32_t x428 = INT32_MAX;
	volatile int64_t t65 = -30464415023165735LL;

	t65 = (x425<<(x426==(x427|x428)));

	if (t65 != 36963885768770753LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x430 = INT8_MIN;
	static int8_t x432 = INT8_MIN;

	t66 = (x429<<(x430==(x431|x432)));

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x433 = UINT8_MAX;
	volatile int32_t t67 = -2480;

	t67 = (x433<<(x434==(x435|x436)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x437 = INT64_MAX;
	static int16_t x438 = -4111;
	int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MAX;
	int64_t t68 = INT64_MAX;

	t68 = (x437<<(x438==(x439|x440)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x457 = 2405LL;
	int8_t x458 = -1;
	int64_t x459 = INT64_MIN;
	volatile int64_t t69 = -239813600819776LL;

	t69 = (x457<<(x458==(x459|x460)));

	if (t69 != 4810LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x461 = UINT8_MAX;
	int16_t x462 = -1;
	volatile int16_t x463 = INT16_MIN;
	volatile int8_t x464 = -7;
	volatile int32_t t70 = 43;

	t70 = (x461<<(x462==(x463|x464)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x500 = 0;

	t71 = (x497<<(x498==(x499|x500)));

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x501 = 6U;
	int64_t x502 = -1LL;
	uint32_t x503 = 490494U;

	t72 = (x501<<(x502==(x503|x504)));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x505 = 18LL;
	int64_t x506 = -1LL;
	static int32_t x507 = -1;
	uint32_t x508 = UINT32_MAX;
	int64_t t73 = 59006773434005LL;

	t73 = (x505<<(x506==(x507|x508)));

	if (t73 != 18LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x510 = 260;
	volatile int32_t t74 = 10367320;

	t74 = (x509<<(x510==(x511|x512)));

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x517 = UINT8_MAX;
	int64_t x518 = INT64_MIN;
	int16_t x519 = -1;
	uint16_t x520 = 201U;
	volatile int32_t t75 = 171705;

	t75 = (x517<<(x518==(x519|x520)));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x529 = 8U;
	static volatile int8_t x530 = INT8_MIN;
	int64_t x531 = 2262429194480647923LL;
	volatile int32_t t76 = -6741;

	t76 = (x529<<(x530==(x531|x532)));

	if (t76 != 8) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x533 = 43128614909777748LLU;
	int64_t x534 = INT64_MIN;
	int16_t x535 = -3;
	static volatile uint64_t t77 = 12256LLU;

	t77 = (x533<<(x534==(x535|x536)));

	if (t77 != 43128614909777748LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x537 = 1LL;
	uint64_t x538 = UINT64_MAX;
	static volatile int64_t x539 = 2049466760675496751LL;
	static int16_t x540 = INT16_MIN;
	static int64_t t78 = 1LL;

	t78 = (x537<<(x538==(x539|x540)));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x550 = INT64_MAX;
	volatile int64_t x551 = -1LL;
	uint64_t x552 = UINT64_MAX;
	int32_t t79 = 154001;

	t79 = (x549<<(x550==(x551|x552)));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x554 = -261914LL;
	static volatile int8_t x555 = INT8_MIN;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t80 = 182;

	t80 = (x553<<(x554==(x555|x556)));

	if (t80 != 16030) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x558 = UINT8_MAX;
	static int16_t x559 = INT16_MAX;
	int32_t x560 = INT32_MIN;
	volatile int64_t t81 = -69236136180LL;

	t81 = (x557<<(x558==(x559|x560)));

	if (t81 != 7LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x566 = INT8_MIN;
	volatile int64_t x568 = -1LL;
	volatile int32_t t82 = -2;

	t82 = (x565<<(x566==(x567|x568)));

	if (t82 != 230) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x573 = INT32_MAX;
	uint32_t x574 = UINT32_MAX;
	static volatile int16_t x575 = INT16_MIN;
	int32_t t83 = INT32_MAX;

	t83 = (x573<<(x574==(x575|x576)));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x583 = INT16_MIN;
	volatile int32_t t84 = 3111;

	t84 = (x581<<(x582==(x583|x584)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x594 = UINT64_MAX;
	uint16_t x596 = UINT16_MAX;

	t85 = (x593<<(x594==(x595|x596)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x601 = 134;
	int8_t x602 = INT8_MAX;
	int16_t x604 = -1;

	t86 = (x601<<(x602==(x603|x604)));

	if (t86 != 134) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x605 = UINT16_MAX;
	int32_t x606 = INT32_MIN;
	uint8_t x607 = 7U;
	static int64_t x608 = 10541920984LL;
	volatile int32_t t87 = -28801683;

	t87 = (x605<<(x606==(x607|x608)));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x609 = 11U;
	uint16_t x612 = 1U;

	t88 = (x609<<(x610==(x611|x612)));

	if (t88 != 11) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x613 = INT16_MAX;
	static int16_t x614 = -1;
	static uint32_t x615 = 32970358U;

	t89 = (x613<<(x614==(x615|x616)));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x621 = INT64_MAX;
	volatile uint32_t x622 = 144810748U;
	int32_t x623 = INT32_MAX;
	int32_t x624 = INT32_MIN;

	t90 = (x621<<(x622==(x623|x624)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x625 = INT64_MAX;
	int64_t x628 = INT64_MAX;
	volatile int64_t t91 = INT64_MAX;

	t91 = (x625<<(x626==(x627|x628)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x630 = 10U;
	uint16_t x631 = 142U;
	int32_t x632 = -276;
	int32_t t92 = -78;

	t92 = (x629<<(x630==(x631|x632)));

	if (t92 != 50) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x633 = 20683U;
	static int64_t x634 = 32786774LL;
	int64_t x635 = -1LL;
	int16_t x636 = INT16_MIN;
	uint32_t t93 = 687U;

	t93 = (x633<<(x634==(x635|x636)));

	if (t93 != 20683U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x642 = 979U;
	int8_t x644 = -1;
	volatile uint32_t t94 = 1140U;

	t94 = (x641<<(x642==(x643|x644)));

	if (t94 != 105526U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x646 = 39294;
	static int16_t x647 = INT16_MAX;
	volatile int32_t x648 = -1;
	uint32_t t95 = 1186233U;

	t95 = (x645<<(x646==(x647|x648)));

	if (t95 != 8271U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x649 = 14553U;
	int8_t x650 = 0;
	static int32_t x651 = -1;
	int8_t x652 = 18;
	volatile int32_t t96 = 4;

	t96 = (x649<<(x650==(x651|x652)));

	if (t96 != 14553) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x653 = UINT32_MAX;
	uint8_t x656 = UINT8_MAX;
	static volatile uint32_t t97 = 11U;

	t97 = (x653<<(x654==(x655|x656)));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x657 = 7U;
	uint8_t x658 = 120U;
	int8_t x659 = 2;
	static volatile int32_t t98 = 453069707;

	t98 = (x657<<(x658==(x659|x660)));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x669 = INT16_MAX;
	static int64_t x670 = INT64_MIN;
	static int8_t x671 = -1;
	uint64_t x672 = UINT64_MAX;
	static int32_t t99 = -2065118;

	t99 = (x669<<(x670==(x671|x672)));

	if (t99 != 32767) { NG(); } else { ; }
	
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

