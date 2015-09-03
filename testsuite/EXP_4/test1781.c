#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x22 = 5199;
uint32_t x24 = 2U;
int8_t x37 = INT8_MIN;
int8_t x71 = INT8_MIN;
volatile int8_t x98 = INT8_MAX;
uint8_t x105 = 19U;
static uint32_t x108 = 27U;
static volatile int16_t x119 = 0;
static uint64_t t7 = 83LLU;
volatile uint16_t x176 = UINT16_MAX;
int32_t t8 = 1;
static uint16_t x267 = UINT16_MAX;
int8_t x340 = 0;
volatile uint32_t x347 = 5U;
uint32_t x354 = 2U;
uint8_t x391 = 6U;
static uint32_t t19 = 248U;
int8_t x421 = INT8_MAX;
volatile int32_t t20 = -11972080;
static volatile int64_t x425 = 301534LL;
int16_t x426 = 439;
uint64_t x431 = 20LLU;
uint16_t x432 = 3U;
volatile int64_t x433 = INT64_MAX;
uint8_t x435 = 18U;
uint32_t t24 = 92U;
int16_t x471 = 1;
int32_t x479 = INT32_MAX;
volatile int16_t x493 = -1;
uint16_t x494 = UINT16_MAX;
int64_t x511 = 0LL;
volatile int8_t x512 = INT8_MAX;
uint16_t x537 = 30U;
int64_t x538 = INT64_MAX;
int8_t x570 = INT8_MAX;
uint8_t x584 = 1U;
int8_t x595 = 0;
int8_t x596 = INT8_MIN;
int64_t x598 = INT64_MAX;
int64_t t38 = 7637LL;
volatile int32_t t39 = 496871;
int32_t x717 = -4;
uint64_t x718 = 63670841776913487LLU;
int8_t x728 = 0;
int32_t x789 = INT32_MIN;
volatile int64_t t45 = 15628LL;
static int32_t x796 = 1;
uint8_t x808 = 9U;
static uint32_t x905 = 260885U;
int32_t t52 = -3;
uint32_t t55 = 43757U;
int32_t x1053 = INT32_MIN;
static uint8_t x1088 = UINT8_MAX;
static int16_t x1117 = -13523;
uint16_t x1135 = UINT16_MAX;
volatile uint64_t t62 = 44552413074LLU;
int64_t x1167 = INT64_MIN;
uint64_t x1194 = 11797622LLU;
int32_t t66 = -104303;
static int64_t x1209 = 1979296882LL;
int8_t x1293 = 22;
uint16_t x1314 = 0U;
static int8_t x1315 = -7;
int32_t t75 = -90751;
int8_t x1319 = INT8_MAX;
int32_t x1328 = INT32_MAX;
static int64_t x1357 = -1LL;
static uint64_t t78 = 8115706411159000LLU;
int32_t t80 = 35;
volatile uint8_t x1388 = 0U;
static int64_t x1390 = 3998598860799121589LL;
volatile uint64_t x1402 = UINT64_MAX;
volatile uint8_t x1405 = UINT8_MAX;
int16_t x1407 = INT16_MIN;
static int8_t x1417 = INT8_MIN;
volatile int32_t t85 = 1048256826;
uint8_t x1427 = 17U;
int32_t x1432 = INT32_MIN;
int64_t x1497 = INT64_MAX;
uint16_t x1499 = 1U;
int16_t x1515 = 1;
static uint64_t t92 = 283086946157973LLU;
uint32_t x1610 = UINT32_MAX;
volatile int64_t x1611 = 1628LL;
static uint32_t x1616 = 4U;
int64_t t95 = -1LL;
volatile int32_t x1654 = INT32_MAX;
volatile uint64_t t98 = 82LLU;
uint8_t x1717 = UINT8_MAX;
uint32_t x1720 = UINT32_MAX;


void f0(void) {
	uint64_t x21 = 831395799570252864LLU;
	uint32_t x23 = 92595845U;
	uint64_t t0 = 396956295247765995LLU;

	t0 = (x21^(x22>>(x23&x24)));

	if (t0 != 831395799570255887LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x33 = 14202;
	volatile int32_t x34 = 13405;
	int16_t x35 = 1;
	volatile uint64_t x36 = UINT64_MAX;
	int32_t t1 = -23470;

	t1 = (x33^(x34>>(x35&x36)));

	if (t1 != 11604) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x38 = 4U;
	int8_t x39 = 0;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t2 = -60572946;

	t2 = (x37^(x38>>(x39&x40)));

	if (t2 != -124) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x69 = -1;
	int32_t x70 = 111356904;
	uint16_t x72 = 36U;
	volatile int32_t t3 = -247817;

	t3 = (x69^(x70>>(x71&x72)));

	if (t3 != -111356905) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x97 = 11;
	uint64_t x99 = 1LLU;
	int16_t x100 = 427;
	volatile int32_t t4 = 6;

	t4 = (x97^(x98>>(x99&x100)));

	if (t4 != 52) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x106 = INT16_MAX;
	int8_t x107 = -1;
	volatile int32_t t5 = -3273696;

	t5 = (x105^(x106>>(x107&x108)));

	if (t5 != 19) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x117 = 457369LLU;
	uint32_t x118 = UINT32_MAX;
	int32_t x120 = 11;
	uint64_t t6 = 45369LLU;

	t6 = (x117^(x118>>(x119&x120)));

	if (t6 != 4294509926LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x129 = UINT64_MAX;
	int16_t x130 = INT16_MAX;
	volatile uint16_t x131 = 0U;
	static uint64_t x132 = 211233779LLU;

	t7 = (x129^(x130>>(x131&x132)));

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x173 = INT32_MIN;
	uint16_t x174 = 756U;
	static int32_t x175 = INT32_MIN;

	t8 = (x173^(x174>>(x175&x176)));

	if (t8 != -2147482892) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x221 = INT64_MAX;
	int32_t x222 = INT32_MAX;
	int8_t x223 = 7;
	uint8_t x224 = 1U;
	int64_t t9 = 98228912133LL;

	t9 = (x221^(x222>>(x223&x224)));

	if (t9 != 9223372035781033984LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x237 = UINT8_MAX;
	uint16_t x238 = 19U;
	uint64_t x239 = 152352182075LLU;
	volatile int8_t x240 = 2;
	static volatile int32_t t10 = -9700893;

	t10 = (x237^(x238>>(x239&x240)));

	if (t10 != 251) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x253 = INT8_MIN;
	volatile int8_t x254 = 3;
	uint8_t x255 = 7U;
	int64_t x256 = -153966588242721117LL;
	volatile int32_t t11 = 0;

	t11 = (x253^(x254>>(x255&x256)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x265 = 61U;
	uint64_t x266 = UINT64_MAX;
	static uint8_t x268 = 3U;
	uint64_t t12 = 2733717748036557844LLU;

	t12 = (x265^(x266>>(x267&x268)));

	if (t12 != 2305843009213693890LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x281 = -1;
	uint64_t x282 = 11427LLU;
	volatile uint8_t x283 = 3U;
	volatile int32_t x284 = INT32_MAX;
	uint64_t t13 = 1623047791317150LLU;

	t13 = (x281^(x282>>(x283&x284)));

	if (t13 != 18446744073709550187LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x337 = INT16_MAX;
	int64_t x338 = INT64_MAX;
	int8_t x339 = -7;
	volatile int64_t t14 = 39074876697841LL;

	t14 = (x337^(x338>>(x339&x340)));

	if (t14 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x345 = 17;
	uint8_t x346 = UINT8_MAX;
	int64_t x348 = INT64_MIN;
	volatile int32_t t15 = -225;

	t15 = (x345^(x346>>(x347&x348)));

	if (t15 != 238) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x353 = 76;
	volatile uint32_t x355 = 5U;
	static int16_t x356 = 9;
	uint32_t t16 = 6U;

	t16 = (x353^(x354>>(x355&x356)));

	if (t16 != 77U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x357 = UINT64_MAX;
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = INT64_MIN;
	uint16_t x360 = UINT16_MAX;
	static uint64_t t17 = 65109LLU;

	t17 = (x357^(x358>>(x359&x360)));

	if (t17 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MAX;
	int16_t x392 = -445;
	volatile int32_t t18 = -22;

	t18 = (x389^(x390>>(x391&x392)));

	if (t18 != -8065) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x401 = 16;
	static uint32_t x402 = 31545U;
	static int8_t x403 = 2;
	int64_t x404 = INT64_MAX;

	t19 = (x401^(x402>>(x403&x404)));

	if (t19 != 7902U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x422 = 1;
	volatile int32_t x423 = 6;
	int16_t x424 = -235;

	t20 = (x421^(x422>>(x423&x424)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x427 = -2;
	uint16_t x428 = 1U;
	int64_t t21 = -1321637LL;

	t21 = (x425^(x426>>(x427&x428)));

	if (t21 != 301161LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MAX;
	int64_t t22 = -3932783559996LL;

	t22 = (x429^(x430>>(x431&x432)));

	if (t22 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x434 = 35U;
	volatile int16_t x436 = 2;
	volatile int64_t t23 = 36LL;

	t23 = (x433^(x434>>(x435&x436)));

	if (t23 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x453 = INT32_MIN;
	uint32_t x454 = 1U;
	int64_t x455 = -135472128003LL;
	static uint8_t x456 = 0U;

	t24 = (x453^(x454>>(x455&x456)));

	if (t24 != 2147483649U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x469 = 1366342778642969416LL;
	uint32_t x470 = 18164U;
	volatile int8_t x472 = 1;
	static int64_t t25 = 6839537536LL;

	t25 = (x469^(x470>>(x471&x472)));

	if (t25 != 1366342778642960434LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x477 = 24;
	int64_t x478 = INT64_MAX;
	volatile int32_t x480 = INT32_MIN;
	volatile int64_t t26 = -2LL;

	t26 = (x477^(x478>>(x479&x480)));

	if (t26 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MAX;
	uint8_t x483 = 2U;
	int8_t x484 = INT8_MAX;
	volatile int32_t t27 = 1;

	t27 = (x481^(x482>>(x483&x484)));

	if (t27 != -536870785) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x495 = INT64_MIN;
	uint16_t x496 = UINT16_MAX;
	int32_t t28 = 194099;

	t28 = (x493^(x494>>(x495&x496)));

	if (t28 != -65536) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x497 = -1;
	volatile uint32_t x498 = UINT32_MAX;
	uint32_t x499 = 1658U;
	int64_t x500 = INT64_MIN;
	volatile uint32_t t29 = 1054U;

	t29 = (x497^(x498>>(x499&x500)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x505 = UINT8_MAX;
	static uint32_t x506 = UINT32_MAX;
	volatile int16_t x507 = -4716;
	uint16_t x508 = 10U;
	static uint32_t t30 = 66U;

	t30 = (x505^(x506>>(x507&x508)));

	if (t30 != 4294967040U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x509 = UINT16_MAX;
	int64_t x510 = 136258148654721742LL;
	volatile int64_t t31 = 1783967LL;

	t31 = (x509^(x510>>(x511&x512)));

	if (t31 != 136258148654765361LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x513 = 6U;
	static uint64_t x514 = 135458599748083LLU;
	uint32_t x515 = 5U;
	volatile int64_t x516 = INT64_MAX;
	uint64_t t32 = 52329092665296LLU;

	t32 = (x513^(x514>>(x515&x516)));

	if (t32 != 4233081242121LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x539 = 22U;
	volatile int16_t x540 = -163;
	int64_t t33 = 64LL;

	t33 = (x537^(x538>>(x539&x540)));

	if (t33 != 8796093022177LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x553 = -34880927871236LL;
	uint8_t x554 = 3U;
	uint8_t x555 = 57U;
	int8_t x556 = 13;
	volatile int64_t t34 = -292892LL;

	t34 = (x553^(x554>>(x555&x556)));

	if (t34 != -34880927871236LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x569 = INT16_MAX;
	int64_t x571 = INT64_MAX;
	static uint64_t x572 = 3LLU;
	volatile int32_t t35 = 29752;

	t35 = (x569^(x570>>(x571&x572)));

	if (t35 != 32752) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x581 = -1;
	int32_t x582 = INT32_MAX;
	static int32_t x583 = -1;
	int32_t t36 = -99;

	t36 = (x581^(x582>>(x583&x584)));

	if (t36 != -1073741824) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x593 = 19514U;
	uint32_t x594 = 2U;
	static uint32_t t37 = 44U;

	t37 = (x593^(x594>>(x595&x596)));

	if (t37 != 19512U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x597 = 5U;
	static int64_t x599 = -1LL;
	int16_t x600 = 5;

	t38 = (x597^(x598>>(x599&x600)));

	if (t38 != 288230376151711738LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x629 = INT16_MAX;
	volatile uint8_t x630 = 10U;
	uint8_t x631 = 0U;
	volatile int16_t x632 = -10986;

	t39 = (x629^(x630>>(x631&x632)));

	if (t39 != 32757) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x633 = -1LL;
	static int8_t x634 = 0;
	int64_t x635 = INT64_MIN;
	int8_t x636 = INT8_MAX;
	volatile int64_t t40 = 23LL;

	t40 = (x633^(x634>>(x635&x636)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x661 = 3767608303822625748LLU;
	uint64_t x662 = 4991864LLU;
	volatile int32_t x663 = INT32_MIN;
	int16_t x664 = 0;
	volatile uint64_t t41 = 1427LLU;

	t41 = (x661^(x662>>(x663&x664)));

	if (t41 != 3767608303826563244LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x719 = -16;
	uint8_t x720 = 0U;
	volatile uint64_t t42 = 10374604425551717LLU;

	t42 = (x717^(x718>>(x719&x720)));

	if (t42 != 18383073231932638131LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x725 = 129;
	uint64_t x726 = 489582436LLU;
	int8_t x727 = -5;
	uint64_t t43 = 221288234168928241LLU;

	t43 = (x725^(x726>>(x727&x728)));

	if (t43 != 489582565LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x785 = -1;
	volatile int16_t x786 = INT16_MAX;
	int8_t x787 = 11;
	int64_t x788 = 31500987LL;
	int32_t t44 = -344431723;

	t44 = (x785^(x786>>(x787&x788)));

	if (t44 != -16) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x790 = INT64_MAX;
	int8_t x791 = 15;
	int32_t x792 = -949195753;

	t45 = (x789^(x790>>(x791&x792)));

	if (t45 != -72057591890444289LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x793 = INT8_MIN;
	int8_t x794 = 3;
	static int32_t x795 = 218;
	volatile int32_t t46 = 29404197;

	t46 = (x793^(x794>>(x795&x796)));

	if (t46 != -125) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x805 = 155085650;
	static volatile int16_t x806 = 28;
	static volatile uint64_t x807 = 212455682628826LLU;
	int32_t t47 = -60782;

	t47 = (x805^(x806>>(x807&x808)));

	if (t47 != 155085650) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x857 = -1111809333683896LL;
	uint8_t x858 = 2U;
	volatile uint8_t x859 = UINT8_MAX;
	int32_t x860 = INT32_MIN;
	volatile int64_t t48 = -13375912806903LL;

	t48 = (x857^(x858>>(x859&x860)));

	if (t48 != -1111809333683894LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x889 = 240U;
	uint16_t x890 = 77U;
	int16_t x891 = INT16_MIN;
	static uint16_t x892 = 6U;
	volatile int32_t t49 = 11204;

	t49 = (x889^(x890>>(x891&x892)));

	if (t49 != 189) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x906 = 4157848LL;
	int64_t x907 = -66706LL;
	uint32_t x908 = 41U;
	int64_t t50 = 54094393332LL;

	t50 = (x905^(x906>>(x907&x908)));

	if (t50 != 260885LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x965 = INT16_MIN;
	int64_t x966 = INT64_MAX;
	uint64_t x967 = 1350032792405993565LLU;
	static uint8_t x968 = 0U;
	int64_t t51 = 7564095LL;

	t51 = (x965^(x966>>(x967&x968)));

	if (t51 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x989 = 152;
	static uint16_t x990 = UINT16_MAX;
	static int32_t x991 = INT32_MIN;
	uint8_t x992 = UINT8_MAX;

	t52 = (x989^(x990>>(x991&x992)));

	if (t52 != 65383) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x1005 = 2893LLU;
	uint8_t x1006 = 0U;
	volatile int16_t x1007 = INT16_MIN;
	int16_t x1008 = 382;
	uint64_t t53 = 0LLU;

	t53 = (x1005^(x1006>>(x1007&x1008)));

	if (t53 != 2893LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x1025 = INT16_MAX;
	static uint8_t x1026 = UINT8_MAX;
	uint16_t x1027 = 16040U;
	int16_t x1028 = INT16_MIN;
	volatile int32_t t54 = 1;

	t54 = (x1025^(x1026>>(x1027&x1028)));

	if (t54 != 32512) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1037 = 9U;
	uint16_t x1038 = UINT16_MAX;
	static uint64_t x1039 = UINT64_MAX;
	int16_t x1040 = 13;

	t55 = (x1037^(x1038>>(x1039&x1040)));

	if (t55 != 14U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1054 = 57;
	static int64_t x1055 = INT64_MIN;
	volatile int8_t x1056 = 0;
	static int32_t t56 = -15684562;

	t56 = (x1053^(x1054>>(x1055&x1056)));

	if (t56 != -2147483591) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x1061 = INT16_MAX;
	uint64_t x1062 = 6464269030203LLU;
	uint8_t x1063 = UINT8_MAX;
	int8_t x1064 = 21;
	uint64_t t57 = 1280LLU;

	t57 = (x1061^(x1062>>(x1063&x1064)));

	if (t57 != 3110748LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x1069 = INT8_MIN;
	uint32_t x1070 = 167055886U;
	uint8_t x1071 = 70U;
	uint8_t x1072 = 2U;
	volatile uint32_t t58 = 38661U;

	t58 = (x1069^(x1070>>(x1071&x1072)));

	if (t58 != 4253203203U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1085 = 1U;
	int32_t x1086 = INT32_MAX;
	int64_t x1087 = -368716735586811LL;
	int32_t t59 = 10125;

	t59 = (x1085^(x1086>>(x1087&x1088)));

	if (t59 != 67108862) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1109 = INT16_MIN;
	int64_t x1110 = 23LL;
	uint32_t x1111 = 10U;
	static uint32_t x1112 = 121368034U;
	volatile int64_t t60 = -794234612102457LL;

	t60 = (x1109^(x1110>>(x1111&x1112)));

	if (t60 != -32763LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1118 = 1;
	volatile int8_t x1119 = 9;
	static uint8_t x1120 = 4U;
	int32_t t61 = -551;

	t61 = (x1117^(x1118>>(x1119&x1120)));

	if (t61 != -13524) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1133 = 2444316LLU;
	int32_t x1134 = 234440545;
	int8_t x1136 = 18;

	t62 = (x1133^(x1134>>(x1135&x1136)));

	if (t62 != 2445154LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x1165 = UINT16_MAX;
	uint8_t x1166 = UINT8_MAX;
	int32_t x1168 = 2;
	volatile int32_t t63 = 0;

	t63 = (x1165^(x1166>>(x1167&x1168)));

	if (t63 != 65280) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1185 = 4357U;
	static int16_t x1186 = INT16_MAX;
	volatile int32_t x1187 = INT32_MAX;
	uint8_t x1188 = 19U;
	volatile int32_t t64 = -284941044;

	t64 = (x1185^(x1186>>(x1187&x1188)));

	if (t64 != 4357) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x1193 = UINT32_MAX;
	int64_t x1195 = 3832922903900061811LL;
	uint16_t x1196 = 3U;
	static uint64_t t65 = 25657566560566LLU;

	t65 = (x1193^(x1194>>(x1195&x1196)));

	if (t65 != 4293492593LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x1197 = 1;
	uint8_t x1198 = 24U;
	int64_t x1199 = 1864058384579877229LL;
	int8_t x1200 = 0;

	t66 = (x1197^(x1198>>(x1199&x1200)));

	if (t66 != 25) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1201 = -1;
	int8_t x1202 = 1;
	int64_t x1203 = INT64_MIN;
	int64_t x1204 = 320063LL;
	volatile int32_t t67 = 352;

	t67 = (x1201^(x1202>>(x1203&x1204)));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1210 = 7784351U;
	uint8_t x1211 = 6U;
	uint32_t x1212 = 441U;
	int64_t t68 = -30155569LL;

	t68 = (x1209^(x1210>>(x1211&x1212)));

	if (t68 != 1972333549LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x1225 = INT8_MIN;
	static uint8_t x1226 = 35U;
	int32_t x1227 = INT32_MIN;
	int32_t x1228 = INT32_MAX;
	volatile int32_t t69 = 0;

	t69 = (x1225^(x1226>>(x1227&x1228)));

	if (t69 != -93) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1237 = -1LL;
	uint32_t x1238 = UINT32_MAX;
	volatile int16_t x1239 = 11716;
	static volatile uint32_t x1240 = 4131U;
	volatile int64_t t70 = 104976130320110LL;

	t70 = (x1237^(x1238>>(x1239&x1240)));

	if (t70 != -4294967296LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1249 = 13782U;
	uint32_t x1250 = UINT32_MAX;
	int32_t x1251 = -8563;
	volatile int16_t x1252 = 0;
	volatile uint32_t t71 = 745137U;

	t71 = (x1249^(x1250>>(x1251&x1252)));

	if (t71 != 4294953513U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1269 = -1;
	int64_t x1270 = INT64_MAX;
	int16_t x1271 = 0;
	int64_t x1272 = -157LL;
	static volatile int64_t t72 = INT64_MIN;

	t72 = (x1269^(x1270>>(x1271&x1272)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1289 = -7;
	int32_t x1290 = INT32_MAX;
	uint8_t x1291 = 0U;
	uint32_t x1292 = 806366546U;
	int32_t t73 = -559383781;

	t73 = (x1289^(x1290>>(x1291&x1292)));

	if (t73 != -2147483642) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1294 = INT64_MAX;
	int32_t x1295 = INT32_MIN;
	uint32_t x1296 = 13714U;
	static volatile int64_t t74 = -6LL;

	t74 = (x1293^(x1294>>(x1295&x1296)));

	if (t74 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1313 = 30136U;
	volatile int8_t x1316 = 21;

	t75 = (x1313^(x1314>>(x1315&x1316)));

	if (t75 != 30136) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1317 = 899U;
	uint32_t x1318 = 8059U;
	static volatile int64_t x1320 = INT64_MIN;
	volatile uint32_t t76 = 2135214U;

	t76 = (x1317^(x1318>>(x1319&x1320)));

	if (t76 != 7416U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1325 = INT64_MIN;
	uint8_t x1326 = UINT8_MAX;
	static uint16_t x1327 = 0U;
	volatile int64_t t77 = 652LL;

	t77 = (x1325^(x1326>>(x1327&x1328)));

	if (t77 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1358 = 277LLU;
	static int64_t x1359 = INT64_MIN;
	static uint64_t x1360 = 43939710045658031LLU;

	t78 = (x1357^(x1358>>(x1359&x1360)));

	if (t78 != 18446744073709551338LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x1377 = -47;
	uint16_t x1378 = 179U;
	uint8_t x1379 = 6U;
	int16_t x1380 = INT16_MIN;
	int32_t t79 = 283;

	t79 = (x1377^(x1378>>(x1379&x1380)));

	if (t79 != -158) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x1381 = -1;
	static uint16_t x1382 = UINT16_MAX;
	int64_t x1383 = INT64_MIN;
	int16_t x1384 = 0;

	t80 = (x1381^(x1382>>(x1383&x1384)));

	if (t80 != -65536) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1385 = 6246U;
	uint16_t x1386 = 39U;
	uint64_t x1387 = 42451LLU;
	int32_t t81 = -216;

	t81 = (x1385^(x1386>>(x1387&x1388)));

	if (t81 != 6209) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1389 = INT32_MAX;
	volatile int64_t x1391 = 2LL;
	static uint16_t x1392 = UINT16_MAX;
	volatile int64_t t82 = 368LL;

	t82 = (x1389^(x1390>>(x1391&x1392)));

	if (t82 != 999649716330453458LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1401 = -1;
	uint64_t x1403 = 288118955905527LLU;
	int64_t x1404 = INT64_MIN;
	uint64_t t83 = 3609895071384341LLU;

	t83 = (x1401^(x1402>>(x1403&x1404)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1406 = UINT32_MAX;
	uint8_t x1408 = 3U;
	volatile uint32_t t84 = 1654U;

	t84 = (x1405^(x1406>>(x1407&x1408)));

	if (t84 != 4294967040U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x1418 = 52;
	int64_t x1419 = INT64_MIN;
	static uint32_t x1420 = UINT32_MAX;

	t85 = (x1417^(x1418>>(x1419&x1420)));

	if (t85 != -76) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1425 = -374;
	int32_t x1426 = INT32_MAX;
	static int64_t x1428 = -1LL;
	int32_t t86 = 186734;

	t86 = (x1425^(x1426>>(x1427&x1428)));

	if (t86 != -16011) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1429 = 210059222664992607LLU;
	uint16_t x1430 = UINT16_MAX;
	uint16_t x1431 = 4U;
	uint64_t t87 = 2440434633592522034LLU;

	t87 = (x1429^(x1430>>(x1431&x1432)));

	if (t87 != 210059222664947872LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x1493 = UINT32_MAX;
	volatile uint8_t x1494 = UINT8_MAX;
	int16_t x1495 = 15789;
	uint8_t x1496 = 1U;
	uint32_t t88 = 940936332U;

	t88 = (x1493^(x1494>>(x1495&x1496)));

	if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x1498 = INT64_MAX;
	static int8_t x1500 = INT8_MIN;
	volatile int64_t t89 = -125939LL;

	t89 = (x1497^(x1498>>(x1499&x1500)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1513 = 284507190;
	uint8_t x1514 = UINT8_MAX;
	static int8_t x1516 = -20;
	volatile int32_t t90 = -208225315;

	t90 = (x1513^(x1514>>(x1515&x1516)));

	if (t90 != 284507337) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1521 = INT32_MIN;
	static volatile int32_t x1522 = 450198859;
	int32_t x1523 = INT32_MIN;
	uint8_t x1524 = 9U;
	int32_t t91 = -37344933;

	t91 = (x1521^(x1522>>(x1523&x1524)));

	if (t91 != -1697284789) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1549 = 7126378206210472138LLU;
	uint32_t x1550 = UINT32_MAX;
	volatile int8_t x1551 = INT8_MIN;
	static uint64_t x1552 = 72LLU;

	t92 = (x1549^(x1550>>(x1551&x1552)));

	if (t92 != 7126378204725331765LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x1593 = 7098715407LL;
	uint8_t x1594 = UINT8_MAX;
	static int8_t x1595 = 1;
	static volatile uint32_t x1596 = UINT32_MAX;
	int64_t t93 = 0LL;

	t93 = (x1593^(x1594>>(x1595&x1596)));

	if (t93 != 7098715504LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x1609 = INT16_MAX;
	int32_t x1612 = INT32_MIN;
	volatile uint32_t t94 = 1365045U;

	t94 = (x1609^(x1610>>(x1611&x1612)));

	if (t94 != 4294934528U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1613 = -1LL;
	uint32_t x1614 = 14031711U;
	int64_t x1615 = INT64_MIN;

	t95 = (x1613^(x1614>>(x1615&x1616)));

	if (t95 != -14031712LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1645 = 23U;
	int32_t x1646 = 2;
	int32_t x1647 = INT32_MAX;
	static int8_t x1648 = 1;
	volatile int32_t t96 = 1356;

	t96 = (x1645^(x1646>>(x1647&x1648)));

	if (t96 != 22) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x1653 = INT32_MAX;
	int32_t x1655 = INT32_MIN;
	int64_t x1656 = 105831LL;
	volatile int32_t t97 = 103937871;

	t97 = (x1653^(x1654>>(x1655&x1656)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1665 = -1;
	uint64_t x1666 = UINT64_MAX;
	volatile uint64_t x1667 = 12851533455618387LLU;
	uint32_t x1668 = 569U;

	t98 = (x1665^(x1666>>(x1667&x1668)));

	if (t98 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1718 = 60462U;
	int32_t x1719 = 0;
	volatile uint32_t t99 = 4052U;

	t99 = (x1717^(x1718>>(x1719&x1720)));

	if (t99 != 60625U) { NG(); } else { ; }
	
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

