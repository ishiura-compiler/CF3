
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

volatile uint8_t x8 = 0U;
static uint32_t x19 = UINT32_MAX;
uint16_t x37 = 34U;
volatile int16_t x39 = -52;
int32_t x40 = 5;
int8_t x63 = -1;
volatile int16_t x65 = INT16_MIN;
static uint8_t x67 = UINT8_MAX;
int8_t x72 = 0;
int16_t x161 = -1;
static int64_t x205 = INT64_MAX;
static int16_t x206 = -156;
int32_t x315 = INT32_MIN;
int32_t t12 = 121256833;
static uint32_t x324 = 17U;
uint64_t t14 = 2104723LLU;
int64_t x501 = INT64_MAX;
volatile int64_t t17 = -106288759417489326LL;
uint64_t x531 = UINT64_MAX;
uint16_t x533 = UINT16_MAX;
volatile int8_t x536 = 0;
static int32_t t19 = -2717258;
static volatile int32_t t20 = 11786867;
volatile int8_t x558 = -13;
uint8_t x648 = 23U;
int64_t x761 = INT64_MIN;
int32_t x813 = INT32_MIN;
int8_t x814 = 0;
int8_t x815 = INT8_MIN;
uint16_t x816 = 1U;
int32_t x829 = -1;
static uint64_t x831 = 207155353900782984LLU;
volatile int16_t x833 = INT16_MAX;
static int8_t x835 = 1;
static int64_t x841 = 1522LL;
int64_t t29 = -111661654126776LL;
int16_t x940 = 1;
static int64_t x998 = 39551646088LL;
int64_t x1013 = INT64_MIN;
int16_t x1186 = INT16_MAX;
volatile int16_t x1188 = 3;
int16_t x1245 = INT16_MIN;
volatile int32_t t39 = -30;
uint16_t x1252 = 1U;
int8_t x1341 = INT8_MIN;
uint16_t x1368 = 14U;
uint64_t x1405 = 159LLU;
static volatile int32_t x1407 = INT32_MAX;
uint64_t t46 = 2247097039019LLU;
static int16_t x1445 = INT16_MIN;
uint8_t x1449 = 31U;
int16_t x1517 = -1;
static uint32_t x1518 = 3U;
int8_t x1624 = 1;
int8_t x1730 = INT8_MAX;
int64_t x1731 = 1LL;
int64_t t54 = 212339LL;
static int64_t x1757 = INT64_MAX;
uint8_t x1760 = 2U;
uint8_t x1772 = 0U;
int8_t x1897 = -11;
static uint8_t x1983 = 14U;
int16_t x1996 = 0;
int32_t x2145 = INT32_MIN;
int64_t x2215 = -189LL;
static volatile int32_t t66 = 472725513;
int8_t x2246 = -1;
int16_t x2274 = INT16_MAX;
uint8_t x2314 = 2U;
volatile uint64_t x2338 = 54735625LLU;
int8_t x2367 = INT8_MIN;
uint16_t x2534 = 1148U;
int32_t x2606 = INT32_MIN;
uint8_t x2617 = 7U;
volatile int32_t x2622 = -363370606;
int64_t x2687 = 2775942565333370157LL;
volatile int32_t x2689 = -1;
int32_t t86 = 76615932;
volatile int32_t t90 = 1;
int16_t x2902 = -1;
uint16_t x2909 = 75U;
static int64_t x2922 = -3825LL;
int8_t x2924 = 1;
uint64_t x2926 = 2607809LLU;
uint8_t x2928 = 18U;
uint8_t x2937 = 0U;
int8_t x2942 = 3;
static volatile int16_t x2949 = -1;
uint16_t x2951 = 856U;
volatile int32_t t98 = 549460;
int16_t x2982 = -89;
volatile int64_t x2984 = 0LL;
uint64_t t99 = 638930601LLU;
volatile int16_t x2995 = -8407;
volatile int32_t x3005 = 2;
uint32_t x3013 = 18U;
int8_t x3016 = 27;
int32_t x3061 = 196822313;
uint32_t x3063 = 10370U;
volatile int8_t x3084 = 3;
uint64_t x3110 = UINT64_MAX;
static uint32_t x3123 = 609U;
volatile int8_t x3124 = 3;
uint32_t t110 = 4174347U;
int64_t x3226 = -148656612317709LL;
static volatile uint32_t t111 = 4U;
int64_t x3329 = INT64_MAX;
int16_t x3405 = -1;
int32_t x3406 = INT32_MIN;
volatile int64_t x3413 = INT64_MIN;
uint16_t x3414 = 1U;
volatile uint64_t x3490 = UINT64_MAX;
int8_t x3492 = 31;
volatile int32_t t120 = 188185;
uint64_t x3582 = 38413LLU;
int32_t t122 = -2723;
int8_t x3636 = 3;
static uint64_t x3743 = 7LLU;
uint8_t x3744 = 4U;
uint8_t x3760 = 0U;
uint32_t x3774 = 785881711U;
static volatile int64_t x3791 = INT64_MIN;
static int8_t x3803 = -2;
int8_t x3885 = INT8_MIN;
volatile int32_t x3921 = -1;
int16_t x3922 = -1;
uint64_t x4025 = 3564746939761250178LLU;
int32_t x4028 = 9;
int32_t x4039 = -1364218;
uint8_t x4041 = 10U;
volatile uint16_t x4072 = 0U;
int64_t x4178 = INT64_MIN;
static volatile uint16_t x4180 = 3U;
volatile int32_t t144 = 332445;
uint8_t x4344 = 0U;
static uint32_t x4414 = UINT32_MAX;
uint64_t x4416 = 7LLU;
volatile uint32_t t148 = 1341U;
int64_t x4430 = 13466072146485667LL;
int8_t x4471 = INT8_MIN;
uint64_t t152 = 61575059385413LLU;
volatile int8_t x4550 = INT8_MAX;
static int64_t x4551 = -12502124LL;
static volatile int8_t x4634 = -1;
int32_t x4647 = -1;
volatile int16_t x4673 = 169;
static volatile uint64_t x4674 = UINT64_MAX;
int16_t x4676 = 2;
volatile uint32_t x4773 = 35U;
uint32_t x4782 = 3203U;
volatile int32_t x4783 = 1;
volatile uint16_t x4822 = 179U;
static volatile int8_t x4824 = 9;
static volatile int32_t x4909 = INT32_MIN;
int8_t x4910 = 3;
volatile int8_t x4991 = -18;
int8_t x5041 = -1;
int16_t x5044 = 1;
int64_t x5050 = -318118736LL;
int16_t x5051 = INT16_MIN;
int64_t x5122 = -1LL;
int16_t x5123 = INT16_MIN;
static int64_t x5214 = INT64_MIN;
uint8_t x5247 = 29U;
volatile int8_t x5269 = INT8_MIN;
volatile uint32_t x5327 = UINT32_MAX;
uint64_t x5354 = UINT64_MAX;
static int32_t t183 = 1;
int32_t t185 = -15;
static int32_t x5385 = 6079112;
volatile int32_t t186 = 65080;
int8_t x5395 = INT8_MIN;
uint32_t x5427 = UINT32_MAX;
volatile int64_t x5465 = -1LL;
volatile int32_t x5467 = INT32_MIN;
int32_t t191 = 16680430;
int16_t x5543 = 0;
static volatile int8_t x5554 = INT8_MIN;
int16_t x5580 = 0;
int64_t x5617 = -938323038938LL;
static int8_t x5661 = INT8_MIN;
static int64_t x5697 = INT64_MAX;
static uint64_t x5700 = 4LLU;
int64_t x5745 = 767147LL;
uint16_t x5746 = 1181U;


void f0(void) {
    	int32_t x5 = INT32_MIN;
	uint32_t x6 = 1U;
	uint16_t x7 = 30U;
	volatile int32_t t0 = -1535;

    t0 = ((x5%(x6!=x7))<<x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x17 = 26U;
	volatile int8_t x18 = 0;
	int8_t x20 = 0;
	volatile int32_t t1 = 130734548;

    t1 = ((x17%(x18!=x19))<<x20);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x33 = INT32_MAX;
	int8_t x34 = 0;
	int8_t x35 = INT8_MAX;
	int8_t x36 = 1;
	int32_t t2 = -185543954;

    t2 = ((x33%(x34!=x35))<<x36);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x38 = 155249943785181829LLU;
	volatile int32_t t3 = -1;

    t3 = ((x37%(x38!=x39))<<x40);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x41 = INT8_MIN;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = INT32_MIN;
	int8_t x44 = 3;
	int32_t t4 = -2036;

    t4 = ((x41%(x42!=x43))<<x44);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x49 = 70LLU;
	static int8_t x50 = -1;
	int16_t x51 = 12;
	volatile uint16_t x52 = 8U;
	volatile uint64_t t5 = 7808956666454LLU;

    t5 = ((x49%(x50!=x51))<<x52);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x61 = 1066LLU;
	volatile uint16_t x62 = 629U;
	uint64_t x64 = 5LLU;
	uint64_t t6 = 13000367205005323LLU;

    t6 = ((x61%(x62!=x63))<<x64);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x66 = 244642444933068671LLU;
	int8_t x68 = 24;
	int32_t t7 = 1;

    t7 = ((x65%(x66!=x67))<<x68);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x69 = INT32_MIN;
	volatile int32_t x70 = -1;
	static volatile uint16_t x71 = 233U;
	int32_t t8 = -12;

    t8 = ((x69%(x70!=x71))<<x72);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x105 = INT64_MAX;
	volatile int16_t x106 = 7477;
	uint32_t x107 = 10U;
	int32_t x108 = 27;
	volatile int64_t t9 = -1180548927488LL;

    t9 = ((x105%(x106!=x107))<<x108);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x162 = 27U;
	int16_t x163 = -745;
	uint8_t x164 = 6U;
	static int32_t t10 = -26623;

    t10 = ((x161%(x162!=x163))<<x164);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x207 = INT64_MAX;
	int16_t x208 = 10;
	int64_t t11 = -4379537076221925LL;

    t11 = ((x205%(x206!=x207))<<x208);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x313 = 2;
	int8_t x314 = INT8_MAX;
	int16_t x316 = 4;

    t12 = ((x313%(x314!=x315))<<x316);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x321 = INT32_MIN;
	int64_t x322 = -1LL;
	uint8_t x323 = 4U;
	static int32_t t13 = -766863374;

    t13 = ((x321%(x322!=x323))<<x324);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	uint8_t x382 = 122U;
	volatile int8_t x383 = 25;
	uint32_t x384 = 35U;

    t14 = ((x381%(x382!=x383))<<x384);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x465 = 0;
	int8_t x466 = INT8_MAX;
	int16_t x467 = INT16_MIN;
	int16_t x468 = 7;
	volatile int32_t t15 = 6469;

    t15 = ((x465%(x466!=x467))<<x468);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x469 = UINT16_MAX;
	int32_t x470 = INT32_MIN;
	int64_t x471 = 516314974202112794LL;
	int8_t x472 = 0;
	int32_t t16 = -645;

    t16 = ((x469%(x470!=x471))<<x472);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x502 = INT8_MIN;
	int64_t x503 = -1LL;
	uint8_t x504 = 25U;

    t17 = ((x501%(x502!=x503))<<x504);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x529 = INT64_MAX;
	volatile int8_t x530 = INT8_MIN;
	uint8_t x532 = 6U;
	int64_t t18 = -114772529LL;

    t18 = ((x529%(x530!=x531))<<x532);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x534 = 5U;
	uint64_t x535 = 790285LLU;

    t19 = ((x533%(x534!=x535))<<x536);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x553 = INT16_MIN;
	static int16_t x554 = 5855;
	int16_t x555 = -1;
	static int16_t x556 = 10;

    t20 = ((x553%(x554!=x555))<<x556);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x557 = -1LL;
	int16_t x559 = 0;
	uint32_t x560 = 0U;
	int64_t t21 = 1331341016586876811LL;

    t21 = ((x557%(x558!=x559))<<x560);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x633 = INT8_MIN;
	uint8_t x634 = 9U;
	volatile int64_t x635 = INT64_MAX;
	uint8_t x636 = 15U;
	int32_t t22 = 8703;

    t22 = ((x633%(x634!=x635))<<x636);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x645 = UINT8_MAX;
	static int8_t x646 = 14;
	int16_t x647 = 0;
	int32_t t23 = 6324517;

    t23 = ((x645%(x646!=x647))<<x648);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x762 = INT32_MIN;
	static uint64_t x763 = 241535247LLU;
	int64_t x764 = 12LL;
	volatile int64_t t24 = 4092LL;

    t24 = ((x761%(x762!=x763))<<x764);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x777 = INT64_MAX;
	int64_t x778 = INT64_MIN;
	int16_t x779 = -129;
	uint8_t x780 = 18U;
	static volatile int64_t t25 = -3706716976222LL;

    t25 = ((x777%(x778!=x779))<<x780);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t t26 = -70246480;

    t26 = ((x813%(x814!=x815))<<x816);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x830 = 14536;
	static int8_t x832 = 0;
	volatile int32_t t27 = 111819314;

    t27 = ((x829%(x830!=x831))<<x832);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x834 = 4052;
	static uint8_t x836 = 4U;
	volatile int32_t t28 = -313865507;

    t28 = ((x833%(x834!=x835))<<x836);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x842 = INT16_MIN;
	static int32_t x843 = INT32_MIN;
	volatile int8_t x844 = 0;

    t29 = ((x841%(x842!=x843))<<x844);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x873 = 148;
	static uint32_t x874 = UINT32_MAX;
	int32_t x875 = INT32_MIN;
	uint8_t x876 = 17U;
	static volatile int32_t t30 = -106468062;

    t30 = ((x873%(x874!=x875))<<x876);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x921 = 57;
	int32_t x922 = 85381918;
	int16_t x923 = INT16_MIN;
	uint8_t x924 = 15U;
	static volatile int32_t t31 = 624354017;

    t31 = ((x921%(x922!=x923))<<x924);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x937 = -1;
	int16_t x938 = -1;
	static int16_t x939 = INT16_MIN;
	int32_t t32 = 26761654;

    t32 = ((x937%(x938!=x939))<<x940);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x993 = INT64_MIN;
	uint8_t x994 = 53U;
	static volatile uint8_t x995 = 2U;
	uint8_t x996 = 3U;
	int64_t t33 = 253372620422332LL;

    t33 = ((x993%(x994!=x995))<<x996);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x997 = UINT8_MAX;
	uint8_t x999 = 3U;
	static int16_t x1000 = 6;
	volatile int32_t t34 = 0;

    t34 = ((x997%(x998!=x999))<<x1000);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x1014 = INT16_MIN;
	int64_t x1015 = -17229651010566LL;
	uint16_t x1016 = 21U;
	int64_t t35 = -44103932396275LL;

    t35 = ((x1013%(x1014!=x1015))<<x1016);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x1161 = INT64_MIN;
	uint8_t x1162 = 0U;
	int8_t x1163 = 1;
	uint8_t x1164 = 7U;
	int64_t t36 = -772705248188997192LL;

    t36 = ((x1161%(x1162!=x1163))<<x1164);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x1185 = INT8_MIN;
	int32_t x1187 = INT32_MIN;
	volatile int32_t t37 = 3278;

    t37 = ((x1185%(x1186!=x1187))<<x1188);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1229 = 20U;
	volatile int32_t x1230 = INT32_MIN;
	int16_t x1231 = INT16_MIN;
	int8_t x1232 = 0;
	int32_t t38 = -2209155;

    t38 = ((x1229%(x1230!=x1231))<<x1232);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1246 = INT32_MAX;
	uint16_t x1247 = 375U;
	volatile uint8_t x1248 = 0U;

    t39 = ((x1245%(x1246!=x1247))<<x1248);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1249 = INT8_MIN;
	int64_t x1250 = INT64_MIN;
	volatile int16_t x1251 = 1;
	volatile int32_t t40 = 2600585;

    t40 = ((x1249%(x1250!=x1251))<<x1252);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1309 = INT8_MIN;
	int64_t x1310 = INT64_MIN;
	uint8_t x1311 = UINT8_MAX;
	uint8_t x1312 = 5U;
	volatile int32_t t41 = -33644243;

    t41 = ((x1309%(x1310!=x1311))<<x1312);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x1317 = -1;
	int8_t x1318 = -61;
	uint64_t x1319 = 24259902433535146LLU;
	uint8_t x1320 = 13U;
	static volatile int32_t t42 = 112;

    t42 = ((x1317%(x1318!=x1319))<<x1320);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x1342 = UINT16_MAX;
	int16_t x1343 = 97;
	static volatile int32_t x1344 = 2;
	static int32_t t43 = 35088309;

    t43 = ((x1341%(x1342!=x1343))<<x1344);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x1365 = 10141882546371615LL;
	uint64_t x1366 = UINT64_MAX;
	uint32_t x1367 = UINT32_MAX;
	volatile int64_t t44 = -396442LL;

    t44 = ((x1365%(x1366!=x1367))<<x1368);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x1385 = INT64_MIN;
	int8_t x1386 = INT8_MIN;
	volatile int64_t x1387 = -5115700065LL;
	uint16_t x1388 = 37U;
	int64_t t45 = 2371LL;

    t45 = ((x1385%(x1386!=x1387))<<x1388);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x1406 = -1LL;
	uint8_t x1408 = 3U;

    t46 = ((x1405%(x1406!=x1407))<<x1408);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1429 = INT64_MIN;
	int32_t x1430 = -13;
	static volatile int32_t x1431 = -101015664;
	int16_t x1432 = 13;
	int64_t t47 = -9772056902972LL;

    t47 = ((x1429%(x1430!=x1431))<<x1432);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x1446 = 1U;
	int32_t x1447 = -5842194;
	static int8_t x1448 = 1;
	static int32_t t48 = 551377547;

    t48 = ((x1445%(x1446!=x1447))<<x1448);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x1450 = 985LLU;
	int32_t x1451 = -988336;
	uint8_t x1452 = 29U;
	int32_t t49 = -18154;

    t49 = ((x1449%(x1450!=x1451))<<x1452);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x1465 = -1;
	static uint32_t x1466 = 39U;
	int64_t x1467 = INT64_MAX;
	static int8_t x1468 = 0;
	volatile int32_t t50 = 4992293;

    t50 = ((x1465%(x1466!=x1467))<<x1468);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x1519 = 1306385LL;
	int16_t x1520 = 1;
	volatile int32_t t51 = 551532;

    t51 = ((x1517%(x1518!=x1519))<<x1520);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x1557 = 5U;
	int64_t x1558 = INT64_MIN;
	volatile int64_t x1559 = -1LL;
	static volatile int16_t x1560 = 18;
	volatile int32_t t52 = 3815489;

    t52 = ((x1557%(x1558!=x1559))<<x1560);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1621 = 1;
	int16_t x1622 = 9488;
	int64_t x1623 = INT64_MIN;
	static int32_t t53 = -50760945;

    t53 = ((x1621%(x1622!=x1623))<<x1624);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x1729 = -3775268434LL;
	volatile int8_t x1732 = 0;

    t54 = ((x1729%(x1730!=x1731))<<x1732);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1758 = UINT8_MAX;
	static uint16_t x1759 = 1U;
	static volatile int64_t t55 = -293687462033LL;

    t55 = ((x1757%(x1758!=x1759))<<x1760);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x1769 = INT16_MAX;
	uint32_t x1770 = UINT32_MAX;
	static int32_t x1771 = -30;
	int32_t t56 = -155935;

    t56 = ((x1769%(x1770!=x1771))<<x1772);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x1898 = INT8_MAX;
	int8_t x1899 = INT8_MIN;
	int8_t x1900 = 4;
	static volatile int32_t t57 = -109408;

    t57 = ((x1897%(x1898!=x1899))<<x1900);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x1937 = INT16_MIN;
	int64_t x1938 = -1LL;
	static uint32_t x1939 = UINT32_MAX;
	static uint16_t x1940 = 7U;
	int32_t t58 = -112589294;

    t58 = ((x1937%(x1938!=x1939))<<x1940);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x1981 = INT32_MAX;
	int64_t x1982 = -12410LL;
	volatile int32_t x1984 = 0;
	volatile int32_t t59 = -2533;

    t59 = ((x1981%(x1982!=x1983))<<x1984);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x1993 = 52;
	uint16_t x1994 = UINT16_MAX;
	volatile int64_t x1995 = -253276448737832LL;
	volatile int32_t t60 = 33994164;

    t60 = ((x1993%(x1994!=x1995))<<x1996);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x2089 = 22021U;
	static int8_t x2090 = INT8_MIN;
	uint16_t x2091 = 91U;
	volatile uint16_t x2092 = 7U;
	int32_t t61 = 67;

    t61 = ((x2089%(x2090!=x2091))<<x2092);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x2105 = 3;
	uint64_t x2106 = 140333452050927131LLU;
	int32_t x2107 = INT32_MIN;
	uint32_t x2108 = 3U;
	int32_t t62 = 60026;

    t62 = ((x2105%(x2106!=x2107))<<x2108);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x2146 = INT64_MAX;
	static volatile int32_t x2147 = -1;
	static uint16_t x2148 = 2U;
	volatile int32_t t63 = -146363;

    t63 = ((x2145%(x2146!=x2147))<<x2148);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x2189 = -526;
	static uint32_t x2190 = 207U;
	static volatile int16_t x2191 = INT16_MIN;
	uint8_t x2192 = 0U;
	static int32_t t64 = -84279664;

    t64 = ((x2189%(x2190!=x2191))<<x2192);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x2213 = -1;
	volatile uint64_t x2214 = 3501736794013690990LLU;
	volatile int32_t x2216 = 0;
	volatile int32_t t65 = -5768;

    t65 = ((x2213%(x2214!=x2215))<<x2216);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x2229 = 0;
	int32_t x2230 = -1;
	int16_t x2231 = INT16_MIN;
	static uint32_t x2232 = 13U;

    t66 = ((x2229%(x2230!=x2231))<<x2232);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x2245 = -1435622;
	int8_t x2247 = INT8_MAX;
	int32_t x2248 = 7;
	int32_t t67 = -98468842;

    t67 = ((x2245%(x2246!=x2247))<<x2248);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x2249 = -6653LL;
	volatile uint64_t x2250 = 14995738893612LLU;
	static int64_t x2251 = -1LL;
	int8_t x2252 = 26;
	volatile int64_t t68 = 622265347960LL;

    t68 = ((x2249%(x2250!=x2251))<<x2252);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x2265 = INT64_MIN;
	static int8_t x2266 = INT8_MIN;
	uint64_t x2267 = 228376033980990LLU;
	uint8_t x2268 = 19U;
	int64_t t69 = 1593968963173355LL;

    t69 = ((x2265%(x2266!=x2267))<<x2268);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2273 = 1949147207669LLU;
	static volatile int8_t x2275 = -1;
	int16_t x2276 = 25;
	volatile uint64_t t70 = 42LLU;

    t70 = ((x2273%(x2274!=x2275))<<x2276);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x2297 = -20;
	int8_t x2298 = -1;
	static int64_t x2299 = 2638795938599LL;
	static uint32_t x2300 = 11U;
	volatile int32_t t71 = -6;

    t71 = ((x2297%(x2298!=x2299))<<x2300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x2313 = 431231266U;
	volatile uint64_t x2315 = 5612070LLU;
	int8_t x2316 = 0;
	volatile uint32_t t72 = 2U;

    t72 = ((x2313%(x2314!=x2315))<<x2316);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x2337 = -34;
	int16_t x2339 = INT16_MAX;
	volatile uint32_t x2340 = 1U;
	int32_t t73 = -53417633;

    t73 = ((x2337%(x2338!=x2339))<<x2340);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x2365 = UINT32_MAX;
	int32_t x2366 = INT32_MAX;
	volatile uint16_t x2368 = 7U;
	uint32_t t74 = 666785444U;

    t74 = ((x2365%(x2366!=x2367))<<x2368);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2421 = -1;
	uint32_t x2422 = 347562U;
	uint8_t x2423 = 1U;
	static uint8_t x2424 = 27U;
	int32_t t75 = -49321697;

    t75 = ((x2421%(x2422!=x2423))<<x2424);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x2533 = INT64_MAX;
	uint16_t x2535 = 85U;
	uint8_t x2536 = 1U;
	volatile int64_t t76 = -89183LL;

    t76 = ((x2533%(x2534!=x2535))<<x2536);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x2561 = INT32_MIN;
	int8_t x2562 = -1;
	static int32_t x2563 = INT32_MIN;
	volatile uint16_t x2564 = 3U;
	volatile int32_t t77 = -716;

    t77 = ((x2561%(x2562!=x2563))<<x2564);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x2605 = -1LL;
	int32_t x2607 = 232720942;
	volatile uint8_t x2608 = 5U;
	int64_t t78 = -307724448923LL;

    t78 = ((x2605%(x2606!=x2607))<<x2608);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x2618 = 15197U;
	static int16_t x2619 = 505;
	static uint64_t x2620 = 7LLU;
	static int32_t t79 = 9496;

    t79 = ((x2617%(x2618!=x2619))<<x2620);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x2621 = 0LL;
	static uint64_t x2623 = UINT64_MAX;
	int8_t x2624 = 24;
	volatile int64_t t80 = 858328LL;

    t80 = ((x2621%(x2622!=x2623))<<x2624);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x2633 = 10U;
	int16_t x2634 = -5;
	int64_t x2635 = INT64_MAX;
	uint32_t x2636 = 6U;
	int32_t t81 = 111;

    t81 = ((x2633%(x2634!=x2635))<<x2636);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x2685 = 1LLU;
	int16_t x2686 = INT16_MIN;
	static uint16_t x2688 = 29U;
	uint64_t t82 = 26798738107371322LLU;

    t82 = ((x2685%(x2686!=x2687))<<x2688);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x2690 = INT64_MIN;
	uint64_t x2691 = UINT64_MAX;
	volatile uint16_t x2692 = 9U;
	int32_t t83 = -210510;

    t83 = ((x2689%(x2690!=x2691))<<x2692);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2701 = INT32_MIN;
	int64_t x2702 = 853078998356LL;
	int32_t x2703 = INT32_MIN;
	volatile uint8_t x2704 = 0U;
	static int32_t t84 = -945;

    t84 = ((x2701%(x2702!=x2703))<<x2704);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x2717 = UINT8_MAX;
	static int64_t x2718 = -1LL;
	uint64_t x2719 = 475094558876LLU;
	volatile int16_t x2720 = 1;
	volatile int32_t t85 = -166186445;

    t85 = ((x2717%(x2718!=x2719))<<x2720);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x2745 = INT8_MIN;
	uint8_t x2746 = UINT8_MAX;
	int64_t x2747 = INT64_MAX;
	int32_t x2748 = 10;

    t86 = ((x2745%(x2746!=x2747))<<x2748);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x2757 = 4U;
	uint8_t x2758 = 23U;
	int16_t x2759 = INT16_MAX;
	static uint8_t x2760 = 2U;
	volatile int32_t t87 = 596;

    t87 = ((x2757%(x2758!=x2759))<<x2760);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x2765 = INT8_MIN;
	volatile uint32_t x2766 = 3881241U;
	uint32_t x2767 = 3882276U;
	uint8_t x2768 = 4U;
	int32_t t88 = -2896;

    t88 = ((x2765%(x2766!=x2767))<<x2768);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2785 = 719992282;
	int16_t x2786 = INT16_MIN;
	uint16_t x2787 = UINT16_MAX;
	uint8_t x2788 = 9U;
	int32_t t89 = -56300051;

    t89 = ((x2785%(x2786!=x2787))<<x2788);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x2845 = 7U;
	static uint8_t x2846 = UINT8_MAX;
	int64_t x2847 = INT64_MAX;
	static int8_t x2848 = 0;

    t90 = ((x2845%(x2846!=x2847))<<x2848);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x2885 = -1;
	int16_t x2886 = 46;
	static uint32_t x2887 = UINT32_MAX;
	uint8_t x2888 = 25U;
	volatile int32_t t91 = 65121;

    t91 = ((x2885%(x2886!=x2887))<<x2888);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x2901 = INT32_MIN;
	static int8_t x2903 = 4;
	static int8_t x2904 = 0;
	int32_t t92 = -36391911;

    t92 = ((x2901%(x2902!=x2903))<<x2904);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x2910 = 514612;
	static volatile int16_t x2911 = -5;
	static volatile int8_t x2912 = 26;
	volatile int32_t t93 = 34;

    t93 = ((x2909%(x2910!=x2911))<<x2912);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x2921 = 4;
	volatile uint32_t x2923 = 280U;
	int32_t t94 = 3;

    t94 = ((x2921%(x2922!=x2923))<<x2924);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x2925 = UINT8_MAX;
	volatile int8_t x2927 = 43;
	int32_t t95 = 0;

    t95 = ((x2925%(x2926!=x2927))<<x2928);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x2938 = UINT8_MAX;
	volatile int64_t x2939 = 969220048170LL;
	uint32_t x2940 = 8U;
	int32_t t96 = 641;

    t96 = ((x2937%(x2938!=x2939))<<x2940);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x2941 = INT16_MIN;
	int8_t x2943 = INT8_MIN;
	int8_t x2944 = 5;
	int32_t t97 = -14533539;

    t97 = ((x2941%(x2942!=x2943))<<x2944);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x2950 = 310195LLU;
	uint8_t x2952 = 7U;

    t98 = ((x2949%(x2950!=x2951))<<x2952);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x2981 = UINT64_MAX;
	volatile uint8_t x2983 = 3U;

    t99 = ((x2981%(x2982!=x2983))<<x2984);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x2993 = 6181458264LLU;
	int8_t x2994 = INT8_MAX;
	uint8_t x2996 = 32U;
	static volatile uint64_t t100 = 1749974319364LLU;

    t100 = ((x2993%(x2994!=x2995))<<x2996);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x3006 = 87U;
	static uint64_t x3007 = 4452470320LLU;
	int16_t x3008 = 22;
	int32_t t101 = -9435038;

    t101 = ((x3005%(x3006!=x3007))<<x3008);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x3014 = 4515LLU;
	int16_t x3015 = INT16_MAX;
	uint32_t t102 = 126404U;

    t102 = ((x3013%(x3014!=x3015))<<x3016);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x3037 = -1;
	int32_t x3038 = INT32_MAX;
	volatile int32_t x3039 = -37;
	int8_t x3040 = 1;
	int32_t t103 = 8024;

    t103 = ((x3037%(x3038!=x3039))<<x3040);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x3049 = UINT32_MAX;
	uint8_t x3050 = 5U;
	uint8_t x3051 = 8U;
	static uint16_t x3052 = 10U;
	uint32_t t104 = 0U;

    t104 = ((x3049%(x3050!=x3051))<<x3052);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x3053 = -29;
	uint8_t x3054 = 15U;
	static volatile uint16_t x3055 = UINT16_MAX;
	volatile int8_t x3056 = 1;
	static int32_t t105 = 0;

    t105 = ((x3053%(x3054!=x3055))<<x3056);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x3062 = 14667;
	uint8_t x3064 = 14U;
	volatile int32_t t106 = -1803974;

    t106 = ((x3061%(x3062!=x3063))<<x3064);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x3081 = INT64_MAX;
	int16_t x3082 = INT16_MIN;
	int32_t x3083 = INT32_MAX;
	int64_t t107 = -387451059551LL;

    t107 = ((x3081%(x3082!=x3083))<<x3084);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x3109 = INT32_MIN;
	int64_t x3111 = INT64_MIN;
	static int16_t x3112 = 1;
	volatile int32_t t108 = 4131;

    t108 = ((x3109%(x3110!=x3111))<<x3112);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x3121 = INT64_MIN;
	uint16_t x3122 = 21U;
	static volatile int64_t t109 = 0LL;

    t109 = ((x3121%(x3122!=x3123))<<x3124);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x3209 = 24216U;
	uint32_t x3210 = 168455430U;
	int64_t x3211 = INT64_MIN;
	static uint16_t x3212 = 22U;

    t110 = ((x3209%(x3210!=x3211))<<x3212);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint32_t x3225 = 1598529005U;
	uint8_t x3227 = 3U;
	volatile int8_t x3228 = 12;

    t111 = ((x3225%(x3226!=x3227))<<x3228);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x3330 = 465402585752LLU;
	int8_t x3331 = INT8_MAX;
	uint8_t x3332 = 1U;
	volatile int64_t t112 = 381243LL;

    t112 = ((x3329%(x3330!=x3331))<<x3332);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x3385 = 4202372999LLU;
	static int8_t x3386 = 0;
	int64_t x3387 = INT64_MAX;
	uint8_t x3388 = 4U;
	static volatile uint64_t t113 = 259404LLU;

    t113 = ((x3385%(x3386!=x3387))<<x3388);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x3407 = UINT8_MAX;
	static uint64_t x3408 = 1LLU;
	int32_t t114 = 217898;

    t114 = ((x3405%(x3406!=x3407))<<x3408);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x3415 = -1;
	int8_t x3416 = 45;
	int64_t t115 = -57327LL;

    t115 = ((x3413%(x3414!=x3415))<<x3416);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x3445 = INT16_MIN;
	uint32_t x3446 = UINT32_MAX;
	volatile int32_t x3447 = INT32_MIN;
	volatile int16_t x3448 = 1;
	int32_t t116 = -709826504;

    t116 = ((x3445%(x3446!=x3447))<<x3448);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x3449 = -1LL;
	int8_t x3450 = -1;
	int64_t x3451 = -7225277458910579LL;
	uint32_t x3452 = 3U;
	static volatile int64_t t117 = -983996923333LL;

    t117 = ((x3449%(x3450!=x3451))<<x3452);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x3489 = INT16_MAX;
	volatile uint8_t x3491 = 1U;
	int32_t t118 = -5030;

    t118 = ((x3489%(x3490!=x3491))<<x3492);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x3509 = 20U;
	int32_t x3510 = 0;
	int64_t x3511 = -103007659LL;
	int8_t x3512 = 15;
	static volatile int32_t t119 = -102584;

    t119 = ((x3509%(x3510!=x3511))<<x3512);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x3541 = -597;
	int16_t x3542 = INT16_MIN;
	int32_t x3543 = INT32_MIN;
	volatile uint16_t x3544 = 14U;

    t120 = ((x3541%(x3542!=x3543))<<x3544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x3581 = 369U;
	int32_t x3583 = -2;
	int32_t x3584 = 0;
	static volatile int32_t t121 = 6;

    t121 = ((x3581%(x3582!=x3583))<<x3584);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x3617 = -1;
	static uint32_t x3618 = 1U;
	static volatile int16_t x3619 = 1821;
	uint8_t x3620 = 5U;

    t122 = ((x3617%(x3618!=x3619))<<x3620);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x3633 = UINT8_MAX;
	static int32_t x3634 = -5;
	static uint32_t x3635 = 31568598U;
	int32_t t123 = 0;

    t123 = ((x3633%(x3634!=x3635))<<x3636);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x3697 = 282LLU;
	int8_t x3698 = INT8_MIN;
	volatile int32_t x3699 = INT32_MIN;
	static int8_t x3700 = 0;
	volatile uint64_t t124 = 33957144782376879LLU;

    t124 = ((x3697%(x3698!=x3699))<<x3700);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x3705 = 1130591166952896987LL;
	int8_t x3706 = 6;
	int8_t x3707 = INT8_MIN;
	uint16_t x3708 = 25U;
	static int64_t t125 = 411405602473141LL;

    t125 = ((x3705%(x3706!=x3707))<<x3708);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x3741 = -1;
	int16_t x3742 = INT16_MIN;
	int32_t t126 = -110491262;

    t126 = ((x3741%(x3742!=x3743))<<x3744);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x3757 = INT16_MIN;
	int8_t x3758 = -1;
	static int64_t x3759 = INT64_MAX;
	volatile int32_t t127 = -190877936;

    t127 = ((x3757%(x3758!=x3759))<<x3760);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x3773 = UINT64_MAX;
	static int8_t x3775 = INT8_MIN;
	uint16_t x3776 = 55U;
	static volatile uint64_t t128 = 2201LLU;

    t128 = ((x3773%(x3774!=x3775))<<x3776);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x3789 = 7949LLU;
	uint32_t x3790 = 465237135U;
	uint8_t x3792 = 23U;
	static uint64_t t129 = 103999LLU;

    t129 = ((x3789%(x3790!=x3791))<<x3792);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x3801 = INT16_MIN;
	int8_t x3802 = -1;
	uint8_t x3804 = 25U;
	volatile int32_t t130 = 12170;

    t130 = ((x3801%(x3802!=x3803))<<x3804);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x3841 = 1281;
	int8_t x3842 = 11;
	static int32_t x3843 = INT32_MIN;
	volatile uint16_t x3844 = 8U;
	volatile int32_t t131 = 1786563;

    t131 = ((x3841%(x3842!=x3843))<<x3844);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x3886 = INT32_MIN;
	uint8_t x3887 = 0U;
	uint8_t x3888 = 3U;
	volatile int32_t t132 = -141858876;

    t132 = ((x3885%(x3886!=x3887))<<x3888);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x3923 = 11U;
	uint8_t x3924 = 14U;
	static int32_t t133 = 494055;

    t133 = ((x3921%(x3922!=x3923))<<x3924);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x3957 = 17617542U;
	uint32_t x3958 = 638U;
	int16_t x3959 = -1;
	uint16_t x3960 = 0U;
	volatile uint32_t t134 = 632030U;

    t134 = ((x3957%(x3958!=x3959))<<x3960);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x4005 = -1;
	int16_t x4006 = 5;
	uint8_t x4007 = UINT8_MAX;
	int8_t x4008 = 1;
	volatile int32_t t135 = -585663;

    t135 = ((x4005%(x4006!=x4007))<<x4008);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x4026 = 197;
	int32_t x4027 = 30;
	uint64_t t136 = 6287587426LLU;

    t136 = ((x4025%(x4026!=x4027))<<x4028);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x4037 = 429945072;
	int8_t x4038 = 1;
	uint16_t x4040 = 22U;
	int32_t t137 = 137498017;

    t137 = ((x4037%(x4038!=x4039))<<x4040);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x4042 = INT32_MIN;
	volatile int16_t x4043 = -56;
	static int16_t x4044 = 1;
	int32_t t138 = 3252657;

    t138 = ((x4041%(x4042!=x4043))<<x4044);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x4045 = INT8_MIN;
	static int16_t x4046 = -2686;
	int16_t x4047 = INT16_MIN;
	uint8_t x4048 = 2U;
	static int32_t t139 = 7990;

    t139 = ((x4045%(x4046!=x4047))<<x4048);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x4069 = INT32_MAX;
	volatile int8_t x4070 = 51;
	static int16_t x4071 = 1;
	int32_t t140 = -139378047;

    t140 = ((x4069%(x4070!=x4071))<<x4072);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x4137 = UINT8_MAX;
	volatile int16_t x4138 = INT16_MAX;
	int64_t x4139 = INT64_MIN;
	uint32_t x4140 = 6U;
	static int32_t t141 = -9;

    t141 = ((x4137%(x4138!=x4139))<<x4140);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x4177 = UINT16_MAX;
	int8_t x4179 = INT8_MAX;
	volatile int32_t t142 = -33533;

    t142 = ((x4177%(x4178!=x4179))<<x4180);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x4197 = INT32_MIN;
	int16_t x4198 = 1;
	int32_t x4199 = INT32_MAX;
	uint16_t x4200 = 1U;
	int32_t t143 = 1207;

    t143 = ((x4197%(x4198!=x4199))<<x4200);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x4217 = INT16_MIN;
	uint8_t x4218 = 14U;
	uint32_t x4219 = UINT32_MAX;
	uint8_t x4220 = 1U;

    t144 = ((x4217%(x4218!=x4219))<<x4220);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x4281 = -2124084LL;
	int64_t x4282 = 104LL;
	uint64_t x4283 = 583LLU;
	static int16_t x4284 = 1;
	volatile int64_t t145 = -1986190775550LL;

    t145 = ((x4281%(x4282!=x4283))<<x4284);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x4325 = INT8_MIN;
	uint64_t x4326 = 2524LLU;
	static uint16_t x4327 = 241U;
	uint64_t x4328 = 0LLU;
	static int32_t t146 = 65470;

    t146 = ((x4325%(x4326!=x4327))<<x4328);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x4341 = -1LL;
	volatile int8_t x4342 = INT8_MAX;
	int32_t x4343 = 603533;
	int64_t t147 = -877015141878358992LL;

    t147 = ((x4341%(x4342!=x4343))<<x4344);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x4413 = 811U;
	uint64_t x4415 = 3732541718LLU;

    t148 = ((x4413%(x4414!=x4415))<<x4416);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x4429 = INT16_MIN;
	volatile int32_t x4431 = 356900625;
	uint8_t x4432 = 0U;
	volatile int32_t t149 = -119995787;

    t149 = ((x4429%(x4430!=x4431))<<x4432);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x4433 = -1LL;
	uint64_t x4434 = UINT64_MAX;
	int64_t x4435 = INT64_MIN;
	uint8_t x4436 = 3U;
	volatile int64_t t150 = 1852LL;

    t150 = ((x4433%(x4434!=x4435))<<x4436);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x4469 = INT64_MIN;
	uint32_t x4470 = 125794463U;
	uint16_t x4472 = 27U;
	int64_t t151 = 22LL;

    t151 = ((x4469%(x4470!=x4471))<<x4472);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x4521 = UINT64_MAX;
	int8_t x4522 = INT8_MAX;
	static uint16_t x4523 = 330U;
	int8_t x4524 = 33;

    t152 = ((x4521%(x4522!=x4523))<<x4524);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x4549 = 8453U;
	int8_t x4552 = 0;
	int32_t t153 = 0;

    t153 = ((x4549%(x4550!=x4551))<<x4552);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x4593 = INT32_MAX;
	int16_t x4594 = -1;
	uint32_t x4595 = 305U;
	uint8_t x4596 = 19U;
	static volatile int32_t t154 = -6237273;

    t154 = ((x4593%(x4594!=x4595))<<x4596);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x4633 = INT16_MIN;
	int16_t x4635 = INT16_MIN;
	static int32_t x4636 = 0;
	volatile int32_t t155 = -1239;

    t155 = ((x4633%(x4634!=x4635))<<x4636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x4645 = 1682097216U;
	int32_t x4646 = -10515264;
	static volatile int8_t x4648 = 6;
	uint32_t t156 = 14U;

    t156 = ((x4645%(x4646!=x4647))<<x4648);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x4675 = INT8_MAX;
	volatile int32_t t157 = 12175;

    t157 = ((x4673%(x4674!=x4675))<<x4676);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x4685 = 1U;
	volatile uint32_t x4686 = 11428491U;
	volatile uint16_t x4687 = UINT16_MAX;
	uint64_t x4688 = 0LLU;
	int32_t t158 = -2381;

    t158 = ((x4685%(x4686!=x4687))<<x4688);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x4749 = 1U;
	static int32_t x4750 = -1;
	uint8_t x4751 = 37U;
	int8_t x4752 = 4;
	int32_t t159 = 681;

    t159 = ((x4749%(x4750!=x4751))<<x4752);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x4774 = -1;
	uint32_t x4775 = 1060794059U;
	uint8_t x4776 = 2U;
	uint32_t t160 = 7688029U;

    t160 = ((x4773%(x4774!=x4775))<<x4776);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x4781 = INT32_MIN;
	int16_t x4784 = 9;
	volatile int32_t t161 = -56;

    t161 = ((x4781%(x4782!=x4783))<<x4784);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x4785 = 49185U;
	volatile int32_t x4786 = INT32_MAX;
	volatile int16_t x4787 = INT16_MAX;
	uint8_t x4788 = 0U;
	volatile uint32_t t162 = 60972U;

    t162 = ((x4785%(x4786!=x4787))<<x4788);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x4817 = -436;
	int32_t x4818 = -8034004;
	static uint64_t x4819 = UINT64_MAX;
	int8_t x4820 = 2;
	int32_t t163 = -181495144;

    t163 = ((x4817%(x4818!=x4819))<<x4820);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x4821 = -33;
	volatile uint64_t x4823 = 10947LLU;
	volatile int32_t t164 = -485519;

    t164 = ((x4821%(x4822!=x4823))<<x4824);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x4841 = INT32_MIN;
	int32_t x4842 = INT32_MAX;
	uint16_t x4843 = 16U;
	volatile uint16_t x4844 = 0U;
	int32_t t165 = -174;

    t165 = ((x4841%(x4842!=x4843))<<x4844);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x4911 = -783329LL;
	int64_t x4912 = 0LL;
	static volatile int32_t t166 = 174489;

    t166 = ((x4909%(x4910!=x4911))<<x4912);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x4921 = 0U;
	uint16_t x4922 = 30956U;
	uint32_t x4923 = 9997751U;
	uint8_t x4924 = 18U;
	volatile int32_t t167 = -1813433;

    t167 = ((x4921%(x4922!=x4923))<<x4924);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x4973 = -1;
	uint8_t x4974 = 63U;
	int32_t x4975 = -1;
	static int8_t x4976 = 2;
	volatile int32_t t168 = -25782451;

    t168 = ((x4973%(x4974!=x4975))<<x4976);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x4981 = INT32_MAX;
	int64_t x4982 = 28LL;
	volatile int64_t x4983 = -1LL;
	volatile uint32_t x4984 = 0U;
	static int32_t t169 = 1787305;

    t169 = ((x4981%(x4982!=x4983))<<x4984);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x4989 = INT8_MIN;
	uint64_t x4990 = 13LLU;
	int8_t x4992 = 4;
	static volatile int32_t t170 = 6687266;

    t170 = ((x4989%(x4990!=x4991))<<x4992);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x5017 = -1097027971434898566LL;
	int64_t x5018 = 16689607103LL;
	int32_t x5019 = 263;
	volatile uint8_t x5020 = 34U;
	volatile int64_t t171 = 13933380938452481LL;

    t171 = ((x5017%(x5018!=x5019))<<x5020);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x5042 = -1;
	uint64_t x5043 = 6533609626189292381LLU;
	volatile int32_t t172 = 2760;

    t172 = ((x5041%(x5042!=x5043))<<x5044);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x5049 = UINT64_MAX;
	uint16_t x5052 = 5U;
	uint64_t t173 = 243253LLU;

    t173 = ((x5049%(x5050!=x5051))<<x5052);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x5053 = 20U;
	int64_t x5054 = INT64_MIN;
	static uint16_t x5055 = UINT16_MAX;
	int8_t x5056 = 16;
	int32_t t174 = -345;

    t174 = ((x5053%(x5054!=x5055))<<x5056);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x5085 = INT64_MIN;
	uint8_t x5086 = 15U;
	uint8_t x5087 = 2U;
	int16_t x5088 = 2;
	int64_t t175 = 192022594436869LL;

    t175 = ((x5085%(x5086!=x5087))<<x5088);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x5121 = UINT16_MAX;
	int8_t x5124 = 6;
	static volatile int32_t t176 = 0;

    t176 = ((x5121%(x5122!=x5123))<<x5124);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x5213 = INT8_MIN;
	static int32_t x5215 = INT32_MIN;
	int16_t x5216 = 1;
	static int32_t t177 = 415881;

    t177 = ((x5213%(x5214!=x5215))<<x5216);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x5237 = INT64_MIN;
	uint32_t x5238 = UINT32_MAX;
	uint8_t x5239 = 7U;
	uint64_t x5240 = 4LLU;
	volatile int64_t t178 = 9275LL;

    t178 = ((x5237%(x5238!=x5239))<<x5240);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x5245 = -151;
	static uint64_t x5246 = 8980LLU;
	static uint64_t x5248 = 0LLU;
	int32_t t179 = 98;

    t179 = ((x5245%(x5246!=x5247))<<x5248);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x5257 = INT8_MAX;
	uint16_t x5258 = 235U;
	static int32_t x5259 = -1;
	static uint8_t x5260 = 1U;
	int32_t t180 = 22;

    t180 = ((x5257%(x5258!=x5259))<<x5260);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x5270 = INT16_MAX;
	int32_t x5271 = 2836;
	int8_t x5272 = 15;
	int32_t t181 = -15;

    t181 = ((x5269%(x5270!=x5271))<<x5272);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x5325 = -1;
	int32_t x5326 = 0;
	int8_t x5328 = 3;
	int32_t t182 = 21465312;

    t182 = ((x5325%(x5326!=x5327))<<x5328);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x5353 = -1;
	static int64_t x5355 = INT64_MIN;
	volatile uint16_t x5356 = 6U;

    t183 = ((x5353%(x5354!=x5355))<<x5356);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x5361 = 5;
	int16_t x5362 = INT16_MIN;
	static volatile int32_t x5363 = INT32_MIN;
	static uint32_t x5364 = 1U;
	static int32_t t184 = -56979861;

    t184 = ((x5361%(x5362!=x5363))<<x5364);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x5365 = INT8_MAX;
	int8_t x5366 = -28;
	int8_t x5367 = INT8_MAX;
	int8_t x5368 = 1;

    t185 = ((x5365%(x5366!=x5367))<<x5368);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x5386 = INT64_MIN;
	static int64_t x5387 = -1LL;
	static uint8_t x5388 = 2U;

    t186 = ((x5385%(x5386!=x5387))<<x5388);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x5393 = -1LL;
	volatile uint16_t x5394 = 116U;
	uint8_t x5396 = 5U;
	int64_t t187 = -367976174866519LL;

    t187 = ((x5393%(x5394!=x5395))<<x5396);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x5425 = INT32_MAX;
	int32_t x5426 = 974044795;
	uint16_t x5428 = 7U;
	static int32_t t188 = 18009194;

    t188 = ((x5425%(x5426!=x5427))<<x5428);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x5466 = -1LL;
	int16_t x5468 = 2;
	volatile int64_t t189 = 96LL;

    t189 = ((x5465%(x5466!=x5467))<<x5468);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x5469 = 311108444U;
	volatile uint32_t x5470 = UINT32_MAX;
	static uint64_t x5471 = 1958796813LLU;
	static int32_t x5472 = 0;
	volatile uint32_t t190 = 658270U;

    t190 = ((x5469%(x5470!=x5471))<<x5472);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x5501 = INT32_MIN;
	int16_t x5502 = -2598;
	static int16_t x5503 = 3;
	static int16_t x5504 = 4;

    t191 = ((x5501%(x5502!=x5503))<<x5504);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x5541 = INT16_MIN;
	volatile int32_t x5542 = -6826;
	uint16_t x5544 = 2U;
	int32_t t192 = -259498;

    t192 = ((x5541%(x5542!=x5543))<<x5544);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x5553 = 50458LLU;
	static uint64_t x5555 = UINT64_MAX;
	static uint8_t x5556 = 1U;
	volatile uint64_t t193 = 4205495195LLU;

    t193 = ((x5553%(x5554!=x5555))<<x5556);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x5577 = -1950371226859698624LL;
	uint16_t x5578 = 457U;
	int8_t x5579 = INT8_MIN;
	volatile int64_t t194 = 1723205614896782LL;

    t194 = ((x5577%(x5578!=x5579))<<x5580);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x5601 = 15500U;
	static uint64_t x5602 = 83LLU;
	volatile uint64_t x5603 = UINT64_MAX;
	static uint16_t x5604 = 0U;
	volatile uint32_t t195 = 35933U;

    t195 = ((x5601%(x5602!=x5603))<<x5604);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x5618 = UINT16_MAX;
	uint32_t x5619 = UINT32_MAX;
	uint8_t x5620 = 56U;
	volatile int64_t t196 = 8197147LL;

    t196 = ((x5617%(x5618!=x5619))<<x5620);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x5662 = INT16_MIN;
	int64_t x5663 = INT64_MIN;
	int8_t x5664 = 29;
	volatile int32_t t197 = 1;

    t197 = ((x5661%(x5662!=x5663))<<x5664);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x5698 = 401765802LL;
	volatile uint32_t x5699 = 187473971U;
	static volatile int64_t t198 = -212602020LL;

    t198 = ((x5697%(x5698!=x5699))<<x5700);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x5747 = -1716;
	int32_t x5748 = 15;
	int64_t t199 = 7381365030646852LL;

    t199 = ((x5745%(x5746!=x5747))<<x5748);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

