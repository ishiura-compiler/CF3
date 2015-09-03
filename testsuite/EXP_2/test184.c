#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -1LL;
static int16_t x6 = 15;
int64_t x18 = -3350166504689LL;
static volatile uint32_t x23 = 1U;
static int32_t x25 = INT32_MAX;
int8_t x31 = 18;
static int16_t x42 = INT16_MIN;
volatile int16_t x46 = -3;
static uint8_t x51 = 62U;
int16_t x52 = 710;
static volatile int16_t x53 = INT16_MIN;
uint32_t x54 = 15005U;
int8_t x60 = INT8_MAX;
int8_t x82 = 0;
int16_t x83 = 1;
volatile uint64_t x92 = UINT64_MAX;
uint64_t t16 = 1386942078LLU;
uint16_t x98 = 17796U;
volatile uint16_t x99 = 14983U;
int16_t x104 = INT16_MIN;
int32_t t19 = -365;
volatile int64_t x106 = -1LL;
uint32_t t22 = 2U;
static volatile int64_t x122 = INT64_MIN;
uint8_t x124 = UINT8_MAX;
volatile int32_t x125 = INT32_MIN;
volatile uint32_t x126 = 858U;
int64_t t24 = 83352141788LL;
int32_t x138 = INT32_MAX;
uint64_t t27 = 187090443529963841LLU;
uint64_t t28 = 1215568939070474LLU;
volatile int8_t x149 = 0;
int64_t x150 = 92LL;
uint64_t t30 = 348153LLU;
volatile uint8_t x157 = UINT8_MAX;
static int64_t x159 = INT64_MAX;
uint64_t x160 = UINT64_MAX;
int16_t x162 = INT16_MIN;
static uint32_t t32 = 136226083U;
static uint16_t x167 = 62U;
static volatile int32_t x169 = 22775773;
volatile int8_t x175 = -1;
volatile int32_t x179 = -1;
int8_t x189 = 2;
volatile int32_t t37 = 243945;
int16_t x205 = 762;
uint64_t x223 = 22687860444379LLU;
int32_t x224 = -1;
volatile uint32_t x238 = 254147U;
volatile int64_t t43 = 8390125116LL;
static int8_t x244 = INT8_MIN;
volatile uint8_t x246 = 11U;
int16_t x247 = INT16_MIN;
int32_t x249 = -1;
volatile int16_t x251 = INT16_MIN;
volatile int8_t x253 = -1;
uint64_t x270 = UINT64_MAX;
int32_t x283 = INT32_MIN;
static int32_t x293 = 92;
int8_t x300 = 0;
int32_t t56 = -24805915;
int64_t x301 = INT64_MAX;
int32_t x305 = 661;
static int32_t t58 = 248;
int16_t x313 = INT16_MIN;
volatile uint16_t x336 = UINT16_MAX;
int64_t t67 = 93554679042341LL;
static volatile uint16_t x362 = 53U;
int16_t x371 = 4602;
uint64_t x376 = 6141LLU;
int16_t x381 = -1;
int32_t x392 = INT32_MIN;
static uint32_t x401 = 79U;
uint8_t x405 = UINT8_MAX;
volatile int16_t x410 = -1;
int16_t x412 = 1;
static volatile uint16_t x414 = 25298U;
uint8_t x415 = 23U;
uint32_t x428 = 13U;
static int8_t x433 = -10;
int64_t x445 = -1LL;
static uint32_t x447 = 3648942U;
volatile uint8_t x459 = 54U;
static int32_t x460 = -206;
volatile int32_t t91 = 100;
volatile int16_t x474 = INT16_MIN;
int32_t x479 = -967788196;
uint64_t x480 = 12662838740396LLU;
uint32_t x489 = 305144053U;
volatile int8_t x500 = 41;
uint8_t x507 = UINT8_MAX;
int8_t x508 = -1;


void f0(void) {
	volatile uint32_t x2 = 1U;
	volatile int64_t x3 = -2118897893622957LL;
	static int32_t x4 = 52268936;
	int64_t t0 = 20LL;

	t0 = ((x1-(x2-x3))-x4);

	if (t0 != -2118897945891895LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int64_t x7 = -1LL;
	static int8_t x8 = -1;
	int64_t t1 = -298129819792374LL;

	t1 = ((x5-(x6-x7))-x8);

	if (t1 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int16_t x14 = -1;
	int32_t x15 = 752;
	static int32_t x16 = -317;
	volatile uint64_t t2 = 62786441358845388LLU;

	t2 = ((x13-(x14-x15))-x16);

	if (t2 != 1069LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x17 = 2U;
	volatile uint16_t x19 = 6U;
	int8_t x20 = -1;
	static volatile int64_t t3 = 118093074937758LL;

	t3 = ((x17-(x18-x19))-x20);

	if (t3 != 3350166504698LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	static int16_t x22 = -2842;
	int8_t x24 = -47;
	volatile uint32_t t4 = 40886930U;

	t4 = ((x21-(x22-x23))-x24);

	if (t4 != 2889U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = -1;
	volatile uint32_t x27 = 33456U;
	uint8_t x28 = 0U;
	volatile uint32_t t5 = 206263209U;

	t5 = ((x25-(x26-x27))-x28);

	if (t5 != 2147517104U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = -1LL;
	uint16_t x32 = 660U;
	static int64_t t6 = -3881183935504337218LL;

	t6 = ((x29-(x30-x31))-x32);

	if (t6 != -769LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 9U;
	int64_t x34 = 2LL;
	volatile uint64_t x35 = 147943203193761839LLU;
	static int32_t x36 = INT32_MAX;
	uint64_t t7 = 8406506805958978LLU;

	t7 = ((x33-(x34-x35))-x36);

	if (t7 != 147943201046278199LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	uint16_t x43 = 190U;
	int16_t x44 = INT16_MIN;
	int32_t t8 = 30688716;

	t8 = ((x41-(x42-x43))-x44);

	if (t8 != 65853) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	static volatile int16_t x47 = INT16_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t9 = 113770U;

	t9 = ((x45-(x46-x47))-x48);

	if (t9 != 4294934787U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = -6758625LL;
	static int32_t x50 = -147545;
	int64_t t10 = -10364288LL;

	t10 = ((x49-(x50-x51))-x52);

	if (t10 != -6611728LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x55 = UINT8_MAX;
	int8_t x56 = -4;
	uint32_t t11 = 17279U;

	t11 = ((x53-(x54-x55))-x56);

	if (t11 != 4294919782U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 48U;
	int16_t x58 = INT16_MIN;
	static uint8_t x59 = 2U;
	int32_t t12 = 2696673;

	t12 = ((x57-(x58-x59))-x60);

	if (t12 != 32691) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x77 = -502451LL;
	static int16_t x78 = INT16_MIN;
	uint64_t x79 = 1LLU;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t13 = 14245510761008347LLU;

	t13 = ((x77-(x78-x79))-x80);

	if (t13 != 18446744073709082062LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = 97162256LLU;
	int8_t x84 = -1;
	volatile uint64_t t14 = 16LLU;

	t14 = ((x81-(x82-x83))-x84);

	if (t14 != 97162258LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = INT16_MAX;
	static volatile int16_t x86 = INT16_MIN;
	int64_t x87 = 3156200728715LL;
	volatile int32_t x88 = -17;
	int64_t t15 = -6754350480061LL;

	t15 = ((x85-(x86-x87))-x88);

	if (t15 != 3156200794267LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 3U;
	int32_t x90 = INT32_MAX;
	int16_t x91 = INT16_MAX;

	t16 = ((x89-(x90-x91))-x92);

	if (t16 != 18446744071562100740LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x93 = -1;
	volatile int16_t x94 = 4;
	uint8_t x95 = UINT8_MAX;
	static volatile int8_t x96 = 63;
	volatile int32_t t17 = -18849055;

	t17 = ((x93-(x94-x95))-x96);

	if (t17 != 187) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 30LL;
	volatile int64_t x100 = -1LL;
	static int64_t t18 = 19456134LL;

	t18 = ((x97-(x98-x99))-x100);

	if (t18 != -2782LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MAX;

	t19 = ((x101-(x102-x103))-x104);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MIN;
	int16_t x107 = 1;
	int32_t x108 = INT32_MIN;
	int64_t t20 = -5026098103776LL;

	t20 = ((x105-(x106-x107))-x108);

	if (t20 != -9223372034707292158LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = 1;
	uint64_t x110 = UINT64_MAX;
	static volatile int16_t x111 = INT16_MAX;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t21 = 44629LLU;

	t21 = ((x109-(x110-x111))-x112);

	if (t21 != 9223372036854808577LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x113 = UINT16_MAX;
	uint32_t x114 = UINT32_MAX;
	static uint32_t x115 = 30U;
	uint8_t x116 = UINT8_MAX;

	t22 = ((x113-(x114-x115))-x116);

	if (t22 != 65311U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 53110593169831LLU;
	volatile int64_t x123 = -1LL;
	static uint64_t t23 = 16512716491LLU;

	t23 = ((x121-(x122-x123))-x124);

	if (t23 != 9223425147447945383LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x127 = INT16_MIN;
	static int64_t x128 = -1LL;

	t24 = ((x125-(x126-x127))-x128);

	if (t24 != 2147450023LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x133 = -1LL;
	int8_t x134 = INT8_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	static volatile int64_t x136 = -2151787080377401LL;
	static uint64_t t25 = 6960709869449LLU;

	t25 = ((x133-(x134-x135))-x136);

	if (t25 != 2151787080377527LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x137 = 2U;
	static volatile uint32_t x139 = 15046U;
	volatile uint64_t x140 = 13LLU;
	volatile uint64_t t26 = 7679829LLU;

	t26 = ((x137-(x138-x139))-x140);

	if (t26 != 2147498684LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = -247687LL;
	uint8_t x142 = 31U;
	uint32_t x143 = UINT32_MAX;
	static volatile uint64_t x144 = UINT64_MAX;

	t27 = ((x141-(x142-x143))-x144);

	if (t27 != 18446744073709303898LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = UINT64_MAX;
	int16_t x146 = INT16_MIN;
	volatile int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MIN;

	t28 = ((x145-(x146-x147))-x148);

	if (t28 != 9223372034707324927LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x151 = -1;
	int8_t x152 = INT8_MIN;
	volatile int64_t t29 = 353047872451LL;

	t29 = ((x149-(x150-x151))-x152);

	if (t29 != 35LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x153 = -1;
	uint64_t x154 = 1704349LLU;
	int8_t x155 = INT8_MAX;
	int64_t x156 = -1LL;

	t30 = ((x153-(x154-x155))-x156);

	if (t30 != 18446744073707847394LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x158 = UINT16_MAX;
	uint64_t t31 = 1489600386LLU;

	t31 = ((x157-(x158-x159))-x160);

	if (t31 != 9223372036854710528LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = UINT32_MAX;
	uint32_t x163 = UINT32_MAX;
	uint8_t x164 = 33U;

	t32 = ((x161-(x162-x163))-x164);

	if (t32 != 32733U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = UINT8_MAX;
	uint64_t x166 = UINT64_MAX;
	uint32_t x168 = 94551405U;
	uint64_t t33 = 18985669072011LLU;

	t33 = ((x165-(x166-x167))-x168);

	if (t33 != 18446744073615000529LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x170 = INT16_MIN;
	static int64_t x171 = 231LL;
	volatile uint32_t x172 = 8U;
	volatile int64_t t34 = -634118685425LL;

	t34 = ((x169-(x170-x171))-x172);

	if (t34 != 22808764LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	uint8_t x176 = UINT8_MAX;
	static volatile int64_t t35 = 7144074LL;

	t35 = ((x173-(x174-x175))-x176);

	if (t35 != -129LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x177 = 8339645628LLU;
	int16_t x178 = -1;
	static volatile int64_t x180 = -9LL;
	uint64_t t36 = 229LLU;

	t36 = ((x177-(x178-x179))-x180);

	if (t36 != 8339645637LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x190 = INT8_MIN;
	int32_t x191 = -1;
	int16_t x192 = 1;

	t37 = ((x189-(x190-x191))-x192);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x201 = UINT32_MAX;
	volatile int16_t x202 = INT16_MIN;
	int32_t x203 = 870364330;
	volatile int8_t x204 = -1;
	uint32_t t38 = 1U;

	t38 = ((x201-(x202-x203))-x204);

	if (t38 != 870397098U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x206 = -7765329;
	int64_t x207 = -1071155LL;
	int32_t x208 = INT32_MAX;
	volatile int64_t t39 = 3865LL;

	t39 = ((x205-(x206-x207))-x208);

	if (t39 != -2140788711LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = 0;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = -1;
	int8_t x212 = 1;
	static uint32_t t40 = UINT32_MAX;

	t40 = ((x209-(x210-x211))-x212);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	volatile uint64_t t41 = 4904LLU;

	t41 = ((x221-(x222-x223))-x224);

	if (t41 != 22687860444380LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = -1246;
	uint8_t x227 = 12U;
	int64_t x228 = 2518721049LL;
	int64_t t42 = -5229981429998LL;

	t42 = ((x225-(x226-x227))-x228);

	if (t42 != -4666203439LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x237 = -1828855620LL;
	int16_t x239 = -287;
	int64_t x240 = INT64_MIN;

	t43 = ((x237-(x238-x239))-x240);

	if (t43 != 9223372035025665754LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x241 = 18388340537875LLU;
	volatile int32_t x242 = INT32_MIN;
	static volatile int32_t x243 = -1;
	uint64_t t44 = 488551761657LLU;

	t44 = ((x241-(x242-x243))-x244);

	if (t44 != 18390488021650LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x245 = 4272;
	int64_t x248 = 7155LL;
	volatile int64_t t45 = 4763214903229LL;

	t45 = ((x245-(x246-x247))-x248);

	if (t45 != -35662LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x250 = INT64_MIN;
	uint16_t x252 = 33U;
	int64_t t46 = 93742LL;

	t46 = ((x249-(x250-x251))-x252);

	if (t46 != 9223372036854743006LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x254 = 28;
	static int16_t x255 = INT16_MIN;
	int8_t x256 = 1;
	static volatile int32_t t47 = -62444270;

	t47 = ((x253-(x254-x255))-x256);

	if (t47 != -32798) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x257 = -1;
	static int16_t x258 = INT16_MIN;
	static uint16_t x259 = 285U;
	volatile int16_t x260 = 226;
	volatile int32_t t48 = -52789910;

	t48 = ((x257-(x258-x259))-x260);

	if (t48 != 32826) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = -74;
	volatile uint16_t x262 = UINT16_MAX;
	static int32_t x263 = 109;
	uint32_t x264 = 22U;
	volatile uint32_t t49 = 621000105U;

	t49 = ((x261-(x262-x263))-x264);

	if (t49 != 4294901774U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x265 = UINT64_MAX;
	static int64_t x266 = INT64_MIN;
	uint64_t x267 = 8939653034120310LLU;
	int8_t x268 = -1;
	uint64_t t50 = 786526LLU;

	t50 = ((x265-(x266-x267))-x268);

	if (t50 != 9232311689888896118LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x269 = -248;
	int64_t x271 = INT64_MIN;
	int64_t x272 = -1LL;
	volatile uint64_t t51 = 333767231862LLU;

	t51 = ((x269-(x270-x271))-x272);

	if (t51 != 9223372036854775562LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x273 = 202;
	volatile uint8_t x274 = 0U;
	int64_t x275 = 33LL;
	uint64_t x276 = 1368189218879LLU;
	static uint64_t t52 = 238LLU;

	t52 = ((x273-(x274-x275))-x276);

	if (t52 != 18446742705520332972LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x281 = 24459291LL;
	int32_t x282 = INT32_MIN;
	int8_t x284 = 1;
	volatile int64_t t53 = -1793500079321LL;

	t53 = ((x281-(x282-x283))-x284);

	if (t53 != 24459290LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 0U;
	int8_t x287 = 1;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t54 = -55168;

	t54 = ((x285-(x286-x287))-x288);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x294 = 1255U;
	int64_t x295 = -1LL;
	uint16_t x296 = UINT16_MAX;
	int64_t t55 = -228068950636361LL;

	t55 = ((x293-(x294-x295))-x296);

	if (t55 != -66699LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = -1;
	int8_t x299 = 0;

	t56 = ((x297-(x298-x299))-x300);

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x302 = 312544888725006LL;
	static uint16_t x303 = UINT16_MAX;
	int32_t x304 = 28916;
	static volatile int64_t t57 = -4647749658LL;

	t57 = ((x301-(x302-x303))-x304);

	if (t57 != 9223059491966087420LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x306 = 13U;
	static uint8_t x307 = UINT8_MAX;
	int8_t x308 = INT8_MIN;

	t58 = ((x305-(x306-x307))-x308);

	if (t58 != 1031) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x309 = -1LL;
	static uint32_t x310 = 23U;
	uint64_t x311 = 4361479736687LLU;
	int32_t x312 = INT32_MIN;
	uint64_t t59 = 1821LLU;

	t59 = ((x309-(x310-x311))-x312);

	if (t59 != 4363627220311LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x314 = 19LL;
	int32_t x315 = INT32_MIN;
	static int16_t x316 = INT16_MIN;
	volatile int64_t t60 = 1LL;

	t60 = ((x313-(x314-x315))-x316);

	if (t60 != -2147483667LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x321 = INT64_MIN;
	static int32_t x322 = INT32_MIN;
	int64_t x323 = 0LL;
	volatile int8_t x324 = -21;
	volatile int64_t t61 = 0LL;

	t61 = ((x321-(x322-x323))-x324);

	if (t61 != -9223372034707292139LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x325 = 99U;
	uint64_t x326 = 6193LLU;
	uint8_t x327 = 11U;
	static int16_t x328 = INT16_MIN;
	uint64_t t62 = 16058881553733LLU;

	t62 = ((x325-(x326-x327))-x328);

	if (t62 != 26685LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x333 = 141620682180365773LL;
	uint16_t x334 = 469U;
	uint64_t x335 = UINT64_MAX;
	volatile uint64_t t63 = 238490431274682156LLU;

	t63 = ((x333-(x334-x335))-x336);

	if (t63 != 141620682180299768LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x337 = INT8_MIN;
	uint64_t x338 = 7LLU;
	int32_t x339 = -54889230;
	static uint16_t x340 = UINT16_MAX;
	uint64_t t64 = 2730128832450496LLU;

	t64 = ((x337-(x338-x339))-x340);

	if (t64 != 18446744073654596716LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = 0;
	int32_t x347 = 29;
	int16_t x348 = -2;
	int32_t t65 = 4422;

	t65 = ((x345-(x346-x347))-x348);

	if (t65 != -97) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x349 = -18340599;
	uint64_t x350 = 7364853144542LLU;
	int8_t x351 = INT8_MIN;
	int32_t x352 = 173841822;
	static volatile uint64_t t66 = 237946327695225416LLU;

	t66 = ((x349-(x350-x351))-x352);

	if (t66 != 18446736708664224525LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x357 = INT16_MIN;
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = -15157696LL;
	int32_t x360 = -1300;

	t67 = ((x357-(x358-x359))-x360);

	if (t67 != 9223372036839586644LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x361 = 117557537493355153LLU;
	volatile int64_t x363 = -8289LL;
	int64_t x364 = -1LL;
	uint64_t t68 = 3212881298LLU;

	t68 = ((x361-(x362-x363))-x364);

	if (t68 != 117557537493346812LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x365 = 35;
	volatile uint16_t x366 = 1U;
	uint8_t x367 = 0U;
	uint32_t x368 = 126800U;
	volatile uint32_t t69 = 1601U;

	t69 = ((x365-(x366-x367))-x368);

	if (t69 != 4294840530U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x369 = -106;
	int32_t x370 = -1;
	int16_t x372 = -1;
	volatile int32_t t70 = -32;

	t70 = ((x369-(x370-x371))-x372);

	if (t70 != 4498) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x373 = 32;
	int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	static uint64_t t71 = 4241171643187641583LLU;

	t71 = ((x373-(x374-x375))-x376);

	if (t71 != 18446744073709545507LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x377 = 172665914U;
	static uint16_t x378 = UINT16_MAX;
	int16_t x379 = -15467;
	uint32_t x380 = 9U;
	uint32_t t72 = 864545U;

	t72 = ((x377-(x378-x379))-x380);

	if (t72 != 172584903U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x382 = 26U;
	int16_t x383 = INT16_MIN;
	uint8_t x384 = 0U;
	volatile int32_t t73 = -1398485;

	t73 = ((x381-(x382-x383))-x384);

	if (t73 != -32795) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x385 = INT32_MIN;
	uint32_t x386 = UINT32_MAX;
	uint32_t x387 = UINT32_MAX;
	uint8_t x388 = 11U;
	uint32_t t74 = 49157236U;

	t74 = ((x385-(x386-x387))-x388);

	if (t74 != 2147483637U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x389 = -6518005;
	int8_t x390 = INT8_MAX;
	uint8_t x391 = UINT8_MAX;
	static volatile int32_t t75 = -63;

	t75 = ((x389-(x390-x391))-x392);

	if (t75 != 2140965771) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x397 = -1;
	static uint32_t x398 = 71U;
	static int32_t x399 = 267297;
	volatile uint64_t x400 = 715545957070LLU;
	uint64_t t76 = 8102074LLU;

	t76 = ((x397-(x398-x399))-x400);

	if (t76 != 18446743358163861771LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x402 = INT8_MIN;
	volatile int64_t x403 = -27001LL;
	static uint64_t x404 = 1066689605LLU;
	uint64_t t77 = 104563622LLU;

	t77 = ((x401-(x402-x403))-x404);

	if (t77 != 18446744072642835217LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x406 = INT8_MAX;
	int64_t x407 = -1LL;
	uint64_t x408 = UINT64_MAX;
	uint64_t t78 = 7940699559257544LLU;

	t78 = ((x405-(x406-x407))-x408);

	if (t78 != 128LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x409 = -982;
	int16_t x411 = INT16_MIN;
	int32_t t79 = 419359596;

	t79 = ((x409-(x410-x411))-x412);

	if (t79 != -33750) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x413 = 28U;
	int16_t x416 = INT16_MIN;
	volatile uint32_t t80 = 17U;

	t80 = ((x413-(x414-x415))-x416);

	if (t80 != 7521U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x417 = INT8_MAX;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = 28U;
	static int32_t x420 = -1;
	uint32_t t81 = 105961U;

	t81 = ((x417-(x418-x419))-x420);

	if (t81 != 2147483804U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x421 = -2023378541LL;
	uint8_t x422 = 21U;
	uint64_t x423 = UINT64_MAX;
	int32_t x424 = INT32_MIN;
	volatile uint64_t t82 = 79896426441029LLU;

	t82 = ((x421-(x422-x423))-x424);

	if (t82 != 124105085LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x425 = UINT64_MAX;
	int32_t x426 = INT32_MIN;
	static int32_t x427 = -6;
	uint64_t t83 = 3806584636LLU;

	t83 = ((x425-(x426-x427))-x428);

	if (t83 != 2147483628LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x429 = -1;
	uint16_t x430 = 1U;
	int32_t x431 = 202164502;
	volatile int64_t x432 = -1223LL;
	volatile int64_t t84 = -19229LL;

	t84 = ((x429-(x430-x431))-x432);

	if (t84 != 202165723LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x434 = INT8_MIN;
	volatile int32_t x435 = 17562521;
	int64_t x436 = INT64_MAX;
	volatile int64_t t85 = -2621LL;

	t85 = ((x433-(x434-x435))-x436);

	if (t85 != -9223372036837213168LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x441 = -1;
	static uint64_t x442 = UINT64_MAX;
	int16_t x443 = INT16_MIN;
	static int64_t x444 = INT64_MIN;
	uint64_t t86 = 491925640330LLU;

	t86 = ((x441-(x442-x443))-x444);

	if (t86 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x446 = UINT16_MAX;
	uint8_t x448 = UINT8_MAX;
	volatile int64_t t87 = 233092703755432131LL;

	t87 = ((x445-(x446-x447))-x448);

	if (t87 != -4291384145LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x453 = 0U;
	int16_t x454 = INT16_MIN;
	static uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MAX;
	static uint64_t t88 = 9194443LLU;

	t88 = ((x453-(x454-x455))-x456);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x457 = INT8_MIN;
	volatile uint16_t x458 = 322U;
	static int32_t t89 = 5;

	t89 = ((x457-(x458-x459))-x460);

	if (t89 != -190) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x461 = 103285215266968LLU;
	static uint16_t x462 = UINT16_MAX;
	uint8_t x463 = 102U;
	int32_t x464 = INT32_MIN;
	static volatile uint64_t t90 = 1689177033326189LLU;

	t90 = ((x461-(x462-x463))-x464);

	if (t90 != 103287362685183LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x465 = 3;
	static volatile int8_t x466 = INT8_MIN;
	int32_t x467 = -1;
	uint8_t x468 = UINT8_MAX;

	t91 = ((x465-(x466-x467))-x468);

	if (t91 != -125) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x469 = 4824898LLU;
	int8_t x470 = INT8_MIN;
	int16_t x471 = -3;
	volatile uint8_t x472 = UINT8_MAX;
	uint64_t t92 = 3616619686002LLU;

	t92 = ((x469-(x470-x471))-x472);

	if (t92 != 4824768LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x473 = -6104;
	int16_t x475 = -17;
	int32_t x476 = 50;
	int32_t t93 = 128;

	t93 = ((x473-(x474-x475))-x476);

	if (t93 != 26597) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x477 = -2;
	int16_t x478 = INT16_MIN;
	static volatile uint64_t t94 = 299871975LLU;

	t94 = ((x477-(x478-x479))-x480);

	if (t94 != 18446731409903055790LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x490 = -1;
	static int16_t x491 = -1;
	int16_t x492 = INT16_MIN;
	uint32_t t95 = 304517830U;

	t95 = ((x489-(x490-x491))-x492);

	if (t95 != 305176821U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x497 = INT8_MIN;
	static volatile int64_t x498 = -1LL;
	int16_t x499 = INT16_MIN;
	volatile int64_t t96 = -11711LL;

	t96 = ((x497-(x498-x499))-x500);

	if (t96 != -32936LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x501 = 2042224LL;
	int8_t x502 = INT8_MAX;
	int8_t x503 = -11;
	uint8_t x504 = 95U;
	int64_t t97 = 6959519935875LL;

	t97 = ((x501-(x502-x503))-x504);

	if (t97 != 2041991LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x505 = 20U;
	volatile int64_t x506 = INT64_MAX;
	static int64_t t98 = -126515565542694LL;

	t98 = ((x505-(x506-x507))-x508);

	if (t98 != -9223372036854775531LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x509 = INT32_MIN;
	int32_t x510 = INT32_MIN;
	static int8_t x511 = -2;
	static int32_t x512 = 358929589;
	static volatile int32_t t99 = -143;

	t99 = ((x509-(x510-x511))-x512);

	if (t99 != -358929591) { NG(); } else { ; }
	
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

