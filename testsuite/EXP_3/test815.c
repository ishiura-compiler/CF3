#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -11;
int16_t x3 = -5453;
volatile int32_t t0 = 1;
static int32_t x12 = INT32_MIN;
static int8_t x17 = -22;
uint8_t x18 = 49U;
uint32_t x25 = 6U;
int32_t x30 = 71445;
int64_t x35 = INT64_MIN;
int32_t t8 = -11;
volatile int32_t x38 = INT32_MIN;
uint8_t x45 = UINT8_MAX;
int32_t x48 = INT32_MIN;
int64_t x50 = -1LL;
int32_t x51 = INT32_MAX;
static int16_t x52 = INT16_MIN;
int64_t x54 = INT64_MIN;
int64_t x63 = 190312063LL;
int64_t x70 = INT64_MIN;
int32_t x74 = -1;
volatile int32_t t20 = -256;
uint64_t x85 = UINT64_MAX;
int32_t t21 = -40768;
int32_t x90 = -1;
int32_t t23 = -189;
int8_t x97 = -1;
int8_t x105 = -1;
int16_t x106 = -4094;
volatile uint32_t x108 = UINT32_MAX;
static int16_t x109 = INT16_MAX;
volatile int64_t x115 = INT64_MIN;
volatile int64_t x118 = -1LL;
static int32_t t30 = 13;
int8_t x126 = -1;
int64_t x128 = -1LL;
int32_t x131 = INT32_MIN;
int64_t x135 = -1LL;
int32_t t35 = -28;
volatile uint64_t x145 = 62589822843284LLU;
volatile int8_t x148 = -1;
volatile uint16_t x154 = UINT16_MAX;
int64_t x157 = INT64_MIN;
uint32_t x162 = 856550U;
int8_t x167 = INT8_MAX;
volatile int64_t x174 = INT64_MIN;
int16_t x179 = -1;
int32_t x181 = -1;
int8_t x182 = INT8_MIN;
uint32_t x188 = 95725U;
volatile uint64_t x192 = 624224LLU;
int32_t x198 = -1;
static volatile uint32_t x199 = 52286537U;
int8_t x202 = INT8_MIN;
int32_t t50 = 439;
int8_t x213 = -1;
static uint64_t x214 = UINT64_MAX;
int16_t x219 = INT16_MAX;
int32_t t54 = 848;
int32_t t55 = 22;
int16_t x228 = 7;
uint8_t x232 = 2U;
int32_t t57 = 337;
uint32_t x233 = UINT32_MAX;
uint64_t x238 = 5864118284074499LLU;
uint64_t x243 = UINT64_MAX;
int16_t x246 = INT16_MIN;
int16_t x249 = -1;
uint64_t x253 = 14079726435526LLU;
int64_t x255 = INT64_MAX;
volatile int64_t x260 = INT64_MAX;
volatile int32_t t64 = 55032;
int8_t x264 = INT8_MAX;
int32_t x267 = INT32_MIN;
int32_t t68 = -326044299;
uint8_t x282 = UINT8_MAX;
static int64_t x283 = -1LL;
volatile int32_t t70 = -1;
volatile int64_t x288 = -1LL;
uint8_t x292 = UINT8_MAX;
static uint16_t x293 = 1498U;
volatile int32_t t73 = 4196811;
int16_t x297 = INT16_MIN;
int8_t x298 = INT8_MAX;
int32_t t75 = 12843879;
static int8_t x315 = INT8_MAX;
int64_t x319 = -1LL;
static int32_t x320 = INT32_MAX;
uint64_t x332 = 306440LLU;
static int64_t x336 = INT64_MAX;
int32_t x337 = INT32_MIN;
int8_t x343 = INT8_MAX;
int16_t x350 = INT16_MIN;
uint8_t x352 = 1U;
int64_t x356 = INT64_MIN;
static volatile int32_t t87 = -7468382;
static int16_t x360 = INT16_MIN;
int64_t x372 = 912LL;
int16_t x377 = INT16_MAX;
static uint64_t x379 = 229119769131180965LLU;
int16_t x381 = INT16_MIN;
int8_t x393 = INT8_MAX;
int32_t x397 = 98645;
int64_t x401 = INT64_MIN;
static uint16_t x402 = 2U;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int32_t x4 = 177218;

	t0 = ((x1&x2)<(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 20;
	static int8_t x6 = 0;
	int64_t x7 = INT64_MIN;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 15974114;

	t1 = ((x5&x6)<(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 32U;
	volatile int32_t t2 = -57497;

	t2 = ((x9&x10)<(x11%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -10;
	static int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = 3U;
	int32_t t3 = -1686;

	t3 = ((x13&x14)<(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x19 = UINT16_MAX;
	uint64_t x20 = 12874LLU;
	volatile int32_t t4 = 936;

	t4 = ((x17&x18)<(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	volatile uint32_t x22 = 3U;
	int32_t x23 = -30037441;
	uint64_t x24 = 285891LLU;
	static volatile int32_t t5 = -940896;

	t5 = ((x21&x22)<(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 123U;
	int8_t x27 = -1;
	static volatile int64_t x28 = INT64_MAX;
	static int32_t t6 = 11627;

	t6 = ((x25&x26)<(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint32_t x31 = 3178U;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -621641;

	t7 = ((x29&x30)<(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 112U;
	volatile int16_t x34 = INT16_MIN;
	uint8_t x36 = 4U;

	t8 = ((x33&x34)<(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = INT8_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 149;

	t9 = ((x37&x38)<(x39%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = 465345872LL;
	static int32_t x42 = INT32_MIN;
	uint8_t x43 = UINT8_MAX;
	static volatile int32_t x44 = -1;
	int32_t t10 = -230;

	t10 = ((x41&x42)<(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = 0;
	volatile int32_t x47 = INT32_MAX;
	int32_t t11 = 4;

	t11 = ((x45&x46)<(x47%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -14206;
	static volatile int32_t t12 = 17;

	t12 = ((x49&x50)<(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 46U;
	volatile uint32_t x55 = 51457U;
	int64_t x56 = 260381311LL;
	static int32_t t13 = 496;

	t13 = ((x53&x54)<(x55%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	volatile int16_t x59 = INT16_MIN;
	volatile int16_t x60 = -1;
	int32_t t14 = -19;

	t14 = ((x57&x58)<(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint32_t x62 = 741657U;
	volatile int16_t x64 = -1;
	volatile int32_t t15 = -5199;

	t15 = ((x61&x62)<(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 5U;
	volatile int16_t x66 = INT16_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -62;

	t16 = ((x65&x66)<(x67%x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	volatile int64_t x71 = INT64_MIN;
	int32_t x72 = -1;
	volatile int32_t t17 = -7018;

	t17 = ((x69&x70)<(x71%x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	static int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = -3519;

	t18 = ((x73&x74)<(x75%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 469LLU;
	int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MIN;
	static uint8_t x80 = 2U;
	volatile int32_t t19 = 40580;

	t19 = ((x77&x78)<(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	uint16_t x82 = 2U;
	uint8_t x83 = 3U;
	int16_t x84 = 775;

	t20 = ((x81&x82)<(x83%x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 0U;
	int16_t x87 = -3;
	uint8_t x88 = 17U;

	t21 = ((x85&x86)<(x87%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 141207898U;
	int32_t x91 = INT32_MAX;
	static int8_t x92 = -1;
	int32_t t22 = 115553;

	t22 = ((x89&x90)<(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1581;
	int64_t x94 = -5911279LL;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = 75457246052455784LLU;

	t23 = ((x93&x94)<(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -1;
	int32_t x99 = INT32_MIN;
	int64_t x100 = INT64_MAX;
	int32_t t24 = 627402681;

	t24 = ((x97&x98)<(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	static int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 457392;

	t25 = ((x101&x102)<(x103%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x107 = INT16_MAX;
	volatile int32_t t26 = 1853769;

	t26 = ((x105&x106)<(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x110 = 219633485U;
	static int8_t x111 = INT8_MIN;
	int32_t x112 = -6799;
	volatile int32_t t27 = 6;

	t27 = ((x109&x110)<(x111%x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 85U;
	int16_t x114 = INT16_MIN;
	int16_t x116 = 81;
	volatile int32_t t28 = -20681;

	t28 = ((x113&x114)<(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static volatile uint64_t x119 = UINT64_MAX;
	volatile int64_t x120 = INT64_MIN;
	int32_t t29 = 365887;

	t29 = ((x117&x118)<(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 1066U;
	static volatile int32_t x122 = INT32_MIN;
	int8_t x123 = -17;
	int32_t x124 = -553900105;

	t30 = ((x121&x122)<(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	int64_t x127 = INT64_MIN;
	int32_t t31 = -986308205;

	t31 = ((x125&x126)<(x127%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 3726U;
	static uint32_t x130 = 4882190U;
	int32_t x132 = -1;
	int32_t t32 = -1252;

	t32 = ((x129&x130)<(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = 8138;
	volatile int32_t x134 = -1;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 5869237;

	t33 = ((x133&x134)<(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	static int8_t x138 = 0;
	int16_t x139 = INT16_MIN;
	volatile uint16_t x140 = 17U;
	static volatile int32_t t34 = 0;

	t34 = ((x137&x138)<(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MAX;
	volatile int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MIN;

	t35 = ((x141&x142)<(x143%x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x146 = 6778333U;
	uint16_t x147 = UINT16_MAX;
	volatile int32_t t36 = 0;

	t36 = ((x145&x146)<(x147%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x149 = 1489273491U;
	int16_t x150 = INT16_MIN;
	uint16_t x151 = 240U;
	uint32_t x152 = 65419068U;
	int32_t t37 = 2050;

	t37 = ((x149&x150)<(x151%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x155 = -1;
	volatile int8_t x156 = -1;
	int32_t t38 = 845966140;

	t38 = ((x153&x154)<(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x158 = UINT16_MAX;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = -15;
	int32_t t39 = 0;

	t39 = ((x157&x158)<(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 28U;
	int32_t t40 = -15876;

	t40 = ((x161&x162)<(x163%x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	int8_t x166 = INT8_MIN;
	uint8_t x168 = 39U;
	int32_t t41 = -31507407;

	t41 = ((x165&x166)<(x167%x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 17;
	int8_t x170 = 12;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = 19406U;
	volatile int32_t t42 = 251;

	t42 = ((x169&x170)<(x171%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int32_t x175 = INT32_MAX;
	volatile uint64_t x176 = 4072114892930351417LLU;
	int32_t t43 = 13708;

	t43 = ((x173&x174)<(x175%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 36094767756LLU;
	volatile uint16_t x178 = 15045U;
	int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 3830491;

	t44 = ((x177&x178)<(x179%x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x183 = -436;
	int16_t x184 = INT16_MIN;
	int32_t t45 = -1416;

	t45 = ((x181&x182)<(x183%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = -13;
	static uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MIN;
	volatile int32_t t46 = 32;

	t46 = ((x185&x186)<(x187%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 24;
	volatile uint32_t x190 = 247518556U;
	volatile int16_t x191 = 8284;
	static int32_t t47 = -2;

	t47 = ((x189&x190)<(x191%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -1;
	int64_t x194 = -3813934LL;
	volatile int32_t x195 = -1;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = -219;

	t48 = ((x193&x194)<(x195%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static int8_t x200 = -1;
	static int32_t t49 = 640925;

	t49 = ((x197&x198)<(x199%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;

	t50 = ((x201&x202)<(x203%x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = -1;
	static int16_t x207 = 15701;
	volatile int16_t x208 = -1;
	int32_t t51 = 3;

	t51 = ((x205&x206)<(x207%x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = UINT64_MAX;
	volatile int32_t x210 = INT32_MIN;
	static uint64_t x211 = 150497070189158LLU;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 401243;

	t52 = ((x209&x210)<(x211%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x215 = INT64_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t53 = 4778537;

	t53 = ((x213&x214)<(x215%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -1;
	volatile int64_t x218 = INT64_MAX;
	int32_t x220 = INT32_MIN;

	t54 = ((x217&x218)<(x219%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	uint32_t x223 = 712U;
	static int8_t x224 = -1;

	t55 = ((x221&x222)<(x223%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 149832141821LLU;
	int64_t x226 = -1LL;
	static int32_t x227 = 4661413;
	int32_t t56 = -1;

	t56 = ((x225&x226)<(x227%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	uint64_t x230 = 492132838LLU;
	int16_t x231 = INT16_MAX;

	t57 = ((x229&x230)<(x231%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x234 = UINT32_MAX;
	static volatile int8_t x235 = 0;
	int32_t x236 = INT32_MAX;
	int32_t t58 = -145;

	t58 = ((x233&x234)<(x235%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 7688998726LL;
	uint16_t x239 = 5736U;
	int16_t x240 = -14678;
	volatile int32_t t59 = 3477;

	t59 = ((x237&x238)<(x239%x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	int32_t x242 = 495697;
	int32_t x244 = INT32_MIN;
	int32_t t60 = -13641558;

	t60 = ((x241&x242)<(x243%x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MAX;
	static uint8_t x247 = UINT8_MAX;
	static int16_t x248 = 43;
	int32_t t61 = 57735;

	t61 = ((x245&x246)<(x247%x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = -1;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;
	static volatile int32_t t62 = 74293;

	t62 = ((x249&x250)<(x251%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	int8_t x256 = 5;
	int32_t t63 = 3130996;

	t63 = ((x253&x254)<(x255%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = -19833;
	uint16_t x258 = UINT16_MAX;
	volatile int32_t x259 = INT32_MIN;

	t64 = ((x257&x258)<(x259%x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	static uint32_t x262 = 31151U;
	uint64_t x263 = 8188557184683747161LLU;
	int32_t t65 = -19974957;

	t65 = ((x261&x262)<(x263%x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	uint8_t x266 = UINT8_MAX;
	uint64_t x268 = 1275418588LLU;
	int32_t t66 = 0;

	t66 = ((x265&x266)<(x267%x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = INT64_MAX;
	static int32_t x271 = INT32_MIN;
	uint64_t x272 = 33874745LLU;
	volatile int32_t t67 = 955974110;

	t67 = ((x269&x270)<(x271%x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -14403962422894LL;
	int32_t x274 = 468;
	static int8_t x275 = INT8_MAX;
	volatile uint16_t x276 = 72U;

	t68 = ((x273&x274)<(x275%x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 460405267U;
	uint8_t x278 = 2U;
	int8_t x279 = -1;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = -13439413;

	t69 = ((x277&x278)<(x279%x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	volatile int16_t x284 = 1;

	t70 = ((x281&x282)<(x283%x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	volatile int64_t x286 = -6110607LL;
	uint16_t x287 = 19750U;
	int32_t t71 = -176780;

	t71 = ((x285&x286)<(x287%x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 0U;
	int32_t t72 = -1649513;

	t72 = ((x289&x290)<(x291%x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x294 = 310U;
	int16_t x295 = INT16_MIN;
	int32_t x296 = INT32_MIN;

	t73 = ((x293&x294)<(x295%x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x299 = UINT64_MAX;
	volatile int32_t x300 = -1;
	int32_t t74 = 86391;

	t74 = ((x297&x298)<(x299%x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 3U;
	uint32_t x302 = UINT32_MAX;
	uint8_t x303 = UINT8_MAX;
	uint16_t x304 = UINT16_MAX;

	t75 = ((x301&x302)<(x303%x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 7515U;
	uint32_t x306 = 10937862U;
	uint16_t x307 = 23U;
	uint64_t x308 = UINT64_MAX;
	int32_t t76 = 7460;

	t76 = ((x305&x306)<(x307%x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MIN;
	uint16_t x310 = 1U;
	uint64_t x311 = 10695348976437LLU;
	int64_t x312 = INT64_MAX;
	static volatile int32_t t77 = -22281670;

	t77 = ((x309&x310)<(x311%x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	int32_t x314 = -1;
	uint64_t x316 = UINT64_MAX;
	int32_t t78 = 52025346;

	t78 = ((x313&x314)<(x315%x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	int32_t x318 = 8562;
	volatile int32_t t79 = 0;

	t79 = ((x317&x318)<(x319%x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 20U;
	int32_t x326 = INT32_MIN;
	static uint64_t x327 = UINT64_MAX;
	int64_t x328 = INT64_MAX;
	int32_t t80 = -58;

	t80 = ((x325&x326)<(x327%x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = -203;
	int32_t x330 = INT32_MIN;
	volatile int16_t x331 = INT16_MIN;
	static volatile int32_t t81 = 1680258;

	t81 = ((x329&x330)<(x331%x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = 5813;
	uint16_t x334 = 50U;
	int8_t x335 = 1;
	int32_t t82 = -484625;

	t82 = ((x333&x334)<(x335%x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x338 = -245;
	uint8_t x339 = 7U;
	static volatile int8_t x340 = INT8_MIN;
	static int32_t t83 = -13378200;

	t83 = ((x337&x338)<(x339%x340));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	uint8_t x344 = 13U;
	int32_t t84 = 10567;

	t84 = ((x341&x342)<(x343%x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = 0U;
	int64_t x346 = INT64_MAX;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 213768637779791428LLU;
	static volatile int32_t t85 = -762830;

	t85 = ((x345&x346)<(x347%x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int64_t x351 = 4120283612872LL;
	volatile int32_t t86 = -1;

	t86 = ((x349&x350)<(x351%x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x353 = 365342LLU;
	volatile uint32_t x354 = 475312U;
	int8_t x355 = -1;

	t87 = ((x353&x354)<(x355%x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = -1;
	uint16_t x359 = UINT16_MAX;
	static int32_t t88 = 181;

	t88 = ((x357&x358)<(x359%x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 16087U;
	uint64_t x362 = UINT64_MAX;
	uint32_t x363 = 1U;
	int16_t x364 = 3;
	int32_t t89 = 190;

	t89 = ((x361&x362)<(x363%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x365 = 6430870775880535LLU;
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MAX;
	volatile int32_t t90 = -4933;

	t90 = ((x365&x366)<(x367%x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = 2;
	volatile int16_t x370 = -1;
	int8_t x371 = -1;
	static int32_t t91 = -67294436;

	t91 = ((x369&x370)<(x371%x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MIN;
	volatile int32_t t92 = -1;

	t92 = ((x373&x374)<(x375%x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x378 = INT32_MIN;
	static uint16_t x380 = 1580U;
	volatile int32_t t93 = -12898;

	t93 = ((x377&x378)<(x379%x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x382 = -5461320LL;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t94 = 303837;

	t94 = ((x381&x382)<(x383%x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = INT64_MAX;
	static int32_t x386 = INT32_MIN;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t95 = -90690176;

	t95 = ((x385&x386)<(x387%x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x389 = UINT32_MAX;
	volatile int16_t x390 = INT16_MAX;
	uint8_t x391 = UINT8_MAX;
	static uint8_t x392 = 11U;
	volatile int32_t t96 = 13636553;

	t96 = ((x389&x390)<(x391%x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x394 = INT16_MIN;
	volatile int8_t x395 = -1;
	volatile int8_t x396 = INT8_MIN;
	static volatile int32_t t97 = -2696;

	t97 = ((x393&x394)<(x395%x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x398 = UINT16_MAX;
	int16_t x399 = -121;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t98 = 31;

	t98 = ((x397&x398)<(x399%x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x403 = INT8_MIN;
	static int16_t x404 = INT16_MIN;
	int32_t t99 = 242;

	t99 = ((x401&x402)<(x403%x404));

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

