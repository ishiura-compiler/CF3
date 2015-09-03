#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -16607393619066504LL;
static int16_t x6 = 471;
int8_t x11 = INT8_MIN;
int16_t x12 = INT16_MIN;
static int64_t x20 = 49779667338945LL;
uint32_t t7 = 0U;
uint8_t x33 = 112U;
int16_t x36 = INT16_MIN;
volatile int64_t t10 = 185894285757298195LL;
static uint8_t x62 = 25U;
volatile int8_t x71 = INT8_MAX;
int64_t t14 = 54292256LL;
int32_t x77 = -21;
int16_t x82 = INT16_MAX;
static int8_t x83 = INT8_MAX;
int64_t x98 = -16887314061363910LL;
uint16_t x100 = 11U;
int32_t t20 = -297;
uint32_t x121 = 541252U;
int32_t x140 = INT32_MIN;
volatile uint32_t t27 = 1188U;
volatile int64_t t29 = 2408876377LL;
int64_t x155 = -29304416615LL;
uint16_t x157 = 146U;
int32_t x158 = 427;
uint64_t x167 = 346079345712041087LLU;
static uint16_t x172 = 933U;
int32_t x183 = INT32_MIN;
volatile int8_t x196 = INT8_MIN;
uint64_t t40 = 222319682LLU;
int32_t x200 = INT32_MIN;
int32_t x202 = 8473797;
uint64_t x210 = 82009896278564211LLU;
int64_t x211 = INT64_MIN;
int32_t x212 = -1;
int8_t x214 = -29;
int8_t x219 = 29;
int8_t x222 = -1;
static int16_t x224 = 100;
volatile int64_t t47 = 3579LL;
static int32_t x225 = INT32_MAX;
static int64_t x231 = -6085LL;
int32_t x233 = 843988308;
static uint64_t x245 = 4542654LLU;
int8_t x250 = -1;
static int32_t x252 = INT32_MAX;
static volatile int64_t t55 = -470856425862723327LL;
static volatile uint16_t x265 = 4U;
static int32_t x267 = 3795;
uint8_t x272 = 7U;
volatile int64_t t57 = 687051LL;
volatile uint32_t t59 = 35070U;
static uint16_t x282 = UINT16_MAX;
int16_t x284 = -1;
volatile int16_t x285 = INT16_MIN;
static volatile int16_t x288 = -1345;
volatile uint64_t x291 = 15627LLU;
uint16_t x303 = 1993U;
uint64_t x305 = 71426417913475437LLU;
uint64_t x307 = 4LLU;
uint32_t t66 = 717207U;
uint64_t x313 = 9952543097667460LLU;
volatile int32_t x323 = INT32_MIN;
volatile uint64_t t68 = 69990436534005373LLU;
static int8_t x325 = INT8_MIN;
int32_t x327 = -4087829;
int32_t x330 = INT32_MAX;
int8_t x338 = 19;
int16_t x356 = INT16_MAX;
volatile int32_t t80 = 89;
volatile uint64_t x383 = 25LLU;
int16_t x386 = INT16_MAX;
volatile uint64_t t84 = 150327254LLU;
int8_t x395 = -1;
uint32_t x400 = UINT32_MAX;
int32_t x408 = -10;
int32_t t89 = -43510;
uint64_t x421 = UINT64_MAX;
int16_t x424 = INT16_MIN;
int8_t x432 = 62;
int16_t x436 = INT16_MIN;
uint64_t x447 = 292772108042955LLU;
int8_t x451 = INT8_MAX;
volatile int16_t x452 = -21;
int8_t x456 = 18;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x3 = -1;
	volatile uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 70479466891LLU;

	t0 = (((x1/x2)*x3)&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2U;
	volatile int16_t x7 = INT16_MIN;
	volatile int32_t x8 = -31816008;
	static volatile int32_t t1 = -63461635;

	t1 = (((x5/x6)*x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 10U;
	volatile int64_t x10 = -24096LL;
	volatile int64_t t2 = -5457410673876198LL;

	t2 = (((x9/x10)*x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MAX;
	int16_t x15 = -4;
	int32_t x16 = 29100;
	static volatile int32_t t3 = -123510837;

	t3 = (((x13/x14)*x15)&x16);

	if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 1;
	int16_t x18 = -6005;
	int16_t x19 = -1;
	static volatile int64_t t4 = -1LL;

	t4 = (((x17/x18)*x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MAX;
	int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 24LLU;

	t5 = (((x21/x22)*x23)&x24);

	if (t5 != 18446744071578845311LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	volatile int8_t x26 = 5;
	int32_t x27 = -1;
	static int64_t x28 = INT64_MAX;
	int64_t t6 = -5LL;

	t6 = (((x25/x26)*x27)&x28);

	if (t6 != 25LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 2U;
	uint32_t x30 = UINT32_MAX;
	volatile int8_t x31 = INT8_MAX;
	uint32_t x32 = 3824U;

	t7 = (((x29/x30)*x31)&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	static int16_t x35 = INT16_MIN;
	volatile int32_t t8 = -397166;

	t8 = (((x33/x34)*x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	volatile int8_t x38 = INT8_MIN;
	volatile uint16_t x39 = 747U;
	uint32_t x40 = 413U;
	uint32_t t9 = 9U;

	t9 = (((x37/x38)*x39)&x40);

	if (t9 != 393U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 5;
	static int64_t x46 = -1LL;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 47U;

	t10 = (((x45/x46)*x47)&x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	uint8_t x50 = UINT8_MAX;
	volatile uint8_t x51 = 0U;
	uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 23723087789LLU;

	t11 = (((x49/x50)*x51)&x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 0U;
	volatile int16_t x63 = -347;
	volatile int64_t x64 = INT64_MIN;
	volatile int64_t t12 = -629304203744531LL;

	t12 = (((x61/x62)*x63)&x64);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -11;
	int16_t x70 = -1;
	int16_t x72 = INT16_MAX;
	volatile int32_t t13 = -807;

	t13 = (((x69/x70)*x71)&x72);

	if (t13 != 1397) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	uint16_t x76 = 1735U;

	t14 = (((x73/x74)*x75)&x76);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x78 = 3637U;
	int32_t x79 = INT32_MIN;
	volatile int64_t x80 = -217268973LL;
	static int64_t t15 = -2005483665766LL;

	t15 = (((x77/x78)*x79)&x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x81 = 66U;
	int16_t x84 = 0;
	int32_t t16 = -70;

	t16 = (((x81/x82)*x83)&x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = 8412854LL;
	static int8_t x87 = -1;
	static int32_t x88 = -989985636;
	int64_t t17 = 111654663LL;

	t17 = (((x85/x86)*x87)&x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = INT16_MIN;
	uint16_t x94 = 6808U;
	int32_t x95 = -1;
	int8_t x96 = INT8_MIN;
	int32_t t18 = -1506071;

	t18 = (((x93/x94)*x95)&x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = 1;
	uint64_t x99 = 864476174455LLU;
	uint64_t t19 = 881613402LLU;

	t19 = (((x97/x98)*x99)&x100);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x105 = -1;
	static volatile int8_t x106 = INT8_MIN;
	int32_t x107 = -7422434;
	static int8_t x108 = INT8_MAX;

	t20 = (((x105/x106)*x107)&x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x109 = UINT16_MAX;
	volatile int16_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = -1LL;
	static int64_t t21 = 81LL;

	t21 = (((x109/x110)*x111)&x112);

	if (t21 != -16711425LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = 0U;
	volatile int32_t x114 = INT32_MIN;
	volatile int32_t x115 = INT32_MIN;
	static int32_t x116 = 31;
	volatile int32_t t22 = -3794;

	t22 = (((x113/x114)*x115)&x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x122 = -21;
	int64_t x123 = INT64_MAX;
	int32_t x124 = 645259461;
	volatile int64_t t23 = -99952301025150LL;

	t23 = (((x121/x122)*x123)&x124);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = INT8_MIN;
	uint16_t x130 = UINT16_MAX;
	static int16_t x131 = INT16_MIN;
	volatile uint32_t x132 = 14462673U;
	uint32_t t24 = 5971U;

	t24 = (((x129/x130)*x131)&x132);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x133 = 8810679U;
	static uint8_t x134 = UINT8_MAX;
	int64_t x135 = -621740034LL;
	int64_t x136 = INT64_MIN;
	int64_t t25 = INT64_MIN;

	t25 = (((x133/x134)*x135)&x136);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x137 = 40U;
	volatile uint64_t x138 = UINT64_MAX;
	int32_t x139 = -1;
	uint64_t t26 = 99201067LLU;

	t26 = (((x137/x138)*x139)&x140);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MIN;
	int16_t x143 = 3;
	uint32_t x144 = 1U;

	t27 = (((x141/x142)*x143)&x144);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x145 = -1;
	int32_t x146 = INT32_MAX;
	static uint16_t x147 = 356U;
	int16_t x148 = INT16_MIN;
	int32_t t28 = 3583915;

	t28 = (((x145/x146)*x147)&x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MAX;
	static int8_t x150 = -1;
	static int64_t x151 = -1LL;
	int16_t x152 = -1;

	t29 = (((x149/x150)*x151)&x152);

	if (t29 != 2147483647LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = INT16_MIN;
	uint32_t x154 = 18280810U;
	volatile int16_t x156 = -1;
	volatile int64_t t30 = 8242LL;

	t30 = (((x153/x154)*x155)&x156);

	if (t30 != -6857233487910LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x159 = INT32_MIN;
	int64_t x160 = INT64_MIN;
	int64_t t31 = -205083044134769LL;

	t31 = (((x157/x158)*x159)&x160);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = INT64_MIN;
	uint64_t x162 = 4LLU;
	static int64_t x163 = INT64_MIN;
	int8_t x164 = -1;
	volatile uint64_t t32 = 195046LLU;

	t32 = (((x161/x162)*x163)&x164);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 16U;
	static int32_t x166 = INT32_MIN;
	int8_t x168 = 4;
	volatile uint64_t t33 = 46280489LLU;

	t33 = (((x165/x166)*x167)&x168);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = INT16_MIN;
	volatile int8_t x170 = -1;
	volatile uint32_t x171 = UINT32_MAX;
	uint32_t t34 = 1364U;

	t34 = (((x169/x170)*x171)&x172);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MAX;
	int8_t x175 = -1;
	static int8_t x176 = 13;
	volatile int32_t t35 = 76;

	t35 = (((x173/x174)*x175)&x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = 1U;
	volatile int8_t x178 = -1;
	int16_t x179 = INT16_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t36 = 9846509U;

	t36 = (((x177/x178)*x179)&x180);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = -1LL;
	int8_t x182 = -1;
	int16_t x184 = INT16_MAX;
	static volatile int64_t t37 = 9LL;

	t37 = (((x181/x182)*x183)&x184);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = -1;
	static uint8_t x186 = UINT8_MAX;
	uint64_t x187 = UINT64_MAX;
	static volatile uint8_t x188 = 31U;
	volatile uint64_t t38 = 123326397178LLU;

	t38 = (((x185/x186)*x187)&x188);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x189 = -9652;
	int8_t x190 = -5;
	uint8_t x191 = 24U;
	volatile int16_t x192 = INT16_MAX;
	static volatile int32_t t39 = 989951;

	t39 = (((x189/x190)*x191)&x192);

	if (t39 != 13552) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x193 = 451478U;
	static int64_t x194 = 1LL;
	uint64_t x195 = 558656681916016536LLU;

	t40 = (((x193/x194)*x195)&x196);

	if (t40 != 17316462322323946240LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x197 = 4836U;
	static int32_t x198 = INT32_MIN;
	int8_t x199 = 1;
	static int32_t t41 = -808584209;

	t41 = (((x197/x198)*x199)&x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = -1;
	volatile int8_t x203 = INT8_MAX;
	volatile int8_t x204 = INT8_MAX;
	int32_t t42 = -505074124;

	t42 = (((x201/x202)*x203)&x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x205 = -1;
	uint32_t x206 = UINT32_MAX;
	volatile int8_t x207 = INT8_MIN;
	int32_t x208 = 20635388;
	volatile uint32_t t43 = 2U;

	t43 = (((x205/x206)*x207)&x208);

	if (t43 != 20635264U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x209 = 5367U;
	static uint64_t t44 = 1997640429790LLU;

	t44 = (((x209/x210)*x211)&x212);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = UINT16_MAX;
	volatile uint8_t x215 = 5U;
	static int8_t x216 = INT8_MAX;
	volatile int32_t t45 = 31773351;

	t45 = (((x213/x214)*x215)&x216);

	if (t45 != 97) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x217 = UINT32_MAX;
	int16_t x218 = -1;
	volatile int32_t x220 = INT32_MAX;
	static volatile uint32_t t46 = 0U;

	t46 = (((x217/x218)*x219)&x220);

	if (t46 != 29U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x221 = -784914LL;
	static int8_t x223 = -1;

	t47 = (((x221/x222)*x223)&x224);

	if (t47 != 100LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x226 = -3656983046446LL;
	uint8_t x227 = 14U;
	volatile int32_t x228 = 727693036;
	int64_t t48 = -197110LL;

	t48 = (((x225/x226)*x227)&x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x229 = -10;
	volatile int64_t x230 = -1LL;
	uint16_t x232 = 2524U;
	static volatile int64_t t49 = 22797LL;

	t49 = (((x229/x230)*x231)&x232);

	if (t49 != 76LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MAX;
	uint32_t x236 = UINT32_MAX;
	int64_t t50 = 670LL;

	t50 = (((x233/x234)*x235)&x236);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = UINT32_MAX;
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MAX;
	uint32_t t51 = 621507U;

	t51 = (((x237/x238)*x239)&x240);

	if (t51 != 2139062272U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x241 = -1;
	volatile int8_t x242 = -1;
	int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = (((x241/x242)*x243)&x244);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x246 = 494186LLU;
	int64_t x247 = -1LL;
	int8_t x248 = 39;
	volatile uint64_t t53 = 325023528LLU;

	t53 = (((x245/x246)*x247)&x248);

	if (t53 != 39LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x249 = 38803U;
	int8_t x251 = -1;
	uint32_t t54 = 51U;

	t54 = (((x249/x250)*x251)&x252);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = -7;
	int32_t x258 = -1;
	volatile uint32_t x259 = UINT32_MAX;
	int64_t x260 = -1LL;

	t55 = (((x257/x258)*x259)&x260);

	if (t55 != 4294967289LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x266 = -1;
	volatile int32_t x268 = -1;
	int32_t t56 = -1166;

	t56 = (((x265/x266)*x267)&x268);

	if (t56 != -15180) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MAX;
	uint16_t x270 = 10316U;
	static volatile int64_t x271 = INT64_MAX;

	t57 = (((x269/x270)*x271)&x272);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MAX;
	volatile int8_t x274 = 16;
	uint32_t x275 = UINT32_MAX;
	int8_t x276 = -1;
	volatile uint32_t t58 = 95690164U;

	t58 = (((x273/x274)*x275)&x276);

	if (t58 != 4294965249U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x277 = INT8_MAX;
	int8_t x278 = 13;
	uint32_t x279 = 503714160U;
	uint16_t x280 = 1642U;

	t59 = (((x277/x278)*x279)&x280);

	if (t59 != 1120U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = 23;
	int32_t x283 = -1;
	int32_t t60 = -2366387;

	t60 = (((x281/x282)*x283)&x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x286 = INT16_MAX;
	uint16_t x287 = UINT16_MAX;
	int32_t t61 = -25;

	t61 = (((x285/x286)*x287)&x288);

	if (t61 != -65535) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MAX;
	volatile int32_t x290 = 455;
	static volatile int8_t x292 = INT8_MIN;
	volatile uint64_t t62 = 480873LLU;

	t62 = (((x289/x290)*x291)&x292);

	if (t62 != 3182570131398241024LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = INT32_MIN;
	static uint16_t x295 = 32463U;
	static int16_t x296 = INT16_MAX;
	int32_t t63 = 634219545;

	t63 = (((x293/x294)*x295)&x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = INT16_MIN;
	volatile int8_t x302 = -1;
	int16_t x304 = 3;
	static int32_t t64 = -1408519;

	t64 = (((x301/x302)*x303)&x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x306 = INT64_MAX;
	volatile int64_t x308 = -552078LL;
	static volatile uint64_t t65 = 5LLU;

	t65 = (((x305/x306)*x307)&x308);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = INT8_MAX;
	static int8_t x310 = 17;
	uint32_t x311 = 125247U;
	int16_t x312 = -27;

	t66 = (((x309/x310)*x311)&x312);

	if (t66 != 876705U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x314 = 51;
	int64_t x315 = -33914LL;
	static int32_t x316 = INT32_MAX;
	volatile uint64_t t67 = 817LLU;

	t67 = (((x313/x314)*x315)&x316);

	if (t67 != 669648336LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x321 = 30;
	int64_t x322 = INT64_MIN;
	uint64_t x324 = 203204798529699LLU;

	t68 = (((x321/x322)*x323)&x324);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x326 = INT64_MAX;
	static uint32_t x328 = 3558U;
	volatile int64_t t69 = 2032412LL;

	t69 = (((x325/x326)*x327)&x328);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = 13;
	uint8_t x331 = 7U;
	uint64_t x332 = 896404545864875LLU;
	static volatile uint64_t t70 = 16375268171770049LLU;

	t70 = (((x329/x330)*x331)&x332);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = 95U;
	static uint16_t x334 = 163U;
	int32_t x335 = -1;
	int64_t x336 = INT64_MIN;
	static volatile int64_t t71 = 0LL;

	t71 = (((x333/x334)*x335)&x336);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x337 = 120U;
	int16_t x339 = 247;
	volatile uint16_t x340 = 55U;
	int32_t t72 = -485;

	t72 = (((x337/x338)*x339)&x340);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	int32_t x344 = -7;
	volatile int64_t t73 = 1804018485LL;

	t73 = (((x341/x342)*x343)&x344);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x345 = INT8_MAX;
	uint64_t x346 = 6738077693232345246LLU;
	static int32_t x347 = 6164951;
	static volatile int16_t x348 = INT16_MAX;
	uint64_t t74 = 833576935LLU;

	t74 = (((x345/x346)*x347)&x348);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 1U;
	static int32_t x350 = 5981;
	int32_t x351 = INT32_MAX;
	int8_t x352 = -1;
	static int32_t t75 = 12;

	t75 = (((x349/x350)*x351)&x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = -11;
	static volatile int32_t x355 = -1;
	volatile int32_t t76 = 7;

	t76 = (((x353/x354)*x355)&x356);

	if (t76 != 29790) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x357 = INT8_MIN;
	static uint16_t x358 = UINT16_MAX;
	uint8_t x359 = 3U;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t77 = 471357309893200176LLU;

	t77 = (((x357/x358)*x359)&x360);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MAX;
	uint32_t x362 = 1U;
	int16_t x363 = INT16_MIN;
	static uint8_t x364 = 102U;
	uint32_t t78 = 91U;

	t78 = (((x361/x362)*x363)&x364);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = 40LL;
	int64_t x366 = INT64_MAX;
	int32_t x367 = INT32_MIN;
	volatile int16_t x368 = 217;
	volatile int64_t t79 = -965387284LL;

	t79 = (((x365/x366)*x367)&x368);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = -1;
	int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MAX;

	t80 = (((x369/x370)*x371)&x372);

	if (t80 != 32640) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x374 = 17311U;
	uint8_t x375 = 6U;
	static uint32_t x376 = UINT32_MAX;
	uint32_t t81 = 6U;

	t81 = (((x373/x374)*x375)&x376);

	if (t81 != 4294967290U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = 7;
	int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t82 = -9198;

	t82 = (((x377/x378)*x379)&x380);

	if (t82 != -1179648) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = -1;
	volatile uint16_t x384 = UINT16_MAX;
	uint64_t t83 = 178704773864LLU;

	t83 = (((x381/x382)*x383)&x384);

	if (t83 != 3200LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x385 = 3262LLU;
	volatile int64_t x387 = -13246707346641660LL;
	int16_t x388 = INT16_MIN;

	t84 = (((x385/x386)*x387)&x388);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = -1;
	int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MAX;
	static uint16_t x392 = UINT16_MAX;
	int64_t t85 = 706490872637LL;

	t85 = (((x389/x390)*x391)&x392);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x393 = 15U;
	int16_t x394 = INT16_MIN;
	int32_t x396 = 1;
	int32_t t86 = -29024495;

	t86 = (((x393/x394)*x395)&x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = 24964U;
	int64_t x398 = INT64_MIN;
	volatile int32_t x399 = -6;
	volatile int64_t t87 = 64188499887097750LL;

	t87 = (((x397/x398)*x399)&x400);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x405 = 1434;
	static int16_t x406 = 89;
	static int8_t x407 = -1;
	int32_t t88 = -1;

	t88 = (((x405/x406)*x407)&x408);

	if (t88 != -16) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = 6U;
	volatile int8_t x411 = INT8_MAX;
	int16_t x412 = INT16_MIN;

	t89 = (((x409/x410)*x411)&x412);

	if (t89 != -720896) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x417 = INT8_MIN;
	int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MAX;
	int32_t x420 = INT32_MAX;
	static int32_t t90 = -13276;

	t90 = (((x417/x418)*x419)&x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x422 = 11LL;
	uint16_t x423 = 49U;
	uint64_t t91 = 14877371410LLU;

	t91 = (((x421/x422)*x423)&x424);

	if (t91 != 8384883669867954176LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x429 = 9U;
	volatile int16_t x430 = INT16_MAX;
	static uint8_t x431 = 31U;
	volatile int32_t t92 = 4807;

	t92 = (((x429/x430)*x431)&x432);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = INT16_MIN;
	volatile int32_t x434 = INT32_MAX;
	int64_t x435 = -1LL;
	int64_t t93 = -11694155LL;

	t93 = (((x433/x434)*x435)&x436);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = -1;
	static int32_t x438 = -1;
	uint64_t x439 = 431LLU;
	uint64_t x440 = 290660LLU;
	volatile uint64_t t94 = 59013624342LLU;

	t94 = (((x437/x438)*x439)&x440);

	if (t94 != 292LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x441 = -140;
	int16_t x442 = INT16_MIN;
	int64_t x443 = -2246300039LL;
	uint32_t x444 = UINT32_MAX;
	volatile int64_t t95 = -947906267230LL;

	t95 = (((x441/x442)*x443)&x444);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = -1LL;
	uint16_t x446 = UINT16_MAX;
	int16_t x448 = INT16_MIN;
	volatile uint64_t t96 = 5793LLU;

	t96 = (((x445/x446)*x447)&x448);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = INT32_MIN;
	int32_t x450 = INT32_MAX;
	static volatile int32_t t97 = 91368;

	t97 = (((x449/x450)*x451)&x452);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x453 = INT8_MIN;
	int16_t x454 = INT16_MIN;
	int8_t x455 = -1;
	volatile int32_t t98 = 31096;

	t98 = (((x453/x454)*x455)&x456);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = INT16_MAX;
	uint8_t x458 = UINT8_MAX;
	int16_t x459 = INT16_MAX;
	int64_t x460 = -80943432597813678LL;
	int64_t t99 = 97249711960636LL;

	t99 = (((x457/x458)*x459)&x460);

	if (t99 != 1787392LL) { NG(); } else { ; }
	
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

