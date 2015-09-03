#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = UINT32_MAX;
static volatile uint32_t x13 = UINT32_MAX;
volatile int64_t x14 = INT64_MAX;
volatile uint64_t t4 = 6LLU;
static int64_t x44 = -1LL;
int32_t x67 = -1;
int64_t x74 = INT64_MAX;
volatile int16_t x76 = -1;
volatile int64_t t10 = 32447LL;
uint8_t x90 = 1U;
uint32_t x91 = UINT32_MAX;
int32_t x94 = -17939;
int16_t x102 = -4;
volatile uint64_t x103 = 103831681944LLU;
uint64_t t13 = 168836347030LLU;
volatile int32_t t16 = -472373;
uint16_t x137 = 25482U;
int8_t x139 = -2;
int16_t x146 = 3;
uint8_t x148 = 1U;
volatile int64_t x155 = -55726440LL;
volatile int8_t x165 = INT8_MIN;
int32_t x166 = -624742;
volatile int32_t t21 = -69;
int64_t x169 = INT64_MIN;
int64_t t22 = -152830370491139LL;
uint32_t x179 = 6432277U;
volatile int16_t x182 = 0;
int64_t t24 = -1LL;
volatile int64_t t26 = -27LL;
uint16_t x209 = UINT16_MAX;
int16_t x210 = -6;
int16_t x212 = -2;
volatile uint8_t x225 = 1U;
int16_t x226 = -2888;
int64_t x227 = INT64_MIN;
uint16_t x231 = 30635U;
int64_t x235 = 2017787950726167561LL;
int64_t t32 = -14345LL;
int64_t x242 = INT64_MIN;
static volatile int64_t t33 = 43LL;
static volatile int32_t x254 = INT32_MIN;
int8_t x255 = -44;
uint8_t x256 = 12U;
int64_t x276 = INT64_MIN;
static volatile uint32_t t40 = 26191U;
volatile uint8_t x289 = 18U;
volatile int8_t x298 = INT8_MAX;
uint8_t x307 = 110U;
static int8_t x308 = INT8_MAX;
int8_t x316 = 1;
static uint32_t x337 = UINT32_MAX;
volatile int16_t x339 = -22;
uint64_t x340 = 1998934LLU;
volatile int32_t t49 = 84;
static int64_t x349 = INT64_MIN;
static volatile uint64_t x350 = 15LLU;
int64_t x352 = 3814958047521839321LL;
static uint64_t x383 = 31292333307634LLU;
static uint32_t x384 = UINT32_MAX;
int8_t x389 = -1;
int8_t x391 = -1;
volatile int8_t x425 = INT8_MIN;
int32_t x450 = INT32_MAX;
int64_t x451 = INT64_MIN;
int64_t x455 = INT64_MAX;
uint8_t x464 = 3U;
int32_t t63 = 174;
static uint8_t x471 = 46U;
int32_t x474 = -1;
uint64_t x475 = 1976617679422LLU;
static volatile int16_t x476 = INT16_MAX;
int32_t x501 = INT32_MIN;
volatile uint16_t x504 = UINT16_MAX;
int64_t t68 = 20680LL;
int8_t x534 = 1;
int32_t x542 = INT32_MIN;
int8_t x545 = 1;
volatile uint8_t x550 = 78U;
int32_t x552 = -1;
static int16_t x569 = INT16_MIN;
int8_t x572 = INT8_MAX;
int16_t x573 = INT16_MIN;
int32_t t80 = 7;
int8_t x592 = INT8_MIN;
int32_t t83 = -316;
volatile uint32_t x599 = 13U;
uint32_t t84 = 6887U;
static int16_t x613 = INT16_MAX;
int32_t x621 = -1;
uint16_t x624 = UINT16_MAX;
uint64_t t87 = 19189854827LLU;
uint64_t x629 = 872070627064986LLU;
int32_t x631 = -1363912;
int16_t x642 = -1;
static int32_t x661 = -18;
int32_t t94 = 1;
static uint32_t x666 = 13531418U;
int16_t x676 = 107;
int16_t x687 = -1;
volatile int32_t t98 = 50365;
int32_t t99 = -2915;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = -251LL;
	uint64_t x4 = 2525684601221901181LLU;
	volatile uint64_t t0 = 6846983072068687LLU;

	t0 = (x1/((x2^x3)/x4));

	if (t0 != 1317624576693539401LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x15 = 7357U;
	volatile uint8_t x16 = 15U;
	int64_t t1 = 0LL;

	t1 = (x13/((x14^x15)/x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = -1LL;
	uint16_t x26 = UINT16_MAX;
	volatile int32_t x27 = -1;
	int16_t x28 = INT16_MIN;
	volatile int64_t t2 = 444943328LL;

	t2 = (x25/((x26^x27)/x28));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x29 = INT8_MAX;
	int32_t x30 = -1;
	static uint32_t x31 = 27U;
	uint8_t x32 = 4U;
	uint32_t t3 = 8308451U;

	t3 = (x29/((x30^x31)/x32));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x37 = 134033319LLU;
	int64_t x38 = INT64_MIN;
	volatile int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;

	t4 = (x37/((x38^x39)/x40));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = INT8_MIN;
	static int32_t x42 = INT32_MAX;
	volatile int32_t x43 = INT32_MIN;
	int64_t t5 = -83994LL;

	t5 = (x41/((x42^x43)/x44));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x49 = -1;
	int64_t x50 = -2155138229LL;
	static uint8_t x51 = 48U;
	int16_t x52 = 1;
	int64_t t6 = -1578373727823LL;

	t6 = (x49/((x50^x51)/x52));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x57 = INT32_MIN;
	uint8_t x58 = UINT8_MAX;
	static int8_t x59 = 11;
	static int8_t x60 = INT8_MAX;
	static int32_t t7 = INT32_MIN;

	t7 = (x57/((x58^x59)/x60));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = -14;
	int32_t x68 = -1;
	static volatile int32_t t8 = -1005;

	t8 = (x65/((x66^x67)/x68));

	if (t8 != 9) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x73 = 7838822286212785483LLU;
	uint16_t x75 = 1U;
	volatile uint64_t t9 = 481176455725LLU;

	t9 = (x73/((x74^x75)/x76));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x77 = INT8_MAX;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MAX;
	int64_t x80 = 1170LL;

	t10 = (x77/((x78^x79)/x80));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x89 = INT32_MIN;
	uint16_t x92 = 1U;
	static uint32_t t11 = 47781U;

	t11 = (x89/((x90^x91)/x92));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x93 = 6993737559337021LLU;
	static uint32_t x95 = 148U;
	int64_t x96 = -1LL;
	volatile uint64_t t12 = 838615261LLU;

	t12 = (x93/((x94^x95)/x96));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x101 = -193;
	static int64_t x104 = 266306071985LL;

	t13 = (x101/((x102^x103)/x104));

	if (t13 != 266306075226LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x105 = 431749LLU;
	static uint32_t x106 = UINT32_MAX;
	int16_t x107 = INT16_MAX;
	int64_t x108 = -1LL;
	static uint64_t t14 = 6900LLU;

	t14 = (x105/((x106^x107)/x108));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	int64_t x115 = INT64_MIN;
	int64_t x116 = 10LL;
	static volatile int64_t t15 = -245LL;

	t15 = (x113/((x114^x115)/x116));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x117 = -1;
	int32_t x118 = -16147825;
	uint8_t x119 = UINT8_MAX;
	int8_t x120 = INT8_MAX;

	t16 = (x117/((x118^x119)/x120));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x133 = 820730805LLU;
	static volatile int32_t x134 = 1774;
	volatile int8_t x135 = INT8_MIN;
	volatile int8_t x136 = -1;
	uint64_t t17 = 3950313837040388LLU;

	t17 = (x133/((x134^x135)/x136));

	if (t17 != 487949LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x138 = INT64_MIN;
	int16_t x140 = 64;
	int64_t t18 = 3686527541443727LL;

	t18 = (x137/((x138^x139)/x140));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x145 = 116U;
	uint32_t x147 = 13U;
	volatile uint32_t t19 = 32136U;

	t19 = (x145/((x146^x147)/x148));

	if (t19 != 8U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x153 = INT32_MAX;
	int64_t x154 = INT64_MIN;
	volatile int8_t x156 = INT8_MIN;
	static volatile int64_t t20 = -303990558982020757LL;

	t20 = (x153/((x154^x155)/x156));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x167 = 487U;
	int8_t x168 = INT8_MIN;

	t21 = (x165/((x166^x167)/x168));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x170 = INT32_MAX;
	volatile int8_t x171 = INT8_MAX;
	int32_t x172 = -1;

	t22 = (x169/((x170^x171)/x172));

	if (t22 != 4294967552LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MIN;
	volatile int8_t x180 = 54;
	volatile uint32_t t23 = 0U;

	t23 = (x177/((x178^x179)/x180));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x181 = 351U;
	int64_t x183 = INT64_MIN;
	static int64_t x184 = -274LL;

	t24 = (x181/((x182^x183)/x184));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x189 = INT16_MIN;
	uint8_t x190 = UINT8_MAX;
	int8_t x191 = -1;
	int16_t x192 = -1;
	int32_t t25 = 15;

	t25 = (x189/((x190^x191)/x192));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MIN;
	int32_t x195 = 223;
	int32_t x196 = -1;

	t26 = (x193/((x194^x195)/x196));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x211 = INT16_MIN;
	int32_t t27 = -167;

	t27 = (x209/((x210^x211)/x212));

	if (t27 != -4) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	uint32_t x222 = 2796U;
	static volatile int32_t x223 = INT32_MIN;
	volatile int64_t x224 = -1540194242LL;
	int64_t t28 = 10368639785LL;

	t28 = (x221/((x222^x223)/x224));

	if (t28 != -255LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x228 = UINT16_MAX;
	volatile int64_t t29 = 9511074263372909LL;

	t29 = (x225/((x226^x227)/x228));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x229 = UINT8_MAX;
	volatile int32_t x230 = -7;
	static uint16_t x232 = 160U;
	static int32_t t30 = 7389126;

	t30 = (x229/((x230^x231)/x232));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x233 = -1774;
	int16_t x234 = INT16_MAX;
	volatile int32_t x236 = INT32_MIN;
	int64_t t31 = -337377855042512985LL;

	t31 = (x233/((x234^x235)/x236));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x237 = INT64_MAX;
	uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MAX;
	uint32_t x240 = 5U;

	t32 = (x237/((x238^x239)/x240));

	if (t32 != 10737418567LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x241 = 689U;
	int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MIN;

	t33 = (x241/((x242^x243)/x244));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x253 = -72235632;
	int32_t t34 = -606;

	t34 = (x253/((x254^x255)/x256));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x261 = -1;
	static uint8_t x262 = 20U;
	int32_t x263 = INT32_MIN;
	int8_t x264 = -2;
	int32_t t35 = -678;

	t35 = (x261/((x262^x263)/x264));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x265 = -1;
	int16_t x266 = 1684;
	volatile uint32_t x267 = UINT32_MAX;
	static uint8_t x268 = 2U;
	static uint32_t t36 = 1005450U;

	t36 = (x265/((x266^x267)/x268));

	if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x273 = 341U;
	uint64_t x274 = UINT64_MAX;
	uint8_t x275 = 75U;
	uint64_t t37 = 15525062LLU;

	t37 = (x273/((x274^x275)/x276));

	if (t37 != 341LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x277 = 0U;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	volatile int16_t x280 = 3870;
	volatile int64_t t38 = -2240LL;

	t38 = (x277/((x278^x279)/x280));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x281 = 169382828050449LLU;
	int8_t x282 = 1;
	uint64_t x283 = 4901218701080965192LLU;
	static uint16_t x284 = 4413U;
	volatile uint64_t t39 = 1168LLU;

	t39 = (x281/((x282^x283)/x284));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x285 = 26273U;
	volatile uint8_t x286 = 53U;
	volatile uint16_t x287 = UINT16_MAX;
	static int16_t x288 = INT16_MIN;

	t40 = (x285/((x286^x287)/x288));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x290 = INT64_MAX;
	uint8_t x291 = 0U;
	static uint32_t x292 = UINT32_MAX;
	volatile int64_t t41 = 1180329031101LL;

	t41 = (x289/((x290^x291)/x292));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x297 = -1;
	volatile int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MAX;
	volatile int32_t t42 = -194;

	t42 = (x297/((x298^x299)/x300));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x305 = INT32_MIN;
	volatile uint32_t x306 = 846453U;
	volatile uint32_t t43 = 104790U;

	t43 = (x305/((x306^x307)/x308));

	if (t43 != 322251U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x313 = -1;
	static volatile uint16_t x314 = 11U;
	static int16_t x315 = -1;
	volatile int32_t t44 = 57;

	t44 = (x313/((x314^x315)/x316));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x321 = -1LL;
	int16_t x322 = INT16_MAX;
	uint16_t x323 = 23U;
	static uint8_t x324 = 2U;
	volatile int64_t t45 = -141244707LL;

	t45 = (x321/((x322^x323)/x324));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x325 = -1;
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MAX;
	volatile int16_t x328 = 1;
	int32_t t46 = -23575;

	t46 = (x325/((x326^x327)/x328));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x338 = INT64_MAX;
	volatile uint64_t t47 = 2254291889LLU;

	t47 = (x337/((x338^x339)/x340));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x341 = INT8_MAX;
	int8_t x342 = 21;
	int32_t x343 = INT32_MAX;
	int8_t x344 = -11;
	int32_t t48 = -104591740;

	t48 = (x341/((x342^x343)/x344));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x345 = -1;
	static int16_t x346 = INT16_MAX;
	uint16_t x347 = UINT16_MAX;
	int32_t x348 = -4435;

	t49 = (x345/((x346^x347)/x348));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x351 = -1;
	static volatile uint64_t t50 = 81178664LLU;

	t50 = (x349/((x350^x351)/x352));

	if (t50 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x365 = 5547261U;
	uint32_t x366 = UINT32_MAX;
	volatile int64_t x367 = -1LL;
	uint16_t x368 = UINT16_MAX;
	volatile int64_t t51 = 632509079LL;

	t51 = (x365/((x366^x367)/x368));

	if (t51 != -84LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x373 = 15LL;
	volatile uint8_t x374 = 14U;
	int64_t x375 = INT64_MAX;
	volatile int32_t x376 = -1;
	volatile int64_t t52 = 16101LL;

	t52 = (x373/((x374^x375)/x376));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MIN;
	volatile uint64_t t53 = 25873781LLU;

	t53 = (x381/((x382^x383)/x384));

	if (t53 != 4294974580LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x390 = 0U;
	static int32_t x392 = -1;
	int32_t t54 = -285;

	t54 = (x389/((x390^x391)/x392));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x413 = 5U;
	int8_t x414 = -1;
	int32_t x415 = 19913;
	static uint8_t x416 = UINT8_MAX;
	volatile int32_t t55 = 17406748;

	t55 = (x413/((x414^x415)/x416));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x417 = 831;
	int8_t x418 = INT8_MAX;
	int16_t x419 = -556;
	static uint8_t x420 = UINT8_MAX;
	int32_t t56 = 11462247;

	t56 = (x417/((x418^x419)/x420));

	if (t56 != -415) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x421 = 1644025438U;
	uint64_t x422 = 11274727551573567LLU;
	volatile uint64_t x423 = 1426597LLU;
	static int16_t x424 = 2;
	static uint64_t t57 = 43993LLU;

	t57 = (x421/((x422^x423)/x424));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x426 = INT64_MAX;
	volatile int32_t x427 = 653161;
	int8_t x428 = INT8_MAX;
	volatile int64_t t58 = -32328LL;

	t58 = (x425/((x426^x427)/x428));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x429 = INT64_MIN;
	int16_t x430 = -1;
	static volatile int64_t x431 = 31976343698538LL;
	uint64_t x432 = 8170473235LLU;
	static uint64_t t59 = 60087304787611056LLU;

	t59 = (x429/((x430^x431)/x432));

	if (t59 != 4085243699LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x449 = 2;
	int8_t x452 = -1;
	volatile int64_t t60 = -70929142871614183LL;

	t60 = (x449/((x450^x451)/x452));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x453 = -54;
	uint64_t x454 = 3703LLU;
	uint32_t x456 = UINT32_MAX;
	uint64_t t61 = 7379081LLU;

	t61 = (x453/((x454^x455)/x456));

	if (t61 != 8589934591LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MAX;
	volatile uint64_t x459 = 926812323226LLU;
	int8_t x460 = 21;
	uint64_t t62 = 14388551330066889LLU;

	t62 = (x457/((x458^x459)/x460));

	if (t62 != 417972027LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x461 = INT16_MIN;
	int16_t x462 = INT16_MIN;
	int32_t x463 = 6;

	t63 = (x461/((x462^x463)/x464));

	if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x469 = UINT32_MAX;
	int64_t x470 = INT64_MIN;
	volatile int32_t x472 = -25300;
	volatile int64_t t64 = 233117763463900871LL;

	t64 = (x469/((x470^x471)/x472));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x473 = UINT8_MAX;
	uint64_t t65 = 1143843822568541467LLU;

	t65 = (x473/((x474^x475)/x476));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x485 = -1;
	int64_t x486 = -1LL;
	int64_t x487 = INT64_MIN;
	int64_t x488 = -3066150306390914988LL;
	int64_t t66 = -3131842LL;

	t66 = (x485/((x486^x487)/x488));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x493 = INT64_MIN;
	int32_t x494 = INT32_MIN;
	uint64_t x495 = 387748488215802LLU;
	int8_t x496 = 12;
	static volatile uint64_t t67 = 3684LLU;

	t67 = (x493/((x494^x495)/x496));

	if (t67 != 6LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x502 = -1LL;
	static int32_t x503 = INT32_MAX;

	t68 = (x501/((x502^x503)/x504));

	if (t68 != 65536LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x509 = 61091443252156672LLU;
	int8_t x510 = INT8_MAX;
	uint8_t x511 = UINT8_MAX;
	volatile uint32_t x512 = 2U;
	static uint64_t t69 = 3539019637LLU;

	t69 = (x509/((x510^x511)/x512));

	if (t69 != 954553800814948LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x517 = INT32_MIN;
	int64_t x518 = INT64_MIN;
	int16_t x519 = -1;
	volatile int8_t x520 = -11;
	int64_t t70 = 27LL;

	t70 = (x517/((x518^x519)/x520));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x521 = -1;
	volatile int64_t x522 = INT64_MIN;
	static volatile uint32_t x523 = 1U;
	int64_t x524 = 1LL;
	static int64_t t71 = -977260709116810LL;

	t71 = (x521/((x522^x523)/x524));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x533 = INT16_MAX;
	int64_t x535 = INT64_MIN;
	int8_t x536 = -1;
	volatile int64_t t72 = -43047986137LL;

	t72 = (x533/((x534^x535)/x536));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x541 = 14U;
	static int16_t x543 = INT16_MIN;
	static uint64_t x544 = 153089372LLU;
	uint64_t t73 = 32147287350521439LLU;

	t73 = (x541/((x542^x543)/x544));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x546 = UINT16_MAX;
	int8_t x547 = 17;
	static volatile int32_t x548 = -1;
	int32_t t74 = -1;

	t74 = (x545/((x546^x547)/x548));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x549 = 36;
	static volatile int64_t x551 = -1LL;
	static int64_t t75 = -76371610LL;

	t75 = (x549/((x550^x551)/x552));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x553 = -8;
	uint64_t x554 = 1132LLU;
	static int32_t x555 = INT32_MIN;
	uint64_t x556 = 2365715LLU;
	static uint64_t t76 = 71006659LLU;

	t76 = (x553/((x554^x555)/x556));

	if (t76 != 2365715LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x565 = 1;
	int16_t x566 = 4637;
	int8_t x567 = INT8_MAX;
	int32_t x568 = 113;
	volatile int32_t t77 = 52855773;

	t77 = (x565/((x566^x567)/x568));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x570 = INT16_MIN;
	int8_t x571 = INT8_MIN;
	int32_t t78 = 508774;

	t78 = (x569/((x570^x571)/x572));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x574 = 823603563007LL;
	int16_t x575 = INT16_MIN;
	int32_t x576 = 2020553;
	volatile int64_t t79 = 651LL;

	t79 = (x573/((x574^x575)/x576));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x577 = UINT8_MAX;
	uint16_t x578 = 33U;
	static int32_t x579 = INT32_MIN;
	int16_t x580 = INT16_MIN;

	t80 = (x577/((x578^x579)/x580));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x585 = INT8_MIN;
	int16_t x586 = -74;
	uint16_t x587 = UINT16_MAX;
	uint8_t x588 = 123U;
	volatile int32_t t81 = -289;

	t81 = (x585/((x586^x587)/x588));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x589 = 14U;
	volatile uint16_t x590 = 14684U;
	int16_t x591 = INT16_MAX;
	int32_t t82 = -604698;

	t82 = (x589/((x590^x591)/x592));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x593 = -289;
	volatile int32_t x594 = INT32_MIN;
	int8_t x595 = INT8_MIN;
	int16_t x596 = INT16_MAX;

	t83 = (x593/((x594^x595)/x596));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x597 = -1;
	int32_t x598 = INT32_MIN;
	uint32_t x600 = 970772534U;

	t84 = (x597/((x598^x599)/x600));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x614 = INT16_MIN;
	int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MIN;
	int32_t t85 = -18030;

	t85 = (x613/((x614^x615)/x616));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x617 = 28493U;
	volatile uint64_t x618 = UINT64_MAX;
	int16_t x619 = 43;
	int16_t x620 = 21;
	volatile uint64_t t86 = 228137246028LLU;

	t86 = (x617/((x618^x619)/x620));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x622 = 6098675LLU;
	int16_t x623 = INT16_MIN;

	t87 = (x621/((x622^x623)/x624));

	if (t87 != 65535LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x630 = UINT16_MAX;
	int16_t x632 = INT16_MAX;
	uint64_t t88 = 39393140021LLU;

	t88 = (x629/((x630^x631)/x632));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x633 = -1;
	int64_t x634 = 19LL;
	static int16_t x635 = -1;
	static int16_t x636 = -1;
	static int64_t t89 = -587840047985547LL;

	t89 = (x633/((x634^x635)/x636));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x637 = INT64_MAX;
	int32_t x638 = INT32_MAX;
	int64_t x639 = INT64_MIN;
	int64_t x640 = -1LL;
	volatile int64_t t90 = -69095LL;

	t90 = (x637/((x638^x639)/x640));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x641 = INT32_MIN;
	int8_t x643 = -3;
	int32_t x644 = -1;
	static int32_t t91 = 15183;

	t91 = (x641/((x642^x643)/x644));

	if (t91 != 1073741824) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x645 = 16494965U;
	int8_t x646 = INT8_MIN;
	int32_t x647 = INT32_MAX;
	uint32_t x648 = 437U;
	volatile uint32_t t92 = 10935U;

	t92 = (x645/((x646^x647)/x648));

	if (t92 != 3U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x653 = 2018647;
	uint8_t x654 = 6U;
	int32_t x655 = INT32_MIN;
	int8_t x656 = -1;
	int32_t t93 = -65434165;

	t93 = (x653/((x654^x655)/x656));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x662 = 61U;
	static int32_t x663 = INT32_MAX;
	int32_t x664 = -1;

	t94 = (x661/((x662^x663)/x664));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x665 = INT64_MAX;
	int16_t x667 = -1844;
	static volatile int64_t x668 = -1LL;
	volatile int64_t t95 = -78925LL;

	t95 = (x665/((x666^x667)/x668));

	if (t95 != -2154271392LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x669 = 7085833421866374LLU;
	int64_t x670 = INT64_MIN;
	int8_t x671 = INT8_MIN;
	int32_t x672 = INT32_MIN;
	static uint64_t t96 = 153LLU;

	t96 = (x669/((x670^x671)/x672));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x673 = INT8_MIN;
	volatile uint16_t x674 = 23517U;
	volatile int64_t x675 = -190210480065LL;
	volatile int64_t t97 = -49756350542185LL;

	t97 = (x673/((x674^x675)/x676));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x685 = INT16_MAX;
	int8_t x686 = INT8_MAX;
	static int32_t x688 = -1;

	t98 = (x685/((x686^x687)/x688));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x693 = -31;
	int8_t x694 = -1;
	static int16_t x695 = INT16_MAX;
	int8_t x696 = -1;

	t99 = (x693/((x694^x695)/x696));

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

