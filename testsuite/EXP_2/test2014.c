#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile int64_t t0 = 2240649456715925LL;
int16_t x5 = -1;
int8_t x7 = INT8_MIN;
int16_t x12 = 0;
uint16_t x13 = UINT16_MAX;
int64_t x14 = -7337385LL;
static uint16_t x17 = 1U;
int32_t t4 = 1536326;
int8_t x26 = -1;
static uint8_t x32 = UINT8_MAX;
int64_t x41 = INT64_MIN;
int32_t x45 = INT32_MIN;
uint64_t x47 = UINT64_MAX;
volatile uint8_t x48 = 3U;
int8_t x50 = INT8_MAX;
uint64_t t12 = UINT64_MAX;
uint32_t x54 = 0U;
static uint64_t x58 = UINT64_MAX;
int64_t x63 = INT64_MIN;
uint8_t x64 = UINT8_MAX;
int16_t x71 = -1;
volatile int64_t x73 = -1LL;
static uint64_t x77 = UINT64_MAX;
int8_t x78 = -1;
uint8_t x80 = 1U;
int8_t x83 = 1;
int64_t x92 = 34633763045786990LL;
uint16_t x97 = 1042U;
int64_t x98 = INT64_MAX;
volatile uint64_t t25 = UINT64_MAX;
uint64_t x108 = UINT64_MAX;
volatile uint64_t t26 = UINT64_MAX;
static uint16_t x111 = 0U;
uint64_t t27 = UINT64_MAX;
uint64_t t28 = UINT64_MAX;
int32_t x132 = -4;
int32_t x133 = -1;
volatile int8_t x134 = INT8_MIN;
int32_t x136 = 2788;
static int64_t x137 = INT64_MAX;
static uint32_t x148 = UINT32_MAX;
volatile uint32_t t38 = UINT32_MAX;
uint8_t x158 = 12U;
static uint64_t x161 = 466585LLU;
volatile int64_t x165 = -1LL;
int32_t x167 = INT32_MAX;
volatile int64_t t41 = 623729349254LL;
volatile int64_t x173 = INT64_MAX;
int64_t x175 = INT64_MIN;
static int8_t x176 = INT8_MIN;
volatile int16_t x181 = -105;
int16_t x187 = INT16_MIN;
static int32_t x189 = -1;
int8_t x190 = INT8_MIN;
int32_t x197 = INT32_MAX;
static int32_t t49 = -1;
uint16_t x203 = UINT16_MAX;
volatile int32_t x208 = -1;
int8_t x211 = 15;
static uint32_t x215 = UINT32_MAX;
volatile int32_t t55 = 402172;
static int64_t x228 = -1LL;
uint16_t x229 = UINT16_MAX;
int16_t x235 = INT16_MIN;
static uint64_t t58 = UINT64_MAX;
uint64_t t59 = UINT64_MAX;
static int16_t x242 = INT16_MIN;
int8_t x243 = INT8_MIN;
volatile int32_t x244 = -227296698;
static uint32_t x245 = UINT32_MAX;
volatile uint8_t x249 = UINT8_MAX;
int8_t x256 = -1;
volatile int16_t x260 = 3478;
uint8_t x269 = UINT8_MAX;
int32_t x272 = 11542647;
volatile int16_t x274 = INT16_MIN;
int8_t x276 = -1;
volatile int64_t t68 = -120357848947407394LL;
int64_t x277 = INT64_MIN;
static int64_t t71 = 4426959LL;
int64_t x303 = 237726760001017975LL;
int8_t x304 = 0;
static uint64_t t75 = 3174LLU;
uint64_t x310 = 569LLU;
int32_t x311 = INT32_MAX;
uint8_t x312 = 73U;
volatile uint64_t x313 = UINT64_MAX;
static volatile uint64_t t78 = UINT64_MAX;
uint64_t x319 = UINT64_MAX;
int16_t x327 = -1;
int32_t x328 = 186824363;
volatile int8_t x330 = 6;
volatile int64_t t83 = 60549LL;
int8_t x339 = 61;
int16_t x344 = INT16_MAX;
int32_t t89 = 31;
static volatile int16_t x367 = -6713;
uint64_t x372 = UINT64_MAX;
volatile int64_t x373 = INT64_MAX;
uint8_t x376 = 14U;
volatile int64_t t93 = 5437448294LL;
int64_t x380 = INT64_MIN;
uint8_t x381 = 28U;
static int64_t x389 = -1LL;
volatile int64_t t98 = 544LL;


void f0(void) {
	static int64_t x1 = -1LL;
	uint32_t x2 = UINT32_MAX;
	int32_t x4 = -13;

	t0 = ((x1|(x2|x3))|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	volatile uint32_t x8 = 4026378U;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x5|(x6|x7))|x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int16_t x10 = INT16_MAX;
	static int64_t x11 = INT64_MAX;
	static int64_t t2 = INT64_MAX;

	t2 = ((x9|(x10|x11))|x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x15 = INT32_MIN;
	static uint32_t x16 = 1819U;
	int64_t t3 = -1104991173367995LL;

	t3 = ((x13|(x14|x15))|x16);

	if (t3 != -7274497LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 130603570;
	uint16_t x19 = 2406U;
	int8_t x20 = -3;

	t4 = ((x17|(x18|x19))|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 47U;
	static int64_t x22 = INT64_MIN;
	int16_t x23 = 510;
	int8_t x24 = INT8_MIN;
	int64_t t5 = -190934145750LL;

	t5 = ((x21|(x22|x23))|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = INT32_MIN;
	uint32_t x27 = 105377247U;
	int8_t x28 = INT8_MIN;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = ((x25|(x26|x27))|x28);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	volatile int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	int64_t t7 = 30797766320LL;

	t7 = ((x29|(x30|x31))|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int16_t x34 = -12901;
	int64_t x35 = INT64_MAX;
	volatile int8_t x36 = -16;
	volatile int64_t t8 = -46472761LL;

	t8 = ((x33|(x34|x35))|x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int64_t x38 = INT64_MIN;
	static uint8_t x39 = UINT8_MAX;
	static int32_t x40 = 16708172;
	volatile int64_t t9 = 433853574010LL;

	t9 = ((x37|(x38|x39))|x40);

	if (t9 != -2130775297LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	static volatile uint64_t x43 = 2825434683637764LLU;
	int32_t x44 = 62;
	static uint64_t t10 = 1917990056795341LLU;

	t10 = ((x41|(x42|x43))|x44);

	if (t10 != 9226197471538413630LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = 0;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = ((x45|(x46|x47))|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 8130424LLU;
	int32_t x51 = -1;
	static uint16_t x52 = UINT16_MAX;

	t12 = ((x49|(x50|x51))|x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MIN;
	static volatile uint32_t t13 = 15846931U;

	t13 = ((x53|(x54|x55))|x56);

	if (t13 != 2147516415U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 0U;
	static int16_t x59 = 13248;
	static int32_t x60 = INT32_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = ((x57|(x58|x59))|x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = -120027595885LL;
	static int64_t t15 = 826634465LL;

	t15 = ((x61|(x62|x63))|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -3;
	static volatile int32_t x66 = -485109410;
	static int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 15238079;

	t16 = ((x65|(x66|x67))|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 4466U;
	static uint64_t x70 = UINT64_MAX;
	static int64_t x72 = 125038664862534LL;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x69|(x70|x71))|x72);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	volatile int64_t x75 = -20LL;
	int64_t x76 = INT64_MAX;
	volatile int64_t t18 = 20065516500LL;

	t18 = ((x73|(x74|x75))|x76);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x79 = INT32_MAX;
	static uint64_t t19 = UINT64_MAX;

	t19 = ((x77|(x78|x79))|x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	static int64_t x82 = INT64_MIN;
	volatile int16_t x84 = INT16_MIN;
	int64_t t20 = -21284082LL;

	t20 = ((x81|(x82|x83))|x84);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	volatile int16_t x86 = INT16_MIN;
	int64_t x87 = 5590855LL;
	int8_t x88 = -1;
	volatile int64_t t21 = -184LL;

	t21 = ((x85|(x86|x87))|x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 62U;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	volatile int64_t t22 = 6LL;

	t22 = ((x89|(x90|x91))|x92);

	if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	static uint32_t x94 = 4U;
	volatile int8_t x95 = 30;
	uint32_t x96 = 3655U;
	uint32_t t23 = 1455027277U;

	t23 = ((x93|(x94|x95))|x96);

	if (t23 != 4294938207U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x99 = INT64_MIN;
	int8_t x100 = 6;
	static int64_t t24 = -2811648141128LL;

	t24 = ((x97|(x98|x99))|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	static int32_t x104 = -1;

	t25 = ((x101|(x102|x103))|x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	int8_t x106 = -1;
	int8_t x107 = INT8_MAX;

	t26 = ((x105|(x106|x107))|x108);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	volatile uint64_t x110 = UINT64_MAX;
	int8_t x112 = INT8_MIN;

	t27 = ((x109|(x110|x111))|x112);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 0;
	int8_t x114 = -1;
	static int8_t x115 = 0;
	uint64_t x116 = 387LLU;

	t28 = ((x113|(x114|x115))|x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int8_t x118 = -1;
	int8_t x119 = INT8_MAX;
	int32_t x120 = 410249257;
	int32_t t29 = -223971;

	t29 = ((x117|(x118|x119))|x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MAX;
	volatile int16_t x123 = -1;
	uint32_t x124 = 15361912U;
	int64_t t30 = 31146224739872651LL;

	t30 = ((x121|(x122|x123))|x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MAX;
	uint64_t x126 = 7LLU;
	volatile uint64_t x127 = 21652628934LLU;
	uint8_t x128 = UINT8_MAX;
	uint64_t t31 = 84071LLU;

	t31 = ((x125|(x126|x127))|x128);

	if (t31 != 21652635647LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 19767569U;
	int32_t x130 = -1;
	int64_t x131 = INT64_MAX;
	static int64_t t32 = -768840567728927799LL;

	t32 = ((x129|(x130|x131))|x132);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x135 = 238U;
	uint32_t t33 = UINT32_MAX;

	t33 = ((x133|(x134|x135))|x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = UINT16_MAX;
	uint32_t x139 = 186344U;
	int64_t x140 = INT64_MIN;
	int64_t t34 = 15764227994512207LL;

	t34 = ((x137|(x138|x139))|x140);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	uint64_t x142 = 6669761LLU;
	int64_t x143 = 26493984LL;
	uint64_t x144 = 63707LLU;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x141|(x142|x143))|x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint8_t x146 = UINT8_MAX;
	uint8_t x147 = 6U;
	int64_t t36 = INT64_MAX;

	t36 = ((x145|(x146|x147))|x148);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	static volatile uint16_t x150 = 14U;
	uint8_t x151 = UINT8_MAX;
	int8_t x152 = INT8_MIN;
	int32_t t37 = -801500;

	t37 = ((x149|(x150|x151))|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	static volatile uint16_t x154 = 368U;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = UINT32_MAX;

	t38 = ((x153|(x154|x155))|x156);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = 16;
	int64_t x159 = -430LL;
	static int8_t x160 = INT8_MIN;
	int64_t t39 = -4043120LL;

	t39 = ((x157|(x158|x159))|x160);

	if (t39 != -34LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 8393186U;
	static int32_t x163 = -1;
	int32_t x164 = INT32_MIN;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x161|(x162|x163))|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 11U;
	int8_t x168 = 4;

	t41 = ((x165|(x166|x167))|x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = -1;
	static int64_t x171 = -876094LL;
	uint64_t x172 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = ((x169|(x170|x171))|x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x174 = 126U;
	volatile int64_t t43 = 318LL;

	t43 = ((x173|(x174|x175))|x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int64_t x178 = INT64_MIN;
	volatile int8_t x179 = 10;
	int64_t x180 = INT64_MAX;
	int64_t t44 = -5287673609182LL;

	t44 = ((x177|(x178|x179))|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = INT32_MAX;
	int32_t x183 = 0;
	uint64_t x184 = 356LLU;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = ((x181|(x182|x183))|x184);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x185 = 49LLU;
	int8_t x186 = -1;
	static int16_t x188 = 2;
	uint64_t t46 = UINT64_MAX;

	t46 = ((x185|(x186|x187))|x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x191 = 11;
	int16_t x192 = -1;
	int32_t t47 = -3288700;

	t47 = ((x189|(x190|x191))|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -1;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 8U;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -456242;

	t48 = ((x193|(x194|x195))|x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	uint8_t x199 = 1U;
	int16_t x200 = INT16_MAX;

	t49 = ((x197|(x198|x199))|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MAX;
	volatile int64_t x202 = 219559LL;
	int8_t x204 = INT8_MIN;
	static volatile int64_t t50 = -5912LL;

	t50 = ((x201|(x202|x203))|x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	volatile uint64_t x206 = UINT64_MAX;
	static int64_t x207 = 74LL;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x205|(x206|x207))|x208);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -480734658;
	int64_t x210 = -1805LL;
	uint16_t x212 = 430U;
	volatile int64_t t52 = 1LL;

	t52 = ((x209|(x210|x211))|x212);

	if (t52 != -1025LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -1LL;
	int32_t x214 = 87239;
	volatile int8_t x216 = INT8_MAX;
	volatile int64_t t53 = -10464LL;

	t53 = ((x213|(x214|x215))|x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 83838034U;
	volatile int16_t x218 = INT16_MIN;
	int8_t x219 = 8;
	volatile int32_t x220 = INT32_MIN;
	volatile uint32_t t54 = 2989213U;

	t54 = ((x217|(x218|x219))|x220);

	if (t54 != 4294952026U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 5;
	static int8_t x222 = -25;
	static int16_t x223 = INT16_MIN;
	uint8_t x224 = 0U;

	t55 = ((x221|(x222|x223))|x224);

	if (t55 != -25) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MAX;
	uint8_t x226 = 2U;
	static int8_t x227 = INT8_MAX;
	int64_t t56 = 279LL;

	t56 = ((x225|(x226|x227))|x228);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	int16_t x232 = 196;
	static int64_t t57 = -3817877698101566826LL;

	t57 = ((x229|(x230|x231))|x232);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1;
	int32_t x234 = INT32_MIN;
	volatile uint64_t x236 = 112869336067962LLU;

	t58 = ((x233|(x234|x235))|x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 7351718632633860363LLU;
	volatile int8_t x238 = INT8_MAX;
	int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MAX;

	t59 = ((x237|(x238|x239))|x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int32_t t60 = 1179521;

	t60 = ((x241|(x242|x243))|x244);

	if (t60 != -58) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x246 = 11U;
	int8_t x247 = INT8_MIN;
	int8_t x248 = 15;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = ((x245|(x246|x247))|x248);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x250 = INT16_MIN;
	volatile int16_t x251 = -1;
	static uint8_t x252 = UINT8_MAX;
	int32_t t62 = 976322248;

	t62 = ((x249|(x250|x251))|x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -14;
	int8_t x254 = INT8_MIN;
	uint8_t x255 = 47U;
	static int32_t t63 = 13;

	t63 = ((x253|(x254|x255))|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = UINT64_MAX;
	int32_t x258 = 19;
	int16_t x259 = -37;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x257|(x258|x259))|x260);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = UINT16_MAX;
	int64_t x262 = -408343863151178LL;
	uint16_t x263 = 2U;
	uint16_t x264 = 24U;
	static int64_t t65 = 25641LL;

	t65 = ((x261|(x262|x263))|x264);

	if (t65 != -408343863099393LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MAX;
	int16_t x266 = 8;
	int16_t x267 = -12251;
	int32_t x268 = -1;
	int32_t t66 = 0;

	t66 = ((x265|(x266|x267))|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x270 = 787LL;
	volatile int32_t x271 = -1;
	volatile int64_t t67 = -86027985082387719LL;

	t67 = ((x269|(x270|x271))|x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 3U;
	int64_t x275 = -1LL;

	t68 = ((x273|(x274|x275))|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x278 = UINT64_MAX;
	static uint8_t x279 = 3U;
	int64_t x280 = -64LL;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x277|(x278|x279))|x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = -34LL;
	volatile uint64_t x283 = 7586LLU;
	uint64_t x284 = 52888385LLU;
	static volatile uint64_t t70 = UINT64_MAX;

	t70 = ((x281|(x282|x283))|x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 1U;
	int32_t x286 = -1;
	static int8_t x287 = -21;
	int64_t x288 = -1LL;

	t71 = ((x285|(x286|x287))|x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	uint64_t x290 = UINT64_MAX;
	uint16_t x291 = UINT16_MAX;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = ((x289|(x290|x291))|x292);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -1;
	int64_t x294 = -1LL;
	volatile int32_t x295 = 4711980;
	int32_t x296 = -1;
	int64_t t73 = 57378LL;

	t73 = ((x293|(x294|x295))|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 12;
	int8_t x298 = -1;
	static int8_t x299 = 4;
	static uint8_t x300 = UINT8_MAX;
	int32_t t74 = 14408;

	t74 = ((x297|(x298|x299))|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 28507U;
	uint64_t x302 = 7707LLU;

	t75 = ((x301|(x302|x303))|x304);

	if (t75 != 237726760001044351LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 13224101124458LLU;
	uint32_t x306 = 10U;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = INT16_MIN;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x305|(x306|x307))|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 37U;
	uint64_t t77 = 1852958523686256LLU;

	t77 = ((x309|(x310|x311))|x312);

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = UINT64_MAX;
	volatile uint16_t x315 = 1U;
	int64_t x316 = INT64_MIN;

	t78 = ((x313|(x314|x315))|x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = -1;
	static volatile int16_t x318 = 18;
	static uint8_t x320 = UINT8_MAX;
	static uint64_t t79 = UINT64_MAX;

	t79 = ((x317|(x318|x319))|x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	static uint16_t x322 = 96U;
	int32_t x323 = -1;
	static int64_t x324 = 1538LL;
	int64_t t80 = -672849345LL;

	t80 = ((x321|(x322|x323))|x324);

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int16_t x326 = INT16_MIN;
	int32_t t81 = -1627;

	t81 = ((x325|(x326|x327))|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 55105998U;
	static int64_t x331 = INT64_MIN;
	static int32_t x332 = INT32_MIN;
	int64_t t82 = 299095216069137LL;

	t82 = ((x329|(x330|x331))|x332);

	if (t82 != -2092377650LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -573;
	volatile int64_t x334 = 87734031269834LL;
	static volatile uint8_t x335 = 29U;
	int32_t x336 = INT32_MIN;

	t83 = ((x333|(x334|x335))|x336);

	if (t83 != -33LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 35U;
	uint16_t x338 = 0U;
	int64_t x340 = 0LL;
	int64_t t84 = -229893LL;

	t84 = ((x337|(x338|x339))|x340);

	if (t84 != 63LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MIN;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = INT64_MAX;
	int64_t t85 = -293913959993327LL;

	t85 = ((x341|(x342|x343))|x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 2665LLU;
	int32_t x346 = INT32_MIN;
	volatile int64_t x347 = -534878379205450923LL;
	volatile uint16_t x348 = 0U;
	uint64_t t86 = 38387760885821345LLU;

	t86 = ((x345|(x346|x347))|x348);

	if (t86 != 18446744072391240573LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	int8_t x350 = -6;
	static int16_t x351 = INT16_MAX;
	static int64_t x352 = -54286516585LL;
	int64_t t87 = 170001040987816361LL;

	t87 = ((x349|(x350|x351))|x352);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 30066U;
	uint8_t x354 = 0U;
	int16_t x355 = -875;
	uint32_t x356 = 53099320U;
	uint32_t t88 = UINT32_MAX;

	t88 = ((x353|(x354|x355))|x356);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = -11228;
	static int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;

	t89 = ((x357|(x358|x359))|x360);

	if (t89 != -92) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	volatile uint8_t x363 = 83U;
	uint8_t x364 = UINT8_MAX;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x361|(x362|x363))|x364);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	volatile int16_t x366 = -1;
	int32_t x368 = 190925475;
	volatile int32_t t91 = 62502415;

	t91 = ((x365|(x366|x367))|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 1;
	int32_t x370 = -1;
	volatile int8_t x371 = INT8_MIN;
	static volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x369|(x370|x371))|x372);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x374 = 24U;
	int16_t x375 = -1;

	t93 = ((x373|(x374|x375))|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	volatile uint32_t x378 = 116581U;
	uint8_t x379 = 0U;
	volatile int64_t t94 = -37LL;

	t94 = ((x377|(x378|x379))|x380);

	if (t94 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = -1;
	int16_t x384 = 1;
	uint32_t t95 = UINT32_MAX;

	t95 = ((x381|(x382|x383))|x384);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int64_t x386 = -500LL;
	static int64_t x387 = 3796841952745392855LL;
	uint16_t x388 = 5359U;
	int64_t t96 = 28124914646LL;

	t96 = ((x385|(x386|x387))|x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = -4606;
	uint16_t x391 = 1246U;
	int32_t x392 = INT32_MIN;
	int64_t t97 = -376065605442551LL;

	t97 = ((x389|(x390|x391))|x392);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 38710828U;
	int64_t x394 = INT64_MIN;
	volatile int32_t x395 = -11;
	volatile int32_t x396 = -1;

	t98 = ((x393|(x394|x395))|x396);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -1;
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MIN;
	volatile int64_t t99 = -30002LL;

	t99 = ((x397|(x398|x399))|x400);

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

