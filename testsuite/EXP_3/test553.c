#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x14 = UINT32_MAX;
uint32_t x19 = 2U;
int64_t t1 = 1830915905788574369LL;
volatile int32_t t3 = 8069;
int64_t x38 = INT64_MIN;
int32_t x59 = -230365;
int32_t x60 = -57096381;
int16_t x65 = 21;
int64_t x80 = INT64_MAX;
uint64_t t9 = 2277867868791LLU;
volatile int32_t x81 = -4507;
int8_t x84 = -2;
volatile int32_t t10 = 3216512;
volatile int16_t x85 = INT16_MIN;
volatile uint8_t x89 = UINT8_MAX;
uint32_t x90 = 982859U;
int8_t x121 = INT8_MIN;
int16_t x124 = INT16_MAX;
volatile uint16_t x131 = UINT16_MAX;
uint32_t x132 = 39816573U;
static int32_t x137 = -1;
static int64_t t18 = 67LL;
int32_t x158 = 3745;
int64_t t19 = 1232LL;
uint64_t x162 = 531234639LLU;
static uint16_t x170 = 3827U;
volatile int64_t x172 = 775402891247262256LL;
volatile int32_t t21 = -3545;
int32_t x204 = 2995;
int16_t x209 = INT16_MIN;
int64_t x211 = -1LL;
static int32_t x230 = -169;
int16_t x237 = INT16_MAX;
static uint16_t x240 = UINT16_MAX;
volatile uint16_t x241 = UINT16_MAX;
static int64_t x244 = -18601LL;
uint8_t x245 = 10U;
static int32_t x264 = INT32_MIN;
int8_t x277 = -1;
int16_t x279 = -1;
int16_t x280 = INT16_MIN;
int64_t x283 = -1LL;
uint64_t x295 = 115LLU;
volatile int8_t x299 = INT8_MIN;
volatile uint64_t t37 = 55835320LLU;
static uint32_t x306 = UINT32_MAX;
static volatile uint32_t x325 = 6476316U;
int8_t x328 = -42;
uint8_t x342 = UINT8_MAX;
int16_t x343 = -1;
static uint16_t x351 = 6U;
volatile uint64_t t44 = 17LLU;
int64_t x357 = -235663958900046177LL;
volatile int32_t x360 = 4023;
int8_t x371 = -1;
static volatile int64_t x396 = INT64_MAX;
int32_t t48 = -500123;
uint32_t x403 = UINT32_MAX;
static int8_t x425 = 1;
volatile int64_t x436 = -1290319197LL;
int8_t x438 = INT8_MIN;
int32_t t54 = 25225;
int32_t x461 = INT32_MIN;
volatile uint32_t x462 = UINT32_MAX;
int32_t t60 = -58207;
int16_t x482 = INT16_MIN;
int32_t x484 = INT32_MIN;
int32_t t61 = 13243164;
uint64_t t62 = 2471584LLU;
int64_t x504 = INT64_MIN;
volatile int64_t t63 = 483933LL;
int8_t x513 = -1;
volatile uint8_t x525 = UINT8_MAX;
static uint64_t t67 = 141563LLU;
int8_t x532 = INT8_MIN;
uint64_t x545 = UINT64_MAX;
uint16_t x546 = UINT16_MAX;
uint32_t x547 = 176039U;
int16_t x554 = INT16_MIN;
static int32_t t72 = 10074707;
int64_t x558 = 188258447LL;
int16_t x560 = INT16_MIN;
int64_t x562 = 28016LL;
uint32_t x563 = UINT32_MAX;
int16_t x581 = -89;
int32_t x582 = INT32_MIN;
int64_t x585 = -1LL;
int16_t x591 = -1;
volatile int16_t x609 = -1;
uint64_t x612 = 12026505861445225LLU;
int16_t x614 = INT16_MAX;
uint16_t x616 = UINT16_MAX;
volatile int32_t t79 = 121614;
int32_t x618 = INT32_MIN;
int32_t t82 = -508187786;
int64_t t83 = 1539504293675357141LL;
uint64_t x686 = UINT64_MAX;
uint32_t x697 = UINT32_MAX;
static int8_t x700 = INT8_MIN;
static uint16_t x706 = 5082U;
int16_t x707 = INT16_MAX;
uint64_t x709 = 2327LLU;
uint64_t t89 = 139737882298534LLU;
static int64_t x717 = 240727793797930LL;
int16_t x720 = 1;
int64_t t90 = 1LL;
static int32_t x723 = -31626;
static uint64_t x724 = UINT64_MAX;
volatile int64_t x740 = INT64_MIN;
int8_t x741 = INT8_MAX;
volatile int32_t x743 = -15;
uint64_t x764 = UINT64_MAX;
uint32_t x768 = UINT32_MAX;
volatile int16_t x770 = INT16_MAX;


void f0(void) {
	int64_t x13 = 1088759381LL;
	static int8_t x15 = INT8_MIN;
	volatile uint16_t x16 = 23654U;
	static volatile int64_t t0 = 48815390211LL;

	t0 = ((x13/x14)>>(x15/x16));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = -12839LL;
	uint16_t x18 = UINT16_MAX;
	uint32_t x20 = 31U;

	t1 = ((x17/x18)>>(x19/x20));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = INT8_MAX;
	int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t2 = 299871968LL;

	t2 = ((x25/x26)>>(x27/x28));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x29 = -1;
	uint8_t x30 = 32U;
	int32_t x31 = 1;
	volatile uint8_t x32 = UINT8_MAX;

	t3 = ((x29/x30)>>(x31/x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x37 = INT16_MIN;
	int64_t x39 = -1LL;
	int32_t x40 = INT32_MIN;
	volatile int64_t t4 = -5200634LL;

	t4 = ((x37/x38)>>(x39/x40));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x57 = 3U;
	volatile uint16_t x58 = 13242U;
	uint32_t t5 = 7U;

	t5 = ((x57/x58)>>(x59/x60));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x61 = INT32_MAX;
	static uint16_t x62 = UINT16_MAX;
	static volatile int16_t x63 = INT16_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t6 = -78637;

	t6 = ((x61/x62)>>(x63/x64));

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x66 = INT64_MIN;
	int32_t x67 = -553451;
	int16_t x68 = INT16_MIN;
	volatile int64_t t7 = 92186206463890LL;

	t7 = ((x65/x66)>>(x67/x68));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int8_t x70 = INT8_MIN;
	static int8_t x71 = 1;
	static int64_t x72 = INT64_MIN;
	static volatile uint64_t t8 = 326760390256704LLU;

	t8 = ((x69/x70)>>(x71/x72));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x77 = 30;
	static volatile uint64_t x78 = 1717885671496770629LLU;
	static int64_t x79 = -1LL;

	t9 = ((x77/x78)>>(x79/x80));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x82 = -1;
	uint32_t x83 = UINT32_MAX;

	t10 = ((x81/x82)>>(x83/x84));

	if (t10 != 2253) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x86 = -30;
	volatile int8_t x87 = 4;
	uint8_t x88 = UINT8_MAX;
	int32_t t11 = 59387885;

	t11 = ((x85/x86)>>(x87/x88));

	if (t11 != 1092) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x91 = 1U;
	uint64_t x92 = 6114LLU;
	uint32_t t12 = 1312972014U;

	t12 = ((x89/x90)>>(x91/x92));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x101 = 0;
	int8_t x102 = INT8_MIN;
	static uint64_t x103 = 19LLU;
	uint16_t x104 = 413U;
	int32_t t13 = -497342;

	t13 = ((x101/x102)>>(x103/x104));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x109 = 14;
	uint16_t x110 = 31U;
	volatile uint16_t x111 = 381U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t14 = 0;

	t14 = ((x109/x110)>>(x111/x112));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x113 = INT8_MIN;
	int16_t x114 = -36;
	static int8_t x115 = -7;
	int64_t x116 = INT64_MAX;
	int32_t t15 = -62;

	t15 = ((x113/x114)>>(x115/x116));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = INT8_MIN;
	volatile uint64_t t16 = 2546370641LLU;

	t16 = ((x121/x122)>>(x123/x124));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x129 = 8U;
	static uint32_t x130 = UINT32_MAX;
	volatile uint32_t t17 = 1714U;

	t17 = ((x129/x130)>>(x131/x132));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x138 = INT64_MIN;
	int16_t x139 = -1;
	int32_t x140 = INT32_MAX;

	t18 = ((x137/x138)>>(x139/x140));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x157 = -1LL;
	uint16_t x159 = 7U;
	uint16_t x160 = 40U;

	t19 = ((x157/x158)>>(x159/x160));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x161 = 6959;
	uint8_t x163 = 47U;
	uint8_t x164 = UINT8_MAX;
	uint64_t t20 = 33997280LLU;

	t20 = ((x161/x162)>>(x163/x164));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x169 = 62U;
	int32_t x171 = INT32_MIN;

	t21 = ((x169/x170)>>(x171/x172));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x201 = 2U;
	uint32_t x202 = 178U;
	uint16_t x203 = UINT16_MAX;
	uint32_t t22 = 5031485U;

	t22 = ((x201/x202)>>(x203/x204));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x210 = INT64_MAX;
	uint8_t x212 = UINT8_MAX;
	volatile int64_t t23 = -1203005710529LL;

	t23 = ((x209/x210)>>(x211/x212));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 15U;
	uint8_t x224 = UINT8_MAX;
	volatile int64_t t24 = 3000LL;

	t24 = ((x221/x222)>>(x223/x224));

	if (t24 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x225 = 333U;
	static int64_t x226 = INT64_MIN;
	static int64_t x227 = -1LL;
	int8_t x228 = -4;
	int64_t t25 = -3949LL;

	t25 = ((x225/x226)>>(x227/x228));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x229 = UINT64_MAX;
	static uint16_t x231 = 2012U;
	uint64_t x232 = 4269975299754020895LLU;
	uint64_t t26 = 8795541461423LLU;

	t26 = ((x229/x230)>>(x231/x232));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = 1U;
	static int32_t x236 = INT32_MAX;
	volatile int32_t t27 = -120;

	t27 = ((x233/x234)>>(x235/x236));

	if (t27 != 65536) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = INT16_MAX;
	volatile int32_t t28 = 26582390;

	t28 = ((x237/x238)>>(x239/x240));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x242 = 15U;
	int64_t x243 = -1LL;
	int32_t t29 = 350;

	t29 = ((x241/x242)>>(x243/x244));

	if (t29 != 4369) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x246 = UINT32_MAX;
	uint8_t x247 = 44U;
	int8_t x248 = 59;
	volatile uint32_t t30 = 2U;

	t30 = ((x245/x246)>>(x247/x248));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x253 = 21U;
	int32_t x254 = INT32_MAX;
	int32_t x255 = -2514;
	int64_t x256 = INT64_MIN;
	static volatile int32_t t31 = 1675;

	t31 = ((x253/x254)>>(x255/x256));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x261 = -90LL;
	int64_t x262 = 10549895324223LL;
	int32_t x263 = 2974802;
	volatile int64_t t32 = -13859LL;

	t32 = ((x261/x262)>>(x263/x264));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x273 = 40026902785541LLU;
	int64_t x274 = -1LL;
	volatile int64_t x275 = -1529096LL;
	volatile int32_t x276 = -217140196;
	volatile uint64_t t33 = 215473813364576058LLU;

	t33 = ((x273/x274)>>(x275/x276));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x278 = 18761U;
	volatile uint32_t t34 = 961720599U;

	t34 = ((x277/x278)>>(x279/x280));

	if (t34 != 228930U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x281 = 2;
	int64_t x282 = INT64_MIN;
	int8_t x284 = INT8_MIN;
	int64_t t35 = 33630974LL;

	t35 = ((x281/x282)>>(x283/x284));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x293 = 1U;
	static uint32_t x294 = 2084514820U;
	volatile int16_t x296 = INT16_MIN;
	uint32_t t36 = 142307U;

	t36 = ((x293/x294)>>(x295/x296));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x297 = 1026709615291186LLU;
	volatile uint8_t x298 = 34U;
	int64_t x300 = INT64_MIN;

	t37 = ((x297/x298)>>(x299/x300));

	if (t37 != 30197341626211LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x305 = -1;
	int8_t x307 = INT8_MAX;
	uint16_t x308 = UINT16_MAX;
	volatile uint32_t t38 = 50U;

	t38 = ((x305/x306)>>(x307/x308));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 5U;
	int8_t x311 = 40;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t39 = 187138364U;

	t39 = ((x309/x310)>>(x311/x312));

	if (t39 != 858993459U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x313 = 9LL;
	volatile int32_t x314 = INT32_MIN;
	volatile int16_t x315 = INT16_MIN;
	static int16_t x316 = -12264;
	int64_t t40 = 0LL;

	t40 = ((x313/x314)>>(x315/x316));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x326 = 25U;
	volatile int32_t x327 = -1;
	uint32_t t41 = 23U;

	t41 = ((x325/x326)>>(x327/x328));

	if (t41 != 259052U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x337 = INT32_MIN;
	volatile int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t42 = 2001025;

	t42 = ((x337/x338)>>(x339/x340));

	if (t42 != 16777216) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x341 = 44459308521684LL;
	volatile uint16_t x344 = 1011U;
	int64_t t43 = -276462105883LL;

	t43 = ((x341/x342)>>(x343/x344));

	if (t43 != 174350229496LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x349 = 14U;
	volatile uint64_t x350 = 9184363LLU;
	int32_t x352 = INT32_MAX;

	t44 = ((x349/x350)>>(x351/x352));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x358 = INT8_MIN;
	int16_t x359 = -108;
	volatile int64_t t45 = -17348344655586LL;

	t45 = ((x357/x358)>>(x359/x360));

	if (t45 != 1841124678906610LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	int8_t x372 = -1;
	static uint32_t t46 = 53U;

	t46 = ((x369/x370)>>(x371/x372));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x377 = 186656685LLU;
	int64_t x378 = INT64_MIN;
	volatile int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MAX;
	volatile uint64_t t47 = 73373806369509002LLU;

	t47 = ((x377/x378)>>(x379/x380));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x393 = -1;
	int16_t x394 = INT16_MIN;
	volatile uint32_t x395 = 92116U;

	t48 = ((x393/x394)>>(x395/x396));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = 18927701185608079LL;
	static uint64_t x399 = UINT64_MAX;
	int16_t x400 = INT16_MIN;
	volatile int64_t t49 = 636288572456092359LL;

	t49 = ((x397/x398)>>(x399/x400));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x401 = 144225144715356325LLU;
	uint32_t x402 = 12829441U;
	int8_t x404 = -1;
	uint64_t t50 = 31LLU;

	t50 = ((x401/x402)>>(x403/x404));

	if (t50 != 5620866283LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x421 = 28;
	uint32_t x422 = UINT32_MAX;
	volatile int32_t x423 = -440;
	static int32_t x424 = INT32_MAX;
	static uint32_t t51 = 484161U;

	t51 = ((x421/x422)>>(x423/x424));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x426 = INT32_MAX;
	uint16_t x427 = 2413U;
	static uint8_t x428 = UINT8_MAX;
	int32_t t52 = -15423785;

	t52 = ((x425/x426)>>(x427/x428));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x433 = INT32_MIN;
	int8_t x434 = INT8_MIN;
	int16_t x435 = 5;
	int32_t t53 = 2017683;

	t53 = ((x433/x434)>>(x435/x436));

	if (t53 != 16777216) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x437 = 1;
	uint64_t x439 = 590787LLU;
	int64_t x440 = -5180878048915LL;

	t54 = ((x437/x438)>>(x439/x440));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x445 = 11;
	int64_t x446 = INT64_MIN;
	static int16_t x447 = -1;
	static volatile int8_t x448 = INT8_MIN;
	volatile int64_t t55 = -26203LL;

	t55 = ((x445/x446)>>(x447/x448));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x449 = INT32_MAX;
	int64_t x450 = INT64_MIN;
	int8_t x451 = INT8_MIN;
	int32_t x452 = INT32_MAX;
	int64_t t56 = 226LL;

	t56 = ((x449/x450)>>(x451/x452));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x453 = INT8_MAX;
	static volatile int64_t x454 = INT64_MAX;
	int16_t x455 = -15549;
	uint64_t x456 = 539574214791278569LLU;
	int64_t t57 = 7LL;

	t57 = ((x453/x454)>>(x455/x456));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x457 = -22;
	int32_t x458 = INT32_MIN;
	uint32_t x459 = 978U;
	uint64_t x460 = 10856971317506LLU;
	volatile int32_t t58 = 6210082;

	t58 = ((x457/x458)>>(x459/x460));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x463 = INT32_MIN;
	volatile int64_t x464 = INT64_MIN;
	static uint32_t t59 = 827242132U;

	t59 = ((x461/x462)>>(x463/x464));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x477 = INT8_MIN;
	int16_t x478 = -1816;
	uint8_t x479 = 6U;
	static int64_t x480 = INT64_MIN;

	t60 = ((x477/x478)>>(x479/x480));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x481 = 1;
	int8_t x483 = -1;

	t61 = ((x481/x482)>>(x483/x484));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x493 = 552535834229612LLU;
	int8_t x494 = -1;
	int32_t x495 = 232;
	uint8_t x496 = 121U;

	t62 = ((x493/x494)>>(x495/x496));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x501 = -1;
	int64_t x502 = INT64_MIN;
	volatile int64_t x503 = -40271380464893799LL;

	t63 = ((x501/x502)>>(x503/x504));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x505 = 10U;
	int64_t x506 = INT64_MIN;
	static uint16_t x507 = 2U;
	int16_t x508 = INT16_MIN;
	static volatile int64_t t64 = 11224896542LL;

	t64 = ((x505/x506)>>(x507/x508));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x514 = 521519913741388LLU;
	volatile int8_t x515 = INT8_MIN;
	volatile int64_t x516 = 4713381115528192LL;
	static volatile uint64_t t65 = 3824LLU;

	t65 = ((x513/x514)>>(x515/x516));

	if (t65 != 35371LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x517 = -55LL;
	int64_t x518 = INT64_MAX;
	int64_t x519 = 171167LL;
	static volatile int64_t x520 = INT64_MIN;
	static int64_t t66 = 0LL;

	t66 = ((x517/x518)>>(x519/x520));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x526 = 8516129877LLU;
	int16_t x527 = INT16_MIN;
	int64_t x528 = INT64_MIN;

	t67 = ((x525/x526)>>(x527/x528));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x529 = UINT8_MAX;
	static volatile int16_t x530 = INT16_MAX;
	uint8_t x531 = 1U;
	int32_t t68 = 216;

	t68 = ((x529/x530)>>(x531/x532));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x533 = 956398U;
	static int8_t x534 = 1;
	int64_t x535 = -12370LL;
	uint32_t x536 = 119917U;
	volatile uint32_t t69 = 0U;

	t69 = ((x533/x534)>>(x535/x536));

	if (t69 != 956398U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x537 = UINT32_MAX;
	int64_t x538 = INT64_MIN;
	volatile int16_t x539 = 1;
	uint32_t x540 = 631773348U;
	int64_t t70 = 0LL;

	t70 = ((x537/x538)>>(x539/x540));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x548 = INT32_MIN;
	volatile uint64_t t71 = 25751124994891885LLU;

	t71 = ((x545/x546)>>(x547/x548));

	if (t71 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x553 = 5U;
	int8_t x555 = INT8_MIN;
	uint64_t x556 = UINT64_MAX;

	t72 = ((x553/x554)>>(x555/x556));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x557 = INT16_MIN;
	volatile int8_t x559 = -11;
	volatile int64_t t73 = 6367575LL;

	t73 = ((x557/x558)>>(x559/x560));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x561 = INT64_MAX;
	int32_t x564 = INT32_MIN;
	volatile int64_t t74 = 3465889096809501172LL;

	t74 = ((x561/x562)>>(x563/x564));

	if (t74 != 164609009795380LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x583 = -2;
	int8_t x584 = 50;
	int32_t t75 = 22321133;

	t75 = ((x581/x582)>>(x583/x584));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x586 = INT8_MAX;
	uint8_t x587 = 111U;
	uint16_t x588 = UINT16_MAX;
	int64_t t76 = -387660459LL;

	t76 = ((x585/x586)>>(x587/x588));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x589 = 14894;
	int32_t x590 = INT32_MIN;
	static int16_t x592 = INT16_MIN;
	volatile int32_t t77 = 25;

	t77 = ((x589/x590)>>(x591/x592));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x610 = -273338059236476455LL;
	int8_t x611 = 31;
	int64_t t78 = 2345264013686715024LL;

	t78 = ((x609/x610)>>(x611/x612));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x613 = -3;
	volatile int8_t x615 = 4;

	t79 = ((x613/x614)>>(x615/x616));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x617 = -6547027345LL;
	uint8_t x619 = UINT8_MAX;
	int32_t x620 = INT32_MIN;
	volatile int64_t t80 = -1669834277349452LL;

	t80 = ((x617/x618)>>(x619/x620));

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x621 = INT16_MIN;
	static int64_t x622 = -1LL;
	int32_t x623 = 1;
	uint64_t x624 = UINT64_MAX;
	int64_t t81 = -18949LL;

	t81 = ((x621/x622)>>(x623/x624));

	if (t81 != 32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x637 = 6U;
	static int32_t x638 = INT32_MAX;
	static volatile uint64_t x639 = UINT64_MAX;
	static volatile int16_t x640 = -1;

	t82 = ((x637/x638)>>(x639/x640));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x649 = INT8_MIN;
	static int64_t x650 = 705805LL;
	volatile uint64_t x651 = UINT64_MAX;
	int16_t x652 = INT16_MIN;

	t83 = ((x649/x650)>>(x651/x652));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x661 = -1;
	int8_t x662 = INT8_MIN;
	int32_t x663 = -1;
	int8_t x664 = -22;
	volatile int32_t t84 = -3;

	t84 = ((x661/x662)>>(x663/x664));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x685 = UINT8_MAX;
	int8_t x687 = INT8_MIN;
	static volatile int32_t x688 = -197961728;
	volatile uint64_t t85 = 2738990LLU;

	t85 = ((x685/x686)>>(x687/x688));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x689 = -1LL;
	static int8_t x690 = INT8_MIN;
	int64_t x691 = -1LL;
	int64_t x692 = INT64_MAX;
	int64_t t86 = -1234964LL;

	t86 = ((x689/x690)>>(x691/x692));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x698 = INT8_MIN;
	uint32_t x699 = 251U;
	volatile uint32_t t87 = 5944048U;

	t87 = ((x697/x698)>>(x699/x700));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x705 = 2;
	uint32_t x708 = 330262567U;
	volatile int32_t t88 = -13812185;

	t88 = ((x705/x706)>>(x707/x708));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x710 = INT64_MIN;
	int16_t x711 = 97;
	int32_t x712 = INT32_MIN;

	t89 = ((x709/x710)>>(x711/x712));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x718 = INT64_MIN;
	static uint32_t x719 = 1U;

	t90 = ((x717/x718)>>(x719/x720));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x721 = -1;
	uint8_t x722 = 124U;
	int32_t t91 = 1;

	t91 = ((x721/x722)>>(x723/x724));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x733 = 125U;
	uint64_t x734 = 6988421400494LLU;
	int64_t x735 = -730888LL;
	volatile uint64_t x736 = UINT64_MAX;
	uint64_t t92 = 54451857280822051LLU;

	t92 = ((x733/x734)>>(x735/x736));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x737 = 17U;
	static volatile int64_t x738 = INT64_MIN;
	int32_t x739 = INT32_MIN;
	volatile int64_t t93 = 459556634LL;

	t93 = ((x737/x738)>>(x739/x740));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x742 = -55252738256656394LL;
	static int64_t x744 = INT64_MAX;
	volatile int64_t t94 = 2976280371LL;

	t94 = ((x741/x742)>>(x743/x744));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x761 = INT8_MIN;
	int32_t x762 = INT32_MIN;
	uint8_t x763 = UINT8_MAX;
	int32_t t95 = 113184;

	t95 = ((x761/x762)>>(x763/x764));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x765 = 72U;
	uint8_t x766 = 2U;
	uint8_t x767 = 22U;
	volatile int32_t t96 = 399469126;

	t96 = ((x765/x766)>>(x767/x768));

	if (t96 != 36) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x769 = -1LL;
	static int8_t x771 = 46;
	int64_t x772 = 48709349LL;
	volatile int64_t t97 = 53979LL;

	t97 = ((x769/x770)>>(x771/x772));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x785 = UINT8_MAX;
	uint32_t x786 = 25835278U;
	uint8_t x787 = 0U;
	volatile int64_t x788 = INT64_MIN;
	volatile uint32_t t98 = 1988084U;

	t98 = ((x785/x786)>>(x787/x788));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x793 = -1LL;
	uint32_t x794 = 216U;
	uint8_t x795 = UINT8_MAX;
	volatile int32_t x796 = INT32_MAX;
	volatile int64_t t99 = 336526416286451LL;

	t99 = ((x793/x794)>>(x795/x796));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

