#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x3 = INT64_MIN;
volatile int64_t x24 = INT64_MIN;
static uint16_t x27 = UINT16_MAX;
static int64_t x34 = 37415678288626952LL;
int32_t x40 = INT32_MAX;
uint32_t x45 = 1907125688U;
static uint32_t x47 = UINT32_MAX;
static volatile int64_t x64 = INT64_MIN;
int8_t x69 = INT8_MIN;
static uint8_t x70 = 13U;
static int32_t x71 = 1442;
volatile uint64_t t11 = 694939569881LLU;
int32_t t13 = -14161;
int64_t x97 = INT64_MIN;
int64_t x111 = INT64_MIN;
uint16_t x115 = 4086U;
volatile uint64_t x125 = UINT64_MAX;
int32_t x147 = -986961;
uint8_t x151 = 65U;
volatile int32_t x152 = 19;
int16_t x154 = 1251;
int32_t t21 = -189027;
int32_t t22 = -148626713;
volatile int8_t x186 = INT8_MAX;
volatile int8_t x187 = 8;
int64_t x188 = INT64_MIN;
static volatile uint64_t t25 = 7921762950930688LLU;
volatile uint8_t x197 = 43U;
static int64_t x205 = INT64_MIN;
static uint64_t x217 = UINT64_MAX;
int8_t x228 = INT8_MIN;
int32_t x231 = -8695620;
volatile int32_t x237 = INT32_MIN;
int64_t x239 = INT64_MIN;
int8_t x241 = INT8_MIN;
int16_t x242 = INT16_MAX;
static volatile int16_t x243 = -13196;
int32_t t34 = -23;
static uint64_t x258 = 5660LLU;
static int8_t x260 = -18;
volatile uint8_t x266 = UINT8_MAX;
int8_t x273 = -1;
static uint16_t x274 = UINT16_MAX;
static volatile int32_t t38 = 80;
static volatile uint8_t x286 = 127U;
int32_t t40 = 890;
int32_t x295 = 63993281;
static uint32_t x296 = 691U;
int16_t x298 = 111;
int64_t x304 = -1LL;
int16_t x343 = -1;
static uint64_t x344 = 347246554782750LLU;
uint64_t t47 = 2180LLU;
uint64_t x358 = 397361238LLU;
static int8_t x360 = INT8_MAX;
volatile int32_t x377 = INT32_MAX;
uint8_t x389 = 0U;
volatile int32_t x402 = INT32_MAX;
uint8_t x403 = 13U;
uint64_t x420 = 9035212LLU;
int32_t t56 = 600895081;
int64_t x433 = -145LL;
volatile int32_t t59 = -1;
uint64_t x463 = 59635965533322879LLU;
uint64_t x468 = 438717955LLU;
volatile int32_t x470 = INT32_MAX;
uint16_t x473 = 426U;
uint32_t x476 = UINT32_MAX;
int16_t x487 = INT16_MIN;
int16_t x491 = INT16_MIN;
int16_t x505 = -1;
uint8_t x506 = 3U;
int8_t x509 = 34;
volatile int32_t x511 = -1;
volatile int32_t t68 = -39059394;
static uint64_t t70 = 25523310149LLU;
volatile int16_t x555 = INT16_MIN;
int32_t x563 = INT32_MIN;
static volatile int16_t x585 = 1;
int32_t x587 = 249383089;
uint64_t x589 = 6001LLU;
static volatile uint8_t x597 = UINT8_MAX;
int32_t x606 = 999;
volatile int8_t x608 = INT8_MIN;
int32_t t78 = -63007;
volatile uint32_t x615 = UINT32_MAX;
int8_t x616 = 0;
int16_t x617 = 7373;
uint16_t x620 = 2096U;
uint32_t t81 = 239U;
volatile uint16_t x645 = 3U;
uint32_t x652 = 235173U;
int64_t t85 = -153007979369LL;
uint16_t x659 = UINT16_MAX;
static uint64_t x663 = 34061LLU;
volatile uint64_t t87 = 37194LLU;
int8_t x669 = INT8_MIN;
uint8_t x670 = 1U;
int8_t x677 = 0;
static int16_t x680 = INT16_MIN;
volatile uint32_t x688 = UINT32_MAX;
uint64_t x698 = UINT64_MAX;
uint16_t x719 = 581U;
volatile uint16_t x731 = 8U;
int32_t x741 = INT32_MIN;
volatile int8_t x746 = 35;


void f0(void) {
	int32_t x1 = -2304672;
	uint8_t x2 = 12U;
	int64_t x4 = -1LL;
	int32_t t0 = -5;

	t0 = (x1%(x2>>(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x21 = INT16_MIN;
	int16_t x22 = 39;
	int64_t x23 = INT64_MAX;
	volatile int32_t t1 = 5;

	t1 = (x21%(x22>>(x23==x24)));

	if (t1 != -8) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = INT32_MIN;
	volatile uint16_t x26 = 12418U;
	volatile int16_t x28 = 509;
	static volatile int32_t t2 = 933264145;

	t2 = (x25%(x26>>(x27==x28)));

	if (t2 != -1654) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = INT32_MAX;
	int64_t x35 = INT64_MIN;
	static volatile int16_t x36 = INT16_MAX;
	int64_t t3 = -1999968582LL;

	t3 = (x33%(x34>>(x35==x36)));

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x37 = 293954127816613LL;
	int16_t x38 = 9;
	int64_t x39 = INT64_MIN;
	static int64_t t4 = 9028949924LL;

	t4 = (x37%(x38>>(x39==x40)));

	if (t4 != 4LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x46 = 3U;
	volatile uint32_t x48 = 3885533U;
	volatile uint32_t t5 = 0U;

	t5 = (x45%(x46>>(x47==x48)));

	if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = -1;
	uint8_t x50 = UINT8_MAX;
	int32_t x51 = INT32_MAX;
	volatile int64_t x52 = -1LL;
	volatile int32_t t6 = -146973366;

	t6 = (x49%(x50>>(x51==x52)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x53 = UINT8_MAX;
	uint64_t x54 = UINT64_MAX;
	int32_t x55 = 1600854;
	int64_t x56 = INT64_MIN;
	static uint64_t t7 = 872188LLU;

	t7 = (x53%(x54>>(x55==x56)));

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = 25642249LL;
	volatile uint32_t x63 = 16658956U;
	volatile int64_t t8 = 1419895728805LL;

	t8 = (x61%(x62>>(x63==x64)));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = 0;
	static uint64_t x66 = UINT64_MAX;
	uint16_t x67 = 1U;
	volatile uint32_t x68 = 230973703U;
	uint64_t t9 = 14433LLU;

	t9 = (x65%(x66>>(x67==x68)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x72 = INT8_MIN;
	static volatile int32_t t10 = -124;

	t10 = (x69%(x70>>(x71==x72)));

	if (t10 != -11) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x82 = 440102424LLU;
	int8_t x83 = INT8_MIN;
	int64_t x84 = -27474444885152LL;

	t11 = (x81%(x82>>(x83==x84)));

	if (t11 != 165599816LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = INT32_MAX;
	uint8_t x92 = UINT8_MAX;
	uint32_t t12 = 6209U;

	t12 = (x89%(x90>>(x91==x92)));

	if (t12 != 2147483648U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 22098U;

	t13 = (x93%(x94>>(x95==x96)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x98 = INT8_MAX;
	uint64_t x99 = 204656LLU;
	int8_t x100 = 3;
	int64_t t14 = -65829743992066LL;

	t14 = (x97%(x98>>(x99==x100)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x101 = UINT8_MAX;
	volatile uint8_t x102 = 7U;
	static int32_t x103 = -12;
	int32_t x104 = -1;
	int32_t t15 = -1214;

	t15 = (x101%(x102>>(x103==x104)));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x109 = 8818U;
	uint64_t x110 = 225443201881LLU;
	int32_t x112 = INT32_MAX;
	volatile uint64_t t16 = 10500913162LLU;

	t16 = (x109%(x110>>(x111==x112)));

	if (t16 != 8818LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MAX;
	static uint32_t x116 = 13U;
	static int64_t t17 = -107848289272249LL;

	t17 = (x113%(x114>>(x115==x116)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x126 = 13;
	int8_t x127 = INT8_MAX;
	uint16_t x128 = 119U;
	uint64_t t18 = 402408058943402955LLU;

	t18 = (x125%(x126>>(x127==x128)));

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x145 = INT8_MAX;
	uint32_t x146 = UINT32_MAX;
	volatile uint16_t x148 = 9U;
	static volatile uint32_t t19 = 61U;

	t19 = (x145%(x146>>(x147==x148)));

	if (t19 != 127U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x149 = 50390U;
	int8_t x150 = INT8_MAX;
	volatile uint32_t t20 = 492321281U;

	t20 = (x149%(x150>>(x151==x152)));

	if (t20 != 98U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x153 = 1;
	static int64_t x155 = INT64_MIN;
	volatile uint32_t x156 = UINT32_MAX;

	t21 = (x153%(x154>>(x155==x156)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x157 = 7;
	uint16_t x158 = 1U;
	int32_t x159 = 2421;
	int16_t x160 = INT16_MIN;

	t22 = (x157%(x158>>(x159==x160)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x169 = INT64_MAX;
	static int8_t x170 = 1;
	int32_t x171 = 112;
	int16_t x172 = INT16_MIN;
	volatile int64_t t23 = -1557905878LL;

	t23 = (x169%(x170>>(x171==x172)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x185 = 8U;
	volatile int32_t t24 = 197218;

	t24 = (x185%(x186>>(x187==x188)));

	if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x193 = 5U;
	volatile uint64_t x194 = 263026127LLU;
	int8_t x195 = INT8_MIN;
	uint32_t x196 = UINT32_MAX;

	t25 = (x193%(x194>>(x195==x196)));

	if (t25 != 5LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x198 = UINT16_MAX;
	uint64_t x199 = UINT64_MAX;
	uint32_t x200 = UINT32_MAX;
	int32_t t26 = -2;

	t26 = (x197%(x198>>(x199==x200)));

	if (t26 != 43) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x206 = INT32_MAX;
	uint16_t x207 = UINT16_MAX;
	int16_t x208 = 739;
	volatile int64_t t27 = 620942970LL;

	t27 = (x205%(x206>>(x207==x208)));

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x213 = INT32_MIN;
	volatile uint64_t x214 = UINT64_MAX;
	volatile int16_t x215 = INT16_MAX;
	int8_t x216 = -9;
	static volatile uint64_t t28 = 6577767262LLU;

	t28 = (x213%(x214>>(x215==x216)));

	if (t28 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x218 = 21U;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MAX;
	volatile uint64_t t29 = 3LLU;

	t29 = (x217%(x218>>(x219==x220)));

	if (t29 != 15LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x225 = -447237;
	uint8_t x226 = 52U;
	int64_t x227 = INT64_MIN;
	volatile int32_t t30 = -1;

	t30 = (x225%(x226>>(x227==x228)));

	if (t30 != -37) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x229 = INT16_MIN;
	int64_t x230 = 802982815LL;
	int8_t x232 = INT8_MIN;
	static volatile int64_t t31 = -1997152203LL;

	t31 = (x229%(x230>>(x231==x232)));

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x238 = INT16_MAX;
	volatile int32_t x240 = INT32_MIN;
	static int32_t t32 = 4377695;

	t32 = (x237%(x238>>(x239==x240)));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x244 = INT32_MAX;
	static int32_t t33 = 7284;

	t33 = (x241%(x242>>(x243==x244)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x249 = 3;
	static int16_t x250 = INT16_MAX;
	static uint32_t x251 = 265265U;
	volatile uint16_t x252 = 940U;

	t34 = (x249%(x250>>(x251==x252)));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x257 = -1LL;
	int16_t x259 = -1;
	volatile uint64_t t35 = 12170930963648634LLU;

	t35 = (x257%(x258>>(x259==x260)));

	if (t35 != 3635LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x265 = -1;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = 701U;
	int32_t t36 = 85026464;

	t36 = (x265%(x266>>(x267==x268)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x269 = 28096766;
	static int64_t x270 = 515600LL;
	volatile int16_t x271 = -624;
	static int64_t x272 = INT64_MIN;
	volatile int64_t t37 = -674750636198LL;

	t37 = (x269%(x270>>(x271==x272)));

	if (t37 != 254366LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x275 = -401;
	int8_t x276 = INT8_MIN;

	t38 = (x273%(x274>>(x275==x276)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x277 = 3LLU;
	int16_t x278 = 1665;
	static uint64_t x279 = UINT64_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile uint64_t t39 = 46364674834000795LLU;

	t39 = (x277%(x278>>(x279==x280)));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x285 = 0U;
	static int8_t x287 = -1;
	static volatile uint64_t x288 = 107118765LLU;

	t40 = (x285%(x286>>(x287==x288)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x293 = 0;
	static volatile uint64_t x294 = UINT64_MAX;
	static uint64_t t41 = 3LLU;

	t41 = (x293%(x294>>(x295==x296)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x297 = 29U;
	volatile int32_t x299 = -1;
	int32_t x300 = -50;
	int32_t t42 = -11;

	t42 = (x297%(x298>>(x299==x300)));

	if (t42 != 29) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x301 = -1LL;
	uint8_t x302 = 90U;
	uint64_t x303 = 213164961LLU;
	static volatile int64_t t43 = -191460503899320643LL;

	t43 = (x301%(x302>>(x303==x304)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x317 = -1LL;
	static uint64_t x318 = 7674LLU;
	volatile int64_t x319 = INT64_MIN;
	volatile uint64_t x320 = 557097938LLU;
	uint64_t t44 = 4972730487963LLU;

	t44 = (x317%(x318>>(x319==x320)));

	if (t44 != 291LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x333 = INT16_MAX;
	uint8_t x334 = UINT8_MAX;
	volatile uint16_t x335 = UINT16_MAX;
	static int8_t x336 = INT8_MIN;
	static int32_t t45 = 484243432;

	t45 = (x333%(x334>>(x335==x336)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x341 = 0U;
	int8_t x342 = 7;
	volatile int32_t t46 = 1020091672;

	t46 = (x341%(x342>>(x343==x344)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x349 = 27055961730LLU;
	volatile uint64_t x350 = UINT64_MAX;
	uint32_t x351 = 2U;
	uint64_t x352 = 272864843231LLU;

	t47 = (x349%(x350>>(x351==x352)));

	if (t47 != 27055961730LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x357 = INT32_MAX;
	int64_t x359 = -1LL;
	uint64_t t48 = 5LLU;

	t48 = (x357%(x358>>(x359==x360)));

	if (t48 != 160677457LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x365 = INT8_MIN;
	static uint8_t x366 = 1U;
	uint64_t x367 = 1813206439880006598LLU;
	static uint16_t x368 = UINT16_MAX;
	volatile int32_t t49 = -445417865;

	t49 = (x365%(x366>>(x367==x368)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x373 = -1;
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;
	uint32_t t50 = 1610U;

	t50 = (x373%(x374>>(x375==x376)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x378 = INT8_MAX;
	uint16_t x379 = 486U;
	static volatile uint8_t x380 = UINT8_MAX;
	volatile int32_t t51 = 23;

	t51 = (x377%(x378>>(x379==x380)));

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x390 = 51067891409435LL;
	int16_t x391 = INT16_MAX;
	uint64_t x392 = 2140LLU;
	int64_t t52 = 284182680712304494LL;

	t52 = (x389%(x390>>(x391==x392)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x401 = INT8_MAX;
	int16_t x404 = INT16_MAX;
	int32_t t53 = 56622;

	t53 = (x401%(x402>>(x403==x404)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x413 = UINT8_MAX;
	uint16_t x414 = 1U;
	int16_t x415 = -7;
	int16_t x416 = INT16_MIN;
	int32_t t54 = -864929892;

	t54 = (x413%(x414>>(x415==x416)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x417 = INT8_MAX;
	volatile int64_t x418 = 20008613280LL;
	int32_t x419 = -6437;
	static int64_t t55 = 29038792LL;

	t55 = (x417%(x418>>(x419==x420)));

	if (t55 != 127LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x429 = INT8_MAX;
	volatile uint8_t x430 = 5U;
	int8_t x431 = INT8_MIN;
	uint64_t x432 = 7595667268402900142LLU;

	t56 = (x429%(x430>>(x431==x432)));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x434 = 7U;
	int8_t x435 = -2;
	int64_t x436 = INT64_MIN;
	static int64_t t57 = -38683LL;

	t57 = (x433%(x434>>(x435==x436)));

	if (t57 != -5LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x445 = 4519U;
	uint16_t x446 = 22268U;
	int64_t x447 = 354364640289LL;
	volatile int8_t x448 = 7;
	int32_t t58 = -1;

	t58 = (x445%(x446>>(x447==x448)));

	if (t58 != 4519) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x453 = UINT8_MAX;
	int32_t x454 = INT32_MAX;
	uint64_t x455 = 0LLU;
	static uint32_t x456 = UINT32_MAX;

	t59 = (x453%(x454>>(x455==x456)));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x461 = INT32_MIN;
	static volatile int32_t x462 = INT32_MAX;
	int16_t x464 = -1;
	static volatile int32_t t60 = 28151379;

	t60 = (x461%(x462>>(x463==x464)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x465 = 15659U;
	uint8_t x466 = UINT8_MAX;
	int8_t x467 = INT8_MIN;
	volatile int32_t t61 = 19300;

	t61 = (x465%(x466>>(x467==x468)));

	if (t61 != 104) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x469 = -1;
	static int64_t x471 = INT64_MIN;
	int16_t x472 = INT16_MAX;
	static int32_t t62 = -2;

	t62 = (x469%(x470>>(x471==x472)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x474 = 107703801LLU;
	volatile uint32_t x475 = UINT32_MAX;
	volatile uint64_t t63 = 757467915260137329LLU;

	t63 = (x473%(x474>>(x475==x476)));

	if (t63 != 426LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x481 = INT16_MIN;
	uint64_t x482 = UINT64_MAX;
	int8_t x483 = INT8_MIN;
	static int64_t x484 = -10248LL;
	static volatile uint64_t t64 = 11719343086LLU;

	t64 = (x481%(x482>>(x483==x484)));

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x485 = UINT8_MAX;
	uint32_t x486 = 9U;
	static uint16_t x488 = 2380U;
	uint32_t t65 = 17U;

	t65 = (x485%(x486>>(x487==x488)));

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x489 = INT64_MIN;
	int64_t x490 = 99836772406LL;
	uint16_t x492 = 3U;
	volatile int64_t t66 = 6533982LL;

	t66 = (x489%(x490>>(x491==x492)));

	if (t66 != -39287537906LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x507 = 3U;
	static int64_t x508 = -1LL;
	int32_t t67 = 29144;

	t67 = (x505%(x506>>(x507==x508)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x510 = 1U;
	int8_t x512 = 50;

	t68 = (x509%(x510>>(x511==x512)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x513 = INT8_MAX;
	uint8_t x514 = UINT8_MAX;
	int16_t x515 = -1;
	int32_t x516 = -1;
	int32_t t69 = 13;

	t69 = (x513%(x514>>(x515==x516)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x521 = -1;
	uint64_t x522 = 101628282796LLU;
	volatile int16_t x523 = -1;
	int64_t x524 = -1LL;

	t70 = (x521%(x522>>(x523==x524)));

	if (t70 != 48502602867LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x533 = -1;
	int16_t x534 = INT16_MAX;
	int16_t x535 = -1;
	static int64_t x536 = 13777942411LL;
	static volatile int32_t t71 = 15;

	t71 = (x533%(x534>>(x535==x536)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x541 = 33364146108LL;
	static int16_t x542 = INT16_MAX;
	static int64_t x543 = -1093304651415618LL;
	uint16_t x544 = 22U;
	volatile int64_t t72 = 210LL;

	t72 = (x541%(x542>>(x543==x544)));

	if (t72 != 300LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x553 = 31;
	static volatile int32_t x554 = INT32_MAX;
	uint64_t x556 = UINT64_MAX;
	volatile int32_t t73 = -2904;

	t73 = (x553%(x554>>(x555==x556)));

	if (t73 != 31) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x561 = 16U;
	static uint32_t x562 = UINT32_MAX;
	int32_t x564 = INT32_MIN;
	volatile uint32_t t74 = 4661U;

	t74 = (x561%(x562>>(x563==x564)));

	if (t74 != 16U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x586 = 1U;
	volatile int32_t x588 = INT32_MIN;
	int32_t t75 = -1;

	t75 = (x585%(x586>>(x587==x588)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x590 = 26;
	int8_t x591 = INT8_MIN;
	int8_t x592 = -3;
	uint64_t t76 = 379337785732096183LLU;

	t76 = (x589%(x590>>(x591==x592)));

	if (t76 != 21LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x598 = INT16_MAX;
	uint16_t x599 = 1585U;
	volatile int64_t x600 = INT64_MIN;
	static volatile int32_t t77 = -212077;

	t77 = (x597%(x598>>(x599==x600)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x605 = -9;
	volatile int8_t x607 = 1;

	t78 = (x605%(x606>>(x607==x608)));

	if (t78 != -9) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x613 = -1LL;
	static uint16_t x614 = 7330U;
	int64_t t79 = -3989410367LL;

	t79 = (x613%(x614>>(x615==x616)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x618 = INT8_MAX;
	uint16_t x619 = 0U;
	static volatile int32_t t80 = 5727;

	t80 = (x617%(x618>>(x619==x620)));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x625 = UINT32_MAX;
	volatile uint16_t x626 = 30U;
	static int32_t x627 = INT32_MAX;
	int32_t x628 = INT32_MIN;

	t81 = (x625%(x626>>(x627==x628)));

	if (t81 != 15U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x637 = -1;
	uint64_t x638 = 2076384LLU;
	volatile int32_t x639 = -1;
	int64_t x640 = INT64_MIN;
	volatile uint64_t t82 = 4LLU;

	t82 = (x637%(x638>>(x639==x640)));

	if (t82 != 1502847LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x641 = -1LL;
	uint64_t x642 = 1011LLU;
	volatile uint16_t x643 = 341U;
	volatile int16_t x644 = INT16_MIN;
	volatile uint64_t t83 = 14LLU;

	t83 = (x641%(x642>>(x643==x644)));

	if (t83 != 675LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x646 = INT8_MAX;
	uint8_t x647 = UINT8_MAX;
	uint8_t x648 = 18U;
	static int32_t t84 = -414962117;

	t84 = (x645%(x646>>(x647==x648)));

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x649 = -4182;
	static int64_t x650 = INT64_MAX;
	int16_t x651 = INT16_MAX;

	t85 = (x649%(x650>>(x651==x652)));

	if (t85 != -4182LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x657 = 27620U;
	int8_t x658 = INT8_MAX;
	volatile int16_t x660 = INT16_MAX;
	int32_t t86 = 2203;

	t86 = (x657%(x658>>(x659==x660)));

	if (t86 != 61) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x661 = UINT64_MAX;
	int32_t x662 = 25589;
	static uint16_t x664 = UINT16_MAX;

	t87 = (x661%(x662>>(x663==x664)));

	if (t87 != 16153LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x671 = INT8_MIN;
	static int16_t x672 = 328;
	volatile int32_t t88 = 10674434;

	t88 = (x669%(x670>>(x671==x672)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x673 = INT8_MAX;
	uint64_t x674 = 19620LLU;
	volatile int8_t x675 = INT8_MIN;
	volatile uint8_t x676 = 39U;
	volatile uint64_t t89 = 135137LLU;

	t89 = (x673%(x674>>(x675==x676)));

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x678 = INT64_MAX;
	uint16_t x679 = UINT16_MAX;
	static volatile int64_t t90 = 3068307059LL;

	t90 = (x677%(x678>>(x679==x680)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x685 = UINT16_MAX;
	uint16_t x686 = UINT16_MAX;
	static uint16_t x687 = 0U;
	int32_t t91 = -11855486;

	t91 = (x685%(x686>>(x687==x688)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x689 = INT64_MAX;
	volatile uint64_t x690 = UINT64_MAX;
	uint16_t x691 = 116U;
	volatile uint16_t x692 = UINT16_MAX;
	volatile uint64_t t92 = 14058462655LLU;

	t92 = (x689%(x690>>(x691==x692)));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x697 = INT64_MIN;
	volatile int64_t x699 = -2958154350350LL;
	int8_t x700 = INT8_MAX;
	uint64_t t93 = 37981849796340LLU;

	t93 = (x697%(x698>>(x699==x700)));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x705 = 69U;
	uint16_t x706 = 31U;
	static int8_t x707 = INT8_MAX;
	volatile uint64_t x708 = UINT64_MAX;
	int32_t t94 = -35;

	t94 = (x705%(x706>>(x707==x708)));

	if (t94 != 7) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x717 = 16U;
	int8_t x718 = INT8_MAX;
	volatile int64_t x720 = -1LL;
	volatile int32_t t95 = 21569;

	t95 = (x717%(x718>>(x719==x720)));

	if (t95 != 16) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x729 = UINT32_MAX;
	static uint8_t x730 = 66U;
	static uint64_t x732 = UINT64_MAX;
	volatile uint32_t t96 = 510U;

	t96 = (x729%(x730>>(x731==x732)));

	if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x742 = 5033LLU;
	int64_t x743 = INT64_MIN;
	int16_t x744 = 13;
	volatile uint64_t t97 = 30109884211LLU;

	t97 = (x741%(x742>>(x743==x744)));

	if (t97 != 1974LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x745 = 1;
	int32_t x747 = INT32_MAX;
	volatile uint32_t x748 = 93U;
	volatile int32_t t98 = 2;

	t98 = (x745%(x746>>(x747==x748)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x753 = INT8_MIN;
	uint64_t x754 = UINT64_MAX;
	volatile uint64_t x755 = UINT64_MAX;
	static int16_t x756 = INT16_MIN;
	volatile uint64_t t99 = 31551LLU;

	t99 = (x753%(x754>>(x755==x756)));

	if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
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

