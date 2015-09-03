#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -5198415;
uint16_t x7 = UINT16_MAX;
uint8_t x13 = 28U;
volatile int64_t x22 = INT64_MIN;
volatile int32_t t3 = 58616234;
int8_t x35 = INT8_MIN;
uint32_t x42 = 21882U;
int8_t x43 = INT8_MAX;
static int8_t x44 = -3;
volatile int32_t t7 = -6008463;
int8_t x50 = -36;
int16_t x51 = INT16_MAX;
uint64_t x52 = 46423344408LLU;
static int16_t x54 = INT16_MIN;
int16_t x57 = INT16_MIN;
int64_t x59 = INT64_MIN;
volatile uint64_t x64 = UINT64_MAX;
int16_t x65 = INT16_MIN;
volatile uint16_t x76 = 5105U;
volatile int32_t x78 = INT32_MIN;
static int8_t x107 = INT8_MIN;
volatile uint32_t x110 = UINT32_MAX;
static volatile int32_t t20 = 1;
int64_t x134 = 805LL;
volatile uint16_t x136 = 22122U;
static int8_t x137 = -5;
int32_t t24 = 649;
int64_t x153 = INT64_MIN;
int64_t x157 = -4889LL;
uint8_t x161 = UINT8_MAX;
int64_t x163 = -1LL;
int16_t x164 = INT16_MAX;
uint16_t x179 = UINT16_MAX;
int32_t x189 = INT32_MIN;
uint32_t x191 = 1U;
int8_t x197 = INT8_MIN;
volatile int32_t t33 = -6;
static volatile int16_t x210 = INT16_MIN;
uint16_t x217 = 10U;
int32_t t38 = -8188;
volatile uint32_t x231 = UINT32_MAX;
volatile int32_t t40 = -47592450;
uint32_t x241 = 12U;
int32_t t42 = -13;
volatile int32_t t43 = 12272;
int64_t x270 = -1LL;
int64_t x280 = INT64_MIN;
volatile int32_t t47 = 367;
static volatile int8_t x293 = INT8_MIN;
static int16_t x294 = -5;
uint64_t x305 = UINT64_MAX;
uint64_t x311 = 1409669020341LLU;
uint32_t x317 = 5U;
static int8_t x319 = 1;
uint64_t x323 = UINT64_MAX;
volatile uint32_t x324 = 27U;
static uint64_t x333 = UINT64_MAX;
int8_t x337 = -1;
uint16_t x338 = 25777U;
volatile int32_t t55 = -38449;
uint8_t x341 = 16U;
uint64_t x344 = 2994041894816995LLU;
int8_t x356 = INT8_MAX;
int32_t x369 = 15887962;
int32_t x386 = 22267;
int16_t x388 = INT16_MIN;
int32_t t61 = 15843001;
uint8_t x389 = 8U;
static int32_t t63 = -47;
uint8_t x405 = UINT8_MAX;
uint64_t x407 = 0LLU;
static int32_t t66 = -14805697;
static uint8_t x413 = UINT8_MAX;
static volatile int32_t x424 = INT32_MAX;
int32_t x429 = INT32_MIN;
uint16_t x433 = 0U;
int8_t x434 = INT8_MIN;
static int32_t t71 = 72398;
volatile int16_t x440 = INT16_MIN;
int16_t x443 = INT16_MIN;
int32_t t76 = 56629;
int8_t x462 = INT8_MIN;
int32_t x470 = -7376162;
volatile int32_t x476 = -411080;
volatile uint64_t x488 = 662775757063041LLU;
volatile int32_t t83 = -4;
static uint8_t x498 = UINT8_MAX;
static volatile int8_t x501 = INT8_MAX;
int32_t t85 = -8;
int8_t x506 = INT8_MAX;
volatile int64_t x511 = -1LL;
int64_t x515 = -236334909362LL;
static uint16_t x516 = 13U;
int32_t t88 = 983233987;
static volatile int16_t x517 = 256;
volatile int64_t x520 = 1038516439953558380LL;
int16_t x530 = -1;
uint64_t x537 = 457644927172540840LLU;
volatile uint64_t x542 = 14426LLU;
static volatile int32_t t93 = -2973;
volatile int8_t x545 = 1;
int8_t x549 = 1;
volatile int32_t x550 = 1917;
volatile uint32_t x551 = 2343U;
static int32_t t95 = 184;
int16_t x553 = INT16_MAX;
volatile int64_t x558 = 111738123302572LL;
static int32_t x559 = -1;
int16_t x561 = -63;
int16_t x566 = INT16_MIN;
uint16_t x567 = 12U;


void f0(void) {
	int64_t x2 = 36523LL;
	int16_t x3 = INT16_MIN;
	volatile int8_t x4 = 7;
	static volatile int32_t t0 = -20268;

	t0 = ((x1+x2)<(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 10691U;
	static int32_t x6 = INT32_MIN;
	static int16_t x8 = -5551;
	int32_t t1 = 69338;

	t1 = ((x5+x6)<(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = INT64_MIN;
	int64_t x15 = -1LL;
	uint8_t x16 = 8U;
	volatile int32_t t2 = 33747562;

	t2 = ((x13+x14)<(x15*x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x23 = INT32_MAX;
	uint64_t x24 = UINT64_MAX;

	t3 = ((x21+x22)<(x23*x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = INT8_MAX;
	static int16_t x26 = 577;
	volatile int8_t x27 = INT8_MIN;
	volatile uint8_t x28 = UINT8_MAX;
	static volatile int32_t t4 = -1;

	t4 = ((x25+x26)<(x27*x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x33 = INT8_MIN;
	uint64_t x34 = UINT64_MAX;
	int8_t x36 = INT8_MAX;
	static int32_t t5 = -1872;

	t5 = ((x33+x34)<(x35*x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MAX;
	static int8_t x40 = 1;
	int32_t t6 = 1;

	t6 = ((x37+x38)<(x39*x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;

	t7 = ((x41+x42)<(x43*x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = -3;
	int32_t t8 = 7212187;

	t8 = ((x49+x50)<(x51*x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	int16_t x55 = 2;
	int32_t x56 = -40196910;
	volatile int32_t t9 = -183190358;

	t9 = ((x53+x54)<(x55*x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x58 = 30U;
	uint64_t x60 = 195663853009LLU;
	volatile int32_t t10 = 331316;

	t10 = ((x57+x58)<(x59*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = -1;
	volatile int16_t x62 = INT16_MIN;
	int16_t x63 = 1;
	int32_t t11 = 17785665;

	t11 = ((x61+x62)<(x63*x64));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x66 = INT32_MAX;
	static uint16_t x67 = 2653U;
	int16_t x68 = INT16_MAX;
	volatile int32_t t12 = 119991;

	t12 = ((x65+x66)<(x67*x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -1;
	volatile int32_t x74 = -75658;
	uint8_t x75 = 57U;
	static int32_t t13 = 1;

	t13 = ((x73+x74)<(x75*x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = INT64_MAX;
	uint64_t x79 = UINT64_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t14 = -12848;

	t14 = ((x77+x78)<(x79*x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = 27U;
	static int8_t x86 = -60;
	int32_t x87 = 2144;
	volatile int16_t x88 = -1;
	int32_t t15 = -4;

	t15 = ((x85+x86)<(x87*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = -1;
	static uint32_t x102 = UINT32_MAX;
	uint64_t x103 = UINT64_MAX;
	static int16_t x104 = INT16_MAX;
	volatile int32_t t16 = -954;

	t16 = ((x101+x102)<(x103*x104));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x105 = 54U;
	uint64_t x106 = UINT64_MAX;
	int8_t x108 = INT8_MAX;
	int32_t t17 = 142698896;

	t17 = ((x105+x106)<(x107*x108));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x109 = 2U;
	int8_t x111 = INT8_MAX;
	int64_t x112 = -1LL;
	static volatile int32_t t18 = -124998;

	t18 = ((x109+x110)<(x111*x112));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x121 = INT32_MIN;
	uint16_t x122 = 38U;
	static uint16_t x123 = UINT16_MAX;
	uint64_t x124 = UINT64_MAX;
	int32_t t19 = -645600329;

	t19 = ((x121+x122)<(x123*x124));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = INT64_MAX;
	uint8_t x130 = 0U;
	static int32_t x131 = -1;
	int64_t x132 = -342565100660711LL;

	t20 = ((x129+x130)<(x131*x132));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	static int32_t t21 = -249455899;

	t21 = ((x133+x134)<(x135*x136));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x138 = 1371597764291944325LLU;
	int16_t x139 = INT16_MAX;
	uint16_t x140 = 24U;
	volatile int32_t t22 = 501480;

	t22 = ((x137+x138)<(x139*x140));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = INT8_MIN;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = 1488LL;
	int16_t x144 = INT16_MIN;
	int32_t t23 = -15854;

	t23 = ((x141+x142)<(x143*x144));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = INT8_MIN;
	uint8_t x146 = 83U;
	static volatile int64_t x147 = 1166LL;
	int32_t x148 = INT32_MIN;

	t24 = ((x145+x146)<(x147*x148));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x149 = UINT32_MAX;
	volatile uint64_t x150 = 818838902554711LLU;
	static int64_t x151 = -300401925627LL;
	static volatile int16_t x152 = -1;
	int32_t t25 = 1;

	t25 = ((x149+x150)<(x151*x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x154 = 20710;
	uint64_t x155 = 167LLU;
	int32_t x156 = INT32_MIN;
	volatile int32_t t26 = 384;

	t26 = ((x153+x154)<(x155*x156));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 119LLU;
	int64_t x160 = -1LL;
	int32_t t27 = -103586507;

	t27 = ((x157+x158)<(x159*x160));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x162 = -1;
	static volatile int32_t t28 = -55096393;

	t28 = ((x161+x162)<(x163*x164));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MAX;
	static uint8_t x180 = 2U;
	static volatile int32_t t29 = -1;

	t29 = ((x177+x178)<(x179*x180));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x181 = 4U;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 2U;
	int16_t x184 = INT16_MIN;
	static int32_t t30 = -50;

	t30 = ((x181+x182)<(x183*x184));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x185 = 49256927864813LLU;
	int32_t x186 = -1173;
	static int64_t x187 = 1132570138482LL;
	int8_t x188 = INT8_MAX;
	volatile int32_t t31 = 888499;

	t31 = ((x185+x186)<(x187*x188));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x190 = UINT64_MAX;
	volatile int16_t x192 = INT16_MIN;
	int32_t t32 = -64596288;

	t32 = ((x189+x190)<(x191*x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x198 = INT8_MAX;
	static int64_t x199 = -1LL;
	volatile int8_t x200 = INT8_MAX;

	t33 = ((x197+x198)<(x199*x200));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x201 = INT16_MAX;
	volatile uint64_t x202 = 964792156967276911LLU;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t34 = -2;

	t34 = ((x201+x202)<(x203*x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x209 = -1;
	int64_t x211 = INT64_MIN;
	static uint64_t x212 = 235054191415LLU;
	volatile int32_t t35 = -41051;

	t35 = ((x209+x210)<(x211*x212));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x213 = 2U;
	volatile int64_t x214 = -1LL;
	uint32_t x215 = 555U;
	int32_t x216 = 10077105;
	volatile int32_t t36 = 0;

	t36 = ((x213+x214)<(x215*x216));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x218 = -1;
	int64_t x219 = -7401681386158LL;
	int8_t x220 = INT8_MAX;
	volatile int32_t t37 = -78544;

	t37 = ((x217+x218)<(x219*x220));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x225 = -127;
	uint32_t x226 = 269U;
	int8_t x227 = -5;
	uint64_t x228 = 512382938658LLU;

	t38 = ((x225+x226)<(x227*x228));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x229 = 7U;
	volatile int16_t x230 = -1;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t39 = 1;

	t39 = ((x229+x230)<(x231*x232));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = 33945545;
	int8_t x235 = INT8_MAX;
	uint16_t x236 = UINT16_MAX;

	t40 = ((x233+x234)<(x235*x236));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x242 = UINT64_MAX;
	static int8_t x243 = INT8_MIN;
	volatile uint16_t x244 = 11U;
	volatile int32_t t41 = -7598;

	t41 = ((x241+x242)<(x243*x244));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MAX;
	static volatile uint64_t x251 = UINT64_MAX;
	uint64_t x252 = UINT64_MAX;

	t42 = ((x249+x250)<(x251*x252));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x265 = -1LL;
	static int32_t x266 = 684;
	static int8_t x267 = INT8_MIN;
	uint32_t x268 = 19174U;

	t43 = ((x265+x266)<(x267*x268));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x269 = 9050LL;
	static uint64_t x271 = 465913809335LLU;
	uint32_t x272 = 24932970U;
	volatile int32_t t44 = -79992571;

	t44 = ((x269+x270)<(x271*x272));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MAX;
	static int32_t x275 = 3;
	int16_t x276 = INT16_MIN;
	int32_t t45 = -1073787;

	t45 = ((x273+x274)<(x275*x276));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x277 = -1;
	int16_t x278 = 1;
	uint64_t x279 = UINT64_MAX;
	int32_t t46 = 5055847;

	t46 = ((x277+x278)<(x279*x280));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x281 = INT64_MIN;
	static int32_t x282 = INT32_MAX;
	volatile uint32_t x283 = UINT32_MAX;
	uint64_t x284 = 50615LLU;

	t47 = ((x281+x282)<(x283*x284));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x295 = 16U;
	volatile int8_t x296 = -15;
	volatile int32_t t48 = 6755;

	t48 = ((x293+x294)<(x295*x296));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = 10;
	int32_t t49 = 1699;

	t49 = ((x305+x306)<(x307*x308));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x309 = UINT8_MAX;
	uint64_t x310 = 3270819911441761LLU;
	static volatile int16_t x312 = 607;
	volatile int32_t t50 = 5;

	t50 = ((x309+x310)<(x311*x312));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x318 = 0;
	int16_t x320 = INT16_MIN;
	int32_t t51 = 24;

	t51 = ((x317+x318)<(x319*x320));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x321 = 2;
	static int32_t x322 = -121035;
	static int32_t t52 = -600187;

	t52 = ((x321+x322)<(x323*x324));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x329 = 42U;
	static uint64_t x330 = 6780895LLU;
	volatile int32_t x331 = 6551;
	static uint16_t x332 = 11U;
	volatile int32_t t53 = 71652;

	t53 = ((x329+x330)<(x331*x332));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x334 = 1LLU;
	volatile uint8_t x335 = UINT8_MAX;
	int64_t x336 = 7499228807LL;
	static volatile int32_t t54 = 1915050;

	t54 = ((x333+x334)<(x335*x336));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x339 = INT8_MAX;
	int32_t x340 = 29998;

	t55 = ((x337+x338)<(x339*x340));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MIN;
	volatile int32_t t56 = 14053;

	t56 = ((x341+x342)<(x343*x344));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x349 = -1;
	static volatile uint16_t x350 = UINT16_MAX;
	uint16_t x351 = 0U;
	int16_t x352 = 3486;
	static int32_t t57 = 531808;

	t57 = ((x349+x350)<(x351*x352));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x353 = -60;
	int8_t x354 = -6;
	static volatile int64_t x355 = -1LL;
	volatile int32_t t58 = -887199652;

	t58 = ((x353+x354)<(x355*x356));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x361 = INT8_MIN;
	static volatile int8_t x362 = -1;
	volatile int64_t x363 = -1LL;
	int8_t x364 = INT8_MIN;
	int32_t t59 = -213;

	t59 = ((x361+x362)<(x363*x364));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x370 = -998254548;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = 1;
	int32_t t60 = -22;

	t60 = ((x369+x370)<(x371*x372));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x385 = 77838412LLU;
	uint16_t x387 = UINT16_MAX;

	t61 = ((x385+x386)<(x387*x388));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	static uint64_t x392 = UINT64_MAX;
	int32_t t62 = 793504114;

	t62 = ((x389+x390)<(x391*x392));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x393 = 192740;
	int8_t x394 = 0;
	static uint8_t x395 = UINT8_MAX;
	static uint32_t x396 = 19698662U;

	t63 = ((x393+x394)<(x395*x396));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x401 = 8719569469094LLU;
	volatile int16_t x402 = -1;
	static uint32_t x403 = 776639U;
	uint64_t x404 = 83815072616LLU;
	int32_t t64 = 4552113;

	t64 = ((x401+x402)<(x403*x404));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x406 = 3486U;
	uint8_t x408 = 30U;
	int32_t t65 = -36816;

	t65 = ((x405+x406)<(x407*x408));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x409 = 3U;
	int8_t x410 = INT8_MAX;
	uint16_t x411 = 8U;
	int64_t x412 = 505825045296LL;

	t66 = ((x409+x410)<(x411*x412));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	uint64_t x416 = UINT64_MAX;
	volatile int32_t t67 = -945277;

	t67 = ((x413+x414)<(x415*x416));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x417 = 1U;
	volatile uint64_t x418 = 2459417LLU;
	int64_t x419 = -1LL;
	volatile int32_t x420 = INT32_MAX;
	int32_t t68 = -5518360;

	t68 = ((x417+x418)<(x419*x420));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x421 = INT16_MAX;
	static uint8_t x422 = 59U;
	int32_t x423 = -1;
	int32_t t69 = 8339;

	t69 = ((x421+x422)<(x423*x424));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x430 = UINT64_MAX;
	int16_t x431 = -2666;
	volatile uint16_t x432 = UINT16_MAX;
	volatile int32_t t70 = -804;

	t70 = ((x429+x430)<(x431*x432));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x435 = INT8_MIN;
	int8_t x436 = INT8_MIN;

	t71 = ((x433+x434)<(x435*x436));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x437 = -34685188859911LL;
	uint16_t x438 = UINT16_MAX;
	static volatile int16_t x439 = INT16_MIN;
	volatile int32_t t72 = -1947125;

	t72 = ((x437+x438)<(x439*x440));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x441 = INT16_MIN;
	int64_t x442 = INT64_MAX;
	uint16_t x444 = 1215U;
	volatile int32_t t73 = 641430;

	t73 = ((x441+x442)<(x443*x444));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x445 = INT8_MIN;
	volatile int64_t x446 = -1LL;
	int32_t x447 = INT32_MIN;
	static uint32_t x448 = 6U;
	volatile int32_t t74 = -287069;

	t74 = ((x445+x446)<(x447*x448));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x453 = -953776805395LL;
	volatile int8_t x454 = INT8_MAX;
	int32_t x455 = 1;
	static volatile uint64_t x456 = 141155033103648228LLU;
	static int32_t t75 = -36207057;

	t75 = ((x453+x454)<(x455*x456));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x457 = 368;
	int32_t x458 = -1;
	uint32_t x459 = 62444U;
	uint8_t x460 = 0U;

	t76 = ((x457+x458)<(x459*x460));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x461 = -75;
	int64_t x463 = -30883777970LL;
	int8_t x464 = -50;
	int32_t t77 = -118340;

	t77 = ((x461+x462)<(x463*x464));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x465 = UINT8_MAX;
	static uint8_t x466 = 16U;
	int32_t x467 = -11309;
	int8_t x468 = -1;
	volatile int32_t t78 = -261;

	t78 = ((x465+x466)<(x467*x468));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x469 = UINT32_MAX;
	int16_t x471 = INT16_MIN;
	volatile int8_t x472 = INT8_MAX;
	volatile int32_t t79 = 5;

	t79 = ((x469+x470)<(x471*x472));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x473 = 289;
	uint8_t x474 = 53U;
	static volatile uint8_t x475 = 6U;
	int32_t t80 = 275005746;

	t80 = ((x473+x474)<(x475*x476));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x481 = 57655952LL;
	int32_t x482 = 48223;
	uint32_t x483 = 2U;
	static uint64_t x484 = 62LLU;
	int32_t t81 = -2983997;

	t81 = ((x481+x482)<(x483*x484));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x485 = -1;
	static int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	static int32_t t82 = 180673836;

	t82 = ((x485+x486)<(x487*x488));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x489 = -1;
	static volatile uint16_t x490 = UINT16_MAX;
	int64_t x491 = 962278LL;
	volatile int16_t x492 = INT16_MIN;

	t83 = ((x489+x490)<(x491*x492));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x497 = -1LL;
	int16_t x499 = INT16_MIN;
	volatile int16_t x500 = -1;
	static volatile int32_t t84 = -3;

	t84 = ((x497+x498)<(x499*x500));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x502 = INT16_MAX;
	static int64_t x503 = 1LL;
	int32_t x504 = -1;

	t85 = ((x501+x502)<(x503*x504));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x505 = INT32_MIN;
	uint64_t x507 = UINT64_MAX;
	int16_t x508 = 1581;
	static volatile int32_t t86 = -9;

	t86 = ((x505+x506)<(x507*x508));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x509 = -68;
	static uint64_t x510 = UINT64_MAX;
	int16_t x512 = INT16_MIN;
	volatile int32_t t87 = 43814929;

	t87 = ((x509+x510)<(x511*x512));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x513 = -23583110467705216LL;
	uint64_t x514 = UINT64_MAX;

	t88 = ((x513+x514)<(x515*x516));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x518 = UINT16_MAX;
	int16_t x519 = -1;
	volatile int32_t t89 = -140;

	t89 = ((x517+x518)<(x519*x520));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x525 = INT16_MAX;
	static volatile int16_t x526 = INT16_MIN;
	volatile int16_t x527 = INT16_MIN;
	uint64_t x528 = 54LLU;
	int32_t t90 = 1806;

	t90 = ((x525+x526)<(x527*x528));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x529 = -27035;
	static volatile int32_t x531 = -1;
	uint32_t x532 = 2993U;
	volatile int32_t t91 = -200;

	t91 = ((x529+x530)<(x531*x532));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x538 = 162U;
	int32_t x539 = -1;
	volatile int16_t x540 = 12010;
	static int32_t t92 = -274582205;

	t92 = ((x537+x538)<(x539*x540));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x541 = 47U;
	uint16_t x543 = 0U;
	volatile uint8_t x544 = UINT8_MAX;

	t93 = ((x541+x542)<(x543*x544));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x546 = -37030878;
	int32_t x547 = -33;
	int8_t x548 = -1;
	static int32_t t94 = 31;

	t94 = ((x545+x546)<(x547*x548));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x552 = 1645881058714499LLU;

	t95 = ((x549+x550)<(x551*x552));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x554 = 24U;
	static volatile uint64_t x555 = 6887452LLU;
	int64_t x556 = INT64_MIN;
	int32_t t96 = -3011947;

	t96 = ((x553+x554)<(x555*x556));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x557 = -379;
	int32_t x560 = INT32_MAX;
	volatile int32_t t97 = 0;

	t97 = ((x557+x558)<(x559*x560));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x562 = UINT8_MAX;
	int32_t x563 = -1;
	int32_t x564 = -1;
	int32_t t98 = -18124;

	t98 = ((x561+x562)<(x563*x564));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x565 = 10735921538LL;
	uint64_t x568 = 5297LLU;
	static volatile int32_t t99 = -313374;

	t99 = ((x565+x566)<(x567*x568));

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

