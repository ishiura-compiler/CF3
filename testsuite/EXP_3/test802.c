#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x8 = INT8_MIN;
static int32_t t2 = 180;
uint16_t x16 = UINT16_MAX;
int32_t x18 = 0;
static int8_t x24 = 5;
static uint64_t x26 = 3360384624LLU;
volatile int32_t x27 = -245;
volatile int32_t t6 = -1757796;
int64_t x30 = -1LL;
int32_t x48 = INT32_MIN;
uint8_t x49 = 1U;
static int32_t x52 = -1;
int64_t x55 = -1LL;
volatile int16_t x56 = 7017;
int64_t x57 = INT64_MAX;
int32_t t16 = -17;
volatile int32_t t17 = 4701071;
int8_t x75 = INT8_MIN;
int8_t x82 = INT8_MIN;
static volatile int8_t x83 = -1;
int16_t x92 = -1;
static int32_t t22 = 213469641;
int64_t x96 = -598725039385790LL;
static int8_t x97 = INT8_MIN;
int16_t x99 = 1068;
uint8_t x105 = UINT8_MAX;
int32_t t26 = -5185222;
volatile int32_t t27 = 1509093;
int32_t x113 = INT32_MIN;
uint32_t x117 = 601U;
volatile int8_t x127 = -1;
int32_t t31 = 10070131;
static volatile uint32_t x144 = 1499U;
int8_t x146 = -1;
int32_t x147 = 15416954;
static volatile int16_t x148 = 108;
int32_t t36 = -83671818;
int32_t x153 = INT32_MAX;
int8_t x156 = INT8_MAX;
volatile int32_t t38 = -412954381;
static int8_t x160 = INT8_MAX;
int16_t x161 = 7;
static volatile int32_t x162 = INT32_MIN;
volatile int32_t x168 = -1;
int32_t t41 = -143537;
volatile int16_t x174 = 1;
int32_t x181 = INT32_MIN;
uint16_t x183 = 3135U;
int16_t x189 = INT16_MAX;
uint16_t x191 = UINT16_MAX;
int16_t x197 = INT16_MIN;
int8_t x200 = INT8_MAX;
volatile int16_t x202 = INT16_MAX;
int32_t x205 = INT32_MIN;
volatile int32_t t52 = -371;
static int16_t x224 = INT16_MIN;
int32_t x227 = -4313916;
volatile int32_t t57 = 4;
int32_t t59 = 441172406;
int32_t x244 = INT32_MIN;
static int32_t x246 = INT32_MIN;
int32_t t61 = 79;
volatile int32_t t63 = -66;
int16_t x258 = INT16_MIN;
volatile int32_t x262 = INT32_MIN;
uint32_t x266 = 4857U;
static int32_t x270 = INT32_MIN;
static uint8_t x274 = UINT8_MAX;
static volatile int16_t x276 = 1;
int32_t x277 = 7;
int32_t t69 = -38;
int8_t x281 = 24;
uint32_t x282 = 140U;
int32_t x283 = -1;
volatile uint32_t x284 = 7127132U;
static int8_t x285 = -1;
int8_t x286 = 4;
int64_t x287 = 1972LL;
int64_t x290 = INT64_MIN;
static int32_t t72 = -7424894;
static int64_t x293 = -1LL;
uint16_t x297 = 39U;
uint64_t x302 = 62044467LLU;
int32_t x314 = INT32_MIN;
uint16_t x321 = 6U;
static int8_t x322 = INT8_MIN;
volatile int16_t x323 = -10918;
volatile int8_t x324 = -1;
int32_t t80 = -5;
int8_t x332 = INT8_MIN;
static int32_t x335 = INT32_MIN;
int8_t x342 = 0;
volatile uint8_t x345 = UINT8_MAX;
int32_t x346 = INT32_MIN;
static volatile int8_t x347 = INT8_MAX;
static uint8_t x349 = 3U;
int32_t t88 = 997667;
volatile int8_t x367 = INT8_MAX;
int16_t x368 = INT16_MAX;
int32_t t94 = 196704028;
int16_t x389 = INT16_MIN;
volatile int32_t t97 = -226216;
uint32_t x394 = UINT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MAX;
	uint32_t x3 = 70945573U;
	volatile uint16_t x4 = 22575U;
	static volatile int32_t t0 = 164762405;

	t0 = ((x1<=x2)<(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int8_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int32_t t1 = -3242;

	t1 = ((x5<=x6)<(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -4020LL;
	int16_t x10 = -1;
	volatile uint8_t x11 = 7U;
	uint64_t x12 = 18LLU;

	t2 = ((x9<=x10)<(x11%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 190672683;
	int64_t x14 = INT64_MIN;
	volatile uint16_t x15 = 5U;
	static volatile int32_t t3 = -63750;

	t3 = ((x13<=x14)<(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x19 = 3U;
	int16_t x20 = -2;
	volatile int32_t t4 = -1467077;

	t4 = ((x17<=x18)<(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static int64_t x22 = INT64_MAX;
	volatile uint32_t x23 = 81U;
	int32_t t5 = -15;

	t5 = ((x21<=x22)<(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	int8_t x28 = INT8_MIN;

	t6 = ((x25<=x26)<(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	int8_t x31 = -15;
	volatile int16_t x32 = -52;
	int32_t t7 = -25557;

	t7 = ((x29<=x30)<(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 0;
	uint16_t x34 = UINT16_MAX;
	volatile int8_t x35 = 5;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = -144;

	t8 = ((x33<=x34)<(x35%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int32_t x38 = 56644154;
	uint32_t x39 = 121178U;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = -687;

	t9 = ((x37<=x38)<(x39%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	static uint32_t x42 = 8U;
	volatile uint16_t x43 = 17U;
	static volatile int8_t x44 = 2;
	static int32_t t10 = -6588;

	t10 = ((x41<=x42)<(x43%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	static int32_t x47 = 91552789;
	volatile int32_t t11 = -3;

	t11 = ((x45<=x46)<(x47%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x50 = 19LLU;
	uint64_t x51 = 61954400789LLU;
	int32_t t12 = -1976817;

	t12 = ((x49<=x50)<(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 23U;
	volatile int32_t x54 = INT32_MIN;
	int32_t t13 = 171131706;

	t13 = ((x53<=x54)<(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -5983384;
	static int32_t x59 = 105;
	volatile uint32_t x60 = 70281U;
	static volatile int32_t t14 = 33281941;

	t14 = ((x57<=x58)<(x59%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 0;
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = 6U;
	static int32_t t15 = 0;

	t15 = ((x61<=x62)<(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 105U;
	uint16_t x66 = 12U;
	int8_t x67 = 29;
	volatile uint8_t x68 = 28U;

	t16 = ((x65<=x66)<(x67%x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int16_t x70 = 1;
	volatile int8_t x71 = 13;
	uint32_t x72 = 7366U;

	t17 = ((x69<=x70)<(x71%x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	uint32_t x74 = 12317U;
	volatile uint8_t x76 = UINT8_MAX;
	int32_t t18 = -31230995;

	t18 = ((x73<=x74)<(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int32_t x78 = 1027221607;
	static uint16_t x79 = 698U;
	int64_t x80 = INT64_MIN;
	int32_t t19 = -1939;

	t19 = ((x77<=x78)<(x79%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint8_t x84 = 13U;
	int32_t t20 = -6952;

	t20 = ((x81<=x82)<(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 3481936LLU;
	int64_t x86 = 11222070LL;
	uint8_t x87 = 51U;
	uint16_t x88 = 2926U;
	int32_t t21 = 8773;

	t21 = ((x85<=x86)<(x87%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = -1;
	int64_t x91 = -3064785814649213459LL;

	t22 = ((x89<=x90)<(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int16_t x94 = -160;
	static volatile uint64_t x95 = 40118736LLU;
	static volatile int32_t t23 = 44399;

	t23 = ((x93<=x94)<(x95%x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 330816951;

	t24 = ((x97<=x98)<(x99%x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int64_t x102 = INT64_MAX;
	static int64_t x103 = -1LL;
	int64_t x104 = -1LL;
	int32_t t25 = -151678650;

	t25 = ((x101<=x102)<(x103%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = 10738755LLU;
	static volatile int64_t x107 = INT64_MAX;
	uint16_t x108 = UINT16_MAX;

	t26 = ((x105<=x106)<(x107%x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	uint8_t x111 = 36U;
	int32_t x112 = INT32_MIN;

	t27 = ((x109<=x110)<(x111%x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x114 = INT64_MIN;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = -1;
	volatile int32_t t28 = -6;

	t28 = ((x113<=x114)<(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = 31U;
	int16_t x119 = INT16_MAX;
	int8_t x120 = -1;
	volatile int32_t t29 = -49;

	t29 = ((x117<=x118)<(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	uint16_t x122 = UINT16_MAX;
	static int8_t x123 = INT8_MIN;
	volatile int64_t x124 = 1446208LL;
	volatile int32_t t30 = 23;

	t30 = ((x121<=x122)<(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	uint8_t x126 = 113U;
	uint64_t x128 = 21861837LLU;

	t31 = ((x125<=x126)<(x127%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	uint8_t x131 = 18U;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 1891;

	t32 = ((x129<=x130)<(x131%x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 6466342887432LLU;
	uint8_t x134 = 79U;
	volatile int16_t x135 = -28;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -7971342;

	t33 = ((x133<=x134)<(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -1LL;
	int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;
	static int32_t t34 = -1;

	t34 = ((x137<=x138)<(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = 14838;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	volatile int32_t t35 = -4559793;

	t35 = ((x141<=x142)<(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 12347U;

	t36 = ((x145<=x146)<(x147%x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	volatile uint16_t x150 = 61U;
	static int32_t x151 = 4;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 65172;

	t37 = ((x149<=x150)<(x151%x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = INT32_MIN;
	volatile int32_t x155 = INT32_MIN;

	t38 = ((x153<=x154)<(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -54599916LL;
	uint32_t x158 = 234U;
	int32_t x159 = 869;
	volatile int32_t t39 = -943;

	t39 = ((x157<=x158)<(x159%x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x163 = -1;
	int16_t x164 = -1;
	int32_t t40 = 6067771;

	t40 = ((x161<=x162)<(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = 0U;
	int16_t x166 = -7;
	int32_t x167 = -2956355;

	t41 = ((x165<=x166)<(x167%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 40;
	int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MIN;
	static volatile uint64_t x172 = 6731752404LLU;
	int32_t t42 = 580979;

	t42 = ((x169<=x170)<(x171%x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = 6;
	int16_t x175 = -6;
	volatile int16_t x176 = 4;
	int32_t t43 = 29;

	t43 = ((x173<=x174)<(x175%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x177 = -44;
	volatile uint16_t x178 = UINT16_MAX;
	int16_t x179 = INT16_MIN;
	int64_t x180 = 85983796LL;
	static volatile int32_t t44 = -2;

	t44 = ((x177<=x178)<(x179%x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = 3;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 100545267;

	t45 = ((x181<=x182)<(x183%x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static int64_t x186 = 479872712704125646LL;
	uint32_t x187 = 499409U;
	uint16_t x188 = 13091U;
	volatile int32_t t46 = 65635786;

	t46 = ((x185<=x186)<(x187%x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 14U;
	uint16_t x192 = 5U;
	volatile int32_t t47 = 1;

	t47 = ((x189<=x190)<(x191%x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 2190U;
	static uint32_t x194 = UINT32_MAX;
	int8_t x195 = 6;
	int64_t x196 = 3122635542418LL;
	volatile int32_t t48 = -7694255;

	t48 = ((x193<=x194)<(x195%x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x198 = 601LLU;
	int32_t x199 = INT32_MAX;
	int32_t t49 = -253428;

	t49 = ((x197<=x198)<(x199%x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -22;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 173370;

	t50 = ((x201<=x202)<(x203%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = -1;
	int8_t x207 = 0;
	int32_t x208 = -1;
	static int32_t t51 = 10;

	t51 = ((x205<=x206)<(x207%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	int32_t x210 = 119587;
	uint64_t x211 = 8601428188094464LLU;
	int32_t x212 = -2;

	t52 = ((x209<=x210)<(x211%x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = -1;
	uint8_t x215 = 78U;
	static int64_t x216 = 125778199802534973LL;
	int32_t t53 = -36283872;

	t53 = ((x213<=x214)<(x215%x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 24083742;
	static int16_t x218 = INT16_MIN;
	uint8_t x219 = UINT8_MAX;
	volatile int16_t x220 = INT16_MIN;
	int32_t t54 = 2064616;

	t54 = ((x217<=x218)<(x219%x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 15U;
	int8_t x222 = INT8_MAX;
	volatile uint8_t x223 = 1U;
	int32_t t55 = -11284713;

	t55 = ((x221<=x222)<(x223%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MAX;
	static uint32_t x228 = 40463818U;
	int32_t t56 = -20398007;

	t56 = ((x225<=x226)<(x227%x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -3;
	uint16_t x230 = 225U;
	uint64_t x231 = 71842LLU;
	uint64_t x232 = UINT64_MAX;

	t57 = ((x229<=x230)<(x231%x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 1;
	static volatile int16_t x234 = -1;
	int8_t x235 = -1;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -62216;

	t58 = ((x233<=x234)<(x235%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = -1;
	uint32_t x238 = 400387751U;
	static int32_t x239 = 108936274;
	int16_t x240 = -3;

	t59 = ((x237<=x238)<(x239%x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MAX;
	int8_t x242 = INT8_MIN;
	static uint64_t x243 = 13LLU;
	int32_t t60 = -2175;

	t60 = ((x241<=x242)<(x243%x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	int32_t x247 = 783;
	int16_t x248 = INT16_MIN;

	t61 = ((x245<=x246)<(x247%x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = -1106;
	int32_t x251 = INT32_MAX;
	static int16_t x252 = INT16_MAX;
	int32_t t62 = -3935578;

	t62 = ((x249<=x250)<(x251%x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 330541229854215LLU;
	int32_t x254 = 1;
	int64_t x255 = -559294955762578LL;
	int32_t x256 = -1;

	t63 = ((x253<=x254)<(x255%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	static uint8_t x259 = 12U;
	int64_t x260 = INT64_MIN;
	int32_t t64 = 3;

	t64 = ((x257<=x258)<(x259%x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = -7;
	volatile int64_t x263 = INT64_MAX;
	volatile uint32_t x264 = 56U;
	int32_t t65 = 10;

	t65 = ((x261<=x262)<(x263%x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x265 = 12378;
	int8_t x267 = -1;
	volatile int8_t x268 = 16;
	int32_t t66 = 8821;

	t66 = ((x265<=x266)<(x267%x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 5692780661871231LLU;
	int16_t x271 = -1;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 47850558;

	t67 = ((x269<=x270)<(x271%x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static uint64_t x275 = 1LLU;
	volatile int32_t t68 = -6723;

	t68 = ((x273<=x274)<(x275%x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x278 = 35LLU;
	static int8_t x279 = INT8_MIN;
	static int8_t x280 = INT8_MIN;

	t69 = ((x277<=x278)<(x279%x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t t70 = 59699;

	t70 = ((x281<=x282)<(x283%x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x288 = INT8_MAX;
	int32_t t71 = 708993619;

	t71 = ((x285<=x286)<(x287%x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static uint32_t x291 = 222319935U;
	int32_t x292 = INT32_MIN;

	t72 = ((x289<=x290)<(x291%x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = 40483271272163459LLU;
	uint8_t x295 = UINT8_MAX;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 19;

	t73 = ((x293<=x294)<(x295%x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MIN;
	int64_t x299 = INT64_MAX;
	volatile int32_t x300 = INT32_MIN;
	int32_t t74 = 1315449;

	t74 = ((x297<=x298)<(x299%x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = 6721U;
	volatile int32_t t75 = 182914276;

	t75 = ((x301<=x302)<(x303%x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 10U;
	int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MAX;
	volatile int64_t x308 = INT64_MIN;
	static int32_t t76 = 0;

	t76 = ((x305<=x306)<(x307%x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = UINT32_MAX;
	int32_t x310 = -1;
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t77 = 12458;

	t77 = ((x309<=x310)<(x311%x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	static volatile int8_t x315 = INT8_MIN;
	uint32_t x316 = 109312501U;
	int32_t t78 = 1;

	t78 = ((x313<=x314)<(x315%x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 62U;
	int64_t x318 = -112895746318838LL;
	int64_t x319 = -50838437873LL;
	int8_t x320 = -1;
	volatile int32_t t79 = -22244;

	t79 = ((x317<=x318)<(x319%x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {


	t80 = ((x321<=x322)<(x323%x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static int64_t x326 = -1LL;
	uint16_t x327 = 4702U;
	int64_t x328 = INT64_MAX;
	volatile int32_t t81 = 615315770;

	t81 = ((x325<=x326)<(x327%x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -305923134;
	int16_t x330 = INT16_MIN;
	static int64_t x331 = INT64_MIN;
	volatile int32_t t82 = 67302593;

	t82 = ((x329<=x330)<(x331%x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = INT32_MAX;
	uint16_t x334 = UINT16_MAX;
	volatile int16_t x336 = -12;
	int32_t t83 = -1;

	t83 = ((x333<=x334)<(x335%x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 53U;
	static int64_t x338 = INT64_MIN;
	int16_t x339 = -1;
	volatile int16_t x340 = INT16_MIN;
	int32_t t84 = -125020;

	t84 = ((x337<=x338)<(x339%x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x341 = UINT16_MAX;
	static int16_t x343 = INT16_MIN;
	uint8_t x344 = 1U;
	int32_t t85 = -223754;

	t85 = ((x341<=x342)<(x343%x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x348 = INT64_MIN;
	int32_t t86 = -769040832;

	t86 = ((x345<=x346)<(x347%x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 71U;
	int32_t x352 = INT32_MAX;
	volatile int32_t t87 = 181298;

	t87 = ((x349<=x350)<(x351%x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = UINT64_MAX;
	static uint64_t x354 = 13286903300LLU;
	uint16_t x355 = UINT16_MAX;
	int8_t x356 = INT8_MAX;

	t88 = ((x353<=x354)<(x355%x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MAX;
	uint64_t x359 = 226187114569LLU;
	uint64_t x360 = 48197890367858LLU;
	static int32_t t89 = 20595788;

	t89 = ((x357<=x358)<(x359%x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = 31;
	int64_t x363 = INT64_MAX;
	static int64_t x364 = 6646996093LL;
	volatile int32_t t90 = -4;

	t90 = ((x361<=x362)<(x363%x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	uint8_t x366 = 36U;
	static int32_t t91 = 1;

	t91 = ((x365<=x366)<(x367%x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 110U;
	int8_t x370 = -12;
	static int16_t x371 = INT16_MIN;
	static int8_t x372 = INT8_MIN;
	static volatile int32_t t92 = 1203;

	t92 = ((x369<=x370)<(x371%x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	int16_t x374 = 3;
	volatile int64_t x375 = INT64_MIN;
	uint16_t x376 = 23925U;
	int32_t t93 = -1880;

	t93 = ((x373<=x374)<(x375%x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -3229;
	static uint16_t x378 = UINT16_MAX;
	uint64_t x379 = 1596723907017458LLU;
	int8_t x380 = INT8_MIN;

	t94 = ((x377<=x378)<(x379%x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint16_t x382 = 18964U;
	uint64_t x383 = 6542035626074LLU;
	int64_t x384 = -1LL;
	int32_t t95 = 3973;

	t95 = ((x381<=x382)<(x383%x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	volatile uint32_t x386 = 39609U;
	static int32_t x387 = INT32_MIN;
	int8_t x388 = -1;
	volatile int32_t t96 = 908;

	t96 = ((x385<=x386)<(x387%x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x390 = 15U;
	int64_t x391 = 83035403LL;
	uint64_t x392 = UINT64_MAX;

	t97 = ((x389<=x390)<(x391%x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = INT8_MIN;
	volatile int64_t x395 = INT64_MIN;
	uint32_t x396 = UINT32_MAX;
	int32_t t98 = 9;

	t98 = ((x393<=x394)<(x395%x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 32LLU;
	volatile int32_t x398 = INT32_MAX;
	int64_t x399 = -1LL;
	int16_t x400 = INT16_MIN;
	int32_t t99 = 2792528;

	t99 = ((x397<=x398)<(x399%x400));

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

