
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

volatile int16_t x131 = -1;
volatile uint32_t x214 = 1U;
int64_t x216 = INT64_MIN;
int16_t x219 = 0;
uint8_t x220 = 1U;
uint8_t x299 = 1U;
volatile uint16_t x332 = 485U;
uint16_t x447 = UINT16_MAX;
uint64_t x448 = 249719652371967888LLU;
uint32_t x767 = 489U;
int16_t x768 = INT16_MAX;
static int32_t t10 = -490151866;
int8_t x820 = INT8_MIN;
static volatile int32_t t11 = -659495;
volatile uint16_t x1017 = 218U;
static volatile int8_t x1035 = INT8_MAX;
static uint8_t x1054 = 7U;
uint16_t x1055 = 137U;
static volatile int64_t x1792 = INT64_MIN;
volatile uint64_t t19 = 182956LLU;
uint32_t t20 = 124U;
uint32_t t21 = 74662382U;
static uint8_t x2062 = 12U;
uint16_t x2094 = 0U;
uint8_t x2113 = 63U;
volatile int32_t t27 = -9071;
static volatile uint8_t x2623 = 44U;
static volatile int32_t t29 = -17185;
volatile int8_t x2663 = INT8_MAX;
int16_t x2664 = 56;
volatile uint8_t x2665 = UINT8_MAX;
static volatile int32_t x2668 = -1;
static uint64_t x2693 = UINT64_MAX;
uint64_t t32 = UINT64_MAX;
uint8_t x2790 = 0U;
static uint16_t x2791 = 2854U;
volatile int32_t t34 = -219425;
uint32_t x2805 = 9541U;
int64_t x2808 = INT64_MAX;
volatile uint32_t t35 = 11457722U;
int64_t x3284 = INT64_MAX;
uint16_t x3378 = 62U;
int16_t x3379 = -1;
volatile int32_t t40 = -12;
static uint64_t x3505 = 1404163652447LLU;
static int8_t x3507 = INT8_MAX;
static volatile uint16_t x3523 = 637U;
int32_t t42 = 2388999;
static uint64_t x3563 = UINT64_MAX;
volatile uint8_t x3769 = UINT8_MAX;
int32_t x3772 = -1;
int32_t t44 = 0;
uint64_t t45 = 17506LLU;
uint8_t x4023 = UINT8_MAX;
int64_t x4024 = INT64_MIN;
uint16_t x4077 = UINT16_MAX;
static int32_t t48 = -1;
int64_t x4149 = 236026711201LL;
uint32_t x4151 = 24U;
int32_t x4265 = INT32_MAX;
volatile int32_t t54 = -12;
uint64_t x4665 = UINT64_MAX;
static volatile int8_t x4667 = INT8_MIN;
uint64_t t57 = 26045LLU;
uint64_t x4841 = 3714409LLU;
uint64_t x4939 = 16305175LLU;
volatile int64_t x5184 = INT64_MIN;
uint8_t x5422 = 60U;
int16_t x5446 = 18;
static volatile int32_t t62 = 79;
uint16_t x5510 = 10U;
int32_t t63 = 817;
uint8_t x5626 = 11U;
static int16_t x5627 = -1;
volatile int16_t x5746 = 45;
int64_t x5748 = INT64_MIN;
volatile int64_t t65 = 1417587530LL;
uint16_t x5904 = 17U;
int8_t x5906 = INT8_MAX;
volatile uint8_t x5993 = 3U;
volatile int16_t x6018 = 0;


void f0(void) {
    	uint64_t x129 = 638651719805477LLU;
	int16_t x130 = 0;
	static int64_t x132 = 96003618264LL;
	static volatile uint64_t t0 = 3959LLU;

    t0 = (x129>>(x130>>(x131/x132)));

    if (t0 != 638651719805477LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x145 = 12875U;
	int16_t x146 = 5;
	static volatile int16_t x147 = INT16_MAX;
	static volatile int32_t x148 = INT32_MIN;
	static int32_t t1 = -2444;

    t1 = (x145>>(x146>>(x147/x148)));

    if (t1 != 402) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x213 = INT32_MAX;
	uint8_t x215 = UINT8_MAX;
	volatile int32_t t2 = -1;

    t2 = (x213>>(x214>>(x215/x216)));

    if (t2 != 1073741823) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x217 = INT16_MAX;
	uint8_t x218 = 18U;
	int32_t t3 = -855757284;

    t3 = (x217>>(x218>>(x219/x220)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x265 = 204;
	uint64_t x266 = 9LLU;
	static volatile int32_t x267 = 1;
	static uint8_t x268 = UINT8_MAX;
	volatile int32_t t4 = -487085213;

    t4 = (x265>>(x266>>(x267/x268)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x297 = 1;
	uint32_t x298 = 0U;
	int16_t x300 = 7;
	int32_t t5 = -1000711110;

    t5 = (x297>>(x298>>(x299/x300)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x329 = 14U;
	volatile int32_t x330 = 1;
	static uint16_t x331 = 2U;
	volatile uint32_t t6 = 6778U;

    t6 = (x329>>(x330>>(x331/x332)));

    if (t6 != 7U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x393 = 51966U;
	uint32_t x394 = 1U;
	volatile int16_t x395 = INT16_MIN;
	static volatile uint16_t x396 = UINT16_MAX;
	volatile uint32_t t7 = 10U;

    t7 = (x393>>(x394>>(x395/x396)));

    if (t7 != 25983U) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x397 = 81461LLU;
	uint8_t x398 = 60U;
	int32_t x399 = 0;
	static uint32_t x400 = 24935U;
	volatile uint64_t t8 = 1184065439049051LLU;

    t8 = (x397>>(x398>>(x399/x400)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x445 = 12942;
	uint64_t x446 = 3LLU;
	int32_t t9 = -729311;

    t9 = (x445>>(x446>>(x447/x448)));

    if (t9 != 1617) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x765 = 740;
	uint8_t x766 = 5U;

    t10 = (x765>>(x766>>(x767/x768)));

    if (t10 != 23) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint8_t x817 = 55U;
	uint64_t x818 = 23894354LLU;
	int16_t x819 = -3789;

    t11 = (x817>>(x818>>(x819/x820)));

    if (t11 != 55) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x849 = INT64_MAX;
	static int8_t x850 = 29;
	static int32_t x851 = 105;
	uint16_t x852 = 25U;
	volatile int64_t t12 = -1327405546988521LL;

    t12 = (x849>>(x850>>(x851/x852)));

    if (t12 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x1018 = 7;
	volatile uint16_t x1019 = 427U;
	static uint8_t x1020 = 74U;
	int32_t t13 = 1;

    t13 = (x1017>>(x1018>>(x1019/x1020)));

    if (t13 != 218) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x1033 = 96U;
	volatile int16_t x1034 = 0;
	uint8_t x1036 = 57U;
	int32_t t14 = 81;

    t14 = (x1033>>(x1034>>(x1035/x1036)));

    if (t14 != 96) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1053 = UINT8_MAX;
	uint16_t x1056 = UINT16_MAX;
	int32_t t15 = 32605190;

    t15 = (x1053>>(x1054>>(x1055/x1056)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1369 = UINT32_MAX;
	static volatile uint8_t x1370 = 3U;
	uint64_t x1371 = UINT64_MAX;
	int8_t x1372 = INT8_MIN;
	volatile uint32_t t16 = 5U;

    t16 = (x1369>>(x1370>>(x1371/x1372)));

    if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x1529 = 35624709915256763LL;
	int8_t x1530 = 1;
	uint16_t x1531 = 150U;
	uint32_t x1532 = UINT32_MAX;
	int64_t t17 = 2438848586114LL;

    t17 = (x1529>>(x1530>>(x1531/x1532)));

    if (t17 != 17812354957628381LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x1789 = UINT16_MAX;
	uint8_t x1790 = 1U;
	int64_t x1791 = INT64_MIN;
	volatile int32_t t18 = -6056;

    t18 = (x1789>>(x1790>>(x1791/x1792)));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1793 = UINT64_MAX;
	int8_t x1794 = 15;
	int32_t x1795 = -1;
	int8_t x1796 = INT8_MIN;

    t19 = (x1793>>(x1794>>(x1795/x1796)));

    if (t19 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x1921 = 1U;
	uint16_t x1922 = 7U;
	uint16_t x1923 = 690U;
	uint32_t x1924 = 1088922U;

    t20 = (x1921>>(x1922>>(x1923/x1924)));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x2021 = 13640628U;
	uint64_t x2022 = 27751LLU;
	int16_t x2023 = 4419;
	uint8_t x2024 = UINT8_MAX;

    t21 = (x2021>>(x2022>>(x2023/x2024)));

    if (t21 != 13640628U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x2029 = INT16_MAX;
	uint16_t x2030 = 1U;
	volatile uint16_t x2031 = 24872U;
	static uint64_t x2032 = 102517010LLU;
	int32_t t22 = -153555307;

    t22 = (x2029>>(x2030>>(x2031/x2032)));

    if (t22 != 16383) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x2061 = 144U;
	static int8_t x2063 = INT8_MIN;
	volatile int16_t x2064 = INT16_MAX;
	int32_t t23 = 270;

    t23 = (x2061>>(x2062>>(x2063/x2064)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x2093 = 14;
	int8_t x2095 = INT8_MIN;
	int64_t x2096 = INT64_MIN;
	int32_t t24 = 0;

    t24 = (x2093>>(x2094>>(x2095/x2096)));

    if (t24 != 14) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x2114 = 0U;
	int16_t x2115 = -1;
	static int16_t x2116 = -1;
	volatile int32_t t25 = -116607081;

    t25 = (x2113>>(x2114>>(x2115/x2116)));

    if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x2461 = 955818U;
	uint8_t x2462 = 5U;
	uint32_t x2463 = 370179249U;
	int32_t x2464 = INT32_MAX;
	volatile uint32_t t26 = 8U;

    t26 = (x2461>>(x2462>>(x2463/x2464)));

    if (t26 != 29869U) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x2517 = 23U;
	int32_t x2518 = 0;
	uint64_t x2519 = 881LLU;
	static volatile int8_t x2520 = INT8_MAX;

    t27 = (x2517>>(x2518>>(x2519/x2520)));

    if (t27 != 23) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x2597 = 1732113U;
	uint16_t x2598 = 228U;
	int32_t x2599 = INT32_MIN;
	int32_t x2600 = -360246840;
	uint32_t t28 = 3073001U;

    t28 = (x2597>>(x2598>>(x2599/x2600)));

    if (t28 != 13532U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2621 = 1;
	uint8_t x2622 = 2U;
	static int32_t x2624 = INT32_MIN;

    t29 = (x2621>>(x2622>>(x2623/x2624)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x2661 = 0U;
	volatile uint8_t x2662 = 9U;
	int32_t t30 = -11;

    t30 = (x2661>>(x2662>>(x2663/x2664)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x2666 = 5U;
	int8_t x2667 = -1;
	volatile int32_t t31 = 249;

    t31 = (x2665>>(x2666>>(x2667/x2668)));

    if (t31 != 63) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x2694 = 1395;
	uint16_t x2695 = 6889U;
	uint8_t x2696 = UINT8_MAX;

    t32 = (x2693>>(x2694>>(x2695/x2696)));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x2765 = INT16_MAX;
	int16_t x2766 = 1;
	int8_t x2767 = 25;
	int32_t x2768 = INT32_MAX;
	volatile int32_t t33 = 107751312;

    t33 = (x2765>>(x2766>>(x2767/x2768)));

    if (t33 != 16383) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x2789 = 6U;
	uint16_t x2792 = 14943U;

    t34 = (x2789>>(x2790>>(x2791/x2792)));

    if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x2806 = 25U;
	static volatile uint32_t x2807 = UINT32_MAX;

    t35 = (x2805>>(x2806>>(x2807/x2808)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x3097 = INT64_MAX;
	static uint32_t x3098 = 26U;
	static uint16_t x3099 = 888U;
	uint32_t x3100 = 242283132U;
	volatile int64_t t36 = 815487595155918LL;

    t36 = (x3097>>(x3098>>(x3099/x3100)));

    if (t36 != 137438953471LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x3209 = INT8_MAX;
	static uint8_t x3210 = 0U;
	volatile int16_t x3211 = INT16_MIN;
	static uint32_t x3212 = UINT32_MAX;
	static int32_t t37 = -3790;

    t37 = (x3209>>(x3210>>(x3211/x3212)));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x3221 = 181832102U;
	uint8_t x3222 = 3U;
	uint32_t x3223 = 60881U;
	volatile int64_t x3224 = INT64_MAX;
	uint32_t t38 = 2057839U;

    t38 = (x3221>>(x3222>>(x3223/x3224)));

    if (t38 != 22729012U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x3281 = 118;
	static int8_t x3282 = 0;
	volatile uint64_t x3283 = UINT64_MAX;
	volatile int32_t t39 = -76483702;

    t39 = (x3281>>(x3282>>(x3283/x3284)));

    if (t39 != 118) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x3377 = 67076137;
	int16_t x3380 = -1;

    t40 = (x3377>>(x3378>>(x3379/x3380)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x3506 = 1;
	volatile int64_t x3508 = INT64_MIN;
	uint64_t t41 = 50479447481765229LLU;

    t41 = (x3505>>(x3506>>(x3507/x3508)));

    if (t41 != 702081826223LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x3521 = INT8_MAX;
	int8_t x3522 = 1;
	int64_t x3524 = INT64_MAX;

    t42 = (x3521>>(x3522>>(x3523/x3524)));

    if (t42 != 63) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint32_t x3561 = UINT32_MAX;
	uint8_t x3562 = 4U;
	int32_t x3564 = INT32_MIN;
	uint32_t t43 = 228666617U;

    t43 = (x3561>>(x3562>>(x3563/x3564)));

    if (t43 != 1073741823U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x3770 = 0U;
	uint32_t x3771 = UINT32_MAX;

    t44 = (x3769>>(x3770>>(x3771/x3772)));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x3949 = 9090489LLU;
	uint8_t x3950 = 0U;
	int64_t x3951 = INT64_MIN;
	static uint64_t x3952 = UINT64_MAX;

    t45 = (x3949>>(x3950>>(x3951/x3952)));

    if (t45 != 9090489LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x4021 = 1;
	volatile int8_t x4022 = 1;
	int32_t t46 = 31449722;

    t46 = (x4021>>(x4022>>(x4023/x4024)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x4078 = 11U;
	int32_t x4079 = INT32_MAX;
	uint64_t x4080 = 30277672906802100LLU;
	volatile int32_t t47 = 1;

    t47 = (x4077>>(x4078>>(x4079/x4080)));

    if (t47 != 31) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x4097 = 0U;
	volatile int16_t x4098 = 7;
	volatile int64_t x4099 = -1LL;
	int8_t x4100 = 7;

    t48 = (x4097>>(x4098>>(x4099/x4100)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x4150 = 0U;
	static uint8_t x4152 = UINT8_MAX;
	volatile int64_t t49 = 524507256946LL;

    t49 = (x4149>>(x4150>>(x4151/x4152)));

    if (t49 != 236026711201LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x4266 = 0;
	uint32_t x4267 = 684063354U;
	int8_t x4268 = INT8_MIN;
	static int32_t t50 = INT32_MAX;

    t50 = (x4265>>(x4266>>(x4267/x4268)));

    if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x4273 = 541U;
	volatile uint16_t x4274 = 17U;
	int16_t x4275 = INT16_MAX;
	int32_t x4276 = 3782;
	volatile int32_t t51 = 182032938;

    t51 = (x4273>>(x4274>>(x4275/x4276)));

    if (t51 != 541) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x4349 = INT16_MAX;
	volatile uint8_t x4350 = 1U;
	volatile int32_t x4351 = 40303;
	uint32_t x4352 = 1284U;
	static volatile int32_t t52 = 892505;

    t52 = (x4349>>(x4350>>(x4351/x4352)));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x4365 = INT32_MAX;
	uint8_t x4366 = 9U;
	volatile uint8_t x4367 = 0U;
	uint64_t x4368 = UINT64_MAX;
	int32_t t53 = -4768653;

    t53 = (x4365>>(x4366>>(x4367/x4368)));

    if (t53 != 4194303) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x4533 = INT8_MAX;
	volatile uint16_t x4534 = 0U;
	int32_t x4535 = -1;
	int8_t x4536 = INT8_MAX;

    t54 = (x4533>>(x4534>>(x4535/x4536)));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x4545 = 48U;
	int8_t x4546 = INT8_MAX;
	static int16_t x4547 = -1743;
	int8_t x4548 = INT8_MIN;
	int32_t t55 = 776419;

    t55 = (x4545>>(x4546>>(x4547/x4548)));

    if (t55 != 48) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x4666 = 31;
	int64_t x4668 = INT64_MIN;
	static volatile uint64_t t56 = 896154LLU;

    t56 = (x4665>>(x4666>>(x4667/x4668)));

    if (t56 != 8589934591LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x4741 = UINT64_MAX;
	static volatile uint8_t x4742 = 1U;
	int32_t x4743 = -1;
	int16_t x4744 = 128;

    t57 = (x4741>>(x4742>>(x4743/x4744)));

    if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x4842 = 8;
	uint8_t x4843 = UINT8_MAX;
	int64_t x4844 = INT64_MIN;
	volatile uint64_t t58 = 17082694101874640LLU;

    t58 = (x4841>>(x4842>>(x4843/x4844)));

    if (t58 != 14509LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x4937 = 10LL;
	static uint8_t x4938 = 0U;
	int8_t x4940 = INT8_MIN;
	int64_t t59 = 335476LL;

    t59 = (x4937>>(x4938>>(x4939/x4940)));

    if (t59 != 10LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x5181 = 273044741756548963LLU;
	static int8_t x5182 = 22;
	static uint64_t x5183 = 95458141647129LLU;
	uint64_t t60 = 1040579914LLU;

    t60 = (x5181>>(x5182>>(x5183/x5184)));

    if (t60 != 65098939360LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x5421 = 472068511U;
	int16_t x5423 = -1;
	uint64_t x5424 = UINT64_MAX;
	uint32_t t61 = 1694264144U;

    t61 = (x5421>>(x5422>>(x5423/x5424)));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x5445 = 3U;
	int64_t x5447 = -1LL;
	int16_t x5448 = INT16_MIN;

    t62 = (x5445>>(x5446>>(x5447/x5448)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x5509 = UINT16_MAX;
	uint32_t x5511 = 55908784U;
	volatile int16_t x5512 = INT16_MIN;

    t63 = (x5509>>(x5510>>(x5511/x5512)));

    if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x5625 = 162661221310596395LLU;
	volatile int16_t x5628 = -1;
	uint64_t t64 = 613026490803566466LLU;

    t64 = (x5625>>(x5626>>(x5627/x5628)));

    if (t64 != 5083163165956137LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x5745 = 1107LL;
	int8_t x5747 = INT8_MIN;

    t65 = (x5745>>(x5746>>(x5747/x5748)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x5901 = 2042984957035022LLU;
	int64_t x5902 = 43LL;
	static uint16_t x5903 = 214U;
	uint64_t t66 = 1209840578239673839LLU;

    t66 = (x5901>>(x5902>>(x5903/x5904)));

    if (t66 != 2042984957035022LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x5905 = 16049224442739505LLU;
	volatile uint8_t x5907 = UINT8_MAX;
	uint8_t x5908 = 54U;
	volatile uint64_t t67 = 449874344948622LLU;

    t67 = (x5905>>(x5906>>(x5907/x5908)));

    if (t67 != 125384565958902LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x5989 = INT32_MAX;
	uint16_t x5990 = 0U;
	volatile uint8_t x5991 = UINT8_MAX;
	static uint32_t x5992 = 1047226450U;
	volatile int32_t t68 = INT32_MAX;

    t68 = (x5989>>(x5990>>(x5991/x5992)));

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x5994 = 15U;
	int8_t x5995 = -1;
	int32_t x5996 = -1;
	volatile int32_t t69 = 0;

    t69 = (x5993>>(x5994>>(x5995/x5996)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x6017 = 31492U;
	uint16_t x6019 = 784U;
	uint8_t x6020 = UINT8_MAX;
	int32_t t70 = -1;

    t70 = (x6017>>(x6018>>(x6019/x6020)));

    if (t70 != 31492) { NG(); } else { ; }
	
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


    return 0;
}

