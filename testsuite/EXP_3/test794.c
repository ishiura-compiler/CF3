#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x8 = INT8_MAX;
uint8_t x11 = 10U;
int16_t x13 = -4;
int8_t x30 = -16;
static int8_t x35 = INT8_MIN;
static volatile int16_t x40 = -9660;
int8_t x41 = INT8_MAX;
int16_t x43 = -2490;
int64_t t9 = 1LL;
volatile int16_t x48 = INT16_MIN;
volatile uint64_t x52 = UINT64_MAX;
uint64_t t12 = 11323687LLU;
volatile uint32_t x60 = 240061U;
static uint32_t t15 = 6518769U;
int8_t x72 = INT8_MIN;
volatile int32_t t16 = -503750;
volatile int32_t t18 = -273318;
static int16_t x81 = INT16_MIN;
int16_t x89 = -1;
static uint32_t x96 = UINT32_MAX;
volatile uint64_t t22 = 50LLU;
volatile uint64_t t24 = 6551149758LLU;
static int8_t x105 = INT8_MIN;
int8_t x112 = INT8_MIN;
uint32_t t27 = 1U;
uint32_t x121 = 829202U;
int64_t x125 = 0LL;
volatile uint8_t x129 = 2U;
int16_t x132 = INT16_MIN;
uint64_t x138 = 6048498702879LLU;
int16_t x140 = INT16_MIN;
uint16_t x143 = UINT16_MAX;
static int32_t x150 = -1756;
uint8_t x154 = 17U;
int64_t x160 = -1LL;
uint64_t x167 = 2113251706672LLU;
int32_t x178 = -1;
volatile int64_t t43 = -16046720507LL;
int32_t x184 = INT32_MIN;
int64_t x190 = 98565539LL;
volatile int64_t t45 = -29361LL;
uint16_t x208 = 1U;
int32_t t48 = -32594;
int16_t x215 = -1;
static int64_t x216 = -1LL;
int32_t t52 = -1;
int16_t x232 = INT16_MAX;
volatile int64_t x248 = INT64_MIN;
int16_t x254 = -1;
int32_t t58 = -327;
static uint8_t x258 = 32U;
volatile int16_t x261 = 462;
int16_t x264 = INT16_MIN;
volatile int32_t t60 = -2;
static uint16_t x270 = 0U;
int16_t x271 = INT16_MIN;
volatile int32_t t62 = -18;
uint8_t x273 = UINT8_MAX;
int32_t x274 = INT32_MIN;
int32_t t65 = 26456922;
static int64_t x286 = INT64_MAX;
uint32_t x287 = 10046613U;
volatile uint32_t t66 = 9U;
static int16_t x289 = INT16_MAX;
int8_t x291 = -1;
volatile uint64_t t69 = 4458882641046083LLU;
static volatile int64_t t71 = -451LL;
uint8_t x309 = 5U;
int64_t x312 = -1LL;
volatile int64_t t72 = -65352449789050LL;
int16_t x323 = -1;
int8_t x324 = INT8_MIN;
volatile int32_t t75 = -954;
volatile int8_t x338 = 1;
int64_t x342 = 50324055177LL;
int32_t x344 = INT32_MIN;
static int16_t x356 = 41;
static volatile int64_t x359 = INT64_MAX;
uint8_t x363 = 0U;
uint64_t x370 = 50437LLU;
int64_t x375 = INT64_MAX;
volatile int16_t x376 = -51;
uint64_t t87 = 1LLU;
int16_t x382 = INT16_MIN;
volatile int8_t x394 = 0;
volatile uint32_t t91 = 736029U;
int16_t x402 = INT16_MIN;
static uint64_t x410 = 4007594164910127803LLU;
int32_t x415 = INT32_MIN;
static uint8_t x429 = 86U;
int32_t x431 = 219269;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint32_t x2 = 3U;
	int32_t x3 = 492175539;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = 13;

	t0 = ((x1<=x2)+(x3%x4));

	if (t0 != 180) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 12161;
	int64_t x6 = INT64_MIN;
	static int64_t x7 = INT64_MAX;
	volatile int64_t t1 = 3521048932600402291LL;

	t1 = ((x5<=x6)+(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	int16_t x12 = -11;
	int32_t t2 = -30777;

	t2 = ((x9<=x10)+(x11%x12));

	if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 74U;
	volatile int32_t x15 = 59;
	uint8_t x16 = 3U;
	static int32_t t3 = -11525255;

	t3 = ((x13<=x14)+(x15%x16));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	static uint8_t x18 = 16U;
	volatile uint16_t x19 = 6U;
	static volatile uint16_t x20 = 21838U;
	volatile int32_t t4 = -59092761;

	t4 = ((x17<=x18)+(x19%x20));

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x25 = 7U;
	uint32_t x26 = 10U;
	int32_t x27 = INT32_MIN;
	volatile int16_t x28 = 103;
	static volatile int32_t t5 = 223131;

	t5 = ((x25<=x26)+(x27%x28));

	if (t5 != -82) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -239834998541LL;
	int16_t x31 = INT16_MAX;
	int64_t x32 = INT64_MIN;
	int64_t t6 = -4957523LL;

	t6 = ((x29<=x30)+(x31%x32));

	if (t6 != 32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -612800112LL;
	volatile int8_t x34 = INT8_MIN;
	volatile uint64_t x36 = UINT64_MAX;
	static uint64_t t7 = 40633LLU;

	t7 = ((x33<=x34)+(x35%x36));

	if (t7 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -76182007165121577LL;
	int16_t x38 = INT16_MAX;
	uint64_t x39 = 7LLU;
	volatile uint64_t t8 = 615825829737327LLU;

	t8 = ((x37<=x38)+(x39%x40));

	if (t8 != 8LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x42 = -1;
	static volatile int64_t x44 = INT64_MIN;

	t9 = ((x41<=x42)+(x43%x44));

	if (t9 != -2490LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -102562132LL;
	int32_t x46 = INT32_MIN;
	static volatile uint64_t x47 = UINT64_MAX;
	static volatile uint64_t t10 = 47474783852LLU;

	t10 = ((x45<=x46)+(x47%x48));

	if (t10 != 32767LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 12U;
	volatile int8_t x50 = 1;
	int64_t x51 = -24033939912477575LL;
	static volatile uint64_t t11 = 3817392923702LLU;

	t11 = ((x49<=x50)+(x51%x52));

	if (t11 != 18422710133797074041LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 605U;
	int64_t x54 = INT64_MIN;
	static uint64_t x55 = 829782605LLU;
	volatile uint64_t x56 = UINT64_MAX;

	t12 = ((x53<=x54)+(x55%x56));

	if (t12 != 829782605LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 2899U;
	uint64_t x58 = UINT64_MAX;
	static int64_t x59 = -6513177LL;
	int64_t t13 = -301049032065LL;

	t13 = ((x57<=x58)+(x59%x60));

	if (t13 != -31529LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	volatile uint16_t x62 = 1U;
	int64_t x63 = INT64_MAX;
	volatile int16_t x64 = -1;
	int64_t t14 = 545283731LL;

	t14 = ((x61<=x62)+(x63%x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = INT8_MIN;
	static uint8_t x66 = 12U;
	static uint8_t x67 = UINT8_MAX;
	uint32_t x68 = 1805623U;

	t15 = ((x65<=x66)+(x67%x68));

	if (t15 != 256U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x70 = 23;
	uint8_t x71 = 4U;

	t16 = ((x69<=x70)+(x71%x72));

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 31858U;
	volatile int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MAX;
	static volatile int64_t t17 = 199216889677084LL;

	t17 = ((x73<=x74)+(x75%x76));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MAX;
	int8_t x79 = INT8_MIN;
	volatile int8_t x80 = -1;

	t18 = ((x77<=x78)+(x79%x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x82 = INT8_MIN;
	uint8_t x83 = UINT8_MAX;
	int64_t x84 = -1LL;
	volatile int64_t t19 = -1800040644899886641LL;

	t19 = ((x81<=x82)+(x83%x84));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 4U;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MIN;
	static int64_t x88 = INT64_MIN;
	int64_t t20 = -3LL;

	t20 = ((x85<=x86)+(x87%x88));

	if (t20 != -127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x90 = INT16_MAX;
	static uint32_t x91 = 3698U;
	int64_t x92 = INT64_MIN;
	volatile int64_t t21 = -114723LL;

	t21 = ((x89<=x90)+(x91%x92));

	if (t21 != 3699LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 31549;
	static int16_t x94 = INT16_MIN;
	uint64_t x95 = 2060502449769314LLU;

	t22 = ((x93<=x94)+(x95%x96));

	if (t22 != 479927654LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -97375LL;
	int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	static volatile int64_t x100 = 188325655895LL;
	int64_t t23 = 3LL;

	t23 = ((x97<=x98)+(x99%x100));

	if (t23 != -62743851372LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 5U;
	uint16_t x102 = 100U;
	int32_t x103 = -1;
	static uint64_t x104 = 1LLU;

	t24 = ((x101<=x102)+(x103%x104));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MAX;
	volatile int64_t x108 = INT64_MIN;
	volatile int64_t t25 = 10154513834632288LL;

	t25 = ((x105<=x106)+(x107%x108));

	if (t25 != 128LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = 119092999U;
	int64_t x111 = -1LL;
	static int64_t t26 = -95718686126LL;

	t26 = ((x109<=x110)+(x111%x112));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 35U;
	static uint8_t x114 = UINT8_MAX;
	uint32_t x115 = 476739478U;
	uint32_t x116 = UINT32_MAX;

	t27 = ((x113<=x114)+(x115%x116));

	if (t27 != 476739479U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = 0;
	int32_t x118 = INT32_MAX;
	static volatile uint32_t x119 = 0U;
	uint64_t x120 = 5734349854LLU;
	volatile uint64_t t28 = 14337537281LLU;

	t28 = ((x117<=x118)+(x119%x120));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = INT64_MIN;
	uint64_t x123 = 8692644301960047795LLU;
	int32_t x124 = INT32_MIN;
	volatile uint64_t t29 = 138765355979LLU;

	t29 = ((x121<=x122)+(x123%x124));

	if (t29 != 8692644301960047795LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x126 = -1LL;
	static uint64_t x127 = UINT64_MAX;
	int8_t x128 = -1;
	uint64_t t30 = 4470878501753944768LLU;

	t30 = ((x125<=x126)+(x127%x128));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x130 = INT16_MIN;
	int16_t x131 = 682;
	int32_t t31 = -34;

	t31 = ((x129<=x130)+(x131%x132));

	if (t31 != 682) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = INT64_MIN;
	volatile int32_t x134 = -218;
	static uint32_t x135 = 36U;
	int64_t x136 = INT64_MIN;
	int64_t t32 = 30864LL;

	t32 = ((x133<=x134)+(x135%x136));

	if (t32 != 37LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x139 = -1LL;
	volatile int64_t t33 = 2LL;

	t33 = ((x137<=x138)+(x139%x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	volatile int64_t x142 = -652631893496884LL;
	int64_t x144 = INT64_MIN;
	volatile int64_t t34 = 832LL;

	t34 = ((x141<=x142)+(x143%x144));

	if (t34 != 65535LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x145 = 0U;
	static uint8_t x146 = UINT8_MAX;
	static volatile int16_t x147 = -1;
	int64_t x148 = INT64_MIN;
	int64_t t35 = -986115LL;

	t35 = ((x145<=x146)+(x147%x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	int64_t x151 = INT64_MIN;
	int8_t x152 = INT8_MAX;
	int64_t t36 = -489733690372LL;

	t36 = ((x149<=x150)+(x151%x152));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	int64_t x155 = 13566997223750553LL;
	int16_t x156 = 1994;
	int64_t t37 = -33767112LL;

	t37 = ((x153<=x154)+(x155%x156));

	if (t37 != 1971LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	static volatile int64_t x158 = -1LL;
	uint16_t x159 = 2U;
	int64_t t38 = 52262555719633467LL;

	t38 = ((x157<=x158)+(x159%x160));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 95265173U;
	uint8_t x162 = 3U;
	uint32_t x163 = 323U;
	static uint8_t x164 = UINT8_MAX;
	volatile uint32_t t39 = 172841U;

	t39 = ((x161<=x162)+(x163%x164));

	if (t39 != 68U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	int64_t x168 = 1078045826671LL;
	uint64_t t40 = 56512179115588LLU;

	t40 = ((x165<=x166)+(x167%x168));

	if (t40 != 1035205880001LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = 8LL;
	static int64_t x170 = -1LL;
	int8_t x171 = INT8_MIN;
	int32_t x172 = -1;
	int32_t t41 = -28148456;

	t41 = ((x169<=x170)+(x171%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = 57U;
	volatile int16_t x174 = INT16_MIN;
	static int8_t x175 = -1;
	static volatile int32_t x176 = INT32_MIN;
	int32_t t42 = 10508211;

	t42 = ((x173<=x174)+(x175%x176));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = 200357347488217514LL;
	int32_t x179 = -1;
	int64_t x180 = INT64_MIN;

	t43 = ((x177<=x178)+(x179%x180));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = 99LL;
	volatile int64_t x182 = INT64_MIN;
	int8_t x183 = -1;
	volatile int32_t t44 = -3;

	t44 = ((x181<=x182)+(x183%x184));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MIN;
	uint16_t x191 = 22U;
	int64_t x192 = 377116978237303610LL;

	t45 = ((x189<=x190)+(x191%x192));

	if (t45 != 23LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x197 = -1184744094024LL;
	static uint64_t x198 = 19295398LLU;
	int32_t x199 = INT32_MAX;
	static uint64_t x200 = UINT64_MAX;
	uint64_t t46 = 84875932LLU;

	t46 = ((x197<=x198)+(x199%x200));

	if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = INT16_MAX;
	volatile int32_t x202 = INT32_MIN;
	static uint16_t x203 = 539U;
	int16_t x204 = -1;
	int32_t t47 = 800;

	t47 = ((x201<=x202)+(x203%x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -205210;
	static int64_t x206 = -11721493503266LL;
	int32_t x207 = INT32_MIN;

	t48 = ((x205<=x206)+(x207%x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MIN;
	int8_t x211 = -1;
	int16_t x212 = 112;
	static volatile int32_t t49 = 918171;

	t49 = ((x209<=x210)+(x211%x212));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x213 = 47U;
	static volatile int64_t x214 = INT64_MIN;
	volatile int64_t t50 = 69373345173LL;

	t50 = ((x213<=x214)+(x215%x216));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = 80U;
	static int8_t x222 = INT8_MIN;
	static int64_t x223 = INT64_MIN;
	static volatile int16_t x224 = INT16_MIN;
	int64_t t51 = -282548667183LL;

	t51 = ((x221<=x222)+(x223%x224));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MIN;
	static volatile int32_t x226 = INT32_MIN;
	volatile int16_t x227 = -1;
	static volatile uint8_t x228 = UINT8_MAX;

	t52 = ((x225<=x226)+(x227%x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -95;
	uint16_t x230 = 1764U;
	int16_t x231 = -243;
	volatile int32_t t53 = 84714620;

	t53 = ((x229<=x230)+(x231%x232));

	if (t53 != -242) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -1;
	uint8_t x234 = UINT8_MAX;
	uint64_t x235 = 111742993051554LLU;
	volatile int16_t x236 = 1;
	volatile uint64_t t54 = 120LLU;

	t54 = ((x233<=x234)+(x235%x236));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = -1365;
	uint16_t x239 = 363U;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t55 = 1972U;

	t55 = ((x237<=x238)+(x239%x240));

	if (t55 != 364U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x241 = -1;
	uint8_t x242 = 51U;
	int16_t x243 = INT16_MAX;
	static uint32_t x244 = 767450433U;
	volatile uint32_t t56 = 7U;

	t56 = ((x241<=x242)+(x243%x244));

	if (t56 != 32768U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = INT32_MAX;
	volatile int32_t x246 = INT32_MIN;
	int32_t x247 = -1;
	volatile int64_t t57 = 92908697LL;

	t57 = ((x245<=x246)+(x247%x248));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x253 = 0U;
	volatile uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;

	t58 = ((x253<=x254)+(x255%x256));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = INT64_MIN;
	uint8_t x259 = 27U;
	uint64_t x260 = 3977594150LLU;
	volatile uint64_t t59 = 2LLU;

	t59 = ((x257<=x258)+(x259%x260));

	if (t59 != 28LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x262 = 1U;
	static int16_t x263 = INT16_MIN;

	t60 = ((x261<=x262)+(x263%x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x265 = INT16_MIN;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = 180;
	uint32_t x268 = 32387U;
	uint32_t t61 = 720333U;

	t61 = ((x265<=x266)+(x267%x268));

	if (t61 != 181U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x269 = 2487235247399LL;
	uint16_t x272 = 422U;

	t62 = ((x269<=x270)+(x271%x272));

	if (t62 != -274) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x275 = -1LL;
	int8_t x276 = -1;
	int64_t t63 = -33056421LL;

	t63 = ((x273<=x274)+(x275%x276));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -1;
	int32_t x278 = INT32_MAX;
	int16_t x279 = -31;
	static int16_t x280 = INT16_MIN;
	int32_t t64 = -37915593;

	t64 = ((x277<=x278)+(x279%x280));

	if (t64 != -30) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x281 = 3LLU;
	int8_t x282 = -1;
	volatile int8_t x283 = 0;
	static int8_t x284 = INT8_MIN;

	t65 = ((x281<=x282)+(x283%x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	int32_t x288 = INT32_MIN;

	t66 = ((x285<=x286)+(x287%x288));

	if (t66 != 10046614U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x290 = INT16_MIN;
	static int8_t x292 = -1;
	int32_t t67 = 6911;

	t67 = ((x289<=x290)+(x291%x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = UINT8_MAX;
	int8_t x294 = -1;
	int32_t x295 = -3662;
	uint8_t x296 = 36U;
	int32_t t68 = -736;

	t68 = ((x293<=x294)+(x295%x296));

	if (t68 != -26) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x297 = 0U;
	static int32_t x298 = INT32_MAX;
	uint64_t x299 = 20408536985LLU;
	static uint32_t x300 = UINT32_MAX;

	t69 = ((x297<=x298)+(x299%x300));

	if (t69 != 3228667806LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = INT64_MIN;
	static uint8_t x302 = 66U;
	static volatile uint8_t x303 = 22U;
	int32_t x304 = 31638;
	int32_t t70 = -241;

	t70 = ((x301<=x302)+(x303%x304));

	if (t70 != 23) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x305 = -1;
	uint64_t x306 = 3LLU;
	static int32_t x307 = INT32_MAX;
	volatile int64_t x308 = INT64_MIN;

	t71 = ((x305<=x306)+(x307%x308));

	if (t71 != 2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x310 = UINT64_MAX;
	int16_t x311 = 6;

	t72 = ((x309<=x310)+(x311%x312));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = INT32_MAX;
	uint8_t x314 = UINT8_MAX;
	static volatile int64_t x315 = -1LL;
	volatile int32_t x316 = INT32_MIN;
	static volatile int64_t t73 = 158100300860LL;

	t73 = ((x313<=x314)+(x315%x316));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = -41087;
	static int32_t x318 = -1;
	static int32_t x319 = 12947052;
	int32_t x320 = INT32_MAX;
	int32_t t74 = 469;

	t74 = ((x317<=x318)+(x319%x320));

	if (t74 != 12947053) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 161U;
	int16_t x322 = INT16_MIN;

	t75 = ((x321<=x322)+(x323%x324));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = UINT64_MAX;
	volatile uint8_t x326 = 1U;
	int32_t x327 = -1;
	volatile int32_t x328 = INT32_MAX;
	int32_t t76 = -3;

	t76 = ((x325<=x326)+(x327%x328));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x337 = INT8_MAX;
	static int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MAX;
	volatile int32_t t77 = -497;

	t77 = ((x337<=x338)+(x339%x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	volatile int64_t t78 = -14192688LL;

	t78 = ((x341<=x342)+(x343%x344));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = INT8_MIN;
	volatile int16_t x346 = -690;
	static int8_t x347 = INT8_MAX;
	uint8_t x348 = UINT8_MAX;
	int32_t t79 = -83;

	t79 = ((x345<=x346)+(x347%x348));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MAX;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = -31;
	int32_t t80 = -478;

	t80 = ((x349<=x350)+(x351%x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MIN;
	volatile uint32_t x354 = 35784533U;
	volatile int8_t x355 = INT8_MIN;
	volatile int32_t t81 = -5108487;

	t81 = ((x353<=x354)+(x355%x356));

	if (t81 != -5) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x357 = UINT8_MAX;
	int8_t x358 = -1;
	volatile uint16_t x360 = UINT16_MAX;
	int64_t t82 = -487930439648LL;

	t82 = ((x357<=x358)+(x359%x360));

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = -1;
	volatile uint64_t x362 = 9952LLU;
	int16_t x364 = INT16_MAX;
	static int32_t t83 = -2;

	t83 = ((x361<=x362)+(x363%x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x365 = 22U;
	uint32_t x366 = 988711297U;
	uint32_t x367 = 131U;
	int8_t x368 = INT8_MIN;
	uint32_t t84 = 16U;

	t84 = ((x365<=x366)+(x367%x368));

	if (t84 != 132U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x369 = 0;
	volatile int8_t x371 = 10;
	int16_t x372 = -120;
	volatile int32_t t85 = 0;

	t85 = ((x369<=x370)+(x371%x372));

	if (t85 != 11) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MAX;
	static int64_t t86 = 1803104053324LL;

	t86 = ((x373<=x374)+(x375%x376));

	if (t86 != 26LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = -58;
	uint8_t x378 = 2U;
	volatile uint64_t x379 = 47059806804027LLU;
	volatile int16_t x380 = INT16_MAX;

	t87 = ((x377<=x378)+(x379%x380));

	if (t87 != 29075LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x381 = INT16_MIN;
	uint16_t x383 = 19096U;
	volatile int64_t x384 = -1LL;
	static volatile int64_t t88 = 380123212LL;

	t88 = ((x381<=x382)+(x383%x384));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	volatile int16_t x387 = -1;
	int32_t x388 = -10993877;
	int32_t t89 = 45;

	t89 = ((x385<=x386)+(x387%x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x389 = 437U;
	volatile int16_t x390 = INT16_MIN;
	volatile uint8_t x391 = 117U;
	int8_t x392 = INT8_MAX;
	int32_t t90 = -885896834;

	t90 = ((x389<=x390)+(x391%x392));

	if (t90 != 118) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = -538;
	uint32_t x395 = 7U;
	static int16_t x396 = -119;

	t91 = ((x393<=x394)+(x395%x396));

	if (t91 != 8U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x397 = -1LL;
	int32_t x398 = 5;
	uint8_t x399 = 0U;
	uint8_t x400 = 10U;
	int32_t t92 = -130276138;

	t92 = ((x397<=x398)+(x399%x400));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = 0;
	int32_t x403 = -1;
	static volatile int8_t x404 = -1;
	int32_t t93 = -475674526;

	t93 = ((x401<=x402)+(x403%x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = -700;
	int16_t x406 = 1391;
	int8_t x407 = INT8_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t94 = -25665;

	t94 = ((x405<=x406)+(x407%x408));

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x409 = INT16_MIN;
	int8_t x411 = INT8_MIN;
	static volatile int32_t x412 = INT32_MIN;
	int32_t t95 = 99426964;

	t95 = ((x409<=x410)+(x411%x412));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x413 = INT16_MIN;
	volatile uint64_t x414 = 8LLU;
	uint8_t x416 = UINT8_MAX;
	int32_t t96 = -132611438;

	t96 = ((x413<=x414)+(x415%x416));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = -511;
	uint64_t x422 = 1108355982LLU;
	static volatile int64_t x423 = -1LL;
	uint64_t x424 = 15164821996472LLU;
	volatile uint64_t t97 = 3LLU;

	t97 = ((x421<=x422)+(x423%x424));

	if (t97 != 11960049067263LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x425 = 9U;
	volatile int16_t x426 = 8202;
	uint32_t x427 = 295272U;
	int16_t x428 = INT16_MAX;
	volatile uint32_t t98 = 248U;

	t98 = ((x425<=x426)+(x427%x428));

	if (t98 != 370U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x430 = INT32_MIN;
	int64_t x432 = 53615278LL;
	int64_t t99 = 582066855412562LL;

	t99 = ((x429<=x430)+(x431%x432));

	if (t99 != 219269LL) { NG(); } else { ; }
	
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

