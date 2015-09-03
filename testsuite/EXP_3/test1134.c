#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x85 = INT32_MIN;
static int8_t x101 = INT8_MIN;
static int32_t t2 = 0;
volatile uint8_t x122 = 18U;
uint32_t x123 = UINT32_MAX;
volatile uint32_t x124 = 26U;
volatile uint64_t x510 = 159697811LLU;
uint32_t x511 = 716551U;
int8_t x512 = 3;
int8_t x528 = 13;
uint64_t x562 = UINT64_MAX;
static int64_t x585 = INT64_MIN;
uint16_t x650 = UINT16_MAX;
int8_t x651 = 7;
volatile uint8_t x652 = 12U;
uint32_t x710 = 29U;
int8_t x726 = -3;
volatile int32_t t13 = 5187;
volatile uint64_t x837 = 178429005993LLU;
uint16_t x932 = 5U;
uint16_t x1137 = 1U;
uint32_t t18 = 6977362U;
uint64_t x1374 = UINT64_MAX;
uint64_t x1375 = UINT64_MAX;
int16_t x1407 = INT16_MAX;
uint16_t x1408 = 22U;
volatile uint8_t x1421 = UINT8_MAX;
int64_t x1422 = INT64_MIN;
static uint16_t x1424 = 1U;
int16_t x1517 = -33;
int8_t x1524 = 3;
static uint32_t x1707 = UINT32_MAX;
uint32_t t29 = 129U;
int32_t x1817 = INT32_MAX;
static volatile int32_t t32 = -1;
uint16_t x1941 = 13U;
int8_t x1943 = 1;
uint8_t x1944 = 1U;
uint64_t x2041 = 968236LLU;
static volatile uint8_t x2044 = 1U;
int32_t t42 = 1342050;
volatile int8_t x2253 = -14;
static uint8_t x2255 = 110U;
volatile int32_t x2299 = 12206827;
volatile uint8_t x2300 = 20U;
volatile int8_t x2370 = 7;
volatile int32_t t46 = 12537;
int32_t x2617 = -20;
volatile uint32_t t48 = 200581U;
volatile uint16_t x2636 = 0U;
uint32_t x2751 = 6624U;
int16_t x2788 = 1;
int32_t x2875 = INT32_MAX;
int16_t x2876 = 10;
volatile int8_t x2914 = INT8_MIN;
uint16_t x2916 = 3U;
int8_t x3038 = -1;
volatile int64_t t57 = 921567840240256LL;
volatile int32_t x3155 = INT32_MAX;
volatile int32_t t58 = 279;
uint32_t x3167 = UINT32_MAX;
uint32_t t60 = UINT32_MAX;
uint32_t x3204 = 6U;
int32_t x3289 = -1;
int16_t x3292 = 12;
volatile uint64_t t65 = 592070732956996239LLU;
static int64_t x3435 = 17LL;
int64_t t66 = 4LL;
int64_t x3621 = INT64_MIN;
static volatile uint64_t t68 = 2524827849257LLU;
int64_t x3842 = INT64_MIN;
int32_t t74 = -24201113;
int8_t x4022 = -1;
uint32_t x4065 = 3514967U;
uint64_t x4098 = 13405800441933779LLU;
volatile uint8_t x4124 = 0U;
int8_t x4128 = 39;
volatile uint8_t x4201 = UINT8_MAX;
uint8_t x4203 = UINT8_MAX;
int64_t x4222 = INT64_MIN;
int32_t x4223 = INT32_MAX;
uint64_t x4247 = 3789120958813699LLU;
int8_t x4288 = 14;
uint32_t x4291 = 62414U;
volatile int8_t x4364 = 14;
volatile int32_t t90 = -1;
uint8_t x4657 = UINT8_MAX;
uint32_t x4659 = UINT32_MAX;
volatile uint32_t t91 = 801U;
volatile uint64_t x4794 = 14978478639086LLU;
int32_t t92 = 12837989;
volatile uint32_t x4812 = 1U;
int64_t t94 = 1146698499LL;
uint32_t x4882 = 1135U;
uint64_t t95 = 21949611LLU;
uint64_t x5041 = UINT64_MAX;
int16_t x5043 = INT16_MAX;
volatile int32_t t97 = -1395178;
uint8_t x5152 = 1U;
int32_t t99 = 121017109;


void f0(void) {
	int64_t x45 = INT64_MAX;
	static int32_t x46 = -768;
	uint64_t x47 = 818LLU;
	static uint64_t x48 = 44LLU;
	volatile uint64_t t0 = 755148LLU;

	t0 = ((x45<=x46)*(x47>>x48));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x86 = UINT8_MAX;
	volatile uint64_t x87 = 847243145990LLU;
	volatile int8_t x88 = 3;
	static uint64_t t1 = 2740399803065LLU;

	t1 = ((x85<=x86)*(x87>>x88));

	if (t1 != 105905393248LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x102 = 30201131;
	volatile uint8_t x103 = 0U;
	static int32_t x104 = 11;

	t2 = ((x101<=x102)*(x103>>x104));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x121 = UINT32_MAX;
	volatile uint32_t t3 = 20U;

	t3 = ((x121<=x122)*(x123>>x124));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x385 = 2LLU;
	int32_t x386 = INT32_MAX;
	int8_t x387 = 1;
	static int8_t x388 = 11;
	volatile int32_t t4 = -23627;

	t4 = ((x385<=x386)*(x387>>x388));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x509 = INT16_MIN;
	uint32_t t5 = 612U;

	t5 = ((x509<=x510)*(x511>>x512));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x525 = INT64_MIN;
	volatile uint16_t x526 = 5U;
	uint64_t x527 = UINT64_MAX;
	static volatile uint64_t t6 = 38908224LLU;

	t6 = ((x525<=x526)*(x527>>x528));

	if (t6 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x545 = 29U;
	uint8_t x546 = 1U;
	static int64_t x547 = INT64_MAX;
	volatile uint64_t x548 = 58LLU;
	int64_t t7 = -343660352LL;

	t7 = ((x545<=x546)*(x547>>x548));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x561 = UINT64_MAX;
	uint32_t x563 = 33U;
	uint64_t x564 = 26LLU;
	uint32_t t8 = 234U;

	t8 = ((x561<=x562)*(x563>>x564));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x586 = 1;
	int64_t x587 = INT64_MAX;
	static uint8_t x588 = 0U;
	static int64_t t9 = INT64_MAX;

	t9 = ((x585<=x586)*(x587>>x588));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x649 = INT8_MAX;
	static volatile int32_t t10 = 443391691;

	t10 = ((x649<=x650)*(x651>>x652));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x709 = INT32_MIN;
	uint64_t x711 = UINT64_MAX;
	volatile uint16_t x712 = 0U;
	volatile uint64_t t11 = 3385985931451004LLU;

	t11 = ((x709<=x710)*(x711>>x712));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x725 = 13600;
	uint8_t x727 = UINT8_MAX;
	uint64_t x728 = 17LLU;
	volatile int32_t t12 = 49;

	t12 = ((x725<=x726)*(x727>>x728));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x769 = -37;
	int16_t x770 = 2;
	volatile uint16_t x771 = UINT16_MAX;
	volatile uint8_t x772 = 5U;

	t13 = ((x769<=x770)*(x771>>x772));

	if (t13 != 2047) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x813 = INT16_MIN;
	int32_t x814 = -254;
	static uint32_t x815 = UINT32_MAX;
	uint16_t x816 = 0U;
	uint32_t t14 = UINT32_MAX;

	t14 = ((x813<=x814)*(x815>>x816));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x838 = -1;
	uint32_t x839 = 101772U;
	uint8_t x840 = 2U;
	volatile uint32_t t15 = 13U;

	t15 = ((x837<=x838)*(x839>>x840));

	if (t15 != 25443U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x897 = UINT32_MAX;
	static int16_t x898 = -1;
	volatile uint8_t x899 = 0U;
	int16_t x900 = 1;
	volatile int32_t t16 = -6293;

	t16 = ((x897<=x898)*(x899>>x900));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x929 = 49U;
	volatile int8_t x930 = INT8_MIN;
	int32_t x931 = 15588825;
	volatile int32_t t17 = 7902;

	t17 = ((x929<=x930)*(x931>>x932));

	if (t17 != 487150) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1138 = -3LL;
	uint32_t x1139 = UINT32_MAX;
	uint8_t x1140 = 1U;

	t18 = ((x1137<=x1138)*(x1139>>x1140));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1241 = 6;
	int16_t x1242 = -1;
	uint8_t x1243 = UINT8_MAX;
	uint8_t x1244 = 1U;
	int32_t t19 = 934377331;

	t19 = ((x1241<=x1242)*(x1243>>x1244));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1361 = 273575U;
	static volatile int32_t x1362 = -259;
	int64_t x1363 = INT64_MAX;
	uint8_t x1364 = 57U;
	static volatile int64_t t20 = -1085500734271764LL;

	t20 = ((x1361<=x1362)*(x1363>>x1364));

	if (t20 != 63LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1373 = INT8_MIN;
	static uint8_t x1376 = 0U;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = ((x1373<=x1374)*(x1375>>x1376));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1405 = UINT16_MAX;
	int16_t x1406 = INT16_MIN;
	int32_t t22 = 321751;

	t22 = ((x1405<=x1406)*(x1407>>x1408));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1423 = INT64_MAX;
	volatile int64_t t23 = 140022828LL;

	t23 = ((x1421<=x1422)*(x1423>>x1424));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1518 = INT64_MIN;
	int16_t x1519 = 615;
	static uint16_t x1520 = 7U;
	static int32_t t24 = 470;

	t24 = ((x1517<=x1518)*(x1519>>x1520));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1521 = INT32_MIN;
	static int64_t x1522 = 6626685375645017LL;
	volatile uint32_t x1523 = UINT32_MAX;
	static uint32_t t25 = 6U;

	t25 = ((x1521<=x1522)*(x1523>>x1524));

	if (t25 != 536870911U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1565 = 2708LLU;
	static volatile int16_t x1566 = -51;
	static volatile uint64_t x1567 = 121050559541LLU;
	static int16_t x1568 = 1;
	uint64_t t26 = 53LLU;

	t26 = ((x1565<=x1566)*(x1567>>x1568));

	if (t26 != 60525279770LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1569 = 3U;
	int8_t x1570 = -3;
	uint64_t x1571 = 1143756483861566684LLU;
	int64_t x1572 = 27LL;
	static volatile uint64_t t27 = 15663355LLU;

	t27 = ((x1569<=x1570)*(x1571>>x1572));

	if (t27 != 8521649866LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1697 = 2361448742LLU;
	static int64_t x1698 = -16669759930678485LL;
	volatile uint64_t x1699 = UINT64_MAX;
	volatile uint8_t x1700 = 55U;
	uint64_t t28 = 2898741545822027LLU;

	t28 = ((x1697<=x1698)*(x1699>>x1700));

	if (t28 != 511LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1705 = INT32_MIN;
	uint8_t x1706 = 101U;
	uint8_t x1708 = 19U;

	t29 = ((x1705<=x1706)*(x1707>>x1708));

	if (t29 != 8191U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x1729 = -1LL;
	volatile uint8_t x1730 = UINT8_MAX;
	volatile uint8_t x1731 = UINT8_MAX;
	uint64_t x1732 = 11LLU;
	volatile int32_t t30 = -87;

	t30 = ((x1729<=x1730)*(x1731>>x1732));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1809 = UINT64_MAX;
	int32_t x1810 = -1;
	uint64_t x1811 = 15LLU;
	uint64_t x1812 = 5LLU;
	volatile uint64_t t31 = 348215707615LLU;

	t31 = ((x1809<=x1810)*(x1811>>x1812));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1818 = 1LLU;
	uint16_t x1819 = 323U;
	uint8_t x1820 = 6U;

	t32 = ((x1817<=x1818)*(x1819>>x1820));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1942 = 327946037;
	volatile int32_t t33 = 57;

	t33 = ((x1941<=x1942)*(x1943>>x1944));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1949 = INT64_MIN;
	uint8_t x1950 = UINT8_MAX;
	uint8_t x1951 = UINT8_MAX;
	volatile uint8_t x1952 = 2U;
	volatile int32_t t34 = -10742;

	t34 = ((x1949<=x1950)*(x1951>>x1952));

	if (t34 != 63) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2005 = 11U;
	volatile int16_t x2006 = INT16_MIN;
	uint64_t x2007 = 407869813795LLU;
	static uint16_t x2008 = 7U;
	uint64_t t35 = 1130810794757602LLU;

	t35 = ((x2005<=x2006)*(x2007>>x2008));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2042 = -207;
	int16_t x2043 = INT16_MAX;
	int32_t t36 = -1138318;

	t36 = ((x2041<=x2042)*(x2043>>x2044));

	if (t36 != 16383) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2125 = 28;
	volatile uint8_t x2126 = UINT8_MAX;
	int64_t x2127 = INT64_MAX;
	static uint32_t x2128 = 1U;
	int64_t t37 = 31268654LL;

	t37 = ((x2125<=x2126)*(x2127>>x2128));

	if (t37 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2141 = 40044;
	uint64_t x2142 = 3616699755762725098LLU;
	uint64_t x2143 = 139259LLU;
	uint8_t x2144 = 3U;
	uint64_t t38 = 74239578240LLU;

	t38 = ((x2141<=x2142)*(x2143>>x2144));

	if (t38 != 17407LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2145 = -1;
	static int16_t x2146 = INT16_MIN;
	uint8_t x2147 = UINT8_MAX;
	uint8_t x2148 = 7U;
	int32_t t39 = 2830103;

	t39 = ((x2145<=x2146)*(x2147>>x2148));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2149 = INT64_MIN;
	static int64_t x2150 = INT64_MAX;
	volatile uint32_t x2151 = 486U;
	volatile uint64_t x2152 = 0LLU;
	uint32_t t40 = 7003U;

	t40 = ((x2149<=x2150)*(x2151>>x2152));

	if (t40 != 486U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2205 = 11529;
	int64_t x2206 = -1522873239LL;
	uint16_t x2207 = UINT16_MAX;
	volatile uint8_t x2208 = 7U;
	static int32_t t41 = 24;

	t41 = ((x2205<=x2206)*(x2207>>x2208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2249 = INT8_MIN;
	uint64_t x2250 = UINT64_MAX;
	int16_t x2251 = 838;
	uint8_t x2252 = 0U;

	t42 = ((x2249<=x2250)*(x2251>>x2252));

	if (t42 != 838) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x2254 = 1U;
	volatile uint16_t x2256 = 0U;
	static int32_t t43 = -61595869;

	t43 = ((x2253<=x2254)*(x2255>>x2256));

	if (t43 != 110) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2297 = -165LL;
	static int32_t x2298 = INT32_MAX;
	volatile int32_t t44 = -6305;

	t44 = ((x2297<=x2298)*(x2299>>x2300));

	if (t44 != 11) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2369 = UINT32_MAX;
	static volatile uint32_t x2371 = UINT32_MAX;
	int32_t x2372 = 0;
	volatile uint32_t t45 = 11846U;

	t45 = ((x2369<=x2370)*(x2371>>x2372));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2565 = 3683413432148LLU;
	volatile int16_t x2566 = -1242;
	uint8_t x2567 = UINT8_MAX;
	uint16_t x2568 = 24U;

	t46 = ((x2565<=x2566)*(x2567>>x2568));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2618 = 2U;
	int64_t x2619 = INT64_MAX;
	uint8_t x2620 = 61U;
	int64_t t47 = 6635931LL;

	t47 = ((x2617<=x2618)*(x2619>>x2620));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2625 = 21U;
	static volatile int64_t x2626 = 3240545153931101907LL;
	uint32_t x2627 = UINT32_MAX;
	static volatile int8_t x2628 = 4;

	t48 = ((x2625<=x2626)*(x2627>>x2628));

	if (t48 != 268435455U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2633 = -2045467788LL;
	int16_t x2634 = INT16_MIN;
	volatile uint16_t x2635 = 234U;
	static int32_t t49 = 105287;

	t49 = ((x2633<=x2634)*(x2635>>x2636));

	if (t49 != 234) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2685 = -1;
	static volatile uint32_t x2686 = UINT32_MAX;
	uint16_t x2687 = 11U;
	static uint8_t x2688 = 2U;
	volatile int32_t t50 = -3484617;

	t50 = ((x2685<=x2686)*(x2687>>x2688));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2713 = 3U;
	uint16_t x2714 = 11694U;
	uint8_t x2715 = 13U;
	int64_t x2716 = 0LL;
	int32_t t51 = 19687882;

	t51 = ((x2713<=x2714)*(x2715>>x2716));

	if (t51 != 13) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2749 = INT16_MAX;
	int8_t x2750 = INT8_MIN;
	uint8_t x2752 = 1U;
	volatile uint32_t t52 = 11236U;

	t52 = ((x2749<=x2750)*(x2751>>x2752));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2785 = -1;
	int32_t x2786 = -27;
	int64_t x2787 = INT64_MAX;
	volatile int64_t t53 = -2855067LL;

	t53 = ((x2785<=x2786)*(x2787>>x2788));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2873 = UINT16_MAX;
	static volatile int32_t x2874 = INT32_MAX;
	static volatile int32_t t54 = -212851;

	t54 = ((x2873<=x2874)*(x2875>>x2876));

	if (t54 != 2097151) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x2913 = 86U;
	int16_t x2915 = INT16_MAX;
	volatile int32_t t55 = -30;

	t55 = ((x2913<=x2914)*(x2915>>x2916));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2921 = -3388609LL;
	int64_t x2922 = INT64_MAX;
	volatile int64_t x2923 = INT64_MAX;
	uint8_t x2924 = 2U;
	volatile int64_t t56 = 3765702440LL;

	t56 = ((x2921<=x2922)*(x2923>>x2924));

	if (t56 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3037 = INT32_MIN;
	int64_t x3039 = INT64_MAX;
	volatile uint16_t x3040 = 8U;

	t57 = ((x3037<=x3038)*(x3039>>x3040));

	if (t57 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3153 = -5;
	uint8_t x3154 = 2U;
	volatile int8_t x3156 = 2;

	t58 = ((x3153<=x3154)*(x3155>>x3156));

	if (t58 != 536870911) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x3161 = -84;
	volatile uint32_t x3162 = 22173340U;
	volatile int8_t x3163 = INT8_MAX;
	static int8_t x3164 = 7;
	int32_t t59 = 133820957;

	t59 = ((x3161<=x3162)*(x3163>>x3164));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3165 = 8581515U;
	int8_t x3166 = -1;
	static uint8_t x3168 = 0U;

	t60 = ((x3165<=x3166)*(x3167>>x3168));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3201 = -1;
	uint16_t x3202 = 14757U;
	uint64_t x3203 = UINT64_MAX;
	uint64_t t61 = 371191879LLU;

	t61 = ((x3201<=x3202)*(x3203>>x3204));

	if (t61 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3229 = UINT8_MAX;
	volatile int16_t x3230 = 931;
	volatile uint32_t x3231 = 871986U;
	int8_t x3232 = 0;
	volatile uint32_t t62 = 965335U;

	t62 = ((x3229<=x3230)*(x3231>>x3232));

	if (t62 != 871986U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3281 = 8628217797157LL;
	volatile int32_t x3282 = INT32_MAX;
	static int32_t x3283 = INT32_MAX;
	uint8_t x3284 = 9U;
	volatile int32_t t63 = -6847;

	t63 = ((x3281<=x3282)*(x3283>>x3284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3290 = 1;
	uint64_t x3291 = 376059659981LLU;
	volatile uint64_t t64 = 251994414501359LLU;

	t64 = ((x3289<=x3290)*(x3291>>x3292));

	if (t64 != 91811440LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3405 = 7U;
	int16_t x3406 = INT16_MIN;
	uint64_t x3407 = 1418548156789940LLU;
	volatile int8_t x3408 = 3;

	t65 = ((x3405<=x3406)*(x3407>>x3408));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3433 = 9310U;
	int8_t x3434 = INT8_MIN;
	volatile int32_t x3436 = 5;

	t66 = ((x3433<=x3434)*(x3435>>x3436));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3497 = 50U;
	uint32_t x3498 = UINT32_MAX;
	uint16_t x3499 = 3407U;
	int8_t x3500 = 3;
	int32_t t67 = -2075943;

	t67 = ((x3497<=x3498)*(x3499>>x3500));

	if (t67 != 425) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x3622 = 521782715U;
	volatile uint64_t x3623 = UINT64_MAX;
	int64_t x3624 = 19LL;

	t68 = ((x3621<=x3622)*(x3623>>x3624));

	if (t68 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3653 = 1U;
	int16_t x3654 = -46;
	uint64_t x3655 = 119643420LLU;
	uint8_t x3656 = 7U;
	volatile uint64_t t69 = 5619031302LLU;

	t69 = ((x3653<=x3654)*(x3655>>x3656));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x3661 = UINT32_MAX;
	int64_t x3662 = -1LL;
	int32_t x3663 = 25;
	static int8_t x3664 = 1;
	static volatile int32_t t70 = -3673;

	t70 = ((x3661<=x3662)*(x3663>>x3664));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3681 = INT32_MIN;
	int8_t x3682 = -25;
	uint8_t x3683 = 2U;
	volatile uint8_t x3684 = 0U;
	static int32_t t71 = -11064;

	t71 = ((x3681<=x3682)*(x3683>>x3684));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3841 = 12U;
	int64_t x3843 = INT64_MAX;
	static int16_t x3844 = 0;
	static volatile int64_t t72 = 52504959173LL;

	t72 = ((x3841<=x3842)*(x3843>>x3844));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3933 = INT32_MIN;
	int64_t x3934 = -1LL;
	static volatile uint8_t x3935 = 87U;
	int16_t x3936 = 15;
	int32_t t73 = -30;

	t73 = ((x3933<=x3934)*(x3935>>x3936));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3981 = INT32_MIN;
	static int64_t x3982 = INT64_MIN;
	int16_t x3983 = 1;
	static int16_t x3984 = 15;

	t74 = ((x3981<=x3982)*(x3983>>x3984));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4021 = 222822;
	static uint32_t x4023 = 210275U;
	uint8_t x4024 = 1U;
	volatile uint32_t t75 = 5904638U;

	t75 = ((x4021<=x4022)*(x4023>>x4024));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4066 = -1;
	volatile uint64_t x4067 = 10028581690LLU;
	volatile uint8_t x4068 = 1U;
	volatile uint64_t t76 = 7LLU;

	t76 = ((x4065<=x4066)*(x4067>>x4068));

	if (t76 != 5014290845LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4081 = INT16_MIN;
	int16_t x4082 = INT16_MIN;
	int16_t x4083 = INT16_MAX;
	uint16_t x4084 = 0U;
	volatile int32_t t77 = -16795556;

	t77 = ((x4081<=x4082)*(x4083>>x4084));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x4097 = INT8_MIN;
	static uint16_t x4099 = 206U;
	volatile int32_t x4100 = 8;
	int32_t t78 = 352;

	t78 = ((x4097<=x4098)*(x4099>>x4100));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4121 = 8U;
	static uint32_t x4122 = UINT32_MAX;
	int64_t x4123 = INT64_MAX;
	volatile int64_t t79 = INT64_MAX;

	t79 = ((x4121<=x4122)*(x4123>>x4124));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x4125 = UINT16_MAX;
	uint16_t x4126 = 1750U;
	int64_t x4127 = 3103836LL;
	volatile int64_t t80 = 58562914LL;

	t80 = ((x4125<=x4126)*(x4127>>x4128));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4173 = 190U;
	int64_t x4174 = -1LL;
	uint16_t x4175 = 118U;
	static volatile uint8_t x4176 = 24U;
	volatile int32_t t81 = 3;

	t81 = ((x4173<=x4174)*(x4175>>x4176));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4202 = UINT32_MAX;
	volatile uint8_t x4204 = 0U;
	int32_t t82 = -20115822;

	t82 = ((x4201<=x4202)*(x4203>>x4204));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4221 = INT32_MIN;
	uint8_t x4224 = 0U;
	volatile int32_t t83 = 4;

	t83 = ((x4221<=x4222)*(x4223>>x4224));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4241 = -568;
	static volatile int32_t x4242 = 26951195;
	uint8_t x4243 = UINT8_MAX;
	volatile uint8_t x4244 = 3U;
	int32_t t84 = -7483;

	t84 = ((x4241<=x4242)*(x4243>>x4244));

	if (t84 != 31) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4245 = 1;
	int32_t x4246 = -1;
	int64_t x4248 = 28LL;
	static volatile uint64_t t85 = 218468100723729221LLU;

	t85 = ((x4245<=x4246)*(x4247>>x4248));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4249 = UINT16_MAX;
	static int16_t x4250 = INT16_MAX;
	static uint32_t x4251 = UINT32_MAX;
	static uint8_t x4252 = 4U;
	volatile uint32_t t86 = 2057176U;

	t86 = ((x4249<=x4250)*(x4251>>x4252));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4285 = -1LL;
	uint16_t x4286 = 2U;
	uint64_t x4287 = 92250822LLU;
	static volatile uint64_t t87 = 5LLU;

	t87 = ((x4285<=x4286)*(x4287>>x4288));

	if (t87 != 5630LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4289 = INT64_MIN;
	int64_t x4290 = -1LL;
	volatile int64_t x4292 = 0LL;
	static uint32_t t88 = 225955U;

	t88 = ((x4289<=x4290)*(x4291>>x4292));

	if (t88 != 62414U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x4333 = -1;
	volatile uint16_t x4334 = UINT16_MAX;
	uint16_t x4335 = 0U;
	volatile uint8_t x4336 = 2U;
	int32_t t89 = -360;

	t89 = ((x4333<=x4334)*(x4335>>x4336));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4361 = INT16_MAX;
	volatile uint32_t x4362 = 10U;
	int8_t x4363 = 0;

	t90 = ((x4361<=x4362)*(x4363>>x4364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4658 = 24U;
	uint16_t x4660 = 5U;

	t91 = ((x4657<=x4658)*(x4659>>x4660));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x4793 = UINT16_MAX;
	static int16_t x4795 = INT16_MAX;
	static uint8_t x4796 = 11U;

	t92 = ((x4793<=x4794)*(x4795>>x4796));

	if (t92 != 15) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4809 = 16681484503521LLU;
	static uint8_t x4810 = UINT8_MAX;
	int32_t x4811 = INT32_MAX;
	int32_t t93 = 23838442;

	t93 = ((x4809<=x4810)*(x4811>>x4812));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4821 = 5811832960LLU;
	int8_t x4822 = INT8_MIN;
	int64_t x4823 = 143623187LL;
	uint8_t x4824 = 1U;

	t94 = ((x4821<=x4822)*(x4823>>x4824));

	if (t94 != 71811593LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x4881 = 35U;
	uint64_t x4883 = UINT64_MAX;
	uint8_t x4884 = 5U;

	t95 = ((x4881<=x4882)*(x4883>>x4884));

	if (t95 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x5042 = -1;
	int16_t x5044 = 0;
	int32_t t96 = -1192212;

	t96 = ((x5041<=x5042)*(x5043>>x5044));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5085 = 165072LLU;
	int16_t x5086 = -212;
	int16_t x5087 = 1;
	uint64_t x5088 = 3LLU;

	t97 = ((x5085<=x5086)*(x5087>>x5088));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x5113 = 20U;
	int8_t x5114 = INT8_MAX;
	static uint16_t x5115 = 228U;
	int8_t x5116 = 6;
	static volatile int32_t t98 = -101;

	t98 = ((x5113<=x5114)*(x5115>>x5116));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5149 = 17997U;
	int64_t x5150 = INT64_MAX;
	int32_t x5151 = INT32_MAX;

	t99 = ((x5149<=x5150)*(x5151>>x5152));

	if (t99 != 1073741823) { NG(); } else { ; }
	
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

