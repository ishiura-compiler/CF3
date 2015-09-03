#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x19 = INT32_MIN;
int8_t x22 = INT8_MAX;
volatile int16_t x30 = -1;
uint16_t x32 = 13U;
volatile int64_t t5 = -9087789LL;
int8_t x36 = 15;
uint32_t x37 = 429195361U;
int32_t t7 = 363948529;
volatile uint8_t x61 = 1U;
static int64_t x66 = -542442748942LL;
volatile int32_t x70 = INT32_MIN;
static uint16_t x72 = 19580U;
volatile uint64_t x73 = 22218LLU;
int32_t x74 = 1;
volatile uint8_t x76 = 70U;
int32_t t13 = -2665737;
int16_t x80 = -1;
int32_t x82 = INT32_MIN;
int32_t x85 = -1;
uint8_t x87 = UINT8_MAX;
uint64_t x89 = 67LLU;
static int64_t x98 = -1LL;
static int64_t x99 = INT64_MAX;
uint8_t x104 = 6U;
volatile int8_t x107 = 3;
static int32_t x108 = INT32_MAX;
int16_t x111 = INT16_MIN;
static int32_t x119 = -13;
volatile uint64_t t23 = 1179071467972481LLU;
int32_t x121 = INT32_MAX;
int32_t t24 = -1;
static int8_t x126 = INT8_MIN;
static uint64_t x131 = 5LLU;
static uint32_t x132 = UINT32_MAX;
int64_t x133 = INT64_MIN;
int8_t x140 = -1;
int64_t x141 = INT64_MIN;
static int64_t t29 = 172409108LL;
static int32_t x145 = INT32_MIN;
int8_t x148 = INT8_MIN;
uint8_t x154 = UINT8_MAX;
int64_t t32 = 0LL;
static int16_t x165 = INT16_MIN;
volatile int8_t x169 = INT8_MIN;
int64_t x172 = -1LL;
volatile int16_t x180 = INT16_MIN;
int32_t t37 = 245;
int32_t x182 = INT32_MIN;
uint16_t x196 = 1U;
uint16_t x209 = 201U;
volatile int32_t x213 = INT32_MIN;
volatile uint16_t x215 = 85U;
volatile int32_t t45 = -62381264;
uint64_t t47 = 2073440605048968151LLU;
int16_t x232 = 10033;
int16_t x233 = -1567;
volatile uint16_t x236 = 4U;
int16_t x238 = INT16_MIN;
static volatile int32_t x245 = 262745101;
int16_t x246 = -48;
int32_t x247 = -1;
int32_t x248 = INT32_MIN;
uint16_t x253 = 0U;
uint16_t x254 = 27914U;
int8_t x256 = INT8_MIN;
int32_t t54 = 35;
int8_t x257 = -1;
int64_t x291 = INT64_MIN;
volatile int16_t x293 = -1;
uint64_t x295 = 2238LLU;
volatile uint64_t t62 = 21469551LLU;
int32_t t63 = 0;
int8_t x304 = -21;
static volatile uint64_t x308 = UINT64_MAX;
uint16_t x311 = 3580U;
uint16_t x312 = 2U;
static volatile int32_t t66 = 99158192;
int16_t x313 = -32;
int64_t x323 = 340120811847411LL;
volatile int32_t t71 = -27;
int64_t x334 = INT64_MIN;
int32_t x342 = -601436501;
static volatile int32_t t74 = 833135881;
static int64_t x345 = 426065150LL;
uint64_t x348 = 3745498LLU;
uint64_t t75 = 58LLU;
int32_t x359 = -1;
static volatile int32_t t78 = -1;
static int64_t x387 = -66080435557562LL;
uint64_t x388 = 1189165148728246LLU;
static uint64_t t87 = 0LLU;
int16_t x399 = INT16_MIN;
volatile uint16_t x400 = 1U;
volatile uint8_t x406 = UINT8_MAX;
int64_t x408 = 1LL;
static volatile int64_t x416 = INT64_MAX;
int16_t x422 = 6199;
uint64_t t94 = 20789424LLU;
static int16_t x432 = 208;
uint8_t x438 = 2U;
int8_t x440 = INT8_MAX;
int32_t t97 = 0;
int8_t x447 = -1;


void f0(void) {
	static volatile uint16_t x5 = 63U;
	int32_t x6 = -1;
	int16_t x7 = -11421;
	int8_t x8 = -1;
	volatile int32_t t0 = 193447836;

	t0 = (((x5==x6)%x7)/x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -1;
	int16_t x10 = INT16_MIN;
	int64_t x11 = -1LL;
	volatile uint16_t x12 = 9U;
	static int64_t t1 = -28LL;

	t1 = (((x9==x10)%x11)/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = 6819LLU;
	static int32_t x20 = INT32_MAX;
	int32_t t2 = -21640939;

	t2 = (((x17==x18)%x19)/x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	uint32_t x24 = 613363164U;
	uint32_t t3 = 78836510U;

	t3 = (((x21==x22)%x23)/x24);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -14;
	int8_t x26 = 1;
	int64_t x27 = -1LL;
	int64_t x28 = 118LL;
	volatile int64_t t4 = -4326273626877059LL;

	t4 = (((x25==x26)%x27)/x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 16614450273930LLU;
	int64_t x31 = 3029480LL;

	t5 = (((x29==x30)%x31)/x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x33 = 1301541890U;
	int16_t x34 = INT16_MAX;
	int8_t x35 = INT8_MIN;
	volatile int32_t t6 = 0;

	t6 = (((x33==x34)%x35)/x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 769U;
	volatile uint8_t x39 = UINT8_MAX;
	int32_t x40 = -346130603;

	t7 = (((x37==x38)%x39)/x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 0;
	volatile uint64_t x42 = 3387LLU;
	volatile uint32_t x43 = UINT32_MAX;
	uint32_t x44 = UINT32_MAX;
	uint32_t t8 = 2138257U;

	t8 = (((x41==x42)%x43)/x44);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MIN;
	int64_t x54 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t9 = -393775;

	t9 = (((x53==x54)%x55)/x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MIN;
	static int64_t x64 = 3913604217653885202LL;
	int64_t t10 = 3738944200LL;

	t10 = (((x61==x62)%x63)/x64);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 39U;
	int32_t x67 = INT32_MAX;
	static uint16_t x68 = 4272U;
	int32_t t11 = -1;

	t11 = (((x65==x66)%x67)/x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MIN;
	volatile uint8_t x71 = 15U;
	static int32_t t12 = -23599;

	t12 = (((x69==x70)%x71)/x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x75 = INT32_MIN;

	t13 = (((x73==x74)%x75)/x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 0U;
	int32_t x78 = 3887927;
	int64_t x79 = INT64_MIN;
	volatile int64_t t14 = 2048932279429073LL;

	t14 = (((x77==x78)%x79)/x80);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	int32_t x83 = INT32_MAX;
	static volatile int8_t x84 = -27;
	volatile int32_t t15 = -75;

	t15 = (((x81==x82)%x83)/x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x86 = INT16_MAX;
	int64_t x88 = INT64_MAX;
	volatile int64_t t16 = 3601LL;

	t16 = (((x85==x86)%x87)/x88);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x90 = INT8_MAX;
	volatile int16_t x91 = -1;
	int8_t x92 = 2;
	static volatile int32_t t17 = -9095;

	t17 = (((x89==x90)%x91)/x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x93 = UINT16_MAX;
	volatile uint16_t x94 = 230U;
	int8_t x95 = -1;
	static int32_t x96 = -1;
	static int32_t t18 = 5193;

	t18 = (((x93==x94)%x95)/x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = UINT32_MAX;
	uint8_t x100 = 103U;
	volatile int64_t t19 = -600116573579607792LL;

	t19 = (((x97==x98)%x99)/x100);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = -1;
	int8_t x102 = 5;
	volatile int64_t x103 = INT64_MAX;
	static int64_t t20 = 1LL;

	t20 = (((x101==x102)%x103)/x104);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x105 = 4LLU;
	uint16_t x106 = UINT16_MAX;
	volatile int32_t t21 = -1;

	t21 = (((x105==x106)%x107)/x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = 12344;
	static int16_t x110 = INT16_MAX;
	volatile int8_t x112 = -1;
	static int32_t t22 = 51611;

	t22 = (((x109==x110)%x111)/x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x117 = UINT32_MAX;
	static volatile int16_t x118 = -1;
	uint64_t x120 = 3410LLU;

	t23 = (((x117==x118)%x119)/x120);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x122 = -1;
	volatile uint8_t x123 = 26U;
	int8_t x124 = INT8_MAX;

	t24 = (((x121==x122)%x123)/x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	int16_t x127 = -1;
	int32_t x128 = -4634;
	int32_t t25 = 6059602;

	t25 = (((x125==x126)%x127)/x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	int64_t x130 = INT64_MAX;
	uint64_t t26 = 14LLU;

	t26 = (((x129==x130)%x131)/x132);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x134 = 100183932LLU;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 14U;
	volatile int32_t t27 = -30818;

	t27 = (((x133==x134)%x135)/x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = INT64_MAX;
	volatile int16_t x138 = -1;
	int32_t x139 = INT32_MIN;
	volatile int32_t t28 = 1917951;

	t28 = (((x137==x138)%x139)/x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = INT64_MIN;
	int64_t x144 = INT64_MIN;

	t29 = (((x141==x142)%x143)/x144);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x146 = -17;
	int32_t x147 = -1;
	static volatile int32_t t30 = -1;

	t30 = (((x145==x146)%x147)/x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x153 = 10U;
	int8_t x155 = 1;
	int16_t x156 = 1771;
	volatile int32_t t31 = -6235390;

	t31 = (((x153==x154)%x155)/x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = 147U;
	static int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MIN;

	t32 = (((x157==x158)%x159)/x160);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = 160320954057835LL;
	volatile uint64_t x162 = UINT64_MAX;
	static int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t33 = 50955;

	t33 = (((x161==x162)%x163)/x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x166 = 3196935011517LLU;
	int64_t x167 = INT64_MAX;
	int32_t x168 = 1309703;
	int64_t t34 = 29035700382306252LL;

	t34 = (((x165==x166)%x167)/x168);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x170 = 657;
	int64_t x171 = 1125786165285926848LL;
	volatile int64_t t35 = 498254LL;

	t35 = (((x169==x170)%x171)/x172);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = -1;
	uint16_t x174 = 34U;
	uint64_t x175 = 27078412366518027LLU;
	int16_t x176 = INT16_MIN;
	uint64_t t36 = 7055006LLU;

	t36 = (((x173==x174)%x175)/x176);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = -1;
	int64_t x178 = -1LL;
	int16_t x179 = 387;

	t37 = (((x177==x178)%x179)/x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = -1;
	static int8_t x183 = 1;
	uint32_t x184 = 2188192U;
	uint32_t t38 = 6215U;

	t38 = (((x181==x182)%x183)/x184);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = 119;
	volatile int32_t x186 = INT32_MIN;
	static uint16_t x187 = 5U;
	int16_t x188 = INT16_MIN;
	int32_t t39 = -2;

	t39 = (((x185==x186)%x187)/x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = 3533289302LLU;
	int32_t x190 = -230437686;
	uint64_t x191 = 6931LLU;
	int64_t x192 = -1LL;
	volatile uint64_t t40 = 7493999858LLU;

	t40 = (((x189==x190)%x191)/x192);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = INT32_MAX;
	uint8_t x194 = 14U;
	int16_t x195 = INT16_MAX;
	int32_t t41 = -1;

	t41 = (((x193==x194)%x195)/x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x197 = 10;
	volatile int32_t x198 = INT32_MAX;
	volatile int8_t x199 = INT8_MAX;
	int64_t x200 = INT64_MAX;
	volatile int64_t t42 = 76537596LL;

	t42 = (((x197==x198)%x199)/x200);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x205 = -241657470LL;
	int64_t x206 = -1LL;
	static uint64_t x207 = 8LLU;
	volatile uint32_t x208 = UINT32_MAX;
	static uint64_t t43 = 1673892LLU;

	t43 = (((x205==x206)%x207)/x208);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x210 = 3;
	uint32_t x211 = 640568U;
	int32_t x212 = 944619219;
	uint32_t t44 = 2491159U;

	t44 = (((x209==x210)%x211)/x212);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x214 = 28;
	int8_t x216 = INT8_MIN;

	t45 = (((x213==x214)%x215)/x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 18770820LLU;
	int32_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	int32_t x224 = -1;
	int32_t t46 = 547099;

	t46 = (((x221==x222)%x223)/x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x225 = -3;
	int32_t x226 = -951816076;
	volatile uint64_t x227 = 227979025851LLU;
	uint32_t x228 = 1553U;

	t47 = (((x225==x226)%x227)/x228);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x229 = INT64_MAX;
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = INT32_MAX;
	volatile int32_t t48 = 54386;

	t48 = (((x229==x230)%x231)/x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x234 = INT64_MIN;
	volatile int8_t x235 = INT8_MIN;
	volatile int32_t t49 = 35733471;

	t49 = (((x233==x234)%x235)/x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x237 = 513LL;
	volatile int8_t x239 = INT8_MIN;
	static uint8_t x240 = 14U;
	volatile int32_t t50 = 157804;

	t50 = (((x237==x238)%x239)/x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = UINT16_MAX;
	uint64_t x242 = 668271834LLU;
	int32_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int32_t t51 = 195425666;

	t51 = (((x241==x242)%x243)/x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t t52 = -64959390;

	t52 = (((x245==x246)%x247)/x248);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	int8_t x252 = 18;
	volatile int64_t t53 = 9627314733LL;

	t53 = (((x249==x250)%x251)/x252);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x255 = -1;

	t54 = (((x253==x254)%x255)/x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x258 = -52668LL;
	volatile int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t55 = -21;

	t55 = (((x257==x258)%x259)/x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = INT64_MIN;
	volatile int32_t x266 = INT32_MAX;
	static int16_t x267 = 221;
	static int16_t x268 = INT16_MIN;
	static volatile int32_t t56 = 12789115;

	t56 = (((x265==x266)%x267)/x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x273 = UINT8_MAX;
	int32_t x274 = -1;
	int64_t x275 = INT64_MAX;
	int16_t x276 = INT16_MIN;
	int64_t t57 = -541762139178493493LL;

	t57 = (((x273==x274)%x275)/x276);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MAX;
	int32_t t58 = -483643398;

	t58 = (((x277==x278)%x279)/x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = -1597465260748423533LL;
	static volatile int32_t x282 = -7;
	uint64_t x283 = 29945LLU;
	int8_t x284 = -1;
	volatile uint64_t t59 = 1190815415778827LLU;

	t59 = (((x281==x282)%x283)/x284);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x285 = -208;
	int16_t x286 = INT16_MAX;
	int16_t x287 = -170;
	uint32_t x288 = 11U;
	uint32_t t60 = 2203U;

	t60 = (((x285==x286)%x287)/x288);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = -1;
	int32_t x290 = INT32_MIN;
	int16_t x292 = -1;
	int64_t t61 = -1656668338748LL;

	t61 = (((x289==x290)%x291)/x292);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x294 = INT32_MIN;
	int32_t x296 = -1;

	t62 = (((x293==x294)%x295)/x296);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = -1;
	int16_t x298 = -6;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MAX;

	t63 = (((x297==x298)%x299)/x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x302 = 27U;
	int32_t x303 = -6;
	int32_t t64 = 274568888;

	t64 = (((x301==x302)%x303)/x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -1LL;
	int32_t x306 = -1;
	volatile int32_t x307 = INT32_MIN;
	volatile uint64_t t65 = 154LLU;

	t65 = (((x305==x306)%x307)/x308);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x309 = UINT64_MAX;
	int16_t x310 = INT16_MIN;

	t66 = (((x309==x310)%x311)/x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x314 = 116U;
	volatile int32_t x315 = -118786469;
	int16_t x316 = -1;
	volatile int32_t t67 = 26660;

	t67 = (((x313==x314)%x315)/x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x317 = 793285546405LL;
	int16_t x318 = -1;
	volatile int32_t x319 = INT32_MIN;
	uint16_t x320 = 3660U;
	int32_t t68 = -105385;

	t68 = (((x317==x318)%x319)/x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = INT64_MAX;
	int64_t x322 = INT64_MAX;
	uint16_t x324 = 7848U;
	int64_t t69 = -89106801562LL;

	t69 = (((x321==x322)%x323)/x324);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x325 = 1003U;
	int64_t x326 = INT64_MIN;
	volatile uint16_t x327 = UINT16_MAX;
	uint8_t x328 = 58U;
	volatile int32_t t70 = 17;

	t70 = (((x325==x326)%x327)/x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x329 = INT64_MIN;
	int8_t x330 = 0;
	uint16_t x331 = UINT16_MAX;
	uint16_t x332 = UINT16_MAX;

	t71 = (((x329==x330)%x331)/x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x333 = INT32_MAX;
	int32_t x335 = 3231;
	uint32_t x336 = UINT32_MAX;
	uint32_t t72 = 1U;

	t72 = (((x333==x334)%x335)/x336);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = UINT32_MAX;
	static int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t73 = 5025;

	t73 = (((x337==x338)%x339)/x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x341 = UINT8_MAX;
	int32_t x343 = 225;
	int32_t x344 = 1416;

	t74 = (((x341==x342)%x343)/x344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x346 = 6760203051LLU;
	int64_t x347 = 63LL;

	t75 = (((x345==x346)%x347)/x348);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x349 = INT64_MIN;
	int32_t x350 = 109183;
	int64_t x351 = INT64_MIN;
	int64_t x352 = -1LL;
	int64_t t76 = 323580123873922517LL;

	t76 = (((x349==x350)%x351)/x352);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = INT64_MAX;
	uint16_t x354 = UINT16_MAX;
	uint32_t x355 = 42295U;
	int8_t x356 = 1;
	uint32_t t77 = 12U;

	t77 = (((x353==x354)%x355)/x356);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x357 = 2254LLU;
	int32_t x358 = INT32_MIN;
	int32_t x360 = INT32_MIN;

	t78 = (((x357==x358)%x359)/x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MIN;
	volatile uint32_t x362 = 24U;
	int32_t x363 = -1;
	int8_t x364 = -62;
	int32_t t79 = -30;

	t79 = (((x361==x362)%x363)/x364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x365 = 700U;
	int8_t x366 = INT8_MIN;
	int16_t x367 = INT16_MIN;
	uint64_t x368 = 204559514167409LLU;
	static volatile uint64_t t80 = 29822273911646LLU;

	t80 = (((x365==x366)%x367)/x368);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = -7;
	int8_t x370 = 13;
	volatile uint8_t x371 = 28U;
	static volatile uint32_t x372 = UINT32_MAX;
	static uint32_t t81 = 2509U;

	t81 = (((x369==x370)%x371)/x372);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = -1;
	uint8_t x374 = 34U;
	int16_t x375 = INT16_MAX;
	uint64_t x376 = 4944636669638222LLU;
	uint64_t t82 = 63197LLU;

	t82 = (((x373==x374)%x375)/x376);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x377 = INT64_MIN;
	uint32_t x378 = 327797U;
	uint16_t x379 = UINT16_MAX;
	static uint8_t x380 = UINT8_MAX;
	int32_t t83 = -3402;

	t83 = (((x377==x378)%x379)/x380);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = 42026692U;
	uint32_t x382 = 8U;
	static int64_t x383 = INT64_MIN;
	uint16_t x384 = 882U;
	int64_t t84 = 7881791303LL;

	t84 = (((x381==x382)%x383)/x384);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = 19734;
	static int16_t x386 = 245;
	static volatile uint64_t t85 = 61095LLU;

	t85 = (((x385==x386)%x387)/x388);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x389 = 3U;
	volatile uint64_t x390 = 5010891922800248LLU;
	volatile int16_t x391 = INT16_MIN;
	uint32_t x392 = 7U;
	uint32_t t86 = 10731082U;

	t86 = (((x389==x390)%x391)/x392);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x393 = INT8_MIN;
	int64_t x394 = -1LL;
	uint64_t x395 = 1LLU;
	volatile int32_t x396 = INT32_MIN;

	t87 = (((x393==x394)%x395)/x396);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = INT64_MIN;
	uint8_t x398 = UINT8_MAX;
	volatile int32_t t88 = 159878;

	t88 = (((x397==x398)%x399)/x400);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MAX;
	int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MAX;
	static volatile int64_t t89 = -2616327695249417LL;

	t89 = (((x401==x402)%x403)/x404);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x405 = 6433U;
	int16_t x407 = -1;
	volatile int64_t t90 = -130523LL;

	t90 = (((x405==x406)%x407)/x408);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = UINT16_MAX;
	volatile int32_t x410 = 119928431;
	int16_t x411 = -1;
	uint64_t x412 = 13LLU;
	volatile uint64_t t91 = 6015506656764LLU;

	t91 = (((x409==x410)%x411)/x412);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = -99;
	volatile int64_t x414 = -483LL;
	int64_t x415 = -1LL;
	int64_t t92 = -244222538LL;

	t92 = (((x413==x414)%x415)/x416);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x421 = 50;
	int16_t x423 = 6125;
	int64_t x424 = INT64_MIN;
	volatile int64_t t93 = -8461747987LL;

	t93 = (((x421==x422)%x423)/x424);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x425 = UINT16_MAX;
	int64_t x426 = -47864402075LL;
	static uint64_t x427 = 14LLU;
	volatile int32_t x428 = INT32_MIN;

	t94 = (((x425==x426)%x427)/x428);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = -1;
	int64_t x430 = INT64_MIN;
	volatile int64_t x431 = INT64_MAX;
	static volatile int64_t t95 = 315934517565405418LL;

	t95 = (((x429==x430)%x431)/x432);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x433 = 37;
	volatile int32_t x434 = 2083852;
	volatile int64_t x435 = -7379990LL;
	volatile int16_t x436 = INT16_MIN;
	volatile int64_t t96 = 51LL;

	t96 = (((x433==x434)%x435)/x436);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x437 = 0U;
	int16_t x439 = -1;

	t97 = (((x437==x438)%x439)/x440);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = 1551283121LL;
	int32_t x442 = -13578;
	volatile int16_t x443 = INT16_MAX;
	static int8_t x444 = -32;
	volatile int32_t t98 = -7;

	t98 = (((x441==x442)%x443)/x444);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x445 = -350550;
	static int32_t x446 = INT32_MIN;
	volatile int32_t x448 = INT32_MIN;
	static int32_t t99 = -1889;

	t99 = (((x445==x446)%x447)/x448);

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

