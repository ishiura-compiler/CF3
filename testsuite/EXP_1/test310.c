#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x2 = 33U;
volatile uint8_t x7 = UINT8_MAX;
int32_t x9 = -1;
int16_t x10 = INT16_MIN;
int8_t x11 = 1;
static uint16_t x17 = 60U;
volatile uint32_t x22 = 849114U;
volatile uint16_t x24 = UINT16_MAX;
uint8_t x25 = UINT8_MAX;
int32_t x27 = -1;
uint16_t x28 = 38U;
int32_t x32 = INT32_MIN;
static volatile int32_t t6 = -3095;
int16_t x39 = INT16_MIN;
int16_t x49 = -1;
static uint32_t x52 = UINT32_MAX;
int64_t x58 = 26262482061638LL;
static int64_t t12 = 1LL;
int8_t x63 = INT8_MAX;
volatile int64_t t13 = -4628753317LL;
uint16_t x68 = UINT16_MAX;
uint32_t x70 = 0U;
int32_t x75 = INT32_MAX;
uint64_t x77 = 23502881728979LLU;
volatile int64_t t18 = -14931138665877LL;
int64_t x96 = 7247524674508479LL;
static volatile int64_t t20 = -1875LL;
int32_t x101 = INT32_MIN;
int32_t t22 = 346971;
volatile int8_t x107 = INT8_MIN;
volatile int32_t t23 = -193;
int16_t x132 = INT16_MIN;
uint16_t x133 = UINT16_MAX;
int8_t x140 = INT8_MAX;
int32_t x150 = 128021;
uint32_t x153 = UINT32_MAX;
volatile uint32_t t34 = 1436336U;
volatile int16_t x172 = INT16_MIN;
int32_t x173 = INT32_MAX;
static int16_t x174 = INT16_MAX;
uint64_t x178 = 32861182LLU;
uint16_t x179 = 17920U;
uint64_t t38 = 3458LLU;
uint32_t x191 = UINT32_MAX;
static int64_t t41 = -177414938LL;
int8_t x198 = INT8_MIN;
int32_t x201 = INT32_MIN;
int8_t x218 = INT8_MAX;
uint16_t x221 = UINT16_MAX;
int32_t x226 = -1;
volatile uint8_t x229 = 1U;
volatile int64_t t50 = INT64_MIN;
volatile int64_t x235 = 155LL;
static int8_t x236 = INT8_MAX;
volatile int64_t t54 = 145461221LL;
static int16_t x253 = -1;
uint64_t x255 = 356447LLU;
volatile uint64_t t57 = 213696LLU;
volatile int64_t x261 = -1LL;
static int8_t x266 = 3;
static uint64_t x267 = 836LLU;
uint64_t t59 = 311526462040LLU;
int16_t x269 = -182;
uint64_t x273 = UINT64_MAX;
static uint8_t x275 = UINT8_MAX;
int64_t x277 = 1136432964642LL;
int32_t x282 = -1;
int8_t x293 = INT8_MIN;
int32_t x307 = 1;
uint64_t x308 = 471997374140847LLU;
int64_t x311 = -1LL;
uint32_t t69 = 134U;
int32_t x320 = -1514573;
int32_t x327 = INT32_MAX;
static int8_t x328 = 5;
int64_t x331 = INT64_MIN;
uint8_t x339 = UINT8_MAX;
uint64_t x340 = 28514334346LLU;
volatile uint64_t t75 = 424LLU;
int8_t x345 = -30;
uint16_t x348 = UINT16_MAX;
static int16_t x353 = INT16_MIN;
uint8_t x362 = UINT8_MAX;
uint32_t x365 = 102705021U;
volatile int64_t t82 = 195296704LL;
int32_t x378 = INT32_MAX;
int32_t x380 = -1;
int64_t x381 = INT64_MIN;
int16_t x385 = -2;
static volatile uint32_t t86 = 7U;
uint16_t x389 = UINT16_MAX;
static uint32_t x390 = UINT32_MAX;
static volatile uint16_t x391 = 2641U;
int16_t x397 = INT16_MIN;
int32_t x398 = 187000713;
volatile int64_t x399 = -1LL;
int32_t x402 = -1;
int16_t x417 = -1;
int16_t x420 = -1;
int16_t x422 = INT16_MAX;
static int32_t t95 = INT32_MIN;
int8_t x427 = 0;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x3 = 3043U;
	int16_t x4 = INT16_MIN;
	static uint32_t t0 = 554U;

	t0 = (((x1-x2)&x3)&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 6856LLU;
	volatile uint32_t x6 = 827885145U;
	volatile int16_t x8 = -1;
	uint64_t t1 = 8773658997387LLU;

	t1 = (((x5-x6)&x7)&x8);

	if (t1 != 111LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x12 = 10U;
	volatile int32_t t2 = -866004189;

	t2 = (((x9-x10)&x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = -1;
	volatile int16_t x19 = 109;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t3 = 16333838;

	t3 = (((x17-x18)&x19)&x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	int64_t x23 = INT64_MIN;
	volatile int64_t t4 = -14984988920LL;

	t4 = (((x21-x22)&x23)&x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 55U;
	static int32_t t5 = -104581578;

	t5 = (((x25-x26)&x27)&x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MIN;
	static int16_t x30 = INT16_MAX;
	uint16_t x31 = 7U;

	t6 = (((x29-x30)&x31)&x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	volatile uint8_t x34 = 0U;
	uint32_t x35 = 1854133286U;
	static int16_t x36 = -4;
	uint32_t t7 = 7U;

	t7 = (((x33-x34)&x35)&x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	volatile int64_t x38 = INT64_MIN;
	volatile uint32_t x40 = 79394U;
	static volatile int64_t t8 = -139021LL;

	t8 = (((x37-x38)&x39)&x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = INT32_MIN;
	volatile int32_t x46 = -93;
	volatile uint16_t x47 = 3U;
	int16_t x48 = INT16_MAX;
	int32_t t9 = 18680992;

	t9 = (((x45-x46)&x47)&x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = -1;
	int8_t x51 = INT8_MIN;
	uint32_t t10 = 1047555106U;

	t10 = (((x49-x50)&x51)&x52);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 78743U;
	static int16_t x54 = 0;
	int8_t x55 = -53;
	volatile int8_t x56 = -2;
	uint32_t t11 = 119067U;

	t11 = (((x53-x54)&x55)&x56);

	if (t11 != 78722U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -4;
	static uint8_t x59 = 26U;
	int64_t x60 = INT64_MIN;

	t12 = (((x57-x58)&x59)&x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = INT64_MAX;
	static volatile uint8_t x62 = UINT8_MAX;
	int8_t x64 = -1;

	t13 = (((x61-x62)&x63)&x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	static int16_t x66 = 191;
	volatile uint64_t x67 = 2237778577935257LLU;
	uint64_t t14 = 7426LLU;

	t14 = (((x65-x66)&x67)&x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x69 = 6U;
	int64_t x71 = -1LL;
	int64_t x72 = -1LL;
	volatile int64_t t15 = -1952105393199852848LL;

	t15 = (((x69-x70)&x71)&x72);

	if (t15 != 6LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = 12093;
	int32_t x74 = -3728759;
	static uint8_t x76 = 16U;
	static volatile int32_t t16 = -3981857;

	t16 = (((x73-x74)&x75)&x76);

	if (t16 != 16) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x78 = 763LLU;
	int16_t x79 = -2;
	int32_t x80 = INT32_MAX;
	volatile uint64_t t17 = 1LLU;

	t17 = (((x77-x78)&x79)&x80);

	if (t17 != 820684504LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 21311U;
	static uint32_t x82 = 141U;
	int64_t x83 = 1985270305LL;
	volatile int8_t x84 = INT8_MAX;

	t18 = (((x81-x82)&x83)&x84);

	if (t18 != 32LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	volatile uint16_t x86 = 0U;
	volatile int64_t x87 = INT64_MIN;
	uint64_t x88 = UINT64_MAX;
	static volatile uint64_t t19 = 8373325388205533934LLU;

	t19 = (((x85-x86)&x87)&x88);

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	static volatile int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MAX;

	t20 = (((x93-x94)&x95)&x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = 249190;
	static int16_t x98 = INT16_MIN;
	uint8_t x99 = 79U;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t21 = 149163788U;

	t21 = (((x97-x98)&x99)&x100);

	if (t21 != 70U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x102 = INT8_MIN;
	static int32_t x103 = INT32_MAX;
	int32_t x104 = -10151210;

	t22 = (((x101-x102)&x103)&x104);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MAX;
	volatile int8_t x106 = INT8_MIN;
	int16_t x108 = -1;

	t23 = (((x105-x106)&x107)&x108);

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = INT32_MIN;
	uint64_t x110 = 499557345756902218LLU;
	uint32_t x111 = 2U;
	uint64_t x112 = 48080289293LLU;
	uint64_t t24 = 327437956LLU;

	t24 = (((x109-x110)&x111)&x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x121 = 7U;
	volatile int16_t x122 = 1;
	uint16_t x123 = 13U;
	static uint16_t x124 = 76U;
	int32_t t25 = 12577;

	t25 = (((x121-x122)&x123)&x124);

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = 1U;
	static int8_t x127 = 16;
	volatile int64_t x128 = -1LL;
	int64_t t26 = 1078584378LL;

	t26 = (((x125-x126)&x127)&x128);

	if (t26 != 16LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MAX;
	volatile int16_t x130 = -6;
	volatile uint64_t x131 = UINT64_MAX;
	volatile uint64_t t27 = 1257594LLU;

	t27 = (((x129-x130)&x131)&x132);

	if (t27 != 32768LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x134 = 71U;
	uint32_t x135 = 765U;
	int16_t x136 = INT16_MAX;
	static volatile uint32_t t28 = 1881366U;

	t28 = (((x133-x134)&x135)&x136);

	if (t28 != 696U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x137 = -1;
	int8_t x138 = INT8_MAX;
	volatile uint16_t x139 = 58U;
	int32_t t29 = 504;

	t29 = (((x137-x138)&x139)&x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = -1854;
	int64_t x147 = -1LL;
	uint64_t x148 = UINT64_MAX;
	static uint64_t t30 = 0LLU;

	t30 = (((x145-x146)&x147)&x148);

	if (t30 != 18446744073709520702LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x149 = 14;
	uint64_t x151 = 706277373671LLU;
	uint32_t x152 = 1489U;
	uint64_t t31 = 9130198918842LLU;

	t31 = (((x149-x150)&x151)&x152);

	if (t31 != 193LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x154 = 0;
	int32_t x155 = INT32_MIN;
	int32_t x156 = -471073739;
	uint32_t t32 = 2U;

	t32 = (((x153-x154)&x155)&x156);

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = 37U;
	volatile int64_t x158 = 1234LL;
	uint32_t x159 = 26920625U;
	int8_t x160 = INT8_MIN;
	volatile int64_t t33 = 431300789016755394LL;

	t33 = (((x157-x158)&x159)&x160);

	if (t33 != 26919424LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = 354U;
	static int8_t x162 = INT8_MIN;
	uint16_t x163 = UINT16_MAX;
	uint16_t x164 = UINT16_MAX;

	t34 = (((x161-x162)&x163)&x164);

	if (t34 != 482U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = 2855;
	static uint16_t x166 = UINT16_MAX;
	volatile int32_t x167 = INT32_MIN;
	volatile int16_t x168 = INT16_MIN;
	int32_t t35 = INT32_MIN;

	t35 = (((x165-x166)&x167)&x168);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MAX;
	int16_t x170 = INT16_MIN;
	static volatile int32_t x171 = INT32_MIN;
	volatile int32_t t36 = 1785;

	t36 = (((x169-x170)&x171)&x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x175 = 3649U;
	volatile int16_t x176 = INT16_MIN;
	static uint32_t t37 = 1013U;

	t37 = (((x173-x174)&x175)&x176);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = UINT16_MAX;
	int16_t x180 = INT16_MIN;

	t38 = (((x177-x178)&x179)&x180);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = INT8_MIN;
	static volatile uint32_t x182 = 27U;
	volatile int64_t x183 = -53798LL;
	int8_t x184 = INT8_MIN;
	int64_t t39 = 411LL;

	t39 = (((x181-x182)&x183)&x184);

	if (t39 != 4294913280LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = -1LL;
	static uint8_t x190 = 103U;
	static uint64_t x192 = 104104071466466075LLU;
	uint64_t t40 = 15390191727LLU;

	t40 = (((x189-x190)&x191)&x192);

	if (t40 != 4151196440LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MIN;
	volatile int8_t x195 = -25;
	uint16_t x196 = 1014U;

	t41 = (((x193-x194)&x195)&x196);

	if (t41 != 128LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x197 = INT16_MIN;
	volatile uint16_t x199 = 5007U;
	static uint8_t x200 = 11U;
	volatile int32_t t42 = 58;

	t42 = (((x197-x198)&x199)&x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x202 = INT64_MIN;
	int16_t x203 = -1;
	int32_t x204 = INT32_MIN;
	static volatile int64_t t43 = 14LL;

	t43 = (((x201-x202)&x203)&x204);

	if (t43 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -4;
	static uint8_t x206 = 70U;
	static int32_t x207 = INT32_MIN;
	int64_t x208 = -1LL;
	int64_t t44 = 205075910758LL;

	t44 = (((x205-x206)&x207)&x208);

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x209 = 113U;
	static int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MAX;
	static volatile int8_t x212 = INT8_MAX;
	int64_t t45 = -38388682666LL;

	t45 = (((x209-x210)&x211)&x212);

	if (t45 != 113LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x213 = -1LL;
	uint64_t x214 = 629LLU;
	int16_t x215 = INT16_MIN;
	int32_t x216 = 1;
	uint64_t t46 = 1933640LLU;

	t46 = (((x213-x214)&x215)&x216);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x217 = UINT8_MAX;
	int8_t x219 = -1;
	static volatile int16_t x220 = INT16_MIN;
	int32_t t47 = 213018;

	t47 = (((x217-x218)&x219)&x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x222 = INT8_MAX;
	volatile uint32_t x223 = 4U;
	static int32_t x224 = 243635;
	static volatile uint32_t t48 = 713783494U;

	t48 = (((x221-x222)&x223)&x224);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = -197360409;
	int64_t x227 = 26713215421LL;
	int32_t x228 = INT32_MIN;
	static int64_t t49 = -866214378148262587LL;

	t49 = (((x225-x226)&x227)&x228);

	if (t49 != 25769803776LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x230 = 6LL;
	static int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MIN;

	t50 = (((x229-x230)&x231)&x232);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x233 = UINT32_MAX;
	volatile uint16_t x234 = 166U;
	static volatile int64_t t51 = -57917925285290LL;

	t51 = (((x233-x234)&x235)&x236);

	if (t51 != 25LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = 855771U;
	uint8_t x238 = UINT8_MAX;
	int64_t x239 = 666LL;
	static int64_t x240 = INT64_MIN;
	volatile int64_t t52 = 231010LL;

	t52 = (((x237-x238)&x239)&x240);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 20573U;
	int8_t x242 = -1;
	int8_t x243 = -10;
	static int64_t x244 = INT64_MIN;
	int64_t t53 = -94933LL;

	t53 = (((x241-x242)&x243)&x244);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = -1LL;
	uint8_t x246 = 5U;
	uint16_t x247 = 16378U;
	static volatile int8_t x248 = -1;

	t54 = (((x245-x246)&x247)&x248);

	if (t54 != 16378LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x249 = INT8_MAX;
	uint64_t x250 = UINT64_MAX;
	static volatile int32_t x251 = INT32_MAX;
	int32_t x252 = -1975;
	volatile uint64_t t55 = 4205861LLU;

	t55 = (((x249-x250)&x251)&x252);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x254 = INT64_MIN;
	int8_t x256 = -3;
	static uint64_t t56 = 2072007640567LLU;

	t56 = (((x253-x254)&x255)&x256);

	if (t56 != 356445LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = INT32_MAX;
	uint16_t x258 = 25U;
	static uint64_t x259 = 3LLU;
	uint8_t x260 = 75U;

	t57 = (((x257-x258)&x259)&x260);

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x262 = INT32_MAX;
	uint8_t x263 = 0U;
	static volatile int64_t x264 = -1LL;
	int64_t t58 = -850769196580LL;

	t58 = (((x261-x262)&x263)&x264);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 14U;
	uint8_t x268 = 104U;

	t59 = (((x265-x266)&x267)&x268);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x270 = -4318699696LL;
	int8_t x271 = INT8_MAX;
	static uint64_t x272 = UINT64_MAX;
	volatile uint64_t t60 = 5664051384311052374LLU;

	t60 = (((x269-x270)&x271)&x272);

	if (t60 != 122LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x274 = INT32_MIN;
	static uint32_t x276 = 1074U;
	volatile uint64_t t61 = 3053394424359422LLU;

	t61 = (((x273-x274)&x275)&x276);

	if (t61 != 50LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	volatile int64_t t62 = -6293555620432LL;

	t62 = (((x277-x278)&x279)&x280);

	if (t62 != 1136018849792LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x281 = INT8_MIN;
	int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MAX;
	static int64_t t63 = 6788394460LL;

	t63 = (((x281-x282)&x283)&x284);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x289 = 1602588820U;
	uint8_t x290 = UINT8_MAX;
	volatile int16_t x291 = 641;
	volatile uint64_t x292 = UINT64_MAX;
	uint64_t t64 = 6637705820204595225LLU;

	t64 = (((x289-x290)&x291)&x292);

	if (t64 != 641LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x294 = 8862639898285LLU;
	uint32_t x295 = 2055U;
	uint8_t x296 = UINT8_MAX;
	static volatile uint64_t t65 = 116393904LLU;

	t65 = (((x293-x294)&x295)&x296);

	if (t65 != 3LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = -1;
	int8_t x302 = 1;
	volatile int16_t x303 = INT16_MIN;
	volatile uint64_t x304 = 482821062828708LLU;
	uint64_t t66 = 1642635LLU;

	t66 = (((x301-x302)&x303)&x304);

	if (t66 != 482821062819840LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = -1;
	int32_t x306 = INT32_MAX;
	static volatile uint64_t t67 = 305909745198722LLU;

	t67 = (((x305-x306)&x307)&x308);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x309 = -312618807;
	volatile uint16_t x310 = 18368U;
	int64_t x312 = INT64_MIN;
	int64_t t68 = INT64_MIN;

	t68 = (((x309-x310)&x311)&x312);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x313 = 9U;
	volatile int32_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	volatile int8_t x316 = INT8_MAX;

	t69 = (((x313-x314)&x315)&x316);

	if (t69 != 10U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x317 = 143;
	uint32_t x318 = 17U;
	int32_t x319 = 78260;
	uint32_t t70 = 46133414U;

	t70 = (((x317-x318)&x319)&x320);

	if (t70 != 48U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x321 = -198;
	uint16_t x322 = 25291U;
	static uint32_t x323 = UINT32_MAX;
	int32_t x324 = -1;
	volatile uint32_t t71 = 1809828U;

	t71 = (((x321-x322)&x323)&x324);

	if (t71 != 4294941807U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = -1;
	volatile int64_t x326 = INT64_MIN;
	static volatile int64_t t72 = -2514851013040358920LL;

	t72 = (((x325-x326)&x327)&x328);

	if (t72 != 5LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = -17LL;
	int64_t x330 = INT64_MIN;
	volatile uint64_t x332 = 5883689LLU;
	uint64_t t73 = 2LLU;

	t73 = (((x329-x330)&x331)&x332);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile uint32_t x338 = 22957446U;
	static uint64_t t74 = 21029LLU;

	t74 = (((x337-x338)&x339)&x340);

	if (t74 != 10LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = UINT8_MAX;
	uint64_t x342 = 73LLU;
	int8_t x343 = 28;
	static int16_t x344 = INT16_MAX;

	t75 = (((x341-x342)&x343)&x344);

	if (t75 != 20LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x346 = INT16_MAX;
	static uint16_t x347 = UINT16_MAX;
	static volatile int32_t t76 = 6909124;

	t76 = (((x345-x346)&x347)&x348);

	if (t76 != 32739) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x349 = INT8_MIN;
	static int16_t x350 = 287;
	static uint64_t x351 = UINT64_MAX;
	static uint32_t x352 = UINT32_MAX;
	uint64_t t77 = 711014977561622LLU;

	t77 = (((x349-x350)&x351)&x352);

	if (t77 != 4294966881LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x354 = -1;
	int64_t x355 = INT64_MAX;
	static int32_t x356 = INT32_MIN;
	static volatile int64_t t78 = 1061LL;

	t78 = (((x353-x354)&x355)&x356);

	if (t78 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = INT16_MIN;
	volatile uint16_t x359 = 5335U;
	volatile uint8_t x360 = 94U;
	uint64_t t79 = 68937421251LLU;

	t79 = (((x357-x358)&x359)&x360);

	if (t79 != 86LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x361 = UINT32_MAX;
	uint8_t x363 = UINT8_MAX;
	int8_t x364 = INT8_MIN;
	uint32_t t80 = 5914262U;

	t80 = (((x361-x362)&x363)&x364);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = INT64_MIN;
	volatile uint64_t t81 = 266552437323777960LLU;

	t81 = (((x365-x366)&x367)&x368);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x369 = 1U;
	volatile int8_t x370 = -1;
	int64_t x371 = INT64_MAX;
	uint8_t x372 = UINT8_MAX;

	t82 = (((x369-x370)&x371)&x372);

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = 1772544097546608LL;
	static int32_t x374 = 398;
	volatile int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MIN;
	int64_t t83 = -203203LL;

	t83 = (((x373-x374)&x375)&x376);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = 2U;
	int8_t x379 = INT8_MIN;
	volatile uint32_t t84 = 1U;

	t84 = (((x377-x378)&x379)&x380);

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x382 = -417666628LL;
	int16_t x383 = INT16_MAX;
	static int8_t x384 = -3;
	int64_t t85 = -909LL;

	t85 = (((x381-x382)&x383)&x384);

	if (t85 != 5700LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x386 = INT16_MIN;
	uint32_t x387 = 3U;
	volatile int32_t x388 = -1;

	t86 = (((x385-x386)&x387)&x388);

	if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x392 = INT64_MIN;
	static volatile int64_t t87 = 788LL;

	t87 = (((x389-x390)&x391)&x392);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = 3;
	uint64_t x394 = 189LLU;
	int32_t x395 = 5;
	int64_t x396 = INT64_MIN;
	uint64_t t88 = 4212430002870LLU;

	t88 = (((x393-x394)&x395)&x396);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x400 = 0LL;
	volatile int64_t t89 = -238293258677LL;

	t89 = (((x397-x398)&x399)&x400);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = 1;
	int32_t x403 = INT32_MIN;
	int16_t x404 = INT16_MAX;
	int32_t t90 = 0;

	t90 = (((x401-x402)&x403)&x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x405 = 15;
	int16_t x406 = -1;
	volatile int64_t x407 = -72LL;
	int16_t x408 = -436;
	int64_t t91 = -3574073375964804731LL;

	t91 = (((x405-x406)&x407)&x408);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x409 = -1LL;
	uint8_t x410 = 8U;
	static uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MIN;
	int64_t t92 = 14LL;

	t92 = (((x409-x410)&x411)&x412);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = 1;
	uint16_t x414 = UINT16_MAX;
	volatile int8_t x415 = -1;
	int32_t x416 = -1;
	int32_t t93 = -1;

	t93 = (((x413-x414)&x415)&x416);

	if (t93 != -65534) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x418 = 7U;
	volatile int32_t x419 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = (((x417-x418)&x419)&x420);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x421 = 4044U;
	int16_t x423 = INT16_MIN;
	int32_t x424 = INT32_MIN;

	t95 = (((x421-x422)&x423)&x424);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x425 = -991;
	uint16_t x426 = UINT16_MAX;
	static int8_t x428 = INT8_MAX;
	int32_t t96 = -1162870;

	t96 = (((x425-x426)&x427)&x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = -8;
	int64_t x430 = INT64_MIN;
	static int32_t x431 = INT32_MIN;
	int16_t x432 = -1;
	int64_t t97 = 27417LL;

	t97 = (((x429-x430)&x431)&x432);

	if (t97 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = 22LL;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = 545851318838LLU;
	int64_t x436 = -7418LL;
	static volatile uint64_t t98 = 38907074076037933LLU;

	t98 = (((x433-x434)&x435)&x436);

	if (t98 != 6LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = 1;
	int16_t x438 = -1;
	int32_t x439 = INT32_MAX;
	int16_t x440 = 3435;
	volatile int32_t t99 = -10653;

	t99 = (((x437-x438)&x439)&x440);

	if (t99 != 2) { NG(); } else { ; }
	
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

