#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x4 = UINT64_MAX;
int32_t x5 = INT32_MIN;
uint16_t x7 = UINT16_MAX;
int32_t x18 = 56009704;
int8_t x20 = -1;
uint16_t x22 = UINT16_MAX;
int32_t t7 = 309397628;
int16_t x37 = 2456;
int8_t x42 = INT8_MAX;
uint32_t x47 = 183367U;
int32_t x50 = INT32_MIN;
volatile int64_t x53 = -1LL;
int32_t x55 = INT32_MAX;
int32_t t14 = -17;
int16_t x71 = -165;
int32_t x85 = -106856919;
int16_t x86 = INT16_MIN;
uint32_t x88 = 287U;
volatile uint32_t x95 = UINT32_MAX;
uint16_t x98 = 0U;
int64_t x99 = 19920716220040012LL;
static volatile int8_t x102 = -1;
int16_t x117 = INT16_MIN;
int16_t x119 = -1;
int64_t x120 = INT64_MIN;
static volatile int32_t x124 = 6;
int32_t t25 = -1;
int64_t x126 = 1LL;
static volatile int32_t t26 = -2745;
int64_t x136 = -79174720LL;
static uint16_t x143 = 1U;
static volatile int32_t t29 = -381148;
static uint64_t x154 = UINT64_MAX;
volatile uint32_t x159 = 12935U;
int32_t t32 = -1302;
uint16_t x169 = 9859U;
int8_t x171 = INT8_MIN;
volatile int8_t x173 = -1;
static volatile uint64_t t35 = 1278643LLU;
uint64_t x178 = UINT64_MAX;
uint32_t x183 = UINT32_MAX;
uint16_t x187 = 7236U;
static int8_t x195 = INT8_MAX;
volatile int64_t x207 = -1LL;
volatile int32_t x212 = -103;
volatile int32_t t44 = 54;
uint16_t x217 = 5403U;
int32_t x220 = -1;
int32_t t46 = 386323;
uint16_t x233 = 15U;
static int64_t x234 = INT64_MAX;
volatile int32_t x235 = INT32_MIN;
int8_t x249 = -1;
uint8_t x252 = 3U;
volatile int32_t t55 = -1;
uint32_t x271 = 74350U;
volatile int32_t x275 = 311306;
static volatile int32_t t58 = -16520;
int8_t x287 = -34;
static int8_t x288 = 2;
int32_t t59 = 367;
static volatile uint32_t x295 = UINT32_MAX;
uint8_t x300 = UINT8_MAX;
static volatile int32_t t62 = -1;
static uint8_t x302 = 46U;
int64_t x307 = -1LL;
volatile int8_t x311 = INT8_MIN;
static uint16_t x312 = 17U;
uint64_t x324 = 596201030885LLU;
int16_t x331 = INT16_MIN;
int32_t t70 = 1;
static int16_t x333 = 2;
int16_t x335 = -1;
int64_t x339 = INT64_MIN;
uint32_t x347 = UINT32_MAX;
uint32_t x354 = 984U;
volatile uint32_t t75 = 109289720U;
volatile int16_t x357 = INT16_MAX;
volatile int8_t x366 = 1;
int8_t x368 = -19;
uint16_t x381 = 89U;
volatile uint32_t x386 = UINT32_MAX;
uint16_t x387 = UINT16_MAX;
uint8_t x388 = UINT8_MAX;
int8_t x394 = INT8_MIN;
int32_t x398 = -1;
uint32_t x404 = UINT32_MAX;
static int32_t t85 = 1;
int8_t x418 = INT8_MIN;
int8_t x424 = 0;
uint32_t x425 = 28U;
int8_t x426 = INT8_MIN;
static volatile uint32_t t90 = 15632595U;
volatile int64_t x437 = INT64_MIN;
int32_t t92 = 1;
int8_t x444 = 41;
int16_t x447 = 1;
volatile int32_t x450 = 508733;
static volatile uint64_t t95 = 140728308950382LLU;
uint32_t x455 = 119659U;
static int32_t x456 = -1;
static uint64_t x457 = UINT64_MAX;
volatile int32_t t97 = 70812422;
int32_t x461 = INT32_MIN;
static volatile uint32_t x464 = 1252069U;
uint16_t x465 = 7U;
int16_t x468 = INT16_MAX;


void f0(void) {
	int8_t x1 = 0;
	uint64_t x2 = 81985272703734LLU;
	static int16_t x3 = INT16_MIN;
	uint64_t t0 = 647937350LLU;

	t0 = (((x1-x2)<x3)&x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int32_t x8 = -6;
	volatile int32_t t1 = -359;

	t1 = (((x5-x6)<x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -168543;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	int64_t x12 = 134716252254126844LL;
	volatile int64_t t2 = -212965484775493LL;

	t2 = (((x9-x10)<x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	volatile uint64_t x14 = 213938843608515388LLU;
	int8_t x15 = -63;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 278;

	t3 = (((x13-x14)<x15)&x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	volatile int16_t x19 = 1;
	volatile int32_t t4 = 0;

	t4 = (((x17-x18)<x19)&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	int16_t x23 = INT16_MIN;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 6;

	t5 = (((x21-x22)<x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = -1;
	int16_t x27 = 884;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 3105;

	t6 = (((x25-x26)<x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int8_t x30 = 10;
	int16_t x31 = INT16_MAX;
	int16_t x32 = INT16_MAX;

	t7 = (((x29-x30)<x31)&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = INT16_MAX;
	static uint8_t x39 = 16U;
	volatile int8_t x40 = -1;
	volatile int32_t t8 = -499;

	t8 = (((x37-x38)<x39)&x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 29435U;
	static uint8_t x43 = 46U;
	int64_t x44 = INT64_MAX;
	int64_t t9 = 2111492275830733034LL;

	t9 = (((x41-x42)<x43)&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	static volatile uint16_t x48 = 1149U;
	int32_t t10 = -26490;

	t10 = (((x45-x46)<x47)&x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -10901LL;
	volatile int8_t x51 = -1;
	volatile uint32_t x52 = 16203558U;
	static volatile uint32_t t11 = 83450285U;

	t11 = (((x49-x50)<x51)&x52);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x54 = UINT64_MAX;
	volatile int16_t x56 = 50;
	int32_t t12 = 12;

	t12 = (((x53-x54)<x55)&x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 21350401994528LLU;
	int8_t x58 = INT8_MIN;
	static int64_t x59 = INT64_MIN;
	static int8_t x60 = 3;
	volatile int32_t t13 = 187;

	t13 = (((x57-x58)<x59)&x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x61 = -1;
	static int32_t x62 = -1;
	int64_t x63 = INT64_MIN;
	static int8_t x64 = INT8_MIN;

	t14 = (((x61-x62)<x63)&x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	volatile int8_t x70 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t15 = 16;

	t15 = (((x69-x70)<x71)&x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	static uint32_t x74 = 2U;
	volatile int64_t x75 = -8894375865371LL;
	int16_t x76 = -1;
	int32_t t16 = 0;

	t16 = (((x73-x74)<x75)&x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = 4324473U;
	static uint8_t x79 = 59U;
	int8_t x80 = INT8_MIN;
	int32_t t17 = -90;

	t17 = (((x77-x78)<x79)&x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x87 = 0U;
	volatile uint32_t t18 = 8509666U;

	t18 = (((x85-x86)<x87)&x88);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = UINT64_MAX;
	uint16_t x94 = 74U;
	int32_t x96 = -16;
	int32_t t19 = 121422507;

	t19 = (((x93-x94)<x95)&x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x97 = -1;
	int8_t x100 = -1;
	volatile int32_t t20 = 8615179;

	t20 = (((x97-x98)<x99)&x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x101 = UINT16_MAX;
	volatile int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	int32_t t21 = 0;

	t21 = (((x101-x102)<x103)&x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	uint8_t x106 = 16U;
	static uint8_t x107 = 5U;
	int64_t x108 = INT64_MIN;
	int64_t t22 = 243247691LL;

	t22 = (((x105-x106)<x107)&x108);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	uint8_t x112 = 46U;
	static int32_t t23 = -1;

	t23 = (((x109-x110)<x111)&x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x118 = -1;
	volatile int64_t t24 = 602869037502172LL;

	t24 = (((x117-x118)<x119)&x120);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x121 = INT32_MIN;
	static volatile uint64_t x122 = UINT64_MAX;
	int32_t x123 = 2809;

	t25 = (((x121-x122)<x123)&x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -21927LL;
	static int8_t x127 = INT8_MAX;
	static volatile int16_t x128 = -609;

	t26 = (((x125-x126)<x127)&x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = -1882;
	volatile uint8_t x134 = 18U;
	uint8_t x135 = UINT8_MAX;
	int64_t t27 = 59652098146LL;

	t27 = (((x133-x134)<x135)&x136);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MIN;
	uint16_t x139 = 458U;
	static uint32_t x140 = UINT32_MAX;
	static volatile uint32_t t28 = 241286861U;

	t28 = (((x137-x138)<x139)&x140);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = 1021119;
	static int32_t x142 = -1;
	uint8_t x144 = 35U;

	t29 = (((x141-x142)<x143)&x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = INT16_MAX;
	int32_t x150 = -1;
	volatile int64_t x151 = -1LL;
	volatile int32_t x152 = INT32_MAX;
	int32_t t30 = -139921607;

	t30 = (((x149-x150)<x151)&x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x153 = UINT32_MAX;
	static volatile int16_t x155 = INT16_MAX;
	volatile uint32_t x156 = UINT32_MAX;
	volatile uint32_t t31 = 96992544U;

	t31 = (((x153-x154)<x155)&x156);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = -14533018011022685LL;
	uint32_t x158 = 40U;
	int32_t x160 = -1;

	t32 = (((x157-x158)<x159)&x160);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x165 = -2677;
	uint64_t x166 = 579482498072LLU;
	int16_t x167 = 936;
	uint64_t x168 = UINT64_MAX;
	static uint64_t t33 = 1435056LLU;

	t33 = (((x165-x166)<x167)&x168);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x170 = 5U;
	int32_t x172 = -1;
	volatile int32_t t34 = 855653;

	t34 = (((x169-x170)<x171)&x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x174 = INT32_MAX;
	volatile int64_t x175 = INT64_MIN;
	uint64_t x176 = 33874789339060537LLU;

	t35 = (((x173-x174)<x175)&x176);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = -3627;
	uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = 0;
	static int32_t t36 = 10627;

	t36 = (((x177-x178)<x179)&x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = -15296;
	int16_t x182 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t37 = -43;

	t37 = (((x181-x182)<x183)&x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x185 = 2U;
	int32_t x186 = -1;
	volatile uint64_t x188 = 4440487348081723970LLU;
	volatile uint64_t t38 = 3333909470559048950LLU;

	t38 = (((x185-x186)<x187)&x188);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MAX;
	int64_t x191 = INT64_MIN;
	static uint16_t x192 = 1U;
	volatile int32_t t39 = -246390160;

	t39 = (((x189-x190)<x191)&x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 2560496U;
	int64_t x194 = -1LL;
	volatile int64_t x196 = -486121LL;
	static volatile int64_t t40 = -492865724713128LL;

	t40 = (((x193-x194)<x195)&x196);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x197 = UINT32_MAX;
	volatile int64_t x198 = INT64_MAX;
	uint32_t x199 = UINT32_MAX;
	static int64_t x200 = -1LL;
	static volatile int64_t t41 = 1482721423381LL;

	t41 = (((x197-x198)<x199)&x200);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = 1;
	uint16_t x202 = 3844U;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t42 = -1987;

	t42 = (((x201-x202)<x203)&x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x205 = UINT32_MAX;
	volatile uint64_t x206 = UINT64_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t43 = 2514;

	t43 = (((x205-x206)<x207)&x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = -3330951866LL;
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;

	t44 = (((x209-x210)<x211)&x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = 31916U;
	int64_t x214 = 2820914524LL;
	volatile uint16_t x215 = 0U;
	volatile uint16_t x216 = 5909U;
	int32_t t45 = -10131;

	t45 = (((x213-x214)<x215)&x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x218 = INT32_MAX;
	volatile uint16_t x219 = 1U;

	t46 = (((x217-x218)<x219)&x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = -1;
	static int8_t x222 = INT8_MIN;
	int8_t x223 = -12;
	int8_t x224 = INT8_MAX;
	int32_t t47 = 5168497;

	t47 = (((x221-x222)<x223)&x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = 1677LLU;
	static int64_t x226 = INT64_MIN;
	volatile uint16_t x227 = 925U;
	int16_t x228 = -3431;
	int32_t t48 = 2910;

	t48 = (((x225-x226)<x227)&x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x236 = 18673389831LL;
	volatile int64_t t49 = 316748377586LL;

	t49 = (((x233-x234)<x235)&x236);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x241 = -1;
	static int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	int32_t x244 = -1;
	static int32_t t50 = 59299;

	t50 = (((x241-x242)<x243)&x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x245 = -1;
	uint32_t x246 = 5263126U;
	static int32_t x247 = 0;
	int8_t x248 = INT8_MIN;
	int32_t t51 = 176858;

	t51 = (((x245-x246)<x247)&x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x250 = INT16_MAX;
	volatile int64_t x251 = INT64_MIN;
	int32_t t52 = 198;

	t52 = (((x249-x250)<x251)&x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MIN;
	int16_t x255 = -1;
	int32_t x256 = 5344863;
	int32_t t53 = 277819;

	t53 = (((x253-x254)<x255)&x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x257 = INT64_MAX;
	uint32_t x258 = 221001U;
	int16_t x259 = INT16_MAX;
	static volatile int32_t x260 = -2;
	volatile int32_t t54 = -1;

	t54 = (((x257-x258)<x259)&x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x265 = INT8_MAX;
	int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MIN;
	int16_t x268 = 50;

	t55 = (((x265-x266)<x267)&x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = INT16_MAX;
	uint8_t x270 = 4U;
	static volatile uint64_t x272 = UINT64_MAX;
	static volatile uint64_t t56 = 16370891424512LLU;

	t56 = (((x269-x270)<x271)&x272);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x273 = UINT8_MAX;
	static int64_t x274 = 984570LL;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t57 = -163374;

	t57 = (((x273-x274)<x275)&x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x281 = 1480LLU;
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 1U;
	int16_t x284 = INT16_MIN;

	t58 = (((x281-x282)<x283)&x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MIN;

	t59 = (((x285-x286)<x287)&x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x289 = 194687222U;
	int32_t x290 = INT32_MIN;
	static int64_t x291 = INT64_MIN;
	static uint32_t x292 = 190U;
	volatile uint32_t t60 = 53735U;

	t60 = (((x289-x290)<x291)&x292);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = 11730082679879LLU;
	int8_t x294 = 1;
	int8_t x296 = INT8_MAX;
	volatile int32_t t61 = -481;

	t61 = (((x293-x294)<x295)&x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = -10133;
	int64_t x298 = 317243101905LL;
	volatile int8_t x299 = 0;

	t62 = (((x297-x298)<x299)&x300);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x301 = 494071LLU;
	volatile uint64_t x303 = UINT64_MAX;
	uint16_t x304 = 30U;
	volatile int32_t t63 = -28599001;

	t63 = (((x301-x302)<x303)&x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = 87;
	uint64_t x306 = 2270465051921548LLU;
	static volatile uint32_t x308 = UINT32_MAX;
	uint32_t t64 = 2151036U;

	t64 = (((x305-x306)<x307)&x308);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x309 = -1;
	static int32_t x310 = -159;
	volatile int32_t t65 = 122968;

	t65 = (((x309-x310)<x311)&x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x313 = -708381;
	int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MAX;
	int64_t x316 = INT64_MIN;
	static int64_t t66 = -515767929926885LL;

	t66 = (((x313-x314)<x315)&x316);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x317 = 0U;
	int8_t x318 = -1;
	int32_t x319 = -1;
	uint32_t x320 = 30U;
	volatile uint32_t t67 = 408843876U;

	t67 = (((x317-x318)<x319)&x320);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x321 = 1;
	volatile int64_t x322 = INT64_MAX;
	int8_t x323 = -6;
	uint64_t t68 = 13LLU;

	t68 = (((x321-x322)<x323)&x324);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x325 = 2U;
	uint64_t x326 = UINT64_MAX;
	int16_t x327 = -1;
	int8_t x328 = INT8_MAX;
	volatile int32_t t69 = 38;

	t69 = (((x325-x326)<x327)&x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = INT32_MIN;
	volatile int32_t x330 = INT32_MIN;
	static int8_t x332 = INT8_MAX;

	t70 = (((x329-x330)<x331)&x332);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x334 = INT32_MAX;
	static volatile uint64_t x336 = 4099031733LLU;
	uint64_t t71 = 2149570LLU;

	t71 = (((x333-x334)<x335)&x336);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x337 = -12;
	int64_t x338 = INT64_MIN;
	volatile int16_t x340 = INT16_MIN;
	volatile int32_t t72 = 1376;

	t72 = (((x337-x338)<x339)&x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = -140;
	int16_t x348 = -94;
	volatile int32_t t73 = 57822381;

	t73 = (((x345-x346)<x347)&x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = -31265LL;
	volatile int32_t x350 = -1;
	int64_t x351 = -1279405297LL;
	int32_t x352 = 103;
	int32_t t74 = -1;

	t74 = (((x349-x350)<x351)&x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x353 = -4;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = UINT32_MAX;

	t75 = (((x353-x354)<x355)&x356);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x358 = 50U;
	int32_t x359 = -1;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t76 = -1958;

	t76 = (((x357-x358)<x359)&x360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x361 = 36U;
	int64_t x362 = -1LL;
	int8_t x363 = INT8_MAX;
	static volatile int32_t x364 = INT32_MIN;
	volatile int32_t t77 = -117797206;

	t77 = (((x361-x362)<x363)&x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = UINT16_MAX;
	static int64_t x367 = INT64_MAX;
	volatile int32_t t78 = -430705242;

	t78 = (((x365-x366)<x367)&x368);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	int32_t t79 = 15592525;

	t79 = (((x373-x374)<x375)&x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x382 = 57588549664LLU;
	int32_t x383 = INT32_MIN;
	uint16_t x384 = UINT16_MAX;
	int32_t t80 = 475009266;

	t80 = (((x381-x382)<x383)&x384);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x385 = 0U;
	volatile int32_t t81 = -1;

	t81 = (((x385-x386)<x387)&x388);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x393 = UINT8_MAX;
	static int8_t x395 = INT8_MIN;
	uint64_t x396 = UINT64_MAX;
	uint64_t t82 = 1432369927982LLU;

	t82 = (((x393-x394)<x395)&x396);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x397 = 166701622U;
	int16_t x399 = -1;
	int64_t x400 = -1LL;
	int64_t t83 = -661437LL;

	t83 = (((x397-x398)<x399)&x400);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x401 = 283988953264LL;
	uint32_t x402 = 1174U;
	int32_t x403 = -1;
	uint32_t t84 = 13U;

	t84 = (((x401-x402)<x403)&x404);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x405 = 2056;
	int8_t x406 = -11;
	static volatile int16_t x407 = INT16_MIN;
	volatile int16_t x408 = INT16_MIN;

	t85 = (((x405-x406)<x407)&x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x409 = -354;
	int32_t x410 = INT32_MIN;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t86 = 68137794;

	t86 = (((x409-x410)<x411)&x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x413 = INT16_MAX;
	static volatile int64_t x414 = 6530504118LL;
	static volatile int32_t x415 = INT32_MIN;
	int32_t x416 = -21829;
	int32_t t87 = -191;

	t87 = (((x413-x414)<x415)&x416);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x417 = 1U;
	int16_t x419 = INT16_MIN;
	uint8_t x420 = UINT8_MAX;
	static int32_t t88 = 54604843;

	t88 = (((x417-x418)<x419)&x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x421 = 4753U;
	int8_t x422 = INT8_MAX;
	static int8_t x423 = -46;
	int32_t t89 = -435448639;

	t89 = (((x421-x422)<x423)&x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x427 = -1LL;
	volatile uint32_t x428 = 7494U;

	t90 = (((x425-x426)<x427)&x428);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x429 = 3;
	int8_t x430 = -1;
	int32_t x431 = INT32_MIN;
	int32_t x432 = 9631;
	int32_t t91 = 12709;

	t91 = (((x429-x430)<x431)&x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x438 = 0U;
	uint32_t x439 = 52961170U;
	uint16_t x440 = UINT16_MAX;

	t92 = (((x437-x438)<x439)&x440);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x441 = INT8_MAX;
	uint32_t x442 = 15U;
	int16_t x443 = INT16_MIN;
	int32_t t93 = 99537172;

	t93 = (((x441-x442)<x443)&x444);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x445 = -327915LL;
	int32_t x446 = INT32_MIN;
	uint64_t x448 = 12977LLU;
	uint64_t t94 = 2200258613285060568LLU;

	t94 = (((x445-x446)<x447)&x448);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x449 = 3107U;
	int16_t x451 = INT16_MAX;
	static uint64_t x452 = 75881LLU;

	t95 = (((x449-x450)<x451)&x452);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x453 = 1752U;
	int16_t x454 = INT16_MIN;
	int32_t t96 = 0;

	t96 = (((x453-x454)<x455)&x456);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x458 = UINT8_MAX;
	uint16_t x459 = UINT16_MAX;
	int8_t x460 = 1;

	t97 = (((x457-x458)<x459)&x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x462 = -1LL;
	int16_t x463 = INT16_MIN;
	uint32_t t98 = 6402164U;

	t98 = (((x461-x462)<x463)&x464);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x466 = 9U;
	int8_t x467 = INT8_MIN;
	int32_t t99 = 312246710;

	t99 = (((x465-x466)<x467)&x468);

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

