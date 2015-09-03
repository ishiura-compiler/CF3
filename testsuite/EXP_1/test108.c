#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = -1;
int8_t x5 = INT8_MAX;
volatile uint32_t x10 = UINT32_MAX;
int32_t x11 = 0;
static volatile int8_t x12 = -1;
volatile int32_t t2 = -1865;
uint16_t x24 = UINT16_MAX;
static int32_t x30 = 3010595;
int8_t x31 = INT8_MAX;
uint32_t x35 = 37541469U;
uint16_t x43 = UINT16_MAX;
int16_t x51 = -1;
int64_t x57 = -17864332747702416LL;
volatile uint16_t x60 = UINT16_MAX;
static int32_t t13 = 327;
int32_t x85 = INT32_MIN;
static uint64_t t16 = 106884213033749LLU;
volatile uint16_t x90 = UINT16_MAX;
volatile int8_t x91 = -1;
volatile uint64_t x95 = 3932412LLU;
int16_t x104 = INT16_MAX;
int64_t x105 = -1LL;
int64_t x107 = -1LL;
uint8_t x114 = UINT8_MAX;
static int32_t x116 = -3389;
uint64_t x120 = 1732986289LLU;
int16_t x123 = INT16_MIN;
int64_t x124 = 38445453678LL;
uint8_t x125 = 3U;
int64_t x127 = INT64_MAX;
volatile int32_t x128 = -62259;
volatile int32_t t26 = 16063;
uint16_t x129 = 458U;
static volatile int32_t t27 = 4427002;
int32_t x138 = -23088;
int64_t x139 = INT64_MIN;
int32_t x140 = -1;
volatile int8_t x143 = 1;
uint16_t x161 = 3U;
uint8_t x163 = UINT8_MAX;
static uint64_t x169 = 25LLU;
volatile uint64_t x172 = UINT64_MAX;
uint64_t t34 = 32LLU;
int32_t x173 = INT32_MAX;
int32_t t35 = -203349;
int64_t x184 = -1LL;
int64_t t37 = 363LL;
int64_t x190 = -854289580LL;
int8_t x191 = -7;
int64_t x196 = INT64_MIN;
static uint8_t x199 = 1U;
int16_t x200 = 1;
int32_t t41 = 684781826;
int64_t x206 = -1LL;
volatile int8_t x208 = -1;
uint16_t x210 = 0U;
static int8_t x213 = INT8_MAX;
volatile int32_t t44 = -9794464;
int16_t x218 = INT16_MIN;
int32_t x243 = INT32_MIN;
volatile uint64_t x249 = 24036651967843LLU;
volatile int32_t t51 = -30587;
static int32_t t53 = 7872;
int8_t x261 = INT8_MAX;
static uint32_t x262 = 8U;
static int16_t x265 = 2284;
static uint8_t x273 = UINT8_MAX;
int8_t x295 = -1;
volatile int8_t x296 = INT8_MAX;
int8_t x301 = INT8_MIN;
int8_t x302 = INT8_MIN;
static int64_t x321 = -5408202294960382LL;
int32_t x323 = 197529215;
int8_t x329 = INT8_MIN;
int8_t x331 = -1;
static int8_t x335 = INT8_MIN;
uint64_t x338 = 0LLU;
volatile int32_t t69 = 0;
static uint64_t x345 = 3LLU;
int64_t x352 = INT64_MIN;
int32_t x362 = 517872205;
static volatile uint8_t x365 = 13U;
uint8_t x367 = 1U;
volatile uint16_t x378 = UINT16_MAX;
int16_t x381 = -1;
int64_t x387 = INT64_MIN;
int64_t x388 = 130473703134643772LL;
volatile int64_t t78 = 506LL;
static uint8_t x391 = UINT8_MAX;
int32_t t79 = 916;
int16_t x398 = -1;
int8_t x404 = INT8_MIN;
volatile int16_t x413 = INT16_MIN;
int64_t x417 = INT64_MIN;
int16_t x422 = INT16_MIN;
volatile int32_t t86 = 18723014;
volatile int16_t x435 = INT16_MIN;
uint64_t x446 = 471603163LLU;
int32_t x448 = INT32_MAX;
int16_t x450 = INT16_MIN;
uint32_t x452 = 51U;
volatile uint32_t t90 = 73U;
int64_t x455 = INT64_MAX;
int32_t x456 = 2;
volatile uint8_t x458 = UINT8_MAX;
int64_t x471 = 5453662LL;
int32_t t94 = 154293;
int8_t x479 = -1;
uint16_t x497 = 1U;
int16_t x499 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint8_t x2 = 3U;
	int64_t x3 = INT64_MIN;
	static int32_t t0 = -1206;

	t0 = (((x1+x2)<x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int8_t x7 = INT8_MAX;
	static int8_t x8 = 27;
	volatile int32_t t1 = 11;

	t1 = (((x5+x6)<x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 23U;

	t2 = (((x9+x10)<x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -58;
	int64_t x14 = -1LL;
	volatile int64_t x15 = 40964135LL;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = -13410;

	t3 = (((x13+x14)<x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int32_t x18 = 58596226;
	uint32_t x19 = 3081U;
	int8_t x20 = -1;
	int32_t t4 = 49;

	t4 = (((x17+x18)<x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint16_t x22 = UINT16_MAX;
	volatile int8_t x23 = INT8_MIN;
	static int32_t t5 = 30744726;

	t5 = (((x21+x22)<x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint64_t x26 = 41215LLU;
	int64_t x27 = -1LL;
	volatile int16_t x28 = -1;
	volatile int32_t t6 = 13999;

	t6 = (((x25+x26)<x27)/x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 5;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 61;

	t7 = (((x29+x30)<x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 33U;
	int8_t x34 = -15;
	uint64_t x36 = 590132207LLU;
	uint64_t t8 = 19608073LLU;

	t8 = (((x33+x34)<x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	static int32_t x42 = -1;
	int32_t x44 = -1;
	volatile int32_t t9 = -123541924;

	t9 = (((x41+x42)<x43)/x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x45 = 10461U;
	static int8_t x46 = INT8_MIN;
	static int8_t x47 = INT8_MIN;
	int32_t x48 = -68049960;
	static volatile int32_t t10 = -57;

	t10 = (((x45+x46)<x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 0U;
	int8_t x50 = INT8_MIN;
	volatile int8_t x52 = 2;
	volatile int32_t t11 = -1;

	t11 = (((x49+x50)<x51)/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x58 = 1LLU;
	int16_t x59 = 1508;
	int32_t t12 = 3;

	t12 = (((x57+x58)<x59)/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = INT32_MAX;
	int64_t x71 = INT64_MAX;
	int16_t x72 = INT16_MIN;

	t13 = (((x69+x70)<x71)/x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x78 = INT32_MIN;
	int32_t x79 = -1;
	int16_t x80 = 11099;
	int32_t t14 = 4159382;

	t14 = (((x77+x78)<x79)/x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MIN;
	static volatile uint32_t x82 = 2204U;
	int64_t x83 = 18562602026166039LL;
	int32_t x84 = INT32_MAX;
	volatile int32_t t15 = -9;

	t15 = (((x81+x82)<x83)/x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x86 = INT64_MAX;
	static int64_t x87 = -1721032LL;
	uint64_t x88 = 457072291LLU;

	t16 = (((x85+x86)<x87)/x88);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x92 = INT8_MAX;
	volatile int32_t t17 = -2489414;

	t17 = (((x89+x90)<x91)/x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -1;
	static uint32_t x94 = 4204U;
	static int32_t x96 = 621;
	volatile int32_t t18 = 358365;

	t18 = (((x93+x94)<x95)/x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = 8U;
	int8_t x99 = -1;
	volatile int32_t x100 = INT32_MAX;
	static volatile int32_t t19 = 3877653;

	t19 = (((x97+x98)<x99)/x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x101 = 363U;
	int8_t x102 = INT8_MAX;
	volatile int8_t x103 = -1;
	volatile int32_t t20 = -497960382;

	t20 = (((x101+x102)<x103)/x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x106 = INT16_MIN;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t21 = 15357;

	t21 = (((x105+x106)<x107)/x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x109 = 3U;
	int8_t x110 = INT8_MIN;
	static uint16_t x111 = UINT16_MAX;
	int8_t x112 = INT8_MIN;
	int32_t t22 = -77;

	t22 = (((x109+x110)<x111)/x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = 84U;
	uint32_t x115 = UINT32_MAX;
	static int32_t t23 = 641;

	t23 = (((x113+x114)<x115)/x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = 918;
	uint16_t x118 = 145U;
	int8_t x119 = -1;
	volatile uint64_t t24 = 1903574LLU;

	t24 = (((x117+x118)<x119)/x120);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x121 = 2U;
	int8_t x122 = INT8_MIN;
	static volatile int64_t t25 = -14606872432030868LL;

	t25 = (((x121+x122)<x123)/x124);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x126 = 37U;

	t26 = (((x125+x126)<x127)/x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x130 = -6;
	static uint32_t x131 = 59269668U;
	static volatile uint16_t x132 = UINT16_MAX;

	t27 = (((x129+x130)<x131)/x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = UINT8_MAX;
	static volatile int32_t t28 = -198533895;

	t28 = (((x137+x138)<x139)/x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -1;
	int8_t x142 = INT8_MAX;
	int32_t x144 = INT32_MIN;
	volatile int32_t t29 = 286;

	t29 = (((x141+x142)<x143)/x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MAX;
	int8_t x146 = -13;
	int64_t x147 = -1LL;
	volatile uint8_t x148 = 72U;
	int32_t t30 = 0;

	t30 = (((x145+x146)<x147)/x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x149 = 10U;
	static int32_t x150 = 3;
	int8_t x151 = INT8_MIN;
	static uint8_t x152 = 15U;
	volatile int32_t t31 = -1;

	t31 = (((x149+x150)<x151)/x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = 1U;
	static uint32_t x159 = 53U;
	int64_t x160 = -2306724710LL;
	int64_t t32 = 5698LL;

	t32 = (((x157+x158)<x159)/x160);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x162 = -1LL;
	int64_t x164 = INT64_MAX;
	volatile int64_t t33 = 130778386544821431LL;

	t33 = (((x161+x162)<x163)/x164);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x170 = -1;
	int64_t x171 = INT64_MIN;

	t34 = (((x169+x170)<x171)/x172);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x174 = -795;
	int32_t x175 = -1;
	uint16_t x176 = UINT16_MAX;

	t35 = (((x173+x174)<x175)/x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x177 = -12;
	int16_t x178 = -18;
	int32_t x179 = INT32_MIN;
	static int64_t x180 = 4591378377437LL;
	volatile int64_t t36 = -73129246LL;

	t36 = (((x177+x178)<x179)/x180);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = 449456325LL;
	static int16_t x182 = INT16_MIN;
	uint32_t x183 = 2320247U;

	t37 = (((x181+x182)<x183)/x184);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile uint16_t x186 = UINT16_MAX;
	uint16_t x187 = 340U;
	int64_t x188 = INT64_MAX;
	int64_t t38 = -261808127563LL;

	t38 = (((x185+x186)<x187)/x188);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = -1;
	int32_t x192 = -1;
	int32_t t39 = -7204;

	t39 = (((x189+x190)<x191)/x192);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x193 = UINT8_MAX;
	int64_t x194 = 5908997178160LL;
	int64_t x195 = 1537618LL;
	static volatile int64_t t40 = -12425501448307026LL;

	t40 = (((x193+x194)<x195)/x196);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x197 = UINT8_MAX;
	static volatile int8_t x198 = -3;

	t41 = (((x197+x198)<x199)/x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x205 = INT32_MAX;
	int8_t x207 = INT8_MIN;
	volatile int32_t t42 = -4133536;

	t42 = (((x205+x206)<x207)/x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x209 = 1U;
	uint64_t x211 = 1420076151741083920LLU;
	volatile int32_t x212 = -1;
	volatile int32_t t43 = 1271134;

	t43 = (((x209+x210)<x211)/x212);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MIN;
	int8_t x216 = 6;

	t44 = (((x213+x214)<x215)/x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x217 = 35LLU;
	static int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MIN;
	int64_t t45 = 4000862LL;

	t45 = (((x217+x218)<x219)/x220);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = INT16_MAX;
	static uint64_t x222 = UINT64_MAX;
	volatile uint64_t x223 = 100786LLU;
	uint32_t x224 = 88198203U;
	static uint32_t t46 = 181546018U;

	t46 = (((x221+x222)<x223)/x224);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x233 = UINT32_MAX;
	static uint16_t x234 = UINT16_MAX;
	uint32_t x235 = 9755U;
	static int64_t x236 = INT64_MIN;
	static volatile int64_t t47 = -4805785104LL;

	t47 = (((x233+x234)<x235)/x236);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x237 = 89U;
	int32_t x238 = -2852863;
	static uint64_t x239 = 166325608481LLU;
	int64_t x240 = INT64_MIN;
	int64_t t48 = 10385703111567LL;

	t48 = (((x237+x238)<x239)/x240);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = INT64_MAX;
	volatile int8_t x242 = INT8_MIN;
	int64_t x244 = INT64_MIN;
	volatile int64_t t49 = -78LL;

	t49 = (((x241+x242)<x243)/x244);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x245 = 11;
	uint32_t x246 = 1U;
	int8_t x247 = -1;
	uint32_t x248 = 3U;
	volatile uint32_t t50 = 2224709U;

	t50 = (((x245+x246)<x247)/x248);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MAX;
	int8_t x252 = -1;

	t51 = (((x249+x250)<x251)/x252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x253 = INT8_MIN;
	int8_t x254 = 0;
	uint32_t x255 = 22U;
	int16_t x256 = 9503;
	int32_t t52 = 140807596;

	t52 = (((x253+x254)<x255)/x256);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x257 = 3U;
	static int32_t x258 = -1;
	uint64_t x259 = 13969200LLU;
	uint16_t x260 = UINT16_MAX;

	t53 = (((x257+x258)<x259)/x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x263 = -80149;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t54 = 112526;

	t54 = (((x261+x262)<x263)/x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x266 = INT64_MIN;
	volatile int32_t x267 = -1;
	volatile uint8_t x268 = UINT8_MAX;
	int32_t t55 = -810271;

	t55 = (((x265+x266)<x267)/x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x274 = -1;
	uint8_t x275 = 1U;
	static int8_t x276 = -5;
	volatile int32_t t56 = -115004;

	t56 = (((x273+x274)<x275)/x276);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	volatile int16_t x283 = -3400;
	int64_t x284 = INT64_MAX;
	volatile int64_t t57 = 4193106303LL;

	t57 = (((x281+x282)<x283)/x284);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x285 = 72914LL;
	int8_t x286 = -1;
	int32_t x287 = INT32_MIN;
	volatile uint32_t x288 = 5616144U;
	volatile uint32_t t58 = 144951850U;

	t58 = (((x285+x286)<x287)/x288);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x289 = 0;
	int64_t x290 = -1585LL;
	int32_t x291 = -1;
	volatile uint8_t x292 = 1U;
	int32_t t59 = 258055414;

	t59 = (((x289+x290)<x291)/x292);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MIN;
	static volatile int32_t t60 = -11640981;

	t60 = (((x293+x294)<x295)/x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x297 = 51U;
	volatile uint16_t x298 = UINT16_MAX;
	int8_t x299 = -6;
	static uint16_t x300 = UINT16_MAX;
	static int32_t t61 = 208;

	t61 = (((x297+x298)<x299)/x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x303 = -1;
	static int32_t x304 = INT32_MAX;
	int32_t t62 = -576;

	t62 = (((x301+x302)<x303)/x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x313 = UINT32_MAX;
	static int8_t x314 = INT8_MIN;
	static int16_t x315 = 7678;
	volatile int64_t x316 = 3884629LL;
	int64_t t63 = 11001544255650398LL;

	t63 = (((x313+x314)<x315)/x316);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x317 = -1;
	volatile int64_t x318 = INT64_MAX;
	static int64_t x319 = INT64_MIN;
	uint64_t x320 = 40659722560100043LLU;
	volatile uint64_t t64 = 8142249LLU;

	t64 = (((x317+x318)<x319)/x320);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x322 = -1;
	static uint64_t x324 = 819596980285LLU;
	uint64_t t65 = 141LLU;

	t65 = (((x321+x322)<x323)/x324);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x330 = 13U;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t66 = 4240518601LLU;

	t66 = (((x329+x330)<x331)/x332);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x333 = INT16_MIN;
	static uint16_t x334 = 1U;
	static volatile int32_t x336 = INT32_MIN;
	static volatile int32_t t67 = -481144;

	t67 = (((x333+x334)<x335)/x336);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x337 = INT32_MIN;
	int8_t x339 = 18;
	int16_t x340 = 1;
	volatile int32_t t68 = 281414615;

	t68 = (((x337+x338)<x339)/x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x341 = INT32_MIN;
	uint64_t x342 = 30056701990LLU;
	volatile int64_t x343 = INT64_MAX;
	static uint8_t x344 = UINT8_MAX;

	t69 = (((x341+x342)<x343)/x344);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x346 = 8U;
	static uint32_t x347 = UINT32_MAX;
	volatile uint16_t x348 = 3639U;
	volatile int32_t t70 = -20319;

	t70 = (((x345+x346)<x347)/x348);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x349 = 1520548LLU;
	static uint8_t x350 = 2U;
	static int64_t x351 = -1LL;
	volatile int64_t t71 = 6137LL;

	t71 = (((x349+x350)<x351)/x352);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x353 = INT16_MIN;
	static uint64_t x354 = UINT64_MAX;
	uint16_t x355 = 0U;
	volatile uint16_t x356 = 897U;
	int32_t t72 = -454;

	t72 = (((x353+x354)<x355)/x356);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x361 = UINT32_MAX;
	static volatile uint8_t x363 = 0U;
	volatile int64_t x364 = -823774LL;
	int64_t t73 = 7248039LL;

	t73 = (((x361+x362)<x363)/x364);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x366 = -1;
	volatile int8_t x368 = -35;
	volatile int32_t t74 = 244189;

	t74 = (((x365+x366)<x367)/x368);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x369 = INT32_MIN;
	uint32_t x370 = UINT32_MAX;
	volatile int64_t x371 = INT64_MAX;
	volatile uint8_t x372 = 6U;
	int32_t t75 = -191837;

	t75 = (((x369+x370)<x371)/x372);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x377 = -1;
	int32_t x379 = INT32_MIN;
	int32_t x380 = -1;
	int32_t t76 = 1343;

	t76 = (((x377+x378)<x379)/x380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x382 = -1;
	static uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MIN;
	static int32_t t77 = -26;

	t77 = (((x381+x382)<x383)/x384);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x385 = -12536;
	static uint16_t x386 = 8U;

	t78 = (((x385+x386)<x387)/x388);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x389 = UINT16_MAX;
	volatile int64_t x390 = INT64_MIN;
	uint8_t x392 = 28U;

	t79 = (((x389+x390)<x391)/x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x393 = 83;
	int64_t x394 = -169601893158LL;
	int16_t x395 = -3;
	volatile int32_t x396 = 221;
	int32_t t80 = -7;

	t80 = (((x393+x394)<x395)/x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x397 = 123226970U;
	static int8_t x399 = INT8_MIN;
	static int64_t x400 = -1LL;
	int64_t t81 = -1641LL;

	t81 = (((x397+x398)<x399)/x400);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int64_t x402 = 21LL;
	int32_t x403 = -1;
	static int32_t t82 = -2;

	t82 = (((x401+x402)<x403)/x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x414 = INT16_MIN;
	int64_t x415 = -4969LL;
	volatile int32_t x416 = INT32_MIN;
	int32_t t83 = -1410402;

	t83 = (((x413+x414)<x415)/x416);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x418 = UINT32_MAX;
	static uint16_t x419 = UINT16_MAX;
	uint16_t x420 = 688U;
	static volatile int32_t t84 = 223;

	t84 = (((x417+x418)<x419)/x420);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x421 = -3;
	uint64_t x423 = 25139530LLU;
	uint8_t x424 = UINT8_MAX;
	int32_t t85 = -12979648;

	t85 = (((x421+x422)<x423)/x424);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x429 = UINT32_MAX;
	int16_t x430 = INT16_MIN;
	int64_t x431 = -14021498298LL;
	uint16_t x432 = 416U;

	t86 = (((x429+x430)<x431)/x432);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x433 = INT8_MAX;
	uint64_t x434 = 131978729LLU;
	uint16_t x436 = UINT16_MAX;
	static int32_t t87 = 503;

	t87 = (((x433+x434)<x435)/x436);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x437 = 0;
	int16_t x438 = -1;
	int64_t x439 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	int32_t t88 = 5714;

	t88 = (((x437+x438)<x439)/x440);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x445 = UINT64_MAX;
	int64_t x447 = -1LL;
	volatile int32_t t89 = -66047122;

	t89 = (((x445+x446)<x447)/x448);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x449 = 14U;
	uint32_t x451 = UINT32_MAX;

	t90 = (((x449+x450)<x451)/x452);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x453 = UINT16_MAX;
	int64_t x454 = INT64_MIN;
	int32_t t91 = 8150630;

	t91 = (((x453+x454)<x455)/x456);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x457 = INT8_MIN;
	uint64_t x459 = 2494365LLU;
	static int8_t x460 = INT8_MAX;
	int32_t t92 = -8524;

	t92 = (((x457+x458)<x459)/x460);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x465 = INT16_MIN;
	uint8_t x466 = UINT8_MAX;
	static int32_t x467 = INT32_MAX;
	int64_t x468 = -1LL;
	volatile int64_t t93 = 533LL;

	t93 = (((x465+x466)<x467)/x468);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x469 = INT16_MIN;
	int32_t x470 = -1;
	int8_t x472 = 4;

	t94 = (((x469+x470)<x471)/x472);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x473 = 39U;
	int16_t x474 = 1;
	static uint32_t x475 = 103U;
	volatile int64_t x476 = 49852428706041948LL;
	int64_t t95 = -31885LL;

	t95 = (((x473+x474)<x475)/x476);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x477 = 143U;
	int64_t x478 = -1187440LL;
	uint8_t x480 = UINT8_MAX;
	static int32_t t96 = -12996;

	t96 = (((x477+x478)<x479)/x480);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x481 = 2U;
	uint8_t x482 = 109U;
	static int8_t x483 = INT8_MIN;
	static int32_t x484 = -624873656;
	int32_t t97 = 1;

	t97 = (((x481+x482)<x483)/x484);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x489 = 53;
	int16_t x490 = 0;
	static int32_t x491 = 213312;
	volatile uint32_t x492 = UINT32_MAX;
	static volatile uint32_t t98 = 1227U;

	t98 = (((x489+x490)<x491)/x492);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x498 = 80501670074LLU;
	int8_t x500 = -1;
	static volatile int32_t t99 = 40744;

	t99 = (((x497+x498)<x499)/x500);

	if (t99 != -1) { NG(); } else { ; }
	
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

