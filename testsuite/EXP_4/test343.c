
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

uint16_t x77 = 903U;
static uint64_t x78 = 15104275LLU;
int64_t x80 = -1LL;
volatile uint32_t x100 = UINT32_MAX;
static int16_t x141 = INT16_MIN;
volatile uint64_t x144 = UINT64_MAX;
int32_t x214 = INT32_MAX;
int32_t x273 = 383119943;
int64_t x276 = -1LL;
volatile int8_t x410 = 1;
uint8_t x567 = 7U;
static int8_t x572 = INT8_MIN;
int16_t x576 = -1;
uint16_t x589 = 56U;
volatile uint8_t x597 = UINT8_MAX;
static volatile int32_t t14 = -8;
static volatile uint32_t x606 = UINT32_MAX;
static int32_t x607 = INT32_MIN;
int32_t t15 = 314363;
volatile uint32_t x717 = 3260442U;
volatile int8_t x891 = -1;
int64_t x1037 = -1LL;
int16_t x1040 = -1;
volatile int32_t x1118 = 185871;
int32_t t20 = 329;
volatile int16_t x1259 = -1;
int32_t t22 = -12;
static int8_t x1285 = -1;
int16_t x1287 = -1;
static volatile int32_t t25 = -350130653;
int16_t x1617 = INT16_MIN;
volatile int32_t t26 = 1592;
volatile int32_t t27 = -166723;
int64_t x1730 = 9234042400086666LL;
static volatile int32_t t29 = 1;
int16_t x1808 = 0;
int8_t x1816 = -1;
int16_t x2042 = INT16_MAX;
static volatile int32_t t32 = 143;
static uint32_t x2100 = UINT32_MAX;
volatile uint8_t x2138 = UINT8_MAX;
volatile int8_t x2139 = INT8_MIN;
int8_t x2140 = INT8_MIN;
uint8_t x2149 = 12U;
static int64_t x2153 = INT64_MIN;
int8_t x2354 = 0;
uint16_t x2497 = UINT16_MAX;
volatile int32_t t39 = 69922531;
int32_t x2670 = INT32_MAX;
volatile int8_t x2845 = INT8_MAX;
volatile int32_t t47 = -437835;
int32_t x3005 = -5;
int8_t x3089 = -1;
uint8_t x3158 = 52U;
uint16_t x3160 = UINT16_MAX;
volatile uint32_t x3173 = 1055U;
int32_t x3174 = INT32_MAX;
static int32_t t52 = -74647;
uint64_t x3331 = 22LLU;
int32_t x3369 = 1418;
int32_t x3372 = 1;
int32_t t54 = -5847219;
int8_t x3452 = -1;
volatile int8_t x3688 = -11;


void f0(void) {
    	int16_t x1 = 57;
	static uint32_t x2 = 2045U;
	static int16_t x3 = -116;
	static volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -1;

    t0 = (x1!=(x2>>(x3-x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x79 = 1;
	int32_t t1 = -1987;

    t1 = (x77!=(x78>>(x79-x80)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x97 = -3;
	int64_t x98 = 6632895709510LL;
	static volatile uint32_t x99 = UINT32_MAX;
	int32_t t2 = -95882;

    t2 = (x97!=(x98>>(x99-x100)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x121 = 1;
	static uint64_t x122 = UINT64_MAX;
	int32_t x123 = -1;
	static int64_t x124 = -1LL;
	static volatile int32_t t3 = 1;

    t3 = (x121!=(x122>>(x123-x124)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x142 = UINT8_MAX;
	static int16_t x143 = -1;
	int32_t t4 = 55650;

    t4 = (x141!=(x142>>(x143-x144)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x213 = INT32_MAX;
	int16_t x215 = 3;
	int8_t x216 = -1;
	int32_t t5 = 1;

    t5 = (x213!=(x214>>(x215-x216)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x274 = INT32_MAX;
	int8_t x275 = 1;
	static int32_t t6 = 2;

    t6 = (x273!=(x274>>(x275-x276)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x325 = -1;
	uint8_t x326 = UINT8_MAX;
	volatile int32_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t7 = 196372378;

    t7 = (x325!=(x326>>(x327-x328)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x409 = 3U;
	volatile int8_t x411 = 3;
	uint32_t x412 = UINT32_MAX;
	static int32_t t8 = 769630469;

    t8 = (x409!=(x410>>(x411-x412)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x565 = INT8_MIN;
	int16_t x566 = INT16_MAX;
	static int16_t x568 = -2;
	int32_t t9 = -1;

    t9 = (x565!=(x566>>(x567-x568)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x569 = -7993LL;
	static int8_t x570 = INT8_MAX;
	volatile int8_t x571 = INT8_MIN;
	int32_t t10 = 6642223;

    t10 = (x569!=(x570>>(x571-x572)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x573 = 11;
	uint8_t x574 = UINT8_MAX;
	static uint32_t x575 = 7U;
	static volatile int32_t t11 = 302290912;

    t11 = (x573!=(x574>>(x575-x576)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x581 = INT16_MIN;
	int64_t x582 = INT64_MAX;
	volatile uint8_t x583 = 32U;
	int8_t x584 = -31;
	volatile int32_t t12 = -489140;

    t12 = (x581!=(x582>>(x583-x584)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x590 = INT32_MAX;
	int64_t x591 = -1LL;
	static int8_t x592 = -5;
	static volatile int32_t t13 = -2330354;

    t13 = (x589!=(x590>>(x591-x592)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x598 = INT32_MAX;
	int8_t x599 = 1;
	volatile int32_t x600 = -10;

    t14 = (x597!=(x598>>(x599-x600)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x605 = INT64_MAX;
	int32_t x608 = INT32_MIN;

    t15 = (x605!=(x606>>(x607-x608)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x718 = 8U;
	static uint32_t x719 = UINT32_MAX;
	int16_t x720 = -2;
	volatile int32_t t16 = 28231283;

    t16 = (x717!=(x718>>(x719-x720)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x889 = 1U;
	uint64_t x890 = 404802LLU;
	int8_t x892 = -1;
	static volatile int32_t t17 = -98857;

    t17 = (x889!=(x890>>(x891-x892)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1038 = UINT8_MAX;
	int16_t x1039 = 3;
	int32_t t18 = 4856;

    t18 = (x1037!=(x1038>>(x1039-x1040)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1065 = -1826;
	uint64_t x1066 = 0LLU;
	int32_t x1067 = 1;
	volatile int32_t x1068 = -30;
	int32_t t19 = 176;

    t19 = (x1065!=(x1066>>(x1067-x1068)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1117 = UINT8_MAX;
	int64_t x1119 = -1LL;
	static int64_t x1120 = -1LL;

    t20 = (x1117!=(x1118>>(x1119-x1120)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x1181 = -1;
	uint64_t x1182 = UINT64_MAX;
	static uint16_t x1183 = 1U;
	int32_t x1184 = -1;
	int32_t t21 = 247;

    t21 = (x1181!=(x1182>>(x1183-x1184)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x1257 = 17659504LLU;
	static uint16_t x1258 = 202U;
	int8_t x1260 = -1;

    t22 = (x1257!=(x1258>>(x1259-x1260)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x1286 = INT8_MAX;
	volatile uint32_t x1288 = UINT32_MAX;
	int32_t t23 = 39;

    t23 = (x1285!=(x1286>>(x1287-x1288)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1341 = 3U;
	int64_t x1342 = 25990778557385348LL;
	uint64_t x1343 = UINT64_MAX;
	static int8_t x1344 = -2;
	volatile int32_t t24 = -1;

    t24 = (x1341!=(x1342>>(x1343-x1344)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1369 = -63;
	volatile int8_t x1370 = INT8_MAX;
	volatile uint16_t x1371 = 39U;
	int16_t x1372 = 15;

    t25 = (x1369!=(x1370>>(x1371-x1372)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1618 = 8;
	int64_t x1619 = INT64_MIN;
	int64_t x1620 = INT64_MIN;

    t26 = (x1617!=(x1618>>(x1619-x1620)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1669 = 3LL;
	int8_t x1670 = 45;
	volatile int8_t x1671 = -1;
	int8_t x1672 = -1;

    t27 = (x1669!=(x1670>>(x1671-x1672)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1697 = UINT8_MAX;
	uint16_t x1698 = 19U;
	uint8_t x1699 = 6U;
	uint32_t x1700 = UINT32_MAX;
	volatile int32_t t28 = -7527;

    t28 = (x1697!=(x1698>>(x1699-x1700)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1729 = INT8_MIN;
	volatile int32_t x1731 = -1;
	volatile int8_t x1732 = -1;

    t29 = (x1729!=(x1730>>(x1731-x1732)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1805 = -1;
	static volatile uint64_t x1806 = UINT64_MAX;
	uint8_t x1807 = 0U;
	volatile int32_t t30 = -1;

    t30 = (x1805!=(x1806>>(x1807-x1808)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x1813 = 127355114456352446LL;
	volatile uint64_t x1814 = 1920047095330393LLU;
	uint8_t x1815 = 7U;
	volatile int32_t t31 = 861403388;

    t31 = (x1813!=(x1814>>(x1815-x1816)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2041 = 3U;
	int8_t x2043 = 0;
	volatile int8_t x2044 = 0;

    t32 = (x2041!=(x2042>>(x2043-x2044)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2097 = 101U;
	int8_t x2098 = 3;
	uint16_t x2099 = 20U;
	volatile int32_t t33 = 15787;

    t33 = (x2097!=(x2098>>(x2099-x2100)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x2137 = 2945318;
	int32_t t34 = 0;

    t34 = (x2137!=(x2138>>(x2139-x2140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x2150 = 30U;
	static int32_t x2151 = -1;
	volatile uint32_t x2152 = UINT32_MAX;
	volatile int32_t t35 = 11;

    t35 = (x2149!=(x2150>>(x2151-x2152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x2154 = 5799079923825LLU;
	volatile int8_t x2155 = -1;
	static int8_t x2156 = -1;
	volatile int32_t t36 = -7;

    t36 = (x2153!=(x2154>>(x2155-x2156)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2169 = -1LL;
	volatile uint8_t x2170 = 28U;
	volatile int8_t x2171 = 16;
	int16_t x2172 = -1;
	volatile int32_t t37 = 163903;

    t37 = (x2169!=(x2170>>(x2171-x2172)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x2353 = INT32_MAX;
	volatile uint16_t x2355 = 14U;
	int8_t x2356 = 1;
	volatile int32_t t38 = 371552934;

    t38 = (x2353!=(x2354>>(x2355-x2356)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2498 = 0;
	uint64_t x2499 = UINT64_MAX;
	int8_t x2500 = -1;

    t39 = (x2497!=(x2498>>(x2499-x2500)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2521 = INT16_MIN;
	int64_t x2522 = INT64_MAX;
	volatile int8_t x2523 = 1;
	static int8_t x2524 = -56;
	int32_t t40 = -1933;

    t40 = (x2521!=(x2522>>(x2523-x2524)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x2669 = 1U;
	static uint16_t x2671 = 14U;
	static volatile int64_t x2672 = -1LL;
	int32_t t41 = -15;

    t41 = (x2669!=(x2670>>(x2671-x2672)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2729 = -1;
	uint64_t x2730 = 120224909562874LLU;
	int64_t x2731 = -1LL;
	int64_t x2732 = -1LL;
	int32_t t42 = -22352;

    t42 = (x2729!=(x2730>>(x2731-x2732)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x2821 = 159463616U;
	volatile uint32_t x2822 = 6U;
	uint32_t x2823 = UINT32_MAX;
	int8_t x2824 = -1;
	volatile int32_t t43 = 0;

    t43 = (x2821!=(x2822>>(x2823-x2824)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2846 = INT32_MAX;
	int16_t x2847 = INT16_MIN;
	static int16_t x2848 = INT16_MIN;
	volatile int32_t t44 = 48294;

    t44 = (x2845!=(x2846>>(x2847-x2848)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x2893 = INT64_MAX;
	static uint16_t x2894 = 15U;
	uint8_t x2895 = 3U;
	uint64_t x2896 = UINT64_MAX;
	volatile int32_t t45 = 466834247;

    t45 = (x2893!=(x2894>>(x2895-x2896)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x2949 = 9U;
	static uint32_t x2950 = 1906011U;
	int64_t x2951 = -1LL;
	volatile int32_t x2952 = -1;
	volatile int32_t t46 = 579255;

    t46 = (x2949!=(x2950>>(x2951-x2952)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x2969 = 6LL;
	uint16_t x2970 = UINT16_MAX;
	volatile uint8_t x2971 = 3U;
	int32_t x2972 = -1;

    t47 = (x2969!=(x2970>>(x2971-x2972)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x3006 = UINT64_MAX;
	static uint32_t x3007 = 31U;
	uint32_t x3008 = 0U;
	static int32_t t48 = -270581783;

    t48 = (x3005!=(x3006>>(x3007-x3008)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x3090 = 631U;
	volatile int16_t x3091 = -1;
	int64_t x3092 = -1LL;
	int32_t t49 = 817847861;

    t49 = (x3089!=(x3090>>(x3091-x3092)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x3157 = INT64_MAX;
	volatile uint16_t x3159 = UINT16_MAX;
	volatile int32_t t50 = 7196;

    t50 = (x3157!=(x3158>>(x3159-x3160)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x3175 = -1;
	int16_t x3176 = -1;
	volatile int32_t t51 = -1;

    t51 = (x3173!=(x3174>>(x3175-x3176)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x3305 = 2405U;
	int64_t x3306 = 34LL;
	volatile int8_t x3307 = 1;
	int8_t x3308 = 0;

    t52 = (x3305!=(x3306>>(x3307-x3308)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3329 = INT16_MAX;
	uint32_t x3330 = UINT32_MAX;
	uint64_t x3332 = 3LLU;
	volatile int32_t t53 = 1;

    t53 = (x3329!=(x3330>>(x3331-x3332)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x3370 = 25080;
	uint16_t x3371 = 24U;

    t54 = (x3369!=(x3370>>(x3371-x3372)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x3449 = 157819843U;
	int16_t x3450 = 364;
	volatile uint32_t x3451 = UINT32_MAX;
	volatile int32_t t55 = -69;

    t55 = (x3449!=(x3450>>(x3451-x3452)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x3633 = INT32_MAX;
	volatile int64_t x3634 = INT64_MAX;
	int64_t x3635 = INT64_MAX;
	int64_t x3636 = INT64_MAX;
	int32_t t56 = 495986043;

    t56 = (x3633!=(x3634>>(x3635-x3636)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x3685 = -13LL;
	static volatile uint8_t x3686 = 46U;
	int16_t x3687 = -1;
	int32_t t57 = 47649298;

    t57 = (x3685!=(x3686>>(x3687-x3688)));

    if (t57 != 1) { NG(); } else { ; }
	
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


    return 0;
}

