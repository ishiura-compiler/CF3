#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
int64_t x15 = INT64_MIN;
static volatile uint32_t t1 = UINT32_MAX;
int8_t x35 = INT8_MAX;
int16_t x36 = 4;
int32_t t3 = -20106950;
uint8_t x42 = UINT8_MAX;
int64_t x43 = INT64_MIN;
static int8_t x45 = INT8_MAX;
int16_t x49 = INT16_MAX;
int16_t x82 = INT16_MAX;
static volatile uint64_t x85 = 1653959435855LLU;
uint32_t x88 = 4580606U;
uint64_t x92 = 1734075580428284183LLU;
int32_t x94 = -126920704;
static uint8_t x142 = UINT8_MAX;
uint32_t x143 = UINT32_MAX;
uint32_t x144 = 96U;
int32_t x145 = INT32_MAX;
uint64_t x147 = 1371317377426336506LLU;
uint8_t x175 = 57U;
int64_t x176 = 112000LL;
volatile uint32_t t22 = UINT32_MAX;
volatile uint32_t x182 = 101U;
static int8_t x183 = -1;
volatile int16_t x211 = INT16_MIN;
int16_t x212 = INT16_MIN;
uint8_t x217 = 0U;
static volatile int32_t x223 = -6576;
int32_t t26 = 92350;
uint16_t x233 = 2099U;
int16_t x234 = INT16_MIN;
int16_t x243 = INT16_MAX;
static int8_t x268 = INT8_MIN;
static uint16_t x274 = 89U;
static volatile int64_t x276 = -1LL;
int32_t t34 = -1650721;
uint64_t x299 = UINT64_MAX;
uint16_t x307 = UINT16_MAX;
int64_t t38 = -3592827LL;
uint16_t x324 = 68U;
uint8_t x325 = UINT8_MAX;
uint8_t x328 = 101U;
static uint64_t x333 = UINT64_MAX;
int32_t x336 = -1;
static volatile int16_t x340 = -1;
uint16_t x353 = 18425U;
volatile int8_t x390 = INT8_MIN;
int8_t x395 = INT8_MIN;
volatile int32_t t54 = -19;
static volatile int64_t x432 = INT64_MIN;
uint64_t x433 = 1301976846481LLU;
volatile uint64_t t56 = 355495LLU;
uint32_t x440 = UINT32_MAX;
int64_t x450 = 8LL;
int32_t x451 = INT32_MIN;
volatile int64_t t61 = 126858445103074392LL;
int32_t x459 = -88135;
int32_t t62 = INT32_MAX;
int16_t x462 = INT16_MAX;
int64_t t63 = -51668960LL;
int32_t x472 = -21;
static uint64_t x473 = 1360505537867775119LLU;
uint16_t x475 = 3281U;
static int16_t x476 = INT16_MIN;
uint32_t x491 = 65315036U;
int8_t x505 = 1;
uint16_t x509 = 3390U;
int32_t x512 = INT32_MIN;
static int32_t t72 = 419;
int16_t x538 = -1;
int32_t x539 = -1;
volatile int8_t x541 = INT8_MAX;
uint32_t x542 = 32098688U;
int8_t x544 = -1;
uint64_t x565 = 4455298706980267LLU;
uint8_t x567 = 74U;
volatile int32_t x571 = -1;
static int16_t x582 = INT16_MIN;
int32_t t82 = 27270504;
static int16_t x587 = -37;
volatile uint8_t x589 = 1U;
volatile int8_t x593 = INT8_MAX;
int32_t x594 = 3307;
static uint32_t x597 = UINT32_MAX;
volatile int64_t x607 = INT64_MAX;
uint64_t x627 = UINT64_MAX;
int64_t x639 = INT64_MIN;
int8_t x640 = INT8_MIN;
int32_t t92 = 234;
volatile int32_t t95 = -944363;
volatile uint64_t x657 = 351568960647864LLU;
int16_t x658 = 10766;
uint64_t x659 = 110202LLU;
uint8_t x675 = UINT8_MAX;


void f0(void) {
	volatile uint32_t x5 = 359364U;
	static int16_t x6 = 518;
	int8_t x8 = INT8_MIN;
	volatile uint32_t t0 = 1036U;

	t0 = (x5<<((x6|x7)==x8));

	if (t0 != 359364U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x13 = UINT32_MAX;
	int8_t x14 = INT8_MIN;
	int64_t x16 = INT64_MIN;

	t1 = (x13<<((x14|x15)==x16));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = INT16_MAX;
	uint32_t x22 = 15371995U;
	static volatile uint8_t x23 = 3U;
	int64_t x24 = INT64_MAX;
	static volatile int32_t t2 = 0;

	t2 = (x21<<((x22|x23)==x24));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x33 = 5U;
	uint8_t x34 = UINT8_MAX;

	t3 = (x33<<((x34|x35)==x36));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x37 = INT8_MAX;
	static int8_t x38 = 0;
	uint64_t x39 = UINT64_MAX;
	static int8_t x40 = INT8_MAX;
	static volatile int32_t t4 = 7234;

	t4 = (x37<<((x38|x39)==x40));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = UINT64_MAX;
	volatile uint8_t x44 = 120U;
	uint64_t t5 = UINT64_MAX;

	t5 = (x41<<((x42|x43)==x44));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x46 = 0;
	int32_t x47 = INT32_MIN;
	int8_t x48 = -1;
	volatile int32_t t6 = -22;

	t6 = (x45<<((x46|x47)==x48));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x50 = 881U;
	uint32_t x51 = 1713479107U;
	volatile int16_t x52 = -696;
	int32_t t7 = 309439090;

	t7 = (x49<<((x50|x51)==x52));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x69 = 1U;
	int16_t x70 = -1631;
	int64_t x71 = -116151737LL;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t8 = 2;

	t8 = (x69<<((x70|x71)==x72));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x77 = 3253256;
	int8_t x78 = INT8_MIN;
	int8_t x79 = -32;
	int64_t x80 = INT64_MAX;
	static int32_t t9 = -24523446;

	t9 = (x77<<((x78|x79)==x80));

	if (t9 != 3253256) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x81 = 8250;
	uint8_t x83 = 16U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t10 = 1;

	t10 = (x81<<((x82|x83)==x84));

	if (t10 != 8250) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x86 = 2225250570212888LLU;
	static int8_t x87 = INT8_MIN;
	volatile uint64_t t11 = 1217505928938LLU;

	t11 = (x85<<((x86|x87)==x88));

	if (t11 != 1653959435855LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x89 = INT32_MAX;
	int16_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int32_t t12 = INT32_MAX;

	t12 = (x89<<((x90|x91)==x92));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = 3;
	int8_t x95 = INT8_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	volatile int32_t t13 = 884;

	t13 = (x93<<((x94|x95)==x96));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x109 = 1;
	volatile int8_t x110 = -10;
	static volatile int64_t x111 = -1LL;
	volatile uint32_t x112 = UINT32_MAX;
	volatile int32_t t14 = 6;

	t14 = (x109<<((x110|x111)==x112));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x121 = 455022;
	uint64_t x122 = 42359851781227812LLU;
	uint32_t x123 = 935U;
	static int8_t x124 = INT8_MAX;
	volatile int32_t t15 = 181;

	t15 = (x121<<((x122|x123)==x124));

	if (t15 != 455022) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x129 = 77196068U;
	static int8_t x130 = INT8_MIN;
	volatile uint8_t x131 = 83U;
	uint32_t x132 = 258U;
	volatile uint32_t t16 = 26423U;

	t16 = (x129<<((x130|x131)==x132));

	if (t16 != 77196068U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x137 = UINT32_MAX;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = 14109U;
	volatile int32_t x140 = INT32_MIN;
	uint32_t t17 = UINT32_MAX;

	t17 = (x137<<((x138|x139)==x140));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x141 = 62;
	int32_t t18 = 2236029;

	t18 = (x141<<((x142|x143)==x144));

	if (t18 != 62) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x146 = UINT8_MAX;
	volatile int16_t x148 = INT16_MIN;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x145<<((x146|x147)==x148));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x157 = 53;
	int8_t x158 = INT8_MIN;
	uint16_t x159 = 18704U;
	int32_t x160 = -31;
	volatile int32_t t20 = 4125711;

	t20 = (x157<<((x158|x159)==x160));

	if (t20 != 53) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x165 = 588U;
	int8_t x166 = -1;
	int8_t x167 = -1;
	volatile uint64_t x168 = 15LLU;
	volatile int32_t t21 = -6477;

	t21 = (x165<<((x166|x167)==x168));

	if (t21 != 588) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x173 = UINT32_MAX;
	int16_t x174 = 4292;

	t22 = (x173<<((x174|x175)==x176));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x181 = 29843696;
	volatile int16_t x184 = INT16_MIN;
	int32_t t23 = -36745570;

	t23 = (x181<<((x182|x183)==x184));

	if (t23 != 29843696) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x209 = 3U;
	int64_t x210 = -1LL;
	volatile int32_t t24 = -63240;

	t24 = (x209<<((x210|x211)==x212));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x218 = 708U;
	uint64_t x219 = 1LLU;
	static uint32_t x220 = 132629494U;
	volatile int32_t t25 = -381655;

	t25 = (x217<<((x218|x219)==x220));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x221 = 31166U;
	static int32_t x222 = -1;
	volatile int16_t x224 = -1;

	t26 = (x221<<((x222|x223)==x224));

	if (t26 != 62332) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x229 = 0U;
	int64_t x230 = INT64_MAX;
	static int8_t x231 = INT8_MIN;
	static int16_t x232 = -1;
	static volatile int32_t t27 = 51;

	t27 = (x229<<((x230|x231)==x232));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x235 = 463;
	volatile int16_t x236 = 3564;
	volatile int32_t t28 = 845979;

	t28 = (x233<<((x234|x235)==x236));

	if (t28 != 2099) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x241 = 5U;
	volatile uint8_t x242 = 5U;
	uint32_t x244 = 795530U;
	int32_t t29 = -57;

	t29 = (x241<<((x242|x243)==x244));

	if (t29 != 5) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x261 = 23107U;
	int32_t x262 = -18881679;
	int64_t x263 = INT64_MIN;
	int32_t x264 = -70846361;
	int32_t t30 = -99614999;

	t30 = (x261<<((x262|x263)==x264));

	if (t30 != 23107) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x265 = INT64_MAX;
	uint16_t x266 = 1U;
	int32_t x267 = INT32_MIN;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x265<<((x266|x267)==x268));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x273 = INT8_MAX;
	uint32_t x275 = 15725945U;
	volatile int32_t t32 = 2884806;

	t32 = (x273<<((x274|x275)==x276));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x281 = 2U;
	int64_t x282 = INT64_MIN;
	volatile int64_t x283 = INT64_MIN;
	static uint32_t x284 = UINT32_MAX;
	volatile int32_t t33 = -172;

	t33 = (x281<<((x282|x283)==x284));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x285 = 32459;
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = INT8_MIN;
	int32_t x288 = -1;

	t34 = (x285<<((x286|x287)==x288));

	if (t34 != 64918) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x289 = 11U;
	volatile int64_t x290 = -3LL;
	int32_t x291 = 1374304;
	volatile uint16_t x292 = 213U;
	static volatile int32_t t35 = -1658;

	t35 = (x289<<((x290|x291)==x292));

	if (t35 != 11) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x293 = UINT64_MAX;
	static uint32_t x294 = UINT32_MAX;
	int32_t x295 = 2228344;
	int32_t x296 = -1;
	volatile uint64_t t36 = 66268985616057575LLU;

	t36 = (x293<<((x294|x295)==x296));

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int64_t x298 = -1LL;
	int64_t x300 = 4LL;
	volatile int32_t t37 = 1778;

	t37 = (x297<<((x298|x299)==x300));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x305 = 36781013171LL;
	int64_t x306 = INT64_MIN;
	volatile int64_t x308 = INT64_MAX;

	t38 = (x305<<((x306|x307)==x308));

	if (t38 != 36781013171LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x317 = INT16_MAX;
	static volatile int16_t x318 = 6;
	uint32_t x319 = UINT32_MAX;
	static uint64_t x320 = 6693591953575412LLU;
	int32_t t39 = -52;

	t39 = (x317<<((x318|x319)==x320));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x321 = INT8_MAX;
	static int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	volatile int32_t t40 = 454987;

	t40 = (x321<<((x322|x323)==x324));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x326 = INT32_MAX;
	int8_t x327 = -1;
	volatile int32_t t41 = -2;

	t41 = (x325<<((x326|x327)==x328));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x334 = -1;
	static uint16_t x335 = 0U;
	static volatile uint64_t t42 = 164199661230069322LLU;

	t42 = (x333<<((x334|x335)==x336));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x337 = UINT64_MAX;
	static uint32_t x338 = UINT32_MAX;
	static volatile int8_t x339 = INT8_MIN;
	uint64_t t43 = 159487943086LLU;

	t43 = (x337<<((x338|x339)==x340));

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x349 = 43;
	uint64_t x350 = UINT64_MAX;
	static int32_t x351 = INT32_MIN;
	uint64_t x352 = 13736387566124046LLU;
	volatile int32_t t44 = -146189;

	t44 = (x349<<((x350|x351)==x352));

	if (t44 != 43) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x354 = INT32_MIN;
	volatile uint8_t x355 = 1U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t45 = -132111383;

	t45 = (x353<<((x354|x355)==x356));

	if (t45 != 18425) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x361 = UINT8_MAX;
	uint64_t x362 = 33007451807241LLU;
	int32_t x363 = INT32_MIN;
	volatile int16_t x364 = -198;
	int32_t t46 = 1;

	t46 = (x361<<((x362|x363)==x364));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x365 = 1793256104153129049LLU;
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = -659;
	uint16_t x368 = 0U;
	volatile uint64_t t47 = 197074757661LLU;

	t47 = (x365<<((x366|x367)==x368));

	if (t47 != 1793256104153129049LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x369 = 39764573;
	int16_t x370 = -1;
	static int16_t x371 = INT16_MAX;
	static uint64_t x372 = 62932578998623546LLU;
	volatile int32_t t48 = 23;

	t48 = (x369<<((x370|x371)==x372));

	if (t48 != 39764573) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x389 = UINT64_MAX;
	volatile uint16_t x391 = 554U;
	int16_t x392 = -1;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x389<<((x390|x391)==x392));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x393 = 3321700;
	uint8_t x394 = UINT8_MAX;
	uint32_t x396 = 15502982U;
	volatile int32_t t50 = -3269;

	t50 = (x393<<((x394|x395)==x396));

	if (t50 != 3321700) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x401 = UINT16_MAX;
	volatile uint8_t x402 = UINT8_MAX;
	volatile int8_t x403 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t51 = -106;

	t51 = (x401<<((x402|x403)==x404));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x405 = 186269828U;
	int32_t x406 = INT32_MIN;
	static int8_t x407 = INT8_MIN;
	volatile int32_t x408 = INT32_MAX;
	volatile uint32_t t52 = 7U;

	t52 = (x405<<((x406|x407)==x408));

	if (t52 != 186269828U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x409 = 135958LLU;
	int16_t x410 = INT16_MAX;
	int16_t x411 = INT16_MAX;
	int8_t x412 = 11;
	uint64_t t53 = 15LLU;

	t53 = (x409<<((x410|x411)==x412));

	if (t53 != 135958LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x413 = 1;
	static uint32_t x414 = 3924U;
	int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;

	t54 = (x413<<((x414|x415)==x416));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x429 = INT8_MAX;
	int8_t x430 = INT8_MIN;
	int16_t x431 = -1;
	static volatile int32_t t55 = 3;

	t55 = (x429<<((x430|x431)==x432));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x434 = -10110;
	int8_t x435 = INT8_MIN;
	int32_t x436 = -3848563;

	t56 = (x433<<((x434|x435)==x436));

	if (t56 != 1301976846481LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x437 = 990;
	int32_t x438 = INT32_MAX;
	static volatile uint16_t x439 = 7U;
	static volatile int32_t t57 = -20;

	t57 = (x437<<((x438|x439)==x440));

	if (t57 != 990) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x441 = 31535U;
	int32_t x442 = INT32_MIN;
	int8_t x443 = INT8_MIN;
	int8_t x444 = INT8_MIN;
	volatile int32_t t58 = -1;

	t58 = (x441<<((x442|x443)==x444));

	if (t58 != 63070) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x445 = 122097U;
	int32_t x446 = -508537186;
	uint64_t x447 = 1193571556633LLU;
	uint32_t x448 = UINT32_MAX;
	uint32_t t59 = 613758U;

	t59 = (x445<<((x446|x447)==x448));

	if (t59 != 122097U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x449 = 0U;
	volatile int64_t x452 = 340089LL;
	static int32_t t60 = 1661;

	t60 = (x449<<((x450|x451)==x452));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x453 = 0LL;
	int32_t x454 = INT32_MAX;
	static int16_t x455 = -1;
	uint8_t x456 = 3U;

	t61 = (x453<<((x454|x455)==x456));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x457 = INT32_MAX;
	uint64_t x458 = UINT64_MAX;
	volatile uint16_t x460 = UINT16_MAX;

	t62 = (x457<<((x458|x459)==x460));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x461 = 147787924865414LL;
	int64_t x463 = INT64_MIN;
	int8_t x464 = -1;

	t63 = (x461<<((x462|x463)==x464));

	if (t63 != 147787924865414LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x465 = 51U;
	int32_t x466 = -216590;
	volatile int8_t x467 = INT8_MAX;
	int64_t x468 = INT64_MIN;
	static int32_t t64 = 165689504;

	t64 = (x465<<((x466|x467)==x468));

	if (t64 != 51) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x469 = 8886976;
	volatile uint32_t x470 = 2U;
	int8_t x471 = -1;
	int32_t t65 = -9;

	t65 = (x469<<((x470|x471)==x472));

	if (t65 != 8886976) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x474 = 4;
	volatile uint64_t t66 = 308043351873078LLU;

	t66 = (x473<<((x474|x475)==x476));

	if (t66 != 1360505537867775119LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x481 = 29441U;
	int32_t x482 = 697;
	int64_t x483 = -1LL;
	volatile int16_t x484 = -11;
	int32_t t67 = 15199401;

	t67 = (x481<<((x482|x483)==x484));

	if (t67 != 29441) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x485 = INT8_MAX;
	uint8_t x486 = 1U;
	volatile uint64_t x487 = UINT64_MAX;
	int64_t x488 = INT64_MIN;
	int32_t t68 = 4874;

	t68 = (x485<<((x486|x487)==x488));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x489 = 16949U;
	uint32_t x490 = 75738891U;
	uint32_t x492 = UINT32_MAX;
	int32_t t69 = -5;

	t69 = (x489<<((x490|x491)==x492));

	if (t69 != 16949) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x497 = 1;
	int16_t x498 = -1;
	volatile uint16_t x499 = 92U;
	uint64_t x500 = 117024075580156722LLU;
	volatile int32_t t70 = 30875136;

	t70 = (x497<<((x498|x499)==x500));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x506 = -326;
	int32_t x507 = INT32_MAX;
	volatile int32_t x508 = -1;
	int32_t t71 = -6099654;

	t71 = (x505<<((x506|x507)==x508));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x510 = INT8_MIN;
	int16_t x511 = -1;

	t72 = (x509<<((x510|x511)==x512));

	if (t72 != 3390) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x513 = INT8_MAX;
	volatile uint16_t x514 = 26U;
	static int8_t x515 = 45;
	int32_t x516 = INT32_MIN;
	volatile int32_t t73 = 607697195;

	t73 = (x513<<((x514|x515)==x516));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x517 = 291322387;
	int16_t x518 = -1;
	int32_t x519 = INT32_MAX;
	int16_t x520 = -1081;
	volatile int32_t t74 = -54110324;

	t74 = (x517<<((x518|x519)==x520));

	if (t74 != 291322387) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x529 = INT16_MAX;
	static volatile uint64_t x530 = 85032438144112240LLU;
	volatile uint32_t x531 = UINT32_MAX;
	static uint8_t x532 = UINT8_MAX;
	int32_t t75 = 17;

	t75 = (x529<<((x530|x531)==x532));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x537 = 102U;
	int32_t x540 = INT32_MIN;
	volatile int32_t t76 = 55040377;

	t76 = (x537<<((x538|x539)==x540));

	if (t76 != 102) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x543 = INT32_MIN;
	int32_t t77 = -611095205;

	t77 = (x541<<((x542|x543)==x544));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x549 = 4U;
	int64_t x550 = INT64_MIN;
	int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;
	volatile uint32_t t78 = 3U;

	t78 = (x549<<((x550|x551)==x552));

	if (t78 != 8U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x566 = 582U;
	static int32_t x568 = INT32_MIN;
	uint64_t t79 = 13LLU;

	t79 = (x565<<((x566|x567)==x568));

	if (t79 != 4455298706980267LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x569 = 18LL;
	int32_t x570 = 792;
	static volatile int64_t x572 = -30896755113705860LL;
	volatile int64_t t80 = -217348251553810LL;

	t80 = (x569<<((x570|x571)==x572));

	if (t80 != 18LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x577 = 914296923889621LLU;
	int8_t x578 = INT8_MIN;
	int16_t x579 = 3992;
	uint64_t x580 = UINT64_MAX;
	uint64_t t81 = 2348474198804LLU;

	t81 = (x577<<((x578|x579)==x580));

	if (t81 != 914296923889621LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x581 = 0;
	int16_t x583 = INT16_MAX;
	int8_t x584 = 0;

	t82 = (x581<<((x582|x583)==x584));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x585 = INT8_MAX;
	uint32_t x586 = 0U;
	int8_t x588 = 3;
	int32_t t83 = 48994;

	t83 = (x585<<((x586|x587)==x588));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x590 = INT64_MIN;
	static uint8_t x591 = 11U;
	int32_t x592 = INT32_MAX;
	volatile int32_t t84 = 503582;

	t84 = (x589<<((x590|x591)==x592));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x595 = 8;
	uint32_t x596 = 31064316U;
	volatile int32_t t85 = 250;

	t85 = (x593<<((x594|x595)==x596));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x598 = INT32_MIN;
	volatile int32_t x599 = INT32_MAX;
	uint32_t x600 = UINT32_MAX;
	static uint32_t t86 = 302998U;

	t86 = (x597<<((x598|x599)==x600));

	if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x605 = 0;
	static volatile uint32_t x606 = 76U;
	int8_t x608 = 0;
	int32_t t87 = 17151835;

	t87 = (x605<<((x606|x607)==x608));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x609 = 5U;
	int8_t x610 = -24;
	int16_t x611 = INT16_MIN;
	uint8_t x612 = 1U;
	volatile int32_t t88 = -1449;

	t88 = (x609<<((x610|x611)==x612));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x617 = UINT32_MAX;
	int64_t x618 = INT64_MIN;
	int32_t x619 = -1;
	volatile int32_t x620 = 55;
	uint32_t t89 = UINT32_MAX;

	t89 = (x617<<((x618|x619)==x620));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x625 = 3378LLU;
	static uint32_t x626 = UINT32_MAX;
	uint8_t x628 = 1U;
	volatile uint64_t t90 = 11103LLU;

	t90 = (x625<<((x626|x627)==x628));

	if (t90 != 3378LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x633 = 40U;
	static volatile uint32_t x634 = 2U;
	uint32_t x635 = 7434U;
	int64_t x636 = -27003597084282842LL;
	volatile int32_t t91 = 1417;

	t91 = (x633<<((x634|x635)==x636));

	if (t91 != 40) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x637 = INT8_MAX;
	volatile int64_t x638 = INT64_MAX;

	t92 = (x637<<((x638|x639)==x640));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x645 = 127416LLU;
	volatile uint64_t x646 = 231LLU;
	volatile int64_t x647 = INT64_MAX;
	int8_t x648 = -1;
	static volatile uint64_t t93 = 176513211584256LLU;

	t93 = (x645<<((x646|x647)==x648));

	if (t93 != 127416LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x649 = INT8_MAX;
	int32_t x650 = INT32_MIN;
	static int64_t x651 = 20244482805620LL;
	int16_t x652 = -1;
	int32_t t94 = -556345057;

	t94 = (x649<<((x650|x651)==x652));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x653 = 971;
	uint16_t x654 = 9856U;
	int64_t x655 = -1LL;
	uint32_t x656 = 597U;

	t95 = (x653<<((x654|x655)==x656));

	if (t95 != 971) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x660 = INT64_MIN;
	uint64_t t96 = 1895560804089389LLU;

	t96 = (x657<<((x658|x659)==x660));

	if (t96 != 351568960647864LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x661 = 120;
	int16_t x662 = -8215;
	volatile int64_t x663 = -1LL;
	int16_t x664 = 1;
	volatile int32_t t97 = 296297194;

	t97 = (x661<<((x662|x663)==x664));

	if (t97 != 120) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x669 = INT32_MAX;
	volatile int32_t x670 = INT32_MIN;
	int32_t x671 = INT32_MIN;
	uint32_t x672 = 1U;
	int32_t t98 = INT32_MAX;

	t98 = (x669<<((x670|x671)==x672));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x673 = 2U;
	int64_t x674 = -1LL;
	int8_t x676 = -1;
	volatile int32_t t99 = -192;

	t99 = (x673<<((x674|x675)==x676));

	if (t99 != 4) { NG(); } else { ; }
	
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

