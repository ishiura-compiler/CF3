#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x21 = -1;
uint32_t x26 = 435U;
uint64_t x27 = 16738929176LLU;
static int8_t x58 = -5;
uint8_t x103 = UINT8_MAX;
int8_t x104 = -48;
static uint32_t x106 = 52156U;
int16_t x138 = INT16_MIN;
static int32_t x154 = INT32_MIN;
int32_t t9 = -3877752;
uint8_t x233 = 0U;
volatile int32_t x234 = INT32_MIN;
int32_t t15 = 14;
volatile uint32_t x286 = 11U;
static int32_t x289 = INT32_MIN;
uint16_t x291 = UINT16_MAX;
volatile int32_t t20 = -523157;
static volatile uint8_t x311 = UINT8_MAX;
volatile uint8_t x312 = 3U;
int64_t t21 = -55087984102234128LL;
volatile uint64_t t22 = 24LLU;
volatile int16_t x319 = -1;
static volatile int32_t t23 = 1;
int16_t x331 = INT16_MAX;
int64_t t24 = 236305792073LL;
static int8_t x345 = -2;
volatile uint64_t x383 = UINT64_MAX;
int16_t x388 = INT16_MAX;
volatile int8_t x389 = -1;
static int64_t x393 = INT64_MAX;
volatile int64_t t29 = -244431802434637LL;
volatile int32_t x431 = INT32_MAX;
static int8_t x475 = -18;
volatile int32_t x477 = INT32_MIN;
uint8_t x484 = UINT8_MAX;
volatile int32_t t37 = -168966;
volatile int16_t x499 = INT16_MIN;
uint64_t x500 = 246182370925326LLU;
static volatile int64_t x501 = -2516941237247851916LL;
int16_t x504 = INT16_MIN;
int32_t x521 = INT32_MAX;
static uint32_t x537 = 7U;
volatile uint32_t t41 = 1294242724U;
int32_t t43 = 55;
volatile int8_t x583 = 1;
uint64_t x614 = 6523814465LLU;
volatile int64_t t49 = 374LL;
volatile int32_t x723 = INT32_MIN;
uint32_t x725 = 727229099U;
int64_t x756 = INT64_MIN;
static volatile int64_t x765 = 261303001385LL;
int64_t t57 = 1814920952LL;
int64_t x785 = INT64_MIN;
int64_t x786 = INT64_MIN;
int16_t x790 = INT16_MIN;
int8_t x797 = -2;
uint64_t x798 = 1LLU;
static int64_t x815 = -236031538233436LL;
int16_t x829 = -1;
int8_t x830 = INT8_MIN;
volatile uint16_t x832 = UINT16_MAX;
volatile int16_t x834 = INT16_MAX;
uint8_t x844 = UINT8_MAX;
static uint32_t x857 = UINT32_MAX;
static int16_t x858 = INT16_MAX;
volatile uint16_t x872 = 27076U;
static uint16_t x937 = 73U;
int32_t x939 = 48303552;
int8_t x945 = -15;
int32_t x981 = -1;
int32_t t80 = -551041;
int16_t x1004 = 16;
int16_t x1015 = 5;
uint16_t x1027 = UINT16_MAX;
int16_t x1041 = -11;
volatile int64_t x1044 = -1LL;
volatile int32_t t86 = -20;
volatile int16_t x1063 = -1;
volatile int32_t t88 = -3397554;
int64_t x1070 = INT64_MIN;
int32_t x1091 = -1;
int64_t x1092 = INT64_MAX;
static int64_t x1094 = -177039LL;
uint8_t x1109 = UINT8_MAX;
int32_t t94 = -1786147;
volatile int64_t x1154 = INT64_MIN;
uint8_t x1158 = 0U;
volatile int32_t t98 = 142;
int8_t x1165 = -1;
static volatile int16_t x1167 = -14;


void f0(void) {
	uint16_t x22 = 162U;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MAX;
	static int32_t t0 = -31;

	t0 = (x21%(x22<=(x23/x24)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = INT32_MAX;
	int16_t x28 = 842;
	volatile int32_t t1 = 231;

	t1 = (x25%(x26<=(x27/x28)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x57 = 7204257LLU;
	static volatile uint8_t x59 = 0U;
	int32_t x60 = 259818530;
	static volatile uint64_t t2 = 18LLU;

	t2 = (x57%(x58<=(x59/x60)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x81 = -1;
	static int8_t x82 = -1;
	volatile int8_t x83 = -1;
	int64_t x84 = INT64_MAX;
	int32_t t3 = 40841;

	t3 = (x81%(x82<=(x83/x84)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x101 = UINT64_MAX;
	uint32_t x102 = 158694U;
	static volatile uint64_t t4 = 73016593831101256LLU;

	t4 = (x101%(x102<=(x103/x104)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x105 = INT32_MIN;
	int8_t x107 = -1;
	int16_t x108 = 1;
	int32_t t5 = -56;

	t5 = (x105%(x106<=(x107/x108)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x129 = 0U;
	uint16_t x130 = 6U;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	volatile int32_t t6 = -75;

	t6 = (x129%(x130<=(x131/x132)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x137 = -1;
	volatile int16_t x139 = INT16_MIN;
	static int16_t x140 = INT16_MIN;
	int32_t t7 = -229061873;

	t7 = (x137%(x138<=(x139/x140)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x153 = INT32_MIN;
	int64_t x155 = -1LL;
	int32_t x156 = INT32_MIN;
	int32_t t8 = -277;

	t8 = (x153%(x154<=(x155/x156)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x157 = INT32_MIN;
	int8_t x158 = 0;
	static uint64_t x159 = 15207080782LLU;
	volatile uint8_t x160 = 39U;

	t9 = (x157%(x158<=(x159/x160)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MAX;
	volatile int32_t x188 = -1;
	static uint32_t t10 = 11153227U;

	t10 = (x185%(x186<=(x187/x188)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x189 = 274093U;
	int8_t x190 = INT8_MIN;
	int32_t x191 = -13355;
	int32_t x192 = INT32_MAX;
	volatile uint32_t t11 = 39U;

	t11 = (x189%(x190<=(x191/x192)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x193 = INT16_MIN;
	int32_t x194 = -1;
	int8_t x195 = -5;
	static volatile int16_t x196 = 18;
	volatile int32_t t12 = -20;

	t12 = (x193%(x194<=(x195/x196)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x197 = 320945U;
	int16_t x198 = INT16_MIN;
	static volatile int64_t x199 = INT64_MIN;
	static int64_t x200 = INT64_MAX;
	volatile uint32_t t13 = 485900U;

	t13 = (x197%(x198<=(x199/x200)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x201 = -1;
	volatile int32_t x202 = INT32_MIN;
	static int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MAX;
	int32_t t14 = 940;

	t14 = (x201%(x202<=(x203/x204)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x235 = INT32_MIN;
	int8_t x236 = -14;

	t15 = (x233%(x234<=(x235/x236)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x269 = UINT8_MAX;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t16 = 1;

	t16 = (x269%(x270<=(x271/x272)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x285 = 40;
	uint16_t x287 = 211U;
	static uint32_t x288 = 8U;
	static volatile int32_t t17 = 0;

	t17 = (x285%(x286<=(x287/x288)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x290 = INT8_MAX;
	static volatile uint16_t x292 = 1U;
	int32_t t18 = 667183042;

	t18 = (x289%(x290<=(x291/x292)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x297 = INT8_MIN;
	static uint16_t x298 = 1U;
	uint64_t x299 = 40920545344486LLU;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t19 = -37270829;

	t19 = (x297%(x298<=(x299/x300)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = 25;

	t20 = (x305%(x306<=(x307/x308)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x309 = -1LL;
	uint8_t x310 = 23U;

	t21 = (x309%(x310<=(x311/x312)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x313 = 29167011160680LLU;
	int8_t x314 = INT8_MIN;
	static volatile int64_t x315 = -143LL;
	int8_t x316 = -23;

	t22 = (x313%(x314<=(x315/x316)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x317 = INT32_MAX;
	int64_t x318 = -1657991720126522853LL;
	int64_t x320 = INT64_MAX;

	t23 = (x317%(x318<=(x319/x320)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x329 = -1LL;
	uint64_t x330 = 303LLU;
	int64_t x332 = 1LL;

	t24 = (x329%(x330<=(x331/x332)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x346 = -1;
	int32_t x347 = -16;
	static volatile int32_t x348 = -1;
	static volatile int32_t t25 = 1570;

	t25 = (x345%(x346<=(x347/x348)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = 32216610756965LL;
	static uint8_t x384 = 1U;
	volatile int32_t t26 = 203677;

	t26 = (x381%(x382<=(x383/x384)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x385 = INT64_MIN;
	volatile int64_t x386 = -50396429LL;
	int64_t x387 = -37489LL;
	int64_t t27 = -135347743144LL;

	t27 = (x385%(x386<=(x387/x388)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	int32_t x392 = 2;
	int32_t t28 = 981;

	t28 = (x389%(x390<=(x391/x392)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x394 = 66052;
	int64_t x395 = -76765616351LL;
	int8_t x396 = INT8_MIN;

	t29 = (x393%(x394<=(x395/x396)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x401 = INT8_MAX;
	int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	int32_t x404 = 3;
	volatile int32_t t30 = -31;

	t30 = (x401%(x402<=(x403/x404)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x413 = 0;
	int16_t x414 = INT16_MIN;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = INT64_MAX;
	volatile int32_t t31 = -7372234;

	t31 = (x413%(x414<=(x415/x416)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x417 = INT64_MIN;
	uint8_t x418 = UINT8_MAX;
	int32_t x419 = INT32_MIN;
	volatile uint64_t x420 = 41LLU;
	static int64_t t32 = 256547331182537LL;

	t32 = (x417%(x418<=(x419/x420)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x429 = INT32_MIN;
	uint64_t x430 = 2881LLU;
	uint8_t x432 = 17U;
	volatile int32_t t33 = 15496;

	t33 = (x429%(x430<=(x431/x432)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x457 = INT64_MIN;
	static int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	static int8_t x460 = -5;
	volatile int64_t t34 = -5764LL;

	t34 = (x457%(x458<=(x459/x460)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x473 = INT32_MIN;
	volatile int64_t x474 = INT64_MIN;
	volatile int32_t x476 = -111;
	volatile int32_t t35 = 62;

	t35 = (x473%(x474<=(x475/x476)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x478 = INT64_MIN;
	int32_t x479 = INT32_MAX;
	volatile int16_t x480 = -1;
	static int32_t t36 = 13898;

	t36 = (x477%(x478<=(x479/x480)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x481 = INT8_MAX;
	volatile int16_t x482 = 1;
	uint32_t x483 = 7393190U;

	t37 = (x481%(x482<=(x483/x484)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x497 = 0U;
	uint32_t x498 = 40U;
	int32_t t38 = -198240;

	t38 = (x497%(x498<=(x499/x500)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x502 = INT64_MIN;
	int64_t x503 = -1LL;
	static volatile int64_t t39 = 33LL;

	t39 = (x501%(x502<=(x503/x504)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x522 = INT32_MIN;
	static volatile uint8_t x523 = 1U;
	volatile int16_t x524 = -1;
	int32_t t40 = 887831;

	t40 = (x521%(x522<=(x523/x524)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x538 = -1;
	int8_t x539 = INT8_MAX;
	int64_t x540 = 16098952580LL;

	t41 = (x537%(x538<=(x539/x540)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x541 = UINT32_MAX;
	int32_t x542 = INT32_MIN;
	int16_t x543 = 29;
	static int8_t x544 = -26;
	static uint32_t t42 = 86U;

	t42 = (x541%(x542<=(x543/x544)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x565 = INT16_MIN;
	int64_t x566 = INT64_MIN;
	static uint8_t x567 = 11U;
	int64_t x568 = INT64_MIN;

	t43 = (x565%(x566<=(x567/x568)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x581 = -13;
	int16_t x582 = INT16_MIN;
	volatile int32_t x584 = INT32_MAX;
	int32_t t44 = 5924620;

	t44 = (x581%(x582<=(x583/x584)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x593 = 52;
	int8_t x594 = INT8_MIN;
	volatile int32_t x595 = -7;
	int32_t x596 = -1889;
	int32_t t45 = 0;

	t45 = (x593%(x594<=(x595/x596)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x613 = INT32_MIN;
	int16_t x615 = 10444;
	int8_t x616 = -1;
	int32_t t46 = 287;

	t46 = (x613%(x614<=(x615/x616)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x617 = INT32_MIN;
	uint64_t x618 = 7LLU;
	static volatile int32_t x619 = -12024;
	int16_t x620 = -28;
	volatile int32_t t47 = 1615;

	t47 = (x617%(x618<=(x619/x620)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x625 = -303;
	volatile int64_t x626 = -149094LL;
	uint16_t x627 = 0U;
	int64_t x628 = INT64_MIN;
	int32_t t48 = -1919;

	t48 = (x625%(x626<=(x627/x628)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x649 = INT64_MAX;
	int16_t x650 = INT16_MIN;
	int64_t x651 = INT64_MAX;
	int8_t x652 = 3;

	t49 = (x649%(x650<=(x651/x652)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x661 = 10550174325429733LLU;
	int8_t x662 = -22;
	int64_t x663 = 240285722LL;
	int8_t x664 = INT8_MAX;
	uint64_t t50 = 18301988627078LLU;

	t50 = (x661%(x662<=(x663/x664)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x665 = 4U;
	static int32_t x666 = -1;
	static int64_t x667 = INT64_MIN;
	volatile int32_t x668 = -15820262;
	static volatile int32_t t51 = -9072249;

	t51 = (x665%(x666<=(x667/x668)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x705 = INT8_MAX;
	static int64_t x706 = -30670702415989295LL;
	volatile int16_t x707 = INT16_MIN;
	int32_t x708 = -110491;
	volatile int32_t t52 = -117531;

	t52 = (x705%(x706<=(x707/x708)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x721 = INT8_MAX;
	uint8_t x722 = UINT8_MAX;
	int8_t x724 = -33;
	volatile int32_t t53 = 2706516;

	t53 = (x721%(x722<=(x723/x724)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x726 = INT16_MIN;
	int16_t x727 = INT16_MAX;
	int64_t x728 = INT64_MIN;
	uint32_t t54 = 438965687U;

	t54 = (x725%(x726<=(x727/x728)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x737 = INT8_MIN;
	int64_t x738 = INT64_MIN;
	int16_t x739 = INT16_MAX;
	int64_t x740 = INT64_MIN;
	int32_t t55 = 2387;

	t55 = (x737%(x738<=(x739/x740)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x753 = UINT64_MAX;
	int64_t x754 = INT64_MIN;
	int8_t x755 = INT8_MIN;
	volatile uint64_t t56 = 32716432773650LLU;

	t56 = (x753%(x754<=(x755/x756)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x766 = INT8_MIN;
	uint32_t x767 = UINT32_MAX;
	int64_t x768 = INT64_MIN;

	t57 = (x765%(x766<=(x767/x768)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x769 = -1;
	int8_t x770 = INT8_MIN;
	static uint16_t x771 = 62U;
	int32_t x772 = 27136280;
	static int32_t t58 = 1218;

	t58 = (x769%(x770<=(x771/x772)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x787 = INT64_MIN;
	static int32_t x788 = INT32_MAX;
	volatile int64_t t59 = 5LL;

	t59 = (x785%(x786<=(x787/x788)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x789 = 2;
	int64_t x791 = INT64_MAX;
	int16_t x792 = INT16_MAX;
	volatile int32_t t60 = 63489402;

	t60 = (x789%(x790<=(x791/x792)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x799 = UINT32_MAX;
	static int8_t x800 = 13;
	int32_t t61 = 39;

	t61 = (x797%(x798<=(x799/x800)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x809 = UINT16_MAX;
	int16_t x810 = -33;
	uint8_t x811 = 6U;
	volatile int64_t x812 = 1075819660028456LL;
	static volatile int32_t t62 = 101653;

	t62 = (x809%(x810<=(x811/x812)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x813 = -3679;
	static int8_t x814 = INT8_MIN;
	volatile int32_t x816 = INT32_MIN;
	volatile int32_t t63 = 578;

	t63 = (x813%(x814<=(x815/x816)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x831 = 197;
	int32_t t64 = -7054176;

	t64 = (x829%(x830<=(x831/x832)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x833 = 5359962U;
	static int16_t x835 = INT16_MIN;
	uint32_t x836 = 6U;
	volatile uint32_t t65 = 14U;

	t65 = (x833%(x834<=(x835/x836)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x841 = INT32_MAX;
	int16_t x842 = INT16_MIN;
	static uint16_t x843 = 4250U;
	volatile int32_t t66 = 3638982;

	t66 = (x841%(x842<=(x843/x844)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x849 = -29898LL;
	int64_t x850 = -1518754LL;
	static volatile int64_t x851 = -1LL;
	static int64_t x852 = INT64_MIN;
	int64_t t67 = 1001598655163469303LL;

	t67 = (x849%(x850<=(x851/x852)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x859 = INT64_MIN;
	int64_t x860 = -123LL;
	uint32_t t68 = 2024047U;

	t68 = (x857%(x858<=(x859/x860)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x869 = 5792;
	int8_t x870 = INT8_MIN;
	static uint8_t x871 = 1U;
	volatile int32_t t69 = 232;

	t69 = (x869%(x870<=(x871/x872)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x873 = UINT32_MAX;
	int16_t x874 = INT16_MIN;
	uint16_t x875 = 467U;
	volatile int8_t x876 = INT8_MIN;
	static uint32_t t70 = 2721048U;

	t70 = (x873%(x874<=(x875/x876)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x877 = 95743LLU;
	int8_t x878 = -1;
	static volatile int16_t x879 = -1;
	volatile int32_t x880 = INT32_MAX;
	volatile uint64_t t71 = 132494858LLU;

	t71 = (x877%(x878<=(x879/x880)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x889 = UINT64_MAX;
	int16_t x890 = -1;
	int8_t x891 = INT8_MAX;
	int32_t x892 = 172;
	volatile uint64_t t72 = 8450433482LLU;

	t72 = (x889%(x890<=(x891/x892)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x909 = INT64_MIN;
	int64_t x910 = -6844118950700LL;
	uint8_t x911 = 58U;
	uint8_t x912 = 2U;
	volatile int64_t t73 = 2LL;

	t73 = (x909%(x910<=(x911/x912)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x925 = 2351;
	int16_t x926 = INT16_MIN;
	int64_t x927 = INT64_MIN;
	volatile int64_t x928 = -3LL;
	int32_t t74 = -782917989;

	t74 = (x925%(x926<=(x927/x928)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x929 = 17;
	int32_t x930 = INT32_MIN;
	static uint8_t x931 = 1U;
	volatile int16_t x932 = INT16_MIN;
	volatile int32_t t75 = 2469398;

	t75 = (x929%(x930<=(x931/x932)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x938 = -193310522;
	static int64_t x940 = 3LL;
	static int32_t t76 = 971;

	t76 = (x937%(x938<=(x939/x940)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x941 = UINT8_MAX;
	static int8_t x942 = INT8_MIN;
	uint8_t x943 = 2U;
	int16_t x944 = 1;
	volatile int32_t t77 = 328;

	t77 = (x941%(x942<=(x943/x944)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x946 = 1U;
	int16_t x947 = INT16_MIN;
	static int8_t x948 = INT8_MIN;
	int32_t t78 = 212484;

	t78 = (x945%(x946<=(x947/x948)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x982 = INT64_MIN;
	static int32_t x983 = 15410797;
	volatile int16_t x984 = INT16_MAX;
	volatile int32_t t79 = 58306;

	t79 = (x981%(x982<=(x983/x984)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x997 = INT8_MIN;
	int32_t x998 = -1;
	int32_t x999 = INT32_MIN;
	int16_t x1000 = INT16_MIN;

	t80 = (x997%(x998<=(x999/x1000)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1001 = UINT16_MAX;
	int64_t x1002 = -2064LL;
	static int64_t x1003 = INT64_MAX;
	volatile int32_t t81 = -4662346;

	t81 = (x1001%(x1002<=(x1003/x1004)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x1013 = UINT16_MAX;
	volatile int16_t x1014 = -1;
	int16_t x1016 = 1834;
	volatile int32_t t82 = 1559;

	t82 = (x1013%(x1014<=(x1015/x1016)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1021 = -1;
	static int32_t x1022 = INT32_MIN;
	static int32_t x1023 = INT32_MIN;
	static volatile int8_t x1024 = INT8_MIN;
	volatile int32_t t83 = 223664886;

	t83 = (x1021%(x1022<=(x1023/x1024)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1025 = INT16_MIN;
	static int16_t x1026 = 1011;
	int64_t x1028 = 1LL;
	static int32_t t84 = -249353;

	t84 = (x1025%(x1026<=(x1027/x1028)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1033 = INT16_MIN;
	static int8_t x1034 = -23;
	uint8_t x1035 = 113U;
	int8_t x1036 = INT8_MIN;
	static int32_t t85 = -1080;

	t85 = (x1033%(x1034<=(x1035/x1036)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1042 = INT32_MIN;
	uint32_t x1043 = 14085432U;

	t86 = (x1041%(x1042<=(x1043/x1044)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1061 = -7696672;
	volatile int32_t x1062 = -1;
	static volatile int8_t x1064 = INT8_MAX;
	volatile int32_t t87 = -14348;

	t87 = (x1061%(x1062<=(x1063/x1064)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1065 = 0;
	volatile uint8_t x1066 = 13U;
	int32_t x1067 = INT32_MAX;
	int8_t x1068 = INT8_MAX;

	t88 = (x1065%(x1066<=(x1067/x1068)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1069 = -4445LL;
	int32_t x1071 = INT32_MIN;
	int16_t x1072 = -3;
	volatile int64_t t89 = -1LL;

	t89 = (x1069%(x1070<=(x1071/x1072)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x1077 = INT16_MIN;
	static volatile int64_t x1078 = -4665LL;
	int64_t x1079 = INT64_MIN;
	volatile int32_t x1080 = -2045597;
	int32_t t90 = 8;

	t90 = (x1077%(x1078<=(x1079/x1080)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1089 = INT16_MAX;
	int64_t x1090 = -1LL;
	int32_t t91 = 472218393;

	t91 = (x1089%(x1090<=(x1091/x1092)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x1093 = INT16_MIN;
	int32_t x1095 = -223018;
	int64_t x1096 = -1LL;
	volatile int32_t t92 = -1527;

	t92 = (x1093%(x1094<=(x1095/x1096)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1110 = -4760602022LL;
	volatile int16_t x1111 = INT16_MAX;
	int32_t x1112 = -1;
	int32_t t93 = -1202;

	t93 = (x1109%(x1110<=(x1111/x1112)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x1125 = -6;
	volatile int32_t x1126 = -7791948;
	uint16_t x1127 = UINT16_MAX;
	static volatile uint16_t x1128 = 882U;

	t94 = (x1125%(x1126<=(x1127/x1128)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1129 = 2036562254568LLU;
	volatile int64_t x1130 = INT64_MIN;
	int16_t x1131 = -1;
	int16_t x1132 = 35;
	volatile uint64_t t95 = 99653016839LLU;

	t95 = (x1129%(x1130<=(x1131/x1132)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1141 = INT32_MAX;
	volatile int32_t x1142 = -14;
	volatile int16_t x1143 = INT16_MAX;
	static int32_t x1144 = INT32_MIN;
	volatile int32_t t96 = 18434723;

	t96 = (x1141%(x1142<=(x1143/x1144)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1153 = INT16_MAX;
	volatile int32_t x1155 = -1;
	uint32_t x1156 = UINT32_MAX;
	int32_t t97 = -7451293;

	t97 = (x1153%(x1154<=(x1155/x1156)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1157 = INT8_MAX;
	int8_t x1159 = INT8_MIN;
	int64_t x1160 = -1LL;

	t98 = (x1157%(x1158<=(x1159/x1160)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1166 = -92178012;
	static int16_t x1168 = INT16_MIN;
	int32_t t99 = 12;

	t99 = (x1165%(x1166<=(x1167/x1168)));

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

