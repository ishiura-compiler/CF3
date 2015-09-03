#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x141 = -1;
uint16_t x266 = 426U;
int8_t x267 = 0;
uint8_t x304 = 66U;
int8_t x368 = INT8_MAX;
int8_t x429 = INT8_MIN;
uint64_t x430 = 924LLU;
int32_t x432 = INT32_MAX;
int32_t t8 = -741;
int32_t x537 = -1;
int32_t x639 = 0;
static volatile int32_t t12 = 14443963;
volatile int64_t x697 = INT64_MIN;
int32_t x825 = -1;
uint16_t x827 = 8U;
static int32_t t16 = 19831;
uint16_t x915 = 1U;
static int64_t x1017 = INT64_MIN;
int8_t x1021 = -1;
uint8_t x1023 = 9U;
int32_t t21 = -10247401;
int16_t x1040 = INT16_MAX;
volatile int32_t t22 = -984;
static volatile int32_t t23 = 121845;
uint16_t x1122 = 1339U;
int64_t x1232 = -161340508641707LL;
int64_t x1298 = INT64_MIN;
volatile uint32_t t28 = 9211736U;
int32_t x1350 = INT32_MIN;
volatile int32_t t30 = 40;
int64_t x1417 = INT64_MIN;
int16_t x1570 = -1;
static uint8_t x1571 = 1U;
int8_t x1575 = 29;
int32_t t34 = 267122464;
int32_t t35 = -43590;
int32_t x1629 = -1830202;
uint16_t x1630 = 208U;
int32_t t36 = 1;
int16_t x1644 = -54;
int8_t x1652 = -1;
int32_t x1696 = -1;
int32_t x1742 = 0;
uint8_t x1787 = 6U;
static int32_t t43 = 67168;
int64_t x1829 = 207296710985370061LL;
uint16_t x1831 = 19U;
int64_t x1832 = -1LL;
volatile int16_t x1866 = INT16_MIN;
uint16_t x1867 = 0U;
static int32_t t46 = -26920;
uint16_t x1922 = 612U;
volatile uint16_t x1971 = 6U;
int64_t x2049 = INT64_MIN;
int32_t t51 = 51054036;
uint16_t x2183 = 30U;
static int32_t t53 = 19458610;
int16_t x2420 = 0;
uint16_t x2486 = 758U;
int64_t x2513 = 1333407277LL;
int8_t x2516 = INT8_MAX;
static uint16_t x2578 = 15U;
uint32_t x2592 = 31018352U;
int16_t x2714 = -254;
static int16_t x2718 = -1;
int32_t t65 = 1;
int64_t x2757 = INT64_MAX;
uint8_t x2759 = 6U;
uint8_t x2766 = 110U;
uint32_t x2781 = UINT32_MAX;
uint8_t x2784 = 3U;
int32_t t71 = 0;
static uint8_t x2891 = 1U;
static uint16_t x2999 = 10U;
int8_t x3033 = -3;
int64_t x3037 = INT64_MIN;
volatile uint32_t x3038 = UINT32_MAX;
uint32_t x3040 = UINT32_MAX;
static uint16_t x3049 = 3762U;
int64_t x3061 = INT64_MIN;
volatile int16_t x3158 = -1;
uint64_t x3258 = 1493LLU;
uint64_t x3397 = UINT64_MAX;
int16_t x3404 = -1;
static int8_t x3405 = -10;
static int8_t x3407 = 4;
volatile int32_t t87 = 1;
static int8_t x3438 = INT8_MIN;
int32_t x3592 = INT32_MAX;
volatile int32_t t90 = 0;
int64_t x3721 = -292404968655671700LL;
static volatile uint8_t x3724 = 22U;
static int32_t t93 = 27391164;
volatile int32_t t95 = 1343;
int16_t x3855 = 1;
static int16_t x3856 = INT16_MAX;
uint8_t x3892 = UINT8_MAX;
static volatile int32_t t98 = -41;
int64_t x3893 = INT64_MIN;
uint8_t x3895 = 9U;


void f0(void) {
	uint16_t x137 = 1592U;
	volatile int8_t x138 = -1;
	uint8_t x139 = 0U;
	volatile int16_t x140 = -15262;
	int32_t t0 = 122294;

	t0 = (((x137<x138)<<x139)-x140);

	if (t0 != 15262) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x142 = INT8_MIN;
	int16_t x143 = 0;
	int64_t x144 = 9649755LL;
	volatile int64_t t1 = 5974815LL;

	t1 = (((x141<x142)<<x143)-x144);

	if (t1 != -9649755LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x245 = 114U;
	uint64_t x246 = UINT64_MAX;
	static volatile int8_t x247 = 26;
	int8_t x248 = INT8_MIN;
	volatile int32_t t2 = 473626041;

	t2 = (((x245<x246)<<x247)-x248);

	if (t2 != 67108992) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x265 = -1;
	volatile int64_t x268 = -1LL;
	volatile int64_t t3 = -2908582709388LL;

	t3 = (((x265<x266)<<x267)-x268);

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x301 = UINT8_MAX;
	static int8_t x302 = -1;
	uint16_t x303 = 21U;
	int32_t t4 = -21578397;

	t4 = (((x301<x302)<<x303)-x304);

	if (t4 != -66) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x365 = 107U;
	volatile int32_t x366 = INT32_MAX;
	uint8_t x367 = 29U;
	int32_t t5 = -26392;

	t5 = (((x365<x366)<<x367)-x368);

	if (t5 != 536870785) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x401 = 26U;
	uint8_t x402 = UINT8_MAX;
	static int8_t x403 = 15;
	int16_t x404 = -1;
	int32_t t6 = 11706970;

	t6 = (((x401<x402)<<x403)-x404);

	if (t6 != 32769) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x431 = 31U;
	volatile int32_t t7 = 12358486;

	t7 = (((x429<x430)<<x431)-x432);

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x485 = 85U;
	uint16_t x486 = UINT16_MAX;
	static uint32_t x487 = 26U;
	uint16_t x488 = UINT16_MAX;

	t8 = (((x485<x486)<<x487)-x488);

	if (t8 != 67043329) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x538 = INT16_MIN;
	volatile int16_t x539 = 3;
	int32_t x540 = INT32_MAX;
	int32_t t9 = -1585815;

	t9 = (((x537<x538)<<x539)-x540);

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x549 = 95;
	int64_t x550 = INT64_MIN;
	volatile uint32_t x551 = 3U;
	int16_t x552 = INT16_MIN;
	volatile int32_t t10 = -705;

	t10 = (((x549<x550)<<x551)-x552);

	if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x605 = UINT8_MAX;
	uint64_t x606 = 1231919LLU;
	uint16_t x607 = 8U;
	static uint16_t x608 = 5044U;
	volatile int32_t t11 = 1;

	t11 = (((x605<x606)<<x607)-x608);

	if (t11 != -4788) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x637 = -1;
	static int16_t x638 = 504;
	int16_t x640 = -1;

	t12 = (((x637<x638)<<x639)-x640);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x698 = UINT16_MAX;
	int8_t x699 = 1;
	volatile int16_t x700 = -2619;
	volatile int32_t t13 = 442142742;

	t13 = (((x697<x698)<<x699)-x700);

	if (t13 != 2621) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x733 = 1;
	static int32_t x734 = 776738725;
	int8_t x735 = 10;
	volatile int16_t x736 = -7668;
	static int32_t t14 = 0;

	t14 = (((x733<x734)<<x735)-x736);

	if (t14 != 8692) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x826 = 1U;
	volatile int64_t x828 = 935658551LL;
	volatile int64_t t15 = 95171LL;

	t15 = (((x825<x826)<<x827)-x828);

	if (t15 != -935658295LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x873 = INT16_MIN;
	int8_t x874 = INT8_MIN;
	static int16_t x875 = 0;
	int8_t x876 = INT8_MAX;

	t16 = (((x873<x874)<<x875)-x876);

	if (t16 != -126) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x901 = INT16_MIN;
	uint32_t x902 = 0U;
	int8_t x903 = 1;
	int16_t x904 = 523;
	int32_t t17 = -2994690;

	t17 = (((x901<x902)<<x903)-x904);

	if (t17 != -523) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x913 = UINT8_MAX;
	volatile int8_t x914 = INT8_MAX;
	int16_t x916 = 1;
	volatile int32_t t18 = 499396196;

	t18 = (((x913<x914)<<x915)-x916);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x969 = INT8_MIN;
	int8_t x970 = 10;
	int8_t x971 = 0;
	uint8_t x972 = 17U;
	int32_t t19 = 64;

	t19 = (((x969<x970)<<x971)-x972);

	if (t19 != -16) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1018 = -1;
	uint8_t x1019 = 7U;
	volatile uint64_t x1020 = UINT64_MAX;
	static volatile uint64_t t20 = 6863512036660LLU;

	t20 = (((x1017<x1018)<<x1019)-x1020);

	if (t20 != 129LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1022 = UINT16_MAX;
	int8_t x1024 = INT8_MAX;

	t21 = (((x1021<x1022)<<x1023)-x1024);

	if (t21 != 385) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1037 = -1;
	int64_t x1038 = INT64_MIN;
	volatile int16_t x1039 = 0;

	t22 = (((x1037<x1038)<<x1039)-x1040);

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1049 = -9;
	uint64_t x1050 = 12778LLU;
	uint32_t x1051 = 17U;
	volatile int16_t x1052 = 84;

	t23 = (((x1049<x1050)<<x1051)-x1052);

	if (t23 != -84) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1121 = -1LL;
	static volatile uint8_t x1123 = 1U;
	uint16_t x1124 = 42U;
	int32_t t24 = -23;

	t24 = (((x1121<x1122)<<x1123)-x1124);

	if (t24 != -40) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1165 = 2532945804298964112LLU;
	uint64_t x1166 = UINT64_MAX;
	uint16_t x1167 = 7U;
	volatile int64_t x1168 = 146866381473253078LL;
	int64_t t25 = -6290507LL;

	t25 = (((x1165<x1166)<<x1167)-x1168);

	if (t25 != -146866381473252950LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1229 = INT8_MIN;
	int64_t x1230 = -27456024343LL;
	int8_t x1231 = 23;
	volatile int64_t t26 = -109231027LL;

	t26 = (((x1229<x1230)<<x1231)-x1232);

	if (t26 != 161340508641707LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1277 = INT64_MIN;
	int64_t x1278 = INT64_MIN;
	uint64_t x1279 = 2LLU;
	volatile uint16_t x1280 = 9789U;
	volatile int32_t t27 = 19874347;

	t27 = (((x1277<x1278)<<x1279)-x1280);

	if (t27 != -9789) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1297 = -1;
	int8_t x1299 = 7;
	volatile uint32_t x1300 = 2014574868U;

	t28 = (((x1297<x1298)<<x1299)-x1300);

	if (t28 != 2280392428U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1349 = -35;
	int16_t x1351 = 14;
	volatile int16_t x1352 = INT16_MIN;
	static volatile int32_t t29 = 269009;

	t29 = (((x1349<x1350)<<x1351)-x1352);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1397 = 581770777255LLU;
	int16_t x1398 = INT16_MIN;
	static uint32_t x1399 = 0U;
	uint8_t x1400 = 1U;

	t30 = (((x1397<x1398)<<x1399)-x1400);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1418 = 3693U;
	uint8_t x1419 = 2U;
	static int16_t x1420 = -1;
	volatile int32_t t31 = 11;

	t31 = (((x1417<x1418)<<x1419)-x1420);

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1569 = UINT16_MAX;
	static uint64_t x1572 = 1941LLU;
	volatile uint64_t t32 = 126884LLU;

	t32 = (((x1569<x1570)<<x1571)-x1572);

	if (t32 != 18446744073709549675LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1573 = 7299U;
	static uint8_t x1574 = 85U;
	int16_t x1576 = INT16_MIN;
	int32_t t33 = 1;

	t33 = (((x1573<x1574)<<x1575)-x1576);

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1589 = INT8_MAX;
	volatile int32_t x1590 = INT32_MAX;
	int16_t x1591 = 0;
	static int8_t x1592 = INT8_MIN;

	t34 = (((x1589<x1590)<<x1591)-x1592);

	if (t34 != 129) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1613 = -1;
	int64_t x1614 = -1LL;
	uint32_t x1615 = 4U;
	int32_t x1616 = INT32_MAX;

	t35 = (((x1613<x1614)<<x1615)-x1616);

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1631 = 10;
	uint8_t x1632 = UINT8_MAX;

	t36 = (((x1629<x1630)<<x1631)-x1632);

	if (t36 != 769) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1641 = UINT32_MAX;
	int32_t x1642 = 494;
	volatile uint8_t x1643 = 0U;
	static volatile int32_t t37 = 650;

	t37 = (((x1641<x1642)<<x1643)-x1644);

	if (t37 != 54) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1649 = INT8_MIN;
	int32_t x1650 = INT32_MAX;
	volatile int8_t x1651 = 0;
	int32_t t38 = -14303;

	t38 = (((x1649<x1650)<<x1651)-x1652);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1693 = UINT8_MAX;
	int32_t x1694 = INT32_MAX;
	volatile uint16_t x1695 = 6U;
	volatile int32_t t39 = -329;

	t39 = (((x1693<x1694)<<x1695)-x1696);

	if (t39 != 65) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1713 = 373U;
	int16_t x1714 = INT16_MIN;
	uint8_t x1715 = 0U;
	int16_t x1716 = 47;
	volatile int32_t t40 = -71316353;

	t40 = (((x1713<x1714)<<x1715)-x1716);

	if (t40 != -47) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1741 = -1;
	uint16_t x1743 = 0U;
	int32_t x1744 = 2396885;
	static int32_t t41 = 4096;

	t41 = (((x1741<x1742)<<x1743)-x1744);

	if (t41 != -2396884) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1781 = INT32_MIN;
	static int32_t x1782 = INT32_MAX;
	int32_t x1783 = 1;
	uint8_t x1784 = UINT8_MAX;
	static volatile int32_t t42 = 88444;

	t42 = (((x1781<x1782)<<x1783)-x1784);

	if (t42 != -253) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1785 = -1LL;
	static int16_t x1786 = INT16_MIN;
	static int8_t x1788 = 1;

	t43 = (((x1785<x1786)<<x1787)-x1788);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x1830 = -1;
	static volatile int64_t t44 = -1550LL;

	t44 = (((x1829<x1830)<<x1831)-x1832);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1865 = -272;
	volatile int32_t x1868 = -1;
	int32_t t45 = 458;

	t45 = (((x1865<x1866)<<x1867)-x1868);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1869 = INT32_MIN;
	volatile int16_t x1870 = INT16_MAX;
	static int8_t x1871 = 2;
	int32_t x1872 = 3183990;

	t46 = (((x1869<x1870)<<x1871)-x1872);

	if (t46 != -3183986) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1921 = -1;
	static uint16_t x1923 = 7U;
	static int8_t x1924 = INT8_MAX;
	static volatile int32_t t47 = 917076253;

	t47 = (((x1921<x1922)<<x1923)-x1924);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1969 = INT64_MIN;
	volatile int8_t x1970 = INT8_MAX;
	int64_t x1972 = -1LL;
	int64_t t48 = -239LL;

	t48 = (((x1969<x1970)<<x1971)-x1972);

	if (t48 != 65LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x2050 = 69944396U;
	static int8_t x2051 = 0;
	static int64_t x2052 = -32174LL;
	static int64_t t49 = -855930LL;

	t49 = (((x2049<x2050)<<x2051)-x2052);

	if (t49 != 32175LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2089 = -8940389;
	int8_t x2090 = INT8_MAX;
	volatile int8_t x2091 = 1;
	int16_t x2092 = INT16_MAX;
	volatile int32_t t50 = -339584206;

	t50 = (((x2089<x2090)<<x2091)-x2092);

	if (t50 != -32765) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2149 = 61U;
	int16_t x2150 = INT16_MAX;
	volatile uint64_t x2151 = 13LLU;
	int8_t x2152 = 12;

	t51 = (((x2149<x2150)<<x2151)-x2152);

	if (t51 != 8180) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2173 = -1;
	int64_t x2174 = -1LL;
	static int8_t x2175 = 9;
	uint32_t x2176 = UINT32_MAX;
	uint32_t t52 = 3227U;

	t52 = (((x2173<x2174)<<x2175)-x2176);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2181 = 7774668475464LL;
	int32_t x2182 = 1306;
	int8_t x2184 = INT8_MIN;

	t53 = (((x2181<x2182)<<x2183)-x2184);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2201 = 0;
	volatile int8_t x2202 = -1;
	static int16_t x2203 = 1;
	uint32_t x2204 = 54U;
	uint32_t t54 = 3369455U;

	t54 = (((x2201<x2202)<<x2203)-x2204);

	if (t54 != 4294967242U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x2229 = 153U;
	int8_t x2230 = INT8_MIN;
	int8_t x2231 = 2;
	static uint8_t x2232 = 0U;
	volatile int32_t t55 = 13981846;

	t55 = (((x2229<x2230)<<x2231)-x2232);

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2417 = UINT64_MAX;
	int32_t x2418 = 4717048;
	uint8_t x2419 = 9U;
	volatile int32_t t56 = -1602;

	t56 = (((x2417<x2418)<<x2419)-x2420);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2485 = 7009;
	uint8_t x2487 = 1U;
	static uint8_t x2488 = 60U;
	static int32_t t57 = 82717511;

	t57 = (((x2485<x2486)<<x2487)-x2488);

	if (t57 != -60) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2514 = 1033305611LLU;
	static int8_t x2515 = 1;
	volatile int32_t t58 = -70;

	t58 = (((x2513<x2514)<<x2515)-x2516);

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2565 = UINT64_MAX;
	volatile int8_t x2566 = INT8_MAX;
	volatile int8_t x2567 = 0;
	uint64_t x2568 = 3558451855362LLU;
	uint64_t t59 = 1373691343455LLU;

	t59 = (((x2565<x2566)<<x2567)-x2568);

	if (t59 != 18446740515257696254LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2577 = -1;
	volatile uint64_t x2579 = 6LLU;
	volatile int16_t x2580 = INT16_MAX;
	static int32_t t60 = -3023;

	t60 = (((x2577<x2578)<<x2579)-x2580);

	if (t60 != -32703) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x2589 = INT64_MIN;
	uint8_t x2590 = UINT8_MAX;
	int8_t x2591 = 2;
	volatile uint32_t t61 = 4060561U;

	t61 = (((x2589<x2590)<<x2591)-x2592);

	if (t61 != 4263948948U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2641 = INT16_MIN;
	int64_t x2642 = -1LL;
	int32_t x2643 = 3;
	int8_t x2644 = INT8_MIN;
	volatile int32_t t62 = -57416;

	t62 = (((x2641<x2642)<<x2643)-x2644);

	if (t62 != 136) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x2713 = INT64_MIN;
	int8_t x2715 = 8;
	uint8_t x2716 = 0U;
	volatile int32_t t63 = 244;

	t63 = (((x2713<x2714)<<x2715)-x2716);

	if (t63 != 256) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2717 = INT8_MAX;
	uint64_t x2719 = 2LLU;
	volatile uint64_t x2720 = 1657548702LLU;
	uint64_t t64 = 978LLU;

	t64 = (((x2717<x2718)<<x2719)-x2720);

	if (t64 != 18446744072052002914LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2749 = INT32_MIN;
	uint64_t x2750 = 708739LLU;
	static uint8_t x2751 = 12U;
	static int16_t x2752 = INT16_MIN;

	t65 = (((x2749<x2750)<<x2751)-x2752);

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2758 = 1753LLU;
	int8_t x2760 = -1;
	static int32_t t66 = -10;

	t66 = (((x2757<x2758)<<x2759)-x2760);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x2765 = 397713503758380LLU;
	static int8_t x2767 = 7;
	int16_t x2768 = 0;
	int32_t t67 = 1592075;

	t67 = (((x2765<x2766)<<x2767)-x2768);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x2777 = 17;
	int16_t x2778 = INT16_MAX;
	uint32_t x2779 = 1U;
	int32_t x2780 = -1;
	volatile int32_t t68 = -208769138;

	t68 = (((x2777<x2778)<<x2779)-x2780);

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2782 = INT32_MIN;
	uint16_t x2783 = 2U;
	static int32_t t69 = -31162;

	t69 = (((x2781<x2782)<<x2783)-x2784);

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2785 = INT16_MAX;
	uint16_t x2786 = 2U;
	volatile uint32_t x2787 = 11U;
	int16_t x2788 = INT16_MAX;
	volatile int32_t t70 = 30227622;

	t70 = (((x2785<x2786)<<x2787)-x2788);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2837 = INT64_MAX;
	volatile int16_t x2838 = -45;
	int8_t x2839 = 2;
	uint8_t x2840 = 16U;

	t71 = (((x2837<x2838)<<x2839)-x2840);

	if (t71 != -16) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2889 = 9;
	static int8_t x2890 = INT8_MAX;
	uint16_t x2892 = UINT16_MAX;
	int32_t t72 = 626662745;

	t72 = (((x2889<x2890)<<x2891)-x2892);

	if (t72 != -65533) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2901 = 170U;
	int8_t x2902 = INT8_MAX;
	uint8_t x2903 = 22U;
	int16_t x2904 = INT16_MIN;
	int32_t t73 = -51393495;

	t73 = (((x2901<x2902)<<x2903)-x2904);

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2997 = UINT32_MAX;
	int8_t x2998 = INT8_MAX;
	volatile uint32_t x3000 = UINT32_MAX;
	uint32_t t74 = 33706U;

	t74 = (((x2997<x2998)<<x2999)-x3000);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3034 = 353924991U;
	int8_t x3035 = 28;
	static uint16_t x3036 = 0U;
	int32_t t75 = 32359;

	t75 = (((x3033<x3034)<<x3035)-x3036);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x3039 = 1U;
	uint32_t t76 = 290282385U;

	t76 = (((x3037<x3038)<<x3039)-x3040);

	if (t76 != 3U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3050 = INT16_MAX;
	uint8_t x3051 = 1U;
	static int16_t x3052 = -16307;
	volatile int32_t t77 = -2791;

	t77 = (((x3049<x3050)<<x3051)-x3052);

	if (t77 != 16309) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3062 = INT8_MAX;
	int32_t x3063 = 1;
	volatile uint8_t x3064 = 6U;
	volatile int32_t t78 = -324920918;

	t78 = (((x3061<x3062)<<x3063)-x3064);

	if (t78 != -4) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3157 = -949038679516319LL;
	static volatile uint8_t x3159 = 3U;
	int32_t x3160 = 3;
	int32_t t79 = 6290;

	t79 = (((x3157<x3158)<<x3159)-x3160);

	if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3201 = -1;
	uint16_t x3202 = UINT16_MAX;
	static int8_t x3203 = 2;
	volatile uint64_t x3204 = 142286485870776192LLU;
	static volatile uint64_t t80 = 14980196169596037LLU;

	t80 = (((x3201<x3202)<<x3203)-x3204);

	if (t80 != 18304457587838775428LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3257 = 24165U;
	volatile uint8_t x3259 = 7U;
	int16_t x3260 = INT16_MAX;
	int32_t t81 = 2654916;

	t81 = (((x3257<x3258)<<x3259)-x3260);

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3297 = INT64_MIN;
	uint16_t x3298 = UINT16_MAX;
	static int8_t x3299 = 0;
	volatile int32_t x3300 = 86;
	int32_t t82 = 7784182;

	t82 = (((x3297<x3298)<<x3299)-x3300);

	if (t82 != -85) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x3357 = 139290942666LLU;
	int16_t x3358 = -1;
	uint16_t x3359 = 1U;
	int8_t x3360 = -1;
	volatile int32_t t83 = 255535145;

	t83 = (((x3357<x3358)<<x3359)-x3360);

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x3398 = INT64_MIN;
	uint8_t x3399 = 15U;
	static int32_t x3400 = 5573515;
	volatile int32_t t84 = -624110643;

	t84 = (((x3397<x3398)<<x3399)-x3400);

	if (t84 != -5573515) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3401 = 193787232582680701LLU;
	int32_t x3402 = 1286;
	uint32_t x3403 = 8U;
	int32_t t85 = -7051;

	t85 = (((x3401<x3402)<<x3403)-x3404);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3406 = 56U;
	int8_t x3408 = -1;
	int32_t t86 = 1;

	t86 = (((x3405<x3406)<<x3407)-x3408);

	if (t86 != 17) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x3421 = -1;
	int32_t x3422 = INT32_MIN;
	uint16_t x3423 = 21U;
	volatile uint8_t x3424 = UINT8_MAX;

	t87 = (((x3421<x3422)<<x3423)-x3424);

	if (t87 != -255) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3437 = 7742U;
	uint64_t x3439 = 5LLU;
	int8_t x3440 = INT8_MIN;
	int32_t t88 = -826;

	t88 = (((x3437<x3438)<<x3439)-x3440);

	if (t88 != 160) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3577 = 206;
	int32_t x3578 = -1;
	int32_t x3579 = 1;
	static volatile uint64_t x3580 = 89117390419LLU;
	uint64_t t89 = 3237352721956550548LLU;

	t89 = (((x3577<x3578)<<x3579)-x3580);

	if (t89 != 18446743984592161197LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3589 = -1;
	int32_t x3590 = INT32_MIN;
	uint16_t x3591 = 1U;

	t90 = (((x3589<x3590)<<x3591)-x3592);

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3669 = -1;
	uint32_t x3670 = 310114878U;
	uint32_t x3671 = 1U;
	int16_t x3672 = INT16_MIN;
	int32_t t91 = -394;

	t91 = (((x3669<x3670)<<x3671)-x3672);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3685 = INT16_MIN;
	int8_t x3686 = INT8_MIN;
	uint16_t x3687 = 0U;
	int32_t x3688 = -1;
	volatile int32_t t92 = -14156;

	t92 = (((x3685<x3686)<<x3687)-x3688);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x3722 = -1;
	uint8_t x3723 = 0U;

	t93 = (((x3721<x3722)<<x3723)-x3724);

	if (t93 != -21) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3741 = 1245836444848LLU;
	int64_t x3742 = INT64_MAX;
	static int8_t x3743 = 5;
	static uint64_t x3744 = 284LLU;
	uint64_t t94 = 29234953321729154LLU;

	t94 = (((x3741<x3742)<<x3743)-x3744);

	if (t94 != 18446744073709551364LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x3765 = INT64_MIN;
	static uint32_t x3766 = UINT32_MAX;
	static uint32_t x3767 = 20U;
	volatile uint16_t x3768 = UINT16_MAX;

	t95 = (((x3765<x3766)<<x3767)-x3768);

	if (t95 != 983041) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x3805 = 15888;
	int8_t x3806 = 7;
	uint32_t x3807 = 24U;
	uint8_t x3808 = 0U;
	volatile int32_t t96 = -41;

	t96 = (((x3805<x3806)<<x3807)-x3808);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3853 = INT32_MAX;
	volatile int16_t x3854 = INT16_MIN;
	volatile int32_t t97 = 62446;

	t97 = (((x3853<x3854)<<x3855)-x3856);

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3889 = INT8_MIN;
	int32_t x3890 = INT32_MIN;
	uint32_t x3891 = 1U;

	t98 = (((x3889<x3890)<<x3891)-x3892);

	if (t98 != -255) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x3894 = 2U;
	int32_t x3896 = 61746517;
	volatile int32_t t99 = 1;

	t99 = (((x3893<x3894)<<x3895)-x3896);

	if (t99 != -61746005) { NG(); } else { ; }
	
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

