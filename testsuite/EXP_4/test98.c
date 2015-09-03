#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 127436871190823LLU;
uint16_t x2 = UINT16_MAX;
int16_t x6 = 8;
volatile int32_t t1 = 14572771;
int8_t x16 = -1;
volatile int32_t t3 = -27;
static int8_t x58 = INT8_MIN;
int32_t t4 = -659526;
int64_t t6 = INT64_MAX;
int64_t x74 = -5521082642728LL;
uint64_t x75 = 7447216411LLU;
int8_t x80 = INT8_MAX;
int32_t t8 = 6175829;
int64_t x90 = -2692580004LL;
static int32_t x94 = INT32_MIN;
uint8_t x95 = 4U;
static volatile int32_t t11 = INT32_MAX;
static uint64_t x113 = 27058671880LLU;
static uint64_t t12 = 9368LLU;
static int8_t x118 = 14;
static uint32_t x126 = 3562U;
uint32_t x128 = UINT32_MAX;
static volatile int32_t t14 = 71729;
int8_t x148 = INT8_MAX;
volatile uint8_t x155 = UINT8_MAX;
volatile uint16_t x181 = 9U;
int32_t t21 = -33391565;
uint64_t x191 = 11LLU;
int32_t x192 = -1;
volatile int32_t t23 = -110446056;
static uint16_t x209 = UINT16_MAX;
int16_t x215 = -1;
uint8_t x249 = UINT8_MAX;
uint64_t x277 = UINT64_MAX;
uint8_t x280 = 13U;
uint8_t x282 = 33U;
int32_t x293 = 1343;
int16_t x296 = 12052;
int32_t t34 = 260701524;
static volatile int32_t x304 = -354159524;
static int64_t x310 = -25207LL;
volatile uint32_t x312 = UINT32_MAX;
int8_t x313 = INT8_MAX;
static volatile int16_t x317 = 21;
uint16_t x321 = 46U;
volatile int64_t x334 = INT64_MAX;
static uint32_t t42 = 4U;
uint32_t x358 = 6139005U;
volatile int32_t t43 = -91666;
static volatile uint16_t x367 = 1319U;
static int8_t x368 = INT8_MIN;
volatile uint64_t x376 = 381278166488LLU;
static int32_t t46 = INT32_MAX;
volatile int32_t x404 = INT32_MIN;
static int32_t t48 = -501785174;
volatile int8_t x416 = INT8_MIN;
static uint16_t x425 = UINT16_MAX;
int32_t x434 = INT32_MIN;
static int64_t x438 = INT64_MAX;
static int16_t x463 = INT16_MIN;
int32_t x493 = INT32_MAX;
volatile int32_t t58 = INT32_MAX;
volatile int32_t t59 = -650890;
static int32_t x510 = 2576679;
volatile int32_t x522 = -11930;
uint16_t x543 = 6234U;
static int16_t x544 = 0;
uint32_t x552 = UINT32_MAX;
uint32_t x554 = 771U;
uint32_t x564 = 186055U;
int64_t x573 = INT64_MAX;
volatile int64_t t69 = INT64_MAX;
int64_t x587 = INT64_MAX;
uint32_t x620 = 0U;
int64_t x625 = 102LL;
static int32_t x629 = 1;
int8_t x632 = -1;
static volatile uint16_t x640 = 639U;
int8_t x653 = INT8_MAX;
volatile int32_t t81 = 806;
int16_t x664 = -12387;
uint32_t x669 = 3303608U;
uint64_t x670 = 130319463974741827LLU;
static volatile int32_t x671 = -1;
static int64_t x709 = INT64_MAX;
volatile uint64_t t87 = 85162540745109788LLU;
volatile int8_t x731 = -3;
int16_t x776 = 3863;
volatile int32_t t92 = -114395;
static uint64_t t94 = UINT64_MAX;
volatile int16_t x792 = INT16_MIN;
int32_t x801 = INT32_MAX;
static uint8_t x802 = UINT8_MAX;
uint8_t x804 = 15U;
volatile int32_t t97 = INT32_MAX;
int64_t x813 = INT64_MAX;


void f0(void) {
	int64_t x3 = -71568638088LL;
	volatile int64_t x4 = 2363146876576LL;
	volatile uint64_t t0 = 2200150099134036061LLU;

	t0 = (x1>>(x2==(x3+x4)));

	if (t0 != 127436871190823LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 2U;
	int8_t x7 = INT8_MIN;
	volatile uint64_t x8 = UINT64_MAX;

	t1 = (x5>>(x6==(x7+x8)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	int32_t x14 = -1;
	uint32_t x15 = 393U;
	volatile int32_t t2 = -442;

	t2 = (x13>>(x14==(x15+x16)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x45 = 10871;
	static int16_t x46 = -1;
	static int8_t x47 = INT8_MAX;
	int8_t x48 = -2;

	t3 = (x45>>(x46==(x47+x48)));

	if (t3 != 10871) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x57 = INT16_MAX;
	int8_t x59 = INT8_MAX;
	volatile int16_t x60 = INT16_MIN;

	t4 = (x57>>(x58==(x59+x60)));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x61 = 321U;
	static int8_t x62 = -25;
	int32_t x63 = INT32_MAX;
	uint32_t x64 = UINT32_MAX;
	int32_t t5 = -379693468;

	t5 = (x61>>(x62==(x63+x64)));

	if (t5 != 321) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x65 = INT64_MAX;
	static int8_t x66 = -1;
	int8_t x67 = 18;
	volatile uint8_t x68 = 53U;

	t6 = (x65>>(x66==(x67+x68)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x73 = 13U;
	static int32_t x76 = 1;
	int32_t t7 = 40414;

	t7 = (x73>>(x74==(x75+x76)));

	if (t7 != 13) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x77 = INT8_MAX;
	int8_t x78 = 21;
	int32_t x79 = -40017;

	t8 = (x77>>(x78==(x79+x80)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x89 = UINT8_MAX;
	volatile uint64_t x91 = 48284LLU;
	uint16_t x92 = 2U;
	volatile int32_t t9 = 441508326;

	t9 = (x89>>(x90==(x91+x92)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x96 = 1176LLU;
	static int32_t t10 = -332;

	t10 = (x93>>(x94==(x95+x96)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x109 = INT32_MAX;
	static volatile uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MAX;
	int16_t x112 = 187;

	t11 = (x109>>(x110==(x111+x112)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x114 = 2062;
	static volatile uint16_t x115 = 1367U;
	uint64_t x116 = UINT64_MAX;

	t12 = (x113>>(x114==(x115+x116)));

	if (t12 != 27058671880LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x117 = 7;
	int16_t x119 = -1;
	static int16_t x120 = -1;
	int32_t t13 = -1415690;

	t13 = (x117>>(x118==(x119+x120)));

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x125 = 7918;
	int16_t x127 = 668;

	t14 = (x125>>(x126==(x127+x128)));

	if (t14 != 7918) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x133 = UINT32_MAX;
	uint16_t x134 = 1914U;
	uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 1902893293U;
	uint32_t t15 = UINT32_MAX;

	t15 = (x133>>(x134==(x135+x136)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x145 = 2005U;
	uint64_t x146 = 43227LLU;
	uint16_t x147 = 193U;
	static int32_t t16 = 139229;

	t16 = (x145>>(x146==(x147+x148)));

	if (t16 != 2005) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x149 = 1;
	volatile uint64_t x150 = UINT64_MAX;
	int16_t x151 = 1;
	int32_t x152 = -1;
	static int32_t t17 = 574287286;

	t17 = (x149>>(x150==(x151+x152)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x153 = 5273U;
	uint16_t x154 = UINT16_MAX;
	int8_t x156 = -1;
	volatile uint32_t t18 = 59U;

	t18 = (x153>>(x154==(x155+x156)));

	if (t18 != 5273U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x161 = UINT32_MAX;
	uint32_t x162 = 2185293U;
	int32_t x163 = -16;
	uint16_t x164 = 7728U;
	uint32_t t19 = UINT32_MAX;

	t19 = (x161>>(x162==(x163+x164)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x177 = 6;
	int16_t x178 = -25;
	int32_t x179 = -1;
	volatile uint16_t x180 = 767U;
	volatile int32_t t20 = -331463;

	t20 = (x177>>(x178==(x179+x180)));

	if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x182 = -2049225569479788777LL;
	volatile uint16_t x183 = 38U;
	uint32_t x184 = UINT32_MAX;

	t21 = (x181>>(x182==(x183+x184)));

	if (t21 != 9) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x189 = 5054356U;
	int32_t x190 = INT32_MIN;
	volatile uint32_t t22 = 1326672U;

	t22 = (x189>>(x190==(x191+x192)));

	if (t22 != 5054356U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x205 = INT16_MAX;
	volatile int8_t x206 = -10;
	volatile int16_t x207 = INT16_MIN;
	volatile int64_t x208 = -135762230LL;

	t23 = (x205>>(x206==(x207+x208)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x210 = INT8_MAX;
	static uint32_t x211 = 1384U;
	uint64_t x212 = 9988338LLU;
	int32_t t24 = -1;

	t24 = (x209>>(x210==(x211+x212)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x213 = 124U;
	int8_t x214 = INT8_MIN;
	uint32_t x216 = 242552129U;
	uint32_t t25 = 1259U;

	t25 = (x213>>(x214==(x215+x216)));

	if (t25 != 124U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x217 = INT32_MAX;
	uint16_t x218 = 0U;
	volatile int32_t x219 = INT32_MIN;
	static uint64_t x220 = 183LLU;
	volatile int32_t t26 = INT32_MAX;

	t26 = (x217>>(x218==(x219+x220)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x233 = UINT16_MAX;
	volatile uint64_t x234 = 4645293478072LLU;
	static int8_t x235 = INT8_MIN;
	static volatile int64_t x236 = -1LL;
	volatile int32_t t27 = 1;

	t27 = (x233>>(x234==(x235+x236)));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x241 = 328U;
	uint8_t x242 = 2U;
	volatile int8_t x243 = 1;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t28 = -33;

	t28 = (x241>>(x242==(x243+x244)));

	if (t28 != 328) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x250 = INT16_MIN;
	uint8_t x251 = 0U;
	uint16_t x252 = 3923U;
	int32_t t29 = 0;

	t29 = (x249>>(x250==(x251+x252)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x253 = UINT8_MAX;
	int16_t x254 = 6;
	int16_t x255 = 7;
	static int8_t x256 = INT8_MAX;
	volatile int32_t t30 = 33;

	t30 = (x253>>(x254==(x255+x256)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	uint64_t t31 = UINT64_MAX;

	t31 = (x277>>(x278==(x279+x280)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x281 = 324895831073LLU;
	int8_t x283 = INT8_MIN;
	int8_t x284 = 46;
	volatile uint64_t t32 = 51000932710LLU;

	t32 = (x281>>(x282==(x283+x284)));

	if (t32 != 324895831073LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x285 = INT32_MAX;
	int16_t x286 = -1;
	int64_t x287 = -48874301320593313LL;
	int64_t x288 = INT64_MAX;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x285>>(x286==(x287+x288)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x294 = -1;
	uint32_t x295 = 1639420368U;

	t34 = (x293>>(x294==(x295+x296)));

	if (t34 != 1343) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x301 = 2037856139LLU;
	static int32_t x302 = INT32_MAX;
	int64_t x303 = INT64_MAX;
	uint64_t t35 = 1952926707LLU;

	t35 = (x301>>(x302==(x303+x304)));

	if (t35 != 2037856139LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x309 = 1;
	static int32_t x311 = -47;
	volatile int32_t t36 = 438978466;

	t36 = (x309>>(x310==(x311+x312)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x314 = INT64_MAX;
	volatile uint8_t x315 = 5U;
	int16_t x316 = INT16_MIN;
	int32_t t37 = -33;

	t37 = (x313>>(x314==(x315+x316)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x318 = 57;
	uint32_t x319 = UINT32_MAX;
	static int8_t x320 = -1;
	int32_t t38 = -3780;

	t38 = (x317>>(x318==(x319+x320)));

	if (t38 != 21) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	volatile int16_t x324 = -5334;
	static int32_t t39 = 257361;

	t39 = (x321>>(x322==(x323+x324)));

	if (t39 != 46) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x333 = UINT8_MAX;
	uint8_t x335 = UINT8_MAX;
	uint32_t x336 = UINT32_MAX;
	static int32_t t40 = -126173371;

	t40 = (x333>>(x334==(x335+x336)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x337 = UINT8_MAX;
	int64_t x338 = -1180597LL;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 22556128660752916LLU;
	static volatile int32_t t41 = 1138120;

	t41 = (x337>>(x338==(x339+x340)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x349 = 465114613U;
	uint64_t x350 = 433954896689LLU;
	static uint64_t x351 = 1204826LLU;
	uint64_t x352 = 1900844479073313LLU;

	t42 = (x349>>(x350==(x351+x352)));

	if (t42 != 465114613U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x357 = UINT8_MAX;
	volatile uint8_t x359 = 68U;
	uint64_t x360 = UINT64_MAX;

	t43 = (x357>>(x358==(x359+x360)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x365 = 5U;
	static volatile int32_t x366 = -1;
	volatile int32_t t44 = -155835;

	t44 = (x365>>(x366==(x367+x368)));

	if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x373 = 3U;
	int16_t x374 = -1;
	int64_t x375 = -1LL;
	int32_t t45 = -469;

	t45 = (x373>>(x374==(x375+x376)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x397 = INT32_MAX;
	static int8_t x398 = INT8_MIN;
	int64_t x399 = 8125082461474LL;
	uint32_t x400 = 1U;

	t46 = (x397>>(x398==(x399+x400)));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x401 = UINT16_MAX;
	static int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MAX;
	int32_t t47 = -655119;

	t47 = (x401>>(x402==(x403+x404)));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MAX;
	int32_t x412 = 45582;

	t48 = (x409>>(x410==(x411+x412)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x413 = 1321U;
	int8_t x414 = INT8_MIN;
	volatile int16_t x415 = 17;
	static volatile int32_t t49 = 22011;

	t49 = (x413>>(x414==(x415+x416)));

	if (t49 != 1321) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x426 = INT8_MIN;
	volatile int64_t x427 = -92LL;
	volatile int32_t x428 = 274;
	int32_t t50 = 0;

	t50 = (x425>>(x426==(x427+x428)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x433 = 13778839U;
	int32_t x435 = 663;
	int32_t x436 = INT32_MIN;
	static uint32_t t51 = 29U;

	t51 = (x433>>(x434==(x435+x436)));

	if (t51 != 13778839U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x437 = 3U;
	volatile int64_t x439 = 10975206LL;
	int8_t x440 = 1;
	int32_t t52 = -1995;

	t52 = (x437>>(x438==(x439+x440)));

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x461 = 2746868303027775745LLU;
	int64_t x462 = INT64_MAX;
	int16_t x464 = -262;
	uint64_t t53 = 109575378883636770LLU;

	t53 = (x461>>(x462==(x463+x464)));

	if (t53 != 2746868303027775745LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x465 = 6023650115LLU;
	volatile int64_t x466 = -573430437936494863LL;
	volatile int8_t x467 = INT8_MAX;
	int16_t x468 = INT16_MIN;
	volatile uint64_t t54 = 934961232072526404LLU;

	t54 = (x465>>(x466==(x467+x468)));

	if (t54 != 6023650115LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x469 = UINT16_MAX;
	static volatile int8_t x470 = -13;
	int8_t x471 = INT8_MIN;
	int8_t x472 = INT8_MIN;
	int32_t t55 = -3043519;

	t55 = (x469>>(x470==(x471+x472)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x477 = 5U;
	int16_t x478 = INT16_MIN;
	static int16_t x479 = INT16_MIN;
	static int64_t x480 = INT64_MAX;
	static volatile int32_t t56 = 4359982;

	t56 = (x477>>(x478==(x479+x480)));

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x485 = 16274U;
	volatile int32_t x486 = -51;
	uint8_t x487 = UINT8_MAX;
	static int32_t x488 = INT32_MIN;
	uint32_t t57 = 233495U;

	t57 = (x485>>(x486==(x487+x488)));

	if (t57 != 16274U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x494 = 15806LLU;
	uint8_t x495 = UINT8_MAX;
	static volatile uint64_t x496 = UINT64_MAX;

	t58 = (x493>>(x494==(x495+x496)));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x501 = UINT8_MAX;
	int16_t x502 = INT16_MIN;
	volatile uint16_t x503 = UINT16_MAX;
	uint64_t x504 = UINT64_MAX;

	t59 = (x501>>(x502==(x503+x504)));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x509 = 0;
	volatile uint32_t x511 = 233438U;
	int64_t x512 = -1LL;
	volatile int32_t t60 = -447125;

	t60 = (x509>>(x510==(x511+x512)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x513 = UINT16_MAX;
	int8_t x514 = INT8_MAX;
	uint64_t x515 = UINT64_MAX;
	volatile uint64_t x516 = UINT64_MAX;
	int32_t t61 = 6802719;

	t61 = (x513>>(x514==(x515+x516)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x521 = 5818522;
	int8_t x523 = INT8_MAX;
	volatile int32_t x524 = INT32_MIN;
	volatile int32_t t62 = 0;

	t62 = (x521>>(x522==(x523+x524)));

	if (t62 != 5818522) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x525 = 4198444732468854LLU;
	static uint16_t x526 = 12029U;
	uint16_t x527 = UINT16_MAX;
	int32_t x528 = -1;
	uint64_t t63 = 4678152424976LLU;

	t63 = (x525>>(x526==(x527+x528)));

	if (t63 != 4198444732468854LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x537 = 0;
	int8_t x538 = -4;
	static volatile int32_t x539 = INT32_MAX;
	static int32_t x540 = INT32_MIN;
	volatile int32_t t64 = 1;

	t64 = (x537>>(x538==(x539+x540)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x541 = 15U;
	int16_t x542 = INT16_MIN;
	uint32_t t65 = 342252453U;

	t65 = (x541>>(x542==(x543+x544)));

	if (t65 != 15U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x549 = INT64_MAX;
	volatile int32_t x550 = -1;
	int32_t x551 = -523792679;
	int64_t t66 = INT64_MAX;

	t66 = (x549>>(x550==(x551+x552)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x553 = INT32_MAX;
	volatile int8_t x555 = -1;
	volatile int32_t x556 = INT32_MAX;
	int32_t t67 = INT32_MAX;

	t67 = (x553>>(x554==(x555+x556)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x561 = 8733014285253LLU;
	uint16_t x562 = 1U;
	int16_t x563 = 929;
	volatile uint64_t t68 = 53496467357806LLU;

	t68 = (x561>>(x562==(x563+x564)));

	if (t68 != 8733014285253LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x574 = -1;
	int16_t x575 = -1;
	static int16_t x576 = -1;

	t69 = (x573>>(x574==(x575+x576)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x577 = UINT64_MAX;
	static int64_t x578 = -1LL;
	uint32_t x579 = UINT32_MAX;
	uint16_t x580 = 0U;
	uint64_t t70 = UINT64_MAX;

	t70 = (x577>>(x578==(x579+x580)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x585 = 2U;
	uint16_t x586 = 19526U;
	int32_t x588 = INT32_MIN;
	static int32_t t71 = -17480674;

	t71 = (x585>>(x586==(x587+x588)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x605 = 17U;
	uint64_t x606 = 6833LLU;
	int16_t x607 = 2091;
	uint16_t x608 = 107U;
	static volatile uint32_t t72 = 41136U;

	t72 = (x605>>(x606==(x607+x608)));

	if (t72 != 17U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x613 = INT32_MAX;
	int16_t x614 = -1;
	int64_t x615 = INT64_MIN;
	int8_t x616 = INT8_MAX;
	volatile int32_t t73 = INT32_MAX;

	t73 = (x613>>(x614==(x615+x616)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x617 = INT16_MAX;
	uint8_t x618 = 2U;
	int16_t x619 = INT16_MIN;
	int32_t t74 = -5986;

	t74 = (x617>>(x618==(x619+x620)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x626 = 197446LL;
	int16_t x627 = -1;
	uint8_t x628 = 5U;
	int64_t t75 = -526311358685436516LL;

	t75 = (x625>>(x626==(x627+x628)));

	if (t75 != 102LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x630 = 94U;
	int32_t x631 = 497516;
	static volatile int32_t t76 = -338739775;

	t76 = (x629>>(x630==(x631+x632)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x633 = INT64_MAX;
	static int64_t x634 = INT64_MAX;
	uint32_t x635 = 9975U;
	int64_t x636 = INT64_MIN;
	int64_t t77 = INT64_MAX;

	t77 = (x633>>(x634==(x635+x636)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x637 = 0;
	volatile int16_t x638 = -1;
	int16_t x639 = -1;
	volatile int32_t t78 = 61;

	t78 = (x637>>(x638==(x639+x640)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x641 = 64359390633990395LL;
	uint16_t x642 = 46U;
	uint32_t x643 = 7647418U;
	volatile uint8_t x644 = 17U;
	int64_t t79 = 1611418LL;

	t79 = (x641>>(x642==(x643+x644)));

	if (t79 != 64359390633990395LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x654 = -1LL;
	int64_t x655 = -7328842026167010LL;
	uint32_t x656 = UINT32_MAX;
	int32_t t80 = -15;

	t80 = (x653>>(x654==(x655+x656)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x657 = 3720;
	uint32_t x658 = 3U;
	static int8_t x659 = INT8_MIN;
	int8_t x660 = INT8_MIN;

	t81 = (x657>>(x658==(x659+x660)));

	if (t81 != 3720) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x661 = 32U;
	volatile int16_t x662 = INT16_MIN;
	volatile int32_t x663 = -1;
	int32_t t82 = 107199914;

	t82 = (x661>>(x662==(x663+x664)));

	if (t82 != 32) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x665 = 1470U;
	int32_t x666 = 1;
	volatile int32_t x667 = -59609;
	uint64_t x668 = 55098LLU;
	uint32_t t83 = 1435100U;

	t83 = (x665>>(x666==(x667+x668)));

	if (t83 != 1470U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x672 = INT8_MIN;
	volatile uint32_t t84 = 93U;

	t84 = (x669>>(x670==(x671+x672)));

	if (t84 != 3303608U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x705 = 113299563U;
	static volatile int32_t x706 = -1;
	volatile uint8_t x707 = 1U;
	int64_t x708 = INT64_MIN;
	volatile uint32_t t85 = 270200567U;

	t85 = (x705>>(x706==(x707+x708)));

	if (t85 != 113299563U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x710 = 478193LLU;
	int64_t x711 = INT64_MIN;
	static uint64_t x712 = UINT64_MAX;
	int64_t t86 = INT64_MAX;

	t86 = (x709>>(x710==(x711+x712)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x717 = 57LLU;
	volatile uint8_t x718 = UINT8_MAX;
	static int8_t x719 = 1;
	int32_t x720 = -52875;

	t87 = (x717>>(x718==(x719+x720)));

	if (t87 != 57LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x725 = UINT32_MAX;
	volatile int8_t x726 = INT8_MIN;
	int8_t x727 = -1;
	uint32_t x728 = 932U;
	static uint32_t t88 = UINT32_MAX;

	t88 = (x725>>(x726==(x727+x728)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x729 = 10U;
	static uint8_t x730 = UINT8_MAX;
	volatile int32_t x732 = 16093;
	volatile int32_t t89 = 249;

	t89 = (x729>>(x730==(x731+x732)));

	if (t89 != 10) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x749 = 196678740U;
	static int32_t x750 = INT32_MIN;
	int8_t x751 = -1;
	int8_t x752 = 1;
	uint32_t t90 = 181161929U;

	t90 = (x749>>(x750==(x751+x752)));

	if (t90 != 196678740U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x757 = 7U;
	int16_t x758 = -2;
	uint16_t x759 = UINT16_MAX;
	int64_t x760 = -3259100000LL;
	static int32_t t91 = 29;

	t91 = (x757>>(x758==(x759+x760)));

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x773 = UINT8_MAX;
	uint32_t x774 = UINT32_MAX;
	int8_t x775 = INT8_MIN;

	t92 = (x773>>(x774==(x775+x776)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x777 = 7705U;
	int8_t x778 = INT8_MAX;
	int8_t x779 = INT8_MIN;
	int16_t x780 = INT16_MIN;
	int32_t t93 = 14162;

	t93 = (x777>>(x778==(x779+x780)));

	if (t93 != 7705) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x785 = UINT64_MAX;
	volatile int8_t x786 = INT8_MIN;
	uint32_t x787 = 372651596U;
	int32_t x788 = INT32_MIN;

	t94 = (x785>>(x786==(x787+x788)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x789 = 434U;
	int64_t x790 = -102205149080114LL;
	uint16_t x791 = UINT16_MAX;
	volatile int32_t t95 = 499;

	t95 = (x789>>(x790==(x791+x792)));

	if (t95 != 434) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x797 = 127U;
	int16_t x798 = -1;
	uint16_t x799 = 386U;
	uint64_t x800 = 1092421877083700LLU;
	int32_t t96 = -305881937;

	t96 = (x797>>(x798==(x799+x800)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x803 = 4;

	t97 = (x801>>(x802==(x803+x804)));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x809 = INT8_MAX;
	volatile uint64_t x810 = 63473202LLU;
	static volatile int16_t x811 = INT16_MIN;
	volatile int64_t x812 = -1LL;
	volatile int32_t t98 = 220162;

	t98 = (x809>>(x810==(x811+x812)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x814 = INT32_MIN;
	volatile int16_t x815 = -702;
	volatile uint32_t x816 = UINT32_MAX;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x813>>(x814==(x815+x816)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

