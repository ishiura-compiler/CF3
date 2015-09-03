#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
volatile uint32_t t1 = 7665437U;
uint16_t x21 = 9U;
int32_t x23 = INT32_MAX;
int32_t x24 = INT32_MIN;
static volatile uint16_t x27 = UINT16_MAX;
volatile int32_t t4 = -2253;
int16_t x52 = 0;
volatile int32_t t7 = -480793;
uint32_t x56 = 4060463U;
int64_t x79 = INT64_MIN;
int8_t x91 = -1;
volatile int64_t x108 = INT64_MAX;
static uint32_t t15 = 212U;
uint64_t x124 = 157596616070488LLU;
static uint16_t x133 = 20194U;
volatile uint64_t x151 = UINT64_MAX;
int16_t x173 = 14777;
uint16_t x174 = 27U;
uint16_t x187 = 14U;
volatile int32_t t25 = 7618695;
uint64_t x204 = 42109848LLU;
static int8_t x205 = INT8_MAX;
volatile int32_t t29 = 59;
volatile uint32_t x228 = UINT32_MAX;
uint64_t x235 = 12510256LLU;
int64_t x242 = INT64_MAX;
int64_t t32 = -188830499699917154LL;
uint16_t x263 = 1078U;
uint32_t x271 = 344529423U;
int8_t x276 = INT8_MAX;
int32_t x291 = INT32_MAX;
volatile uint32_t x295 = 181U;
int16_t x299 = INT16_MAX;
volatile int64_t t39 = 10487754468LL;
int64_t x317 = -1513504204366070LL;
int64_t t42 = -140003LL;
int64_t t43 = -2274303842762841198LL;
int8_t x354 = INT8_MAX;
static int8_t x355 = INT8_MAX;
volatile int32_t x364 = -971;
int8_t x377 = -3;
int16_t x378 = INT16_MAX;
static volatile int16_t x381 = INT16_MIN;
int64_t x382 = INT64_MAX;
uint16_t x419 = UINT16_MAX;
uint16_t x420 = UINT16_MAX;
int64_t x435 = INT64_MAX;
int64_t t59 = -3291302278180731LL;
int16_t x439 = -7;
int64_t x456 = 100481627479471048LL;
int32_t t61 = 414842;
volatile int32_t x464 = -1;
int64_t t64 = -15445557823579LL;
volatile int64_t t65 = 142703LL;
static uint32_t x476 = 2089370810U;
volatile int32_t x480 = 91745450;
int64_t x481 = -332988LL;
int64_t x484 = INT64_MAX;
volatile int64_t t68 = 4892447445316LL;
uint32_t x485 = UINT32_MAX;
static int32_t x494 = INT32_MAX;
int32_t x495 = INT32_MIN;
uint32_t x496 = UINT32_MAX;
int8_t x499 = -1;
volatile uint64_t t71 = 5449725LLU;
uint16_t x502 = 11U;
uint32_t x503 = 7U;
volatile int32_t t72 = 385;
volatile int8_t x508 = INT8_MIN;
static volatile uint64_t t73 = 848LLU;
static uint16_t x515 = 187U;
uint16_t x526 = UINT16_MAX;
uint16_t x554 = 1162U;
uint16_t x563 = 850U;
uint64_t x564 = 3743377122803LLU;
volatile int64_t t77 = -1349211657LL;
uint32_t x577 = 52825557U;
uint16_t x578 = 2796U;
int16_t x581 = 4547;
int64_t x582 = 180475521LL;
int8_t x585 = -14;
uint8_t x588 = 53U;
static int32_t x601 = INT32_MIN;
uint64_t x602 = 1755LLU;
volatile uint64_t x613 = 828LLU;
int16_t x616 = 0;
int32_t x636 = INT32_MAX;
volatile int64_t t88 = -225522802414LL;
volatile int64_t x652 = 14667896LL;
static int64_t x659 = INT64_MIN;
static int8_t x661 = 0;
static volatile int8_t x664 = INT8_MIN;
volatile int32_t t92 = -599;
volatile uint32_t t94 = 105222U;
uint16_t x693 = 475U;
volatile uint64_t x696 = 11819075LLU;
static int16_t x703 = -764;
int64_t x716 = -1LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile int8_t x2 = 7;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -272;

	t0 = (x1/(x2>>(x3<x4)));

	if (t0 != -4681) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x7 = 15;
	int8_t x8 = -1;

	t1 = (x5/(x6>>(x7<x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = 49LL;
	int8_t x18 = INT8_MAX;
	int32_t x19 = INT32_MIN;
	static int16_t x20 = INT16_MIN;
	int64_t t2 = 882233540350LL;

	t2 = (x17/(x18>>(x19<x20)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x22 = UINT16_MAX;
	int32_t t3 = -2;

	t3 = (x21/(x22>>(x23<x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = -32;
	static volatile int16_t x26 = INT16_MAX;
	volatile int64_t x28 = -318041654396794063LL;

	t4 = (x25/(x26>>(x27<x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = 62LLU;
	uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	static int8_t x36 = INT8_MAX;
	volatile uint64_t t5 = 6662030440792026LLU;

	t5 = (x33/(x34>>(x35<x36)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x41 = 308U;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = -1;
	uint32_t x44 = 671937U;
	static volatile int32_t t6 = 884819;

	t6 = (x41/(x42>>(x43<x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int32_t x50 = 22;
	volatile uint8_t x51 = 1U;

	t7 = (x49/(x50>>(x51<x52)));

	if (t7 != 11) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MIN;
	static int64_t x54 = 23964334552224714LL;
	static volatile int16_t x55 = INT16_MAX;
	volatile int64_t t8 = -63468639218921LL;

	t8 = (x53/(x54>>(x55<x56)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MAX;
	int16_t x62 = 12369;
	int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MIN;
	volatile int32_t t9 = 789;

	t9 = (x61/(x62>>(x63<x64)));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	int16_t x75 = 502;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int64_t t10 = 475167133532217307LL;

	t10 = (x73/(x74>>(x75<x76)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x77 = INT32_MAX;
	uint16_t x78 = 21U;
	volatile uint64_t x80 = UINT64_MAX;
	static volatile int32_t t11 = 52119002;

	t11 = (x77/(x78>>(x79<x80)));

	if (t11 != 214748364) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x89 = 1642LL;
	int8_t x90 = INT8_MAX;
	volatile int16_t x92 = INT16_MIN;
	int64_t t12 = 21191LL;

	t12 = (x89/(x90>>(x91<x92)));

	if (t12 != 12LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MAX;
	uint8_t x99 = 8U;
	volatile int32_t x100 = INT32_MIN;
	static volatile uint32_t t13 = 3298U;

	t13 = (x97/(x98>>(x99<x100)));

	if (t13 != 131076U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x105 = UINT8_MAX;
	uint8_t x106 = UINT8_MAX;
	static int64_t x107 = -1LL;
	volatile int32_t t14 = -433651;

	t14 = (x105/(x106>>(x107<x108)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x109 = INT32_MIN;
	uint32_t x110 = 2021659U;
	int32_t x111 = -225920;
	volatile int16_t x112 = INT16_MIN;

	t15 = (x109/(x110>>(x111<x112)));

	if (t15 != 2124U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x121 = INT64_MIN;
	uint8_t x122 = UINT8_MAX;
	static uint16_t x123 = UINT16_MAX;
	int64_t t16 = 130529019015LL;

	t16 = (x121/(x122>>(x123<x124)));

	if (t16 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x129 = 13U;
	static int32_t x130 = 9382;
	static volatile uint8_t x131 = 25U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t17 = 3235;

	t17 = (x129/(x130>>(x131<x132)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x134 = UINT8_MAX;
	volatile uint16_t x135 = 3U;
	int16_t x136 = INT16_MIN;
	int32_t t18 = -97010867;

	t18 = (x133/(x134>>(x135<x136)));

	if (t18 != 79) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x149 = -2578LL;
	uint16_t x150 = 655U;
	volatile uint64_t x152 = 2857889LLU;
	volatile int64_t t19 = 424253LL;

	t19 = (x149/(x150>>(x151<x152)));

	if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x165 = UINT32_MAX;
	volatile uint8_t x166 = 1U;
	int16_t x167 = INT16_MAX;
	int8_t x168 = -3;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x165/(x166>>(x167<x168)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x169 = -2;
	uint8_t x170 = 2U;
	volatile uint16_t x171 = UINT16_MAX;
	volatile uint64_t x172 = 7242881868550LLU;
	volatile int32_t t21 = -480818;

	t21 = (x169/(x170>>(x171<x172)));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x175 = UINT16_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t22 = -1;

	t22 = (x173/(x174>>(x175<x176)));

	if (t22 != 1136) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x177 = -1;
	static volatile uint32_t x178 = UINT32_MAX;
	int8_t x179 = -1;
	int32_t x180 = INT32_MIN;
	uint32_t t23 = 599U;

	t23 = (x177/(x178>>(x179<x180)));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x185 = -122420484035LL;
	int64_t x186 = 42993LL;
	int64_t x188 = INT64_MIN;
	volatile int64_t t24 = -3185167LL;

	t24 = (x185/(x186>>(x187<x188)));

	if (t24 != -2847451LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x189 = 5U;
	uint16_t x190 = 12699U;
	int16_t x191 = INT16_MIN;
	int32_t x192 = 42426574;

	t25 = (x189/(x190>>(x191<x192)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x197 = INT8_MIN;
	volatile uint16_t x198 = 102U;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;
	int32_t t26 = 0;

	t26 = (x197/(x198>>(x199<x200)));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x201 = -736;
	uint32_t x202 = UINT32_MAX;
	static uint64_t x203 = 9457857011928LLU;
	static volatile uint32_t t27 = 1579826U;

	t27 = (x201/(x202>>(x203<x204)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 3523U;
	uint64_t x208 = UINT64_MAX;
	static volatile int32_t t28 = 1;

	t28 = (x205/(x206>>(x207<x208)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x221 = -3835;
	static uint8_t x222 = UINT8_MAX;
	static int16_t x223 = 472;
	int16_t x224 = INT16_MIN;

	t29 = (x221/(x222>>(x223<x224)));

	if (t29 != -15) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x225 = -1;
	int16_t x226 = 728;
	uint32_t x227 = 1703389645U;
	int32_t t30 = -1832;

	t30 = (x225/(x226>>(x227<x228)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x233 = -1;
	static volatile uint64_t x234 = 561287769211394609LLU;
	int8_t x236 = -1;
	volatile uint64_t t31 = 104537LLU;

	t31 = (x233/(x234>>(x235<x236)));

	if (t31 != 65LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x241 = -970;
	static uint16_t x243 = 1U;
	volatile int16_t x244 = INT16_MIN;

	t32 = (x241/(x242>>(x243<x244)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = 1U;
	static volatile uint64_t x251 = 25787657794112439LLU;
	volatile uint32_t x252 = 1854080115U;
	int32_t t33 = 1639243;

	t33 = (x249/(x250>>(x251<x252)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x261 = INT64_MAX;
	uint32_t x262 = UINT32_MAX;
	static volatile uint16_t x264 = 15913U;
	static int64_t t34 = -24627813504813LL;

	t34 = (x261/(x262>>(x263<x264)));

	if (t34 != 4294967298LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x269 = 0U;
	static uint16_t x270 = 1843U;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t35 = -8;

	t35 = (x269/(x270>>(x271<x272)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x273 = -11529111;
	uint8_t x274 = 50U;
	uint32_t x275 = UINT32_MAX;
	static int32_t t36 = 637;

	t36 = (x273/(x274>>(x275<x276)));

	if (t36 != -230582) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x289 = 24U;
	uint16_t x290 = 8U;
	volatile int16_t x292 = INT16_MAX;
	int32_t t37 = 365;

	t37 = (x289/(x290>>(x291<x292)));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x293 = -1;
	static uint8_t x294 = 25U;
	static volatile int64_t x296 = INT64_MIN;
	volatile int32_t t38 = -1013;

	t38 = (x293/(x294>>(x295<x296)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x297 = -1LL;
	int8_t x298 = INT8_MAX;
	static int8_t x300 = INT8_MIN;

	t39 = (x297/(x298>>(x299<x300)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = 4422U;
	int32_t x311 = INT32_MAX;
	int8_t x312 = 4;
	volatile uint32_t t40 = 371358U;

	t40 = (x309/(x310>>(x311<x312)));

	if (t40 != 971265U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x318 = 13467911348375107LLU;
	int32_t x319 = INT32_MIN;
	int8_t x320 = -11;
	static volatile uint64_t t41 = 1658665LLU;

	t41 = (x317/(x318>>(x319<x320)));

	if (t41 != 2739LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x321 = 5670;
	static int64_t x322 = INT64_MAX;
	uint32_t x323 = 331135U;
	int16_t x324 = INT16_MIN;

	t42 = (x321/(x322>>(x323<x324)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x333 = -1LL;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	int16_t x336 = 31;

	t43 = (x333/(x334>>(x335<x336)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x337 = -55;
	int32_t x338 = INT32_MAX;
	int16_t x339 = 868;
	uint64_t x340 = 36344LLU;
	volatile int32_t t44 = -78700;

	t44 = (x337/(x338>>(x339<x340)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x345 = -24557876985340LL;
	int16_t x346 = 7;
	uint8_t x347 = UINT8_MAX;
	uint8_t x348 = 58U;
	int64_t t45 = 30275727LL;

	t45 = (x345/(x346>>(x347<x348)));

	if (t45 != -3508268140762LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x353 = -1;
	int32_t x356 = -3;
	int32_t t46 = 17513;

	t46 = (x353/(x354>>(x355<x356)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x361 = INT64_MAX;
	static int32_t x362 = INT32_MAX;
	int32_t x363 = 228979860;
	int64_t t47 = -80LL;

	t47 = (x361/(x362>>(x363<x364)));

	if (t47 != 4294967298LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x365 = INT8_MIN;
	static volatile uint8_t x366 = UINT8_MAX;
	static uint8_t x367 = 94U;
	int8_t x368 = INT8_MIN;
	int32_t t48 = -899248745;

	t48 = (x365/(x366>>(x367<x368)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x373 = UINT8_MAX;
	static int8_t x374 = 54;
	static int64_t x375 = -3598035671560LL;
	int32_t x376 = -1238;
	int32_t t49 = 2589549;

	t49 = (x373/(x374>>(x375<x376)));

	if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x379 = INT8_MAX;
	uint16_t x380 = 5U;
	int32_t t50 = -2181410;

	t50 = (x377/(x378>>(x379<x380)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x383 = 1639723579U;
	int32_t x384 = INT32_MAX;
	static int64_t t51 = -294445193LL;

	t51 = (x381/(x382>>(x383<x384)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MAX;
	static volatile int64_t x387 = INT64_MIN;
	volatile int8_t x388 = -56;
	volatile int32_t t52 = 0;

	t52 = (x385/(x386>>(x387<x388)));

	if (t52 != -34087042) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x397 = INT16_MIN;
	volatile uint8_t x398 = UINT8_MAX;
	static int32_t x399 = -277;
	int32_t x400 = INT32_MAX;
	int32_t t53 = 18;

	t53 = (x397/(x398>>(x399<x400)));

	if (t53 != -258) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x401 = -1;
	int32_t x402 = 2770;
	int32_t x403 = -7166048;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t54 = -11040984;

	t54 = (x401/(x402>>(x403<x404)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x405 = -155;
	uint16_t x406 = 10U;
	volatile uint16_t x407 = 25U;
	int8_t x408 = 1;
	int32_t t55 = 116058706;

	t55 = (x405/(x406>>(x407<x408)));

	if (t55 != -15) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x413 = INT8_MIN;
	uint16_t x414 = 3U;
	int64_t x415 = -1LL;
	int32_t x416 = INT32_MIN;
	static volatile int32_t t56 = 197835;

	t56 = (x413/(x414>>(x415<x416)));

	if (t56 != -42) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x417 = 3U;
	volatile uint8_t x418 = 10U;
	int32_t t57 = 5;

	t57 = (x417/(x418>>(x419<x420)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x421 = 30;
	volatile uint64_t x422 = 1192LLU;
	int8_t x423 = INT8_MIN;
	static uint64_t x424 = 0LLU;
	uint64_t t58 = 17592812058152LLU;

	t58 = (x421/(x422>>(x423<x424)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x433 = 17264202LL;
	uint32_t x434 = 790763U;
	uint16_t x436 = UINT16_MAX;

	t59 = (x433/(x434>>(x435<x436)));

	if (t59 != 21LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x437 = 11973;
	uint8_t x438 = UINT8_MAX;
	int16_t x440 = 1;
	int32_t t60 = -33;

	t60 = (x437/(x438>>(x439<x440)));

	if (t60 != 94) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x453 = 330539164;
	int32_t x454 = 6179;
	int32_t x455 = INT32_MIN;

	t61 = (x453/(x454>>(x455<x456)));

	if (t61 != 107005) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x457 = 1607580301410052LLU;
	uint64_t x458 = UINT64_MAX;
	volatile int64_t x459 = INT64_MAX;
	int64_t x460 = 6720136LL;
	static volatile uint64_t t62 = 1LLU;

	t62 = (x457/(x458>>(x459<x460)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x461 = INT16_MIN;
	int32_t x462 = INT32_MAX;
	int32_t x463 = 111172039;
	volatile int32_t t63 = -13524;

	t63 = (x461/(x462>>(x463<x464)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x465 = INT64_MAX;
	int64_t x466 = INT64_MAX;
	int32_t x467 = INT32_MIN;
	volatile int8_t x468 = -1;

	t64 = (x465/(x466>>(x467<x468)));

	if (t64 != 2LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x469 = 0U;
	int64_t x470 = INT64_MAX;
	int64_t x471 = -1LL;
	int16_t x472 = 5776;

	t65 = (x469/(x470>>(x471<x472)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x473 = 3785452LLU;
	uint16_t x474 = UINT16_MAX;
	int32_t x475 = INT32_MIN;
	uint64_t t66 = 5773040141LLU;

	t66 = (x473/(x474>>(x475<x476)));

	if (t66 != 57LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x477 = INT16_MAX;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = INT8_MAX;
	volatile int32_t t67 = 1;

	t67 = (x477/(x478>>(x479<x480)));

	if (t67 != 258) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x482 = 576U;
	static uint64_t x483 = 2110522862LLU;

	t68 = (x481/(x482>>(x483<x484)));

	if (t68 != -1156LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x486 = 12047;
	int64_t x487 = -1LL;
	uint64_t x488 = 82311218LLU;
	static volatile uint32_t t69 = 6032187U;

	t69 = (x485/(x486>>(x487<x488)));

	if (t69 != 356517U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x493 = INT8_MIN;
	volatile int32_t t70 = -195570125;

	t70 = (x493/(x494>>(x495<x496)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x497 = INT16_MIN;
	uint64_t x498 = 3360174138972283LLU;
	static int64_t x500 = -107488124045LL;

	t71 = (x497/(x498>>(x499<x500)));

	if (t71 != 5489LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x501 = 87U;
	int8_t x504 = -35;

	t72 = (x501/(x502>>(x503<x504)));

	if (t72 != 17) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x505 = -31604358;
	volatile uint64_t x506 = UINT64_MAX;
	volatile uint16_t x507 = UINT16_MAX;

	t73 = (x505/(x506>>(x507<x508)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x513 = INT32_MIN;
	uint16_t x514 = 4U;
	int64_t x516 = INT64_MAX;
	volatile int32_t t74 = -834257;

	t74 = (x513/(x514>>(x515<x516)));

	if (t74 != -1073741824) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x525 = INT8_MAX;
	volatile int8_t x527 = -1;
	uint32_t x528 = 394U;
	volatile int32_t t75 = 0;

	t75 = (x525/(x526>>(x527<x528)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x553 = -1;
	int16_t x555 = 1;
	int32_t x556 = -227618;
	static int32_t t76 = 736;

	t76 = (x553/(x554>>(x555<x556)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x561 = INT64_MIN;
	int64_t x562 = 44038766654109LL;

	t77 = (x561/(x562>>(x563<x564)));

	if (t77 != -418875LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x565 = UINT8_MAX;
	uint32_t x566 = 116446167U;
	volatile int8_t x567 = INT8_MAX;
	volatile int64_t x568 = INT64_MIN;
	uint32_t t78 = 40U;

	t78 = (x565/(x566>>(x567<x568)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x569 = INT16_MAX;
	int16_t x570 = INT16_MAX;
	volatile int16_t x571 = INT16_MAX;
	uint16_t x572 = 0U;
	volatile int32_t t79 = 10741542;

	t79 = (x569/(x570>>(x571<x572)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x579 = -1LL;
	int8_t x580 = INT8_MIN;
	uint32_t t80 = 2U;

	t80 = (x577/(x578>>(x579<x580)));

	if (t80 != 18893U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x583 = 221246405329709551LLU;
	static int32_t x584 = -1;
	volatile int64_t t81 = 3913920879LL;

	t81 = (x581/(x582>>(x583<x584)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x586 = INT8_MAX;
	uint8_t x587 = 12U;
	volatile int32_t t82 = -23;

	t82 = (x585/(x586>>(x587<x588)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x593 = 795;
	uint8_t x594 = 30U;
	int32_t x595 = INT32_MAX;
	static int8_t x596 = 0;
	volatile int32_t t83 = 49;

	t83 = (x593/(x594>>(x595<x596)));

	if (t83 != 26) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x597 = -1LL;
	static volatile uint8_t x598 = 3U;
	static int64_t x599 = INT64_MAX;
	volatile int64_t x600 = INT64_MIN;
	volatile int64_t t84 = 3827LL;

	t84 = (x597/(x598>>(x599<x600)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x603 = 114176LL;
	volatile uint8_t x604 = UINT8_MAX;
	static uint64_t t85 = 47974030LLU;

	t85 = (x601/(x602>>(x603<x604)));

	if (t85 != 10510965282941349LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x614 = INT64_MAX;
	volatile int8_t x615 = -2;
	volatile uint64_t t86 = 1679983529522LLU;

	t86 = (x613/(x614>>(x615<x616)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x625 = 527392301374320LL;
	uint32_t x626 = UINT32_MAX;
	uint8_t x627 = 0U;
	static uint8_t x628 = 53U;
	volatile int64_t t87 = 127LL;

	t87 = (x625/(x626>>(x627<x628)));

	if (t87 != 245586LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x633 = 673509985221825LL;
	int16_t x634 = INT16_MAX;
	volatile int64_t x635 = INT64_MIN;

	t88 = (x633/(x634>>(x635<x636)));

	if (t88 != 41110296357LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x645 = INT8_MIN;
	uint16_t x646 = UINT16_MAX;
	int64_t x647 = INT64_MAX;
	int16_t x648 = INT16_MIN;
	int32_t t89 = -1;

	t89 = (x645/(x646>>(x647<x648)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x649 = INT16_MIN;
	static volatile int8_t x650 = 3;
	static uint32_t x651 = 141U;
	volatile int32_t t90 = 1;

	t90 = (x649/(x650>>(x651<x652)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x657 = INT32_MIN;
	int64_t x658 = INT64_MAX;
	static volatile int32_t x660 = 10825;
	int64_t t91 = 351034403480796653LL;

	t91 = (x657/(x658>>(x659<x660)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x662 = 118U;
	static int64_t x663 = -1LL;

	t92 = (x661/(x662>>(x663<x664)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x665 = INT8_MIN;
	static uint8_t x666 = 1U;
	static volatile uint64_t x667 = 1563LLU;
	uint8_t x668 = 58U;
	volatile int32_t t93 = -1560;

	t93 = (x665/(x666>>(x667<x668)));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x673 = 7;
	uint32_t x674 = UINT32_MAX;
	static int16_t x675 = INT16_MAX;
	volatile uint16_t x676 = UINT16_MAX;

	t94 = (x673/(x674>>(x675<x676)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x689 = 5539142U;
	uint32_t x690 = UINT32_MAX;
	static int16_t x691 = -81;
	int32_t x692 = INT32_MIN;
	static uint32_t t95 = 2U;

	t95 = (x689/(x690>>(x691<x692)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x694 = 3;
	volatile int16_t x695 = INT16_MIN;
	int32_t t96 = 750136293;

	t96 = (x693/(x694>>(x695<x696)));

	if (t96 != 158) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x701 = -1;
	static int16_t x702 = INT16_MAX;
	uint64_t x704 = 154604553LLU;
	int32_t t97 = 85;

	t97 = (x701/(x702>>(x703<x704)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x705 = 23260612U;
	int16_t x706 = 532;
	volatile int64_t x707 = INT64_MIN;
	uint16_t x708 = UINT16_MAX;
	static uint32_t t98 = 639466U;

	t98 = (x705/(x706>>(x707<x708)));

	if (t98 != 87445U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x713 = INT64_MIN;
	static uint16_t x714 = 6491U;
	volatile uint32_t x715 = 131067U;
	volatile int64_t t99 = 2045LL;

	t99 = (x713/(x714>>(x715<x716)));

	if (t99 != -1420947779518529LL) { NG(); } else { ; }
	
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

