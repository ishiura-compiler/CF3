#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = 354995;
static int32_t x6 = 2021;
uint16_t x10 = UINT16_MAX;
uint64_t x12 = 216064871311243LLU;
int16_t x33 = -1;
int64_t x34 = -278207043082676150LL;
volatile int8_t x35 = INT8_MIN;
int64_t t5 = 11154537632LL;
int32_t x37 = 1393848;
uint32_t x39 = UINT32_MAX;
uint32_t x41 = 682907U;
uint32_t t7 = 134U;
uint64_t x58 = 4668862303239079127LLU;
int16_t x62 = -1;
static volatile uint64_t x68 = UINT64_MAX;
static uint64_t t13 = 49333017889LLU;
volatile int64_t x77 = INT64_MIN;
volatile int64_t x81 = 1LL;
volatile int8_t x82 = INT8_MIN;
volatile uint8_t x89 = UINT8_MAX;
volatile uint16_t x91 = UINT16_MAX;
static uint64_t t19 = 376LLU;
int32_t x120 = INT32_MAX;
volatile int16_t x126 = -1;
static uint8_t x129 = UINT8_MAX;
uint32_t x144 = 4853U;
static int32_t x164 = INT32_MIN;
int64_t t29 = 5LL;
uint16_t x167 = 4U;
volatile uint64_t t30 = 28LLU;
uint16_t x171 = 277U;
int64_t x177 = INT64_MAX;
volatile int8_t x178 = INT8_MIN;
uint64_t x189 = UINT64_MAX;
static uint32_t x190 = 2U;
static uint64_t t35 = 21720408919497475LLU;
int64_t x193 = -1LL;
volatile uint64_t t37 = 7056LLU;
uint8_t x209 = 9U;
int16_t x210 = INT16_MIN;
volatile int64_t t39 = -8743170LL;
uint16_t x220 = 760U;
int32_t x221 = INT32_MIN;
uint32_t x222 = 1U;
int64_t x226 = 1134LL;
volatile uint8_t x227 = 1U;
volatile uint32_t t44 = 27U;
static uint8_t x238 = 4U;
int64_t x244 = -1LL;
uint64_t x248 = 1655321741797171LLU;
volatile uint64_t t48 = 21394948903LLU;
static int16_t x254 = -5;
static int8_t x255 = -1;
int16_t x260 = INT16_MIN;
int32_t t53 = -6;
int8_t x274 = INT8_MAX;
static uint64_t x277 = 1754LLU;
static volatile int8_t x282 = INT8_MAX;
volatile int16_t x283 = INT16_MAX;
static int64_t x284 = -1LL;
uint16_t x286 = UINT16_MAX;
volatile int16_t x293 = INT16_MIN;
uint8_t x294 = 9U;
volatile uint8_t x300 = UINT8_MAX;
static int32_t x310 = INT32_MIN;
static volatile uint64_t x312 = UINT64_MAX;
int64_t x315 = 14989417332LL;
volatile int8_t x338 = 0;
int8_t x344 = -37;
int32_t x345 = -3;
int64_t x361 = INT64_MIN;
uint8_t x372 = UINT8_MAX;
int32_t x376 = -1;
int64_t t78 = 80933LL;
static uint64_t x386 = 2526746618LLU;
static volatile uint64_t t79 = 71541985LLU;
int32_t x392 = -1;
int16_t x394 = INT16_MIN;
int64_t x404 = 53290748851219LL;
uint8_t x405 = UINT8_MAX;
int32_t x410 = -1;
volatile uint16_t x418 = 0U;
int16_t x419 = -11;
static uint64_t t88 = 90701222LLU;
int8_t x436 = 5;
int16_t x441 = INT16_MIN;
static volatile int32_t t92 = 78680297;
static volatile int32_t t93 = -2868;
uint32_t t94 = 1337107U;
int64_t t95 = 20LL;
volatile int64_t x471 = INT64_MIN;
volatile uint64_t t97 = 342324616531106322LLU;
static volatile int16_t x474 = INT16_MIN;
volatile int8_t x478 = -1;


void f0(void) {
	static uint32_t x2 = UINT32_MAX;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 38510868477795LL;

	t0 = (((x1+x2)&x3)%x4);

	if (t0 != 354994LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 3269957753LL;
	static uint8_t x7 = 7U;
	uint64_t x8 = 550702641125LLU;
	uint64_t t1 = 53555272070059103LLU;

	t1 = (((x5+x6)&x7)%x8);

	if (t1 != 6LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	uint64_t t2 = 15265234298LLU;

	t2 = (((x9+x10)&x11)%x12);

	if (t2 != 32767LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 16846524530382285LLU;
	uint64_t x26 = 2205401245575902LLU;
	volatile int32_t x27 = -70;
	int8_t x28 = -1;
	volatile uint64_t t3 = 463LLU;

	t3 = (((x25+x26)&x27)%x28);

	if (t3 != 19051925775958186LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = UINT32_MAX;
	int32_t x30 = -3646;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MIN;
	volatile uint32_t t4 = 6102U;

	t4 = (((x29+x30)&x31)%x32);

	if (t4 != 61889U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x36 = 31LL;

	t5 = (((x33+x34)&x35)%x36);

	if (t5 != -26LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x38 = INT64_MIN;
	volatile int8_t x40 = INT8_MAX;
	static int64_t t6 = -1050826406598279LL;

	t6 = (((x37+x38)&x39)%x40);

	if (t6 != 23LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = 1;
	static volatile int8_t x43 = -2;
	uint8_t x44 = 30U;

	t7 = (((x41+x42)&x43)%x44);

	if (t7 != 18U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MIN;
	volatile uint32_t x50 = 23292U;
	static int64_t x51 = 70142689079771971LL;
	uint32_t x52 = 87U;
	int64_t t8 = -724279LL;

	t8 = (((x49+x50)&x51)%x52);

	if (t8 != 82LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x53 = 1;
	int32_t x54 = -109987;
	int16_t x55 = INT16_MAX;
	uint16_t x56 = 73U;
	volatile int32_t t9 = 5182;

	t9 = (((x53+x54)&x55)%x56);

	if (t9 != 62) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x57 = -35;
	int8_t x59 = -1;
	static volatile int16_t x60 = 99;
	static uint64_t t10 = 1113745LLU;

	t10 = (((x57+x58)&x59)%x60);

	if (t10 != 15LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = 4;
	uint32_t x63 = 76927U;
	int16_t x64 = -1;
	volatile uint32_t t11 = 6247U;

	t11 = (((x61+x62)&x63)%x64);

	if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = UINT8_MAX;
	static uint8_t x66 = 0U;
	int32_t x67 = INT32_MIN;
	static volatile uint64_t t12 = 156617464103529424LLU;

	t12 = (((x65+x66)&x67)%x68);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = UINT64_MAX;
	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	volatile int32_t x72 = -1;

	t13 = (((x69+x70)&x71)%x72);

	if (t13 != 4294967168LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 4781098265LLU;
	static int8_t x74 = INT8_MIN;
	uint64_t x75 = 7234577656LLU;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t14 = 271272457840194LLU;

	t14 = (((x73+x74)&x75)%x76);

	if (t14 != 4499489944LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	static int64_t t15 = -2404720639764210547LL;

	t15 = (((x77+x78)&x79)%x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x83 = INT64_MAX;
	int8_t x84 = INT8_MIN;
	int64_t t16 = 4676LL;

	t16 = (((x81+x82)&x83)%x84);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x85 = 95055U;
	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = 1968U;
	int8_t x88 = 7;
	uint32_t t17 = 7273U;

	t17 = (((x85+x86)&x87)%x88);

	if (t17 != 5U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x90 = 719534;
	int64_t x92 = 71467209503LL;
	int64_t t18 = 47213266LL;

	t18 = (((x89+x90)&x91)%x92);

	if (t18 != 64429LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x97 = -1;
	uint32_t x98 = 17U;
	static uint64_t x99 = 1897797531425LLU;
	int32_t x100 = INT32_MIN;

	t19 = (((x97+x98)&x99)%x100);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = 417117750401182886LL;
	int32_t x106 = INT32_MIN;
	int16_t x107 = INT16_MIN;
	static int16_t x108 = -1;
	int64_t t20 = 3715882LL;

	t20 = (((x105+x106)&x107)%x108);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x117 = 28281997438340LLU;
	uint8_t x118 = 103U;
	static volatile int32_t x119 = -2157;
	static volatile uint64_t t21 = 22LLU;

	t21 = (((x117+x118)&x119)%x120);

	if (t21 != 1785288948LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = -1;
	int16_t x122 = INT16_MAX;
	uint32_t x123 = 20U;
	uint16_t x124 = UINT16_MAX;
	volatile uint32_t t22 = 208664U;

	t22 = (((x121+x122)&x123)%x124);

	if (t22 != 20U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x125 = -1;
	uint8_t x127 = UINT8_MAX;
	uint8_t x128 = 4U;
	int32_t t23 = 5;

	t23 = (((x125+x126)&x127)%x128);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 367630573U;
	int64_t x132 = INT64_MAX;
	int64_t t24 = -16881525734757219LL;

	t24 = (((x129+x130)&x131)%x132);

	if (t24 != 237LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 3147107709523LLU;
	uint64_t x134 = 671282LLU;
	volatile int16_t x135 = 72;
	int32_t x136 = INT32_MAX;
	volatile uint64_t t25 = 6735202549LLU;

	t25 = (((x133+x134)&x135)%x136);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = 464868814;
	int16_t x143 = INT16_MIN;
	volatile uint32_t t26 = 82130622U;

	t26 = (((x141+x142)&x143)%x144);

	if (t26 != 4273U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = 30;
	static int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = 100U;
	volatile int64_t t27 = -2596356074507878817LL;

	t27 = (((x145+x146)&x147)%x148);

	if (t27 != -8LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x157 = -1;
	static int16_t x158 = INT16_MIN;
	static volatile int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t28 = 358602984LLU;

	t28 = (((x157+x158)&x159)%x160);

	if (t28 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = 28;
	int16_t x162 = INT16_MAX;
	volatile int64_t x163 = INT64_MIN;

	t29 = (((x161+x162)&x163)%x164);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x165 = UINT32_MAX;
	static volatile uint64_t x166 = 14513489955298433LLU;
	volatile uint8_t x168 = 2U;

	t30 = (((x165+x166)&x167)%x168);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x169 = 3U;
	static int64_t x170 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	int64_t t31 = -7705947173LL;

	t31 = (((x169+x170)&x171)%x172);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x179 = -1;
	int64_t x180 = INT64_MIN;
	int64_t t32 = 174536494LL;

	t32 = (((x177+x178)&x179)%x180);

	if (t32 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x181 = -1;
	static int8_t x182 = INT8_MIN;
	volatile int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MIN;
	int64_t t33 = -847LL;

	t33 = (((x181+x182)&x183)%x184);

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = INT32_MIN;
	volatile uint8_t x186 = UINT8_MAX;
	int8_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t34 = 238704;

	t34 = (((x185+x186)&x187)%x188);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x191 = INT8_MAX;
	int64_t x192 = INT64_MAX;

	t35 = (((x189+x190)&x191)%x192);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x194 = INT16_MIN;
	uint64_t x195 = 88495509342149LLU;
	int32_t x196 = -66252307;
	volatile uint64_t t36 = 2821LLU;

	t36 = (((x193+x194)&x195)%x196);

	if (t36 != 88495509342149LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = -1;
	int64_t x198 = -14550062LL;
	static volatile int16_t x199 = -16254;
	static uint64_t x200 = 3683993629276LLU;

	t37 = (((x197+x198)&x199)%x200);

	if (t37 != 661617408400LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x205 = 13383LLU;
	int32_t x206 = -1;
	int8_t x207 = INT8_MIN;
	volatile int8_t x208 = INT8_MAX;
	uint64_t t38 = 274609965766153733LLU;

	t38 = (((x205+x206)&x207)%x208);

	if (t38 != 104LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x211 = -523091399;
	volatile int64_t x212 = INT64_MIN;

	t39 = (((x209+x210)&x211)%x212);

	if (t39 != -523108343LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	int32_t x215 = -1;
	int64_t x216 = INT64_MIN;
	volatile int64_t t40 = -11062869LL;

	t40 = (((x213+x214)&x215)%x216);

	if (t40 != -32513LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x217 = INT32_MAX;
	volatile int16_t x218 = INT16_MIN;
	volatile int32_t x219 = INT32_MAX;
	int32_t t41 = 310434587;

	t41 = (((x217+x218)&x219)%x220);

	if (t41 != 199) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x223 = 1;
	int16_t x224 = -122;
	uint32_t t42 = 1390765620U;

	t42 = (((x221+x222)&x223)%x224);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x225 = INT64_MIN;
	static int32_t x228 = INT32_MAX;
	static volatile int64_t t43 = -114304542204LL;

	t43 = (((x225+x226)&x227)%x228);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x229 = 19U;
	uint8_t x230 = 12U;
	uint32_t x231 = UINT32_MAX;
	uint16_t x232 = UINT16_MAX;

	t44 = (((x229+x230)&x231)%x232);

	if (t44 != 31U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x233 = -35;
	int32_t x234 = -366;
	int32_t x235 = 1;
	int32_t x236 = -3789539;
	static volatile int32_t t45 = 341526925;

	t45 = (((x233+x234)&x235)%x236);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = INT8_MIN;
	int8_t x239 = INT8_MAX;
	volatile int16_t x240 = 260;
	volatile int32_t t46 = 0;

	t46 = (((x237+x238)&x239)%x240);

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x241 = -185237639;
	int64_t x242 = -121532111815LL;
	static int16_t x243 = INT16_MAX;
	int64_t t47 = 2484119LL;

	t47 = (((x241+x242)&x243)%x244);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x245 = 347799U;
	static int32_t x246 = 594;
	int8_t x247 = INT8_MIN;

	t48 = (((x245+x246)&x247)%x248);

	if (t48 != 348288LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x249 = 60026U;
	int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MAX;
	static int8_t x252 = -16;
	volatile int64_t t49 = 102485LL;

	t49 = (((x249+x250)&x251)%x252);

	if (t49 != 10LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x253 = INT16_MIN;
	uint8_t x256 = UINT8_MAX;
	static int32_t t50 = 3;

	t50 = (((x253+x254)&x255)%x256);

	if (t50 != -133) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x257 = 119099;
	uint8_t x258 = 0U;
	int8_t x259 = INT8_MIN;
	volatile int32_t t51 = -1272;

	t51 = (((x257+x258)&x259)%x260);

	if (t51 != 20736) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = 13;
	int64_t x262 = -1LL;
	volatile uint64_t x263 = 15848LLU;
	int8_t x264 = 4;
	static volatile uint64_t t52 = 70175020106813967LLU;

	t52 = (((x261+x262)&x263)%x264);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x265 = UINT16_MAX;
	int32_t x266 = -1;
	uint16_t x267 = UINT16_MAX;
	uint8_t x268 = UINT8_MAX;

	t53 = (((x265+x266)&x267)%x268);

	if (t53 != 254) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x273 = 2029308U;
	static int64_t x275 = INT64_MAX;
	int16_t x276 = 1716;
	int64_t t54 = 268LL;

	t54 = (((x273+x274)&x275)%x276);

	if (t54 != 1123LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x278 = INT8_MIN;
	static uint32_t x279 = 22U;
	uint64_t x280 = 1758428879248103007LLU;
	volatile uint64_t t55 = 294979421600262LLU;

	t55 = (((x277+x278)&x279)%x280);

	if (t55 != 18LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x281 = UINT16_MAX;
	static volatile int64_t t56 = -1425LL;

	t56 = (((x281+x282)&x283)%x284);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = -1;
	static volatile int64_t x287 = -70LL;
	uint16_t x288 = UINT16_MAX;
	volatile int64_t t57 = -1LL;

	t57 = (((x285+x286)&x287)%x288);

	if (t57 != 65466LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = -7;
	volatile int8_t x290 = INT8_MIN;
	static int64_t x291 = 60545494413LL;
	static int16_t x292 = INT16_MAX;
	volatile int64_t t58 = 11294869587412LL;

	t58 = (((x289+x290)&x291)%x292);

	if (t58 != 7895LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x295 = 257469;
	volatile int64_t x296 = INT64_MIN;
	static int64_t t59 = -75979464LL;

	t59 = (((x293+x294)&x295)%x296);

	if (t59 != 229385LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = -1;
	volatile int8_t x298 = -2;
	int8_t x299 = INT8_MAX;
	int32_t t60 = 1866;

	t60 = (((x297+x298)&x299)%x300);

	if (t60 != 125) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x301 = 163592720LLU;
	volatile int8_t x302 = INT8_MAX;
	int32_t x303 = -3;
	volatile uint32_t x304 = 16365916U;
	volatile uint64_t t61 = 138673499LLU;

	t61 = (((x301+x302)&x303)%x304);

	if (t61 != 16299601LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x309 = 445U;
	uint64_t x311 = 44396115LLU;
	uint64_t t62 = 941684LLU;

	t62 = (((x309+x310)&x311)%x312);

	if (t62 != 17LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x313 = -69807403LL;
	int8_t x314 = -3;
	uint16_t x316 = UINT16_MAX;
	int64_t t63 = -1413424LL;

	t63 = (((x313+x314)&x315)%x316);

	if (t63 != 52131LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x317 = -1;
	int16_t x318 = -406;
	int32_t x319 = -77067;
	int32_t x320 = -84712;
	volatile int32_t t64 = 629333503;

	t64 = (((x317+x318)&x319)%x320);

	if (t64 != -77215) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x321 = 40U;
	int64_t x322 = INT64_MIN;
	static int32_t x323 = INT32_MIN;
	int16_t x324 = 24;
	volatile int64_t t65 = 132098195LL;

	t65 = (((x321+x322)&x323)%x324);

	if (t65 != -8LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = INT8_MAX;
	static uint8_t x326 = 0U;
	uint32_t x327 = 1971963U;
	int64_t x328 = INT64_MAX;
	static volatile int64_t t66 = -13LL;

	t66 = (((x325+x326)&x327)%x328);

	if (t66 != 123LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x333 = INT16_MAX;
	volatile int8_t x334 = -1;
	uint64_t x335 = 7658LLU;
	static int32_t x336 = INT32_MAX;
	uint64_t t67 = 757LLU;

	t67 = (((x333+x334)&x335)%x336);

	if (t67 != 7658LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x337 = INT32_MIN;
	volatile uint16_t x339 = 707U;
	int8_t x340 = -1;
	static volatile int32_t t68 = 62;

	t68 = (((x337+x338)&x339)%x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x341 = 1U;
	volatile int8_t x342 = -1;
	int32_t x343 = -263465539;
	volatile int32_t t69 = 66760;

	t69 = (((x341+x342)&x343)%x344);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x346 = UINT16_MAX;
	int64_t x347 = INT64_MIN;
	int16_t x348 = -1;
	volatile int64_t t70 = 615346309167LL;

	t70 = (((x345+x346)&x347)%x348);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x349 = 58838685081306089LLU;
	int16_t x350 = -31;
	int32_t x351 = INT32_MAX;
	uint64_t x352 = 334038LLU;
	static uint64_t t71 = 50269867251LLU;

	t71 = (((x349+x350)&x351)%x352);

	if (t71 != 104982LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x353 = 31741398710LLU;
	int8_t x354 = 1;
	static uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 6LLU;
	volatile uint64_t t72 = 129181803458216484LLU;

	t72 = (((x353+x354)&x355)%x356);

	if (t72 != 3LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x357 = 0;
	static volatile uint64_t x358 = 1446094182193527LLU;
	int16_t x359 = -1;
	int16_t x360 = INT16_MAX;
	uint64_t t73 = 26461185773LLU;

	t73 = (((x357+x358)&x359)%x360);

	if (t73 != 14993LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x362 = 5783576286LLU;
	int32_t x363 = INT32_MIN;
	static volatile int64_t x364 = -1LL;
	static volatile uint64_t t74 = 160490863883607LLU;

	t74 = (((x361+x362)&x363)%x364);

	if (t74 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MAX;
	uint16_t x367 = 352U;
	int16_t x368 = INT16_MIN;
	int64_t t75 = 111315860433249LL;

	t75 = (((x365+x366)&x367)%x368);

	if (t75 != 352LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x369 = 938U;
	volatile int16_t x370 = -1;
	static uint64_t x371 = 3LLU;
	static uint64_t t76 = 8910LLU;

	t76 = (((x369+x370)&x371)%x372);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x373 = -11;
	int64_t x374 = -761831LL;
	int32_t x375 = 156068;
	volatile int64_t t77 = -15924075LL;

	t77 = (((x373+x374)&x375)%x376);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x381 = 31802LL;
	int32_t x382 = 15;
	volatile int16_t x383 = -1;
	volatile uint16_t x384 = 2174U;

	t78 = (((x381+x382)&x383)%x384);

	if (t78 != 1381LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x385 = INT8_MIN;
	static int64_t x387 = INT64_MIN;
	int64_t x388 = -17116995267LL;

	t79 = (((x385+x386)&x387)%x388);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x389 = 3U;
	static int32_t x390 = INT32_MIN;
	volatile int16_t x391 = INT16_MIN;
	static volatile int32_t t80 = -602;

	t80 = (((x389+x390)&x391)%x392);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = INT64_MAX;
	int64_t x395 = -1LL;
	volatile int32_t x396 = -4378;
	static volatile int64_t t81 = 0LL;

	t81 = (((x393+x394)&x395)%x396);

	if (t81 != 129LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x397 = 13993981274LLU;
	int64_t x398 = 120885467LL;
	int32_t x399 = -2997;
	uint8_t x400 = UINT8_MAX;
	uint64_t t82 = 2206LLU;

	t82 = (((x397+x398)&x399)%x400);

	if (t82 != 97LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x401 = 27;
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = 22;
	uint64_t t83 = 3579682172559475LLU;

	t83 = (((x401+x402)&x403)%x404);

	if (t83 != 18LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x406 = 14U;
	int8_t x407 = -4;
	uint64_t x408 = 1533618779087LLU;
	static volatile uint64_t t84 = 3886LLU;

	t84 = (((x405+x406)&x407)%x408);

	if (t84 != 268LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 54U;
	volatile int32_t x411 = 2967;
	uint64_t x412 = UINT64_MAX;
	static uint64_t t85 = 27LLU;

	t85 = (((x409+x410)&x411)%x412);

	if (t85 != 21LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x417 = -1;
	uint8_t x420 = UINT8_MAX;
	int32_t t86 = 3;

	t86 = (((x417+x418)&x419)%x420);

	if (t86 != -11) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x421 = 15817632392645LLU;
	static volatile uint64_t x422 = 67618491901836LLU;
	int64_t x423 = -1LL;
	uint32_t x424 = UINT32_MAX;
	volatile uint64_t t87 = 654337020214797LLU;

	t87 = (((x421+x422)&x423)%x424);

	if (t87 != 2089621811LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x425 = INT8_MIN;
	static uint64_t x426 = 103621856328571754LLU;
	int8_t x427 = -57;
	int8_t x428 = INT8_MIN;

	t88 = (((x425+x426)&x427)%x428);

	if (t88 != 103621856328571586LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x429 = -1;
	int32_t x430 = -11110;
	int8_t x431 = INT8_MAX;
	volatile int32_t x432 = INT32_MIN;
	static volatile int32_t t89 = 86;

	t89 = (((x429+x430)&x431)%x432);

	if (t89 != 25) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x433 = INT64_MIN;
	volatile int16_t x434 = 1;
	uint32_t x435 = 4U;
	static volatile int64_t t90 = 268997608LL;

	t90 = (((x433+x434)&x435)%x436);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x442 = INT16_MIN;
	static int16_t x443 = INT16_MAX;
	static uint16_t x444 = UINT16_MAX;
	int32_t t91 = -59;

	t91 = (((x441+x442)&x443)%x444);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = INT16_MAX;
	volatile int16_t x446 = -1;
	int8_t x447 = INT8_MAX;
	int32_t x448 = -1;

	t92 = (((x445+x446)&x447)%x448);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x449 = -1;
	int16_t x450 = INT16_MAX;
	uint16_t x451 = 5U;
	int8_t x452 = 2;

	t93 = (((x449+x450)&x451)%x452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x453 = 55U;
	static int16_t x454 = -1;
	volatile uint32_t x455 = UINT32_MAX;
	uint8_t x456 = 16U;

	t94 = (((x453+x454)&x455)%x456);

	if (t94 != 6U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x461 = INT16_MIN;
	uint8_t x462 = 0U;
	int8_t x463 = 0;
	volatile int64_t x464 = -1LL;

	t95 = (((x461+x462)&x463)%x464);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x465 = INT32_MAX;
	uint64_t x466 = 26658404137906LLU;
	volatile int16_t x467 = -11;
	static int16_t x468 = INT16_MIN;
	volatile uint64_t t96 = 7985LLU;

	t96 = (((x465+x466)&x467)%x468);

	if (t96 != 26660551621553LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x469 = 48176LLU;
	static int32_t x470 = 890;
	volatile uint16_t x472 = UINT16_MAX;

	t97 = (((x469+x470)&x471)%x472);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x473 = UINT32_MAX;
	volatile int64_t x475 = INT64_MIN;
	static volatile int64_t x476 = INT64_MAX;
	int64_t t98 = -2899LL;

	t98 = (((x473+x474)&x475)%x476);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x477 = INT8_MIN;
	uint64_t x479 = 15080759684291545LLU;
	int8_t x480 = INT8_MIN;
	uint64_t t99 = 221278713224823792LLU;

	t99 = (((x477+x478)&x479)%x480);

	if (t99 != 15080759684291417LLU) { NG(); } else { ; }
	
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

