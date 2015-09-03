#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -1;
int8_t x8 = INT8_MIN;
volatile int32_t t1 = -17;
int32_t x38 = INT32_MAX;
int16_t x39 = -996;
int8_t x51 = -1;
int16_t x54 = -1;
int8_t x55 = INT8_MIN;
uint16_t x63 = 1017U;
volatile int32_t t8 = 14;
static int8_t x72 = 4;
uint8_t x81 = UINT8_MAX;
static int64_t x82 = INT64_MAX;
int16_t x84 = -1;
static uint64_t x85 = 110LLU;
int8_t x98 = -1;
int32_t t18 = -5;
uint64_t x124 = 114393770883LLU;
uint8_t x127 = 0U;
volatile int32_t t20 = -2578;
int64_t x129 = INT64_MIN;
uint32_t x132 = 14U;
uint64_t x135 = 541LLU;
volatile int32_t t22 = 1430;
static volatile int64_t x141 = -12LL;
int32_t x145 = INT32_MAX;
volatile uint32_t x156 = 2U;
uint8_t x157 = UINT8_MAX;
static volatile int32_t x159 = 6;
int16_t x165 = INT16_MAX;
static uint16_t x167 = 25257U;
static int8_t x168 = INT8_MIN;
static uint8_t x169 = 3U;
static uint8_t x170 = UINT8_MAX;
int32_t x181 = INT32_MIN;
int8_t x182 = 11;
int16_t x185 = -1;
int64_t x186 = 0LL;
int16_t x190 = -1;
int16_t x192 = INT16_MAX;
volatile int32_t x194 = INT32_MAX;
static int16_t x196 = 36;
volatile int8_t x203 = INT8_MIN;
volatile int64_t x221 = -1LL;
static int64_t x222 = -3855891188655LL;
int64_t x223 = -7544LL;
uint8_t x224 = 76U;
volatile int32_t x233 = INT32_MIN;
uint32_t x241 = 125882U;
volatile int64_t x245 = INT64_MIN;
int8_t x249 = 1;
static int32_t t46 = 828;
static uint32_t x261 = UINT32_MAX;
static volatile uint32_t x264 = 940722U;
uint32_t x277 = 3345414U;
int8_t x280 = INT8_MAX;
static int32_t t51 = -105755767;
uint64_t x294 = UINT64_MAX;
static volatile uint8_t x295 = 1U;
int32_t t53 = -4795849;
int64_t x300 = -1LL;
int8_t x311 = INT8_MAX;
volatile uint64_t x312 = 29LLU;
static int32_t x313 = INT32_MIN;
static int16_t x325 = INT16_MIN;
static int32_t t60 = -970098;
volatile int32_t t62 = -6370;
volatile int16_t x343 = 1940;
int8_t x345 = 11;
uint16_t x351 = 2U;
volatile int16_t x353 = -16224;
volatile int32_t t66 = -612;
int8_t x360 = 1;
static int64_t x369 = -65266LL;
volatile uint64_t x371 = 13666542462857LLU;
int32_t x377 = INT32_MAX;
int16_t x380 = INT16_MAX;
int32_t t71 = 2844;
int16_t x385 = -383;
int32_t x387 = 0;
static volatile int32_t t72 = 118551;
static int8_t x390 = INT8_MIN;
int32_t t73 = 13535;
int64_t x404 = -1LL;
uint32_t x412 = 1U;
int32_t x415 = -191027242;
volatile uint64_t x416 = UINT64_MAX;
volatile int32_t t80 = 203;
uint64_t x431 = 43LLU;
volatile int32_t t81 = -17690;
int16_t x434 = -1;
static int32_t x441 = 832915390;
uint64_t x442 = 7LLU;
int32_t x462 = 640562;
static volatile int32_t t88 = -37421;
int8_t x470 = -1;
uint16_t x474 = 9U;
static int8_t x479 = -1;
volatile int32_t t91 = 3;
uint32_t x492 = 95962064U;
int32_t x499 = -1;
int32_t t94 = 367503749;
uint8_t x513 = 11U;
uint32_t x523 = UINT32_MAX;
int16_t x530 = 45;
uint8_t x531 = 31U;


void f0(void) {
	int8_t x5 = INT8_MAX;
	static uint8_t x6 = 2U;
	static int32_t t0 = 3145455;

	t0 = ((x5^x6)<(x7*x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = INT32_MAX;
	static int16_t x26 = -1;
	uint16_t x27 = 82U;
	int64_t x28 = -1LL;

	t1 = ((x25^x26)<(x27*x28));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x33 = 2608LL;
	int8_t x34 = 3;
	uint16_t x35 = 889U;
	volatile int16_t x36 = 5;
	volatile int32_t t2 = 97166;

	t2 = ((x33^x34)<(x35*x36));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x37 = 931224LLU;
	static volatile uint16_t x40 = 14210U;
	volatile int32_t t3 = -1006;

	t3 = ((x37^x38)<(x39*x40));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x41 = INT16_MIN;
	static uint16_t x42 = 243U;
	static uint32_t x43 = 438095007U;
	int8_t x44 = INT8_MAX;
	int32_t t4 = 347;

	t4 = ((x41^x42)<(x43*x44));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x45 = -2;
	static volatile int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	int8_t x48 = -4;
	int32_t t5 = -2311;

	t5 = ((x45^x46)<(x47*x48));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MIN;
	int64_t x52 = INT64_MAX;
	int32_t t6 = -3616328;

	t6 = ((x49^x50)<(x51*x52));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x53 = -1LL;
	static int64_t x56 = -1LL;
	int32_t t7 = -1431338;

	t7 = ((x53^x54)<(x55*x56));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x61 = INT8_MIN;
	uint32_t x62 = 7993U;
	int8_t x64 = -1;

	t8 = ((x61^x62)<(x63*x64));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x65 = 5U;
	static int8_t x66 = -1;
	uint32_t x67 = 220U;
	int8_t x68 = INT8_MIN;
	int32_t t9 = -67797;

	t9 = ((x65^x66)<(x67*x68));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = 19U;
	int64_t x70 = -10724247LL;
	int16_t x71 = INT16_MAX;
	int32_t t10 = 423;

	t10 = ((x69^x70)<(x71*x72));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = -1;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	int8_t x76 = -1;
	volatile int32_t t11 = 181;

	t11 = ((x73^x74)<(x75*x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x83 = 28912232U;
	int32_t t12 = 3472685;

	t12 = ((x81^x82)<(x83*x84));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x86 = 12LL;
	int16_t x87 = INT16_MIN;
	volatile int16_t x88 = -1;
	volatile int32_t t13 = -13433758;

	t13 = ((x85^x86)<(x87*x88));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile uint8_t x90 = UINT8_MAX;
	static int64_t x91 = 7889LL;
	volatile uint8_t x92 = UINT8_MAX;
	volatile int32_t t14 = 3388744;

	t14 = ((x89^x90)<(x91*x92));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x93 = INT8_MIN;
	uint8_t x94 = UINT8_MAX;
	uint16_t x95 = 126U;
	static int64_t x96 = -6418655LL;
	static int32_t t15 = -11828274;

	t15 = ((x93^x94)<(x95*x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = INT32_MIN;
	int32_t x99 = -1;
	int32_t x100 = -1;
	int32_t t16 = -934870461;

	t16 = ((x97^x98)<(x99*x100));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x105 = INT32_MIN;
	volatile int8_t x106 = -54;
	int8_t x107 = -1;
	int16_t x108 = INT16_MIN;
	int32_t t17 = 62;

	t17 = ((x105^x106)<(x107*x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x113 = 7506U;
	uint16_t x114 = 50U;
	static uint16_t x115 = UINT16_MAX;
	uint64_t x116 = 25101735960838502LLU;

	t18 = ((x113^x114)<(x115*x116));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x121 = INT32_MAX;
	int32_t x122 = INT32_MAX;
	uint16_t x123 = UINT16_MAX;
	static volatile int32_t t19 = -1;

	t19 = ((x121^x122)<(x123*x124));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x125 = -1;
	static int8_t x126 = 0;
	uint16_t x128 = UINT16_MAX;

	t20 = ((x125^x126)<(x127*x128));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x130 = 79324030U;
	volatile uint8_t x131 = 15U;
	int32_t t21 = -236140;

	t21 = ((x129^x130)<(x131*x132));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = INT8_MAX;
	volatile int64_t x134 = INT64_MIN;
	static volatile int32_t x136 = INT32_MIN;

	t22 = ((x133^x134)<(x135*x136));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x142 = 1U;
	uint16_t x143 = UINT16_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t23 = -1;

	t23 = ((x141^x142)<(x143*x144));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x146 = 8U;
	static int8_t x147 = -5;
	static int16_t x148 = -14518;
	int32_t t24 = -27493;

	t24 = ((x145^x146)<(x147*x148));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x153 = INT32_MAX;
	static int64_t x154 = INT64_MIN;
	int16_t x155 = 1;
	static volatile int32_t t25 = -16480825;

	t25 = ((x153^x154)<(x155*x156));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x158 = 9;
	uint8_t x160 = 28U;
	volatile int32_t t26 = 1065197489;

	t26 = ((x157^x158)<(x159*x160));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x161 = 1U;
	static int64_t x162 = INT64_MAX;
	static int32_t x163 = -1;
	static int32_t x164 = 29299294;
	int32_t t27 = 720472795;

	t27 = ((x161^x162)<(x163*x164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x166 = INT8_MIN;
	int32_t t28 = -71758966;

	t28 = ((x165^x166)<(x167*x168));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x171 = INT32_MAX;
	int8_t x172 = -1;
	static volatile int32_t t29 = 57;

	t29 = ((x169^x170)<(x171*x172));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x183 = -14;
	static volatile int16_t x184 = 0;
	volatile int32_t t30 = 0;

	t30 = ((x181^x182)<(x183*x184));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x187 = 151295677LL;
	uint8_t x188 = 0U;
	volatile int32_t t31 = -34129;

	t31 = ((x185^x186)<(x187*x188));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x189 = UINT8_MAX;
	volatile uint32_t x191 = UINT32_MAX;
	volatile int32_t t32 = -1;

	t32 = ((x189^x190)<(x191*x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int64_t x195 = -1LL;
	volatile int32_t t33 = 69971131;

	t33 = ((x193^x194)<(x195*x196));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x197 = 844U;
	int16_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = -130;
	volatile int32_t t34 = -103549;

	t34 = ((x197^x198)<(x199*x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MIN;
	volatile int16_t x204 = 26;
	volatile int32_t t35 = -60418;

	t35 = ((x201^x202)<(x203*x204));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 7U;
	int64_t x207 = -1LL;
	uint16_t x208 = 224U;
	volatile int32_t t36 = 351;

	t36 = ((x205^x206)<(x207*x208));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MAX;
	int16_t x211 = -35;
	int16_t x212 = 1967;
	int32_t t37 = 226;

	t37 = ((x209^x210)<(x211*x212));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t t38 = -5024;

	t38 = ((x221^x222)<(x223*x224));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x225 = -1;
	int32_t x226 = -1;
	uint32_t x227 = 1134915U;
	static int8_t x228 = INT8_MAX;
	int32_t t39 = -1;

	t39 = ((x225^x226)<(x227*x228));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	volatile uint64_t x232 = 1207919425386283158LLU;
	static int32_t t40 = 537;

	t40 = ((x229^x230)<(x231*x232));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x234 = 1;
	volatile int8_t x235 = INT8_MIN;
	uint8_t x236 = 0U;
	static int32_t t41 = -50247;

	t41 = ((x233^x234)<(x235*x236));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x237 = INT64_MIN;
	uint16_t x238 = 4U;
	int8_t x239 = -3;
	int32_t x240 = -1;
	volatile int32_t t42 = -319742;

	t42 = ((x237^x238)<(x239*x240));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x242 = INT64_MAX;
	static int64_t x243 = -1LL;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t43 = 128674166;

	t43 = ((x241^x242)<(x243*x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x246 = 16811515631519695LL;
	static volatile uint64_t x247 = UINT64_MAX;
	uint64_t x248 = 10926758050LLU;
	static volatile int32_t t44 = 1;

	t44 = ((x245^x246)<(x247*x248));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x250 = 311U;
	int16_t x251 = INT16_MIN;
	int16_t x252 = -87;
	int32_t t45 = -6350;

	t45 = ((x249^x250)<(x251*x252));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x253 = INT16_MAX;
	volatile int32_t x254 = INT32_MIN;
	int32_t x255 = -1;
	int16_t x256 = -1;

	t46 = ((x253^x254)<(x255*x256));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x262 = 16248U;
	static int32_t x263 = -1;
	static volatile int32_t t47 = 56705974;

	t47 = ((x261^x262)<(x263*x264));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x273 = 706006310LLU;
	uint32_t x274 = 2900U;
	int16_t x275 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;
	int32_t t48 = -314;

	t48 = ((x273^x274)<(x275*x276));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x278 = UINT8_MAX;
	volatile uint32_t x279 = UINT32_MAX;
	int32_t t49 = -822500913;

	t49 = ((x277^x278)<(x279*x280));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x281 = UINT16_MAX;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = INT8_MIN;
	int16_t x284 = 42;
	int32_t t50 = 26574980;

	t50 = ((x281^x282)<(x283*x284));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x285 = 564875904U;
	static uint32_t x286 = 764U;
	int32_t x287 = -12;
	uint32_t x288 = UINT32_MAX;

	t51 = ((x285^x286)<(x287*x288));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x289 = 0;
	static int16_t x290 = INT16_MIN;
	int64_t x291 = -10597130441026723LL;
	int16_t x292 = -1;
	volatile int32_t t52 = 1;

	t52 = ((x289^x290)<(x291*x292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x293 = INT8_MIN;
	volatile uint32_t x296 = 118U;

	t53 = ((x293^x294)<(x295*x296));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x297 = -1;
	static int8_t x298 = 5;
	int32_t x299 = INT32_MIN;
	static volatile int32_t t54 = -48950;

	t54 = ((x297^x298)<(x299*x300));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x301 = INT32_MIN;
	uint8_t x302 = 113U;
	volatile int64_t x303 = INT64_MIN;
	uint64_t x304 = 20540459146LLU;
	int32_t t55 = 1015677;

	t55 = ((x301^x302)<(x303*x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x309 = UINT64_MAX;
	volatile uint64_t x310 = UINT64_MAX;
	int32_t t56 = 1;

	t56 = ((x309^x310)<(x311*x312));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x314 = 101853U;
	static int16_t x315 = INT16_MIN;
	int8_t x316 = -8;
	static volatile int32_t t57 = 2591520;

	t57 = ((x313^x314)<(x315*x316));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x317 = -1LL;
	uint8_t x318 = 0U;
	int64_t x319 = -1184714895683708LL;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t58 = -1693;

	t58 = ((x317^x318)<(x319*x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = -1;
	uint64_t x322 = 537171688991LLU;
	uint16_t x323 = 774U;
	static volatile uint8_t x324 = 115U;
	static int32_t t59 = 23930804;

	t59 = ((x321^x322)<(x323*x324));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x326 = 5U;
	static uint16_t x327 = 2972U;
	uint64_t x328 = 138LLU;

	t60 = ((x325^x326)<(x327*x328));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 25U;
	int64_t x335 = -135068102644053LL;
	static int16_t x336 = -8127;
	volatile int32_t t61 = 1966133;

	t61 = ((x333^x334)<(x335*x336));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x337 = 3126978;
	int8_t x338 = INT8_MIN;
	static int16_t x339 = INT16_MIN;
	uint64_t x340 = 51890923936327LLU;

	t62 = ((x337^x338)<(x339*x340));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x341 = INT32_MAX;
	int64_t x342 = 5LL;
	uint64_t x344 = UINT64_MAX;
	static volatile int32_t t63 = 30638;

	t63 = ((x341^x342)<(x343*x344));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x346 = UINT8_MAX;
	volatile int16_t x347 = -1;
	uint8_t x348 = 1U;
	static volatile int32_t t64 = -283896;

	t64 = ((x345^x346)<(x347*x348));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x349 = INT16_MAX;
	int16_t x350 = INT16_MAX;
	static volatile int8_t x352 = INT8_MIN;
	volatile int32_t t65 = 3;

	t65 = ((x349^x350)<(x351*x352));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x354 = INT32_MIN;
	uint32_t x355 = 10741495U;
	int16_t x356 = INT16_MIN;

	t66 = ((x353^x354)<(x355*x356));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x357 = 14U;
	int16_t x358 = -294;
	int32_t x359 = -1;
	int32_t t67 = -114822069;

	t67 = ((x357^x358)<(x359*x360));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x370 = INT32_MAX;
	int8_t x372 = INT8_MAX;
	int32_t t68 = 9;

	t68 = ((x369^x370)<(x371*x372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x373 = INT32_MIN;
	volatile int32_t x374 = 21854696;
	int32_t x375 = -219252;
	static volatile int32_t x376 = -1;
	volatile int32_t t69 = 4;

	t69 = ((x373^x374)<(x375*x376));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x378 = 2858843155800LL;
	uint64_t x379 = 4298397LLU;
	volatile int32_t t70 = -855888;

	t70 = ((x377^x378)<(x379*x380));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int32_t x382 = -48;
	static uint16_t x383 = 123U;
	uint16_t x384 = 11388U;

	t71 = ((x381^x382)<(x383*x384));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x386 = INT32_MIN;
	int32_t x388 = -135773;

	t72 = ((x385^x386)<(x387*x388));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x389 = 1;
	int8_t x391 = INT8_MAX;
	static uint64_t x392 = UINT64_MAX;

	t73 = ((x389^x390)<(x391*x392));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x393 = -473590;
	uint16_t x394 = 2219U;
	static volatile uint8_t x395 = 50U;
	int16_t x396 = INT16_MAX;
	volatile int32_t t74 = 38968;

	t74 = ((x393^x394)<(x395*x396));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x397 = INT32_MIN;
	uint64_t x398 = 7295916581229178LLU;
	volatile int8_t x399 = 32;
	uint32_t x400 = 14U;
	int32_t t75 = 64255;

	t75 = ((x397^x398)<(x399*x400));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x401 = -12;
	volatile int64_t x402 = -1LL;
	int16_t x403 = -1;
	static volatile int32_t t76 = 23233365;

	t76 = ((x401^x402)<(x403*x404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x405 = 141886U;
	volatile int64_t x406 = -1LL;
	volatile int16_t x407 = INT16_MIN;
	volatile int8_t x408 = 11;
	static int32_t t77 = 28161;

	t77 = ((x405^x406)<(x407*x408));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x409 = 10U;
	int32_t x410 = -31571;
	uint8_t x411 = 118U;
	int32_t t78 = -5323650;

	t78 = ((x409^x410)<(x411*x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x413 = 913418704649126LLU;
	int64_t x414 = -1LL;
	volatile int32_t t79 = -117;

	t79 = ((x413^x414)<(x415*x416));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = -6;
	int32_t x426 = -1;
	int32_t x427 = -1;
	static uint32_t x428 = UINT32_MAX;

	t80 = ((x425^x426)<(x427*x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x429 = 12768U;
	volatile int8_t x430 = -27;
	int64_t x432 = -63481841972LL;

	t81 = ((x429^x430)<(x431*x432));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x433 = INT16_MIN;
	static int32_t x435 = -13;
	int16_t x436 = INT16_MIN;
	static volatile int32_t t82 = 17017820;

	t82 = ((x433^x434)<(x435*x436));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x437 = INT16_MIN;
	volatile uint64_t x438 = 47107230991LLU;
	int16_t x439 = -1;
	static uint64_t x440 = 12345290LLU;
	int32_t t83 = 293130915;

	t83 = ((x437^x438)<(x439*x440));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x443 = 40U;
	volatile uint32_t x444 = 0U;
	int32_t t84 = 49207;

	t84 = ((x441^x442)<(x443*x444));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x445 = 458;
	volatile int32_t x446 = -1;
	int8_t x447 = -1;
	int32_t x448 = INT32_MAX;
	volatile int32_t t85 = -1284480;

	t85 = ((x445^x446)<(x447*x448));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x449 = 8U;
	int64_t x450 = INT64_MAX;
	uint16_t x451 = UINT16_MAX;
	int8_t x452 = INT8_MIN;
	int32_t t86 = 418;

	t86 = ((x449^x450)<(x451*x452));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x461 = INT64_MIN;
	static uint8_t x463 = 60U;
	int16_t x464 = -3020;
	static int32_t t87 = 0;

	t87 = ((x461^x462)<(x463*x464));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x465 = UINT64_MAX;
	int64_t x466 = 16586053543841104LL;
	uint8_t x467 = 56U;
	uint8_t x468 = 78U;

	t88 = ((x465^x466)<(x467*x468));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x469 = -3255615687766415LL;
	uint64_t x471 = 49663840078513296LLU;
	int8_t x472 = -1;
	int32_t t89 = 5980;

	t89 = ((x469^x470)<(x471*x472));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x473 = 18U;
	int64_t x475 = INT64_MAX;
	static int8_t x476 = -1;
	static int32_t t90 = -2754989;

	t90 = ((x473^x474)<(x475*x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x477 = 0;
	volatile uint64_t x478 = 14LLU;
	static volatile int16_t x480 = 434;

	t91 = ((x477^x478)<(x479*x480));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x489 = 20208513LL;
	int16_t x490 = INT16_MAX;
	int32_t x491 = -1;
	volatile int32_t t92 = -458;

	t92 = ((x489^x490)<(x491*x492));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x497 = UINT16_MAX;
	uint16_t x498 = 5043U;
	static uint32_t x500 = UINT32_MAX;
	volatile int32_t t93 = 3066369;

	t93 = ((x497^x498)<(x499*x500));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x501 = 2;
	int64_t x502 = INT64_MIN;
	static uint64_t x503 = UINT64_MAX;
	static uint8_t x504 = 3U;

	t94 = ((x501^x502)<(x503*x504));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x514 = -1;
	volatile uint8_t x515 = UINT8_MAX;
	int32_t x516 = 20;
	int32_t t95 = 71705682;

	t95 = ((x513^x514)<(x515*x516));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x517 = 2U;
	uint64_t x518 = UINT64_MAX;
	uint16_t x519 = 0U;
	int8_t x520 = INT8_MAX;
	static volatile int32_t t96 = 0;

	t96 = ((x517^x518)<(x519*x520));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x521 = -1;
	static volatile int8_t x522 = -2;
	volatile int16_t x524 = INT16_MIN;
	static int32_t t97 = -1;

	t97 = ((x521^x522)<(x523*x524));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x529 = INT16_MAX;
	volatile int8_t x532 = -1;
	volatile int32_t t98 = 11;

	t98 = ((x529^x530)<(x531*x532));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x537 = -2109116404874133LL;
	static volatile uint32_t x538 = 22981715U;
	int8_t x539 = INT8_MIN;
	int64_t x540 = -22030100293LL;
	volatile int32_t t99 = -1;

	t99 = ((x537^x538)<(x539*x540));

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

