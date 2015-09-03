#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -3;
static uint8_t x11 = 7U;
int16_t x13 = INT16_MIN;
uint32_t x25 = 39U;
volatile int32_t t5 = -896942;
int8_t x44 = 6;
static int64_t x54 = INT64_MIN;
volatile uint16_t x58 = 5750U;
int64_t x68 = INT64_MIN;
static int8_t x76 = INT8_MIN;
uint8_t x81 = UINT8_MAX;
static uint64_t x92 = UINT64_MAX;
volatile int8_t x94 = 7;
int8_t x98 = INT8_MIN;
int16_t x99 = 361;
static uint32_t x107 = 19588U;
volatile int64_t x108 = -1LL;
int32_t x118 = -1;
int64_t x119 = -1LL;
int16_t x120 = -1;
volatile int16_t x121 = -813;
static int16_t x125 = INT16_MIN;
static uint8_t x128 = UINT8_MAX;
uint64_t x131 = UINT64_MAX;
int64_t x136 = -1LL;
int32_t t30 = -848;
int8_t x145 = 0;
volatile int32_t x149 = -833071;
uint32_t x150 = 280677U;
int64_t x156 = INT64_MIN;
volatile int32_t t34 = -52667609;
volatile uint32_t x168 = 421810U;
int64_t x174 = -20820915357895302LL;
int64_t x175 = 9794522453LL;
int64_t x184 = -403947730LL;
static int32_t x188 = INT32_MIN;
int32_t t42 = -606296;
int8_t x197 = INT8_MIN;
int32_t x203 = -55945;
uint32_t x205 = UINT32_MAX;
uint32_t x206 = UINT32_MAX;
int64_t x208 = INT64_MIN;
int32_t t46 = 115800040;
int32_t t47 = 2671051;
int32_t t49 = -1049;
int32_t x236 = 178;
int64_t x241 = INT64_MIN;
int64_t x243 = -1LL;
uint8_t x251 = 0U;
volatile int32_t t57 = 4;
uint32_t x254 = 114611984U;
uint32_t x267 = UINT32_MAX;
static uint32_t x268 = UINT32_MAX;
static uint32_t x277 = 237225449U;
uint32_t x278 = UINT32_MAX;
volatile uint64_t x279 = UINT64_MAX;
uint32_t x280 = UINT32_MAX;
int8_t x294 = -9;
static int64_t x296 = INT64_MAX;
int32_t t67 = -53502;
int64_t x302 = -1LL;
volatile uint16_t x303 = 3U;
int32_t t70 = -709;
int64_t x316 = -220063LL;
static int32_t t73 = 805;
static uint16_t x330 = UINT16_MAX;
int16_t x333 = 7686;
static int64_t x349 = 224240292913529276LL;
uint32_t x362 = 5364U;
int8_t x363 = INT8_MIN;
static volatile int32_t t84 = -3;
int32_t x371 = INT32_MIN;
int64_t x373 = -53634033204131831LL;
uint8_t x382 = 23U;
volatile int8_t x386 = -10;
uint64_t x392 = 1986LLU;
static volatile int32_t t90 = -243;
uint16_t x397 = 378U;
int8_t x400 = INT8_MAX;
volatile int32_t t92 = 16187;
int32_t x409 = -50583837;
int8_t x411 = INT8_MIN;
static int32_t t93 = -157303201;
int32_t x414 = 1293;
volatile uint32_t x418 = 29803U;
int16_t x419 = INT16_MIN;
int32_t x422 = 116066436;
int32_t x423 = INT32_MAX;
uint64_t x425 = 34189393115821LLU;
uint64_t x428 = 55225LLU;
int16_t x433 = -1;


void f0(void) {
	volatile uint64_t x1 = 43679870LLU;
	int16_t x2 = INT16_MAX;
	static int32_t x3 = -51;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 0;

	t0 = ((x1==(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 26;
	static uint8_t x7 = 21U;
	volatile uint8_t x8 = 28U;
	int32_t t1 = 2828;

	t1 = ((x5==(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	volatile int8_t x10 = -1;
	uint16_t x12 = 10U;
	int32_t t2 = -5;

	t2 = ((x9==(x10-x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	int64_t x16 = -3434247705792466LL;
	int32_t t3 = 0;

	t3 = ((x13==(x14-x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -14;
	int8_t x18 = -1;
	int64_t x19 = -407291836411054LL;
	int16_t x20 = 331;
	volatile int32_t t4 = -6705602;

	t4 = ((x17==(x18-x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x26 = 2424447965232884LLU;
	int64_t x27 = INT64_MAX;
	uint64_t x28 = 1047228784LLU;

	t5 = ((x25==(x26-x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	uint64_t x30 = 1269336LLU;
	uint16_t x31 = 12841U;
	uint16_t x32 = UINT16_MAX;
	int32_t t6 = -26645552;

	t6 = ((x29==(x30-x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = -1;
	uint8_t x34 = 44U;
	int16_t x35 = 1826;
	static int16_t x36 = INT16_MAX;
	int32_t t7 = 2;

	t7 = ((x33==(x34-x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 1U;
	uint64_t x38 = 503LLU;
	int32_t x39 = INT32_MAX;
	static int32_t x40 = INT32_MAX;
	static volatile int32_t t8 = -2309;

	t8 = ((x37==(x38-x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 172618943854344265LLU;
	uint32_t x42 = 47811372U;
	int16_t x43 = INT16_MAX;
	static int32_t t9 = -2930615;

	t9 = ((x41==(x42-x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = 1;
	uint16_t x46 = 13016U;
	int8_t x47 = -39;
	uint16_t x48 = 10895U;
	static volatile int32_t t10 = 19997;

	t10 = ((x45==(x46-x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 13277U;
	int32_t x55 = INT32_MIN;
	volatile int8_t x56 = -1;
	int32_t t11 = 14;

	t11 = ((x53==(x54-x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = -1;
	volatile uint64_t x59 = UINT64_MAX;
	uint64_t x60 = 4LLU;
	volatile int32_t t12 = 3038;

	t12 = ((x57==(x58-x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = UINT32_MAX;
	int16_t x62 = 3178;
	uint8_t x63 = UINT8_MAX;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t13 = 1;

	t13 = ((x61==(x62-x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MAX;
	static int32_t x67 = INT32_MAX;
	int32_t t14 = -1822675;

	t14 = ((x65==(x66-x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 749667419529LL;
	volatile int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MAX;
	volatile uint64_t x72 = 541463188211LLU;
	volatile int32_t t15 = -99599203;

	t15 = ((x69==(x70-x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MIN;
	static uint64_t x75 = UINT64_MAX;
	static volatile int32_t t16 = -5362649;

	t16 = ((x73==(x74-x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x82 = 0;
	volatile int64_t x83 = -35240517109LL;
	int16_t x84 = -1;
	volatile int32_t t17 = 150026;

	t17 = ((x81==(x82-x83))==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x85 = 14LLU;
	int32_t x86 = -17374582;
	int16_t x87 = 126;
	volatile uint8_t x88 = 4U;
	static volatile int32_t t18 = 832;

	t18 = ((x85==(x86-x87))==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = INT32_MIN;
	static int16_t x90 = INT16_MAX;
	volatile int32_t x91 = -1;
	volatile int32_t t19 = -28;

	t19 = ((x89==(x90-x91))==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = INT8_MIN;
	uint16_t x95 = 13U;
	static volatile int16_t x96 = -1;
	volatile int32_t t20 = 7;

	t20 = ((x93==(x94-x95))==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	uint64_t x100 = UINT64_MAX;
	int32_t t21 = -5849;

	t21 = ((x97==(x98-x99))==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = -177944;
	volatile int32_t t22 = 48742;

	t22 = ((x105==(x106-x107))==x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -2;
	static int16_t x110 = INT16_MIN;
	uint16_t x111 = 6U;
	int32_t x112 = INT32_MIN;
	volatile int32_t t23 = -30804;

	t23 = ((x109==(x110-x111))==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	int16_t x114 = INT16_MAX;
	volatile int32_t x115 = -21956;
	int16_t x116 = 2196;
	int32_t t24 = -3;

	t24 = ((x113==(x114-x115))==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = 15U;
	int32_t t25 = -2220;

	t25 = ((x117==(x118-x119))==x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x122 = 11U;
	volatile int16_t x123 = 13799;
	volatile int64_t x124 = -1LL;
	static volatile int32_t t26 = 446402;

	t26 = ((x121==(x122-x123))==x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x126 = 56900LLU;
	uint16_t x127 = UINT16_MAX;
	int32_t t27 = 48598;

	t27 = ((x125==(x126-x127))==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = -817;
	volatile int16_t x130 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	int32_t t28 = -966030009;

	t28 = ((x129==(x130-x131))==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = -1LL;
	int32_t x134 = -1;
	uint64_t x135 = 5347924026673LLU;
	int32_t t29 = -15354401;

	t29 = ((x133==(x134-x135))==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MAX;
	static uint64_t x139 = 138639422LLU;
	static int32_t x140 = -1;

	t30 = ((x137==(x138-x139))==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -1;
	int16_t x144 = INT16_MAX;
	int32_t t31 = 61447;

	t31 = ((x141==(x142-x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = INT32_MIN;
	volatile int32_t x147 = -1;
	volatile int16_t x148 = INT16_MAX;
	static volatile int32_t t32 = 822129;

	t32 = ((x145==(x146-x147))==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x151 = 29272382655LL;
	int64_t x152 = -10LL;
	int32_t t33 = 1289760;

	t33 = ((x149==(x150-x151))==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MAX;
	int64_t x154 = INT64_MIN;
	static volatile int64_t x155 = -1LL;

	t34 = ((x153==(x154-x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = 7;
	int8_t x162 = INT8_MIN;
	volatile uint16_t x163 = UINT16_MAX;
	int64_t x164 = -1LL;
	int32_t t35 = -114127;

	t35 = ((x161==(x162-x163))==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x165 = INT32_MIN;
	int16_t x166 = -1;
	int64_t x167 = -38403949520LL;
	int32_t t36 = -1;

	t36 = ((x165==(x166-x167))==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -1LL;
	int64_t x170 = -1LL;
	int32_t x171 = 8034422;
	int64_t x172 = -87707885LL;
	int32_t t37 = -14986;

	t37 = ((x169==(x170-x171))==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = UINT64_MAX;
	int8_t x176 = -2;
	int32_t t38 = -21405;

	t38 = ((x173==(x174-x175))==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = 0;
	int8_t x179 = -16;
	uint32_t x180 = 60422372U;
	int32_t t39 = 319541516;

	t39 = ((x177==(x178-x179))==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x181 = INT64_MAX;
	int64_t x182 = -1LL;
	static int8_t x183 = INT8_MAX;
	int32_t t40 = -2794125;

	t40 = ((x181==(x182-x183))==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -378609483;
	int8_t x186 = -39;
	uint64_t x187 = 69LLU;
	int32_t t41 = -13898382;

	t41 = ((x185==(x186-x187))==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x189 = 70LLU;
	int64_t x190 = -22953419LL;
	int64_t x191 = 275353731372819646LL;
	static uint16_t x192 = 38U;

	t42 = ((x189==(x190-x191))==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = 44;
	static int32_t x194 = -24;
	uint64_t x195 = UINT64_MAX;
	int16_t x196 = -6;
	int32_t t43 = -78;

	t43 = ((x193==(x194-x195))==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x198 = INT8_MIN;
	uint32_t x199 = UINT32_MAX;
	uint32_t x200 = 1357U;
	int32_t t44 = -1893;

	t44 = ((x197==(x198-x199))==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MIN;
	static uint8_t x202 = 44U;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t45 = -25;

	t45 = ((x201==(x202-x203))==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x207 = -1;

	t46 = ((x205==(x206-x207))==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	static uint64_t x210 = 239146266210LLU;
	static uint32_t x211 = 3791U;
	volatile int16_t x212 = INT16_MIN;

	t47 = ((x209==(x210-x211))==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = 3550662851564151134LL;
	int8_t x214 = 23;
	uint8_t x215 = 15U;
	static int64_t x216 = INT64_MIN;
	static int32_t t48 = -168215;

	t48 = ((x213==(x214-x215))==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x217 = INT64_MIN;
	static volatile uint16_t x218 = 5U;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;

	t49 = ((x217==(x218-x219))==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 861697139U;
	int32_t x222 = 227344;
	int16_t x223 = -1027;
	int16_t x224 = INT16_MAX;
	int32_t t50 = -507711029;

	t50 = ((x221==(x222-x223))==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = -1;
	volatile int16_t x226 = INT16_MAX;
	int16_t x227 = -1;
	int16_t x228 = -1;
	volatile int32_t t51 = 35469;

	t51 = ((x225==(x226-x227))==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = 6744;
	int8_t x230 = INT8_MIN;
	volatile int8_t x231 = 26;
	int16_t x232 = 28;
	static volatile int32_t t52 = 481987;

	t52 = ((x229==(x230-x231))==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x233 = 696U;
	volatile int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	volatile int32_t t53 = 3691;

	t53 = ((x233==(x234-x235))==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MIN;
	uint8_t x238 = 56U;
	volatile uint64_t x239 = 18171638536LLU;
	int16_t x240 = -1;
	int32_t t54 = 466;

	t54 = ((x237==(x238-x239))==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x242 = UINT64_MAX;
	int8_t x244 = 0;
	int32_t t55 = -9283;

	t55 = ((x241==(x242-x243))==x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x245 = UINT8_MAX;
	static volatile uint16_t x246 = 163U;
	int8_t x247 = -1;
	volatile uint16_t x248 = UINT16_MAX;
	int32_t t56 = -73085069;

	t56 = ((x245==(x246-x247))==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int64_t x252 = -1LL;

	t57 = ((x249==(x250-x251))==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = -3684960;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;
	int32_t t58 = -7379;

	t58 = ((x253==(x254-x255))==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MAX;
	int64_t x258 = -1LL;
	static int16_t x259 = INT16_MAX;
	uint32_t x260 = 1604491U;
	volatile int32_t t59 = 24058513;

	t59 = ((x257==(x258-x259))==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MIN;
	uint16_t x264 = 268U;
	volatile int32_t t60 = -43185;

	t60 = ((x261==(x262-x263))==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -1LL;
	int16_t x266 = -5;
	volatile int32_t t61 = -963124343;

	t61 = ((x265==(x266-x267))==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x269 = -1;
	int16_t x270 = 1;
	volatile uint64_t x271 = UINT64_MAX;
	int64_t x272 = -102015476LL;
	int32_t t62 = -242926;

	t62 = ((x269==(x270-x271))==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x273 = UINT64_MAX;
	static uint16_t x274 = 6U;
	uint64_t x275 = 1071501665916450LLU;
	uint16_t x276 = 0U;
	int32_t t63 = 11995;

	t63 = ((x273==(x274-x275))==x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t t64 = 125613084;

	t64 = ((x277==(x278-x279))==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = UINT32_MAX;
	static int64_t x282 = 948687523LL;
	int32_t x283 = INT32_MAX;
	int32_t x284 = -1;
	volatile int32_t t65 = -1511;

	t65 = ((x281==(x282-x283))==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x289 = INT32_MIN;
	static int64_t x290 = -7LL;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = -1;
	volatile int32_t t66 = -116795395;

	t66 = ((x289==(x290-x291))==x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = 0;
	static int16_t x295 = INT16_MAX;

	t67 = ((x293==(x294-x295))==x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = 372130U;
	volatile uint8_t x298 = UINT8_MAX;
	int16_t x299 = -1;
	int16_t x300 = INT16_MIN;
	volatile int32_t t68 = -339;

	t68 = ((x297==(x298-x299))==x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = -1;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t69 = 83801376;

	t69 = ((x301==(x302-x303))==x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = 1060706224LL;
	int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MIN;
	static int8_t x308 = -21;

	t70 = ((x305==(x306-x307))==x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = 114970LL;
	int32_t x310 = INT32_MIN;
	volatile int32_t x311 = -103336;
	int8_t x312 = INT8_MIN;
	volatile int32_t t71 = 1;

	t71 = ((x309==(x310-x311))==x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = UINT32_MAX;
	int16_t x314 = 1;
	uint16_t x315 = UINT16_MAX;
	static volatile int32_t t72 = -1536787;

	t72 = ((x313==(x314-x315))==x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x317 = -1343;
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MIN;
	static uint32_t x320 = 39311U;

	t73 = ((x317==(x318-x319))==x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = 6050;
	volatile int32_t x322 = 100;
	volatile uint32_t x323 = 479937655U;
	int32_t x324 = -1;
	int32_t t74 = -1;

	t74 = ((x321==(x322-x323))==x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x325 = 95U;
	int8_t x326 = INT8_MIN;
	int16_t x327 = 0;
	int16_t x328 = INT16_MIN;
	volatile int32_t t75 = -6;

	t75 = ((x325==(x326-x327))==x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x329 = -1;
	uint32_t x331 = UINT32_MAX;
	static uint64_t x332 = 20035LLU;
	int32_t t76 = -15935;

	t76 = ((x329==(x330-x331))==x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x334 = INT16_MIN;
	static int64_t x335 = INT64_MIN;
	volatile uint16_t x336 = 1276U;
	int32_t t77 = 857227;

	t77 = ((x333==(x334-x335))==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x338 = 1430543621009005680LLU;
	uint64_t x339 = 28358334045LLU;
	int8_t x340 = -1;
	int32_t t78 = -59;

	t78 = ((x337==(x338-x339))==x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x341 = INT16_MAX;
	uint8_t x342 = 0U;
	volatile int64_t x343 = -116675LL;
	volatile int16_t x344 = -74;
	int32_t t79 = -745;

	t79 = ((x341==(x342-x343))==x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x345 = 16039;
	volatile uint8_t x346 = UINT8_MAX;
	uint64_t x347 = 0LLU;
	uint32_t x348 = UINT32_MAX;
	int32_t t80 = -124723173;

	t80 = ((x345==(x346-x347))==x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x350 = -91921;
	uint64_t x351 = UINT64_MAX;
	static int64_t x352 = -1LL;
	static volatile int32_t t81 = -397579;

	t81 = ((x349==(x350-x351))==x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = INT16_MIN;
	static int32_t x354 = -1;
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t82 = -56;

	t82 = ((x353==(x354-x355))==x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x361 = 11U;
	int8_t x364 = INT8_MIN;
	int32_t t83 = -19513143;

	t83 = ((x361==(x362-x363))==x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MAX;
	int8_t x367 = INT8_MIN;
	static int32_t x368 = 1;

	t84 = ((x365==(x366-x367))==x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = 2353;
	int64_t x370 = -1LL;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t85 = -16472669;

	t85 = ((x369==(x370-x371))==x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x374 = 1;
	volatile int32_t x375 = -23004946;
	int64_t x376 = INT64_MIN;
	volatile int32_t t86 = 25749;

	t86 = ((x373==(x374-x375))==x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x377 = -42;
	int16_t x378 = -162;
	uint16_t x379 = 231U;
	uint8_t x380 = UINT8_MAX;
	static int32_t t87 = 14;

	t87 = ((x377==(x378-x379))==x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x381 = 1561587159U;
	static int32_t x383 = -1;
	uint8_t x384 = UINT8_MAX;
	static int32_t t88 = 227860;

	t88 = ((x381==(x382-x383))==x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x385 = UINT8_MAX;
	static volatile int8_t x387 = -1;
	int8_t x388 = INT8_MAX;
	volatile int32_t t89 = 347;

	t89 = ((x385==(x386-x387))==x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x389 = 1LL;
	int16_t x390 = -4;
	int16_t x391 = 499;

	t90 = ((x389==(x390-x391))==x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = INT64_MAX;
	static volatile int64_t x394 = 15LL;
	int64_t x395 = -82LL;
	int32_t x396 = INT32_MIN;
	volatile int32_t t91 = 772;

	t91 = ((x393==(x394-x395))==x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x398 = -1939471LL;
	uint8_t x399 = 2U;

	t92 = ((x397==(x398-x399))==x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x410 = INT16_MIN;
	int64_t x412 = -1LL;

	t93 = ((x409==(x410-x411))==x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x413 = 129U;
	volatile int32_t x415 = -6;
	int8_t x416 = -12;
	volatile int32_t t94 = -3431;

	t94 = ((x413==(x414-x415))==x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x417 = -1;
	uint8_t x420 = 1U;
	int32_t t95 = -193;

	t95 = ((x417==(x418-x419))==x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x421 = 29U;
	static int8_t x424 = INT8_MAX;
	volatile int32_t t96 = -3385367;

	t96 = ((x421==(x422-x423))==x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x426 = 22U;
	volatile uint16_t x427 = 19609U;
	int32_t t97 = 72949;

	t97 = ((x425==(x426-x427))==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = -31286498446487830LL;
	int8_t x430 = INT8_MAX;
	static volatile uint64_t x431 = UINT64_MAX;
	volatile int64_t x432 = INT64_MAX;
	int32_t t98 = 56689;

	t98 = ((x429==(x430-x431))==x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x434 = 26033LLU;
	uint16_t x435 = 19U;
	int8_t x436 = INT8_MAX;
	volatile int32_t t99 = -13593;

	t99 = ((x433==(x434-x435))==x436);

	if (t99 != 0) { NG(); } else { ; }
	
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

