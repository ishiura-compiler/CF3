#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 3U;
static int16_t x10 = INT16_MAX;
volatile int64_t x11 = INT64_MAX;
int32_t t2 = 436584977;
uint16_t x18 = 32577U;
int32_t t4 = 1169500;
volatile uint8_t x34 = 99U;
int16_t x37 = INT16_MIN;
volatile int32_t t7 = 0;
int16_t x52 = -1;
int32_t x54 = INT32_MAX;
int16_t x57 = 121;
int64_t x59 = -1LL;
uint32_t x61 = 998026029U;
int64_t x63 = INT64_MIN;
volatile int32_t t11 = -5095;
int64_t x73 = 447891322865919LL;
volatile int32_t t12 = 190919;
static int32_t x120 = 28452;
uint8_t x123 = 0U;
uint8_t x125 = 0U;
int8_t x127 = 0;
int64_t x128 = 16462402882LL;
volatile int8_t x133 = 1;
uint16_t x147 = UINT16_MAX;
int16_t x167 = 3390;
int16_t x175 = 31;
int16_t x178 = 1;
int8_t x179 = 39;
static uint32_t x198 = UINT32_MAX;
int16_t x200 = INT16_MIN;
int8_t x227 = INT8_MIN;
volatile int32_t t29 = 1;
static int64_t x232 = -2696613981893854LL;
volatile int16_t x242 = 3;
static uint64_t x244 = 7845008210068645LLU;
int32_t x245 = -1;
volatile int16_t x254 = 6157;
static int16_t x287 = INT16_MIN;
int32_t x290 = 1;
int32_t t36 = -112732;
volatile uint32_t x313 = 420677U;
uint64_t x319 = UINT64_MAX;
static uint64_t x326 = UINT64_MAX;
uint16_t x328 = UINT16_MAX;
volatile int32_t t43 = 136;
int16_t x347 = 957;
volatile int32_t x348 = 248666634;
static volatile int64_t x355 = -1LL;
uint8_t x361 = 20U;
uint16_t x375 = 17U;
int8_t x385 = 1;
static uint32_t x386 = UINT32_MAX;
uint64_t x387 = 2577974851377LLU;
static int16_t x400 = 2;
volatile int32_t t50 = -1892228;
int8_t x405 = INT8_MAX;
uint16_t x409 = 1U;
int16_t x454 = 10776;
volatile int32_t t58 = 645;
static int64_t x514 = 53088LL;
int64_t x515 = INT64_MAX;
int32_t t63 = -11;
int8_t x529 = INT8_MAX;
volatile int32_t t64 = -5252;
static int64_t x540 = INT64_MIN;
int32_t t66 = 1644;
static int64_t x561 = INT64_MAX;
uint32_t x570 = 95U;
static uint16_t x572 = 291U;
volatile uint64_t x577 = 116230274016348LLU;
int16_t x580 = INT16_MIN;
int16_t x616 = 166;
int32_t t71 = 31;
int16_t x625 = 0;
static volatile int8_t x645 = INT8_MAX;
static int64_t x656 = INT64_MIN;
uint64_t x659 = 22573439LLU;
static int16_t x667 = -1;
int32_t t80 = -4270329;
uint64_t x674 = 143078631469632LLU;
int16_t x675 = 3;
static int32_t t81 = 119;
static volatile int8_t x677 = 3;
static volatile int8_t x679 = INT8_MAX;
int16_t x687 = -3;
int32_t x688 = 11718732;
volatile int8_t x698 = 5;
int32_t t86 = 9041080;
int8_t x718 = 0;
uint32_t x719 = 27134550U;
volatile uint8_t x720 = 116U;
static volatile int32_t t90 = 7820395;
int32_t t94 = 12;
static int32_t x757 = -1346119;
static uint64_t x772 = 13542520117LLU;
volatile int16_t x777 = INT16_MIN;
uint8_t x786 = UINT8_MAX;
static uint32_t x787 = 15049U;


void f0(void) {
	uint8_t x1 = 12U;
	int32_t x3 = -15860726;
	int16_t x4 = 3040;
	int32_t t0 = 0;

	t0 = (x1==(x2<<(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int8_t x6 = 1;
	uint8_t x7 = 68U;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = -10644;

	t1 = (x5==(x6<<(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -192041312972292819LL;
	int16_t x12 = INT16_MAX;

	t2 = (x9==(x10<<(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 3U;
	uint8_t x19 = 93U;
	uint8_t x20 = UINT8_MAX;
	int32_t t3 = 128749416;

	t3 = (x17==(x18<<(x19<x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	int32_t x22 = INT32_MAX;
	volatile int16_t x23 = INT16_MAX;
	int8_t x24 = INT8_MAX;

	t4 = (x21==(x22<<(x23<x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MAX;
	static int64_t x31 = 6964375134341717LL;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t5 = -131720;

	t5 = (x29==(x30<<(x31<x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -3323736;
	static volatile int16_t x35 = INT16_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t6 = -99535;

	t6 = (x33==(x34<<(x35<x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x38 = 1;
	volatile int32_t x39 = INT32_MAX;
	int32_t x40 = INT32_MIN;

	t7 = (x37==(x38<<(x39<x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x50 = 453712441491868224LL;
	int16_t x51 = INT16_MAX;
	int32_t t8 = 783;

	t8 = (x49==(x50<<(x51<x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = -1;
	volatile uint8_t x55 = 127U;
	int8_t x56 = INT8_MIN;
	volatile int32_t t9 = 247607;

	t9 = (x53==(x54<<(x55<x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x58 = UINT16_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t10 = -277994;

	t10 = (x57==(x58<<(x59<x60)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x62 = 3064641U;
	volatile uint64_t x64 = 7529417221407462140LLU;

	t11 = (x61==(x62<<(x63<x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x74 = INT16_MAX;
	int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MAX;

	t12 = (x73==(x74<<(x75<x76)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = -1;
	uint32_t x82 = 3627U;
	static int16_t x83 = 745;
	volatile uint32_t x84 = 122312U;
	volatile int32_t t13 = -121;

	t13 = (x81==(x82<<(x83<x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x97 = -24;
	static int64_t x98 = 1440941885301LL;
	static uint16_t x99 = 5641U;
	int32_t x100 = 26565;
	int32_t t14 = 0;

	t14 = (x97==(x98<<(x99<x100)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x101 = 2U;
	uint64_t x102 = 24166LLU;
	int8_t x103 = -1;
	int64_t x104 = 108180940650454LL;
	int32_t t15 = -39;

	t15 = (x101==(x102<<(x103<x104)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x117 = 28;
	int16_t x118 = 7615;
	int8_t x119 = INT8_MAX;
	int32_t t16 = 1559957;

	t16 = (x117==(x118<<(x119<x120)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x121 = 12U;
	volatile int16_t x122 = 7709;
	uint64_t x124 = 82LLU;
	int32_t t17 = 15;

	t17 = (x121==(x122<<(x123<x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x126 = UINT8_MAX;
	volatile int32_t t18 = -19;

	t18 = (x125==(x126<<(x127<x128)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MIN;
	static int32_t t19 = -11;

	t19 = (x133==(x134<<(x135<x136)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x137 = INT64_MAX;
	uint32_t x138 = 205343190U;
	uint16_t x139 = 1532U;
	int8_t x140 = -22;
	int32_t t20 = -2034;

	t20 = (x137==(x138<<(x139<x140)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x146 = 1915703520LLU;
	static volatile int16_t x148 = 2;
	int32_t t21 = -2907161;

	t21 = (x145==(x146<<(x147<x148)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x165 = -1;
	int32_t x166 = INT32_MAX;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t22 = 3688899;

	t22 = (x165==(x166<<(x167<x168)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = UINT64_MAX;
	static volatile int64_t x176 = INT64_MIN;
	static int32_t t23 = -9052880;

	t23 = (x173==(x174<<(x175<x176)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x177 = -1LL;
	uint32_t x180 = UINT32_MAX;
	int32_t t24 = 14313245;

	t24 = (x177==(x178<<(x179<x180)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x189 = 107224025LLU;
	int8_t x190 = INT8_MAX;
	int32_t x191 = INT32_MIN;
	volatile int16_t x192 = INT16_MIN;
	int32_t t25 = -3309672;

	t25 = (x189==(x190<<(x191<x192)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x197 = INT64_MIN;
	int16_t x199 = -1200;
	int32_t t26 = -4948800;

	t26 = (x197==(x198<<(x199<x200)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x213 = INT16_MIN;
	volatile int64_t x214 = 21628LL;
	static int8_t x215 = -1;
	uint16_t x216 = 2U;
	static int32_t t27 = -4087;

	t27 = (x213==(x214<<(x215<x216)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x221 = INT64_MIN;
	uint64_t x222 = 31LLU;
	static uint8_t x223 = 3U;
	static uint64_t x224 = UINT64_MAX;
	volatile int32_t t28 = 707387;

	t28 = (x221==(x222<<(x223<x224)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x225 = 792U;
	int16_t x226 = 55;
	volatile int32_t x228 = INT32_MAX;

	t29 = (x225==(x226<<(x227<x228)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x229 = INT8_MIN;
	volatile uint16_t x230 = 37U;
	uint64_t x231 = UINT64_MAX;
	int32_t t30 = 14628;

	t30 = (x229==(x230<<(x231<x232)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x241 = UINT64_MAX;
	uint64_t x243 = UINT64_MAX;
	volatile int32_t t31 = -1289;

	t31 = (x241==(x242<<(x243<x244)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x246 = 292587LLU;
	uint64_t x247 = 1373046383LLU;
	volatile int32_t x248 = INT32_MAX;
	static volatile int32_t t32 = -51342;

	t32 = (x245==(x246<<(x247<x248)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x253 = 57318LLU;
	static volatile uint8_t x255 = UINT8_MAX;
	volatile int8_t x256 = 16;
	volatile int32_t t33 = 0;

	t33 = (x253==(x254<<(x255<x256)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x265 = 0U;
	uint32_t x266 = UINT32_MAX;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = 8;
	int32_t t34 = -148481;

	t34 = (x265==(x266<<(x267<x268)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = 32;
	static int32_t x288 = INT32_MIN;
	int32_t t35 = 5107;

	t35 = (x285==(x286<<(x287<x288)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x289 = -3379729;
	static uint64_t x291 = 26392231088617LLU;
	int8_t x292 = -11;

	t36 = (x289==(x290<<(x291<x292)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x297 = 6965111U;
	volatile int32_t x298 = INT32_MAX;
	int16_t x299 = 1671;
	volatile int64_t x300 = -215464108880LL;
	int32_t t37 = -9;

	t37 = (x297==(x298<<(x299<x300)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x314 = 580002;
	uint32_t x315 = 4U;
	static uint16_t x316 = 115U;
	volatile int32_t t38 = 68;

	t38 = (x313==(x314<<(x315<x316)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x317 = -1;
	volatile uint8_t x318 = 2U;
	int8_t x320 = -1;
	static int32_t t39 = -2;

	t39 = (x317==(x318<<(x319<x320)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x325 = UINT8_MAX;
	static int8_t x327 = INT8_MIN;
	int32_t t40 = -2;

	t40 = (x325==(x326<<(x327<x328)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x333 = -15;
	uint32_t x334 = 2350531U;
	static uint32_t x335 = 232916296U;
	uint16_t x336 = UINT16_MAX;
	int32_t t41 = -3;

	t41 = (x333==(x334<<(x335<x336)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x337 = UINT64_MAX;
	uint8_t x338 = 1U;
	int64_t x339 = INT64_MIN;
	static uint16_t x340 = 7114U;
	volatile int32_t t42 = 31038941;

	t42 = (x337==(x338<<(x339<x340)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x341 = INT16_MAX;
	uint64_t x342 = UINT64_MAX;
	volatile int8_t x343 = INT8_MAX;
	uint8_t x344 = 65U;

	t43 = (x341==(x342<<(x343<x344)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x345 = 39184154LL;
	volatile int32_t x346 = 0;
	int32_t t44 = -1;

	t44 = (x345==(x346<<(x347<x348)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x354 = 1116442092950601LLU;
	static uint8_t x356 = 1U;
	int32_t t45 = 79;

	t45 = (x353==(x354<<(x355<x356)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x362 = 9521U;
	volatile uint64_t x363 = 423661918125217LLU;
	volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t46 = 1;

	t46 = (x361==(x362<<(x363<x364)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x369 = 3314283U;
	static uint16_t x370 = 7152U;
	int8_t x371 = 30;
	static int32_t x372 = -2;
	volatile int32_t t47 = 55;

	t47 = (x369==(x370<<(x371<x372)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x373 = 61U;
	int8_t x374 = INT8_MAX;
	static int32_t x376 = -1;
	int32_t t48 = 444;

	t48 = (x373==(x374<<(x375<x376)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x388 = 25490U;
	static volatile int32_t t49 = -172;

	t49 = (x385==(x386<<(x387<x388)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MAX;
	int8_t x399 = 1;

	t50 = (x397==(x398<<(x399<x400)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x406 = 40U;
	volatile int8_t x407 = INT8_MAX;
	int8_t x408 = -1;
	volatile int32_t t51 = -69;

	t51 = (x405==(x406<<(x407<x408)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x410 = INT16_MAX;
	static volatile int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MAX;
	int32_t t52 = 1811861;

	t52 = (x409==(x410<<(x411<x412)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x429 = 228227U;
	static uint16_t x430 = UINT16_MAX;
	volatile uint16_t x431 = 1U;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t53 = 115;

	t53 = (x429==(x430<<(x431<x432)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x453 = UINT64_MAX;
	volatile int8_t x455 = 27;
	volatile int16_t x456 = 430;
	int32_t t54 = -215;

	t54 = (x453==(x454<<(x455<x456)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x457 = -1LL;
	int8_t x458 = INT8_MAX;
	int8_t x459 = -1;
	volatile uint32_t x460 = UINT32_MAX;
	int32_t t55 = -55;

	t55 = (x457==(x458<<(x459<x460)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x461 = 183914109U;
	volatile uint32_t x462 = 490U;
	volatile int16_t x463 = -1;
	static int16_t x464 = INT16_MIN;
	volatile int32_t t56 = -237328;

	t56 = (x461==(x462<<(x463<x464)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x473 = UINT64_MAX;
	int16_t x474 = 16343;
	static uint16_t x475 = UINT16_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t57 = 0;

	t57 = (x473==(x474<<(x475<x476)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x477 = -201808;
	int8_t x478 = INT8_MAX;
	int16_t x479 = INT16_MIN;
	static volatile int16_t x480 = INT16_MIN;

	t58 = (x477==(x478<<(x479<x480)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x505 = -1;
	int32_t x506 = INT32_MAX;
	volatile int32_t x507 = -1;
	uint64_t x508 = 276466346873264LLU;
	volatile int32_t t59 = 238819;

	t59 = (x505==(x506<<(x507<x508)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x509 = INT64_MAX;
	static uint16_t x510 = 3350U;
	int64_t x511 = 463878814727LL;
	uint32_t x512 = 3741083U;
	int32_t t60 = 343971833;

	t60 = (x509==(x510<<(x511<x512)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x513 = -1;
	static int16_t x516 = INT16_MIN;
	volatile int32_t t61 = 1002;

	t61 = (x513==(x514<<(x515<x516)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x517 = 206;
	volatile uint16_t x518 = 246U;
	int64_t x519 = INT64_MIN;
	volatile int64_t x520 = 4179LL;
	int32_t t62 = 31544;

	t62 = (x517==(x518<<(x519<x520)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x525 = UINT32_MAX;
	uint16_t x526 = 170U;
	int64_t x527 = INT64_MIN;
	int8_t x528 = INT8_MAX;

	t63 = (x525==(x526<<(x527<x528)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x530 = 2675LL;
	static int32_t x531 = INT32_MAX;
	volatile int16_t x532 = INT16_MIN;

	t64 = (x529==(x530<<(x531<x532)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x533 = 385165953;
	int32_t x534 = 11991906;
	volatile int16_t x535 = INT16_MAX;
	static volatile int16_t x536 = -44;
	static volatile int32_t t65 = -16966;

	t65 = (x533==(x534<<(x535<x536)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x537 = UINT16_MAX;
	static volatile uint16_t x538 = 220U;
	int16_t x539 = -1;

	t66 = (x537==(x538<<(x539<x540)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x562 = 112U;
	static int64_t x563 = -1LL;
	uint64_t x564 = 165882606178LLU;
	static int32_t t67 = -118941754;

	t67 = (x561==(x562<<(x563<x564)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x569 = 1;
	int16_t x571 = 249;
	int32_t t68 = 16645;

	t68 = (x569==(x570<<(x571<x572)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x573 = INT32_MIN;
	int32_t x574 = 870329;
	int8_t x575 = -1;
	int8_t x576 = INT8_MIN;
	int32_t t69 = -135807;

	t69 = (x573==(x574<<(x575<x576)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x578 = 3U;
	uint32_t x579 = 117U;
	volatile int32_t t70 = 92149;

	t70 = (x577==(x578<<(x579<x580)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x613 = 1200344;
	uint32_t x614 = 419U;
	int8_t x615 = 9;

	t71 = (x613==(x614<<(x615<x616)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x626 = 271844357733212413LL;
	int64_t x627 = -231955727674423LL;
	static int8_t x628 = -1;
	int32_t t72 = 2282;

	t72 = (x625==(x626<<(x627<x628)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x629 = -1;
	int64_t x630 = 771376141431LL;
	int32_t x631 = -10622264;
	int16_t x632 = INT16_MIN;
	volatile int32_t t73 = -91350;

	t73 = (x629==(x630<<(x631<x632)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x641 = UINT8_MAX;
	uint32_t x642 = UINT32_MAX;
	int32_t x643 = INT32_MIN;
	uint16_t x644 = 323U;
	int32_t t74 = 23909;

	t74 = (x641==(x642<<(x643<x644)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x646 = 66738297U;
	static int8_t x647 = -1;
	int32_t x648 = -1;
	static volatile int32_t t75 = 338742;

	t75 = (x645==(x646<<(x647<x648)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x649 = UINT64_MAX;
	uint64_t x650 = 43047799LLU;
	uint64_t x651 = 1429904746453638142LLU;
	static volatile int64_t x652 = INT64_MIN;
	int32_t t76 = 261457;

	t76 = (x649==(x650<<(x651<x652)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x653 = INT8_MIN;
	uint64_t x654 = UINT64_MAX;
	volatile uint16_t x655 = 6U;
	int32_t t77 = -246846092;

	t77 = (x653==(x654<<(x655<x656)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x657 = 2431U;
	uint32_t x658 = 53U;
	int32_t x660 = INT32_MIN;
	int32_t t78 = -901;

	t78 = (x657==(x658<<(x659<x660)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x661 = -2285;
	uint64_t x662 = 790294427814995393LLU;
	int32_t x663 = -4500;
	int32_t x664 = 692056;
	volatile int32_t t79 = -73;

	t79 = (x661==(x662<<(x663<x664)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x665 = -35;
	uint8_t x666 = UINT8_MAX;
	static volatile int32_t x668 = INT32_MIN;

	t80 = (x665==(x666<<(x667<x668)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x673 = 1U;
	int16_t x676 = -1;

	t81 = (x673==(x674<<(x675<x676)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x678 = 2U;
	uint32_t x680 = 12770U;
	static int32_t t82 = 2;

	t82 = (x677==(x678<<(x679<x680)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x685 = -47272333LL;
	static uint64_t x686 = 19150719663LLU;
	static int32_t t83 = 2260;

	t83 = (x685==(x686<<(x687<x688)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x689 = UINT8_MAX;
	volatile int64_t x690 = 6178581144LL;
	int64_t x691 = INT64_MAX;
	int16_t x692 = INT16_MIN;
	int32_t t84 = 1738310;

	t84 = (x689==(x690<<(x691<x692)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x697 = UINT64_MAX;
	volatile int64_t x699 = -1LL;
	int16_t x700 = 205;
	int32_t t85 = 13086704;

	t85 = (x697==(x698<<(x699<x700)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x705 = 592;
	int16_t x706 = 0;
	int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MIN;

	t86 = (x705==(x706<<(x707<x708)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x713 = -1;
	int64_t x714 = 29466363LL;
	int32_t x715 = INT32_MAX;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t87 = 31663;

	t87 = (x713==(x714<<(x715<x716)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x717 = -1LL;
	volatile int32_t t88 = 245;

	t88 = (x717==(x718<<(x719<x720)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x725 = INT64_MAX;
	uint16_t x726 = UINT16_MAX;
	int8_t x727 = 3;
	int8_t x728 = INT8_MIN;
	volatile int32_t t89 = -71;

	t89 = (x725==(x726<<(x727<x728)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x729 = -1807252277344840LL;
	static volatile uint8_t x730 = 2U;
	static int8_t x731 = -1;
	int8_t x732 = -2;

	t90 = (x729==(x730<<(x731<x732)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x737 = 78873411;
	volatile uint16_t x738 = 291U;
	uint64_t x739 = 5867265876LLU;
	volatile int8_t x740 = 1;
	int32_t t91 = -64941;

	t91 = (x737==(x738<<(x739<x740)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x741 = INT8_MAX;
	uint64_t x742 = UINT64_MAX;
	volatile uint8_t x743 = 57U;
	static uint16_t x744 = UINT16_MAX;
	int32_t t92 = 11;

	t92 = (x741==(x742<<(x743<x744)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x749 = 184;
	uint8_t x750 = 33U;
	uint16_t x751 = UINT16_MAX;
	static uint16_t x752 = UINT16_MAX;
	volatile int32_t t93 = 212;

	t93 = (x749==(x750<<(x751<x752)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x753 = UINT64_MAX;
	uint8_t x754 = 0U;
	int8_t x755 = INT8_MAX;
	int16_t x756 = INT16_MAX;

	t94 = (x753==(x754<<(x755<x756)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x758 = 0U;
	int16_t x759 = -9;
	static int16_t x760 = 56;
	volatile int32_t t95 = 1998763;

	t95 = (x757==(x758<<(x759<x760)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x769 = INT16_MIN;
	int8_t x770 = 2;
	volatile int64_t x771 = INT64_MIN;
	int32_t t96 = 22989;

	t96 = (x769==(x770<<(x771<x772)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x778 = UINT64_MAX;
	int64_t x779 = 45721519469732LL;
	static int32_t x780 = INT32_MIN;
	int32_t t97 = -242;

	t97 = (x777==(x778<<(x779<x780)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x785 = 16U;
	volatile int32_t x788 = 755;
	static volatile int32_t t98 = 6517;

	t98 = (x785==(x786<<(x787<x788)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x793 = 1U;
	volatile uint64_t x794 = UINT64_MAX;
	uint64_t x795 = UINT64_MAX;
	static uint64_t x796 = 1108938LLU;
	int32_t t99 = 38487127;

	t99 = (x793==(x794<<(x795<x796)));

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

