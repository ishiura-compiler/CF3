#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 18U;
static uint32_t x7 = 30U;
uint16_t x9 = UINT16_MAX;
int8_t x15 = INT8_MIN;
static uint64_t x19 = UINT64_MAX;
int64_t x29 = INT64_MAX;
uint8_t x42 = UINT8_MAX;
static int8_t x48 = INT8_MAX;
int64_t x49 = INT64_MAX;
static int8_t x68 = 3;
volatile uint64_t x69 = UINT64_MAX;
volatile uint16_t x70 = 0U;
volatile uint8_t x77 = 48U;
int8_t x94 = 3;
int32_t t18 = -276623;
uint16_t x105 = UINT16_MAX;
uint8_t x125 = 92U;
int16_t x127 = -1;
int16_t x179 = INT16_MAX;
int32_t t24 = 0;
int64_t x189 = 225172LL;
int32_t t27 = 36554202;
static volatile int32_t t28 = 816;
int64_t x215 = INT64_MIN;
volatile uint64_t x216 = UINT64_MAX;
static uint8_t x245 = UINT8_MAX;
int64_t x247 = -1LL;
static int32_t x255 = INT32_MAX;
int16_t x280 = 3241;
int32_t t34 = -268135048;
int16_t x286 = 1411;
int16_t x287 = INT16_MAX;
int8_t x288 = INT8_MIN;
uint32_t x291 = 1749187U;
int16_t x292 = -1;
uint16_t x309 = UINT16_MAX;
volatile int32_t x311 = INT32_MIN;
uint32_t x321 = 263475944U;
int64_t x322 = INT64_MAX;
uint16_t x344 = 152U;
static volatile int32_t t44 = 555229;
uint8_t x379 = 12U;
static volatile int32_t x382 = INT32_MIN;
static int32_t x386 = INT32_MIN;
static uint32_t x389 = UINT32_MAX;
int8_t x392 = INT8_MIN;
int32_t t49 = 27;
int16_t x397 = INT16_MAX;
int32_t x426 = INT32_MIN;
static int16_t x428 = INT16_MIN;
uint16_t x441 = 14371U;
int8_t x462 = INT8_MIN;
volatile int8_t x463 = 0;
volatile uint8_t x477 = 80U;
uint8_t x478 = UINT8_MAX;
int8_t x486 = INT8_MAX;
int64_t x487 = 37090027140252LL;
int8_t x495 = INT8_MIN;
uint16_t x501 = 4U;
uint8_t x509 = 83U;
static uint16_t x510 = 169U;
uint64_t x519 = 68LLU;
uint16_t x520 = 2U;
static volatile int32_t t64 = 1;
uint16_t x537 = 0U;
int32_t t66 = 7;
uint32_t x552 = 1U;
static int64_t x558 = -1341191541LL;
int8_t x563 = INT8_MIN;
int32_t t69 = 696843129;
int64_t x569 = 585318317268869LL;
uint64_t x571 = UINT64_MAX;
volatile int32_t t71 = 0;
uint64_t x574 = 257383378665312LLU;
int32_t t73 = 347;
static volatile uint32_t x585 = 39U;
uint64_t x594 = 323245881229LLU;
static volatile uint16_t x607 = 2U;
volatile uint32_t x608 = 6793933U;
int32_t t79 = 2834670;
uint8_t x614 = UINT8_MAX;
int64_t x615 = -1LL;
int64_t x616 = -1LL;
volatile int8_t x620 = INT8_MIN;
uint64_t x624 = 41696034844LLU;
int32_t t84 = -1047954922;
static uint32_t x655 = UINT32_MAX;
volatile int32_t x656 = 61;
static int32_t t85 = 55278;
int8_t x662 = 60;
static int64_t x664 = -485726827295752480LL;
int32_t t87 = 22910;
uint64_t x673 = 1794275199219571011LLU;
static volatile int32_t t88 = -1243;
uint8_t x679 = UINT8_MAX;
static int32_t t89 = 38;
static volatile uint64_t x685 = 1631151LLU;
int64_t x698 = INT64_MIN;
static uint8_t x706 = 13U;
static volatile int32_t t92 = -7921692;
int64_t x714 = -21LL;
uint16_t x715 = 25372U;
uint32_t x716 = 372171U;
uint8_t x728 = 3U;
int64_t x733 = 2854855930564030LL;
int8_t x735 = 1;
static volatile int32_t t97 = 424799;
int16_t x746 = INT16_MIN;
volatile int16_t x747 = 1419;


void f0(void) {
	int64_t x2 = -1LL;
	uint16_t x3 = UINT16_MAX;
	uint8_t x4 = 3U;
	volatile int32_t t0 = -96;

	t0 = ((x1<<(x2<=x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	volatile int16_t x6 = INT16_MAX;
	uint8_t x8 = 43U;
	int32_t t1 = 170478;

	t1 = ((x5<<(x6<=x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int16_t x11 = -1;
	uint8_t x12 = 5U;
	int32_t t2 = 629408637;

	t2 = ((x9<<(x10<=x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 1617;
	int32_t x14 = INT32_MIN;
	uint8_t x16 = 7U;
	int32_t t3 = 415640280;

	t3 = ((x13<<(x14<=x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint32_t x18 = 1999582064U;
	static volatile int64_t x20 = INT64_MAX;
	int32_t t4 = -19519855;

	t4 = ((x17<<(x18<=x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 31945LLU;
	int16_t x26 = -72;
	uint32_t x27 = 89813U;
	static uint8_t x28 = 1U;
	static int32_t t5 = -330744;

	t5 = ((x25<<(x26<=x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x30 = INT64_MAX;
	static uint8_t x31 = 2U;
	static int16_t x32 = INT16_MIN;
	int32_t t6 = 128944;

	t6 = ((x29<<(x30<=x31))<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 166079LLU;
	uint8_t x34 = 123U;
	uint64_t x35 = UINT64_MAX;
	volatile uint64_t x36 = UINT64_MAX;
	int32_t t7 = 2546751;

	t7 = ((x33<<(x34<=x35))<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 7U;
	volatile int64_t x43 = INT64_MIN;
	int64_t x44 = -1LL;
	volatile int32_t t8 = 75389;

	t8 = ((x41<<(x42<=x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = 1060805398LL;
	static int32_t x46 = INT32_MAX;
	uint64_t x47 = UINT64_MAX;
	int32_t t9 = 1;

	t9 = ((x45<<(x46<=x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x50 = 7810U;
	volatile uint8_t x51 = 29U;
	static uint64_t x52 = 446685660039074LLU;
	int32_t t10 = 117270569;

	t10 = ((x49<<(x50<=x51))<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = 4;
	volatile int64_t x54 = INT64_MIN;
	int32_t x55 = -1;
	uint16_t x56 = 7125U;
	volatile int32_t t11 = 24;

	t11 = ((x53<<(x54<=x55))<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x65 = 63U;
	static int32_t x66 = INT32_MAX;
	volatile uint32_t x67 = 106609U;
	static int32_t t12 = 2;

	t12 = ((x65<<(x66<=x67))<x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t13 = -200284743;

	t13 = ((x69<<(x70<=x71))<x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int8_t x74 = 5;
	int64_t x75 = 304698LL;
	int16_t x76 = INT16_MAX;
	static int32_t t14 = -2769712;

	t14 = ((x73<<(x74<=x75))<x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x78 = INT8_MIN;
	int32_t x79 = -458627036;
	int8_t x80 = -1;
	volatile int32_t t15 = -5623;

	t15 = ((x77<<(x78<=x79))<x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 146085098U;
	int32_t x82 = INT32_MAX;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t16 = 106701094;

	t16 = ((x81<<(x82<=x83))<x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x93 = UINT8_MAX;
	uint64_t x95 = 61498836LLU;
	volatile int32_t x96 = -6058696;
	static int32_t t17 = -786942;

	t17 = ((x93<<(x94<=x95))<x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x97 = 109949615898LLU;
	int32_t x98 = 120630;
	int32_t x99 = 1;
	uint8_t x100 = 24U;

	t18 = ((x97<<(x98<=x99))<x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x106 = 5836U;
	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = 880U;
	volatile int32_t t19 = -1157555;

	t19 = ((x105<<(x106<=x107))<x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x109 = 133498135921000636LL;
	static int64_t x110 = INT64_MIN;
	static int64_t x111 = -1LL;
	int64_t x112 = INT64_MAX;
	volatile int32_t t20 = -1;

	t20 = ((x109<<(x110<=x111))<x112);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = INT32_MAX;
	int64_t x114 = 59097LL;
	volatile int8_t x115 = -1;
	int16_t x116 = INT16_MIN;
	int32_t t21 = -368346660;

	t21 = ((x113<<(x114<=x115))<x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x126 = INT64_MIN;
	volatile uint64_t x128 = 1993195825114603LLU;
	int32_t t22 = 86080117;

	t22 = ((x125<<(x126<=x127))<x128);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x153 = 49;
	int16_t x154 = -1;
	static int64_t x155 = -31LL;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t23 = -155557893;

	t23 = ((x153<<(x154<=x155))<x156);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x178 = INT64_MIN;
	static int32_t x180 = INT32_MIN;

	t24 = ((x177<<(x178<=x179))<x180);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x181 = 4976841U;
	int16_t x182 = INT16_MIN;
	volatile int32_t x183 = INT32_MIN;
	static uint16_t x184 = 0U;
	int32_t t25 = 131781242;

	t25 = ((x181<<(x182<=x183))<x184);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MAX;
	static int32_t t26 = 3057619;

	t26 = ((x189<<(x190<=x191))<x192);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x193 = 49U;
	uint8_t x194 = 38U;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 989014;

	t27 = ((x193<<(x194<=x195))<x196);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x197 = 7805758723909512443LLU;
	static uint16_t x198 = UINT16_MAX;
	int32_t x199 = INT32_MIN;
	uint64_t x200 = 63191422942173LLU;

	t28 = ((x197<<(x198<=x199))<x200);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x213 = INT8_MAX;
	int32_t x214 = 93602120;
	int32_t t29 = -112075;

	t29 = ((x213<<(x214<=x215))<x216);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x246 = -1LL;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t30 = 155;

	t30 = ((x245<<(x246<=x247))<x248);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x249 = INT16_MAX;
	int32_t x250 = 0;
	int32_t x251 = INT32_MIN;
	uint8_t x252 = 3U;
	int32_t t31 = 1009466;

	t31 = ((x249<<(x250<=x251))<x252);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x253 = INT8_MAX;
	uint64_t x254 = UINT64_MAX;
	volatile int32_t x256 = INT32_MAX;
	int32_t t32 = -7;

	t32 = ((x253<<(x254<=x255))<x256);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x273 = UINT64_MAX;
	static int8_t x274 = INT8_MIN;
	int8_t x275 = -2;
	int32_t x276 = INT32_MIN;
	volatile int32_t t33 = -961917333;

	t33 = ((x273<<(x274<=x275))<x276);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x277 = 176U;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = UINT32_MAX;

	t34 = ((x277<<(x278<=x279))<x280);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x285 = UINT8_MAX;
	static volatile int32_t t35 = 143934;

	t35 = ((x285<<(x286<=x287))<x288);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x289 = 7662319U;
	int8_t x290 = INT8_MIN;
	int32_t t36 = 119651;

	t36 = ((x289<<(x290<=x291))<x292);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x293 = 1;
	uint8_t x294 = UINT8_MAX;
	uint32_t x295 = 396123U;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t37 = -35549076;

	t37 = ((x293<<(x294<=x295))<x296);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x301 = 833762U;
	uint32_t x302 = UINT32_MAX;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t38 = -30;

	t38 = ((x301<<(x302<=x303))<x304);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x310 = INT8_MIN;
	static int8_t x312 = INT8_MIN;
	static int32_t t39 = 480818;

	t39 = ((x309<<(x310<=x311))<x312);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x323 = -1;
	static int32_t x324 = -1;
	volatile int32_t t40 = 353972962;

	t40 = ((x321<<(x322<=x323))<x324);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x325 = 218U;
	static int32_t x326 = 13296;
	uint8_t x327 = 17U;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t41 = -19;

	t41 = ((x325<<(x326<=x327))<x328);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x341 = 7U;
	static uint64_t x342 = UINT64_MAX;
	static int8_t x343 = INT8_MIN;
	int32_t t42 = -4084;

	t42 = ((x341<<(x342<=x343))<x344);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x353 = 5685U;
	volatile uint32_t x354 = UINT32_MAX;
	uint64_t x355 = 6223LLU;
	int64_t x356 = INT64_MIN;
	volatile int32_t t43 = -833006;

	t43 = ((x353<<(x354<=x355))<x356);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x365 = 11102;
	uint64_t x366 = UINT64_MAX;
	uint8_t x367 = UINT8_MAX;
	static uint64_t x368 = 10835897071LLU;

	t44 = ((x365<<(x366<=x367))<x368);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x377 = 2113417115U;
	uint16_t x378 = 583U;
	volatile uint8_t x380 = UINT8_MAX;
	int32_t t45 = 45887;

	t45 = ((x377<<(x378<=x379))<x380);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x383 = INT16_MIN;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t46 = 3425660;

	t46 = ((x381<<(x382<=x383))<x384);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x385 = INT64_MAX;
	int64_t x387 = INT64_MIN;
	uint8_t x388 = 3U;
	int32_t t47 = -78222;

	t47 = ((x385<<(x386<=x387))<x388);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x390 = UINT8_MAX;
	int8_t x391 = INT8_MIN;
	volatile int32_t t48 = -24553;

	t48 = ((x389<<(x390<=x391))<x392);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x393 = INT8_MAX;
	int8_t x394 = -6;
	int64_t x395 = INT64_MAX;
	int8_t x396 = INT8_MIN;

	t49 = ((x393<<(x394<=x395))<x396);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x398 = 18LLU;
	volatile int16_t x399 = -1;
	int16_t x400 = -10;
	volatile int32_t t50 = -3391;

	t50 = ((x397<<(x398<=x399))<x400);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x425 = 429096U;
	static int8_t x427 = -1;
	int32_t t51 = -32409342;

	t51 = ((x425<<(x426<=x427))<x428);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x442 = INT16_MIN;
	int16_t x443 = 1;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t52 = 38224819;

	t52 = ((x441<<(x442<=x443))<x444);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x449 = UINT16_MAX;
	int32_t x450 = INT32_MIN;
	uint32_t x451 = 372067U;
	int8_t x452 = -1;
	volatile int32_t t53 = -3256;

	t53 = ((x449<<(x450<=x451))<x452);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x461 = 289675LL;
	uint16_t x464 = 11097U;
	int32_t t54 = 4173620;

	t54 = ((x461<<(x462<=x463))<x464);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x479 = 304U;
	int64_t x480 = 30LL;
	int32_t t55 = -28006917;

	t55 = ((x477<<(x478<=x479))<x480);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x481 = 15;
	uint8_t x482 = 5U;
	int32_t x483 = -1;
	int8_t x484 = INT8_MIN;
	static volatile int32_t t56 = -108;

	t56 = ((x481<<(x482<=x483))<x484);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x485 = 315954266334761LLU;
	static int8_t x488 = 4;
	static int32_t t57 = -14122773;

	t57 = ((x485<<(x486<=x487))<x488);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x493 = 7586U;
	static int32_t x494 = INT32_MIN;
	volatile uint16_t x496 = 3343U;
	int32_t t58 = 96;

	t58 = ((x493<<(x494<=x495))<x496);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MIN;
	int16_t x499 = 733;
	static int32_t x500 = INT32_MIN;
	volatile int32_t t59 = 1778;

	t59 = ((x497<<(x498<=x499))<x500);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MIN;
	static int64_t x504 = INT64_MAX;
	static volatile int32_t t60 = 26;

	t60 = ((x501<<(x502<=x503))<x504);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x511 = -1;
	static int64_t x512 = INT64_MAX;
	int32_t t61 = 105475536;

	t61 = ((x509<<(x510<=x511))<x512);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x517 = 2U;
	static int16_t x518 = -5920;
	int32_t t62 = -328;

	t62 = ((x517<<(x518<=x519))<x520);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x521 = 1U;
	volatile int32_t x522 = 78049;
	int8_t x523 = 2;
	volatile int16_t x524 = 24;
	int32_t t63 = -312;

	t63 = ((x521<<(x522<=x523))<x524);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x525 = 0U;
	int8_t x526 = -28;
	volatile uint64_t x527 = 254902795354654LLU;
	uint16_t x528 = 2U;

	t64 = ((x525<<(x526<=x527))<x528);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x538 = 0;
	int16_t x539 = INT16_MIN;
	int8_t x540 = INT8_MIN;
	int32_t t65 = 12817640;

	t65 = ((x537<<(x538<=x539))<x540);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x545 = 30U;
	volatile uint64_t x546 = UINT64_MAX;
	int64_t x547 = 1LL;
	int64_t x548 = 7609971202LL;

	t66 = ((x545<<(x546<=x547))<x548);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x549 = 963;
	int64_t x550 = INT64_MAX;
	uint8_t x551 = UINT8_MAX;
	volatile int32_t t67 = 6944;

	t67 = ((x549<<(x550<=x551))<x552);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x557 = INT32_MAX;
	int64_t x559 = INT64_MIN;
	static uint8_t x560 = 13U;
	volatile int32_t t68 = -16;

	t68 = ((x557<<(x558<=x559))<x560);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x561 = 49U;
	volatile uint8_t x562 = 52U;
	volatile int16_t x564 = INT16_MIN;

	t69 = ((x561<<(x562<=x563))<x564);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x565 = UINT64_MAX;
	static uint64_t x566 = UINT64_MAX;
	volatile int8_t x567 = INT8_MIN;
	static int32_t x568 = -1;
	volatile int32_t t70 = 20932;

	t70 = ((x565<<(x566<=x567))<x568);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x570 = 442039324LL;
	int8_t x572 = INT8_MIN;

	t71 = ((x569<<(x570<=x571))<x572);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x573 = 52;
	int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MAX;
	int32_t t72 = -316366521;

	t72 = ((x573<<(x574<=x575))<x576);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x577 = 34U;
	static uint64_t x578 = 1005450238714LLU;
	int64_t x579 = INT64_MAX;
	static uint16_t x580 = UINT16_MAX;

	t73 = ((x577<<(x578<=x579))<x580);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x581 = 56U;
	uint16_t x582 = 2669U;
	static volatile uint8_t x583 = 7U;
	volatile uint8_t x584 = 0U;
	int32_t t74 = -751727140;

	t74 = ((x581<<(x582<=x583))<x584);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x586 = -10;
	int64_t x587 = -1LL;
	uint32_t x588 = UINT32_MAX;
	static int32_t t75 = -33484027;

	t75 = ((x585<<(x586<=x587))<x588);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x593 = INT8_MAX;
	static volatile uint64_t x595 = UINT64_MAX;
	uint16_t x596 = UINT16_MAX;
	int32_t t76 = 20696;

	t76 = ((x593<<(x594<=x595))<x596);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x597 = INT32_MAX;
	uint8_t x598 = UINT8_MAX;
	int8_t x599 = INT8_MAX;
	int16_t x600 = -1;
	int32_t t77 = 8;

	t77 = ((x597<<(x598<=x599))<x600);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x601 = 8U;
	uint32_t x602 = 90562660U;
	uint16_t x603 = 221U;
	int64_t x604 = -1LL;
	volatile int32_t t78 = 240;

	t78 = ((x601<<(x602<=x603))<x604);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x605 = INT16_MAX;
	int8_t x606 = 1;

	t79 = ((x605<<(x606<=x607))<x608);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x613 = UINT64_MAX;
	volatile int32_t t80 = -2;

	t80 = ((x613<<(x614<=x615))<x616);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x617 = UINT16_MAX;
	int32_t x618 = 44;
	int16_t x619 = 13246;
	volatile int32_t t81 = 487;

	t81 = ((x617<<(x618<=x619))<x620);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x621 = 2;
	static uint64_t x622 = UINT64_MAX;
	int16_t x623 = INT16_MAX;
	volatile int32_t t82 = -131054;

	t82 = ((x621<<(x622<=x623))<x624);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x637 = 49U;
	static int64_t x638 = INT64_MIN;
	uint16_t x639 = 21041U;
	int64_t x640 = INT64_MIN;
	volatile int32_t t83 = 54223;

	t83 = ((x637<<(x638<=x639))<x640);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x641 = 555304996LLU;
	int32_t x642 = -1;
	uint8_t x643 = 2U;
	uint16_t x644 = 168U;

	t84 = ((x641<<(x642<=x643))<x644);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x653 = 2129597210260LLU;
	static volatile int8_t x654 = INT8_MIN;

	t85 = ((x653<<(x654<=x655))<x656);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x661 = INT32_MAX;
	volatile int8_t x663 = INT8_MIN;
	int32_t t86 = 56108;

	t86 = ((x661<<(x662<=x663))<x664);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x665 = 1864365U;
	uint16_t x666 = 83U;
	static int16_t x667 = INT16_MIN;
	int8_t x668 = 11;

	t87 = ((x665<<(x666<=x667))<x668);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x674 = 3734380LL;
	int16_t x675 = 0;
	int16_t x676 = INT16_MIN;

	t88 = ((x673<<(x674<=x675))<x676);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x677 = 31U;
	int16_t x678 = 7;
	int16_t x680 = -7;

	t89 = ((x677<<(x678<=x679))<x680);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x686 = -1LL;
	int32_t x687 = INT32_MAX;
	static uint16_t x688 = 26U;
	int32_t t90 = 62220528;

	t90 = ((x685<<(x686<=x687))<x688);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x697 = 87U;
	volatile uint8_t x699 = 0U;
	int16_t x700 = INT16_MAX;
	volatile int32_t t91 = -1;

	t91 = ((x697<<(x698<=x699))<x700);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x705 = 1577335656U;
	int64_t x707 = INT64_MIN;
	uint8_t x708 = UINT8_MAX;

	t92 = ((x705<<(x706<=x707))<x708);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x713 = 11850651045LLU;
	volatile int32_t t93 = -111;

	t93 = ((x713<<(x714<=x715))<x716);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x721 = UINT8_MAX;
	static volatile int32_t x722 = INT32_MIN;
	int64_t x723 = -1LL;
	uint64_t x724 = 8436340LLU;
	volatile int32_t t94 = 195009;

	t94 = ((x721<<(x722<=x723))<x724);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x725 = 2064836593888308LL;
	int32_t x726 = INT32_MIN;
	volatile int32_t x727 = INT32_MAX;
	int32_t t95 = 169;

	t95 = ((x725<<(x726<=x727))<x728);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x734 = 363U;
	volatile int8_t x736 = -1;
	int32_t t96 = 12988;

	t96 = ((x733<<(x734<=x735))<x736);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x737 = 1;
	static int8_t x738 = 30;
	int32_t x739 = 12;
	volatile int8_t x740 = -1;

	t97 = ((x737<<(x738<=x739))<x740);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x741 = UINT16_MAX;
	int16_t x742 = 91;
	volatile uint8_t x743 = UINT8_MAX;
	int16_t x744 = -1;
	volatile int32_t t98 = 942;

	t98 = ((x741<<(x742<=x743))<x744);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x745 = 1170536;
	uint32_t x748 = 243031U;
	int32_t t99 = -16325;

	t99 = ((x745<<(x746<=x747))<x748);

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

