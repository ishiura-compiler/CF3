#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -63018;
volatile int16_t x9 = -189;
volatile uint64_t x11 = 5007416990880167LLU;
volatile int64_t x14 = INT64_MAX;
volatile int64_t t2 = 13465818LL;
static int8_t x17 = INT8_MIN;
volatile int64_t x25 = -1LL;
uint64_t t5 = 35LLU;
int64_t x34 = INT64_MIN;
static int64_t x41 = 62LL;
volatile int8_t x44 = INT8_MAX;
static int64_t t9 = 3023265LL;
uint32_t x55 = 42520U;
volatile int16_t x56 = -1;
uint16_t x61 = 1217U;
uint16_t x63 = 23U;
volatile uint16_t x75 = 66U;
int8_t x76 = -3;
int64_t x94 = -15579LL;
uint32_t x100 = UINT32_MAX;
int8_t x103 = INT8_MIN;
uint64_t x108 = 24217LLU;
static uint64_t t20 = 87120057467190872LLU;
static int32_t x130 = INT32_MIN;
uint16_t x131 = 13U;
uint64_t t22 = 17889817555943036LLU;
int32_t x133 = 8;
volatile int16_t x158 = INT16_MIN;
int64_t x164 = -280082874LL;
int32_t x172 = INT32_MIN;
int32_t x182 = 4;
uint32_t x201 = UINT32_MAX;
uint8_t x211 = UINT8_MAX;
int32_t x214 = INT32_MIN;
volatile int8_t x215 = -24;
volatile int64_t x233 = INT64_MIN;
static int8_t x235 = INT8_MIN;
volatile int64_t t37 = -338052LL;
int64_t x237 = INT64_MIN;
int64_t x242 = -13075475LL;
int32_t x243 = 66780;
int32_t x244 = 1;
uint16_t x251 = UINT16_MAX;
int16_t x253 = -19;
static volatile int64_t x254 = INT64_MAX;
int8_t x255 = 2;
int8_t x256 = -1;
int32_t x258 = -47101385;
int8_t x263 = 6;
int8_t x269 = -15;
int16_t x271 = INT16_MIN;
static volatile int64_t x276 = -35744LL;
uint16_t x279 = 21U;
static int32_t x290 = INT32_MIN;
int32_t t48 = 42800557;
uint16_t x308 = 2U;
volatile int16_t x309 = -1;
uint32_t x318 = 60U;
uint32_t x326 = 6U;
int64_t x328 = -1LL;
uint32_t x343 = 25029U;
int32_t x344 = 110978;
int8_t x366 = -1;
int32_t x370 = INT32_MAX;
int64_t t61 = 418039193484181LL;
uint32_t x379 = 36646703U;
int16_t x402 = INT16_MAX;
static uint8_t x403 = 30U;
volatile int8_t x404 = -1;
uint32_t x407 = 22U;
volatile int8_t x422 = 11;
int8_t x423 = 14;
int8_t x437 = INT8_MIN;
uint16_t x440 = 1676U;
int16_t x450 = INT16_MIN;
int8_t x458 = -1;
volatile int8_t x469 = 8;
volatile int8_t x476 = 1;
static uint32_t x480 = UINT32_MAX;
volatile int32_t x486 = -256640893;
uint64_t t81 = 1395270182126306957LLU;
int32_t x489 = -1;
int8_t x490 = -1;
static int32_t t82 = 956482446;
volatile int16_t x503 = INT16_MAX;
static uint32_t x508 = 52320U;
int8_t x511 = INT8_MIN;
uint16_t x513 = 268U;
int16_t x514 = 1897;
volatile int8_t x531 = INT8_MAX;
int64_t x539 = 29199120483LL;
static uint64_t x540 = 69731870768LLU;
static uint64_t x543 = 1984LLU;
volatile uint16_t x546 = UINT16_MAX;
int16_t x550 = -1;
int32_t t94 = 3;
int8_t x569 = -24;
int64_t t95 = -2141025440LL;
volatile int8_t x575 = -4;
int16_t x576 = 1;
int32_t x583 = -1;
int64_t x584 = -1LL;


void f0(void) {
	int64_t x2 = INT64_MAX;
	uint64_t x3 = 41787425793316305LLU;
	static int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 27493974712108620LLU;

	t0 = (x1+(x2%(x3*x4)));

	if (t0 != 2251389594916293077LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = 427U;
	static uint8_t x12 = UINT8_MAX;
	uint64_t t1 = 25311LLU;

	t1 = (x9+(x10%(x11*x12)));

	if (t1 != 238LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 18U;
	uint8_t x15 = UINT8_MAX;
	static volatile int16_t x16 = -1;

	t2 = (x13+(x14%(x15*x16)));

	if (t2 != 145LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x18 = 0U;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = 3U;
	static int32_t t3 = -3085;

	t3 = (x17+(x18%(x19*x20)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x26 = -1058;
	int8_t x27 = -1;
	int16_t x28 = -1;
	static int64_t t4 = 4LL;

	t4 = (x25+(x26%(x27*x28)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x29 = -1;
	uint64_t x30 = 12818722621542LLU;
	static volatile uint64_t x31 = 9186983484540501686LLU;
	volatile int32_t x32 = -3220491;

	t5 = (x29+(x30%(x31*x32)));

	if (t5 != 12818722621541LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 745018124LLU;
	int8_t x35 = -1;
	uint64_t x36 = 479LLU;
	uint64_t t6 = 35941LLU;

	t6 = (x33+(x34%(x35*x36)));

	if (t6 != 9223372037599793932LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	static uint8_t x38 = 60U;
	volatile uint64_t x39 = 8238485LLU;
	int64_t x40 = INT64_MIN;
	uint64_t t7 = 12856720LLU;

	t7 = (x37+(x38%(x39*x40)));

	if (t7 != 59LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MAX;
	volatile int64_t t8 = -1333942802LL;

	t8 = (x41+(x42%(x43*x44)));

	if (t8 != -196542LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = -1;
	volatile int16_t x50 = -4303;
	int32_t x51 = -53543841;
	int64_t x52 = -11760420LL;

	t9 = (x49+(x50%(x51*x52)));

	if (t9 != -4304LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 1761221216U;
	uint32_t x54 = UINT32_MAX;
	uint32_t t10 = 1239U;

	t10 = (x53+(x54%(x55*x56)));

	if (t10 != 1761263735U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x62 = 12U;
	int64_t x64 = -11408LL;
	volatile int64_t t11 = 2023815629755091LL;

	t11 = (x61+(x62%(x63*x64)));

	if (t11 != 1229LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x65 = 992475810074668058LL;
	volatile uint8_t x66 = 91U;
	int16_t x67 = 8269;
	int16_t x68 = INT16_MAX;
	static volatile int64_t t12 = 479418LL;

	t12 = (x65+(x66%(x67*x68)));

	if (t12 != 992475810074668149LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MIN;
	static volatile uint64_t x70 = UINT64_MAX;
	static int8_t x71 = 26;
	static volatile int16_t x72 = -215;
	volatile uint64_t t13 = 21978222983030LLU;

	t13 = (x69+(x70%(x71*x72)));

	if (t13 != 5461LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x73 = INT32_MIN;
	static volatile uint32_t x74 = 389890U;
	volatile uint32_t t14 = 110999U;

	t14 = (x73+(x74%(x75*x76)));

	if (t14 != 2147873538U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = 29U;
	volatile uint8_t x82 = UINT8_MAX;
	uint64_t x83 = 101LLU;
	static int8_t x84 = -47;
	volatile uint64_t t15 = 8000780LLU;

	t15 = (x81+(x82%(x83*x84)));

	if (t15 != 284LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -1LL;
	int32_t x86 = -1;
	int16_t x87 = INT16_MIN;
	int8_t x88 = -1;
	int64_t t16 = 12626913210382LL;

	t16 = (x85+(x86%(x87*x88)));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = 9858LL;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = INT16_MAX;
	volatile int64_t t17 = -127LL;

	t17 = (x93+(x94%(x95*x96)));

	if (t17 != -5721LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x97 = 8506891990192LL;
	uint16_t x98 = UINT16_MAX;
	uint16_t x99 = UINT16_MAX;
	volatile int64_t t18 = 5LL;

	t18 = (x97+(x98%(x99*x100)));

	if (t18 != 8506892055727LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x101 = 23263U;
	int64_t x102 = -1LL;
	int64_t x104 = 53009478533339LL;
	int64_t t19 = 1059981883LL;

	t19 = (x101+(x102%(x103*x104)));

	if (t19 != 23262LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MIN;
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = UINT32_MAX;

	t20 = (x105+(x106%(x107*x108)));

	if (t20 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = -1;
	volatile uint64_t x122 = 1701LLU;
	volatile uint32_t x123 = 3U;
	volatile int32_t x124 = INT32_MIN;
	static uint64_t t21 = 1023336036202877282LLU;

	t21 = (x121+(x122%(x123*x124)));

	if (t21 != 1700LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = -1;
	uint64_t x132 = 224017665LLU;

	t22 = (x129+(x130%(x131*x132)));

	if (t22 != 536152582LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x134 = INT32_MIN;
	int32_t x135 = -112;
	static volatile uint8_t x136 = 33U;
	static int32_t t23 = -29240504;

	t23 = (x133+(x134%(x135*x136)));

	if (t23 != -456) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = INT32_MIN;
	static int32_t x142 = INT32_MAX;
	uint8_t x143 = UINT8_MAX;
	uint8_t x144 = 3U;
	volatile int32_t t24 = -526687167;

	t24 = (x141+(x142%(x143*x144)));

	if (t24 != -2147483521) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MIN;
	int8_t x155 = -1;
	static uint8_t x156 = 55U;
	int32_t t25 = -17885;

	t25 = (x153+(x154%(x155*x156)));

	if (t25 != -32786) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x157 = 4134;
	int32_t x159 = INT32_MAX;
	static uint32_t x160 = 17216U;
	volatile uint32_t t26 = 3U;

	t26 = (x157+(x158%(x159*x160)));

	if (t26 != 4294938662U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x162 = 77U;
	volatile int32_t x163 = -1152999;
	volatile int64_t t27 = -219642150081369LL;

	t27 = (x161+(x162%(x163*x164)));

	if (t27 != -2147483571LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x165 = 958U;
	int16_t x166 = 120;
	uint64_t x167 = UINT64_MAX;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t28 = 10590548709761339LLU;

	t28 = (x165+(x166%(x167*x168)));

	if (t28 != 958LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x169 = INT32_MIN;
	volatile uint64_t x170 = 345170523LLU;
	uint16_t x171 = 1U;
	uint64_t t29 = 1361958511033811LLU;

	t29 = (x169+(x170%(x171*x172)));

	if (t29 != 18446744071907238491LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x177 = 12;
	int32_t x178 = -52885;
	int16_t x179 = INT16_MIN;
	static int16_t x180 = INT16_MAX;
	volatile int32_t t30 = -2804;

	t30 = (x177+(x178%(x179*x180)));

	if (t30 != -52873) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x181 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;
	uint8_t x184 = 38U;
	volatile uint64_t t31 = 405518424653609LLU;

	t31 = (x181+(x182%(x183*x184)));

	if (t31 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x202 = 1380U;
	int8_t x203 = 4;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t32 = 572LLU;

	t32 = (x201+(x202%(x203*x204)));

	if (t32 != 4294968675LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x205 = 0U;
	static uint16_t x206 = 10694U;
	static volatile int16_t x207 = INT16_MIN;
	int64_t x208 = 18938LL;
	volatile int64_t t33 = 54370493194914LL;

	t33 = (x205+(x206%(x207*x208)));

	if (t33 != 10694LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x209 = UINT64_MAX;
	int32_t x210 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	uint64_t t34 = 42151350998747330LLU;

	t34 = (x209+(x210%(x211*x212)));

	if (t34 != 18446744073709549702LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x213 = UINT16_MAX;
	uint16_t x216 = 15929U;
	volatile int32_t t35 = -9;

	t35 = (x213+(x214%(x215*x216)));

	if (t35 != -61481) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x225 = 1;
	uint64_t x226 = 1862583108711369LLU;
	int8_t x227 = INT8_MAX;
	static uint16_t x228 = 9937U;
	uint64_t t36 = 305022716080376623LLU;

	t36 = (x225+(x226%(x227*x228)));

	if (t36 != 1178406LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x234 = UINT16_MAX;
	uint32_t x236 = UINT32_MAX;

	t37 = (x233+(x234%(x235*x236)));

	if (t37 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x238 = INT32_MIN;
	volatile int16_t x239 = -1;
	uint32_t x240 = 11160U;
	static volatile int64_t t38 = -17992502938453603LL;

	t38 = (x237+(x238%(x239*x240)));

	if (t38 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x241 = UINT32_MAX;
	volatile int64_t t39 = 12LL;

	t39 = (x241+(x242%(x243*x244)));

	if (t39 != 4294913920LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x249 = INT32_MIN;
	static uint8_t x250 = 96U;
	int8_t x252 = INT8_MIN;
	volatile int32_t t40 = -8583614;

	t40 = (x249+(x250%(x251*x252)));

	if (t40 != -2147483552) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t t41 = 316922563LL;

	t41 = (x253+(x254%(x255*x256)));

	if (t41 != -18LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x257 = 0U;
	int16_t x259 = -1;
	static int64_t x260 = 2499781LL;
	volatile int64_t t42 = 6036571158LL;

	t42 = (x257+(x258%(x259*x260)));

	if (t42 != -2105327LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x261 = 1773607042834393866LLU;
	int16_t x262 = -1;
	uint8_t x264 = UINT8_MAX;
	volatile uint64_t t43 = 21LLU;

	t43 = (x261+(x262%(x263*x264)));

	if (t43 != 1773607042834393865LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x270 = -1;
	volatile int16_t x272 = 2;
	volatile int32_t t44 = -3995;

	t44 = (x269+(x270%(x271*x272)));

	if (t44 != -16) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x273 = INT64_MAX;
	int64_t x274 = -5781952232LL;
	int32_t x275 = INT32_MIN;
	static volatile int64_t t45 = 7222225247LL;

	t45 = (x273+(x274%(x275*x276)));

	if (t45 != 9223372031072823575LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x277 = 66852577013407662LL;
	uint64_t x278 = UINT64_MAX;
	static volatile uint8_t x280 = 8U;
	volatile uint64_t t46 = 415149662LLU;

	t46 = (x277+(x278%(x279*x280)));

	if (t46 != 66852577013407677LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x289 = 3U;
	static int64_t x291 = -118723LL;
	int32_t x292 = -102;
	int64_t t47 = -23619231LL;

	t47 = (x289+(x290%(x291*x292)));

	if (t47 != -4058603LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x293 = 9U;
	int16_t x294 = INT16_MIN;
	volatile int32_t x295 = -1941892;
	int8_t x296 = INT8_MIN;

	t48 = (x293+(x294%(x295*x296)));

	if (t48 != -32759) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x301 = -1;
	uint8_t x302 = 8U;
	static volatile int32_t x303 = -1;
	int32_t x304 = INT32_MAX;
	int32_t t49 = 0;

	t49 = (x301+(x302%(x303*x304)));

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x305 = 28662U;
	uint64_t x306 = 22533001444LLU;
	int16_t x307 = INT16_MIN;
	uint64_t t50 = 1LLU;

	t50 = (x305+(x306%(x307*x308)));

	if (t50 != 22533030106LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	volatile uint16_t x312 = 1U;
	int32_t t51 = 224;

	t51 = (x309+(x310%(x311*x312)));

	if (t51 != -129) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x313 = 10U;
	uint8_t x314 = UINT8_MAX;
	static uint64_t x315 = 687324LLU;
	int16_t x316 = -1;
	volatile uint64_t t52 = 0LLU;

	t52 = (x313+(x314%(x315*x316)));

	if (t52 != 265LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x317 = 41;
	int32_t x319 = -1805;
	int16_t x320 = INT16_MAX;
	volatile uint32_t t53 = 14846780U;

	t53 = (x317+(x318%(x319*x320)));

	if (t53 != 101U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x325 = INT16_MIN;
	int32_t x327 = -1;
	volatile int64_t t54 = 11079LL;

	t54 = (x325+(x326%(x327*x328)));

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x329 = -3;
	static uint16_t x330 = 540U;
	static int64_t x331 = 12348237476303LL;
	uint32_t x332 = 10U;
	static int64_t t55 = 1LL;

	t55 = (x329+(x330%(x331*x332)));

	if (t55 != 537LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x341 = -4085362061187236LL;
	int64_t x342 = INT64_MIN;
	volatile int64_t t56 = 2683947LL;

	t56 = (x341+(x342%(x343*x344)));

	if (t56 != -4085363344467508LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x353 = 0;
	int32_t x354 = INT32_MAX;
	volatile uint8_t x355 = 1U;
	static int64_t x356 = -39695327623079LL;
	volatile int64_t t57 = 4LL;

	t57 = (x353+(x354%(x355*x356)));

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x361 = 0U;
	int16_t x362 = 121;
	static volatile int8_t x363 = INT8_MAX;
	int32_t x364 = -8212386;
	volatile int32_t t58 = -315271;

	t58 = (x361+(x362%(x363*x364)));

	if (t58 != 121) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x365 = INT16_MAX;
	int16_t x367 = -73;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t59 = 483868;

	t59 = (x365+(x366%(x367*x368)));

	if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x369 = INT8_MIN;
	uint16_t x371 = 8U;
	uint64_t x372 = 129434485178LLU;
	volatile uint64_t t60 = 111786LLU;

	t60 = (x369+(x370%(x371*x372)));

	if (t60 != 2147483519LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x373 = INT8_MIN;
	static int16_t x374 = INT16_MIN;
	static int64_t x375 = -1LL;
	int32_t x376 = INT32_MAX;

	t61 = (x373+(x374%(x375*x376)));

	if (t61 != -32896LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x377 = 23843U;
	int8_t x378 = INT8_MIN;
	volatile int32_t x380 = 2199;
	uint32_t t62 = 10152U;

	t62 = (x377+(x378%(x379*x380)));

	if (t62 != 1018302442U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	int64_t x387 = 12145522541240LL;
	int16_t x388 = -1;
	int64_t t63 = -71LL;

	t63 = (x385+(x386%(x387*x388)));

	if (t63 != -1493571897256LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x389 = INT16_MAX;
	static int16_t x390 = INT16_MAX;
	int16_t x391 = -1;
	uint32_t x392 = 87600422U;
	uint32_t t64 = 2067254U;

	t64 = (x389+(x390%(x391*x392)));

	if (t64 != 65534U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x397 = 44U;
	volatile uint64_t x398 = 259932510LLU;
	uint16_t x399 = 880U;
	int8_t x400 = INT8_MIN;
	volatile uint64_t t65 = 7734814871647989655LLU;

	t65 = (x397+(x398%(x399*x400)));

	if (t65 != 259932554LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x401 = 150;
	volatile int32_t t66 = 10316;

	t66 = (x401+(x402%(x403*x404)));

	if (t66 != 157) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x405 = -1;
	int8_t x406 = INT8_MAX;
	int16_t x408 = 1;
	static volatile uint32_t t67 = 498422996U;

	t67 = (x405+(x406%(x407*x408)));

	if (t67 != 16U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x409 = 57;
	static int64_t x410 = INT64_MAX;
	uint32_t x411 = 115885446U;
	int64_t x412 = -10787381296LL;
	volatile int64_t t68 = 20886149847LL;

	t68 = (x409+(x410%(x411*x412)));

	if (t68 != 472668588241649752LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x417 = UINT64_MAX;
	int16_t x418 = INT16_MAX;
	uint32_t x419 = 54597517U;
	int8_t x420 = -1;
	uint64_t t69 = 244174799532383406LLU;

	t69 = (x417+(x418%(x419*x420)));

	if (t69 != 32766LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x421 = 32533617U;
	volatile int32_t x424 = -49330;
	volatile uint32_t t70 = 187U;

	t70 = (x421+(x422%(x423*x424)));

	if (t70 != 32533628U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = 380;
	static int8_t x431 = -1;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t71 = 7333U;

	t71 = (x429+(x430%(x431*x432)));

	if (t71 != 4294934528U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x438 = INT32_MIN;
	static int64_t x439 = -1LL;
	volatile int64_t t72 = 5LL;

	t72 = (x437+(x438%(x439*x440)));

	if (t72 != -1512LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x445 = 30U;
	static int8_t x446 = INT8_MAX;
	volatile uint64_t x447 = 3615440919267321901LLU;
	int64_t x448 = -35398842868LL;
	volatile uint64_t t73 = 10LLU;

	t73 = (x445+(x446%(x447*x448)));

	if (t73 != 157LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x449 = INT16_MAX;
	uint32_t x451 = UINT32_MAX;
	int32_t x452 = -1;
	uint32_t t74 = 3904U;

	t74 = (x449+(x450%(x451*x452)));

	if (t74 != 32767U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x457 = INT8_MAX;
	int16_t x459 = INT16_MAX;
	int32_t x460 = -1;
	volatile int32_t t75 = -1;

	t75 = (x457+(x458%(x459*x460)));

	if (t75 != 126) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x461 = 1389;
	volatile int16_t x462 = INT16_MIN;
	int32_t x463 = -245;
	static int8_t x464 = INT8_MIN;
	int32_t t76 = -250940;

	t76 = (x461+(x462%(x463*x464)));

	if (t76 != -19) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x465 = INT64_MIN;
	int64_t x466 = 55897714303226LL;
	static int64_t x467 = 78465LL;
	uint16_t x468 = 201U;
	int64_t t77 = -10800159734679695LL;

	t77 = (x465+(x466%(x467*x468)));

	if (t77 != -9223372036839869532LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x470 = UINT16_MAX;
	uint64_t x471 = 7371811LLU;
	uint64_t x472 = 458325172060LLU;
	volatile uint64_t t78 = 1320067LLU;

	t78 = (x469+(x470%(x471*x472)));

	if (t78 != 65543LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x473 = 211;
	uint32_t x474 = UINT32_MAX;
	int32_t x475 = INT32_MIN;
	static volatile uint32_t t79 = 28040115U;

	t79 = (x473+(x474%(x475*x476)));

	if (t79 != 2147483858U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x477 = -1;
	uint16_t x478 = 0U;
	int8_t x479 = -1;
	static uint32_t t80 = UINT32_MAX;

	t80 = (x477+(x478%(x479*x480)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x485 = INT8_MIN;
	int64_t x487 = 16193288LL;
	uint64_t x488 = UINT64_MAX;

	t81 = (x485+(x486%(x487*x488)));

	if (t81 != 18446744073452910595LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x491 = 1890;
	int32_t x492 = -1;

	t82 = (x489+(x490%(x491*x492)));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x497 = 9U;
	volatile int64_t x498 = -4520LL;
	volatile int16_t x499 = -1;
	uint64_t x500 = 134134000392LLU;
	volatile uint64_t t83 = 1238797526314361127LLU;

	t83 = (x497+(x498%(x499*x500)));

	if (t83 != 134133995881LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x501 = INT16_MIN;
	int16_t x502 = 1;
	volatile uint16_t x504 = 8166U;
	static volatile int32_t t84 = -178254362;

	t84 = (x501+(x502%(x503*x504)));

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x505 = -1;
	int64_t x506 = INT64_MAX;
	int8_t x507 = 7;
	static volatile int64_t t85 = -18900750311LL;

	t85 = (x505+(x506%(x507*x508)));

	if (t85 != 173886LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x509 = 10U;
	int32_t x510 = 930805867;
	int8_t x512 = INT8_MIN;
	int32_t t86 = -2;

	t86 = (x509+(x510%(x511*x512)));

	if (t86 != 14453) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x515 = 7U;
	uint8_t x516 = UINT8_MAX;
	int32_t t87 = -253;

	t87 = (x513+(x514%(x515*x516)));

	if (t87 != 380) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x529 = UINT16_MAX;
	int16_t x530 = INT16_MAX;
	uint32_t x532 = 5075U;
	uint32_t t88 = 2U;

	t88 = (x529+(x530%(x531*x532)));

	if (t88 != 98302U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x533 = -7025505LL;
	int64_t x534 = -1LL;
	int32_t x535 = 47;
	uint8_t x536 = 7U;
	static volatile int64_t t89 = -1056LL;

	t89 = (x533+(x534%(x535*x536)));

	if (t89 != -7025506LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x537 = INT8_MIN;
	int64_t x538 = 136648765166355575LL;
	uint64_t t90 = 6445816579291LLU;

	t90 = (x537+(x538%(x539*x540)));

	if (t90 != 136648765166355447LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x541 = UINT32_MAX;
	int8_t x542 = -1;
	uint32_t x544 = UINT32_MAX;
	volatile uint64_t t91 = 427368358621345747LLU;

	t91 = (x541+(x542%(x543*x544)));

	if (t91 != 558345748350LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x545 = 2U;
	uint8_t x547 = 2U;
	uint16_t x548 = 127U;
	volatile int32_t t92 = -294;

	t92 = (x545+(x546%(x547*x548)));

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x549 = 15;
	volatile int8_t x551 = INT8_MAX;
	int8_t x552 = INT8_MIN;
	int32_t t93 = -6;

	t93 = (x549+(x550%(x551*x552)));

	if (t93 != 14) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x561 = -1;
	int8_t x562 = INT8_MIN;
	int32_t x563 = -382501;
	int16_t x564 = -3416;

	t94 = (x561+(x562%(x563*x564)));

	if (t94 != -129) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x570 = 2135U;
	static volatile int64_t x571 = INT64_MAX;
	int32_t x572 = -1;

	t95 = (x569+(x570%(x571*x572)));

	if (t95 != 2111LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x573 = -1LL;
	int32_t x574 = INT32_MAX;
	int64_t t96 = -692762441838246LL;

	t96 = (x573+(x574%(x575*x576)));

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x581 = -314228472;
	int16_t x582 = -1;
	static int64_t t97 = -365170715402LL;

	t97 = (x581+(x582%(x583*x584)));

	if (t97 != -314228472LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x585 = UINT32_MAX;
	int16_t x586 = -1;
	volatile int32_t x587 = INT32_MAX;
	int16_t x588 = -1;
	volatile uint32_t t98 = 71789005U;

	t98 = (x585+(x586%(x587*x588)));

	if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x593 = INT8_MIN;
	int8_t x594 = INT8_MIN;
	volatile uint8_t x595 = UINT8_MAX;
	volatile uint16_t x596 = UINT16_MAX;
	int32_t t99 = 496389;

	t99 = (x593+(x594%(x595*x596)));

	if (t99 != -256) { NG(); } else { ; }
	
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

