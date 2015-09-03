#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
int32_t x5 = 22150;
static int16_t x9 = INT16_MAX;
uint8_t x10 = 3U;
uint16_t x23 = 0U;
int64_t x25 = INT64_MIN;
volatile int32_t t8 = -1;
uint16_t x40 = 675U;
static int32_t x45 = INT32_MIN;
static int32_t t11 = 431;
int16_t x50 = INT16_MIN;
volatile int8_t x53 = INT8_MAX;
volatile uint16_t x56 = 2U;
int64_t x61 = -1LL;
int16_t x66 = INT16_MIN;
int64_t x69 = 4820LL;
static int32_t t18 = 16266;
static volatile int8_t x78 = INT8_MAX;
int32_t x81 = INT32_MIN;
uint32_t x83 = 55007U;
volatile uint8_t x86 = 93U;
static int32_t t21 = 0;
int32_t t22 = 28700;
static uint64_t x96 = 3054655121LLU;
uint32_t x108 = UINT32_MAX;
int64_t x114 = 31674371378585LL;
static int8_t x118 = INT8_MIN;
int16_t x119 = INT16_MAX;
uint64_t x120 = UINT64_MAX;
int32_t t31 = -1103543;
volatile int8_t x131 = 14;
static int8_t x135 = INT8_MIN;
int64_t x136 = 10603251136796LL;
int16_t x140 = -1;
int16_t x141 = 2;
static uint64_t x142 = 6377173324206263LLU;
static uint8_t x145 = 14U;
volatile int32_t t36 = -200023;
volatile int32_t x158 = -811106341;
int64_t x172 = 0LL;
int16_t x187 = INT16_MIN;
int32_t t46 = -16345182;
int16_t x193 = INT16_MIN;
static volatile int32_t t47 = 130510335;
int32_t x199 = -7424;
volatile int32_t t49 = 1;
static uint16_t x207 = 1282U;
uint64_t x208 = 2948496103732662LLU;
volatile int64_t x210 = INT64_MAX;
int16_t x227 = -1;
int64_t x229 = INT64_MAX;
static int32_t x230 = INT32_MIN;
volatile int32_t t56 = 57078;
volatile int32_t x235 = INT32_MIN;
volatile int32_t t57 = 452;
uint16_t x237 = 326U;
int16_t x239 = 2580;
volatile uint16_t x243 = UINT16_MAX;
static volatile int8_t x253 = -6;
int32_t x278 = 63;
static volatile uint64_t x280 = UINT64_MAX;
int32_t t68 = -398;
int32_t x286 = INT32_MIN;
static int16_t x288 = INT16_MIN;
volatile int32_t t70 = -2;
uint64_t x289 = 46467603813314747LLU;
static volatile int32_t t71 = -1;
volatile int32_t t72 = -7894;
static uint16_t x298 = UINT16_MAX;
int32_t t77 = -7092430;
uint64_t x318 = 576248080307168LLU;
int16_t x323 = INT16_MAX;
int32_t t79 = -104102024;
static volatile uint8_t x345 = 122U;
volatile int32_t x349 = -41;
int64_t x353 = 75510931767LL;
static int8_t x357 = INT8_MIN;
uint32_t x361 = 532190544U;
int32_t t89 = 7755;
static volatile int8_t x365 = INT8_MIN;
static volatile uint32_t x369 = UINT32_MAX;
volatile int32_t t91 = 2424;
volatile int64_t x374 = INT64_MIN;
uint32_t x375 = 450609U;
int64_t x377 = 25533666639061441LL;
int32_t t93 = -4573;
uint16_t x394 = 11934U;
static uint32_t x396 = 70458U;
int32_t t97 = -1;
uint32_t x400 = 64U;
static int32_t x404 = -1;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int64_t x2 = -7902942LL;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -62938744;

	t0 = ((x1/x2)<=(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 8LLU;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = 422724926LLU;
	static volatile int32_t t1 = 2159;

	t1 = ((x5/x6)<=(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x11 = INT8_MIN;
	static int32_t x12 = -30297;
	volatile int32_t t2 = -10;

	t2 = ((x9/x10)<=(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 731U;
	int64_t x14 = INT64_MIN;
	uint64_t x15 = 225495785329805725LLU;
	static int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 750;

	t3 = ((x13/x14)<=(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 5U;
	int32_t x18 = INT32_MIN;
	uint8_t x19 = 27U;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -173088;

	t4 = ((x17/x18)<=(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = INT16_MIN;
	int64_t x24 = INT64_MAX;
	int32_t t5 = 382555;

	t5 = ((x21/x22)<=(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = -94432262988LL;
	uint64_t x27 = 54112129LLU;
	static uint32_t x28 = 3086U;
	int32_t t6 = -10;

	t6 = ((x25/x26)<=(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	uint8_t x30 = 26U;
	int64_t x31 = -1LL;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -157422044;

	t7 = ((x29/x30)<=(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	uint8_t x34 = 8U;
	int32_t x35 = INT32_MAX;
	int8_t x36 = INT8_MAX;

	t8 = ((x33/x34)<=(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = 2LL;
	int64_t x38 = INT64_MAX;
	int64_t x39 = INT64_MIN;
	volatile int32_t t9 = -7;

	t9 = ((x37/x38)<=(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int32_t x42 = INT32_MAX;
	int16_t x43 = 33;
	volatile uint8_t x44 = UINT8_MAX;
	static volatile int32_t t10 = 10839;

	t10 = ((x41/x42)<=(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = INT64_MIN;
	volatile int16_t x47 = -1;
	int16_t x48 = -12019;

	t11 = ((x45/x46)<=(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MAX;
	int16_t x51 = 12;
	int8_t x52 = INT8_MAX;
	volatile int32_t t12 = -650808;

	t12 = ((x49/x50)<=(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x54 = -1LL;
	uint64_t x55 = 1587894089761884LLU;
	volatile int32_t t13 = 461841475;

	t13 = ((x53/x54)<=(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int8_t x58 = -2;
	int64_t x59 = INT64_MAX;
	static volatile int32_t x60 = -12839701;
	volatile int32_t t14 = 1989810;

	t14 = ((x57/x58)<=(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = INT8_MAX;
	int16_t x63 = INT16_MAX;
	uint8_t x64 = 0U;
	static volatile int32_t t15 = -350046774;

	t15 = ((x61/x62)<=(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	uint64_t x67 = 7LLU;
	uint16_t x68 = 442U;
	int32_t t16 = -3245;

	t16 = ((x65/x66)<=(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MAX;
	int16_t x71 = INT16_MIN;
	uint32_t x72 = 25280125U;
	volatile int32_t t17 = 102355;

	t17 = ((x69/x70)<=(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	uint16_t x74 = 25U;
	int32_t x75 = 1;
	static int32_t x76 = 32431000;

	t18 = ((x73/x74)<=(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1422U;
	uint8_t x79 = 95U;
	static int64_t x80 = INT64_MAX;
	static volatile int32_t t19 = -21942520;

	t19 = ((x77/x78)<=(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MIN;
	uint32_t x84 = 444U;
	volatile int32_t t20 = -22007;

	t20 = ((x81/x82)<=(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x87 = -1;
	volatile int8_t x88 = INT8_MIN;

	t21 = ((x85/x86)<=(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	uint32_t x90 = 16559875U;
	volatile uint64_t x91 = 35923LLU;
	static uint64_t x92 = 509941398620LLU;

	t22 = ((x89/x90)<=(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 1;
	int32_t x94 = -217997;
	int64_t x95 = -1LL;
	int32_t t23 = -714209;

	t23 = ((x93/x94)<=(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -5;
	int8_t x98 = 6;
	uint8_t x99 = 0U;
	static int32_t x100 = 811825;
	int32_t t24 = -1411102;

	t24 = ((x97/x98)<=(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile int8_t x102 = INT8_MIN;
	volatile uint64_t x103 = UINT64_MAX;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = -63;

	t25 = ((x101/x102)<=(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -7353;
	static volatile uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MIN;
	int32_t t26 = -223629;

	t26 = ((x105/x106)<=(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -18571;

	t27 = ((x109/x110)<=(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = 5623;
	volatile int64_t x115 = 129164452921251763LL;
	static int32_t x116 = INT32_MIN;
	int32_t t28 = -2;

	t28 = ((x113/x114)<=(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	volatile int32_t t29 = -4428;

	t29 = ((x117/x118)<=(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -20976109;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile int8_t x124 = 3;
	static volatile int32_t t30 = 462897;

	t30 = ((x121/x122)<=(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = -25;
	uint16_t x127 = UINT16_MAX;
	volatile uint32_t x128 = 114U;

	t31 = ((x125/x126)<=(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = 1;
	volatile uint8_t x130 = 34U;
	volatile int32_t x132 = 78461560;
	volatile int32_t t32 = -15874874;

	t32 = ((x129/x130)<=(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 1162838483LLU;
	int16_t x134 = INT16_MAX;
	int32_t t33 = -65906;

	t33 = ((x133/x134)<=(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 2715U;
	volatile uint16_t x138 = UINT16_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	static volatile int32_t t34 = -375224;

	t34 = ((x137/x138)<=(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 240;

	t35 = ((x141/x142)<=(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x146 = -1373489;
	int16_t x147 = INT16_MIN;
	volatile int16_t x148 = INT16_MIN;

	t36 = ((x145/x146)<=(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MIN;
	static int64_t x154 = INT64_MAX;
	int64_t x155 = 132312LL;
	uint64_t x156 = 252338LLU;
	volatile int32_t t37 = -29770794;

	t37 = ((x153/x154)<=(x155==x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = 5764950809382684LL;
	uint8_t x159 = 13U;
	int64_t x160 = INT64_MAX;
	int32_t t38 = 4;

	t38 = ((x157/x158)<=(x159==x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	volatile int16_t x162 = -74;
	int32_t x163 = INT32_MIN;
	int8_t x164 = 1;
	int32_t t39 = -16743;

	t39 = ((x161/x162)<=(x163==x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = INT16_MIN;
	static volatile int8_t x166 = -1;
	int32_t x167 = 14;
	uint64_t x168 = 166126054505LLU;
	volatile int32_t t40 = -82;

	t40 = ((x165/x166)<=(x167==x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 14U;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	volatile int32_t t41 = 5;

	t41 = ((x169/x170)<=(x171==x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = UINT32_MAX;
	static uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MIN;
	volatile uint8_t x176 = 65U;
	int32_t t42 = -992489;

	t42 = ((x173/x174)<=(x175==x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = INT16_MIN;
	int16_t x178 = 14;
	uint8_t x179 = 2U;
	static int16_t x180 = INT16_MAX;
	volatile int32_t t43 = -38;

	t43 = ((x177/x178)<=(x179==x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MAX;
	int32_t x182 = 160338;
	volatile uint8_t x183 = UINT8_MAX;
	uint32_t x184 = 516777U;
	int32_t t44 = -33050669;

	t44 = ((x181/x182)<=(x183==x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = 268;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t45 = 43;

	t45 = ((x185/x186)<=(x187==x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	volatile int32_t x191 = INT32_MIN;
	int64_t x192 = 33053439LL;

	t46 = ((x189/x190)<=(x191==x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x194 = -1;
	int16_t x195 = -1;
	volatile uint8_t x196 = 0U;

	t47 = ((x193/x194)<=(x195==x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 17U;
	int32_t x198 = -19519;
	int64_t x200 = 30478733219675397LL;
	static int32_t t48 = 8210981;

	t48 = ((x197/x198)<=(x199==x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 23750U;
	volatile int16_t x202 = -1;
	int8_t x203 = 22;
	int8_t x204 = -1;

	t49 = ((x201/x202)<=(x203==x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -14;
	uint32_t x206 = 262081U;
	volatile int32_t t50 = -6135736;

	t50 = ((x205/x206)<=(x207==x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = 5782705743LL;
	volatile int16_t x211 = -4;
	int64_t x212 = INT64_MIN;
	volatile int32_t t51 = -369;

	t51 = ((x209/x210)<=(x211==x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x213 = INT8_MIN;
	int32_t x214 = 7894822;
	volatile int16_t x215 = -16218;
	uint16_t x216 = UINT16_MAX;
	int32_t t52 = -222;

	t52 = ((x213/x214)<=(x215==x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = UINT64_MAX;
	uint32_t x218 = 445241U;
	int8_t x219 = -1;
	int16_t x220 = INT16_MIN;
	int32_t t53 = -4745613;

	t53 = ((x217/x218)<=(x219==x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 1809980LLU;
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	volatile int32_t x224 = -1;
	int32_t t54 = -32551;

	t54 = ((x221/x222)<=(x223==x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = 4819;
	static int64_t x228 = -1LL;
	volatile int32_t t55 = -1073684;

	t55 = ((x225/x226)<=(x227==x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x231 = 995LL;
	uint32_t x232 = 55971U;

	t56 = ((x229/x230)<=(x231==x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MIN;
	int16_t x236 = INT16_MAX;

	t57 = ((x233/x234)<=(x235==x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x238 = -1;
	int64_t x240 = 317587LL;
	int32_t t58 = -30963;

	t58 = ((x237/x238)<=(x239==x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = INT32_MIN;
	static volatile int16_t x244 = -1;
	volatile int32_t t59 = -151254806;

	t59 = ((x241/x242)<=(x243==x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 1U;
	volatile int32_t x246 = 541526;
	volatile uint64_t x247 = UINT64_MAX;
	static int16_t x248 = -63;
	int32_t t60 = -4018;

	t60 = ((x245/x246)<=(x247==x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x249 = 183754914741413LL;
	uint64_t x250 = 3961561092938285LLU;
	int32_t x251 = -1;
	volatile int64_t x252 = -1LL;
	int32_t t61 = -66875645;

	t61 = ((x249/x250)<=(x251==x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x254 = INT8_MIN;
	int32_t x255 = 445;
	static uint16_t x256 = 2U;
	static volatile int32_t t62 = 35;

	t62 = ((x253/x254)<=(x255==x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x257 = 124U;
	uint8_t x258 = 49U;
	int32_t x259 = 2;
	static volatile int8_t x260 = INT8_MIN;
	int32_t t63 = 0;

	t63 = ((x257/x258)<=(x259==x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	volatile uint16_t x263 = 1U;
	uint16_t x264 = 17U;
	int32_t t64 = 1;

	t64 = ((x261/x262)<=(x263==x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1LL;
	int8_t x266 = INT8_MIN;
	uint16_t x267 = 51U;
	int8_t x268 = -1;
	static volatile int32_t t65 = 9821;

	t65 = ((x265/x266)<=(x267==x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MIN;
	volatile uint8_t x270 = 2U;
	int32_t x271 = INT32_MIN;
	int16_t x272 = 13412;
	int32_t t66 = -11;

	t66 = ((x269/x270)<=(x271==x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 478U;
	int32_t x274 = 1036;
	static int64_t x275 = INT64_MAX;
	static uint64_t x276 = UINT64_MAX;
	int32_t t67 = 35196072;

	t67 = ((x273/x274)<=(x275==x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = 4347699U;
	int64_t x279 = -1LL;

	t68 = ((x277/x278)<=(x279==x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = 383LL;
	static volatile int16_t x282 = 12;
	int64_t x283 = 2834358392332195LL;
	uint32_t x284 = 7U;
	int32_t t69 = 480582059;

	t69 = ((x281/x282)<=(x283==x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 9175050817LLU;
	volatile int64_t x287 = INT64_MIN;

	t70 = ((x285/x286)<=(x287==x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x290 = INT16_MIN;
	uint8_t x291 = 53U;
	static int8_t x292 = 36;

	t71 = ((x289/x290)<=(x291==x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = INT16_MIN;
	static uint16_t x294 = UINT16_MAX;
	uint8_t x295 = 69U;
	static int64_t x296 = INT64_MIN;

	t72 = ((x293/x294)<=(x295==x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = 0U;
	static volatile uint64_t x299 = 575LLU;
	uint32_t x300 = 196U;
	int32_t t73 = 4;

	t73 = ((x297/x298)<=(x299==x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = 75891993050387LLU;
	static int8_t x302 = 1;
	uint64_t x303 = 1038354LLU;
	uint64_t x304 = 111370LLU;
	volatile int32_t t74 = -766744;

	t74 = ((x301/x302)<=(x303==x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = 2;
	static volatile uint16_t x306 = UINT16_MAX;
	int8_t x307 = 0;
	int16_t x308 = INT16_MIN;
	int32_t t75 = 1358682;

	t75 = ((x305/x306)<=(x307==x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = 1;
	volatile uint64_t x310 = 739788739314120LLU;
	int64_t x311 = -1LL;
	int64_t x312 = -495410LL;
	static volatile int32_t t76 = 1900657;

	t76 = ((x309/x310)<=(x311==x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x313 = 403U;
	int64_t x314 = 71174186720446LL;
	static int64_t x315 = INT64_MAX;
	int32_t x316 = INT32_MAX;

	t77 = ((x313/x314)<=(x315==x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x319 = 0;
	uint32_t x320 = 13648347U;
	int32_t t78 = 352673684;

	t78 = ((x317/x318)<=(x319==x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = UINT32_MAX;
	uint64_t x322 = 977465LLU;
	volatile int16_t x324 = -1;

	t79 = ((x321/x322)<=(x323==x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = 946880U;
	volatile int8_t x326 = 2;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t80 = -63;

	t80 = ((x325/x326)<=(x327==x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = -1LL;
	static int16_t x330 = -1;
	static int64_t x331 = INT64_MAX;
	int16_t x332 = INT16_MAX;
	volatile int32_t t81 = 0;

	t81 = ((x329/x330)<=(x331==x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x333 = -1;
	int16_t x334 = INT16_MIN;
	uint8_t x335 = UINT8_MAX;
	uint32_t x336 = 3U;
	int32_t t82 = -1970;

	t82 = ((x333/x334)<=(x335==x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	uint32_t x340 = 15021523U;
	static volatile int32_t t83 = 0;

	t83 = ((x337/x338)<=(x339==x340));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = 12LLU;
	int8_t x343 = -1;
	static volatile int8_t x344 = 0;
	volatile int32_t t84 = 52;

	t84 = ((x341/x342)<=(x343==x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x346 = 1368556487397418078LLU;
	int16_t x347 = 2;
	volatile uint64_t x348 = 13361437772549LLU;
	volatile int32_t t85 = -101841578;

	t85 = ((x345/x346)<=(x347==x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x350 = -1;
	static int16_t x351 = 77;
	int32_t x352 = 2;
	volatile int32_t t86 = 5339;

	t86 = ((x349/x350)<=(x351==x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x354 = INT64_MIN;
	static int64_t x355 = INT64_MAX;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t87 = 62;

	t87 = ((x353/x354)<=(x355==x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x358 = UINT64_MAX;
	static uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 772482616239LLU;
	volatile int32_t t88 = -526857580;

	t88 = ((x357/x358)<=(x359==x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x362 = 14139683;
	uint8_t x363 = 0U;
	static uint16_t x364 = 0U;

	t89 = ((x361/x362)<=(x363==x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x366 = INT16_MIN;
	static int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MAX;
	int32_t t90 = 233;

	t90 = ((x365/x366)<=(x367==x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x370 = -7;
	int32_t x371 = INT32_MIN;
	static int16_t x372 = INT16_MIN;

	t91 = ((x369/x370)<=(x371==x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = 1;
	int32_t x376 = 710952;
	int32_t t92 = 1;

	t92 = ((x373/x374)<=(x375==x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MAX;
	volatile int8_t x380 = INT8_MIN;

	t93 = ((x377/x378)<=(x379==x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x381 = -3730;
	uint32_t x382 = UINT32_MAX;
	volatile uint64_t x383 = 33336755878631LLU;
	static uint16_t x384 = 0U;
	volatile int32_t t94 = -23077;

	t94 = ((x381/x382)<=(x383==x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x385 = 37891U;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 4U;
	static int8_t x388 = INT8_MIN;
	int32_t t95 = -45046381;

	t95 = ((x385/x386)<=(x387==x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = -4LL;
	uint64_t x390 = 2020LLU;
	uint32_t x391 = 230277U;
	int32_t x392 = -25734872;
	int32_t t96 = 1;

	t96 = ((x389/x390)<=(x391==x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x393 = UINT32_MAX;
	static int64_t x395 = 1283400789454216339LL;

	t97 = ((x393/x394)<=(x395==x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x397 = 371U;
	int16_t x398 = INT16_MAX;
	int32_t x399 = -1;
	volatile int32_t t98 = 0;

	t98 = ((x397/x398)<=(x399==x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x401 = 2U;
	int64_t x402 = INT64_MIN;
	static int8_t x403 = -1;
	volatile int32_t t99 = -1547438;

	t99 = ((x401/x402)<=(x403==x404));

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

