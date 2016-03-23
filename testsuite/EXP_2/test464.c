
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

volatile int32_t x95 = -1;
uint64_t t3 = 36277LLU;
static uint32_t x697 = 52824103U;
uint32_t x698 = UINT32_MAX;
static int8_t x700 = 2;
int8_t x835 = 0;
volatile int16_t x846 = 0;
volatile int32_t x848 = 267;
int32_t x904 = INT32_MAX;
uint16_t x913 = UINT16_MAX;
volatile int16_t x916 = -49;
int8_t x939 = -1;
int32_t t10 = -3;
uint8_t x973 = 24U;
int32_t x1022 = -1;
uint32_t x1065 = 56U;
uint64_t x1066 = 651LLU;
static volatile uint32_t t13 = 202572U;
uint8_t x1218 = 0U;
int64_t t15 = -62LL;
int16_t x1277 = 2273;
static int8_t x1705 = INT8_MAX;
int64_t x1830 = INT64_MIN;
uint16_t x1831 = 0U;
int16_t x1950 = 0;
uint64_t t25 = 294380737265079510LLU;
volatile uint64_t x2445 = 2296033919422927LLU;
int64_t x2458 = INT64_MIN;
static int64_t x2561 = INT64_MAX;
uint32_t x2661 = UINT32_MAX;
uint64_t x2722 = 242414LLU;
int64_t x2723 = INT64_MIN;
volatile int32_t t34 = 3945;
volatile int16_t x2925 = INT16_MAX;
int64_t x3077 = INT64_MAX;
int16_t x3079 = 0;
uint64_t x3080 = 27498303174287270LLU;
static int8_t x3145 = INT8_MAX;
volatile int8_t x3146 = 3;
int32_t t38 = -87802;
static int16_t x3711 = -1;


void f0(void) {
    	int16_t x93 = 0;
	int8_t x94 = -1;
	static uint32_t x96 = UINT32_MAX;
	uint32_t t0 = 10U;

    t0 = ((x93<<(x94*x95))-x96);

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x165 = 79U;
	volatile int32_t x166 = INT32_MIN;
	static uint32_t x167 = 2774960U;
	int16_t x168 = 695;
	int32_t t1 = 0;

    t1 = ((x165<<(x166*x167))-x168);

    if (t1 != -616) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x245 = 40U;
	int64_t x246 = 0LL;
	int8_t x247 = INT8_MAX;
	int64_t x248 = 58944737666057079LL;
	volatile int64_t t2 = -251578569798832756LL;

    t2 = ((x245<<(x246*x247))-x248);

    if (t2 != -58944737666057039LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x337 = 185109343369LLU;
	static uint32_t x338 = UINT32_MAX;
	static uint32_t x339 = UINT32_MAX;
	uint8_t x340 = UINT8_MAX;

    t3 = ((x337<<(x338*x339))-x340);

    if (t3 != 370218686483LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x373 = INT32_MAX;
	static uint8_t x374 = UINT8_MAX;
	int8_t x375 = 0;
	int16_t x376 = INT16_MAX;
	int32_t t4 = -21;

    t4 = ((x373<<(x374*x375))-x376);

    if (t4 != 2147450880) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x699 = UINT32_MAX;
	volatile uint32_t t5 = 0U;

    t5 = ((x697<<(x698*x699))-x700);

    if (t5 != 105648204U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x833 = 62U;
	int64_t x834 = -1LL;
	volatile uint16_t x836 = 1U;
	volatile int32_t t6 = 466790;

    t6 = ((x833<<(x834*x835))-x836);

    if (t6 != 61) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x845 = 109543814612190508LL;
	static int16_t x847 = INT16_MIN;
	int64_t t7 = -2898189LL;

    t7 = ((x845<<(x846*x847))-x848);

    if (t7 != 109543814612190241LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x901 = 1;
	uint32_t x902 = 30U;
	volatile int32_t x903 = INT32_MIN;
	volatile int32_t t8 = 1307;

    t8 = ((x901<<(x902*x903))-x904);

    if (t8 != -2147483646) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x914 = UINT32_MAX;
	static int8_t x915 = -1;
	int32_t t9 = 3368430;

    t9 = ((x913<<(x914*x915))-x916);

    if (t9 != 131119) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x937 = 61;
	volatile uint64_t x938 = UINT64_MAX;
	int32_t x940 = -101542637;

    t10 = ((x937<<(x938*x939))-x940);

    if (t10 != 101542759) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x974 = 927U;
	int16_t x975 = 0;
	static int32_t x976 = -843462765;
	int32_t t11 = -5963;

    t11 = ((x973<<(x974*x975))-x976);

    if (t11 != 843462789) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x1021 = 151U;
	int64_t x1023 = -1LL;
	int16_t x1024 = INT16_MAX;
	uint32_t t12 = 513910110U;

    t12 = ((x1021<<(x1022*x1023))-x1024);

    if (t12 != 4294934831U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x1067 = 0U;
	int8_t x1068 = -1;

    t13 = ((x1065<<(x1066*x1067))-x1068);

    if (t13 != 57U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1217 = 0;
	int16_t x1219 = 0;
	int64_t x1220 = -1LL;
	int64_t t14 = -3322542343914LL;

    t14 = ((x1217<<(x1218*x1219))-x1220);

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x1253 = UINT32_MAX;
	uint16_t x1254 = 0U;
	uint64_t x1255 = UINT64_MAX;
	int64_t x1256 = -388639951859LL;

    t15 = ((x1253<<(x1254*x1255))-x1256);

    if (t15 != 392934919154LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1278 = 14U;
	uint8_t x1279 = 0U;
	int8_t x1280 = INT8_MIN;
	static int32_t t16 = -15765626;

    t16 = ((x1277<<(x1278*x1279))-x1280);

    if (t16 != 2401) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1445 = 1U;
	uint32_t x1446 = UINT32_MAX;
	static uint32_t x1447 = UINT32_MAX;
	uint64_t x1448 = 2LLU;
	uint64_t t17 = 70203651LLU;

    t17 = ((x1445<<(x1446*x1447))-x1448);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1485 = 7261867397LL;
	static int16_t x1486 = 1;
	uint16_t x1487 = 8U;
	int64_t x1488 = -514392032767LL;
	static int64_t t18 = -18398859LL;

    t18 = ((x1485<<(x1486*x1487))-x1488);

    if (t18 != 2373430086399LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1706 = 0;
	static volatile uint8_t x1707 = 1U;
	static uint32_t x1708 = 2U;
	uint32_t t19 = 655U;

    t19 = ((x1705<<(x1706*x1707))-x1708);

    if (t19 != 125U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1829 = 6U;
	int16_t x1832 = INT16_MAX;
	volatile int32_t t20 = -1285;

    t20 = ((x1829<<(x1830*x1831))-x1832);

    if (t20 != -32761) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1949 = UINT8_MAX;
	uint8_t x1951 = 4U;
	int8_t x1952 = INT8_MIN;
	volatile int32_t t21 = -5;

    t21 = ((x1949<<(x1950*x1951))-x1952);

    if (t21 != 383) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x2177 = 533284226U;
	volatile int64_t x2178 = INT64_MAX;
	int8_t x2179 = 0;
	volatile int64_t x2180 = -1LL;
	volatile int64_t t22 = 3426165LL;

    t22 = ((x2177<<(x2178*x2179))-x2180);

    if (t22 != 533284227LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x2345 = UINT16_MAX;
	int8_t x2346 = 0;
	int32_t x2347 = INT32_MAX;
	static int32_t x2348 = -1;
	int32_t t23 = -69343;

    t23 = ((x2345<<(x2346*x2347))-x2348);

    if (t23 != 65536) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x2421 = UINT32_MAX;
	int8_t x2422 = -1;
	volatile int16_t x2423 = 0;
	volatile uint32_t x2424 = 420749U;
	uint32_t t24 = 3651U;

    t24 = ((x2421<<(x2422*x2423))-x2424);

    if (t24 != 4294546546U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x2429 = 1;
	int32_t x2430 = 49075417;
	uint8_t x2431 = 0U;
	uint64_t x2432 = 2154967594873465LLU;

    t25 = ((x2429<<(x2430*x2431))-x2432);

    if (t25 != 18444589106114678152LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x2441 = 5U;
	int16_t x2442 = 9;
	uint8_t x2443 = 0U;
	int16_t x2444 = INT16_MIN;
	int32_t t26 = 66;

    t26 = ((x2441<<(x2442*x2443))-x2444);

    if (t26 != 32773) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x2446 = 30U;
	static uint16_t x2447 = 0U;
	uint32_t x2448 = UINT32_MAX;
	uint64_t t27 = 138888LLU;

    t27 = ((x2445<<(x2446*x2447))-x2448);

    if (t27 != 2296029624455632LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x2457 = 1U;
	uint64_t x2459 = 24619260LLU;
	volatile int8_t x2460 = -1;
	volatile uint32_t t28 = 5717U;

    t28 = ((x2457<<(x2458*x2459))-x2460);

    if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x2562 = 0U;
	volatile uint8_t x2563 = 25U;
	int8_t x2564 = 3;
	volatile int64_t t29 = -4511959090882656649LL;

    t29 = ((x2561<<(x2562*x2563))-x2564);

    if (t29 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x2573 = 44U;
	volatile int16_t x2574 = -1;
	volatile int8_t x2575 = 0;
	int8_t x2576 = -1;
	volatile int32_t t30 = 6;

    t30 = ((x2573<<(x2574*x2575))-x2576);

    if (t30 != 45) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x2662 = -1LL;
	int16_t x2663 = 0;
	int64_t x2664 = -2981244382902078659LL;
	int64_t t31 = 5492765643LL;

    t31 = ((x2661<<(x2662*x2663))-x2664);

    if (t31 != 2981244387197045954LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2665 = 5U;
	volatile int8_t x2666 = -1;
	volatile int16_t x2667 = 0;
	int16_t x2668 = -173;
	int32_t t32 = 3;

    t32 = ((x2665<<(x2666*x2667))-x2668);

    if (t32 != 178) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2721 = 1641U;
	uint64_t x2724 = 60700733LLU;
	volatile uint64_t t33 = 6251023672529LLU;

    t33 = ((x2721<<(x2722*x2723))-x2724);

    if (t33 != 18446744073648852524LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2857 = INT8_MAX;
	volatile uint32_t x2858 = 14092U;
	int8_t x2859 = 0;
	int16_t x2860 = INT16_MAX;

    t34 = ((x2857<<(x2858*x2859))-x2860);

    if (t34 != -32640) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2926 = -3;
	static int8_t x2927 = 0;
	uint64_t x2928 = UINT64_MAX;
	volatile uint64_t t35 = 8675215789846380723LLU;

    t35 = ((x2925<<(x2926*x2927))-x2928);

    if (t35 != 32768LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x3078 = -1LL;
	volatile uint64_t t36 = 266341477811LLU;

    t36 = ((x3077<<(x3078*x3079))-x3080);

    if (t36 != 9195873733680488537LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x3137 = 7457015U;
	int16_t x3138 = -1;
	int16_t x3139 = -1;
	int16_t x3140 = INT16_MAX;
	volatile uint32_t t37 = 6U;

    t37 = ((x3137<<(x3138*x3139))-x3140);

    if (t37 != 14881263U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x3147 = 8;
	int8_t x3148 = -6;

    t38 = ((x3145<<(x3146*x3147))-x3148);

    if (t38 != 2130706438) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x3309 = 170249LL;
	int8_t x3310 = -3;
	static volatile int16_t x3311 = -1;
	volatile uint8_t x3312 = 0U;
	static volatile int64_t t39 = -360896033612742LL;

    t39 = ((x3309<<(x3310*x3311))-x3312);

    if (t39 != 1361992LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x3521 = UINT16_MAX;
	uint16_t x3522 = 1U;
	volatile uint16_t x3523 = 2U;
	uint16_t x3524 = 1U;
	volatile int32_t t40 = 3787;

    t40 = ((x3521<<(x3522*x3523))-x3524);

    if (t40 != 262139) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x3597 = UINT64_MAX;
	static uint8_t x3598 = UINT8_MAX;
	int8_t x3599 = 0;
	uint64_t x3600 = 5895LLU;
	uint64_t t41 = 115051LLU;

    t41 = ((x3597<<(x3598*x3599))-x3600);

    if (t41 != 18446744073709545720LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3677 = INT16_MAX;
	volatile int32_t x3678 = 177702;
	int8_t x3679 = 0;
	int8_t x3680 = INT8_MAX;
	int32_t t42 = 752;

    t42 = ((x3677<<(x3678*x3679))-x3680);

    if (t42 != 32640) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x3709 = 1976090262LLU;
	int8_t x3710 = -1;
	volatile int64_t x3712 = -400180088781001LL;
	uint64_t t43 = 63027764500638911LLU;

    t43 = ((x3709<<(x3710*x3711))-x3712);

    if (t43 != 400184040961525LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x3821 = UINT64_MAX;
	volatile int16_t x3822 = -1;
	uint64_t x3823 = UINT64_MAX;
	int8_t x3824 = INT8_MIN;
	volatile uint64_t t44 = 2373634LLU;

    t44 = ((x3821<<(x3822*x3823))-x3824);

    if (t44 != 126LLU) { NG(); } else { ; }
	
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


    return 0;
}

