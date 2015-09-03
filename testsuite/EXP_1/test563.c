#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = UINT16_MAX;
static uint32_t x12 = 1121508U;
uint16_t x21 = UINT16_MAX;
static int32_t x22 = INT32_MIN;
volatile int16_t x29 = 40;
int16_t x30 = INT16_MIN;
static int8_t x32 = INT8_MIN;
uint64_t x35 = 2575649546751LLU;
uint8_t x39 = 35U;
uint64_t x44 = 9737LLU;
uint8_t x52 = 127U;
volatile int32_t x57 = -1;
uint8_t x64 = 107U;
uint64_t x73 = UINT64_MAX;
uint32_t x77 = 1993U;
uint16_t x78 = UINT16_MAX;
static volatile int64_t x80 = -489LL;
int64_t t15 = -176713999394244938LL;
volatile uint32_t x81 = UINT32_MAX;
uint8_t x88 = 11U;
uint32_t x89 = 65473U;
volatile uint32_t t18 = 393312U;
static int8_t x96 = INT8_MIN;
static volatile uint64_t t20 = 3876442713360657809LLU;
volatile int32_t x106 = -1;
int64_t x108 = -9852049510600LL;
volatile int32_t t22 = -3;
int16_t x117 = INT16_MIN;
uint32_t x119 = UINT32_MAX;
uint32_t x121 = UINT32_MAX;
uint8_t x122 = 2U;
int16_t x126 = 690;
static int8_t x127 = 2;
volatile int32_t t25 = -12677323;
uint64_t x130 = 378LLU;
volatile int64_t t27 = -576111162686745LL;
static int16_t x139 = 1;
uint64_t t28 = 8775207936LLU;
int16_t x141 = -195;
static int64_t x146 = INT64_MIN;
static int32_t x147 = -1;
volatile int32_t x149 = INT32_MAX;
static int32_t x159 = INT32_MIN;
static uint8_t x165 = 14U;
volatile int8_t x175 = -38;
int16_t x178 = -2;
int8_t x184 = INT8_MAX;
uint32_t x194 = UINT32_MAX;
int64_t x195 = -1LL;
uint8_t x202 = UINT8_MAX;
static volatile int64_t t41 = 80125LL;
int32_t x209 = 784030;
uint16_t x213 = 7422U;
static volatile uint8_t x215 = 17U;
int16_t x216 = INT16_MIN;
int32_t x218 = INT32_MIN;
uint8_t x221 = 43U;
volatile int32_t x223 = INT32_MAX;
int16_t x233 = INT16_MIN;
volatile int64_t x237 = 489008LL;
int64_t x238 = -1LL;
static volatile int64_t x243 = INT64_MAX;
int32_t x244 = -9;
int16_t x245 = INT16_MAX;
int8_t x247 = INT8_MAX;
static int8_t x249 = INT8_MIN;
int16_t x254 = 2508;
static int8_t x255 = 3;
static volatile int64_t x258 = -2LL;
static int32_t x259 = 1814124;
volatile int32_t x261 = 1;
static int32_t x264 = -1;
int8_t x275 = INT8_MAX;
static int64_t x282 = INT64_MAX;
volatile uint64_t t61 = 42569269LLU;
uint64_t x292 = 71753106280LLU;
volatile uint64_t t62 = 274820LLU;
uint8_t x295 = 6U;
volatile int64_t x299 = -1LL;
int64_t x300 = -1LL;
int64_t t68 = -55638344533844128LL;
uint8_t x318 = UINT8_MAX;
int8_t x321 = INT8_MIN;
static int8_t x327 = -1;
volatile int16_t x328 = INT16_MIN;
int16_t x337 = INT16_MIN;
static int64_t t75 = -82590372009LL;
int8_t x346 = INT8_MIN;
int32_t x348 = INT32_MAX;
static volatile uint64_t t76 = 41385552330694833LLU;
volatile int16_t x361 = 746;
volatile int64_t x369 = 147LL;
static volatile uint64_t x370 = 42780478281LLU;
volatile int8_t x379 = -1;
static int16_t x384 = -75;
volatile uint64_t x389 = 199139179611294LLU;
volatile uint64_t t85 = 14LLU;
int16_t x404 = INT16_MAX;
volatile uint8_t x411 = UINT8_MAX;
uint8_t x419 = 1U;
volatile uint64_t t92 = 675248LLU;
volatile int16_t x421 = -15929;
int16_t x425 = INT16_MAX;
int32_t x436 = INT32_MAX;
int64_t x438 = 90532LL;
volatile int64_t x443 = INT64_MIN;
uint64_t t99 = 609378174LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = -5;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 250U;
	uint32_t t0 = 765859801U;

	t0 = (((x1/x2)%x3)/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int32_t x6 = INT32_MAX;
	volatile int16_t x7 = 1671;
	volatile int32_t t1 = -12;

	t1 = (((x5/x6)%x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = -1LL;
	volatile int16_t x11 = -1;
	int64_t t2 = 7188LL;

	t2 = (((x9/x10)%x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -8;
	int8_t x14 = INT8_MIN;
	uint32_t x15 = 1932466U;
	volatile int64_t x16 = INT64_MIN;
	int64_t t3 = -2498172LL;

	t3 = (((x13/x14)%x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x23 = -592659211;
	int64_t x24 = -1LL;
	int64_t t4 = -941LL;

	t4 = (((x21/x22)%x23)/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x31 = UINT32_MAX;
	uint32_t t5 = 1050825222U;

	t5 = (((x29/x30)%x31)/x32);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	uint8_t x34 = 1U;
	uint32_t x36 = UINT32_MAX;
	volatile uint64_t t6 = 1884944820408LLU;

	t6 = (((x33/x34)%x35)/x36);

	if (t6 != 293LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	int32_t x38 = INT32_MIN;
	int64_t x40 = 11870403LL;
	int64_t t7 = -369595838LL;

	t7 = (((x37/x38)%x39)/x40);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = INT64_MAX;
	static uint8_t x42 = 26U;
	static volatile uint32_t x43 = UINT32_MAX;
	volatile uint64_t t8 = 62237283526165712LLU;

	t8 = (((x41/x42)%x43)/x44);

	if (t8 != 415649LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = 2620;
	static uint8_t x50 = UINT8_MAX;
	uint16_t x51 = 263U;
	int32_t t9 = 6629608;

	t9 = (((x49/x50)%x51)/x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = -1;
	volatile uint16_t x54 = 846U;
	uint64_t x55 = 13493923087313LLU;
	int8_t x56 = INT8_MAX;
	volatile uint64_t t10 = 5958533LLU;

	t10 = (((x53/x54)%x55)/x56);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = INT16_MIN;
	int32_t x59 = 7446;
	uint8_t x60 = UINT8_MAX;
	int32_t t11 = -5605;

	t11 = (((x57/x58)%x59)/x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x61 = INT32_MIN;
	uint32_t x62 = 113U;
	static int8_t x63 = -1;
	volatile uint32_t t12 = 0U;

	t12 = (((x61/x62)%x63)/x64);

	if (t12 != 177610U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = INT8_MIN;
	uint8_t x66 = UINT8_MAX;
	uint32_t x67 = UINT32_MAX;
	volatile int64_t x68 = 25461455382816LL;
	int64_t t13 = -312522LL;

	t13 = (((x65/x66)%x67)/x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x74 = UINT64_MAX;
	volatile int64_t x75 = INT64_MIN;
	static int64_t x76 = -1LL;
	volatile uint64_t t14 = 54080436386162058LLU;

	t14 = (((x73/x74)%x75)/x76);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x79 = UINT8_MAX;

	t15 = (((x77/x78)%x79)/x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x82 = 57U;
	int32_t x83 = -1;
	int16_t x84 = -1;
	volatile uint32_t t16 = 232U;

	t16 = (((x81/x82)%x83)/x84);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 1;
	static int64_t x86 = INT64_MIN;
	volatile int64_t x87 = 1105113256LL;
	static volatile int64_t t17 = 106918554LL;

	t17 = (((x85/x86)%x87)/x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x90 = -41163972;
	uint32_t x91 = 1245521U;
	uint8_t x92 = UINT8_MAX;

	t18 = (((x89/x90)%x91)/x92);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = -203;
	volatile int8_t x94 = INT8_MIN;
	uint8_t x95 = 82U;
	int32_t t19 = -1262;

	t19 = (((x93/x94)%x95)/x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = 604;
	volatile uint16_t x98 = 1215U;
	uint16_t x99 = UINT16_MAX;
	uint64_t x100 = 15443513613724LLU;

	t20 = (((x97/x98)%x99)/x100);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x105 = 5195740511LLU;
	int64_t x107 = INT64_MAX;
	volatile uint64_t t21 = 1307937571747985052LLU;

	t21 = (((x105/x106)%x107)/x108);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x109 = 22U;
	int32_t x110 = 783302;
	static uint16_t x111 = 607U;
	uint8_t x112 = UINT8_MAX;

	t22 = (((x109/x110)%x111)/x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x118 = 2498448U;
	uint32_t x120 = UINT32_MAX;
	uint32_t t23 = 7U;

	t23 = (((x117/x118)%x119)/x120);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x123 = -1LL;
	uint8_t x124 = 7U;
	int64_t t24 = 5715LL;

	t24 = (((x121/x122)%x123)/x124);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MAX;
	uint8_t x128 = 1U;

	t25 = (((x125/x126)%x127)/x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = -1;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	static uint64_t t26 = 3674884122814961669LLU;

	t26 = (((x129/x130)%x131)/x132);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x133 = -1;
	static int64_t x134 = INT64_MIN;
	uint8_t x135 = UINT8_MAX;
	int32_t x136 = INT32_MAX;

	t27 = (((x133/x134)%x135)/x136);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x137 = 6793610U;
	volatile int64_t x138 = -3LL;
	uint64_t x140 = 41593201132LLU;

	t28 = (((x137/x138)%x139)/x140);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x142 = UINT8_MAX;
	static uint16_t x143 = UINT16_MAX;
	volatile uint32_t x144 = 433568255U;
	uint32_t t29 = 7146695U;

	t29 = (((x141/x142)%x143)/x144);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = INT16_MIN;
	int32_t x148 = 54;
	volatile int64_t t30 = 5LL;

	t30 = (((x145/x146)%x147)/x148);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x150 = -1961;
	volatile int8_t x151 = 3;
	int32_t x152 = INT32_MIN;
	int32_t t31 = -844886965;

	t31 = (((x149/x150)%x151)/x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MIN;
	volatile int32_t x160 = INT32_MAX;
	static int64_t t32 = -3181781554LL;

	t32 = (((x157/x158)%x159)/x160);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x166 = UINT16_MAX;
	uint64_t x167 = 6203LLU;
	int32_t x168 = 215824;
	uint64_t t33 = 394516273352522819LLU;

	t33 = (((x165/x166)%x167)/x168);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x169 = UINT16_MAX;
	static int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 1U;
	int64_t t34 = -22213672698764751LL;

	t34 = (((x169/x170)%x171)/x172);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MIN;
	uint8_t x176 = 1U;
	int32_t t35 = -82229;

	t35 = (((x173/x174)%x175)/x176);

	if (t35 != 28) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MIN;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	static int32_t t36 = -22;

	t36 = (((x177/x178)%x179)/x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MIN;
	volatile int64_t x182 = INT64_MIN;
	int8_t x183 = -52;
	int64_t t37 = 117773846LL;

	t37 = (((x181/x182)%x183)/x184);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x189 = 1U;
	static volatile uint64_t x190 = 160971053275817715LLU;
	int8_t x191 = INT8_MIN;
	uint8_t x192 = 5U;
	uint64_t t38 = 118203705677263LLU;

	t38 = (((x189/x190)%x191)/x192);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x193 = UINT8_MAX;
	uint8_t x196 = 4U;
	int64_t t39 = 141549379183LL;

	t39 = (((x193/x194)%x195)/x196);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = 11;
	static int64_t x198 = 3486654LL;
	int64_t x199 = -1LL;
	volatile int8_t x200 = INT8_MIN;
	int64_t t40 = 22643231LL;

	t40 = (((x197/x198)%x199)/x200);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = -59552827532909LL;
	static uint16_t x203 = 2669U;
	static int8_t x204 = -1;

	t41 = (((x201/x202)%x203)/x204);

	if (t41 != 173LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = INT16_MAX;
	int16_t x206 = 769;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = -1;
	int32_t t42 = 5418;

	t42 = (((x205/x206)%x207)/x208);

	if (t42 != -42) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x210 = INT8_MAX;
	uint32_t x211 = 2U;
	int32_t x212 = 1547;
	uint32_t t43 = 32497180U;

	t43 = (((x209/x210)%x211)/x212);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x214 = UINT8_MAX;
	volatile int32_t t44 = -164490;

	t44 = (((x213/x214)%x215)/x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = INT64_MIN;
	static uint16_t x219 = UINT16_MAX;
	uint32_t x220 = UINT32_MAX;
	int64_t t45 = 825371796LL;

	t45 = (((x217/x218)%x219)/x220);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x222 = INT16_MAX;
	static uint8_t x224 = 1U;
	volatile int32_t t46 = 0;

	t46 = (((x221/x222)%x223)/x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MAX;
	uint8_t x227 = 2U;
	int8_t x228 = INT8_MIN;
	int32_t t47 = 16149;

	t47 = (((x225/x226)%x227)/x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x229 = -72890644;
	int32_t x230 = -1;
	int8_t x231 = -1;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t48 = -146;

	t48 = (((x229/x230)%x231)/x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x234 = -25;
	int8_t x235 = INT8_MIN;
	int64_t x236 = -13331229LL;
	volatile int64_t t49 = -243235840562752160LL;

	t49 = (((x233/x234)%x235)/x236);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x239 = INT16_MIN;
	int64_t x240 = INT64_MAX;
	static int64_t t50 = 485419296LL;

	t50 = (((x237/x238)%x239)/x240);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x241 = INT8_MIN;
	int32_t x242 = -852956457;
	int64_t t51 = 853331LL;

	t51 = (((x241/x242)%x243)/x244);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x246 = 244239804U;
	int8_t x248 = 1;
	volatile uint32_t t52 = 14670U;

	t52 = (((x245/x246)%x247)/x248);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x250 = INT8_MAX;
	int16_t x251 = INT16_MIN;
	static int64_t x252 = INT64_MAX;
	int64_t t53 = -8754100521LL;

	t53 = (((x249/x250)%x251)/x252);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x253 = 3107225503LLU;
	int16_t x256 = INT16_MIN;
	uint64_t t54 = 2560LLU;

	t54 = (((x253/x254)%x255)/x256);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x257 = INT64_MAX;
	uint8_t x260 = 10U;
	int64_t t55 = -499101654503341LL;

	t55 = (((x257/x258)%x259)/x260);

	if (t55 != -175328LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x262 = 21U;
	uint32_t x263 = 4408U;
	uint32_t t56 = 189112794U;

	t56 = (((x261/x262)%x263)/x264);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x265 = 37902U;
	volatile int8_t x266 = -1;
	static volatile uint8_t x267 = UINT8_MAX;
	int64_t x268 = INT64_MAX;
	int64_t t57 = 356015881756LL;

	t57 = (((x265/x266)%x267)/x268);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = -1;
	volatile int8_t x270 = INT8_MAX;
	static int64_t x271 = INT64_MIN;
	int16_t x272 = -384;
	volatile int64_t t58 = 12917051841LL;

	t58 = (((x269/x270)%x271)/x272);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x273 = 1719065905592570121LLU;
	int32_t x274 = INT32_MAX;
	uint16_t x276 = 5U;
	volatile uint64_t t59 = 29542640LLU;

	t59 = (((x273/x274)%x275)/x276);

	if (t59 != 21LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x281 = INT32_MIN;
	volatile int8_t x283 = INT8_MIN;
	uint64_t x284 = UINT64_MAX;
	static uint64_t t60 = 3827701LLU;

	t60 = (((x281/x282)%x283)/x284);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MIN;
	volatile int64_t x287 = -2034430741708103LL;
	uint64_t x288 = UINT64_MAX;

	t61 = (((x285/x286)%x287)/x288);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x289 = INT32_MAX;
	static int16_t x290 = -19;
	volatile int8_t x291 = -1;

	t62 = (((x289/x290)%x291)/x292);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	static int64_t x296 = -20146055LL;
	int64_t t63 = 231013959LL;

	t63 = (((x293/x294)%x295)/x296);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x297 = 249812930853779003LLU;
	int16_t x298 = INT16_MIN;
	uint64_t t64 = 408459052656LLU;

	t64 = (((x297/x298)%x299)/x300);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x301 = 11U;
	uint16_t x302 = 132U;
	int64_t x303 = -15486758795LL;
	int32_t x304 = INT32_MIN;
	int64_t t65 = -6LL;

	t65 = (((x301/x302)%x303)/x304);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = -1;
	static uint32_t x306 = 2U;
	volatile int64_t x307 = -29965081LL;
	int8_t x308 = INT8_MAX;
	volatile int64_t t66 = 12452972963204LL;

	t66 = (((x305/x306)%x307)/x308);

	if (t66 != 157188LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x309 = 2U;
	uint64_t x310 = UINT64_MAX;
	uint32_t x311 = UINT32_MAX;
	uint8_t x312 = 54U;
	static volatile uint64_t t67 = 77317341LLU;

	t67 = (((x309/x310)%x311)/x312);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x313 = INT64_MAX;
	int8_t x314 = INT8_MIN;
	static int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MAX;

	t68 = (((x313/x314)%x315)/x316);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 13U;
	volatile uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 56186991327684428LLU;
	volatile uint64_t t69 = 17721281958513827LLU;

	t69 = (((x317/x318)%x319)/x320);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	volatile int32_t x324 = -104693657;
	int32_t t70 = 1;

	t70 = (((x321/x322)%x323)/x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MIN;
	uint32_t x326 = 45891858U;
	uint32_t t71 = 26351U;

	t71 = (((x325/x326)%x327)/x328);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = 2421398U;
	static uint64_t x331 = UINT64_MAX;
	int32_t x332 = INT32_MIN;
	uint64_t t72 = 225889969LLU;

	t72 = (((x329/x330)%x331)/x332);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = -1LL;
	volatile int64_t x334 = INT64_MAX;
	uint8_t x335 = 2U;
	static uint64_t x336 = 307324545558881LLU;
	uint64_t t73 = 48562LLU;

	t73 = (((x333/x334)%x335)/x336);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x338 = INT64_MIN;
	static int64_t x339 = -1LL;
	int16_t x340 = INT16_MIN;
	int64_t t74 = 0LL;

	t74 = (((x337/x338)%x339)/x340);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = 0;
	int8_t x342 = -1;
	int64_t x343 = -1LL;
	int32_t x344 = INT32_MAX;

	t75 = (((x341/x342)%x343)/x344);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = INT8_MAX;
	static uint64_t x347 = 1387272LLU;

	t76 = (((x345/x346)%x347)/x348);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = -1LL;
	uint16_t x350 = UINT16_MAX;
	uint16_t x351 = 452U;
	uint64_t x352 = 25637308655183LLU;
	uint64_t t77 = 1LLU;

	t77 = (((x349/x350)%x351)/x352);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = -10763382701LL;
	volatile int32_t x354 = INT32_MAX;
	uint32_t x355 = 396077U;
	static int8_t x356 = INT8_MAX;
	volatile int64_t t78 = 26465856931901800LL;

	t78 = (((x353/x354)%x355)/x356);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x362 = -1;
	uint16_t x363 = 1U;
	static int16_t x364 = -1;
	int32_t t79 = 28774;

	t79 = (((x361/x362)%x363)/x364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x371 = -1;
	static int8_t x372 = -1;
	uint64_t t80 = 7408LLU;

	t80 = (((x369/x370)%x371)/x372);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MIN;
	static int16_t x374 = INT16_MAX;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = -1;
	volatile uint32_t t81 = 11U;

	t81 = (((x373/x374)%x375)/x376);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = -189667;
	uint8_t x380 = 74U;
	int32_t t82 = 763181;

	t82 = (((x377/x378)%x379)/x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	volatile uint32_t x382 = UINT32_MAX;
	static volatile int64_t x383 = -1LL;
	static volatile int64_t t83 = -9739897906LL;

	t83 = (((x381/x382)%x383)/x384);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x385 = 62;
	uint64_t x386 = UINT64_MAX;
	int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MIN;
	static uint64_t t84 = 53669590907270578LLU;

	t84 = (((x385/x386)%x387)/x388);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x390 = -1;
	int64_t x391 = -1386167LL;
	volatile int16_t x392 = INT16_MIN;

	t85 = (((x389/x390)%x391)/x392);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MAX;
	volatile int32_t x394 = -47;
	int32_t x395 = INT32_MIN;
	static int32_t x396 = INT32_MAX;
	volatile int32_t t86 = -120703657;

	t86 = (((x393/x394)%x395)/x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x397 = INT16_MIN;
	static int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MIN;
	volatile int64_t t87 = 13LL;

	t87 = (((x397/x398)%x399)/x400);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = 2;
	int32_t x402 = INT32_MAX;
	int16_t x403 = 590;
	static volatile int32_t t88 = -12;

	t88 = (((x401/x402)%x403)/x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = INT64_MIN;
	int32_t x406 = -7340487;
	static int32_t x407 = 55;
	int16_t x408 = -3;
	int64_t t89 = -1835LL;

	t89 = (((x405/x406)%x407)/x408);

	if (t89 != -3LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x409 = INT32_MIN;
	volatile uint64_t x410 = UINT64_MAX;
	static int64_t x412 = INT64_MAX;
	volatile uint64_t t90 = 37LLU;

	t90 = (((x409/x410)%x411)/x412);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = INT64_MAX;
	int8_t x414 = -1;
	volatile int8_t x415 = INT8_MIN;
	int8_t x416 = -1;
	volatile int64_t t91 = -2LL;

	t91 = (((x413/x414)%x415)/x416);

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x417 = INT8_MAX;
	uint64_t x418 = 23843825201LLU;
	volatile int16_t x420 = INT16_MAX;

	t92 = (((x417/x418)%x419)/x420);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x422 = 1LL;
	volatile int16_t x423 = INT16_MIN;
	static uint64_t x424 = UINT64_MAX;
	static uint64_t t93 = 199694126182LLU;

	t93 = (((x421/x422)%x423)/x424);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x426 = -1;
	static int16_t x427 = -1;
	int8_t x428 = INT8_MAX;
	volatile int32_t t94 = -1;

	t94 = (((x425/x426)%x427)/x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x429 = 36882145U;
	int16_t x430 = INT16_MIN;
	volatile uint8_t x431 = UINT8_MAX;
	volatile int8_t x432 = INT8_MAX;
	uint32_t t95 = 1U;

	t95 = (((x429/x430)%x431)/x432);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = INT8_MAX;
	static int64_t x434 = INT64_MIN;
	static int16_t x435 = INT16_MIN;
	volatile int64_t t96 = -30LL;

	t96 = (((x433/x434)%x435)/x436);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x437 = 2U;
	static volatile uint8_t x439 = 3U;
	static volatile int16_t x440 = -199;
	int64_t t97 = 108609526585184265LL;

	t97 = (((x437/x438)%x439)/x440);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MAX;
	int64_t x442 = INT64_MIN;
	uint64_t x444 = 110883974LLU;
	volatile uint64_t t98 = 558198424465LLU;

	t98 = (((x441/x442)%x443)/x444);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x445 = UINT64_MAX;
	int8_t x446 = INT8_MIN;
	uint32_t x447 = 3U;
	volatile int64_t x448 = INT64_MIN;

	t99 = (((x445/x446)%x447)/x448);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

