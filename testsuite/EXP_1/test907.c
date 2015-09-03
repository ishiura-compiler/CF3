#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x110 = 7U;
uint16_t x111 = 2575U;
volatile int32_t x201 = 1418;
int32_t x204 = 19;
int16_t x322 = 11;
static int16_t x517 = INT16_MAX;
int32_t t4 = -122116;
static volatile uint32_t x669 = 13608921U;
uint8_t x670 = 0U;
int16_t x694 = 3;
uint32_t x695 = 31340331U;
int64_t x756 = 1LL;
uint32_t x1041 = 50U;
int8_t x1073 = 7;
static uint64_t x1221 = 848942LLU;
int64_t x1223 = INT64_MAX;
volatile int16_t x1397 = 55;
int8_t x1399 = INT8_MAX;
int32_t x1472 = INT32_MIN;
int16_t x1610 = 0;
int32_t t22 = 2;
uint16_t x1768 = 1543U;
volatile int8_t x1784 = -1;
int32_t t25 = -96408449;
static uint16_t x1802 = 0U;
int16_t x1894 = 0;
uint32_t x1895 = 122937U;
uint8_t x2050 = 0U;
uint64_t x2249 = 1251122770LLU;
int8_t x2250 = 9;
uint8_t x2299 = UINT8_MAX;
uint64_t x2307 = UINT64_MAX;
int32_t x2365 = 346312882;
uint8_t x2366 = 0U;
volatile int32_t t34 = 1;
uint8_t x2381 = 9U;
int32_t t35 = 231372;
uint64_t x2449 = 1558217548LLU;
static int32_t t39 = 9;
static uint8_t x2890 = 2U;


void f0(void) {
	static int8_t x109 = 1;
	uint16_t x112 = 2U;
	int32_t t0 = -50061850;

	t0 = (((x109<<x110)%x111)<=x112);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x202 = 1;
	static int64_t x203 = 143LL;
	volatile int32_t t1 = 348326630;

	t1 = (((x201<<x202)%x203)<=x204);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x321 = 26;
	int32_t x323 = -1;
	volatile int16_t x324 = INT16_MAX;
	int32_t t2 = -1851;

	t2 = (((x321<<x322)%x323)<=x324);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x333 = UINT16_MAX;
	volatile uint8_t x334 = 1U;
	int64_t x335 = INT64_MIN;
	volatile int16_t x336 = -1;
	volatile int32_t t3 = -61;

	t3 = (((x333<<x334)%x335)<=x336);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x518 = 14;
	uint32_t x519 = UINT32_MAX;
	volatile uint64_t x520 = 38249191051LLU;

	t4 = (((x517<<x518)%x519)<=x520);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x657 = 0;
	int8_t x658 = 1;
	int32_t x659 = INT32_MIN;
	int64_t x660 = -1LL;
	static int32_t t5 = -1308;

	t5 = (((x657<<x658)%x659)<=x660);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x671 = 52;
	volatile int16_t x672 = INT16_MIN;
	volatile int32_t t6 = 46545652;

	t6 = (((x669<<x670)%x671)<=x672);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x689 = 57164563U;
	int8_t x690 = 13;
	static int16_t x691 = 7;
	uint64_t x692 = 1069930251905673LLU;
	volatile int32_t t7 = -30741202;

	t7 = (((x689<<x690)%x691)<=x692);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x693 = INT8_MAX;
	int8_t x696 = INT8_MIN;
	int32_t t8 = -393547444;

	t8 = (((x693<<x694)%x695)<=x696);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x753 = 0U;
	uint32_t x754 = 0U;
	static int8_t x755 = INT8_MIN;
	volatile int32_t t9 = 63;

	t9 = (((x753<<x754)%x755)<=x756);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x781 = 0U;
	int16_t x782 = 17;
	static int32_t x783 = INT32_MAX;
	uint8_t x784 = 12U;
	int32_t t10 = 267;

	t10 = (((x781<<x782)%x783)<=x784);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1042 = 0U;
	static int32_t x1043 = -494475761;
	static int64_t x1044 = INT64_MAX;
	int32_t t11 = -42122932;

	t11 = (((x1041<<x1042)%x1043)<=x1044);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1049 = INT8_MAX;
	uint32_t x1050 = 13U;
	volatile int32_t x1051 = -1;
	int16_t x1052 = -31;
	volatile int32_t t12 = -10674059;

	t12 = (((x1049<<x1050)%x1051)<=x1052);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x1074 = 28U;
	static volatile uint8_t x1075 = 11U;
	static int16_t x1076 = -3063;
	static volatile int32_t t13 = -317;

	t13 = (((x1073<<x1074)%x1075)<=x1076);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1205 = 2913068386LLU;
	uint16_t x1206 = 3U;
	volatile int16_t x1207 = 616;
	int16_t x1208 = -1083;
	static int32_t t14 = 14;

	t14 = (((x1205<<x1206)%x1207)<=x1208);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x1222 = 29U;
	volatile int32_t x1224 = INT32_MIN;
	volatile int32_t t15 = 549856;

	t15 = (((x1221<<x1222)%x1223)<=x1224);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x1249 = UINT32_MAX;
	uint8_t x1250 = 1U;
	static int8_t x1251 = INT8_MIN;
	int64_t x1252 = -1LL;
	volatile int32_t t16 = -153;

	t16 = (((x1249<<x1250)%x1251)<=x1252);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x1398 = 0U;
	int8_t x1400 = INT8_MAX;
	static volatile int32_t t17 = 1;

	t17 = (((x1397<<x1398)%x1399)<=x1400);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1469 = 4;
	static uint16_t x1470 = 11U;
	static int64_t x1471 = INT64_MIN;
	int32_t t18 = 674466187;

	t18 = (((x1469<<x1470)%x1471)<=x1472);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1609 = INT32_MAX;
	static uint16_t x1611 = 8U;
	int8_t x1612 = 0;
	static int32_t t19 = -3381;

	t19 = (((x1609<<x1610)%x1611)<=x1612);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1645 = 22;
	int16_t x1646 = 0;
	volatile uint16_t x1647 = 7U;
	uint64_t x1648 = 464906771083313LLU;
	int32_t t20 = -26;

	t20 = (((x1645<<x1646)%x1647)<=x1648);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1741 = 0;
	int8_t x1742 = 1;
	uint64_t x1743 = 8053189317435442290LLU;
	uint8_t x1744 = 30U;
	static volatile int32_t t21 = -53;

	t21 = (((x1741<<x1742)%x1743)<=x1744);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1761 = 1;
	uint32_t x1762 = 10U;
	uint16_t x1763 = UINT16_MAX;
	static volatile int64_t x1764 = INT64_MIN;

	t22 = (((x1761<<x1762)%x1763)<=x1764);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1765 = INT8_MAX;
	uint16_t x1766 = 0U;
	uint16_t x1767 = UINT16_MAX;
	static volatile int32_t t23 = -122281015;

	t23 = (((x1765<<x1766)%x1767)<=x1768);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1781 = 389047260LLU;
	uint8_t x1782 = 13U;
	int64_t x1783 = INT64_MAX;
	int32_t t24 = -27642;

	t24 = (((x1781<<x1782)%x1783)<=x1784);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1793 = 4017LL;
	uint8_t x1794 = 4U;
	uint8_t x1795 = UINT8_MAX;
	uint64_t x1796 = 14210251179LLU;

	t25 = (((x1793<<x1794)%x1795)<=x1796);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1801 = UINT32_MAX;
	int16_t x1803 = INT16_MAX;
	int16_t x1804 = -11192;
	int32_t t26 = -6649;

	t26 = (((x1801<<x1802)%x1803)<=x1804);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1893 = 1U;
	int32_t x1896 = -1;
	int32_t t27 = 346701;

	t27 = (((x1893<<x1894)%x1895)<=x1896);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1965 = 30U;
	int8_t x1966 = 7;
	uint8_t x1967 = 83U;
	int16_t x1968 = INT16_MIN;
	volatile int32_t t28 = 185;

	t28 = (((x1965<<x1966)%x1967)<=x1968);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2049 = 2;
	volatile int32_t x2051 = INT32_MIN;
	uint8_t x2052 = UINT8_MAX;
	int32_t t29 = 3537066;

	t29 = (((x2049<<x2050)%x2051)<=x2052);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2251 = UINT64_MAX;
	int16_t x2252 = INT16_MAX;
	static int32_t t30 = 59712908;

	t30 = (((x2249<<x2250)%x2251)<=x2252);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2297 = 64LL;
	uint8_t x2298 = 4U;
	int16_t x2300 = INT16_MIN;
	static volatile int32_t t31 = -1;

	t31 = (((x2297<<x2298)%x2299)<=x2300);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2301 = 0U;
	uint8_t x2302 = 7U;
	volatile int16_t x2303 = INT16_MIN;
	int64_t x2304 = 523372514414472585LL;
	int32_t t32 = -20;

	t32 = (((x2301<<x2302)%x2303)<=x2304);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2305 = INT16_MAX;
	volatile int8_t x2306 = 1;
	uint16_t x2308 = 16U;
	volatile int32_t t33 = 349155;

	t33 = (((x2305<<x2306)%x2307)<=x2308);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2367 = INT64_MIN;
	volatile int16_t x2368 = 1;

	t34 = (((x2365<<x2366)%x2367)<=x2368);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2382 = 1;
	volatile int16_t x2383 = INT16_MIN;
	volatile uint64_t x2384 = 26960LLU;

	t35 = (((x2381<<x2382)%x2383)<=x2384);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2385 = 5819LL;
	volatile uint16_t x2386 = 6U;
	int64_t x2387 = -1LL;
	static uint8_t x2388 = UINT8_MAX;
	int32_t t36 = 162245;

	t36 = (((x2385<<x2386)%x2387)<=x2388);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x2417 = 66209162774632LLU;
	static volatile int16_t x2418 = 1;
	volatile int8_t x2419 = INT8_MAX;
	static int8_t x2420 = INT8_MAX;
	volatile int32_t t37 = -4398232;

	t37 = (((x2417<<x2418)%x2419)<=x2420);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x2450 = 0;
	int32_t x2451 = INT32_MAX;
	int32_t x2452 = INT32_MIN;
	volatile int32_t t38 = -3223976;

	t38 = (((x2449<<x2450)%x2451)<=x2452);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x2453 = 17U;
	uint8_t x2454 = 1U;
	static uint16_t x2455 = UINT16_MAX;
	uint8_t x2456 = 50U;

	t39 = (((x2453<<x2454)%x2455)<=x2456);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2633 = 0;
	uint32_t x2634 = 1U;
	int32_t x2635 = INT32_MIN;
	int16_t x2636 = -2348;
	int32_t t40 = 39468;

	t40 = (((x2633<<x2634)%x2635)<=x2636);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2861 = 168327484771LL;
	uint16_t x2862 = 4U;
	uint16_t x2863 = 37U;
	volatile int64_t x2864 = INT64_MIN;
	int32_t t41 = 257281;

	t41 = (((x2861<<x2862)%x2863)<=x2864);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2889 = UINT32_MAX;
	static int16_t x2891 = -1;
	int8_t x2892 = INT8_MIN;
	int32_t t42 = -13730;

	t42 = (((x2889<<x2890)%x2891)<=x2892);

	if (t42 != 0) { NG(); } else { ; }
	
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


    return 0;
}

