#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = INT64_MAX;
uint64_t x14 = 67021204704LLU;
int64_t x15 = 341569LL;
static uint32_t x24 = 14775537U;
int64_t x27 = 1431LL;
uint64_t x46 = UINT64_MAX;
int64_t x48 = INT64_MIN;
int64_t x57 = INT64_MAX;
int8_t x58 = INT8_MAX;
uint64_t x61 = 310439046LLU;
uint64_t t12 = UINT64_MAX;
int16_t x86 = INT16_MIN;
static int32_t x116 = INT32_MAX;
static uint32_t x118 = 25454834U;
volatile uint32_t x141 = 6923U;
static uint64_t x153 = 7557410666358LLU;
int16_t x154 = 5;
int32_t t22 = -235;
int8_t x193 = 23;
volatile uint16_t x195 = UINT16_MAX;
int32_t t24 = 3315150;
int32_t x198 = 0;
static int32_t x219 = INT32_MIN;
volatile uint32_t t28 = 98U;
static int64_t x235 = 60943365634LL;
int32_t x240 = INT32_MAX;
static int32_t t32 = -62073;
uint32_t x245 = 3218U;
uint32_t x247 = UINT32_MAX;
uint32_t x248 = UINT32_MAX;
int64_t x260 = INT64_MAX;
volatile int64_t x262 = INT64_MAX;
int8_t x269 = 7;
uint64_t x312 = UINT64_MAX;
static int8_t x313 = 33;
static int16_t x315 = 82;
static int16_t x316 = INT16_MIN;
int64_t x340 = INT64_MAX;
uint32_t x341 = 1U;
int16_t x358 = -1;
uint16_t x366 = 11U;
static int16_t x368 = -1273;
uint32_t t49 = 246U;
static uint64_t x370 = 82266LLU;
int8_t x383 = INT8_MAX;
static volatile uint64_t t54 = 96413915LLU;
uint64_t x407 = 21LLU;
int64_t t57 = -1255143373069810LL;
int16_t x422 = INT16_MIN;
volatile int8_t x424 = 1;
uint8_t x452 = UINT8_MAX;
volatile uint64_t t61 = 1261021LLU;
uint64_t x465 = 440LLU;
uint32_t x467 = 48161204U;
static volatile uint64_t t62 = 1LLU;
static int64_t x498 = INT64_MIN;
static uint16_t x500 = UINT16_MAX;
uint16_t x503 = 4568U;
volatile int16_t x504 = INT16_MIN;
uint64_t x505 = UINT64_MAX;
int16_t x508 = INT16_MAX;
int64_t x531 = -125LL;
int8_t x538 = 6;
static volatile uint32_t t73 = UINT32_MAX;
static volatile int32_t t74 = -424318253;
uint64_t x550 = 0LLU;
volatile uint64_t t76 = 129853LLU;
volatile uint64_t x569 = 591016226518LLU;
uint8_t x577 = 42U;
uint16_t x592 = UINT16_MAX;
volatile int32_t t81 = INT32_MAX;
int32_t x610 = INT32_MAX;
volatile int64_t x627 = INT64_MIN;
uint64_t x630 = UINT64_MAX;
uint64_t t87 = UINT64_MAX;
uint64_t t88 = 652360LLU;
int16_t x657 = INT16_MAX;
int32_t x660 = -1;
volatile int8_t x661 = -1;
static uint64_t x662 = UINT64_MAX;
static uint8_t x682 = UINT8_MAX;
int32_t t93 = -9482933;
uint64_t t94 = UINT64_MAX;
volatile int8_t x695 = INT8_MAX;
static int16_t x703 = 199;
uint64_t t97 = 49747909466032LLU;
volatile uint32_t x714 = UINT32_MAX;
int16_t x715 = -1;
static volatile int16_t x726 = INT16_MIN;


void f0(void) {
	volatile uint8_t x5 = 4U;
	static uint32_t x7 = 8U;
	int64_t x8 = INT64_MIN;
	volatile int64_t t0 = INT64_MAX;

	t0 = ((x5|x6)>>(x7<x8));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 0U;
	uint64_t x10 = UINT64_MAX;
	volatile int64_t x11 = -1LL;
	static int32_t x12 = INT32_MAX;
	volatile uint64_t t1 = 1018029210752LLU;

	t1 = ((x9|x10)>>(x11<x12));

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	volatile int8_t x16 = INT8_MIN;
	static uint64_t t2 = 8363763LLU;

	t2 = ((x13|x14)>>(x15<x16));

	if (t2 != 67021209599LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 1;
	int32_t x22 = INT32_MAX;
	int64_t x23 = -2668362581210588580LL;
	static volatile int32_t t3 = -5722;

	t3 = ((x21|x22)>>(x23<x24));

	if (t3 != 1073741823) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	uint32_t x26 = 8221U;
	int8_t x28 = -3;
	volatile uint32_t t4 = 29U;

	t4 = ((x25|x26)>>(x27<x28));

	if (t4 != 4294942749U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MAX;
	volatile int64_t x31 = INT64_MIN;
	static int8_t x32 = -1;
	static uint32_t t5 = 2034059U;

	t5 = ((x29|x30)>>(x31<x32));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = 7;
	volatile uint8_t x39 = 0U;
	int32_t x40 = 426573644;
	volatile int32_t t6 = -4;

	t6 = ((x37|x38)>>(x39<x40));

	if (t6 != 63) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 71U;
	uint8_t x42 = UINT8_MAX;
	static uint16_t x43 = 219U;
	volatile uint64_t x44 = 8870967649571110411LLU;
	volatile int32_t t7 = 120984681;

	t7 = ((x41|x42)>>(x43<x44));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = INT8_MIN;
	volatile int32_t x47 = INT32_MIN;
	static uint64_t t8 = UINT64_MAX;

	t8 = ((x45|x46)>>(x47<x48));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	int8_t x50 = 0;
	int64_t x51 = 1874458772206427LL;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t9 = 50824511;

	t9 = ((x49|x50)>>(x51<x52));

	if (t9 != 16383) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x59 = UINT8_MAX;
	uint8_t x60 = 1U;
	volatile int64_t t10 = INT64_MAX;

	t10 = ((x57|x58)>>(x59<x60));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x62 = -9489;
	int16_t x63 = INT16_MAX;
	static uint8_t x64 = 57U;
	uint64_t t11 = 468260LLU;

	t11 = ((x61|x62)>>(x63<x64));

	if (t11 != 18446744073709551343LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x65 = UINT64_MAX;
	uint8_t x66 = 33U;
	volatile uint64_t x67 = 761741325032LLU;
	uint32_t x68 = UINT32_MAX;

	t12 = ((x65|x66)>>(x67<x68));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = 107109U;
	int32_t x78 = -1;
	volatile uint64_t x79 = 489122613195LLU;
	int32_t x80 = INT32_MAX;
	uint32_t t13 = UINT32_MAX;

	t13 = ((x77|x78)>>(x79<x80));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = 67548384034LLU;
	volatile uint32_t x87 = UINT32_MAX;
	int64_t x88 = 320731798LL;
	uint64_t t14 = 3662212423622212609LLU;

	t14 = ((x85|x86)>>(x87<x88));

	if (t14 != 18446744073709521698LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x93 = 305362439U;
	uint32_t x94 = 1U;
	int64_t x95 = INT64_MAX;
	uint8_t x96 = 1U;
	uint32_t t15 = 4U;

	t15 = ((x93|x94)>>(x95<x96));

	if (t15 != 305362439U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x113 = 0U;
	volatile int32_t x114 = 1797;
	uint64_t x115 = 264156713LLU;
	volatile int32_t t16 = 294475403;

	t16 = ((x113|x114)>>(x115<x116));

	if (t16 != 898) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x119 = 0LL;
	volatile int8_t x120 = 24;
	volatile uint64_t t17 = 318506164676LLU;

	t17 = ((x117|x118)>>(x119<x120));

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x142 = 0LL;
	uint64_t x143 = 3549960309505LLU;
	int16_t x144 = INT16_MAX;
	static volatile int64_t t18 = 5257313221358413LL;

	t18 = ((x141|x142)>>(x143<x144));

	if (t18 != 6923LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x145 = -15;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = 845574380;
	int16_t x148 = -17;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x145|x146)>>(x147<x148));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x155 = 6334;
	uint8_t x156 = UINT8_MAX;
	volatile uint64_t t20 = 139904043139LLU;

	t20 = ((x153|x154)>>(x155<x156));

	if (t20 != 7557410666359LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x161 = 0;
	uint8_t x162 = UINT8_MAX;
	uint32_t x163 = UINT32_MAX;
	static int8_t x164 = -1;
	volatile int32_t t21 = -1;

	t21 = ((x161|x162)>>(x163<x164));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x165 = INT16_MAX;
	volatile uint16_t x166 = UINT16_MAX;
	int32_t x167 = INT32_MIN;
	int32_t x168 = 37101636;

	t22 = ((x165|x166)>>(x167<x168));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x177 = INT32_MAX;
	volatile uint16_t x178 = UINT16_MAX;
	int64_t x179 = -1LL;
	uint16_t x180 = 34U;
	volatile int32_t t23 = 0;

	t23 = ((x177|x178)>>(x179<x180));

	if (t23 != 1073741823) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x194 = 45U;
	int64_t x196 = -1LL;

	t24 = ((x193|x194)>>(x195<x196));

	if (t24 != 63) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x197 = 49U;
	static uint64_t x199 = 47443287616828637LLU;
	volatile int8_t x200 = INT8_MIN;
	static int32_t t25 = -1433406;

	t25 = ((x197|x198)>>(x199<x200));

	if (t25 != 24) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x201 = 820U;
	static uint8_t x202 = UINT8_MAX;
	int32_t x203 = INT32_MIN;
	static volatile int64_t x204 = -31029LL;
	static int32_t t26 = 10546;

	t26 = ((x201|x202)>>(x203<x204));

	if (t26 != 511) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 4U;
	int16_t x220 = INT16_MAX;
	static volatile uint64_t t27 = 31136941607188LLU;

	t27 = ((x217|x218)>>(x219<x220));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x221 = UINT16_MAX;
	volatile uint32_t x222 = 2351U;
	int16_t x223 = 0;
	uint32_t x224 = 149107U;

	t28 = ((x221|x222)>>(x223<x224));

	if (t28 != 32767U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x225 = 8996;
	volatile int8_t x226 = 0;
	int16_t x227 = -1;
	int32_t x228 = -238038142;
	volatile int32_t t29 = 1480449;

	t29 = ((x225|x226)>>(x227<x228));

	if (t29 != 8996) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x233 = 0;
	int32_t x234 = INT32_MAX;
	static int16_t x236 = INT16_MIN;
	int32_t t30 = INT32_MAX;

	t30 = ((x233|x234)>>(x235<x236));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x237 = INT32_MIN;
	volatile uint32_t x238 = 3U;
	volatile int8_t x239 = -2;
	volatile uint32_t t31 = 736677572U;

	t31 = ((x237|x238)>>(x239<x240));

	if (t31 != 1073741825U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x241 = 5;
	uint8_t x242 = UINT8_MAX;
	static volatile int32_t x243 = INT32_MIN;
	static int64_t x244 = -268LL;

	t32 = ((x241|x242)>>(x243<x244));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x246 = UINT8_MAX;
	uint32_t t33 = 1454161388U;

	t33 = ((x245|x246)>>(x247<x248));

	if (t33 != 3327U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x253 = INT16_MAX;
	static int8_t x254 = 1;
	int8_t x255 = -1;
	int16_t x256 = 2584;
	int32_t t34 = -104;

	t34 = ((x253|x254)>>(x255<x256));

	if (t34 != 16383) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x257 = 442169LLU;
	int8_t x258 = -1;
	int8_t x259 = -7;
	uint64_t t35 = 25622962818303307LLU;

	t35 = ((x257|x258)>>(x259<x260));

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x261 = 916157662U;
	int32_t x263 = INT32_MAX;
	volatile int32_t x264 = -1;
	int64_t t36 = INT64_MAX;

	t36 = ((x261|x262)>>(x263<x264));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x265 = INT16_MIN;
	static volatile uint32_t x266 = 0U;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = 11;
	uint32_t t37 = 4U;

	t37 = ((x265|x266)>>(x267<x268));

	if (t37 != 4294934528U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x270 = UINT16_MAX;
	volatile int32_t x271 = 105863;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t38 = 63464606;

	t38 = ((x269|x270)>>(x271<x272));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x281 = 0;
	int32_t x282 = 6090;
	uint8_t x283 = 8U;
	volatile int32_t x284 = -1;
	volatile int32_t t39 = 4;

	t39 = ((x281|x282)>>(x283<x284));

	if (t39 != 6090) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x309 = 21328096U;
	uint16_t x310 = 1U;
	uint16_t x311 = 32U;
	uint32_t t40 = 80U;

	t40 = ((x309|x310)>>(x311<x312));

	if (t40 != 10664048U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x314 = 6120194;
	int32_t t41 = 147;

	t41 = ((x313|x314)>>(x315<x316));

	if (t41 != 6120227) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x317 = 4LLU;
	static int64_t x318 = INT64_MIN;
	static volatile int16_t x319 = 2931;
	int8_t x320 = INT8_MIN;
	volatile uint64_t t42 = 7805020LLU;

	t42 = ((x317|x318)>>(x319<x320));

	if (t42 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x321 = INT64_MIN;
	uint64_t x322 = 19759422950691587LLU;
	uint32_t x323 = 21362015U;
	static int64_t x324 = -1LL;
	uint64_t t43 = 697413249LLU;

	t43 = ((x321|x322)>>(x323<x324));

	if (t43 != 9243131459805467395LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x333 = INT32_MIN;
	volatile uint32_t x334 = 8U;
	int64_t x335 = -823836006958652LL;
	uint32_t x336 = 1U;
	uint32_t t44 = 6323604U;

	t44 = ((x333|x334)>>(x335<x336));

	if (t44 != 1073741828U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x337 = 10;
	uint64_t x338 = 53782LLU;
	int16_t x339 = -1;
	uint64_t t45 = 20110LLU;

	t45 = ((x337|x338)>>(x339<x340));

	if (t45 != 26895LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x342 = 3;
	int64_t x343 = -1LL;
	int8_t x344 = INT8_MIN;
	static volatile uint32_t t46 = 29U;

	t46 = ((x341|x342)>>(x343<x344));

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x349 = INT8_MAX;
	uint16_t x350 = 0U;
	volatile int64_t x351 = -1LL;
	int16_t x352 = -1;
	int32_t t47 = 198690;

	t47 = ((x349|x350)>>(x351<x352));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x357 = UINT64_MAX;
	volatile int64_t x359 = -12684LL;
	static volatile uint64_t x360 = 16034283153LLU;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = ((x357|x358)>>(x359<x360));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x365 = 58U;
	int16_t x367 = INT16_MIN;

	t49 = ((x365|x366)>>(x367<x368));

	if (t49 != 29U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x369 = INT8_MIN;
	int8_t x371 = -23;
	int64_t x372 = 20206749LL;
	static volatile uint64_t t50 = 2822414LLU;

	t50 = ((x369|x370)>>(x371<x372));

	if (t50 != 9223372036854775789LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x377 = UINT64_MAX;
	int8_t x378 = INT8_MIN;
	int64_t x379 = 266LL;
	int32_t x380 = INT32_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x377|x378)>>(x379<x380));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x381 = UINT8_MAX;
	uint8_t x382 = UINT8_MAX;
	volatile int8_t x384 = -1;
	static int32_t t52 = 10553;

	t52 = ((x381|x382)>>(x383<x384));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x389 = -1;
	volatile uint32_t x390 = 45025U;
	int16_t x391 = -267;
	int16_t x392 = 112;
	volatile uint32_t t53 = 131314U;

	t53 = ((x389|x390)>>(x391<x392));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x393 = 8;
	uint64_t x394 = 1931977414455LLU;
	static int32_t x395 = INT32_MAX;
	int16_t x396 = -3768;

	t54 = ((x393|x394)>>(x395<x396));

	if (t54 != 1931977414463LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x401 = 74U;
	volatile int16_t x402 = INT16_MAX;
	int16_t x403 = -1;
	int16_t x404 = INT16_MIN;
	volatile int32_t t55 = 129;

	t55 = ((x401|x402)>>(x403<x404));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x405 = INT64_MAX;
	uint16_t x406 = 2U;
	static int32_t x408 = -1;
	int64_t t56 = 4257167135222068281LL;

	t56 = ((x405|x406)>>(x407<x408));

	if (t56 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x409 = UINT32_MAX;
	int64_t x410 = 42656852093LL;
	static uint16_t x411 = UINT16_MAX;
	int32_t x412 = -1;

	t57 = ((x409|x410)>>(x411<x412));

	if (t57 != 42949672959LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MAX;
	volatile int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MAX;
	static uint32_t t58 = 10U;

	t58 = ((x413|x414)>>(x415<x416));

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x421 = UINT32_MAX;
	int32_t x423 = INT32_MAX;
	uint32_t t59 = UINT32_MAX;

	t59 = ((x421|x422)>>(x423<x424));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x425 = INT32_MIN;
	static uint32_t x426 = 13706954U;
	static int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MIN;
	volatile uint32_t t60 = 7628U;

	t60 = ((x425|x426)>>(x427<x428));

	if (t60 != 2161190602U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x449 = 28;
	uint64_t x450 = 35196119349853542LLU;
	static uint64_t x451 = 60551242LLU;

	t61 = ((x449|x450)>>(x451<x452));

	if (t61 != 35196119349853566LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x466 = -41;
	int16_t x468 = INT16_MIN;

	t62 = ((x465|x466)>>(x467<x468));

	if (t62 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x469 = 106987U;
	uint16_t x470 = UINT16_MAX;
	int16_t x471 = 242;
	static uint16_t x472 = 120U;
	uint32_t t63 = 5750855U;

	t63 = ((x469|x470)>>(x471<x472));

	if (t63 != 131071U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x481 = 4634104U;
	uint32_t x482 = UINT32_MAX;
	uint8_t x483 = 15U;
	int16_t x484 = -1292;
	static uint32_t t64 = UINT32_MAX;

	t64 = ((x481|x482)>>(x483<x484));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x485 = 13915U;
	int8_t x486 = 14;
	int32_t x487 = -13184;
	int64_t x488 = 16LL;
	volatile uint32_t t65 = 530704U;

	t65 = ((x485|x486)>>(x487<x488));

	if (t65 != 6959U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x489 = 493582110190655LLU;
	volatile uint32_t x490 = 5794785U;
	int64_t x491 = -1166LL;
	int32_t x492 = 234451;
	uint64_t t66 = 21370LLU;

	t66 = ((x489|x490)>>(x491<x492));

	if (t66 != 246791055095807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x493 = 816U;
	static volatile uint32_t x494 = 48845U;
	int64_t x495 = INT64_MAX;
	int32_t x496 = INT32_MAX;
	volatile uint32_t t67 = 246442233U;

	t67 = ((x493|x494)>>(x495<x496));

	if (t67 != 49149U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x497 = 2128984591278092LLU;
	uint8_t x499 = UINT8_MAX;
	uint64_t t68 = 2707515686789LLU;

	t68 = ((x497|x498)>>(x499<x500));

	if (t68 != 4612750510723026950LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x501 = UINT32_MAX;
	uint16_t x502 = 33U;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = ((x501|x502)>>(x503<x504));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x506 = INT8_MAX;
	int32_t x507 = INT32_MAX;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = ((x505|x506)>>(x507<x508));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x509 = 1U;
	uint32_t x510 = 133007237U;
	int32_t x511 = -1;
	int16_t x512 = INT16_MAX;
	volatile uint32_t t71 = 22337985U;

	t71 = ((x509|x510)>>(x511<x512));

	if (t71 != 66503618U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x529 = INT8_MAX;
	int8_t x530 = INT8_MAX;
	static volatile int8_t x532 = INT8_MIN;
	volatile int32_t t72 = 621883176;

	t72 = ((x529|x530)>>(x531<x532));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x537 = UINT32_MAX;
	uint32_t x539 = UINT32_MAX;
	uint16_t x540 = 24426U;

	t73 = ((x537|x538)>>(x539<x540));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x541 = 15U;
	int32_t x542 = 45836331;
	uint32_t x543 = 1746U;
	static int32_t x544 = 118;

	t74 = ((x541|x542)>>(x543<x544));

	if (t74 != 45836335) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x549 = 115U;
	uint8_t x551 = 24U;
	uint32_t x552 = UINT32_MAX;
	static uint64_t t75 = 7748855581040227981LLU;

	t75 = ((x549|x550)>>(x551<x552));

	if (t75 != 57LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x565 = 744357208291507LLU;
	int8_t x566 = INT8_MIN;
	int64_t x567 = INT64_MIN;
	uint16_t x568 = 156U;

	t76 = ((x565|x566)>>(x567<x568));

	if (t76 != 9223372036854775769LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x570 = 1U;
	uint64_t x571 = UINT64_MAX;
	uint8_t x572 = 23U;
	uint64_t t77 = 3623LLU;

	t77 = ((x569|x570)>>(x571<x572));

	if (t77 != 591016226519LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x573 = 68594888U;
	int8_t x574 = -1;
	volatile int8_t x575 = -9;
	static volatile uint32_t x576 = 222620U;
	uint32_t t78 = UINT32_MAX;

	t78 = ((x573|x574)>>(x575<x576));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x578 = 0;
	volatile int64_t x579 = 5808099LL;
	volatile int8_t x580 = INT8_MIN;
	static volatile int32_t t79 = -270;

	t79 = ((x577|x578)>>(x579<x580));

	if (t79 != 42) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x581 = INT16_MIN;
	uint64_t x582 = 9036221261824721225LLU;
	uint64_t x583 = 1925264500159020LLU;
	static int64_t x584 = INT64_MAX;
	uint64_t t80 = 4142944215LLU;

	t80 = ((x581|x582)>>(x583<x584));

	if (t80 != 9223372036854759588LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x589 = INT32_MAX;
	int16_t x590 = INT16_MAX;
	uint32_t x591 = UINT32_MAX;

	t81 = ((x589|x590)>>(x591<x592));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x605 = UINT16_MAX;
	uint64_t x606 = 21023LLU;
	uint64_t x607 = 4532LLU;
	int8_t x608 = 46;
	uint64_t t82 = 264531390168949LLU;

	t82 = ((x605|x606)>>(x607<x608));

	if (t82 != 65535LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x609 = 57010LL;
	int64_t x611 = -18878LL;
	int8_t x612 = INT8_MIN;
	int64_t t83 = -16538930607057270LL;

	t83 = ((x609|x610)>>(x611<x612));

	if (t83 != 1073741823LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x613 = 80843935685143415LLU;
	int32_t x614 = INT32_MAX;
	int64_t x615 = 0LL;
	static volatile uint16_t x616 = 41U;
	volatile uint64_t t84 = 84839697496169965LLU;

	t84 = ((x613|x614)>>(x615<x616));

	if (t84 != 40421968742187007LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x621 = 337095626U;
	static int32_t x622 = 1;
	static uint64_t x623 = 3665170441580842LLU;
	volatile int32_t x624 = -1;
	uint32_t t85 = 925U;

	t85 = ((x621|x622)>>(x623<x624));

	if (t85 != 168547813U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x625 = INT16_MAX;
	uint8_t x626 = 12U;
	int8_t x628 = 17;
	static int32_t t86 = -8238;

	t86 = ((x625|x626)>>(x627<x628));

	if (t86 != 16383) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x629 = -7;
	int16_t x631 = -1;
	uint64_t x632 = 153954661336LLU;

	t87 = ((x629|x630)>>(x631<x632));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x645 = UINT64_MAX;
	int32_t x646 = INT32_MIN;
	uint16_t x647 = 102U;
	int32_t x648 = INT32_MAX;

	t88 = ((x645|x646)>>(x647<x648));

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x653 = -1;
	uint64_t x654 = 2050409523647614079LLU;
	uint16_t x655 = 5569U;
	int64_t x656 = INT64_MAX;
	uint64_t t89 = 8LLU;

	t89 = ((x653|x654)>>(x655<x656));

	if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x658 = 87U;
	int16_t x659 = -2758;
	static volatile int32_t t90 = -508145822;

	t90 = ((x657|x658)>>(x659<x660));

	if (t90 != 16383) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x663 = INT32_MIN;
	uint8_t x664 = 4U;
	uint64_t t91 = 125879087170LLU;

	t91 = ((x661|x662)>>(x663<x664));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x673 = UINT64_MAX;
	int8_t x674 = -25;
	int8_t x675 = INT8_MIN;
	volatile uint64_t x676 = 236592078934732427LLU;
	static volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x673|x674)>>(x675<x676));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x681 = UINT8_MAX;
	uint8_t x683 = UINT8_MAX;
	uint64_t x684 = 4486145240684922LLU;

	t93 = ((x681|x682)>>(x683<x684));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x689 = -1;
	uint64_t x690 = 7946503LLU;
	volatile int32_t x691 = INT32_MAX;
	uint32_t x692 = 4347U;

	t94 = ((x689|x690)>>(x691<x692));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x693 = -1209484;
	static uint64_t x694 = UINT64_MAX;
	uint64_t x696 = 4162820313540931933LLU;
	uint64_t t95 = 1807095LLU;

	t95 = ((x693|x694)>>(x695<x696));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x701 = 16751155U;
	int32_t x702 = INT32_MIN;
	static int64_t x704 = -1LL;
	uint32_t t96 = 243U;

	t96 = ((x701|x702)>>(x703<x704));

	if (t96 != 2164234803U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x705 = 11478423107529867LLU;
	int8_t x706 = 12;
	int64_t x707 = INT64_MIN;
	uint32_t x708 = 7U;

	t97 = ((x705|x706)>>(x707<x708));

	if (t97 != 5739211553764935LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x713 = UINT16_MAX;
	int32_t x716 = INT32_MIN;
	uint32_t t98 = UINT32_MAX;

	t98 = ((x713|x714)>>(x715<x716));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x725 = 5151821406LLU;
	int32_t x727 = INT32_MAX;
	uint32_t x728 = UINT32_MAX;
	uint64_t t99 = 1851158978595316LLU;

	t99 = ((x725|x726)>>(x727<x728));

	if (t99 != 9223372036854761263LLU) { NG(); } else { ; }
	
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

