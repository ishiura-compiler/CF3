#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x17 = INT16_MAX;
static uint16_t x18 = 9788U;
static uint64_t x38 = 607275186LLU;
uint64_t x59 = 918345784924087100LLU;
uint8_t x64 = UINT8_MAX;
static int16_t x75 = INT16_MIN;
int64_t x83 = INT64_MIN;
uint8_t x94 = 70U;
volatile int8_t x99 = -1;
volatile int8_t x105 = 39;
int64_t x106 = -63677LL;
volatile int32_t t11 = 51390;
static int32_t x112 = INT32_MIN;
uint8_t x129 = 4U;
int32_t t15 = 119206;
uint32_t x157 = 16447U;
volatile uint64_t x177 = UINT64_MAX;
uint32_t x178 = 23U;
int64_t x187 = INT64_MIN;
int32_t t21 = 1;
int8_t x193 = INT8_MAX;
volatile uint32_t x198 = UINT32_MAX;
volatile uint8_t x199 = 4U;
uint16_t x209 = 268U;
volatile uint32_t x224 = 23766812U;
uint16_t x232 = 1U;
int64_t x237 = 142133536168014LL;
uint32_t x242 = UINT32_MAX;
uint16_t x246 = 0U;
int16_t x247 = 30;
int32_t x249 = 13746318;
int8_t x250 = INT8_MIN;
int16_t x253 = INT16_MAX;
int64_t x256 = -34836227504LL;
volatile int8_t x280 = 8;
int32_t t35 = -61192621;
static uint32_t x289 = UINT32_MAX;
volatile uint32_t x292 = 1693U;
int8_t x299 = -1;
volatile int64_t x300 = 23878148LL;
volatile int64_t x304 = -1LL;
int8_t x307 = INT8_MIN;
static volatile uint32_t t41 = UINT32_MAX;
int8_t x318 = INT8_MIN;
volatile int32_t t44 = 150943552;
volatile int32_t t45 = 10055;
int8_t x334 = INT8_MAX;
uint32_t x335 = UINT32_MAX;
uint32_t x336 = 771U;
volatile uint32_t t46 = 1U;
volatile int32_t x364 = INT32_MIN;
int8_t x395 = INT8_MAX;
int16_t x396 = INT16_MIN;
volatile uint64_t t55 = UINT64_MAX;
volatile int32_t x442 = 10221;
static volatile int32_t t56 = -441842256;
uint64_t x445 = 28826336249LLU;
static int32_t x447 = -21241038;
uint16_t x448 = 1U;
uint16_t x465 = UINT16_MAX;
uint8_t x479 = UINT8_MAX;
int8_t x493 = 3;
uint8_t x506 = UINT8_MAX;
volatile int32_t x507 = INT32_MIN;
volatile uint16_t x511 = UINT16_MAX;
volatile int32_t x520 = -1;
volatile uint8_t x538 = 5U;
uint64_t x540 = 78040328LLU;
uint8_t x546 = 2U;
int32_t x562 = INT32_MIN;
uint32_t x568 = 1994771U;
uint16_t x571 = UINT16_MAX;
int8_t x602 = INT8_MAX;
int8_t x603 = -1;
volatile uint32_t x604 = UINT32_MAX;
int32_t x607 = -1;
volatile int16_t x612 = 346;
int64_t x622 = INT64_MAX;
int64_t x628 = -1LL;
uint8_t x639 = UINT8_MAX;
int16_t x647 = INT16_MIN;
static int16_t x671 = -1;
static int16_t x672 = -1;
static uint32_t x675 = UINT32_MAX;
volatile uint8_t x676 = 2U;
volatile int32_t t87 = 0;
static volatile uint32_t x685 = 6934834U;
volatile int16_t x687 = 5;
int64_t x690 = -1LL;
volatile int32_t t89 = 3499231;
static uint16_t x715 = UINT16_MAX;
static int64_t x722 = -1LL;
volatile int64_t x724 = 1LL;
int32_t t93 = -57045;
int64_t x737 = INT64_MAX;
uint16_t x746 = UINT16_MAX;
volatile uint16_t x748 = 4U;
static volatile int32_t t95 = 3316645;
int16_t x753 = INT16_MAX;
int32_t t96 = -1;
int8_t x766 = -1;
int8_t x767 = INT8_MAX;


void f0(void) {
	uint8_t x19 = 4U;
	static volatile int32_t x20 = -1;
	static volatile int32_t t0 = -477137229;

	t0 = (x17<<((x18<x19)&x20));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x37 = UINT8_MAX;
	uint16_t x39 = 460U;
	volatile int8_t x40 = INT8_MAX;
	static volatile int32_t t1 = 1190;

	t1 = (x37<<((x38<x39)&x40));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x57 = 5354588U;
	uint32_t x58 = 95U;
	int8_t x60 = INT8_MIN;
	uint32_t t2 = 18138U;

	t2 = (x57<<((x58<x59)&x60));

	if (t2 != 5354588U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x61 = 336;
	static volatile int64_t x62 = 591LL;
	int64_t x63 = -11578LL;
	volatile int32_t t3 = -2;

	t3 = (x61<<((x62<x63)&x64));

	if (t3 != 336) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x69 = INT64_MAX;
	uint64_t x70 = 2661403LLU;
	int16_t x71 = INT16_MAX;
	uint16_t x72 = 5U;
	static volatile int64_t t4 = INT64_MAX;

	t4 = (x69<<((x70<x71)&x72));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = -1;
	int64_t x76 = INT64_MIN;
	int32_t t5 = -153985806;

	t5 = (x73<<((x74<x75)&x76));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x81 = 7;
	volatile int16_t x82 = 82;
	int8_t x84 = 38;
	volatile int32_t t6 = -384629594;

	t6 = (x81<<((x82<x83)&x84));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x89 = INT64_MAX;
	static uint64_t x90 = UINT64_MAX;
	uint8_t x91 = 0U;
	int64_t x92 = -188280812LL;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x89<<((x90<x91)&x92));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x93 = UINT32_MAX;
	uint8_t x95 = 23U;
	int64_t x96 = 3LL;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = (x93<<((x94<x95)&x96));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x97 = 14U;
	volatile int64_t x98 = 44687328564LL;
	static int64_t x100 = INT64_MIN;
	static int32_t t9 = -160;

	t9 = (x97<<((x98<x99)&x100));

	if (t9 != 14) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x101 = UINT16_MAX;
	volatile int16_t x102 = INT16_MAX;
	uint64_t x103 = UINT64_MAX;
	uint8_t x104 = UINT8_MAX;
	static int32_t t10 = -21552785;

	t10 = (x101<<((x102<x103)&x104));

	if (t10 != 131070) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x107 = UINT8_MAX;
	uint8_t x108 = 7U;

	t11 = (x105<<((x106<x107)&x108));

	if (t11 != 78) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x109 = UINT64_MAX;
	static int32_t x110 = -7242;
	uint64_t x111 = UINT64_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = (x109<<((x110<x111)&x112));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x113 = 1U;
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = -1;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t13 = 352;

	t13 = (x113<<((x114<x115)&x116));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x125 = 3U;
	static volatile int16_t x126 = -1;
	volatile int64_t x127 = -1LL;
	int32_t x128 = INT32_MIN;
	int32_t t14 = -235408719;

	t14 = (x125<<((x126<x127)&x128));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x130 = INT32_MIN;
	uint32_t x131 = 456768U;
	uint32_t x132 = 5980317U;

	t15 = (x129<<((x130<x131)&x132));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x145 = UINT64_MAX;
	int16_t x146 = INT16_MAX;
	uint8_t x147 = 2U;
	uint16_t x148 = UINT16_MAX;
	uint64_t t16 = UINT64_MAX;

	t16 = (x145<<((x146<x147)&x148));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x153 = INT8_MAX;
	static uint8_t x154 = 0U;
	int16_t x155 = -73;
	int64_t x156 = INT64_MIN;
	volatile int32_t t17 = -6447197;

	t17 = (x153<<((x154<x155)&x156));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x158 = 0;
	static uint64_t x159 = UINT64_MAX;
	uint8_t x160 = UINT8_MAX;
	uint32_t t18 = 1859978592U;

	t18 = (x157<<((x158<x159)&x160));

	if (t18 != 32894U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x173 = 209620345U;
	static uint8_t x174 = 13U;
	uint64_t x175 = UINT64_MAX;
	static volatile uint64_t x176 = 2LLU;
	uint32_t t19 = 524U;

	t19 = (x173<<((x174<x175)&x176));

	if (t19 != 209620345U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x179 = 12824997LL;
	static int64_t x180 = -1LL;
	uint64_t t20 = 159LLU;

	t20 = (x177<<((x178<x179)&x180));

	if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x185 = INT16_MAX;
	static int16_t x186 = 2331;
	static uint32_t x188 = UINT32_MAX;

	t21 = (x185<<((x186<x187)&x188));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x194 = -1;
	uint64_t x195 = UINT64_MAX;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t22 = 242320020;

	t22 = (x193<<((x194<x195)&x196));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x197 = UINT16_MAX;
	uint16_t x200 = 44U;
	volatile int32_t t23 = -30;

	t23 = (x197<<((x198<x199)&x200));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x210 = -31438295735LL;
	int32_t x211 = INT32_MAX;
	int32_t x212 = -347;
	volatile int32_t t24 = 0;

	t24 = (x209<<((x210<x211)&x212));

	if (t24 != 536) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x217 = INT64_MAX;
	uint16_t x218 = 10045U;
	int8_t x219 = INT8_MIN;
	static uint16_t x220 = 331U;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x217<<((x218<x219)&x220));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x221 = 1U;
	int32_t x222 = INT32_MAX;
	volatile uint32_t x223 = 41623182U;
	int32_t t26 = -48;

	t26 = (x221<<((x222<x223)&x224));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x229 = 7313;
	int8_t x230 = 1;
	volatile int32_t x231 = INT32_MIN;
	int32_t t27 = 46;

	t27 = (x229<<((x230<x231)&x232));

	if (t27 != 7313) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x238 = UINT8_MAX;
	int64_t x239 = INT64_MAX;
	static int32_t x240 = -12166875;
	volatile int64_t t28 = -567229569LL;

	t28 = (x237<<((x238<x239)&x240));

	if (t28 != 284267072336028LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x241 = 1U;
	volatile uint8_t x243 = UINT8_MAX;
	static int8_t x244 = INT8_MIN;
	int32_t t29 = 6655177;

	t29 = (x241<<((x242<x243)&x244));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x245 = UINT16_MAX;
	volatile int32_t x248 = INT32_MIN;
	static int32_t t30 = 1385;

	t30 = (x245<<((x246<x247)&x248));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x251 = 343557055U;
	int32_t x252 = INT32_MIN;
	int32_t t31 = -3872;

	t31 = (x249<<((x250<x251)&x252));

	if (t31 != 13746318) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x254 = INT16_MIN;
	static int64_t x255 = INT64_MIN;
	int32_t t32 = -972838;

	t32 = (x253<<((x254<x255)&x256));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x261 = 663U;
	int8_t x262 = 2;
	int16_t x263 = INT16_MAX;
	int32_t x264 = -1;
	static int32_t t33 = -6;

	t33 = (x261<<((x262<x263)&x264));

	if (t33 != 1326) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x265 = 63U;
	static volatile uint64_t x266 = 61338LLU;
	static int8_t x267 = -1;
	uint32_t x268 = 59836531U;
	int32_t t34 = -497390238;

	t34 = (x265<<((x266<x267)&x268));

	if (t34 != 126) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x277 = 3U;
	volatile int64_t x278 = -320871445477552LL;
	int64_t x279 = -314229669602604LL;

	t35 = (x277<<((x278<x279)&x280));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x285 = INT8_MAX;
	int32_t x286 = INT32_MIN;
	static volatile int8_t x287 = INT8_MAX;
	static volatile int16_t x288 = INT16_MIN;
	static volatile int32_t t36 = -1348;

	t36 = (x285<<((x286<x287)&x288));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x290 = 32U;
	int16_t x291 = INT16_MIN;
	volatile uint32_t t37 = 43414348U;

	t37 = (x289<<((x290<x291)&x292));

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x293 = 161;
	uint16_t x294 = 248U;
	int8_t x295 = INT8_MIN;
	static uint64_t x296 = UINT64_MAX;
	volatile int32_t t38 = -13881;

	t38 = (x293<<((x294<x295)&x296));

	if (t38 != 161) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x297 = 702963432LLU;
	int64_t x298 = 62008051035697050LL;
	volatile uint64_t t39 = 222LLU;

	t39 = (x297<<((x298<x299)&x300));

	if (t39 != 702963432LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x301 = 598;
	static int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	static int32_t t40 = 15890017;

	t40 = (x301<<((x302<x303)&x304));

	if (t40 != 1196) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = UINT64_MAX;
	volatile int64_t x308 = -62231850179LL;

	t41 = (x305<<((x306<x307)&x308));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x309 = INT64_MAX;
	int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;
	static int64_t t42 = INT64_MAX;

	t42 = (x309<<((x310<x311)&x312));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x313 = 1;
	uint16_t x314 = 354U;
	int32_t x315 = INT32_MAX;
	volatile uint16_t x316 = 2458U;
	volatile int32_t t43 = 7209206;

	t43 = (x313<<((x314<x315)&x316));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x317 = 26501U;
	static int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MIN;

	t44 = (x317<<((x318<x319)&x320));

	if (t44 != 26501) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x329 = INT16_MAX;
	uint16_t x330 = UINT16_MAX;
	uint64_t x331 = 11620030359252LLU;
	static int8_t x332 = 1;

	t45 = (x329<<((x330<x331)&x332));

	if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x333 = UINT32_MAX;

	t46 = (x333<<((x334<x335)&x336));

	if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x341 = 56890609;
	volatile int32_t x342 = 6714;
	uint64_t x343 = 28382166838343LLU;
	volatile int64_t x344 = 2192403689999313LL;
	int32_t t47 = 0;

	t47 = (x341<<((x342<x343)&x344));

	if (t47 != 113781218) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x345 = 490099311U;
	volatile int16_t x346 = INT16_MIN;
	int64_t x347 = -1LL;
	int64_t x348 = INT64_MIN;
	volatile uint32_t t48 = 58033546U;

	t48 = (x345<<((x346<x347)&x348));

	if (t48 != 490099311U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x361 = 31178026;
	static int16_t x362 = -1;
	int32_t x363 = -33218766;
	volatile int32_t t49 = -5;

	t49 = (x361<<((x362<x363)&x364));

	if (t49 != 31178026) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x377 = 12U;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MIN;
	volatile uint8_t x380 = UINT8_MAX;
	volatile uint32_t t50 = 68076U;

	t50 = (x377<<((x378<x379)&x380));

	if (t50 != 12U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x385 = 4681216625LL;
	int64_t x386 = INT64_MIN;
	uint8_t x387 = UINT8_MAX;
	uint64_t x388 = 1000828268196965LLU;
	int64_t t51 = -419LL;

	t51 = (x385<<((x386<x387)&x388));

	if (t51 != 9362433250LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x393 = 4LL;
	volatile int32_t x394 = 2636;
	volatile int64_t t52 = 0LL;

	t52 = (x393<<((x394<x395)&x396));

	if (t52 != 4LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x401 = 307450554;
	volatile int32_t x402 = -1;
	int64_t x403 = INT64_MIN;
	volatile int16_t x404 = 48;
	int32_t t53 = -1;

	t53 = (x401<<((x402<x403)&x404));

	if (t53 != 307450554) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x417 = 6304LLU;
	static int64_t x418 = -5504459LL;
	uint64_t x419 = UINT64_MAX;
	int8_t x420 = INT8_MAX;
	volatile uint64_t t54 = 51159161LLU;

	t54 = (x417<<((x418<x419)&x420));

	if (t54 != 12608LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x429 = UINT64_MAX;
	int16_t x430 = INT16_MAX;
	int64_t x431 = INT64_MIN;
	volatile int8_t x432 = -1;

	t55 = (x429<<((x430<x431)&x432));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x441 = 2;
	int64_t x443 = -1LL;
	int16_t x444 = -1;

	t56 = (x441<<((x442<x443)&x444));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x446 = 4256347563137LLU;
	volatile uint64_t t57 = 12LLU;

	t57 = (x445<<((x446<x447)&x448));

	if (t57 != 57652672498LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x461 = 518974;
	static int8_t x462 = INT8_MIN;
	int32_t x463 = -1;
	volatile int64_t x464 = -1LL;
	int32_t t58 = 1;

	t58 = (x461<<((x462<x463)&x464));

	if (t58 != 1037948) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x466 = INT64_MAX;
	int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MIN;
	static volatile int32_t t59 = 266469371;

	t59 = (x465<<((x466<x467)&x468));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x477 = 31276U;
	volatile int32_t x478 = INT32_MIN;
	int32_t x480 = INT32_MAX;
	uint32_t t60 = 4474U;

	t60 = (x477<<((x478<x479)&x480));

	if (t60 != 62552U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x494 = 0U;
	int64_t x495 = INT64_MIN;
	static uint8_t x496 = 0U;
	volatile int32_t t61 = 3;

	t61 = (x493<<((x494<x495)&x496));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x505 = 756U;
	volatile int64_t x508 = -1LL;
	int32_t t62 = 112;

	t62 = (x505<<((x506<x507)&x508));

	if (t62 != 756) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x509 = UINT32_MAX;
	volatile int8_t x510 = INT8_MIN;
	volatile int64_t x512 = -2742LL;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x509<<((x510<x511)&x512));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x517 = 15U;
	static int64_t x518 = INT64_MIN;
	volatile int64_t x519 = -10961LL;
	volatile uint32_t t64 = 257U;

	t64 = (x517<<((x518<x519)&x520));

	if (t64 != 30U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x521 = 3045366U;
	volatile uint64_t x522 = 73279569735077176LLU;
	int32_t x523 = INT32_MIN;
	static int32_t x524 = -6;
	uint32_t t65 = 2U;

	t65 = (x521<<((x522<x523)&x524));

	if (t65 != 3045366U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x525 = 5U;
	static volatile int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MIN;
	int8_t x528 = INT8_MIN;
	static volatile int32_t t66 = 61;

	t66 = (x525<<((x526<x527)&x528));

	if (t66 != 5) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x529 = INT64_MAX;
	volatile int32_t x530 = INT32_MAX;
	static int64_t x531 = -2LL;
	static volatile int32_t x532 = INT32_MAX;
	int64_t t67 = INT64_MAX;

	t67 = (x529<<((x530<x531)&x532));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x537 = 56;
	volatile int16_t x539 = -1;
	int32_t t68 = -982354236;

	t68 = (x537<<((x538<x539)&x540));

	if (t68 != 56) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x545 = UINT64_MAX;
	int8_t x547 = -1;
	int32_t x548 = INT32_MIN;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x545<<((x546<x547)&x548));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x553 = 2U;
	static uint16_t x554 = 3U;
	volatile int8_t x555 = -39;
	int32_t x556 = -226;
	uint32_t t70 = 4496U;

	t70 = (x553<<((x554<x555)&x556));

	if (t70 != 2U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x561 = 54;
	volatile int64_t x563 = INT64_MIN;
	uint32_t x564 = UINT32_MAX;
	volatile int32_t t71 = -12086;

	t71 = (x561<<((x562<x563)&x564));

	if (t71 != 54) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x565 = 3;
	static volatile int32_t x566 = INT32_MIN;
	int16_t x567 = INT16_MIN;
	static int32_t t72 = 176767;

	t72 = (x565<<((x566<x567)&x568));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x569 = 4639U;
	uint16_t x570 = 5U;
	int8_t x572 = INT8_MAX;
	int32_t t73 = -395;

	t73 = (x569<<((x570<x571)&x572));

	if (t73 != 9278) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x577 = UINT8_MAX;
	int8_t x578 = INT8_MIN;
	volatile int16_t x579 = -82;
	int8_t x580 = -1;
	static int32_t t74 = 0;

	t74 = (x577<<((x578<x579)&x580));

	if (t74 != 510) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x597 = INT32_MAX;
	uint64_t x598 = 314350484LLU;
	int64_t x599 = 600135425112146LL;
	uint16_t x600 = 248U;
	int32_t t75 = INT32_MAX;

	t75 = (x597<<((x598<x599)&x600));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x601 = 1;
	int32_t t76 = 5281;

	t76 = (x601<<((x602<x603)&x604));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x605 = INT64_MAX;
	int8_t x606 = 1;
	uint16_t x608 = 7219U;
	static volatile int64_t t77 = INT64_MAX;

	t77 = (x605<<((x606<x607)&x608));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x609 = INT32_MAX;
	uint32_t x610 = 10U;
	int32_t x611 = 964423;
	int32_t t78 = INT32_MAX;

	t78 = (x609<<((x610<x611)&x612));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x621 = INT32_MAX;
	int64_t x623 = INT64_MAX;
	int64_t x624 = INT64_MIN;
	static volatile int32_t t79 = INT32_MAX;

	t79 = (x621<<((x622<x623)&x624));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x625 = 448497U;
	static uint16_t x626 = 258U;
	int64_t x627 = INT64_MAX;
	volatile uint32_t t80 = 4U;

	t80 = (x625<<((x626<x627)&x628));

	if (t80 != 896994U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x633 = 1939;
	uint32_t x634 = 375U;
	static int64_t x635 = INT64_MIN;
	static uint8_t x636 = UINT8_MAX;
	int32_t t81 = 2;

	t81 = (x633<<((x634<x635)&x636));

	if (t81 != 1939) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x637 = 26290279760LL;
	volatile int8_t x638 = -11;
	static uint64_t x640 = 337852LLU;
	static volatile int64_t t82 = 2299917036632LL;

	t82 = (x637<<((x638<x639)&x640));

	if (t82 != 26290279760LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x645 = 1961806304699LLU;
	int32_t x646 = -17321491;
	int32_t x648 = INT32_MAX;
	static volatile uint64_t t83 = 1337832913127023LLU;

	t83 = (x645<<((x646<x647)&x648));

	if (t83 != 3923612609398LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x653 = UINT64_MAX;
	volatile uint8_t x654 = UINT8_MAX;
	volatile int64_t x655 = -29410LL;
	volatile uint8_t x656 = 19U;
	uint64_t t84 = UINT64_MAX;

	t84 = (x653<<((x654<x655)&x656));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x657 = UINT32_MAX;
	static int64_t x658 = -18197800LL;
	int16_t x659 = INT16_MIN;
	uint64_t x660 = UINT64_MAX;
	uint32_t t85 = 334633U;

	t85 = (x657<<((x658<x659)&x660));

	if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x669 = UINT16_MAX;
	uint64_t x670 = UINT64_MAX;
	int32_t t86 = -41;

	t86 = (x669<<((x670<x671)&x672));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x673 = 55U;
	volatile uint64_t x674 = UINT64_MAX;

	t87 = (x673<<((x674<x675)&x676));

	if (t87 != 55) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x686 = INT8_MAX;
	volatile int16_t x688 = -1;
	volatile uint32_t t88 = 531688326U;

	t88 = (x685<<((x686<x687)&x688));

	if (t88 != 6934834U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x689 = 7U;
	volatile uint64_t x691 = 1354481095933884035LLU;
	static int16_t x692 = -1;

	t89 = (x689<<((x690<x691)&x692));

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x693 = 4LL;
	int32_t x694 = 31444;
	int64_t x695 = INT64_MAX;
	static int16_t x696 = INT16_MIN;
	volatile int64_t t90 = -57369169859273923LL;

	t90 = (x693<<((x694<x695)&x696));

	if (t90 != 4LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x713 = INT16_MAX;
	uint32_t x714 = 12389135U;
	volatile uint32_t x716 = 7395U;
	static int32_t t91 = -431180;

	t91 = (x713<<((x714<x715)&x716));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x721 = UINT64_MAX;
	uint8_t x723 = 3U;
	volatile uint64_t t92 = 61LLU;

	t92 = (x721<<((x722<x723)&x724));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x729 = 12;
	int32_t x730 = INT32_MAX;
	volatile int8_t x731 = -11;
	volatile int8_t x732 = INT8_MAX;

	t93 = (x729<<((x730<x731)&x732));

	if (t93 != 12) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x738 = INT64_MAX;
	volatile int64_t x739 = INT64_MAX;
	static uint64_t x740 = 145256984018LLU;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x737<<((x738<x739)&x740));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x745 = 3U;
	volatile int16_t x747 = -3310;

	t95 = (x745<<((x746<x747)&x748));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x754 = 5U;
	static uint8_t x755 = 3U;
	int64_t x756 = -204820159LL;

	t96 = (x753<<((x754<x755)&x756));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x757 = 6U;
	uint16_t x758 = UINT16_MAX;
	uint64_t x759 = 121984785969192LLU;
	int64_t x760 = 29673945008882294LL;
	volatile int32_t t97 = -4819532;

	t97 = (x757<<((x758<x759)&x760));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x761 = UINT16_MAX;
	volatile uint8_t x762 = 15U;
	int64_t x763 = INT64_MAX;
	uint8_t x764 = UINT8_MAX;
	int32_t t98 = 0;

	t98 = (x761<<((x762<x763)&x764));

	if (t98 != 131070) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x765 = 346U;
	volatile int8_t x768 = -1;
	uint32_t t99 = 850667095U;

	t99 = (x765<<((x766<x767)&x768));

	if (t99 != 692U) { NG(); } else { ; }
	
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

