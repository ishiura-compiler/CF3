#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x19 = -8;
static int8_t x29 = -1;
volatile int16_t x32 = INT16_MAX;
int8_t x33 = INT8_MIN;
static uint32_t x51 = 2U;
volatile uint64_t x52 = 11LLU;
int8_t x65 = INT8_MIN;
int32_t t8 = -105;
int64_t x82 = -2LL;
uint32_t x83 = 26U;
int16_t x84 = 246;
static int32_t x96 = INT32_MAX;
static int16_t x100 = -1;
static uint64_t t12 = 1LLU;
uint8_t x141 = 3U;
static int64_t x151 = -753483280LL;
int8_t x169 = INT8_MIN;
static volatile int32_t t18 = -325385687;
static int32_t x233 = -1588;
volatile int32_t x316 = INT32_MIN;
uint8_t x325 = 60U;
uint16_t x326 = 28U;
int8_t x333 = INT8_MIN;
static uint8_t x352 = 2U;
static int16_t x359 = INT16_MIN;
uint16_t x360 = UINT16_MAX;
static volatile int8_t x364 = INT8_MAX;
static volatile uint32_t t30 = 639968897U;
volatile uint32_t x372 = UINT32_MAX;
int8_t x420 = INT8_MAX;
int32_t t35 = -95;
volatile uint16_t x438 = 7250U;
uint16_t x461 = 259U;
int16_t x462 = -18;
static volatile int32_t t41 = 1691;
uint16_t x480 = UINT16_MAX;
uint8_t x481 = UINT8_MAX;
int8_t x482 = -1;
int32_t t43 = 1;
static uint16_t x500 = 817U;
int16_t x564 = INT16_MIN;
uint32_t t47 = 9640U;
static uint16_t x575 = 41U;
int64_t x616 = INT64_MAX;
volatile int32_t t49 = -343853211;
int64_t x667 = -107LL;
uint32_t x671 = 282U;
int32_t x678 = INT32_MAX;
uint32_t x688 = UINT32_MAX;
int16_t x693 = INT16_MIN;
uint16_t x708 = 9U;
static uint8_t x757 = 0U;
volatile uint32_t t64 = 0U;
int32_t x780 = -1;
int64_t t66 = 5663740LL;
volatile uint64_t t69 = 10885LLU;
uint32_t x845 = 4399U;
int8_t x853 = 1;
volatile int8_t x866 = -1;
int16_t x867 = INT16_MIN;
volatile uint64_t x868 = UINT64_MAX;
uint64_t t74 = 7LLU;
uint8_t x896 = 98U;
static int16_t x898 = INT16_MIN;
uint8_t x937 = UINT8_MAX;
int64_t x940 = -1LL;
int16_t x946 = INT16_MIN;
uint64_t t81 = 31935315LLU;
uint16_t x949 = 0U;
volatile int8_t x973 = INT8_MIN;
uint32_t x976 = UINT32_MAX;
static uint16_t x989 = 7U;
static volatile uint8_t x991 = 2U;
int64_t t89 = -1003985353LL;
static volatile int64_t t92 = -3996719LL;
uint32_t t93 = 10U;
uint64_t x1082 = 778071807878331376LLU;
static int32_t x1084 = -1;
int8_t x1085 = 23;
int16_t x1100 = INT16_MAX;
static int32_t t98 = -65084651;


void f0(void) {
	int16_t x9 = -1;
	int16_t x10 = -11;
	int32_t x11 = -1;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t0 = -9056;

	t0 = ((x9*x10)/(x11<x12));

	if (t0 != 11) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x17 = 731395241;
	uint8_t x18 = 1U;
	uint16_t x20 = 4U;
	volatile int32_t t1 = -28;

	t1 = ((x17*x18)/(x19<x20));

	if (t1 != 731395241) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MIN;
	volatile uint64_t t2 = 1LLU;

	t2 = ((x29*x30)/(x31<x32));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x34 = INT16_MAX;
	int64_t x35 = -1LL;
	uint32_t x36 = 2197U;
	int32_t t3 = -103112;

	t3 = ((x33*x34)/(x35<x36));

	if (t3 != -4194176) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x49 = 10101939U;
	static int16_t x50 = 5092;
	volatile uint32_t t4 = 61U;

	t4 = ((x49*x50)/(x51<x52));

	if (t4 != 4194433132U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x53 = -1;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	static volatile int64_t x56 = INT64_MAX;
	int32_t t5 = -45065248;

	t5 = ((x53*x54)/(x55<x56));

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x57 = -1;
	static uint64_t x58 = UINT64_MAX;
	uint64_t x59 = 0LLU;
	volatile int32_t x60 = 344276196;
	uint64_t t6 = 47158LLU;

	t6 = ((x57*x58)/(x59<x60));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x66 = UINT8_MAX;
	volatile int32_t x67 = INT32_MIN;
	static volatile int8_t x68 = INT8_MIN;
	volatile int32_t t7 = -79584392;

	t7 = ((x65*x66)/(x67<x68));

	if (t7 != -32640) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x77 = -1;
	uint8_t x78 = 27U;
	int8_t x79 = INT8_MAX;
	volatile uint16_t x80 = 7819U;

	t8 = ((x77*x78)/(x79<x80));

	if (t8 != -27) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x81 = UINT64_MAX;
	uint64_t t9 = 95630912413388LLU;

	t9 = ((x81*x82)/(x83<x84));

	if (t9 != 2LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x93 = -64168LL;
	int8_t x94 = 17;
	static uint16_t x95 = 12U;
	volatile int64_t t10 = 0LL;

	t10 = ((x93*x94)/(x95<x96));

	if (t10 != -1090856LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x97 = 0;
	int16_t x98 = INT16_MAX;
	int64_t x99 = INT64_MIN;
	volatile int32_t t11 = -1693312;

	t11 = ((x97*x98)/(x99<x100));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x105 = -1;
	static uint64_t x106 = 111781402LLU;
	volatile int16_t x107 = -97;
	volatile int16_t x108 = -1;

	t12 = ((x105*x106)/(x107<x108));

	if (t12 != 18446744073597770214LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x137 = 3U;
	uint8_t x138 = 25U;
	int32_t x139 = INT32_MIN;
	int8_t x140 = 13;
	static volatile int32_t t13 = -947886;

	t13 = ((x137*x138)/(x139<x140));

	if (t13 != 75) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x142 = -1LL;
	int32_t x143 = INT32_MAX;
	uint64_t x144 = 14685438419522LLU;
	volatile int64_t t14 = 3575395938809299887LL;

	t14 = ((x141*x142)/(x143<x144));

	if (t14 != -3LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = 5U;
	static uint64_t x148 = UINT64_MAX;
	volatile int32_t t15 = 627;

	t15 = ((x145*x146)/(x147<x148));

	if (t15 != 4194304) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x149 = 556115292355670LLU;
	uint16_t x150 = 12333U;
	int16_t x152 = INT16_MIN;
	volatile uint64_t t16 = 500686861LLU;

	t16 = ((x149*x150)/(x151<x152));

	if (t16 != 6858569900622478110LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x170 = INT16_MIN;
	int16_t x171 = -1;
	int64_t x172 = 5049LL;
	int32_t t17 = -2714;

	t17 = ((x169*x170)/(x171<x172));

	if (t17 != 4194304) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x197 = -1;
	uint8_t x198 = 92U;
	static int64_t x199 = -1LL;
	uint32_t x200 = 1U;

	t18 = ((x197*x198)/(x199<x200));

	if (t18 != -92) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x201 = 477U;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = UINT16_MAX;
	static int64_t x204 = INT64_MAX;
	int32_t t19 = -1303;

	t19 = ((x201*x202)/(x203<x204));

	if (t19 != -61056) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x217 = UINT8_MAX;
	int8_t x218 = -1;
	static int8_t x219 = -1;
	int32_t x220 = 436396;
	volatile int32_t t20 = 87409;

	t20 = ((x217*x218)/(x219<x220));

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x225 = INT8_MAX;
	volatile int8_t x226 = 23;
	volatile uint32_t x227 = 0U;
	volatile uint8_t x228 = 66U;
	volatile int32_t t21 = -841605;

	t21 = ((x225*x226)/(x227<x228));

	if (t21 != 2921) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x234 = UINT16_MAX;
	static uint8_t x235 = 5U;
	static uint8_t x236 = 60U;
	volatile int32_t t22 = -7366;

	t22 = ((x233*x234)/(x235<x236));

	if (t22 != -104069580) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x277 = INT8_MAX;
	uint64_t x278 = 73LLU;
	int64_t x279 = -8132805930221844LL;
	volatile int32_t x280 = INT32_MIN;
	uint64_t t23 = 538692060769671LLU;

	t23 = ((x277*x278)/(x279<x280));

	if (t23 != 9271LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = 1;
	int32_t x291 = -1;
	volatile uint16_t x292 = 95U;
	volatile int64_t t24 = INT64_MAX;

	t24 = ((x289*x290)/(x291<x292));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x313 = -43547LL;
	int16_t x314 = 1;
	static int64_t x315 = INT64_MIN;
	int64_t t25 = 24741442037LL;

	t25 = ((x313*x314)/(x315<x316));

	if (t25 != -43547LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x327 = 311U;
	static int16_t x328 = INT16_MAX;
	int32_t t26 = -1;

	t26 = ((x325*x326)/(x327<x328));

	if (t26 != 1680) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	uint64_t x336 = 2822741664457588LLU;
	static int32_t t27 = 155898078;

	t27 = ((x333*x334)/(x335<x336));

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x349 = INT16_MAX;
	uint8_t x350 = UINT8_MAX;
	int16_t x351 = -1;
	int32_t t28 = 2865;

	t28 = ((x349*x350)/(x351<x352));

	if (t28 != 8355585) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x357 = -554319458421181LL;
	int16_t x358 = 2842;
	volatile int64_t t29 = 548650872050125754LL;

	t29 = ((x357*x358)/(x359<x360));

	if (t29 != -1575375900832996402LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x361 = 3U;
	static volatile uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MIN;

	t30 = ((x361*x362)/(x363<x364));

	if (t30 != 4294967293U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x365 = INT64_MIN;
	static int8_t x366 = 0;
	int32_t x367 = -1926;
	volatile int8_t x368 = INT8_MIN;
	static int64_t t31 = -12267171289977LL;

	t31 = ((x365*x366)/(x367<x368));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x369 = 0;
	int64_t x370 = -1LL;
	static volatile uint64_t x371 = 225LLU;
	int64_t t32 = 4428359742370LL;

	t32 = ((x369*x370)/(x371<x372));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x373 = INT32_MIN;
	static uint32_t x374 = 410503U;
	uint8_t x375 = UINT8_MAX;
	static uint64_t x376 = UINT64_MAX;
	volatile uint32_t t33 = 1978U;

	t33 = ((x373*x374)/(x375<x376));

	if (t33 != 2147483648U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x377 = -100799;
	int8_t x378 = INT8_MIN;
	int64_t x379 = -119650LL;
	volatile int16_t x380 = INT16_MIN;
	int32_t t34 = -1;

	t34 = ((x377*x378)/(x379<x380));

	if (t34 != 12902272) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x417 = INT8_MAX;
	uint8_t x418 = UINT8_MAX;
	int32_t x419 = INT32_MIN;

	t35 = ((x417*x418)/(x419<x420));

	if (t35 != 32385) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x433 = -3;
	int8_t x434 = INT8_MIN;
	uint8_t x435 = 2U;
	static uint64_t x436 = 1396723046LLU;
	static volatile int32_t t36 = 2697;

	t36 = ((x433*x434)/(x435<x436));

	if (t36 != 384) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x437 = INT8_MIN;
	uint16_t x439 = 446U;
	volatile uint64_t x440 = 632LLU;
	static volatile int32_t t37 = 8048103;

	t37 = ((x437*x438)/(x439<x440));

	if (t37 != -928000) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x445 = 2;
	static uint64_t x446 = 2083LLU;
	int32_t x447 = INT32_MIN;
	int64_t x448 = -1LL;
	static volatile uint64_t t38 = 8835243976932395LLU;

	t38 = ((x445*x446)/(x447<x448));

	if (t38 != 4166LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x463 = 1;
	int16_t x464 = INT16_MAX;
	int32_t t39 = 5657203;

	t39 = ((x461*x462)/(x463<x464));

	if (t39 != -4662) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x465 = -1;
	uint8_t x466 = 4U;
	static uint64_t x467 = 35LLU;
	int8_t x468 = INT8_MAX;
	static int32_t t40 = -8163987;

	t40 = ((x465*x466)/(x467<x468));

	if (t40 != -4) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x473 = -1;
	int8_t x474 = INT8_MIN;
	int64_t x475 = INT64_MIN;
	int8_t x476 = 0;

	t41 = ((x473*x474)/(x475<x476));

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x477 = INT16_MAX;
	int16_t x478 = -4;
	int64_t x479 = INT64_MIN;
	int32_t t42 = 725396638;

	t42 = ((x477*x478)/(x479<x480));

	if (t42 != -131068) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MIN;

	t43 = ((x481*x482)/(x483<x484));

	if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x497 = -1838LL;
	uint64_t x498 = UINT64_MAX;
	static volatile int16_t x499 = -1;
	uint64_t t44 = 24710048LLU;

	t44 = ((x497*x498)/(x499<x500));

	if (t44 != 1838LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x505 = -1;
	int64_t x506 = -1LL;
	uint64_t x507 = 15334970278LLU;
	static volatile int32_t x508 = -8157;
	int64_t t45 = 2248113743665805039LL;

	t45 = ((x505*x506)/(x507<x508));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x561 = -2619;
	uint32_t x562 = UINT32_MAX;
	int32_t x563 = INT32_MIN;
	volatile uint32_t t46 = 1U;

	t46 = ((x561*x562)/(x563<x564));

	if (t46 != 2619U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x565 = INT16_MIN;
	static volatile uint32_t x566 = 9U;
	static int64_t x567 = -140108296362660922LL;
	int8_t x568 = INT8_MIN;

	t47 = ((x565*x566)/(x567<x568));

	if (t47 != 4294672384U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x573 = 1U;
	volatile int64_t x574 = INT64_MIN;
	uint8_t x576 = UINT8_MAX;
	int64_t t48 = INT64_MIN;

	t48 = ((x573*x574)/(x575<x576));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x613 = 8U;
	int8_t x614 = -9;
	static int8_t x615 = 7;

	t49 = ((x613*x614)/(x615<x616));

	if (t49 != -72) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x629 = 4095618311LLU;
	int16_t x630 = 6;
	int16_t x631 = -1;
	int32_t x632 = INT32_MAX;
	static volatile uint64_t t50 = 321LLU;

	t50 = ((x629*x630)/(x631<x632));

	if (t50 != 24573709866LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x641 = 0;
	int32_t x642 = -1;
	uint8_t x643 = UINT8_MAX;
	static int32_t x644 = INT32_MAX;
	int32_t t51 = 1;

	t51 = ((x641*x642)/(x643<x644));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x657 = 544877672U;
	int8_t x658 = 6;
	int64_t x659 = -262085434233992LL;
	int8_t x660 = INT8_MAX;
	uint32_t t52 = 400U;

	t52 = ((x657*x658)/(x659<x660));

	if (t52 != 3269266032U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x665 = 13U;
	static uint16_t x666 = 19207U;
	int64_t x668 = 265497195LL;
	int32_t t53 = -1238;

	t53 = ((x665*x666)/(x667<x668));

	if (t53 != 249691) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x669 = INT32_MAX;
	uint64_t x670 = UINT64_MAX;
	uint64_t x672 = 247023091797LLU;
	volatile uint64_t t54 = 124LLU;

	t54 = ((x669*x670)/(x671<x672));

	if (t54 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x677 = -1;
	int16_t x679 = 0;
	uint8_t x680 = 2U;
	int32_t t55 = 231383716;

	t55 = ((x677*x678)/(x679<x680));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x685 = 31;
	volatile int16_t x686 = -7;
	int16_t x687 = INT16_MAX;
	static int32_t t56 = 59351;

	t56 = ((x685*x686)/(x687<x688));

	if (t56 != -217) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x694 = 6U;
	int32_t x695 = 3342;
	volatile uint64_t x696 = 799703767700726LLU;
	volatile int32_t t57 = -181;

	t57 = ((x693*x694)/(x695<x696));

	if (t57 != -196608) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x697 = INT8_MAX;
	uint8_t x698 = 3U;
	volatile int8_t x699 = INT8_MIN;
	static int16_t x700 = 664;
	int32_t t58 = -4;

	t58 = ((x697*x698)/(x699<x700));

	if (t58 != 381) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x705 = INT16_MAX;
	int16_t x706 = INT16_MAX;
	int64_t x707 = INT64_MIN;
	int32_t t59 = -2445695;

	t59 = ((x705*x706)/(x707<x708));

	if (t59 != 1073676289) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x709 = INT32_MIN;
	uint32_t x710 = UINT32_MAX;
	int32_t x711 = 25518;
	uint32_t x712 = UINT32_MAX;
	volatile uint32_t t60 = 685U;

	t60 = ((x709*x710)/(x711<x712));

	if (t60 != 2147483648U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x713 = UINT32_MAX;
	uint64_t x714 = UINT64_MAX;
	volatile int8_t x715 = -1;
	static volatile int64_t x716 = 92313082780LL;
	uint64_t t61 = 28740LLU;

	t61 = ((x713*x714)/(x715<x716));

	if (t61 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x745 = INT32_MIN;
	uint64_t x746 = UINT64_MAX;
	volatile uint8_t x747 = 24U;
	int16_t x748 = INT16_MAX;
	static volatile uint64_t t62 = 12625521061LLU;

	t62 = ((x745*x746)/(x747<x748));

	if (t62 != 2147483648LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x753 = INT16_MAX;
	uint64_t x754 = 108176875LLU;
	int8_t x755 = 3;
	uint8_t x756 = 7U;
	uint64_t t63 = 713242LLU;

	t63 = ((x753*x754)/(x755<x756));

	if (t63 != 3544631663125LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x758 = 300855U;
	int64_t x759 = -24188LL;
	volatile uint8_t x760 = 15U;

	t64 = ((x757*x758)/(x759<x760));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x765 = INT64_MIN;
	uint64_t x766 = 54901562LLU;
	int16_t x767 = INT16_MIN;
	int16_t x768 = -1;
	uint64_t t65 = 951582881LLU;

	t65 = ((x765*x766)/(x767<x768));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x777 = INT16_MAX;
	static int64_t x778 = -22LL;
	uint32_t x779 = 11051U;

	t66 = ((x777*x778)/(x779<x780));

	if (t66 != -720874LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x817 = -5;
	static uint16_t x818 = 22U;
	int16_t x819 = INT16_MIN;
	int32_t x820 = -4;
	int32_t t67 = -7922027;

	t67 = ((x817*x818)/(x819<x820));

	if (t67 != -110) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x825 = -1LL;
	volatile uint16_t x826 = 8U;
	volatile uint64_t x827 = 1LLU;
	int16_t x828 = -596;
	volatile int64_t t68 = -2027425746234196LL;

	t68 = ((x825*x826)/(x827<x828));

	if (t68 != -8LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x829 = 468LLU;
	static volatile int32_t x830 = -501;
	int32_t x831 = 0;
	static uint64_t x832 = 74314024570LLU;

	t69 = ((x829*x830)/(x831<x832));

	if (t69 != 18446744073709317148LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x846 = 97U;
	int16_t x847 = INT16_MIN;
	int16_t x848 = INT16_MAX;
	volatile uint32_t t70 = 28937422U;

	t70 = ((x845*x846)/(x847<x848));

	if (t70 != 426703U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x854 = INT16_MAX;
	volatile uint8_t x855 = 1U;
	uint8_t x856 = 61U;
	int32_t t71 = -14;

	t71 = ((x853*x854)/(x855<x856));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x865 = -1;
	int32_t t72 = 939769;

	t72 = ((x865*x866)/(x867<x868));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x869 = -68324;
	uint8_t x870 = 50U;
	uint32_t x871 = 10U;
	uint64_t x872 = UINT64_MAX;
	int32_t t73 = -53007096;

	t73 = ((x869*x870)/(x871<x872));

	if (t73 != -3416200) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x881 = 13825994165995963LLU;
	uint64_t x882 = 47956887275201105LLU;
	int64_t x883 = INT64_MIN;
	uint8_t x884 = UINT8_MAX;

	t74 = ((x881*x882)/(x883<x884));

	if (t74 != 3606448467133917739LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x893 = INT8_MIN;
	int8_t x894 = INT8_MIN;
	int64_t x895 = -890467132812LL;
	int32_t t75 = -218765;

	t75 = ((x893*x894)/(x895<x896));

	if (t75 != 16384) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x897 = INT16_MIN;
	int32_t x899 = -1;
	static int64_t x900 = 84LL;
	int32_t t76 = 366620413;

	t76 = ((x897*x898)/(x899<x900));

	if (t76 != 1073741824) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x901 = INT8_MAX;
	uint16_t x902 = 19499U;
	static int64_t x903 = INT64_MIN;
	int32_t x904 = INT32_MIN;
	volatile int32_t t77 = 321;

	t77 = ((x901*x902)/(x903<x904));

	if (t77 != 2476373) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x909 = 18LLU;
	int64_t x910 = INT64_MIN;
	int32_t x911 = 2;
	int8_t x912 = INT8_MAX;
	static volatile uint64_t t78 = 0LLU;

	t78 = ((x909*x910)/(x911<x912));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x933 = -1;
	static uint32_t x934 = 2919U;
	int8_t x935 = INT8_MIN;
	volatile int64_t x936 = -1LL;
	volatile uint32_t t79 = 0U;

	t79 = ((x933*x934)/(x935<x936));

	if (t79 != 4294964377U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x938 = 586U;
	volatile int8_t x939 = INT8_MIN;
	static uint32_t t80 = 5922U;

	t80 = ((x937*x938)/(x939<x940));

	if (t80 != 149430U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x945 = 238LLU;
	volatile uint16_t x947 = 0U;
	static int64_t x948 = INT64_MAX;

	t81 = ((x945*x946)/(x947<x948));

	if (t81 != 18446744073701752832LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x950 = 111U;
	uint16_t x951 = 86U;
	int32_t x952 = 35442;
	volatile int32_t t82 = -1603;

	t82 = ((x949*x950)/(x951<x952));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x957 = 8336075;
	volatile int16_t x958 = -1;
	uint8_t x959 = UINT8_MAX;
	uint64_t x960 = UINT64_MAX;
	int32_t t83 = 283130843;

	t83 = ((x957*x958)/(x959<x960));

	if (t83 != -8336075) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x974 = UINT32_MAX;
	static int32_t x975 = -51741;
	uint32_t t84 = 3U;

	t84 = ((x973*x974)/(x975<x976));

	if (t84 != 128U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x977 = -1;
	static int64_t x978 = -1LL;
	volatile int32_t x979 = INT32_MIN;
	volatile int8_t x980 = 1;
	int64_t t85 = 27884699221542736LL;

	t85 = ((x977*x978)/(x979<x980));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x985 = -1;
	int16_t x986 = -6;
	uint64_t x987 = 212700LLU;
	int64_t x988 = INT64_MIN;
	volatile int32_t t86 = 18;

	t86 = ((x985*x986)/(x987<x988));

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x990 = -3;
	volatile uint8_t x992 = 15U;
	volatile int32_t t87 = -9;

	t87 = ((x989*x990)/(x991<x992));

	if (t87 != -21) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x993 = 0U;
	volatile uint16_t x994 = 4625U;
	uint8_t x995 = 13U;
	uint64_t x996 = 208LLU;
	static uint32_t t88 = 4U;

	t88 = ((x993*x994)/(x995<x996));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x997 = INT8_MIN;
	volatile int64_t x998 = -1LL;
	static volatile int16_t x999 = -614;
	volatile uint8_t x1000 = 1U;

	t89 = ((x997*x998)/(x999<x1000));

	if (t89 != 128LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x1001 = 0;
	int8_t x1002 = INT8_MIN;
	volatile int16_t x1003 = INT16_MIN;
	uint16_t x1004 = UINT16_MAX;
	volatile int32_t t90 = 449;

	t90 = ((x1001*x1002)/(x1003<x1004));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1009 = -1;
	static int64_t x1010 = -1LL;
	static int16_t x1011 = -1;
	volatile int32_t x1012 = 12488;
	int64_t t91 = 10041259842LL;

	t91 = ((x1009*x1010)/(x1011<x1012));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x1033 = 13367LL;
	int64_t x1034 = -1LL;
	int64_t x1035 = -11093054068LL;
	uint8_t x1036 = 1U;

	t92 = ((x1033*x1034)/(x1035<x1036));

	if (t92 != -13367LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x1053 = INT32_MIN;
	uint32_t x1054 = 1951728675U;
	int64_t x1055 = INT64_MIN;
	int32_t x1056 = -112870;

	t93 = ((x1053*x1054)/(x1055<x1056));

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1081 = INT16_MAX;
	int32_t x1083 = INT32_MIN;
	uint64_t t94 = 1565128924847728383LLU;

	t94 = ((x1081*x1082)/(x1083<x1084));

	if (t94 != 1678618882683864080LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x1086 = 7U;
	volatile uint32_t x1087 = 13200U;
	volatile int32_t x1088 = INT32_MAX;
	int32_t t95 = 16636943;

	t95 = ((x1085*x1086)/(x1087<x1088));

	if (t95 != 161) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1093 = 18;
	volatile uint32_t x1094 = UINT32_MAX;
	static int16_t x1095 = -4;
	uint32_t x1096 = UINT32_MAX;
	static uint32_t t96 = 3050U;

	t96 = ((x1093*x1094)/(x1095<x1096));

	if (t96 != 4294967278U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1097 = INT16_MIN;
	int16_t x1098 = 2952;
	int8_t x1099 = -1;
	int32_t t97 = 76796;

	t97 = ((x1097*x1098)/(x1099<x1100));

	if (t97 != -96731136) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1113 = INT32_MAX;
	static int8_t x1114 = 0;
	int8_t x1115 = 7;
	static uint8_t x1116 = 11U;

	t98 = ((x1113*x1114)/(x1115<x1116));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x1117 = -36;
	uint64_t x1118 = 237563207052742LLU;
	uint8_t x1119 = 1U;
	uint32_t x1120 = 526289U;
	volatile uint64_t t99 = 5855832581255930984LLU;

	t99 = ((x1117*x1118)/(x1119<x1120));

	if (t99 != 18438191798255652904LLU) { NG(); } else { ; }
	
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

