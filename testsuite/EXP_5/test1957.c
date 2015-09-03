#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MAX;
uint32_t x4 = 196022U;
int32_t x7 = INT32_MAX;
int32_t t1 = -4124756;
int32_t x14 = -119794;
static int8_t x16 = 7;
uint16_t x21 = UINT16_MAX;
int16_t x22 = -1;
uint16_t x61 = 1466U;
static uint64_t x85 = UINT64_MAX;
uint64_t t8 = UINT64_MAX;
int32_t x106 = INT32_MAX;
int8_t x107 = INT8_MAX;
static uint8_t x113 = 3U;
volatile int32_t t10 = 0;
volatile int64_t x151 = INT64_MAX;
static uint64_t x153 = UINT64_MAX;
static uint64_t x154 = UINT64_MAX;
uint16_t x157 = 484U;
int32_t t16 = 110412;
volatile int32_t t17 = 1004459536;
uint64_t x187 = UINT64_MAX;
uint32_t x191 = 5U;
int32_t x193 = 249;
int16_t x197 = 0;
int8_t x198 = INT8_MIN;
int32_t x199 = -31841;
volatile int32_t t22 = 15;
static volatile int32_t x202 = INT32_MAX;
volatile uint64_t t25 = 12LLU;
int16_t x227 = -954;
volatile int32_t x233 = 28560;
int32_t x235 = -1;
static int16_t x236 = INT16_MAX;
volatile int32_t t29 = 56051;
int64_t x264 = -1155623LL;
uint64_t x267 = 5672911387253LLU;
int32_t x269 = 3654;
volatile int32_t x283 = INT32_MIN;
volatile uint64_t x293 = 553119859563LLU;
uint64_t x295 = 2296140964303691LLU;
int8_t x299 = INT8_MIN;
static volatile uint32_t t40 = 1588267U;
volatile int32_t t42 = -1;
volatile int64_t x336 = -33913110LL;
int8_t x343 = 1;
uint32_t t44 = UINT32_MAX;
int64_t x345 = 7LL;
volatile int64_t t46 = 5176073812860LL;
volatile int16_t x357 = INT16_MAX;
int64_t x359 = INT64_MAX;
int8_t x360 = 0;
int16_t x362 = INT16_MIN;
int64_t x364 = -1LL;
uint64_t t50 = 971953LLU;
uint64_t x374 = UINT64_MAX;
uint8_t x375 = 1U;
volatile int32_t x379 = INT32_MIN;
uint16_t x384 = 351U;
static volatile uint32_t t54 = UINT32_MAX;
int32_t t55 = -1642;
static int16_t x410 = -1;
int8_t x422 = 3;
int16_t x438 = 1;
uint8_t x441 = 6U;
int32_t x454 = INT32_MAX;
volatile int64_t t64 = -186LL;
int32_t x484 = -232985146;
int8_t x508 = -1;
int32_t t70 = 2594;
int64_t x519 = -1LL;
static int32_t t71 = -22880;
int16_t x523 = 233;
int32_t x524 = INT32_MIN;
int32_t x527 = 6979;
uint16_t x528 = 1U;
uint32_t x541 = 11276970U;
int8_t x542 = 1;
volatile uint8_t x543 = 5U;
volatile int16_t x547 = -2043;
int64_t x554 = -1LL;
int32_t x555 = 0;
volatile int32_t t76 = -3785;
static volatile int64_t x570 = 57228754896003623LL;
uint8_t x588 = UINT8_MAX;
volatile uint64_t x594 = 560191194307LLU;
static int32_t t84 = 106040;
static int8_t x601 = 57;
int64_t x602 = INT64_MAX;
static uint64_t x637 = 257791427LLU;
uint16_t x639 = 267U;
static uint8_t x647 = 110U;
int8_t x657 = 1;
volatile uint32_t x660 = UINT32_MAX;
uint8_t x663 = 30U;
static uint64_t x669 = 7628878851892LLU;
int32_t x670 = -1;
volatile uint64_t t92 = 613557026569LLU;
int16_t x683 = INT16_MAX;
volatile int8_t x705 = INT8_MAX;
volatile int16_t x706 = -1;
static int16_t x708 = INT16_MIN;
uint16_t x735 = 919U;
static int8_t x766 = INT8_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int32_t x2 = -1;
	int32_t t0 = -9633638;

	t0 = (x1>>((x2|x3)==x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = UINT8_MAX;
	uint16_t x6 = UINT16_MAX;
	uint32_t x8 = 52850U;

	t1 = (x5>>((x6|x7)==x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 12U;
	uint8_t x15 = 84U;
	volatile int32_t t2 = -400;

	t2 = (x13>>((x14|x15)==x16));

	if (t2 != 12) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x23 = INT8_MIN;
	uint8_t x24 = 1U;
	int32_t t3 = 70;

	t3 = (x21>>((x22|x23)==x24));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x49 = INT8_MAX;
	int16_t x50 = 13;
	uint8_t x51 = 52U;
	int64_t x52 = -2437760832189LL;
	volatile int32_t t4 = -359673;

	t4 = (x49>>((x50|x51)==x52));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x57 = INT64_MAX;
	uint16_t x58 = 30U;
	int16_t x59 = INT16_MIN;
	volatile int16_t x60 = INT16_MIN;
	static int64_t t5 = INT64_MAX;

	t5 = (x57>>((x58|x59)==x60));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MAX;
	static int32_t x64 = INT32_MAX;
	volatile int32_t t6 = 8;

	t6 = (x61>>((x62|x63)==x64));

	if (t6 != 1466) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x77 = 3U;
	uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MAX;
	int64_t x80 = -1LL;
	volatile int32_t t7 = 235728816;

	t7 = (x77>>((x78|x79)==x80));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x86 = INT8_MAX;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = 0;

	t8 = (x85>>((x86|x87)==x88));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x105 = 10U;
	int16_t x108 = 69;
	volatile int32_t t9 = -12;

	t9 = (x105>>((x106|x107)==x108));

	if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x114 = -27;
	int16_t x115 = 49;
	int16_t x116 = INT16_MIN;

	t10 = (x113>>((x114|x115)==x116));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x117 = UINT32_MAX;
	static int8_t x118 = INT8_MIN;
	uint8_t x119 = UINT8_MAX;
	volatile int16_t x120 = INT16_MAX;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x117>>((x118|x119)==x120));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x129 = 3;
	int32_t x130 = -13;
	static uint64_t x131 = UINT64_MAX;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t12 = -262;

	t12 = (x129>>((x130|x131)==x132));

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x149 = UINT64_MAX;
	int8_t x150 = INT8_MAX;
	volatile uint32_t x152 = 21668U;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x149>>((x150|x151)==x152));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x155 = INT16_MAX;
	int32_t x156 = 248824100;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x153>>((x154|x155)==x156));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x158 = 8U;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	static volatile int32_t t15 = 405;

	t15 = (x157>>((x158|x159)==x160));

	if (t15 != 484) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x165 = UINT16_MAX;
	volatile int64_t x166 = -1LL;
	int32_t x167 = -1685;
	int16_t x168 = INT16_MIN;

	t16 = (x165>>((x166|x167)==x168));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x173 = 3277;
	static int64_t x174 = 5037736LL;
	uint8_t x175 = 1U;
	static int8_t x176 = INT8_MAX;

	t17 = (x173>>((x174|x175)==x176));

	if (t17 != 3277) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x177 = UINT16_MAX;
	uint64_t x178 = 341611547700LLU;
	int64_t x179 = -1LL;
	int64_t x180 = -1LL;
	volatile int32_t t18 = -41055;

	t18 = (x177>>((x178|x179)==x180));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x186 = INT16_MAX;
	int64_t x188 = INT64_MAX;
	int32_t t19 = 0;

	t19 = (x185>>((x186|x187)==x188));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = 871;
	uint8_t x192 = 5U;
	volatile int32_t t20 = 2003114;

	t20 = (x189>>((x190|x191)==x192));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MIN;
	volatile int32_t t21 = 24948803;

	t21 = (x193>>((x194|x195)==x196));

	if (t21 != 249) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x200 = INT64_MAX;

	t22 = (x197>>((x198|x199)==x200));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x201 = 8305518254LLU;
	static uint16_t x203 = 11547U;
	int16_t x204 = INT16_MAX;
	volatile uint64_t t23 = 3741355148LLU;

	t23 = (x201>>((x202|x203)==x204));

	if (t23 != 8305518254LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x213 = INT8_MAX;
	static uint64_t x214 = UINT64_MAX;
	static int64_t x215 = 47LL;
	volatile int64_t x216 = 871080629LL;
	static volatile int32_t t24 = 12166;

	t24 = (x213>>((x214|x215)==x216));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x217 = 6308201322LLU;
	int16_t x218 = -1;
	static uint64_t x219 = 31573208328LLU;
	int16_t x220 = 5229;

	t25 = (x217>>((x218|x219)==x220));

	if (t25 != 6308201322LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x225 = 59U;
	static uint16_t x226 = UINT16_MAX;
	static int32_t x228 = INT32_MAX;
	volatile int32_t t26 = -25805789;

	t26 = (x225>>((x226|x227)==x228));

	if (t26 != 59) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x229 = INT64_MAX;
	static int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	uint32_t x232 = 3U;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x229>>((x230|x231)==x232));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x234 = INT16_MAX;
	volatile int32_t t28 = 41360;

	t28 = (x233>>((x234|x235)==x236));

	if (t28 != 28560) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x237 = UINT8_MAX;
	volatile uint16_t x238 = 2348U;
	uint8_t x239 = 1U;
	int64_t x240 = 10438795LL;

	t29 = (x237>>((x238|x239)==x240));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x257 = 23123772237LL;
	int8_t x258 = INT8_MIN;
	uint16_t x259 = 4376U;
	uint64_t x260 = 20995LLU;
	volatile int64_t t30 = 41839667LL;

	t30 = (x257>>((x258|x259)==x260));

	if (t30 != 23123772237LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x261 = 0;
	volatile int32_t x262 = INT32_MIN;
	static volatile int32_t x263 = -26;
	int32_t t31 = 513899966;

	t31 = (x261>>((x262|x263)==x264));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x265 = INT32_MAX;
	volatile int64_t x266 = -18LL;
	volatile int32_t x268 = 205268422;
	volatile int32_t t32 = INT32_MAX;

	t32 = (x265>>((x266|x267)==x268));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x270 = UINT16_MAX;
	volatile int16_t x271 = INT16_MAX;
	int16_t x272 = -1;
	int32_t t33 = -115656;

	t33 = (x269>>((x270|x271)==x272));

	if (t33 != 3654) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x273 = 6U;
	int64_t x274 = -1LL;
	static volatile int8_t x275 = -1;
	static int16_t x276 = INT16_MIN;
	volatile int32_t t34 = 10;

	t34 = (x273>>((x274|x275)==x276));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x281 = 889733;
	int32_t x282 = INT32_MIN;
	uint8_t x284 = 1U;
	int32_t t35 = -52;

	t35 = (x281>>((x282|x283)==x284));

	if (t35 != 889733) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x285 = INT64_MAX;
	int16_t x286 = -1;
	int64_t x287 = -140834881385877LL;
	int16_t x288 = 256;
	volatile int64_t t36 = INT64_MAX;

	t36 = (x285>>((x286|x287)==x288));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x289 = 0U;
	uint64_t x290 = UINT64_MAX;
	volatile int16_t x291 = -1;
	int32_t x292 = 76086;
	volatile int32_t t37 = 0;

	t37 = (x289>>((x290|x291)==x292));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x294 = INT32_MIN;
	int32_t x296 = INT32_MAX;
	uint64_t t38 = 1388775587944LLU;

	t38 = (x293>>((x294|x295)==x296));

	if (t38 != 553119859563LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x297 = 1U;
	int16_t x298 = -1;
	static volatile uint16_t x300 = UINT16_MAX;
	int32_t t39 = 732861334;

	t39 = (x297>>((x298|x299)==x300));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x309 = 90U;
	static int16_t x310 = 324;
	static uint8_t x311 = 2U;
	volatile int32_t x312 = -1;

	t40 = (x309>>((x310|x311)==x312));

	if (t40 != 90U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x325 = 7;
	int64_t x326 = INT64_MAX;
	volatile int8_t x327 = 0;
	uint8_t x328 = UINT8_MAX;
	static int32_t t41 = 2787;

	t41 = (x325>>((x326|x327)==x328));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x329 = 1U;
	static uint32_t x330 = 336935149U;
	int64_t x331 = INT64_MIN;
	static uint64_t x332 = 9373240555721LLU;

	t42 = (x329>>((x330|x331)==x332));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = -31;
	uint8_t x335 = UINT8_MAX;
	static volatile int32_t t43 = 601;

	t43 = (x333>>((x334|x335)==x336));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x341 = UINT32_MAX;
	uint16_t x342 = 11U;
	int8_t x344 = INT8_MIN;

	t44 = (x341>>((x342|x343)==x344));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	volatile int64_t x348 = INT64_MIN;
	static int64_t t45 = -1101794441028168692LL;

	t45 = (x345>>((x346|x347)==x348));

	if (t45 != 7LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x349 = 27092LL;
	int8_t x350 = -1;
	volatile int32_t x351 = -1;
	static int32_t x352 = INT32_MIN;

	t46 = (x349>>((x350|x351)==x352));

	if (t46 != 27092LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x358 = INT32_MAX;
	int32_t t47 = -83041;

	t47 = (x357>>((x358|x359)==x360));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x361 = INT16_MAX;
	int32_t x363 = 24834537;
	volatile int32_t t48 = -278;

	t48 = (x361>>((x362|x363)==x364));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x365 = INT8_MAX;
	int8_t x366 = 0;
	uint8_t x367 = UINT8_MAX;
	uint8_t x368 = 31U;
	static volatile int32_t t49 = 8;

	t49 = (x365>>((x366|x367)==x368));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x369 = 89090622894864406LLU;
	uint8_t x370 = 5U;
	static int8_t x371 = INT8_MIN;
	uint32_t x372 = 8008724U;

	t50 = (x369>>((x370|x371)==x372));

	if (t50 != 89090622894864406LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x373 = 10U;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t51 = -186;

	t51 = (x373>>((x374|x375)==x376));

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x377 = UINT8_MAX;
	int32_t x378 = INT32_MIN;
	int8_t x380 = INT8_MIN;
	int32_t t52 = -41531283;

	t52 = (x377>>((x378|x379)==x380));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x381 = 10U;
	volatile int32_t x382 = -63;
	uint64_t x383 = UINT64_MAX;
	int32_t t53 = 5;

	t53 = (x381>>((x382|x383)==x384));

	if (t53 != 10) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x385 = UINT32_MAX;
	volatile uint16_t x386 = UINT16_MAX;
	static int16_t x387 = 882;
	volatile int64_t x388 = INT64_MIN;

	t54 = (x385>>((x386|x387)==x388));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x393 = 753U;
	int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MIN;
	volatile int8_t x396 = INT8_MIN;

	t55 = (x393>>((x394|x395)==x396));

	if (t55 != 753) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MIN;
	static uint8_t x407 = UINT8_MAX;
	uint16_t x408 = UINT16_MAX;
	int32_t t56 = INT32_MAX;

	t56 = (x405>>((x406|x407)==x408));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x409 = INT16_MAX;
	int16_t x411 = -1;
	static int8_t x412 = -1;
	int32_t t57 = -581;

	t57 = (x409>>((x410|x411)==x412));

	if (t57 != 16383) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x413 = INT8_MAX;
	static int64_t x414 = -230702726421878LL;
	int8_t x415 = INT8_MIN;
	static int32_t x416 = -12452711;
	static volatile int32_t t58 = 3;

	t58 = (x413>>((x414|x415)==x416));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x421 = 1U;
	static uint16_t x423 = 2U;
	static int64_t x424 = -31948687363LL;
	int32_t t59 = 238;

	t59 = (x421>>((x422|x423)==x424));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x437 = 7708;
	uint8_t x439 = 0U;
	uint32_t x440 = 142U;
	static volatile int32_t t60 = 492;

	t60 = (x437>>((x438|x439)==x440));

	if (t60 != 7708) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x442 = UINT32_MAX;
	static int16_t x443 = -791;
	int64_t x444 = INT64_MAX;
	int32_t t61 = -392873;

	t61 = (x441>>((x442|x443)==x444));

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x449 = 1618U;
	uint8_t x450 = 11U;
	uint32_t x451 = 2455160U;
	static int16_t x452 = INT16_MIN;
	volatile int32_t t62 = -6859456;

	t62 = (x449>>((x450|x451)==x452));

	if (t62 != 1618) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x453 = 24U;
	int32_t x455 = -290359122;
	int32_t x456 = INT32_MAX;
	int32_t t63 = 1632;

	t63 = (x453>>((x454|x455)==x456));

	if (t63 != 24) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x477 = 8476155649781LL;
	int8_t x478 = -1;
	int16_t x479 = -16039;
	volatile int8_t x480 = INT8_MIN;

	t64 = (x477>>((x478|x479)==x480));

	if (t64 != 8476155649781LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x481 = INT16_MAX;
	static int32_t x482 = INT32_MIN;
	int8_t x483 = -1;
	int32_t t65 = -13973;

	t65 = (x481>>((x482|x483)==x484));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x485 = 14U;
	int16_t x486 = INT16_MAX;
	uint16_t x487 = 0U;
	volatile uint8_t x488 = 21U;
	static volatile int32_t t66 = 247021;

	t66 = (x485>>((x486|x487)==x488));

	if (t66 != 14) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x489 = UINT64_MAX;
	static volatile uint64_t x490 = UINT64_MAX;
	volatile int32_t x491 = -1;
	uint64_t x492 = 2754061550279288680LLU;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x489>>((x490|x491)==x492));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x501 = 1085988790129436LLU;
	int8_t x502 = INT8_MIN;
	int32_t x503 = -1;
	int8_t x504 = INT8_MIN;
	volatile uint64_t t68 = 15097457068973LLU;

	t68 = (x501>>((x502|x503)==x504));

	if (t68 != 1085988790129436LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x505 = INT16_MAX;
	static volatile int32_t x506 = INT32_MAX;
	int64_t x507 = INT64_MAX;
	volatile int32_t t69 = -5094518;

	t69 = (x505>>((x506|x507)==x508));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x513 = INT16_MAX;
	static int64_t x514 = -1LL;
	int32_t x515 = -1;
	static uint16_t x516 = 27U;

	t70 = (x513>>((x514|x515)==x516));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x517 = 56U;
	static volatile int64_t x518 = -1LL;
	volatile int32_t x520 = -1;

	t71 = (x517>>((x518|x519)==x520));

	if (t71 != 28) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x521 = UINT32_MAX;
	int8_t x522 = -1;
	uint32_t t72 = UINT32_MAX;

	t72 = (x521>>((x522|x523)==x524));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x525 = INT8_MAX;
	volatile uint32_t x526 = 2U;
	volatile int32_t t73 = 19;

	t73 = (x525>>((x526|x527)==x528));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x544 = INT16_MIN;
	uint32_t t74 = 1U;

	t74 = (x541>>((x542|x543)==x544));

	if (t74 != 11276970U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x545 = 440U;
	volatile uint16_t x546 = UINT16_MAX;
	int8_t x548 = INT8_MIN;
	uint32_t t75 = 1017U;

	t75 = (x545>>((x546|x547)==x548));

	if (t75 != 440U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x553 = 1573U;
	volatile int64_t x556 = 1059786581560554927LL;

	t76 = (x553>>((x554|x555)==x556));

	if (t76 != 1573) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x565 = 14048;
	static uint8_t x566 = 1U;
	static volatile int64_t x567 = INT64_MIN;
	uint16_t x568 = 77U;
	int32_t t77 = -2;

	t77 = (x565>>((x566|x567)==x568));

	if (t77 != 14048) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x569 = 11860;
	int64_t x571 = -1LL;
	uint32_t x572 = 217U;
	volatile int32_t t78 = 1128;

	t78 = (x569>>((x570|x571)==x572));

	if (t78 != 11860) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x573 = UINT8_MAX;
	static uint64_t x574 = UINT64_MAX;
	static int32_t x575 = INT32_MAX;
	int64_t x576 = INT64_MAX;
	int32_t t79 = -7;

	t79 = (x573>>((x574|x575)==x576));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x577 = 4777233U;
	static int16_t x578 = INT16_MAX;
	volatile int8_t x579 = 1;
	int8_t x580 = -2;
	uint32_t t80 = 31281U;

	t80 = (x577>>((x578|x579)==x580));

	if (t80 != 4777233U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x581 = 1;
	static int64_t x582 = -4615935LL;
	int8_t x583 = 2;
	uint16_t x584 = 1U;
	int32_t t81 = -5631968;

	t81 = (x581>>((x582|x583)==x584));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x585 = INT64_MAX;
	volatile int64_t x586 = INT64_MIN;
	int32_t x587 = -1;
	static int64_t t82 = INT64_MAX;

	t82 = (x585>>((x586|x587)==x588));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x589 = 1541932294445341799LL;
	int16_t x590 = INT16_MAX;
	volatile uint8_t x591 = UINT8_MAX;
	uint64_t x592 = 4356624334629209LLU;
	volatile int64_t t83 = -8952779080LL;

	t83 = (x589>>((x590|x591)==x592));

	if (t83 != 1541932294445341799LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x593 = INT16_MAX;
	static volatile int64_t x595 = -50282220LL;
	int16_t x596 = 12;

	t84 = (x593>>((x594|x595)==x596));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x597 = UINT64_MAX;
	volatile int16_t x598 = -4162;
	volatile int32_t x599 = INT32_MIN;
	uint8_t x600 = UINT8_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (x597>>((x598|x599)==x600));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x603 = 125U;
	int8_t x604 = INT8_MIN;
	static volatile int32_t t86 = -76577586;

	t86 = (x601>>((x602|x603)==x604));

	if (t86 != 57) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x609 = 2262U;
	int16_t x610 = -1167;
	int8_t x611 = 1;
	int32_t x612 = INT32_MAX;
	int32_t t87 = 0;

	t87 = (x609>>((x610|x611)==x612));

	if (t87 != 2262) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x638 = INT8_MIN;
	int64_t x640 = INT64_MIN;
	volatile uint64_t t88 = 2447971473312123LLU;

	t88 = (x637>>((x638|x639)==x640));

	if (t88 != 257791427LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x645 = 28897903701LL;
	int32_t x646 = INT32_MAX;
	uint64_t x648 = 7276303LLU;
	volatile int64_t t89 = 14500LL;

	t89 = (x645>>((x646|x647)==x648));

	if (t89 != 28897903701LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x658 = 7462895U;
	static int8_t x659 = 43;
	int32_t t90 = -1904014;

	t90 = (x657>>((x658|x659)==x660));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x661 = 3708280098204477LLU;
	uint32_t x662 = 53U;
	int16_t x664 = INT16_MIN;
	static volatile uint64_t t91 = 24LLU;

	t91 = (x661>>((x662|x663)==x664));

	if (t91 != 3708280098204477LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x671 = INT8_MAX;
	uint32_t x672 = 6705315U;

	t92 = (x669>>((x670|x671)==x672));

	if (t92 != 7628878851892LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x673 = UINT64_MAX;
	int8_t x674 = 1;
	static uint8_t x675 = 79U;
	volatile uint32_t x676 = UINT32_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x673>>((x674|x675)==x676));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x681 = 17;
	static int8_t x682 = INT8_MAX;
	volatile uint32_t x684 = 7653U;
	static int32_t t94 = 129;

	t94 = (x681>>((x682|x683)==x684));

	if (t94 != 17) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x685 = 2U;
	int32_t x686 = 27854;
	uint16_t x687 = UINT16_MAX;
	static uint8_t x688 = 1U;
	volatile int32_t t95 = -51;

	t95 = (x685>>((x686|x687)==x688));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x701 = 1;
	int32_t x702 = INT32_MAX;
	int32_t x703 = INT32_MIN;
	volatile uint8_t x704 = 83U;
	int32_t t96 = -13;

	t96 = (x701>>((x702|x703)==x704));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x707 = INT16_MAX;
	static volatile int32_t t97 = 446322061;

	t97 = (x705>>((x706|x707)==x708));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x733 = 11LLU;
	int64_t x734 = INT64_MIN;
	int8_t x736 = INT8_MIN;
	uint64_t t98 = 5231614091482471347LLU;

	t98 = (x733>>((x734|x735)==x736));

	if (t98 != 11LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x765 = INT16_MAX;
	static int32_t x767 = INT32_MIN;
	uint32_t x768 = 3U;
	int32_t t99 = -2;

	t99 = (x765>>((x766|x767)==x768));

	if (t99 != 32767) { NG(); } else { ; }
	
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

