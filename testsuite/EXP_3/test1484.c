#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x5 = 615503194647725LLU;
uint64_t x10 = 510LLU;
static volatile uint16_t x19 = 25801U;
static int64_t x42 = -1LL;
int16_t x45 = -1;
int32_t x49 = -98357666;
int64_t x50 = 86137855512429296LL;
int32_t x51 = -3;
volatile int32_t x54 = -13;
volatile uint32_t t12 = 229677908U;
int64_t x58 = INT64_MAX;
int32_t x61 = 7;
static int8_t x63 = 0;
int8_t x64 = -1;
uint8_t x72 = UINT8_MAX;
static int64_t x74 = INT64_MIN;
static uint8_t x76 = 0U;
volatile uint8_t x79 = 0U;
int64_t x80 = INT64_MIN;
int64_t x83 = INT64_MAX;
int32_t t21 = 58298755;
uint8_t x100 = UINT8_MAX;
volatile int32_t t22 = 8266;
volatile int64_t x102 = INT64_MAX;
int64_t x105 = INT64_MIN;
int64_t x106 = INT64_MAX;
int8_t x107 = INT8_MAX;
uint64_t x110 = 59073816LLU;
int64_t x112 = INT64_MAX;
int32_t t26 = -243;
uint64_t x122 = 13955119LLU;
int32_t x123 = -439209;
static int64_t x125 = -1LL;
int16_t x126 = -15;
int8_t x128 = INT8_MIN;
static int16_t x138 = INT16_MIN;
volatile int32_t t31 = 915895;
int32_t x142 = 2189;
int64_t x143 = INT64_MIN;
int16_t x154 = INT16_MIN;
uint16_t x157 = 622U;
volatile int32_t t36 = 47475;
int64_t x165 = -1LL;
static int16_t x175 = INT16_MAX;
int8_t x177 = INT8_MIN;
uint16_t x188 = 504U;
uint32_t x194 = 11637191U;
uint64_t x212 = 6LLU;
static int32_t x214 = INT32_MIN;
int16_t x216 = INT16_MAX;
uint8_t x217 = UINT8_MAX;
int32_t x222 = -1;
uint32_t x227 = 1041181U;
volatile int16_t x231 = INT16_MIN;
int16_t x239 = 1;
volatile uint16_t x241 = 13U;
int8_t x253 = INT8_MIN;
volatile int32_t t60 = 236236;
int16_t x257 = INT16_MIN;
static uint8_t x265 = UINT8_MAX;
int8_t x266 = -1;
static volatile int32_t t64 = 6;
uint64_t x273 = 247553384574LLU;
int32_t x275 = -1;
uint32_t x288 = UINT32_MAX;
int8_t x294 = -1;
volatile int32_t x299 = INT32_MAX;
volatile int8_t x300 = INT8_MIN;
static volatile uint8_t x304 = 15U;
static uint16_t x306 = UINT16_MAX;
static volatile uint64_t x318 = 7086769LLU;
uint16_t x320 = UINT16_MAX;
int16_t x321 = INT16_MAX;
uint32_t x327 = 353U;
int32_t x340 = INT32_MIN;
volatile uint8_t x345 = UINT8_MAX;
int16_t x350 = INT16_MIN;
int32_t t83 = -408683;
static volatile uint16_t x353 = UINT16_MAX;
int64_t x355 = INT64_MIN;
int8_t x367 = -2;
uint32_t x371 = UINT32_MAX;
static int64_t x373 = -1LL;
uint16_t x376 = 5479U;
int64_t x379 = -17900LL;
static int16_t x382 = INT16_MIN;
uint64_t x388 = 88283320810LLU;
int16_t x391 = -1;
uint8_t x392 = 22U;
static int32_t x395 = INT32_MIN;
int64_t x406 = -1LL;
uint8_t x409 = UINT8_MAX;
static uint64_t t98 = 42415640176732LLU;
uint64_t x416 = 2233222344061875LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint16_t x2 = UINT16_MAX;
	static uint8_t x3 = UINT8_MAX;
	int32_t x4 = 881;
	static int32_t t0 = 245;

	t0 = ((x1&x2)-(x3<x4));

	if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 1421202790250280LLU;
	uint16_t x7 = 485U;
	uint8_t x8 = 2U;
	static uint64_t t1 = 97804805552272575LLU;

	t1 = ((x5&x6)-(x7<x8));

	if (t1 != 13743916737576LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 95705942598458668LL;
	uint32_t x11 = 984463U;
	volatile uint64_t x12 = 3747LLU;
	uint64_t t2 = 213545822874LLU;

	t2 = ((x9&x10)-(x11<x12));

	if (t2 != 300LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 5273U;
	int64_t x14 = INT64_MAX;
	volatile int64_t x15 = -8956665115LL;
	static volatile int8_t x16 = INT8_MIN;
	volatile int64_t t3 = -804859LL;

	t3 = ((x13&x14)-(x15<x16));

	if (t3 != 5272LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = -1;
	int16_t x20 = -1;
	volatile int32_t t4 = -12968;

	t4 = ((x17&x18)-(x19<x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 2007009LLU;
	volatile int32_t x22 = 175;
	static uint16_t x23 = 0U;
	volatile uint8_t x24 = 19U;
	uint64_t t5 = 12242241698933060LLU;

	t5 = ((x21&x22)-(x23<x24));

	if (t5 != 160LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MIN;
	int32_t x30 = -203329;
	static volatile int32_t x31 = INT32_MIN;
	static volatile uint32_t x32 = 1U;
	int32_t t6 = -5377917;

	t6 = ((x29&x30)-(x31<x32));

	if (t6 != -229376) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	volatile int32_t x34 = INT32_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	volatile int16_t x36 = -1;
	int32_t t7 = INT32_MIN;

	t7 = ((x33&x34)-(x35<x36));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static volatile int32_t x38 = INT32_MIN;
	static int16_t x39 = INT16_MIN;
	volatile int32_t x40 = INT32_MIN;
	static int64_t t8 = INT64_MIN;

	t8 = ((x37&x38)-(x39<x40));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MAX;
	int64_t x43 = 3471090323536711LL;
	int16_t x44 = -9498;
	static int64_t t9 = INT64_MAX;

	t9 = ((x41&x42)-(x43<x44));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = -32;
	int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = 0;

	t10 = ((x45&x46)-(x47<x48));

	if (t10 != -33) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x52 = 8U;
	int64_t t11 = -89LL;

	t11 = ((x49&x50)-(x51<x52));

	if (t11 != 86137855419613776LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = 61232U;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = INT8_MAX;

	t12 = ((x53&x54)-(x55<x56));

	if (t12 != 61231U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 0U;
	static uint16_t x59 = 12U;
	int16_t x60 = -2;
	int64_t t13 = 118LL;

	t13 = ((x57&x58)-(x59<x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x62 = 4U;
	static int32_t t14 = -1220061;

	t14 = ((x61&x62)-(x63<x64));

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -111LL;
	volatile int32_t x67 = -981;
	static int32_t x68 = 43334;
	volatile int64_t t15 = -30409707420LL;

	t15 = ((x65&x66)-(x67<x68));

	if (t15 != -2147483649LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 1U;
	int16_t x70 = INT16_MAX;
	volatile int16_t x71 = 3;
	static int32_t t16 = 521045975;

	t16 = ((x69&x70)-(x71<x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	int8_t x75 = 4;
	int64_t t17 = INT64_MIN;

	t17 = ((x73&x74)-(x75<x76));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MIN;
	int64_t x78 = 2088028624LL;
	int64_t t18 = 1037124605244247827LL;

	t18 = ((x77&x78)-(x79<x80));

	if (t18 != 2088028544LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MIN;
	int16_t x82 = 144;
	int64_t x84 = 331104906LL;
	volatile int32_t t19 = 2301;

	t19 = ((x81&x82)-(x83<x84));

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 45087849U;
	volatile int64_t x86 = INT64_MIN;
	uint8_t x87 = 9U;
	static int16_t x88 = -1;
	int64_t t20 = -176275LL;

	t20 = ((x85&x86)-(x87<x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	int32_t x94 = -1;
	static int32_t x95 = -1;
	int64_t x96 = INT64_MIN;

	t21 = ((x93&x94)-(x95<x96));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	volatile int64_t x99 = 7429117LL;

	t22 = ((x97&x98)-(x99<x100));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	uint32_t x103 = 1310085U;
	static volatile uint32_t x104 = 84543366U;
	uint64_t t23 = 85359517612121LLU;

	t23 = ((x101&x102)-(x103<x104));

	if (t23 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x108 = INT32_MIN;
	volatile int64_t t24 = -10066769643196LL;

	t24 = ((x105&x106)-(x107<x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 1U;
	static int32_t x111 = -1;
	static volatile uint64_t t25 = UINT64_MAX;

	t25 = ((x109&x110)-(x111<x112));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = 28U;
	int32_t x115 = -1;
	int64_t x116 = -1LL;

	t26 = ((x113&x114)-(x115<x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 108U;
	static int8_t x118 = INT8_MAX;
	uint16_t x119 = 1745U;
	int32_t x120 = INT32_MIN;
	int32_t t27 = 35212;

	t27 = ((x117&x118)-(x119<x120));

	if (t27 != 108) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = 7237127LL;
	volatile int32_t x124 = INT32_MAX;
	volatile uint64_t t28 = 141605906731164LLU;

	t28 = ((x121&x122)-(x123<x124));

	if (t28 != 4481030LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x127 = INT32_MIN;
	int64_t t29 = -2258130840291768596LL;

	t29 = ((x125&x126)-(x127<x128));

	if (t29 != -16LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	static uint32_t x132 = 62U;
	int64_t t30 = -1058198510077935188LL;

	t30 = ((x129&x130)-(x131<x132));

	if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	static int32_t x139 = INT32_MAX;
	static int32_t x140 = 15075;

	t31 = ((x137&x138)-(x139<x140));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x141 = INT32_MAX;
	int64_t x144 = INT64_MAX;
	int32_t t32 = -8;

	t32 = ((x141&x142)-(x143<x144));

	if (t32 != 2188) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	static int16_t x146 = 1;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t x148 = 567707776LLU;
	volatile int32_t t33 = -2;

	t33 = ((x145&x146)-(x147<x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = -7;
	uint32_t x150 = 244U;
	uint32_t x151 = 3U;
	int64_t x152 = INT64_MIN;
	uint32_t t34 = 1443096705U;

	t34 = ((x149&x150)-(x151<x152));

	if (t34 != 240U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = 7232878;
	uint16_t x155 = 20U;
	static volatile int64_t x156 = INT64_MIN;
	int32_t t35 = -88;

	t35 = ((x153&x154)-(x155<x156));

	if (t35 != 7208960) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;

	t36 = ((x157&x158)-(x159<x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MAX;
	volatile uint64_t x163 = 8527536203LLU;
	static int8_t x164 = 3;
	volatile int64_t t37 = 1151LL;

	t37 = ((x161&x162)-(x163<x164));

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x166 = INT16_MIN;
	static int32_t x167 = INT32_MAX;
	uint8_t x168 = 18U;
	static int64_t t38 = 1LL;

	t38 = ((x165&x166)-(x167<x168));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x169 = UINT32_MAX;
	volatile int16_t x170 = INT16_MAX;
	int32_t x171 = INT32_MIN;
	static int32_t x172 = INT32_MIN;
	uint32_t t39 = 380U;

	t39 = ((x169&x170)-(x171<x172));

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x173 = 1U;
	int64_t x174 = INT64_MIN;
	static int32_t x176 = -1;
	volatile int64_t t40 = -106123368483071LL;

	t40 = ((x173&x174)-(x175<x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = -600;
	int8_t x179 = INT8_MIN;
	static int32_t x180 = INT32_MIN;
	int32_t t41 = -7262;

	t41 = ((x177&x178)-(x179<x180));

	if (t41 != -640) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x182 = INT8_MAX;
	volatile int64_t x183 = INT64_MAX;
	static volatile uint16_t x184 = 1277U;
	static volatile int32_t t42 = 13039114;

	t42 = ((x181&x182)-(x183<x184));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = 1;
	int32_t x186 = INT32_MIN;
	int16_t x187 = -879;
	volatile int32_t t43 = 11798948;

	t43 = ((x185&x186)-(x187<x188));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -1;
	int64_t x190 = INT64_MAX;
	int32_t x191 = INT32_MAX;
	static int8_t x192 = 1;
	volatile int64_t t44 = INT64_MAX;

	t44 = ((x189&x190)-(x191<x192));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = INT16_MAX;
	int32_t x195 = -1;
	uint16_t x196 = 1U;
	uint32_t t45 = 2636U;

	t45 = ((x193&x194)-(x195<x196));

	if (t45 != 4550U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x197 = 74831756;
	volatile int64_t x198 = INT64_MIN;
	int32_t x199 = -488968;
	uint16_t x200 = UINT16_MAX;
	static volatile int64_t t46 = -63592365975398881LL;

	t46 = ((x197&x198)-(x199<x200));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MAX;
	volatile int8_t x202 = -39;
	static volatile int64_t x203 = -71671717LL;
	volatile int16_t x204 = -13703;
	volatile int32_t t47 = 258765332;

	t47 = ((x201&x202)-(x203<x204));

	if (t47 != 32728) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MAX;
	int16_t x206 = -1;
	volatile int32_t x207 = INT32_MAX;
	int32_t x208 = INT32_MAX;
	volatile int64_t t48 = INT64_MAX;

	t48 = ((x205&x206)-(x207<x208));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MAX;
	uint16_t x211 = 1317U;
	volatile uint64_t t49 = 2LLU;

	t49 = ((x209&x210)-(x211<x212));

	if (t49 != 32767LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x213 = 6U;
	static uint32_t x215 = 23746906U;
	int32_t t50 = -530;

	t50 = ((x213&x214)-(x215<x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x218 = 225;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t51 = 722622617;

	t51 = ((x217&x218)-(x219<x220));

	if (t51 != 224) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 1U;
	volatile int8_t x223 = 6;
	static int64_t x224 = 38711351LL;
	static volatile int32_t t52 = -108207;

	t52 = ((x221&x222)-(x223<x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 115724LLU;
	int16_t x226 = INT16_MIN;
	volatile uint16_t x228 = 555U;
	uint64_t t53 = 7225585444LLU;

	t53 = ((x225&x226)-(x227<x228));

	if (t53 != 98304LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = 0U;
	int16_t x230 = INT16_MAX;
	int64_t x232 = -1LL;
	uint32_t t54 = UINT32_MAX;

	t54 = ((x229&x230)-(x231<x232));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x233 = INT32_MIN;
	int32_t x234 = 0;
	uint32_t x235 = 220372294U;
	int8_t x236 = -2;
	volatile int32_t t55 = 570;

	t55 = ((x233&x234)-(x235<x236));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	uint16_t x238 = 20129U;
	static int64_t x240 = 0LL;
	int32_t t56 = 4614;

	t56 = ((x237&x238)-(x239<x240));

	if (t56 != 20096) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x242 = INT8_MAX;
	volatile uint8_t x243 = 2U;
	int32_t x244 = INT32_MIN;
	int32_t t57 = -51;

	t57 = ((x241&x242)-(x243<x244));

	if (t57 != 13) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 10U;
	volatile int64_t t58 = 1544LL;

	t58 = ((x245&x246)-(x247<x248));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x249 = 116157LLU;
	int64_t x250 = 443LL;
	static int32_t x251 = -98865900;
	uint64_t x252 = UINT64_MAX;
	uint64_t t59 = 1915718240LLU;

	t59 = ((x249&x250)-(x251<x252));

	if (t59 != 440LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x254 = -1;
	uint16_t x255 = 956U;
	volatile uint32_t x256 = UINT32_MAX;

	t60 = ((x253&x254)-(x255<x256));

	if (t60 != -129) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x258 = 114977168617757LLU;
	static uint8_t x259 = UINT8_MAX;
	uint8_t x260 = 15U;
	static volatile uint64_t t61 = 299601617357441LLU;

	t61 = ((x257&x258)-(x259<x260));

	if (t61 != 114977168588800LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -1;
	int32_t x262 = INT32_MIN;
	static volatile int8_t x263 = -1;
	uint64_t x264 = 547616183554854820LLU;
	volatile int32_t t62 = INT32_MIN;

	t62 = ((x261&x262)-(x263<x264));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x267 = 3U;
	static int16_t x268 = INT16_MAX;
	int32_t t63 = 1517966;

	t63 = ((x265&x266)-(x267<x268));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x269 = 11U;
	int32_t x270 = -1;
	int16_t x271 = -1;
	uint16_t x272 = 25978U;

	t64 = ((x269&x270)-(x271<x272));

	if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x274 = 13623U;
	uint8_t x276 = 42U;
	uint64_t t65 = 25161350278LLU;

	t65 = ((x273&x274)-(x275<x276));

	if (t65 != 8245LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x281 = -1;
	int32_t x282 = INT32_MIN;
	int8_t x283 = 5;
	uint8_t x284 = 0U;
	int32_t t66 = INT32_MIN;

	t66 = ((x281&x282)-(x283<x284));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	uint8_t x287 = 0U;
	volatile int32_t t67 = -1;

	t67 = ((x285&x286)-(x287<x288));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x289 = INT8_MIN;
	int32_t x290 = -1;
	int8_t x291 = 1;
	volatile uint64_t x292 = 6659329402207LLU;
	volatile int32_t t68 = 3;

	t68 = ((x289&x290)-(x291<x292));

	if (t68 != -129) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MAX;
	int8_t x295 = INT8_MIN;
	volatile int16_t x296 = INT16_MIN;
	int64_t t69 = INT64_MAX;

	t69 = ((x293&x294)-(x295<x296));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x297 = INT16_MAX;
	volatile int8_t x298 = 13;
	int32_t t70 = -238952;

	t70 = ((x297&x298)-(x299<x300));

	if (t70 != 13) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = -1;
	uint64_t x303 = UINT64_MAX;
	int32_t t71 = INT32_MIN;

	t71 = ((x301&x302)-(x303<x304));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x305 = 16207U;
	uint32_t x307 = 82U;
	int16_t x308 = INT16_MAX;
	uint32_t t72 = 316774U;

	t72 = ((x305&x306)-(x307<x308));

	if (t72 != 16206U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = 4;
	int16_t x311 = INT16_MAX;
	static int16_t x312 = INT16_MAX;
	int32_t t73 = 1073;

	t73 = ((x309&x310)-(x311<x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x313 = -1;
	int8_t x314 = 44;
	uint8_t x315 = 17U;
	int64_t x316 = INT64_MIN;
	volatile int32_t t74 = 3;

	t74 = ((x313&x314)-(x315<x316));

	if (t74 != 44) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x317 = 12U;
	int16_t x319 = -1;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x317&x318)-(x319<x320));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x322 = INT8_MIN;
	volatile int8_t x323 = -26;
	int32_t x324 = -1;
	int32_t t76 = 42880;

	t76 = ((x321&x322)-(x323<x324));

	if (t76 != 32639) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = 3536214;
	int8_t x326 = 6;
	int32_t x328 = -31;
	static volatile int32_t t77 = -219;

	t77 = ((x325&x326)-(x327<x328));

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 0U;
	static volatile uint16_t x330 = UINT16_MAX;
	uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t78 = -266007;

	t78 = ((x329&x330)-(x331<x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1;
	int32_t x334 = -4;
	static int32_t x335 = -1;
	uint8_t x336 = UINT8_MAX;
	int32_t t79 = 1;

	t79 = ((x333&x334)-(x335<x336));

	if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 820741702U;
	static uint32_t x338 = UINT32_MAX;
	int64_t x339 = INT64_MIN;
	volatile uint32_t t80 = 7U;

	t80 = ((x337&x338)-(x339<x340));

	if (t80 != 820741701U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x341 = INT16_MIN;
	int32_t x342 = -1;
	static uint16_t x343 = 3U;
	int8_t x344 = INT8_MAX;
	int32_t t81 = -42;

	t81 = ((x341&x342)-(x343<x344));

	if (t81 != -32769) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x346 = INT64_MIN;
	uint16_t x347 = 12960U;
	int64_t x348 = INT64_MIN;
	volatile int64_t t82 = -16370400141LL;

	t82 = ((x345&x346)-(x347<x348));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = -1;
	int64_t x351 = -15LL;
	int32_t x352 = INT32_MAX;

	t83 = ((x349&x350)-(x351<x352));

	if (t83 != -32769) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x354 = INT16_MIN;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t84 = -106;

	t84 = ((x353&x354)-(x355<x356));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 0U;
	int32_t x358 = INT32_MIN;
	uint32_t x359 = 65U;
	volatile int8_t x360 = -15;
	uint32_t t85 = UINT32_MAX;

	t85 = ((x357&x358)-(x359<x360));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x361 = 4905661LL;
	int8_t x362 = 39;
	static int32_t x363 = INT32_MIN;
	int8_t x364 = INT8_MIN;
	volatile int64_t t86 = 212LL;

	t86 = ((x361&x362)-(x363<x364));

	if (t86 != 36LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x365 = 780718431U;
	static int32_t x366 = 4537;
	volatile int64_t x368 = -1LL;
	volatile uint32_t t87 = 30675U;

	t87 = ((x365&x366)-(x367<x368));

	if (t87 != 4376U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x369 = INT32_MIN;
	int64_t x370 = INT64_MIN;
	volatile int8_t x372 = 25;
	int64_t t88 = INT64_MIN;

	t88 = ((x369&x370)-(x371<x372));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x374 = 80;
	int16_t x375 = 5;
	int64_t t89 = -213078295LL;

	t89 = ((x373&x374)-(x375<x376));

	if (t89 != 79LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	volatile uint64_t x378 = 1965LLU;
	int16_t x380 = -1;
	static uint64_t t90 = UINT64_MAX;

	t90 = ((x377&x378)-(x379<x380));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x381 = 222U;
	int16_t x383 = INT16_MIN;
	int16_t x384 = 1;
	int32_t t91 = 488974506;

	t91 = ((x381&x382)-(x383<x384));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = -32849240486579988LL;
	int64_t x386 = -2LL;
	volatile int8_t x387 = INT8_MIN;
	int64_t t92 = 3128849934400LL;

	t92 = ((x385&x386)-(x387<x388));

	if (t92 != -32849240486579988LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x389 = 2LLU;
	int64_t x390 = INT64_MAX;
	volatile uint64_t t93 = 9496815289LLU;

	t93 = ((x389&x390)-(x391<x392));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MAX;
	volatile uint16_t x394 = UINT16_MAX;
	int32_t x396 = INT32_MIN;
	static int32_t t94 = 0;

	t94 = ((x393&x394)-(x395<x396));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 3345U;
	int32_t x398 = INT32_MAX;
	int8_t x399 = 1;
	int64_t x400 = -1LL;
	static uint32_t t95 = 833U;

	t95 = ((x397&x398)-(x399<x400));

	if (t95 != 3345U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x401 = UINT64_MAX;
	volatile uint32_t x402 = UINT32_MAX;
	static int8_t x403 = INT8_MAX;
	volatile uint32_t x404 = 14355015U;
	volatile uint64_t t96 = 344583LLU;

	t96 = ((x401&x402)-(x403<x404));

	if (t96 != 4294967294LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = 2080162LL;
	volatile uint16_t x407 = 0U;
	int16_t x408 = INT16_MIN;
	volatile int64_t t97 = 167LL;

	t97 = ((x405&x406)-(x407<x408));

	if (t97 != 2080162LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x410 = 16455368957361178LLU;
	int32_t x411 = -201;
	int64_t x412 = -10002937959796LL;

	t98 = ((x409&x410)-(x411<x412));

	if (t98 != 26LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = INT64_MIN;
	uint32_t x414 = UINT32_MAX;
	static int16_t x415 = 1;
	int64_t t99 = -68643432521022651LL;

	t99 = ((x413&x414)-(x415<x416));

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

