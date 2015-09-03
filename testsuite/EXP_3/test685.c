#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = 15940532LL;
int32_t t0 = -312;
static volatile uint32_t x9 = UINT32_MAX;
int32_t t1 = -12381212;
uint8_t x16 = 16U;
static uint16_t x18 = 17675U;
int64_t x20 = 915566775104LL;
int32_t t3 = 121356;
int32_t x21 = INT32_MIN;
int64_t x23 = 94LL;
uint16_t x33 = 334U;
static int32_t x34 = INT32_MIN;
static uint16_t x41 = 9245U;
int32_t x43 = 3;
static int32_t x46 = INT32_MAX;
int64_t x50 = -416086414332816783LL;
int32_t x54 = -9061881;
int8_t x55 = 20;
volatile int32_t t11 = 0;
int16_t x85 = INT16_MIN;
int64_t x87 = INT64_MIN;
static int32_t t14 = 459;
uint16_t x94 = UINT16_MAX;
int16_t x96 = INT16_MIN;
int32_t t15 = -11219696;
uint8_t x101 = 3U;
int8_t x106 = -1;
uint8_t x121 = 15U;
int32_t x122 = INT32_MIN;
int32_t x136 = -75516763;
int8_t x144 = -1;
volatile uint64_t x151 = 2208757930982952LLU;
int16_t x158 = INT16_MIN;
int32_t x160 = -7;
int8_t x162 = -4;
int16_t x167 = -4256;
uint8_t x173 = 11U;
volatile int16_t x174 = 12072;
static volatile int32_t x183 = INT32_MAX;
uint32_t x187 = 267701277U;
int32_t t37 = 99;
int16_t x197 = INT16_MAX;
uint16_t x201 = 12126U;
int16_t x202 = INT16_MAX;
static int32_t t39 = -107225;
uint32_t x207 = 5U;
uint64_t x208 = 347967442522487LLU;
volatile int32_t t41 = -2485;
static volatile int64_t x217 = 24944LL;
int32_t x227 = -180;
volatile uint16_t x228 = UINT16_MAX;
volatile int32_t t45 = 43623850;
volatile int32_t x243 = -64228;
volatile int32_t t48 = -6598039;
int32_t x255 = -4320;
int16_t x257 = INT16_MIN;
volatile int32_t t53 = -702227907;
uint32_t x272 = 847U;
volatile int32_t t58 = 158151717;
int64_t x290 = INT64_MIN;
int8_t x292 = INT8_MIN;
volatile int32_t x295 = 11;
volatile uint16_t x310 = 23469U;
int16_t x316 = -884;
int32_t t65 = -674557;
static volatile int32_t t66 = -9;
uint32_t x321 = 117U;
volatile int32_t t68 = -254;
uint32_t x329 = 17151135U;
int8_t x333 = -1;
int32_t t71 = -749163444;
uint8_t x345 = UINT8_MAX;
int64_t x347 = INT64_MAX;
static volatile int32_t t72 = -34556;
int32_t t73 = 639884;
int16_t x362 = 0;
static volatile int32_t t74 = -71;
int64_t x366 = -1LL;
static int32_t x373 = 791;
uint16_t x374 = 31370U;
int32_t t78 = -504931;
uint64_t x391 = 4956662213934722LLU;
static uint32_t x392 = UINT32_MAX;
int16_t x395 = -1;
int32_t x403 = INT32_MIN;
volatile int64_t x404 = INT64_MIN;
int64_t x409 = -1LL;
static int16_t x410 = INT16_MIN;
int16_t x432 = INT16_MIN;
int32_t t90 = -112883484;
volatile int8_t x433 = INT8_MIN;
int64_t x439 = INT64_MIN;
uint16_t x441 = UINT16_MAX;
uint32_t x452 = 46910U;
static int32_t x455 = INT32_MAX;
static int8_t x466 = -1;
int16_t x473 = INT16_MIN;
int8_t x476 = INT8_MAX;
int32_t t99 = -433103;


void f0(void) {
	uint8_t x6 = UINT8_MAX;
	uint8_t x7 = 3U;
	volatile int64_t x8 = -1LL;

	t0 = ((x5+x6)<(x7%x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	volatile int32_t x12 = INT32_MIN;

	t1 = ((x9+x10)<(x11%x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	uint32_t x15 = 372306948U;
	volatile int32_t t2 = -30;

	t2 = ((x13+x14)<(x15%x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 13U;
	int64_t x19 = -335028118LL;

	t3 = ((x17+x18)<(x19%x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x22 = UINT32_MAX;
	static uint16_t x24 = UINT16_MAX;
	int32_t t4 = -1642135;

	t4 = ((x21+x22)<(x23%x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x35 = 1;
	static uint8_t x36 = 29U;
	volatile int32_t t5 = 4167;

	t5 = ((x33+x34)<(x35%x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x37 = 129066280U;
	static int32_t x38 = INT32_MIN;
	volatile uint8_t x39 = 0U;
	static int64_t x40 = -58113LL;
	static volatile int32_t t6 = 1328;

	t6 = ((x37+x38)<(x39%x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x42 = INT64_MIN;
	int16_t x44 = INT16_MIN;
	static int32_t t7 = 109178;

	t7 = ((x41+x42)<(x43%x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -32950620;
	int32_t x47 = 2;
	int8_t x48 = 1;
	volatile int32_t t8 = 260755;

	t8 = ((x45+x46)<(x47%x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x49 = INT16_MAX;
	int32_t x51 = INT32_MAX;
	uint8_t x52 = UINT8_MAX;
	int32_t t9 = -12;

	t9 = ((x49+x50)<(x51%x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x53 = UINT32_MAX;
	static int8_t x56 = INT8_MAX;
	static volatile int32_t t10 = 13905730;

	t10 = ((x53+x54)<(x55%x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MAX;
	static int64_t x74 = -1LL;
	volatile int64_t x75 = 1LL;
	int32_t x76 = 355;

	t11 = ((x73+x74)<(x75%x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = 399631LLU;
	int8_t x78 = 14;
	int64_t x79 = 4028693040191LL;
	uint32_t x80 = 56U;
	int32_t t12 = 7056;

	t12 = ((x77+x78)<(x79%x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x86 = 10251U;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t13 = -7050;

	t13 = ((x85+x86)<(x87%x88));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x89 = -17213489353517278LL;
	int8_t x90 = INT8_MIN;
	static uint16_t x91 = UINT16_MAX;
	volatile int16_t x92 = INT16_MIN;

	t14 = ((x89+x90)<(x91%x92));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x93 = UINT8_MAX;
	uint32_t x95 = 2814571U;

	t15 = ((x93+x94)<(x95%x96));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x102 = INT64_MIN;
	static int32_t x103 = INT32_MIN;
	static volatile uint64_t x104 = 10496725902LLU;
	volatile int32_t t16 = -1176;

	t16 = ((x101+x102)<(x103%x104));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x105 = INT32_MAX;
	uint32_t x107 = 23034U;
	int64_t x108 = -1LL;
	volatile int32_t t17 = -117700549;

	t17 = ((x105+x106)<(x107%x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = 728U;
	int8_t x110 = 1;
	int32_t x111 = 0;
	int32_t x112 = INT32_MIN;
	volatile int32_t t18 = 2;

	t18 = ((x109+x110)<(x111%x112));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = 1;
	uint32_t x114 = 1U;
	uint8_t x115 = 23U;
	static int16_t x116 = INT16_MAX;
	static int32_t t19 = 3;

	t19 = ((x113+x114)<(x115%x116));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = UINT32_MAX;
	volatile uint8_t x118 = 1U;
	int32_t x119 = 299;
	int8_t x120 = INT8_MIN;
	int32_t t20 = 601;

	t20 = ((x117+x118)<(x119%x120));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x123 = INT16_MIN;
	static uint8_t x124 = 5U;
	volatile int32_t t21 = 593364;

	t21 = ((x121+x122)<(x123%x124));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = -13251;
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = 626014792U;
	static uint8_t x128 = 11U;
	volatile int32_t t22 = -1;

	t22 = ((x125+x126)<(x127%x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = -7;
	int64_t x130 = INT64_MAX;
	volatile int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MAX;
	volatile int32_t t23 = -2795694;

	t23 = ((x129+x130)<(x131%x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x133 = 85U;
	static volatile uint32_t x134 = 1012U;
	int16_t x135 = INT16_MIN;
	volatile int32_t t24 = 0;

	t24 = ((x133+x134)<(x135%x136));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = INT32_MIN;
	int32_t x138 = 663117;
	static int32_t x139 = INT32_MAX;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t25 = -61341465;

	t25 = ((x137+x138)<(x139%x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x141 = 766235977445LL;
	int64_t x142 = -33313093LL;
	volatile int16_t x143 = -1;
	int32_t t26 = 790953273;

	t26 = ((x141+x142)<(x143%x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x145 = UINT16_MAX;
	static uint8_t x146 = 0U;
	static uint16_t x147 = 8U;
	uint64_t x148 = 4499438483050LLU;
	int32_t t27 = -27;

	t27 = ((x145+x146)<(x147%x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = INT8_MAX;
	volatile int16_t x150 = -1;
	uint32_t x152 = UINT32_MAX;
	static int32_t t28 = 112156872;

	t28 = ((x149+x150)<(x151%x152));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = 177U;
	volatile int32_t x159 = INT32_MIN;
	static int32_t t29 = -29160948;

	t29 = ((x157+x158)<(x159%x160));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = -1LL;
	static int32_t x163 = -1;
	int8_t x164 = INT8_MIN;
	int32_t t30 = -582;

	t30 = ((x161+x162)<(x163%x164));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = INT32_MIN;
	static int16_t x166 = INT16_MAX;
	uint32_t x168 = 11752U;
	int32_t t31 = 379785;

	t31 = ((x165+x166)<(x167%x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x175 = INT64_MIN;
	static int8_t x176 = INT8_MAX;
	int32_t t32 = 14678378;

	t32 = ((x173+x174)<(x175%x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x177 = INT64_MAX;
	int8_t x178 = INT8_MIN;
	int16_t x179 = 16298;
	int16_t x180 = -1;
	volatile int32_t t33 = 53667274;

	t33 = ((x177+x178)<(x179%x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x181 = 12U;
	static int32_t x182 = INT32_MIN;
	static int8_t x184 = INT8_MAX;
	volatile int32_t t34 = 75897309;

	t34 = ((x181+x182)<(x183%x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x185 = INT64_MAX;
	volatile int64_t x186 = -19263576LL;
	static int32_t x188 = 12323;
	static volatile int32_t t35 = 2942145;

	t35 = ((x185+x186)<(x187%x188));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x189 = -668;
	int8_t x190 = INT8_MIN;
	uint8_t x191 = UINT8_MAX;
	int8_t x192 = -9;
	int32_t t36 = 49;

	t36 = ((x189+x190)<(x191%x192));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x193 = INT32_MIN;
	volatile int32_t x194 = INT32_MAX;
	int32_t x195 = 50824611;
	uint64_t x196 = 1016764024LLU;

	t37 = ((x193+x194)<(x195%x196));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x198 = INT16_MAX;
	static volatile uint32_t x199 = 534241124U;
	volatile uint8_t x200 = 5U;
	int32_t t38 = 164207;

	t38 = ((x197+x198)<(x199%x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x203 = 29U;
	static int32_t x204 = -1;

	t39 = ((x201+x202)<(x203%x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = 60LL;
	static uint16_t x206 = UINT16_MAX;
	int32_t t40 = 9;

	t40 = ((x205+x206)<(x207%x208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x209 = INT16_MIN;
	volatile uint64_t x210 = 187743642596416LLU;
	int8_t x211 = INT8_MAX;
	int16_t x212 = INT16_MAX;

	t41 = ((x209+x210)<(x211%x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x213 = UINT64_MAX;
	static uint16_t x214 = UINT16_MAX;
	uint16_t x215 = 1U;
	int8_t x216 = INT8_MAX;
	volatile int32_t t42 = -33770450;

	t42 = ((x213+x214)<(x215%x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x218 = INT8_MIN;
	int32_t x219 = -81155355;
	int16_t x220 = INT16_MAX;
	volatile int32_t t43 = -52928946;

	t43 = ((x217+x218)<(x219%x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x221 = 20645U;
	static int16_t x222 = -1;
	int32_t x223 = -1;
	int8_t x224 = -1;
	int32_t t44 = -3815035;

	t44 = ((x221+x222)<(x223%x224));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x225 = UINT8_MAX;
	uint16_t x226 = UINT16_MAX;

	t45 = ((x225+x226)<(x227%x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x229 = INT16_MIN;
	int8_t x230 = -1;
	uint32_t x231 = 33471664U;
	static volatile uint8_t x232 = 2U;
	volatile int32_t t46 = 1769601;

	t46 = ((x229+x230)<(x231%x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x237 = 2U;
	volatile uint32_t x238 = UINT32_MAX;
	int64_t x239 = INT64_MAX;
	int8_t x240 = -4;
	int32_t t47 = 39;

	t47 = ((x237+x238)<(x239%x240));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = INT64_MIN;
	uint64_t x242 = 991486LLU;
	static int32_t x244 = 5177;

	t48 = ((x241+x242)<(x243%x244));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MIN;
	static uint8_t x247 = 0U;
	int16_t x248 = INT16_MAX;
	volatile int32_t t49 = 80105;

	t49 = ((x245+x246)<(x247%x248));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x249 = INT8_MAX;
	int16_t x250 = INT16_MIN;
	uint16_t x251 = UINT16_MAX;
	uint64_t x252 = UINT64_MAX;
	int32_t t50 = -345843233;

	t50 = ((x249+x250)<(x251%x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x253 = 105677U;
	int8_t x254 = 1;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t51 = -3;

	t51 = ((x253+x254)<(x255%x256));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x258 = 6U;
	static uint8_t x259 = 10U;
	int8_t x260 = INT8_MAX;
	int32_t t52 = 22136926;

	t52 = ((x257+x258)<(x259%x260));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = INT64_MAX;
	int8_t x262 = -1;
	static uint64_t x263 = 85633915460182LLU;
	int32_t x264 = INT32_MIN;

	t53 = ((x261+x262)<(x263%x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x265 = INT32_MAX;
	volatile int16_t x266 = INT16_MIN;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = INT8_MAX;
	volatile int32_t t54 = 340560;

	t54 = ((x265+x266)<(x267%x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = INT16_MIN;
	static int8_t x270 = 31;
	int8_t x271 = -1;
	static volatile int32_t t55 = 689276252;

	t55 = ((x269+x270)<(x271%x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x273 = -130;
	int8_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	static volatile uint64_t x276 = 1989LLU;
	static volatile int32_t t56 = -41469;

	t56 = ((x273+x274)<(x275%x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x277 = 31416;
	uint16_t x278 = UINT16_MAX;
	uint16_t x279 = 0U;
	static int8_t x280 = -1;
	volatile int32_t t57 = -8472;

	t57 = ((x277+x278)<(x279%x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int32_t x282 = -1;
	int32_t x283 = INT32_MIN;
	static uint64_t x284 = 139928442LLU;

	t58 = ((x281+x282)<(x283%x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x289 = 4065;
	uint64_t x291 = 1316LLU;
	static volatile int32_t t59 = 61597650;

	t59 = ((x289+x290)<(x291%x292));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x293 = INT64_MIN;
	static int64_t x294 = INT64_MAX;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t60 = 2512;

	t60 = ((x293+x294)<(x295%x296));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x297 = 5U;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = UINT32_MAX;
	int32_t t61 = 62;

	t61 = ((x297+x298)<(x299%x300));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x301 = INT32_MIN;
	volatile uint64_t x302 = 5355LLU;
	uint64_t x303 = 2139284933LLU;
	int32_t x304 = -5638950;
	int32_t t62 = -3470;

	t62 = ((x301+x302)<(x303%x304));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x305 = 6U;
	volatile int64_t x306 = 12603497928050363LL;
	volatile uint16_t x307 = 12059U;
	int16_t x308 = INT16_MIN;
	int32_t t63 = 6308705;

	t63 = ((x305+x306)<(x307%x308));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = INT8_MAX;
	int32_t x311 = -1;
	volatile uint16_t x312 = 3691U;
	volatile int32_t t64 = -2628446;

	t64 = ((x309+x310)<(x311%x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x313 = 1U;
	uint32_t x314 = 0U;
	int16_t x315 = INT16_MIN;

	t65 = ((x313+x314)<(x315%x316));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x317 = 40U;
	static volatile uint16_t x318 = 10U;
	volatile int32_t x319 = INT32_MIN;
	volatile int16_t x320 = INT16_MIN;

	t66 = ((x317+x318)<(x319%x320));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x322 = UINT8_MAX;
	volatile int8_t x323 = 0;
	uint8_t x324 = 9U;
	static int32_t t67 = 240244607;

	t67 = ((x321+x322)<(x323%x324));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x325 = 442LLU;
	static volatile int16_t x326 = 9040;
	volatile int64_t x327 = INT64_MAX;
	static int32_t x328 = 14841;

	t68 = ((x325+x326)<(x327%x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x330 = UINT32_MAX;
	static volatile int32_t x331 = 711532066;
	int64_t x332 = INT64_MIN;
	volatile int32_t t69 = -2338;

	t69 = ((x329+x330)<(x331%x332));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MAX;
	uint16_t x336 = 31U;
	int32_t t70 = -19749;

	t70 = ((x333+x334)<(x335%x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x341 = 485754560U;
	uint64_t x342 = 9799LLU;
	static volatile int64_t x343 = INT64_MIN;
	int64_t x344 = -291890791394021LL;

	t71 = ((x341+x342)<(x343%x344));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x346 = INT16_MIN;
	int8_t x348 = INT8_MIN;

	t72 = ((x345+x346)<(x347%x348));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x349 = UINT32_MAX;
	uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MAX;
	int16_t x352 = -1227;

	t73 = ((x349+x350)<(x351%x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x361 = -1;
	uint8_t x363 = 6U;
	uint32_t x364 = UINT32_MAX;

	t74 = ((x361+x362)<(x363%x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x365 = 2824733LLU;
	volatile int16_t x367 = 3841;
	uint64_t x368 = 868LLU;
	volatile int32_t t75 = 4185655;

	t75 = ((x365+x366)<(x367%x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x370 = -1;
	int8_t x371 = INT8_MAX;
	static int8_t x372 = INT8_MIN;
	volatile int32_t t76 = 250;

	t76 = ((x369+x370)<(x371%x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x375 = 28;
	volatile int64_t x376 = -310LL;
	int32_t t77 = 444468;

	t77 = ((x373+x374)<(x375%x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x377 = 0U;
	int16_t x378 = INT16_MIN;
	uint16_t x379 = 0U;
	int8_t x380 = INT8_MAX;

	t78 = ((x377+x378)<(x379%x380));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x381 = 564050125728299248LLU;
	static int32_t x382 = INT32_MIN;
	uint64_t x383 = UINT64_MAX;
	uint8_t x384 = UINT8_MAX;
	int32_t t79 = -1063307830;

	t79 = ((x381+x382)<(x383%x384));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x389 = -1;
	int8_t x390 = -59;
	int32_t t80 = 1097;

	t80 = ((x389+x390)<(x391%x392));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x393 = 115900500LLU;
	uint8_t x394 = UINT8_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t81 = -142729419;

	t81 = ((x393+x394)<(x395%x396));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x397 = UINT64_MAX;
	uint16_t x398 = 9U;
	static volatile int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MAX;
	volatile int32_t t82 = 273967;

	t82 = ((x397+x398)<(x399%x400));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x401 = INT32_MIN;
	static uint32_t x402 = 98727U;
	int32_t t83 = 51998;

	t83 = ((x401+x402)<(x403%x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x405 = INT8_MAX;
	volatile uint16_t x406 = UINT16_MAX;
	int16_t x407 = 2663;
	uint8_t x408 = UINT8_MAX;
	int32_t t84 = -7035648;

	t84 = ((x405+x406)<(x407%x408));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x411 = 19756LLU;
	int8_t x412 = 1;
	volatile int32_t t85 = -8968;

	t85 = ((x409+x410)<(x411%x412));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = INT16_MAX;
	int8_t x414 = INT8_MIN;
	uint32_t x415 = 16662066U;
	volatile uint16_t x416 = UINT16_MAX;
	volatile int32_t t86 = -82021;

	t86 = ((x413+x414)<(x415%x416));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x417 = INT16_MAX;
	volatile uint16_t x418 = UINT16_MAX;
	static volatile int8_t x419 = 6;
	uint32_t x420 = 3802U;
	static int32_t t87 = 57087946;

	t87 = ((x417+x418)<(x419%x420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x421 = UINT8_MAX;
	uint32_t x422 = UINT32_MAX;
	int16_t x423 = -2028;
	int32_t x424 = 491730;
	volatile int32_t t88 = 2487;

	t88 = ((x421+x422)<(x423%x424));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x425 = UINT64_MAX;
	int32_t x426 = 22650;
	int16_t x427 = 42;
	volatile int32_t x428 = INT32_MIN;
	int32_t t89 = -6;

	t89 = ((x425+x426)<(x427%x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = 0LL;
	int8_t x430 = -57;
	int64_t x431 = INT64_MIN;

	t90 = ((x429+x430)<(x431%x432));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x434 = INT16_MIN;
	static int64_t x435 = -1LL;
	uint32_t x436 = UINT32_MAX;
	static int32_t t91 = 451239;

	t91 = ((x433+x434)<(x435%x436));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = -1;
	int64_t x438 = -1LL;
	int8_t x440 = INT8_MAX;
	volatile int32_t t92 = -57587;

	t92 = ((x437+x438)<(x439%x440));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x442 = 19932988312125892LLU;
	volatile int64_t x443 = INT64_MIN;
	volatile int64_t x444 = -125253157854LL;
	static int32_t t93 = 33;

	t93 = ((x441+x442)<(x443%x444));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = 2889856LL;
	int64_t x446 = -1LL;
	int16_t x447 = 4;
	volatile int16_t x448 = 1;
	volatile int32_t t94 = 234;

	t94 = ((x445+x446)<(x447%x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = -1;
	int32_t x450 = -1;
	uint32_t x451 = 643180752U;
	volatile int32_t t95 = 24;

	t95 = ((x449+x450)<(x451%x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x453 = 2926418060LLU;
	int8_t x454 = -1;
	int16_t x456 = INT16_MIN;
	volatile int32_t t96 = 328141;

	t96 = ((x453+x454)<(x455%x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x465 = INT32_MAX;
	static uint8_t x467 = UINT8_MAX;
	int8_t x468 = -4;
	volatile int32_t t97 = -40761129;

	t97 = ((x465+x466)<(x467%x468));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x474 = UINT32_MAX;
	static int16_t x475 = 1;
	volatile int32_t t98 = -11;

	t98 = ((x473+x474)<(x475%x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = -1LL;
	int8_t x478 = INT8_MIN;
	uint16_t x479 = UINT16_MAX;
	int64_t x480 = -1LL;

	t99 = ((x477+x478)<(x479%x480));

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

