#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -5;
volatile uint8_t x8 = 0U;
uint8_t x25 = 4U;
int16_t x26 = INT16_MIN;
volatile int32_t t5 = 421;
int8_t x37 = INT8_MAX;
static int8_t x40 = -1;
int32_t t8 = -243;
uint32_t x41 = 74039U;
int16_t x42 = INT16_MIN;
uint64_t x45 = UINT64_MAX;
static volatile int32_t t10 = 3;
int8_t x50 = -1;
uint16_t x56 = 6U;
static volatile int32_t x57 = INT32_MIN;
uint8_t x62 = UINT8_MAX;
uint8_t x66 = UINT8_MAX;
volatile int32_t x68 = INT32_MIN;
int32_t x71 = 1;
int64_t x86 = 135009060464LL;
volatile int8_t x97 = INT8_MAX;
int64_t x100 = INT64_MIN;
volatile int32_t t21 = -510;
int8_t x107 = INT8_MAX;
uint16_t x117 = 2506U;
int32_t x120 = -1;
static int8_t x123 = INT8_MIN;
volatile int16_t x124 = -60;
int32_t t26 = 0;
volatile int32_t t27 = 126266;
uint8_t x137 = 1U;
int64_t x144 = -197543LL;
int32_t x146 = -123;
int32_t x147 = INT32_MAX;
int8_t x148 = -1;
uint64_t x153 = 26LLU;
static int32_t x161 = -1;
int8_t x168 = -1;
uint64_t x179 = 81877303910029LLU;
volatile int32_t t38 = 33642;
int16_t x183 = INT16_MAX;
int32_t t39 = 29057;
static int32_t t42 = 117939;
int32_t t43 = 291;
volatile int16_t x205 = -1;
volatile int32_t x215 = INT32_MAX;
int64_t x217 = INT64_MIN;
int64_t x224 = -1LL;
int8_t x236 = -1;
volatile int32_t t52 = -2;
uint16_t x239 = 193U;
uint8_t x240 = 35U;
volatile int32_t t53 = 35509;
int64_t x251 = 42787317LL;
int32_t t57 = 112943245;
int8_t x257 = 24;
static volatile int16_t x259 = 7401;
uint64_t x260 = UINT64_MAX;
static uint8_t x266 = 15U;
int8_t x277 = -22;
int8_t x279 = -1;
static int64_t x283 = 8265366334221856LL;
int16_t x284 = INT16_MIN;
static volatile int64_t x285 = -1LL;
int64_t x286 = 357866860LL;
int8_t x290 = INT8_MIN;
static int16_t x294 = -1;
volatile uint8_t x297 = UINT8_MAX;
int16_t x300 = -475;
static int32_t x303 = INT32_MIN;
volatile int32_t t68 = 25558;
volatile int64_t x308 = -1LL;
volatile int32_t t69 = 69;
int32_t x310 = 533526620;
volatile int8_t x311 = INT8_MIN;
int64_t x314 = INT64_MAX;
uint16_t x326 = 6U;
int8_t x327 = INT8_MAX;
volatile int32_t t73 = -1;
int32_t x336 = INT32_MIN;
volatile int32_t x342 = -5838;
volatile uint32_t x343 = UINT32_MAX;
static int64_t x344 = INT64_MIN;
uint64_t x353 = 213004015023LLU;
int64_t x356 = INT64_MIN;
static int8_t x363 = 1;
volatile int8_t x374 = INT8_MIN;
uint32_t x378 = 1467324U;
uint64_t x382 = 1LLU;
volatile int32_t t84 = 14034856;
int16_t x389 = 2;
static uint64_t x399 = UINT64_MAX;
uint64_t x400 = 136373LLU;
int64_t x412 = INT64_MIN;
static volatile int32_t x414 = INT32_MAX;
static uint64_t x415 = 943LLU;
volatile int16_t x423 = INT16_MIN;
uint64_t x427 = 18741490808890LLU;
uint32_t x429 = 152U;
int64_t x433 = -9LL;
volatile uint64_t x437 = 26219884236991LLU;
volatile uint8_t x438 = 3U;
static int32_t t98 = 0;
static volatile uint8_t x444 = 3U;


void f0(void) {
	int64_t x1 = 822LL;
	static int8_t x2 = 2;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = -1;

	t0 = ((x1+x2)<=(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = -29421291;
	volatile int32_t t1 = 17021333;

	t1 = ((x5+x6)<=(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = INT8_MAX;
	int64_t x11 = INT64_MIN;
	static int16_t x12 = INT16_MIN;
	static int32_t t2 = -898742090;

	t2 = ((x9+x10)<=(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 12796U;
	int64_t x14 = -1LL;
	static int8_t x15 = INT8_MIN;
	static int16_t x16 = -1;
	volatile int32_t t3 = 1;

	t3 = ((x13+x14)<=(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = UINT32_MAX;
	int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t4 = -432;

	t4 = ((x21+x22)<=(x23<=x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MAX;

	t5 = ((x25+x26)<=(x27<=x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 0U;
	static int16_t x30 = -3;
	int64_t x31 = INT64_MIN;
	int8_t x32 = -1;
	int32_t t6 = -104293643;

	t6 = ((x29+x30)<=(x31<=x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 1233588697242LL;
	uint16_t x34 = 1446U;
	uint16_t x35 = UINT16_MAX;
	int32_t x36 = INT32_MAX;
	volatile int32_t t7 = -517032;

	t7 = ((x33+x34)<=(x35<=x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = 5184;
	int8_t x39 = INT8_MIN;

	t8 = ((x37+x38)<=(x39<=x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x43 = INT64_MIN;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t9 = 663;

	t9 = ((x41+x42)<=(x43<=x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = -16;
	int64_t x48 = 6928LL;

	t10 = ((x45+x46)<=(x47<=x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = 3U;
	uint8_t x51 = 11U;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 0;

	t11 = ((x49+x50)<=(x51<=x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -1;
	uint16_t x54 = UINT16_MAX;
	int32_t x55 = INT32_MAX;
	volatile int32_t t12 = 127047768;

	t12 = ((x53+x54)<=(x55<=x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = 1368U;
	uint16_t x59 = 18U;
	static volatile int16_t x60 = INT16_MIN;
	static int32_t t13 = -98;

	t13 = ((x57+x58)<=(x59<=x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	static int8_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	int32_t t14 = -691774683;

	t14 = ((x61+x62)<=(x63<=x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	static int16_t x67 = INT16_MIN;
	volatile int32_t t15 = -26;

	t15 = ((x65+x66)<=(x67<=x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	static volatile int8_t x70 = INT8_MIN;
	volatile uint32_t x72 = 673087418U;
	volatile int32_t t16 = -1982;

	t16 = ((x69+x70)<=(x71<=x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = 2U;
	volatile int8_t x74 = 0;
	int16_t x75 = 6;
	static int64_t x76 = -1LL;
	static int32_t t17 = -439;

	t17 = ((x73+x74)<=(x75<=x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 4U;
	static int32_t x78 = -1;
	uint8_t x79 = 4U;
	uint16_t x80 = 1903U;
	static volatile int32_t t18 = 598092799;

	t18 = ((x77+x78)<=(x79<=x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	static int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t19 = 15178;

	t19 = ((x85+x86)<=(x87<=x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = INT32_MIN;
	static uint64_t x94 = UINT64_MAX;
	volatile int64_t x95 = -9884752369LL;
	volatile uint8_t x96 = 1U;
	static int32_t t20 = -134653;

	t20 = ((x93+x94)<=(x95<=x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x98 = UINT16_MAX;
	volatile int8_t x99 = INT8_MAX;

	t21 = ((x97+x98)<=(x99<=x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = 15;
	static int64_t x106 = 108LL;
	static int32_t x108 = -1;
	int32_t t22 = -1;

	t22 = ((x105+x106)<=(x107<=x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x109 = 12779U;
	uint32_t x110 = UINT32_MAX;
	static int16_t x111 = 2;
	int16_t x112 = INT16_MIN;
	volatile int32_t t23 = 16567624;

	t23 = ((x109+x110)<=(x111<=x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x118 = 5751995491LLU;
	static int16_t x119 = INT16_MIN;
	volatile int32_t t24 = 39;

	t24 = ((x117+x118)<=(x119<=x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = 2675009219550LL;
	static int32_t x122 = -1;
	volatile int32_t t25 = -375;

	t25 = ((x121+x122)<=(x123<=x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x125 = -1;
	uint64_t x126 = 9LLU;
	volatile uint16_t x127 = UINT16_MAX;
	int16_t x128 = 1718;

	t26 = ((x125+x126)<=(x127<=x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	uint64_t x130 = 17087240954583662LLU;
	int32_t x131 = -3;
	int32_t x132 = INT32_MAX;

	t27 = ((x129+x130)<=(x131<=x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x138 = INT32_MIN;
	volatile int32_t x139 = 16636057;
	volatile int8_t x140 = 5;
	int32_t t28 = 317;

	t28 = ((x137+x138)<=(x139<=x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 14U;
	static uint16_t x142 = 1U;
	uint8_t x143 = 13U;
	static int32_t t29 = -6956;

	t29 = ((x141+x142)<=(x143<=x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = 1U;
	static int32_t t30 = 103023727;

	t30 = ((x145+x146)<=(x147<=x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = UINT16_MAX;
	uint16_t x150 = 1974U;
	uint16_t x151 = 0U;
	int32_t x152 = INT32_MAX;
	int32_t t31 = 1;

	t31 = ((x149+x150)<=(x151<=x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x154 = 30711892;
	int64_t x155 = -145245889405101761LL;
	int16_t x156 = -2414;
	static volatile int32_t t32 = -4280677;

	t32 = ((x153+x154)<=(x155<=x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x157 = INT8_MAX;
	int32_t x158 = INT32_MIN;
	volatile uint64_t x159 = 2958280346LLU;
	uint8_t x160 = 3U;
	int32_t t33 = -25043;

	t33 = ((x157+x158)<=(x159<=x160));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x162 = 5100;
	static uint16_t x163 = UINT16_MAX;
	volatile uint16_t x164 = 78U;
	int32_t t34 = 737203511;

	t34 = ((x161+x162)<=(x163<=x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x165 = 38803U;
	volatile int16_t x166 = 1537;
	uint32_t x167 = UINT32_MAX;
	int32_t t35 = 31;

	t35 = ((x165+x166)<=(x167<=x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = -654069LL;
	int8_t x170 = INT8_MIN;
	volatile uint32_t x171 = 3U;
	uint32_t x172 = 35965U;
	int32_t t36 = -1;

	t36 = ((x169+x170)<=(x171<=x172));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MIN;
	uint8_t x174 = UINT8_MAX;
	uint32_t x175 = 3307U;
	volatile int32_t x176 = -1;
	volatile int32_t t37 = -2156;

	t37 = ((x173+x174)<=(x175<=x176));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x177 = INT8_MIN;
	uint8_t x178 = 21U;
	uint64_t x180 = UINT64_MAX;

	t38 = ((x177+x178)<=(x179<=x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x181 = INT64_MAX;
	static int32_t x182 = -1;
	volatile uint32_t x184 = UINT32_MAX;

	t39 = ((x181+x182)<=(x183<=x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x185 = UINT8_MAX;
	int64_t x186 = 1LL;
	uint32_t x187 = UINT32_MAX;
	volatile int64_t x188 = INT64_MAX;
	int32_t t40 = -19050;

	t40 = ((x185+x186)<=(x187<=x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x189 = 23;
	int32_t x190 = -947787799;
	int8_t x191 = 1;
	uint64_t x192 = 240LLU;
	volatile int32_t t41 = 214;

	t41 = ((x189+x190)<=(x191<=x192));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = 2;
	int64_t x194 = 5584LL;
	static int32_t x195 = INT32_MIN;
	static volatile int16_t x196 = -1;

	t42 = ((x193+x194)<=(x195<=x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x198 = 0U;
	int64_t x199 = -1LL;
	int16_t x200 = INT16_MIN;

	t43 = ((x197+x198)<=(x199<=x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x201 = INT16_MIN;
	volatile int16_t x202 = INT16_MAX;
	int32_t x203 = 381630124;
	int8_t x204 = 39;
	volatile int32_t t44 = 538106;

	t44 = ((x201+x202)<=(x203<=x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x206 = 4U;
	volatile int8_t x207 = 1;
	uint64_t x208 = 0LLU;
	volatile int32_t t45 = 383366448;

	t45 = ((x205+x206)<=(x207<=x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = 556818LLU;
	int8_t x210 = -1;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = -183363855;
	volatile int32_t t46 = -536;

	t46 = ((x209+x210)<=(x211<=x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MIN;
	static uint32_t x214 = UINT32_MAX;
	uint32_t x216 = 240144U;
	volatile int32_t t47 = -257500;

	t47 = ((x213+x214)<=(x215<=x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x218 = UINT16_MAX;
	uint64_t x219 = 58946130260265LLU;
	volatile int64_t x220 = INT64_MIN;
	int32_t t48 = -8505402;

	t48 = ((x217+x218)<=(x219<=x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x221 = 0U;
	int64_t x222 = INT64_MIN;
	volatile int16_t x223 = -2;
	int32_t t49 = 94;

	t49 = ((x221+x222)<=(x223<=x224));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x225 = 13LLU;
	int8_t x226 = 11;
	volatile int32_t x227 = -114507;
	int8_t x228 = 10;
	volatile int32_t t50 = -2;

	t50 = ((x225+x226)<=(x227<=x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = -6;
	int16_t x230 = INT16_MAX;
	uint32_t x231 = 4039U;
	int64_t x232 = INT64_MAX;
	int32_t t51 = 5076935;

	t51 = ((x229+x230)<=(x231<=x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MAX;
	static uint32_t x234 = 35U;
	static volatile int32_t x235 = INT32_MAX;

	t52 = ((x233+x234)<=(x235<=x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = -1LL;
	uint64_t x238 = 3698240LLU;

	t53 = ((x237+x238)<=(x239<=x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = 8;
	volatile int32_t x242 = -14;
	int64_t x243 = INT64_MAX;
	uint16_t x244 = 1U;
	int32_t t54 = -8157;

	t54 = ((x241+x242)<=(x243<=x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = -1;
	int64_t x246 = 3649967573500878LL;
	volatile uint8_t x247 = 9U;
	int64_t x248 = INT64_MAX;
	int32_t t55 = -901301935;

	t55 = ((x245+x246)<=(x247<=x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	uint8_t x252 = UINT8_MAX;
	int32_t t56 = -7;

	t56 = ((x249+x250)<=(x251<=x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = 3007LL;
	volatile int64_t x254 = INT64_MIN;
	int32_t x255 = 418;
	static int32_t x256 = INT32_MAX;

	t57 = ((x253+x254)<=(x255<=x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x258 = INT32_MIN;
	int32_t t58 = -1;

	t58 = ((x257+x258)<=(x259<=x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = INT64_MAX;
	volatile uint64_t x262 = 17635LLU;
	int16_t x263 = -1;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t59 = 12558;

	t59 = ((x261+x262)<=(x263<=x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = -1;
	int16_t x267 = -12;
	int64_t x268 = -1LL;
	int32_t t60 = -232189614;

	t60 = ((x265+x266)<=(x267<=x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x273 = -15769;
	int8_t x274 = -14;
	int32_t x275 = 3;
	int16_t x276 = INT16_MIN;
	volatile int32_t t61 = 155334867;

	t61 = ((x273+x274)<=(x275<=x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x278 = 1U;
	int8_t x280 = -1;
	static volatile int32_t t62 = 14529935;

	t62 = ((x277+x278)<=(x279<=x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 0U;
	uint32_t x282 = 36U;
	static volatile int32_t t63 = 3;

	t63 = ((x281+x282)<=(x283<=x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x287 = UINT16_MAX;
	int32_t x288 = INT32_MIN;
	volatile int32_t t64 = 0;

	t64 = ((x285+x286)<=(x287<=x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x289 = -111205520;
	static uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MIN;
	int32_t t65 = 1;

	t65 = ((x289+x290)<=(x291<=x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x293 = 5679822U;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = 100U;
	static volatile int32_t t66 = 1;

	t66 = ((x293+x294)<=(x295<=x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x298 = 9241660714920LLU;
	volatile int64_t x299 = -3075534715592773793LL;
	static int32_t t67 = 4473;

	t67 = ((x297+x298)<=(x299<=x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = -791155136;
	int16_t x302 = -1;
	uint16_t x304 = 2934U;

	t68 = ((x301+x302)<=(x303<=x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MAX;
	volatile int16_t x306 = -1;
	int32_t x307 = -1;

	t69 = ((x305+x306)<=(x307<=x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x309 = -1;
	static int16_t x312 = INT16_MIN;
	int32_t t70 = 41133633;

	t70 = ((x309+x310)<=(x311<=x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x313 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t71 = 233089245;

	t71 = ((x313+x314)<=(x315<=x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = -1LL;
	int16_t x322 = -10046;
	static int8_t x323 = 1;
	int16_t x324 = 488;
	int32_t t72 = -947;

	t72 = ((x321+x322)<=(x323<=x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = INT8_MIN;
	static int32_t x328 = -1;

	t73 = ((x325+x326)<=(x327<=x328));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x329 = -10LL;
	volatile int64_t x330 = 3691LL;
	volatile int16_t x331 = INT16_MAX;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t74 = -1805;

	t74 = ((x329+x330)<=(x331<=x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = 937;
	volatile int16_t x334 = 56;
	static int16_t x335 = INT16_MIN;
	volatile int32_t t75 = 301670;

	t75 = ((x333+x334)<=(x335<=x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = 121842523757LLU;
	int32_t x338 = -1;
	int8_t x339 = -1;
	static uint32_t x340 = UINT32_MAX;
	int32_t t76 = 66010013;

	t76 = ((x337+x338)<=(x339<=x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = INT16_MIN;
	volatile int32_t t77 = -1042803126;

	t77 = ((x341+x342)<=(x343<=x344));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = 55U;
	uint8_t x346 = 0U;
	int32_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	volatile int32_t t78 = -21;

	t78 = ((x345+x346)<=(x347<=x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x350 = 11;
	int16_t x351 = -1;
	uint64_t x352 = 801337717646889455LLU;
	volatile int32_t t79 = -173;

	t79 = ((x349+x350)<=(x351<=x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x354 = 942438985287LLU;
	int16_t x355 = -1;
	int32_t t80 = -5442;

	t80 = ((x353+x354)<=(x355<=x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = 1U;
	int32_t x362 = INT32_MAX;
	uint64_t x364 = 746557LLU;
	static int32_t t81 = -4789034;

	t81 = ((x361+x362)<=(x363<=x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x373 = -1;
	uint16_t x375 = 171U;
	int64_t x376 = INT64_MIN;
	int32_t t82 = 54;

	t82 = ((x373+x374)<=(x375<=x376));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x379 = 7276U;
	uint32_t x380 = 31U;
	static int32_t t83 = -277029;

	t83 = ((x377+x378)<=(x379<=x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = 7;
	volatile uint16_t x383 = 2U;
	int64_t x384 = INT64_MIN;

	t84 = ((x381+x382)<=(x383<=x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = INT8_MIN;
	volatile int8_t x386 = INT8_MIN;
	int16_t x387 = 5665;
	uint64_t x388 = 114267879914598018LLU;
	int32_t t85 = -14859;

	t85 = ((x385+x386)<=(x387<=x388));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x390 = -1;
	volatile int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;
	static int32_t t86 = -279293195;

	t86 = ((x389+x390)<=(x391<=x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x393 = -64144333LL;
	int64_t x394 = INT64_MAX;
	static int16_t x395 = INT16_MAX;
	volatile int16_t x396 = INT16_MIN;
	static int32_t t87 = -306502;

	t87 = ((x393+x394)<=(x395<=x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x397 = INT32_MAX;
	uint64_t x398 = 822LLU;
	volatile int32_t t88 = 3991;

	t88 = ((x397+x398)<=(x399<=x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = 11984;
	int32_t x402 = -1;
	static volatile int32_t x403 = INT32_MAX;
	int16_t x404 = -1;
	int32_t t89 = 0;

	t89 = ((x401+x402)<=(x403<=x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x405 = INT64_MAX;
	int32_t x406 = -47415677;
	volatile uint64_t x407 = UINT64_MAX;
	int32_t x408 = 130646;
	static int32_t t90 = 254;

	t90 = ((x405+x406)<=(x407<=x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = INT32_MIN;
	uint32_t x410 = 125811440U;
	int64_t x411 = -59073204154LL;
	int32_t t91 = -10528091;

	t91 = ((x409+x410)<=(x411<=x412));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = -1;
	uint64_t x416 = 6104LLU;
	int32_t t92 = 68215689;

	t92 = ((x413+x414)<=(x415<=x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = 60U;
	int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MAX;
	int32_t x420 = INT32_MAX;
	int32_t t93 = -59726;

	t93 = ((x417+x418)<=(x419<=x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x421 = INT8_MIN;
	volatile int64_t x422 = INT64_MAX;
	int8_t x424 = 0;
	int32_t t94 = 91;

	t94 = ((x421+x422)<=(x423<=x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x425 = -5;
	uint32_t x426 = 690U;
	int32_t x428 = INT32_MIN;
	volatile int32_t t95 = 65068;

	t95 = ((x425+x426)<=(x427<=x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x430 = 1039772500;
	static int8_t x431 = -61;
	int16_t x432 = -2;
	static int32_t t96 = -491475;

	t96 = ((x429+x430)<=(x431<=x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x434 = -1LL;
	int64_t x435 = -1LL;
	int64_t x436 = -4236725780203LL;
	volatile int32_t t97 = 652196866;

	t97 = ((x433+x434)<=(x435<=x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x439 = INT32_MIN;
	static int64_t x440 = INT64_MIN;

	t98 = ((x437+x438)<=(x439<=x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = 18U;
	int16_t x442 = -1;
	volatile int64_t x443 = -1LL;
	int32_t t99 = -1061;

	t99 = ((x441+x442)<=(x443<=x444));

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

