#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x40 = INT64_MIN;
int64_t x156 = 65154195159LL;
static uint64_t x483 = UINT64_MAX;
int64_t x484 = 29168LL;
static uint16_t x753 = 476U;
int16_t x766 = 0;
volatile int64_t x767 = INT64_MAX;
static volatile uint64_t t5 = 11906LLU;
uint32_t t6 = 0U;
int64_t x867 = 130660154LL;
static volatile int32_t x904 = INT32_MAX;
uint64_t t10 = 119369984030658LLU;
static uint16_t x965 = 252U;
int8_t x966 = -1;
static uint16_t x969 = 0U;
volatile uint32_t x971 = 0U;
volatile int32_t x1100 = INT32_MIN;
int64_t x1135 = -8LL;
uint64_t t15 = 62LLU;
uint32_t t16 = 298261U;
int8_t x1209 = 1;
int8_t x1210 = -1;
static int64_t x1212 = 907506117LL;
int16_t x1261 = INT16_MAX;
int64_t x1262 = 0LL;
int64_t x1465 = 61583095974LL;
volatile int16_t x1648 = INT16_MIN;
int8_t x1727 = 0;
int64_t x1733 = 187163LL;
static volatile int64_t t25 = -171263406354945710LL;
int8_t x1756 = -1;
uint8_t x1960 = UINT8_MAX;
static volatile int32_t t30 = -20464903;
static volatile int8_t x1998 = -1;
int32_t x1999 = -1;
int64_t x2111 = 2LL;
int32_t x2143 = -20508;
int32_t t34 = 1413;
uint8_t x2153 = UINT8_MAX;
static uint16_t x2193 = 56U;
uint64_t x2245 = UINT64_MAX;
int32_t x2385 = 171;
int8_t x2592 = 59;
int8_t x2597 = 2;
volatile int32_t t41 = -1;
int16_t x2640 = 109;
static uint64_t t44 = 1219662LLU;
int8_t x3235 = 0;
static volatile int32_t t45 = -13769;
uint32_t x3377 = 429460U;
static int8_t x3379 = 1;
volatile uint32_t t47 = 130479982U;
volatile int32_t x3391 = INT32_MAX;
int32_t t49 = 0;
int32_t t50 = 3278973;
static int32_t x3638 = -1;
int16_t x3684 = 14899;


void f0(void) {
	volatile int64_t x37 = INT64_MAX;
	uint16_t x38 = 0U;
	uint16_t x39 = 0U;
	int64_t t0 = -1067LL;

	t0 = ((x37<<(x38*x39))+x40);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x154 = UINT64_MAX;
	int64_t x155 = -1LL;
	int64_t t1 = 1759LL;

	t1 = ((x153<<(x154*x155))+x156);

	if (t1 != 65154195413LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x481 = 62U;
	int16_t x482 = -1;
	static volatile int64_t t2 = 355047692LL;

	t2 = ((x481<<(x482*x483))+x484);

	if (t2 != 29292LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x721 = INT16_MAX;
	static uint8_t x722 = 1U;
	volatile uint32_t x723 = 15U;
	static volatile int8_t x724 = INT8_MIN;
	int32_t t3 = 3;

	t3 = ((x721<<(x722*x723))+x724);

	if (t3 != 1073708928) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x754 = -1;
	volatile uint64_t x755 = UINT64_MAX;
	uint64_t x756 = UINT64_MAX;
	volatile uint64_t t4 = 34654385344990860LLU;

	t4 = ((x753<<(x754*x755))+x756);

	if (t4 != 951LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x765 = 7695471352280LLU;
	static volatile int16_t x768 = INT16_MIN;

	t5 = ((x765<<(x766*x767))+x768);

	if (t5 != 7695471319512LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x777 = UINT8_MAX;
	uint32_t x778 = 0U;
	int8_t x779 = -1;
	uint32_t x780 = UINT32_MAX;

	t6 = ((x777<<(x778*x779))+x780);

	if (t6 != 254U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x865 = INT8_MAX;
	uint8_t x866 = 0U;
	int64_t x868 = -6645737LL;
	int64_t t7 = 5692179098013136LL;

	t7 = ((x865<<(x866*x867))+x868);

	if (t7 != -6645610LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x893 = 3U;
	int16_t x894 = -1;
	uint64_t x895 = UINT64_MAX;
	uint32_t x896 = 7317263U;
	uint32_t t8 = 53U;

	t8 = ((x893<<(x894*x895))+x896);

	if (t8 != 7317269U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x901 = 0U;
	int8_t x902 = 0;
	volatile int32_t x903 = INT32_MAX;
	volatile int32_t t9 = INT32_MAX;

	t9 = ((x901<<(x902*x903))+x904);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x941 = UINT8_MAX;
	uint64_t x942 = UINT64_MAX;
	int8_t x943 = 0;
	static volatile uint64_t x944 = UINT64_MAX;

	t10 = ((x941<<(x942*x943))+x944);

	if (t10 != 254LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x967 = -1;
	int8_t x968 = 37;
	volatile int32_t t11 = -6;

	t11 = ((x965<<(x966*x967))+x968);

	if (t11 != 541) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x970 = -911;
	static uint8_t x972 = UINT8_MAX;
	volatile int32_t t12 = 14;

	t12 = ((x969<<(x970*x971))+x972);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x981 = UINT16_MAX;
	static uint8_t x982 = 0U;
	static uint64_t x983 = 2713737679164LLU;
	uint32_t x984 = UINT32_MAX;
	uint32_t t13 = 55136U;

	t13 = ((x981<<(x982*x983))+x984);

	if (t13 != 65534U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x1097 = INT16_MAX;
	static uint8_t x1098 = 0U;
	int32_t x1099 = INT32_MAX;
	int32_t t14 = -3580363;

	t14 = ((x1097<<(x1098*x1099))+x1100);

	if (t14 != -2147450881) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1133 = UINT32_MAX;
	uint64_t x1134 = UINT64_MAX;
	uint64_t x1136 = 13LLU;

	t15 = ((x1133<<(x1134*x1135))+x1136);

	if (t15 != 4294967053LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1169 = 6080U;
	static volatile int32_t x1170 = -5;
	uint32_t x1171 = UINT32_MAX;
	volatile int8_t x1172 = INT8_MAX;

	t16 = ((x1169<<(x1170*x1171))+x1172);

	if (t16 != 194687U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1211 = UINT32_MAX;
	static volatile int64_t t17 = 98178050383306299LL;

	t17 = ((x1209<<(x1210*x1211))+x1212);

	if (t17 != 907506119LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1263 = UINT16_MAX;
	uint64_t x1264 = 663561LLU;
	static volatile uint64_t t18 = 15166946180972341LLU;

	t18 = ((x1261<<(x1262*x1263))+x1264);

	if (t18 != 696328LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1321 = 13U;
	volatile int64_t x1322 = -1LL;
	int32_t x1323 = -1;
	int32_t x1324 = -1;
	int32_t t19 = -179069;

	t19 = ((x1321<<(x1322*x1323))+x1324);

	if (t19 != 25) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1466 = -24;
	static int8_t x1467 = -1;
	int16_t x1468 = -1;
	volatile int64_t t20 = -14851404350444155LL;

	t20 = ((x1465<<(x1466*x1467))+x1468);

	if (t20 != 1033192903104528383LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1525 = INT64_MAX;
	int8_t x1526 = 0;
	int8_t x1527 = 3;
	int32_t x1528 = -4192866;
	static volatile int64_t t21 = 477403885624942LL;

	t21 = ((x1525<<(x1526*x1527))+x1528);

	if (t21 != 9223372036850582941LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1589 = 4U;
	int64_t x1590 = -1LL;
	int8_t x1591 = -1;
	int16_t x1592 = INT16_MIN;
	int32_t t22 = -12686354;

	t22 = ((x1589<<(x1590*x1591))+x1592);

	if (t22 != -32760) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1645 = 351073337908LL;
	static int16_t x1646 = -1;
	int8_t x1647 = -1;
	volatile int64_t t23 = 308698180321150806LL;

	t23 = ((x1645<<(x1646*x1647))+x1648);

	if (t23 != 702146643048LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1725 = UINT64_MAX;
	int16_t x1726 = 19;
	volatile int32_t x1728 = INT32_MIN;
	volatile uint64_t t24 = 1LLU;

	t24 = ((x1725<<(x1726*x1727))+x1728);

	if (t24 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1734 = 0U;
	int8_t x1735 = -1;
	int16_t x1736 = INT16_MAX;

	t25 = ((x1733<<(x1734*x1735))+x1736);

	if (t25 != 219930LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1745 = 2LLU;
	uint16_t x1746 = 0U;
	int16_t x1747 = -72;
	int32_t x1748 = 10675;
	volatile uint64_t t26 = 21586161355180047LLU;

	t26 = ((x1745<<(x1746*x1747))+x1748);

	if (t26 != 10677LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1753 = UINT16_MAX;
	int16_t x1754 = INT16_MAX;
	int32_t x1755 = 0;
	int32_t t27 = -3022;

	t27 = ((x1753<<(x1754*x1755))+x1756);

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1761 = INT16_MAX;
	uint32_t x1762 = 0U;
	static volatile int32_t x1763 = INT32_MIN;
	int64_t x1764 = INT64_MIN;
	volatile int64_t t28 = -910118072822572LL;

	t28 = ((x1761<<(x1762*x1763))+x1764);

	if (t28 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1881 = 1;
	int8_t x1882 = -1;
	uint64_t x1883 = UINT64_MAX;
	uint64_t x1884 = UINT64_MAX;
	volatile uint64_t t29 = 70394332LLU;

	t29 = ((x1881<<(x1882*x1883))+x1884);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1957 = INT8_MAX;
	uint64_t x1958 = UINT64_MAX;
	static int8_t x1959 = -1;

	t30 = ((x1957<<(x1958*x1959))+x1960);

	if (t30 != 509) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1997 = 3U;
	int32_t x2000 = -1;
	static int32_t t31 = 117;

	t31 = ((x1997<<(x1998*x1999))+x2000);

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2009 = 2764670U;
	int8_t x2010 = -1;
	volatile int8_t x2011 = -1;
	uint8_t x2012 = 11U;
	volatile uint32_t t32 = 32107U;

	t32 = ((x2009<<(x2010*x2011))+x2012);

	if (t32 != 5529351U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2109 = 20LLU;
	static int8_t x2110 = 4;
	uint16_t x2112 = 14191U;
	static volatile uint64_t t33 = 45168427LLU;

	t33 = ((x2109<<(x2110*x2111))+x2112);

	if (t33 != 19311LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2141 = 49U;
	static uint64_t x2142 = 0LLU;
	volatile int8_t x2144 = 1;

	t34 = ((x2141<<(x2142*x2143))+x2144);

	if (t34 != 50) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2154 = 0;
	int8_t x2155 = INT8_MIN;
	volatile uint16_t x2156 = 218U;
	int32_t t35 = 8800;

	t35 = ((x2153<<(x2154*x2155))+x2156);

	if (t35 != 473) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2189 = INT16_MAX;
	int64_t x2190 = INT64_MIN;
	static uint8_t x2191 = 0U;
	uint32_t x2192 = 17U;
	volatile uint32_t t36 = 28U;

	t36 = ((x2189<<(x2190*x2191))+x2192);

	if (t36 != 32784U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2194 = 0;
	int64_t x2195 = -1LL;
	static volatile int32_t x2196 = -1;
	volatile int32_t t37 = 10034;

	t37 = ((x2193<<(x2194*x2195))+x2196);

	if (t37 != 55) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2246 = -1;
	int16_t x2247 = -1;
	int8_t x2248 = INT8_MIN;
	static uint64_t t38 = 1971706163LLU;

	t38 = ((x2245<<(x2246*x2247))+x2248);

	if (t38 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2386 = -14;
	uint64_t x2387 = UINT64_MAX;
	uint16_t x2388 = UINT16_MAX;
	static int32_t t39 = -54958;

	t39 = ((x2385<<(x2386*x2387))+x2388);

	if (t39 != 2867199) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2589 = UINT64_MAX;
	int64_t x2590 = -1LL;
	static int32_t x2591 = -1;
	volatile uint64_t t40 = 31642115LLU;

	t40 = ((x2589<<(x2590*x2591))+x2592);

	if (t40 != 57LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2598 = INT8_MIN;
	int32_t x2599 = 0;
	static int8_t x2600 = INT8_MAX;

	t41 = ((x2597<<(x2598*x2599))+x2600);

	if (t41 != 129) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2637 = UINT32_MAX;
	int8_t x2638 = INT8_MIN;
	int8_t x2639 = 0;
	uint32_t t42 = 37519U;

	t42 = ((x2637<<(x2638*x2639))+x2640);

	if (t42 != 108U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2953 = 18937U;
	static uint64_t x2954 = UINT64_MAX;
	int64_t x2955 = -1LL;
	volatile int32_t x2956 = 60433;
	int32_t t43 = -185268;

	t43 = ((x2953<<(x2954*x2955))+x2956);

	if (t43 != 98307) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x3025 = 5647U;
	volatile int64_t x3026 = 3210517278899974454LL;
	static int8_t x3027 = 0;
	volatile uint64_t x3028 = 1779215LLU;

	t44 = ((x3025<<(x3026*x3027))+x3028);

	if (t44 != 1784862LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x3233 = INT8_MAX;
	int8_t x3234 = INT8_MIN;
	static volatile uint8_t x3236 = UINT8_MAX;

	t45 = ((x3233<<(x3234*x3235))+x3236);

	if (t45 != 382) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x3309 = INT8_MAX;
	int8_t x3310 = 0;
	uint16_t x3311 = 1U;
	int8_t x3312 = -1;
	static int32_t t46 = -2484817;

	t46 = ((x3309<<(x3310*x3311))+x3312);

	if (t46 != 126) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x3378 = 20U;
	int16_t x3380 = INT16_MIN;

	t47 = ((x3377<<(x3378*x3379))+x3380);

	if (t47 != 3644817408U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3389 = 44U;
	volatile uint8_t x3390 = 0U;
	int16_t x3392 = INT16_MIN;
	int32_t t48 = 8197550;

	t48 = ((x3389<<(x3390*x3391))+x3392);

	if (t48 != -32724) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3465 = 13U;
	int8_t x3466 = 1;
	int32_t x3467 = 2;
	static int8_t x3468 = -1;

	t49 = ((x3465<<(x3466*x3467))+x3468);

	if (t49 != 51) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x3481 = 4045U;
	volatile int16_t x3482 = -1;
	int64_t x3483 = -1LL;
	uint8_t x3484 = 1U;

	t50 = ((x3481<<(x3482*x3483))+x3484);

	if (t50 != 8091) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3533 = 1;
	uint16_t x3534 = 0U;
	uint16_t x3535 = UINT16_MAX;
	int32_t x3536 = INT32_MIN;
	int32_t t51 = -1835;

	t51 = ((x3533<<(x3534*x3535))+x3536);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3637 = 37126LLU;
	volatile int8_t x3639 = -2;
	static uint64_t x3640 = 18695LLU;
	volatile uint64_t t52 = 802982LLU;

	t52 = ((x3637<<(x3638*x3639))+x3640);

	if (t52 != 167199LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3681 = 31U;
	static uint8_t x3682 = 0U;
	volatile int32_t x3683 = -1;
	volatile int32_t t53 = 3;

	t53 = ((x3681<<(x3682*x3683))+x3684);

	if (t53 != 14930) { NG(); } else { ; }
	
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


    return 0;
}

