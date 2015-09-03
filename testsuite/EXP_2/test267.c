#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x105 = 25U;
static uint16_t x107 = 29850U;
uint16_t x122 = UINT16_MAX;
int32_t t5 = 7242;
int8_t x173 = -1;
volatile int32_t t6 = 88;
int32_t t8 = 65846198;
volatile uint64_t x419 = 28959730819480LLU;
uint16_t x420 = 0U;
uint64_t x465 = UINT64_MAX;
int8_t x467 = INT8_MIN;
static volatile int32_t t12 = -892;
int32_t t14 = 632;
static int8_t x546 = INT8_MIN;
static volatile int32_t t17 = 7785;
volatile int32_t x589 = -1;
uint8_t x592 = 2U;
static int32_t x668 = 1;
static volatile int32_t t19 = 2943363;
int32_t t20 = 15366178;
uint64_t x821 = 1868205LLU;
int8_t x823 = INT8_MIN;
uint8_t x864 = 20U;
static int32_t t24 = 462500;
volatile int32_t t26 = 873;
int16_t x997 = -1;
volatile int32_t t28 = 495;
int32_t t29 = -3;
static int64_t x1069 = -1LL;
int32_t t30 = -183;
volatile int8_t x1200 = 11;
uint16_t x1232 = 1U;
int64_t x1233 = -124616346LL;
uint8_t x1236 = 0U;
volatile int32_t t34 = 789;
int16_t x1314 = 13394;
int8_t x1334 = -1;
static int8_t x1335 = INT8_MIN;
static int16_t x1390 = INT16_MIN;
uint8_t x1392 = 4U;
int32_t t37 = -67744;
int64_t x1433 = INT64_MAX;
volatile int16_t x1456 = 0;
static int32_t t39 = 54534;
static uint64_t x1457 = 38043016162LLU;
int64_t x1521 = INT64_MIN;
volatile uint8_t x1524 = 10U;
int32_t t43 = -32;
int64_t x1606 = -1LL;
static int8_t x1607 = -6;
int8_t x1614 = -21;
uint8_t x1616 = 1U;
int32_t t45 = 29550692;
volatile int16_t x1768 = 1;
uint16_t x1788 = 20U;
volatile int32_t t48 = -1;
uint32_t x1795 = 33343400U;
static volatile int8_t x1796 = 0;
int16_t x1963 = 1;
int8_t x1980 = 0;
int8_t x2003 = INT8_MIN;
static int16_t x2070 = INT16_MIN;
int8_t x2071 = 27;
volatile int32_t t54 = -39340;
int8_t x2085 = INT8_MIN;
static int8_t x2136 = 0;
uint8_t x2145 = 7U;
uint16_t x2253 = UINT16_MAX;
volatile uint16_t x2256 = 24U;
static volatile int32_t t60 = 19437622;
volatile int32_t t61 = -120282835;
static int16_t x2353 = 5370;
static uint8_t x2355 = 3U;
int32_t x2431 = 167732715;
volatile uint16_t x2463 = 26U;
uint8_t x2464 = 5U;
volatile uint8_t x2496 = 0U;
uint8_t x2547 = 42U;
uint64_t x2578 = 225263686LLU;
static int32_t t69 = 11675;
static int16_t x2593 = 13030;
static int8_t x2610 = INT8_MIN;
uint16_t x2612 = 12U;
volatile int32_t t72 = -16065266;
int32_t t73 = 132756732;
static int16_t x2727 = -1;
volatile int64_t x2763 = 1052LL;
static uint8_t x2783 = 6U;
int16_t x2784 = 2;
int8_t x2837 = 2;
volatile uint32_t x2854 = 53492U;
int16_t x2855 = -9325;
uint16_t x2856 = 6U;
int32_t t78 = 66951;
uint16_t x2895 = UINT16_MAX;
int32_t t79 = 10477530;
uint64_t x2929 = 752480223LLU;
volatile uint64_t x2987 = 2790215151578LLU;
int32_t t83 = -1;
volatile uint8_t x3097 = 106U;
static int32_t x3113 = INT32_MIN;
uint64_t x3114 = 1926LLU;
static int8_t x3187 = -1;
int8_t x3189 = INT8_MAX;
int8_t x3190 = INT8_MIN;
volatile uint16_t x3191 = 106U;
int32_t x3229 = INT32_MAX;
uint32_t x3270 = 239U;
uint16_t x3320 = 16U;
int16_t x3426 = INT16_MAX;
static int16_t x3427 = INT16_MIN;
uint16_t x3479 = 26U;
static volatile uint16_t x3496 = 2U;
int32_t x3507 = -1;
volatile int32_t t99 = 2;


void f0(void) {
	uint32_t x65 = UINT32_MAX;
	static int64_t x66 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	uint8_t x68 = 6U;
	static int32_t t0 = 13;

	t0 = ((x65==(x66-x67))>>x68);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x81 = -1;
	static int16_t x82 = -2243;
	int16_t x83 = INT16_MIN;
	int8_t x84 = 1;
	int32_t t1 = 1;

	t1 = ((x81==(x82-x83))>>x84);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x106 = INT8_MIN;
	volatile uint8_t x108 = 0U;
	static volatile int32_t t2 = -8;

	t2 = ((x105==(x106-x107))>>x108);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x121 = -1LL;
	int16_t x123 = 2;
	uint16_t x124 = 0U;
	int32_t t3 = 1;

	t3 = ((x121==(x122-x123))>>x124);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x141 = 3;
	static int64_t x142 = 1788LL;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 3U;
	volatile int32_t t4 = 0;

	t4 = ((x141==(x142-x143))>>x144);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x165 = 304379221U;
	int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MIN;
	int16_t x168 = 1;

	t5 = ((x165==(x166-x167))>>x168);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x174 = 14;
	volatile int32_t x175 = -1;
	uint16_t x176 = 2U;

	t6 = ((x173==(x174-x175))>>x176);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x185 = 847;
	int8_t x186 = 0;
	static int16_t x187 = INT16_MIN;
	uint8_t x188 = 5U;
	int32_t t7 = -994;

	t7 = ((x185==(x186-x187))>>x188);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	static int32_t x235 = INT32_MIN;
	static uint16_t x236 = 0U;

	t8 = ((x233==(x234-x235))>>x236);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = 6828627168010711159LLU;
	int16_t x343 = INT16_MIN;
	int8_t x344 = 6;
	int32_t t9 = -16869;

	t9 = ((x341==(x342-x343))>>x344);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x409 = INT16_MIN;
	int32_t x410 = 67;
	uint32_t x411 = 165310U;
	volatile int16_t x412 = 1;
	volatile int32_t t10 = 0;

	t10 = ((x409==(x410-x411))>>x412);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;
	int32_t t11 = 9875;

	t11 = ((x417==(x418-x419))>>x420);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x466 = INT8_MIN;
	static uint32_t x468 = 7U;

	t12 = ((x465==(x466-x467))>>x468);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x517 = INT16_MIN;
	uint8_t x518 = 0U;
	volatile int32_t x519 = 195;
	int8_t x520 = 1;
	static volatile int32_t t13 = 97;

	t13 = ((x517==(x518-x519))>>x520);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x533 = -1;
	uint32_t x534 = 4U;
	volatile int32_t x535 = INT32_MIN;
	int8_t x536 = 3;

	t14 = ((x533==(x534-x535))>>x536);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x537 = 806U;
	static int32_t x538 = -1;
	int8_t x539 = INT8_MIN;
	static uint8_t x540 = 2U;
	static volatile int32_t t15 = 8277102;

	t15 = ((x537==(x538-x539))>>x540);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x541 = -1LL;
	static int8_t x542 = INT8_MIN;
	int32_t x543 = INT32_MIN;
	static uint8_t x544 = 2U;
	volatile int32_t t16 = -3376;

	t16 = ((x541==(x542-x543))>>x544);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x545 = INT64_MIN;
	int16_t x547 = 11887;
	uint8_t x548 = 1U;

	t17 = ((x545==(x546-x547))>>x548);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x590 = UINT32_MAX;
	uint32_t x591 = UINT32_MAX;
	int32_t t18 = 0;

	t18 = ((x589==(x590-x591))>>x592);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x665 = INT16_MIN;
	int32_t x666 = INT32_MIN;
	int8_t x667 = -1;

	t19 = ((x665==(x666-x667))>>x668);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x725 = -53787468453549797LL;
	static volatile uint64_t x726 = 4324077764182117657LLU;
	int64_t x727 = INT64_MIN;
	int8_t x728 = 11;

	t20 = ((x725==(x726-x727))>>x728);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x817 = INT32_MAX;
	uint16_t x818 = 3787U;
	uint16_t x819 = UINT16_MAX;
	volatile uint8_t x820 = 10U;
	int32_t t21 = -633951;

	t21 = ((x817==(x818-x819))>>x820);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x822 = -7229;
	static uint32_t x824 = 2U;
	volatile int32_t t22 = 35;

	t22 = ((x821==(x822-x823))>>x824);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x833 = -88;
	int32_t x834 = 15266;
	static volatile int16_t x835 = -1;
	uint8_t x836 = 3U;
	static int32_t t23 = 141559360;

	t23 = ((x833==(x834-x835))>>x836);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x861 = 14U;
	uint64_t x862 = UINT64_MAX;
	int8_t x863 = INT8_MAX;

	t24 = ((x861==(x862-x863))>>x864);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x869 = UINT16_MAX;
	int32_t x870 = INT32_MAX;
	int64_t x871 = 72LL;
	uint32_t x872 = 2U;
	static int32_t t25 = -44543420;

	t25 = ((x869==(x870-x871))>>x872);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x945 = 3528850U;
	uint8_t x946 = 20U;
	uint64_t x947 = UINT64_MAX;
	static uint64_t x948 = 1LLU;

	t26 = ((x945==(x946-x947))>>x948);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x961 = UINT16_MAX;
	int32_t x962 = INT32_MIN;
	static int64_t x963 = -1LL;
	int8_t x964 = 1;
	volatile int32_t t27 = -1213960;

	t27 = ((x961==(x962-x963))>>x964);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x998 = INT64_MAX;
	uint16_t x999 = 18509U;
	uint8_t x1000 = 1U;

	t28 = ((x997==(x998-x999))>>x1000);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1053 = INT64_MAX;
	int64_t x1054 = -1LL;
	uint64_t x1055 = 145463476750199LLU;
	int16_t x1056 = 6;

	t29 = ((x1053==(x1054-x1055))>>x1056);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1070 = INT8_MIN;
	int32_t x1071 = -60;
	static uint8_t x1072 = 3U;

	t30 = ((x1069==(x1070-x1071))>>x1072);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1085 = -6599543313203LL;
	int64_t x1086 = INT64_MIN;
	static int8_t x1087 = -23;
	uint8_t x1088 = 12U;
	static int32_t t31 = -253;

	t31 = ((x1085==(x1086-x1087))>>x1088);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1197 = INT8_MAX;
	int64_t x1198 = -899412781118LL;
	uint32_t x1199 = 38960134U;
	int32_t t32 = -6915564;

	t32 = ((x1197==(x1198-x1199))>>x1200);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1229 = INT8_MAX;
	int16_t x1230 = -1;
	int64_t x1231 = -1LL;
	int32_t t33 = -3;

	t33 = ((x1229==(x1230-x1231))>>x1232);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1234 = -3166738;
	int32_t x1235 = -1;

	t34 = ((x1233==(x1234-x1235))>>x1236);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1313 = INT16_MAX;
	int32_t x1315 = -89793;
	volatile uint16_t x1316 = 1U;
	int32_t t35 = 1;

	t35 = ((x1313==(x1314-x1315))>>x1316);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1333 = -41;
	uint8_t x1336 = 6U;
	int32_t t36 = 245;

	t36 = ((x1333==(x1334-x1335))>>x1336);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1389 = -1;
	volatile uint16_t x1391 = 29563U;

	t37 = ((x1389==(x1390-x1391))>>x1392);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1434 = INT8_MAX;
	int64_t x1435 = INT64_MAX;
	int8_t x1436 = 22;
	volatile int32_t t38 = 16311260;

	t38 = ((x1433==(x1434-x1435))>>x1436);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1453 = -15781126;
	int16_t x1454 = -1;
	uint32_t x1455 = UINT32_MAX;

	t39 = ((x1453==(x1454-x1455))>>x1456);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1458 = 326U;
	uint16_t x1459 = 4U;
	uint64_t x1460 = 0LLU;
	volatile int32_t t40 = 5668;

	t40 = ((x1457==(x1458-x1459))>>x1460);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1461 = INT8_MIN;
	uint64_t x1462 = 191577870LLU;
	volatile uint64_t x1463 = UINT64_MAX;
	int32_t x1464 = 7;
	int32_t t41 = -62710;

	t41 = ((x1461==(x1462-x1463))>>x1464);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1509 = 780U;
	static int16_t x1510 = 0;
	int8_t x1511 = INT8_MIN;
	static int8_t x1512 = 2;
	int32_t t42 = 3382;

	t42 = ((x1509==(x1510-x1511))>>x1512);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1522 = INT16_MIN;
	uint32_t x1523 = 1U;

	t43 = ((x1521==(x1522-x1523))>>x1524);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1605 = INT8_MAX;
	uint8_t x1608 = 10U;
	volatile int32_t t44 = 2650385;

	t44 = ((x1605==(x1606-x1607))>>x1608);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x1613 = UINT32_MAX;
	volatile uint32_t x1615 = 99U;

	t45 = ((x1613==(x1614-x1615))>>x1616);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1693 = -1;
	volatile int64_t x1694 = 769700118LL;
	int64_t x1695 = 5532LL;
	uint16_t x1696 = 3U;
	volatile int32_t t46 = -1165033;

	t46 = ((x1693==(x1694-x1695))>>x1696);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1765 = 5U;
	static int64_t x1766 = INT64_MIN;
	int32_t x1767 = -1;
	static int32_t t47 = -318337749;

	t47 = ((x1765==(x1766-x1767))>>x1768);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x1785 = INT32_MAX;
	uint64_t x1786 = 71701494281672598LLU;
	uint32_t x1787 = UINT32_MAX;

	t48 = ((x1785==(x1786-x1787))>>x1788);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1793 = -2;
	volatile int16_t x1794 = -9;
	int32_t t49 = 4757;

	t49 = ((x1793==(x1794-x1795))>>x1796);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1949 = INT32_MIN;
	int32_t x1950 = INT32_MIN;
	static uint64_t x1951 = UINT64_MAX;
	volatile int32_t x1952 = 0;
	volatile int32_t t50 = -798347;

	t50 = ((x1949==(x1950-x1951))>>x1952);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1961 = UINT32_MAX;
	int8_t x1962 = -1;
	uint8_t x1964 = 5U;
	static volatile int32_t t51 = 241;

	t51 = ((x1961==(x1962-x1963))>>x1964);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x1977 = 2164615U;
	volatile int16_t x1978 = 1;
	int32_t x1979 = -484529421;
	int32_t t52 = 855680;

	t52 = ((x1977==(x1978-x1979))>>x1980);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2001 = UINT8_MAX;
	volatile int16_t x2002 = -1;
	uint8_t x2004 = 12U;
	static int32_t t53 = -39;

	t53 = ((x2001==(x2002-x2003))>>x2004);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2069 = INT8_MIN;
	int8_t x2072 = 0;

	t54 = ((x2069==(x2070-x2071))>>x2072);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2086 = -1;
	static uint32_t x2087 = UINT32_MAX;
	uint8_t x2088 = 7U;
	static volatile int32_t t55 = -7022;

	t55 = ((x2085==(x2086-x2087))>>x2088);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2093 = 19;
	int8_t x2094 = -1;
	volatile int8_t x2095 = -1;
	int8_t x2096 = 0;
	static volatile int32_t t56 = 7181;

	t56 = ((x2093==(x2094-x2095))>>x2096);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2133 = -1;
	static uint16_t x2134 = 7U;
	int32_t x2135 = INT32_MAX;
	volatile int32_t t57 = -1;

	t57 = ((x2133==(x2134-x2135))>>x2136);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2146 = -1;
	static volatile uint64_t x2147 = 1641531LLU;
	int16_t x2148 = 1;
	int32_t t58 = 5467355;

	t58 = ((x2145==(x2146-x2147))>>x2148);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2169 = UINT16_MAX;
	volatile int32_t x2170 = INT32_MIN;
	int32_t x2171 = -1;
	uint8_t x2172 = 1U;
	volatile int32_t t59 = 9847;

	t59 = ((x2169==(x2170-x2171))>>x2172);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x2254 = -1;
	int64_t x2255 = -206LL;

	t60 = ((x2253==(x2254-x2255))>>x2256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2313 = 1;
	int32_t x2314 = 2;
	int64_t x2315 = INT64_MAX;
	volatile uint8_t x2316 = 1U;

	t61 = ((x2313==(x2314-x2315))>>x2316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x2349 = INT16_MAX;
	volatile uint8_t x2350 = UINT8_MAX;
	volatile int16_t x2351 = -1;
	uint16_t x2352 = 28U;
	int32_t t62 = -52371471;

	t62 = ((x2349==(x2350-x2351))>>x2352);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x2354 = 669288010421LL;
	static uint16_t x2356 = 0U;
	static volatile int32_t t63 = 212104;

	t63 = ((x2353==(x2354-x2355))>>x2356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2429 = -1LL;
	volatile uint64_t x2430 = UINT64_MAX;
	static int8_t x2432 = 2;
	volatile int32_t t64 = -394857;

	t64 = ((x2429==(x2430-x2431))>>x2432);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2461 = INT64_MIN;
	volatile uint64_t x2462 = 0LLU;
	volatile int32_t t65 = -142609080;

	t65 = ((x2461==(x2462-x2463))>>x2464);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2493 = -18282823;
	volatile int64_t x2494 = -163398571113LL;
	static int32_t x2495 = INT32_MAX;
	int32_t t66 = 21;

	t66 = ((x2493==(x2494-x2495))>>x2496);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2545 = 1569U;
	uint16_t x2546 = UINT16_MAX;
	uint8_t x2548 = 0U;
	static int32_t t67 = 1048127;

	t67 = ((x2545==(x2546-x2547))>>x2548);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2577 = INT16_MIN;
	int64_t x2579 = -1LL;
	uint8_t x2580 = 2U;
	int32_t t68 = -15491770;

	t68 = ((x2577==(x2578-x2579))>>x2580);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2589 = 562U;
	int16_t x2590 = INT16_MIN;
	uint32_t x2591 = 22U;
	uint8_t x2592 = 0U;

	t69 = ((x2589==(x2590-x2591))>>x2592);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2594 = 110U;
	static uint16_t x2595 = UINT16_MAX;
	uint8_t x2596 = 0U;
	volatile int32_t t70 = -3933;

	t70 = ((x2593==(x2594-x2595))>>x2596);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2609 = 2U;
	volatile int8_t x2611 = -1;
	volatile int32_t t71 = -21405753;

	t71 = ((x2609==(x2610-x2611))>>x2612);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x2669 = UINT8_MAX;
	int32_t x2670 = INT32_MIN;
	int16_t x2671 = INT16_MIN;
	uint8_t x2672 = 1U;

	t72 = ((x2669==(x2670-x2671))>>x2672);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2685 = 169;
	uint32_t x2686 = 7801873U;
	int8_t x2687 = INT8_MAX;
	volatile uint16_t x2688 = 1U;

	t73 = ((x2685==(x2686-x2687))>>x2688);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2725 = INT8_MAX;
	int8_t x2726 = -1;
	uint32_t x2728 = 0U;
	int32_t t74 = 14368249;

	t74 = ((x2725==(x2726-x2727))>>x2728);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2761 = 53U;
	static int32_t x2762 = INT32_MAX;
	uint16_t x2764 = 18U;
	static volatile int32_t t75 = -3310518;

	t75 = ((x2761==(x2762-x2763))>>x2764);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2781 = -1;
	static uint16_t x2782 = UINT16_MAX;
	volatile int32_t t76 = -1;

	t76 = ((x2781==(x2782-x2783))>>x2784);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2838 = 1U;
	static int64_t x2839 = -4001575558303488434LL;
	uint8_t x2840 = 1U;
	int32_t t77 = 3;

	t77 = ((x2837==(x2838-x2839))>>x2840);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2853 = INT8_MIN;

	t78 = ((x2853==(x2854-x2855))>>x2856);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2893 = -45906513;
	int8_t x2894 = INT8_MAX;
	int16_t x2896 = 1;

	t79 = ((x2893==(x2894-x2895))>>x2896);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2909 = INT32_MIN;
	volatile int16_t x2910 = -176;
	int32_t x2911 = 16;
	uint8_t x2912 = 3U;
	static int32_t t80 = 3575990;

	t80 = ((x2909==(x2910-x2911))>>x2912);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2917 = 751U;
	volatile int64_t x2918 = INT64_MIN;
	uint64_t x2919 = 1LLU;
	uint32_t x2920 = 3U;
	volatile int32_t t81 = -978377;

	t81 = ((x2917==(x2918-x2919))>>x2920);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2930 = 20U;
	int64_t x2931 = 7446454876218LL;
	volatile int16_t x2932 = 5;
	static int32_t t82 = 411286;

	t82 = ((x2929==(x2930-x2931))>>x2932);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2985 = INT16_MAX;
	int64_t x2986 = INT64_MAX;
	uint64_t x2988 = 8LLU;

	t83 = ((x2985==(x2986-x2987))>>x2988);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3057 = -1;
	int8_t x3058 = INT8_MIN;
	int64_t x3059 = 14186446655470804LL;
	uint32_t x3060 = 1U;
	int32_t t84 = -1;

	t84 = ((x3057==(x3058-x3059))>>x3060);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3098 = INT8_MIN;
	volatile uint64_t x3099 = 15LLU;
	int8_t x3100 = 1;
	volatile int32_t t85 = -12108361;

	t85 = ((x3097==(x3098-x3099))>>x3100);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x3115 = INT8_MIN;
	uint8_t x3116 = 6U;
	int32_t t86 = -1;

	t86 = ((x3113==(x3114-x3115))>>x3116);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3185 = -1;
	int8_t x3186 = -1;
	volatile uint8_t x3188 = 0U;
	volatile int32_t t87 = 3;

	t87 = ((x3185==(x3186-x3187))>>x3188);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x3192 = 10U;
	static volatile int32_t t88 = 2;

	t88 = ((x3189==(x3190-x3191))>>x3192);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x3230 = 11U;
	static int16_t x3231 = 261;
	int8_t x3232 = 0;
	int32_t t89 = -27352097;

	t89 = ((x3229==(x3230-x3231))>>x3232);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3233 = INT8_MIN;
	int8_t x3234 = -1;
	int8_t x3235 = INT8_MIN;
	uint16_t x3236 = 1U;
	int32_t t90 = -6548505;

	t90 = ((x3233==(x3234-x3235))>>x3236);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3269 = -1;
	static uint16_t x3271 = UINT16_MAX;
	uint8_t x3272 = 12U;
	volatile int32_t t91 = 1;

	t91 = ((x3269==(x3270-x3271))>>x3272);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3289 = UINT64_MAX;
	int64_t x3290 = -177430830921LL;
	int64_t x3291 = 13810733LL;
	uint8_t x3292 = 0U;
	volatile int32_t t92 = 908185;

	t92 = ((x3289==(x3290-x3291))>>x3292);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x3317 = UINT64_MAX;
	uint8_t x3318 = 2U;
	uint32_t x3319 = 50U;
	volatile int32_t t93 = 2163686;

	t93 = ((x3317==(x3318-x3319))>>x3320);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3425 = INT64_MIN;
	int8_t x3428 = 1;
	int32_t t94 = 889;

	t94 = ((x3425==(x3426-x3427))>>x3428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3453 = UINT16_MAX;
	static volatile uint16_t x3454 = UINT16_MAX;
	int8_t x3455 = 1;
	static uint32_t x3456 = 0U;
	volatile int32_t t95 = 1286;

	t95 = ((x3453==(x3454-x3455))>>x3456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x3477 = INT32_MAX;
	uint64_t x3478 = 3604014827LLU;
	static int16_t x3480 = 7;
	volatile int32_t t96 = 1969;

	t96 = ((x3477==(x3478-x3479))>>x3480);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x3481 = 1U;
	volatile int32_t x3482 = 162;
	uint8_t x3483 = 0U;
	static int16_t x3484 = 5;
	volatile int32_t t97 = 10596;

	t97 = ((x3481==(x3482-x3483))>>x3484);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3493 = UINT64_MAX;
	uint16_t x3494 = 1667U;
	volatile int64_t x3495 = INT64_MAX;
	volatile int32_t t98 = 1;

	t98 = ((x3493==(x3494-x3495))>>x3496);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x3505 = INT8_MAX;
	uint32_t x3506 = 54710U;
	static uint8_t x3508 = 1U;

	t99 = ((x3505==(x3506-x3507))>>x3508);

	if (t99 != 0) { NG(); } else { ; }
	
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

