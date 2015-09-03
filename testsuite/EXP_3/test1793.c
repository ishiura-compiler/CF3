#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MAX;
static int32_t t0 = -3;
static uint32_t t1 = 210437U;
static volatile int8_t x9 = -1;
int16_t x11 = INT16_MIN;
int32_t t2 = 286;
int32_t x13 = INT32_MIN;
uint8_t x22 = 1U;
volatile uint64_t t5 = 1LLU;
int16_t x27 = INT16_MAX;
static int32_t x30 = -1;
int16_t x32 = INT16_MIN;
volatile int32_t t7 = 13417;
int64_t x33 = INT64_MIN;
int32_t x36 = -491014162;
int32_t t8 = 28398;
uint32_t x38 = 31274953U;
volatile int32_t x39 = INT32_MIN;
volatile int64_t t10 = 303000868488LL;
static volatile uint64_t t12 = 10817LLU;
static uint8_t x55 = 14U;
int32_t t13 = -3;
volatile uint16_t x60 = UINT16_MAX;
uint32_t x66 = 63222U;
uint16_t x70 = 6572U;
int8_t x71 = -1;
int32_t x72 = 4041792;
int64_t t18 = INT64_MIN;
int32_t x84 = INT32_MIN;
uint8_t x85 = 110U;
int16_t x87 = -1;
uint8_t x89 = 2U;
volatile int32_t t22 = 1;
static uint8_t x99 = 28U;
int32_t x101 = 36445168;
volatile uint32_t x104 = 5U;
int16_t x105 = -399;
volatile int64_t x109 = -1273906544422LL;
uint8_t x110 = UINT8_MAX;
int16_t x113 = -1;
volatile uint16_t x116 = 1U;
int32_t x117 = INT32_MIN;
int16_t x122 = INT16_MIN;
int16_t x125 = INT16_MIN;
int32_t x132 = -14387996;
int32_t t32 = -1360;
int16_t x133 = -43;
int32_t x134 = INT32_MIN;
int8_t x136 = INT8_MIN;
int64_t t34 = -243687094263613199LL;
static volatile uint32_t x143 = UINT32_MAX;
volatile int64_t x148 = INT64_MIN;
volatile int64_t t36 = -469765LL;
static volatile int32_t t37 = -367791047;
int8_t x156 = -14;
static volatile int32_t t38 = 296;
int32_t x157 = INT32_MIN;
static int16_t x162 = INT16_MIN;
int16_t x165 = INT16_MIN;
static uint32_t x171 = 2U;
int8_t x172 = INT8_MAX;
static uint32_t t42 = 75541U;
int16_t x181 = -1;
uint64_t x182 = UINT64_MAX;
int32_t x183 = INT32_MAX;
volatile int8_t x187 = -26;
int32_t t46 = -3963788;
int8_t x202 = INT8_MIN;
uint64_t x209 = 468413177LLU;
volatile int32_t x210 = 8;
volatile int8_t x211 = INT8_MIN;
volatile uint32_t t53 = 2986U;
volatile int32_t x218 = INT32_MIN;
int16_t x225 = INT16_MAX;
uint16_t x226 = UINT16_MAX;
uint16_t x227 = 1U;
int8_t x232 = -1;
int64_t x233 = -1LL;
static int8_t x237 = -1;
int8_t x241 = INT8_MIN;
uint64_t x242 = UINT64_MAX;
static int16_t x246 = 11310;
int64_t x247 = INT64_MIN;
int32_t x250 = INT32_MAX;
uint64_t x253 = 2509LLU;
int64_t x254 = 588380026LL;
static int64_t x255 = INT64_MIN;
volatile uint64_t x257 = UINT64_MAX;
int32_t x260 = INT32_MIN;
int8_t x270 = INT8_MIN;
int64_t x271 = 791069LL;
uint16_t x276 = 202U;
int64_t t68 = -12473312465981LL;
static volatile int8_t x281 = -1;
static int32_t t71 = -296495;
volatile int64_t x289 = 29351084638440125LL;
int32_t x291 = INT32_MIN;
uint8_t x297 = 5U;
volatile uint64_t t74 = 1152076614281215001LLU;
int32_t t77 = 22782;
int16_t x314 = INT16_MIN;
int16_t x319 = -1;
volatile int16_t x321 = 1;
volatile uint8_t x336 = 3U;
int8_t x337 = -1;
int32_t x339 = 20;
int32_t t87 = 1069;
int16_t x357 = -1;
int64_t t89 = 5766267314377545LL;
static uint16_t x366 = 3227U;
int64_t x367 = INT64_MAX;
static int16_t x370 = INT16_MIN;
int32_t t92 = -3;
uint16_t x394 = UINT16_MAX;
int32_t t98 = -1925151;
int8_t x397 = -1;
static volatile int32_t x399 = INT32_MIN;


void f0(void) {
	int32_t x1 = -3301;
	uint8_t x3 = UINT8_MAX;
	uint16_t x4 = 1401U;

	t0 = ((x1==x2)|(x3&x4));

	if (t0 != 121) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = 5U;

	t1 = ((x5==x6)|(x7&x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 268189979LLU;
	int32_t x12 = -648419542;

	t2 = ((x9==x10)|(x11&x12));

	if (t2 != -648445952) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = 1;
	static volatile uint64_t x15 = 7904202503604148231LLU;
	uint8_t x16 = 54U;
	volatile uint64_t t3 = 1675521202026LLU;

	t3 = ((x13==x14)|(x15&x16));

	if (t3 != 6LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 36U;
	static int32_t x18 = -16091873;
	volatile int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -1601865;

	t4 = ((x17==x18)|(x19&x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 32LLU;
	static uint32_t x23 = 389U;
	static uint64_t x24 = 527734LLU;

	t5 = ((x21==x22)|(x23&x24));

	if (t5 != 260LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x26 = 1386319U;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -10264;

	t6 = ((x25==x26)|(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x31 = -5030562;

	t7 = ((x29==x30)|(x31&x32));

	if (t7 != -5046272) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 63035267408LLU;
	int16_t x35 = INT16_MIN;

	t8 = ((x33==x34)|(x35&x36));

	if (t8 != -491028480) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 13504404U;
	int16_t x40 = -14;
	volatile int32_t t9 = INT32_MIN;

	t9 = ((x37==x38)|(x39&x40));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int32_t x42 = -109;
	volatile int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MAX;

	t10 = ((x41==x42)|(x43&x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 77;
	int16_t x46 = 2785;
	int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MAX;
	volatile int64_t t11 = 8019558525510106LL;

	t11 = ((x45==x46)|(x47&x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -857LL;
	uint32_t x50 = UINT32_MAX;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;

	t12 = ((x49==x50)|(x51&x52));

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MAX;
	uint8_t x56 = UINT8_MAX;

	t13 = ((x53==x54)|(x55&x56));

	if (t13 != 14) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int16_t x58 = INT16_MAX;
	int32_t x59 = -1;
	volatile int32_t t14 = -2128;

	t14 = ((x57==x58)|(x59&x60));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static int32_t x62 = 1;
	int8_t x63 = -1;
	uint64_t x64 = 731182213LLU;
	static volatile uint64_t t15 = 1LLU;

	t15 = ((x61==x62)|(x63&x64));

	if (t15 != 731182213LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static int32_t x67 = INT32_MIN;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 599438083U;

	t16 = ((x65==x66)|(x67&x68));

	if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 3;
	int32_t t17 = 131090;

	t17 = ((x69==x70)|(x71&x72));

	if (t17 != 4041792) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static volatile int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MIN;
	int32_t x76 = INT32_MIN;

	t18 = ((x73==x74)|(x75&x76));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 13120U;
	uint32_t x78 = 80057482U;
	int32_t x79 = INT32_MIN;
	static uint32_t x80 = 9U;
	volatile uint32_t t19 = 7783U;

	t19 = ((x77==x78)|(x79&x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 5256U;
	static volatile int8_t x82 = -1;
	static int32_t x83 = INT32_MIN;
	volatile int32_t t20 = INT32_MIN;

	t20 = ((x81==x82)|(x83&x84));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	volatile uint8_t x88 = 24U;
	int32_t t21 = -7730797;

	t21 = ((x85==x86)|(x87&x88));

	if (t21 != 24) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x90 = 7443363U;
	uint16_t x91 = UINT16_MAX;
	int8_t x92 = -1;

	t22 = ((x89==x90)|(x91&x92));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 78U;
	volatile int32_t x94 = -30225722;
	volatile uint64_t x95 = 79055237198922LLU;
	int8_t x96 = 1;
	volatile uint64_t t23 = 24LLU;

	t23 = ((x93==x94)|(x95&x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = UINT8_MAX;
	uint16_t x98 = 9U;
	uint16_t x100 = 738U;
	int32_t t24 = 256680;

	t24 = ((x97==x98)|(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = 325461121LLU;
	int64_t x103 = 2764816775LL;
	static int64_t t25 = 104196542LL;

	t25 = ((x101==x102)|(x103&x104));

	if (t25 != 5LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -2;
	uint16_t x107 = 22765U;
	int16_t x108 = 339;
	static int32_t t26 = 0;

	t26 = ((x105==x106)|(x107&x108));

	if (t26 != 65) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x111 = 7U;
	int64_t x112 = -35LL;
	static volatile int64_t t27 = -25LL;

	t27 = ((x109==x110)|(x111&x112));

	if (t27 != 5LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	static int64_t t28 = -936015012LL;

	t28 = ((x113==x114)|(x115&x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 1;
	int16_t x119 = -94;
	int64_t x120 = INT64_MAX;
	volatile int64_t t29 = 79658LL;

	t29 = ((x117==x118)|(x119&x120));

	if (t29 != 9223372036854775714LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = UINT8_MAX;
	static volatile int8_t x123 = -1;
	int16_t x124 = 0;
	static volatile int32_t t30 = -54597;

	t30 = ((x121==x122)|(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -1LL;
	int16_t x127 = -938;
	volatile int32_t x128 = INT32_MIN;
	int32_t t31 = INT32_MIN;

	t31 = ((x125==x126)|(x127&x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = -36;

	t32 = ((x129==x130)|(x131&x132));

	if (t32 != -14388028) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x135 = -1LL;
	static volatile int64_t t33 = -495377LL;

	t33 = ((x133==x134)|(x135&x136));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 10303500132LLU;
	uint16_t x138 = 116U;
	int64_t x139 = INT64_MAX;
	int64_t x140 = INT64_MIN;

	t34 = ((x137==x138)|(x139&x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -2691;
	int32_t x142 = INT32_MIN;
	volatile int32_t x144 = -1;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = ((x141==x142)|(x143&x144));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 1;
	uint64_t x146 = 48818474LLU;
	uint8_t x147 = 20U;

	t36 = ((x145==x146)|(x147&x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 222U;
	int8_t x150 = -4;
	int16_t x151 = INT16_MAX;
	int16_t x152 = INT16_MIN;

	t37 = ((x149==x150)|(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -6;
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 0U;

	t38 = ((x153==x154)|(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x158 = INT8_MIN;
	static uint64_t x159 = 281164044705LLU;
	volatile int8_t x160 = INT8_MIN;
	volatile uint64_t t39 = 86653LLU;

	t39 = ((x157==x158)|(x159&x160));

	if (t39 != 281164044672LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	volatile uint16_t x163 = 505U;
	uint16_t x164 = 872U;
	int32_t t40 = -6909;

	t40 = ((x161==x162)|(x163&x164));

	if (t40 != 360) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MAX;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MAX;
	uint32_t t41 = 0U;

	t41 = ((x165==x166)|(x167&x168));

	if (t41 != 127U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = 1;
	int16_t x170 = 65;

	t42 = ((x169==x170)|(x171&x172));

	if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	int64_t x174 = 8694328392488912LL;
	volatile int16_t x175 = -1;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = -11346730;

	t43 = ((x173==x174)|(x175&x176));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x178 = 88;
	volatile uint16_t x179 = 791U;
	volatile int64_t x180 = INT64_MIN;
	volatile int64_t t44 = 138299343901791LL;

	t44 = ((x177==x178)|(x179&x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x184 = 0;
	int32_t t45 = 381981550;

	t45 = ((x181==x182)|(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static int8_t x186 = INT8_MIN;
	int16_t x188 = INT16_MIN;

	t46 = ((x185==x186)|(x187&x188));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MAX;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = INT16_MIN;
	uint16_t x192 = 0U;
	volatile int32_t t47 = 140;

	t47 = ((x189==x190)|(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 0;
	uint16_t x194 = 9U;
	static uint8_t x195 = UINT8_MAX;
	static uint8_t x196 = 23U;
	volatile int32_t t48 = 7;

	t48 = ((x193==x194)|(x195&x196));

	if (t48 != 23) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -31;
	static int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MIN;
	uint16_t x200 = 52U;
	int32_t t49 = -1343809;

	t49 = ((x197==x198)|(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -22;
	uint64_t x203 = 1495343394328LLU;
	volatile int16_t x204 = INT16_MIN;
	static uint64_t t50 = 37897893813LLU;

	t50 = ((x201==x202)|(x203&x204));

	if (t50 != 1495343366144LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	static uint8_t x206 = 22U;
	volatile uint16_t x207 = UINT16_MAX;
	uint32_t x208 = 835034U;
	uint32_t t51 = 0U;

	t51 = ((x205==x206)|(x207&x208));

	if (t51 != 48602U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x212 = UINT32_MAX;
	static uint32_t t52 = 8U;

	t52 = ((x209==x210)|(x211&x212));

	if (t52 != 4294967168U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = -1933;
	int16_t x215 = 2629;
	static uint32_t x216 = 11354623U;

	t53 = ((x213==x214)|(x215&x216));

	if (t53 != 69U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 4357556111501LL;
	static uint64_t x219 = 9193LLU;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t54 = 15971333272369LLU;

	t54 = ((x217==x218)|(x219&x220));

	if (t54 != 9193LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -17;
	volatile int32_t x222 = -1;
	int8_t x223 = -20;
	int16_t x224 = INT16_MIN;
	int32_t t55 = -344163;

	t55 = ((x221==x222)|(x223&x224));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x228 = -46977263;
	int32_t t56 = -2819;

	t56 = ((x225==x226)|(x227&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint16_t x230 = UINT16_MAX;
	volatile int8_t x231 = INT8_MIN;
	volatile int32_t t57 = -6774652;

	t57 = ((x229==x230)|(x231&x232));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = INT64_MIN;
	uint64_t x235 = 538508207758219276LLU;
	uint32_t x236 = UINT32_MAX;
	uint64_t t58 = 1272LLU;

	t58 = ((x233==x234)|(x235&x236));

	if (t58 != 2685376524LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -1LL;
	volatile int64_t x239 = INT64_MAX;
	volatile int64_t x240 = -45610461992LL;
	static volatile int64_t t59 = 473533215LL;

	t59 = ((x237==x238)|(x239&x240));

	if (t59 != 9223371991244313817LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x243 = -1LL;
	uint32_t x244 = 7205U;
	volatile int64_t t60 = -28982588095LL;

	t60 = ((x241==x242)|(x243&x244));

	if (t60 != 7205LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 11077117420268LL;
	volatile int64_t x248 = -1LL;
	int64_t t61 = INT64_MIN;

	t61 = ((x245==x246)|(x247&x248));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 2U;
	int64_t x251 = INT64_MAX;
	volatile uint16_t x252 = 200U;
	volatile int64_t t62 = -973443560280176071LL;

	t62 = ((x249==x250)|(x251&x252));

	if (t62 != 200LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x256 = 98373385453LLU;
	volatile uint64_t t63 = 463LLU;

	t63 = ((x253==x254)|(x255&x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -814;
	uint32_t x259 = 12168084U;
	static volatile uint32_t t64 = 190535U;

	t64 = ((x257==x258)|(x259&x260));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 1052131528043238292LLU;
	volatile int64_t x262 = INT64_MIN;
	static uint32_t x263 = 1716209924U;
	static uint32_t x264 = 1820191U;
	volatile uint32_t t65 = 246172646U;

	t65 = ((x261==x262)|(x263&x264));

	if (t65 != 737284U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1457;
	int8_t x266 = 0;
	static int8_t x267 = INT8_MIN;
	volatile uint8_t x268 = 27U;
	volatile int32_t t66 = -67199538;

	t66 = ((x265==x266)|(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int16_t x272 = INT16_MAX;
	volatile int64_t t67 = -14966014LL;

	t67 = ((x269==x270)|(x271&x272));

	if (t67 != 4637LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static int8_t x274 = -1;
	volatile int64_t x275 = -1LL;

	t68 = ((x273==x274)|(x275&x276));

	if (t68 != 202LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MIN;
	static int32_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	static uint8_t x280 = 3U;
	volatile int32_t t69 = -24183682;

	t69 = ((x277==x278)|(x279&x280));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x282 = UINT16_MAX;
	volatile int16_t x283 = -1;
	uint32_t x284 = 6269U;
	uint32_t t70 = 74312211U;

	t70 = ((x281==x282)|(x283&x284));

	if (t70 != 6269U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	uint32_t x286 = 104945U;
	uint16_t x287 = UINT16_MAX;
	int32_t x288 = 3025;

	t71 = ((x285==x286)|(x287&x288));

	if (t71 != 3025) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = 4U;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = 25648;

	t72 = ((x289==x290)|(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = -1;
	uint16_t x294 = 1U;
	volatile int32_t x295 = INT32_MIN;
	int16_t x296 = -1;
	static volatile int32_t t73 = INT32_MIN;

	t73 = ((x293==x294)|(x295&x296));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MAX;
	uint64_t x299 = UINT64_MAX;
	static int16_t x300 = INT16_MIN;

	t74 = ((x297==x298)|(x299&x300));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 79U;
	static volatile int8_t x303 = INT8_MIN;
	uint64_t x304 = 105872695LLU;
	uint64_t t75 = 102279LLU;

	t75 = ((x301==x302)|(x303&x304));

	if (t75 != 105872640LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = 1059;
	volatile int64_t x306 = INT64_MIN;
	int64_t x307 = -1LL;
	static volatile uint32_t x308 = 17U;
	volatile int64_t t76 = 541251686805LL;

	t76 = ((x305==x306)|(x307&x308));

	if (t76 != 17LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	uint16_t x310 = 5582U;
	static int32_t x311 = INT32_MIN;
	static uint16_t x312 = UINT16_MAX;

	t77 = ((x309==x310)|(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = -1;
	static uint32_t x315 = UINT32_MAX;
	volatile int8_t x316 = INT8_MIN;
	volatile uint32_t t78 = 709414230U;

	t78 = ((x313==x314)|(x315&x316));

	if (t78 != 4294967168U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	static int32_t x318 = -1;
	volatile int64_t x320 = INT64_MIN;
	volatile int64_t t79 = -83136006LL;

	t79 = ((x317==x318)|(x319&x320));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = 13924;
	int64_t x323 = INT64_MAX;
	uint32_t x324 = 2021417729U;
	static volatile int64_t t80 = -124089669398163LL;

	t80 = ((x321==x322)|(x323&x324));

	if (t80 != 2021417729LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = UINT8_MAX;
	uint16_t x326 = 6518U;
	static int64_t x327 = -1LL;
	static uint16_t x328 = UINT16_MAX;
	int64_t t81 = -2026210321698LL;

	t81 = ((x325==x326)|(x327&x328));

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int32_t x330 = -317;
	int8_t x331 = -14;
	int32_t x332 = -17;
	volatile int32_t t82 = 12;

	t82 = ((x329==x330)|(x331&x332));

	if (t82 != -30) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = 292860U;
	int32_t x334 = -1;
	volatile int32_t x335 = -59860038;
	volatile int32_t t83 = -217575;

	t83 = ((x333==x334)|(x335&x336));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t84 = 28761670U;

	t84 = ((x337==x338)|(x339&x340));

	if (t84 != 20U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	volatile int8_t x342 = -53;
	static int8_t x343 = INT8_MIN;
	uint8_t x344 = 93U;
	int32_t t85 = -37;

	t85 = ((x341==x342)|(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = -1;
	volatile uint8_t x346 = 82U;
	static volatile uint16_t x347 = 10813U;
	int64_t x348 = -9270714LL;
	volatile int64_t t86 = 22167257LL;

	t86 = ((x345==x346)|(x347&x348));

	if (t86 != 2564LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = UINT16_MAX;
	static volatile int8_t x350 = 1;
	uint16_t x351 = 307U;
	volatile uint8_t x352 = UINT8_MAX;

	t87 = ((x349==x350)|(x351&x352));

	if (t87 != 51) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 7178110711LL;
	int64_t x354 = -465015LL;
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;
	int64_t t88 = 9LL;

	t88 = ((x353==x354)|(x355&x356));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x358 = -1;
	int64_t x359 = -235LL;
	volatile int16_t x360 = INT16_MIN;

	t89 = ((x357==x358)|(x359&x360));

	if (t89 != -32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MAX;
	int16_t x362 = INT16_MIN;
	int32_t x363 = -864;
	volatile int8_t x364 = INT8_MIN;
	static volatile int32_t t90 = 18796;

	t90 = ((x361==x362)|(x363&x364));

	if (t90 != -896) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MAX;
	uint64_t x368 = 125LLU;
	uint64_t t91 = 508443517LLU;

	t91 = ((x365==x366)|(x367&x368));

	if (t91 != 125LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;

	t92 = ((x369==x370)|(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	static int16_t x374 = INT16_MIN;
	volatile int64_t x375 = INT64_MAX;
	static uint8_t x376 = 0U;
	volatile int64_t t93 = -218389106550868LL;

	t93 = ((x373==x374)|(x375&x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	int8_t x378 = -1;
	static int32_t x379 = -1;
	int8_t x380 = -1;
	int32_t t94 = 3910217;

	t94 = ((x377==x378)|(x379&x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 10384U;
	int16_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = INT16_MAX;
	uint64_t t95 = 18LLU;

	t95 = ((x381==x382)|(x383&x384));

	if (t95 != 32767LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MAX;
	uint32_t x386 = 1385U;
	static uint16_t x387 = 36U;
	static uint16_t x388 = 2495U;
	volatile int32_t t96 = -8;

	t96 = ((x385==x386)|(x387&x388));

	if (t96 != 36) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x390 = 10523;
	uint16_t x391 = 835U;
	int8_t x392 = -1;
	volatile int32_t t97 = 7;

	t97 = ((x389==x390)|(x391&x392));

	if (t97 != 835) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 37U;
	uint8_t x395 = 11U;
	volatile int8_t x396 = -1;

	t98 = ((x393==x394)|(x395&x396));

	if (t98 != 11) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x398 = UINT64_MAX;
	uint8_t x400 = 3U;
	int32_t t99 = 161553091;

	t99 = ((x397==x398)|(x399&x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

