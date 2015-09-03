#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x4 = 78728949U;
int32_t x9 = -4;
int64_t x10 = -1LL;
uint16_t x27 = 5753U;
uint64_t x29 = 958221958234LLU;
volatile uint64_t t3 = 1858188219375168376LLU;
uint64_t x50 = UINT64_MAX;
int64_t x51 = INT64_MIN;
volatile uint64_t t5 = 47671480775759562LLU;
static uint8_t x60 = 1U;
int8_t x72 = INT8_MIN;
static int8_t x85 = INT8_MIN;
int16_t x86 = INT16_MIN;
static int16_t x88 = -1;
volatile int16_t x102 = INT16_MIN;
static int64_t x103 = INT64_MIN;
volatile int16_t x104 = INT16_MIN;
int16_t x107 = -597;
uint32_t x110 = UINT32_MAX;
uint64_t x155 = 99334946406470LLU;
int8_t x156 = INT8_MAX;
static int32_t x177 = INT32_MAX;
volatile int64_t t15 = 220507987767LL;
static int32_t x221 = INT32_MIN;
uint32_t x231 = UINT32_MAX;
int64_t x242 = INT64_MAX;
uint8_t x243 = 51U;
int32_t x255 = -12887955;
int64_t x256 = 1769269LL;
int8_t x270 = 5;
uint16_t x276 = UINT16_MAX;
int16_t x313 = 0;
static int64_t t32 = -66815184LL;
volatile uint64_t t33 = 12025418394288LLU;
int32_t x387 = 1278;
uint16_t x393 = UINT16_MAX;
uint64_t x396 = 129452342LLU;
int8_t x420 = INT8_MAX;
volatile uint16_t x429 = UINT16_MAX;
volatile uint32_t x430 = 16525661U;
static volatile uint32_t t41 = 202159U;
int8_t x437 = INT8_MAX;
volatile int32_t x441 = -38475637;
int8_t x467 = 2;
volatile uint16_t x506 = 39U;
static int16_t x509 = INT16_MIN;
volatile uint64_t t47 = 20301386467311LLU;
volatile int8_t x528 = 48;
static uint8_t x533 = 30U;
static uint8_t x540 = 60U;
uint16_t x544 = 7U;
uint64_t x551 = 4430303601473113462LLU;
static int64_t x562 = -9313186372LL;
static int64_t x567 = INT64_MIN;
volatile uint64_t t56 = 16680096920LLU;
uint64_t x588 = 1029115LLU;
int16_t x598 = INT16_MIN;
uint64_t t58 = 14LLU;
volatile uint64_t t59 = 740686698187LLU;
int32_t x625 = -1;
int64_t t62 = -1627044721058864LL;
uint64_t x655 = 5259932543LLU;
int8_t x661 = -1;
static volatile uint64_t x674 = 9LLU;
uint64_t t66 = 178621LLU;
int32_t x677 = INT32_MAX;
volatile uint32_t x690 = 176U;
int64_t x694 = -1LL;
volatile int32_t x698 = INT32_MAX;
int16_t x699 = -1;
volatile int64_t t70 = -35LL;
volatile uint8_t x735 = 49U;
int32_t x765 = -1;
uint32_t x767 = UINT32_MAX;
static volatile int64_t x770 = -83451764LL;
volatile uint16_t x772 = 2707U;
uint32_t x778 = UINT32_MAX;
volatile uint32_t x786 = 1U;
uint32_t t77 = 2U;
int64_t x841 = -4173871996927LL;
int8_t x873 = -1;
int8_t x897 = INT8_MIN;
static int32_t x900 = 1;
volatile int16_t x930 = INT16_MIN;
int32_t x936 = -1;
static int64_t t88 = 4809944976596604LL;
uint64_t t89 = 4308812378147LLU;
static uint64_t x968 = 1LLU;
int16_t x982 = 12;
int64_t x1005 = 4LL;
static volatile int64_t t94 = -9115430753LL;
static volatile uint8_t x1012 = 3U;
volatile uint64_t t95 = 1LLU;
volatile int64_t x1013 = -1LL;


void f0(void) {
	uint8_t x1 = 5U;
	int8_t x2 = INT8_MAX;
	volatile uint64_t x3 = 1386220951LLU;
	uint64_t t0 = 127802489650504LLU;

	t0 = (x1%(x2&(x3/x4)));

	if (t0 != 5LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x11 = -1LL;
	int64_t x12 = -1LL;
	int64_t t1 = 271619180LL;

	t1 = (x9%(x10&(x11/x12)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x25 = INT16_MIN;
	int64_t x26 = -1201542625LL;
	volatile int64_t x28 = 60LL;
	volatile int64_t t2 = 49LL;

	t2 = (x25%(x26&(x27/x28)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x30 = 1U;
	int64_t x31 = 69810626491641522LL;
	int8_t x32 = INT8_MIN;

	t3 = (x29%(x30&(x31/x32)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x45 = -1;
	volatile uint32_t x46 = 5509U;
	int32_t x47 = -694547;
	int16_t x48 = 43;
	volatile uint32_t t4 = 3571U;

	t4 = (x45%(x46&(x47/x48)));

	if (t4 != 127U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x52 = 2U;

	t5 = (x49%(x50&(x51/x52)));

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x57 = INT8_MAX;
	int16_t x58 = INT16_MIN;
	int16_t x59 = -1;
	int32_t t6 = 4;

	t6 = (x57%(x58&(x59/x60)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x69 = -1;
	int16_t x70 = INT16_MAX;
	uint32_t x71 = UINT32_MAX;
	uint32_t t7 = 6954U;

	t7 = (x69%(x70&(x71/x72)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x87 = 12058U;
	volatile int32_t t8 = 464;

	t8 = (x85%(x86&(x87/x88)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x101 = 48310462U;
	int64_t t9 = 3310661281864LL;

	t9 = (x101%(x102&(x103/x104)));

	if (t9 != 48310462LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x105 = 1999857747LL;
	uint16_t x106 = 32U;
	uint64_t x108 = 875511051463LLU;
	uint64_t t10 = 51754343LLU;

	t10 = (x105%(x106&(x107/x108)));

	if (t10 != 19LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x109 = 32U;
	int16_t x111 = -4720;
	volatile uint32_t x112 = 65838163U;
	uint32_t t11 = 27831019U;

	t11 = (x109%(x110&(x111/x112)));

	if (t11 != 32U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x153 = 337368790U;
	int64_t x154 = INT64_MAX;
	uint64_t t12 = 22546862193980772LLU;

	t12 = (x153%(x154&(x155/x156)));

	if (t12 != 337368790LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x169 = 490;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -294268475676468LL;
	static int32_t x172 = -1;
	volatile int64_t t13 = 1351923480771922172LL;

	t13 = (x169%(x170&(x171/x172)));

	if (t13 != 490LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x173 = 21U;
	uint16_t x174 = UINT16_MAX;
	int64_t x175 = INT64_MAX;
	int64_t x176 = INT64_MAX;
	volatile int64_t t14 = 10277LL;

	t14 = (x173%(x174&(x175/x176)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x178 = -2944;
	volatile int64_t x179 = INT64_MAX;
	int32_t x180 = INT32_MIN;

	t15 = (x177%(x178&(x179/x180)));

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x189 = 3LLU;
	uint16_t x190 = 51U;
	static int64_t x191 = INT64_MIN;
	int8_t x192 = 3;
	volatile uint64_t t16 = 2974579515204066720LLU;

	t16 = (x189%(x190&(x191/x192)));

	if (t16 != 3LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x193 = 7958592857923153LLU;
	int32_t x194 = INT32_MAX;
	int16_t x195 = -338;
	static int8_t x196 = INT8_MIN;
	uint64_t t17 = 228150264LLU;

	t17 = (x193%(x194&(x195/x196)));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x201 = -1;
	uint16_t x202 = 965U;
	int64_t x203 = -29461937114909021LL;
	int32_t x204 = INT32_MIN;
	int64_t t18 = -3556156LL;

	t18 = (x201%(x202&(x203/x204)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x217 = INT32_MAX;
	volatile uint32_t x218 = UINT32_MAX;
	volatile int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MAX;
	static uint32_t t19 = 846405U;

	t19 = (x217%(x218&(x219/x220)));

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x222 = 1U;
	volatile int64_t x223 = INT64_MAX;
	int8_t x224 = INT8_MIN;
	static volatile int64_t t20 = -395LL;

	t20 = (x221%(x222&(x223/x224)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x229 = INT32_MAX;
	uint32_t x230 = 179003U;
	int16_t x232 = INT16_MIN;
	uint32_t t21 = 13806U;

	t21 = (x229%(x230&(x231/x232)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x233 = -1;
	static int16_t x234 = 3147;
	volatile uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MIN;
	uint64_t t22 = 444150591LLU;

	t22 = (x233%(x234&(x235/x236)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x241 = UINT16_MAX;
	int32_t x244 = -1;
	volatile int64_t t23 = 12251452420LL;

	t23 = (x241%(x242&(x243/x244)));

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x245 = INT32_MAX;
	int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	volatile int64_t x248 = -1LL;
	volatile int64_t t24 = 80LL;

	t24 = (x245%(x246&(x247/x248)));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x249 = 423766198476937LLU;
	int8_t x250 = INT8_MIN;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t25 = 502861622932605LLU;

	t25 = (x249%(x250&(x251/x252)));

	if (t25 != 423766198476937LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x253 = UINT64_MAX;
	int64_t x254 = INT64_MIN;
	static volatile uint64_t t26 = 2038LLU;

	t26 = (x253%(x254&(x255/x256)));

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x261 = -534114956;
	volatile uint32_t x262 = 62614631U;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MAX;
	uint32_t t27 = 9U;

	t27 = (x261%(x262&(x263/x264)));

	if (t27 != 3974540U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x269 = -1;
	int64_t x271 = INT64_MAX;
	static int32_t x272 = INT32_MIN;
	int64_t t28 = 1LL;

	t28 = (x269%(x270&(x271/x272)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MAX;
	int64_t x275 = -79163517358566618LL;
	int64_t t29 = -284282471503823095LL;

	t29 = (x273%(x274&(x275/x276)));

	if (t29 != -40LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MAX;
	int64_t x283 = INT64_MIN;
	int64_t x284 = 426782876842307364LL;
	int64_t t30 = 993029LL;

	t30 = (x281%(x282&(x283/x284)));

	if (t30 != -21LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x314 = -7021995;
	int32_t x315 = -4247;
	int8_t x316 = INT8_MIN;
	int32_t t31 = 1892;

	t31 = (x313%(x314&(x315/x316)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MIN;
	volatile int64_t x339 = 2951LL;
	volatile uint32_t x340 = 1U;

	t32 = (x337%(x338&(x339/x340)));

	if (t32 != -384LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x349 = -1;
	uint16_t x350 = UINT16_MAX;
	volatile uint64_t x351 = 3994903670LLU;
	uint16_t x352 = 2035U;

	t33 = (x349%(x350&(x351/x352)));

	if (t33 != 11652LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int64_t x354 = INT64_MAX;
	uint32_t x355 = 23736U;
	static uint8_t x356 = 30U;
	static volatile int64_t t34 = -3LL;

	t34 = (x353%(x354&(x355/x356)));

	if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x361 = INT16_MIN;
	static uint64_t x362 = 43LLU;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t x364 = -1;
	uint64_t t35 = 243609870559LLU;

	t35 = (x361%(x362&(x363/x364)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x385 = 1099;
	volatile uint32_t x386 = UINT32_MAX;
	int8_t x388 = INT8_MIN;
	uint32_t t36 = 10592U;

	t36 = (x385%(x386&(x387/x388)));

	if (t36 != 1099U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x389 = 6831;
	static int16_t x390 = INT16_MAX;
	int16_t x391 = INT16_MAX;
	uint32_t x392 = 408U;
	uint32_t t37 = 163U;

	t37 = (x389%(x390&(x391/x392)));

	if (t37 != 31U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x394 = -3;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t t38 = 1151551810365702250LLU;

	t38 = (x393%(x394&(x395/x396)));

	if (t38 != 65535LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x405 = 246U;
	uint8_t x406 = UINT8_MAX;
	int64_t x407 = INT64_MIN;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t39 = -6399258LL;

	t39 = (x405%(x406&(x407/x408)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x417 = -1LL;
	static int64_t x418 = INT64_MIN;
	static volatile int64_t x419 = INT64_MIN;
	int64_t t40 = 1048212649635004LL;

	t40 = (x417%(x418&(x419/x420)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x431 = INT32_MIN;
	static uint32_t x432 = 13691U;

	t41 = (x429%(x430&(x431/x432)));

	if (t41 != 8044U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x438 = 20399934U;
	int8_t x439 = 4;
	int16_t x440 = -1;
	volatile uint32_t t42 = 28U;

	t42 = (x437%(x438&(x439/x440)));

	if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x442 = -1;
	uint16_t x443 = UINT16_MAX;
	static uint32_t x444 = 894U;
	static uint32_t t43 = 30399U;

	t43 = (x441%(x442&(x443/x444)));

	if (t43 != 67U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x465 = 2461U;
	uint32_t x466 = UINT32_MAX;
	int32_t x468 = 1;
	static volatile uint32_t t44 = 7U;

	t44 = (x465%(x466&(x467/x468)));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x469 = UINT16_MAX;
	int32_t x470 = INT32_MAX;
	volatile int64_t x471 = INT64_MAX;
	static uint32_t x472 = 14578839U;
	volatile int64_t t45 = 4796747LL;

	t45 = (x469%(x470&(x471/x472)));

	if (t45 != 65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x505 = INT64_MIN;
	volatile uint16_t x507 = 5U;
	int32_t x508 = -1;
	volatile int64_t t46 = -5932479248LL;

	t46 = (x505%(x506&(x507/x508)));

	if (t46 != -8LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x510 = 663538U;
	volatile uint64_t x511 = UINT64_MAX;
	static int8_t x512 = INT8_MAX;

	t47 = (x509%(x510&(x511/x512)));

	if (t47 != 254LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x525 = INT8_MIN;
	uint32_t x526 = 32552641U;
	int16_t x527 = INT16_MIN;
	volatile uint32_t t48 = 21931778U;

	t48 = (x525%(x526&(x527/x528)));

	if (t48 != 30655168U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x529 = -1;
	int64_t x530 = -1LL;
	static int32_t x531 = INT32_MAX;
	int32_t x532 = -100006;
	int64_t t49 = -1LL;

	t49 = (x529%(x530&(x531/x532)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x534 = INT16_MAX;
	static int8_t x535 = 1;
	int64_t x536 = -1LL;
	volatile int64_t t50 = -735085666886009LL;

	t50 = (x533%(x534&(x535/x536)));

	if (t50 != 30LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x537 = INT64_MIN;
	uint32_t x538 = UINT32_MAX;
	volatile uint8_t x539 = 101U;
	volatile int64_t t51 = -26140561034672LL;

	t51 = (x537%(x538&(x539/x540)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x541 = 3036U;
	static int8_t x542 = -14;
	int32_t x543 = INT32_MIN;
	volatile int32_t t52 = 221823218;

	t52 = (x541%(x542&(x543/x544)));

	if (t52 != 3036) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x549 = UINT8_MAX;
	int64_t x550 = 65300837LL;
	uint64_t x552 = 796744709933LLU;
	volatile uint64_t t53 = 7626316LLU;

	t53 = (x549%(x550&(x551/x552)));

	if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x561 = 1;
	int8_t x563 = INT8_MIN;
	int8_t x564 = 1;
	int64_t t54 = -2371543001752067LL;

	t54 = (x561%(x562&(x563/x564)));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x565 = INT64_MIN;
	static int8_t x566 = -31;
	int8_t x568 = -36;
	static int64_t t55 = 117595473LL;

	t55 = (x565%(x566&(x567/x568)));

	if (t55 != -512LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x581 = INT8_MIN;
	static uint64_t x582 = UINT64_MAX;
	int32_t x583 = INT32_MAX;
	uint64_t x584 = 10605771LLU;

	t56 = (x581%(x582&(x583/x584)));

	if (t56 != 52LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x585 = INT64_MIN;
	int32_t x586 = 103;
	int64_t x587 = -1LL;
	uint64_t t57 = 2LLU;

	t57 = (x585%(x586&(x587/x588)));

	if (t57 != 6LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x597 = INT64_MIN;
	volatile uint64_t x599 = 98307151871887017LLU;
	uint16_t x600 = UINT16_MAX;

	t58 = (x597%(x598&(x599/x600)));

	if (t58 != 1173113962496LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x605 = 19955006923LLU;
	static int16_t x606 = -1;
	int16_t x607 = INT16_MAX;
	static int8_t x608 = -1;

	t59 = (x605%(x606&(x607/x608)));

	if (t59 != 19955006923LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x626 = UINT8_MAX;
	int16_t x627 = INT16_MIN;
	uint64_t x628 = 200551123057356584LLU;
	static volatile uint64_t t60 = 723657LLU;

	t60 = (x625%(x626&(x627/x628)));

	if (t60 != 15LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x633 = 11U;
	volatile int32_t x634 = 14955;
	int32_t x635 = 81;
	uint64_t x636 = 30LLU;
	static volatile uint64_t t61 = 96148916479863LLU;

	t61 = (x633%(x634&(x635/x636)));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x637 = INT16_MIN;
	volatile uint16_t x638 = UINT16_MAX;
	static int64_t x639 = INT64_MIN;
	int32_t x640 = -7;

	t62 = (x637%(x638&(x639/x640)));

	if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x653 = INT32_MIN;
	int32_t x654 = -1;
	static volatile int8_t x656 = INT8_MAX;
	static uint64_t t63 = 2692329LLU;

	t63 = (x653%(x654&(x655/x656)));

	if (t63 != 160997LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x662 = INT64_MIN;
	volatile uint16_t x663 = UINT16_MAX;
	int16_t x664 = INT16_MIN;
	int64_t t64 = -618649LL;

	t64 = (x661%(x662&(x663/x664)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x669 = 223758132119LL;
	volatile int16_t x670 = INT16_MAX;
	int32_t x671 = -90378;
	uint8_t x672 = 46U;
	static int64_t t65 = 1555LL;

	t65 = (x669%(x670&(x671/x672)));

	if (t65 != 1595LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x673 = UINT16_MAX;
	int64_t x675 = 373LL;
	int8_t x676 = -1;

	t66 = (x673%(x674&(x675/x676)));

	if (t66 != 6LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x678 = 17280847759LL;
	volatile int64_t x679 = INT64_MIN;
	uint64_t x680 = 16023326929LLU;
	static volatile uint64_t t67 = 233LLU;

	t67 = (x677%(x678&(x679/x680)));

	if (t67 != 15853069LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x689 = 184149814U;
	static volatile int64_t x691 = -558023946698837LL;
	uint64_t x692 = 90931805463409LLU;
	volatile uint64_t t68 = 12640254191LLU;

	t68 = (x689%(x690&(x691/x692)));

	if (t68 != 22LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x693 = -1LL;
	int8_t x695 = -1;
	volatile uint64_t x696 = 1744391LLU;
	static uint64_t t69 = 487LLU;

	t69 = (x693%(x694&(x695/x696)));

	if (t69 != 536199LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x697 = -1LL;
	static int64_t x700 = -1LL;

	t70 = (x697%(x698&(x699/x700)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x721 = INT64_MIN;
	int16_t x722 = INT16_MAX;
	static int64_t x723 = 553045943574227LL;
	uint16_t x724 = UINT16_MAX;
	volatile int64_t t71 = -171815640597133274LL;

	t71 = (x721%(x722&(x723/x724)));

	if (t71 != -386LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x733 = 940374LL;
	uint8_t x734 = 1U;
	int64_t x736 = -1LL;
	volatile int64_t t72 = 4LL;

	t72 = (x733%(x734&(x735/x736)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x745 = 1436U;
	uint64_t x746 = 1076013159500284153LLU;
	int32_t x747 = INT32_MIN;
	static int32_t x748 = INT32_MAX;
	static uint64_t t73 = 321045377LLU;

	t73 = (x745%(x746&(x747/x748)));

	if (t73 != 1436LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x766 = 3111560623495LLU;
	int32_t x768 = -6;
	uint64_t t74 = 745093LLU;

	t74 = (x765%(x766&(x767/x768)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x769 = 24707LLU;
	int16_t x771 = INT16_MIN;
	static uint64_t t75 = 3478LLU;

	t75 = (x769%(x770&(x771/x772)));

	if (t75 != 24707LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x777 = -1622355LL;
	volatile int16_t x779 = 405;
	static uint8_t x780 = 4U;
	int64_t t76 = -53126465491120478LL;

	t76 = (x777%(x778&(x779/x780)));

	if (t76 != -93LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x785 = 1U;
	volatile uint8_t x787 = 107U;
	int16_t x788 = -1;

	t77 = (x785%(x786&(x787/x788)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x809 = 1669402;
	int8_t x810 = INT8_MIN;
	int16_t x811 = INT16_MAX;
	static int16_t x812 = 2;
	static int32_t t78 = 97975;

	t78 = (x809%(x810&(x811/x812)));

	if (t78 != 11290) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x842 = INT64_MAX;
	static int16_t x843 = INT16_MIN;
	int16_t x844 = -10;
	int64_t t79 = 418620LL;

	t79 = (x841%(x842&(x843/x844)));

	if (t79 != -451LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x869 = -27087063750013123LL;
	uint8_t x870 = UINT8_MAX;
	uint32_t x871 = UINT32_MAX;
	int8_t x872 = INT8_MIN;
	volatile int64_t t80 = -10080149407403244LL;

	t80 = (x869%(x870&(x871/x872)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x874 = INT16_MAX;
	int32_t x875 = -9;
	volatile int8_t x876 = 1;
	static volatile int32_t t81 = 76;

	t81 = (x873%(x874&(x875/x876)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x885 = INT32_MIN;
	volatile int16_t x886 = INT16_MIN;
	int32_t x887 = INT32_MIN;
	int16_t x888 = -173;
	volatile int32_t t82 = -3451259;

	t82 = (x885%(x886&(x887/x888)));

	if (t82 != -4653056) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x898 = INT8_MAX;
	int16_t x899 = -1;
	volatile int32_t t83 = -14914;

	t83 = (x897%(x898&(x899/x900)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x909 = 28;
	uint16_t x910 = UINT16_MAX;
	int8_t x911 = INT8_MIN;
	static int32_t x912 = -1;
	volatile int32_t t84 = 39747;

	t84 = (x909%(x910&(x911/x912)));

	if (t84 != 28) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x929 = INT32_MAX;
	volatile int64_t x931 = 264803LL;
	volatile int16_t x932 = -15553;
	volatile int64_t t85 = -15629LL;

	t85 = (x929%(x930&(x931/x932)));

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x933 = INT64_MIN;
	static volatile uint64_t x934 = UINT64_MAX;
	static int32_t x935 = INT32_MAX;
	static volatile uint64_t t86 = 406674610668LLU;

	t86 = (x933%(x934&(x935/x936)));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x937 = UINT64_MAX;
	volatile int16_t x938 = 6;
	int64_t x939 = INT64_MIN;
	static uint16_t x940 = 5951U;
	volatile uint64_t t87 = 4110956LLU;

	t87 = (x937%(x938&(x939/x940)));

	if (t87 != 3LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x945 = INT8_MIN;
	volatile int64_t x946 = INT64_MAX;
	int32_t x947 = INT32_MIN;
	volatile uint8_t x948 = UINT8_MAX;

	t88 = (x945%(x946&(x947/x948)));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x961 = UINT64_MAX;
	volatile int8_t x962 = INT8_MIN;
	int16_t x963 = 1;
	static volatile int8_t x964 = -1;

	t89 = (x961%(x962&(x963/x964)));

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x965 = -61;
	int16_t x966 = 154;
	int32_t x967 = -1;
	volatile uint64_t t90 = 15044933621LLU;

	t90 = (x965%(x966&(x967/x968)));

	if (t90 != 109LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x969 = UINT8_MAX;
	uint16_t x970 = 166U;
	uint16_t x971 = 325U;
	int8_t x972 = INT8_MIN;
	int32_t t91 = 595804;

	t91 = (x969%(x970&(x971/x972)));

	if (t91 != 89) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x981 = INT8_MIN;
	uint16_t x983 = 5U;
	int16_t x984 = -1;
	volatile int32_t t92 = 11694;

	t92 = (x981%(x982&(x983/x984)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x985 = INT16_MIN;
	int8_t x986 = -1;
	volatile int8_t x987 = 6;
	int16_t x988 = -5;
	volatile int32_t t93 = -44;

	t93 = (x985%(x986&(x987/x988)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1006 = INT64_MAX;
	int16_t x1007 = INT16_MAX;
	volatile uint8_t x1008 = UINT8_MAX;

	t94 = (x1005%(x1006&(x1007/x1008)));

	if (t94 != 4LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1009 = 267041310LLU;
	int16_t x1010 = INT16_MAX;
	volatile int64_t x1011 = INT64_MIN;

	t95 = (x1009%(x1010&(x1011/x1012)));

	if (t95 != 17652LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x1014 = INT8_MIN;
	int32_t x1015 = -1;
	uint64_t x1016 = 60947412026977LLU;
	uint64_t t96 = 13891638403105LLU;

	t96 = (x1013%(x1014&(x1015/x1016)));

	if (t96 != 45567LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1017 = INT64_MIN;
	int64_t x1018 = INT64_MAX;
	int64_t x1019 = INT64_MIN;
	int16_t x1020 = 38;
	int64_t t97 = 124460258950855LL;

	t97 = (x1017%(x1018&(x1019/x1020)));

	if (t97 != -242720316759336205LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1041 = UINT8_MAX;
	uint32_t x1042 = UINT32_MAX;
	uint32_t x1043 = 3497525U;
	volatile uint8_t x1044 = UINT8_MAX;
	volatile uint32_t t98 = 35481148U;

	t98 = (x1041%(x1042&(x1043/x1044)));

	if (t98 != 255U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1053 = 9U;
	int8_t x1054 = INT8_MIN;
	int8_t x1055 = INT8_MAX;
	static int64_t x1056 = -1LL;
	int64_t t99 = 0LL;

	t99 = (x1053%(x1054&(x1055/x1056)));

	if (t99 != 9LL) { NG(); } else { ; }
	
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

