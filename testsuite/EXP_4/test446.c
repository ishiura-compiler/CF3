#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x28 = INT16_MAX;
int32_t x37 = -1;
volatile int32_t x49 = INT32_MIN;
volatile int32_t x50 = 888;
static int32_t t4 = INT32_MIN;
int8_t x68 = INT8_MAX;
volatile uint64_t t9 = 99LLU;
int16_t x124 = -1;
int16_t x131 = -1;
int8_t x135 = INT8_MAX;
int64_t x141 = -1LL;
volatile int64_t t15 = 13835498212223LL;
uint64_t x176 = 31LLU;
volatile int64_t x180 = -24813795724320LL;
int8_t x185 = -2;
int16_t x192 = 11;
volatile uint8_t x206 = 1U;
volatile uint8_t x213 = 7U;
int64_t x257 = -1LL;
uint8_t x271 = 11U;
static int8_t x324 = INT8_MAX;
volatile uint32_t t33 = 855461928U;
static int8_t x329 = INT8_MIN;
int8_t x330 = -1;
int8_t x332 = 29;
volatile uint64_t x335 = 2814813LLU;
int8_t x345 = -5;
int32_t x348 = -1;
uint8_t x354 = 103U;
int64_t x362 = INT64_MIN;
uint16_t x377 = 1U;
uint64_t x378 = 1161219474425119LLU;
volatile int32_t t42 = 298;
static int64_t x387 = 12LL;
int16_t x388 = INT16_MAX;
volatile int32_t t44 = 119;
volatile int32_t x433 = INT32_MIN;
int16_t x434 = -1;
int8_t x435 = 0;
static uint16_t x436 = 3121U;
int32_t t46 = INT32_MIN;
static int8_t x441 = -23;
int8_t x442 = 0;
int8_t x445 = INT8_MIN;
static uint64_t x451 = UINT64_MAX;
volatile int64_t x474 = 26940LL;
static volatile int32_t t52 = -9755243;
uint16_t x502 = 2U;
uint32_t x503 = 26U;
volatile int16_t x510 = -1;
static int8_t x580 = INT8_MIN;
int64_t t57 = -4090393498394118199LL;
volatile uint8_t x608 = 13U;
int32_t x619 = INT32_MIN;
uint32_t x620 = UINT32_MAX;
uint16_t x623 = 241U;
static int8_t x643 = -2;
uint16_t x645 = UINT16_MAX;
int64_t x693 = -911492606846795321LL;
uint16_t x699 = UINT16_MAX;
volatile int64_t x719 = -37LL;
int32_t t70 = -853435;
volatile int32_t x743 = INT32_MIN;
volatile int16_t x753 = INT16_MIN;
int32_t x774 = -53;
uint8_t x818 = 6U;
int32_t t77 = 860349;
int8_t x845 = INT8_MAX;
uint64_t x888 = UINT64_MAX;
volatile int32_t t83 = INT32_MIN;
int16_t x913 = INT16_MAX;
int8_t x919 = 7;
volatile uint16_t x920 = UINT16_MAX;
uint16_t x944 = 33U;
int8_t x949 = 7;
int16_t x950 = -1;
int8_t x990 = 2;
uint8_t x997 = 9U;
uint16_t x1000 = 753U;
volatile uint16_t x1037 = 1404U;
volatile int8_t x1038 = -1;
volatile int32_t t94 = 11854;
static volatile int32_t x1053 = INT32_MIN;
int16_t x1067 = -1;
static volatile int64_t x1073 = INT64_MIN;


void f0(void) {
	static int64_t x13 = INT64_MAX;
	int32_t x14 = -288453;
	static int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	int64_t t0 = INT64_MAX;

	t0 = (x13/(x14<(x15*x16)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x17 = INT16_MAX;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 0U;
	int16_t x20 = -1;
	int32_t t1 = 11922570;

	t1 = (x17/(x18<(x19*x20)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x25 = 1002U;
	static int64_t x26 = INT64_MIN;
	int8_t x27 = -1;
	int32_t t2 = 4114969;

	t2 = (x25/(x26<(x27*x28)));

	if (t2 != 1002) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x38 = INT64_MIN;
	int64_t x39 = -1LL;
	volatile int8_t x40 = INT8_MAX;
	static int32_t t3 = 11823967;

	t3 = (x37/(x38<(x39*x40)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x51 = 3727870;
	uint32_t x52 = 44U;

	t4 = (x49/(x50<(x51*x52)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x65 = INT64_MAX;
	volatile uint16_t x66 = 1144U;
	static uint16_t x67 = 1510U;
	volatile int64_t t5 = INT64_MAX;

	t5 = (x65/(x66<(x67*x68)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x85 = 1;
	uint32_t x86 = 11289009U;
	static uint8_t x87 = 11U;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t6 = -16562149;

	t6 = (x85/(x86<(x87*x88)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x89 = 5U;
	volatile int8_t x90 = INT8_MIN;
	int16_t x91 = -917;
	static int8_t x92 = -19;
	static uint32_t t7 = 11224U;

	t7 = (x89/(x90<(x91*x92)));

	if (t7 != 5U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x101 = 8123639LL;
	int8_t x102 = INT8_MAX;
	int16_t x103 = INT16_MAX;
	uint32_t x104 = 357823U;
	int64_t t8 = 70104797665618648LL;

	t8 = (x101/(x102<(x103*x104)));

	if (t8 != 8123639LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x113 = 148480212LLU;
	int8_t x114 = INT8_MAX;
	int8_t x115 = 29;
	uint64_t x116 = 159LLU;

	t9 = (x113/(x114<(x115*x116)));

	if (t9 != 148480212LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MAX;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = 2052553823LLU;
	volatile int32_t t10 = -8;

	t10 = (x117/(x118<(x119*x120)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x121 = UINT32_MAX;
	int16_t x122 = -1;
	int8_t x123 = -1;
	uint32_t t11 = UINT32_MAX;

	t11 = (x121/(x122<(x123*x124)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x129 = -1;
	int64_t x130 = INT64_MIN;
	uint64_t x132 = 1225LLU;
	int32_t t12 = -104554;

	t12 = (x129/(x130<(x131*x132)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = 219;
	uint16_t x136 = 4U;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x133/(x134<(x135*x136)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x137 = 1U;
	int64_t x138 = -1LL;
	uint8_t x139 = 1U;
	volatile uint32_t x140 = 14253687U;
	volatile int32_t t14 = 954573638;

	t14 = (x137/(x138<(x139*x140)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x142 = 10774U;
	static volatile int16_t x143 = -1;
	static uint32_t x144 = 43765547U;

	t15 = (x141/(x142<(x143*x144)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x161 = 29402U;
	static int8_t x162 = 20;
	volatile uint8_t x163 = 4U;
	static int16_t x164 = INT16_MAX;
	volatile uint32_t t16 = 125U;

	t16 = (x161/(x162<(x163*x164)));

	if (t16 != 29402U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x169 = INT32_MAX;
	uint64_t x170 = 1173932LLU;
	int8_t x171 = INT8_MIN;
	static uint16_t x172 = 51U;
	volatile int32_t t17 = INT32_MAX;

	t17 = (x169/(x170<(x171*x172)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x173 = INT64_MAX;
	uint16_t x174 = 1U;
	uint64_t x175 = UINT64_MAX;
	static volatile int64_t t18 = INT64_MAX;

	t18 = (x173/(x174<(x175*x176)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x177 = 0U;
	static uint32_t x178 = 447U;
	uint64_t x179 = 1597046959LLU;
	static volatile int32_t t19 = -162321728;

	t19 = (x177/(x178<(x179*x180)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x186 = INT16_MAX;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = 168201U;
	int32_t t20 = -6;

	t20 = (x185/(x186<(x187*x188)));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int32_t x190 = INT32_MIN;
	uint8_t x191 = 1U;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x189/(x190<(x191*x192)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x201 = 93U;
	static int32_t x202 = -1;
	static int8_t x203 = INT8_MIN;
	int64_t x204 = -1LL;
	volatile int32_t t22 = -123311;

	t22 = (x201/(x202<(x203*x204)));

	if (t22 != 93) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x205 = INT32_MIN;
	volatile uint64_t x207 = 189780031804457LLU;
	volatile int16_t x208 = -138;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x205/(x206<(x207*x208)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x214 = -100031061274LL;
	uint8_t x215 = 0U;
	int64_t x216 = 1913LL;
	int32_t t24 = 21213;

	t24 = (x213/(x214<(x215*x216)));

	if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x225 = 1U;
	volatile int8_t x226 = 47;
	int16_t x227 = -1;
	static volatile int8_t x228 = INT8_MIN;
	static int32_t t25 = 24;

	t25 = (x225/(x226<(x227*x228)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x233 = 477060948438810LLU;
	int32_t x234 = -865648884;
	int8_t x235 = INT8_MIN;
	volatile int8_t x236 = INT8_MIN;
	volatile uint64_t t26 = 3783LLU;

	t26 = (x233/(x234<(x235*x236)));

	if (t26 != 477060948438810LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MIN;
	volatile uint8_t x247 = 12U;
	static uint8_t x248 = 43U;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x245/(x246<(x247*x248)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x253 = -1;
	static uint16_t x254 = 0U;
	uint16_t x255 = 3U;
	uint8_t x256 = 3U;
	int32_t t28 = 175563739;

	t28 = (x253/(x254<(x255*x256)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x258 = -1;
	int64_t x259 = -3592916842958147LL;
	int64_t x260 = -299LL;
	volatile int64_t t29 = 132199475LL;

	t29 = (x257/(x258<(x259*x260)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x269 = INT64_MIN;
	volatile int32_t x270 = INT32_MIN;
	static volatile int16_t x272 = -214;
	int64_t t30 = INT64_MIN;

	t30 = (x269/(x270<(x271*x272)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x285 = 7U;
	int16_t x286 = INT16_MIN;
	uint32_t x287 = 31394U;
	uint32_t x288 = UINT32_MAX;
	int32_t t31 = 213;

	t31 = (x285/(x286<(x287*x288)));

	if (t31 != 7) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x317 = 590822529U;
	volatile int32_t x318 = -3790;
	volatile uint16_t x319 = 2642U;
	static int64_t x320 = -1LL;
	static volatile uint32_t t32 = 587298U;

	t32 = (x317/(x318<(x319*x320)));

	if (t32 != 590822529U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x321 = 2U;
	int64_t x322 = -1LL;
	int64_t x323 = 62404LL;

	t33 = (x321/(x322<(x323*x324)));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x331 = 0U;
	int32_t t34 = -66;

	t34 = (x329/(x330<(x331*x332)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x333 = INT64_MAX;
	int64_t x334 = 3LL;
	uint8_t x336 = 28U;
	static volatile int64_t t35 = INT64_MAX;

	t35 = (x333/(x334<(x335*x336)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x346 = INT64_MIN;
	uint8_t x347 = UINT8_MAX;
	int32_t t36 = 1351;

	t36 = (x345/(x346<(x347*x348)));

	if (t36 != -5) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x349 = 11;
	int16_t x350 = -1;
	int32_t x351 = -6;
	int8_t x352 = -1;
	int32_t t37 = -13960;

	t37 = (x349/(x350<(x351*x352)));

	if (t37 != 11) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x353 = UINT64_MAX;
	static int16_t x355 = -1;
	int8_t x356 = INT8_MIN;
	uint64_t t38 = UINT64_MAX;

	t38 = (x353/(x354<(x355*x356)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x361 = INT32_MIN;
	int8_t x363 = -1;
	int32_t x364 = 714;
	int32_t t39 = INT32_MIN;

	t39 = (x361/(x362<(x363*x364)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x369 = 565;
	static int32_t x370 = INT32_MIN;
	int8_t x371 = 0;
	static int16_t x372 = 39;
	int32_t t40 = 1760;

	t40 = (x369/(x370<(x371*x372)));

	if (t40 != 565) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int64_t x374 = INT64_MIN;
	int8_t x375 = -1;
	int64_t x376 = -3704143770870392931LL;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x373/(x374<(x375*x376)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x379 = INT8_MAX;
	int16_t x380 = -1;

	t42 = (x377/(x378<(x379*x380)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x385 = INT8_MIN;
	static int16_t x386 = INT16_MIN;
	static volatile int32_t t43 = 31;

	t43 = (x385/(x386<(x387*x388)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x409 = 110317;
	static uint8_t x410 = 3U;
	volatile uint8_t x411 = 6U;
	int8_t x412 = INT8_MAX;

	t44 = (x409/(x410<(x411*x412)));

	if (t44 != 110317) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x417 = INT16_MIN;
	uint8_t x418 = 25U;
	static uint8_t x419 = 115U;
	static uint32_t x420 = 8030294U;
	volatile int32_t t45 = -30;

	t45 = (x417/(x418<(x419*x420)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {


	t46 = (x433/(x434<(x435*x436)));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x443 = INT32_MIN;
	volatile int64_t x444 = -74LL;
	int32_t t47 = -166;

	t47 = (x441/(x442<(x443*x444)));

	if (t47 != -23) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x446 = 0;
	volatile uint32_t x447 = 32U;
	int16_t x448 = 1;
	int32_t t48 = -5129;

	t48 = (x445/(x446<(x447*x448)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x449 = INT32_MIN;
	uint16_t x450 = 22U;
	uint8_t x452 = 56U;
	int32_t t49 = INT32_MIN;

	t49 = (x449/(x450<(x451*x452)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x457 = 18LLU;
	uint16_t x458 = 5145U;
	int16_t x459 = INT16_MAX;
	uint16_t x460 = 3455U;
	uint64_t t50 = 537449123996265LLU;

	t50 = (x457/(x458<(x459*x460)));

	if (t50 != 18LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x473 = INT64_MIN;
	int32_t x475 = 47;
	uint32_t x476 = 894756U;
	int64_t t51 = INT64_MIN;

	t51 = (x473/(x474<(x475*x476)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x493 = 44;
	int8_t x494 = -6;
	int64_t x495 = -1LL;
	int64_t x496 = -1LL;

	t52 = (x493/(x494<(x495*x496)));

	if (t52 != 44) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x497 = 681939022838215LL;
	volatile uint16_t x498 = UINT16_MAX;
	uint64_t x499 = 3948720913LLU;
	int64_t x500 = -1LL;
	static volatile int64_t t53 = -17LL;

	t53 = (x497/(x498<(x499*x500)));

	if (t53 != 681939022838215LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x501 = UINT16_MAX;
	int32_t x504 = 9;
	int32_t t54 = 3058;

	t54 = (x501/(x502<(x503*x504)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x509 = INT64_MIN;
	static uint16_t x511 = 77U;
	static uint8_t x512 = 7U;
	int64_t t55 = INT64_MIN;

	t55 = (x509/(x510<(x511*x512)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x553 = 1U;
	int64_t x554 = INT64_MIN;
	uint8_t x555 = UINT8_MAX;
	int64_t x556 = -34216304104200199LL;
	int32_t t56 = -2395539;

	t56 = (x553/(x554<(x555*x556)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x577 = 2LL;
	static int32_t x578 = -1;
	static int64_t x579 = -125647440LL;

	t57 = (x577/(x578<(x579*x580)));

	if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x589 = 1;
	static uint8_t x590 = 11U;
	static int16_t x591 = INT16_MIN;
	volatile int32_t x592 = -1;
	volatile int32_t t58 = -19784586;

	t58 = (x589/(x590<(x591*x592)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x605 = 717593326U;
	int16_t x606 = 1;
	uint16_t x607 = UINT16_MAX;
	static volatile uint32_t t59 = 238448U;

	t59 = (x605/(x606<(x607*x608)));

	if (t59 != 717593326U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x617 = INT64_MAX;
	static int32_t x618 = INT32_MAX;
	int64_t t60 = INT64_MAX;

	t60 = (x617/(x618<(x619*x620)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x621 = 330273780;
	int16_t x622 = INT16_MIN;
	volatile uint8_t x624 = 46U;
	int32_t t61 = 3649627;

	t61 = (x621/(x622<(x623*x624)));

	if (t61 != 330273780) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x641 = INT64_MAX;
	int8_t x642 = INT8_MIN;
	volatile uint16_t x644 = 15U;
	static int64_t t62 = INT64_MAX;

	t62 = (x641/(x642<(x643*x644)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x646 = 78;
	int8_t x647 = INT8_MAX;
	int8_t x648 = INT8_MAX;
	int32_t t63 = 0;

	t63 = (x645/(x646<(x647*x648)));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x649 = UINT8_MAX;
	volatile uint32_t x650 = 28U;
	uint16_t x651 = UINT16_MAX;
	uint32_t x652 = 3137683U;
	volatile int32_t t64 = -11931479;

	t64 = (x649/(x650<(x651*x652)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x665 = UINT16_MAX;
	static int16_t x666 = INT16_MIN;
	static int16_t x667 = -1;
	uint8_t x668 = 2U;
	int32_t t65 = -9506001;

	t65 = (x665/(x666<(x667*x668)));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x694 = 50319255U;
	int16_t x695 = -491;
	static uint16_t x696 = 2198U;
	static volatile int64_t t66 = 9197829LL;

	t66 = (x693/(x694<(x695*x696)));

	if (t66 != -911492606846795321LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x697 = INT8_MAX;
	int8_t x698 = -1;
	static int8_t x700 = 0;
	volatile int32_t t67 = -20;

	t67 = (x697/(x698<(x699*x700)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x701 = 9488032759341LLU;
	static uint64_t x702 = 56648464675614LLU;
	static int8_t x703 = 1;
	int16_t x704 = INT16_MIN;
	static uint64_t t68 = 104118182LLU;

	t68 = (x701/(x702<(x703*x704)));

	if (t68 != 9488032759341LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x717 = 57934282759LLU;
	volatile int16_t x718 = -1;
	static int16_t x720 = INT16_MIN;
	uint64_t t69 = 62LLU;

	t69 = (x717/(x718<(x719*x720)));

	if (t69 != 57934282759LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x725 = INT8_MIN;
	int8_t x726 = 5;
	volatile uint16_t x727 = 20465U;
	uint64_t x728 = 191633315554082LLU;

	t70 = (x725/(x726<(x727*x728)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x733 = UINT64_MAX;
	int8_t x734 = -1;
	uint16_t x735 = 9388U;
	static volatile int16_t x736 = 0;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x733/(x734<(x735*x736)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x737 = UINT64_MAX;
	int32_t x738 = 1360696;
	static volatile uint8_t x739 = 1U;
	uint64_t x740 = UINT64_MAX;
	static uint64_t t72 = UINT64_MAX;

	t72 = (x737/(x738<(x739*x740)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x741 = INT64_MIN;
	uint16_t x742 = UINT16_MAX;
	static uint32_t x744 = UINT32_MAX;
	static volatile int64_t t73 = INT64_MIN;

	t73 = (x741/(x742<(x743*x744)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x754 = -1;
	int16_t x755 = -1;
	volatile int16_t x756 = INT16_MIN;
	static volatile int32_t t74 = 112;

	t74 = (x753/(x754<(x755*x756)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x773 = INT8_MIN;
	int16_t x775 = INT16_MIN;
	volatile int16_t x776 = -1;
	int32_t t75 = -126;

	t75 = (x773/(x774<(x775*x776)));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x777 = -1LL;
	int8_t x778 = INT8_MAX;
	uint32_t x779 = UINT32_MAX;
	uint32_t x780 = 128104U;
	int64_t t76 = 2941304782LL;

	t76 = (x777/(x778<(x779*x780)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x817 = 0U;
	uint32_t x819 = 4601773U;
	int16_t x820 = INT16_MIN;

	t77 = (x817/(x818<(x819*x820)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x833 = 17;
	int32_t x834 = INT32_MIN;
	int32_t x835 = 2;
	int8_t x836 = -1;
	volatile int32_t t78 = 741;

	t78 = (x833/(x834<(x835*x836)));

	if (t78 != 17) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x846 = UINT32_MAX;
	static int8_t x847 = -13;
	int64_t x848 = -139417440810832LL;
	int32_t t79 = 101686;

	t79 = (x845/(x846<(x847*x848)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x857 = 40942639U;
	int32_t x858 = INT32_MIN;
	uint32_t x859 = UINT32_MAX;
	int8_t x860 = 1;
	static volatile uint32_t t80 = 8U;

	t80 = (x857/(x858<(x859*x860)));

	if (t80 != 40942639U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x869 = UINT64_MAX;
	static uint32_t x870 = 172656390U;
	volatile int8_t x871 = -1;
	volatile uint16_t x872 = UINT16_MAX;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x869/(x870<(x871*x872)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x877 = -1;
	int16_t x878 = -8;
	int8_t x879 = INT8_MAX;
	uint16_t x880 = 799U;
	volatile int32_t t82 = 19;

	t82 = (x877/(x878<(x879*x880)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x885 = INT32_MIN;
	int64_t x886 = INT64_MIN;
	int8_t x887 = INT8_MAX;

	t83 = (x885/(x886<(x887*x888)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x914 = -26918488002573919LL;
	uint16_t x915 = UINT16_MAX;
	int16_t x916 = 1;
	static int32_t t84 = 3596;

	t84 = (x913/(x914<(x915*x916)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x917 = 16LL;
	int8_t x918 = 13;
	int64_t t85 = -7LL;

	t85 = (x917/(x918<(x919*x920)));

	if (t85 != 16LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x941 = 1063370650U;
	int8_t x942 = INT8_MAX;
	static int16_t x943 = INT16_MAX;
	static volatile uint32_t t86 = 9842461U;

	t86 = (x941/(x942<(x943*x944)));

	if (t86 != 1063370650U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x951 = -1;
	int32_t x952 = -1;
	int32_t t87 = -2019125;

	t87 = (x949/(x950<(x951*x952)));

	if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x965 = 1021795267504238LL;
	int64_t x966 = INT64_MIN;
	int8_t x967 = 6;
	int32_t x968 = 1628964;
	volatile int64_t t88 = 37LL;

	t88 = (x965/(x966<(x967*x968)));

	if (t88 != 1021795267504238LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x969 = UINT16_MAX;
	static int8_t x970 = -61;
	int8_t x971 = 1;
	static int64_t x972 = INT64_MAX;
	volatile int32_t t89 = 3693;

	t89 = (x969/(x970<(x971*x972)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x973 = 15U;
	static volatile uint64_t x974 = 6660869977756756LLU;
	static int32_t x975 = -28579;
	uint8_t x976 = UINT8_MAX;
	volatile int32_t t90 = 0;

	t90 = (x973/(x974<(x975*x976)));

	if (t90 != 15) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x989 = INT32_MIN;
	static uint32_t x991 = UINT32_MAX;
	int32_t x992 = 7;
	static volatile int32_t t91 = INT32_MIN;

	t91 = (x989/(x990<(x991*x992)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x998 = 2037;
	int64_t x999 = 268288264154290LL;
	volatile int32_t t92 = -645222345;

	t92 = (x997/(x998<(x999*x1000)));

	if (t92 != 9) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1017 = 2050132547551LL;
	int32_t x1018 = -10016975;
	int8_t x1019 = 1;
	static int32_t x1020 = INT32_MAX;
	static int64_t t93 = 20888790814001464LL;

	t93 = (x1017/(x1018<(x1019*x1020)));

	if (t93 != 2050132547551LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1039 = 4;
	uint16_t x1040 = UINT16_MAX;

	t94 = (x1037/(x1038<(x1039*x1040)));

	if (t94 != 1404) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1049 = INT64_MIN;
	int32_t x1050 = INT32_MIN;
	static int8_t x1051 = -1;
	volatile int64_t x1052 = -96759190934943626LL;
	int64_t t95 = INT64_MIN;

	t95 = (x1049/(x1050<(x1051*x1052)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1054 = INT32_MIN;
	uint16_t x1055 = 3815U;
	int8_t x1056 = INT8_MAX;
	static volatile int32_t t96 = INT32_MIN;

	t96 = (x1053/(x1054<(x1055*x1056)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1057 = 0U;
	static volatile uint8_t x1058 = UINT8_MAX;
	int16_t x1059 = INT16_MAX;
	static uint64_t x1060 = 23509519LLU;
	int32_t t97 = -19268;

	t97 = (x1057/(x1058<(x1059*x1060)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1065 = 38050236LL;
	int64_t x1066 = -2120185404LL;
	static uint16_t x1068 = 23U;
	int64_t t98 = 10LL;

	t98 = (x1065/(x1066<(x1067*x1068)));

	if (t98 != 38050236LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1074 = 15586;
	static int16_t x1075 = -1;
	uint64_t x1076 = 1848410LLU;
	static int64_t t99 = INT64_MIN;

	t99 = (x1073/(x1074<(x1075*x1076)));

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

