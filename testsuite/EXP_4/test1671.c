#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x85 = INT32_MAX;
uint8_t x91 = 30U;
static volatile uint8_t x106 = 4U;
int32_t t2 = -447;
volatile uint32_t x133 = 5U;
int32_t t4 = 126;
static uint8_t x295 = UINT8_MAX;
int32_t t6 = 2394488;
static uint32_t x381 = 367U;
uint8_t x431 = 61U;
uint8_t x432 = 8U;
int8_t x463 = -1;
volatile int32_t t9 = -142;
int8_t x516 = -3;
static uint64_t t11 = 110160LLU;
static int16_t x529 = 38;
uint64_t x825 = 100311728609LLU;
int8_t x828 = INT8_MAX;
uint64_t t15 = 1125059452979085LLU;
uint8_t x861 = 8U;
volatile int16_t x881 = INT16_MAX;
volatile uint16_t x884 = 150U;
volatile int32_t x916 = 5397;
uint8_t x1025 = 105U;
static uint8_t x1052 = 1U;
int64_t t24 = -105LL;
uint8_t x1260 = 9U;
uint32_t t26 = 942U;
int64_t x1387 = INT64_MAX;
int16_t x1416 = INT16_MIN;
volatile int8_t x1623 = -1;
int32_t x1659 = 7386;
int16_t x1740 = INT16_MIN;
volatile uint32_t t35 = 702U;
uint32_t x1742 = 7U;
volatile int32_t t36 = 0;
static uint64_t t38 = UINT64_MAX;
uint32_t t39 = 2503U;
static volatile uint16_t x2156 = 105U;
int32_t t42 = -14;
int8_t x2382 = 28;
int32_t x2571 = INT32_MIN;
volatile uint64_t t46 = 271993483789LLU;
uint64_t x2611 = UINT64_MAX;
int16_t x2681 = INT16_MAX;
uint8_t x2716 = 11U;
uint16_t x2735 = 6343U;
uint32_t x2736 = UINT32_MAX;
int64_t x2775 = -2334224032119542633LL;
volatile int32_t x2809 = 660;
uint64_t x2851 = 32618LLU;
static int8_t x2891 = 1;
volatile uint16_t x2902 = 14U;
uint64_t x2904 = 3786909652571569939LLU;
int32_t t62 = -25;
volatile int32_t x3048 = -1;
static uint8_t x3130 = 12U;
static volatile uint64_t t64 = 454111378LLU;
uint8_t x3142 = 5U;
uint8_t x3144 = 0U;
int16_t x3272 = -1;
int32_t x3443 = -865;
volatile int32_t t68 = 3712;
int16_t x3452 = -1;
int32_t x3468 = -1;
uint64_t x3471 = 707750842734449466LLU;
int16_t x3476 = INT16_MAX;
volatile uint8_t x3485 = 30U;
volatile int32_t t73 = 1;
int16_t x3791 = INT16_MIN;
int32_t t76 = -1;
static volatile int16_t x3801 = 3;
volatile int32_t t77 = 456693129;
int8_t x3889 = 1;
uint8_t x3892 = 48U;
int32_t x4140 = INT32_MAX;
volatile int32_t t82 = 3259;
int64_t x4260 = 306468LL;
uint8_t x4346 = 16U;
volatile int16_t x4391 = INT16_MIN;
volatile uint32_t t86 = 19U;
volatile uint32_t t87 = 175003106U;
static int64_t x4419 = INT64_MIN;
uint8_t x4528 = 9U;
int8_t x4576 = 18;
int8_t x4646 = 27;
volatile int8_t x4651 = 16;
static volatile int32_t t93 = -1302085;
uint16_t x4750 = 0U;
static int32_t x4751 = -241366;
volatile int32_t t94 = INT32_MAX;
uint32_t x4782 = 2U;
int8_t x4784 = 0;
volatile uint16_t x4879 = UINT16_MAX;


void f0(void) {
	int8_t x86 = 1;
	int64_t x87 = 261275LL;
	volatile int8_t x88 = 1;
	int32_t t0 = -2;

	t0 = (x85>>(x86|(x87<=x88)));

	if (t0 != 1073741823) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x89 = INT64_MAX;
	int8_t x90 = 43;
	int32_t x92 = 15;
	int64_t t1 = -3466613LL;

	t1 = (x89>>(x90|(x91<=x92)));

	if (t1 != 1048575LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x105 = 202;
	volatile uint8_t x107 = 2U;
	uint16_t x108 = 84U;

	t2 = (x105>>(x106|(x107<=x108)));

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x134 = 0;
	int64_t x135 = 51328965445750LL;
	static volatile int32_t x136 = INT32_MIN;
	uint32_t t3 = 74911U;

	t3 = (x133>>(x134|(x135<=x136)));

	if (t3 != 5U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x289 = UINT8_MAX;
	uint16_t x290 = 24U;
	volatile int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = UINT16_MAX;

	t4 = (x289>>(x290|(x291<=x292)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x293 = 1199522715U;
	volatile int16_t x294 = 0;
	volatile int8_t x296 = 1;
	volatile uint32_t t5 = 241726584U;

	t5 = (x293>>(x294|(x295<=x296)));

	if (t5 != 1199522715U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x333 = 697U;
	static uint32_t x334 = 0U;
	static int16_t x335 = -2401;
	uint32_t x336 = 4857U;

	t6 = (x333>>(x334|(x335<=x336)));

	if (t6 != 697) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x382 = 1U;
	int64_t x383 = -181LL;
	int8_t x384 = INT8_MIN;
	static volatile uint32_t t7 = 34163654U;

	t7 = (x381>>(x382|(x383<=x384)));

	if (t7 != 183U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x429 = 2706580126991LLU;
	int16_t x430 = 38;
	volatile uint64_t t8 = 928314LLU;

	t8 = (x429>>(x430|(x431<=x432)));

	if (t8 != 9LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x461 = 357U;
	uint16_t x462 = 0U;
	int8_t x464 = -2;

	t9 = (x461>>(x462|(x463<=x464)));

	if (t9 != 357) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x501 = 564U;
	uint8_t x502 = 0U;
	static int8_t x503 = -25;
	uint16_t x504 = 6U;
	volatile int32_t t10 = 7;

	t10 = (x501>>(x502|(x503<=x504)));

	if (t10 != 282) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x513 = 32063LLU;
	uint8_t x514 = 4U;
	static int16_t x515 = INT16_MIN;

	t11 = (x513>>(x514|(x515<=x516)));

	if (t11 != 1001LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x530 = 1U;
	volatile uint16_t x531 = UINT16_MAX;
	int32_t x532 = INT32_MAX;
	static int32_t t12 = 466139502;

	t12 = (x529>>(x530|(x531<=x532)));

	if (t12 != 19) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x577 = INT32_MAX;
	uint16_t x578 = 2U;
	volatile int16_t x579 = -6;
	volatile uint64_t x580 = 29742531265551868LLU;
	volatile int32_t t13 = -2;

	t13 = (x577>>(x578|(x579<=x580)));

	if (t13 != 536870911) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x629 = UINT64_MAX;
	uint16_t x630 = 24U;
	static int64_t x631 = -1LL;
	static int8_t x632 = -1;
	uint64_t t14 = 433127LLU;

	t14 = (x629>>(x630|(x631<=x632)));

	if (t14 != 549755813887LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x826 = 3;
	int32_t x827 = INT32_MIN;

	t15 = (x825>>(x826|(x827<=x828)));

	if (t15 != 12538966076LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x862 = 3;
	static uint16_t x863 = 7137U;
	uint16_t x864 = 7U;
	static int32_t t16 = 163306;

	t16 = (x861>>(x862|(x863<=x864)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x882 = 3;
	static volatile int16_t x883 = INT16_MAX;
	static int32_t t17 = -4;

	t17 = (x881>>(x882|(x883<=x884)));

	if (t17 != 4095) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x913 = 21U;
	volatile uint32_t x914 = 0U;
	uint32_t x915 = 584541U;
	volatile int32_t t18 = 23710671;

	t18 = (x913>>(x914|(x915<=x916)));

	if (t18 != 21) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x929 = INT64_MAX;
	uint32_t x930 = 1U;
	static int8_t x931 = INT8_MAX;
	int32_t x932 = INT32_MAX;
	volatile int64_t t19 = 75562LL;

	t19 = (x929>>(x930|(x931<=x932)));

	if (t19 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1001 = UINT64_MAX;
	uint8_t x1002 = 15U;
	int32_t x1003 = INT32_MIN;
	static uint8_t x1004 = 44U;
	volatile uint64_t t20 = 874300LLU;

	t20 = (x1001>>(x1002|(x1003<=x1004)));

	if (t20 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1026 = 4;
	uint64_t x1027 = UINT64_MAX;
	uint8_t x1028 = 0U;
	int32_t t21 = -419;

	t21 = (x1025>>(x1026|(x1027<=x1028)));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1049 = 206U;
	uint8_t x1050 = 1U;
	volatile uint32_t x1051 = 691214U;
	volatile int32_t t22 = -1;

	t22 = (x1049>>(x1050|(x1051<=x1052)));

	if (t22 != 103) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1057 = INT64_MAX;
	static uint16_t x1058 = 3U;
	static uint8_t x1059 = 20U;
	int16_t x1060 = -3;
	volatile int64_t t23 = 86903211LL;

	t23 = (x1057>>(x1058|(x1059<=x1060)));

	if (t23 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1225 = INT64_MAX;
	int8_t x1226 = 0;
	uint16_t x1227 = 3U;
	int32_t x1228 = INT32_MAX;

	t24 = (x1225>>(x1226|(x1227<=x1228)));

	if (t24 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1257 = UINT32_MAX;
	uint8_t x1258 = 5U;
	static uint8_t x1259 = 4U;
	volatile uint32_t t25 = 224244U;

	t25 = (x1257>>(x1258|(x1259<=x1260)));

	if (t25 != 134217727U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1261 = 32582U;
	volatile uint32_t x1262 = 27U;
	volatile uint16_t x1263 = 9U;
	int32_t x1264 = INT32_MIN;

	t26 = (x1261>>(x1262|(x1263<=x1264)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1325 = 3846554LLU;
	uint8_t x1326 = 2U;
	int32_t x1327 = INT32_MIN;
	int8_t x1328 = INT8_MAX;
	static volatile uint64_t t27 = 1530455759655LLU;

	t27 = (x1325>>(x1326|(x1327<=x1328)));

	if (t27 != 480819LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1385 = 84U;
	int8_t x1386 = 1;
	static int32_t x1388 = -33469329;
	volatile int32_t t28 = 2;

	t28 = (x1385>>(x1386|(x1387<=x1388)));

	if (t28 != 42) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1413 = 82U;
	uint8_t x1414 = 6U;
	static int32_t x1415 = INT32_MIN;
	volatile int32_t t29 = -209;

	t29 = (x1413>>(x1414|(x1415<=x1416)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1477 = 258938703LL;
	int64_t x1478 = 2LL;
	int64_t x1479 = INT64_MIN;
	volatile int64_t x1480 = INT64_MIN;
	int64_t t30 = 5742676026LL;

	t30 = (x1477>>(x1478|(x1479<=x1480)));

	if (t30 != 32367337LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1485 = 240719U;
	uint8_t x1486 = 1U;
	static int64_t x1487 = -3531585LL;
	uint64_t x1488 = 245571861932153LLU;
	uint32_t t31 = 120051358U;

	t31 = (x1485>>(x1486|(x1487<=x1488)));

	if (t31 != 120359U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1621 = 3U;
	static uint16_t x1622 = 2U;
	static uint8_t x1624 = 4U;
	int32_t t32 = -423076825;

	t32 = (x1621>>(x1622|(x1623<=x1624)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1625 = 374094724LLU;
	volatile int16_t x1626 = 24;
	uint32_t x1627 = 650141U;
	int64_t x1628 = -1LL;
	static uint64_t t33 = 210770379LLU;

	t33 = (x1625>>(x1626|(x1627<=x1628)));

	if (t33 != 22LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1657 = INT16_MAX;
	uint16_t x1658 = 1U;
	int32_t x1660 = 487215063;
	volatile int32_t t34 = -586069205;

	t34 = (x1657>>(x1658|(x1659<=x1660)));

	if (t34 != 16383) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1737 = 381108563U;
	uint16_t x1738 = 13U;
	int64_t x1739 = -1LL;

	t35 = (x1737>>(x1738|(x1739<=x1740)));

	if (t35 != 46522U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1741 = UINT8_MAX;
	int16_t x1743 = -1;
	uint32_t x1744 = 846308329U;

	t36 = (x1741>>(x1742|(x1743<=x1744)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1753 = INT64_MAX;
	static volatile uint8_t x1754 = 3U;
	int16_t x1755 = 8922;
	uint32_t x1756 = 10915U;
	int64_t t37 = 40269160825458LL;

	t37 = (x1753>>(x1754|(x1755<=x1756)));

	if (t37 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1797 = UINT64_MAX;
	uint16_t x1798 = 0U;
	static uint16_t x1799 = UINT16_MAX;
	static volatile int8_t x1800 = INT8_MIN;

	t38 = (x1797>>(x1798|(x1799<=x1800)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x1977 = 245U;
	uint8_t x1978 = 3U;
	static int64_t x1979 = -1LL;
	int64_t x1980 = 4952473764546864LL;

	t39 = (x1977>>(x1978|(x1979<=x1980)));

	if (t39 != 30U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2069 = INT8_MAX;
	int8_t x2070 = 0;
	volatile int16_t x2071 = -1;
	int16_t x2072 = -1;
	int32_t t40 = 1767;

	t40 = (x2069>>(x2070|(x2071<=x2072)));

	if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2153 = 372921917;
	uint16_t x2154 = 8U;
	int16_t x2155 = -390;
	volatile int32_t t41 = -186182393;

	t41 = (x2153>>(x2154|(x2155<=x2156)));

	if (t41 != 728363) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2201 = 34U;
	static int16_t x2202 = 1;
	uint32_t x2203 = UINT32_MAX;
	int8_t x2204 = -22;

	t42 = (x2201>>(x2202|(x2203<=x2204)));

	if (t42 != 17) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2293 = 4U;
	uint8_t x2294 = 0U;
	static volatile int32_t x2295 = INT32_MAX;
	static volatile int16_t x2296 = INT16_MIN;
	volatile int32_t t43 = -893420058;

	t43 = (x2293>>(x2294|(x2295<=x2296)));

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2381 = 9U;
	int16_t x2383 = -331;
	static int16_t x2384 = INT16_MIN;
	int32_t t44 = 244348684;

	t44 = (x2381>>(x2382|(x2383<=x2384)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2461 = UINT16_MAX;
	int8_t x2462 = 0;
	int16_t x2463 = INT16_MIN;
	volatile int64_t x2464 = 911068622048078822LL;
	int32_t t45 = 9114;

	t45 = (x2461>>(x2462|(x2463<=x2464)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x2569 = 91945146100LLU;
	static uint8_t x2570 = 2U;
	uint64_t x2572 = 3594164934LLU;

	t46 = (x2569>>(x2570|(x2571<=x2572)));

	if (t46 != 22986286525LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2605 = 1340659U;
	int8_t x2606 = 24;
	int32_t x2607 = INT32_MAX;
	int64_t x2608 = -14989115965325001LL;
	uint32_t t47 = 36860U;

	t47 = (x2605>>(x2606|(x2607<=x2608)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2609 = 1586279264571LLU;
	uint16_t x2610 = 0U;
	uint64_t x2612 = 4123867396LLU;
	uint64_t t48 = 6199LLU;

	t48 = (x2609>>(x2610|(x2611<=x2612)));

	if (t48 != 1586279264571LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2649 = UINT64_MAX;
	uint64_t x2650 = 1LLU;
	static volatile uint16_t x2651 = UINT16_MAX;
	uint8_t x2652 = UINT8_MAX;
	volatile uint64_t t49 = 33449234556443301LLU;

	t49 = (x2649>>(x2650|(x2651<=x2652)));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2665 = UINT16_MAX;
	uint16_t x2666 = 2U;
	volatile uint32_t x2667 = UINT32_MAX;
	uint8_t x2668 = UINT8_MAX;
	static volatile int32_t t50 = 370701;

	t50 = (x2665>>(x2666|(x2667<=x2668)));

	if (t50 != 16383) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2677 = 0U;
	volatile uint16_t x2678 = 2U;
	volatile uint64_t x2679 = 425063009811788705LLU;
	static int64_t x2680 = -142817535223LL;
	int32_t t51 = -11;

	t51 = (x2677>>(x2678|(x2679<=x2680)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2682 = 0;
	uint16_t x2683 = 1804U;
	static volatile int16_t x2684 = 232;
	static volatile int32_t t52 = -3;

	t52 = (x2681>>(x2682|(x2683<=x2684)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x2713 = 1483044381U;
	static uint8_t x2714 = 11U;
	uint32_t x2715 = 23U;
	uint32_t t53 = 96U;

	t53 = (x2713>>(x2714|(x2715<=x2716)));

	if (t53 != 724142U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2733 = UINT64_MAX;
	uint16_t x2734 = 7U;
	uint64_t t54 = 6411916033219LLU;

	t54 = (x2733>>(x2734|(x2735<=x2736)));

	if (t54 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2757 = 17LLU;
	uint8_t x2758 = 37U;
	int64_t x2759 = 11047767893380LL;
	int32_t x2760 = INT32_MAX;
	uint64_t t55 = 10990455420556LLU;

	t55 = (x2757>>(x2758|(x2759<=x2760)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2773 = 22496;
	uint8_t x2774 = 1U;
	uint8_t x2776 = 13U;
	int32_t t56 = -243;

	t56 = (x2773>>(x2774|(x2775<=x2776)));

	if (t56 != 11248) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x2810 = 28U;
	int32_t x2811 = INT32_MIN;
	int64_t x2812 = 1LL;
	int32_t t57 = -939;

	t57 = (x2809>>(x2810|(x2811<=x2812)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2849 = 8450U;
	uint8_t x2850 = 11U;
	uint8_t x2852 = 124U;
	int32_t t58 = 13086404;

	t58 = (x2849>>(x2850|(x2851<=x2852)));

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2857 = 1;
	uint8_t x2858 = 7U;
	uint32_t x2859 = 1178U;
	static uint16_t x2860 = UINT16_MAX;
	static int32_t t59 = 1;

	t59 = (x2857>>(x2858|(x2859<=x2860)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2889 = UINT32_MAX;
	static int32_t x2890 = 0;
	int16_t x2892 = -1;
	uint32_t t60 = UINT32_MAX;

	t60 = (x2889>>(x2890|(x2891<=x2892)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2901 = UINT8_MAX;
	int8_t x2903 = -22;
	volatile int32_t t61 = 9221672;

	t61 = (x2901>>(x2902|(x2903<=x2904)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2997 = 19;
	int8_t x2998 = 1;
	static volatile int64_t x2999 = INT64_MAX;
	uint64_t x3000 = 1324418LLU;

	t62 = (x2997>>(x2998|(x2999<=x3000)));

	if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3045 = UINT64_MAX;
	static uint64_t x3046 = 4LLU;
	int64_t x3047 = -1LL;
	uint64_t t63 = 586LLU;

	t63 = (x3045>>(x3046|(x3047<=x3048)));

	if (t63 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3129 = UINT64_MAX;
	static int64_t x3131 = 52325LL;
	uint32_t x3132 = UINT32_MAX;

	t64 = (x3129>>(x3130|(x3131<=x3132)));

	if (t64 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3141 = 38U;
	int16_t x3143 = INT16_MIN;
	int32_t t65 = 123773390;

	t65 = (x3141>>(x3142|(x3143<=x3144)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x3269 = INT32_MAX;
	int32_t x3270 = 7;
	int32_t x3271 = 1;
	int32_t t66 = -16059729;

	t66 = (x3269>>(x3270|(x3271<=x3272)));

	if (t66 != 16777215) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3317 = 55U;
	uint8_t x3318 = 7U;
	volatile uint8_t x3319 = 10U;
	uint16_t x3320 = UINT16_MAX;
	volatile int32_t t67 = 1314;

	t67 = (x3317>>(x3318|(x3319<=x3320)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3441 = 1519U;
	uint32_t x3442 = 26U;
	static volatile int16_t x3444 = INT16_MIN;

	t68 = (x3441>>(x3442|(x3443<=x3444)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3449 = 1U;
	uint16_t x3450 = 14U;
	static volatile uint64_t x3451 = 337843893865LLU;
	uint32_t t69 = 126572650U;

	t69 = (x3449>>(x3450|(x3451<=x3452)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x3465 = 4192562U;
	uint8_t x3466 = 1U;
	volatile int64_t x3467 = INT64_MIN;
	volatile uint32_t t70 = 2415U;

	t70 = (x3465>>(x3466|(x3467<=x3468)));

	if (t70 != 2096281U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3469 = 0;
	volatile uint8_t x3470 = 6U;
	uint8_t x3472 = 8U;
	int32_t t71 = -1152;

	t71 = (x3469>>(x3470|(x3471<=x3472)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3473 = INT32_MAX;
	uint32_t x3474 = 1U;
	volatile uint16_t x3475 = UINT16_MAX;
	volatile int32_t t72 = 164539521;

	t72 = (x3473>>(x3474|(x3475<=x3476)));

	if (t72 != 1073741823) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x3486 = 6U;
	uint16_t x3487 = 38U;
	int16_t x3488 = INT16_MIN;

	t73 = (x3485>>(x3486|(x3487<=x3488)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3641 = 0U;
	int16_t x3642 = 1;
	static volatile int32_t x3643 = 80;
	int16_t x3644 = -1;
	uint32_t t74 = 33841U;

	t74 = (x3641>>(x3642|(x3643<=x3644)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3773 = UINT16_MAX;
	uint16_t x3774 = 1U;
	static int32_t x3775 = INT32_MIN;
	int8_t x3776 = 18;
	int32_t t75 = -2347931;

	t75 = (x3773>>(x3774|(x3775<=x3776)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3789 = 2U;
	uint16_t x3790 = 1U;
	uint32_t x3792 = 421718322U;

	t76 = (x3789>>(x3790|(x3791<=x3792)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x3802 = 27;
	uint32_t x3803 = UINT32_MAX;
	static int32_t x3804 = -948078759;

	t77 = (x3801>>(x3802|(x3803<=x3804)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3890 = 8;
	volatile uint32_t x3891 = 945U;
	volatile int32_t t78 = -8;

	t78 = (x3889>>(x3890|(x3891<=x3892)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4077 = 900991333055543LLU;
	volatile int8_t x4078 = 5;
	volatile uint64_t x4079 = 2042933753LLU;
	int64_t x4080 = INT64_MIN;
	uint64_t t79 = 1855077440681536LLU;

	t79 = (x4077>>(x4078|(x4079<=x4080)));

	if (t79 != 28155979157985LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x4105 = 47;
	static uint8_t x4106 = 7U;
	uint64_t x4107 = UINT64_MAX;
	uint32_t x4108 = 0U;
	volatile int32_t t80 = -7651;

	t80 = (x4105>>(x4106|(x4107<=x4108)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4137 = INT32_MAX;
	uint8_t x4138 = 1U;
	int16_t x4139 = INT16_MAX;
	static volatile int32_t t81 = -14;

	t81 = (x4137>>(x4138|(x4139<=x4140)));

	if (t81 != 1073741823) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4177 = UINT16_MAX;
	uint16_t x4178 = 1U;
	int16_t x4179 = -1;
	uint64_t x4180 = 441319398616915520LLU;

	t82 = (x4177>>(x4178|(x4179<=x4180)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4257 = INT64_MAX;
	static volatile uint8_t x4258 = 21U;
	uint8_t x4259 = 40U;
	volatile int64_t t83 = -6729785400412778LL;

	t83 = (x4257>>(x4258|(x4259<=x4260)));

	if (t83 != 4398046511103LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x4289 = 42U;
	uint16_t x4290 = 0U;
	static volatile uint64_t x4291 = UINT64_MAX;
	volatile uint64_t x4292 = 22348672698836520LLU;
	volatile int32_t t84 = -14;

	t84 = (x4289>>(x4290|(x4291<=x4292)));

	if (t84 != 42) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4345 = 3U;
	int32_t x4347 = INT32_MIN;
	int8_t x4348 = 54;
	int32_t t85 = -11;

	t85 = (x4345>>(x4346|(x4347<=x4348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x4389 = UINT32_MAX;
	uint8_t x4390 = 1U;
	int64_t x4392 = -40093LL;

	t86 = (x4389>>(x4390|(x4391<=x4392)));

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4393 = UINT32_MAX;
	static int8_t x4394 = 12;
	int16_t x4395 = INT16_MIN;
	static int8_t x4396 = INT8_MIN;

	t87 = (x4393>>(x4394|(x4395<=x4396)));

	if (t87 != 524287U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x4417 = INT16_MAX;
	uint8_t x4418 = 2U;
	int8_t x4420 = 0;
	volatile int32_t t88 = 22025742;

	t88 = (x4417>>(x4418|(x4419<=x4420)));

	if (t88 != 4095) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4429 = 4010;
	uint64_t x4430 = 0LLU;
	int16_t x4431 = 6;
	int16_t x4432 = -1;
	int32_t t89 = 39;

	t89 = (x4429>>(x4430|(x4431<=x4432)));

	if (t89 != 4010) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4525 = 14;
	uint32_t x4526 = 0U;
	volatile int64_t x4527 = -15LL;
	volatile int32_t t90 = -859822256;

	t90 = (x4525>>(x4526|(x4527<=x4528)));

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4573 = 1;
	uint16_t x4574 = 6U;
	uint64_t x4575 = 413958497LLU;
	int32_t t91 = 446269264;

	t91 = (x4573>>(x4574|(x4575<=x4576)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4645 = 7709735LLU;
	static uint8_t x4647 = 8U;
	volatile int16_t x4648 = -1;
	uint64_t t92 = 287248279892901LLU;

	t92 = (x4645>>(x4646|(x4647<=x4648)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4649 = 1;
	int16_t x4650 = 26;
	uint64_t x4652 = 125749830738431LLU;

	t93 = (x4649>>(x4650|(x4651<=x4652)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4749 = INT32_MAX;
	uint32_t x4752 = 1725294537U;

	t94 = (x4749>>(x4750|(x4751<=x4752)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x4757 = 230242U;
	static int16_t x4758 = 0;
	uint16_t x4759 = UINT16_MAX;
	int32_t x4760 = 0;
	static volatile uint32_t t95 = 6406687U;

	t95 = (x4757>>(x4758|(x4759<=x4760)));

	if (t95 != 230242U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4773 = 2U;
	volatile uint16_t x4774 = 20U;
	uint8_t x4775 = UINT8_MAX;
	volatile uint64_t x4776 = 120522189911076LLU;
	volatile int32_t t96 = 354;

	t96 = (x4773>>(x4774|(x4775<=x4776)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4781 = INT32_MAX;
	volatile uint16_t x4783 = 255U;
	volatile int32_t t97 = 51693;

	t97 = (x4781>>(x4782|(x4783<=x4784)));

	if (t97 != 536870911) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x4829 = 1U;
	int64_t x4830 = 0LL;
	static int8_t x4831 = -2;
	static int8_t x4832 = -1;
	uint32_t t98 = 971U;

	t98 = (x4829>>(x4830|(x4831<=x4832)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4877 = 48;
	volatile uint8_t x4878 = 1U;
	uint64_t x4880 = UINT64_MAX;
	volatile int32_t t99 = -1;

	t99 = (x4877>>(x4878|(x4879<=x4880)));

	if (t99 != 24) { NG(); } else { ; }
	
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

