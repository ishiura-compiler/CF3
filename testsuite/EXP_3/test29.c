#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = 1403U;
uint64_t t1 = 5LLU;
uint8_t x14 = 120U;
int32_t x22 = -1;
volatile int8_t x26 = -12;
volatile int64_t x27 = 547911182211LL;
static int32_t x28 = INT32_MIN;
uint16_t x40 = 736U;
int64_t x53 = -1LL;
int8_t x95 = INT8_MIN;
int8_t x104 = -1;
uint64_t x112 = UINT64_MAX;
int16_t x120 = -1;
int32_t t15 = 0;
int64_t x121 = 49829258LL;
static uint8_t x134 = 14U;
int8_t x136 = INT8_MIN;
int32_t t18 = 481792;
int8_t x146 = -1;
uint32_t t21 = 750U;
int16_t x191 = INT16_MAX;
int32_t x214 = 0;
volatile int32_t x215 = -1868069;
int32_t t26 = -16968;
static volatile uint64_t t29 = 199515LLU;
uint16_t x271 = UINT16_MAX;
uint8_t x272 = 16U;
volatile int16_t x275 = 10;
static uint8_t x292 = 53U;
int32_t x314 = 13;
int64_t x316 = 1LL;
int64_t t37 = -5277148276129283LL;
int8_t x345 = INT8_MIN;
uint32_t x365 = UINT32_MAX;
int8_t x368 = 1;
static volatile int64_t t43 = -693874929167LL;
int8_t x382 = -40;
uint16_t x397 = 15441U;
int8_t x403 = INT8_MIN;
volatile uint64_t x426 = 5099002490LLU;
static uint8_t x436 = 15U;
volatile int64_t t50 = 23LL;
int32_t x467 = 4;
volatile int8_t x468 = -1;
volatile int32_t t54 = 411;
volatile uint32_t x513 = 1477U;
int32_t x521 = INT32_MIN;
volatile int16_t x525 = 150;
int64_t x527 = -1LL;
uint32_t x530 = 50U;
volatile uint64_t t59 = 942LLU;
int8_t x533 = INT8_MIN;
static int8_t x538 = INT8_MIN;
uint8_t x549 = UINT8_MAX;
uint64_t t64 = 2026541561653LLU;
uint64_t x573 = UINT64_MAX;
int16_t x583 = -1;
uint32_t x584 = 3319000U;
uint16_t x604 = UINT16_MAX;
volatile uint64_t x607 = 14211070675263LLU;
volatile uint16_t x613 = UINT16_MAX;
int8_t x615 = INT8_MIN;
int8_t x620 = -1;
volatile uint8_t x633 = 6U;
static uint16_t x636 = 2988U;
uint32_t t75 = 360615669U;
uint64_t x663 = UINT64_MAX;
uint64_t t76 = 13097108LLU;
uint64_t x667 = 218058777383158LLU;
static volatile int32_t x668 = 370741199;
int32_t x670 = INT32_MIN;
int32_t x671 = -5790798;
static int32_t t79 = -10101;
volatile uint64_t t80 = 5321250006245847LLU;
static volatile uint64_t x703 = UINT64_MAX;
volatile uint32_t t83 = 610354U;
int16_t x718 = INT16_MIN;
uint8_t x721 = 2U;
uint32_t t85 = 78U;
static volatile uint64_t x730 = 46223822LLU;
static int16_t x750 = -1;
int16_t x768 = -7;
int8_t x777 = -1;
static uint32_t x778 = 63U;
int16_t x779 = -24;
static int8_t x784 = 0;
static uint32_t x795 = 124948774U;
uint32_t x809 = UINT32_MAX;
int16_t x811 = INT16_MIN;
uint32_t x812 = UINT32_MAX;
int8_t x813 = INT8_MIN;
uint32_t x825 = 50412U;
volatile int32_t x840 = 13093;


void f0(void) {
	int16_t x1 = 1383;
	static uint32_t x2 = UINT32_MAX;
	uint8_t x3 = UINT8_MAX;
	static uint32_t t0 = 1303108U;

	t0 = ((x1*x2)*(x3+x4));

	if (t0 != 4292674282U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 554LLU;
	volatile int16_t x6 = INT16_MIN;
	uint16_t x7 = UINT16_MAX;
	int8_t x8 = -23;

	t1 = ((x5*x6)*(x7+x8));

	if (t1 != 18446742884439293952LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 0U;
	int8_t x15 = INT8_MIN;
	static int8_t x16 = INT8_MIN;
	int32_t t2 = 945;

	t2 = ((x13*x14)*(x15+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = INT16_MAX;
	int64_t x23 = 42223695246LL;
	uint64_t x24 = 78LLU;
	volatile uint64_t t3 = 981065783239154452LLU;

	t3 = ((x21*x22)*(x23+x24));

	if (t3 != 18445360529884870108LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = -1;
	volatile int64_t t4 = 4998476525LL;

	t4 = ((x25*x26)*(x27+x28));

	if (t4 != 6549164382756LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x37 = UINT64_MAX;
	static uint16_t x38 = 32103U;
	int32_t x39 = INT32_MIN;
	uint64_t t5 = 27644872977892LLU;

	t5 = ((x37*x38)*(x39+x40));

	if (t5 != 68940643923936LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = 1047333139LLU;
	volatile int64_t x50 = -1591LL;
	int32_t x51 = INT32_MAX;
	static volatile int16_t x52 = INT16_MIN;
	volatile uint64_t t6 = 2007158LLU;

	t6 = ((x49*x50)*(x51+x52));

	if (t6 != 355866607008736533LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x54 = -4764;
	int8_t x55 = -1;
	int32_t x56 = -1;
	volatile int64_t t7 = -513756438942775LL;

	t7 = ((x53*x54)*(x55+x56));

	if (t7 != -9528LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x57 = 15;
	uint32_t x58 = 8U;
	int16_t x59 = -1;
	int16_t x60 = INT16_MAX;
	volatile uint32_t t8 = 0U;

	t8 = ((x57*x58)*(x59+x60));

	if (t8 != 3931920U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x61 = UINT32_MAX;
	int8_t x62 = 0;
	static volatile uint32_t x63 = 30260U;
	int8_t x64 = INT8_MIN;
	uint32_t t9 = 1U;

	t9 = ((x61*x62)*(x63+x64));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x69 = 26901U;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 169445683126439LLU;
	int8_t x72 = INT8_MIN;
	uint64_t t10 = 208660LLU;

	t10 = ((x69*x70)*(x71+x72));

	if (t10 != 16724820783673016320LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = 1;
	volatile uint32_t x78 = UINT32_MAX;
	uint32_t x79 = 13655U;
	int32_t x80 = 1;
	uint32_t t11 = 24536U;

	t11 = ((x77*x78)*(x79+x80));

	if (t11 != 4294953640U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x93 = 4;
	int16_t x94 = -1;
	uint16_t x96 = 63U;
	volatile int32_t t12 = 15302;

	t12 = ((x93*x94)*(x95+x96));

	if (t12 != 260) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x101 = 16111U;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	volatile uint32_t t13 = 705245132U;

	t13 = ((x101*x102)*(x103+x104));

	if (t13 != 3151984512U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x109 = INT64_MIN;
	volatile uint64_t x110 = 545820516917752LLU;
	int64_t x111 = -72056793061399LL;
	uint64_t t14 = 2089030679545724550LLU;

	t14 = ((x109*x110)*(x111+x112));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x117 = -1;
	volatile int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MIN;

	t15 = ((x117*x118)*(x119+x120));

	if (t15 != 4161663) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x122 = -14;
	int8_t x123 = INT8_MAX;
	static volatile uint32_t x124 = 4U;
	int64_t t16 = 2792629850LL;

	t16 = ((x121*x122)*(x123+x124));

	if (t16 != -91386859172LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x133 = -1;
	static volatile int16_t x135 = INT16_MAX;
	volatile int32_t t17 = 3;

	t17 = ((x133*x134)*(x135+x136));

	if (t17 != -456946) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x141 = -2;
	int32_t x142 = -1;
	uint16_t x143 = UINT16_MAX;
	volatile int32_t x144 = -1;

	t18 = ((x141*x142)*(x143+x144));

	if (t18 != 131068) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x145 = 31649374U;
	uint8_t x147 = 20U;
	int32_t x148 = -1;
	volatile uint32_t t19 = 22227U;

	t19 = ((x145*x146)*(x147+x148));

	if (t19 != 3693629190U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x153 = -8592590LL;
	int64_t x154 = -1LL;
	static uint32_t x155 = 59U;
	static uint64_t x156 = 27221902675492LLU;
	uint64_t t20 = 16LLU;

	t20 = ((x153*x154)*(x155+x156));

	if (t20 != 12545719826398147698LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x165 = INT16_MIN;
	uint32_t x166 = 283U;
	int8_t x167 = 3;
	static int8_t x168 = INT8_MAX;

	t21 = ((x165*x166)*(x167+x168));

	if (t21 != 3089432576U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x169 = -1LL;
	uint64_t x170 = 1569676978929LLU;
	int8_t x171 = INT8_MIN;
	int8_t x172 = -1;
	static uint64_t t22 = 2049214352990081438LLU;

	t22 = ((x169*x170)*(x171+x172));

	if (t22 != 202488330281841LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x173 = 30782253LLU;
	int16_t x174 = -1;
	int8_t x175 = -1;
	uint16_t x176 = 3U;
	volatile uint64_t t23 = 19123971622LLU;

	t23 = ((x173*x174)*(x175+x176));

	if (t23 != 18446744073647987110LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x189 = 1LLU;
	int32_t x190 = -1;
	uint64_t x192 = 922956356936LLU;
	uint64_t t24 = 23349992LLU;

	t24 = ((x189*x190)*(x191+x192));

	if (t24 != 18446743150753161913LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x209 = -56;
	static volatile uint32_t x210 = UINT32_MAX;
	uint32_t x211 = 499654U;
	int64_t x212 = -1LL;
	int64_t t25 = 41151616171LL;

	t25 = ((x209*x210)*(x211+x212));

	if (t25 != 27980568LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x213 = -1;
	int8_t x216 = INT8_MIN;

	t26 = ((x213*x214)*(x215+x216));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x225 = 14;
	volatile int8_t x226 = -1;
	uint64_t x227 = 3123LLU;
	int16_t x228 = 2785;
	uint64_t t27 = 125468919603012946LLU;

	t27 = ((x225*x226)*(x227+x228));

	if (t27 != 18446744073709468904LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x241 = 352068526U;
	uint32_t x242 = UINT32_MAX;
	static int32_t x243 = -95259;
	uint8_t x244 = 53U;
	static volatile uint32_t t28 = 52268025U;

	t28 = ((x241*x242)*(x243+x244));

	if (t28 != 1111308372U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x253 = 0;
	static int64_t x254 = INT64_MIN;
	uint64_t x255 = 6040LLU;
	int16_t x256 = 1020;

	t29 = ((x253*x254)*(x255+x256));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x269 = INT8_MAX;
	uint8_t x270 = 1U;
	int32_t t30 = 20979551;

	t30 = ((x269*x270)*(x271+x272));

	if (t30 != 8324977) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	int16_t x276 = -15;
	int32_t t31 = -478032;

	t31 = ((x273*x274)*(x275+x276));

	if (t31 != -81920) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x282 = 46883U;
	int32_t x283 = -1;
	int8_t x284 = INT8_MAX;
	uint32_t t32 = 19174891U;

	t32 = ((x281*x282)*(x283+x284));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x289 = -3LL;
	static volatile int32_t x290 = -4;
	static int32_t x291 = 439;
	volatile int64_t t33 = -25090880LL;

	t33 = ((x289*x290)*(x291+x292));

	if (t33 != 5904LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x297 = 2046239U;
	uint32_t x298 = 9U;
	int16_t x299 = INT16_MIN;
	volatile uint16_t x300 = 122U;
	static uint32_t t34 = 259251U;

	t34 = ((x297*x298)*(x299+x300));

	if (t34 != 81755894U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x301 = INT8_MIN;
	uint16_t x302 = 7U;
	uint64_t x303 = 20603LLU;
	uint16_t x304 = 0U;
	volatile uint64_t t35 = 2972405658155LLU;

	t35 = ((x301*x302)*(x303+x304));

	if (t35 != 18446744073691091328LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x309 = 60U;
	static uint64_t x310 = 199188766520938LLU;
	static uint32_t x311 = UINT32_MAX;
	volatile uint8_t x312 = UINT8_MAX;
	volatile uint64_t t36 = 1363911069LLU;

	t36 = ((x309*x310)*(x311+x312));

	if (t36 != 3035636801779095120LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x313 = -1;
	int8_t x315 = -1;

	t37 = ((x313*x314)*(x315+x316));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x329 = 25349686;
	int8_t x330 = -1;
	int32_t x331 = -1;
	int8_t x332 = 2;
	int32_t t38 = -4940;

	t38 = ((x329*x330)*(x331+x332));

	if (t38 != -25349686) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x341 = 1;
	int64_t x342 = 70191648546LL;
	static uint8_t x343 = 2U;
	int8_t x344 = -27;
	int64_t t39 = -131833458LL;

	t39 = ((x341*x342)*(x343+x344));

	if (t39 != -1754791213650LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x346 = -1LL;
	uint8_t x347 = UINT8_MAX;
	uint64_t x348 = UINT64_MAX;
	static volatile uint64_t t40 = 85380241746024LLU;

	t40 = ((x345*x346)*(x347+x348));

	if (t40 != 32512LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x357 = 2037;
	static uint32_t x358 = UINT32_MAX;
	int16_t x359 = -4562;
	uint32_t x360 = 415871638U;
	volatile uint32_t t41 = 175116817U;

	t41 = ((x357*x358)*(x359+x360));

	if (t41 != 3282290796U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x366 = INT16_MAX;
	uint8_t x367 = 6U;
	static uint32_t t42 = 74U;

	t42 = ((x365*x366)*(x367+x368));

	if (t42 != 4294737927U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x369 = -1;
	int8_t x370 = -13;
	int64_t x371 = 30964120052349504LL;
	uint16_t x372 = 129U;

	t43 = ((x369*x370)*(x371+x372));

	if (t43 != 402533560680545229LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x377 = -7;
	uint32_t x378 = 101212U;
	uint16_t x379 = 10147U;
	uint32_t x380 = 9U;
	static uint32_t t44 = 19U;

	t44 = ((x377*x378)*(x379+x380));

	if (t44 != 1394571088U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x381 = UINT16_MAX;
	uint64_t x383 = UINT64_MAX;
	uint16_t x384 = UINT16_MAX;
	uint64_t t45 = 195671LLU;

	t45 = ((x381*x382)*(x383+x384));

	if (t45 != 18446743901918724016LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x393 = 0;
	volatile int64_t x394 = -2477LL;
	volatile uint16_t x395 = 345U;
	uint64_t x396 = UINT64_MAX;
	uint64_t t46 = 4698320283666139LLU;

	t46 = ((x393*x394)*(x395+x396));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x398 = -1LL;
	volatile uint64_t x399 = 4100337049825526LLU;
	int16_t x400 = -1;
	volatile uint64_t t47 = 39850737562740LLU;

	t47 = ((x397*x398)*(x399+x400));

	if (t47 != 10473671908482274939LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x401 = UINT16_MAX;
	int16_t x402 = INT16_MAX;
	static uint64_t x404 = 2699241111LLU;
	volatile uint64_t t48 = 55767659272708LLU;

	t48 = ((x401*x402)*(x403+x404));

	if (t48 != 5796310529517594135LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x425 = INT64_MIN;
	static uint64_t x427 = 216LLU;
	static volatile uint64_t x428 = 138619850341021LLU;
	uint64_t t49 = 12818799243270703LLU;

	t49 = ((x425*x426)*(x427+x428));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x433 = -417830357755004LL;
	static uint8_t x434 = 29U;
	int16_t x435 = 658;

	t50 = ((x433*x434)*(x435+x436));

	if (t50 != -8154795092304413068LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x453 = -1;
	volatile int64_t x454 = -1LL;
	int8_t x455 = -3;
	volatile uint32_t x456 = UINT32_MAX;
	volatile int64_t t51 = -664LL;

	t51 = ((x453*x454)*(x455+x456));

	if (t51 != 4294967292LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x465 = 1461U;
	volatile int64_t x466 = -18567LL;
	volatile int64_t t52 = -91785LL;

	t52 = ((x465*x466)*(x467+x468));

	if (t52 != -81379161LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x489 = 141064U;
	volatile uint32_t x490 = 7U;
	int8_t x491 = INT8_MAX;
	int32_t x492 = -1;
	static uint32_t t53 = 10U;

	t53 = ((x489*x490)*(x491+x492));

	if (t53 != 124418448U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x497 = 157U;
	uint8_t x498 = UINT8_MAX;
	int16_t x499 = INT16_MAX;
	static int16_t x500 = INT16_MIN;

	t54 = ((x497*x498)*(x499+x500));

	if (t54 != -40035) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x505 = -2757169;
	uint32_t x506 = UINT32_MAX;
	int8_t x507 = 9;
	int32_t x508 = INT32_MIN;
	uint32_t t55 = 132527U;

	t55 = ((x505*x506)*(x507+x508));

	if (t55 != 2172298169U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x514 = INT16_MIN;
	uint16_t x515 = UINT16_MAX;
	static volatile int64_t x516 = -3LL;
	int64_t t56 = -539081736142260732LL;

	t56 = ((x513*x514)*(x515+x516));

	if (t56 != 278286157086720LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x522 = 7924098644LLU;
	static int16_t x523 = 3876;
	uint8_t x524 = 105U;
	uint64_t t57 = 14836609LLU;

	t57 = ((x521*x522)*(x523+x524));

	if (t57 != 10722503218740330496LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x526 = 432006LLU;
	int16_t x528 = 11888;
	volatile uint64_t t58 = 16150140LLU;

	t58 = ((x525*x526)*(x527+x528));

	if (t58 != 770288298300LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x529 = 15670862628773221LL;
	volatile int16_t x531 = INT16_MIN;
	static uint64_t x532 = UINT64_MAX;

	t59 = ((x529*x530)*(x531+x532));

	if (t59 != 1942876490211902022LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x534 = -7;
	uint64_t x535 = 821521451727318317LLU;
	uint64_t x536 = 22696896877LLU;
	volatile uint64_t t60 = 1681LLU;

	t60 = ((x533*x534)*(x535+x536));

	if (t60 != 16660222209424300800LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x537 = INT8_MIN;
	volatile uint16_t x539 = 1U;
	uint32_t x540 = UINT32_MAX;
	volatile uint32_t t61 = 1747U;

	t61 = ((x537*x538)*(x539+x540));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x550 = 60U;
	uint8_t x551 = 18U;
	int32_t x552 = INT32_MIN;
	static uint32_t t62 = 5529U;

	t62 = ((x549*x550)*(x551+x552));

	if (t62 != 275400U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x557 = INT32_MAX;
	int16_t x558 = -1;
	int64_t x559 = -1LL;
	int8_t x560 = INT8_MIN;
	int64_t t63 = 459500928LL;

	t63 = ((x557*x558)*(x559+x560));

	if (t63 != 277025390463LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x561 = INT8_MAX;
	int8_t x562 = -1;
	uint32_t x563 = 399736U;
	static uint64_t x564 = 6049953LLU;

	t64 = ((x561*x562)*(x563+x564));

	if (t64 != 18446744072890441113LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x574 = 859189568763LLU;
	int8_t x575 = 0;
	static int32_t x576 = INT32_MIN;
	uint64_t t65 = 63144024285052338LLU;

	t65 = ((x573*x574)*(x575+x576));

	if (t65 != 421142079758925824LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x577 = -1LL;
	uint16_t x578 = 4534U;
	int8_t x579 = INT8_MIN;
	int16_t x580 = INT16_MIN;
	volatile int64_t t66 = -3407769104LL;

	t66 = ((x577*x578)*(x579+x580));

	if (t66 != 149150464LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x581 = -2181;
	int8_t x582 = 0;
	volatile uint32_t t67 = 15U;

	t67 = ((x581*x582)*(x583+x584));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x593 = INT16_MAX;
	uint16_t x594 = UINT16_MAX;
	int8_t x595 = INT8_MIN;
	uint32_t x596 = 1853386U;
	volatile uint32_t t68 = 376U;

	t68 = ((x593*x594)*(x595+x596));

	if (t68 != 2502772554U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x597 = INT8_MIN;
	uint16_t x598 = 4U;
	int16_t x599 = -1;
	uint32_t x600 = UINT32_MAX;
	static uint32_t t69 = 988U;

	t69 = ((x597*x598)*(x599+x600));

	if (t69 != 1024U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x601 = 2841965386712433LLU;
	volatile int32_t x602 = INT32_MIN;
	volatile uint16_t x603 = 1U;
	volatile uint64_t t70 = 3860822125172219896LLU;

	t70 = ((x601*x602)*(x603+x604));

	if (t70 != 11333167724789497856LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x605 = -1;
	static int8_t x606 = 43;
	static int32_t x608 = INT32_MIN;
	volatile uint64_t t71 = 644251884050771LLU;

	t71 = ((x605*x606)*(x607+x608));

	if (t71 != 18446133090012312171LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x614 = 6U;
	uint16_t x616 = 2U;
	int32_t t72 = 236247;

	t72 = ((x613*x614)*(x615+x616));

	if (t72 != -49544460) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x617 = -1LL;
	volatile int32_t x618 = INT32_MIN;
	volatile int8_t x619 = 5;
	int64_t t73 = -3580LL;

	t73 = ((x617*x618)*(x619+x620));

	if (t73 != 8589934592LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x634 = -1LL;
	uint16_t x635 = 2303U;
	volatile int64_t t74 = 38581775132412LL;

	t74 = ((x633*x634)*(x635+x636));

	if (t74 != -31746LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x649 = 2;
	uint16_t x650 = UINT16_MAX;
	uint16_t x651 = 209U;
	static uint32_t x652 = 75449042U;

	t75 = ((x649*x650)*(x651+x652));

	if (t75 != 2118613178U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x661 = UINT16_MAX;
	uint32_t x662 = 747068280U;
	volatile int32_t x664 = -1;

	t76 = ((x661*x662)*(x663+x664));

	if (t76 != 18446744072134506224LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x665 = 84U;
	int32_t x666 = -3115;
	uint64_t t77 = 541615291LLU;

	t77 = ((x665*x666)*(x667+x668));

	if (t77 != 16729619596618953844LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x669 = -1LL;
	static int16_t x672 = 3569;
	static int64_t t78 = -1LL;

	t78 = ((x669*x670)*(x671+x672));

	if (t78 != -12427979644731392LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x673 = 0U;
	uint8_t x674 = 2U;
	int16_t x675 = INT16_MAX;
	uint16_t x676 = 23299U;

	t79 = ((x673*x674)*(x675+x676));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x681 = INT64_MIN;
	static volatile uint8_t x682 = 1U;
	uint64_t x683 = 2038LLU;
	int64_t x684 = -1LL;

	t80 = ((x681*x682)*(x683+x684));

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x693 = -1;
	uint32_t x694 = UINT32_MAX;
	int32_t x695 = 16357;
	int64_t x696 = -178LL;
	static int64_t t81 = -513786073371LL;

	t81 = ((x693*x694)*(x695+x696));

	if (t81 != 16179LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x701 = 60;
	static int16_t x702 = INT16_MIN;
	static volatile int16_t x704 = INT16_MAX;
	volatile uint64_t t82 = 8276293535630LLU;

	t82 = ((x701*x702)*(x703+x704));

	if (t82 != 18446744009288974336LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x709 = INT16_MAX;
	static int16_t x710 = INT16_MIN;
	int32_t x711 = INT32_MAX;
	uint32_t x712 = UINT32_MAX;

	t83 = ((x709*x710)*(x711+x712));

	if (t83 != 2147418112U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x717 = 3U;
	uint64_t x719 = 422377412924LLU;
	volatile int8_t x720 = INT8_MIN;
	uint64_t t84 = 4840LLU;

	t84 = ((x717*x718)*(x719+x720));

	if (t84 != 18405222684522053632LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x722 = INT8_MAX;
	uint32_t x723 = UINT32_MAX;
	uint8_t x724 = 15U;

	t85 = ((x721*x722)*(x723+x724));

	if (t85 != 3556U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x725 = -1;
	uint64_t x726 = 2895LLU;
	static int64_t x727 = 188765719LL;
	volatile uint64_t x728 = 67714722751784LLU;
	volatile uint64_t t86 = 426212185013219LLU;

	t86 = ((x725*x726)*(x727+x728));

	if (t86 != 18250709404866380431LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x729 = INT8_MAX;
	uint32_t x731 = UINT32_MAX;
	int8_t x732 = INT8_MIN;
	volatile uint64_t t87 = 128714780910738457LLU;

	t87 = ((x729*x730)*(x731+x732));

	if (t87 != 6766540249843487182LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x741 = 0U;
	int8_t x742 = INT8_MAX;
	int16_t x743 = INT16_MIN;
	uint8_t x744 = 13U;
	uint32_t t88 = 7208662U;

	t88 = ((x741*x742)*(x743+x744));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x749 = -7;
	int8_t x751 = 1;
	static int8_t x752 = INT8_MIN;
	volatile int32_t t89 = -3818;

	t89 = ((x749*x750)*(x751+x752));

	if (t89 != -889) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x757 = -463939651074LL;
	static int16_t x758 = INT16_MAX;
	volatile uint8_t x759 = 4U;
	volatile int64_t x760 = -1LL;
	volatile int64_t t90 = 11LL;

	t90 = ((x757*x758)*(x759+x760));

	if (t90 != -45605731640225274LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x765 = 178628532892LLU;
	int8_t x766 = INT8_MIN;
	int64_t x767 = -1LL;
	static volatile uint64_t t91 = 51LLU;

	t91 = ((x765*x766)*(x767+x768));

	if (t91 != 182915617681408LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x780 = 127U;
	uint32_t t92 = 242147891U;

	t92 = ((x777*x778)*(x779+x780));

	if (t92 != 4294960807U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x781 = INT8_MIN;
	int8_t x782 = 0;
	int64_t x783 = INT64_MIN;
	volatile int64_t t93 = -782429LL;

	t93 = ((x781*x782)*(x783+x784));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x793 = 35974U;
	volatile uint64_t x794 = 5858167727992LLU;
	uint16_t x796 = UINT16_MAX;
	uint64_t t94 = 3617291853007LLU;

	t94 = ((x793*x794)*(x795+x796));

	if (t94 != 17561154891179054608LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x810 = 3;
	static uint32_t t95 = 7U;

	t95 = ((x809*x810)*(x811+x812));

	if (t95 != 98307U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x814 = INT16_MIN;
	int16_t x815 = -1;
	uint8_t x816 = 127U;
	static volatile int32_t t96 = 115;

	t96 = ((x813*x814)*(x815+x816));

	if (t96 != 528482304) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x817 = INT8_MIN;
	int64_t x818 = 1943167177111LL;
	volatile uint32_t x819 = UINT32_MAX;
	uint64_t x820 = 217541137LLU;
	uint64_t t97 = 2139768844049LLU;

	t97 = ((x817*x818)*(x819+x820));

	if (t97 != 16684412982480881664LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x826 = INT16_MAX;
	volatile int8_t x827 = INT8_MIN;
	int8_t x828 = 6;
	volatile uint32_t t98 = 4033U;

	t98 = ((x825*x826)*(x827+x828));

	if (t98 != 337762424U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x837 = -79;
	uint64_t x838 = 64280858190LLU;
	int32_t x839 = 13138;
	uint64_t t99 = 1701197LLU;

	t99 = ((x837*x838)*(x839+x840));

	if (t99 != 18313538129606182306LLU) { NG(); } else { ; }
	
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

