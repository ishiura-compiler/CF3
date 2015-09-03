#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x17 = 1U;
int32_t t0 = -100403;
int64_t x141 = INT64_MIN;
volatile uint64_t x142 = UINT64_MAX;
volatile int16_t x156 = 1;
volatile uint64_t t4 = 4149010862178655LLU;
volatile int64_t x158 = 892348014LL;
uint64_t t5 = 2975309026LLU;
int8_t x191 = 1;
int16_t x209 = INT16_MIN;
static int64_t x210 = -1LL;
int32_t x218 = INT32_MIN;
uint16_t x227 = 1U;
int64_t x228 = INT64_MIN;
int8_t x267 = 0;
int32_t x354 = INT32_MAX;
volatile uint32_t t16 = 0U;
uint16_t x398 = 556U;
static uint64_t x445 = 196440932580844LLU;
uint8_t x454 = 3U;
volatile int32_t t19 = -5149;
volatile uint32_t x460 = 2U;
uint32_t x470 = 59498U;
int32_t x472 = -166944407;
volatile int32_t t22 = -1144357;
uint8_t x503 = UINT8_MAX;
int8_t x525 = -1;
volatile uint16_t x527 = 53U;
volatile int8_t x606 = INT8_MAX;
uint64_t t30 = 8628211595548LLU;
int8_t x666 = -1;
static volatile int32_t t32 = -102;
int16_t x676 = INT16_MAX;
int64_t t34 = -3483967824131208766LL;
volatile int64_t x744 = -1LL;
uint8_t x748 = UINT8_MAX;
static int32_t t38 = 212201;
int64_t x811 = 130670065933349LL;
static int64_t x819 = 808LL;
uint32_t t41 = 2423584U;
volatile int8_t x902 = INT8_MAX;
int32_t x904 = INT32_MIN;
volatile int16_t x905 = INT16_MIN;
uint64_t x907 = UINT64_MAX;
uint64_t x908 = 2LLU;
int64_t x913 = INT64_MIN;
uint64_t x958 = UINT64_MAX;
int64_t x960 = -64760822LL;
volatile uint64_t t52 = 80946516760LLU;
uint16_t x1014 = 0U;
int32_t x1063 = INT32_MIN;
static volatile int32_t t55 = 12588;
uint8_t x1102 = UINT8_MAX;
uint8_t x1104 = 6U;
uint16_t x1115 = 11322U;
uint8_t x1116 = 7U;
int64_t t58 = -5040212939LL;
volatile uint16_t x1117 = 1U;
uint32_t t61 = 26687U;
int16_t x1194 = INT16_MIN;
uint32_t x1209 = 1U;
static volatile int32_t t66 = -1005994;
static int16_t x1279 = 7;
uint64_t t69 = 29LLU;
volatile int64_t x1370 = -1LL;
uint64_t t72 = 549815887976LLU;
int8_t x1416 = 30;
volatile uint8_t x1428 = 6U;
int32_t x1437 = INT32_MIN;
volatile uint8_t x1459 = UINT8_MAX;
int16_t x1494 = -1;
volatile uint8_t x1570 = 5U;
int8_t x1571 = 4;
int32_t x1572 = 99872;
int32_t x1583 = -1;
uint8_t x1603 = 2U;
int32_t x1604 = -1;
volatile uint64_t t84 = 4241214LLU;
static uint16_t x1615 = 15U;
volatile uint64_t t85 = 205068LLU;
uint32_t x1681 = 3U;
int16_t x1682 = -1;
int16_t x1683 = INT16_MAX;
uint8_t x1837 = 6U;
static uint32_t x1853 = UINT32_MAX;
volatile uint32_t t96 = 3878U;
static uint8_t x1880 = 98U;
uint32_t t97 = 851728384U;
static volatile uint64_t x1893 = 3517011LLU;
int32_t x1904 = -1;


void f0(void) {
	uint16_t x18 = 18U;
	uint32_t x19 = 0U;
	static uint16_t x20 = 19392U;

	t0 = ((x17*x18)<<(x19&x20));

	if (t0 != 18) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x53 = 1353596199665060110LLU;
	int16_t x54 = -3390;
	int8_t x55 = -3;
	static uint16_t x56 = 3U;
	static uint64_t t1 = 1828LLU;

	t1 = ((x53*x54)<<(x55&x56));

	if (t1 != 9096314978249158968LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x61 = 4U;
	static volatile uint32_t x62 = UINT32_MAX;
	int8_t x63 = INT8_MIN;
	static uint8_t x64 = 2U;
	volatile uint32_t t2 = 150U;

	t2 = ((x61*x62)<<(x63&x64));

	if (t2 != 4294967292U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x143 = 39U;
	int64_t x144 = INT64_MAX;
	uint64_t t3 = 12797212665423464LLU;

	t3 = ((x141*x142)<<(x143&x144));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x153 = UINT8_MAX;
	volatile uint64_t x154 = 6840222861LLU;
	uint32_t x155 = UINT32_MAX;

	t4 = ((x153*x154)<<(x155&x156));

	if (t4 != 3488513659110LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x157 = UINT64_MAX;
	static int8_t x159 = 13;
	int8_t x160 = INT8_MIN;

	t5 = ((x157*x158)<<(x159&x160));

	if (t5 != 18446744072817203602LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x189 = 219612LLU;
	static int64_t x190 = -78925904107831626LL;
	static int64_t x192 = INT64_MAX;
	uint64_t t6 = 80608422910179LLU;

	t6 = ((x189*x190)<<(x191&x192));

	if (t6 != 13727552715718939856LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x197 = 1843;
	uint16_t x198 = 13U;
	uint32_t x199 = 489727182U;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t7 = 188300087;

	t7 = ((x197*x198)<<(x199&x200));

	if (t7 != 23959) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x211 = 3;
	uint16_t x212 = UINT16_MAX;
	int64_t t8 = -322LL;

	t8 = ((x209*x210)<<(x211&x212));

	if (t8 != 262144LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x217 = 44284314100LLU;
	static volatile int8_t x219 = -1;
	static uint16_t x220 = 4U;
	uint64_t t9 = 1238520494LLU;

	t9 = ((x217*x218)<<(x219&x220));

	if (t9 != 9482311835559395328LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x225 = -3640388425943LL;
	uint64_t x226 = 1685480110745878LLU;
	static uint64_t t10 = 13LLU;

	t10 = ((x225*x226)<<(x227&x228));

	if (t10 != 9361731863683411590LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x241 = -1;
	int8_t x242 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t11 = -7537959;

	t11 = ((x241*x242)<<(x243&x244));

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x265 = UINT32_MAX;
	static uint8_t x266 = 6U;
	int8_t x268 = -6;
	volatile uint32_t t12 = 966067532U;

	t12 = ((x265*x266)<<(x267&x268));

	if (t12 != 4294967290U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x329 = UINT16_MAX;
	uint8_t x330 = 1U;
	uint64_t x331 = 93280552076LLU;
	int64_t x332 = INT64_MIN;
	int32_t t13 = -911;

	t13 = ((x329*x330)<<(x331&x332));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MIN;
	volatile uint64_t t14 = 7645576LLU;

	t14 = ((x353*x354)<<(x355&x356));

	if (t14 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x389 = INT8_MIN;
	uint64_t x390 = 226LLU;
	int32_t x391 = INT32_MIN;
	static uint8_t x392 = 44U;
	static uint64_t t15 = 81735813LLU;

	t15 = ((x389*x390)<<(x391&x392));

	if (t15 != 18446744073709522688LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile uint32_t x394 = 20883128U;
	static uint8_t x395 = 1U;
	int32_t x396 = INT32_MIN;

	t16 = ((x393*x394)<<(x395&x396));

	if (t16 != 2896429056U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x397 = 16421135994LLU;
	volatile int8_t x399 = INT8_MIN;
	uint8_t x400 = 26U;
	uint64_t t17 = 8761149502439911507LLU;

	t17 = ((x397*x398)<<(x399&x400));

	if (t17 != 9130151612664LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x446 = INT64_MIN;
	int16_t x447 = -1;
	static volatile uint8_t x448 = 0U;
	volatile uint64_t t18 = 566544LLU;

	t18 = ((x445*x446)<<(x447&x448));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x453 = INT8_MAX;
	int64_t x455 = 2LL;
	uint16_t x456 = UINT16_MAX;

	t19 = ((x453*x454)<<(x455&x456));

	if (t19 != 1524) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x457 = -1;
	uint64_t x458 = 1276LLU;
	volatile int64_t x459 = INT64_MAX;
	volatile uint64_t t20 = 378109253141LLU;

	t20 = ((x457*x458)<<(x459&x460));

	if (t20 != 18446744073709546512LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x469 = -1;
	static uint8_t x471 = 0U;
	uint32_t t21 = 258048253U;

	t21 = ((x469*x470)<<(x471&x472));

	if (t21 != 4294907798U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x489 = INT8_MIN;
	static int16_t x490 = -1;
	static volatile int16_t x491 = INT16_MIN;
	volatile int16_t x492 = 11915;

	t22 = ((x489*x490)<<(x491&x492));

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x497 = 0;
	uint64_t x498 = 78LLU;
	uint8_t x499 = 14U;
	static int16_t x500 = INT16_MIN;
	uint64_t t23 = 603LLU;

	t23 = ((x497*x498)<<(x499&x500));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x501 = 44;
	uint8_t x502 = 42U;
	volatile int32_t x504 = INT32_MIN;
	volatile int32_t t24 = -17348;

	t24 = ((x501*x502)<<(x503&x504));

	if (t24 != 1848) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x526 = -6;
	volatile int16_t x528 = INT16_MIN;
	int32_t t25 = 313;

	t25 = ((x525*x526)<<(x527&x528));

	if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x529 = UINT32_MAX;
	volatile uint64_t x530 = UINT64_MAX;
	int64_t x531 = INT64_MAX;
	uint8_t x532 = 1U;
	static volatile uint64_t t26 = 31422800226LLU;

	t26 = ((x529*x530)<<(x531&x532));

	if (t26 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x605 = 164143439979186286LLU;
	uint8_t x607 = UINT8_MAX;
	int64_t x608 = INT64_MIN;
	volatile uint64_t t27 = 4166132LLU;

	t27 = ((x605*x606)<<(x607&x608));

	if (t27 != 2399472803647106706LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x621 = INT32_MAX;
	uint32_t x622 = 1478U;
	static uint8_t x623 = 1U;
	static uint64_t x624 = UINT64_MAX;
	static volatile uint32_t t28 = 55834360U;

	t28 = ((x621*x622)<<(x623&x624));

	if (t28 != 4294964340U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x633 = INT8_MAX;
	uint32_t x634 = 735184U;
	uint16_t x635 = 196U;
	int64_t x636 = INT64_MIN;
	volatile uint32_t t29 = 286U;

	t29 = ((x633*x634)<<(x635&x636));

	if (t29 != 93368368U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x637 = 8627389LLU;
	int32_t x638 = INT32_MIN;
	uint16_t x639 = UINT16_MAX;
	static int32_t x640 = INT32_MIN;

	t30 = ((x637*x638)<<(x639&x640));

	if (t30 != 18428216896907116544LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x641 = -6;
	int64_t x642 = -252122151000LL;
	int16_t x643 = INT16_MIN;
	uint8_t x644 = UINT8_MAX;
	volatile int64_t t31 = 3166745173941404LL;

	t31 = ((x641*x642)<<(x643&x644));

	if (t31 != 1512732906000LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x665 = -10007;
	int64_t x667 = INT64_MAX;
	int64_t x668 = INT64_MIN;

	t32 = ((x665*x666)<<(x667&x668));

	if (t32 != 10007) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x673 = -2;
	uint64_t x674 = 51006250124868675LLU;
	uint32_t x675 = 43U;
	volatile uint64_t t33 = 64212969980778LLU;

	t33 = ((x673*x674)<<(x675&x676));

	if (t33 != 13275433025023246336LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x701 = -260965557LL;
	int32_t x702 = INT32_MIN;
	int16_t x703 = INT16_MAX;
	int32_t x704 = INT32_MIN;

	t34 = ((x701*x702)<<(x703&x704));

	if (t34 != 560419266348711936LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x725 = 2970421449438339504LLU;
	uint16_t x726 = 15972U;
	uint8_t x727 = 0U;
	uint32_t x728 = 332898U;
	volatile uint64_t t35 = 11LLU;

	t35 = ((x725*x726)<<(x727&x728));

	if (t35 != 16992376921901353152LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x741 = 2870855U;
	uint16_t x742 = 779U;
	uint16_t x743 = 26U;
	volatile uint32_t t36 = 21021250U;

	t36 = ((x741*x742)<<(x743&x744));

	if (t36 != 872415232U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x745 = -4LL;
	static int64_t x746 = -1LL;
	int8_t x747 = 0;
	int64_t t37 = 2650743LL;

	t37 = ((x745*x746)<<(x747&x748));

	if (t37 != 4LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x757 = -1;
	volatile int8_t x758 = INT8_MIN;
	uint32_t x759 = 0U;
	volatile uint32_t x760 = 78420U;

	t38 = ((x757*x758)<<(x759&x760));

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x785 = INT8_MIN;
	static uint32_t x786 = 3U;
	uint32_t x787 = UINT32_MAX;
	static uint8_t x788 = 7U;
	volatile uint32_t t39 = 13864U;

	t39 = ((x785*x786)<<(x787&x788));

	if (t39 != 4294918144U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x809 = 2536709721716LLU;
	static int16_t x810 = INT16_MIN;
	int64_t x812 = INT64_MIN;
	static volatile uint64_t t40 = 552646043876LLU;

	t40 = ((x809*x810)<<(x811&x812));

	if (t40 != 18363621169548361728LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x817 = 847U;
	static uint32_t x818 = 15U;
	int16_t x820 = 1;

	t41 = ((x817*x818)<<(x819&x820));

	if (t41 != 12705U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x825 = 1U;
	uint32_t x826 = UINT32_MAX;
	int64_t x827 = INT64_MIN;
	int32_t x828 = INT32_MAX;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = ((x825*x826)<<(x827&x828));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x833 = INT16_MAX;
	int8_t x834 = 0;
	int8_t x835 = -25;
	int8_t x836 = 1;
	volatile int32_t t43 = 0;

	t43 = ((x833*x834)<<(x835&x836));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x845 = 0U;
	static uint16_t x846 = 15237U;
	uint32_t x847 = 19U;
	static volatile uint64_t x848 = UINT64_MAX;
	volatile uint32_t t44 = 15U;

	t44 = ((x845*x846)<<(x847&x848));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x861 = INT8_MIN;
	int64_t x862 = -1LL;
	int16_t x863 = INT16_MAX;
	int16_t x864 = INT16_MIN;
	volatile int64_t t45 = 666378121391262891LL;

	t45 = ((x861*x862)<<(x863&x864));

	if (t45 != 128LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x901 = 205U;
	static int32_t x903 = 42452074;
	static volatile int32_t t46 = -47234609;

	t46 = ((x901*x902)<<(x903&x904));

	if (t46 != 26035) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x906 = -108835LL;
	volatile int64_t t47 = 424802681205LL;

	t47 = ((x905*x906)<<(x907&x908));

	if (t47 != 14265221120LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x914 = 17473454LLU;
	int8_t x915 = 4;
	int8_t x916 = INT8_MIN;
	volatile uint64_t t48 = 8155067465891571LLU;

	t48 = ((x913*x914)<<(x915&x916));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x957 = UINT16_MAX;
	volatile uint32_t x959 = 3U;
	volatile uint64_t t49 = 268799553LLU;

	t49 = ((x957*x958)<<(x959&x960));

	if (t49 != 18446744073709289476LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x961 = UINT64_MAX;
	uint8_t x962 = 1U;
	static volatile int64_t x963 = INT64_MIN;
	uint64_t x964 = 12LLU;
	static volatile uint64_t t50 = UINT64_MAX;

	t50 = ((x961*x962)<<(x963&x964));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x973 = 24461LLU;
	uint64_t x974 = 17LLU;
	volatile int8_t x975 = 2;
	static uint64_t x976 = 276854766192466687LLU;
	volatile uint64_t t51 = 337545225144857LLU;

	t51 = ((x973*x974)<<(x975&x976));

	if (t51 != 1663348LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x993 = 322753029414LLU;
	int16_t x994 = -1;
	static volatile uint8_t x995 = UINT8_MAX;
	uint32_t x996 = 39U;

	t52 = ((x993*x994)<<(x995&x996));

	if (t52 != 3876874701003292672LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1013 = -164;
	uint16_t x1015 = 7551U;
	int64_t x1016 = INT64_MIN;
	static int32_t t53 = -18;

	t53 = ((x1013*x1014)<<(x1015&x1016));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1029 = UINT64_MAX;
	int16_t x1030 = INT16_MAX;
	uint64_t x1031 = UINT64_MAX;
	int8_t x1032 = 3;
	volatile uint64_t t54 = 265545944436358LLU;

	t54 = ((x1029*x1030)<<(x1031&x1032));

	if (t54 != 18446744073709289480LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1061 = -1;
	int32_t x1062 = 0;
	int8_t x1064 = INT8_MAX;

	t55 = ((x1061*x1062)<<(x1063&x1064));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x1101 = 6U;
	uint16_t x1103 = 710U;
	volatile int32_t t56 = -233696;

	t56 = ((x1101*x1102)<<(x1103&x1104));

	if (t56 != 97920) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1105 = INT8_MAX;
	uint32_t x1106 = UINT32_MAX;
	int64_t x1107 = INT64_MIN;
	volatile int8_t x1108 = 1;
	volatile uint32_t t57 = 3U;

	t57 = ((x1105*x1106)<<(x1107&x1108));

	if (t57 != 4294967169U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1113 = INT64_MIN;
	int16_t x1114 = 0;

	t58 = ((x1113*x1114)<<(x1115&x1116));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1118 = UINT64_MAX;
	uint16_t x1119 = 243U;
	volatile int32_t x1120 = 1;
	uint64_t t59 = 0LLU;

	t59 = ((x1117*x1118)<<(x1119&x1120));

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1157 = INT32_MAX;
	uint32_t x1158 = 1516675304U;
	uint32_t x1159 = 398U;
	int8_t x1160 = 1;
	volatile uint32_t t60 = 54138U;

	t60 = ((x1157*x1158)<<(x1159&x1160));

	if (t60 != 2778291992U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1165 = INT8_MIN;
	static volatile uint32_t x1166 = 996109804U;
	int32_t x1167 = INT32_MIN;
	uint32_t x1168 = 892U;

	t61 = ((x1165*x1166)<<(x1167&x1168));

	if (t61 != 1346963968U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1189 = 7482868775LLU;
	uint32_t x1190 = 12918U;
	int16_t x1191 = 0;
	volatile int64_t x1192 = INT64_MIN;
	static uint64_t t62 = 81LLU;

	t62 = ((x1189*x1190)<<(x1191&x1192));

	if (t62 != 96663698835450LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1193 = 14862U;
	volatile int64_t x1195 = -1LL;
	uint8_t x1196 = 12U;
	uint32_t t63 = 5907U;

	t63 = ((x1193*x1194)<<(x1195&x1196));

	if (t63 != 2415919104U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x1197 = UINT64_MAX;
	int16_t x1198 = INT16_MIN;
	int64_t x1199 = -2098252202964LL;
	int8_t x1200 = 0;
	volatile uint64_t t64 = 798597237LLU;

	t64 = ((x1197*x1198)<<(x1199&x1200));

	if (t64 != 32768LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1210 = UINT8_MAX;
	int16_t x1211 = INT16_MIN;
	volatile int8_t x1212 = 0;
	volatile uint32_t t65 = 1328183U;

	t65 = ((x1209*x1210)<<(x1211&x1212));

	if (t65 != 255U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x1257 = INT8_MIN;
	static volatile int16_t x1258 = INT16_MIN;
	static int64_t x1259 = INT64_MAX;
	static volatile uint16_t x1260 = 4U;

	t66 = ((x1257*x1258)<<(x1259&x1260));

	if (t66 != 67108864) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x1269 = 11972218LL;
	uint16_t x1270 = 573U;
	int64_t x1271 = INT64_MIN;
	uint8_t x1272 = 82U;
	static volatile int64_t t67 = -892250438250LL;

	t67 = ((x1269*x1270)<<(x1271&x1272));

	if (t67 != 6860080914LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1277 = INT64_MIN;
	static volatile uint64_t x1278 = UINT64_MAX;
	int32_t x1280 = INT32_MIN;
	static volatile uint64_t t68 = 5827LLU;

	t68 = ((x1277*x1278)<<(x1279&x1280));

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1337 = 24580LLU;
	static volatile uint64_t x1338 = 612LLU;
	volatile int16_t x1339 = 43;
	static volatile uint64_t x1340 = 3LLU;

	t69 = ((x1337*x1338)<<(x1339&x1340));

	if (t69 != 120343680LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1365 = INT16_MIN;
	int8_t x1366 = -1;
	volatile int16_t x1367 = INT16_MAX;
	uint32_t x1368 = 5U;
	int32_t t70 = 65103304;

	t70 = ((x1365*x1366)<<(x1367&x1368));

	if (t70 != 1048576) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x1369 = 0U;
	static uint64_t x1371 = 29171131332406LLU;
	volatile uint32_t x1372 = 2U;
	static int64_t t71 = 665732665759086630LL;

	t71 = ((x1369*x1370)<<(x1371&x1372));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1373 = UINT64_MAX;
	volatile uint8_t x1374 = 0U;
	volatile uint16_t x1375 = 6U;
	volatile uint64_t x1376 = 4365469981447600LLU;

	t72 = ((x1373*x1374)<<(x1375&x1376));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1413 = -1LL;
	static uint64_t x1414 = 23466946010LLU;
	static uint64_t x1415 = UINT64_MAX;
	volatile uint64_t t73 = 269542951673LLU;

	t73 = ((x1413*x1414)<<(x1415&x1416));

	if (t73 != 11696046734932180992LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x1425 = 159709255U;
	static int16_t x1426 = INT16_MAX;
	int16_t x1427 = INT16_MAX;
	volatile uint32_t t74 = 298U;

	t74 = ((x1425*x1426)<<(x1427&x1428));

	if (t74 != 2812407360U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1438 = 953738895415998LLU;
	static int32_t x1439 = INT32_MIN;
	volatile uint8_t x1440 = UINT8_MAX;
	static volatile uint64_t t75 = 10443238074LLU;

	t75 = ((x1437*x1438)<<(x1439&x1440));

	if (t75 != 3312136533653323776LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1457 = 27U;
	uint16_t x1458 = UINT16_MAX;
	int64_t x1460 = INT64_MIN;
	volatile int32_t t76 = -262563703;

	t76 = ((x1457*x1458)<<(x1459&x1460));

	if (t76 != 1769445) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1473 = INT32_MIN;
	uint32_t x1474 = 387072U;
	int64_t x1475 = INT64_MIN;
	int64_t x1476 = INT64_MAX;
	static volatile uint32_t t77 = 1U;

	t77 = ((x1473*x1474)<<(x1475&x1476));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1493 = 62114LLU;
	static uint32_t x1495 = 127985U;
	int16_t x1496 = 13;
	uint64_t t78 = 270611460940038840LLU;

	t78 = ((x1493*x1494)<<(x1495&x1496));

	if (t78 != 18446744073709427388LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1497 = 2U;
	static uint64_t x1498 = UINT64_MAX;
	uint16_t x1499 = UINT16_MAX;
	int8_t x1500 = 1;
	uint64_t t79 = 64744LLU;

	t79 = ((x1497*x1498)<<(x1499&x1500));

	if (t79 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x1569 = 732245224U;
	volatile uint32_t t80 = 127U;

	t80 = ((x1569*x1570)<<(x1571&x1572));

	if (t80 != 3661226120U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1577 = INT8_MIN;
	int8_t x1578 = INT8_MIN;
	int32_t x1579 = INT32_MIN;
	int32_t x1580 = INT32_MAX;
	volatile int32_t t81 = 1;

	t81 = ((x1577*x1578)<<(x1579&x1580));

	if (t81 != 16384) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1581 = -1;
	uint32_t x1582 = 0U;
	uint32_t x1584 = 0U;
	uint32_t t82 = 397U;

	t82 = ((x1581*x1582)<<(x1583&x1584));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x1585 = 0U;
	int32_t x1586 = INT32_MIN;
	int64_t x1587 = -4154918LL;
	int32_t x1588 = 15;
	volatile int32_t t83 = 8225;

	t83 = ((x1585*x1586)<<(x1587&x1588));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1601 = -1;
	uint64_t x1602 = UINT64_MAX;

	t84 = ((x1601*x1602)<<(x1603&x1604));

	if (t84 != 4LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x1613 = 15U;
	uint64_t x1614 = 23468542702977429LLU;
	int8_t x1616 = -1;

	t85 = ((x1613*x1614)<<(x1615&x1616));

	if (t85 != 6043063298996142080LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1653 = UINT64_MAX;
	int8_t x1654 = INT8_MIN;
	volatile int16_t x1655 = 37;
	volatile uint8_t x1656 = 3U;
	volatile uint64_t t86 = 4218740547073419LLU;

	t86 = ((x1653*x1654)<<(x1655&x1656));

	if (t86 != 256LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1684 = INT64_MIN;
	static uint32_t t87 = 22282U;

	t87 = ((x1681*x1682)<<(x1683&x1684));

	if (t87 != 4294967293U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1689 = 5U;
	uint32_t x1690 = 537284U;
	int32_t x1691 = INT32_MIN;
	volatile uint16_t x1692 = UINT16_MAX;
	static uint32_t t88 = 61U;

	t88 = ((x1689*x1690)<<(x1691&x1692));

	if (t88 != 2686420U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x1761 = INT16_MAX;
	volatile uint8_t x1762 = UINT8_MAX;
	uint16_t x1763 = UINT16_MAX;
	uint16_t x1764 = 1U;
	static int32_t t89 = 1216099;

	t89 = ((x1761*x1762)<<(x1763&x1764));

	if (t89 != 16711170) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1765 = UINT32_MAX;
	int8_t x1766 = INT8_MIN;
	int32_t x1767 = INT32_MIN;
	static uint16_t x1768 = UINT16_MAX;
	uint32_t t90 = 8329U;

	t90 = ((x1765*x1766)<<(x1767&x1768));

	if (t90 != 128U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1769 = INT8_MIN;
	volatile uint32_t x1770 = UINT32_MAX;
	int16_t x1771 = 0;
	int64_t x1772 = 19LL;
	uint32_t t91 = 24U;

	t91 = ((x1769*x1770)<<(x1771&x1772));

	if (t91 != 128U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1821 = -1;
	volatile int16_t x1822 = INT16_MIN;
	volatile uint32_t x1823 = 1U;
	static uint16_t x1824 = 3U;
	static volatile int32_t t92 = 1;

	t92 = ((x1821*x1822)<<(x1823&x1824));

	if (t92 != 65536) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x1833 = 0U;
	int64_t x1834 = INT64_MIN;
	static int8_t x1835 = 1;
	static int32_t x1836 = INT32_MIN;
	int64_t t93 = 9424779185224LL;

	t93 = ((x1833*x1834)<<(x1835&x1836));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1838 = 0;
	uint16_t x1839 = 100U;
	static int8_t x1840 = 17;
	volatile int32_t t94 = -1107;

	t94 = ((x1837*x1838)<<(x1839&x1840));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1841 = 0;
	uint32_t x1842 = 492059351U;
	volatile int8_t x1843 = 0;
	int16_t x1844 = INT16_MAX;
	volatile uint32_t t95 = 993U;

	t95 = ((x1841*x1842)<<(x1843&x1844));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1854 = 4856U;
	static int8_t x1855 = 1;
	int16_t x1856 = INT16_MIN;

	t96 = ((x1853*x1854)<<(x1855&x1856));

	if (t96 != 4294962440U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x1877 = 11U;
	uint16_t x1878 = UINT16_MAX;
	volatile int64_t x1879 = INT64_MIN;

	t97 = ((x1877*x1878)<<(x1879&x1880));

	if (t97 != 720885U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x1894 = INT32_MIN;
	int8_t x1895 = 2;
	int32_t x1896 = INT32_MIN;
	static uint64_t t98 = 97461800LLU;

	t98 = ((x1893*x1894)<<(x1895&x1896));

	if (t98 != 18439191350097215488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1901 = -1;
	int8_t x1902 = INT8_MIN;
	uint8_t x1903 = 5U;
	volatile int32_t t99 = 256167;

	t99 = ((x1901*x1902)<<(x1903&x1904));

	if (t99 != 4096) { NG(); } else { ; }
	
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

