#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 214U;
int32_t x7 = INT32_MIN;
volatile int32_t x28 = -1;
uint8_t x33 = 14U;
int8_t x44 = -15;
static uint32_t x53 = 148U;
int8_t x84 = INT8_MIN;
uint16_t x109 = UINT16_MAX;
int8_t x112 = 0;
volatile int64_t t10 = 403548LL;
static volatile uint64_t x113 = 25090089669LLU;
uint64_t t11 = 56719702LLU;
volatile int32_t x123 = INT32_MIN;
volatile int64_t x160 = INT64_MIN;
volatile int32_t x173 = INT32_MIN;
int32_t t16 = 22739154;
static uint64_t x179 = 7968072692LLU;
volatile uint8_t x202 = 59U;
int32_t x203 = -1;
int8_t x214 = 7;
int16_t x219 = INT16_MIN;
volatile int64_t t23 = -882943LL;
int32_t t24 = 951094751;
uint16_t x251 = UINT16_MAX;
int8_t x263 = -1;
volatile int64_t x264 = 10841467225LL;
uint32_t x265 = 113U;
int64_t t28 = 11944714639LL;
volatile uint16_t x289 = 6U;
int32_t x292 = INT32_MAX;
uint64_t x294 = 1LLU;
volatile int8_t x296 = 1;
volatile int32_t t32 = -32;
int64_t x302 = -22LL;
volatile int64_t t33 = -18907902910903917LL;
uint16_t x310 = 306U;
uint32_t x317 = UINT32_MAX;
static uint32_t t36 = 67U;
uint8_t x326 = UINT8_MAX;
static uint8_t x332 = 14U;
int64_t x334 = -674LL;
int64_t x365 = INT64_MIN;
uint8_t x368 = 5U;
volatile int64_t t44 = 475297468643176295LL;
uint16_t x384 = 501U;
volatile uint64_t x388 = 499967303547411LLU;
int16_t x394 = INT16_MIN;
uint8_t x411 = UINT8_MAX;
volatile int16_t x416 = -1;
int32_t x442 = INT32_MIN;
uint16_t x443 = 2U;
uint32_t x444 = UINT32_MAX;
int64_t t55 = -41107LL;
int64_t x455 = INT64_MIN;
int8_t x456 = INT8_MIN;
static uint32_t x459 = 77973721U;
int32_t x461 = INT32_MIN;
int32_t t58 = -31942;
uint64_t x506 = UINT64_MAX;
int16_t x516 = INT16_MAX;
uint16_t x520 = UINT16_MAX;
int64_t x521 = INT64_MAX;
volatile int64_t t69 = -6LL;
volatile uint64_t t70 = 4325621LLU;
static int64_t x594 = INT64_MAX;
int64_t x596 = INT64_MAX;
int64_t x629 = -14910153503804858LL;
static uint16_t x635 = 0U;
int32_t t76 = 1;
volatile int16_t x639 = 0;
int16_t x647 = INT16_MAX;
volatile uint32_t t78 = 25586421U;
volatile int32_t x657 = 176615;
uint32_t x658 = UINT32_MAX;
int32_t x660 = INT32_MAX;
volatile int32_t t80 = 917084;
static volatile uint64_t x675 = 194060579879LLU;
int8_t x676 = INT8_MIN;
int64_t t81 = 2806LL;
uint64_t x679 = 1962LLU;
static int64_t x680 = INT64_MAX;
int8_t x686 = 0;
int32_t x693 = -1;
int64_t x716 = 6163753760765181LL;
int32_t t86 = -51;
static int32_t x719 = INT32_MIN;
static volatile int64_t t88 = 0LL;
volatile uint16_t x734 = 8U;
static int32_t t90 = 39647553;
volatile int8_t x742 = -1;
static int64_t x746 = INT64_MAX;
volatile int64_t x747 = 2131LL;
volatile int64_t x757 = INT64_MAX;
volatile int16_t x760 = INT16_MIN;
static volatile int64_t t93 = 496904939362372LL;
uint8_t x762 = 1U;
int16_t x784 = -1;
static uint64_t x792 = 134780291099402LLU;
static int32_t t97 = 22629;
static uint32_t x813 = 12U;
int32_t x816 = -1;


void f0(void) {
	int16_t x6 = 3;
	static int32_t x8 = 12166;
	volatile int32_t t0 = -3;

	t0 = ((x5|x6)%(x7<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MIN;
	static int16_t x14 = -154;
	int64_t x15 = INT64_MIN;
	int8_t x16 = -1;
	volatile int32_t t1 = 1495;

	t1 = ((x13|x14)%(x15<x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = 1405;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 93LLU;
	volatile int32_t t2 = 66258;

	t2 = ((x25|x26)%(x27<x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x34 = 2U;
	static int8_t x35 = INT8_MAX;
	int64_t x36 = INT64_MAX;
	volatile int32_t t3 = -4926;

	t3 = ((x33|x34)%(x35<x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x41 = -361902;
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	volatile uint64_t t4 = 393245744LLU;

	t4 = ((x41|x42)%(x43<x44));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x54 = -1LL;
	int64_t x55 = 1383151688949703LL;
	uint64_t x56 = UINT64_MAX;
	int64_t t5 = -6638LL;

	t5 = ((x53|x54)%(x55<x56));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x57 = 124576U;
	static volatile uint8_t x58 = 0U;
	volatile int32_t x59 = 6;
	static volatile uint8_t x60 = UINT8_MAX;
	volatile uint32_t t6 = 110U;

	t6 = ((x57|x58)%(x59<x60));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x77 = 2;
	volatile int8_t x78 = -1;
	static int32_t x79 = INT32_MIN;
	uint16_t x80 = UINT16_MAX;
	int32_t t7 = 217972832;

	t7 = ((x77|x78)%(x79<x80));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x81 = -1;
	int32_t x82 = INT32_MIN;
	uint64_t x83 = 201LLU;
	volatile int32_t t8 = -413831406;

	t8 = ((x81|x82)%(x83<x84));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x93 = -27;
	int8_t x94 = INT8_MIN;
	int64_t x95 = -157267001390LL;
	int16_t x96 = 11533;
	volatile int32_t t9 = 3355;

	t9 = ((x93|x94)%(x95<x96));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x110 = INT64_MIN;
	static volatile int8_t x111 = -1;

	t10 = ((x109|x110)%(x111<x112));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = -1;
	uint8_t x116 = UINT8_MAX;

	t11 = ((x113|x114)%(x115<x116));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x121 = INT8_MAX;
	volatile int32_t x122 = 613839;
	int64_t x124 = -1LL;
	volatile int32_t t12 = 216935278;

	t12 = ((x121|x122)%(x123<x124));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	static volatile uint16_t x131 = UINT16_MAX;
	uint64_t x132 = UINT64_MAX;
	static int32_t t13 = -3;

	t13 = ((x129|x130)%(x131<x132));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x157 = -1;
	int8_t x158 = 4;
	uint64_t x159 = 44572LLU;
	volatile int32_t t14 = 143187;

	t14 = ((x157|x158)%(x159<x160));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x169 = -130105;
	uint64_t x170 = 27LLU;
	static int32_t x171 = -652;
	volatile uint16_t x172 = UINT16_MAX;
	volatile uint64_t t15 = 746952896652815795LLU;

	t15 = ((x169|x170)%(x171<x172));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x174 = 227;
	int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;

	t16 = ((x173|x174)%(x175<x176));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x177 = 35U;
	static volatile uint64_t x178 = UINT64_MAX;
	int8_t x180 = INT8_MIN;
	uint64_t t17 = 0LLU;

	t17 = ((x177|x178)%(x179<x180));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x189 = -46;
	int8_t x190 = INT8_MAX;
	int8_t x191 = 1;
	int32_t x192 = 68150;
	volatile int32_t t18 = -39;

	t18 = ((x189|x190)%(x191<x192));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x201 = UINT32_MAX;
	uint8_t x204 = 2U;
	uint32_t t19 = 43U;

	t19 = ((x201|x202)%(x203<x204));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x209 = -1LL;
	int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	int64_t x212 = 1095936566663736330LL;
	volatile int64_t t20 = 11520474260LL;

	t20 = ((x209|x210)%(x211<x212));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x213 = INT8_MAX;
	int8_t x215 = -1;
	uint8_t x216 = UINT8_MAX;
	int32_t t21 = -1;

	t21 = ((x213|x214)%(x215<x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x217 = UINT32_MAX;
	static uint16_t x218 = 1021U;
	int16_t x220 = -60;
	uint32_t t22 = 7252474U;

	t22 = ((x217|x218)%(x219<x220));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x233 = 42890986LL;
	int8_t x234 = -1;
	int64_t x235 = INT64_MIN;
	volatile int16_t x236 = INT16_MAX;

	t23 = ((x233|x234)%(x235<x236));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x241 = -3;
	uint16_t x242 = UINT16_MAX;
	volatile int8_t x243 = -3;
	static int64_t x244 = 6996096992676241LL;

	t24 = ((x241|x242)%(x243<x244));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x249 = INT16_MIN;
	static int64_t x250 = -1LL;
	static uint64_t x252 = UINT64_MAX;
	int64_t t25 = -2299831545945640736LL;

	t25 = ((x249|x250)%(x251<x252));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x261 = INT32_MIN;
	uint64_t x262 = 4083211604445741LLU;
	static volatile uint64_t t26 = 139LLU;

	t26 = ((x261|x262)%(x263<x264));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x266 = INT32_MAX;
	int32_t x267 = INT32_MIN;
	volatile int8_t x268 = -15;
	uint32_t t27 = 17564U;

	t27 = ((x265|x266)%(x267<x268));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x273 = 11U;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MAX;
	uint64_t x276 = 4236751034704353LLU;

	t28 = ((x273|x274)%(x275<x276));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x281 = 2561U;
	uint16_t x282 = 26394U;
	static int32_t x283 = -1;
	uint8_t x284 = 38U;
	static int32_t t29 = -296408488;

	t29 = ((x281|x282)%(x283<x284));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x290 = -186157562LL;
	volatile int8_t x291 = 6;
	int64_t t30 = 395LL;

	t30 = ((x289|x290)%(x291<x292));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x293 = -1;
	int64_t x295 = INT64_MIN;
	volatile uint64_t t31 = 120959639LLU;

	t31 = ((x293|x294)%(x295<x296));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x297 = INT8_MIN;
	int16_t x298 = 6082;
	uint32_t x299 = 217022736U;
	static uint32_t x300 = UINT32_MAX;

	t32 = ((x297|x298)%(x299<x300));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x301 = 647U;
	uint64_t x303 = 520LLU;
	int64_t x304 = INT64_MIN;

	t33 = ((x301|x302)%(x303<x304));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x309 = 1317609766778LLU;
	static int64_t x311 = -1LL;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t34 = 747521LLU;

	t34 = ((x309|x310)%(x311<x312));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x313 = 15745LLU;
	int64_t x314 = -62196LL;
	static uint16_t x315 = UINT16_MAX;
	int64_t x316 = 247677717598LL;
	uint64_t t35 = 6314829611472210LLU;

	t35 = ((x313|x314)%(x315<x316));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x318 = INT8_MIN;
	static int16_t x319 = INT16_MIN;
	int64_t x320 = -1LL;

	t36 = ((x317|x318)%(x319<x320));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x325 = INT8_MIN;
	static int16_t x327 = INT16_MIN;
	static uint32_t x328 = UINT32_MAX;
	int32_t t37 = -1;

	t37 = ((x325|x326)%(x327<x328));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x329 = -1;
	int64_t x330 = -276835679753843811LL;
	uint8_t x331 = 3U;
	volatile int64_t t38 = -4149571LL;

	t38 = ((x329|x330)%(x331<x332));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x333 = -1;
	int8_t x335 = -4;
	int8_t x336 = -1;
	int64_t t39 = 63LL;

	t39 = ((x333|x334)%(x335<x336));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x341 = -934;
	int8_t x342 = -1;
	static int32_t x343 = -160031649;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t40 = -299818422;

	t40 = ((x341|x342)%(x343<x344));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x345 = 32231845;
	int64_t x346 = 18824LL;
	int8_t x347 = INT8_MIN;
	uint8_t x348 = 14U;
	int64_t t41 = 203LL;

	t41 = ((x345|x346)%(x347<x348));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x353 = UINT16_MAX;
	volatile int32_t x354 = -1;
	int64_t x355 = -1LL;
	uint32_t x356 = UINT32_MAX;
	volatile int32_t t42 = -1;

	t42 = ((x353|x354)%(x355<x356));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x357 = 48066371605868049LLU;
	int64_t x358 = INT64_MAX;
	static uint8_t x359 = 3U;
	int16_t x360 = INT16_MAX;
	uint64_t t43 = 7045618676992677910LLU;

	t43 = ((x357|x358)%(x359<x360));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x366 = -1;
	static volatile int16_t x367 = -1;

	t44 = ((x365|x366)%(x367<x368));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x377 = 11473;
	volatile uint32_t x378 = 8U;
	uint16_t x379 = 0U;
	volatile int16_t x380 = INT16_MAX;
	static uint32_t t45 = 387U;

	t45 = ((x377|x378)%(x379<x380));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x381 = UINT64_MAX;
	static int64_t x382 = INT64_MIN;
	int8_t x383 = -20;
	volatile uint64_t t46 = 698764411352LLU;

	t46 = ((x381|x382)%(x383<x384));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x385 = 8122646U;
	int32_t x386 = INT32_MIN;
	int32_t x387 = 75160;
	volatile uint32_t t47 = 3253U;

	t47 = ((x385|x386)%(x387<x388));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x389 = 335831860458126522LLU;
	uint8_t x390 = 95U;
	uint32_t x391 = 3131325U;
	volatile int32_t x392 = INT32_MIN;
	static volatile uint64_t t48 = 30014925LLU;

	t48 = ((x389|x390)%(x391<x392));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x393 = INT16_MIN;
	static int16_t x395 = -1;
	int16_t x396 = INT16_MAX;
	volatile int32_t t49 = 342435524;

	t49 = ((x393|x394)%(x395<x396));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x401 = -1021;
	static volatile int32_t x402 = INT32_MIN;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t50 = -450;

	t50 = ((x401|x402)%(x403<x404));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = UINT32_MAX;
	uint64_t x412 = 123752386LLU;
	uint32_t t51 = 22626671U;

	t51 = ((x409|x410)%(x411<x412));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint16_t x414 = 0U;
	uint32_t x415 = 1274316U;
	uint64_t t52 = 1902217675755LLU;

	t52 = ((x413|x414)%(x415<x416));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x429 = -1;
	int32_t x430 = -1;
	int8_t x431 = -7;
	int8_t x432 = -1;
	static volatile int32_t t53 = 180;

	t53 = ((x429|x430)%(x431<x432));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x437 = -1;
	static int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	uint16_t x440 = UINT16_MAX;
	int32_t t54 = -39;

	t54 = ((x437|x438)%(x439<x440));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x441 = -1LL;

	t55 = ((x441|x442)%(x443<x444));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x453 = INT32_MAX;
	volatile int16_t x454 = INT16_MIN;
	volatile int32_t t56 = -11;

	t56 = ((x453|x454)%(x455<x456));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x457 = 53U;
	volatile uint8_t x458 = 21U;
	int8_t x460 = -1;
	volatile int32_t t57 = -141638;

	t57 = ((x457|x458)%(x459<x460));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x462 = INT32_MAX;
	uint64_t x463 = 1LLU;
	int32_t x464 = INT32_MIN;

	t58 = ((x461|x462)%(x463<x464));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x465 = -193;
	uint16_t x466 = 5042U;
	int32_t x467 = -798550;
	int32_t x468 = -99035;
	int32_t t59 = 35224;

	t59 = ((x465|x466)%(x467<x468));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x469 = INT64_MIN;
	uint32_t x470 = 385189503U;
	int32_t x471 = INT32_MAX;
	uint32_t x472 = UINT32_MAX;
	static volatile int64_t t60 = 7150LL;

	t60 = ((x469|x470)%(x471<x472));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x477 = INT16_MIN;
	uint64_t x478 = UINT64_MAX;
	int16_t x479 = 1;
	volatile uint8_t x480 = 2U;
	volatile uint64_t t61 = 13635438341931588LLU;

	t61 = ((x477|x478)%(x479<x480));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x481 = INT16_MAX;
	uint8_t x482 = 44U;
	uint16_t x483 = 4620U;
	uint64_t x484 = 10951935729525585LLU;
	int32_t t62 = 0;

	t62 = ((x481|x482)%(x483<x484));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x497 = 10;
	static uint32_t x498 = 2281179U;
	int16_t x499 = -4;
	int32_t x500 = 213713;
	static uint32_t t63 = 3203623U;

	t63 = ((x497|x498)%(x499<x500));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x505 = 446939;
	volatile int64_t x507 = -1LL;
	uint16_t x508 = UINT16_MAX;
	volatile uint64_t t64 = 6138274413844686LLU;

	t64 = ((x505|x506)%(x507<x508));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x509 = INT16_MIN;
	int64_t x510 = -855689280238LL;
	uint64_t x511 = 1371747562620662712LLU;
	uint64_t x512 = 8544776223930437349LLU;
	volatile int64_t t65 = 2022131985LL;

	t65 = ((x509|x510)%(x511<x512));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x513 = INT8_MIN;
	uint16_t x514 = 17U;
	static volatile uint16_t x515 = 11673U;
	volatile int32_t t66 = -15573531;

	t66 = ((x513|x514)%(x515<x516));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x517 = -1LL;
	static int32_t x518 = -1;
	uint16_t x519 = 209U;
	volatile int64_t t67 = -11509089346326753LL;

	t67 = ((x517|x518)%(x519<x520));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x522 = INT16_MAX;
	volatile int64_t x523 = INT64_MIN;
	static int32_t x524 = INT32_MIN;
	volatile int64_t t68 = 12961962LL;

	t68 = ((x521|x522)%(x523<x524));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x537 = INT32_MIN;
	static int64_t x538 = -1LL;
	int64_t x539 = INT64_MIN;
	static int64_t x540 = INT64_MAX;

	t69 = ((x537|x538)%(x539<x540));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x561 = INT64_MIN;
	static uint64_t x562 = 115065729549004LLU;
	int16_t x563 = INT16_MIN;
	volatile int8_t x564 = -1;

	t70 = ((x561|x562)%(x563<x564));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x577 = INT16_MIN;
	static int8_t x578 = INT8_MIN;
	static uint64_t x579 = 1833246344LLU;
	uint64_t x580 = UINT64_MAX;
	int32_t t71 = 24822;

	t71 = ((x577|x578)%(x579<x580));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x585 = INT64_MAX;
	uint64_t x586 = UINT64_MAX;
	int16_t x587 = INT16_MIN;
	uint8_t x588 = 0U;
	uint64_t t72 = 14326345LLU;

	t72 = ((x585|x586)%(x587<x588));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x593 = -1LL;
	volatile int8_t x595 = INT8_MAX;
	int64_t t73 = -40550194907LL;

	t73 = ((x593|x594)%(x595<x596));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x617 = -1878;
	static int32_t x618 = -601;
	uint32_t x619 = 559U;
	int16_t x620 = INT16_MIN;
	int32_t t74 = 124;

	t74 = ((x617|x618)%(x619<x620));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x630 = UINT16_MAX;
	uint64_t x631 = 6593351422570710308LLU;
	int16_t x632 = INT16_MIN;
	int64_t t75 = -148816815LL;

	t75 = ((x629|x630)%(x631<x632));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x633 = -1;
	volatile int8_t x634 = 0;
	int16_t x636 = INT16_MAX;

	t76 = ((x633|x634)%(x635<x636));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x637 = -1;
	volatile int32_t x638 = INT32_MIN;
	int16_t x640 = INT16_MAX;
	volatile int32_t t77 = -5283;

	t77 = ((x637|x638)%(x639<x640));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x645 = UINT32_MAX;
	volatile uint16_t x646 = 2U;
	static volatile int64_t x648 = INT64_MAX;

	t78 = ((x645|x646)%(x647<x648));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x659 = INT64_MIN;
	volatile uint32_t t79 = 215U;

	t79 = ((x657|x658)%(x659<x660));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x665 = INT16_MIN;
	int16_t x666 = 3675;
	int64_t x667 = INT64_MIN;
	int32_t x668 = 281;

	t80 = ((x665|x666)%(x667<x668));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x673 = -3461685LL;
	int8_t x674 = INT8_MIN;

	t81 = ((x673|x674)%(x675<x676));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x677 = 24U;
	static uint16_t x678 = 1U;
	int32_t t82 = -103344096;

	t82 = ((x677|x678)%(x679<x680));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x685 = INT64_MIN;
	uint8_t x687 = 11U;
	volatile uint32_t x688 = 14108U;
	volatile int64_t t83 = 31LL;

	t83 = ((x685|x686)%(x687<x688));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x689 = 4687U;
	int16_t x690 = -5947;
	volatile uint16_t x691 = UINT16_MAX;
	uint32_t x692 = UINT32_MAX;
	uint32_t t84 = 23U;

	t84 = ((x689|x690)%(x691<x692));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x694 = 156912U;
	uint64_t x695 = 2LLU;
	int8_t x696 = INT8_MIN;
	volatile uint32_t t85 = 211U;

	t85 = ((x693|x694)%(x695<x696));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x713 = -13;
	uint8_t x714 = 12U;
	int16_t x715 = INT16_MAX;

	t86 = ((x713|x714)%(x715<x716));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x717 = INT8_MIN;
	static volatile int8_t x718 = -1;
	int16_t x720 = INT16_MAX;
	volatile int32_t t87 = -1;

	t87 = ((x717|x718)%(x719<x720));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x729 = INT64_MIN;
	volatile uint32_t x730 = UINT32_MAX;
	static volatile uint64_t x731 = 213690LLU;
	uint64_t x732 = 2288381720LLU;

	t88 = ((x729|x730)%(x731<x732));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x733 = INT16_MIN;
	volatile uint16_t x735 = 145U;
	int64_t x736 = 198354306532163450LL;
	volatile int32_t t89 = 2492396;

	t89 = ((x733|x734)%(x735<x736));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x737 = UINT8_MAX;
	int16_t x738 = INT16_MAX;
	static int16_t x739 = INT16_MIN;
	int64_t x740 = 33649020565LL;

	t90 = ((x737|x738)%(x739<x740));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x741 = -1LL;
	static int8_t x743 = INT8_MIN;
	int8_t x744 = INT8_MAX;
	volatile int64_t t91 = -41041314562623LL;

	t91 = ((x741|x742)%(x743<x744));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x745 = 16U;
	uint64_t x748 = 929961043422287238LLU;
	static int64_t t92 = 3712876539747506LL;

	t92 = ((x745|x746)%(x747<x748));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x758 = 428U;
	int64_t x759 = -3014687000LL;

	t93 = ((x757|x758)%(x759<x760));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x761 = -195427642286667LL;
	volatile uint16_t x763 = 2005U;
	volatile uint64_t x764 = UINT64_MAX;
	static int64_t t94 = 668422626303LL;

	t94 = ((x761|x762)%(x763<x764));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x765 = INT16_MAX;
	static uint8_t x766 = 1U;
	int32_t x767 = INT32_MAX;
	uint64_t x768 = 604191132865775820LLU;
	volatile int32_t t95 = -1031614;

	t95 = ((x765|x766)%(x767<x768));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x781 = INT64_MIN;
	volatile uint16_t x782 = 1893U;
	static int16_t x783 = INT16_MIN;
	volatile int64_t t96 = 12276988LL;

	t96 = ((x781|x782)%(x783<x784));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x789 = -1;
	int16_t x790 = INT16_MAX;
	uint16_t x791 = 0U;

	t97 = ((x789|x790)%(x791<x792));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x797 = INT16_MAX;
	int64_t x798 = -1LL;
	int16_t x799 = INT16_MIN;
	uint32_t x800 = UINT32_MAX;
	static int64_t t98 = 9537478337303638LL;

	t98 = ((x797|x798)%(x799<x800));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x814 = -1;
	int64_t x815 = INT64_MIN;
	volatile uint32_t t99 = 261711U;

	t99 = ((x813|x814)%(x815<x816));

	if (t99 != 0U) { NG(); } else { ; }
	
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

