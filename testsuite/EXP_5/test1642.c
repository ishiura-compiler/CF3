#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x35 = 842019320812LL;
volatile uint16_t x36 = 9U;
int32_t x53 = INT32_MAX;
int32_t x59 = -1;
uint16_t x62 = 24U;
int64_t t6 = 879072986110771064LL;
int32_t x71 = INT32_MIN;
int64_t x75 = -1042065701445808LL;
uint8_t x89 = 121U;
int64_t x92 = INT64_MAX;
uint16_t x103 = 1041U;
static int8_t x114 = INT8_MIN;
uint64_t x119 = UINT64_MAX;
volatile int64_t x120 = 209974153LL;
static volatile int32_t x121 = -1032853328;
uint8_t x132 = 39U;
static int64_t x146 = -2081259LL;
static volatile int64_t t21 = INT64_MIN;
volatile int32_t x166 = 45;
uint64_t x167 = UINT64_MAX;
static int16_t x169 = -1;
static volatile int64_t x170 = INT64_MAX;
volatile int32_t t23 = 18;
uint8_t x191 = UINT8_MAX;
int32_t x195 = INT32_MIN;
int64_t x198 = -70434124LL;
int8_t x210 = INT8_MIN;
int32_t t31 = -27922923;
static uint8_t x220 = 75U;
volatile int32_t t32 = INT32_MIN;
uint16_t x229 = 4U;
int8_t x231 = INT8_MAX;
volatile int8_t x239 = INT8_MIN;
uint16_t x243 = UINT16_MAX;
int16_t x246 = -1;
static volatile uint32_t x248 = 10746U;
static int32_t t38 = 0;
static int64_t x253 = -1LL;
uint8_t x265 = 66U;
volatile int32_t t40 = -31730358;
static volatile int8_t x274 = -1;
uint16_t x276 = 1831U;
volatile uint64_t t42 = 44622209LLU;
int16_t x283 = INT16_MAX;
uint32_t x287 = 50400848U;
volatile uint8_t x296 = 1U;
static uint64_t t47 = 98616LLU;
uint64_t x301 = 201632131LLU;
uint16_t x302 = 14143U;
volatile uint64_t t48 = 842005952678841LLU;
volatile uint32_t x317 = 64174U;
int64_t x325 = INT64_MAX;
int16_t x327 = 57;
volatile int64_t t50 = INT64_MAX;
static int64_t x338 = -1281952LL;
volatile int8_t x342 = 13;
volatile int32_t t53 = -67329688;
uint32_t x351 = 13165848U;
volatile int16_t x354 = -1;
static int32_t x371 = -183619;
int32_t x374 = INT32_MAX;
uint64_t x377 = 8222888621LLU;
uint32_t x380 = UINT32_MAX;
volatile int32_t t59 = 27225;
volatile int32_t t60 = 956907;
static int32_t t61 = -1288;
int8_t x411 = INT8_MIN;
static uint64_t x423 = UINT64_MAX;
int8_t x425 = INT8_MIN;
volatile uint8_t x428 = UINT8_MAX;
int32_t x433 = INT32_MIN;
volatile int32_t x437 = -1;
static int32_t t68 = -76;
int32_t t71 = 2818631;
static uint8_t x509 = UINT8_MAX;
int8_t x510 = INT8_MAX;
uint8_t x511 = 0U;
int8_t x513 = INT8_MIN;
int32_t x516 = INT32_MAX;
int32_t t74 = -32577668;
uint16_t x525 = 452U;
volatile int32_t t76 = INT32_MIN;
volatile uint8_t x552 = UINT8_MAX;
uint32_t x557 = 5670143U;
static int64_t x558 = INT64_MIN;
static int8_t x559 = INT8_MAX;
uint64_t x560 = UINT64_MAX;
uint32_t x561 = UINT32_MAX;
uint16_t x563 = 4U;
int8_t x564 = 4;
int8_t x569 = -1;
volatile int64_t x570 = -199295929738920688LL;
static int64_t x574 = INT64_MIN;
int32_t t84 = -1;
int64_t x582 = INT64_MIN;
int16_t x591 = INT16_MAX;
static int64_t x594 = 23783782983648559LL;
static volatile uint64_t x596 = 773248138855854LLU;
int16_t x603 = INT16_MAX;
volatile uint64_t x612 = UINT64_MAX;
volatile uint8_t x617 = 0U;
static uint16_t x621 = UINT16_MAX;
static uint32_t x622 = 61U;
int16_t x624 = 502;
int16_t x627 = -1;
static uint32_t x629 = 14350U;
int32_t x630 = -1;
static volatile uint32_t t95 = 135U;
int32_t x657 = INT32_MAX;
int32_t t97 = INT32_MAX;
int64_t x662 = INT64_MAX;


void f0(void) {
	int8_t x5 = INT8_MIN;
	static volatile int64_t x6 = -1LL;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = UINT32_MAX;
	static int32_t t0 = 35517;

	t0 = (x5/((x6<=x7)<=x8));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 16232494U;
	int32_t x10 = -1;
	int64_t x11 = INT64_MIN;
	volatile uint32_t x12 = 909U;
	uint32_t t1 = 216177U;

	t1 = (x9/((x10<=x11)<=x12));

	if (t1 != 16232494U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	volatile int64_t x18 = INT64_MAX;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	int32_t t2 = -521;

	t2 = (x17/((x18<=x19)<=x20));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = 0U;
	volatile int32_t t3 = 0;

	t3 = (x33/((x34<=x35)<=x36));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x54 = 93U;
	uint64_t x55 = UINT64_MAX;
	volatile uint64_t x56 = 2796523434LLU;
	static volatile int32_t t4 = INT32_MAX;

	t4 = (x53/((x54<=x55)<=x56));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x57 = 1041512384139LLU;
	int32_t x58 = INT32_MAX;
	volatile int64_t x60 = 60461666137107LL;
	uint64_t t5 = 161344611911977709LLU;

	t5 = (x57/((x58<=x59)<=x60));

	if (t5 != 1041512384139LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x61 = -6855LL;
	static int32_t x63 = INT32_MIN;
	uint64_t x64 = 881359837293LLU;

	t6 = (x61/((x62<=x63)<=x64));

	if (t6 != -6855LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x69 = 2U;
	uint32_t x70 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t7 = 25834;

	t7 = (x69/((x70<=x71)<=x72));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x73 = 83U;
	uint8_t x74 = UINT8_MAX;
	int32_t x76 = 69;
	int32_t t8 = -10462606;

	t8 = (x73/((x74<=x75)<=x76));

	if (t8 != 83) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x77 = 0U;
	int16_t x78 = -23;
	int32_t x79 = INT32_MIN;
	uint8_t x80 = UINT8_MAX;
	int32_t t9 = 236478;

	t9 = (x77/((x78<=x79)<=x80));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x90 = UINT8_MAX;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t t10 = -117573489;

	t10 = (x89/((x90<=x91)<=x92));

	if (t10 != 121) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t x94 = INT32_MIN;
	int8_t x95 = 17;
	static int64_t x96 = 30503029LL;
	volatile int32_t t11 = 208057;

	t11 = (x93/((x94<=x95)<=x96));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MIN;
	volatile uint8_t x104 = 2U;
	static int32_t t12 = -6;

	t12 = (x101/((x102<=x103)<=x104));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x113 = -1;
	int32_t x115 = INT32_MAX;
	volatile int64_t x116 = 199573889LL;
	int32_t t13 = -426951;

	t13 = (x113/((x114<=x115)<=x116));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x117 = 219511376248LLU;
	int32_t x118 = INT32_MIN;
	volatile uint64_t t14 = 3561896LLU;

	t14 = (x117/((x118<=x119)<=x120));

	if (t14 != 219511376248LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x122 = 6;
	int32_t x123 = -1;
	uint32_t x124 = 228U;
	volatile int32_t t15 = -38461603;

	t15 = (x121/((x122<=x123)<=x124));

	if (t15 != -1032853328) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x129 = 0U;
	volatile int32_t x130 = 21;
	static volatile int32_t x131 = -1600;
	static volatile int32_t t16 = 4828;

	t16 = (x129/((x130<=x131)<=x132));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x133 = INT8_MIN;
	volatile int8_t x134 = 15;
	static volatile int8_t x135 = INT8_MIN;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t17 = 43581;

	t17 = (x133/((x134<=x135)<=x136));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x137 = 58U;
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = INT32_MIN;
	uint32_t x140 = 63U;
	int32_t t18 = 2;

	t18 = (x137/((x138<=x139)<=x140));

	if (t18 != 58) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x145 = -4;
	static int8_t x147 = INT8_MAX;
	volatile uint8_t x148 = 5U;
	static int32_t t19 = 0;

	t19 = (x145/((x146<=x147)<=x148));

	if (t19 != -4) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x149 = INT64_MAX;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = 1;
	volatile int32_t x152 = INT32_MAX;
	int64_t t20 = INT64_MAX;

	t20 = (x149/((x150<=x151)<=x152));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x161 = INT64_MIN;
	int64_t x162 = 491872628LL;
	int8_t x163 = INT8_MAX;
	int8_t x164 = 15;

	t21 = (x161/((x162<=x163)<=x164));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x165 = 15U;
	uint16_t x168 = UINT16_MAX;
	uint32_t t22 = 7U;

	t22 = (x165/((x166<=x167)<=x168));

	if (t22 != 15U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x171 = INT32_MAX;
	volatile int32_t x172 = 1;

	t23 = (x169/((x170<=x171)<=x172));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x173 = INT8_MAX;
	static uint64_t x174 = 50318775593704LLU;
	static int16_t x175 = -1;
	int16_t x176 = 2;
	int32_t t24 = 26143;

	t24 = (x173/((x174<=x175)<=x176));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x177 = INT16_MIN;
	static uint16_t x178 = 17397U;
	int16_t x179 = INT16_MIN;
	uint64_t x180 = 221LLU;
	volatile int32_t t25 = 994087248;

	t25 = (x177/((x178<=x179)<=x180));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x185 = -189467LL;
	uint8_t x186 = 4U;
	int32_t x187 = INT32_MAX;
	uint32_t x188 = 265297595U;
	volatile int64_t t26 = -91888LL;

	t26 = (x185/((x186<=x187)<=x188));

	if (t26 != -189467LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	uint8_t x192 = UINT8_MAX;
	static int32_t t27 = INT32_MIN;

	t27 = (x189/((x190<=x191)<=x192));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x193 = 194386U;
	static int64_t x194 = INT64_MAX;
	static uint64_t x196 = UINT64_MAX;
	volatile uint32_t t28 = 2114U;

	t28 = (x193/((x194<=x195)<=x196));

	if (t28 != 194386U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x197 = 10235U;
	int16_t x199 = INT16_MIN;
	int64_t x200 = 3752342843780LL;
	static volatile uint32_t t29 = 275866U;

	t29 = (x197/((x198<=x199)<=x200));

	if (t29 != 10235U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MIN;
	static uint64_t x203 = UINT64_MAX;
	int8_t x204 = 4;
	volatile int32_t t30 = -29446349;

	t30 = (x201/((x202<=x203)<=x204));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x209 = 102U;
	int64_t x211 = 1889LL;
	uint64_t x212 = 13215850481LLU;

	t31 = (x209/((x210<=x211)<=x212));

	if (t31 != 102) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	uint64_t x219 = 871859770LLU;

	t32 = (x217/((x218<=x219)<=x220));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x225 = -30;
	uint32_t x226 = 473334978U;
	uint32_t x227 = 284191U;
	uint32_t x228 = 3592096U;
	int32_t t33 = 0;

	t33 = (x225/((x226<=x227)<=x228));

	if (t33 != -30) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x230 = 0U;
	static int64_t x232 = INT64_MAX;
	static int32_t t34 = 3798361;

	t34 = (x229/((x230<=x231)<=x232));

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x237 = 68425448188LLU;
	int64_t x238 = INT64_MAX;
	uint8_t x240 = 2U;
	uint64_t t35 = 6386LLU;

	t35 = (x237/((x238<=x239)<=x240));

	if (t35 != 68425448188LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MIN;
	uint32_t x244 = 233177U;
	static int32_t t36 = INT32_MIN;

	t36 = (x241/((x242<=x243)<=x244));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x245 = UINT64_MAX;
	int16_t x247 = -1;
	static uint64_t t37 = UINT64_MAX;

	t37 = (x245/((x246<=x247)<=x248));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x249 = INT8_MAX;
	int16_t x250 = INT16_MAX;
	volatile int16_t x251 = -426;
	uint64_t x252 = 13319564LLU;

	t38 = (x249/((x250<=x251)<=x252));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x254 = 87;
	static volatile int16_t x255 = -339;
	uint32_t x256 = 10U;
	volatile int64_t t39 = 16822354942939LL;

	t39 = (x253/((x254<=x255)<=x256));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x266 = -211405LL;
	static uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MAX;

	t40 = (x265/((x266<=x267)<=x268));

	if (t40 != 66) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x269 = 1658497U;
	volatile uint64_t x270 = UINT64_MAX;
	static uint8_t x271 = 87U;
	uint8_t x272 = UINT8_MAX;
	uint32_t t41 = 402852U;

	t41 = (x269/((x270<=x271)<=x272));

	if (t41 != 1658497U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x273 = 3713LLU;
	static uint32_t x275 = 1004339593U;

	t42 = (x273/((x274<=x275)<=x276));

	if (t42 != 3713LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x277 = -3187;
	static uint64_t x278 = 893340LLU;
	static int64_t x279 = -1LL;
	uint64_t x280 = UINT64_MAX;
	static int32_t t43 = -2789248;

	t43 = (x277/((x278<=x279)<=x280));

	if (t43 != -3187) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x281 = -8;
	int16_t x282 = -855;
	volatile uint64_t x284 = 89348881LLU;
	int32_t t44 = 58;

	t44 = (x281/((x282<=x283)<=x284));

	if (t44 != -8) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	uint64_t x288 = 2134674262334143LLU;
	int64_t t45 = INT64_MIN;

	t45 = (x285/((x286<=x287)<=x288));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MAX;
	uint32_t x295 = 45025U;
	static volatile int64_t t46 = INT64_MIN;

	t46 = (x293/((x294<=x295)<=x296));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x297 = 333751LLU;
	uint8_t x298 = 9U;
	int16_t x299 = INT16_MIN;
	int16_t x300 = 1442;

	t47 = (x297/((x298<=x299)<=x300));

	if (t47 != 333751LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x303 = INT64_MIN;
	uint64_t x304 = 400LLU;

	t48 = (x301/((x302<=x303)<=x304));

	if (t48 != 201632131LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x318 = INT16_MAX;
	int32_t x319 = INT32_MAX;
	int32_t x320 = INT32_MAX;
	static uint32_t t49 = 347055U;

	t49 = (x317/((x318<=x319)<=x320));

	if (t49 != 64174U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x326 = 94143120;
	uint8_t x328 = UINT8_MAX;

	t50 = (x325/((x326<=x327)<=x328));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x329 = INT32_MIN;
	volatile uint16_t x330 = 11509U;
	int16_t x331 = -1;
	static volatile uint16_t x332 = 1U;
	int32_t t51 = INT32_MIN;

	t51 = (x329/((x330<=x331)<=x332));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x337 = INT32_MAX;
	volatile int16_t x339 = INT16_MAX;
	uint64_t x340 = 2267489313LLU;
	int32_t t52 = INT32_MAX;

	t52 = (x337/((x338<=x339)<=x340));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x341 = 231U;
	uint8_t x343 = 0U;
	uint8_t x344 = 29U;

	t53 = (x341/((x342<=x343)<=x344));

	if (t53 != 231) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x349 = INT64_MAX;
	uint32_t x350 = 6972U;
	static int64_t x352 = 1432033415408LL;
	int64_t t54 = INT64_MAX;

	t54 = (x349/((x350<=x351)<=x352));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x353 = 185U;
	int64_t x355 = INT64_MAX;
	uint16_t x356 = 622U;
	uint32_t t55 = 11U;

	t55 = (x353/((x354<=x355)<=x356));

	if (t55 != 185U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x369 = -1;
	volatile int16_t x370 = INT16_MIN;
	static uint64_t x372 = 103550LLU;
	int32_t t56 = 568068;

	t56 = (x369/((x370<=x371)<=x372));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x373 = INT64_MAX;
	int64_t x375 = -1LL;
	uint8_t x376 = UINT8_MAX;
	int64_t t57 = INT64_MAX;

	t57 = (x373/((x374<=x375)<=x376));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x378 = 108;
	volatile int64_t x379 = -76LL;
	uint64_t t58 = 218LLU;

	t58 = (x377/((x378<=x379)<=x380));

	if (t58 != 8222888621LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x385 = -188;
	uint64_t x386 = 81LLU;
	volatile uint8_t x387 = 0U;
	int8_t x388 = 13;

	t59 = (x385/((x386<=x387)<=x388));

	if (t59 != -188) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x401 = 118U;
	int16_t x402 = INT16_MIN;
	volatile uint16_t x403 = 338U;
	volatile uint64_t x404 = 30711141162934LLU;

	t60 = (x401/((x402<=x403)<=x404));

	if (t60 != 118) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x405 = INT8_MIN;
	volatile int64_t x406 = -1LL;
	uint64_t x407 = 1LLU;
	static uint8_t x408 = 1U;

	t61 = (x405/((x406<=x407)<=x408));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x409 = -2;
	int64_t x410 = -1LL;
	uint16_t x412 = UINT16_MAX;
	int32_t t62 = -100;

	t62 = (x409/((x410<=x411)<=x412));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x421 = -1;
	int64_t x422 = 868461705873LL;
	int8_t x424 = 23;
	volatile int32_t t63 = 1;

	t63 = (x421/((x422<=x423)<=x424));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x426 = -1;
	uint32_t x427 = 47U;
	volatile int32_t t64 = 12457633;

	t64 = (x425/((x426<=x427)<=x428));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x434 = -1;
	int64_t x435 = INT64_MAX;
	int64_t x436 = 421686LL;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x433/((x434<=x435)<=x436));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x438 = INT16_MAX;
	uint8_t x439 = 7U;
	static uint64_t x440 = 1853010LLU;
	volatile int32_t t66 = 128587798;

	t66 = (x437/((x438<=x439)<=x440));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x441 = INT32_MAX;
	int32_t x442 = INT32_MIN;
	int64_t x443 = -1LL;
	static int8_t x444 = INT8_MAX;
	int32_t t67 = INT32_MAX;

	t67 = (x441/((x442<=x443)<=x444));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x449 = -2;
	int16_t x450 = 1007;
	int8_t x451 = INT8_MIN;
	int16_t x452 = 1;

	t68 = (x449/((x450<=x451)<=x452));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x469 = 6610;
	static uint8_t x470 = UINT8_MAX;
	int32_t x471 = -841273979;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t69 = 1097926;

	t69 = (x469/((x470<=x471)<=x472));

	if (t69 != 6610) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x489 = -63;
	uint8_t x490 = 1U;
	int8_t x491 = -1;
	uint64_t x492 = 179633992245714LLU;
	volatile int32_t t70 = 92611581;

	t70 = (x489/((x490<=x491)<=x492));

	if (t70 != -63) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x493 = UINT16_MAX;
	int16_t x494 = INT16_MAX;
	static int8_t x495 = -1;
	uint32_t x496 = 336U;

	t71 = (x493/((x494<=x495)<=x496));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x512 = UINT16_MAX;
	static volatile int32_t t72 = -813;

	t72 = (x509/((x510<=x511)<=x512));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x514 = -58;
	static int8_t x515 = INT8_MIN;
	volatile int32_t t73 = 2038681;

	t73 = (x513/((x514<=x515)<=x516));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x521 = 1U;
	int16_t x522 = 2387;
	uint8_t x523 = UINT8_MAX;
	uint64_t x524 = UINT64_MAX;

	t74 = (x521/((x522<=x523)<=x524));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x526 = UINT32_MAX;
	uint64_t x527 = UINT64_MAX;
	uint16_t x528 = 12U;
	volatile int32_t t75 = 2186;

	t75 = (x525/((x526<=x527)<=x528));

	if (t75 != 452) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x529 = INT32_MIN;
	int32_t x530 = -86177021;
	int16_t x531 = INT16_MIN;
	int16_t x532 = 40;

	t76 = (x529/((x530<=x531)<=x532));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x541 = -1;
	int64_t x542 = INT64_MAX;
	uint16_t x543 = UINT16_MAX;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t77 = 108944547;

	t77 = (x541/((x542<=x543)<=x544));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x545 = -53403;
	volatile int8_t x546 = -53;
	static uint64_t x547 = UINT64_MAX;
	volatile uint16_t x548 = UINT16_MAX;
	int32_t t78 = 5;

	t78 = (x545/((x546<=x547)<=x548));

	if (t78 != -53403) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x549 = -6;
	static int32_t x550 = INT32_MAX;
	static uint16_t x551 = 7U;
	static volatile int32_t t79 = 5408933;

	t79 = (x549/((x550<=x551)<=x552));

	if (t79 != -6) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x553 = 5;
	int16_t x554 = INT16_MIN;
	static int64_t x555 = INT64_MAX;
	volatile uint8_t x556 = 37U;
	volatile int32_t t80 = -244625388;

	t80 = (x553/((x554<=x555)<=x556));

	if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t t81 = 128392890U;

	t81 = (x557/((x558<=x559)<=x560));

	if (t81 != 5670143U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x562 = INT8_MIN;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (x561/((x562<=x563)<=x564));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x571 = 19781543090156336LL;
	uint32_t x572 = UINT32_MAX;
	static volatile int32_t t83 = -204926;

	t83 = (x569/((x570<=x571)<=x572));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x573 = 61;
	static int32_t x575 = -127283057;
	uint64_t x576 = UINT64_MAX;

	t84 = (x573/((x574<=x575)<=x576));

	if (t84 != 61) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x581 = UINT32_MAX;
	int32_t x583 = 113720006;
	static int8_t x584 = INT8_MAX;
	static volatile uint32_t t85 = UINT32_MAX;

	t85 = (x581/((x582<=x583)<=x584));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x585 = 41;
	static uint32_t x586 = 941U;
	int32_t x587 = INT32_MIN;
	static uint32_t x588 = 292034535U;
	static int32_t t86 = 61080543;

	t86 = (x585/((x586<=x587)<=x588));

	if (t86 != 41) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x589 = INT16_MIN;
	uint64_t x590 = UINT64_MAX;
	uint16_t x592 = 4369U;
	volatile int32_t t87 = -49234140;

	t87 = (x589/((x590<=x591)<=x592));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x593 = -1;
	int64_t x595 = INT64_MIN;
	volatile int32_t t88 = -63994554;

	t88 = (x593/((x594<=x595)<=x596));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x601 = -1;
	int32_t x602 = INT32_MIN;
	volatile uint64_t x604 = 54090LLU;
	int32_t t89 = 70291;

	t89 = (x601/((x602<=x603)<=x604));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x609 = -23264LL;
	int16_t x610 = -2;
	static uint32_t x611 = UINT32_MAX;
	int64_t t90 = -207606LL;

	t90 = (x609/((x610<=x611)<=x612));

	if (t90 != -23264LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x613 = INT8_MIN;
	int8_t x614 = INT8_MIN;
	static volatile int64_t x615 = INT64_MAX;
	volatile int32_t x616 = 126500312;
	int32_t t91 = 15565;

	t91 = (x613/((x614<=x615)<=x616));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x618 = -18;
	static volatile uint64_t x619 = 4677LLU;
	int8_t x620 = 0;
	static int32_t t92 = 126;

	t92 = (x617/((x618<=x619)<=x620));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x623 = INT64_MIN;
	int32_t t93 = 34858374;

	t93 = (x621/((x622<=x623)<=x624));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x625 = INT16_MIN;
	uint64_t x626 = 69883329817702LLU;
	volatile uint8_t x628 = 4U;
	int32_t t94 = 1004575;

	t94 = (x625/((x626<=x627)<=x628));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x631 = INT32_MAX;
	uint32_t x632 = 72601057U;

	t95 = (x629/((x630<=x631)<=x632));

	if (t95 != 14350U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x633 = -26168125542340597LL;
	int8_t x634 = -1;
	int16_t x635 = -4;
	volatile int32_t x636 = INT32_MAX;
	volatile int64_t t96 = -26799464654649378LL;

	t96 = (x633/((x634<=x635)<=x636));

	if (t96 != -26168125542340597LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x658 = 63U;
	uint32_t x659 = 51572588U;
	static int32_t x660 = INT32_MAX;

	t97 = (x657/((x658<=x659)<=x660));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x661 = INT64_MIN;
	uint64_t x663 = 33045LLU;
	int16_t x664 = INT16_MAX;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x661/((x662<=x663)<=x664));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x665 = 5438U;
	int32_t x666 = INT32_MIN;
	static uint16_t x667 = UINT16_MAX;
	int64_t x668 = 585110170LL;
	volatile uint32_t t99 = 7551U;

	t99 = (x665/((x666<=x667)<=x668));

	if (t99 != 5438U) { NG(); } else { ; }
	
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

