#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -128569512;
static int8_t x32 = INT8_MAX;
volatile uint32_t t1 = 0U;
int32_t x53 = INT32_MAX;
volatile int32_t x56 = 836507622;
int16_t x107 = -480;
int32_t x108 = -1;
volatile int32_t x185 = 7;
volatile int16_t x194 = INT16_MIN;
static int8_t x196 = -3;
static int8_t x206 = -1;
volatile int64_t x302 = 67LL;
uint32_t t16 = 46U;
int16_t x358 = -6;
volatile int32_t t18 = 131563;
int32_t x366 = INT32_MIN;
int32_t x393 = INT32_MAX;
int32_t x396 = -1;
int16_t x449 = 1617;
volatile int16_t x479 = 18;
int32_t t25 = 619922569;
volatile int64_t x498 = INT64_MAX;
uint32_t t29 = UINT32_MAX;
volatile uint8_t x579 = 14U;
int64_t x591 = INT64_MIN;
int16_t x592 = 11311;
int16_t x616 = 3;
int32_t t32 = -1;
volatile int8_t x646 = -1;
int16_t x712 = INT16_MIN;
static uint32_t x713 = UINT32_MAX;
int32_t x716 = -1;
static int64_t x720 = -2LL;
volatile int32_t x732 = -14359076;
volatile int32_t x824 = -1;
static volatile int64_t t45 = 1320354336096693791LL;
volatile int16_t x855 = -8;
uint16_t x915 = 1U;
static int8_t x916 = -1;
volatile uint32_t t48 = 12388U;
int8_t x929 = 41;
static volatile int16_t x930 = -1;
volatile int32_t t51 = -60772311;
int32_t t52 = 12;
int16_t x959 = INT16_MAX;
int64_t x969 = 487648593LL;
int8_t x970 = INT8_MAX;
volatile int16_t x972 = -1;
int8_t x1007 = INT8_MIN;
volatile uint64_t x1018 = UINT64_MAX;
int8_t x1040 = INT8_MIN;
static volatile int32_t t62 = INT32_MAX;
int64_t x1066 = INT64_MAX;
uint16_t x1156 = UINT16_MAX;
int64_t t68 = 98338384906LL;
uint64_t x1253 = 196748824LLU;
int8_t x1254 = INT8_MIN;
int8_t x1255 = INT8_MIN;
uint16_t x1256 = UINT16_MAX;
int64_t x1262 = INT64_MIN;
uint8_t x1264 = UINT8_MAX;
int64_t t70 = INT64_MAX;
volatile int32_t x1323 = INT32_MAX;
volatile uint64_t x1324 = 88682676LLU;
int64_t x1350 = INT64_MIN;
static volatile int64_t x1351 = INT64_MIN;
uint64_t t73 = UINT64_MAX;
volatile uint16_t x1366 = 0U;
volatile int8_t x1408 = -1;
uint8_t x1441 = 16U;
static uint32_t x1442 = 9U;
static int8_t x1444 = INT8_MAX;
int32_t t78 = -16154;
static int16_t x1488 = INT16_MAX;
volatile uint64_t t80 = 24483LLU;
int32_t x1490 = INT32_MIN;
volatile uint8_t x1492 = 13U;
static uint16_t x1518 = 29U;
volatile int32_t t82 = -2005;
int64_t t85 = INT64_MAX;
int8_t x1659 = INT8_MIN;
uint16_t x1719 = 0U;
static int64_t x1723 = INT64_MIN;
volatile uint64_t t91 = 2385697LLU;
uint64_t x1789 = 29010465830356LLU;
uint8_t x1791 = 1U;
uint32_t x1796 = 300U;
int16_t x1833 = INT16_MAX;
int16_t x1836 = -1;


void f0(void) {
	static volatile uint8_t x21 = UINT8_MAX;
	int64_t x22 = -3612249LL;
	int16_t x23 = -1;
	int16_t x24 = -1;

	t0 = (x21>>(x22%(x23|x24)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x29 = 1950043889U;
	int16_t x30 = 1291;
	int32_t x31 = -324;

	t1 = (x29>>(x30%(x31|x32)));

	if (t1 != 30469435U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x54 = 3;
	int64_t x55 = INT64_MIN;
	int32_t t2 = -376344;

	t2 = (x53>>(x54%(x55|x56)));

	if (t2 != 268435455) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x57 = UINT32_MAX;
	int64_t x58 = 10300785LL;
	int32_t x59 = -1;
	static uint16_t x60 = 8U;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x57>>(x58%(x59|x60)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x89 = INT64_MAX;
	uint8_t x90 = UINT8_MAX;
	int8_t x91 = INT8_MAX;
	static int64_t x92 = -1LL;
	static volatile int64_t t4 = INT64_MAX;

	t4 = (x89>>(x90%(x91|x92)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x105 = INT16_MAX;
	static int64_t x106 = INT64_MIN;
	int32_t t5 = -1;

	t5 = (x105>>(x106%(x107|x108)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x109 = 0;
	volatile int64_t x110 = 15314115226LL;
	static int64_t x111 = -854LL;
	int16_t x112 = INT16_MAX;
	volatile int32_t t6 = 34663156;

	t6 = (x109>>(x110%(x111|x112)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x121 = 144232462117822468LLU;
	int8_t x122 = INT8_MAX;
	int32_t x123 = INT32_MAX;
	int8_t x124 = INT8_MIN;
	uint64_t t7 = 1663776349956LLU;

	t7 = (x121>>(x122%(x123|x124)));

	if (t7 != 144232462117822468LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x129 = 4838626;
	static int16_t x130 = -4;
	volatile int8_t x131 = -4;
	int64_t x132 = 282411913574LL;
	static int32_t t8 = -522515556;

	t8 = (x129>>(x130%(x131|x132)));

	if (t8 != 4838626) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x157 = 9U;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = -103;
	volatile int8_t x160 = -1;
	volatile uint32_t t9 = 826U;

	t9 = (x157>>(x158%(x159|x160)));

	if (t9 != 9U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x186 = UINT8_MAX;
	static volatile int16_t x187 = -2;
	uint16_t x188 = 127U;
	volatile int32_t t10 = 1;

	t10 = (x185>>(x186%(x187|x188)));

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x193 = 26579673LLU;
	volatile uint8_t x195 = 18U;
	uint64_t t11 = 6636938079695212LLU;

	t11 = (x193>>(x194%(x195|x196)));

	if (t11 != 26579673LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x205 = INT8_MAX;
	static int8_t x207 = INT8_MIN;
	volatile uint64_t x208 = UINT64_MAX;
	static int32_t t12 = 9329989;

	t12 = (x205>>(x206%(x207|x208)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 1215U;
	int16_t x219 = 16052;
	int64_t x220 = -1LL;
	volatile int32_t t13 = -864;

	t13 = (x217>>(x218%(x219|x220)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x285 = 74U;
	uint32_t x286 = UINT32_MAX;
	uint8_t x287 = 14U;
	uint32_t x288 = UINT32_MAX;
	int32_t t14 = 2671556;

	t14 = (x285>>(x286%(x287|x288)));

	if (t14 != 74) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x293 = 0;
	int64_t x294 = INT64_MIN;
	static int64_t x295 = -1LL;
	uint32_t x296 = 8909U;
	volatile int32_t t15 = 637953;

	t15 = (x293>>(x294%(x295|x296)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x301 = 1838017610U;
	int16_t x303 = -45;
	int8_t x304 = 0;

	t16 = (x301>>(x302%(x303|x304)));

	if (t16 != 438U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x317 = 11U;
	uint64_t x318 = 1LLU;
	uint8_t x319 = UINT8_MAX;
	volatile int8_t x320 = INT8_MIN;
	static volatile int32_t t17 = 10032289;

	t17 = (x317>>(x318%(x319|x320)));

	if (t17 != 5) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x359 = -4852;
	int32_t x360 = INT32_MAX;

	t18 = (x357>>(x358%(x359|x360)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x365 = UINT16_MAX;
	static int16_t x367 = 8683;
	int16_t x368 = -1;
	int32_t t19 = 123;

	t19 = (x365>>(x366%(x367|x368)));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x394 = INT64_MAX;
	static int64_t x395 = -1LL;
	static volatile int32_t t20 = INT32_MAX;

	t20 = (x393>>(x394%(x395|x396)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x429 = 25540424;
	int64_t x430 = INT64_MAX;
	int32_t x431 = -1;
	int32_t x432 = INT32_MAX;
	volatile int32_t t21 = -79404;

	t21 = (x429>>(x430%(x431|x432)));

	if (t21 != 25540424) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x433 = UINT8_MAX;
	volatile int32_t x434 = 17;
	static int16_t x435 = -5;
	int16_t x436 = INT16_MIN;
	int32_t t22 = -2467;

	t22 = (x433>>(x434%(x435|x436)));

	if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x450 = 0U;
	uint32_t x451 = 9152034U;
	uint32_t x452 = UINT32_MAX;
	volatile int32_t t23 = -298284453;

	t23 = (x449>>(x450%(x451|x452)));

	if (t23 != 1617) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x469 = 93U;
	int32_t x470 = -1;
	uint8_t x471 = UINT8_MAX;
	int16_t x472 = -1;
	volatile int32_t t24 = -72255;

	t24 = (x469>>(x470%(x471|x472)));

	if (t24 != 93) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x477 = 2U;
	volatile uint8_t x478 = 2U;
	static uint32_t x480 = 21890U;

	t25 = (x477>>(x478%(x479|x480)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x485 = UINT64_MAX;
	uint64_t x486 = 15LLU;
	volatile int32_t x487 = -1;
	int64_t x488 = -11967364383382LL;
	uint64_t t26 = 72594970993526LLU;

	t26 = (x485>>(x486%(x487|x488)));

	if (t26 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x497 = 1;
	static int32_t x499 = -1;
	int64_t x500 = INT64_MIN;
	int32_t t27 = 10756;

	t27 = (x497>>(x498%(x499|x500)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x537 = 54U;
	int64_t x538 = INT64_MAX;
	int32_t x539 = INT32_MAX;
	uint32_t x540 = 4224135U;
	int32_t t28 = -1515556;

	t28 = (x537>>(x538%(x539|x540)));

	if (t28 != 27) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x549 = UINT32_MAX;
	int16_t x550 = INT16_MIN;
	int16_t x551 = INT16_MAX;
	int64_t x552 = -1LL;

	t29 = (x549>>(x550%(x551|x552)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x577 = 893473209LL;
	volatile int8_t x578 = INT8_MIN;
	int8_t x580 = -1;
	int64_t t30 = -2190722839188023337LL;

	t30 = (x577>>(x578%(x579|x580)));

	if (t30 != 893473209LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x589 = INT32_MAX;
	uint16_t x590 = 2U;
	volatile int32_t t31 = 2;

	t31 = (x589>>(x590%(x591|x592)));

	if (t31 != 536870911) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x613 = 0;
	static int16_t x614 = INT16_MIN;
	volatile int8_t x615 = -1;

	t32 = (x613>>(x614%(x615|x616)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x637 = UINT16_MAX;
	int16_t x638 = 1;
	static int32_t x639 = -122;
	static int8_t x640 = -1;
	int32_t t33 = 86;

	t33 = (x637>>(x638%(x639|x640)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x645 = 109;
	static int32_t x647 = -1;
	uint32_t x648 = 60U;
	volatile int32_t t34 = 1340;

	t34 = (x645>>(x646%(x647|x648)));

	if (t34 != 109) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x649 = UINT32_MAX;
	uint32_t x650 = UINT32_MAX;
	volatile int16_t x651 = INT16_MAX;
	int8_t x652 = -1;
	uint32_t t35 = UINT32_MAX;

	t35 = (x649>>(x650%(x651|x652)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x689 = UINT8_MAX;
	uint16_t x690 = UINT16_MAX;
	static volatile int32_t x691 = INT32_MAX;
	int32_t x692 = INT32_MIN;
	static int32_t t36 = -2234;

	t36 = (x689>>(x690%(x691|x692)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x697 = 16502571U;
	int32_t x698 = INT32_MIN;
	static int32_t x699 = INT32_MAX;
	int16_t x700 = -13;
	static volatile uint32_t t37 = 8984810U;

	t37 = (x697>>(x698%(x699|x700)));

	if (t37 != 16502571U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x709 = UINT32_MAX;
	uint8_t x710 = 0U;
	int32_t x711 = -1;
	uint32_t t38 = UINT32_MAX;

	t38 = (x709>>(x710%(x711|x712)));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x714 = UINT64_MAX;
	uint8_t x715 = 43U;
	uint32_t t39 = UINT32_MAX;

	t39 = (x713>>(x714%(x715|x716)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x717 = 27364LLU;
	int32_t x718 = 12898330;
	static volatile int64_t x719 = 13LL;
	volatile uint64_t t40 = 2600LLU;

	t40 = (x717>>(x718%(x719|x720)));

	if (t40 != 27364LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x729 = 15;
	volatile int64_t x730 = INT64_MIN;
	int16_t x731 = -1;
	static int32_t t41 = -627126;

	t41 = (x729>>(x730%(x731|x732)));

	if (t41 != 15) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x765 = 41;
	static volatile uint64_t x766 = UINT64_MAX;
	uint64_t x767 = UINT64_MAX;
	int16_t x768 = INT16_MAX;
	int32_t t42 = 0;

	t42 = (x765>>(x766%(x767|x768)));

	if (t42 != 41) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x821 = UINT32_MAX;
	volatile uint64_t x822 = 1LLU;
	int64_t x823 = -1LL;
	volatile uint32_t t43 = 18063463U;

	t43 = (x821>>(x822%(x823|x824)));

	if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x833 = 0U;
	uint16_t x834 = UINT16_MAX;
	int32_t x835 = -684256;
	int16_t x836 = -6;
	int32_t t44 = 68735;

	t44 = (x833>>(x834%(x835|x836)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x849 = 9279LL;
	volatile int8_t x850 = INT8_MIN;
	static int64_t x851 = INT64_MAX;
	static int32_t x852 = -1;

	t45 = (x849>>(x850%(x851|x852)));

	if (t45 != 9279LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x853 = 1304692033162LLU;
	volatile uint8_t x854 = UINT8_MAX;
	int64_t x856 = INT64_MAX;
	volatile uint64_t t46 = 3412489954142953LLU;

	t46 = (x853>>(x854%(x855|x856)));

	if (t46 != 1304692033162LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x889 = 5819251993LLU;
	static uint64_t x890 = UINT64_MAX;
	int16_t x891 = INT16_MIN;
	int64_t x892 = -1LL;
	volatile uint64_t t47 = 28512680912LLU;

	t47 = (x889>>(x890%(x891|x892)));

	if (t47 != 5819251993LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x913 = 4U;
	static int32_t x914 = INT32_MIN;

	t48 = (x913>>(x914%(x915|x916)));

	if (t48 != 4U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x931 = 23U;
	uint32_t x932 = 1U;
	volatile int32_t t49 = -447174;

	t49 = (x929>>(x930%(x931|x932)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x933 = UINT32_MAX;
	volatile int32_t x934 = -1;
	int16_t x935 = 6;
	int16_t x936 = -1;
	uint32_t t50 = UINT32_MAX;

	t50 = (x933>>(x934%(x935|x936)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x941 = UINT16_MAX;
	uint32_t x942 = UINT32_MAX;
	volatile int8_t x943 = -20;
	uint8_t x944 = 0U;

	t51 = (x941>>(x942%(x943|x944)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x945 = 59U;
	int8_t x946 = INT8_MIN;
	int16_t x947 = -1;
	uint8_t x948 = UINT8_MAX;

	t52 = (x945>>(x946%(x947|x948)));

	if (t52 != 59) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x957 = 15;
	volatile int64_t x958 = INT64_MAX;
	volatile uint8_t x960 = 3U;
	volatile int32_t t53 = 1;

	t53 = (x957>>(x958%(x959|x960)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x971 = 0;
	int64_t t54 = 1LL;

	t54 = (x969>>(x970%(x971|x972)));

	if (t54 != 487648593LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x989 = 169U;
	volatile int8_t x990 = INT8_MIN;
	static int16_t x991 = -1;
	int64_t x992 = -102944LL;
	volatile int32_t t55 = -122855;

	t55 = (x989>>(x990%(x991|x992)));

	if (t55 != 169) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x997 = 4075856957LL;
	int32_t x998 = INT32_MIN;
	static int16_t x999 = 1;
	static uint16_t x1000 = 1U;
	int64_t t56 = -11LL;

	t56 = (x997>>(x998%(x999|x1000)));

	if (t56 != 4075856957LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1005 = 0U;
	volatile int8_t x1006 = INT8_MIN;
	int8_t x1008 = INT8_MAX;
	int32_t t57 = 3668;

	t57 = (x1005>>(x1006%(x1007|x1008)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x1013 = 1069437975U;
	volatile uint8_t x1014 = 5U;
	volatile int64_t x1015 = INT64_MIN;
	int64_t x1016 = INT64_MAX;
	uint32_t t58 = 1U;

	t58 = (x1013>>(x1014%(x1015|x1016)));

	if (t58 != 1069437975U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1017 = 58U;
	volatile int8_t x1019 = 0;
	int8_t x1020 = INT8_MAX;
	volatile int32_t t59 = -1433;

	t59 = (x1017>>(x1018%(x1019|x1020)));

	if (t59 != 29) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1029 = INT32_MAX;
	volatile uint16_t x1030 = 236U;
	int32_t x1031 = -1;
	static int64_t x1032 = INT64_MIN;
	int32_t t60 = INT32_MAX;

	t60 = (x1029>>(x1030%(x1031|x1032)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1037 = 30U;
	static uint8_t x1038 = 50U;
	volatile int16_t x1039 = -1;
	int32_t t61 = 40830;

	t61 = (x1037>>(x1038%(x1039|x1040)));

	if (t61 != 30) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1053 = INT32_MAX;
	int64_t x1054 = INT64_MIN;
	volatile int64_t x1055 = -1LL;
	uint32_t x1056 = 99001U;

	t62 = (x1053>>(x1054%(x1055|x1056)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1065 = 26U;
	int64_t x1067 = -1LL;
	int64_t x1068 = INT64_MIN;
	int32_t t63 = -3;

	t63 = (x1065>>(x1066%(x1067|x1068)));

	if (t63 != 26) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1085 = 171;
	static int8_t x1086 = INT8_MAX;
	uint8_t x1087 = 53U;
	int8_t x1088 = -1;
	int32_t t64 = 1;

	t64 = (x1085>>(x1086%(x1087|x1088)));

	if (t64 != 171) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1093 = UINT64_MAX;
	int64_t x1094 = 979496658968580862LL;
	static int64_t x1095 = -1LL;
	int64_t x1096 = -1LL;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x1093>>(x1094%(x1095|x1096)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1133 = 5U;
	int16_t x1134 = 0;
	static uint32_t x1135 = 1158625U;
	int64_t x1136 = INT64_MIN;
	volatile uint32_t t66 = 513039U;

	t66 = (x1133>>(x1134%(x1135|x1136)));

	if (t66 != 5U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1153 = UINT64_MAX;
	static int64_t x1154 = -930305013811799001LL;
	int16_t x1155 = INT16_MIN;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x1153>>(x1154%(x1155|x1156)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x1161 = INT64_MAX;
	int64_t x1162 = 1LL;
	static uint32_t x1163 = UINT32_MAX;
	static uint16_t x1164 = 31502U;

	t68 = (x1161>>(x1162%(x1163|x1164)));

	if (t68 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t t69 = 3905768467LLU;

	t69 = (x1253>>(x1254%(x1255|x1256)));

	if (t69 != 196748824LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1261 = INT64_MAX;
	volatile int64_t x1263 = -1LL;

	t70 = (x1261>>(x1262%(x1263|x1264)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1289 = 3U;
	uint32_t x1290 = UINT32_MAX;
	int32_t x1291 = INT32_MIN;
	int64_t x1292 = -1LL;
	static volatile int32_t t71 = -228;

	t71 = (x1289>>(x1290%(x1291|x1292)));

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1321 = INT16_MAX;
	int64_t x1322 = INT64_MIN;
	static int32_t t72 = -55342262;

	t72 = (x1321>>(x1322%(x1323|x1324)));

	if (t72 != 8191) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x1349 = UINT64_MAX;
	int32_t x1352 = -1;

	t73 = (x1349>>(x1350%(x1351|x1352)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x1353 = 1U;
	int64_t x1354 = -1LL;
	static int8_t x1355 = INT8_MIN;
	int32_t x1356 = INT32_MAX;
	volatile int32_t t74 = -28;

	t74 = (x1353>>(x1354%(x1355|x1356)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1357 = 74991682045LLU;
	int16_t x1358 = -1;
	static int16_t x1359 = INT16_MIN;
	static int64_t x1360 = -1LL;
	static volatile uint64_t t75 = 1LLU;

	t75 = (x1357>>(x1358%(x1359|x1360)));

	if (t75 != 74991682045LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1365 = INT16_MAX;
	int64_t x1367 = -1LL;
	uint16_t x1368 = 1499U;
	int32_t t76 = 2322;

	t76 = (x1365>>(x1366%(x1367|x1368)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x1405 = 7811U;
	volatile uint16_t x1406 = 1U;
	int32_t x1407 = -818689376;
	volatile int32_t t77 = 625;

	t77 = (x1405>>(x1406%(x1407|x1408)));

	if (t77 != 7811) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1443 = INT64_MIN;

	t78 = (x1441>>(x1442%(x1443|x1444)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1445 = 3956884789146LLU;
	static uint8_t x1446 = 3U;
	static int8_t x1447 = INT8_MIN;
	int16_t x1448 = -3685;
	uint64_t t79 = 2569188LLU;

	t79 = (x1445>>(x1446%(x1447|x1448)));

	if (t79 != 494610598643LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1485 = 3196LLU;
	int64_t x1486 = INT64_MAX;
	int16_t x1487 = -1;

	t80 = (x1485>>(x1486%(x1487|x1488)));

	if (t80 != 3196LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1489 = UINT32_MAX;
	int8_t x1491 = -1;
	static volatile uint32_t t81 = UINT32_MAX;

	t81 = (x1489>>(x1490%(x1491|x1492)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1517 = 7;
	uint64_t x1519 = UINT64_MAX;
	static volatile uint32_t x1520 = UINT32_MAX;

	t82 = (x1517>>(x1518%(x1519|x1520)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1569 = 2379319930665LL;
	int64_t x1570 = 8372189758LL;
	volatile int16_t x1571 = -7;
	volatile int8_t x1572 = -54;
	volatile int64_t t83 = 1411367340269891LL;

	t83 = (x1569>>(x1570%(x1571|x1572)));

	if (t83 != 297414991333LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1577 = UINT64_MAX;
	volatile int8_t x1578 = INT8_MIN;
	int8_t x1579 = -1;
	static int32_t x1580 = INT32_MIN;
	uint64_t t84 = UINT64_MAX;

	t84 = (x1577>>(x1578%(x1579|x1580)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1601 = INT64_MAX;
	int8_t x1602 = INT8_MIN;
	int64_t x1603 = 224LL;
	int16_t x1604 = -1;

	t85 = (x1601>>(x1602%(x1603|x1604)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1633 = 3;
	volatile int64_t x1634 = INT64_MIN;
	uint16_t x1635 = 1U;
	volatile int32_t x1636 = -1;
	int32_t t86 = -385;

	t86 = (x1633>>(x1634%(x1635|x1636)));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x1649 = UINT8_MAX;
	uint32_t x1650 = 0U;
	volatile uint8_t x1651 = 59U;
	static int32_t x1652 = -1;
	static int32_t t87 = -26142;

	t87 = (x1649>>(x1650%(x1651|x1652)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1657 = UINT32_MAX;
	volatile int8_t x1658 = -3;
	int32_t x1660 = -3;
	uint32_t t88 = UINT32_MAX;

	t88 = (x1657>>(x1658%(x1659|x1660)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1709 = 69U;
	static uint16_t x1710 = 4U;
	int16_t x1711 = INT16_MIN;
	int32_t x1712 = INT32_MAX;
	int32_t t89 = 7519;

	t89 = (x1709>>(x1710%(x1711|x1712)));

	if (t89 != 69) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1717 = UINT8_MAX;
	static int64_t x1718 = INT64_MAX;
	int16_t x1720 = INT16_MAX;
	int32_t t90 = -1355461;

	t90 = (x1717>>(x1718%(x1719|x1720)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1721 = 96782015275929448LLU;
	uint32_t x1722 = 6U;
	uint8_t x1724 = 38U;

	t91 = (x1721>>(x1722%(x1723|x1724)));

	if (t91 != 1512218988686397LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1745 = UINT64_MAX;
	uint8_t x1746 = 4U;
	int64_t x1747 = INT64_MIN;
	uint32_t x1748 = 117U;
	uint64_t t92 = 3038339066651LLU;

	t92 = (x1745>>(x1746%(x1747|x1748)));

	if (t92 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1769 = 188U;
	static uint8_t x1770 = 4U;
	int64_t x1771 = 3LL;
	uint8_t x1772 = 2U;
	int32_t t93 = -3;

	t93 = (x1769>>(x1770%(x1771|x1772)));

	if (t93 != 94) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1781 = 3U;
	uint8_t x1782 = 1U;
	int8_t x1783 = INT8_MAX;
	int64_t x1784 = -1LL;
	int32_t t94 = -10549;

	t94 = (x1781>>(x1782%(x1783|x1784)));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1790 = INT32_MAX;
	static int32_t x1792 = INT32_MAX;
	volatile uint64_t t95 = 571LLU;

	t95 = (x1789>>(x1790%(x1791|x1792)));

	if (t95 != 29010465830356LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1793 = 0;
	uint8_t x1794 = 3U;
	int64_t x1795 = INT64_MIN;
	int32_t t96 = -16266;

	t96 = (x1793>>(x1794%(x1795|x1796)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x1801 = INT16_MAX;
	uint64_t x1802 = UINT64_MAX;
	static int64_t x1803 = -1LL;
	int8_t x1804 = INT8_MIN;
	volatile int32_t t97 = -46291;

	t97 = (x1801>>(x1802%(x1803|x1804)));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x1834 = -1;
	static volatile int32_t x1835 = INT32_MIN;
	volatile int32_t t98 = 118;

	t98 = (x1833>>(x1834%(x1835|x1836)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1837 = 9U;
	int64_t x1838 = -1LL;
	uint8_t x1839 = 1U;
	int16_t x1840 = -1;
	volatile int32_t t99 = 1150;

	t99 = (x1837>>(x1838%(x1839|x1840)));

	if (t99 != 9) { NG(); } else { ; }
	
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

