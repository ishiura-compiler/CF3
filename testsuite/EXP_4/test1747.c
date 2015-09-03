#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x10 = 7U;
int64_t t1 = -88079916LL;
static uint16_t x22 = 6777U;
int16_t x23 = INT16_MIN;
volatile int32_t t6 = -2065843;
uint64_t x52 = UINT64_MAX;
volatile int16_t x70 = INT16_MIN;
int8_t x81 = 13;
static volatile uint32_t t12 = 1U;
int8_t x89 = INT8_MIN;
int16_t x105 = INT16_MIN;
int16_t x108 = INT16_MAX;
int64_t x126 = -1LL;
int16_t x131 = 226;
uint8_t x141 = 23U;
uint64_t t18 = 2LLU;
volatile uint32_t x153 = 109032U;
volatile uint64_t x154 = 116953LLU;
int16_t x155 = INT16_MAX;
volatile int64_t t21 = -168960309LL;
uint8_t x171 = UINT8_MAX;
volatile int32_t t24 = 98;
static int64_t x173 = -87565798LL;
int16_t x176 = INT16_MAX;
int8_t x179 = INT8_MIN;
volatile int64_t t26 = -6007208LL;
volatile int64_t t27 = 29672601044LL;
uint16_t x189 = 12U;
static volatile uint16_t x191 = 746U;
volatile uint64_t t29 = 6451LLU;
uint64_t x213 = 577LLU;
int32_t x217 = 190;
int32_t x225 = INT32_MIN;
int8_t x227 = INT8_MIN;
volatile int32_t x228 = INT32_MAX;
int32_t x230 = 895;
int64_t x258 = -517067480553384LL;
uint8_t x265 = 103U;
uint32_t x277 = 8135317U;
int64_t t42 = 45246941491499LL;
int64_t x286 = INT64_MIN;
volatile int32_t x293 = INT32_MAX;
volatile int64_t t47 = -19588482337912672LL;
int64_t x328 = 96986888345890LL;
volatile int32_t x344 = INT32_MAX;
static int64_t x347 = INT64_MIN;
int64_t t54 = 1924383627LL;
int16_t x349 = 1;
uint8_t x350 = UINT8_MAX;
uint32_t x351 = 8U;
uint32_t t55 = 1860509U;
volatile int64_t x353 = INT64_MAX;
volatile uint32_t t58 = 24379221U;
static volatile int32_t x373 = INT32_MIN;
static volatile int64_t t59 = -2839740139LL;
static uint16_t x383 = UINT16_MAX;
uint64_t x384 = 5723555412LLU;
static volatile uint64_t t60 = 585681222LLU;
uint32_t x387 = 801626U;
int16_t x407 = -1;
volatile int8_t x416 = INT8_MIN;
int8_t x422 = -1;
volatile int32_t x431 = 2;
static int8_t x444 = -1;
static uint8_t x451 = UINT8_MAX;
static int8_t x459 = INT8_MIN;
static int64_t t74 = 631914862558344606LL;
int64_t x461 = -1LL;
volatile uint32_t x463 = UINT32_MAX;
static uint64_t x464 = 17937450LLU;
static uint32_t x469 = UINT32_MAX;
int16_t x470 = 535;
uint32_t x473 = 13048U;
uint8_t x477 = UINT8_MAX;
uint32_t t79 = 4678032U;
uint32_t x482 = 10788472U;
uint8_t x484 = UINT8_MAX;
int64_t x495 = -11625357456450LL;
volatile int64_t t81 = 368LL;
static uint64_t x501 = 68893902274LLU;
int8_t x517 = -1;
volatile int32_t x518 = -1;
int8_t x520 = -2;
uint64_t t85 = 415754857822850LLU;
int16_t x537 = INT16_MIN;
uint8_t x539 = 14U;
int32_t x542 = -1019;
uint32_t x543 = 26U;
int16_t x549 = -489;
static uint64_t x555 = 32LLU;
uint64_t t92 = 117451292629728LLU;
int32_t x565 = -1;
uint32_t x588 = 20U;
volatile uint32_t t97 = 18002199U;


void f0(void) {
	uint16_t x1 = 8U;
	static uint64_t x2 = 414958180817884616LLU;
	int16_t x3 = -1;
	int8_t x4 = INT8_MIN;
	static uint64_t t0 = 7LLU;

	t0 = (x1%(x2%(x3&x4)));

	if (t0 != 8LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -3098563502324113LL;
	static int8_t x11 = INT8_MAX;
	int64_t x12 = INT64_MAX;

	t1 = (x9%(x10%(x11&x12)));

	if (t1 != -5LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = 8899;
	int32_t x24 = INT32_MAX;
	int32_t t2 = 6;

	t2 = (x21%(x22%(x23&x24)));

	if (t2 != 2122) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = -1;
	int16_t x26 = INT16_MAX;
	int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MIN;
	volatile int64_t t3 = -1LL;

	t3 = (x25%(x26%(x27&x28)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = 11827;
	uint64_t x35 = UINT64_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	uint64_t t4 = 576422LLU;

	t4 = (x33%(x34%(x35&x36)));

	if (t4 != 10588LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = 1;
	volatile int8_t x39 = INT8_MIN;
	uint64_t x40 = 891879423548LLU;
	volatile uint64_t t5 = 329890289LLU;

	t5 = (x37%(x38%(x39&x40)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x41 = -475;
	int32_t x42 = -1;
	int16_t x43 = -1;
	static int32_t x44 = INT32_MIN;

	t6 = (x41%(x42%(x43&x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = 164335;
	int32_t x46 = -1;
	int64_t x47 = 3237LL;
	volatile uint32_t x48 = 403U;
	volatile int64_t t7 = -20867LL;

	t7 = (x45%(x46%(x47&x48)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MIN;
	static uint64_t t8 = 5631531638LLU;

	t8 = (x49%(x50%(x51&x52)));

	if (t8 != 2147483520LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MAX;
	uint32_t x67 = 49U;
	int8_t x68 = -1;
	uint32_t t9 = 19261085U;

	t9 = (x65%(x66%(x67&x68)));

	if (t9 != 18U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = -1;
	volatile uint16_t x71 = 333U;
	int32_t x72 = -1;
	volatile int32_t t10 = -1;

	t10 = (x69%(x70%(x71&x72)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x82 = INT32_MIN;
	int64_t x83 = 346859LL;
	int32_t x84 = INT32_MAX;
	int64_t t11 = -90814290939484605LL;

	t11 = (x81%(x82%(x83&x84)));

	if (t11 != 13LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = 0U;
	int16_t x86 = -1;
	volatile uint32_t x87 = 23U;
	int32_t x88 = INT32_MAX;

	t12 = (x85%(x86%(x87&x88)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = INT64_MAX;
	int32_t x92 = INT32_MIN;
	int64_t t13 = 19158LL;

	t13 = (x89%(x90%(x91&x92)));

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;
	volatile int64_t t14 = -427527934608633LL;

	t14 = (x97%(x98%(x99&x100)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x106 = 5U;
	volatile int16_t x107 = -1;
	int32_t t15 = 664308;

	t15 = (x105%(x106%(x107&x108)));

	if (t15 != -3) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x125 = -7808848831435817LL;
	int8_t x127 = -1;
	static volatile uint32_t x128 = 12143879U;
	int64_t t16 = -1437631815349090LL;

	t16 = (x125%(x126%(x127&x128)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x129 = 0U;
	static int32_t x130 = -1;
	int16_t x132 = INT16_MAX;
	volatile int32_t t17 = 9195025;

	t17 = (x129%(x130%(x131&x132)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x142 = 1U;
	uint64_t x143 = 9615784250627878LLU;
	int32_t x144 = -1;

	t18 = (x141%(x142%(x143&x144)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = INT8_MIN;
	volatile int64_t x147 = -1LL;
	static volatile uint16_t x148 = 309U;
	int64_t t19 = -1611076855878LL;

	t19 = (x145%(x146%(x147&x148)));

	if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x156 = -30489782758222LL;
	volatile uint64_t t20 = 41LLU;

	t20 = (x153%(x154%(x155&x156)));

	if (t20 != 6516LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x157 = INT64_MIN;
	static int64_t x158 = -19782794LL;
	volatile uint8_t x159 = 31U;
	static int16_t x160 = 100;

	t21 = (x157%(x158%(x159&x160)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x161 = 1099600U;
	static uint64_t x162 = 2159273560256281799LLU;
	volatile int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MIN;
	uint64_t t22 = 187072837LLU;

	t22 = (x161%(x162%(x163&x164)));

	if (t22 != 1099600LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x165 = 12991057;
	int32_t x166 = -1;
	volatile int8_t x167 = 7;
	volatile int16_t x168 = -1;
	static volatile int32_t t23 = 26551453;

	t23 = (x165%(x166%(x167&x168)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x169 = 33U;
	int8_t x170 = INT8_MAX;
	static int8_t x172 = INT8_MIN;

	t24 = (x169%(x170%(x171&x172)));

	if (t24 != 33) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = 37;
	volatile int64_t t25 = 2100152580343108LL;

	t25 = (x173%(x174%(x175&x176)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x177 = -1;
	uint16_t x178 = UINT16_MAX;
	static int64_t x180 = INT64_MAX;

	t26 = (x177%(x178%(x179&x180)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x185 = INT64_MAX;
	int64_t x186 = INT64_MAX;
	int32_t x187 = INT32_MAX;
	int8_t x188 = -1;

	t27 = (x185%(x186%(x187&x188)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x190 = UINT32_MAX;
	uint64_t x192 = 45167992705130703LLU;
	volatile uint64_t t28 = 160LLU;

	t28 = (x189%(x190%(x191&x192)));

	if (t28 != 12LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x197 = UINT32_MAX;
	int64_t x198 = INT64_MIN;
	static uint16_t x199 = UINT16_MAX;
	uint64_t x200 = UINT64_MAX;

	t29 = (x197%(x198%(x199&x200)));

	if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x201 = UINT16_MAX;
	static int64_t x202 = INT64_MAX;
	int32_t x203 = -138;
	static uint32_t x204 = UINT32_MAX;
	static volatile int64_t t30 = -16005352598721LL;

	t30 = (x201%(x202%(x203&x204)));

	if (t30 != 8409LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x209 = -1;
	uint64_t x210 = 2081933849394572961LLU;
	volatile uint8_t x211 = 63U;
	volatile int32_t x212 = -1;
	static volatile uint64_t t31 = 8104695LLU;

	t31 = (x209%(x210%(x211&x212)));

	if (t31 != 15LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x214 = UINT16_MAX;
	int32_t x215 = -52362;
	uint64_t x216 = 320080664LLU;
	static volatile uint64_t t32 = 193582827073794LLU;

	t32 = (x213%(x214%(x215&x216)));

	if (t32 != 577LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x218 = -1;
	uint64_t x219 = 51968676LLU;
	static int8_t x220 = 5;
	volatile uint64_t t33 = 337163014LLU;

	t33 = (x217%(x218%(x219&x220)));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x226 = -1;
	static volatile int32_t t34 = 861;

	t34 = (x225%(x226%(x227&x228)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x229 = UINT16_MAX;
	uint32_t x231 = 32487761U;
	int16_t x232 = -1;
	volatile uint32_t t35 = 868057185U;

	t35 = (x229%(x230%(x231&x232)));

	if (t35 != 200U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x245 = 0;
	static int8_t x246 = 4;
	int32_t x247 = INT32_MAX;
	uint64_t x248 = 1026230408481LLU;
	static uint64_t t36 = 3355616883LLU;

	t36 = (x245%(x246%(x247&x248)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x254 = 1;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t37 = -188527;

	t37 = (x253%(x254%(x255&x256)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x257 = INT64_MAX;
	int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	static volatile int64_t t38 = 10551384LL;

	t38 = (x257%(x258%(x259&x260)));

	if (t38 != 439386224065399LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x261 = INT64_MAX;
	volatile int32_t x262 = INT32_MIN;
	uint16_t x263 = 3368U;
	static uint32_t x264 = UINT32_MAX;
	static volatile int64_t t39 = -297075324982LL;

	t39 = (x261%(x262%(x263&x264)));

	if (t39 != 2943LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x266 = INT32_MIN;
	static volatile int16_t x267 = -1;
	int64_t x268 = 53376888913381LL;
	volatile int64_t t40 = -4121549468940LL;

	t40 = (x265%(x266%(x267&x268)));

	if (t40 != 103LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x278 = 3U;
	int64_t x279 = INT64_MIN;
	static volatile uint64_t x280 = UINT64_MAX;
	static volatile uint64_t t41 = 30748LLU;

	t41 = (x277%(x278%(x279&x280)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x281 = INT64_MIN;
	uint32_t x282 = 5724033U;
	int32_t x283 = INT32_MIN;
	int16_t x284 = -1;

	t42 = (x281%(x282%(x283&x284)));

	if (t42 != -3895697LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x285 = 2U;
	volatile uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MAX;
	uint64_t t43 = 7701LLU;

	t43 = (x285%(x286%(x287&x288)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x289 = INT32_MAX;
	static int32_t x290 = -1;
	volatile int16_t x291 = INT16_MAX;
	uint32_t x292 = 7866U;
	uint32_t t44 = 440285763U;

	t44 = (x289%(x290%(x291&x292)));

	if (t44 != 3277U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x294 = UINT16_MAX;
	int64_t x295 = -1LL;
	volatile int16_t x296 = INT16_MAX;
	int64_t t45 = -138LL;

	t45 = (x293%(x294%(x295&x296)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x301 = 6U;
	int64_t x302 = INT64_MIN;
	volatile uint32_t x303 = 195U;
	int32_t x304 = -1;
	volatile int64_t t46 = -6929847LL;

	t46 = (x301%(x302%(x303&x304)));

	if (t46 != 6LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x305 = 2372552U;
	int8_t x306 = 1;
	uint8_t x307 = 2U;
	static volatile int64_t x308 = -1LL;

	t47 = (x305%(x306%(x307&x308)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x309 = -2;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = 35U;
	int8_t x312 = INT8_MAX;
	volatile int64_t t48 = 91374403776624LL;

	t48 = (x309%(x310%(x311&x312)));

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x313 = INT8_MAX;
	int16_t x314 = 2046;
	int8_t x315 = INT8_MAX;
	int16_t x316 = 1294;
	static int32_t t49 = 61039907;

	t49 = (x313%(x314%(x315&x316)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x325 = 478U;
	int16_t x326 = INT16_MIN;
	uint16_t x327 = UINT16_MAX;
	volatile int64_t t50 = -7549586424538061LL;

	t50 = (x325%(x326%(x327&x328)));

	if (t50 != 478LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x329 = 0;
	volatile int32_t x330 = INT32_MIN;
	static uint8_t x331 = UINT8_MAX;
	uint8_t x332 = UINT8_MAX;
	static volatile int32_t t51 = 157553;

	t51 = (x329%(x330%(x331&x332)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x337 = INT8_MIN;
	volatile int8_t x338 = -3;
	volatile uint64_t x339 = UINT64_MAX;
	int16_t x340 = 12529;
	uint64_t t52 = 11352LLU;

	t52 = (x337%(x338%(x339&x340)));

	if (t52 != 5752LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x341 = INT64_MIN;
	uint32_t x342 = UINT32_MAX;
	int32_t x343 = 43181;
	int64_t t53 = 1150260945495069866LL;

	t53 = (x341%(x342%(x343&x344)));

	if (t53 != -684LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = -18;
	int64_t x348 = -35931262823971LL;

	t54 = (x345%(x346%(x347&x348)));

	if (t54 != -8LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x352 = INT8_MAX;

	t55 = (x349%(x350%(x351&x352)));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x354 = UINT32_MAX;
	uint8_t x355 = 110U;
	int8_t x356 = -1;
	int64_t t56 = 946292LL;

	t56 = (x353%(x354%(x355&x356)));

	if (t56 != 7LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x361 = 1U;
	int8_t x362 = 3;
	static int8_t x363 = -1;
	int64_t x364 = -5404197220305064LL;
	int64_t t57 = 4LL;

	t57 = (x361%(x362%(x363&x364)));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x365 = INT16_MIN;
	static uint8_t x366 = 47U;
	uint32_t x367 = 8771U;
	int32_t x368 = 68242;

	t58 = (x365%(x366%(x367&x368)));

	if (t58 != 33U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x374 = -1;
	volatile uint8_t x375 = UINT8_MAX;
	int64_t x376 = 99504326LL;

	t59 = (x373%(x374%(x375&x376)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x381 = 2U;
	uint64_t x382 = 34064638367092LLU;

	t60 = (x381%(x382%(x383&x384)));

	if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x385 = 49U;
	volatile uint32_t x386 = UINT32_MAX;
	volatile uint32_t x388 = 3132U;
	uint32_t t61 = 1134825458U;

	t61 = (x385%(x386%(x387&x388)));

	if (t61 != 49U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x389 = 3U;
	uint32_t x390 = UINT32_MAX;
	static int8_t x391 = INT8_MAX;
	int32_t x392 = 23517386;
	volatile uint32_t t62 = 15U;

	t62 = (x389%(x390%(x391&x392)));

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x397 = INT32_MAX;
	int16_t x398 = -50;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 202142415U;
	volatile uint32_t t63 = 169071U;

	t63 = (x397%(x398%(x399&x400)));

	if (t63 != 48399667U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x406 = -357406697403LL;
	uint32_t x408 = 16273182U;
	static volatile int64_t t64 = 46678LL;

	t64 = (x405%(x406%(x407&x408)));

	if (t64 != 13860699LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x409 = -1;
	volatile uint64_t x410 = 5919453762929792LLU;
	int16_t x411 = INT16_MIN;
	volatile int32_t x412 = INT32_MIN;
	volatile uint64_t t65 = 143LLU;

	t65 = (x409%(x410%(x411&x412)));

	if (t65 != 1726148420319743LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x413 = -20;
	int64_t x414 = -10697021440100LL;
	int16_t x415 = INT16_MIN;
	int64_t t66 = 1LL;

	t66 = (x413%(x414%(x415&x416)));

	if (t66 != -20LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x417 = 1U;
	uint8_t x418 = 20U;
	uint64_t x419 = UINT64_MAX;
	int64_t x420 = INT64_MAX;
	static uint64_t t67 = 32986843LLU;

	t67 = (x417%(x418%(x419&x420)));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x421 = INT8_MIN;
	static int32_t x423 = INT32_MIN;
	volatile int32_t x424 = -1;
	volatile int32_t t68 = -1;

	t68 = (x421%(x422%(x423&x424)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x429 = -845;
	int64_t x430 = -61LL;
	int32_t x432 = -1;
	volatile int64_t t69 = -1LL;

	t69 = (x429%(x430%(x431&x432)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x437 = -1;
	static int8_t x438 = 2;
	uint64_t x439 = 8616916269LLU;
	int32_t x440 = 1501;
	uint64_t t70 = 15645778630280LLU;

	t70 = (x437%(x438%(x439&x440)));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x441 = 2;
	static uint16_t x442 = 2247U;
	int8_t x443 = 46;
	int32_t t71 = 12;

	t71 = (x441%(x442%(x443&x444)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x445 = 8U;
	volatile uint8_t x446 = UINT8_MAX;
	int8_t x447 = INT8_MAX;
	volatile int32_t x448 = INT32_MAX;
	static int32_t t72 = 16232212;

	t72 = (x445%(x446%(x447&x448)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x449 = INT16_MIN;
	uint32_t x450 = 882269742U;
	int16_t x452 = 2387;
	static uint32_t t73 = 406530352U;

	t73 = (x449%(x450%(x451&x452)));

	if (t73 != 38U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x457 = -13247LL;
	uint32_t x458 = 234U;
	uint16_t x460 = 805U;

	t74 = (x457%(x458%(x459&x460)));

	if (t74 != -143LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x462 = INT8_MIN;
	uint64_t t75 = 457380972671260555LLU;

	t75 = (x461%(x462%(x463&x464)));

	if (t75 != 14635775LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x465 = INT16_MIN;
	int64_t x466 = -1LL;
	int32_t x467 = -1;
	int64_t x468 = INT64_MIN;
	static volatile int64_t t76 = 31LL;

	t76 = (x465%(x466%(x467&x468)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x471 = INT32_MIN;
	int32_t x472 = INT32_MIN;
	uint32_t t77 = 1U;

	t77 = (x469%(x470%(x471&x472)));

	if (t77 != 135U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x474 = 2408294U;
	uint16_t x475 = 20U;
	volatile uint16_t x476 = 524U;
	uint32_t t78 = 20U;

	t78 = (x473%(x474%(x475&x476)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x478 = UINT8_MAX;
	int32_t x479 = -1;
	static uint32_t x480 = 3844U;

	t79 = (x477%(x478%(x479&x480)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x481 = 1;
	volatile int16_t x483 = INT16_MAX;
	uint32_t t80 = 101U;

	t80 = (x481%(x482%(x483&x484)));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x493 = 4005U;
	int16_t x494 = -48;
	uint8_t x496 = UINT8_MAX;

	t81 = (x493%(x494%(x495&x496)));

	if (t81 != 21LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x502 = 1U;
	int32_t x503 = -98463;
	static int64_t x504 = -5067059081LL;
	uint64_t t82 = 21285LLU;

	t82 = (x501%(x502%(x503&x504)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x505 = -1;
	static uint16_t x506 = 7473U;
	int64_t x507 = 80853330277910LL;
	uint64_t x508 = UINT64_MAX;
	uint64_t t83 = 27587225LLU;

	t83 = (x505%(x506%(x507&x508)));

	if (t83 != 4254LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x509 = UINT8_MAX;
	int16_t x510 = -1;
	static int16_t x511 = INT16_MAX;
	uint8_t x512 = 15U;
	int32_t t84 = 11273;

	t84 = (x509%(x510%(x511&x512)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x519 = 6960372240009983875LLU;

	t85 = (x517%(x518%(x519&x520)));

	if (t85 != 342745698951216147LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x521 = INT32_MAX;
	static int8_t x522 = 2;
	volatile int8_t x523 = -56;
	volatile uint16_t x524 = 119U;
	int32_t t86 = 7699;

	t86 = (x521%(x522%(x523&x524)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x533 = 187866856LL;
	volatile int32_t x534 = INT32_MIN;
	int32_t x535 = -1;
	int16_t x536 = INT16_MAX;
	volatile int64_t t87 = -99497269213573LL;

	t87 = (x533%(x534%(x535&x536)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x538 = INT64_MAX;
	static int32_t x540 = 23;
	static volatile int64_t t88 = 10845478946247400LL;

	t88 = (x537%(x538%(x539&x540)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x541 = 211U;
	uint64_t x544 = 808015LLU;
	uint64_t t89 = 613139LLU;

	t89 = (x541%(x542%(x543&x544)));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x545 = 8179U;
	uint16_t x546 = UINT16_MAX;
	uint64_t x547 = 98283715LLU;
	int64_t x548 = 1863010LL;
	uint64_t t90 = 499LLU;

	t90 = (x545%(x546%(x547&x548)));

	if (t90 != 8179LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x550 = -1LL;
	static int32_t x551 = 1810091;
	int8_t x552 = -1;
	static int64_t t91 = -129358381504691LL;

	t91 = (x549%(x550%(x551&x552)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x553 = 179U;
	int32_t x554 = INT32_MAX;
	int16_t x556 = -1;

	t92 = (x553%(x554%(x555&x556)));

	if (t92 != 24LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x557 = -1;
	uint64_t x558 = UINT64_MAX;
	static uint64_t x559 = 73045542616LLU;
	uint32_t x560 = 222896088U;
	volatile uint64_t t93 = 3712LLU;

	t93 = (x557%(x558%(x559&x560)));

	if (t93 != 9942480LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x566 = INT64_MIN;
	volatile int64_t x567 = 15495283836018LL;
	static int32_t x568 = -152591576;
	int64_t t94 = 2565792926338749962LL;

	t94 = (x565%(x566%(x567&x568)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x573 = -1LL;
	int64_t x574 = INT64_MIN;
	uint8_t x575 = UINT8_MAX;
	static volatile int32_t x576 = INT32_MAX;
	static volatile int64_t t95 = 12LL;

	t95 = (x573%(x574%(x575&x576)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x581 = 1;
	uint8_t x582 = 124U;
	int64_t x583 = 126895644LL;
	volatile int64_t x584 = -646680489460LL;
	volatile int64_t t96 = -2212162LL;

	t96 = (x581%(x582%(x583&x584)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x585 = 1;
	int8_t x586 = INT8_MAX;
	int16_t x587 = -1;

	t97 = (x585%(x586%(x587&x588)));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x589 = 3U;
	volatile int8_t x590 = INT8_MIN;
	int64_t x591 = INT64_MAX;
	uint64_t x592 = 206430295177832LLU;
	uint64_t t98 = 1115LLU;

	t98 = (x589%(x590%(x591&x592)));

	if (t98 != 3LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x593 = INT32_MAX;
	int8_t x594 = -1;
	int16_t x595 = 2314;
	int16_t x596 = INT16_MAX;
	volatile int32_t t99 = -37;

	t99 = (x593%(x594%(x595&x596)));

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

