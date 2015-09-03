#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 23;
uint64_t x14 = UINT64_MAX;
static volatile uint8_t x20 = 9U;
int64_t t5 = -1LL;
static uint64_t x37 = 278438458740209LLU;
int16_t x50 = -6193;
int16_t x52 = INT16_MIN;
int32_t t11 = -426428;
volatile int64_t x57 = -1LL;
volatile int32_t t13 = 31521;
volatile int32_t x68 = INT32_MIN;
static uint16_t x70 = 13489U;
volatile int32_t x74 = INT32_MIN;
int32_t x75 = INT32_MIN;
int32_t x88 = -2;
uint64_t t19 = 3041LLU;
static volatile int32_t x96 = INT32_MIN;
volatile uint16_t x97 = 17U;
uint8_t x98 = UINT8_MAX;
int64_t x100 = -1LL;
uint16_t x109 = 830U;
volatile int32_t x115 = INT32_MIN;
static uint8_t x125 = UINT8_MAX;
uint32_t x126 = UINT32_MAX;
int32_t x128 = -1;
int64_t x132 = -5813LL;
volatile int64_t t27 = -1083278592545124LL;
int32_t x133 = -1;
volatile uint64_t t31 = 29015162054472640LLU;
uint64_t x151 = 80530256860LLU;
static int16_t x157 = 0;
int64_t t33 = 6177LL;
int64_t x161 = 25413436434545LL;
uint64_t x168 = 3LLU;
uint64_t t35 = 55LLU;
int64_t t36 = 8291817LL;
int64_t x179 = 106703445242094784LL;
uint64_t x180 = UINT64_MAX;
int32_t x184 = -5180;
int8_t x187 = INT8_MIN;
uint32_t x194 = 31U;
uint32_t t41 = 9373U;
int32_t x197 = INT32_MIN;
int32_t x200 = INT32_MIN;
int16_t x207 = INT16_MAX;
static int32_t x209 = INT32_MIN;
volatile uint8_t x212 = 87U;
uint32_t x214 = UINT32_MAX;
volatile int64_t x215 = -1LL;
int16_t x229 = INT16_MIN;
int16_t x230 = INT16_MIN;
int32_t t48 = 111;
int32_t x238 = 8365863;
static int32_t x239 = INT32_MIN;
volatile uint64_t x240 = 42LLU;
volatile uint64_t t50 = 105636319000LLU;
int64_t x243 = -135231703LL;
int8_t x246 = INT8_MAX;
int16_t x252 = INT16_MIN;
int8_t x254 = INT8_MIN;
volatile uint32_t t54 = 610U;
volatile int64_t t55 = -742963157626LL;
volatile uint16_t x263 = UINT16_MAX;
volatile uint64_t x267 = 12461403312748789LLU;
uint16_t x268 = 186U;
volatile int8_t x275 = INT8_MAX;
int64_t x276 = -1LL;
uint64_t x280 = UINT64_MAX;
volatile uint32_t t61 = 60U;
int16_t x285 = 534;
static uint32_t x288 = 6508436U;
static volatile int8_t x295 = -1;
int8_t x307 = 17;
int16_t x308 = 1011;
static uint64_t x325 = 2785119979258108LLU;
volatile int32_t t70 = -128071491;
volatile uint32_t t71 = 9415U;
int64_t x339 = INT64_MIN;
volatile uint32_t t73 = 57U;
uint64_t x348 = 34889609668205LLU;
static uint64_t t74 = 156124135513296535LLU;
int32_t x350 = -510447618;
volatile int32_t x351 = -1;
int32_t x353 = 10604853;
uint8_t x356 = 56U;
int16_t x357 = -4;
static uint16_t x361 = 5U;
volatile uint16_t x365 = 0U;
uint64_t t79 = 338563394229799LLU;
static int8_t x370 = INT8_MIN;
uint64_t x372 = 119LLU;
uint32_t x377 = 385898U;
uint64_t x380 = 109LLU;
static int8_t x386 = INT8_MIN;
uint8_t x387 = 0U;
int64_t t84 = 14666642534LL;
int32_t x406 = INT32_MIN;
uint8_t x408 = 9U;
volatile int64_t t86 = -5LL;
static uint16_t x409 = UINT16_MAX;
int64_t x412 = INT64_MIN;
static volatile int64_t t87 = 61LL;
volatile uint16_t x416 = UINT16_MAX;
int8_t x418 = INT8_MIN;
int32_t x419 = -1;
volatile int8_t x426 = INT8_MAX;
uint16_t x429 = UINT16_MAX;
uint16_t x431 = 555U;
uint64_t x447 = 769LLU;
volatile int64_t t94 = -45LL;
uint8_t x454 = 9U;
static int8_t x456 = -1;
uint8_t x464 = 5U;
int16_t x465 = 182;
uint32_t x467 = UINT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = 0;
	int16_t x3 = 6;
	int32_t x4 = INT32_MAX;

	t0 = ((x1-(x2^x3))+x4);

	if (t0 != 2147450873) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	static uint32_t x6 = UINT32_MAX;
	static int8_t x7 = INT8_MIN;
	uint16_t x8 = 434U;
	uint32_t t1 = 13353374U;

	t1 = ((x5-(x6^x7))+x8);

	if (t1 != 179U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -8;
	int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	int8_t x12 = 0;
	int32_t t2 = -7115986;

	t2 = ((x9-(x10^x11))+x12);

	if (t2 != -8) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 22116560U;
	int16_t x15 = INT16_MIN;
	static uint8_t x16 = 1U;
	static volatile uint64_t t3 = 44580394104604LLU;

	t3 = ((x13-(x14^x15))+x16);

	if (t3 != 22083794LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int16_t x18 = INT16_MIN;
	int64_t x19 = -6542317LL;
	int64_t t4 = 2LL;

	t4 = ((x17-(x18^x19))+x20);

	if (t4 != -6532107LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1089727410798LL;
	static int32_t x26 = 449;
	uint8_t x27 = 7U;
	int8_t x28 = 11;

	t5 = ((x25-(x26^x27))+x28);

	if (t5 != -1089727411241LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	uint32_t x30 = UINT32_MAX;
	volatile int64_t x31 = INT64_MIN;
	static int16_t x32 = INT16_MIN;
	volatile int64_t t6 = 11715439LL;

	t6 = ((x29-(x30^x31))+x32);

	if (t6 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 258855839660LLU;
	int32_t x34 = -1;
	static int32_t x35 = INT32_MAX;
	uint16_t x36 = 1U;
	static uint64_t t7 = 12873840374364181LLU;

	t7 = ((x33-(x34^x35))+x36);

	if (t7 != 261003323309LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = 4U;
	int64_t x39 = -2080725LL;
	int32_t x40 = -48;
	volatile uint64_t t8 = 85212LLU;

	t8 = ((x37-(x38^x39))+x40);

	if (t8 != 278438460820882LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int64_t x42 = -1LL;
	int32_t x43 = INT32_MAX;
	int32_t x44 = 237443119;
	volatile int64_t t9 = 2086199942748363441LL;

	t9 = ((x41-(x42^x43))+x44);

	if (t9 != 2384927022LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x51 = 8111801320476LLU;
	uint64_t t10 = 52492796LLU;

	t10 = ((x49-(x50^x51))+x52);

	if (t10 != 8111801261101LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = -1;
	volatile int16_t x54 = 478;
	volatile uint16_t x55 = 673U;
	static int8_t x56 = INT8_MAX;

	t11 = ((x53-(x54^x55))+x56);

	if (t11 != -769) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x58 = 29384LLU;
	int8_t x59 = INT8_MIN;
	static int8_t x60 = INT8_MIN;
	volatile uint64_t t12 = 45616576406LLU;

	t12 = ((x57-(x58^x59))+x60);

	if (t12 != 29239LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MIN;
	static volatile int16_t x64 = -1;

	t13 = ((x61-(x62^x63))+x64);

	if (t13 != 65279) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MAX;
	uint32_t x67 = 7712U;
	volatile uint32_t t14 = 1U;

	t14 = ((x65-(x66^x67))+x68);

	if (t14 != 2147425825U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x69 = UINT64_MAX;
	uint8_t x71 = 9U;
	volatile int8_t x72 = 1;
	uint64_t t15 = 3013435LLU;

	t15 = ((x69-(x70^x71))+x72);

	if (t15 != 18446744073709538120LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MAX;
	int16_t x76 = 3;
	volatile int32_t t16 = 1481;

	t16 = ((x73-(x74^x75))+x76);

	if (t16 != 32770) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	static volatile uint32_t x78 = 37829647U;
	static int16_t x79 = -7;
	int64_t x80 = -11LL;
	volatile int64_t t17 = 1LL;

	t17 = ((x77-(x78^x79))+x80);

	if (t17 != 37829503LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 288569137212LLU;
	static int8_t x86 = INT8_MAX;
	int32_t x87 = INT32_MAX;
	volatile uint64_t t18 = 166686564241119754LLU;

	t18 = ((x85-(x86^x87))+x88);

	if (t18 != 286421653690LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	volatile uint64_t x90 = 1266850136585LLU;
	static int32_t x91 = -1;
	int32_t x92 = 57845;

	t19 = ((x89-(x90^x91))+x92);

	if (t19 != 9223373303704970239LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = UINT32_MAX;
	volatile uint8_t x95 = 112U;
	volatile uint32_t t20 = 19541U;

	t20 = ((x93-(x94^x95))+x96);

	if (t20 != 2147483633U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x99 = 552273888393LLU;
	uint64_t t21 = 193537868LLU;

	t21 = ((x97-(x98^x99))+x100);

	if (t21 != 18446743521435663258LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x110 = -1LL;
	static int32_t x111 = -453;
	int32_t x112 = 0;
	static volatile int64_t t22 = -1LL;

	t22 = ((x109-(x110^x111))+x112);

	if (t22 != 378LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 1532048U;
	int32_t x114 = INT32_MIN;
	int16_t x116 = INT16_MAX;
	uint32_t t23 = 9U;

	t23 = ((x113-(x114^x115))+x116);

	if (t23 != 1564815U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 12U;
	static int32_t x118 = 6972;
	static int16_t x119 = 27;
	volatile int32_t x120 = INT32_MAX;
	volatile int32_t t24 = 4030546;

	t24 = ((x117-(x118^x119))+x120);

	if (t24 != 2147476708) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x121 = 274LLU;
	uint16_t x122 = 8U;
	int16_t x123 = -1;
	int32_t x124 = INT32_MAX;
	uint64_t t25 = 172036276817575LLU;

	t25 = ((x121-(x122^x123))+x124);

	if (t25 != 2147483930LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x127 = 35;
	volatile uint32_t t26 = 225U;

	t26 = ((x125-(x126^x127))+x128);

	if (t26 != 290U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x129 = -1;
	int64_t x130 = INT64_MIN;
	volatile int64_t x131 = -86056335071LL;

	t27 = ((x129-(x130^x131))+x132);

	if (t27 != -9223371950798446551LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x134 = INT16_MIN;
	volatile int32_t x135 = INT32_MIN;
	volatile uint32_t x136 = 3U;
	static volatile uint32_t t28 = 390343829U;

	t28 = ((x133-(x134^x135))+x136);

	if (t28 != 2147516418U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x137 = 4U;
	static int64_t x138 = INT64_MIN;
	int64_t x139 = -1LL;
	int8_t x140 = INT8_MAX;
	volatile int64_t t29 = 764740189436LL;

	t29 = ((x137-(x138^x139))+x140);

	if (t29 != -9223372036854775676LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x141 = UINT32_MAX;
	static volatile int32_t x142 = INT32_MIN;
	volatile int16_t x143 = INT16_MAX;
	uint16_t x144 = 2657U;
	volatile uint32_t t30 = 79264U;

	t30 = ((x141-(x142^x143))+x144);

	if (t30 != 2147453537U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x145 = UINT64_MAX;
	int16_t x146 = INT16_MAX;
	uint32_t x147 = 31U;
	static int16_t x148 = INT16_MIN;

	t31 = ((x145-(x146^x147))+x148);

	if (t31 != 18446744073709486111LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	static uint8_t x150 = UINT8_MAX;
	static int32_t x152 = INT32_MIN;
	volatile uint64_t t32 = 56280016973501LLU;

	t32 = ((x149-(x150^x151))+x152);

	if (t32 != 18446743988884327645LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x158 = -1LL;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MIN;

	t33 = ((x157-(x158^x159))+x160);

	if (t33 != -65535LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	uint16_t x164 = 355U;
	int64_t t34 = 155LL;

	t34 = ((x161-(x162^x163))+x164);

	if (t34 != 25413436434900LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x165 = UINT16_MAX;
	int64_t x166 = 2666387956LL;
	int32_t x167 = -1;

	t35 = ((x165-(x166^x167))+x168);

	if (t35 != 2666453495LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = 19;
	int32_t x170 = INT32_MAX;
	int64_t x171 = -1LL;
	static volatile int8_t x172 = -1;

	t36 = ((x169-(x170^x171))+x172);

	if (t36 != 2147483666LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MAX;
	volatile int64_t x178 = 5216LL;
	uint64_t t37 = 38479664LLU;

	t37 = ((x177-(x178^x179))+x180);

	if (t37 != 18340040630614937438LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x181 = 42U;
	int64_t x182 = 155306LL;
	uint8_t x183 = 5U;
	volatile int64_t t38 = -37LL;

	t38 = ((x181-(x182^x183))+x184);

	if (t38 != -160449LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	int32_t x188 = -1;
	volatile int32_t t39 = -115480;

	t39 = ((x185-(x186^x187))+x188);

	if (t39 != 65407) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = -28898938LL;
	static volatile int8_t x190 = INT8_MIN;
	volatile uint8_t x191 = 1U;
	int8_t x192 = -1;
	static int64_t t40 = -12158LL;

	t40 = ((x189-(x190^x191))+x192);

	if (t40 != -28898812LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	int32_t x196 = -2;

	t41 = ((x193-(x194^x195))+x196);

	if (t41 != 4294967263U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x198 = INT32_MAX;
	volatile int16_t x199 = -1;
	int32_t t42 = INT32_MIN;

	t42 = ((x197-(x198^x199))+x200);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x205 = -9;
	volatile int16_t x206 = -7610;
	static int8_t x208 = 7;
	int32_t t43 = 366744;

	t43 = ((x205-(x206^x207))+x208);

	if (t43 != 25157) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x210 = INT16_MIN;
	static uint8_t x211 = 39U;
	int32_t t44 = 36539567;

	t44 = ((x209-(x210^x211))+x212);

	if (t44 != -2147450832) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x213 = -1;
	volatile uint16_t x216 = UINT16_MAX;
	static int64_t t45 = -3LL;

	t45 = ((x213-(x214^x215))+x216);

	if (t45 != 4295032830LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x221 = -328LL;
	volatile int8_t x222 = 26;
	volatile int8_t x223 = -1;
	int16_t x224 = 3;
	volatile int64_t t46 = 33438747072215LL;

	t46 = ((x221-(x222^x223))+x224);

	if (t46 != -298LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = -15;
	int8_t x226 = 0;
	uint16_t x227 = 652U;
	int8_t x228 = 31;
	int32_t t47 = 7957;

	t47 = ((x225-(x226^x227))+x228);

	if (t47 != -636) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x231 = -1;
	int32_t x232 = 3;

	t48 = ((x229-(x230^x231))+x232);

	if (t48 != -65532) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x233 = 6U;
	uint32_t x234 = 772001791U;
	static int64_t x235 = INT64_MIN;
	int32_t x236 = -6661817;
	int64_t t49 = -4LL;

	t49 = ((x233-(x234^x235))+x236);

	if (t49 != 9223372036076112206LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x237 = 1;

	t50 = ((x237-(x238^x239))+x240);

	if (t50 != 2139117828LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = -1;
	volatile int64_t x242 = -1LL;
	uint32_t x244 = 975724572U;
	int64_t t51 = 300569268520768LL;

	t51 = ((x241-(x242^x243))+x244);

	if (t51 != 840492869LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x245 = UINT16_MAX;
	int8_t x247 = -14;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t52 = 607446U;

	t52 = ((x245-(x246^x247))+x248);

	if (t52 != 65649U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = INT16_MAX;
	static uint16_t x251 = 41U;
	int32_t t53 = 35;

	t53 = ((x249-(x250^x251))+x252);

	if (t53 != 2147418153) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = INT32_MAX;
	uint32_t x255 = UINT32_MAX;
	static uint8_t x256 = UINT8_MAX;

	t54 = ((x253-(x254^x255))+x256);

	if (t54 != 2147483775U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x257 = UINT8_MAX;
	int64_t x258 = -4269447325244LL;
	volatile uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MAX;

	t55 = ((x257-(x258^x259))+x260);

	if (t55 != 4273242659523LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x261 = -1;
	int16_t x262 = 3238;
	uint64_t x264 = 1231735190017044LLU;
	uint64_t t56 = 817468539LLU;

	t56 = ((x261-(x262^x263))+x264);

	if (t56 != 1231735189954746LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x265 = INT64_MAX;
	static int16_t x266 = INT16_MIN;
	static uint64_t t57 = 6634LLU;

	t57 = ((x265-(x266^x267))+x268);

	if (t57 != 9235833440167495620LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = -468398204735434LL;
	int32_t x270 = 648;
	uint64_t x271 = 38497628LLU;
	int64_t x272 = INT64_MAX;
	uint64_t t58 = 32634LLU;

	t58 = ((x269-(x270^x271))+x272);

	if (t58 != 9222903638611542113LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MAX;
	uint32_t x274 = 64042166U;
	int64_t t59 = -651645554860507820LL;

	t59 = ((x273-(x274^x275))+x276);

	if (t59 != 4230957877LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x277 = UINT8_MAX;
	uint64_t x278 = UINT64_MAX;
	uint8_t x279 = 93U;
	uint64_t t60 = 29081LLU;

	t60 = ((x277-(x278^x279))+x280);

	if (t60 != 348LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = -37309909;
	static volatile uint16_t x282 = UINT16_MAX;
	static int32_t x283 = INT32_MIN;
	uint32_t x284 = 116206U;

	t61 = ((x281-(x282^x283))+x284);

	if (t61 != 2110224410U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x286 = -3;
	int16_t x287 = -1;
	volatile uint32_t t62 = 259U;

	t62 = ((x285-(x286^x287))+x288);

	if (t62 != 6508968U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x293 = -1LL;
	int64_t x294 = -1LL;
	int32_t x296 = 28;
	int64_t t63 = 307212478104707415LL;

	t63 = ((x293-(x294^x295))+x296);

	if (t63 != 27LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x297 = -49;
	int16_t x298 = INT16_MIN;
	static volatile uint8_t x299 = 5U;
	int8_t x300 = -1;
	int32_t t64 = -4753;

	t64 = ((x297-(x298^x299))+x300);

	if (t64 != 32713) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = -1;
	static volatile int32_t x302 = INT32_MAX;
	int32_t x303 = INT32_MAX;
	int64_t x304 = 31LL;
	volatile int64_t t65 = -740550LL;

	t65 = ((x301-(x302^x303))+x304);

	if (t65 != 30LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MIN;
	static uint8_t x306 = 60U;
	volatile int32_t t66 = 445902890;

	t66 = ((x305-(x306^x307))+x308);

	if (t66 != 838) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x317 = 260724LL;
	uint16_t x318 = 57U;
	int16_t x319 = INT16_MIN;
	static volatile int8_t x320 = 49;
	int64_t t67 = -13616306970858LL;

	t67 = ((x317-(x318^x319))+x320);

	if (t67 != 293484LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = INT16_MIN;
	volatile int8_t x322 = INT8_MIN;
	uint64_t x323 = 14506492729LLU;
	int64_t x324 = 1032616LL;
	volatile uint64_t t68 = 831216288008LLU;

	t68 = ((x321-(x322^x323))+x324);

	if (t68 != 14507492591LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x326 = 6431218391LLU;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t69 = 15060863521640838LLU;

	t69 = ((x325-(x326^x327))+x328);

	if (t69 != 2785126410443685LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x329 = UINT16_MAX;
	static volatile int32_t x330 = INT32_MIN;
	int32_t x331 = -32100837;
	volatile int16_t x332 = INT16_MAX;

	t70 = ((x329-(x330^x331))+x332);

	if (t70 != -2115284509) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = 64567U;
	int8_t x334 = INT8_MAX;
	int32_t x335 = -68;
	uint16_t x336 = UINT16_MAX;

	t71 = ((x333-(x334^x335))+x336);

	if (t71 != 130163U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	volatile uint32_t x338 = 7345U;
	volatile uint64_t x340 = UINT64_MAX;
	uint64_t t72 = 3288247341116377LLU;

	t72 = ((x337-(x338^x339))+x340);

	if (t72 != 9223372036854735694LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MAX;
	static uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 41U;

	t73 = ((x341-(x342^x343))+x344);

	if (t73 != 2147450921U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = -1LL;
	volatile uint32_t x346 = 70036713U;
	int32_t x347 = -1;

	t74 = ((x345-(x346^x347))+x348);

	if (t74 != 34885384737622LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x349 = UINT16_MAX;
	static uint16_t x352 = 215U;
	int32_t t75 = 26564;

	t75 = ((x349-(x350^x351))+x352);

	if (t75 != -510381867) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x354 = 1U;
	uint32_t x355 = 7992773U;
	uint32_t t76 = 82U;

	t76 = ((x353-(x354^x355))+x356);

	if (t76 != 2612137U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x358 = 1226;
	volatile uint64_t x359 = UINT64_MAX;
	int64_t x360 = -2955LL;
	volatile uint64_t t77 = 15524803528160490LLU;

	t77 = ((x357-(x358^x359))+x360);

	if (t77 != 18446744073709549884LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int32_t x364 = -2837620;
	static volatile int32_t t78 = -7159;

	t78 = ((x361-(x362^x363))+x364);

	if (t78 != -2870382) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x366 = INT32_MIN;
	volatile int32_t x367 = INT32_MAX;
	uint64_t x368 = UINT64_MAX;

	t79 = ((x365-(x366^x367))+x368);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MAX;
	uint16_t x371 = UINT16_MAX;
	uint64_t t80 = 4LLU;

	t80 = ((x369-(x370^x371))+x372);

	if (t80 != 65655LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x378 = 36;
	int16_t x379 = 13964;
	volatile uint64_t t81 = 151485246LLU;

	t81 = ((x377-(x378^x379))+x380);

	if (t81 != 372015LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = -1LL;
	uint64_t x384 = 164399LLU;
	uint64_t t82 = 1LLU;

	t82 = ((x381-(x382^x383))+x384);

	if (t82 != 9223372036855005743LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = INT16_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t83 = 2;

	t83 = ((x385-(x386^x387))+x388);

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = INT64_MAX;
	int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	static int8_t x392 = INT8_MIN;

	t84 = ((x389-(x390^x391))+x392);

	if (t84 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x397 = INT64_MIN;
	uint64_t x398 = 1LLU;
	uint8_t x399 = 6U;
	int32_t x400 = -1;
	uint64_t t85 = 7006951916180LLU;

	t85 = ((x397-(x398^x399))+x400);

	if (t85 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = INT32_MIN;
	volatile int64_t x407 = INT64_MIN;

	t86 = ((x405-(x406^x407))+x408);

	if (t86 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x410 = -22398361956359LL;
	uint32_t x411 = 426U;

	t87 = ((x409-(x410^x411))+x412);

	if (t87 != -9223349638492753492LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x413 = INT64_MIN;
	volatile int16_t x414 = INT16_MIN;
	volatile uint64_t x415 = 163570472LLU;
	volatile uint64_t t88 = 423301488LLU;

	t88 = ((x413-(x414^x415))+x416);

	if (t88 != 9223372037018393815LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x417 = INT8_MIN;
	static uint16_t x420 = UINT16_MAX;
	volatile int32_t t89 = -280769;

	t89 = ((x417-(x418^x419))+x420);

	if (t89 != 65280) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x425 = INT16_MAX;
	uint8_t x427 = 2U;
	static uint64_t x428 = 41646LLU;
	volatile uint64_t t90 = 883294LLU;

	t90 = ((x425-(x426^x427))+x428);

	if (t90 != 74288LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x430 = -657986LL;
	static uint8_t x432 = 125U;
	static volatile int64_t t91 = 203529LL;

	t91 = ((x429-(x430^x431))+x432);

	if (t91 != 723175LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x433 = INT64_MIN;
	uint8_t x434 = UINT8_MAX;
	int8_t x435 = -1;
	static int16_t x436 = 70;
	int64_t t92 = 0LL;

	t92 = ((x433-(x434^x435))+x436);

	if (t92 != -9223372036854775482LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MIN;
	static int32_t x448 = INT32_MIN;
	static uint64_t t93 = 9974506083LLU;

	t93 = ((x445-(x446^x447))+x448);

	if (t93 != 18446744071562068735LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x449 = -1;
	int8_t x450 = INT8_MIN;
	uint8_t x451 = 24U;
	int64_t x452 = -34805317450901LL;

	t94 = ((x449-(x450^x451))+x452);

	if (t94 != -34805317450798LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x453 = INT64_MIN;
	volatile int16_t x455 = -1;
	int64_t t95 = 2279887866333LL;

	t95 = ((x453-(x454^x455))+x456);

	if (t95 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = INT16_MIN;
	uint8_t x458 = UINT8_MAX;
	uint64_t x459 = 1717156529LLU;
	volatile int16_t x460 = INT16_MIN;
	volatile uint64_t t96 = 531653596LLU;

	t96 = ((x457-(x458^x459))+x460);

	if (t96 != 18446744071992329650LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x461 = 29111347629648914LLU;
	static volatile int32_t x462 = -1;
	static volatile int16_t x463 = 1340;
	volatile uint64_t t97 = 3190458040LLU;

	t97 = ((x461-(x462^x463))+x464);

	if (t97 != 29111347629650260LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x466 = UINT32_MAX;
	uint8_t x468 = 51U;
	static volatile uint32_t t98 = 17202090U;

	t98 = ((x465-(x466^x467))+x468);

	if (t98 != 233U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = -27;
	int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MAX;
	static int8_t x472 = -1;
	static int64_t t99 = 12935LL;

	t99 = ((x469-(x470^x471))+x472);

	if (t99 != 9223372034707292133LL) { NG(); } else { ; }
	
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

