#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 1023630634LLU;
int64_t x22 = -201133188968LL;
int16_t x23 = -1;
uint8_t x24 = 41U;
static volatile uint32_t x25 = UINT32_MAX;
uint16_t x28 = 0U;
static volatile int64_t x34 = -1LL;
volatile int16_t x38 = INT16_MIN;
uint16_t x43 = UINT16_MAX;
int16_t x46 = -1;
int64_t x47 = 31984121636940396LL;
uint64_t x70 = UINT64_MAX;
static volatile uint8_t x83 = UINT8_MAX;
int64_t x133 = -1LL;
static volatile int64_t x134 = -2615698488LL;
volatile int8_t x137 = -2;
int64_t x147 = -1LL;
uint16_t x151 = 21U;
uint64_t x165 = 318786627LLU;
static int16_t x174 = -96;
uint32_t t23 = 69907U;
int64_t x178 = -76LL;
uint64_t x183 = 4542LLU;
int64_t x221 = -1LL;
uint16_t x222 = 3U;
uint8_t x223 = UINT8_MAX;
static volatile int64_t t26 = 1039LL;
volatile uint8_t x232 = UINT8_MAX;
volatile uint64_t t28 = 3974870514596662090LLU;
int32_t x238 = 153;
static int64_t x240 = 1180716672707237789LL;
static volatile uint64_t t29 = 82510436LLU;
int8_t x244 = INT8_MIN;
int16_t x267 = INT16_MAX;
static int32_t x273 = 20002;
volatile uint32_t t34 = 1376316U;
uint32_t x286 = 142490U;
static volatile int64_t x292 = -453726288811LL;
uint16_t x295 = 0U;
int64_t t39 = -1LL;
uint32_t x297 = 70084U;
volatile int64_t x300 = -3027639729524LL;
int16_t x312 = -1;
static uint64_t x318 = 1LLU;
int16_t x332 = -13;
volatile uint16_t x334 = 5U;
volatile int8_t x338 = INT8_MIN;
int16_t x340 = 1;
int16_t x346 = 1920;
volatile uint8_t x354 = 4U;
int16_t x366 = INT16_MIN;
volatile uint64_t t51 = 45359200097844065LLU;
int16_t x376 = -957;
static uint32_t x392 = 1055852U;
volatile int64_t t55 = -80600LL;
static uint64_t x410 = 275925246689134527LLU;
int32_t x411 = INT32_MAX;
static int32_t x413 = -1;
uint32_t x418 = 3712159U;
int32_t x419 = INT32_MIN;
volatile int64_t t59 = -366764198LL;
volatile uint8_t x460 = 26U;
uint64_t x470 = 53881518666LLU;
uint32_t x471 = UINT32_MAX;
int32_t x472 = 504634;
uint32_t x489 = UINT32_MAX;
uint64_t x492 = 14230974LLU;
static volatile uint64_t t66 = 39197255LLU;
uint32_t x504 = 50384U;
static int8_t x513 = 1;
uint16_t x516 = 2U;
volatile int32_t t71 = 7371144;
uint64_t x520 = UINT64_MAX;
int64_t t73 = 1538998228220969086LL;
int8_t x530 = INT8_MIN;
int16_t x535 = INT16_MIN;
int32_t x544 = -1;
volatile uint32_t x559 = UINT32_MAX;
uint8_t x560 = 12U;
uint32_t x562 = UINT32_MAX;
int8_t x566 = INT8_MIN;
int8_t x569 = INT8_MIN;
uint64_t x575 = 95352677505984383LLU;
static volatile uint64_t t81 = 31LLU;
int32_t x577 = 36;
int8_t x592 = 1;
volatile uint64_t t83 = 648LLU;
static uint16_t x614 = 3667U;
int16_t x615 = INT16_MAX;
int8_t x659 = 2;
uint32_t x665 = 800U;
static volatile int64_t t94 = 127569915651LL;
volatile int64_t x682 = 6131429LL;
int16_t x683 = 0;
static int64_t x684 = -1LL;
uint8_t x686 = 10U;
int32_t x688 = 685246;
volatile int64_t x692 = 16457715LL;


void f0(void) {
	uint8_t x9 = 15U;
	int16_t x10 = INT16_MIN;
	volatile uint64_t x11 = 335103485LLU;
	uint8_t x12 = UINT8_MAX;
	uint64_t t0 = 15745916LLU;

	t0 = (x9+((x10*x11)*x12));

	if (t0 != 18443944002605449231LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = -1LL;
	uint64_t x18 = 1101LLU;
	static int8_t x19 = 1;
	int16_t x20 = INT16_MIN;

	t1 = (x17+((x18*x19)*x20));

	if (t1 != 18446744073673474047LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 3361U;
	volatile int64_t t2 = -89540018LL;

	t2 = (x21+((x22*x23)*x24));

	if (t2 != 8246460751049LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x26 = 13923124996871LLU;
	int32_t x27 = INT32_MIN;
	uint64_t t3 = 1LLU;

	t3 = (x25+((x26*x27)*x28));

	if (t3 != 4294967295LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = -1;
	volatile uint32_t x30 = 69U;
	volatile int8_t x31 = 0;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x29+((x30*x31)*x32));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -1;
	int16_t x35 = INT16_MAX;
	volatile int64_t x36 = -150840720135051LL;
	int64_t t5 = 27258083747319LL;

	t5 = (x33+((x34*x35)*x36));

	if (t5 != 4942597876665216116LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x37 = 4038U;
	int16_t x39 = INT16_MAX;
	int64_t x40 = -215LL;
	volatile int64_t t6 = 47508LL;

	t6 = (x37+((x38*x39)*x40));

	if (t6 != 230847451078LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	uint8_t x44 = 10U;
	static volatile int32_t t7 = 532566798;

	t7 = (x41+((x42*x43)*x44));

	if (t7 != -83852033) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -1;
	int8_t x48 = INT8_MIN;
	static int64_t t8 = -1741943345343LL;

	t8 = (x45+((x46*x47)*x48));

	if (t8 != 4093967569528370687LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x61 = 2U;
	static int64_t x62 = 53807698LL;
	int16_t x63 = -1;
	static uint16_t x64 = UINT16_MAX;
	int64_t t9 = -39306973321222441LL;

	t9 = (x61+((x62*x63)*x64));

	if (t9 != -3526287488428LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x69 = -2973;
	int16_t x71 = -1;
	volatile int32_t x72 = -1;
	volatile uint64_t t10 = 6684212764127745LLU;

	t10 = (x69+((x70*x71)*x72));

	if (t10 != 18446744073709548642LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x81 = 3997U;
	int8_t x82 = -6;
	int16_t x84 = INT16_MIN;
	volatile uint32_t t11 = 446796526U;

	t11 = (x81+((x82*x83)*x84));

	if (t11 != 50139037U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x85 = -1;
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = 295608835913412LL;
	static int8_t x88 = INT8_MIN;
	static uint64_t t12 = 225315736904LLU;

	t12 = (x85+((x86*x87)*x88));

	if (t12 != 37837930996916735LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x93 = -1;
	int8_t x94 = -3;
	int8_t x95 = -1;
	volatile uint8_t x96 = 0U;
	int32_t t13 = -21489;

	t13 = (x93+((x94*x95)*x96));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x125 = -1;
	static uint16_t x126 = UINT16_MAX;
	static volatile uint8_t x127 = UINT8_MAX;
	static volatile uint16_t x128 = 0U;
	volatile int32_t t14 = -241947244;

	t14 = (x125+((x126*x127)*x128));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x135 = 4339797LLU;
	static int8_t x136 = -1;
	uint64_t t15 = 156779LLU;

	t15 = (x133+((x134*x135)*x136));

	if (t15 != 11351600451126935LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x138 = 1U;
	int8_t x139 = INT8_MIN;
	int8_t x140 = -1;
	int32_t t16 = 29035;

	t16 = (x137+((x138*x139)*x140));

	if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x141 = -1;
	volatile int16_t x142 = 864;
	int32_t x143 = -144321;
	int16_t x144 = -1;
	int32_t t17 = -9357483;

	t17 = (x141+((x142*x143)*x144));

	if (t17 != 124693343) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = INT8_MIN;
	int64_t x148 = -69534175077LL;
	static volatile int64_t t18 = 3021613713278LL;

	t18 = (x145+((x146*x147)*x148));

	if (t18 != 9223363136480365951LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = -1;
	uint64_t x152 = 277117709LLU;
	volatile uint64_t t19 = 7082503807LLU;

	t19 = (x149+((x150*x151)*x152));

	if (t19 != 18446744067890079599LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x153 = UINT8_MAX;
	int16_t x154 = 14088;
	static int32_t x155 = -1;
	static uint8_t x156 = 2U;
	static volatile int32_t t20 = 2;

	t20 = (x153+((x154*x155)*x156));

	if (t20 != -27921) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x166 = 102193540U;
	uint16_t x167 = 6U;
	int64_t x168 = -1LL;
	static volatile uint64_t t21 = 5609535412LLU;

	t21 = (x165+((x166*x167)*x168));

	if (t21 != 18446744073415177003LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x169 = INT64_MIN;
	static uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MAX;
	static int64_t x172 = -1LL;
	uint64_t t22 = 116283067427085LLU;

	t22 = (x169+((x170*x171)*x172));

	if (t22 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x173 = INT32_MIN;
	static uint32_t x175 = 4168U;
	uint16_t x176 = UINT16_MAX;

	t23 = (x173+((x174*x175)*x176));

	if (t23 != 1694898944U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x177 = INT8_MIN;
	uint16_t x179 = 0U;
	int64_t x180 = 3492600LL;
	volatile int64_t t24 = 33322112LL;

	t24 = (x177+((x178*x179)*x180));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x181 = -1;
	volatile uint32_t x182 = 5U;
	int8_t x184 = -1;
	volatile uint64_t t25 = 1LLU;

	t25 = (x181+((x182*x183)*x184));

	if (t25 != 18446744073709528905LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x224 = INT8_MIN;

	t26 = (x221+((x222*x223)*x224));

	if (t26 != -97921LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x225 = INT32_MAX;
	int32_t x226 = -1;
	int32_t x227 = -1;
	int64_t x228 = -1LL;
	static volatile int64_t t27 = 696354971022536925LL;

	t27 = (x225+((x226*x227)*x228));

	if (t27 != 2147483646LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MIN;

	t28 = (x229+((x230*x231)*x232));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x237 = 2584U;
	static uint64_t x239 = 709060338LLU;

	t29 = (x237+((x238*x239)*x240));

	if (t29 != 13862210028642249074LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x241 = -1LL;
	volatile int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	static int64_t t30 = 7670178003825435LL;

	t30 = (x241+((x242*x243)*x244));

	if (t30 != -4194305LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x253 = UINT32_MAX;
	static volatile int32_t x254 = -1;
	static volatile uint64_t x255 = 83655424990LLU;
	int8_t x256 = -1;
	volatile uint64_t t31 = 16754018651927LLU;

	t31 = (x253+((x254*x255)*x256));

	if (t31 != 87950392285LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x261 = -1;
	uint32_t x262 = 4633807U;
	volatile int16_t x263 = INT16_MIN;
	int8_t x264 = -11;
	uint32_t t32 = 19897574U;

	t32 = (x261+((x262*x263)*x264));

	if (t32 != 3799154687U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	int32_t x268 = INT32_MIN;
	volatile uint32_t t33 = 2739713U;

	t33 = (x265+((x266*x267)*x268));

	if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x274 = INT8_MIN;
	int32_t x275 = -1;
	static uint32_t x276 = 612213828U;

	t34 = (x273+((x274*x275)*x276));

	if (t34 != 1053978658U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x277 = 17092U;
	volatile int16_t x278 = -15259;
	int16_t x279 = -1690;
	static int64_t x280 = -15476146LL;
	int64_t t35 = 3365877542112135LL;

	t35 = (x277+((x278*x279)*x280));

	if (t35 != -399094364948568LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x281 = -1;
	volatile uint8_t x282 = 1U;
	static uint64_t x283 = 2LLU;
	int64_t x284 = INT64_MIN;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x281+((x282*x283)*x284));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x285 = 49U;
	volatile int32_t x287 = -1;
	uint32_t x288 = 29555529U;
	volatile uint32_t t37 = 321465203U;

	t37 = (x285+((x286*x287)*x288));

	if (t37 != 1995590215U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x289 = -1LL;
	uint64_t x290 = 1097630683LLU;
	uint16_t x291 = 50U;
	uint64_t t38 = 67466LLU;

	t38 = (x289+((x290*x291)*x292));

	if (t38 != 1909685374235285949LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x293 = INT32_MAX;
	static volatile int32_t x294 = 974;
	int64_t x296 = INT64_MIN;

	t39 = (x293+((x294*x295)*x296));

	if (t39 != 2147483647LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x298 = 23U;
	int8_t x299 = INT8_MAX;
	static int64_t t40 = -289925187210007LL;

	t40 = (x297+((x298*x299)*x300));

	if (t40 != -8843735649869520LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x309 = INT16_MIN;
	volatile int8_t x310 = INT8_MIN;
	int8_t x311 = -1;
	volatile int32_t t41 = 1933587;

	t41 = (x309+((x310*x311)*x312));

	if (t41 != -32896) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x317 = -1;
	uint32_t x319 = 73410U;
	int8_t x320 = -1;
	volatile uint64_t t42 = 780LLU;

	t42 = (x317+((x318*x319)*x320));

	if (t42 != 18446744073709478205LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x329 = INT16_MAX;
	uint8_t x330 = 1U;
	int16_t x331 = 1;
	int32_t t43 = -4045602;

	t43 = (x329+((x330*x331)*x332));

	if (t43 != 32754) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x333 = 41U;
	uint8_t x335 = UINT8_MAX;
	uint8_t x336 = 75U;
	volatile int32_t t44 = -21443710;

	t44 = (x333+((x334*x335)*x336));

	if (t44 != 95666) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x337 = 2;
	int32_t x339 = -1;
	volatile int32_t t45 = -1;

	t45 = (x337+((x338*x339)*x340));

	if (t45 != 130) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x345 = 34770383793452803LLU;
	int64_t x347 = -1LL;
	volatile int32_t x348 = INT32_MIN;
	uint64_t t46 = 2409767LLU;

	t46 = (x345+((x346*x347)*x348));

	if (t46 != 34774506962056963LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x349 = -1;
	uint8_t x350 = 2U;
	volatile uint8_t x351 = 0U;
	volatile int64_t x352 = INT64_MIN;
	volatile int64_t t47 = -7679377277LL;

	t47 = (x349+((x350*x351)*x352));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x353 = INT64_MAX;
	int32_t x355 = 15881;
	int8_t x356 = -1;
	int64_t t48 = 88044LL;

	t48 = (x353+((x354*x355)*x356));

	if (t48 != 9223372036854712283LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x357 = INT16_MAX;
	volatile uint16_t x358 = 1U;
	int32_t x359 = INT32_MAX;
	uint32_t x360 = UINT32_MAX;
	uint32_t t49 = 3U;

	t49 = (x357+((x358*x359)*x360));

	if (t49 != 2147516416U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x361 = -1;
	int16_t x362 = -93;
	static int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	int32_t t50 = 492694850;

	t50 = (x361+((x362*x363)*x364));

	if (t50 != -390070273) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x365 = 684200033958481761LL;
	uint64_t x367 = 1619222LLU;
	int32_t x368 = -3421626;

	t51 = (x365+((x366*x367)*x368));

	if (t51 != 865746946766524257LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = 0;
	uint8_t x371 = 15U;
	static int8_t x372 = -51;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x369+((x370*x371)*x372));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x373 = -1LL;
	uint8_t x374 = 37U;
	int32_t x375 = -7995;
	volatile int64_t t53 = 15674430704675890LL;

	t53 = (x373+((x374*x375)*x376));

	if (t53 != 283094954LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x377 = 1335649;
	int64_t x378 = -192573LL;
	static uint32_t x379 = 49U;
	uint64_t x380 = 489624812359508LLU;
	uint64_t t54 = 1167818870LLU;

	t54 = (x377+((x378*x379)*x380));

	if (t54 != 9995331966229621149LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x389 = 220715U;
	static uint8_t x390 = 0U;
	volatile int64_t x391 = 243148871811168LL;

	t55 = (x389+((x390*x391)*x392));

	if (t55 != 220715LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x409 = 22U;
	static int32_t x412 = -1;
	uint64_t t56 = 4018140949039403206LLU;

	t56 = (x409+((x410*x411)*x412));

	if (t56 != 11464023546896304085LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x414 = INT8_MIN;
	static int8_t x415 = -1;
	volatile int8_t x416 = INT8_MIN;
	static volatile int32_t t57 = -2;

	t57 = (x413+((x414*x415)*x416));

	if (t57 != -16385) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x417 = INT32_MAX;
	volatile int8_t x420 = -28;
	volatile uint32_t t58 = 31U;

	t58 = (x417+((x418*x419)*x420));

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x421 = 5199LL;
	volatile int8_t x422 = 0;
	int16_t x423 = INT16_MAX;
	int64_t x424 = INT64_MIN;

	t59 = (x421+((x422*x423)*x424));

	if (t59 != 5199LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x433 = INT8_MIN;
	int64_t x434 = -1LL;
	uint8_t x435 = UINT8_MAX;
	static int8_t x436 = INT8_MIN;
	int64_t t60 = -11LL;

	t60 = (x433+((x434*x435)*x436));

	if (t60 != 32512LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x437 = UINT16_MAX;
	uint64_t x438 = 391251957007389392LLU;
	static uint16_t x439 = UINT16_MAX;
	uint16_t x440 = 1U;
	uint64_t t61 = 1794536975LLU;

	t61 = (x437+((x438*x439)*x440));

	if (t61 != 18169484096696675631LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x449 = INT8_MIN;
	int16_t x450 = -1;
	static uint64_t x451 = UINT64_MAX;
	int32_t x452 = -1;
	uint64_t t62 = 106022227678LLU;

	t62 = (x449+((x450*x451)*x452));

	if (t62 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x457 = INT32_MIN;
	uint8_t x458 = 0U;
	int16_t x459 = 3;
	static volatile int32_t t63 = INT32_MIN;

	t63 = (x457+((x458*x459)*x460));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x469 = INT16_MAX;
	uint64_t t64 = 4LLU;

	t64 = (x469+((x470*x471)*x472));

	if (t64 != 2021369882860490043LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x485 = 0U;
	static int64_t x486 = 2068084583543961LL;
	int16_t x487 = -465;
	int16_t x488 = -1;
	int64_t t65 = -213595957431LL;

	t65 = (x485+((x486*x487)*x488));

	if (t65 != 961659331347941865LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x490 = -1;
	int32_t x491 = -207863;

	t66 = (x489+((x490*x491)*x492));

	if (t66 != 2962387915857LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x497 = INT16_MAX;
	static int8_t x498 = INT8_MIN;
	volatile int8_t x499 = INT8_MIN;
	static uint32_t x500 = UINT32_MAX;
	uint32_t t67 = 243754U;

	t67 = (x497+((x498*x499)*x500));

	if (t67 != 16383U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x501 = UINT64_MAX;
	static uint8_t x502 = UINT8_MAX;
	int8_t x503 = INT8_MIN;
	uint64_t t68 = 461934489834LLU;

	t68 = (x501+((x502*x503)*x504));

	if (t68 != 2650433535LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x505 = 1U;
	int32_t x506 = -418;
	int16_t x507 = INT16_MAX;
	volatile int8_t x508 = 1;
	int32_t t69 = 270;

	t69 = (x505+((x506*x507)*x508));

	if (t69 != -13696605) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x509 = UINT8_MAX;
	volatile int32_t x510 = 0;
	uint8_t x511 = 11U;
	int64_t x512 = INT64_MAX;
	int64_t t70 = -90422730254483LL;

	t70 = (x509+((x510*x511)*x512));

	if (t70 != 255LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x514 = 281U;
	volatile int8_t x515 = -1;

	t71 = (x513+((x514*x515)*x516));

	if (t71 != -561) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x517 = 175109953U;
	uint8_t x518 = 18U;
	uint64_t x519 = 29128238140LLU;
	volatile uint64_t t72 = 76998063129917380LLU;

	t72 = (x517+((x518*x519)*x520));

	if (t72 != 18446743549576375049LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x525 = UINT8_MAX;
	uint8_t x526 = 90U;
	int64_t x527 = 67654LL;
	int8_t x528 = INT8_MAX;

	t73 = (x525+((x526*x527)*x528));

	if (t73 != 773285475LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x529 = INT8_MAX;
	int16_t x531 = INT16_MIN;
	int8_t x532 = -1;
	static volatile int32_t t74 = -11054;

	t74 = (x529+((x530*x531)*x532));

	if (t74 != -4194177) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x533 = INT32_MIN;
	uint64_t x534 = 45LLU;
	int16_t x536 = -1;
	uint64_t t75 = 125089LLU;

	t75 = (x533+((x534*x535)*x536));

	if (t75 != 18446744071563542528LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x541 = 625U;
	uint8_t x542 = 1U;
	int16_t x543 = INT16_MAX;
	uint32_t t76 = 1U;

	t76 = (x541+((x542*x543)*x544));

	if (t76 != 4294935154U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x557 = 2861;
	int8_t x558 = INT8_MAX;
	volatile uint32_t t77 = 8933851U;

	t77 = (x557+((x558*x559)*x560));

	if (t77 != 1337U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x561 = INT32_MAX;
	static uint32_t x563 = UINT32_MAX;
	uint32_t x564 = 27905514U;
	static uint32_t t78 = 8U;

	t78 = (x561+((x562*x563)*x564));

	if (t78 != 2175389161U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x565 = INT32_MIN;
	static uint32_t x567 = 88470012U;
	uint64_t x568 = UINT64_MAX;
	uint64_t t79 = 451856122646LLU;

	t79 = (x565+((x566*x567)*x568));

	if (t79 != 18446744070001327616LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x570 = 1894;
	static uint16_t x571 = 0U;
	static uint64_t x572 = UINT64_MAX;
	static uint64_t t80 = 113456535776248LLU;

	t80 = (x569+((x570*x571)*x572));

	if (t80 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x573 = 26;
	volatile int64_t x574 = 201268189LL;
	volatile int64_t x576 = INT64_MIN;

	t81 = (x573+((x574*x575)*x576));

	if (t81 != 9223372036854775834LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x578 = -6;
	int64_t x579 = -1LL;
	int64_t x580 = -1LL;
	volatile int64_t t82 = -33LL;

	t82 = (x577+((x578*x579)*x580));

	if (t82 != 30LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x589 = 989905713571070LLU;
	uint64_t x590 = 901832834712LLU;
	uint64_t x591 = 67LLU;

	t83 = (x589+((x590*x591)*x592));

	if (t83 != 1050328513496774LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x597 = INT8_MIN;
	uint16_t x598 = 26U;
	int32_t x599 = -44;
	uint16_t x600 = 21981U;
	volatile int32_t t84 = -17429;

	t84 = (x597+((x598*x599)*x600));

	if (t84 != -25146392) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x601 = INT64_MIN;
	int32_t x602 = INT32_MIN;
	volatile uint8_t x603 = 0U;
	volatile int8_t x604 = INT8_MIN;
	int64_t t85 = INT64_MIN;

	t85 = (x601+((x602*x603)*x604));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x605 = -1LL;
	int16_t x606 = 2;
	static int16_t x607 = -191;
	static uint8_t x608 = 34U;
	static int64_t t86 = 8978390423940225LL;

	t86 = (x605+((x606*x607)*x608));

	if (t86 != -12989LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x613 = UINT32_MAX;
	uint64_t x616 = UINT64_MAX;
	static volatile uint64_t t87 = 69809LLU;

	t87 = (x613+((x614*x615)*x616));

	if (t87 != 4174810706LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x621 = 663U;
	uint16_t x622 = 3U;
	int8_t x623 = -1;
	static int64_t x624 = -1355721127347652841LL;
	volatile int64_t t88 = 1LL;

	t88 = (x621+((x622*x623)*x624));

	if (t88 != 4067163382042959186LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x625 = UINT64_MAX;
	int8_t x626 = -39;
	int16_t x627 = -102;
	int16_t x628 = 1;
	uint64_t t89 = 1LLU;

	t89 = (x625+((x626*x627)*x628));

	if (t89 != 3977LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x633 = -14263;
	static volatile uint32_t x634 = 505715U;
	uint16_t x635 = UINT16_MAX;
	static int32_t x636 = INT32_MAX;
	uint32_t t90 = 23870U;

	t90 = (x633+((x634*x635)*x636));

	if (t90 != 3365175228U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x641 = -1;
	uint64_t x642 = UINT64_MAX;
	int32_t x643 = INT32_MIN;
	static int8_t x644 = 11;
	volatile uint64_t t91 = 4723043LLU;

	t91 = (x641+((x642*x643)*x644));

	if (t91 != 23622320127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x657 = 1029197181860835LLU;
	int16_t x658 = -1;
	int8_t x660 = -1;
	uint64_t t92 = 400LLU;

	t92 = (x657+((x658*x659)*x660));

	if (t92 != 1029197181860837LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x666 = 7192;
	static int16_t x667 = INT16_MIN;
	static uint64_t x668 = UINT64_MAX;
	static uint64_t t93 = 218926LLU;

	t93 = (x665+((x666*x667)*x668));

	if (t93 != 235668256LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x669 = UINT16_MAX;
	static int64_t x670 = -638LL;
	volatile int64_t x671 = 3534708LL;
	int16_t x672 = INT16_MIN;

	t94 = (x669+((x670*x671)*x672));

	if (t94 != 73896548958207LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x681 = INT16_MIN;
	volatile int64_t t95 = -928839348468LL;

	t95 = (x681+((x682*x683)*x684));

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x685 = UINT64_MAX;
	static int16_t x687 = -237;
	uint64_t t96 = 1680LLU;

	t96 = (x685+((x686*x687)*x688));

	if (t96 != 18446744072085518595LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x689 = INT8_MIN;
	int32_t x690 = -1;
	int16_t x691 = 49;
	volatile int64_t t97 = 30LL;

	t97 = (x689+((x690*x691)*x692));

	if (t97 != -806428163LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x693 = INT16_MIN;
	int16_t x694 = -1;
	uint8_t x695 = 0U;
	int8_t x696 = -1;
	static volatile int32_t t98 = -315719847;

	t98 = (x693+((x694*x695)*x696));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x697 = -262040438;
	uint8_t x698 = 13U;
	volatile int16_t x699 = INT16_MIN;
	static uint16_t x700 = 3U;
	static volatile int32_t t99 = 19575025;

	t99 = (x697+((x698*x699)*x700));

	if (t99 != -263318390) { NG(); } else { ; }
	
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

