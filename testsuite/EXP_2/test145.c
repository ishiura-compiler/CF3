#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = UINT16_MAX;
int32_t t1 = 202765653;
uint8_t x9 = 12U;
static int16_t x19 = -1;
int64_t x21 = -43415801LL;
int64_t t5 = 10LL;
uint8_t x25 = 4U;
volatile int16_t x29 = -1;
volatile uint64_t t7 = 85411LLU;
volatile uint32_t x40 = 395U;
volatile uint64_t t9 = 4290175209LLU;
uint16_t x55 = 14579U;
int32_t x56 = -1;
int32_t x73 = INT32_MIN;
int16_t x74 = 1868;
int64_t x92 = INT64_MAX;
static int64_t t16 = 23267539662LL;
static int8_t x99 = -7;
volatile uint64_t x106 = 5107187LLU;
int32_t x110 = -1;
static int16_t x126 = -4118;
int64_t x127 = -291895877844937LL;
uint64_t t23 = 4354729621212LLU;
static volatile int64_t x147 = 2084382692LL;
static uint64_t x155 = 119116193965LLU;
volatile int32_t x156 = -1;
int8_t x158 = -56;
uint8_t x161 = 1U;
uint16_t x169 = UINT16_MAX;
int64_t x170 = -1LL;
volatile uint16_t x178 = 115U;
volatile int32_t t33 = -363409823;
int64_t x183 = -9527467096607LL;
int64_t x187 = -1LL;
int32_t x194 = -1;
uint16_t x195 = 302U;
volatile int32_t x207 = -1;
volatile uint16_t x213 = UINT16_MAX;
static int8_t x223 = -1;
int32_t x225 = INT32_MAX;
int8_t x234 = -1;
volatile uint8_t x245 = 26U;
volatile int16_t x254 = INT16_MIN;
volatile int32_t t48 = 1958037;
static uint64_t x265 = 7LLU;
static int16_t x266 = INT16_MIN;
int8_t x270 = INT8_MAX;
int64_t x271 = INT64_MIN;
int8_t x275 = -1;
uint64_t x286 = 16603766826LLU;
static int16_t x288 = INT16_MIN;
uint8_t x303 = 1U;
int64_t t56 = -1219LL;
uint16_t x306 = 82U;
uint64_t x313 = 4419767633742249119LLU;
uint64_t t59 = 5237594007012871LLU;
static int32_t x321 = -528803;
int16_t x333 = -59;
int32_t x334 = -22169345;
volatile int64_t t62 = 8759372655894199LL;
volatile int64_t x339 = INT64_MIN;
uint64_t x340 = 30005228136LLU;
int32_t x341 = -44;
int64_t x342 = INT64_MAX;
uint32_t x345 = UINT32_MAX;
int8_t x349 = 52;
int8_t x350 = 4;
int64_t x354 = -6348568211LL;
int16_t x359 = 9053;
volatile int64_t t70 = -33895110686295LL;
volatile uint64_t t71 = 3519LLU;
volatile uint64_t t72 = 2129143807553963LLU;
int8_t x377 = 1;
uint32_t x379 = 46831178U;
int16_t x380 = 14;
volatile uint64_t t73 = 925967LLU;
int16_t x389 = INT16_MIN;
int16_t x399 = INT16_MIN;
volatile int32_t t77 = 32476;
static volatile uint64_t t78 = 18641036LLU;
int32_t x418 = -413;
int8_t x428 = -1;
static uint8_t x442 = 5U;
static uint32_t t87 = 118680401U;
static volatile int16_t x445 = INT16_MAX;
volatile uint16_t x448 = 375U;
volatile int16_t x450 = INT16_MIN;
uint32_t x452 = UINT32_MAX;
uint32_t x453 = 7842510U;
volatile uint64_t t90 = 661390362979248373LLU;
volatile uint16_t x457 = 1U;
volatile uint64_t t91 = 425770103895LLU;
uint32_t x466 = 494177722U;
uint8_t x472 = UINT8_MAX;
int32_t t93 = 13;
volatile uint32_t x499 = UINT32_MAX;
uint8_t x507 = 19U;
uint16_t x509 = 10100U;


void f0(void) {
	static int8_t x1 = 0;
	int32_t x2 = 11822535;
	int16_t x3 = INT16_MAX;
	int32_t t0 = -809450773;

	t0 = ((x1|(x2+x3))-x4);

	if (t0 != 11789767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MAX;
	int32_t x8 = -25700253;

	t1 = ((x5|(x6+x7))-x8);

	if (t1 != 25700251) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 74916421860421871LLU;
	int8_t x12 = INT8_MAX;
	uint64_t t2 = 76LLU;

	t2 = ((x9|(x10+x11))-x12);

	if (t2 != 74916421860487279LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int64_t x14 = 33856LL;
	static uint8_t x15 = 0U;
	static int16_t x16 = -11;
	volatile int64_t t3 = -5099815763747312LL;

	t3 = ((x13|(x14+x15))-x16);

	if (t3 != -9223372036854741941LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 23909672LL;
	volatile uint8_t x18 = 1U;
	static int8_t x20 = 0;
	volatile int64_t t4 = -1167120665210249LL;

	t4 = ((x17|(x18+x19))-x20);

	if (t4 != 23909672LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 1U;
	static int16_t x23 = -1;
	volatile int16_t x24 = INT16_MIN;

	t5 = ((x21|(x22+x23))-x24);

	if (t5 != -43383033LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = -1;
	static volatile int64_t x27 = -332825350LL;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 263790875327389LL;

	t6 = ((x25|(x26+x27))-x28);

	if (t6 != 9223372036521950461LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x30 = -10224;
	int16_t x31 = INT16_MAX;
	static uint64_t x32 = UINT64_MAX;

	t7 = ((x29|(x30+x31))-x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 3;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	uint32_t t8 = 3U;

	t8 = ((x37|(x38+x39))-x40);

	if (t8 != 2147483508U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 2353994494LLU;
	int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MAX;
	int8_t x44 = 1;

	t9 = ((x41|(x42+x43))-x44);

	if (t9 != 9223372039208796158LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 7U;
	int32_t x54 = 2;
	int32_t t10 = -1893;

	t10 = ((x53|(x54+x55))-x56);

	if (t10 != 14584) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	static volatile int16_t x58 = 0;
	uint64_t x59 = 765LLU;
	int8_t x60 = -2;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x57|(x58+x59))-x60);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MIN;
	int8_t x67 = -1;
	int64_t x68 = INT64_MIN;
	volatile int64_t t12 = 425299434998665LL;

	t12 = ((x65|(x66+x67))-x68);

	if (t12 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x69 = INT16_MIN;
	uint16_t x70 = UINT16_MAX;
	volatile int64_t x71 = INT64_MIN;
	uint32_t x72 = 2U;
	int64_t t13 = -122388560LL;

	t13 = ((x69|(x70+x71))-x72);

	if (t13 != -3LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x75 = 46U;
	volatile uint32_t x76 = 12747U;
	static volatile uint32_t t14 = 16088U;

	t14 = ((x73|(x74+x75))-x76);

	if (t14 != 2147472815U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -4;
	int32_t x78 = 344168243;
	static uint32_t x79 = 91U;
	uint8_t x80 = 89U;
	volatile uint32_t t15 = 410U;

	t15 = ((x77|(x78+x79))-x80);

	if (t15 != 4294967205U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = -1LL;
	uint8_t x91 = UINT8_MAX;

	t16 = ((x89|(x90+x91))-x92);

	if (t16 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x97 = INT32_MIN;
	uint16_t x98 = UINT16_MAX;
	volatile int16_t x100 = -1;
	int32_t t17 = -1;

	t17 = ((x97|(x98+x99))-x100);

	if (t17 != -2147418119) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x101 = -1;
	int16_t x102 = INT16_MIN;
	int8_t x103 = -1;
	int8_t x104 = -2;
	volatile int32_t t18 = -151011488;

	t18 = ((x101|(x102+x103))-x104);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x105 = 44U;
	static uint64_t x107 = UINT64_MAX;
	int32_t x108 = 1287594;
	volatile uint64_t t19 = 63273827016366LLU;

	t19 = ((x105|(x106+x107))-x108);

	if (t19 != 3819604LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x109 = 0U;
	int16_t x111 = INT16_MAX;
	volatile int8_t x112 = INT8_MIN;
	int32_t t20 = -257452;

	t20 = ((x109|(x110+x111))-x112);

	if (t20 != 32894) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = -1;
	volatile int16_t x118 = INT16_MIN;
	volatile int64_t x119 = 3915802LL;
	uint16_t x120 = UINT16_MAX;
	volatile int64_t t21 = -61030545128LL;

	t21 = ((x117|(x118+x119))-x120);

	if (t21 != -65536LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = -1;
	int64_t x122 = -235058693526LL;
	static int16_t x123 = INT16_MIN;
	uint16_t x124 = 236U;
	int64_t t22 = -1428609526LL;

	t22 = ((x121|(x122+x123))-x124);

	if (t22 != -237LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = INT64_MAX;
	static volatile uint64_t x128 = 413959LLU;

	t23 = ((x125|(x126+x127))-x128);

	if (t23 != 18446744073709137656LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = 14;
	int8_t x130 = INT8_MAX;
	static int8_t x131 = INT8_MIN;
	uint32_t x132 = 495848U;
	volatile uint32_t t24 = 392205437U;

	t24 = ((x129|(x130+x131))-x132);

	if (t24 != 4294471447U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x141 = INT64_MIN;
	int16_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	volatile int32_t x144 = -16366963;
	int64_t t25 = -2141470804LL;

	t25 = ((x141|(x142+x143))-x144);

	if (t25 != -9223372036838408591LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x145 = 3839773564415LL;
	int8_t x146 = INT8_MIN;
	static volatile int8_t x148 = -51;
	static int64_t t26 = 2LL;

	t26 = ((x145|(x146+x147))-x148);

	if (t26 != 3841789526066LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MIN;
	volatile uint64_t t27 = 85034608375707762LLU;

	t27 = ((x153|(x154+x155))-x156);

	if (t27 != 116968710400LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x157 = INT64_MAX;
	int32_t x159 = INT32_MAX;
	uint64_t x160 = UINT64_MAX;
	uint64_t t28 = 121027729393LLU;

	t28 = ((x157|(x158+x159))-x160);

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x162 = 3869U;
	uint64_t x163 = UINT64_MAX;
	static volatile int32_t x164 = 51;
	uint64_t t29 = 6072572423271537233LLU;

	t29 = ((x161|(x162+x163))-x164);

	if (t29 != 3818LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x165 = INT32_MAX;
	int32_t x166 = -148458973;
	static int16_t x167 = -1;
	int32_t x168 = -43;
	volatile int32_t t30 = 5;

	t30 = ((x165|(x166+x167))-x168);

	if (t30 != 42) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x171 = UINT16_MAX;
	static int16_t x172 = -1;
	volatile int64_t t31 = 9611518245280617LL;

	t31 = ((x169|(x170+x171))-x172);

	if (t31 != 65536LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = -1;
	int16_t x174 = -1;
	int16_t x175 = INT16_MAX;
	static int32_t x176 = -126;
	volatile int32_t t32 = 0;

	t32 = ((x173|(x174+x175))-x176);

	if (t32 != 125) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = INT16_MIN;
	static int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MAX;

	t33 = ((x177|(x178+x179))-x180);

	if (t33 != -32780) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x181 = UINT8_MAX;
	volatile int16_t x182 = INT16_MIN;
	int64_t x184 = -19817184335409LL;
	volatile int64_t t34 = 28555LL;

	t34 = ((x181|(x182+x183))-x184);

	if (t34 != 10289717206064LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x186 = INT32_MIN;
	static int64_t x188 = INT64_MIN;
	int64_t t35 = 884308241229LL;

	t35 = ((x185|(x186+x187))-x188);

	if (t35 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x193 = 630224179263LLU;
	int16_t x196 = INT16_MAX;
	uint64_t t36 = 59904586096293LLU;

	t36 = ((x193|(x194+x195))-x196);

	if (t36 != 630224146752LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = -2196959;
	static int64_t x198 = -248292621LL;
	static int16_t x199 = -1;
	int8_t x200 = -1;
	volatile int64_t t37 = 5532441626865LL;

	t37 = ((x197|(x198+x199))-x200);

	if (t37 != -34060LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x201 = UINT64_MAX;
	volatile uint16_t x202 = UINT16_MAX;
	uint8_t x203 = 0U;
	int8_t x204 = 34;
	volatile uint64_t t38 = 733375LLU;

	t38 = ((x201|(x202+x203))-x204);

	if (t38 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x205 = INT64_MAX;
	int16_t x206 = -1;
	int32_t x208 = 52509;
	volatile int64_t t39 = 6666202LL;

	t39 = ((x205|(x206+x207))-x208);

	if (t39 != -52510LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x214 = INT32_MAX;
	static uint64_t x215 = 2571744036LLU;
	volatile uint8_t x216 = 2U;
	uint64_t t40 = 1062993653420758706LLU;

	t40 = ((x213|(x214+x215))-x216);

	if (t40 != 4719247357LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = 3561232LL;
	int8_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -1LL;
	static volatile int64_t t41 = 2043887485LL;

	t41 = ((x217|(x218+x219))-x220);

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x221 = 1U;
	uint16_t x222 = 29039U;
	int32_t x224 = 24480037;
	int32_t t42 = 1599551;

	t42 = ((x221|(x222+x223))-x224);

	if (t42 != -24450998) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x226 = UINT32_MAX;
	static uint64_t x227 = 2588743LLU;
	int64_t x228 = 3820144799466LL;
	volatile uint64_t t43 = 92720388LLU;

	t43 = ((x225|(x226+x227))-x228);

	if (t43 != 18446740260007203093LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x233 = 1U;
	volatile uint8_t x235 = UINT8_MAX;
	int32_t x236 = INT32_MAX;
	static volatile int32_t t44 = 64497578;

	t44 = ((x233|(x234+x235))-x236);

	if (t44 != -2147483392) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x237 = -1;
	uint64_t x238 = 8702879192379602867LLU;
	uint8_t x239 = 7U;
	static volatile int16_t x240 = INT16_MAX;
	uint64_t t45 = 158269583938LLU;

	t45 = ((x237|(x238+x239))-x240);

	if (t45 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x241 = 13U;
	static volatile int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	int16_t x244 = -12;
	volatile int32_t t46 = -3;

	t46 = ((x241|(x242+x243))-x244);

	if (t46 != -32871) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x246 = 201884593518807841LLU;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = 22U;
	static uint64_t t47 = 96570671186LLU;

	t47 = ((x245|(x246+x247))-x248);

	if (t47 != 201884593518807717LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = -76;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -1795;

	t48 = ((x253|(x254+x255))-x256);

	if (t48 != 1719) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x267 = INT32_MAX;
	int8_t x268 = INT8_MAX;
	static uint64_t t49 = 2256558431792357869LLU;

	t49 = ((x265|(x266+x267))-x268);

	if (t49 != 2147450752LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x269 = UINT32_MAX;
	int32_t x272 = 162701;
	int64_t t50 = -1675794242LL;

	t50 = ((x269|(x270+x271))-x272);

	if (t50 != -9223372032559971214LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x273 = INT32_MIN;
	int8_t x274 = -5;
	int64_t x276 = INT64_MIN;
	int64_t t51 = -122299LL;

	t51 = ((x273|(x274+x275))-x276);

	if (t51 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x281 = INT64_MIN;
	static int8_t x282 = INT8_MIN;
	uint16_t x283 = 25U;
	uint32_t x284 = UINT32_MAX;
	int64_t t52 = -15280726329LL;

	t52 = ((x281|(x282+x283))-x284);

	if (t52 != -4294967398LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x285 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	uint64_t t53 = 109902LLU;

	t53 = ((x285|(x286+x287))-x288);

	if (t53 != 17179901951LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x293 = 0;
	static int64_t x294 = INT64_MIN;
	static int64_t x295 = 648758617796432LL;
	uint16_t x296 = 1784U;
	volatile int64_t t54 = 16LL;

	t54 = ((x293|(x294+x295))-x296);

	if (t54 != -9222723278236981160LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x297 = INT16_MIN;
	volatile uint64_t x298 = 12LLU;
	static volatile int16_t x299 = INT16_MIN;
	static int64_t x300 = -1LL;
	volatile uint64_t t55 = 897967206311LLU;

	t55 = ((x297|(x298+x299))-x300);

	if (t55 != 18446744073709518861LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x301 = INT32_MIN;
	static uint8_t x302 = 2U;
	static int64_t x304 = 29683LL;

	t56 = ((x301|(x302+x303))-x304);

	if (t56 != -2147513328LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x305 = -1;
	int32_t x307 = -1277471;
	int32_t x308 = 2;
	int32_t t57 = -462820445;

	t57 = ((x305|(x306+x307))-x308);

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x309 = -777;
	int64_t x310 = -1LL;
	int16_t x311 = -1;
	int8_t x312 = INT8_MIN;
	volatile int64_t t58 = -741LL;

	t58 = ((x309|(x310+x311))-x312);

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	static uint32_t x316 = UINT32_MAX;

	t59 = ((x313|(x314+x315))-x316);

	if (t59 != 18446744069414567168LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x322 = 14884657LLU;
	int32_t x323 = INT32_MIN;
	int16_t x324 = -1;
	uint64_t t60 = 0LLU;

	t60 = ((x321|(x322+x323))-x324);

	if (t60 != 18446744073709027198LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x329 = 2U;
	int64_t x330 = 2939860506644LL;
	uint16_t x331 = 3245U;
	int16_t x332 = -1;
	static volatile int64_t t61 = -413939169487291115LL;

	t61 = ((x329|(x330+x331))-x332);

	if (t61 != 2939860509892LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x335 = -1LL;
	uint8_t x336 = 56U;

	t62 = ((x333|(x334+x335))-x336);

	if (t62 != -57LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x337 = UINT32_MAX;
	volatile uint16_t x338 = 0U;
	uint64_t t63 = 18057619LLU;

	t63 = ((x337|(x338+x339))-x340);

	if (t63 != 9223372011144514967LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 6U;
	uint64_t t64 = 7674LLU;

	t64 = ((x341|(x342+x343))-x344);

	if (t64 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x346 = -3544100;
	int8_t x347 = INT8_MIN;
	uint8_t x348 = 1U;
	uint32_t t65 = 56U;

	t65 = ((x345|(x346+x347))-x348);

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x351 = 12U;
	int32_t x352 = INT32_MAX;
	volatile uint32_t t66 = 4911764U;

	t66 = ((x349|(x350+x351))-x352);

	if (t66 != 2147483701U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x353 = -1;
	int16_t x355 = -116;
	uint32_t x356 = UINT32_MAX;
	int64_t t67 = 20LL;

	t67 = ((x353|(x354+x355))-x356);

	if (t67 != -4294967296LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x357 = INT32_MIN;
	uint32_t x358 = UINT32_MAX;
	uint64_t x360 = 17849852378903LLU;
	volatile uint64_t t68 = 527607269LLU;

	t68 = ((x357|(x358+x359))-x360);

	if (t68 != 18446726226004665413LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x361 = 100U;
	uint8_t x362 = UINT8_MAX;
	uint16_t x363 = 3601U;
	uint64_t x364 = 271798780996014LLU;
	uint64_t t69 = 33LLU;

	t69 = ((x361|(x362+x363))-x364);

	if (t69 != 18446472274928559558LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MAX;
	int32_t x368 = INT32_MIN;

	t70 = ((x365|(x366+x367))-x368);

	if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x369 = INT8_MAX;
	int16_t x370 = INT16_MAX;
	uint8_t x371 = 7U;
	uint64_t x372 = UINT64_MAX;

	t71 = ((x369|(x370+x371))-x372);

	if (t71 != 32896LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x373 = INT64_MIN;
	static uint64_t x374 = UINT64_MAX;
	volatile int8_t x375 = INT8_MAX;
	int16_t x376 = 803;

	t72 = ((x373|(x374+x375))-x376);

	if (t72 != 9223372036854775131LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x378 = 55261LLU;

	t73 = ((x377|(x378+x379))-x380);

	if (t73 != 46886425LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = -520;
	volatile int32_t x382 = -21722;
	int64_t x383 = -65893LL;
	int32_t x384 = 80;
	volatile int64_t t74 = 1LL;

	t74 = ((x381|(x382+x383))-x384);

	if (t74 != -599LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x390 = -1LL;
	static volatile int64_t x391 = -75406LL;
	static volatile int16_t x392 = INT16_MIN;
	int64_t t75 = -14642LL;

	t75 = ((x389|(x390+x391))-x392);

	if (t75 != 22897LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x393 = INT16_MAX;
	int16_t x394 = -1;
	static uint16_t x395 = 60U;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t76 = 10180;

	t76 = ((x393|(x394+x395))-x396);

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x397 = INT32_MAX;
	int16_t x398 = 438;
	int8_t x400 = INT8_MAX;

	t77 = ((x397|(x398+x399))-x400);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x401 = -1LL;
	uint64_t x402 = UINT64_MAX;
	int8_t x403 = -1;
	uint8_t x404 = UINT8_MAX;

	t78 = ((x401|(x402+x403))-x404);

	if (t78 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x409 = -1;
	uint16_t x410 = 18U;
	volatile int16_t x411 = INT16_MIN;
	static int8_t x412 = INT8_MAX;
	static int32_t t79 = 143340992;

	t79 = ((x409|(x410+x411))-x412);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x413 = 59U;
	int64_t x414 = -24649428075009816LL;
	uint8_t x415 = 0U;
	int16_t x416 = 67;
	int64_t t80 = -6126868647640LL;

	t80 = ((x413|(x414+x415))-x416);

	if (t80 != -24649428075009864LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x417 = -1;
	int8_t x419 = -7;
	volatile uint32_t x420 = 7458U;
	static uint32_t t81 = 980U;

	t81 = ((x417|(x418+x419))-x420);

	if (t81 != 4294959837U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x421 = -1;
	volatile int32_t x422 = INT32_MIN;
	int64_t x423 = -1LL;
	int32_t x424 = INT32_MIN;
	volatile int64_t t82 = -898205LL;

	t82 = ((x421|(x422+x423))-x424);

	if (t82 != 2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x425 = -1LL;
	int8_t x426 = INT8_MAX;
	static int64_t x427 = INT64_MIN;
	volatile int64_t t83 = -808343822702470LL;

	t83 = ((x425|(x426+x427))-x428);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x429 = UINT32_MAX;
	int16_t x430 = INT16_MAX;
	int32_t x431 = 77819;
	int64_t x432 = -1LL;
	int64_t t84 = 566LL;

	t84 = ((x429|(x430+x431))-x432);

	if (t84 != 4294967296LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x433 = INT32_MIN;
	int16_t x434 = 0;
	uint8_t x435 = 0U;
	static int32_t x436 = INT32_MIN;
	int32_t t85 = -87876973;

	t85 = ((x433|(x434+x435))-x436);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x437 = INT8_MAX;
	static int8_t x438 = -6;
	int16_t x439 = INT16_MAX;
	volatile uint32_t x440 = 103870540U;
	static uint32_t t86 = 12725U;

	t86 = ((x437|(x438+x439))-x440);

	if (t86 != 4191129523U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x441 = -1;
	int32_t x443 = 762;
	uint32_t x444 = 20346555U;

	t87 = ((x441|(x442+x443))-x444);

	if (t87 != 4274620740U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x446 = 6U;
	uint64_t x447 = 255334LLU;
	volatile uint64_t t88 = 1393919282LLU;

	t88 = ((x445|(x446+x447))-x448);

	if (t88 != 261768LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x449 = 3610U;
	uint16_t x451 = 6U;
	uint32_t t89 = 7U;

	t89 = ((x449|(x450+x451))-x452);

	if (t89 != 4294938143U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x454 = -355267462820754709LL;
	int8_t x455 = -6;
	volatile uint64_t x456 = 273312422393148LLU;

	t90 = ((x453|(x454+x455))-x456);

	if (t90 != 18091203298468967859LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x458 = 791LLU;
	uint16_t x459 = UINT16_MAX;
	static int8_t x460 = 0;

	t91 = ((x457|(x458+x459))-x460);

	if (t91 != 66327LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x465 = -1;
	uint32_t x467 = 4325U;
	uint32_t x468 = 5U;
	volatile uint32_t t92 = 11137U;

	t92 = ((x465|(x466+x467))-x468);

	if (t92 != 4294967290U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MAX;
	int32_t x471 = -46744119;

	t93 = ((x469|(x470+x471))-x472);

	if (t93 != -17079) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x473 = 31U;
	static uint32_t x474 = 3962539U;
	uint8_t x475 = 12U;
	int32_t x476 = -22868;
	uint32_t t94 = 298892U;

	t94 = ((x473|(x474+x475))-x476);

	if (t94 != 3985427U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x477 = INT8_MIN;
	int8_t x478 = INT8_MIN;
	static int64_t x479 = -8746824623201030LL;
	int8_t x480 = -1;
	static volatile int64_t t95 = -8726860304058176LL;

	t95 = ((x477|(x478+x479))-x480);

	if (t95 != -5LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MAX;
	int8_t x496 = 16;
	int32_t t96 = -233580540;

	t96 = ((x493|(x494+x495))-x496);

	if (t96 != -17) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x497 = INT32_MIN;
	static int16_t x498 = 207;
	volatile uint64_t x500 = UINT64_MAX;
	static volatile uint64_t t97 = 2737014652LLU;

	t97 = ((x497|(x498+x499))-x500);

	if (t97 != 2147483855LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x505 = INT8_MAX;
	int64_t x506 = -1LL;
	int64_t x508 = 0LL;
	int64_t t98 = 8265522599460656LL;

	t98 = ((x505|(x506+x507))-x508);

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x510 = 2052;
	static int64_t x511 = 20505730587LL;
	static uint8_t x512 = 1U;
	int64_t t99 = -54745826265005291LL;

	t99 = ((x509|(x510+x511))-x512);

	if (t99 != 20505732990LL) { NG(); } else { ; }
	
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

