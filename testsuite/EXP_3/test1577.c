#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
volatile int16_t x6 = 3337;
static int64_t x8 = INT64_MAX;
uint64_t x67 = 11079691LLU;
uint64_t x68 = 7303653471984164LLU;
static int64_t x76 = 3LL;
int16_t x85 = 17;
int32_t t9 = 326;
int8_t x113 = INT8_MAX;
int32_t x115 = INT32_MIN;
int64_t t10 = -62617021LL;
int8_t x122 = -1;
int32_t x136 = INT32_MIN;
int8_t x141 = 1;
uint8_t x142 = 3U;
static volatile int32_t t15 = 228;
static int32_t t16 = -56723657;
uint8_t x177 = 2U;
uint32_t x180 = 637U;
uint64_t x185 = UINT64_MAX;
uint16_t x220 = UINT16_MAX;
int64_t x229 = INT64_MIN;
static volatile int64_t x230 = -27044941LL;
int32_t x231 = INT32_MIN;
uint8_t x244 = 26U;
static volatile int32_t t27 = -64536161;
volatile uint32_t x265 = UINT32_MAX;
volatile uint32_t t28 = 1902502U;
int64_t x280 = INT64_MAX;
int64_t t30 = -5128793311029860LL;
volatile uint32_t t31 = 209U;
static volatile int32_t t32 = 1;
static int64_t x302 = -62686497564LL;
int8_t x304 = 29;
int64_t x309 = INT64_MIN;
int8_t x326 = -1;
static uint8_t x342 = 1U;
volatile int32_t t40 = -3798529;
int32_t x382 = INT32_MIN;
volatile int8_t x383 = -3;
uint64_t t45 = 3213LLU;
int32_t x452 = INT32_MIN;
int32_t x456 = INT32_MIN;
int16_t x457 = INT16_MIN;
uint64_t x465 = 8920459917334981863LLU;
int64_t x476 = 304450125043LL;
int32_t x479 = -1;
uint16_t x480 = 13358U;
int64_t t51 = -963LL;
static int64_t x481 = INT64_MIN;
int16_t x484 = INT16_MIN;
volatile int64_t t53 = -7580LL;
static volatile uint32_t t54 = 14420U;
volatile int32_t x508 = INT32_MAX;
uint8_t x513 = UINT8_MAX;
static volatile int8_t x514 = 5;
static int64_t x516 = -2105LL;
volatile uint64_t x521 = UINT64_MAX;
int32_t x523 = INT32_MIN;
static volatile uint16_t x534 = UINT16_MAX;
volatile uint64_t t60 = 3012392948LLU;
static int64_t x547 = INT64_MIN;
int8_t x548 = -1;
volatile int64_t t61 = -1047708738LL;
int16_t x558 = INT16_MAX;
static volatile int8_t x559 = 1;
int16_t x562 = -7321;
volatile int16_t x563 = 935;
static uint16_t x577 = 6U;
uint64_t x578 = UINT64_MAX;
volatile int32_t t67 = 79829;
int16_t x592 = -4;
volatile int16_t x593 = INT16_MIN;
uint32_t x596 = UINT32_MAX;
int8_t x598 = INT8_MIN;
int8_t x599 = INT8_MIN;
static uint64_t t71 = 8589022857832LLU;
uint16_t x616 = 1947U;
int8_t x631 = INT8_MIN;
int64_t t74 = 2LL;
int8_t x641 = INT8_MIN;
int64_t x679 = -949960912LL;
int32_t x680 = 192;
int8_t x682 = 13;
volatile uint64_t x683 = 4196761253LLU;
int8_t x688 = INT8_MAX;
int16_t x703 = 2607;
static volatile int32_t t84 = -214;
static volatile int32_t t85 = 2;
int32_t x753 = INT32_MIN;
static int16_t x755 = -15451;
volatile int64_t x757 = -360815309490LL;
int32_t x758 = -1;
static uint16_t x768 = 445U;
int64_t x778 = 25822453186263108LL;
int8_t x779 = INT8_MIN;
static int32_t t94 = -4013234;
int64_t x794 = -132222154LL;
static int32_t x801 = INT32_MIN;
static volatile uint8_t x807 = UINT8_MAX;
int64_t x816 = INT64_MAX;


void f0(void) {
	static uint16_t x1 = 7U;
	int8_t x2 = INT8_MIN;
	volatile int8_t x4 = INT8_MAX;
	int32_t t0 = 6;

	t0 = ((x1%x2)/(x3<=x4));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static int64_t x7 = INT64_MIN;
	volatile uint32_t t1 = 2704137U;

	t1 = ((x5%x6)/(x7<=x8));

	if (t1 != 1357U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 472;
	volatile int32_t x18 = INT32_MIN;
	int32_t x19 = -1;
	int32_t x20 = INT32_MAX;
	volatile int32_t t2 = -2721241;

	t2 = ((x17%x18)/(x19<=x20));

	if (t2 != 472) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x57 = -1;
	uint32_t x58 = 186923420U;
	volatile uint16_t x59 = 3U;
	uint8_t x60 = UINT8_MAX;
	static volatile uint32_t t3 = 225308933U;

	t3 = ((x57%x58)/(x59<=x60));

	if (t3 != 182652055U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x65 = INT64_MAX;
	static volatile uint16_t x66 = UINT16_MAX;
	volatile int64_t t4 = -1LL;

	t4 = ((x65%x66)/(x67<=x68));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x73 = INT8_MIN;
	int16_t x74 = 34;
	int16_t x75 = INT16_MIN;
	int32_t t5 = -165;

	t5 = ((x73%x74)/(x75<=x76));

	if (t5 != -26) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MIN;
	static volatile uint16_t x79 = 109U;
	uint32_t x80 = 310U;
	int32_t t6 = 6;

	t6 = ((x77%x78)/(x79<=x80));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = -17212LL;
	int32_t x83 = INT32_MIN;
	uint16_t x84 = 4U;
	volatile int64_t t7 = 4960704536LL;

	t7 = ((x81%x82)/(x83<=x84));

	if (t7 != -8LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x86 = -1;
	uint16_t x87 = 0U;
	static volatile uint16_t x88 = 4U;
	int32_t t8 = 14;

	t8 = ((x85%x86)/(x87<=x88));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x89 = INT8_MIN;
	volatile int16_t x90 = INT16_MIN;
	int8_t x91 = -1;
	int16_t x92 = INT16_MAX;

	t9 = ((x89%x90)/(x91<=x92));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x114 = -68248910290341LL;
	uint64_t x116 = UINT64_MAX;

	t10 = ((x113%x114)/(x115<=x116));

	if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MAX;
	static int32_t t11 = -2;

	t11 = ((x117%x118)/(x119<=x120));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x121 = 1543U;
	int16_t x123 = INT16_MIN;
	int8_t x124 = -1;
	volatile int32_t t12 = -708093889;

	t12 = ((x121%x122)/(x123<=x124));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x133 = -1;
	int16_t x134 = -1;
	int64_t x135 = INT64_MIN;
	int32_t t13 = -144923;

	t13 = ((x133%x134)/(x135<=x136));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x143 = 1U;
	uint64_t x144 = UINT64_MAX;
	static volatile int32_t t14 = -1;

	t14 = ((x141%x142)/(x143<=x144));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x157 = 0U;
	int32_t x158 = INT32_MIN;
	int16_t x159 = INT16_MIN;
	int64_t x160 = 282181331LL;

	t15 = ((x157%x158)/(x159<=x160));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x161 = -323;
	static volatile int16_t x162 = -1;
	uint32_t x163 = 619004489U;
	int8_t x164 = INT8_MIN;

	t16 = ((x161%x162)/(x163<=x164));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x173 = INT64_MAX;
	volatile int32_t x174 = -753;
	int64_t x175 = -1270089LL;
	int64_t x176 = 1642238LL;
	int64_t t17 = 14LL;

	t17 = ((x173%x174)/(x175<=x176));

	if (t17 != 661LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x178 = -3;
	volatile uint8_t x179 = 3U;
	int32_t t18 = 21512191;

	t18 = ((x177%x178)/(x179<=x180));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x186 = 4;
	int8_t x187 = INT8_MIN;
	static uint8_t x188 = UINT8_MAX;
	uint64_t t19 = 1341518124LLU;

	t19 = ((x185%x186)/(x187<=x188));

	if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x189 = -16258878943400LL;
	static volatile int16_t x190 = INT16_MIN;
	volatile int16_t x191 = -1;
	static int32_t x192 = 99629;
	int64_t t20 = 14986LL;

	t20 = ((x189%x190)/(x191<=x192));

	if (t20 != -12456LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x193 = 0U;
	int64_t x194 = INT64_MAX;
	static uint32_t x195 = 31194U;
	volatile uint64_t x196 = UINT64_MAX;
	int64_t t21 = 7136149907654LL;

	t21 = ((x193%x194)/(x195<=x196));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x201 = 65U;
	uint16_t x202 = 2U;
	volatile uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MAX;
	int32_t t22 = -330760957;

	t22 = ((x201%x202)/(x203<=x204));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x213 = 14U;
	volatile uint16_t x214 = UINT16_MAX;
	volatile uint8_t x215 = 98U;
	volatile int64_t x216 = 5589798470656LL;
	volatile int32_t t23 = 0;

	t23 = ((x213%x214)/(x215<=x216));

	if (t23 != 14) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MAX;
	static int16_t x219 = 5;
	volatile int32_t t24 = 3;

	t24 = ((x217%x218)/(x219<=x220));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x225 = 1;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	int16_t x228 = -1;
	int32_t t25 = 2;

	t25 = ((x225%x226)/(x227<=x228));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x232 = INT64_MAX;
	int64_t t26 = 153740173126239LL;

	t26 = ((x229%x230)/(x231<=x232));

	if (t26 != -25612826LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = -1;
	static volatile int8_t x243 = INT8_MIN;

	t27 = ((x241%x242)/(x243<=x244));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x266 = 3979U;
	int32_t x267 = -1;
	int64_t x268 = 12LL;

	t28 = ((x265%x266)/(x267<=x268));

	if (t28 != 2863U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x273 = 215804650584418LL;
	uint16_t x274 = UINT16_MAX;
	int16_t x275 = INT16_MIN;
	static int8_t x276 = INT8_MIN;
	volatile int64_t t29 = 938352192531300LL;

	t29 = ((x273%x274)/(x275<=x276));

	if (t29 != 44338LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x277 = 2LL;
	int16_t x278 = -1771;
	int32_t x279 = INT32_MIN;

	t30 = ((x277%x278)/(x279<=x280));

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x281 = UINT32_MAX;
	int16_t x282 = INT16_MIN;
	int8_t x283 = -20;
	int32_t x284 = 7;

	t31 = ((x281%x282)/(x283<=x284));

	if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x293 = 1;
	uint16_t x294 = UINT16_MAX;
	static volatile uint32_t x295 = 147U;
	int32_t x296 = INT32_MAX;

	t32 = ((x293%x294)/(x295<=x296));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x301 = -1;
	uint16_t x303 = 10U;
	volatile int64_t t33 = 26612489014474003LL;

	t33 = ((x301%x302)/(x303<=x304));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x305 = 120;
	uint16_t x306 = 405U;
	uint32_t x307 = 1U;
	volatile int8_t x308 = INT8_MAX;
	volatile int32_t t34 = 2011935;

	t34 = ((x305%x306)/(x307<=x308));

	if (t34 != 120) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x310 = 268LLU;
	static int8_t x311 = INT8_MIN;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t35 = 0LLU;

	t35 = ((x309%x310)/(x311<=x312));

	if (t35 != 176LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	int8_t x315 = INT8_MAX;
	uint32_t x316 = UINT32_MAX;
	static int64_t t36 = 447204049LL;

	t36 = ((x313%x314)/(x315<=x316));

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x325 = INT16_MIN;
	uint16_t x327 = 0U;
	static volatile uint8_t x328 = 1U;
	int32_t t37 = 26;

	t37 = ((x325%x326)/(x327<=x328));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x341 = 470U;
	volatile int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	static uint32_t t38 = 1405U;

	t38 = ((x341%x342)/(x343<=x344));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	int8_t x347 = -1;
	int64_t x348 = 711LL;
	volatile int32_t t39 = -5;

	t39 = ((x345%x346)/(x347<=x348));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x361 = -1876294;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = -16027788;
	int16_t x364 = INT16_MIN;

	t40 = ((x361%x362)/(x363<=x364));

	if (t40 != -41314) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x381 = -47;
	volatile uint16_t x384 = 0U;
	volatile int32_t t41 = 6763928;

	t41 = ((x381%x382)/(x383<=x384));

	if (t41 != -47) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = -1;
	static int32_t x395 = INT32_MIN;
	int8_t x396 = -1;
	volatile int64_t t42 = -1348949381237816251LL;

	t42 = ((x393%x394)/(x395<=x396));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x409 = UINT32_MAX;
	static int8_t x410 = INT8_MAX;
	static volatile int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	static volatile uint32_t t43 = 590883U;

	t43 = ((x409%x410)/(x411<=x412));

	if (t43 != 15U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x417 = 13086U;
	static int16_t x418 = INT16_MAX;
	static int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MAX;
	static int32_t t44 = -205496;

	t44 = ((x417%x418)/(x419<=x420));

	if (t44 != 13086) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x433 = 35659348955361LLU;
	volatile int32_t x434 = INT32_MIN;
	static volatile int8_t x435 = -1;
	volatile uint8_t x436 = 67U;

	t45 = ((x433%x434)/(x435<=x436));

	if (t45 != 35659348955361LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x449 = 18;
	int8_t x450 = 31;
	volatile int32_t x451 = INT32_MIN;
	volatile int32_t t46 = -694;

	t46 = ((x449%x450)/(x451<=x452));

	if (t46 != 18) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x453 = 2186LLU;
	int64_t x454 = INT64_MAX;
	volatile int32_t x455 = INT32_MIN;
	static uint64_t t47 = 30858898LLU;

	t47 = ((x453%x454)/(x455<=x456));

	if (t47 != 2186LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x458 = UINT16_MAX;
	int16_t x459 = 55;
	int64_t x460 = INT64_MAX;
	volatile int32_t t48 = 6119004;

	t48 = ((x457%x458)/(x459<=x460));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x466 = INT16_MIN;
	volatile int32_t x467 = INT32_MIN;
	int64_t x468 = INT64_MAX;
	volatile uint64_t t49 = 3LLU;

	t49 = ((x465%x466)/(x467<=x468));

	if (t49 != 8920459917334981863LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x473 = INT16_MIN;
	uint8_t x474 = 21U;
	int32_t x475 = INT32_MIN;
	static volatile int32_t t50 = -224975;

	t50 = ((x473%x474)/(x475<=x476));

	if (t50 != -8) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x477 = INT8_MAX;
	int64_t x478 = INT64_MIN;

	t51 = ((x477%x478)/(x479<=x480));

	if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x482 = 69721186;
	uint32_t x483 = 451167810U;
	static volatile int64_t t52 = -587077704926556LL;

	t52 = ((x481%x482)/(x483<=x484));

	if (t52 != -42564264LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x485 = 39299318818091LL;
	volatile uint8_t x486 = 3U;
	int64_t x487 = INT64_MIN;
	volatile uint16_t x488 = 32U;

	t53 = ((x485%x486)/(x487<=x488));

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x493 = 7U;
	uint32_t x494 = 12724U;
	static int32_t x495 = INT32_MIN;
	uint16_t x496 = UINT16_MAX;

	t54 = ((x493%x494)/(x495<=x496));

	if (t54 != 7U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x505 = 1U;
	volatile uint64_t x506 = 52LLU;
	int32_t x507 = -139134449;
	uint64_t t55 = 10082669LLU;

	t55 = ((x505%x506)/(x507<=x508));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x515 = -252498;
	static int32_t t56 = -3446970;

	t56 = ((x513%x514)/(x515<=x516));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x522 = INT8_MIN;
	static volatile int32_t x524 = INT32_MIN;
	uint64_t t57 = 94407583695736020LLU;

	t57 = ((x521%x522)/(x523<=x524));

	if (t57 != 127LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x525 = INT32_MAX;
	volatile int32_t x526 = INT32_MIN;
	volatile uint8_t x527 = UINT8_MAX;
	uint8_t x528 = UINT8_MAX;
	volatile int32_t t58 = INT32_MAX;

	t58 = ((x525%x526)/(x527<=x528));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x533 = -1;
	int32_t x535 = INT32_MIN;
	int16_t x536 = -5;
	static volatile int32_t t59 = 1;

	t59 = ((x533%x534)/(x535<=x536));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x541 = 2517600521010LLU;
	uint16_t x542 = 107U;
	int32_t x543 = -18;
	int16_t x544 = -1;

	t60 = ((x541%x542)/(x543<=x544));

	if (t60 != 93LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x545 = UINT16_MAX;
	int64_t x546 = INT64_MIN;

	t61 = ((x545%x546)/(x547<=x548));

	if (t61 != 65535LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x557 = 611739LL;
	int8_t x560 = 3;
	int64_t t62 = -66540120443941LL;

	t62 = ((x557%x558)/(x559<=x560));

	if (t62 != 21933LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x561 = -1;
	uint16_t x564 = UINT16_MAX;
	volatile int32_t t63 = 627460034;

	t63 = ((x561%x562)/(x563<=x564));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x565 = INT64_MIN;
	int64_t x566 = -2930LL;
	int8_t x567 = INT8_MIN;
	static int8_t x568 = INT8_MIN;
	static volatile int64_t t64 = 15989636544967LL;

	t64 = ((x565%x566)/(x567<=x568));

	if (t64 != -2838LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x573 = INT32_MIN;
	uint32_t x574 = UINT32_MAX;
	int16_t x575 = -1;
	int8_t x576 = INT8_MAX;
	volatile uint32_t t65 = 383U;

	t65 = ((x573%x574)/(x575<=x576));

	if (t65 != 2147483648U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x579 = INT64_MIN;
	volatile int8_t x580 = -1;
	volatile uint64_t t66 = 133LLU;

	t66 = ((x577%x578)/(x579<=x580));

	if (t66 != 6LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x581 = INT8_MAX;
	int16_t x582 = INT16_MIN;
	int64_t x583 = -141849777802LL;
	volatile int64_t x584 = -1LL;

	t67 = ((x581%x582)/(x583<=x584));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x589 = 1;
	volatile int16_t x590 = INT16_MAX;
	uint32_t x591 = 3U;
	volatile int32_t t68 = 29;

	t68 = ((x589%x590)/(x591<=x592));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x594 = 1155;
	static uint8_t x595 = UINT8_MAX;
	int32_t t69 = -30;

	t69 = ((x593%x594)/(x595<=x596));

	if (t69 != -428) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x597 = 0U;
	int16_t x600 = 6;
	int32_t t70 = -3848;

	t70 = ((x597%x598)/(x599<=x600));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x601 = UINT64_MAX;
	uint64_t x602 = 41132470730021264LLU;
	int64_t x603 = INT64_MIN;
	static int64_t x604 = INT64_MIN;

	t71 = ((x601%x602)/(x603<=x604));

	if (t71 != 19397186660025343LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x605 = -1;
	uint64_t x606 = UINT64_MAX;
	volatile int32_t x607 = -1;
	int64_t x608 = INT64_MAX;
	static uint64_t t72 = 4093854LLU;

	t72 = ((x605%x606)/(x607<=x608));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x613 = 9U;
	static int16_t x614 = -1;
	int32_t x615 = INT32_MIN;
	volatile int32_t t73 = -341390;

	t73 = ((x613%x614)/(x615<=x616));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x629 = INT64_MAX;
	volatile int64_t x630 = -1LL;
	int64_t x632 = -1LL;

	t74 = ((x629%x630)/(x631<=x632));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x637 = 1U;
	int64_t x638 = INT64_MIN;
	int8_t x639 = INT8_MAX;
	static uint8_t x640 = UINT8_MAX;
	int64_t t75 = -120LL;

	t75 = ((x637%x638)/(x639<=x640));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x642 = -1;
	int64_t x643 = INT64_MIN;
	volatile int16_t x644 = 1;
	int32_t t76 = 484972;

	t76 = ((x641%x642)/(x643<=x644));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x657 = UINT8_MAX;
	uint8_t x658 = 95U;
	static int32_t x659 = -1;
	volatile int16_t x660 = 19;
	int32_t t77 = 3316360;

	t77 = ((x657%x658)/(x659<=x660));

	if (t77 != 65) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x665 = 1876239U;
	uint32_t x666 = UINT32_MAX;
	static int64_t x667 = -22388925594904LL;
	static uint8_t x668 = UINT8_MAX;
	uint32_t t78 = 15863U;

	t78 = ((x665%x666)/(x667<=x668));

	if (t78 != 1876239U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x669 = UINT64_MAX;
	volatile int16_t x670 = -1;
	static uint32_t x671 = 123685U;
	int8_t x672 = -1;
	volatile uint64_t t79 = 436742229LLU;

	t79 = ((x669%x670)/(x671<=x672));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x673 = -58;
	int32_t x674 = 4555;
	int16_t x675 = INT16_MIN;
	int8_t x676 = -35;
	static int32_t t80 = -496;

	t80 = ((x673%x674)/(x675<=x676));

	if (t80 != -58) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x677 = 40LLU;
	int16_t x678 = 22;
	uint64_t t81 = 44508831562LLU;

	t81 = ((x677%x678)/(x679<=x680));

	if (t81 != 18LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x681 = INT16_MAX;
	int8_t x684 = INT8_MIN;
	int32_t t82 = -7;

	t82 = ((x681%x682)/(x683<=x684));

	if (t82 != 7) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x685 = INT8_MIN;
	volatile uint64_t x686 = 6015607595616LLU;
	static int64_t x687 = -6495683712783676LL;
	static volatile uint64_t t83 = 4476285934337790328LLU;

	t83 = ((x685%x686)/(x687<=x688));

	if (t83 != 3693904999808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x701 = -6;
	int32_t x702 = INT32_MIN;
	static int32_t x704 = INT32_MAX;

	t84 = ((x701%x702)/(x703<=x704));

	if (t84 != -6) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x705 = INT16_MAX;
	int32_t x706 = -1;
	volatile uint16_t x707 = UINT16_MAX;
	static uint16_t x708 = UINT16_MAX;

	t85 = ((x705%x706)/(x707<=x708));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x713 = 7;
	static int32_t x714 = 28837;
	int8_t x715 = INT8_MIN;
	int8_t x716 = INT8_MAX;
	static volatile int32_t t86 = -11143933;

	t86 = ((x713%x714)/(x715<=x716));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x717 = UINT16_MAX;
	volatile uint16_t x718 = UINT16_MAX;
	static uint64_t x719 = 3070637883LLU;
	int32_t x720 = INT32_MIN;
	volatile int32_t t87 = 641743;

	t87 = ((x717%x718)/(x719<=x720));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x754 = -21LL;
	int8_t x756 = -1;
	int64_t t88 = -19487095510LL;

	t88 = ((x753%x754)/(x755<=x756));

	if (t88 != -2LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x759 = INT8_MIN;
	uint16_t x760 = 17575U;
	int64_t t89 = 32735889518472639LL;

	t89 = ((x757%x758)/(x759<=x760));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x761 = -1;
	int8_t x762 = 26;
	int8_t x763 = -18;
	uint64_t x764 = UINT64_MAX;
	int32_t t90 = -32884134;

	t90 = ((x761%x762)/(x763<=x764));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x765 = INT64_MIN;
	uint32_t x766 = 85U;
	static int16_t x767 = 234;
	volatile int64_t t91 = 129759056384LL;

	t91 = ((x765%x766)/(x767<=x768));

	if (t91 != -43LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x773 = INT16_MIN;
	int16_t x774 = INT16_MAX;
	volatile int8_t x775 = INT8_MIN;
	uint16_t x776 = 244U;
	static int32_t t92 = 9070378;

	t92 = ((x773%x774)/(x775<=x776));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x777 = INT16_MIN;
	int16_t x780 = 15067;
	static volatile int64_t t93 = 17112220580025920LL;

	t93 = ((x777%x778)/(x779<=x780));

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x789 = INT32_MIN;
	static int32_t x790 = INT32_MAX;
	int64_t x791 = -52139549980094LL;
	static uint16_t x792 = 1191U;

	t94 = ((x789%x790)/(x791<=x792));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x793 = 8076U;
	int32_t x795 = -167225987;
	volatile int32_t x796 = -2;
	int64_t t95 = 32241994LL;

	t95 = ((x793%x794)/(x795<=x796));

	if (t95 != 8076LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x802 = INT8_MAX;
	int16_t x803 = INT16_MAX;
	volatile uint64_t x804 = UINT64_MAX;
	volatile int32_t t96 = 118;

	t96 = ((x801%x802)/(x803<=x804));

	if (t96 != -8) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x805 = 1;
	int16_t x806 = -11;
	static int32_t x808 = INT32_MAX;
	int32_t t97 = 496389506;

	t97 = ((x805%x806)/(x807<=x808));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x809 = 6489U;
	volatile uint16_t x810 = 39U;
	volatile int16_t x811 = INT16_MIN;
	uint16_t x812 = UINT16_MAX;
	uint32_t t98 = 3983U;

	t98 = ((x809%x810)/(x811<=x812));

	if (t98 != 15U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x813 = 315U;
	volatile uint64_t x814 = 1182701448609LLU;
	int8_t x815 = INT8_MAX;
	uint64_t t99 = 558614582689304128LLU;

	t99 = ((x813%x814)/(x815<=x816));

	if (t99 != 315LLU) { NG(); } else { ; }
	
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

