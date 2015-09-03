#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x2 = 3681U;
int16_t x59 = -7;
uint64_t x62 = 251613648128LLU;
uint8_t x77 = UINT8_MAX;
volatile int32_t t6 = 242;
int16_t x88 = 0;
int8_t x89 = INT8_MIN;
int16_t x90 = 91;
int16_t x91 = 10;
volatile int8_t x125 = INT8_MIN;
uint32_t x150 = 3U;
int16_t x151 = 1;
uint32_t x159 = UINT32_MAX;
int16_t x160 = 4;
uint8_t x220 = 1U;
int16_t x225 = INT16_MIN;
uint64_t x243 = UINT64_MAX;
int16_t x317 = INT16_MIN;
uint64_t x318 = 1816LLU;
uint64_t t20 = 15LLU;
uint8_t x352 = 1U;
volatile int64_t t23 = 5649LL;
volatile int32_t x421 = INT32_MIN;
int64_t x423 = INT64_MIN;
uint8_t x438 = UINT8_MAX;
uint16_t x482 = 8U;
uint32_t x484 = 0U;
int64_t x538 = 19917857LL;
int16_t x544 = 56;
static int16_t x550 = 3695;
int16_t x559 = INT16_MIN;
static int64_t x593 = INT64_MAX;
volatile int8_t x630 = 23;
int8_t x631 = 2;
int8_t x647 = INT8_MIN;
int8_t x648 = INT8_MAX;
volatile int64_t x650 = INT64_MAX;
uint16_t x653 = 2216U;
int32_t x661 = INT32_MIN;
int8_t x664 = INT8_MAX;
volatile int32_t t42 = 6635;
volatile int32_t t43 = 3;
int8_t x683 = INT8_MIN;
volatile uint8_t x751 = 0U;
static int32_t t46 = 2816;
static volatile int8_t x754 = INT8_MAX;
static volatile uint16_t x778 = 768U;
static volatile uint32_t x780 = 29624630U;
volatile int32_t t48 = -5;
volatile int16_t x833 = INT16_MIN;
int64_t x835 = 3083876913LL;
int8_t x851 = INT8_MAX;
int16_t x871 = INT16_MIN;
volatile int64_t t54 = 51707577LL;
uint32_t x934 = UINT32_MAX;
int64_t t56 = 1708927419532LL;
int16_t x990 = INT16_MAX;
int64_t t58 = -2512415257LL;
int16_t x996 = 1;
static uint8_t x999 = 0U;
static int32_t x1011 = 6017;
int32_t x1036 = INT32_MIN;
volatile int32_t t62 = 1035;
volatile int64_t t63 = INT64_MAX;
int32_t x1059 = -62492;
uint8_t x1060 = 5U;
static int64_t x1095 = INT64_MAX;
int64_t t65 = 184053LL;
static int16_t x1106 = 31;
volatile uint16_t x1127 = 0U;
int32_t t68 = 33;
int32_t t70 = -101;
int64_t x1209 = INT64_MIN;
int32_t x1212 = 3304;
volatile uint16_t x1233 = UINT16_MAX;
int8_t x1256 = INT8_MIN;
int8_t x1287 = 1;
volatile uint32_t x1309 = 92356U;
volatile int64_t x1326 = INT64_MAX;
volatile int8_t x1354 = 0;
int64_t x1356 = INT64_MIN;
int64_t x1362 = INT64_MAX;
int32_t x1363 = INT32_MIN;
static int16_t x1379 = 1;
volatile int32_t t81 = -1;
int16_t x1454 = 45;
static int64_t x1455 = INT64_MIN;
int32_t t83 = 1033290;
int64_t x1469 = INT64_MAX;
uint8_t x1476 = 0U;
int8_t x1521 = 1;
volatile int16_t x1543 = INT16_MIN;
uint8_t x1544 = 3U;
static uint8_t x1563 = 1U;
int16_t x1564 = -1;
volatile uint32_t t90 = 401U;
static int32_t x1570 = 703842297;
int64_t t92 = -5LL;
int16_t x1578 = INT16_MAX;
static uint32_t x1587 = 53575U;
int32_t x1588 = INT32_MIN;
uint8_t x1593 = 0U;
int32_t x1594 = INT32_MAX;
int8_t x1595 = INT8_MAX;
int64_t x1633 = INT64_MIN;
uint64_t t97 = 72550LLU;
static int8_t x1664 = 4;
int64_t x1709 = INT64_MIN;
int64_t x1710 = INT64_MAX;
uint64_t x1712 = 15070501LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int32_t x3 = -4341367;
	volatile uint8_t x4 = 8U;
	volatile uint64_t t0 = 3553LLU;

	t0 = (x1&(x2>>(x3&x4)));

	if (t0 != 14LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 29149532128286LLU;
	int32_t x6 = 31287852;
	uint8_t x7 = 23U;
	volatile uint16_t x8 = UINT16_MAX;
	uint64_t t1 = 96018293322670734LLU;

	t1 = (x5&(x6>>(x7&x8)));

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	uint32_t x10 = 21830U;
	static int64_t x11 = INT64_MIN;
	static uint16_t x12 = UINT16_MAX;
	uint32_t t2 = 34865621U;

	t2 = (x9&(x10>>(x11&x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	static uint8_t x22 = 2U;
	static uint32_t x23 = 1U;
	int16_t x24 = -68;
	static int32_t t3 = -3;

	t3 = (x21&(x22>>(x23&x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x58 = UINT32_MAX;
	volatile uint8_t x60 = 7U;
	volatile uint32_t t4 = 861874034U;

	t4 = (x57&(x58>>(x59&x60)));

	if (t4 != 2147483520U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x61 = INT64_MAX;
	int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = 2907U;
	uint64_t t5 = 50199932858932668LLU;

	t5 = (x61&(x62>>(x63&x64)));

	if (t5 != 251613648128LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x78 = INT16_MAX;
	uint16_t x79 = 11U;
	int32_t x80 = -1;

	t6 = (x77&(x78>>(x79&x80)));

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = 7;
	int8_t x87 = INT8_MIN;
	int32_t t7 = 37;

	t7 = (x85&(x86>>(x87&x88)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x92 = 39U;
	int32_t t8 = 2;

	t8 = (x89&(x90>>(x91&x92)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x109 = -1LL;
	volatile int32_t x110 = 1;
	uint64_t x111 = 461671548490LLU;
	static volatile uint8_t x112 = 1U;
	volatile int64_t t9 = -3719720124LL;

	t9 = (x109&(x110>>(x111&x112)));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x126 = 15;
	int32_t x127 = 92;
	uint8_t x128 = 1U;
	int32_t t10 = -44744;

	t10 = (x125&(x126>>(x127&x128)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x149 = 78000U;
	static volatile uint32_t x152 = 1663U;
	volatile uint32_t t11 = 585077771U;

	t11 = (x149&(x150>>(x151&x152)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x157 = INT8_MIN;
	int32_t x158 = 53347;
	volatile int32_t t12 = 1743;

	t12 = (x157&(x158>>(x159&x160)));

	if (t12 != 3328) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x173 = 4U;
	static uint8_t x174 = 15U;
	uint8_t x175 = 0U;
	uint16_t x176 = 8725U;
	int32_t t13 = -994;

	t13 = (x173&(x174>>(x175&x176)));

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x177 = -1;
	int8_t x178 = 0;
	int64_t x179 = INT64_MIN;
	static uint16_t x180 = 1573U;
	int32_t t14 = -1284;

	t14 = (x177&(x178>>(x179&x180)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x217 = 19276510833037LLU;
	static volatile uint8_t x218 = 27U;
	static int8_t x219 = INT8_MAX;
	uint64_t t15 = 2LLU;

	t15 = (x217&(x218>>(x219&x220)));

	if (t15 != 13LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x226 = UINT8_MAX;
	static int16_t x227 = INT16_MIN;
	int16_t x228 = 631;
	int32_t t16 = 98;

	t16 = (x225&(x226>>(x227&x228)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x229 = 3U;
	uint16_t x230 = UINT16_MAX;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	static volatile uint32_t t17 = 7524U;

	t17 = (x229&(x230>>(x231&x232)));

	if (t17 != 3U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x241 = UINT8_MAX;
	uint8_t x242 = 23U;
	uint64_t x244 = 0LLU;
	volatile int32_t t18 = 3605607;

	t18 = (x241&(x242>>(x243&x244)));

	if (t18 != 23) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x319 = INT16_MAX;
	int16_t x320 = INT16_MIN;
	static volatile uint64_t t19 = 1362061LLU;

	t19 = (x317&(x318>>(x319&x320)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x329 = INT32_MIN;
	volatile uint64_t x330 = UINT64_MAX;
	volatile uint16_t x331 = 509U;
	int8_t x332 = 1;

	t20 = (x329&(x330>>(x331&x332)));

	if (t20 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x349 = INT32_MIN;
	uint8_t x350 = 124U;
	uint16_t x351 = 340U;
	volatile int32_t t21 = -260972;

	t21 = (x349&(x350>>(x351&x352)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x377 = 1723267682256396LL;
	static int8_t x378 = 0;
	uint16_t x379 = 15U;
	int32_t x380 = INT32_MIN;
	static volatile int64_t t22 = -2701544685356762LL;

	t22 = (x377&(x378>>(x379&x380)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x405 = INT64_MIN;
	int32_t x406 = INT32_MAX;
	static int64_t x407 = INT64_MIN;
	uint64_t x408 = 0LLU;

	t23 = (x405&(x406>>(x407&x408)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x422 = 61621292423LL;
	uint8_t x424 = UINT8_MAX;
	static volatile int64_t t24 = -3745259590800LL;

	t24 = (x421&(x422>>(x423&x424)));

	if (t24 != 60129542144LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x437 = INT8_MAX;
	int8_t x439 = 22;
	static int16_t x440 = -1;
	int32_t t25 = -62310;

	t25 = (x437&(x438>>(x439&x440)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x461 = 463451146U;
	uint64_t x462 = 68492822444545LLU;
	static uint16_t x463 = UINT16_MAX;
	static int64_t x464 = INT64_MIN;
	volatile uint64_t t26 = 4104111706428345LLU;

	t26 = (x461&(x462>>(x463&x464)));

	if (t26 != 437891072LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x477 = INT32_MAX;
	static uint8_t x478 = UINT8_MAX;
	static int8_t x479 = 0;
	int64_t x480 = INT64_MIN;
	int32_t t27 = -5138786;

	t27 = (x477&(x478>>(x479&x480)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x481 = 25219LLU;
	uint32_t x483 = 3156U;
	volatile uint64_t t28 = 7905LLU;

	t28 = (x481&(x482>>(x483&x484)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x509 = -1361725908233LL;
	uint16_t x510 = 57U;
	static volatile uint16_t x511 = 95U;
	static int64_t x512 = INT64_MIN;
	volatile int64_t t29 = 519LL;

	t29 = (x509&(x510>>(x511&x512)));

	if (t29 != 49LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x517 = 11U;
	static uint8_t x518 = UINT8_MAX;
	volatile uint8_t x519 = UINT8_MAX;
	static uint64_t x520 = 859396LLU;
	volatile int32_t t30 = 1;

	t30 = (x517&(x518>>(x519&x520)));

	if (t30 != 11) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x537 = 0;
	volatile int16_t x539 = INT16_MIN;
	static uint8_t x540 = 5U;
	int64_t t31 = 12752LL;

	t31 = (x537&(x538>>(x539&x540)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x541 = UINT32_MAX;
	static uint64_t x542 = 22938LLU;
	volatile uint32_t x543 = UINT32_MAX;
	uint64_t t32 = 97355945LLU;

	t32 = (x541&(x542>>(x543&x544)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x549 = 2568LLU;
	int32_t x551 = 3001;
	int32_t x552 = INT32_MIN;
	static volatile uint64_t t33 = 20979709561932290LLU;

	t33 = (x549&(x550>>(x551&x552)));

	if (t33 != 2568LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x557 = -1;
	int16_t x558 = 848;
	int8_t x560 = 4;
	static int32_t t34 = 273596180;

	t34 = (x557&(x558>>(x559&x560)));

	if (t34 != 848) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x577 = UINT32_MAX;
	volatile int8_t x578 = 0;
	int64_t x579 = INT64_MIN;
	static int16_t x580 = INT16_MAX;
	volatile uint32_t t35 = 1057344839U;

	t35 = (x577&(x578>>(x579&x580)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x589 = 10U;
	uint8_t x590 = UINT8_MAX;
	int16_t x591 = 841;
	static int64_t x592 = 1722021042LL;
	volatile int32_t t36 = -22109295;

	t36 = (x589&(x590>>(x591&x592)));

	if (t36 != 10) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x594 = 195;
	volatile uint8_t x595 = UINT8_MAX;
	int16_t x596 = INT16_MIN;
	volatile int64_t t37 = 72LL;

	t37 = (x593&(x594>>(x595&x596)));

	if (t37 != 195LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x629 = -1;
	int8_t x632 = 0;
	volatile int32_t t38 = -42826;

	t38 = (x629&(x630>>(x631&x632)));

	if (t38 != 23) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x645 = 2U;
	volatile int8_t x646 = 50;
	static int32_t t39 = 25302166;

	t39 = (x645&(x646>>(x647&x648)));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x649 = 7449U;
	uint8_t x651 = 8U;
	int8_t x652 = -1;
	volatile int64_t t40 = 1LL;

	t40 = (x649&(x650>>(x651&x652)));

	if (t40 != 7449LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x654 = 5014U;
	int8_t x655 = INT8_MIN;
	static int16_t x656 = 1;
	uint32_t t41 = 6104U;

	t41 = (x653&(x654>>(x655&x656)));

	if (t41 != 128U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x662 = 23845U;
	static int16_t x663 = INT16_MIN;

	t42 = (x661&(x662>>(x663&x664)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x669 = INT8_MIN;
	static uint8_t x670 = 3U;
	int32_t x671 = 1;
	int64_t x672 = INT64_MAX;

	t43 = (x669&(x670>>(x671&x672)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x681 = 672;
	static int32_t x682 = INT32_MAX;
	static uint8_t x684 = 0U;
	static volatile int32_t t44 = -2054911;

	t44 = (x681&(x682>>(x683&x684)));

	if (t44 != 672) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x689 = INT64_MIN;
	volatile int16_t x690 = INT16_MAX;
	int8_t x691 = 1;
	uint16_t x692 = 6997U;
	int64_t t45 = 34812494546364789LL;

	t45 = (x689&(x690>>(x691&x692)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x749 = UINT16_MAX;
	uint8_t x750 = 9U;
	static int32_t x752 = 73078;

	t46 = (x749&(x750>>(x751&x752)));

	if (t46 != 9) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x753 = INT16_MIN;
	uint8_t x755 = 5U;
	int32_t x756 = 1;
	volatile int32_t t47 = 1;

	t47 = (x753&(x754>>(x755&x756)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x777 = 46U;
	int32_t x779 = INT32_MIN;

	t48 = (x777&(x778>>(x779&x780)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x793 = -1LL;
	int16_t x794 = 1;
	int32_t x795 = 457101093;
	uint16_t x796 = 1U;
	volatile int64_t t49 = -22885125380LL;

	t49 = (x793&(x794>>(x795&x796)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x825 = INT16_MAX;
	uint32_t x826 = UINT32_MAX;
	int32_t x827 = INT32_MIN;
	volatile int8_t x828 = INT8_MAX;
	volatile uint32_t t50 = 254489927U;

	t50 = (x825&(x826>>(x827&x828)));

	if (t50 != 32767U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x834 = UINT16_MAX;
	static int64_t x836 = INT64_MIN;
	int32_t t51 = 261;

	t51 = (x833&(x834>>(x835&x836)));

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x849 = 1502664271U;
	uint8_t x850 = 29U;
	uint32_t x852 = 261U;
	uint32_t t52 = 1194U;

	t52 = (x849&(x850>>(x851&x852)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x869 = 30327452U;
	int8_t x870 = INT8_MAX;
	int8_t x872 = 0;
	uint32_t t53 = 4529U;

	t53 = (x869&(x870>>(x871&x872)));

	if (t53 != 28U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x877 = 103LL;
	uint8_t x878 = UINT8_MAX;
	volatile int16_t x879 = INT16_MIN;
	uint16_t x880 = 724U;

	t54 = (x877&(x878>>(x879&x880)));

	if (t54 != 103LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x925 = 1909504943U;
	static int8_t x926 = INT8_MAX;
	int8_t x927 = 2;
	uint8_t x928 = UINT8_MAX;
	volatile uint32_t t55 = 152120U;

	t55 = (x925&(x926>>(x927&x928)));

	if (t55 != 15U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x933 = 303812980561668LL;
	static uint16_t x935 = 7U;
	int16_t x936 = INT16_MIN;

	t56 = (x933&(x934>>(x935&x936)));

	if (t56 != 4173911812LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x973 = INT8_MIN;
	int64_t x974 = INT64_MAX;
	static int8_t x975 = INT8_MAX;
	int8_t x976 = 9;
	volatile int64_t t57 = 92304942LL;

	t57 = (x973&(x974>>(x975&x976)));

	if (t57 != 18014398509481856LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x989 = 5466732153024LL;
	uint8_t x991 = UINT8_MAX;
	uint8_t x992 = 2U;

	t58 = (x989&(x990>>(x991&x992)));

	if (t58 != 2240LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x993 = -1;
	volatile int16_t x994 = 745;
	volatile int64_t x995 = 9603589LL;
	int32_t t59 = 150374;

	t59 = (x993&(x994>>(x995&x996)));

	if (t59 != 372) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x997 = INT8_MAX;
	uint16_t x998 = 11689U;
	int8_t x1000 = INT8_MAX;
	volatile int32_t t60 = 1;

	t60 = (x997&(x998>>(x999&x1000)));

	if (t60 != 41) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x1009 = 549U;
	static volatile int16_t x1010 = INT16_MAX;
	int32_t x1012 = INT32_MIN;
	uint32_t t61 = 33972U;

	t61 = (x1009&(x1010>>(x1011&x1012)));

	if (t61 != 549U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1033 = 9U;
	uint16_t x1034 = 21341U;
	int8_t x1035 = INT8_MAX;

	t62 = (x1033&(x1034>>(x1035&x1036)));

	if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1045 = -1;
	volatile int64_t x1046 = INT64_MAX;
	static int32_t x1047 = INT32_MAX;
	volatile int32_t x1048 = 0;

	t63 = (x1045&(x1046>>(x1047&x1048)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1057 = 81;
	static uint64_t x1058 = 335LLU;
	volatile uint64_t t64 = 6264LLU;

	t64 = (x1057&(x1058>>(x1059&x1060)));

	if (t64 != 16LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1093 = 2034164LL;
	uint32_t x1094 = 1132086392U;
	static int64_t x1096 = INT64_MIN;

	t65 = (x1093&(x1094>>(x1095&x1096)));

	if (t65 != 1704048LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x1105 = -1;
	static volatile int16_t x1107 = 46;
	static volatile uint16_t x1108 = 11U;
	static int32_t t66 = -180829;

	t66 = (x1105&(x1106>>(x1107&x1108)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1125 = INT64_MIN;
	uint8_t x1126 = UINT8_MAX;
	uint64_t x1128 = 14984339390428LLU;
	static int64_t t67 = -7695997649441LL;

	t67 = (x1125&(x1126>>(x1127&x1128)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1173 = 58U;
	int8_t x1174 = INT8_MAX;
	int16_t x1175 = -4;
	volatile int8_t x1176 = 30;

	t68 = (x1173&(x1174>>(x1175&x1176)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1177 = INT8_MAX;
	static int64_t x1178 = INT64_MAX;
	static uint32_t x1179 = 1U;
	static int32_t x1180 = -14702;
	int64_t t69 = -59946232272LL;

	t69 = (x1177&(x1178>>(x1179&x1180)));

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1189 = -1;
	uint8_t x1190 = 0U;
	int64_t x1191 = 68296786214496783LL;
	uint32_t x1192 = 1U;

	t70 = (x1189&(x1190>>(x1191&x1192)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1210 = 331;
	int32_t x1211 = INT32_MIN;
	volatile int64_t t71 = 18425305LL;

	t71 = (x1209&(x1210>>(x1211&x1212)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1234 = INT64_MAX;
	int64_t x1235 = INT64_MIN;
	static uint16_t x1236 = UINT16_MAX;
	volatile int64_t t72 = -15788571700499LL;

	t72 = (x1233&(x1234>>(x1235&x1236)));

	if (t72 != 65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1253 = -8763050796722LL;
	volatile int64_t x1254 = INT64_MAX;
	uint8_t x1255 = 44U;
	volatile int64_t t73 = -136606673LL;

	t73 = (x1253&(x1254>>(x1255&x1256)));

	if (t73 != 9223363273803979086LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1285 = INT8_MAX;
	int32_t x1286 = INT32_MAX;
	uint64_t x1288 = UINT64_MAX;
	volatile int32_t t74 = -6293217;

	t74 = (x1285&(x1286>>(x1287&x1288)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1310 = INT64_MAX;
	uint8_t x1311 = 4U;
	uint8_t x1312 = UINT8_MAX;
	int64_t t75 = 944963512441397LL;

	t75 = (x1309&(x1310>>(x1311&x1312)));

	if (t75 != 92356LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x1325 = INT8_MIN;
	volatile int32_t x1327 = -918120690;
	uint8_t x1328 = 7U;
	static volatile int64_t t76 = -1LL;

	t76 = (x1325&(x1326>>(x1327&x1328)));

	if (t76 != 144115188075855744LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1353 = 3390346867713LLU;
	volatile uint64_t x1355 = 41933LLU;
	volatile uint64_t t77 = 26313LLU;

	t77 = (x1353&(x1354>>(x1355&x1356)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x1361 = UINT32_MAX;
	static int16_t x1364 = INT16_MAX;
	volatile int64_t t78 = -128789423230033LL;

	t78 = (x1361&(x1362>>(x1363&x1364)));

	if (t78 != 4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1377 = INT8_MIN;
	int8_t x1378 = 0;
	uint8_t x1380 = 23U;
	int32_t t79 = -467;

	t79 = (x1377&(x1378>>(x1379&x1380)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1401 = 0U;
	uint16_t x1402 = 3007U;
	int64_t x1403 = INT64_MAX;
	int8_t x1404 = 23;
	volatile int32_t t80 = -208374389;

	t80 = (x1401&(x1402>>(x1403&x1404)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x1441 = 153;
	uint16_t x1442 = 1316U;
	static uint16_t x1443 = UINT16_MAX;
	volatile uint16_t x1444 = 0U;

	t81 = (x1441&(x1442>>(x1443&x1444)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x1445 = 240;
	uint32_t x1446 = 396U;
	uint8_t x1447 = 1U;
	int16_t x1448 = INT16_MIN;
	uint32_t t82 = 2U;

	t82 = (x1445&(x1446>>(x1447&x1448)));

	if (t82 != 128U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x1453 = INT16_MAX;
	static int16_t x1456 = INT16_MAX;

	t83 = (x1453&(x1454>>(x1455&x1456)));

	if (t83 != 45) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1461 = 13;
	uint8_t x1462 = UINT8_MAX;
	int8_t x1463 = INT8_MAX;
	int32_t x1464 = INT32_MIN;
	int32_t t84 = -108714;

	t84 = (x1461&(x1462>>(x1463&x1464)));

	if (t84 != 13) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1470 = UINT64_MAX;
	int8_t x1471 = 5;
	int64_t x1472 = INT64_MIN;
	uint64_t t85 = 421507LLU;

	t85 = (x1469&(x1470>>(x1471&x1472)));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x1473 = INT8_MIN;
	uint64_t x1474 = 4191772698126834LLU;
	int8_t x1475 = -1;
	uint64_t t86 = 240LLU;

	t86 = (x1473&(x1474>>(x1475&x1476)));

	if (t86 != 4191772698126720LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1509 = -1LL;
	uint64_t x1510 = 53LLU;
	uint8_t x1511 = 0U;
	uint64_t x1512 = 2479291LLU;
	volatile uint64_t t87 = 238555002749560332LLU;

	t87 = (x1509&(x1510>>(x1511&x1512)));

	if (t87 != 53LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1522 = INT16_MAX;
	volatile int8_t x1523 = 2;
	uint8_t x1524 = UINT8_MAX;
	static int32_t t88 = -56154567;

	t88 = (x1521&(x1522>>(x1523&x1524)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1541 = -1LL;
	volatile uint16_t x1542 = UINT16_MAX;
	static int64_t t89 = 23180441LL;

	t89 = (x1541&(x1542>>(x1543&x1544)));

	if (t89 != 65535LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x1561 = 3500539U;
	int32_t x1562 = 235281;

	t90 = (x1561&(x1562>>(x1563&x1564)));

	if (t90 != 84360U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1565 = INT64_MAX;
	uint16_t x1566 = 1U;
	int64_t x1567 = 1867411694LL;
	int64_t x1568 = INT64_MIN;
	int64_t t91 = 0LL;

	t91 = (x1565&(x1566>>(x1567&x1568)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1569 = INT64_MIN;
	uint8_t x1571 = 1U;
	uint8_t x1572 = 1U;

	t92 = (x1569&(x1570>>(x1571&x1572)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x1577 = 843984823906781638LLU;
	int64_t x1579 = INT64_MIN;
	static uint8_t x1580 = 0U;
	static uint64_t t93 = 8124LLU;

	t93 = (x1577&(x1578>>(x1579&x1580)));

	if (t93 != 18886LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1585 = 18U;
	uint16_t x1586 = 71U;
	int32_t t94 = 24;

	t94 = (x1585&(x1586>>(x1587&x1588)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1596 = 134U;
	volatile int32_t t95 = -12149;

	t95 = (x1593&(x1594>>(x1595&x1596)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1597 = -22780697483685876LL;
	int64_t x1598 = INT64_MAX;
	uint16_t x1599 = 482U;
	uint16_t x1600 = 2U;
	volatile int64_t t96 = 30760962LL;

	t96 = (x1597&(x1598>>(x1599&x1600)));

	if (t96 != 2283062311730008076LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1634 = 483404739LLU;
	int32_t x1635 = 1736;
	static int16_t x1636 = INT16_MIN;

	t97 = (x1633&(x1634>>(x1635&x1636)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1661 = -1117LL;
	volatile int16_t x1662 = 173;
	static uint8_t x1663 = UINT8_MAX;
	volatile int64_t t98 = 3LL;

	t98 = (x1661&(x1662>>(x1663&x1664)));

	if (t98 != 2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1711 = INT64_MIN;
	volatile int64_t t99 = 49624154LL;

	t99 = (x1709&(x1710>>(x1711&x1712)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

