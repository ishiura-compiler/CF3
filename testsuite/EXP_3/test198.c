#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -17785066;
int16_t x8 = INT16_MIN;
volatile int32_t x13 = -1;
static volatile int8_t x17 = INT8_MIN;
static uint64_t x27 = 2793811693LLU;
int32_t x30 = -548622;
int16_t x31 = 29;
int8_t x41 = 47;
uint8_t x42 = 7U;
int8_t x43 = -1;
static int8_t x44 = INT8_MAX;
uint32_t x50 = 93081U;
uint32_t t9 = 41U;
int16_t x59 = -467;
int16_t x61 = INT16_MIN;
int8_t x62 = -1;
int8_t x64 = INT8_MAX;
int64_t t11 = -4655290107960511LL;
volatile int16_t x69 = INT16_MAX;
volatile int32_t x74 = 0;
int32_t x75 = INT32_MAX;
uint64_t t14 = 665329883101003LLU;
uint64_t t16 = 12693684515812LLU;
static volatile int32_t t17 = -6109;
int8_t x98 = -1;
uint8_t x118 = UINT8_MAX;
uint64_t x119 = UINT64_MAX;
int8_t x120 = INT8_MIN;
int16_t x131 = INT16_MIN;
int16_t x132 = -1;
int32_t t23 = -342524234;
uint32_t x137 = 75190U;
static volatile int16_t x141 = -1901;
volatile int64_t x143 = INT64_MIN;
int8_t x146 = -2;
int8_t x151 = 1;
int16_t x152 = -1;
volatile uint64_t x165 = 31985084LLU;
volatile int8_t x166 = 2;
uint16_t x169 = 2863U;
int32_t x181 = -26;
uint16_t x193 = 744U;
static int8_t x194 = -1;
volatile int64_t t32 = -3213520168LL;
int16_t x197 = INT16_MIN;
static volatile int64_t t33 = 472038LL;
uint16_t x212 = 34U;
static volatile uint64_t t34 = 244984LLU;
int32_t x217 = -1;
uint32_t t35 = 5476U;
uint32_t x252 = 12U;
int64_t t37 = 188587575LL;
int64_t x266 = -2LL;
static uint32_t x267 = 1U;
int32_t x273 = -5152570;
uint64_t t43 = 66077215LLU;
int32_t x307 = INT32_MAX;
int32_t x318 = -5136394;
static int64_t t47 = 1707178237987437661LL;
int16_t x321 = 1;
uint8_t x337 = 115U;
static int64_t x341 = -1LL;
int64_t t52 = -12920LL;
int32_t x374 = -1;
uint32_t x376 = 3820U;
static uint32_t t54 = 457233U;
uint64_t x377 = 331869317LLU;
int8_t x379 = -52;
int8_t x380 = INT8_MIN;
int16_t x390 = INT16_MIN;
int16_t x396 = INT16_MIN;
int8_t x397 = INT8_MAX;
uint32_t x399 = UINT32_MAX;
static volatile int16_t x400 = -1;
uint64_t x417 = 183377600939729LLU;
int8_t x419 = -1;
int32_t x420 = INT32_MIN;
uint64_t t60 = 30LLU;
static int16_t x421 = 0;
int8_t x435 = -1;
static volatile uint8_t x445 = UINT8_MAX;
volatile uint64_t x446 = 120495LLU;
int8_t x465 = INT8_MIN;
volatile uint32_t t67 = 240774047U;
volatile int16_t x483 = INT16_MIN;
static uint64_t x484 = 7813713530117002825LLU;
static uint16_t x489 = 776U;
uint16_t x492 = 3U;
uint8_t x493 = UINT8_MAX;
int8_t x495 = -1;
int16_t x535 = -1;
volatile uint64_t x539 = 1086736123295LLU;
uint64_t t78 = 182LLU;
int64_t x549 = 65LL;
uint64_t t80 = 473163LLU;
int16_t x558 = -1;
uint8_t x567 = 42U;
volatile int16_t x589 = -1;
int64_t x592 = 712962391919390LL;
int64_t t86 = 9325012821833388LL;
int16_t x607 = INT16_MIN;
int8_t x608 = INT8_MAX;
int64_t x626 = INT64_MIN;
uint64_t x628 = UINT64_MAX;
volatile uint64_t t88 = 1063837738102691LLU;
static int8_t x638 = -1;
int16_t x639 = 2526;
int64_t x646 = 52886972585515LL;
static int32_t x649 = -657;
uint32_t t91 = 134038U;
static int16_t x659 = -1;
static uint64_t x684 = 163085355991940979LLU;
uint64_t t96 = 27LLU;
int32_t x688 = -1331115;
uint64_t x708 = UINT64_MAX;


void f0(void) {
	int8_t x1 = 27;
	int8_t x2 = -36;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = 6433U;

	t0 = ((x1*x2)*(x3-x4));

	if (t0 != 38103372) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int8_t x6 = -20;
	uint16_t x7 = UINT16_MAX;
	static int32_t t1 = -577693971;

	t1 = ((x5*x6)*(x7-x8));

	if (t1 != 1966060) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 12;
	volatile int8_t x10 = INT8_MIN;
	volatile int8_t x11 = -63;
	int64_t x12 = -1LL;
	volatile int64_t t2 = -126633688129172LL;

	t2 = ((x9*x10)*(x11-x12));

	if (t2 != 95232LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 393U;
	uint64_t x15 = UINT64_MAX;
	uint8_t x16 = 5U;
	static volatile uint64_t t3 = 7271LLU;

	t3 = ((x13*x14)*(x15-x16));

	if (t3 != 18446744047939750198LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x18 = INT8_MIN;
	uint32_t x19 = 65690034U;
	uint32_t x20 = 455096906U;
	volatile uint32_t t4 = 467U;

	t4 = ((x17*x18)*(x19-x20));

	if (t4 != 2279211008U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	static int8_t x26 = 0;
	int8_t x28 = INT8_MAX;
	uint64_t t5 = 108394135891473LLU;

	t5 = ((x25*x26)*(x27-x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x32 = -1LL;
	volatile uint64_t t6 = 2621091459LLU;

	t6 = ((x29*x30)*(x31-x32));

	if (t6 != 16458660LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 105U;
	int64_t x38 = -1LL;
	static int8_t x39 = INT8_MAX;
	uint16_t x40 = 3U;
	volatile int64_t t7 = -721LL;

	t7 = ((x37*x38)*(x39-x40));

	if (t7 != -13020LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t t8 = 1986;

	t8 = ((x41*x42)*(x43-x44));

	if (t8 != -42112) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -1;
	static int32_t x51 = INT32_MAX;
	int8_t x52 = INT8_MAX;

	t9 = ((x49*x50)*(x51-x52));

	if (t9 != 2159398016U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = UINT64_MAX;
	static int64_t x58 = INT64_MIN;
	static uint16_t x60 = 211U;
	volatile uint64_t t10 = 4LLU;

	t10 = ((x57*x58)*(x59-x60));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x63 = 3478353LL;

	t11 = ((x61*x62)*(x63-x64));

	if (t11 != 113974509568LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 12898U;
	uint16_t x66 = 0U;
	int32_t x67 = -1;
	uint64_t x68 = 1725225447LLU;
	volatile uint64_t t12 = 1249738270084LLU;

	t12 = ((x65*x66)*(x67-x68));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x70 = 1U;
	int8_t x71 = -8;
	static volatile int8_t x72 = 7;
	int32_t t13 = 49074;

	t13 = ((x69*x70)*(x71-x72));

	if (t13 != -491505) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	volatile uint64_t x76 = 5292301552766680844LLU;

	t14 = ((x73*x74)*(x75-x76));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x77 = 129607728864LLU;
	int32_t x78 = INT32_MIN;
	int8_t x79 = -1;
	uint16_t x80 = 21U;
	uint64_t t15 = 187361644323402340LLU;

	t15 = ((x77*x78)*(x79-x80));

	if (t15 != 17398236179005964288LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -1;
	uint16_t x82 = 152U;
	uint64_t x83 = 624157861954LLU;
	volatile int32_t x84 = INT32_MIN;

	t16 = ((x81*x82)*(x83-x84));

	if (t16 != 18446648875297020112LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = -1;
	volatile int16_t x95 = -1;
	int8_t x96 = -29;

	t17 = ((x93*x94)*(x95-x96));

	if (t17 != -1834980) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = INT32_MAX;
	int16_t x99 = 52;
	uint64_t x100 = UINT64_MAX;
	uint64_t t18 = 462363277307LLU;

	t18 = ((x97*x98)*(x99-x100));

	if (t18 != 18446743959892918325LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 0U;
	static volatile uint16_t x102 = 55U;
	static uint16_t x103 = 2U;
	static uint64_t x104 = 35LLU;
	volatile uint64_t t19 = 43165042575LLU;

	t19 = ((x101*x102)*(x103-x104));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x109 = -13;
	volatile int16_t x110 = 920;
	static uint8_t x111 = 22U;
	int64_t x112 = 736419877LL;
	static int64_t t20 = 4321097148866LL;

	t20 = ((x109*x110)*(x111-x112));

	if (t20 != 8807581465800LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x113 = 139263090LL;
	volatile uint64_t x114 = 328180687711885003LLU;
	volatile uint32_t x115 = 3U;
	static int16_t x116 = 159;
	static uint64_t t21 = 7518613LLU;

	t21 = ((x113*x114)*(x115-x116));

	if (t21 != 11671795672566819288LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -44;
	volatile uint64_t t22 = 1LLU;

	t22 = ((x117*x118)*(x119-x120));

	if (t22 != 18446744073708126676LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = 0U;

	t23 = ((x129*x130)*(x131-x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x138 = 6U;
	int16_t x139 = -2017;
	volatile int32_t x140 = INT32_MIN;
	uint32_t t24 = 202U;

	t24 = ((x137*x138)*(x139-x140));

	if (t24 != 3385017916U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x142 = 0U;
	volatile uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t25 = 2081LLU;

	t25 = ((x141*x142)*(x143-x144));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x145 = 259LLU;
	uint16_t x147 = 1U;
	static volatile uint64_t x148 = UINT64_MAX;
	uint64_t t26 = 313749LLU;

	t26 = ((x145*x146)*(x147-x148));

	if (t26 != 18446744073709550580LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x149 = INT8_MAX;
	int32_t x150 = -544449;
	static int32_t t27 = 0;

	t27 = ((x149*x150)*(x151-x152));

	if (t27 != -138290046) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x161 = 3195379501LL;
	uint16_t x162 = UINT16_MAX;
	static int8_t x163 = 22;
	volatile uint16_t x164 = 23U;
	volatile int64_t t28 = 4850LL;

	t28 = ((x161*x162)*(x163-x164));

	if (t28 != -209409195598035LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x167 = 4079590U;
	static int16_t x168 = INT16_MIN;
	volatile uint64_t t29 = 10693LLU;

	t29 = ((x165*x166)*(x167-x168));

	if (t29 != 263068232136144LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x170 = 25LLU;
	uint8_t x171 = UINT8_MAX;
	int32_t x172 = -6;
	uint64_t t30 = 13350LLU;

	t30 = ((x169*x170)*(x171-x172));

	if (t30 != 18681075LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x182 = 28LLU;
	static uint64_t x183 = 124LLU;
	int64_t x184 = INT64_MAX;
	uint64_t t31 = 216652195157953722LLU;

	t31 = ((x181*x182)*(x183-x184));

	if (t31 != 18446744073709460616LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x195 = -726LL;
	volatile int8_t x196 = 3;

	t32 = ((x193*x194)*(x195-x196));

	if (t32 != 542376LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x198 = -1LL;
	int8_t x199 = INT8_MIN;
	static int16_t x200 = INT16_MIN;

	t33 = ((x197*x198)*(x199-x200));

	if (t33 != 1069547520LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x209 = 179389;
	uint64_t x210 = 63692LLU;
	volatile uint16_t x211 = 3185U;

	t34 = ((x209*x210)*(x211-x212));

	if (t34 != 36002204836388LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x218 = 243257U;
	volatile int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;

	t35 = ((x217*x218)*(x219-x220));

	if (t35 != 2766372864U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x229 = UINT8_MAX;
	static int16_t x230 = -13;
	volatile uint64_t x231 = 4054LLU;
	uint64_t x232 = UINT64_MAX;
	static uint64_t t36 = 2LLU;

	t36 = ((x229*x230)*(x231-x232));

	if (t36 != 18446744073696109291LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x249 = 1;
	int16_t x250 = -1;
	int64_t x251 = INT64_MAX;

	t37 = ((x249*x250)*(x251-x252));

	if (t37 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x253 = 4689U;
	volatile int32_t x254 = -5176248;
	uint8_t x255 = 47U;
	int8_t x256 = INT8_MIN;
	uint32_t t38 = 20U;

	t38 = ((x253*x254)*(x255-x256));

	if (t38 != 222953144U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x265 = -114456LL;
	volatile uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t39 = 108166598883385LLU;

	t39 = ((x265*x266)*(x267-x268));

	if (t39 != 457824LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x274 = 7LLU;
	int8_t x275 = -1;
	static int16_t x276 = INT16_MIN;
	uint64_t t40 = 426284409LLU;

	t40 = ((x273*x274)*(x275-x276));

	if (t40 != 18446742891869723286LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x281 = 732U;
	static int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MAX;
	volatile int8_t x284 = -20;
	uint32_t t41 = 13697656U;

	t41 = ((x281*x282)*(x283-x284));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x289 = 30698846U;
	uint16_t x290 = 604U;
	int64_t x291 = -57122LL;
	uint64_t x292 = 59LLU;
	uint64_t t42 = 6130112576071883023LLU;

	t42 = ((x289*x290)*(x291-x292));

	if (t42 != 18446666179818633816LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x293 = INT64_MIN;
	uint64_t x294 = 4587LLU;
	uint32_t x295 = 256672668U;
	int16_t x296 = 3373;

	t43 = ((x293*x294)*(x295-x296));

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = -1;
	static uint8_t x299 = 13U;
	uint16_t x300 = 7936U;
	static int32_t t44 = 10;

	t44 = ((x297*x298)*(x299-x300));

	if (t44 != -259620864) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x305 = INT64_MAX;
	volatile int16_t x306 = -1;
	int32_t x308 = INT32_MAX;
	int64_t t45 = -308LL;

	t45 = ((x305*x306)*(x307-x308));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x309 = 33613592956547LLU;
	static int32_t x310 = 106881255;
	int8_t x311 = -20;
	static int16_t x312 = INT16_MIN;
	uint64_t t46 = 433805688609LLU;

	t46 = ((x309*x310)*(x311-x312));

	if (t46 != 5886967313523153884LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x317 = -4;
	int64_t x319 = -1LL;
	static uint32_t x320 = UINT32_MAX;

	t47 = ((x317*x318)*(x319-x320));

	if (t47 != -88242576997482496LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x322 = INT8_MIN;
	uint64_t x323 = 71LLU;
	int8_t x324 = -1;
	volatile uint64_t t48 = 391991933169629257LLU;

	t48 = ((x321*x322)*(x323-x324));

	if (t48 != 18446744073709542400LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x329 = 2835LLU;
	volatile int8_t x330 = INT8_MIN;
	int16_t x331 = -13;
	int32_t x332 = -1;
	uint64_t t49 = 64LLU;

	t49 = ((x329*x330)*(x331-x332));

	if (t49 != 4354560LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x333 = -3755141LL;
	static uint64_t x334 = 19644402748784LLU;
	int16_t x335 = INT16_MIN;
	int16_t x336 = 1354;
	volatile uint64_t t50 = 345293894LLU;

	t50 = ((x333*x334)*(x335-x336));

	if (t50 != 18033868550445763552LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	int16_t x340 = 5;
	volatile int32_t t51 = 5;

	t51 = ((x337*x338)*(x339-x340));

	if (t51 != 482418560) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x342 = INT8_MIN;
	static uint32_t x343 = 7116506U;
	int32_t x344 = 1;

	t52 = ((x341*x342)*(x343-x344));

	if (t52 != 910912640LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x353 = INT16_MIN;
	static int16_t x354 = -261;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = INT16_MIN;
	volatile uint64_t t53 = 13595872279067131LLU;

	t53 = ((x353*x354)*(x355-x356));

	if (t53 != 280238063616LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x373 = UINT8_MAX;
	uint8_t x375 = 3U;

	t54 = ((x373*x374)*(x375-x376));

	if (t54 != 973335U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x378 = -1LL;
	uint64_t t55 = 20668LLU;

	t55 = ((x377*x378)*(x379-x380));

	if (t55 != 18446744048487483524LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x381 = 142632459U;
	volatile int32_t x382 = INT32_MIN;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = INT16_MAX;
	volatile uint32_t t56 = 328335U;

	t56 = ((x381*x382)*(x383-x384));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x389 = 8U;
	static int32_t x391 = INT32_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t57 = 24U;

	t57 = ((x389*x390)*(x391-x392));

	if (t57 != 4294705152U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x393 = -4;
	uint16_t x394 = 1U;
	int8_t x395 = -1;
	volatile int32_t t58 = 272679;

	t58 = ((x393*x394)*(x395-x396));

	if (t58 != -131068) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x398 = UINT32_MAX;
	uint32_t t59 = 256U;

	t59 = ((x397*x398)*(x399-x400));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x418 = UINT16_MAX;

	t60 = ((x417*x418)*(x419-x420));

	if (t60 != 2756051908923918033LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x422 = -1;
	volatile int64_t x423 = 150394801601934LL;
	int8_t x424 = INT8_MIN;
	volatile int64_t t61 = -358338482323286862LL;

	t61 = ((x421*x422)*(x423-x424));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x433 = -1;
	int8_t x434 = INT8_MAX;
	volatile uint8_t x436 = 35U;
	volatile int32_t t62 = -26;

	t62 = ((x433*x434)*(x435-x436));

	if (t62 != 4572) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x441 = -1;
	volatile int16_t x442 = -1;
	uint8_t x443 = UINT8_MAX;
	volatile int64_t x444 = -1LL;
	volatile int64_t t63 = 674883LL;

	t63 = ((x441*x442)*(x443-x444));

	if (t63 != 256LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x447 = -4768734LL;
	int8_t x448 = -61;
	static uint64_t t64 = 28987315296LLU;

	t64 = ((x445*x446)*(x447-x448));

	if (t64 != 18446597550390002191LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x461 = 21685953LLU;
	volatile int32_t x462 = INT32_MIN;
	int8_t x463 = -1;
	static int32_t x464 = INT32_MIN;
	volatile uint64_t t65 = 25692376624624LLU;

	t65 = ((x461*x462)*(x463-x464));

	if (t65 != 13881628284740960256LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x466 = -1;
	volatile int8_t x467 = INT8_MAX;
	static volatile int32_t x468 = -1;
	volatile int32_t t66 = 71805;

	t66 = ((x465*x466)*(x467-x468));

	if (t66 != 16384) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x473 = 88U;
	static int16_t x474 = INT16_MAX;
	uint16_t x475 = 1U;
	volatile uint16_t x476 = 9U;

	t67 = ((x473*x474)*(x475-x476));

	if (t67 != 4271899328U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x481 = UINT32_MAX;
	int16_t x482 = INT16_MIN;
	volatile uint64_t t68 = 231794679820341LLU;

	t68 = ((x481*x482)*(x483-x484));

	if (t68 != 1042788213554118656LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x485 = -1;
	int64_t x486 = -1LL;
	int8_t x487 = INT8_MAX;
	static int16_t x488 = INT16_MIN;
	volatile int64_t t69 = 13460001LL;

	t69 = ((x485*x486)*(x487-x488));

	if (t69 != 32895LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x490 = 62U;
	int16_t x491 = -14;
	static volatile int32_t t70 = -1;

	t70 = ((x489*x490)*(x491-x492));

	if (t70 != -817904) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x494 = UINT8_MAX;
	volatile uint32_t x496 = 1009881928U;
	uint32_t t71 = 111U;

	t71 = ((x493*x494)*(x495-x496));

	if (t71 != 2477522615U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x501 = 91U;
	uint16_t x502 = UINT16_MAX;
	volatile int8_t x503 = -2;
	int8_t x504 = -25;
	volatile int32_t t72 = 13626;

	t72 = ((x501*x502)*(x503-x504));

	if (t72 != 137164755) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x517 = 0;
	volatile uint8_t x518 = 64U;
	int32_t x519 = -1;
	int32_t x520 = INT32_MIN;
	volatile int32_t t73 = -3354792;

	t73 = ((x517*x518)*(x519-x520));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x529 = 68973LLU;
	volatile uint16_t x530 = 66U;
	int8_t x531 = -1;
	uint16_t x532 = UINT16_MAX;
	volatile uint64_t t74 = 346199603LLU;

	t74 = ((x529*x530)*(x531-x532));

	if (t74 != 18446743775375392768LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x533 = -15179315LL;
	int32_t x534 = INT32_MIN;
	int8_t x536 = INT8_MIN;
	int64_t t75 = 127118145448541LL;

	t75 = ((x533*x534)*(x535-x536));

	if (t75 != 4139861005293322240LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x537 = -15;
	static uint32_t x538 = UINT32_MAX;
	int64_t x540 = INT64_MAX;
	uint64_t t76 = 301LLU;

	t76 = ((x537*x538)*(x539-x540));

	if (t76 != 9223388337896625248LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x541 = -1;
	int16_t x542 = -1;
	static volatile int8_t x543 = INT8_MIN;
	int64_t x544 = INT64_MIN;
	static int64_t t77 = -13724580699256LL;

	t77 = ((x541*x542)*(x543-x544));

	if (t77 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x545 = 4110932052526LLU;
	static int16_t x546 = INT16_MIN;
	uint64_t x547 = 240005673195747LLU;
	uint32_t x548 = UINT32_MAX;

	t78 = ((x545*x546)*(x547-x548));

	if (t78 != 13715585621358280704LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x550 = -8184669;
	uint64_t x551 = 6698LLU;
	int64_t x552 = -1931818409LL;
	volatile uint64_t t79 = 24160409703827LLU;

	t79 = ((x549*x550)*(x551-x552));

	if (t79 != 17419006384375053721LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x553 = 45744515077LL;
	uint64_t x554 = 1LLU;
	volatile uint32_t x555 = UINT32_MAX;
	uint8_t x556 = UINT8_MAX;

	t80 = ((x553*x554)*(x555-x556));

	if (t80 != 12003743779402545920LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x557 = INT8_MAX;
	volatile int16_t x559 = INT16_MAX;
	int64_t x560 = 300156LL;
	volatile int64_t t81 = 247522518103329LL;

	t81 = ((x557*x558)*(x559-x560));

	if (t81 != 33958403LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x565 = -1;
	uint64_t x566 = 2323LLU;
	static int8_t x568 = -1;
	static volatile uint64_t t82 = 728082060100LLU;

	t82 = ((x565*x566)*(x567-x568));

	if (t82 != 18446744073709451727LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x581 = INT16_MAX;
	volatile int16_t x582 = 5;
	uint64_t x583 = UINT64_MAX;
	uint32_t x584 = 119870U;
	uint64_t t83 = 8217716794LLU;

	t83 = ((x581*x582)*(x583-x584));

	if (t83 != 18446744054070486331LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x590 = UINT8_MAX;
	static uint16_t x591 = UINT16_MAX;
	int64_t t84 = 2622LL;

	t84 = ((x589*x590)*(x591-x592));

	if (t84 != 181805409922733025LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x597 = 3635U;
	uint64_t x598 = 949041119357879903LLU;
	static volatile int32_t x599 = -1;
	int8_t x600 = -1;
	uint64_t t85 = 4615669LLU;

	t85 = ((x597*x598)*(x599-x600));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x601 = -1LL;
	int16_t x602 = -1;
	int64_t x603 = -1LL;
	static int8_t x604 = -52;

	t86 = ((x601*x602)*(x603-x604));

	if (t86 != 51LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x605 = 19U;
	volatile uint32_t x606 = UINT32_MAX;
	volatile uint32_t t87 = 212U;

	t87 = ((x605*x606)*(x607-x608));

	if (t87 != 625005U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x625 = 4490617263196763LLU;
	int16_t x627 = -11;

	t88 = ((x625*x626)*(x627-x628));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x637 = 13;
	int64_t x640 = 96860631076019LL;
	int64_t t89 = 1023853034540242LL;

	t89 = ((x637*x638)*(x639-x640));

	if (t89 != 1259188203955409LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x645 = -3;
	uint64_t x647 = 5302213726LLU;
	int8_t x648 = INT8_MIN;
	static uint64_t t90 = 0LLU;

	t90 = ((x645*x646)*(x647-x648));

	if (t90 != 9647264416603273250LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x650 = 2U;
	uint32_t x651 = 1674627U;
	static int8_t x652 = INT8_MAX;

	t91 = ((x649*x650)*(x651-x652));

	if (t91 != 2094674296U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x657 = 2061U;
	uint8_t x658 = 49U;
	static uint32_t x660 = UINT32_MAX;
	uint32_t t92 = 0U;

	t92 = ((x657*x658)*(x659-x660));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x665 = -1;
	uint32_t x666 = 19051001U;
	int32_t x667 = INT32_MIN;
	uint64_t x668 = 1467393292566857LLU;
	uint64_t t93 = 39934LLU;

	t93 = ((x665*x666)*(x667-x668));

	if (t93 != 15455910916934187265LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x669 = 1U;
	int8_t x670 = INT8_MIN;
	volatile uint64_t x671 = 33983778556LLU;
	volatile int8_t x672 = INT8_MIN;
	uint64_t t94 = 292966722LLU;

	t94 = ((x669*x670)*(x671-x672));

	if (t94 != 18446739723785880064LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x677 = INT32_MIN;
	uint32_t x678 = 3U;
	int16_t x679 = -1;
	uint64_t x680 = UINT64_MAX;
	volatile uint64_t t95 = 1061592038LLU;

	t95 = ((x677*x678)*(x679-x680));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x681 = -1;
	volatile int64_t x682 = -11947267485LL;
	int64_t x683 = 378LL;

	t96 = ((x681*x682)*(x683-x684));

	if (t96 != 3802325707246555467LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x685 = -164765733LL;
	uint64_t x686 = 938023593LLU;
	volatile int64_t x687 = -32505964660434604LL;
	uint64_t t97 = 75679LLU;

	t97 = ((x685*x686)*(x687-x688));

	if (t97 != 13292805811616154989LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x701 = UINT16_MAX;
	int8_t x702 = -1;
	uint32_t x703 = UINT32_MAX;
	volatile int16_t x704 = INT16_MAX;
	volatile uint32_t t98 = 10725U;

	t98 = ((x701*x702)*(x703-x704));

	if (t98 != 2147450880U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x705 = UINT32_MAX;
	int8_t x706 = -1;
	volatile uint16_t x707 = UINT16_MAX;
	volatile uint64_t t99 = 35025564450896047LLU;

	t99 = ((x705*x706)*(x707-x708));

	if (t99 != 65536LLU) { NG(); } else { ; }
	
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

