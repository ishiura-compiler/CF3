#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x22 = UINT64_MAX;
volatile int64_t x25 = 3813692130LL;
static volatile uint64_t t5 = 20677029484LLU;
uint16_t x51 = 243U;
volatile int32_t t6 = -1;
volatile uint64_t x54 = UINT64_MAX;
int32_t t7 = 345;
static int8_t x57 = 34;
static uint64_t x103 = 7447983597427LLU;
int8_t x104 = INT8_MIN;
static volatile uint32_t t14 = 3675994U;
volatile int32_t x115 = -1;
uint16_t x116 = 372U;
volatile uint64_t x119 = 226555988LLU;
static int64_t x120 = -148LL;
volatile uint64_t t17 = 8LLU;
int32_t t18 = 270920;
volatile uint64_t x133 = 15803866213LLU;
int64_t x134 = -1LL;
uint8_t x137 = 11U;
int8_t x140 = INT8_MIN;
int8_t x151 = -1;
int32_t t22 = -38160654;
int16_t x202 = -1;
volatile int8_t x204 = INT8_MIN;
int32_t x220 = 49;
uint64_t x225 = 244576895590315LLU;
int8_t x226 = -3;
int8_t x234 = INT8_MIN;
volatile uint64_t t29 = 11589600692LLU;
int32_t x244 = -1;
uint32_t x245 = 30038633U;
int16_t x255 = -1;
int32_t x256 = INT32_MIN;
volatile int32_t t32 = -813249;
int32_t x265 = INT32_MAX;
uint32_t x289 = UINT32_MAX;
volatile int32_t x308 = INT32_MIN;
int16_t x314 = 0;
int32_t x316 = INT32_MAX;
int8_t x335 = -1;
int8_t x337 = 0;
uint16_t x338 = 3797U;
int32_t x339 = -1;
volatile uint32_t t41 = 29402U;
uint8_t x345 = 3U;
static int32_t t42 = -79;
int16_t x362 = 14;
int16_t x397 = 0;
volatile int32_t t48 = 3909627;
volatile uint64_t t51 = 506101433358469688LLU;
static volatile int8_t x418 = INT8_MAX;
uint64_t x425 = 348LLU;
int16_t x426 = INT16_MAX;
uint16_t x428 = 6381U;
uint64_t t54 = 2552571221339395LLU;
int64_t x439 = -1LL;
volatile uint16_t x441 = UINT16_MAX;
uint8_t x449 = UINT8_MAX;
int8_t x479 = INT8_MIN;
volatile uint64_t t59 = 256374LLU;
static int64_t x483 = 2356LL;
static uint8_t x496 = UINT8_MAX;
int32_t x500 = INT32_MIN;
int64_t x508 = INT64_MIN;
volatile int64_t t63 = -25404538071LL;
static int16_t x512 = INT16_MIN;
uint16_t x526 = 21626U;
int16_t x544 = INT16_MAX;
uint64_t x554 = 635426582523LLU;
int8_t x555 = INT8_MIN;
static uint16_t x556 = UINT16_MAX;
static volatile int8_t x558 = INT8_MIN;
static volatile int16_t x559 = INT16_MAX;
uint8_t x563 = UINT8_MAX;
volatile int32_t t74 = 6;
volatile int16_t x574 = -664;
volatile int8_t x576 = INT8_MIN;
static volatile int32_t t75 = 1;
int16_t x577 = INT16_MAX;
uint64_t x579 = 0LLU;
volatile int32_t t76 = 2;
static volatile uint32_t x581 = 0U;
int32_t x583 = INT32_MIN;
volatile uint8_t x592 = UINT8_MAX;
uint32_t x594 = 53152322U;
int16_t x629 = 310;
int8_t x630 = 1;
uint64_t x640 = 7682LLU;
uint64_t x653 = 338109715839LLU;
static volatile uint64_t t86 = 89777969765528LLU;
uint32_t x658 = 0U;
uint32_t x666 = 0U;
int32_t t88 = 10965839;
int32_t t90 = 31833409;
int64_t t92 = 9823828696LL;
static volatile uint64_t t94 = 1157195242236269270LLU;
static int32_t x722 = INT32_MIN;
uint16_t x729 = 1U;
uint16_t x737 = 9U;


void f0(void) {
	int32_t x9 = INT32_MAX;
	int32_t x10 = 696;
	volatile uint16_t x11 = 114U;
	static uint8_t x12 = 30U;
	int32_t t0 = -62;

	t0 = ((x9<<(x10<x11))%x12);

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x13 = 2U;
	uint16_t x14 = UINT16_MAX;
	static int32_t x15 = 883288;
	int32_t x16 = 283505;
	int32_t t1 = 1;

	t1 = ((x13<<(x14<x15))%x16);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	uint32_t x18 = 92254U;
	static uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MAX;
	int32_t t2 = -1897;

	t2 = ((x17<<(x18<x19))%x20);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	static int64_t x23 = 1928892771518770LL;
	volatile int16_t x24 = INT16_MIN;
	volatile int32_t t3 = -25918405;

	t3 = ((x21<<(x22<x23))%x24);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x26 = 0U;
	volatile int32_t x27 = INT32_MIN;
	static uint8_t x28 = 13U;
	static int64_t t4 = 69498615756483695LL;

	t4 = ((x25<<(x26<x27))%x28);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MIN;
	int8_t x31 = 2;
	int16_t x32 = -477;

	t5 = ((x29<<(x30<x31))%x32);

	if (t5 != 475LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = 49;
	int64_t x50 = 4914544874LL;
	uint16_t x52 = UINT16_MAX;

	t6 = ((x49<<(x50<x51))%x52);

	if (t6 != 49) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x53 = 1156986;
	int8_t x55 = 0;
	int8_t x56 = INT8_MAX;

	t7 = ((x53<<(x54<x55))%x56);

	if (t7 != 16) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x58 = UINT64_MAX;
	volatile uint8_t x59 = 15U;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t8 = 9550916251LLU;

	t8 = ((x57<<(x58<x59))%x60);

	if (t8 != 34LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x73 = 11917;
	volatile int16_t x74 = INT16_MIN;
	int8_t x75 = -3;
	static int32_t x76 = -258550554;
	volatile int32_t t9 = 7;

	t9 = ((x73<<(x74<x75))%x76);

	if (t9 != 23834) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x77 = 2931LLU;
	volatile int8_t x78 = INT8_MIN;
	static int16_t x79 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile uint64_t t10 = 27269609LLU;

	t10 = ((x77<<(x78<x79))%x80);

	if (t10 != 2931LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = UINT64_MAX;
	uint64_t x86 = UINT64_MAX;
	static int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;
	uint64_t t11 = 749044LLU;

	t11 = ((x85<<(x86<x87))%x88);

	if (t11 != 15LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x97 = INT8_MAX;
	uint8_t x98 = 14U;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = INT8_MAX;
	int32_t t12 = 415;

	t12 = ((x97<<(x98<x99))%x100);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x101 = 25U;
	volatile uint32_t x102 = UINT32_MAX;
	static volatile uint32_t t13 = 231U;

	t13 = ((x101<<(x102<x103))%x104);

	if (t13 != 50U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x105 = 866U;
	int64_t x106 = INT64_MIN;
	volatile int16_t x107 = -25;
	uint16_t x108 = 32484U;

	t14 = ((x105<<(x106<x107))%x108);

	if (t14 != 1732U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x113 = 871U;
	volatile int8_t x114 = -2;
	volatile uint32_t t15 = 2U;

	t15 = ((x113<<(x114<x115))%x116);

	if (t15 != 254U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x117 = 607U;
	int64_t x118 = -26529489594LL;
	static volatile int64_t t16 = -1LL;

	t16 = ((x117<<(x118<x119))%x120);

	if (t16 != 15LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x121 = UINT64_MAX;
	uint64_t x122 = 14LLU;
	int8_t x123 = INT8_MIN;
	static volatile int64_t x124 = -235726790LL;

	t17 = ((x121<<(x122<x123))%x124);

	if (t17 != 235726788LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x125 = UINT16_MAX;
	uint8_t x126 = UINT8_MAX;
	volatile int64_t x127 = INT64_MAX;
	int8_t x128 = 6;

	t18 = ((x125<<(x126<x127))%x128);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x135 = INT16_MIN;
	uint8_t x136 = 39U;
	volatile uint64_t t19 = 77552076432373LLU;

	t19 = ((x133<<(x134<x135))%x136);

	if (t19 != 31LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x138 = -1;
	int16_t x139 = INT16_MAX;
	volatile int32_t t20 = -19227776;

	t20 = ((x137<<(x138<x139))%x140);

	if (t20 != 22) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = -1922;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t21 = 7233;

	t21 = ((x149<<(x150<x151))%x152);

	if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x165 = 34;
	volatile uint8_t x166 = UINT8_MAX;
	static int8_t x167 = -1;
	int8_t x168 = 8;

	t22 = ((x165<<(x166<x167))%x168);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x177 = 29U;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	static volatile int64_t x180 = INT64_MIN;
	static int64_t t23 = 6668755167109824LL;

	t23 = ((x177<<(x178<x179))%x180);

	if (t23 != 58LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x197 = 11438U;
	int32_t x198 = INT32_MAX;
	uint16_t x199 = 0U;
	uint64_t x200 = 1LLU;
	volatile uint64_t t24 = 1623LLU;

	t24 = ((x197<<(x198<x199))%x200);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x201 = UINT64_MAX;
	static int16_t x203 = INT16_MIN;
	uint64_t t25 = 5672967636371339LLU;

	t25 = ((x201<<(x202<x203))%x204);

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x217 = 7;
	int32_t x218 = -1;
	static int8_t x219 = 0;
	volatile int32_t t26 = -381098464;

	t26 = ((x217<<(x218<x219))%x220);

	if (t26 != 14) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x221 = 126984LLU;
	static int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	uint64_t t27 = 230LLU;

	t27 = ((x221<<(x222<x223))%x224);

	if (t27 != 253968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x227 = 3084597816770LLU;
	uint16_t x228 = 80U;
	volatile uint64_t t28 = 1LLU;

	t28 = ((x225<<(x226<x227))%x228);

	if (t28 != 75LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x233 = 19841442LLU;
	uint16_t x235 = UINT16_MAX;
	volatile uint64_t x236 = 272766984016015LLU;

	t29 = ((x233<<(x234<x235))%x236);

	if (t29 != 39682884LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x241 = INT8_MAX;
	int64_t x242 = -1LL;
	int16_t x243 = INT16_MIN;
	int32_t t30 = 35432;

	t30 = ((x241<<(x242<x243))%x244);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x246 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	static uint16_t x248 = 61U;
	static volatile uint32_t t31 = 15359801U;

	t31 = ((x245<<(x246<x247))%x248);

	if (t31 != 13U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x253 = 49U;
	int8_t x254 = 5;

	t32 = ((x253<<(x254<x255))%x256);

	if (t32 != 49) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x257 = 59U;
	static int8_t x258 = INT8_MIN;
	uint16_t x259 = UINT16_MAX;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t33 = 16328975090287LLU;

	t33 = ((x257<<(x258<x259))%x260);

	if (t33 != 118LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x266 = 9388;
	int8_t x267 = INT8_MAX;
	int32_t x268 = -1;
	volatile int32_t t34 = -25200;

	t34 = ((x265<<(x266<x267))%x268);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x277 = 5U;
	int64_t x278 = 1577483LL;
	uint64_t x279 = 1541938131017LLU;
	int16_t x280 = -1;
	volatile int32_t t35 = 1598;

	t35 = ((x277<<(x278<x279))%x280);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x290 = 0U;
	int8_t x291 = -1;
	uint32_t x292 = 37741U;
	static volatile uint32_t t36 = 26U;

	t36 = ((x289<<(x290<x291))%x292);

	if (t36 != 3754U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x305 = 91984U;
	uint8_t x306 = 1U;
	static int8_t x307 = 2;
	uint32_t t37 = 1173034U;

	t37 = ((x305<<(x306<x307))%x308);

	if (t37 != 183968U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x309 = 41419100;
	int32_t x310 = -1;
	int8_t x311 = 1;
	int64_t x312 = INT64_MIN;
	int64_t t38 = -1622416262559991LL;

	t38 = ((x309<<(x310<x311))%x312);

	if (t38 != 82838200LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x313 = INT8_MAX;
	volatile int32_t x315 = -1;
	static int32_t t39 = -1026570;

	t39 = ((x313<<(x314<x315))%x316);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x333 = 1863U;
	uint64_t x334 = 14941621761207778LLU;
	uint64_t x336 = 67138730528474LLU;
	static volatile uint64_t t40 = 78272139407LLU;

	t40 = ((x333<<(x334<x335))%x336);

	if (t40 != 3726LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x340 = 230793U;

	t41 = ((x337<<(x338<x339))%x340);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x346 = INT16_MIN;
	uint8_t x347 = 6U;
	static int32_t x348 = INT32_MIN;

	t42 = ((x345<<(x346<x347))%x348);

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x349 = UINT32_MAX;
	static volatile int8_t x350 = INT8_MAX;
	static volatile int8_t x351 = INT8_MIN;
	int64_t x352 = -407186234514565925LL;
	static int64_t t43 = -1173LL;

	t43 = ((x349<<(x350<x351))%x352);

	if (t43 != 4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x357 = 31144048155LL;
	int64_t x358 = INT64_MIN;
	int64_t x359 = 155785275LL;
	int32_t x360 = -6155595;
	int64_t t44 = 1LL;

	t44 = ((x357<<(x358<x359))%x360);

	if (t44 != 5786100LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x361 = UINT32_MAX;
	static uint16_t x363 = 25U;
	uint64_t x364 = 978572333LLU;
	volatile uint64_t t45 = 1924843805756LLU;

	t45 = ((x361<<(x362<x363))%x364);

	if (t45 != 380677962LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x369 = 2539283;
	int16_t x370 = 41;
	uint64_t x371 = UINT64_MAX;
	volatile int64_t x372 = INT64_MIN;
	volatile int64_t t46 = -751733445LL;

	t46 = ((x369<<(x370<x371))%x372);

	if (t46 != 5078566LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x381 = 5460U;
	static int8_t x382 = INT8_MIN;
	uint32_t x383 = 12523U;
	uint8_t x384 = 20U;
	volatile uint32_t t47 = 1301948U;

	t47 = ((x381<<(x382<x383))%x384);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x398 = -1;
	int32_t x399 = -3644;
	uint8_t x400 = 7U;

	t48 = ((x397<<(x398<x399))%x400);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MAX;
	int16_t x403 = INT16_MAX;
	volatile uint32_t x404 = 923607252U;
	uint64_t t49 = 1512764695238934LLU;

	t49 = ((x401<<(x402<x403))%x404);

	if (t49 != 224691LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x405 = 3;
	int8_t x406 = INT8_MIN;
	int16_t x407 = INT16_MIN;
	volatile int32_t x408 = INT32_MIN;
	volatile int32_t t50 = 1807552;

	t50 = ((x405<<(x406<x407))%x408);

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x409 = 388LLU;
	volatile int8_t x410 = INT8_MIN;
	uint8_t x411 = 1U;
	volatile uint32_t x412 = 1624933573U;

	t51 = ((x409<<(x410<x411))%x412);

	if (t51 != 776LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x417 = INT16_MAX;
	uint32_t x419 = 19403U;
	int16_t x420 = -1;
	int32_t t52 = -2907;

	t52 = ((x417<<(x418<x419))%x420);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x421 = UINT32_MAX;
	static int8_t x422 = INT8_MIN;
	static uint16_t x423 = 0U;
	uint64_t x424 = 2471014LLU;
	volatile uint64_t t53 = 76449780412LLU;

	t53 = ((x421<<(x422<x423))%x424);

	if (t53 != 344962LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x427 = 113U;

	t54 = ((x425<<(x426<x427))%x428);

	if (t54 != 348LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x433 = 0;
	uint16_t x434 = UINT16_MAX;
	int16_t x435 = 1;
	volatile int16_t x436 = INT16_MAX;
	volatile int32_t t55 = -5304;

	t55 = ((x433<<(x434<x435))%x436);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x437 = 21428340621LL;
	static int8_t x438 = INT8_MIN;
	volatile int8_t x440 = -43;
	int64_t t56 = 27LL;

	t56 = ((x437<<(x438<x439))%x440);

	if (t56 != 27LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x442 = INT16_MAX;
	int8_t x443 = INT8_MIN;
	static volatile int16_t x444 = INT16_MIN;
	int32_t t57 = -690;

	t57 = ((x441<<(x442<x443))%x444);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x450 = 216832062487LLU;
	static volatile uint16_t x451 = UINT16_MAX;
	int64_t x452 = -7227617LL;
	int64_t t58 = -143001167888938LL;

	t58 = ((x449<<(x450<x451))%x452);

	if (t58 != 255LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x477 = 24U;
	uint32_t x478 = UINT32_MAX;
	volatile uint64_t x480 = UINT64_MAX;

	t59 = ((x477<<(x478<x479))%x480);

	if (t59 != 24LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x481 = UINT16_MAX;
	uint16_t x482 = 1621U;
	int8_t x484 = INT8_MAX;
	volatile int32_t t60 = 6198495;

	t60 = ((x481<<(x482<x483))%x484);

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x493 = UINT8_MAX;
	int64_t x494 = INT64_MIN;
	int16_t x495 = 2346;
	volatile int32_t t61 = -1;

	t61 = ((x493<<(x494<x495))%x496);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x497 = 16233U;
	uint32_t x498 = 1615354291U;
	int32_t x499 = INT32_MIN;
	static volatile uint32_t t62 = 1U;

	t62 = ((x497<<(x498<x499))%x500);

	if (t62 != 32466U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x505 = 2U;
	uint32_t x506 = 2367080U;
	int16_t x507 = INT16_MIN;

	t63 = ((x505<<(x506<x507))%x508);

	if (t63 != 4LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x509 = INT8_MAX;
	static int64_t x510 = INT64_MAX;
	int64_t x511 = INT64_MAX;
	static int32_t t64 = 29654462;

	t64 = ((x509<<(x510<x511))%x512);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x513 = 3U;
	uint32_t x514 = UINT32_MAX;
	int64_t x515 = INT64_MIN;
	volatile int64_t x516 = -1LL;
	volatile int64_t t65 = -39507098964757215LL;

	t65 = ((x513<<(x514<x515))%x516);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x521 = 30567156831234LLU;
	int64_t x522 = -1LL;
	static volatile int8_t x523 = -44;
	volatile int16_t x524 = -1;
	volatile uint64_t t66 = 551LLU;

	t66 = ((x521<<(x522<x523))%x524);

	if (t66 != 30567156831234LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x525 = UINT16_MAX;
	uint16_t x527 = UINT16_MAX;
	int32_t x528 = 5;
	static volatile int32_t t67 = 54302;

	t67 = ((x525<<(x526<x527))%x528);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x533 = 12U;
	volatile int8_t x534 = -1;
	int32_t x535 = -1233263;
	int32_t x536 = INT32_MAX;
	int32_t t68 = 5;

	t68 = ((x533<<(x534<x535))%x536);

	if (t68 != 12) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x537 = 476128261943532LLU;
	int32_t x538 = INT32_MIN;
	static int16_t x539 = INT16_MIN;
	static int16_t x540 = 4;
	uint64_t t69 = 794965985966580330LLU;

	t69 = ((x537<<(x538<x539))%x540);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x541 = 46U;
	volatile int8_t x542 = -1;
	volatile int8_t x543 = INT8_MIN;
	volatile int32_t t70 = -851866;

	t70 = ((x541<<(x542<x543))%x544);

	if (t70 != 46) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x553 = UINT64_MAX;
	volatile uint64_t t71 = 253098143139708LLU;

	t71 = ((x553<<(x554<x555))%x556);

	if (t71 != 65534LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x557 = 1;
	int64_t x560 = 36LL;
	int64_t t72 = -1038710290LL;

	t72 = ((x557<<(x558<x559))%x560);

	if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x561 = UINT64_MAX;
	int8_t x562 = INT8_MAX;
	int32_t x564 = -1;
	uint64_t t73 = 71416421295454246LLU;

	t73 = ((x561<<(x562<x563))%x564);

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x569 = UINT16_MAX;
	int64_t x570 = INT64_MIN;
	int64_t x571 = 15724LL;
	static int16_t x572 = INT16_MIN;

	t74 = ((x569<<(x570<x571))%x572);

	if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x573 = UINT8_MAX;
	volatile int16_t x575 = -1;

	t75 = ((x573<<(x574<x575))%x576);

	if (t75 != 126) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x578 = -21;
	int8_t x580 = 1;

	t76 = ((x577<<(x578<x579))%x580);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x582 = 0U;
	int8_t x584 = -1;
	volatile uint32_t t77 = 3418824U;

	t77 = ((x581<<(x582<x583))%x584);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x585 = 21U;
	static int64_t x586 = -574336LL;
	int8_t x587 = -1;
	static volatile int64_t x588 = -1LL;
	volatile int64_t t78 = 48044783LL;

	t78 = ((x585<<(x586<x587))%x588);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x589 = UINT8_MAX;
	int32_t x590 = -1;
	uint8_t x591 = 116U;
	static volatile int32_t t79 = -1;

	t79 = ((x589<<(x590<x591))%x592);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x593 = 87358985LL;
	static int32_t x595 = INT32_MAX;
	int8_t x596 = 3;
	volatile int64_t t80 = -115242LL;

	t80 = ((x593<<(x594<x595))%x596);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x609 = 404929682970458LLU;
	int16_t x610 = INT16_MIN;
	int16_t x611 = INT16_MIN;
	uint32_t x612 = 4577136U;
	uint64_t t81 = 154292409865LLU;

	t81 = ((x609<<(x610<x611))%x612);

	if (t81 != 4379018LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x613 = 10864726674041LL;
	volatile uint32_t x614 = 9787708U;
	int8_t x615 = INT8_MIN;
	int8_t x616 = 46;
	volatile int64_t t82 = -494LL;

	t82 = ((x613<<(x614<x615))%x616);

	if (t82 != 22LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x631 = INT32_MIN;
	uint32_t x632 = UINT32_MAX;
	static volatile uint32_t t83 = 370111625U;

	t83 = ((x629<<(x630<x631))%x632);

	if (t83 != 310U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x637 = UINT16_MAX;
	int32_t x638 = 77208696;
	uint16_t x639 = UINT16_MAX;
	volatile uint64_t t84 = 1377262LLU;

	t84 = ((x637<<(x638<x639))%x640);

	if (t84 != 4079LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x645 = UINT16_MAX;
	uint8_t x646 = 1U;
	int16_t x647 = INT16_MAX;
	int64_t x648 = 1820791120373LL;
	int64_t t85 = 211236374046544LL;

	t85 = ((x645<<(x646<x647))%x648);

	if (t85 != 131070LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x654 = INT32_MIN;
	int64_t x655 = INT64_MAX;
	uint8_t x656 = 1U;

	t86 = ((x653<<(x654<x655))%x656);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x657 = UINT32_MAX;
	uint64_t x659 = 5195LLU;
	int32_t x660 = 1;
	volatile uint32_t t87 = 25U;

	t87 = ((x657<<(x658<x659))%x660);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x665 = INT8_MAX;
	static int8_t x667 = INT8_MIN;
	int8_t x668 = INT8_MIN;

	t88 = ((x665<<(x666<x667))%x668);

	if (t88 != 126) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x669 = 3647LL;
	int64_t x670 = -1LL;
	uint8_t x671 = UINT8_MAX;
	static int8_t x672 = -1;
	volatile int64_t t89 = -261650139847511319LL;

	t89 = ((x669<<(x670<x671))%x672);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x677 = 118U;
	uint16_t x678 = UINT16_MAX;
	static int32_t x679 = 7407;
	volatile int32_t x680 = INT32_MAX;

	t90 = ((x677<<(x678<x679))%x680);

	if (t90 != 118) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x697 = 3U;
	static int64_t x698 = INT64_MIN;
	int64_t x699 = INT64_MAX;
	int32_t x700 = INT32_MIN;
	int32_t t91 = 222;

	t91 = ((x697<<(x698<x699))%x700);

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x701 = 184;
	static volatile uint16_t x702 = UINT16_MAX;
	int8_t x703 = 2;
	static int64_t x704 = INT64_MIN;

	t92 = ((x701<<(x702<x703))%x704);

	if (t92 != 184LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x705 = 1022276048117LLU;
	int32_t x706 = INT32_MIN;
	uint16_t x707 = 2U;
	int8_t x708 = INT8_MAX;
	uint64_t t93 = 12513354931LLU;

	t93 = ((x705<<(x706<x707))%x708);

	if (t93 != 53LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x709 = UINT64_MAX;
	static volatile int8_t x710 = INT8_MIN;
	static int32_t x711 = -1;
	uint16_t x712 = 1U;

	t94 = ((x709<<(x710<x711))%x712);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x713 = 38468U;
	int64_t x714 = INT64_MIN;
	int16_t x715 = 5904;
	static uint32_t x716 = 30717535U;
	volatile uint32_t t95 = 0U;

	t95 = ((x713<<(x714<x715))%x716);

	if (t95 != 76936U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x721 = 176875346183274317LL;
	uint64_t x723 = UINT64_MAX;
	static int16_t x724 = -1;
	volatile int64_t t96 = 1153627710023LL;

	t96 = ((x721<<(x722<x723))%x724);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x730 = 1057U;
	uint32_t x731 = 415U;
	volatile int64_t x732 = INT64_MIN;
	static volatile int64_t t97 = -9LL;

	t97 = ((x729<<(x730<x731))%x732);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x733 = 14407U;
	int64_t x734 = 728145LL;
	static uint8_t x735 = UINT8_MAX;
	static volatile int64_t x736 = INT64_MIN;
	volatile int64_t t98 = -2399418670726265LL;

	t98 = ((x733<<(x734<x735))%x736);

	if (t98 != 14407LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x738 = -113493385;
	int8_t x739 = 18;
	int32_t x740 = INT32_MIN;
	int32_t t99 = 5794520;

	t99 = ((x737<<(x738<x739))%x740);

	if (t99 != 18) { NG(); } else { ; }
	
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

