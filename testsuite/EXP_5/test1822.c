#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 3941340U;
volatile int64_t t1 = 3LL;
uint8_t x21 = UINT8_MAX;
volatile int64_t x23 = INT64_MAX;
int16_t x41 = -1;
static volatile int64_t t8 = 722054650344LL;
uint64_t x48 = 31862266832709LLU;
volatile int16_t x51 = -1;
volatile int32_t t12 = INT32_MIN;
int16_t x65 = INT16_MIN;
uint16_t x68 = 685U;
int64_t x72 = INT64_MIN;
uint8_t x74 = 73U;
uint32_t t15 = UINT32_MAX;
static uint64_t x78 = 0LLU;
int16_t x80 = 38;
uint64_t t16 = 3091LLU;
volatile int16_t x94 = INT16_MAX;
static int64_t x95 = INT64_MIN;
volatile int8_t x98 = INT8_MIN;
volatile uint64_t t21 = 2073687LLU;
static uint64_t x101 = 4521659LLU;
uint64_t x105 = 11331LLU;
static int32_t x109 = INT32_MIN;
int16_t x119 = INT16_MAX;
uint32_t x126 = 32461260U;
int8_t x127 = 1;
int32_t x131 = INT32_MIN;
volatile int8_t x140 = 0;
static int8_t x142 = INT8_MIN;
volatile int8_t x145 = 26;
static int32_t x165 = 1;
int8_t x166 = INT8_MIN;
int64_t x167 = -128869273LL;
uint32_t x169 = UINT32_MAX;
volatile int64_t t38 = 35503319654494117LL;
static int32_t x178 = 83;
int8_t x181 = INT8_MIN;
int16_t x183 = -108;
volatile uint16_t x184 = 1U;
static volatile int32_t t41 = -18;
int16_t x191 = INT16_MAX;
int16_t x192 = INT16_MIN;
volatile int64_t x195 = INT64_MIN;
int64_t x203 = INT64_MAX;
int64_t x205 = INT64_MAX;
static uint16_t x206 = 7909U;
static int64_t t47 = INT64_MAX;
volatile int8_t x209 = -3;
int16_t x211 = -2052;
int8_t x215 = INT8_MAX;
uint64_t t49 = UINT64_MAX;
static volatile uint64_t x220 = 991245412835949LLU;
volatile int32_t x225 = INT32_MAX;
static int32_t x227 = INT32_MIN;
int64_t x228 = -1LL;
int8_t x229 = 1;
volatile int16_t x231 = -478;
static volatile int64_t x235 = -729LL;
int32_t x243 = 19788;
int16_t x247 = 293;
int16_t x251 = -494;
int8_t x256 = -1;
uint16_t x257 = UINT16_MAX;
int64_t x258 = INT64_MAX;
int32_t t61 = INT32_MAX;
volatile int8_t x271 = 1;
static uint32_t x274 = UINT32_MAX;
uint8_t x278 = UINT8_MAX;
int32_t x284 = INT32_MIN;
volatile int64_t t66 = 6960719817895LL;
int8_t x289 = INT8_MIN;
static int16_t x294 = INT16_MAX;
volatile int64_t t70 = -2LL;
int16_t x310 = INT16_MIN;
volatile int32_t t72 = -337683943;
uint32_t x313 = 134139305U;
static volatile uint32_t x314 = 1982751285U;
int32_t x315 = -854457267;
static uint16_t x319 = 11U;
static int64_t x322 = -6572510LL;
int64_t x324 = INT64_MIN;
volatile int16_t x338 = INT16_MIN;
volatile int32_t x340 = -22668;
static volatile uint64_t x343 = UINT64_MAX;
int32_t x352 = 10511;
int32_t x353 = INT32_MIN;
volatile uint32_t x360 = UINT32_MAX;
volatile uint8_t x361 = UINT8_MAX;
static uint32_t x365 = UINT32_MAX;
int8_t x366 = INT8_MIN;
int8_t x370 = INT8_MIN;
int32_t t87 = 14;
int16_t x381 = INT16_MAX;
uint16_t x382 = 0U;
uint16_t x390 = 135U;
volatile int64_t x393 = INT64_MIN;
int8_t x399 = 1;
int32_t x401 = -1;
static volatile int16_t x402 = INT16_MIN;
static int16_t x409 = 49;
int32_t t96 = -3;
static uint8_t x414 = UINT8_MAX;
int32_t x421 = 498414;
static int8_t x424 = 1;


void f0(void) {
	static volatile uint64_t x1 = 8117583654428625822LLU;
	static int8_t x2 = -1;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 144897544242040LLU;

	t0 = (x1-((x2&x3)&x4));

	if (t0 != 8117583654428625602LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	uint8_t x6 = 43U;
	int64_t x7 = 768167LL;
	int64_t x8 = INT64_MAX;

	t1 = (x5-((x6&x7)&x8));

	if (t1 != -36LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	uint32_t x10 = 15807U;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = UINT16_MAX;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x9-((x10&x11)&x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int8_t x14 = 52;
	uint8_t x15 = 0U;
	volatile int16_t x16 = -63;
	volatile int32_t t3 = 41334578;

	t3 = (x13-((x14&x15)&x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x22 = -58;
	static int8_t x24 = 5;
	volatile int64_t t4 = -36995186841736LL;

	t4 = (x21-((x22&x23)&x24));

	if (t4 != 251LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 59;
	static volatile int64_t x26 = INT64_MAX;
	int32_t x27 = 313254930;
	int8_t x28 = -63;
	int64_t t5 = 4052821805383846007LL;

	t5 = (x25-((x26&x27)&x28));

	if (t5 != -313254853LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -2560;
	uint64_t x30 = 13782556LLU;
	static uint8_t x31 = UINT8_MAX;
	volatile uint8_t x32 = 1U;
	uint64_t t6 = 507784254LLU;

	t6 = (x29-((x30&x31)&x32));

	if (t6 != 18446744073709549056LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 1187U;
	uint32_t x38 = 1637U;
	volatile int64_t x39 = -1LL;
	volatile uint8_t x40 = UINT8_MAX;
	int64_t t7 = 5607571LL;

	t7 = (x37-((x38&x39)&x40));

	if (t7 != 1086LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x42 = INT64_MIN;
	int8_t x43 = -1;
	uint8_t x44 = 67U;

	t8 = (x41-((x42&x43)&x44));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = 116053;
	static volatile int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MIN;
	uint64_t t9 = 426315013LLU;

	t9 = (x45-((x46&x47)&x48));

	if (t9 != 116053LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = INT16_MIN;
	static int64_t x50 = -1LL;
	int64_t x52 = -1LL;
	volatile int64_t t10 = -48837760198479666LL;

	t10 = (x49-((x50&x51)&x52));

	if (t10 != -32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -600715264191922LL;
	volatile int32_t x54 = -1;
	int8_t x55 = INT8_MIN;
	int16_t x56 = 1;
	volatile int64_t t11 = -3471276011132LL;

	t11 = (x53-((x54&x55)&x56));

	if (t11 != -600715264191922LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	int16_t x59 = INT16_MIN;
	volatile int8_t x60 = 6;

	t12 = (x57-((x58&x59)&x60));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 3U;
	int32_t t13 = -40361;

	t13 = (x65-((x66&x67)&x68));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MAX;
	static int64_t x70 = INT64_MAX;
	int64_t x71 = INT64_MIN;
	volatile int64_t t14 = -18161261381454LL;

	t14 = (x69-((x70&x71)&x72));

	if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	static uint32_t x75 = 45802309U;
	int16_t x76 = INT16_MIN;

	t15 = (x73-((x74&x75)&x76));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 13U;
	static int16_t x79 = INT16_MAX;

	t16 = (x77-((x78&x79)&x80));

	if (t16 != 13LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	static volatile uint32_t x82 = UINT32_MAX;
	int64_t x83 = 1553732927LL;
	int32_t x84 = -1;
	int64_t t17 = 34002026264512587LL;

	t17 = (x81-((x82&x83)&x84));

	if (t17 != -1553732928LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MAX;
	int16_t x86 = 24;
	int16_t x87 = -86;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t18 = INT32_MAX;

	t18 = (x85-((x86&x87)&x88));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = 0;
	volatile int16_t x91 = -13;
	int32_t x92 = 0;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (x89-((x90&x91)&x92));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x93 = INT8_MAX;
	int32_t x96 = 1;
	static int64_t t20 = 1877458666727192LL;

	t20 = (x93-((x94&x95)&x96));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 3088U;
	static uint64_t x99 = 90280359010122LLU;
	uint16_t x100 = 28U;

	t21 = (x97-((x98&x99)&x100));

	if (t21 != 3088LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x102 = -1;
	uint8_t x103 = 0U;
	volatile int64_t x104 = 1511LL;
	volatile uint64_t t22 = 907906LLU;

	t22 = (x101-((x102&x103)&x104));

	if (t22 != 4521659LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x106 = INT8_MIN;
	volatile int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MAX;
	static uint64_t t23 = 578900LLU;

	t23 = (x105-((x106&x107)&x108));

	if (t23 != 11331LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x110 = UINT64_MAX;
	volatile int8_t x111 = INT8_MAX;
	volatile int16_t x112 = 4;
	static uint64_t t24 = 9146LLU;

	t24 = (x109-((x110&x111)&x112));

	if (t24 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = -1;
	int64_t x114 = 27972675736620128LL;
	static int32_t x115 = INT32_MAX;
	volatile int8_t x116 = INT8_MIN;
	int64_t t25 = 1783894LL;

	t25 = (x113-((x114&x115)&x116));

	if (t25 != -414370817LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = 5065617LL;
	int64_t x118 = INT64_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile int64_t t26 = -6618002756808589LL;

	t26 = (x117-((x118&x119)&x120));

	if (t26 != 5065617LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	uint8_t x122 = 117U;
	int64_t x123 = -1LL;
	int32_t x124 = INT32_MIN;
	volatile int64_t t27 = 1133639LL;

	t27 = (x121-((x122&x123)&x124));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x125 = 42321402LL;
	uint16_t x128 = 905U;
	int64_t t28 = -893802555949098835LL;

	t28 = (x125-((x126&x127)&x128));

	if (t28 != 42321402LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 27929U;
	volatile uint8_t x130 = UINT8_MAX;
	volatile int32_t x132 = -6666278;
	volatile uint32_t t29 = 2044U;

	t29 = (x129-((x130&x131)&x132));

	if (t29 != 27929U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 3U;
	int64_t x138 = 156545392248609080LL;
	static volatile int16_t x139 = INT16_MAX;
	int64_t t30 = 1LL;

	t30 = (x137-((x138&x139)&x140));

	if (t30 != 3LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x141 = 180633LLU;
	uint8_t x143 = 11U;
	static volatile uint64_t x144 = 2LLU;
	static volatile uint64_t t31 = 10919740451951LLU;

	t31 = (x141-((x142&x143)&x144));

	if (t31 != 180633LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x146 = 1;
	int16_t x147 = -1;
	int64_t x148 = -1LL;
	volatile int64_t t32 = -22398757210094555LL;

	t32 = (x145-((x146&x147)&x148));

	if (t32 != 25LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 853030939;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = UINT8_MAX;
	uint8_t x152 = 0U;
	volatile int32_t t33 = -93;

	t33 = (x149-((x150&x151)&x152));

	if (t33 != 853030939) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = INT16_MIN;
	int16_t x154 = -1;
	uint64_t x155 = 867339321LLU;
	int64_t x156 = INT64_MAX;
	uint64_t t34 = 20LLU;

	t34 = (x153-((x154&x155)&x156));

	if (t34 != 18446744072842179527LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x157 = INT8_MIN;
	int32_t x158 = 0;
	volatile int32_t x159 = INT32_MIN;
	uint8_t x160 = 110U;
	volatile int32_t t35 = -3851972;

	t35 = (x157-((x158&x159)&x160));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x161 = UINT32_MAX;
	static volatile uint64_t x162 = 77899LLU;
	int32_t x163 = -3;
	uint16_t x164 = 3U;
	volatile uint64_t t36 = 7908283004974457LLU;

	t36 = (x161-((x162&x163)&x164));

	if (t36 != 4294967294LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x168 = UINT32_MAX;
	static volatile int64_t t37 = 447LL;

	t37 = (x165-((x166&x167)&x168));

	if (t37 != -4166097919LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x170 = INT64_MAX;
	int64_t x171 = -1LL;
	volatile uint8_t x172 = 8U;

	t38 = (x169-((x170&x171)&x172));

	if (t38 != 4294967287LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MIN;
	int32_t x176 = INT32_MAX;
	volatile int64_t t39 = 228LL;

	t39 = (x173-((x174&x175)&x176));

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x177 = -1LL;
	static int32_t x179 = -48;
	uint16_t x180 = 13188U;
	int64_t t40 = -5939LL;

	t40 = (x177-((x178&x179)&x180));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x182 = 3;

	t41 = (x181-((x182&x183)&x184));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x185 = 3208U;
	int64_t x186 = -59358799926LL;
	uint8_t x187 = UINT8_MAX;
	static volatile uint32_t x188 = 1970149949U;
	int64_t t42 = -176LL;

	t42 = (x185-((x186&x187)&x188));

	if (t42 != 3200LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = INT32_MAX;
	uint8_t x190 = UINT8_MAX;
	volatile int32_t t43 = INT32_MAX;

	t43 = (x189-((x190&x191)&x192));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x193 = UINT32_MAX;
	int64_t x194 = -1LL;
	static uint8_t x196 = 45U;
	static int64_t t44 = 113788675LL;

	t44 = (x193-((x194&x195)&x196));

	if (t44 != 4294967295LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x197 = 10U;
	volatile uint8_t x198 = UINT8_MAX;
	int32_t x199 = -2170;
	int32_t x200 = -1;
	volatile int32_t t45 = 968182222;

	t45 = (x197-((x198&x199)&x200));

	if (t45 != -124) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MIN;
	uint8_t x204 = UINT8_MAX;
	static volatile int64_t t46 = -10414690807715389LL;

	t46 = (x201-((x202&x203)&x204));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MIN;

	t47 = (x205-((x206&x207)&x208));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x210 = -1;
	int64_t x212 = INT64_MIN;
	int64_t t48 = 13986598594726814LL;

	t48 = (x209-((x210&x211)&x212));

	if (t48 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x214 = INT64_MIN;
	static int16_t x216 = -47;

	t49 = (x213-((x214&x215)&x216));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 5U;
	uint32_t x218 = 73U;
	static uint32_t x219 = 1U;
	volatile uint64_t t50 = 55922110295LLU;

	t50 = (x217-((x218&x219)&x220));

	if (t50 != 4LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -3802;
	volatile int32_t x222 = 68439;
	volatile int16_t x223 = -6185;
	static int64_t x224 = 0LL;
	static volatile int64_t t51 = 7198LL;

	t51 = (x221-((x222&x223)&x224));

	if (t51 != -3802LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x226 = -3;
	static volatile int64_t t52 = -27084809745LL;

	t52 = (x225-((x226&x227)&x228));

	if (t52 != 4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x230 = UINT32_MAX;
	int16_t x232 = 20;
	uint32_t t53 = 15U;

	t53 = (x229-((x230&x231)&x232));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = 37U;
	int64_t x234 = -1LL;
	int32_t x236 = INT32_MIN;
	static volatile int64_t t54 = -37LL;

	t54 = (x233-((x234&x235)&x236));

	if (t54 != 2147483685LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = 5;
	uint32_t x242 = 3134U;
	static uint16_t x244 = 10U;
	volatile uint32_t t55 = 61137U;

	t55 = (x241-((x242&x243)&x244));

	if (t55 != 4294967293U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = 3493454405622LLU;
	int32_t x246 = -23;
	volatile int16_t x248 = 0;
	uint64_t t56 = 9853175438524LLU;

	t56 = (x245-((x246&x247)&x248));

	if (t56 != 3493454405622LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = -1;
	uint64_t x252 = 2098825033LLU;
	volatile uint64_t t57 = 0LLU;

	t57 = (x249-((x250&x251)&x252));

	if (t57 != 18446744071610726784LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = -100138;
	uint16_t x254 = 29371U;
	int16_t x255 = INT16_MIN;
	int32_t t58 = -8851;

	t58 = (x253-((x254&x255)&x256));

	if (t58 != -100138) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MAX;
	volatile int64_t t59 = 13908LL;

	t59 = (x257-((x258&x259)&x260));

	if (t59 != 32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = -1;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	static int8_t x264 = -1;
	static uint64_t t60 = 870863403725LLU;

	t60 = (x261-((x262&x263)&x264));

	if (t60 != 2147483647LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x265 = INT32_MAX;
	uint8_t x266 = UINT8_MAX;
	static int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MIN;

	t61 = (x265-((x266&x267)&x268));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x269 = 312650LL;
	volatile uint8_t x270 = UINT8_MAX;
	uint8_t x272 = 7U;
	volatile int64_t t62 = 11LL;

	t62 = (x269-((x270&x271)&x272));

	if (t62 != 312649LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x273 = 14733;
	int32_t x275 = -16290;
	static volatile int32_t x276 = INT32_MAX;
	uint32_t t63 = 115U;

	t63 = (x273-((x274&x275)&x276));

	if (t63 != 2147514671U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MIN;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = -26;
	volatile int32_t t64 = -838;

	t64 = (x277-((x278&x279)&x280));

	if (t64 != -32998) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = 6521666;
	static volatile int64_t x282 = INT64_MAX;
	int64_t x283 = -21283200305829263LL;
	volatile int64_t t65 = 163391570398623696LL;

	t65 = (x281-((x282&x283)&x284));

	if (t65 != -9202088835366550718LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = -1;
	int64_t x286 = -1LL;
	volatile int64_t x287 = INT64_MAX;
	uint16_t x288 = UINT16_MAX;

	t66 = (x285-((x286&x287)&x288));

	if (t66 != -65536LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x290 = -1;
	static volatile int16_t x291 = -1;
	int8_t x292 = -1;
	volatile int32_t t67 = -3689;

	t67 = (x289-((x290&x291)&x292));

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = 12;
	int16_t x295 = 1;
	uint8_t x296 = 0U;
	int32_t t68 = -67;

	t68 = (x293-((x294&x295)&x296));

	if (t68 != 12) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = -1LL;
	volatile int64_t x298 = INT64_MIN;
	uint16_t x299 = 14506U;
	int8_t x300 = -1;
	static volatile int64_t t69 = 26LL;

	t69 = (x297-((x298&x299)&x300));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x301 = INT16_MAX;
	int64_t x302 = -1LL;
	static volatile int16_t x303 = INT16_MIN;
	uint8_t x304 = 41U;

	t70 = (x301-((x302&x303)&x304));

	if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x305 = -1;
	int64_t x306 = -1LL;
	int32_t x307 = INT32_MIN;
	uint16_t x308 = UINT16_MAX;
	volatile int64_t t71 = -66LL;

	t71 = (x305-((x306&x307)&x308));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = -83;
	static volatile int32_t x311 = -1;
	volatile int8_t x312 = INT8_MIN;

	t72 = (x309-((x310&x311)&x312));

	if (t72 != 32685) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x316 = INT32_MIN;
	static uint32_t t73 = 66U;

	t73 = (x313-((x314&x315)&x316));

	if (t73 != 134139305U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x317 = INT64_MIN;
	uint64_t x318 = UINT64_MAX;
	uint32_t x320 = 44243656U;
	uint64_t t74 = 9403505945LLU;

	t74 = (x317-((x318&x319)&x320));

	if (t74 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	volatile int32_t x323 = 626551;
	volatile int64_t t75 = -16269242950736LL;

	t75 = (x321-((x322&x323)&x324));

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = -1LL;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (x325-((x326&x327)&x328));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 1892606379LLU;
	int16_t x330 = 7;
	static int64_t x331 = INT64_MIN;
	uint64_t x332 = UINT64_MAX;
	uint64_t t77 = 90361LLU;

	t77 = (x329-((x330&x331)&x332));

	if (t77 != 1892606379LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = -1;
	volatile int64_t x334 = 370800LL;
	int16_t x335 = INT16_MIN;
	int16_t x336 = 155;
	int64_t t78 = 0LL;

	t78 = (x333-((x334&x335)&x336));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x339 = -1;
	static volatile int32_t t79 = -276144447;

	t79 = (x337-((x338&x339)&x340));

	if (t79 != 33023) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x341 = INT64_MAX;
	static volatile int16_t x342 = -1;
	int16_t x344 = INT16_MIN;
	static uint64_t t80 = 2LLU;

	t80 = (x341-((x342&x343)&x344));

	if (t80 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x345 = INT8_MIN;
	uint64_t x346 = 17682213332939472LLU;
	static int16_t x347 = INT16_MAX;
	int64_t x348 = INT64_MAX;
	uint64_t t81 = 115855897048LLU;

	t81 = (x345-((x346&x347)&x348));

	if (t81 != 18446744073709522096LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = INT8_MIN;
	volatile uint64_t x350 = 2381LLU;
	static volatile int32_t x351 = INT32_MIN;
	uint64_t t82 = 23704LLU;

	t82 = (x349-((x350&x351)&x352));

	if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x354 = INT32_MAX;
	uint16_t x355 = UINT16_MAX;
	static volatile int32_t x356 = INT32_MIN;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x353-((x354&x355)&x356));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = -1;
	volatile uint8_t x358 = 41U;
	int32_t x359 = INT32_MIN;
	static volatile uint32_t t84 = UINT32_MAX;

	t84 = (x357-((x358&x359)&x360));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x362 = 709989U;
	uint8_t x363 = UINT8_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile uint32_t t85 = 6020205U;

	t85 = (x361-((x362&x363)&x364));

	if (t85 != 154U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x367 = INT8_MIN;
	static int8_t x368 = 16;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x365-((x366&x367)&x368));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x369 = 567597196;
	uint16_t x371 = UINT16_MAX;
	static int8_t x372 = INT8_MIN;

	t87 = (x369-((x370&x371)&x372));

	if (t87 != 567531788) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x373 = 884659657872LLU;
	static int32_t x374 = 108677963;
	volatile int8_t x375 = -1;
	volatile uint64_t x376 = UINT64_MAX;
	uint64_t t88 = 1940841364079LLU;

	t88 = (x373-((x374&x375)&x376));

	if (t88 != 884550979909LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t89 = -23625LL;

	t89 = (x381-((x382&x383)&x384));

	if (t89 != 32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = 17632;
	static uint16_t x386 = UINT16_MAX;
	int16_t x387 = -19;
	int8_t x388 = -23;
	static volatile int32_t t90 = 239729;

	t90 = (x385-((x386&x387)&x388));

	if (t90 != -47881) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = -13684447867LL;
	static uint8_t x391 = UINT8_MAX;
	int64_t x392 = -52744444LL;
	volatile int64_t t91 = -242544804LL;

	t91 = (x389-((x390&x391)&x392));

	if (t91 != -13684447871LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x394 = UINT16_MAX;
	static uint64_t x395 = 96282471183LLU;
	volatile int32_t x396 = -1;
	volatile uint64_t t92 = 1934738LLU;

	t92 = (x393-((x394&x395)&x396));

	if (t92 != 9223372036854715633LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = -9;
	volatile uint64_t x398 = UINT64_MAX;
	uint16_t x400 = 32460U;
	uint64_t t93 = 291779198LLU;

	t93 = (x397-((x398&x399)&x400));

	if (t93 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x403 = 9U;
	int8_t x404 = -1;
	int32_t t94 = 15215;

	t94 = (x401-((x402&x403)&x404));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = 53296852439524LL;
	int32_t x406 = -15;
	uint16_t x407 = 57U;
	volatile int32_t x408 = INT32_MIN;
	static volatile int64_t t95 = 41248186LL;

	t95 = (x405-((x406&x407)&x408));

	if (t95 != 53296852439524LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x410 = -50240;
	volatile uint8_t x411 = 1U;
	int8_t x412 = INT8_MIN;

	t96 = (x409-((x410&x411)&x412));

	if (t96 != 49) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = -1LL;
	int32_t x415 = -409116;
	uint32_t x416 = UINT32_MAX;
	volatile int64_t t97 = 1481276LL;

	t97 = (x413-((x414&x415)&x416));

	if (t97 != -229LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = INT32_MAX;
	int8_t x418 = 1;
	int16_t x419 = 13877;
	int16_t x420 = INT16_MIN;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x417-((x418&x419)&x420));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x422 = -493483260LL;
	int64_t x423 = INT64_MIN;
	volatile int64_t t99 = -2952134LL;

	t99 = (x421-((x422&x423)&x424));

	if (t99 != 498414LL) { NG(); } else { ; }
	
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

