#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x11 = -15236LL;
int64_t x19 = -1LL;
int64_t x21 = INT64_MIN;
int64_t x24 = -2LL;
static uint32_t x28 = 57639U;
static volatile int16_t x46 = INT16_MIN;
static volatile int32_t x47 = -1;
uint64_t x60 = 1LLU;
uint64_t x76 = 538617LLU;
static int64_t x112 = 15964284625080754LL;
volatile uint8_t x117 = UINT8_MAX;
int16_t x145 = -1;
static uint32_t x147 = UINT32_MAX;
volatile int64_t t13 = 5LL;
static int64_t t14 = INT64_MIN;
int64_t x167 = INT64_MIN;
static volatile uint64_t t15 = 816646777907496LLU;
volatile uint16_t x170 = UINT16_MAX;
static volatile int64_t x174 = -1LL;
uint8_t x175 = UINT8_MAX;
volatile int32_t t18 = 346396466;
volatile int32_t t24 = -3641337;
uint64_t x248 = UINT64_MAX;
int16_t x269 = INT16_MAX;
volatile int64_t x284 = 51437LL;
int8_t x304 = -1;
volatile int32_t x320 = INT32_MAX;
uint64_t t35 = 243353643012LLU;
int8_t x348 = INT8_MIN;
int32_t x350 = INT32_MIN;
volatile int64_t x377 = INT64_MAX;
uint32_t x386 = 2U;
static int16_t x407 = -1;
int16_t x412 = -3224;
volatile int64_t t45 = 5397589967LL;
static int8_t x435 = INT8_MIN;
int32_t x441 = INT32_MAX;
int64_t t48 = -313LL;
int64_t x457 = INT64_MAX;
int8_t x459 = 1;
int8_t x486 = INT8_MIN;
volatile int64_t t51 = 1412511915LL;
static volatile int16_t x489 = 4;
int16_t x512 = INT16_MIN;
int64_t x530 = -74LL;
static volatile int64_t t55 = 282000063LL;
volatile int8_t x544 = 2;
volatile int16_t x554 = -1;
volatile int64_t t58 = -4637671617696438LL;
volatile uint32_t x575 = UINT32_MAX;
uint8_t x592 = 4U;
static uint64_t x630 = 103LLU;
uint64_t t66 = 190209999185059707LLU;
static int16_t x635 = -1;
uint32_t x636 = 2U;
static volatile int64_t t67 = -198654585752LL;
volatile uint8_t x661 = UINT8_MAX;
int8_t x667 = -1;
int8_t x673 = -2;
int32_t x674 = INT32_MIN;
int64_t x682 = 233408849LL;
uint32_t x695 = 1500349772U;
volatile int8_t x697 = INT8_MIN;
int64_t x705 = INT64_MIN;
volatile uint16_t x714 = 1U;
int64_t x715 = INT64_MIN;
static uint32_t x717 = UINT32_MAX;
uint64_t t81 = 72305LLU;
static int32_t x754 = INT32_MAX;
uint32_t x760 = 12U;
int64_t t86 = 199061453850682LL;
volatile int16_t x818 = INT16_MIN;
volatile uint16_t x824 = 629U;
int64_t t92 = -14074821162698363LL;
static int32_t x845 = 78285092;
volatile int16_t x846 = INT16_MAX;
uint8_t x847 = 9U;
int16_t x848 = -2;
volatile int32_t t93 = -16823183;
int16_t x859 = INT16_MIN;
volatile uint64_t x869 = 7322808587000165LLU;
int8_t x870 = -1;
static uint64_t x872 = 24442LLU;
uint64_t t96 = 4562725791579LLU;
uint32_t x878 = 198188917U;
int8_t x885 = 28;
static volatile int64_t x890 = INT64_MIN;
static int16_t x892 = INT16_MIN;


void f0(void) {
	static uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 9U;
	volatile int8_t x12 = 55;
	static int64_t t0 = -6574028776LL;

	t0 = ((x9&x10)/(x11/x12));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 26648510LL;
	int64_t x14 = 50629LL;
	static int64_t x15 = INT64_MAX;
	int16_t x16 = INT16_MIN;
	volatile int64_t t1 = 30599474243LL;

	t1 = ((x13&x14)/(x15/x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -3;
	uint8_t x18 = 2U;
	int64_t x20 = 1LL;
	volatile int64_t t2 = -62961484579680170LL;

	t2 = ((x17&x18)/(x19/x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x22 = 22;
	uint8_t x23 = 25U;
	int64_t t3 = -5206456LL;

	t3 = ((x21&x22)/(x23/x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1404;
	uint32_t x26 = 5021474U;
	uint16_t x27 = UINT16_MAX;
	volatile uint32_t t4 = 1U;

	t4 = ((x25&x26)/(x27/x28));

	if (t4 != 5020160U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x45 = INT64_MAX;
	int32_t x48 = -1;
	int64_t t5 = -38009783874024350LL;

	t5 = ((x45&x46)/(x47/x48));

	if (t5 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x57 = 10368837834547LLU;
	int16_t x58 = INT16_MAX;
	uint16_t x59 = UINT16_MAX;
	volatile uint64_t t6 = 1002304LLU;

	t6 = ((x57&x58)/(x59/x60));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x73 = -21;
	int32_t x74 = -56607;
	int16_t x75 = INT16_MIN;
	volatile uint64_t t7 = 10841502905LLU;

	t7 = ((x73&x74)/(x75/x76));

	if (t7 != 538617LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x81 = INT64_MAX;
	int32_t x82 = INT32_MIN;
	static uint16_t x83 = UINT16_MAX;
	volatile uint32_t x84 = 29970U;
	volatile int64_t t8 = 26614488LL;

	t8 = ((x81&x82)/(x83/x84));

	if (t8 != 4611686017353646080LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x109 = INT32_MIN;
	static uint16_t x110 = UINT16_MAX;
	volatile int64_t x111 = INT64_MAX;
	int64_t t9 = -9705045676942LL;

	t9 = ((x109&x110)/(x111/x112));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MAX;
	volatile int8_t x120 = INT8_MIN;
	volatile int32_t t10 = 20;

	t10 = ((x117&x118)/(x119/x120));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	uint64_t x123 = 90463709404673LLU;
	static uint64_t x124 = 7061LLU;
	uint64_t t11 = 1245LLU;

	t11 = ((x121&x122)/(x123/x124));

	if (t11 != 1439831074LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x133 = INT32_MIN;
	static int8_t x134 = -1;
	volatile uint64_t x135 = UINT64_MAX;
	int64_t x136 = INT64_MIN;
	static volatile uint64_t t12 = 114222890416527LLU;

	t12 = ((x133&x134)/(x135/x136));

	if (t12 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x146 = 9842509294LL;
	uint32_t x148 = 53992504U;

	t13 = ((x145&x146)/(x147/x148));

	if (t13 != 124588725LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x157 = INT64_MIN;
	volatile int8_t x158 = INT8_MIN;
	int64_t x159 = 4490LL;
	int16_t x160 = 3057;

	t14 = ((x157&x158)/(x159/x160));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x165 = 46U;
	volatile int8_t x166 = INT8_MIN;
	static uint64_t x168 = 168527504LLU;

	t15 = ((x165&x166)/(x167/x168));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x169 = -1;
	static volatile int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	volatile int64_t t16 = -91191362254LL;

	t16 = ((x169&x170)/(x171/x172));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x173 = INT64_MIN;
	int64_t x176 = -1LL;
	volatile int64_t t17 = 30788583LL;

	t17 = ((x173&x174)/(x175/x176));

	if (t17 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	static volatile int32_t x179 = INT32_MIN;
	uint8_t x180 = 5U;

	t18 = ((x177&x178)/(x179/x180));

	if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x181 = -1LL;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = INT32_MIN;
	int64_t t19 = INT64_MIN;

	t19 = ((x181&x182)/(x183/x184));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x185 = INT8_MIN;
	int8_t x186 = -3;
	volatile uint32_t x187 = UINT32_MAX;
	int16_t x188 = -1;
	volatile uint32_t t20 = 182926020U;

	t20 = ((x185&x186)/(x187/x188));

	if (t20 != 4294967168U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x209 = INT64_MIN;
	static volatile int32_t x210 = INT32_MAX;
	int8_t x211 = INT8_MIN;
	volatile int16_t x212 = -1;
	volatile int64_t t21 = 1LL;

	t21 = ((x209&x210)/(x211/x212));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x213 = -1;
	int64_t x214 = -9067814122872LL;
	int32_t x215 = -66687396;
	int32_t x216 = -30;
	int64_t t22 = -57629LL;

	t22 = ((x213&x214)/(x215/x216));

	if (t22 != -4079248LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x217 = 935508978641LLU;
	volatile int32_t x218 = 0;
	static int64_t x219 = INT64_MIN;
	static uint32_t x220 = UINT32_MAX;
	uint64_t t23 = 523185613050LLU;

	t23 = ((x217&x218)/(x219/x220));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x233 = 12059U;
	int8_t x234 = 62;
	uint16_t x235 = UINT16_MAX;
	volatile int16_t x236 = -253;

	t24 = ((x233&x234)/(x235/x236));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x241 = 0U;
	uint32_t x242 = 4516767U;
	int32_t x243 = 8;
	uint8_t x244 = 5U;
	volatile uint32_t t25 = 1037U;

	t25 = ((x241&x242)/(x243/x244));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x245 = -414742741;
	uint64_t x246 = 19659851093211973LLU;
	int32_t x247 = -1;
	uint64_t t26 = 215901079LLU;

	t26 = ((x245&x246)/(x247/x248));

	if (t26 != 19659850946904833LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x270 = -87025;
	int32_t x271 = -7;
	volatile int8_t x272 = -1;
	volatile int32_t t27 = 209732;

	t27 = ((x269&x270)/(x271/x272));

	if (t27 != 1611) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x273 = 621216LL;
	int16_t x274 = -27;
	int64_t x275 = INT64_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t28 = -327391450387590LL;

	t28 = ((x273&x274)/(x275/x276));

	if (t28 != 621216LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x281 = 10;
	uint8_t x282 = 0U;
	int64_t x283 = INT64_MAX;
	static volatile int64_t t29 = 131818LL;

	t29 = ((x281&x282)/(x283/x284));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x285 = INT32_MIN;
	static uint64_t x286 = 210LLU;
	uint16_t x287 = 12086U;
	static int16_t x288 = 1;
	volatile uint64_t t30 = 1100LLU;

	t30 = ((x285&x286)/(x287/x288));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x293 = INT16_MAX;
	volatile int32_t x294 = 1;
	int32_t x295 = INT32_MAX;
	int8_t x296 = -1;
	static volatile int32_t t31 = 6285176;

	t31 = ((x293&x294)/(x295/x296));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x297 = 1U;
	int8_t x298 = INT8_MIN;
	int8_t x299 = 14;
	int32_t x300 = -1;
	volatile int32_t t32 = -1925;

	t32 = ((x297&x298)/(x299/x300));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x301 = -1;
	int16_t x302 = -1;
	static volatile int64_t x303 = 486324818138194485LL;
	int64_t t33 = 12255LL;

	t33 = ((x301&x302)/(x303/x304));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x309 = INT32_MAX;
	static uint16_t x310 = 14064U;
	int64_t x311 = INT64_MAX;
	static int32_t x312 = -57650922;
	static volatile int64_t t34 = 9320112LL;

	t34 = ((x309&x310)/(x311/x312));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x317 = INT32_MIN;
	static volatile int32_t x318 = INT32_MIN;
	uint64_t x319 = UINT64_MAX;

	t35 = ((x317&x318)/(x319/x320));

	if (t35 != 2147483646LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x333 = 14662LLU;
	uint16_t x334 = 5228U;
	int64_t x335 = INT64_MIN;
	uint16_t x336 = 1138U;
	volatile uint64_t t36 = 20029892190062552LLU;

	t36 = ((x333&x334)/(x335/x336));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x345 = 108U;
	int16_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	int64_t t37 = 500LL;

	t37 = ((x345&x346)/(x347/x348));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x349 = 2424492076662652831LLU;
	int64_t x351 = 7299379LL;
	uint8_t x352 = 94U;
	uint64_t t38 = 55LLU;

	t38 = ((x349&x350)/(x351/x352));

	if (t38 != 31222532267277LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x365 = INT32_MIN;
	volatile int16_t x366 = 306;
	uint8_t x367 = 50U;
	int8_t x368 = -1;
	int32_t t39 = -250221076;

	t39 = ((x365&x366)/(x367/x368));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x378 = -61;
	static int32_t x379 = 450541151;
	uint32_t x380 = 24922043U;
	static volatile int64_t t40 = 14048059LL;

	t40 = ((x377&x378)/(x379/x380));

	if (t40 != 512409557603043097LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x381 = INT64_MIN;
	volatile int64_t x382 = INT64_MIN;
	static int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;
	static int64_t t41 = -236047901257525LL;

	t41 = ((x381&x382)/(x383/x384));

	if (t41 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x385 = -1;
	static uint64_t x387 = 11488701596LLU;
	volatile uint16_t x388 = UINT16_MAX;
	volatile uint64_t t42 = 16180056LLU;

	t42 = ((x385&x386)/(x387/x388));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x405 = 0;
	uint64_t x406 = 6585782224163LLU;
	int8_t x408 = -1;
	uint64_t t43 = 146325010LLU;

	t43 = ((x405&x406)/(x407/x408));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x409 = UINT16_MAX;
	volatile int64_t x410 = -1946612770LL;
	int16_t x411 = INT16_MAX;
	volatile int64_t t44 = -131608355LL;

	t44 = ((x409&x410)/(x411/x412));

	if (t44 != -303LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x413 = -1LL;
	static int64_t x414 = -1LL;
	int16_t x415 = INT16_MIN;
	int64_t x416 = -1LL;

	t45 = ((x413&x414)/(x415/x416));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x429 = INT16_MIN;
	int32_t x430 = INT32_MAX;
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = INT8_MIN;
	uint32_t t46 = 0U;

	t46 = ((x429&x430)/(x431/x432));

	if (t46 != 2147450880U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x433 = 5;
	int16_t x434 = INT16_MIN;
	int32_t x436 = -1;
	static volatile int32_t t47 = -27749418;

	t47 = ((x433&x434)/(x435/x436));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x442 = UINT16_MAX;
	int16_t x443 = -1;
	int64_t x444 = -1LL;

	t48 = ((x441&x442)/(x443/x444));

	if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x445 = -1LL;
	int64_t x446 = INT64_MIN;
	static int8_t x447 = INT8_MIN;
	static uint32_t x448 = 15567U;
	static int64_t t49 = 100885862337762222LL;

	t49 = ((x445&x446)/(x447/x448));

	if (t49 != -33429884657794LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x458 = 43U;
	int64_t x460 = -1LL;
	static volatile int64_t t50 = -12143660476800LL;

	t50 = ((x457&x458)/(x459/x460));

	if (t50 != -43LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x485 = 438;
	int64_t x487 = INT64_MIN;
	int16_t x488 = INT16_MIN;

	t51 = ((x485&x486)/(x487/x488));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x490 = 64133076U;
	static int64_t x491 = -1430619LL;
	static int16_t x492 = INT16_MIN;
	volatile int64_t t52 = 2489762508716185LL;

	t52 = ((x489&x490)/(x491/x492));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x501 = -2070674348730096LL;
	static uint16_t x502 = 225U;
	static volatile uint8_t x503 = UINT8_MAX;
	int16_t x504 = 31;
	static volatile int64_t t53 = -810843LL;

	t53 = ((x501&x502)/(x503/x504));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x509 = -1;
	static int16_t x510 = -1;
	volatile int64_t x511 = INT64_MIN;
	int64_t t54 = -97421859186LL;

	t54 = ((x509&x510)/(x511/x512));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x529 = -58207475LL;
	int8_t x531 = INT8_MIN;
	int64_t x532 = -1LL;

	t55 = ((x529&x530)/(x531/x532));

	if (t55 != -454745LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x541 = 1;
	int16_t x542 = INT16_MIN;
	int64_t x543 = -12162496335LL;
	int64_t t56 = 11LL;

	t56 = ((x541&x542)/(x543/x544));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x545 = 11U;
	int16_t x546 = INT16_MIN;
	int16_t x547 = -2811;
	uint8_t x548 = UINT8_MAX;
	volatile uint32_t t57 = 746213792U;

	t57 = ((x545&x546)/(x547/x548));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x553 = -1LL;
	int16_t x555 = INT16_MIN;
	int16_t x556 = INT16_MIN;

	t58 = ((x553&x554)/(x555/x556));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x569 = INT8_MAX;
	int8_t x570 = INT8_MIN;
	int32_t x571 = -4038530;
	volatile int32_t x572 = 3651226;
	int32_t t59 = 636;

	t59 = ((x569&x570)/(x571/x572));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x573 = 2;
	uint16_t x574 = UINT16_MAX;
	uint8_t x576 = UINT8_MAX;
	volatile uint32_t t60 = 5725U;

	t60 = ((x573&x574)/(x575/x576));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x589 = INT64_MIN;
	int64_t x590 = 80303938LL;
	uint16_t x591 = 1286U;
	volatile int64_t t61 = -76740LL;

	t61 = ((x589&x590)/(x591/x592));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x597 = 0;
	int32_t x598 = INT32_MIN;
	static volatile int64_t x599 = INT64_MAX;
	volatile int64_t x600 = INT64_MAX;
	int64_t t62 = -3LL;

	t62 = ((x597&x598)/(x599/x600));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x601 = INT8_MIN;
	int32_t x602 = -3598;
	volatile int8_t x603 = 40;
	int16_t x604 = -1;
	int32_t t63 = -3593072;

	t63 = ((x601&x602)/(x603/x604));

	if (t63 != 92) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x605 = INT8_MIN;
	int16_t x606 = 1;
	int16_t x607 = -1;
	int16_t x608 = -1;
	int32_t t64 = 466888217;

	t64 = ((x605&x606)/(x607/x608));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x609 = INT64_MIN;
	uint16_t x610 = 0U;
	uint32_t x611 = 4145757U;
	int16_t x612 = 5251;
	volatile int64_t t65 = -801545796637016LL;

	t65 = ((x609&x610)/(x611/x612));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x629 = INT16_MAX;
	int64_t x631 = INT64_MIN;
	static int64_t x632 = INT64_MIN;

	t66 = ((x629&x630)/(x631/x632));

	if (t66 != 103LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x633 = -106626;
	int64_t x634 = INT64_MIN;

	t67 = ((x633&x634)/(x635/x636));

	if (t67 != -4294967298LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x645 = INT32_MIN;
	volatile int64_t x646 = INT64_MIN;
	int64_t x647 = -1LL;
	volatile uint64_t x648 = 4332391430040191616LLU;
	volatile uint64_t t68 = 4059208371LLU;

	t68 = ((x645&x646)/(x647/x648));

	if (t68 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x662 = 2;
	int16_t x663 = 4011;
	int8_t x664 = -1;
	volatile int32_t t69 = -7;

	t69 = ((x661&x662)/(x663/x664));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x665 = 1165629812142LLU;
	int16_t x666 = 14;
	uint64_t x668 = 11922166446171031LLU;
	static uint64_t t70 = 1149071651LLU;

	t70 = ((x665&x666)/(x667/x668));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x669 = INT8_MIN;
	int32_t x670 = -255;
	volatile uint64_t x671 = 7264533926792LLU;
	volatile uint32_t x672 = 12U;
	uint64_t t71 = 1393805144LLU;

	t71 = ((x669&x670)/(x671/x672));

	if (t71 != 30471456LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x675 = UINT64_MAX;
	volatile int32_t x676 = -1;
	uint64_t t72 = 45674LLU;

	t72 = ((x673&x674)/(x675/x676));

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x677 = 2U;
	volatile uint16_t x678 = UINT16_MAX;
	int64_t x679 = INT64_MIN;
	uint16_t x680 = UINT16_MAX;
	volatile int64_t t73 = -72051145LL;

	t73 = ((x677&x678)/(x679/x680));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x681 = INT32_MIN;
	int8_t x683 = 4;
	uint8_t x684 = 1U;
	int64_t t74 = 1LL;

	t74 = ((x681&x682)/(x683/x684));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x693 = -269162960424LL;
	uint64_t x694 = UINT64_MAX;
	int64_t x696 = -1LL;
	uint64_t t75 = 3336048593218252LLU;

	t75 = ((x693&x694)/(x695/x696));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x698 = 2198283057LLU;
	int32_t x699 = INT32_MAX;
	int16_t x700 = INT16_MIN;
	volatile uint64_t t76 = 1819091514970184266LLU;

	t76 = ((x697&x698)/(x699/x700));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x706 = UINT64_MAX;
	int16_t x707 = INT16_MIN;
	int16_t x708 = 19;
	uint64_t t77 = 910171523110160543LLU;

	t77 = ((x705&x706)/(x707/x708));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x713 = 0;
	int64_t x716 = -199988687897LL;
	static int64_t t78 = 449317319143LL;

	t78 = ((x713&x714)/(x715/x716));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x718 = 183228485029729182LLU;
	int64_t x719 = INT64_MAX;
	static uint16_t x720 = UINT16_MAX;
	uint64_t t79 = 79529110328848487LLU;

	t79 = ((x717&x718)/(x719/x720));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x725 = INT32_MIN;
	int32_t x726 = INT32_MIN;
	volatile int32_t x727 = 127767353;
	int8_t x728 = -1;
	static volatile int32_t t80 = -289;

	t80 = ((x725&x726)/(x727/x728));

	if (t80 != 16) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x741 = 2292U;
	int16_t x742 = 3;
	uint32_t x743 = UINT32_MAX;
	static volatile uint64_t x744 = 27761LLU;

	t81 = ((x741&x742)/(x743/x744));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x749 = INT8_MIN;
	uint32_t x750 = 36186053U;
	uint8_t x751 = UINT8_MAX;
	static volatile int8_t x752 = -6;
	volatile uint32_t t82 = 7144315U;

	t82 = ((x749&x750)/(x751/x752));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x753 = UINT16_MAX;
	int64_t x755 = INT64_MAX;
	volatile int64_t x756 = -1LL;
	static volatile int64_t t83 = 17761751369553LL;

	t83 = ((x753&x754)/(x755/x756));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x757 = UINT8_MAX;
	int32_t x758 = -37209;
	volatile int32_t x759 = INT32_MIN;
	volatile uint32_t t84 = 15U;

	t84 = ((x757&x758)/(x759/x760));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x761 = -1;
	volatile uint32_t x762 = 191493U;
	static int8_t x763 = INT8_MIN;
	volatile uint8_t x764 = 10U;
	volatile uint32_t t85 = 1436231879U;

	t85 = ((x761&x762)/(x763/x764));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x769 = INT32_MIN;
	int32_t x770 = -8336;
	volatile int64_t x771 = INT64_MIN;
	uint8_t x772 = UINT8_MAX;

	t86 = ((x769&x770)/(x771/x772));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x777 = 75U;
	int8_t x778 = INT8_MIN;
	volatile int32_t x779 = INT32_MAX;
	int32_t x780 = -1;
	volatile int32_t t87 = 257304;

	t87 = ((x777&x778)/(x779/x780));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x793 = UINT16_MAX;
	int64_t x794 = -1LL;
	int8_t x795 = INT8_MIN;
	static uint32_t x796 = 8922U;
	volatile int64_t t88 = -26491223437617LL;

	t88 = ((x793&x794)/(x795/x796));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x805 = -1;
	uint64_t x806 = 6LLU;
	uint8_t x807 = UINT8_MAX;
	volatile int8_t x808 = INT8_MIN;
	static uint64_t t89 = 32494097197961143LLU;

	t89 = ((x805&x806)/(x807/x808));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x809 = 1;
	int32_t x810 = -266128;
	uint8_t x811 = UINT8_MAX;
	uint16_t x812 = 85U;
	volatile int32_t t90 = 2;

	t90 = ((x809&x810)/(x811/x812));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x817 = UINT16_MAX;
	volatile int32_t x819 = -1;
	int64_t x820 = -1LL;
	volatile int64_t t91 = -6603814308869837LL;

	t91 = ((x817&x818)/(x819/x820));

	if (t91 != 32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x821 = INT64_MIN;
	static int16_t x822 = 1;
	int64_t x823 = INT64_MIN;

	t92 = ((x821&x822)/(x823/x824));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {


	t93 = ((x845&x846)/(x847/x848));

	if (t93 != -585) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x857 = INT16_MIN;
	int8_t x858 = INT8_MAX;
	uint64_t x860 = 44680598995491LLU;
	volatile uint64_t t94 = 524080231162LLU;

	t94 = ((x857&x858)/(x859/x860));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x861 = 0;
	static int8_t x862 = INT8_MAX;
	volatile int64_t x863 = 2801384814596LL;
	volatile int8_t x864 = INT8_MIN;
	volatile int64_t t95 = 531773319229981918LL;

	t95 = ((x861&x862)/(x863/x864));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x871 = UINT16_MAX;

	t96 = ((x869&x870)/(x871/x872));

	if (t96 != 3661404293500082LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x877 = INT32_MIN;
	volatile int64_t x879 = INT64_MIN;
	int32_t x880 = INT32_MAX;
	volatile int64_t t97 = -116154354286775059LL;

	t97 = ((x877&x878)/(x879/x880));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x886 = UINT32_MAX;
	static int64_t x887 = INT64_MAX;
	static uint16_t x888 = 180U;
	int64_t t98 = 109960692871817LL;

	t98 = ((x885&x886)/(x887/x888));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x889 = INT16_MIN;
	static int16_t x891 = INT16_MIN;
	int64_t t99 = INT64_MIN;

	t99 = ((x889&x890)/(x891/x892));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

