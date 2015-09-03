#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = 12600;
uint16_t x10 = UINT16_MAX;
uint8_t x23 = 2U;
static volatile uint16_t x25 = UINT16_MAX;
int16_t x26 = 14;
int8_t x37 = -25;
int64_t t10 = 61491LL;
volatile int64_t x48 = -1928LL;
int16_t x53 = 4;
uint32_t x54 = 297138U;
volatile uint8_t x55 = UINT8_MAX;
uint16_t x60 = 1U;
int16_t x71 = INT16_MAX;
static int64_t x76 = -852159267161LL;
volatile int32_t t18 = 19456462;
int16_t x80 = -1;
int32_t t19 = 1;
int64_t x86 = INT64_MIN;
int16_t x95 = INT16_MAX;
int32_t t24 = 0;
static volatile int32_t t25 = -11447;
uint64_t x108 = 774566LLU;
static uint8_t x110 = 14U;
int64_t t29 = 31667LL;
uint8_t x128 = UINT8_MAX;
volatile int32_t t31 = 486;
static int16_t x136 = -1;
int32_t x138 = INT32_MIN;
int32_t x140 = INT32_MIN;
static int16_t x144 = -311;
int64_t x148 = INT64_MIN;
uint16_t x149 = 22U;
int16_t x151 = -5826;
uint32_t x152 = 27060641U;
int32_t t39 = 15561564;
int64_t x170 = 783LL;
volatile int8_t x171 = 0;
uint64_t x172 = 6395806851506LLU;
int8_t x173 = -1;
static int8_t x179 = -3;
int8_t x180 = -1;
volatile int64_t x184 = -1LL;
int8_t x186 = INT8_MIN;
volatile int64_t x189 = INT64_MIN;
uint8_t x190 = 15U;
static volatile uint16_t x195 = UINT16_MAX;
int64_t x204 = INT64_MIN;
static uint8_t x206 = 40U;
static volatile int8_t x217 = 21;
int16_t x220 = INT16_MIN;
uint8_t x221 = 61U;
static int8_t x224 = INT8_MAX;
int8_t x227 = 1;
uint32_t x229 = 0U;
uint64_t x230 = UINT64_MAX;
uint64_t x231 = UINT64_MAX;
volatile uint32_t x232 = 839041U;
uint16_t x257 = 5347U;
uint64_t x260 = UINT64_MAX;
int32_t x272 = INT32_MIN;
int16_t x279 = INT16_MAX;
int8_t x286 = 1;
int16_t x294 = -1;
int64_t x298 = INT64_MIN;
int64_t x299 = INT64_MIN;
int64_t x304 = 1LL;
uint32_t x307 = 87350U;
volatile int32_t t76 = 0;
int64_t x309 = INT64_MAX;
static uint8_t x311 = 3U;
volatile int64_t x312 = 337756306LL;
int32_t t79 = -15;
static volatile uint64_t x327 = 142356165260300720LLU;
uint32_t x332 = 113349181U;
static int64_t x333 = -3371692590564LL;
static uint8_t x340 = 5U;
volatile uint64_t x361 = 1124387853904645272LLU;
volatile uint64_t t90 = 157039200997LLU;
volatile uint16_t x367 = 3440U;
volatile int32_t t91 = -31;
int32_t x371 = -1;
int8_t x373 = -1;
static volatile int64_t x376 = 252844LL;
static int64_t x377 = -269050332762LL;
static uint32_t x381 = UINT32_MAX;
static int64_t x388 = -148103183923301274LL;
int32_t x390 = INT32_MAX;
int8_t x392 = -2;
int32_t t99 = 238656;


void f0(void) {
	volatile uint32_t x1 = 85898U;
	volatile uint8_t x2 = 1U;
	static int32_t x4 = -1;
	static uint32_t t0 = 362568177U;

	t0 = (x1*((x2&x3)==x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 10495707LL;
	int64_t x6 = INT64_MIN;
	uint16_t x7 = 29U;
	volatile int64_t x8 = -1LL;
	volatile int64_t t1 = 23LL;

	t1 = (x5*((x6&x7)==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -3080184918LL;
	int32_t x11 = INT32_MAX;
	static int16_t x12 = -7;
	volatile int64_t t2 = 349488393744LL;

	t2 = (x9*((x10&x11)==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int8_t x14 = -2;
	int64_t x15 = -25469790526LL;
	int16_t x16 = 5771;
	volatile int32_t t3 = -432;

	t3 = (x13*((x14&x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static int16_t x18 = INT16_MIN;
	uint16_t x19 = 1U;
	volatile uint16_t x20 = UINT16_MAX;
	int32_t t4 = 1282;

	t4 = (x17*((x18&x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 7686048;

	t5 = (x21*((x22&x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x27 = 1907U;
	uint8_t x28 = 0U;
	static int32_t t6 = 2655;

	t6 = (x25*((x26&x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	volatile int32_t x30 = -1;
	int16_t x31 = -1;
	uint8_t x32 = 2U;
	static volatile int32_t t7 = -21196502;

	t7 = (x29*((x30&x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 9272829065889LLU;
	int32_t x34 = -1;
	volatile int16_t x35 = 246;
	volatile uint16_t x36 = 408U;
	uint64_t t8 = 61258454217LLU;

	t8 = (x33*((x34&x35)==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x38 = 16377U;
	volatile int16_t x39 = INT16_MIN;
	volatile int64_t x40 = -1LL;
	volatile int32_t t9 = 135680778;

	t9 = (x37*((x38&x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MAX;
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MIN;
	volatile int64_t x44 = INT64_MIN;

	t10 = (x41*((x42&x43)==x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int16_t x46 = -1;
	static uint8_t x47 = UINT8_MAX;
	volatile int32_t t11 = 3276;

	t11 = (x45*((x46&x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	int8_t x50 = -1;
	uint64_t x51 = UINT64_MAX;
	int64_t x52 = -1LL;
	volatile int32_t t12 = -2782045;

	t12 = (x49*((x50&x51)==x52));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x56 = 2233826754061085LLU;
	static int32_t t13 = -14584;

	t13 = (x53*((x54&x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -898619;
	int64_t x58 = INT64_MAX;
	int16_t x59 = INT16_MIN;
	static int32_t t14 = 3674;

	t14 = (x57*((x58&x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = 138953128220365LL;
	int64_t x62 = INT64_MAX;
	int32_t x63 = INT32_MIN;
	static int32_t x64 = INT32_MIN;
	int64_t t15 = 171280755417614LL;

	t15 = (x61*((x62&x63)==x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	static volatile int32_t x66 = INT32_MIN;
	int64_t x67 = -1LL;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = 48;

	t16 = (x65*((x66&x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	uint64_t x70 = UINT64_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -45003;

	t17 = (x69*((x70&x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 153U;
	volatile uint32_t x74 = UINT32_MAX;
	uint16_t x75 = UINT16_MAX;

	t18 = (x73*((x74&x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	int64_t x78 = -2734346083231LL;
	int8_t x79 = INT8_MIN;

	t19 = (x77*((x78&x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = 1895;
	uint16_t x83 = UINT16_MAX;
	static uint32_t x84 = UINT32_MAX;
	static int64_t t20 = 93154455510744684LL;

	t20 = (x81*((x82&x83)==x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	uint16_t x87 = UINT16_MAX;
	static uint16_t x88 = 8355U;
	int32_t t21 = -182808;

	t21 = (x85*((x86&x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 21207U;
	uint16_t x90 = 3U;
	uint64_t x91 = 599773305828391LLU;
	uint16_t x92 = 1969U;
	uint32_t t22 = 17624U;

	t22 = (x89*((x90&x91)==x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = -11809LL;
	int64_t x96 = INT64_MAX;
	int64_t t23 = 18654833LL;

	t23 = (x93*((x94&x95)==x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MAX;
	int32_t x99 = -1638290;
	int16_t x100 = INT16_MAX;

	t24 = (x97*((x98&x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 29U;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -1;
	int16_t x104 = INT16_MAX;

	t25 = (x101*((x102&x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 1722825231042LLU;
	int8_t x106 = 0;
	uint8_t x107 = 11U;
	uint64_t t26 = 15905609997494225LLU;

	t26 = (x105*((x106&x107)==x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 6;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = 1930;

	t27 = (x109*((x110&x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	uint64_t x114 = 1356725729350805LLU;
	static int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -126857277841LL;

	t28 = (x113*((x114&x115)==x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 33778287279236LL;
	volatile int32_t x118 = INT32_MIN;
	uint16_t x119 = 1U;
	uint16_t x120 = UINT16_MAX;

	t29 = (x117*((x118&x119)==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = 2242U;
	static volatile uint16_t x123 = UINT16_MAX;
	uint16_t x124 = UINT16_MAX;
	static int32_t t30 = -15136;

	t30 = (x121*((x122&x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -14;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = 1232U;

	t31 = (x125*((x126&x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 631;
	int32_t x130 = -1;
	int16_t x131 = -1;
	int64_t x132 = -1LL;
	int32_t t32 = 465796501;

	t32 = (x129*((x130&x131)==x132));

	if (t32 != 631) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 249U;
	volatile int64_t x134 = 840860783817240732LL;
	int16_t x135 = -1679;
	int32_t t33 = -777021;

	t33 = (x133*((x134&x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 1;
	int64_t x139 = INT64_MAX;
	static volatile int32_t t34 = 7;

	t34 = (x137*((x138&x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MAX;
	int16_t x143 = -1;
	int32_t t35 = 140912814;

	t35 = (x141*((x142&x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int32_t x146 = -509;
	uint64_t x147 = 7528LLU;
	static int64_t t36 = 3377598LL;

	t36 = (x145*((x146&x147)==x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = UINT32_MAX;
	volatile int32_t t37 = 1;

	t37 = (x149*((x150&x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	uint64_t x155 = 29LLU;
	uint64_t x156 = 13100710LLU;
	int32_t t38 = 0;

	t38 = (x153*((x154&x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	volatile int64_t x158 = -7489LL;
	uint32_t x159 = 13904479U;
	volatile uint8_t x160 = 72U;

	t39 = (x157*((x158&x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	volatile uint64_t x162 = 301754688028LLU;
	static int64_t x163 = 97771555LL;
	static int8_t x164 = -10;
	int32_t t40 = -52076917;

	t40 = (x161*((x162&x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int32_t x166 = 4796;
	static uint32_t x167 = 154U;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 0;

	t41 = (x165*((x166&x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 5539U;
	volatile int32_t t42 = 1;

	t42 = (x169*((x170&x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x174 = 1004U;
	uint32_t x175 = 1606625719U;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -23432919;

	t43 = (x173*((x174&x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -1;
	volatile int32_t x178 = 238391414;
	static volatile int32_t t44 = -3;

	t44 = (x177*((x178&x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	volatile uint32_t x182 = 187U;
	static uint64_t x183 = 14814960120504LLU;
	int32_t t45 = 21966301;

	t45 = (x181*((x182&x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = UINT64_MAX;
	static uint8_t x187 = 32U;
	static int8_t x188 = -1;
	static volatile uint64_t t46 = 425194818318948LLU;

	t46 = (x185*((x186&x187)==x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x191 = UINT8_MAX;
	volatile int64_t x192 = -15628400LL;
	int64_t t47 = -7263102811028626LL;

	t47 = (x189*((x190&x191)==x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 2021U;
	int16_t x194 = INT16_MIN;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = -17;

	t48 = (x193*((x194&x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 1074722926497LLU;
	static int8_t x198 = -4;
	int64_t x199 = -1089LL;
	uint8_t x200 = 3U;
	uint64_t t49 = 6LLU;

	t49 = (x197*((x198&x199)==x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x202 = 504U;
	uint8_t x203 = 99U;
	int64_t t50 = 2812LL;

	t50 = (x201*((x202&x203)==x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int64_t x207 = -579690173467200190LL;
	int64_t x208 = INT64_MIN;
	volatile int32_t t51 = 437232384;

	t51 = (x205*((x206&x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 3LLU;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 6U;
	uint16_t x212 = 8544U;
	static volatile uint64_t t52 = 1448798743448LLU;

	t52 = (x209*((x210&x211)==x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	uint8_t x215 = UINT8_MAX;
	static int16_t x216 = INT16_MAX;
	static int32_t t53 = -19938;

	t53 = (x213*((x214&x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = UINT8_MAX;
	int64_t x219 = INT64_MAX;
	int32_t t54 = -164189;

	t54 = (x217*((x218&x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = 2166;
	volatile uint32_t x223 = UINT32_MAX;
	int32_t t55 = -26;

	t55 = (x221*((x222&x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -1;
	static uint16_t x226 = 220U;
	uint32_t x228 = 1458U;
	volatile int32_t t56 = -11059;

	t56 = (x225*((x226&x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t t57 = 302387U;

	t57 = (x229*((x230&x231)==x232));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = 12U;
	volatile int8_t x236 = -1;
	volatile int32_t t58 = 319493440;

	t58 = (x233*((x234&x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	static uint16_t x238 = 58U;
	uint16_t x239 = 3793U;
	static int16_t x240 = INT16_MIN;
	static volatile int32_t t59 = -35;

	t59 = (x237*((x238&x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = 107570343789219LLU;
	int16_t x242 = INT16_MAX;
	static uint64_t x243 = 53796894440LLU;
	uint32_t x244 = 255759U;
	static volatile uint64_t t60 = 683004536778LLU;

	t60 = (x241*((x242&x243)==x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = 3550;
	static int64_t x246 = INT64_MIN;
	int32_t x247 = 88;
	uint16_t x248 = 3604U;
	int32_t t61 = -751;

	t61 = (x245*((x246&x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MIN;
	volatile uint32_t x250 = 7644435U;
	static int32_t x251 = -1;
	volatile int32_t x252 = 401801;
	volatile int64_t t62 = -98180054812966112LL;

	t62 = (x249*((x250&x251)==x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MIN;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = 7LL;
	int64_t x256 = 7744674475414LL;
	static int32_t t63 = -2185;

	t63 = (x253*((x254&x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -1LL;
	uint8_t x259 = UINT8_MAX;
	static int32_t t64 = 40280;

	t64 = (x257*((x258&x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	volatile int8_t x262 = INT8_MAX;
	static int16_t x263 = -1;
	int8_t x264 = -1;
	int32_t t65 = -5332340;

	t65 = (x261*((x262&x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	uint32_t x266 = 563U;
	int16_t x267 = 3117;
	int32_t x268 = INT32_MAX;
	int64_t t66 = 917680860806LL;

	t66 = (x265*((x266&x267)==x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	uint16_t x270 = 9U;
	uint64_t x271 = 51862416938LLU;
	volatile int32_t t67 = 1;

	t67 = (x269*((x270&x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = -1LL;
	int32_t x275 = INT32_MAX;
	uint64_t x276 = 855LLU;
	volatile int64_t t68 = -18445517440107LL;

	t68 = (x273*((x274&x275)==x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = UINT32_MAX;
	volatile int16_t x278 = INT16_MIN;
	static int16_t x280 = INT16_MAX;
	uint32_t t69 = 36317U;

	t69 = (x277*((x278&x279)==x280));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 21U;
	int32_t x282 = 41;
	int32_t x283 = INT32_MAX;
	int64_t x284 = INT64_MAX;
	static volatile int32_t t70 = -82990741;

	t70 = (x281*((x282&x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 3064934LLU;
	int8_t x287 = -1;
	static int8_t x288 = INT8_MIN;
	uint64_t t71 = 74LLU;

	t71 = (x285*((x286&x287)==x288));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	volatile uint16_t x290 = UINT16_MAX;
	static int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MAX;
	int32_t t72 = 687776;

	t72 = (x289*((x290&x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x295 = INT64_MAX;
	static int8_t x296 = 55;
	uint64_t t73 = 2168917460LLU;

	t73 = (x293*((x294&x295)==x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = -11;
	int16_t x300 = -5;
	static int32_t t74 = -4;

	t74 = (x297*((x298&x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -3;
	volatile int64_t x302 = INT64_MIN;
	int32_t x303 = INT32_MIN;
	int32_t t75 = 423;

	t75 = (x301*((x302&x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	int8_t x306 = INT8_MAX;
	uint64_t x308 = UINT64_MAX;

	t76 = (x305*((x306&x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MIN;
	volatile int64_t t77 = -48369456LL;

	t77 = (x309*((x310&x311)==x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	static int8_t x316 = -20;
	volatile uint32_t t78 = 738U;

	t78 = (x313*((x314&x315)==x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MAX;
	int32_t x319 = -1;
	volatile int16_t x320 = -23;

	t79 = (x317*((x318&x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 5121800318040LLU;
	int64_t x322 = INT64_MIN;
	static uint8_t x323 = UINT8_MAX;
	static uint64_t x324 = 1LLU;
	volatile uint64_t t80 = 432956719642909457LLU;

	t80 = (x321*((x322&x323)==x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	static int16_t x326 = -15453;
	int32_t x328 = 5614486;
	int32_t t81 = -1605469;

	t81 = (x325*((x326&x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int32_t x330 = 780;
	uint64_t x331 = UINT64_MAX;
	static int32_t t82 = -1;

	t82 = (x329*((x330&x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x334 = 22U;
	int8_t x335 = INT8_MAX;
	uint32_t x336 = UINT32_MAX;
	volatile int64_t t83 = -3572663216851442LL;

	t83 = (x333*((x334&x335)==x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	uint64_t x338 = 13315999464LLU;
	int32_t x339 = INT32_MIN;
	static int32_t t84 = -117860;

	t84 = (x337*((x338&x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 3155U;
	static volatile int8_t x342 = INT8_MIN;
	static uint8_t x343 = 44U;
	volatile uint16_t x344 = 18000U;
	volatile uint32_t t85 = 25U;

	t85 = (x341*((x342&x343)==x344));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = -1;
	int32_t x346 = INT32_MIN;
	static uint16_t x347 = 12U;
	static uint64_t x348 = UINT64_MAX;
	static int32_t t86 = -6;

	t86 = (x345*((x346&x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 49U;
	static int64_t x350 = 6367LL;
	static int64_t x351 = 9384538LL;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t87 = -7425;

	t87 = (x349*((x350&x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MAX;
	static int32_t x354 = -40954;
	static int16_t x355 = INT16_MAX;
	volatile int32_t x356 = 634256;
	volatile int64_t t88 = 3473218394171LL;

	t88 = (x353*((x354&x355)==x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	static int32_t x358 = 10969;
	uint32_t x359 = 2827930U;
	int64_t x360 = INT64_MAX;
	int32_t t89 = -2;

	t89 = (x357*((x358&x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	int8_t x363 = -1;
	int8_t x364 = INT8_MIN;

	t90 = (x361*((x362&x363)==x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	static int16_t x366 = INT16_MAX;
	int8_t x368 = INT8_MIN;

	t91 = (x365*((x366&x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 323LL;
	volatile int16_t x370 = 0;
	uint32_t x372 = UINT32_MAX;
	static volatile int64_t t92 = -24369199567LL;

	t92 = (x369*((x370&x371)==x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = 19U;
	int16_t x375 = INT16_MIN;
	volatile int32_t t93 = -16830031;

	t93 = (x373*((x374&x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	volatile int16_t x380 = INT16_MAX;
	int64_t t94 = -499207311534LL;

	t94 = (x377*((x378&x379)==x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x382 = 101U;
	volatile int32_t x383 = -1;
	int8_t x384 = -7;
	uint32_t t95 = 0U;

	t95 = (x381*((x382&x383)==x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = UINT32_MAX;
	uint64_t x386 = 318629535285LLU;
	int32_t x387 = INT32_MIN;
	static volatile uint32_t t96 = 108832U;

	t96 = (x385*((x386&x387)==x388));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	static int64_t x391 = -1LL;
	int32_t t97 = 1;

	t97 = (x389*((x390&x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = 2U;
	volatile uint64_t x394 = 14LLU;
	uint8_t x395 = 3U;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t98 = -26;

	t98 = (x393*((x394&x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	static volatile int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MAX;

	t99 = (x397*((x398&x399)==x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

