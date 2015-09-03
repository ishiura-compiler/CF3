#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = 40;
volatile uint64_t x7 = 29LLU;
volatile int64_t x32 = 978524404LL;
uint64_t t3 = 15LLU;
static int16_t x100 = 936;
int32_t x110 = -559623;
int64_t x119 = INT64_MIN;
uint16_t x129 = 3058U;
volatile uint64_t t9 = UINT64_MAX;
int32_t x144 = -1;
int16_t x156 = 909;
volatile uint16_t x191 = 4037U;
int64_t t15 = 15352LL;
uint32_t x261 = UINT32_MAX;
volatile int16_t x262 = -15817;
int8_t x263 = -1;
uint32_t x291 = 56297U;
uint32_t x295 = 13473U;
int16_t x312 = -1;
static volatile int8_t x347 = -1;
volatile int32_t t23 = 10469;
uint64_t x384 = UINT64_MAX;
volatile int8_t x397 = INT8_MIN;
static int32_t t27 = -1310557;
static volatile uint32_t t28 = UINT32_MAX;
uint32_t x459 = 26U;
volatile int64_t x460 = INT64_MAX;
static int8_t x469 = -1;
int16_t x483 = -1;
int32_t t33 = 9020139;
volatile uint64_t t34 = 13200806073LLU;
int64_t x527 = -31421014453606LL;
uint64_t x542 = 15LLU;
static volatile int64_t x543 = INT64_MIN;
int64_t x549 = -1LL;
uint8_t x551 = UINT8_MAX;
int64_t x564 = INT64_MAX;
volatile int16_t x573 = INT16_MIN;
volatile uint32_t x576 = UINT32_MAX;
uint8_t x582 = UINT8_MAX;
volatile uint64_t t41 = 8631051LLU;
uint8_t x588 = 53U;
uint16_t x602 = 29U;
volatile int32_t x604 = INT32_MAX;
volatile int8_t x609 = INT8_MIN;
uint32_t x624 = 2492943U;
int64_t x629 = INT64_MIN;
static volatile uint32_t x659 = 987466243U;
volatile int32_t x660 = INT32_MIN;
volatile int16_t x666 = 203;
int32_t t49 = 1463726;
int16_t x686 = INT16_MAX;
volatile int64_t x693 = -1LL;
int32_t x708 = -391;
int16_t x715 = INT16_MIN;
int32_t x718 = 6209373;
int64_t x725 = INT64_MIN;
uint64_t x728 = UINT64_MAX;
uint64_t x765 = 4386LLU;
volatile int8_t x783 = -1;
static uint32_t x790 = UINT32_MAX;
volatile uint32_t x795 = 4494U;
int16_t x796 = -1;
int16_t x807 = INT16_MIN;
static int32_t t63 = -35;
volatile int8_t x813 = INT8_MAX;
volatile int64_t t67 = INT64_MIN;
int64_t t68 = 0LL;
int64_t x914 = INT64_MAX;
uint32_t x928 = UINT32_MAX;
int8_t x938 = INT8_MAX;
static volatile int32_t t73 = 126;
int16_t x996 = INT16_MAX;
uint64_t x1010 = UINT64_MAX;
uint64_t t78 = 14740695081292LLU;
int64_t x1023 = INT64_MIN;
static uint16_t x1032 = UINT16_MAX;
static uint64_t x1037 = 15947LLU;
volatile uint64_t x1039 = 11881LLU;
int64_t t84 = -183247753LL;
volatile int8_t x1055 = 1;
volatile uint64_t t85 = 242307731111502509LLU;
uint8_t x1083 = 10U;
int64_t x1106 = INT64_MAX;
volatile int8_t x1123 = INT8_MIN;
volatile int64_t t90 = INT64_MIN;
volatile int64_t x1126 = -1LL;
int64_t x1129 = -165754017511LL;
int32_t x1133 = INT32_MIN;
uint64_t x1139 = 903178LLU;
int8_t x1140 = -7;
volatile int32_t x1208 = -702;
static int32_t t96 = 10992968;
static int64_t t97 = INT64_MIN;
int32_t x1251 = INT32_MIN;
uint16_t x1289 = 3U;
int32_t x1290 = -1;
int32_t t99 = -104;


void f0(void) {
	uint64_t x6 = 4787907LLU;
	int16_t x8 = -12789;
	uint64_t t0 = 22416LLU;

	t0 = (x5/(x6&(x7<=x8)));

	if (t0 != 40LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x29 = INT8_MAX;
	int64_t x30 = INT64_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile int64_t t1 = -156LL;

	t1 = (x29/(x30&(x31<=x32)));

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x38 = 1U;
	int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MAX;
	static volatile int64_t t2 = INT64_MIN;

	t2 = (x37/(x38&(x39<=x40)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x53 = INT32_MIN;
	static uint64_t x54 = 1LLU;
	volatile int64_t x55 = -3611688064769LL;
	int64_t x56 = 137278887393LL;

	t3 = (x53/(x54&(x55<=x56)));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x97 = INT8_MIN;
	volatile int16_t x98 = -1;
	int64_t x99 = 60LL;
	volatile int32_t t4 = 1;

	t4 = (x97/(x98&(x99<=x100)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x109 = -1;
	volatile int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t5 = -1410;

	t5 = (x109/(x110&(x111<=x112)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x113 = INT64_MIN;
	int32_t x114 = -1;
	uint64_t x115 = 31498LLU;
	volatile uint64_t x116 = 1792607664097149LLU;
	volatile int64_t t6 = INT64_MIN;

	t6 = (x113/(x114&(x115<=x116)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x117 = INT32_MAX;
	volatile uint8_t x118 = 59U;
	static int8_t x120 = 1;
	volatile int32_t t7 = INT32_MAX;

	t7 = (x117/(x118&(x119<=x120)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = INT64_MIN;
	volatile uint8_t x132 = 2U;
	uint64_t t8 = 344828261922799LLU;

	t8 = (x129/(x130&(x131<=x132)));

	if (t8 != 3058LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x137 = -1;
	uint64_t x138 = 7239LLU;
	uint8_t x139 = 1U;
	int64_t x140 = INT64_MAX;

	t9 = (x137/(x138&(x139<=x140)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x141 = UINT16_MAX;
	uint32_t x142 = UINT32_MAX;
	volatile int16_t x143 = INT16_MIN;
	volatile uint32_t t10 = 1635604U;

	t10 = (x141/(x142&(x143<=x144)));

	if (t10 != 65535U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x149 = 17685143LLU;
	uint16_t x150 = 189U;
	uint16_t x151 = 213U;
	volatile int64_t x152 = INT64_MAX;
	uint64_t t11 = 46087181373880664LLU;

	t11 = (x149/(x150&(x151<=x152)));

	if (t11 != 17685143LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MAX;
	volatile int64_t x155 = -1LL;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x153/(x154&(x155<=x156)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x189 = 6215205U;
	int16_t x190 = -1;
	volatile uint64_t x192 = 3118633832LLU;
	uint32_t t13 = 250728819U;

	t13 = (x189/(x190&(x191<=x192)));

	if (t13 != 6215205U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MAX;
	int64_t x199 = -49405610350070359LL;
	int16_t x200 = INT16_MIN;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x197/(x198&(x199<=x200)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x221 = -1LL;
	volatile int8_t x222 = INT8_MAX;
	int8_t x223 = -3;
	static int32_t x224 = -1;

	t15 = (x221/(x222&(x223<=x224)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x241 = INT32_MAX;
	uint32_t x242 = 7156211U;
	static uint64_t x243 = 3884LLU;
	volatile int32_t x244 = -63381746;
	uint32_t t16 = 4351U;

	t16 = (x241/(x242&(x243<=x244)));

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x249 = INT32_MAX;
	static int32_t x250 = -1;
	uint16_t x251 = 3326U;
	volatile int64_t x252 = INT64_MAX;
	volatile int32_t t17 = INT32_MAX;

	t17 = (x249/(x250&(x251<=x252)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x264 = UINT8_MAX;
	uint32_t t18 = UINT32_MAX;

	t18 = (x261/(x262&(x263<=x264)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x289 = -1;
	static uint64_t x290 = 2957337278592793LLU;
	int8_t x292 = -3;
	static uint64_t t19 = UINT64_MAX;

	t19 = (x289/(x290&(x291<=x292)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x293 = INT64_MIN;
	int64_t x294 = -1LL;
	static int32_t x296 = INT32_MAX;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x293/(x294&(x295<=x296)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x309 = -16687600;
	int16_t x310 = 683;
	uint64_t x311 = UINT64_MAX;
	static int32_t t21 = 15526584;

	t21 = (x309/(x310&(x311<=x312)));

	if (t21 != -16687600) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	int64_t x348 = 4233927335LL;
	volatile int32_t t22 = 44941957;

	t22 = (x345/(x346&(x347<=x348)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x357 = -66;
	int8_t x358 = 1;
	int32_t x359 = INT32_MIN;
	static int8_t x360 = 45;

	t23 = (x357/(x358&(x359<=x360)));

	if (t23 != -66) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x361 = UINT64_MAX;
	static uint32_t x362 = 697463U;
	int32_t x363 = INT32_MIN;
	uint16_t x364 = UINT16_MAX;
	static uint64_t t24 = UINT64_MAX;

	t24 = (x361/(x362&(x363<=x364)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x373 = 0U;
	static uint64_t x374 = 20003100309559783LLU;
	int8_t x375 = INT8_MIN;
	int8_t x376 = -1;
	uint64_t t25 = 1684569573LLU;

	t25 = (x373/(x374&(x375<=x376)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x381 = INT64_MIN;
	static uint32_t x382 = 1051449755U;
	uint32_t x383 = UINT32_MAX;
	int64_t t26 = INT64_MIN;

	t26 = (x381/(x382&(x383<=x384)));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x398 = -29;
	static uint64_t x399 = 25566442176895LLU;
	volatile int64_t x400 = INT64_MIN;

	t27 = (x397/(x398&(x399<=x400)));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x421 = UINT32_MAX;
	static volatile int16_t x422 = -1;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = 0U;

	t28 = (x421/(x422&(x423<=x424)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x433 = 3260119846LL;
	int64_t x434 = -1LL;
	volatile uint32_t x435 = 7347581U;
	static int32_t x436 = -5040179;
	int64_t t29 = 70865796LL;

	t29 = (x433/(x434&(x435<=x436)));

	if (t29 != 3260119846LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x441 = 840U;
	static int8_t x442 = INT8_MAX;
	int8_t x443 = -1;
	int32_t x444 = -1;
	int32_t t30 = -2725;

	t30 = (x441/(x442&(x443<=x444)));

	if (t30 != 840) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x457 = 2U;
	uint32_t x458 = UINT32_MAX;
	uint32_t t31 = 590037186U;

	t31 = (x457/(x458&(x459<=x460)));

	if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x470 = 280831014860601041LLU;
	static int64_t x471 = INT64_MIN;
	int16_t x472 = -13805;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x469/(x470&(x471<=x472)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x481 = INT8_MIN;
	uint8_t x482 = 11U;
	int8_t x484 = INT8_MAX;

	t33 = (x481/(x482&(x483<=x484)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x501 = 34646LLU;
	static uint32_t x502 = UINT32_MAX;
	int64_t x503 = INT64_MIN;
	volatile int32_t x504 = -1;

	t34 = (x501/(x502&(x503<=x504)));

	if (t34 != 34646LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x525 = UINT32_MAX;
	static uint32_t x526 = UINT32_MAX;
	volatile int64_t x528 = 75753758916041857LL;
	static volatile uint32_t t35 = UINT32_MAX;

	t35 = (x525/(x526&(x527<=x528)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x541 = INT32_MAX;
	uint16_t x544 = 99U;
	volatile uint64_t t36 = 12201LLU;

	t36 = (x541/(x542&(x543<=x544)));

	if (t36 != 2147483647LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x545 = UINT32_MAX;
	uint8_t x546 = UINT8_MAX;
	uint32_t x547 = 1145U;
	static int16_t x548 = INT16_MIN;
	static volatile uint32_t t37 = UINT32_MAX;

	t37 = (x545/(x546&(x547<=x548)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x550 = UINT16_MAX;
	volatile uint16_t x552 = 1505U;
	int64_t t38 = 2250332710959LL;

	t38 = (x549/(x550&(x551<=x552)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x561 = 226U;
	uint32_t x562 = 108311U;
	volatile int32_t x563 = INT32_MIN;
	volatile uint32_t t39 = 101800810U;

	t39 = (x561/(x562&(x563<=x564)));

	if (t39 != 226U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x574 = -1891501;
	volatile uint32_t x575 = 8U;
	volatile int32_t t40 = 128957648;

	t40 = (x573/(x574&(x575<=x576)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x581 = 2105716735749LLU;
	uint32_t x583 = 6613U;
	int16_t x584 = -1;

	t41 = (x581/(x582&(x583<=x584)));

	if (t41 != 2105716735749LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x585 = INT32_MAX;
	int32_t x586 = -43;
	int8_t x587 = INT8_MIN;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x585/(x586&(x587<=x588)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x601 = 26285U;
	uint16_t x603 = 50U;
	static int32_t t43 = -234;

	t43 = (x601/(x602&(x603<=x604)));

	if (t43 != 26285) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x610 = INT8_MAX;
	uint32_t x611 = 5U;
	int16_t x612 = INT16_MIN;
	static int32_t t44 = 156489425;

	t44 = (x609/(x610&(x611<=x612)));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x617 = 3U;
	volatile int32_t x618 = INT32_MAX;
	int32_t x619 = -1;
	uint8_t x620 = 22U;
	volatile int32_t t45 = -23782;

	t45 = (x617/(x618&(x619<=x620)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x621 = 499571455015934297LL;
	static uint64_t x622 = 52165675LLU;
	uint8_t x623 = 56U;
	volatile uint64_t t46 = 61LLU;

	t46 = (x621/(x622&(x623<=x624)));

	if (t46 != 499571455015934297LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x630 = 1;
	static int64_t x631 = -130346LL;
	static uint32_t x632 = 1122589674U;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x629/(x630&(x631<=x632)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x657 = INT16_MAX;
	volatile int32_t x658 = -1;
	int32_t t48 = 1371;

	t48 = (x657/(x658&(x659<=x660)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x665 = INT8_MIN;
	uint8_t x667 = 121U;
	uint64_t x668 = 1385418953713636LLU;

	t49 = (x665/(x666&(x667<=x668)));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x673 = INT8_MIN;
	int32_t x674 = -1;
	static int32_t x675 = -419;
	volatile int8_t x676 = -56;
	volatile int32_t t50 = 0;

	t50 = (x673/(x674&(x675<=x676)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x685 = 2600669U;
	int16_t x687 = 12;
	uint16_t x688 = UINT16_MAX;
	static uint32_t t51 = 29280U;

	t51 = (x685/(x686&(x687<=x688)));

	if (t51 != 2600669U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x694 = INT64_MAX;
	int64_t x695 = 2708LL;
	volatile int16_t x696 = INT16_MAX;
	volatile int64_t t52 = 111239494LL;

	t52 = (x693/(x694&(x695<=x696)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x705 = INT64_MIN;
	uint8_t x706 = 1U;
	uint32_t x707 = 33537384U;
	volatile int64_t t53 = INT64_MIN;

	t53 = (x705/(x706&(x707<=x708)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x713 = -1LL;
	volatile uint32_t x714 = UINT32_MAX;
	int16_t x716 = INT16_MIN;
	static volatile int64_t t54 = 48238937LL;

	t54 = (x713/(x714&(x715<=x716)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x717 = 466;
	int64_t x719 = -1LL;
	volatile uint32_t x720 = 114169626U;
	int32_t t55 = 453478;

	t55 = (x717/(x718&(x719<=x720)));

	if (t55 != 466) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x726 = -1;
	uint64_t x727 = UINT64_MAX;
	int64_t t56 = INT64_MIN;

	t56 = (x725/(x726&(x727<=x728)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x729 = UINT32_MAX;
	int8_t x730 = 1;
	int8_t x731 = INT8_MIN;
	uint8_t x732 = UINT8_MAX;
	static uint32_t t57 = UINT32_MAX;

	t57 = (x729/(x730&(x731<=x732)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x766 = 529U;
	volatile uint8_t x767 = 26U;
	int32_t x768 = INT32_MAX;
	static uint64_t t58 = 13713LLU;

	t58 = (x765/(x766&(x767<=x768)));

	if (t58 != 4386LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x769 = INT32_MAX;
	volatile uint8_t x770 = 1U;
	volatile uint8_t x771 = 20U;
	uint64_t x772 = UINT64_MAX;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x769/(x770&(x771<=x772)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x781 = 22364U;
	uint16_t x782 = 835U;
	uint16_t x784 = 14U;
	int32_t t60 = -16775347;

	t60 = (x781/(x782&(x783<=x784)));

	if (t60 != 22364) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x789 = 140008032U;
	uint64_t x791 = 80LLU;
	int8_t x792 = INT8_MIN;
	static volatile uint32_t t61 = 304U;

	t61 = (x789/(x790&(x791<=x792)));

	if (t61 != 140008032U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x793 = INT16_MAX;
	int8_t x794 = -1;
	int32_t t62 = 19959070;

	t62 = (x793/(x794&(x795<=x796)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x805 = 1U;
	int32_t x806 = 1929;
	int32_t x808 = 20;

	t63 = (x805/(x806&(x807<=x808)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x814 = UINT16_MAX;
	int16_t x815 = INT16_MIN;
	volatile int16_t x816 = INT16_MIN;
	volatile int32_t t64 = -12215779;

	t64 = (x813/(x814&(x815<=x816)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x853 = -1LL;
	int64_t x854 = INT64_MAX;
	int64_t x855 = INT64_MIN;
	int32_t x856 = -679641143;
	int64_t t65 = 72772LL;

	t65 = (x853/(x854&(x855<=x856)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x857 = -1;
	volatile int8_t x858 = -1;
	int32_t x859 = -1;
	int64_t x860 = INT64_MAX;
	int32_t t66 = 771066;

	t66 = (x857/(x858&(x859<=x860)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x881 = INT64_MIN;
	int8_t x882 = -1;
	int32_t x883 = INT32_MIN;
	volatile int16_t x884 = INT16_MAX;

	t67 = (x881/(x882&(x883<=x884)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x889 = -1;
	int64_t x890 = INT64_MAX;
	uint32_t x891 = UINT32_MAX;
	static int64_t x892 = INT64_MAX;

	t68 = (x889/(x890&(x891<=x892)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x913 = INT32_MIN;
	int32_t x915 = INT32_MIN;
	int16_t x916 = -1;
	static int64_t t69 = 533610383835071LL;

	t69 = (x913/(x914&(x915<=x916)));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x925 = -1;
	int64_t x926 = INT64_MAX;
	int16_t x927 = 15472;
	volatile int64_t t70 = -266379705603LL;

	t70 = (x925/(x926&(x927<=x928)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x929 = -1;
	int16_t x930 = 111;
	volatile int64_t x931 = INT64_MIN;
	int32_t x932 = 564;
	int32_t t71 = 121;

	t71 = (x929/(x930&(x931<=x932)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x937 = 1403;
	static int8_t x939 = INT8_MIN;
	int8_t x940 = INT8_MIN;
	volatile int32_t t72 = -62328457;

	t72 = (x937/(x938&(x939<=x940)));

	if (t72 != 1403) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x941 = UINT16_MAX;
	int32_t x942 = 40214185;
	uint64_t x943 = 10LLU;
	int16_t x944 = 57;

	t73 = (x941/(x942&(x943<=x944)));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x953 = 497U;
	int16_t x954 = INT16_MAX;
	uint8_t x955 = 21U;
	volatile int64_t x956 = 300936170LL;
	volatile int32_t t74 = -5794;

	t74 = (x953/(x954&(x955<=x956)));

	if (t74 != 497) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x965 = -1;
	volatile uint16_t x966 = 22669U;
	static volatile uint16_t x967 = UINT16_MAX;
	int64_t x968 = 36948804LL;
	int32_t t75 = -751885;

	t75 = (x965/(x966&(x967<=x968)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x981 = INT16_MIN;
	uint64_t x982 = UINT64_MAX;
	int64_t x983 = -31LL;
	int16_t x984 = 9323;
	uint64_t t76 = 5220LLU;

	t76 = (x981/(x982&(x983<=x984)));

	if (t76 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x993 = 125608LLU;
	uint32_t x994 = UINT32_MAX;
	int16_t x995 = INT16_MAX;
	volatile uint64_t t77 = 902LLU;

	t77 = (x993/(x994&(x995<=x996)));

	if (t77 != 125608LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1009 = UINT16_MAX;
	int64_t x1011 = 0LL;
	uint16_t x1012 = UINT16_MAX;

	t78 = (x1009/(x1010&(x1011<=x1012)));

	if (t78 != 65535LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x1021 = 17;
	static int64_t x1022 = -1LL;
	int16_t x1024 = INT16_MIN;
	int64_t t79 = -100927020622221875LL;

	t79 = (x1021/(x1022&(x1023<=x1024)));

	if (t79 != 17LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1029 = 4477;
	static uint16_t x1030 = 12737U;
	static int8_t x1031 = 55;
	volatile int32_t t80 = 162841;

	t80 = (x1029/(x1030&(x1031<=x1032)));

	if (t80 != 4477) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x1038 = INT32_MAX;
	int64_t x1040 = -715143546848092LL;
	uint64_t t81 = 304899971603031LLU;

	t81 = (x1037/(x1038&(x1039<=x1040)));

	if (t81 != 15947LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x1041 = INT32_MIN;
	volatile int8_t x1042 = INT8_MAX;
	static int32_t x1043 = INT32_MIN;
	int32_t x1044 = -483;
	volatile int32_t t82 = INT32_MIN;

	t82 = (x1041/(x1042&(x1043<=x1044)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1045 = INT32_MIN;
	volatile int16_t x1046 = 16137;
	volatile int8_t x1047 = -1;
	uint16_t x1048 = 85U;
	int32_t t83 = INT32_MIN;

	t83 = (x1045/(x1046&(x1047<=x1048)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1049 = 1;
	static int64_t x1050 = INT64_MAX;
	int16_t x1051 = 7;
	int8_t x1052 = 10;

	t84 = (x1049/(x1050&(x1051<=x1052)));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x1053 = INT64_MAX;
	static volatile uint64_t x1054 = 237LLU;
	int32_t x1056 = 37297;

	t85 = (x1053/(x1054&(x1055<=x1056)));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1081 = 5090278803980029LLU;
	uint8_t x1082 = UINT8_MAX;
	volatile uint32_t x1084 = UINT32_MAX;
	volatile uint64_t t86 = 5LLU;

	t86 = (x1081/(x1082&(x1083<=x1084)));

	if (t86 != 5090278803980029LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x1101 = INT16_MIN;
	static int8_t x1102 = -19;
	volatile int32_t x1103 = INT32_MIN;
	static int8_t x1104 = -1;
	int32_t t87 = -1;

	t87 = (x1101/(x1102&(x1103<=x1104)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1105 = 17928364U;
	volatile int32_t x1107 = INT32_MIN;
	uint8_t x1108 = UINT8_MAX;
	volatile int64_t t88 = -2LL;

	t88 = (x1105/(x1106&(x1107<=x1108)));

	if (t88 != 17928364LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x1109 = INT8_MAX;
	static uint32_t x1110 = UINT32_MAX;
	static int32_t x1111 = -19435;
	int64_t x1112 = INT64_MAX;
	static volatile uint32_t t89 = 1U;

	t89 = (x1109/(x1110&(x1111<=x1112)));

	if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1121 = INT64_MIN;
	uint32_t x1122 = UINT32_MAX;
	static uint16_t x1124 = 2357U;

	t90 = (x1121/(x1122&(x1123<=x1124)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x1125 = INT64_MAX;
	int64_t x1127 = INT64_MIN;
	volatile int32_t x1128 = -1;
	static volatile int64_t t91 = INT64_MAX;

	t91 = (x1125/(x1126&(x1127<=x1128)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x1130 = UINT16_MAX;
	int32_t x1131 = INT32_MIN;
	static int8_t x1132 = INT8_MIN;
	volatile int64_t t92 = 221164169357LL;

	t92 = (x1129/(x1130&(x1131<=x1132)));

	if (t92 != -165754017511LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x1134 = 29LLU;
	volatile uint64_t x1135 = 68644714953LLU;
	int64_t x1136 = INT64_MIN;
	static volatile uint64_t t93 = 122070235831560LLU;

	t93 = (x1133/(x1134&(x1135<=x1136)));

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x1137 = INT32_MAX;
	int16_t x1138 = -1;
	int32_t t94 = INT32_MAX;

	t94 = (x1137/(x1138&(x1139<=x1140)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1205 = INT16_MIN;
	int64_t x1206 = -1LL;
	volatile uint64_t x1207 = 308809096133665356LLU;
	static int64_t t95 = -13804700857000LL;

	t95 = (x1205/(x1206&(x1207<=x1208)));

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1213 = INT8_MAX;
	int16_t x1214 = -13;
	uint64_t x1215 = 282444704LLU;
	static int32_t x1216 = -1;

	t96 = (x1213/(x1214&(x1215<=x1216)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1237 = INT64_MIN;
	volatile int32_t x1238 = INT32_MAX;
	int16_t x1239 = 1;
	uint8_t x1240 = 18U;

	t97 = (x1237/(x1238&(x1239<=x1240)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x1249 = 3983101497469539870LLU;
	static int32_t x1250 = INT32_MAX;
	int8_t x1252 = INT8_MIN;
	uint64_t t98 = 593732677461LLU;

	t98 = (x1249/(x1250&(x1251<=x1252)));

	if (t98 != 3983101497469539870LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1291 = 1;
	static uint8_t x1292 = 31U;

	t99 = (x1289/(x1290&(x1291<=x1292)));

	if (t99 != 3) { NG(); } else { ; }
	
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

