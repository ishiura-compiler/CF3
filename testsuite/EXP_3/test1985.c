#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x5 = 5423899973402LLU;
volatile uint64_t x7 = 6540LLU;
int32_t t2 = -210;
int16_t x21 = 0;
static int32_t x23 = INT32_MIN;
int32_t t5 = 6;
int16_t x28 = INT16_MIN;
int16_t x30 = -2;
volatile int8_t x31 = -4;
static int16_t x32 = INT16_MIN;
volatile int32_t x38 = -1;
static volatile int32_t t9 = 0;
volatile int16_t x42 = 0;
uint16_t x44 = 914U;
volatile int8_t x48 = -1;
int32_t t11 = 3190232;
static volatile int64_t x52 = INT64_MIN;
static uint32_t x53 = 50256U;
static int8_t x64 = INT8_MIN;
static int64_t x66 = INT64_MIN;
volatile int16_t x71 = -1;
uint8_t x74 = 86U;
volatile int64_t x75 = INT64_MAX;
static int16_t x82 = 500;
static uint64_t x84 = 4145483LLU;
uint8_t x86 = 63U;
int8_t x90 = 0;
uint64_t x99 = 1602545LLU;
static uint16_t x100 = UINT16_MAX;
static int64_t x106 = INT64_MIN;
int32_t t26 = 7;
uint64_t x113 = 478249754LLU;
volatile int32_t t29 = 91593;
static int32_t x129 = -84004498;
static int8_t x134 = -1;
volatile int64_t x135 = 249784786776LL;
uint64_t x137 = UINT64_MAX;
uint64_t x138 = UINT64_MAX;
static int16_t x141 = INT16_MIN;
static int32_t t35 = 863528161;
uint8_t x148 = 44U;
int32_t t36 = 59;
int32_t t37 = -125;
static int16_t x158 = -52;
int64_t x166 = INT64_MIN;
uint32_t x169 = 15508777U;
static int32_t x174 = -1;
uint32_t x176 = UINT32_MAX;
uint64_t x177 = UINT64_MAX;
int8_t x178 = -3;
static int32_t x185 = INT32_MAX;
int8_t x186 = 28;
uint8_t x189 = 3U;
uint8_t x198 = 66U;
static int16_t x200 = 569;
uint32_t x203 = 127662U;
int8_t x205 = -1;
static volatile int64_t x215 = -1LL;
int32_t t53 = -364736427;
uint64_t x225 = 1933478269737206LLU;
uint32_t x229 = UINT32_MAX;
int32_t x230 = INT32_MIN;
int32_t t58 = 556460126;
int32_t x243 = INT32_MIN;
uint16_t x245 = 100U;
int64_t x248 = INT64_MAX;
int16_t x251 = INT16_MIN;
uint64_t x253 = UINT64_MAX;
int32_t x265 = INT32_MIN;
volatile int32_t x266 = INT32_MIN;
int8_t x269 = INT8_MIN;
static volatile int64_t x271 = -1LL;
int8_t x272 = -1;
int64_t x288 = 2224410801100102947LL;
volatile int16_t x295 = 1;
int32_t t74 = 469443;
uint64_t x301 = 560081LLU;
int32_t x302 = INT32_MAX;
int16_t x304 = -1;
static int8_t x305 = -1;
int64_t x310 = 0LL;
static volatile int16_t x314 = INT16_MIN;
uint64_t x316 = UINT64_MAX;
int64_t x322 = -178051909570806LL;
volatile int32_t t80 = -371221;
uint8_t x325 = UINT8_MAX;
static int8_t x326 = INT8_MIN;
volatile int16_t x328 = INT16_MIN;
volatile int32_t t82 = 8;
static uint16_t x333 = 3251U;
static int8_t x337 = -1;
int8_t x345 = -9;
int32_t t86 = 6730;
static int32_t x352 = INT32_MIN;
int64_t x354 = 55LL;
static uint16_t x355 = UINT16_MAX;
int32_t x359 = -1;
int32_t t89 = 121523;
static uint8_t x375 = 25U;
int32_t x382 = INT32_MIN;
volatile int32_t x384 = INT32_MIN;
static uint32_t x390 = 50134U;
int16_t x399 = INT16_MIN;
volatile int64_t x400 = INT64_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	uint32_t x4 = 11U;
	volatile int32_t t0 = -5920;

	t0 = ((x1<=x2)<(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 48U;
	int16_t x8 = -1;
	int32_t t1 = 1;

	t1 = ((x5<=x6)<(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -35;
	uint8_t x10 = 11U;
	uint32_t x11 = 8458245U;
	volatile int16_t x12 = 45;

	t2 = ((x9<=x10)<(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int16_t x14 = INT16_MAX;
	int32_t x15 = INT32_MAX;
	static int16_t x16 = -1;
	static int32_t t3 = -162844;

	t3 = ((x13<=x14)<(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 399618511U;
	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 7U;
	volatile int32_t t4 = 30;

	t4 = ((x17<=x18)<(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -268548269;
	static volatile int64_t x24 = INT64_MIN;

	t5 = ((x21<=x22)<(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -27512;
	volatile uint64_t x26 = UINT64_MAX;
	uint16_t x27 = 932U;
	volatile int32_t t6 = 136471;

	t6 = ((x25<=x26)<(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 15;
	volatile int32_t t7 = -72209;

	t7 = ((x29<=x30)<(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 8821737LLU;
	int64_t x34 = INT64_MAX;
	int64_t x35 = INT64_MAX;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = 125306826;

	t8 = ((x33<=x34)<(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 3177U;
	uint8_t x39 = 2U;
	volatile uint8_t x40 = 4U;

	t9 = ((x37<=x38)<(x39|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 682;
	volatile int8_t x43 = INT8_MIN;
	static volatile int32_t t10 = -3186518;

	t10 = ((x41<=x42)<(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MIN;

	t11 = ((x45<=x46)<(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 117U;
	int32_t t12 = -4504513;

	t12 = ((x49<=x50)<(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	volatile int32_t x55 = -1;
	volatile uint32_t x56 = 1452U;
	volatile int32_t t13 = -6241326;

	t13 = ((x53<=x54)<(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 30;
	volatile int32_t x58 = INT32_MAX;
	int16_t x59 = -1;
	static int16_t x60 = -1;
	int32_t t14 = 8929901;

	t14 = ((x57<=x58)<(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint16_t x62 = 5U;
	volatile int32_t x63 = INT32_MIN;
	int32_t t15 = -282808;

	t15 = ((x61<=x62)<(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x67 = -105083870626598LL;
	uint64_t x68 = 293177829749LLU;
	volatile int32_t t16 = -2121054;

	t16 = ((x65<=x66)<(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	uint64_t x72 = UINT64_MAX;
	static int32_t t17 = 54857;

	t17 = ((x69<=x70)<(x71|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -549266780LL;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = 4;

	t18 = ((x73<=x74)<(x75|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MAX;
	static int64_t x79 = INT64_MIN;
	static int8_t x80 = -16;
	volatile int32_t t19 = 1669622;

	t19 = ((x77<=x78)<(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	uint32_t x83 = 0U;
	volatile int32_t t20 = -12428287;

	t20 = ((x81<=x82)<(x83|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 3U;
	int64_t x87 = 2142594889089LL;
	volatile uint32_t x88 = UINT32_MAX;
	int32_t t21 = 7437591;

	t21 = ((x85<=x86)<(x87|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	int8_t x91 = INT8_MIN;
	static int32_t x92 = 19768888;
	int32_t t22 = -515996837;

	t22 = ((x89<=x90)<(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = UINT16_MAX;
	int16_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	static int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 587;

	t23 = ((x93<=x94)<(x95|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 200099631000LL;
	int64_t x98 = INT64_MAX;
	volatile int32_t t24 = -18690;

	t24 = ((x97<=x98)<(x99|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 9423664192034300LLU;
	volatile int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 503769U;
	int32_t t25 = -1837173;

	t25 = ((x101<=x102)<(x103|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 61U;
	int32_t x107 = INT32_MIN;
	volatile int64_t x108 = -1LL;

	t26 = ((x105<=x106)<(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	uint32_t x110 = 922345419U;
	int8_t x111 = INT8_MIN;
	int64_t x112 = INT64_MIN;
	static volatile int32_t t27 = -223635;

	t27 = ((x109<=x110)<(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 11U;
	volatile uint32_t x115 = 24894U;
	static int16_t x116 = -1;
	volatile int32_t t28 = 61279439;

	t28 = ((x113<=x114)<(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	static uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = UINT8_MAX;

	t29 = ((x117<=x118)<(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -224;
	static int64_t x122 = INT64_MIN;
	volatile uint16_t x123 = 7U;
	int16_t x124 = INT16_MAX;
	volatile int32_t t30 = -680689;

	t30 = ((x121<=x122)<(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 2U;
	int64_t x126 = -2062595482302302LL;
	int64_t x127 = INT64_MIN;
	int8_t x128 = -8;
	static int32_t t31 = 14244;

	t31 = ((x125<=x126)<(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 48U;
	int32_t x131 = 57966;
	static uint64_t x132 = 16546916773125949LLU;
	int32_t t32 = 23074;

	t32 = ((x129<=x130)<(x131|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -224;
	int64_t x136 = 1009009585256369987LL;
	volatile int32_t t33 = 1;

	t33 = ((x133<=x134)<(x135|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = INT8_MIN;
	static volatile int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 133276;

	t34 = ((x137<=x138)<(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x142 = 24;
	int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MIN;

	t35 = ((x141<=x142)<(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	uint16_t x146 = 3U;
	static uint64_t x147 = 208LLU;

	t36 = ((x145<=x146)<(x147|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int16_t x150 = -1;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;

	t37 = ((x149<=x150)<(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	uint64_t x154 = 334176084630LLU;
	uint16_t x155 = 26444U;
	uint64_t x156 = 66511700611352511LLU;
	int32_t t38 = 3065;

	t38 = ((x153<=x154)<(x155|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 129651522;
	int64_t x159 = 3948322580LL;
	int64_t x160 = INT64_MIN;
	int32_t t39 = 52634;

	t39 = ((x157<=x158)<(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -1680;
	static uint8_t x162 = UINT8_MAX;
	static uint32_t x163 = 3U;
	int32_t x164 = INT32_MAX;
	int32_t t40 = 238;

	t40 = ((x161<=x162)<(x163|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = 429872U;
	uint16_t x167 = 7U;
	int32_t x168 = INT32_MIN;
	int32_t t41 = -65;

	t41 = ((x165<=x166)<(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	static volatile uint8_t x172 = 22U;
	int32_t t42 = -2063;

	t42 = ((x169<=x170)<(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int32_t x175 = INT32_MAX;
	volatile int32_t t43 = 65235658;

	t43 = ((x173<=x174)<(x175|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x179 = -1;
	uint8_t x180 = 9U;
	volatile int32_t t44 = 5678050;

	t44 = ((x177<=x178)<(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -3503;
	static uint64_t x182 = 2536193434272469LLU;
	volatile int8_t x183 = -1;
	int32_t x184 = -1;
	volatile int32_t t45 = -1282598;

	t45 = ((x181<=x182)<(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x187 = -29;
	volatile int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 2298267;

	t46 = ((x185<=x186)<(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = -14;
	int32_t x191 = -1;
	uint32_t x192 = 64846730U;
	static int32_t t47 = -498;

	t47 = ((x189<=x190)<(x191|x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MAX;
	int32_t x194 = 307;
	int8_t x195 = 29;
	static uint32_t x196 = 685274U;
	volatile int32_t t48 = -33116;

	t48 = ((x193<=x194)<(x195|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	uint16_t x199 = 250U;
	int32_t t49 = -105;

	t49 = ((x197<=x198)<(x199|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 20U;
	volatile uint32_t x202 = UINT32_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 2;

	t50 = ((x201<=x202)<(x203|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1012;
	volatile uint8_t x207 = 105U;
	static int32_t x208 = INT32_MAX;
	static int32_t t51 = -397063570;

	t51 = ((x205<=x206)<(x207|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -204324468794LL;
	static volatile uint16_t x210 = UINT16_MAX;
	int64_t x211 = -12575912498920LL;
	static int16_t x212 = -513;
	volatile int32_t t52 = -1447;

	t52 = ((x209<=x210)<(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x213 = INT32_MIN;
	uint64_t x214 = 118963069967983LLU;
	int8_t x216 = INT8_MIN;

	t53 = ((x213<=x214)<(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x217 = 401410U;
	uint8_t x218 = 0U;
	int32_t x219 = 2;
	int8_t x220 = -2;
	int32_t t54 = 28373644;

	t54 = ((x217<=x218)<(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	int32_t x222 = INT32_MIN;
	volatile uint16_t x223 = 7U;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = -1;

	t55 = ((x221<=x222)<(x223|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 2307U;
	static uint32_t x227 = 1U;
	static uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = -159688489;

	t56 = ((x225<=x226)<(x227|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MAX;
	int32_t t57 = -10870188;

	t57 = ((x229<=x230)<(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -3071986250LL;
	volatile uint16_t x234 = UINT16_MAX;
	static int32_t x235 = -2970166;
	uint16_t x236 = 494U;

	t58 = ((x233<=x234)<(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 3035U;
	int8_t x238 = -41;
	int8_t x239 = 0;
	volatile int32_t x240 = -1;
	volatile int32_t t59 = 5251;

	t59 = ((x237<=x238)<(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	static uint16_t x242 = 30779U;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -65657;

	t60 = ((x241<=x242)<(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -1;
	uint32_t x247 = 2321083U;
	volatile int32_t t61 = 0;

	t61 = ((x245<=x246)<(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	static int32_t x250 = 506697;
	int16_t x252 = 1;
	int32_t t62 = 11;

	t62 = ((x249<=x250)<(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -1;
	uint16_t x255 = 1U;
	int16_t x256 = -10;
	volatile int32_t t63 = -4;

	t63 = ((x253<=x254)<(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = 1109;
	static int8_t x259 = INT8_MIN;
	volatile int8_t x260 = INT8_MIN;
	static volatile int32_t t64 = -16681;

	t64 = ((x257<=x258)<(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int32_t x262 = -1;
	static volatile int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MAX;
	int32_t t65 = 4725342;

	t65 = ((x261<=x262)<(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x267 = INT64_MAX;
	static uint8_t x268 = UINT8_MAX;
	int32_t t66 = 5288619;

	t66 = ((x265<=x266)<(x267|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MIN;
	volatile int32_t t67 = -413020;

	t67 = ((x269<=x270)<(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 617U;
	uint64_t x274 = 2485LLU;
	volatile uint16_t x275 = 0U;
	volatile int64_t x276 = -1LL;
	volatile int32_t t68 = 3577712;

	t68 = ((x273<=x274)<(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -41;
	static int16_t x278 = -1;
	int8_t x279 = 2;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -9646844;

	t69 = ((x277<=x278)<(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 19U;
	int64_t x282 = INT64_MIN;
	uint16_t x283 = 5U;
	static int64_t x284 = 1118754298403232293LL;
	volatile int32_t t70 = -1;

	t70 = ((x281<=x282)<(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 5703624LLU;
	int64_t x287 = -152588113525LL;
	static volatile int32_t t71 = 1364409;

	t71 = ((x285<=x286)<(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	static uint32_t x291 = UINT32_MAX;
	uint16_t x292 = 0U;
	volatile int32_t t72 = 34589918;

	t72 = ((x289<=x290)<(x291|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 923U;
	int8_t x294 = INT8_MIN;
	static volatile int64_t x296 = INT64_MAX;
	int32_t t73 = -1;

	t73 = ((x293<=x294)<(x295|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 6U;
	int64_t x298 = -1LL;
	static uint16_t x299 = 2U;
	volatile int8_t x300 = -1;

	t74 = ((x297<=x298)<(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x303 = -1;
	static int32_t t75 = -24;

	t75 = ((x301<=x302)<(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x306 = 0;
	int16_t x307 = INT16_MIN;
	int64_t x308 = -1LL;
	static int32_t t76 = 1806;

	t76 = ((x305<=x306)<(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static uint16_t x311 = 21303U;
	uint16_t x312 = 8U;
	int32_t t77 = 183426569;

	t77 = ((x309<=x310)<(x311|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 80U;
	uint32_t x315 = 52U;
	volatile int32_t t78 = -425;

	t78 = ((x313<=x314)<(x315|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	volatile int32_t x318 = 21113268;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MAX;
	int32_t t79 = 6688131;

	t79 = ((x317<=x318)<(x319|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	uint16_t x323 = 10179U;
	volatile int16_t x324 = INT16_MIN;

	t80 = ((x321<=x322)<(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x327 = INT8_MIN;
	volatile int32_t t81 = -497463093;

	t81 = ((x325<=x326)<(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = UINT64_MAX;
	volatile uint32_t x330 = 25514U;
	volatile uint32_t x331 = UINT32_MAX;
	uint8_t x332 = 5U;

	t82 = ((x329<=x330)<(x331|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -1;
	volatile int16_t x335 = -1;
	int32_t x336 = 465217;
	int32_t t83 = 227810;

	t83 = ((x333<=x334)<(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MAX;
	static int64_t x339 = INT64_MIN;
	int64_t x340 = -1LL;
	int32_t t84 = 112364037;

	t84 = ((x337<=x338)<(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	int32_t x342 = INT32_MIN;
	volatile int16_t x343 = -1;
	int16_t x344 = -485;
	volatile int32_t t85 = 44800907;

	t85 = ((x341<=x342)<(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	int64_t x347 = 174904848049613LL;
	static int32_t x348 = -1;

	t86 = ((x345<=x346)<(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -3;
	volatile uint64_t x350 = UINT64_MAX;
	static uint64_t x351 = 22LLU;
	volatile int32_t t87 = -14708;

	t87 = ((x349<=x350)<(x351|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = -2;
	static int8_t x356 = INT8_MAX;
	volatile int32_t t88 = -1;

	t88 = ((x353<=x354)<(x355|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int32_t x358 = -1;
	volatile int16_t x360 = INT16_MAX;

	t89 = ((x357<=x358)<(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -6184;
	int16_t x362 = INT16_MIN;
	uint16_t x363 = 28303U;
	static int64_t x364 = 405587LL;
	int32_t t90 = -297;

	t90 = ((x361<=x362)<(x363|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int16_t x366 = -1;
	int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MIN;
	static int32_t t91 = -231229;

	t91 = ((x365<=x366)<(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	static volatile uint32_t x370 = 3032822U;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t92 = -11511;

	t92 = ((x369<=x370)<(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 14554LLU;
	int64_t x374 = -7948438318442533LL;
	static int16_t x376 = INT16_MIN;
	static int32_t t93 = -55;

	t93 = ((x373<=x374)<(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = -2080064644458LL;
	static int64_t x379 = INT64_MIN;
	uint64_t x380 = 4911271663912471LLU;
	int32_t t94 = 62;

	t94 = ((x377<=x378)<(x379|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	uint16_t x383 = UINT16_MAX;
	int32_t t95 = -4800;

	t95 = ((x381<=x382)<(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = 7280376U;
	int64_t x387 = INT64_MIN;
	volatile int32_t x388 = INT32_MAX;
	static int32_t t96 = 17576;

	t96 = ((x385<=x386)<(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 1U;
	volatile int64_t x391 = -1LL;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t97 = -2;

	t97 = ((x389<=x390)<(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 736U;
	static uint64_t x394 = UINT64_MAX;
	int8_t x395 = INT8_MAX;
	static volatile int8_t x396 = 17;
	volatile int32_t t98 = -1600;

	t98 = ((x393<=x394)<(x395|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 109U;
	static volatile uint8_t x398 = 0U;
	int32_t t99 = -109024;

	t99 = ((x397<=x398)<(x399|x400));

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

