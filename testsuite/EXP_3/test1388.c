#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
int8_t x10 = INT8_MIN;
static uint16_t x33 = 29596U;
int64_t x36 = 303910964676LL;
int64_t x38 = -104733732441718LL;
int32_t x39 = INT32_MAX;
int8_t x40 = INT8_MIN;
int16_t x41 = INT16_MIN;
int64_t x48 = -1LL;
int64_t x60 = INT64_MIN;
int32_t t12 = 791204577;
int16_t x78 = -1;
volatile uint16_t x82 = UINT16_MAX;
int64_t x93 = -1LL;
static volatile int32_t t16 = 11183;
uint8_t x98 = 5U;
static uint64_t x113 = 7240395044885240936LLU;
uint8_t x123 = 49U;
int8_t x127 = INT8_MAX;
volatile int16_t x130 = INT16_MIN;
static volatile uint8_t x136 = 7U;
volatile int32_t t25 = 10;
int8_t x151 = INT8_MIN;
static int8_t x152 = -42;
static int32_t t27 = 225;
int16_t x167 = INT16_MIN;
static uint8_t x170 = 0U;
volatile int8_t x173 = INT8_MIN;
uint8_t x174 = UINT8_MAX;
int16_t x182 = -1;
int16_t x190 = INT16_MAX;
volatile int8_t x192 = -1;
volatile int32_t t36 = -751;
uint64_t x213 = UINT64_MAX;
static int16_t x215 = INT16_MAX;
uint8_t x221 = UINT8_MAX;
uint32_t x230 = UINT32_MAX;
volatile int64_t x231 = -1LL;
int32_t x236 = INT32_MAX;
int64_t x243 = -2602498404LL;
int16_t x244 = -1;
volatile int32_t t42 = -15786;
uint8_t x254 = UINT8_MAX;
int64_t x261 = 823557LL;
static int64_t x276 = INT64_MIN;
int32_t x284 = INT32_MIN;
volatile int32_t t48 = 800;
uint64_t x285 = UINT64_MAX;
int8_t x288 = INT8_MAX;
int32_t t49 = -1840589;
int32_t x292 = 11210203;
uint8_t x301 = 12U;
static int16_t x302 = -63;
uint64_t x304 = UINT64_MAX;
int32_t t55 = -98;
static uint16_t x318 = 458U;
int32_t t56 = 0;
volatile int32_t t57 = -445878228;
uint32_t x325 = 1770U;
int16_t x326 = INT16_MIN;
volatile int64_t x329 = 98379124LL;
int64_t x336 = INT64_MAX;
static int8_t x340 = INT8_MIN;
int32_t x343 = 50;
static volatile int32_t t62 = -1524;
volatile int32_t t63 = 1209;
int8_t x357 = -4;
int32_t x361 = INT32_MAX;
static int8_t x365 = -1;
uint16_t x369 = 232U;
static int8_t x372 = -36;
int64_t x378 = INT64_MIN;
uint64_t x381 = 4092016752005LLU;
int32_t x383 = -227605167;
static int32_t x384 = 68;
volatile int8_t x391 = 7;
static volatile int32_t t73 = 1;
volatile int16_t x402 = 7232;
static uint8_t x406 = UINT8_MAX;
int64_t x408 = INT64_MAX;
int32_t x412 = -1;
int8_t x426 = -31;
uint64_t x428 = UINT64_MAX;
volatile int8_t x431 = INT8_MIN;
int16_t x432 = 0;
int32_t t80 = -3059;
int16_t x436 = 90;
int16_t x437 = 841;
int32_t t82 = -5699;
volatile int8_t x450 = 1;
static int16_t x455 = -537;
static int32_t t88 = 692058;
int32_t t89 = 15;
volatile uint64_t x473 = UINT64_MAX;
volatile int32_t x474 = 872683166;
volatile int32_t t90 = -1239;
static uint8_t x478 = 70U;
int32_t x484 = 3;
int32_t t93 = 8166;
int32_t x497 = -1;
volatile int32_t t95 = 736;
int32_t t96 = -1;
uint64_t x514 = 14499332626LLU;
int32_t t98 = -2;
volatile int32_t t99 = -13;


void f0(void) {
	int16_t x1 = -1;
	int16_t x3 = 283;
	uint8_t x4 = 36U;
	volatile int32_t t0 = 34;

	t0 = ((x1*x2)<=(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = 54U;
	volatile uint32_t x11 = 843686924U;
	static volatile int32_t x12 = INT32_MAX;
	int32_t t1 = -1979268;

	t1 = ((x9*x10)<=(x11<x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = -1LL;
	static uint8_t x18 = 6U;
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	volatile int32_t t2 = 6145;

	t2 = ((x17*x18)<=(x19<x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MAX;
	int32_t t3 = 4396353;

	t3 = ((x21*x22)<=(x23<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x34 = 120U;
	int32_t x35 = INT32_MAX;
	int32_t t4 = -28658;

	t4 = ((x33*x34)<=(x35<x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x37 = INT16_MAX;
	volatile int32_t t5 = -3304;

	t5 = ((x37*x38)<=(x39<x40));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x42 = 6;
	int64_t x43 = -1LL;
	int8_t x44 = 0;
	int32_t t6 = 53;

	t6 = ((x41*x42)<=(x43<x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x45 = 0U;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MAX;
	volatile int32_t t7 = 248;

	t7 = ((x45*x46)<=(x47<x48));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 3;
	int16_t x50 = INT16_MIN;
	uint16_t x51 = UINT16_MAX;
	static volatile uint32_t x52 = UINT32_MAX;
	int32_t t8 = -16134;

	t8 = ((x49*x50)<=(x51<x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = 5684LLU;
	int8_t x55 = 1;
	int16_t x56 = INT16_MIN;
	static int32_t t9 = 25214091;

	t9 = ((x53*x54)<=(x55<x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	int32_t x58 = INT32_MAX;
	int64_t x59 = -1LL;
	static volatile int32_t t10 = -3571514;

	t10 = ((x57*x58)<=(x59<x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = INT8_MAX;
	uint32_t x62 = 2235594U;
	static uint64_t x63 = UINT64_MAX;
	uint32_t x64 = UINT32_MAX;
	int32_t t11 = -111437;

	t11 = ((x61*x62)<=(x63<x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = 11715;
	uint64_t x70 = 20LLU;
	static int16_t x71 = 1768;
	int64_t x72 = 7943270305LL;

	t12 = ((x69*x70)<=(x71<x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = 26831U;
	int32_t x74 = -1;
	volatile int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	volatile int32_t t13 = -62698;

	t13 = ((x73*x74)<=(x75<x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -1077858789022598108LL;
	int8_t x79 = INT8_MIN;
	static int16_t x80 = INT16_MIN;
	int32_t t14 = -341;

	t14 = ((x77*x78)<=(x79<x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MAX;
	volatile int32_t x83 = INT32_MAX;
	volatile int32_t x84 = INT32_MAX;
	int32_t t15 = 335748938;

	t15 = ((x81*x82)<=(x83<x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x94 = 335U;
	uint64_t x95 = UINT64_MAX;
	static int16_t x96 = INT16_MIN;

	t16 = ((x93*x94)<=(x95<x96));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = 36;
	int8_t x99 = INT8_MAX;
	int16_t x100 = 13218;
	volatile int32_t t17 = 127027;

	t17 = ((x97*x98)<=(x99<x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x114 = 17LLU;
	volatile int8_t x115 = 0;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t18 = 3399852;

	t18 = ((x113*x114)<=(x115<x116));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x117 = 697977LLU;
	volatile int32_t x118 = INT32_MIN;
	volatile int8_t x119 = 1;
	int8_t x120 = -1;
	static volatile int32_t t19 = -1478620;

	t19 = ((x117*x118)<=(x119<x120));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x121 = INT8_MIN;
	int64_t x122 = -16229210374397LL;
	volatile int8_t x124 = INT8_MIN;
	int32_t t20 = 508430115;

	t20 = ((x121*x122)<=(x123<x124));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x125 = 2398025949429604358LL;
	uint16_t x126 = 3U;
	int64_t x128 = INT64_MIN;
	int32_t t21 = 3426;

	t21 = ((x125*x126)<=(x127<x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x131 = 24U;
	static int16_t x132 = -1;
	int32_t t22 = -295;

	t22 = ((x129*x130)<=(x131<x132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	int32_t x135 = 396;
	volatile int32_t t23 = -266475903;

	t23 = ((x133*x134)<=(x135<x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x137 = 2137683691587LL;
	volatile uint64_t x138 = 124LLU;
	uint16_t x139 = 4U;
	int16_t x140 = -1;
	volatile int32_t t24 = 103;

	t24 = ((x137*x138)<=(x139<x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 2U;
	uint32_t x142 = 1291554380U;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;

	t25 = ((x141*x142)<=(x143<x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = -1856;
	volatile int32_t x146 = 3;
	static volatile int8_t x147 = INT8_MIN;
	int16_t x148 = 7;
	int32_t t26 = 3;

	t26 = ((x145*x146)<=(x147<x148));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x149 = -1;
	int8_t x150 = -1;

	t27 = ((x149*x150)<=(x151<x152));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x165 = UINT8_MAX;
	uint16_t x166 = UINT16_MAX;
	uint32_t x168 = 10U;
	int32_t t28 = -157;

	t28 = ((x165*x166)<=(x167<x168));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x169 = 1155U;
	volatile int16_t x171 = -792;
	uint32_t x172 = 35927U;
	int32_t t29 = 1;

	t29 = ((x169*x170)<=(x171<x172));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x175 = 0U;
	int16_t x176 = -1;
	int32_t t30 = 1160786;

	t30 = ((x173*x174)<=(x175<x176));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x177 = -1;
	static int8_t x178 = INT8_MIN;
	static volatile int64_t x179 = INT64_MIN;
	uint16_t x180 = 2239U;
	volatile int32_t t31 = 722448;

	t31 = ((x177*x178)<=(x179<x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x181 = 1;
	static int32_t x183 = INT32_MIN;
	static uint16_t x184 = 11563U;
	static int32_t t32 = -246;

	t32 = ((x181*x182)<=(x183<x184));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x189 = INT8_MAX;
	int64_t x191 = -1LL;
	int32_t t33 = 29045;

	t33 = ((x189*x190)<=(x191<x192));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x201 = UINT32_MAX;
	volatile int8_t x202 = INT8_MIN;
	static int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	static int32_t t34 = -27457585;

	t34 = ((x201*x202)<=(x203<x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x205 = -1;
	int32_t x206 = -1;
	int32_t x207 = -1;
	static volatile int32_t x208 = -77049;
	volatile int32_t t35 = 5;

	t35 = ((x205*x206)<=(x207<x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x209 = -1;
	volatile uint32_t x210 = 0U;
	volatile int8_t x211 = INT8_MAX;
	volatile uint8_t x212 = 42U;

	t36 = ((x209*x210)<=(x211<x212));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x214 = -4839;
	int32_t x216 = -11;
	volatile int32_t t37 = 144136;

	t37 = ((x213*x214)<=(x215<x216));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x222 = -1;
	volatile int16_t x223 = INT16_MIN;
	uint64_t x224 = 15LLU;
	volatile int32_t t38 = -13239818;

	t38 = ((x221*x222)<=(x223<x224));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MIN;
	int32_t x232 = INT32_MIN;
	volatile int32_t t39 = 15159808;

	t39 = ((x229*x230)<=(x231<x232));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x233 = INT32_MAX;
	uint32_t x234 = 14U;
	int8_t x235 = INT8_MAX;
	int32_t t40 = 445186463;

	t40 = ((x233*x234)<=(x235<x236));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x237 = 259U;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MIN;
	int32_t t41 = 1;

	t41 = ((x237*x238)<=(x239<x240));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x241 = 1743LL;
	static int8_t x242 = INT8_MIN;

	t42 = ((x241*x242)<=(x243<x244));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x253 = 1;
	volatile int8_t x255 = 0;
	uint64_t x256 = 364LLU;
	int32_t t43 = 7;

	t43 = ((x253*x254)<=(x255<x256));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x262 = 288375;
	int8_t x263 = INT8_MAX;
	static volatile int64_t x264 = INT64_MIN;
	static volatile int32_t t44 = -6117647;

	t44 = ((x261*x262)<=(x263<x264));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x265 = UINT8_MAX;
	uint64_t x266 = 31746LLU;
	int16_t x267 = INT16_MIN;
	int32_t x268 = -40628215;
	static int32_t t45 = -37222532;

	t45 = ((x265*x266)<=(x267<x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x273 = INT32_MIN;
	static uint64_t x274 = 33431LLU;
	int64_t x275 = INT64_MAX;
	volatile int32_t t46 = -253997;

	t46 = ((x273*x274)<=(x275<x276));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x277 = INT32_MIN;
	int64_t x278 = -68645118LL;
	static uint32_t x279 = UINT32_MAX;
	volatile int32_t x280 = -1;
	int32_t t47 = 0;

	t47 = ((x277*x278)<=(x279<x280));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x281 = INT64_MIN;
	uint16_t x282 = 1U;
	static volatile int32_t x283 = -430033793;

	t48 = ((x281*x282)<=(x283<x284));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x286 = INT32_MIN;
	static uint16_t x287 = UINT16_MAX;

	t49 = ((x285*x286)<=(x287<x288));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x289 = UINT32_MAX;
	volatile int8_t x290 = INT8_MAX;
	uint64_t x291 = 24735483LLU;
	int32_t t50 = -1168;

	t50 = ((x289*x290)<=(x291<x292));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = 11236703LLU;
	int32_t t51 = -1;

	t51 = ((x293*x294)<=(x295<x296));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x303 = UINT32_MAX;
	int32_t t52 = -186383;

	t52 = ((x301*x302)<=(x303<x304));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x305 = -1;
	static int32_t x306 = -1;
	int16_t x307 = INT16_MAX;
	uint16_t x308 = 7704U;
	int32_t t53 = 9;

	t53 = ((x305*x306)<=(x307<x308));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x309 = UINT32_MAX;
	uint64_t x310 = 26949034122035LLU;
	int16_t x311 = 11854;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t54 = 140527;

	t54 = ((x309*x310)<=(x311<x312));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x313 = UINT64_MAX;
	uint8_t x314 = UINT8_MAX;
	static int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MIN;

	t55 = ((x313*x314)<=(x315<x316));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x317 = INT16_MIN;
	int32_t x319 = 6;
	volatile uint8_t x320 = 5U;

	t56 = ((x317*x318)<=(x319<x320));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x321 = INT16_MAX;
	int32_t x322 = 424;
	volatile uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 1U;

	t57 = ((x321*x322)<=(x323<x324));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x327 = -836;
	static int8_t x328 = INT8_MIN;
	int32_t t58 = 75018;

	t58 = ((x325*x326)<=(x327<x328));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x330 = UINT64_MAX;
	static int16_t x331 = -13;
	int64_t x332 = INT64_MIN;
	int32_t t59 = 232755;

	t59 = ((x329*x330)<=(x331<x332));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x333 = 50095U;
	volatile uint64_t x334 = 918LLU;
	int16_t x335 = 13906;
	volatile int32_t t60 = -7;

	t60 = ((x333*x334)<=(x335<x336));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x337 = INT8_MAX;
	volatile int16_t x338 = INT16_MIN;
	uint16_t x339 = 7U;
	volatile int32_t t61 = -819132517;

	t61 = ((x337*x338)<=(x339<x340));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x341 = 827705U;
	static uint8_t x342 = UINT8_MAX;
	int32_t x344 = -1;

	t62 = ((x341*x342)<=(x343<x344));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x345 = 6525U;
	int8_t x346 = -1;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = UINT8_MAX;

	t63 = ((x345*x346)<=(x347<x348));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x358 = INT16_MIN;
	volatile uint16_t x359 = UINT16_MAX;
	static int64_t x360 = -1LL;
	int32_t t64 = -23640381;

	t64 = ((x357*x358)<=(x359<x360));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x362 = 1U;
	volatile uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t65 = -913232925;

	t65 = ((x361*x362)<=(x363<x364));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x366 = -1;
	volatile int8_t x367 = 3;
	static int32_t x368 = -37;
	int32_t t66 = 524311597;

	t66 = ((x365*x366)<=(x367<x368));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x370 = 169653412342LLU;
	volatile uint32_t x371 = 13U;
	static volatile int32_t t67 = 14274894;

	t67 = ((x369*x370)<=(x371<x372));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x373 = -18;
	uint8_t x374 = 10U;
	uint64_t x375 = UINT64_MAX;
	int16_t x376 = -1;
	int32_t t68 = 1906628;

	t68 = ((x373*x374)<=(x375<x376));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = 0LL;
	volatile int64_t x379 = -1LL;
	int16_t x380 = 0;
	int32_t t69 = 10673;

	t69 = ((x377*x378)<=(x379<x380));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x382 = INT64_MIN;
	int32_t t70 = 569788145;

	t70 = ((x381*x382)<=(x383<x384));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x385 = 2864256530977706LLU;
	uint8_t x386 = 14U;
	volatile int16_t x387 = INT16_MIN;
	static volatile int64_t x388 = 211431LL;
	int32_t t71 = -280;

	t71 = ((x385*x386)<=(x387<x388));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x389 = UINT64_MAX;
	uint8_t x390 = 10U;
	volatile uint32_t x392 = 513983U;
	volatile int32_t t72 = 3826816;

	t72 = ((x389*x390)<=(x391<x392));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x393 = -1;
	int16_t x394 = -1;
	volatile int32_t x395 = 1;
	volatile int32_t x396 = INT32_MAX;

	t73 = ((x393*x394)<=(x395<x396));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x397 = 0U;
	int16_t x398 = -1;
	static uint64_t x399 = UINT64_MAX;
	uint64_t x400 = 2720749934LLU;
	volatile int32_t t74 = 3775;

	t74 = ((x397*x398)<=(x399<x400));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x401 = INT8_MAX;
	static uint16_t x403 = UINT16_MAX;
	int8_t x404 = -1;
	static volatile int32_t t75 = 55373;

	t75 = ((x401*x402)<=(x403<x404));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x405 = 221LL;
	int16_t x407 = -2365;
	volatile int32_t t76 = -277;

	t76 = ((x405*x406)<=(x407<x408));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x409 = -61;
	uint8_t x410 = 14U;
	int8_t x411 = INT8_MAX;
	static volatile int32_t t77 = 721083554;

	t77 = ((x409*x410)<=(x411<x412));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x413 = 59U;
	volatile int16_t x414 = INT16_MIN;
	volatile int32_t x415 = INT32_MIN;
	volatile int64_t x416 = -104133840660476LL;
	int32_t t78 = -29739927;

	t78 = ((x413*x414)<=(x415<x416));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x425 = 251;
	static int8_t x427 = -1;
	int32_t t79 = -824;

	t79 = ((x425*x426)<=(x427<x428));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x429 = -1;
	volatile int8_t x430 = INT8_MIN;

	t80 = ((x429*x430)<=(x431<x432));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x433 = INT8_MAX;
	static uint8_t x434 = UINT8_MAX;
	uint8_t x435 = 1U;
	static volatile int32_t t81 = -6504859;

	t81 = ((x433*x434)<=(x435<x436));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x438 = -1;
	static int16_t x439 = INT16_MIN;
	volatile int32_t x440 = 434693;

	t82 = ((x437*x438)<=(x439<x440));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x441 = INT16_MIN;
	static volatile int64_t x442 = -1LL;
	static int64_t x443 = INT64_MAX;
	int32_t x444 = INT32_MAX;
	volatile int32_t t83 = -109261;

	t83 = ((x441*x442)<=(x443<x444));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x445 = 0U;
	int8_t x446 = -1;
	volatile uint8_t x447 = UINT8_MAX;
	uint8_t x448 = 48U;
	int32_t t84 = 3505698;

	t84 = ((x445*x446)<=(x447<x448));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x449 = -1;
	int32_t x451 = INT32_MIN;
	uint32_t x452 = 2824183U;
	int32_t t85 = -7263;

	t85 = ((x449*x450)<=(x451<x452));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x453 = -73823797547LL;
	volatile int32_t x454 = -647;
	static volatile int16_t x456 = INT16_MAX;
	static volatile int32_t t86 = -303122;

	t86 = ((x453*x454)<=(x455<x456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x457 = -1LL;
	int16_t x458 = -47;
	volatile int16_t x459 = 174;
	static volatile uint8_t x460 = UINT8_MAX;
	static int32_t t87 = -52233841;

	t87 = ((x457*x458)<=(x459<x460));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x465 = INT8_MIN;
	volatile uint16_t x466 = 10U;
	int8_t x467 = -1;
	int8_t x468 = 6;

	t88 = ((x465*x466)<=(x467<x468));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x469 = -1;
	int16_t x470 = INT16_MIN;
	static uint32_t x471 = 20U;
	int64_t x472 = INT64_MIN;

	t89 = ((x469*x470)<=(x471<x472));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x475 = INT32_MIN;
	uint16_t x476 = 1991U;

	t90 = ((x473*x474)<=(x475<x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x477 = -1;
	int16_t x479 = INT16_MAX;
	int8_t x480 = 7;
	volatile int32_t t91 = 12479;

	t91 = ((x477*x478)<=(x479<x480));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x481 = 4658448361LL;
	volatile int64_t x482 = -1LL;
	uint32_t x483 = UINT32_MAX;
	volatile int32_t t92 = -847687243;

	t92 = ((x481*x482)<=(x483<x484));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x493 = 645184;
	volatile uint64_t x494 = 65474LLU;
	static uint32_t x495 = UINT32_MAX;
	volatile int64_t x496 = INT64_MIN;

	t93 = ((x493*x494)<=(x495<x496));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x498 = -1LL;
	uint64_t x499 = 24LLU;
	int32_t x500 = -147401;
	int32_t t94 = -59612;

	t94 = ((x497*x498)<=(x499<x500));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x501 = 3048389287335LL;
	uint8_t x502 = 28U;
	uint16_t x503 = 1U;
	int8_t x504 = -1;

	t95 = ((x501*x502)<=(x503<x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x505 = 7467U;
	volatile uint64_t x506 = 2796906428587122902LLU;
	uint32_t x507 = UINT32_MAX;
	static uint32_t x508 = 2533U;

	t96 = ((x505*x506)<=(x507<x508));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x509 = UINT8_MAX;
	uint8_t x510 = UINT8_MAX;
	int32_t x511 = INT32_MIN;
	int32_t x512 = 1996278;
	int32_t t97 = 1;

	t97 = ((x509*x510)<=(x511<x512));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x513 = UINT64_MAX;
	static volatile uint64_t x515 = 419LLU;
	static int64_t x516 = -1LL;

	t98 = ((x513*x514)<=(x515<x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x517 = 0U;
	int8_t x518 = INT8_MAX;
	volatile int16_t x519 = INT16_MAX;
	int32_t x520 = INT32_MAX;

	t99 = ((x517*x518)<=(x519<x520));

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

