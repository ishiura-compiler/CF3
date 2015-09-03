#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 33U;
volatile int32_t t2 = 8486;
static volatile uint16_t x16 = 174U;
uint32_t x39 = UINT32_MAX;
volatile uint32_t t8 = UINT32_MAX;
int16_t x43 = -59;
int64_t t9 = 63LL;
int64_t t10 = 159765903266LL;
int8_t x61 = INT8_MIN;
int64_t x65 = -4142724531405975869LL;
int64_t x66 = -1LL;
volatile int64_t x75 = -1LL;
uint64_t x79 = UINT64_MAX;
int16_t x82 = 1;
int8_t x106 = INT8_MIN;
static int8_t x108 = INT8_MIN;
int8_t x111 = -1;
volatile uint64_t x117 = UINT64_MAX;
static int8_t x119 = 0;
volatile uint8_t x126 = 66U;
volatile uint16_t x141 = 2U;
volatile int64_t t31 = 4421477337949213LL;
volatile uint8_t x153 = UINT8_MAX;
int64_t x154 = -75LL;
int64_t t34 = -13099650LL;
static int8_t x162 = INT8_MAX;
volatile uint32_t x175 = 2111528696U;
int64_t x177 = -1LL;
static int32_t x179 = INT32_MAX;
int8_t x185 = 10;
int64_t x190 = -16794888081439691LL;
int16_t x220 = INT16_MIN;
uint8_t x233 = 1U;
uint16_t x236 = 2344U;
uint16_t x237 = 29899U;
int8_t x238 = -4;
uint8_t x240 = UINT8_MAX;
uint64_t x241 = UINT64_MAX;
static uint32_t x246 = UINT32_MAX;
static uint32_t x247 = 5U;
static volatile int64_t t52 = 60LL;
uint8_t x254 = UINT8_MAX;
int8_t x255 = INT8_MIN;
int32_t x259 = 90934700;
volatile uint16_t x265 = UINT16_MAX;
volatile int8_t x271 = -16;
static volatile int64_t t59 = 98355LL;
static uint8_t x278 = UINT8_MAX;
static volatile uint64_t t61 = 210552407674620LLU;
static volatile int16_t x286 = 3618;
volatile uint64_t t62 = 946LLU;
static int32_t x293 = INT32_MIN;
int64_t x301 = -24488587518703LL;
int16_t x309 = INT16_MIN;
uint64_t t70 = 35537694544736126LLU;
static uint8_t x323 = 65U;
int64_t x330 = -190321200569110575LL;
int64_t t72 = -448859460LL;
int64_t x341 = INT64_MIN;
int16_t x342 = 0;
volatile uint64_t t75 = 256257334012776LLU;
uint8_t x350 = UINT8_MAX;
uint64_t x351 = UINT64_MAX;
int16_t x358 = INT16_MIN;
static int8_t x370 = -1;
int64_t x378 = -1LL;
static int16_t x381 = -1;
int64_t x383 = INT64_MIN;
volatile int64_t t83 = -357990970532LL;
uint16_t x390 = 2U;
int8_t x391 = -1;
volatile int8_t x393 = -1;
static int64_t x406 = 87LL;
static uint64_t x424 = 102944LLU;
volatile int32_t x426 = -1;
static volatile uint64_t t94 = 14LLU;
volatile uint64_t t95 = UINT64_MAX;
int16_t x439 = 1;
int8_t x440 = INT8_MIN;
static uint32_t t96 = UINT32_MAX;
volatile uint64_t x441 = UINT64_MAX;
volatile uint64_t t97 = UINT64_MAX;
int64_t x445 = INT64_MAX;
int16_t x448 = -6;
int64_t x449 = INT64_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint8_t x2 = 19U;
	int32_t x3 = -1;
	int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = ((x1|(x2-x3))|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile uint32_t x6 = 37207U;
	int16_t x7 = -1;
	uint32_t t1 = 404611U;

	t1 = ((x5|(x6-x7))|x8);

	if (t1 != 4294967289U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -5823125;
	int8_t x10 = INT8_MIN;
	int16_t x11 = -39;
	volatile uint8_t x12 = 0U;

	t2 = ((x9|(x10-x11))|x12);

	if (t2 != -17) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 48U;
	volatile int64_t x14 = INT64_MAX;
	int16_t x15 = INT16_MAX;
	volatile int64_t t3 = -4077070507LL;

	t3 = ((x13|(x14-x15))|x16);

	if (t3 != 9223372036854743230LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -76LL;
	int8_t x18 = INT8_MAX;
	uint32_t x19 = 184U;
	volatile uint32_t x20 = UINT32_MAX;
	int64_t t4 = -223971273372728701LL;

	t4 = ((x17|(x18-x19))|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 382762325152461452LLU;
	volatile uint64_t x26 = 10308LLU;
	static volatile int8_t x27 = INT8_MIN;
	int16_t x28 = -11;
	volatile uint64_t t5 = 55991362206386800LLU;

	t5 = ((x25|(x26-x27))|x28);

	if (t5 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	uint8_t x30 = 3U;
	int8_t x31 = INT8_MIN;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = 50106;

	t6 = ((x29|(x30-x31))|x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -1;
	int32_t x34 = -27307810;
	uint8_t x35 = UINT8_MAX;
	static uint64_t x36 = 527973693723968587LLU;
	uint64_t t7 = UINT64_MAX;

	t7 = ((x33|(x34-x35))|x36);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	uint16_t x38 = 3U;
	volatile uint32_t x40 = 13609U;

	t8 = ((x37|(x38-x39))|x40);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	volatile int64_t x42 = INT64_MIN;
	static int32_t x44 = -47482723;

	t9 = ((x41|(x42-x43))|x44);

	if (t9 != -47482625LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 1U;
	int8_t x46 = INT8_MAX;
	static int64_t x47 = -491781487LL;
	uint8_t x48 = UINT8_MAX;

	t10 = ((x45|(x46-x47))|x48);

	if (t10 != 491781631LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 1276526U;
	int64_t x50 = -1LL;
	int16_t x51 = -1;
	volatile uint64_t x52 = UINT64_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x49|(x50-x51))|x52);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = INT16_MIN;
	volatile int64_t t12 = -18600691LL;

	t12 = ((x53|(x54-x55))|x56);

	if (t12 != -127LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = -1;
	uint8_t x59 = 0U;
	uint8_t x60 = UINT8_MAX;
	volatile int64_t t13 = 32759868LL;

	t13 = ((x57|(x58-x59))|x60);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x62 = 2U;
	int8_t x63 = INT8_MIN;
	int8_t x64 = -28;
	static volatile int32_t t14 = 1;

	t14 = ((x61|(x62-x63))|x64);

	if (t14 != -26) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x67 = INT32_MIN;
	volatile int16_t x68 = 534;
	int64_t t15 = -5LL;

	t15 = ((x65|(x66-x67))|x68);

	if (t15 != -4142724530856525825LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = 0;
	volatile uint8_t x71 = 15U;
	static uint8_t x72 = 10U;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x69|(x70-x71))|x72);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 1;
	uint16_t x74 = 14U;
	int8_t x76 = -1;
	int64_t t17 = 4531178LL;

	t17 = ((x73|(x74-x75))|x76);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -34;
	uint32_t x78 = 11827715U;
	int64_t x80 = INT64_MAX;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x77|(x78-x79))|x80);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 3U;
	int8_t x83 = INT8_MIN;
	uint16_t x84 = 4U;
	int32_t t19 = -4625344;

	t19 = ((x81|(x82-x83))|x84);

	if (t19 != 135) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 1;
	static int8_t x86 = INT8_MAX;
	uint16_t x87 = 119U;
	volatile int64_t x88 = -1LL;
	static volatile int64_t t20 = -1LL;

	t20 = ((x85|(x86-x87))|x88);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 13U;
	uint64_t x90 = 23LLU;
	int32_t x91 = INT32_MIN;
	uint16_t x92 = 23U;
	uint64_t t21 = 860841833567445LLU;

	t21 = ((x89|(x90-x91))|x92);

	if (t21 != 2147483679LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	static int16_t x94 = INT16_MIN;
	static volatile uint64_t x95 = 375973132032877722LLU;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = ((x93|(x94-x95))|x96);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1282LL;
	static uint16_t x102 = 356U;
	int32_t x103 = INT32_MAX;
	int8_t x104 = INT8_MIN;
	static int64_t t23 = 398LL;

	t23 = ((x101|(x102-x103))|x104);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = -1;
	volatile uint32_t x107 = 64028726U;
	static uint32_t t24 = UINT32_MAX;

	t24 = ((x105|(x106-x107))|x108);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	static uint64_t x112 = UINT64_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = ((x109|(x110-x111))|x112);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x118 = 39U;
	int8_t x120 = 3;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = ((x117|(x118-x119))|x120);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = UINT8_MAX;
	static volatile int32_t x122 = -3360338;
	int64_t x123 = 0LL;
	uint64_t x124 = 16136LLU;
	volatile uint64_t t27 = 106105901939481166LLU;

	t27 = ((x121|(x122-x123))|x124);

	if (t27 != 18446744073706192895LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = 511746U;
	uint64_t x127 = 82123550LLU;
	int16_t x128 = 0;
	uint64_t t28 = 1638011LLU;

	t28 = ((x125|(x126-x127))|x128);

	if (t28 != 18446744073627758374LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = -21817;
	int8_t x130 = -3;
	static int16_t x131 = -49;
	int16_t x132 = INT16_MIN;
	volatile int32_t t29 = 1276;

	t29 = ((x129|(x130-x131))|x132);

	if (t29 != -21777) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = INT32_MAX;
	uint64_t x134 = 259594941880135094LLU;
	int16_t x135 = INT16_MIN;
	int32_t x136 = 2;
	uint64_t t30 = 205170197784769LLU;

	t30 = ((x133|(x134-x135))|x136);

	if (t30 != 259594942278533119LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x142 = 116LL;
	uint32_t x143 = 2057U;
	volatile uint16_t x144 = 2U;

	t31 = ((x141|(x142-x143))|x144);

	if (t31 != -1941LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x145 = 39403620;
	int8_t x146 = 6;
	uint16_t x147 = 20012U;
	int16_t x148 = 368;
	volatile int32_t t32 = 799;

	t32 = ((x145|(x146-x147))|x148);

	if (t32 != -3586) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x149 = UINT32_MAX;
	static uint32_t x150 = 13U;
	static int8_t x151 = 1;
	int16_t x152 = 47;
	static volatile uint32_t t33 = UINT32_MAX;

	t33 = ((x149|(x150-x151))|x152);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x155 = -1LL;
	uint32_t x156 = 923U;

	t34 = ((x153|(x154-x155))|x156);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = 110152290LL;
	static uint32_t x163 = UINT32_MAX;
	static uint32_t x164 = UINT32_MAX;
	int64_t t35 = 0LL;

	t35 = ((x161|(x162-x163))|x164);

	if (t35 != 4294967295LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = UINT32_MAX;
	volatile int16_t x170 = INT16_MIN;
	int32_t x171 = -6699861;
	static volatile uint32_t x172 = 367166U;
	uint32_t t36 = UINT32_MAX;

	t36 = ((x169|(x170-x171))|x172);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x173 = INT64_MIN;
	uint32_t x174 = UINT32_MAX;
	int8_t x176 = -2;
	int64_t t37 = 1LL;

	t37 = ((x173|(x174-x175))|x176);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x178 = 516384544776167977LLU;
	int16_t x180 = -1;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x177|(x178-x179))|x180);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = -1;
	volatile int32_t x183 = INT32_MAX;
	int32_t x184 = -1;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x181|(x182-x183))|x184);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = 3;
	int16_t x188 = 1;
	int32_t t40 = 89;

	t40 = ((x185|(x186-x187))|x188);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x189 = -12464571;
	static int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t41 = -106915017447223LL;

	t41 = ((x189|(x190-x191))|x192);

	if (t41 != -2240779LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x193 = INT32_MAX;
	int32_t x194 = 47479;
	int32_t x195 = -1;
	static int8_t x196 = 1;
	volatile int32_t t42 = INT32_MAX;

	t42 = ((x193|(x194-x195))|x196);

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 1525700LLU;
	int64_t x198 = 196706487879LL;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -55;
	uint64_t t43 = 2201LLU;

	t43 = ((x197|(x198-x199))|x200);

	if (t43 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x201 = 527448142U;
	int16_t x202 = -1;
	volatile int32_t x203 = INT32_MAX;
	volatile int8_t x204 = -3;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x201|(x202-x203))|x204);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = 86534077LLU;
	static int8_t x211 = -1;
	uint64_t x212 = UINT64_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x209|(x210-x211))|x212);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = 1U;
	int16_t x214 = -1;
	int16_t x215 = INT16_MIN;
	volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x213|(x214-x215))|x216);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x217 = UINT8_MAX;
	int32_t x218 = INT32_MAX;
	int8_t x219 = 25;
	volatile int32_t t47 = 154405;

	t47 = ((x217|(x218-x219))|x220);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x221 = 3U;
	int8_t x222 = -29;
	uint32_t x223 = 729U;
	int64_t x224 = -1LL;
	volatile int64_t t48 = -6589365224266508LL;

	t48 = ((x221|(x222-x223))|x224);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x234 = -1;
	static uint16_t x235 = 2030U;
	static volatile int32_t t49 = 849;

	t49 = ((x233|(x234-x235))|x236);

	if (t49 != -1735) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x239 = INT64_MIN;
	static int64_t t50 = INT64_MAX;

	t50 = ((x237|(x238-x239))|x240);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 50LLU;
	uint64_t x244 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x241|(x242-x243))|x244);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = 4852233U;
	volatile int64_t x248 = -1LL;

	t52 = ((x245|(x246-x247))|x248);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MIN;
	static int32_t x251 = -48;
	volatile int32_t x252 = -1051095817;
	int64_t t53 = 3LL;

	t53 = ((x249|(x250-x251))|x252);

	if (t53 != -1051095817LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x253 = UINT64_MAX;
	static uint32_t x256 = UINT32_MAX;
	uint64_t t54 = UINT64_MAX;

	t54 = ((x253|(x254-x255))|x256);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = -4742;
	int64_t x258 = INT64_MAX;
	static uint32_t x260 = 1U;
	volatile int64_t t55 = 4388LL;

	t55 = ((x257|(x258-x259))|x260);

	if (t55 != -133LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x261 = INT64_MIN;
	uint16_t x262 = 10727U;
	int64_t x263 = -369944929LL;
	int32_t x264 = -1;
	volatile int64_t t56 = 7022LL;

	t56 = ((x261|(x262-x263))|x264);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x266 = 0;
	int8_t x267 = -1;
	static uint16_t x268 = 25U;
	int32_t t57 = 43;

	t57 = ((x265|(x266-x267))|x268);

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x269 = 7LLU;
	volatile uint8_t x270 = UINT8_MAX;
	int8_t x272 = INT8_MAX;
	static uint64_t t58 = 13346LLU;

	t58 = ((x269|(x270-x271))|x272);

	if (t58 != 383LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x273 = UINT32_MAX;
	volatile uint8_t x274 = UINT8_MAX;
	int32_t x275 = 118725;
	static int64_t x276 = 236611206LL;

	t59 = ((x273|(x274-x275))|x276);

	if (t59 != 4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MIN;
	uint8_t x279 = UINT8_MAX;
	volatile uint64_t x280 = 8993665LLU;
	volatile uint64_t t60 = 1849666683992LLU;

	t60 = ((x277|(x278-x279))|x280);

	if (t60 != 18446744071571061633LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x281 = INT16_MIN;
	volatile int32_t x282 = INT32_MAX;
	uint32_t x283 = 1231237U;
	uint64_t x284 = 1593221336469742869LLU;

	t61 = ((x281|(x282-x283))|x284);

	if (t61 != 1593221339676653439LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MIN;
	static uint64_t x287 = 2477020LLU;
	int16_t x288 = INT16_MIN;

	t62 = ((x285|(x286-x287))|x288);

	if (t62 != 18446744073709535814LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x289 = 11U;
	int8_t x290 = 5;
	static volatile int8_t x291 = -9;
	static int16_t x292 = -1;
	static int32_t t63 = 24465500;

	t63 = ((x289|(x290-x291))|x292);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x294 = INT16_MAX;
	volatile int32_t x295 = 60;
	static int8_t x296 = INT8_MIN;
	volatile int32_t t64 = -58430364;

	t64 = ((x293|(x294-x295))|x296);

	if (t64 != -61) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = 46253065LL;
	static uint8_t x298 = 118U;
	static int8_t x299 = -1;
	static uint16_t x300 = 116U;
	static int64_t t65 = 2138831817LL;

	t65 = ((x297|(x298-x299))|x300);

	if (t65 != 46253183LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x302 = INT16_MIN;
	uint32_t x303 = UINT32_MAX;
	int8_t x304 = -1;
	volatile int64_t t66 = 18469LL;

	t66 = ((x301|(x302-x303))|x304);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x305 = UINT16_MAX;
	static uint64_t x306 = 823988225116229952LLU;
	volatile int8_t x307 = -12;
	int64_t x308 = INT64_MAX;
	volatile uint64_t t67 = 2244090033890486LLU;

	t67 = ((x305|(x306-x307))|x308);

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x310 = 70U;
	int32_t x311 = -53534778;
	volatile int16_t x312 = 1;
	volatile uint32_t t68 = 40U;

	t68 = ((x309|(x310-x311))|x312);

	if (t68 != 4294959233U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	volatile uint32_t x315 = UINT32_MAX;
	volatile int32_t x316 = 348;
	uint32_t t69 = 28197771U;

	t69 = ((x313|(x314-x315))|x316);

	if (t69 != 4294967261U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x317 = INT8_MIN;
	int64_t x318 = -159056782LL;
	int32_t x319 = INT32_MAX;
	uint64_t x320 = 4250819080098052LLU;

	t70 = ((x317|(x318-x319))|x320);

	if (t70 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x321 = 1U;
	static int32_t x322 = -1;
	int8_t x324 = INT8_MAX;
	volatile int32_t t71 = 1398;

	t71 = ((x321|(x322-x323))|x324);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -1;
	static int16_t x331 = -2;
	uint8_t x332 = 51U;

	t72 = ((x329|(x330-x331))|x332);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 15529132U;
	int64_t x338 = 17999268LL;
	int16_t x339 = -8;
	int32_t x340 = INT32_MIN;
	int64_t t73 = 1857701371939LL;

	t73 = ((x337|(x338-x339))|x340);

	if (t73 != -2113997396LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x343 = 15LLU;
	static int8_t x344 = 0;
	volatile uint64_t t74 = 901300LLU;

	t74 = ((x341|(x342-x343))|x344);

	if (t74 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x345 = 358;
	uint32_t x346 = UINT32_MAX;
	static int32_t x347 = INT32_MIN;
	static uint64_t x348 = 881350201LLU;

	t75 = ((x345|(x346-x347))|x348);

	if (t75 != 2147483647LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x349 = 7U;
	int8_t x352 = 0;
	volatile uint64_t t76 = 42414762722370LLU;

	t76 = ((x349|(x350-x351))|x352);

	if (t76 != 263LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = -8LL;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -1LL;
	int64_t x356 = INT64_MAX;
	int64_t t77 = -513157906LL;

	t77 = ((x353|(x354-x355))|x356);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x357 = 3;
	volatile int8_t x359 = 9;
	int8_t x360 = INT8_MIN;
	int32_t t78 = 21284;

	t78 = ((x357|(x358-x359))|x360);

	if (t78 != -9) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = -1;
	static int32_t x362 = 6963;
	int8_t x363 = INT8_MIN;
	volatile int16_t x364 = -1;
	int32_t t79 = 465531657;

	t79 = ((x361|(x362-x363))|x364);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MAX;
	int32_t x366 = INT32_MAX;
	int64_t x367 = -1LL;
	volatile int64_t x368 = INT64_MIN;
	int64_t t80 = 12LL;

	t80 = ((x365|(x366-x367))|x368);

	if (t80 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x371 = INT8_MAX;
	volatile uint64_t x372 = 64661LLU;
	uint64_t t81 = 421540LLU;

	t81 = ((x369|(x370-x371))|x372);

	if (t81 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x377 = 1U;
	int64_t x379 = INT64_MIN;
	static int16_t x380 = -1;
	int64_t t82 = -6979539750350LL;

	t82 = ((x377|(x378-x379))|x380);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x382 = -1;
	int8_t x384 = INT8_MIN;

	t83 = ((x381|(x382-x383))|x384);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	volatile uint16_t x386 = 4039U;
	uint8_t x387 = UINT8_MAX;
	uint8_t x388 = 0U;
	int32_t t84 = -495;

	t84 = ((x385|(x386-x387))|x388);

	if (t84 != -56) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x389 = 30U;
	static int64_t x392 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = ((x389|(x390-x391))|x392);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x394 = 1U;
	volatile uint64_t x395 = UINT64_MAX;
	static uint16_t x396 = 7U;
	static volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x393|(x394-x395))|x396);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = -98238;
	static int16_t x402 = INT16_MAX;
	int16_t x403 = INT16_MAX;
	static uint64_t x404 = 0LLU;
	static uint64_t t87 = 818545LLU;

	t87 = ((x401|(x402-x403))|x404);

	if (t87 != 18446744073709453378LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = -111;
	int16_t x407 = 414;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t88 = -1846854234LL;

	t88 = ((x405|(x406-x407))|x408);

	if (t88 != -71LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = -1;
	volatile int64_t x411 = 9142LL;
	uint16_t x412 = UINT16_MAX;
	int64_t t89 = 530118172333LL;

	t89 = ((x409|(x410-x411))|x412);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x413 = -1;
	static uint32_t x414 = UINT32_MAX;
	int64_t x415 = -1LL;
	static int32_t x416 = INT32_MAX;
	volatile int64_t t90 = 82449581149691587LL;

	t90 = ((x413|(x414-x415))|x416);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = INT16_MAX;
	int64_t x418 = -1LL;
	volatile uint64_t x419 = 523702894871558766LLU;
	int8_t x420 = -1;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = ((x417|(x418-x419))|x420);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = INT16_MAX;
	uint32_t x422 = 39U;
	static volatile int16_t x423 = INT16_MIN;
	uint64_t t92 = 1040124LLU;

	t92 = ((x421|(x422-x423))|x424);

	if (t92 != 131071LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = 6;
	uint64_t x427 = UINT64_MAX;
	uint16_t x428 = 19U;
	uint64_t t93 = 7433LLU;

	t93 = ((x425|(x426-x427))|x428);

	if (t93 != 23LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x429 = UINT32_MAX;
	uint64_t x430 = UINT64_MAX;
	uint64_t x431 = 15828058514LLU;
	int64_t x432 = 5188289463LL;

	t94 = ((x429|(x430-x431))|x432);

	if (t94 != 18446744065119617023LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = -1;
	int16_t x434 = INT16_MIN;
	static int16_t x435 = -1;
	uint64_t x436 = 1311947LLU;

	t95 = ((x433|(x434-x435))|x436);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = -1;
	uint32_t x438 = 6329U;

	t96 = ((x437|(x438-x439))|x440);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x442 = -1;
	int64_t x443 = -1LL;
	volatile int8_t x444 = -1;

	t97 = ((x441|(x442-x443))|x444);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x446 = 4555958;
	int16_t x447 = -1;
	volatile int64_t t98 = 64563217468758LL;

	t98 = ((x445|(x446-x447))|x448);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x450 = 25U;
	uint32_t x451 = 21392826U;
	volatile int64_t x452 = -1LL;
	volatile int64_t t99 = 529561021770898576LL;

	t99 = ((x449|(x450-x451))|x452);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

