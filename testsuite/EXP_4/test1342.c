#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x13 = INT16_MIN;
int64_t x16 = INT64_MAX;
int32_t t3 = -178828980;
volatile int32_t t5 = 2;
int32_t x43 = 991;
uint8_t x58 = 22U;
volatile int32_t t10 = 6093251;
uint64_t x61 = UINT64_MAX;
int32_t x69 = -1;
volatile int16_t x78 = -1;
int64_t x84 = INT64_MIN;
volatile int16_t x94 = 1;
int16_t x97 = INT16_MAX;
uint8_t x101 = 62U;
int8_t x104 = -1;
int16_t x106 = INT16_MAX;
int16_t x109 = INT16_MIN;
volatile int8_t x122 = INT8_MIN;
uint8_t x123 = UINT8_MAX;
static volatile int32_t x133 = -4314263;
static uint8_t x134 = 49U;
volatile int32_t x135 = -53092;
int32_t t24 = 3011;
int16_t x147 = -1;
static volatile int32_t x152 = -1;
uint16_t x169 = 1U;
int16_t x178 = -193;
volatile int8_t x179 = -3;
static int32_t t32 = -65257603;
uint8_t x190 = 11U;
int64_t x191 = 14LL;
int8_t x194 = INT8_MAX;
uint8_t x196 = 0U;
int64_t x206 = -1LL;
static uint8_t x207 = 55U;
uint64_t t36 = 56653LLU;
volatile uint32_t x213 = 572612661U;
static uint16_t x223 = 54U;
volatile int16_t x229 = -1;
static volatile int32_t t40 = -52;
volatile uint64_t x242 = 2954178182528165LLU;
int32_t x246 = -1;
uint64_t x249 = 33052368459098LLU;
volatile int32_t x250 = INT32_MIN;
volatile uint8_t x254 = UINT8_MAX;
volatile int32_t t45 = 600978515;
static volatile int32_t t46 = -22;
int64_t x271 = INT64_MAX;
uint32_t x273 = 95571090U;
uint64_t x275 = UINT64_MAX;
uint16_t x293 = 13993U;
volatile uint16_t x294 = UINT16_MAX;
volatile int32_t t52 = 289216;
static int64_t x311 = INT64_MIN;
int16_t x314 = 694;
uint32_t x315 = 188228243U;
volatile uint64_t t56 = 13LLU;
volatile int32_t x320 = INT32_MAX;
int64_t x330 = -1LL;
uint64_t t59 = 2865456236LLU;
volatile int16_t x350 = -1;
uint32_t t64 = 8063U;
volatile int32_t t66 = 7576;
int32_t x371 = -50;
static int32_t x372 = INT32_MIN;
static int32_t t69 = -24;
int32_t x381 = 242;
static volatile int64_t x384 = INT64_MIN;
uint64_t x404 = 1480717131LLU;
volatile int16_t x411 = -1;
int32_t x423 = INT32_MAX;
int8_t x428 = INT8_MIN;
volatile int32_t t81 = 37907559;
uint32_t x458 = 511934579U;
static int8_t x459 = -1;
static volatile uint16_t x483 = 708U;
uint32_t x494 = 21U;
volatile int16_t x496 = INT16_MIN;
static int64_t x503 = -1LL;
int64_t x511 = -2305843901120LL;
volatile int32_t t90 = 5832067;
int32_t x518 = 11366318;
volatile uint32_t x519 = 1672U;
int32_t x522 = -1;
uint64_t t92 = 1127825507LLU;
uint32_t x534 = 336542131U;
static int32_t x536 = -1;
static volatile uint64_t t95 = 10672520LLU;
int32_t x537 = INT32_MAX;
volatile int16_t x540 = INT16_MAX;
int8_t x547 = -14;
int64_t x551 = INT64_MAX;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int16_t x2 = 195;
	int32_t x3 = INT32_MAX;
	uint64_t x4 = 507947983540352LLU;
	volatile int32_t t0 = 14;

	t0 = (x1*(x2^(x3==x4)));

	if (t0 != 49725) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -30018974;

	t1 = (x5*(x6^(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile uint64_t x10 = UINT64_MAX;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	uint64_t t2 = 72LLU;

	t2 = (x9*(x10^(x11==x12)));

	if (t2 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	int16_t x15 = 1;

	t3 = (x13*(x14^(x15==x16)));

	if (t3 != -2147450880) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;
	volatile uint64_t t4 = 195178807009513246LLU;

	t4 = (x21*(x22^(x23==x24)));

	if (t4 != 32768LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 4U;
	int8_t x27 = 1;
	int8_t x28 = -1;

	t5 = (x25*(x26^(x27==x28)));

	if (t5 != 1020) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	static int32_t x34 = -79;
	volatile int32_t x35 = INT32_MIN;
	volatile int64_t x36 = 103LL;
	int32_t t6 = -4117;

	t6 = (x33*(x34^(x35==x36)));

	if (t6 != 79) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = 38540961LLU;
	volatile int64_t x38 = 35LL;
	int8_t x39 = 1;
	volatile uint64_t x40 = 9818389LLU;
	uint64_t t7 = 47339LLU;

	t7 = (x37*(x38^(x39==x40)));

	if (t7 != 1348933635LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -26;
	volatile int8_t x42 = -11;
	int64_t x44 = -1LL;
	int32_t t8 = -41780389;

	t8 = (x41*(x42^(x43==x44)));

	if (t8 != 286) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 24643U;
	uint64_t x54 = 2824LLU;
	uint16_t x55 = UINT16_MAX;
	static volatile int64_t x56 = INT64_MIN;
	uint64_t t9 = 1104051665727LLU;

	t9 = (x53*(x54^(x55==x56)));

	if (t9 != 69591832LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x57 = 1;
	static int64_t x59 = -1LL;
	int8_t x60 = INT8_MIN;

	t10 = (x57*(x58^(x59==x60)));

	if (t10 != 22) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x62 = INT8_MAX;
	int64_t x63 = 2651LL;
	static int64_t x64 = -1LL;
	volatile uint64_t t11 = 63LLU;

	t11 = (x61*(x62^(x63==x64)));

	if (t11 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x70 = INT64_MAX;
	int64_t x71 = -1LL;
	static uint64_t x72 = 8933266LLU;
	static volatile int64_t t12 = 798639133132814546LL;

	t12 = (x69*(x70^(x71==x72)));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MAX;
	static int32_t x79 = 155;
	volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t13 = 0;

	t13 = (x77*(x78^(x79==x80)));

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 15U;
	int16_t x82 = -1;
	int8_t x83 = INT8_MAX;
	static volatile int32_t t14 = 5345258;

	t14 = (x81*(x82^(x83==x84)));

	if (t14 != -15) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x85 = 140418580LLU;
	int8_t x86 = -1;
	static int64_t x87 = 248292005790452800LL;
	int8_t x88 = 0;
	static volatile uint64_t t15 = 37397LLU;

	t15 = (x85*(x86^(x87==x88)));

	if (t15 != 18446744073569133036LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MIN;
	volatile int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t16 = INT32_MIN;

	t16 = (x93*(x94^(x95==x96)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x98 = 516U;
	int64_t x99 = INT64_MIN;
	int32_t x100 = 350989829;
	uint32_t t17 = 167U;

	t17 = (x97*(x98^(x99==x100)));

	if (t17 != 16907772U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x102 = 62890LLU;
	uint8_t x103 = 1U;
	volatile uint64_t t18 = 132912961646786LLU;

	t18 = (x101*(x102^(x103==x104)));

	if (t18 != 3899180LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = -924694066559LL;
	int16_t x107 = 0;
	uint32_t x108 = 771220297U;
	int64_t t19 = -30030LL;

	t19 = (x105*(x106^(x107==x108)));

	if (t19 != -30299450478938753LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x110 = 57581;
	int64_t x111 = 10172221410LL;
	static int16_t x112 = INT16_MAX;
	int32_t t20 = -381;

	t20 = (x109*(x110^(x111==x112)));

	if (t20 != -1886814208) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = 563487113U;
	uint32_t x118 = UINT32_MAX;
	uint64_t x119 = 59204LLU;
	volatile uint8_t x120 = 68U;
	uint32_t t21 = 17791908U;

	t21 = (x117*(x118^(x119==x120)));

	if (t21 != 3731480183U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x121 = UINT16_MAX;
	volatile uint8_t x124 = UINT8_MAX;
	volatile int32_t t22 = -155;

	t22 = (x121*(x122^(x123==x124)));

	if (t22 != -8322945) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x125 = 1561413U;
	int16_t x126 = INT16_MAX;
	uint8_t x127 = 5U;
	uint8_t x128 = 94U;
	uint32_t t23 = 37U;

	t23 = (x125*(x126^(x127==x128)));

	if (t23 != 3918179515U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x136 = 1137319293974717LLU;

	t24 = (x133*(x134^(x135==x136)));

	if (t24 != -211398887) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x137 = 2U;
	volatile int64_t x138 = 1LL;
	int8_t x139 = INT8_MIN;
	volatile int8_t x140 = -1;
	volatile int64_t t25 = 1LL;

	t25 = (x137*(x138^(x139==x140)));

	if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x145 = UINT8_MAX;
	static uint32_t x146 = 1566U;
	static int64_t x148 = INT64_MIN;
	volatile uint32_t t26 = 71U;

	t26 = (x145*(x146^(x147==x148)));

	if (t26 != 399330U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x149 = INT16_MIN;
	uint8_t x150 = UINT8_MAX;
	int64_t x151 = 1328761482LL;
	volatile int32_t t27 = -176921620;

	t27 = (x149*(x150^(x151==x152)));

	if (t27 != -8355840) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x153 = INT8_MIN;
	uint8_t x154 = 30U;
	int16_t x155 = INT16_MAX;
	uint64_t x156 = 493LLU;
	int32_t t28 = 24;

	t28 = (x153*(x154^(x155==x156)));

	if (t28 != -3840) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = 163;
	uint8_t x158 = 91U;
	volatile int16_t x159 = 11;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t29 = 367128467;

	t29 = (x157*(x158^(x159==x160)));

	if (t29 != 14833) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x170 = -1;
	int16_t x171 = -254;
	int8_t x172 = INT8_MAX;
	int32_t t30 = -471553;

	t30 = (x169*(x170^(x171==x172)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x173 = UINT32_MAX;
	int32_t x174 = 7130;
	int16_t x175 = -388;
	int64_t x176 = INT64_MAX;
	uint32_t t31 = 763U;

	t31 = (x173*(x174^(x175==x176)));

	if (t31 != 4294960166U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x177 = -6;
	uint16_t x180 = UINT16_MAX;

	t32 = (x177*(x178^(x179==x180)));

	if (t32 != 1158) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x189 = INT16_MIN;
	volatile int16_t x192 = INT16_MAX;
	int32_t t33 = -3007;

	t33 = (x189*(x190^(x191==x192)));

	if (t33 != -360448) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x193 = -18;
	volatile int64_t x195 = INT64_MIN;
	volatile int32_t t34 = 27533;

	t34 = (x193*(x194^(x195==x196)));

	if (t34 != -2286) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x205 = 10433LL;
	uint32_t x208 = 2U;
	int64_t t35 = 12326401594647687LL;

	t35 = (x205*(x206^(x207==x208)));

	if (t35 != -10433LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x209 = 11LLU;
	static uint64_t x210 = 108LLU;
	static volatile uint16_t x211 = UINT16_MAX;
	int8_t x212 = INT8_MIN;

	t36 = (x209*(x210^(x211==x212)));

	if (t36 != 1188LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x214 = -113;
	volatile uint8_t x215 = UINT8_MAX;
	int64_t x216 = -4LL;
	volatile uint32_t t37 = 50000U;

	t37 = (x213*(x214^(x215==x216)));

	if (t37 != 4014246043U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = 0;
	uint32_t x219 = UINT32_MAX;
	uint8_t x220 = 4U;
	int32_t t38 = -72;

	t38 = (x217*(x218^(x219==x220)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x221 = 2158U;
	int16_t x222 = -447;
	volatile int32_t x224 = INT32_MIN;
	volatile uint32_t t39 = 1128002030U;

	t39 = (x221*(x222^(x223==x224)));

	if (t39 != 4294002670U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x230 = 868;
	static uint8_t x231 = 3U;
	uint64_t x232 = UINT64_MAX;

	t40 = (x229*(x230^(x231==x232)));

	if (t40 != -868) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x243 = 7LLU;
	uint64_t x244 = 787953664LLU;
	uint64_t t41 = 8633388093383LLU;

	t41 = (x241*(x242^(x243==x244)));

	if (t41 != 18068609266345946496LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = 5;
	uint16_t x247 = 1U;
	volatile int16_t x248 = -1;
	int32_t t42 = -82;

	t42 = (x245*(x246^(x247==x248)));

	if (t42 != -5) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x251 = INT16_MAX;
	uint8_t x252 = 9U;
	volatile uint64_t t43 = 11587LLU;

	t43 = (x249*(x250^(x251==x252)));

	if (t43 != 3650402050442788864LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x253 = UINT32_MAX;
	static uint8_t x255 = 29U;
	static uint16_t x256 = 320U;
	static uint32_t t44 = 674182U;

	t44 = (x253*(x254^(x255==x256)));

	if (t44 != 4294967041U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x257 = INT8_MIN;
	int8_t x258 = 1;
	int32_t x259 = INT32_MIN;
	int64_t x260 = -1LL;

	t45 = (x257*(x258^(x259==x260)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x261 = INT8_MIN;
	volatile int16_t x262 = -593;
	int64_t x263 = 99421824674LL;
	volatile int16_t x264 = 23;

	t46 = (x261*(x262^(x263==x264)));

	if (t46 != 75904) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x265 = -1;
	int32_t x266 = -1;
	volatile int64_t x267 = -1LL;
	int8_t x268 = -1;
	int32_t t47 = -2020;

	t47 = (x265*(x266^(x267==x268)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x269 = 2U;
	uint8_t x270 = UINT8_MAX;
	uint16_t x272 = 717U;
	int32_t t48 = 59302;

	t48 = (x269*(x270^(x271==x272)));

	if (t48 != 510) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x274 = INT32_MAX;
	uint16_t x276 = 620U;
	uint32_t t49 = 1652455U;

	t49 = (x273*(x274^(x275==x276)));

	if (t49 != 4199396206U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = -1;
	int16_t x288 = -1;
	volatile int32_t t50 = 0;

	t50 = (x285*(x286^(x287==x288)));

	if (t50 != 16256) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x289 = -1;
	int16_t x290 = -1;
	static int64_t x291 = -1LL;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t51 = -7819;

	t51 = (x289*(x290^(x291==x292)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x295 = UINT32_MAX;
	static uint64_t x296 = UINT64_MAX;

	t52 = (x293*(x294^(x295==x296)));

	if (t52 != 917031255) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x301 = 50U;
	static volatile int8_t x302 = 14;
	uint32_t x303 = UINT32_MAX;
	volatile uint32_t x304 = 1203596U;
	int32_t t53 = -1;

	t53 = (x301*(x302^(x303==x304)));

	if (t53 != 700) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x305 = UINT16_MAX;
	uint64_t x306 = 25374103481850LLU;
	int32_t x307 = INT32_MAX;
	static int16_t x308 = INT16_MAX;
	static uint64_t t54 = 264215930LLU;

	t54 = (x305*(x306^(x307==x308)));

	if (t54 != 1662891871683039750LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x309 = 0U;
	volatile int16_t x310 = -8;
	volatile int64_t x312 = INT64_MAX;
	int32_t t55 = -14283;

	t55 = (x309*(x310^(x311==x312)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x313 = 2647153865LLU;
	uint32_t x316 = 117308187U;

	t56 = (x313*(x314^(x315==x316)));

	if (t56 != 1837124782310LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x317 = 17856U;
	int16_t x318 = INT16_MIN;
	static uint32_t x319 = UINT32_MAX;
	volatile uint32_t t57 = 47058U;

	t57 = (x317*(x318^(x319==x320)));

	if (t57 != 3709861888U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x321 = INT64_MIN;
	static uint8_t x322 = 1U;
	static int64_t x323 = 12LL;
	uint32_t x324 = 13U;
	int64_t t58 = INT64_MIN;

	t58 = (x321*(x322^(x323==x324)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x329 = 409780411LLU;
	int32_t x331 = -938051101;
	uint16_t x332 = 425U;

	t59 = (x329*(x330^(x331==x332)));

	if (t59 != 18446744073299771205LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x333 = 1U;
	uint32_t x334 = 1079U;
	int8_t x335 = INT8_MAX;
	static uint32_t x336 = 332330U;
	volatile uint32_t t60 = 247U;

	t60 = (x333*(x334^(x335==x336)));

	if (t60 != 1079U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x341 = 1827;
	int16_t x342 = INT16_MIN;
	volatile int64_t x343 = -2524815608LL;
	int8_t x344 = INT8_MIN;
	int32_t t61 = -3115731;

	t61 = (x341*(x342^(x343==x344)));

	if (t61 != -59867136) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x345 = -1;
	int8_t x346 = INT8_MIN;
	static int16_t x347 = -6;
	int8_t x348 = INT8_MAX;
	int32_t t62 = -108078;

	t62 = (x345*(x346^(x347==x348)));

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x349 = 484;
	uint32_t x351 = 572968231U;
	uint16_t x352 = 28905U;
	volatile int32_t t63 = -417112;

	t63 = (x349*(x350^(x351==x352)));

	if (t63 != -484) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x353 = 1U;
	uint8_t x354 = 3U;
	int32_t x355 = INT32_MAX;
	static int32_t x356 = INT32_MIN;

	t64 = (x353*(x354^(x355==x356)));

	if (t64 != 3U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x357 = UINT32_MAX;
	uint16_t x358 = 31462U;
	int64_t x359 = -1LL;
	int64_t x360 = 35730228LL;
	uint32_t t65 = 94731U;

	t65 = (x357*(x358^(x359==x360)));

	if (t65 != 4294935834U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x361 = 5U;
	int8_t x362 = INT8_MIN;
	int32_t x363 = -983;
	int16_t x364 = INT16_MIN;

	t66 = (x361*(x362^(x363==x364)));

	if (t66 != -640) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x365 = -1;
	volatile uint8_t x366 = 0U;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MAX;
	volatile int32_t t67 = 4;

	t67 = (x365*(x366^(x367==x368)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x369 = INT8_MAX;
	int64_t x370 = 0LL;
	static int64_t t68 = -284472776821926150LL;

	t68 = (x369*(x370^(x371==x372)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x373 = -1;
	volatile int8_t x374 = -1;
	int16_t x375 = INT16_MAX;
	uint32_t x376 = UINT32_MAX;

	t69 = (x373*(x374^(x375==x376)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x382 = 85228182LLU;
	uint64_t x383 = UINT64_MAX;
	volatile uint64_t t70 = 68LLU;

	t70 = (x381*(x382^(x383==x384)));

	if (t70 != 20625220044LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x389 = -2054811LL;
	uint64_t x390 = UINT64_MAX;
	uint8_t x391 = 19U;
	volatile int8_t x392 = INT8_MIN;
	uint64_t t71 = 947399588180921LLU;

	t71 = (x389*(x390^(x391==x392)));

	if (t71 != 2054811LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x401 = INT32_MAX;
	volatile uint64_t x402 = 111175860LLU;
	uint8_t x403 = 1U;
	uint64_t t72 = 2436LLU;

	t72 = (x401*(x402^(x403==x404)));

	if (t72 != 238748341291161420LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x405 = -415LL;
	int8_t x406 = 0;
	uint8_t x407 = UINT8_MAX;
	int16_t x408 = -8;
	int64_t t73 = 319072988LL;

	t73 = (x405*(x406^(x407==x408)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x409 = 2340U;
	volatile int32_t x410 = INT32_MIN;
	int32_t x412 = -1;
	static volatile uint32_t t74 = 2U;

	t74 = (x409*(x410^(x411==x412)));

	if (t74 != 2340U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x413 = UINT64_MAX;
	volatile int16_t x414 = -97;
	volatile int16_t x415 = -1;
	volatile int64_t x416 = 302360822LL;
	uint64_t t75 = 164766LLU;

	t75 = (x413*(x414^(x415==x416)));

	if (t75 != 97LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x421 = 1U;
	volatile int64_t x422 = 132710625998248050LL;
	int64_t x424 = INT64_MIN;
	volatile int64_t t76 = -5056904610662LL;

	t76 = (x421*(x422^(x423==x424)));

	if (t76 != 132710625998248050LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x425 = 422U;
	static int32_t x426 = 3680938;
	int16_t x427 = -1;
	volatile uint32_t t77 = 36962U;

	t77 = (x425*(x426^(x427==x428)));

	if (t77 != 1553355836U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x429 = INT8_MIN;
	static int32_t x430 = -1;
	int64_t x431 = INT64_MIN;
	volatile int64_t x432 = -1LL;
	int32_t t78 = -1;

	t78 = (x429*(x430^(x431==x432)));

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x433 = 7990U;
	uint16_t x434 = UINT16_MAX;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t79 = -614043;

	t79 = (x433*(x434^(x435==x436)));

	if (t79 != 523624650) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = INT16_MIN;
	static int16_t x438 = INT16_MAX;
	uint8_t x439 = UINT8_MAX;
	int32_t x440 = -43;
	static volatile int32_t t80 = 1513713;

	t80 = (x437*(x438^(x439==x440)));

	if (t80 != -1073709056) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x453 = 11U;
	int32_t x454 = -35834928;
	static int16_t x455 = INT16_MIN;
	uint32_t x456 = 819270U;

	t81 = (x453*(x454^(x455==x456)));

	if (t81 != -394184208) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x457 = -78;
	volatile uint8_t x460 = 1U;
	uint32_t t82 = 77172U;

	t82 = (x457*(x458^(x459==x460)));

	if (t82 != 3018775798U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x465 = 13;
	int16_t x466 = INT16_MAX;
	int64_t x467 = INT64_MAX;
	int32_t x468 = 55003;
	int32_t t83 = -261;

	t83 = (x465*(x466^(x467==x468)));

	if (t83 != 425971) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x477 = 13023649600LLU;
	int64_t x478 = -1LL;
	static int8_t x479 = INT8_MAX;
	int64_t x480 = INT64_MIN;
	uint64_t t84 = 450614828LLU;

	t84 = (x477*(x478^(x479==x480)));

	if (t84 != 18446744060685902016LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x481 = INT16_MIN;
	int8_t x482 = -27;
	int8_t x484 = INT8_MIN;
	int32_t t85 = -616;

	t85 = (x481*(x482^(x483==x484)));

	if (t85 != 884736) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x485 = INT16_MAX;
	uint16_t x486 = 6U;
	volatile uint64_t x487 = UINT64_MAX;
	int32_t x488 = 1574123;
	int32_t t86 = 14732857;

	t86 = (x485*(x486^(x487==x488)));

	if (t86 != 196602) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x493 = -1;
	uint16_t x495 = UINT16_MAX;
	volatile uint32_t t87 = 26589627U;

	t87 = (x493*(x494^(x495==x496)));

	if (t87 != 4294967275U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x501 = -129455557885505956LL;
	int8_t x502 = 18;
	static volatile uint32_t x504 = 20775U;
	volatile int64_t t88 = -208471242125LL;

	t88 = (x501*(x502^(x503==x504)));

	if (t88 != -2330200041939107208LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x505 = INT32_MIN;
	int8_t x506 = 1;
	int16_t x507 = INT16_MIN;
	int32_t x508 = INT32_MIN;
	int32_t t89 = INT32_MIN;

	t89 = (x505*(x506^(x507==x508)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x509 = INT8_MIN;
	int16_t x510 = INT16_MIN;
	uint32_t x512 = UINT32_MAX;

	t90 = (x509*(x510^(x511==x512)));

	if (t90 != 4194304) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x517 = -186;
	uint32_t x520 = 10U;
	volatile int32_t t91 = 214165;

	t91 = (x517*(x518^(x519==x520)));

	if (t91 != -2114135148) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x521 = 0LLU;
	uint8_t x523 = 3U;
	volatile int8_t x524 = -1;

	t92 = (x521*(x522^(x523==x524)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x525 = UINT64_MAX;
	static volatile int8_t x526 = 0;
	int16_t x527 = INT16_MIN;
	static int64_t x528 = 270661558867075690LL;
	volatile uint64_t t93 = 1609845068175LLU;

	t93 = (x525*(x526^(x527==x528)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x529 = INT16_MAX;
	uint8_t x530 = 0U;
	int8_t x531 = 0;
	int32_t x532 = -43;
	int32_t t94 = 10473849;

	t94 = (x529*(x530^(x531==x532)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x533 = 215056LLU;
	int64_t x535 = -1LL;

	t95 = (x533*(x534^(x535==x536)));

	if (t95 != 72375404309280LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x538 = -1;
	int64_t x539 = -27670318LL;
	volatile int32_t t96 = 49211;

	t96 = (x537*(x538^(x539==x540)));

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x541 = 1U;
	volatile uint64_t x542 = 243607832LLU;
	int32_t x543 = INT32_MIN;
	int8_t x544 = -59;
	static volatile uint64_t t97 = 166074872413766028LLU;

	t97 = (x541*(x542^(x543==x544)));

	if (t97 != 243607832LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x545 = UINT64_MAX;
	int16_t x546 = INT16_MIN;
	int32_t x548 = INT32_MAX;
	volatile uint64_t t98 = 3503852393703935LLU;

	t98 = (x545*(x546^(x547==x548)));

	if (t98 != 32768LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x549 = 0U;
	uint16_t x550 = 50U;
	int8_t x552 = INT8_MIN;
	static volatile int32_t t99 = -1370;

	t99 = (x549*(x550^(x551==x552)));

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

