#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 30241U;
uint64_t x3 = UINT64_MAX;
static uint32_t x11 = 21U;
int32_t t3 = -1040;
int16_t x22 = 5061;
volatile int16_t x26 = INT16_MIN;
int32_t x28 = -484177523;
static int32_t t6 = 8469943;
uint32_t x49 = 3U;
int64_t x60 = 75499156LL;
static int32_t x64 = -3;
int8_t x68 = INT8_MIN;
volatile int8_t x70 = -1;
static volatile int32_t t15 = 3;
volatile int32_t t16 = 179365841;
uint32_t x84 = 43595U;
volatile int16_t x85 = INT16_MIN;
int8_t x86 = -20;
int64_t x91 = 24LL;
volatile int32_t t19 = -1;
int32_t x96 = 27;
int16_t x97 = INT16_MIN;
int32_t t21 = -6727;
uint16_t x101 = 342U;
volatile int32_t t22 = -44090;
volatile uint64_t x105 = 97LLU;
volatile int64_t x106 = 181029542LL;
volatile int64_t x110 = INT64_MIN;
int32_t x113 = -1;
uint16_t x116 = 0U;
volatile uint16_t x118 = UINT16_MAX;
int64_t x120 = INT64_MAX;
int32_t t26 = -55172005;
uint16_t x150 = UINT16_MAX;
int16_t x151 = 1;
static int64_t x159 = -5184884450LL;
volatile uint16_t x160 = UINT16_MAX;
volatile uint32_t x161 = UINT32_MAX;
int32_t t35 = 303966499;
uint64_t x169 = 61LLU;
int16_t x176 = -1;
static volatile int16_t x180 = INT16_MAX;
static uint16_t x181 = 4048U;
int64_t x183 = INT64_MIN;
volatile uint32_t x188 = UINT32_MAX;
static volatile int32_t t40 = -124251;
uint16_t x196 = 13974U;
volatile int32_t t42 = 939729546;
uint32_t x204 = UINT32_MAX;
static int32_t t44 = 3632180;
uint8_t x208 = UINT8_MAX;
int32_t t46 = 3977899;
int32_t x215 = -1;
volatile int16_t x219 = 0;
int32_t x225 = INT32_MIN;
int8_t x227 = 1;
uint8_t x231 = 119U;
int16_t x233 = -1;
static uint64_t x239 = 21696811385522LLU;
static uint8_t x243 = 0U;
int32_t t54 = -51951121;
int8_t x265 = INT8_MAX;
int32_t x269 = INT32_MIN;
static int16_t x272 = INT16_MIN;
static volatile int32_t t59 = 4725;
volatile int32_t t60 = 76925996;
int8_t x277 = 30;
uint8_t x279 = UINT8_MAX;
uint64_t x289 = 26468218065LLU;
int64_t x291 = INT64_MAX;
int32_t x295 = -207243;
static volatile int16_t x297 = -1;
volatile int32_t t66 = 379718615;
uint64_t x305 = 51LLU;
int16_t x306 = -1;
int8_t x310 = INT8_MIN;
static int32_t x311 = -1;
int64_t x312 = INT64_MIN;
int64_t x331 = INT64_MIN;
volatile int32_t t72 = -886812;
volatile int64_t x337 = INT64_MIN;
static int32_t x343 = 551018;
int32_t x347 = -1;
static volatile int32_t x348 = INT32_MAX;
int16_t x350 = -3461;
int16_t x352 = INT16_MIN;
static volatile int32_t t77 = 62942;
int32_t x353 = INT32_MAX;
volatile int8_t x361 = 15;
uint64_t x364 = 45187424LLU;
int64_t x369 = INT64_MIN;
int8_t x375 = -1;
int32_t x382 = INT32_MAX;
static uint8_t x393 = UINT8_MAX;
volatile int32_t x396 = INT32_MIN;
int32_t t87 = 1;
int8_t x398 = INT8_MAX;
uint8_t x409 = 2U;
uint32_t x412 = UINT32_MAX;
volatile int32_t t90 = -73;
int8_t x413 = -1;
uint16_t x416 = 99U;
static volatile int16_t x431 = INT16_MIN;
int8_t x432 = INT8_MIN;
int64_t x437 = -49728287LL;
int16_t x444 = -348;
uint64_t x449 = 1718LLU;


void f0(void) {
	uint16_t x2 = 230U;
	int64_t x4 = 26353385433LL;
	volatile int32_t t0 = 3040;

	t0 = (((x1-x2)&x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 222;
	uint8_t x6 = 5U;
	uint64_t x7 = 12623LLU;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -20441;

	t1 = (((x5-x6)&x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 5844094U;
	volatile uint64_t x10 = 1LLU;
	int8_t x12 = 8;
	volatile int32_t t2 = -7;

	t2 = (((x9-x10)&x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static uint64_t x14 = 264LLU;
	volatile uint16_t x15 = UINT16_MAX;
	static int32_t x16 = INT32_MIN;

	t3 = (((x13-x14)&x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	uint64_t x18 = 684684659LLU;
	static volatile int8_t x19 = 5;
	uint32_t x20 = 107710U;
	int32_t t4 = -506;

	t4 = (((x17-x18)&x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -8942492LL;
	static int32_t x23 = INT32_MAX;
	static int16_t x24 = 766;
	static int32_t t5 = 4644249;

	t5 = (((x21-x22)&x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = -14096LL;
	uint32_t x27 = 585041U;

	t6 = (((x25-x26)&x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int32_t x34 = INT32_MIN;
	volatile int16_t x35 = -113;
	uint64_t x36 = UINT64_MAX;
	int32_t t7 = -38;

	t7 = (((x33-x34)&x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = -1;
	int64_t x39 = INT64_MIN;
	static volatile int8_t x40 = 14;
	volatile int32_t t8 = 173339512;

	t8 = (((x37-x38)&x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x45 = INT8_MIN;
	static int64_t x46 = 276838800LL;
	static volatile uint32_t x47 = 38057U;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t9 = 10529;

	t9 = (((x45-x46)&x47)<=x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x50 = 178403015LLU;
	static int8_t x51 = INT8_MIN;
	int64_t x52 = -7862362609LL;
	volatile int32_t t10 = -7054;

	t10 = (((x49-x50)&x51)<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = UINT8_MAX;
	uint16_t x58 = 369U;
	int32_t x59 = -1;
	int32_t t11 = 901047061;

	t11 = (((x57-x58)&x59)<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x62 = INT8_MIN;
	int64_t x63 = INT64_MAX;
	static volatile int32_t t12 = 18286;

	t12 = (((x61-x62)&x63)<=x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 1489916U;
	volatile int8_t x66 = INT8_MIN;
	int64_t x67 = -1LL;
	int32_t t13 = -2104618;

	t13 = (((x65-x66)&x67)<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x69 = UINT32_MAX;
	uint32_t x71 = UINT32_MAX;
	int64_t x72 = -38381418004857286LL;
	int32_t t14 = -1051;

	t14 = (((x69-x70)&x71)<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = -1;
	uint16_t x75 = 19U;
	static int64_t x76 = 14092467055325772LL;

	t15 = (((x73-x74)&x75)<=x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 11196U;
	uint32_t x78 = 1602332700U;
	volatile int16_t x79 = INT16_MAX;
	static uint8_t x80 = 120U;

	t16 = (((x77-x78)&x79)<=x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x81 = INT8_MIN;
	static int16_t x82 = INT16_MIN;
	volatile int8_t x83 = 1;
	volatile int32_t t17 = -130126;

	t17 = (((x81-x82)&x83)<=x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x87 = 4U;
	uint64_t x88 = 33839959387077814LLU;
	int32_t t18 = 7898897;

	t18 = (((x85-x86)&x87)<=x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	int64_t x90 = -7028253790602LL;
	volatile uint64_t x92 = 25069247742092260LLU;

	t19 = (((x89-x90)&x91)<=x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = INT16_MIN;
	static int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MAX;
	int32_t t20 = 19480331;

	t20 = (((x93-x94)&x95)<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x98 = 30U;
	int64_t x99 = 3388LL;
	static volatile int64_t x100 = INT64_MAX;

	t21 = (((x97-x98)&x99)<=x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x102 = INT64_MAX;
	uint16_t x103 = UINT16_MAX;
	static uint32_t x104 = UINT32_MAX;

	t22 = (((x101-x102)&x103)<=x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x107 = UINT64_MAX;
	int8_t x108 = INT8_MIN;
	int32_t t23 = 159961;

	t23 = (((x105-x106)&x107)<=x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 18352881106577635LLU;
	uint32_t x111 = UINT32_MAX;
	uint8_t x112 = UINT8_MAX;
	int32_t t24 = 850692;

	t24 = (((x109-x110)&x111)<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x114 = 512432210391995LLU;
	uint64_t x115 = 3018005615778LLU;
	volatile int32_t t25 = -3660;

	t25 = (((x113-x114)&x115)<=x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 4U;
	uint8_t x119 = 0U;

	t26 = (((x117-x118)&x119)<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	static uint8_t x126 = 89U;
	int16_t x127 = -1;
	static uint8_t x128 = 0U;
	int32_t t27 = 24964;

	t27 = (((x125-x126)&x127)<=x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = 29095LL;
	int32_t x130 = 129768676;
	static int16_t x131 = INT16_MIN;
	volatile int16_t x132 = -1;
	volatile int32_t t28 = 129739;

	t28 = (((x129-x130)&x131)<=x132);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	static uint16_t x136 = UINT16_MAX;
	volatile int32_t t29 = -1825;

	t29 = (((x133-x134)&x135)<=x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MIN;
	static int32_t x140 = -1;
	volatile int32_t t30 = 1987;

	t30 = (((x137-x138)&x139)<=x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -1LL;
	int64_t x142 = -1LL;
	uint32_t x143 = 22071725U;
	uint16_t x144 = 40U;
	static volatile int32_t t31 = 15062993;

	t31 = (((x141-x142)&x143)<=x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = UINT32_MAX;
	static uint64_t x152 = 4040LLU;
	int32_t t32 = -1466;

	t32 = (((x149-x150)&x151)<=x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = UINT32_MAX;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = -121LL;
	static volatile int32_t t33 = -120745798;

	t33 = (((x153-x154)&x155)<=x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = 12;
	int8_t x158 = INT8_MAX;
	volatile int32_t t34 = -2;

	t34 = (((x157-x158)&x159)<=x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x162 = 0U;
	static uint8_t x163 = 4U;
	volatile int16_t x164 = INT16_MIN;

	t35 = (((x161-x162)&x163)<=x164);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x170 = 3726U;
	volatile uint64_t x171 = 2395LLU;
	volatile int32_t x172 = -233;
	int32_t t36 = -2603087;

	t36 = (((x169-x170)&x171)<=x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x173 = 3234255077887454LLU;
	uint8_t x174 = 54U;
	uint16_t x175 = 0U;
	int32_t t37 = -16064924;

	t37 = (((x173-x174)&x175)<=x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = -970188292203741LL;
	uint8_t x178 = 11U;
	static int16_t x179 = -395;
	volatile int32_t t38 = 125;

	t38 = (((x177-x178)&x179)<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x182 = INT8_MAX;
	static int64_t x184 = 6228243262LL;
	int32_t t39 = 23057660;

	t39 = (((x181-x182)&x183)<=x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x186 = 0U;
	uint16_t x187 = UINT16_MAX;

	t40 = (((x185-x186)&x187)<=x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x189 = 2;
	static int32_t x190 = 3;
	uint64_t x191 = 118204692161182181LLU;
	uint16_t x192 = 33U;
	int32_t t41 = 12770261;

	t41 = (((x189-x190)&x191)<=x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = 399U;
	volatile int16_t x194 = -9203;
	uint8_t x195 = 0U;

	t42 = (((x193-x194)&x195)<=x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = 17U;
	static int32_t x198 = -1;
	volatile uint16_t x199 = UINT16_MAX;
	int16_t x200 = INT16_MAX;
	volatile int32_t t43 = 1;

	t43 = (((x197-x198)&x199)<=x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = -1;
	int8_t x202 = -1;
	int64_t x203 = -581112LL;

	t44 = (((x201-x202)&x203)<=x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = 5028;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MAX;
	static int32_t t45 = -33260;

	t45 = (((x205-x206)&x207)<=x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = 36057504539LL;
	uint8_t x211 = 1U;
	int16_t x212 = INT16_MIN;

	t46 = (((x209-x210)&x211)<=x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x213 = 4LLU;
	int16_t x214 = INT16_MIN;
	int8_t x216 = INT8_MAX;
	volatile int32_t t47 = 13688502;

	t47 = (((x213-x214)&x215)<=x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MAX;
	volatile int8_t x218 = INT8_MAX;
	static uint32_t x220 = 3903U;
	volatile int32_t t48 = 20;

	t48 = (((x217-x218)&x219)<=x220);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x221 = UINT8_MAX;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	int32_t x224 = -649;
	int32_t t49 = 345907;

	t49 = (((x221-x222)&x223)<=x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x226 = INT64_MIN;
	static uint8_t x228 = 13U;
	volatile int32_t t50 = -356;

	t50 = (((x225-x226)&x227)<=x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MAX;
	int8_t x230 = 0;
	static uint32_t x232 = 6U;
	static int32_t t51 = -11433798;

	t51 = (((x229-x230)&x231)<=x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x234 = -1;
	static int8_t x235 = 1;
	uint32_t x236 = 210227U;
	int32_t t52 = 24112722;

	t52 = (((x233-x234)&x235)<=x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = 31046797U;
	static int16_t x238 = INT16_MAX;
	int16_t x240 = 12108;
	int32_t t53 = -1520662;

	t53 = (((x237-x238)&x239)<=x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = INT32_MAX;
	static int8_t x242 = INT8_MAX;
	int8_t x244 = INT8_MIN;

	t54 = (((x241-x242)&x243)<=x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = 29244104;
	static int32_t x250 = INT32_MAX;
	static uint64_t x251 = 3651550274497509LLU;
	static int32_t x252 = INT32_MAX;
	int32_t t55 = -10269659;

	t55 = (((x249-x250)&x251)<=x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x253 = 7484550861658929LLU;
	volatile int8_t x254 = 1;
	int8_t x255 = -5;
	volatile uint8_t x256 = 17U;
	int32_t t56 = 11769;

	t56 = (((x253-x254)&x255)<=x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = INT16_MIN;
	volatile int32_t t57 = 145445;

	t57 = (((x257-x258)&x259)<=x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x266 = UINT16_MAX;
	static volatile int32_t x267 = INT32_MAX;
	static volatile int16_t x268 = -2264;
	static volatile int32_t t58 = 1;

	t58 = (((x265-x266)&x267)<=x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x270 = -1;
	static uint16_t x271 = 8U;

	t59 = (((x269-x270)&x271)<=x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x273 = UINT64_MAX;
	int64_t x274 = -1LL;
	int16_t x275 = -1;
	int8_t x276 = INT8_MIN;

	t60 = (((x273-x274)&x275)<=x276);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x278 = 0U;
	uint64_t x280 = UINT64_MAX;
	static volatile int32_t t61 = 11;

	t61 = (((x277-x278)&x279)<=x280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x281 = -1;
	static int8_t x282 = -1;
	static uint32_t x283 = UINT32_MAX;
	volatile int8_t x284 = INT8_MAX;
	int32_t t62 = 264;

	t62 = (((x281-x282)&x283)<=x284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x290 = INT64_MIN;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t63 = 114215637;

	t63 = (((x289-x290)&x291)<=x292);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x293 = -1;
	uint32_t x294 = 7U;
	int32_t x296 = INT32_MIN;
	static int32_t t64 = -238935;

	t64 = (((x293-x294)&x295)<=x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x298 = 57156LLU;
	int32_t x299 = INT32_MIN;
	volatile uint16_t x300 = UINT16_MAX;
	int32_t t65 = -160478961;

	t65 = (((x297-x298)&x299)<=x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x301 = 30U;
	int64_t x302 = INT64_MAX;
	static int64_t x303 = -1LL;
	int32_t x304 = INT32_MAX;

	t66 = (((x301-x302)&x303)<=x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x307 = UINT16_MAX;
	static volatile int16_t x308 = INT16_MIN;
	volatile int32_t t67 = 188038;

	t67 = (((x305-x306)&x307)<=x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x309 = 43U;
	static int32_t t68 = 43844229;

	t68 = (((x309-x310)&x311)<=x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MAX;
	volatile int8_t x318 = 0;
	int32_t x319 = 6;
	int16_t x320 = -1;
	int32_t t69 = -227029;

	t69 = (((x317-x318)&x319)<=x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = -1LL;
	int16_t x323 = -9;
	uint64_t x324 = 230832413919848009LLU;
	int32_t t70 = 1;

	t70 = (((x321-x322)&x323)<=x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = 26;
	static volatile int16_t x326 = 1;
	uint8_t x327 = UINT8_MAX;
	uint8_t x328 = 9U;
	static volatile int32_t t71 = 3230;

	t71 = (((x325-x326)&x327)<=x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = 200687033084367295LL;
	int8_t x330 = INT8_MAX;
	int8_t x332 = INT8_MIN;

	t72 = (((x329-x330)&x331)<=x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x333 = INT64_MIN;
	static int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MAX;
	static uint8_t x336 = UINT8_MAX;
	static int32_t t73 = 80;

	t73 = (((x333-x334)&x335)<=x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x338 = INT8_MIN;
	static uint8_t x339 = 27U;
	uint64_t x340 = 1749LLU;
	int32_t t74 = -241877;

	t74 = (((x337-x338)&x339)<=x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x341 = INT64_MAX;
	uint32_t x342 = 54894U;
	int64_t x344 = 216162623149211495LL;
	static int32_t t75 = 27859452;

	t75 = (((x341-x342)&x343)<=x344);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -1;
	volatile int8_t x346 = INT8_MAX;
	int32_t t76 = 222;

	t76 = (((x345-x346)&x347)<=x348);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x349 = INT8_MIN;
	uint8_t x351 = 6U;

	t77 = (((x349-x350)&x351)<=x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x354 = 120143171U;
	static volatile int32_t x355 = 1;
	int8_t x356 = -1;
	int32_t t78 = 654394452;

	t78 = (((x353-x354)&x355)<=x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x362 = -1;
	static volatile int64_t x363 = INT64_MIN;
	int32_t t79 = -12;

	t79 = (((x361-x362)&x363)<=x364);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x365 = 11180325714831LLU;
	volatile int32_t x366 = -801272;
	int32_t x367 = -4;
	volatile int32_t x368 = -10;
	volatile int32_t t80 = 962741;

	t80 = (((x365-x366)&x367)<=x368);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x370 = INT8_MIN;
	static uint64_t x371 = 535584736515LLU;
	uint64_t x372 = 6194255LLU;
	static int32_t t81 = -2629;

	t81 = (((x369-x370)&x371)<=x372);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = -1LL;
	volatile int64_t x374 = INT64_MIN;
	static uint8_t x376 = UINT8_MAX;
	volatile int32_t t82 = 6859975;

	t82 = (((x373-x374)&x375)<=x376);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 217368484047764LLU;
	uint32_t x378 = UINT32_MAX;
	int16_t x379 = -1;
	int32_t x380 = INT32_MAX;
	volatile int32_t t83 = 1;

	t83 = (((x377-x378)&x379)<=x380);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x381 = INT16_MAX;
	static int32_t x383 = 237801063;
	int8_t x384 = INT8_MAX;
	static volatile int32_t t84 = 748530;

	t84 = (((x381-x382)&x383)<=x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MAX;
	static uint64_t x387 = 5839LLU;
	uint64_t x388 = 952884833687LLU;
	volatile int32_t t85 = -870804660;

	t85 = (((x385-x386)&x387)<=x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = 1627489U;
	int16_t x390 = INT16_MAX;
	int8_t x391 = 1;
	int64_t x392 = INT64_MIN;
	volatile int32_t t86 = -134;

	t86 = (((x389-x390)&x391)<=x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x394 = -2144LL;
	static volatile int64_t x395 = -1LL;

	t87 = (((x393-x394)&x395)<=x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x397 = 15;
	int32_t x399 = INT32_MAX;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t88 = 61;

	t88 = (((x397-x398)&x399)<=x400);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = -770118229LL;
	uint16_t x406 = UINT16_MAX;
	int8_t x407 = 29;
	volatile int16_t x408 = -13767;
	static volatile int32_t t89 = -201;

	t89 = (((x405-x406)&x407)<=x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x410 = 223745;
	static volatile int8_t x411 = INT8_MIN;

	t90 = (((x409-x410)&x411)<=x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x414 = -3778;
	uint16_t x415 = 647U;
	volatile int32_t t91 = -2471;

	t91 = (((x413-x414)&x415)<=x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x417 = 253868LLU;
	uint32_t x418 = 1416724U;
	volatile int16_t x419 = -51;
	int16_t x420 = -1;
	int32_t t92 = 1;

	t92 = (((x417-x418)&x419)<=x420);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x425 = 2084;
	int32_t x426 = INT32_MAX;
	uint64_t x427 = 121134LLU;
	static uint16_t x428 = 9562U;
	static volatile int32_t t93 = 45;

	t93 = (((x425-x426)&x427)<=x428);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x429 = UINT32_MAX;
	static int16_t x430 = INT16_MIN;
	static int32_t t94 = -346;

	t94 = (((x429-x430)&x431)<=x432);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x433 = 126U;
	int64_t x434 = -2175306453411919154LL;
	int64_t x435 = -1LL;
	static int16_t x436 = INT16_MIN;
	static volatile int32_t t95 = 26;

	t95 = (((x433-x434)&x435)<=x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x438 = UINT8_MAX;
	static volatile int64_t x439 = -10386401276LL;
	static volatile int64_t x440 = 0LL;
	int32_t t96 = 141;

	t96 = (((x437-x438)&x439)<=x440);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x441 = 50U;
	uint32_t x442 = 139107U;
	volatile uint16_t x443 = 5U;
	static volatile int32_t t97 = 62;

	t97 = (((x441-x442)&x443)<=x444);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MIN;
	uint64_t x447 = UINT64_MAX;
	static int32_t x448 = 4;
	volatile int32_t t98 = -86585;

	t98 = (((x445-x446)&x447)<=x448);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x450 = INT64_MIN;
	static uint64_t x451 = 721386858004LLU;
	int64_t x452 = INT64_MAX;
	int32_t t99 = -369;

	t99 = (((x449-x450)&x451)<=x452);

	if (t99 != 1) { NG(); } else { ; }
	
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

