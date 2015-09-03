#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x42 = 0;
uint32_t x47 = UINT32_MAX;
uint32_t x57 = UINT32_MAX;
volatile int16_t x62 = -2846;
int32_t t12 = -6;
static volatile uint32_t x69 = 491220583U;
volatile int32_t x72 = INT32_MAX;
volatile int32_t t13 = INT32_MAX;
uint8_t x75 = 7U;
int16_t x86 = 0;
int16_t x88 = -329;
int32_t t16 = -161332297;
int8_t x96 = INT8_MIN;
int16_t x100 = INT16_MAX;
int8_t x107 = INT8_MAX;
int16_t x111 = -1;
uint64_t x114 = UINT64_MAX;
int32_t x124 = 4223686;
uint8_t x136 = 5U;
int8_t x138 = INT8_MAX;
uint64_t x139 = UINT64_MAX;
uint32_t x149 = 278U;
uint16_t x155 = UINT16_MAX;
volatile int32_t t31 = 131;
int64_t x176 = INT64_MIN;
volatile uint16_t x180 = UINT16_MAX;
int16_t x189 = INT16_MAX;
static volatile uint32_t x191 = 268166U;
int64_t x213 = -1LL;
volatile uint16_t x225 = UINT16_MAX;
static int32_t x227 = -1;
volatile uint64_t x234 = 3887798952LLU;
uint8_t x236 = 3U;
volatile int32_t t41 = -7636;
int16_t x243 = INT16_MIN;
static volatile int64_t t42 = INT64_MIN;
int32_t x249 = -91;
int32_t t44 = INT32_MIN;
int32_t x253 = -56;
volatile int16_t x254 = INT16_MAX;
static int64_t t45 = 3613089692769305835LL;
int8_t x258 = INT8_MIN;
int16_t x262 = INT16_MIN;
static int8_t x271 = -1;
int8_t x295 = INT8_MIN;
int64_t x312 = 64748239924LL;
volatile int64_t t56 = -97274071373928080LL;
int16_t x320 = INT16_MIN;
uint64_t x338 = 465785697114625LLU;
static int64_t x367 = INT64_MIN;
static volatile int64_t x369 = 1LL;
volatile int32_t t64 = -16486;
int32_t t65 = 6610;
uint64_t x381 = 7767LLU;
int16_t x389 = INT16_MIN;
int64_t x391 = -30673LL;
volatile int64_t t68 = INT64_MIN;
static int64_t t70 = INT64_MIN;
uint8_t x413 = UINT8_MAX;
static int32_t t71 = -72;
int32_t x417 = INT32_MIN;
int16_t x419 = -1;
uint16_t x420 = UINT16_MAX;
uint16_t x422 = 8682U;
int8_t x428 = INT8_MIN;
volatile uint8_t x434 = UINT8_MAX;
int32_t t75 = -40371068;
volatile uint8_t x437 = 1U;
uint64_t x438 = 7113928668660650655LLU;
int32_t x449 = -1;
int8_t x458 = -1;
static volatile int32_t t82 = 6;
int32_t t83 = 16534750;
uint8_t x485 = 4U;
uint16_t x491 = 1U;
uint32_t x502 = 7U;
int16_t x505 = 6;
static int32_t x512 = INT32_MIN;
int64_t x515 = INT64_MIN;
int16_t x517 = -1;
static int8_t x518 = -63;
int64_t x519 = -9913LL;
uint64_t x522 = 54LLU;
int32_t x529 = -1;
volatile uint8_t x539 = 51U;
static int64_t x546 = INT64_MIN;
static volatile int64_t x547 = INT64_MIN;
int16_t x548 = INT16_MAX;


void f0(void) {
	uint8_t x1 = 0U;
	static uint8_t x2 = 0U;
	uint32_t x3 = UINT32_MAX;
	volatile int32_t x4 = 27514183;
	static int32_t t0 = -989814;

	t0 = (((x1*x2)==x3)+x4);

	if (t0 != 27514183) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = 1039619U;
	static uint32_t t1 = 1768U;

	t1 = (((x5*x6)==x7)+x8);

	if (t1 != 1039619U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = 64041LLU;
	int32_t x14 = INT32_MAX;
	uint32_t x15 = 83U;
	volatile uint64_t x16 = UINT64_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = (((x13*x14)==x15)+x16);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	int8_t x18 = 0;
	static volatile int64_t x19 = INT64_MIN;
	volatile int8_t x20 = INT8_MIN;
	static volatile int32_t t3 = -808;

	t3 = (((x17*x18)==x19)+x20);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 75582155148LLU;
	volatile uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t4 = -22358;

	t4 = (((x25*x26)==x27)+x28);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 0U;
	static uint64_t x30 = 798169535703LLU;
	int32_t x31 = -568661;
	volatile uint64_t x32 = 441LLU;
	uint64_t t5 = 13207600372LLU;

	t5 = (((x29*x30)==x31)+x32);

	if (t5 != 441LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	static int32_t x34 = 29927;
	int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MAX;
	volatile int64_t t6 = INT64_MAX;

	t6 = (((x33*x34)==x35)+x36);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 13;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 0U;
	int8_t x40 = -17;
	static volatile int32_t t7 = 3;

	t7 = (((x37*x38)==x39)+x40);

	if (t7 != -17) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 7;
	static volatile int8_t x43 = -1;
	int64_t x44 = INT64_MIN;
	volatile int64_t t8 = INT64_MIN;

	t8 = (((x41*x42)==x43)+x44);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 1657;
	int16_t x46 = -6;
	uint64_t x48 = 122651298424743890LLU;
	uint64_t t9 = 127447166496094939LLU;

	t9 = (((x45*x46)==x47)+x48);

	if (t9 != 122651298424743890LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x58 = 500828471889894278LLU;
	int16_t x59 = INT16_MIN;
	int8_t x60 = -13;
	volatile int32_t t10 = 3935;

	t10 = (((x57*x58)==x59)+x60);

	if (t10 != -13) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = 13U;
	volatile int64_t x63 = INT64_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t11 = -2942;

	t11 = (((x61*x62)==x63)+x64);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 0U;
	volatile int64_t x66 = 14819584248251414LL;
	int16_t x67 = -5563;
	static uint8_t x68 = 5U;

	t12 = (((x65*x66)==x67)+x68);

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x70 = 6672;
	uint32_t x71 = 3U;

	t13 = (((x69*x70)==x71)+x72);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = -8;
	uint8_t x74 = UINT8_MAX;
	uint32_t x76 = 1107993330U;
	volatile uint32_t t14 = 67431U;

	t14 = (((x73*x74)==x75)+x76);

	if (t14 != 1107993330U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 1U;
	uint16_t x82 = 19U;
	static volatile int32_t x83 = -1;
	int32_t x84 = INT32_MIN;
	static int32_t t15 = INT32_MIN;

	t15 = (((x81*x82)==x83)+x84);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = UINT16_MAX;
	volatile uint64_t x87 = 74217868485244LLU;

	t16 = (((x85*x86)==x87)+x88);

	if (t16 != -329) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x93 = 10734U;
	int32_t x94 = INT32_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile int32_t t17 = -18161228;

	t17 = (((x93*x94)==x95)+x96);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x97 = INT16_MAX;
	volatile uint8_t x98 = UINT8_MAX;
	uint8_t x99 = 12U;
	volatile int32_t t18 = -109925;

	t18 = (((x97*x98)==x99)+x100);

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x101 = 3673290648LLU;
	volatile int16_t x102 = INT16_MAX;
	static uint8_t x103 = 3U;
	int16_t x104 = INT16_MAX;
	int32_t t19 = 505137982;

	t19 = (((x101*x102)==x103)+x104);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x105 = -22316826LL;
	volatile uint8_t x106 = 116U;
	uint16_t x108 = 135U;
	volatile int32_t t20 = 263;

	t20 = (((x105*x106)==x107)+x108);

	if (t20 != 135) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 373LLU;
	int8_t x110 = INT8_MAX;
	int16_t x112 = 9;
	int32_t t21 = -37976;

	t21 = (((x109*x110)==x111)+x112);

	if (t21 != 9) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = 1U;
	int8_t x115 = 1;
	int64_t x116 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

	t22 = (((x113*x114)==x115)+x116);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	int64_t x118 = -1LL;
	uint8_t x119 = 7U;
	static int32_t x120 = INT32_MAX;
	int32_t t23 = INT32_MAX;

	t23 = (((x117*x118)==x119)+x120);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = -1LL;
	volatile int32_t x122 = -8202845;
	int8_t x123 = -1;
	int32_t t24 = -1133;

	t24 = (((x121*x122)==x123)+x124);

	if (t24 != 4223686) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x129 = 3U;
	volatile int64_t x130 = -1LL;
	volatile int32_t x131 = INT32_MIN;
	static int64_t x132 = INT64_MIN;
	volatile int64_t t25 = INT64_MIN;

	t25 = (((x129*x130)==x131)+x132);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = 714;
	int64_t x134 = -289963198LL;
	static uint16_t x135 = 176U;
	int32_t t26 = 69858;

	t26 = (((x133*x134)==x135)+x136);

	if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x137 = 245733U;
	static volatile int64_t x140 = INT64_MIN;
	int64_t t27 = INT64_MIN;

	t27 = (((x137*x138)==x139)+x140);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x145 = 10U;
	int64_t x146 = -1LL;
	volatile int16_t x147 = INT16_MIN;
	volatile int8_t x148 = INT8_MIN;
	static volatile int32_t t28 = -14;

	t28 = (((x145*x146)==x147)+x148);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x150 = -1;
	static int32_t x151 = INT32_MAX;
	uint32_t x152 = UINT32_MAX;
	uint32_t t29 = UINT32_MAX;

	t29 = (((x149*x150)==x151)+x152);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x153 = INT32_MAX;
	static uint32_t x154 = UINT32_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t30 = INT32_MAX;

	t30 = (((x153*x154)==x155)+x156);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = 0U;
	int16_t x166 = 0;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MIN;

	t31 = (((x165*x166)==x167)+x168);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x173 = INT8_MAX;
	static volatile uint64_t x174 = 4LLU;
	volatile uint16_t x175 = 1U;
	int64_t t32 = INT64_MIN;

	t32 = (((x173*x174)==x175)+x176);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = 18;
	uint16_t x178 = 338U;
	static uint16_t x179 = 0U;
	volatile int32_t t33 = -177;

	t33 = (((x177*x178)==x179)+x180);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x190 = -3;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t34 = -63319916;

	t34 = (((x189*x190)==x191)+x192);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x197 = -946500083840LL;
	int16_t x198 = INT16_MIN;
	volatile int32_t x199 = -81;
	int8_t x200 = INT8_MAX;
	int32_t t35 = -6;

	t35 = (((x197*x198)==x199)+x200);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x209 = 22;
	int64_t x210 = -1LL;
	volatile int8_t x211 = INT8_MIN;
	static uint16_t x212 = UINT16_MAX;
	static volatile int32_t t36 = 566330;

	t36 = (((x209*x210)==x211)+x212);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x214 = -1;
	int32_t x215 = 1;
	int32_t x216 = INT32_MIN;
	int32_t t37 = 30908924;

	t37 = (((x213*x214)==x215)+x216);

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x226 = INT16_MIN;
	int8_t x228 = 1;
	volatile int32_t t38 = -1;

	t38 = (((x225*x226)==x227)+x228);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x229 = -1LL;
	static int16_t x230 = INT16_MIN;
	static volatile int8_t x231 = -1;
	static int32_t x232 = -1;
	static volatile int32_t t39 = 68967;

	t39 = (((x229*x230)==x231)+x232);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x233 = 1548U;
	volatile int64_t x235 = INT64_MIN;
	int32_t t40 = -632;

	t40 = (((x233*x234)==x235)+x236);

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x237 = -1;
	int8_t x238 = 7;
	uint8_t x239 = 9U;
	uint8_t x240 = 3U;

	t41 = (((x237*x238)==x239)+x240);

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x241 = -1;
	int16_t x242 = INT16_MAX;
	static int64_t x244 = INT64_MIN;

	t42 = (((x241*x242)==x243)+x244);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x245 = 9;
	uint8_t x246 = UINT8_MAX;
	volatile int32_t x247 = -1;
	int16_t x248 = INT16_MIN;
	int32_t t43 = -465;

	t43 = (((x245*x246)==x247)+x248);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x250 = -3;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;

	t44 = (((x249*x250)==x251)+x252);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x255 = -1LL;
	int64_t x256 = -3159661518LL;

	t45 = (((x253*x254)==x255)+x256);

	if (t45 != -3159661518LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x257 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	static uint16_t x260 = UINT16_MAX;
	volatile int32_t t46 = -414770462;

	t46 = (((x257*x258)==x259)+x260);

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x261 = 16U;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	int64_t t47 = INT64_MIN;

	t47 = (((x261*x262)==x263)+x264);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x269 = -38;
	uint64_t x270 = 658810350088LLU;
	int8_t x272 = 1;
	static int32_t t48 = -1237;

	t48 = (((x269*x270)==x271)+x272);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x273 = 1U;
	uint8_t x274 = 2U;
	static uint8_t x275 = 25U;
	static int8_t x276 = -1;
	static volatile int32_t t49 = 4;

	t49 = (((x273*x274)==x275)+x276);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x277 = -1;
	int16_t x278 = 11;
	int64_t x279 = -1LL;
	uint8_t x280 = 14U;
	int32_t t50 = -868948;

	t50 = (((x277*x278)==x279)+x280);

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 3LLU;
	volatile int8_t x283 = INT8_MIN;
	static volatile int64_t x284 = INT64_MAX;
	static int64_t t51 = INT64_MAX;

	t51 = (((x281*x282)==x283)+x284);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x289 = INT8_MIN;
	static int32_t x290 = 4;
	volatile int64_t x291 = -1LL;
	int8_t x292 = 45;
	volatile int32_t t52 = -1331;

	t52 = (((x289*x290)==x291)+x292);

	if (t52 != 45) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x293 = UINT32_MAX;
	int16_t x294 = -1;
	static int8_t x296 = -1;
	static volatile int32_t t53 = 65462878;

	t53 = (((x293*x294)==x295)+x296);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int32_t x306 = -3;
	uint64_t x307 = 6374LLU;
	uint32_t x308 = 265409532U;
	volatile uint32_t t54 = 612U;

	t54 = (((x305*x306)==x307)+x308);

	if (t54 != 265409532U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int32_t x310 = INT32_MAX;
	int16_t x311 = INT16_MIN;
	int64_t t55 = 50591018LL;

	t55 = (((x309*x310)==x311)+x312);

	if (t55 != 64748239924LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x313 = -79881976LL;
	static int64_t x314 = -1LL;
	uint32_t x315 = UINT32_MAX;
	static int64_t x316 = 32179968445LL;

	t56 = (((x313*x314)==x315)+x316);

	if (t56 != 32179968445LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x317 = 193765945LLU;
	static int32_t x318 = INT32_MIN;
	static volatile uint32_t x319 = 43564820U;
	volatile int32_t t57 = 391492372;

	t57 = (((x317*x318)==x319)+x320);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x321 = INT8_MIN;
	static uint64_t x322 = UINT64_MAX;
	uint32_t x323 = 1U;
	uint8_t x324 = 7U;
	int32_t t58 = -13316;

	t58 = (((x321*x322)==x323)+x324);

	if (t58 != 7) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x333 = 356U;
	int16_t x334 = -439;
	uint32_t x335 = 2586U;
	uint32_t x336 = UINT32_MAX;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (((x333*x334)==x335)+x336);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x337 = -2865743988679967LL;
	volatile uint16_t x339 = 5U;
	static int8_t x340 = INT8_MIN;
	int32_t t60 = -176417685;

	t60 = (((x337*x338)==x339)+x340);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x341 = INT8_MIN;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = -1LL;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t61 = -119296;

	t61 = (((x341*x342)==x343)+x344);

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x365 = INT8_MAX;
	static uint32_t x366 = 64U;
	volatile uint64_t x368 = 471356LLU;
	volatile uint64_t t62 = 21412LLU;

	t62 = (((x365*x366)==x367)+x368);

	if (t62 != 471356LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x370 = 38166LL;
	int8_t x371 = -1;
	static uint16_t x372 = 10U;
	int32_t t63 = -315;

	t63 = (((x369*x370)==x371)+x372);

	if (t63 != 10) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x373 = -3;
	volatile int32_t x374 = -14531;
	static int64_t x375 = 42858LL;
	static int8_t x376 = INT8_MIN;

	t64 = (((x373*x374)==x375)+x376);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x377 = 25;
	static int32_t x378 = -57;
	volatile int8_t x379 = -1;
	static volatile int32_t x380 = -1540;

	t65 = (((x377*x378)==x379)+x380);

	if (t65 != -1540) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x382 = -1;
	int32_t x383 = 0;
	int8_t x384 = -4;
	static volatile int32_t t66 = -1;

	t66 = (((x381*x382)==x383)+x384);

	if (t66 != -4) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x390 = 46LLU;
	int32_t x392 = INT32_MIN;
	volatile int32_t t67 = INT32_MIN;

	t67 = (((x389*x390)==x391)+x392);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x393 = 21427U;
	static int64_t x394 = -1LL;
	static uint64_t x395 = 41LLU;
	volatile int64_t x396 = INT64_MIN;

	t68 = (((x393*x394)==x395)+x396);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x397 = -15587287LL;
	uint32_t x398 = 2296U;
	static int32_t x399 = INT32_MAX;
	int64_t x400 = -1LL;
	int64_t t69 = 454572361544LL;

	t69 = (((x397*x398)==x399)+x400);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x401 = 1055U;
	int8_t x402 = INT8_MIN;
	uint16_t x403 = 1535U;
	int64_t x404 = INT64_MIN;

	t70 = (((x401*x402)==x403)+x404);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x414 = -1;
	volatile uint64_t x415 = 805614LLU;
	static int8_t x416 = 57;

	t71 = (((x413*x414)==x415)+x416);

	if (t71 != 57) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x418 = 1;
	int32_t t72 = 933;

	t72 = (((x417*x418)==x419)+x420);

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x421 = UINT16_MAX;
	static uint32_t x423 = UINT32_MAX;
	int32_t x424 = INT32_MAX;
	int32_t t73 = INT32_MAX;

	t73 = (((x421*x422)==x423)+x424);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x425 = INT16_MIN;
	int16_t x426 = 225;
	int64_t x427 = INT64_MIN;
	volatile int32_t t74 = 1362;

	t74 = (((x425*x426)==x427)+x428);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x433 = 60112571LLU;
	int32_t x435 = 64838;
	int32_t x436 = 1676357;

	t75 = (((x433*x434)==x435)+x436);

	if (t75 != 1676357) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x439 = 21U;
	static int8_t x440 = 0;
	int32_t t76 = -30;

	t76 = (((x437*x438)==x439)+x440);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x441 = 29303U;
	int16_t x442 = INT16_MIN;
	volatile uint16_t x443 = 8430U;
	static int64_t x444 = INT64_MIN;
	int64_t t77 = INT64_MIN;

	t77 = (((x441*x442)==x443)+x444);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x445 = UINT32_MAX;
	volatile int8_t x446 = 10;
	int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MAX;
	volatile int32_t t78 = 8;

	t78 = (((x445*x446)==x447)+x448);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x450 = -1;
	uint32_t x451 = 215083022U;
	int8_t x452 = -1;
	int32_t t79 = -453126;

	t79 = (((x449*x450)==x451)+x452);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x453 = 3LLU;
	static int32_t x454 = -13736;
	static int8_t x455 = 3;
	int64_t x456 = 3030LL;
	int64_t t80 = -6298405214806LL;

	t80 = (((x453*x454)==x455)+x456);

	if (t80 != 3030LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x457 = 4;
	static int32_t x459 = -1;
	int64_t x460 = INT64_MIN;
	volatile int64_t t81 = INT64_MIN;

	t81 = (((x457*x458)==x459)+x460);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x461 = -1LL;
	static uint64_t x462 = 438564487LLU;
	static int8_t x463 = INT8_MAX;
	int16_t x464 = INT16_MIN;

	t82 = (((x461*x462)==x463)+x464);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x473 = -2;
	uint64_t x474 = UINT64_MAX;
	volatile int32_t x475 = 983;
	int16_t x476 = -1;

	t83 = (((x473*x474)==x475)+x476);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x477 = 3;
	uint8_t x478 = 2U;
	static int16_t x479 = INT16_MAX;
	uint64_t x480 = 10180LLU;
	volatile uint64_t t84 = 238LLU;

	t84 = (((x477*x478)==x479)+x480);

	if (t84 != 10180LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x486 = 9U;
	int8_t x487 = 0;
	uint16_t x488 = 1019U;
	volatile int32_t t85 = 119;

	t85 = (((x485*x486)==x487)+x488);

	if (t85 != 1019) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x489 = -26;
	volatile uint8_t x490 = 3U;
	int16_t x492 = -1;
	static volatile int32_t t86 = 19030;

	t86 = (((x489*x490)==x491)+x492);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x493 = INT8_MIN;
	uint32_t x494 = UINT32_MAX;
	uint64_t x495 = UINT64_MAX;
	static int64_t x496 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

	t87 = (((x493*x494)==x495)+x496);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x497 = -1LL;
	int16_t x498 = INT16_MIN;
	int64_t x499 = INT64_MIN;
	int8_t x500 = INT8_MIN;
	static int32_t t88 = 3193533;

	t88 = (((x497*x498)==x499)+x500);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x501 = 6949185326948232952LLU;
	volatile uint32_t x503 = 8258189U;
	int16_t x504 = INT16_MIN;
	volatile int32_t t89 = -95061480;

	t89 = (((x501*x502)==x503)+x504);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x506 = INT16_MIN;
	uint16_t x507 = UINT16_MAX;
	static int32_t x508 = -1;
	int32_t t90 = -3394;

	t90 = (((x505*x506)==x507)+x508);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x509 = 953360256LLU;
	uint16_t x510 = 48U;
	static uint64_t x511 = UINT64_MAX;
	int32_t t91 = INT32_MIN;

	t91 = (((x509*x510)==x511)+x512);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x513 = 2;
	int8_t x514 = -1;
	volatile int8_t x516 = -1;
	static volatile int32_t t92 = -2949;

	t92 = (((x513*x514)==x515)+x516);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x520 = 13U;
	volatile int32_t t93 = 27420;

	t93 = (((x517*x518)==x519)+x520);

	if (t93 != 13) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x521 = 40LLU;
	int64_t x523 = INT64_MIN;
	int16_t x524 = INT16_MIN;
	static volatile int32_t t94 = 15973010;

	t94 = (((x521*x522)==x523)+x524);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x525 = -1;
	int8_t x526 = INT8_MIN;
	volatile int64_t x527 = INT64_MIN;
	volatile uint8_t x528 = UINT8_MAX;
	int32_t t95 = 28593;

	t95 = (((x525*x526)==x527)+x528);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x530 = INT64_MAX;
	int32_t x531 = -120;
	volatile int16_t x532 = -1;
	volatile int32_t t96 = -7808388;

	t96 = (((x529*x530)==x531)+x532);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x537 = -1;
	volatile int16_t x538 = -2;
	int64_t x540 = 354454087096LL;
	volatile int64_t t97 = 1LL;

	t97 = (((x537*x538)==x539)+x540);

	if (t97 != 354454087096LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x541 = UINT16_MAX;
	int64_t x542 = -1LL;
	uint16_t x543 = 193U;
	uint8_t x544 = 4U;
	volatile int32_t t98 = 38979320;

	t98 = (((x541*x542)==x543)+x544);

	if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x545 = 0;
	static volatile int32_t t99 = -4932;

	t99 = (((x545*x546)==x547)+x548);

	if (t99 != 32767) { NG(); } else { ; }
	
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

