#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int32_t x10 = -1;
int32_t t2 = 130070095;
int8_t x25 = INT8_MAX;
static uint64_t t5 = 56063170711LLU;
static int64_t x33 = INT64_MIN;
volatile int16_t x36 = -33;
int16_t x57 = -1;
int64_t x58 = -1LL;
volatile int16_t x71 = INT16_MIN;
volatile int32_t t12 = -1930770;
volatile uint8_t x83 = 17U;
int16_t x88 = -1;
volatile uint32_t t15 = 241890235U;
int32_t x111 = -324;
int64_t t18 = 16933780LL;
int8_t x131 = INT8_MIN;
uint64_t x134 = 1LLU;
static int8_t x135 = -22;
static volatile int16_t x136 = -1;
static uint64_t t22 = 23LLU;
volatile int16_t x153 = INT16_MIN;
int16_t x156 = INT16_MAX;
volatile int64_t x166 = 4LL;
uint8_t x174 = UINT8_MAX;
uint16_t x176 = UINT16_MAX;
int8_t x178 = INT8_MIN;
volatile int64_t t28 = -6802999489179371LL;
int8_t x189 = 3;
int8_t x197 = 0;
uint16_t x234 = 2U;
static int8_t x235 = INT8_MIN;
int64_t x240 = -525711142996826LL;
int32_t x247 = INT32_MAX;
uint32_t t38 = 15U;
static int64_t x254 = 6174LL;
int64_t t39 = -5322079554LL;
static int32_t x261 = -86;
volatile int16_t x267 = -1;
static uint32_t x268 = 23009U;
uint32_t t41 = 78761605U;
int8_t x276 = -39;
volatile int64_t t42 = 30LL;
static volatile int16_t x294 = INT16_MIN;
static uint8_t x296 = UINT8_MAX;
int8_t x303 = INT8_MAX;
volatile int32_t t45 = -1;
int16_t x320 = -1842;
int16_t x325 = -1;
volatile int16_t x328 = INT16_MIN;
uint8_t x331 = 61U;
uint32_t t49 = 66409424U;
int64_t x333 = -1804735434LL;
static int8_t x335 = INT8_MIN;
static int16_t x339 = INT16_MIN;
static int16_t x342 = -1;
volatile int32_t x344 = -1;
uint64_t x347 = UINT64_MAX;
uint16_t x361 = 839U;
static int8_t x372 = 54;
int32_t t57 = -5;
static int64_t t58 = -269LL;
int16_t x393 = INT16_MIN;
static int64_t x403 = INT64_MIN;
volatile uint64_t t63 = 430076624625269444LLU;
volatile uint32_t x405 = 1U;
uint64_t t64 = 4096728477140166LLU;
static uint64_t x416 = UINT64_MAX;
static int16_t x419 = -1;
int64_t x420 = INT64_MIN;
static uint64_t x426 = UINT64_MAX;
int8_t x427 = INT8_MAX;
int16_t x437 = INT16_MIN;
uint8_t x440 = UINT8_MAX;
int32_t x441 = INT32_MIN;
static int64_t x445 = 3010753250637807LL;
uint64_t x447 = UINT64_MAX;
volatile uint64_t t74 = 90890512369LLU;
static volatile uint64_t t76 = 1372546LLU;
int32_t x478 = -36503591;
static int64_t x481 = 0LL;
uint16_t x482 = 8U;
int32_t x489 = -7;
uint64_t x490 = UINT64_MAX;
uint32_t x494 = 19394444U;
int32_t x495 = -26307;
static int16_t x514 = INT16_MIN;
volatile uint64_t t87 = 35LLU;
int32_t t90 = -26;
uint32_t x539 = UINT32_MAX;
int32_t x540 = INT32_MIN;
static int16_t x545 = INT16_MIN;
static volatile int32_t x546 = INT32_MAX;
int8_t x570 = 22;
int64_t x586 = INT64_MIN;
uint8_t x588 = 127U;
static int64_t x602 = -1LL;


void f0(void) {
	int16_t x2 = INT16_MIN;
	volatile int64_t x3 = INT64_MIN;
	uint8_t x4 = UINT8_MAX;
	int64_t t0 = -185411244560LL;

	t0 = ((x1-(x2-x3))+x4);

	if (t0 != -9223372036854742786LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MIN;
	uint64_t x11 = 149897LLU;
	int32_t x12 = -1;
	static volatile uint64_t t1 = 15074825LLU;

	t1 = ((x9-(x10-x11))+x12);

	if (t1 != 9223372036854925705LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MAX;
	static int32_t x14 = -2055;
	static int16_t x15 = 46;
	uint16_t x16 = UINT16_MAX;

	t2 = ((x13-(x14-x15))+x16);

	if (t2 != 67763) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 33LL;
	volatile uint64_t x18 = 213220083509673820LLU;
	int64_t x19 = INT64_MAX;
	uint16_t x20 = 6U;
	uint64_t t3 = 580LLU;

	t3 = ((x17-(x18-x19))+x20);

	if (t3 != 9010151953345102026LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = -1LL;
	volatile int64_t x27 = INT64_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t4 = 30416594588108LLU;

	t4 = ((x25-(x26-x27))+x28);

	if (t4 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = -1;
	int16_t x31 = INT16_MIN;
	volatile int32_t x32 = INT32_MIN;

	t5 = ((x29-(x30-x31))+x32);

	if (t5 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x34 = -1058421351;
	int32_t x35 = -1;
	int64_t t6 = -1852691191LL;

	t6 = ((x33-(x34-x35))+x36);

	if (t6 != -9223372035796354491LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = -1;
	int32_t x47 = -1;
	uint16_t x48 = 2361U;
	int32_t t7 = -394729;

	t7 = ((x45-(x46-x47))+x48);

	if (t7 != -2147481287) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = -3012;
	int64_t x54 = -861738367962889849LL;
	static int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MIN;
	static int64_t t8 = -6102489021697471LL;

	t8 = ((x53-(x54-x55))+x56);

	if (t8 != 861738363667919541LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x59 = UINT64_MAX;
	uint8_t x60 = 0U;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x57-(x58-x59))+x60);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x61 = UINT32_MAX;
	volatile uint64_t x62 = 13929328719026LLU;
	static int16_t x63 = INT16_MIN;
	volatile int16_t x64 = 620;
	volatile uint64_t t10 = 246LLU;

	t10 = ((x61-(x62-x63))+x64);

	if (t10 != 18446730148675767737LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = -1LL;
	static volatile uint64_t t11 = 273766833259975617LLU;

	t11 = ((x65-(x66-x67))+x68);

	if (t11 != 18446744071562002431LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = 3543U;
	int32_t x70 = INT32_MIN;
	int16_t x72 = -1;

	t12 = ((x69-(x70-x71))+x72);

	if (t12 != 2147454422) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = 37;
	int64_t x74 = -1LL;
	uint32_t x75 = 341470U;
	int64_t x76 = -12497235LL;
	int64_t t13 = 609LL;

	t13 = ((x73-(x74-x75))+x76);

	if (t13 != -12155727LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 3U;
	int64_t x82 = -7648LL;
	int32_t x84 = 14;
	int64_t t14 = 236962659982540LL;

	t14 = ((x81-(x82-x83))+x84);

	if (t14 != 7682LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 15909U;
	int32_t x86 = -1;
	int32_t x87 = INT32_MIN;

	t15 = ((x85-(x86-x87))+x88);

	if (t15 != 2147499557U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = 388U;
	int16_t x90 = INT16_MIN;
	int8_t x91 = -33;
	int32_t x92 = INT32_MIN;
	volatile uint32_t t16 = 420U;

	t16 = ((x89-(x90-x91))+x92);

	if (t16 != 2147516771U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x109 = 1581U;
	uint32_t x110 = UINT32_MAX;
	int16_t x112 = -1;
	volatile uint32_t t17 = 12U;

	t17 = ((x109-(x110-x111))+x112);

	if (t17 != 1257U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x113 = 1356;
	volatile int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	int64_t x116 = -1LL;

	t18 = ((x113-(x114-x115))+x116);

	if (t18 != -9223372034707290805LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x117 = 0U;
	int64_t x118 = -1LL;
	volatile int64_t x119 = INT64_MIN;
	uint8_t x120 = 15U;
	static volatile int64_t t19 = -1412LL;

	t19 = ((x117-(x118-x119))+x120);

	if (t19 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x129 = 433184771453254LLU;
	uint16_t x130 = 4871U;
	int64_t x132 = INT64_MAX;
	volatile uint64_t t20 = 105143514580LLU;

	t20 = ((x129-(x130-x131))+x132);

	if (t20 != 9223805221626224062LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x133 = -3;
	uint64_t t21 = 10098139119104399LLU;

	t21 = ((x133-(x134-x135))+x136);

	if (t21 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x145 = 1963206206549LLU;
	uint16_t x146 = UINT16_MAX;
	static int8_t x147 = -48;
	int64_t x148 = -1LL;

	t22 = ((x145-(x146-x147))+x148);

	if (t22 != 1963206140965LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x149 = UINT32_MAX;
	volatile int32_t x150 = INT32_MIN;
	static int32_t x151 = INT32_MIN;
	int32_t x152 = -53;
	static uint32_t t23 = 8604U;

	t23 = ((x149-(x150-x151))+x152);

	if (t23 != 4294967242U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x154 = 4LLU;
	static int32_t x155 = INT32_MAX;
	uint64_t t24 = 110737800789LLU;

	t24 = ((x153-(x154-x155))+x156);

	if (t24 != 2147483642LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x157 = -66;
	uint16_t x158 = 390U;
	volatile int64_t x159 = -18444909163799LL;
	int16_t x160 = INT16_MIN;
	volatile int64_t t25 = -20596278304LL;

	t25 = ((x157-(x158-x159))+x160);

	if (t25 != -18444909197023LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x165 = 20LLU;
	uint8_t x167 = 48U;
	volatile uint16_t x168 = UINT16_MAX;
	static uint64_t t26 = 5LLU;

	t26 = ((x165-(x166-x167))+x168);

	if (t26 != 65599LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x173 = 442LLU;
	static uint64_t x175 = UINT64_MAX;
	volatile uint64_t t27 = 1753LLU;

	t27 = ((x173-(x174-x175))+x176);

	if (t27 != 65721LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x177 = -1;
	static volatile int64_t x179 = 0LL;
	static int64_t x180 = INT64_MIN;

	t28 = ((x177-(x178-x179))+x180);

	if (t28 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x185 = INT16_MIN;
	uint8_t x186 = UINT8_MAX;
	int64_t x187 = 1155684127131384674LL;
	int32_t x188 = INT32_MAX;
	static int64_t t29 = 9216805122817LL;

	t29 = ((x185-(x186-x187))+x188);

	if (t29 != 1155684129278835298LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x190 = -1LL;
	uint32_t x191 = 1U;
	static uint16_t x192 = UINT16_MAX;
	int64_t t30 = 13LL;

	t30 = ((x189-(x190-x191))+x192);

	if (t30 != 65540LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x198 = 1LL;
	uint8_t x199 = 1U;
	volatile int32_t x200 = -1;
	volatile int64_t t31 = -809LL;

	t31 = ((x197-(x198-x199))+x200);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x209 = 36;
	int8_t x210 = -1;
	int64_t x211 = -1LL;
	volatile uint8_t x212 = 1U;
	int64_t t32 = 696721338094558400LL;

	t32 = ((x209-(x210-x211))+x212);

	if (t32 != 37LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int64_t x214 = -562077LL;
	int64_t x215 = INT64_MIN;
	int16_t x216 = 62;
	int64_t t33 = 202LL;

	t33 = ((x213-(x214-x215))+x216);

	if (t33 != -9223372032559246374LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x225 = 1U;
	volatile uint8_t x226 = UINT8_MAX;
	static uint16_t x227 = 6651U;
	int32_t x228 = -1;
	static int32_t t34 = 67978;

	t34 = ((x225-(x226-x227))+x228);

	if (t34 != 6396) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = 7;
	volatile int32_t x231 = -18494562;
	int8_t x232 = INT8_MIN;
	int32_t t35 = -379918345;

	t35 = ((x229-(x230-x231))+x232);

	if (t35 != -18494825) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x233 = -1;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t36 = -1512971;

	t36 = ((x233-(x234-x235))+x236);

	if (t36 != -259) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x237 = UINT16_MAX;
	uint32_t x238 = 6U;
	static int16_t x239 = INT16_MIN;
	int64_t t37 = 3965672354601556LL;

	t37 = ((x237-(x238-x239))+x240);

	if (t37 != -525711142964065LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x245 = INT8_MIN;
	int8_t x246 = -1;
	static uint32_t x248 = UINT32_MAX;

	t38 = ((x245-(x246-x247))+x248);

	if (t38 != 2147483519U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x253 = INT8_MAX;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = 601U;

	t39 = ((x253-(x254-x255))+x256);

	if (t39 != -38214LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x262 = -1;
	uint32_t x263 = 3U;
	uint64_t x264 = 405894323878LLU;
	volatile uint64_t t40 = 11765LLU;

	t40 = ((x261-(x262-x263))+x264);

	if (t40 != 410189291092LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x265 = -1;
	static int8_t x266 = -1;

	t41 = ((x265-(x266-x267))+x268);

	if (t41 != 23008U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x273 = INT64_MAX;
	static uint8_t x274 = 30U;
	static int8_t x275 = INT8_MIN;

	t42 = ((x273-(x274-x275))+x276);

	if (t42 != 9223372036854775610LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x285 = 0;
	static int16_t x286 = 0;
	static uint64_t x287 = UINT64_MAX;
	volatile int8_t x288 = -1;
	volatile uint64_t t43 = 0LLU;

	t43 = ((x285-(x286-x287))+x288);

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x293 = 118930;
	static uint8_t x295 = 69U;
	static volatile int32_t t44 = -1;

	t44 = ((x293-(x294-x295))+x296);

	if (t44 != 152022) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x301 = INT16_MIN;
	volatile int8_t x302 = INT8_MIN;
	static uint8_t x304 = UINT8_MAX;

	t45 = ((x301-(x302-x303))+x304);

	if (t45 != -32258) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x309 = 232832627U;
	int16_t x310 = INT16_MIN;
	int64_t x311 = 9LL;
	static int32_t x312 = INT32_MAX;
	volatile int64_t t46 = 4074033683354140577LL;

	t46 = ((x309-(x310-x311))+x312);

	if (t46 != 2380349051LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x317 = 14U;
	int64_t x318 = 2145978494656812462LL;
	int64_t x319 = 16LL;
	static volatile int64_t t47 = 122942117LL;

	t47 = ((x317-(x318-x319))+x320);

	if (t47 != -2145978494656814274LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x326 = -1;
	static uint16_t x327 = 214U;
	int32_t t48 = -46442;

	t48 = ((x325-(x326-x327))+x328);

	if (t48 != -32554) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MAX;
	int16_t x332 = INT16_MAX;

	t49 = ((x329-(x330-x331))+x332);

	if (t49 != 32700U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x334 = UINT8_MAX;
	int32_t x336 = INT32_MIN;
	volatile int64_t t50 = 366021915LL;

	t50 = ((x333-(x334-x335))+x336);

	if (t50 != -3952219465LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x337 = INT8_MIN;
	volatile uint64_t x338 = 5301087512895176013LLU;
	int64_t x340 = -154164299941LL;
	uint64_t t51 = 21LLU;

	t51 = ((x337-(x338-x339))+x340);

	if (t51 != 13145656406650042766LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x341 = -1;
	uint64_t x343 = 5252433434030115071LLU;
	volatile uint64_t t52 = 1641LLU;

	t52 = ((x341-(x342-x343))+x344);

	if (t52 != 5252433434030115070LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x345 = INT64_MIN;
	uint32_t x346 = 13U;
	int8_t x348 = -23;
	uint64_t t53 = 79824566631LLU;

	t53 = ((x345-(x346-x347))+x348);

	if (t53 != 9223372036854775771LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x353 = 1302U;
	static int8_t x354 = 15;
	volatile int8_t x355 = -2;
	int32_t x356 = INT32_MIN;
	int32_t t54 = -363290496;

	t54 = ((x353-(x354-x355))+x356);

	if (t54 != -2147482363) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x357 = INT64_MIN;
	static int8_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	uint64_t x360 = 3342113301LLU;
	volatile uint64_t t55 = 124673594557686LLU;

	t55 = ((x357-(x358-x359))+x360);

	if (t55 != 9223372040196889109LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x362 = 426757154;
	uint8_t x363 = UINT8_MAX;
	static volatile int8_t x364 = INT8_MAX;
	int32_t t56 = 1072;

	t56 = ((x361-(x362-x363))+x364);

	if (t56 != -426755933) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x369 = -14;
	int16_t x370 = -1;
	uint16_t x371 = 4044U;

	t57 = ((x369-(x370-x371))+x372);

	if (t57 != 4085) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = INT64_MIN;
	int64_t x375 = INT64_MIN;
	volatile uint16_t x376 = 60U;

	t58 = ((x373-(x374-x375))+x376);

	if (t58 != 2147483707LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x377 = 5473696967LLU;
	static int8_t x378 = INT8_MAX;
	int8_t x379 = -28;
	int32_t x380 = 2;
	uint64_t t59 = 5867923317570990LLU;

	t59 = ((x377-(x378-x379))+x380);

	if (t59 != 5473696814LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MAX;
	uint64_t x383 = 660895484472600905LLU;
	int64_t x384 = 16286049477929LL;
	volatile uint64_t t60 = 51371525698920LLU;

	t60 = ((x381-(x382-x383))+x384);

	if (t60 != 660911766227111539LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x385 = 7;
	volatile int8_t x386 = INT8_MIN;
	uint16_t x387 = 21U;
	int16_t x388 = INT16_MIN;
	volatile int32_t t61 = -1;

	t61 = ((x385-(x386-x387))+x388);

	if (t61 != -32612) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x394 = INT16_MIN;
	volatile int8_t x395 = 5;
	int64_t x396 = INT64_MIN;
	int64_t t62 = -1573946388305753732LL;

	t62 = ((x393-(x394-x395))+x396);

	if (t62 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x401 = 5376U;
	uint64_t x402 = 11539LLU;
	int8_t x404 = 2;

	t63 = ((x401-(x402-x403))+x404);

	if (t63 != 9223372036854769647LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x406 = INT8_MAX;
	int16_t x407 = -1;
	static volatile uint64_t x408 = 62124700LLU;

	t64 = ((x405-(x406-x407))+x408);

	if (t64 != 4357091869LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x409 = 78236696966036LLU;
	int8_t x410 = INT8_MAX;
	static int16_t x411 = 0;
	static int32_t x412 = INT32_MIN;
	volatile uint64_t t65 = 8LLU;

	t65 = ((x409-(x410-x411))+x412);

	if (t65 != 78234549482261LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x413 = UINT32_MAX;
	uint16_t x414 = UINT16_MAX;
	static int8_t x415 = INT8_MAX;
	uint64_t t66 = 453291967LLU;

	t66 = ((x413-(x414-x415))+x416);

	if (t66 != 4294901886LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x417 = 128U;
	uint64_t x418 = 3609389LLU;
	uint64_t t67 = 1079LLU;

	t67 = ((x417-(x418-x419))+x420);

	if (t67 != 9223372036851166546LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x421 = 1250732897LLU;
	uint16_t x422 = UINT16_MAX;
	static volatile int32_t x423 = -1;
	volatile int32_t x424 = INT32_MAX;
	volatile uint64_t t68 = 81350815819431LLU;

	t68 = ((x421-(x422-x423))+x424);

	if (t68 != 3398151008LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x425 = UINT64_MAX;
	static int8_t x428 = INT8_MIN;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x425-(x426-x427))+x428);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x433 = 517571U;
	volatile int16_t x434 = INT16_MIN;
	volatile int8_t x435 = INT8_MIN;
	static int32_t x436 = INT32_MAX;
	uint32_t t70 = 1U;

	t70 = ((x433-(x434-x435))+x436);

	if (t70 != 2148033858U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x438 = INT8_MAX;
	int8_t x439 = INT8_MAX;
	static int32_t t71 = -24024;

	t71 = ((x437-(x438-x439))+x440);

	if (t71 != -32513) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x442 = -4;
	static int32_t x443 = -1;
	static int8_t x444 = -1;
	volatile int32_t t72 = -9478981;

	t72 = ((x441-(x442-x443))+x444);

	if (t72 != -2147483646) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x446 = INT32_MAX;
	static volatile int8_t x448 = -7;
	volatile uint64_t t73 = 437330950140438639LLU;

	t73 = ((x445-(x446-x447))+x448);

	if (t73 != 3010751103154152LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x449 = INT16_MIN;
	uint64_t x450 = UINT64_MAX;
	static int16_t x451 = INT16_MIN;
	static uint64_t x452 = 1007924372LLU;

	t74 = ((x449-(x450-x451))+x452);

	if (t74 != 1007858837LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x453 = -1;
	int16_t x454 = INT16_MIN;
	volatile int64_t x455 = 9LL;
	int8_t x456 = 2;
	static volatile int64_t t75 = -2LL;

	t75 = ((x453-(x454-x455))+x456);

	if (t75 != 32778LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x469 = INT32_MAX;
	int16_t x470 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	uint64_t x472 = 1001228LLU;

	t76 = ((x469-(x470-x471))+x472);

	if (t76 != 2148517642LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x473 = INT8_MAX;
	int16_t x474 = -10075;
	uint16_t x475 = 5U;
	static int64_t x476 = -1LL;
	volatile int64_t t77 = 216207434170087106LL;

	t77 = ((x473-(x474-x475))+x476);

	if (t77 != 10206LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x477 = INT8_MIN;
	static uint32_t x479 = UINT32_MAX;
	static uint8_t x480 = 1U;
	uint32_t t78 = 2U;

	t78 = ((x477-(x478-x479))+x480);

	if (t78 != 36503463U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x483 = 57;
	int8_t x484 = INT8_MIN;
	volatile int64_t t79 = 1422035442LL;

	t79 = ((x481-(x482-x483))+x484);

	if (t79 != -79LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x491 = 15;
	int32_t x492 = INT32_MAX;
	uint64_t t80 = 3899974892121649170LLU;

	t80 = ((x489-(x490-x491))+x492);

	if (t80 != 2147483656LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x493 = UINT16_MAX;
	static int64_t x496 = -261825LL;
	volatile int64_t t81 = 6094LL;

	t81 = ((x493-(x494-x495))+x496);

	if (t81 != 4275350255LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x497 = 1U;
	int8_t x498 = INT8_MIN;
	int8_t x499 = -1;
	static int16_t x500 = 506;
	int32_t t82 = 9;

	t82 = ((x497-(x498-x499))+x500);

	if (t82 != 634) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x501 = 39174637U;
	volatile int8_t x502 = -1;
	uint8_t x503 = 49U;
	uint64_t x504 = UINT64_MAX;
	uint64_t t83 = 13753608878532169LLU;

	t83 = ((x501-(x502-x503))+x504);

	if (t83 != 39174686LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x505 = 4U;
	static int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MIN;
	int16_t x508 = 0;
	volatile uint32_t t84 = 2177880U;

	t84 = ((x505-(x506-x507))+x508);

	if (t84 != 32644U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x509 = INT64_MAX;
	uint64_t x510 = 1300228LLU;
	static int8_t x511 = INT8_MIN;
	int64_t x512 = INT64_MIN;
	uint64_t t85 = 51742657228LLU;

	t85 = ((x509-(x510-x511))+x512);

	if (t85 != 18446744073708251259LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x513 = 53U;
	static int8_t x515 = INT8_MAX;
	int8_t x516 = INT8_MIN;
	volatile int32_t t86 = 389;

	t86 = ((x513-(x514-x515))+x516);

	if (t86 != 32820) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x517 = INT16_MIN;
	uint64_t x518 = UINT64_MAX;
	int16_t x519 = -1;
	static volatile int32_t x520 = 21535;

	t87 = ((x517-(x518-x519))+x520);

	if (t87 != 18446744073709540383LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x521 = -62;
	uint32_t x522 = 161727U;
	int8_t x523 = INT8_MIN;
	int16_t x524 = INT16_MAX;
	volatile uint32_t t88 = 566191722U;

	t88 = ((x521-(x522-x523))+x524);

	if (t88 != 4294838146U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x525 = UINT8_MAX;
	static volatile int64_t x526 = -1LL;
	uint8_t x527 = UINT8_MAX;
	static int16_t x528 = INT16_MIN;
	int64_t t89 = 43413238759LL;

	t89 = ((x525-(x526-x527))+x528);

	if (t89 != -32257LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x529 = -58;
	volatile int32_t x530 = -1;
	int8_t x531 = INT8_MIN;
	uint8_t x532 = UINT8_MAX;

	t90 = ((x529-(x530-x531))+x532);

	if (t90 != 70) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x537 = 1336;
	int8_t x538 = INT8_MIN;
	uint32_t t91 = 4904U;

	t91 = ((x537-(x538-x539))+x540);

	if (t91 != 2147485111U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x547 = UINT16_MAX;
	volatile uint64_t x548 = UINT64_MAX;
	uint64_t t92 = 379967418144121746LLU;

	t92 = ((x545-(x546-x547))+x548);

	if (t92 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x569 = INT64_MIN;
	static uint16_t x571 = 23446U;
	int32_t x572 = INT32_MAX;
	volatile int64_t t93 = 26485495607890LL;

	t93 = ((x569-(x570-x571))+x572);

	if (t93 != -9223372034707268737LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x573 = 111U;
	int8_t x574 = INT8_MAX;
	static volatile uint16_t x575 = 24U;
	int64_t x576 = -1LL;
	volatile int64_t t94 = -41LL;

	t94 = ((x573-(x574-x575))+x576);

	if (t94 != 7LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x577 = 845;
	static uint16_t x578 = UINT16_MAX;
	volatile uint32_t x579 = UINT32_MAX;
	uint16_t x580 = 84U;
	uint32_t t95 = 115U;

	t95 = ((x577-(x578-x579))+x580);

	if (t95 != 4294902689U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x585 = INT64_MIN;
	int32_t x587 = -1;
	static volatile int64_t t96 = -275022362015997494LL;

	t96 = ((x585-(x586-x587))+x588);

	if (t96 != 126LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x593 = UINT8_MAX;
	volatile int16_t x594 = INT16_MIN;
	int32_t x595 = -6;
	static volatile uint16_t x596 = 3583U;
	volatile int32_t t97 = -2;

	t97 = ((x593-(x594-x595))+x596);

	if (t97 != 36600) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x597 = INT16_MIN;
	int8_t x598 = INT8_MAX;
	uint64_t x599 = 181254226197340LLU;
	static int8_t x600 = -29;
	volatile uint64_t t98 = 9380LLU;

	t98 = ((x597-(x598-x599))+x600);

	if (t98 != 181254226164416LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x601 = UINT32_MAX;
	uint32_t x603 = 5U;
	int8_t x604 = INT8_MIN;
	static int64_t t99 = -38344014LL;

	t99 = ((x601-(x602-x603))+x604);

	if (t99 != 4294967173LL) { NG(); } else { ; }
	
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

