#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 47491438;
int16_t x8 = -2;
int16_t x13 = -1;
static int64_t x15 = -43270382412499301LL;
uint16_t x38 = 1015U;
uint16_t x39 = 255U;
int32_t x40 = INT32_MIN;
static volatile int64_t x48 = 55195LL;
static volatile int64_t t9 = 15421LL;
volatile int8_t x58 = INT8_MIN;
uint32_t x61 = 69339U;
volatile uint32_t t11 = 105811517U;
volatile int32_t x71 = -12;
volatile int16_t x72 = 1;
int32_t t12 = 1;
int32_t x75 = INT32_MIN;
int32_t t13 = -22887;
uint32_t x77 = 73706U;
static int64_t x79 = INT64_MIN;
int8_t x103 = INT8_MAX;
volatile uint64_t t19 = 6725626714615476LLU;
static uint64_t x110 = 246950LLU;
uint64_t x118 = 640243915LLU;
int8_t x124 = -1;
volatile uint64_t t22 = 1131744842588299928LLU;
uint64_t x128 = UINT64_MAX;
uint8_t x131 = UINT8_MAX;
static uint64_t x139 = 736LLU;
int64_t x140 = -471814172LL;
volatile int64_t t27 = 310054LL;
volatile int64_t t28 = -851LL;
static int32_t x159 = INT32_MIN;
static volatile int64_t x169 = 26LL;
uint32_t x172 = 6U;
volatile int64_t t31 = 324LL;
int32_t t32 = -146771;
volatile int64_t t33 = 760041LL;
uint8_t x194 = 5U;
static int8_t x215 = 6;
static uint32_t x219 = 1276801U;
uint8_t x223 = UINT8_MAX;
int8_t x239 = INT8_MIN;
int8_t x240 = 11;
int16_t x244 = INT16_MIN;
volatile int32_t x248 = INT32_MAX;
static int16_t x259 = 523;
volatile int64_t x261 = INT64_MIN;
int64_t x263 = INT64_MIN;
int64_t t50 = 314005LL;
int16_t x282 = -669;
int64_t x283 = INT64_MAX;
uint16_t x285 = 188U;
volatile int64_t x288 = INT64_MAX;
uint64_t t55 = 265274048171239LLU;
static volatile uint32_t x297 = 0U;
int8_t x298 = INT8_MIN;
int64_t x300 = -540512LL;
uint8_t x301 = UINT8_MAX;
int16_t x320 = INT16_MIN;
static uint32_t x330 = UINT32_MAX;
volatile uint64_t t63 = 6428120LLU;
uint64_t x333 = 82694LLU;
volatile uint64_t t65 = 2873983774220286233LLU;
volatile int64_t x341 = -1LL;
int64_t x342 = 5649559640LL;
int32_t x345 = INT32_MIN;
volatile int16_t x357 = INT16_MAX;
uint32_t x363 = 137119U;
int16_t x369 = -39;
int32_t x384 = INT32_MIN;
uint64_t t75 = 567729011LLU;
static uint8_t x390 = 50U;
volatile int8_t x392 = 7;
uint16_t x401 = 7U;
volatile int32_t t79 = -121;
int64_t x413 = INT64_MIN;
static int32_t x416 = INT32_MIN;
volatile uint64_t t80 = 696309297945492LLU;
int64_t x420 = INT64_MIN;
int32_t x425 = INT32_MIN;
uint32_t x427 = 35764989U;
volatile uint64_t t84 = 264LLU;
volatile int64_t t85 = -906LL;
static uint64_t x438 = UINT64_MAX;
int16_t x448 = INT16_MIN;
static uint64_t x449 = 48196700LLU;
int8_t x451 = INT8_MIN;
static volatile int16_t x459 = -1;
int32_t t90 = 114620900;
int64_t x463 = INT64_MIN;
volatile int16_t x473 = 6;
uint64_t x474 = UINT64_MAX;
uint8_t x477 = 1U;
int64_t x486 = -162999080317017302LL;
uint16_t x491 = 1020U;
static volatile int16_t x501 = INT16_MIN;


void f0(void) {
	int32_t x1 = 18393324;
	int8_t x2 = 4;
	static int32_t x3 = -1;
	static int32_t x4 = INT32_MAX;

	t0 = (((x1-x2)%x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	static int64_t x6 = -3928444386LL;
	int64_t x7 = INT64_MIN;
	volatile int64_t t1 = 45149638382203863LL;

	t1 = (((x5-x6)%x7)%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = INT32_MAX;
	static int8_t x16 = -1;
	int64_t t2 = -6731915431LL;

	t2 = (((x13-x14)%x15)%x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 0U;
	int32_t x18 = 3809;
	volatile int16_t x19 = -1;
	uint8_t x20 = 8U;
	volatile int32_t t3 = 20340366;

	t3 = (((x17-x18)%x19)%x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 27628964U;
	volatile int16_t x22 = INT16_MIN;
	static int16_t x23 = -1;
	uint16_t x24 = 649U;
	volatile uint32_t t4 = 2U;

	t4 = (((x21-x22)%x23)%x24);

	if (t4 != 54U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = 201;
	static int32_t x31 = -1;
	volatile uint16_t x32 = 502U;
	int32_t t5 = -116;

	t5 = (((x29-x30)%x31)%x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = -1;
	static uint32_t x34 = 9U;
	uint8_t x35 = 23U;
	int32_t x36 = 2669;
	uint32_t t6 = 655620889U;

	t6 = (((x33-x34)%x35)%x36);

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	int64_t t7 = -3947781006677LL;

	t7 = (((x37-x38)%x39)%x40);

	if (t7 != 132LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = INT32_MAX;
	int64_t x42 = -136LL;
	int32_t x43 = INT32_MIN;
	int32_t x44 = -131536191;
	volatile int64_t t8 = 5379697460155LL;

	t8 = (((x41-x42)%x43)%x44);

	if (t8 != 135LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	uint8_t x47 = UINT8_MAX;

	t9 = (((x45-x46)%x47)%x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x57 = 690117LL;
	int16_t x59 = INT16_MAX;
	int32_t x60 = 77;
	int64_t t10 = -2LL;

	t10 = (((x57-x58)%x59)%x60);

	if (t10 != 59LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x62 = UINT32_MAX;
	uint32_t x63 = UINT32_MAX;
	int16_t x64 = -1;

	t11 = (((x61-x62)%x63)%x64);

	if (t11 != 69340U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x69 = 11313U;
	static uint16_t x70 = 25U;

	t12 = (((x69-x70)%x71)%x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x73 = -1;
	int16_t x74 = INT16_MIN;
	int32_t x76 = INT32_MIN;

	t13 = (((x73-x74)%x75)%x76);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x78 = 3U;
	int8_t x80 = -2;
	volatile int64_t t14 = -2593432LL;

	t14 = (((x77-x78)%x79)%x80);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = -1;
	int32_t x83 = INT32_MIN;
	uint8_t x84 = UINT8_MAX;
	int32_t t15 = -765;

	t15 = (((x81-x82)%x83)%x84);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -274755333512194LL;
	int32_t x86 = INT32_MIN;
	static int32_t x87 = INT32_MIN;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t16 = 376020LL;

	t16 = (((x85-x86)%x87)%x88);

	if (t16 != -1980619778LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = -1;
	volatile uint16_t x90 = UINT16_MAX;
	int8_t x91 = INT8_MIN;
	volatile int64_t x92 = INT64_MAX;
	volatile int64_t t17 = -91LL;

	t17 = (((x89-x90)%x91)%x92);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x93 = 483436U;
	int64_t x94 = -1LL;
	uint64_t x95 = 516902689488LLU;
	int16_t x96 = 13442;
	uint64_t t18 = 1356765877682551LLU;

	t18 = (((x93-x94)%x95)%x96);

	if (t18 != 12967LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x101 = 5U;
	uint64_t x102 = 17327846LLU;
	int16_t x104 = INT16_MAX;

	t19 = (((x101-x102)%x103)%x104);

	if (t19 != 41LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = -1;
	int64_t x111 = -1452507204944400LL;
	int16_t x112 = -3;
	uint64_t t20 = 1883366404LLU;

	t20 = (((x109-x110)%x111)%x112);

	if (t20 != 1452507204697449LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = 10555LLU;
	uint64_t x119 = 263048357410411061LLU;
	volatile int16_t x120 = -1;
	volatile uint64_t t21 = 3916LLU;

	t21 = (((x117-x118)%x119)%x120);

	if (t21 != 33359054340543986LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MAX;
	int16_t x123 = INT16_MIN;

	t22 = (((x121-x122)%x123)%x124);

	if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x125 = INT32_MAX;
	int8_t x126 = INT8_MAX;
	int64_t x127 = 4422712100201715102LL;
	volatile uint64_t t23 = 186LLU;

	t23 = (((x125-x126)%x127)%x128);

	if (t23 != 2147483520LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	volatile int64_t x132 = INT64_MAX;
	int64_t t24 = 8490LL;

	t24 = (((x129-x130)%x131)%x132);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = 1765637;
	uint64_t x134 = 5883066576LLU;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;
	uint64_t t25 = 14951811373LLU;

	t25 = (((x133-x134)%x135)%x136);

	if (t25 != 2708633652LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x137 = 17261LLU;
	uint32_t x138 = 1347394813U;
	uint64_t t26 = 1391456740029LLU;

	t26 = (((x137-x138)%x139)%x140);

	if (t26 != 496LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x141 = INT64_MAX;
	uint32_t x142 = 506U;
	uint32_t x143 = 3U;
	static int8_t x144 = INT8_MIN;

	t27 = (((x141-x142)%x143)%x144);

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x145 = INT8_MAX;
	int32_t x146 = 1;
	int64_t x147 = -1LL;
	volatile uint8_t x148 = UINT8_MAX;

	t28 = (((x145-x146)%x147)%x148);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x157 = -1;
	volatile int16_t x158 = INT16_MIN;
	int64_t x160 = -23777524503LL;
	volatile int64_t t29 = 2222731360567267LL;

	t29 = (((x157-x158)%x159)%x160);

	if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = -410560095682770131LL;
	int32_t x162 = -1;
	int16_t x163 = INT16_MIN;
	static int8_t x164 = -2;
	volatile int64_t t30 = -519804834LL;

	t30 = (((x161-x162)%x163)%x164);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MIN;

	t31 = (((x169-x170)%x171)%x172);

	if (t31 != -5LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = 8;
	int32_t x174 = INT32_MAX;
	static int8_t x175 = -1;
	int32_t x176 = 16;

	t32 = (((x173-x174)%x175)%x176);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	int64_t x183 = -1LL;
	static volatile int16_t x184 = -142;

	t33 = (((x181-x182)%x183)%x184);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x189 = INT8_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	static volatile uint8_t x191 = 6U;
	static int64_t x192 = -1LL;
	int64_t t34 = -1106989271509957285LL;

	t34 = (((x189-x190)%x191)%x192);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x193 = 4U;
	static int64_t x195 = 852741051832LL;
	volatile int8_t x196 = 47;
	static volatile int64_t t35 = -25528624386103072LL;

	t35 = (((x193-x194)%x195)%x196);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	int8_t x203 = 27;
	uint8_t x204 = 7U;
	volatile uint32_t t36 = 2781U;

	t36 = (((x201-x202)%x203)%x204);

	if (t36 != 5U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = INT32_MIN;
	int16_t x207 = 1;
	volatile int16_t x208 = 836;
	static int32_t t37 = 6789912;

	t37 = (((x205-x206)%x207)%x208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x209 = INT16_MAX;
	static int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MAX;
	static int32_t x212 = INT32_MIN;
	volatile int64_t t38 = -10260351293515655LL;

	t38 = (((x209-x210)%x211)%x212);

	if (t38 != 65535LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x213 = 0;
	uint8_t x214 = UINT8_MAX;
	int64_t x216 = INT64_MAX;
	static volatile int64_t t39 = 15LL;

	t39 = (((x213-x214)%x215)%x216);

	if (t39 != -3LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x217 = -1;
	int16_t x218 = -2;
	static int64_t x220 = -57909927579335LL;
	static int64_t t40 = 3183292LL;

	t40 = (((x217-x218)%x219)%x220);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = 7306689301534LL;
	int64_t x222 = -21475LL;
	int16_t x224 = INT16_MIN;
	static int64_t t41 = 2LL;

	t41 = (((x221-x222)%x223)%x224);

	if (t41 != 164LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x229 = -1;
	volatile int32_t x230 = -78;
	static volatile int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t42 = -1444488;

	t42 = (((x229-x230)%x231)%x232);

	if (t42 != 77) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MIN;
	uint8_t x235 = UINT8_MAX;
	uint32_t x236 = 3642159U;
	uint32_t t43 = 127U;

	t43 = (((x233-x234)%x235)%x236);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x237 = 1U;
	int8_t x238 = -1;
	volatile uint32_t t44 = 5U;

	t44 = (((x237-x238)%x239)%x240);

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x241 = -1;
	volatile int64_t x242 = -1LL;
	int16_t x243 = INT16_MIN;
	volatile int64_t t45 = -69808127064974LL;

	t45 = (((x241-x242)%x243)%x244);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x245 = 1064U;
	int16_t x246 = -1;
	uint16_t x247 = 138U;
	static uint32_t t46 = 676U;

	t46 = (((x245-x246)%x247)%x248);

	if (t46 != 99U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x249 = -1;
	int8_t x250 = -1;
	static uint8_t x251 = 35U;
	int32_t x252 = -1;
	int32_t t47 = 13;

	t47 = (((x249-x250)%x251)%x252);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x253 = UINT8_MAX;
	static int16_t x254 = -7267;
	int8_t x255 = -1;
	volatile int32_t x256 = -1;
	volatile int32_t t48 = -62;

	t48 = (((x253-x254)%x255)%x256);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x257 = UINT8_MAX;
	volatile int16_t x258 = -1;
	uint8_t x260 = 1U;
	static int32_t t49 = 3898;

	t49 = (((x257-x258)%x259)%x260);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x262 = INT64_MIN;
	volatile int32_t x264 = INT32_MAX;

	t50 = (((x261-x262)%x263)%x264);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = -1LL;
	volatile int8_t x275 = -1;
	int8_t x276 = INT8_MIN;
	int64_t t51 = 105283683582LL;

	t51 = (((x273-x274)%x275)%x276);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x281 = -1LL;
	int32_t x284 = 6322921;
	int64_t t52 = -915741470698829690LL;

	t52 = (((x281-x282)%x283)%x284);

	if (t52 != 668LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	volatile int64_t t53 = -1421442797274253068LL;

	t53 = (((x285-x286)%x287)%x288);

	if (t53 != 60LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x289 = UINT16_MAX;
	uint32_t x290 = 902U;
	static int64_t x291 = INT64_MAX;
	uint16_t x292 = 6278U;
	int64_t t54 = -231718LL;

	t54 = (((x289-x290)%x291)%x292);

	if (t54 != 1853LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x293 = INT32_MAX;
	uint64_t x294 = UINT64_MAX;
	uint64_t x295 = UINT64_MAX;
	static int64_t x296 = -1LL;

	t55 = (((x293-x294)%x295)%x296);

	if (t55 != 2147483648LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x299 = INT32_MAX;
	volatile int64_t t56 = -8696986183LL;

	t56 = (((x297-x298)%x299)%x300);

	if (t56 != 128LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x302 = -1;
	volatile uint64_t x303 = 24249LLU;
	int16_t x304 = -890;
	static uint64_t t57 = 119929648476426087LLU;

	t57 = (((x301-x302)%x303)%x304);

	if (t57 != 256LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x305 = INT16_MAX;
	static int16_t x306 = INT16_MAX;
	int32_t x307 = INT32_MIN;
	int8_t x308 = -1;
	volatile int32_t t58 = 31440;

	t58 = (((x305-x306)%x307)%x308);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = 9020;
	static int16_t x315 = 7214;
	int8_t x316 = 2;
	int32_t t59 = 5604;

	t59 = (((x313-x314)%x315)%x316);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x317 = -1LL;
	int8_t x318 = INT8_MAX;
	static int16_t x319 = 3;
	static volatile int64_t t60 = 2111551594LL;

	t60 = (((x317-x318)%x319)%x320);

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x321 = -1;
	volatile int16_t x322 = INT16_MIN;
	static volatile uint64_t x323 = 179353348493LLU;
	static uint8_t x324 = UINT8_MAX;
	volatile uint64_t t61 = 17021LLU;

	t61 = (((x321-x322)%x323)%x324);

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x325 = 2081352825404275372LLU;
	int32_t x326 = -1;
	static uint8_t x327 = 18U;
	volatile int16_t x328 = -1;
	volatile uint64_t t62 = 149LLU;

	t62 = (((x325-x326)%x327)%x328);

	if (t62 != 17LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x329 = 75461319LLU;
	int16_t x331 = INT16_MAX;
	volatile int16_t x332 = INT16_MAX;

	t63 = (((x329-x330)%x331)%x332);

	if (t63 != 31698LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x334 = UINT16_MAX;
	uint16_t x335 = 13U;
	volatile int32_t x336 = -652726;
	static uint64_t t64 = 1LLU;

	t64 = (((x333-x334)%x335)%x336);

	if (t64 != 12LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x337 = UINT64_MAX;
	static int8_t x338 = INT8_MAX;
	int8_t x339 = -1;
	static volatile int32_t x340 = INT32_MIN;

	t65 = (((x337-x338)%x339)%x340);

	if (t65 != 2147483520LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x343 = 39;
	int32_t x344 = 15016492;
	volatile int64_t t66 = -929452127LL;

	t66 = (((x341-x342)%x343)%x344);

	if (t66 != -24LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	volatile int16_t x348 = -7819;
	uint32_t t67 = 346U;

	t67 = (((x345-x346)%x347)%x348);

	if (t67 != 2147483649U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x353 = UINT32_MAX;
	static uint8_t x354 = UINT8_MAX;
	uint8_t x355 = 10U;
	int16_t x356 = 4;
	volatile uint32_t t68 = 21U;

	t68 = (((x353-x354)%x355)%x356);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = 680LL;
	int64_t x360 = INT64_MAX;
	volatile int64_t t69 = 9943776250LL;

	t69 = (((x357-x358)%x359)%x360);

	if (t69 != 552LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x361 = INT32_MIN;
	static uint32_t x362 = 97400U;
	volatile uint64_t x364 = UINT64_MAX;
	static uint64_t t70 = 6516062194331LLU;

	t70 = (((x361-x362)%x363)%x364);

	if (t70 != 102708LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x365 = 499855369231134LLU;
	uint8_t x366 = 13U;
	volatile int8_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	uint64_t t71 = 6583784442LLU;

	t71 = (((x365-x366)%x367)%x368);

	if (t71 != 18281LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x370 = UINT32_MAX;
	static int32_t x371 = 2;
	uint8_t x372 = 35U;
	uint32_t t72 = 58983106U;

	t72 = (((x369-x370)%x371)%x372);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x373 = -1;
	int64_t x374 = INT64_MAX;
	int8_t x375 = INT8_MIN;
	int16_t x376 = -2;
	volatile int64_t t73 = 210657795LL;

	t73 = (((x373-x374)%x375)%x376);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x381 = 41396634994176LLU;
	uint16_t x382 = 346U;
	int64_t x383 = INT64_MIN;
	volatile uint64_t t74 = 20LLU;

	t74 = (((x381-x382)%x383)%x384);

	if (t74 != 41396634993830LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x385 = INT32_MAX;
	static uint64_t x386 = 871029505840LLU;
	int32_t x387 = INT32_MIN;
	uint16_t x388 = 133U;

	t75 = (((x385-x386)%x387)%x388);

	if (t75 != 55LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x389 = -1;
	uint32_t x391 = 508U;
	uint32_t t76 = 2982954U;

	t76 = (((x389-x390)%x391)%x392);

	if (t76 != 4U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x402 = INT8_MAX;
	uint16_t x403 = UINT16_MAX;
	uint16_t x404 = 339U;
	int32_t t77 = -44141374;

	t77 = (((x401-x402)%x403)%x404);

	if (t77 != -120) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x405 = INT32_MIN;
	static int8_t x406 = INT8_MIN;
	uint16_t x407 = 883U;
	int32_t x408 = INT32_MIN;
	static int32_t t78 = 8829048;

	t78 = (((x405-x406)%x407)%x408);

	if (t78 != -147) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x409 = -3;
	int16_t x410 = INT16_MIN;
	static int8_t x411 = -1;
	uint8_t x412 = UINT8_MAX;

	t79 = (((x409-x410)%x411)%x412);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x414 = 496754985660101490LLU;
	int8_t x415 = INT8_MIN;

	t80 = (((x413-x414)%x415)%x416);

	if (t80 != 8726617051194674318LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x417 = -1LL;
	int32_t x418 = 24313;
	int32_t x419 = -1;
	static int64_t t81 = 35289503LL;

	t81 = (((x417-x418)%x419)%x420);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x421 = UINT32_MAX;
	int16_t x422 = -1;
	uint32_t x423 = 18U;
	static uint16_t x424 = UINT16_MAX;
	volatile uint32_t t82 = 0U;

	t82 = (((x421-x422)%x423)%x424);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x426 = 4032LLU;
	static int16_t x428 = INT16_MIN;
	volatile uint64_t t83 = 891504680065LLU;

	t83 = (((x425-x426)%x427)%x428);

	if (t83 != 34995080LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x429 = INT32_MIN;
	int8_t x430 = -1;
	uint64_t x431 = 4055852LLU;
	uint8_t x432 = 16U;

	t84 = (((x429-x430)%x431)%x432);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x433 = INT16_MIN;
	static uint8_t x434 = UINT8_MAX;
	int8_t x435 = INT8_MAX;
	int64_t x436 = INT64_MAX;

	t85 = (((x433-x434)%x435)%x436);

	if (t85 != -3LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x437 = 12U;
	int32_t x439 = -1;
	int32_t x440 = -26;
	static uint64_t t86 = 104944LLU;

	t86 = (((x437-x438)%x439)%x440);

	if (t86 != 13LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x445 = INT64_MAX;
	int16_t x446 = 1081;
	static int16_t x447 = -1;
	int64_t t87 = -27356786656LL;

	t87 = (((x445-x446)%x447)%x448);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x450 = INT32_MAX;
	uint32_t x452 = 586756U;
	uint64_t t88 = 65LLU;

	t88 = (((x449-x450)%x451)%x452);

	if (t88 != 407669LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x453 = UINT64_MAX;
	int64_t x454 = 282265LL;
	uint64_t x455 = 23175046LLU;
	uint8_t x456 = 96U;
	volatile uint64_t t89 = 19839LLU;

	t89 = (((x453-x454)%x455)%x456);

	if (t89 != 10LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x457 = INT32_MIN;
	int8_t x458 = INT8_MIN;
	static uint16_t x460 = UINT16_MAX;

	t90 = (((x457-x458)%x459)%x460);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x461 = 1033825178LL;
	uint32_t x462 = 49504U;
	int32_t x464 = -1;
	int64_t t91 = -57LL;

	t91 = (((x461-x462)%x463)%x464);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x465 = -1;
	volatile uint32_t x466 = UINT32_MAX;
	uint8_t x467 = 2U;
	volatile uint64_t x468 = UINT64_MAX;
	volatile uint64_t t92 = 11882746041515LLU;

	t92 = (((x465-x466)%x467)%x468);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x475 = -1359158;
	static int32_t x476 = INT32_MAX;
	uint64_t t93 = 14643LLU;

	t93 = (((x473-x474)%x475)%x476);

	if (t93 != 7LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x478 = -92;
	static volatile uint8_t x479 = 54U;
	int8_t x480 = INT8_MIN;
	int32_t t94 = -668;

	t94 = (((x477-x478)%x479)%x480);

	if (t94 != 39) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x481 = -63;
	uint8_t x482 = 95U;
	uint16_t x483 = 24842U;
	int64_t x484 = INT64_MIN;
	static volatile int64_t t95 = 6LL;

	t95 = (((x481-x482)%x483)%x484);

	if (t95 != -158LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x485 = INT64_MIN;
	uint32_t x487 = 28413U;
	int8_t x488 = -1;
	int64_t t96 = -385407527LL;

	t96 = (((x485-x486)%x487)%x488);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x489 = 3U;
	volatile uint8_t x490 = UINT8_MAX;
	int64_t x492 = INT64_MIN;
	volatile int64_t t97 = -194667LL;

	t97 = (((x489-x490)%x491)%x492);

	if (t97 != -252LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x497 = -1;
	int16_t x498 = INT16_MAX;
	int64_t x499 = 79722219566LL;
	volatile uint8_t x500 = 15U;
	volatile int64_t t98 = -1LL;

	t98 = (((x497-x498)%x499)%x500);

	if (t98 != -8LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x502 = 9713U;
	int64_t x503 = INT64_MIN;
	uint32_t x504 = 83738962U;
	int64_t t99 = -1642626067LL;

	t99 = (((x501-x502)%x503)%x504);

	if (t99 != -42481LL) { NG(); } else { ; }
	
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

