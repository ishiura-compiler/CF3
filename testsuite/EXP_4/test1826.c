#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 7U;
volatile int32_t t0 = 73;
volatile int32_t x15 = -1;
volatile uint64_t t1 = 6860997477LLU;
static int16_t x45 = INT16_MAX;
uint16_t x48 = 2478U;
int64_t x53 = INT64_MAX;
uint32_t x79 = 1U;
int64_t x101 = INT64_MAX;
int64_t x103 = INT64_MIN;
static int8_t x105 = 14;
int64_t x131 = 111780655370LL;
int16_t x146 = -3190;
volatile int32_t t11 = 246;
int64_t x150 = INT64_MIN;
volatile uint16_t x151 = 8154U;
volatile int16_t x206 = -114;
int64_t x228 = -1414315341LL;
uint32_t x232 = 8031389U;
volatile uint64_t t16 = 14376482LLU;
uint64_t x251 = UINT64_MAX;
int8_t x260 = INT8_MAX;
int32_t t20 = 446;
uint64_t x314 = 53LLU;
uint32_t x332 = 118183043U;
volatile uint32_t x344 = 244272U;
uint64_t x385 = 586463965383583895LLU;
volatile uint64_t t27 = 20LLU;
int16_t x390 = INT16_MAX;
uint32_t x394 = 116738U;
int64_t t29 = INT64_MAX;
static int32_t t30 = -6148;
int16_t x417 = 1256;
static volatile int16_t x418 = 15;
volatile uint32_t x424 = 2684375U;
static uint64_t x437 = 4756LLU;
int8_t x438 = -1;
static uint32_t x456 = 34U;
int8_t x457 = 1;
volatile int32_t t36 = 2374;
int32_t x466 = INT32_MIN;
uint16_t x467 = UINT16_MAX;
int32_t x468 = INT32_MIN;
uint16_t x490 = 13U;
uint8_t x495 = 38U;
volatile uint64_t t40 = UINT64_MAX;
uint32_t x525 = 202U;
volatile uint32_t t42 = 4308U;
static uint16_t x535 = 181U;
uint16_t x537 = 109U;
static int8_t x539 = 21;
int8_t x598 = INT8_MIN;
int16_t x599 = INT16_MIN;
volatile int32_t x611 = -1;
int16_t x612 = INT16_MAX;
volatile uint64_t t47 = 210016116115018LLU;
static volatile int64_t x616 = 0LL;
uint8_t x666 = 0U;
volatile uint16_t x692 = 10U;
int64_t x696 = 99130LL;
volatile int8_t x702 = 0;
static int32_t x703 = -1;
uint64_t x707 = UINT64_MAX;
int8_t x713 = INT8_MAX;
volatile int64_t x742 = -1LL;
static int8_t x753 = 61;
volatile int64_t t65 = INT64_MAX;
uint64_t x781 = UINT64_MAX;
volatile uint64_t t67 = 123LLU;
uint64_t x788 = UINT64_MAX;
volatile int32_t t68 = 0;
volatile int16_t x791 = INT16_MIN;
uint8_t x804 = 3U;
volatile uint64_t x810 = 10010LLU;
uint8_t x812 = 5U;
uint8_t x834 = UINT8_MAX;
uint8_t x836 = 6U;
static volatile int32_t t74 = -9;
volatile uint64_t t75 = 106LLU;
static int64_t x866 = INT64_MIN;
volatile int32_t x868 = -1;
int32_t x870 = INT32_MIN;
volatile uint64_t t78 = 173830872893048885LLU;
volatile uint32_t x882 = 85U;
uint16_t x931 = 1U;
static int8_t x939 = -6;
volatile int8_t x940 = 1;
volatile uint8_t x955 = UINT8_MAX;
int64_t x979 = -3903141804933335614LL;
uint32_t x991 = 748023380U;
volatile int16_t x992 = INT16_MAX;
volatile int8_t x1015 = -1;
volatile uint32_t x1025 = 20655U;
uint16_t x1044 = 3657U;
int8_t x1052 = 2;
uint8_t x1080 = 3U;
volatile int32_t t93 = 708586;
static int64_t x1115 = INT64_MAX;
volatile int16_t x1153 = 3;
uint64_t x1154 = 104322823LLU;


void f0(void) {
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = INT64_MIN;
	static int8_t x8 = INT8_MAX;

	t0 = (x5<<(x6&(x7&x8)));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 746100262320763LLU;
	static int64_t x14 = 7LL;
	uint64_t x16 = 118154507266187LLU;

	t1 = (x13<<(x14&(x15&x16)));

	if (t1 != 5968802098566104LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = 25;
	static int16_t x22 = 0;
	int16_t x23 = -1;
	int32_t x24 = INT32_MIN;
	int32_t t2 = 6;

	t2 = (x21<<(x22&(x23&x24)));

	if (t2 != 25) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 1227U;
	int64_t x26 = 14LL;
	volatile uint8_t x27 = 0U;
	uint8_t x28 = 96U;
	int32_t t3 = 105638;

	t3 = (x25<<(x26&(x27&x28)));

	if (t3 != 1227) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x46 = -1;
	int32_t x47 = INT32_MIN;
	static volatile int32_t t4 = 574234960;

	t4 = (x45<<(x46&(x47&x48)));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	int64_t t5 = INT64_MAX;

	t5 = (x53<<(x54&(x55&x56)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x77 = 8U;
	uint64_t x78 = 263769503LLU;
	volatile uint8_t x80 = 123U;
	volatile uint32_t t6 = 11345485U;

	t6 = (x77<<(x78&(x79&x80)));

	if (t6 != 16U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x102 = 111U;
	static uint64_t x104 = UINT64_MAX;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x101<<(x102&(x103&x104)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x106 = -876915;
	uint64_t x107 = 4518578519431LLU;
	volatile int8_t x108 = 1;
	volatile int32_t t8 = -29787;

	t8 = (x105<<(x106&(x107&x108)));

	if (t8 != 28) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	int32_t t9 = 1205700;

	t9 = (x129<<(x130&(x131&x132)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x137 = 10U;
	volatile uint32_t x138 = 1U;
	int64_t x139 = INT64_MAX;
	int8_t x140 = -1;
	volatile int32_t t10 = -25945;

	t10 = (x137<<(x138&(x139&x140)));

	if (t10 != 20) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x145 = 1U;
	int64_t x147 = 6LL;
	int16_t x148 = 3;

	t11 = (x145<<(x146&(x147&x148)));

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x149 = UINT16_MAX;
	int64_t x152 = INT64_MIN;
	volatile int32_t t12 = 426568875;

	t12 = (x149<<(x150&(x151&x152)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x173 = 395U;
	uint8_t x174 = 4U;
	uint16_t x175 = 1U;
	uint16_t x176 = UINT16_MAX;
	static uint32_t t13 = 495127203U;

	t13 = (x173<<(x174&(x175&x176)));

	if (t13 != 395U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x205 = 106646928U;
	uint8_t x207 = 4U;
	volatile int8_t x208 = 0;
	volatile uint32_t t14 = 181121U;

	t14 = (x205<<(x206&(x207&x208)));

	if (t14 != 106646928U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x225 = UINT16_MAX;
	uint16_t x226 = 3295U;
	int32_t x227 = INT32_MIN;
	int32_t t15 = 13330;

	t15 = (x225<<(x226&(x227&x228)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x229 = UINT64_MAX;
	int8_t x230 = INT8_MAX;
	int16_t x231 = -1;

	t16 = (x229<<(x230&(x231&x232)));

	if (t16 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x233 = 14337U;
	int32_t x234 = INT32_MIN;
	uint16_t x235 = UINT16_MAX;
	uint32_t x236 = UINT32_MAX;
	int32_t t17 = -117209;

	t17 = (x233<<(x234&(x235&x236)));

	if (t17 != 14337) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x241 = 38U;
	int64_t x242 = -1LL;
	uint16_t x243 = 37U;
	uint16_t x244 = 14U;
	int32_t t18 = 14933;

	t18 = (x241<<(x242&(x243&x244)));

	if (t18 != 608) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x249 = 22U;
	uint32_t x250 = 38072837U;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t19 = -454404;

	t19 = (x249<<(x250&(x251&x252)));

	if (t19 != 22) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x257 = 1U;
	static int32_t x258 = INT32_MIN;
	volatile int8_t x259 = -6;

	t20 = (x257<<(x258&(x259&x260)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x285 = 1;
	uint8_t x286 = UINT8_MAX;
	int16_t x287 = 11;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t21 = 513589;

	t21 = (x285<<(x286&(x287&x288)));

	if (t21 != 2048) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x289 = UINT32_MAX;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MIN;
	int64_t x292 = -1LL;
	static uint32_t t22 = UINT32_MAX;

	t22 = (x289<<(x290&(x291&x292)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x297 = 1U;
	uint64_t x298 = 1LLU;
	static int16_t x299 = -395;
	uint64_t x300 = 1224059LLU;
	volatile int32_t t23 = 131073196;

	t23 = (x297<<(x298&(x299&x300)));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x313 = 3;
	int8_t x315 = 1;
	int8_t x316 = INT8_MIN;
	volatile int32_t t24 = 5783322;

	t24 = (x313<<(x314&(x315&x316)));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x329 = 10509140U;
	static uint16_t x330 = 192U;
	int32_t x331 = 57647;
	volatile uint32_t t25 = 322892093U;

	t25 = (x329<<(x330&(x331&x332)));

	if (t25 != 10509140U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x341 = UINT64_MAX;
	static volatile int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x341<<(x342&(x343&x344)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x386 = UINT32_MAX;
	uint64_t x387 = UINT64_MAX;
	static uint16_t x388 = 2U;

	t27 = (x385<<(x386&(x387&x388)));

	if (t27 != 2345855861534335580LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x389 = INT8_MAX;
	volatile uint8_t x391 = UINT8_MAX;
	static volatile int64_t x392 = INT64_MIN;
	int32_t t28 = -26927;

	t28 = (x389<<(x390&(x391&x392)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x393 = INT64_MAX;
	uint64_t x395 = 0LLU;
	int8_t x396 = -1;

	t29 = (x393<<(x394&(x395&x396)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x401 = UINT16_MAX;
	uint64_t x402 = 11803LLU;
	static uint8_t x403 = 99U;
	int32_t x404 = INT32_MAX;

	t30 = (x401<<(x402&(x403&x404)));

	if (t30 != 524280) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x419 = 356U;
	volatile uint16_t x420 = 1U;
	static int32_t t31 = -349;

	t31 = (x417<<(x418&(x419&x420)));

	if (t31 != 1256) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x421 = 54734646844011196LLU;
	volatile uint32_t x422 = 605858185U;
	uint16_t x423 = 4U;
	uint64_t t32 = 47848715905586951LLU;

	t32 = (x421<<(x422&(x423&x424)));

	if (t32 != 54734646844011196LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x439 = 95;
	uint16_t x440 = 8U;
	volatile uint64_t t33 = 2217088581304LLU;

	t33 = (x437<<(x438&(x439&x440)));

	if (t33 != 1217536LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x453 = 3260403U;
	int32_t x454 = INT32_MIN;
	volatile int64_t x455 = INT64_MIN;
	volatile uint32_t t34 = 29U;

	t34 = (x453<<(x454&(x455&x456)));

	if (t34 != 3260403U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x458 = 3U;
	int64_t x459 = INT64_MIN;
	uint8_t x460 = 0U;
	volatile int32_t t35 = -33924;

	t35 = (x457<<(x458&(x459&x460)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x461 = 102U;
	static int16_t x462 = -977;
	volatile int8_t x463 = INT8_MIN;
	uint8_t x464 = 90U;

	t36 = (x461<<(x462&(x463&x464)));

	if (t36 != 102) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x465 = 0U;
	int32_t t37 = -1;

	t37 = (x465<<(x466&(x467&x468)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x489 = 189037U;
	int16_t x491 = -1;
	int16_t x492 = INT16_MIN;
	volatile uint32_t t38 = 114U;

	t38 = (x489<<(x490&(x491&x492)));

	if (t38 != 189037U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x493 = INT64_MAX;
	int16_t x494 = 1560;
	static int32_t x496 = 9;
	int64_t t39 = INT64_MAX;

	t39 = (x493<<(x494&(x495&x496)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MIN;
	int8_t x499 = 0;
	uint64_t x500 = UINT64_MAX;

	t40 = (x497<<(x498&(x499&x500)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x513 = INT32_MAX;
	int32_t x514 = INT32_MIN;
	int16_t x515 = -11074;
	uint16_t x516 = 8005U;
	volatile int32_t t41 = INT32_MAX;

	t41 = (x513<<(x514&(x515&x516)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x526 = -1;
	uint16_t x527 = UINT16_MAX;
	int8_t x528 = 2;

	t42 = (x525<<(x526&(x527&x528)));

	if (t42 != 808U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x533 = INT16_MAX;
	int64_t x534 = -63209706384084840LL;
	int16_t x536 = 30;
	volatile int32_t t43 = -8377184;

	t43 = (x533<<(x534&(x535&x536)));

	if (t43 != 2147418112) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x538 = 15553LLU;
	int16_t x540 = -1;
	int32_t t44 = 429058921;

	t44 = (x537<<(x538&(x539&x540)));

	if (t44 != 218) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x593 = 207778690057389LLU;
	int8_t x594 = INT8_MIN;
	static int8_t x595 = INT8_MAX;
	static int8_t x596 = -1;
	volatile uint64_t t45 = 45643194042LLU;

	t45 = (x593<<(x594&(x595&x596)));

	if (t45 != 207778690057389LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x597 = UINT32_MAX;
	uint16_t x600 = 271U;
	uint32_t t46 = UINT32_MAX;

	t46 = (x597<<(x598&(x599&x600)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x609 = 953892280LLU;
	static int16_t x610 = INT16_MIN;

	t47 = (x609<<(x610&(x611&x612)));

	if (t47 != 953892280LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x613 = 13286U;
	static int16_t x614 = -1;
	uint8_t x615 = 2U;
	int32_t t48 = -20;

	t48 = (x613<<(x614&(x615&x616)));

	if (t48 != 13286) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x621 = 2961;
	int8_t x622 = 40;
	int32_t x623 = INT32_MIN;
	volatile uint8_t x624 = UINT8_MAX;
	static volatile int32_t t49 = 4425;

	t49 = (x621<<(x622&(x623&x624)));

	if (t49 != 2961) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x637 = 999U;
	int16_t x638 = INT16_MIN;
	uint32_t x639 = 111863U;
	int16_t x640 = INT16_MAX;
	uint32_t t50 = 14U;

	t50 = (x637<<(x638&(x639&x640)));

	if (t50 != 999U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x665 = 0U;
	static int64_t x667 = INT64_MAX;
	int8_t x668 = INT8_MIN;
	int32_t t51 = 5;

	t51 = (x665<<(x666&(x667&x668)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x673 = UINT8_MAX;
	int16_t x674 = -1;
	int64_t x675 = INT64_MIN;
	static uint32_t x676 = 33096U;
	volatile int32_t t52 = 7;

	t52 = (x673<<(x674&(x675&x676)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x677 = 4U;
	int64_t x678 = INT64_MAX;
	volatile uint32_t x679 = 35095700U;
	int32_t x680 = INT32_MIN;
	static volatile uint32_t t53 = 13550U;

	t53 = (x677<<(x678&(x679&x680)));

	if (t53 != 4U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x689 = 0U;
	int16_t x690 = 357;
	int8_t x691 = 44;
	int32_t t54 = -1841657;

	t54 = (x689<<(x690&(x691&x692)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x693 = 45U;
	int16_t x694 = -789;
	int8_t x695 = 4;
	int32_t t55 = -263753;

	t55 = (x693<<(x694&(x695&x696)));

	if (t55 != 45) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x701 = 4;
	volatile int8_t x704 = INT8_MAX;
	volatile int32_t t56 = -1;

	t56 = (x701<<(x702&(x703&x704)));

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x705 = UINT8_MAX;
	int8_t x706 = 7;
	int32_t x708 = -16;
	int32_t t57 = 31;

	t57 = (x705<<(x706&(x707&x708)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x714 = UINT32_MAX;
	volatile int64_t x715 = INT64_MIN;
	int8_t x716 = INT8_MAX;
	int32_t t58 = -1540;

	t58 = (x713<<(x714&(x715&x716)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x721 = 34U;
	int32_t x722 = 1;
	int16_t x723 = -1;
	volatile int64_t x724 = INT64_MIN;
	volatile int32_t t59 = -11568;

	t59 = (x721<<(x722&(x723&x724)));

	if (t59 != 34) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x725 = 112378572;
	int16_t x726 = INT16_MIN;
	static int16_t x727 = -13;
	uint32_t x728 = 28U;
	static volatile int32_t t60 = -608948486;

	t60 = (x725<<(x726&(x727&x728)));

	if (t60 != 112378572) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x733 = INT64_MAX;
	int64_t x734 = 23385362LL;
	int8_t x735 = -1;
	int32_t x736 = INT32_MIN;
	int64_t t61 = INT64_MAX;

	t61 = (x733<<(x734&(x735&x736)));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x737 = UINT16_MAX;
	int16_t x738 = -1;
	volatile int64_t x739 = -3657653999416102974LL;
	volatile uint16_t x740 = 7U;
	int32_t t62 = 249822;

	t62 = (x737<<(x738&(x739&x740)));

	if (t62 != 262140) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x741 = 27U;
	int64_t x743 = INT64_MIN;
	static int16_t x744 = 7010;
	int32_t t63 = -681;

	t63 = (x741<<(x742&(x743&x744)));

	if (t63 != 27) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x754 = 1U;
	int16_t x755 = INT16_MAX;
	int32_t x756 = INT32_MIN;
	int32_t t64 = 196957;

	t64 = (x753<<(x754&(x755&x756)));

	if (t64 != 61) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x757 = INT64_MAX;
	int8_t x758 = 22;
	static int16_t x759 = INT16_MIN;
	static uint64_t x760 = 41920346565194610LLU;

	t65 = (x757<<(x758&(x759&x760)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x765 = UINT64_MAX;
	static int8_t x766 = INT8_MIN;
	int16_t x767 = 5;
	int32_t x768 = INT32_MIN;
	uint64_t t66 = UINT64_MAX;

	t66 = (x765<<(x766&(x767&x768)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x782 = UINT8_MAX;
	static uint32_t x783 = 29486642U;
	volatile int8_t x784 = INT8_MAX;

	t67 = (x781<<(x782&(x783&x784)));

	if (t67 != 18445618173802708992LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x785 = INT8_MAX;
	volatile uint8_t x786 = 3U;
	static int16_t x787 = -13191;

	t68 = (x785<<(x786&(x787&x788)));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x789 = 183628060U;
	uint8_t x790 = 45U;
	int16_t x792 = INT16_MIN;
	uint32_t t69 = 234395618U;

	t69 = (x789<<(x790&(x791&x792)));

	if (t69 != 183628060U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x801 = 69865552U;
	uint16_t x802 = 59U;
	volatile uint64_t x803 = 720848167LLU;
	uint32_t t70 = 107395U;

	t70 = (x801<<(x802&(x803&x804)));

	if (t70 != 558924416U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x809 = 40U;
	uint8_t x811 = 6U;
	static int32_t t71 = -379811711;

	t71 = (x809<<(x810&(x811&x812)));

	if (t71 != 40) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x817 = INT16_MAX;
	static uint8_t x818 = 6U;
	int16_t x819 = INT16_MAX;
	uint8_t x820 = 4U;
	static int32_t t72 = -5;

	t72 = (x817<<(x818&(x819&x820)));

	if (t72 != 524272) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x829 = 12982764LL;
	int8_t x830 = INT8_MAX;
	int64_t x831 = INT64_MIN;
	uint32_t x832 = UINT32_MAX;
	int64_t t73 = -242773423507LL;

	t73 = (x829<<(x830&(x831&x832)));

	if (t73 != 12982764LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x833 = 4U;
	volatile uint16_t x835 = 250U;

	t74 = (x833<<(x834&(x835&x836)));

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x849 = 1493449225LLU;
	int8_t x850 = 6;
	volatile uint16_t x851 = UINT16_MAX;
	uint8_t x852 = 3U;

	t75 = (x849<<(x850&(x851&x852)));

	if (t75 != 5973796900LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x865 = 231352158U;
	int32_t x867 = INT32_MAX;
	uint32_t t76 = 312U;

	t76 = (x865<<(x866&(x867&x868)));

	if (t76 != 231352158U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x869 = 0;
	uint32_t x871 = UINT32_MAX;
	uint8_t x872 = UINT8_MAX;
	int32_t t77 = 168770;

	t77 = (x869<<(x870&(x871&x872)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x877 = 8LLU;
	static int8_t x878 = INT8_MIN;
	int16_t x879 = 3;
	int64_t x880 = INT64_MAX;

	t78 = (x877<<(x878&(x879&x880)));

	if (t78 != 8LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x881 = INT16_MAX;
	uint64_t x883 = UINT64_MAX;
	uint32_t x884 = 14U;
	int32_t t79 = 62;

	t79 = (x881<<(x882&(x883&x884)));

	if (t79 != 524272) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x889 = 254685587703474LLU;
	int64_t x890 = INT64_MAX;
	volatile uint8_t x891 = 2U;
	uint32_t x892 = UINT32_MAX;
	volatile uint64_t t80 = 1LLU;

	t80 = (x889<<(x890&(x891&x892)));

	if (t80 != 1018742350813896LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x901 = 88U;
	int64_t x902 = -1LL;
	uint16_t x903 = 3U;
	int8_t x904 = INT8_MIN;
	volatile int32_t t81 = -15603;

	t81 = (x901<<(x902&(x903&x904)));

	if (t81 != 88) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x929 = INT8_MAX;
	int32_t x930 = INT32_MIN;
	uint16_t x932 = 32304U;
	int32_t t82 = -82794;

	t82 = (x929<<(x930&(x931&x932)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x937 = UINT8_MAX;
	static volatile int8_t x938 = 27;
	static volatile int32_t t83 = -108487511;

	t83 = (x937<<(x938&(x939&x940)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x949 = 3U;
	uint16_t x950 = UINT16_MAX;
	int64_t x951 = INT64_MIN;
	volatile int64_t x952 = -1LL;
	static int32_t t84 = 5532989;

	t84 = (x949<<(x950&(x951&x952)));

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x953 = UINT8_MAX;
	static volatile int16_t x954 = 285;
	uint32_t x956 = 160U;
	volatile int32_t t85 = -399;

	t85 = (x953<<(x954&(x955&x956)));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x977 = 15U;
	static uint64_t x978 = 53LLU;
	int16_t x980 = 57;
	volatile int32_t t86 = -3495;

	t86 = (x977<<(x978&(x979&x980)));

	if (t86 != 15) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x989 = 33251932;
	int8_t x990 = 1;
	volatile int32_t t87 = 48096;

	t87 = (x989<<(x990&(x991&x992)));

	if (t87 != 33251932) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1013 = UINT64_MAX;
	uint8_t x1014 = UINT8_MAX;
	uint8_t x1016 = 0U;
	uint64_t t88 = UINT64_MAX;

	t88 = (x1013<<(x1014&(x1015&x1016)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1026 = INT64_MIN;
	volatile int32_t x1027 = INT32_MAX;
	int64_t x1028 = INT64_MAX;
	uint32_t t89 = 6112U;

	t89 = (x1025<<(x1026&(x1027&x1028)));

	if (t89 != 20655U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1041 = 9;
	int16_t x1042 = -4;
	static volatile int32_t x1043 = INT32_MIN;
	volatile int32_t t90 = -97538839;

	t90 = (x1041<<(x1042&(x1043&x1044)));

	if (t90 != 9) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1049 = INT8_MAX;
	uint64_t x1050 = 14353570LLU;
	static uint16_t x1051 = 38U;
	static volatile int32_t t91 = -8575980;

	t91 = (x1049<<(x1050&(x1051&x1052)));

	if (t91 != 508) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1077 = 2915U;
	int64_t x1078 = 16073125884LL;
	int16_t x1079 = -1488;
	static volatile int32_t t92 = -160671;

	t92 = (x1077<<(x1078&(x1079&x1080)));

	if (t92 != 2915) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1093 = INT8_MAX;
	uint32_t x1094 = UINT32_MAX;
	static volatile int16_t x1095 = INT16_MIN;
	int64_t x1096 = INT64_MIN;

	t93 = (x1093<<(x1094&(x1095&x1096)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1097 = INT16_MAX;
	static int32_t x1098 = INT32_MIN;
	int8_t x1099 = -1;
	int8_t x1100 = INT8_MAX;
	int32_t t94 = 5942932;

	t94 = (x1097<<(x1098&(x1099&x1100)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1113 = 37U;
	static int32_t x1114 = INT32_MAX;
	int8_t x1116 = 3;
	int32_t t95 = 366003094;

	t95 = (x1113<<(x1114&(x1115&x1116)));

	if (t95 != 296) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1137 = 422358270U;
	static int8_t x1138 = -1;
	static volatile uint16_t x1139 = UINT16_MAX;
	int8_t x1140 = 14;
	volatile uint32_t t96 = 14U;

	t96 = (x1137<<(x1138&(x1139&x1140)));

	if (t96 != 725581824U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1145 = 9LL;
	uint32_t x1146 = UINT32_MAX;
	int32_t x1147 = 76;
	int16_t x1148 = 2710;
	volatile int64_t t97 = 1431382411923LL;

	t97 = (x1145<<(x1146&(x1147&x1148)));

	if (t97 != 144LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1155 = INT8_MAX;
	int64_t x1156 = INT64_MIN;
	int32_t t98 = -226731526;

	t98 = (x1153<<(x1154&(x1155&x1156)));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x1161 = 0;
	volatile uint64_t x1162 = 1LLU;
	int64_t x1163 = INT64_MIN;
	static int64_t x1164 = -1LL;
	volatile int32_t t99 = 315860621;

	t99 = (x1161<<(x1162&(x1163&x1164)));

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

