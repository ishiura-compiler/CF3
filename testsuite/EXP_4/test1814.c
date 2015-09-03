#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 0U;
volatile int32_t t2 = -1;
volatile int8_t x28 = INT8_MIN;
int16_t x48 = INT16_MIN;
int64_t x52 = -16LL;
int8_t x55 = INT8_MIN;
int32_t x58 = INT32_MIN;
static uint32_t x83 = 23146293U;
volatile int32_t t12 = -882215;
int8_t x101 = 2;
int32_t x102 = -1;
int32_t t13 = 620;
int64_t x119 = 132054876453065LL;
int16_t x121 = 1;
int32_t x122 = -1;
static uint64_t x123 = UINT64_MAX;
uint16_t x131 = 25U;
volatile int32_t t16 = -56;
uint16_t x133 = 14U;
uint8_t x136 = 0U;
static int8_t x150 = INT8_MIN;
volatile int32_t t18 = -7359;
uint16_t x156 = 1320U;
volatile uint8_t x158 = UINT8_MAX;
int64_t x179 = 7LL;
int8_t x192 = -1;
int16_t x197 = INT16_MAX;
static uint8_t x202 = 2U;
volatile uint32_t t26 = UINT32_MAX;
static int64_t x206 = INT64_MIN;
static volatile int32_t t27 = 0;
static int16_t x215 = INT16_MIN;
uint8_t x223 = 38U;
int8_t x263 = INT8_MIN;
uint16_t x264 = 1U;
int32_t x274 = 155128;
int64_t x287 = INT64_MIN;
static int64_t x302 = INT64_MIN;
int8_t x304 = INT8_MAX;
static int64_t x313 = 20LL;
int32_t x317 = INT32_MAX;
uint16_t x319 = UINT16_MAX;
static volatile int32_t t41 = 842459818;
volatile int16_t x323 = -1006;
int32_t x343 = INT32_MAX;
int16_t x345 = INT16_MAX;
volatile uint32_t x351 = 28789933U;
int64_t x356 = INT64_MIN;
uint64_t x358 = 10LLU;
static volatile int8_t x359 = INT8_MIN;
int32_t t50 = 14;
uint64_t x385 = 791LLU;
int32_t x401 = 319;
volatile int32_t t55 = -75618245;
int32_t t57 = INT32_MAX;
volatile int64_t t58 = -13945888LL;
int8_t x427 = INT8_MIN;
int16_t x428 = INT16_MIN;
volatile uint8_t x444 = 10U;
static volatile int64_t t62 = INT64_MAX;
uint8_t x446 = 15U;
volatile int8_t x447 = INT8_MIN;
uint8_t x452 = 6U;
static uint16_t x473 = 89U;
static volatile int32_t x476 = -197386;
static uint64_t x481 = 4728482642005LLU;
int8_t x493 = INT8_MAX;
int16_t x495 = 441;
static volatile int32_t t71 = 12;
static int32_t t72 = 3741309;
static volatile uint32_t x503 = 467701U;
int32_t t74 = -26298;
int64_t x517 = 252204389LL;
int16_t x518 = INT16_MIN;
uint16_t x522 = UINT16_MAX;
static volatile int32_t x523 = INT32_MAX;
volatile int64_t t78 = -2LL;
uint32_t x529 = UINT32_MAX;
uint16_t x532 = UINT16_MAX;
volatile uint32_t t79 = UINT32_MAX;
volatile uint32_t x537 = 219473842U;
uint32_t x544 = UINT32_MAX;
int16_t x546 = 166;
int64_t x561 = INT64_MAX;
uint8_t x563 = 4U;
volatile uint16_t x577 = UINT16_MAX;
volatile int8_t x578 = 1;
uint32_t x585 = 514U;
static uint8_t x589 = 28U;
uint32_t x599 = UINT32_MAX;
int16_t x604 = INT16_MAX;
int64_t x608 = INT64_MIN;
static uint16_t x612 = 16U;
uint64_t x621 = 1250LLU;
static volatile uint64_t t93 = 36121747314461337LLU;
int64_t x632 = -1LL;
static int64_t t94 = 34601103974633LL;
static volatile int32_t t95 = 461837;
static int32_t t98 = 0;
volatile int32_t t99 = 1;


void f0(void) {
	volatile uint32_t x1 = 24344U;
	static int32_t x2 = 1609;
	int8_t x3 = INT8_MIN;
	int16_t x4 = -1;
	volatile uint32_t t0 = 160219498U;

	t0 = (x1>>(x2<=(x3&x4)));

	if (t0 != 24344U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	volatile int8_t x6 = -1;
	static int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 28;

	t1 = (x5>>(x6<=(x7&x8)));

	if (t1 != 63) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = 26;
	int16_t x22 = 1;
	int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;

	t2 = (x21>>(x22<=(x23&x24)));

	if (t2 != 26) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = INT16_MAX;
	int8_t x26 = -1;
	int64_t x27 = INT64_MIN;
	volatile int32_t t3 = 4;

	t3 = (x25>>(x26<=(x27&x28)));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x33 = 58LLU;
	int8_t x34 = INT8_MIN;
	static int16_t x35 = -1;
	int64_t x36 = INT64_MIN;
	volatile uint64_t t4 = 0LLU;

	t4 = (x33>>(x34<=(x35&x36)));

	if (t4 != 58LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x41 = 7U;
	volatile int8_t x42 = 31;
	int8_t x43 = -1;
	int8_t x44 = -1;
	int32_t t5 = -39846;

	t5 = (x41>>(x42<=(x43&x44)));

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = 469476;
	static uint8_t x46 = UINT8_MAX;
	static int32_t x47 = INT32_MIN;
	int32_t t6 = -15234;

	t6 = (x45>>(x46<=(x47&x48)));

	if (t6 != 469476) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 46U;
	int32_t x50 = -1;
	int32_t x51 = INT32_MIN;
	volatile int32_t t7 = 234259179;

	t7 = (x49>>(x50<=(x51&x52)));

	if (t7 != 46) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 1003096136U;
	int32_t x56 = 84;
	volatile int32_t t8 = -58527216;

	t8 = (x53>>(x54<=(x55&x56)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = INT32_MAX;
	int64_t x59 = INT64_MIN;
	volatile int16_t x60 = -19;
	int32_t t9 = INT32_MAX;

	t9 = (x57>>(x58<=(x59&x60)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x69 = 10682;
	int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MAX;
	volatile uint32_t x72 = 233114U;
	volatile int32_t t10 = -2;

	t10 = (x69>>(x70<=(x71&x72)));

	if (t10 != 5341) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x77 = INT64_MAX;
	int16_t x78 = -336;
	uint8_t x79 = UINT8_MAX;
	uint16_t x80 = 470U;
	volatile int64_t t11 = -85514650533456598LL;

	t11 = (x77>>(x78<=(x79&x80)));

	if (t11 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x81 = UINT8_MAX;
	static int16_t x82 = 255;
	uint64_t x84 = 3049732524350742071LLU;

	t12 = (x81>>(x82<=(x83&x84)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x103 = -1;
	int16_t x104 = 1;

	t13 = (x101>>(x102<=(x103&x104)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x117 = 12902285U;
	uint8_t x118 = UINT8_MAX;
	int32_t x120 = -1;
	volatile uint32_t t14 = 137U;

	t14 = (x117>>(x118<=(x119&x120)));

	if (t14 != 6451142U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x124 = INT16_MIN;
	static int32_t t15 = 61863;

	t15 = (x121>>(x122<=(x123&x124)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x129 = 8U;
	static volatile uint16_t x130 = UINT16_MAX;
	int8_t x132 = -1;

	t16 = (x129>>(x130<=(x131&x132)));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x134 = INT64_MIN;
	int64_t x135 = 3466684LL;
	int32_t t17 = -4046;

	t17 = (x133>>(x134<=(x135&x136)));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x149 = INT32_MAX;
	int8_t x151 = -1;
	uint16_t x152 = 30473U;

	t18 = (x149>>(x150<=(x151&x152)));

	if (t18 != 1073741823) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x153 = INT16_MAX;
	int64_t x154 = INT64_MAX;
	volatile int64_t x155 = -1LL;
	volatile int32_t t19 = 1609;

	t19 = (x153>>(x154<=(x155&x156)));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x157 = 0;
	static volatile uint16_t x159 = 19078U;
	static int16_t x160 = 141;
	volatile int32_t t20 = 9252;

	t20 = (x157>>(x158<=(x159&x160)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x169 = 0U;
	int32_t x170 = INT32_MAX;
	volatile int8_t x171 = -19;
	int64_t x172 = INT64_MIN;
	volatile int32_t t21 = 1758731;

	t21 = (x169>>(x170<=(x171&x172)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x177 = 893651023;
	int8_t x178 = INT8_MIN;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t22 = 4;

	t22 = (x177>>(x178<=(x179&x180)));

	if (t22 != 893651023) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x181 = INT64_MAX;
	int16_t x182 = -16;
	uint32_t x183 = 63583U;
	int32_t x184 = 168526;
	int64_t t23 = INT64_MAX;

	t23 = (x181>>(x182<=(x183&x184)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x189 = 1551;
	uint64_t x190 = 1102919570492LLU;
	volatile int64_t x191 = -15LL;
	volatile int32_t t24 = -2605;

	t24 = (x189>>(x190<=(x191&x192)));

	if (t24 != 775) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x198 = -1;
	int32_t x199 = 583424138;
	uint16_t x200 = UINT16_MAX;
	static volatile int32_t t25 = -10741;

	t25 = (x197>>(x198<=(x199&x200)));

	if (t25 != 16383) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x201 = UINT32_MAX;
	int64_t x203 = INT64_MIN;
	int64_t x204 = -1LL;

	t26 = (x201>>(x202<=(x203&x204)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x205 = 100;
	int32_t x207 = 227123;
	static uint16_t x208 = UINT16_MAX;

	t27 = (x205>>(x206<=(x207&x208)));

	if (t27 != 50) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x209 = INT8_MAX;
	static volatile uint16_t x210 = 4U;
	uint16_t x211 = UINT16_MAX;
	uint32_t x212 = UINT32_MAX;
	int32_t t28 = -79498;

	t28 = (x209>>(x210<=(x211&x212)));

	if (t28 != 63) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x213 = 1U;
	uint8_t x214 = 1U;
	volatile uint64_t x216 = UINT64_MAX;
	int32_t t29 = 1131075;

	t29 = (x213>>(x214<=(x215&x216)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x221 = UINT16_MAX;
	uint8_t x222 = 62U;
	int8_t x224 = INT8_MIN;
	volatile int32_t t30 = 74223;

	t30 = (x221>>(x222<=(x223&x224)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x245 = INT16_MAX;
	int8_t x246 = -5;
	static int16_t x247 = -1;
	uint32_t x248 = 90U;
	volatile int32_t t31 = -4;

	t31 = (x245>>(x246<=(x247&x248)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x261 = INT64_MAX;
	static int64_t x262 = INT64_MIN;
	int64_t t32 = -28LL;

	t32 = (x261>>(x262<=(x263&x264)));

	if (t32 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x273 = 35U;
	uint32_t x275 = UINT32_MAX;
	uint64_t x276 = 511LLU;
	int32_t t33 = -55590577;

	t33 = (x273>>(x274<=(x275&x276)));

	if (t33 != 35) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = -1;
	uint8_t x288 = 2U;
	volatile int32_t t34 = 0;

	t34 = (x285>>(x286<=(x287&x288)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x289 = INT64_MAX;
	int64_t x290 = INT64_MIN;
	volatile int8_t x291 = INT8_MIN;
	static uint32_t x292 = UINT32_MAX;
	int64_t t35 = -66LL;

	t35 = (x289>>(x290<=(x291&x292)));

	if (t35 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x293 = 7007422U;
	static volatile int64_t x294 = -33389732LL;
	int16_t x295 = INT16_MAX;
	uint8_t x296 = 6U;
	volatile uint32_t t36 = 3190390U;

	t36 = (x293>>(x294<=(x295&x296)));

	if (t36 != 3503711U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x303 = INT8_MIN;
	volatile int32_t t37 = 1493;

	t37 = (x301>>(x302<=(x303&x304)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x305 = 14559;
	uint32_t x306 = UINT32_MAX;
	int32_t x307 = 0;
	int16_t x308 = INT16_MIN;
	int32_t t38 = -16961;

	t38 = (x305>>(x306<=(x307&x308)));

	if (t38 != 14559) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x309 = 85783U;
	static uint64_t x310 = UINT64_MAX;
	static volatile int16_t x311 = INT16_MIN;
	int64_t x312 = 50343092595952LL;
	static uint32_t t39 = 15340097U;

	t39 = (x309>>(x310<=(x311&x312)));

	if (t39 != 85783U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x314 = INT16_MAX;
	static uint32_t x315 = UINT32_MAX;
	static int32_t x316 = INT32_MIN;
	int64_t t40 = 20446054786501323LL;

	t40 = (x313>>(x314<=(x315&x316)));

	if (t40 != 10LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x318 = 38U;
	volatile uint8_t x320 = 40U;

	t41 = (x317>>(x318<=(x319&x320)));

	if (t41 != 1073741823) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x321 = 91708307365LLU;
	int32_t x322 = 26;
	int32_t x324 = 1;
	volatile uint64_t t42 = 5913860LLU;

	t42 = (x321>>(x322<=(x323&x324)));

	if (t42 != 91708307365LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x333 = 20;
	volatile int16_t x334 = -10703;
	uint32_t x335 = 91U;
	int8_t x336 = INT8_MIN;
	int32_t t43 = 1996;

	t43 = (x333>>(x334<=(x335&x336)));

	if (t43 != 20) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x337 = 20235264094189LL;
	int16_t x338 = INT16_MIN;
	static volatile uint16_t x339 = 80U;
	int32_t x340 = 225;
	static volatile int64_t t44 = 509898LL;

	t44 = (x337>>(x338<=(x339&x340)));

	if (t44 != 10117632047094LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x341 = INT64_MAX;
	uint64_t x342 = 45596832415692958LLU;
	int8_t x344 = INT8_MAX;
	static int64_t t45 = INT64_MAX;

	t45 = (x341>>(x342<=(x343&x344)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x346 = -19;
	uint64_t x347 = UINT64_MAX;
	static int32_t x348 = 1;
	static volatile int32_t t46 = 1;

	t46 = (x345>>(x346<=(x347&x348)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x349 = INT64_MAX;
	static int64_t x350 = INT64_MAX;
	static int32_t x352 = -125342598;
	volatile int64_t t47 = INT64_MAX;

	t47 = (x349>>(x350<=(x351&x352)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x353 = INT32_MAX;
	static uint32_t x354 = UINT32_MAX;
	uint16_t x355 = UINT16_MAX;
	volatile int32_t t48 = INT32_MAX;

	t48 = (x353>>(x354<=(x355&x356)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x357 = INT8_MAX;
	uint64_t x360 = 18LLU;
	volatile int32_t t49 = 9;

	t49 = (x357>>(x358<=(x359&x360)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x361 = 1;
	uint64_t x362 = 4531728LLU;
	static int8_t x363 = INT8_MAX;
	static int32_t x364 = -1;

	t50 = (x361>>(x362<=(x363&x364)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x377 = 979U;
	volatile uint16_t x378 = 10765U;
	static int16_t x379 = INT16_MIN;
	volatile uint32_t x380 = 19519U;
	static int32_t t51 = 3;

	t51 = (x377>>(x378<=(x379&x380)));

	if (t51 != 979) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x386 = 33674;
	int16_t x387 = 2;
	int16_t x388 = -1;
	volatile uint64_t t52 = 46890265928478LLU;

	t52 = (x385>>(x386<=(x387&x388)));

	if (t52 != 791LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x389 = INT64_MAX;
	uint32_t x390 = 2955013U;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MIN;
	volatile int64_t t53 = INT64_MAX;

	t53 = (x389>>(x390<=(x391&x392)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x397 = 59295444U;
	volatile uint64_t x398 = 6531453220LLU;
	uint8_t x399 = UINT8_MAX;
	uint8_t x400 = 4U;
	uint32_t t54 = 411674030U;

	t54 = (x397>>(x398<=(x399&x400)));

	if (t54 != 59295444U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x402 = 3;
	volatile int16_t x403 = 1;
	int64_t x404 = 68550912437217LL;

	t55 = (x401>>(x402<=(x403&x404)));

	if (t55 != 319) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x405 = UINT16_MAX;
	static volatile int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	int64_t x408 = -1LL;
	volatile int32_t t56 = -935343;

	t56 = (x405>>(x406<=(x407&x408)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x409 = INT32_MAX;
	int8_t x410 = 2;
	int8_t x411 = -1;
	volatile int16_t x412 = INT16_MIN;

	t57 = (x409>>(x410<=(x411&x412)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x413 = 0LL;
	int32_t x414 = -239225998;
	int64_t x415 = INT64_MAX;
	int8_t x416 = -5;

	t58 = (x413>>(x414<=(x415&x416)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x421 = UINT32_MAX;
	int8_t x422 = INT8_MAX;
	volatile int32_t x423 = INT32_MAX;
	static int8_t x424 = -1;
	static uint32_t t59 = 8U;

	t59 = (x421>>(x422<=(x423&x424)));

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x425 = 1044405247599962LL;
	uint32_t x426 = 3037U;
	volatile int64_t t60 = 54664LL;

	t60 = (x425>>(x426<=(x427&x428)));

	if (t60 != 522202623799981LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x429 = INT64_MAX;
	int64_t x430 = INT64_MAX;
	int64_t x431 = INT64_MIN;
	uint32_t x432 = 55061602U;
	int64_t t61 = INT64_MAX;

	t61 = (x429>>(x430<=(x431&x432)));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x441 = INT64_MAX;
	int32_t x442 = INT32_MAX;
	static uint32_t x443 = 43U;

	t62 = (x441>>(x442<=(x443&x444)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x445 = 68849306109400LLU;
	uint64_t x448 = UINT64_MAX;
	volatile uint64_t t63 = 11571LLU;

	t63 = (x445>>(x446<=(x447&x448)));

	if (t63 != 34424653054700LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x449 = UINT8_MAX;
	static uint16_t x450 = 16042U;
	int32_t x451 = INT32_MIN;
	int32_t t64 = -2254715;

	t64 = (x449>>(x450<=(x451&x452)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x453 = 1;
	uint64_t x454 = 460595092LLU;
	volatile int64_t x455 = INT64_MAX;
	static int16_t x456 = -1;
	volatile int32_t t65 = 23;

	t65 = (x453>>(x454<=(x455&x456)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x465 = 830;
	volatile int32_t x466 = -471;
	volatile uint64_t x467 = 35LLU;
	int32_t x468 = INT32_MIN;
	int32_t t66 = 0;

	t66 = (x465>>(x466<=(x467&x468)));

	if (t66 != 830) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x474 = -26782552647LL;
	int8_t x475 = -1;
	volatile int32_t t67 = 7;

	t67 = (x473>>(x474<=(x475&x476)));

	if (t67 != 44) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x482 = 24691723LLU;
	uint64_t x483 = 20851468LLU;
	int8_t x484 = INT8_MIN;
	volatile uint64_t t68 = 53866970455267395LLU;

	t68 = (x481>>(x482<=(x483&x484)));

	if (t68 != 4728482642005LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x485 = UINT16_MAX;
	uint64_t x486 = 507249LLU;
	static volatile uint8_t x487 = 13U;
	uint16_t x488 = 4590U;
	volatile int32_t t69 = 7399;

	t69 = (x485>>(x486<=(x487&x488)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x489 = INT16_MAX;
	int16_t x490 = INT16_MIN;
	volatile int64_t x491 = 25472LL;
	static volatile int16_t x492 = INT16_MIN;
	int32_t t70 = 3;

	t70 = (x489>>(x490<=(x491&x492)));

	if (t70 != 16383) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x494 = 105U;
	int16_t x496 = -1;

	t71 = (x493>>(x494<=(x495&x496)));

	if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x497 = INT16_MAX;
	static uint8_t x498 = 9U;
	volatile uint8_t x499 = 13U;
	uint8_t x500 = 29U;

	t72 = (x497>>(x498<=(x499&x500)));

	if (t72 != 16383) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x501 = UINT16_MAX;
	volatile uint64_t x502 = 66715442LLU;
	int16_t x504 = -647;
	volatile int32_t t73 = -124055664;

	t73 = (x501>>(x502<=(x503&x504)));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x505 = UINT8_MAX;
	int8_t x506 = -1;
	volatile uint8_t x507 = 8U;
	static int16_t x508 = INT16_MAX;

	t74 = (x505>>(x506<=(x507&x508)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x513 = UINT32_MAX;
	volatile int32_t x514 = -6433;
	int16_t x515 = -7;
	static int32_t x516 = INT32_MAX;
	uint32_t t75 = 49291291U;

	t75 = (x513>>(x514<=(x515&x516)));

	if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x519 = 205744344U;
	int32_t x520 = INT32_MIN;
	int64_t t76 = 3082650LL;

	t76 = (x517>>(x518<=(x519&x520)));

	if (t76 != 252204389LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x521 = UINT64_MAX;
	static int32_t x524 = -21221;
	volatile uint64_t t77 = 87218LLU;

	t77 = (x521>>(x522<=(x523&x524)));

	if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x525 = 355LL;
	int32_t x526 = 438520;
	static int64_t x527 = -18601LL;
	uint8_t x528 = UINT8_MAX;

	t78 = (x525>>(x526<=(x527&x528)));

	if (t78 != 355LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x530 = UINT16_MAX;
	int32_t x531 = 1;

	t79 = (x529>>(x530<=(x531&x532)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x538 = INT8_MAX;
	uint64_t x539 = UINT64_MAX;
	volatile int32_t x540 = -1;
	uint32_t t80 = 145383U;

	t80 = (x537>>(x538<=(x539&x540)));

	if (t80 != 109736921U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x541 = UINT64_MAX;
	int32_t x542 = INT32_MIN;
	uint16_t x543 = 15470U;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x541>>(x542<=(x543&x544)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x545 = 990;
	volatile uint32_t x547 = 13520U;
	int16_t x548 = -909;
	int32_t t82 = -2919;

	t82 = (x545>>(x546<=(x547&x548)));

	if (t82 != 495) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x562 = INT64_MAX;
	static uint16_t x564 = 32U;
	int64_t t83 = INT64_MAX;

	t83 = (x561>>(x562<=(x563&x564)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x565 = 960;
	static volatile int32_t x566 = 434973793;
	int8_t x567 = -1;
	static int16_t x568 = -1;
	int32_t t84 = 46;

	t84 = (x565>>(x566<=(x567&x568)));

	if (t84 != 960) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x579 = UINT64_MAX;
	static int64_t x580 = -124373LL;
	volatile int32_t t85 = 0;

	t85 = (x577>>(x578<=(x579&x580)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x586 = -1;
	int32_t x587 = -17;
	volatile int64_t x588 = INT64_MIN;
	volatile uint32_t t86 = 7U;

	t86 = (x585>>(x586<=(x587&x588)));

	if (t86 != 514U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x590 = -1;
	int16_t x591 = 28;
	uint64_t x592 = UINT64_MAX;
	int32_t t87 = -2;

	t87 = (x589>>(x590<=(x591&x592)));

	if (t87 != 28) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x597 = 810;
	int32_t x598 = INT32_MIN;
	int16_t x600 = INT16_MIN;
	volatile int32_t t88 = -1;

	t88 = (x597>>(x598<=(x599&x600)));

	if (t88 != 405) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x601 = 1;
	uint8_t x602 = UINT8_MAX;
	volatile int32_t x603 = INT32_MIN;
	static int32_t t89 = 136436;

	t89 = (x601>>(x602<=(x603&x604)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x605 = UINT64_MAX;
	int32_t x606 = INT32_MIN;
	uint64_t x607 = UINT64_MAX;
	static volatile uint64_t t90 = UINT64_MAX;

	t90 = (x605>>(x606<=(x607&x608)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x609 = 1767LLU;
	uint64_t x610 = 129049056414445LLU;
	static int64_t x611 = INT64_MIN;
	static uint64_t t91 = 5866674488359LLU;

	t91 = (x609>>(x610<=(x611&x612)));

	if (t91 != 1767LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x617 = UINT16_MAX;
	uint32_t x618 = 113456U;
	volatile uint8_t x619 = UINT8_MAX;
	volatile int64_t x620 = INT64_MIN;
	volatile int32_t t92 = -5705;

	t92 = (x617>>(x618<=(x619&x620)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x622 = 4909455943956884562LLU;
	int32_t x623 = -1;
	int16_t x624 = 52;

	t93 = (x621>>(x622<=(x623&x624)));

	if (t93 != 1250LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x629 = 162921181762357LL;
	int8_t x630 = -1;
	int64_t x631 = -3683LL;

	t94 = (x629>>(x630<=(x631&x632)));

	if (t94 != 162921181762357LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x633 = 2220;
	int64_t x634 = -3219449937LL;
	uint8_t x635 = 8U;
	int8_t x636 = 2;

	t95 = (x633>>(x634<=(x635&x636)));

	if (t95 != 1110) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x637 = INT64_MAX;
	static uint64_t x638 = 7935628LLU;
	uint16_t x639 = 252U;
	int8_t x640 = INT8_MAX;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x637>>(x638<=(x639&x640)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x645 = UINT8_MAX;
	int8_t x646 = INT8_MIN;
	int64_t x647 = 13206095136LL;
	volatile int16_t x648 = INT16_MIN;
	int32_t t97 = 320614;

	t97 = (x645>>(x646<=(x647&x648)));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x649 = 3U;
	int16_t x650 = -1;
	int8_t x651 = 4;
	volatile uint64_t x652 = UINT64_MAX;

	t98 = (x649>>(x650<=(x651&x652)));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x657 = 12;
	int64_t x658 = -1LL;
	volatile int64_t x659 = 3069583431LL;
	int64_t x660 = INT64_MIN;

	t99 = (x657>>(x658<=(x659&x660)));

	if (t99 != 6) { NG(); } else { ; }
	
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

