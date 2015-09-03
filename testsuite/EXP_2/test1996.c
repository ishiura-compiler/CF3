#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x91 = 1U;
int32_t t3 = -971964653;
static int8_t x105 = 6;
uint8_t x108 = 7U;
static uint8_t x133 = 1U;
int16_t x135 = INT16_MIN;
volatile int64_t x157 = INT64_MAX;
int8_t x174 = INT8_MAX;
uint16_t x175 = 382U;
uint16_t x176 = 38U;
int16_t x273 = INT16_MIN;
int8_t x356 = 31;
static int16_t x377 = 29;
volatile int8_t x380 = 3;
static volatile int8_t x400 = 5;
volatile uint8_t x457 = 29U;
int32_t x459 = INT32_MAX;
int16_t x466 = INT16_MIN;
static uint8_t x468 = 5U;
uint64_t x485 = 1LLU;
int16_t x596 = 6;
static uint8_t x614 = 21U;
static int8_t x654 = INT8_MAX;
volatile int64_t x655 = INT64_MIN;
volatile int32_t t24 = -3124;
volatile uint16_t x733 = 30417U;
int64_t x734 = 303490LL;
uint64_t t26 = 193231741590571076LLU;
int16_t x802 = 7975;
int16_t x803 = 12401;
int8_t x827 = INT8_MIN;
int32_t x849 = 31926;
uint64_t x851 = 483578398180LLU;
volatile int8_t x1043 = -4;
int64_t t32 = -2686LL;
static int16_t x1169 = INT16_MIN;
int64_t x1171 = 4LL;
static int64_t t34 = -3985130325345464LL;
int32_t x1265 = -1;
uint8_t x1290 = 13U;
uint16_t x1292 = 29U;
uint64_t t36 = 77056213589571059LLU;
uint64_t x1345 = UINT64_MAX;
int16_t x1477 = INT16_MAX;
int8_t x1480 = 0;
volatile int32_t t39 = 1547822;
static uint8_t x1481 = 7U;
int32_t t41 = -349088328;
int16_t x1521 = INT16_MAX;
uint64_t x1523 = UINT64_MAX;
uint8_t x1524 = 7U;
static volatile int8_t x1571 = -4;
uint32_t t43 = 130877U;
int64_t x1591 = 116795LL;
int64_t x1653 = -1002241558697LL;
int64_t x1669 = INT64_MAX;
int64_t x1671 = -1LL;
int32_t t50 = 97725;
static uint16_t x1758 = 9843U;
int32_t t51 = 43450;
int16_t x1770 = INT16_MAX;
int16_t x1832 = 0;
uint8_t x1865 = UINT8_MAX;
uint32_t x1900 = 31U;
uint16_t x1954 = UINT16_MAX;
static volatile int32_t t56 = 70;
static volatile uint32_t x1970 = 14368166U;
volatile uint8_t x2072 = 1U;
int64_t x2113 = -1LL;
int16_t x2151 = -8;
uint16_t x2152 = 7U;
static int8_t x2273 = 4;
static uint64_t x2285 = UINT64_MAX;
int16_t x2286 = 1;
int8_t x2288 = 0;
volatile int16_t x2309 = 122;
static uint32_t x2347 = 77U;
uint8_t x2348 = 12U;
static int16_t x2561 = 67;
uint16_t x2562 = 7871U;
int32_t x2563 = -5018;
int32_t t70 = -7026952;
int8_t x2566 = -1;
volatile int32_t x2567 = -56884245;
uint8_t x2593 = UINT8_MAX;
int8_t x2594 = INT8_MIN;
int16_t x2595 = INT16_MAX;
int16_t x2596 = 25;
volatile int32_t t75 = -1;
int16_t x2851 = -1;
uint32_t t80 = 453844U;
uint8_t x2939 = UINT8_MAX;
uint32_t x2951 = UINT32_MAX;
volatile int16_t x2952 = 1;
uint8_t x2967 = UINT8_MAX;
int32_t t85 = 66348430;
uint64_t x3159 = 5LLU;
uint16_t x3163 = 359U;
int16_t x3241 = -1;
int8_t x3274 = INT8_MAX;
volatile int64_t t91 = 50244888LL;
uint8_t x3388 = 4U;
uint16_t x3443 = UINT16_MAX;
int32_t x3490 = INT32_MAX;


void f0(void) {
	static int64_t x25 = 32724159535587578LL;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MIN;
	static uint8_t x28 = 58U;
	volatile int64_t t0 = -75550393538LL;

	t0 = ((x25&(x26|x27))>>x28);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x33 = INT64_MAX;
	volatile uint16_t x34 = 12069U;
	int64_t x35 = INT64_MIN;
	uint16_t x36 = 6U;
	volatile int64_t t1 = 15974105594230LL;

	t1 = ((x33&(x34|x35))>>x36);

	if (t1 != 188LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x49 = UINT8_MAX;
	static int64_t x50 = INT64_MIN;
	int16_t x51 = 1;
	uint16_t x52 = 29U;
	int64_t t2 = 130145259559262770LL;

	t2 = ((x49&(x50|x51))>>x52);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x89 = UINT8_MAX;
	uint8_t x90 = UINT8_MAX;
	uint32_t x92 = 0U;

	t3 = ((x89&(x90|x91))>>x92);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x106 = INT64_MIN;
	static int16_t x107 = INT16_MIN;
	int64_t t4 = -141341LL;

	t4 = ((x105&(x106|x107))>>x108);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x134 = INT16_MIN;
	int32_t x136 = 1;
	static volatile int32_t t5 = 6893996;

	t5 = ((x133&(x134|x135))>>x136);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x153 = 3U;
	int32_t x154 = INT32_MAX;
	volatile uint8_t x155 = 1U;
	int16_t x156 = 1;
	int32_t t6 = -137;

	t6 = ((x153&(x154|x155))>>x156);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x158 = INT64_MAX;
	uint32_t x159 = 614203U;
	int8_t x160 = 37;
	volatile int64_t t7 = 9LL;

	t7 = ((x157&(x158|x159))>>x160);

	if (t7 != 67108863LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x173 = 54279931973653971LL;
	volatile int64_t t8 = 48LL;

	t8 = ((x173&(x174|x175))>>x176);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x178 = 287547580U;
	int8_t x179 = INT8_MAX;
	volatile int8_t x180 = 2;
	static volatile uint32_t t9 = 0U;

	t9 = ((x177&(x178|x179))>>x180);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = 3U;
	static volatile uint64_t t10 = 710LLU;

	t10 = ((x225&(x226|x227))>>x228);

	if (t10 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x241 = 688U;
	int16_t x242 = -1;
	uint8_t x243 = 0U;
	volatile int8_t x244 = 1;
	static volatile int32_t t11 = 3392542;

	t11 = ((x241&(x242|x243))>>x244);

	if (t11 != 344) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x274 = 8U;
	volatile int8_t x275 = INT8_MAX;
	static uint8_t x276 = 0U;
	int32_t t12 = -1575561;

	t12 = ((x273&(x274|x275))>>x276);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x353 = UINT64_MAX;
	static int32_t x354 = -619506;
	volatile uint16_t x355 = 245U;
	static volatile uint64_t t13 = 4098398670633711LLU;

	t13 = ((x353&(x354|x355))>>x356);

	if (t13 != 8589934591LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x378 = INT32_MAX;
	uint64_t x379 = UINT64_MAX;
	static uint64_t t14 = 7915LLU;

	t14 = ((x377&(x378|x379))>>x380);

	if (t14 != 3LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x397 = INT16_MIN;
	int32_t x398 = 7914670;
	int64_t x399 = 73757LL;
	volatile int64_t t15 = 8531381135504992LL;

	t15 = ((x397&(x398|x399))>>x400);

	if (t15 != 248832LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x441 = -553;
	uint64_t x442 = 480950496613090LLU;
	static int64_t x443 = INT64_MAX;
	uint8_t x444 = 1U;
	static uint64_t t16 = 5282682408657924LLU;

	t16 = ((x441&(x442|x443))>>x444);

	if (t16 != 4611686018427387627LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x458 = 23U;
	uint8_t x460 = 1U;
	int32_t t17 = -293;

	t17 = ((x457&(x458|x459))>>x460);

	if (t17 != 14) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x465 = 12U;
	int64_t x467 = INT64_MIN;
	int64_t t18 = -297LL;

	t18 = ((x465&(x466|x467))>>x468);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x486 = 107146350U;
	uint64_t x487 = 1560855680618LLU;
	static uint8_t x488 = 43U;
	uint64_t t19 = 80LLU;

	t19 = ((x485&(x486|x487))>>x488);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x581 = UINT8_MAX;
	volatile int64_t x582 = 0LL;
	int16_t x583 = INT16_MAX;
	volatile uint8_t x584 = 36U;
	int64_t t20 = 4138489209238137097LL;

	t20 = ((x581&(x582|x583))>>x584);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x593 = INT64_MAX;
	static int64_t x594 = INT64_MIN;
	static uint8_t x595 = 2U;
	int64_t t21 = 2648729912712LL;

	t21 = ((x593&(x594|x595))>>x596);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x613 = -1LL;
	uint8_t x615 = UINT8_MAX;
	int8_t x616 = 7;
	volatile int64_t t22 = 217512671177LL;

	t22 = ((x613&(x614|x615))>>x616);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x653 = INT32_MAX;
	static int16_t x656 = 0;
	int64_t t23 = 40084572945LL;

	t23 = ((x653&(x654|x655))>>x656);

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x673 = UINT16_MAX;
	volatile uint16_t x674 = 2860U;
	int32_t x675 = INT32_MIN;
	static uint8_t x676 = 5U;

	t24 = ((x673&(x674|x675))>>x676);

	if (t24 != 89) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x735 = 525;
	uint8_t x736 = 3U;
	int64_t t25 = 2006821996206LL;

	t25 = ((x733&(x734|x735))>>x736);

	if (t25 != 1104LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x749 = INT32_MIN;
	int8_t x750 = INT8_MIN;
	uint64_t x751 = UINT64_MAX;
	int64_t x752 = 3LL;

	t26 = ((x749&(x750|x751))>>x752);

	if (t26 != 2305843008945258496LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x801 = INT8_MAX;
	uint16_t x804 = 1U;
	int32_t t27 = 7070;

	t27 = ((x801&(x802|x803))>>x804);

	if (t27 != 59) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x825 = 87136U;
	int16_t x826 = INT16_MIN;
	uint16_t x828 = 0U;
	uint32_t t28 = 4329U;

	t28 = ((x825&(x826|x827))>>x828);

	if (t28 != 87040U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x850 = INT32_MIN;
	volatile uint32_t x852 = 9U;
	uint64_t t29 = 706911329LLU;

	t29 = ((x849&(x850|x851))>>x852);

	if (t29 != 34LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x973 = 7673628608011396886LLU;
	volatile int32_t x974 = INT32_MIN;
	uint16_t x975 = 136U;
	static uint8_t x976 = 54U;
	volatile uint64_t t30 = 55LLU;

	t30 = ((x973&(x974|x975))>>x976);

	if (t30 != 425LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1041 = UINT64_MAX;
	int32_t x1042 = INT32_MIN;
	static volatile int8_t x1044 = 1;
	volatile uint64_t t31 = 124404187LLU;

	t31 = ((x1041&(x1042|x1043))>>x1044);

	if (t31 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x1081 = 5U;
	uint8_t x1082 = UINT8_MAX;
	volatile int64_t x1083 = 71958529LL;
	uint32_t x1084 = 7U;

	t32 = ((x1081&(x1082|x1083))>>x1084);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1093 = 744878474LLU;
	int8_t x1094 = INT8_MIN;
	static uint16_t x1095 = 851U;
	volatile uint8_t x1096 = 1U;
	static uint64_t t33 = 121866574LLU;

	t33 = ((x1093&(x1094|x1095))>>x1096);

	if (t33 != 372439233LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1170 = UINT32_MAX;
	uint8_t x1172 = 54U;

	t34 = ((x1169&(x1170|x1171))>>x1172);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1266 = 3U;
	uint8_t x1267 = UINT8_MAX;
	int8_t x1268 = 31;
	volatile int32_t t35 = -1;

	t35 = ((x1265&(x1266|x1267))>>x1268);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1289 = 539406119762682321LLU;
	int64_t x1291 = -45913544974LL;

	t36 = ((x1289&(x1290|x1291))>>x1292);

	if (t36 != 1004722176LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1346 = -1;
	int8_t x1347 = -44;
	static volatile int32_t x1348 = 19;
	uint64_t t37 = 1LLU;

	t37 = ((x1345&(x1346|x1347))>>x1348);

	if (t37 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1401 = 78U;
	int16_t x1402 = INT16_MIN;
	volatile int16_t x1403 = INT16_MAX;
	static uint8_t x1404 = 1U;
	static int32_t t38 = -531018;

	t38 = ((x1401&(x1402|x1403))>>x1404);

	if (t38 != 39) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1478 = 2;
	uint16_t x1479 = UINT16_MAX;

	t39 = ((x1477&(x1478|x1479))>>x1480);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1482 = -175;
	int16_t x1483 = INT16_MAX;
	static volatile int16_t x1484 = 0;
	static int32_t t40 = 20;

	t40 = ((x1481&(x1482|x1483))>>x1484);

	if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1509 = UINT16_MAX;
	int32_t x1510 = -1;
	int8_t x1511 = -1;
	static uint16_t x1512 = 1U;

	t41 = ((x1509&(x1510|x1511))>>x1512);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1522 = -1;
	uint64_t t42 = 3356283646199709LLU;

	t42 = ((x1521&(x1522|x1523))>>x1524);

	if (t42 != 255LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1569 = -1;
	uint32_t x1570 = 253465016U;
	int8_t x1572 = 0;

	t43 = ((x1569&(x1570|x1571))>>x1572);

	if (t43 != 4294967292U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1589 = -1;
	static uint8_t x1590 = UINT8_MAX;
	int8_t x1592 = 11;
	static volatile int64_t t44 = 0LL;

	t44 = ((x1589&(x1590|x1591))>>x1592);

	if (t44 != 57LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1637 = UINT8_MAX;
	int16_t x1638 = 1808;
	int16_t x1639 = 40;
	static int16_t x1640 = 0;
	int32_t t45 = 255;

	t45 = ((x1637&(x1638|x1639))>>x1640);

	if (t45 != 56) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x1654 = 88U;
	static volatile uint16_t x1655 = UINT16_MAX;
	uint64_t x1656 = 0LLU;
	int64_t t46 = 1474451880075226859LL;

	t46 = ((x1653&(x1654|x1655))>>x1656);

	if (t46 != 30551LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1665 = UINT8_MAX;
	int8_t x1666 = 1;
	uint64_t x1667 = 1027800878175LLU;
	static int8_t x1668 = 41;
	static uint64_t t47 = 4890883116851LLU;

	t47 = ((x1665&(x1666|x1667))>>x1668);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1670 = -24406;
	volatile int8_t x1672 = 19;
	int64_t t48 = -1LL;

	t48 = ((x1669&(x1670|x1671))>>x1672);

	if (t48 != 17592186044415LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x1677 = 22U;
	static int64_t x1678 = 2160LL;
	int64_t x1679 = 355LL;
	int8_t x1680 = 0;
	volatile int64_t t49 = 776836031LL;

	t49 = ((x1677&(x1678|x1679))>>x1680);

	if (t49 != 18LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1693 = 4U;
	int8_t x1694 = 1;
	volatile int8_t x1695 = -2;
	int32_t x1696 = 5;

	t50 = ((x1693&(x1694|x1695))>>x1696);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1757 = 2;
	int16_t x1759 = -1;
	uint8_t x1760 = 0U;

	t51 = ((x1757&(x1758|x1759))>>x1760);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1769 = -1;
	volatile int32_t x1771 = 0;
	uint8_t x1772 = 19U;
	volatile int32_t t52 = 8635;

	t52 = ((x1769&(x1770|x1771))>>x1772);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1829 = 3028694LLU;
	int64_t x1830 = 471LL;
	static volatile uint32_t x1831 = 83617U;
	volatile uint64_t t53 = 1012256687659785421LLU;

	t53 = ((x1829&(x1830|x1831))>>x1832);

	if (t53 != 1750LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1866 = INT8_MAX;
	int16_t x1867 = INT16_MIN;
	uint32_t x1868 = 1U;
	volatile int32_t t54 = 292989;

	t54 = ((x1865&(x1866|x1867))>>x1868);

	if (t54 != 63) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x1897 = UINT16_MAX;
	static int64_t x1898 = -11984375135946LL;
	int16_t x1899 = -1;
	static volatile int64_t t55 = -3338959204881700863LL;

	t55 = ((x1897&(x1898|x1899))>>x1900);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1953 = UINT8_MAX;
	int8_t x1955 = INT8_MAX;
	volatile uint8_t x1956 = 3U;

	t56 = ((x1953&(x1954|x1955))>>x1956);

	if (t56 != 31) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x1969 = INT32_MIN;
	volatile int32_t x1971 = INT32_MIN;
	volatile uint8_t x1972 = 10U;
	uint32_t t57 = 140U;

	t57 = ((x1969&(x1970|x1971))>>x1972);

	if (t57 != 2097152U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2037 = -9;
	int64_t x2038 = 16286403LL;
	uint64_t x2039 = 191LLU;
	uint8_t x2040 = 1U;
	static volatile uint64_t t58 = 7854981345209LLU;

	t58 = ((x2037&(x2038|x2039))>>x2040);

	if (t58 != 8143227LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x2069 = 611U;
	int32_t x2070 = 3205435;
	int32_t x2071 = INT32_MAX;
	volatile int32_t t59 = 2854000;

	t59 = ((x2069&(x2070|x2071))>>x2072);

	if (t59 != 305) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2073 = INT64_MAX;
	uint16_t x2074 = 6U;
	int8_t x2075 = -1;
	volatile uint16_t x2076 = 56U;
	int64_t t60 = -234525548288LL;

	t60 = ((x2073&(x2074|x2075))>>x2076);

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2093 = 11964623935LL;
	int64_t x2094 = INT64_MIN;
	static int8_t x2095 = -19;
	int8_t x2096 = 3;
	volatile int64_t t61 = 6682134314LL;

	t61 = ((x2093&(x2094|x2095))>>x2096);

	if (t61 != 1495577989LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2114 = INT16_MIN;
	uint32_t x2115 = UINT32_MAX;
	static int8_t x2116 = 1;
	volatile int64_t t62 = -112077LL;

	t62 = ((x2113&(x2114|x2115))>>x2116);

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2149 = INT16_MIN;
	uint64_t x2150 = 4867944LLU;
	uint64_t t63 = 833891LLU;

	t63 = ((x2149&(x2150|x2151))>>x2152);

	if (t63 != 144115188075855616LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2274 = INT8_MIN;
	static int16_t x2275 = -6;
	volatile int64_t x2276 = 27LL;
	int32_t t64 = 1137556;

	t64 = ((x2273&(x2274|x2275))>>x2276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2287 = 1U;
	volatile uint64_t t65 = 84058620589439193LLU;

	t65 = ((x2285&(x2286|x2287))>>x2288);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x2310 = -70;
	int8_t x2311 = -1;
	static int8_t x2312 = 29;
	volatile int32_t t66 = 14;

	t66 = ((x2309&(x2310|x2311))>>x2312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2321 = 7U;
	int16_t x2322 = -1;
	volatile uint8_t x2323 = 60U;
	int8_t x2324 = 0;
	int32_t t67 = -120;

	t67 = ((x2321&(x2322|x2323))>>x2324);

	if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2345 = UINT8_MAX;
	static int8_t x2346 = INT8_MIN;
	static uint32_t t68 = 0U;

	t68 = ((x2345&(x2346|x2347))>>x2348);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2541 = 12115784323487LLU;
	uint32_t x2542 = UINT32_MAX;
	static int16_t x2543 = INT16_MAX;
	int32_t x2544 = 1;
	volatile uint64_t t69 = 193LLU;

	t69 = ((x2541&(x2542|x2543))>>x2544);

	if (t69 != 1988274383LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2564 = 0LLU;

	t70 = ((x2561&(x2562|x2563))>>x2564);

	if (t70 != 67) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2565 = UINT16_MAX;
	static volatile int16_t x2568 = 26;
	volatile int32_t t71 = 362;

	t71 = ((x2565&(x2566|x2567))>>x2568);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2585 = -5;
	uint32_t x2586 = 10766253U;
	static int16_t x2587 = -15649;
	static uint64_t x2588 = 0LLU;
	volatile uint32_t t72 = 196U;

	t72 = ((x2585&(x2586|x2587))>>x2588);

	if (t72 != 4294952955U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t t73 = -1191;

	t73 = ((x2593&(x2594|x2595))>>x2596);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x2601 = 328572497;
	volatile int32_t x2602 = INT32_MIN;
	static int16_t x2603 = 220;
	int64_t x2604 = 3LL;
	volatile int32_t t74 = -313598;

	t74 = ((x2601&(x2602|x2603))>>x2604);

	if (t74 != 10) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2701 = -1;
	uint16_t x2702 = 44U;
	static uint8_t x2703 = 0U;
	int16_t x2704 = 2;

	t75 = ((x2701&(x2702|x2703))>>x2704);

	if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2769 = 3LLU;
	uint64_t x2770 = 3864855566658945955LLU;
	static uint32_t x2771 = 124U;
	int32_t x2772 = 4;
	uint64_t t76 = 139461968202244438LLU;

	t76 = ((x2769&(x2770|x2771))>>x2772);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2817 = 453U;
	static int64_t x2818 = -84078613509LL;
	volatile int16_t x2819 = -1;
	uint8_t x2820 = 17U;
	volatile int64_t t77 = -27660590LL;

	t77 = ((x2817&(x2818|x2819))>>x2820);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2845 = INT8_MIN;
	uint64_t x2846 = 0LLU;
	int32_t x2847 = INT32_MIN;
	int8_t x2848 = 12;
	volatile uint64_t t78 = 134836299LLU;

	t78 = ((x2845&(x2846|x2847))>>x2848);

	if (t78 != 4503599626846208LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2849 = 44LLU;
	int32_t x2850 = INT32_MIN;
	int8_t x2852 = 23;
	static uint64_t t79 = 2323415578LLU;

	t79 = ((x2849&(x2850|x2851))>>x2852);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2853 = 128U;
	volatile uint32_t x2854 = 16U;
	int32_t x2855 = INT32_MIN;
	volatile uint16_t x2856 = 0U;

	t80 = ((x2853&(x2854|x2855))>>x2856);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2889 = 0;
	static int16_t x2890 = INT16_MIN;
	volatile uint32_t x2891 = 1544932U;
	int8_t x2892 = 1;
	static volatile uint32_t t81 = 1879985U;

	t81 = ((x2889&(x2890|x2891))>>x2892);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2937 = UINT8_MAX;
	int16_t x2938 = INT16_MIN;
	uint16_t x2940 = 14U;
	int32_t t82 = 894;

	t82 = ((x2937&(x2938|x2939))>>x2940);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2949 = -1LL;
	uint32_t x2950 = 63U;
	volatile int64_t t83 = 33LL;

	t83 = ((x2949&(x2950|x2951))>>x2952);

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2965 = 3U;
	static uint8_t x2966 = 59U;
	volatile int8_t x2968 = 6;
	int32_t t84 = -7834;

	t84 = ((x2965&(x2966|x2967))>>x2968);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2989 = INT32_MIN;
	volatile int16_t x2990 = 9046;
	int32_t x2991 = 15889770;
	volatile int8_t x2992 = 26;

	t85 = ((x2989&(x2990|x2991))>>x2992);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3133 = 408693449983LL;
	static int16_t x3134 = INT16_MIN;
	int32_t x3135 = -1;
	volatile uint64_t x3136 = 31LLU;
	volatile int64_t t86 = 1LL;

	t86 = ((x3133&(x3134|x3135))>>x3136);

	if (t86 != 190LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3157 = -1;
	static uint8_t x3158 = 14U;
	int8_t x3160 = 1;
	volatile uint64_t t87 = 1913LLU;

	t87 = ((x3157&(x3158|x3159))>>x3160);

	if (t87 != 7LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x3161 = 15LLU;
	int32_t x3162 = INT32_MAX;
	static uint32_t x3164 = 23U;
	uint64_t t88 = 455300LLU;

	t88 = ((x3161&(x3162|x3163))>>x3164);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3242 = UINT32_MAX;
	uint32_t x3243 = UINT32_MAX;
	uint32_t x3244 = 18U;
	volatile uint32_t t89 = 46096U;

	t89 = ((x3241&(x3242|x3243))>>x3244);

	if (t89 != 16383U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3269 = UINT8_MAX;
	int32_t x3270 = -34447;
	uint16_t x3271 = 824U;
	uint8_t x3272 = 1U;
	volatile int32_t t90 = 1;

	t90 = ((x3269&(x3270|x3271))>>x3272);

	if (t90 != 60) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3273 = 7;
	static volatile int64_t x3275 = INT64_MIN;
	uint8_t x3276 = 13U;

	t91 = ((x3273&(x3274|x3275))>>x3276);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3305 = INT32_MAX;
	uint32_t x3306 = 10388569U;
	int64_t x3307 = INT64_MAX;
	uint16_t x3308 = 4U;
	volatile int64_t t92 = -2982420516974236LL;

	t92 = ((x3305&(x3306|x3307))>>x3308);

	if (t92 != 134217727LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3313 = INT32_MIN;
	static uint64_t x3314 = 786336273792885823LLU;
	static int16_t x3315 = INT16_MIN;
	uint8_t x3316 = 37U;
	static volatile uint64_t t93 = 25305761LLU;

	t93 = ((x3313&(x3314|x3315))>>x3316);

	if (t93 != 134217727LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x3329 = 418U;
	volatile int32_t x3330 = -1;
	int32_t x3331 = INT32_MAX;
	volatile uint16_t x3332 = 14U;
	static uint32_t t94 = 5U;

	t94 = ((x3329&(x3330|x3331))>>x3332);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3385 = 5293;
	uint16_t x3386 = 549U;
	int8_t x3387 = -1;
	int32_t t95 = 1198798;

	t95 = ((x3385&(x3386|x3387))>>x3388);

	if (t95 != 330) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x3425 = 1U;
	volatile uint64_t x3426 = 13LLU;
	int16_t x3427 = 2754;
	static uint32_t x3428 = 9U;
	volatile uint64_t t96 = 14LLU;

	t96 = ((x3425&(x3426|x3427))>>x3428);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x3441 = INT8_MAX;
	int32_t x3442 = INT32_MIN;
	volatile uint64_t x3444 = 1LLU;
	int32_t t97 = 186642882;

	t97 = ((x3441&(x3442|x3443))>>x3444);

	if (t97 != 63) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3445 = 92U;
	int16_t x3446 = 403;
	uint32_t x3447 = 953904027U;
	uint16_t x3448 = 0U;
	volatile uint32_t t98 = 3U;

	t98 = ((x3445&(x3446|x3447))>>x3448);

	if (t98 != 24U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x3489 = 127910516LL;
	volatile uint64_t x3491 = 121LLU;
	int16_t x3492 = 44;
	volatile uint64_t t99 = 16499206529458LLU;

	t99 = ((x3489&(x3490|x3491))>>x3492);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

