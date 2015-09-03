#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x17 = -1;
int32_t x37 = INT32_MIN;
volatile int32_t x45 = INT32_MAX;
int32_t x48 = INT32_MIN;
volatile uint64_t t6 = 545215546772747LLU;
int16_t x69 = 67;
volatile uint32_t t8 = 1695U;
int64_t x73 = -1LL;
static int64_t x84 = -1LL;
static int16_t x86 = 3;
uint64_t x120 = 12090221761794322LLU;
uint32_t x131 = 1U;
int8_t x132 = -1;
volatile uint32_t x151 = UINT32_MAX;
uint32_t t20 = 1067747226U;
uint16_t x154 = 112U;
volatile int64_t x165 = -1LL;
static uint8_t x167 = UINT8_MAX;
volatile int32_t t26 = -260907;
static volatile uint16_t x201 = 69U;
volatile int64_t t27 = 6481833178496LL;
int64_t x221 = -1LL;
uint32_t x224 = 15U;
volatile int64_t t29 = -3078699165663994290LL;
uint32_t x227 = 1335U;
uint32_t t30 = 1682U;
static uint8_t x236 = UINT8_MAX;
int64_t x246 = -1LL;
volatile uint32_t x253 = 129599U;
uint16_t x254 = UINT16_MAX;
uint64_t t33 = 6671025656LLU;
uint16_t x264 = 24100U;
uint32_t t35 = 483842022U;
int64_t x283 = -1LL;
uint8_t x287 = 4U;
volatile int64_t x290 = INT64_MIN;
int32_t x293 = -1;
int8_t x298 = -1;
int32_t x301 = INT32_MIN;
int64_t t42 = -24385678LL;
static int16_t x306 = -5458;
volatile int32_t t46 = INT32_MAX;
static int8_t x340 = -1;
uint64_t x345 = 11582293074LLU;
int64_t x347 = -1LL;
volatile uint64_t t49 = 4225LLU;
static int8_t x354 = 0;
int8_t x356 = -1;
int64_t t50 = 0LL;
uint64_t t51 = 17840866LLU;
uint32_t x371 = 107434506U;
int64_t t54 = 717736LL;
static int8_t x373 = INT8_MAX;
static uint64_t x376 = 3LLU;
volatile uint64_t t55 = 12LLU;
int64_t t56 = -76086865070439808LL;
static uint32_t x382 = UINT32_MAX;
uint64_t x387 = 128028901157932LLU;
volatile uint64_t t58 = 5486LLU;
uint32_t x395 = UINT32_MAX;
static int64_t t59 = 6164293LL;
volatile int8_t x398 = INT8_MIN;
static uint64_t t60 = 1037869170LLU;
uint64_t x419 = 0LLU;
static int8_t x424 = 0;
volatile uint64_t x427 = 29935351572185LLU;
int64_t x438 = 8945711012LL;
int8_t x439 = 1;
volatile uint64_t t68 = 4588900931716103308LLU;
int64_t x449 = -50288788543LL;
volatile uint64_t x451 = UINT64_MAX;
int16_t x452 = INT16_MIN;
int8_t x465 = INT8_MIN;
int32_t x467 = -1;
int16_t x481 = INT16_MAX;
uint16_t x482 = 24U;
static int16_t x488 = 8;
static int32_t t74 = 0;
uint32_t x490 = 51138U;
uint64_t x492 = UINT64_MAX;
static uint64_t x499 = UINT64_MAX;
int64_t x501 = INT64_MAX;
static int64_t t77 = 1LL;
uint64_t x509 = 37062996LLU;
uint16_t x513 = 1904U;
int64_t x516 = INT64_MIN;
uint64_t x518 = 2725LLU;
static int32_t x553 = INT32_MIN;
static int8_t x556 = -1;
int64_t x563 = -1LL;
uint32_t x569 = 620292874U;
uint16_t x570 = 9U;
uint64_t x584 = UINT64_MAX;
uint8_t x586 = 13U;
volatile int64_t t89 = -7128960050338LL;
int64_t x610 = INT64_MIN;
int8_t x611 = INT8_MIN;
int64_t x621 = -1LL;
uint64_t x622 = 11LLU;
int16_t x624 = INT16_MAX;
volatile int32_t x640 = 18894;
static int32_t x652 = -1;
uint32_t t95 = 11003276U;
uint32_t x653 = 4185U;
volatile uint8_t x660 = 0U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint64_t x2 = 289791LLU;
	static volatile int64_t x3 = -1LL;
	int64_t x4 = 4376561LL;
	uint64_t t0 = 497622480911690257LLU;

	t0 = ((x1+x2)^(x3*x4));

	if (t0 != 18446744073705280496LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	volatile int32_t x6 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	volatile uint8_t x8 = 2U;
	int32_t t1 = 222152676;

	t1 = ((x5+x6)^(x7*x8));

	if (t1 != -2147483263) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = -225228;
	volatile int8_t x15 = 1;
	static volatile int32_t x16 = -1;
	int32_t t2 = 3225;

	t2 = ((x13+x14)^(x15*x16));

	if (t2 != -2147258420) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = UINT64_MAX;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MAX;
	volatile uint64_t t3 = 31LLU;

	t3 = ((x17+x18)^(x19*x20));

	if (t3 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MAX;
	uint16_t x23 = 3332U;
	volatile int64_t x24 = -609842600422947LL;
	volatile uint64_t t4 = 553582971028097LLU;

	t4 = ((x21+x22)^(x23*x24));

	if (t4 != 11255367581464035210LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x38 = UINT8_MAX;
	int32_t x39 = -411448;
	int16_t x40 = 52;
	volatile int32_t t5 = 109;

	t5 = ((x37+x38)^(x39*x40));

	if (t5 != 2126088287) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x46 = INT64_MIN;
	static uint64_t x47 = 1027179170109LLU;

	t6 = ((x45+x46)^(x47*x48));

	if (t6 != 16982189508860575743LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x61 = 2315U;
	int64_t x62 = 1855583430LL;
	int16_t x63 = INT16_MIN;
	volatile int8_t x64 = INT8_MIN;
	static volatile int64_t t7 = -967862299LL;

	t7 = ((x61+x62)^(x63*x64));

	if (t7 != 1859780049LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x70 = UINT32_MAX;
	volatile int16_t x71 = INT16_MIN;
	volatile int32_t x72 = -1;

	t8 = ((x69+x70)^(x71*x72));

	if (t8 != 32834U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x74 = INT32_MAX;
	int8_t x75 = -4;
	int32_t x76 = -730;
	volatile int64_t t9 = -253653590LL;

	t9 = ((x73+x74)^(x75*x76));

	if (t9 != 2147480726LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x81 = 0;
	static uint32_t x82 = UINT32_MAX;
	uint32_t x83 = 21U;
	int64_t t10 = -22193LL;

	t10 = ((x81+x82)^(x83*x84));

	if (t10 != -4294967276LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x85 = -1;
	int64_t x87 = 0LL;
	int64_t x88 = INT64_MAX;
	int64_t t11 = -761158553994635LL;

	t11 = ((x85+x86)^(x87*x88));

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x89 = INT8_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	uint32_t x91 = 22475598U;
	uint64_t x92 = 237LLU;
	volatile uint64_t t12 = 1720557721851904456LLU;

	t12 = ((x89+x90)^(x91*x92));

	if (t12 != 5326749769LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x97 = 1U;
	int16_t x98 = -1;
	static int16_t x99 = -1;
	volatile uint32_t x100 = UINT32_MAX;
	volatile uint32_t t13 = 3U;

	t13 = ((x97+x98)^(x99*x100));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	int16_t x107 = -509;
	int32_t x108 = -1;
	volatile int32_t t14 = -1;

	t14 = ((x105+x106)^(x107*x108));

	if (t14 != -259) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x109 = 1367777413LLU;
	int64_t x110 = INT64_MIN;
	int8_t x111 = -1;
	int64_t x112 = 2313LL;
	uint64_t t15 = 233020166731LLU;

	t15 = ((x109+x110)^(x111*x112));

	if (t15 != 9223372035486996082LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x117 = UINT32_MAX;
	uint64_t x118 = 3006951LLU;
	static uint8_t x119 = UINT8_MAX;
	volatile uint64_t t16 = 78057LLU;

	t16 = ((x117+x118)^(x119*x120));

	if (t16 != 3083006544961265928LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x125 = 0U;
	static volatile uint64_t x126 = UINT64_MAX;
	volatile int8_t x127 = -1;
	volatile int16_t x128 = INT16_MAX;
	uint64_t t17 = 156LLU;

	t17 = ((x125+x126)^(x127*x128));

	if (t17 != 32766LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x129 = UINT32_MAX;
	int16_t x130 = INT16_MAX;
	volatile uint32_t t18 = 2590U;

	t18 = ((x129+x130)^(x131*x132));

	if (t18 != 4294934529U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x141 = 310254989;
	int8_t x142 = INT8_MAX;
	static int32_t x143 = INT32_MAX;
	static uint32_t x144 = UINT32_MAX;
	volatile uint32_t t19 = 61U;

	t19 = ((x141+x142)^(x143*x144));

	if (t19 != 2457738765U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x149 = 5268U;
	int8_t x150 = 19;
	int16_t x152 = -1;

	t20 = ((x149+x150)^(x151*x152));

	if (t20 != 5286U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x153 = 1;
	uint64_t x155 = 100353577407562857LLU;
	int8_t x156 = -1;
	volatile uint64_t t21 = 27229691LLU;

	t21 = ((x153+x154)^(x155*x156));

	if (t21 != 18346390496301988838LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x157 = -515585;
	volatile uint64_t x158 = UINT64_MAX;
	uint32_t x159 = 120713U;
	uint64_t x160 = 84223330LLU;
	uint64_t t22 = 27782390190LLU;

	t22 = ((x157+x158)^(x159*x160));

	if (t22 != 18446733906858241676LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x166 = INT32_MAX;
	static uint8_t x168 = 1U;
	static int64_t t23 = 469225LL;

	t23 = ((x165+x166)^(x167*x168));

	if (t23 != 2147483393LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x169 = 14LL;
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MAX;
	int16_t x172 = INT16_MIN;
	static volatile int64_t t24 = 883395871937LL;

	t24 = ((x169+x170)^(x171*x172));

	if (t24 != 1073708942LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x181 = UINT32_MAX;
	static uint32_t x182 = 6U;
	uint16_t x183 = UINT16_MAX;
	static volatile uint8_t x184 = 0U;
	uint32_t t25 = 15047U;

	t25 = ((x181+x182)^(x183*x184));

	if (t25 != 5U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x189 = 4725;
	int16_t x190 = INT16_MAX;
	volatile int16_t x191 = INT16_MAX;
	uint8_t x192 = 23U;

	t26 = ((x189+x190)^(x191*x192));

	if (t26 != 781725) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x202 = INT8_MIN;
	uint32_t x203 = 1U;
	int64_t x204 = INT64_MAX;

	t27 = ((x201+x202)^(x203*x204));

	if (t27 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x217 = 1968LLU;
	uint8_t x218 = 0U;
	int64_t x219 = -7LL;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t28 = 1021842594LLU;

	t28 = ((x217+x218)^(x219*x220));

	if (t28 != 1975LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x222 = 11U;
	volatile int8_t x223 = 3;

	t29 = ((x221+x222)^(x223*x224));

	if (t29 != 39LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x225 = UINT32_MAX;
	uint32_t x226 = 48621632U;
	uint32_t x228 = UINT32_MAX;

	t30 = ((x225+x226)^(x227*x228));

	if (t30 != 4246344438U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x233 = 58U;
	int8_t x234 = 30;
	volatile uint32_t x235 = UINT32_MAX;
	volatile uint32_t t31 = 1187695974U;

	t31 = ((x233+x234)^(x235*x236));

	if (t31 != 4294967129U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x245 = -1;
	static int16_t x247 = INT16_MIN;
	uint32_t x248 = 2U;
	int64_t t32 = 81681670157453LL;

	t32 = ((x245+x246)^(x247*x248));

	if (t32 != -4294901762LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x255 = 1683LLU;
	volatile uint8_t x256 = 52U;

	t33 = ((x253+x254)^(x255*x256));

	if (t33 != 241634LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile uint32_t x262 = UINT32_MAX;
	int64_t x263 = -2063861786828LL;
	int64_t t34 = -128807451507071LL;

	t34 = ((x261+x262)^(x263*x264));

	if (t34 != -49739067219336017LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x269 = 696462815U;
	static volatile int8_t x270 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = -1;

	t35 = ((x269+x270)^(x271*x272));

	if (t35 != 3598504542U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x273 = UINT16_MAX;
	static volatile uint8_t x274 = UINT8_MAX;
	int8_t x275 = -1;
	uint8_t x276 = UINT8_MAX;
	static volatile int32_t t36 = -107341778;

	t36 = ((x273+x274)^(x275*x276));

	if (t36 != -65537) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x281 = -1;
	int16_t x282 = INT16_MIN;
	uint64_t x284 = 5108733LLU;
	volatile uint64_t t37 = 11646625507128872LLU;

	t37 = ((x281+x282)^(x283*x284));

	if (t37 != 5075964LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x285 = INT32_MIN;
	static int64_t x286 = INT64_MAX;
	volatile int32_t x288 = -1;
	int64_t t38 = -4LL;

	t38 = ((x285+x286)^(x287*x288));

	if (t38 != -9223372034707292157LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x289 = 7610U;
	uint8_t x291 = UINT8_MAX;
	int32_t x292 = 5720224;
	static int64_t t39 = -1170093906287LL;

	t39 = ((x289+x290)^(x291*x292));

	if (t39 != -9223372035396121894LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x294 = 26118512688674082LLU;
	volatile int32_t x295 = -1;
	volatile uint8_t x296 = UINT8_MAX;
	static uint64_t t40 = 874097736LLU;

	t40 = ((x293+x294)^(x295*x296));

	if (t40 != 18420625561020877344LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x297 = -1;
	int64_t x299 = -1144LL;
	volatile int32_t x300 = INT32_MAX;
	int64_t t41 = -14LL;

	t41 = ((x297+x298)^(x299*x300));

	if (t41 != 2456721292166LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x302 = -118291009883LL;
	volatile int8_t x303 = 6;
	uint8_t x304 = UINT8_MAX;

	t42 = ((x301+x302)^(x303*x304));

	if (t42 != -120438494369LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x305 = 7U;
	int64_t x307 = -1LL;
	int32_t x308 = -1381;
	int64_t t43 = 7744846891582947LL;

	t43 = ((x305+x306)^(x307*x308));

	if (t43 != -4144LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x313 = UINT8_MAX;
	uint32_t x314 = 20237U;
	static int16_t x315 = INT16_MAX;
	uint8_t x316 = UINT8_MAX;
	volatile uint32_t t44 = 32165702U;

	t44 = ((x313+x314)^(x315*x316));

	if (t44 != 8335117U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x321 = 92070447399871LL;
	volatile int8_t x322 = INT8_MAX;
	int16_t x323 = INT16_MAX;
	uint64_t x324 = 389751546LLU;
	uint64_t t45 = 3306623123043747602LLU;

	t45 = ((x321+x322)^(x323*x324));

	if (t45 != 96901576661304LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x329 = -1;
	static volatile int32_t x330 = INT32_MAX;
	volatile int8_t x331 = -1;
	int8_t x332 = -1;

	t46 = ((x329+x330)^(x331*x332));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x337 = UINT64_MAX;
	int32_t x338 = -1;
	int16_t x339 = INT16_MIN;
	volatile uint64_t t47 = 2LLU;

	t47 = ((x337+x338)^(x339*x340));

	if (t47 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x341 = INT16_MAX;
	volatile uint16_t x342 = UINT16_MAX;
	volatile uint64_t x343 = 1558090392LLU;
	uint8_t x344 = 32U;
	volatile uint64_t t48 = 588227480LLU;

	t48 = ((x341+x342)^(x343*x344));

	if (t48 != 49858948350LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x346 = 477;
	int8_t x348 = INT8_MAX;

	t49 = ((x345+x346)^(x347*x348));

	if (t49 != 18446744062127258030LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x353 = UINT8_MAX;
	static int64_t x355 = -1LL;

	t50 = ((x353+x354)^(x355*x356));

	if (t50 != 254LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x357 = INT64_MIN;
	static uint64_t x358 = 104491LLU;
	uint8_t x359 = 1U;
	int64_t x360 = -44LL;

	t51 = ((x357+x358)^(x359*x360));

	if (t51 != 9223372036854671359LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x361 = -1LL;
	uint16_t x362 = 8132U;
	int16_t x363 = INT16_MAX;
	uint8_t x364 = 1U;
	volatile int64_t t52 = 1630004141576618116LL;

	t52 = ((x361+x362)^(x363*x364));

	if (t52 != 24636LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x365 = INT32_MIN;
	uint32_t x366 = UINT32_MAX;
	int16_t x367 = -1;
	static volatile uint16_t x368 = 6409U;
	uint32_t t53 = 63916326U;

	t53 = ((x365+x366)^(x367*x368));

	if (t53 != 2147490056U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x369 = -992LL;
	uint8_t x370 = 2U;
	volatile uint16_t x372 = 3286U;

	t54 = ((x369+x370)^(x371*x372));

	if (t54 != -842469250LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x374 = -225016237556523831LL;
	static int64_t x375 = INT64_MIN;

	t55 = ((x373+x374)^(x375*x376));

	if (t55 != 8998355799298252104LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x377 = 7;
	static int64_t x378 = -1LL;
	int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;

	t56 = ((x377+x378)^(x379*x380));

	if (t56 != 16390LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x381 = INT16_MIN;
	uint32_t x383 = 18744U;
	int32_t x384 = INT32_MAX;
	volatile uint32_t t57 = 494U;

	t57 = ((x381+x382)^(x383*x384));

	if (t57 != 51511U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	int16_t x388 = INT16_MIN;

	t58 = ((x385+x386)^(x387*x388));

	if (t58 != 4195251033143115520LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MAX;
	uint8_t x396 = 3U;

	t59 = ((x393+x394)^(x395*x396));

	if (t59 != -9223372032559841278LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x397 = INT8_MIN;
	static int64_t x399 = 17718186186857LL;
	uint64_t x400 = 213164LLU;

	t60 = ((x397+x398)^(x399*x400));

	if (t60 != 14669864633374366092LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x401 = INT8_MAX;
	static int32_t x402 = 660070;
	volatile int32_t x403 = INT32_MIN;
	static int64_t x404 = -2067368275LL;
	int64_t t61 = -1912155257676757630LL;

	t61 = ((x401+x402)^(x403*x404));

	if (t61 != 4439639564957127397LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x409 = 39U;
	uint8_t x410 = 13U;
	static uint8_t x411 = 0U;
	int32_t x412 = 3161;
	volatile uint32_t t62 = 18777U;

	t62 = ((x409+x410)^(x411*x412));

	if (t62 != 52U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x413 = INT8_MIN;
	uint16_t x414 = 10U;
	int8_t x415 = -1;
	volatile uint8_t x416 = 25U;
	int32_t t63 = 279;

	t63 = ((x413+x414)^(x415*x416));

	if (t63 != 109) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x417 = UINT64_MAX;
	volatile int32_t x418 = INT32_MAX;
	int8_t x420 = 0;
	uint64_t t64 = 67842963957LLU;

	t64 = ((x417+x418)^(x419*x420));

	if (t64 != 2147483646LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x421 = INT16_MAX;
	static int16_t x422 = INT16_MIN;
	static int8_t x423 = -1;
	int32_t t65 = -35021182;

	t65 = ((x421+x422)^(x423*x424));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x425 = 3329U;
	uint32_t x426 = 886918U;
	int64_t x428 = INT64_MAX;
	uint64_t t66 = 50152978LLU;

	t66 = ((x425+x426)^(x427*x428));

	if (t66 != 9223342101504019616LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x437 = INT8_MIN;
	int32_t x440 = -1;
	int64_t t67 = 975271624975LL;

	t67 = ((x437+x438)^(x439*x440));

	if (t67 != -8945710885LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x441 = 14U;
	uint64_t x442 = UINT64_MAX;
	uint32_t x443 = 1U;
	int32_t x444 = 1121;

	t68 = ((x441+x442)^(x443*x444));

	if (t68 != 1132LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x450 = INT8_MIN;
	uint64_t t69 = 17LLU;

	t69 = ((x449+x450)^(x451*x452));

	if (t69 != 18446744023420730177LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x466 = 13U;
	volatile uint8_t x468 = 76U;
	int32_t t70 = -712;

	t70 = ((x465+x466)^(x467*x468));

	if (t70 != 57) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x473 = -1LL;
	int64_t x474 = 377013270LL;
	uint16_t x475 = 13U;
	int32_t x476 = -1;
	int64_t t71 = 32LL;

	t71 = ((x473+x474)^(x475*x476));

	if (t71 != -377013274LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x477 = 7122037U;
	static int8_t x478 = -13;
	int64_t x479 = -1LL;
	volatile int32_t x480 = INT32_MIN;
	int64_t t72 = 26996422080934028LL;

	t72 = ((x477+x478)^(x479*x480));

	if (t72 != 2154605672LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x483 = 1U;
	int64_t x484 = -1LL;
	static int64_t t73 = 21031937914062840LL;

	t73 = ((x481+x482)^(x483*x484));

	if (t73 != -32792LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x485 = INT8_MAX;
	int16_t x486 = INT16_MAX;
	int8_t x487 = INT8_MIN;

	t74 = ((x485+x486)^(x487*x488));

	if (t74 != -33666) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x489 = INT16_MIN;
	int64_t x491 = INT64_MIN;
	uint64_t t75 = 186028LLU;

	t75 = ((x489+x490)^(x491*x492));

	if (t75 != 9223372036854794178LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x497 = 1U;
	int32_t x498 = INT32_MIN;
	int8_t x500 = INT8_MIN;
	uint64_t t76 = 2063196LLU;

	t76 = ((x497+x498)^(x499*x500));

	if (t76 != 18446744071562068097LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x502 = 0U;
	int32_t x503 = -1;
	uint32_t x504 = UINT32_MAX;

	t77 = ((x501+x502)^(x503*x504));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x510 = INT16_MIN;
	int8_t x511 = 9;
	uint8_t x512 = 2U;
	uint64_t t78 = 13LLU;

	t78 = ((x509+x510)^(x511*x512));

	if (t78 != 37030214LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x514 = 18U;
	int8_t x515 = 1;
	static int64_t t79 = 1294380LL;

	t79 = ((x513+x514)^(x515*x516));

	if (t79 != -9223372036854773886LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x517 = INT16_MIN;
	int32_t x519 = -8059;
	int32_t x520 = 120;
	volatile uint64_t t80 = 4855117289983508LLU;

	t80 = ((x517+x518)^(x519*x520));

	if (t80 != 963837LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x533 = 0;
	static uint8_t x534 = 0U;
	volatile int8_t x535 = -42;
	static int16_t x536 = INT16_MAX;
	volatile int32_t t81 = 3;

	t81 = ((x533+x534)^(x535*x536));

	if (t81 != -1376214) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x537 = 4U;
	int16_t x538 = INT16_MAX;
	uint64_t x539 = 1261822908LLU;
	uint64_t x540 = 226453LLU;
	uint64_t t82 = 10937583797LLU;

	t82 = ((x537+x538)^(x539*x540));

	if (t82 != 285743582952559LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x554 = INT16_MAX;
	int16_t x555 = -304;
	volatile int32_t t83 = 2941;

	t83 = ((x553+x554)^(x555*x556));

	if (t83 != -2147451185) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x561 = 34183819967593412LLU;
	static int64_t x562 = INT64_MAX;
	int32_t x564 = -1;
	static uint64_t t84 = 205LLU;

	t84 = ((x561+x562)^(x563*x564));

	if (t84 != 9257555856822369218LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x565 = 0LL;
	int16_t x566 = -1;
	volatile uint64_t x567 = 560379736554883831LLU;
	static int16_t x568 = -14936;
	volatile uint64_t t85 = 802608223673537LLU;

	t85 = ((x565+x566)^(x567*x568));

	if (t85 != 13456679793318017767LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x571 = -3;
	int64_t x572 = -1LL;
	volatile int64_t t86 = 113185769582LL;

	t86 = ((x569+x570)^(x571*x572));

	if (t86 != 620292880LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x577 = INT64_MIN;
	uint16_t x578 = 2816U;
	uint64_t x579 = 26LLU;
	int16_t x580 = 3;
	volatile uint64_t t87 = 415715848LLU;

	t87 = ((x577+x578)^(x579*x580));

	if (t87 != 9223372036854778702LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x581 = INT32_MIN;
	uint32_t x582 = UINT32_MAX;
	static uint16_t x583 = UINT16_MAX;
	volatile uint64_t t88 = 2322440731582998549LLU;

	t88 = ((x581+x582)^(x583*x584));

	if (t88 != 18446744071562133502LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x585 = -30;
	uint8_t x587 = 12U;
	int64_t x588 = 2590770LL;

	t89 = ((x585+x586)^(x587*x588));

	if (t89 != -31089225LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x601 = 22824U;
	volatile uint16_t x602 = 8055U;
	static int64_t x603 = -1524031LL;
	static volatile uint8_t x604 = 3U;
	volatile int64_t t90 = -3LL;

	t90 = ((x601+x602)^(x603*x604));

	if (t90 != -4569892LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x609 = 2512427631452LL;
	volatile int16_t x612 = INT16_MAX;
	volatile int64_t t91 = -4LL;

	t91 = ((x609+x610)^(x611*x612));

	if (t91 != 9223369524426523612LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x623 = INT8_MIN;
	static uint64_t t92 = 13437LLU;

	t92 = ((x621+x622)^(x623*x624));

	if (t92 != 18446744073705357450LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x625 = -1LL;
	uint16_t x626 = 31U;
	int32_t x627 = 7166048;
	volatile uint32_t x628 = 1125U;
	int64_t t93 = -143397270651813954LL;

	t93 = ((x625+x626)^(x627*x628));

	if (t93 != 3766836734LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x637 = INT8_MIN;
	uint64_t x638 = UINT64_MAX;
	int8_t x639 = INT8_MAX;
	uint64_t t94 = 575263095815LLU;

	t94 = ((x637+x638)^(x639*x640));

	if (t94 != 18446744073707151949LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x649 = -1;
	uint32_t x650 = 133U;
	uint32_t x651 = UINT32_MAX;

	t95 = ((x649+x650)^(x651*x652));

	if (t95 != 133U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x654 = 788563272;
	volatile uint32_t x655 = 5U;
	int32_t x656 = 25963299;
	volatile uint32_t t96 = 16046490U;

	t96 = ((x653+x654)^(x655*x656));

	if (t96 != 683426318U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x657 = UINT32_MAX;
	static uint16_t x658 = UINT16_MAX;
	uint16_t x659 = 145U;
	volatile uint32_t t97 = 179536U;

	t97 = ((x657+x658)^(x659*x660));

	if (t97 != 65534U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x665 = INT64_MAX;
	int32_t x666 = INT32_MIN;
	int64_t x667 = -5787715LL;
	static uint32_t x668 = 2U;
	volatile int64_t t98 = -3538LL;

	t98 = ((x665+x666)^(x667*x668));

	if (t98 != -9223372034695716731LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x669 = 1;
	int32_t x670 = -1;
	int8_t x671 = -2;
	volatile int16_t x672 = INT16_MAX;
	int32_t t99 = -1756040;

	t99 = ((x669+x670)^(x671*x672));

	if (t99 != -65534) { NG(); } else { ; }
	
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

