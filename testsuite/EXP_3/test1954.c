#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -51675213209829743LL;
int64_t x11 = INT64_MAX;
volatile int64_t t2 = -118224057LL;
int32_t x16 = -334510;
static uint32_t x18 = 30U;
int16_t x19 = -41;
int32_t x20 = INT32_MIN;
volatile int64_t x24 = 299795751284326LL;
static int8_t x25 = INT8_MIN;
static uint32_t t9 = 1U;
int32_t x50 = -1;
int32_t x58 = INT32_MIN;
uint32_t x59 = UINT32_MAX;
int32_t x62 = 2930;
static volatile int64_t x65 = -20723552114LL;
int8_t x84 = -1;
int8_t x87 = INT8_MIN;
int32_t t21 = -335838518;
uint16_t x92 = 3769U;
volatile uint64_t x96 = UINT64_MAX;
volatile uint64_t x101 = 1030985625203863LLU;
int32_t x109 = -18;
int16_t x112 = INT16_MIN;
uint64_t t29 = 2213550663200LLU;
int8_t x123 = -1;
volatile int32_t t30 = 6;
volatile int16_t x125 = INT16_MAX;
int16_t x127 = INT16_MIN;
uint16_t x128 = UINT16_MAX;
int32_t x130 = 294707;
volatile uint8_t x131 = 100U;
uint64_t x145 = UINT64_MAX;
uint64_t t36 = 3086753LLU;
volatile int8_t x150 = INT8_MIN;
static int16_t x153 = INT16_MAX;
int64_t x159 = INT64_MAX;
volatile int32_t x161 = INT32_MIN;
int16_t x163 = -1287;
uint8_t x164 = 17U;
volatile int8_t x165 = -1;
int8_t x167 = -1;
volatile int16_t x170 = -158;
int32_t x173 = -352;
static int16_t x175 = INT16_MAX;
int32_t x176 = 1;
int64_t t44 = -229552879LL;
int8_t x181 = INT8_MAX;
static int64_t x183 = 8311365505699LL;
static int16_t x186 = INT16_MIN;
volatile uint16_t x189 = 13534U;
uint16_t x190 = 37U;
volatile int32_t t48 = 7978;
volatile uint64_t x198 = UINT64_MAX;
uint64_t x199 = 42053LLU;
static uint64_t t49 = 227736LLU;
uint64_t t50 = 1LLU;
int64_t x209 = -403846055LL;
int16_t x212 = -1;
int64_t t53 = 85489931LL;
volatile uint8_t x221 = UINT8_MAX;
int8_t x222 = INT8_MIN;
int64_t x223 = INT64_MIN;
static volatile int64_t t55 = -198386175915895LL;
static int32_t x228 = 619;
volatile int16_t x229 = INT16_MIN;
static int32_t x230 = -1;
int64_t t57 = 150297160302LL;
static volatile uint64_t t59 = 357109261375747952LLU;
int16_t x241 = INT16_MIN;
int16_t x242 = INT16_MIN;
int64_t x243 = -287772LL;
volatile int64_t x253 = INT64_MIN;
static volatile int32_t t63 = 1931160;
static int32_t x260 = INT32_MIN;
uint8_t x268 = 109U;
uint32_t t66 = 9U;
static volatile int64_t x270 = INT64_MIN;
int8_t x274 = 0;
uint16_t x296 = 21748U;
int32_t x298 = INT32_MIN;
volatile uint64_t t74 = 446519257LLU;
uint32_t x304 = UINT32_MAX;
int32_t x309 = -1;
volatile int32_t t77 = -6;
volatile int32_t t78 = -4811;
int32_t x321 = 1147;
int16_t x323 = INT16_MIN;
uint8_t x328 = 51U;
int32_t t81 = -45976532;
uint64_t x336 = 8204912880LLU;
int16_t x337 = 6;
int32_t x338 = 13;
int32_t t84 = -99192;
volatile int8_t x346 = INT8_MIN;
int16_t x350 = INT16_MAX;
int16_t x351 = INT16_MIN;
static int64_t x355 = INT64_MIN;
volatile int32_t x356 = INT32_MIN;
uint8_t x359 = 47U;
static uint8_t x361 = UINT8_MAX;
volatile int8_t x362 = INT8_MAX;
uint32_t t92 = 32520U;
volatile int16_t x375 = INT16_MAX;
int32_t x379 = INT32_MAX;
volatile int8_t x382 = INT8_MIN;
uint32_t t95 = 408U;
volatile int64_t t96 = 1367705256LL;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int8_t x2 = 57;
	int64_t x3 = INT64_MAX;
	int64_t x4 = -7459842325LL;

	t0 = ((x1==x2)/(x3|x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int8_t x6 = 5;
	int64_t x7 = -1119506384009511LL;
	volatile uint16_t x8 = 2969U;
	int64_t t1 = 413296317719LL;

	t1 = ((x5==x6)/(x7|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 3U;
	int16_t x10 = 148;
	static volatile int16_t x12 = -11378;

	t2 = ((x9==x10)/(x11|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 38U;
	volatile int32_t x14 = INT32_MIN;
	static uint64_t x15 = 6106520LLU;
	volatile uint64_t t3 = 7958825951210638LLU;

	t3 = ((x13==x14)/(x15|x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile int32_t t4 = 222080;

	t4 = ((x17==x18)/(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int32_t x22 = INT32_MAX;
	uint8_t x23 = 4U;
	int64_t t5 = -1582578LL;

	t5 = ((x21==x22)/(x23|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = 5U;
	volatile int8_t x27 = -1;
	volatile uint16_t x28 = 75U;
	volatile int32_t t6 = -910154315;

	t6 = ((x25==x26)/(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int64_t x30 = INT64_MIN;
	uint16_t x31 = 2U;
	volatile int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = -1113;

	t7 = ((x29==x30)/(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int16_t x34 = 8;
	volatile int64_t x35 = -1LL;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t8 = 186672835356664997LLU;

	t8 = ((x33==x34)/(x35|x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	volatile uint32_t x38 = UINT32_MAX;
	int16_t x39 = -658;
	uint32_t x40 = UINT32_MAX;

	t9 = ((x37==x38)/(x39|x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	static volatile uint8_t x42 = 21U;
	static uint64_t x43 = 292516471LLU;
	static uint16_t x44 = 318U;
	uint64_t t10 = 186155LLU;

	t10 = ((x41==x42)/(x43|x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int64_t x46 = INT64_MIN;
	volatile int32_t x47 = INT32_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -168087690;

	t11 = ((x45==x46)/(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -429134;
	volatile int32_t x51 = -1;
	int8_t x52 = 17;
	volatile int32_t t12 = 98834;

	t12 = ((x49==x50)/(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 616502U;
	int16_t x54 = INT16_MAX;
	uint8_t x55 = 67U;
	volatile int8_t x56 = -1;
	int32_t t13 = 16357;

	t13 = ((x53==x54)/(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 123882728942642226LL;
	int8_t x60 = INT8_MIN;
	uint32_t t14 = 22312U;

	t14 = ((x57==x58)/(x59|x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	static int64_t x63 = INT64_MIN;
	uint8_t x64 = UINT8_MAX;
	static volatile int64_t t15 = 662506260174539LL;

	t15 = ((x61==x62)/(x63|x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x66 = 15LLU;
	int16_t x67 = -10852;
	static int32_t x68 = INT32_MIN;
	static volatile int32_t t16 = -369;

	t16 = ((x65==x66)/(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 113428;
	volatile int16_t x70 = 14;
	uint16_t x71 = 2U;
	volatile int32_t x72 = 14550;
	int32_t t17 = -168868;

	t17 = ((x69==x70)/(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 0LLU;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MIN;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 393515616;

	t18 = ((x73==x74)/(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	static volatile int8_t x78 = 28;
	uint16_t x79 = 194U;
	static uint32_t x80 = UINT32_MAX;
	uint32_t t19 = 1306793779U;

	t19 = ((x77==x78)/(x79|x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static int64_t x82 = -1LL;
	uint64_t x83 = UINT64_MAX;
	static volatile uint64_t t20 = 17075091117287LLU;

	t20 = ((x81==x82)/(x83|x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int16_t x86 = INT16_MIN;
	uint8_t x88 = UINT8_MAX;

	t21 = ((x85==x86)/(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	uint32_t x90 = 25678609U;
	int32_t x91 = 1;
	volatile int32_t t22 = -5848271;

	t22 = ((x89==x90)/(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static int8_t x94 = -1;
	int8_t x95 = -1;
	volatile uint64_t t23 = 1001670626869933LLU;

	t23 = ((x93==x94)/(x95|x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = -1;
	static volatile int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MAX;
	volatile int32_t x100 = INT32_MAX;
	static volatile int32_t t24 = 228460679;

	t24 = ((x97==x98)/(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = 5;
	volatile uint32_t x103 = 333U;
	uint16_t x104 = 3U;
	volatile uint32_t t25 = 2U;

	t25 = ((x101==x102)/(x103|x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	volatile int8_t x106 = -53;
	int64_t x107 = -15324061432401168LL;
	uint16_t x108 = 28U;
	static volatile int64_t t26 = 0LL;

	t26 = ((x105==x106)/(x107|x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = 0LL;
	static uint16_t x111 = UINT16_MAX;
	int32_t t27 = 410297;

	t27 = ((x109==x110)/(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 6U;
	int8_t x114 = -46;
	int64_t x115 = INT64_MIN;
	uint8_t x116 = UINT8_MAX;
	int64_t t28 = 428730079863986LL;

	t28 = ((x113==x114)/(x115|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 977154;
	int32_t x118 = INT32_MIN;
	uint64_t x119 = 521763LLU;
	static uint64_t x120 = 33403020515253016LLU;

	t29 = ((x117==x118)/(x119|x120));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MAX;
	static int32_t x122 = -619164108;
	int8_t x124 = INT8_MIN;

	t30 = ((x121==x122)/(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -5353873712750LL;
	volatile int32_t t31 = 113;

	t31 = ((x125==x126)/(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int32_t x132 = 581559022;
	volatile int32_t t32 = 291;

	t32 = ((x129==x130)/(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = 11U;
	int32_t t33 = 4;

	t33 = ((x133==x134)/(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = 36517997;
	int8_t x138 = 60;
	volatile int64_t x139 = -127951LL;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 189LL;

	t34 = ((x137==x138)/(x139|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = -1;
	static uint8_t x143 = 69U;
	int8_t x144 = INT8_MIN;
	static int32_t t35 = 1961;

	t35 = ((x141==x142)/(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	static int64_t x147 = -27457LL;
	volatile uint64_t x148 = 196166900327658976LLU;

	t36 = ((x145==x146)/(x147|x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	uint16_t x151 = 6537U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 2;

	t37 = ((x149==x150)/(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = -1671;
	int8_t x155 = -1;
	uint16_t x156 = 2789U;
	int32_t t38 = -5;

	t38 = ((x153==x154)/(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	uint32_t x158 = 1023U;
	uint16_t x160 = 34U;
	int64_t t39 = 0LL;

	t39 = ((x157==x158)/(x159|x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = -7;
	volatile int32_t t40 = 2520;

	t40 = ((x161==x162)/(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 1407U;
	int32_t x168 = INT32_MAX;
	static volatile int32_t t41 = -32098892;

	t41 = ((x165==x166)/(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	static uint64_t x171 = 8301001952000LLU;
	static volatile int16_t x172 = -1;
	uint64_t t42 = 505415743556378LLU;

	t42 = ((x169==x170)/(x171|x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x174 = 1474662U;
	volatile int32_t t43 = 423888169;

	t43 = ((x173==x174)/(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = UINT64_MAX;
	volatile uint16_t x178 = UINT16_MAX;
	static int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;

	t44 = ((x177==x178)/(x179|x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 92219501U;
	uint16_t x184 = UINT16_MAX;
	int64_t t45 = 2110811745LL;

	t45 = ((x181==x182)/(x183|x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 1U;
	volatile uint32_t x187 = 3428U;
	volatile int64_t x188 = -1LL;
	int64_t t46 = 108867LL;

	t46 = ((x185==x186)/(x187|x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -26;

	t47 = ((x189==x190)/(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	static volatile int16_t x194 = 3;
	volatile int32_t x195 = -16;
	int16_t x196 = -2013;

	t48 = ((x193==x194)/(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = -1;
	uint16_t x200 = UINT16_MAX;

	t49 = ((x197==x198)/(x199|x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MAX;
	static uint64_t x203 = 892377224713LLU;
	uint16_t x204 = UINT16_MAX;

	t50 = ((x201==x202)/(x203|x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static volatile int32_t x206 = INT32_MAX;
	int16_t x207 = -1;
	int16_t x208 = 43;
	volatile int32_t t51 = -526;

	t51 = ((x205==x206)/(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MIN;
	volatile int32_t t52 = 59415092;

	t52 = ((x209==x210)/(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 5391U;
	int64_t x214 = 407LL;
	int64_t x215 = -1LL;
	int64_t x216 = INT64_MAX;

	t53 = ((x213==x214)/(x215|x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 9524608919269LLU;
	int64_t x218 = INT64_MAX;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -1;
	int32_t t54 = -308142738;

	t54 = ((x217==x218)/(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x224 = INT32_MIN;

	t55 = ((x221==x222)/(x223|x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	uint8_t x226 = UINT8_MAX;
	volatile uint16_t x227 = UINT16_MAX;
	int32_t t56 = -100794;

	t56 = ((x225==x226)/(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x231 = -1LL;
	static volatile int16_t x232 = INT16_MAX;

	t57 = ((x229==x230)/(x231|x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	uint8_t x234 = UINT8_MAX;
	static int64_t x235 = -1LL;
	static uint32_t x236 = UINT32_MAX;
	int64_t t58 = -5645198LL;

	t58 = ((x233==x234)/(x235|x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = 2144815124141821405LLU;
	static int64_t x238 = -1332971LL;
	uint32_t x239 = UINT32_MAX;
	uint64_t x240 = UINT64_MAX;

	t59 = ((x237==x238)/(x239|x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x244 = INT16_MAX;
	volatile int64_t t60 = 217025404093754155LL;

	t60 = ((x241==x242)/(x243|x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	int32_t x246 = 13067813;
	volatile int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MAX;
	int32_t t61 = -685102098;

	t61 = ((x245==x246)/(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -1;
	static volatile uint16_t x250 = 365U;
	int64_t x251 = -321092147LL;
	static int16_t x252 = INT16_MAX;
	volatile int64_t t62 = -1851855348466671780LL;

	t62 = ((x249==x250)/(x251|x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = 101U;
	uint16_t x255 = 1405U;
	static int8_t x256 = 17;

	t63 = ((x253==x254)/(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	volatile int32_t x258 = 345;
	static int8_t x259 = -1;
	int32_t t64 = 2081;

	t64 = ((x257==x258)/(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = -219883244678LL;
	int32_t x263 = -160725;
	int16_t x264 = INT16_MIN;
	int32_t t65 = 450149;

	t65 = ((x261==x262)/(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = -2;
	static volatile uint32_t x267 = UINT32_MAX;

	t66 = ((x265==x266)/(x267|x268));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	volatile int16_t x271 = 6;
	uint8_t x272 = 16U;
	volatile int32_t t67 = 769538;

	t67 = ((x269==x270)/(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = UINT32_MAX;
	uint16_t x275 = 28810U;
	volatile int32_t x276 = INT32_MAX;
	int32_t t68 = 1106;

	t68 = ((x273==x274)/(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = UINT16_MAX;
	uint32_t x278 = 7252525U;
	int32_t x279 = -1;
	static uint64_t x280 = 4549631LLU;
	volatile uint64_t t69 = 209932750265867223LLU;

	t69 = ((x277==x278)/(x279|x280));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MAX;
	int8_t x282 = INT8_MIN;
	int16_t x283 = 3;
	int8_t x284 = -1;
	volatile int32_t t70 = -225;

	t70 = ((x281==x282)/(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	static int64_t x286 = -778798143227LL;
	int8_t x287 = INT8_MIN;
	static int64_t x288 = INT64_MIN;
	int64_t t71 = 32181825921962979LL;

	t71 = ((x285==x286)/(x287|x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = INT64_MAX;
	int32_t x290 = INT32_MAX;
	volatile uint16_t x291 = UINT16_MAX;
	uint16_t x292 = UINT16_MAX;
	int32_t t72 = 30;

	t72 = ((x289==x290)/(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 94740193340LLU;
	int64_t x294 = -171430LL;
	volatile int64_t x295 = -1LL;
	volatile int64_t t73 = -887744321884397LL;

	t73 = ((x293==x294)/(x295|x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	int64_t x299 = INT64_MAX;
	volatile uint64_t x300 = 12187LLU;

	t74 = ((x297==x298)/(x299|x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 7;
	uint16_t x302 = 337U;
	int32_t x303 = INT32_MIN;
	static uint32_t t75 = 3U;

	t75 = ((x301==x302)/(x303|x304));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	volatile uint16_t x306 = 2U;
	int32_t x307 = -1;
	static uint8_t x308 = UINT8_MAX;
	static volatile int32_t t76 = -699;

	t76 = ((x305==x306)/(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x310 = 10;
	static uint8_t x311 = 19U;
	uint8_t x312 = 3U;

	t77 = ((x309==x310)/(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 4007U;
	static volatile uint16_t x314 = UINT16_MAX;
	static int32_t x315 = 1595173;
	int16_t x316 = INT16_MIN;

	t78 = ((x313==x314)/(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	volatile uint64_t x319 = 534371LLU;
	static volatile uint64_t x320 = 470512981LLU;
	static uint64_t t79 = 44595506LLU;

	t79 = ((x317==x318)/(x319|x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = UINT32_MAX;
	int16_t x324 = -6373;
	int32_t t80 = 153279113;

	t80 = ((x321==x322)/(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	int32_t x326 = 6119334;
	int8_t x327 = -1;

	t81 = ((x325==x326)/(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = -1;
	volatile uint64_t x330 = UINT64_MAX;
	uint8_t x331 = 2U;
	volatile int32_t x332 = INT32_MIN;
	int32_t t82 = -201420909;

	t82 = ((x329==x330)/(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -2;
	uint16_t x334 = 2U;
	int16_t x335 = -9;
	static volatile uint64_t t83 = 28651601495LLU;

	t83 = ((x333==x334)/(x335|x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x339 = 1396U;
	static volatile int16_t x340 = -1;

	t84 = ((x337==x338)/(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MIN;
	volatile uint32_t x342 = UINT32_MAX;
	static int64_t x343 = INT64_MIN;
	int32_t x344 = -1;
	volatile int64_t t85 = 1LL;

	t85 = ((x341==x342)/(x343|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -32;
	int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t86 = -7711;

	t86 = ((x345==x346)/(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int32_t x352 = INT32_MIN;
	int32_t t87 = -6334;

	t87 = ((x349==x350)/(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = INT8_MIN;
	int64_t t88 = -1LL;

	t88 = ((x353==x354)/(x355|x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	uint32_t x358 = 0U;
	volatile int64_t x360 = -3955985120266LL;
	volatile int64_t t89 = -3314LL;

	t89 = ((x357==x358)/(x359|x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x363 = -64754988;
	static uint16_t x364 = 183U;
	static int32_t t90 = -266780074;

	t90 = ((x361==x362)/(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	uint64_t x366 = 49686LLU;
	volatile uint32_t x367 = 6U;
	int16_t x368 = INT16_MIN;
	volatile uint32_t t91 = 776228744U;

	t91 = ((x365==x366)/(x367|x368));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = 146;
	int32_t x371 = -2042;
	volatile uint32_t x372 = 1185511452U;

	t92 = ((x369==x370)/(x371|x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = 17386LL;
	static int16_t x376 = -1;
	volatile int32_t t93 = 448494616;

	t93 = ((x373==x374)/(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -1;
	int32_t x378 = INT32_MIN;
	int8_t x380 = -1;
	int32_t t94 = 16;

	t94 = ((x377==x378)/(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = UINT32_MAX;
	uint32_t x383 = 18444U;
	int8_t x384 = INT8_MIN;

	t95 = ((x381==x382)/(x383|x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MAX;

	t96 = ((x385==x386)/(x387|x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = 276890702844657817LLU;
	volatile int64_t x391 = INT64_MIN;
	volatile int16_t x392 = INT16_MIN;
	int64_t t97 = -17709LL;

	t97 = ((x389==x390)/(x391|x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -4850112;
	int64_t x394 = -26967918LL;
	uint32_t x395 = 161U;
	uint32_t x396 = 654518U;
	uint32_t t98 = 479788572U;

	t98 = ((x393==x394)/(x395|x396));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	static uint64_t x398 = UINT64_MAX;
	volatile int64_t x399 = -785876461006933LL;
	uint32_t x400 = 0U;
	volatile int64_t t99 = 311051858981064LL;

	t99 = ((x397==x398)/(x399|x400));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

