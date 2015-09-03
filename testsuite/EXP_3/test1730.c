#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x4 = UINT8_MAX;
int16_t x6 = INT16_MIN;
int16_t x14 = INT16_MAX;
int64_t x37 = INT64_MAX;
int8_t x45 = 40;
int8_t x46 = INT8_MIN;
int16_t x53 = -1;
int32_t x54 = INT32_MIN;
int64_t x58 = -3LL;
uint64_t t14 = 23685802315868616LLU;
uint32_t x63 = UINT32_MAX;
volatile uint64_t x66 = UINT64_MAX;
int64_t x70 = -1181448673898767565LL;
static int8_t x87 = INT8_MIN;
static volatile int32_t x89 = 33201749;
int16_t x95 = 3430;
uint64_t x102 = UINT64_MAX;
int8_t x110 = INT8_MIN;
int16_t x112 = -1;
uint16_t x116 = UINT16_MAX;
volatile uint64_t t28 = 3LLU;
volatile int64_t t31 = 1094718410773LL;
int64_t x134 = -163619541036501897LL;
uint16_t x135 = UINT16_MAX;
static int32_t x139 = -1;
int8_t x146 = -1;
static int32_t x148 = INT32_MIN;
volatile int8_t x151 = INT8_MAX;
volatile int16_t x152 = INT16_MIN;
volatile uint64_t t37 = 84930LLU;
uint8_t x160 = 7U;
static uint8_t x161 = 19U;
volatile uint64_t t41 = 2435418686243680915LLU;
int16_t x173 = -1;
uint64_t t43 = UINT64_MAX;
volatile uint8_t x183 = 11U;
volatile uint32_t t45 = UINT32_MAX;
volatile int8_t x193 = INT8_MIN;
uint32_t x197 = 282353382U;
volatile int64_t x199 = 1205177237306LL;
volatile int64_t t48 = 396527495LL;
volatile int32_t x202 = INT32_MIN;
volatile int16_t x203 = INT16_MIN;
volatile uint32_t t49 = 2773U;
static int32_t x208 = INT32_MAX;
volatile int32_t x210 = 327841;
int16_t x220 = INT16_MAX;
int64_t x221 = 15587757988924482LL;
uint64_t t54 = 8589305019056LLU;
int64_t x228 = -1LL;
int32_t x234 = INT32_MIN;
int64_t x242 = -285069220610129826LL;
static uint32_t t59 = 121U;
int64_t x256 = INT64_MIN;
int16_t x264 = INT16_MIN;
uint16_t x272 = 1U;
int32_t t65 = 5258577;
uint8_t x278 = UINT8_MAX;
static uint8_t x279 = UINT8_MAX;
uint64_t x281 = 946975637025139LLU;
volatile int8_t x284 = INT8_MIN;
static volatile uint32_t x290 = UINT32_MAX;
volatile uint32_t t70 = 403467U;
int64_t t72 = 136723128906833LL;
volatile int8_t x311 = INT8_MIN;
int16_t x312 = INT16_MAX;
uint8_t x314 = 15U;
uint8_t x322 = 2U;
int32_t x326 = INT32_MAX;
uint16_t x329 = UINT16_MAX;
int32_t x332 = -5208270;
int16_t x334 = 2126;
static volatile int16_t x335 = -1;
uint64_t x336 = UINT64_MAX;
uint64_t t80 = UINT64_MAX;
int64_t t81 = -39158330251255401LL;
static volatile int32_t t82 = 19074794;
int32_t x347 = 90911810;
uint64_t x353 = 94930LLU;
int32_t x355 = INT32_MIN;
volatile uint64_t t85 = 8898LLU;
uint16_t x357 = UINT16_MAX;
uint16_t x361 = 3U;
static int32_t x364 = 11;
int32_t x368 = -2872;
volatile uint64_t t89 = 7LLU;
int16_t x374 = INT16_MIN;
int16_t x385 = 3;
volatile uint64_t x386 = 1LLU;
uint64_t x388 = UINT64_MAX;
volatile int32_t x389 = INT32_MIN;
uint16_t x392 = UINT16_MAX;
int64_t t94 = 639LL;
volatile int64_t x402 = INT64_MAX;
int8_t x404 = 8;
volatile uint32_t x409 = 3U;
static volatile uint32_t t97 = 2837520U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = -1;
	uint8_t x3 = 30U;
	static volatile int32_t t0 = -18018;

	t0 = ((x1/x2)+(x3&x4));

	if (t0 != 158) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x7 = INT16_MIN;
	static uint64_t x8 = 60LLU;
	volatile uint64_t t1 = 247303884708113LLU;

	t1 = ((x5/x6)+(x7&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	int16_t x10 = INT16_MAX;
	int64_t x11 = -51730124515061LL;
	int64_t x12 = -75LL;
	int64_t t2 = -12LL;

	t2 = ((x9/x10)+(x11&x12));

	if (t2 != -51730124515071LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 1;
	volatile uint8_t x15 = 126U;
	uint8_t x16 = 0U;
	int32_t t3 = -210258301;

	t3 = ((x13/x14)+(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static volatile int64_t x18 = INT64_MIN;
	static volatile int8_t x19 = -37;
	static int8_t x20 = -1;
	int64_t t4 = -5003350700541070LL;

	t4 = ((x17/x18)+(x19&x20));

	if (t4 != -37LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 0;
	int32_t x22 = -12802258;
	static uint32_t x23 = 0U;
	int64_t x24 = -9798353LL;
	volatile int64_t t5 = -7282971899LL;

	t5 = ((x21/x22)+(x23&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 7U;
	int16_t x26 = 1454;
	int8_t x27 = INT8_MIN;
	uint32_t x28 = 81273U;
	volatile uint32_t t6 = 1561U;

	t6 = ((x25/x26)+(x27&x28));

	if (t6 != 81152U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int16_t x30 = 35;
	uint8_t x31 = 17U;
	uint16_t x32 = 1327U;
	int32_t t7 = -120855516;

	t7 = ((x29/x30)+(x31&x32));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -2716LL;
	int64_t x34 = 5830395945931LL;
	int64_t x35 = -240962897901LL;
	volatile int64_t x36 = -1LL;
	volatile int64_t t8 = 435LL;

	t8 = ((x33/x34)+(x35&x36));

	if (t8 != -240962897901LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 4U;
	int64_t x39 = -3595263484021LL;
	volatile int16_t x40 = INT16_MIN;
	int64_t t9 = 319LL;

	t9 = ((x37/x38)+(x39&x40));

	if (t9 != 2305839413950185471LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	volatile int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MIN;
	uint16_t x44 = UINT16_MAX;
	static int32_t t10 = -197;

	t10 = ((x41/x42)+(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x47 = 4U;
	static int8_t x48 = INT8_MIN;
	volatile uint32_t t11 = 4U;

	t11 = ((x45/x46)+(x47&x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 2754369976LLU;
	static volatile uint64_t x50 = UINT64_MAX;
	int16_t x51 = 7;
	static uint8_t x52 = UINT8_MAX;
	volatile uint64_t t12 = 137502LLU;

	t12 = ((x49/x50)+(x51&x52));

	if (t12 != 7LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x55 = 24U;
	int16_t x56 = INT16_MIN;
	static volatile int32_t t13 = 61;

	t13 = ((x53/x54)+(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -97278340;
	int32_t x59 = INT32_MIN;
	uint64_t x60 = 8572751323417451382LLU;

	t14 = ((x57/x58)+(x59&x60));

	if (t14 != 8572751323381811329LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = -2374;
	static int8_t x64 = INT8_MIN;
	volatile uint32_t t15 = 28531851U;

	t15 = ((x61/x62)+(x63&x64));

	if (t15 != 4294967168U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -5;
	static int32_t x67 = 36;
	uint64_t x68 = UINT64_MAX;
	static uint64_t t16 = 327727520772LLU;

	t16 = ((x65/x66)+(x67&x68));

	if (t16 != 36LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	static int16_t x71 = INT16_MIN;
	uint8_t x72 = 17U;
	volatile uint64_t t17 = 65330989LLU;

	t17 = ((x69/x70)+(x71&x72));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 1;
	volatile int8_t x78 = 20;
	int16_t x79 = INT16_MIN;
	int32_t x80 = -1;
	volatile int32_t t18 = 10;

	t18 = ((x77/x78)+(x79&x80));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MAX;
	static int8_t x83 = INT8_MAX;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t19 = 1U;

	t19 = ((x81/x82)+(x83&x84));

	if (t19 != 129U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	int8_t x88 = INT8_MIN;
	int64_t t20 = 15304037574534695LL;

	t20 = ((x85/x86)+(x87&x88));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = -1LL;
	static volatile int16_t x91 = INT16_MIN;
	static int16_t x92 = INT16_MIN;
	int64_t t21 = -20613LL;

	t21 = ((x89/x90)+(x91&x92));

	if (t21 != -33234517LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -146212LL;
	int16_t x94 = INT16_MIN;
	static int16_t x96 = INT16_MAX;
	int64_t t22 = 38497761578LL;

	t22 = ((x93/x94)+(x95&x96));

	if (t22 != 3434LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 4U;
	int8_t x98 = -1;
	int32_t x99 = INT32_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	uint64_t t23 = 17736LLU;

	t23 = ((x97/x98)+(x99&x100));

	if (t23 != 2147483643LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MIN;
	static int64_t x103 = INT64_MIN;
	int64_t x104 = -1LL;
	static volatile uint64_t t24 = 2445895LLU;

	t24 = ((x101/x102)+(x103&x104));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 1969104406991LLU;
	int64_t x106 = INT64_MIN;
	uint64_t x107 = 324638LLU;
	static int32_t x108 = -1;
	volatile uint64_t t25 = 652555094LLU;

	t25 = ((x105/x106)+(x107&x108));

	if (t25 != 324638LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = 0;
	uint32_t x111 = UINT32_MAX;
	uint32_t t26 = UINT32_MAX;

	t26 = ((x109/x110)+(x111&x112));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	static int8_t x114 = 12;
	static volatile int8_t x115 = INT8_MIN;
	volatile int32_t t27 = -649739984;

	t27 = ((x113/x114)+(x115&x116));

	if (t27 != 62678) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 123LLU;
	static int16_t x118 = -1;
	static int16_t x119 = INT16_MIN;
	int16_t x120 = -1;

	t28 = ((x117/x118)+(x119&x120));

	if (t28 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x121 = 0U;
	volatile uint16_t x122 = UINT16_MAX;
	int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MAX;
	int32_t t29 = 43;

	t29 = ((x121/x122)+(x123&x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x126 = UINT16_MAX;
	volatile uint64_t x127 = 68072014286LLU;
	static int16_t x128 = -1;
	uint64_t t30 = 1552756820114371LLU;

	t30 = ((x125/x126)+(x127&x128));

	if (t30 != 18446603402145694158LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	volatile int16_t x130 = 438;
	static volatile int64_t x131 = INT64_MIN;
	static uint32_t x132 = UINT32_MAX;

	t31 = ((x129/x130)+(x131&x132));

	if (t31 != -74LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = UINT64_MAX;
	uint32_t x136 = 7U;
	uint64_t t32 = 165465965053179927LLU;

	t32 = ((x133/x134)+(x135&x136));

	if (t32 != 8LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	uint64_t x138 = 27562208229148LLU;
	int64_t x140 = 111LL;
	uint64_t t33 = 121880789618547133LLU;

	t33 = ((x137/x138)+(x139&x140));

	if (t33 != 669387LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = 3648;
	int32_t x142 = -121;
	static int64_t x143 = INT64_MIN;
	static int64_t x144 = INT64_MAX;
	volatile int64_t t34 = -64448130124LL;

	t34 = ((x141/x142)+(x143&x144));

	if (t34 != -30LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 12492U;
	volatile uint8_t x147 = 21U;
	volatile int32_t t35 = 4814048;

	t35 = ((x145/x146)+(x147&x148));

	if (t35 != -12492) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	uint32_t x150 = UINT32_MAX;
	volatile uint32_t t36 = 1664137U;

	t36 = ((x149/x150)+(x151&x152));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	int8_t x155 = INT8_MIN;
	uint64_t x156 = 13780591LLU;

	t37 = ((x153/x154)+(x155&x156));

	if (t37 != 18446744071575848448LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = 1;
	static uint64_t x158 = 26428LLU;
	uint32_t x159 = 116U;
	static volatile uint64_t t38 = 3170LLU;

	t38 = ((x157/x158)+(x159&x160));

	if (t38 != 4LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = 1;
	int8_t x163 = INT8_MIN;
	int8_t x164 = -1;
	int32_t t39 = -22;

	t39 = ((x161/x162)+(x163&x164));

	if (t39 != -109) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = -120482709131LL;
	int8_t x166 = -22;
	int8_t x167 = INT8_MAX;
	static uint8_t x168 = UINT8_MAX;
	int64_t t40 = -13206777410LL;

	t40 = ((x165/x166)+(x167&x168));

	if (t40 != 5476486905LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MAX;
	uint64_t x171 = 248651LLU;
	int16_t x172 = INT16_MAX;

	t41 = ((x169/x170)+(x171&x172));

	if (t41 != 18446744069414603593LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x174 = -1363LL;
	int64_t x175 = INT64_MIN;
	int32_t x176 = 346;
	volatile int64_t t42 = 386356331LL;

	t42 = ((x173/x174)+(x175&x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = 0;
	volatile int8_t x178 = INT8_MIN;
	static uint64_t x179 = UINT64_MAX;
	int32_t x180 = -1;

	t43 = ((x177/x178)+(x179&x180));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = INT64_MAX;
	int32_t x184 = -1;
	volatile int64_t t44 = -765558LL;

	t44 = ((x181/x182)+(x183&x184));

	if (t44 != 11LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x185 = 19U;
	int16_t x186 = INT16_MIN;
	int32_t x187 = -1;
	uint32_t x188 = UINT32_MAX;

	t45 = ((x185/x186)+(x187&x188));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = 1;
	int8_t x190 = -1;
	int8_t x191 = 3;
	static int64_t x192 = -1LL;
	int64_t t46 = 13197987LL;

	t46 = ((x189/x190)+(x191&x192));

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x194 = INT8_MAX;
	int64_t x195 = INT64_MIN;
	uint16_t x196 = 55U;
	volatile int64_t t47 = -216107668612299LL;

	t47 = ((x193/x194)+(x195&x196));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x198 = 2279910LL;
	static int16_t x200 = -1;

	t48 = ((x197/x198)+(x199&x200));

	if (t48 != 1205177237429LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x201 = 15261579U;
	volatile uint16_t x204 = UINT16_MAX;

	t49 = ((x201/x202)+(x203&x204));

	if (t49 != 32768U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -1;
	uint32_t x206 = 50812U;
	int64_t x207 = INT64_MAX;
	int64_t t50 = 0LL;

	t50 = ((x205/x206)+(x207&x208));

	if (t50 != 2147568173LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = 0;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = INT8_MAX;
	volatile int32_t t51 = 71530000;

	t51 = ((x209/x210)+(x211&x212));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = -4035560;
	uint64_t x214 = 2348684963654LLU;
	uint16_t x215 = 46U;
	volatile int32_t x216 = INT32_MIN;
	volatile uint64_t t52 = 338LLU;

	t52 = ((x213/x214)+(x215&x216));

	if (t52 != 7854073LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = 1218;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = -1;
	static uint32_t t53 = 97781U;

	t53 = ((x217/x218)+(x219&x220));

	if (t53 != 32767U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x222 = 3232944500712927899LLU;
	int32_t x223 = 0;
	int64_t x224 = 1LL;

	t54 = ((x221/x222)+(x223&x224));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = 7;
	volatile int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	volatile int64_t t55 = INT64_MIN;

	t55 = ((x225/x226)+(x227&x228));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	uint8_t x235 = 35U;
	volatile int16_t x236 = -1;
	volatile int32_t t56 = -28447948;

	t56 = ((x233/x234)+(x235&x236));

	if (t56 != 35) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MIN;
	static uint64_t x238 = UINT64_MAX;
	int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t57 = 74688LLU;

	t57 = ((x237/x238)+(x239&x240));

	if (t57 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x241 = 15U;
	int64_t x243 = INT64_MIN;
	static volatile int16_t x244 = INT16_MIN;
	volatile int64_t t58 = INT64_MIN;

	t58 = ((x241/x242)+(x243&x244));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 13294402;
	int16_t x246 = INT16_MAX;
	int8_t x247 = 0;
	uint32_t x248 = 916345469U;

	t59 = ((x245/x246)+(x247&x248));

	if (t59 != 405U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	int32_t x250 = 27054;
	int16_t x251 = -1;
	int64_t x252 = INT64_MAX;
	int64_t t60 = INT64_MAX;

	t60 = ((x249/x250)+(x251&x252));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = UINT8_MAX;
	volatile int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	static int64_t t61 = INT64_MIN;

	t61 = ((x253/x254)+(x255&x256));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	int8_t x258 = INT8_MIN;
	int16_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile uint64_t t62 = 2165750LLU;

	t62 = ((x257/x258)+(x259&x260));

	if (t62 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = INT8_MAX;
	static volatile uint8_t x262 = UINT8_MAX;
	int64_t x263 = 212LL;
	volatile int64_t t63 = -147932495LL;

	t63 = ((x261/x262)+(x263&x264));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x265 = INT16_MAX;
	volatile uint64_t x266 = UINT64_MAX;
	volatile int64_t x267 = INT64_MAX;
	int64_t x268 = -1LL;
	uint64_t t64 = 69957102944LLU;

	t64 = ((x265/x266)+(x267&x268));

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = 1;
	static volatile int8_t x270 = -7;
	uint16_t x271 = UINT16_MAX;

	t65 = ((x269/x270)+(x271&x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x273 = 0U;
	int32_t x274 = -10;
	volatile int32_t x275 = -1;
	int64_t x276 = -5175749LL;
	volatile int64_t t66 = 331467745364565LL;

	t66 = ((x273/x274)+(x275&x276));

	if (t66 != -5175749LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x277 = -1;
	volatile int8_t x280 = INT8_MIN;
	static volatile int32_t t67 = 379216398;

	t67 = ((x277/x278)+(x279&x280));

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x282 = -29;
	int32_t x283 = INT32_MIN;
	static uint64_t t68 = 2121857049105895419LLU;

	t68 = ((x281/x282)+(x283&x284));

	if (t68 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = INT64_MAX;
	uint32_t x286 = 4U;
	int64_t x287 = 1576556921561LL;
	uint64_t x288 = 168292219LLU;
	static volatile uint64_t t69 = 125957803135882346LLU;

	t69 = ((x285/x286)+(x287&x288));

	if (t69 != 2305843009247609432LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 3;
	int8_t x291 = 41;
	static int8_t x292 = -39;

	t70 = ((x289/x290)+(x291&x292));

	if (t70 != 9U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -3043;
	int8_t x294 = -55;
	uint32_t x295 = 9367124U;
	int32_t x296 = -1;
	volatile uint32_t t71 = 1U;

	t71 = ((x293/x294)+(x295&x296));

	if (t71 != 9367179U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -1;
	volatile int8_t x298 = -1;
	volatile int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;

	t72 = ((x297/x298)+(x299&x300));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 0U;
	uint64_t x306 = 56170LLU;
	int64_t x307 = -1LL;
	static uint8_t x308 = 31U;
	static uint64_t t73 = 16685209947521LLU;

	t73 = ((x305/x306)+(x307&x308));

	if (t73 != 31LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x309 = -1;
	uint16_t x310 = 3564U;
	static int32_t t74 = 872;

	t74 = ((x309/x310)+(x311&x312));

	if (t74 != 32640) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MAX;
	int8_t x315 = INT8_MIN;
	static volatile int16_t x316 = INT16_MAX;
	int64_t t75 = 1546230196382LL;

	t75 = ((x313/x314)+(x315&x316));

	if (t75 != 614891469123684360LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = INT16_MIN;
	static volatile int64_t x318 = -63LL;
	static int64_t x319 = -1LL;
	static int32_t x320 = INT32_MAX;
	volatile int64_t t76 = -3038010323615963LL;

	t76 = ((x317/x318)+(x319&x320));

	if (t76 != 2147484167LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = -4;
	int64_t x323 = INT64_MIN;
	volatile uint8_t x324 = 47U;
	volatile int64_t t77 = -2660457411834131541LL;

	t77 = ((x321/x322)+(x323&x324));

	if (t77 != -2LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x325 = 1195U;
	volatile uint8_t x327 = UINT8_MAX;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t78 = 16825;

	t78 = ((x325/x326)+(x327&x328));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x330 = 3U;
	static uint16_t x331 = UINT16_MAX;
	volatile uint32_t t79 = 1576637U;

	t79 = ((x329/x330)+(x331&x332));

	if (t79 != 56455U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x333 = 1U;

	t80 = ((x333/x334)+(x335&x336));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x337 = INT64_MAX;
	static int64_t x338 = INT64_MAX;
	int32_t x339 = -1822;
	static int32_t x340 = INT32_MAX;

	t81 = ((x337/x338)+(x339&x340));

	if (t81 != 2147481827LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x341 = 36U;
	volatile int16_t x342 = INT16_MAX;
	int8_t x343 = -1;
	uint8_t x344 = 1U;

	t82 = ((x341/x342)+(x343&x344));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = 130U;
	uint64_t x346 = UINT64_MAX;
	int8_t x348 = 62;
	volatile uint64_t t83 = 15686187LLU;

	t83 = ((x345/x346)+(x347&x348));

	if (t83 != 2LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MAX;
	int32_t x350 = INT32_MAX;
	uint8_t x351 = UINT8_MAX;
	static uint32_t x352 = 68210502U;
	volatile uint32_t t84 = 103681U;

	t84 = ((x349/x350)+(x351&x352));

	if (t84 != 71U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x354 = INT32_MIN;
	volatile uint64_t x356 = 93LLU;

	t85 = ((x353/x354)+(x355&x356));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x358 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	int32_t x360 = INT32_MAX;
	volatile int32_t t86 = 111;

	t86 = ((x357/x358)+(x359&x360));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x362 = -66257563;
	static int16_t x363 = INT16_MAX;
	int32_t t87 = -834965;

	t87 = ((x361/x362)+(x363&x364));

	if (t87 != 11) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x365 = INT64_MAX;
	static volatile int32_t x366 = INT32_MIN;
	int8_t x367 = -1;
	int64_t t88 = 1838LL;

	t88 = ((x365/x366)+(x367&x368));

	if (t88 != -4294970167LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = 694;
	int64_t x370 = -3299406211263LL;
	uint64_t x371 = 59825642LLU;
	uint32_t x372 = UINT32_MAX;

	t89 = ((x369/x370)+(x371&x372));

	if (t89 != 59825642LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = 1053276032432504001LL;
	int32_t x375 = 3305755;
	uint16_t x376 = UINT16_MAX;
	int64_t t90 = -674589353792422LL;

	t90 = ((x373/x374)+(x375&x376));

	if (t90 != -32143433577993LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	uint16_t x379 = 86U;
	volatile int8_t x380 = 1;
	volatile int64_t t91 = 540767236726LL;

	t91 = ((x377/x378)+(x379&x380));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = UINT32_MAX;
	volatile int8_t x382 = -10;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MAX;
	static volatile uint32_t t92 = 78U;

	t92 = ((x381/x382)+(x383&x384));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x387 = -5;
	volatile uint64_t t93 = 117377801LLU;

	t93 = ((x385/x386)+(x387&x388));

	if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x390 = 898590;
	int64_t x391 = 55931521267686LL;

	t94 = ((x389/x390)+(x391&x392));

	if (t94 != 61073LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MAX;
	int64_t x395 = 228LL;
	uint64_t x396 = 28668530710746351LLU;
	uint64_t t95 = 7839640364559559LLU;

	t95 = ((x393/x394)+(x395&x396));

	if (t95 != 227LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MIN;
	static volatile int16_t x403 = INT16_MIN;
	int64_t t96 = 770240765892LL;

	t96 = ((x401/x402)+(x403&x404));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x410 = 5U;
	static int16_t x411 = INT16_MIN;
	static int8_t x412 = 1;

	t97 = ((x409/x410)+(x411&x412));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MIN;
	int64_t x414 = 1045057LL;
	static int32_t x415 = INT32_MAX;
	static uint16_t x416 = 6U;
	volatile int64_t t98 = -40106171LL;

	t98 = ((x413/x414)+(x415&x416));

	if (t98 != 6LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x417 = UINT32_MAX;
	uint16_t x418 = 316U;
	int8_t x419 = INT8_MAX;
	int16_t x420 = INT16_MIN;
	static uint32_t t99 = 303013U;

	t99 = ((x417/x418)+(x419&x420));

	if (t99 != 13591668U) { NG(); } else { ; }
	
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

