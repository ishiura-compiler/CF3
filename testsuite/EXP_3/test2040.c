#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MIN;
uint64_t x10 = 1962LLU;
int64_t x11 = 362228905480LL;
int32_t x12 = -1;
uint16_t x19 = 2053U;
int8_t x22 = 26;
volatile int64_t x39 = INT64_MAX;
uint16_t x54 = 216U;
uint8_t x57 = 82U;
static int16_t x58 = -7;
int8_t x59 = -3;
static int8_t x67 = 7;
static volatile int32_t t11 = 157;
static uint8_t x72 = 1U;
int32_t t12 = -26;
int32_t x77 = -23423978;
uint64_t x82 = 339LLU;
volatile uint32_t x84 = 6392787U;
uint64_t x86 = 71842674337323LLU;
uint16_t x92 = 630U;
uint64_t x98 = UINT64_MAX;
volatile uint64_t t20 = 708LLU;
uint8_t x110 = 29U;
int8_t x112 = -1;
static int16_t x119 = 5;
static int16_t x120 = 60;
static volatile uint16_t x122 = 8591U;
int8_t x123 = 1;
int32_t x127 = INT32_MIN;
volatile int64_t t26 = INT64_MAX;
int8_t x134 = INT8_MAX;
int16_t x143 = -1;
uint32_t x144 = 315940U;
volatile int8_t x145 = INT8_MIN;
volatile int64_t t33 = -1118LL;
static uint16_t x173 = UINT16_MAX;
volatile int8_t x185 = INT8_MIN;
static uint32_t x191 = 53601U;
static int16_t x195 = -1;
uint32_t x196 = 600886U;
volatile int8_t x206 = INT8_MIN;
int16_t x209 = INT16_MAX;
int32_t x211 = -1;
int64_t x220 = INT64_MAX;
int32_t x232 = -11920422;
static int8_t x240 = INT8_MIN;
volatile uint64_t t51 = 37LLU;
int8_t x243 = -1;
int32_t x246 = -1;
int32_t x247 = -1;
volatile int32_t t53 = 300;
static uint32_t x250 = 435555462U;
volatile uint64_t t56 = 36643238387310239LLU;
int8_t x265 = INT8_MIN;
static uint64_t x266 = 962044016LLU;
int64_t x275 = INT64_MIN;
int8_t x281 = 1;
int32_t x282 = -1;
int32_t x283 = 109046939;
volatile uint64_t x284 = 478135LLU;
int8_t x294 = INT8_MAX;
static volatile int32_t x302 = -1;
volatile int32_t x312 = 2155381;
volatile int32_t x313 = INT32_MIN;
uint16_t x314 = 21066U;
int16_t x316 = -1;
int32_t x323 = INT32_MIN;
uint32_t x331 = 14U;
uint16_t x332 = 40U;
int8_t x334 = -55;
static int8_t x347 = INT8_MAX;
volatile int8_t x348 = -39;
int64_t x358 = INT64_MIN;
volatile int8_t x364 = 0;
int8_t x365 = 0;
int64_t x367 = INT64_MIN;
int16_t x372 = -1;
uint8_t x378 = 75U;
uint32_t x380 = UINT32_MAX;
static volatile int8_t x399 = INT8_MAX;
uint16_t x403 = 3149U;
uint16_t x404 = 21U;
volatile uint8_t x411 = 1U;
int16_t x413 = 15;
uint32_t x416 = UINT32_MAX;
int8_t x423 = -1;
volatile uint64_t t93 = 134244764735392LLU;
uint64_t x427 = 1LLU;
static int32_t x432 = INT32_MIN;
int32_t t95 = 329513;
int8_t x433 = INT8_MAX;
int32_t x434 = -1;
int64_t x438 = INT64_MAX;
uint64_t x441 = 306LLU;
static int16_t x442 = INT16_MIN;
int64_t t99 = INT64_MAX;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MIN;
	volatile int16_t x3 = -1;
	static int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 3461;

	t0 = ((x1+x2)|(x3^x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 9LLU;
	static volatile int16_t x7 = INT16_MIN;
	int32_t x8 = -1;
	volatile uint64_t t1 = 59348456218293408LLU;

	t1 = ((x5+x6)|(x7^x8));

	if (t1 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static uint64_t t2 = 61223277753567LLU;

	t2 = ((x9+x10)|(x11^x12));

	if (t2 != 18446744073709522943LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint16_t x14 = 0U;
	static int8_t x15 = INT8_MIN;
	int16_t x16 = 9;
	volatile int32_t t3 = -1878921;

	t3 = ((x13+x14)|(x15^x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 98U;
	volatile int32_t x18 = INT32_MIN;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -13942320690401LL;

	t4 = ((x17+x18)|(x19^x20));

	if (t4 != -9223372034707290009LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int64_t x23 = -43516122330975LL;
	volatile int16_t x24 = INT16_MIN;
	int64_t t5 = -2087193870466432LL;

	t5 = ((x21+x22)|(x23^x24));

	if (t5 != 43516122302649LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	static int16_t x35 = -1;
	int32_t x36 = INT32_MIN;
	static volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x33+x34)|(x35^x36));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 1541144372710LLU;
	uint8_t x38 = UINT8_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t7 = 250197627LLU;

	t7 = ((x37+x38)|(x39^x40));

	if (t7 != 9223373577999148773LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 20302342698LLU;
	volatile uint8_t x42 = 1U;
	int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MIN;
	uint64_t t8 = 404325751180503LLU;

	t8 = ((x41+x42)|(x43^x44));

	if (t8 != 21474814507LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x53 = INT16_MAX;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = -1;
	uint64_t t9 = 526925562830LLU;

	t9 = ((x53+x54)|(x55^x56));

	if (t9 != 32983LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x60 = -1;
	volatile int32_t t10 = -340591245;

	t10 = ((x57+x58)|(x59^x60));

	if (t10 != 75) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = -1;
	static volatile int8_t x68 = 1;

	t11 = ((x65+x66)|(x67^x68));

	if (t11 != -32769) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MAX;
	volatile int8_t x70 = -1;
	volatile uint16_t x71 = 32U;

	t12 = ((x69+x70)|(x71^x72));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MAX;
	static int8_t x75 = INT8_MAX;
	uint32_t x76 = 2502883U;
	uint32_t t13 = 0U;

	t13 = ((x73+x74)|(x75^x76));

	if (t13 != 2150006783U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x78 = 112U;
	uint16_t x79 = UINT16_MAX;
	uint64_t x80 = 91379LLU;
	uint64_t t14 = 944637615LLU;

	t14 = ((x77+x78)|(x79^x80));

	if (t14 != 18446744073686196110LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 72330749U;
	int64_t x83 = INT64_MIN;
	static uint64_t t15 = 2805765893LLU;

	t15 = ((x81+x82)|(x83^x84));

	if (t15 != 9223372036929204179LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x85 = INT16_MAX;
	volatile int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;
	static uint64_t t16 = 750415332LLU;

	t16 = ((x85+x86)|(x87^x88));

	if (t16 != 9223372035463702058LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = 4729909LL;
	static int64_t x90 = -1LL;
	uint32_t x91 = 657U;
	volatile int64_t t17 = 374733663290LL;

	t17 = ((x89+x90)|(x91^x92));

	if (t17 != 4730103LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x93 = 2U;
	uint64_t x94 = 169295223052402LLU;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = UINT8_MAX;
	uint64_t t18 = 1485LLU;

	t18 = ((x93+x94)|(x95^x96));

	if (t18 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	volatile int8_t x100 = -1;
	uint64_t t19 = 715LLU;

	t19 = ((x97+x98)|(x99^x100));

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = UINT64_MAX;
	uint32_t x102 = 87U;
	static int32_t x103 = -1;
	int32_t x104 = -35487;

	t20 = ((x101+x102)|(x103^x104));

	if (t20 != 35550LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 8U;
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = 14857273;
	int8_t x108 = 14;
	int32_t t21 = -438281;

	t21 = ((x105+x106)|(x107^x108));

	if (t21 != 14857527) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 347828824520271LLU;
	volatile int64_t x111 = INT64_MIN;
	uint64_t t22 = 1LLU;

	t22 = ((x109+x110)|(x111^x112));

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = 365368;
	static int64_t x114 = -1LL;
	volatile int8_t x115 = 1;
	static uint64_t x116 = 66097159122LLU;
	volatile uint64_t t23 = 112874LLU;

	t23 = ((x113+x114)|(x115^x116));

	if (t23 != 66097486839LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x117 = INT16_MAX;
	uint64_t x118 = 6LLU;
	uint64_t t24 = 23348152592967327LLU;

	t24 = ((x117+x118)|(x119^x120));

	if (t24 != 32829LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x121 = 4U;
	int64_t x124 = INT64_MAX;
	int64_t t25 = INT64_MAX;

	t25 = ((x121+x122)|(x123^x124));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MAX;
	static uint32_t x128 = 954450U;

	t26 = ((x125+x126)|(x127^x128));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x129 = INT8_MAX;
	uint32_t x130 = 1825031951U;
	uint16_t x131 = 2U;
	volatile uint8_t x132 = 2U;
	static uint32_t t27 = 96001U;

	t27 = ((x129+x130)|(x131^x132));

	if (t27 != 1825032078U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x133 = UINT16_MAX;
	volatile int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t28 = 12132421;

	t28 = ((x133+x134)|(x135^x136));

	if (t28 != 2147451006) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x137 = 30U;
	static uint16_t x138 = 1187U;
	volatile uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t29 = -122367618;

	t29 = ((x137+x138)|(x139^x140));

	if (t29 != -32769) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x141 = -44;
	volatile uint64_t x142 = UINT64_MAX;
	volatile uint64_t t30 = 26759LLU;

	t30 = ((x141+x142)|(x143^x144));

	if (t30 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x146 = 0;
	int16_t x147 = INT16_MAX;
	int8_t x148 = -9;
	int32_t t31 = 30407808;

	t31 = ((x145+x146)|(x147^x148));

	if (t31 != -120) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 69U;
	int8_t x150 = -1;
	int64_t x151 = INT64_MAX;
	int8_t x152 = -1;
	volatile int64_t t32 = -82107LL;

	t32 = ((x149+x150)|(x151^x152));

	if (t32 != -9223372036854775740LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = -19100308;
	static int64_t x155 = INT64_MIN;
	static int64_t x156 = INT64_MIN;

	t33 = ((x153+x154)|(x155^x156));

	if (t33 != -19100436LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x157 = 125035014446023156LLU;
	int32_t x158 = INT32_MIN;
	uint8_t x159 = 1U;
	static int16_t x160 = INT16_MIN;
	volatile uint64_t t34 = 99346815274LLU;

	t34 = ((x157+x158)|(x159^x160));

	if (t34 != 18446744073709519349LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = INT16_MIN;
	int64_t x170 = -38611407309LL;
	uint8_t x171 = 0U;
	uint64_t x172 = 26053759030LLU;
	volatile uint64_t t35 = 8056LLU;

	t35 = ((x169+x170)|(x171^x172));

	if (t35 != 18446744035373415991LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x174 = UINT8_MAX;
	int64_t x175 = -1LL;
	static volatile uint32_t x176 = UINT32_MAX;
	static int64_t t36 = -95493186979LL;

	t36 = ((x173+x174)|(x175^x176));

	if (t36 != -4294901506LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = 2712943U;
	volatile int8_t x178 = -1;
	int8_t x179 = 39;
	int64_t x180 = 181572726538507812LL;
	volatile int64_t t37 = 71513340465127862LL;

	t37 = ((x177+x178)|(x179^x180));

	if (t37 != 181572726538598255LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x181 = INT8_MIN;
	uint64_t x182 = 592767189015LLU;
	int8_t x183 = INT8_MIN;
	volatile int8_t x184 = 15;
	uint64_t t38 = 2668928611223000LLU;

	t38 = ((x181+x182)|(x183^x184));

	if (t38 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x186 = 104274U;
	int16_t x187 = -6;
	static int8_t x188 = INT8_MIN;
	volatile uint32_t t39 = 486758U;

	t39 = ((x185+x186)|(x187^x188));

	if (t39 != 104186U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = 500197867LL;
	volatile uint8_t x190 = 32U;
	int64_t x192 = INT64_MAX;
	int64_t t40 = -3943864914731053738LL;

	t40 = ((x189+x190)|(x191^x192));

	if (t40 != 9223372036854738591LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MIN;
	static volatile uint64_t x194 = 2034949LLU;
	volatile uint64_t t41 = 702853787014624572LLU;

	t41 = ((x193+x194)|(x195^x196));

	if (t41 != 4294958285LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = -1;
	uint32_t x198 = 424U;
	uint8_t x199 = 83U;
	volatile int32_t x200 = INT32_MIN;
	uint32_t t42 = 2055858432U;

	t42 = ((x197+x198)|(x199^x200));

	if (t42 != 2147484151U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = -1LL;
	int16_t x202 = -2;
	uint16_t x203 = 0U;
	static uint16_t x204 = UINT16_MAX;
	volatile int64_t t43 = -31243842303078331LL;

	t43 = ((x201+x202)|(x203^x204));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = 1;
	static int64_t x207 = -223052765716490788LL;
	int32_t x208 = INT32_MIN;
	static int64_t t44 = -34957272935049544LL;

	t44 = ((x205+x206)|(x207^x208));

	if (t44 != -35LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x210 = UINT8_MAX;
	static int64_t x212 = INT64_MIN;
	volatile int64_t t45 = INT64_MAX;

	t45 = ((x209+x210)|(x211^x212));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x213 = 491U;
	uint8_t x214 = 0U;
	uint32_t x215 = UINT32_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t46 = 385274372U;

	t46 = ((x213+x214)|(x215^x216));

	if (t46 != 491U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 1U;
	int64_t x219 = -1LL;
	uint64_t t47 = 3252225070811629LLU;

	t47 = ((x217+x218)|(x219^x220));

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x225 = 3U;
	static uint8_t x226 = UINT8_MAX;
	int64_t x227 = -1LL;
	int16_t x228 = -5013;
	int64_t t48 = -1005881643169968270LL;

	t48 = ((x225+x226)|(x227^x228));

	if (t48 != 5014LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x229 = INT8_MIN;
	volatile uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MIN;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x229+x230)|(x231^x232));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x233 = 0U;
	int16_t x234 = INT16_MAX;
	volatile int64_t x235 = 1LL;
	int16_t x236 = INT16_MIN;
	volatile int64_t t50 = 3LL;

	t50 = ((x233+x234)|(x235^x236));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = 1;
	uint64_t x239 = 40620LLU;

	t51 = ((x237+x238)|(x239^x240));

	if (t51 != 18446744073709510956LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = 101LL;
	uint8_t x242 = 26U;
	uint16_t x244 = 10110U;
	int64_t t52 = 408551037950082852LL;

	t52 = ((x241+x242)|(x243^x244));

	if (t52 != -9985LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MIN;
	int16_t x248 = -1;

	t53 = ((x245+x246)|(x247^x248));

	if (t53 != -32769) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x249 = -1;
	volatile uint16_t x251 = UINT16_MAX;
	uint32_t x252 = 3884306U;
	volatile uint32_t t54 = 22U;

	t54 = ((x249+x250)|(x251^x252));

	if (t54 != 436190957U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = INT64_MIN;
	static int8_t x255 = -6;
	uint16_t x256 = UINT16_MAX;
	int64_t t55 = 21401219744591661LL;

	t55 = ((x253+x254)|(x255^x256));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = 7;
	static int8_t x258 = INT8_MAX;
	uint64_t x259 = 17780576947LLU;
	static int8_t x260 = INT8_MIN;

	t56 = ((x257+x258)|(x259^x260));

	if (t56 != 18446744055928974775LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x267 = 6U;
	uint8_t x268 = UINT8_MAX;
	volatile uint64_t t57 = 683248086266777LLU;

	t57 = ((x265+x266)|(x267^x268));

	if (t57 != 962043897LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x269 = INT32_MAX;
	static uint64_t x270 = UINT64_MAX;
	static int64_t x271 = -27LL;
	uint32_t x272 = 23717575U;
	volatile uint64_t t58 = 43159904740575022LLU;

	t58 = ((x269+x270)|(x271^x272));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x273 = INT64_MIN;
	uint32_t x274 = UINT32_MAX;
	static uint32_t x276 = 101U;
	volatile int64_t t59 = -9970LL;

	t59 = ((x273+x274)|(x275^x276));

	if (t59 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x277 = INT64_MIN;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	static volatile uint32_t x280 = 12918955U;
	static volatile int64_t t60 = 10633591294794146LL;

	t60 = ((x277+x278)|(x279^x280));

	if (t60 != -9223372032572743425LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t t61 = 30234462555338938LLU;

	t61 = ((x281+x282)|(x283^x284));

	if (t61 != 108570412LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x285 = -1LL;
	int64_t x286 = INT64_MAX;
	volatile uint8_t x287 = 8U;
	int64_t x288 = 1000211210563322170LL;
	volatile int64_t t62 = -340567046954561835LL;

	t62 = ((x285+x286)|(x287^x288));

	if (t62 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = 0;
	static uint16_t x292 = 3U;
	volatile int32_t t63 = -46252;

	t63 = ((x289+x290)|(x291^x292));

	if (t63 != 98303) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 118812783575243461LLU;
	volatile int32_t x295 = INT32_MIN;
	uint64_t x296 = UINT64_MAX;
	uint64_t t64 = 3LLU;

	t64 = ((x293+x294)|(x295^x296));

	if (t64 != 118812784115843071LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x297 = 112U;
	uint8_t x298 = 0U;
	uint64_t x299 = 3468844LLU;
	uint16_t x300 = 15550U;
	uint64_t t65 = 25253LLU;

	t65 = ((x297+x298)|(x299^x300));

	if (t65 != 3461874LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x301 = 155U;
	uint32_t x303 = UINT32_MAX;
	uint16_t x304 = UINT16_MAX;
	volatile uint32_t t66 = 224548461U;

	t66 = ((x301+x302)|(x303^x304));

	if (t66 != 4294901914U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x305 = UINT16_MAX;
	int16_t x306 = INT16_MIN;
	static int32_t x307 = INT32_MIN;
	static int16_t x308 = -23;
	static volatile int32_t t67 = INT32_MAX;

	t67 = ((x305+x306)|(x307^x308));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x309 = 3466059LLU;
	int8_t x310 = INT8_MIN;
	static volatile uint32_t x311 = UINT32_MAX;
	static volatile uint64_t t68 = 1526125254754686LLU;

	t68 = ((x309+x310)|(x311^x312));

	if (t68 != 4294966987LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x315 = -265207836;
	volatile int32_t t69 = -23;

	t69 = ((x313+x314)|(x315^x316));

	if (t69 != -1882271141) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x321 = 12U;
	int8_t x322 = INT8_MIN;
	uint32_t x324 = 1U;
	volatile uint32_t t70 = 45973404U;

	t70 = ((x321+x322)|(x323^x324));

	if (t70 != 4294967181U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x329 = 14913773;
	static uint32_t x330 = 78106332U;
	uint32_t t71 = 890681874U;

	t71 = ((x329+x330)|(x331^x332));

	if (t71 != 93020143U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = -2;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = INT8_MAX;
	volatile int32_t t72 = -1667642;

	t72 = ((x333+x334)|(x335^x336));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x337 = 6421U;
	int8_t x338 = -1;
	int16_t x339 = INT16_MIN;
	uint16_t x340 = 2543U;
	volatile uint32_t t73 = 7357552U;

	t73 = ((x337+x338)|(x339^x340));

	if (t73 != 4294941183U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x345 = 25U;
	int64_t x346 = INT64_MIN;
	volatile int64_t t74 = 421984070713959LL;

	t74 = ((x345+x346)|(x347^x348));

	if (t74 != -65LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x349 = 1;
	static int8_t x350 = -1;
	static int32_t x351 = 235927966;
	int16_t x352 = 52;
	static int32_t t75 = 0;

	t75 = ((x349+x350)|(x351^x352));

	if (t75 != 235927978) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = 351735219U;
	uint8_t x354 = 3U;
	int64_t x355 = INT64_MIN;
	static int32_t x356 = -1;
	int64_t t76 = INT64_MAX;

	t76 = ((x353+x354)|(x355^x356));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x357 = 272U;
	uint32_t x359 = 634138U;
	int16_t x360 = 29;
	int64_t t77 = -46LL;

	t77 = ((x357+x358)|(x359^x360));

	if (t77 != -9223372036854141673LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MIN;
	volatile int64_t t78 = -482373LL;

	t78 = ((x361+x362)|(x363^x364));

	if (t78 != -32513LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x366 = -1;
	uint64_t x368 = 1851704367074LLU;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x365+x366)|(x367^x368));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x369 = 42U;
	uint32_t x370 = 56U;
	uint32_t x371 = 110698280U;
	uint32_t t80 = 55509U;

	t80 = ((x369+x370)|(x371^x372));

	if (t80 != 4184269047U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MIN;
	static volatile uint32_t x374 = 82459U;
	volatile uint64_t x375 = 9965977853LLU;
	uint32_t x376 = 224453U;
	uint64_t t81 = 33460444572848958LLU;

	t81 = ((x373+x374)|(x375^x376));

	if (t81 != 9223372046820961851LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x377 = 534760U;
	static int32_t x379 = -7826967;
	static volatile uint32_t t82 = 2U;

	t82 = ((x377+x378)|(x379^x380));

	if (t82 != 8351543U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MAX;
	volatile uint64_t x383 = UINT64_MAX;
	volatile int64_t x384 = -62LL;
	volatile uint64_t t83 = 44942LLU;

	t83 = ((x381+x382)|(x383^x384));

	if (t83 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = -1;
	uint32_t x386 = 185776195U;
	volatile int16_t x387 = 313;
	static volatile int16_t x388 = -1;
	uint32_t t84 = 75U;

	t84 = ((x385+x386)|(x387^x388));

	if (t84 != 4294966982U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x390 = -624382;
	int8_t x391 = 1;
	int16_t x392 = 3932;
	uint32_t t85 = 931U;

	t85 = ((x389+x390)|(x391^x392));

	if (t85 != 4294344541U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x393 = 6U;
	int32_t x394 = INT32_MIN;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t86 = -6;

	t86 = ((x393+x394)|(x395^x396));

	if (t86 != -32513) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = 6LL;
	uint64_t x398 = UINT64_MAX;
	static int8_t x400 = 0;
	volatile uint64_t t87 = 3886LLU;

	t87 = ((x397+x398)|(x399^x400));

	if (t87 != 127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x401 = 145762596994484LLU;
	int8_t x402 = INT8_MAX;
	uint64_t t88 = 142LLU;

	t88 = ((x401+x402)|(x403^x404));

	if (t88 != 145762596994683LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x405 = INT32_MIN;
	static uint64_t x406 = 343281201486110LLU;
	int16_t x407 = -1;
	int32_t x408 = 24;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = ((x405+x406)|(x407^x408));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = 0LL;
	volatile int8_t x410 = -1;
	int16_t x412 = INT16_MAX;
	int64_t t90 = 4631725LL;

	t90 = ((x409+x410)|(x411^x412));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x414 = UINT8_MAX;
	int32_t x415 = INT32_MIN;
	volatile uint32_t t91 = 3836979U;

	t91 = ((x413+x414)|(x415^x416));

	if (t91 != 2147483647U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x417 = INT8_MAX;
	uint16_t x418 = UINT16_MAX;
	int8_t x419 = -1;
	volatile uint16_t x420 = 1U;
	volatile int32_t t92 = 615407;

	t92 = ((x417+x418)|(x419^x420));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = 0LLU;
	int8_t x422 = 0;
	int16_t x424 = INT16_MIN;

	t93 = ((x421+x422)|(x423^x424));

	if (t93 != 32767LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -1;
	static volatile int8_t x426 = -1;
	int32_t x428 = INT32_MIN;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x425+x426)|(x427^x428));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = 1;
	uint8_t x431 = UINT8_MAX;

	t95 = ((x429+x430)|(x431^x432));

	if (t95 != -32513) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x435 = INT16_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t96 = -11057634;

	t96 = ((x433+x434)|(x435^x436));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x437 = -1;
	static int16_t x439 = -59;
	int32_t x440 = -1;
	int64_t t97 = -674916653682LL;

	t97 = ((x437+x438)|(x439^x440));

	if (t97 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x443 = 42U;
	volatile int64_t x444 = INT64_MAX;
	volatile uint64_t t98 = 3LLU;

	t98 = ((x441+x442)|(x443^x444));

	if (t98 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = INT64_MAX;
	int32_t x446 = -1;
	static volatile uint32_t x447 = 1988034336U;
	uint8_t x448 = UINT8_MAX;

	t99 = ((x445+x446)|(x447^x448));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

