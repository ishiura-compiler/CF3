
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x142 = INT8_MIN;
volatile int64_t t3 = -5LL;
int8_t x195 = 0;
volatile int16_t x196 = -1;
uint8_t x582 = 1U;
volatile int16_t x703 = -3584;
static uint8_t x704 = 0U;
volatile uint64_t x765 = UINT64_MAX;
uint32_t x813 = 3007768U;
volatile uint16_t x816 = 0U;
int8_t x858 = INT8_MIN;
static uint64_t t13 = 2776612774LLU;
volatile int8_t x1041 = 0;
int32_t x1042 = INT32_MIN;
int8_t x1149 = INT8_MIN;
static volatile int16_t x1166 = 94;
uint64_t x1174 = 5581568965109906052LLU;
static int32_t x1211 = -2;
int16_t x1246 = INT16_MIN;
int32_t t23 = 1932;
static int64_t x1393 = INT64_MIN;
static volatile uint64_t x1394 = UINT64_MAX;
volatile uint64_t t24 = 241971456900988142LLU;
uint64_t x1477 = 53046612634911LLU;
volatile uint32_t t26 = 18U;
static volatile int32_t t28 = -44;
uint64_t x1727 = 1LLU;
int8_t x1827 = 0;
int8_t x1897 = -1;
int32_t x1898 = 0;
volatile int8_t x1900 = -1;
static uint32_t x2033 = 66U;
uint8_t x2073 = 0U;
volatile int16_t x2076 = -1;
int64_t x2135 = -1LL;
uint32_t x2377 = 961338783U;
uint64_t x2381 = UINT64_MAX;
volatile int8_t x2382 = INT8_MIN;
volatile uint64_t t41 = 884120LLU;
int16_t x2469 = 734;
volatile int32_t x2472 = -1;
int32_t x2585 = 1;
int8_t x2587 = INT8_MAX;
int8_t x2687 = -4;
int32_t x2688 = -1;
uint32_t x2754 = 52U;
int16_t x2847 = 0;
volatile int64_t x2872 = -1LL;
volatile int32_t t49 = 1206760;
int8_t x3048 = -6;
uint32_t t53 = 3831U;
static volatile int16_t x3650 = 13371;
int8_t x3660 = 0;
int32_t x3919 = -1;
static uint8_t x4033 = UINT8_MAX;
volatile int64_t x4034 = 171LL;
static int16_t x4035 = 1;
uint8_t x4111 = 0U;
volatile int32_t t64 = -26;
uint32_t x4229 = 4664744U;
static volatile uint64_t x4387 = UINT64_MAX;
uint8_t x4475 = 0U;
uint32_t x4966 = 88819U;
int8_t x5017 = 23;
int16_t x5019 = -1;
int8_t x5074 = -1;
int64_t x5148 = -578201370274LL;
int64_t x5427 = 0LL;
int32_t x5428 = INT32_MAX;
volatile uint32_t t84 = 458763U;
int64_t x5487 = -3LL;
static uint64_t t87 = 18412180LLU;
int32_t x5669 = -1;
static uint8_t x5672 = 0U;
int64_t x5673 = -1LL;
int16_t x5900 = -2;
int8_t x6018 = -1;
uint8_t x6104 = 0U;
volatile uint64_t x6363 = 585363122514LLU;
uint64_t t97 = 4747902206055LLU;
static volatile uint64_t x6554 = 6LLU;
int8_t x6555 = -1;
static uint64_t x6809 = UINT64_MAX;
uint32_t x6811 = 5U;
uint8_t x6812 = 2U;
static uint16_t x7018 = 127U;
volatile uint16_t x7020 = 1U;
uint8_t x7361 = 0U;
volatile int16_t x7596 = INT16_MIN;
static uint64_t x7891 = UINT64_MAX;
static uint32_t x7956 = 7454U;
static int64_t x7997 = 2986196286150927LL;
int8_t x8000 = -1;
static volatile int16_t x8427 = -1;
uint32_t x8858 = 15012U;
volatile int16_t x8909 = INT16_MIN;
static volatile int32_t t122 = 3861978;


void f0(void) {
    	int64_t x13 = 0LL;
	int8_t x14 = -31;
	int32_t x15 = -1;
	static int16_t x16 = -37;
	volatile int64_t t0 = -666157096634217LL;

    t0 = ((x13*x14)<<(x15*x16));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x89 = INT16_MIN;
	uint32_t x90 = 3500U;
	static int64_t x91 = -1LL;
	int8_t x92 = 0;
	volatile uint32_t t1 = 455555321U;

    t1 = ((x89*x90)<<(x91*x92));

    if (t1 != 4180279296U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x133 = UINT64_MAX;
	int16_t x134 = -373;
	uint64_t x135 = UINT64_MAX;
	uint64_t x136 = UINT64_MAX;
	uint64_t t2 = 16003979197LLU;

    t2 = ((x133*x134)<<(x135*x136));

    if (t2 != 746LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x141 = -1LL;
	uint8_t x143 = 0U;
	int64_t x144 = -1LL;

    t3 = ((x141*x142)<<(x143*x144));

    if (t3 != 128LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x169 = -1;
	uint64_t x170 = 1019LLU;
	int8_t x171 = 26;
	static volatile int8_t x172 = 1;
	static uint64_t t4 = 10521LLU;

    t4 = ((x169*x170)<<(x171*x172));

    if (t4 != 18446744005325619200LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x193 = 8099322LLU;
	volatile uint8_t x194 = UINT8_MAX;
	volatile uint64_t t5 = 276808997LLU;

    t5 = ((x193*x194)<<(x195*x196));

    if (t5 != 2065327110LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x253 = 2U;
	uint16_t x254 = 83U;
	int32_t x255 = -10;
	int16_t x256 = -1;
	int32_t t6 = -3;

    t6 = ((x253*x254)<<(x255*x256));

    if (t6 != 169984) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x493 = 52;
	static uint32_t x494 = 3006437U;
	uint64_t x495 = UINT64_MAX;
	uint16_t x496 = 0U;
	volatile uint32_t t7 = 187595883U;

    t7 = ((x493*x494)<<(x495*x496));

    if (t7 != 156334724U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x581 = 0;
	volatile int32_t x583 = INT32_MIN;
	int16_t x584 = 0;
	volatile int32_t t8 = 344;

    t8 = ((x581*x582)<<(x583*x584));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x701 = 0;
	volatile int16_t x702 = 6;
	static volatile int32_t t9 = -7;

    t9 = ((x701*x702)<<(x703*x704));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x766 = -183575;
	static uint64_t x767 = UINT64_MAX;
	int8_t x768 = -1;
	volatile uint64_t t10 = 1LLU;

    t10 = ((x765*x766)<<(x767*x768));

    if (t10 != 367150LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x814 = UINT16_MAX;
	uint64_t x815 = UINT64_MAX;
	static volatile uint32_t t11 = 8005U;

    t11 = ((x813*x814)<<(x815*x816));

    if (t11 != 3840547560U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x857 = 19329U;
	static int8_t x859 = -1;
	static volatile int8_t x860 = -1;
	volatile uint32_t t12 = 5981U;

    t12 = ((x857*x858)<<(x859*x860));

    if (t12 != 4290019072U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x881 = 11762259978LLU;
	uint64_t x882 = 45710950575315235LLU;
	volatile uint64_t x883 = 542838LLU;
	static volatile int64_t x884 = INT64_MIN;

    t13 = ((x881*x882)<<(x883*x884));

    if (t13 != 7831934840465490782LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x997 = 0U;
	static volatile uint8_t x998 = 72U;
	int32_t x999 = -1;
	volatile int32_t x1000 = -1;
	volatile int32_t t14 = 31611;

    t14 = ((x997*x998)<<(x999*x1000));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1043 = 0U;
	volatile uint16_t x1044 = 0U;
	int32_t t15 = 934688;

    t15 = ((x1041*x1042)<<(x1043*x1044));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x1150 = -1;
	uint16_t x1151 = 2U;
	int8_t x1152 = 0;
	int32_t t16 = -1;

    t16 = ((x1149*x1150)<<(x1151*x1152));

    if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x1165 = UINT8_MAX;
	uint8_t x1167 = UINT8_MAX;
	static volatile int8_t x1168 = 0;
	int32_t t17 = -393420815;

    t17 = ((x1165*x1166)<<(x1167*x1168));

    if (t17 != 23970) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1173 = -1LL;
	volatile int8_t x1175 = -1;
	volatile int32_t x1176 = -1;
	volatile uint64_t t18 = 1212923083884921LLU;

    t18 = ((x1173*x1174)<<(x1175*x1176));

    if (t18 != 7283606143489739512LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1181 = INT8_MAX;
	static uint16_t x1182 = 648U;
	static uint32_t x1183 = UINT32_MAX;
	uint32_t x1184 = UINT32_MAX;
	volatile int32_t t19 = 11429;

    t19 = ((x1181*x1182)<<(x1183*x1184));

    if (t19 != 164592) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x1209 = 1U;
	int16_t x1210 = INT16_MAX;
	static volatile int8_t x1212 = -2;
	static volatile int32_t t20 = 23452;

    t20 = ((x1209*x1210)<<(x1211*x1212));

    if (t20 != 524272) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1245 = -1LL;
	volatile uint32_t x1247 = UINT32_MAX;
	static int16_t x1248 = -1;
	volatile int64_t t21 = -14LL;

    t21 = ((x1245*x1246)<<(x1247*x1248));

    if (t21 != 65536LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x1277 = 52290712U;
	int16_t x1278 = INT16_MIN;
	uint64_t x1279 = UINT64_MAX;
	uint8_t x1280 = 0U;
	static uint32_t t22 = 1459559097U;

    t22 = ((x1277*x1278)<<(x1279*x1280));

    if (t22 != 229900288U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1305 = 3U;
	uint8_t x1306 = 13U;
	uint32_t x1307 = 3456U;
	int32_t x1308 = INT32_MIN;

    t23 = ((x1305*x1306)<<(x1307*x1308));

    if (t23 != 39) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1395 = -35;
	int64_t x1396 = -1LL;

    t24 = ((x1393*x1394)<<(x1395*x1396));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x1478 = 2U;
	int16_t x1479 = 0;
	uint16_t x1480 = 2U;
	static uint64_t t25 = 292093464LLU;

    t25 = ((x1477*x1478)<<(x1479*x1480));

    if (t25 != 106093225269822LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x1561 = INT32_MAX;
	uint32_t x1562 = 483308U;
	int32_t x1563 = -1;
	int8_t x1564 = -3;

    t26 = ((x1561*x1562)<<(x1563*x1564));

    if (t26 != 4291100832U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1565 = INT16_MIN;
	uint32_t x1566 = UINT32_MAX;
	uint32_t x1567 = UINT32_MAX;
	int8_t x1568 = -1;
	uint32_t t27 = 1799070U;

    t27 = ((x1565*x1566)<<(x1567*x1568));

    if (t27 != 65536U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1577 = -1;
	int16_t x1578 = -804;
	static uint8_t x1579 = 0U;
	int8_t x1580 = 1;

    t28 = ((x1577*x1578)<<(x1579*x1580));

    if (t28 != 804) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1725 = INT32_MIN;
	uint8_t x1726 = 0U;
	int8_t x1728 = 1;
	volatile int32_t t29 = 11122;

    t29 = ((x1725*x1726)<<(x1727*x1728));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1821 = INT64_MAX;
	uint64_t x1822 = UINT64_MAX;
	uint16_t x1823 = 232U;
	int16_t x1824 = 0;
	uint64_t t30 = 3LLU;

    t30 = ((x1821*x1822)<<(x1823*x1824));

    if (t30 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1825 = -1LL;
	int32_t x1826 = -20658698;
	uint64_t x1828 = UINT64_MAX;
	int64_t t31 = -17022007823258016LL;

    t31 = ((x1825*x1826)<<(x1827*x1828));

    if (t31 != 20658698LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x1861 = UINT8_MAX;
	uint16_t x1862 = UINT16_MAX;
	int8_t x1863 = -7;
	int8_t x1864 = -1;
	static int32_t t32 = -210235305;

    t32 = ((x1861*x1862)<<(x1863*x1864));

    if (t32 != 2139062400) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1899 = 0;
	volatile int32_t t33 = -106061;

    t33 = ((x1897*x1898)<<(x1899*x1900));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x2034 = INT8_MIN;
	int64_t x2035 = -1LL;
	static int32_t x2036 = -1;
	uint32_t t34 = 36U;

    t34 = ((x2033*x2034)<<(x2035*x2036));

    if (t34 != 4294950400U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x2074 = 65143891U;
	static int8_t x2075 = 0;
	volatile uint32_t t35 = 146712U;

    t35 = ((x2073*x2074)<<(x2075*x2076));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x2109 = 0;
	uint64_t x2110 = 6115349095832606344LLU;
	static int16_t x2111 = -1;
	static uint64_t x2112 = UINT64_MAX;
	static uint64_t t36 = 47495488LLU;

    t36 = ((x2109*x2110)<<(x2111*x2112));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x2133 = 8U;
	uint64_t x2134 = 176LLU;
	int16_t x2136 = -1;
	static uint64_t t37 = 18082LLU;

    t37 = ((x2133*x2134)<<(x2135*x2136));

    if (t37 != 2816LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2149 = 0;
	int8_t x2150 = INT8_MIN;
	int16_t x2151 = -1;
	int8_t x2152 = -1;
	int32_t t38 = -486299;

    t38 = ((x2149*x2150)<<(x2151*x2152));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x2357 = 15026U;
	uint8_t x2358 = 40U;
	uint8_t x2359 = 0U;
	int16_t x2360 = -1;
	static volatile int32_t t39 = 420671430;

    t39 = ((x2357*x2358)<<(x2359*x2360));

    if (t39 != 601040) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x2378 = -2204;
	volatile int32_t x2379 = -1;
	int16_t x2380 = -1;
	static volatile uint32_t t40 = 1455103U;

    t40 = ((x2377*x2378)<<(x2379*x2380));

    if (t40 != 1551365688U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2383 = 652;
	int32_t x2384 = 0;

    t41 = ((x2381*x2382)<<(x2383*x2384));

    if (t41 != 128LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x2470 = 118U;
	int64_t x2471 = -1LL;
	volatile int32_t t42 = 37042669;

    t42 = ((x2469*x2470)<<(x2471*x2472));

    if (t42 != 173224) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2586 = 12981U;
	volatile uint16_t x2588 = 0U;
	volatile int32_t t43 = 5663;

    t43 = ((x2585*x2586)<<(x2587*x2588));

    if (t43 != 12981) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x2629 = 2;
	volatile uint16_t x2630 = 0U;
	static volatile uint32_t x2631 = UINT32_MAX;
	int8_t x2632 = -1;
	volatile int32_t t44 = 196;

    t44 = ((x2629*x2630)<<(x2631*x2632));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2649 = INT64_MIN;
	uint8_t x2650 = 0U;
	uint8_t x2651 = 0U;
	volatile int16_t x2652 = -1;
	static int64_t t45 = 6587LL;

    t45 = ((x2649*x2650)<<(x2651*x2652));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x2685 = INT64_MAX;
	uint64_t x2686 = 790035687809785308LLU;
	uint64_t t46 = 14LLU;

    t46 = ((x2685*x2686)<<(x2687*x2688));

    if (t46 != 5806173068752986688LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x2753 = INT8_MIN;
	uint16_t x2755 = 673U;
	uint8_t x2756 = 0U;
	uint32_t t47 = 3551772U;

    t47 = ((x2753*x2754)<<(x2755*x2756));

    if (t47 != 4294960640U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x2845 = INT16_MAX;
	static uint16_t x2846 = 0U;
	int64_t x2848 = -29099298LL;
	volatile int32_t t48 = 0;

    t48 = ((x2845*x2846)<<(x2847*x2848));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x2869 = UINT16_MAX;
	static int8_t x2870 = INT8_MAX;
	int8_t x2871 = -1;

    t49 = ((x2869*x2870)<<(x2871*x2872));

    if (t49 != 16645890) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x3045 = -1LL;
	int32_t x3046 = -1;
	int8_t x3047 = 0;
	int64_t t50 = -1077501738LL;

    t50 = ((x3045*x3046)<<(x3047*x3048));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x3069 = -43;
	static volatile uint64_t x3070 = UINT64_MAX;
	int16_t x3071 = -2;
	uint32_t x3072 = UINT32_MAX;
	uint64_t t51 = 3674LLU;

    t51 = ((x3069*x3070)<<(x3071*x3072));

    if (t51 != 172LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x3109 = INT32_MAX;
	uint64_t x3110 = 5352389106746LLU;
	static int32_t x3111 = -1;
	int16_t x3112 = -1;
	static volatile uint64_t t52 = 18912431969LLU;

    t52 = ((x3109*x3110)<<(x3111*x3112));

    if (t52 != 3693042393843451788LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x3253 = -1;
	uint32_t x3254 = 18U;
	static volatile int64_t x3255 = INT64_MIN;
	uint16_t x3256 = 0U;

    t53 = ((x3253*x3254)<<(x3255*x3256));

    if (t53 != 4294967278U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3345 = -1;
	int64_t x3346 = -1LL;
	uint32_t x3347 = 18U;
	int32_t x3348 = INT32_MIN;
	volatile int64_t t54 = -1LL;

    t54 = ((x3345*x3346)<<(x3347*x3348));

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x3541 = -1;
	uint64_t x3542 = 17LLU;
	uint8_t x3543 = 0U;
	uint16_t x3544 = 4079U;
	static volatile uint64_t t55 = 304094LLU;

    t55 = ((x3541*x3542)<<(x3543*x3544));

    if (t55 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x3649 = 3U;
	int32_t x3651 = INT32_MIN;
	uint32_t x3652 = 17516392U;
	int32_t t56 = 1;

    t56 = ((x3649*x3650)<<(x3651*x3652));

    if (t56 != 40113) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x3657 = -1;
	int16_t x3658 = INT16_MIN;
	int8_t x3659 = 24;
	volatile int32_t t57 = 41;

    t57 = ((x3657*x3658)<<(x3659*x3660));

    if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x3777 = -52;
	int32_t x3778 = -7;
	uint64_t x3779 = 51408LLU;
	int8_t x3780 = 0;
	volatile int32_t t58 = -3;

    t58 = ((x3777*x3778)<<(x3779*x3780));

    if (t58 != 364) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x3913 = 27357966LLU;
	int8_t x3914 = INT8_MIN;
	volatile int8_t x3915 = -23;
	uint32_t x3916 = UINT32_MAX;
	volatile uint64_t t59 = 726454115LLU;

    t59 = ((x3913*x3914)<<(x3915*x3916));

    if (t59 != 18417368681395781632LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x3917 = UINT32_MAX;
	uint32_t x3918 = 600481343U;
	int8_t x3920 = -1;
	uint32_t t60 = 456U;

    t60 = ((x3917*x3918)<<(x3919*x3920));

    if (t60 != 3094004610U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x4009 = UINT32_MAX;
	static volatile uint32_t x4010 = 31021330U;
	int8_t x4011 = -14;
	int64_t x4012 = -1LL;
	static volatile uint32_t t61 = 7830515U;

    t61 = ((x4009*x4010)<<(x4011*x4012));

    if (t61 != 2847637504U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x4036 = 2U;
	static volatile int64_t t62 = -14596LL;

    t62 = ((x4033*x4034)<<(x4035*x4036));

    if (t62 != 174420LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x4109 = INT16_MIN;
	uint32_t x4110 = UINT32_MAX;
	volatile uint32_t x4112 = UINT32_MAX;
	static uint32_t t63 = 1813163U;

    t63 = ((x4109*x4110)<<(x4111*x4112));

    if (t63 != 32768U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x4121 = 8U;
	int32_t x4122 = 4375;
	static int32_t x4123 = INT32_MIN;
	int8_t x4124 = 0;

    t64 = ((x4121*x4122)<<(x4123*x4124));

    if (t64 != 35000) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x4133 = 19489LL;
	uint8_t x4134 = UINT8_MAX;
	uint32_t x4135 = UINT32_MAX;
	int32_t x4136 = -1;
	static int64_t t65 = 1391596383601034877LL;

    t65 = ((x4133*x4134)<<(x4135*x4136));

    if (t65 != 9939390LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x4173 = UINT32_MAX;
	uint8_t x4174 = UINT8_MAX;
	uint64_t x4175 = UINT64_MAX;
	int64_t x4176 = -1LL;
	volatile uint32_t t66 = 10U;

    t66 = ((x4173*x4174)<<(x4175*x4176));

    if (t66 != 4294966786U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x4230 = -3001;
	int8_t x4231 = -1;
	int64_t x4232 = -1LL;
	uint32_t t67 = 43485103U;

    t67 = ((x4229*x4230)<<(x4231*x4232));

    if (t67 != 2066977584U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x4277 = UINT64_MAX;
	static volatile int32_t x4278 = -1;
	int16_t x4279 = 0;
	static int32_t x4280 = 45551;
	volatile uint64_t t68 = 385281137509LLU;

    t68 = ((x4277*x4278)<<(x4279*x4280));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x4385 = -1898;
	static int8_t x4386 = INT8_MIN;
	uint8_t x4388 = 0U;
	static volatile int32_t t69 = -15583216;

    t69 = ((x4385*x4386)<<(x4387*x4388));

    if (t69 != 242944) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x4473 = 20LLU;
	int16_t x4474 = INT16_MAX;
	int8_t x4476 = INT8_MAX;
	static volatile uint64_t t70 = 1308954093922993197LLU;

    t70 = ((x4473*x4474)<<(x4475*x4476));

    if (t70 != 655340LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x4641 = 0;
	uint8_t x4642 = 1U;
	static int16_t x4643 = 0;
	int32_t x4644 = INT32_MIN;
	volatile int32_t t71 = -3;

    t71 = ((x4641*x4642)<<(x4643*x4644));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x4665 = -1LL;
	uint64_t x4666 = UINT64_MAX;
	int8_t x4667 = -1;
	volatile int64_t x4668 = -1LL;
	volatile uint64_t t72 = 105298593980581228LLU;

    t72 = ((x4665*x4666)<<(x4667*x4668));

    if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x4705 = 964;
	uint8_t x4706 = 0U;
	int32_t x4707 = 0;
	int64_t x4708 = -1LL;
	int32_t t73 = 12;

    t73 = ((x4705*x4706)<<(x4707*x4708));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x4709 = -9;
	uint64_t x4710 = 6582067912375LLU;
	uint16_t x4711 = 6U;
	uint8_t x4712 = 5U;
	uint64_t t74 = 5738328975LLU;

    t74 = ((x4709*x4710)<<(x4711*x4712));

    if (t74 != 15845856895601475584LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x4785 = INT8_MIN;
	uint64_t x4786 = UINT64_MAX;
	static int8_t x4787 = INT8_MIN;
	volatile int16_t x4788 = 0;
	uint64_t t75 = 420795433725156LLU;

    t75 = ((x4785*x4786)<<(x4787*x4788));

    if (t75 != 128LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x4933 = 3148105659LLU;
	uint8_t x4934 = 0U;
	int64_t x4935 = INT64_MIN;
	uint16_t x4936 = 0U;
	uint64_t t76 = 5495LLU;

    t76 = ((x4933*x4934)<<(x4935*x4936));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x4965 = 9U;
	int8_t x4967 = INT8_MIN;
	volatile uint16_t x4968 = 0U;
	uint32_t t77 = 22U;

    t77 = ((x4965*x4966)<<(x4967*x4968));

    if (t77 != 799371U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x4993 = 27U;
	int16_t x4994 = 4441;
	volatile int32_t x4995 = -1;
	int16_t x4996 = -1;
	volatile uint32_t t78 = 10U;

    t78 = ((x4993*x4994)<<(x4995*x4996));

    if (t78 != 239814U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x5018 = 565167768902267593LLU;
	volatile uint8_t x5020 = 0U;
	static uint64_t t79 = 10073316752455LLU;

    t79 = ((x5017*x5018)<<(x5019*x5020));

    if (t79 != 12998858684752154639LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x5073 = 1LLU;
	volatile uint8_t x5075 = 0U;
	int32_t x5076 = INT32_MIN;
	uint64_t t80 = UINT64_MAX;

    t80 = ((x5073*x5074)<<(x5075*x5076));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x5109 = INT32_MIN;
	uint64_t x5110 = 1024600076633LLU;
	uint64_t x5111 = 0LLU;
	int64_t x5112 = -506905397324966LL;
	uint64_t t81 = 13LLU;

    t81 = ((x5109*x5110)<<(x5111*x5112));

    if (t81 != 13297378536231796736LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x5145 = 422654;
	int32_t x5146 = 5;
	int8_t x5147 = 0;
	volatile int32_t t82 = -525;

    t82 = ((x5145*x5146)<<(x5147*x5148));

    if (t82 != 2113270) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x5425 = 1;
	uint32_t x5426 = 3141084U;
	uint32_t t83 = 0U;

    t83 = ((x5425*x5426)<<(x5427*x5428));

    if (t83 != 3141084U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x5465 = UINT32_MAX;
	static int8_t x5466 = 2;
	uint64_t x5467 = 0LLU;
	static uint8_t x5468 = UINT8_MAX;

    t84 = ((x5465*x5466)<<(x5467*x5468));

    if (t84 != 4294967294U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x5485 = INT32_MIN;
	static uint32_t x5486 = 41713760U;
	int64_t x5488 = -1LL;
	uint32_t t85 = 827426U;

    t85 = ((x5485*x5486)<<(x5487*x5488));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x5553 = 7948758199996LL;
	int64_t x5554 = 14539LL;
	int8_t x5555 = 0;
	volatile int16_t x5556 = -736;
	int64_t t86 = -167177217088145LL;

    t86 = ((x5553*x5554)<<(x5555*x5556));

    if (t86 != 115566995469741844LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x5613 = -1;
	uint64_t x5614 = 1871604634823414LLU;
	volatile int8_t x5615 = 0;
	int64_t x5616 = -1LL;

    t87 = ((x5613*x5614)<<(x5615*x5616));

    if (t87 != 18444872469074728202LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x5661 = 5134;
	static uint8_t x5662 = UINT8_MAX;
	volatile int8_t x5663 = 0;
	int64_t x5664 = -2151090014840LL;
	volatile int32_t t88 = 462;

    t88 = ((x5661*x5662)<<(x5663*x5664));

    if (t88 != 1309170) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x5670 = INT8_MIN;
	int16_t x5671 = INT16_MIN;
	int32_t t89 = 502871;

    t89 = ((x5669*x5670)<<(x5671*x5672));

    if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x5674 = -381984LL;
	uint32_t x5675 = UINT32_MAX;
	int16_t x5676 = -1;
	int64_t t90 = 1171425981323423608LL;

    t90 = ((x5673*x5674)<<(x5675*x5676));

    if (t90 != 763968LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x5897 = -1;
	int16_t x5898 = INT16_MIN;
	volatile uint32_t x5899 = UINT32_MAX;
	static volatile int32_t t91 = -4;

    t91 = ((x5897*x5898)<<(x5899*x5900));

    if (t91 != 131072) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x5925 = 491316103U;
	static int8_t x5926 = 1;
	int64_t x5927 = -9409LL;
	uint8_t x5928 = 0U;
	uint32_t t92 = 0U;

    t92 = ((x5925*x5926)<<(x5927*x5928));

    if (t92 != 491316103U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x6017 = 140U;
	uint16_t x6019 = 50U;
	uint8_t x6020 = 0U;
	volatile uint32_t t93 = 325U;

    t93 = ((x6017*x6018)<<(x6019*x6020));

    if (t93 != 4294967156U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x6029 = 290U;
	uint8_t x6030 = UINT8_MAX;
	uint32_t x6031 = 37U;
	int16_t x6032 = 0;
	int32_t t94 = 33;

    t94 = ((x6029*x6030)<<(x6031*x6032));

    if (t94 != 73950) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x6097 = 942389955624305LLU;
	uint8_t x6098 = 14U;
	volatile int16_t x6099 = INT16_MAX;
	static uint16_t x6100 = 0U;
	static volatile uint64_t t95 = 46320756334269LLU;

    t95 = ((x6097*x6098)<<(x6099*x6100));

    if (t95 != 13193459378740270LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x6101 = -8080;
	static volatile int32_t x6102 = -120;
	static int8_t x6103 = INT8_MIN;
	volatile int32_t t96 = 981;

    t96 = ((x6101*x6102)<<(x6103*x6104));

    if (t96 != 969600) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x6361 = 563LLU;
	int16_t x6362 = -2;
	static int64_t x6364 = INT64_MIN;

    t97 = ((x6361*x6362)<<(x6363*x6364));

    if (t97 != 18446744073709550490LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x6553 = INT32_MIN;
	int16_t x6556 = 0;
	static uint64_t t98 = 116172960LLU;

    t98 = ((x6553*x6554)<<(x6555*x6556));

    if (t98 != 18446744060824649728LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x6617 = 3218719U;
	static int32_t x6618 = INT32_MAX;
	int8_t x6619 = -5;
	int16_t x6620 = -1;
	volatile uint32_t t99 = 2U;

    t99 = ((x6617*x6618)<<(x6619*x6620));

    if (t99 != 4191968288U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x6689 = -1;
	int8_t x6690 = -1;
	uint64_t x6691 = UINT64_MAX;
	volatile int64_t x6692 = -1LL;
	volatile int32_t t100 = 0;

    t100 = ((x6689*x6690)<<(x6691*x6692));

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x6810 = UINT8_MAX;
	uint64_t t101 = 6840839083390727333LLU;

    t101 = ((x6809*x6810)<<(x6811*x6812));

    if (t101 != 18446744073709290496LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint32_t x7017 = 51781063U;
	uint8_t x7019 = 2U;
	volatile uint32_t t102 = 190U;

    t102 = ((x7017*x7018)<<(x7019*x7020));

    if (t102 != 534976228U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x7177 = -1;
	static uint32_t x7178 = 2U;
	uint64_t x7179 = UINT64_MAX;
	int64_t x7180 = -1LL;
	volatile uint32_t t103 = 7U;

    t103 = ((x7177*x7178)<<(x7179*x7180));

    if (t103 != 4294967292U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x7233 = INT16_MIN;
	int16_t x7234 = INT16_MIN;
	volatile uint32_t x7235 = 35078273U;
	int8_t x7236 = 0;
	int32_t t104 = 3112;

    t104 = ((x7233*x7234)<<(x7235*x7236));

    if (t104 != 1073741824) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x7333 = INT8_MAX;
	int64_t x7334 = 16801LL;
	int64_t x7335 = -1LL;
	int64_t x7336 = -1LL;
	int64_t t105 = 11305LL;

    t105 = ((x7333*x7334)<<(x7335*x7336));

    if (t105 != 4267454LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x7362 = 48224LLU;
	volatile int64_t x7363 = -247640LL;
	int8_t x7364 = 0;
	uint64_t t106 = 51934489696851630LLU;

    t106 = ((x7361*x7362)<<(x7363*x7364));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x7577 = 48LLU;
	int32_t x7578 = -5;
	volatile int32_t x7579 = -1;
	int8_t x7580 = -1;
	volatile uint64_t t107 = 2032399391501LLU;

    t107 = ((x7577*x7578)<<(x7579*x7580));

    if (t107 != 18446744073709551136LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x7593 = UINT64_MAX;
	int8_t x7594 = INT8_MIN;
	uint16_t x7595 = 0U;
	volatile uint64_t t108 = 4522260LLU;

    t108 = ((x7593*x7594)<<(x7595*x7596));

    if (t108 != 128LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x7873 = 8U;
	static uint64_t x7874 = 12318LLU;
	int32_t x7875 = INT32_MIN;
	uint32_t x7876 = 4635042U;
	volatile uint64_t t109 = 612526864784186704LLU;

    t109 = ((x7873*x7874)<<(x7875*x7876));

    if (t109 != 98544LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x7889 = 984884277410029LLU;
	volatile int8_t x7890 = INT8_MIN;
	int8_t x7892 = -18;
	volatile uint64_t t110 = 1073LLU;

    t110 = ((x7889*x7890)<<(x7891*x7892));

    if (t110 != 9332865863562297344LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x7953 = INT8_MIN;
	int16_t x7954 = -1;
	int16_t x7955 = 0;
	int32_t t111 = -21463;

    t111 = ((x7953*x7954)<<(x7955*x7956));

    if (t111 != 128) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x7998 = 2U;
	int8_t x7999 = -1;
	int64_t t112 = 8951738439754960LL;

    t112 = ((x7997*x7998)<<(x7999*x8000));

    if (t112 != 11944785144603708LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x8037 = -324;
	uint64_t x8038 = UINT64_MAX;
	int8_t x8039 = 25;
	uint16_t x8040 = 0U;
	uint64_t t113 = 1439350789LLU;

    t113 = ((x8037*x8038)<<(x8039*x8040));

    if (t113 != 324LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x8161 = -1;
	uint32_t x8162 = 2943U;
	static int64_t x8163 = -1LL;
	int64_t x8164 = -1LL;
	uint32_t t114 = 101259824U;

    t114 = ((x8161*x8162)<<(x8163*x8164));

    if (t114 != 4294961410U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x8425 = 116U;
	volatile int16_t x8426 = INT16_MIN;
	static volatile uint32_t x8428 = UINT32_MAX;
	static volatile uint32_t t115 = 1509370059U;

    t115 = ((x8425*x8426)<<(x8427*x8428));

    if (t115 != 4287365120U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x8481 = INT8_MIN;
	int64_t x8482 = -1LL;
	volatile int64_t x8483 = -801152621483532LL;
	uint8_t x8484 = 0U;
	volatile int64_t t116 = 6298LL;

    t116 = ((x8481*x8482)<<(x8483*x8484));

    if (t116 != 128LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x8737 = 1558271341LLU;
	int32_t x8738 = -1;
	uint16_t x8739 = 10U;
	uint8_t x8740 = 1U;
	uint64_t t117 = 0LLU;

    t117 = ((x8737*x8738)<<(x8739*x8740));

    if (t117 != 18446742478039698432LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x8769 = UINT32_MAX;
	int8_t x8770 = 1;
	static volatile int32_t x8771 = -1;
	uint8_t x8772 = 0U;
	static volatile uint32_t t118 = UINT32_MAX;

    t118 = ((x8769*x8770)<<(x8771*x8772));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x8857 = INT8_MIN;
	static int16_t x8859 = 0;
	int16_t x8860 = 15;
	uint32_t t119 = 8509U;

    t119 = ((x8857*x8858)<<(x8859*x8860));

    if (t119 != 4293045760U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x8910 = -974;
	volatile int8_t x8911 = 2;
	volatile int16_t x8912 = 2;
	int32_t t120 = -1203330;

    t120 = ((x8909*x8910)<<(x8911*x8912));

    if (t120 != 510656512) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x9161 = -1;
	static int64_t x9162 = -1LL;
	int16_t x9163 = -2;
	volatile uint64_t x9164 = UINT64_MAX;
	int64_t t121 = 10517637LL;

    t121 = ((x9161*x9162)<<(x9163*x9164));

    if (t121 != 4LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x9333 = -1;
	int8_t x9334 = 0;
	volatile uint16_t x9335 = UINT16_MAX;
	uint16_t x9336 = 0U;

    t122 = ((x9333*x9334)<<(x9335*x9336));

    if (t122 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();


    return 0;
}

