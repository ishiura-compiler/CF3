#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
volatile int32_t t1 = -2210;
uint64_t x12 = UINT64_MAX;
static int16_t x17 = INT16_MAX;
uint32_t x19 = 326750U;
int32_t x29 = INT32_MAX;
uint8_t x31 = 2U;
uint32_t x36 = 5110587U;
int8_t x37 = INT8_MAX;
volatile int8_t x40 = INT8_MIN;
uint64_t x42 = 749936193151414LLU;
volatile uint64_t t9 = 6128631150LLU;
int16_t x51 = -1;
uint64_t t12 = 52095LLU;
static int16_t x57 = -1;
int32_t x68 = INT32_MAX;
volatile int16_t x70 = -1;
int16_t x79 = INT16_MIN;
uint8_t x81 = UINT8_MAX;
volatile int32_t x85 = -490;
static int32_t x86 = INT32_MIN;
uint16_t x96 = 87U;
int32_t t20 = 27252541;
uint16_t x98 = UINT16_MAX;
int64_t x106 = -3378270417740LL;
int64_t t23 = -611592177390LL;
uint8_t x118 = 120U;
static int32_t x119 = -1;
uint32_t x126 = 311161U;
int8_t x135 = -1;
uint32_t t31 = 126612220U;
uint8_t x152 = UINT8_MAX;
int64_t t35 = 336LL;
volatile int32_t x162 = INT32_MIN;
static uint32_t t37 = 182536U;
uint16_t x171 = 12U;
volatile int16_t x188 = -211;
int64_t x190 = INT64_MAX;
volatile int64_t t43 = -5965499478LL;
volatile int32_t x197 = INT32_MIN;
uint32_t x202 = 0U;
uint32_t t46 = 4230650U;
volatile int64_t x205 = INT64_MIN;
uint8_t x215 = UINT8_MAX;
int32_t x217 = INT32_MIN;
int8_t x222 = INT8_MAX;
uint32_t x237 = UINT32_MAX;
volatile uint32_t t55 = 267868U;
volatile uint32_t x241 = 27581137U;
int64_t x243 = -275LL;
volatile int8_t x251 = -2;
int64_t x267 = -2072LL;
int64_t t60 = 35796843113767341LL;
volatile int64_t x270 = INT64_MIN;
static volatile uint64_t t62 = 84637397794LLU;
uint16_t x277 = 23U;
static int64_t x284 = -1LL;
volatile int32_t t65 = -14;
static volatile uint64_t t66 = 32589015025489468LLU;
int32_t x302 = 37;
int16_t x307 = 239;
int64_t t68 = -12443209981LL;
uint64_t x312 = 4867022019455674LLU;
volatile uint64_t t69 = 7814941847081LLU;
int32_t x313 = INT32_MIN;
uint8_t x314 = UINT8_MAX;
uint64_t x315 = UINT64_MAX;
int64_t x316 = INT64_MIN;
uint8_t x318 = 27U;
static uint16_t x327 = UINT16_MAX;
static int16_t x333 = -1;
uint32_t t75 = 2697870U;
uint32_t x356 = 599814U;
static int8_t x358 = INT8_MIN;
int64_t x362 = -1LL;
int64_t t83 = -265360325937LL;
uint16_t x376 = UINT16_MAX;
int32_t x378 = -2167;
int8_t x381 = INT8_MIN;
int32_t x386 = -1;
int64_t t89 = 1692134633756053LL;
int64_t x397 = -1LL;
volatile int64_t x400 = INT64_MIN;
static volatile int32_t t92 = -3;
static uint32_t x409 = UINT32_MAX;
volatile int64_t x419 = -16726771123164LL;
volatile uint16_t x420 = 0U;
static int32_t x423 = 35490;
int32_t x433 = INT32_MIN;
static volatile int64_t t99 = 256566141LL;


void f0(void) {
	int16_t x1 = 6;
	static int64_t x3 = INT64_MAX;
	static volatile int16_t x4 = INT16_MAX;
	volatile int64_t t0 = INT64_MIN;

	t0 = ((x1|x2)-(x3|x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static uint8_t x6 = UINT8_MAX;
	volatile int32_t x7 = -52705;
	volatile int8_t x8 = -1;

	t1 = ((x5|x6)-(x7|x8));

	if (t1 != 256) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	uint64_t x10 = 469441606223LLU;
	volatile int8_t x11 = INT8_MAX;
	static volatile uint64_t t2 = 13370373301LLU;

	t2 = ((x9|x10)-(x11|x12));

	if (t2 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x18 = -1;
	volatile uint32_t x20 = UINT32_MAX;
	static volatile uint32_t t3 = 1767762493U;

	t3 = ((x17|x18)-(x19|x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MIN;
	int16_t x23 = -7075;
	int8_t x24 = INT8_MAX;
	volatile int64_t t4 = -41LL;

	t4 = ((x21|x22)-(x23|x24));

	if (t4 != -2147476607LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	int32_t x26 = -1;
	uint32_t x27 = 1516U;
	uint32_t x28 = 503794U;
	uint32_t t5 = 103848254U;

	t5 = ((x25|x26)-(x27|x28));

	if (t5 != 4294463489U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = -1;
	uint32_t x32 = 3055382U;
	volatile uint32_t t6 = 318U;

	t6 = ((x29|x30)-(x31|x32));

	if (t6 != 4291911913U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 504;
	static int8_t x34 = -1;
	uint16_t x35 = 1217U;
	uint32_t t7 = 101U;

	t7 = ((x33|x34)-(x35|x36));

	if (t7 != 4289855492U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x38 = 1365U;
	int16_t x39 = INT16_MAX;
	uint32_t t8 = 1293U;

	t8 = ((x37|x38)-(x39|x40));

	if (t8 != 1408U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x41 = -1LL;
	static int32_t x43 = INT32_MAX;
	static int16_t x44 = INT16_MAX;

	t9 = ((x41|x42)-(x43|x44));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int32_t x46 = INT32_MIN;
	volatile uint64_t x47 = UINT64_MAX;
	uint32_t x48 = 1U;
	uint64_t t10 = 213114650664LLU;

	t10 = ((x45|x46)-(x47|x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	uint32_t x50 = 1441361108U;
	volatile int64_t x52 = INT64_MAX;
	volatile int64_t t11 = -3166923042LL;

	t11 = ((x49|x50)-(x51|x52));

	if (t11 != 1441366016LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x54 = -1;
	int64_t x55 = INT64_MAX;
	uint8_t x56 = 2U;

	t12 = ((x53|x54)-(x55|x56));

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x58 = INT64_MAX;
	uint32_t x59 = 2027225U;
	static int16_t x60 = INT16_MIN;
	static volatile int64_t t13 = 186526355635LL;

	t13 = ((x57|x58)-(x59|x60));

	if (t13 != -4294962906LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = 844;
	int32_t x66 = 30333011;
	uint8_t x67 = 2U;
	int32_t t14 = 4;

	t14 = ((x65|x66)-(x67|x68));

	if (t14 != -2117149856) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	int8_t x71 = INT8_MAX;
	int64_t x72 = 35469209220615LL;
	static volatile int64_t t15 = 2276974083LL;

	t15 = ((x69|x70)-(x71|x72));

	if (t15 != -35469209220736LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -1LL;
	static uint32_t x78 = 281314U;
	uint32_t x80 = 11787776U;
	int64_t t16 = -3573268226LL;

	t16 = ((x77|x78)-(x79|x80));

	if (t16 != -4294958593LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MAX;
	uint8_t x84 = 1U;
	int32_t t17 = 310177;

	t17 = ((x81|x82)-(x83|x84));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x87 = -1;
	volatile uint8_t x88 = 0U;
	static volatile int32_t t18 = 33210;

	t18 = ((x85|x86)-(x87|x88));

	if (t18 != -489) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 13U;
	int16_t x90 = -1;
	int32_t x91 = INT32_MIN;
	int8_t x92 = 3;
	static volatile uint32_t t19 = 3123551U;

	t19 = ((x89|x90)-(x91|x92));

	if (t19 != 2147483644U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = INT16_MAX;
	volatile uint8_t x94 = 43U;
	int8_t x95 = INT8_MIN;

	t20 = ((x93|x94)-(x95|x96));

	if (t20 != 32808) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	volatile uint16_t x99 = 4880U;
	static int8_t x100 = -1;
	int32_t t21 = 99;

	t21 = ((x97|x98)-(x99|x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = 581222210307214625LL;
	uint8_t x102 = 1U;
	static int8_t x103 = 11;
	int64_t x104 = -417099395307903816LL;
	int64_t t22 = 2085417044808621773LL;

	t22 = ((x101|x102)-(x103|x104));

	if (t22 != 998321605615118438LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = -16;
	volatile uint32_t x107 = UINT32_MAX;
	static int64_t x108 = 731859504LL;

	t23 = ((x105|x106)-(x107|x108));

	if (t23 != -4294967307LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -32251423;
	static uint64_t x110 = 276960261378184LLU;
	uint8_t x111 = 12U;
	int32_t x112 = -15517450;
	static volatile uint64_t t24 = 24417935787702LLU;

	t24 = ((x109|x110)-(x111|x112));

	if (t24 != 15513835LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = -1LL;
	int32_t x114 = 66265254;
	volatile int16_t x115 = -9;
	int32_t x116 = INT32_MIN;
	int64_t t25 = 4LL;

	t25 = ((x113|x114)-(x115|x116));

	if (t25 != 8LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x117 = INT16_MIN;
	int64_t x120 = 257581123LL;
	volatile int64_t t26 = 10228630167982LL;

	t26 = ((x117|x118)-(x119|x120));

	if (t26 != -32647LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = -1;
	static int32_t x123 = 18895162;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t27 = 27;

	t27 = ((x121|x122)-(x123|x124));

	if (t27 != 11973) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MIN;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = 6;
	volatile uint32_t t28 = 4U;

	t28 = ((x125|x126)-(x127|x128));

	if (t28 != 4294885242U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 13568705715545454LL;
	int64_t x130 = 9725143LL;
	static uint8_t x131 = UINT8_MAX;
	uint64_t x132 = 15042111932502LLU;
	static uint64_t t29 = 5627967243961LLU;

	t29 = ((x129|x130)-(x131|x132));

	if (t29 != 13553663612017920LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = INT32_MIN;
	static int16_t x134 = 14460;
	uint64_t x136 = 48176488490LLU;
	volatile uint64_t t30 = 13645754711486LLU;

	t30 = ((x133|x134)-(x135|x136));

	if (t30 != 18446744071562082429LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = INT8_MIN;
	static int16_t x142 = INT16_MIN;
	static uint32_t x143 = 902U;
	uint32_t x144 = 2836310U;

	t31 = ((x141|x142)-(x143|x144));

	if (t31 != 4292130730U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 1U;
	int8_t x146 = 14;
	uint16_t x147 = 9771U;
	int16_t x148 = -27;
	volatile int32_t t32 = -5;

	t32 = ((x145|x146)-(x147|x148));

	if (t32 != 32) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1;
	int16_t x150 = -1;
	int16_t x151 = -3;
	int32_t t33 = -3;

	t33 = ((x149|x150)-(x151|x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = -1;
	int16_t x155 = -1;
	uint32_t x156 = 3U;
	uint32_t t34 = 2396U;

	t34 = ((x153|x154)-(x155|x156));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	volatile int8_t x160 = 7;

	t35 = ((x157|x158)-(x159|x160));

	if (t35 != -2147483775LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = 1;
	static uint64_t x163 = UINT64_MAX;
	uint64_t x164 = UINT64_MAX;
	uint64_t t36 = 162964678333LLU;

	t36 = ((x161|x162)-(x163|x164));

	if (t36 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x165 = INT32_MIN;
	int16_t x166 = -17;
	int32_t x167 = 1;
	uint32_t x168 = 1332U;

	t37 = ((x165|x166)-(x167|x168));

	if (t37 != 4294965946U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t x170 = INT32_MIN;
	int64_t x172 = -194LL;
	uint64_t t38 = 511399050646991LLU;

	t38 = ((x169|x170)-(x171|x172));

	if (t38 != 193LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -1;
	static int8_t x174 = 0;
	uint64_t x175 = UINT64_MAX;
	static uint32_t x176 = UINT32_MAX;
	static uint64_t t39 = 1489LLU;

	t39 = ((x173|x174)-(x175|x176));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = INT32_MIN;
	volatile uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = -5832;
	uint32_t t40 = 0U;

	t40 = ((x177|x178)-(x179|x180));

	if (t40 != 2147483776U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = -1;
	int8_t x182 = INT8_MIN;
	static int16_t x183 = -1;
	int32_t x184 = -7664342;
	int32_t t41 = 5352378;

	t41 = ((x181|x182)-(x183|x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = 14;
	static int32_t x187 = INT32_MIN;
	static volatile int64_t t42 = 7597714882LL;

	t42 = ((x185|x186)-(x187|x188));

	if (t42 != -9223372036854775583LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x189 = INT8_MIN;
	static int64_t x191 = INT64_MIN;
	uint8_t x192 = 10U;

	t43 = ((x189|x190)-(x191|x192));

	if (t43 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x193 = INT32_MIN;
	static int8_t x194 = INT8_MAX;
	static volatile int32_t x195 = INT32_MIN;
	uint64_t x196 = 5655139LLU;
	uint64_t t44 = 110985LLU;

	t44 = ((x193|x194)-(x195|x196));

	if (t44 != 18446744073703896604LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x198 = INT32_MAX;
	static uint64_t x199 = 26287493527452LLU;
	static uint16_t x200 = 83U;
	volatile uint64_t t45 = 29LLU;

	t45 = ((x197|x198)-(x199|x200));

	if (t45 != 18446717786216024096LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MIN;
	static volatile int32_t x203 = INT32_MIN;
	uint16_t x204 = 4U;

	t46 = ((x201|x202)-(x203|x204));

	if (t46 != 4294967292U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x206 = UINT64_MAX;
	static uint8_t x207 = 1U;
	uint16_t x208 = 1U;
	uint64_t t47 = 8364107LLU;

	t47 = ((x205|x206)-(x207|x208));

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	static int32_t x210 = -1;
	int8_t x211 = INT8_MIN;
	uint64_t x212 = 1189LLU;
	static volatile uint64_t t48 = 1769766LLU;

	t48 = ((x209|x210)-(x211|x212));

	if (t48 != 90LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -35;
	volatile uint32_t x214 = UINT32_MAX;
	uint64_t x216 = 25248LLU;
	uint64_t t49 = 58179357206LLU;

	t49 = ((x213|x214)-(x215|x216));

	if (t49 != 4294941952LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x218 = -3;
	int64_t x219 = INT64_MIN;
	static uint32_t x220 = UINT32_MAX;
	int64_t t50 = -2249995931736871857LL;

	t50 = ((x217|x218)-(x219|x220));

	if (t50 != 9223372032559808510LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x223 = 28;
	int8_t x224 = 1;
	volatile int32_t t51 = 451346057;

	t51 = ((x221|x222)-(x223|x224));

	if (t51 != 65506) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MIN;
	int8_t x226 = -1;
	uint8_t x227 = 11U;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t52 = -42;

	t52 = ((x225|x226)-(x227|x228));

	if (t52 != -256) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = INT32_MIN;
	volatile int8_t x230 = -6;
	uint32_t x231 = 1U;
	static int64_t x232 = -1LL;
	static volatile int64_t t53 = -22329040LL;

	t53 = ((x229|x230)-(x231|x232));

	if (t53 != -5LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = UINT64_MAX;
	int8_t x234 = 1;
	volatile int8_t x235 = INT8_MIN;
	static uint8_t x236 = UINT8_MAX;
	uint64_t t54 = 4223965073LLU;

	t54 = ((x233|x234)-(x235|x236));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x238 = UINT16_MAX;
	int16_t x239 = -1;
	int8_t x240 = INT8_MAX;

	t55 = ((x237|x238)-(x239|x240));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x242 = -10925;
	int64_t x244 = -23271306596LL;
	int64_t t56 = 90921165523LL;

	t56 = ((x241|x242)-(x243|x244));

	if (t56 != 4294959318LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MIN;
	uint8_t x247 = 0U;
	uint64_t x248 = 0LLU;
	static uint64_t t57 = 54LLU;

	t57 = ((x245|x246)-(x247|x248));

	if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 243424489695131033LLU;
	static int16_t x250 = -8246;
	static int8_t x252 = -1;
	volatile uint64_t t58 = 190801723580LLU;

	t58 = ((x249|x250)-(x251|x252));

	if (t58 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x261 = 27U;
	int8_t x262 = 2;
	uint16_t x263 = UINT16_MAX;
	static int64_t x264 = -127781426537LL;
	volatile int64_t t59 = 2862LL;

	t59 = ((x261|x262)-(x263|x264));

	if (t59 != 127781371932LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x265 = INT8_MIN;
	static int32_t x266 = -1;
	int64_t x268 = INT64_MIN;

	t60 = ((x265|x266)-(x267|x268));

	if (t60 != 2071LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x269 = UINT8_MAX;
	volatile uint8_t x271 = UINT8_MAX;
	volatile int32_t x272 = -5;
	volatile int64_t t61 = 10180683682LL;

	t61 = ((x269|x270)-(x271|x272));

	if (t61 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 7U;
	int16_t x274 = INT16_MIN;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = UINT64_MAX;

	t62 = ((x273|x274)-(x275|x276));

	if (t62 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x278 = 3U;
	volatile int16_t x279 = 64;
	uint16_t x280 = 33U;
	int32_t t63 = -180068414;

	t63 = ((x277|x278)-(x279|x280));

	if (t63 != -74) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = 0;
	static int64_t x282 = -1LL;
	uint32_t x283 = UINT32_MAX;
	int64_t t64 = 1472576156LL;

	t64 = ((x281|x282)-(x283|x284));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x285 = 34U;
	int16_t x286 = -384;
	int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MAX;

	t65 = ((x285|x286)-(x287|x288));

	if (t65 != -349) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = -1;
	static int8_t x294 = -1;
	uint64_t x295 = 5989LLU;
	uint8_t x296 = UINT8_MAX;

	t66 = ((x293|x294)-(x295|x296));

	if (t66 != 18446744073709545472LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x301 = 3U;
	int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MAX;
	int32_t t67 = -922640316;

	t67 = ((x301|x302)-(x303|x304));

	if (t67 != 40) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x305 = -1;
	int64_t x306 = -738868LL;
	int16_t x308 = -1;

	t68 = ((x305|x306)-(x307|x308));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = INT32_MIN;
	volatile uint16_t x310 = UINT16_MAX;
	int64_t x311 = -12371618456852329LL;

	t69 = ((x309|x310)-(x311|x312));

	if (t69 != 12017007669777728LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t t70 = 65033LLU;

	t70 = ((x313|x314)-(x315|x316));

	if (t70 != 18446744071562068224LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = -1;
	int32_t x319 = INT32_MAX;
	volatile int64_t x320 = 66708100963023033LL;
	volatile int64_t t71 = 16903210921126LL;

	t71 = ((x317|x318)-(x319|x320));

	if (t71 != -66708102749093888LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = UINT16_MAX;
	uint16_t x322 = 0U;
	static uint16_t x323 = UINT16_MAX;
	uint64_t x324 = UINT64_MAX;
	uint64_t t72 = 10LLU;

	t72 = ((x321|x322)-(x323|x324));

	if (t72 != 65536LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = INT16_MIN;
	volatile int32_t x326 = -687;
	int64_t x328 = 447279223033LL;
	static volatile int64_t t73 = 108LL;

	t73 = ((x325|x326)-(x327|x328));

	if (t73 != -447279268526LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -1;
	uint8_t x330 = 69U;
	static uint32_t x331 = UINT32_MAX;
	uint16_t x332 = UINT16_MAX;
	static volatile uint32_t t74 = 828723047U;

	t74 = ((x329|x330)-(x331|x332));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x334 = INT16_MAX;
	uint16_t x335 = UINT16_MAX;
	uint32_t x336 = 56U;

	t75 = ((x333|x334)-(x335|x336));

	if (t75 != 4294901760U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 46U;
	int32_t x338 = 397559508;
	int64_t x339 = -247995307LL;
	uint16_t x340 = 2U;
	volatile int64_t t76 = -1047014857345LL;

	t76 = ((x337|x338)-(x339|x340));

	if (t76 != 645554855LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x341 = INT16_MIN;
	volatile int16_t x342 = INT16_MIN;
	volatile int64_t x343 = -112264828336246889LL;
	volatile int8_t x344 = INT8_MAX;
	volatile int64_t t77 = -6256325046955LL;

	t77 = ((x341|x342)-(x343|x344));

	if (t77 != 112264828336214017LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = INT8_MIN;
	static int64_t x350 = INT64_MIN;
	int16_t x351 = -1;
	static int32_t x352 = 704305;
	volatile int64_t t78 = 7047244536LL;

	t78 = ((x349|x350)-(x351|x352));

	if (t78 != -127LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x353 = 1933U;
	int16_t x354 = -1;
	int32_t x355 = -139069;
	volatile uint32_t t79 = 27451U;

	t79 = ((x353|x354)-(x355|x356));

	if (t79 != 137272U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = INT8_MIN;
	static int8_t x359 = -48;
	volatile uint64_t x360 = 42322LLU;
	uint64_t t80 = 8704997389569LLU;

	t80 = ((x357|x358)-(x359|x360));

	if (t80 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x361 = INT32_MAX;
	volatile uint8_t x363 = 22U;
	int64_t x364 = -1LL;
	volatile int64_t t81 = 0LL;

	t81 = ((x361|x362)-(x363|x364));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = 2;
	int32_t x366 = -323513;
	int8_t x367 = -1;
	uint64_t x368 = 6947LLU;
	volatile uint64_t t82 = 182687277046645LLU;

	t82 = ((x365|x366)-(x367|x368));

	if (t82 != 18446744073709228104LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = INT8_MAX;
	static volatile int32_t x370 = INT32_MAX;
	uint16_t x371 = 20U;
	volatile int64_t x372 = -132555071177087LL;

	t83 = ((x369|x370)-(x371|x372));

	if (t83 != 132557218660714LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = 330;
	volatile uint16_t x375 = UINT16_MAX;
	static int32_t t84 = 3366390;

	t84 = ((x373|x374)-(x375|x376));

	if (t84 != -65589) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = 1688531214184408LL;
	volatile int32_t x379 = INT32_MAX;
	static int64_t x380 = INT64_MIN;
	static volatile int64_t t85 = -816924LL;

	t85 = ((x377|x378)-(x379|x380));

	if (t85 != 9223372034707292122LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x382 = INT8_MAX;
	static int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t86 = -384016735;

	t86 = ((x381|x382)-(x383|x384));

	if (t86 != 32640) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x387 = 57U;
	int8_t x388 = 7;
	volatile int32_t t87 = -1911276;

	t87 = ((x385|x386)-(x387|x388));

	if (t87 != -64) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = INT64_MIN;
	volatile uint32_t x390 = 11U;
	static int16_t x391 = INT16_MIN;
	int16_t x392 = -1;
	volatile int64_t t88 = -278LL;

	t88 = ((x389|x390)-(x391|x392));

	if (t88 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x393 = 0U;
	int64_t x394 = -1LL;
	uint16_t x395 = 2U;
	volatile uint32_t x396 = 1628U;

	t89 = ((x393|x394)-(x395|x396));

	if (t89 != -1631LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x398 = 434121056U;
	uint32_t x399 = 11U;
	int64_t t90 = -7926222490LL;

	t90 = ((x397|x398)-(x399|x400));

	if (t90 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 47U;
	int32_t x403 = 6395445;
	int8_t x404 = INT8_MIN;
	int32_t t91 = -14777110;

	t91 = ((x401|x402)-(x403|x404));

	if (t91 != -32646) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x405 = INT16_MAX;
	int16_t x406 = 18;
	volatile int16_t x407 = INT16_MIN;
	volatile uint8_t x408 = UINT8_MAX;

	t92 = ((x405|x406)-(x407|x408));

	if (t92 != 65280) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x410 = -193906LL;
	int16_t x411 = INT16_MIN;
	static uint8_t x412 = 1U;
	volatile int64_t t93 = -20256LL;

	t93 = ((x409|x410)-(x411|x412));

	if (t93 != 32766LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = UINT8_MAX;
	volatile int8_t x418 = 3;
	static volatile int64_t t94 = -31929749438363LL;

	t94 = ((x417|x418)-(x419|x420));

	if (t94 != 16726771123419LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = INT8_MAX;
	volatile int16_t x422 = INT16_MAX;
	static int32_t x424 = -1;
	int32_t t95 = 15152395;

	t95 = ((x421|x422)-(x423|x424));

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x425 = 3044206U;
	static uint8_t x426 = UINT8_MAX;
	volatile uint8_t x427 = 27U;
	uint64_t x428 = UINT64_MAX;
	static volatile uint64_t t96 = 1969008LLU;

	t96 = ((x425|x426)-(x427|x428));

	if (t96 != 3044352LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x429 = UINT64_MAX;
	int64_t x430 = INT64_MIN;
	static int64_t x431 = INT64_MIN;
	uint8_t x432 = 0U;
	volatile uint64_t t97 = 233063432547LLU;

	t97 = ((x429|x430)-(x431|x432));

	if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x434 = UINT8_MAX;
	volatile uint16_t x435 = UINT16_MAX;
	int64_t x436 = INT64_MIN;
	volatile int64_t t98 = 130537393775LL;

	t98 = ((x433|x434)-(x435|x436));

	if (t98 != 9223372034707226880LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x437 = -1;
	int64_t x438 = -1LL;
	int64_t x439 = 9590572576022481LL;
	static int16_t x440 = 3123;

	t99 = ((x437|x438)-(x439|x440));

	if (t99 != -9590572576022516LL) { NG(); } else { ; }
	
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

