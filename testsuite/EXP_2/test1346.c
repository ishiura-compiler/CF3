#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 29470243788095836LLU;
volatile uint8_t x29 = UINT8_MAX;
uint64_t x32 = 5LLU;
static int32_t t1 = 215722332;
static uint64_t x123 = UINT64_MAX;
uint16_t x124 = 8U;
volatile int16_t x221 = 44;
int16_t x338 = -55;
volatile int32_t t7 = -987671;
uint8_t x345 = UINT8_MAX;
volatile uint16_t x529 = 9739U;
volatile uint8_t x557 = UINT8_MAX;
int32_t x559 = -1;
uint32_t x647 = 5963350U;
static volatile uint32_t t13 = 28224U;
static uint32_t x769 = 4U;
int16_t x787 = INT16_MIN;
int64_t x838 = -5479LL;
volatile uint32_t t17 = 500U;
static volatile uint16_t x893 = 7221U;
volatile int8_t x894 = INT8_MIN;
uint32_t x896 = 0U;
volatile int32_t t19 = 17621;
int64_t x938 = INT64_MAX;
uint64_t x939 = 2611954880655088242LLU;
volatile int16_t x1075 = INT16_MIN;
volatile uint8_t x1102 = 59U;
uint64_t x1225 = 889261495728722665LLU;
int8_t x1228 = 0;
static uint64_t t26 = 144817814029444LLU;
volatile uint64_t x1336 = 1LLU;
static int32_t t27 = -2;
int64_t x1417 = INT64_MAX;
static int8_t x1418 = INT8_MIN;
static int16_t x1504 = 0;
int64_t x1505 = INT64_MAX;
volatile int8_t x1551 = INT8_MIN;
static int8_t x1552 = 1;
volatile int32_t t33 = -187;
volatile uint32_t x1800 = 4U;
volatile int32_t t38 = 6277;
int32_t t39 = 8;
static volatile uint64_t t42 = 92541571904855LLU;
int64_t x2157 = INT64_MAX;
static volatile uint16_t x2158 = 24U;
uint64_t x2370 = 370614240793855121LLU;
uint32_t x2394 = 70986753U;
int16_t x2396 = 1;
uint8_t x2425 = 1U;
volatile int8_t x2428 = 0;
volatile int32_t t49 = -14602637;
uint32_t x2563 = 115452U;
volatile int32_t t52 = 6712484;
uint16_t x2590 = UINT16_MAX;
int32_t t53 = 110;
static int32_t x2654 = -1;
int32_t x2749 = INT32_MAX;
int32_t x2791 = 89368843;
uint64_t x2797 = 109977272973LLU;
uint8_t x2800 = 3U;
int32_t x3059 = INT32_MIN;
int8_t x3064 = 0;
uint16_t x3232 = 4U;
uint64_t x3237 = 107149507892722620LLU;
uint64_t x3265 = UINT64_MAX;
uint64_t x3268 = 11LLU;
int32_t t66 = 7085;
uint32_t x3441 = 1238U;
int8_t x3443 = INT8_MIN;
uint8_t x3487 = 5U;
uint8_t x3515 = 77U;
int8_t x3516 = 0;
static volatile uint16_t x3531 = 10214U;
int32_t x3575 = -1;
int16_t x3576 = 3;
static int8_t x3590 = INT8_MIN;
uint16_t x3652 = 2U;
int8_t x3705 = INT8_MAX;
int16_t x3706 = 132;
int64_t x3707 = 238309126820986208LL;
int32_t t75 = 0;
int8_t x3774 = 38;
int16_t x3776 = 4;
static int64_t x3801 = 20347510LL;
volatile int8_t x3838 = -1;
int32_t x3839 = INT32_MIN;
int32_t x3898 = 64620525;
volatile int32_t t81 = 67;
int32_t x3990 = INT32_MIN;
uint16_t x4019 = UINT16_MAX;
static int8_t x4116 = 1;
uint8_t x4132 = 1U;
uint64_t x4205 = UINT64_MAX;
int32_t x4207 = INT32_MIN;
uint32_t x4329 = UINT32_MAX;
static uint8_t x4332 = 12U;
int32_t x4370 = INT32_MIN;
int8_t x4372 = 1;
int32_t t93 = 8081;
int8_t x4390 = INT8_MIN;
uint64_t x4392 = 9LLU;
static int32_t t94 = 984841;
static int32_t x4480 = 1;
static int64_t x4533 = 34286885165LL;
uint8_t x4561 = 5U;
int64_t x4614 = 406LL;
volatile int8_t x4615 = -1;
int16_t x4649 = INT16_MAX;
uint8_t x4652 = 11U;


void f0(void) {
	static int32_t x2 = INT32_MAX;
	static int64_t x3 = 88138497108853248LL;
	static int8_t x4 = 0;
	uint64_t t0 = 2552019981547LLU;

	t0 = ((x1^(x2==x3))>>x4);

	if (t0 != 29470243788095836LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x30 = 2U;
	uint32_t x31 = 97U;

	t1 = ((x29^(x30==x31))>>x32);

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x121 = 1;
	int16_t x122 = -1;
	static volatile int32_t t2 = -1167515;

	t2 = ((x121^(x122==x123))>>x124);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x137 = INT32_MAX;
	volatile int16_t x138 = INT16_MIN;
	static uint16_t x139 = 2003U;
	uint8_t x140 = 6U;
	volatile int32_t t3 = -228722;

	t3 = ((x137^(x138==x139))>>x140);

	if (t3 != 33554431) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x222 = -1LL;
	static volatile uint64_t x223 = 5076100686428385884LLU;
	int8_t x224 = 7;
	int32_t t4 = -81;

	t4 = ((x221^(x222==x223))>>x224);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x265 = 0U;
	int8_t x266 = 3;
	uint32_t x267 = 2142848473U;
	int64_t x268 = 22LL;
	static int32_t t5 = 7065;

	t5 = ((x265^(x266==x267))>>x268);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x269 = 1769985925U;
	int16_t x270 = 181;
	int16_t x271 = INT16_MAX;
	int8_t x272 = 0;
	volatile uint32_t t6 = 0U;

	t6 = ((x269^(x270==x271))>>x272);

	if (t6 != 1769985925U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x337 = 7;
	int64_t x339 = INT64_MIN;
	int64_t x340 = 0LL;

	t7 = ((x337^(x338==x339))>>x340);

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x346 = -613864;
	uint16_t x347 = 47U;
	uint8_t x348 = 17U;
	int32_t t8 = 1006;

	t8 = ((x345^(x346==x347))>>x348);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x373 = UINT8_MAX;
	int8_t x374 = -1;
	int64_t x375 = INT64_MAX;
	uint8_t x376 = 3U;
	int32_t t9 = 489;

	t9 = ((x373^(x374==x375))>>x376);

	if (t9 != 31) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x381 = UINT8_MAX;
	int8_t x382 = INT8_MAX;
	uint16_t x383 = UINT16_MAX;
	uint16_t x384 = 24U;
	volatile int32_t t10 = 957161;

	t10 = ((x381^(x382==x383))>>x384);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x530 = INT64_MAX;
	static int32_t x531 = INT32_MAX;
	int16_t x532 = 0;
	int32_t t11 = -2;

	t11 = ((x529^(x530==x531))>>x532);

	if (t11 != 9739) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x558 = UINT32_MAX;
	uint8_t x560 = 24U;
	volatile int32_t t12 = 1;

	t12 = ((x557^(x558==x559))>>x560);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x645 = UINT32_MAX;
	int32_t x646 = -393390846;
	uint8_t x648 = 5U;

	t13 = ((x645^(x646==x647))>>x648);

	if (t13 != 134217727U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x770 = INT64_MIN;
	int8_t x771 = INT8_MIN;
	volatile uint16_t x772 = 2U;
	uint32_t t14 = 4016853U;

	t14 = ((x769^(x770==x771))>>x772);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x785 = 464U;
	uint64_t x786 = 2374073LLU;
	uint8_t x788 = 4U;
	int32_t t15 = -4;

	t15 = ((x785^(x786==x787))>>x788);

	if (t15 != 29) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x797 = 117474027003555LLU;
	static int32_t x798 = -27973;
	uint32_t x799 = UINT32_MAX;
	int8_t x800 = 28;
	uint64_t t16 = 1318126208LLU;

	t16 = ((x797^(x798==x799))>>x800);

	if (t16 != 437624LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x837 = 334501037U;
	uint16_t x839 = 547U;
	uint8_t x840 = 10U;

	t17 = ((x837^(x838==x839))>>x840);

	if (t17 != 326661U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x895 = INT8_MIN;
	int32_t t18 = 7277;

	t18 = ((x893^(x894==x895))>>x896);

	if (t18 != 7220) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x905 = 1697U;
	uint64_t x906 = 5006368LLU;
	uint16_t x907 = 22209U;
	uint32_t x908 = 16U;

	t19 = ((x905^(x906==x907))>>x908);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x937 = 9510U;
	static uint32_t x940 = 2U;
	static volatile uint32_t t20 = 131222857U;

	t20 = ((x937^(x938==x939))>>x940);

	if (t20 != 2377U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1017 = INT32_MAX;
	uint64_t x1018 = 129831765LLU;
	uint16_t x1019 = 27U;
	static int8_t x1020 = 3;
	volatile int32_t t21 = 1333;

	t21 = ((x1017^(x1018==x1019))>>x1020);

	if (t21 != 268435455) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1049 = INT8_MAX;
	int32_t x1050 = INT32_MIN;
	int32_t x1051 = -103789;
	static int8_t x1052 = 7;
	static int32_t t22 = 106978943;

	t22 = ((x1049^(x1050==x1051))>>x1052);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1073 = 6U;
	static int16_t x1074 = 1;
	int16_t x1076 = 0;
	static volatile uint32_t t23 = 8U;

	t23 = ((x1073^(x1074==x1075))>>x1076);

	if (t23 != 6U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1101 = UINT8_MAX;
	int32_t x1103 = INT32_MIN;
	int64_t x1104 = 0LL;
	volatile int32_t t24 = -119199225;

	t24 = ((x1101^(x1102==x1103))>>x1104);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1161 = 0U;
	int16_t x1162 = -1;
	int32_t x1163 = -1;
	volatile uint8_t x1164 = 15U;
	int32_t t25 = 1472999;

	t25 = ((x1161^(x1162==x1163))>>x1164);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1226 = INT64_MAX;
	uint8_t x1227 = 3U;

	t26 = ((x1225^(x1226==x1227))>>x1228);

	if (t26 != 889261495728722665LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1333 = 12;
	int64_t x1334 = INT64_MAX;
	volatile int8_t x1335 = INT8_MIN;

	t27 = ((x1333^(x1334==x1335))>>x1336);

	if (t27 != 6) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1419 = UINT64_MAX;
	volatile int8_t x1420 = 0;
	volatile int64_t t28 = INT64_MAX;

	t28 = ((x1417^(x1418==x1419))>>x1420);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1453 = INT16_MAX;
	int16_t x1454 = INT16_MIN;
	int16_t x1455 = INT16_MIN;
	static uint8_t x1456 = 14U;
	volatile int32_t t29 = 229;

	t29 = ((x1453^(x1454==x1455))>>x1456);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1501 = 0LLU;
	static uint16_t x1502 = 1U;
	int64_t x1503 = INT64_MAX;
	uint64_t t30 = 12796257243245LLU;

	t30 = ((x1501^(x1502==x1503))>>x1504);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x1506 = -1;
	static volatile uint64_t x1507 = 5759144207626664LLU;
	uint16_t x1508 = 19U;
	int64_t t31 = -1618808LL;

	t31 = ((x1505^(x1506==x1507))>>x1508);

	if (t31 != 17592186044415LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1549 = INT16_MAX;
	static int8_t x1550 = 7;
	volatile int32_t t32 = -64627;

	t32 = ((x1549^(x1550==x1551))>>x1552);

	if (t32 != 16383) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1717 = 3U;
	int32_t x1718 = INT32_MIN;
	volatile int64_t x1719 = 60957554932LL;
	int16_t x1720 = 1;

	t33 = ((x1717^(x1718==x1719))>>x1720);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1725 = UINT32_MAX;
	int8_t x1726 = -1;
	int64_t x1727 = -1LL;
	static uint16_t x1728 = 4U;
	uint32_t t34 = 38U;

	t34 = ((x1725^(x1726==x1727))>>x1728);

	if (t34 != 268435455U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1729 = 111U;
	volatile int64_t x1730 = -1LL;
	volatile int8_t x1731 = 7;
	int16_t x1732 = 25;
	volatile int32_t t35 = 804204;

	t35 = ((x1729^(x1730==x1731))>>x1732);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1797 = 830037186004054066LLU;
	int8_t x1798 = -1;
	volatile int16_t x1799 = 567;
	volatile uint64_t t36 = 2901026437LLU;

	t36 = ((x1797^(x1798==x1799))>>x1800);

	if (t36 != 51877324125253379LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1801 = 0LLU;
	static int32_t x1802 = INT32_MIN;
	uint8_t x1803 = 100U;
	int8_t x1804 = 0;
	volatile uint64_t t37 = 5664390999931273LLU;

	t37 = ((x1801^(x1802==x1803))>>x1804);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1845 = UINT16_MAX;
	int32_t x1846 = INT32_MIN;
	int16_t x1847 = -1;
	uint64_t x1848 = 17LLU;

	t38 = ((x1845^(x1846==x1847))>>x1848);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x1897 = UINT16_MAX;
	uint8_t x1898 = 1U;
	uint8_t x1899 = 7U;
	static uint32_t x1900 = 1U;

	t39 = ((x1897^(x1898==x1899))>>x1900);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1957 = INT8_MAX;
	int64_t x1958 = INT64_MIN;
	static int16_t x1959 = INT16_MIN;
	uint8_t x1960 = 0U;
	int32_t t40 = 995;

	t40 = ((x1957^(x1958==x1959))>>x1960);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2001 = UINT32_MAX;
	static uint64_t x2002 = UINT64_MAX;
	volatile int32_t x2003 = INT32_MIN;
	int8_t x2004 = 8;
	volatile uint32_t t41 = 475079028U;

	t41 = ((x2001^(x2002==x2003))>>x2004);

	if (t41 != 16777215U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2033 = UINT64_MAX;
	volatile int16_t x2034 = -1;
	int32_t x2035 = INT32_MIN;
	volatile uint64_t x2036 = 2LLU;

	t42 = ((x2033^(x2034==x2035))>>x2036);

	if (t42 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2159 = -1LL;
	volatile uint8_t x2160 = 7U;
	volatile int64_t t43 = 4575138153273585LL;

	t43 = ((x2157^(x2158==x2159))>>x2160);

	if (t43 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2201 = UINT8_MAX;
	int8_t x2202 = INT8_MIN;
	uint32_t x2203 = 787183U;
	uint16_t x2204 = 6U;
	int32_t t44 = 25;

	t44 = ((x2201^(x2202==x2203))>>x2204);

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2281 = 15255;
	int8_t x2282 = -1;
	static int16_t x2283 = INT16_MAX;
	uint8_t x2284 = 14U;
	volatile int32_t t45 = -62982;

	t45 = ((x2281^(x2282==x2283))>>x2284);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2337 = 56U;
	uint16_t x2338 = 46U;
	int16_t x2339 = INT16_MIN;
	int16_t x2340 = 1;
	volatile int32_t t46 = 0;

	t46 = ((x2337^(x2338==x2339))>>x2340);

	if (t46 != 28) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2369 = INT16_MAX;
	int16_t x2371 = -44;
	static int32_t x2372 = 5;
	int32_t t47 = -4;

	t47 = ((x2369^(x2370==x2371))>>x2372);

	if (t47 != 1023) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2393 = 85U;
	int32_t x2395 = INT32_MAX;
	static volatile int32_t t48 = -18;

	t48 = ((x2393^(x2394==x2395))>>x2396);

	if (t48 != 42) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2426 = INT16_MIN;
	uint16_t x2427 = UINT16_MAX;

	t49 = ((x2425^(x2426==x2427))>>x2428);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2441 = 4132U;
	int16_t x2442 = INT16_MIN;
	uint32_t x2443 = 2727U;
	uint8_t x2444 = 4U;
	static int32_t t50 = -4189814;

	t50 = ((x2441^(x2442==x2443))>>x2444);

	if (t50 != 258) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2557 = INT8_MAX;
	int16_t x2558 = INT16_MIN;
	int64_t x2559 = INT64_MIN;
	int8_t x2560 = 13;
	static int32_t t51 = -373028;

	t51 = ((x2557^(x2558==x2559))>>x2560);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2561 = INT16_MAX;
	int8_t x2562 = -1;
	uint8_t x2564 = 1U;

	t52 = ((x2561^(x2562==x2563))>>x2564);

	if (t52 != 16383) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2589 = INT8_MAX;
	uint16_t x2591 = UINT16_MAX;
	int32_t x2592 = 7;

	t53 = ((x2589^(x2590==x2591))>>x2592);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2653 = 97U;
	uint32_t x2655 = UINT32_MAX;
	uint16_t x2656 = 11U;
	uint32_t t54 = 78869U;

	t54 = ((x2653^(x2654==x2655))>>x2656);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x2721 = 1525189LLU;
	int16_t x2722 = -135;
	volatile int16_t x2723 = INT16_MIN;
	int16_t x2724 = 11;
	volatile uint64_t t55 = 22514837905639765LLU;

	t55 = ((x2721^(x2722==x2723))>>x2724);

	if (t55 != 744LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x2750 = INT64_MAX;
	int64_t x2751 = -512LL;
	volatile uint8_t x2752 = 3U;
	volatile int32_t t56 = 20;

	t56 = ((x2749^(x2750==x2751))>>x2752);

	if (t56 != 268435455) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2789 = 49;
	uint8_t x2790 = 11U;
	static uint8_t x2792 = 26U;
	int32_t t57 = 1;

	t57 = ((x2789^(x2790==x2791))>>x2792);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2798 = 3329U;
	static uint64_t x2799 = 17LLU;
	volatile uint64_t t58 = 749204789074LLU;

	t58 = ((x2797^(x2798==x2799))>>x2800);

	if (t58 != 13747159121LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2853 = 4217268558326196679LLU;
	static int32_t x2854 = INT32_MIN;
	static uint64_t x2855 = 2378LLU;
	static uint8_t x2856 = 0U;
	volatile uint64_t t59 = 885188176789013242LLU;

	t59 = ((x2853^(x2854==x2855))>>x2856);

	if (t59 != 4217268558326196679LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3057 = 16183U;
	int8_t x3058 = 61;
	volatile uint64_t x3060 = 6LLU;
	volatile uint32_t t60 = 977U;

	t60 = ((x3057^(x3058==x3059))>>x3060);

	if (t60 != 252U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x3061 = 9U;
	volatile int64_t x3062 = -67384352LL;
	int16_t x3063 = INT16_MAX;
	uint32_t t61 = 685563215U;

	t61 = ((x3061^(x3062==x3063))>>x3064);

	if (t61 != 9U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x3225 = 1678;
	int8_t x3226 = -1;
	int64_t x3227 = -6027011436261781LL;
	uint16_t x3228 = 10U;
	volatile int32_t t62 = -10;

	t62 = ((x3225^(x3226==x3227))>>x3228);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3229 = INT16_MAX;
	static volatile uint16_t x3230 = 2U;
	int16_t x3231 = 0;
	int32_t t63 = -350398244;

	t63 = ((x3229^(x3230==x3231))>>x3232);

	if (t63 != 2047) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3238 = INT32_MIN;
	int32_t x3239 = INT32_MAX;
	uint64_t x3240 = 9LLU;
	volatile uint64_t t64 = 243132973485LLU;

	t64 = ((x3237^(x3238==x3239))>>x3240);

	if (t64 != 209276382602973LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x3266 = UINT8_MAX;
	uint64_t x3267 = 46914LLU;
	static uint64_t t65 = 110965708LLU;

	t65 = ((x3265^(x3266==x3267))>>x3268);

	if (t65 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3433 = 4U;
	volatile int64_t x3434 = -27656LL;
	uint16_t x3435 = 7U;
	uint8_t x3436 = 10U;

	t66 = ((x3433^(x3434==x3435))>>x3436);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3442 = 305777999U;
	uint16_t x3444 = 2U;
	uint32_t t67 = 1420U;

	t67 = ((x3441^(x3442==x3443))>>x3444);

	if (t67 != 309U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3485 = 1107675360532331LL;
	uint8_t x3486 = 5U;
	volatile uint8_t x3488 = 17U;
	static volatile int64_t t68 = -10027756LL;

	t68 = ((x3485^(x3486==x3487))>>x3488);

	if (t68 != 8450892338LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x3513 = 7796234LLU;
	static volatile int8_t x3514 = INT8_MAX;
	uint64_t t69 = 63768403LLU;

	t69 = ((x3513^(x3514==x3515))>>x3516);

	if (t69 != 7796234LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3529 = 100098820;
	int64_t x3530 = -1LL;
	uint32_t x3532 = 4U;
	static volatile int32_t t70 = -24466;

	t70 = ((x3529^(x3530==x3531))>>x3532);

	if (t70 != 6256176) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x3573 = INT8_MAX;
	static int8_t x3574 = -1;
	int32_t t71 = 991076380;

	t71 = ((x3573^(x3574==x3575))>>x3576);

	if (t71 != 15) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x3589 = 262221280;
	int64_t x3591 = -2008227465950762LL;
	uint16_t x3592 = 0U;
	int32_t t72 = 1014609938;

	t72 = ((x3589^(x3590==x3591))>>x3592);

	if (t72 != 262221280) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3593 = 3U;
	int64_t x3594 = -1LL;
	int64_t x3595 = INT64_MIN;
	uint8_t x3596 = 3U;
	int32_t t73 = 15302;

	t73 = ((x3593^(x3594==x3595))>>x3596);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3649 = 4658438730135735LLU;
	volatile uint32_t x3650 = UINT32_MAX;
	volatile uint8_t x3651 = 7U;
	static uint64_t t74 = 2012746200175LLU;

	t74 = ((x3649^(x3650==x3651))>>x3652);

	if (t74 != 1164609682533933LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3708 = 1U;

	t75 = ((x3705^(x3706==x3707))>>x3708);

	if (t75 != 63) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3773 = INT8_MAX;
	int32_t x3775 = 163;
	static int32_t t76 = -58154121;

	t76 = ((x3773^(x3774==x3775))>>x3776);

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3802 = INT8_MIN;
	volatile int8_t x3803 = INT8_MIN;
	uint8_t x3804 = 0U;
	volatile int64_t t77 = 32142534345970127LL;

	t77 = ((x3801^(x3802==x3803))>>x3804);

	if (t77 != 20347511LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3821 = 446LL;
	int32_t x3822 = INT32_MIN;
	uint8_t x3823 = 27U;
	uint8_t x3824 = 52U;
	volatile int64_t t78 = 27218102469288198LL;

	t78 = ((x3821^(x3822==x3823))>>x3824);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3837 = 51U;
	static volatile int8_t x3840 = 0;
	volatile int32_t t79 = 1171;

	t79 = ((x3837^(x3838==x3839))>>x3840);

	if (t79 != 51) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x3897 = 13484225;
	volatile int8_t x3899 = INT8_MAX;
	volatile int16_t x3900 = 4;
	int32_t t80 = -291474106;

	t80 = ((x3897^(x3898==x3899))>>x3900);

	if (t80 != 842764) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3929 = UINT8_MAX;
	volatile int16_t x3930 = -1;
	int32_t x3931 = INT32_MAX;
	uint8_t x3932 = 26U;

	t81 = ((x3929^(x3930==x3931))>>x3932);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x3989 = 1U;
	int32_t x3991 = INT32_MAX;
	int32_t x3992 = 2;
	static int32_t t82 = 13889;

	t82 = ((x3989^(x3990==x3991))>>x3992);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4017 = INT16_MAX;
	int32_t x4018 = INT32_MIN;
	uint8_t x4020 = 5U;
	volatile int32_t t83 = 94;

	t83 = ((x4017^(x4018==x4019))>>x4020);

	if (t83 != 1023) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4029 = UINT64_MAX;
	int64_t x4030 = INT64_MIN;
	static int8_t x4031 = -1;
	volatile uint16_t x4032 = 0U;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x4029^(x4030==x4031))>>x4032);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x4113 = 24U;
	static int16_t x4114 = 1;
	int8_t x4115 = -3;
	static volatile uint32_t t85 = 3728U;

	t85 = ((x4113^(x4114==x4115))>>x4116);

	if (t85 != 12U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4129 = 1U;
	int64_t x4130 = -36405987393LL;
	static volatile uint64_t x4131 = 87LLU;
	int32_t t86 = -78449;

	t86 = ((x4129^(x4130==x4131))>>x4132);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4206 = -1;
	uint8_t x4208 = 16U;
	volatile uint64_t t87 = 136453LLU;

	t87 = ((x4205^(x4206==x4207))>>x4208);

	if (t87 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4249 = INT64_MAX;
	int8_t x4250 = INT8_MAX;
	uint64_t x4251 = 31050LLU;
	uint16_t x4252 = 3U;
	volatile int64_t t88 = 1076LL;

	t88 = ((x4249^(x4250==x4251))>>x4252);

	if (t88 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x4261 = INT32_MAX;
	uint64_t x4262 = 15447753463397LLU;
	static volatile uint8_t x4263 = 2U;
	int8_t x4264 = 9;
	static int32_t t89 = -6155008;

	t89 = ((x4261^(x4262==x4263))>>x4264);

	if (t89 != 4194303) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4265 = 5336263611423740224LLU;
	int64_t x4266 = -1LL;
	uint32_t x4267 = 237054048U;
	uint8_t x4268 = 1U;
	uint64_t t90 = 8352489871318442LLU;

	t90 = ((x4265^(x4266==x4267))>>x4268);

	if (t90 != 2668131805711870112LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4330 = -3;
	int8_t x4331 = -1;
	volatile uint32_t t91 = 20U;

	t91 = ((x4329^(x4330==x4331))>>x4332);

	if (t91 != 1048575U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x4365 = UINT64_MAX;
	static uint16_t x4366 = 273U;
	int32_t x4367 = INT32_MIN;
	int8_t x4368 = 1;
	uint64_t t92 = 695284524622159LLU;

	t92 = ((x4365^(x4366==x4367))>>x4368);

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x4369 = INT16_MAX;
	volatile int64_t x4371 = 8015LL;

	t93 = ((x4369^(x4370==x4371))>>x4372);

	if (t93 != 16383) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4389 = 26;
	int16_t x4391 = -1;

	t94 = ((x4389^(x4390==x4391))>>x4392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x4477 = 1;
	static uint32_t x4478 = 1U;
	uint8_t x4479 = UINT8_MAX;
	int32_t t95 = -1002912;

	t95 = ((x4477^(x4478==x4479))>>x4480);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4534 = 1424953192U;
	int16_t x4535 = INT16_MIN;
	uint16_t x4536 = 57U;
	int64_t t96 = 4633LL;

	t96 = ((x4533^(x4534==x4535))>>x4536);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x4562 = 3213;
	uint16_t x4563 = 0U;
	int8_t x4564 = 25;
	int32_t t97 = -1963;

	t97 = ((x4561^(x4562==x4563))>>x4564);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4613 = UINT64_MAX;
	int8_t x4616 = 1;
	uint64_t t98 = 954815LLU;

	t98 = ((x4613^(x4614==x4615))>>x4616);

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x4650 = 0U;
	int8_t x4651 = -1;
	int32_t t99 = -61;

	t99 = ((x4649^(x4650==x4651))>>x4652);

	if (t99 != 15) { NG(); } else { ; }
	
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


    return 0;
}

