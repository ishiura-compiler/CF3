#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -1;
int16_t x12 = -1;
int64_t x26 = INT64_MIN;
volatile int32_t t2 = -3;
uint32_t x39 = 513802207U;
int32_t x46 = INT32_MIN;
int64_t x47 = -1LL;
volatile uint16_t x49 = 89U;
volatile int32_t t5 = -199484;
static uint16_t x56 = 0U;
uint8_t x67 = 15U;
int64_t t10 = 32LL;
int32_t x98 = -1;
volatile int32_t x99 = 4014;
int8_t x120 = INT8_MIN;
static volatile int32_t x134 = INT32_MIN;
int16_t x135 = -1;
int8_t x136 = -1;
volatile uint32_t t16 = 367481U;
uint32_t x143 = 271054U;
uint32_t x161 = 22U;
uint32_t t19 = 7U;
static int32_t x174 = INT32_MIN;
uint64_t x177 = 674935929500LLU;
int32_t x179 = INT32_MIN;
int16_t x186 = -1;
int64_t x188 = 456346957305831241LL;
int8_t x201 = 47;
static int8_t x213 = 13;
static int16_t x216 = INT16_MAX;
static volatile int32_t t25 = 4;
static int32_t x250 = INT32_MIN;
static int16_t x257 = -444;
volatile int32_t t29 = -7;
int32_t t30 = -51968;
static uint64_t x267 = 1261097LLU;
int8_t x311 = 52;
int32_t x331 = 25;
int32_t x339 = -1;
static int32_t t36 = 18890;
uint16_t x345 = 1741U;
static uint64_t x367 = UINT64_MAX;
int16_t x404 = 103;
int32_t t42 = -1;
int64_t t45 = 54132610088168LL;
volatile uint16_t x437 = 6U;
volatile int16_t x438 = -1;
static uint8_t x453 = 8U;
uint16_t x456 = 0U;
static int32_t t49 = -91;
int64_t x461 = -1LL;
static volatile int64_t x462 = INT64_MIN;
int64_t t50 = -15LL;
int64_t x466 = -54654730398LL;
static int16_t x467 = -1;
int8_t x486 = INT8_MIN;
uint16_t x501 = 4052U;
int16_t x502 = -9397;
int32_t x503 = INT32_MIN;
int32_t x506 = -44795;
volatile int8_t x557 = -1;
static volatile int32_t t60 = -4260;
uint16_t x580 = UINT16_MAX;
volatile uint32_t t61 = 15U;
int32_t x587 = -1;
int16_t x588 = INT16_MIN;
static int32_t t63 = 1483;
int8_t x601 = 8;
volatile int32_t x620 = INT32_MAX;
static int32_t t66 = 44611;
int32_t x643 = -1;
static volatile int64_t x644 = -973756322220LL;
int64_t x646 = -1LL;
volatile int16_t x647 = -8689;
static int8_t x648 = -1;
int8_t x659 = 27;
int32_t t70 = -22;
int32_t t72 = 17;
volatile int32_t x699 = 7019;
static volatile int8_t x728 = -1;
int32_t t75 = -6;
int16_t x730 = INT16_MIN;
uint16_t x732 = 874U;
static volatile uint32_t x733 = 2064908742U;
volatile int16_t x749 = -1;
uint16_t x753 = UINT16_MAX;
uint16_t x755 = 867U;
uint16_t x780 = UINT16_MAX;
int8_t x795 = -1;
volatile int32_t x802 = INT32_MIN;
uint64_t x813 = 16824322722260LLU;
uint64_t x815 = UINT64_MAX;
int32_t x823 = -1;
int16_t x832 = INT16_MIN;
volatile int64_t x847 = INT64_MAX;
int32_t x848 = -2460793;
int32_t x881 = -1;
uint64_t x884 = 49065LLU;
int16_t x915 = INT16_MAX;
volatile int8_t x916 = -1;
volatile int32_t x917 = -54276;
uint32_t x920 = 369940898U;
uint16_t x921 = UINT16_MAX;
volatile int64_t x923 = INT64_MIN;
int32_t t96 = -766;
int64_t x928 = INT64_MIN;
volatile uint16_t x948 = 2U;


void f0(void) {
	static int64_t x10 = -823736811641LL;
	static int16_t x11 = INT16_MAX;
	volatile int32_t t0 = 231395;

	t0 = (x9/(x10<(x11<x12)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	uint64_t x24 = 46501633LLU;
	volatile int32_t t1 = 434297656;

	t1 = (x21/(x22<(x23<x24)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x25 = 144U;
	uint8_t x27 = UINT8_MAX;
	int32_t x28 = -1;

	t2 = (x25/(x26<(x27<x28)));

	if (t2 != 144) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	uint8_t x40 = 0U;
	int32_t t3 = -87;

	t3 = (x37/(x38<(x39<x40)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x45 = 850222857LLU;
	int16_t x48 = INT16_MAX;
	uint64_t t4 = 421481151LLU;

	t4 = (x45/(x46<(x47<x48)));

	if (t4 != 850222857LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x50 = -159;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = UINT8_MAX;

	t5 = (x49/(x50<(x51<x52)));

	if (t5 != 89) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = -1790;
	volatile int64_t x55 = -1LL;
	int64_t t6 = INT64_MIN;

	t6 = (x53/(x54<(x55<x56)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x65 = 2U;
	int64_t x66 = -1LL;
	int32_t x68 = INT32_MIN;
	volatile int32_t t7 = -62114;

	t7 = (x65/(x66<(x67<x68)));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x73 = 3058U;
	volatile int8_t x74 = INT8_MIN;
	int8_t x75 = -1;
	volatile int32_t x76 = 94687988;
	int32_t t8 = 782;

	t8 = (x73/(x74<(x75<x76)));

	if (t8 != 3058) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x77 = 67133845754LLU;
	int32_t x78 = -99537;
	uint16_t x79 = 905U;
	static volatile uint64_t x80 = UINT64_MAX;
	static uint64_t t9 = 1071LLU;

	t9 = (x77/(x78<(x79<x80)));

	if (t9 != 67133845754LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x81 = 177832498224LL;
	int8_t x82 = -1;
	uint8_t x83 = 1U;
	int64_t x84 = INT64_MAX;

	t10 = (x81/(x82<(x83<x84)));

	if (t10 != 177832498224LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x85 = 49U;
	int8_t x86 = -4;
	uint16_t x87 = UINT16_MAX;
	static volatile uint32_t x88 = 21U;
	static volatile uint32_t t11 = 4966U;

	t11 = (x85/(x86<(x87<x88)));

	if (t11 != 49U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x89 = 34209688189805LL;
	int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MIN;
	int32_t x92 = -1;
	int64_t t12 = 955736786009LL;

	t12 = (x89/(x90<(x91<x92)));

	if (t12 != 34209688189805LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = -1;
	uint16_t x100 = UINT16_MAX;
	int32_t t13 = -5924;

	t13 = (x97/(x98<(x99<x100)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x105 = -1;
	int16_t x106 = -1;
	uint64_t x107 = 2882072453LLU;
	int32_t x108 = INT32_MIN;
	int32_t t14 = -1;

	t14 = (x105/(x106<(x107<x108)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x117 = -1;
	int32_t x118 = INT32_MIN;
	int32_t x119 = -1;
	volatile int32_t t15 = -6325;

	t15 = (x117/(x118<(x119<x120)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x133 = 383874U;

	t16 = (x133/(x134<(x135<x136)));

	if (t16 != 383874U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x141 = INT32_MAX;
	volatile int32_t x142 = -431327;
	uint64_t x144 = 11830473245808682LLU;
	volatile int32_t t17 = INT32_MAX;

	t17 = (x141/(x142<(x143<x144)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x149 = UINT16_MAX;
	static volatile int8_t x150 = -1;
	volatile uint8_t x151 = 14U;
	static uint16_t x152 = 20U;
	volatile int32_t t18 = -537876612;

	t18 = (x149/(x150<(x151<x152)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MIN;

	t19 = (x161/(x162<(x163<x164)));

	if (t19 != 22U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x173 = 231395463991806LLU;
	uint8_t x175 = 1U;
	int64_t x176 = -1LL;
	uint64_t t20 = 1025958LLU;

	t20 = (x173/(x174<(x175<x176)));

	if (t20 != 231395463991806LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x178 = INT8_MIN;
	static int8_t x180 = INT8_MIN;
	static volatile uint64_t t21 = 8405032518362129140LLU;

	t21 = (x177/(x178<(x179<x180)));

	if (t21 != 674935929500LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x185 = INT8_MIN;
	volatile int64_t x187 = -474906LL;
	int32_t t22 = -60469023;

	t22 = (x185/(x186<(x187<x188)));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x197 = 10674732;
	volatile int32_t x198 = INT32_MIN;
	uint8_t x199 = 0U;
	static uint64_t x200 = 63390LLU;
	int32_t t23 = 56862954;

	t23 = (x197/(x198<(x199<x200)));

	if (t23 != 10674732) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x202 = INT8_MIN;
	int8_t x203 = -1;
	volatile uint64_t x204 = 422676970923020952LLU;
	static volatile int32_t t24 = 206;

	t24 = (x201/(x202<(x203<x204)));

	if (t24 != 47) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x214 = -367333705928700696LL;
	int64_t x215 = 17315817592434982LL;

	t25 = (x213/(x214<(x215<x216)));

	if (t25 != 13) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	volatile int16_t x227 = 1;
	uint64_t x228 = 40565397547213965LLU;
	volatile int32_t t26 = 350821695;

	t26 = (x225/(x226<(x227<x228)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MAX;
	int32_t x236 = INT32_MAX;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x233/(x234<(x235<x236)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x249 = INT16_MAX;
	int16_t x251 = -6962;
	int64_t x252 = INT64_MIN;
	volatile int32_t t28 = -58028871;

	t28 = (x249/(x250<(x251<x252)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x258 = INT64_MIN;
	static int32_t x259 = -256152;
	static uint16_t x260 = UINT16_MAX;

	t29 = (x257/(x258<(x259<x260)));

	if (t29 != -444) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = -1;
	uint16_t x263 = 2U;
	static int64_t x264 = -1LL;

	t30 = (x261/(x262<(x263<x264)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x265 = 0U;
	int16_t x266 = -1;
	volatile uint32_t x268 = 10515U;
	int32_t t31 = -2;

	t31 = (x265/(x266<(x267<x268)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x309 = INT64_MAX;
	int16_t x310 = -1;
	uint8_t x312 = 7U;
	static volatile int64_t t32 = INT64_MAX;

	t32 = (x309/(x310<(x311<x312)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	volatile uint16_t x315 = 33U;
	int64_t x316 = INT64_MAX;
	static int32_t t33 = 0;

	t33 = (x313/(x314<(x315<x316)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x329 = -904681439611LL;
	int32_t x330 = -1;
	int16_t x332 = -13;
	int64_t t34 = -14LL;

	t34 = (x329/(x330<(x331<x332)));

	if (t34 != -904681439611LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x333 = -4;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	volatile uint16_t x336 = 443U;
	static volatile int32_t t35 = -19;

	t35 = (x333/(x334<(x335<x336)));

	if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x337 = 810U;
	int64_t x338 = INT64_MIN;
	int32_t x340 = INT32_MAX;

	t36 = (x337/(x338<(x339<x340)));

	if (t36 != 810) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x346 = INT32_MIN;
	int32_t x347 = 211232535;
	uint16_t x348 = 2U;
	static volatile int32_t t37 = 1;

	t37 = (x345/(x346<(x347<x348)));

	if (t37 != 1741) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = -1;
	uint64_t x363 = 53504222409LLU;
	int8_t x364 = INT8_MAX;
	int32_t t38 = INT32_MIN;

	t38 = (x361/(x362<(x363<x364)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x365 = 4;
	int64_t x366 = -1LL;
	int32_t x368 = 7346;
	int32_t t39 = 21148;

	t39 = (x365/(x366<(x367<x368)));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x369 = INT8_MIN;
	int16_t x370 = -1;
	int16_t x371 = 14;
	static int64_t x372 = -1234087039138605LL;
	int32_t t40 = 282338393;

	t40 = (x369/(x370<(x371<x372)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x397 = -1LL;
	volatile int8_t x398 = -1;
	int32_t x399 = 15269;
	uint8_t x400 = 107U;
	int64_t t41 = 55588464091720LL;

	t41 = (x397/(x398<(x399<x400)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x401 = -26;
	int32_t x402 = INT32_MIN;
	int64_t x403 = -1LL;

	t42 = (x401/(x402<(x403<x404)));

	if (t42 != -26) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x413 = 42U;
	int8_t x414 = -1;
	static uint8_t x415 = UINT8_MAX;
	int32_t x416 = INT32_MAX;
	volatile int32_t t43 = 109;

	t43 = (x413/(x414<(x415<x416)));

	if (t43 != 42) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x421 = -3169990771006792LL;
	int16_t x422 = -1;
	uint16_t x423 = 12063U;
	uint16_t x424 = 18U;
	volatile int64_t t44 = -46230037LL;

	t44 = (x421/(x422<(x423<x424)));

	if (t44 != -3169990771006792LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x425 = -34LL;
	int16_t x426 = -1;
	int32_t x427 = 291088;
	int16_t x428 = INT16_MIN;

	t45 = (x425/(x426<(x427<x428)));

	if (t45 != -34LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x439 = INT64_MAX;
	uint32_t x440 = 1U;
	int32_t t46 = -782164447;

	t46 = (x437/(x438<(x439<x440)));

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x445 = UINT16_MAX;
	int8_t x446 = INT8_MIN;
	int64_t x447 = -1LL;
	static int64_t x448 = -1LL;
	volatile int32_t t47 = 2836;

	t47 = (x445/(x446<(x447<x448)));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x454 = -35420943632629190LL;
	int8_t x455 = 5;
	int32_t t48 = 1;

	t48 = (x453/(x454<(x455<x456)));

	if (t48 != 8) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x457 = INT16_MIN;
	int16_t x458 = -1;
	int32_t x459 = -1871;
	int64_t x460 = 69863262970LL;

	t49 = (x457/(x458<(x459<x460)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x463 = INT32_MIN;
	volatile int16_t x464 = INT16_MAX;

	t50 = (x461/(x462<(x463<x464)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x465 = UINT8_MAX;
	int64_t x468 = INT64_MIN;
	int32_t t51 = -298325;

	t51 = (x465/(x466<(x467<x468)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x473 = 1U;
	int32_t x474 = -1500;
	static uint8_t x475 = 21U;
	static int32_t x476 = -648;
	volatile int32_t t52 = -10;

	t52 = (x473/(x474<(x475<x476)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x485 = INT32_MAX;
	volatile int16_t x487 = INT16_MAX;
	uint64_t x488 = 2727397840LLU;
	volatile int32_t t53 = INT32_MAX;

	t53 = (x485/(x486<(x487<x488)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x504 = -1;
	int32_t t54 = -158180809;

	t54 = (x501/(x502<(x503<x504)));

	if (t54 != 4052) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x505 = UINT16_MAX;
	volatile int16_t x507 = INT16_MIN;
	volatile uint16_t x508 = 25U;
	int32_t t55 = -92477250;

	t55 = (x505/(x506<(x507<x508)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x509 = 5283U;
	int16_t x510 = INT16_MIN;
	int32_t x511 = -1;
	uint8_t x512 = 119U;
	int32_t t56 = 6594440;

	t56 = (x509/(x510<(x511<x512)));

	if (t56 != 5283) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x517 = UINT64_MAX;
	int8_t x518 = INT8_MIN;
	int32_t x519 = -113;
	static uint8_t x520 = 30U;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x517/(x518<(x519<x520)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x525 = -4;
	int32_t x526 = -1466311;
	volatile uint16_t x527 = UINT16_MAX;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t58 = -24882742;

	t58 = (x525/(x526<(x527<x528)));

	if (t58 != -4) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x529 = 690481U;
	static int32_t x530 = -1;
	volatile int32_t x531 = INT32_MIN;
	int16_t x532 = INT16_MIN;
	static volatile uint32_t t59 = 29974U;

	t59 = (x529/(x530<(x531<x532)));

	if (t59 != 690481U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x558 = -13;
	volatile int16_t x559 = -504;
	int8_t x560 = -1;

	t60 = (x557/(x558<(x559<x560)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x577 = 482873U;
	int32_t x578 = INT32_MIN;
	int64_t x579 = -14082768326011031LL;

	t61 = (x577/(x578<(x579<x580)));

	if (t61 != 482873U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x585 = -1LL;
	int64_t x586 = INT64_MIN;
	volatile int64_t t62 = -18491846974LL;

	t62 = (x585/(x586<(x587<x588)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x597 = 6U;
	int16_t x598 = INT16_MIN;
	uint16_t x599 = 118U;
	int32_t x600 = -1;

	t63 = (x597/(x598<(x599<x600)));

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x602 = INT8_MIN;
	volatile uint16_t x603 = UINT16_MAX;
	static uint16_t x604 = 6911U;
	static volatile int32_t t64 = 62648590;

	t64 = (x601/(x602<(x603<x604)));

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x617 = -13145742;
	volatile int16_t x618 = INT16_MIN;
	int64_t x619 = 460630825541275718LL;
	static volatile int32_t t65 = -1;

	t65 = (x617/(x618<(x619<x620)));

	if (t65 != -13145742) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x633 = INT16_MIN;
	static int32_t x634 = -1;
	int16_t x635 = INT16_MIN;
	int8_t x636 = 7;

	t66 = (x633/(x634<(x635<x636)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x641 = 1;
	volatile int16_t x642 = INT16_MIN;
	static volatile int32_t t67 = 746947058;

	t67 = (x641/(x642<(x643<x644)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x645 = -52;
	volatile int32_t t68 = -3;

	t68 = (x645/(x646<(x647<x648)));

	if (t68 != -52) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x653 = 23;
	int16_t x654 = INT16_MIN;
	uint64_t x655 = 23069904930028860LLU;
	int8_t x656 = INT8_MIN;
	static int32_t t69 = -54;

	t69 = (x653/(x654<(x655<x656)));

	if (t69 != 23) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x657 = -1;
	int16_t x658 = INT16_MIN;
	volatile int16_t x660 = -15;

	t70 = (x657/(x658<(x659<x660)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x673 = INT32_MAX;
	static int8_t x674 = INT8_MIN;
	static uint16_t x675 = 30U;
	uint16_t x676 = 17U;
	int32_t t71 = INT32_MAX;

	t71 = (x673/(x674<(x675<x676)));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x677 = 365;
	int64_t x678 = INT64_MIN;
	volatile int64_t x679 = INT64_MAX;
	volatile uint32_t x680 = 3676U;

	t72 = (x677/(x678<(x679<x680)));

	if (t72 != 365) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x697 = -1LL;
	int8_t x698 = INT8_MIN;
	int8_t x700 = -1;
	static int64_t t73 = 142882929458167619LL;

	t73 = (x697/(x698<(x699<x700)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x701 = UINT16_MAX;
	static int8_t x702 = INT8_MIN;
	volatile int32_t x703 = 203;
	int32_t x704 = 1;
	int32_t t74 = 159;

	t74 = (x701/(x702<(x703<x704)));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x725 = INT16_MAX;
	int8_t x726 = -1;
	int16_t x727 = 6;

	t75 = (x725/(x726<(x727<x728)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x729 = -1;
	int64_t x731 = INT64_MAX;
	int32_t t76 = -242959;

	t76 = (x729/(x730<(x731<x732)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x734 = INT64_MIN;
	static volatile uint8_t x735 = 8U;
	volatile uint16_t x736 = 24U;
	uint32_t t77 = 91U;

	t77 = (x733/(x734<(x735<x736)));

	if (t77 != 2064908742U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x750 = 0U;
	uint32_t x751 = 660U;
	int16_t x752 = INT16_MIN;
	int32_t t78 = -24;

	t78 = (x749/(x750<(x751<x752)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x754 = -1045021LL;
	static int8_t x756 = -1;
	static int32_t t79 = 4877;

	t79 = (x753/(x754<(x755<x756)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x777 = UINT64_MAX;
	static volatile int8_t x778 = -28;
	int64_t x779 = INT64_MIN;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x777/(x778<(x779<x780)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x785 = INT8_MIN;
	int16_t x786 = INT16_MIN;
	int32_t x787 = INT32_MIN;
	volatile uint8_t x788 = 2U;
	int32_t t81 = 45553;

	t81 = (x785/(x786<(x787<x788)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x789 = 6;
	int64_t x790 = -1LL;
	int32_t x791 = -1;
	int16_t x792 = INT16_MAX;
	volatile int32_t t82 = -1440;

	t82 = (x789/(x790<(x791<x792)));

	if (t82 != 6) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x793 = INT16_MAX;
	int16_t x794 = -1;
	int32_t x796 = INT32_MIN;
	int32_t t83 = 1507;

	t83 = (x793/(x794<(x795<x796)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x801 = -4;
	static int16_t x803 = -19;
	volatile int32_t x804 = -1;
	volatile int32_t t84 = 8595459;

	t84 = (x801/(x802<(x803<x804)));

	if (t84 != -4) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x809 = -1;
	static int16_t x810 = 0;
	int8_t x811 = 7;
	uint64_t x812 = 5667505712138941579LLU;
	int32_t t85 = 343476;

	t85 = (x809/(x810<(x811<x812)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x814 = INT8_MIN;
	int8_t x816 = INT8_MIN;
	static volatile uint64_t t86 = 26838847985923LLU;

	t86 = (x813/(x814<(x815<x816)));

	if (t86 != 16824322722260LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x821 = UINT64_MAX;
	int64_t x822 = INT64_MIN;
	volatile uint32_t x824 = UINT32_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = (x821/(x822<(x823<x824)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x829 = INT8_MIN;
	volatile int16_t x830 = INT16_MIN;
	uint32_t x831 = 1U;
	int32_t t88 = 578311281;

	t88 = (x829/(x830<(x831<x832)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x845 = 23137005809LL;
	static volatile int16_t x846 = INT16_MIN;
	static int64_t t89 = 25LL;

	t89 = (x845/(x846<(x847<x848)));

	if (t89 != 23137005809LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x853 = INT64_MIN;
	int32_t x854 = -7586966;
	int32_t x855 = 1;
	int64_t x856 = -72LL;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x853/(x854<(x855<x856)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x857 = -22;
	int8_t x858 = INT8_MIN;
	volatile int8_t x859 = -5;
	static uint16_t x860 = 1U;
	volatile int32_t t91 = -709373553;

	t91 = (x857/(x858<(x859<x860)));

	if (t91 != -22) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x882 = -1;
	volatile uint16_t x883 = 7247U;
	volatile int32_t t92 = 3;

	t92 = (x881/(x882<(x883<x884)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x893 = -25;
	static int64_t x894 = INT64_MIN;
	uint8_t x895 = 55U;
	int8_t x896 = -4;
	volatile int32_t t93 = 17;

	t93 = (x893/(x894<(x895<x896)));

	if (t93 != -25) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x913 = 0U;
	int32_t x914 = INT32_MIN;
	int32_t t94 = -19310;

	t94 = (x913/(x914<(x915<x916)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x918 = -1;
	uint64_t x919 = 458084146493950LLU;
	int32_t t95 = -280317;

	t95 = (x917/(x918<(x919<x920)));

	if (t95 != -54276) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x922 = INT32_MIN;
	int16_t x924 = -1;

	t96 = (x921/(x922<(x923<x924)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x925 = UINT64_MAX;
	volatile int32_t x926 = -45226;
	int8_t x927 = INT8_MIN;
	uint64_t t97 = UINT64_MAX;

	t97 = (x925/(x926<(x927<x928)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x933 = 2556033U;
	static int8_t x934 = -1;
	int8_t x935 = 1;
	int32_t x936 = 5;
	volatile uint32_t t98 = 5U;

	t98 = (x933/(x934<(x935<x936)));

	if (t98 != 2556033U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x945 = INT32_MIN;
	int64_t x946 = INT64_MIN;
	static int16_t x947 = INT16_MIN;
	int32_t t99 = INT32_MIN;

	t99 = (x945/(x946<(x947<x948)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

