#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 5103513741390530LLU;
static int8_t x12 = INT8_MIN;
int8_t x14 = INT8_MIN;
volatile int32_t t3 = 29969;
static uint8_t x25 = 29U;
uint64_t x26 = UINT64_MAX;
volatile uint16_t x29 = UINT16_MAX;
static volatile int32_t x31 = INT32_MIN;
int16_t x34 = INT16_MIN;
int64_t x42 = INT64_MIN;
int16_t x73 = 1;
static int8_t x78 = 4;
static int8_t x90 = INT8_MIN;
uint64_t x93 = UINT64_MAX;
int64_t x94 = INT64_MAX;
int32_t x100 = INT32_MIN;
static uint32_t t15 = 584U;
int32_t x119 = INT32_MIN;
int8_t x125 = 15;
static uint32_t x126 = 7433828U;
static uint32_t x129 = UINT32_MAX;
static int16_t x165 = 1;
volatile int32_t x167 = INT32_MIN;
volatile int32_t t31 = -118588;
int64_t x217 = INT64_MAX;
uint32_t t34 = 1U;
uint32_t x232 = UINT32_MAX;
int32_t x254 = 0;
int64_t x255 = 0LL;
volatile int32_t x261 = INT32_MAX;
uint8_t x265 = 0U;
volatile uint32_t x268 = UINT32_MAX;
static uint8_t x276 = 1U;
int64_t t42 = -40068095212LL;
volatile int16_t x301 = 663;
volatile int32_t t44 = -3;
int64_t x322 = INT64_MAX;
static uint16_t x323 = 995U;
static int32_t x338 = INT32_MIN;
uint64_t x345 = 3LLU;
int16_t x360 = INT16_MIN;
int32_t x361 = 36712;
int64_t x362 = 1068780915595618LL;
int32_t t54 = 350263;
uint8_t x387 = UINT8_MAX;
int8_t x398 = -49;
int16_t x400 = INT16_MIN;
uint32_t x441 = 61U;
uint8_t x447 = 4U;
static volatile uint8_t x448 = 2U;
uint8_t x456 = 92U;
uint32_t x468 = 24593155U;
int16_t x470 = 1;
static volatile uint64_t t68 = UINT64_MAX;
static int16_t x480 = INT16_MIN;
static uint64_t x509 = 2376375371023985LLU;
uint64_t x512 = UINT64_MAX;
uint64_t x513 = UINT64_MAX;
static int16_t x526 = -1;
int32_t x527 = INT32_MIN;
volatile int32_t t76 = 349;
volatile int32_t t79 = 151917;
volatile int16_t x572 = INT16_MAX;
uint64_t x578 = 5112656113649483884LLU;
volatile uint64_t x587 = 58LLU;
int32_t x616 = 88509596;
static volatile int16_t x626 = INT16_MAX;
volatile uint64_t x645 = 14164405700666LLU;
static int32_t t90 = INT32_MAX;
volatile int64_t t91 = INT64_MAX;
int32_t x687 = -1;
int8_t x688 = INT8_MAX;
uint8_t x690 = 83U;
int64_t x694 = INT64_MIN;
volatile int32_t x695 = -1;
int8_t x697 = 1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int64_t x2 = -3942468LL;
	uint16_t x3 = UINT16_MAX;
	volatile int64_t x4 = INT64_MIN;
	int32_t t0 = -199;

	t0 = (x1<<(x2==(x3%x4)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = UINT32_MAX;
	uint32_t x7 = 1511U;
	int16_t x8 = -2467;
	uint64_t t1 = 128352LLU;

	t1 = (x5<<(x6==(x7%x8)));

	if (t1 != 5103513741390530LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	static int64_t x10 = INT64_MAX;
	volatile int8_t x11 = INT8_MIN;
	static int32_t t2 = -18057273;

	t2 = (x9<<(x10==(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile uint16_t x15 = 5U;
	int32_t x16 = INT32_MIN;

	t3 = (x13<<(x14==(x15%x16)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x27 = 200808160146473497LLU;
	int16_t x28 = INT16_MAX;
	volatile int32_t t4 = 25219610;

	t4 = (x25<<(x26==(x27%x28)));

	if (t4 != 29) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x30 = -1;
	int8_t x32 = INT8_MAX;
	int32_t t5 = -7;

	t5 = (x29<<(x30==(x31%x32)));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 1;
	int32_t x35 = -1;
	static int16_t x36 = -1142;
	volatile int32_t t6 = -112325203;

	t6 = (x33<<(x34==(x35%x36)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = 0;
	static volatile int16_t x38 = INT16_MIN;
	volatile uint32_t x39 = UINT32_MAX;
	uint8_t x40 = 1U;
	int32_t t7 = 762260;

	t7 = (x37<<(x38==(x39%x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MAX;
	uint8_t x43 = UINT8_MAX;
	int16_t x44 = INT16_MAX;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x41<<(x42==(x43%x44)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MIN;
	volatile int64_t x51 = INT64_MAX;
	volatile uint32_t x52 = 208064U;
	volatile int32_t t9 = -299;

	t9 = (x49<<(x50==(x51%x52)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x74 = 83U;
	uint16_t x75 = 42U;
	static int32_t x76 = 1;
	volatile int32_t t10 = 56468;

	t10 = (x73<<(x74==(x75%x76)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x77 = INT32_MAX;
	int8_t x79 = INT8_MAX;
	uint16_t x80 = 99U;
	int32_t t11 = INT32_MAX;

	t11 = (x77<<(x78==(x79%x80)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = UINT8_MAX;
	int32_t x86 = INT32_MIN;
	volatile int16_t x87 = -15301;
	volatile uint64_t x88 = UINT64_MAX;
	volatile int32_t t12 = -401;

	t12 = (x85<<(x86==(x87%x88)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x89 = 103;
	int64_t x91 = -1LL;
	int8_t x92 = INT8_MAX;
	volatile int32_t t13 = 1;

	t13 = (x89<<(x90==(x91%x92)));

	if (t13 != 103) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x95 = 24843418;
	static int8_t x96 = -3;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x93<<(x94==(x95%x96)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x97 = 158846U;
	int8_t x98 = 0;
	uint32_t x99 = UINT32_MAX;

	t15 = (x97<<(x98==(x99%x100)));

	if (t15 != 158846U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x103 = -40;
	int64_t x104 = INT64_MIN;
	volatile int32_t t16 = 5;

	t16 = (x101<<(x102==(x103%x104)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x109 = 62850201LLU;
	int64_t x110 = 7LL;
	int64_t x111 = 247716555LL;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t17 = 361066LLU;

	t17 = (x109<<(x110==(x111%x112)));

	if (t17 != 62850201LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x117 = 653242372U;
	uint64_t x118 = UINT64_MAX;
	volatile int8_t x120 = INT8_MAX;
	uint32_t t18 = 9406U;

	t18 = (x117<<(x118==(x119%x120)));

	if (t18 != 653242372U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x121 = INT8_MAX;
	uint64_t x122 = 64599606041586LLU;
	static int16_t x123 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;
	int32_t t19 = -105964290;

	t19 = (x121<<(x122==(x123%x124)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x127 = -5410LL;
	static int32_t x128 = -52720622;
	volatile int32_t t20 = -483;

	t20 = (x125<<(x126==(x127%x128)));

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x130 = -53883546LL;
	int32_t x131 = INT32_MIN;
	uint8_t x132 = 2U;
	uint32_t t21 = UINT32_MAX;

	t21 = (x129<<(x130==(x131%x132)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x133 = 9462U;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = 3014;
	static volatile int32_t t22 = 22;

	t22 = (x133<<(x134==(x135%x136)));

	if (t22 != 9462) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = -30;
	volatile uint16_t x139 = 4951U;
	int8_t x140 = -1;
	static volatile int32_t t23 = 0;

	t23 = (x137<<(x138==(x139%x140)));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x141 = INT32_MAX;
	int32_t x142 = -62938;
	volatile int64_t x143 = INT64_MIN;
	int16_t x144 = -1;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x141<<(x142==(x143%x144)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x161 = 73;
	uint32_t x162 = 18U;
	int8_t x163 = INT8_MIN;
	static uint8_t x164 = UINT8_MAX;
	int32_t t25 = 1;

	t25 = (x161<<(x162==(x163%x164)));

	if (t25 != 73) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x166 = INT16_MIN;
	int32_t x168 = -2724;
	volatile int32_t t26 = 15;

	t26 = (x165<<(x166==(x167%x168)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x169 = INT16_MAX;
	static int32_t x170 = -3726299;
	int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MAX;
	volatile int32_t t27 = 4657;

	t27 = (x169<<(x170==(x171%x172)));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x189 = 278;
	static int64_t x190 = -22224819467045212LL;
	uint16_t x191 = 19U;
	uint64_t x192 = 14460913479LLU;
	volatile int32_t t28 = -18716720;

	t28 = (x189<<(x190==(x191%x192)));

	if (t28 != 278) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	int16_t x200 = -1;
	volatile int32_t t29 = -731104;

	t29 = (x197<<(x198==(x199%x200)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x201 = 152802953U;
	int32_t x202 = INT32_MIN;
	volatile int16_t x203 = -1;
	int16_t x204 = INT16_MAX;
	volatile uint32_t t30 = 42778U;

	t30 = (x201<<(x202==(x203%x204)));

	if (t30 != 152802953U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x209 = 79U;
	static uint16_t x210 = UINT16_MAX;
	volatile int8_t x211 = -1;
	int64_t x212 = 403188839LL;

	t31 = (x209<<(x210==(x211%x212)));

	if (t31 != 79) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x213 = 74U;
	int16_t x214 = 2;
	int8_t x215 = 0;
	int8_t x216 = 50;
	volatile int32_t t32 = 3;

	t32 = (x213<<(x214==(x215%x216)));

	if (t32 != 74) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x218 = -1;
	volatile int32_t x219 = -2664731;
	int64_t x220 = INT64_MAX;
	static int64_t t33 = INT64_MAX;

	t33 = (x217<<(x218==(x219%x220)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x225 = 1644284U;
	static volatile int8_t x226 = INT8_MIN;
	static int32_t x227 = -1;
	int64_t x228 = 4LL;

	t34 = (x225<<(x226==(x227%x228)));

	if (t34 != 1644284U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x229 = UINT32_MAX;
	static int16_t x230 = INT16_MAX;
	uint64_t x231 = 1LLU;
	uint32_t t35 = UINT32_MAX;

	t35 = (x229<<(x230==(x231%x232)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x233 = 55U;
	static int8_t x234 = -34;
	volatile uint8_t x235 = 19U;
	volatile int16_t x236 = INT16_MAX;
	static int32_t t36 = -214;

	t36 = (x233<<(x234==(x235%x236)));

	if (t36 != 55) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x249 = INT8_MAX;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	static int32_t x252 = -1;
	int32_t t37 = -1;

	t37 = (x249<<(x250==(x251%x252)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x253 = UINT64_MAX;
	int16_t x256 = INT16_MIN;
	static volatile uint64_t t38 = 2788483119946284LLU;

	t38 = (x253<<(x254==(x255%x256)));

	if (t38 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x262 = -1;
	int64_t x263 = INT64_MAX;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t39 = INT32_MAX;

	t39 = (x261<<(x262==(x263%x264)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x266 = 1;
	volatile uint8_t x267 = 104U;
	volatile int32_t t40 = -29180974;

	t40 = (x265<<(x266==(x267%x268)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x269 = 4882555139865LL;
	int64_t x270 = INT64_MIN;
	uint8_t x271 = UINT8_MAX;
	int64_t x272 = -1LL;
	volatile int64_t t41 = 2189872817533296325LL;

	t41 = (x269<<(x270==(x271%x272)));

	if (t41 != 4882555139865LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x273 = 275420217579851LL;
	volatile int32_t x274 = INT32_MIN;
	volatile int32_t x275 = INT32_MAX;

	t42 = (x273<<(x274==(x275%x276)));

	if (t42 != 275420217579851LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x277 = 30;
	static int8_t x278 = 1;
	static volatile uint32_t x279 = UINT32_MAX;
	int16_t x280 = INT16_MAX;
	volatile int32_t t43 = -3737;

	t43 = (x277<<(x278==(x279%x280)));

	if (t43 != 30) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x302 = INT64_MIN;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MIN;

	t44 = (x301<<(x302==(x303%x304)));

	if (t44 != 663) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x305 = UINT16_MAX;
	static uint64_t x306 = 292220652688575LLU;
	int32_t x307 = INT32_MAX;
	int32_t x308 = INT32_MIN;
	volatile int32_t t45 = -1;

	t45 = (x305<<(x306==(x307%x308)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x309 = 1530U;
	uint32_t x310 = 356403U;
	uint8_t x311 = 0U;
	uint64_t x312 = 56915LLU;
	volatile int32_t t46 = 1984;

	t46 = (x309<<(x310==(x311%x312)));

	if (t46 != 1530) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x321 = 55U;
	static volatile int16_t x324 = -59;
	int32_t t47 = 43792037;

	t47 = (x321<<(x322==(x323%x324)));

	if (t47 != 55) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x325 = 0;
	int8_t x326 = INT8_MAX;
	int64_t x327 = INT64_MAX;
	int8_t x328 = INT8_MAX;
	volatile int32_t t48 = 98805;

	t48 = (x325<<(x326==(x327%x328)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x337 = UINT16_MAX;
	int16_t x339 = -1;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t49 = -132886807;

	t49 = (x337<<(x338==(x339%x340)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x346 = INT32_MAX;
	static uint32_t x347 = 96341U;
	int64_t x348 = -190261326711LL;
	uint64_t t50 = 64406LLU;

	t50 = (x345<<(x346==(x347%x348)));

	if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x357 = 1389;
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	volatile int32_t t51 = -1488919;

	t51 = (x357<<(x358==(x359%x360)));

	if (t51 != 1389) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x363 = 29438U;
	int8_t x364 = -1;
	int32_t t52 = -7;

	t52 = (x361<<(x362==(x363%x364)));

	if (t52 != 36712) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x365 = 152056LLU;
	int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	volatile int64_t x368 = INT64_MIN;
	volatile uint64_t t53 = 222360967LLU;

	t53 = (x365<<(x366==(x367%x368)));

	if (t53 != 152056LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x369 = 1U;
	int64_t x370 = INT64_MAX;
	int32_t x371 = 329553696;
	uint32_t x372 = UINT32_MAX;

	t54 = (x369<<(x370==(x371%x372)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 1U;
	volatile int8_t x379 = -1;
	volatile uint64_t x380 = UINT64_MAX;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x377<<(x378==(x379%x380)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x385 = INT32_MAX;
	int32_t x386 = INT32_MIN;
	uint16_t x388 = 12U;
	volatile int32_t t56 = INT32_MAX;

	t56 = (x385<<(x386==(x387%x388)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x397 = 3519008U;
	int16_t x399 = INT16_MAX;
	uint32_t t57 = 838717U;

	t57 = (x397<<(x398==(x399%x400)));

	if (t57 != 3519008U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x405 = UINT32_MAX;
	static volatile int8_t x406 = -1;
	int8_t x407 = -14;
	int8_t x408 = INT8_MIN;
	uint32_t t58 = UINT32_MAX;

	t58 = (x405<<(x406==(x407%x408)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x417 = INT8_MAX;
	uint16_t x418 = 8759U;
	int16_t x419 = -1;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t59 = -114814;

	t59 = (x417<<(x418==(x419%x420)));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x425 = UINT8_MAX;
	uint8_t x426 = 1U;
	int64_t x427 = -65138609LL;
	volatile uint64_t x428 = 7371455447419LLU;
	static volatile int32_t t60 = 2;

	t60 = (x425<<(x426==(x427%x428)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x433 = 51677U;
	int8_t x434 = 3;
	uint32_t x435 = 4700770U;
	uint16_t x436 = 249U;
	volatile uint32_t t61 = 7773U;

	t61 = (x433<<(x434==(x435%x436)));

	if (t61 != 51677U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x437 = 1U;
	static int64_t x438 = -134630477584083568LL;
	volatile int8_t x439 = INT8_MIN;
	volatile int16_t x440 = INT16_MIN;
	volatile int32_t t62 = 32090;

	t62 = (x437<<(x438==(x439%x440)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x442 = -20219108LL;
	volatile int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MAX;
	static volatile uint32_t t63 = 19880U;

	t63 = (x441<<(x442==(x443%x444)));

	if (t63 != 61U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x445 = 0U;
	static int64_t x446 = INT64_MAX;
	volatile int32_t t64 = 184751;

	t64 = (x445<<(x446==(x447%x448)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x453 = 515082LLU;
	uint8_t x454 = 27U;
	int8_t x455 = 0;
	volatile uint64_t t65 = 471006659202LLU;

	t65 = (x453<<(x454==(x455%x456)));

	if (t65 != 515082LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x461 = UINT16_MAX;
	volatile int8_t x462 = INT8_MIN;
	int32_t x463 = -1;
	static uint16_t x464 = 9U;
	int32_t t66 = 24002239;

	t66 = (x461<<(x462==(x463%x464)));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x465 = INT8_MAX;
	int16_t x466 = INT16_MIN;
	volatile uint8_t x467 = 119U;
	int32_t t67 = -2;

	t67 = (x465<<(x466==(x467%x468)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x469 = UINT64_MAX;
	static uint16_t x471 = 78U;
	uint32_t x472 = UINT32_MAX;

	t68 = (x469<<(x470==(x471%x472)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x477 = 2;
	volatile int16_t x478 = INT16_MAX;
	volatile int16_t x479 = INT16_MIN;
	volatile int32_t t69 = 1;

	t69 = (x477<<(x478==(x479%x480)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x497 = 945;
	volatile uint8_t x498 = UINT8_MAX;
	int32_t x499 = 17568;
	int8_t x500 = INT8_MIN;
	int32_t t70 = 4;

	t70 = (x497<<(x498==(x499%x500)));

	if (t70 != 945) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x501 = 33231209U;
	uint16_t x502 = 252U;
	int32_t x503 = INT32_MIN;
	volatile uint8_t x504 = 39U;
	uint32_t t71 = 4709U;

	t71 = (x501<<(x502==(x503%x504)));

	if (t71 != 33231209U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x510 = INT8_MIN;
	int8_t x511 = INT8_MIN;
	static uint64_t t72 = 60551446163LLU;

	t72 = (x509<<(x510==(x511%x512)));

	if (t72 != 4752750742047970LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x514 = INT8_MIN;
	uint32_t x515 = 113192U;
	static volatile int64_t x516 = INT64_MAX;
	static uint64_t t73 = UINT64_MAX;

	t73 = (x513<<(x514==(x515%x516)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x517 = 1;
	static uint16_t x518 = UINT16_MAX;
	volatile int64_t x519 = INT64_MIN;
	uint64_t x520 = UINT64_MAX;
	volatile int32_t t74 = 13;

	t74 = (x517<<(x518==(x519%x520)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x525 = INT8_MAX;
	int16_t x528 = -1;
	volatile int32_t t75 = 55417732;

	t75 = (x525<<(x526==(x527%x528)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x533 = INT16_MAX;
	int16_t x534 = INT16_MIN;
	uint8_t x535 = 0U;
	int16_t x536 = INT16_MAX;

	t76 = (x533<<(x534==(x535%x536)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x549 = 573;
	volatile int16_t x550 = INT16_MIN;
	int32_t x551 = 16;
	int64_t x552 = -1LL;
	volatile int32_t t77 = 25114432;

	t77 = (x549<<(x550==(x551%x552)));

	if (t77 != 573) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x557 = 3037862326577LLU;
	volatile int64_t x558 = INT64_MIN;
	static uint64_t x559 = 296379908703988LLU;
	int64_t x560 = INT64_MAX;
	volatile uint64_t t78 = 38311187031803LLU;

	t78 = (x557<<(x558==(x559%x560)));

	if (t78 != 3037862326577LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x561 = INT16_MAX;
	int64_t x562 = -266736755836391372LL;
	uint8_t x563 = UINT8_MAX;
	static volatile int32_t x564 = -1;

	t79 = (x561<<(x562==(x563%x564)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x569 = INT16_MAX;
	uint32_t x570 = 1U;
	int8_t x571 = INT8_MIN;
	int32_t t80 = -473463882;

	t80 = (x569<<(x570==(x571%x572)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x577 = 4U;
	int16_t x579 = INT16_MIN;
	uint32_t x580 = 56U;
	static volatile int32_t t81 = -1273347;

	t81 = (x577<<(x578==(x579%x580)));

	if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x581 = 116U;
	static volatile int32_t x582 = INT32_MAX;
	int64_t x583 = -1LL;
	int32_t x584 = INT32_MIN;
	volatile int32_t t82 = -409373;

	t82 = (x581<<(x582==(x583%x584)));

	if (t82 != 116) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x585 = 2;
	static int16_t x586 = -3122;
	uint64_t x588 = 162191228LLU;
	int32_t t83 = 90039;

	t83 = (x585<<(x586==(x587%x588)));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x589 = 1U;
	volatile int32_t x590 = INT32_MAX;
	int16_t x591 = 32;
	volatile uint32_t x592 = 31240U;
	static volatile int32_t t84 = 678;

	t84 = (x589<<(x590==(x591%x592)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x605 = UINT32_MAX;
	int16_t x606 = INT16_MIN;
	int8_t x607 = -1;
	uint8_t x608 = 77U;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (x605<<(x606==(x607%x608)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x609 = 7;
	int64_t x610 = 0LL;
	int16_t x611 = INT16_MIN;
	static volatile int32_t x612 = 1053248;
	static volatile int32_t t86 = 2896;

	t86 = (x609<<(x610==(x611%x612)));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x613 = 0;
	int8_t x614 = 16;
	static int8_t x615 = INT8_MAX;
	static int32_t t87 = 13632;

	t87 = (x613<<(x614==(x615%x616)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x625 = 197209;
	volatile int32_t x627 = 204773;
	int32_t x628 = INT32_MIN;
	volatile int32_t t88 = -1978;

	t88 = (x625<<(x626==(x627%x628)));

	if (t88 != 197209) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x646 = UINT64_MAX;
	static int32_t x647 = -1;
	uint64_t x648 = UINT64_MAX;
	volatile uint64_t t89 = 15LLU;

	t89 = (x645<<(x646==(x647%x648)));

	if (t89 != 14164405700666LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x649 = INT32_MAX;
	uint32_t x650 = UINT32_MAX;
	int32_t x651 = -953;
	static uint32_t x652 = 7386382U;

	t90 = (x649<<(x650==(x651%x652)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x653 = INT64_MAX;
	uint32_t x654 = 1942008015U;
	static int32_t x655 = -3178;
	volatile int32_t x656 = 3265;

	t91 = (x653<<(x654==(x655%x656)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x657 = UINT64_MAX;
	int32_t x658 = -1;
	static volatile int16_t x659 = INT16_MAX;
	int8_t x660 = INT8_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (x657<<(x658==(x659%x660)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x673 = 0;
	static volatile uint32_t x674 = UINT32_MAX;
	uint8_t x675 = UINT8_MAX;
	int8_t x676 = -1;
	volatile int32_t t93 = -1017090808;

	t93 = (x673<<(x674==(x675%x676)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x681 = UINT16_MAX;
	int8_t x682 = INT8_MIN;
	volatile uint32_t x683 = 1U;
	int8_t x684 = INT8_MAX;
	volatile int32_t t94 = -2;

	t94 = (x681<<(x682==(x683%x684)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x685 = 2;
	int8_t x686 = -3;
	volatile int32_t t95 = -24838;

	t95 = (x685<<(x686==(x687%x688)));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x689 = 7U;
	uint64_t x691 = UINT64_MAX;
	static int16_t x692 = -14587;
	volatile int32_t t96 = 16028;

	t96 = (x689<<(x690==(x691%x692)));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x693 = INT64_MAX;
	int8_t x696 = 1;
	volatile int64_t t97 = INT64_MAX;

	t97 = (x693<<(x694==(x695%x696)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x698 = 373104640;
	int64_t x699 = INT64_MIN;
	volatile int32_t x700 = -1;
	static int32_t t98 = -1;

	t98 = (x697<<(x698==(x699%x700)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x705 = 30;
	volatile uint32_t x706 = UINT32_MAX;
	static uint32_t x707 = UINT32_MAX;
	static int8_t x708 = INT8_MIN;
	int32_t t99 = -113486336;

	t99 = (x705<<(x706==(x707%x708)));

	if (t99 != 30) { NG(); } else { ; }
	
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

