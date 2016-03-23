
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

volatile int8_t x12 = 1;
int32_t x21 = 207;
int8_t x24 = 1;
int64_t x34 = INT64_MIN;
uint16_t x98 = UINT16_MAX;
uint64_t t4 = 436LLU;
int16_t x161 = -714;
int8_t x317 = INT8_MAX;
int8_t x318 = INT8_MIN;
uint16_t x322 = 16U;
volatile int8_t x347 = INT8_MIN;
static uint8_t x572 = 17U;
uint64_t x614 = 1950417730849LLU;
static int32_t x616 = 0;
volatile int32_t t12 = -534;
volatile int32_t x706 = -1;
int32_t x1010 = INT32_MAX;
int8_t x1016 = 1;
int32_t t16 = 420783;
int64_t x1078 = -1LL;
int32_t t17 = 28114037;
volatile int16_t x1176 = 22;
static volatile int64_t x1382 = INT64_MAX;
int8_t x1383 = -1;
int8_t x1514 = INT8_MIN;
int16_t x1666 = -1;
volatile uint32_t x1667 = 240998U;
uint32_t x1668 = 20U;
int16_t x1731 = -3;
uint8_t x1784 = 2U;
int64_t t26 = 49673546246LL;
uint16_t x1808 = 6U;
static volatile int16_t x1813 = 1;
static uint16_t x2076 = 0U;
volatile int64_t x2157 = -1LL;
uint64_t x2158 = 328343839545374327LLU;
int16_t x2159 = INT16_MIN;
static int32_t x2298 = -1;
static uint32_t x2329 = 1U;
uint16_t x2330 = 127U;
int32_t x2332 = 0;
volatile int16_t x2472 = 1;
volatile int32_t t37 = 1062949502;
int32_t x2594 = 4116122;
int32_t x2677 = -1;
int16_t x2679 = INT16_MIN;
volatile int8_t x2680 = 8;
static int32_t x2749 = INT32_MIN;
static int16_t x2752 = 6;
static uint32_t t43 = 86U;
volatile uint32_t x2817 = 83315U;
static int64_t x2818 = -1LL;
int8_t x2820 = 7;
uint64_t t44 = 273LLU;
volatile int64_t t45 = -2737973683355LL;
int8_t x3002 = -4;
uint32_t x3003 = UINT32_MAX;
int64_t x3086 = INT64_MAX;
static int8_t x3253 = INT8_MAX;
volatile uint64_t t48 = 322LLU;
int16_t x3335 = -1;
static volatile uint16_t x3372 = 0U;
int64_t x3542 = INT64_MAX;
int16_t x3544 = 1;
static uint16_t x3849 = UINT16_MAX;
static uint64_t x3885 = 1097403211422768341LLU;
int8_t x3888 = 0;
int16_t x3904 = 3;
int16_t x4127 = INT16_MIN;
int32_t x4146 = INT32_MIN;
int64_t x4150 = -4930LL;
int8_t x4258 = 5;
volatile int16_t x4362 = INT16_MAX;


void f0(void) {
    	int32_t x5 = INT32_MIN;
	uint16_t x6 = 13979U;
	uint32_t x7 = 460625U;
	static uint8_t x8 = 6U;
	volatile uint32_t t0 = 2007U;

    t0 = (((x5==x6)-x7)<<x8);

    if (t0 != 4265487296U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MIN;
	int32_t t1 = -18;

    t1 = (((x9==x10)-x11)<<x12);

    if (t1 != 65536) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x22 = INT16_MAX;
	uint64_t x23 = UINT64_MAX;
	uint64_t t2 = 20949593LLU;

    t2 = (((x21==x22)-x23)<<x24);

    if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x33 = INT16_MIN;
	static uint32_t x35 = 1U;
	int16_t x36 = 1;
	uint32_t t3 = 1880U;

    t3 = (((x33==x34)-x35)<<x36);

    if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x97 = 11227LLU;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = 11;

    t4 = (((x97==x98)-x99)<<x100);

    if (t4 != 2048LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x125 = INT64_MAX;
	uint64_t x126 = 3LLU;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = 0;
	volatile int32_t t5 = 16;

    t5 = (((x125==x126)-x127)<<x128);

    if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x162 = 6U;
	static int8_t x163 = -1;
	uint32_t x164 = 14U;
	volatile int32_t t6 = -2;

    t6 = (((x161==x162)-x163)<<x164);

    if (t6 != 16384) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x181 = -1;
	uint16_t x182 = 1U;
	int16_t x183 = -1;
	static int8_t x184 = 0;
	int32_t t7 = -5413;

    t7 = (((x181==x182)-x183)<<x184);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x319 = -1;
	static uint8_t x320 = 10U;
	int32_t t8 = 1;

    t8 = (((x317==x318)-x319)<<x320);

    if (t8 != 1024) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x321 = 126U;
	static int8_t x323 = -1;
	uint8_t x324 = 3U;
	volatile int32_t t9 = -454146;

    t9 = (((x321==x322)-x323)<<x324);

    if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x345 = INT64_MIN;
	static int64_t x346 = -1LL;
	static uint16_t x348 = 1U;
	volatile int32_t t10 = -29824;

    t10 = (((x345==x346)-x347)<<x348);

    if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x569 = -1;
	int32_t x570 = INT32_MIN;
	uint64_t x571 = UINT64_MAX;
	volatile uint64_t t11 = 143805LLU;

    t11 = (((x569==x570)-x571)<<x572);

    if (t11 != 131072LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	int32_t x615 = -1;

    t12 = (((x613==x614)-x615)<<x616);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x705 = INT32_MIN;
	uint64_t x707 = 116798052790440LLU;
	uint8_t x708 = 25U;
	static volatile uint64_t t13 = 21153206653LLU;

    t13 = (((x705==x706)-x707)<<x708);

    if (t13 != 10064167610905264128LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x917 = UINT64_MAX;
	uint64_t x918 = 43255LLU;
	int64_t x919 = -28LL;
	int32_t x920 = 1;
	static int64_t t14 = -142483LL;

    t14 = (((x917==x918)-x919)<<x920);

    if (t14 != 56LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x1009 = UINT32_MAX;
	int16_t x1011 = -1;
	int16_t x1012 = 29;
	volatile int32_t t15 = 18;

    t15 = (((x1009==x1010)-x1011)<<x1012);

    if (t15 != 536870912) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1013 = -1;
	int64_t x1014 = -4323LL;
	int8_t x1015 = INT8_MIN;

    t16 = (((x1013==x1014)-x1015)<<x1016);

    if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1077 = -3;
	int16_t x1079 = INT16_MIN;
	uint8_t x1080 = 2U;

    t17 = (((x1077==x1078)-x1079)<<x1080);

    if (t17 != 131072) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x1173 = INT8_MAX;
	int32_t x1174 = 0;
	int16_t x1175 = -1;
	int32_t t18 = 133198;

    t18 = (((x1173==x1174)-x1175)<<x1176);

    if (t18 != 4194304) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x1181 = INT8_MIN;
	uint16_t x1182 = 1U;
	int8_t x1183 = -1;
	volatile int8_t x1184 = 0;
	static volatile int32_t t19 = -63208;

    t19 = (((x1181==x1182)-x1183)<<x1184);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x1353 = UINT64_MAX;
	int64_t x1354 = INT64_MAX;
	volatile uint64_t x1355 = 2LLU;
	uint8_t x1356 = 37U;
	volatile uint64_t t20 = 2220723680905LLU;

    t20 = (((x1353==x1354)-x1355)<<x1356);

    if (t20 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1381 = UINT32_MAX;
	volatile uint8_t x1384 = 13U;
	int32_t t21 = -203907277;

    t21 = (((x1381==x1382)-x1383)<<x1384);

    if (t21 != 8192) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x1513 = UINT16_MAX;
	static volatile uint64_t x1515 = UINT64_MAX;
	uint32_t x1516 = 19U;
	uint64_t t22 = 1506718598913062883LLU;

    t22 = (((x1513==x1514)-x1515)<<x1516);

    if (t22 != 524288LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1665 = 9458772417LL;
	static volatile uint32_t t23 = 1U;

    t23 = (((x1665==x1666)-x1667)<<x1668);

    if (t23 != 698351616U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1705 = 28U;
	int64_t x1706 = -10LL;
	uint32_t x1707 = 54058U;
	volatile uint64_t x1708 = 1LLU;
	volatile uint32_t t24 = 52U;

    t24 = (((x1705==x1706)-x1707)<<x1708);

    if (t24 != 4294859180U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x1729 = INT8_MIN;
	static int64_t x1730 = INT64_MIN;
	uint8_t x1732 = 0U;
	volatile int32_t t25 = 538220;

    t25 = (((x1729==x1730)-x1731)<<x1732);

    if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1781 = INT32_MAX;
	static int32_t x1782 = INT32_MIN;
	static int64_t x1783 = -1LL;

    t26 = (((x1781==x1782)-x1783)<<x1784);

    if (t26 != 4LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1789 = 36;
	volatile int16_t x1790 = -1;
	static volatile uint64_t x1791 = 33LLU;
	uint8_t x1792 = 6U;
	uint64_t t27 = 47630969094LLU;

    t27 = (((x1789==x1790)-x1791)<<x1792);

    if (t27 != 18446744073709549504LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x1805 = 87U;
	int32_t x1806 = 1944;
	int16_t x1807 = INT16_MIN;
	int32_t t28 = 950621103;

    t28 = (((x1805==x1806)-x1807)<<x1808);

    if (t28 != 2097152) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1814 = UINT8_MAX;
	uint64_t x1815 = 277031LLU;
	uint8_t x1816 = 0U;
	uint64_t t29 = 1158549435480LLU;

    t29 = (((x1813==x1814)-x1815)<<x1816);

    if (t29 != 18446744073709274585LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x2073 = -1;
	int64_t x2074 = INT64_MIN;
	int16_t x2075 = -506;
	int32_t t30 = -93;

    t30 = (((x2073==x2074)-x2075)<<x2076);

    if (t30 != 506) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x2081 = -78;
	uint16_t x2082 = UINT16_MAX;
	uint32_t x2083 = 0U;
	uint8_t x2084 = 7U;
	volatile uint32_t t31 = 23U;

    t31 = (((x2081==x2082)-x2083)<<x2084);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x2160 = 15U;
	int32_t t32 = 150;

    t32 = (((x2157==x2158)-x2159)<<x2160);

    if (t32 != 1073741824) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2205 = 68U;
	uint16_t x2206 = 6237U;
	int8_t x2207 = INT8_MIN;
	volatile int16_t x2208 = 3;
	volatile int32_t t33 = -1;

    t33 = (((x2205==x2206)-x2207)<<x2208);

    if (t33 != 1024) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x2245 = INT32_MIN;
	int16_t x2246 = -1;
	static int16_t x2247 = -25;
	uint16_t x2248 = 0U;
	volatile int32_t t34 = 6;

    t34 = (((x2245==x2246)-x2247)<<x2248);

    if (t34 != 25) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x2297 = INT32_MIN;
	int8_t x2299 = -3;
	static volatile int8_t x2300 = 1;
	static volatile int32_t t35 = -168;

    t35 = (((x2297==x2298)-x2299)<<x2300);

    if (t35 != 6) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2331 = 0LLU;
	uint64_t t36 = 403830389LLU;

    t36 = (((x2329==x2330)-x2331)<<x2332);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2469 = INT32_MIN;
	int8_t x2470 = INT8_MIN;
	int16_t x2471 = INT16_MIN;

    t37 = (((x2469==x2470)-x2471)<<x2472);

    if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2593 = INT16_MIN;
	int8_t x2595 = -1;
	uint16_t x2596 = 6U;
	int32_t t38 = -55;

    t38 = (((x2593==x2594)-x2595)<<x2596);

    if (t38 != 64) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x2613 = INT64_MIN;
	int32_t x2614 = INT32_MIN;
	uint64_t x2615 = 3040LLU;
	int16_t x2616 = 11;
	uint64_t t39 = 57553198259LLU;

    t39 = (((x2613==x2614)-x2615)<<x2616);

    if (t39 != 18446744073703325696LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2678 = INT16_MIN;
	static volatile int32_t t40 = 12;

    t40 = (((x2677==x2678)-x2679)<<x2680);

    if (t40 != 8388608) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2725 = -1;
	int64_t x2726 = -1LL;
	int16_t x2727 = -1;
	volatile uint8_t x2728 = 8U;
	volatile int32_t t41 = -21;

    t41 = (((x2725==x2726)-x2727)<<x2728);

    if (t41 != 512) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2750 = 0;
	uint32_t x2751 = UINT32_MAX;
	static uint32_t t42 = 7U;

    t42 = (((x2749==x2750)-x2751)<<x2752);

    if (t42 != 64U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2813 = 92U;
	static int16_t x2814 = 0;
	volatile uint32_t x2815 = 82601253U;
	uint8_t x2816 = 0U;

    t43 = (((x2813==x2814)-x2815)<<x2816);

    if (t43 != 4212366043U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2819 = 25109313804060212LLU;

    t44 = (((x2817==x2818)-x2819)<<x2820);

    if (t44 != 15232751906789844480LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x2837 = INT32_MIN;
	volatile int16_t x2838 = -471;
	int64_t x2839 = -1LL;
	int8_t x2840 = 1;

    t45 = (((x2837==x2838)-x2839)<<x2840);

    if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x3001 = 24768749416LLU;
	uint16_t x3004 = 7U;
	volatile uint32_t t46 = 305633U;

    t46 = (((x3001==x3002)-x3003)<<x3004);

    if (t46 != 128U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x3085 = INT16_MIN;
	volatile int16_t x3087 = -175;
	uint8_t x3088 = 1U;
	volatile int32_t t47 = -1;

    t47 = (((x3085==x3086)-x3087)<<x3088);

    if (t47 != 350) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x3254 = 0;
	volatile uint64_t x3255 = UINT64_MAX;
	volatile uint8_t x3256 = 22U;

    t48 = (((x3253==x3254)-x3255)<<x3256);

    if (t48 != 4194304LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x3333 = INT8_MIN;
	int16_t x3334 = INT16_MAX;
	uint8_t x3336 = 5U;
	volatile int32_t t49 = -6590;

    t49 = (((x3333==x3334)-x3335)<<x3336);

    if (t49 != 32) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x3357 = 192990653;
	uint32_t x3358 = 947225U;
	int64_t x3359 = -1LL;
	static uint8_t x3360 = 51U;
	static volatile int64_t t50 = -117LL;

    t50 = (((x3357==x3358)-x3359)<<x3360);

    if (t50 != 2251799813685248LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x3369 = 13;
	static int64_t x3370 = INT64_MAX;
	int32_t x3371 = -1;
	volatile int32_t t51 = -1;

    t51 = (((x3369==x3370)-x3371)<<x3372);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x3541 = INT64_MIN;
	static int32_t x3543 = -3139;
	static int32_t t52 = -1836550;

    t52 = (((x3541==x3542)-x3543)<<x3544);

    if (t52 != 6278) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x3749 = 21;
	int32_t x3750 = INT32_MIN;
	static int8_t x3751 = -1;
	uint8_t x3752 = 0U;
	static int32_t t53 = -13285;

    t53 = (((x3749==x3750)-x3751)<<x3752);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x3850 = 43260U;
	uint64_t x3851 = UINT64_MAX;
	uint8_t x3852 = 31U;
	uint64_t t54 = 454678595463987LLU;

    t54 = (((x3849==x3850)-x3851)<<x3852);

    if (t54 != 2147483648LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x3886 = UINT64_MAX;
	volatile int64_t x3887 = -1LL;
	int64_t t55 = 4391913590342619LL;

    t55 = (((x3885==x3886)-x3887)<<x3888);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x3901 = UINT64_MAX;
	int16_t x3902 = INT16_MIN;
	static volatile int8_t x3903 = -1;
	int32_t t56 = 791392824;

    t56 = (((x3901==x3902)-x3903)<<x3904);

    if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x4013 = -1LL;
	volatile uint8_t x4014 = 35U;
	int16_t x4015 = -1;
	static int8_t x4016 = 1;
	int32_t t57 = 65305;

    t57 = (((x4013==x4014)-x4015)<<x4016);

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x4125 = INT8_MAX;
	static int8_t x4126 = -1;
	uint8_t x4128 = 2U;
	volatile int32_t t58 = 6728160;

    t58 = (((x4125==x4126)-x4127)<<x4128);

    if (t58 != 131072) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x4145 = INT32_MAX;
	static uint64_t x4147 = UINT64_MAX;
	static int8_t x4148 = 0;
	uint64_t t59 = 10975594382894323LLU;

    t59 = (((x4145==x4146)-x4147)<<x4148);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x4149 = 12285674;
	int8_t x4151 = INT8_MIN;
	uint16_t x4152 = 15U;
	int32_t t60 = -110015865;

    t60 = (((x4149==x4150)-x4151)<<x4152);

    if (t60 != 4194304) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x4229 = -1;
	volatile int32_t x4230 = 0;
	uint32_t x4231 = UINT32_MAX;
	uint8_t x4232 = 2U;
	uint32_t t61 = 259523012U;

    t61 = (((x4229==x4230)-x4231)<<x4232);

    if (t61 != 4U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x4257 = -1LL;
	static int64_t x4259 = -1LL;
	int16_t x4260 = 15;
	volatile int64_t t62 = -176782832549325507LL;

    t62 = (((x4257==x4258)-x4259)<<x4260);

    if (t62 != 32768LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x4361 = INT32_MIN;
	uint64_t x4363 = 52328LLU;
	uint8_t x4364 = 11U;
	volatile uint64_t t63 = 375595072LLU;

    t63 = (((x4361==x4362)-x4363)<<x4364);

    if (t63 != 18446744073602383872LLU) { NG(); } else { ; }
	
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


    return 0;
}

