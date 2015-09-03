#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x97 = -1;
volatile int64_t x146 = INT64_MIN;
volatile int32_t t2 = -1;
static volatile int32_t t3 = 2533;
static int16_t x204 = -1;
static uint32_t x398 = 1898009711U;
int8_t x442 = INT8_MAX;
int8_t x443 = 0;
uint16_t x476 = 4U;
static volatile int32_t t9 = -2;
int32_t x570 = -1;
int64_t x594 = -26310LL;
int32_t t11 = -5256483;
static volatile uint64_t x675 = UINT64_MAX;
static int8_t x679 = -1;
volatile int32_t t17 = 955048;
int64_t x909 = INT64_MIN;
static uint64_t x912 = UINT64_MAX;
uint16_t x1104 = 0U;
int16_t x1249 = -1;
volatile uint8_t x1253 = 59U;
static volatile int8_t x1254 = INT8_MIN;
uint64_t x1286 = 343750LLU;
static int32_t t22 = 199765;
uint32_t x1412 = UINT32_MAX;
volatile int64_t x1537 = -29520569LL;
volatile int32_t t26 = -774;
int32_t x1593 = INT32_MIN;
static int32_t x1594 = INT32_MIN;
uint8_t x1630 = 5U;
int64_t x1633 = INT64_MIN;
uint16_t x1682 = UINT16_MAX;
volatile int16_t x1767 = 1;
static int32_t t33 = 0;
int16_t x1820 = -1;
static int32_t t34 = 2030438;
uint64_t x1868 = UINT64_MAX;
volatile int32_t t36 = -7688041;
int16_t x2009 = 202;
uint8_t x2010 = UINT8_MAX;
int64_t x2011 = 2LL;
volatile int8_t x2012 = 4;
int8_t x2064 = -1;
int16_t x2138 = 12;
volatile int32_t t42 = 1041131433;
int8_t x2218 = INT8_MAX;
int32_t t44 = -2210534;
volatile int8_t x2299 = -10;
static int32_t t45 = 28635;
uint64_t x2407 = UINT64_MAX;
volatile int64_t x2408 = -9LL;
int8_t x2446 = -1;
volatile int32_t t48 = -61725;
int16_t x2528 = 0;
static int32_t t50 = -4374;
int64_t x2557 = -11461015LL;
volatile int64_t x2790 = 102116805381LL;
uint32_t x2806 = 160532401U;
static uint32_t x2813 = 740095843U;
int64_t x2815 = -3LL;
int16_t x2890 = -1;
uint8_t x2892 = 3U;
static volatile int32_t t55 = 16085839;
int8_t x2902 = INT8_MIN;
int8_t x2909 = -3;
int64_t x2917 = INT64_MAX;
volatile uint8_t x2941 = UINT8_MAX;
int32_t x2942 = INT32_MIN;
int8_t x3031 = -1;
int32_t t61 = 72;
static volatile int16_t x3116 = -1;
static uint16_t x3326 = 231U;
int32_t t63 = -172;
volatile uint8_t x3337 = 4U;
int16_t x3338 = INT16_MAX;
int8_t x3339 = INT8_MIN;
volatile int32_t t65 = 0;
int16_t x3460 = -1;
static int64_t x3488 = -1LL;
volatile int32_t t70 = -1;
int64_t x3858 = 1227016510223LL;
int32_t x3859 = -1;
int64_t x3920 = INT64_MIN;
uint32_t x3943 = UINT32_MAX;
volatile int64_t x3986 = INT64_MAX;
volatile uint32_t x3987 = 2U;
volatile uint8_t x3988 = 31U;
uint8_t x3995 = 6U;
int32_t x3996 = 1;
int32_t x3998 = INT32_MAX;
uint64_t x4286 = 380067195467LLU;
volatile int16_t x4288 = -1;
static int32_t t79 = -1;
int32_t x4454 = -1;
static int32_t x4491 = INT32_MIN;
int32_t x4492 = INT32_MIN;
static int16_t x4496 = -1;
volatile int32_t t83 = -280;
static volatile int32_t t84 = 191933822;
static volatile int64_t x4569 = INT64_MIN;
int8_t x4678 = 1;
int32_t x4724 = -1;
static int64_t x4735 = INT64_MIN;
int32_t t93 = 0;
static uint32_t x4950 = UINT32_MAX;
int8_t x4953 = INT8_MIN;
int16_t x4956 = -1;
volatile int32_t t97 = -87155;
int16_t x5224 = INT16_MAX;


void f0(void) {
	static volatile uint32_t x13 = 7769106U;
	int32_t x14 = INT32_MAX;
	int16_t x15 = -1;
	volatile uint64_t x16 = UINT64_MAX;
	volatile int32_t t0 = 216;

	t0 = ((x13<=x14)<<(x15^x16));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x98 = 941LLU;
	int64_t x99 = -1LL;
	static int64_t x100 = -1LL;
	int32_t t1 = -239991;

	t1 = ((x97<=x98)<<(x99^x100));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x145 = INT32_MIN;
	int8_t x147 = -1;
	int64_t x148 = -1LL;

	t2 = ((x145<=x146)<<(x147^x148));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x169 = INT16_MIN;
	uint64_t x170 = 8584089731LLU;
	int32_t x171 = -1;
	static int64_t x172 = -1LL;

	t3 = ((x169<=x170)<<(x171^x172));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x201 = INT16_MAX;
	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = UINT32_MAX;
	int32_t t4 = -136;

	t4 = ((x201<=x202)<<(x203^x204));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x321 = 6U;
	static int8_t x322 = 5;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t5 = -1016141515;

	t5 = ((x321<=x322)<<(x323^x324));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = 47;
	int8_t x339 = -1;
	int64_t x340 = -1LL;
	static int32_t t6 = -64941;

	t6 = ((x337<=x338)<<(x339^x340));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x397 = UINT8_MAX;
	static int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	int32_t t7 = -117159;

	t7 = ((x397<=x398)<<(x399^x400));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x441 = 3U;
	uint16_t x444 = 8U;
	static int32_t t8 = 3759;

	t8 = ((x441<=x442)<<(x443^x444));

	if (t8 != 256) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x473 = -41;
	uint64_t x474 = 546767LLU;
	volatile uint32_t x475 = 1U;

	t9 = ((x473<=x474)<<(x475^x476));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x569 = 8U;
	int16_t x571 = -1;
	uint32_t x572 = UINT32_MAX;
	volatile int32_t t10 = 375710;

	t10 = ((x569<=x570)<<(x571^x572));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x593 = 144500049064494903LL;
	int16_t x595 = 7;
	uint8_t x596 = 3U;

	t11 = ((x593<=x594)<<(x595^x596));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x673 = 771U;
	int8_t x674 = -1;
	int8_t x676 = -1;
	int32_t t12 = -17339;

	t12 = ((x673<=x674)<<(x675^x676));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x677 = 46033U;
	int16_t x678 = INT16_MIN;
	int8_t x680 = -28;
	int32_t t13 = 4;

	t13 = ((x677<=x678)<<(x679^x680));

	if (t13 != 134217728) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x685 = INT16_MAX;
	volatile uint16_t x686 = 5251U;
	uint32_t x687 = UINT32_MAX;
	int8_t x688 = -1;
	volatile int32_t t14 = 129612;

	t14 = ((x685<=x686)<<(x687^x688));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x689 = INT16_MAX;
	int32_t x690 = -1;
	uint8_t x691 = 6U;
	volatile int8_t x692 = 3;
	int32_t t15 = -107221140;

	t15 = ((x689<=x690)<<(x691^x692));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x809 = 1U;
	int8_t x810 = -1;
	volatile uint64_t x811 = UINT64_MAX;
	static volatile int8_t x812 = -1;
	int32_t t16 = 97898;

	t16 = ((x809<=x810)<<(x811^x812));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x881 = INT8_MIN;
	volatile uint8_t x882 = 51U;
	uint32_t x883 = UINT32_MAX;
	uint32_t x884 = UINT32_MAX;

	t17 = ((x881<=x882)<<(x883^x884));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x910 = -3851;
	int64_t x911 = -1LL;
	int32_t t18 = 0;

	t18 = ((x909<=x910)<<(x911^x912));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1101 = 0U;
	volatile uint64_t x1102 = UINT64_MAX;
	int16_t x1103 = 1;
	static volatile int32_t t19 = 37673;

	t19 = ((x1101<=x1102)<<(x1103^x1104));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1250 = UINT32_MAX;
	static int16_t x1251 = INT16_MAX;
	int16_t x1252 = INT16_MAX;
	static int32_t t20 = -22632;

	t20 = ((x1249<=x1250)<<(x1251^x1252));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1255 = -1;
	int8_t x1256 = -1;
	int32_t t21 = -271723;

	t21 = ((x1253<=x1254)<<(x1255^x1256));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1285 = 7535081U;
	int8_t x1287 = INT8_MIN;
	volatile int8_t x1288 = INT8_MIN;

	t22 = ((x1285<=x1286)<<(x1287^x1288));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1305 = INT16_MIN;
	uint16_t x1306 = 30U;
	uint32_t x1307 = 8U;
	int8_t x1308 = 1;
	int32_t t23 = -31;

	t23 = ((x1305<=x1306)<<(x1307^x1308));

	if (t23 != 512) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1393 = UINT16_MAX;
	volatile int8_t x1394 = 1;
	int8_t x1395 = 0;
	uint8_t x1396 = 23U;
	volatile int32_t t24 = 958993;

	t24 = ((x1393<=x1394)<<(x1395^x1396));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1409 = -78;
	int8_t x1410 = INT8_MIN;
	int8_t x1411 = -1;
	int32_t t25 = -262433224;

	t25 = ((x1409<=x1410)<<(x1411^x1412));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1538 = -1;
	int8_t x1539 = INT8_MIN;
	int8_t x1540 = INT8_MIN;

	t26 = ((x1537<=x1538)<<(x1539^x1540));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1595 = INT8_MAX;
	volatile int8_t x1596 = INT8_MAX;
	int32_t t27 = 867;

	t27 = ((x1593<=x1594)<<(x1595^x1596));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1629 = -1;
	static int16_t x1631 = -1;
	uint32_t x1632 = UINT32_MAX;
	volatile int32_t t28 = -163780120;

	t28 = ((x1629<=x1630)<<(x1631^x1632));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1634 = INT16_MIN;
	int32_t x1635 = -1;
	uint64_t x1636 = UINT64_MAX;
	int32_t t29 = 0;

	t29 = ((x1633<=x1634)<<(x1635^x1636));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1681 = -1;
	static int32_t x1683 = -1;
	int8_t x1684 = -6;
	static volatile int32_t t30 = 221;

	t30 = ((x1681<=x1682)<<(x1683^x1684));

	if (t30 != 32) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1765 = -1;
	int64_t x1766 = 4479206326677LL;
	volatile uint8_t x1768 = 1U;
	int32_t t31 = 500;

	t31 = ((x1765<=x1766)<<(x1767^x1768));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1793 = UINT32_MAX;
	int32_t x1794 = -17;
	int8_t x1795 = -1;
	static int32_t x1796 = -2;
	int32_t t32 = 1710497;

	t32 = ((x1793<=x1794)<<(x1795^x1796));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1809 = 5463625U;
	static uint32_t x1810 = 1U;
	int16_t x1811 = -1;
	volatile uint32_t x1812 = UINT32_MAX;

	t33 = ((x1809<=x1810)<<(x1811^x1812));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1817 = INT16_MIN;
	int16_t x1818 = -1;
	int8_t x1819 = -1;

	t34 = ((x1817<=x1818)<<(x1819^x1820));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1821 = -1;
	volatile int16_t x1822 = 14;
	int16_t x1823 = -1;
	int16_t x1824 = -16;
	static int32_t t35 = -28761531;

	t35 = ((x1821<=x1822)<<(x1823^x1824));

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1865 = 12;
	static uint16_t x1866 = 27U;
	int16_t x1867 = -11;

	t36 = ((x1865<=x1866)<<(x1867^x1868));

	if (t36 != 1024) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t t37 = -6230;

	t37 = ((x2009<=x2010)<<(x2011^x2012));

	if (t37 != 64) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2017 = 324938173323679620LL;
	volatile uint16_t x2018 = 2567U;
	uint32_t x2019 = UINT32_MAX;
	int16_t x2020 = -1;
	volatile int32_t t38 = 176694304;

	t38 = ((x2017<=x2018)<<(x2019^x2020));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2061 = -1;
	int16_t x2062 = 1;
	volatile int8_t x2063 = -1;
	int32_t t39 = 14316434;

	t39 = ((x2061<=x2062)<<(x2063^x2064));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2137 = -1;
	int8_t x2139 = -19;
	int16_t x2140 = -1;
	static int32_t t40 = -284844;

	t40 = ((x2137<=x2138)<<(x2139^x2140));

	if (t40 != 262144) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2181 = 57;
	int16_t x2182 = INT16_MIN;
	static volatile int64_t x2183 = INT64_MIN;
	int64_t x2184 = INT64_MIN;
	int32_t t41 = -76;

	t41 = ((x2181<=x2182)<<(x2183^x2184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x2205 = -1;
	static uint16_t x2206 = 8U;
	int64_t x2207 = INT64_MIN;
	volatile int64_t x2208 = INT64_MIN;

	t42 = ((x2205<=x2206)<<(x2207^x2208));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2217 = -1LL;
	int64_t x2219 = INT64_MIN;
	int64_t x2220 = INT64_MIN;
	int32_t t43 = -43285;

	t43 = ((x2217<=x2218)<<(x2219^x2220));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2225 = 731817U;
	int16_t x2226 = INT16_MIN;
	uint64_t x2227 = UINT64_MAX;
	static int8_t x2228 = -3;

	t44 = ((x2225<=x2226)<<(x2227^x2228));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2297 = -1;
	int8_t x2298 = INT8_MIN;
	int32_t x2300 = -1;

	t45 = ((x2297<=x2298)<<(x2299^x2300));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2405 = -1;
	int16_t x2406 = -14677;
	int32_t t46 = -389;

	t46 = ((x2405<=x2406)<<(x2407^x2408));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2445 = -1;
	int8_t x2447 = 5;
	int16_t x2448 = 0;
	static int32_t t47 = 190;

	t47 = ((x2445<=x2446)<<(x2447^x2448));

	if (t47 != 32) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2505 = 69944LL;
	int16_t x2506 = 14109;
	int32_t x2507 = -1;
	static int32_t x2508 = -1;

	t48 = ((x2505<=x2506)<<(x2507^x2508));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x2517 = UINT16_MAX;
	static volatile int8_t x2518 = INT8_MIN;
	int16_t x2519 = INT16_MAX;
	int16_t x2520 = INT16_MAX;
	int32_t t49 = -16844554;

	t49 = ((x2517<=x2518)<<(x2519^x2520));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x2525 = INT8_MIN;
	volatile uint32_t x2526 = 232U;
	int8_t x2527 = 7;

	t50 = ((x2525<=x2526)<<(x2527^x2528));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2558 = -1;
	static uint64_t x2559 = UINT64_MAX;
	volatile int16_t x2560 = -1;
	int32_t t51 = 4;

	t51 = ((x2557<=x2558)<<(x2559^x2560));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2789 = INT64_MIN;
	int8_t x2791 = -1;
	static uint64_t x2792 = UINT64_MAX;
	int32_t t52 = -1;

	t52 = ((x2789<=x2790)<<(x2791^x2792));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2805 = INT32_MIN;
	int16_t x2807 = -1;
	int64_t x2808 = -1LL;
	volatile int32_t t53 = -2401620;

	t53 = ((x2805<=x2806)<<(x2807^x2808));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2814 = UINT8_MAX;
	int32_t x2816 = -1;
	volatile int32_t t54 = -400;

	t54 = ((x2813<=x2814)<<(x2815^x2816));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x2889 = INT64_MAX;
	volatile int8_t x2891 = 0;

	t55 = ((x2889<=x2890)<<(x2891^x2892));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2901 = INT8_MIN;
	int8_t x2903 = -1;
	int32_t x2904 = -2;
	int32_t t56 = 10;

	t56 = ((x2901<=x2902)<<(x2903^x2904));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x2910 = INT16_MAX;
	int64_t x2911 = -1LL;
	uint64_t x2912 = UINT64_MAX;
	volatile int32_t t57 = 38;

	t57 = ((x2909<=x2910)<<(x2911^x2912));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2918 = 802284253835LL;
	static int8_t x2919 = INT8_MIN;
	int8_t x2920 = INT8_MIN;
	int32_t t58 = -1458249;

	t58 = ((x2917<=x2918)<<(x2919^x2920));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2943 = -20;
	static int32_t x2944 = -3;
	static int32_t t59 = 22;

	t59 = ((x2941<=x2942)<<(x2943^x2944));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3029 = INT64_MIN;
	int64_t x3030 = INT64_MIN;
	static int32_t x3032 = -1;
	int32_t t60 = -7202;

	t60 = ((x3029<=x3030)<<(x3031^x3032));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3033 = INT64_MIN;
	int64_t x3034 = INT64_MIN;
	static int32_t x3035 = -1;
	int8_t x3036 = -1;

	t61 = ((x3033<=x3034)<<(x3035^x3036));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3113 = -1;
	uint8_t x3114 = 10U;
	int16_t x3115 = -1;
	int32_t t62 = -345601;

	t62 = ((x3113<=x3114)<<(x3115^x3116));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3325 = -3;
	int8_t x3327 = -24;
	int16_t x3328 = -1;

	t63 = ((x3325<=x3326)<<(x3327^x3328));

	if (t63 != 8388608) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3340 = INT8_MIN;
	int32_t t64 = 10281;

	t64 = ((x3337<=x3338)<<(x3339^x3340));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3413 = 5U;
	int16_t x3414 = INT16_MAX;
	volatile int32_t x3415 = -1;
	static int64_t x3416 = -1LL;

	t65 = ((x3413<=x3414)<<(x3415^x3416));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3445 = -1;
	volatile int8_t x3446 = INT8_MIN;
	volatile uint32_t x3447 = UINT32_MAX;
	int8_t x3448 = -1;
	volatile int32_t t66 = 822350;

	t66 = ((x3445<=x3446)<<(x3447^x3448));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3457 = -12975;
	int32_t x3458 = -11775962;
	uint64_t x3459 = UINT64_MAX;
	static int32_t t67 = 1758115;

	t67 = ((x3457<=x3458)<<(x3459^x3460));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3485 = INT64_MIN;
	int64_t x3486 = INT64_MIN;
	int8_t x3487 = -6;
	int32_t t68 = -3103;

	t68 = ((x3485<=x3486)<<(x3487^x3488));

	if (t68 != 32) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3493 = INT16_MIN;
	uint32_t x3494 = UINT32_MAX;
	int8_t x3495 = -1;
	uint32_t x3496 = UINT32_MAX;
	volatile int32_t t69 = 5;

	t69 = ((x3493<=x3494)<<(x3495^x3496));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3617 = INT32_MIN;
	int16_t x3618 = -1;
	int64_t x3619 = -1LL;
	int16_t x3620 = -1;

	t70 = ((x3617<=x3618)<<(x3619^x3620));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3857 = -1;
	int16_t x3860 = -1;
	volatile int32_t t71 = 7912335;

	t71 = ((x3857<=x3858)<<(x3859^x3860));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x3897 = UINT32_MAX;
	int16_t x3898 = INT16_MIN;
	int8_t x3899 = INT8_MIN;
	int8_t x3900 = INT8_MIN;
	int32_t t72 = -615042;

	t72 = ((x3897<=x3898)<<(x3899^x3900));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3917 = -1;
	int64_t x3918 = -2239633LL;
	int64_t x3919 = INT64_MIN;
	int32_t t73 = 1;

	t73 = ((x3917<=x3918)<<(x3919^x3920));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3941 = -1;
	int16_t x3942 = -1;
	volatile uint32_t x3944 = UINT32_MAX;
	int32_t t74 = 2;

	t74 = ((x3941<=x3942)<<(x3943^x3944));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x3977 = 8175U;
	static volatile uint64_t x3978 = 1988LLU;
	int32_t x3979 = -1;
	int16_t x3980 = -1;
	volatile int32_t t75 = -196;

	t75 = ((x3977<=x3978)<<(x3979^x3980));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3985 = INT16_MIN;
	int32_t t76 = -6;

	t76 = ((x3985<=x3986)<<(x3987^x3988));

	if (t76 != 536870912) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3993 = INT64_MIN;
	volatile uint16_t x3994 = 10U;
	static volatile int32_t t77 = -1;

	t77 = ((x3993<=x3994)<<(x3995^x3996));

	if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x3997 = UINT8_MAX;
	volatile int16_t x3999 = -1;
	int16_t x4000 = -1;
	static int32_t t78 = 119;

	t78 = ((x3997<=x3998)<<(x3999^x4000));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4285 = INT64_MAX;
	uint64_t x4287 = UINT64_MAX;

	t79 = ((x4285<=x4286)<<(x4287^x4288));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4353 = INT8_MIN;
	int64_t x4354 = INT64_MAX;
	int64_t x4355 = -1LL;
	int8_t x4356 = -6;
	int32_t t80 = 63813463;

	t80 = ((x4353<=x4354)<<(x4355^x4356));

	if (t80 != 32) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4453 = -1LL;
	uint64_t x4455 = UINT64_MAX;
	int32_t x4456 = -1;
	volatile int32_t t81 = -24767;

	t81 = ((x4453<=x4454)<<(x4455^x4456));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4489 = 98426341U;
	uint16_t x4490 = 2U;
	static volatile int32_t t82 = 300470;

	t82 = ((x4489<=x4490)<<(x4491^x4492));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4493 = INT32_MIN;
	int8_t x4494 = -18;
	static volatile int16_t x4495 = -12;

	t83 = ((x4493<=x4494)<<(x4495^x4496));

	if (t83 != 2048) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4521 = 4345631360189LLU;
	volatile int8_t x4522 = -1;
	int8_t x4523 = -1;
	int8_t x4524 = -1;

	t84 = ((x4521<=x4522)<<(x4523^x4524));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4529 = UINT32_MAX;
	int8_t x4530 = INT8_MIN;
	int16_t x4531 = 23;
	static uint32_t x4532 = 3U;
	int32_t t85 = -111921;

	t85 = ((x4529<=x4530)<<(x4531^x4532));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4570 = 1;
	uint8_t x4571 = 1U;
	int64_t x4572 = 4LL;
	int32_t t86 = -407469;

	t86 = ((x4569<=x4570)<<(x4571^x4572));

	if (t86 != 32) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4633 = 3563U;
	int64_t x4634 = INT64_MIN;
	int16_t x4635 = 2;
	static volatile uint8_t x4636 = 6U;
	int32_t t87 = 3282;

	t87 = ((x4633<=x4634)<<(x4635^x4636));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4653 = 21U;
	volatile int32_t x4654 = -1;
	int16_t x4655 = -29;
	uint32_t x4656 = UINT32_MAX;
	volatile int32_t t88 = 0;

	t88 = ((x4653<=x4654)<<(x4655^x4656));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4677 = INT16_MIN;
	int32_t x4679 = -1;
	int32_t x4680 = -1;
	static int32_t t89 = 1995907;

	t89 = ((x4677<=x4678)<<(x4679^x4680));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4721 = UINT8_MAX;
	static uint64_t x4722 = UINT64_MAX;
	int16_t x4723 = -1;
	volatile int32_t t90 = -5126789;

	t90 = ((x4721<=x4722)<<(x4723^x4724));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x4733 = INT64_MAX;
	int64_t x4734 = INT64_MAX;
	int64_t x4736 = INT64_MIN;
	int32_t t91 = 26;

	t91 = ((x4733<=x4734)<<(x4735^x4736));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4737 = INT32_MIN;
	int16_t x4738 = -1;
	int64_t x4739 = 0LL;
	uint8_t x4740 = 29U;
	volatile int32_t t92 = -58490126;

	t92 = ((x4737<=x4738)<<(x4739^x4740));

	if (t92 != 536870912) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4785 = UINT32_MAX;
	int8_t x4786 = INT8_MIN;
	volatile int32_t x4787 = -1;
	int64_t x4788 = -1LL;

	t93 = ((x4785<=x4786)<<(x4787^x4788));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4833 = INT16_MAX;
	int16_t x4834 = 216;
	int32_t x4835 = INT32_MAX;
	static int32_t x4836 = INT32_MAX;
	int32_t t94 = -246108;

	t94 = ((x4833<=x4834)<<(x4835^x4836));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4949 = INT64_MAX;
	int8_t x4951 = -1;
	int64_t x4952 = -12LL;
	volatile int32_t t95 = 35893;

	t95 = ((x4949<=x4950)<<(x4951^x4952));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4954 = 197;
	static int8_t x4955 = -1;
	volatile int32_t t96 = 14;

	t96 = ((x4953<=x4954)<<(x4955^x4956));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x5093 = 88;
	int64_t x5094 = -73906517LL;
	int8_t x5095 = INT8_MAX;
	uint16_t x5096 = 104U;

	t97 = ((x5093<=x5094)<<(x5095^x5096));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5149 = INT16_MAX;
	uint32_t x5150 = 92U;
	int8_t x5151 = -6;
	int32_t x5152 = -18;
	volatile int32_t t98 = -1;

	t98 = ((x5149<=x5150)<<(x5151^x5152));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5221 = 123LLU;
	volatile int32_t x5222 = INT32_MIN;
	volatile int16_t x5223 = INT16_MAX;
	int32_t t99 = -7;

	t99 = ((x5221<=x5222)<<(x5223^x5224));

	if (t99 != 1) { NG(); } else { ; }
	
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

