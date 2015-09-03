#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x37 = 0U;
static volatile int32_t x38 = INT32_MAX;
int8_t x45 = INT8_MIN;
uint32_t x61 = UINT32_MAX;
static volatile int64_t t6 = -492485LL;
static uint64_t x97 = 1817262873LLU;
int16_t x153 = 28;
int32_t x156 = INT32_MIN;
volatile uint64_t x198 = 9574696LLU;
static volatile uint64_t x200 = UINT64_MAX;
uint16_t x239 = 10U;
int16_t x275 = INT16_MIN;
uint8_t x331 = 26U;
volatile int16_t x382 = 2;
int64_t x390 = 255583LL;
static int8_t x412 = INT8_MIN;
uint32_t t23 = 66845U;
volatile uint32_t x479 = UINT32_MAX;
uint64_t x498 = 572LLU;
static uint64_t t27 = 1949329LLU;
static uint16_t x501 = 474U;
uint16_t x502 = 2831U;
volatile int32_t t28 = 189939;
int8_t x519 = INT8_MAX;
int64_t x520 = INT64_MIN;
uint64_t x565 = 13622799053LLU;
volatile uint8_t x567 = UINT8_MAX;
int32_t t33 = -147;
volatile int64_t x597 = INT64_MIN;
volatile uint64_t t35 = 203675526534360598LLU;
static uint8_t x610 = UINT8_MAX;
int32_t x612 = INT32_MIN;
static int64_t t36 = 21LL;
int32_t x613 = 1388626;
uint8_t x617 = UINT8_MAX;
int8_t x634 = INT8_MAX;
int64_t x642 = 138LL;
uint32_t x652 = UINT32_MAX;
uint64_t x654 = 59005978894786592LLU;
volatile uint8_t x655 = UINT8_MAX;
uint64_t t43 = 3128621487LLU;
uint64_t t45 = 10612LLU;
volatile uint32_t x697 = UINT32_MAX;
static int16_t x700 = -1;
volatile int64_t x701 = -5303864LL;
uint64_t x702 = 2047150756208114853LLU;
volatile uint32_t x709 = 15U;
volatile uint16_t x741 = UINT16_MAX;
volatile uint8_t x742 = 86U;
int64_t x753 = -12556336434LL;
static volatile int64_t x756 = -1LL;
volatile int64_t x762 = 458502313LL;
static int16_t x848 = INT16_MAX;
volatile uint32_t t58 = 2135782U;
volatile int8_t x859 = INT8_MIN;
volatile uint32_t t59 = 2217U;
static int16_t x861 = -1;
static int64_t x872 = INT64_MAX;
static int32_t t62 = -1;
volatile int64_t x881 = -1LL;
static int8_t x939 = INT8_MIN;
static int32_t x956 = INT32_MIN;
volatile int32_t t71 = 111724;
int64_t x1013 = -1LL;
int32_t x1028 = -23863588;
static volatile uint64_t x1045 = UINT64_MAX;
uint8_t x1062 = UINT8_MAX;
uint32_t x1073 = 0U;
uint8_t x1094 = 5U;
int8_t x1096 = -1;
uint64_t x1100 = UINT64_MAX;
int8_t x1112 = INT8_MIN;
uint32_t x1136 = 64927559U;
volatile uint64_t t81 = 64LLU;
int8_t x1160 = INT8_MIN;
int32_t t82 = 11526174;
int8_t x1177 = INT8_MAX;
int32_t t84 = 40;
uint64_t x1191 = 254703610027187LLU;
int32_t x1205 = INT32_MIN;
volatile uint64_t t87 = 63332431738LLU;
static uint32_t x1213 = 7U;
uint32_t x1226 = 41U;
int16_t x1315 = INT16_MAX;
uint64_t x1318 = 66LLU;
int32_t x1320 = INT32_MAX;
volatile int64_t x1335 = INT64_MAX;
volatile int64_t x1336 = INT64_MAX;
uint64_t x1346 = UINT64_MAX;
int64_t x1365 = -433189LL;
volatile int64_t x1366 = 13437177LL;


void f0(void) {
	int32_t x25 = INT32_MIN;
	volatile uint32_t x26 = 3806U;
	int8_t x27 = 3;
	uint8_t x28 = 1U;
	uint32_t t0 = 4939855U;

	t0 = (x25*(x26>>(x27/x28)));

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t1 = 36265;

	t1 = (x37*(x38>>(x39/x40)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x41 = INT8_MAX;
	int8_t x42 = 9;
	uint16_t x43 = 13932U;
	uint64_t x44 = 57239LLU;
	volatile int32_t t2 = -1;

	t2 = (x41*(x42>>(x43/x44)));

	if (t2 != 1143) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x46 = INT8_MAX;
	static int8_t x47 = 1;
	int64_t x48 = INT64_MIN;
	volatile int32_t t3 = 16150634;

	t3 = (x45*(x46>>(x47/x48)));

	if (t3 != -16256) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x53 = UINT16_MAX;
	static int16_t x54 = INT16_MAX;
	volatile int16_t x55 = 2;
	int8_t x56 = -5;
	volatile int32_t t4 = 241;

	t4 = (x53*(x54>>(x55/x56)));

	if (t4 != 2147385345) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x62 = 1;
	int8_t x63 = 1;
	uint8_t x64 = 73U;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (x61*(x62>>(x63/x64)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x85 = INT8_MAX;
	int64_t x86 = 3318LL;
	uint32_t x87 = UINT32_MAX;
	int16_t x88 = -1;

	t6 = (x85*(x86>>(x87/x88)));

	if (t6 != 210693LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x98 = 19997LLU;
	int8_t x99 = -1;
	int64_t x100 = INT64_MIN;
	volatile uint64_t t7 = 3537926861LLU;

	t7 = (x97*(x98>>(x99/x100)));

	if (t7 != 36339805671381LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x154 = 14931U;
	static int8_t x155 = 63;
	static volatile int32_t t8 = -12;

	t8 = (x153*(x154>>(x155/x156)));

	if (t8 != 418068) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x189 = 350U;
	uint16_t x190 = 0U;
	int8_t x191 = -2;
	int16_t x192 = -567;
	volatile int32_t t9 = -1825876;

	t9 = (x189*(x190>>(x191/x192)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x199 = 74U;
	volatile uint64_t t10 = 212903LLU;

	t10 = (x197*(x198>>(x199/x200)));

	if (t10 != 18446744072483990528LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MAX;
	int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MIN;
	volatile uint32_t t11 = 13U;

	t11 = (x221*(x222>>(x223/x224)));

	if (t11 != 4294934529U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x233 = -1;
	static volatile uint8_t x234 = UINT8_MAX;
	uint16_t x235 = 170U;
	static volatile uint64_t x236 = 4417LLU;
	volatile int32_t t12 = 14;

	t12 = (x233*(x234>>(x235/x236)));

	if (t12 != -255) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x237 = -448;
	volatile uint16_t x238 = 909U;
	int16_t x240 = 44;
	int32_t t13 = -2957;

	t13 = (x237*(x238>>(x239/x240)));

	if (t13 != -407232) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x241 = INT16_MIN;
	static int8_t x242 = 0;
	uint16_t x243 = UINT16_MAX;
	static volatile uint32_t x244 = 250642U;
	volatile int32_t t14 = 0;

	t14 = (x241*(x242>>(x243/x244)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = 7;
	static volatile int64_t x276 = -42544018751012578LL;
	int32_t t15 = 3330873;

	t15 = (x273*(x274>>(x275/x276)));

	if (t15 != -229376) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x277 = 13U;
	int8_t x278 = INT8_MAX;
	int16_t x279 = -1;
	static int8_t x280 = INT8_MIN;
	int32_t t16 = -79491711;

	t16 = (x277*(x278>>(x279/x280)));

	if (t16 != 1651) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x281 = -49353546428LL;
	int8_t x282 = 12;
	volatile int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MAX;
	int64_t t17 = -87LL;

	t17 = (x281*(x282>>(x283/x284)));

	if (t17 != -592242557136LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x329 = -1;
	int64_t x330 = INT64_MAX;
	uint64_t x332 = UINT64_MAX;
	int64_t t18 = -54004182149LL;

	t18 = (x329*(x330>>(x331/x332)));

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x381 = 2798;
	uint16_t x383 = 0U;
	int32_t x384 = 640337;
	volatile int32_t t19 = 2510;

	t19 = (x381*(x382>>(x383/x384)));

	if (t19 != 5596) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x389 = INT16_MIN;
	static int8_t x391 = 1;
	uint16_t x392 = UINT16_MAX;
	volatile int64_t t20 = 3577239868546845LL;

	t20 = (x389*(x390>>(x391/x392)));

	if (t20 != -8374943744LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x409 = UINT32_MAX;
	uint16_t x410 = 1U;
	uint16_t x411 = 30U;
	uint32_t t21 = UINT32_MAX;

	t21 = (x409*(x410>>(x411/x412)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x445 = UINT16_MAX;
	uint16_t x446 = 23U;
	static uint32_t x447 = 133U;
	int8_t x448 = INT8_MIN;
	volatile int32_t t22 = 323682707;

	t22 = (x445*(x446>>(x447/x448)));

	if (t22 != 1507305) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x449 = 119051U;
	uint32_t x450 = 5970U;
	uint8_t x451 = 0U;
	volatile uint32_t x452 = 209U;

	t23 = (x449*(x450>>(x451/x452)));

	if (t23 != 710734470U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x473 = INT64_MIN;
	uint64_t x474 = UINT64_MAX;
	uint64_t x475 = 63LLU;
	volatile uint64_t x476 = 2LLU;
	volatile uint64_t t24 = 30627288LLU;

	t24 = (x473*(x474>>(x475/x476)));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x477 = 558616371U;
	uint8_t x478 = 81U;
	volatile int8_t x480 = INT8_MIN;
	uint32_t t25 = 1U;

	t25 = (x477*(x478>>(x479/x480)));

	if (t25 != 869818360U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x485 = -1;
	uint8_t x486 = 114U;
	volatile uint8_t x487 = UINT8_MAX;
	uint32_t x488 = 455U;
	volatile int32_t t26 = -62398920;

	t26 = (x485*(x486>>(x487/x488)));

	if (t26 != -114) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x497 = INT16_MAX;
	int8_t x499 = -1;
	int64_t x500 = INT64_MIN;

	t27 = (x497*(x498>>(x499/x500)));

	if (t27 != 18742724LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x503 = INT16_MIN;
	uint16_t x504 = UINT16_MAX;

	t28 = (x501*(x502>>(x503/x504)));

	if (t28 != 1341894) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x517 = -1;
	int32_t x518 = INT32_MAX;
	int32_t t29 = -2590959;

	t29 = (x517*(x518>>(x519/x520)));

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x525 = INT32_MAX;
	static volatile int8_t x526 = 0;
	int8_t x527 = -1;
	int16_t x528 = INT16_MAX;
	volatile int32_t t30 = 5262;

	t30 = (x525*(x526>>(x527/x528)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x533 = 275156570675LL;
	static uint8_t x534 = 0U;
	int32_t x535 = 7391781;
	int64_t x536 = INT64_MAX;
	volatile int64_t t31 = 1551631030962692LL;

	t31 = (x533*(x534>>(x535/x536)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x566 = UINT16_MAX;
	int32_t x568 = INT32_MIN;
	volatile uint64_t t32 = 21LLU;

	t32 = (x565*(x566>>(x567/x568)));

	if (t32 != 892770135938355LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x585 = -1;
	static volatile int16_t x586 = INT16_MAX;
	uint8_t x587 = UINT8_MAX;
	int16_t x588 = INT16_MIN;

	t33 = (x585*(x586>>(x587/x588)));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x589 = 3950152623438335340LLU;
	int16_t x590 = 0;
	int16_t x591 = 1;
	int8_t x592 = -7;
	volatile uint64_t t34 = 397LLU;

	t34 = (x589*(x590>>(x591/x592)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x598 = 350114492898504LLU;
	static uint8_t x599 = 14U;
	static int16_t x600 = INT16_MIN;

	t35 = (x597*(x598>>(x599/x600)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x609 = 15LL;
	int32_t x611 = INT32_MIN;

	t36 = (x609*(x610>>(x611/x612)));

	if (t36 != 1905LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x614 = 0U;
	int32_t x615 = -61356;
	static uint32_t x616 = UINT32_MAX;
	volatile uint32_t t37 = 217636954U;

	t37 = (x613*(x614>>(x615/x616)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x618 = UINT16_MAX;
	int16_t x619 = -1;
	int64_t x620 = -1LL;
	volatile int32_t t38 = 50112185;

	t38 = (x617*(x618>>(x619/x620)));

	if (t38 != 8355585) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x633 = -4320LL;
	static volatile int16_t x635 = -1;
	static volatile int64_t x636 = INT64_MIN;
	static int64_t t39 = 221LL;

	t39 = (x633*(x634>>(x635/x636)));

	if (t39 != -548640LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x641 = 5413;
	int32_t x643 = -50101;
	int64_t x644 = INT64_MIN;
	int64_t t40 = 895413LL;

	t40 = (x641*(x642>>(x643/x644)));

	if (t40 != 746994LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x645 = 1632U;
	int8_t x646 = 1;
	int8_t x647 = 3;
	int64_t x648 = INT64_MAX;
	static volatile uint32_t t41 = 46292U;

	t41 = (x645*(x646>>(x647/x648)));

	if (t41 != 1632U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x649 = INT8_MIN;
	static int16_t x650 = INT16_MAX;
	static uint32_t x651 = 17772U;
	volatile int32_t t42 = -2871664;

	t42 = (x649*(x650>>(x651/x652)));

	if (t42 != -4194176) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x653 = 0;
	uint32_t x656 = 196U;

	t43 = (x653*(x654>>(x655/x656)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x669 = 0;
	uint32_t x670 = 252U;
	int32_t x671 = -1;
	int8_t x672 = INT8_MIN;
	volatile uint32_t t44 = 65532U;

	t44 = (x669*(x670>>(x671/x672)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x673 = -1;
	uint64_t x674 = 178991097LLU;
	static int64_t x675 = -2526637800859137715LL;
	int64_t x676 = INT64_MAX;

	t45 = (x673*(x674>>(x675/x676)));

	if (t45 != 18446744073530560519LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x685 = -1;
	uint8_t x686 = UINT8_MAX;
	int8_t x687 = -1;
	int32_t x688 = INT32_MAX;
	volatile int32_t t46 = 716822822;

	t46 = (x685*(x686>>(x687/x688)));

	if (t46 != -255) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x698 = UINT16_MAX;
	int32_t x699 = -1;
	uint32_t t47 = 925U;

	t47 = (x697*(x698>>(x699/x700)));

	if (t47 != 4294934529U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x703 = -1;
	int8_t x704 = -2;
	static uint64_t t48 = 2362510755274118LLU;

	t48 = (x701*(x702>>(x703/x704)));

	if (t48 != 18150336740042692072LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x710 = 29544523U;
	int16_t x711 = -1;
	static volatile int64_t x712 = INT64_MAX;
	uint32_t t49 = 3U;

	t49 = (x709*(x710>>(x711/x712)));

	if (t49 != 443167845U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x713 = -11812;
	volatile int64_t x714 = 1244996LL;
	volatile uint64_t x715 = 25802215599LLU;
	int64_t x716 = INT64_MIN;
	volatile int64_t t50 = 4712LL;

	t50 = (x713*(x714>>(x715/x716)));

	if (t50 != -14705892752LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x743 = INT8_MAX;
	uint8_t x744 = 7U;
	volatile int32_t t51 = -82034;

	t51 = (x741*(x742>>(x743/x744)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x754 = 23U;
	uint64_t x755 = UINT64_MAX;
	volatile int64_t t52 = 141108LL;

	t52 = (x753*(x754>>(x755/x756)));

	if (t52 != -138119700774LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x761 = -1;
	int16_t x763 = INT16_MAX;
	volatile int64_t x764 = 273255127533465405LL;
	volatile int64_t t53 = -671LL;

	t53 = (x761*(x762>>(x763/x764)));

	if (t53 != -458502313LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x793 = 1565072U;
	uint32_t x794 = 7U;
	int8_t x795 = INT8_MIN;
	int8_t x796 = INT8_MIN;
	volatile uint32_t t54 = 7540225U;

	t54 = (x793*(x794>>(x795/x796)));

	if (t54 != 4695216U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x809 = -1;
	int16_t x810 = 0;
	int8_t x811 = INT8_MIN;
	static volatile int64_t x812 = INT64_MAX;
	int32_t t55 = 126;

	t55 = (x809*(x810>>(x811/x812)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x813 = INT32_MIN;
	static uint64_t x814 = 226916LLU;
	volatile int16_t x815 = -1;
	int8_t x816 = INT8_MAX;
	volatile uint64_t t56 = 249761201217LLU;

	t56 = (x813*(x814>>(x815/x816)));

	if (t56 != 18446256775310082048LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x821 = -1;
	static uint32_t x822 = 287671891U;
	int16_t x823 = -2;
	static volatile uint8_t x824 = UINT8_MAX;
	static uint32_t t57 = 19U;

	t57 = (x821*(x822>>(x823/x824)));

	if (t57 != 4007295405U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x845 = INT32_MIN;
	static volatile uint32_t x846 = 46U;
	static uint16_t x847 = 143U;

	t58 = (x845*(x846>>(x847/x848)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x857 = 91609;
	uint32_t x858 = 9549930U;
	static int64_t x860 = INT64_MIN;

	t59 = (x857*(x858>>(x859/x860)));

	if (t59 != 2981176282U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x862 = 12666783361830LL;
	uint32_t x863 = 115U;
	int8_t x864 = -2;
	static volatile int64_t t60 = 814641LL;

	t60 = (x861*(x862>>(x863/x864)));

	if (t60 != -12666783361830LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x869 = UINT64_MAX;
	uint16_t x870 = UINT16_MAX;
	int16_t x871 = -7;
	static volatile uint64_t t61 = 65063038LLU;

	t61 = (x869*(x870>>(x871/x872)));

	if (t61 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x877 = UINT8_MAX;
	uint16_t x878 = 4U;
	int16_t x879 = 15;
	volatile uint64_t x880 = 31252958LLU;

	t62 = (x877*(x878>>(x879/x880)));

	if (t62 != 1020) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x882 = 11317;
	int64_t x883 = 14320312LL;
	static uint32_t x884 = UINT32_MAX;
	volatile int64_t t63 = 170897906866201061LL;

	t63 = (x881*(x882>>(x883/x884)));

	if (t63 != -11317LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x901 = 111U;
	uint8_t x902 = 0U;
	static volatile int32_t x903 = -1;
	int32_t x904 = INT32_MIN;
	int32_t t64 = 99884;

	t64 = (x901*(x902>>(x903/x904)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x905 = -1;
	int16_t x906 = INT16_MAX;
	int16_t x907 = INT16_MIN;
	int16_t x908 = INT16_MIN;
	volatile int32_t t65 = -77647;

	t65 = (x905*(x906>>(x907/x908)));

	if (t65 != -16383) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x913 = 0;
	static uint32_t x914 = UINT32_MAX;
	int16_t x915 = -1;
	static int16_t x916 = -3752;
	volatile uint32_t t66 = 49022275U;

	t66 = (x913*(x914>>(x915/x916)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x929 = INT16_MIN;
	int64_t x930 = 4106328826762LL;
	volatile int32_t x931 = -1;
	int64_t x932 = INT64_MIN;
	volatile int64_t t67 = -431165LL;

	t67 = (x929*(x930>>(x931/x932)));

	if (t67 != -134556182995337216LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x937 = -1;
	static volatile uint64_t x938 = 134288LLU;
	volatile int32_t x940 = INT32_MAX;
	volatile uint64_t t68 = 2070801LLU;

	t68 = (x937*(x938>>(x939/x940)));

	if (t68 != 18446744073709417328LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x941 = -1;
	uint64_t x942 = 682470514640328LLU;
	uint64_t x943 = 2098063096865125LLU;
	volatile int16_t x944 = -2;
	volatile uint64_t t69 = 991866LLU;

	t69 = (x941*(x942>>(x943/x944)));

	if (t69 != 18446061603194911288LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x949 = INT8_MIN;
	uint64_t x950 = 4213937738975314406LLU;
	int8_t x951 = 0;
	volatile int32_t x952 = -296;
	volatile uint64_t t70 = 110555270428574483LLU;

	t70 = (x949*(x950>>(x951/x952)));

	if (t70 != 14018291622446304512LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x953 = -1;
	uint16_t x954 = UINT16_MAX;
	int64_t x955 = -18324LL;

	t71 = (x953*(x954>>(x955/x956)));

	if (t71 != -65535) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1014 = 21LLU;
	volatile int8_t x1015 = -1;
	int64_t x1016 = INT64_MAX;
	uint64_t t72 = 1124587557694281483LLU;

	t72 = (x1013*(x1014>>(x1015/x1016)));

	if (t72 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1025 = -1;
	uint16_t x1026 = 0U;
	static int8_t x1027 = INT8_MIN;
	int32_t t73 = -1564;

	t73 = (x1025*(x1026>>(x1027/x1028)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1046 = 265453772LLU;
	uint64_t x1047 = 1569853729631192LLU;
	int32_t x1048 = -1;
	uint64_t t74 = 533543835843LLU;

	t74 = (x1045*(x1046>>(x1047/x1048)));

	if (t74 != 18446744073444097844LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1061 = 2692165LLU;
	volatile int64_t x1063 = 2243LL;
	uint32_t x1064 = 58335U;
	static volatile uint64_t t75 = 55671284LLU;

	t75 = (x1061*(x1062>>(x1063/x1064)));

	if (t75 != 686502075LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1074 = INT16_MAX;
	volatile uint16_t x1075 = 58U;
	int64_t x1076 = INT64_MIN;
	static uint32_t t76 = 15U;

	t76 = (x1073*(x1074>>(x1075/x1076)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1093 = -1;
	int8_t x1095 = -1;
	volatile int32_t t77 = 1456;

	t77 = (x1093*(x1094>>(x1095/x1096)));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1097 = 2067U;
	uint16_t x1098 = UINT16_MAX;
	int64_t x1099 = -1LL;
	volatile int32_t t78 = 19;

	t78 = (x1097*(x1098>>(x1099/x1100)));

	if (t78 != 67729389) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1109 = UINT16_MAX;
	int16_t x1110 = INT16_MAX;
	uint8_t x1111 = 1U;
	int32_t t79 = 2;

	t79 = (x1109*(x1110>>(x1111/x1112)));

	if (t79 != 2147385345) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1121 = 119U;
	int64_t x1122 = INT64_MAX;
	int16_t x1123 = -48;
	static int16_t x1124 = -1;
	volatile int64_t t80 = -8869LL;

	t80 = (x1121*(x1122>>(x1123/x1124)));

	if (t80 != 3899273LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x1133 = 57;
	uint64_t x1134 = 579550096LLU;
	uint16_t x1135 = UINT16_MAX;

	t81 = (x1133*(x1134>>(x1135/x1136)));

	if (t81 != 33034355472LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x1157 = -120875;
	volatile int16_t x1158 = 6616;
	int8_t x1159 = INT8_MAX;

	t82 = (x1157*(x1158>>(x1159/x1160)));

	if (t82 != -799709000) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x1165 = 919U;
	static uint64_t x1166 = 7631007346LLU;
	int8_t x1167 = -3;
	int8_t x1168 = INT8_MAX;
	uint64_t t83 = 315426132LLU;

	t83 = (x1165*(x1166>>(x1167/x1168)));

	if (t83 != 7012895750974LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1178 = 2619U;
	uint16_t x1179 = UINT16_MAX;
	uint16_t x1180 = UINT16_MAX;

	t84 = (x1177*(x1178>>(x1179/x1180)));

	if (t84 != 166243) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1185 = 184879LLU;
	uint32_t x1186 = UINT32_MAX;
	int8_t x1187 = -3;
	int8_t x1188 = -1;
	volatile uint64_t t85 = 1032545042637544777LLU;

	t85 = (x1185*(x1186>>(x1187/x1188)));

	if (t85 != 99256157154769LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1189 = INT64_MIN;
	uint64_t x1190 = UINT64_MAX;
	int32_t x1192 = INT32_MIN;
	static uint64_t t86 = 23944033744LLU;

	t86 = (x1189*(x1190>>(x1191/x1192)));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1206 = 166630697202LLU;
	static uint64_t x1207 = 3636LLU;
	int64_t x1208 = 11228782300LL;

	t87 = (x1205*(x1206>>(x1207/x1208)));

	if (t87 != 11098183978056679424LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1214 = INT32_MAX;
	int16_t x1215 = -13;
	int8_t x1216 = INT8_MAX;
	static volatile uint32_t t88 = 195U;

	t88 = (x1213*(x1214>>(x1215/x1216)));

	if (t88 != 2147483641U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1221 = -80068646LL;
	volatile uint64_t x1222 = 26599889863400LLU;
	uint32_t x1223 = 37531U;
	int32_t x1224 = INT32_MAX;
	uint64_t t89 = 88356543500455LLU;

	t89 = (x1221*(x1222>>(x1223/x1224)));

	if (t89 != 10005147438745031056LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1225 = 15233362LLU;
	static volatile int16_t x1227 = -1;
	volatile int32_t x1228 = INT32_MIN;
	uint64_t t90 = 3336689LLU;

	t90 = (x1225*(x1226>>(x1227/x1228)));

	if (t90 != 624567842LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1237 = 7;
	volatile uint16_t x1238 = 450U;
	int16_t x1239 = INT16_MIN;
	int16_t x1240 = INT16_MIN;
	static int32_t t91 = -64708;

	t91 = (x1237*(x1238>>(x1239/x1240)));

	if (t91 != 1575) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x1249 = 54U;
	static uint8_t x1250 = 3U;
	uint32_t x1251 = 263640150U;
	volatile int16_t x1252 = INT16_MIN;
	int32_t t92 = -4253;

	t92 = (x1249*(x1250>>(x1251/x1252)));

	if (t92 != 162) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x1281 = 7936;
	uint64_t x1282 = UINT64_MAX;
	static volatile int8_t x1283 = 6;
	uint32_t x1284 = 520730639U;
	uint64_t t93 = 51676724LLU;

	t93 = (x1281*(x1282>>(x1283/x1284)));

	if (t93 != 18446744073709543680LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1297 = INT8_MIN;
	uint8_t x1298 = 1U;
	int8_t x1299 = INT8_MIN;
	uint16_t x1300 = 268U;
	static volatile int32_t t94 = -369409616;

	t94 = (x1297*(x1298>>(x1299/x1300)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1313 = -1LL;
	uint64_t x1314 = 310361304LLU;
	uint32_t x1316 = 19205U;
	volatile uint64_t t95 = 1353342829280386LLU;

	t95 = (x1313*(x1314>>(x1315/x1316)));

	if (t95 != 18446744073554370964LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1317 = INT64_MAX;
	static uint32_t x1319 = 593538288U;
	volatile uint64_t t96 = 8715211598583LLU;

	t96 = (x1317*(x1318>>(x1319/x1320)));

	if (t96 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1333 = -1;
	int32_t x1334 = INT32_MAX;
	volatile int32_t t97 = 545467;

	t97 = (x1333*(x1334>>(x1335/x1336)));

	if (t97 != -1073741823) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1345 = -1;
	int16_t x1347 = 4545;
	static volatile int64_t x1348 = INT64_MIN;
	uint64_t t98 = 1119599528545157163LLU;

	t98 = (x1345*(x1346>>(x1347/x1348)));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1367 = -1LL;
	int32_t x1368 = INT32_MIN;
	int64_t t99 = -27LL;

	t99 = (x1365*(x1366>>(x1367/x1368)));

	if (t99 != -5820837267453LL) { NG(); } else { ; }
	
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

