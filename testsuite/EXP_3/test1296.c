#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x3 = INT8_MAX;
int64_t x8 = INT64_MIN;
volatile int32_t t1 = -24135166;
int64_t x9 = -1LL;
uint16_t x11 = 26U;
static volatile uint16_t x18 = UINT16_MAX;
int32_t x19 = 0;
uint64_t x32 = 80066066483667545LLU;
volatile int32_t t8 = 8263;
static int8_t x38 = INT8_MIN;
int16_t x46 = -4723;
uint16_t x50 = 0U;
int32_t x59 = -1728;
static int32_t x81 = INT32_MIN;
int16_t x83 = 0;
int8_t x87 = INT8_MAX;
uint64_t x102 = 7228521996146LLU;
static volatile int32_t t25 = -111442290;
static int64_t x105 = -1LL;
uint8_t x107 = 12U;
uint16_t x109 = 0U;
uint8_t x116 = 39U;
int32_t x118 = INT32_MIN;
volatile int32_t x119 = 1;
int8_t x122 = INT8_MAX;
volatile int32_t x125 = INT32_MAX;
int32_t x128 = INT32_MAX;
volatile int32_t x133 = -1;
int64_t x136 = -1LL;
int16_t x137 = 100;
int32_t t34 = -33161772;
int32_t x147 = -36350;
volatile int32_t t36 = 1001005570;
int32_t x149 = -1;
uint16_t x150 = 1U;
static int16_t x153 = INT16_MAX;
static uint64_t x154 = UINT64_MAX;
int8_t x157 = INT8_MIN;
uint64_t x158 = 2089502251213059LLU;
volatile int16_t x160 = INT16_MIN;
int32_t t40 = 174;
uint64_t x165 = UINT64_MAX;
volatile int32_t x171 = INT32_MIN;
volatile int32_t t42 = -519122249;
static volatile int16_t x180 = -5382;
static volatile int32_t t45 = 3;
volatile int32_t t47 = 3794;
uint32_t x198 = 597112U;
volatile int64_t x201 = INT64_MIN;
int64_t x207 = 2LL;
volatile int32_t t52 = 10;
int64_t x213 = INT64_MIN;
uint32_t x214 = UINT32_MAX;
volatile int32_t t54 = 5374903;
int32_t x221 = INT32_MIN;
static volatile int32_t t55 = -911217391;
int8_t x227 = INT8_MAX;
volatile int32_t t56 = 10;
int64_t x232 = 15436383390LL;
uint32_t x236 = 254592344U;
int8_t x238 = -6;
static int64_t x250 = INT64_MIN;
int64_t x252 = INT64_MIN;
int16_t x254 = INT16_MIN;
int64_t x256 = INT64_MIN;
uint64_t x257 = 235637616790LLU;
uint64_t x261 = 1LLU;
static int16_t x271 = -1;
volatile uint8_t x274 = 18U;
int8_t x275 = -1;
int32_t x280 = -156317534;
int8_t x281 = -2;
int16_t x282 = -27;
int32_t x284 = INT32_MAX;
int8_t x285 = INT8_MIN;
volatile int8_t x286 = INT8_MIN;
int16_t x292 = INT16_MAX;
int8_t x299 = 0;
int16_t x302 = -1;
int32_t t75 = -773815;
static volatile uint64_t x306 = UINT64_MAX;
volatile uint8_t x307 = 2U;
int64_t x310 = 367882LL;
int8_t x316 = 0;
static int32_t t80 = -12897879;
int16_t x327 = -7;
int32_t t81 = 926;
uint16_t x331 = UINT16_MAX;
uint32_t x332 = 756437135U;
int16_t x335 = INT16_MIN;
int16_t x339 = INT16_MIN;
static uint8_t x345 = 24U;
int8_t x349 = 23;
int32_t x352 = -1;
int32_t t87 = 506;
int64_t x355 = INT64_MAX;
int32_t t88 = -185227;
volatile uint64_t x368 = 6851799546447525LLU;
uint8_t x372 = UINT8_MAX;
int8_t x377 = INT8_MAX;
static int8_t x380 = INT8_MAX;
static volatile int8_t x381 = -5;
static int32_t x382 = -1;
static uint16_t x393 = UINT16_MAX;
static volatile uint8_t x399 = 18U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile int16_t x2 = INT16_MIN;
	static int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = 183485515;

	t0 = ((x1<x2)<(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 14U;
	static int8_t x6 = -14;
	volatile int32_t x7 = -3496;

	t1 = ((x5<x6)<(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 0U;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = 2542236;

	t2 = ((x9<x10)<(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 2798144577019170LLU;
	uint64_t x14 = 34401483522527LLU;
	int64_t x15 = -1LL;
	uint32_t x16 = UINT32_MAX;
	int32_t t3 = 421744489;

	t3 = ((x13<x14)<(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = -45155712;

	t4 = ((x17<x18)<(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 291;
	int64_t x22 = -1LL;
	static int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	static int32_t t5 = -2;

	t5 = ((x21<x22)<(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	volatile uint8_t x26 = 69U;
	volatile uint64_t x27 = 2LLU;
	uint64_t x28 = 61LLU;
	volatile int32_t t6 = -1554814;

	t6 = ((x25<x26)<(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	static uint16_t x30 = 383U;
	int32_t x31 = INT32_MIN;
	volatile int32_t t7 = -213;

	t7 = ((x29<x30)<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 2197;
	volatile int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MAX;
	int32_t x36 = -1;

	t8 = ((x33<x34)<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	volatile int32_t x39 = -111582;
	static volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -1584713;

	t9 = ((x37<x38)<(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static volatile int8_t x42 = 23;
	volatile uint16_t x43 = UINT16_MAX;
	int8_t x44 = 0;
	volatile int32_t t10 = 1;

	t10 = ((x41<x42)<(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	int16_t x47 = INT16_MIN;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 63;

	t11 = ((x45<x46)<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	volatile uint8_t x51 = UINT8_MAX;
	static volatile int16_t x52 = -1;
	int32_t t12 = -117067141;

	t12 = ((x49<x50)<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	volatile int64_t x54 = 571318823807876866LL;
	volatile int32_t x55 = -172929318;
	int32_t x56 = -3;
	int32_t t13 = -1;

	t13 = ((x53<x54)<(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 4032U;
	static int64_t x58 = INT64_MAX;
	volatile uint8_t x60 = 40U;
	volatile int32_t t14 = -14376;

	t14 = ((x57<x58)<(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MAX;
	volatile uint32_t x63 = 6103843U;
	static volatile uint32_t x64 = 9U;
	int32_t t15 = 2177;

	t15 = ((x61<x62)<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static int32_t x66 = INT32_MIN;
	static int16_t x67 = 14;
	static uint8_t x68 = UINT8_MAX;
	int32_t t16 = -2;

	t16 = ((x65<x66)<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -7;
	uint8_t x70 = UINT8_MAX;
	volatile uint32_t x71 = 114U;
	volatile int64_t x72 = 3652138101LL;
	volatile int32_t t17 = -1;

	t17 = ((x69<x70)<(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = INT8_MIN;
	uint32_t x74 = 36031824U;
	int32_t x75 = -1;
	static int32_t x76 = -4430;
	volatile int32_t t18 = -3614144;

	t18 = ((x73<x74)<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = UINT16_MAX;
	uint32_t x79 = UINT32_MAX;
	volatile int8_t x80 = -1;
	static volatile int32_t t19 = 96;

	t19 = ((x77<x78)<(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x82 = 0U;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = -149869428;

	t20 = ((x81<x82)<(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	int64_t x86 = 144771890813LL;
	static volatile int8_t x88 = -1;
	volatile int32_t t21 = 6666;

	t21 = ((x85<x86)<(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = INT64_MIN;
	int16_t x90 = INT16_MIN;
	static int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 52325855;

	t22 = ((x89<x90)<(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	uint64_t x94 = UINT64_MAX;
	int8_t x95 = 0;
	uint32_t x96 = 136375U;
	volatile int32_t t23 = -69779;

	t23 = ((x93<x94)<(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -1;
	int64_t x98 = INT64_MIN;
	int32_t x99 = 7818169;
	uint64_t x100 = UINT64_MAX;
	static int32_t t24 = 75375;

	t24 = ((x97<x98)<(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 382U;
	uint8_t x103 = 45U;
	static int16_t x104 = INT16_MIN;

	t25 = ((x101<x102)<(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x106 = INT64_MIN;
	volatile uint64_t x108 = 6340922938LLU;
	int32_t t26 = 808880;

	t26 = ((x105<x106)<(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	int8_t x111 = 1;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -14;

	t27 = ((x109<x110)<(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 6648U;
	uint16_t x114 = UINT16_MAX;
	static int16_t x115 = -1;
	volatile int32_t t28 = -391;

	t28 = ((x113<x114)<(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 32U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -171;

	t29 = ((x117<x118)<(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MAX;
	uint8_t x123 = 100U;
	int32_t x124 = 516902;
	static int32_t t30 = -870;

	t30 = ((x121<x122)<(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	volatile uint16_t x127 = UINT16_MAX;
	int32_t t31 = -1051655908;

	t31 = ((x125<x126)<(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	static int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	uint64_t x132 = 1495326966036188LLU;
	int32_t t32 = -7486;

	t32 = ((x129<x130)<(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MAX;
	volatile int32_t t33 = 1437528;

	t33 = ((x133<x134)<(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MAX;
	static int16_t x139 = 88;
	uint32_t x140 = 162255336U;

	t34 = ((x137<x138)<(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MAX;
	static int64_t x142 = INT64_MIN;
	int64_t x143 = 61567998295889LL;
	int16_t x144 = INT16_MIN;
	static int32_t t35 = 214440276;

	t35 = ((x141<x142)<(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -928;
	int8_t x146 = 1;
	uint64_t x148 = 66017638LLU;

	t36 = ((x145<x146)<(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x151 = -1;
	int64_t x152 = 6382224549624980LL;
	int32_t t37 = -103752;

	t37 = ((x149<x150)<(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x155 = INT8_MIN;
	static uint8_t x156 = 17U;
	volatile int32_t t38 = -327395505;

	t38 = ((x153<x154)<(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x159 = -52;
	static volatile int32_t t39 = -484484;

	t39 = ((x157<x158)<(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	static int64_t x162 = -1LL;
	int8_t x163 = -36;
	volatile int16_t x164 = INT16_MIN;

	t40 = ((x161<x162)<(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x166 = UINT8_MAX;
	volatile uint16_t x167 = 3404U;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 160924;

	t41 = ((x165<x166)<(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint16_t x170 = 3U;
	uint8_t x172 = 30U;

	t42 = ((x169<x170)<(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MAX;
	int16_t x174 = INT16_MIN;
	static uint16_t x175 = 366U;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 12483;

	t43 = ((x173<x174)<(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	int64_t x178 = 21666030LL;
	volatile int32_t x179 = INT32_MIN;
	int32_t t44 = -1;

	t44 = ((x177<x178)<(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int32_t x182 = -206000202;
	static uint16_t x183 = 281U;
	int64_t x184 = -1LL;

	t45 = ((x181<x182)<(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 2456955539578095LLU;
	static uint32_t x186 = 8526570U;
	uint8_t x187 = 9U;
	int64_t x188 = INT64_MAX;
	int32_t t46 = -1;

	t46 = ((x185<x186)<(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = 450350504;
	static int16_t x190 = INT16_MIN;
	volatile int64_t x191 = -1LL;
	int16_t x192 = -5;

	t47 = ((x189<x190)<(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	uint64_t x194 = UINT64_MAX;
	static volatile int64_t x195 = INT64_MAX;
	volatile uint8_t x196 = 11U;
	int32_t t48 = -12971;

	t48 = ((x193<x194)<(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 37U;
	volatile uint16_t x199 = 9U;
	static int64_t x200 = -768179550959LL;
	int32_t t49 = -919322;

	t49 = ((x197<x198)<(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = 3U;
	int8_t x203 = INT8_MIN;
	int64_t x204 = -4190373LL;
	int32_t t50 = 210;

	t50 = ((x201<x202)<(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	uint8_t x206 = 112U;
	uint8_t x208 = 27U;
	static int32_t t51 = 24;

	t51 = ((x205<x206)<(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -16;
	uint32_t x211 = UINT32_MAX;
	uint64_t x212 = 413790LLU;

	t52 = ((x209<x210)<(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x215 = 27U;
	uint32_t x216 = 1790579U;
	int32_t t53 = -1148;

	t53 = ((x213<x214)<(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	volatile int64_t x219 = -1LL;
	static int8_t x220 = -31;

	t54 = ((x217<x218)<(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	static uint64_t x224 = 108072802973LLU;

	t55 = ((x221<x222)<(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	int8_t x228 = 49;

	t56 = ((x225<x226)<(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 5U;
	volatile int32_t x230 = INT32_MAX;
	int64_t x231 = -1LL;
	static int32_t t57 = 291;

	t57 = ((x229<x230)<(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 1613U;
	volatile int16_t x234 = INT16_MAX;
	volatile int64_t x235 = -11494555206660666LL;
	static volatile int32_t t58 = -60024641;

	t58 = ((x233<x234)<(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static uint16_t x239 = 0U;
	uint16_t x240 = 1238U;
	volatile int32_t t59 = -172916;

	t59 = ((x237<x238)<(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x241 = -1LL;
	static int16_t x242 = -22;
	uint32_t x243 = UINT32_MAX;
	volatile int8_t x244 = INT8_MAX;
	volatile int32_t t60 = 27579;

	t60 = ((x241<x242)<(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = 26U;
	int16_t x248 = -1;
	static int32_t t61 = -448782;

	t61 = ((x245<x246)<(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	static int32_t x251 = 249774;
	int32_t t62 = 208958312;

	t62 = ((x249<x250)<(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int16_t x255 = INT16_MAX;
	static int32_t t63 = 96731453;

	t63 = ((x253<x254)<(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x258 = -1;
	int32_t x259 = -1;
	static volatile int32_t x260 = INT32_MIN;
	int32_t t64 = 124004;

	t64 = ((x257<x258)<(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = -19865649287225LL;
	static int64_t x263 = INT64_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t65 = 6;

	t65 = ((x261<x262)<(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MAX;
	static uint16_t x267 = 14U;
	volatile int8_t x268 = INT8_MAX;
	int32_t t66 = 29961926;

	t66 = ((x265<x266)<(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	int64_t x270 = -1216323LL;
	int32_t x272 = -1;
	int32_t t67 = 241;

	t67 = ((x269<x270)<(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	volatile uint64_t x276 = 806LLU;
	volatile int32_t t68 = 127489345;

	t68 = ((x273<x274)<(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 10U;
	uint16_t x278 = 415U;
	static int64_t x279 = INT64_MIN;
	volatile int32_t t69 = -96;

	t69 = ((x277<x278)<(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x283 = UINT32_MAX;
	volatile int32_t t70 = -833721;

	t70 = ((x281<x282)<(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x287 = 13U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 106970;

	t71 = ((x285<x286)<(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -24;
	uint8_t x290 = 0U;
	int8_t x291 = 18;
	volatile int32_t t72 = 249;

	t72 = ((x289<x290)<(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 27103U;
	int16_t x294 = -6775;
	uint32_t x295 = UINT32_MAX;
	int8_t x296 = -1;
	static volatile int32_t t73 = 3649702;

	t73 = ((x293<x294)<(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	static int16_t x298 = 321;
	int8_t x300 = -44;
	int32_t t74 = 798026669;

	t74 = ((x297<x298)<(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x303 = 22931897935LLU;
	int64_t x304 = -203406016398502LL;

	t75 = ((x301<x302)<(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	static int32_t x308 = 59453;
	volatile int32_t t76 = -295;

	t76 = ((x305<x306)<(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x309 = UINT32_MAX;
	uint8_t x311 = 5U;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = 2782;

	t77 = ((x309<x310)<(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = -1;
	uint16_t x314 = 53U;
	int8_t x315 = 0;
	int32_t t78 = 43723218;

	t78 = ((x313<x314)<(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 3U;
	uint8_t x318 = 9U;
	int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MAX;
	static int32_t t79 = 45186;

	t79 = ((x317<x318)<(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	uint64_t x322 = 7175LLU;
	volatile uint8_t x323 = 0U;
	static int32_t x324 = INT32_MIN;

	t80 = ((x321<x322)<(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int8_t x326 = -1;
	volatile int8_t x328 = 1;

	t81 = ((x325<x326)<(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -237756753518837849LL;
	int16_t x330 = 14242;
	volatile int32_t t82 = 48405226;

	t82 = ((x329<x330)<(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 0LLU;
	static uint64_t x334 = 30536883912LLU;
	int32_t x336 = -1;
	volatile int32_t t83 = -3;

	t83 = ((x333<x334)<(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 75530478;
	static int64_t x338 = 21406786895667LL;
	int64_t x340 = -6434147945LL;
	static int32_t t84 = -3155;

	t84 = ((x337<x338)<(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	volatile int16_t x342 = 6;
	int32_t x343 = INT32_MAX;
	static volatile int8_t x344 = INT8_MAX;
	int32_t t85 = 27176;

	t85 = ((x341<x342)<(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = -1LL;
	uint8_t x347 = 5U;
	volatile int8_t x348 = -1;
	volatile int32_t t86 = -522853031;

	t86 = ((x345<x346)<(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x350 = 3933151102478644LLU;
	int16_t x351 = INT16_MIN;

	t87 = ((x349<x350)<(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = INT32_MIN;
	volatile uint32_t x356 = UINT32_MAX;

	t88 = ((x353<x354)<(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 0U;
	static volatile uint64_t x358 = UINT64_MAX;
	uint64_t x359 = 80577354616750LLU;
	int32_t x360 = -1;
	volatile int32_t t89 = 1;

	t89 = ((x357<x358)<(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 510350U;
	int32_t x362 = -1;
	int8_t x363 = INT8_MIN;
	volatile int64_t x364 = 159LL;
	volatile int32_t t90 = -924;

	t90 = ((x361<x362)<(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MIN;
	volatile int32_t t91 = 50;

	t91 = ((x365<x366)<(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 1103551990627578643LLU;
	int64_t x370 = -1LL;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t t92 = 26117618;

	t92 = ((x369<x370)<(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -1;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	uint8_t x376 = UINT8_MAX;
	int32_t t93 = 4652384;

	t93 = ((x373<x374)<(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = 1;
	int16_t x379 = INT16_MIN;
	int32_t t94 = 228;

	t94 = ((x377<x378)<(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x383 = UINT8_MAX;
	uint64_t x384 = 206487312172609267LLU;
	volatile int32_t t95 = -6484;

	t95 = ((x381<x382)<(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 9380808U;
	int64_t x386 = -4018525198LL;
	static int16_t x387 = -1;
	static uint8_t x388 = 6U;
	int32_t t96 = 1;

	t96 = ((x385<x386)<(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	int8_t x390 = 19;
	int32_t x391 = -4331;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = -17520;

	t97 = ((x389<x390)<(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x394 = 944LL;
	int16_t x395 = INT16_MIN;
	static uint32_t x396 = UINT32_MAX;
	int32_t t98 = 13;

	t98 = ((x393<x394)<(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	volatile int32_t x398 = -3;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t99 = 26051;

	t99 = ((x397<x398)<(x399==x400));

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

