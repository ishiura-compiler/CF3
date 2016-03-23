
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

uint64_t x173 = 455297271965LLU;
uint32_t x175 = 45986997U;
static int32_t t2 = -746637835;
static int16_t x377 = INT16_MAX;
volatile uint64_t t3 = 5570678371771810LLU;
static uint64_t x417 = 119930569564LLU;
int32_t x773 = -1;
int32_t x821 = -58399;
int16_t x1017 = -5;
static volatile uint32_t t9 = 71976765U;
int32_t x1166 = 970227805;
static int64_t x1167 = 390875722544LL;
int64_t x1249 = -1LL;
static uint16_t x1343 = 12085U;
int16_t x1644 = 0;
uint64_t x1650 = 169185515087951LLU;
uint64_t t15 = 48265344LLU;
uint64_t x1723 = UINT64_MAX;
int64_t x1724 = 0LL;
uint64_t t16 = UINT64_MAX;
int8_t x1898 = INT8_MAX;
static volatile int16_t x2121 = -1;
uint64_t x2133 = UINT64_MAX;
volatile int32_t x2507 = -1;
int16_t x2561 = INT16_MAX;
static volatile int64_t t25 = -5615LL;
uint64_t x2665 = 99LLU;
uint64_t t27 = 1001980202558007880LLU;
uint16_t x2746 = 964U;
static volatile uint32_t x2761 = UINT32_MAX;
int64_t x2798 = INT64_MIN;
static uint8_t x2800 = 0U;


void f0(void) {
    	static uint64_t x41 = 1783443322591364176LLU;
	int16_t x42 = INT16_MAX;
	static int32_t x43 = -7800;
	volatile int16_t x44 = 0;
	uint64_t t0 = UINT64_MAX;

    t0 = ((x41|(x42|x43))<<x44);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x174 = -408413890746729207LL;
	static int8_t x176 = 18;
	volatile uint64_t t1 = 38948LLU;

    t1 = ((x173|(x174|x175))<<x176);

    if (t1 != 1723699942011437056LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x357 = 2U;
	uint8_t x358 = 0U;
	volatile int8_t x359 = INT8_MAX;
	static volatile uint8_t x360 = 3U;

    t2 = ((x357|(x358|x359))<<x360);

    if (t2 != 1016) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x378 = 202235LLU;
	int8_t x379 = INT8_MIN;
	uint8_t x380 = 7U;

    t3 = ((x377|(x378|x379))<<x380);

    if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x418 = -29626LL;
	int8_t x419 = 55;
	static int16_t x420 = 9;
	volatile uint64_t t4 = 1823809786LLU;

    t4 = ((x417|(x418|x419))<<x420);

    if (t4 != 18446744073703194112LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x769 = UINT32_MAX;
	volatile int8_t x770 = 0;
	volatile int16_t x771 = -1;
	int16_t x772 = 2;
	static volatile uint32_t t5 = 1743917U;

    t5 = ((x769|(x770|x771))<<x772);

    if (t5 != 4294967292U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x774 = INT32_MIN;
	static uint64_t x775 = 3956LLU;
	volatile uint64_t x776 = 0LLU;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = ((x773|(x774|x775))<<x776);

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x781 = INT8_MAX;
	uint16_t x782 = UINT16_MAX;
	volatile int16_t x783 = 1;
	int64_t x784 = 1LL;
	volatile int32_t t7 = 2925;

    t7 = ((x781|(x782|x783))<<x784);

    if (t7 != 131070) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x822 = 2U;
	uint64_t x823 = UINT64_MAX;
	uint16_t x824 = 14U;
	volatile uint64_t t8 = 1540808LLU;

    t8 = ((x821|(x822|x823))<<x824);

    if (t8 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x1018 = 9U;
	uint32_t x1019 = 174U;
	uint8_t x1020 = 9U;

    t9 = ((x1017|(x1018|x1019))<<x1020);

    if (t9 != 4294966784U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x1037 = 1785734076415157LLU;
	int8_t x1038 = INT8_MIN;
	int32_t x1039 = 13;
	int16_t x1040 = 5;
	volatile uint64_t t10 = 22510LLU;

    t10 = ((x1037|(x1038|x1039))<<x1040);

    if (t10 != 18446744073709549472LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x1165 = 13;
	int64_t x1168 = 5LL;
	volatile int64_t t11 = 913279641101LL;

    t11 = ((x1165|(x1166|x1167))<<x1168);

    if (t11 != 12539070410656LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x1250 = -1LL;
	volatile uint64_t x1251 = 1611907947514968LLU;
	int16_t x1252 = 26;
	uint64_t t12 = 1254848645LLU;

    t12 = ((x1249|(x1250|x1251))<<x1252);

    if (t12 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x1341 = 1U;
	uint8_t x1342 = 59U;
	uint8_t x1344 = 0U;
	volatile int32_t t13 = 51048527;

    t13 = ((x1341|(x1342|x1343))<<x1344);

    if (t13 != 12095) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x1641 = -1;
	uint8_t x1642 = 67U;
	static uint64_t x1643 = 52511244LLU;
	volatile uint64_t t14 = UINT64_MAX;

    t14 = ((x1641|(x1642|x1643))<<x1644);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1649 = UINT16_MAX;
	uint16_t x1651 = 3072U;
	uint16_t x1652 = 22U;

    t15 = ((x1649|(x1650|x1651))<<x1652);

    if (t15 != 8639208106082959360LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x1721 = INT32_MAX;
	static int32_t x1722 = 198598;

    t16 = ((x1721|(x1722|x1723))<<x1724);

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x1761 = INT64_MAX;
	uint8_t x1762 = 1U;
	uint16_t x1763 = 3U;
	uint64_t x1764 = 0LLU;
	volatile int64_t t17 = INT64_MAX;

    t17 = ((x1761|(x1762|x1763))<<x1764);

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1897 = 1U;
	int8_t x1899 = INT8_MAX;
	uint8_t x1900 = 3U;
	volatile int32_t t18 = -555889658;

    t18 = ((x1897|(x1898|x1899))<<x1900);

    if (t18 != 1016) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1993 = UINT64_MAX;
	static int32_t x1994 = 28998802;
	static volatile int64_t x1995 = INT64_MAX;
	uint32_t x1996 = 1U;
	uint64_t t19 = 787117917757380LLU;

    t19 = ((x1993|(x1994|x1995))<<x1996);

    if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x2122 = INT16_MIN;
	volatile uint64_t x2123 = 518721870320180LLU;
	int32_t x2124 = 2;
	static volatile uint64_t t20 = 1LLU;

    t20 = ((x2121|(x2122|x2123))<<x2124);

    if (t20 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x2134 = -139;
	static volatile int8_t x2135 = INT8_MIN;
	volatile uint8_t x2136 = 51U;
	uint64_t t21 = 182329241520951737LLU;

    t21 = ((x2133|(x2134|x2135))<<x2136);

    if (t21 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x2393 = INT8_MIN;
	static volatile uint32_t x2394 = UINT32_MAX;
	uint8_t x2395 = 3U;
	uint8_t x2396 = 0U;
	volatile uint32_t t22 = UINT32_MAX;

    t22 = ((x2393|(x2394|x2395))<<x2396);

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x2417 = 245031U;
	static volatile uint8_t x2418 = UINT8_MAX;
	int32_t x2419 = 0;
	uint32_t x2420 = 24U;
	volatile uint32_t t23 = 33840598U;

    t23 = ((x2417|(x2418|x2419))<<x2420);

    if (t23 != 4278190080U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x2505 = 258214LLU;
	volatile uint64_t x2506 = UINT64_MAX;
	int16_t x2508 = 3;
	uint64_t t24 = 1268306LLU;

    t24 = ((x2505|(x2506|x2507))<<x2508);

    if (t24 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x2562 = 1841303286LL;
	int16_t x2563 = 7307;
	uint8_t x2564 = 1U;

    t25 = ((x2561|(x2562|x2563))<<x2564);

    if (t25 != 3682664446LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x2565 = 8;
	int8_t x2566 = INT8_MAX;
	int32_t x2567 = 979326;
	static int16_t x2568 = 2;
	int32_t t26 = 5;

    t26 = ((x2565|(x2566|x2567))<<x2568);

    if (t26 != 3917308) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x2666 = 27581U;
	int64_t x2667 = INT64_MIN;
	uint8_t x2668 = 14U;

    t27 = ((x2665|(x2666|x2667))<<x2668);

    if (t27 != 452968448LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x2685 = 2U;
	uint16_t x2686 = 2905U;
	uint8_t x2687 = UINT8_MAX;
	int8_t x2688 = 1;
	volatile uint32_t t28 = 468934246U;

    t28 = ((x2685|(x2686|x2687))<<x2688);

    if (t28 != 6142U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2701 = INT16_MAX;
	uint8_t x2702 = UINT8_MAX;
	volatile uint8_t x2703 = 2U;
	volatile uint8_t x2704 = 6U;
	static int32_t t29 = 23493;

    t29 = ((x2701|(x2702|x2703))<<x2704);

    if (t29 != 2097088) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x2745 = 1026925;
	uint64_t x2747 = 2379085LLU;
	static volatile int8_t x2748 = 2;
	static uint64_t t30 = 114479065079116LLU;

    t30 = ((x2745|(x2746|x2747))<<x2748);

    if (t30 != 12566452LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x2762 = -1;
	int16_t x2763 = INT16_MIN;
	int8_t x2764 = 1;
	static volatile uint32_t t31 = 965U;

    t31 = ((x2761|(x2762|x2763))<<x2764);

    if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2797 = UINT64_MAX;
	int32_t x2799 = INT32_MIN;
	uint64_t t32 = UINT64_MAX;

    t32 = ((x2797|(x2798|x2799))<<x2800);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x2837 = 0U;
	static volatile uint32_t x2838 = UINT32_MAX;
	uint32_t x2839 = UINT32_MAX;
	static int16_t x2840 = 0;
	uint32_t t33 = UINT32_MAX;

    t33 = ((x2837|(x2838|x2839))<<x2840);

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2881 = -1;
	uint64_t x2882 = UINT64_MAX;
	volatile uint32_t x2883 = UINT32_MAX;
	uint8_t x2884 = 7U;
	static volatile uint64_t t34 = 916702597LLU;

    t34 = ((x2881|(x2882|x2883))<<x2884);

    if (t34 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2957 = 104U;
	uint8_t x2958 = UINT8_MAX;
	volatile uint64_t x2959 = 318418268954635LLU;
	static int8_t x2960 = 46;
	static volatile uint64_t t35 = 4883827695920970070LLU;

    t35 = ((x2957|(x2958|x2959))<<x2960);

    if (t35 != 16735305846564585472LLU) { NG(); } else { ; }
	
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


    return 0;
}

