#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x7 = -870458475LL;
int32_t x8 = INT32_MIN;
int32_t x17 = 1257;
static uint32_t x89 = 86U;
int64_t x91 = INT64_MIN;
volatile int8_t x117 = INT8_MAX;
int8_t x119 = -1;
static uint8_t x205 = UINT8_MAX;
uint8_t x237 = 28U;
static uint8_t x242 = 118U;
static int16_t x260 = -1;
uint8_t x262 = UINT8_MAX;
int64_t t14 = 1157283077775156LL;
static int8_t x273 = INT8_MAX;
static int16_t x274 = 0;
int16_t x275 = INT16_MIN;
int64_t x287 = -1LL;
volatile int32_t x331 = INT32_MIN;
uint8_t x382 = 0U;
static int32_t t21 = -1;
static volatile int64_t x444 = 3145781371076167LL;
volatile uint16_t x453 = UINT16_MAX;
static uint8_t x455 = UINT8_MAX;
int8_t x471 = -1;
int32_t t25 = 72;
volatile uint64_t x473 = 1914LLU;
volatile int32_t x490 = 33875868;
int64_t x500 = INT64_MAX;
uint16_t x549 = 217U;
volatile uint8_t x552 = 1U;
volatile int32_t t34 = 16220;
int32_t x567 = -280689;
int8_t x568 = -1;
volatile int64_t t35 = INT64_MAX;
static volatile int16_t x650 = -1;
uint16_t x660 = UINT16_MAX;
volatile int16_t x663 = INT16_MIN;
uint64_t t40 = 6847027435229LLU;
uint32_t x703 = UINT32_MAX;
volatile int16_t x758 = -1;
int32_t x760 = INT32_MAX;
volatile int32_t t43 = -1;
volatile int16_t x780 = INT16_MAX;
int32_t x813 = 106045;
uint64_t x829 = 0LLU;
static int16_t x831 = INT16_MIN;
static volatile int8_t x846 = 5;
int64_t x847 = -1LL;
uint64_t t55 = UINT64_MAX;
int64_t x955 = 289452926376646626LL;
int8_t x1055 = INT8_MIN;
int32_t t66 = 2801433;
int16_t x1065 = 13;
int16_t x1066 = INT16_MIN;
int32_t t67 = 438;
int16_t x1106 = -1450;
int32_t x1107 = INT32_MIN;
int32_t x1108 = INT32_MIN;
static int8_t x1111 = INT8_MIN;
volatile int64_t x1117 = 29387LL;
uint8_t x1118 = UINT8_MAX;
uint8_t x1185 = 18U;
int8_t x1188 = INT8_MIN;
uint32_t x1213 = UINT32_MAX;
uint16_t x1215 = 1492U;
volatile uint32_t t75 = UINT32_MAX;
int64_t x1235 = INT64_MIN;
int16_t x1236 = INT16_MIN;
static uint64_t x1245 = UINT64_MAX;
static int16_t x1246 = 58;
static int8_t x1252 = -54;
int64_t t78 = -1845330LL;
int64_t x1268 = INT64_MAX;
int16_t x1278 = -1;
int32_t t81 = 1254806;
volatile uint8_t x1329 = 6U;
static int32_t x1333 = 0;
int8_t x1358 = INT8_MAX;
int32_t t87 = -37;
volatile uint64_t t89 = 53717LLU;
static uint16_t x1437 = 1940U;
uint8_t x1438 = 19U;
int32_t t91 = 4966;
volatile int8_t x1469 = 1;
int64_t x1471 = INT64_MAX;
volatile int64_t t94 = INT64_MAX;
int64_t x1519 = INT64_MIN;
uint64_t x1522 = 311760206713070LLU;
uint32_t x1554 = 3U;
int8_t x1561 = INT8_MAX;
uint64_t x1562 = UINT64_MAX;
uint64_t x1563 = UINT64_MAX;


void f0(void) {
	uint8_t x5 = 1U;
	int16_t x6 = INT16_MIN;
	volatile int32_t t0 = -118772292;

	t0 = (x5<<(x6/(x7&x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x18 = 1;
	static volatile int32_t x19 = -6;
	int64_t x20 = -46LL;
	static volatile int32_t t1 = -1;

	t1 = (x17<<(x18/(x19&x20)));

	if (t1 != 1257) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x29 = INT64_MAX;
	static volatile uint64_t x30 = 4566941352272LLU;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	int64_t t2 = INT64_MAX;

	t2 = (x29<<(x30/(x31&x32)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x65 = 15038886566LLU;
	uint32_t x66 = 745U;
	int16_t x67 = -1;
	uint64_t x68 = 19230298890638620LLU;
	uint64_t t3 = 40388LLU;

	t3 = (x65<<(x66/(x67&x68)));

	if (t3 != 15038886566LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x73 = 0U;
	static volatile int16_t x74 = -1;
	int8_t x75 = -1;
	volatile uint16_t x76 = UINT16_MAX;
	uint32_t t4 = 9U;

	t4 = (x73<<(x74/(x75&x76)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x90 = -1;
	static int64_t x92 = INT64_MIN;
	volatile uint32_t t5 = 206020263U;

	t5 = (x89<<(x90/(x91&x92)));

	if (t5 != 86U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x118 = -1;
	static uint8_t x120 = 27U;
	volatile int32_t t6 = -1572;

	t6 = (x117<<(x118/(x119&x120)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x141 = 24;
	uint64_t x142 = 113LLU;
	uint64_t x143 = UINT64_MAX;
	static volatile int8_t x144 = INT8_MIN;
	volatile int32_t t7 = -49456859;

	t7 = (x141<<(x142/(x143&x144)));

	if (t7 != 24) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MAX;
	volatile int64_t x156 = 3802154769681266301LL;
	uint32_t t8 = UINT32_MAX;

	t8 = (x153<<(x154/(x155&x156)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x206 = -1;
	volatile int32_t x207 = INT32_MIN;
	int64_t x208 = 907449662176913534LL;
	int32_t t9 = 25189;

	t9 = (x205<<(x206/(x207&x208)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x213 = 4U;
	uint64_t x214 = 119081LLU;
	int64_t x215 = -1LL;
	uint16_t x216 = UINT16_MAX;
	int32_t t10 = 6575;

	t10 = (x213<<(x214/(x215&x216)));

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x238 = 1;
	static uint8_t x239 = 9U;
	int32_t x240 = INT32_MAX;
	volatile int32_t t11 = -3396723;

	t11 = (x237<<(x238/(x239&x240)));

	if (t11 != 28) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x241 = 1728152197757LLU;
	int8_t x243 = 2;
	int32_t x244 = -1;
	volatile uint64_t t12 = 1LLU;

	t12 = (x241<<(x242/(x243&x244)));

	if (t12 != 16717361816799281152LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x257 = 126189U;
	int8_t x258 = INT8_MAX;
	uint32_t x259 = 9586139U;
	static uint32_t t13 = 112178U;

	t13 = (x257<<(x258/(x259&x260)));

	if (t13 != 126189U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x261 = 2828426450LL;
	int32_t x263 = -2;
	int16_t x264 = -398;

	t14 = (x261<<(x262/(x263&x264)));

	if (t14 != 2828426450LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x276 = -1;
	volatile int32_t t15 = 3305927;

	t15 = (x273<<(x274/(x275&x276)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MIN;
	int32_t x288 = 6749970;
	volatile int32_t t16 = -55497109;

	t16 = (x285<<(x286/(x287&x288)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x317 = 1;
	static uint16_t x318 = UINT16_MAX;
	volatile int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MAX;
	static int32_t t17 = -492659;

	t17 = (x317<<(x318/(x319&x320)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x325 = INT16_MAX;
	int64_t x326 = 1271028LL;
	volatile int8_t x327 = -1;
	static uint32_t x328 = 1639774040U;
	volatile int32_t t18 = 1;

	t18 = (x325<<(x326/(x327&x328)));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x329 = 1419U;
	int32_t x330 = INT32_MIN;
	int64_t x332 = INT64_MIN;
	static int32_t t19 = -143011073;

	t19 = (x329<<(x330/(x331&x332)));

	if (t19 != 1419) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x353 = UINT32_MAX;
	int32_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MAX;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x353<<(x354/(x355&x356)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x383 = -1;
	volatile uint32_t x384 = 202855U;

	t21 = (x381<<(x382/(x383&x384)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x389 = INT32_MAX;
	volatile int16_t x390 = 0;
	volatile int8_t x391 = INT8_MIN;
	int8_t x392 = -24;
	static int32_t t22 = INT32_MAX;

	t22 = (x389<<(x390/(x391&x392)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x441 = 370791355737943649LLU;
	volatile int16_t x442 = -254;
	int16_t x443 = INT16_MIN;
	uint64_t t23 = 435326LLU;

	t23 = (x441<<(x442/(x443&x444)));

	if (t23 != 370791355737943649LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x454 = 10;
	int64_t x456 = INT64_MAX;
	int32_t t24 = -85;

	t24 = (x453<<(x454/(x455&x456)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x469 = 17;
	int16_t x470 = -1;
	int8_t x472 = -11;

	t25 = (x469<<(x470/(x471&x472)));

	if (t25 != 17) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x474 = 1;
	int32_t x475 = -1;
	int64_t x476 = 787LL;
	uint64_t t26 = 65LLU;

	t26 = (x473<<(x474/(x475&x476)));

	if (t26 != 1914LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x481 = 3U;
	int16_t x482 = INT16_MIN;
	int32_t x483 = INT32_MAX;
	int32_t x484 = -1;
	volatile int32_t t27 = 27492;

	t27 = (x481<<(x482/(x483&x484)));

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x489 = 79860834U;
	uint32_t x491 = UINT32_MAX;
	static int32_t x492 = -4573;
	volatile uint32_t t28 = 4464U;

	t28 = (x489<<(x490/(x491&x492)));

	if (t28 != 79860834U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x497 = 2U;
	static uint16_t x498 = UINT16_MAX;
	int32_t x499 = INT32_MAX;
	volatile int32_t t29 = 88661;

	t29 = (x497<<(x498/(x499&x500)));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x505 = UINT8_MAX;
	static int8_t x506 = 1;
	int64_t x507 = INT64_MIN;
	int64_t x508 = -880391LL;
	int32_t t30 = 255598439;

	t30 = (x505<<(x506/(x507&x508)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x517 = 224LLU;
	int32_t x518 = -1794189;
	static int8_t x519 = INT8_MIN;
	uint32_t x520 = UINT32_MAX;
	uint64_t t31 = 10LLU;

	t31 = (x517<<(x518/(x519&x520)));

	if (t31 != 224LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x533 = 245U;
	uint8_t x534 = 9U;
	int32_t x535 = INT32_MAX;
	uint64_t x536 = 12989LLU;
	int32_t t32 = -104;

	t32 = (x533<<(x534/(x535&x536)));

	if (t32 != 245) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x550 = 4U;
	uint16_t x551 = UINT16_MAX;
	static int32_t t33 = 98336571;

	t33 = (x549<<(x550/(x551&x552)));

	if (t33 != 3472) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x561 = UINT8_MAX;
	int16_t x562 = 526;
	int16_t x563 = INT16_MAX;
	volatile uint16_t x564 = 3798U;

	t34 = (x561<<(x562/(x563&x564)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x565 = INT64_MAX;
	int16_t x566 = -1;

	t35 = (x565<<(x566/(x567&x568)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x637 = 2950213139259310LLU;
	volatile int8_t x638 = 0;
	int8_t x639 = INT8_MIN;
	static uint64_t x640 = 6418925871886012100LLU;
	uint64_t t36 = 22425511LLU;

	t36 = (x637<<(x638/(x639&x640)));

	if (t36 != 2950213139259310LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x649 = 24134U;
	int64_t x651 = -1LL;
	static int32_t x652 = INT32_MIN;
	int32_t t37 = 32819293;

	t37 = (x649<<(x650/(x651&x652)));

	if (t37 != 24134) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x657 = 1206U;
	int64_t x658 = -1LL;
	int16_t x659 = -1698;
	uint32_t t38 = 61U;

	t38 = (x657<<(x658/(x659&x660)));

	if (t38 != 1206U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x661 = 1745;
	int8_t x662 = 1;
	int16_t x664 = -1;
	int32_t t39 = -49;

	t39 = (x661<<(x662/(x663&x664)));

	if (t39 != 1745) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x669 = 32660521965460134LLU;
	static volatile int8_t x670 = -1;
	int8_t x671 = -1;
	int16_t x672 = -1;

	t40 = (x669<<(x670/(x671&x672)));

	if (t40 != 65321043930920268LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x701 = 3U;
	int8_t x702 = INT8_MAX;
	int32_t x704 = -1;
	int32_t t41 = 137347;

	t41 = (x701<<(x702/(x703&x704)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x713 = 1091510U;
	static volatile int64_t x714 = -1LL;
	int8_t x715 = INT8_MIN;
	int16_t x716 = INT16_MIN;
	static volatile uint32_t t42 = 15U;

	t42 = (x713<<(x714/(x715&x716)));

	if (t42 != 1091510U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x757 = 0U;
	uint16_t x759 = UINT16_MAX;

	t43 = (x757<<(x758/(x759&x760)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x761 = INT8_MAX;
	uint8_t x762 = 13U;
	int32_t x763 = INT32_MIN;
	volatile int64_t x764 = INT64_MAX;
	volatile int32_t t44 = -6932;

	t44 = (x761<<(x762/(x763&x764)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x765 = 22;
	uint64_t x766 = UINT64_MAX;
	int8_t x767 = INT8_MIN;
	int64_t x768 = INT64_MIN;
	int32_t t45 = -2751498;

	t45 = (x765<<(x766/(x767&x768)));

	if (t45 != 44) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x777 = 12U;
	int16_t x778 = -1;
	static int16_t x779 = 4;
	int32_t t46 = -165;

	t46 = (x777<<(x778/(x779&x780)));

	if (t46 != 12) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x793 = 2;
	uint32_t x794 = UINT32_MAX;
	static int32_t x795 = -1;
	volatile int8_t x796 = INT8_MIN;
	int32_t t47 = 959;

	t47 = (x793<<(x794/(x795&x796)));

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x809 = UINT64_MAX;
	static uint32_t x810 = UINT32_MAX;
	static uint32_t x811 = UINT32_MAX;
	volatile int32_t x812 = -1;
	uint64_t t48 = 21336639494460LLU;

	t48 = (x809<<(x810/(x811&x812)));

	if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x814 = INT64_MAX;
	static int64_t x815 = INT64_MIN;
	int64_t x816 = -11213707247560LL;
	volatile int32_t t49 = -161;

	t49 = (x813<<(x814/(x815&x816)));

	if (t49 != 106045) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x821 = 4071882291253648LLU;
	uint8_t x822 = UINT8_MAX;
	int16_t x823 = -1;
	volatile int64_t x824 = 125LL;
	static uint64_t t50 = 177291357LLU;

	t50 = (x821<<(x822/(x823&x824)));

	if (t50 != 16287529165014592LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x830 = 498009953LLU;
	int16_t x832 = INT16_MIN;
	static uint64_t t51 = 23530283680187LLU;

	t51 = (x829<<(x830/(x831&x832)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x845 = 0;
	int64_t x848 = INT64_MIN;
	int32_t t52 = 633576504;

	t52 = (x845<<(x846/(x847&x848)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x857 = UINT32_MAX;
	int8_t x858 = INT8_MAX;
	int8_t x859 = INT8_MIN;
	int64_t x860 = -1LL;
	uint32_t t53 = UINT32_MAX;

	t53 = (x857<<(x858/(x859&x860)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x881 = INT8_MAX;
	static int16_t x882 = INT16_MAX;
	volatile int32_t x883 = INT32_MIN;
	static int16_t x884 = INT16_MIN;
	int32_t t54 = 1;

	t54 = (x881<<(x882/(x883&x884)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x901 = UINT64_MAX;
	int16_t x902 = INT16_MIN;
	int64_t x903 = INT64_MIN;
	int8_t x904 = INT8_MIN;

	t55 = (x901<<(x902/(x903&x904)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x905 = 1573096U;
	uint16_t x906 = 226U;
	int32_t x907 = INT32_MAX;
	int16_t x908 = INT16_MAX;
	volatile uint32_t t56 = 141186433U;

	t56 = (x905<<(x906/(x907&x908)));

	if (t56 != 1573096U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x909 = 131430118454044LL;
	uint8_t x910 = 10U;
	int8_t x911 = -1;
	uint64_t x912 = 960962365378LLU;
	static int64_t t57 = 5LL;

	t57 = (x909<<(x910/(x911&x912)));

	if (t57 != 131430118454044LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x921 = 1U;
	volatile int8_t x922 = -5;
	static uint32_t x923 = UINT32_MAX;
	volatile int32_t x924 = -217;
	static int32_t t58 = 0;

	t58 = (x921<<(x922/(x923&x924)));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x925 = 7796587U;
	int16_t x926 = -5597;
	int32_t x927 = INT32_MIN;
	int64_t x928 = INT64_MIN;
	static uint32_t t59 = 53890U;

	t59 = (x925<<(x926/(x927&x928)));

	if (t59 != 7796587U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x953 = 1510;
	static int16_t x954 = -83;
	int64_t x956 = 170598LL;
	volatile int32_t t60 = -1044;

	t60 = (x953<<(x954/(x955&x956)));

	if (t60 != 1510) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x957 = 201;
	int16_t x958 = -1;
	volatile int8_t x959 = INT8_MIN;
	uint8_t x960 = UINT8_MAX;
	int32_t t61 = 47;

	t61 = (x957<<(x958/(x959&x960)));

	if (t61 != 201) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x961 = 0;
	int8_t x962 = INT8_MIN;
	int64_t x963 = 27600924844625LL;
	static int8_t x964 = -1;
	int32_t t62 = 594770178;

	t62 = (x961<<(x962/(x963&x964)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x969 = 971213U;
	uint16_t x970 = 172U;
	int64_t x971 = INT64_MIN;
	int64_t x972 = -1LL;
	static uint32_t t63 = 10424276U;

	t63 = (x969<<(x970/(x971&x972)));

	if (t63 != 971213U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x1029 = INT16_MAX;
	int32_t x1030 = -1;
	int64_t x1031 = 369629770216197LL;
	static int8_t x1032 = 5;
	static volatile int32_t t64 = -187714;

	t64 = (x1029<<(x1030/(x1031&x1032)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1037 = UINT8_MAX;
	int8_t x1038 = 1;
	static uint64_t x1039 = 2044088LLU;
	uint8_t x1040 = UINT8_MAX;
	volatile int32_t t65 = 10449;

	t65 = (x1037<<(x1038/(x1039&x1040)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x1053 = UINT16_MAX;
	volatile uint64_t x1054 = 3971751516LLU;
	int32_t x1056 = INT32_MIN;

	t66 = (x1053<<(x1054/(x1055&x1056)));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x1067 = -7;
	int32_t x1068 = INT32_MIN;

	t67 = (x1065<<(x1066/(x1067&x1068)));

	if (t67 != 13) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1089 = UINT16_MAX;
	uint8_t x1090 = 13U;
	int8_t x1091 = INT8_MIN;
	int16_t x1092 = INT16_MIN;
	volatile int32_t t68 = 2817724;

	t68 = (x1089<<(x1090/(x1091&x1092)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1105 = UINT8_MAX;
	int32_t t69 = -15;

	t69 = (x1105<<(x1106/(x1107&x1108)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1109 = UINT32_MAX;
	int32_t x1110 = -7773;
	uint16_t x1112 = UINT16_MAX;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x1109<<(x1110/(x1111&x1112)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1119 = UINT32_MAX;
	uint16_t x1120 = 8041U;
	int64_t t71 = 96LL;

	t71 = (x1117<<(x1118/(x1119&x1120)));

	if (t71 != 29387LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1137 = UINT32_MAX;
	volatile int8_t x1138 = -1;
	static volatile uint32_t x1139 = UINT32_MAX;
	volatile int64_t x1140 = INT64_MAX;
	static volatile uint32_t t72 = UINT32_MAX;

	t72 = (x1137<<(x1138/(x1139&x1140)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x1161 = 56656809898LL;
	int64_t x1162 = -1LL;
	static int8_t x1163 = -1;
	int32_t x1164 = INT32_MIN;
	volatile int64_t t73 = -1774270LL;

	t73 = (x1161<<(x1162/(x1163&x1164)));

	if (t73 != 56656809898LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1186 = INT16_MIN;
	int32_t x1187 = INT32_MIN;
	static volatile int32_t t74 = -58302;

	t74 = (x1185<<(x1186/(x1187&x1188)));

	if (t74 != 18) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1214 = 2U;
	volatile uint8_t x1216 = 7U;

	t75 = (x1213<<(x1214/(x1215&x1216)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1233 = INT8_MAX;
	volatile uint16_t x1234 = UINT16_MAX;
	volatile int32_t t76 = -52;

	t76 = (x1233<<(x1234/(x1235&x1236)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1247 = -7172;
	uint64_t x1248 = 7062003LLU;
	uint64_t t77 = UINT64_MAX;

	t77 = (x1245<<(x1246/(x1247&x1248)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1249 = 2203135453141362LL;
	static int32_t x1250 = -3;
	int16_t x1251 = INT16_MIN;

	t78 = (x1249<<(x1250/(x1251&x1252)));

	if (t78 != 2203135453141362LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1265 = 42U;
	volatile int16_t x1266 = -2;
	static volatile int8_t x1267 = -1;
	static int32_t t79 = -93929;

	t79 = (x1265<<(x1266/(x1267&x1268)));

	if (t79 != 42) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1273 = 3472U;
	uint32_t x1274 = 28U;
	int64_t x1275 = -1LL;
	int16_t x1276 = 760;
	volatile int32_t t80 = 476406453;

	t80 = (x1273<<(x1274/(x1275&x1276)));

	if (t80 != 3472) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1277 = 87U;
	int32_t x1279 = -23916193;
	int16_t x1280 = INT16_MIN;

	t81 = (x1277<<(x1278/(x1279&x1280)));

	if (t81 != 87) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x1305 = 4785472U;
	static volatile int16_t x1306 = -1;
	uint8_t x1307 = 76U;
	static volatile int32_t x1308 = -1;
	volatile uint32_t t82 = 195U;

	t82 = (x1305<<(x1306/(x1307&x1308)));

	if (t82 != 4785472U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x1330 = INT16_MAX;
	static uint32_t x1331 = UINT32_MAX;
	int32_t x1332 = INT32_MIN;
	int32_t t83 = -13674;

	t83 = (x1329<<(x1330/(x1331&x1332)));

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1334 = INT8_MIN;
	int8_t x1335 = INT8_MIN;
	int64_t x1336 = 6977LL;
	volatile int32_t t84 = 169362;

	t84 = (x1333<<(x1334/(x1335&x1336)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1349 = 12905U;
	static volatile int8_t x1350 = INT8_MIN;
	int8_t x1351 = INT8_MIN;
	int32_t x1352 = INT32_MAX;
	uint32_t t85 = 959197U;

	t85 = (x1349<<(x1350/(x1351&x1352)));

	if (t85 != 12905U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1357 = INT32_MAX;
	uint32_t x1359 = 8661162U;
	int32_t x1360 = -1;
	volatile int32_t t86 = INT32_MAX;

	t86 = (x1357<<(x1358/(x1359&x1360)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1365 = UINT8_MAX;
	int16_t x1366 = INT16_MAX;
	uint32_t x1367 = UINT32_MAX;
	static volatile int16_t x1368 = INT16_MIN;

	t87 = (x1365<<(x1366/(x1367&x1368)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x1385 = 1U;
	static uint8_t x1386 = 0U;
	volatile int64_t x1387 = -902159331909LL;
	static int32_t x1388 = 1;
	volatile int32_t t88 = -254827;

	t88 = (x1385<<(x1386/(x1387&x1388)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x1393 = 6569811298856LLU;
	uint32_t x1394 = 292845U;
	int8_t x1395 = INT8_MIN;
	uint64_t x1396 = 866265106860LLU;

	t89 = (x1393<<(x1394/(x1395&x1396)));

	if (t89 != 6569811298856LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1397 = UINT32_MAX;
	int16_t x1398 = -1;
	int64_t x1399 = -220LL;
	uint64_t x1400 = 1153135833728156861LLU;
	static volatile uint32_t t90 = 1642988U;

	t90 = (x1397<<(x1398/(x1399&x1400)));

	if (t90 != 4294934528U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1439 = UINT64_MAX;
	volatile int32_t x1440 = 9;

	t91 = (x1437<<(x1438/(x1439&x1440)));

	if (t91 != 7760) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1465 = 9;
	int64_t x1466 = -417177LL;
	int8_t x1467 = INT8_MIN;
	int32_t x1468 = INT32_MAX;
	volatile int32_t t92 = 269810;

	t92 = (x1465<<(x1466/(x1467&x1468)));

	if (t92 != 9) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x1470 = 0;
	static uint64_t x1472 = UINT64_MAX;
	volatile int32_t t93 = 916274607;

	t93 = (x1469<<(x1470/(x1471&x1472)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x1477 = INT64_MAX;
	uint8_t x1478 = UINT8_MAX;
	volatile uint16_t x1479 = UINT16_MAX;
	int32_t x1480 = -1;

	t94 = (x1477<<(x1478/(x1479&x1480)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1517 = UINT32_MAX;
	static uint32_t x1518 = 3739U;
	int32_t x1520 = INT32_MIN;
	static volatile uint32_t t95 = UINT32_MAX;

	t95 = (x1517<<(x1518/(x1519&x1520)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x1521 = UINT64_MAX;
	volatile int64_t x1523 = INT64_MIN;
	volatile int64_t x1524 = INT64_MIN;
	uint64_t t96 = UINT64_MAX;

	t96 = (x1521<<(x1522/(x1523&x1524)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1553 = 655;
	volatile int64_t x1555 = -657LL;
	int32_t x1556 = INT32_MAX;
	volatile int32_t t97 = -1;

	t97 = (x1553<<(x1554/(x1555&x1556)));

	if (t97 != 655) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1564 = INT64_MAX;
	volatile int32_t t98 = -8955;

	t98 = (x1561<<(x1562/(x1563&x1564)));

	if (t98 != 508) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x1597 = 16797853191930LLU;
	int16_t x1598 = INT16_MAX;
	int64_t x1599 = INT64_MIN;
	static int64_t x1600 = -21LL;
	uint64_t t99 = 17663212058895LLU;

	t99 = (x1597<<(x1598/(x1599&x1600)));

	if (t99 != 16797853191930LLU) { NG(); } else { ; }
	
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

