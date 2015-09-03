#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x6 = INT8_MIN;
uint32_t x9 = 121U;
volatile uint16_t x14 = 711U;
static volatile uint32_t x26 = UINT32_MAX;
int32_t x28 = INT32_MIN;
volatile int32_t x39 = 35495802;
int32_t x46 = -1;
uint64_t t7 = 3041LLU;
int32_t x51 = -1;
volatile int64_t x69 = INT64_MIN;
volatile int32_t x73 = -1;
int8_t x76 = -1;
int8_t x85 = INT8_MAX;
volatile int8_t x86 = 1;
volatile int16_t x93 = INT16_MIN;
volatile int16_t x94 = INT16_MIN;
volatile int16_t x104 = INT16_MIN;
uint16_t x110 = 3475U;
volatile uint64_t t16 = 343355982644335LLU;
static uint8_t x115 = 34U;
int64_t x124 = INT64_MIN;
uint16_t x128 = UINT16_MAX;
int16_t x134 = -1;
int8_t x135 = -1;
static volatile int64_t x136 = -1LL;
static int16_t x137 = INT16_MIN;
volatile uint8_t x141 = 6U;
volatile uint64_t x157 = 81486633550908196LLU;
uint16_t x160 = UINT16_MAX;
static uint32_t x163 = 554852123U;
uint32_t x164 = UINT32_MAX;
uint64_t x165 = 1LLU;
int16_t x167 = INT16_MIN;
volatile int64_t x181 = -1LL;
int16_t x184 = 892;
static volatile int64_t t31 = 290814219328333085LL;
uint16_t x192 = 1U;
int64_t x205 = INT64_MAX;
static int16_t x209 = 1120;
int32_t x211 = INT32_MIN;
volatile uint32_t t36 = 34U;
int64_t t38 = -4LL;
uint64_t x235 = 33984701922LLU;
static uint32_t x239 = 1474850U;
static uint64_t t41 = 24908720LLU;
int16_t x243 = 3;
static int64_t x256 = 3LL;
static volatile int64_t t44 = -1LL;
volatile int64_t x257 = 73933412LL;
static volatile int32_t x260 = INT32_MIN;
int64_t t45 = 841619680992LL;
static int16_t x268 = 886;
uint32_t x269 = 755U;
volatile uint8_t x272 = 3U;
volatile int64_t t47 = 31315837255LL;
static uint16_t x275 = 2U;
uint16_t x287 = 2U;
static uint16_t x288 = 6603U;
int16_t x302 = -1;
int16_t x304 = INT16_MAX;
uint64_t t52 = 1921402691787979LLU;
uint32_t x310 = 49U;
int32_t x316 = -957;
uint32_t t54 = 504121U;
int64_t x321 = -1LL;
uint64_t x322 = 40LLU;
volatile uint8_t x324 = 23U;
int8_t x338 = INT8_MIN;
int8_t x339 = -1;
int8_t x340 = INT8_MIN;
volatile uint32_t t60 = 31372454U;
int8_t x370 = INT8_MIN;
int8_t x387 = 1;
uint32_t t65 = 35448123U;
uint64_t x393 = 22683631773010610LLU;
int8_t x399 = -1;
static int64_t x400 = 6632259162237919LL;
uint32_t x411 = 8339363U;
uint32_t t68 = 426709225U;
int32_t x419 = -234707301;
uint64_t t70 = 673587LLU;
static volatile uint16_t x425 = 17U;
int8_t x431 = INT8_MIN;
uint64_t t72 = 848016497414678804LLU;
volatile uint16_t x441 = 3773U;
volatile int32_t x452 = -1;
int64_t x455 = -1LL;
static uint64_t x463 = 13372700LLU;
int32_t x464 = INT32_MIN;
uint64_t x472 = 31680LLU;
volatile int32_t t80 = 10479;
volatile uint64_t t81 = 22857258782551368LLU;
uint8_t x493 = 0U;
static volatile int64_t x497 = 1LL;
int64_t x542 = -165301475LL;
int8_t x543 = INT8_MIN;
int8_t x548 = 6;
int8_t x553 = -1;
uint8_t x554 = UINT8_MAX;
int8_t x563 = -23;
int32_t t91 = 39617356;
int8_t x567 = INT8_MAX;
static int32_t x570 = INT32_MIN;
int16_t x575 = -1;
int16_t x578 = -1;
uint16_t x580 = 8U;
static volatile int64_t t95 = 7658525LL;
static int8_t x607 = -1;


void f0(void) {
	uint16_t x5 = 200U;
	static int8_t x7 = 14;
	int64_t x8 = -310276119728652LL;
	int64_t t0 = -6514335705886378LL;

	t0 = ((x5-(x6-x7))*x8);

	if (t0 != -106114432947198984LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = 1;
	int16_t x11 = 1;
	int32_t x12 = -58528263;
	volatile uint32_t t1 = 4046820U;

	t1 = ((x9-(x10-x11))*x12);

	if (t1 != 1508014769U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x15 = 12U;
	volatile uint32_t x16 = 318169U;
	volatile uint32_t t2 = 9713041U;

	t2 = ((x13-(x14-x15))*x16);

	if (t2 != 4031841533U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x21 = 2U;
	static volatile uint16_t x22 = 6281U;
	int16_t x23 = -135;
	int16_t x24 = 3;
	static volatile int32_t t3 = -5;

	t3 = ((x21-(x22-x23))*x24);

	if (t3 != -19242) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x25 = INT8_MAX;
	uint8_t x27 = UINT8_MAX;
	uint32_t t4 = 320300931U;

	t4 = ((x25-(x26-x27))*x28);

	if (t4 != 2147483648U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 0;
	static volatile int16_t x30 = INT16_MAX;
	uint64_t x31 = 56006202LLU;
	int8_t x32 = INT8_MAX;
	volatile uint64_t t5 = 369LLU;

	t5 = ((x29-(x30-x31))*x32);

	if (t5 != 7108626245LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = -1LL;
	volatile uint8_t x38 = UINT8_MAX;
	static int16_t x40 = INT16_MAX;
	int64_t t6 = -2620LL;

	t6 = ((x37-(x38-x39))*x40);

	if (t6 != 1163082555782LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x45 = UINT64_MAX;
	uint16_t x47 = 4U;
	volatile int8_t x48 = -12;

	t7 = ((x45-(x46-x47))*x48);

	if (t7 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = UINT8_MAX;
	static int16_t x50 = INT16_MIN;
	int16_t x52 = INT16_MAX;
	volatile int32_t t8 = 21529;

	t8 = ((x49-(x50-x51))*x52);

	if (t8 != 1082031874) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x70 = UINT8_MAX;
	static int64_t x71 = INT64_MAX;
	int8_t x72 = -1;
	static volatile int64_t t9 = 5463LL;

	t9 = ((x69-(x70-x71))*x72);

	if (t9 != 256LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x74 = 10865U;
	volatile int16_t x75 = -4;
	volatile int32_t t10 = -998;

	t10 = ((x73-(x74-x75))*x76);

	if (t10 != 10870) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x77 = 75451U;
	int64_t x78 = INT64_MAX;
	int64_t x79 = INT64_MAX;
	uint16_t x80 = 6680U;
	volatile int64_t t11 = -108301440589405LL;

	t11 = ((x77-(x78-x79))*x80);

	if (t11 != 504012680LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x87 = 14667U;
	static int16_t x88 = -1;
	uint32_t t12 = 13692U;

	t12 = ((x85-(x86-x87))*x88);

	if (t12 != 4294952503U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x89 = UINT8_MAX;
	uint16_t x90 = UINT16_MAX;
	static uint16_t x91 = 5U;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t13 = 203;

	t13 = ((x89-(x90-x91))*x92);

	if (t13 != 8355200) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	uint32_t t14 = 120533U;

	t14 = ((x93-(x94-x95))*x96);

	if (t14 != 2147483648U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x101 = 13U;
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = -1;
	uint32_t t15 = 0U;

	t15 = ((x101-(x102-x103))*x104);

	if (t15 != 4294541312U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x109 = 518181379LLU;
	uint64_t x111 = 13235116905240571LLU;
	int16_t x112 = 2326;

	t16 = ((x109-(x110-x111))*x112);

	if (t16 != 12338139053161821234LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x113 = UINT32_MAX;
	int8_t x114 = -56;
	uint64_t x116 = UINT64_MAX;
	uint64_t t17 = 1LLU;

	t17 = ((x113-(x114-x115))*x116);

	if (t17 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x117 = 49U;
	int64_t x118 = 11874LL;
	int64_t x119 = -1LL;
	int8_t x120 = 14;
	static volatile int64_t t18 = 0LL;

	t18 = ((x117-(x118-x119))*x120);

	if (t18 != -165564LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x121 = -14;
	static volatile int16_t x122 = -3;
	static volatile uint64_t x123 = 235994427007146LLU;
	uint64_t t19 = 31874342857793932LLU;

	t19 = ((x121-(x122-x123))*x124);

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = INT8_MIN;
	volatile int8_t x126 = -1;
	int16_t x127 = 5;
	int32_t t20 = -115902785;

	t20 = ((x125-(x126-x127))*x128);

	if (t20 != -7995270) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x129 = 6754;
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = -1LL;
	int8_t x132 = INT8_MIN;
	static uint64_t t21 = 539LLU;

	t21 = ((x129-(x130-x131))*x132);

	if (t21 != 18446744073708687104LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x133 = 0U;
	int64_t t22 = -262LL;

	t22 = ((x133-(x134-x135))*x136);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x138 = -3;
	volatile uint8_t x139 = 91U;
	static int8_t x140 = 1;
	volatile int32_t t23 = 84;

	t23 = ((x137-(x138-x139))*x140);

	if (t23 != -32674) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = 28319308970LL;
	uint16_t x144 = UINT16_MAX;
	uint64_t t24 = 2005829049928527LLU;

	t24 = ((x141-(x142-x143))*x144);

	if (t24 != 1855905913807695LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x145 = 8U;
	int32_t x146 = INT32_MIN;
	uint64_t x147 = 5058138797106044614LLU;
	volatile int8_t x148 = -1;
	uint64_t t25 = 29116108788606132LLU;

	t25 = ((x145-(x146-x147))*x148);

	if (t25 != 13388605274456023346LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x158 = UINT64_MAX;
	int8_t x159 = INT8_MAX;
	static uint64_t t26 = 122725959596635LLU;

	t26 = ((x157-(x158-x159))*x160);

	if (t26 != 9117492456716596316LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x161 = 5;
	static volatile uint64_t x162 = UINT64_MAX;
	volatile uint64_t t27 = 1486335LLU;

	t27 = ((x161-(x162-x163))*x164);

	if (t27 != 2383071747616121055LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x166 = UINT64_MAX;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t28 = 274LLU;

	t28 = ((x165-(x166-x167))*x168);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x177 = 3U;
	uint8_t x178 = 9U;
	volatile uint32_t x179 = 25806587U;
	static int8_t x180 = -1;
	volatile uint32_t t29 = 169U;

	t29 = ((x177-(x178-x179))*x180);

	if (t29 != 4269160715U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x182 = -29815495;
	volatile uint8_t x183 = UINT8_MAX;
	volatile int64_t t30 = 33861503784725047LL;

	t30 = ((x181-(x182-x183))*x184);

	if (t30 != 26595648108LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x185 = -1;
	volatile int64_t x186 = 40653LL;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 1U;

	t31 = ((x185-(x186-x187))*x188);

	if (t31 != -73422LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x189 = UINT32_MAX;
	int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MAX;
	static volatile int64_t t32 = 7321149434LL;

	t32 = ((x189-(x190-x191))*x192);

	if (t32 != -9223372032559808385LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x193 = -3409015;
	int64_t x194 = INT64_MIN;
	static uint64_t x195 = 2610737143870LLU;
	volatile int64_t x196 = 0LL;
	volatile uint64_t t33 = 6731769975939669204LLU;

	t33 = ((x193-(x194-x195))*x196);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = 0;
	uint64_t x203 = 576389091408481LLU;
	int8_t x204 = 0;
	volatile uint64_t t34 = 83777990LLU;

	t34 = ((x201-(x202-x203))*x204);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x206 = INT64_MIN;
	uint64_t x207 = UINT64_MAX;
	static volatile uint16_t x208 = 539U;
	uint64_t t35 = 274LLU;

	t35 = ((x205-(x206-x207))*x208);

	if (t35 != 18446744073709550538LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x210 = UINT32_MAX;
	volatile int32_t x212 = INT32_MIN;

	t36 = ((x209-(x210-x211))*x212);

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x217 = 151;
	static uint64_t x218 = 2682261LLU;
	int64_t x219 = -105LL;
	volatile uint32_t x220 = 594901U;
	uint64_t t37 = 2708254757638066383LLU;

	t37 = ((x217-(x218-x219))*x220);

	if (t37 != 18446742478057165901LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x225 = INT32_MAX;
	uint8_t x226 = 1U;
	int64_t x227 = -11713LL;
	int32_t x228 = INT32_MIN;

	t38 = ((x225-(x226-x227))*x228);

	if (t38 != -4611660860656451584LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x229 = 58640LL;
	static uint16_t x230 = UINT16_MAX;
	uint32_t x231 = 1380227795U;
	int32_t x232 = INT32_MIN;
	int64_t t39 = 913LL;

	t39 = ((x229-(x230-x231))*x232);

	if (t39 != 6259370223476932608LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x233 = UINT32_MAX;
	static int32_t x234 = -1;
	int32_t x236 = -30;
	static uint64_t t40 = 8628917249542638LLU;

	t40 = ((x233-(x234-x235))*x236);

	if (t40 != 18446742925319475076LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x237 = 7;
	int64_t x238 = -22994LL;
	volatile uint64_t x240 = 22318920413LLU;

	t41 = ((x237-(x238-x239))*x240);

	if (t41 != 33430417259532463LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x241 = -62056;
	int64_t x242 = -4253412765LL;
	int32_t x244 = INT32_MIN;
	int64_t t42 = -404733827LL;

	t42 = ((x241-(x242-x243))*x244);

	if (t42 != -9134001103229157376LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x249 = 46709530LL;
	int8_t x250 = INT8_MIN;
	static volatile int64_t x251 = -4614LL;
	static uint32_t x252 = 994088U;
	int64_t t43 = 221827180005LL;

	t43 = ((x249-(x250-x251))*x252);

	if (t43 != 46428923779872LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x253 = -1LL;
	int8_t x254 = INT8_MIN;
	static uint8_t x255 = 46U;

	t44 = ((x253-(x254-x255))*x256);

	if (t44 != 519LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x258 = 11U;
	int8_t x259 = -1;

	t45 = ((x257-(x258-x259))*x260);

	if (t45 != -158770767541043200LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x265 = -71767;
	static int32_t x266 = -1;
	static uint64_t x267 = 2696LLU;
	uint64_t t46 = 1150092120471661650LLU;

	t46 = ((x265-(x266-x267))*x268);

	if (t46 != 18446744073648355596LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x270 = 1169236315240285LL;
	int16_t x271 = INT16_MIN;

	t47 = ((x269-(x270-x271))*x272);

	if (t47 != -3507708945816894LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x273 = 14332;
	int16_t x274 = INT16_MIN;
	static uint64_t x276 = 120222006353LLU;
	static volatile uint64_t t48 = 290771219839LLU;

	t48 = ((x273-(x274-x275))*x276);

	if (t48 != 5662696943239006LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x277 = INT8_MIN;
	int8_t x278 = 3;
	static uint32_t x279 = 5U;
	int8_t x280 = INT8_MIN;
	volatile uint32_t t49 = 4989040U;

	t49 = ((x277-(x278-x279))*x280);

	if (t49 != 16128U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x285 = -1;
	int16_t x286 = -490;
	static int32_t t50 = -3357255;

	t50 = ((x285-(x286-x287))*x288);

	if (t50 != 3242073) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x297 = 9U;
	volatile int64_t x298 = INT64_MIN;
	int32_t x299 = INT32_MIN;
	int16_t x300 = -1;
	int64_t t51 = -3373553435675030358LL;

	t51 = ((x297-(x298-x299))*x300);

	if (t51 != -9223372034707292169LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x301 = UINT8_MAX;
	uint64_t x303 = 200256034401205825LLU;

	t52 = ((x301-(x302-x303))*x304);

	if (t52 != 13195333057428832447LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x309 = 3973LLU;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = INT64_MAX;
	uint64_t t53 = 7215951LLU;

	t53 = ((x309-(x310-x311))*x312);

	if (t53 != 9223372036854771885LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x313 = 4793U;
	volatile uint8_t x314 = UINT8_MAX;
	static uint8_t x315 = 44U;

	t54 = ((x313-(x314-x315))*x316);

	if (t54 != 4290582322U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x318 = 0;
	static uint8_t x319 = UINT8_MAX;
	uint64_t x320 = 2165320251955LLU;
	uint64_t t55 = 5662421381215462LLU;

	t55 = ((x317-(x318-x319))*x320);

	if (t55 != 1104313328497050LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x323 = 99534522U;
	uint64_t t56 = 16LLU;

	t56 = ((x321-(x322-x323))*x324);

	if (t56 != 2289293063LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x329 = UINT32_MAX;
	uint16_t x330 = 3U;
	static volatile uint8_t x331 = UINT8_MAX;
	uint64_t x332 = 2479393217305380875LLU;
	volatile uint64_t t57 = 656262550413100LLU;

	t57 = ((x329-(x330-x331))*x332);

	if (t57 != 13585143111235396297LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x337 = 0U;
	volatile int32_t t58 = 1;

	t58 = ((x337-(x338-x339))*x340);

	if (t58 != -16256) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x341 = INT16_MAX;
	volatile uint8_t x342 = UINT8_MAX;
	static volatile int16_t x343 = INT16_MIN;
	static uint64_t x344 = 35613513LLU;
	uint64_t t59 = 198529490LLU;

	t59 = ((x341-(x342-x343))*x344);

	if (t59 != 18446744064592492288LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x345 = INT8_MAX;
	volatile uint32_t x346 = 192652852U;
	int32_t x347 = 193539;
	uint8_t x348 = 3U;

	t60 = ((x345-(x346-x347))*x348);

	if (t60 != 3717589738U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x353 = INT32_MIN;
	uint16_t x354 = 30481U;
	int64_t x355 = 41LL;
	int8_t x356 = 1;
	volatile int64_t t61 = 27835460081LL;

	t61 = ((x353-(x354-x355))*x356);

	if (t61 != -2147514088LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x369 = -1LL;
	volatile uint32_t x371 = 83U;
	volatile uint32_t x372 = 766317973U;
	static int64_t t62 = 976156701776754872LL;

	t62 = ((x369-(x370-x371))*x372);

	if (t62 != -3291310471445236678LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x373 = -1;
	static int32_t x374 = 13587;
	int64_t x375 = 15266052777LL;
	static int16_t x376 = -1;
	volatile int64_t t63 = 114LL;

	t63 = ((x373-(x374-x375))*x376);

	if (t63 != -15266039189LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MIN;
	uint16_t x388 = 1U;
	volatile uint64_t t64 = 448243194084LLU;

	t64 = ((x385-(x386-x387))*x388);

	if (t64 != 32768LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x389 = 33U;
	uint32_t x390 = 1630171676U;
	static int32_t x391 = INT32_MAX;
	int16_t x392 = INT16_MAX;

	t65 = ((x389-(x390-x391))*x392);

	if (t65 != 2821485052U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x394 = 1;
	int32_t x395 = -810871;
	static int16_t x396 = INT16_MAX;
	uint64_t t66 = 5705LLU;

	t66 = ((x393-(x394-x395))*x396);

	if (t66 != 5404799331286750406LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x397 = INT8_MIN;
	volatile int16_t x398 = -32;
	volatile int64_t t67 = -37958444227152617LL;

	t67 = ((x397-(x398-x399))*x400);

	if (t67 != -643329138737078143LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x409 = -166;
	static uint16_t x410 = 3302U;
	static volatile int8_t x412 = INT8_MIN;

	t68 = ((x409-(x410-x411))*x412);

	if (t68 != 3227972736U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x417 = -2;
	static uint64_t x418 = UINT64_MAX;
	volatile int32_t x420 = INT32_MIN;
	volatile uint64_t t69 = 1980353LLU;

	t69 = ((x417-(x418-x419))*x420);

	if (t69 != 504030093111197696LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x421 = INT64_MAX;
	int16_t x422 = -1;
	uint32_t x423 = 617U;
	uint64_t x424 = 337431032955LLU;

	t70 = ((x421-(x422-x423))*x424);

	if (t70 != 17261110857633447027LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x426 = 5U;
	uint16_t x427 = 9U;
	volatile uint64_t x428 = UINT64_MAX;
	volatile uint64_t t71 = 7LLU;

	t71 = ((x425-(x426-x427))*x428);

	if (t71 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 389627LLU;
	static int8_t x432 = INT8_MIN;

	t72 = ((x429-(x430-x431))*x432);

	if (t72 != 49888768LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x433 = UINT64_MAX;
	volatile uint16_t x434 = 7U;
	uint64_t x435 = UINT64_MAX;
	volatile int32_t x436 = INT32_MAX;
	volatile uint64_t t73 = 101655LLU;

	t73 = ((x433-(x434-x435))*x436);

	if (t73 != 18446744054382198793LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x442 = 0;
	uint16_t x443 = 1212U;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t74 = 472235;

	t74 = ((x441-(x442-x443))*x444);

	if (t74 != -163348480) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x445 = INT8_MIN;
	static int64_t x446 = -65LL;
	int8_t x447 = -1;
	uint32_t x448 = UINT32_MAX;
	volatile int64_t t75 = -17019116107388910LL;

	t75 = ((x445-(x446-x447))*x448);

	if (t75 != -274877906880LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x449 = UINT16_MAX;
	volatile int8_t x450 = INT8_MIN;
	static volatile uint32_t x451 = UINT32_MAX;
	volatile uint32_t t76 = 5U;

	t76 = ((x449-(x450-x451))*x452);

	if (t76 != 4294901634U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x453 = INT8_MIN;
	uint64_t x454 = UINT64_MAX;
	int32_t x456 = -1;
	volatile uint64_t t77 = 23667243397LLU;

	t77 = ((x453-(x454-x455))*x456);

	if (t77 != 128LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x461 = INT16_MIN;
	int32_t x462 = INT32_MIN;
	volatile uint64_t t78 = 1303LLU;

	t78 = ((x461-(x462-x463))*x464);

	if (t78 != 13806410769446731776LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x469 = 2;
	static volatile uint8_t x470 = 0U;
	volatile int8_t x471 = INT8_MAX;
	volatile uint64_t t79 = 114112970250LLU;

	t79 = ((x469-(x470-x471))*x472);

	if (t79 != 4086720LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x477 = 1U;
	volatile int16_t x478 = INT16_MAX;
	static uint8_t x479 = 2U;
	static int8_t x480 = INT8_MIN;

	t80 = ((x477-(x478-x479))*x480);

	if (t80 != 4193792) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x485 = 24314U;
	uint64_t x486 = 100866619268693LLU;
	uint64_t x487 = 259755095890688LLU;
	int32_t x488 = INT32_MIN;

	t81 = ((x485-(x486-x487))*x488);

	if (t81 != 17466421900828737536LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x494 = UINT64_MAX;
	uint16_t x495 = 0U;
	volatile uint16_t x496 = 1062U;
	volatile uint64_t t82 = 750222621182784LLU;

	t82 = ((x493-(x494-x495))*x496);

	if (t82 != 1062LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x498 = 495787715883LLU;
	static volatile int8_t x499 = INT8_MIN;
	static int32_t x500 = INT32_MIN;
	uint64_t t83 = 0LLU;

	t83 = ((x497-(x498-x499))*x500);

	if (t83 != 13231600809298362368LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x501 = 86U;
	static int16_t x502 = -1;
	static int8_t x503 = -1;
	uint64_t x504 = UINT64_MAX;
	uint64_t t84 = 3241LLU;

	t84 = ((x501-(x502-x503))*x504);

	if (t84 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x517 = 9991124U;
	int32_t x518 = INT32_MAX;
	volatile int32_t x519 = 4657477;
	int8_t x520 = INT8_MIN;
	uint32_t t85 = 90603996U;

	t85 = ((x517-(x518-x519))*x520);

	if (t85 != 2419946240U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x521 = UINT64_MAX;
	volatile int64_t x522 = -135817271370LL;
	uint64_t x523 = 4297905761452086489LLU;
	int8_t x524 = 19;
	volatile uint64_t t86 = 4043299788218427377LLU;

	t86 = ((x521-(x522-x523))*x524);

	if (t86 != 7873235753279592838LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x537 = 9957;
	int32_t x538 = -1;
	volatile uint32_t x539 = 475U;
	int64_t x540 = -1LL;
	static volatile int64_t t87 = -7390511LL;

	t87 = ((x537-(x538-x539))*x540);

	if (t87 != -10433LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x541 = INT16_MIN;
	static int32_t x544 = INT32_MAX;
	volatile int64_t t88 = -86982778433454554LL;

	t88 = ((x541-(x542-x543))*x544);

	if (t88 != 354911570765427613LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x545 = 5;
	volatile int32_t x546 = -1627120;
	uint64_t x547 = UINT64_MAX;
	volatile uint64_t t89 = 506LLU;

	t89 = ((x545-(x546-x547))*x548);

	if (t89 != 9762744LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x555 = 749U;
	static int8_t x556 = 1;
	int32_t t90 = 874;

	t90 = ((x553-(x554-x555))*x556);

	if (t90 != 493) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x561 = -1;
	volatile int32_t x562 = -1;
	static int8_t x564 = -1;

	t91 = ((x561-(x562-x563))*x564);

	if (t91 != 23) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x565 = INT8_MIN;
	int64_t x566 = -162886261LL;
	volatile int16_t x568 = INT16_MIN;
	int64_t t92 = -173318717LL;

	t92 = ((x565-(x566-x567))*x568);

	if (t92 != -5337456967680LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x569 = -947;
	int32_t x571 = -721823;
	int32_t x572 = -1;
	volatile int32_t t93 = 794665685;

	t93 = ((x569-(x570-x571))*x572);

	if (t93 != -2146760878) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x573 = 27688594135LLU;
	static int16_t x574 = INT16_MIN;
	static int8_t x576 = -1;
	uint64_t t94 = 492728LLU;

	t94 = ((x573-(x574-x575))*x576);

	if (t94 != 18446744046020924714LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x577 = -990449LL;
	static int64_t x579 = 161605709LL;

	t95 = ((x577-(x578-x579))*x580);

	if (t95 != 1284922088LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x589 = 89U;
	volatile uint64_t x590 = 250603751181LLU;
	int8_t x591 = 1;
	volatile uint16_t x592 = 2U;
	volatile uint64_t t96 = 4700LLU;

	t96 = ((x589-(x590-x591))*x592);

	if (t96 != 18446743572502049434LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x593 = 7U;
	volatile uint64_t x594 = UINT64_MAX;
	static volatile int64_t x595 = -3LL;
	int16_t x596 = INT16_MIN;
	static uint64_t t97 = 61240018393LLU;

	t97 = ((x593-(x594-x595))*x596);

	if (t97 != 18446744073709387776LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x597 = 0U;
	static volatile uint8_t x598 = 24U;
	int64_t x599 = 0LL;
	static int16_t x600 = INT16_MAX;
	volatile int64_t t98 = 100LL;

	t98 = ((x597-(x598-x599))*x600);

	if (t98 != -786408LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x605 = UINT32_MAX;
	int32_t x606 = 169906382;
	uint16_t x608 = UINT16_MAX;
	uint32_t t99 = 207328U;

	t99 = ((x605-(x606-x607))*x608);

	if (t99 != 2035323088U) { NG(); } else { ; }
	
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

