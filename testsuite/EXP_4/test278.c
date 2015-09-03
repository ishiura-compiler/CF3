#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 169;
uint32_t x34 = 126525U;
int16_t x35 = INT16_MIN;
static uint16_t x49 = 4142U;
volatile int32_t t3 = 8524;
int32_t x66 = -1;
uint8_t x67 = UINT8_MAX;
volatile uint8_t x91 = UINT8_MAX;
int64_t x93 = -1LL;
static uint32_t x96 = UINT32_MAX;
static int64_t x111 = 824LL;
volatile int64_t x113 = 1LL;
int16_t x121 = INT16_MIN;
static int32_t t13 = -6;
int64_t x139 = INT64_MIN;
static volatile uint64_t t14 = 25910072156LLU;
int32_t t15 = 4123036;
int8_t x147 = INT8_MIN;
volatile uint64_t t16 = 698980121152717249LLU;
volatile uint32_t x174 = 237420755U;
uint64_t x234 = 9872716LLU;
int16_t x235 = -12;
static int8_t x236 = INT8_MAX;
volatile int32_t t22 = -11829138;
int8_t x237 = 16;
int64_t x246 = -1LL;
static volatile int16_t x253 = INT16_MAX;
static int8_t x254 = INT8_MAX;
int8_t x256 = INT8_MIN;
volatile int8_t x260 = INT8_MIN;
static uint8_t x262 = 1U;
int8_t x265 = -1;
uint16_t x266 = 6U;
int16_t x274 = INT16_MIN;
int8_t x276 = -1;
int32_t t30 = 6598368;
int8_t x280 = INT8_MAX;
volatile uint32_t x284 = UINT32_MAX;
int64_t t34 = -233744596359308618LL;
int16_t x301 = -247;
static uint8_t x303 = 52U;
static int32_t x310 = 805019;
int32_t x319 = -1;
int16_t x337 = INT16_MIN;
int32_t t39 = 1;
int64_t x344 = INT64_MIN;
int32_t t40 = -2;
volatile int64_t t41 = 7LL;
int32_t x362 = INT32_MIN;
int64_t t44 = 212432LL;
int64_t x422 = 3812718105275LL;
volatile uint64_t x423 = 5486LLU;
static int32_t x424 = INT32_MAX;
int8_t x431 = -1;
volatile int64_t x439 = INT64_MAX;
volatile uint64_t x440 = UINT64_MAX;
int32_t t49 = 498079172;
int16_t x453 = INT16_MIN;
uint64_t x457 = 2648909LLU;
int32_t x459 = INT32_MIN;
int32_t x466 = 326346680;
static int8_t x489 = INT8_MIN;
int64_t x491 = 27018033330LL;
uint32_t x492 = 871U;
int8_t x493 = INT8_MIN;
int16_t x496 = -3840;
uint8_t x507 = 0U;
volatile int8_t x515 = INT8_MAX;
volatile int64_t x534 = INT64_MIN;
int64_t x539 = -1033039LL;
int8_t x547 = INT8_MIN;
volatile int16_t x566 = INT16_MIN;
static uint16_t x567 = UINT16_MAX;
static int32_t t66 = -184;
static int32_t x581 = INT32_MIN;
volatile int32_t x598 = INT32_MIN;
int8_t x599 = INT8_MIN;
uint64_t t69 = 37357571824LLU;
int64_t x606 = -1LL;
int32_t x608 = -1;
volatile uint64_t x624 = 6594702316669044919LLU;
static volatile int8_t x627 = -1;
uint32_t x637 = 53401U;
int32_t x641 = INT32_MIN;
int8_t x642 = -1;
uint16_t x654 = 1U;
uint8_t x661 = UINT8_MAX;
volatile int32_t t80 = 457;
static volatile int8_t x689 = -1;
int64_t x707 = INT64_MIN;
static int64_t x737 = INT64_MAX;
static uint16_t x752 = UINT16_MAX;
int8_t x754 = 56;
volatile uint32_t x756 = UINT32_MAX;
int16_t x768 = -12;
uint64_t x787 = 34553765505460131LLU;
volatile int8_t x820 = INT8_MIN;
int16_t x828 = INT16_MAX;
volatile int16_t x829 = INT16_MAX;
int16_t x831 = -1;
uint8_t x832 = 4U;


void f0(void) {
	uint64_t x1 = 28963854169LLU;
	static uint32_t x3 = 58948U;
	volatile int64_t x4 = -66491110623856717LL;
	volatile uint64_t t0 = 15LLU;

	t0 = (x1%(x2<(x3-x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x29 = UINT64_MAX;
	uint32_t x30 = 1671U;
	uint16_t x31 = UINT16_MAX;
	uint32_t x32 = 20322U;
	static uint64_t t1 = 45209168240195432LLU;

	t1 = (x29%(x30<(x31-x32)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x33 = INT8_MIN;
	volatile int8_t x36 = -1;
	int32_t t2 = 47965;

	t2 = (x33%(x34<(x35-x36)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x50 = 883LLU;
	int64_t x51 = -5000295LL;
	static int16_t x52 = INT16_MIN;

	t3 = (x49%(x50<(x51-x52)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x65 = -1LL;
	int16_t x68 = -1276;
	int64_t t4 = -19472297LL;

	t4 = (x65%(x66<(x67-x68)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x73 = 21325725414LLU;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MIN;
	int16_t x76 = -1;
	uint64_t t5 = 2211058895LLU;

	t5 = (x73%(x74<(x75-x76)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x89 = 52308495081LLU;
	int32_t x90 = INT32_MIN;
	static int32_t x92 = -4;
	volatile uint64_t t6 = 3421270945914LLU;

	t6 = (x89%(x90<(x91-x92)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x94 = INT32_MAX;
	int16_t x95 = -3922;
	int64_t t7 = -3156067255877115836LL;

	t7 = (x93%(x94<(x95-x96)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x97 = -1;
	int64_t x98 = INT64_MIN;
	volatile int8_t x99 = -1;
	volatile uint32_t x100 = UINT32_MAX;
	volatile int32_t t8 = -48;

	t8 = (x97%(x98<(x99-x100)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x101 = -1;
	uint32_t x102 = 92896U;
	volatile int8_t x103 = INT8_MAX;
	uint8_t x104 = UINT8_MAX;
	int32_t t9 = 1;

	t9 = (x101%(x102<(x103-x104)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = UINT16_MAX;
	uint64_t x107 = 998195455275LLU;
	static int16_t x108 = INT16_MAX;
	int32_t t10 = -132;

	t10 = (x105%(x106<(x107-x108)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x109 = 54U;
	volatile int8_t x110 = INT8_MIN;
	uint16_t x112 = 0U;
	int32_t t11 = 1;

	t11 = (x109%(x110<(x111-x112)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x114 = INT64_MIN;
	int64_t x115 = 624LL;
	int16_t x116 = 1;
	static volatile int64_t t12 = -52747344858622363LL;

	t12 = (x113%(x114<(x115-x116)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x122 = 2;
	int64_t x123 = 283920932127903094LL;
	int32_t x124 = 6;

	t13 = (x121%(x122<(x123-x124)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x137 = 91874050176LLU;
	volatile int32_t x138 = INT32_MAX;
	static uint64_t x140 = 29909022734LLU;

	t14 = (x137%(x138<(x139-x140)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MAX;
	static volatile uint8_t x144 = UINT8_MAX;

	t15 = (x141%(x142<(x143-x144)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x145 = 6735339234LLU;
	volatile int16_t x146 = INT16_MAX;
	static int32_t x148 = INT32_MIN;

	t16 = (x145%(x146<(x147-x148)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x161 = INT32_MAX;
	static int32_t x162 = -128;
	volatile int16_t x163 = 1;
	int8_t x164 = 31;
	volatile int32_t t17 = 18517402;

	t17 = (x161%(x162<(x163-x164)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x173 = 1;
	static int16_t x175 = -1;
	volatile int16_t x176 = INT16_MAX;
	volatile int32_t t18 = -755087709;

	t18 = (x173%(x174<(x175-x176)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x189 = -1;
	volatile int16_t x190 = INT16_MIN;
	uint64_t x191 = UINT64_MAX;
	uint32_t x192 = 4U;
	volatile int32_t t19 = 7624;

	t19 = (x189%(x190<(x191-x192)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = 1;
	int16_t x195 = 0;
	uint32_t x196 = 2033878U;
	static int32_t t20 = -60502;

	t20 = (x193%(x194<(x195-x196)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x213 = 641U;
	uint8_t x214 = 0U;
	static uint8_t x215 = 10U;
	volatile int32_t x216 = 0;
	volatile int32_t t21 = -80;

	t21 = (x213%(x214<(x215-x216)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x233 = -1;

	t22 = (x233%(x234<(x235-x236)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x238 = 1697319463LL;
	uint16_t x239 = 3U;
	uint64_t x240 = 6130043158926614288LLU;
	volatile int32_t t23 = 2461;

	t23 = (x237%(x238<(x239-x240)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x241 = -1;
	int32_t x242 = INT32_MIN;
	volatile uint16_t x243 = 7317U;
	volatile int16_t x244 = 367;
	int32_t t24 = 0;

	t24 = (x241%(x242<(x243-x244)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x245 = INT32_MIN;
	volatile int32_t x247 = 1481;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t25 = -1;

	t25 = (x245%(x246<(x247-x248)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x255 = 79U;
	volatile int32_t t26 = -570801;

	t26 = (x253%(x254<(x255-x256)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -1;
	int32_t x259 = 69733050;
	static volatile int64_t t27 = -37516807LL;

	t27 = (x257%(x258<(x259-x260)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x261 = 1U;
	int32_t x263 = -1;
	int32_t x264 = INT32_MIN;
	int32_t t28 = 1;

	t28 = (x261%(x262<(x263-x264)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x267 = 23;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t29 = 11327;

	t29 = (x265%(x266<(x267-x268)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x273 = -63;
	int8_t x275 = -1;

	t30 = (x273%(x274<(x275-x276)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x277 = 9402;
	static int32_t x278 = -370;
	volatile uint8_t x279 = 1U;
	static volatile int32_t t31 = 222;

	t31 = (x277%(x278<(x279-x280)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x281 = 1U;
	int64_t x282 = INT64_MIN;
	volatile int8_t x283 = 0;
	volatile int32_t t32 = -3;

	t32 = (x281%(x282<(x283-x284)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x293 = -1;
	int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t33 = -14;

	t33 = (x293%(x294<(x295-x296)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x297 = INT64_MIN;
	volatile int16_t x298 = -35;
	int64_t x299 = -1LL;
	uint8_t x300 = 27U;

	t34 = (x297%(x298<(x299-x300)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x302 = 4U;
	volatile int32_t x304 = -475135;
	int32_t t35 = 7968;

	t35 = (x301%(x302<(x303-x304)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x311 = UINT64_MAX;
	volatile uint16_t x312 = 0U;
	volatile int64_t t36 = 1LL;

	t36 = (x309%(x310<(x311-x312)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x317 = 1;
	int16_t x318 = INT16_MIN;
	int8_t x320 = -1;
	int32_t t37 = -8021;

	t37 = (x317%(x318<(x319-x320)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x333 = 4U;
	volatile int16_t x334 = 11419;
	uint32_t x335 = 93111U;
	uint8_t x336 = 2U;
	volatile uint32_t t38 = 1011030U;

	t38 = (x333%(x334<(x335-x336)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x338 = INT32_MIN;
	int8_t x339 = -1;
	volatile int64_t x340 = INT64_MIN;

	t39 = (x337%(x338<(x339-x340)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x341 = -1;
	int16_t x342 = INT16_MIN;
	static int32_t x343 = INT32_MIN;

	t40 = (x341%(x342<(x343-x344)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x357 = INT64_MAX;
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = UINT64_MAX;

	t41 = (x357%(x358<(x359-x360)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x361 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;
	uint16_t x364 = 16758U;
	int32_t t42 = -527967;

	t42 = (x361%(x362<(x363-x364)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = UINT8_MAX;
	static volatile int8_t x388 = INT8_MIN;
	volatile int64_t t43 = 83315885918054LL;

	t43 = (x385%(x386<(x387-x388)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x405 = INT64_MAX;
	int64_t x406 = -4857057LL;
	uint32_t x407 = 1599U;
	volatile int16_t x408 = INT16_MAX;

	t44 = (x405%(x406<(x407-x408)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x409 = 4U;
	static uint32_t x410 = 52092968U;
	volatile int16_t x411 = INT16_MIN;
	uint16_t x412 = 97U;
	uint32_t t45 = 56787345U;

	t45 = (x409%(x410<(x411-x412)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x413 = -99018850;
	int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MAX;
	int8_t x416 = -6;
	volatile int32_t t46 = -83381610;

	t46 = (x413%(x414<(x415-x416)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x421 = -251;
	volatile int32_t t47 = 1080;

	t47 = (x421%(x422<(x423-x424)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x429 = INT32_MIN;
	uint32_t x430 = 6670U;
	uint8_t x432 = 0U;
	volatile int32_t t48 = -48166;

	t48 = (x429%(x430<(x431-x432)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x437 = UINT8_MAX;
	volatile int64_t x438 = INT64_MAX;

	t49 = (x437%(x438<(x439-x440)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x449 = INT8_MIN;
	int16_t x450 = INT16_MAX;
	static uint64_t x451 = 4008593450LLU;
	uint8_t x452 = 7U;
	static int32_t t50 = -4107052;

	t50 = (x449%(x450<(x451-x452)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x454 = INT16_MIN;
	int32_t x455 = -123;
	int8_t x456 = INT8_MAX;
	static int32_t t51 = 1656;

	t51 = (x453%(x454<(x455-x456)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x458 = 16712352;
	static volatile uint64_t x460 = UINT64_MAX;
	volatile uint64_t t52 = 7660450LLU;

	t52 = (x457%(x458<(x459-x460)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x465 = UINT8_MAX;
	uint32_t x467 = UINT32_MAX;
	volatile int32_t x468 = 12851;
	int32_t t53 = -52289;

	t53 = (x465%(x466<(x467-x468)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x473 = UINT8_MAX;
	volatile int32_t x474 = -1;
	static uint32_t x475 = 383575009U;
	int64_t x476 = -1LL;
	volatile int32_t t54 = 14530;

	t54 = (x473%(x474<(x475-x476)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x477 = INT64_MIN;
	volatile uint8_t x478 = 31U;
	int8_t x479 = INT8_MIN;
	int32_t x480 = -4286825;
	volatile int64_t t55 = 510474579648LL;

	t55 = (x477%(x478<(x479-x480)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x481 = 28011058U;
	volatile uint32_t x482 = 804U;
	int32_t x483 = INT32_MAX;
	uint16_t x484 = 6U;
	volatile uint32_t t56 = 3951940U;

	t56 = (x481%(x482<(x483-x484)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x485 = 461U;
	volatile int32_t x486 = INT32_MIN;
	int16_t x487 = INT16_MIN;
	volatile int32_t x488 = INT32_MIN;
	volatile int32_t t57 = -444;

	t57 = (x485%(x486<(x487-x488)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x490 = INT16_MAX;
	volatile int32_t t58 = 21;

	t58 = (x489%(x490<(x491-x492)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x494 = 2355U;
	int16_t x495 = INT16_MIN;
	volatile int32_t t59 = -1466;

	t59 = (x493%(x494<(x495-x496)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x505 = 1;
	int64_t x506 = INT64_MIN;
	int16_t x508 = 1;
	int32_t t60 = -502042533;

	t60 = (x505%(x506<(x507-x508)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x513 = INT32_MAX;
	int8_t x514 = -29;
	int8_t x516 = -1;
	int32_t t61 = 17612;

	t61 = (x513%(x514<(x515-x516)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x517 = INT32_MIN;
	int16_t x518 = INT16_MAX;
	uint16_t x519 = UINT16_MAX;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t62 = 639;

	t62 = (x517%(x518<(x519-x520)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x533 = 3930877U;
	static uint32_t x535 = 1091621U;
	volatile int64_t x536 = 32337286349787199LL;
	volatile uint32_t t63 = 220581422U;

	t63 = (x533%(x534<(x535-x536)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x537 = -3746;
	static uint64_t x538 = 314455154431LLU;
	uint32_t x540 = 814483U;
	volatile int32_t t64 = -815281371;

	t64 = (x537%(x538<(x539-x540)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x545 = INT16_MIN;
	uint16_t x546 = 15506U;
	int64_t x548 = INT64_MIN;
	int32_t t65 = -2;

	t65 = (x545%(x546<(x547-x548)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x565 = INT16_MIN;
	static volatile int16_t x568 = 0;

	t66 = (x565%(x566<(x567-x568)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x582 = -1;
	int8_t x583 = INT8_MAX;
	volatile int16_t x584 = 1;
	static volatile int32_t t67 = 77;

	t67 = (x581%(x582<(x583-x584)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x597 = 8;
	uint8_t x600 = 23U;
	volatile int32_t t68 = -125648;

	t68 = (x597%(x598<(x599-x600)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x601 = 2945057806399343LLU;
	int8_t x602 = -1;
	int32_t x603 = 32342;
	int8_t x604 = INT8_MAX;

	t69 = (x601%(x602<(x603-x604)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x605 = INT8_MAX;
	uint16_t x607 = 1U;
	volatile int32_t t70 = 14;

	t70 = (x605%(x606<(x607-x608)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x613 = INT32_MIN;
	uint64_t x614 = 1123984440LLU;
	int8_t x615 = INT8_MIN;
	int32_t x616 = INT32_MIN;
	static volatile int32_t t71 = -480;

	t71 = (x613%(x614<(x615-x616)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x617 = INT16_MIN;
	int32_t x618 = INT32_MIN;
	static int16_t x619 = -1;
	volatile int32_t x620 = INT32_MIN;
	volatile int32_t t72 = -20741;

	t72 = (x617%(x618<(x619-x620)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x621 = INT64_MAX;
	volatile int32_t x622 = 0;
	static int16_t x623 = INT16_MAX;
	int64_t t73 = 2666717LL;

	t73 = (x621%(x622<(x623-x624)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x625 = -1LL;
	volatile int16_t x626 = INT16_MIN;
	int8_t x628 = INT8_MAX;
	int64_t t74 = 2400031878LL;

	t74 = (x625%(x626<(x627-x628)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x638 = INT16_MAX;
	uint16_t x639 = 8U;
	int16_t x640 = INT16_MIN;
	uint32_t t75 = 57U;

	t75 = (x637%(x638<(x639-x640)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x643 = 376U;
	volatile int64_t x644 = -1LL;
	volatile int32_t t76 = 15359877;

	t76 = (x641%(x642<(x643-x644)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x645 = 1;
	static uint16_t x646 = UINT16_MAX;
	int32_t x647 = INT32_MAX;
	volatile uint32_t x648 = 26U;
	int32_t t77 = -15234539;

	t77 = (x645%(x646<(x647-x648)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x653 = UINT64_MAX;
	int32_t x655 = -1;
	static uint32_t x656 = 313U;
	uint64_t t78 = 1159636060548LLU;

	t78 = (x653%(x654<(x655-x656)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x662 = -1;
	int64_t x663 = -1LL;
	static int64_t x664 = -3044405LL;
	int32_t t79 = -762105;

	t79 = (x661%(x662<(x663-x664)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x669 = INT8_MAX;
	volatile int64_t x670 = -5501802LL;
	uint8_t x671 = 0U;
	volatile int8_t x672 = INT8_MIN;

	t80 = (x669%(x670<(x671-x672)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x673 = INT8_MIN;
	uint8_t x674 = 24U;
	static int16_t x675 = INT16_MIN;
	volatile uint64_t x676 = 29849633640217LLU;
	volatile int32_t t81 = -7876;

	t81 = (x673%(x674<(x675-x676)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x677 = -1LL;
	static uint16_t x678 = UINT16_MAX;
	uint16_t x679 = UINT16_MAX;
	uint32_t x680 = UINT32_MAX;
	static volatile int64_t t82 = -99304924194LL;

	t82 = (x677%(x678<(x679-x680)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x690 = 3U;
	uint64_t x691 = 450LLU;
	static uint32_t x692 = UINT32_MAX;
	int32_t t83 = -3;

	t83 = (x689%(x690<(x691-x692)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x693 = 30002LLU;
	volatile int16_t x694 = -1;
	uint8_t x695 = UINT8_MAX;
	int32_t x696 = -1234669;
	static volatile uint64_t t84 = 990LLU;

	t84 = (x693%(x694<(x695-x696)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x697 = 5U;
	int64_t x698 = INT64_MAX;
	static uint8_t x699 = 40U;
	uint64_t x700 = 7879LLU;
	static int32_t t85 = -361;

	t85 = (x697%(x698<(x699-x700)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x705 = UINT32_MAX;
	int8_t x706 = INT8_MIN;
	volatile int64_t x708 = INT64_MIN;
	static uint32_t t86 = 3225464U;

	t86 = (x705%(x706<(x707-x708)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x713 = UINT8_MAX;
	volatile uint16_t x714 = 15U;
	volatile uint16_t x715 = UINT16_MAX;
	uint64_t x716 = 42588978531919LLU;
	static volatile int32_t t87 = 1;

	t87 = (x713%(x714<(x715-x716)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x738 = 1;
	int16_t x739 = 964;
	static uint32_t x740 = 1U;
	static int64_t t88 = -552459606162LL;

	t88 = (x737%(x738<(x739-x740)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x749 = -254196LL;
	uint64_t x750 = 26348253951LLU;
	int16_t x751 = INT16_MIN;
	static int64_t t89 = -78567474LL;

	t89 = (x749%(x750<(x751-x752)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x753 = 0U;
	static volatile uint8_t x755 = UINT8_MAX;
	volatile uint32_t t90 = 53208U;

	t90 = (x753%(x754<(x755-x756)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x765 = INT8_MIN;
	int32_t x766 = INT32_MIN;
	static int16_t x767 = INT16_MIN;
	int32_t t91 = -8820;

	t91 = (x765%(x766<(x767-x768)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x781 = INT64_MAX;
	int32_t x782 = INT32_MIN;
	uint8_t x783 = 7U;
	uint64_t x784 = 11910186LLU;
	volatile int64_t t92 = -724758LL;

	t92 = (x781%(x782<(x783-x784)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x785 = UINT32_MAX;
	uint16_t x786 = 0U;
	int32_t x788 = INT32_MIN;
	static uint32_t t93 = 15U;

	t93 = (x785%(x786<(x787-x788)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x797 = 10U;
	static volatile uint8_t x798 = 0U;
	int16_t x799 = INT16_MAX;
	int8_t x800 = INT8_MIN;
	volatile uint32_t t94 = 1U;

	t94 = (x797%(x798<(x799-x800)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x817 = 27472LLU;
	uint8_t x818 = UINT8_MAX;
	uint16_t x819 = 3957U;
	uint64_t t95 = 1661159LLU;

	t95 = (x817%(x818<(x819-x820)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x821 = -102389785856521018LL;
	uint32_t x822 = 19013U;
	uint8_t x823 = UINT8_MAX;
	volatile int16_t x824 = INT16_MAX;
	volatile int64_t t96 = -512874465645LL;

	t96 = (x821%(x822<(x823-x824)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x825 = 2751069U;
	volatile int8_t x826 = INT8_MAX;
	int64_t x827 = 99089536LL;
	uint32_t t97 = 30U;

	t97 = (x825%(x826<(x827-x828)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x830 = -4083;
	volatile int32_t t98 = -125902807;

	t98 = (x829%(x830<(x831-x832)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x849 = UINT64_MAX;
	int64_t x850 = -1686925391339465LL;
	static uint8_t x851 = UINT8_MAX;
	int8_t x852 = -1;
	uint64_t t99 = 0LLU;

	t99 = (x849%(x850<(x851-x852)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

