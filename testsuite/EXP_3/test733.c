
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

int8_t x110 = 1;
static uint32_t x402 = 7U;
int32_t x467 = INT32_MIN;
static volatile uint16_t x590 = 15U;
int8_t x591 = INT8_MAX;
int32_t t4 = -60;
volatile uint32_t x690 = 7U;
static int32_t x1111 = INT32_MIN;
static uint32_t x1252 = 7U;
static int32_t x1551 = -1;
int32_t x1753 = 8;
uint16_t x1756 = 10079U;
volatile uint8_t x1930 = 0U;
int16_t x1931 = INT16_MIN;
volatile int64_t t13 = 1855LL;
static uint64_t x2321 = 26LLU;
uint64_t t14 = 45703512977109827LLU;
static int32_t x2471 = INT32_MIN;
volatile int32_t t16 = -93725;
int64_t x2810 = 1LL;
static int16_t x2846 = 5;
int64_t x2847 = INT64_MIN;
volatile int16_t x3412 = INT16_MAX;
uint16_t x3510 = 0U;
uint8_t x3530 = 1U;
static volatile uint32_t t26 = 2U;
uint64_t x3860 = 102LLU;
volatile uint64_t t34 = 1006142056886LLU;
volatile uint64_t t35 = 15868138LLU;
uint8_t x4951 = UINT8_MAX;
volatile uint64_t t36 = 9222365289LLU;
uint8_t x5112 = 2U;
uint64_t x5385 = 20LLU;
int32_t x5493 = INT32_MAX;
int8_t x5494 = 1;
static int16_t x5495 = -1;
int16_t x5513 = 1;
uint8_t x5514 = 10U;
static int32_t x5515 = 94;
int16_t x5516 = -1;
int32_t x5527 = INT32_MIN;
volatile int64_t t43 = -1388110002105468LL;
uint8_t x5962 = 31U;
uint64_t x5963 = 311752541342122298LLU;
int64_t x5964 = 11987060175912LL;
static volatile int64_t t45 = -300LL;
int8_t x6129 = 31;
int64_t t46 = 162277861134435LL;
static volatile int8_t x6142 = 29;
static volatile int64_t t48 = 1LL;
int16_t x6247 = -191;
static int64_t t50 = -882768083379470LL;
static uint64_t x6524 = 185096988653058LLU;
uint64_t t51 = 1001523LLU;
volatile uint16_t x6766 = 1U;
int8_t x6886 = 0;
volatile int8_t x6887 = INT8_MAX;
int8_t x6996 = -54;
static int64_t x7043 = -1084308219LL;
volatile uint64_t t56 = 538402481LLU;
int32_t x7048 = -1;
static volatile int8_t x7143 = INT8_MIN;
uint32_t x7200 = 371721720U;


void f0(void) {
    	volatile uint16_t x1 = 595U;
	uint8_t x2 = 0U;
	int16_t x3 = INT16_MAX;
	uint32_t x4 = 121U;
	volatile uint32_t t0 = 365U;

    t0 = ((x1>>x2)%(x3/x4));

    if (t0 != 55U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x109 = INT16_MAX;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = 3416U;
	int32_t t1 = -214813;

    t1 = ((x109>>x110)%(x111/x112));

    if (t1 != 16383) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x401 = 1636U;
	static int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MIN;
	int64_t t2 = 367519694LL;

    t2 = ((x401>>x402)%(x403/x404));

    if (t2 != 12LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x465 = UINT8_MAX;
	static int8_t x466 = 31;
	static int32_t x468 = 86800;
	int32_t t3 = 320506997;

    t3 = ((x465>>x466)%(x467/x468));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x589 = INT32_MAX;
	volatile uint8_t x592 = 38U;

    t4 = ((x589>>x590)%(x591/x592));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x689 = INT8_MAX;
	static int64_t x691 = -163759170576226875LL;
	int16_t x692 = INT16_MIN;
	static volatile int64_t t5 = -101LL;

    t5 = ((x689>>x690)%(x691/x692));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x929 = 234;
	int8_t x930 = 0;
	int64_t x931 = INT64_MIN;
	static int64_t x932 = 64LL;
	int64_t t6 = -2017974542044515LL;

    t6 = ((x929>>x930)%(x931/x932));

    if (t6 != 234LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x1109 = UINT8_MAX;
	uint8_t x1110 = 4U;
	int32_t x1112 = -1167192;
	int32_t t7 = 0;

    t7 = ((x1109>>x1110)%(x1111/x1112));

    if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x1249 = 15976632U;
	volatile uint16_t x1250 = 14U;
	static uint32_t x1251 = UINT32_MAX;
	static uint32_t t8 = 832530882U;

    t8 = ((x1249>>x1250)%(x1251/x1252));

    if (t8 != 975U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1549 = INT8_MAX;
	int16_t x1550 = 1;
	uint64_t x1552 = UINT64_MAX;
	uint64_t t9 = 62285386666347LLU;

    t9 = ((x1549>>x1550)%(x1551/x1552));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x1754 = 5;
	int32_t x1755 = INT32_MAX;
	int32_t t10 = -118918;

    t10 = ((x1753>>x1754)%(x1755/x1756));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1929 = 455;
	volatile int16_t x1932 = INT16_MIN;
	int32_t t11 = -1;

    t11 = ((x1929>>x1930)%(x1931/x1932));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x1993 = 76LLU;
	int8_t x1994 = 26;
	int8_t x1995 = INT8_MIN;
	uint32_t x1996 = 221067U;
	volatile uint64_t t12 = 19484037446LLU;

    t12 = ((x1993>>x1994)%(x1995/x1996));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x2113 = INT64_MAX;
	static volatile uint8_t x2114 = 35U;
	uint32_t x2115 = UINT32_MAX;
	static uint8_t x2116 = 117U;

    t13 = ((x2113>>x2114)%(x2115/x2116));

    if (t13 != 11471601LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x2322 = 2U;
	static uint32_t x2323 = UINT32_MAX;
	uint8_t x2324 = 98U;

    t14 = ((x2321>>x2322)%(x2323/x2324));

    if (t14 != 6LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x2417 = 14322;
	int32_t x2418 = 9;
	int16_t x2419 = INT16_MIN;
	int32_t x2420 = -1;
	int32_t t15 = -134932;

    t15 = ((x2417>>x2418)%(x2419/x2420));

    if (t15 != 27) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x2469 = INT16_MAX;
	int16_t x2470 = 2;
	uint8_t x2472 = 3U;

    t16 = ((x2469>>x2470)%(x2471/x2472));

    if (t16 != 8191) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x2669 = 15948U;
	uint8_t x2670 = 15U;
	volatile int32_t x2671 = INT32_MIN;
	volatile int8_t x2672 = INT8_MIN;
	uint32_t t17 = 5901U;

    t17 = ((x2669>>x2670)%(x2671/x2672));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x2809 = 215U;
	int32_t x2811 = 12288;
	static int16_t x2812 = -1;
	volatile int32_t t18 = -3;

    t18 = ((x2809>>x2810)%(x2811/x2812));

    if (t18 != 107) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x2845 = 1;
	uint64_t x2848 = 7LLU;
	uint64_t t19 = 0LLU;

    t19 = ((x2845>>x2846)%(x2847/x2848));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x2997 = 117;
	static uint8_t x2998 = 9U;
	volatile int8_t x2999 = INT8_MIN;
	static int32_t x3000 = -1;
	volatile int32_t t20 = -21029;

    t20 = ((x2997>>x2998)%(x2999/x3000));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x3061 = 249891LLU;
	int16_t x3062 = 4;
	uint8_t x3063 = UINT8_MAX;
	volatile int64_t x3064 = -1LL;
	volatile uint64_t t21 = 482LLU;

    t21 = ((x3061>>x3062)%(x3063/x3064));

    if (t21 != 15618LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x3329 = 131735;
	int8_t x3330 = 0;
	static int16_t x3331 = INT16_MIN;
	uint16_t x3332 = 5U;
	static volatile int32_t t22 = -1431666;

    t22 = ((x3329>>x3330)%(x3331/x3332));

    if (t22 != 675) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x3409 = UINT8_MAX;
	int8_t x3410 = 2;
	static int32_t x3411 = INT32_MIN;
	int32_t t23 = 145;

    t23 = ((x3409>>x3410)%(x3411/x3412));

    if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x3469 = 786U;
	uint32_t x3470 = 14U;
	static uint32_t x3471 = 1794U;
	uint8_t x3472 = 2U;
	uint32_t t24 = 1U;

    t24 = ((x3469>>x3470)%(x3471/x3472));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x3509 = 1LLU;
	volatile int32_t x3511 = -222071206;
	static int8_t x3512 = INT8_MIN;
	uint64_t t25 = 4329253237616LLU;

    t25 = ((x3509>>x3510)%(x3511/x3512));

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x3529 = UINT32_MAX;
	static int8_t x3531 = INT8_MIN;
	int8_t x3532 = INT8_MAX;

    t26 = ((x3529>>x3530)%(x3531/x3532));

    if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x3565 = INT8_MAX;
	int64_t x3566 = 1LL;
	uint16_t x3567 = 154U;
	static int8_t x3568 = INT8_MIN;
	int32_t t27 = -1;

    t27 = ((x3565>>x3566)%(x3567/x3568));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x3573 = INT64_MAX;
	static int8_t x3574 = 6;
	uint64_t x3575 = UINT64_MAX;
	uint64_t x3576 = 19711602428719LLU;
	uint64_t t28 = 23816419583247LLU;

    t28 = ((x3573>>x3574)%(x3575/x3576));

    if (t28 != 758814LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x3577 = UINT32_MAX;
	uint64_t x3578 = 1LLU;
	volatile uint32_t x3579 = 224721U;
	static uint16_t x3580 = UINT16_MAX;
	volatile uint32_t t29 = 26U;

    t29 = ((x3577>>x3578)%(x3579/x3580));

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x3793 = UINT16_MAX;
	volatile int8_t x3794 = 0;
	static volatile int8_t x3795 = INT8_MIN;
	int32_t x3796 = -108;
	volatile int32_t t30 = -134;

    t30 = ((x3793>>x3794)%(x3795/x3796));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x3857 = INT64_MAX;
	int16_t x3858 = 55;
	volatile int32_t x3859 = -1;
	uint64_t t31 = 17LLU;

    t31 = ((x3857>>x3858)%(x3859/x3860));

    if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x3961 = 6167380988LLU;
	uint32_t x3962 = 22U;
	static uint64_t x3963 = 76470431245LLU;
	static uint32_t x3964 = 1036000U;
	uint64_t t32 = 13751LLU;

    t32 = ((x3961>>x3962)%(x3963/x3964));

    if (t32 != 1470LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x4289 = INT16_MAX;
	uint16_t x4290 = 6U;
	uint64_t x4291 = UINT64_MAX;
	int8_t x4292 = INT8_MAX;
	static volatile uint64_t t33 = 0LLU;

    t33 = ((x4289>>x4290)%(x4291/x4292));

    if (t33 != 511LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x4489 = 1626711LLU;
	volatile uint8_t x4490 = 2U;
	static uint8_t x4491 = UINT8_MAX;
	volatile int32_t x4492 = -1;

    t34 = ((x4489>>x4490)%(x4491/x4492));

    if (t34 != 406677LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x4665 = 1LLU;
	int64_t x4666 = 7LL;
	volatile int32_t x4667 = INT32_MAX;
	static int64_t x4668 = -150LL;

    t35 = ((x4665>>x4666)%(x4667/x4668));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x4949 = UINT64_MAX;
	volatile uint8_t x4950 = 1U;
	static uint16_t x4952 = 7U;

    t36 = ((x4949>>x4950)%(x4951/x4952));

    if (t36 != 7LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x5069 = INT8_MAX;
	uint8_t x5070 = 4U;
	static int32_t x5071 = INT32_MIN;
	uint8_t x5072 = UINT8_MAX;
	static int32_t t37 = 5;

    t37 = ((x5069>>x5070)%(x5071/x5072));

    if (t37 != 7) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x5109 = UINT16_MAX;
	volatile uint8_t x5110 = 0U;
	int8_t x5111 = INT8_MIN;
	static volatile int32_t t38 = 82;

    t38 = ((x5109>>x5110)%(x5111/x5112));

    if (t38 != 63) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x5386 = 1;
	static int64_t x5387 = -5425209LL;
	uint8_t x5388 = 15U;
	volatile uint64_t t39 = 29657571LLU;

    t39 = ((x5385>>x5386)%(x5387/x5388));

    if (t39 != 10LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x5496 = -1;
	static volatile int32_t t40 = 30192;

    t40 = ((x5493>>x5494)%(x5495/x5496));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t t41 = -24557355;

    t41 = ((x5513>>x5514)%(x5515/x5516));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x5525 = UINT16_MAX;
	static volatile int8_t x5526 = 1;
	static uint8_t x5528 = 83U;
	static volatile int32_t t42 = 0;

    t42 = ((x5525>>x5526)%(x5527/x5528));

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x5589 = 6108;
	static int32_t x5590 = 18;
	volatile int64_t x5591 = INT64_MIN;
	int32_t x5592 = 436197;

    t43 = ((x5589>>x5590)%(x5591/x5592));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x5961 = INT32_MAX;
	static uint64_t t44 = 148433127LLU;

    t44 = ((x5961>>x5962)%(x5963/x5964));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x6029 = UINT8_MAX;
	static volatile uint8_t x6030 = 1U;
	int64_t x6031 = INT64_MAX;
	uint8_t x6032 = 21U;

    t45 = ((x6029>>x6030)%(x6031/x6032));

    if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x6130 = 15U;
	static int64_t x6131 = INT64_MIN;
	int16_t x6132 = INT16_MAX;

    t46 = ((x6129>>x6130)%(x6131/x6132));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x6141 = 79LLU;
	int16_t x6143 = INT16_MIN;
	uint64_t x6144 = 15812884585173276LLU;
	static uint64_t t47 = 4300562290836LLU;

    t47 = ((x6141>>x6142)%(x6143/x6144));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x6149 = 753593003491241LL;
	uint64_t x6150 = 40LLU;
	int16_t x6151 = 2722;
	uint32_t x6152 = 11U;

    t48 = ((x6149>>x6150)%(x6151/x6152));

    if (t48 != 191LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x6245 = 1678LLU;
	static uint8_t x6246 = 22U;
	uint64_t x6248 = 4539021LLU;
	uint64_t t49 = 142957125810LLU;

    t49 = ((x6245>>x6246)%(x6247/x6248));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x6361 = 9U;
	volatile uint32_t x6362 = 2U;
	volatile int64_t x6363 = INT64_MIN;
	int32_t x6364 = INT32_MIN;

    t50 = ((x6361>>x6362)%(x6363/x6364));

    if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x6521 = 186193023138124LLU;
	int16_t x6522 = 10;
	int8_t x6523 = -1;

    t51 = ((x6521>>x6522)%(x6523/x6524));

    if (t51 != 82750LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x6697 = INT8_MAX;
	uint8_t x6698 = 5U;
	volatile int16_t x6699 = INT16_MIN;
	static volatile uint8_t x6700 = 86U;
	static volatile int32_t t52 = -422653;

    t52 = ((x6697>>x6698)%(x6699/x6700));

    if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x6765 = INT16_MAX;
	uint16_t x6767 = 6620U;
	int32_t x6768 = -1;
	static int32_t t53 = -15;

    t53 = ((x6765>>x6766)%(x6767/x6768));

    if (t53 != 3143) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x6885 = 3;
	static int32_t x6888 = 86;
	int32_t t54 = 276861;

    t54 = ((x6885>>x6886)%(x6887/x6888));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x6993 = 516048285323972LL;
	uint16_t x6994 = 1U;
	int32_t x6995 = INT32_MAX;
	volatile int64_t t55 = -480LL;

    t55 = ((x6993>>x6994)%(x6995/x6996));

    if (t55 != 10098986LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x7041 = 0;
	int16_t x7042 = 0;
	static uint64_t x7044 = 92485468840959555LLU;

    t56 = ((x7041>>x7042)%(x7043/x7044));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x7045 = 0LLU;
	int16_t x7046 = 39;
	int16_t x7047 = INT16_MIN;
	uint64_t t57 = 59872LLU;

    t57 = ((x7045>>x7046)%(x7047/x7048));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x7141 = 28U;
	uint8_t x7142 = 22U;
	static uint16_t x7144 = 84U;
	static volatile int32_t t58 = 12;

    t58 = ((x7141>>x7142)%(x7143/x7144));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x7197 = INT16_MAX;
	int8_t x7198 = 1;
	static int8_t x7199 = -34;
	uint32_t t59 = 76434955U;

    t59 = ((x7197>>x7198)%(x7199/x7200));

    if (t59 != 4U) { NG(); } else { ; }
	
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


    return 0;
}

