#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x14 = -5559148LL;
int16_t x44 = 40;
int32_t t5 = -70361;
static int32_t x54 = 6354;
uint16_t x56 = 1U;
volatile int16_t x60 = INT16_MAX;
int8_t x68 = INT8_MIN;
uint16_t x73 = 1U;
int8_t x85 = INT8_MAX;
static int32_t x109 = -1;
uint16_t x110 = 590U;
volatile int32_t x118 = INT32_MIN;
int32_t t14 = -772777714;
int32_t x140 = INT32_MIN;
int32_t t18 = 15165532;
int16_t x162 = INT16_MIN;
int8_t x170 = 2;
volatile int32_t x209 = INT32_MAX;
uint32_t x210 = 894744171U;
int32_t x219 = -1471230;
int8_t x228 = -1;
static int8_t x229 = INT8_MIN;
int8_t x232 = 0;
int32_t t26 = -1255;
volatile int32_t x233 = INT32_MIN;
int64_t x243 = INT64_MIN;
int32_t t28 = -13248;
volatile uint8_t x254 = UINT8_MAX;
volatile int16_t x258 = INT16_MIN;
int32_t x262 = -1;
int32_t t32 = -1;
int16_t x265 = -1;
static uint64_t x269 = UINT64_MAX;
uint8_t x270 = UINT8_MAX;
static int16_t x272 = INT16_MAX;
volatile int32_t x282 = INT32_MIN;
int16_t x289 = INT16_MIN;
int32_t x293 = INT32_MAX;
uint16_t x295 = 14U;
int32_t t37 = -19;
int16_t x303 = 1;
int32_t x306 = INT32_MIN;
int32_t t39 = -1759241;
volatile int8_t x312 = 9;
uint16_t x330 = 203U;
static int32_t t45 = -2787;
uint64_t x337 = 139673228670117LLU;
int32_t t48 = 6349;
int32_t x350 = -25;
static uint64_t x352 = UINT64_MAX;
int16_t x357 = -23;
volatile int8_t x365 = 15;
uint16_t x366 = UINT16_MAX;
uint64_t x368 = 73901521036964LLU;
int32_t x370 = -1;
int32_t t52 = 26159;
static int32_t x379 = -811864;
int8_t x380 = INT8_MIN;
int32_t t53 = -1;
static int32_t x382 = 6859336;
int64_t x383 = INT64_MIN;
static uint16_t x398 = UINT16_MAX;
int32_t x401 = 34791714;
volatile int32_t t57 = 1;
static int8_t x407 = 5;
volatile int32_t t58 = -253657;
static int32_t x410 = INT32_MAX;
volatile uint8_t x416 = 9U;
uint16_t x426 = UINT16_MAX;
volatile int32_t t62 = 3453;
int16_t x439 = -1;
volatile int32_t t65 = 103;
int8_t x445 = INT8_MIN;
static volatile int8_t x457 = INT8_MAX;
uint64_t x458 = 29943LLU;
uint8_t x461 = 1U;
uint32_t x464 = 71046419U;
static uint32_t x465 = UINT32_MAX;
volatile uint8_t x468 = UINT8_MAX;
int8_t x471 = -1;
uint32_t x472 = UINT32_MAX;
volatile uint16_t x480 = UINT16_MAX;
static int64_t x497 = 27976696372147819LL;
int32_t t76 = -8459;
int8_t x501 = INT8_MIN;
int8_t x534 = INT8_MAX;
volatile uint32_t x541 = 1927U;
volatile int16_t x542 = 10633;
int32_t t81 = -322245;
uint64_t x553 = 117760512836181LLU;
uint64_t x569 = 46448LLU;
static uint16_t x572 = UINT16_MAX;
uint32_t x576 = UINT32_MAX;
int8_t x633 = INT8_MIN;
volatile int8_t x636 = -8;
static uint8_t x638 = 24U;
volatile uint32_t x640 = 1957301U;
volatile uint16_t x646 = UINT16_MAX;
volatile int32_t t93 = 235;
volatile int8_t x651 = 37;
uint64_t x654 = 73499922525LLU;
static volatile int8_t x655 = -1;
static int16_t x663 = -1;
int32_t x670 = INT32_MIN;
int8_t x671 = -1;
int8_t x687 = -1;
int64_t x697 = 169444760356665274LL;


void f0(void) {
	int16_t x13 = INT16_MAX;
	int32_t x15 = INT32_MAX;
	volatile uint32_t x16 = UINT32_MAX;
	volatile int32_t t0 = -6;

	t0 = ((x13==x14)/(x15<=x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x21 = -1;
	static volatile uint8_t x22 = UINT8_MAX;
	volatile int32_t x23 = 374;
	int32_t x24 = INT32_MAX;
	int32_t t1 = -20079;

	t1 = ((x21==x22)/(x23<=x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = -1LL;
	volatile int64_t x26 = -1LL;
	int16_t x27 = 274;
	uint32_t x28 = 18545U;
	volatile int32_t t2 = -421724454;

	t2 = ((x25==x26)/(x27<=x28));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 79U;
	uint32_t x30 = UINT32_MAX;
	static int16_t x31 = INT16_MIN;
	static volatile int8_t x32 = INT8_MIN;
	static volatile int32_t t3 = 15;

	t3 = ((x29==x30)/(x31<=x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 34U;
	volatile uint8_t x34 = UINT8_MAX;
	static uint64_t x35 = 29LLU;
	static volatile int64_t x36 = INT64_MIN;
	volatile int32_t t4 = 89574;

	t4 = ((x33==x34)/(x35<=x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x41 = 3999U;
	uint32_t x42 = 62978019U;
	int8_t x43 = -3;

	t5 = ((x41==x42)/(x43<=x44));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x53 = 187857957170807LL;
	volatile int16_t x55 = INT16_MIN;
	volatile int32_t t6 = 27910;

	t6 = ((x53==x54)/(x55<=x56));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	int32_t t7 = 1484;

	t7 = ((x57==x58)/(x59<=x60));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x65 = INT16_MIN;
	static uint64_t x66 = 914591LLU;
	uint32_t x67 = 203968228U;
	volatile int32_t t8 = -19256925;

	t8 = ((x65==x66)/(x67<=x68));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x74 = UINT8_MAX;
	static uint64_t x75 = 1790102671055LLU;
	int16_t x76 = -1;
	volatile int32_t t9 = 501056454;

	t9 = ((x73==x74)/(x75<=x76));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x86 = 1;
	int8_t x87 = -1;
	static volatile int16_t x88 = INT16_MAX;
	volatile int32_t t10 = -917;

	t10 = ((x85==x86)/(x87<=x88));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x101 = INT16_MAX;
	volatile int16_t x102 = -1;
	volatile int64_t x103 = INT64_MIN;
	int8_t x104 = 31;
	volatile int32_t t11 = 2658;

	t11 = ((x101==x102)/(x103<=x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t12 = 250424682;

	t12 = ((x109==x110)/(x111<=x112));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x117 = -5;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -1;
	int32_t t13 = -16;

	t13 = ((x117==x118)/(x119<=x120));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = 81;
	int32_t x131 = 682069;
	int32_t x132 = INT32_MAX;

	t14 = ((x129==x130)/(x131<=x132));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x133 = 18273630373037LLU;
	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MIN;
	int8_t x136 = -1;
	volatile int32_t t15 = 3888493;

	t15 = ((x133==x134)/(x135<=x136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x137 = 1691577197U;
	int16_t x138 = INT16_MIN;
	volatile int32_t x139 = INT32_MIN;
	int32_t t16 = 763977;

	t16 = ((x137==x138)/(x139<=x140));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 24126U;
	int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	int32_t t17 = -5;

	t17 = ((x145==x146)/(x147<=x148));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x153 = -1;
	int8_t x154 = 48;
	int64_t x155 = INT64_MIN;
	uint16_t x156 = UINT16_MAX;

	t18 = ((x153==x154)/(x155<=x156));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x161 = 12463808U;
	int64_t x163 = -1LL;
	int16_t x164 = -1;
	int32_t t19 = 1;

	t19 = ((x161==x162)/(x163<=x164));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x169 = INT8_MAX;
	int16_t x171 = INT16_MIN;
	static volatile int64_t x172 = -1LL;
	volatile int32_t t20 = 7;

	t20 = ((x169==x170)/(x171<=x172));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x177 = INT16_MIN;
	static int8_t x178 = -1;
	static int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MAX;
	volatile int32_t t21 = -12540;

	t21 = ((x177==x178)/(x179<=x180));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x205 = INT8_MAX;
	static int16_t x206 = -1;
	volatile int32_t x207 = INT32_MIN;
	volatile int8_t x208 = -1;
	static int32_t t22 = -497;

	t22 = ((x205==x206)/(x207<=x208));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x211 = -1;
	uint16_t x212 = UINT16_MAX;
	static int32_t t23 = -3606;

	t23 = ((x209==x210)/(x211<=x212));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x217 = -26283949LL;
	static volatile int16_t x218 = INT16_MAX;
	int32_t x220 = -69536;
	volatile int32_t t24 = -706238;

	t24 = ((x217==x218)/(x219<=x220));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x225 = INT16_MAX;
	volatile int16_t x226 = INT16_MAX;
	volatile int32_t x227 = INT32_MIN;
	int32_t t25 = 982808189;

	t25 = ((x225==x226)/(x227<=x228));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x230 = 796020;
	volatile int16_t x231 = INT16_MIN;

	t26 = ((x229==x230)/(x231<=x232));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x234 = -1LL;
	uint32_t x235 = 169895U;
	int32_t x236 = INT32_MAX;
	int32_t t27 = 14141;

	t27 = ((x233==x234)/(x235<=x236));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x241 = 3U;
	int32_t x242 = -28217345;
	int16_t x244 = -202;

	t28 = ((x241==x242)/(x243<=x244));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x249 = 8990;
	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 48U;
	uint32_t x252 = 39199103U;
	int32_t t29 = -11;

	t29 = ((x249==x250)/(x251<=x252));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x253 = 43U;
	int8_t x255 = -1;
	int64_t x256 = -1LL;
	volatile int32_t t30 = 82;

	t30 = ((x253==x254)/(x255<=x256));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x257 = -1;
	int8_t x259 = -14;
	uint8_t x260 = 15U;
	volatile int32_t t31 = 1;

	t31 = ((x257==x258)/(x259<=x260));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x261 = INT64_MAX;
	int8_t x263 = INT8_MAX;
	int16_t x264 = INT16_MAX;

	t32 = ((x261==x262)/(x263<=x264));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x266 = -5586498LL;
	static int32_t x267 = -59615368;
	volatile int64_t x268 = INT64_MAX;
	static int32_t t33 = 42944087;

	t33 = ((x265==x266)/(x267<=x268));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x271 = -187814757;
	volatile int32_t t34 = 2596;

	t34 = ((x269==x270)/(x271<=x272));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x281 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = 246U;
	int32_t t35 = 3408771;

	t35 = ((x281==x282)/(x283<=x284));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x290 = 1;
	static volatile int64_t x291 = INT64_MIN;
	uint32_t x292 = 31039U;
	static int32_t t36 = 347311997;

	t36 = ((x289==x290)/(x291<=x292));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x294 = -1;
	static int16_t x296 = 43;

	t37 = ((x293==x294)/(x295<=x296));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x301 = 35U;
	static int16_t x302 = -1;
	static volatile uint16_t x304 = 93U;
	int32_t t38 = 73227037;

	t38 = ((x301==x302)/(x303<=x304));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x305 = -13;
	volatile int8_t x307 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;

	t39 = ((x305==x306)/(x307<=x308));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x309 = -1070366439LL;
	int32_t x310 = 730213;
	int16_t x311 = -36;
	static int32_t t40 = 430777576;

	t40 = ((x309==x310)/(x311<=x312));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x313 = 3U;
	static uint64_t x314 = 31911604265LLU;
	volatile uint32_t x315 = 1U;
	static uint8_t x316 = UINT8_MAX;
	int32_t t41 = -2656;

	t41 = ((x313==x314)/(x315<=x316));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x317 = -1;
	volatile int32_t x318 = INT32_MAX;
	volatile int64_t x319 = INT64_MIN;
	volatile int64_t x320 = INT64_MIN;
	static volatile int32_t t42 = 10310;

	t42 = ((x317==x318)/(x319<=x320));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x321 = 25651166;
	uint8_t x322 = 0U;
	int16_t x323 = -212;
	volatile uint16_t x324 = 1U;
	volatile int32_t t43 = 31367712;

	t43 = ((x321==x322)/(x323<=x324));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int32_t x326 = 219981;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -1;
	int32_t t44 = -99641188;

	t44 = ((x325==x326)/(x327<=x328));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x329 = 6404809843812165454LLU;
	int16_t x331 = INT16_MIN;
	int8_t x332 = -1;

	t45 = ((x329==x330)/(x331<=x332));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x333 = 103023U;
	volatile int64_t x334 = -28366956LL;
	volatile int16_t x335 = -3514;
	int8_t x336 = 0;
	volatile int32_t t46 = 4670069;

	t46 = ((x333==x334)/(x335<=x336));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x338 = INT8_MAX;
	uint8_t x339 = 2U;
	static volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t47 = -59028718;

	t47 = ((x337==x338)/(x339<=x340));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x341 = -549512;
	volatile uint16_t x342 = UINT16_MAX;
	static int32_t x343 = -1;
	int8_t x344 = 3;

	t48 = ((x341==x342)/(x343<=x344));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x349 = 15;
	int16_t x351 = 1820;
	static volatile int32_t t49 = -481294764;

	t49 = ((x349==x350)/(x351<=x352));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x358 = -1;
	volatile uint64_t x359 = 62270367017175LLU;
	volatile uint64_t x360 = UINT64_MAX;
	int32_t t50 = 1;

	t50 = ((x357==x358)/(x359<=x360));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x367 = 0U;
	int32_t t51 = 1;

	t51 = ((x365==x366)/(x367<=x368));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x369 = INT64_MIN;
	static int8_t x371 = -1;
	int8_t x372 = -1;

	t52 = ((x369==x370)/(x371<=x372));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x377 = INT32_MAX;
	int64_t x378 = INT64_MIN;

	t53 = ((x377==x378)/(x379<=x380));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x381 = INT32_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t54 = -8430779;

	t54 = ((x381==x382)/(x383<=x384));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x385 = 0;
	static uint16_t x386 = 1831U;
	volatile int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MIN;
	volatile int32_t t55 = 591764;

	t55 = ((x385==x386)/(x387<=x388));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x397 = INT16_MAX;
	volatile int16_t x399 = -280;
	uint8_t x400 = 0U;
	static volatile int32_t t56 = -414791;

	t56 = ((x397==x398)/(x399<=x400));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x402 = 83393U;
	static volatile uint16_t x403 = 4U;
	int64_t x404 = INT64_MAX;

	t57 = ((x401==x402)/(x403<=x404));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x405 = 31U;
	int32_t x406 = -357817771;
	static volatile uint16_t x408 = 57U;

	t58 = ((x405==x406)/(x407<=x408));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x409 = INT16_MAX;
	int64_t x411 = -1LL;
	uint32_t x412 = 128723U;
	volatile int32_t t59 = -3698;

	t59 = ((x409==x410)/(x411<=x412));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x413 = INT64_MIN;
	int8_t x414 = 5;
	int8_t x415 = -1;
	int32_t t60 = 1986702;

	t60 = ((x413==x414)/(x415<=x416));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x421 = INT32_MIN;
	static uint16_t x422 = 594U;
	int16_t x423 = 42;
	int8_t x424 = INT8_MAX;
	volatile int32_t t61 = 429;

	t61 = ((x421==x422)/(x423<=x424));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x425 = -83250LL;
	uint64_t x427 = 7LLU;
	int16_t x428 = -1;

	t62 = ((x425==x426)/(x427<=x428));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x429 = 168053LLU;
	int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MAX;
	int64_t x432 = 188543LL;
	volatile int32_t t63 = -1850;

	t63 = ((x429==x430)/(x431<=x432));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x433 = 266696888503LL;
	volatile int8_t x434 = INT8_MIN;
	int64_t x435 = INT64_MIN;
	volatile int16_t x436 = INT16_MIN;
	int32_t t64 = -299334138;

	t64 = ((x433==x434)/(x435<=x436));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x437 = UINT32_MAX;
	int16_t x438 = INT16_MIN;
	static int64_t x440 = -1LL;

	t65 = ((x437==x438)/(x439<=x440));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x446 = 1U;
	int64_t x447 = -1LL;
	int8_t x448 = INT8_MAX;
	static int32_t t66 = -26006;

	t66 = ((x445==x446)/(x447<=x448));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x459 = 5690U;
	volatile uint16_t x460 = UINT16_MAX;
	volatile int32_t t67 = -61;

	t67 = ((x457==x458)/(x459<=x460));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x462 = UINT16_MAX;
	volatile int64_t x463 = INT64_MIN;
	int32_t t68 = -36877922;

	t68 = ((x461==x462)/(x463<=x464));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x466 = 2U;
	static int64_t x467 = INT64_MIN;
	volatile int32_t t69 = -7531476;

	t69 = ((x465==x466)/(x467<=x468));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x469 = INT32_MIN;
	uint32_t x470 = UINT32_MAX;
	static int32_t t70 = -359;

	t70 = ((x469==x470)/(x471<=x472));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x473 = 7U;
	int8_t x474 = INT8_MAX;
	static int16_t x475 = INT16_MIN;
	int8_t x476 = INT8_MIN;
	volatile int32_t t71 = 138694783;

	t71 = ((x473==x474)/(x475<=x476));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x477 = 47U;
	int8_t x478 = -1;
	int32_t x479 = INT32_MIN;
	static volatile int32_t t72 = -1382803;

	t72 = ((x477==x478)/(x479<=x480));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x485 = INT16_MIN;
	int8_t x486 = 0;
	uint8_t x487 = 114U;
	static volatile uint16_t x488 = 1625U;
	static volatile int32_t t73 = 63;

	t73 = ((x485==x486)/(x487<=x488));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x489 = UINT8_MAX;
	uint32_t x490 = UINT32_MAX;
	int16_t x491 = -1;
	static volatile uint32_t x492 = UINT32_MAX;
	int32_t t74 = -1;

	t74 = ((x489==x490)/(x491<=x492));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x493 = 256568268LL;
	static volatile int64_t x494 = INT64_MIN;
	uint8_t x495 = UINT8_MAX;
	uint32_t x496 = 2101329U;
	static int32_t t75 = -52094;

	t75 = ((x493==x494)/(x495<=x496));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x498 = 0U;
	static uint32_t x499 = 99U;
	uint64_t x500 = 242844463101LLU;

	t76 = ((x497==x498)/(x499<=x500));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x502 = -15;
	int32_t x503 = -27890845;
	int16_t x504 = -1;
	volatile int32_t t77 = -56;

	t77 = ((x501==x502)/(x503<=x504));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x505 = INT32_MIN;
	volatile int16_t x506 = INT16_MIN;
	volatile int16_t x507 = -6;
	int8_t x508 = -2;
	volatile int32_t t78 = -76250;

	t78 = ((x505==x506)/(x507<=x508));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x517 = INT8_MIN;
	int16_t x518 = -5682;
	volatile int32_t x519 = INT32_MIN;
	int16_t x520 = 0;
	volatile int32_t t79 = 6718310;

	t79 = ((x517==x518)/(x519<=x520));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x533 = 1019713U;
	int16_t x535 = INT16_MIN;
	int64_t x536 = 91937942017LL;
	volatile int32_t t80 = 3267;

	t80 = ((x533==x534)/(x535<=x536));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x543 = INT32_MIN;
	int64_t x544 = INT64_MAX;

	t81 = ((x541==x542)/(x543<=x544));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x549 = INT8_MIN;
	static volatile uint32_t x550 = UINT32_MAX;
	static uint32_t x551 = 23716320U;
	int8_t x552 = INT8_MIN;
	volatile int32_t t82 = -2009;

	t82 = ((x549==x550)/(x551<=x552));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x554 = 66211LLU;
	int64_t x555 = -1LL;
	uint32_t x556 = 112U;
	int32_t t83 = -487170836;

	t83 = ((x553==x554)/(x555<=x556));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x570 = -304;
	static volatile int32_t x571 = INT32_MIN;
	volatile int32_t t84 = -49;

	t84 = ((x569==x570)/(x571<=x572));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x573 = INT8_MAX;
	static volatile int16_t x574 = 47;
	int32_t x575 = INT32_MAX;
	int32_t t85 = 4127;

	t85 = ((x573==x574)/(x575<=x576));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x589 = INT32_MAX;
	int32_t x590 = -1;
	volatile int8_t x591 = -1;
	uint8_t x592 = 10U;
	int32_t t86 = 26223487;

	t86 = ((x589==x590)/(x591<=x592));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x605 = INT16_MIN;
	static volatile int32_t x606 = -651451;
	int32_t x607 = INT32_MIN;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t87 = -28233;

	t87 = ((x605==x606)/(x607<=x608));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x609 = INT16_MIN;
	int16_t x610 = -820;
	int16_t x611 = INT16_MIN;
	int32_t x612 = INT32_MAX;
	volatile int32_t t88 = 0;

	t88 = ((x609==x610)/(x611<=x612));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x613 = UINT8_MAX;
	int8_t x614 = -1;
	volatile int32_t x615 = INT32_MIN;
	volatile int16_t x616 = 0;
	volatile int32_t t89 = -28969861;

	t89 = ((x613==x614)/(x615<=x616));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x629 = -62;
	volatile uint32_t x630 = UINT32_MAX;
	int64_t x631 = 15LL;
	int64_t x632 = 1584420308212618LL;
	int32_t t90 = 1;

	t90 = ((x629==x630)/(x631<=x632));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x634 = INT16_MAX;
	int32_t x635 = INT32_MIN;
	volatile int32_t t91 = -10;

	t91 = ((x633==x634)/(x635<=x636));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x637 = INT8_MIN;
	uint16_t x639 = 6U;
	static volatile int32_t t92 = -2978417;

	t92 = ((x637==x638)/(x639<=x640));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x645 = 2541831U;
	volatile uint8_t x647 = 0U;
	uint32_t x648 = UINT32_MAX;

	t93 = ((x645==x646)/(x647<=x648));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x649 = -888273566;
	uint8_t x650 = 3U;
	uint64_t x652 = 2459691888622134101LLU;
	static volatile int32_t t94 = -711770456;

	t94 = ((x649==x650)/(x651<=x652));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x653 = 2U;
	volatile uint16_t x656 = UINT16_MAX;
	static int32_t t95 = 33932;

	t95 = ((x653==x654)/(x655<=x656));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x661 = -410642810790700073LL;
	int8_t x662 = INT8_MIN;
	uint8_t x664 = 11U;
	int32_t t96 = 32589678;

	t96 = ((x661==x662)/(x663<=x664));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x669 = 128LLU;
	static volatile uint64_t x672 = UINT64_MAX;
	int32_t t97 = -227;

	t97 = ((x669==x670)/(x671<=x672));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x685 = INT8_MAX;
	int64_t x686 = -200LL;
	int32_t x688 = INT32_MAX;
	volatile int32_t t98 = -2275;

	t98 = ((x685==x686)/(x687<=x688));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x698 = UINT16_MAX;
	uint8_t x699 = UINT8_MAX;
	uint32_t x700 = UINT32_MAX;
	int32_t t99 = 1060228147;

	t99 = ((x697==x698)/(x699<=x700));

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

