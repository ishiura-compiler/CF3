#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 19039;
volatile int32_t t0 = INT32_MIN;
int8_t x15 = INT8_MAX;
volatile uint64_t x20 = 511732072393686744LLU;
volatile uint64_t t4 = UINT64_MAX;
int16_t x21 = -1;
int8_t x24 = INT8_MIN;
int32_t t5 = -6;
int8_t x25 = INT8_MIN;
volatile int32_t t9 = 38932184;
volatile int16_t x42 = -1;
volatile int32_t t10 = INT32_MIN;
static int8_t x52 = INT8_MIN;
volatile int64_t x54 = -14560616LL;
uint64_t t14 = 3656509LLU;
int16_t x75 = INT16_MIN;
uint32_t x84 = 3993394U;
int32_t t20 = -46295;
volatile int64_t t21 = INT64_MAX;
int8_t x93 = 1;
volatile uint16_t x95 = UINT16_MAX;
int32_t t23 = -227541;
int64_t x99 = -12637136035LL;
volatile uint8_t x103 = 7U;
int64_t t25 = 900075085249LL;
uint16_t x106 = 1U;
uint16_t x108 = 30834U;
static uint8_t x109 = 9U;
uint8_t x110 = 1U;
uint8_t x123 = 64U;
volatile int32_t t30 = -14624293;
int8_t x127 = INT8_MIN;
volatile int64_t t31 = INT64_MAX;
int32_t x130 = -6145340;
int32_t t33 = 325348;
volatile uint8_t x138 = 2U;
volatile int32_t t34 = 129911;
int64_t x141 = INT64_MIN;
uint8_t x142 = 6U;
uint32_t x145 = UINT32_MAX;
int16_t x148 = -1;
uint32_t x152 = 3281007U;
int64_t x153 = INT64_MAX;
volatile int8_t x155 = 44;
static volatile int8_t x160 = INT8_MIN;
int16_t x164 = INT16_MAX;
static volatile int64_t t40 = 34736523285862LL;
static volatile uint8_t x165 = UINT8_MAX;
int16_t x167 = 1;
int8_t x174 = INT8_MIN;
int32_t x177 = -448;
volatile uint32_t x190 = UINT32_MAX;
int16_t x198 = 14476;
int16_t x201 = -1;
static uint8_t x202 = 1U;
int32_t x204 = INT32_MIN;
int64_t x207 = -2065LL;
uint16_t x216 = 15501U;
volatile int16_t x220 = INT16_MIN;
static int8_t x233 = -1;
int16_t x236 = -1;
int32_t x240 = INT32_MAX;
static volatile int32_t t59 = -690;
uint16_t x241 = UINT16_MAX;
uint32_t x243 = 112559U;
int8_t x251 = INT8_MIN;
int32_t t64 = 3865;
int16_t x262 = INT16_MIN;
int64_t x264 = INT64_MIN;
static volatile uint16_t x269 = UINT16_MAX;
static volatile uint32_t x271 = UINT32_MAX;
volatile int8_t x276 = INT8_MIN;
int16_t x281 = -1;
uint16_t x287 = 3U;
int16_t x290 = INT16_MIN;
volatile int8_t x292 = 47;
static uint64_t t73 = UINT64_MAX;
int16_t x297 = -2156;
uint8_t x301 = 0U;
int64_t x312 = INT64_MIN;
int32_t t77 = 82487713;
int64_t x314 = 768468LL;
uint64_t x316 = 15870644893450LLU;
int32_t x328 = INT32_MIN;
static int64_t x341 = -49499800LL;
int16_t x343 = -1;
volatile int16_t x345 = INT16_MIN;
int8_t x348 = -15;
static volatile int32_t t86 = 26021;
uint32_t x349 = 11292U;
uint32_t t87 = 1280279U;
volatile int8_t x356 = 3;
static int8_t x361 = 53;
int16_t x362 = 453;
uint64_t x371 = 10LLU;
int8_t x373 = 0;
volatile int32_t t93 = 1338077;
volatile uint32_t t94 = 69036062U;
static uint64_t t95 = 720292964403LLU;
int16_t x388 = INT16_MIN;
int32_t t96 = 239;
int8_t x389 = -2;
static int32_t t97 = -9847379;
int16_t x393 = INT16_MIN;
int16_t x394 = INT16_MAX;
uint8_t x399 = 55U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint16_t x3 = 2U;
	int16_t x4 = -1;

	t0 = (x1+((x2&x3)==x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 3969932LLU;
	int64_t x6 = -1LL;
	uint16_t x7 = UINT16_MAX;
	int64_t x8 = INT64_MIN;
	volatile uint64_t t1 = 238681LLU;

	t1 = (x5+((x6&x7)==x8));

	if (t1 != 3969932LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static uint8_t x10 = UINT8_MAX;
	static volatile uint8_t x11 = UINT8_MAX;
	int8_t x12 = 3;
	static volatile int32_t t2 = INT32_MIN;

	t2 = (x9+((x10&x11)==x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 20U;
	int32_t x14 = INT32_MIN;
	uint64_t x16 = 1648539251080LLU;
	static volatile int32_t t3 = 88975;

	t3 = (x13+((x14&x15)==x16));

	if (t3 != 20) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	volatile int16_t x18 = 0;
	volatile int16_t x19 = -1;

	t4 = (x17+((x18&x19)==x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int32_t x23 = -1;

	t5 = (x21+((x22&x23)==x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -1;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MAX;
	static int32_t t6 = 7;

	t6 = (x25+((x26&x27)==x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	static int64_t x30 = INT64_MAX;
	static int16_t x31 = -5;
	uint16_t x32 = 77U;
	volatile int32_t t7 = 5352;

	t7 = (x29+((x30&x31)==x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MAX;
	static int32_t x34 = 44644166;
	volatile int64_t x35 = -3380819017247876517LL;
	volatile int16_t x36 = INT16_MAX;
	static int64_t t8 = INT64_MAX;

	t8 = (x33+((x34&x35)==x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	static uint8_t x38 = UINT8_MAX;
	volatile int32_t x39 = INT32_MIN;
	uint32_t x40 = 1489U;

	t9 = (x37+((x38&x39)==x40));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = INT32_MIN;
	volatile uint32_t x43 = 1312U;
	static volatile uint32_t x44 = UINT32_MAX;

	t10 = (x41+((x42&x43)==x44));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 7U;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = -6381;
	uint32_t x48 = 0U;
	static volatile uint32_t t11 = 2437659U;

	t11 = (x45+((x46&x47)==x48));

	if (t11 != 7U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -43;
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = -32;
	int32_t t12 = 122;

	t12 = (x49+((x50&x51)==x52));

	if (t12 != -43) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int16_t x55 = -1;
	uint16_t x56 = 1227U;
	volatile int32_t t13 = INT32_MAX;

	t13 = (x53+((x54&x55)==x56));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 11715898169004LLU;
	int64_t x58 = INT64_MAX;
	int16_t x59 = -1;
	uint16_t x60 = 16125U;

	t14 = (x57+((x58&x59)==x60));

	if (t14 != 11715898169004LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	volatile int8_t x62 = INT8_MIN;
	uint32_t x63 = 43059138U;
	uint8_t x64 = 1U;
	int64_t t15 = INT64_MAX;

	t15 = (x61+((x62&x63)==x64));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	static uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MAX;
	volatile int64_t x68 = INT64_MIN;
	int32_t t16 = 19744;

	t16 = (x65+((x66&x67)==x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 14787U;
	int16_t x70 = INT16_MAX;
	int32_t x71 = INT32_MIN;
	volatile uint8_t x72 = 13U;
	volatile int32_t t17 = 64110;

	t17 = (x69+((x70&x71)==x72));

	if (t17 != 14787) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = 1LL;
	int16_t x74 = 3495;
	int16_t x76 = INT16_MIN;
	static volatile int64_t t18 = -2721LL;

	t18 = (x73+((x74&x75)==x76));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MAX;
	static int64_t x79 = INT64_MIN;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x77+((x78&x79)==x80));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -6;
	int64_t x82 = -1LL;
	int32_t x83 = -139;

	t20 = (x81+((x82&x83)==x84));

	if (t20 != -6) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int64_t x86 = -11LL;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = 36;

	t21 = (x85+((x86&x87)==x88));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -18410292316611881LL;
	int32_t x90 = INT32_MIN;
	int16_t x91 = -11899;
	volatile int8_t x92 = -1;
	static volatile int64_t t22 = 157183642613LL;

	t22 = (x89+((x90&x91)==x92));

	if (t22 != -18410292316611881LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 12903513;
	int32_t x96 = -1;

	t23 = (x93+((x94&x95)==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	int16_t x98 = INT16_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	int32_t t24 = -1;

	t24 = (x97+((x98&x99)==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x101 = -1LL;
	int32_t x102 = INT32_MIN;
	int64_t x104 = INT64_MIN;

	t25 = (x101+((x102&x103)==x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 3760;
	int8_t x107 = INT8_MIN;
	static int32_t t26 = -60987938;

	t26 = (x105+((x106&x107)==x108));

	if (t26 != 3760) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x111 = -1LL;
	int32_t x112 = 714178;
	volatile int32_t t27 = 311;

	t27 = (x109+((x110&x111)==x112));

	if (t27 != 9) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	static int16_t x114 = INT16_MAX;
	int64_t x115 = 1804209489582965664LL;
	static int64_t x116 = INT64_MAX;
	int32_t t28 = 9199;

	t28 = (x113+((x114&x115)==x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 135U;
	static uint32_t x118 = UINT32_MAX;
	volatile int16_t x119 = INT16_MIN;
	uint64_t x120 = 2252308719658126LLU;
	volatile int32_t t29 = -37018;

	t29 = (x117+((x118&x119)==x120));

	if (t29 != 135) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	uint8_t x122 = 2U;
	int64_t x124 = -1LL;

	t30 = (x121+((x122&x123)==x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MAX;
	int32_t x126 = -1;
	int32_t x128 = INT32_MAX;

	t31 = (x125+((x126&x127)==x128));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int8_t x131 = -1;
	volatile uint64_t x132 = 6306621669469189LLU;
	int64_t t32 = INT64_MIN;

	t32 = (x129+((x130&x131)==x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x134 = 2589;
	int8_t x135 = INT8_MIN;
	static volatile int16_t x136 = 0;

	t33 = (x133+((x134&x135)==x136));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x137 = INT16_MAX;
	static uint64_t x139 = UINT64_MAX;
	int8_t x140 = -1;

	t34 = (x137+((x138&x139)==x140));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x143 = INT16_MAX;
	volatile int32_t x144 = -877224;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x141+((x142&x143)==x144));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x146 = INT8_MIN;
	int32_t x147 = 14;
	uint32_t t36 = UINT32_MAX;

	t36 = (x145+((x146&x147)==x148));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint64_t x151 = 6775729447604365065LLU;
	volatile int32_t t37 = 5;

	t37 = (x149+((x150&x151)==x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	uint32_t x156 = 12857007U;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x153+((x154&x155)==x156));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	static int16_t x158 = INT16_MIN;
	int16_t x159 = 1;
	volatile int32_t t39 = 2885;

	t39 = (x157+((x158&x159)==x160));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	volatile uint16_t x162 = UINT16_MAX;
	int32_t x163 = INT32_MIN;

	t40 = (x161+((x162&x163)==x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MIN;
	int64_t x168 = -1LL;
	int32_t t41 = 10016;

	t41 = (x165+((x166&x167)==x168));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	static uint16_t x170 = 3U;
	volatile uint32_t x171 = 557007930U;
	uint64_t x172 = 12LLU;
	int64_t t42 = INT64_MAX;

	t42 = (x169+((x170&x171)==x172));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 45;
	uint32_t x175 = 249869U;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t43 = 270839091;

	t43 = (x173+((x174&x175)==x176));

	if (t43 != 45) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -2;
	uint16_t x179 = UINT16_MAX;
	static volatile int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 44668039;

	t44 = (x177+((x178&x179)==x180));

	if (t44 != -448) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 17839U;
	static uint8_t x182 = UINT8_MAX;
	int64_t x183 = -1LL;
	volatile uint64_t x184 = 63468781775LLU;
	uint32_t t45 = 1170U;

	t45 = (x181+((x182&x183)==x184));

	if (t45 != 17839U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 52319125U;
	static int64_t x186 = -1LL;
	int16_t x187 = -12867;
	int8_t x188 = -1;
	volatile uint32_t t46 = 20U;

	t46 = (x185+((x186&x187)==x188));

	if (t46 != 52319125U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = 10U;
	int8_t x191 = INT8_MIN;
	volatile int8_t x192 = INT8_MIN;
	int32_t t47 = -26382;

	t47 = (x189+((x190&x191)==x192));

	if (t47 != 11) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	int8_t x194 = 35;
	uint8_t x195 = 3U;
	int8_t x196 = INT8_MAX;
	int32_t t48 = INT32_MAX;

	t48 = (x193+((x194&x195)==x196));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 9U;
	int64_t x199 = INT64_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = -159393476;

	t49 = (x197+((x198&x199)==x200));

	if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x203 = 54U;
	static int32_t t50 = 1167163;

	t50 = (x201+((x202&x203)==x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -1;
	int64_t x206 = 3LL;
	int64_t x208 = INT64_MAX;
	static volatile int32_t t51 = 1;

	t51 = (x205+((x206&x207)==x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 2;
	volatile int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	static int32_t x212 = INT32_MIN;
	int32_t t52 = -102453;

	t52 = (x209+((x210&x211)==x212));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	volatile int16_t x214 = 85;
	int32_t x215 = -1;
	volatile int32_t t53 = 969433705;

	t53 = (x213+((x214&x215)==x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int64_t x218 = -1LL;
	uint32_t x219 = 202732U;
	int32_t t54 = INT32_MAX;

	t54 = (x217+((x218&x219)==x220));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 146446750756LLU;
	static int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	static int64_t x224 = INT64_MIN;
	uint64_t t55 = 14907LLU;

	t55 = (x221+((x222&x223)==x224));

	if (t55 != 146446750756LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 3LL;
	uint16_t x226 = 13837U;
	int64_t x227 = -1146483066949850LL;
	int16_t x228 = -1;
	int64_t t56 = 625408488086385LL;

	t56 = (x225+((x226&x227)==x228));

	if (t56 != 3LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 438471U;
	uint64_t x230 = 8500106LLU;
	int64_t x231 = INT64_MIN;
	int64_t x232 = -38754021LL;
	volatile uint32_t t57 = 2110U;

	t57 = (x229+((x230&x231)==x232));

	if (t57 != 438471U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x234 = 3U;
	volatile uint16_t x235 = 12413U;
	int32_t t58 = -950713;

	t58 = (x233+((x234&x235)==x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 62U;
	int16_t x238 = INT16_MAX;
	static int8_t x239 = -1;

	t59 = (x237+((x238&x239)==x240));

	if (t59 != 62) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = 0;
	static uint8_t x244 = 28U;
	volatile int32_t t60 = -1039635;

	t60 = (x241+((x242&x243)==x244));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MAX;
	volatile int32_t x247 = -1;
	volatile int8_t x248 = -7;
	static int32_t t61 = INT32_MIN;

	t61 = (x245+((x246&x247)==x248));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 52993LLU;
	int32_t x250 = INT32_MAX;
	int16_t x252 = INT16_MIN;
	uint64_t t62 = 1322774LLU;

	t62 = (x249+((x250&x251)==x252));

	if (t62 != 52993LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -1LL;
	volatile int16_t x254 = -400;
	volatile int64_t x255 = INT64_MIN;
	int64_t x256 = -1LL;
	static volatile int64_t t63 = 557141553582260890LL;

	t63 = (x253+((x254&x255)==x256));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	volatile int8_t x260 = INT8_MAX;

	t64 = (x257+((x258&x259)==x260));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 871568665624LLU;
	int8_t x263 = INT8_MIN;
	static volatile uint64_t t65 = 68LLU;

	t65 = (x261+((x262&x263)==x264));

	if (t65 != 871568665624LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	int8_t x266 = -1;
	int16_t x267 = 0;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = INT32_MIN;

	t66 = (x265+((x266&x267)==x268));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MAX;
	int64_t x272 = -1LL;
	int32_t t67 = -350253729;

	t67 = (x269+((x270&x271)==x272));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int32_t x274 = 47856;
	int32_t x275 = INT32_MIN;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x273+((x274&x275)==x276));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 30647814511029343LLU;
	static volatile int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;
	int16_t x280 = -1;
	volatile uint64_t t69 = 242587080998LLU;

	t69 = (x277+((x278&x279)==x280));

	if (t69 != 30647814511029343LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 12191570746LLU;
	uint64_t x284 = 178LLU;
	int32_t t70 = -195991;

	t70 = (x281+((x282&x283)==x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = -1LL;
	int32_t x286 = INT32_MIN;
	volatile uint8_t x288 = 86U;
	static int64_t t71 = 482925049008085LL;

	t71 = (x285+((x286&x287)==x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	uint64_t x291 = 3225898105379558LLU;
	volatile int32_t t72 = 1055567416;

	t72 = (x289+((x290&x291)==x292));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x294 = 62;
	int16_t x295 = INT16_MIN;
	int8_t x296 = 5;

	t73 = (x293+((x294&x295)==x296));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = 0LL;
	int32_t x299 = INT32_MAX;
	static uint64_t x300 = 500246982518844LLU;
	volatile int32_t t74 = 2378;

	t74 = (x297+((x298&x299)==x300));

	if (t74 != -2156) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MIN;
	static uint32_t x303 = UINT32_MAX;
	uint32_t x304 = UINT32_MAX;
	static volatile int32_t t75 = 5499;

	t75 = (x301+((x302&x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	static uint32_t x308 = UINT32_MAX;
	static volatile uint64_t t76 = UINT64_MAX;

	t76 = (x305+((x306&x307)==x308));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = 23U;
	int64_t x310 = 93291748LL;
	int16_t x311 = -1;

	t77 = (x309+((x310&x311)==x312));

	if (t77 != 23) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 64U;
	int8_t x315 = INT8_MIN;
	volatile int32_t t78 = 83728;

	t78 = (x313+((x314&x315)==x316));

	if (t78 != 64) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 31U;
	uint32_t x318 = 32192U;
	int16_t x319 = 7;
	volatile int64_t x320 = INT64_MIN;
	static volatile int32_t t79 = 73;

	t79 = (x317+((x318&x319)==x320));

	if (t79 != 31) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = 46;
	volatile int16_t x322 = 15433;
	uint64_t x323 = 16187LLU;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 1289;

	t80 = (x321+((x322&x323)==x324));

	if (t80 != 46) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MIN;
	int32_t x327 = -3;
	static volatile int32_t t81 = 702;

	t81 = (x325+((x326&x327)==x328));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -1;
	static uint64_t x330 = 120LLU;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = 1U;
	static int32_t t82 = 368558;

	t82 = (x329+((x330&x331)==x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = 14715296U;
	int32_t x334 = -1;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	volatile uint32_t t83 = 9U;

	t83 = (x333+((x334&x335)==x336));

	if (t83 != 14715296U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 26LLU;
	int32_t x338 = INT32_MAX;
	int8_t x339 = -1;
	volatile int8_t x340 = 1;
	volatile uint64_t t84 = 203219918009579214LLU;

	t84 = (x337+((x338&x339)==x340));

	if (t84 != 26LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x342 = 16969U;
	uint32_t x344 = 30U;
	volatile int64_t t85 = -29358286667060LL;

	t85 = (x341+((x342&x343)==x344));

	if (t85 != -49499800LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 120474600935LLU;
	int64_t x347 = INT64_MIN;

	t86 = (x345+((x346&x347)==x348));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = 0;
	static uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MIN;

	t87 = (x349+((x350&x351)==x352));

	if (t87 != 11292U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	static volatile int32_t x354 = -1;
	uint32_t x355 = 437950U;
	int32_t t88 = -74894;

	t88 = (x353+((x354&x355)==x356));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int64_t x358 = -1LL;
	uint64_t x359 = 3704691950943LLU;
	volatile int32_t x360 = 1966;
	static int32_t t89 = 0;

	t89 = (x357+((x358&x359)==x360));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x363 = INT8_MIN;
	static int16_t x364 = -2620;
	volatile int32_t t90 = 3091735;

	t90 = (x361+((x362&x363)==x364));

	if (t90 != 53) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	static uint32_t x366 = 788U;
	int16_t x367 = 0;
	static int64_t x368 = -29045904LL;
	static int64_t t91 = INT64_MIN;

	t91 = (x365+((x366&x367)==x368));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 56U;
	static uint16_t x370 = 1U;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = -7311;

	t92 = (x369+((x370&x371)==x372));

	if (t92 != 56) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x374 = INT64_MAX;
	int32_t x375 = INT32_MIN;
	volatile int8_t x376 = -1;

	t93 = (x373+((x374&x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 1094U;
	uint16_t x378 = UINT16_MAX;
	uint8_t x379 = UINT8_MAX;
	static volatile int32_t x380 = INT32_MAX;

	t94 = (x377+((x378&x379)==x380));

	if (t94 != 1094U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 19572752866906LLU;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 1322351809U;
	uint8_t x384 = UINT8_MAX;

	t95 = (x381+((x382&x383)==x384));

	if (t95 != 19572752866906LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -23;
	uint32_t x386 = 30714351U;
	uint32_t x387 = UINT32_MAX;

	t96 = (x385+((x386&x387)==x388));

	if (t96 != -23) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x390 = 0U;
	static int8_t x391 = INT8_MIN;
	uint16_t x392 = 20927U;

	t97 = (x389+((x390&x391)==x392));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x395 = 1U;
	int64_t x396 = 92639478164LL;
	static int32_t t98 = -1373479;

	t98 = (x393+((x394&x395)==x396));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -405367005291658LL;
	int16_t x398 = -163;
	int8_t x400 = 0;
	int64_t t99 = 1LL;

	t99 = (x397+((x398&x399)==x400));

	if (t99 != -405367005291658LL) { NG(); } else { ; }
	
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

