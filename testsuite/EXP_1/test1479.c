#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
int64_t x6 = -27534LL;
static int32_t x13 = -2137233;
int64_t x26 = -189058192950242215LL;
uint16_t x29 = UINT16_MAX;
int16_t x30 = 8283;
static int64_t x32 = -1LL;
volatile int16_t x36 = -1;
volatile int32_t t8 = 83543539;
static volatile int32_t t9 = -7018767;
int8_t x41 = 48;
int8_t x45 = 1;
volatile uint32_t x61 = 1U;
static int32_t x62 = -1275;
static int32_t x63 = -6258;
volatile uint32_t x65 = 2183U;
static uint8_t x70 = 5U;
static int32_t t17 = 3345151;
uint32_t x78 = 1U;
volatile uint8_t x80 = UINT8_MAX;
volatile int32_t t20 = 3308637;
int16_t x87 = INT16_MIN;
uint8_t x95 = 6U;
uint8_t x106 = 0U;
int8_t x111 = -1;
static int32_t x121 = INT32_MIN;
static int32_t t31 = 7;
static int64_t x134 = INT64_MAX;
uint16_t x135 = 4U;
int32_t x138 = INT32_MIN;
volatile uint16_t x139 = 4076U;
volatile int32_t x140 = INT32_MIN;
int32_t t35 = -384902605;
int8_t x145 = INT8_MIN;
uint32_t x146 = 0U;
int32_t x150 = INT32_MAX;
volatile int32_t t37 = -579;
volatile uint8_t x155 = UINT8_MAX;
int64_t x157 = -900832421821165469LL;
int8_t x164 = -1;
volatile int32_t t40 = 0;
static uint16_t x179 = UINT16_MAX;
int32_t t44 = 3378697;
int8_t x182 = -1;
uint16_t x189 = 5741U;
static uint32_t x195 = UINT32_MAX;
uint16_t x196 = 17865U;
int8_t x198 = -19;
int8_t x200 = 3;
uint8_t x201 = UINT8_MAX;
volatile uint64_t x202 = 16093675300736968LLU;
uint32_t x204 = UINT32_MAX;
uint16_t x206 = 0U;
volatile int32_t x207 = INT32_MIN;
int32_t x215 = INT32_MAX;
int64_t x218 = -257629LL;
volatile int64_t x229 = INT64_MIN;
int64_t x230 = -1LL;
int32_t x234 = -1;
uint32_t x237 = 62U;
int64_t x242 = INT64_MIN;
int32_t x253 = -1;
static uint8_t x257 = 6U;
static uint16_t x263 = UINT16_MAX;
int64_t x267 = 121019983624LL;
volatile int32_t x271 = INT32_MIN;
volatile int8_t x273 = 5;
volatile int16_t x276 = -1;
static uint64_t x280 = 7LLU;
static uint32_t x281 = UINT32_MAX;
int32_t t70 = -859166;
static volatile int32_t x285 = -463968;
int64_t x288 = 2317LL;
int32_t t71 = 97219;
static volatile uint64_t x289 = UINT64_MAX;
int16_t x301 = INT16_MAX;
int8_t x316 = -1;
uint8_t x319 = 3U;
static volatile int16_t x320 = -1;
int64_t x322 = INT64_MAX;
volatile uint64_t x323 = 1934425LLU;
static uint16_t x324 = UINT16_MAX;
static int8_t x326 = INT8_MAX;
static uint64_t x328 = 2044047544817162LLU;
volatile int32_t t81 = 1;
int8_t x336 = INT8_MIN;
static int32_t t83 = 3;
int32_t x337 = -1;
int64_t x341 = INT64_MIN;
static uint64_t x343 = 12LLU;
static volatile int32_t t85 = 2;
volatile int16_t x346 = -1;
uint64_t x348 = 1037989801492065LLU;
volatile uint32_t x355 = 2045U;
uint8_t x356 = 9U;
static int16_t x359 = INT16_MIN;
uint8_t x360 = 1U;
int32_t t89 = -14;
int32_t t90 = 56;
static int16_t x365 = 58;
int8_t x366 = INT8_MIN;
int8_t x373 = -1;
uint64_t x375 = 403931223469LLU;
volatile int32_t t93 = 822;
uint32_t x378 = UINT32_MAX;
static volatile int64_t x380 = INT64_MIN;
uint8_t x384 = UINT8_MAX;
volatile uint16_t x390 = 1U;
volatile uint16_t x396 = 1013U;


void f0(void) {
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MAX;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 1739649;

	t0 = (((x1<x2)<=x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 22U;
	int64_t x7 = INT64_MIN;
	static uint8_t x8 = 1U;
	volatile int32_t t1 = -1;

	t1 = (((x5<x6)<=x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int32_t x10 = INT32_MAX;
	static volatile int16_t x11 = -133;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 0;

	t2 = (((x9<x10)<=x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	uint16_t x15 = UINT16_MAX;
	int64_t x16 = INT64_MIN;
	static int32_t t3 = -7582695;

	t3 = (((x13<x14)<=x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MAX;
	int8_t x18 = -11;
	static uint8_t x19 = 3U;
	int32_t x20 = 2634;
	static int32_t t4 = 1;

	t4 = (((x17<x18)<=x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 784546512;
	uint16_t x22 = 26687U;
	int32_t x23 = INT32_MIN;
	int16_t x24 = -1;
	static int32_t t5 = 280;

	t5 = (((x21<x22)<=x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 0;
	uint32_t x27 = 6479U;
	int32_t x28 = -1;
	static volatile int32_t t6 = -219;

	t6 = (((x25<x26)<=x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x31 = UINT32_MAX;
	static volatile int32_t t7 = -75;

	t7 = (((x29<x30)<=x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x34 = 186137LLU;
	volatile int32_t x35 = -120046301;

	t8 = (((x33<x34)<=x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = INT32_MIN;
	static uint32_t x38 = UINT32_MAX;
	static int32_t x39 = INT32_MIN;
	static int8_t x40 = INT8_MIN;

	t9 = (((x37<x38)<=x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = -2;
	uint32_t x43 = UINT32_MAX;
	volatile int16_t x44 = -1;
	int32_t t10 = -34273242;

	t10 = (((x41<x42)<=x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = 3;
	int32_t x47 = INT32_MAX;
	static uint64_t x48 = 360877565LLU;
	int32_t t11 = 767849093;

	t11 = (((x45<x46)<=x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 894821674U;
	int16_t x50 = 16;
	volatile uint32_t x51 = 8307682U;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -1;

	t12 = (((x49<x50)<=x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = -285933468280LL;
	int8_t x55 = INT8_MIN;
	static int16_t x56 = -1;
	volatile int32_t t13 = -13007;

	t13 = (((x53<x54)<=x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 322708072U;
	int8_t x58 = INT8_MAX;
	static int8_t x59 = INT8_MAX;
	uint16_t x60 = 223U;
	int32_t t14 = -322848812;

	t14 = (((x57<x58)<=x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x64 = -44;
	int32_t t15 = 923134747;

	t15 = (((x61<x62)<=x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x66 = 4516764U;
	int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MIN;
	int32_t t16 = -2302825;

	t16 = (((x65<x66)<=x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -350320709;
	int16_t x71 = INT16_MIN;
	static uint8_t x72 = UINT8_MAX;

	t17 = (((x69<x70)<=x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	uint32_t x74 = UINT32_MAX;
	int64_t x75 = -1LL;
	int32_t x76 = -31872678;
	static int32_t t18 = 0;

	t18 = (((x73<x74)<=x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	uint8_t x79 = 52U;
	int32_t t19 = -33110;

	t19 = (((x77<x78)<=x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 1U;
	static uint32_t x82 = 94048U;
	int16_t x83 = 6;
	volatile int8_t x84 = INT8_MIN;

	t20 = (((x81<x82)<=x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 184602313716LLU;
	int8_t x86 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	static int32_t t21 = 5051;

	t21 = (((x85<x86)<=x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	static int32_t x90 = INT32_MIN;
	static int32_t x91 = INT32_MAX;
	uint32_t x92 = 28216752U;
	volatile int32_t t22 = 23240734;

	t22 = (((x89<x90)<=x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = -1;
	int8_t x96 = 31;
	volatile int32_t t23 = 753;

	t23 = (((x93<x94)<=x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint8_t x98 = 2U;
	volatile int32_t x99 = 14;
	int64_t x100 = INT64_MAX;
	int32_t t24 = 249;

	t24 = (((x97<x98)<=x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = 39U;
	int64_t x103 = -935764644950053942LL;
	int64_t x104 = INT64_MAX;
	int32_t t25 = 2895;

	t25 = (((x101<x102)<=x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = 441;
	int16_t x107 = -1;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 28;

	t26 = (((x105<x106)<=x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 4547U;
	int64_t x110 = 85388LL;
	volatile int64_t x112 = -8253205725LL;
	int32_t t27 = 7;

	t27 = (((x109<x110)<=x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 25U;
	uint64_t x114 = UINT64_MAX;
	uint8_t x115 = 0U;
	static uint64_t x116 = 0LLU;
	volatile int32_t t28 = -12560;

	t28 = (((x113<x114)<=x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 10;
	static uint16_t x118 = 1793U;
	int8_t x119 = INT8_MIN;
	volatile int16_t x120 = -1;
	int32_t t29 = -20976;

	t29 = (((x117<x118)<=x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	volatile int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 0;

	t30 = (((x121<x122)<=x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 3U;
	volatile uint64_t x126 = 66176837783226LLU;
	uint8_t x127 = UINT8_MAX;
	volatile int16_t x128 = INT16_MIN;

	t31 = (((x125<x126)<=x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 6136894972740709LLU;
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 200583;

	t32 = (((x129<x130)<=x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = UINT8_MAX;
	int16_t x136 = INT16_MAX;
	volatile int32_t t33 = -223;

	t33 = (((x133<x134)<=x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -723LL;
	volatile int32_t t34 = 10838;

	t34 = (((x137<x138)<=x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MAX;
	uint32_t x142 = 8562108U;
	int64_t x143 = -498879LL;
	static int8_t x144 = INT8_MIN;

	t35 = (((x141<x142)<=x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x147 = -1;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = -401;

	t36 = (((x145<x146)<=x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x151 = INT32_MAX;
	uint64_t x152 = 13265110LLU;

	t37 = (((x149<x150)<=x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x153 = UINT16_MAX;
	uint16_t x154 = 41U;
	static int8_t x156 = -1;
	int32_t t38 = -938;

	t38 = (((x153<x154)<=x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	static volatile int8_t x159 = -1;
	volatile int32_t x160 = 310011728;
	int32_t t39 = 195023770;

	t39 = (((x157<x158)<=x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	volatile int64_t x162 = INT64_MIN;
	volatile int8_t x163 = 3;

	t40 = (((x161<x162)<=x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = INT32_MIN;
	static int8_t x167 = -1;
	int32_t x168 = 1;
	volatile int32_t t41 = 22;

	t41 = (((x165<x166)<=x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int16_t x170 = INT16_MAX;
	volatile int16_t x171 = INT16_MIN;
	static int64_t x172 = -21LL;
	volatile int32_t t42 = -3395;

	t42 = (((x169<x170)<=x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 11U;
	volatile int64_t x174 = INT64_MAX;
	volatile int32_t x175 = INT32_MAX;
	static uint16_t x176 = 1573U;
	volatile int32_t t43 = -46520;

	t43 = (((x173<x174)<=x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = -6;
	uint8_t x180 = UINT8_MAX;

	t44 = (((x177<x178)<=x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MAX;
	int8_t x183 = -1;
	static uint16_t x184 = 1U;
	int32_t t45 = -773;

	t45 = (((x181<x182)<=x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 15739373860769LLU;
	volatile uint64_t x186 = 23846937968859LLU;
	int16_t x187 = -17;
	uint64_t x188 = 3LLU;
	static int32_t t46 = -132767722;

	t46 = (((x185<x186)<=x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x190 = -1;
	static int32_t x191 = INT32_MIN;
	int8_t x192 = -2;
	int32_t t47 = 0;

	t47 = (((x189<x190)<=x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 1893380126564LLU;
	static int32_t x194 = INT32_MIN;
	volatile int32_t t48 = -496;

	t48 = (((x193<x194)<=x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x199 = 1014U;
	volatile int32_t t49 = -105650530;

	t49 = (((x197<x198)<=x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x203 = 61U;
	volatile int32_t t50 = -425;

	t50 = (((x201<x202)<=x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -27;
	uint64_t x208 = 521884488025146LLU;
	int32_t t51 = 2450;

	t51 = (((x205<x206)<=x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	volatile int8_t x210 = 1;
	volatile uint16_t x211 = 0U;
	uint32_t x212 = 1715040U;
	volatile int32_t t52 = 46084173;

	t52 = (((x209<x210)<=x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = UINT64_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile int32_t t53 = 3;

	t53 = (((x213<x214)<=x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x219 = -2;
	uint64_t x220 = 110222897593LLU;
	volatile int32_t t54 = -3;

	t54 = (((x217<x218)<=x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = 407177235;
	static uint64_t x222 = UINT64_MAX;
	uint16_t x223 = UINT16_MAX;
	int8_t x224 = 4;
	static volatile int32_t t55 = 215039626;

	t55 = (((x221<x222)<=x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -10;
	static volatile int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MIN;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -5158;

	t56 = (((x225<x226)<=x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x231 = UINT16_MAX;
	static uint8_t x232 = UINT8_MAX;
	int32_t t57 = 18645109;

	t57 = (((x229<x230)<=x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 10066U;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = -214;
	int32_t t58 = -255530;

	t58 = (((x233<x234)<=x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = 18991251393629472LLU;
	volatile int32_t t59 = -315;

	t59 = (((x237<x238)<=x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	uint16_t x243 = 70U;
	uint32_t x244 = UINT32_MAX;
	int32_t t60 = 12237;

	t60 = (((x241<x242)<=x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	volatile int16_t x246 = -1;
	volatile int32_t x247 = INT32_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t61 = 973;

	t61 = (((x245<x246)<=x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 1257LL;
	int8_t x250 = -4;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	int32_t t62 = -6138;

	t62 = (((x249<x250)<=x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x254 = 3U;
	int8_t x255 = 0;
	int16_t x256 = 1;
	int32_t t63 = -111500;

	t63 = (((x253<x254)<=x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = 21;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 3183;

	t64 = (((x257<x258)<=x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int8_t x262 = 16;
	uint64_t x264 = 31LLU;
	volatile int32_t t65 = -634;

	t65 = (((x261<x262)<=x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int16_t x266 = -1;
	int8_t x268 = -1;
	int32_t t66 = 294168225;

	t66 = (((x265<x266)<=x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -382;
	static volatile int8_t x270 = 2;
	int16_t x272 = INT16_MAX;
	int32_t t67 = -1;

	t67 = (((x269<x270)<=x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 1053056LLU;
	int16_t x275 = INT16_MIN;
	int32_t t68 = -44740682;

	t68 = (((x273<x274)<=x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MAX;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	volatile int32_t t69 = -165348;

	t69 = (((x277<x278)<=x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = 2656U;
	int64_t x283 = INT64_MAX;
	int16_t x284 = INT16_MAX;

	t70 = (((x281<x282)<=x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x286 = INT8_MIN;
	uint64_t x287 = 5462434509LLU;

	t71 = (((x285<x286)<=x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	int8_t x292 = INT8_MAX;
	static volatile int32_t t72 = 89;

	t72 = (((x289<x290)<=x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = 1;
	static uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 25U;
	int8_t x296 = INT8_MAX;
	int32_t t73 = 26376420;

	t73 = (((x293<x294)<=x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static volatile uint8_t x298 = 21U;
	int8_t x299 = -5;
	int8_t x300 = -1;
	volatile int32_t t74 = -24351;

	t74 = (((x297<x298)<=x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x302 = 19050276328LLU;
	static int32_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	static int32_t t75 = -6165837;

	t75 = (((x301<x302)<=x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int16_t x306 = -6;
	int8_t x307 = 1;
	uint8_t x308 = 60U;
	volatile int32_t t76 = 5614;

	t76 = (((x305<x306)<=x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = 0;
	volatile uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 5;

	t77 = (((x309<x310)<=x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	volatile int8_t x314 = -1;
	int8_t x315 = -1;
	volatile int32_t t78 = -27769113;

	t78 = (((x313<x314)<=x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static volatile int8_t x318 = INT8_MAX;
	int32_t t79 = 31519;

	t79 = (((x317<x318)<=x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x321 = UINT8_MAX;
	int32_t t80 = -2;

	t80 = (((x321<x322)<=x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -3;
	int32_t x327 = INT32_MIN;

	t81 = (((x325<x326)<=x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	volatile int8_t x330 = INT8_MIN;
	static int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;
	int32_t t82 = 1754;

	t82 = (((x329<x330)<=x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 5534U;
	uint64_t x334 = 2781830299597LLU;
	static int8_t x335 = INT8_MIN;

	t83 = (((x333<x334)<=x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = 81440650;
	static volatile int8_t x339 = -47;
	int64_t x340 = INT64_MAX;
	int32_t t84 = -6347653;

	t84 = (((x337<x338)<=x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MAX;
	volatile int16_t x344 = -1;

	t85 = (((x341<x342)<=x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = 4256;
	uint16_t x347 = 132U;
	volatile int32_t t86 = 4;

	t86 = (((x345<x346)<=x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int64_t x350 = -1LL;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = -66;
	volatile int32_t t87 = 109;

	t87 = (((x349<x350)<=x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -10837084544LL;
	uint64_t x354 = 61477LLU;
	volatile int32_t t88 = -1;

	t88 = (((x353<x354)<=x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 41227U;
	volatile uint16_t x358 = 225U;

	t89 = (((x357<x358)<=x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 2;
	int16_t x362 = INT16_MIN;
	static int32_t x363 = -25;
	uint64_t x364 = UINT64_MAX;

	t90 = (((x361<x362)<=x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x367 = INT16_MAX;
	int8_t x368 = INT8_MIN;
	int32_t t91 = -49506;

	t91 = (((x365<x366)<=x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 1;
	static uint8_t x370 = 20U;
	int16_t x371 = -1;
	static int8_t x372 = -17;
	volatile int32_t t92 = 2565317;

	t92 = (((x369<x370)<=x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = UINT64_MAX;
	volatile int8_t x376 = INT8_MIN;

	t93 = (((x373<x374)<=x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -1;
	uint16_t x379 = 54U;
	volatile int32_t t94 = -14380;

	t94 = (((x377<x378)<=x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int32_t x382 = -1;
	int32_t x383 = -1;
	int32_t t95 = 214;

	t95 = (((x381<x382)<=x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 1191906126386LL;
	static volatile uint8_t x386 = 0U;
	int64_t x387 = INT64_MIN;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t96 = 27524185;

	t96 = (((x385<x386)<=x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	static int32_t t97 = 0;

	t97 = (((x389<x390)<=x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = 14617704;
	int16_t x394 = -6;
	static uint8_t x395 = 4U;
	volatile int32_t t98 = 766;

	t98 = (((x393<x394)<=x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	static uint32_t x398 = UINT32_MAX;
	uint16_t x399 = 9383U;
	int16_t x400 = INT16_MAX;
	static volatile int32_t t99 = -89940045;

	t99 = (((x397<x398)<=x399)<=x400);

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

