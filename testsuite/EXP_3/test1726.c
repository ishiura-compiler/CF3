#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x16 = 106671414U;
static int32_t x18 = 0;
int64_t x21 = INT64_MIN;
uint64_t x22 = UINT64_MAX;
int64_t x27 = INT64_MIN;
int32_t t4 = 1;
uint32_t x29 = 115546U;
int16_t x33 = INT16_MIN;
int16_t x36 = INT16_MAX;
int32_t x47 = -1;
static int16_t x57 = -1;
int64_t x59 = INT64_MIN;
static volatile int64_t x72 = INT64_MIN;
static volatile int64_t x73 = -1LL;
int64_t x80 = 1197365778334LL;
static volatile uint32_t x81 = UINT32_MAX;
static int64_t x90 = -1LL;
static uint8_t x91 = 18U;
int16_t x94 = INT16_MIN;
volatile uint16_t x100 = UINT16_MAX;
int8_t x114 = INT8_MAX;
volatile uint32_t x134 = 3U;
int32_t t21 = -905158;
int8_t x137 = -1;
int16_t x138 = INT16_MIN;
static volatile int32_t x144 = INT32_MAX;
int64_t x147 = INT64_MIN;
volatile int8_t x163 = INT8_MIN;
volatile int32_t t28 = -7316823;
int16_t x177 = INT16_MIN;
volatile uint8_t x178 = 3U;
volatile uint64_t x181 = 5980750856430LLU;
volatile int32_t t31 = 1039376046;
uint16_t x194 = 1U;
int32_t t33 = -6;
volatile int32_t t37 = -35083;
uint32_t x242 = 867727U;
int64_t x245 = 6239192708LL;
uint64_t x247 = 4659LLU;
int16_t x252 = INT16_MIN;
int8_t x259 = -3;
int64_t x264 = INT64_MIN;
int64_t x266 = -2245280866539LL;
int64_t x267 = -1LL;
int8_t x283 = -26;
volatile uint8_t x305 = 8U;
static uint64_t x307 = 652470260147580LLU;
static uint16_t x319 = UINT16_MAX;
uint64_t x329 = 6005670326765217LLU;
volatile int32_t t56 = -86114;
volatile uint64_t x366 = 6272948543LLU;
int64_t x368 = INT64_MAX;
static int32_t x380 = 98169789;
static uint64_t x382 = UINT64_MAX;
static volatile uint16_t x384 = 8U;
static volatile int16_t x391 = INT16_MIN;
int16_t x403 = INT16_MIN;
int32_t t66 = -5919;
volatile int16_t x405 = INT16_MIN;
int64_t x418 = -1LL;
int32_t x420 = INT32_MIN;
int32_t x422 = -1;
volatile int8_t x423 = 27;
volatile int32_t x424 = 4416;
int32_t t71 = -3861;
int8_t x431 = INT8_MIN;
int32_t t74 = -147;
int16_t x448 = -10834;
static int32_t t76 = -15028894;
uint8_t x471 = 1U;
uint32_t x478 = UINT32_MAX;
int16_t x481 = INT16_MIN;
volatile uint32_t x483 = 1U;
static volatile uint16_t x486 = 770U;
static uint32_t x487 = 59936217U;
int64_t x488 = -343714527191808LL;
int32_t x491 = INT32_MAX;
int64_t x496 = INT64_MIN;
volatile int32_t t88 = -56215;
int8_t x513 = INT8_MIN;
volatile int32_t t91 = -16005464;
int16_t x518 = 2;
int32_t x536 = INT32_MIN;
int8_t x538 = INT8_MIN;
volatile int32_t x551 = 3;


void f0(void) {
	volatile int8_t x9 = INT8_MIN;
	int16_t x10 = -298;
	static int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MAX;
	int32_t t0 = 31753;

	t0 = ((x9*x10)<=(x11&x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 7349427U;
	int8_t x14 = INT8_MIN;
	volatile uint8_t x15 = 2U;
	int32_t t1 = -13;

	t1 = ((x13*x14)<=(x15&x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	static int64_t x19 = -1LL;
	volatile int64_t x20 = INT64_MAX;
	volatile int32_t t2 = 2192;

	t2 = ((x17*x18)<=(x19&x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x23 = INT8_MIN;
	int32_t x24 = -12;
	int32_t t3 = -662;

	t3 = ((x21*x22)<=(x23&x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x25 = 6498U;
	uint8_t x26 = UINT8_MAX;
	int64_t x28 = INT64_MIN;

	t4 = ((x25*x26)<=(x27&x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x30 = 1LLU;
	uint64_t x31 = 949615324573286LLU;
	int8_t x32 = -1;
	int32_t t5 = 2;

	t5 = ((x29*x30)<=(x31&x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x34 = 11U;
	int8_t x35 = INT8_MIN;
	volatile int32_t t6 = 81098;

	t6 = ((x33*x34)<=(x35&x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	volatile uint64_t x38 = 2LLU;
	uint8_t x39 = 5U;
	volatile int64_t x40 = -124834023493196LL;
	volatile int32_t t7 = 1439051;

	t7 = ((x37*x38)<=(x39&x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 29U;
	static uint8_t x46 = 0U;
	volatile uint64_t x48 = UINT64_MAX;
	int32_t t8 = -639937;

	t8 = ((x45*x46)<=(x47&x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x58 = 7995721U;
	volatile int8_t x60 = INT8_MAX;
	volatile int32_t t9 = 5;

	t9 = ((x57*x58)<=(x59&x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x61 = 12445LLU;
	int32_t x62 = INT32_MAX;
	int64_t x63 = INT64_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t10 = 0;

	t10 = ((x61*x62)<=(x63&x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	static int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int32_t t11 = -20130304;

	t11 = ((x69*x70)<=(x71&x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x74 = 8898U;
	int16_t x75 = -1;
	int32_t x76 = INT32_MIN;
	int32_t t12 = 281060;

	t12 = ((x73*x74)<=(x75&x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MIN;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MIN;
	volatile int32_t t13 = 563;

	t13 = ((x77*x78)<=(x79&x80));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x82 = 1626879348LLU;
	int16_t x83 = INT16_MIN;
	static volatile int32_t x84 = 191129;
	volatile int32_t t14 = 107541028;

	t14 = ((x81*x82)<=(x83&x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = 1U;
	volatile int32_t x92 = INT32_MIN;
	int32_t t15 = 35;

	t15 = ((x89*x90)<=(x91&x92));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x93 = 77;
	int64_t x95 = INT64_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	int32_t t16 = 740;

	t16 = ((x93*x94)<=(x95&x96));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x97 = UINT16_MAX;
	volatile int32_t x98 = -1;
	static int64_t x99 = -435931688836046985LL;
	volatile int32_t t17 = -5;

	t17 = ((x97*x98)<=(x99&x100));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x113 = 27U;
	uint16_t x115 = UINT16_MAX;
	volatile int64_t x116 = INT64_MIN;
	int32_t t18 = -3242180;

	t18 = ((x113*x114)<=(x115&x116));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x121 = 3112001989527216LL;
	int32_t x122 = 2644;
	static int64_t x123 = INT64_MIN;
	uint16_t x124 = 0U;
	int32_t t19 = 5476984;

	t19 = ((x121*x122)<=(x123&x124));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = -1LL;
	volatile int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	volatile int16_t x132 = 17;
	volatile int32_t t20 = 6167446;

	t20 = ((x129*x130)<=(x131&x132));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x133 = -56517188;
	int64_t x135 = -138304LL;
	static int32_t x136 = INT32_MIN;

	t21 = ((x133*x134)<=(x135&x136));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x139 = 3081;
	int64_t x140 = INT64_MIN;
	volatile int32_t t22 = 110939;

	t22 = ((x137*x138)<=(x139&x140));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	int32_t t23 = -433222;

	t23 = ((x141*x142)<=(x143&x144));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = 1;
	volatile int32_t x146 = INT32_MAX;
	uint64_t x148 = 26549LLU;
	int32_t t24 = -3;

	t24 = ((x145*x146)<=(x147&x148));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x153 = 42025601804LLU;
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 3735U;
	static uint8_t x156 = 1U;
	volatile int32_t t25 = 1;

	t25 = ((x153*x154)<=(x155&x156));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x161 = INT8_MIN;
	int16_t x162 = -12;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t26 = 27207169;

	t26 = ((x161*x162)<=(x163&x164));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = UINT8_MAX;
	int8_t x167 = 9;
	static volatile int16_t x168 = -1;
	int32_t t27 = 2102661;

	t27 = ((x165*x166)<=(x167&x168));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x169 = 3U;
	int32_t x170 = 251;
	int8_t x171 = -1;
	int16_t x172 = INT16_MIN;

	t28 = ((x169*x170)<=(x171&x172));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x179 = -209219020;
	int16_t x180 = 1;
	int32_t t29 = 0;

	t29 = ((x177*x178)<=(x179&x180));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x182 = 13434341648498566LLU;
	uint64_t x183 = 695539294197LLU;
	uint64_t x184 = 12102036378801998LLU;
	static volatile int32_t t30 = -8199290;

	t30 = ((x181*x182)<=(x183&x184));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x189 = UINT32_MAX;
	uint16_t x190 = UINT16_MAX;
	volatile int32_t x191 = -1;
	static int8_t x192 = INT8_MIN;

	t31 = ((x189*x190)<=(x191&x192));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x193 = UINT32_MAX;
	uint32_t x195 = 6081U;
	int16_t x196 = INT16_MAX;
	volatile int32_t t32 = -855518;

	t32 = ((x193*x194)<=(x195&x196));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x201 = INT8_MIN;
	static uint8_t x202 = 5U;
	static int8_t x203 = INT8_MIN;
	static int64_t x204 = 8168361220LL;

	t33 = ((x201*x202)<=(x203&x204));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = -5080;
	int32_t x215 = 3940518;
	uint32_t x216 = 123U;
	static int32_t t34 = -160544547;

	t34 = ((x213*x214)<=(x215&x216));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x221 = 440428748911LLU;
	static int16_t x222 = INT16_MAX;
	int16_t x223 = -1;
	static int64_t x224 = -1LL;
	volatile int32_t t35 = 0;

	t35 = ((x221*x222)<=(x223&x224));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x225 = -1;
	int8_t x226 = INT8_MIN;
	int64_t x227 = -3379488203395132442LL;
	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t36 = -1676538;

	t36 = ((x225*x226)<=(x227&x228));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x229 = INT16_MAX;
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 38U;

	t37 = ((x229*x230)<=(x231&x232));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x233 = 173031788LL;
	static int32_t x234 = INT32_MIN;
	volatile int32_t x235 = INT32_MAX;
	static uint64_t x236 = 966LLU;
	static volatile int32_t t38 = -510;

	t38 = ((x233*x234)<=(x235&x236));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x241 = 13U;
	int8_t x243 = INT8_MIN;
	uint64_t x244 = 1LLU;
	int32_t t39 = 92497;

	t39 = ((x241*x242)<=(x243&x244));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x246 = -1LL;
	int16_t x248 = INT16_MIN;
	volatile int32_t t40 = -557668375;

	t40 = ((x245*x246)<=(x247&x248));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x249 = INT32_MAX;
	int8_t x250 = 1;
	uint16_t x251 = 11U;
	int32_t t41 = -14024;

	t41 = ((x249*x250)<=(x251&x252));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = 1335LL;
	int64_t x255 = -1622263379631509LL;
	static volatile int16_t x256 = -1;
	int32_t t42 = 572824;

	t42 = ((x253*x254)<=(x255&x256));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x257 = 52243544LLU;
	uint16_t x258 = 24898U;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t43 = 1;

	t43 = ((x257*x258)<=(x259&x260));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x261 = UINT64_MAX;
	static uint8_t x262 = 14U;
	volatile uint64_t x263 = UINT64_MAX;
	static int32_t t44 = 30;

	t44 = ((x261*x262)<=(x263&x264));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x265 = -1;
	uint16_t x268 = 0U;
	volatile int32_t t45 = 27812216;

	t45 = ((x265*x266)<=(x267&x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x269 = -1;
	uint32_t x270 = 69867584U;
	uint16_t x271 = 27992U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t46 = -88387059;

	t46 = ((x269*x270)<=(x271&x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x277 = -1;
	int64_t x278 = -18923846337LL;
	int16_t x279 = INT16_MIN;
	int32_t x280 = 739663;
	int32_t t47 = 36326558;

	t47 = ((x277*x278)<=(x279&x280));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x281 = 391100;
	uint64_t x282 = 1840LLU;
	int32_t x284 = -1;
	volatile int32_t t48 = -77736;

	t48 = ((x281*x282)<=(x283&x284));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x293 = 82474558;
	volatile uint64_t x294 = 6532707091466930LLU;
	int32_t x295 = -1;
	volatile uint16_t x296 = UINT16_MAX;
	int32_t t49 = 11685;

	t49 = ((x293*x294)<=(x295&x296));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x301 = 49;
	uint16_t x302 = 394U;
	volatile int8_t x303 = INT8_MIN;
	static volatile int32_t x304 = 1560755;
	int32_t t50 = 209940;

	t50 = ((x301*x302)<=(x303&x304));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x306 = INT8_MIN;
	static volatile int8_t x308 = INT8_MAX;
	static int32_t t51 = -52;

	t51 = ((x305*x306)<=(x307&x308));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x313 = 6245128384LLU;
	int32_t x314 = INT32_MIN;
	int64_t x315 = -116276007283LL;
	int16_t x316 = -13;
	volatile int32_t t52 = 3627833;

	t52 = ((x313*x314)<=(x315&x316));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x317 = -1;
	static volatile int8_t x318 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	volatile int32_t t53 = 10773;

	t53 = ((x317*x318)<=(x319&x320));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x330 = UINT8_MAX;
	int32_t x331 = -672367;
	static volatile uint32_t x332 = 916U;
	volatile int32_t t54 = 12668;

	t54 = ((x329*x330)<=(x331&x332));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x337 = UINT32_MAX;
	volatile int8_t x338 = -1;
	volatile int16_t x339 = 90;
	int64_t x340 = -1LL;
	volatile int32_t t55 = -2775494;

	t55 = ((x337*x338)<=(x339&x340));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x341 = INT16_MAX;
	static uint64_t x342 = UINT64_MAX;
	static uint64_t x343 = 16LLU;
	int64_t x344 = -3789317600LL;

	t56 = ((x341*x342)<=(x343&x344));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x349 = INT8_MIN;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	uint8_t x352 = 67U;
	volatile int32_t t57 = 38657542;

	t57 = ((x349*x350)<=(x351&x352));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x353 = -1LL;
	volatile int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = 260U;
	volatile int32_t t58 = -21190;

	t58 = ((x353*x354)<=(x355&x356));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x365 = -13850;
	int32_t x367 = INT32_MIN;
	static volatile int32_t t59 = -1;

	t59 = ((x365*x366)<=(x367&x368));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x373 = -1;
	static uint32_t x374 = 395151652U;
	volatile uint32_t x375 = 486U;
	int32_t x376 = -2;
	volatile int32_t t60 = 509;

	t60 = ((x373*x374)<=(x375&x376));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x377 = INT16_MIN;
	volatile int8_t x378 = INT8_MIN;
	uint16_t x379 = 321U;
	volatile int32_t t61 = -3;

	t61 = ((x377*x378)<=(x379&x380));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x381 = 4878185111287527LLU;
	int64_t x383 = INT64_MIN;
	int32_t t62 = -41958701;

	t62 = ((x381*x382)<=(x383&x384));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x385 = -6073033;
	volatile uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 108544U;
	int16_t x388 = INT16_MIN;
	int32_t t63 = -7;

	t63 = ((x385*x386)<=(x387&x388));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x389 = 27U;
	int8_t x390 = -1;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t64 = -44;

	t64 = ((x389*x390)<=(x391&x392));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x393 = 29U;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	int32_t x396 = -1;
	int32_t t65 = 384;

	t65 = ((x393*x394)<=(x395&x396));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x401 = 22U;
	static uint64_t x402 = 53241260LLU;
	int8_t x404 = INT8_MIN;

	t66 = ((x401*x402)<=(x403&x404));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x406 = 18U;
	int8_t x407 = -1;
	int32_t x408 = INT32_MAX;
	volatile int32_t t67 = -631;

	t67 = ((x405*x406)<=(x407&x408));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x409 = INT32_MIN;
	static uint32_t x410 = 14366814U;
	volatile uint16_t x411 = 4U;
	static int32_t x412 = INT32_MIN;
	volatile int32_t t68 = 41991140;

	t68 = ((x409*x410)<=(x411&x412));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x413 = -5468;
	static uint32_t x414 = 996460U;
	uint8_t x415 = UINT8_MAX;
	int16_t x416 = 1;
	static volatile int32_t t69 = 13428;

	t69 = ((x413*x414)<=(x415&x416));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x417 = 1310499135U;
	volatile int32_t x419 = -35222;
	volatile int32_t t70 = 267456;

	t70 = ((x417*x418)<=(x419&x420));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x421 = 17;

	t71 = ((x421*x422)<=(x423&x424));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x429 = 43;
	uint32_t x430 = 135860U;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t72 = 126944240;

	t72 = ((x429*x430)<=(x431&x432));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x433 = INT8_MIN;
	volatile uint64_t x434 = 263463541459374LLU;
	static int8_t x435 = INT8_MIN;
	int32_t x436 = -322729;
	int32_t t73 = 2;

	t73 = ((x433*x434)<=(x435&x436));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x437 = -1;
	static int8_t x438 = INT8_MIN;
	uint64_t x439 = 6062028692LLU;
	int8_t x440 = INT8_MIN;

	t74 = ((x437*x438)<=(x439&x440));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x441 = 25645679U;
	int8_t x442 = INT8_MIN;
	volatile int8_t x443 = INT8_MAX;
	static uint64_t x444 = UINT64_MAX;
	int32_t t75 = -3300;

	t75 = ((x441*x442)<=(x443&x444));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x445 = -1;
	int16_t x446 = INT16_MAX;
	int8_t x447 = -1;

	t76 = ((x445*x446)<=(x447&x448));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x449 = 0;
	int32_t x450 = -1238;
	int32_t x451 = INT32_MIN;
	volatile int16_t x452 = INT16_MIN;
	volatile int32_t t77 = -23;

	t77 = ((x449*x450)<=(x451&x452));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x457 = 1;
	static int16_t x458 = INT16_MAX;
	int16_t x459 = -7025;
	volatile uint16_t x460 = UINT16_MAX;
	static volatile int32_t t78 = 11984;

	t78 = ((x457*x458)<=(x459&x460));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x465 = 74167U;
	volatile int32_t x466 = INT32_MIN;
	static volatile int16_t x467 = INT16_MIN;
	volatile int16_t x468 = -5360;
	volatile int32_t t79 = -110;

	t79 = ((x465*x466)<=(x467&x468));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x469 = 8177;
	static uint8_t x470 = 22U;
	int64_t x472 = -1LL;
	volatile int32_t t80 = -33;

	t80 = ((x469*x470)<=(x471&x472));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x473 = -977927829666414LL;
	int32_t x474 = -1;
	static volatile uint32_t x475 = UINT32_MAX;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t81 = 20736140;

	t81 = ((x473*x474)<=(x475&x476));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x477 = 0U;
	static volatile uint32_t x479 = 105469U;
	int64_t x480 = -2968749484256LL;
	int32_t t82 = -492;

	t82 = ((x477*x478)<=(x479&x480));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x482 = 98464162U;
	int32_t x484 = -2619000;
	volatile int32_t t83 = 18384;

	t83 = ((x481*x482)<=(x483&x484));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x485 = 6;
	static volatile int32_t t84 = 9;

	t84 = ((x485*x486)<=(x487&x488));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x489 = -1;
	int32_t x490 = -481739350;
	int64_t x492 = INT64_MIN;
	volatile int32_t t85 = -1793660;

	t85 = ((x489*x490)<=(x491&x492));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x493 = UINT64_MAX;
	int64_t x494 = INT64_MAX;
	uint32_t x495 = 87U;
	volatile int32_t t86 = -1607;

	t86 = ((x493*x494)<=(x495&x496));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x497 = UINT64_MAX;
	volatile int8_t x498 = INT8_MIN;
	int32_t x499 = INT32_MIN;
	static int8_t x500 = INT8_MAX;
	volatile int32_t t87 = 7811;

	t87 = ((x497*x498)<=(x499&x500));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x501 = INT8_MAX;
	int16_t x502 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	int64_t x504 = INT64_MAX;

	t88 = ((x501*x502)<=(x503&x504));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x505 = INT8_MAX;
	volatile int32_t x506 = -831;
	static volatile int32_t x507 = INT32_MIN;
	uint64_t x508 = 47096574486LLU;
	volatile int32_t t89 = 10897;

	t89 = ((x505*x506)<=(x507&x508));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x509 = UINT32_MAX;
	int32_t x510 = INT32_MAX;
	int16_t x511 = -1;
	uint8_t x512 = 115U;
	static volatile int32_t t90 = -5579;

	t90 = ((x509*x510)<=(x511&x512));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x514 = -1;
	int32_t x515 = INT32_MIN;
	volatile int8_t x516 = 1;

	t91 = ((x513*x514)<=(x515&x516));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x517 = 1U;
	int32_t x519 = INT32_MAX;
	int64_t x520 = 3547588143LL;
	volatile int32_t t92 = -69893972;

	t92 = ((x517*x518)<=(x519&x520));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x525 = UINT16_MAX;
	static int16_t x526 = INT16_MIN;
	uint32_t x527 = 45U;
	static int32_t x528 = -1;
	volatile int32_t t93 = 4847123;

	t93 = ((x525*x526)<=(x527&x528));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x529 = INT8_MIN;
	int64_t x530 = -1LL;
	int16_t x531 = 95;
	int16_t x532 = 30;
	volatile int32_t t94 = -8191434;

	t94 = ((x529*x530)<=(x531&x532));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x533 = 23U;
	volatile uint32_t x534 = 2U;
	int64_t x535 = INT64_MAX;
	static int32_t t95 = 0;

	t95 = ((x533*x534)<=(x535&x536));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x537 = INT16_MIN;
	uint16_t x539 = UINT16_MAX;
	int64_t x540 = INT64_MIN;
	static int32_t t96 = -23357141;

	t96 = ((x537*x538)<=(x539&x540));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x541 = -10;
	int16_t x542 = INT16_MAX;
	int64_t x543 = INT64_MIN;
	int8_t x544 = 13;
	static volatile int32_t t97 = 1;

	t97 = ((x541*x542)<=(x543&x544));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x549 = -260;
	uint64_t x550 = UINT64_MAX;
	uint8_t x552 = 10U;
	volatile int32_t t98 = 158847;

	t98 = ((x549*x550)<=(x551&x552));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x553 = -1;
	uint32_t x554 = 21354U;
	int8_t x555 = -1;
	volatile uint16_t x556 = UINT16_MAX;
	int32_t t99 = -319433;

	t99 = ((x553*x554)<=(x555&x556));

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

