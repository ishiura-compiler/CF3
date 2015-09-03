#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 6U;
int64_t x2 = INT64_MIN;
int64_t x81 = 28804814LL;
uint8_t x157 = 8U;
int16_t x173 = 125;
static int16_t x339 = 58;
volatile uint8_t x350 = 40U;
volatile int32_t t7 = 196;
int16_t x433 = -1;
uint64_t x603 = 5735822345521647640LLU;
uint64_t x619 = 12675567962347089LLU;
int32_t t10 = -5447;
int8_t x677 = INT8_MAX;
int32_t t11 = -4383;
uint64_t x795 = 56893183587223810LLU;
static int16_t x866 = 1291;
int16_t x867 = INT16_MAX;
static volatile uint16_t x951 = 28230U;
volatile int32_t t17 = -37;
volatile int8_t x1069 = INT8_MIN;
int8_t x1090 = INT8_MIN;
volatile int32_t t20 = 8344794;
int32_t t21 = 765;
int32_t t25 = 1726;
int8_t x1558 = INT8_MIN;
int8_t x1650 = INT8_MIN;
int8_t x1742 = 0;
static uint16_t x1745 = 7167U;
int32_t t31 = 42086753;
static uint8_t x1852 = 16U;
int32_t t33 = 33;
static int16_t x2009 = INT16_MIN;
int16_t x2444 = 12;
uint16_t x2445 = 114U;
int16_t x2777 = INT16_MAX;
uint32_t x2813 = 0U;
int16_t x2816 = 35;
static int32_t t40 = 26316087;
uint64_t x2846 = UINT64_MAX;
volatile int16_t x2848 = 1;
volatile int16_t x2900 = 1;
int16_t x3074 = INT16_MAX;
int32_t x3104 = 1;
static int8_t x3188 = 1;
uint16_t x3425 = 194U;
uint64_t x3487 = 69284417790208829LLU;
int32_t t56 = -11;
uint8_t x3598 = 124U;
static volatile uint32_t x3659 = 0U;
static int32_t x3660 = 1;
static uint8_t x3711 = 11U;
int32_t t59 = 1241;
volatile int64_t x3845 = INT64_MIN;
volatile int32_t x3992 = 11;
int8_t x4037 = -47;
uint32_t x4040 = 1U;
static int32_t x4042 = -59001;
uint64_t x4066 = UINT64_MAX;
static volatile uint8_t x4067 = UINT8_MAX;
int32_t t66 = 162179595;
static int64_t x4126 = 6768501917LL;
uint64_t x4127 = UINT64_MAX;
int32_t t67 = -32;
static int32_t x4134 = INT32_MIN;
uint64_t x4135 = 41994892386034976LLU;
volatile int32_t t69 = 0;
uint32_t x4239 = 2U;
int32_t x4605 = -1229;
int8_t x4646 = 1;
int16_t x4710 = INT16_MIN;
volatile int32_t x4733 = INT32_MIN;
volatile int32_t t76 = 102429;
static volatile uint8_t x5041 = UINT8_MAX;
int8_t x5042 = 0;
static volatile int16_t x5043 = 0;
uint8_t x5128 = 0U;
int32_t t80 = 7790590;
uint16_t x5259 = 7609U;
int32_t t83 = 124778;
uint32_t x5575 = UINT32_MAX;
int32_t t85 = 9860;
int8_t x5945 = INT8_MAX;
int16_t x5946 = INT16_MIN;
volatile int32_t x5968 = 2;
volatile uint64_t x5996 = 0LLU;
volatile int32_t t89 = -27954005;
volatile int16_t x6280 = 0;
int32_t t92 = 1217;
volatile uint8_t x6616 = 0U;
int32_t t95 = 370;
int32_t t96 = 126286;
int32_t t97 = 1055750;
uint16_t x6815 = 61U;
int64_t x6939 = 65522196879LL;


void f0(void) {
	uint8_t x3 = 7U;
	uint8_t x4 = 5U;
	volatile int32_t t0 = 3109;

	t0 = ((x1+x2)<(x3<<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x82 = INT8_MIN;
	uint16_t x83 = UINT16_MAX;
	uint8_t x84 = 3U;
	volatile int32_t t1 = -117629;

	t1 = ((x81+x82)<(x83<<x84));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x158 = INT32_MIN;
	static uint32_t x159 = UINT32_MAX;
	volatile int8_t x160 = 1;
	volatile int32_t t2 = 11;

	t2 = ((x157+x158)<(x159<<x160));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x174 = 102585427992579LLU;
	uint32_t x175 = 14U;
	uint16_t x176 = 1U;
	static volatile int32_t t3 = -65;

	t3 = ((x173+x174)<(x175<<x176));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x233 = -1;
	uint16_t x234 = 164U;
	uint8_t x235 = 2U;
	uint8_t x236 = 1U;
	static int32_t t4 = 2432603;

	t4 = ((x233+x234)<(x235<<x236));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x337 = UINT8_MAX;
	static int16_t x338 = 28;
	uint16_t x340 = 1U;
	volatile int32_t t5 = -190;

	t5 = ((x337+x338)<(x339<<x340));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x349 = INT8_MIN;
	static int8_t x351 = INT8_MAX;
	volatile int8_t x352 = 2;
	volatile int32_t t6 = -127068;

	t6 = ((x349+x350)<(x351<<x352));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = 177;
	volatile uint8_t x395 = 31U;
	uint8_t x396 = 2U;

	t7 = ((x393+x394)<(x395<<x396));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x434 = 10U;
	volatile int8_t x435 = 1;
	int32_t x436 = 7;
	int32_t t8 = -1;

	t8 = ((x433+x434)<(x435<<x436));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x601 = -1;
	static int16_t x602 = 1027;
	uint8_t x604 = 0U;
	int32_t t9 = -12007;

	t9 = ((x601+x602)<(x603<<x604));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x617 = 225389;
	static int32_t x618 = INT32_MIN;
	int8_t x620 = 1;

	t10 = ((x617+x618)<(x619<<x620));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x678 = INT32_MIN;
	static uint32_t x679 = 227555362U;
	uint16_t x680 = 0U;

	t11 = ((x677+x678)<(x679<<x680));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x741 = 522489474402922LLU;
	static int32_t x742 = INT32_MIN;
	uint64_t x743 = UINT64_MAX;
	uint16_t x744 = 54U;
	volatile int32_t t12 = 171;

	t12 = ((x741+x742)<(x743<<x744));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x793 = 1445U;
	uint8_t x794 = 7U;
	static uint8_t x796 = 43U;
	volatile int32_t t13 = 557;

	t13 = ((x793+x794)<(x795<<x796));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x825 = UINT16_MAX;
	static uint16_t x826 = UINT16_MAX;
	uint64_t x827 = 21139332219LLU;
	static volatile uint8_t x828 = 23U;
	int32_t t14 = 34735826;

	t14 = ((x825+x826)<(x827<<x828));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x861 = -1;
	uint64_t x862 = 69439324365151LLU;
	static uint64_t x863 = 270433734717064LLU;
	static uint8_t x864 = 12U;
	int32_t t15 = -1329;

	t15 = ((x861+x862)<(x863<<x864));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x865 = INT32_MIN;
	static uint32_t x868 = 3U;
	volatile int32_t t16 = 19937;

	t16 = ((x865+x866)<(x867<<x868));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x949 = UINT8_MAX;
	static volatile int32_t x950 = INT32_MIN;
	volatile uint16_t x952 = 15U;

	t17 = ((x949+x950)<(x951<<x952));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1070 = -1;
	int16_t x1071 = INT16_MAX;
	volatile int8_t x1072 = 1;
	int32_t t18 = -5;

	t18 = ((x1069+x1070)<(x1071<<x1072));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1089 = 26U;
	uint16_t x1091 = UINT16_MAX;
	volatile int8_t x1092 = 0;
	volatile int32_t t19 = 2888;

	t19 = ((x1089+x1090)<(x1091<<x1092));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1161 = UINT16_MAX;
	volatile int32_t x1162 = -1;
	uint64_t x1163 = 2356LLU;
	static int8_t x1164 = 0;

	t20 = ((x1161+x1162)<(x1163<<x1164));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1165 = 31U;
	int8_t x1166 = -1;
	int64_t x1167 = 42663599390181LL;
	volatile uint8_t x1168 = 2U;

	t21 = ((x1165+x1166)<(x1167<<x1168));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1301 = -7;
	static int16_t x1302 = INT16_MIN;
	uint64_t x1303 = 7281805580732896527LLU;
	uint32_t x1304 = 11U;
	volatile int32_t t22 = 108948;

	t22 = ((x1301+x1302)<(x1303<<x1304));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1341 = -722853008LL;
	uint16_t x1342 = 1U;
	volatile uint32_t x1343 = 58025U;
	volatile uint8_t x1344 = 7U;
	static volatile int32_t t23 = 0;

	t23 = ((x1341+x1342)<(x1343<<x1344));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1469 = UINT32_MAX;
	volatile int8_t x1470 = INT8_MIN;
	uint32_t x1471 = 8387U;
	static uint16_t x1472 = 3U;
	static int32_t t24 = -4;

	t24 = ((x1469+x1470)<(x1471<<x1472));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1537 = -1;
	static int64_t x1538 = 7LL;
	uint32_t x1539 = 7554U;
	uint8_t x1540 = 1U;

	t25 = ((x1537+x1538)<(x1539<<x1540));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1545 = -1;
	uint16_t x1546 = 0U;
	uint64_t x1547 = 0LLU;
	uint8_t x1548 = 0U;
	volatile int32_t t26 = -2920652;

	t26 = ((x1545+x1546)<(x1547<<x1548));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1557 = INT16_MIN;
	uint32_t x1559 = 142U;
	int16_t x1560 = 0;
	volatile int32_t t27 = -53600349;

	t27 = ((x1557+x1558)<(x1559<<x1560));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1649 = -1;
	volatile uint16_t x1651 = 43U;
	static volatile uint64_t x1652 = 1LLU;
	static volatile int32_t t28 = 705822642;

	t28 = ((x1649+x1650)<(x1651<<x1652));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1741 = UINT32_MAX;
	uint8_t x1743 = UINT8_MAX;
	volatile uint8_t x1744 = 2U;
	volatile int32_t t29 = 103103;

	t29 = ((x1741+x1742)<(x1743<<x1744));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1746 = INT16_MIN;
	int8_t x1747 = 1;
	uint16_t x1748 = 29U;
	int32_t t30 = 431;

	t30 = ((x1745+x1746)<(x1747<<x1748));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1757 = -1;
	int8_t x1758 = -1;
	uint16_t x1759 = 18U;
	uint8_t x1760 = 3U;

	t31 = ((x1757+x1758)<(x1759<<x1760));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1849 = INT32_MIN;
	int8_t x1850 = 0;
	volatile uint64_t x1851 = UINT64_MAX;
	int32_t t32 = -94202;

	t32 = ((x1849+x1850)<(x1851<<x1852));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1853 = 180304517U;
	static int64_t x1854 = -74489733200LL;
	uint64_t x1855 = 75653988738891378LLU;
	static int32_t x1856 = 7;

	t33 = ((x1853+x1854)<(x1855<<x1856));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1945 = INT16_MAX;
	int16_t x1946 = -71;
	int32_t x1947 = INT32_MAX;
	uint8_t x1948 = 0U;
	volatile int32_t t34 = -223983801;

	t34 = ((x1945+x1946)<(x1947<<x1948));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x2010 = -1;
	static volatile int8_t x2011 = 29;
	uint16_t x2012 = 1U;
	int32_t t35 = 20970925;

	t35 = ((x2009+x2010)<(x2011<<x2012));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x2197 = UINT32_MAX;
	uint64_t x2198 = 1042674436LLU;
	uint8_t x2199 = 11U;
	uint16_t x2200 = 2U;
	volatile int32_t t36 = -80045;

	t36 = ((x2197+x2198)<(x2199<<x2200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2441 = 51U;
	uint8_t x2442 = 77U;
	int16_t x2443 = 14446;
	int32_t t37 = -99987176;

	t37 = ((x2441+x2442)<(x2443<<x2444));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2446 = INT16_MAX;
	int16_t x2447 = 1;
	uint8_t x2448 = 7U;
	volatile int32_t t38 = 4721;

	t38 = ((x2445+x2446)<(x2447<<x2448));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2778 = INT16_MIN;
	uint32_t x2779 = 1610588U;
	uint8_t x2780 = 6U;
	volatile int32_t t39 = -215483;

	t39 = ((x2777+x2778)<(x2779<<x2780));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x2814 = INT64_MIN;
	static volatile int64_t x2815 = 2616LL;

	t40 = ((x2813+x2814)<(x2815<<x2816));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2845 = -1;
	uint8_t x2847 = 30U;
	int32_t t41 = -441;

	t41 = ((x2845+x2846)<(x2847<<x2848));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2897 = -13;
	static uint32_t x2898 = UINT32_MAX;
	int8_t x2899 = 0;
	int32_t t42 = -22;

	t42 = ((x2897+x2898)<(x2899<<x2900));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x3017 = -1LL;
	static int8_t x3018 = -1;
	uint16_t x3019 = 14302U;
	int16_t x3020 = 12;
	int32_t t43 = -28;

	t43 = ((x3017+x3018)<(x3019<<x3020));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x3037 = UINT32_MAX;
	uint64_t x3038 = UINT64_MAX;
	static uint64_t x3039 = 103060110560852LLU;
	uint8_t x3040 = 1U;
	static volatile int32_t t44 = 1;

	t44 = ((x3037+x3038)<(x3039<<x3040));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3073 = INT8_MIN;
	uint16_t x3075 = 7275U;
	uint8_t x3076 = 8U;
	volatile int32_t t45 = 15116162;

	t45 = ((x3073+x3074)<(x3075<<x3076));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3101 = 12092938U;
	uint16_t x3102 = 6U;
	volatile int8_t x3103 = 13;
	int32_t t46 = -806692;

	t46 = ((x3101+x3102)<(x3103<<x3104));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3133 = 14443;
	static volatile int8_t x3134 = INT8_MIN;
	uint8_t x3135 = 33U;
	int16_t x3136 = 0;
	static int32_t t47 = 76995046;

	t47 = ((x3133+x3134)<(x3135<<x3136));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3165 = INT8_MIN;
	int8_t x3166 = INT8_MIN;
	uint8_t x3167 = 2U;
	volatile uint8_t x3168 = 3U;
	volatile int32_t t48 = 66179966;

	t48 = ((x3165+x3166)<(x3167<<x3168));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3185 = 3315521U;
	int64_t x3186 = -6396029LL;
	static int8_t x3187 = 62;
	int32_t t49 = 100;

	t49 = ((x3185+x3186)<(x3187<<x3188));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x3201 = 16;
	uint64_t x3202 = 3295941508LLU;
	uint32_t x3203 = 931314U;
	volatile uint32_t x3204 = 0U;
	int32_t t50 = -13;

	t50 = ((x3201+x3202)<(x3203<<x3204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3213 = -533676396;
	int16_t x3214 = INT16_MAX;
	int64_t x3215 = 187040587237LL;
	static uint8_t x3216 = 1U;
	volatile int32_t t51 = -205;

	t51 = ((x3213+x3214)<(x3215<<x3216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3253 = INT8_MIN;
	static uint64_t x3254 = 217567LLU;
	volatile int64_t x3255 = 25797527135647LL;
	static int16_t x3256 = 1;
	int32_t t52 = 1741516;

	t52 = ((x3253+x3254)<(x3255<<x3256));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3289 = 1049U;
	volatile uint16_t x3290 = UINT16_MAX;
	static volatile int32_t x3291 = 570;
	volatile int8_t x3292 = 0;
	volatile int32_t t53 = 18;

	t53 = ((x3289+x3290)<(x3291<<x3292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3426 = INT8_MIN;
	int8_t x3427 = 0;
	int32_t x3428 = 0;
	volatile int32_t t54 = 32642281;

	t54 = ((x3425+x3426)<(x3427<<x3428));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3485 = UINT64_MAX;
	volatile int32_t x3486 = 192442;
	uint8_t x3488 = 1U;
	int32_t t55 = 482;

	t55 = ((x3485+x3486)<(x3487<<x3488));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3521 = 7U;
	volatile int32_t x3522 = INT32_MIN;
	static uint32_t x3523 = 6324324U;
	uint8_t x3524 = 0U;

	t56 = ((x3521+x3522)<(x3523<<x3524));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x3597 = 102351066540LLU;
	static uint8_t x3599 = 14U;
	int8_t x3600 = 0;
	int32_t t57 = -59;

	t57 = ((x3597+x3598)<(x3599<<x3600));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3657 = 354593U;
	int32_t x3658 = 1;
	static volatile int32_t t58 = -34231233;

	t58 = ((x3657+x3658)<(x3659<<x3660));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3709 = UINT8_MAX;
	uint32_t x3710 = 85U;
	uint8_t x3712 = 0U;

	t59 = ((x3709+x3710)<(x3711<<x3712));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3846 = 843U;
	uint8_t x3847 = 3U;
	uint32_t x3848 = 0U;
	static int32_t t60 = -11418091;

	t60 = ((x3845+x3846)<(x3847<<x3848));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3849 = INT8_MIN;
	volatile int16_t x3850 = INT16_MIN;
	uint8_t x3851 = 15U;
	volatile uint32_t x3852 = 1U;
	volatile int32_t t61 = -124;

	t61 = ((x3849+x3850)<(x3851<<x3852));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3989 = INT8_MAX;
	static uint8_t x3990 = 78U;
	volatile uint32_t x3991 = 14206U;
	int32_t t62 = 5042853;

	t62 = ((x3989+x3990)<(x3991<<x3992));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x4038 = -48;
	volatile int64_t x4039 = 16578841977LL;
	static volatile int32_t t63 = -1272186;

	t63 = ((x4037+x4038)<(x4039<<x4040));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x4041 = -1;
	int8_t x4043 = 1;
	volatile int8_t x4044 = 9;
	static int32_t t64 = -10;

	t64 = ((x4041+x4042)<(x4043<<x4044));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4065 = -1;
	int8_t x4068 = 6;
	int32_t t65 = 9071587;

	t65 = ((x4065+x4066)<(x4067<<x4068));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4089 = -1;
	static int16_t x4090 = -50;
	volatile uint64_t x4091 = 54800952540987LLU;
	uint8_t x4092 = 3U;

	t66 = ((x4089+x4090)<(x4091<<x4092));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4125 = INT32_MIN;
	static int8_t x4128 = 0;

	t67 = ((x4125+x4126)<(x4127<<x4128));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4133 = UINT16_MAX;
	uint8_t x4136 = 1U;
	volatile int32_t t68 = 609706;

	t68 = ((x4133+x4134)<(x4135<<x4136));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4233 = 37U;
	int8_t x4234 = -1;
	uint32_t x4235 = 448058U;
	volatile uint16_t x4236 = 0U;

	t69 = ((x4233+x4234)<(x4235<<x4236));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4237 = 5U;
	int64_t x4238 = INT64_MIN;
	uint16_t x4240 = 13U;
	int32_t t70 = 35;

	t70 = ((x4237+x4238)<(x4239<<x4240));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x4525 = UINT64_MAX;
	uint8_t x4526 = UINT8_MAX;
	volatile uint8_t x4527 = 3U;
	volatile uint8_t x4528 = 8U;
	int32_t t71 = 125287;

	t71 = ((x4525+x4526)<(x4527<<x4528));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x4606 = INT8_MIN;
	uint32_t x4607 = 82115929U;
	int8_t x4608 = 1;
	volatile int32_t t72 = -12;

	t72 = ((x4605+x4606)<(x4607<<x4608));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4641 = 17U;
	uint64_t x4642 = 173926760LLU;
	int16_t x4643 = INT16_MAX;
	uint8_t x4644 = 2U;
	volatile int32_t t73 = -612201407;

	t73 = ((x4641+x4642)<(x4643<<x4644));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4645 = -1;
	uint32_t x4647 = UINT32_MAX;
	static uint64_t x4648 = 7LLU;
	int32_t t74 = -1736;

	t74 = ((x4645+x4646)<(x4647<<x4648));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4709 = INT32_MAX;
	volatile uint32_t x4711 = 4630U;
	uint16_t x4712 = 3U;
	volatile int32_t t75 = 3396;

	t75 = ((x4709+x4710)<(x4711<<x4712));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4734 = 2570LLU;
	uint64_t x4735 = 95009812LLU;
	uint8_t x4736 = 1U;

	t76 = ((x4733+x4734)<(x4735<<x4736));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4901 = 7U;
	int8_t x4902 = -1;
	static uint64_t x4903 = 4653381LLU;
	uint8_t x4904 = 0U;
	int32_t t77 = 178622031;

	t77 = ((x4901+x4902)<(x4903<<x4904));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5044 = 7LL;
	static int32_t t78 = 82;

	t78 = ((x5041+x5042)<(x5043<<x5044));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x5125 = -3480;
	int32_t x5126 = -1;
	uint64_t x5127 = UINT64_MAX;
	volatile int32_t t79 = -203;

	t79 = ((x5125+x5126)<(x5127<<x5128));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5197 = 0;
	volatile uint16_t x5198 = UINT16_MAX;
	uint64_t x5199 = 99985808288LLU;
	uint8_t x5200 = 5U;

	t80 = ((x5197+x5198)<(x5199<<x5200));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x5217 = UINT8_MAX;
	int8_t x5218 = INT8_MIN;
	volatile uint64_t x5219 = UINT64_MAX;
	uint8_t x5220 = 1U;
	static int32_t t81 = -343395911;

	t81 = ((x5217+x5218)<(x5219<<x5220));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5241 = UINT16_MAX;
	static volatile int64_t x5242 = -1LL;
	static uint8_t x5243 = UINT8_MAX;
	uint16_t x5244 = 10U;
	volatile int32_t t82 = -93281;

	t82 = ((x5241+x5242)<(x5243<<x5244));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x5257 = UINT32_MAX;
	uint8_t x5258 = UINT8_MAX;
	static uint16_t x5260 = 0U;

	t83 = ((x5257+x5258)<(x5259<<x5260));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x5557 = 4U;
	uint16_t x5558 = 97U;
	int64_t x5559 = 162804554338315439LL;
	volatile uint16_t x5560 = 2U;
	volatile int32_t t84 = 51646;

	t84 = ((x5557+x5558)<(x5559<<x5560));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5573 = 9U;
	int16_t x5574 = INT16_MIN;
	uint32_t x5576 = 5U;

	t85 = ((x5573+x5574)<(x5575<<x5576));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5649 = INT16_MAX;
	int64_t x5650 = INT64_MIN;
	volatile uint32_t x5651 = 135610526U;
	uint16_t x5652 = 6U;
	volatile int32_t t86 = 485;

	t86 = ((x5649+x5650)<(x5651<<x5652));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5947 = 649U;
	uint8_t x5948 = 1U;
	int32_t t87 = 984;

	t87 = ((x5945+x5946)<(x5947<<x5948));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x5965 = -1;
	int64_t x5966 = -1LL;
	uint64_t x5967 = UINT64_MAX;
	volatile int32_t t88 = 9;

	t88 = ((x5965+x5966)<(x5967<<x5968));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5993 = -6;
	uint16_t x5994 = 37U;
	int32_t x5995 = INT32_MAX;

	t89 = ((x5993+x5994)<(x5995<<x5996));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5997 = UINT16_MAX;
	uint32_t x5998 = 25287256U;
	int8_t x5999 = 29;
	int8_t x6000 = 0;
	volatile int32_t t90 = 408898904;

	t90 = ((x5997+x5998)<(x5999<<x6000));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x6277 = 13;
	volatile uint32_t x6278 = 2U;
	int32_t x6279 = 3855;
	volatile int32_t t91 = -28716;

	t91 = ((x6277+x6278)<(x6279<<x6280));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6385 = -1LL;
	uint64_t x6386 = UINT64_MAX;
	uint64_t x6387 = 474832618602624LLU;
	uint32_t x6388 = 47U;

	t92 = ((x6385+x6386)<(x6387<<x6388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x6569 = -13;
	int8_t x6570 = INT8_MIN;
	uint16_t x6571 = 3U;
	static uint16_t x6572 = 4U;
	int32_t t93 = -625;

	t93 = ((x6569+x6570)<(x6571<<x6572));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x6601 = UINT32_MAX;
	static uint32_t x6602 = 252462U;
	uint32_t x6603 = 47131397U;
	uint32_t x6604 = 0U;
	volatile int32_t t94 = 1;

	t94 = ((x6601+x6602)<(x6603<<x6604));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6613 = -1;
	int64_t x6614 = -1LL;
	volatile uint64_t x6615 = UINT64_MAX;

	t95 = ((x6613+x6614)<(x6615<<x6616));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6717 = INT16_MAX;
	uint32_t x6718 = 4U;
	uint8_t x6719 = 0U;
	uint8_t x6720 = 1U;

	t96 = ((x6717+x6718)<(x6719<<x6720));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x6805 = 110LL;
	int32_t x6806 = INT32_MIN;
	uint8_t x6807 = 46U;
	uint32_t x6808 = 4U;

	t97 = ((x6805+x6806)<(x6807<<x6808));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6813 = 1341647754U;
	volatile uint8_t x6814 = 45U;
	volatile int8_t x6816 = 5;
	volatile int32_t t98 = -376277479;

	t98 = ((x6813+x6814)<(x6815<<x6816));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x6937 = UINT8_MAX;
	int8_t x6938 = INT8_MIN;
	uint16_t x6940 = 5U;
	volatile int32_t t99 = 13205113;

	t99 = ((x6937+x6938)<(x6939<<x6940));

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

