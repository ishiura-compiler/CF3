#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x8 = 1;
uint64_t x12 = 3253047138502074LLU;
volatile int64_t x14 = 4405797LL;
uint16_t x16 = 444U;
int32_t t3 = 6;
int64_t x30 = -1625517394LL;
uint32_t x45 = 3812U;
int64_t x47 = INT64_MIN;
volatile int8_t x50 = -1;
int16_t x57 = -30;
static int64_t x59 = -1LL;
uint8_t x62 = UINT8_MAX;
int64_t x64 = INT64_MAX;
int32_t t10 = 1;
int16_t x67 = -53;
static int16_t x75 = INT16_MIN;
static int16_t x76 = INT16_MAX;
int8_t x101 = INT8_MIN;
uint32_t x104 = 40898U;
int64_t x106 = 4LL;
volatile int32_t t16 = 28;
static int8_t x109 = 1;
volatile int8_t x111 = INT8_MIN;
volatile int8_t x117 = -12;
int32_t x118 = 187535574;
volatile int32_t t18 = -352411;
int64_t x131 = -1LL;
uint32_t x132 = UINT32_MAX;
int64_t x173 = INT64_MIN;
volatile int64_t x176 = INT64_MAX;
static int32_t t22 = 1576336;
volatile int16_t x179 = -53;
int32_t x189 = INT32_MIN;
static int8_t x195 = INT8_MAX;
static int32_t t25 = 0;
int64_t x201 = INT64_MAX;
uint16_t x206 = 0U;
int8_t x208 = INT8_MAX;
static int32_t t29 = 244918582;
static volatile int8_t x217 = INT8_MIN;
int8_t x248 = -1;
int16_t x251 = INT16_MIN;
volatile uint32_t x257 = UINT32_MAX;
int8_t x264 = 0;
int64_t x278 = INT64_MIN;
int64_t x280 = INT64_MAX;
volatile uint64_t x304 = 1045763507LLU;
volatile int64_t x315 = -2647606LL;
int64_t x316 = -1LL;
int32_t t41 = -14366499;
int32_t x335 = INT32_MAX;
int64_t x336 = INT64_MAX;
static volatile int32_t t42 = 0;
static uint16_t x369 = UINT16_MAX;
volatile int32_t t49 = -9;
uint8_t x408 = UINT8_MAX;
int16_t x411 = INT16_MAX;
int32_t t56 = 111041522;
uint8_t x464 = UINT8_MAX;
int64_t x500 = 5604311138195144LL;
uint32_t x503 = 183079U;
int64_t x509 = -701020545172790LL;
uint64_t x511 = 601893863LLU;
uint8_t x518 = 0U;
uint16_t x533 = UINT16_MAX;
volatile int8_t x534 = INT8_MAX;
int32_t x537 = 1;
uint8_t x538 = UINT8_MAX;
static int64_t x546 = 666805LL;
int32_t x548 = INT32_MIN;
uint8_t x554 = 21U;
uint16_t x556 = 16U;
uint64_t x573 = 17LLU;
int8_t x574 = 3;
static uint64_t x587 = 953751218LLU;
int32_t t72 = -1;
int8_t x590 = 0;
int32_t x600 = INT32_MAX;
int32_t x606 = 373763;
static int16_t x607 = INT16_MIN;
static volatile uint8_t x612 = UINT8_MAX;
static volatile int32_t x619 = INT32_MIN;
static volatile uint64_t x620 = UINT64_MAX;
int32_t t79 = 73633;
int32_t t80 = 194;
uint64_t x631 = 6683LLU;
static volatile int32_t t81 = -8736;
int16_t x633 = INT16_MIN;
uint8_t x636 = 20U;
volatile int32_t t84 = 10;
int64_t x663 = INT64_MIN;
int32_t x666 = INT32_MIN;
int16_t x677 = 1;
static volatile int8_t x678 = INT8_MIN;
uint32_t x690 = 3933U;
uint64_t x696 = 1203067925LLU;
volatile uint8_t x697 = 3U;
uint16_t x699 = 143U;
volatile int32_t t92 = 11847446;
int8_t x701 = -1;
uint32_t x722 = UINT32_MAX;
volatile int32_t x729 = INT32_MIN;
static volatile int32_t t97 = 0;
int16_t x748 = INT16_MIN;
int32_t t98 = -14547171;


void f0(void) {
	uint64_t x1 = 133585470536LLU;
	int8_t x2 = INT8_MAX;
	uint64_t x3 = 1049219317736039LLU;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 8;

	t0 = ((x1<x2)%(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	int32_t x6 = 2382;
	int64_t x7 = INT64_MIN;
	static volatile int32_t t1 = -3418;

	t1 = ((x5<x6)%(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -324841838;
	static volatile int64_t x10 = 1598851954630LL;
	uint16_t x11 = UINT16_MAX;
	int32_t t2 = -1;

	t2 = ((x9<x10)%(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -501;
	uint16_t x15 = 51U;

	t3 = ((x13<x14)%(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x21 = UINT16_MAX;
	uint32_t x22 = 27390539U;
	uint16_t x23 = 19920U;
	int32_t x24 = INT32_MAX;
	volatile int32_t t4 = -316420;

	t4 = ((x21<x22)%(x23<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = -3;
	int64_t x31 = -1LL;
	int32_t x32 = 1015336170;
	int32_t t5 = 3;

	t5 = ((x29<x30)%(x31<x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = 0;
	volatile int8_t x42 = INT8_MAX;
	int32_t x43 = INT32_MIN;
	static int64_t x44 = -53509LL;
	volatile int32_t t6 = 12147922;

	t6 = ((x41<x42)%(x43<x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x46 = -1;
	static uint8_t x48 = 31U;
	int32_t t7 = -6;

	t7 = ((x45<x46)%(x47<x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = INT16_MIN;
	int64_t x51 = -199935917LL;
	static uint32_t x52 = 23910189U;
	int32_t t8 = -678017592;

	t8 = ((x49<x50)%(x51<x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x58 = INT16_MAX;
	static uint32_t x60 = 522U;
	static int32_t t9 = 213;

	t9 = ((x57<x58)%(x59<x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = INT8_MIN;
	int32_t x63 = 101;

	t10 = ((x61<x62)%(x63<x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 485281U;
	volatile int16_t x66 = INT16_MIN;
	int32_t x68 = 1835240;
	volatile int32_t t11 = -140;

	t11 = ((x65<x66)%(x67<x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x73 = 1U;
	static int64_t x74 = 3436214982400327640LL;
	volatile int32_t t12 = 35949;

	t12 = ((x73<x74)%(x75<x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = -1LL;
	int8_t x83 = INT8_MIN;
	static int8_t x84 = -3;
	int32_t t13 = 440;

	t13 = ((x81<x82)%(x83<x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x93 = -1;
	int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	uint8_t x96 = 2U;
	volatile int32_t t14 = -12875265;

	t14 = ((x93<x94)%(x95<x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	int32_t t15 = -96;

	t15 = ((x101<x102)%(x103<x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x105 = UINT32_MAX;
	int32_t x107 = INT32_MIN;
	int8_t x108 = -1;

	t16 = ((x105<x106)%(x107<x108));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x110 = UINT16_MAX;
	int32_t x112 = INT32_MAX;
	volatile int32_t t17 = 262689263;

	t17 = ((x109<x110)%(x111<x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x119 = INT16_MAX;
	volatile int32_t x120 = INT32_MAX;

	t18 = ((x117<x118)%(x119<x120));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x125 = -161947002771LL;
	uint16_t x126 = UINT16_MAX;
	volatile uint32_t x127 = 389U;
	int32_t x128 = -1;
	int32_t t19 = 24;

	t19 = ((x125<x126)%(x127<x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x129 = INT32_MAX;
	static volatile uint32_t x130 = 5890882U;
	int32_t t20 = 18077;

	t20 = ((x129<x130)%(x131<x132));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x157 = INT64_MAX;
	int64_t x158 = 7527011817793264LL;
	int32_t x159 = INT32_MIN;
	static uint8_t x160 = 2U;
	static volatile int32_t t21 = 7496517;

	t21 = ((x157<x158)%(x159<x160));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x174 = 2;
	int32_t x175 = INT32_MIN;

	t22 = ((x173<x174)%(x175<x176));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x177 = 1;
	static int64_t x178 = 64984LL;
	int32_t x180 = -1;
	int32_t t23 = 6;

	t23 = ((x177<x178)%(x179<x180));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x190 = 2110U;
	int16_t x191 = INT16_MIN;
	static volatile int8_t x192 = INT8_MAX;
	volatile int32_t t24 = 212398888;

	t24 = ((x189<x190)%(x191<x192));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x193 = INT16_MIN;
	uint8_t x194 = 26U;
	int16_t x196 = INT16_MAX;

	t25 = ((x193<x194)%(x195<x196));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x197 = 642LL;
	int8_t x198 = 1;
	uint64_t x199 = 32369983031358LLU;
	int64_t x200 = -77LL;
	int32_t t26 = 36;

	t26 = ((x197<x198)%(x199<x200));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x202 = UINT32_MAX;
	volatile uint8_t x203 = 31U;
	int8_t x204 = INT8_MAX;
	volatile int32_t t27 = -20438;

	t27 = ((x201<x202)%(x203<x204));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x205 = 3U;
	int64_t x207 = -242929949915071LL;
	volatile int32_t t28 = -1528;

	t28 = ((x205<x206)%(x207<x208));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x209 = -63;
	int8_t x210 = 7;
	int64_t x211 = -3613291472940353317LL;
	static int8_t x212 = -24;

	t29 = ((x209<x210)%(x211<x212));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x218 = UINT16_MAX;
	static int16_t x219 = INT16_MIN;
	uint16_t x220 = UINT16_MAX;
	int32_t t30 = 57;

	t30 = ((x217<x218)%(x219<x220));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x221 = INT32_MIN;
	uint8_t x222 = 0U;
	uint64_t x223 = 4280491839532711877LLU;
	int64_t x224 = -164616LL;
	static int32_t t31 = 0;

	t31 = ((x221<x222)%(x223<x224));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x225 = 21;
	volatile uint64_t x226 = 15LLU;
	static int64_t x227 = -1LL;
	uint16_t x228 = 231U;
	volatile int32_t t32 = -399993;

	t32 = ((x225<x226)%(x227<x228));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x241 = -1;
	static int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MAX;
	int32_t t33 = -63948;

	t33 = ((x241<x242)%(x243<x244));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x245 = -137450605;
	int32_t x246 = INT32_MIN;
	int32_t x247 = -60511881;
	int32_t t34 = 2639145;

	t34 = ((x245<x246)%(x247<x248));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x249 = 26U;
	uint8_t x250 = 8U;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t35 = 599840622;

	t35 = ((x249<x250)%(x251<x252));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x258 = INT32_MIN;
	int8_t x259 = -1;
	int8_t x260 = 3;
	int32_t t36 = 210;

	t36 = ((x257<x258)%(x259<x260));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x261 = 121U;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = INT16_MIN;
	int32_t t37 = 3950;

	t37 = ((x261<x262)%(x263<x264));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x277 = INT32_MAX;
	volatile int64_t x279 = INT64_MIN;
	volatile int32_t t38 = 2762178;

	t38 = ((x277<x278)%(x279<x280));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x301 = -1;
	uint16_t x302 = 26080U;
	uint8_t x303 = UINT8_MAX;
	int32_t t39 = -428508105;

	t39 = ((x301<x302)%(x303<x304));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MIN;
	int32_t t40 = -6649524;

	t40 = ((x313<x314)%(x315<x316));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x325 = 377;
	volatile uint16_t x326 = 378U;
	int64_t x327 = INT64_MIN;
	volatile int64_t x328 = 9488584861193LL;

	t41 = ((x325<x326)%(x327<x328));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x333 = UINT8_MAX;
	int16_t x334 = 0;

	t42 = ((x333<x334)%(x335<x336));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x337 = INT8_MAX;
	int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	static volatile int32_t x340 = -1;
	static volatile int32_t t43 = 419;

	t43 = ((x337<x338)%(x339<x340));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MIN;
	volatile uint8_t x344 = 0U;
	volatile int32_t t44 = 16;

	t44 = ((x341<x342)%(x343<x344));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x353 = INT16_MAX;
	int32_t x354 = -428665;
	int16_t x355 = INT16_MIN;
	int32_t x356 = 7;
	static int32_t t45 = 1;

	t45 = ((x353<x354)%(x355<x356));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x370 = 4U;
	uint8_t x371 = 0U;
	volatile uint64_t x372 = 265604LLU;
	volatile int32_t t46 = 0;

	t46 = ((x369<x370)%(x371<x372));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x373 = 3U;
	int32_t x374 = -194502943;
	volatile int32_t x375 = INT32_MIN;
	static uint16_t x376 = UINT16_MAX;
	static int32_t t47 = -1;

	t47 = ((x373<x374)%(x375<x376));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x377 = -1;
	static int8_t x378 = 0;
	uint64_t x379 = 30942696845LLU;
	static int16_t x380 = INT16_MIN;
	int32_t t48 = -31229;

	t48 = ((x377<x378)%(x379<x380));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x389 = -1LL;
	int64_t x390 = INT64_MIN;
	volatile int32_t x391 = INT32_MIN;
	int8_t x392 = -1;

	t49 = ((x389<x390)%(x391<x392));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x405 = 17U;
	volatile uint64_t x406 = 115LLU;
	int32_t x407 = -1;
	volatile int32_t t50 = -7;

	t50 = ((x405<x406)%(x407<x408));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x409 = -1LL;
	uint8_t x410 = UINT8_MAX;
	uint64_t x412 = 52550548LLU;
	volatile int32_t t51 = 119304;

	t51 = ((x409<x410)%(x411<x412));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x437 = INT16_MAX;
	static int64_t x438 = -1LL;
	volatile int32_t x439 = INT32_MIN;
	static int32_t x440 = INT32_MAX;
	static int32_t t52 = -15223;

	t52 = ((x437<x438)%(x439<x440));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x441 = 162LLU;
	static volatile int64_t x442 = -1LL;
	uint8_t x443 = 1U;
	int32_t x444 = 2240396;
	int32_t t53 = -390633;

	t53 = ((x441<x442)%(x443<x444));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x445 = 3613471;
	int16_t x446 = -4;
	int16_t x447 = -1158;
	int16_t x448 = -1;
	int32_t t54 = -439777;

	t54 = ((x445<x446)%(x447<x448));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x449 = -1;
	static uint64_t x450 = 543590940733686LLU;
	int32_t x451 = 44;
	int16_t x452 = 57;
	int32_t t55 = 0;

	t55 = ((x449<x450)%(x451<x452));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x453 = INT16_MAX;
	int64_t x454 = INT64_MAX;
	uint32_t x455 = 46U;
	uint32_t x456 = UINT32_MAX;

	t56 = ((x453<x454)%(x455<x456));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x457 = 2430U;
	int32_t x458 = -181305267;
	volatile int16_t x459 = INT16_MAX;
	static int64_t x460 = 32065413252153933LL;
	int32_t t57 = 69360606;

	t57 = ((x457<x458)%(x459<x460));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x461 = INT8_MIN;
	static int32_t x462 = -570;
	static int16_t x463 = -1;
	int32_t t58 = -463110545;

	t58 = ((x461<x462)%(x463<x464));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x477 = 31;
	int32_t x478 = INT32_MIN;
	int32_t x479 = -1;
	int16_t x480 = 15198;
	static volatile int32_t t59 = -14;

	t59 = ((x477<x478)%(x479<x480));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x497 = 26U;
	int32_t x498 = -1;
	volatile int8_t x499 = INT8_MIN;
	int32_t t60 = -1;

	t60 = ((x497<x498)%(x499<x500));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x501 = INT32_MIN;
	volatile int64_t x502 = -122LL;
	int32_t x504 = INT32_MIN;
	int32_t t61 = 0;

	t61 = ((x501<x502)%(x503<x504));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x510 = INT16_MIN;
	static int32_t x512 = INT32_MIN;
	int32_t t62 = 0;

	t62 = ((x509<x510)%(x511<x512));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x513 = UINT32_MAX;
	int8_t x514 = INT8_MIN;
	static int64_t x515 = -60750905436010LL;
	int32_t x516 = INT32_MAX;
	int32_t t63 = -129997;

	t63 = ((x513<x514)%(x515<x516));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x517 = -1;
	volatile int64_t x519 = -7229318041LL;
	uint16_t x520 = UINT16_MAX;
	int32_t t64 = 39600091;

	t64 = ((x517<x518)%(x519<x520));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x529 = INT32_MIN;
	int64_t x530 = INT64_MIN;
	static uint16_t x531 = 29U;
	static uint8_t x532 = UINT8_MAX;
	int32_t t65 = 672;

	t65 = ((x529<x530)%(x531<x532));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x535 = INT64_MIN;
	int16_t x536 = INT16_MAX;
	int32_t t66 = -5698633;

	t66 = ((x533<x534)%(x535<x536));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x539 = INT8_MAX;
	uint32_t x540 = 27271U;
	static int32_t t67 = -15;

	t67 = ((x537<x538)%(x539<x540));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x545 = -1;
	static uint64_t x547 = 3LLU;
	int32_t t68 = -6;

	t68 = ((x545<x546)%(x547<x548));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x553 = INT64_MIN;
	static volatile int32_t x555 = -1;
	volatile int32_t t69 = -743048;

	t69 = ((x553<x554)%(x555<x556));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x575 = 0U;
	int32_t x576 = 1;
	volatile int32_t t70 = -6;

	t70 = ((x573<x574)%(x575<x576));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x577 = INT64_MIN;
	uint32_t x578 = UINT32_MAX;
	uint64_t x579 = 12LLU;
	int32_t x580 = 55;
	volatile int32_t t71 = 133026;

	t71 = ((x577<x578)%(x579<x580));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x585 = INT8_MAX;
	int64_t x586 = -1LL;
	static int16_t x588 = INT16_MIN;

	t72 = ((x585<x586)%(x587<x588));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x589 = 158U;
	static int8_t x591 = 0;
	int64_t x592 = INT64_MAX;
	int32_t t73 = 0;

	t73 = ((x589<x590)%(x591<x592));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x593 = INT64_MIN;
	volatile int16_t x594 = INT16_MIN;
	static int64_t x595 = INT64_MIN;
	uint32_t x596 = 172U;
	volatile int32_t t74 = -1320173;

	t74 = ((x593<x594)%(x595<x596));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x597 = INT64_MIN;
	volatile int16_t x598 = INT16_MIN;
	uint16_t x599 = 251U;
	volatile int32_t t75 = 63104601;

	t75 = ((x597<x598)%(x599<x600));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x605 = 177;
	static int16_t x608 = INT16_MAX;
	volatile int32_t t76 = 0;

	t76 = ((x605<x606)%(x607<x608));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x609 = INT64_MIN;
	int16_t x610 = 457;
	volatile int16_t x611 = INT16_MIN;
	int32_t t77 = 124;

	t77 = ((x609<x610)%(x611<x612));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x613 = INT16_MAX;
	int16_t x614 = -1;
	volatile uint32_t x615 = 3676U;
	uint64_t x616 = UINT64_MAX;
	volatile int32_t t78 = 0;

	t78 = ((x613<x614)%(x615<x616));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x617 = INT16_MAX;
	int64_t x618 = INT64_MIN;

	t79 = ((x617<x618)%(x619<x620));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x621 = INT64_MAX;
	int8_t x622 = INT8_MIN;
	uint8_t x623 = 127U;
	int32_t x624 = INT32_MAX;

	t80 = ((x621<x622)%(x623<x624));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x629 = -1LL;
	int64_t x630 = INT64_MAX;
	int64_t x632 = 216400042952713LL;

	t81 = ((x629<x630)%(x631<x632));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MIN;
	volatile int32_t t82 = 49453744;

	t82 = ((x633<x634)%(x635<x636));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x645 = 16U;
	int64_t x646 = -1LL;
	int16_t x647 = INT16_MIN;
	int8_t x648 = INT8_MIN;
	volatile int32_t t83 = -137;

	t83 = ((x645<x646)%(x647<x648));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x657 = INT64_MIN;
	static int16_t x658 = INT16_MIN;
	static uint8_t x659 = UINT8_MAX;
	uint32_t x660 = UINT32_MAX;

	t84 = ((x657<x658)%(x659<x660));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x661 = 198832748U;
	uint32_t x662 = UINT32_MAX;
	int8_t x664 = -1;
	volatile int32_t t85 = 353946;

	t85 = ((x661<x662)%(x663<x664));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x665 = -1;
	int64_t x667 = INT64_MIN;
	static volatile int8_t x668 = INT8_MAX;
	volatile int32_t t86 = -11;

	t86 = ((x665<x666)%(x667<x668));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x669 = 16903LLU;
	uint16_t x670 = UINT16_MAX;
	int64_t x671 = -37453883411784363LL;
	uint8_t x672 = UINT8_MAX;
	volatile int32_t t87 = 5;

	t87 = ((x669<x670)%(x671<x672));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x679 = 32U;
	uint32_t x680 = 222U;
	static int32_t t88 = -1446;

	t88 = ((x677<x678)%(x679<x680));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x681 = 6982371498773061LL;
	uint16_t x682 = 18868U;
	uint64_t x683 = 25330686246741765LLU;
	int32_t x684 = -1;
	int32_t t89 = -1;

	t89 = ((x681<x682)%(x683<x684));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x689 = INT16_MIN;
	int8_t x691 = 2;
	uint64_t x692 = 1984395613LLU;
	int32_t t90 = -684107465;

	t90 = ((x689<x690)%(x691<x692));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x693 = INT16_MAX;
	int16_t x694 = INT16_MIN;
	static volatile int8_t x695 = INT8_MAX;
	int32_t t91 = -7912;

	t91 = ((x693<x694)%(x695<x696));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x698 = -60;
	uint8_t x700 = UINT8_MAX;

	t92 = ((x697<x698)%(x699<x700));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x702 = -15;
	static volatile uint8_t x703 = 36U;
	static uint8_t x704 = 47U;
	volatile int32_t t93 = 178;

	t93 = ((x701<x702)%(x703<x704));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x721 = INT16_MIN;
	int64_t x723 = INT64_MIN;
	volatile int32_t x724 = -1;
	int32_t t94 = 80616;

	t94 = ((x721<x722)%(x723<x724));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x725 = INT16_MIN;
	volatile int64_t x726 = INT64_MIN;
	static int8_t x727 = INT8_MAX;
	uint64_t x728 = 115745LLU;
	int32_t t95 = -27;

	t95 = ((x725<x726)%(x727<x728));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x730 = INT8_MIN;
	int32_t x731 = INT32_MIN;
	int64_t x732 = 10078164LL;
	static volatile int32_t t96 = 180497;

	t96 = ((x729<x730)%(x731<x732));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x737 = 79137U;
	int32_t x738 = INT32_MAX;
	static int8_t x739 = INT8_MIN;
	int32_t x740 = 2020345;

	t97 = ((x737<x738)%(x739<x740));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x745 = 51U;
	int16_t x746 = INT16_MIN;
	int64_t x747 = -460385LL;

	t98 = ((x745<x746)%(x747<x748));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x757 = INT32_MIN;
	int64_t x758 = -1LL;
	uint32_t x759 = 2794434U;
	uint64_t x760 = UINT64_MAX;
	int32_t t99 = -597;

	t99 = ((x757<x758)%(x759<x760));

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

