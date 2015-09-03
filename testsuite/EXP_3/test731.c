#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
uint8_t x2 = UINT8_MAX;
int8_t x3 = INT8_MIN;
static int16_t x5 = 2780;
uint8_t x6 = 25U;
int64_t x11 = INT64_MAX;
uint16_t x19 = 51U;
int64_t x31 = 2534396243LL;
int8_t x39 = INT8_MAX;
int16_t x41 = INT16_MIN;
int16_t x44 = 198;
static int32_t t9 = 176;
int8_t x49 = -1;
int16_t x53 = -30;
int8_t x66 = -52;
int8_t x68 = INT8_MIN;
int64_t x69 = 0LL;
uint16_t x76 = UINT16_MAX;
int64_t x77 = INT64_MAX;
volatile int16_t x78 = INT16_MIN;
volatile int16_t x84 = -1;
uint64_t x86 = UINT64_MAX;
int8_t x91 = -1;
uint32_t t20 = UINT32_MAX;
int8_t x94 = -1;
int32_t t21 = 0;
int32_t x99 = INT32_MIN;
uint16_t x108 = 12345U;
volatile int64_t t24 = 50458LL;
static uint32_t t25 = 1226415U;
uint64_t t27 = 79335402454242LLU;
static uint64_t x130 = 180LLU;
static int64_t x131 = -1LL;
volatile int8_t x134 = -1;
uint16_t x140 = 277U;
int8_t x144 = -8;
int64_t t31 = -418409580LL;
static volatile int16_t x147 = -1;
int32_t x150 = INT32_MIN;
int8_t x151 = INT8_MAX;
uint64_t x155 = 38155429270331118LLU;
uint32_t x156 = 2631U;
uint64_t t34 = 182LLU;
uint32_t x157 = 204994U;
int8_t x159 = INT8_MIN;
volatile uint64_t x160 = 19LLU;
uint64_t t35 = 5862216984336LLU;
int16_t x166 = INT16_MIN;
uint8_t x167 = 11U;
uint64_t x172 = UINT64_MAX;
int16_t x175 = INT16_MIN;
int16_t x176 = 57;
static volatile int64_t t39 = -14342097885LL;
int64_t t40 = 65324LL;
static volatile uint64_t t41 = 1866418497LLU;
int32_t x194 = -50116354;
int32_t x196 = INT32_MAX;
volatile int32_t t43 = -3;
int8_t x197 = INT8_MIN;
uint64_t x198 = UINT64_MAX;
uint64_t t44 = 14691965361474346LLU;
int16_t x201 = INT16_MIN;
static int64_t t45 = -554586730873174316LL;
static uint64_t t47 = 27574238LLU;
int32_t x213 = 625490;
volatile int32_t t48 = -4;
volatile int32_t x217 = INT32_MAX;
int64_t x218 = INT64_MIN;
int32_t x220 = INT32_MIN;
static uint8_t x227 = UINT8_MAX;
int16_t x233 = INT16_MIN;
uint64_t x239 = 1754LLU;
volatile uint64_t t54 = 12612932LLU;
int32_t x241 = 2;
uint64_t x242 = UINT64_MAX;
static volatile uint64_t t56 = 1LLU;
static volatile int64_t x249 = INT64_MAX;
volatile uint64_t t57 = 37699638619LLU;
int64_t t60 = 8551306749LL;
static int16_t x267 = INT16_MIN;
volatile uint32_t t62 = 6U;
int32_t x275 = INT32_MIN;
uint64_t x277 = 429LLU;
volatile int64_t x282 = -1222485337400LL;
int16_t x285 = INT16_MIN;
int8_t x288 = -1;
int8_t x291 = INT8_MIN;
volatile int32_t t67 = 55;
int16_t x293 = INT16_MAX;
int8_t x301 = INT8_MAX;
volatile int64_t x304 = INT64_MAX;
int16_t x313 = -7242;
uint64_t t72 = 205LLU;
int64_t x318 = INT64_MIN;
uint32_t x320 = 68769U;
volatile int64_t t73 = -1536893699797473697LL;
uint8_t x332 = 2U;
static uint16_t x334 = 6106U;
int64_t x340 = INT64_MIN;
int8_t x352 = -1;
int32_t x364 = 2577710;
volatile int32_t x370 = INT32_MAX;
int64_t t86 = -159490215999175761LL;
uint64_t x376 = UINT64_MAX;
int64_t x377 = -1LL;
static int32_t x389 = -8356;
static int16_t x392 = INT16_MIN;
volatile int32_t t91 = -8962;
uint32_t x393 = 246U;
int64_t x401 = 187938792196LL;
volatile int8_t x402 = 12;
int32_t x403 = -394395033;
int32_t x404 = INT32_MAX;
int16_t x415 = 3;
int16_t x416 = INT16_MIN;
static int8_t x418 = INT8_MIN;
int64_t x423 = INT64_MIN;


void f0(void) {
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -68457285666LL;

	t0 = ((x1%x2)*(x3%x4));

	if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x7 = -3;
	volatile int8_t x8 = -20;
	volatile int32_t t1 = 0;

	t1 = ((x5%x6)*(x7%x8));

	if (t1 != -15) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MAX;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 3917800100650065LLU;

	t2 = ((x9%x10)*(x11%x12));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	uint16_t x18 = 3391U;
	uint64_t x20 = UINT64_MAX;
	uint64_t t3 = 49LLU;

	t3 = ((x17%x18)*(x19%x20));

	if (t3 != 66147LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = 22;
	static int8_t x22 = INT8_MIN;
	volatile int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MAX;
	static volatile int32_t t4 = 29;

	t4 = ((x21%x22)*(x23%x24));

	if (t4 != -720896) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int8_t x26 = -3;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = UINT8_MAX;
	static int32_t t5 = 1782715;

	t5 = ((x25%x26)*(x27%x28));

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 684;
	static int16_t x30 = -1;
	int16_t x32 = -1;
	volatile int64_t t6 = 116LL;

	t6 = ((x29%x30)*(x31%x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = 1U;
	static volatile uint16_t x35 = 46U;
	int32_t x36 = INT32_MIN;
	int32_t t7 = -53;

	t7 = ((x33%x34)*(x35%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = INT64_MIN;
	uint32_t x40 = UINT32_MAX;
	int64_t t8 = -491066953697893946LL;

	t8 = ((x37%x38)*(x39%x40));

	if (t8 != 16129LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = 17U;
	int32_t x43 = -1;

	t9 = ((x41%x42)*(x43%x44));

	if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x50 = -618LL;
	int8_t x51 = -2;
	int8_t x52 = INT8_MIN;
	static int64_t t10 = -383765253LL;

	t10 = ((x49%x50)*(x51%x52));

	if (t10 != 2LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = 14U;
	int16_t x55 = INT16_MAX;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t11 = 210412;

	t11 = ((x53%x54)*(x55%x56));

	if (t11 != -65534) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	volatile int64_t x58 = INT64_MIN;
	int64_t x59 = -1LL;
	static volatile uint32_t x60 = 208U;
	volatile int64_t t12 = -15825319730599187LL;

	t12 = ((x57%x58)*(x59%x60));

	if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = 4;
	volatile uint64_t x62 = UINT64_MAX;
	uint32_t x63 = 1104U;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t13 = 481043LLU;

	t13 = ((x61%x62)*(x63%x64));

	if (t13 != 4416LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 163U;
	int32_t x67 = INT32_MIN;
	volatile int32_t t14 = 1;

	t14 = ((x65%x66)*(x67%x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x70 = INT64_MAX;
	volatile int32_t x71 = -2087180;
	uint8_t x72 = 2U;
	static volatile int64_t t15 = -243765516816LL;

	t15 = ((x69%x70)*(x71%x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	uint32_t x75 = 3535U;
	static uint32_t t16 = 388U;

	t16 = ((x73%x74)*(x75%x76));

	if (t16 != 4294514816U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x79 = 848;
	static int16_t x80 = INT16_MAX;
	int64_t t17 = -479315277LL;

	t17 = ((x77%x78)*(x79%x80));

	if (t17 != 27786416LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1442;
	static int8_t x82 = INT8_MIN;
	static volatile int8_t x83 = INT8_MIN;
	int32_t t18 = 78;

	t18 = ((x81%x82)*(x83%x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -676215765136946LL;
	int32_t x87 = INT32_MIN;
	static uint8_t x88 = 17U;
	volatile uint64_t t19 = 1205644LLU;

	t19 = ((x85%x86)*(x87%x88));

	if (t19 != 6085941886232514LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 1U;
	static int16_t x90 = -2886;
	uint8_t x92 = 3U;

	t20 = ((x89%x90)*(x91%x92));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = UINT8_MAX;
	volatile uint8_t x95 = 49U;
	int16_t x96 = INT16_MIN;

	t21 = ((x93%x94)*(x95%x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	uint8_t x98 = 123U;
	uint16_t x100 = 33U;
	volatile int32_t t22 = -776477;

	t22 = ((x97%x98)*(x99%x100));

	if (t22 != 10) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = UINT8_MAX;
	static int16_t x106 = 9807;
	int16_t x107 = -1;
	int32_t t23 = 7960;

	t23 = ((x105%x106)*(x107%x108));

	if (t23 != -255) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MAX;
	volatile int64_t x110 = -1LL;
	int32_t x111 = 247040;
	static volatile uint8_t x112 = 47U;

	t24 = ((x109%x110)*(x111%x112));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	int8_t x114 = -1;
	volatile uint32_t x115 = 11U;
	uint8_t x116 = 32U;

	t25 = ((x113%x114)*(x115%x116));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	volatile uint16_t x118 = 2U;
	volatile int32_t x119 = INT32_MAX;
	int16_t x120 = -1;
	volatile int32_t t26 = -597009356;

	t26 = ((x117%x118)*(x119%x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x121 = 64363452767863LLU;
	static uint32_t x122 = 17493U;
	static int8_t x123 = INT8_MIN;
	volatile int64_t x124 = 127750967776LL;

	t27 = ((x121%x122)*(x123%x124));

	if (t27 != 18446744073709392512LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MAX;
	uint32_t x132 = UINT32_MAX;
	uint64_t t28 = 274576LLU;

	t28 = ((x129%x130)*(x131%x132));

	if (t28 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x133 = 320580051LLU;
	static uint32_t x135 = 3U;
	uint64_t x136 = 2LLU;
	static uint64_t t29 = 155019499484LLU;

	t29 = ((x133%x134)*(x135%x136));

	if (t29 != 320580051LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x137 = UINT8_MAX;
	int64_t x138 = -8639152285LL;
	static int64_t x139 = 45780989LL;
	static volatile int64_t t30 = -1LL;

	t30 = ((x137%x138)*(x139%x140));

	if (t30 != 23205LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = 3LL;
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = UINT32_MAX;

	t31 = ((x141%x142)*(x143%x144));

	if (t31 != 21LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x145 = -1LL;
	volatile uint32_t x146 = 19U;
	volatile uint32_t x148 = 128943U;
	int64_t t32 = 538552072774LL;

	t32 = ((x145%x146)*(x147%x148));

	if (t32 != -4908LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x149 = INT64_MAX;
	int32_t x152 = -1;
	static int64_t t33 = -4766LL;

	t33 = ((x149%x150)*(x151%x152));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -21;
	int16_t x154 = INT16_MIN;

	t34 = ((x153%x154)*(x155%x156));

	if (t34 != 18446744073709501909LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = 109;

	t35 = ((x157%x158)*(x159%x160));

	if (t35 != 222LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MAX;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 8U;
	int64_t t36 = 10406714588LL;

	t36 = ((x161%x162)*(x163%x164));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = UINT8_MAX;
	int64_t x168 = INT64_MIN;
	volatile int64_t t37 = 290633860288LL;

	t37 = ((x165%x166)*(x167%x168));

	if (t37 != 2805LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 0U;
	volatile uint32_t x170 = 6481199U;
	static uint32_t x171 = 446539U;
	volatile uint64_t t38 = 2199097479348711592LLU;

	t38 = ((x169%x170)*(x171%x172));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MAX;
	static int64_t x174 = -1LL;

	t39 = ((x173%x174)*(x175%x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x182 = -1LL;
	int8_t x183 = 0;
	int16_t x184 = 268;

	t40 = ((x181%x182)*(x183%x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x185 = 1724364LLU;
	volatile int16_t x186 = INT16_MAX;
	int16_t x187 = 3649;
	static int8_t x188 = INT8_MIN;

	t41 = ((x185%x186)*(x187%x188));

	if (t41 != 1331200LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x189 = INT8_MIN;
	int16_t x190 = -11;
	int32_t x191 = INT32_MAX;
	volatile uint8_t x192 = 59U;
	volatile int32_t t42 = -887253;

	t42 = ((x189%x190)*(x191%x192));

	if (t42 != -378) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = -1;
	int8_t x195 = 1;

	t43 = ((x193%x194)*(x195%x196));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x199 = INT64_MIN;
	int16_t x200 = -26;

	t44 = ((x197%x198)*(x199%x200));

	if (t44 != 1024LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x202 = 1;
	volatile uint32_t x203 = UINT32_MAX;
	int64_t x204 = INT64_MIN;

	t45 = ((x201%x202)*(x203%x204));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 15793U;
	static int64_t x206 = -1LL;
	int64_t x207 = -1LL;
	int8_t x208 = INT8_MIN;
	volatile int64_t t46 = -119LL;

	t46 = ((x205%x206)*(x207%x208));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x209 = -1;
	static int16_t x210 = INT16_MIN;
	static int8_t x211 = -1;
	volatile uint64_t x212 = UINT64_MAX;

	t47 = ((x209%x210)*(x211%x212));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x214 = UINT16_MAX;
	int32_t x215 = 28449;
	uint16_t x216 = UINT16_MAX;

	t48 = ((x213%x214)*(x215%x216));

	if (t48 != 1014918075) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x219 = INT32_MIN;
	int64_t t49 = -66LL;

	t49 = ((x217%x218)*(x219%x220));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x221 = INT32_MIN;
	int32_t x222 = -5778020;
	static int64_t x223 = INT64_MIN;
	static int32_t x224 = INT32_MIN;
	int64_t t50 = 66LL;

	t50 = ((x221%x222)*(x223%x224));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = -1;
	int16_t x226 = INT16_MAX;
	int16_t x228 = -1;
	int32_t t51 = 3;

	t51 = ((x225%x226)*(x227%x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = -4;
	int16_t x230 = INT16_MIN;
	volatile int32_t x231 = INT32_MIN;
	int16_t x232 = 627;
	int32_t t52 = 1;

	t52 = ((x229%x230)*(x231%x232));

	if (t52 != 1988) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x234 = INT64_MIN;
	volatile uint16_t x235 = 1424U;
	static int8_t x236 = -1;
	volatile int64_t t53 = -214135LL;

	t53 = ((x233%x234)*(x235%x236));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = -1;
	uint32_t x240 = 508813U;

	t54 = ((x237%x238)*(x239%x240));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x243 = -1;
	static uint16_t x244 = 22418U;
	uint64_t t55 = 1887205316LLU;

	t55 = ((x241%x242)*(x243%x244));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = 2738;
	static uint64_t x246 = UINT64_MAX;
	volatile uint16_t x247 = 0U;
	volatile uint8_t x248 = 15U;

	t56 = ((x245%x246)*(x247%x248));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MAX;
	uint64_t x252 = 5646671133042674544LLU;

	t57 = ((x249%x250)*(x251%x252));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 271157811U;
	volatile int32_t x254 = INT32_MAX;
	static int16_t x255 = INT16_MIN;
	int8_t x256 = -1;
	static volatile uint32_t t58 = 763U;

	t58 = ((x253%x254)*(x255%x256));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = 388LL;
	static int16_t x258 = -4;
	uint64_t x259 = UINT64_MAX;
	int64_t x260 = INT64_MIN;
	volatile uint64_t t59 = 3664LLU;

	t59 = ((x257%x258)*(x259%x260));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	int8_t x262 = -1;
	uint8_t x263 = 2U;
	int64_t x264 = -1LL;

	t60 = ((x261%x262)*(x263%x264));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x265 = -1;
	int32_t x266 = INT32_MIN;
	uint8_t x268 = 12U;
	volatile int32_t t61 = -1614021;

	t61 = ((x265%x266)*(x267%x268));

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = 4U;
	int16_t x270 = -1;
	int16_t x271 = 33;
	uint32_t x272 = 1U;

	t62 = ((x269%x270)*(x271%x272));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x274 = 91491;
	int32_t x276 = INT32_MIN;
	volatile int32_t t63 = -9;

	t63 = ((x273%x274)*(x275%x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x278 = UINT16_MAX;
	int32_t x279 = -113804207;
	int64_t x280 = 226973571351355LL;
	volatile uint64_t t64 = 2185326920LLU;

	t64 = ((x277%x278)*(x279%x280));

	if (t64 != 18446744024887546813LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -1;
	static int16_t x283 = INT16_MIN;
	uint8_t x284 = UINT8_MAX;
	static volatile int64_t t65 = -39607590592563216LL;

	t65 = ((x281%x282)*(x283%x284));

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x286 = UINT8_MAX;
	int16_t x287 = INT16_MIN;
	static int32_t t66 = 27;

	t66 = ((x285%x286)*(x287%x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = INT32_MIN;
	uint16_t x290 = 277U;
	int16_t x292 = INT16_MAX;

	t67 = ((x289%x290)*(x291%x292));

	if (t67 != 19456) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x294 = INT16_MIN;
	static int16_t x295 = -1;
	uint32_t x296 = 1224951463U;
	volatile uint32_t t68 = 616U;

	t68 = ((x293%x294)*(x295%x296));

	if (t68 != 4044280822U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = 500;
	volatile uint64_t x298 = 80430891066999LLU;
	volatile int16_t x299 = 267;
	static int16_t x300 = 1;
	uint64_t t69 = 428652004011727LLU;

	t69 = ((x297%x298)*(x299%x300));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x302 = INT8_MAX;
	volatile int64_t x303 = -35162380332359LL;
	volatile int64_t t70 = 495810547127470LL;

	t70 = ((x301%x302)*(x303%x304));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x305 = UINT64_MAX;
	static volatile int8_t x306 = INT8_MAX;
	static int16_t x307 = -5036;
	volatile int16_t x308 = INT16_MIN;
	uint64_t t71 = 323019829514033791LLU;

	t71 = ((x305%x306)*(x307%x308));

	if (t71 != 18446744073709546580LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x314 = INT16_MIN;
	uint64_t x315 = UINT64_MAX;
	int32_t x316 = -882809;

	t72 = ((x313%x314)*(x315%x316));

	if (t72 != 18446744067316256080LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = 0;
	int64_t x319 = INT64_MAX;

	t73 = ((x317%x318)*(x319%x320));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -128547367;
	int64_t x322 = INT64_MAX;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MAX;
	int64_t t74 = -188989275LL;

	t74 = ((x321%x322)*(x323%x324));

	if (t74 != 128547367LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x325 = INT64_MAX;
	int16_t x326 = -2;
	uint64_t x327 = 7985058797LLU;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t75 = 1910148333067LLU;

	t75 = ((x325%x326)*(x327%x328));

	if (t75 != 7985058797LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x329 = INT16_MAX;
	volatile uint16_t x330 = 31U;
	static uint8_t x331 = 9U;
	static volatile int32_t t76 = 1020;

	t76 = ((x329%x330)*(x331%x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x333 = -1;
	int64_t x335 = -1817912838LL;
	volatile int8_t x336 = INT8_MIN;
	volatile int64_t t77 = -50LL;

	t77 = ((x333%x334)*(x335%x336));

	if (t77 != 6LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = -94;
	int32_t x338 = INT32_MIN;
	volatile int64_t x339 = -1LL;
	volatile int64_t t78 = -212175436936491732LL;

	t78 = ((x337%x338)*(x339%x340));

	if (t78 != 94LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = -19;
	int8_t x342 = INT8_MIN;
	int64_t x343 = 1544890157LL;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t79 = 128384272918830LLU;

	t79 = ((x341%x342)*(x343%x344));

	if (t79 != 18446744044356638633LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x345 = INT8_MIN;
	int16_t x346 = -1653;
	int64_t x347 = -116989LL;
	static volatile uint16_t x348 = 6240U;
	static volatile int64_t t80 = -180276805914151LL;

	t80 = ((x345%x346)*(x347%x348));

	if (t80 != 597632LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x349 = INT8_MAX;
	static volatile uint16_t x350 = 44U;
	int8_t x351 = INT8_MIN;
	int32_t t81 = -6157;

	t81 = ((x349%x350)*(x351%x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 534821992U;
	int32_t x354 = -125200979;
	int16_t x355 = 0;
	int64_t x356 = -94616969546370LL;
	volatile int64_t t82 = -38675787024523853LL;

	t82 = ((x353%x354)*(x355%x356));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = INT16_MAX;
	uint16_t x358 = 25492U;
	volatile int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MIN;
	static volatile int32_t t83 = 0;

	t83 = ((x357%x358)*(x359%x360));

	if (t83 != -238387200) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x361 = 0LLU;
	int8_t x362 = INT8_MAX;
	volatile int8_t x363 = -1;
	static volatile uint64_t t84 = 7741392LLU;

	t84 = ((x361%x362)*(x363%x364));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = INT32_MAX;
	int16_t x366 = -34;
	int16_t x367 = INT16_MIN;
	int16_t x368 = -878;
	int32_t t85 = -3716505;

	t85 = ((x365%x366)*(x367%x368));

	if (t85 != -7050) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x369 = UINT16_MAX;
	volatile int64_t x371 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;

	t86 = ((x369%x370)*(x371%x372));

	if (t86 != -2147450880LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = 0;
	int16_t x374 = INT16_MIN;
	uint8_t x375 = 1U;
	uint64_t t87 = 503784928LLU;

	t87 = ((x373%x374)*(x375%x376));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x378 = -1;
	int16_t x379 = -1;
	uint64_t x380 = 532062LLU;
	static volatile uint64_t t88 = 116246970577596LLU;

	t88 = ((x377%x378)*(x379%x380));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = -364215372859700333LL;
	volatile int64_t x382 = 296LL;
	static volatile int16_t x383 = -1;
	int8_t x384 = INT8_MAX;
	int64_t t89 = -50LL;

	t89 = ((x381%x382)*(x383%x384));

	if (t89 != 253LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x385 = -7;
	uint16_t x386 = 468U;
	static uint8_t x387 = UINT8_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t90 = -49;

	t90 = ((x385%x386)*(x387%x388));

	if (t90 != -1785) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x390 = INT8_MIN;
	int32_t x391 = -57652186;

	t91 = ((x389%x390)*(x391%x392));

	if (t91 != 477864) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x394 = INT8_MAX;
	int16_t x395 = -1;
	volatile uint32_t x396 = 2895U;
	uint32_t t92 = 968513384U;

	t92 = ((x393%x394)*(x395%x396));

	if (t92 != 35700U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MIN;
	int64_t x400 = 764582LL;
	volatile int64_t t93 = 29309277553920LL;

	t93 = ((x397%x398)*(x399%x400));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t t94 = 5627986251315062LL;

	t94 = ((x401%x402)*(x403%x404));

	if (t94 != -1577580132LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x405 = 27U;
	int16_t x406 = INT16_MAX;
	uint32_t x407 = UINT32_MAX;
	static int32_t x408 = -1;
	volatile uint32_t t95 = 5023243U;

	t95 = ((x405%x406)*(x407%x408));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x409 = 3U;
	volatile int64_t x410 = INT64_MIN;
	static volatile int32_t x411 = INT32_MIN;
	uint16_t x412 = UINT16_MAX;
	int64_t t96 = -104LL;

	t96 = ((x409%x410)*(x411%x412));

	if (t96 != -98304LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MAX;
	int64_t x414 = 13368LL;
	int64_t t97 = -63171339847LL;

	t97 = ((x413%x414)*(x415%x416));

	if (t97 != 25725LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x417 = INT64_MIN;
	int8_t x419 = 49;
	uint16_t x420 = UINT16_MAX;
	volatile int64_t t98 = -6762776064725LL;

	t98 = ((x417%x418)*(x419%x420));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x421 = INT8_MAX;
	uint32_t x422 = 580U;
	volatile int8_t x424 = INT8_MAX;
	int64_t t99 = 5875LL;

	t99 = ((x421%x422)*(x423%x424));

	if (t99 != -127LL) { NG(); } else { ; }
	
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

