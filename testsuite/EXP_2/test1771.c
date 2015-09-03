#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = UINT16_MAX;
uint32_t x9 = 3U;
volatile int32_t x22 = -7766;
int8_t x23 = INT8_MAX;
int64_t x34 = INT64_MIN;
static volatile uint32_t t4 = 436816U;
uint8_t x38 = 7U;
int64_t x40 = -61127693460LL;
uint64_t x44 = 1242LLU;
int16_t x45 = INT16_MAX;
uint32_t x65 = UINT32_MAX;
uint16_t x67 = 0U;
uint16_t x105 = 7898U;
static int8_t x107 = 24;
int32_t x108 = INT32_MAX;
int32_t x141 = INT32_MAX;
uint32_t x143 = 32442872U;
int8_t x150 = 1;
volatile int32_t t15 = -2895;
volatile uint8_t x217 = UINT8_MAX;
static int64_t x219 = INT64_MIN;
uint8_t x262 = 102U;
static int32_t x298 = INT32_MIN;
static int64_t x299 = 6955LL;
static volatile int16_t x302 = INT16_MAX;
int64_t x303 = INT64_MIN;
volatile int64_t t21 = -262LL;
static int8_t x394 = 0;
volatile int32_t t22 = 37095;
static uint64_t x410 = 1LLU;
int64_t x412 = -1LL;
int16_t x422 = -174;
uint16_t x433 = 43U;
int8_t x434 = INT8_MIN;
int32_t x463 = -1;
uint8_t x492 = 1U;
int32_t t28 = -31;
int8_t x537 = 1;
static volatile uint64_t x539 = 562116LLU;
uint64_t x545 = UINT64_MAX;
static uint8_t x548 = UINT8_MAX;
uint8_t x594 = 2U;
uint32_t x620 = 47312U;
volatile int16_t x640 = INT16_MIN;
int8_t x682 = INT8_MIN;
uint32_t x683 = 1U;
static int16_t x711 = INT16_MAX;
int16_t x712 = INT16_MIN;
volatile int32_t t40 = -3743;
static uint64_t x718 = 80224015LLU;
static volatile uint64_t t41 = 4042785104017626LLU;
int64_t x744 = INT64_MIN;
static uint32_t x793 = UINT32_MAX;
int64_t x794 = 4LL;
static int16_t x823 = INT16_MAX;
volatile uint64_t x830 = 6407360926LLU;
int64_t x882 = 17LL;
volatile uint64_t x884 = 54261LLU;
static int8_t x885 = 1;
uint32_t x888 = 14807687U;
uint8_t x913 = UINT8_MAX;
uint8_t x943 = UINT8_MAX;
volatile uint16_t x955 = UINT16_MAX;
volatile int16_t x969 = 95;
uint8_t x971 = 0U;
uint32_t t53 = 118080U;
volatile int32_t t54 = 17411232;
int8_t x1086 = -1;
uint32_t t60 = 2U;
uint16_t x1189 = 8660U;
int8_t x1190 = INT8_MIN;
static int32_t x1224 = INT32_MIN;
uint64_t x1225 = 4267187868LLU;
volatile int8_t x1226 = 20;
static int64_t x1228 = -2LL;
volatile uint64_t t65 = 29179943747136180LLU;
volatile uint8_t x1256 = 2U;
static int16_t x1283 = INT16_MIN;
volatile uint32_t t68 = 68U;
volatile int64_t x1302 = INT64_MIN;
static uint8_t x1315 = 57U;
volatile uint32_t t73 = 186U;
uint16_t x1401 = 2U;
static int8_t x1411 = INT8_MAX;
volatile int32_t x1412 = -1;
volatile int32_t t77 = -2099;
uint8_t x1419 = 50U;
int8_t x1457 = 30;
uint32_t x1504 = 36612698U;
static volatile uint64_t t83 = 308301608438LLU;
uint64_t x1662 = 0LLU;
uint32_t x1663 = 52187U;
int64_t x1664 = -650502397LL;
volatile uint64_t t87 = 70778191240657382LLU;
static uint32_t x1715 = 0U;
volatile uint64_t x1741 = UINT64_MAX;
uint64_t t89 = 601638086LLU;
static int32_t x1808 = -1;
uint64_t x1809 = 109689LLU;
volatile uint16_t x1812 = UINT16_MAX;
int16_t x1821 = 1;
int32_t x1822 = -60936;
int16_t x2001 = 5132;
uint64_t x2004 = 133641083590231679LLU;
uint8_t x2079 = 1U;
int32_t x2100 = -635444;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	uint64_t x2 = UINT64_MAX;
	uint16_t x3 = 13U;
	uint64_t x4 = 3645343836LLU;
	static uint64_t t0 = 10LLU;

	t0 = ((x1>>(x2&x3))*x4);

	if (t0 != 10936031508LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int64_t x6 = 0LL;
	static int8_t x7 = -1;
	uint64_t t1 = 12445332237675371LLU;

	t1 = ((x5>>(x6&x7))*x8);

	if (t1 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 1U;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -1441754;
	uint32_t t2 = 1696734663U;

	t2 = ((x9>>(x10&x11))*x12);

	if (t2 != 4290642034U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 1442558059252486LLU;
	int8_t x24 = 0;
	uint64_t t3 = 9098593169LLU;

	t3 = ((x21>>(x22&x23))*x24);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x33 = UINT32_MAX;
	uint16_t x35 = 12401U;
	int16_t x36 = INT16_MIN;

	t4 = ((x33>>(x34&x35))*x36);

	if (t4 != 32768U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = 22296393U;
	int16_t x39 = INT16_MIN;
	int64_t t5 = 130826800795LL;

	t5 = ((x37>>(x38&x39))*x40);

	if (t5 != -1362927076567689780LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 28658U;
	static int32_t x42 = -181533;
	static uint32_t x43 = 0U;
	uint64_t t6 = 529363304387524LLU;

	t6 = ((x41>>(x42&x43))*x44);

	if (t6 != 35593236LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x46 = INT8_MIN;
	volatile uint32_t x47 = 103U;
	volatile int16_t x48 = -771;
	static volatile int32_t t7 = 2;

	t7 = ((x45>>(x46&x47))*x48);

	if (t7 != -25263357) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x66 = INT64_MIN;
	int64_t x68 = 718186LL;
	volatile int64_t t8 = -1633165995926280855LL;

	t8 = ((x65>>(x66&x67))*x68);

	if (t8 != 3084585381726870LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x77 = UINT32_MAX;
	volatile uint32_t x78 = UINT32_MAX;
	int64_t x79 = INT64_MIN;
	uint16_t x80 = 5412U;
	volatile uint32_t t9 = 23U;

	t9 = ((x77>>(x78&x79))*x80);

	if (t9 != 4294961884U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x97 = 0;
	static uint64_t x98 = 1547LLU;
	int64_t x99 = INT64_MIN;
	int16_t x100 = 6;
	volatile int32_t t10 = -12247721;

	t10 = ((x97>>(x98&x99))*x100);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x106 = -1LL;
	static int32_t t11 = -11;

	t11 = ((x105>>(x106&x107))*x108);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x137 = 422319LL;
	static uint64_t x138 = 0LLU;
	int16_t x139 = INT16_MIN;
	int8_t x140 = INT8_MIN;
	int64_t t12 = -856793LL;

	t12 = ((x137>>(x138&x139))*x140);

	if (t12 != -54056832LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x142 = 27U;
	volatile int16_t x144 = -1;
	volatile int32_t t13 = 1;

	t13 = ((x141>>(x142&x143))*x144);

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x149 = 418843;
	int32_t x151 = 17;
	uint16_t x152 = 14U;
	int32_t t14 = -10961711;

	t14 = ((x149>>(x150&x151))*x152);

	if (t14 != 2931894) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x169 = 0U;
	static int16_t x170 = 3335;
	uint8_t x171 = 0U;
	int8_t x172 = 32;

	t15 = ((x169>>(x170&x171))*x172);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x218 = INT16_MAX;
	volatile int16_t x220 = INT16_MIN;
	int32_t t16 = 1;

	t16 = ((x217>>(x218&x219))*x220);

	if (t16 != -8355840) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 25U;
	int8_t x231 = -1;
	int32_t x232 = -1;
	uint32_t t17 = 17800U;

	t17 = ((x229>>(x230&x231))*x232);

	if (t17 != 4294967169U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x249 = UINT16_MAX;
	uint32_t x250 = UINT32_MAX;
	uint16_t x251 = 0U;
	volatile uint32_t x252 = UINT32_MAX;
	volatile uint32_t t18 = 270189U;

	t18 = ((x249>>(x250&x251))*x252);

	if (t18 != 4294901761U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x261 = 67U;
	volatile int64_t x263 = INT64_MIN;
	static volatile int16_t x264 = -1;
	int32_t t19 = -14335031;

	t19 = ((x261>>(x262&x263))*x264);

	if (t19 != -67) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x300 = -1LL;
	static volatile int64_t t20 = -1LL;

	t20 = ((x297>>(x298&x299))*x300);

	if (t20 != -255LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x301 = 671153578791899LL;
	int8_t x304 = INT8_MIN;

	t21 = ((x301>>(x302&x303))*x304);

	if (t21 != -85907658085363072LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x393 = 1U;
	static int8_t x395 = 4;
	uint16_t x396 = 21300U;

	t22 = ((x393>>(x394&x395))*x396);

	if (t22 != 21300) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x409 = 1480U;
	volatile int8_t x411 = INT8_MAX;
	volatile int64_t t23 = -997LL;

	t23 = ((x409>>(x410&x411))*x412);

	if (t23 != -740LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x421 = INT64_MAX;
	volatile int32_t x423 = 186;
	uint16_t x424 = 452U;
	volatile int64_t t24 = 2566LL;

	t24 = ((x421>>(x422&x423))*x424);

	if (t24 != 15903336184151612LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x425 = 13659U;
	int64_t x426 = INT64_MAX;
	static int64_t x427 = INT64_MIN;
	int8_t x428 = -1;
	int32_t t25 = 0;

	t25 = ((x425>>(x426&x427))*x428);

	if (t25 != -13659) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x435 = 1;
	uint8_t x436 = 84U;
	int32_t t26 = 570425991;

	t26 = ((x433>>(x434&x435))*x436);

	if (t26 != 3612) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x461 = 1U;
	int8_t x462 = 6;
	int8_t x464 = INT8_MAX;
	volatile int32_t t27 = -6;

	t27 = ((x461>>(x462&x463))*x464);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x489 = 15U;
	int32_t x490 = 26935449;
	uint64_t x491 = 6LLU;

	t28 = ((x489>>(x490&x491))*x492);

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x497 = 58130372U;
	int32_t x498 = -1;
	int8_t x499 = 0;
	int16_t x500 = INT16_MIN;
	static volatile uint32_t t29 = 16294U;

	t29 = ((x497>>(x498&x499))*x500);

	if (t29 != 2149449728U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x517 = 1317;
	uint32_t x518 = UINT32_MAX;
	int8_t x519 = 1;
	uint64_t x520 = 95560037987LLU;
	static uint64_t t30 = 5333392LLU;

	t30 = ((x517>>(x518&x519))*x520);

	if (t30 != 62878504995446LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x538 = 55;
	int64_t x540 = -1LL;
	static volatile int64_t t31 = -19765104LL;

	t31 = ((x537>>(x538&x539))*x540);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x546 = 4109712U;
	uint16_t x547 = 0U;
	uint64_t t32 = 8434870585178994663LLU;

	t32 = ((x545>>(x546&x547))*x548);

	if (t32 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x589 = UINT64_MAX;
	uint16_t x590 = 6U;
	uint16_t x591 = UINT16_MAX;
	int64_t x592 = -4LL;
	uint64_t t33 = 2070973652685LLU;

	t33 = ((x589>>(x590&x591))*x592);

	if (t33 != 17293822569102704644LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x593 = UINT64_MAX;
	static volatile int64_t x595 = INT64_MAX;
	static int64_t x596 = INT64_MIN;
	uint64_t t34 = 1581584458LLU;

	t34 = ((x593>>(x594&x595))*x596);

	if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x617 = UINT64_MAX;
	static int16_t x618 = INT16_MIN;
	uint8_t x619 = UINT8_MAX;
	volatile uint64_t t35 = 2998231590056604955LLU;

	t35 = ((x617>>(x618&x619))*x620);

	if (t35 != 18446744073709504304LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x633 = 1U;
	int64_t x634 = 1LL;
	volatile uint32_t x635 = UINT32_MAX;
	int8_t x636 = INT8_MIN;
	int32_t t36 = 2420724;

	t36 = ((x633>>(x634&x635))*x636);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x637 = 2348557LL;
	int16_t x638 = INT16_MAX;
	static int64_t x639 = INT64_MIN;
	static volatile int64_t t37 = 4673407107690423LL;

	t37 = ((x637>>(x638&x639))*x640);

	if (t37 != -76957515776LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x681 = UINT32_MAX;
	int32_t x684 = INT32_MAX;
	uint32_t t38 = 132U;

	t38 = ((x681>>(x682&x683))*x684);

	if (t38 != 2147483649U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x693 = UINT8_MAX;
	uint16_t x694 = 1U;
	int8_t x695 = 53;
	int8_t x696 = INT8_MIN;
	int32_t t39 = -355255253;

	t39 = ((x693>>(x694&x695))*x696);

	if (t39 != -16256) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x709 = UINT16_MAX;
	int8_t x710 = 4;

	t40 = ((x709>>(x710&x711))*x712);

	if (t40 != -134184960) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x717 = INT8_MAX;
	int64_t x719 = INT64_MIN;
	uint64_t x720 = 1517292LLU;

	t41 = ((x717>>(x718&x719))*x720);

	if (t41 != 192696084LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x741 = 44536900398LLU;
	uint64_t x742 = 1252471381742515198LLU;
	volatile int64_t x743 = INT64_MIN;
	static volatile uint64_t t42 = 1977937520956972LLU;

	t42 = ((x741>>(x742&x743))*x744);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x789 = 273LLU;
	int16_t x790 = 959;
	uint8_t x791 = 1U;
	int32_t x792 = -1;
	static uint64_t t43 = 30180432LLU;

	t43 = ((x789>>(x790&x791))*x792);

	if (t43 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x795 = UINT64_MAX;
	uint64_t x796 = UINT64_MAX;
	static uint64_t t44 = 8458335LLU;

	t44 = ((x793>>(x794&x795))*x796);

	if (t44 != 18446744073441116161LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x821 = 6;
	static int64_t x822 = INT64_MIN;
	int16_t x824 = INT16_MAX;
	volatile int32_t t45 = 7082;

	t45 = ((x821>>(x822&x823))*x824);

	if (t45 != 196602) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x829 = 0U;
	int64_t x831 = INT64_MIN;
	static uint8_t x832 = UINT8_MAX;
	volatile int32_t t46 = 0;

	t46 = ((x829>>(x830&x831))*x832);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x881 = INT8_MAX;
	int32_t x883 = -1;
	volatile uint64_t t47 = 496822LLU;

	t47 = ((x881>>(x882&x883))*x884);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x886 = INT16_MAX;
	static int64_t x887 = INT64_MIN;
	uint32_t t48 = 2002405U;

	t48 = ((x885>>(x886&x887))*x888);

	if (t48 != 14807687U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x905 = UINT64_MAX;
	int8_t x906 = INT8_MIN;
	uint16_t x907 = 27U;
	uint8_t x908 = 2U;
	uint64_t t49 = 8LLU;

	t49 = ((x905>>(x906&x907))*x908);

	if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x914 = 4U;
	int16_t x915 = INT16_MAX;
	volatile uint8_t x916 = 34U;
	int32_t t50 = -861856831;

	t50 = ((x913>>(x914&x915))*x916);

	if (t50 != 510) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x941 = UINT64_MAX;
	uint32_t x942 = 12U;
	uint64_t x944 = 2749054LLU;
	static volatile uint64_t t51 = 177LLU;

	t51 = ((x941>>(x942&x943))*x944);

	if (t51 != 2873296562259627394LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x953 = 105U;
	int32_t x954 = INT32_MIN;
	static int16_t x956 = INT16_MAX;
	volatile int32_t t52 = -579;

	t52 = ((x953>>(x954&x955))*x956);

	if (t52 != 3440535) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x970 = 6;
	volatile uint32_t x972 = UINT32_MAX;

	t53 = ((x969>>(x970&x971))*x972);

	if (t53 != 4294967201U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x973 = UINT16_MAX;
	static int16_t x974 = -1;
	uint8_t x975 = 1U;
	static uint8_t x976 = 0U;

	t54 = ((x973>>(x974&x975))*x976);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1049 = UINT64_MAX;
	uint16_t x1050 = 576U;
	int16_t x1051 = INT16_MIN;
	uint64_t x1052 = UINT64_MAX;
	volatile uint64_t t55 = 56LLU;

	t55 = ((x1049>>(x1050&x1051))*x1052);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1065 = UINT8_MAX;
	uint32_t x1066 = UINT32_MAX;
	uint32_t x1067 = 27U;
	int64_t x1068 = -7196987867LL;
	volatile int64_t t56 = 6LL;

	t56 = ((x1065>>(x1066&x1067))*x1068);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1081 = 7LL;
	uint64_t x1082 = 74LLU;
	static int16_t x1083 = INT16_MIN;
	int32_t x1084 = 15469856;
	int64_t t57 = 4366102721499642LL;

	t57 = ((x1081>>(x1082&x1083))*x1084);

	if (t57 != 108288992LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1085 = 1;
	uint8_t x1087 = 3U;
	int8_t x1088 = INT8_MIN;
	static volatile int32_t t58 = -69;

	t58 = ((x1085>>(x1086&x1087))*x1088);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1097 = 23408;
	int8_t x1098 = INT8_MAX;
	int8_t x1099 = INT8_MIN;
	static uint32_t x1100 = 6253055U;
	uint32_t t59 = 102715U;

	t59 = ((x1097>>(x1098&x1099))*x1100);

	if (t59 != 342623376U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x1149 = 24120U;
	int64_t x1150 = 36834955LL;
	volatile int8_t x1151 = 3;
	static volatile int8_t x1152 = 0;

	t60 = ((x1149>>(x1150&x1151))*x1152);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x1185 = UINT16_MAX;
	int16_t x1186 = 32;
	int64_t x1187 = INT64_MIN;
	uint16_t x1188 = 124U;
	volatile int32_t t61 = -2901;

	t61 = ((x1185>>(x1186&x1187))*x1188);

	if (t61 != 8126340) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x1191 = INT8_MAX;
	int16_t x1192 = INT16_MIN;
	static int32_t t62 = 22869976;

	t62 = ((x1189>>(x1190&x1191))*x1192);

	if (t62 != -283770880) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1201 = 0U;
	static uint8_t x1202 = 13U;
	static volatile uint64_t x1203 = 606282547124LLU;
	int8_t x1204 = INT8_MIN;
	static volatile int32_t t63 = 95218456;

	t63 = ((x1201>>(x1202&x1203))*x1204);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1221 = 0U;
	uint8_t x1222 = UINT8_MAX;
	volatile int16_t x1223 = INT16_MIN;
	static volatile uint32_t t64 = 4U;

	t64 = ((x1221>>(x1222&x1223))*x1224);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1227 = 42;

	t65 = ((x1225>>(x1226&x1227))*x1228);

	if (t65 != 18446744065175175880LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1253 = 2028U;
	static uint32_t x1254 = 4U;
	uint64_t x1255 = 25LLU;
	uint32_t t66 = 3U;

	t66 = ((x1253>>(x1254&x1255))*x1256);

	if (t66 != 4056U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x1257 = UINT64_MAX;
	static int16_t x1258 = INT16_MIN;
	uint8_t x1259 = 3U;
	int32_t x1260 = INT32_MIN;
	static uint64_t t67 = 17811398668LLU;

	t67 = ((x1257>>(x1258&x1259))*x1260);

	if (t67 != 2147483648LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x1281 = 113;
	uint8_t x1282 = 0U;
	uint32_t x1284 = UINT32_MAX;

	t68 = ((x1281>>(x1282&x1283))*x1284);

	if (t68 != 4294967183U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1301 = INT32_MAX;
	uint64_t x1303 = 172127647277581LLU;
	int16_t x1304 = -1;
	volatile int32_t t69 = 5;

	t69 = ((x1301>>(x1302&x1303))*x1304);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x1313 = INT64_MAX;
	uint64_t x1314 = UINT64_MAX;
	uint8_t x1316 = 63U;
	int64_t t70 = -4189886650LL;

	t70 = ((x1313>>(x1314&x1315))*x1316);

	if (t70 != 3969LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x1341 = INT16_MAX;
	static uint32_t x1342 = 1U;
	volatile uint8_t x1343 = 58U;
	int16_t x1344 = 1;
	int32_t t71 = 3;

	t71 = ((x1341>>(x1342&x1343))*x1344);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1369 = 19U;
	static int16_t x1370 = INT16_MIN;
	int16_t x1371 = 3987;
	volatile int8_t x1372 = -1;
	volatile int32_t t72 = 9;

	t72 = ((x1369>>(x1370&x1371))*x1372);

	if (t72 != -19) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x1373 = 4U;
	int32_t x1374 = INT32_MIN;
	uint32_t x1375 = 124U;
	uint16_t x1376 = 16U;

	t73 = ((x1373>>(x1374&x1375))*x1376);

	if (t73 != 64U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1385 = INT64_MAX;
	static int16_t x1386 = INT16_MIN;
	int16_t x1387 = 0;
	volatile int16_t x1388 = -1;
	int64_t t74 = 70102644599LL;

	t74 = ((x1385>>(x1386&x1387))*x1388);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1402 = 998550U;
	uint8_t x1403 = 99U;
	int8_t x1404 = 5;
	int32_t t75 = 693098;

	t75 = ((x1401>>(x1402&x1403))*x1404);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x1409 = UINT32_MAX;
	int64_t x1410 = INT64_MIN;
	uint32_t t76 = 16088288U;

	t76 = ((x1409>>(x1410&x1411))*x1412);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1413 = 16;
	int32_t x1414 = -1;
	static uint8_t x1415 = 0U;
	int16_t x1416 = INT16_MIN;

	t77 = ((x1413>>(x1414&x1415))*x1416);

	if (t77 != -524288) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1417 = UINT16_MAX;
	int64_t x1418 = 2279803356472801683LL;
	volatile int16_t x1420 = INT16_MIN;
	int32_t t78 = 1;

	t78 = ((x1417>>(x1418&x1419))*x1420);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1425 = INT64_MAX;
	uint16_t x1426 = 3U;
	static int64_t x1427 = -8333929269LL;
	static uint64_t x1428 = 484LLU;
	volatile uint64_t t79 = 399LLU;

	t79 = ((x1425>>(x1426&x1427))*x1428);

	if (t79 != 4611686018427387420LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x1429 = UINT8_MAX;
	int8_t x1430 = 0;
	int16_t x1431 = 3;
	int32_t x1432 = -1714;
	volatile int32_t t80 = -28739845;

	t80 = ((x1429>>(x1430&x1431))*x1432);

	if (t80 != -437070) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1437 = 4;
	static uint16_t x1438 = UINT16_MAX;
	int64_t x1439 = INT64_MIN;
	static volatile int8_t x1440 = 7;
	int32_t t81 = 845559;

	t81 = ((x1437>>(x1438&x1439))*x1440);

	if (t81 != 28) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x1458 = 1U;
	int64_t x1459 = 11419304LL;
	int16_t x1460 = 865;
	int32_t t82 = 7093578;

	t82 = ((x1457>>(x1458&x1459))*x1460);

	if (t82 != 25950) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x1501 = UINT64_MAX;
	static uint32_t x1502 = 3U;
	int8_t x1503 = INT8_MIN;

	t83 = ((x1501>>(x1502&x1503))*x1504);

	if (t83 != 18446744073672938918LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x1653 = INT8_MAX;
	static volatile int16_t x1654 = 0;
	uint8_t x1655 = 60U;
	int16_t x1656 = INT16_MIN;
	static volatile int32_t t84 = -26442;

	t84 = ((x1653>>(x1654&x1655))*x1656);

	if (t84 != -4161536) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1661 = 0LL;
	int64_t t85 = 84900578344533LL;

	t85 = ((x1661>>(x1662&x1663))*x1664);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1697 = INT8_MAX;
	int8_t x1698 = -1;
	int8_t x1699 = 17;
	static int8_t x1700 = INT8_MIN;
	int32_t t86 = -132618151;

	t86 = ((x1697>>(x1698&x1699))*x1700);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1709 = 14387263651936842LLU;
	volatile uint16_t x1710 = 21U;
	uint16_t x1711 = 466U;
	int64_t x1712 = -1LL;

	t87 = ((x1709>>(x1710&x1711))*x1712);

	if (t87 != 18446743854177330365LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x1713 = 877935U;
	int32_t x1714 = -1;
	int16_t x1716 = INT16_MAX;
	volatile uint32_t t88 = 698U;

	t88 = ((x1713>>(x1714&x1715))*x1716);

	if (t88 != 2997492369U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x1742 = 233166642980911757LLU;
	int64_t x1743 = INT64_MIN;
	uint64_t x1744 = 29836610244LLU;

	t89 = ((x1741>>(x1742&x1743))*x1744);

	if (t89 != 18446744043872941372LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1765 = UINT64_MAX;
	volatile int16_t x1766 = -1;
	static volatile uint8_t x1767 = 3U;
	int32_t x1768 = -120999;
	uint64_t t90 = 340LLU;

	t90 = ((x1765>>(x1766&x1767))*x1768);

	if (t90 != 2305843009213814951LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x1805 = 181U;
	int16_t x1806 = INT16_MAX;
	uint16_t x1807 = 3U;
	static int32_t t91 = -17928792;

	t91 = ((x1805>>(x1806&x1807))*x1808);

	if (t91 != -22) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1810 = INT32_MIN;
	int8_t x1811 = 0;
	static volatile uint64_t t92 = 81LLU;

	t92 = ((x1809>>(x1810&x1811))*x1812);

	if (t92 != 7188468615LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x1823 = 13LLU;
	static uint16_t x1824 = 1078U;
	int32_t t93 = -3;

	t93 = ((x1821>>(x1822&x1823))*x1824);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x1829 = 7;
	int64_t x1830 = INT64_MIN;
	uint16_t x1831 = UINT16_MAX;
	int32_t x1832 = -1;
	static volatile int32_t t94 = 703776;

	t94 = ((x1829>>(x1830&x1831))*x1832);

	if (t94 != -7) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1905 = 6755129U;
	static int32_t x1906 = INT32_MIN;
	volatile uint64_t x1907 = 2LLU;
	int8_t x1908 = INT8_MAX;
	uint32_t t95 = 465109U;

	t95 = ((x1905>>(x1906&x1907))*x1908);

	if (t95 != 857901383U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1989 = 1U;
	int8_t x1990 = 1;
	int32_t x1991 = -1;
	static uint64_t x1992 = UINT64_MAX;
	volatile uint64_t t96 = 328LLU;

	t96 = ((x1989>>(x1990&x1991))*x1992);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x2002 = -1;
	int8_t x2003 = 18;
	uint64_t t97 = 1401141685LLU;

	t97 = ((x2001>>(x2002&x2003))*x2004);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2077 = 233;
	static int32_t x2078 = 479957774;
	int16_t x2080 = INT16_MIN;
	static volatile int32_t t98 = -33083198;

	t98 = ((x2077>>(x2078&x2079))*x2080);

	if (t98 != -7634944) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2097 = UINT32_MAX;
	int32_t x2098 = INT32_MIN;
	static int16_t x2099 = 908;
	uint32_t t99 = 405U;

	t99 = ((x2097>>(x2098&x2099))*x2100);

	if (t99 != 635444U) { NG(); } else { ; }
	
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

