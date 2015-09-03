#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -9249;
volatile uint32_t x33 = 3U;
static volatile int32_t x37 = INT32_MIN;
static volatile int8_t x38 = -1;
int64_t x40 = INT64_MAX;
int64_t x41 = -1LL;
volatile int64_t t6 = 6660883953LL;
uint64_t x49 = 2780060345747342569LLU;
int32_t x51 = -2;
uint64_t t10 = 267268985198572LLU;
static uint32_t t11 = 292U;
uint32_t x69 = 244U;
static volatile int16_t x77 = 2757;
uint64_t t14 = 20LLU;
uint32_t x82 = UINT32_MAX;
volatile uint64_t x83 = 18931473231LLU;
volatile int64_t x86 = -1LL;
int64_t x87 = -39715237203351260LL;
volatile int16_t x102 = INT16_MIN;
int8_t x103 = -38;
int64_t t19 = 4048751328LL;
int16_t x109 = 68;
volatile int8_t x112 = INT8_MIN;
int32_t x113 = -418681984;
int32_t x114 = INT32_MAX;
volatile uint32_t t22 = 833U;
int64_t x117 = 1LL;
volatile int64_t x120 = 7LL;
int32_t t24 = 23;
uint32_t x141 = 52U;
int32_t x142 = -1;
volatile uint64_t x143 = 90125980LLU;
int8_t x153 = 22;
static uint32_t t30 = 2813456U;
int16_t x190 = -1;
volatile int64_t x194 = 11578154LL;
int16_t x209 = INT16_MIN;
static volatile int32_t x211 = -1;
int16_t x213 = 107;
int32_t x217 = INT32_MAX;
int32_t x218 = -1;
uint16_t x220 = 2154U;
uint32_t t43 = 474767454U;
uint16_t x232 = UINT16_MAX;
int8_t x257 = -1;
int8_t x258 = 12;
uint16_t x259 = UINT16_MAX;
static uint16_t x266 = 29U;
int64_t t50 = -14631LL;
int32_t x274 = -6;
uint16_t x276 = 190U;
int64_t t51 = -45814849301LL;
static uint32_t x278 = 1373280670U;
uint32_t t52 = 70U;
int8_t x293 = INT8_MIN;
int8_t x301 = 9;
static int32_t t56 = -42774275;
static volatile uint16_t x309 = UINT16_MAX;
static int64_t x311 = -611002064133107515LL;
int32_t x324 = -1;
static uint32_t t58 = 83U;
int16_t x326 = 1;
uint64_t t60 = 242669608281611LLU;
int8_t x336 = -1;
uint32_t x338 = 6U;
int8_t x339 = INT8_MIN;
volatile int32_t x341 = INT32_MAX;
uint64_t t63 = 7379LLU;
uint64_t x348 = 1510718007LLU;
volatile uint64_t t64 = 40311110802201234LLU;
int16_t x351 = 25;
int32_t t66 = -2569628;
int64_t x358 = -4658633493LL;
volatile uint64_t t67 = 1067LLU;
volatile int64_t x364 = INT64_MIN;
int16_t x369 = INT16_MIN;
int16_t x371 = -2624;
static int16_t x372 = -510;
volatile int16_t x376 = -1;
static uint64_t t70 = 52895187379266LLU;
int64_t x387 = INT64_MAX;
volatile int64_t t71 = -63882578888LL;
volatile int16_t x401 = INT16_MIN;
uint64_t x404 = UINT64_MAX;
volatile uint64_t t74 = 17001329319498609LLU;
int8_t x411 = INT8_MAX;
uint8_t x423 = 4U;
volatile int32_t t78 = 0;
static uint64_t t81 = 67699641363LLU;
volatile uint8_t x439 = 0U;
static int64_t x440 = INT64_MIN;
static uint8_t x448 = 6U;
uint8_t x449 = UINT8_MAX;
int32_t t85 = -828;
static int64_t x455 = -1LL;
int8_t x459 = 2;
static int32_t x470 = -1;
uint64_t x473 = UINT64_MAX;
int16_t x475 = INT16_MIN;
volatile int64_t t92 = 0LL;
uint8_t x482 = UINT8_MAX;
volatile uint16_t x484 = UINT16_MAX;
int16_t x489 = INT16_MIN;
static uint8_t x490 = UINT8_MAX;
static uint16_t x491 = UINT16_MAX;
uint8_t x492 = 4U;
uint32_t x495 = 39569763U;
int32_t x497 = -139;
int8_t x502 = 2;
volatile int64_t t98 = -749830338LL;
int16_t x508 = INT16_MIN;


void f0(void) {
	uint64_t x1 = 3195LLU;
	int16_t x2 = INT16_MIN;
	static int64_t x4 = -3049125910LL;
	volatile uint64_t t0 = 7085893010750653LLU;

	t0 = (x1/((x2*x3)|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	int64_t x10 = -1LL;
	uint16_t x11 = 255U;
	volatile int8_t x12 = -1;
	int64_t t1 = 213LL;

	t1 = (x9/((x10*x11)|x12));

	if (t1 != -2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x21 = UINT32_MAX;
	static volatile int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MAX;
	int16_t x24 = -12;
	volatile uint32_t t2 = 950924454U;

	t2 = (x21/((x22*x23)|x24));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x29 = -1;
	static uint8_t x30 = UINT8_MAX;
	int16_t x31 = INT16_MAX;
	int32_t x32 = 48155;
	volatile int32_t t3 = -11569337;

	t3 = (x29/((x30*x31)|x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x34 = INT16_MIN;
	uint16_t x35 = 6187U;
	int32_t x36 = -1;
	static volatile uint32_t t4 = 66U;

	t4 = (x33/((x34*x35)|x36));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x39 = -31621;
	int64_t t5 = 2599549LL;

	t5 = (x37/((x38*x39)|x40));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x42 = 217230859U;
	uint32_t x43 = 13U;
	int64_t x44 = -4303664497033LL;

	t6 = (x41/((x42*x43)|x44));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x45 = 20089U;
	int32_t x46 = 108940326;
	int32_t x47 = -1;
	static int16_t x48 = -910;
	volatile int32_t t7 = 12811;

	t7 = (x45/((x46*x47)|x48));

	if (t7 != -3348) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x50 = -1LL;
	int16_t x52 = INT16_MIN;
	volatile uint64_t t8 = 2195007068563LLU;

	t8 = (x49/((x50*x51)|x52));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 341LLU;
	volatile int64_t x54 = -1914650918073LL;
	int8_t x55 = INT8_MAX;
	uint8_t x56 = 0U;
	static volatile uint64_t t9 = 7LLU;

	t9 = (x53/((x54*x55)|x56));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MAX;
	uint64_t x58 = UINT64_MAX;
	volatile uint8_t x59 = 32U;
	static uint16_t x60 = 4U;

	t10 = (x57/((x58*x59)|x60));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x61 = INT16_MAX;
	uint32_t x62 = UINT32_MAX;
	uint32_t x63 = 0U;
	volatile uint16_t x64 = 3U;

	t11 = (x61/((x62*x63)|x64));

	if (t11 != 10922U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x70 = 35U;
	volatile uint64_t x71 = UINT64_MAX;
	int64_t x72 = -1LL;
	volatile uint64_t t12 = 90141327058099533LLU;

	t12 = (x69/((x70*x71)|x72));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x73 = 70U;
	uint64_t x74 = 46922864914LLU;
	volatile int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MAX;
	static volatile uint64_t t13 = 8437667750210538LLU;

	t13 = (x73/((x74*x75)|x76));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x78 = 1848658LLU;
	uint64_t x79 = UINT64_MAX;
	volatile int8_t x80 = -23;

	t14 = (x77/((x78*x79)|x80));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MAX;
	volatile uint8_t x84 = 1U;
	uint64_t t15 = 134LLU;

	t15 = (x81/((x82*x83)|x84));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MIN;
	static volatile uint8_t x88 = 56U;
	volatile int64_t t16 = -17503530559LL;

	t16 = (x85/((x86*x87)|x88));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x89 = 1313653368737LLU;
	static int8_t x90 = -14;
	volatile int16_t x91 = -15;
	uint64_t x92 = 161396857081010189LLU;
	uint64_t t17 = 35838LLU;

	t17 = (x89/((x90*x91)|x92));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = 12U;
	uint64_t x94 = 17116537577LLU;
	int64_t x95 = INT64_MIN;
	uint32_t x96 = 27176699U;
	uint64_t t18 = 8416926849318LLU;

	t18 = (x93/((x94*x95)|x96));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MAX;
	int64_t x104 = INT64_MIN;

	t19 = (x101/((x102*x103)|x104));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = -5217357;
	uint16_t x106 = 0U;
	volatile int64_t x107 = INT64_MIN;
	static volatile int32_t x108 = INT32_MIN;
	volatile int64_t t20 = 23198077987733031LL;

	t20 = (x105/((x106*x107)|x108));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x110 = UINT32_MAX;
	uint64_t x111 = 267262LLU;
	uint64_t t21 = 25965573445LLU;

	t21 = (x109/((x110*x111)|x112));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x115 = 0U;
	static uint32_t x116 = 14325534U;

	t22 = (x113/((x114*x115)|x116));

	if (t22 != 270U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x118 = -1;
	int8_t x119 = INT8_MAX;
	int64_t t23 = 781907358701704895LL;

	t23 = (x117/((x118*x119)|x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = -10;
	int8_t x126 = INT8_MIN;
	int32_t x127 = -1;
	int32_t x128 = -38;

	t24 = (x125/((x126*x127)|x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x137 = INT64_MIN;
	uint64_t x138 = 3311307329583726LLU;
	static int16_t x139 = INT16_MIN;
	uint64_t x140 = 905LLU;
	uint64_t t25 = 37674451102108625LLU;

	t25 = (x137/((x138*x139)|x140));

	if (t25 != 4LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x144 = 32245U;
	volatile uint64_t t26 = 9194391562LLU;

	t26 = (x141/((x142*x143)|x144));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x145 = UINT32_MAX;
	int8_t x146 = 0;
	int64_t x147 = INT64_MIN;
	static int16_t x148 = INT16_MIN;
	volatile int64_t t27 = -398LL;

	t27 = (x145/((x146*x147)|x148));

	if (t27 != -131071LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x154 = INT32_MAX;
	int8_t x155 = -1;
	static volatile int64_t x156 = -1LL;
	int64_t t28 = 1261540LL;

	t28 = (x153/((x154*x155)|x156));

	if (t28 != -22LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = -1;
	int16_t x162 = INT16_MIN;
	int8_t x163 = -27;
	int16_t x164 = INT16_MIN;
	static volatile int32_t t29 = 118942;

	t29 = (x161/((x162*x163)|x164));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = 1;
	static volatile uint32_t x166 = 11U;
	int32_t x167 = -1577;
	static volatile int32_t x168 = -9973417;

	t30 = (x165/((x166*x167)|x168));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x169 = INT8_MIN;
	static volatile uint64_t x170 = 1201LLU;
	volatile uint32_t x171 = 1U;
	uint64_t x172 = 2036LLU;
	static uint64_t t31 = 2020LLU;

	t31 = (x169/((x170*x171)|x172));

	if (t31 != 9055839015075872LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x173 = 1U;
	volatile int32_t x174 = -277996738;
	volatile int8_t x175 = -1;
	int8_t x176 = -1;
	int32_t t32 = -14;

	t32 = (x173/((x174*x175)|x176));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x177 = INT16_MIN;
	static int32_t x178 = 18573788;
	volatile int8_t x179 = -2;
	volatile int8_t x180 = -2;
	int32_t t33 = 0;

	t33 = (x177/((x178*x179)|x180));

	if (t33 != 16384) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x181 = INT64_MIN;
	uint16_t x182 = 1564U;
	volatile uint8_t x183 = UINT8_MAX;
	volatile int32_t x184 = INT32_MIN;
	int64_t t34 = -1469926973028514LL;

	t34 = (x181/((x182*x183)|x184));

	if (t34 != 4295765084LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -1LL;
	uint8_t x191 = UINT8_MAX;
	uint64_t x192 = 6255898776229494931LLU;
	uint64_t t35 = 11712343193885LLU;

	t35 = (x189/((x190*x191)|x192));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x193 = -30246;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MIN;
	int64_t t36 = -3682393818429LL;

	t36 = (x193/((x194*x195)|x196));

	if (t36 != 720LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = -3;
	int16_t x198 = -1;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -865;
	volatile int32_t t37 = 8330159;

	t37 = (x197/((x198*x199)|x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x201 = 410U;
	int32_t x202 = -1;
	uint8_t x203 = 13U;
	uint16_t x204 = UINT16_MAX;
	int32_t t38 = -55661;

	t38 = (x201/((x202*x203)|x204));

	if (t38 != -410) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x210 = 1LLU;
	volatile int8_t x212 = -2;
	uint64_t t39 = 625212114LLU;

	t39 = (x209/((x210*x211)|x212));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x214 = INT8_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	int32_t x216 = 1101;
	volatile uint64_t t40 = 1LLU;

	t40 = (x213/((x214*x215)|x216));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x219 = UINT32_MAX;
	uint32_t t41 = 264351577U;

	t41 = (x217/((x218*x219)|x220));

	if (t41 != 996512U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x221 = 2303164322453883727LL;
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = -1;
	int8_t x224 = -1;
	volatile uint64_t t42 = 745LLU;

	t42 = (x221/((x222*x223)|x224));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = -38;
	volatile int8_t x227 = INT8_MIN;
	int32_t x228 = -1;

	t43 = (x225/((x226*x227)|x228));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = 4LLU;
	volatile uint32_t x230 = UINT32_MAX;
	uint8_t x231 = 1U;
	uint64_t t44 = 62771119LLU;

	t44 = (x229/((x230*x231)|x232));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x233 = -289352888542LL;
	int16_t x234 = -12;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = -1;
	volatile uint64_t t45 = 16070844460LLU;

	t45 = (x233/((x234*x235)|x236));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = -1;
	uint16_t x238 = 64U;
	int64_t x239 = 1809159LL;
	static volatile int64_t x240 = INT64_MAX;
	int64_t t46 = -32260128LL;

	t46 = (x237/((x238*x239)|x240));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = 0;
	uint32_t x246 = 0U;
	int16_t x247 = 1164;
	int32_t x248 = -539027;
	uint32_t t47 = 596550901U;

	t47 = (x245/((x246*x247)|x248));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x253 = 11U;
	uint8_t x254 = 3U;
	uint64_t x255 = UINT64_MAX;
	uint8_t x256 = UINT8_MAX;
	uint64_t t48 = 3LLU;

	t48 = (x253/((x254*x255)|x256));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x260 = 2;
	volatile int32_t t49 = 40319530;

	t49 = (x257/((x258*x259)|x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x265 = -1LL;
	uint16_t x267 = 26899U;
	static int8_t x268 = INT8_MIN;

	t50 = (x265/((x266*x267)|x268));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = -1;
	static int64_t x275 = -1LL;

	t51 = (x273/((x274*x275)|x276));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x277 = 5U;
	uint32_t x279 = 26U;
	int8_t x280 = INT8_MIN;

	t52 = (x277/((x278*x279)|x280));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x281 = -884743436957683069LL;
	static int32_t x282 = INT32_MAX;
	static uint32_t x283 = 27448U;
	int16_t x284 = 89;
	volatile int64_t t53 = 5388LL;

	t53 = (x281/((x282*x283)|x284));

	if (t53 != -205996699LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x294 = INT32_MIN;
	volatile uint32_t x295 = UINT32_MAX;
	int16_t x296 = INT16_MIN;
	volatile uint32_t t54 = 291750U;

	t54 = (x293/((x294*x295)|x296));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = -1;
	int8_t x304 = 3;
	static int32_t t55 = 3283132;

	t55 = (x301/((x302*x303)|x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MAX;
	static uint16_t x307 = 23U;
	static int32_t x308 = 97;

	t56 = (x305/((x306*x307)|x308));

	if (t56 != 22) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x310 = 11U;
	volatile int8_t x312 = INT8_MIN;
	int64_t t57 = -18248LL;

	t57 = (x309/((x310*x311)|x312));

	if (t57 != -7281LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = -5;
	uint32_t x323 = 71U;

	t58 = (x321/((x322*x323)|x324));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x325 = 21;
	int64_t x327 = -98388953LL;
	static volatile int32_t x328 = INT32_MAX;
	int64_t t59 = 55564353139379956LL;

	t59 = (x325/((x326*x327)|x328));

	if (t59 != -21LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x329 = 241626LLU;
	static volatile int64_t x330 = -104991842LL;
	volatile int8_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;

	t60 = (x329/((x330*x331)|x332));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 11U;
	uint16_t x335 = 10U;
	static volatile uint32_t t61 = 2U;

	t61 = (x333/((x334*x335)|x336));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x337 = INT16_MIN;
	uint8_t x340 = 5U;
	uint32_t t62 = 8671U;

	t62 = (x337/((x338*x339)|x340));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x342 = 2509U;
	uint64_t x343 = 25535708133LLU;
	int16_t x344 = INT16_MAX;

	t63 = (x341/((x342*x343)|x344));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x345 = -1;
	volatile int8_t x346 = -1;
	uint64_t x347 = 78LLU;

	t64 = (x345/((x346*x347)|x348));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x349 = UINT32_MAX;
	static uint64_t x350 = UINT64_MAX;
	int16_t x352 = 0;
	uint64_t t65 = 2776LLU;

	t65 = (x349/((x350*x351)|x352));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x353 = INT32_MAX;
	int16_t x354 = -1;
	uint16_t x355 = 2936U;
	static int8_t x356 = INT8_MIN;

	t66 = (x353/((x354*x355)|x356));

	if (t66 != -17895697) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x357 = 629U;
	volatile uint64_t x359 = 564572LLU;
	uint16_t x360 = UINT16_MAX;

	t67 = (x357/((x358*x359)|x360));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x361 = -11098174040LL;
	volatile uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MIN;
	volatile int64_t t68 = 350LL;

	t68 = (x361/((x362*x363)|x364));

	if (t68 != 1328LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x370 = INT8_MIN;
	static int32_t t69 = -1;

	t69 = (x369/((x370*x371)|x372));

	if (t69 != 64) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x373 = 2905499LLU;
	int16_t x374 = INT16_MAX;
	int32_t x375 = -38;

	t70 = (x373/((x374*x375)|x376));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x385 = -304170191602219LL;
	int16_t x386 = -1;
	volatile int8_t x388 = INT8_MAX;

	t71 = (x385/((x386*x387)|x388));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x389 = 1974325820515LL;
	int8_t x390 = INT8_MIN;
	int32_t x391 = -1;
	static volatile uint64_t x392 = 35LLU;
	uint64_t t72 = 60666181976LLU;

	t72 = (x389/((x390*x391)|x392));

	if (t72 != 12112428346LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x393 = 1;
	uint8_t x394 = UINT8_MAX;
	uint16_t x395 = 489U;
	uint16_t x396 = 4U;
	volatile int32_t t73 = -205895212;

	t73 = (x393/((x394*x395)|x396));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x402 = 97780637LLU;
	volatile int32_t x403 = 6;

	t74 = (x401/((x402*x403)|x404));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x405 = 0U;
	int8_t x406 = INT8_MAX;
	int16_t x407 = 5032;
	int64_t x408 = 7563106LL;
	int64_t t75 = -942668258LL;

	t75 = (x405/((x406*x407)|x408));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x409 = 23U;
	static volatile uint16_t x410 = UINT16_MAX;
	int64_t x412 = -1LL;
	int64_t t76 = 1014LL;

	t76 = (x409/((x410*x411)|x412));

	if (t76 != -23LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x417 = UINT64_MAX;
	int16_t x418 = -5922;
	volatile uint64_t x419 = UINT64_MAX;
	int32_t x420 = INT32_MAX;
	static volatile uint64_t t77 = 10445692414LLU;

	t77 = (x417/((x418*x419)|x420));

	if (t77 != 8589934596LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x421 = INT8_MIN;
	static int8_t x422 = INT8_MIN;
	static uint8_t x424 = UINT8_MAX;

	t78 = (x421/((x422*x423)|x424));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x425 = 179409U;
	uint8_t x426 = 0U;
	static volatile uint32_t x427 = UINT32_MAX;
	volatile int64_t x428 = INT64_MIN;
	static volatile int64_t t79 = 2252232854150338LL;

	t79 = (x425/((x426*x427)|x428));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x429 = 2;
	uint32_t x430 = 50544785U;
	uint32_t x431 = 1550532875U;
	uint16_t x432 = 16516U;
	uint32_t t80 = 14796U;

	t80 = (x429/((x430*x431)|x432));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x433 = 114U;
	int32_t x434 = -1;
	uint64_t x435 = 3LLU;
	uint16_t x436 = 12104U;

	t81 = (x433/((x434*x435)|x436));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x437 = UINT32_MAX;
	int16_t x438 = -9;
	volatile int64_t t82 = -1062074999982515LL;

	t82 = (x437/((x438*x439)|x440));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x441 = UINT16_MAX;
	int16_t x442 = -1;
	int16_t x443 = 4108;
	static int16_t x444 = INT16_MIN;
	int32_t t83 = 134;

	t83 = (x441/((x442*x443)|x444));

	if (t83 != -15) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x445 = INT8_MIN;
	volatile int8_t x446 = INT8_MIN;
	int32_t x447 = 2474;
	volatile int32_t t84 = 61323348;

	t84 = (x445/((x446*x447)|x448));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x450 = INT8_MIN;
	int32_t x451 = -5579903;
	static int32_t x452 = INT32_MIN;

	t85 = (x449/((x450*x451)|x452));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x453 = 2;
	uint64_t x454 = UINT64_MAX;
	uint32_t x456 = 3U;
	uint64_t t86 = 2226431844385607LLU;

	t86 = (x453/((x454*x455)|x456));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x457 = INT32_MIN;
	uint8_t x458 = 6U;
	int16_t x460 = INT16_MIN;
	volatile int32_t t87 = -1;

	t87 = (x457/((x458*x459)|x460));

	if (t87 != 65560) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x461 = 12U;
	int16_t x462 = -1;
	int16_t x463 = INT16_MAX;
	uint8_t x464 = 1U;
	volatile int32_t t88 = -52561;

	t88 = (x461/((x462*x463)|x464));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x465 = INT32_MAX;
	static volatile int16_t x466 = INT16_MIN;
	volatile int16_t x467 = -1;
	static volatile int64_t x468 = -1LL;
	static int64_t t89 = -20LL;

	t89 = (x465/((x466*x467)|x468));

	if (t89 != -2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x469 = INT64_MIN;
	static int16_t x471 = -724;
	int64_t x472 = INT64_MIN;
	int64_t t90 = -190LL;

	t90 = (x469/((x470*x471)|x472));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x474 = INT16_MIN;
	int32_t x476 = INT32_MIN;
	volatile uint64_t t91 = 1020189931281LLU;

	t91 = (x473/((x474*x475)|x476));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x477 = 5U;
	static int64_t x478 = 233564164LL;
	int16_t x479 = INT16_MIN;
	static int8_t x480 = 43;

	t92 = (x477/((x478*x479)|x480));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x481 = INT64_MIN;
	uint8_t x483 = UINT8_MAX;
	int64_t t93 = -1384006209834439648LL;

	t93 = (x481/((x482*x483)|x484));

	if (t93 != -140739635871744LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x485 = INT16_MIN;
	uint64_t x486 = UINT64_MAX;
	static volatile int8_t x487 = INT8_MIN;
	volatile int8_t x488 = -1;
	uint64_t t94 = 332742012LLU;

	t94 = (x485/((x486*x487)|x488));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t t95 = -424;

	t95 = (x489/((x490*x491)|x492));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x493 = 234668U;
	volatile int32_t x494 = INT32_MAX;
	volatile int64_t x496 = INT64_MIN;
	volatile int64_t t96 = 1002051484164086268LL;

	t96 = (x493/((x494*x495)|x496));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x498 = UINT8_MAX;
	static uint16_t x499 = 1868U;
	int32_t x500 = -62525;
	volatile int32_t t97 = 42;

	t97 = (x497/((x498*x499)|x500));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x501 = INT64_MAX;
	int8_t x503 = INT8_MIN;
	int16_t x504 = -23;

	t98 = (x501/((x502*x503)|x504));

	if (t98 != -401016175515425035LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x505 = INT8_MAX;
	int32_t x506 = 1;
	int16_t x507 = -48;
	volatile int32_t t99 = 2;

	t99 = (x505/((x506*x507)|x508));

	if (t99 != -2) { NG(); } else { ; }
	
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

