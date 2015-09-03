#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x11 = -12;
volatile int16_t x12 = -1;
static volatile int64_t x28 = INT64_MAX;
int8_t x43 = INT8_MAX;
uint32_t x45 = UINT32_MAX;
int16_t x46 = INT16_MAX;
int32_t x50 = INT32_MIN;
static uint8_t x52 = UINT8_MAX;
static uint16_t x55 = 23045U;
static int64_t x62 = INT64_MAX;
int32_t x64 = -212;
int16_t x78 = INT16_MAX;
static volatile int32_t x80 = -2;
volatile int16_t x81 = 3;
int32_t x86 = -1;
volatile int32_t t18 = 55274;
uint64_t x90 = UINT64_MAX;
static volatile uint64_t x94 = 493571LLU;
volatile uint8_t x96 = 9U;
int8_t x101 = -1;
int64_t x102 = INT64_MIN;
static int64_t x112 = -6040662LL;
static int16_t x115 = INT16_MAX;
int32_t x120 = -1;
int16_t x126 = INT16_MAX;
uint32_t x141 = 245457U;
volatile uint32_t x144 = 2852U;
int32_t x147 = INT32_MAX;
uint64_t x149 = UINT64_MAX;
int16_t x170 = -1;
uint16_t x171 = 1U;
int16_t x179 = -1;
int32_t x189 = 248958;
uint8_t x195 = 50U;
volatile uint8_t x196 = 2U;
int64_t x204 = INT64_MAX;
uint32_t t47 = 962U;
int16_t x215 = INT16_MAX;
uint8_t x217 = 0U;
int16_t x220 = INT16_MAX;
uint16_t x224 = 320U;
volatile int32_t t51 = 505083;
uint16_t x229 = 1U;
static int32_t x232 = -3663;
static int32_t x233 = INT32_MIN;
int64_t x238 = INT64_MIN;
int16_t x248 = INT16_MAX;
uint16_t x250 = 1U;
static int16_t x257 = INT16_MIN;
volatile int8_t x262 = INT8_MIN;
int32_t x264 = -1;
uint16_t x269 = UINT16_MAX;
volatile int16_t x271 = -1;
static volatile int8_t x273 = INT8_MAX;
int16_t x280 = -1;
int32_t x282 = 5296;
volatile int32_t t65 = 84893;
int16_t x285 = -16246;
uint32_t x300 = 15520U;
static int64_t x301 = -1LL;
static int8_t x303 = -1;
uint64_t x313 = UINT64_MAX;
volatile uint64_t t76 = 68922532884264305LLU;
volatile uint64_t t77 = 481468089345LLU;
volatile int64_t x344 = -1LL;
int32_t x354 = -2179;
int8_t x360 = 0;
volatile uint16_t x361 = UINT16_MAX;
int64_t x369 = INT64_MIN;
int64_t t85 = 129504534847727408LL;
static volatile int32_t x380 = INT32_MAX;
int8_t x384 = -1;
int16_t x388 = INT16_MIN;
volatile uint32_t t90 = 1734755U;
volatile uint16_t x394 = UINT16_MAX;
uint8_t x403 = 0U;
int32_t x406 = INT32_MIN;
static uint8_t x409 = 25U;
int32_t x410 = 15;
int64_t x411 = INT64_MIN;
volatile int64_t x413 = 217LL;
int8_t x419 = INT8_MIN;
uint64_t x422 = 225LLU;
uint64_t t98 = 1635451750008622LLU;
static volatile uint64_t x426 = 22834765311LLU;
int16_t x427 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 3652U;
	int8_t x2 = -1;
	int8_t x3 = 4;
	uint64_t x4 = 1700868LLU;
	uint64_t t0 = 61474750838651LLU;

	t0 = ((x1-x2)|(x3&x4));

	if (t0 != 3653LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 980837795280331992LL;
	uint16_t x6 = 5184U;
	int64_t x7 = INT64_MIN;
	static uint8_t x8 = UINT8_MAX;
	static int64_t t1 = -459940LL;

	t1 = ((x5-x6)|(x7&x8));

	if (t1 != 980837795280326808LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	volatile int8_t x10 = -1;
	int32_t t2 = 187;

	t2 = ((x9-x10)|(x11&x12));

	if (t2 != -12) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = UINT32_MAX;
	static uint16_t x22 = 1430U;
	int8_t x23 = INT8_MIN;
	uint8_t x24 = 2U;
	volatile uint32_t t3 = 899U;

	t3 = ((x21-x22)|(x23&x24));

	if (t3 != 4294965865U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 965U;
	volatile uint8_t x26 = 22U;
	volatile int8_t x27 = INT8_MAX;
	volatile int64_t t4 = 184291838597301LL;

	t4 = ((x25-x26)|(x27&x28));

	if (t4 != 1023LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x33 = 0;
	int16_t x34 = INT16_MIN;
	static int8_t x35 = -1;
	int8_t x36 = 12;
	volatile int32_t t5 = 20;

	t5 = ((x33-x34)|(x35&x36));

	if (t5 != 32780) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x37 = -1;
	int16_t x38 = -1;
	int16_t x39 = -1;
	static int64_t x40 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = ((x37-x38)|(x39&x40));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = INT64_MIN;
	int64_t x44 = 133506091LL;
	volatile int64_t t7 = 175303654524LL;

	t7 = ((x41-x42)|(x43&x44));

	if (t7 != 9223372034707292203LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x47 = INT16_MIN;
	static int64_t x48 = INT64_MIN;
	int64_t t8 = -3LL;

	t8 = ((x45-x46)|(x47&x48));

	if (t8 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 120328U;
	int16_t x51 = -1;
	static volatile uint32_t t9 = 20U;

	t9 = ((x49-x50)|(x51&x52));

	if (t9 != 2147604223U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x53 = UINT16_MAX;
	uint32_t x54 = 183521U;
	int64_t x56 = 1796260LL;
	static int64_t t10 = -624727230LL;

	t10 = ((x53-x54)|(x55&x56));

	if (t10 != 4294867742LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = 9624510395072333LL;
	int64_t x58 = 14721418LL;
	int64_t x59 = -1LL;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t11 = -12714729355LL;

	t11 = ((x57-x58)|(x59&x60));

	if (t11 != -9213747526474424893LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	uint16_t x63 = UINT16_MAX;
	static volatile int64_t t12 = -34498946386937LL;

	t12 = ((x61-x62)|(x63&x64));

	if (t12 != -9223372034707226836LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	uint32_t t13 = 27U;

	t13 = ((x65-x66)|(x67&x68));

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -576;
	static uint32_t x70 = 259U;
	static volatile uint16_t x71 = UINT16_MAX;
	int32_t x72 = -1;
	uint32_t t14 = UINT32_MAX;

	t14 = ((x69-x70)|(x71&x72));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x73 = INT32_MAX;
	volatile uint8_t x74 = 13U;
	int64_t x75 = INT64_MAX;
	static volatile uint16_t x76 = 43U;
	volatile int64_t t15 = 143266174505140LL;

	t15 = ((x73-x74)|(x75&x76));

	if (t15 != 2147483643LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = INT16_MIN;
	int8_t x79 = -21;
	int32_t t16 = 6;

	t16 = ((x77-x78)|(x79&x80));

	if (t16 != -21) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x82 = 0;
	static volatile uint16_t x83 = UINT16_MAX;
	int32_t x84 = -579647172;
	volatile int32_t t17 = 115;

	t17 = ((x81-x82)|(x83&x84));

	if (t17 != 18751) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1;
	int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MIN;

	t18 = ((x85-x86)|(x87&x88));

	if (t18 != 2147483520) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 0;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MAX;
	volatile uint64_t t19 = 51099801LLU;

	t19 = ((x89-x90)|(x91&x92));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 29519U;
	int16_t x95 = -575;
	uint64_t t20 = 3256355842329LLU;

	t20 = ((x93-x94)|(x95&x96));

	if (t20 != 18446744073709087565LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = 97459;
	int16_t x98 = 102;
	int16_t x99 = -1;
	uint8_t x100 = UINT8_MAX;
	int32_t t21 = -3209;

	t21 = ((x97-x98)|(x99&x100));

	if (t21 != 97535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x103 = -1;
	int16_t x104 = INT16_MIN;
	int64_t t22 = -23025997271658LL;

	t22 = ((x101-x102)|(x103&x104));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 225203114381444758LLU;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	uint64_t t23 = 383224307868629402LLU;

	t23 = ((x105-x106)|(x107&x108));

	if (t23 != 18446744071881131798LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x109 = -3242223344154LL;
	static int64_t x110 = 76948LL;
	uint8_t x111 = UINT8_MAX;
	int64_t t24 = -317LL;

	t24 = ((x109-x110)|(x111&x112));

	if (t24 != -3242223420934LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -3797;
	int64_t x114 = 1LL;
	uint64_t x116 = 6734550LLU;
	uint64_t t25 = 18589619272229LLU;

	t25 = ((x113-x114)|(x115&x116));

	if (t25 != 18446744073709548542LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = INT32_MIN;
	volatile int32_t x118 = -1;
	uint16_t x119 = 205U;
	volatile int32_t t26 = 3;

	t26 = ((x117-x118)|(x119&x120));

	if (t26 != -2147483443) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	int64_t x122 = -1554003631359LL;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = 16;
	volatile int64_t t27 = -108LL;

	t27 = ((x121-x122)|(x123&x124));

	if (t27 != 1554003631358LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = 874811047544722LL;
	volatile uint32_t x127 = 41925U;
	uint16_t x128 = UINT16_MAX;
	int64_t t28 = -90606LL;

	t28 = ((x125-x126)|(x127&x128));

	if (t28 != 874811047520215LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MAX;
	uint64_t x130 = UINT64_MAX;
	uint8_t x131 = UINT8_MAX;
	static volatile int16_t x132 = 4;
	uint64_t t29 = 0LLU;

	t29 = ((x129-x130)|(x131&x132));

	if (t29 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	uint32_t x138 = 15340U;
	static int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t30 = 243808LL;

	t30 = ((x137-x138)|(x139&x140));

	if (t30 != -9223372032559856620LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	static uint32_t t31 = 11U;

	t31 = ((x141-x142)|(x143&x144));

	if (t31 != 278517U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = -1;
	int16_t x146 = INT16_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = ((x145-x146)|(x147&x148));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x150 = -14365747;
	volatile uint64_t x151 = 1426812400117586804LLU;
	uint8_t x152 = UINT8_MAX;
	volatile uint64_t t33 = 7LLU;

	t33 = ((x149-x150)|(x151&x152));

	if (t33 != 14365814LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = INT16_MIN;
	static uint32_t x154 = 13U;
	int32_t x155 = -9020513;
	uint16_t x156 = 74U;
	uint32_t t34 = 8U;

	t34 = ((x153-x154)|(x155&x156));

	if (t34 != 4294934523U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = UINT32_MAX;
	int8_t x160 = 1;
	volatile uint64_t t35 = 819217428977277151LLU;

	t35 = ((x157-x158)|(x159&x160));

	if (t35 != 127LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = 2;
	int32_t x162 = INT32_MAX;
	int8_t x163 = 43;
	int16_t x164 = INT16_MIN;
	volatile int32_t t36 = -96;

	t36 = ((x161-x162)|(x163&x164));

	if (t36 != -2147483645) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = 1752343LL;
	int16_t x166 = -1726;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MIN;
	volatile int64_t t37 = 123LL;

	t37 = ((x165-x166)|(x167&x168));

	if (t37 != -9223372036853021739LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MAX;
	uint8_t x172 = 1U;
	int32_t t38 = 279;

	t38 = ((x169-x170)|(x171&x172));

	if (t38 != 32769) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = INT32_MAX;
	int64_t x174 = -1LL;
	int64_t x175 = 438172795871571717LL;
	static int8_t x176 = INT8_MAX;
	int64_t t39 = 31933260LL;

	t39 = ((x173-x174)|(x175&x176));

	if (t39 != 2147483653LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = 328929U;
	static int32_t x178 = -1;
	uint32_t x180 = UINT32_MAX;
	uint32_t t40 = UINT32_MAX;

	t40 = ((x177-x178)|(x179&x180));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x181 = -1;
	static uint16_t x182 = UINT16_MAX;
	uint64_t x183 = 409982060LLU;
	uint32_t x184 = 1933060U;
	static volatile uint64_t t41 = 3142961543241350630LLU;

	t41 = ((x181-x182)|(x183&x184));

	if (t41 != 18446744073709507588LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -95;
	int8_t x186 = 3;
	uint8_t x187 = 7U;
	int16_t x188 = 3317;
	int32_t t42 = -29;

	t42 = ((x185-x186)|(x187&x188));

	if (t42 != -97) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x190 = 3U;
	static int32_t x191 = INT32_MIN;
	static int8_t x192 = 1;
	uint32_t t43 = 8443U;

	t43 = ((x189-x190)|(x191&x192));

	if (t43 != 248955U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = 4;
	int16_t x194 = INT16_MAX;
	int32_t t44 = 5136544;

	t44 = ((x193-x194)|(x195&x196));

	if (t44 != -32761) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x197 = 16333178728896817LLU;
	uint64_t x198 = 542704791299888307LLU;
	uint8_t x199 = 27U;
	uint64_t x200 = 8108738755614492433LLU;
	volatile uint64_t t45 = 17LLU;

	t45 = ((x197-x198)|(x199&x200));

	if (t45 != 17920372461138560127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x201 = -13789;
	uint16_t x202 = UINT16_MAX;
	uint8_t x203 = 1U;
	int64_t t46 = -813502810182LL;

	t46 = ((x201-x202)|(x203&x204));

	if (t46 != -79323LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = -1;
	static uint32_t x206 = 21U;
	static int8_t x207 = INT8_MIN;
	static uint8_t x208 = 0U;

	t47 = ((x205-x206)|(x207&x208));

	if (t47 != 4294967274U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -141265;
	int64_t x210 = -1LL;
	static int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t48 = 5777886908310255LL;

	t48 = ((x209-x210)|(x211&x212));

	if (t48 != -141264LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MAX;
	volatile int32_t x216 = -1;
	volatile int32_t t49 = 256798772;

	t49 = ((x213-x214)|(x215&x216));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x218 = 7495U;
	uint16_t x219 = UINT16_MAX;
	static uint32_t t50 = UINT32_MAX;

	t50 = ((x217-x218)|(x219&x220));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x221 = -6;
	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;

	t51 = ((x221-x222)|(x223&x224));

	if (t51 != 2147483642) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = 874989;
	int64_t x226 = -28LL;
	int8_t x227 = INT8_MAX;
	static volatile int32_t x228 = -7;
	volatile int64_t t52 = -350LL;

	t52 = ((x225-x226)|(x227&x228));

	if (t52 != 875129LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x230 = 15U;
	volatile int16_t x231 = -1;
	volatile int32_t t53 = -7040;

	t53 = ((x229-x230)|(x231&x232));

	if (t53 != -13) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = INT64_MIN;
	uint64_t t54 = 1029927816313LLU;

	t54 = ((x233-x234)|(x235&x236));

	if (t54 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MIN;
	volatile uint32_t x239 = UINT32_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = ((x237-x238)|(x239&x240));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 1U;
	int32_t x242 = INT32_MIN;
	int32_t x243 = -1;
	volatile int64_t x244 = -1LL;
	int64_t t56 = -106238182599LL;

	t56 = ((x241-x242)|(x243&x244));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x245 = UINT16_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	int32_t x247 = -1;
	volatile int32_t t57 = -397567024;

	t57 = ((x245-x246)|(x247&x248));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x249 = UINT16_MAX;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t58 = 0;

	t58 = ((x249-x250)|(x251&x252));

	if (t58 != -2147418114) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x258 = 33416945LLU;
	volatile uint32_t x259 = UINT32_MAX;
	int64_t x260 = -167397952895860LL;
	volatile uint64_t t59 = 14LLU;

	t59 = ((x257-x258)|(x259&x260));

	if (t59 != 18446744073684114831LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x261 = 1U;
	static int8_t x263 = 3;
	uint32_t t60 = 0U;

	t60 = ((x261-x262)|(x263&x264));

	if (t60 != 131U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x265 = 8;
	uint8_t x266 = 0U;
	uint16_t x267 = UINT16_MAX;
	uint64_t x268 = 492656609517LLU;
	uint64_t t61 = 73074358184911851LLU;

	t61 = ((x265-x266)|(x267&x268));

	if (t61 != 18669LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x270 = INT8_MIN;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t62 = -22;

	t62 = ((x269-x270)|(x271&x272));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x274 = -673646;
	int16_t x275 = INT16_MIN;
	int64_t x276 = -51LL;
	int64_t t63 = 2328726LL;

	t63 = ((x273-x274)|(x275&x276));

	if (t63 != -14355LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x277 = 5U;
	static int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MAX;
	volatile int32_t t64 = 1;

	t64 = ((x277-x278)|(x279&x280));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -3;
	volatile int16_t x283 = -1;
	uint16_t x284 = 25U;

	t65 = ((x281-x282)|(x283&x284));

	if (t65 != -5283) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x286 = UINT32_MAX;
	uint64_t x287 = 41923802LLU;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t66 = 140396518639080LLU;

	t66 = ((x285-x286)|(x287&x288));

	if (t66 != 4294951051LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = UINT16_MAX;
	int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MAX;
	static volatile int16_t x292 = 2;
	volatile int32_t t67 = -2;

	t67 = ((x289-x290)|(x291&x292));

	if (t67 != 32770) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x293 = 30986U;
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = -1LL;
	uint64_t x296 = 33067758372918581LLU;
	uint64_t t68 = 206291902920103LLU;

	t68 = ((x293-x294)|(x295&x296));

	if (t68 != 33067758372945215LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = 52411;
	static uint64_t x298 = 715116593102228LLU;
	int64_t x299 = INT64_MAX;
	static volatile uint64_t t69 = 1978620420639613LLU;

	t69 = ((x297-x298)|(x299&x300));

	if (t69 != 18446028957116514215LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x302 = 1473U;
	uint32_t x304 = 95U;
	static volatile int64_t t70 = 50361568984478211LL;

	t70 = ((x301-x302)|(x303&x304));

	if (t70 != -1409LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x305 = -30238756931144LL;
	uint16_t x306 = 250U;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = 38;
	int64_t t71 = -41866199516822LL;

	t71 = ((x305-x306)|(x307&x308));

	if (t71 != -30238756931394LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MAX;
	uint32_t x310 = 1276765229U;
	int8_t x311 = INT8_MAX;
	int16_t x312 = -12201;
	volatile uint32_t t72 = 3615240U;

	t72 = ((x309-x310)|(x311&x312));

	if (t72 != 870718423U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x314 = -7;
	int64_t x315 = -1LL;
	uint16_t x316 = 61U;
	uint64_t t73 = 65852339LLU;

	t73 = ((x313-x314)|(x315&x316));

	if (t73 != 63LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x321 = -1;
	static int8_t x322 = -10;
	int8_t x323 = INT8_MIN;
	uint64_t x324 = 13135396945LLU;
	volatile uint64_t t74 = 1600LLU;

	t74 = ((x321-x322)|(x323&x324));

	if (t74 != 13135396873LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x325 = UINT16_MAX;
	int16_t x326 = 3;
	int32_t x327 = INT32_MIN;
	static int32_t x328 = 206577;
	static int32_t t75 = -49;

	t75 = ((x325-x326)|(x327&x328));

	if (t75 != 65532) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x329 = 13401U;
	uint32_t x330 = 70702U;
	static int16_t x331 = INT16_MAX;
	uint64_t x332 = UINT64_MAX;

	t76 = ((x329-x330)|(x331&x332));

	if (t76 != 4294934527LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x333 = 59269996281LLU;
	uint8_t x334 = UINT8_MAX;
	static uint64_t x335 = 5761349LLU;
	uint8_t x336 = 0U;

	t77 = ((x333-x334)|(x335&x336));

	if (t77 != 59269996026LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = 740LLU;
	static int8_t x338 = INT8_MIN;
	static int16_t x339 = INT16_MAX;
	uint8_t x340 = 6U;
	uint64_t t78 = 211719194LLU;

	t78 = ((x337-x338)|(x339&x340));

	if (t78 != 870LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x341 = UINT8_MAX;
	static int64_t x342 = -1LL;
	uint16_t x343 = UINT16_MAX;
	volatile int64_t t79 = -1LL;

	t79 = ((x341-x342)|(x343&x344));

	if (t79 != 65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = 17;
	static volatile int64_t x350 = 257545115949LL;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 13138240LLU;
	uint64_t t80 = 23908684LLU;

	t80 = ((x349-x350)|(x351&x352));

	if (t80 != 18446743816164435684LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MIN;
	static uint32_t x355 = UINT32_MAX;
	uint32_t x356 = 32164947U;
	static volatile uint32_t t81 = 1017265758U;

	t81 = ((x353-x354)|(x355&x356));

	if (t81 != 32164947U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x357 = 0U;
	int64_t x358 = -3874LL;
	static volatile int32_t x359 = INT32_MIN;
	volatile int64_t t82 = -6686530344LL;

	t82 = ((x357-x358)|(x359&x360));

	if (t82 != 3874LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x362 = 4;
	uint64_t x363 = UINT64_MAX;
	static int16_t x364 = INT16_MAX;
	volatile uint64_t t83 = 29600434326868519LLU;

	t83 = ((x361-x362)|(x363&x364));

	if (t83 != 65535LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x365 = 2U;
	static int16_t x366 = INT16_MAX;
	int16_t x367 = -1;
	volatile int64_t x368 = INT64_MIN;
	int64_t t84 = -94120688458LL;

	t84 = ((x365-x366)|(x367&x368));

	if (t84 != -32765LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -5LL;

	t85 = ((x369-x370)|(x371&x372));

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = -1;
	uint16_t x374 = 103U;
	int64_t x375 = INT64_MAX;
	uint32_t x376 = 27614998U;
	int64_t t86 = -1125264925947601LL;

	t86 = ((x373-x374)|(x375&x376));

	if (t86 != -98LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x377 = 508;
	static int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	int64_t t87 = 20126350845484LL;

	t87 = ((x377-x378)|(x379&x380));

	if (t87 != 33276LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x381 = 8319556168LLU;
	volatile int64_t x382 = INT64_MAX;
	int8_t x383 = -2;
	uint64_t t88 = UINT64_MAX;

	t88 = ((x381-x382)|(x383&x384));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x385 = INT8_MIN;
	static int64_t x386 = 454708403LL;
	uint16_t x387 = UINT16_MAX;
	volatile int64_t t89 = -1487178921864LL;

	t89 = ((x385-x386)|(x387&x388));

	if (t89 != -454708531LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int16_t x390 = 526;
	static int32_t x391 = INT32_MIN;
	static uint32_t x392 = 8U;

	t90 = ((x389-x390)|(x391&x392));

	if (t90 != 4294966769U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x395 = INT64_MAX;
	int16_t x396 = 0;
	volatile uint64_t t91 = 12956667325612LLU;

	t91 = ((x393-x394)|(x395&x396));

	if (t91 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x397 = INT32_MAX;
	uint64_t x398 = 283428LLU;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 426285906020727123LL;
	static volatile uint64_t t92 = 136926252656591201LLU;

	t92 = ((x397-x398)|(x399&x400));

	if (t92 != 426285906538769627LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = -5076599695LL;
	uint64_t x402 = UINT64_MAX;
	static int8_t x404 = INT8_MIN;
	uint64_t t93 = 229908665382248LLU;

	t93 = ((x401-x402)|(x403&x404));

	if (t93 != 18446744068632951922LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = -1;
	int8_t x407 = INT8_MIN;
	int32_t x408 = INT32_MIN;
	int32_t t94 = -2430906;

	t94 = ((x405-x406)|(x407&x408));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x412 = INT8_MAX;
	volatile int64_t t95 = 10930632996LL;

	t95 = ((x409-x410)|(x411&x412));

	if (t95 != 10LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x414 = 3U;
	int16_t x415 = INT16_MIN;
	static uint8_t x416 = 125U;
	volatile int64_t t96 = -58LL;

	t96 = ((x413-x414)|(x415&x416));

	if (t96 != 214LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x417 = -250825478698LL;
	int8_t x418 = -7;
	uint32_t x420 = 21U;
	volatile int64_t t97 = -6195LL;

	t97 = ((x417-x418)|(x419&x420));

	if (t97 != -250825478691LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x421 = 3531393LLU;
	int16_t x423 = INT16_MAX;
	volatile uint8_t x424 = UINT8_MAX;

	t98 = ((x421-x422)|(x423&x424));

	if (t98 != 3531263LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 156U;
	volatile uint64_t x428 = 432036652LLU;
	static volatile uint64_t t99 = 562134LLU;

	t99 = ((x425-x426)|(x427&x428));

	if (t99 != 18446744051159999133LLU) { NG(); } else { ; }
	
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

