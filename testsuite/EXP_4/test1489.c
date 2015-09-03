#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = 7U;
uint16_t x13 = 1771U;
volatile int32_t x29 = INT32_MAX;
int8_t x32 = 5;
static int32_t x36 = -1;
uint32_t x37 = 10627U;
int32_t t6 = 187717;
static volatile int64_t x72 = INT64_MAX;
static volatile int32_t t9 = -14197188;
int32_t x101 = INT32_MAX;
volatile int32_t t10 = 3253;
int64_t x113 = INT64_MAX;
static uint16_t x116 = 0U;
static int8_t x120 = INT8_MAX;
volatile int8_t x140 = INT8_MIN;
static uint64_t x145 = 1LLU;
uint8_t x146 = 97U;
uint8_t x150 = 43U;
int16_t x151 = INT16_MIN;
int16_t x152 = INT16_MIN;
volatile uint64_t t17 = UINT64_MAX;
int8_t x159 = 0;
volatile uint64_t t18 = 2047634980462988407LLU;
int8_t x179 = INT8_MAX;
uint16_t x194 = 223U;
volatile int16_t x200 = INT16_MIN;
volatile int32_t x206 = INT32_MIN;
int64_t x207 = -1LL;
uint32_t x208 = 20209059U;
static int16_t x221 = INT16_MAX;
static volatile uint32_t x224 = 421831U;
volatile int32_t t24 = -60789;
uint32_t x225 = 16338U;
volatile uint16_t x238 = UINT16_MAX;
int8_t x275 = -1;
static uint16_t x277 = 1645U;
static int32_t x280 = 2;
static int8_t x281 = INT8_MAX;
uint32_t x291 = 52U;
int32_t t34 = 788384;
int64_t x299 = 280038268LL;
uint64_t x307 = 6LLU;
uint8_t x309 = 1U;
int32_t t37 = -69;
uint32_t x325 = 2U;
uint64_t x328 = 120LLU;
static volatile int64_t t41 = 30653590234958LL;
uint16_t x352 = 32U;
uint16_t x380 = UINT16_MAX;
uint64_t x386 = UINT64_MAX;
uint8_t x403 = 12U;
int32_t x411 = -1;
int64_t x412 = -19051631LL;
volatile int32_t t49 = 39536;
static uint16_t x419 = 1560U;
uint16_t x420 = UINT16_MAX;
volatile int32_t t51 = 1240;
int64_t x425 = INT64_MAX;
static volatile int64_t x426 = -1LL;
uint16_t x427 = 1123U;
uint16_t x437 = 22643U;
int32_t t53 = 20047549;
static volatile uint8_t x446 = UINT8_MAX;
static int64_t x464 = INT64_MIN;
volatile int32_t x474 = INT32_MAX;
volatile int32_t t61 = -3656826;
volatile uint8_t x525 = 3U;
uint16_t x528 = 179U;
int16_t x549 = INT16_MAX;
static int32_t x551 = INT32_MAX;
volatile int32_t t67 = 125994511;
int32_t x570 = INT32_MIN;
int32_t x586 = INT32_MIN;
uint32_t x597 = 37764U;
static int8_t x598 = -47;
volatile uint32_t t71 = 52U;
uint8_t x602 = 26U;
volatile int64_t x603 = 14598983227LL;
static uint8_t x607 = UINT8_MAX;
static volatile int32_t t74 = -205607;
int32_t x618 = INT32_MIN;
static uint32_t x625 = UINT32_MAX;
uint64_t x631 = 5170874LLU;
static int32_t t79 = -2454491;
uint8_t x635 = 57U;
int32_t x643 = INT32_MAX;
uint64_t x644 = 3654112200LLU;
uint32_t x648 = UINT32_MAX;
int64_t x649 = 74009116LL;
static uint64_t x653 = 133104602091401LLU;
uint32_t x654 = 313U;
int32_t t86 = 2762;
static int16_t x729 = 164;
static int32_t x735 = INT32_MAX;
uint8_t x736 = 0U;
uint16_t x741 = 1110U;
int32_t x750 = INT32_MAX;
uint32_t x751 = UINT32_MAX;
int32_t x752 = INT32_MIN;
static int8_t x759 = 52;
int16_t x763 = -14944;
static uint16_t x765 = UINT16_MAX;
uint8_t x766 = 24U;
int16_t x768 = INT16_MIN;
int16_t x771 = INT16_MAX;
static uint16_t x772 = 1455U;
uint16_t x781 = UINT16_MAX;
volatile int8_t x782 = -1;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int64_t x2 = INT64_MAX;
	uint8_t x3 = 13U;
	volatile int64_t x4 = INT64_MAX;

	t0 = (x1>>(x2&(x3<x4)));

	if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MAX;
	uint16_t x16 = 1868U;
	static volatile int32_t t1 = -5;

	t1 = (x13>>(x14&(x15<x16)));

	if (t1 != 1771) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x30 = -1;
	int64_t x31 = -1LL;
	volatile int32_t t2 = 14547;

	t2 = (x29>>(x30&(x31<x32)));

	if (t2 != 1073741823) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x33 = 3739U;
	static int8_t x34 = INT8_MIN;
	static int64_t x35 = INT64_MIN;
	int32_t t3 = -64395707;

	t3 = (x33>>(x34&(x35<x36)));

	if (t3 != 3739) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x38 = -7281;
	uint64_t x39 = UINT64_MAX;
	uint64_t x40 = 353734851LLU;
	volatile uint32_t t4 = 10284910U;

	t4 = (x37>>(x38&(x39<x40)));

	if (t4 != 10627U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x41 = 1406901322U;
	static volatile uint8_t x42 = UINT8_MAX;
	uint32_t x43 = 0U;
	volatile uint16_t x44 = 62U;
	uint32_t t5 = 7U;

	t5 = (x41>>(x42&(x43<x44)));

	if (t5 != 703450661U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x61 = 15U;
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = 10U;

	t6 = (x61>>(x62&(x63<x64)));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x69 = UINT64_MAX;
	uint16_t x70 = 2U;
	int8_t x71 = -1;
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = (x69>>(x70&(x71<x72)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x81 = 404U;
	int8_t x82 = INT8_MIN;
	static int32_t x83 = INT32_MAX;
	volatile int32_t x84 = -414;
	int32_t t8 = -77680;

	t8 = (x81>>(x82&(x83<x84)));

	if (t8 != 404) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x85 = 15;
	static int8_t x86 = -58;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = 6U;

	t9 = (x85>>(x86&(x87<x88)));

	if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x102 = INT64_MAX;
	volatile int64_t x103 = 0LL;
	int64_t x104 = INT64_MAX;

	t10 = (x101>>(x102&(x103<x104)));

	if (t10 != 1073741823) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x109 = INT32_MAX;
	uint64_t x110 = 2608200459716LLU;
	uint16_t x111 = UINT16_MAX;
	static int64_t x112 = 2908288427LL;
	static int32_t t11 = INT32_MAX;

	t11 = (x109>>(x110&(x111<x112)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x114 = UINT64_MAX;
	int64_t x115 = 136334558LL;
	static int64_t t12 = INT64_MAX;

	t12 = (x113>>(x114&(x115<x116)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x117 = INT32_MAX;
	volatile int64_t x118 = 263LL;
	int16_t x119 = INT16_MIN;
	int32_t t13 = 86391224;

	t13 = (x117>>(x118&(x119<x120)));

	if (t13 != 1073741823) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x133 = 24;
	int8_t x134 = -5;
	static uint32_t x135 = 67052875U;
	int8_t x136 = 13;
	int32_t t14 = -1;

	t14 = (x133>>(x134&(x135<x136)));

	if (t14 != 24) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x137 = 7U;
	int32_t x138 = 259886;
	int32_t x139 = 7510;
	int32_t t15 = -169538;

	t15 = (x137>>(x138&(x139<x140)));

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x147 = 108U;
	uint8_t x148 = 0U;
	volatile uint64_t t16 = 440689240123LLU;

	t16 = (x145>>(x146&(x147<x148)));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x149 = UINT64_MAX;

	t17 = (x149>>(x150&(x151<x152)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x157 = 117LLU;
	volatile int32_t x158 = INT32_MIN;
	uint64_t x160 = 106869587555LLU;

	t18 = (x157>>(x158&(x159<x160)));

	if (t18 != 117LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x177 = INT32_MAX;
	int64_t x178 = -1LL;
	int8_t x180 = INT8_MAX;
	static volatile int32_t t19 = INT32_MAX;

	t19 = (x177>>(x178&(x179<x180)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x185 = INT8_MAX;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	uint16_t x188 = 26155U;
	static volatile int32_t t20 = 15;

	t20 = (x185>>(x186&(x187<x188)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x193 = 279534U;
	static volatile uint8_t x195 = 98U;
	uint16_t x196 = 0U;
	volatile uint32_t t21 = 70921209U;

	t21 = (x193>>(x194&(x195<x196)));

	if (t21 != 279534U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x197 = 114U;
	int16_t x198 = -1;
	int64_t x199 = INT64_MAX;
	volatile int32_t t22 = -3;

	t22 = (x197>>(x198&(x199<x200)));

	if (t22 != 114) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x205 = INT16_MAX;
	volatile int32_t t23 = -1043149;

	t23 = (x205>>(x206&(x207<x208)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x222 = -8;
	int16_t x223 = 5;

	t24 = (x221>>(x222&(x223<x224)));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x226 = -4478;
	int8_t x227 = INT8_MAX;
	int64_t x228 = INT64_MIN;
	uint32_t t25 = 28153U;

	t25 = (x225>>(x226&(x227<x228)));

	if (t25 != 16338U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x233 = INT8_MAX;
	volatile int32_t x234 = -23836583;
	int64_t x235 = INT64_MIN;
	int16_t x236 = 0;
	int32_t t26 = 1;

	t26 = (x233>>(x234&(x235<x236)));

	if (t26 != 63) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x237 = UINT32_MAX;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = UINT64_MAX;
	static volatile uint32_t t27 = 7622428U;

	t27 = (x237>>(x238&(x239<x240)));

	if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x253 = 6246891LLU;
	static volatile int64_t x254 = INT64_MIN;
	volatile int16_t x255 = 175;
	static int64_t x256 = INT64_MIN;
	volatile uint64_t t28 = 1621878031519439LLU;

	t28 = (x253>>(x254&(x255<x256)));

	if (t28 != 6246891LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	volatile int8_t x267 = 0;
	int32_t x268 = -1;
	uint64_t t29 = UINT64_MAX;

	t29 = (x265>>(x266&(x267<x268)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x269 = 106;
	int16_t x270 = -3914;
	static uint32_t x271 = 2027U;
	uint32_t x272 = 811U;
	volatile int32_t t30 = -40067;

	t30 = (x269>>(x270&(x271<x272)));

	if (t30 != 106) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x273 = 221U;
	volatile int8_t x274 = INT8_MIN;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t31 = 14;

	t31 = (x273>>(x274&(x275<x276)));

	if (t31 != 221) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x278 = -349702543842909290LL;
	static int8_t x279 = -25;
	volatile int32_t t32 = -5403648;

	t32 = (x277>>(x278&(x279<x280)));

	if (t32 != 1645) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	int32_t t33 = 355552109;

	t33 = (x281>>(x282&(x283<x284)));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x289 = INT32_MAX;
	int16_t x290 = INT16_MAX;
	int8_t x292 = INT8_MIN;

	t34 = (x289>>(x290&(x291<x292)));

	if (t34 != 1073741823) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x297 = 3U;
	static volatile int8_t x298 = INT8_MIN;
	int8_t x300 = -1;
	int32_t t35 = -6647091;

	t35 = (x297>>(x298&(x299<x300)));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x305 = INT16_MAX;
	uint8_t x306 = 1U;
	static int32_t x308 = INT32_MIN;
	int32_t t36 = 14175;

	t36 = (x305>>(x306&(x307<x308)));

	if (t36 != 16383) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x310 = 86513902341LL;
	static int32_t x311 = 2;
	uint32_t x312 = 39U;

	t37 = (x309>>(x310&(x311<x312)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x313 = INT16_MAX;
	int32_t x314 = -1;
	uint8_t x315 = 3U;
	int8_t x316 = INT8_MIN;
	int32_t t38 = -108612994;

	t38 = (x313>>(x314&(x315<x316)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x321 = INT8_MAX;
	volatile int8_t x322 = INT8_MIN;
	uint8_t x323 = 9U;
	static int8_t x324 = -22;
	int32_t t39 = 841330;

	t39 = (x321>>(x322&(x323<x324)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x326 = INT32_MIN;
	int64_t x327 = 10134966545LL;
	uint32_t t40 = 1961571684U;

	t40 = (x325>>(x326&(x327<x328)));

	if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x341 = 825LL;
	int32_t x342 = INT32_MIN;
	static int32_t x343 = INT32_MAX;
	volatile int32_t x344 = 26;

	t41 = (x341>>(x342&(x343<x344)));

	if (t41 != 825LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x349 = 5U;
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 786U;
	static volatile int32_t t42 = -538;

	t42 = (x349>>(x350&(x351<x352)));

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x369 = 1;
	uint64_t x370 = 61118520222673LLU;
	volatile uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MAX;
	volatile int32_t t43 = -7;

	t43 = (x369>>(x370&(x371<x372)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x377 = INT32_MAX;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x377>>(x378&(x379<x380)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x385 = 35;
	static int64_t x387 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;
	int32_t t45 = -2;

	t45 = (x385>>(x386&(x387<x388)));

	if (t45 != 17) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x397 = INT8_MAX;
	int32_t x398 = INT32_MAX;
	static int16_t x399 = 1838;
	static uint32_t x400 = 1735705U;
	static volatile int32_t t46 = -69142;

	t46 = (x397>>(x398&(x399<x400)));

	if (t46 != 63) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x401 = 852U;
	volatile int8_t x402 = INT8_MIN;
	int16_t x404 = 953;
	uint32_t t47 = 2120462138U;

	t47 = (x401>>(x402&(x403<x404)));

	if (t47 != 852U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x405 = UINT64_MAX;
	volatile int8_t x406 = INT8_MAX;
	int16_t x407 = INT16_MIN;
	int8_t x408 = 0;
	volatile uint64_t t48 = 1055002634LLU;

	t48 = (x405>>(x406&(x407<x408)));

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MIN;

	t49 = (x409>>(x410&(x411<x412)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x417 = 1U;
	static int8_t x418 = INT8_MAX;
	int32_t t50 = 18866371;

	t50 = (x417>>(x418&(x419<x420)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x421 = 1515U;
	int64_t x422 = -1LL;
	int8_t x423 = INT8_MAX;
	int16_t x424 = INT16_MAX;

	t51 = (x421>>(x422&(x423<x424)));

	if (t51 != 757) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x428 = 20915U;
	static int64_t t52 = -1808630663LL;

	t52 = (x425>>(x426&(x427<x428)));

	if (t52 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x438 = INT16_MAX;
	int32_t x439 = INT32_MIN;
	uint8_t x440 = 5U;

	t53 = (x437>>(x438&(x439<x440)));

	if (t53 != 11321) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x445 = 3U;
	volatile int16_t x447 = -379;
	uint32_t x448 = 5404U;
	uint32_t t54 = 7U;

	t54 = (x445>>(x446&(x447<x448)));

	if (t54 != 3U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x449 = 1LLU;
	static int16_t x450 = INT16_MIN;
	int64_t x451 = INT64_MIN;
	volatile int32_t x452 = INT32_MIN;
	uint64_t t55 = 63531394636LLU;

	t55 = (x449>>(x450&(x451<x452)));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x457 = INT64_MAX;
	static int8_t x458 = 12;
	uint16_t x459 = 8U;
	static uint16_t x460 = UINT16_MAX;
	int64_t t56 = INT64_MAX;

	t56 = (x457>>(x458&(x459<x460)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x461 = 1LL;
	volatile int64_t x462 = -1LL;
	volatile uint32_t x463 = 21U;
	int64_t t57 = -15826776554076LL;

	t57 = (x461>>(x462&(x463<x464)));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x465 = INT32_MAX;
	volatile int32_t x466 = -1;
	volatile uint16_t x467 = UINT16_MAX;
	static int8_t x468 = 8;
	int32_t t58 = INT32_MAX;

	t58 = (x465>>(x466&(x467<x468)));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x473 = UINT16_MAX;
	static int32_t x475 = INT32_MIN;
	static int16_t x476 = INT16_MIN;
	volatile int32_t t59 = -661926;

	t59 = (x473>>(x474&(x475<x476)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x489 = 10741854LLU;
	uint64_t x490 = UINT64_MAX;
	int32_t x491 = -48;
	int64_t x492 = INT64_MIN;
	volatile uint64_t t60 = 8983LLU;

	t60 = (x489>>(x490&(x491<x492)));

	if (t60 != 10741854LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x493 = 617;
	int16_t x494 = INT16_MIN;
	int64_t x495 = -22574265396LL;
	static uint32_t x496 = 594U;

	t61 = (x493>>(x494&(x495<x496)));

	if (t61 != 617) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x509 = INT64_MAX;
	uint32_t x510 = 329U;
	int16_t x511 = 14;
	static int64_t x512 = 1286643746LL;
	volatile int64_t t62 = 5LL;

	t62 = (x509>>(x510&(x511<x512)));

	if (t62 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x513 = 99435934200LLU;
	static uint8_t x514 = UINT8_MAX;
	volatile int32_t x515 = -1553918;
	uint64_t x516 = 9LLU;
	volatile uint64_t t63 = 568202212LLU;

	t63 = (x513>>(x514&(x515<x516)));

	if (t63 != 99435934200LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x526 = INT16_MIN;
	static volatile int64_t x527 = -8LL;
	volatile int32_t t64 = 6969;

	t64 = (x525>>(x526&(x527<x528)));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x529 = INT64_MAX;
	int8_t x530 = INT8_MAX;
	int64_t x531 = 5798LL;
	volatile int32_t x532 = 1;
	volatile int64_t t65 = INT64_MAX;

	t65 = (x529>>(x530&(x531<x532)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x533 = INT64_MAX;
	int32_t x534 = 0;
	int32_t x535 = INT32_MAX;
	int64_t x536 = INT64_MIN;
	static int64_t t66 = INT64_MAX;

	t66 = (x533>>(x534&(x535<x536)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x550 = INT8_MIN;
	volatile int64_t x552 = -1LL;

	t67 = (x549>>(x550&(x551<x552)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x561 = UINT64_MAX;
	volatile int16_t x562 = 0;
	int16_t x563 = -649;
	uint32_t x564 = UINT32_MAX;
	static uint64_t t68 = UINT64_MAX;

	t68 = (x561>>(x562&(x563<x564)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x569 = INT16_MAX;
	int8_t x571 = 0;
	static volatile int8_t x572 = INT8_MAX;
	int32_t t69 = 690;

	t69 = (x569>>(x570&(x571<x572)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x585 = 993U;
	int8_t x587 = 1;
	int8_t x588 = -17;
	int32_t t70 = -445242958;

	t70 = (x585>>(x586&(x587<x588)));

	if (t70 != 993) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x599 = INT64_MIN;
	int64_t x600 = -32029LL;

	t71 = (x597>>(x598&(x599<x600)));

	if (t71 != 18882U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x601 = INT32_MAX;
	volatile int16_t x604 = INT16_MAX;
	volatile int32_t t72 = INT32_MAX;

	t72 = (x601>>(x602&(x603<x604)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x605 = 353242371;
	int64_t x606 = INT64_MIN;
	static volatile uint16_t x608 = 3471U;
	volatile int32_t t73 = -1448;

	t73 = (x605>>(x606&(x607<x608)));

	if (t73 != 353242371) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x609 = 2U;
	uint16_t x610 = 3830U;
	static volatile uint64_t x611 = UINT64_MAX;
	int64_t x612 = INT64_MIN;

	t74 = (x609>>(x610&(x611<x612)));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x613 = 127U;
	volatile int16_t x614 = INT16_MIN;
	int8_t x615 = INT8_MIN;
	uint32_t x616 = 182272U;
	volatile int32_t t75 = 1425097;

	t75 = (x613>>(x614&(x615<x616)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x617 = 1677935503428600743LLU;
	volatile int8_t x619 = 7;
	int8_t x620 = 58;
	uint64_t t76 = 118480LLU;

	t76 = (x617>>(x618&(x619<x620)));

	if (t76 != 1677935503428600743LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x621 = 30260U;
	volatile uint16_t x622 = UINT16_MAX;
	uint32_t x623 = 79U;
	uint16_t x624 = 79U;
	volatile int32_t t77 = -161;

	t77 = (x621>>(x622&(x623<x624)));

	if (t77 != 30260) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x626 = -1;
	int32_t x627 = INT32_MAX;
	uint64_t x628 = 100169287734311601LLU;
	volatile uint32_t t78 = 328172U;

	t78 = (x625>>(x626&(x627<x628)));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x629 = 1U;
	static int8_t x630 = -13;
	int16_t x632 = INT16_MIN;

	t79 = (x629>>(x630&(x631<x632)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x633 = 121408140U;
	volatile uint32_t x634 = UINT32_MAX;
	int16_t x636 = INT16_MAX;
	volatile uint32_t t80 = 0U;

	t80 = (x633>>(x634&(x635<x636)));

	if (t80 != 60704070U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x641 = 12LLU;
	volatile uint16_t x642 = UINT16_MAX;
	static volatile uint64_t t81 = 1LLU;

	t81 = (x641>>(x642&(x643<x644)));

	if (t81 != 6LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x645 = 19689753307LLU;
	static int64_t x646 = 503608LL;
	int32_t x647 = INT32_MIN;
	uint64_t t82 = 4293321740LLU;

	t82 = (x645>>(x646&(x647<x648)));

	if (t82 != 19689753307LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x650 = 2152142LL;
	int64_t x651 = -2341656706930054LL;
	uint32_t x652 = UINT32_MAX;
	static volatile int64_t t83 = -250679915989984LL;

	t83 = (x649>>(x650&(x651<x652)));

	if (t83 != 74009116LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x655 = INT32_MIN;
	int32_t x656 = -102;
	uint64_t t84 = 366220LLU;

	t84 = (x653>>(x654&(x655<x656)));

	if (t84 != 66552301045700LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x665 = INT16_MAX;
	uint64_t x666 = UINT64_MAX;
	volatile uint32_t x667 = 19977401U;
	int64_t x668 = -29587831813621LL;
	volatile int32_t t85 = -1;

	t85 = (x665>>(x666&(x667<x668)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x669 = 52U;
	int64_t x670 = -2295975815269LL;
	uint16_t x671 = UINT16_MAX;
	int32_t x672 = -1568074;

	t86 = (x669>>(x670&(x671<x672)));

	if (t86 != 52) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x677 = UINT32_MAX;
	uint64_t x678 = 9159LLU;
	static volatile uint64_t x679 = 119LLU;
	static int32_t x680 = -1;
	volatile uint32_t t87 = 29941U;

	t87 = (x677>>(x678&(x679<x680)));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x689 = INT16_MAX;
	static int64_t x690 = INT64_MAX;
	static int8_t x691 = -1;
	uint8_t x692 = 4U;
	volatile int32_t t88 = -5303443;

	t88 = (x689>>(x690&(x691<x692)));

	if (t88 != 16383) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x709 = 29U;
	int8_t x710 = -1;
	int32_t x711 = INT32_MIN;
	volatile int16_t x712 = -1;
	int32_t t89 = -17764;

	t89 = (x709>>(x710&(x711<x712)));

	if (t89 != 14) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x725 = INT32_MAX;
	int64_t x726 = 58764280655LL;
	int8_t x727 = -39;
	int64_t x728 = INT64_MIN;
	static int32_t t90 = INT32_MAX;

	t90 = (x725>>(x726&(x727<x728)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x730 = -763531226LL;
	int32_t x731 = -5696;
	int16_t x732 = 104;
	int32_t t91 = -2371730;

	t91 = (x729>>(x730&(x731<x732)));

	if (t91 != 164) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x733 = 1U;
	uint32_t x734 = UINT32_MAX;
	int32_t t92 = -1;

	t92 = (x733>>(x734&(x735<x736)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x742 = -1;
	volatile uint64_t x743 = UINT64_MAX;
	uint16_t x744 = UINT16_MAX;
	int32_t t93 = 31290536;

	t93 = (x741>>(x742&(x743<x744)));

	if (t93 != 1110) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x749 = UINT64_MAX;
	uint64_t t94 = UINT64_MAX;

	t94 = (x749>>(x750&(x751<x752)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x757 = 3U;
	int8_t x758 = 6;
	static int8_t x760 = INT8_MAX;
	static int32_t t95 = -487559;

	t95 = (x757>>(x758&(x759<x760)));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x761 = INT16_MAX;
	uint64_t x762 = 493323651160002LLU;
	static volatile int8_t x764 = INT8_MIN;
	int32_t t96 = 3989;

	t96 = (x761>>(x762&(x763<x764)));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x767 = INT64_MIN;
	volatile int32_t t97 = -12;

	t97 = (x765>>(x766&(x767<x768)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x769 = 1149159897227LLU;
	volatile uint16_t x770 = UINT16_MAX;
	uint64_t t98 = 360383549681376LLU;

	t98 = (x769>>(x770&(x771<x772)));

	if (t98 != 1149159897227LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x783 = UINT32_MAX;
	int64_t x784 = INT64_MIN;
	volatile int32_t t99 = 840;

	t99 = (x781>>(x782&(x783<x784)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

