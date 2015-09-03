#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = -1LL;
uint8_t x7 = UINT8_MAX;
uint64_t x109 = UINT64_MAX;
int16_t x127 = INT16_MAX;
volatile uint16_t x128 = 4U;
uint64_t x155 = UINT64_MAX;
uint16_t x195 = UINT16_MAX;
static uint64_t t6 = 108498534794363LLU;
volatile int32_t x422 = -1;
int8_t x457 = 1;
static uint8_t x579 = 20U;
uint64_t x609 = 1526155LLU;
static uint8_t x748 = 10U;
int64_t x794 = INT64_MAX;
uint16_t x795 = 693U;
uint16_t x907 = UINT16_MAX;
int64_t t16 = -210698070864135024LL;
int32_t x1152 = 3;
int8_t x1280 = 0;
volatile int64_t t23 = 757159459LL;
int8_t x1440 = 3;
uint16_t x1475 = 856U;
uint8_t x1476 = 3U;
volatile int64_t x1578 = INT64_MIN;
volatile int64_t x1717 = INT64_MIN;
uint16_t x1907 = UINT16_MAX;
int16_t x1908 = 1;
int16_t x1970 = INT16_MIN;
static uint8_t x2169 = UINT8_MAX;
int64_t x2170 = 6861382084801790LL;
static volatile int64_t t35 = 10163LL;
volatile uint8_t x2325 = 58U;
int64_t x2349 = 3108000LL;
int8_t x2350 = 11;
volatile uint8_t x2352 = 12U;
uint16_t x2513 = 10121U;
int32_t x2605 = INT32_MAX;
static uint8_t x2608 = 1U;
volatile int16_t x2713 = -1;
int8_t x2714 = INT8_MAX;
uint32_t x2715 = 63744279U;
int8_t x2793 = INT8_MIN;
static uint16_t x2794 = UINT16_MAX;
int64_t x2795 = INT64_MAX;
int64_t t45 = 101500689LL;
static uint16_t x2820 = 0U;
volatile uint64_t x2851 = 1920411271491170LLU;
int16_t x2976 = 1;
static uint64_t t50 = 346105115677311LLU;
int64_t x3214 = -17LL;
uint64_t x3309 = 2014LLU;
static uint8_t x3376 = 0U;


void f0(void) {
	int16_t x1 = -4732;
	int64_t x2 = -1LL;
	int16_t x3 = 205;
	uint8_t x4 = 6U;
	volatile int64_t t0 = -2864583215383LL;

	t0 = (x1+(x2%(x3>>x4)));

	if (t0 != -4733LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 6U;
	int8_t x8 = 1;
	volatile int64_t t1 = 866LL;

	t1 = (x5+(x6%(x7>>x8)));

	if (t1 != 5LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x110 = -1;
	int16_t x111 = 303;
	uint8_t x112 = 2U;
	volatile uint64_t t2 = 1654166813506LLU;

	t2 = (x109+(x110%(x111>>x112)));

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x125 = UINT8_MAX;
	int64_t x126 = INT64_MAX;
	int64_t t3 = 2LL;

	t3 = (x125+(x126%(x127>>x128)));

	if (t3 != 510LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x153 = INT64_MIN;
	volatile int64_t x154 = -113842778472255618LL;
	uint8_t x156 = 26U;
	uint64_t t4 = 69189184652LLU;

	t4 = (x153+(x154%(x155>>x156)));

	if (t4 != 9223372142633328048LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x193 = UINT32_MAX;
	volatile uint16_t x194 = UINT16_MAX;
	uint8_t x196 = 2U;
	volatile uint32_t t5 = 34471U;

	t5 = (x193+(x194%(x195>>x196)));

	if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x249 = -1;
	volatile int32_t x250 = -478700;
	uint64_t x251 = 18953252202186753LLU;
	static uint32_t x252 = 1U;

	t6 = (x249+(x250%(x251>>x252)));

	if (t6 != 5229680981363219LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x421 = INT64_MAX;
	uint64_t x423 = 451168LLU;
	uint64_t x424 = 1LLU;
	volatile uint64_t t7 = 2360171980877106782LLU;

	t7 = (x421+(x422%(x423>>x424)));

	if (t7 != 9223372036854973566LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x458 = 28240500U;
	static uint32_t x459 = UINT32_MAX;
	uint64_t x460 = 1LLU;
	volatile uint32_t t8 = 185028015U;

	t8 = (x457+(x458%(x459>>x460)));

	if (t8 != 28240501U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x545 = -1;
	int8_t x546 = 1;
	uint64_t x547 = UINT64_MAX;
	uint16_t x548 = 12U;
	uint64_t t9 = 25381174LLU;

	t9 = (x545+(x546%(x547>>x548)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x577 = -1;
	int8_t x578 = 6;
	int8_t x580 = 1;
	static int32_t t10 = 0;

	t10 = (x577+(x578%(x579>>x580)));

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x610 = 20;
	volatile uint32_t x611 = 697716U;
	uint8_t x612 = 1U;
	volatile uint64_t t11 = 7383LLU;

	t11 = (x609+(x610%(x611>>x612)));

	if (t11 != 1526175LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x625 = 76U;
	uint16_t x626 = 5117U;
	int64_t x627 = INT64_MAX;
	uint8_t x628 = 29U;
	static int64_t t12 = -476607519LL;

	t12 = (x625+(x626%(x627>>x628)));

	if (t12 != 5193LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x745 = 5366U;
	static int8_t x746 = 12;
	int64_t x747 = INT64_MAX;
	static int64_t t13 = 85LL;

	t13 = (x745+(x746%(x747>>x748)));

	if (t13 != 5378LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x793 = -6023;
	volatile uint8_t x796 = 2U;
	volatile int64_t t14 = 5238345LL;

	t14 = (x793+(x794%(x795>>x796)));

	if (t14 != -5914LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x877 = INT16_MAX;
	static volatile int16_t x878 = INT16_MIN;
	uint16_t x879 = UINT16_MAX;
	uint16_t x880 = 2U;
	volatile int32_t t15 = 41369155;

	t15 = (x877+(x878%(x879>>x880)));

	if (t15 != 32765) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x905 = 159U;
	int64_t x906 = INT64_MIN;
	static int16_t x908 = 7;

	t16 = (x905+(x906%(x907>>x908)));

	if (t16 != 158LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x949 = 752U;
	volatile uint64_t x950 = 230426116539335656LLU;
	uint16_t x951 = 118U;
	uint8_t x952 = 0U;
	uint64_t t17 = 456489214879LLU;

	t17 = (x949+(x950%(x951>>x952)));

	if (t17 != 798LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1149 = -76;
	volatile int64_t x1150 = INT64_MIN;
	uint8_t x1151 = 58U;
	int64_t t18 = 164LL;

	t18 = (x1149+(x1150%(x1151>>x1152)));

	if (t18 != -77LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1205 = INT16_MIN;
	int64_t x1206 = -35619568LL;
	uint64_t x1207 = UINT64_MAX;
	static uint16_t x1208 = 12U;
	uint64_t t19 = 1074781137040609330LLU;

	t19 = (x1205+(x1206%(x1207>>x1208)));

	if (t19 != 4503599591722255LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1209 = 9U;
	volatile uint8_t x1210 = 39U;
	int16_t x1211 = 44;
	uint16_t x1212 = 0U;
	int32_t t20 = 0;

	t20 = (x1209+(x1210%(x1211>>x1212)));

	if (t20 != 48) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1217 = -1LL;
	volatile int8_t x1218 = INT8_MAX;
	uint32_t x1219 = 125443U;
	int8_t x1220 = 1;
	int64_t t21 = 15660139415346LL;

	t21 = (x1217+(x1218%(x1219>>x1220)));

	if (t21 != 126LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1277 = 983LLU;
	static int32_t x1278 = INT32_MIN;
	uint8_t x1279 = 14U;
	static volatile uint64_t t22 = 2298286171398450582LLU;

	t22 = (x1277+(x1278%(x1279>>x1280)));

	if (t22 != 981LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1401 = 0;
	int16_t x1402 = 2667;
	int64_t x1403 = INT64_MAX;
	int8_t x1404 = 7;

	t23 = (x1401+(x1402%(x1403>>x1404)));

	if (t23 != 2667LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x1409 = 0U;
	static volatile int16_t x1410 = -1;
	volatile uint64_t x1411 = 2261221642LLU;
	int8_t x1412 = 8;
	volatile uint64_t t24 = 7LLU;

	t24 = (x1409+(x1410%(x1411>>x1412)));

	if (t24 != 2646960LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x1437 = -31300;
	uint16_t x1438 = 0U;
	volatile uint64_t x1439 = UINT64_MAX;
	volatile uint64_t t25 = 34043819256LLU;

	t25 = (x1437+(x1438%(x1439>>x1440)));

	if (t25 != 18446744073709520316LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1473 = INT8_MIN;
	volatile int32_t x1474 = INT32_MIN;
	volatile int32_t t26 = 72628159;

	t26 = (x1473+(x1474%(x1475>>x1476)));

	if (t26 != -196) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1489 = -1LL;
	int64_t x1490 = INT64_MIN;
	volatile int64_t x1491 = 1813208481166557LL;
	volatile int32_t x1492 = 3;
	volatile int64_t t27 = 716420569LL;

	t27 = (x1489+(x1490%(x1491>>x1492)));

	if (t27 != -33795280817423LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1577 = 9113U;
	volatile uint64_t x1579 = 1198423218539285505LLU;
	volatile uint64_t x1580 = 3LLU;
	volatile uint64_t t28 = 4133426671106809LLU;

	t28 = (x1577+(x1578%(x1579>>x1580)));

	if (t28 != 85394995492732953LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1693 = INT8_MIN;
	uint32_t x1694 = 12333129U;
	uint32_t x1695 = 4U;
	uint16_t x1696 = 1U;
	uint32_t t29 = 359152601U;

	t29 = (x1693+(x1694%(x1695>>x1696)));

	if (t29 != 4294967169U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1718 = 2U;
	uint16_t x1719 = 60U;
	int8_t x1720 = 0;
	int64_t t30 = -304323776397834427LL;

	t30 = (x1717+(x1718%(x1719>>x1720)));

	if (t30 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1905 = 847948803U;
	uint16_t x1906 = 157U;
	volatile uint32_t t31 = 805006350U;

	t31 = (x1905+(x1906%(x1907>>x1908)));

	if (t31 != 847948960U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x1913 = 1459199912U;
	int32_t x1914 = INT32_MIN;
	volatile uint32_t x1915 = UINT32_MAX;
	static volatile uint32_t x1916 = 1U;
	volatile uint32_t t32 = 945365474U;

	t32 = (x1913+(x1914%(x1915>>x1916)));

	if (t32 != 1459199913U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1969 = 1208622371824LLU;
	uint32_t x1971 = UINT32_MAX;
	static uint8_t x1972 = 11U;
	static uint64_t t33 = 34499LLU;

	t33 = (x1969+(x1970%(x1971>>x1972)));

	if (t33 != 1208624438255LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2141 = 0U;
	uint16_t x2142 = 15160U;
	static int64_t x2143 = INT64_MAX;
	uint16_t x2144 = 6U;
	volatile int64_t t34 = -2616285326LL;

	t34 = (x2141+(x2142%(x2143>>x2144)));

	if (t34 != 15160LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2171 = 273461;
	int16_t x2172 = 1;

	t35 = (x2169+(x2170%(x2171>>x2172)));

	if (t35 != 10855LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2177 = INT32_MIN;
	uint64_t x2178 = UINT64_MAX;
	uint32_t x2179 = 1712735U;
	uint8_t x2180 = 5U;
	uint64_t t36 = 898LLU;

	t36 = (x2177+(x2178%(x2179>>x2180)));

	if (t36 != 18446744071562077363LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x2237 = -1;
	static volatile int16_t x2238 = -1;
	volatile int64_t x2239 = 888275737177285855LL;
	static uint8_t x2240 = 0U;
	int64_t t37 = 51114434782393027LL;

	t37 = (x2237+(x2238%(x2239>>x2240)));

	if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2326 = UINT8_MAX;
	uint32_t x2327 = 65307324U;
	int8_t x2328 = 1;
	static volatile uint32_t t38 = 720448350U;

	t38 = (x2325+(x2326%(x2327>>x2328)));

	if (t38 != 313U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2351 = INT16_MAX;
	volatile int64_t t39 = 36174548LL;

	t39 = (x2349+(x2350%(x2351>>x2352)));

	if (t39 != 3108004LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2425 = -1;
	uint16_t x2426 = UINT16_MAX;
	int64_t x2427 = INT64_MAX;
	uint32_t x2428 = 5U;
	volatile int64_t t40 = 110941LL;

	t40 = (x2425+(x2426%(x2427>>x2428)));

	if (t40 != 65534LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2429 = 70U;
	static int8_t x2430 = -20;
	static int32_t x2431 = INT32_MAX;
	static int8_t x2432 = 7;
	int32_t t41 = 21580;

	t41 = (x2429+(x2430%(x2431>>x2432)));

	if (t41 != 50) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2514 = 50;
	int32_t x2515 = 3476087;
	int16_t x2516 = 4;
	volatile int32_t t42 = 13947894;

	t42 = (x2513+(x2514%(x2515>>x2516)));

	if (t42 != 10171) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x2606 = UINT32_MAX;
	int32_t x2607 = INT32_MAX;
	volatile uint32_t t43 = 103U;

	t43 = (x2605+(x2606%(x2607>>x2608)));

	if (t43 != 2147483650U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2716 = 0U;
	volatile uint32_t t44 = 89640U;

	t44 = (x2713+(x2714%(x2715>>x2716)));

	if (t44 != 126U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2796 = 3;

	t45 = (x2793+(x2794%(x2795>>x2796)));

	if (t45 != 65407LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2817 = INT8_MAX;
	int16_t x2818 = INT16_MIN;
	int64_t x2819 = INT64_MAX;
	int64_t t46 = -34211LL;

	t46 = (x2817+(x2818%(x2819>>x2820)));

	if (t46 != -32641LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2841 = INT32_MAX;
	static int32_t x2842 = 1373;
	volatile int64_t x2843 = INT64_MAX;
	int32_t x2844 = 34;
	int64_t t47 = -236580LL;

	t47 = (x2841+(x2842%(x2843>>x2844)));

	if (t47 != 2147485020LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2849 = -1;
	uint16_t x2850 = UINT16_MAX;
	int8_t x2852 = 7;
	uint64_t t48 = 26399784LLU;

	t48 = (x2849+(x2850%(x2851>>x2852)));

	if (t48 != 65534LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2929 = -1LL;
	int8_t x2930 = INT8_MIN;
	int16_t x2931 = 15198;
	int8_t x2932 = 0;
	int64_t t49 = -1065537291LL;

	t49 = (x2929+(x2930%(x2931>>x2932)));

	if (t49 != -129LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2973 = 30382LLU;
	int32_t x2974 = -738494;
	static uint32_t x2975 = 247203U;

	t50 = (x2973+(x2974%(x2975>>x2976)));

	if (t50 != 113242LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2989 = -1;
	int8_t x2990 = -27;
	int64_t x2991 = 854361780LL;
	int16_t x2992 = 0;
	int64_t t51 = -32493552782LL;

	t51 = (x2989+(x2990%(x2991>>x2992)));

	if (t51 != -28LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3197 = INT32_MIN;
	volatile uint64_t x3198 = 417416972797165967LLU;
	volatile uint64_t x3199 = 10990341556354737LLU;
	int8_t x3200 = 1;
	uint64_t t52 = 520174001LLU;

	t52 = (x3197+(x3198%(x3199>>x3200)));

	if (t52 != 5279162286379719LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3213 = -13879656856226LL;
	uint64_t x3215 = UINT64_MAX;
	volatile uint8_t x3216 = 1U;
	volatile uint64_t t53 = 13235449805150LLU;

	t53 = (x3213+(x3214%(x3215>>x3216)));

	if (t53 != 9223358157197919566LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3310 = INT16_MAX;
	int8_t x3311 = INT8_MAX;
	uint64_t x3312 = 2LLU;
	volatile uint64_t t54 = 143179225000725773LLU;

	t54 = (x3309+(x3310%(x3311>>x3312)));

	if (t54 != 2014LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x3373 = -1;
	volatile int64_t x3374 = -16090166LL;
	volatile uint8_t x3375 = UINT8_MAX;
	volatile int64_t t55 = -31875993566100773LL;

	t55 = (x3373+(x3374%(x3375>>x3376)));

	if (t55 != -177LL) { NG(); } else { ; }
	
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


    return 0;
}

