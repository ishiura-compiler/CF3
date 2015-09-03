#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x17 = INT16_MIN;
int64_t x21 = 2298061891LL;
int64_t x40 = INT64_MAX;
int8_t x50 = INT8_MAX;
static int8_t x51 = INT8_MAX;
volatile int32_t t7 = -17047184;
volatile int16_t x70 = INT16_MIN;
uint8_t x72 = UINT8_MAX;
uint16_t x79 = 3U;
static uint64_t t13 = 153145331211941964LLU;
int16_t x93 = INT16_MIN;
int64_t x122 = -26541379243186780LL;
int32_t t16 = 635153;
uint16_t x150 = UINT16_MAX;
int16_t x151 = -1;
int64_t x159 = -1021LL;
static int16_t x160 = -1;
uint64_t t18 = 105LLU;
int8_t x197 = -1;
int8_t x198 = INT8_MIN;
uint32_t x247 = 0U;
volatile uint32_t t27 = 29U;
int64_t x297 = -1LL;
int16_t x316 = INT16_MAX;
uint32_t x321 = UINT32_MAX;
volatile int8_t x326 = INT8_MAX;
int64_t x329 = INT64_MIN;
static int16_t x333 = INT16_MIN;
uint32_t x336 = 436939U;
volatile int64_t t36 = 724884822474761023LL;
int8_t x350 = INT8_MAX;
int64_t x352 = 218432050265813796LL;
uint8_t x369 = 2U;
static int64_t x381 = -1LL;
static volatile int8_t x384 = -1;
uint16_t x393 = UINT16_MAX;
uint16_t x396 = 490U;
volatile uint64_t x400 = UINT64_MAX;
static volatile int32_t x408 = INT32_MAX;
int16_t x412 = 126;
uint8_t x434 = UINT8_MAX;
int64_t x450 = INT64_MIN;
volatile int8_t x454 = INT8_MAX;
int8_t x455 = -15;
uint16_t x477 = UINT16_MAX;
int64_t x478 = -1LL;
volatile int64_t t51 = 0LL;
volatile uint64_t x493 = UINT64_MAX;
int16_t x498 = -1;
static int32_t t53 = 0;
static volatile int64_t x501 = 3486973364720LL;
int8_t x503 = INT8_MIN;
static uint16_t x532 = UINT16_MAX;
int32_t t56 = 57;
static int8_t x538 = -1;
static int16_t x544 = -1;
static volatile int32_t t58 = 1;
static uint8_t x567 = UINT8_MAX;
int32_t x568 = INT32_MAX;
uint8_t x570 = 35U;
int32_t x571 = INT32_MIN;
int8_t x576 = INT8_MAX;
volatile uint8_t x585 = 1U;
volatile uint64_t x608 = 5533459525LLU;
uint8_t x662 = 26U;
int64_t x664 = INT64_MAX;
static int64_t t68 = 0LL;
volatile uint64_t t69 = 50LLU;
int8_t x674 = INT8_MIN;
uint8_t x688 = UINT8_MAX;
volatile int64_t x690 = INT64_MIN;
uint16_t x692 = 1727U;
int64_t t72 = 85235682352476914LL;
uint32_t x696 = 7430863U;
int64_t x704 = 1903147618311802684LL;
volatile int32_t t76 = 954820;
int64_t x746 = INT64_MIN;
static int64_t t79 = 366422329LL;
static int8_t x751 = INT8_MIN;
int32_t x758 = 1653;
int64_t x768 = 1200390695808255741LL;
int64_t x773 = INT64_MIN;
volatile uint8_t x778 = 1U;
static int16_t x785 = INT16_MIN;
uint32_t x806 = 409581646U;
static volatile int32_t t91 = 6120345;
uint16_t x832 = 2055U;
int64_t x849 = -1668LL;
static uint16_t x858 = UINT16_MAX;
int32_t x866 = -1;
uint8_t x867 = UINT8_MAX;
volatile int32_t x876 = 450422977;
static volatile int32_t x877 = 111290;
int64_t x880 = INT64_MAX;
volatile int32_t t97 = -118640;
uint16_t x888 = 135U;
uint32_t x890 = 3611U;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	volatile uint8_t x2 = UINT8_MAX;
	int8_t x3 = -1;
	uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 410528687;

	t0 = ((x1+x2)%(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	int64_t x14 = -1LL;
	volatile int8_t x15 = 5;
	uint8_t x16 = UINT8_MAX;
	volatile int64_t t1 = 10479482691073LL;

	t1 = ((x13+x14)%(x15<=x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x18 = INT16_MIN;
	int8_t x19 = -1;
	int8_t x20 = -1;
	volatile int32_t t2 = 616856;

	t2 = ((x17+x18)%(x19<=x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x22 = UINT64_MAX;
	static int64_t x23 = -1LL;
	uint32_t x24 = 3U;
	uint64_t t3 = 25LLU;

	t3 = ((x21+x22)%(x23<=x24));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 254268;
	int8_t x26 = 1;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = -1;
	int32_t t4 = -15365807;

	t4 = ((x25+x26)%(x27<=x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = INT32_MIN;
	static int64_t x30 = INT64_MAX;
	static int64_t x31 = INT64_MIN;
	volatile int8_t x32 = -2;
	int64_t t5 = 126671LL;

	t5 = ((x29+x30)%(x31<=x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = INT16_MAX;
	uint8_t x38 = 52U;
	uint16_t x39 = 93U;
	static int32_t t6 = 1;

	t6 = ((x37+x38)%(x39<=x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = -8459;
	uint64_t x52 = UINT64_MAX;

	t7 = ((x49+x50)%(x51<=x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x57 = UINT16_MAX;
	int64_t x58 = -696001LL;
	static uint64_t x59 = 1LLU;
	volatile uint8_t x60 = 32U;
	volatile int64_t t8 = -26145678978LL;

	t8 = ((x57+x58)%(x59<=x60));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x65 = 34U;
	int8_t x66 = -1;
	int64_t x67 = INT64_MIN;
	int32_t x68 = -20;
	volatile int32_t t9 = -6782853;

	t9 = ((x65+x66)%(x67<=x68));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x69 = -1;
	int32_t x71 = -244;
	int32_t t10 = 1282533;

	t10 = ((x69+x70)%(x71<=x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x73 = INT8_MIN;
	uint16_t x74 = 3U;
	volatile int64_t x75 = -1LL;
	static uint32_t x76 = 48273U;
	volatile int32_t t11 = -586143;

	t11 = ((x73+x74)%(x75<=x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = 0;
	int64_t x78 = INT64_MAX;
	int64_t x80 = INT64_MAX;
	volatile int64_t t12 = -1193935207LL;

	t12 = ((x77+x78)%(x79<=x80));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x81 = 45077LLU;
	int16_t x82 = INT16_MIN;
	static int64_t x83 = -2192078302624201LL;
	uint16_t x84 = 4U;

	t13 = ((x81+x82)%(x83<=x84));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = -53696075LL;
	int16_t x96 = INT16_MAX;
	volatile int32_t t14 = 58;

	t14 = ((x93+x94)%(x95<=x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x121 = INT8_MAX;
	volatile uint8_t x123 = 1U;
	int32_t x124 = INT32_MAX;
	int64_t t15 = 15656051159528LL;

	t15 = ((x121+x122)%(x123<=x124));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x145 = -65;
	volatile uint16_t x146 = 113U;
	uint64_t x147 = 183762258506099LLU;
	static int64_t x148 = INT64_MIN;

	t16 = ((x145+x146)%(x147<=x148));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x149 = INT8_MAX;
	int8_t x152 = 0;
	volatile int32_t t17 = -2821067;

	t17 = ((x149+x150)%(x151<=x152));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x157 = INT8_MIN;
	uint64_t x158 = UINT64_MAX;

	t18 = ((x157+x158)%(x159<=x160));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x181 = UINT16_MAX;
	uint64_t x182 = UINT64_MAX;
	static volatile int32_t x183 = INT32_MIN;
	uint8_t x184 = 62U;
	uint64_t t19 = 137609163030590124LLU;

	t19 = ((x181+x182)%(x183<=x184));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -1;
	static int64_t x195 = -48014959508703515LL;
	uint8_t x196 = 7U;
	int32_t t20 = 77495;

	t20 = ((x193+x194)%(x195<=x196));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x199 = -1;
	static uint8_t x200 = UINT8_MAX;
	volatile int32_t t21 = 0;

	t21 = ((x197+x198)%(x199<=x200));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x213 = INT8_MAX;
	int32_t x214 = INT32_MIN;
	int32_t x215 = -1;
	int64_t x216 = -1LL;
	int32_t t22 = 1;

	t22 = ((x213+x214)%(x215<=x216));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x241 = -1;
	int8_t x242 = INT8_MIN;
	int64_t x243 = -1LL;
	uint16_t x244 = UINT16_MAX;
	int32_t t23 = -452;

	t23 = ((x241+x242)%(x243<=x244));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x245 = -747553237;
	static int64_t x246 = INT64_MAX;
	uint16_t x248 = 10648U;
	volatile int64_t t24 = -75587LL;

	t24 = ((x245+x246)%(x247<=x248));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x249 = UINT16_MAX;
	uint8_t x250 = UINT8_MAX;
	uint64_t x251 = 4889690LLU;
	int8_t x252 = -8;
	int32_t t25 = -249219;

	t25 = ((x249+x250)%(x251<=x252));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x265 = INT16_MAX;
	int64_t x266 = 0LL;
	int16_t x267 = 13;
	volatile int8_t x268 = INT8_MAX;
	volatile int64_t t26 = 0LL;

	t26 = ((x265+x266)%(x267<=x268));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x278 = 1815041U;
	uint64_t x279 = 99LLU;
	int16_t x280 = INT16_MAX;

	t27 = ((x277+x278)%(x279<=x280));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x298 = INT8_MIN;
	volatile int32_t x299 = INT32_MIN;
	volatile int32_t x300 = INT32_MIN;
	volatile int64_t t28 = 84LL;

	t28 = ((x297+x298)%(x299<=x300));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x305 = 82112LL;
	int64_t x306 = 9556LL;
	static int16_t x307 = -1;
	uint16_t x308 = 50U;
	static volatile int64_t t29 = -1120029998706372LL;

	t29 = ((x305+x306)%(x307<=x308));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x309 = UINT16_MAX;
	uint32_t x310 = UINT32_MAX;
	volatile int8_t x311 = INT8_MIN;
	int8_t x312 = -1;
	static uint32_t t30 = 18U;

	t30 = ((x309+x310)%(x311<=x312));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x313 = INT8_MIN;
	uint32_t x314 = 151984U;
	volatile int16_t x315 = INT16_MAX;
	volatile uint32_t t31 = 320703U;

	t31 = ((x313+x314)%(x315<=x316));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x322 = -1;
	static int8_t x323 = INT8_MIN;
	uint8_t x324 = 20U;
	volatile uint32_t t32 = 0U;

	t32 = ((x321+x322)%(x323<=x324));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x325 = 26U;
	int64_t x327 = -23LL;
	uint64_t x328 = UINT64_MAX;
	int32_t t33 = 62;

	t33 = ((x325+x326)%(x327<=x328));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x330 = 0;
	int16_t x331 = 183;
	uint32_t x332 = UINT32_MAX;
	volatile int64_t t34 = -9177396LL;

	t34 = ((x329+x330)%(x331<=x332));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x334 = 4LLU;
	static uint8_t x335 = 12U;
	uint64_t t35 = 88619405030525181LLU;

	t35 = ((x333+x334)%(x335<=x336));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x341 = -1LL;
	volatile int32_t x342 = 20;
	volatile uint16_t x343 = 10U;
	uint16_t x344 = 3111U;

	t36 = ((x341+x342)%(x343<=x344));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x349 = -1;
	static int8_t x351 = INT8_MIN;
	volatile int32_t t37 = -21908879;

	t37 = ((x349+x350)%(x351<=x352));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x353 = -1;
	volatile int16_t x354 = -1;
	volatile int32_t x355 = INT32_MIN;
	int64_t x356 = -1LL;
	volatile int32_t t38 = -1241;

	t38 = ((x353+x354)%(x355<=x356));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x370 = 23U;
	static volatile int16_t x371 = -502;
	static uint32_t x372 = UINT32_MAX;
	int32_t t39 = 7;

	t39 = ((x369+x370)%(x371<=x372));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	volatile int64_t t40 = 1LL;

	t40 = ((x381+x382)%(x383<=x384));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x385 = -53049;
	uint16_t x386 = 23348U;
	int16_t x387 = INT16_MIN;
	static int16_t x388 = 1;
	int32_t t41 = 1604;

	t41 = ((x385+x386)%(x387<=x388));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x389 = INT64_MIN;
	static volatile int16_t x390 = INT16_MAX;
	int32_t x391 = 10;
	volatile int32_t x392 = INT32_MAX;
	volatile int64_t t42 = 241008597296573549LL;

	t42 = ((x389+x390)%(x391<=x392));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x394 = UINT16_MAX;
	uint8_t x395 = 5U;
	volatile int32_t t43 = -690;

	t43 = ((x393+x394)%(x395<=x396));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x397 = -1;
	volatile uint16_t x398 = 240U;
	uint8_t x399 = 120U;
	int32_t t44 = -421;

	t44 = ((x397+x398)%(x399<=x400));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x405 = INT16_MIN;
	static uint8_t x406 = UINT8_MAX;
	int32_t x407 = -693619257;
	volatile int32_t t45 = 0;

	t45 = ((x405+x406)%(x407<=x408));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x409 = -3;
	uint16_t x410 = 14576U;
	static int16_t x411 = -1;
	volatile int32_t t46 = 5;

	t46 = ((x409+x410)%(x411<=x412));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x433 = -1;
	volatile int64_t x435 = INT64_MIN;
	static int16_t x436 = 8;
	volatile int32_t t47 = -25;

	t47 = ((x433+x434)%(x435<=x436));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x437 = INT64_MIN;
	uint16_t x438 = 13U;
	static volatile uint8_t x439 = UINT8_MAX;
	volatile int64_t x440 = 1803312943984655993LL;
	volatile int64_t t48 = -3701199221600237747LL;

	t48 = ((x437+x438)%(x439<=x440));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x449 = 217137U;
	int16_t x451 = INT16_MIN;
	int16_t x452 = INT16_MAX;
	int64_t t49 = 7494LL;

	t49 = ((x449+x450)%(x451<=x452));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x453 = 132649379U;
	int16_t x456 = 1;
	volatile uint32_t t50 = 84U;

	t50 = ((x453+x454)%(x455<=x456));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x479 = 1U;
	uint8_t x480 = 9U;

	t51 = ((x477+x478)%(x479<=x480));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x494 = 30;
	static int8_t x495 = 0;
	static uint8_t x496 = 9U;
	volatile uint64_t t52 = 2041LLU;

	t52 = ((x493+x494)%(x495<=x496));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x497 = INT8_MIN;
	volatile int8_t x499 = -1;
	static int16_t x500 = INT16_MAX;

	t53 = ((x497+x498)%(x499<=x500));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x502 = -1;
	int8_t x504 = -1;
	volatile int64_t t54 = -2LL;

	t54 = ((x501+x502)%(x503<=x504));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x505 = 29864;
	int32_t x506 = 396222;
	uint16_t x507 = 1856U;
	static int16_t x508 = INT16_MAX;
	int32_t t55 = 141;

	t55 = ((x505+x506)%(x507<=x508));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x529 = INT32_MIN;
	static volatile uint8_t x530 = 124U;
	volatile uint16_t x531 = UINT16_MAX;

	t56 = ((x529+x530)%(x531<=x532));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x537 = 267U;
	int16_t x539 = -1;
	int16_t x540 = 1;
	volatile int32_t t57 = 25702;

	t57 = ((x537+x538)%(x539<=x540));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x541 = -54;
	static int8_t x542 = 1;
	uint32_t x543 = 3U;

	t58 = ((x541+x542)%(x543<=x544));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x553 = 4U;
	static volatile uint16_t x554 = 3U;
	int16_t x555 = INT16_MIN;
	volatile int64_t x556 = INT64_MAX;
	volatile int32_t t59 = 6399;

	t59 = ((x553+x554)%(x555<=x556));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x565 = 921008703959751LLU;
	static uint32_t x566 = 1258314U;
	uint64_t t60 = 4LLU;

	t60 = ((x565+x566)%(x567<=x568));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x569 = -1;
	volatile int16_t x572 = -256;
	volatile int32_t t61 = -391608739;

	t61 = ((x569+x570)%(x571<=x572));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x573 = 186191LLU;
	volatile int8_t x574 = INT8_MAX;
	static int64_t x575 = INT64_MIN;
	volatile uint64_t t62 = 830023081149LLU;

	t62 = ((x573+x574)%(x575<=x576));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x586 = -1;
	int16_t x587 = INT16_MIN;
	static int16_t x588 = 6812;
	volatile int32_t t63 = 0;

	t63 = ((x585+x586)%(x587<=x588));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x605 = INT8_MAX;
	volatile int8_t x606 = INT8_MIN;
	uint32_t x607 = UINT32_MAX;
	volatile int32_t t64 = -177473;

	t64 = ((x605+x606)%(x607<=x608));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x609 = -1;
	uint16_t x610 = UINT16_MAX;
	int32_t x611 = INT32_MIN;
	int8_t x612 = INT8_MIN;
	int32_t t65 = -8014052;

	t65 = ((x609+x610)%(x611<=x612));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x617 = UINT8_MAX;
	int8_t x618 = -1;
	int64_t x619 = -1LL;
	int32_t x620 = -1;
	volatile int32_t t66 = 113816198;

	t66 = ((x617+x618)%(x619<=x620));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x629 = INT64_MIN;
	int64_t x630 = 89620124672LL;
	int16_t x631 = INT16_MIN;
	int16_t x632 = 1;
	int64_t t67 = 92167LL;

	t67 = ((x629+x630)%(x631<=x632));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x661 = 41018LL;
	uint8_t x663 = UINT8_MAX;

	t68 = ((x661+x662)%(x663<=x664));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x665 = INT16_MIN;
	uint64_t x666 = 116LLU;
	uint16_t x667 = 16U;
	volatile uint16_t x668 = 926U;

	t69 = ((x665+x666)%(x667<=x668));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x673 = INT16_MIN;
	static uint8_t x675 = UINT8_MAX;
	static uint32_t x676 = UINT32_MAX;
	static int32_t t70 = -1348570;

	t70 = ((x673+x674)%(x675<=x676));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x685 = 25U;
	static volatile int32_t x686 = INT32_MIN;
	uint8_t x687 = 23U;
	int32_t t71 = 0;

	t71 = ((x685+x686)%(x687<=x688));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x689 = 525U;
	int16_t x691 = -1;

	t72 = ((x689+x690)%(x691<=x692));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x693 = 33;
	int32_t x694 = INT32_MIN;
	int8_t x695 = 10;
	int32_t t73 = -1069172365;

	t73 = ((x693+x694)%(x695<=x696));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x697 = 1361U;
	int8_t x698 = INT8_MIN;
	static int8_t x699 = INT8_MAX;
	volatile uint16_t x700 = UINT16_MAX;
	int32_t t74 = -1086166;

	t74 = ((x697+x698)%(x699<=x700));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x701 = -373;
	uint32_t x702 = 0U;
	int8_t x703 = INT8_MIN;
	uint32_t t75 = 80224966U;

	t75 = ((x701+x702)%(x703<=x704));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x717 = 18;
	volatile uint8_t x718 = 17U;
	int64_t x719 = INT64_MIN;
	int32_t x720 = -2243509;

	t76 = ((x717+x718)%(x719<=x720));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x729 = INT32_MAX;
	int8_t x730 = -1;
	int32_t x731 = -1;
	uint16_t x732 = 23014U;
	int32_t t77 = 3698;

	t77 = ((x729+x730)%(x731<=x732));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x733 = -2;
	int16_t x734 = INT16_MIN;
	int16_t x735 = -1;
	int8_t x736 = -1;
	static volatile int32_t t78 = -7428;

	t78 = ((x733+x734)%(x735<=x736));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x745 = 1287U;
	int64_t x747 = -1LL;
	static int64_t x748 = -1LL;

	t79 = ((x745+x746)%(x747<=x748));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x749 = 1U;
	uint8_t x750 = 22U;
	uint8_t x752 = 11U;
	uint32_t t80 = 42U;

	t80 = ((x749+x750)%(x751<=x752));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x757 = 87545437U;
	volatile int16_t x759 = INT16_MIN;
	int64_t x760 = INT64_MAX;
	static uint32_t t81 = 1615158332U;

	t81 = ((x757+x758)%(x759<=x760));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x761 = 0U;
	volatile int16_t x762 = INT16_MAX;
	int8_t x763 = -1;
	int32_t x764 = -1;
	volatile int32_t t82 = -328;

	t82 = ((x761+x762)%(x763<=x764));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x765 = -1;
	int64_t x766 = INT64_MAX;
	uint64_t x767 = 2009061704165LLU;
	static int64_t t83 = -1030534801LL;

	t83 = ((x765+x766)%(x767<=x768));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x769 = UINT32_MAX;
	int16_t x770 = INT16_MIN;
	uint16_t x771 = 173U;
	uint64_t x772 = 26380180127740984LLU;
	static volatile uint32_t t84 = 1U;

	t84 = ((x769+x770)%(x771<=x772));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x774 = 3;
	uint64_t x775 = 41LLU;
	uint32_t x776 = UINT32_MAX;
	int64_t t85 = -105726451LL;

	t85 = ((x773+x774)%(x775<=x776));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x777 = 1U;
	int16_t x779 = INT16_MIN;
	int8_t x780 = INT8_MAX;
	int32_t t86 = -5;

	t86 = ((x777+x778)%(x779<=x780));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x786 = 0U;
	int64_t x787 = -79115253LL;
	uint32_t x788 = 102656U;
	volatile int32_t t87 = 3778;

	t87 = ((x785+x786)%(x787<=x788));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x793 = UINT8_MAX;
	volatile uint32_t x794 = 7792667U;
	int8_t x795 = INT8_MIN;
	volatile int16_t x796 = -1;
	volatile uint32_t t88 = 2U;

	t88 = ((x793+x794)%(x795<=x796));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x805 = 2U;
	int8_t x807 = INT8_MIN;
	int16_t x808 = -21;
	volatile uint32_t t89 = 32433175U;

	t89 = ((x805+x806)%(x807<=x808));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x809 = -13676009;
	uint32_t x810 = UINT32_MAX;
	static uint16_t x811 = UINT16_MAX;
	static volatile uint64_t x812 = 786190LLU;
	volatile uint32_t t90 = 3190212U;

	t90 = ((x809+x810)%(x811<=x812));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x825 = INT16_MAX;
	volatile uint8_t x826 = UINT8_MAX;
	volatile int8_t x827 = 1;
	int32_t x828 = 10;

	t91 = ((x825+x826)%(x827<=x828));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x829 = 11LL;
	int16_t x830 = INT16_MAX;
	int8_t x831 = INT8_MIN;
	int64_t t92 = -32198540391LL;

	t92 = ((x829+x830)%(x831<=x832));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x850 = INT16_MIN;
	int8_t x851 = INT8_MAX;
	uint64_t x852 = 2086LLU;
	static int64_t t93 = 24LL;

	t93 = ((x849+x850)%(x851<=x852));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x857 = INT32_MIN;
	volatile int16_t x859 = INT16_MIN;
	int8_t x860 = -1;
	int32_t t94 = -261306;

	t94 = ((x857+x858)%(x859<=x860));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x865 = -1LL;
	uint8_t x868 = UINT8_MAX;
	int64_t t95 = -8377318LL;

	t95 = ((x865+x866)%(x867<=x868));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x873 = -619998030771839LL;
	static int8_t x874 = INT8_MAX;
	int64_t x875 = -149269753217LL;
	int64_t t96 = -1897317763501919LL;

	t96 = ((x873+x874)%(x875<=x876));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x878 = INT16_MAX;
	volatile uint32_t x879 = 487730910U;

	t97 = ((x877+x878)%(x879<=x880));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x885 = 2U;
	uint8_t x886 = UINT8_MAX;
	int8_t x887 = 2;
	volatile int32_t t98 = -385;

	t98 = ((x885+x886)%(x887<=x888));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x889 = INT8_MAX;
	static uint32_t x891 = 3U;
	uint32_t x892 = 75146327U;
	static uint32_t t99 = 8286868U;

	t99 = ((x889+x890)%(x891<=x892));

	if (t99 != 0U) { NG(); } else { ; }
	
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

