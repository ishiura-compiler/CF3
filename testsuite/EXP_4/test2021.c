#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x58 = INT32_MIN;
static int32_t x60 = INT32_MIN;
int16_t x94 = -17;
static int32_t x258 = -1;
int8_t x348 = -7;
int8_t x385 = 0;
uint32_t x449 = 2740747U;
int64_t x573 = INT64_MAX;
int32_t x576 = -1;
int8_t x660 = -1;
int32_t x766 = -1;
uint8_t x767 = 56U;
static uint16_t x787 = UINT16_MAX;
uint16_t x788 = 1914U;
int16_t x968 = -1;
static uint64_t x1196 = UINT64_MAX;
int64_t x1378 = -1LL;
static volatile int32_t x1417 = 7;
static int64_t x1624 = INT64_MIN;
int8_t x1802 = -3;
int8_t x1804 = -1;
volatile int64_t x1815 = -1LL;
int32_t x1946 = -1;
volatile uint8_t x1952 = 1U;
uint8_t x1957 = UINT8_MAX;
uint32_t x1958 = UINT32_MAX;
volatile int16_t x2136 = -768;
uint64_t x2204 = 36LLU;
int32_t x2238 = -1;
int16_t x2274 = -1;
int16_t x2275 = INT16_MAX;
int64_t x2383 = -1LL;
int32_t t30 = 4047588;
uint16_t x2441 = 571U;
uint8_t x2803 = 1U;
static uint32_t t39 = 244833679U;
int16_t x3037 = 1;
int32_t x3060 = INT32_MIN;
uint32_t x3221 = UINT32_MAX;
static int16_t x3222 = -1;
int32_t x3317 = INT32_MAX;
static int32_t t43 = INT32_MAX;
uint64_t x3334 = UINT64_MAX;
uint64_t x3398 = UINT64_MAX;
int8_t x3430 = -8;
static int32_t t46 = 392077435;
int32_t t47 = 380616;
uint16_t x3589 = 0U;
uint64_t x3849 = 3770LLU;
uint64_t x3910 = UINT64_MAX;
int8_t x3912 = INT8_MIN;
int64_t t53 = -358308019LL;
volatile uint32_t x4003 = UINT32_MAX;
volatile int32_t x4008 = INT32_MAX;
uint32_t x4230 = UINT32_MAX;
uint32_t x4509 = 4U;
volatile int32_t x4512 = -1;
volatile int16_t x4524 = INT16_MIN;
int8_t x4554 = -1;
int32_t t63 = 46879;
uint64_t x4722 = UINT64_MAX;
int64_t x4723 = -1LL;
volatile uint32_t x4753 = 19U;
int8_t x4754 = -1;
int16_t x4756 = INT16_MIN;
int16_t x4765 = INT16_MAX;
uint32_t x4766 = UINT32_MAX;
int32_t t66 = 0;


void f0(void) {
	int8_t x57 = 8;
	static uint16_t x59 = 2U;
	static int32_t t0 = 12586;

	t0 = (x57<<(x58^(x59|x60)));

	if (t0 != 32) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x85 = 15;
	int16_t x86 = -1;
	int32_t x87 = -39;
	int8_t x88 = -1;
	volatile int32_t t1 = -389;

	t1 = (x85<<(x86^(x87|x88)));

	if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x93 = UINT32_MAX;
	int16_t x95 = INT16_MIN;
	int16_t x96 = -1;
	uint32_t t2 = 33424186U;

	t2 = (x93<<(x94^(x95|x96)));

	if (t2 != 4294901760U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MIN;
	int32_t x131 = 0;
	int16_t x132 = INT16_MIN;
	int32_t t3 = INT32_MAX;

	t3 = (x129<<(x130^(x131|x132)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x257 = 1416078617419487LLU;
	int32_t x259 = 31602712;
	uint32_t x260 = UINT32_MAX;
	uint64_t t4 = 14636847903445057LLU;

	t4 = (x257<<(x258^(x259|x260)));

	if (t4 != 1416078617419487LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x345 = 1829519684U;
	int64_t x346 = -16LL;
	int8_t x347 = INT8_MAX;
	static uint32_t t5 = 54198094U;

	t5 = (x345<<(x346^(x347|x348)));

	if (t5 != 547487744U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x386 = INT64_MIN;
	static int64_t x387 = INT64_MIN;
	volatile int64_t x388 = INT64_MIN;
	int32_t t6 = -1;

	t6 = (x385<<(x386^(x387|x388)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x450 = -1;
	volatile int8_t x451 = -1;
	int8_t x452 = INT8_MIN;
	volatile uint32_t t7 = 15U;

	t7 = (x449<<(x450^(x451|x452)));

	if (t7 != 2740747U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x505 = 8U;
	int32_t x506 = -1;
	int8_t x507 = -1;
	volatile int16_t x508 = INT16_MAX;
	int32_t t8 = 115798;

	t8 = (x505<<(x506^(x507|x508)));

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x574 = -1;
	int64_t x575 = -1LL;
	volatile int64_t t9 = INT64_MAX;

	t9 = (x573<<(x574^(x575|x576)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x637 = UINT8_MAX;
	uint32_t x638 = UINT32_MAX;
	int16_t x639 = -1;
	uint32_t x640 = 23U;
	volatile int32_t t10 = -48;

	t10 = (x637<<(x638^(x639|x640)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x657 = INT32_MAX;
	static int32_t x658 = -1;
	int64_t x659 = -1LL;
	static volatile int32_t t11 = INT32_MAX;

	t11 = (x657<<(x658^(x659|x660)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x765 = 13U;
	int64_t x768 = -1LL;
	volatile int32_t t12 = -5817;

	t12 = (x765<<(x766^(x767|x768)));

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x785 = 13968;
	uint16_t x786 = UINT16_MAX;
	static int32_t t13 = 248;

	t13 = (x785<<(x786^(x787|x788)));

	if (t13 != 13968) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x837 = UINT64_MAX;
	uint32_t x838 = UINT32_MAX;
	int8_t x839 = -9;
	int32_t x840 = INT32_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x837<<(x838^(x839|x840)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x965 = 1;
	int32_t x966 = -1;
	static int32_t x967 = INT32_MIN;
	volatile int32_t t15 = -820;

	t15 = (x965<<(x966^(x967|x968)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x1193 = UINT8_MAX;
	static int8_t x1194 = -12;
	static int32_t x1195 = -21;
	int32_t t16 = 0;

	t16 = (x1193<<(x1194^(x1195|x1196)));

	if (t16 != 522240) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1261 = UINT8_MAX;
	uint64_t x1262 = UINT64_MAX;
	int8_t x1263 = INT8_MAX;
	volatile int32_t x1264 = -6;
	int32_t t17 = 125;

	t17 = (x1261<<(x1262^(x1263|x1264)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1377 = INT64_MAX;
	static volatile int8_t x1379 = -3;
	uint64_t x1380 = UINT64_MAX;
	int64_t t18 = INT64_MAX;

	t18 = (x1377<<(x1378^(x1379|x1380)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1418 = UINT64_MAX;
	int64_t x1419 = -1LL;
	static uint64_t x1420 = 14LLU;
	static volatile int32_t t19 = 1;

	t19 = (x1417<<(x1418^(x1419|x1420)));

	if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1621 = 6U;
	int64_t x1622 = INT64_MIN;
	int8_t x1623 = 4;
	volatile int32_t t20 = 39762600;

	t20 = (x1621<<(x1622^(x1623|x1624)));

	if (t20 != 96) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1801 = INT16_MAX;
	int8_t x1803 = INT8_MIN;
	volatile int32_t t21 = 10670;

	t21 = (x1801<<(x1802^(x1803|x1804)));

	if (t21 != 131068) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1813 = 20U;
	int8_t x1814 = -1;
	volatile int64_t x1816 = -16846564739LL;
	int32_t t22 = -15392732;

	t22 = (x1813<<(x1814^(x1815|x1816)));

	if (t22 != 20) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1945 = 3025U;
	int16_t x1947 = -1;
	uint16_t x1948 = 321U;
	static volatile int32_t t23 = -95;

	t23 = (x1945<<(x1946^(x1947|x1948)));

	if (t23 != 3025) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1949 = INT32_MAX;
	static uint32_t x1950 = UINT32_MAX;
	static int8_t x1951 = -1;
	static int32_t t24 = INT32_MAX;

	t24 = (x1949<<(x1950^(x1951|x1952)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1959 = -1;
	uint32_t x1960 = 1U;
	static int32_t t25 = -97178696;

	t25 = (x1957<<(x1958^(x1959|x1960)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2133 = 12429;
	int8_t x2134 = -1;
	int8_t x2135 = -1;
	volatile int32_t t26 = 340493;

	t26 = (x2133<<(x2134^(x2135|x2136)));

	if (t26 != 12429) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2201 = INT64_MAX;
	int16_t x2202 = INT16_MAX;
	int16_t x2203 = INT16_MAX;
	int64_t t27 = INT64_MAX;

	t27 = (x2201<<(x2202^(x2203|x2204)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2237 = 3U;
	volatile int8_t x2239 = -1;
	uint32_t x2240 = 2U;
	int32_t t28 = -4104801;

	t28 = (x2237<<(x2238^(x2239|x2240)));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2273 = 14781LLU;
	static volatile int8_t x2276 = INT8_MIN;
	uint64_t t29 = 1098647530783LLU;

	t29 = (x2273<<(x2274^(x2275|x2276)));

	if (t29 != 14781LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2381 = INT16_MAX;
	static int16_t x2382 = -1;
	static volatile int16_t x2384 = INT16_MIN;

	t30 = (x2381<<(x2382^(x2383|x2384)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x2429 = 11654500930472LL;
	int32_t x2430 = -1;
	uint64_t x2431 = 1704375717LLU;
	int16_t x2432 = -3;
	volatile int64_t t31 = 15496940LL;

	t31 = (x2429<<(x2430^(x2431|x2432)));

	if (t31 != 46618003721888LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x2442 = UINT64_MAX;
	int16_t x2443 = -15;
	int16_t x2444 = 8;
	static int32_t t32 = -2351695;

	t32 = (x2441<<(x2442^(x2443|x2444)));

	if (t32 != 36544) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2617 = 17;
	volatile int64_t x2618 = -1LL;
	volatile int32_t x2619 = INT32_MIN;
	uint64_t x2620 = UINT64_MAX;
	volatile int32_t t33 = -2148652;

	t33 = (x2617<<(x2618^(x2619|x2620)));

	if (t33 != 17) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2801 = 487652;
	int16_t x2802 = -1;
	int16_t x2804 = -1;
	volatile int32_t t34 = -68;

	t34 = (x2801<<(x2802^(x2803|x2804)));

	if (t34 != 487652) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2877 = 31;
	int32_t x2878 = -1;
	int32_t x2879 = INT32_MIN;
	static int32_t x2880 = INT32_MAX;
	int32_t t35 = 250204734;

	t35 = (x2877<<(x2878^(x2879|x2880)));

	if (t35 != 31) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2925 = 90591329001218LLU;
	static int16_t x2926 = -1;
	uint32_t x2927 = UINT32_MAX;
	static uint32_t x2928 = UINT32_MAX;
	volatile uint64_t t36 = 1253LLU;

	t36 = (x2925<<(x2926^(x2927|x2928)));

	if (t36 != 90591329001218LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2949 = 329U;
	int64_t x2950 = INT64_MAX;
	int64_t x2951 = INT64_MAX;
	volatile uint16_t x2952 = 162U;
	int32_t t37 = -260859076;

	t37 = (x2949<<(x2950^(x2951|x2952)));

	if (t37 != 329) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2961 = INT16_MAX;
	static int32_t x2962 = -1;
	volatile int32_t x2963 = 503694106;
	uint32_t x2964 = UINT32_MAX;
	volatile int32_t t38 = -664627;

	t38 = (x2961<<(x2962^(x2963|x2964)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x3025 = UINT32_MAX;
	volatile int32_t x3026 = -3;
	int64_t x3027 = -22LL;
	uint8_t x3028 = UINT8_MAX;

	t39 = (x3025<<(x3026^(x3027|x3028)));

	if (t39 != 4294967292U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x3038 = 14;
	uint16_t x3039 = 0U;
	volatile uint8_t x3040 = 0U;
	volatile int32_t t40 = -363197550;

	t40 = (x3037<<(x3038^(x3039|x3040)));

	if (t40 != 16384) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x3057 = INT32_MAX;
	int8_t x3058 = -1;
	static int32_t x3059 = INT32_MAX;
	static int32_t t41 = INT32_MAX;

	t41 = (x3057<<(x3058^(x3059|x3060)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x3223 = INT16_MAX;
	int64_t x3224 = -1LL;
	static volatile uint32_t t42 = UINT32_MAX;

	t42 = (x3221<<(x3222^(x3223|x3224)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x3318 = -1;
	uint16_t x3319 = 641U;
	uint32_t x3320 = UINT32_MAX;

	t43 = (x3317<<(x3318^(x3319|x3320)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x3333 = UINT16_MAX;
	int16_t x3335 = INT16_MIN;
	uint64_t x3336 = UINT64_MAX;
	int32_t t44 = 30126;

	t44 = (x3333<<(x3334^(x3335|x3336)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3397 = 9338634681LLU;
	int64_t x3399 = INT64_MAX;
	int8_t x3400 = -1;
	volatile uint64_t t45 = 6LLU;

	t45 = (x3397<<(x3398^(x3399|x3400)));

	if (t45 != 9338634681LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3429 = 57;
	static uint16_t x3431 = 0U;
	volatile uint32_t x3432 = UINT32_MAX;

	t46 = (x3429<<(x3430^(x3431|x3432)));

	if (t46 != 7296) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3549 = 8U;
	int8_t x3550 = -1;
	int64_t x3551 = -1LL;
	uint32_t x3552 = 7U;

	t47 = (x3549<<(x3550^(x3551|x3552)));

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3590 = -1;
	static int32_t x3591 = -1;
	int64_t x3592 = INT64_MAX;
	int32_t t48 = 4485118;

	t48 = (x3589<<(x3590^(x3591|x3592)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x3649 = UINT32_MAX;
	volatile int32_t x3650 = -1;
	uint16_t x3651 = 11901U;
	volatile int8_t x3652 = -1;
	uint32_t t49 = UINT32_MAX;

	t49 = (x3649<<(x3650^(x3651|x3652)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3677 = 76981U;
	uint32_t x3678 = UINT32_MAX;
	uint32_t x3679 = UINT32_MAX;
	static uint32_t x3680 = UINT32_MAX;
	volatile uint32_t t50 = 40123648U;

	t50 = (x3677<<(x3678^(x3679|x3680)));

	if (t50 != 76981U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3749 = 1U;
	uint32_t x3750 = UINT32_MAX;
	int32_t x3751 = -1;
	int8_t x3752 = -1;
	int32_t t51 = 11063;

	t51 = (x3749<<(x3750^(x3751|x3752)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x3850 = -1;
	volatile int16_t x3851 = INT16_MAX;
	static int8_t x3852 = INT8_MIN;
	static uint64_t t52 = 838480328857335785LLU;

	t52 = (x3849<<(x3850^(x3851|x3852)));

	if (t52 != 3770LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3909 = 2492833352LL;
	static int64_t x3911 = INT64_MAX;

	t53 = (x3909<<(x3910^(x3911|x3912)));

	if (t53 != 2492833352LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3941 = UINT32_MAX;
	static int8_t x3942 = -1;
	volatile int16_t x3943 = -1216;
	int16_t x3944 = -1;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x3941<<(x3942^(x3943|x3944)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x4001 = UINT64_MAX;
	static volatile int16_t x4002 = -1;
	uint16_t x4004 = 2U;
	static uint64_t t55 = UINT64_MAX;

	t55 = (x4001<<(x4002^(x4003|x4004)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x4005 = UINT32_MAX;
	int16_t x4006 = -1;
	static int32_t x4007 = -1;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x4005<<(x4006^(x4007|x4008)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x4061 = 3U;
	volatile int32_t x4062 = -1;
	uint32_t x4063 = UINT32_MAX;
	int32_t x4064 = INT32_MIN;
	volatile uint32_t t57 = 191U;

	t57 = (x4061<<(x4062^(x4063|x4064)));

	if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4229 = 48;
	int32_t x4231 = INT32_MAX;
	int16_t x4232 = INT16_MIN;
	volatile int32_t t58 = -81159808;

	t58 = (x4229<<(x4230^(x4231|x4232)));

	if (t58 != 48) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4269 = 1;
	static int16_t x4270 = -1;
	int64_t x4271 = 30562654669482366LL;
	uint64_t x4272 = UINT64_MAX;
	int32_t t59 = 53;

	t59 = (x4269<<(x4270^(x4271|x4272)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4353 = UINT8_MAX;
	static int16_t x4354 = -1;
	volatile uint16_t x4355 = 27U;
	int8_t x4356 = -9;
	volatile int32_t t60 = -30467;

	t60 = (x4353<<(x4354^(x4355|x4356)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x4510 = UINT32_MAX;
	int8_t x4511 = -1;
	uint32_t t61 = 94U;

	t61 = (x4509<<(x4510^(x4511|x4512)));

	if (t61 != 4U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4521 = 15U;
	int8_t x4522 = -6;
	int16_t x4523 = INT16_MAX;
	int32_t t62 = -20981;

	t62 = (x4521<<(x4522^(x4523|x4524)));

	if (t62 != 480) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4553 = 1;
	int32_t x4555 = INT32_MIN;
	int8_t x4556 = -1;

	t63 = (x4553<<(x4554^(x4555|x4556)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4721 = 8460899LL;
	int32_t x4724 = -371631;
	int64_t t64 = 3969207764LL;

	t64 = (x4721<<(x4722^(x4723|x4724)));

	if (t64 != 8460899LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x4755 = UINT32_MAX;
	uint32_t t65 = 963U;

	t65 = (x4753<<(x4754^(x4755|x4756)));

	if (t65 != 19U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x4767 = 63;
	int16_t x4768 = -13;

	t66 = (x4765<<(x4766^(x4767|x4768)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x4797 = 200U;
	uint64_t x4798 = UINT64_MAX;
	int16_t x4799 = -1;
	uint64_t x4800 = UINT64_MAX;
	int32_t t67 = -284734;

	t67 = (x4797<<(x4798^(x4799|x4800)));

	if (t67 != 200) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4885 = 26865190U;
	int32_t x4886 = -1;
	int64_t x4887 = INT64_MIN;
	uint64_t x4888 = UINT64_MAX;
	volatile uint32_t t68 = 19313U;

	t68 = (x4885<<(x4886^(x4887|x4888)));

	if (t68 != 26865190U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x5225 = UINT8_MAX;
	int8_t x5226 = -1;
	int16_t x5227 = -1;
	uint16_t x5228 = 7413U;
	int32_t t69 = 4455;

	t69 = (x5225<<(x5226^(x5227|x5228)));

	if (t69 != 255) { NG(); } else { ; }
	
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


    return 0;
}

