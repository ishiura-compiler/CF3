#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = 15203U;
int32_t x33 = INT32_MAX;
int8_t x44 = -57;
int64_t x49 = 568083LL;
static volatile int64_t t4 = 29LL;
volatile int64_t x67 = INT64_MIN;
volatile uint64_t t7 = UINT64_MAX;
int16_t x104 = INT16_MIN;
int8_t x110 = 14;
uint64_t x111 = 444LLU;
static int8_t x117 = INT8_MIN;
int16_t x131 = -1;
int8_t x143 = 15;
int64_t x179 = INT64_MAX;
int16_t x190 = INT16_MAX;
uint64_t x196 = UINT64_MAX;
int64_t t20 = INT64_MAX;
static int16_t x217 = -118;
int16_t x226 = -371;
volatile int8_t x242 = -38;
int8_t x250 = INT8_MIN;
int8_t x262 = INT8_MIN;
uint8_t x278 = 42U;
volatile uint16_t x280 = UINT16_MAX;
volatile int64_t t29 = INT64_MAX;
volatile int8_t x289 = -1;
int8_t x292 = INT8_MAX;
int32_t t30 = -1;
int8_t x301 = INT8_MIN;
static volatile int64_t x306 = INT64_MIN;
volatile int64_t t32 = -7LL;
uint32_t x321 = UINT32_MAX;
int32_t x333 = INT32_MAX;
uint8_t x345 = UINT8_MAX;
volatile int32_t t36 = 3;
volatile uint8_t x366 = 42U;
int8_t x385 = INT8_MIN;
int8_t x388 = -1;
int64_t x398 = INT64_MAX;
static uint8_t x400 = 0U;
static int8_t x401 = -1;
int32_t x402 = -234703;
static int32_t t44 = INT32_MAX;
int64_t x424 = -1LL;
volatile int64_t t46 = -8417630LL;
volatile int32_t t47 = -30;
int32_t x470 = INT32_MIN;
int16_t x500 = -1;
uint64_t x501 = UINT64_MAX;
int16_t x521 = INT16_MAX;
int32_t t58 = -2;
int16_t x553 = INT16_MIN;
uint16_t x554 = 4U;
static volatile int32_t x556 = -463;
static int8_t x588 = INT8_MAX;
int64_t x593 = 3713985346264613841LL;
int16_t x595 = INT16_MIN;
volatile int64_t t62 = 71471551203600LL;
static uint8_t x599 = 15U;
volatile int8_t x607 = INT8_MIN;
int32_t x613 = 10044876;
int32_t x614 = INT32_MIN;
int32_t x615 = INT32_MAX;
volatile int16_t x619 = INT16_MIN;
volatile int32_t t66 = -246;
static volatile int32_t t67 = -52035926;
int16_t x635 = INT16_MIN;
volatile uint16_t x636 = 27U;
volatile int16_t x640 = -1740;
int32_t t69 = 654891;
int32_t t70 = INT32_MIN;
int64_t x656 = 247567412463519936LL;
volatile uint8_t x660 = 120U;
int32_t t72 = INT32_MAX;
volatile int32_t x674 = INT32_MIN;
volatile int32_t t73 = -358600987;
volatile int8_t x677 = INT8_MIN;
volatile int16_t x678 = INT16_MIN;
int8_t x680 = INT8_MAX;
uint32_t x686 = 6875U;
uint16_t x691 = UINT16_MAX;
uint32_t x694 = 1028440153U;
static volatile int16_t x703 = INT16_MAX;
uint8_t x708 = 0U;
volatile int32_t t79 = 107;
volatile uint8_t x721 = UINT8_MAX;
volatile int32_t t81 = 1883368;
static volatile uint64_t t83 = 5281LLU;
uint16_t x753 = UINT16_MAX;
static int16_t x754 = INT16_MIN;
volatile int32_t t84 = 386;
int16_t x759 = 1;
int32_t x760 = 23352695;
static int64_t x767 = -4LL;
static uint8_t x769 = 25U;
volatile int16_t x775 = INT16_MIN;
int16_t x776 = INT16_MAX;
int64_t x781 = -192LL;
volatile int32_t t92 = 2824899;
int8_t x826 = 0;
int32_t t95 = -1;
volatile int16_t x851 = INT16_MIN;
volatile int32_t t99 = INT32_MAX;


void f0(void) {
	int8_t x9 = INT8_MIN;
	volatile int64_t x10 = INT64_MIN;
	int16_t x11 = -7797;
	int16_t x12 = -15;
	static volatile int32_t t0 = 91377424;

	t0 = (x9/((x10|x11)<x12));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 1326936569U;
	int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	int32_t x16 = -1;

	t1 = (x13/((x14|x15)<x16));

	if (t1 != 1326936569U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x34 = INT64_MIN;
	int16_t x35 = 4633;
	int64_t x36 = INT64_MAX;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x33/((x34|x35)<x36));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x41 = INT8_MIN;
	uint64_t x42 = 1907175250945405360LLU;
	static int16_t x43 = 5707;
	int32_t t3 = -29;

	t3 = (x41/((x42|x43)<x44));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x50 = -1;
	int64_t x51 = -7471867LL;
	uint32_t x52 = 31439973U;

	t4 = (x49/((x50|x51)<x52));

	if (t4 != 568083LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MAX;
	int64_t x63 = -946408343147352LL;
	static int16_t x64 = INT16_MAX;
	static volatile int32_t t5 = 55167284;

	t5 = (x61/((x62|x63)<x64));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x65 = -1;
	int16_t x66 = INT16_MAX;
	volatile uint32_t x68 = 18466U;
	int32_t t6 = 281509375;

	t6 = (x65/((x66|x67)<x68));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x73 = UINT64_MAX;
	int8_t x74 = -4;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = -1;

	t7 = (x73/((x74|x75)<x76));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MAX;
	int16_t x99 = -1;
	uint8_t x100 = 39U;
	volatile int32_t t8 = -206160;

	t8 = (x97/((x98|x99)<x100));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	int32_t x103 = 84;
	volatile int32_t t9 = 143602;

	t9 = (x101/((x102|x103)<x104));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x112 = 91735001U;
	int32_t t10 = -598540648;

	t10 = (x109/((x110|x111)<x112));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x118 = -1LL;
	static volatile uint16_t x119 = 4U;
	int16_t x120 = 1581;
	volatile int32_t t11 = 242;

	t11 = (x117/((x118|x119)<x120));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x129 = INT16_MIN;
	uint16_t x130 = UINT16_MAX;
	uint16_t x132 = UINT16_MAX;
	static int32_t t12 = 119146;

	t12 = (x129/((x130|x131)<x132));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x137 = 162311297;
	int64_t x138 = INT64_MIN;
	static uint16_t x139 = 15179U;
	int32_t x140 = -2246418;
	volatile int32_t t13 = -3758;

	t13 = (x137/((x138|x139)<x140));

	if (t13 != 162311297) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = UINT8_MAX;
	uint64_t x144 = UINT64_MAX;
	static int32_t t14 = INT32_MIN;

	t14 = (x141/((x142|x143)<x144));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x149 = UINT16_MAX;
	uint64_t x150 = 222902LLU;
	int64_t x151 = -233309LL;
	static int64_t x152 = -1LL;
	volatile int32_t t15 = 869;

	t15 = (x149/((x150|x151)<x152));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x177 = -1;
	int32_t x178 = -64;
	int64_t x180 = INT64_MAX;
	static volatile int32_t t16 = -2227344;

	t16 = (x177/((x178|x179)<x180));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x185 = -503;
	static int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	volatile uint16_t x188 = 12U;
	int32_t t17 = 1862775;

	t17 = (x185/((x186|x187)<x188));

	if (t17 != -503) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x189 = INT8_MAX;
	int32_t x191 = 17289;
	volatile uint64_t x192 = 3242920091969856LLU;
	volatile int32_t t18 = -1;

	t18 = (x189/((x190|x191)<x192));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x193 = 12U;
	int64_t x194 = INT64_MIN;
	int64_t x195 = -49386323LL;
	volatile uint32_t t19 = 277361U;

	t19 = (x193/((x194|x195)<x196));

	if (t19 != 12U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x197 = INT64_MAX;
	volatile uint64_t x198 = 50LLU;
	volatile int32_t x199 = -58935;
	int64_t x200 = -1LL;

	t20 = (x197/((x198|x199)<x200));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x209 = INT64_MIN;
	uint16_t x210 = 611U;
	int16_t x211 = INT16_MIN;
	uint16_t x212 = 11198U;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x209/((x210|x211)<x212));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x218 = 1476717695U;
	static int64_t x219 = -1LL;
	int8_t x220 = INT8_MAX;
	int32_t t22 = 1205707;

	t22 = (x217/((x218|x219)<x220));

	if (t22 != -118) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x225 = 120824U;
	volatile int64_t x227 = -14249LL;
	volatile int8_t x228 = 1;
	volatile uint32_t t23 = 102U;

	t23 = (x225/((x226|x227)<x228));

	if (t23 != 120824U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x241 = INT8_MIN;
	int32_t x243 = INT32_MIN;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t24 = 78849;

	t24 = (x241/((x242|x243)<x244));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x249 = INT32_MIN;
	uint16_t x251 = 85U;
	uint16_t x252 = UINT16_MAX;
	static volatile int32_t t25 = INT32_MIN;

	t25 = (x249/((x250|x251)<x252));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x253 = -1;
	volatile int32_t x254 = 6178;
	static int64_t x255 = -594539055LL;
	int16_t x256 = 0;
	volatile int32_t t26 = 1;

	t26 = (x253/((x254|x255)<x256));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x261 = INT16_MIN;
	volatile uint8_t x263 = 1U;
	static int32_t x264 = -1;
	volatile int32_t t27 = -180756;

	t27 = (x261/((x262|x263)<x264));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x277 = 13U;
	int8_t x279 = 60;
	static volatile int32_t t28 = 13175819;

	t28 = (x277/((x278|x279)<x280));

	if (t28 != 13) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x281 = INT64_MAX;
	int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	int32_t x284 = 8303967;

	t29 = (x281/((x282|x283)<x284));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x290 = -1;
	int32_t x291 = INT32_MIN;

	t30 = (x289/((x290|x291)<x292));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x302 = INT32_MIN;
	uint16_t x303 = 799U;
	int64_t x304 = -1LL;
	volatile int32_t t31 = -5003;

	t31 = (x301/((x302|x303)<x304));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x305 = -1LL;
	volatile uint8_t x307 = 39U;
	int32_t x308 = INT32_MIN;

	t32 = (x305/((x306|x307)<x308));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x322 = INT16_MIN;
	static int64_t x323 = -105LL;
	static uint16_t x324 = UINT16_MAX;
	uint32_t t33 = UINT32_MAX;

	t33 = (x321/((x322|x323)<x324));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x325 = INT64_MAX;
	static int8_t x326 = INT8_MIN;
	uint16_t x327 = 1U;
	int32_t x328 = -1;
	static volatile int64_t t34 = INT64_MAX;

	t34 = (x325/((x326|x327)<x328));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x334 = 0U;
	volatile int8_t x335 = -1;
	static uint8_t x336 = 64U;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x333/((x334|x335)<x336));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x346 = 3401U;
	uint16_t x347 = 2U;
	static uint16_t x348 = UINT16_MAX;

	t36 = (x345/((x346|x347)<x348));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x365 = -1;
	int32_t x367 = INT32_MIN;
	int64_t x368 = -1LL;
	int32_t t37 = -34884;

	t37 = (x365/((x366|x367)<x368));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x377 = 380631473LLU;
	int8_t x378 = INT8_MIN;
	int32_t x379 = -19;
	int64_t x380 = 6LL;
	volatile uint64_t t38 = 103611044706001769LLU;

	t38 = (x377/((x378|x379)<x380));

	if (t38 != 380631473LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x386 = UINT16_MAX;
	static uint64_t x387 = 3834377542601974112LLU;
	static int32_t t39 = -26252;

	t39 = (x385/((x386|x387)<x388));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x393 = 54U;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MIN;
	volatile uint64_t x396 = UINT64_MAX;
	int32_t t40 = -8825;

	t40 = (x393/((x394|x395)<x396));

	if (t40 != 54) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x397 = -1;
	int32_t x399 = -19604;
	static int32_t t41 = 9722431;

	t41 = (x397/((x398|x399)<x400));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x403 = INT16_MIN;
	uint8_t x404 = 89U;
	int32_t t42 = 2;

	t42 = (x401/((x402|x403)<x404));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x413 = -1;
	int64_t x414 = -6121556431LL;
	uint16_t x415 = UINT16_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t43 = 6;

	t43 = (x413/((x414|x415)<x416));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x417 = INT32_MAX;
	uint32_t x418 = 2705U;
	uint64_t x419 = 166886LLU;
	static int32_t x420 = INT32_MIN;

	t44 = (x417/((x418|x419)<x420));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x421 = 1;
	int16_t x422 = INT16_MIN;
	uint64_t x423 = 743452533115242LLU;
	static volatile int32_t t45 = 16481599;

	t45 = (x421/((x422|x423)<x424));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x425 = -1563056034LL;
	int64_t x426 = -107303LL;
	int16_t x427 = INT16_MAX;
	static int32_t x428 = INT32_MAX;

	t46 = (x425/((x426|x427)<x428));

	if (t46 != -1563056034LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x445 = UINT8_MAX;
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = INT64_MIN;
	volatile uint16_t x448 = UINT16_MAX;

	t47 = (x445/((x446|x447)<x448));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x469 = INT32_MIN;
	int32_t x471 = INT32_MIN;
	int64_t x472 = 1LL;
	volatile int32_t t48 = INT32_MIN;

	t48 = (x469/((x470|x471)<x472));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x473 = -1LL;
	int32_t x474 = INT32_MIN;
	static int8_t x475 = -1;
	int16_t x476 = INT16_MAX;
	static int64_t t49 = 8LL;

	t49 = (x473/((x474|x475)<x476));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x477 = 27LL;
	volatile int16_t x478 = INT16_MAX;
	int64_t x479 = INT64_MIN;
	static int64_t x480 = INT64_MAX;
	int64_t t50 = 126721808LL;

	t50 = (x477/((x478|x479)<x480));

	if (t50 != 27LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x481 = -1LL;
	int16_t x482 = INT16_MAX;
	int8_t x483 = 1;
	uint32_t x484 = 863122228U;
	static volatile int64_t t51 = -16052082LL;

	t51 = (x481/((x482|x483)<x484));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x485 = 10U;
	static volatile uint16_t x486 = 566U;
	int64_t x487 = INT64_MIN;
	static int16_t x488 = -1;
	uint32_t t52 = 21833U;

	t52 = (x485/((x486|x487)<x488));

	if (t52 != 10U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x497 = INT8_MAX;
	static volatile int8_t x498 = INT8_MAX;
	volatile uint64_t x499 = 1065778250299767LLU;
	volatile int32_t t53 = -36197;

	t53 = (x497/((x498|x499)<x500));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x502 = -319912045520305909LL;
	static int8_t x503 = -13;
	uint8_t x504 = 59U;
	uint64_t t54 = UINT64_MAX;

	t54 = (x501/((x502|x503)<x504));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x522 = -1;
	int16_t x523 = INT16_MAX;
	int64_t x524 = INT64_MAX;
	volatile int32_t t55 = -1;

	t55 = (x521/((x522|x523)<x524));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x525 = INT8_MIN;
	volatile uint32_t x526 = 30U;
	uint8_t x527 = UINT8_MAX;
	int16_t x528 = -1;
	static volatile int32_t t56 = 47245;

	t56 = (x525/((x526|x527)<x528));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x529 = UINT8_MAX;
	int32_t x530 = INT32_MAX;
	volatile int8_t x531 = INT8_MIN;
	int16_t x532 = INT16_MAX;
	int32_t t57 = 7595;

	t57 = (x529/((x530|x531)<x532));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x541 = INT8_MAX;
	uint16_t x542 = 4765U;
	int8_t x543 = INT8_MIN;
	uint64_t x544 = UINT64_MAX;

	t58 = (x541/((x542|x543)<x544));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x555 = INT32_MIN;
	volatile int32_t t59 = 13238;

	t59 = (x553/((x554|x555)<x556));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x557 = -1;
	int32_t x558 = -1;
	int64_t x559 = INT64_MIN;
	int64_t x560 = 337176139102224LL;
	int32_t t60 = -301564;

	t60 = (x557/((x558|x559)<x560));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x585 = -1;
	int32_t x586 = -8896061;
	uint8_t x587 = 31U;
	int32_t t61 = -13;

	t61 = (x585/((x586|x587)<x588));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x594 = -43258030387920LL;
	int32_t x596 = -8069;

	t62 = (x593/((x594|x595)<x596));

	if (t62 != 3713985346264613841LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x597 = 3420039;
	static int32_t x598 = INT32_MIN;
	int16_t x600 = -1;
	int32_t t63 = 43267;

	t63 = (x597/((x598|x599)<x600));

	if (t63 != 3420039) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x605 = -1LL;
	volatile int32_t x606 = 146907;
	uint8_t x608 = 0U;
	int64_t t64 = 652437LL;

	t64 = (x605/((x606|x607)<x608));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x616 = INT16_MAX;
	static volatile int32_t t65 = -157190;

	t65 = (x613/((x614|x615)<x616));

	if (t65 != 10044876) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x617 = -254;
	static int32_t x618 = INT32_MIN;
	static uint16_t x620 = 3960U;

	t66 = (x617/((x618|x619)<x620));

	if (t66 != -254) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x629 = INT8_MIN;
	int32_t x630 = -12223;
	static volatile int16_t x631 = INT16_MIN;
	volatile uint32_t x632 = UINT32_MAX;

	t67 = (x629/((x630|x631)<x632));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x633 = 29354402388135416LL;
	int16_t x634 = INT16_MIN;
	volatile int64_t t68 = 376595LL;

	t68 = (x633/((x634|x635)<x636));

	if (t68 != 29354402388135416LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x637 = 16203;
	int16_t x638 = INT16_MAX;
	int64_t x639 = INT64_MIN;

	t69 = (x637/((x638|x639)<x640));

	if (t69 != 16203) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x645 = INT32_MIN;
	static int32_t x646 = -1;
	int8_t x647 = INT8_MIN;
	uint8_t x648 = 1U;

	t70 = (x645/((x646|x647)<x648));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x653 = 8U;
	uint16_t x654 = 4469U;
	int32_t x655 = -1;
	volatile int32_t t71 = 79225;

	t71 = (x653/((x654|x655)<x656));

	if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x657 = INT32_MAX;
	int64_t x658 = -1LL;
	int16_t x659 = INT16_MAX;

	t72 = (x657/((x658|x659)<x660));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x673 = -773;
	uint64_t x675 = 19985497766LLU;
	int16_t x676 = INT16_MIN;

	t73 = (x673/((x674|x675)<x676));

	if (t73 != -773) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x679 = 1LL;
	static int32_t t74 = -13;

	t74 = (x677/((x678|x679)<x680));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x685 = -1;
	int64_t x687 = -1LL;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t75 = 19086774;

	t75 = (x685/((x686|x687)<x688));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x689 = INT32_MAX;
	int64_t x690 = INT64_MIN;
	int16_t x692 = INT16_MIN;
	static volatile int32_t t76 = INT32_MAX;

	t76 = (x689/((x690|x691)<x692));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x693 = 0U;
	int64_t x695 = INT64_MIN;
	volatile int32_t x696 = -1;
	uint32_t t77 = 1180U;

	t77 = (x693/((x694|x695)<x696));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x701 = 7U;
	uint8_t x702 = 43U;
	volatile uint64_t x704 = UINT64_MAX;
	static volatile int32_t t78 = -30283;

	t78 = (x701/((x702|x703)<x704));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x705 = 31U;
	int64_t x706 = -1LL;
	int64_t x707 = -1LL;

	t79 = (x705/((x706|x707)<x708));

	if (t79 != 31) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x713 = -1;
	volatile int32_t x714 = -1;
	uint16_t x715 = 0U;
	static volatile uint8_t x716 = 125U;
	static volatile int32_t t80 = -46177;

	t80 = (x713/((x714|x715)<x716));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x722 = 68933918504273LL;
	int16_t x723 = INT16_MIN;
	uint16_t x724 = UINT16_MAX;

	t81 = (x721/((x722|x723)<x724));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x729 = INT64_MAX;
	int8_t x730 = 29;
	int32_t x731 = INT32_MIN;
	volatile int8_t x732 = INT8_MIN;
	int64_t t82 = INT64_MAX;

	t82 = (x729/((x730|x731)<x732));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x737 = 17076421364LLU;
	int64_t x738 = INT64_MIN;
	int16_t x739 = -9;
	int8_t x740 = INT8_MAX;

	t83 = (x737/((x738|x739)<x740));

	if (t83 != 17076421364LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x755 = 1;
	int16_t x756 = -1;

	t84 = (x753/((x754|x755)<x756));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x757 = 1;
	int8_t x758 = 3;
	volatile int32_t t85 = 396037;

	t85 = (x757/((x758|x759)<x760));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x761 = 245U;
	uint8_t x762 = 0U;
	int16_t x763 = -7;
	uint16_t x764 = 760U;
	uint32_t t86 = 61796645U;

	t86 = (x761/((x762|x763)<x764));

	if (t86 != 245U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x765 = 198835329;
	static int32_t x766 = -1;
	uint32_t x768 = UINT32_MAX;
	int32_t t87 = -25717;

	t87 = (x765/((x766|x767)<x768));

	if (t87 != 198835329) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x770 = INT16_MIN;
	volatile int32_t x771 = INT32_MIN;
	uint64_t x772 = UINT64_MAX;
	int32_t t88 = -1;

	t88 = (x769/((x770|x771)<x772));

	if (t88 != 25) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x773 = INT64_MIN;
	uint8_t x774 = 11U;
	int64_t t89 = INT64_MIN;

	t89 = (x773/((x774|x775)<x776));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x782 = INT8_MIN;
	int16_t x783 = INT16_MAX;
	static uint16_t x784 = UINT16_MAX;
	volatile int64_t t90 = 187232046LL;

	t90 = (x781/((x782|x783)<x784));

	if (t90 != -192LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x785 = 6;
	static int32_t x786 = -1708;
	int16_t x787 = INT16_MIN;
	int8_t x788 = 0;
	volatile int32_t t91 = 1;

	t91 = (x785/((x786|x787)<x788));

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x789 = 4;
	volatile int8_t x790 = INT8_MAX;
	uint32_t x791 = 4531U;
	int8_t x792 = -1;

	t92 = (x789/((x790|x791)<x792));

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x793 = INT8_MAX;
	int32_t x794 = INT32_MIN;
	int16_t x795 = -4647;
	int64_t x796 = INT64_MAX;
	int32_t t93 = -3537558;

	t93 = (x793/((x794|x795)<x796));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x821 = INT32_MAX;
	int64_t x822 = -3986815224739LL;
	volatile uint32_t x823 = UINT32_MAX;
	static uint32_t x824 = 12262104U;
	static volatile int32_t t94 = INT32_MAX;

	t94 = (x821/((x822|x823)<x824));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x825 = 7U;
	static int32_t x827 = INT32_MIN;
	static int16_t x828 = INT16_MAX;

	t95 = (x825/((x826|x827)<x828));

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x829 = -1;
	int16_t x830 = -1;
	static uint8_t x831 = 0U;
	int32_t x832 = INT32_MAX;
	volatile int32_t t96 = -2;

	t96 = (x829/((x830|x831)<x832));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x833 = -2557LL;
	int16_t x834 = INT16_MIN;
	static int8_t x835 = INT8_MIN;
	static uint16_t x836 = 7937U;
	int64_t t97 = 47LL;

	t97 = (x833/((x834|x835)<x836));

	if (t97 != -2557LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x841 = -1LL;
	int8_t x842 = INT8_MIN;
	int64_t x843 = -3132007247273762LL;
	int32_t x844 = -1;
	volatile int64_t t98 = -7940802041798LL;

	t98 = (x841/((x842|x843)<x844));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x849 = INT32_MAX;
	volatile int16_t x850 = INT16_MIN;
	static int64_t x852 = -1LL;

	t99 = (x849/((x850|x851)<x852));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

