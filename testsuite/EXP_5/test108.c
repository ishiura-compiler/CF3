#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -2752;
volatile int32_t x88 = INT32_MAX;
int32_t x98 = INT32_MAX;
int8_t x101 = -1;
volatile int32_t t6 = -34713;
volatile int32_t t7 = INT32_MAX;
int16_t x124 = -26;
volatile int32_t t8 = -211;
uint64_t x127 = 634162972LLU;
static int64_t x131 = INT64_MIN;
volatile int16_t x167 = -1;
volatile int32_t t14 = 353389077;
volatile uint32_t x198 = 55U;
static int8_t x247 = -1;
uint32_t x249 = 333565512U;
uint16_t x252 = 5678U;
uint64_t x262 = 11683503255LLU;
int64_t x264 = INT64_MIN;
int8_t x275 = 36;
static uint32_t x293 = UINT32_MAX;
volatile uint32_t t28 = UINT32_MAX;
volatile uint16_t x298 = UINT16_MAX;
uint64_t x306 = 1552897390355LLU;
int8_t x310 = 9;
int32_t t31 = 2232246;
uint8_t x318 = 60U;
int8_t x322 = INT8_MIN;
static int16_t x325 = 3;
volatile int16_t x336 = INT16_MIN;
static volatile int32_t x340 = -71950334;
uint8_t x348 = 15U;
volatile int64_t t38 = -306545486LL;
uint16_t x364 = 4099U;
int8_t x372 = -20;
uint32_t x380 = 56081182U;
static int32_t x401 = INT32_MIN;
int64_t x409 = INT64_MIN;
volatile int64_t t45 = INT64_MIN;
static volatile int32_t t46 = -1293;
uint16_t x417 = UINT16_MAX;
static volatile int32_t t49 = -1;
static int8_t x468 = -1;
int16_t x479 = -1;
int32_t x481 = INT32_MIN;
int8_t x502 = INT8_MIN;
int8_t x515 = -1;
uint32_t x527 = UINT32_MAX;
int8_t x533 = -46;
uint32_t x535 = 160U;
volatile int16_t x551 = -1970;
uint16_t x558 = 0U;
static int64_t x569 = 2344LL;
uint64_t x572 = 9176107610545174614LLU;
volatile int64_t t60 = -1LL;
uint64_t x574 = 2235379LLU;
volatile uint64_t x580 = 36855747838758LLU;
volatile int16_t x613 = 1;
static int32_t x614 = INT32_MIN;
static int32_t x638 = 357;
static uint16_t x643 = 1U;
uint8_t x654 = 21U;
int32_t t69 = 41066;
uint32_t t70 = 475374U;
static volatile int64_t x675 = 9834401266LL;
int32_t t71 = 930;
int8_t x682 = -1;
int32_t t75 = -133699;
int64_t x696 = INT64_MAX;
uint32_t x699 = UINT32_MAX;
static int16_t x714 = INT16_MAX;
uint8_t x730 = 29U;
uint16_t x732 = 23645U;
int8_t x738 = INT8_MIN;
volatile int32_t t83 = -4389;
static uint16_t x745 = UINT16_MAX;
uint64_t x747 = UINT64_MAX;
int32_t t84 = -595;
int16_t x754 = 205;
int16_t x759 = -1786;
int8_t x760 = INT8_MIN;
uint32_t x761 = 405U;
volatile int16_t x770 = INT16_MAX;
int32_t t88 = 159040515;
int16_t x804 = -118;
volatile int32_t t90 = INT32_MIN;
static volatile int32_t t91 = -776;
volatile int16_t x814 = -1;
static uint8_t x815 = 0U;
volatile int64_t x816 = INT64_MAX;
uint64_t x818 = 415564874335LLU;
static uint64_t x819 = UINT64_MAX;
int16_t x832 = -1;
static uint8_t x839 = UINT8_MAX;
volatile uint16_t x847 = 57U;
static int32_t t97 = 452944;
int8_t x857 = INT8_MIN;


void f0(void) {
	int16_t x25 = 46;
	uint32_t x26 = 3U;
	uint8_t x27 = 9U;
	static int8_t x28 = -1;

	t0 = (x25/((x26+x27)<x28));

	if (t0 != 46) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x49 = 26953118LL;
	volatile int64_t x50 = INT64_MIN;
	uint8_t x51 = 4U;
	int16_t x52 = -1;
	static volatile int64_t t1 = -1171LL;

	t1 = (x49/((x50+x51)<x52));

	if (t1 != 26953118LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x81 = 3U;
	uint8_t x82 = 1U;
	int32_t x83 = 7144;
	uint64_t x84 = 107656580441593012LLU;
	int32_t t2 = 26867;

	t2 = (x81/((x82+x83)<x84));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x85 = 3U;
	volatile int64_t x86 = 784350074LL;
	static int32_t x87 = -1;
	volatile int32_t t3 = 1;

	t3 = (x85/((x86+x87)<x88));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x93 = UINT8_MAX;
	uint16_t x94 = 0U;
	int16_t x95 = -1;
	int32_t x96 = 250506981;
	volatile int32_t t4 = 4111515;

	t4 = (x93/((x94+x95)<x96));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x97 = -2012;
	static uint32_t x99 = 6304596U;
	int8_t x100 = -1;
	volatile int32_t t5 = 85184;

	t5 = (x97/((x98+x99)<x100));

	if (t5 != -2012) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x102 = INT16_MAX;
	int64_t x103 = -1958258689291LL;
	int32_t x104 = -1;

	t6 = (x101/((x102+x103)<x104));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x105 = INT32_MAX;
	volatile uint32_t x106 = 736023965U;
	int8_t x107 = -1;
	int32_t x108 = -1;

	t7 = (x105/((x106+x107)<x108));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x121 = UINT8_MAX;
	uint16_t x122 = 5U;
	volatile int64_t x123 = INT64_MIN;

	t8 = (x121/((x122+x123)<x124));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x125 = INT8_MIN;
	uint8_t x126 = 1U;
	uint64_t x128 = 1786340573662042939LLU;
	volatile int32_t t9 = -40192867;

	t9 = (x125/((x126+x127)<x128));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x129 = INT8_MIN;
	volatile int16_t x130 = INT16_MAX;
	int8_t x132 = INT8_MAX;
	static volatile int32_t t10 = -7;

	t10 = (x129/((x130+x131)<x132));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x145 = 125U;
	static uint8_t x146 = UINT8_MAX;
	uint16_t x147 = UINT16_MAX;
	volatile int32_t x148 = INT32_MAX;
	volatile uint32_t t11 = 41305U;

	t11 = (x145/((x146+x147)<x148));

	if (t11 != 125U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x149 = 7;
	int64_t x150 = -1LL;
	static int16_t x151 = -54;
	int8_t x152 = INT8_MAX;
	int32_t t12 = 218660717;

	t12 = (x149/((x150+x151)<x152));

	if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x165 = UINT8_MAX;
	int8_t x166 = 6;
	static int8_t x168 = INT8_MAX;
	int32_t t13 = -142994;

	t13 = (x165/((x166+x167)<x168));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x177 = UINT8_MAX;
	uint64_t x178 = 2LLU;
	uint16_t x179 = 3U;
	uint8_t x180 = UINT8_MAX;

	t14 = (x177/((x178+x179)<x180));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = INT64_MAX;
	int16_t x184 = -1;
	volatile int32_t t15 = -7769303;

	t15 = (x181/((x182+x183)<x184));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x193 = UINT32_MAX;
	volatile int32_t x194 = INT32_MIN;
	static uint16_t x195 = UINT16_MAX;
	int32_t x196 = -1;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x193/((x194+x195)<x196));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x197 = -52177871;
	volatile uint64_t x199 = UINT64_MAX;
	int64_t x200 = -1LL;
	int32_t t17 = -2476565;

	t17 = (x197/((x198+x199)<x200));

	if (t17 != -52177871) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x201 = INT8_MIN;
	static int32_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	uint32_t x204 = 1442793U;
	int32_t t18 = 31197403;

	t18 = (x201/((x202+x203)<x204));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x205 = 65;
	volatile int64_t x206 = -3583837118917777365LL;
	int8_t x207 = INT8_MIN;
	static volatile uint8_t x208 = 4U;
	int32_t t19 = -15532;

	t19 = (x205/((x206+x207)<x208));

	if (t19 != 65) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x221 = INT8_MAX;
	volatile int8_t x222 = INT8_MAX;
	int8_t x223 = -1;
	volatile uint32_t x224 = 5769097U;
	static volatile int32_t t20 = 1886727;

	t20 = (x221/((x222+x223)<x224));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x245 = INT16_MIN;
	int32_t x246 = 2;
	static int8_t x248 = 13;
	volatile int32_t t21 = -194162;

	t21 = (x245/((x246+x247)<x248));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x250 = UINT32_MAX;
	volatile uint8_t x251 = UINT8_MAX;
	volatile uint32_t t22 = 352474461U;

	t22 = (x249/((x250+x251)<x252));

	if (t22 != 333565512U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x253 = -1;
	static int64_t x254 = -1LL;
	uint8_t x255 = 7U;
	int8_t x256 = INT8_MAX;
	int32_t t23 = -292293;

	t23 = (x253/((x254+x255)<x256));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x261 = UINT64_MAX;
	static uint64_t x263 = 14419LLU;
	uint64_t t24 = UINT64_MAX;

	t24 = (x261/((x262+x263)<x264));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = -2892605LL;
	static volatile uint32_t x276 = UINT32_MAX;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x273/((x274+x275)<x276));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x277 = UINT64_MAX;
	volatile int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MAX;
	int8_t x280 = -1;
	uint64_t t26 = UINT64_MAX;

	t26 = (x277/((x278+x279)<x280));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x289 = 97530336682493LLU;
	static volatile int32_t x290 = -11449821;
	static volatile uint8_t x291 = 3U;
	static volatile uint16_t x292 = 209U;
	volatile uint64_t t27 = 71247921989356758LLU;

	t27 = (x289/((x290+x291)<x292));

	if (t27 != 97530336682493LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x294 = INT64_MIN;
	volatile int8_t x295 = 40;
	static uint32_t x296 = UINT32_MAX;

	t28 = (x293/((x294+x295)<x296));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x297 = 8;
	uint16_t x299 = 39U;
	volatile int64_t x300 = INT64_MAX;
	int32_t t29 = -11215564;

	t29 = (x297/((x298+x299)<x300));

	if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x305 = INT32_MIN;
	uint64_t x307 = UINT64_MAX;
	static volatile int64_t x308 = INT64_MIN;
	static volatile int32_t t30 = INT32_MIN;

	t30 = (x305/((x306+x307)<x308));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x309 = -1;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MIN;

	t31 = (x309/((x310+x311)<x312));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = 0;
	int8_t x315 = INT8_MAX;
	uint64_t x316 = 29092LLU;
	int32_t t32 = INT32_MIN;

	t32 = (x313/((x314+x315)<x316));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x317 = INT32_MIN;
	int64_t x319 = -28280678440740LL;
	int64_t x320 = INT64_MAX;
	int32_t t33 = INT32_MIN;

	t33 = (x317/((x318+x319)<x320));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x321 = INT16_MIN;
	int8_t x323 = -1;
	int16_t x324 = -1;
	int32_t t34 = -2461;

	t34 = (x321/((x322+x323)<x324));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x326 = -1;
	int32_t x327 = -103560831;
	volatile int8_t x328 = INT8_MIN;
	int32_t t35 = 373319;

	t35 = (x325/((x326+x327)<x328));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x333 = INT16_MIN;
	int64_t x334 = -1LL;
	static int64_t x335 = -37882747596LL;
	int32_t t36 = 26639;

	t36 = (x333/((x334+x335)<x336));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x337 = 1U;
	int32_t x338 = INT32_MIN;
	volatile uint16_t x339 = 0U;
	volatile uint32_t t37 = 203209007U;

	t37 = (x337/((x338+x339)<x340));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x345 = -1LL;
	static int8_t x346 = INT8_MIN;
	uint8_t x347 = 33U;

	t38 = (x345/((x346+x347)<x348));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x361 = 2;
	int16_t x362 = -1;
	static int16_t x363 = -63;
	volatile int32_t t39 = 88053;

	t39 = (x361/((x362+x363)<x364));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x365 = -225959786331783390LL;
	int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	volatile uint16_t x368 = 796U;
	volatile int64_t t40 = 872318043990691175LL;

	t40 = (x365/((x366+x367)<x368));

	if (t40 != -225959786331783390LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	int8_t x371 = 0;
	static int64_t t41 = INT64_MIN;

	t41 = (x369/((x370+x371)<x372));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x373 = UINT64_MAX;
	uint8_t x374 = 3U;
	volatile int16_t x375 = INT16_MIN;
	int32_t x376 = 695;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x373/((x374+x375)<x376));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x377 = -1;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = INT8_MAX;
	volatile int32_t t43 = 45774232;

	t43 = (x377/((x378+x379)<x380));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x402 = INT16_MIN;
	volatile uint8_t x403 = 1U;
	static volatile int8_t x404 = INT8_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x401/((x402+x403)<x404));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x410 = 1U;
	static uint8_t x411 = UINT8_MAX;
	int32_t x412 = INT32_MIN;

	t45 = (x409/((x410+x411)<x412));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	uint32_t x415 = UINT32_MAX;
	volatile int16_t x416 = -1;

	t46 = (x413/((x414+x415)<x416));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x418 = INT32_MIN;
	static volatile int8_t x419 = 15;
	int64_t x420 = -1LL;
	int32_t t47 = -35;

	t47 = (x417/((x418+x419)<x420));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x425 = -1;
	static int64_t x426 = -222056LL;
	int16_t x427 = -1;
	int8_t x428 = INT8_MIN;
	volatile int32_t t48 = 1;

	t48 = (x425/((x426+x427)<x428));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x453 = INT8_MAX;
	int64_t x454 = INT64_MIN;
	int16_t x455 = 32;
	int16_t x456 = -1;

	t49 = (x453/((x454+x455)<x456));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x465 = INT8_MIN;
	uint16_t x466 = 3U;
	int16_t x467 = -4013;
	int32_t t50 = 19708687;

	t50 = (x465/((x466+x467)<x468));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x477 = -1;
	int64_t x478 = -1LL;
	uint64_t x480 = UINT64_MAX;
	volatile int32_t t51 = 82;

	t51 = (x477/((x478+x479)<x480));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x482 = -3;
	static volatile int32_t x483 = -551;
	volatile uint16_t x484 = 20656U;
	volatile int32_t t52 = INT32_MIN;

	t52 = (x481/((x482+x483)<x484));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x501 = -1LL;
	static uint64_t x503 = 1429LLU;
	uint32_t x504 = 264014026U;
	static volatile int64_t t53 = 16082LL;

	t53 = (x501/((x502+x503)<x504));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x513 = INT64_MIN;
	uint64_t x514 = 1LLU;
	uint16_t x516 = 13U;
	int64_t t54 = INT64_MIN;

	t54 = (x513/((x514+x515)<x516));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x525 = 6538496511900144LLU;
	int32_t x526 = INT32_MIN;
	static int8_t x528 = -1;
	uint64_t t55 = 8050310LLU;

	t55 = (x525/((x526+x527)<x528));

	if (t55 != 6538496511900144LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x534 = INT64_MIN;
	uint64_t x536 = UINT64_MAX;
	volatile int32_t t56 = 34026539;

	t56 = (x533/((x534+x535)<x536));

	if (t56 != -46) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x545 = -1LL;
	uint8_t x546 = UINT8_MAX;
	uint64_t x547 = UINT64_MAX;
	int32_t x548 = 21406;
	int64_t t57 = -547668462LL;

	t57 = (x545/((x546+x547)<x548));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x549 = -1LL;
	int64_t x550 = -314667LL;
	int16_t x552 = INT16_MIN;
	volatile int64_t t58 = -5957LL;

	t58 = (x549/((x550+x551)<x552));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x557 = 511223;
	uint8_t x559 = 3U;
	static int64_t x560 = INT64_MAX;
	int32_t t59 = 37731;

	t59 = (x557/((x558+x559)<x560));

	if (t59 != 511223) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x570 = 5;
	uint64_t x571 = 642015265LLU;

	t60 = (x569/((x570+x571)<x572));

	if (t60 != 2344LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x573 = INT32_MIN;
	int32_t x575 = INT32_MIN;
	int16_t x576 = -2453;
	int32_t t61 = INT32_MIN;

	t61 = (x573/((x574+x575)<x576));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x577 = INT32_MIN;
	volatile int32_t x578 = -1;
	volatile uint32_t x579 = 55U;
	int32_t t62 = INT32_MIN;

	t62 = (x577/((x578+x579)<x580));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x585 = INT64_MIN;
	uint64_t x586 = 2LLU;
	int32_t x587 = INT32_MIN;
	static int16_t x588 = -7;
	int64_t t63 = INT64_MIN;

	t63 = (x585/((x586+x587)<x588));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x605 = UINT32_MAX;
	static int8_t x606 = INT8_MIN;
	int16_t x607 = INT16_MIN;
	volatile int32_t x608 = 485721725;
	uint32_t t64 = UINT32_MAX;

	t64 = (x605/((x606+x607)<x608));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x615 = -1LL;
	int64_t x616 = -496744LL;
	static volatile int32_t t65 = -160;

	t65 = (x613/((x614+x615)<x616));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x637 = INT32_MIN;
	uint32_t x639 = UINT32_MAX;
	uint32_t x640 = 996188000U;
	int32_t t66 = INT32_MIN;

	t66 = (x637/((x638+x639)<x640));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x641 = -1;
	volatile uint64_t x642 = UINT64_MAX;
	int64_t x644 = INT64_MIN;
	int32_t t67 = 77;

	t67 = (x641/((x642+x643)<x644));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x649 = INT16_MAX;
	uint8_t x650 = 1U;
	volatile int8_t x651 = INT8_MAX;
	uint8_t x652 = UINT8_MAX;
	int32_t t68 = 150;

	t68 = (x649/((x650+x651)<x652));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x653 = UINT16_MAX;
	static int16_t x655 = INT16_MIN;
	int32_t x656 = -2017;

	t69 = (x653/((x654+x655)<x656));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x665 = 807544170U;
	static volatile int32_t x666 = INT32_MAX;
	static volatile int64_t x667 = -917679731590LL;
	volatile int8_t x668 = INT8_MIN;

	t70 = (x665/((x666+x667)<x668));

	if (t70 != 807544170U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x673 = 24U;
	int32_t x674 = INT32_MIN;
	uint64_t x676 = 1809563734025LLU;

	t71 = (x673/((x674+x675)<x676));

	if (t71 != 24) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x677 = -62495769574LL;
	int32_t x678 = INT32_MAX;
	int32_t x679 = -58;
	uint64_t x680 = UINT64_MAX;
	int64_t t72 = -238712494169749LL;

	t72 = (x677/((x678+x679)<x680));

	if (t72 != -62495769574LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x681 = INT16_MIN;
	int16_t x683 = INT16_MIN;
	static int16_t x684 = 2037;
	volatile int32_t t73 = 204638564;

	t73 = (x681/((x682+x683)<x684));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x685 = 10;
	int64_t x686 = -1LL;
	static volatile int8_t x687 = -1;
	volatile int16_t x688 = 0;
	volatile int32_t t74 = -1;

	t74 = (x685/((x686+x687)<x688));

	if (t74 != 10) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x689 = -1;
	volatile int8_t x690 = 27;
	int16_t x691 = -734;
	uint32_t x692 = UINT32_MAX;

	t75 = (x689/((x690+x691)<x692));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x693 = INT8_MIN;
	int8_t x694 = -13;
	static uint8_t x695 = UINT8_MAX;
	int32_t t76 = -96571533;

	t76 = (x693/((x694+x695)<x696));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x697 = INT32_MIN;
	uint32_t x698 = 683541U;
	static int8_t x700 = INT8_MIN;
	int32_t t77 = INT32_MIN;

	t77 = (x697/((x698+x699)<x700));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x701 = INT8_MAX;
	volatile uint16_t x702 = 4902U;
	uint64_t x703 = UINT64_MAX;
	static volatile int32_t x704 = INT32_MIN;
	static volatile int32_t t78 = -1;

	t78 = (x701/((x702+x703)<x704));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x705 = 17;
	static int16_t x706 = 822;
	static int32_t x707 = INT32_MIN;
	uint16_t x708 = 62U;
	volatile int32_t t79 = -402942;

	t79 = (x705/((x706+x707)<x708));

	if (t79 != 17) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x713 = 18U;
	int64_t x715 = INT64_MIN;
	int64_t x716 = -1LL;
	int32_t t80 = 2420034;

	t80 = (x713/((x714+x715)<x716));

	if (t80 != 18) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x717 = INT32_MIN;
	int64_t x718 = -1681150212192401LL;
	int16_t x719 = -24;
	int16_t x720 = -1;
	volatile int32_t t81 = INT32_MIN;

	t81 = (x717/((x718+x719)<x720));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x729 = 2;
	static int8_t x731 = INT8_MIN;
	volatile int32_t t82 = 168992033;

	t82 = (x729/((x730+x731)<x732));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x737 = INT16_MIN;
	int64_t x739 = -362LL;
	uint16_t x740 = 240U;

	t83 = (x737/((x738+x739)<x740));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x746 = 76LLU;
	int16_t x748 = INT16_MIN;

	t84 = (x745/((x746+x747)<x748));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x753 = -3129;
	volatile int16_t x755 = -2441;
	volatile int8_t x756 = INT8_MAX;
	volatile int32_t t85 = 96;

	t85 = (x753/((x754+x755)<x756));

	if (t85 != -3129) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x757 = INT8_MIN;
	uint64_t x758 = 2LLU;
	int32_t t86 = 49002;

	t86 = (x757/((x758+x759)<x760));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x762 = 263U;
	volatile int8_t x763 = INT8_MAX;
	volatile uint64_t x764 = 11142033636397LLU;
	uint32_t t87 = 9U;

	t87 = (x761/((x762+x763)<x764));

	if (t87 != 405U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x769 = INT8_MAX;
	static int16_t x771 = -105;
	uint16_t x772 = UINT16_MAX;

	t88 = (x769/((x770+x771)<x772));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x773 = INT64_MIN;
	int16_t x774 = INT16_MIN;
	int32_t x775 = -1;
	int16_t x776 = -1;
	int64_t t89 = INT64_MIN;

	t89 = (x773/((x774+x775)<x776));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x801 = INT32_MIN;
	uint64_t x802 = 95064LLU;
	uint8_t x803 = 3U;

	t90 = (x801/((x802+x803)<x804));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x805 = INT8_MIN;
	uint64_t x806 = 31420656945LLU;
	int8_t x807 = INT8_MIN;
	static int16_t x808 = -1;

	t91 = (x805/((x806+x807)<x808));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x813 = UINT32_MAX;
	static volatile uint32_t t92 = UINT32_MAX;

	t92 = (x813/((x814+x815)<x816));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x817 = -24756223;
	volatile int64_t x820 = INT64_MAX;
	static volatile int32_t t93 = -7561;

	t93 = (x817/((x818+x819)<x820));

	if (t93 != -24756223) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x825 = -10969533;
	int16_t x826 = INT16_MIN;
	static int64_t x827 = -1LL;
	int64_t x828 = 72266935LL;
	volatile int32_t t94 = 1179174;

	t94 = (x825/((x826+x827)<x828));

	if (t94 != -10969533) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x829 = 0;
	int8_t x830 = INT8_MIN;
	uint32_t x831 = UINT32_MAX;
	int32_t t95 = 1077;

	t95 = (x829/((x830+x831)<x832));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x837 = 205419U;
	volatile uint16_t x838 = UINT16_MAX;
	uint64_t x840 = UINT64_MAX;
	volatile uint32_t t96 = 0U;

	t96 = (x837/((x838+x839)<x840));

	if (t96 != 205419U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x845 = -1;
	static uint64_t x846 = 28622848LLU;
	int32_t x848 = INT32_MIN;

	t97 = (x845/((x846+x847)<x848));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x853 = 832694528;
	uint16_t x854 = 4U;
	uint64_t x855 = 30852390LLU;
	int32_t x856 = INT32_MIN;
	int32_t t98 = -1;

	t98 = (x853/((x854+x855)<x856));

	if (t98 != 832694528) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x858 = INT16_MIN;
	volatile int32_t x859 = -1;
	int8_t x860 = INT8_MAX;
	int32_t t99 = -2;

	t99 = (x857/((x858+x859)<x860));

	if (t99 != -128) { NG(); } else { ; }
	
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

