#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x4 = INT8_MIN;
static uint64_t x5 = UINT64_MAX;
uint64_t t1 = 8124839729LLU;
int64_t x9 = 14LL;
uint64_t x20 = UINT64_MAX;
volatile uint64_t t4 = 2965421026LLU;
int16_t x28 = INT16_MAX;
static volatile int32_t t5 = -2292415;
uint32_t x57 = 17931U;
volatile uint32_t t14 = 16U;
volatile int16_t x71 = INT16_MIN;
int16_t x76 = INT16_MIN;
int16_t x77 = INT16_MAX;
int16_t x78 = INT16_MAX;
volatile int64_t x80 = INT64_MAX;
volatile int32_t x83 = -1;
int64_t t19 = 553367LL;
int8_t x91 = INT8_MAX;
uint64_t t20 = 6302983569658095LLU;
int16_t x97 = -68;
volatile int32_t x103 = 12;
int16_t x108 = INT16_MIN;
volatile uint64_t x112 = UINT64_MAX;
int64_t t26 = 15345578301690LL;
static volatile int32_t x128 = INT32_MIN;
uint8_t x132 = 23U;
uint32_t x144 = 43535921U;
static int8_t x157 = INT8_MIN;
int16_t x158 = INT16_MIN;
volatile int32_t t36 = 125;
volatile int16_t x169 = 1465;
int16_t x171 = INT16_MIN;
int16_t x177 = INT16_MIN;
int8_t x185 = -5;
static int32_t x187 = INT32_MAX;
uint8_t x194 = 10U;
int32_t x196 = -5523619;
int16_t x210 = 1305;
int64_t x211 = 16LL;
int32_t x213 = 1;
int32_t t49 = 3794341;
int64_t t50 = -42449262LL;
int32_t x229 = INT32_MIN;
uint64_t x236 = 529069LLU;
volatile uint64_t t53 = 1LLU;
volatile uint32_t x242 = 15U;
volatile int32_t x243 = INT32_MAX;
static int8_t x251 = INT8_MIN;
uint64_t x263 = 6302045448942LLU;
volatile uint64_t t60 = 3LLU;
int8_t x267 = 20;
uint16_t x272 = 14U;
int16_t x278 = 0;
static uint64_t x280 = 83886979421488264LLU;
int8_t x285 = -1;
int16_t x290 = INT16_MAX;
int16_t x294 = INT16_MIN;
int16_t x308 = 357;
volatile int64_t t71 = -434882LL;
volatile uint8_t x311 = 0U;
static int64_t x312 = -1LL;
int8_t x313 = INT8_MIN;
volatile uint8_t x315 = 12U;
int64_t x328 = -1LL;
int8_t x329 = INT8_MAX;
int16_t x332 = INT16_MIN;
static volatile uint32_t t76 = 8091U;
int32_t x338 = -1;
int16_t x339 = -1;
int16_t x341 = INT16_MIN;
volatile int32_t x344 = INT32_MIN;
static uint32_t x359 = UINT32_MAX;
int8_t x368 = INT8_MAX;
int64_t x371 = 202567LL;
uint8_t x375 = UINT8_MAX;
volatile int8_t x380 = INT8_MIN;
volatile int64_t t84 = -1LL;
int16_t x383 = INT16_MAX;
static uint8_t x390 = 13U;
int32_t x391 = 208200458;
volatile int8_t x396 = 0;
volatile uint32_t x399 = UINT32_MAX;
uint8_t x400 = UINT8_MAX;
volatile uint32_t x401 = 155745016U;
volatile int64_t t89 = -1275LL;
uint64_t x408 = 1483696LLU;
static uint64_t t90 = 11744423057756LLU;
uint16_t x415 = UINT16_MAX;
uint16_t x420 = 109U;
volatile int32_t t94 = 33;
volatile int32_t x430 = -476148660;
int8_t x432 = -1;
volatile uint64_t t96 = 122LLU;
static volatile int16_t x440 = -1;
volatile int64_t t97 = 116321986945535LL;
int32_t x445 = INT32_MIN;
volatile int32_t t99 = 694652;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x2 = 6U;
	int16_t x3 = -1;
	volatile int32_t t0 = -4690;

	t0 = (x1/((x2|x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -13737776517565LL;
	int16_t x7 = 193;
	int16_t x8 = 1;

	t1 = (x5/((x6|x7)+x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 1U;
	int16_t x11 = -36;
	volatile int8_t x12 = 1;
	volatile int64_t t2 = -831090415298198955LL;

	t2 = (x9/((x10|x11)+x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -524672603LL;
	volatile int64_t x14 = INT64_MAX;
	int16_t x15 = -18;
	int8_t x16 = INT8_MAX;
	volatile int64_t t3 = -1814055079LL;

	t3 = (x13/((x14|x15)+x16));

	if (t3 != -4164068LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = 29LL;
	static int16_t x18 = INT16_MAX;
	static int16_t x19 = -181;

	t4 = (x17/((x18|x19)+x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 1U;
	uint16_t x26 = UINT16_MAX;
	volatile uint8_t x27 = 124U;

	t5 = (x25/((x26|x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 811775LLU;
	int16_t x30 = INT16_MIN;
	volatile int32_t x31 = 13780;
	int32_t x32 = -9421;
	uint64_t t6 = 1950906711LLU;

	t6 = (x29/((x30|x31)+x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = -1585326005697032LL;
	static int8_t x34 = -50;
	uint32_t x35 = 100976U;
	static int32_t x36 = -15939;
	volatile int64_t t7 = 16869LL;

	t7 = (x33/((x34|x35)+x36));

	if (t7 != -369113LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 7826U;
	static uint32_t x42 = UINT32_MAX;
	int16_t x43 = -6;
	volatile int32_t x44 = INT32_MAX;
	uint32_t t8 = 169U;

	t8 = (x41/((x42|x43)+x44));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1;
	volatile int64_t x46 = -1LL;
	int32_t x47 = INT32_MIN;
	int32_t x48 = 1932750;
	volatile int64_t t9 = -8086259093481LL;

	t9 = (x45/((x46|x47)+x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = 194216265LL;
	uint64_t x50 = 1184LLU;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MAX;
	volatile uint64_t t10 = 43LLU;

	t10 = (x49/((x50|x51)+x52));

	if (t10 != 6265040LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -7868;
	static int32_t x54 = -1;
	int16_t x55 = 72;
	int16_t x56 = INT16_MIN;
	volatile int32_t t11 = -29;

	t11 = (x53/((x54|x55)+x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x58 = -1;
	uint8_t x59 = 1U;
	uint8_t x60 = 2U;
	volatile uint32_t t12 = 0U;

	t12 = (x57/((x58|x59)+x60));

	if (t12 != 17931U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	volatile int8_t x62 = INT8_MAX;
	uint16_t x63 = 101U;
	int64_t x64 = -151932669633803222LL;
	int64_t t13 = 19664058LL;

	t13 = (x61/((x62|x63)+x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 3U;
	uint8_t x66 = 0U;
	uint32_t x67 = UINT32_MAX;
	static int8_t x68 = INT8_MAX;

	t14 = (x65/((x66|x67)+x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 262719244456LL;
	static int64_t x70 = -213559192284323507LL;
	uint32_t x72 = 17U;
	static volatile int64_t t15 = 25941829386180LL;

	t15 = (x69/((x70|x71)+x72));

	if (t15 != -10844515LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	uint8_t x74 = 1U;
	int32_t x75 = -2032013;
	uint32_t t16 = 514765993U;

	t16 = (x73/((x74|x75)+x76));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x79 = -1LL;
	int64_t t17 = -75232830444LL;

	t17 = (x77/((x78|x79)+x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 17684103LLU;
	uint64_t x82 = 11924147195518LLU;
	int32_t x84 = INT32_MAX;
	uint64_t t18 = 281055889379261LLU;

	t18 = (x81/((x82|x83)+x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 13U;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	int64_t x88 = -1LL;

	t19 = (x85/((x86|x87)+x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = -1;
	static volatile uint64_t x90 = UINT64_MAX;
	int32_t x92 = INT32_MAX;

	t20 = (x89/((x90|x91)+x92));

	if (t20 != 8589934600LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	static int32_t x95 = -118;
	int32_t x96 = 0;
	int32_t t21 = -430842;

	t21 = (x93/((x94|x95)+x96));

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = 13216241756859LL;
	int64_t x99 = 65676301070LL;
	static uint8_t x100 = 10U;
	static int64_t t22 = 750LL;

	t22 = (x97/((x98|x99)+x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = 309602186880194127LLU;
	int16_t x102 = INT16_MAX;
	int8_t x104 = INT8_MIN;
	volatile uint64_t t23 = 60776429795LLU;

	t23 = (x101/((x102|x103)+x104));

	if (t23 != 9485651731983LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x105 = INT16_MIN;
	static int8_t x106 = 1;
	int8_t x107 = 1;
	volatile int32_t t24 = -1;

	t24 = (x105/((x106|x107)+x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 7;
	int64_t x110 = -1LL;
	uint8_t x111 = 58U;
	uint64_t t25 = 2483LLU;

	t25 = (x109/((x110|x111)+x112));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MAX;
	static int32_t x114 = INT32_MAX;
	uint32_t x115 = UINT32_MAX;
	static volatile int8_t x116 = INT8_MAX;

	t26 = (x113/((x114|x115)+x116));

	if (t26 != 73201365371863300LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 4265U;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	static int8_t x120 = 0;
	static int32_t t27 = -1005;

	t27 = (x117/((x118|x119)+x120));

	if (t27 != -4265) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -3;
	int8_t x122 = INT8_MIN;
	static int8_t x123 = -1;
	uint16_t x124 = 32478U;
	volatile int32_t t28 = 108033;

	t28 = (x121/((x122|x123)+x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -39;
	int64_t x126 = INT64_MAX;
	int32_t x127 = -1;
	static int64_t t29 = -1004130866LL;

	t29 = (x125/((x126|x127)+x128));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -26;
	static volatile int8_t x130 = INT8_MIN;
	uint32_t x131 = 494261304U;
	volatile uint32_t t30 = 0U;

	t30 = (x129/((x130|x131)+x132));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 951U;
	volatile int64_t x134 = -1LL;
	int64_t x135 = INT64_MAX;
	uint16_t x136 = 0U;
	int64_t t31 = 884214942LL;

	t31 = (x133/((x134|x135)+x136));

	if (t31 != -951LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -1LL;
	int64_t x142 = -1LL;
	volatile int16_t x143 = INT16_MIN;
	static int64_t t32 = -1644816173948770LL;

	t32 = (x141/((x142|x143)+x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1815LL;
	volatile uint32_t x146 = 13258U;
	int32_t x147 = -13888;
	volatile int8_t x148 = 1;
	int64_t t33 = 65209317LL;

	t33 = (x145/((x146|x147)+x148));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 503348U;
	uint64_t x150 = 1513237370067117346LLU;
	uint32_t x151 = 246147U;
	uint32_t x152 = UINT32_MAX;
	volatile uint64_t t34 = 802597375LLU;

	t34 = (x149/((x150|x151)+x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x159 = 3866U;
	static int64_t x160 = INT64_MIN;
	int64_t t35 = 10310LL;

	t35 = (x157/((x158|x159)+x160));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = -1;
	int8_t x163 = -1;
	static int16_t x164 = -12185;

	t36 = (x161/((x162|x163)+x164));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MAX;
	volatile int32_t x166 = INT32_MIN;
	static volatile int16_t x167 = 4630;
	volatile uint16_t x168 = 2U;
	volatile int32_t t37 = 15;

	t37 = (x165/((x166|x167)+x168));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x170 = INT64_MAX;
	volatile int32_t x172 = -112960723;
	volatile int64_t t38 = -77570524672741LL;

	t38 = (x169/((x170|x171)+x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = 14304U;
	static int64_t x174 = 1LL;
	uint16_t x175 = UINT16_MAX;
	int16_t x176 = -1;
	int64_t t39 = -336532422448LL;

	t39 = (x173/((x174|x175)+x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x178 = 107409834522LLU;
	volatile uint8_t x179 = 28U;
	int32_t x180 = 1768;
	volatile uint64_t t40 = 3045LLU;

	t40 = (x177/((x178|x179)+x180));

	if (t40 != 171741664LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 0;
	static int8_t x182 = 1;
	volatile int64_t x183 = -1LL;
	uint32_t x184 = UINT32_MAX;
	int64_t t41 = 901306LL;

	t41 = (x181/((x182|x183)+x184));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x186 = 79229035U;
	static uint8_t x188 = UINT8_MAX;
	volatile uint32_t t42 = 501U;

	t42 = (x185/((x186|x187)+x188));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x189 = 37207242U;
	volatile int8_t x190 = INT8_MAX;
	int8_t x191 = 0;
	int32_t x192 = 253084;
	uint32_t t43 = 1799U;

	t43 = (x189/((x190|x191)+x192));

	if (t43 != 146U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = UINT32_MAX;
	static int16_t x195 = -1;
	volatile uint32_t t44 = 2303150U;

	t44 = (x193/((x194|x195)+x196));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	static volatile int8_t x198 = INT8_MAX;
	int8_t x199 = INT8_MAX;
	uint16_t x200 = 8269U;
	int32_t t45 = -158567466;

	t45 = (x197/((x198|x199)+x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = UINT64_MAX;
	static volatile uint16_t x202 = UINT16_MAX;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = -1;
	static volatile uint64_t t46 = 18940553LLU;

	t46 = (x201/((x202|x203)+x204));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MAX;
	uint16_t x212 = 7690U;
	volatile int64_t t47 = -25LL;

	t47 = (x209/((x210|x211)+x212));

	if (t47 != 3LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x214 = INT8_MIN;
	volatile int16_t x215 = 5521;
	int16_t x216 = 376;
	int32_t t48 = -487605030;

	t48 = (x213/((x214|x215)+x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = -1;
	volatile int16_t x218 = 16;
	static int16_t x219 = -2;
	static int16_t x220 = -1;

	t49 = (x217/((x218|x219)+x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = INT32_MIN;
	static int64_t x223 = 982630669LL;
	uint16_t x224 = 491U;

	t50 = (x221/((x222|x223)+x224));

	if (t50 != 7918060125LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x225 = -1;
	volatile int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	static uint16_t x228 = UINT16_MAX;
	volatile int64_t t51 = 10049143609LL;

	t51 = (x225/((x226|x227)+x228));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x230 = UINT16_MAX;
	static uint8_t x231 = UINT8_MAX;
	uint32_t x232 = 202310644U;
	volatile uint32_t t52 = 1057U;

	t52 = (x229/((x230|x231)+x232));

	if (t52 != 10U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = INT8_MIN;
	uint32_t x234 = 439U;
	int32_t x235 = -42449649;

	t53 = (x233/((x234|x235)+x236));

	if (t53 != 4337300890LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x238 = INT16_MAX;
	int8_t x239 = INT8_MIN;
	static uint8_t x240 = UINT8_MAX;
	uint64_t t54 = 47176533545018793LLU;

	t54 = (x237/((x238|x239)+x240));

	if (t54 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	static int32_t x244 = 479903428;
	volatile uint32_t t55 = 65246885U;

	t55 = (x241/((x242|x243)+x244));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = INT64_MAX;
	int64_t x246 = -1LL;
	static int8_t x247 = INT8_MIN;
	volatile uint16_t x248 = 35U;
	volatile int64_t t56 = 59062LL;

	t56 = (x245/((x246|x247)+x248));

	if (t56 != 271275648142787523LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x249 = 679U;
	uint16_t x250 = UINT16_MAX;
	int16_t x252 = -7764;
	volatile int32_t t57 = 32401;

	t57 = (x249/((x250|x251)+x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x253 = -620LL;
	static int64_t x254 = INT64_MAX;
	uint64_t x255 = 5982184756018986836LLU;
	uint32_t x256 = 129850783U;
	static volatile uint64_t t58 = 442187979569LLU;

	t58 = (x253/((x254|x255)+x256));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MAX;
	uint8_t x258 = UINT8_MAX;
	static uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MAX;
	volatile uint64_t t59 = 50887957975372LLU;

	t59 = (x257/((x258|x259)+x260));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x261 = INT8_MAX;
	static int32_t x262 = -1;
	volatile int64_t x264 = -1LL;

	t60 = (x261/((x262|x263)+x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = INT8_MAX;
	static uint32_t x268 = 13541U;
	uint32_t t61 = 2245158U;

	t61 = (x265/((x266|x267)+x268));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = -198;
	static int8_t x270 = INT8_MIN;
	int8_t x271 = -1;
	static int32_t t62 = -312909;

	t62 = (x269/((x270|x271)+x272));

	if (t62 != -15) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x273 = -1;
	int8_t x274 = INT8_MIN;
	uint16_t x275 = 103U;
	volatile uint64_t x276 = UINT64_MAX;
	uint64_t t63 = 965457815LLU;

	t63 = (x273/((x274|x275)+x276));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = UINT64_MAX;
	uint8_t x279 = 15U;
	volatile uint64_t t64 = 5752LLU;

	t64 = (x277/((x278|x279)+x280));

	if (t64 != 219LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x281 = 1;
	int32_t x282 = 39604080;
	volatile int64_t x283 = -292365LL;
	volatile int16_t x284 = -1;
	int64_t t65 = -1463083018026638LL;

	t65 = (x281/((x282|x283)+x284));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x286 = -1;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 0;
	volatile int32_t t66 = 496847;

	t66 = (x285/((x286|x287)+x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MAX;
	volatile int8_t x291 = INT8_MIN;
	uint64_t x292 = 27594075687746939LLU;
	uint64_t t67 = 9494790809LLU;

	t67 = (x289/((x290|x291)+x292));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = -1;
	uint64_t x295 = 849151797289LLU;
	uint64_t x296 = 34465273078223337LLU;
	static uint64_t t68 = 3323741614623354567LLU;

	t68 = (x293/((x294|x295)+x296));

	if (t68 != 535LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MIN;
	int16_t x299 = -4;
	int16_t x300 = INT16_MAX;
	static int64_t t69 = 558LL;

	t69 = (x297/((x298|x299)+x300));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = -245;
	volatile int32_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	uint8_t x304 = 2U;
	int32_t t70 = -46;

	t70 = (x301/((x302|x303)+x304));

	if (t70 != -245) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = -1;
	static int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;

	t71 = (x305/((x306|x307)+x308));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x310 = 549239853U;
	volatile int64_t t72 = -234626638270LL;

	t72 = (x309/((x310|x311)+x312));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x314 = UINT16_MAX;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t73 = 51148;

	t73 = (x313/((x314|x315)+x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MIN;
	static int32_t x319 = -1;
	uint8_t x320 = 2U;
	int32_t t74 = -45159472;

	t74 = (x317/((x318|x319)+x320));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = 10410;
	int32_t x327 = -89027;
	static volatile int64_t t75 = 4661LL;

	t75 = (x325/((x326|x327)+x328));

	if (t75 != 24726LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x330 = -7;
	uint32_t x331 = 123770123U;

	t76 = (x329/((x330|x331)+x332));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x337 = INT32_MAX;
	static int16_t x340 = INT16_MAX;
	static int32_t t77 = -7;

	t77 = (x337/((x338|x339)+x340));

	if (t77 != 65540) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x342 = INT64_MAX;
	int8_t x343 = 49;
	static volatile int64_t t78 = -2267307925515086668LL;

	t78 = (x341/((x342|x343)+x344));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = 2341;
	static uint8_t x350 = UINT8_MAX;
	uint16_t x351 = 22U;
	uint16_t x352 = 4U;
	volatile int32_t t79 = -371347111;

	t79 = (x349/((x350|x351)+x352));

	if (t79 != 9) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = 786368061640556LLU;
	int8_t x358 = INT8_MIN;
	int32_t x360 = INT32_MIN;
	uint64_t t80 = 58430797116LLU;

	t80 = (x357/((x358|x359)+x360));

	if (t80 != 366181LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = -1;
	static uint8_t x366 = 3U;
	static volatile uint8_t x367 = 1U;
	int32_t t81 = 263396684;

	t81 = (x365/((x366|x367)+x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x369 = INT16_MIN;
	uint16_t x370 = 554U;
	uint32_t x372 = UINT32_MAX;
	volatile int64_t t82 = 13485877LL;

	t82 = (x369/((x370|x371)+x372));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = 24;
	uint32_t x376 = 8579U;
	uint32_t t83 = 3445140U;

	t83 = (x373/((x374|x375)+x376));

	if (t83 != 486182U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = -680;
	int64_t x379 = 4066805LL;

	t84 = (x377/((x378|x379)+x380));

	if (t84 != -3339787LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = -1;
	static uint16_t x382 = 0U;
	static int64_t x384 = -1234074LL;
	int64_t t85 = -14328LL;

	t85 = (x381/((x382|x383)+x384));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = UINT32_MAX;
	static int16_t x392 = INT16_MIN;
	volatile uint32_t t86 = 9107840U;

	t86 = (x389/((x390|x391)+x392));

	if (t86 != 20U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x393 = 0U;
	uint8_t x394 = 2U;
	volatile int32_t x395 = -1;
	uint32_t t87 = 48U;

	t87 = (x393/((x394|x395)+x396));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	volatile uint32_t t88 = 71222969U;

	t88 = (x397/((x398|x399)+x400));

	if (t88 != 16909320U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x402 = -1;
	uint8_t x403 = 1U;
	int64_t x404 = -1LL;

	t89 = (x401/((x402|x403)+x404));

	if (t89 != -77872508LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x405 = INT32_MIN;
	int32_t x406 = -12644;
	static int32_t x407 = INT32_MIN;

	t90 = (x405/((x406|x407)+x408));

	if (t90 != 12539831407429LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x413 = 27U;
	uint32_t x414 = 14562U;
	volatile uint8_t x416 = 2U;
	volatile uint32_t t91 = 2717219U;

	t91 = (x413/((x414|x415)+x416));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x417 = -8963;
	static int32_t x418 = 253;
	int32_t x419 = INT32_MIN;
	volatile int32_t t92 = 9248;

	t92 = (x417/((x418|x419)+x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = INT64_MAX;
	int16_t x422 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = 131005391038843391LLU;
	volatile uint64_t t93 = 9343297LLU;

	t93 = (x421/((x422|x423)+x424));

	if (t93 != 70LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -1;
	static int32_t x426 = INT32_MAX;
	int32_t x427 = -4127785;
	int8_t x428 = INT8_MIN;

	t94 = (x425/((x426|x427)+x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x429 = 2U;
	int8_t x431 = INT8_MIN;
	volatile int32_t t95 = -450578;

	t95 = (x429/((x430|x431)+x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x433 = 1U;
	int16_t x434 = INT16_MIN;
	uint64_t x435 = UINT64_MAX;
	uint8_t x436 = 0U;

	t96 = (x433/((x434|x435)+x436));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x437 = UINT8_MAX;
	static int64_t x438 = -7237373976677762LL;
	volatile int64_t x439 = INT64_MAX;

	t97 = (x437/((x438|x439)+x440));

	if (t97 != -127LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x441 = INT8_MIN;
	static uint16_t x442 = UINT16_MAX;
	int8_t x443 = INT8_MIN;
	uint8_t x444 = 0U;
	static volatile int32_t t98 = -15;

	t98 = (x441/((x442|x443)+x444));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x446 = -1;
	static int32_t x447 = INT32_MIN;
	volatile int32_t x448 = -59904855;

	t99 = (x445/((x446|x447)+x448));

	if (t99 != 35) { NG(); } else { ; }
	
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

