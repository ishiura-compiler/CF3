
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

uint64_t x22 = UINT64_MAX;
uint8_t x23 = UINT8_MAX;
uint16_t x79 = 102U;
static uint64_t t4 = 11191429LLU;
uint32_t x302 = UINT32_MAX;
uint8_t x398 = UINT8_MAX;
int32_t x456 = 7;
int32_t t7 = -780252335;
static uint8_t x461 = UINT8_MAX;
volatile int32_t t8 = -652702;
uint8_t x673 = 32U;
int8_t x674 = 1;
int64_t x695 = 52750678114LL;
uint16_t x836 = 0U;
uint8_t x874 = 1U;
int32_t x914 = INT32_MIN;
int8_t x1236 = 1;
volatile uint32_t x1350 = UINT32_MAX;
int32_t t18 = -1;
int32_t x1630 = -1;
int8_t x1653 = 1;
volatile uint64_t t23 = 270923153768LLU;
int16_t x1874 = -1;
uint16_t x1876 = 0U;
int8_t x2017 = INT8_MAX;
int64_t t27 = INT64_MAX;
static volatile int32_t t28 = -46471;
volatile int16_t x2146 = INT16_MIN;
static uint8_t x2147 = 5U;
int16_t x2200 = 2;
uint8_t x2430 = 15U;
static volatile int64_t t32 = 2948500041453823LL;
int16_t x2738 = -1;
uint16_t x2739 = 7U;
static int64_t x2889 = 8586936055109LL;
static uint64_t x2997 = UINT64_MAX;
uint8_t x2998 = 6U;
uint32_t x3393 = 1868U;
volatile uint32_t t40 = 106925U;
static uint64_t x3501 = 979598LLU;
uint32_t x3590 = UINT32_MAX;
volatile uint8_t x3881 = 0U;
int16_t x4046 = 3171;
volatile int32_t x4047 = 1819;
uint8_t x4048 = 13U;
static int8_t x4064 = 1;
static volatile uint32_t x4315 = UINT32_MAX;
int16_t x4370 = INT16_MAX;
volatile int8_t x4442 = INT8_MIN;
int8_t x4444 = 0;
volatile int32_t t55 = -6;
static int32_t x4606 = -1;
volatile int16_t x4608 = 50;
static uint16_t x4633 = 5033U;
static uint16_t x4851 = UINT16_MAX;
volatile int32_t t61 = -54797275;
volatile uint64_t t62 = 46815195343235881LLU;
uint16_t x5018 = 61U;
uint64_t x5019 = 251740051785920282LLU;


void f0(void) {
    	uint8_t x21 = UINT8_MAX;
	uint16_t x24 = 21U;
	int32_t t0 = 444443;

    t0 = (x21>>(x22<=(x23>>x24)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x77 = 528U;
	uint8_t x78 = UINT8_MAX;
	volatile int8_t x80 = 6;
	volatile uint32_t t1 = 1437462U;

    t1 = (x77>>(x78<=(x79>>x80)));

    if (t1 != 528U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x101 = 3769592LLU;
	static int16_t x102 = INT16_MAX;
	static uint8_t x103 = 2U;
	uint8_t x104 = 22U;
	static volatile uint64_t t2 = 69702271231848030LLU;

    t2 = (x101>>(x102<=(x103>>x104)));

    if (t2 != 3769592LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x129 = 406U;
	uint32_t x130 = 4023384U;
	int64_t x131 = INT64_MAX;
	uint8_t x132 = 17U;
	volatile int32_t t3 = 556151;

    t3 = (x129>>(x130<=(x131>>x132)));

    if (t3 != 203) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x141 = UINT64_MAX;
	static int16_t x142 = -1;
	static volatile uint8_t x143 = 39U;
	volatile uint8_t x144 = 17U;

    t4 = (x141>>(x142<=(x143>>x144)));

    if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x301 = UINT32_MAX;
	volatile uint8_t x303 = 13U;
	static int32_t x304 = 0;
	uint32_t t5 = UINT32_MAX;

    t5 = (x301>>(x302<=(x303>>x304)));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x397 = INT16_MAX;
	int8_t x399 = INT8_MAX;
	static uint16_t x400 = 0U;
	static int32_t t6 = 13;

    t6 = (x397>>(x398<=(x399>>x400)));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x453 = 0U;
	static uint8_t x454 = UINT8_MAX;
	int64_t x455 = 2045995661808221LL;

    t7 = (x453>>(x454<=(x455>>x456)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x462 = INT8_MIN;
	uint16_t x463 = 7552U;
	int8_t x464 = 1;

    t8 = (x461>>(x462<=(x463>>x464)));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x533 = 546235LLU;
	int16_t x534 = -1;
	uint32_t x535 = 43U;
	uint16_t x536 = 25U;
	volatile uint64_t t9 = 294593408LLU;

    t9 = (x533>>(x534<=(x535>>x536)));

    if (t9 != 546235LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x675 = UINT16_MAX;
	uint16_t x676 = 2U;
	static volatile int32_t t10 = -915728170;

    t10 = (x673>>(x674<=(x675>>x676)));

    if (t10 != 16) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x693 = INT64_MAX;
	int8_t x694 = -1;
	int8_t x696 = 23;
	int64_t t11 = 62656LL;

    t11 = (x693>>(x694<=(x695>>x696)));

    if (t11 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x825 = INT16_MAX;
	volatile int16_t x826 = -1716;
	uint64_t x827 = UINT64_MAX;
	static uint16_t x828 = 7U;
	volatile int32_t t12 = -1987842;

    t12 = (x825>>(x826<=(x827>>x828)));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x833 = 32615;
	int32_t x834 = -1;
	static uint64_t x835 = UINT64_MAX;
	int32_t t13 = -12;

    t13 = (x833>>(x834<=(x835>>x836)));

    if (t13 != 16307) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x873 = INT32_MAX;
	volatile int16_t x875 = 9846;
	uint64_t x876 = 3LLU;
	volatile int32_t t14 = -35427;

    t14 = (x873>>(x874<=(x875>>x876)));

    if (t14 != 1073741823) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x913 = INT64_MAX;
	int64_t x915 = 17325261LL;
	uint8_t x916 = 1U;
	int64_t t15 = -1010889382426306LL;

    t15 = (x913>>(x914<=(x915>>x916)));

    if (t15 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x957 = INT16_MAX;
	volatile int32_t x958 = -8974007;
	uint64_t x959 = 2425710889484240LLU;
	uint16_t x960 = 1U;
	volatile int32_t t16 = -523336;

    t16 = (x957>>(x958<=(x959>>x960)));

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1233 = 302U;
	int32_t x1234 = INT32_MAX;
	int8_t x1235 = INT8_MAX;
	volatile int32_t t17 = -65152793;

    t17 = (x1233>>(x1234<=(x1235>>x1236)));

    if (t17 != 302) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1349 = 141857111;
	uint32_t x1351 = UINT32_MAX;
	int8_t x1352 = 15;

    t18 = (x1349>>(x1350<=(x1351>>x1352)));

    if (t18 != 141857111) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1373 = 22857U;
	int32_t x1374 = INT32_MIN;
	volatile uint16_t x1375 = UINT16_MAX;
	volatile uint16_t x1376 = 1U;
	uint32_t t19 = 26083U;

    t19 = (x1373>>(x1374<=(x1375>>x1376)));

    if (t19 != 11428U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1629 = INT16_MAX;
	volatile uint64_t x1631 = 17LLU;
	int32_t x1632 = 4;
	volatile int32_t t20 = 428740;

    t20 = (x1629>>(x1630<=(x1631>>x1632)));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1654 = 498U;
	uint64_t x1655 = 7LLU;
	volatile int32_t x1656 = 6;
	int32_t t21 = 42093;

    t21 = (x1653>>(x1654<=(x1655>>x1656)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1825 = UINT16_MAX;
	static int8_t x1826 = 12;
	int64_t x1827 = INT64_MAX;
	static uint8_t x1828 = 10U;
	static int32_t t22 = 0;

    t22 = (x1825>>(x1826<=(x1827>>x1828)));

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1837 = 61945457LLU;
	static int16_t x1838 = -6462;
	uint32_t x1839 = 8U;
	static int8_t x1840 = 1;

    t23 = (x1837>>(x1838<=(x1839>>x1840)));

    if (t23 != 61945457LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x1865 = 4U;
	int32_t x1866 = INT32_MIN;
	volatile int64_t x1867 = INT64_MAX;
	uint32_t x1868 = 13U;
	static volatile int32_t t24 = -10;

    t24 = (x1865>>(x1866<=(x1867>>x1868)));

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x1873 = 6U;
	int16_t x1875 = 70;
	int32_t t25 = 260661484;

    t25 = (x1873>>(x1874<=(x1875>>x1876)));

    if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x2018 = INT16_MIN;
	uint64_t x2019 = 1696255990999397LLU;
	uint8_t x2020 = 12U;
	volatile int32_t t26 = -3248869;

    t26 = (x2017>>(x2018<=(x2019>>x2020)));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x2053 = INT64_MAX;
	uint8_t x2054 = UINT8_MAX;
	int8_t x2055 = INT8_MAX;
	volatile uint16_t x2056 = 2U;

    t27 = (x2053>>(x2054<=(x2055>>x2056)));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x2057 = UINT8_MAX;
	uint32_t x2058 = 13533969U;
	uint32_t x2059 = 33U;
	uint8_t x2060 = 1U;

    t28 = (x2057>>(x2058<=(x2059>>x2060)));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x2145 = 723;
	static uint8_t x2148 = 0U;
	volatile int32_t t29 = -154420;

    t29 = (x2145>>(x2146<=(x2147>>x2148)));

    if (t29 != 361) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x2197 = 49LLU;
	int8_t x2198 = INT8_MIN;
	static uint16_t x2199 = 15909U;
	volatile uint64_t t30 = 414195262650LLU;

    t30 = (x2197>>(x2198<=(x2199>>x2200)));

    if (t30 != 24LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x2429 = 10918878U;
	uint8_t x2431 = UINT8_MAX;
	uint8_t x2432 = 0U;
	uint32_t t31 = 1896U;

    t31 = (x2429>>(x2430<=(x2431>>x2432)));

    if (t31 != 5459439U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x2677 = INT64_MAX;
	int8_t x2678 = -25;
	static int16_t x2679 = INT16_MAX;
	uint64_t x2680 = 2LLU;

    t32 = (x2677>>(x2678<=(x2679>>x2680)));

    if (t32 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2737 = UINT32_MAX;
	uint8_t x2740 = 3U;
	static volatile uint32_t t33 = 81U;

    t33 = (x2737>>(x2738<=(x2739>>x2740)));

    if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x2890 = -1;
	uint8_t x2891 = 42U;
	static uint8_t x2892 = 1U;
	int64_t t34 = -473249143LL;

    t34 = (x2889>>(x2890<=(x2891>>x2892)));

    if (t34 != 4293468027554LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x2989 = 12644735U;
	uint32_t x2990 = 5U;
	uint16_t x2991 = UINT16_MAX;
	int16_t x2992 = 31;
	uint32_t t35 = 7842U;

    t35 = (x2989>>(x2990<=(x2991>>x2992)));

    if (t35 != 12644735U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x2999 = 3U;
	volatile uint64_t x3000 = 1LLU;
	volatile uint64_t t36 = UINT64_MAX;

    t36 = (x2997>>(x2998<=(x2999>>x3000)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x3101 = INT16_MAX;
	static int32_t x3102 = 895;
	uint8_t x3103 = UINT8_MAX;
	int8_t x3104 = 0;
	int32_t t37 = 4008072;

    t37 = (x3101>>(x3102<=(x3103>>x3104)));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x3113 = INT8_MAX;
	static int32_t x3114 = -1;
	uint8_t x3115 = 66U;
	uint16_t x3116 = 0U;
	volatile int32_t t38 = 66677;

    t38 = (x3113>>(x3114<=(x3115>>x3116)));

    if (t38 != 63) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x3141 = 2983168638LLU;
	int64_t x3142 = -1LL;
	uint32_t x3143 = 2U;
	static uint8_t x3144 = 1U;
	volatile uint64_t t39 = 48799279160306LLU;

    t39 = (x3141>>(x3142<=(x3143>>x3144)));

    if (t39 != 1491584319LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x3394 = 0U;
	static uint32_t x3395 = 278521293U;
	int16_t x3396 = 0;

    t40 = (x3393>>(x3394<=(x3395>>x3396)));

    if (t40 != 934U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x3502 = INT64_MIN;
	int32_t x3503 = 186;
	volatile uint8_t x3504 = 6U;
	uint64_t t41 = 5LLU;

    t41 = (x3501>>(x3502<=(x3503>>x3504)));

    if (t41 != 489799LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x3589 = 5421;
	static uint32_t x3591 = UINT32_MAX;
	int16_t x3592 = 1;
	int32_t t42 = 243439426;

    t42 = (x3589>>(x3590<=(x3591>>x3592)));

    if (t42 != 5421) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x3733 = UINT64_MAX;
	static uint16_t x3734 = UINT16_MAX;
	int16_t x3735 = INT16_MAX;
	uint32_t x3736 = 0U;
	uint64_t t43 = UINT64_MAX;

    t43 = (x3733>>(x3734<=(x3735>>x3736)));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x3873 = 1098583589159456262LLU;
	volatile uint16_t x3874 = 0U;
	int64_t x3875 = INT64_MAX;
	uint8_t x3876 = 52U;
	volatile uint64_t t44 = 32239LLU;

    t44 = (x3873>>(x3874<=(x3875>>x3876)));

    if (t44 != 549291794579728131LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x3882 = INT8_MIN;
	int32_t x3883 = 1;
	volatile int8_t x3884 = 1;
	static int32_t t45 = -34799;

    t45 = (x3881>>(x3882<=(x3883>>x3884)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x3957 = 83U;
	int16_t x3958 = 1;
	uint16_t x3959 = UINT16_MAX;
	static int8_t x3960 = 0;
	volatile int32_t t46 = 1677;

    t46 = (x3957>>(x3958<=(x3959>>x3960)));

    if (t46 != 41) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x4045 = INT64_MAX;
	static int64_t t47 = INT64_MAX;

    t47 = (x4045>>(x4046<=(x4047>>x4048)));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x4061 = 11U;
	volatile int8_t x4062 = 1;
	volatile uint32_t x4063 = UINT32_MAX;
	int32_t t48 = -320292;

    t48 = (x4061>>(x4062<=(x4063>>x4064)));

    if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x4077 = 126U;
	int8_t x4078 = 3;
	static volatile uint64_t x4079 = 1240365LLU;
	uint8_t x4080 = 1U;
	int32_t t49 = -66411169;

    t49 = (x4077>>(x4078<=(x4079>>x4080)));

    if (t49 != 63) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x4121 = INT16_MAX;
	int32_t x4122 = INT32_MAX;
	volatile uint8_t x4123 = 98U;
	int16_t x4124 = 3;
	static int32_t t50 = 1588;

    t50 = (x4121>>(x4122<=(x4123>>x4124)));

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x4245 = INT32_MAX;
	static int64_t x4246 = INT64_MIN;
	uint64_t x4247 = 94LLU;
	static volatile int8_t x4248 = 0;
	volatile int32_t t51 = INT32_MAX;

    t51 = (x4245>>(x4246<=(x4247>>x4248)));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x4313 = UINT8_MAX;
	uint32_t x4314 = UINT32_MAX;
	volatile uint8_t x4316 = 3U;
	static int32_t t52 = -12097032;

    t52 = (x4313>>(x4314<=(x4315>>x4316)));

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x4369 = 2831U;
	int16_t x4371 = 27;
	static volatile int32_t x4372 = 8;
	static int32_t t53 = 96473;

    t53 = (x4369>>(x4370<=(x4371>>x4372)));

    if (t53 != 2831) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x4441 = INT64_MAX;
	volatile uint64_t x4443 = 24613LLU;
	volatile int64_t t54 = INT64_MAX;

    t54 = (x4441>>(x4442<=(x4443>>x4444)));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x4573 = UINT8_MAX;
	uint16_t x4574 = 306U;
	static int8_t x4575 = 2;
	volatile uint8_t x4576 = 1U;

    t55 = (x4573>>(x4574<=(x4575>>x4576)));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x4605 = 1506;
	int64_t x4607 = 3LL;
	volatile int32_t t56 = -1229639;

    t56 = (x4605>>(x4606<=(x4607>>x4608)));

    if (t56 != 753) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x4617 = 4942U;
	uint64_t x4618 = 0LLU;
	int16_t x4619 = INT16_MAX;
	uint8_t x4620 = 22U;
	volatile uint32_t t57 = 2262508U;

    t57 = (x4617>>(x4618<=(x4619>>x4620)));

    if (t57 != 2471U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x4634 = -1;
	volatile int8_t x4635 = INT8_MAX;
	uint8_t x4636 = 7U;
	volatile int32_t t58 = 41087;

    t58 = (x4633>>(x4634<=(x4635>>x4636)));

    if (t58 != 2516) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x4713 = INT16_MAX;
	volatile int64_t x4714 = INT64_MIN;
	uint64_t x4715 = 1143113280128629025LLU;
	uint32_t x4716 = 1U;
	int32_t t59 = 5756;

    t59 = (x4713>>(x4714<=(x4715>>x4716)));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x4849 = INT32_MAX;
	static uint16_t x4850 = 9U;
	int8_t x4852 = 0;
	volatile int32_t t60 = -15186;

    t60 = (x4849>>(x4850<=(x4851>>x4852)));

    if (t60 != 1073741823) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x4953 = INT32_MAX;
	int8_t x4954 = INT8_MIN;
	uint8_t x4955 = UINT8_MAX;
	static volatile int8_t x4956 = 27;

    t61 = (x4953>>(x4954<=(x4955>>x4956)));

    if (t61 != 1073741823) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x4973 = 3301026LLU;
	uint64_t x4974 = UINT64_MAX;
	uint64_t x4975 = 23003827922954LLU;
	uint16_t x4976 = 1U;

    t62 = (x4973>>(x4974<=(x4975>>x4976)));

    if (t62 != 3301026LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x5017 = 52U;
	static volatile int16_t x5020 = 5;
	volatile int32_t t63 = -191737515;

    t63 = (x5017>>(x5018<=(x5019>>x5020)));

    if (t63 != 26) { NG(); } else { ; }
	
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

