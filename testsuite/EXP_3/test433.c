#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
int16_t x6 = 1;
int32_t x9 = INT32_MIN;
int64_t x10 = INT64_MIN;
int16_t x17 = INT16_MAX;
uint64_t x19 = UINT64_MAX;
volatile int32_t x20 = -899468;
static int32_t t6 = -6384;
uint16_t x36 = UINT16_MAX;
int8_t x38 = INT8_MAX;
uint16_t x46 = 789U;
int32_t x48 = -7;
uint8_t x51 = 40U;
static volatile uint64_t x56 = UINT64_MAX;
int64_t x61 = -1LL;
static uint16_t x62 = 4520U;
int8_t x71 = -1;
static int16_t x73 = 883;
volatile uint64_t x75 = UINT64_MAX;
uint64_t x80 = UINT64_MAX;
volatile uint64_t t16 = 4012444839609311572LLU;
int16_t x84 = -1;
static uint16_t x95 = 143U;
uint64_t x103 = UINT64_MAX;
int32_t x109 = INT32_MIN;
volatile int64_t x113 = 192831516687LL;
int16_t x119 = INT16_MIN;
int64_t x122 = -1LL;
int32_t x133 = INT32_MAX;
static int8_t x135 = INT8_MIN;
int8_t x142 = INT8_MIN;
int16_t x156 = INT16_MIN;
volatile int64_t x170 = INT64_MIN;
int64_t x171 = INT64_MIN;
int16_t x189 = -11;
int16_t x191 = -1;
int16_t x192 = -1;
uint8_t x202 = 8U;
int32_t t37 = -1300720;
int16_t x205 = INT16_MAX;
uint16_t x207 = 238U;
int64_t x208 = 79714LL;
int32_t x210 = INT32_MIN;
volatile uint64_t t39 = 14LLU;
uint8_t x217 = UINT8_MAX;
volatile int64_t t45 = 34LL;
int64_t x267 = -28893807LL;
static int64_t t47 = 2090020692LL;
uint32_t x274 = 56119U;
volatile uint32_t t51 = 363631U;
int16_t x297 = -251;
volatile uint64_t t54 = 2975559748459423LLU;
volatile int16_t x303 = -1;
uint32_t t55 = 2190617U;
int16_t x305 = INT16_MIN;
int16_t x314 = INT16_MIN;
static uint8_t x316 = 1U;
int16_t x325 = -1;
int32_t x326 = INT32_MAX;
int64_t x330 = INT64_MIN;
uint32_t x337 = UINT32_MAX;
int8_t x339 = INT8_MIN;
int16_t x349 = INT16_MIN;
int8_t x351 = INT8_MIN;
int64_t x355 = -967LL;
volatile uint8_t x364 = 5U;
static uint8_t x365 = UINT8_MAX;
int16_t x367 = -2438;
int8_t x370 = 1;
uint32_t t67 = 375U;
volatile int8_t x381 = -1;
static uint16_t x387 = UINT16_MAX;
static int8_t x390 = INT8_MIN;
uint8_t x391 = UINT8_MAX;
int16_t x396 = -1;
static uint64_t x399 = 19878331LLU;
volatile uint64_t t73 = 15428946535205LLU;
volatile int32_t t74 = -217;
int8_t x417 = INT8_MAX;
int32_t x431 = 70694;
volatile int32_t x439 = -1;
int8_t x440 = INT8_MAX;
int16_t x445 = -1;
int32_t x465 = -1;
volatile int64_t x466 = INT64_MIN;
static int16_t x472 = -1;
uint8_t x485 = UINT8_MAX;
volatile int32_t t90 = 40217;
volatile int32_t t92 = -394282;
int8_t x511 = INT8_MIN;
uint8_t x519 = 48U;
volatile int32_t t95 = 36;
volatile int16_t x521 = -1;
volatile uint64_t t96 = 222724327622LLU;
int32_t x525 = INT32_MIN;
int32_t x531 = -1;
static volatile int8_t x532 = INT8_MIN;
int8_t x536 = -1;


void f0(void) {
	int32_t x1 = 24880713;
	uint8_t x2 = 29U;
	int32_t x3 = -1;
	static uint16_t x4 = UINT16_MAX;
	int32_t t0 = 8;

	t0 = ((x1==x2)/(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x7 = -1LL;
	volatile int64_t x8 = -1LL;
	volatile int64_t t1 = 5359484636LL;

	t1 = ((x5==x6)/(x7*x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = INT64_MAX;
	uint8_t x12 = 1U;
	int64_t t2 = 67923LL;

	t2 = ((x9==x10)/(x11*x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 54339U;
	static uint64_t t3 = 161590LLU;

	t3 = ((x17==x18)/(x19*x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 751166U;
	static int32_t x22 = -1;
	static volatile uint16_t x23 = 1U;
	int64_t x24 = -173132751092905769LL;
	int64_t t4 = 2719540LL;

	t4 = ((x21==x22)/(x23*x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = UINT32_MAX;
	static volatile uint64_t x28 = 3LLU;
	volatile uint64_t t5 = 29LLU;

	t5 = ((x25==x26)/(x27*x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	volatile int32_t x30 = INT32_MIN;
	volatile int32_t x31 = -1933124;
	int32_t x32 = -1;

	t6 = ((x29==x30)/(x31*x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	static int16_t x34 = INT16_MIN;
	static int16_t x35 = -1;
	int32_t t7 = -492985;

	t7 = ((x33==x34)/(x35*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 6U;
	uint8_t x39 = 2U;
	volatile uint32_t x40 = 51U;
	uint32_t t8 = 524048998U;

	t8 = ((x37==x38)/(x39*x40));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	static uint64_t x47 = 277658074158267754LLU;
	uint64_t t9 = 215763940286352246LLU;

	t9 = ((x45==x46)/(x47*x48));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	volatile uint16_t x50 = 5844U;
	int8_t x52 = -1;
	volatile int32_t t10 = 3;

	t10 = ((x49==x50)/(x51*x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -11;
	int16_t x54 = 336;
	int32_t x55 = -1;
	volatile uint64_t t11 = 996647658215LLU;

	t11 = ((x53==x54)/(x55*x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x63 = -763;
	int16_t x64 = INT16_MIN;
	volatile int32_t t12 = -42236354;

	t12 = ((x61==x62)/(x63*x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = INT32_MIN;
	uint8_t x66 = 24U;
	static int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;
	volatile int32_t t13 = 123618;

	t13 = ((x65==x66)/(x67*x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -128;
	static int16_t x70 = INT16_MIN;
	int64_t x72 = -2347891461412568LL;
	int64_t t14 = 185811882712846048LL;

	t14 = ((x69==x70)/(x71*x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = INT64_MIN;
	static int8_t x76 = -2;
	volatile uint64_t t15 = 92730666LLU;

	t15 = ((x73==x74)/(x75*x76));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MIN;
	static uint32_t x79 = 225332498U;

	t16 = ((x77==x78)/(x79*x80));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -1;
	int32_t x82 = INT32_MIN;
	uint8_t x83 = UINT8_MAX;
	int32_t t17 = -5861639;

	t17 = ((x81==x82)/(x83*x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = 2;
	static int8_t x94 = INT8_MIN;
	uint16_t x96 = 1U;
	static int32_t t18 = -202056;

	t18 = ((x93==x94)/(x95*x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = 608;
	volatile uint8_t x104 = 17U;
	volatile uint64_t t19 = 145851938905671660LLU;

	t19 = ((x101==x102)/(x103*x104));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x110 = INT16_MIN;
	uint64_t x111 = 2120150911081067LLU;
	uint8_t x112 = 4U;
	volatile uint64_t t20 = 8137LLU;

	t20 = ((x109==x110)/(x111*x112));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x114 = 196309613U;
	uint16_t x115 = 414U;
	uint32_t x116 = 31U;
	static uint32_t t21 = 56214U;

	t21 = ((x113==x114)/(x115*x116));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x117 = 166663521115LLU;
	static uint16_t x118 = 5831U;
	uint64_t x120 = 39570LLU;
	volatile uint64_t t22 = 358LLU;

	t22 = ((x117==x118)/(x119*x120));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = 1529U;
	static volatile uint16_t x123 = 3772U;
	int8_t x124 = INT8_MIN;
	int32_t t23 = 5;

	t23 = ((x121==x122)/(x123*x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = 28U;
	uint16_t x130 = 19304U;
	static int64_t x131 = -4110305LL;
	volatile uint32_t x132 = 5280U;
	static volatile int64_t t24 = 190902915448626225LL;

	t24 = ((x129==x130)/(x131*x132));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x134 = 3U;
	volatile uint16_t x136 = 2796U;
	int32_t t25 = -2721;

	t25 = ((x133==x134)/(x135*x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = -40676989LL;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = -1;
	int16_t x140 = -191;
	volatile int32_t t26 = 360736;

	t26 = ((x137==x138)/(x139*x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = INT16_MAX;
	int32_t x143 = INT32_MIN;
	int64_t x144 = -1LL;
	volatile int64_t t27 = -296886656LL;

	t27 = ((x141==x142)/(x143*x144));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x149 = 1006;
	static uint32_t x150 = 16U;
	int8_t x151 = INT8_MIN;
	static int16_t x152 = INT16_MIN;
	volatile int32_t t28 = 147678822;

	t28 = ((x149==x150)/(x151*x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x153 = INT64_MIN;
	int32_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	volatile uint64_t t29 = 453680LLU;

	t29 = ((x153==x154)/(x155*x156));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x162 = 94U;
	uint8_t x163 = 1U;
	static uint64_t x164 = UINT64_MAX;
	volatile uint64_t t30 = 46293311005431LLU;

	t30 = ((x161==x162)/(x163*x164));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x165 = UINT16_MAX;
	int32_t x166 = INT32_MIN;
	volatile uint32_t x167 = 2429U;
	static int32_t x168 = -456;
	volatile uint32_t t31 = 985213U;

	t31 = ((x165==x166)/(x167*x168));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x169 = 30U;
	static uint64_t x172 = UINT64_MAX;
	volatile uint64_t t32 = 1836LLU;

	t32 = ((x169==x170)/(x171*x172));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = INT32_MAX;
	int16_t x182 = -4840;
	int16_t x183 = INT16_MIN;
	int16_t x184 = -1877;
	volatile int32_t t33 = -20921;

	t33 = ((x181==x182)/(x183*x184));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = INT64_MIN;
	uint32_t x186 = 50U;
	volatile uint8_t x187 = UINT8_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t34 = 278;

	t34 = ((x185==x186)/(x187*x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x190 = 1294;
	int32_t t35 = 192;

	t35 = ((x189==x190)/(x191*x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = 0;
	int32_t x198 = INT32_MIN;
	volatile uint8_t x199 = 14U;
	uint8_t x200 = 6U;
	volatile int32_t t36 = -7984404;

	t36 = ((x197==x198)/(x199*x200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = -221076813;
	uint16_t x203 = 14U;
	int16_t x204 = 37;

	t37 = ((x201==x202)/(x203*x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x206 = 414256U;
	int64_t t38 = -81312459672LL;

	t38 = ((x205==x206)/(x207*x208));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x209 = UINT32_MAX;
	uint64_t x211 = UINT64_MAX;
	static int8_t x212 = INT8_MAX;

	t39 = ((x209==x210)/(x211*x212));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x218 = 27840U;
	int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t40 = -233085323;

	t40 = ((x217==x218)/(x219*x220));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int8_t x226 = -2;
	volatile uint64_t x227 = 1061218041431205486LLU;
	int8_t x228 = 13;
	uint64_t t41 = 648902LLU;

	t41 = ((x225==x226)/(x227*x228));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x229 = INT32_MAX;
	static int8_t x230 = 1;
	int16_t x231 = INT16_MIN;
	uint64_t x232 = 16076LLU;
	uint64_t t42 = 2522LLU;

	t42 = ((x229==x230)/(x231*x232));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x237 = -1;
	static int8_t x238 = INT8_MIN;
	int16_t x239 = 1;
	int32_t x240 = INT32_MIN;
	static int32_t t43 = -8860252;

	t43 = ((x237==x238)/(x239*x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = INT16_MIN;
	static uint8_t x246 = 6U;
	int16_t x247 = -1000;
	uint64_t x248 = 4418755656LLU;
	uint64_t t44 = 317LLU;

	t44 = ((x245==x246)/(x247*x248));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = 1U;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = 8;
	int64_t x260 = -60549335139491LL;

	t45 = ((x257==x258)/(x259*x260));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x261 = 1U;
	volatile uint8_t x262 = 13U;
	int32_t x263 = INT32_MIN;
	uint32_t x264 = 63973995U;
	volatile uint32_t t46 = 3720U;

	t46 = ((x261==x262)/(x263*x264));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x265 = 16120U;
	int16_t x266 = -2899;
	volatile int8_t x268 = INT8_MIN;

	t47 = ((x265==x266)/(x267*x268));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x269 = 1U;
	uint64_t x270 = UINT64_MAX;
	volatile uint32_t x271 = 45U;
	static uint8_t x272 = 14U;
	static uint32_t t48 = 668382U;

	t48 = ((x269==x270)/(x271*x272));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x273 = INT8_MIN;
	uint64_t x275 = 234689049295305LLU;
	int32_t x276 = 16;
	uint64_t t49 = 20301671562145433LLU;

	t49 = ((x273==x274)/(x275*x276));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = 3;
	volatile int16_t x279 = 5;
	int8_t x280 = INT8_MAX;
	static volatile int32_t t50 = -10;

	t50 = ((x277==x278)/(x279*x280));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = 1734;
	static uint32_t x287 = UINT32_MAX;
	uint8_t x288 = UINT8_MAX;

	t51 = ((x285==x286)/(x287*x288));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x289 = INT32_MIN;
	int64_t x290 = INT64_MIN;
	volatile int16_t x291 = INT16_MIN;
	int16_t x292 = -1;
	int32_t t52 = 148289409;

	t52 = ((x289==x290)/(x291*x292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x293 = UINT64_MAX;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = -1;
	static uint64_t x296 = 26493048LLU;
	static volatile uint64_t t53 = 160552114009159102LLU;

	t53 = ((x293==x294)/(x295*x296));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x298 = INT16_MIN;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = -5206913LL;

	t54 = ((x297==x298)/(x299*x300));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x301 = 91284426515474LLU;
	uint8_t x302 = 8U;
	static uint32_t x304 = UINT32_MAX;

	t55 = ((x301==x302)/(x303*x304));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x306 = -23;
	static int16_t x307 = INT16_MIN;
	static uint64_t x308 = 2LLU;
	volatile uint64_t t56 = 63589LLU;

	t56 = ((x305==x306)/(x307*x308));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	int32_t t57 = -5018;

	t57 = ((x313==x314)/(x315*x316));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x327 = -10041;
	volatile int8_t x328 = INT8_MAX;
	volatile int32_t t58 = 7136856;

	t58 = ((x325==x326)/(x327*x328));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x329 = INT16_MIN;
	uint32_t x331 = 3927U;
	volatile int16_t x332 = INT16_MAX;
	volatile uint32_t t59 = 465U;

	t59 = ((x329==x330)/(x331*x332));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x338 = -1;
	static uint32_t x340 = 113296088U;
	volatile uint32_t t60 = 1U;

	t60 = ((x337==x338)/(x339*x340));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x341 = -64;
	int16_t x342 = INT16_MIN;
	uint16_t x343 = 29U;
	uint32_t x344 = 8U;
	volatile uint32_t t61 = 16U;

	t61 = ((x341==x342)/(x343*x344));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x350 = 1U;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t62 = -37534602;

	t62 = ((x349==x350)/(x351*x352));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x353 = -17;
	volatile uint64_t x354 = 98733LLU;
	uint16_t x356 = UINT16_MAX;
	int64_t t63 = 2595853LL;

	t63 = ((x353==x354)/(x355*x356));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = 60U;
	int32_t x363 = -1;
	volatile int32_t t64 = 95748904;

	t64 = ((x361==x362)/(x363*x364));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x366 = 6U;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t65 = 1LLU;

	t65 = ((x365==x366)/(x367*x368));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MAX;
	static uint64_t x372 = 120899613568LLU;
	uint64_t t66 = 384091LLU;

	t66 = ((x369==x370)/(x371*x372));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x373 = 124U;
	static uint32_t x374 = 151379215U;
	static int16_t x375 = INT16_MAX;
	static uint32_t x376 = 2805170U;

	t67 = ((x373==x374)/(x375*x376));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x377 = INT16_MIN;
	uint8_t x378 = 5U;
	int16_t x379 = INT16_MIN;
	uint16_t x380 = 1000U;
	volatile int32_t t68 = -964458789;

	t68 = ((x377==x378)/(x379*x380));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x382 = 423U;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = INT64_MIN;
	static uint64_t t69 = 198LLU;

	t69 = ((x381==x382)/(x383*x384));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = INT16_MIN;
	int16_t x388 = INT16_MAX;
	int32_t t70 = 1;

	t70 = ((x385==x386)/(x387*x388));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x389 = UINT8_MAX;
	static int8_t x392 = -1;
	static int32_t t71 = -41094;

	t71 = ((x389==x390)/(x391*x392));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x393 = 1LLU;
	volatile int16_t x394 = INT16_MAX;
	uint64_t x395 = 8196702LLU;
	volatile uint64_t t72 = 90197LLU;

	t72 = ((x393==x394)/(x395*x396));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = INT16_MAX;
	int32_t x398 = -1;
	int64_t x400 = 27981LL;

	t73 = ((x397==x398)/(x399*x400));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x401 = 18U;
	uint8_t x402 = UINT8_MAX;
	static uint16_t x403 = 4U;
	static int16_t x404 = -2;

	t74 = ((x401==x402)/(x403*x404));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x405 = INT64_MIN;
	uint64_t x406 = UINT64_MAX;
	int64_t x407 = 266184665216LL;
	volatile int16_t x408 = 4767;
	volatile int64_t t75 = 340181364947243433LL;

	t75 = ((x405==x406)/(x407*x408));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x418 = UINT32_MAX;
	uint64_t x419 = UINT64_MAX;
	volatile uint64_t x420 = UINT64_MAX;
	uint64_t t76 = 1081934855478037LLU;

	t76 = ((x417==x418)/(x419*x420));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x425 = -2;
	static volatile uint16_t x426 = 2U;
	volatile int16_t x427 = 1;
	int32_t x428 = INT32_MAX;
	static volatile int32_t t77 = 0;

	t77 = ((x425==x426)/(x427*x428));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x429 = INT64_MAX;
	static int64_t x430 = INT64_MAX;
	volatile int8_t x432 = -1;
	volatile int32_t t78 = -223048;

	t78 = ((x429==x430)/(x431*x432));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x437 = 323U;
	uint32_t x438 = UINT32_MAX;
	int32_t t79 = -995637057;

	t79 = ((x437==x438)/(x439*x440));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x441 = -1;
	int32_t x442 = 11;
	uint32_t x443 = UINT32_MAX;
	volatile uint16_t x444 = 6U;
	static volatile uint32_t t80 = 105438857U;

	t80 = ((x441==x442)/(x443*x444));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x446 = -1;
	int8_t x447 = -1;
	static volatile uint8_t x448 = 14U;
	int32_t t81 = 129;

	t81 = ((x445==x446)/(x447*x448));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x449 = INT64_MAX;
	static uint32_t x450 = 256725U;
	static int8_t x451 = 1;
	volatile uint16_t x452 = UINT16_MAX;
	int32_t t82 = -1;

	t82 = ((x449==x450)/(x451*x452));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x453 = INT8_MIN;
	uint16_t x454 = 11U;
	static int16_t x455 = INT16_MAX;
	int16_t x456 = INT16_MIN;
	int32_t t83 = 8415086;

	t83 = ((x453==x454)/(x455*x456));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x461 = 42U;
	volatile int32_t x462 = INT32_MAX;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = UINT32_MAX;
	static volatile uint32_t t84 = 489069U;

	t84 = ((x461==x462)/(x463*x464));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x467 = 2;
	uint64_t x468 = 2452326030572390019LLU;
	volatile uint64_t t85 = 129814LLU;

	t85 = ((x465==x466)/(x467*x468));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x469 = -250645;
	int8_t x470 = 2;
	int64_t x471 = -159299549487354LL;
	volatile int64_t t86 = -3177541063LL;

	t86 = ((x469==x470)/(x471*x472));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x473 = 679729U;
	uint64_t x474 = UINT64_MAX;
	int16_t x475 = INT16_MIN;
	volatile int8_t x476 = INT8_MIN;
	int32_t t87 = 238;

	t87 = ((x473==x474)/(x475*x476));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x486 = UINT32_MAX;
	uint16_t x487 = 7U;
	static volatile uint8_t x488 = UINT8_MAX;
	volatile int32_t t88 = 2442;

	t88 = ((x485==x486)/(x487*x488));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x489 = 133;
	volatile int64_t x490 = INT64_MIN;
	uint8_t x491 = 1U;
	int16_t x492 = -1;
	int32_t t89 = 0;

	t89 = ((x489==x490)/(x491*x492));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x497 = -169947LL;
	int32_t x498 = INT32_MIN;
	int16_t x499 = -7;
	int8_t x500 = 53;

	t90 = ((x497==x498)/(x499*x500));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x501 = -5860677;
	int8_t x502 = -1;
	int64_t x503 = -1LL;
	static int64_t x504 = -5357LL;
	volatile int64_t t91 = 673214174194691159LL;

	t91 = ((x501==x502)/(x503*x504));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x505 = 0;
	int64_t x506 = -1LL;
	int16_t x507 = 2544;
	volatile int8_t x508 = INT8_MIN;

	t92 = ((x505==x506)/(x507*x508));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x509 = INT32_MIN;
	uint32_t x510 = 9901479U;
	uint64_t x512 = 3822961LLU;
	volatile uint64_t t93 = 3LLU;

	t93 = ((x509==x510)/(x511*x512));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x513 = -60;
	volatile uint32_t x514 = 77U;
	int64_t x515 = -359918018127823182LL;
	int64_t x516 = -1LL;
	volatile int64_t t94 = 0LL;

	t94 = ((x513==x514)/(x515*x516));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x517 = -799;
	int32_t x518 = INT32_MAX;
	static uint8_t x520 = 10U;

	t95 = ((x517==x518)/(x519*x520));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x522 = -1LL;
	volatile uint8_t x523 = UINT8_MAX;
	uint64_t x524 = UINT64_MAX;

	t96 = ((x521==x522)/(x523*x524));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x526 = 3U;
	int16_t x527 = -3386;
	int16_t x528 = -1;
	int32_t t97 = -48241;

	t97 = ((x525==x526)/(x527*x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x529 = 536083690292LLU;
	int64_t x530 = INT64_MIN;
	volatile int32_t t98 = 710963845;

	t98 = ((x529==x530)/(x531*x532));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x533 = 22778U;
	uint16_t x534 = 58U;
	static uint8_t x535 = 3U;
	int32_t t99 = 4;

	t99 = ((x533==x534)/(x535*x536));

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

