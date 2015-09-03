#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x212 = 511098732LLU;
static int16_t x277 = INT16_MAX;
int32_t t3 = 22470;
static volatile uint64_t x297 = 9652LLU;
int8_t x310 = 3;
uint32_t x311 = 434192881U;
volatile uint8_t x318 = 3U;
int32_t x319 = -16772031;
uint32_t x384 = UINT32_MAX;
int32_t t8 = 1790772;
int64_t x457 = 16867300333039LL;
uint32_t x525 = 3192U;
int16_t x530 = 5;
int16_t x531 = INT16_MIN;
static int64_t x532 = INT64_MIN;
static volatile int32_t t12 = -1916;
volatile int32_t t13 = 45642656;
int32_t x597 = INT32_MAX;
uint16_t x600 = 4U;
static uint64_t x681 = UINT64_MAX;
static volatile uint32_t t19 = 9U;
int8_t x766 = INT8_MAX;
int8_t x786 = 0;
static int16_t x787 = INT16_MIN;
volatile uint64_t x893 = UINT64_MAX;
volatile uint64_t t25 = 283960052013401LLU;
static uint16_t x898 = 3U;
static uint8_t x1091 = 90U;
volatile uint32_t t30 = UINT32_MAX;
uint16_t x1117 = 28708U;
uint8_t x1120 = 1U;
uint8_t x1133 = UINT8_MAX;
int64_t x1136 = INT64_MIN;
static int32_t t32 = -4977342;
int8_t x1230 = 0;
uint32_t x1232 = UINT32_MAX;
uint8_t x1274 = 0U;
volatile uint8_t x1275 = 0U;
static int16_t x1454 = INT16_MIN;
static uint32_t t38 = UINT32_MAX;
static int32_t t39 = INT32_MAX;
volatile int16_t x1504 = 94;
int16_t x1569 = INT16_MAX;
int32_t x1571 = INT32_MIN;
int16_t x1649 = 0;
int16_t x1651 = INT16_MAX;
volatile int32_t t44 = 2;
int16_t x1721 = 533;
static int64_t x1722 = INT64_MIN;
uint32_t x1724 = 51U;
int32_t x1738 = INT32_MIN;
volatile int32_t t47 = -15092532;
volatile int16_t x1766 = 6;
uint64_t x1778 = UINT64_MAX;
uint32_t x1779 = 3U;
int32_t x1794 = INT32_MAX;
int8_t x1796 = 21;
volatile uint64_t x1813 = 69LLU;
volatile int64_t x1814 = 187588486789LL;
static uint16_t x1819 = 5U;
int16_t x1862 = 363;
uint32_t x1909 = UINT32_MAX;
uint32_t t56 = UINT32_MAX;
uint64_t x1933 = UINT64_MAX;
uint16_t x1934 = 14550U;
static int32_t x1935 = INT32_MIN;
static volatile uint64_t t58 = UINT64_MAX;
uint16_t x1993 = UINT16_MAX;
static int16_t x1994 = 1;
int8_t x1998 = 6;
int64_t x2015 = 1LL;
uint64_t t64 = UINT64_MAX;
uint32_t x2037 = 1661713U;
int8_t x2039 = INT8_MIN;
int8_t x2102 = 5;
int8_t x2154 = 1;
static uint8_t x2173 = 7U;
uint32_t x2176 = UINT32_MAX;
int8_t x2214 = 24;
int32_t x2247 = INT32_MIN;
uint16_t x2249 = 210U;
static uint64_t x2257 = 33LLU;
volatile uint8_t x2497 = 1U;
static volatile uint8_t x2498 = 1U;
static uint32_t x2561 = 810U;
uint8_t x2569 = UINT8_MAX;
uint8_t x2570 = 13U;
static volatile int32_t t87 = 22460037;
volatile uint8_t x2710 = 2U;
static volatile int32_t t88 = -25;
static int16_t x2723 = INT16_MIN;
uint8_t x2830 = 0U;
volatile int16_t x2831 = -1;
int32_t x2926 = INT32_MIN;
uint8_t x2995 = 1U;
uint32_t t95 = 322652U;
volatile int32_t x3086 = 15;
uint64_t x3093 = 400620LLU;
int32_t x3096 = INT32_MAX;
uint16_t x3111 = 1832U;
uint64_t x3112 = 242079796773LLU;
int8_t x3131 = -1;
uint32_t x3132 = 159U;
static uint32_t t99 = 1U;


void f0(void) {
	uint64_t x45 = 1176LLU;
	uint8_t x46 = 2U;
	int8_t x47 = -1;
	uint32_t x48 = UINT32_MAX;
	uint64_t t0 = 36067219LLU;

	t0 = (x45<<(x46&(x47|x48)));

	if (t0 != 4704LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x133 = UINT32_MAX;
	static uint8_t x134 = 15U;
	static int64_t x135 = -1LL;
	int16_t x136 = -1;
	uint32_t t1 = 69212935U;

	t1 = (x133<<(x134&(x135|x136)));

	if (t1 != 4294934528U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x209 = UINT8_MAX;
	volatile uint8_t x210 = 14U;
	volatile int8_t x211 = INT8_MAX;
	volatile int32_t t2 = 109;

	t2 = (x209<<(x210&(x211|x212)));

	if (t2 != 4177920) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x278 = 5U;
	int32_t x279 = -1;
	uint32_t x280 = UINT32_MAX;

	t3 = (x277<<(x278&(x279|x280)));

	if (t3 != 1048544) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x298 = 52;
	int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MIN;
	uint64_t t4 = 50747648087702LLU;

	t4 = (x297<<(x298&(x299|x300)));

	if (t4 != 9652LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x309 = INT16_MAX;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t5 = 28;

	t5 = (x309<<(x310&(x311|x312)));

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x320 = -1;
	volatile int32_t t6 = 1061;

	t6 = (x317<<(x318&(x319|x320)));

	if (t6 != 2040) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x381 = 1;
	uint16_t x382 = 9U;
	static uint8_t x383 = 42U;
	int32_t t7 = -163418241;

	t7 = (x381<<(x382&(x383|x384)));

	if (t7 != 512) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x405 = UINT16_MAX;
	uint16_t x406 = 9U;
	static int16_t x407 = INT16_MIN;
	static int16_t x408 = -1;

	t8 = (x405<<(x406&(x407|x408)));

	if (t8 != 33553920) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x413 = INT16_MAX;
	int8_t x414 = INT8_MAX;
	static int32_t x415 = INT32_MIN;
	int32_t x416 = INT32_MIN;
	static volatile int32_t t9 = -1085329;

	t9 = (x413<<(x414&(x415|x416)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x458 = 0U;
	int8_t x459 = INT8_MAX;
	volatile int64_t x460 = INT64_MIN;
	int64_t t10 = -425012209308260130LL;

	t10 = (x457<<(x458&(x459|x460)));

	if (t10 != 16867300333039LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x526 = UINT8_MAX;
	int64_t x527 = 3480909274079866890LL;
	int64_t x528 = INT64_MIN;
	volatile uint32_t t11 = 3365U;

	t11 = (x525<<(x526&(x527|x528)));

	if (t11 != 3268608U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x529 = 46U;

	t12 = (x529<<(x530&(x531|x532)));

	if (t12 != 46) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x573 = UINT8_MAX;
	static int64_t x574 = INT64_MIN;
	int32_t x575 = INT32_MAX;
	volatile uint32_t x576 = 1U;

	t13 = (x573<<(x574&(x575|x576)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x598 = INT16_MIN;
	int8_t x599 = 30;
	int32_t t14 = INT32_MAX;

	t14 = (x597<<(x598&(x599|x600)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x641 = 18LLU;
	uint16_t x642 = 136U;
	uint64_t x643 = 13LLU;
	int64_t x644 = INT64_MIN;
	volatile uint64_t t15 = 371200699LLU;

	t15 = (x641<<(x642&(x643|x644)));

	if (t15 != 4608LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x649 = INT32_MAX;
	static int64_t x650 = INT64_MIN;
	uint16_t x651 = 33U;
	uint8_t x652 = UINT8_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x649<<(x650&(x651|x652)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x682 = 1;
	int8_t x683 = -1;
	int32_t x684 = INT32_MAX;
	volatile uint64_t t17 = 115613LLU;

	t17 = (x681<<(x682&(x683|x684)));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x685 = 8271U;
	int16_t x686 = 2;
	volatile int16_t x687 = INT16_MAX;
	int32_t x688 = -24686;
	int32_t t18 = -26;

	t18 = (x685<<(x686&(x687|x688)));

	if (t18 != 33084) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x689 = 129U;
	volatile uint32_t x690 = 5449291U;
	int32_t x691 = INT32_MIN;
	int64_t x692 = INT64_MIN;

	t19 = (x689<<(x690&(x691|x692)));

	if (t19 != 129U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x701 = UINT32_MAX;
	uint8_t x702 = 17U;
	int8_t x703 = -28;
	int8_t x704 = INT8_MIN;
	static volatile uint32_t t20 = UINT32_MAX;

	t20 = (x701<<(x702&(x703|x704)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x709 = 0U;
	static uint16_t x710 = 13U;
	int16_t x711 = INT16_MAX;
	uint32_t x712 = 240701U;
	static volatile int32_t t21 = 74;

	t21 = (x709<<(x710&(x711|x712)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x753 = 1U;
	volatile int16_t x754 = 8;
	volatile int8_t x755 = -1;
	volatile int8_t x756 = INT8_MAX;
	volatile int32_t t22 = 28;

	t22 = (x753<<(x754&(x755|x756)));

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x765 = 5414176984251LLU;
	int32_t x767 = INT32_MIN;
	uint16_t x768 = 17U;
	static uint64_t t23 = 161LLU;

	t23 = (x765<<(x766&(x767|x768)));

	if (t23 != 709647005679747072LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x785 = 13U;
	volatile uint32_t x788 = UINT32_MAX;
	volatile int32_t t24 = 817174713;

	t24 = (x785<<(x786&(x787|x788)));

	if (t24 != 13) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x894 = 16;
	int32_t x895 = -1;
	static int32_t x896 = -1791697;

	t25 = (x893<<(x894&(x895|x896)));

	if (t25 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x897 = INT16_MAX;
	uint8_t x899 = 13U;
	int8_t x900 = INT8_MAX;
	int32_t t26 = 6514;

	t26 = (x897<<(x898&(x899|x900)));

	if (t26 != 262136) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x901 = 1U;
	int16_t x902 = 0;
	uint16_t x903 = 24138U;
	int64_t x904 = -1LL;
	static int32_t t27 = 251691;

	t27 = (x901<<(x902&(x903|x904)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x913 = 1409LLU;
	int64_t x914 = INT64_MIN;
	int16_t x915 = 9;
	volatile uint16_t x916 = 99U;
	uint64_t t28 = 3678585832LLU;

	t28 = (x913<<(x914&(x915|x916)));

	if (t28 != 1409LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1049 = 1006;
	static int16_t x1050 = 0;
	int8_t x1051 = -1;
	static int32_t x1052 = -1;
	int32_t t29 = 102316517;

	t29 = (x1049<<(x1050&(x1051|x1052)));

	if (t29 != 1006) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1089 = UINT32_MAX;
	int64_t x1090 = INT64_MIN;
	static int16_t x1092 = INT16_MAX;

	t30 = (x1089<<(x1090&(x1091|x1092)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1118 = INT64_MIN;
	uint16_t x1119 = 0U;
	static volatile int32_t t31 = -24;

	t31 = (x1117<<(x1118&(x1119|x1120)));

	if (t31 != 28708) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1134 = INT32_MAX;
	int32_t x1135 = INT32_MIN;

	t32 = (x1133<<(x1134&(x1135|x1136)));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1229 = 1U;
	volatile int8_t x1231 = -1;
	static int32_t t33 = 7;

	t33 = (x1229<<(x1230&(x1231|x1232)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x1273 = UINT16_MAX;
	static int32_t x1276 = 1;
	int32_t t34 = 1976;

	t34 = (x1273<<(x1274&(x1275|x1276)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1341 = 1U;
	volatile uint8_t x1342 = 2U;
	uint64_t x1343 = 76910648LLU;
	uint8_t x1344 = 0U;
	static volatile int32_t t35 = -70735667;

	t35 = (x1341<<(x1342&(x1343|x1344)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1377 = 31U;
	uint32_t x1378 = 1U;
	int64_t x1379 = -111086356489LL;
	int16_t x1380 = -1;
	volatile int32_t t36 = -104160;

	t36 = (x1377<<(x1378&(x1379|x1380)));

	if (t36 != 62) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1413 = 1;
	static uint32_t x1414 = 87U;
	uint32_t x1415 = 34U;
	int8_t x1416 = INT8_MIN;
	int32_t t37 = 1494;

	t37 = (x1413<<(x1414&(x1415|x1416)));

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1453 = UINT32_MAX;
	int8_t x1455 = 0;
	int8_t x1456 = INT8_MAX;

	t38 = (x1453<<(x1454&(x1455|x1456)));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1461 = INT32_MAX;
	volatile int32_t x1462 = INT32_MIN;
	static uint16_t x1463 = UINT16_MAX;
	uint16_t x1464 = 75U;

	t39 = (x1461<<(x1462&(x1463|x1464)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1497 = INT8_MAX;
	uint16_t x1498 = 6U;
	int8_t x1499 = INT8_MIN;
	int64_t x1500 = -1LL;
	volatile int32_t t40 = -243110849;

	t40 = (x1497<<(x1498&(x1499|x1500)));

	if (t40 != 8128) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1501 = UINT64_MAX;
	static volatile int16_t x1502 = INT16_MIN;
	volatile int16_t x1503 = INT16_MAX;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = (x1501<<(x1502&(x1503|x1504)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1537 = 1;
	uint32_t x1538 = 55U;
	uint64_t x1539 = 0LLU;
	uint8_t x1540 = 13U;
	volatile int32_t t42 = 7736;

	t42 = (x1537<<(x1538&(x1539|x1540)));

	if (t42 != 32) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1570 = 305U;
	static int32_t x1572 = 0;
	int32_t t43 = 14102;

	t43 = (x1569<<(x1570&(x1571|x1572)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x1650 = 20U;
	volatile int32_t x1652 = INT32_MIN;

	t44 = (x1649<<(x1650&(x1651|x1652)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1681 = 11090;
	int64_t x1682 = INT64_MIN;
	int32_t x1683 = INT32_MAX;
	uint16_t x1684 = 109U;
	volatile int32_t t45 = 27;

	t45 = (x1681<<(x1682&(x1683|x1684)));

	if (t45 != 11090) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x1723 = 72;
	int32_t t46 = -123;

	t46 = (x1721<<(x1722&(x1723|x1724)));

	if (t46 != 533) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1737 = 1;
	int32_t x1739 = 51;
	uint16_t x1740 = 2U;

	t47 = (x1737<<(x1738&(x1739|x1740)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1765 = 461U;
	volatile int16_t x1767 = 681;
	int16_t x1768 = INT16_MIN;
	volatile int32_t t48 = -384823;

	t48 = (x1765<<(x1766&(x1767|x1768)));

	if (t48 != 461) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1777 = 3769;
	uint8_t x1780 = 9U;
	volatile int32_t t49 = 8490235;

	t49 = (x1777<<(x1778&(x1779|x1780)));

	if (t49 != 7718912) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1793 = 5U;
	static volatile int64_t x1795 = INT64_MIN;
	static volatile int32_t t50 = 326498910;

	t50 = (x1793<<(x1794&(x1795|x1796)));

	if (t50 != 10485760) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1815 = 17U;
	int8_t x1816 = 57;
	volatile uint64_t t51 = 264173574536LLU;

	t51 = (x1813<<(x1814&(x1815|x1816)));

	if (t51 != 138LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1817 = 16096U;
	int64_t x1818 = 118572763701LL;
	int64_t x1820 = INT64_MIN;
	int32_t t52 = -270536;

	t52 = (x1817<<(x1818&(x1819|x1820)));

	if (t52 != 515072) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1837 = 6;
	int16_t x1838 = 0;
	uint32_t x1839 = 82249688U;
	static int32_t x1840 = INT32_MAX;
	volatile int32_t t53 = 1751;

	t53 = (x1837<<(x1838&(x1839|x1840)));

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1861 = INT8_MAX;
	static int16_t x1863 = INT16_MIN;
	int32_t x1864 = 5;
	static int32_t t54 = 81;

	t54 = (x1861<<(x1862&(x1863|x1864)));

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1889 = 53U;
	uint8_t x1890 = 8U;
	int32_t x1891 = INT32_MAX;
	int32_t x1892 = INT32_MIN;
	volatile int32_t t55 = 0;

	t55 = (x1889<<(x1890&(x1891|x1892)));

	if (t55 != 13568) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1910 = INT64_MIN;
	uint16_t x1911 = 165U;
	static uint32_t x1912 = 13U;

	t56 = (x1909<<(x1910&(x1911|x1912)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1921 = 34835921LLU;
	int16_t x1922 = INT16_MIN;
	uint16_t x1923 = 1223U;
	uint32_t x1924 = 1894U;
	uint64_t t57 = 6435628650517LLU;

	t57 = (x1921<<(x1922&(x1923|x1924)));

	if (t57 != 34835921LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1936 = INT32_MIN;

	t58 = (x1933<<(x1934&(x1935|x1936)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1953 = 10U;
	uint32_t x1954 = 3U;
	int16_t x1955 = INT16_MAX;
	int8_t x1956 = -1;
	static int32_t t59 = 3002;

	t59 = (x1953<<(x1954&(x1955|x1956)));

	if (t59 != 80) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1977 = 42U;
	uint16_t x1978 = 2447U;
	int16_t x1979 = 1;
	volatile uint8_t x1980 = 15U;
	int32_t t60 = -1873235;

	t60 = (x1977<<(x1978&(x1979|x1980)));

	if (t60 != 1376256) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1995 = 182U;
	int16_t x1996 = INT16_MAX;
	volatile int32_t t61 = 1;

	t61 = (x1993<<(x1994&(x1995|x1996)));

	if (t61 != 131070) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1997 = 896802LLU;
	int16_t x1999 = INT16_MIN;
	int8_t x2000 = INT8_MIN;
	uint64_t t62 = 11491179300881365LLU;

	t62 = (x1997<<(x1998&(x1999|x2000)));

	if (t62 != 896802LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2013 = 30737;
	uint8_t x2014 = 3U;
	int16_t x2016 = INT16_MIN;
	volatile int32_t t63 = -24511854;

	t63 = (x2013<<(x2014&(x2015|x2016)));

	if (t63 != 61474) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x2029 = UINT64_MAX;
	uint64_t x2030 = 184LLU;
	int32_t x2031 = INT32_MIN;
	volatile int32_t x2032 = 3;

	t64 = (x2029<<(x2030&(x2031|x2032)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2038 = 7U;
	uint32_t x2040 = UINT32_MAX;
	volatile uint32_t t65 = 57U;

	t65 = (x2037<<(x2038&(x2039|x2040)));

	if (t65 != 212699264U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2057 = 0;
	int32_t x2058 = INT32_MIN;
	volatile uint64_t x2059 = 53LLU;
	int32_t x2060 = 3524073;
	static volatile int32_t t66 = -5839;

	t66 = (x2057<<(x2058&(x2059|x2060)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2069 = 46;
	int16_t x2070 = 2;
	uint32_t x2071 = 8055976U;
	int32_t x2072 = -9506;
	int32_t t67 = 52566;

	t67 = (x2069<<(x2070&(x2071|x2072)));

	if (t67 != 184) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2101 = 1;
	int64_t x2103 = INT64_MIN;
	static volatile int8_t x2104 = 9;
	volatile int32_t t68 = 440;

	t68 = (x2101<<(x2102&(x2103|x2104)));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x2137 = 150;
	static volatile uint8_t x2138 = 0U;
	static int64_t x2139 = INT64_MAX;
	static uint16_t x2140 = 15850U;
	volatile int32_t t69 = -804;

	t69 = (x2137<<(x2138&(x2139|x2140)));

	if (t69 != 150) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2145 = UINT8_MAX;
	uint16_t x2146 = 183U;
	uint8_t x2147 = 1U;
	volatile int64_t x2148 = INT64_MIN;
	volatile int32_t t70 = 88186;

	t70 = (x2145<<(x2146&(x2147|x2148)));

	if (t70 != 510) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2149 = 481035059;
	volatile int8_t x2150 = 0;
	volatile uint8_t x2151 = 87U;
	int8_t x2152 = 0;
	volatile int32_t t71 = -21862;

	t71 = (x2149<<(x2150&(x2151|x2152)));

	if (t71 != 481035059) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2153 = 128945U;
	int16_t x2155 = -1;
	static uint64_t x2156 = 55805364767LLU;
	volatile uint32_t t72 = 1100U;

	t72 = (x2153<<(x2154&(x2155|x2156)));

	if (t72 != 257890U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2174 = INT64_MIN;
	int16_t x2175 = INT16_MIN;
	volatile int32_t t73 = 0;

	t73 = (x2173<<(x2174&(x2175|x2176)));

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2213 = 1;
	uint64_t x2215 = 14441308849485LLU;
	int8_t x2216 = 5;
	volatile int32_t t74 = 15;

	t74 = (x2213<<(x2214&(x2215|x2216)));

	if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2245 = 39U;
	static uint8_t x2246 = 40U;
	static int64_t x2248 = INT64_MIN;
	volatile uint32_t t75 = 176U;

	t75 = (x2245<<(x2246&(x2247|x2248)));

	if (t75 != 39U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2250 = 0;
	static int16_t x2251 = -16330;
	uint16_t x2252 = 13U;
	int32_t t76 = -258772103;

	t76 = (x2249<<(x2250&(x2251|x2252)));

	if (t76 != 210) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2258 = INT64_MAX;
	int8_t x2259 = 17;
	int8_t x2260 = 0;
	uint64_t t77 = 28731LLU;

	t77 = (x2257<<(x2258&(x2259|x2260)));

	if (t77 != 4325376LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x2341 = 1;
	uint32_t x2342 = 10U;
	volatile int16_t x2343 = 10;
	uint32_t x2344 = 15646121U;
	volatile int32_t t78 = -257424;

	t78 = (x2341<<(x2342&(x2343|x2344)));

	if (t78 != 1024) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x2361 = UINT16_MAX;
	static int64_t x2362 = 3LL;
	int16_t x2363 = INT16_MAX;
	uint8_t x2364 = 15U;
	static int32_t t79 = -316787412;

	t79 = (x2361<<(x2362&(x2363|x2364)));

	if (t79 != 524280) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2499 = 122U;
	uint16_t x2500 = UINT16_MAX;
	int32_t t80 = 46769;

	t80 = (x2497<<(x2498&(x2499|x2500)));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2505 = UINT64_MAX;
	static uint8_t x2506 = 0U;
	int64_t x2507 = 44353152392LL;
	int8_t x2508 = -2;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x2505<<(x2506&(x2507|x2508)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2509 = INT32_MAX;
	uint32_t x2510 = 475U;
	int64_t x2511 = INT64_MIN;
	static volatile int16_t x2512 = INT16_MIN;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x2509<<(x2510&(x2511|x2512)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2562 = 2U;
	int32_t x2563 = INT32_MIN;
	uint32_t x2564 = 1381U;
	uint32_t t83 = 1871933455U;

	t83 = (x2561<<(x2562&(x2563|x2564)));

	if (t83 != 810U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x2571 = 2457;
	uint32_t x2572 = 16U;
	int32_t t84 = -257;

	t84 = (x2569<<(x2570&(x2571|x2572)));

	if (t84 != 130560) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x2589 = UINT64_MAX;
	uint16_t x2590 = UINT16_MAX;
	int64_t x2591 = INT64_MIN;
	int32_t x2592 = INT32_MIN;
	uint64_t t85 = UINT64_MAX;

	t85 = (x2589<<(x2590&(x2591|x2592)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x2641 = UINT64_MAX;
	static int8_t x2642 = 0;
	static volatile uint16_t x2643 = UINT16_MAX;
	int32_t x2644 = 5;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x2641<<(x2642&(x2643|x2644)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2693 = 0;
	uint8_t x2694 = 0U;
	volatile uint32_t x2695 = 636919848U;
	int16_t x2696 = INT16_MIN;

	t87 = (x2693<<(x2694&(x2695|x2696)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2709 = 98U;
	volatile int8_t x2711 = -1;
	int64_t x2712 = INT64_MIN;

	t88 = (x2709<<(x2710&(x2711|x2712)));

	if (t88 != 392) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2713 = 5194LLU;
	static uint8_t x2714 = 3U;
	uint16_t x2715 = 153U;
	uint64_t x2716 = 226152859LLU;
	uint64_t t89 = 146112258LLU;

	t89 = (x2713<<(x2714&(x2715|x2716)));

	if (t89 != 41552LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2721 = 10;
	static int8_t x2722 = 2;
	volatile int16_t x2724 = -1;
	static volatile int32_t t90 = -127118;

	t90 = (x2721<<(x2722&(x2723|x2724)));

	if (t90 != 40) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2813 = INT32_MAX;
	volatile int64_t x2814 = INT64_MIN;
	uint32_t x2815 = 40U;
	int8_t x2816 = INT8_MIN;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x2813<<(x2814&(x2815|x2816)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2829 = 650LLU;
	volatile int8_t x2832 = INT8_MIN;
	static volatile uint64_t t92 = 459304282840LLU;

	t92 = (x2829<<(x2830&(x2831|x2832)));

	if (t92 != 650LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2881 = 21;
	static volatile int32_t x2882 = 0;
	int8_t x2883 = INT8_MIN;
	static int32_t x2884 = INT32_MIN;
	int32_t t93 = 7429;

	t93 = (x2881<<(x2882&(x2883|x2884)));

	if (t93 != 21) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2925 = 100U;
	uint32_t x2927 = 1U;
	int16_t x2928 = 1;
	static int32_t t94 = 295910;

	t94 = (x2925<<(x2926&(x2927|x2928)));

	if (t94 != 100) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x2993 = 0U;
	uint32_t x2994 = 98U;
	static int32_t x2996 = INT32_MIN;

	t95 = (x2993<<(x2994&(x2995|x2996)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3085 = 7988485U;
	int64_t x3087 = INT64_MIN;
	volatile uint32_t x3088 = UINT32_MAX;
	volatile uint32_t t96 = 44556303U;

	t96 = (x3085<<(x3086&(x3087|x3088)));

	if (t96 != 4068638720U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3094 = INT64_MIN;
	int8_t x3095 = 39;
	static uint64_t t97 = 910915983074326LLU;

	t97 = (x3093<<(x3094&(x3095|x3096)));

	if (t97 != 400620LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3109 = INT64_MAX;
	int64_t x3110 = INT64_MIN;
	int64_t t98 = INT64_MAX;

	t98 = (x3109<<(x3110&(x3111|x3112)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3129 = 7U;
	uint16_t x3130 = 7U;

	t99 = (x3129<<(x3130&(x3131|x3132)));

	if (t99 != 896U) { NG(); } else { ; }
	
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

