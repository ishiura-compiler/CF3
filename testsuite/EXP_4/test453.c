#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t2 = -1254;
volatile int64_t t3 = 197LL;
int32_t x22 = 6;
uint32_t x28 = UINT32_MAX;
int64_t x33 = INT64_MIN;
static int16_t x34 = -525;
int16_t x36 = INT16_MIN;
int32_t t8 = -39923876;
static int8_t x48 = 1;
uint32_t x51 = UINT32_MAX;
static int32_t t10 = -252;
volatile uint8_t x58 = UINT8_MAX;
static int32_t t11 = -127267143;
volatile int8_t x85 = -27;
int16_t x94 = 3;
int32_t x95 = INT32_MAX;
int16_t x99 = INT16_MIN;
uint32_t x109 = UINT32_MAX;
static volatile uint8_t x111 = 10U;
volatile int32_t x112 = -37669053;
static volatile uint32_t t19 = 174U;
uint64_t x115 = UINT64_MAX;
int32_t x116 = -1;
int8_t x121 = INT8_MIN;
static volatile int8_t x124 = 0;
uint64_t x140 = 90760964475857479LLU;
int64_t t23 = 460853043009LL;
static int64_t x146 = INT64_MAX;
int8_t x149 = INT8_MIN;
volatile int32_t t25 = 364734761;
volatile int64_t x167 = 134253988543LL;
uint64_t x175 = 1117323LLU;
int8_t x192 = 0;
int32_t x203 = -1;
int32_t t33 = 38;
volatile int8_t x212 = -1;
int32_t t35 = -43;
int16_t x229 = -1;
static int64_t x234 = INT64_MIN;
int32_t x235 = INT32_MIN;
volatile uint64_t x238 = 2520563LLU;
int32_t t40 = 71;
static volatile uint8_t x259 = 0U;
static int32_t t44 = -4877886;
volatile int32_t x269 = INT32_MAX;
static volatile int16_t x279 = INT16_MIN;
int64_t x282 = -1LL;
int32_t t48 = 0;
static volatile int64_t x289 = -136LL;
volatile int32_t t51 = -201;
static int64_t x301 = 817675974LL;
static int16_t x304 = -27;
static uint64_t x307 = UINT64_MAX;
volatile int64_t t54 = -2LL;
volatile int32_t t55 = -1003;
static uint8_t x330 = UINT8_MAX;
volatile int32_t t58 = 451935;
volatile int64_t x350 = -141619410838779LL;
int32_t x352 = -194;
int8_t x376 = -37;
volatile int64_t t66 = 5228LL;
volatile int8_t x388 = INT8_MIN;
int32_t x402 = INT32_MIN;
static int64_t x412 = -191359696LL;
static int32_t t71 = -7172060;
int32_t x414 = INT32_MIN;
static int32_t x443 = -1;
uint32_t x448 = 36U;
volatile uint64_t x449 = UINT64_MAX;
volatile uint64_t x452 = 515059168770LLU;
static uint64_t x456 = 56392862917961LLU;
int32_t x460 = INT32_MIN;
int32_t x464 = 156290;
int8_t x472 = -1;
uint8_t x487 = 9U;
uint64_t x489 = 5594668730LLU;
int8_t x490 = -38;
volatile int16_t x500 = -1;
uint16_t x501 = 119U;
uint64_t x519 = UINT64_MAX;
static int32_t x521 = 5408;
volatile uint16_t x522 = 5123U;
uint16_t x523 = 1831U;
volatile uint16_t x537 = 3U;
int8_t x539 = INT8_MIN;
static uint32_t x562 = 298U;
uint8_t x563 = 9U;
static int64_t x570 = INT64_MIN;
int32_t x573 = INT32_MAX;
int64_t x574 = INT64_MIN;
static int64_t x587 = 3709506LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = 429371LLU;
	int16_t x3 = -1;
	int64_t x4 = 26755458LL;
	volatile int32_t t0 = -1;

	t0 = (x1&(x2<(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -441;
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 75U;
	int32_t t1 = 562896198;

	t1 = (x5&(x6<(x7*x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 14187U;
	static int16_t x10 = 284;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MAX;

	t2 = (x9&(x10<(x11*x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -7674LL;
	uint64_t x14 = 357114402030861LLU;
	uint32_t x15 = 352U;
	volatile int32_t x16 = INT32_MIN;

	t3 = (x13&(x14<(x15*x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x17 = 376U;
	int16_t x18 = INT16_MIN;
	uint32_t x19 = 4021449U;
	volatile int32_t x20 = 522;
	int32_t t4 = -24912406;

	t4 = (x17&(x18<(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x23 = 7U;
	uint16_t x24 = UINT16_MAX;
	static int32_t t5 = 5152;

	t5 = (x21&(x22<(x23*x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	volatile int16_t x26 = INT16_MIN;
	volatile int64_t x27 = -1LL;
	static int32_t t6 = 491;

	t6 = (x25&(x26<(x27*x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x35 = UINT32_MAX;
	volatile int64_t t7 = -347075303829LL;

	t7 = (x33&(x34<(x35*x36)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MAX;
	int64_t x39 = INT64_MAX;
	volatile uint64_t x40 = 10287771152157897LLU;

	t8 = (x37&(x38<(x39*x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = -31;
	volatile int64_t t9 = -2005954556364LL;

	t9 = (x45&(x46<(x47*x48)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = 963U;
	uint32_t x50 = 6U;
	uint8_t x52 = 12U;

	t10 = (x49&(x50<(x51*x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x57 = INT8_MIN;
	volatile int8_t x59 = -1;
	static uint16_t x60 = UINT16_MAX;

	t11 = (x57&(x58<(x59*x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = INT8_MIN;
	int8_t x62 = 39;
	int32_t x63 = -1;
	uint16_t x64 = UINT16_MAX;
	int32_t t12 = 377;

	t12 = (x61&(x62<(x63*x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x69 = 534;
	static int64_t x70 = -4920953807LL;
	uint64_t x71 = UINT64_MAX;
	volatile int64_t x72 = 433LL;
	volatile int32_t t13 = -54349;

	t13 = (x69&(x70<(x71*x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = UINT8_MAX;
	volatile uint16_t x74 = UINT16_MAX;
	int8_t x75 = 53;
	int64_t x76 = -1LL;
	volatile int32_t t14 = -1;

	t14 = (x73&(x74<(x75*x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x86 = INT8_MIN;
	int32_t x87 = 51168;
	volatile uint64_t x88 = 1571760509000LLU;
	int32_t t15 = -160;

	t15 = (x85&(x86<(x87*x88)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x93 = 126557714;
	volatile int8_t x96 = -1;
	static volatile int32_t t16 = -476925754;

	t16 = (x93&(x94<(x95*x96)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	volatile int8_t x100 = -1;
	volatile int32_t t17 = 21;

	t17 = (x97&(x98<(x99*x100)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x105 = 5U;
	volatile int16_t x106 = -6;
	uint16_t x107 = 3U;
	static volatile uint16_t x108 = 13U;
	int32_t t18 = 23;

	t18 = (x105&(x106<(x107*x108)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x110 = 989336346384170LLU;

	t19 = (x109&(x110<(x111*x112)));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x113 = 2U;
	int32_t x114 = 8384258;
	int32_t t20 = -3;

	t20 = (x113&(x114<(x115*x116)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x122 = UINT64_MAX;
	int16_t x123 = -1;
	int32_t t21 = 1;

	t21 = (x121&(x122<(x123*x124)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x133 = 0;
	int8_t x134 = -1;
	volatile uint16_t x135 = 20U;
	volatile int8_t x136 = INT8_MIN;
	int32_t t22 = 10;

	t22 = (x133&(x134<(x135*x136)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x137 = INT64_MIN;
	volatile int16_t x138 = -2;
	uint16_t x139 = 364U;

	t23 = (x137&(x138<(x139*x140)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x145 = 4U;
	volatile int32_t x147 = -1;
	int16_t x148 = -1;
	static volatile int32_t t24 = -13;

	t24 = (x145&(x146<(x147*x148)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x150 = 249522479239598736LL;
	static int8_t x151 = INT8_MIN;
	uint16_t x152 = UINT16_MAX;

	t25 = (x149&(x150<(x151*x152)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	uint8_t x168 = 2U;
	static volatile int32_t t26 = 119865;

	t26 = (x165&(x166<(x167*x168)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x169 = INT16_MAX;
	static volatile int16_t x170 = 0;
	static int8_t x171 = INT8_MAX;
	int32_t x172 = 1456;
	int32_t t27 = 1854;

	t27 = (x169&(x170<(x171*x172)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x173 = UINT64_MAX;
	int16_t x174 = -1;
	static uint16_t x176 = UINT16_MAX;
	volatile uint64_t t28 = 6961885005LLU;

	t28 = (x173&(x174<(x175*x176)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x177 = 11498U;
	int16_t x178 = -1;
	int32_t x179 = INT32_MIN;
	uint64_t x180 = UINT64_MAX;
	int32_t t29 = 73258733;

	t29 = (x177&(x178<(x179*x180)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int16_t x182 = 49;
	static volatile int16_t x183 = -682;
	int8_t x184 = INT8_MIN;
	volatile int32_t t30 = -207227;

	t30 = (x181&(x182<(x183*x184)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x189 = -1;
	static volatile uint64_t x190 = 89646762901130579LLU;
	int16_t x191 = INT16_MAX;
	volatile int32_t t31 = 263804665;

	t31 = (x189&(x190<(x191*x192)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x201 = 867022LL;
	int32_t x202 = INT32_MAX;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t32 = -244729LL;

	t32 = (x201&(x202<(x203*x204)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x205 = UINT16_MAX;
	uint64_t x206 = 455LLU;
	volatile int64_t x207 = 185136LL;
	uint32_t x208 = 1631U;

	t33 = (x205&(x206<(x207*x208)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x209 = INT8_MIN;
	int32_t x210 = -1;
	int32_t x211 = 1;
	static int32_t t34 = -57838;

	t34 = (x209&(x210<(x211*x212)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x217 = 4872;
	int8_t x218 = INT8_MAX;
	int16_t x219 = 1;
	int64_t x220 = -1LL;

	t35 = (x217&(x218<(x219*x220)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x221 = -1;
	int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MIN;
	volatile uint16_t x224 = 23U;
	static volatile int32_t t36 = 27355;

	t36 = (x221&(x222<(x223*x224)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t37 = 19697;

	t37 = (x225&(x226<(x227*x228)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x230 = 2710;
	int16_t x231 = INT16_MAX;
	int32_t x232 = -2;
	int32_t t38 = -3501192;

	t38 = (x229&(x230<(x231*x232)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x233 = 0;
	int64_t x236 = 784LL;
	static volatile int32_t t39 = -1915;

	t39 = (x233&(x234<(x235*x236)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x237 = 21;
	volatile int16_t x239 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;

	t40 = (x237&(x238<(x239*x240)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x241 = 66018432LLU;
	uint8_t x242 = 11U;
	int8_t x243 = INT8_MAX;
	uint32_t x244 = 57U;
	uint64_t t41 = 104143LLU;

	t41 = (x241&(x242<(x243*x244)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = 0;
	int32_t x246 = INT32_MAX;
	int8_t x247 = INT8_MAX;
	static uint8_t x248 = 1U;
	int32_t t42 = 482964;

	t42 = (x245&(x246<(x247*x248)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MIN;
	volatile int64_t x260 = 62296834561595LL;
	static int32_t t43 = 61;

	t43 = (x257&(x258<(x259*x260)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = INT8_MAX;
	static int16_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	volatile int8_t x264 = INT8_MAX;

	t44 = (x261&(x262<(x263*x264)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = INT64_MIN;
	int64_t x267 = -1586885LL;
	uint64_t x268 = 383986954198LLU;
	volatile int32_t t45 = 3;

	t45 = (x265&(x266<(x267*x268)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x270 = 1LLU;
	int16_t x271 = INT16_MIN;
	volatile uint8_t x272 = 1U;
	volatile int32_t t46 = -3607;

	t46 = (x269&(x270<(x271*x272)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int32_t x278 = 665284;
	uint8_t x280 = UINT8_MAX;
	volatile uint32_t t47 = 101U;

	t47 = (x277&(x278<(x279*x280)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x281 = UINT16_MAX;
	uint64_t x283 = 1107264539903LLU;
	static int64_t x284 = -212658333265486634LL;

	t48 = (x281&(x282<(x283*x284)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x285 = 1740;
	uint64_t x286 = 6953004524829LLU;
	volatile uint32_t x287 = UINT32_MAX;
	uint8_t x288 = 59U;
	volatile int32_t t49 = -16;

	t49 = (x285&(x286<(x287*x288)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x290 = -1;
	int8_t x291 = -1;
	static int16_t x292 = 8;
	volatile int64_t t50 = 141867638LL;

	t50 = (x289&(x290<(x291*x292)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x293 = 36U;
	static uint64_t x294 = 87LLU;
	int8_t x295 = INT8_MIN;
	int16_t x296 = 2;

	t51 = (x293&(x294<(x295*x296)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MIN;
	int64_t x299 = -4LL;
	volatile int32_t x300 = INT32_MAX;
	volatile int32_t t52 = 2;

	t52 = (x297&(x298<(x299*x300)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x302 = 2964U;
	static uint64_t x303 = 6554377LLU;
	static volatile int64_t t53 = 238648142327LL;

	t53 = (x301&(x302<(x303*x304)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x305 = INT64_MIN;
	int32_t x306 = -11924038;
	volatile int8_t x308 = 6;

	t54 = (x305&(x306<(x307*x308)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x313 = 30383503;
	int16_t x314 = -517;
	uint64_t x315 = 823768LLU;
	int64_t x316 = 13584287822861LL;

	t55 = (x313&(x314<(x315*x316)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x321 = -45;
	volatile uint8_t x322 = UINT8_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile uint64_t x324 = 344731LLU;
	int32_t t56 = 78;

	t56 = (x321&(x322<(x323*x324)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x325 = 5U;
	int32_t x326 = -476377;
	static int16_t x327 = INT16_MIN;
	static int8_t x328 = INT8_MIN;
	int32_t t57 = 1;

	t57 = (x325&(x326<(x327*x328)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x329 = 1U;
	uint16_t x331 = 1U;
	volatile uint16_t x332 = 6U;

	t58 = (x329&(x330<(x331*x332)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x337 = UINT64_MAX;
	uint64_t x338 = 374367055272LLU;
	uint32_t x339 = 3287U;
	int16_t x340 = 0;
	uint64_t t59 = 315771206LLU;

	t59 = (x337&(x338<(x339*x340)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x341 = 1214U;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = 1010;
	int16_t x344 = 2469;
	volatile uint32_t t60 = 123561613U;

	t60 = (x341&(x342<(x343*x344)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x345 = 41U;
	static int32_t x346 = 205221697;
	static volatile int32_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	int32_t t61 = -9010656;

	t61 = (x345&(x346<(x347*x348)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x351 = 35260852701757764LLU;
	static int32_t t62 = 36;

	t62 = (x349&(x350<(x351*x352)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x357 = UINT64_MAX;
	volatile int8_t x358 = 12;
	volatile int64_t x359 = -1LL;
	int8_t x360 = -3;
	static uint64_t t63 = 78810871LLU;

	t63 = (x357&(x358<(x359*x360)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MAX;
	volatile uint32_t x364 = UINT32_MAX;
	static volatile int32_t t64 = 35974;

	t64 = (x361&(x362<(x363*x364)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x369 = 5;
	int32_t x370 = 205;
	int64_t x371 = 739LL;
	int8_t x372 = 37;
	volatile int32_t t65 = 1;

	t65 = (x369&(x370<(x371*x372)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x373 = INT64_MIN;
	int32_t x374 = 27454394;
	int8_t x375 = 0;

	t66 = (x373&(x374<(x375*x376)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x381 = INT16_MIN;
	volatile uint16_t x382 = 0U;
	int64_t x383 = 0LL;
	static volatile int16_t x384 = INT16_MIN;
	volatile int32_t t67 = 55;

	t67 = (x381&(x382<(x383*x384)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x385 = UINT32_MAX;
	uint8_t x386 = 0U;
	uint64_t x387 = UINT64_MAX;
	uint32_t t68 = 1U;

	t68 = (x385&(x386<(x387*x388)));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x397 = INT32_MIN;
	int16_t x398 = -1;
	volatile uint32_t x399 = 70071937U;
	static int16_t x400 = -1;
	static int32_t t69 = 27086;

	t69 = (x397&(x398<(x399*x400)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x401 = 2016480961LL;
	int64_t x403 = -1LL;
	int64_t x404 = -21LL;
	volatile int64_t t70 = -291LL;

	t70 = (x401&(x402<(x403*x404)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x409 = -23;
	uint64_t x410 = 36908LLU;
	uint8_t x411 = 50U;

	t71 = (x409&(x410<(x411*x412)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x413 = UINT32_MAX;
	uint16_t x415 = UINT16_MAX;
	uint32_t x416 = UINT32_MAX;
	volatile uint32_t t72 = 57234208U;

	t72 = (x413&(x414<(x415*x416)));

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x417 = 3U;
	int8_t x418 = -1;
	static int32_t x419 = -1;
	static volatile uint64_t x420 = 55272075LLU;
	static int32_t t73 = -3457;

	t73 = (x417&(x418<(x419*x420)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x425 = -1;
	static int32_t x426 = 3;
	static int64_t x427 = -585374LL;
	int32_t x428 = -1;
	volatile int32_t t74 = 34;

	t74 = (x425&(x426<(x427*x428)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x433 = 34U;
	int32_t x434 = INT32_MAX;
	static int16_t x435 = INT16_MIN;
	static int16_t x436 = -1;
	volatile int32_t t75 = 458;

	t75 = (x433&(x434<(x435*x436)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x441 = 3;
	int32_t x442 = INT32_MAX;
	volatile int64_t x444 = 481526394007370LL;
	int32_t t76 = -2568;

	t76 = (x441&(x442<(x443*x444)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x445 = -3;
	int64_t x446 = -2860513LL;
	uint8_t x447 = 32U;
	int32_t t77 = 125;

	t77 = (x445&(x446<(x447*x448)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	static volatile uint64_t t78 = 4276568418771146893LLU;

	t78 = (x449&(x450<(x451*x452)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x453 = -1;
	int64_t x454 = -1LL;
	volatile uint32_t x455 = 8267843U;
	int32_t t79 = -79584;

	t79 = (x453&(x454<(x455*x456)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x457 = UINT16_MAX;
	static volatile int64_t x458 = INT64_MAX;
	uint64_t x459 = 1531722001402301LLU;
	int32_t t80 = -4;

	t80 = (x457&(x458<(x459*x460)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x461 = INT16_MIN;
	volatile int32_t x462 = 88003224;
	int8_t x463 = 1;
	int32_t t81 = 47;

	t81 = (x461&(x462<(x463*x464)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x469 = 69LL;
	static uint32_t x470 = 9U;
	volatile int8_t x471 = INT8_MAX;
	int64_t t82 = -79474893197524363LL;

	t82 = (x469&(x470<(x471*x472)));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x473 = INT16_MAX;
	volatile int64_t x474 = INT64_MIN;
	uint8_t x475 = 0U;
	volatile uint16_t x476 = 13818U;
	volatile int32_t t83 = 185026;

	t83 = (x473&(x474<(x475*x476)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x481 = INT64_MIN;
	static int8_t x482 = INT8_MAX;
	int64_t x483 = 3LL;
	int16_t x484 = -30;
	volatile int64_t t84 = -24424047131LL;

	t84 = (x481&(x482<(x483*x484)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x485 = INT64_MIN;
	uint8_t x486 = UINT8_MAX;
	uint8_t x488 = 8U;
	static int64_t t85 = 59LL;

	t85 = (x485&(x486<(x487*x488)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x491 = UINT8_MAX;
	uint8_t x492 = 2U;
	uint64_t t86 = 1LLU;

	t86 = (x489&(x490<(x491*x492)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x497 = INT64_MIN;
	volatile int8_t x498 = INT8_MIN;
	static volatile int16_t x499 = -1;
	int64_t t87 = 1545781114671605332LL;

	t87 = (x497&(x498<(x499*x500)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x502 = 4861039984740LL;
	int32_t x503 = INT32_MAX;
	int8_t x504 = -1;
	volatile int32_t t88 = -709848;

	t88 = (x501&(x502<(x503*x504)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x517 = -1;
	uint64_t x518 = 34860337481110876LLU;
	static int8_t x520 = INT8_MIN;
	volatile int32_t t89 = -996459365;

	t89 = (x517&(x518<(x519*x520)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x524 = -1;
	static volatile int32_t t90 = -2957267;

	t90 = (x521&(x522<(x523*x524)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x525 = -25;
	int8_t x526 = INT8_MIN;
	int8_t x527 = INT8_MAX;
	volatile int32_t x528 = -2;
	int32_t t91 = 111151966;

	t91 = (x525&(x526<(x527*x528)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x533 = INT16_MAX;
	uint16_t x534 = 626U;
	static int16_t x535 = INT16_MAX;
	uint16_t x536 = 8U;
	static volatile int32_t t92 = 23007274;

	t92 = (x533&(x534<(x535*x536)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x538 = INT32_MIN;
	int64_t x540 = -1LL;
	static int32_t t93 = -229101;

	t93 = (x537&(x538<(x539*x540)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x549 = 210955518U;
	int64_t x550 = INT64_MAX;
	static int64_t x551 = 1442193879LL;
	uint32_t x552 = 1U;
	static volatile uint32_t t94 = 36U;

	t94 = (x549&(x550<(x551*x552)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x553 = UINT16_MAX;
	int32_t x554 = INT32_MAX;
	int32_t x555 = INT32_MIN;
	int64_t x556 = -1LL;
	static volatile int32_t t95 = -7;

	t95 = (x553&(x554<(x555*x556)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x561 = INT16_MIN;
	volatile uint64_t x564 = 72805LLU;
	volatile int32_t t96 = 81;

	t96 = (x561&(x562<(x563*x564)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x569 = UINT16_MAX;
	static int16_t x571 = -1;
	int8_t x572 = -1;
	int32_t t97 = 7358;

	t97 = (x569&(x570<(x571*x572)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x575 = 2U;
	volatile uint64_t x576 = 3153324948542LLU;
	volatile int32_t t98 = -1;

	t98 = (x573&(x574<(x575*x576)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x585 = -1;
	volatile int64_t x586 = INT64_MAX;
	int32_t x588 = INT32_MAX;
	volatile int32_t t99 = 1643766;

	t99 = (x585&(x586<(x587*x588)));

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

