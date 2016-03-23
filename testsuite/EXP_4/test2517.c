
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

uint32_t x69 = UINT32_MAX;
uint8_t x75 = 7U;
int64_t x93 = INT64_MAX;
int64_t t4 = -14LL;
static int64_t x105 = INT64_MAX;
static uint16_t x106 = 12U;
volatile uint8_t x107 = 2U;
int64_t x112 = INT64_MIN;
static volatile int64_t x175 = INT64_MAX;
static int64_t x304 = INT64_MIN;
int32_t x331 = INT32_MIN;
uint8_t x430 = 19U;
uint16_t x432 = UINT16_MAX;
uint16_t x477 = 653U;
uint16_t x480 = 0U;
uint64_t x488 = 6394754LLU;
static uint64_t t20 = 19LLU;
static volatile uint32_t t21 = UINT32_MAX;
uint16_t x573 = 1U;
int32_t x609 = INT32_MAX;
uint8_t x610 = 10U;
static volatile int32_t t25 = INT32_MAX;
int16_t x685 = 0;
uint8_t x723 = UINT8_MAX;
int64_t x785 = 1473899663462414211LL;
int16_t x803 = INT16_MIN;
int8_t x822 = 12;
int16_t x840 = INT16_MIN;
uint32_t x847 = UINT32_MAX;
static int32_t x848 = INT32_MIN;
int64_t x852 = INT64_MIN;
static volatile uint16_t x897 = UINT16_MAX;
volatile uint16_t x900 = 1U;
int16_t x903 = 8019;
int32_t t38 = -412895;
int8_t x956 = INT8_MAX;
uint8_t x976 = 1U;
int32_t x1187 = -1838;
volatile int64_t t47 = -37762LL;
uint8_t x1282 = 3U;
volatile int32_t t49 = -15471658;
int32_t x1409 = 3230542;
uint64_t x1412 = 2786290944115932LLU;
static uint32_t x1417 = 295884192U;
int8_t x1431 = INT8_MAX;
uint32_t x1436 = 253692805U;
int8_t x1464 = 0;
volatile uint8_t x1469 = 22U;
uint64_t x1505 = 3167195LLU;
int64_t x1507 = INT64_MIN;
static uint16_t x1627 = UINT16_MAX;
int32_t t62 = -993619;
static volatile uint32_t t63 = 894U;
uint16_t x1964 = 425U;
int8_t x1979 = INT8_MIN;
volatile uint32_t x2185 = 0U;
int32_t x2251 = INT32_MIN;
uint8_t x2292 = UINT8_MAX;
int8_t x2305 = 1;
uint8_t x2306 = 0U;
int8_t x2459 = 14;
int8_t x2460 = 44;
uint16_t x2485 = UINT16_MAX;
volatile uint16_t x2489 = 23U;
volatile int64_t x2619 = INT64_MIN;
volatile uint8_t x2653 = UINT8_MAX;
volatile int32_t t85 = -1105;
volatile int16_t x2757 = 1476;
int32_t x2772 = INT32_MIN;
int32_t t87 = 698926969;
uint64_t x2829 = UINT64_MAX;
int64_t x2832 = INT64_MIN;
static int8_t x2856 = 12;
static uint16_t x2899 = 25U;
static uint8_t x2900 = 5U;
uint16_t x2905 = UINT16_MAX;
static int32_t x2906 = 516760;
int16_t x2924 = -1;
uint16_t x3089 = 1532U;
volatile int32_t t101 = 969;
uint16_t x3277 = 2U;
uint8_t x3310 = 47U;
int32_t x3312 = -1;
int32_t t107 = -62753;
volatile uint8_t x3377 = UINT8_MAX;
volatile int64_t x3397 = INT64_MAX;
int64_t t109 = 445495781510406LL;
uint8_t x3425 = UINT8_MAX;
int32_t x3427 = -1;
int8_t x3449 = INT8_MAX;
int16_t x3451 = INT16_MAX;
static int32_t x3452 = INT32_MIN;
uint32_t x3542 = 1U;
volatile uint64_t x3600 = 223LLU;
uint32_t x3613 = 531451903U;
static uint16_t x3730 = 1U;
int8_t x3736 = 7;
static int16_t x3812 = 31;
volatile uint32_t t120 = 209346U;
int32_t t121 = 99376;
uint64_t x3853 = UINT64_MAX;
int64_t x3855 = -1LL;
int8_t x3856 = 3;
uint64_t x4017 = 44380LLU;
uint16_t x4029 = UINT16_MAX;
volatile int32_t t124 = 4487517;
static volatile uint64_t t126 = 16932663739749LLU;
volatile int16_t x4129 = INT16_MAX;
uint8_t x4130 = 2U;
int32_t t128 = -3542;
int32_t x4213 = INT32_MAX;
static uint16_t x4233 = 97U;
int8_t x4234 = 1;
int8_t x4326 = INT8_MAX;
int32_t x4333 = 1211;
uint64_t x4401 = 211208111506768LLU;
static volatile uint8_t x4470 = 0U;
int32_t x4471 = -1;
uint32_t x4486 = 1U;
uint16_t x4488 = 999U;
int8_t x4547 = -1;
static int32_t x4593 = INT32_MAX;
volatile uint8_t x4753 = 1U;
volatile uint32_t x4755 = UINT32_MAX;
uint8_t x4848 = 19U;
int32_t x4871 = 287036348;
uint8_t x4893 = 70U;
int16_t x4896 = INT16_MIN;
static int32_t t151 = 937703550;
uint16_t x4905 = 10U;
uint8_t x4929 = 12U;
static volatile int32_t t153 = -5925;
volatile uint8_t x4978 = 5U;
int32_t t155 = -928291412;
uint8_t x4995 = 33U;
static int16_t x4997 = 6;
uint32_t x5013 = 6523905U;
uint32_t t158 = 38063U;
uint32_t t159 = 511379488U;
int8_t x5161 = 1;
uint8_t x5162 = 0U;
volatile int32_t t160 = 995657378;
int64_t x5215 = INT64_MAX;
int64_t x5216 = -25189891362LL;
uint64_t x5221 = UINT64_MAX;
uint8_t x5278 = 3U;
volatile int32_t t166 = 281;
volatile int32_t t169 = 96082998;
int64_t x5472 = INT64_MIN;
volatile uint16_t x5616 = 9U;
int32_t x5633 = INT32_MAX;
int64_t x5635 = 14675329315283256LL;
int32_t x5713 = INT32_MAX;
int32_t t176 = 8018;
int32_t t177 = 476001991;
uint64_t x5769 = 587802641452LLU;
int32_t x5770 = 50;
uint16_t x5824 = UINT16_MAX;
uint64_t t181 = 1772842465781LLU;
int32_t t182 = 1;
int64_t x5867 = INT64_MIN;
static int32_t x5897 = INT32_MAX;
volatile uint32_t x5967 = 14674143U;
static volatile int64_t x5968 = 192510196688LL;
int64_t x5982 = INT64_MIN;
uint16_t x5984 = 105U;
uint8_t x6002 = 0U;
uint8_t x6031 = 115U;
static volatile int64_t x6081 = INT64_MAX;
int16_t x6291 = -1;
int32_t t190 = -2459323;
uint32_t x6379 = 185U;
static int32_t t191 = -3992;
uint8_t x6425 = 3U;
static int64_t x6427 = INT64_MIN;
uint16_t x6434 = 0U;
volatile int8_t x6435 = INT8_MIN;
uint32_t t193 = 47570008U;
uint32_t x6462 = 3U;
int32_t x6464 = INT32_MIN;
static uint32_t t194 = 500305827U;
static int16_t x6478 = INT16_MIN;
int8_t x6479 = 1;
volatile int8_t x6512 = INT8_MIN;
volatile uint64_t t197 = UINT64_MAX;
static int32_t x6551 = 21621;
uint8_t x6556 = UINT8_MAX;


void f0(void) {
    	uint64_t x61 = 15168607673962611LLU;
	volatile int16_t x62 = 17;
	int16_t x63 = -1;
	int64_t x64 = 10LL;
	static volatile uint64_t t0 = 771082844LLU;

    t0 = (x61>>(x62&(x63|x64)));

    if (t0 != 115727292434LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x70 = INT8_MAX;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 4LLU;
	uint32_t t1 = 3233412U;

    t1 = (x69>>(x70&(x71|x72)));

    if (t1 != 268435455U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x73 = INT32_MAX;
	int64_t x74 = INT64_MAX;
	uint64_t x76 = 0LLU;
	int32_t t2 = -374975;

    t2 = (x73>>(x74&(x75|x76)));

    if (t2 != 16777215) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x85 = 3535LLU;
	uint8_t x86 = 3U;
	int64_t x87 = -1052111LL;
	uint64_t x88 = UINT64_MAX;
	uint64_t t3 = 257530512805018456LLU;

    t3 = (x85>>(x86&(x87|x88)));

    if (t3 != 441LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x94 = 58;
	int16_t x95 = -1;
	static volatile int8_t x96 = INT8_MIN;

    t4 = (x93>>(x94&(x95|x96)));

    if (t4 != 31LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x108 = -2693;
	int64_t t5 = 88274451956406LL;

    t5 = (x105>>(x106&(x107|x108)));

    if (t5 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x109 = 12;
	uint16_t x110 = 91U;
	int64_t x111 = INT64_MIN;
	volatile int32_t t6 = 10731439;

    t6 = (x109>>(x110&(x111|x112)));

    if (t6 != 12) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x113 = 5591U;
	uint8_t x114 = 3U;
	volatile int16_t x115 = -1;
	int64_t x116 = INT64_MIN;
	volatile int32_t t7 = -809528207;

    t7 = (x113>>(x114&(x115|x116)));

    if (t7 != 698) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x137 = 1939056U;
	int32_t x138 = 25;
	int16_t x139 = -1;
	int8_t x140 = INT8_MAX;
	volatile uint32_t t8 = 7U;

    t8 = (x137>>(x138&(x139|x140)));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x161 = UINT8_MAX;
	int8_t x162 = -19;
	uint8_t x163 = 4U;
	int8_t x164 = 0;
	static volatile int32_t t9 = -259;

    t9 = (x161>>(x162&(x163|x164)));

    if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x173 = 7;
	volatile uint16_t x174 = 0U;
	uint64_t x176 = 1992059LLU;
	static int32_t t10 = -119807047;

    t10 = (x173>>(x174&(x175|x176)));

    if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x273 = 14391054LL;
	static int32_t x274 = INT32_MIN;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 28U;
	volatile int64_t t11 = -121198306933067309LL;

    t11 = (x273>>(x274&(x275|x276)));

    if (t11 != 14391054LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x293 = UINT8_MAX;
	static int64_t x294 = INT64_MIN;
	static int8_t x295 = INT8_MAX;
	uint8_t x296 = UINT8_MAX;
	int32_t t12 = 7;

    t12 = (x293>>(x294&(x295|x296)));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x301 = 14U;
	uint16_t x302 = 1U;
	int8_t x303 = 45;
	volatile int32_t t13 = -459785;

    t13 = (x301>>(x302&(x303|x304)));

    if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x309 = 1U;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = UINT32_MAX;
	static uint16_t x312 = 0U;
	static volatile int32_t t14 = -52913695;

    t14 = (x309>>(x310&(x311|x312)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x329 = 118U;
	uint16_t x330 = UINT16_MAX;
	uint16_t x332 = 12U;
	static uint32_t t15 = 67140329U;

    t15 = (x329>>(x330&(x331|x332)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x429 = UINT16_MAX;
	uint64_t x431 = 82LLU;
	int32_t t16 = 6;

    t16 = (x429>>(x430&(x431|x432)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x478 = INT16_MIN;
	int8_t x479 = 12;
	volatile int32_t t17 = 50310776;

    t17 = (x477>>(x478&(x479|x480)));

    if (t17 != 653) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x481 = UINT8_MAX;
	int8_t x482 = 0;
	int16_t x483 = INT16_MIN;
	static int16_t x484 = INT16_MIN;
	volatile int32_t t18 = -918240;

    t18 = (x481>>(x482&(x483|x484)));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x485 = UINT32_MAX;
	static int16_t x486 = 1;
	int64_t x487 = 25LL;
	uint32_t t19 = 3004U;

    t19 = (x485>>(x486&(x487|x488)));

    if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x497 = 290749LLU;
	int8_t x498 = INT8_MAX;
	static uint64_t x499 = 23405188LLU;
	int16_t x500 = INT16_MIN;

    t20 = (x497>>(x498&(x499|x500)));

    if (t20 != 18171LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x533 = UINT32_MAX;
	int64_t x534 = INT64_MIN;
	int32_t x535 = -1;
	uint32_t x536 = 3332U;

    t21 = (x533>>(x534&(x535|x536)));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x574 = 24U;
	int16_t x575 = -1639;
	int8_t x576 = INT8_MIN;
	int32_t t22 = 104;

    t22 = (x573>>(x574&(x575|x576)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x585 = 60U;
	static int32_t x586 = -383;
	static int8_t x587 = INT8_MAX;
	int8_t x588 = 53;
	volatile int32_t t23 = -1670;

    t23 = (x585>>(x586&(x587|x588)));

    if (t23 != 30) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x611 = 12352U;
	int64_t x612 = -1LL;
	volatile int32_t t24 = 1094;

    t24 = (x609>>(x610&(x611|x612)));

    if (t24 != 2097151) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x613 = INT32_MAX;
	int64_t x614 = INT64_MIN;
	volatile int32_t x615 = 704;
	uint64_t x616 = 123549749590335LLU;

    t25 = (x613>>(x614&(x615|x616)));

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x686 = 2;
	int64_t x687 = INT64_MAX;
	uint8_t x688 = 51U;
	volatile int32_t t26 = 15;

    t26 = (x685>>(x686&(x687|x688)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x721 = 1;
	uint32_t x722 = 2U;
	int8_t x724 = 4;
	int32_t t27 = -50339;

    t27 = (x721>>(x722&(x723|x724)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x777 = INT8_MAX;
	uint8_t x778 = 1U;
	static uint32_t x779 = 1840608732U;
	int16_t x780 = INT16_MIN;
	int32_t t28 = 1366859;

    t28 = (x777>>(x778&(x779|x780)));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x786 = UINT16_MAX;
	uint16_t x787 = 23U;
	static uint8_t x788 = 1U;
	int64_t t29 = -1864LL;

    t29 = (x785>>(x786&(x787|x788)));

    if (t29 != 175702531750LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x789 = UINT16_MAX;
	int64_t x790 = INT64_MIN;
	volatile uint32_t x791 = 2192130U;
	static uint8_t x792 = UINT8_MAX;
	volatile int32_t t30 = 5135854;

    t30 = (x789>>(x790&(x791|x792)));

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x801 = 10U;
	uint8_t x802 = 26U;
	uint64_t x804 = 7LLU;
	volatile int32_t t31 = -223;

    t31 = (x801>>(x802&(x803|x804)));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x821 = UINT32_MAX;
	int64_t x823 = -1LL;
	volatile uint8_t x824 = UINT8_MAX;
	uint32_t t32 = 0U;

    t32 = (x821>>(x822&(x823|x824)));

    if (t32 != 1048575U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x837 = 26U;
	int32_t x838 = 104;
	uint16_t x839 = 4U;
	int32_t t33 = -10;

    t33 = (x837>>(x838&(x839|x840)));

    if (t33 != 26) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x845 = INT64_MAX;
	static int64_t x846 = INT64_MIN;
	volatile int64_t t34 = INT64_MAX;

    t34 = (x845>>(x846&(x847|x848)));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x849 = UINT8_MAX;
	int16_t x850 = 97;
	static int64_t x851 = INT64_MIN;
	int32_t t35 = 394602;

    t35 = (x849>>(x850&(x851|x852)));

    if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x869 = UINT64_MAX;
	static volatile uint64_t x870 = 0LLU;
	static int64_t x871 = -1LL;
	uint64_t x872 = 24888473505548LLU;
	uint64_t t36 = UINT64_MAX;

    t36 = (x869>>(x870&(x871|x872)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x898 = 27U;
	volatile int64_t x899 = 3165233861841323LL;
	int32_t t37 = -74;

    t37 = (x897>>(x898&(x899|x900)));

    if (t37 != 31) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x901 = 39;
	int64_t x902 = INT64_MIN;
	uint32_t x904 = 12U;

    t38 = (x901>>(x902&(x903|x904)));

    if (t38 != 39) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x953 = UINT32_MAX;
	int32_t x954 = 9616;
	uint16_t x955 = 0U;
	uint32_t t39 = 15518205U;

    t39 = (x953>>(x954&(x955|x956)));

    if (t39 != 65535U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x961 = 194714709947LL;
	volatile int16_t x962 = 1;
	int8_t x963 = -1;
	int8_t x964 = -12;
	volatile int64_t t40 = -199LL;

    t40 = (x961>>(x962&(x963|x964)));

    if (t40 != 97357354973LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x973 = UINT64_MAX;
	int8_t x974 = 0;
	int8_t x975 = 4;
	volatile uint64_t t41 = UINT64_MAX;

    t41 = (x973>>(x974&(x975|x976)));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x1029 = 3523883220853592088LLU;
	int32_t x1030 = INT32_MAX;
	static uint8_t x1031 = 0U;
	int32_t x1032 = INT32_MIN;
	uint64_t t42 = 104041726LLU;

    t42 = (x1029>>(x1030&(x1031|x1032)));

    if (t42 != 3523883220853592088LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x1037 = 15U;
	int16_t x1038 = 1;
	uint32_t x1039 = 357946976U;
	static volatile int16_t x1040 = INT16_MIN;
	volatile int32_t t43 = 14;

    t43 = (x1037>>(x1038&(x1039|x1040)));

    if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x1161 = INT8_MAX;
	volatile uint32_t x1162 = 151U;
	uint16_t x1163 = 76U;
	int32_t x1164 = -43027330;
	volatile int32_t t44 = -1;

    t44 = (x1161>>(x1162&(x1163|x1164)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1165 = INT8_MAX;
	uint8_t x1166 = 27U;
	volatile int32_t x1167 = 1945;
	int16_t x1168 = INT16_MIN;
	volatile int32_t t45 = -63303825;

    t45 = (x1165>>(x1166&(x1167|x1168)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x1185 = 393564LLU;
	int8_t x1186 = 1;
	static int64_t x1188 = INT64_MAX;
	volatile uint64_t t46 = 85219509LLU;

    t46 = (x1185>>(x1186&(x1187|x1188)));

    if (t46 != 196782LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1201 = 1795771705671LL;
	static uint16_t x1202 = 1U;
	int32_t x1203 = 2;
	int8_t x1204 = INT8_MIN;

    t47 = (x1201>>(x1202&(x1203|x1204)));

    if (t47 != 1795771705671LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1281 = 358097516;
	int8_t x1283 = 0;
	uint64_t x1284 = 8082039643314534LLU;
	static volatile int32_t t48 = 627457;

    t48 = (x1281>>(x1282&(x1283|x1284)));

    if (t48 != 89524379) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x1317 = 10;
	int8_t x1318 = INT8_MAX;
	int64_t x1319 = -62286419866881007LL;
	int8_t x1320 = INT8_MIN;

    t49 = (x1317>>(x1318&(x1319|x1320)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x1337 = 7U;
	int16_t x1338 = INT16_MIN;
	int8_t x1339 = INT8_MAX;
	uint8_t x1340 = 5U;
	volatile int32_t t50 = -2;

    t50 = (x1337>>(x1338&(x1339|x1340)));

    if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x1385 = 8702U;
	uint32_t x1386 = 1U;
	int16_t x1387 = INT16_MIN;
	uint16_t x1388 = 3929U;
	static uint32_t t51 = 14186693U;

    t51 = (x1385>>(x1386&(x1387|x1388)));

    if (t51 != 4351U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x1410 = 2U;
	uint64_t x1411 = 4981571488387LLU;
	volatile int32_t t52 = 49921132;

    t52 = (x1409>>(x1410&(x1411|x1412)));

    if (t52 != 807635) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1418 = 1;
	volatile int8_t x1419 = 19;
	int64_t x1420 = -1LL;
	volatile uint32_t t53 = 16521U;

    t53 = (x1417>>(x1418&(x1419|x1420)));

    if (t53 != 147942096U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x1429 = 29340483882499LLU;
	int32_t x1430 = INT32_MIN;
	int8_t x1432 = 6;
	uint64_t t54 = 7LLU;

    t54 = (x1429>>(x1430&(x1431|x1432)));

    if (t54 != 29340483882499LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x1433 = 397U;
	volatile int64_t x1434 = INT64_MIN;
	uint64_t x1435 = 16899461905215683LLU;
	int32_t t55 = -1;

    t55 = (x1433>>(x1434&(x1435|x1436)));

    if (t55 != 397) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x1461 = UINT16_MAX;
	static uint64_t x1462 = 97882369161LLU;
	static int8_t x1463 = 29;
	int32_t t56 = -972044;

    t56 = (x1461>>(x1462&(x1463|x1464)));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x1470 = UINT64_MAX;
	static uint32_t x1471 = 12U;
	int8_t x1472 = 0;
	static int32_t t57 = 1355443;

    t57 = (x1469>>(x1470&(x1471|x1472)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x1497 = UINT32_MAX;
	uint64_t x1498 = 0LLU;
	int16_t x1499 = 1;
	static uint32_t x1500 = UINT32_MAX;
	volatile uint32_t t58 = UINT32_MAX;

    t58 = (x1497>>(x1498&(x1499|x1500)));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x1506 = 21U;
	int8_t x1508 = 6;
	uint64_t t59 = 403706943287818LLU;

    t59 = (x1505>>(x1506&(x1507|x1508)));

    if (t59 != 197949LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x1565 = INT64_MAX;
	uint8_t x1566 = 25U;
	int8_t x1567 = -10;
	uint32_t x1568 = 31080U;
	int64_t t60 = -16483272LL;

    t60 = (x1565>>(x1566&(x1567|x1568)));

    if (t60 != 549755813887LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x1569 = UINT64_MAX;
	int8_t x1570 = 4;
	uint8_t x1571 = UINT8_MAX;
	uint32_t x1572 = UINT32_MAX;
	uint64_t t61 = 108101003564301LLU;

    t61 = (x1569>>(x1570&(x1571|x1572)));

    if (t61 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x1625 = INT32_MAX;
	uint16_t x1626 = 3U;
	static uint8_t x1628 = 1U;

    t62 = (x1625>>(x1626&(x1627|x1628)));

    if (t62 != 268435455) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x1653 = 431265U;
	int32_t x1654 = 1;
	static int32_t x1655 = INT32_MIN;
	int32_t x1656 = INT32_MIN;

    t63 = (x1653>>(x1654&(x1655|x1656)));

    if (t63 != 431265U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x1681 = 187;
	int64_t x1682 = INT64_MIN;
	uint32_t x1683 = 494305U;
	int8_t x1684 = INT8_MIN;
	int32_t t64 = 59;

    t64 = (x1681>>(x1682&(x1683|x1684)));

    if (t64 != 187) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x1837 = 161;
	int32_t x1838 = INT32_MIN;
	static uint32_t x1839 = 201733U;
	uint8_t x1840 = 3U;
	volatile int32_t t65 = 1838;

    t65 = (x1837>>(x1838&(x1839|x1840)));

    if (t65 != 161) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x1853 = 50238828U;
	int8_t x1854 = INT8_MAX;
	int64_t x1855 = INT64_MIN;
	volatile int16_t x1856 = INT16_MIN;
	volatile uint32_t t66 = 22U;

    t66 = (x1853>>(x1854&(x1855|x1856)));

    if (t66 != 50238828U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x1865 = UINT64_MAX;
	uint8_t x1866 = 55U;
	static int32_t x1867 = INT32_MAX;
	int64_t x1868 = -1LL;
	static volatile uint64_t t67 = 7143060LLU;

    t67 = (x1865>>(x1866&(x1867|x1868)));

    if (t67 != 511LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x1929 = INT16_MAX;
	uint8_t x1930 = UINT8_MAX;
	int64_t x1931 = 0LL;
	int16_t x1932 = INT16_MIN;
	static int32_t t68 = 49;

    t68 = (x1929>>(x1930&(x1931|x1932)));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x1961 = UINT64_MAX;
	int8_t x1962 = 1;
	static int64_t x1963 = -1LL;
	volatile uint64_t t69 = 2LLU;

    t69 = (x1961>>(x1962&(x1963|x1964)));

    if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x1977 = INT32_MAX;
	int16_t x1978 = 22;
	volatile int16_t x1980 = 15;
	static int32_t t70 = 10737948;

    t70 = (x1977>>(x1978&(x1979|x1980)));

    if (t70 != 33554431) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x2129 = 99LL;
	int8_t x2130 = INT8_MAX;
	static int8_t x2131 = INT8_MIN;
	int32_t x2132 = INT32_MIN;
	volatile int64_t t71 = -2107934LL;

    t71 = (x2129>>(x2130&(x2131|x2132)));

    if (t71 != 99LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x2186 = 1U;
	int64_t x2187 = 5LL;
	int64_t x2188 = 0LL;
	uint32_t t72 = 232146U;

    t72 = (x2185>>(x2186&(x2187|x2188)));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x2237 = 1U;
	uint8_t x2238 = 29U;
	uint32_t x2239 = 924020U;
	volatile int32_t x2240 = 1;
	volatile int32_t t73 = 49624;

    t73 = (x2237>>(x2238&(x2239|x2240)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x2249 = UINT16_MAX;
	static uint16_t x2250 = 0U;
	volatile int8_t x2252 = INT8_MAX;
	volatile int32_t t74 = -26549;

    t74 = (x2249>>(x2250&(x2251|x2252)));

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x2289 = 233LLU;
	static uint8_t x2290 = 24U;
	static int64_t x2291 = -71117773173900343LL;
	volatile uint64_t t75 = 9048LLU;

    t75 = (x2289>>(x2290&(x2291|x2292)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x2307 = 4U;
	static uint8_t x2308 = 10U;
	volatile int32_t t76 = -382543;

    t76 = (x2305>>(x2306&(x2307|x2308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x2393 = UINT16_MAX;
	uint32_t x2394 = 15U;
	static int64_t x2395 = 446137715559295008LL;
	uint8_t x2396 = UINT8_MAX;
	static int32_t t77 = 295010;

    t77 = (x2393>>(x2394&(x2395|x2396)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x2441 = INT8_MAX;
	int64_t x2442 = 0LL;
	int8_t x2443 = -1;
	int8_t x2444 = INT8_MIN;
	volatile int32_t t78 = 3;

    t78 = (x2441>>(x2442&(x2443|x2444)));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x2457 = 1;
	static volatile int64_t x2458 = -121005628558447LL;
	static volatile int32_t t79 = -3013;

    t79 = (x2457>>(x2458&(x2459|x2460)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x2486 = 3;
	int32_t x2487 = INT32_MIN;
	volatile int64_t x2488 = INT64_MIN;
	int32_t t80 = -4;

    t80 = (x2485>>(x2486&(x2487|x2488)));

    if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x2490 = 3U;
	static int32_t x2491 = 72;
	static uint8_t x2492 = 10U;
	static volatile int32_t t81 = -1;

    t81 = (x2489>>(x2490&(x2491|x2492)));

    if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x2617 = INT8_MAX;
	int16_t x2618 = 1;
	static volatile int8_t x2620 = INT8_MIN;
	static int32_t t82 = -125;

    t82 = (x2617>>(x2618&(x2619|x2620)));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x2641 = UINT32_MAX;
	static volatile uint16_t x2642 = 1400U;
	int8_t x2643 = 25;
	uint8_t x2644 = 0U;
	volatile uint32_t t83 = 192588184U;

    t83 = (x2641>>(x2642&(x2643|x2644)));

    if (t83 != 255U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x2654 = 4;
	int8_t x2655 = -1;
	int32_t x2656 = -1;
	int32_t t84 = -1275295;

    t84 = (x2653>>(x2654&(x2655|x2656)));

    if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x2661 = 20;
	uint8_t x2662 = 4U;
	int64_t x2663 = -28574003681954877LL;
	static int8_t x2664 = INT8_MIN;

    t85 = (x2661>>(x2662&(x2663|x2664)));

    if (t85 != 20) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x2758 = INT64_MIN;
	static int8_t x2759 = INT8_MIN;
	volatile uint32_t x2760 = 257388U;
	int32_t t86 = 4951;

    t86 = (x2757>>(x2758&(x2759|x2760)));

    if (t86 != 1476) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x2769 = 1969;
	uint8_t x2770 = 13U;
	int16_t x2771 = INT16_MAX;

    t87 = (x2769>>(x2770&(x2771|x2772)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x2793 = UINT8_MAX;
	uint16_t x2794 = 10U;
	int8_t x2795 = -1;
	uint64_t x2796 = 192733737714LLU;
	volatile int32_t t88 = 97082;

    t88 = (x2793>>(x2794&(x2795|x2796)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x2817 = 215U;
	uint16_t x2818 = 2U;
	int16_t x2819 = INT16_MIN;
	uint8_t x2820 = UINT8_MAX;
	volatile int32_t t89 = -130309;

    t89 = (x2817>>(x2818&(x2819|x2820)));

    if (t89 != 53) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x2830 = 0;
	volatile int64_t x2831 = -76638596545LL;
	uint64_t t90 = UINT64_MAX;

    t90 = (x2829>>(x2830&(x2831|x2832)));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x2853 = 122514LLU;
	static int8_t x2854 = 0;
	uint16_t x2855 = 416U;
	static uint64_t t91 = 3554461954706575LLU;

    t91 = (x2853>>(x2854&(x2855|x2856)));

    if (t91 != 122514LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x2865 = INT32_MAX;
	int8_t x2866 = 3;
	int8_t x2867 = -1;
	uint8_t x2868 = 0U;
	static volatile int32_t t92 = 1;

    t92 = (x2865>>(x2866&(x2867|x2868)));

    if (t92 != 268435455) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x2897 = 5914352810LL;
	int8_t x2898 = INT8_MIN;
	volatile int64_t t93 = 1147213409166LL;

    t93 = (x2897>>(x2898&(x2899|x2900)));

    if (t93 != 5914352810LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x2907 = INT8_MAX;
	uint8_t x2908 = 17U;
	int32_t t94 = 141600;

    t94 = (x2905>>(x2906&(x2907|x2908)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x2921 = 238;
	uint8_t x2922 = 1U;
	int32_t x2923 = -7144;
	int32_t t95 = 0;

    t95 = (x2921>>(x2922&(x2923|x2924)));

    if (t95 != 119) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x2997 = UINT16_MAX;
	uint8_t x2998 = 29U;
	int64_t x2999 = INT64_MIN;
	int64_t x3000 = 344LL;
	volatile int32_t t96 = 1005735;

    t96 = (x2997>>(x2998&(x2999|x3000)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x3001 = UINT8_MAX;
	volatile uint8_t x3002 = UINT8_MAX;
	volatile int16_t x3003 = -1512;
	static int16_t x3004 = -14834;
	int32_t t97 = -119203897;

    t97 = (x3001>>(x3002&(x3003|x3004)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x3061 = 34U;
	uint32_t x3062 = 11U;
	static int8_t x3063 = INT8_MIN;
	uint8_t x3064 = 1U;
	static int32_t t98 = -213363302;

    t98 = (x3061>>(x3062&(x3063|x3064)));

    if (t98 != 17) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x3090 = 6475U;
	volatile uint8_t x3091 = 10U;
	volatile int8_t x3092 = 14;
	volatile int32_t t99 = -29020;

    t99 = (x3089>>(x3090&(x3091|x3092)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x3161 = INT16_MAX;
	int16_t x3162 = INT16_MIN;
	static uint32_t x3163 = 3648U;
	uint16_t x3164 = 20U;
	volatile int32_t t100 = 7;

    t100 = (x3161>>(x3162&(x3163|x3164)));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x3249 = INT16_MAX;
	uint8_t x3250 = 2U;
	int64_t x3251 = INT64_MAX;
	uint32_t x3252 = UINT32_MAX;

    t101 = (x3249>>(x3250&(x3251|x3252)));

    if (t101 != 8191) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x3261 = UINT64_MAX;
	uint16_t x3262 = 8U;
	int64_t x3263 = INT64_MIN;
	int64_t x3264 = INT64_MIN;
	volatile uint64_t t102 = UINT64_MAX;

    t102 = (x3261>>(x3262&(x3263|x3264)));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x3269 = 5214U;
	uint8_t x3270 = 17U;
	int64_t x3271 = -2862119629481390LL;
	int32_t x3272 = INT32_MAX;
	int32_t t103 = 15005;

    t103 = (x3269>>(x3270&(x3271|x3272)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x3278 = 63758954U;
	uint16_t x3279 = 25U;
	int8_t x3280 = 5;
	volatile int32_t t104 = -9232;

    t104 = (x3277>>(x3278&(x3279|x3280)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3289 = 172275544LL;
	uint8_t x3290 = 9U;
	static uint32_t x3291 = 852U;
	uint32_t x3292 = 47090U;
	volatile int64_t t105 = -879696LL;

    t105 = (x3289>>(x3290&(x3291|x3292)));

    if (t105 != 172275544LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3309 = INT64_MAX;
	static volatile int8_t x3311 = -23;
	static volatile int64_t t106 = -442861LL;

    t106 = (x3309>>(x3310&(x3311|x3312)));

    if (t106 != 65535LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x3345 = UINT8_MAX;
	int64_t x3346 = INT64_MIN;
	int64_t x3347 = INT64_MAX;
	volatile uint16_t x3348 = 30U;

    t107 = (x3345>>(x3346&(x3347|x3348)));

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x3378 = 1U;
	static int16_t x3379 = INT16_MIN;
	static int8_t x3380 = 47;
	static int32_t t108 = -3;

    t108 = (x3377>>(x3378&(x3379|x3380)));

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x3398 = 53;
	int16_t x3399 = INT16_MAX;
	volatile int8_t x3400 = 28;

    t109 = (x3397>>(x3398&(x3399|x3400)));

    if (t109 != 1023LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x3426 = 2;
	int32_t x3428 = -1;
	volatile int32_t t110 = 24567;

    t110 = (x3425>>(x3426&(x3427|x3428)));

    if (t110 != 63) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x3450 = 12U;
	volatile int32_t t111 = 9;

    t111 = (x3449>>(x3450&(x3451|x3452)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x3541 = INT8_MAX;
	static volatile int16_t x3543 = INT16_MIN;
	static uint8_t x3544 = 13U;
	static volatile int32_t t112 = -94066;

    t112 = (x3541>>(x3542&(x3543|x3544)));

    if (t112 != 63) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x3577 = 31U;
	uint64_t x3578 = 0LLU;
	int8_t x3579 = -1;
	volatile int64_t x3580 = 24LL;
	volatile int32_t t113 = -57;

    t113 = (x3577>>(x3578&(x3579|x3580)));

    if (t113 != 31) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x3597 = UINT8_MAX;
	int16_t x3598 = 53;
	volatile uint64_t x3599 = 1LLU;
	static volatile int32_t t114 = 117;

    t114 = (x3597>>(x3598&(x3599|x3600)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x3614 = 0;
	uint16_t x3615 = UINT16_MAX;
	int64_t x3616 = INT64_MIN;
	uint32_t t115 = 788332U;

    t115 = (x3613>>(x3614&(x3615|x3616)));

    if (t115 != 531451903U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x3665 = INT8_MAX;
	uint8_t x3666 = 2U;
	uint16_t x3667 = 5U;
	int8_t x3668 = 44;
	static volatile int32_t t116 = 395386;

    t116 = (x3665>>(x3666&(x3667|x3668)));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3729 = 11;
	uint16_t x3731 = 127U;
	volatile uint8_t x3732 = 6U;
	int32_t t117 = -989673053;

    t117 = (x3729>>(x3730&(x3731|x3732)));

    if (t117 != 5) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x3733 = 3U;
	uint16_t x3734 = 8U;
	int64_t x3735 = INT64_MIN;
	int32_t t118 = 122328898;

    t118 = (x3733>>(x3734&(x3735|x3736)));

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x3809 = UINT16_MAX;
	uint8_t x3810 = 3U;
	static int32_t x3811 = 229;
	static int32_t t119 = 0;

    t119 = (x3809>>(x3810&(x3811|x3812)));

    if (t119 != 8191) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x3817 = 2105496U;
	volatile uint16_t x3818 = 11204U;
	static int64_t x3819 = INT64_MIN;
	volatile int16_t x3820 = INT16_MIN;

    t120 = (x3817>>(x3818&(x3819|x3820)));

    if (t120 != 2105496U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x3845 = INT32_MAX;
	static int8_t x3846 = 3;
	uint32_t x3847 = UINT32_MAX;
	int64_t x3848 = INT64_MAX;

    t121 = (x3845>>(x3846&(x3847|x3848)));

    if (t121 != 268435455) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x3854 = 7U;
	volatile uint64_t t122 = 3907338871962702LLU;

    t122 = (x3853>>(x3854&(x3855|x3856)));

    if (t122 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x4018 = 1125199480030221739LLU;
	static uint8_t x4019 = 61U;
	int64_t x4020 = INT64_MIN;
	uint64_t t123 = 127483LLU;

    t123 = (x4017>>(x4018&(x4019|x4020)));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x4030 = INT16_MAX;
	uint8_t x4031 = 30U;
	int8_t x4032 = 14;

    t124 = (x4029>>(x4030&(x4031|x4032)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x4033 = 12U;
	int8_t x4034 = 2;
	uint32_t x4035 = 0U;
	static uint8_t x4036 = 12U;
	static volatile int32_t t125 = 11;

    t125 = (x4033>>(x4034&(x4035|x4036)));

    if (t125 != 12) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x4041 = 62831406LLU;
	int64_t x4042 = INT64_MIN;
	int64_t x4043 = 15332LL;
	int16_t x4044 = INT16_MAX;

    t126 = (x4041>>(x4042&(x4043|x4044)));

    if (t126 != 62831406LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x4131 = INT32_MIN;
	volatile int64_t x4132 = 634625596996LL;
	int32_t t127 = -28047726;

    t127 = (x4129>>(x4130&(x4131|x4132)));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x4145 = UINT8_MAX;
	int64_t x4146 = INT64_MIN;
	uint32_t x4147 = 306093011U;
	int32_t x4148 = -1;

    t128 = (x4145>>(x4146&(x4147|x4148)));

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x4189 = UINT64_MAX;
	uint8_t x4190 = 113U;
	uint32_t x4191 = 1053246769U;
	static volatile uint16_t x4192 = 19993U;
	static uint64_t t129 = 65528LLU;

    t129 = (x4189>>(x4190&(x4191|x4192)));

    if (t129 != 32767LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x4214 = -742918629LL;
	static uint8_t x4215 = 0U;
	static uint8_t x4216 = 5U;
	int32_t t130 = -7120630;

    t130 = (x4213>>(x4214&(x4215|x4216)));

    if (t130 != 1073741823) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x4235 = INT32_MIN;
	volatile int64_t x4236 = -228390165LL;
	int32_t t131 = -229204;

    t131 = (x4233>>(x4234&(x4235|x4236)));

    if (t131 != 48) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x4325 = UINT64_MAX;
	int16_t x4327 = INT16_MIN;
	int8_t x4328 = INT8_MIN;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (x4325>>(x4326&(x4327|x4328)));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x4334 = 3U;
	uint8_t x4335 = 40U;
	volatile int8_t x4336 = INT8_MAX;
	volatile int32_t t133 = 36;

    t133 = (x4333>>(x4334&(x4335|x4336)));

    if (t133 != 151) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x4402 = INT64_MIN;
	uint64_t x4403 = 671497171287332LLU;
	static volatile int32_t x4404 = 109511;
	volatile uint64_t t134 = 544030825922470LLU;

    t134 = (x4401>>(x4402&(x4403|x4404)));

    if (t134 != 211208111506768LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x4413 = UINT8_MAX;
	static uint16_t x4414 = 152U;
	int64_t x4415 = INT64_MIN;
	int16_t x4416 = INT16_MIN;
	static int32_t t135 = 98;

    t135 = (x4413>>(x4414&(x4415|x4416)));

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x4429 = 7576;
	uint16_t x4430 = 19U;
	int64_t x4431 = 276983558299069940LL;
	int16_t x4432 = INT16_MIN;
	int32_t t136 = -331;

    t136 = (x4429>>(x4430&(x4431|x4432)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x4469 = 433162422U;
	int64_t x4472 = INT64_MIN;
	static uint32_t t137 = 3U;

    t137 = (x4469>>(x4470&(x4471|x4472)));

    if (t137 != 433162422U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x4485 = 2;
	int8_t x4487 = INT8_MIN;
	volatile int32_t t138 = -1;

    t138 = (x4485>>(x4486&(x4487|x4488)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x4545 = 392;
	uint32_t x4546 = 1U;
	static uint16_t x4548 = 1319U;
	volatile int32_t t139 = 7407041;

    t139 = (x4545>>(x4546&(x4547|x4548)));

    if (t139 != 196) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x4553 = UINT16_MAX;
	uint16_t x4554 = 1U;
	volatile int8_t x4555 = -1;
	int32_t x4556 = INT32_MIN;
	volatile int32_t t140 = 26;

    t140 = (x4553>>(x4554&(x4555|x4556)));

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x4577 = UINT8_MAX;
	static uint16_t x4578 = 3U;
	int8_t x4579 = -1;
	int16_t x4580 = -1;
	volatile int32_t t141 = -483984704;

    t141 = (x4577>>(x4578&(x4579|x4580)));

    if (t141 != 31) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x4594 = 0U;
	uint64_t x4595 = 29746LLU;
	static int32_t x4596 = -1;
	int32_t t142 = INT32_MAX;

    t142 = (x4593>>(x4594&(x4595|x4596)));

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x4613 = 3;
	uint32_t x4614 = 15U;
	int64_t x4615 = INT64_MIN;
	volatile int32_t x4616 = INT32_MIN;
	static int32_t t143 = -585;

    t143 = (x4613>>(x4614&(x4615|x4616)));

    if (t143 != 3) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x4749 = 5438U;
	uint16_t x4750 = 4U;
	int64_t x4751 = 337240217793555377LL;
	uint64_t x4752 = UINT64_MAX;
	int32_t t144 = 466333;

    t144 = (x4749>>(x4750&(x4751|x4752)));

    if (t144 != 339) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x4754 = 7U;
	static uint8_t x4756 = 7U;
	volatile int32_t t145 = 93;

    t145 = (x4753>>(x4754&(x4755|x4756)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x4801 = UINT64_MAX;
	uint32_t x4802 = 36U;
	int32_t x4803 = 16533;
	static volatile int32_t x4804 = -63;
	uint64_t t146 = 8732428LLU;

    t146 = (x4801>>(x4802&(x4803|x4804)));

    if (t146 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x4813 = 14U;
	int8_t x4814 = 2;
	static uint16_t x4815 = 2428U;
	int8_t x4816 = -8;
	int32_t t147 = -38362;

    t147 = (x4813>>(x4814&(x4815|x4816)));

    if (t147 != 14) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x4845 = 51U;
	uint8_t x4846 = 13U;
	int64_t x4847 = INT64_MIN;
	int32_t t148 = 1357;

    t148 = (x4845>>(x4846&(x4847|x4848)));

    if (t148 != 25) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x4869 = 6U;
	static int16_t x4870 = 0;
	volatile int16_t x4872 = 0;
	int32_t t149 = -24386;

    t149 = (x4869>>(x4870&(x4871|x4872)));

    if (t149 != 6) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x4885 = 52259U;
	static uint32_t x4886 = 18U;
	int16_t x4887 = -249;
	uint16_t x4888 = UINT16_MAX;
	uint32_t t150 = 1U;

    t150 = (x4885>>(x4886&(x4887|x4888)));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x4894 = 1;
	static uint64_t x4895 = UINT64_MAX;

    t151 = (x4893>>(x4894&(x4895|x4896)));

    if (t151 != 35) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x4906 = UINT16_MAX;
	int64_t x4907 = INT64_MIN;
	int64_t x4908 = INT64_MIN;
	volatile int32_t t152 = 2800342;

    t152 = (x4905>>(x4906&(x4907|x4908)));

    if (t152 != 10) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x4930 = 30U;
	int64_t x4931 = -1LL;
	int32_t x4932 = INT32_MIN;

    t153 = (x4929>>(x4930&(x4931|x4932)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x4945 = UINT8_MAX;
	volatile int16_t x4946 = INT16_MAX;
	uint16_t x4947 = 5U;
	int32_t x4948 = INT32_MIN;
	static int32_t t154 = 11552;

    t154 = (x4945>>(x4946&(x4947|x4948)));

    if (t154 != 7) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x4977 = 1383U;
	int16_t x4979 = 39;
	static volatile uint32_t x4980 = 12U;

    t155 = (x4977>>(x4978&(x4979|x4980)));

    if (t155 != 43) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x4993 = UINT32_MAX;
	uint8_t x4994 = 9U;
	int16_t x4996 = 1;
	volatile uint32_t t156 = 847681927U;

    t156 = (x4993>>(x4994&(x4995|x4996)));

    if (t156 != 2147483647U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x4998 = INT8_MAX;
	int8_t x4999 = INT8_MIN;
	volatile int64_t x5000 = INT64_MIN;
	int32_t t157 = -61242300;

    t157 = (x4997>>(x4998&(x4999|x5000)));

    if (t157 != 6) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x5014 = INT64_MAX;
	int64_t x5015 = 5LL;
	int64_t x5016 = INT64_MIN;

    t158 = (x5013>>(x5014&(x5015|x5016)));

    if (t158 != 203872U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x5021 = 119718U;
	static int16_t x5022 = 1;
	static int64_t x5023 = 127476683LL;
	volatile int64_t x5024 = INT64_MIN;

    t159 = (x5021>>(x5022&(x5023|x5024)));

    if (t159 != 59859U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x5163 = INT16_MIN;
	uint8_t x5164 = 106U;

    t160 = (x5161>>(x5162&(x5163|x5164)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x5169 = INT64_MAX;
	static int32_t x5170 = 21;
	static uint16_t x5171 = 4330U;
	uint32_t x5172 = UINT32_MAX;
	volatile int64_t t161 = 24465407706404LL;

    t161 = (x5169>>(x5170&(x5171|x5172)));

    if (t161 != 4398046511103LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x5213 = UINT32_MAX;
	volatile uint32_t x5214 = 1U;
	volatile uint32_t t162 = 187U;

    t162 = (x5213>>(x5214&(x5215|x5216)));

    if (t162 != 2147483647U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x5217 = UINT8_MAX;
	static uint8_t x5218 = 3U;
	volatile uint32_t x5219 = UINT32_MAX;
	uint16_t x5220 = 66U;
	static volatile int32_t t163 = -381947;

    t163 = (x5217>>(x5218&(x5219|x5220)));

    if (t163 != 31) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x5222 = 5U;
	volatile int32_t x5223 = INT32_MAX;
	int16_t x5224 = -41;
	static uint64_t t164 = 7842146LLU;

    t164 = (x5221>>(x5222&(x5223|x5224)));

    if (t164 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x5237 = 14008LLU;
	static int16_t x5238 = INT16_MIN;
	static uint8_t x5239 = 11U;
	int8_t x5240 = 1;
	uint64_t t165 = 30161LLU;

    t165 = (x5237>>(x5238&(x5239|x5240)));

    if (t165 != 14008LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x5277 = INT32_MAX;
	int16_t x5279 = 24;
	uint16_t x5280 = 31U;

    t166 = (x5277>>(x5278&(x5279|x5280)));

    if (t166 != 268435455) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x5329 = 10U;
	uint8_t x5330 = 1U;
	volatile uint8_t x5331 = 85U;
	int32_t x5332 = INT32_MAX;
	uint32_t t167 = 811U;

    t167 = (x5329>>(x5330&(x5331|x5332)));

    if (t167 != 5U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x5353 = 15U;
	uint8_t x5354 = 3U;
	uint64_t x5355 = 2385197LLU;
	int64_t x5356 = -271277124996365LL;
	static int32_t t168 = -8908;

    t168 = (x5353>>(x5354&(x5355|x5356)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x5389 = INT16_MAX;
	volatile int16_t x5390 = 16;
	int32_t x5391 = -1;
	static int16_t x5392 = -366;

    t169 = (x5389>>(x5390&(x5391|x5392)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x5441 = 1774U;
	static uint16_t x5442 = 1U;
	static uint64_t x5443 = UINT64_MAX;
	uint32_t x5444 = 768779956U;
	int32_t t170 = 395308;

    t170 = (x5441>>(x5442&(x5443|x5444)));

    if (t170 != 887) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x5469 = 11U;
	uint32_t x5470 = 49653U;
	uint8_t x5471 = 6U;
	volatile int32_t t171 = 525685955;

    t171 = (x5469>>(x5470&(x5471|x5472)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x5513 = UINT16_MAX;
	uint16_t x5514 = 5U;
	static volatile uint16_t x5515 = 0U;
	uint64_t x5516 = UINT64_MAX;
	volatile int32_t t172 = -146;

    t172 = (x5513>>(x5514&(x5515|x5516)));

    if (t172 != 2047) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x5517 = 32U;
	static uint16_t x5518 = 0U;
	uint8_t x5519 = 15U;
	volatile int8_t x5520 = -43;
	int32_t t173 = -57183532;

    t173 = (x5517>>(x5518&(x5519|x5520)));

    if (t173 != 32) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x5613 = INT32_MAX;
	int8_t x5614 = INT8_MIN;
	static uint8_t x5615 = 1U;
	static int32_t t174 = INT32_MAX;

    t174 = (x5613>>(x5614&(x5615|x5616)));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x5634 = 0;
	uint64_t x5636 = 1360175LLU;
	int32_t t175 = INT32_MAX;

    t175 = (x5633>>(x5634&(x5635|x5636)));

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x5714 = 1;
	uint8_t x5715 = UINT8_MAX;
	int16_t x5716 = 1;

    t176 = (x5713>>(x5714&(x5715|x5716)));

    if (t176 != 1073741823) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x5753 = UINT16_MAX;
	static int8_t x5754 = 12;
	uint32_t x5755 = 971U;
	int32_t x5756 = INT32_MAX;

    t177 = (x5753>>(x5754&(x5755|x5756)));

    if (t177 != 15) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x5757 = INT64_MAX;
	int64_t x5758 = INT64_MIN;
	int32_t x5759 = 399661;
	int64_t x5760 = INT64_MAX;
	volatile int64_t t178 = INT64_MAX;

    t178 = (x5757>>(x5758&(x5759|x5760)));

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x5771 = 3;
	int32_t x5772 = -1;
	uint64_t t179 = 2225076362548069LLU;

    t179 = (x5769>>(x5770&(x5771|x5772)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x5821 = UINT32_MAX;
	int16_t x5822 = 1;
	int8_t x5823 = INT8_MIN;
	uint32_t t180 = 1412144U;

    t180 = (x5821>>(x5822&(x5823|x5824)));

    if (t180 != 2147483647U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x5829 = 36651LLU;
	uint8_t x5830 = 95U;
	static volatile int64_t x5831 = 31449577515021118LL;
	int8_t x5832 = 4;

    t181 = (x5829>>(x5830&(x5831|x5832)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x5845 = 1;
	int32_t x5846 = INT32_MIN;
	volatile int32_t x5847 = 179596;
	uint16_t x5848 = UINT16_MAX;

    t182 = (x5845>>(x5846&(x5847|x5848)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x5865 = 10U;
	static uint8_t x5866 = 4U;
	static uint16_t x5868 = UINT16_MAX;
	volatile int32_t t183 = -25;

    t183 = (x5865>>(x5866&(x5867|x5868)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x5898 = 24;
	uint16_t x5899 = 5U;
	uint32_t x5900 = 0U;
	int32_t t184 = INT32_MAX;

    t184 = (x5897>>(x5898&(x5899|x5900)));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x5965 = INT8_MAX;
	uint16_t x5966 = 0U;
	int32_t t185 = 34369;

    t185 = (x5965>>(x5966&(x5967|x5968)));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x5981 = UINT8_MAX;
	uint16_t x5983 = UINT16_MAX;
	volatile int32_t t186 = 110782395;

    t186 = (x5981>>(x5982&(x5983|x5984)));

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x6001 = 10U;
	int8_t x6003 = -1;
	int64_t x6004 = INT64_MAX;
	volatile int32_t t187 = -2325493;

    t187 = (x6001>>(x6002&(x6003|x6004)));

    if (t187 != 10) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x6029 = 14350LL;
	uint8_t x6030 = 58U;
	int32_t x6032 = -1;
	int64_t t188 = 1468408123LL;

    t188 = (x6029>>(x6030&(x6031|x6032)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x6082 = 63;
	volatile uint8_t x6083 = 24U;
	int32_t x6084 = INT32_MIN;
	int64_t t189 = 26359LL;

    t189 = (x6081>>(x6082&(x6083|x6084)));

    if (t189 != 549755813887LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x6289 = INT8_MAX;
	volatile uint16_t x6290 = 2U;
	volatile uint32_t x6292 = 100443U;

    t190 = (x6289>>(x6290&(x6291|x6292)));

    if (t190 != 31) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x6377 = 31U;
	int64_t x6378 = INT64_MIN;
	uint64_t x6380 = 145LLU;

    t191 = (x6377>>(x6378&(x6379|x6380)));

    if (t191 != 31) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x6426 = 95U;
	static uint64_t x6428 = 173LLU;
	static int32_t t192 = -296224064;

    t192 = (x6425>>(x6426&(x6427|x6428)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x6433 = 5137224U;
	int8_t x6436 = -1;

    t193 = (x6433>>(x6434&(x6435|x6436)));

    if (t193 != 5137224U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x6461 = UINT32_MAX;
	uint64_t x6463 = 2LLU;

    t194 = (x6461>>(x6462&(x6463|x6464)));

    if (t194 != 1073741823U) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x6477 = 2U;
	int8_t x6480 = 7;
	volatile int32_t t195 = 3158777;

    t195 = (x6477>>(x6478&(x6479|x6480)));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x6509 = 37;
	static int16_t x6510 = 50;
	int8_t x6511 = 0;
	volatile int32_t t196 = 1745;

    t196 = (x6509>>(x6510&(x6511|x6512)));

    if (t196 != 37) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x6537 = UINT64_MAX;
	volatile int8_t x6538 = INT8_MAX;
	int64_t x6539 = INT64_MIN;
	int8_t x6540 = INT8_MIN;

    t197 = (x6537>>(x6538&(x6539|x6540)));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x6549 = UINT64_MAX;
	uint16_t x6550 = 4U;
	int32_t x6552 = INT32_MAX;
	uint64_t t198 = 13LLU;

    t198 = (x6549>>(x6550&(x6551|x6552)));

    if (t198 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x6553 = INT32_MAX;
	uint8_t x6554 = 0U;
	int8_t x6555 = -1;
	static volatile int32_t t199 = INT32_MAX;

    t199 = (x6553>>(x6554&(x6555|x6556)));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

