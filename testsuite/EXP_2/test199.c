#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
uint64_t x3 = UINT64_MAX;
int16_t x4 = -1;
int32_t x9 = -366;
volatile uint16_t x19 = 3U;
volatile uint8_t x20 = UINT8_MAX;
volatile uint32_t x21 = 148908U;
volatile uint32_t x29 = UINT32_MAX;
uint64_t t6 = 415550LLU;
volatile uint64_t x47 = UINT64_MAX;
static uint64_t x57 = UINT64_MAX;
int32_t x58 = -1;
int64_t x59 = 1LL;
int8_t x68 = INT8_MAX;
volatile uint64_t x78 = UINT64_MAX;
static volatile uint32_t t15 = 2U;
volatile uint16_t x95 = 31U;
int32_t x96 = 726768884;
int64_t x108 = INT64_MAX;
uint32_t x128 = UINT32_MAX;
int64_t t19 = 3345LL;
volatile uint64_t t20 = 30635LLU;
int8_t x144 = INT8_MAX;
static uint8_t x146 = 14U;
int64_t t22 = 133473948771779299LL;
uint64_t t23 = 2LLU;
int8_t x163 = INT8_MAX;
static volatile uint32_t x166 = UINT32_MAX;
static int64_t x167 = -1LL;
uint64_t t25 = 572907074LLU;
int16_t x170 = INT16_MIN;
static int16_t x173 = INT16_MAX;
int32_t x180 = -890320058;
volatile uint32_t t29 = 2441U;
int32_t t31 = 1;
int32_t x206 = INT32_MIN;
int8_t x210 = 11;
int8_t x211 = -1;
uint64_t x227 = 1426145LLU;
int64_t x234 = 3871LL;
int32_t x236 = -12;
volatile uint8_t x241 = 2U;
volatile uint64_t t39 = 8764299300919308LLU;
int8_t x260 = 1;
int64_t x264 = INT64_MIN;
int64_t t41 = -7315886923LL;
static int32_t x271 = -1;
volatile int64_t t43 = -2045021264454625507LL;
uint32_t x273 = 172314U;
static uint64_t x274 = UINT64_MAX;
int32_t t45 = 64307;
static uint8_t x281 = 29U;
static volatile uint8_t x286 = UINT8_MAX;
volatile int16_t x301 = -1;
static volatile uint32_t x307 = UINT32_MAX;
uint16_t x320 = UINT16_MAX;
int16_t x325 = 0;
int16_t x329 = -1;
uint16_t x331 = 101U;
int16_t x342 = INT16_MIN;
int16_t x343 = INT16_MIN;
int64_t t56 = 0LL;
static volatile uint64_t t57 = 5155021545LLU;
uint32_t x353 = 20894U;
int16_t x354 = INT16_MIN;
int64_t x361 = 11370071LL;
int8_t x363 = -3;
int64_t t59 = -153LL;
volatile uint16_t x377 = 70U;
int16_t x380 = INT16_MAX;
int16_t x386 = -1;
volatile uint16_t x395 = UINT16_MAX;
int32_t x421 = 4789405;
int8_t x438 = INT8_MIN;
int64_t t71 = 32634508449787LL;
static volatile uint64_t t72 = 1814847902245LLU;
static int64_t x455 = INT64_MIN;
uint8_t x459 = 9U;
int16_t x460 = INT16_MIN;
volatile uint64_t t75 = 4285593623LLU;
volatile uint64_t t78 = 585LLU;
uint32_t x487 = 1666U;
volatile uint64_t t79 = 2633LLU;
volatile int64_t t81 = 18861983472LL;
static volatile uint32_t t82 = 140U;
static uint8_t x509 = UINT8_MAX;
uint64_t x511 = 191533358829616513LLU;
volatile int64_t t85 = 2140229350LL;
static volatile int16_t x527 = INT16_MIN;
uint16_t x529 = 5U;
int16_t x532 = INT16_MIN;
int16_t x542 = INT16_MAX;
int16_t x544 = 3;
int32_t t92 = 514079441;
static uint8_t x569 = 6U;
uint16_t x570 = 19U;
uint8_t x573 = 2U;
uint32_t x576 = UINT32_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile uint64_t t0 = 6600851071LLU;

	t0 = ((x1*(x2-x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x10 = UINT8_MAX;
	volatile uint16_t x11 = 11U;
	volatile int16_t x12 = -1;
	int32_t t1 = -229712441;

	t1 = ((x9*(x10-x11))/x12);

	if (t1 != 89304) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 403U;
	volatile int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	static volatile int32_t x16 = INT32_MIN;
	uint32_t t2 = 135U;

	t2 = ((x13*(x14-x15))/x16);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int64_t x18 = -1LL;
	static int64_t t3 = -188539197416448100LL;

	t3 = ((x17*(x18-x19))/x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x22 = 776224285216542318LLU;
	int32_t x23 = -1;
	static volatile int8_t x24 = -1;
	uint64_t t4 = 3011LLU;

	t4 = ((x21*(x22-x23))/x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = 109;
	volatile int16_t x26 = INT16_MIN;
	int16_t x27 = -1;
	volatile int64_t x28 = -1LL;
	volatile int64_t t5 = 41283LL;

	t5 = ((x25*(x26-x27))/x28);

	if (t5 != 3571603LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = UINT64_MAX;
	static uint32_t x31 = 65985U;
	int8_t x32 = INT8_MIN;

	t6 = ((x29*(x30-x31))/x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = 1;
	static uint32_t x34 = UINT32_MAX;
	volatile int32_t x35 = 75696187;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t7 = 1870241LLU;

	t7 = ((x33*(x34-x35))/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	uint32_t x38 = 25599U;
	volatile int8_t x39 = 11;
	int8_t x40 = 1;
	static uint32_t t8 = 1099791743U;

	t8 = ((x37*(x38-x39))/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MAX;
	static uint8_t x42 = 6U;
	uint32_t x43 = 15941U;
	int32_t x44 = 3;
	volatile uint32_t t9 = 650U;

	t9 = ((x41*(x42-x43))/x44);

	if (t9 != 1430981183U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	static int64_t x48 = INT64_MIN;
	static volatile uint64_t t10 = 54033LLU;

	t10 = ((x45*(x46-x47))/x48);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	volatile int16_t x54 = INT16_MAX;
	int8_t x55 = -1;
	static int16_t x56 = -1777;
	int32_t t11 = 78572448;

	t11 = ((x53*(x54-x55))/x56);

	if (t11 != 18) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x60 = -1;
	volatile uint64_t t12 = 786LLU;

	t12 = ((x57*(x58-x59))/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = 32368U;
	uint32_t t13 = 847668U;

	t13 = ((x65*(x66-x67))/x68);

	if (t13 != 33687855U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 1228U;
	uint8_t x79 = 2U;
	int16_t x80 = 3;
	uint64_t t14 = 462018910971516464LLU;

	t14 = ((x77*(x78-x79))/x80);

	if (t14 != 6148914691236515977LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 51504250U;
	uint16_t x86 = UINT16_MAX;
	volatile uint8_t x87 = UINT8_MAX;
	uint32_t x88 = 13830U;

	t15 = ((x85*(x86-x87))/x88);

	if (t15 != 255460U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x93 = UINT8_MAX;
	uint64_t x94 = UINT64_MAX;
	uint64_t t16 = 2815114LLU;

	t16 = ((x93*(x94-x95))/x96);

	if (t16 != 25381857258LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x105 = INT16_MIN;
	uint8_t x106 = UINT8_MAX;
	uint64_t x107 = 2LLU;
	static uint64_t t17 = 30699678663LLU;

	t17 = ((x105*(x106-x107))/x108);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = INT32_MAX;
	static uint32_t x114 = 97584U;
	volatile uint64_t x115 = UINT64_MAX;
	uint8_t x116 = 7U;
	volatile uint64_t t18 = 493868LLU;

	t18 = ((x113*(x114-x115))/x116);

	if (t18 != 29937455956070LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x125 = -1LL;
	volatile int32_t x126 = -1;
	static uint32_t x127 = 2859897U;

	t19 = ((x125*(x126-x127))/x128);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = -17;
	int8_t x139 = INT8_MAX;
	uint64_t x140 = 2886447514LLU;

	t20 = ((x137*(x138-x139))/x140);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x142 = INT64_MIN;
	volatile int8_t x143 = -1;
	static volatile uint64_t t21 = 855LLU;

	t21 = ((x141*(x142-x143))/x144);

	if (t21 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x145 = 168U;
	int16_t x147 = -15;
	int64_t x148 = INT64_MAX;

	t22 = ((x145*(x146-x147))/x148);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x153 = 20U;
	static uint64_t x154 = UINT64_MAX;
	int32_t x155 = 4851887;
	volatile uint64_t x156 = 55305LLU;

	t23 = ((x153*(x154-x155))/x156);

	if (t23 != 333545684361495LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t24 = 141LLU;

	t24 = ((x161*(x162-x163))/x164);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x165 = 14;
	static uint64_t x168 = UINT64_MAX;

	t25 = ((x165*(x166-x167))/x168);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x169 = INT32_MIN;
	int64_t x171 = 5210493LL;
	volatile uint16_t x172 = 1251U;
	volatile int64_t t26 = 0LL;

	t26 = ((x169*(x170-x171))/x172);

	if (t26 != 9000653285128LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x174 = 49007833;
	int64_t x175 = -30183349LL;
	volatile int16_t x176 = INT16_MIN;
	int64_t t27 = 2768511LL;

	t27 = ((x173*(x174-x175))/x176);

	if (t27 != -79188765LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x177 = 17620U;
	uint64_t x178 = 26699401564886650LLU;
	volatile uint8_t x179 = UINT8_MAX;
	volatile uint64_t t28 = 218203719LLU;

	t28 = ((x177*(x178-x179))/x180);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x181 = 60910U;
	int32_t x182 = INT32_MAX;
	int32_t x183 = INT32_MAX;
	uint8_t x184 = 3U;

	t29 = ((x181*(x182-x183))/x184);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x185 = -11712841;
	int8_t x186 = -1;
	static int16_t x187 = -1;
	volatile int32_t x188 = -1;
	int32_t t30 = -599590193;

	t30 = ((x185*(x186-x187))/x188);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x201 = -1;
	static volatile int8_t x202 = INT8_MIN;
	uint16_t x203 = 928U;
	int16_t x204 = INT16_MIN;

	t31 = ((x201*(x202-x203))/x204);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x205 = 10U;
	int64_t x207 = 1402370551LL;
	uint64_t x208 = 36602520682LLU;
	uint64_t t32 = 21LLU;

	t32 = ((x205*(x206-x207))/x208);

	if (t32 != 503974690LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x209 = 0;
	int64_t x212 = INT64_MIN;
	volatile int64_t t33 = 1867302296514LL;

	t33 = ((x209*(x210-x211))/x212);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x225 = -2;
	int8_t x226 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	uint64_t t34 = 252LLU;

	t34 = ((x225*(x226-x227))/x228);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x233 = -1;
	volatile int16_t x235 = -1;
	static int64_t t35 = 66764265684750LL;

	t35 = ((x233*(x234-x235))/x236);

	if (t35 != 322LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x237 = 52;
	uint8_t x238 = 1U;
	uint16_t x239 = 95U;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t36 = -511649749;

	t36 = ((x237*(x238-x239))/x240);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x242 = 131955678117037375LLU;
	uint16_t x243 = UINT16_MAX;
	int32_t x244 = 199;
	volatile uint64_t t37 = 23267LLU;

	t37 = ((x241*(x242-x243))/x244);

	if (t37 != 1326187719768561LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x249 = -1;
	int8_t x250 = -1;
	uint32_t x251 = 10U;
	int8_t x252 = INT8_MIN;
	static uint32_t t38 = 1U;

	t38 = ((x249*(x250-x251))/x252);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x253 = 8470701028309595LL;
	int32_t x254 = INT32_MAX;
	uint64_t x255 = 672353LLU;
	int16_t x256 = INT16_MAX;

	t39 = ((x253*(x254-x255))/x256);

	if (t39 != 361960778807824LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x257 = -1;
	static uint64_t x258 = 90621249LLU;
	int64_t x259 = -1LL;
	static uint64_t t40 = 2431997004LLU;

	t40 = ((x257*(x258-x259))/x260);

	if (t40 != 18446744073618930366LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x261 = 114U;
	int16_t x262 = INT16_MAX;
	uint16_t x263 = 0U;

	t41 = ((x261*(x262-x263))/x264);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x265 = -1;
	uint64_t x266 = 219105211801LLU;
	int16_t x267 = -14832;
	int16_t x268 = INT16_MIN;
	static volatile uint64_t t42 = 13LLU;

	t42 = ((x265*(x266-x267))/x268);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x269 = -2051;
	volatile int16_t x270 = INT16_MIN;
	int64_t x272 = -1LL;

	t43 = ((x269*(x270-x271))/x272);

	if (t43 != -67205117LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x275 = INT32_MIN;
	int8_t x276 = 6;
	volatile uint64_t t44 = 251LLU;

	t44 = ((x273*(x274-x275))/x276);

	if (t44 != 61673582858193LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = 363;
	volatile uint16_t x279 = UINT16_MAX;
	static volatile int32_t x280 = INT32_MIN;

	t45 = ((x277*(x278-x279))/x280);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x282 = INT8_MAX;
	static uint32_t x283 = 1U;
	int16_t x284 = -1;
	uint32_t t46 = 1U;

	t46 = ((x281*(x282-x283))/x284);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x285 = 2U;
	volatile int8_t x287 = 16;
	static volatile int16_t x288 = -1;
	volatile int32_t t47 = -542;

	t47 = ((x285*(x286-x287))/x288);

	if (t47 != -478) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x289 = 678;
	static int64_t x290 = INT64_MIN;
	volatile uint64_t x291 = 28LLU;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t48 = 2276LLU;

	t48 = ((x289*(x290-x291))/x292);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x302 = INT8_MIN;
	uint32_t x303 = 7280U;
	uint8_t x304 = UINT8_MAX;
	static volatile uint32_t t49 = 640U;

	t49 = ((x301*(x302-x303))/x304);

	if (t49 != 29U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x305 = 12U;
	volatile int8_t x306 = INT8_MAX;
	volatile int16_t x308 = INT16_MAX;
	uint32_t t50 = 85U;

	t50 = ((x305*(x306-x307))/x308);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x309 = 278478117120LLU;
	uint64_t x310 = 56417955383569LLU;
	int8_t x311 = INT8_MAX;
	int32_t x312 = -3718961;
	static volatile uint64_t t51 = 5043LLU;

	t51 = ((x309*(x310-x311))/x312);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x313 = -1;
	int32_t x314 = INT32_MIN;
	uint32_t x315 = UINT32_MAX;
	static volatile int16_t x316 = -1;
	uint32_t t52 = 34684875U;

	t52 = ((x313*(x314-x315))/x316);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x317 = 464574420LLU;
	int8_t x318 = -22;
	uint64_t x319 = 62188086223LLU;
	static volatile uint64_t t53 = 773586LLU;

	t53 = ((x317*(x318-x319))/x320);

	if (t53 != 122110231925509LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 3620921593LLU;
	volatile uint64_t t54 = 341666052LLU;

	t54 = ((x325*(x326-x327))/x328);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x330 = INT64_MAX;
	int32_t x332 = 45650;
	int64_t t55 = -30098LL;

	t55 = ((x329*(x330-x331))/x332);

	if (t55 != -202045389635372LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x341 = -1LL;
	static uint16_t x344 = UINT16_MAX;

	t56 = ((x341*(x342-x343))/x344);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x349 = 24758955U;
	volatile uint16_t x350 = 1U;
	uint64_t x351 = 27873307963988670LLU;
	static int32_t x352 = INT32_MAX;

	t57 = ((x349*(x350-x351))/x352);

	if (t57 != 7269766224LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x355 = 579935332LL;
	static uint8_t x356 = 65U;
	static volatile int64_t t58 = 48LL;

	t58 = ((x353*(x354-x355))/x356);

	if (t58 != -186428515098LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x362 = -1226;
	volatile int32_t x364 = INT32_MIN;

	t59 = ((x361*(x362-x363))/x364);

	if (t59 != 6LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MAX;
	static uint64_t x375 = 10637703LLU;
	uint8_t x376 = 9U;
	volatile uint64_t t60 = 5957709046095318611LLU;

	t60 = ((x373*(x374-x375))/x376);

	if (t60 != 2049638152952889828LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x378 = INT8_MAX;
	int8_t x379 = -1;
	static int32_t t61 = -13;

	t61 = ((x377*(x378-x379))/x380);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x381 = 17052097466985LLU;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = INT8_MAX;
	volatile int32_t x384 = -1;
	volatile uint64_t t62 = 11950503503339LLU;

	t62 = ((x381*(x382-x383))/x384);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x385 = 214658LLU;
	volatile int8_t x387 = INT8_MIN;
	int32_t x388 = INT32_MIN;
	static volatile uint64_t t63 = 406297370464793LLU;

	t63 = ((x385*(x386-x387))/x388);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x393 = 1U;
	static volatile int8_t x394 = INT8_MIN;
	uint32_t x396 = 2963102U;
	volatile uint32_t t64 = 30169833U;

	t64 = ((x393*(x394-x395))/x396);

	if (t64 != 1449U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x405 = 473LLU;
	int8_t x406 = INT8_MIN;
	static uint32_t x407 = 666298U;
	int32_t x408 = -1;
	volatile uint64_t t65 = 3LLU;

	t65 = ((x405*(x406-x407))/x408);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x413 = 31U;
	uint16_t x414 = UINT16_MAX;
	uint64_t x415 = 301656478LLU;
	int16_t x416 = -3;
	uint64_t t66 = 7640LLU;

	t66 = ((x413*(x414-x415))/x416);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x418 = -6;
	int32_t x419 = 45;
	int16_t x420 = 2869;
	volatile int32_t t67 = -361286610;

	t67 = ((x417*(x418-x419))/x420);

	if (t67 != -1164) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x422 = 0U;
	volatile uint8_t x423 = UINT8_MAX;
	int64_t x424 = 4173036751272LL;
	static int64_t t68 = 1120102854080LL;

	t68 = ((x421*(x422-x423))/x424);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x425 = INT16_MAX;
	uint16_t x426 = 16794U;
	int16_t x427 = -1;
	int16_t x428 = INT16_MAX;
	static int32_t t69 = -277;

	t69 = ((x425*(x426-x427))/x428);

	if (t69 != 16795) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x433 = -1;
	int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MIN;
	int32_t x436 = -6501;
	volatile int32_t t70 = 10;

	t70 = ((x433*(x434-x435))/x436);

	if (t70 != -330331) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x437 = 4;
	int32_t x439 = 9;
	int64_t x440 = -16728901LL;

	t71 = ((x437*(x438-x439))/x440);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x449 = INT64_MIN;
	uint64_t x450 = 3105LLU;
	int64_t x451 = -1LL;
	int64_t x452 = INT64_MIN;

	t72 = ((x449*(x450-x451))/x452);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x453 = -1;
	int32_t x454 = INT32_MIN;
	volatile int64_t x456 = INT64_MAX;
	int64_t t73 = -307185573296305718LL;

	t73 = ((x453*(x454-x455))/x456);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x457 = 61U;
	int16_t x458 = -201;
	int32_t t74 = 47;

	t74 = ((x457*(x458-x459))/x460);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x461 = UINT32_MAX;
	volatile uint64_t x462 = UINT64_MAX;
	int16_t x463 = INT16_MIN;
	int64_t x464 = INT64_MIN;

	t75 = ((x461*(x462-x463))/x464);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x465 = 0;
	static volatile uint16_t x466 = UINT16_MAX;
	static int32_t x467 = 267147590;
	int16_t x468 = INT16_MIN;
	volatile int32_t t76 = 161;

	t76 = ((x465*(x466-x467))/x468);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x469 = UINT16_MAX;
	uint32_t x470 = UINT32_MAX;
	uint16_t x471 = UINT16_MAX;
	int8_t x472 = 3;
	uint32_t t77 = 21915774U;

	t77 = ((x469*(x470-x471))/x472);

	if (t77 != 21845U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x473 = INT8_MIN;
	volatile uint64_t x474 = UINT64_MAX;
	volatile int32_t x475 = INT32_MIN;
	int32_t x476 = INT32_MIN;

	t78 = ((x473*(x474-x475))/x476);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x485 = 14;
	static int8_t x486 = -46;
	static volatile uint64_t x488 = UINT64_MAX;

	t79 = ((x485*(x486-x487))/x488);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x493 = 7LLU;
	static volatile int8_t x494 = -15;
	int32_t x495 = 5655197;
	int16_t x496 = -2;
	static uint64_t t80 = 1466026807266592191LLU;

	t80 = ((x493*(x494-x495))/x496);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x497 = -131;
	int16_t x498 = -1;
	static uint32_t x499 = 3U;
	static int64_t x500 = -205760LL;

	t81 = ((x497*(x498-x499))/x500);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x501 = UINT32_MAX;
	int16_t x502 = -4;
	int32_t x503 = INT32_MIN;
	int16_t x504 = -1;

	t82 = ((x501*(x502-x503))/x504);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x505 = INT8_MIN;
	uint64_t x506 = UINT64_MAX;
	uint8_t x507 = 2U;
	int32_t x508 = 511683;
	static uint64_t t83 = 379161583800206125LLU;

	t83 = ((x505*(x506-x507))/x508);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x510 = 225U;
	int16_t x512 = 7;
	uint64_t t84 = 327946222485067LLU;

	t84 = ((x509*(x510-x511))/x512);

	if (t84 != 928460817082357344LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x513 = -1LL;
	int64_t x514 = 1LL;
	static volatile int32_t x515 = INT32_MIN;
	int32_t x516 = INT32_MIN;

	t85 = ((x513*(x514-x515))/x516);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x517 = -1;
	static int8_t x518 = INT8_MIN;
	volatile int8_t x519 = -1;
	static uint8_t x520 = UINT8_MAX;
	volatile int32_t t86 = 7;

	t86 = ((x517*(x518-x519))/x520);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x521 = INT8_MIN;
	int8_t x522 = INT8_MIN;
	volatile int64_t x523 = 49629LL;
	uint64_t x524 = UINT64_MAX;
	uint64_t t87 = 14506309207LLU;

	t87 = ((x521*(x522-x523))/x524);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x525 = -31;
	int8_t x526 = 11;
	uint32_t x528 = 36948359U;
	volatile uint32_t t88 = 685091662U;

	t88 = ((x525*(x526-x527))/x528);

	if (t88 != 116U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x530 = 33U;
	uint8_t x531 = 78U;
	uint32_t t89 = 7482U;

	t89 = ((x529*(x530-x531))/x532);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x537 = 0LLU;
	int64_t x538 = INT64_MAX;
	int16_t x539 = 19;
	int64_t x540 = -1LL;
	volatile uint64_t t90 = 45752299LLU;

	t90 = ((x537*(x538-x539))/x540);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x541 = 456U;
	int8_t x543 = INT8_MIN;
	volatile int32_t t91 = 0;

	t91 = ((x541*(x542-x543))/x544);

	if (t91 != 5000040) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x545 = -1;
	uint16_t x546 = UINT16_MAX;
	volatile int8_t x547 = -1;
	int8_t x548 = INT8_MIN;

	t92 = ((x545*(x546-x547))/x548);

	if (t92 != 512) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x549 = INT32_MIN;
	int64_t x550 = INT64_MIN;
	uint64_t x551 = 39655787886LLU;
	uint64_t x552 = 7643047412773210596LLU;
	uint64_t t93 = 2393034671796657LLU;

	t93 = ((x549*(x550-x551))/x552);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x561 = INT16_MAX;
	static int16_t x562 = -179;
	uint64_t x563 = UINT64_MAX;
	uint8_t x564 = 109U;
	volatile uint64_t t94 = 14481586375177493LLU;

	t94 = ((x561*(x562-x563))/x564);

	if (t94 != 169236184162419441LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = INT16_MAX;
	static int16_t x566 = INT16_MIN;
	volatile int8_t x567 = INT8_MIN;
	int16_t x568 = -623;
	volatile int32_t t95 = 1;

	t95 = ((x565*(x566-x567))/x568);

	if (t95 != 1716717) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x571 = 627U;
	int32_t x572 = -1;
	volatile int32_t t96 = -484070982;

	t96 = ((x569*(x570-x571))/x572);

	if (t96 != 3648) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x574 = 81533680711LLU;
	int8_t x575 = 0;
	static uint64_t t97 = 495514LLU;

	t97 = ((x573*(x574-x575))/x576);

	if (t97 != 37LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x577 = 9630;
	int16_t x578 = 482;
	volatile uint64_t x579 = 10856LLU;
	int64_t x580 = INT64_MIN;
	static volatile uint64_t t98 = 104446071LLU;

	t98 = ((x577*(x578-x579))/x580);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x589 = -1;
	static volatile int16_t x590 = -1;
	int32_t x591 = INT32_MIN;
	uint16_t x592 = 48U;
	volatile int32_t t99 = -681005174;

	t99 = ((x589*(x590-x591))/x592);

	if (t99 != -44739242) { NG(); } else { ; }
	
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

