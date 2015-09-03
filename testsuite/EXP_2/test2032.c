#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x1 = INT16_MIN;
volatile int16_t x2 = INT16_MIN;
static volatile int16_t x5 = 1;
int16_t x6 = INT16_MAX;
int64_t x18 = -1LL;
uint64_t t5 = 1534311LLU;
volatile int64_t t9 = -810589066639986491LL;
int8_t x44 = -1;
int64_t t10 = -1LL;
int32_t x47 = -162651;
int64_t t11 = 156754LL;
static volatile uint16_t x53 = UINT16_MAX;
volatile int32_t t13 = -7189;
static int32_t x61 = INT32_MIN;
int16_t x66 = -1;
uint64_t t16 = 1815663884768LLU;
static int64_t x78 = INT64_MIN;
uint32_t t19 = 272U;
volatile int16_t x93 = INT16_MAX;
static int32_t t23 = 5;
int64_t x106 = 1546011904806984582LL;
static uint64_t x111 = UINT64_MAX;
static int64_t x112 = 7799LL;
int64_t x119 = -1LL;
static int16_t x121 = -1;
int16_t x122 = 3880;
int32_t x125 = INT32_MIN;
static uint64_t x128 = 15LLU;
int32_t x135 = INT32_MAX;
volatile int32_t t32 = 1;
static int64_t x145 = -6548622LL;
int8_t x146 = INT8_MIN;
int32_t x147 = -1;
int32_t x148 = -1;
int64_t x155 = 52359844LL;
static volatile int64_t x156 = INT64_MIN;
static int32_t x160 = 284212241;
static volatile uint64_t t37 = 69357222LLU;
volatile int16_t x164 = 44;
volatile uint32_t t38 = 31757801U;
static uint8_t x165 = UINT8_MAX;
int32_t x169 = 5;
uint16_t x184 = UINT16_MAX;
int8_t x194 = INT8_MAX;
int64_t t45 = 1663594041288368543LL;
uint32_t x206 = UINT32_MAX;
static int64_t t47 = -54664914221221LL;
int32_t x215 = 7574;
uint16_t x219 = 20U;
int8_t x225 = -6;
static int16_t x226 = INT16_MAX;
int32_t t54 = 2658;
int16_t x249 = -1;
volatile uint64_t t60 = 424908025185046932LLU;
int64_t x270 = INT64_MIN;
volatile int32_t x274 = INT32_MIN;
uint16_t x275 = 81U;
uint32_t x276 = 3U;
int64_t t64 = -9LL;
int8_t x289 = INT8_MIN;
uint16_t x291 = UINT16_MAX;
volatile int32_t x292 = INT32_MIN;
volatile int32_t t67 = -993479380;
int32_t x294 = INT32_MIN;
static int64_t x301 = -1LL;
volatile uint16_t x303 = UINT16_MAX;
volatile int8_t x304 = -2;
int16_t x305 = INT16_MAX;
volatile int64_t t71 = 14760347714037LL;
volatile int32_t x313 = INT32_MAX;
int16_t x314 = INT16_MIN;
static int16_t x324 = -1;
static int8_t x329 = INT8_MAX;
uint64_t x333 = 185891288LLU;
volatile int32_t x334 = -1;
int16_t x339 = -1;
volatile uint16_t x346 = 47U;
int64_t t79 = 1LL;
volatile uint32_t x350 = 205189758U;
static uint8_t x351 = 2U;
int8_t x355 = -1;
int8_t x359 = INT8_MIN;
uint32_t t82 = 1044521988U;
volatile int16_t x362 = -1;
int32_t x364 = INT32_MAX;
int32_t x376 = -105681723;
volatile int8_t x377 = 4;
uint32_t x379 = 11U;
int32_t x381 = 5272475;
int64_t x382 = 609766744LL;
static int64_t x387 = 77038LL;
int64_t x389 = INT64_MIN;
uint16_t x401 = 84U;
volatile int16_t x407 = -12433;
volatile int32_t x409 = INT32_MAX;
uint8_t x428 = 20U;
volatile int16_t x431 = -1;
uint64_t x441 = UINT64_MAX;
volatile int16_t x442 = -1798;


void f0(void) {
	uint8_t x3 = 2U;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 300554511;

	t0 = ((x1+(x2^x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x7 = -1218818355516LL;
	static volatile uint16_t x8 = 210U;
	static int64_t t1 = 7LL;

	t1 = ((x5+(x6^x7))/x8);

	if (t1 != -5803896967LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = 970981230U;
	static volatile int8_t x11 = -1;
	static int16_t x12 = -12;
	uint32_t t2 = 11U;

	t2 = ((x9+(x10^x11))/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = 433149333234LLU;
	uint16_t x15 = 3U;
	uint16_t x16 = 220U;
	volatile uint64_t t3 = 11170792104LLU;

	t3 = ((x13+(x14^x15))/x16);

	if (t3 != 41924420318200495LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 586U;
	int8_t x19 = 5;
	int32_t x20 = INT32_MAX;
	static volatile int64_t t4 = -1166626143513LL;

	t4 = ((x17+(x18^x19))/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MIN;
	int16_t x24 = 31;

	t5 = ((x21+(x22^x23))/x24);

	if (t5 != 297528130151848134LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -254;
	volatile int8_t x26 = INT8_MIN;
	volatile uint64_t x27 = 0LLU;
	volatile uint16_t x28 = 410U;
	uint64_t t6 = 137995183821559799LLU;

	t6 = ((x25+(x26^x27))/x28);

	if (t6 != 44992058716364759LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 182503743LLU;
	int64_t x30 = -1LL;
	int32_t x31 = -1;
	uint64_t x32 = 6887282745LLU;
	volatile uint64_t t7 = 75LLU;

	t7 = ((x29+(x30^x31))/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	volatile int16_t x34 = 1;
	volatile int32_t x35 = -1;
	uint16_t x36 = 11558U;
	int32_t t8 = -45286043;

	t8 = ((x33+(x34^x35))/x36);

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x38 = 0;
	uint16_t x39 = 1783U;
	static int64_t x40 = 3LL;

	t9 = ((x37+(x38^x39))/x40);

	if (t9 != 594LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = -1LL;
	int32_t x43 = -1;

	t10 = ((x41+(x42^x43))/x44);

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 12002U;
	volatile uint32_t x46 = 135454626U;
	int64_t x48 = INT64_MAX;

	t11 = ((x45+(x46^x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 48;
	volatile int8_t x50 = 56;
	int8_t x51 = -1;
	uint16_t x52 = 6119U;
	volatile int32_t t12 = -533046;

	t12 = ((x49+(x50^x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	static uint8_t x55 = 1U;
	int16_t x56 = -1;

	t13 = ((x53+(x54^x55))/x56);

	if (t13 != 2147418112) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	uint32_t x58 = 13000238U;
	static uint32_t x59 = UINT32_MAX;
	int64_t x60 = -1LL;
	int64_t t14 = -2552961410699LL;

	t14 = ((x57+(x58^x59))/x60);

	if (t14 != -4281999824LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 27532U;
	int32_t x63 = -1;
	static int32_t x64 = -38095322;
	volatile uint32_t t15 = 86U;

	t15 = ((x61+(x62^x63))/x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	static uint64_t x67 = 21311136716LLU;
	volatile int32_t x68 = -4;

	t16 = ((x65+(x66^x67))/x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1LLU;
	int32_t x70 = -9298;
	static int32_t x71 = 98;
	volatile int16_t x72 = INT16_MAX;
	volatile uint64_t t17 = 1588104381288455LLU;

	t17 = ((x69+(x70^x71))/x72);

	if (t17 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -52599547LL;
	uint64_t x79 = 5764186743865594LLU;
	volatile int16_t x80 = -177;
	uint64_t t18 = 26LLU;

	t18 = ((x77+(x78^x79))/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 21U;
	static volatile uint32_t x82 = UINT32_MAX;
	static int32_t x83 = -25530881;
	uint32_t x84 = 1U;

	t19 = ((x81+(x82^x83))/x84);

	if (t19 != 25530901U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 242U;
	uint8_t x90 = 0U;
	static volatile int8_t x91 = 5;
	uint64_t x92 = 1994688290LLU;
	volatile uint64_t t20 = 5420800230593LLU;

	t20 = ((x89+(x90^x91))/x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = INT8_MIN;
	int16_t x95 = -454;
	int64_t x96 = INT64_MIN;
	int64_t t21 = -1350LL;

	t21 = ((x93+(x94^x95))/x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = INT64_MAX;
	static uint32_t x98 = UINT32_MAX;
	int32_t x99 = -1;
	volatile uint16_t x100 = UINT16_MAX;
	volatile int64_t t22 = 40643LL;

	t22 = ((x97+(x98^x99))/x100);

	if (t22 != 140739635871744LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	uint16_t x102 = UINT16_MAX;
	uint16_t x103 = 2636U;
	int16_t x104 = -1;

	t23 = ((x101+(x102^x103))/x104);

	if (t23 != -128434) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int8_t x107 = INT8_MAX;
	static int16_t x108 = -6;
	volatile int64_t t24 = -46519169LL;

	t24 = ((x105+(x106^x107))/x108);

	if (t24 != -257668650801175038LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	volatile uint64_t t25 = 81316821777LLU;

	t25 = ((x109+(x110^x111))/x112);

	if (t25 != 4LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 22U;
	static int16_t x114 = -1;
	volatile int8_t x115 = 1;
	int64_t x116 = INT64_MIN;
	int64_t t26 = 251266LL;

	t26 = ((x113+(x114^x115))/x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 77LLU;
	uint32_t x118 = 6902U;
	uint16_t x120 = UINT16_MAX;
	volatile uint64_t t27 = 856LLU;

	t27 = ((x117+(x118^x119))/x120);

	if (t27 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x123 = -28;
	volatile uint16_t x124 = 118U;
	volatile int32_t t28 = -20013;

	t28 = ((x121+(x122^x123))/x124);

	if (t28 != -32) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = -65375106661LL;
	int16_t x127 = INT16_MAX;
	static volatile uint64_t t29 = 74LLU;

	t29 = ((x125+(x126^x127))/x128);

	if (t29 != 1229782933745799277LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = 7069;
	volatile int64_t x131 = INT64_MAX;
	int64_t x132 = -1LL;
	volatile int64_t t30 = -879932LL;

	t30 = ((x129+(x130^x131))/x132);

	if (t30 != -9223372034707285090LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 1;
	volatile int32_t x134 = -1;
	uint16_t x136 = UINT16_MAX;
	int32_t t31 = 497285208;

	t31 = ((x133+(x134^x135))/x136);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	static int32_t x138 = 30666365;
	static volatile uint8_t x139 = UINT8_MAX;
	static volatile int16_t x140 = INT16_MIN;

	t32 = ((x137+(x138^x139))/x140);

	if (t32 != -934) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x141 = 1871484;
	int64_t x142 = 241LL;
	static volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = -281037425;
	static volatile uint64_t t33 = 1978654766397677129LLU;

	t33 = ((x141+(x142^x143))/x144);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t t34 = -367LL;

	t34 = ((x145+(x146^x147))/x148);

	if (t34 != 6548495LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	volatile int64_t x150 = 236958054LL;
	int8_t x151 = INT8_MAX;
	volatile uint32_t x152 = 672436931U;
	int64_t t35 = -611764841749540LL;

	t35 = ((x149+(x150^x151))/x152);

	if (t35 != -13716337713LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = 3;
	int32_t x154 = -34874;
	int64_t t36 = 312278138583518912LL;

	t36 = ((x153+(x154^x155))/x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	uint64_t x159 = 2027167057374LLU;

	t37 = ((x157+(x158^x159))/x160);

	if (t37 != 32452416649LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x161 = UINT32_MAX;
	int8_t x162 = 26;
	int32_t x163 = -1;

	t38 = ((x161+(x162^x163))/x164);

	if (t38 != 97612892U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x166 = INT64_MAX;
	volatile int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MAX;
	volatile int64_t t39 = 1273LL;

	t39 = ((x165+(x166^x167))/x168);

	if (t39 != -72624976668147838LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = INT64_MAX;
	volatile int8_t x171 = -1;
	int8_t x172 = -1;
	static volatile int64_t t40 = -19379393986LL;

	t40 = ((x169+(x170^x171))/x172);

	if (t40 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 1U;
	int16_t x182 = INT16_MIN;
	int32_t x183 = 1905429;
	volatile int32_t t41 = 1443353;

	t41 = ((x181+(x182^x183))/x184);

	if (t41 != -29) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -1;
	int16_t x186 = -1;
	uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 1775U;
	volatile int32_t t42 = 0;

	t42 = ((x185+(x186^x187))/x188);

	if (t42 != -36) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x189 = UINT64_MAX;
	static int16_t x190 = INT16_MIN;
	static int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	uint64_t t43 = 3738415764960038LLU;

	t43 = ((x189+(x190^x191))/x192);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	static uint8_t x195 = 1U;
	static int32_t x196 = -1;
	int32_t t44 = -1;

	t44 = ((x193+(x194^x195))/x196);

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x197 = INT64_MAX;
	int64_t x198 = 15858879LL;
	int16_t x199 = INT16_MIN;
	volatile int8_t x200 = -2;

	t45 = ((x197+(x198^x199))/x200);

	if (t45 != -4611686018419474015LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x202 = UINT32_MAX;
	volatile int32_t x203 = -1541613;
	uint32_t x204 = 3U;
	uint32_t t46 = 7308952U;

	t46 = ((x201+(x202^x203))/x204);

	if (t46 != 513870U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MIN;
	int64_t x207 = -33963565420531431LL;
	int64_t x208 = 109130770822312LL;

	t47 = ((x205+(x206^x207))/x208);

	if (t47 != -311LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x209 = 1022U;
	volatile uint8_t x210 = 1U;
	static uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MIN;
	static uint32_t t48 = 189320974U;

	t48 = ((x209+(x210^x211))/x212);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = 28852U;
	static uint32_t x214 = UINT32_MAX;
	uint8_t x216 = 2U;
	volatile uint32_t t49 = 27874215U;

	t49 = ((x213+(x214^x215))/x216);

	if (t49 != 10638U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MIN;
	volatile uint16_t x218 = 30947U;
	int32_t x220 = 116;
	volatile int64_t t50 = -6404272831039491LL;

	t50 = ((x217+(x218^x219))/x220);

	if (t50 != -79511827903920214LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 5LLU;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = 55U;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t51 = 2160LLU;

	t51 = ((x221+(x222^x223))/x224);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x227 = INT8_MAX;
	volatile uint32_t x228 = 13596703U;
	uint32_t t52 = 11U;

	t52 = ((x225+(x226^x227))/x228);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x229 = INT64_MAX;
	static uint32_t x230 = UINT32_MAX;
	int32_t x231 = -1;
	int16_t x232 = 3;
	int64_t t53 = 7LL;

	t53 = ((x229+(x230^x231))/x232);

	if (t53 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = 12134;
	int8_t x234 = -16;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = 14U;

	t54 = ((x233+(x234^x235))/x236);

	if (t54 != 874) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x237 = -1;
	int8_t x238 = INT8_MIN;
	uint8_t x239 = 31U;
	uint32_t x240 = 1017712U;
	volatile uint32_t t55 = 453298707U;

	t55 = ((x237+(x238^x239))/x240);

	if (t55 != 4220U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x241 = 1U;
	static uint64_t x242 = UINT64_MAX;
	uint8_t x243 = 0U;
	int32_t x244 = -1;
	uint64_t t56 = 23LLU;

	t56 = ((x241+(x242^x243))/x244);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = 14;
	int16_t x246 = -42;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = 16326U;
	volatile int32_t t57 = 10568;

	t57 = ((x245+(x246^x247))/x248);

	if (t57 != 131537) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x250 = INT8_MIN;
	static uint8_t x251 = UINT8_MAX;
	int16_t x252 = 1;
	volatile int32_t t58 = -7;

	t58 = ((x249+(x250^x251))/x252);

	if (t58 != -130) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = 0;
	int64_t x254 = INT64_MIN;
	uint32_t x255 = UINT32_MAX;
	volatile uint8_t x256 = 22U;
	volatile int64_t t59 = 180421440LL;

	t59 = ((x253+(x254^x255))/x256);

	if (t59 != -419244183298173114LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x257 = -453481LL;
	static int16_t x258 = INT16_MAX;
	static int16_t x259 = -919;
	uint64_t x260 = 128562195752362LLU;

	t60 = ((x257+(x258^x259))/x260);

	if (t60 != 143484LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = INT16_MAX;
	uint8_t x262 = 54U;
	volatile int64_t x263 = 32807801LL;
	int64_t x264 = INT64_MAX;
	int64_t t61 = -11205744164LL;

	t61 = ((x261+(x262^x263))/x264);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x269 = 12658U;
	static volatile int32_t x271 = INT32_MAX;
	volatile int8_t x272 = INT8_MIN;
	volatile int64_t t62 = 106LL;

	t62 = ((x269+(x270^x271))/x272);

	if (t62 != 72057594021150621LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = 4;
	uint32_t t63 = 64744301U;

	t63 = ((x273+(x274^x275))/x276);

	if (t63 != 715827911U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MIN;
	int32_t x278 = -12199352;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;

	t64 = ((x277+(x278^x279))/x280);

	if (t64 != -4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = 0;
	int64_t x282 = 27780472679780159LL;
	int64_t x283 = INT64_MIN;
	int16_t x284 = 69;
	volatile int64_t t65 = 3449LL;

	t65 = ((x281+(x282^x283))/x284);

	if (t65 != -133269442959057907LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x285 = 3U;
	static uint8_t x286 = UINT8_MAX;
	static uint32_t x287 = UINT32_MAX;
	int16_t x288 = -1;
	static volatile uint32_t t66 = 174404888U;

	t66 = ((x285+(x286^x287))/x288);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x290 = INT32_MIN;

	t67 = ((x289+(x290^x291))/x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x293 = 48U;
	volatile uint64_t x295 = 176628403LLU;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t68 = 152262127605054LLU;

	t68 = ((x293+(x294^x295))/x296);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = -3048759LL;
	static volatile int32_t x298 = INT32_MIN;
	int16_t x299 = -1;
	volatile int32_t x300 = 1887;
	volatile int64_t t69 = -1722277933290435LL;

	t69 = ((x297+(x298^x299))/x300);

	if (t69 != 1136425LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x302 = INT16_MIN;
	static int64_t t70 = -925707209495798279LL;

	t70 = ((x301+(x302^x303))/x304);

	if (t70 != 16385LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x306 = -4;
	static volatile int64_t x307 = 58682755LL;
	uint16_t x308 = 905U;

	t71 = ((x305+(x306^x307))/x308);

	if (t71 != -64806LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x315 = INT32_MAX;
	int16_t x316 = 4;
	static int32_t t72 = -4059592;

	t72 = ((x313+(x314^x315))/x316);

	if (t72 != 8191) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = UINT64_MAX;
	static uint64_t x318 = 177796490691831LLU;
	int32_t x319 = -1;
	int16_t x320 = INT16_MIN;
	volatile uint64_t t73 = 717544183312602598LLU;

	t73 = ((x317+(x318^x319))/x320);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x322 = -14318366913LL;
	uint8_t x323 = UINT8_MAX;
	int64_t t74 = 3179006500LL;

	t74 = ((x321+(x322^x323))/x324);

	if (t74 != 14318366529LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x330 = INT16_MIN;
	int64_t x331 = -28877332155197LL;
	volatile uint16_t x332 = 10U;
	int64_t t75 = 1629838184252568LL;

	t75 = ((x329+(x330^x331))/x332);

	if (t75 != 2887733218233LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x335 = 14U;
	volatile uint16_t x336 = 189U;
	uint64_t t76 = 786937393LLU;

	t76 = ((x333+(x334^x335))/x336);

	if (t76 != 23708246LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int32_t x338 = INT32_MIN;
	uint32_t x340 = 4025697U;
	uint32_t t77 = 11217U;

	t77 = ((x337+(x338^x339))/x340);

	if (t77 != 533U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x341 = UINT32_MAX;
	int8_t x342 = -62;
	int32_t x343 = -18;
	uint64_t x344 = UINT64_MAX;
	uint64_t t78 = 8488060354739576653LLU;

	t78 = ((x341+(x342^x343))/x344);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = -64706165425679376LL;
	volatile int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MAX;

	t79 = ((x345+(x346^x347))/x348);

	if (t79 != -1974735722699LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x349 = 1LLU;
	int64_t x352 = -1LL;
	volatile uint64_t t80 = 3831843LLU;

	t80 = ((x349+(x350^x351))/x352);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = 23352145730LL;
	uint16_t x354 = UINT16_MAX;
	uint32_t x356 = 15291827U;
	volatile int64_t t81 = -1336357622360LL;

	t81 = ((x353+(x354^x355))/x356);

	if (t81 != 1527LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x357 = 151133002U;
	volatile uint16_t x358 = 11856U;
	int16_t x360 = -1;

	t82 = ((x357+(x358^x359))/x360);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x361 = -1;
	int16_t x363 = INT16_MIN;
	volatile int32_t t83 = 878;

	t83 = ((x361+(x362^x363))/x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MIN;
	volatile int32_t x370 = INT32_MIN;
	static int64_t x371 = -3154752314648847LL;
	static uint64_t x372 = 214LLU;
	uint64_t t84 = 9541478272302LLU;

	t84 = ((x369+(x370^x371))/x372);

	if (t84 != 14741842799786LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -484;
	int8_t x374 = INT8_MIN;
	volatile uint8_t x375 = 3U;
	volatile int32_t t85 = -26654959;

	t85 = ((x373+(x374^x375))/x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x378 = INT64_MAX;
	int32_t x380 = INT32_MAX;
	int64_t t86 = 249120444282685812LL;

	t86 = ((x377+(x378^x379))/x380);

	if (t86 != 4294967297LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x383 = INT8_MAX;
	uint8_t x384 = UINT8_MAX;
	static int64_t t87 = 27LL;

	t87 = ((x381+(x382^x383))/x384);

	if (t87 != 2411918LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MIN;
	volatile int64_t x386 = -1LL;
	int32_t x388 = -1;
	int64_t t88 = 19001LL;

	t88 = ((x385+(x386^x387))/x388);

	if (t88 != 109807LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x390 = 74U;
	volatile int64_t x391 = INT64_MAX;
	volatile int16_t x392 = INT16_MIN;
	int64_t t89 = 252440076765LL;

	t89 = ((x389+(x390^x391))/x392);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	volatile int32_t x400 = 943138934;
	static int64_t t90 = 519990278381832LL;

	t90 = ((x397+(x398^x399))/x400);

	if (t90 != 9779441503LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x402 = INT64_MIN;
	int64_t x403 = -155LL;
	int64_t x404 = INT64_MIN;
	static volatile int64_t t91 = 29636209755LL;

	t91 = ((x401+(x402^x403))/x404);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x406 = -1LL;
	uint16_t x408 = UINT16_MAX;
	static int64_t t92 = -115301666LL;

	t92 = ((x405+(x406^x407))/x408);

	if (t92 != 65537LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x410 = -1;
	volatile uint8_t x411 = 58U;
	int32_t x412 = -1;
	int32_t t93 = 112;

	t93 = ((x409+(x410^x411))/x412);

	if (t93 != -2147483588) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x417 = UINT8_MAX;
	static uint8_t x418 = UINT8_MAX;
	volatile int16_t x419 = INT16_MAX;
	volatile int64_t x420 = INT64_MIN;
	volatile int64_t t94 = -48507128331390LL;

	t94 = ((x417+(x418^x419))/x420);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x421 = UINT32_MAX;
	volatile int16_t x422 = -658;
	uint8_t x423 = 2U;
	volatile uint64_t x424 = UINT64_MAX;
	volatile uint64_t t95 = 209LLU;

	t95 = ((x421+(x422^x423))/x424);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = 807582888464297LL;
	int8_t x426 = -1;
	static uint16_t x427 = 14U;
	volatile int64_t t96 = -4037185LL;

	t96 = ((x425+(x426^x427))/x428);

	if (t96 != 40379144423214LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x429 = 207823405U;
	int16_t x430 = INT16_MIN;
	int16_t x432 = -1;
	volatile uint32_t t97 = 392623U;

	t97 = ((x429+(x430^x431))/x432);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = 22LL;
	volatile uint16_t x438 = 3U;
	int64_t x439 = -1LL;
	int8_t x440 = INT8_MAX;
	volatile int64_t t98 = 51240362LL;

	t98 = ((x437+(x438^x439))/x440);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x443 = 208722U;
	volatile uint8_t x444 = 104U;
	uint64_t t99 = 17882LLU;

	t99 = ((x441+(x442^x443))/x444);

	if (t99 != 41295772LLU) { NG(); } else { ; }
	
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

