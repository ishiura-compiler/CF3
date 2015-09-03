#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 1698LLU;
uint16_t x20 = UINT16_MAX;
static uint32_t x33 = UINT32_MAX;
uint64_t t7 = 423LLU;
uint8_t x83 = 5U;
volatile uint32_t x84 = UINT32_MAX;
int8_t x91 = -9;
static uint8_t x92 = 1U;
volatile int16_t x99 = INT16_MAX;
uint64_t x100 = 13549LLU;
uint8_t x104 = 2U;
static int64_t x107 = -25695610326006LL;
static volatile int64_t t13 = 15LL;
int8_t x111 = -1;
int32_t t15 = 837947658;
volatile uint32_t t16 = 307620U;
int64_t x134 = -1LL;
uint8_t x136 = 1U;
volatile int64_t t18 = 44720LL;
static volatile uint64_t x140 = 6380LLU;
volatile int64_t x147 = INT64_MAX;
volatile int64_t t20 = 61408LL;
int16_t x151 = -1;
static int64_t x153 = 5623LL;
int16_t x156 = 16152;
int64_t t22 = 24573877575188877LL;
static int32_t x158 = -1;
int32_t x161 = -1;
static volatile int32_t t24 = -15235;
int32_t t25 = 9327556;
int32_t x177 = INT32_MIN;
uint64_t x184 = 6834344437313306078LLU;
volatile int64_t t29 = 7988LL;
static uint8_t x215 = UINT8_MAX;
volatile int16_t x218 = -28;
uint16_t x220 = UINT16_MAX;
uint32_t t32 = 951U;
volatile uint32_t x222 = 3U;
volatile uint32_t t33 = 15969483U;
volatile uint32_t x227 = UINT32_MAX;
uint32_t t34 = 291928799U;
int32_t x239 = 1898007;
uint64_t t37 = 781LLU;
volatile uint32_t t38 = 456U;
uint8_t x254 = UINT8_MAX;
int8_t x255 = 1;
uint32_t x257 = 5U;
uint16_t x258 = 197U;
int64_t x259 = -196598LL;
int8_t x263 = INT8_MIN;
int64_t t42 = 2227LL;
int16_t x272 = 1;
uint64_t x283 = 21327554846675LLU;
int16_t x284 = INT16_MIN;
uint64_t x287 = 1526291085536270LLU;
volatile uint64_t t47 = 25LLU;
volatile uint64_t t48 = 13440152631704LLU;
static int64_t t49 = 37LL;
int8_t x305 = INT8_MAX;
int64_t x309 = INT64_MIN;
int32_t x313 = 382;
int16_t x318 = INT16_MAX;
int16_t x320 = INT16_MAX;
volatile uint32_t x324 = UINT32_MAX;
int16_t x332 = -1;
int64_t x341 = 528841657627639287LL;
uint16_t x347 = 3U;
int8_t x354 = INT8_MIN;
int8_t x356 = 1;
uint8_t x358 = 13U;
int64_t x362 = -1LL;
int64_t x369 = 860631705LL;
uint16_t x381 = 12U;
uint64_t x387 = 276594002287662LLU;
static volatile int64_t x394 = INT64_MIN;
volatile int64_t t70 = 467LL;
volatile int8_t x407 = INT8_MIN;
static int8_t x427 = 17;
uint64_t t77 = 5207LLU;
int64_t x430 = INT64_MAX;
int8_t x441 = -1;
int64_t x442 = 447228744392651449LL;
volatile uint16_t x444 = UINT16_MAX;
static int8_t x446 = INT8_MAX;
uint8_t x448 = 14U;
volatile int32_t t81 = 68104;
static int16_t x463 = INT16_MIN;
int16_t x473 = INT16_MIN;
int8_t x475 = -10;
int8_t x476 = INT8_MAX;
static int16_t x478 = -1;
int64_t x481 = INT64_MIN;
int8_t x483 = INT8_MIN;
static int16_t x488 = INT16_MIN;
volatile int32_t t87 = 4005972;
int16_t x489 = 137;
int8_t x491 = INT8_MAX;
static int32_t t88 = 0;
uint64_t x495 = 4792915LLU;
static volatile int64_t t90 = -1361849050210LL;
uint64_t t93 = 451485405654599LLU;
static int8_t x535 = INT8_MIN;
int64_t x556 = -1LL;


void f0(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	int32_t x7 = -1;
	static volatile uint8_t x8 = 2U;
	static int32_t t0 = 6;

	t0 = ((x5/x6)%(x7*x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MAX;
	uint16_t x10 = 108U;
	uint64_t x11 = 27192267724LLU;
	static int16_t x12 = 12148;

	t1 = ((x9/x10)%(x11*x12));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = INT64_MIN;
	static volatile uint32_t x18 = 600583797U;
	uint32_t x19 = UINT32_MAX;
	static int64_t t2 = -33363159LL;

	t2 = ((x17/x18)%(x19*x20));

	if (t2 != -2472638826LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 120U;
	static uint8_t x22 = 14U;
	int32_t x23 = INT32_MIN;
	uint64_t x24 = 42326LLU;
	volatile uint64_t t3 = 3347032732527830529LLU;

	t3 = ((x21/x22)%(x23*x24));

	if (t3 != 8LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x34 = -7;
	static int8_t x35 = INT8_MIN;
	int16_t x36 = -1;
	volatile uint32_t t4 = 213600998U;

	t4 = ((x33/x34)%(x35*x36));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MAX;
	uint8_t x51 = 1U;
	uint32_t x52 = 8540U;
	volatile int64_t t5 = -257274214643957003LL;

	t5 = ((x49/x50)%(x51*x52));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x53 = INT8_MIN;
	int32_t x54 = -549551;
	uint8_t x55 = UINT8_MAX;
	uint16_t x56 = 645U;
	int32_t t6 = -19216214;

	t6 = ((x53/x54)%(x55*x56));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int16_t x66 = -1;
	static volatile int8_t x67 = INT8_MIN;
	uint64_t x68 = 4048601347317626285LLU;

	t7 = ((x65/x66)%(x67*x68));

	if (t7 != 1712138392788718977LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x81 = 1175;
	int64_t x82 = INT64_MIN;
	volatile int64_t t8 = 114264758988071LL;

	t8 = ((x81/x82)%(x83*x84));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x89 = -1LL;
	volatile int16_t x90 = INT16_MIN;
	volatile int64_t t9 = 26013827LL;

	t9 = ((x89/x90)%(x91*x92));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = 7800118U;
	static uint8_t x96 = UINT8_MAX;
	volatile int64_t t10 = 8114672002163LL;

	t10 = ((x93/x94)%(x95*x96));

	if (t10 != 1361584486LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x97 = 1;
	int32_t x98 = INT32_MAX;
	volatile uint64_t t11 = 648894609123298LLU;

	t11 = ((x97/x98)%(x99*x100));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x101 = 0U;
	int64_t x102 = -31791332LL;
	int8_t x103 = -1;
	volatile int64_t t12 = -56LL;

	t12 = ((x101/x102)%(x103*x104));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x105 = 1;
	int16_t x106 = -1;
	static int64_t x108 = -1LL;

	t13 = ((x105/x106)%(x107*x108));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x109 = 11328237740LLU;
	volatile uint16_t x110 = 317U;
	uint16_t x112 = 7638U;
	uint64_t t14 = 30LLU;

	t14 = ((x109/x110)%(x111*x112));

	if (t14 != 35735765LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x113 = -85301982;
	static int8_t x114 = INT8_MAX;
	int16_t x115 = -1;
	int8_t x116 = -2;

	t15 = ((x113/x114)%(x115*x116));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x121 = 1U;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = UINT32_MAX;
	static int8_t x124 = INT8_MAX;

	t16 = ((x121/x122)%(x123*x124));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x125 = INT32_MAX;
	int8_t x126 = -1;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t17 = 161482047LLU;

	t17 = ((x125/x126)%(x127*x128));

	if (t17 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x133 = 0U;
	static int16_t x135 = INT16_MAX;

	t18 = ((x133/x134)%(x135*x136));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x137 = INT8_MIN;
	static int8_t x138 = INT8_MAX;
	uint16_t x139 = 134U;
	static volatile uint64_t t19 = 5687LLU;

	t19 = ((x137/x138)%(x139*x140));

	if (t19 != 72175LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x145 = 331895200260LL;
	uint16_t x146 = 3U;
	int8_t x148 = -1;

	t20 = ((x145/x146)%(x147*x148));

	if (t20 != 110631733420LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x149 = 7920820091852777014LLU;
	int32_t x150 = INT32_MIN;
	static int64_t x152 = INT64_MAX;
	uint64_t t21 = 152LLU;

	t21 = ((x149/x150)%(x151*x152));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x154 = -1LL;
	volatile int16_t x155 = 1453;

	t22 = ((x153/x154)%(x155*x156));

	if (t22 != -5623LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x157 = 19U;
	static volatile int64_t x159 = -1LL;
	int8_t x160 = INT8_MAX;
	volatile int64_t t23 = -399017LL;

	t23 = ((x157/x158)%(x159*x160));

	if (t23 != -19LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x162 = -1;
	int8_t x163 = -1;
	int8_t x164 = INT8_MIN;

	t24 = ((x161/x162)%(x163*x164));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x165 = -228677595;
	volatile uint8_t x166 = UINT8_MAX;
	uint8_t x167 = 1U;
	volatile int32_t x168 = INT32_MAX;

	t25 = ((x165/x166)%(x167*x168));

	if (t25 != -896774) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x178 = 6;
	int8_t x179 = INT8_MIN;
	static int16_t x180 = INT16_MIN;
	static volatile int32_t t26 = -165;

	t26 = ((x177/x178)%(x179*x180));

	if (t26 != -1398101) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x181 = 1;
	int64_t x182 = INT64_MAX;
	int32_t x183 = 9;
	uint64_t t27 = 5637LLU;

	t27 = ((x181/x182)%(x183*x184));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x185 = INT8_MAX;
	volatile uint64_t x186 = 4173602775977281418LLU;
	int64_t x187 = -1LL;
	static int32_t x188 = -113299463;
	static uint64_t t28 = 14718814LLU;

	t28 = ((x185/x186)%(x187*x188));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x193 = 35813699LL;
	uint32_t x194 = UINT32_MAX;
	uint16_t x195 = 41U;
	volatile uint16_t x196 = 23003U;

	t29 = ((x193/x194)%(x195*x196));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x197 = -1;
	volatile uint16_t x198 = 13U;
	volatile uint8_t x199 = 61U;
	uint64_t x200 = 124091270500336LLU;
	volatile uint64_t t30 = 70710LLU;

	t30 = ((x197/x198)%(x199*x200));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x213 = 1539010U;
	static int16_t x214 = -1;
	uint16_t x216 = 71U;
	volatile uint32_t t31 = 2681U;

	t31 = ((x213/x214)%(x215*x216));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x217 = UINT32_MAX;
	uint32_t x219 = 932U;

	t32 = ((x217/x218)%(x219*x220));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x221 = 976644U;
	static int8_t x223 = -3;
	int32_t x224 = -1;

	t33 = ((x221/x222)%(x223*x224));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x225 = 5;
	uint32_t x226 = UINT32_MAX;
	int32_t x228 = INT32_MIN;

	t34 = ((x225/x226)%(x227*x228));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x229 = 11U;
	volatile uint64_t x230 = UINT64_MAX;
	static int32_t x231 = 717132;
	uint8_t x232 = 1U;
	uint64_t t35 = 17210937165LLU;

	t35 = ((x229/x230)%(x231*x232));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x237 = 1499534LLU;
	int32_t x238 = INT32_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile uint64_t t36 = 406855LLU;

	t36 = ((x237/x238)%(x239*x240));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MAX;
	int64_t x243 = 3794689375868LL;
	uint8_t x244 = UINT8_MAX;

	t37 = ((x241/x242)%(x243*x244));

	if (t37 != 103084709344682LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x249 = -591975997;
	uint32_t x250 = 3493251U;
	uint16_t x251 = 3638U;
	static volatile uint8_t x252 = UINT8_MAX;

	t38 = ((x249/x250)%(x251*x252));

	if (t38 != 1060U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x253 = UINT64_MAX;
	uint32_t x256 = UINT32_MAX;
	volatile uint64_t t39 = 10LLU;

	t39 = ((x253/x254)%(x255*x256));

	if (t39 != 33686018LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x260 = 50;
	static volatile int64_t t40 = -27675LL;

	t40 = ((x257/x258)%(x259*x260));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x261 = -1LL;
	uint64_t x262 = 2088124409386539LLU;
	int16_t x264 = INT16_MAX;
	volatile uint64_t t41 = 11LLU;

	t41 = ((x261/x262)%(x263*x264));

	if (t41 != 8834LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x265 = INT64_MIN;
	static int16_t x266 = INT16_MAX;
	uint16_t x267 = 8U;
	int8_t x268 = -43;

	t42 = ((x265/x266)%(x267*x268));

	if (t42 != -120LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = INT64_MIN;
	volatile int64_t x271 = INT64_MIN;
	static volatile int64_t t43 = -1578211222LL;

	t43 = ((x269/x270)%(x271*x272));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x273 = 4U;
	uint32_t x274 = 87U;
	uint8_t x275 = 3U;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t44 = 984949827U;

	t44 = ((x273/x274)%(x275*x276));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x277 = -1LL;
	int32_t x278 = -1;
	int16_t x279 = -1;
	uint16_t x280 = 8474U;
	int64_t t45 = 35577773673813LL;

	t45 = ((x277/x278)%(x279*x280));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x281 = UINT16_MAX;
	int16_t x282 = INT16_MIN;
	volatile uint64_t t46 = 1LLU;

	t46 = ((x281/x282)%(x283*x284));

	if (t46 != 698861317215846399LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x285 = 3U;
	static int32_t x286 = INT32_MAX;
	uint64_t x288 = 3LLU;

	t47 = ((x285/x286)%(x287*x288));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x289 = INT16_MAX;
	volatile int8_t x290 = -1;
	static int32_t x291 = -9;
	uint64_t x292 = 13531049LLU;

	t48 = ((x289/x290)%(x291*x292));

	if (t48 != 121746674LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x293 = INT16_MIN;
	static int32_t x294 = -58;
	volatile int64_t x295 = -1LL;
	static int16_t x296 = INT16_MIN;

	t49 = ((x293/x294)%(x295*x296));

	if (t49 != 564LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x297 = 3U;
	static uint16_t x298 = UINT16_MAX;
	volatile uint8_t x299 = UINT8_MAX;
	int8_t x300 = -1;
	int32_t t50 = -8910;

	t50 = ((x297/x298)%(x299*x300));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x301 = 7123308950782572LLU;
	int8_t x302 = 52;
	static int16_t x303 = INT16_MAX;
	int16_t x304 = INT16_MIN;
	uint64_t t51 = 125LLU;

	t51 = ((x301/x302)%(x303*x304));

	if (t51 != 136986710591972LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x306 = 1185747974580060LLU;
	static int64_t x307 = INT64_MAX;
	uint64_t x308 = 24963LLU;
	static volatile uint64_t t52 = 8235LLU;

	t52 = ((x305/x306)%(x307*x308));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x310 = 25002U;
	static int64_t x311 = -1LL;
	int16_t x312 = INT16_MAX;
	int64_t t53 = -1746723344LL;

	t53 = ((x309/x310)%(x311*x312));

	if (t53 != -30667LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = 45;
	static uint16_t x316 = UINT16_MAX;
	int32_t t54 = -43427;

	t54 = ((x313/x314)%(x315*x316));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x319 = 270U;
	static uint32_t t55 = 5515688U;

	t55 = ((x317/x318)%(x319*x320));

	if (t55 != 4128645U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x321 = 4865U;
	static int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MIN;
	static volatile int64_t t56 = -2LL;

	t56 = ((x321/x322)%(x323*x324));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x329 = -1;
	uint32_t x330 = 10862966U;
	int16_t x331 = 188;
	volatile uint32_t t57 = 318U;

	t57 = ((x329/x330)%(x331*x332));

	if (t57 != 395U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x333 = 465355LLU;
	uint8_t x334 = 9U;
	int64_t x335 = -7936LL;
	static volatile uint32_t x336 = UINT32_MAX;
	volatile uint64_t t58 = 17966029055LLU;

	t58 = ((x333/x334)%(x335*x336));

	if (t58 != 51706LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x337 = UINT8_MAX;
	volatile uint8_t x338 = 27U;
	volatile int16_t x339 = 1;
	static int64_t x340 = -38655312491LL;
	volatile int64_t t59 = 14599LL;

	t59 = ((x337/x338)%(x339*x340));

	if (t59 != 9LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x342 = INT32_MIN;
	uint32_t x343 = 130U;
	static int32_t x344 = 1039776;
	static volatile int64_t t60 = 3985191070479162687LL;

	t60 = ((x341/x342)%(x343*x344));

	if (t60 != -111090207LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x345 = UINT32_MAX;
	static int16_t x346 = INT16_MIN;
	int64_t x348 = -1LL;
	volatile int64_t t61 = -32896LL;

	t61 = ((x345/x346)%(x347*x348));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x353 = INT64_MIN;
	uint32_t x355 = 16729672U;
	static volatile int64_t t62 = -91869034640LL;

	t62 = ((x353/x354)%(x355*x356));

	if (t62 != 7950808LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x357 = 116U;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = UINT64_MAX;
	uint64_t t63 = 3298171LLU;

	t63 = ((x357/x358)%(x359*x360));

	if (t63 != 8LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x361 = -1;
	static int32_t x363 = -30239;
	static uint64_t x364 = 1280111397745642LLU;
	static uint64_t t64 = 4LLU;

	t64 = ((x361/x362)%(x363*x364));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x365 = -646;
	int32_t x366 = -1;
	uint64_t x367 = 622720423648973503LLU;
	int8_t x368 = INT8_MAX;
	static volatile uint64_t t65 = 1LLU;

	t65 = ((x365/x366)%(x367*x368));

	if (t65 != 646LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;
	uint64_t x372 = UINT64_MAX;
	static volatile uint64_t t66 = 708114740360647LLU;

	t66 = ((x369/x370)%(x371*x372));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x382 = 37;
	uint8_t x383 = 13U;
	volatile uint64_t x384 = 7132083LLU;
	volatile uint64_t t67 = 6510060660259579879LLU;

	t67 = ((x381/x382)%(x383*x384));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x385 = INT8_MIN;
	int8_t x386 = -1;
	int8_t x388 = INT8_MAX;
	uint64_t t68 = 14191LLU;

	t68 = ((x385/x386)%(x387*x388));

	if (t68 != 128LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x389 = 28LLU;
	uint64_t x390 = 3LLU;
	int16_t x391 = -434;
	int8_t x392 = INT8_MAX;
	uint64_t t69 = 7338720LLU;

	t69 = ((x389/x390)%(x391*x392));

	if (t69 != 9LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x393 = UINT16_MAX;
	static int32_t x395 = 4;
	int16_t x396 = INT16_MIN;

	t70 = ((x393/x394)%(x395*x396));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = -1657;
	int32_t x399 = INT32_MAX;
	uint32_t x400 = 5U;
	uint32_t t71 = 4U;

	t71 = ((x397/x398)%(x399*x400));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MAX;
	static int8_t x404 = 1;
	uint64_t t72 = 26077LLU;

	t72 = ((x401/x402)%(x403*x404));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x405 = INT32_MIN;
	int32_t x406 = INT32_MIN;
	uint16_t x408 = UINT16_MAX;
	int32_t t73 = -929939710;

	t73 = ((x405/x406)%(x407*x408));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x413 = INT32_MIN;
	uint64_t x414 = 2468LLU;
	volatile uint16_t x415 = 164U;
	int32_t x416 = -1;
	uint64_t t74 = 119530LLU;

	t74 = ((x413/x414)%(x415*x416));

	if (t74 != 7474369558979768LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x417 = UINT64_MAX;
	uint32_t x418 = 5522180U;
	static uint16_t x419 = 17029U;
	volatile uint64_t x420 = 1426504843LLU;
	static volatile uint64_t t75 = 22900LLU;

	t75 = ((x417/x418)%(x419*x420));

	if (t75 != 3340482214217LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x421 = 2245;
	int16_t x422 = INT16_MAX;
	int8_t x423 = -1;
	static int16_t x424 = INT16_MIN;
	volatile int32_t t76 = -65;

	t76 = ((x421/x422)%(x423*x424));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x425 = -612;
	int16_t x426 = -1;
	uint64_t x428 = 17628LLU;

	t77 = ((x425/x426)%(x427*x428));

	if (t77 != 612LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x429 = 1;
	volatile uint8_t x431 = 123U;
	volatile int32_t x432 = -6;
	static volatile int64_t t78 = -344432277923189LL;

	t78 = ((x429/x430)%(x431*x432));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x433 = -1;
	static int16_t x434 = INT16_MIN;
	uint8_t x435 = 7U;
	int8_t x436 = -1;
	static int32_t t79 = 286;

	t79 = ((x433/x434)%(x435*x436));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x443 = 14103649094810LL;
	volatile int64_t t80 = -217LL;

	t80 = ((x441/x442)%(x443*x444));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x445 = 0;
	int8_t x447 = INT8_MIN;

	t81 = ((x445/x446)%(x447*x448));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x449 = 0;
	int16_t x450 = INT16_MIN;
	uint8_t x451 = 120U;
	static int16_t x452 = -235;
	int32_t t82 = -150979487;

	t82 = ((x449/x450)%(x451*x452));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x461 = 31;
	int16_t x462 = 14896;
	uint8_t x464 = UINT8_MAX;
	volatile int32_t t83 = -22799048;

	t83 = ((x461/x462)%(x463*x464));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x474 = 113135LL;
	int64_t t84 = -6264500870931LL;

	t84 = ((x473/x474)%(x475*x476));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x477 = INT8_MIN;
	volatile uint32_t x479 = 5U;
	static int16_t x480 = 14368;
	uint32_t t85 = 23U;

	t85 = ((x477/x478)%(x479*x480));

	if (t85 != 128U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x482 = INT32_MIN;
	volatile int16_t x484 = 3;
	volatile int64_t t86 = 33810186251355LL;

	t86 = ((x481/x482)%(x483*x484));

	if (t86 != 256LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x485 = INT8_MIN;
	int32_t x486 = -10;
	int16_t x487 = -9;

	t87 = ((x485/x486)%(x487*x488));

	if (t87 != 12) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x490 = 1;
	int8_t x492 = 3;

	t88 = ((x489/x490)%(x491*x492));

	if (t88 != 137) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x493 = INT8_MAX;
	int32_t x494 = INT32_MIN;
	uint8_t x496 = 13U;
	uint64_t t89 = 17341LLU;

	t89 = ((x493/x494)%(x495*x496));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x497 = INT64_MIN;
	int8_t x498 = INT8_MIN;
	uint32_t x499 = UINT32_MAX;
	int32_t x500 = INT32_MAX;

	t90 = ((x497/x498)%(x499*x500));

	if (t90 != 2113929217LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x513 = INT8_MIN;
	volatile uint32_t x514 = 8572U;
	int8_t x515 = -1;
	volatile int32_t x516 = -1;
	static volatile uint32_t t91 = 416066796U;

	t91 = ((x513/x514)%(x515*x516));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x517 = INT16_MIN;
	volatile int64_t x518 = INT64_MIN;
	int16_t x519 = INT16_MIN;
	uint16_t x520 = 15U;
	static volatile int64_t t92 = 1136LL;

	t92 = ((x517/x518)%(x519*x520));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x521 = INT32_MIN;
	int64_t x522 = 8705123641LL;
	int16_t x523 = -1;
	static volatile uint64_t x524 = 807LLU;

	t93 = ((x521/x522)%(x523*x524));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x525 = -1;
	int8_t x526 = INT8_MIN;
	int32_t x527 = -1;
	static int16_t x528 = INT16_MIN;
	volatile int32_t t94 = -1123;

	t94 = ((x525/x526)%(x527*x528));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x533 = INT64_MIN;
	int32_t x534 = INT32_MIN;
	int16_t x536 = -57;
	volatile int64_t t95 = 15453662897448035LL;

	t95 = ((x533/x534)%(x535*x536));

	if (t95 != 1792LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x541 = 36U;
	int32_t x542 = INT32_MAX;
	static int64_t x543 = INT64_MAX;
	uint64_t x544 = 61LLU;
	uint64_t t96 = 574LLU;

	t96 = ((x541/x542)%(x543*x544));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x545 = 119990LLU;
	static volatile uint32_t x546 = 4U;
	int16_t x547 = INT16_MIN;
	uint32_t x548 = UINT32_MAX;
	uint64_t t97 = 15926697LLU;

	t97 = ((x545/x546)%(x547*x548));

	if (t97 != 29997LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x549 = 0;
	static int64_t x550 = INT64_MAX;
	static uint64_t x551 = 1207388987675546614LLU;
	int8_t x552 = INT8_MAX;
	uint64_t t98 = 416819164517LLU;

	t98 = ((x549/x550)%(x551*x552));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x553 = INT64_MAX;
	static uint64_t x554 = 265780698583366LLU;
	static int16_t x555 = -328;
	uint64_t t99 = 291796LLU;

	t99 = ((x553/x554)%(x555*x556));

	if (t99 != 262LLU) { NG(); } else { ; }
	
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

