#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = UINT8_MAX;
static volatile uint16_t x23 = UINT16_MAX;
int64_t x24 = INT64_MAX;
int64_t t5 = 467LL;
int64_t x34 = 3125LL;
volatile int16_t x50 = INT16_MIN;
int16_t x62 = INT16_MAX;
uint16_t x71 = UINT16_MAX;
volatile uint8_t x81 = 1U;
volatile uint32_t t12 = 113339U;
static uint64_t x90 = UINT64_MAX;
uint64_t x96 = 173479309905LLU;
int8_t x100 = INT8_MIN;
static uint64_t x108 = UINT64_MAX;
volatile uint64_t t16 = 6618503538973413606LLU;
static int8_t x127 = INT8_MIN;
uint64_t x150 = 194079868LLU;
int32_t x159 = -358498399;
int64_t x160 = 4313280982314LL;
static int64_t t23 = 446LL;
volatile uint64_t x171 = 30765165630LLU;
volatile uint64_t t26 = 398236990LLU;
volatile int64_t x178 = INT64_MAX;
int16_t x185 = INT16_MAX;
static int32_t x186 = INT32_MIN;
static volatile uint64_t x197 = 727LLU;
int32_t x200 = INT32_MIN;
volatile uint64_t t31 = 30387285997LLU;
int16_t x202 = INT16_MIN;
volatile int32_t x204 = INT32_MAX;
volatile uint64_t t35 = 2912021339857LLU;
int32_t x231 = -1;
uint8_t x233 = 3U;
int8_t x235 = INT8_MIN;
int64_t t39 = -649405760688427167LL;
uint32_t x249 = 1071212U;
volatile uint64_t t40 = 3LLU;
uint64_t t41 = 1285241890723386080LLU;
static uint64_t x266 = 30711443790LLU;
int64_t x271 = 34526219557986780LL;
int64_t x288 = INT64_MIN;
int16_t x293 = -1;
int64_t x302 = INT64_MIN;
volatile int64_t t49 = 11251891499333LL;
uint8_t x314 = 19U;
int8_t x316 = INT8_MIN;
volatile uint16_t x320 = 903U;
volatile int16_t x322 = INT16_MAX;
int16_t x334 = INT16_MIN;
int16_t x346 = -1;
int8_t x351 = INT8_MIN;
volatile int64_t t57 = -1115363992LL;
uint16_t x356 = 3U;
volatile int64_t t58 = 6063LL;
int32_t x363 = -1;
int8_t x364 = 2;
static uint64_t x373 = 127LLU;
static volatile uint16_t x376 = 93U;
int8_t x379 = INT8_MAX;
int64_t x382 = -205591065LL;
volatile int64_t t63 = -529924220542LL;
uint32_t x396 = UINT32_MAX;
uint32_t t65 = 244U;
int16_t x406 = -6465;
volatile uint16_t x407 = 2U;
int16_t x413 = INT16_MAX;
int16_t x414 = -1;
volatile int32_t t67 = -23;
volatile uint64_t x422 = 151055588LLU;
static uint16_t x429 = UINT16_MAX;
volatile int32_t x433 = 131;
int8_t x447 = INT8_MIN;
static int8_t x471 = -2;
static int32_t t73 = 240874247;
static uint8_t x479 = UINT8_MAX;
int64_t t74 = -226764040LL;
uint32_t t75 = 21579U;
volatile uint32_t x498 = 276352U;
uint32_t t76 = 1595507U;
int64_t x505 = 735267925LL;
int16_t x516 = INT16_MIN;
uint16_t x536 = 6U;
volatile uint16_t x548 = UINT16_MAX;
volatile int8_t x557 = INT8_MIN;
int64_t t87 = -77766756LL;
int32_t x567 = INT32_MIN;
int32_t x587 = INT32_MAX;
volatile int64_t x588 = -1719663516648298158LL;
volatile int8_t x594 = INT8_MIN;
int64_t t93 = 102339096059LL;
uint16_t x597 = 1297U;
uint32_t x600 = UINT32_MAX;
int64_t x614 = INT64_MIN;
int8_t x617 = -1;
static volatile int32_t x618 = -1;
volatile uint8_t x622 = UINT8_MAX;


void f0(void) {
	int8_t x5 = INT8_MIN;
	static volatile int32_t x6 = INT32_MIN;
	static int64_t x7 = 4569646LL;
	volatile int64_t t0 = -610539286LL;

	t0 = ((x5%x6)/(x7%x8));

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 3512LLU;
	volatile int8_t x10 = 4;
	int16_t x11 = -1;
	volatile int32_t x12 = INT32_MIN;
	volatile uint64_t t1 = 44572290372LLU;

	t1 = ((x9%x10)/(x11%x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	volatile uint16_t x18 = UINT16_MAX;
	static uint32_t x19 = 15961U;
	static int64_t x20 = INT64_MAX;
	int64_t t2 = -904267558391942LL;

	t2 = ((x17%x18)/(x19%x20));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	uint16_t x22 = 212U;
	int64_t t3 = 1270113574LL;

	t3 = ((x21%x22)/(x23%x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	volatile int16_t x26 = INT16_MIN;
	volatile uint32_t x27 = 184876523U;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t4 = 257210U;

	t4 = ((x25%x26)/(x27%x28));

	if (t4 != 23U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 1;
	static uint16_t x30 = 9164U;
	int32_t x31 = -1;
	volatile int64_t x32 = INT64_MIN;

	t5 = ((x29%x30)/(x31%x32));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	static int8_t x35 = 2;
	static int16_t x36 = INT16_MIN;
	int64_t t6 = -8LL;

	t6 = ((x33%x34)/(x35%x36));

	if (t6 != -404LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = UINT64_MAX;
	volatile uint64_t x38 = 109LLU;
	static uint32_t x39 = 26502U;
	int64_t x40 = 210301LL;
	static volatile uint64_t t7 = 141457LLU;

	t7 = ((x37%x38)/(x39%x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x49 = 21280202LLU;
	static int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MIN;
	uint64_t t8 = 1LLU;

	t8 = ((x49%x50)/(x51%x52));

	if (t8 != 649LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 13U;
	int32_t x54 = INT32_MAX;
	volatile uint16_t x55 = UINT16_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t9 = -3104;

	t9 = ((x53%x54)/(x55%x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 103U;
	uint16_t x63 = UINT16_MAX;
	uint32_t x64 = 179U;
	uint32_t t10 = 101321928U;

	t10 = ((x61%x62)/(x63%x64));

	if (t10 != 4U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int16_t x70 = -1;
	uint32_t x72 = 2881U;
	uint32_t t11 = 1U;

	t11 = ((x69%x70)/(x71%x72));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x82 = UINT8_MAX;
	volatile int32_t x83 = INT32_MAX;
	volatile uint32_t x84 = 6745032U;

	t12 = ((x81%x82)/(x83%x84));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x89 = 0U;
	int16_t x91 = -13960;
	int8_t x92 = INT8_MAX;
	static volatile uint64_t t13 = 17086529525054LLU;

	t13 = ((x89%x90)/(x91%x92));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x93 = UINT64_MAX;
	static int16_t x94 = INT16_MIN;
	int8_t x95 = -1;
	volatile uint64_t t14 = 934294680LLU;

	t14 = ((x93%x94)/(x95%x96));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = -1;
	int64_t x98 = -51LL;
	uint8_t x99 = UINT8_MAX;
	int64_t t15 = -1924746LL;

	t15 = ((x97%x98)/(x99%x100));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x105 = INT32_MIN;
	volatile int32_t x106 = INT32_MIN;
	volatile uint64_t x107 = 29483644532501LLU;

	t16 = ((x105%x106)/(x107%x108));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x109 = -1;
	uint8_t x110 = 6U;
	uint64_t x111 = UINT64_MAX;
	static uint16_t x112 = 1733U;
	volatile uint64_t t17 = 8078156LLU;

	t17 = ((x109%x110)/(x111%x112));

	if (t17 != 14912485104049758LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x125 = INT32_MIN;
	static uint32_t x126 = UINT32_MAX;
	uint16_t x128 = 125U;
	static volatile uint32_t t18 = 0U;

	t18 = ((x125%x126)/(x127%x128));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x133 = 26U;
	volatile uint16_t x134 = 1770U;
	uint64_t x135 = 23391415LLU;
	volatile uint16_t x136 = UINT16_MAX;
	volatile uint64_t t19 = 297529543308665LLU;

	t19 = ((x133%x134)/(x135%x136));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x137 = 1242444573U;
	int32_t x138 = INT32_MAX;
	int64_t x139 = INT64_MIN;
	volatile int16_t x140 = INT16_MAX;
	static int64_t t20 = -1LL;

	t20 = ((x137%x138)/(x139%x140));

	if (t20 != -155305571LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x145 = -3;
	static int64_t x146 = 84599LL;
	static int8_t x147 = 13;
	int32_t x148 = 724655;
	static int64_t t21 = -8189797110271LL;

	t21 = ((x145%x146)/(x147%x148));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x149 = -1LL;
	int64_t x151 = INT64_MIN;
	uint16_t x152 = UINT16_MAX;
	uint64_t t22 = 590LLU;

	t22 = ((x149%x150)/(x151%x152));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x157 = 64642299LL;
	int16_t x158 = INT16_MAX;

	t23 = ((x157%x158)/(x159%x160));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x161 = -97;
	int64_t x162 = -230673958719248LL;
	int16_t x163 = -1;
	int32_t x164 = INT32_MIN;
	int64_t t24 = -1559235091098LL;

	t24 = ((x161%x162)/(x163%x164));

	if (t24 != 97LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x165 = 41552372905641LL;
	int64_t x166 = -1LL;
	int32_t x167 = INT32_MIN;
	static int64_t x168 = INT64_MIN;
	volatile int64_t t25 = 2033045370LL;

	t25 = ((x165%x166)/(x167%x168));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x169 = -1;
	int8_t x170 = -1;
	int8_t x172 = -1;

	t26 = ((x169%x170)/(x171%x172));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x173 = -1;
	int32_t x174 = -1782;
	static int32_t x175 = 58954785;
	uint32_t x176 = 357163U;
	uint32_t t27 = 61523U;

	t27 = ((x173%x174)/(x175%x176));

	if (t27 != 187635U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x177 = 1333;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = 200U;
	volatile int64_t t28 = -12698810698LL;

	t28 = ((x177%x178)/(x179%x180));

	if (t28 != -166LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x187 = 29;
	uint8_t x188 = 100U;
	int32_t t29 = 14099;

	t29 = ((x185%x186)/(x187%x188));

	if (t29 != 1129) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x189 = 20U;
	volatile int32_t x190 = 593488;
	uint8_t x191 = UINT8_MAX;
	uint64_t x192 = 350339154858435731LLU;
	volatile uint64_t t30 = 27844073815894LLU;

	t30 = ((x189%x190)/(x191%x192));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x198 = 57LLU;
	uint16_t x199 = 20225U;

	t31 = ((x197%x198)/(x199%x200));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x201 = -1;
	int64_t x203 = INT64_MIN;
	int64_t t32 = 626262182LL;

	t32 = ((x201%x202)/(x203%x204));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x213 = INT8_MIN;
	static uint64_t x214 = 6173053176843638072LLU;
	int8_t x215 = -1;
	uint32_t x216 = 3785U;
	volatile uint64_t t33 = 823975617LLU;

	t33 = ((x213%x214)/(x215%x216));

	if (t33 != 2110947307966185LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x218 = -1;
	volatile int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t34 = 3LL;

	t34 = ((x217%x218)/(x219%x220));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x221 = -2;
	uint64_t x222 = 576237661310679805LLU;
	int32_t x223 = INT32_MAX;
	uint8_t x224 = UINT8_MAX;

	t35 = ((x221%x222)/(x223%x224));

	if (t35 != 56211903683447LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x225 = 450119697119767LLU;
	volatile uint64_t x226 = 35LLU;
	uint64_t x227 = 1220854570268354260LLU;
	int16_t x228 = INT16_MAX;
	static uint64_t t36 = 1246203LLU;

	t36 = ((x225%x226)/(x227%x228));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x230 = 7U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t37 = 199;

	t37 = ((x229%x230)/(x231%x232));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x234 = -832;
	uint64_t x236 = 47410701529LLU;
	volatile uint64_t t38 = 4284837564411420034LLU;

	t38 = ((x233%x234)/(x235%x236));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x237 = INT8_MAX;
	volatile int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MAX;
	volatile int64_t x240 = INT64_MIN;

	t39 = ((x237%x238)/(x239%x240));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x250 = 21257846U;
	static uint8_t x251 = 75U;
	uint64_t x252 = UINT64_MAX;

	t40 = ((x249%x250)/(x251%x252));

	if (t40 != 14282LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x253 = 24U;
	static int64_t x254 = -1LL;
	uint64_t x255 = 1008LLU;
	int8_t x256 = INT8_MAX;

	t41 = ((x253%x254)/(x255%x256));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x261 = -11;
	volatile uint64_t x262 = 7LLU;
	static int8_t x263 = -55;
	uint64_t x264 = UINT64_MAX;
	uint64_t t42 = 1919LLU;

	t42 = ((x261%x262)/(x263%x264));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x265 = INT8_MAX;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = UINT64_MAX;
	uint64_t t43 = 124691010438966055LLU;

	t43 = ((x265%x266)/(x267%x268));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	volatile int64_t t44 = 1617654532515LL;

	t44 = ((x269%x270)/(x271%x272));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x281 = 2066604U;
	int32_t x282 = -1262949;
	uint16_t x283 = 14U;
	uint32_t x284 = UINT32_MAX;
	static volatile uint32_t t45 = 4618U;

	t45 = ((x281%x282)/(x283%x284));

	if (t45 != 147614U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x285 = -114;
	volatile int16_t x286 = -121;
	int32_t x287 = INT32_MIN;
	int64_t t46 = -116202492398873LL;

	t46 = ((x285%x286)/(x287%x288));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x294 = -151064LL;
	volatile int32_t x295 = -1;
	volatile uint8_t x296 = 103U;
	volatile int64_t t47 = 140542562LL;

	t47 = ((x293%x294)/(x295%x296));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x297 = 3U;
	int8_t x298 = -1;
	volatile int8_t x299 = INT8_MIN;
	volatile int32_t x300 = INT32_MIN;
	int32_t t48 = 102480871;

	t48 = ((x297%x298)/(x299%x300));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x301 = INT16_MIN;
	static int64_t x303 = -13834538LL;
	volatile int32_t x304 = INT32_MIN;

	t49 = ((x301%x302)/(x303%x304));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x305 = 1065450620728436LLU;
	int16_t x306 = -875;
	int64_t x307 = -1LL;
	static uint32_t x308 = 7693504U;
	volatile uint64_t t50 = 1142985733465013LLU;

	t50 = ((x305%x306)/(x307%x308));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x313 = INT8_MIN;
	static int32_t x315 = 45920;
	int32_t t51 = 6;

	t51 = ((x313%x314)/(x315%x316));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MIN;
	int16_t x319 = -1;
	volatile int64_t t52 = 3995629078LL;

	t52 = ((x317%x318)/(x319%x320));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x321 = INT16_MAX;
	static int16_t x323 = -1;
	int16_t x324 = INT16_MIN;
	volatile int32_t t53 = -3440;

	t53 = ((x321%x322)/(x323%x324));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x333 = INT8_MIN;
	volatile uint64_t x335 = 289LLU;
	int32_t x336 = INT32_MAX;
	volatile uint64_t t54 = 58293460941325752LLU;

	t54 = ((x333%x334)/(x335%x336));

	if (t54 != 63829564268891181LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x341 = 14U;
	uint16_t x342 = 62U;
	uint64_t x343 = 7LLU;
	uint32_t x344 = 28915093U;
	volatile uint64_t t55 = 3415691756LLU;

	t55 = ((x341%x342)/(x343%x344));

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x345 = INT16_MIN;
	static uint64_t x347 = UINT64_MAX;
	static int64_t x348 = -15069908449LL;
	volatile uint64_t t56 = 924483609885LLU;

	t56 = ((x345%x346)/(x347%x348));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MAX;
	int32_t x352 = INT32_MAX;

	t57 = ((x349%x350)/(x351%x352));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x353 = 1484830140912040815LL;
	uint8_t x354 = UINT8_MAX;
	static volatile int32_t x355 = -6611359;

	t58 = ((x353%x354)/(x355%x356));

	if (t58 != -180LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x357 = INT64_MAX;
	uint64_t x358 = 431282588298LLU;
	uint8_t x359 = UINT8_MAX;
	uint32_t x360 = UINT32_MAX;
	static uint64_t t59 = 15826435LLU;

	t59 = ((x357%x358)/(x359%x360));

	if (t59 != 490584038LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x361 = INT8_MIN;
	volatile uint8_t x362 = UINT8_MAX;
	int32_t t60 = 24325404;

	t60 = ((x361%x362)/(x363%x364));

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	static uint64_t t61 = 22643948296206LLU;

	t61 = ((x373%x374)/(x375%x376));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x378 = 1LLU;
	int32_t x380 = 1413900;
	uint64_t t62 = 1876LLU;

	t62 = ((x377%x378)/(x379%x380));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x381 = INT32_MAX;
	uint8_t x383 = 35U;
	volatile int16_t x384 = INT16_MIN;

	t63 = ((x381%x382)/(x383%x384));

	if (t63 != 2616371LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x389 = 10586U;
	int64_t x390 = INT64_MIN;
	uint8_t x391 = 2U;
	int8_t x392 = 25;
	volatile int64_t t64 = 4037597995256673LL;

	t64 = ((x389%x390)/(x391%x392));

	if (t64 != 5293LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MAX;

	t65 = ((x393%x394)/(x395%x396));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x405 = -119;
	int16_t x408 = INT16_MIN;
	static int32_t t66 = 777462;

	t66 = ((x405%x406)/(x407%x408));

	if (t66 != -59) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x415 = -1;
	int8_t x416 = INT8_MIN;

	t67 = ((x413%x414)/(x415%x416));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x421 = 0LL;
	int16_t x423 = INT16_MIN;
	static volatile uint32_t x424 = 24230530U;
	uint64_t t68 = 3551051267957893LLU;

	t68 = ((x421%x422)/(x423%x424));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x430 = UINT8_MAX;
	uint8_t x431 = 81U;
	static uint8_t x432 = 59U;
	int32_t t69 = 14201;

	t69 = ((x429%x430)/(x431%x432));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x434 = INT32_MIN;
	static int32_t x435 = 3235;
	volatile uint32_t x436 = UINT32_MAX;
	uint32_t t70 = 45437U;

	t70 = ((x433%x434)/(x435%x436));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x445 = INT8_MIN;
	static int8_t x446 = INT8_MAX;
	int32_t x448 = -45;
	int32_t t71 = 2;

	t71 = ((x445%x446)/(x447%x448));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x449 = -1;
	uint32_t x450 = UINT32_MAX;
	volatile int32_t x451 = 22655;
	volatile int64_t x452 = 58638816509LL;
	int64_t t72 = -21585267907254LL;

	t72 = ((x449%x450)/(x451%x452));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x469 = 35U;
	int32_t x470 = -1;
	int16_t x472 = 4931;

	t73 = ((x469%x470)/(x471%x472));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x477 = -1LL;
	int16_t x478 = INT16_MIN;
	volatile int8_t x480 = INT8_MIN;

	t74 = ((x477%x478)/(x479%x480));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x493 = -1;
	volatile uint32_t x494 = UINT32_MAX;
	volatile int16_t x495 = 1581;
	volatile uint16_t x496 = 1772U;

	t75 = ((x493%x494)/(x495%x496));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x497 = INT32_MIN;
	uint8_t x499 = UINT8_MAX;
	volatile int32_t x500 = INT32_MIN;

	t76 = ((x497%x498)/(x499%x500));

	if (t76 != 896U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x506 = 3U;
	uint64_t x507 = 2095LLU;
	int64_t x508 = INT64_MIN;
	uint64_t t77 = 14283003LLU;

	t77 = ((x505%x506)/(x507%x508));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x513 = INT8_MIN;
	volatile int64_t x514 = INT64_MIN;
	int16_t x515 = -2263;
	int64_t t78 = 416823015767646LL;

	t78 = ((x513%x514)/(x515%x516));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x517 = INT32_MIN;
	int8_t x518 = INT8_MIN;
	volatile int32_t x519 = -1;
	int64_t x520 = INT64_MAX;
	int64_t t79 = -134845574502908LL;

	t79 = ((x517%x518)/(x519%x520));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x521 = 9;
	static int16_t x522 = INT16_MAX;
	static volatile uint8_t x523 = UINT8_MAX;
	int64_t x524 = 146701001635960LL;
	int64_t t80 = 1879622325LL;

	t80 = ((x521%x522)/(x523%x524));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x529 = INT16_MAX;
	static uint32_t x530 = UINT32_MAX;
	volatile int8_t x531 = INT8_MAX;
	uint8_t x532 = UINT8_MAX;
	static volatile uint32_t t81 = 8105U;

	t81 = ((x529%x530)/(x531%x532));

	if (t81 != 258U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x533 = -1398;
	uint32_t x534 = UINT32_MAX;
	int32_t x535 = -1;
	static volatile uint32_t t82 = 2U;

	t82 = ((x533%x534)/(x535%x536));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x537 = 105U;
	uint8_t x538 = UINT8_MAX;
	uint32_t x539 = 565U;
	int64_t x540 = -3971401507148806LL;
	volatile int64_t t83 = -1009307LL;

	t83 = ((x537%x538)/(x539%x540));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x545 = -276129659339LL;
	int32_t x546 = -1267294;
	uint16_t x547 = 1U;
	volatile int64_t t84 = -878254LL;

	t84 = ((x545%x546)/(x547%x548));

	if (t84 != -236973LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x553 = 180;
	int64_t x554 = -229424981156660LL;
	uint64_t x555 = 1057958443LLU;
	static uint8_t x556 = 2U;
	uint64_t t85 = 47340690387LLU;

	t85 = ((x553%x554)/(x555%x556));

	if (t85 != 180LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x558 = INT8_MIN;
	static uint32_t x559 = UINT32_MAX;
	static int64_t x560 = INT64_MIN;
	static volatile int64_t t86 = 5173875937LL;

	t86 = ((x557%x558)/(x559%x560));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x561 = 29554LL;
	int32_t x562 = -1;
	static uint8_t x563 = UINT8_MAX;
	static uint32_t x564 = 424113728U;

	t87 = ((x561%x562)/(x563%x564));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x565 = 31LLU;
	volatile uint64_t x566 = 370261987743442LLU;
	int8_t x568 = -5;
	static uint64_t t88 = 59LLU;

	t88 = ((x565%x566)/(x567%x568));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x569 = 1;
	int8_t x570 = INT8_MAX;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = 70U;
	int32_t t89 = -3361020;

	t89 = ((x569%x570)/(x571%x572));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x573 = INT64_MIN;
	static int32_t x574 = INT32_MIN;
	int16_t x575 = INT16_MAX;
	volatile int64_t x576 = INT64_MAX;
	static int64_t t90 = 57049260LL;

	t90 = ((x573%x574)/(x575%x576));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x577 = UINT32_MAX;
	int16_t x578 = -1;
	uint64_t x579 = 407310493LLU;
	static int16_t x580 = -1;
	volatile uint64_t t91 = 1038217945LLU;

	t91 = ((x577%x578)/(x579%x580));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x585 = -5;
	uint64_t x586 = 201186588006143187LLU;
	volatile uint64_t t92 = 996981354192084547LLU;

	t92 = ((x585%x586)/(x587%x588));

	if (t92 != 64617286LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x593 = -1;
	int32_t x595 = INT32_MAX;
	static volatile int64_t x596 = INT64_MIN;

	t93 = ((x593%x594)/(x595%x596));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x598 = INT16_MIN;
	volatile uint32_t x599 = 111237014U;
	uint32_t t94 = 148561U;

	t94 = ((x597%x598)/(x599%x600));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x609 = UINT8_MAX;
	volatile int32_t x610 = INT32_MAX;
	uint32_t x611 = UINT32_MAX;
	static int64_t x612 = INT64_MIN;
	volatile int64_t t95 = 2224578846981489655LL;

	t95 = ((x609%x610)/(x611%x612));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x613 = 44U;
	static int64_t x615 = INT64_MIN;
	int32_t x616 = -33;
	int64_t t96 = -2390622680704LL;

	t96 = ((x613%x614)/(x615%x616));

	if (t96 != -5LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x619 = 8U;
	static uint32_t x620 = UINT32_MAX;
	volatile uint32_t t97 = 410356U;

	t97 = ((x617%x618)/(x619%x620));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x621 = 19U;
	uint32_t x623 = UINT32_MAX;
	int8_t x624 = INT8_MIN;
	static volatile uint32_t t98 = 1759004U;

	t98 = ((x621%x622)/(x623%x624));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x625 = INT32_MAX;
	int32_t x626 = -1;
	uint8_t x627 = 2U;
	static int64_t x628 = INT64_MAX;
	volatile int64_t t99 = 450161330086LL;

	t99 = ((x625%x626)/(x627%x628));

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

