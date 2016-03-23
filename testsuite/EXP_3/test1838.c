
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

uint8_t x55 = 46U;
uint8_t x56 = UINT8_MAX;
volatile uint32_t x345 = UINT32_MAX;
uint16_t x348 = 2U;
volatile int16_t x352 = INT16_MIN;
uint64_t x365 = 13LLU;
volatile uint8_t x450 = 1U;
int8_t x452 = -58;
uint64_t t5 = 49261LLU;
static uint8_t x738 = 12U;
volatile uint32_t t8 = 1829530U;
volatile int64_t x939 = -1LL;
int32_t t9 = -1;
static uint64_t t10 = 941870866LLU;
static int16_t x1249 = INT16_MAX;
volatile uint8_t x1250 = 1U;
int8_t x1340 = -1;
static uint64_t x1352 = UINT64_MAX;
static volatile int8_t x1369 = 0;
int16_t x1372 = INT16_MIN;
int32_t x1438 = 1;
int16_t x1666 = 1;
int8_t x1746 = 2;
int8_t x1747 = -1;
uint64_t x1759 = 478186LLU;
int8_t x1760 = INT8_MIN;
int32_t t20 = -65993115;
int32_t x1851 = -2;
volatile uint32_t x2050 = 0U;
volatile int64_t x2058 = 2LL;
int32_t t23 = -961737842;
uint16_t x2269 = 647U;
static uint32_t x2341 = 389858507U;
volatile uint16_t x2357 = 0U;
uint32_t x2359 = UINT32_MAX;
int64_t x2427 = -12600556332273LL;
int32_t t30 = 5206877;
volatile uint64_t t31 = UINT64_MAX;
int8_t x2985 = 7;
volatile int32_t t32 = 1;
static volatile int32_t x2999 = INT32_MAX;
volatile uint64_t t34 = 4429849017754LLU;
uint8_t x3533 = 104U;
uint16_t x3534 = 0U;
static int8_t x3607 = 18;
int32_t x3907 = -1;
uint16_t x3957 = 9U;
int8_t x3958 = 1;
static int8_t x3984 = -1;
int16_t x4078 = 0;
int32_t t44 = -1;
int64_t x4236 = -1LL;
int32_t x4247 = INT32_MIN;
int8_t x4248 = -33;
int64_t x4548 = INT64_MAX;
uint32_t x4876 = UINT32_MAX;
uint8_t x4978 = 7U;
volatile int32_t t51 = -3;
int16_t x5120 = -1;


void f0(void) {
    	uint32_t x53 = 16U;
	uint64_t x54 = 1LLU;
	uint32_t t0 = 18656U;

    t0 = ((x53<<x54)/(x55<=x56));

    if (t0 != 32U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x346 = 1;
	int8_t x347 = INT8_MIN;
	static uint32_t t1 = 778U;

    t1 = ((x345<<x346)/(x347<=x348));

    if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x349 = 2U;
	uint16_t x350 = 0U;
	int64_t x351 = INT64_MIN;
	int32_t t2 = -198947178;

    t2 = ((x349<<x350)/(x351<=x352));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x366 = 7;
	uint16_t x367 = 3273U;
	static uint32_t x368 = 1240712U;
	uint64_t t3 = 3LLU;

    t3 = ((x365<<x366)/(x367<=x368));

    if (t3 != 1664LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x385 = 3U;
	static int16_t x386 = 0;
	int16_t x387 = INT16_MIN;
	static int8_t x388 = -1;
	int32_t t4 = -719;

    t4 = ((x385<<x386)/(x387<=x388));

    if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x449 = UINT64_MAX;
	int8_t x451 = INT8_MIN;

    t5 = ((x449<<x450)/(x451<=x452));

    if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x737 = 48707805711266LL;
	int8_t x739 = -1;
	static volatile int16_t x740 = -1;
	int64_t t6 = 18529003LL;

    t6 = ((x737<<x738)/(x739<=x740));

    if (t6 != 199507172193345536LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x749 = 4462U;
	static uint16_t x750 = 1U;
	static uint8_t x751 = 89U;
	uint16_t x752 = 3741U;
	volatile uint32_t t7 = 1156210U;

    t7 = ((x749<<x750)/(x751<=x752));

    if (t7 != 8924U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x789 = 12851310U;
	uint8_t x790 = 0U;
	static volatile uint64_t x791 = 42LLU;
	int32_t x792 = 474702856;

    t8 = ((x789<<x790)/(x791<=x792));

    if (t8 != 12851310U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x937 = UINT16_MAX;
	int8_t x938 = 1;
	uint32_t x940 = UINT32_MAX;

    t9 = ((x937<<x938)/(x939<=x940));

    if (t9 != 131070) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x1149 = 1265392834591LLU;
	static uint8_t x1150 = 31U;
	volatile uint16_t x1151 = UINT16_MAX;
	volatile uint64_t x1152 = 29771331LLU;

    t10 = ((x1149<<x1150)/(x1151<=x1152));

    if (t10 != 5739041745237180416LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1251 = INT64_MIN;
	uint32_t x1252 = 213U;
	volatile int32_t t11 = 2233623;

    t11 = ((x1249<<x1250)/(x1251<=x1252));

    if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x1337 = 90621;
	volatile uint16_t x1338 = 3U;
	int64_t x1339 = -861053438210298003LL;
	volatile int32_t t12 = -561017;

    t12 = ((x1337<<x1338)/(x1339<=x1340));

    if (t12 != 724968) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x1349 = UINT16_MAX;
	static int16_t x1350 = 7;
	uint8_t x1351 = 1U;
	int32_t t13 = -1;

    t13 = ((x1349<<x1350)/(x1351<=x1352));

    if (t13 != 8388480) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x1370 = 0U;
	int32_t x1371 = INT32_MIN;
	static int32_t t14 = 44557746;

    t14 = ((x1369<<x1370)/(x1371<=x1372));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x1385 = UINT64_MAX;
	int8_t x1386 = 1;
	int64_t x1387 = INT64_MIN;
	static int8_t x1388 = INT8_MAX;
	uint64_t t15 = 2623254277LLU;

    t15 = ((x1385<<x1386)/(x1387<=x1388));

    if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x1437 = UINT32_MAX;
	int8_t x1439 = 30;
	static uint16_t x1440 = UINT16_MAX;
	static volatile uint32_t t16 = 616888415U;

    t16 = ((x1437<<x1438)/(x1439<=x1440));

    if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1665 = UINT16_MAX;
	int16_t x1667 = -203;
	uint32_t x1668 = UINT32_MAX;
	volatile int32_t t17 = -356;

    t17 = ((x1665<<x1666)/(x1667<=x1668));

    if (t17 != 131070) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1669 = INT8_MAX;
	static volatile int8_t x1670 = 0;
	int32_t x1671 = INT32_MIN;
	uint16_t x1672 = 878U;
	int32_t t18 = -9104;

    t18 = ((x1669<<x1670)/(x1671<=x1672));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x1745 = 59U;
	static uint8_t x1748 = 15U;
	int32_t t19 = 182410036;

    t19 = ((x1745<<x1746)/(x1747<=x1748));

    if (t19 != 236) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x1757 = 21;
	int8_t x1758 = 12;

    t20 = ((x1757<<x1758)/(x1759<=x1760));

    if (t20 != 86016) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1849 = 124909954201LL;
	uint8_t x1850 = 17U;
	int64_t x1852 = 101LL;
	int64_t t21 = 2100948LL;

    t21 = ((x1849<<x1850)/(x1851<=x1852));

    if (t21 != 16372197517033472LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x2049 = 90742LLU;
	int32_t x2051 = -115;
	int8_t x2052 = 1;
	uint64_t t22 = 1395139995LLU;

    t22 = ((x2049<<x2050)/(x2051<=x2052));

    if (t22 != 90742LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint16_t x2057 = 976U;
	static int8_t x2059 = INT8_MIN;
	static int16_t x2060 = INT16_MAX;

    t23 = ((x2057<<x2058)/(x2059<=x2060));

    if (t23 != 3904) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x2270 = 1;
	uint8_t x2271 = 6U;
	int8_t x2272 = INT8_MAX;
	int32_t t24 = -1;

    t24 = ((x2269<<x2270)/(x2271<=x2272));

    if (t24 != 1294) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x2297 = INT64_MAX;
	uint8_t x2298 = 0U;
	int64_t x2299 = INT64_MIN;
	int8_t x2300 = INT8_MIN;
	int64_t t25 = INT64_MAX;

    t25 = ((x2297<<x2298)/(x2299<=x2300));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x2342 = 26U;
	static int8_t x2343 = INT8_MIN;
	uint16_t x2344 = UINT16_MAX;
	uint32_t t26 = 15U;

    t26 = ((x2341<<x2342)/(x2343<=x2344));

    if (t26 != 738197504U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x2358 = 14U;
	static volatile int8_t x2360 = -1;
	volatile int32_t t27 = -72696;

    t27 = ((x2357<<x2358)/(x2359<=x2360));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2425 = UINT64_MAX;
	uint16_t x2426 = 8U;
	uint32_t x2428 = UINT32_MAX;
	static volatile uint64_t t28 = 34136137463320032LLU;

    t28 = ((x2425<<x2426)/(x2427<=x2428));

    if (t28 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x2501 = 9689LLU;
	uint8_t x2502 = 1U;
	int16_t x2503 = -995;
	uint8_t x2504 = UINT8_MAX;
	uint64_t t29 = 25277029289282204LLU;

    t29 = ((x2501<<x2502)/(x2503<=x2504));

    if (t29 != 19378LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x2649 = 5U;
	uint8_t x2650 = 10U;
	int8_t x2651 = 1;
	uint16_t x2652 = 7U;

    t30 = ((x2649<<x2650)/(x2651<=x2652));

    if (t30 != 5120) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2961 = UINT64_MAX;
	int8_t x2962 = 0;
	int32_t x2963 = 0;
	static uint64_t x2964 = 342058543193581LLU;

    t31 = ((x2961<<x2962)/(x2963<=x2964));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2986 = 14U;
	int16_t x2987 = INT16_MIN;
	volatile int64_t x2988 = INT64_MAX;

    t32 = ((x2985<<x2986)/(x2987<=x2988));

    if (t32 != 114688) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2997 = 52;
	int16_t x2998 = 0;
	volatile uint32_t x3000 = UINT32_MAX;
	static volatile int32_t t33 = 200927;

    t33 = ((x2997<<x2998)/(x2999<=x3000));

    if (t33 != 52) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x3345 = 31635521704LLU;
	int8_t x3346 = 54;
	uint64_t x3347 = 14084611LLU;
	static int64_t x3348 = INT64_MIN;

    t34 = ((x3345<<x3346)/(x3347<=x3348));

    if (t34 != 3026418949592973312LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x3535 = 172608786LL;
	static int32_t x3536 = 236614629;
	volatile int32_t t35 = 722;

    t35 = ((x3533<<x3534)/(x3535<=x3536));

    if (t35 != 104) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x3605 = UINT64_MAX;
	uint64_t x3606 = 1LLU;
	uint8_t x3608 = 23U;
	volatile uint64_t t36 = 177172LLU;

    t36 = ((x3605<<x3606)/(x3607<=x3608));

    if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x3641 = INT8_MAX;
	uint64_t x3642 = 1LLU;
	int64_t x3643 = INT64_MIN;
	static int8_t x3644 = INT8_MAX;
	static volatile int32_t t37 = -1;

    t37 = ((x3641<<x3642)/(x3643<=x3644));

    if (t37 != 254) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x3733 = UINT16_MAX;
	int16_t x3734 = 1;
	volatile int64_t x3735 = -1LL;
	uint32_t x3736 = 460U;
	volatile int32_t t38 = 121233066;

    t38 = ((x3733<<x3734)/(x3735<=x3736));

    if (t38 != 131070) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x3905 = UINT8_MAX;
	int8_t x3906 = 0;
	static uint16_t x3908 = 773U;
	int32_t t39 = -1;

    t39 = ((x3905<<x3906)/(x3907<=x3908));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x3959 = -2;
	static uint8_t x3960 = UINT8_MAX;
	int32_t t40 = 10310381;

    t40 = ((x3957<<x3958)/(x3959<=x3960));

    if (t40 != 18) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x3981 = 6668950LLU;
	static volatile int8_t x3982 = 1;
	static uint32_t x3983 = UINT32_MAX;
	volatile uint64_t t41 = 8499079200043LLU;

    t41 = ((x3981<<x3982)/(x3983<=x3984));

    if (t41 != 13337900LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x4077 = INT32_MAX;
	static volatile uint64_t x4079 = 456LLU;
	int8_t x4080 = INT8_MIN;
	int32_t t42 = INT32_MAX;

    t42 = ((x4077<<x4078)/(x4079<=x4080));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x4149 = 136U;
	uint16_t x4150 = 1U;
	volatile int32_t x4151 = -34;
	static int64_t x4152 = 49119927LL;
	uint32_t t43 = 260U;

    t43 = ((x4149<<x4150)/(x4151<=x4152));

    if (t43 != 272U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x4185 = 5U;
	static uint8_t x4186 = 1U;
	int32_t x4187 = INT32_MIN;
	int16_t x4188 = -1;

    t44 = ((x4185<<x4186)/(x4187<=x4188));

    if (t44 != 10) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x4233 = 94495635444327LLU;
	static uint8_t x4234 = 63U;
	uint64_t x4235 = 7939630354715LLU;
	static volatile uint64_t t45 = 12025132833334844LLU;

    t45 = ((x4233<<x4234)/(x4235<=x4236));

    if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x4245 = 1268691LLU;
	static int8_t x4246 = 5;
	volatile uint64_t t46 = 1011862LLU;

    t46 = ((x4245<<x4246)/(x4247<=x4248));

    if (t46 != 40598112LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x4545 = 21747U;
	static uint32_t x4546 = 10U;
	int16_t x4547 = INT16_MIN;
	volatile int32_t t47 = -178;

    t47 = ((x4545<<x4546)/(x4547<=x4548));

    if (t47 != 22268928) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x4613 = 7U;
	int8_t x4614 = 3;
	int32_t x4615 = INT32_MIN;
	volatile uint8_t x4616 = 1U;
	int32_t t48 = -106;

    t48 = ((x4613<<x4614)/(x4615<=x4616));

    if (t48 != 56) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x4873 = 249U;
	uint32_t x4874 = 11U;
	int32_t x4875 = INT32_MIN;
	static int32_t t49 = 1;

    t49 = ((x4873<<x4874)/(x4875<=x4876));

    if (t49 != 509952) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x4941 = 1U;
	int32_t x4942 = 9;
	int8_t x4943 = -1;
	volatile uint16_t x4944 = 918U;
	volatile int32_t t50 = 30853505;

    t50 = ((x4941<<x4942)/(x4943<=x4944));

    if (t50 != 512) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x4977 = INT8_MAX;
	uint32_t x4979 = 86U;
	uint32_t x4980 = 88788541U;

    t51 = ((x4977<<x4978)/(x4979<=x4980));

    if (t51 != 16256) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x5117 = UINT64_MAX;
	uint16_t x5118 = 1U;
	static volatile int32_t x5119 = INT32_MIN;
	volatile uint64_t t52 = 119625910LLU;

    t52 = ((x5117<<x5118)/(x5119<=x5120));

    if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
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


    return 0;
}

