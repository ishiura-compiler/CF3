#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x47 = -25;
static uint8_t x48 = 1U;
uint64_t x105 = 11330372801158767LLU;
static uint64_t t2 = 75121796LLU;
volatile int32_t t4 = 79;
uint32_t x169 = 11U;
int32_t x228 = INT32_MIN;
int32_t t7 = 126598017;
uint64_t x238 = 3LLU;
static uint32_t x313 = UINT32_MAX;
volatile int64_t x316 = INT64_MAX;
uint16_t x381 = 623U;
int8_t x383 = 0;
int32_t x424 = -1;
static uint32_t x709 = 7U;
int32_t x711 = 362;
uint32_t t13 = 136110U;
volatile int32_t t16 = -2419;
int8_t x1046 = 2;
uint8_t x1110 = 11U;
uint32_t x1369 = 327273U;
uint8_t x1445 = UINT8_MAX;
int8_t x1446 = 3;
static volatile uint64_t x1448 = 16239438LLU;
volatile int16_t x1559 = INT16_MIN;
volatile int64_t x1601 = 7652981618LL;
int64_t x1604 = -2180032653623LL;
volatile int64_t t29 = 163204053141541LL;
uint32_t x1941 = 12659U;
volatile int32_t x1944 = -1;
uint32_t t31 = 117545111U;
uint32_t x1949 = UINT32_MAX;
static uint8_t x1950 = 15U;
int16_t x1951 = -1;
int8_t x1952 = 1;
volatile uint32_t t32 = 1425U;
static int32_t t33 = -59103167;
int8_t x2097 = 1;
int64_t t35 = -994LL;
uint64_t x2145 = UINT64_MAX;
uint32_t x2153 = 118308U;
int8_t x2155 = 0;
volatile int16_t x2156 = -1;
int64_t x2187 = INT64_MIN;
volatile uint32_t t38 = 35277U;
int32_t x2345 = 61142820;
int32_t x2435 = INT32_MAX;
uint32_t x2460 = 2447U;
volatile uint64_t t42 = 2672528791LLU;
static uint64_t x2575 = UINT64_MAX;
int8_t x2577 = INT8_MAX;
uint8_t x2580 = 62U;
int32_t x2708 = -1;
static volatile int32_t t45 = -1796;
int8_t x2926 = 1;
int8_t x2940 = INT8_MIN;
volatile int64_t t47 = 106885555481725LL;
int16_t x2991 = INT16_MIN;
uint32_t x3065 = 22732U;
int64_t x3067 = INT64_MAX;
volatile int64_t t53 = 76758LL;
volatile int8_t x3158 = 0;
int16_t x3289 = INT16_MAX;
uint8_t x3535 = 0U;
int32_t x3539 = -1;
volatile int32_t t58 = -580;
int16_t x3571 = -2519;
uint8_t x3646 = 3U;
int64_t x3647 = INT64_MAX;
int8_t x3648 = INT8_MAX;
int32_t t60 = -531387;
volatile int64_t x3671 = INT64_MIN;
static volatile int8_t x3686 = 0;
static uint64_t x3829 = 2964543LLU;
uint32_t x3831 = 981U;
static uint8_t x3832 = UINT8_MAX;
uint64_t x3942 = 0LLU;
int32_t x3943 = INT32_MIN;
static volatile uint16_t x3961 = UINT16_MAX;
int32_t x3962 = 1;
int8_t x4026 = 0;
uint16_t x4276 = 49U;
volatile int32_t t73 = -3701;
uint16_t x4354 = 5U;
static uint8_t x4470 = 13U;
uint32_t x4473 = UINT32_MAX;
uint16_t x4475 = 2U;
uint32_t t77 = 950460U;
int32_t t78 = 1;
volatile uint32_t x4505 = UINT32_MAX;
volatile int8_t x4576 = INT8_MIN;
int8_t x4661 = 13;
uint64_t x4664 = 898631LLU;
static volatile uint64_t x4825 = 881637LLU;
int64_t x4827 = 148LL;
volatile int32_t t84 = 11;
int8_t x4858 = 1;
static uint32_t t88 = 56016U;
int64_t x5076 = -310109446573175LL;
volatile int16_t x5198 = 2;
int64_t x5368 = -1LL;
volatile uint64_t t92 = UINT64_MAX;
uint8_t x5618 = 0U;
int32_t t95 = -308345;
uint8_t x5694 = 0U;
static volatile int8_t x5700 = -1;
uint64_t x5781 = UINT64_MAX;
uint64_t x5783 = 23301474905534LLU;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int16_t x2 = 0;
	int64_t x3 = -1LL;
	volatile int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 0;

	t0 = ((x1<<x2)<<(x3<=x4));

	if (t0 != 131070) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x45 = UINT64_MAX;
	uint32_t x46 = 22U;
	uint64_t t1 = 8LLU;

	t1 = ((x45<<x46)<<(x47<=x48));

	if (t1 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x106 = 0U;
	uint32_t x107 = 111U;
	static int64_t x108 = -1LL;

	t2 = ((x105<<x106)<<(x107<=x108));

	if (t2 != 11330372801158767LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x113 = UINT8_MAX;
	int16_t x114 = 9;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = 13690U;
	static volatile int32_t t3 = 1036;

	t3 = ((x113<<x114)<<(x115<=x116));

	if (t3 != 130560) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x145 = 3;
	uint8_t x146 = 9U;
	int32_t x147 = INT32_MIN;
	int32_t x148 = 224732606;

	t4 = ((x145<<x146)<<(x147<=x148));

	if (t4 != 3072) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x149 = 8U;
	int16_t x150 = 1;
	int16_t x151 = INT16_MAX;
	int64_t x152 = INT64_MIN;
	volatile int32_t t5 = 1;

	t5 = ((x149<<x150)<<(x151<=x152));

	if (t5 != 16) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x170 = 13U;
	volatile uint16_t x171 = 3U;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t6 = 35462248U;

	t6 = ((x169<<x170)<<(x171<=x172));

	if (t6 != 180224U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x225 = 2U;
	uint8_t x226 = 1U;
	int16_t x227 = -1;

	t7 = ((x225<<x226)<<(x227<=x228));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x237 = 15733LLU;
	volatile int64_t x239 = 14LL;
	static int8_t x240 = 3;
	volatile uint64_t t8 = 2126557838169338778LLU;

	t8 = ((x237<<x238)<<(x239<=x240));

	if (t8 != 125864LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x314 = 0U;
	uint32_t x315 = UINT32_MAX;
	volatile uint32_t t9 = 5U;

	t9 = ((x313<<x314)<<(x315<=x316));

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x382 = 1U;
	uint32_t x384 = 1026251513U;
	int32_t t10 = -632;

	t10 = ((x381<<x382)<<(x383<=x384));

	if (t10 != 2492) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x421 = UINT32_MAX;
	uint8_t x422 = 26U;
	static int8_t x423 = INT8_MIN;
	uint32_t t11 = 21591U;

	t11 = ((x421<<x422)<<(x423<=x424));

	if (t11 != 4160749568U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x633 = UINT16_MAX;
	static uint8_t x634 = 1U;
	uint8_t x635 = 1U;
	int32_t x636 = -1;
	volatile int32_t t12 = -24303991;

	t12 = ((x633<<x634)<<(x635<=x636));

	if (t12 != 131070) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x710 = 3U;
	int32_t x712 = -1;

	t13 = ((x709<<x710)<<(x711<=x712));

	if (t13 != 56U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x713 = 0;
	uint8_t x714 = 0U;
	uint8_t x715 = 57U;
	int8_t x716 = INT8_MAX;
	int32_t t14 = -634;

	t14 = ((x713<<x714)<<(x715<=x716));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x869 = INT32_MAX;
	int32_t x870 = 0;
	static volatile int64_t x871 = INT64_MAX;
	static int8_t x872 = INT8_MIN;
	static int32_t t15 = INT32_MAX;

	t15 = ((x869<<x870)<<(x871<=x872));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x877 = 59U;
	int8_t x878 = 1;
	int64_t x879 = INT64_MAX;
	volatile uint16_t x880 = 5231U;

	t16 = ((x877<<x878)<<(x879<=x880));

	if (t16 != 118) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x973 = 5751LLU;
	static uint8_t x974 = 0U;
	int32_t x975 = INT32_MIN;
	int16_t x976 = INT16_MIN;
	uint64_t t17 = 3LLU;

	t17 = ((x973<<x974)<<(x975<=x976));

	if (t17 != 11502LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1005 = 0;
	static int16_t x1006 = 21;
	uint64_t x1007 = UINT64_MAX;
	volatile uint8_t x1008 = UINT8_MAX;
	int32_t t18 = 14746;

	t18 = ((x1005<<x1006)<<(x1007<=x1008));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1017 = 787542U;
	uint16_t x1018 = 15U;
	int32_t x1019 = -5229;
	int16_t x1020 = INT16_MIN;
	volatile uint32_t t19 = 1U;

	t19 = ((x1017<<x1018)<<(x1019<=x1020));

	if (t19 != 36372480U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x1045 = UINT8_MAX;
	int64_t x1047 = -9LL;
	uint64_t x1048 = 4834LLU;
	volatile int32_t t20 = 6074;

	t20 = ((x1045<<x1046)<<(x1047<=x1048));

	if (t20 != 1020) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1109 = UINT32_MAX;
	int32_t x1111 = INT32_MIN;
	int16_t x1112 = 0;
	uint32_t t21 = 16463250U;

	t21 = ((x1109<<x1110)<<(x1111<=x1112));

	if (t21 != 4294963200U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1293 = UINT8_MAX;
	static uint8_t x1294 = 5U;
	int8_t x1295 = -4;
	int16_t x1296 = -299;
	int32_t t22 = 3326511;

	t22 = ((x1293<<x1294)<<(x1295<=x1296));

	if (t22 != 8160) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1361 = 509466975884LLU;
	int8_t x1362 = 3;
	int64_t x1363 = -1LL;
	int16_t x1364 = -3415;
	volatile uint64_t t23 = 57710514602LLU;

	t23 = ((x1361<<x1362)<<(x1363<=x1364));

	if (t23 != 4075735807072LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1370 = 4;
	uint8_t x1371 = UINT8_MAX;
	uint64_t x1372 = 61320LLU;
	volatile uint32_t t24 = 501322U;

	t24 = ((x1369<<x1370)<<(x1371<=x1372));

	if (t24 != 10472736U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1447 = 4904;
	int32_t t25 = -8;

	t25 = ((x1445<<x1446)<<(x1447<=x1448));

	if (t25 != 4080) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1533 = 6;
	uint8_t x1534 = 14U;
	static int64_t x1535 = INT64_MAX;
	uint64_t x1536 = 143410733490499896LLU;
	static int32_t t26 = 160980;

	t26 = ((x1533<<x1534)<<(x1535<=x1536));

	if (t26 != 98304) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1557 = 3LLU;
	static uint8_t x1558 = 1U;
	static int64_t x1560 = 46795161694267273LL;
	uint64_t t27 = 93065018260755LLU;

	t27 = ((x1557<<x1558)<<(x1559<=x1560));

	if (t27 != 12LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1602 = 10;
	volatile int64_t x1603 = INT64_MIN;
	int64_t t28 = -1LL;

	t28 = ((x1601<<x1602)<<(x1603<=x1604));

	if (t28 != 15673306353664LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1629 = 16979833454LL;
	int8_t x1630 = 0;
	volatile int16_t x1631 = -1;
	int8_t x1632 = -2;

	t29 = ((x1629<<x1630)<<(x1631<=x1632));

	if (t29 != 16979833454LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x1785 = 43729U;
	int8_t x1786 = 2;
	int64_t x1787 = INT64_MAX;
	int64_t x1788 = -587535331268936LL;
	uint32_t t30 = 1060323585U;

	t30 = ((x1785<<x1786)<<(x1787<=x1788));

	if (t30 != 174916U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1942 = 18U;
	volatile uint16_t x1943 = 26U;

	t31 = ((x1941<<x1942)<<(x1943<=x1944));

	if (t31 != 3318480896U) { NG(); } else { ; }
	
}

void f32(void) {


	t32 = ((x1949<<x1950)<<(x1951<=x1952));

	if (t32 != 4294901760U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x2029 = 28688;
	uint8_t x2030 = 16U;
	int8_t x2031 = -1;
	static int64_t x2032 = INT64_MIN;

	t33 = ((x2029<<x2030)<<(x2031<=x2032));

	if (t33 != 1880096768) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2098 = 0;
	static int8_t x2099 = -1;
	volatile int64_t x2100 = -44992897922823978LL;
	volatile int32_t t34 = 4409;

	t34 = ((x2097<<x2098)<<(x2099<=x2100));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2105 = 40640681129587603LL;
	static int8_t x2106 = 0;
	volatile int8_t x2107 = INT8_MAX;
	uint64_t x2108 = 1LLU;

	t35 = ((x2105<<x2106)<<(x2107<=x2108));

	if (t35 != 40640681129587603LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x2146 = 36;
	uint32_t x2147 = UINT32_MAX;
	uint64_t x2148 = 1550534348LLU;
	volatile uint64_t t36 = 245806511761LLU;

	t36 = ((x2145<<x2146)<<(x2147<=x2148));

	if (t36 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2154 = 29LL;
	uint32_t t37 = 155U;

	t37 = ((x2153<<x2154)<<(x2155<=x2156));

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2185 = 5995U;
	volatile uint8_t x2186 = 2U;
	static int16_t x2188 = INT16_MIN;

	t38 = ((x2185<<x2186)<<(x2187<=x2188));

	if (t38 != 47960U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x2233 = UINT16_MAX;
	uint8_t x2234 = 2U;
	static int64_t x2235 = 247174144817656LL;
	int64_t x2236 = -14231246062LL;
	int32_t t39 = -30515;

	t39 = ((x2233<<x2234)<<(x2235<=x2236));

	if (t39 != 262140) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2346 = 0;
	int32_t x2347 = -1;
	uint32_t x2348 = 64663U;
	int32_t t40 = 2950043;

	t40 = ((x2345<<x2346)<<(x2347<=x2348));

	if (t40 != 61142820) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2433 = 43742LL;
	static uint32_t x2434 = 3U;
	static volatile int64_t x2436 = 703050906LL;
	volatile int64_t t41 = 401640056378162LL;

	t41 = ((x2433<<x2434)<<(x2435<=x2436));

	if (t41 != 349936LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2457 = 6326626533761LLU;
	volatile uint8_t x2458 = 4U;
	static volatile int16_t x2459 = INT16_MAX;

	t42 = ((x2457<<x2458)<<(x2459<=x2460));

	if (t42 != 101226024540176LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2573 = 9LLU;
	uint8_t x2574 = 34U;
	static volatile uint32_t x2576 = 1676U;
	volatile uint64_t t43 = 224866216716LLU;

	t43 = ((x2573<<x2574)<<(x2575<=x2576));

	if (t43 != 154618822656LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x2578 = 15U;
	int64_t x2579 = -1LL;
	volatile int32_t t44 = 3045929;

	t44 = ((x2577<<x2578)<<(x2579<=x2580));

	if (t44 != 8323072) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2705 = 1U;
	uint16_t x2706 = 6U;
	int32_t x2707 = INT32_MIN;

	t45 = ((x2705<<x2706)<<(x2707<=x2708));

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2925 = UINT32_MAX;
	volatile int32_t x2927 = INT32_MAX;
	volatile int32_t x2928 = INT32_MIN;
	uint32_t t46 = 19514006U;

	t46 = ((x2925<<x2926)<<(x2927<=x2928));

	if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2937 = 100461606734LL;
	uint8_t x2938 = 0U;
	static int8_t x2939 = INT8_MIN;

	t47 = ((x2937<<x2938)<<(x2939<=x2940));

	if (t47 != 200923213468LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2989 = 31U;
	uint32_t x2990 = 15U;
	uint16_t x2992 = 9564U;
	volatile int32_t t48 = 12105842;

	t48 = ((x2989<<x2990)<<(x2991<=x2992));

	if (t48 != 2031616) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3009 = 418462037LL;
	static int16_t x3010 = 0;
	int64_t x3011 = INT64_MIN;
	static int32_t x3012 = INT32_MAX;
	int64_t t49 = -83942739LL;

	t49 = ((x3009<<x3010)<<(x3011<=x3012));

	if (t49 != 836924074LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x3049 = 11935;
	volatile uint8_t x3050 = 5U;
	int16_t x3051 = -25;
	int64_t x3052 = -1LL;
	static int32_t t50 = -68;

	t50 = ((x3049<<x3050)<<(x3051<=x3052));

	if (t50 != 763840) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x3066 = 20;
	static uint8_t x3068 = UINT8_MAX;
	volatile uint32_t t51 = 339829U;

	t51 = ((x3065<<x3066)<<(x3067<=x3068));

	if (t51 != 2361393152U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3077 = 3U;
	static volatile int8_t x3078 = 1;
	static volatile int16_t x3079 = -1;
	uint8_t x3080 = 52U;
	int32_t t52 = -1630531;

	t52 = ((x3077<<x3078)<<(x3079<=x3080));

	if (t52 != 12) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3117 = 6547776LL;
	static uint32_t x3118 = 1U;
	int16_t x3119 = -1;
	int8_t x3120 = 22;

	t53 = ((x3117<<x3118)<<(x3119<=x3120));

	if (t53 != 26191104LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x3141 = 4U;
	int8_t x3142 = 13;
	int32_t x3143 = INT32_MAX;
	int64_t x3144 = -106849LL;
	int32_t t54 = -3;

	t54 = ((x3141<<x3142)<<(x3143<=x3144));

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3157 = 1856;
	uint16_t x3159 = 271U;
	volatile int64_t x3160 = -1LL;
	volatile int32_t t55 = 202;

	t55 = ((x3157<<x3158)<<(x3159<=x3160));

	if (t55 != 1856) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3290 = 0;
	static uint64_t x3291 = 1793957LLU;
	uint32_t x3292 = 114745U;
	static volatile int32_t t56 = 54934944;

	t56 = ((x3289<<x3290)<<(x3291<=x3292));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3533 = INT16_MAX;
	volatile uint32_t x3534 = 3U;
	volatile int32_t x3536 = INT32_MIN;
	volatile int32_t t57 = 640313;

	t57 = ((x3533<<x3534)<<(x3535<=x3536));

	if (t57 != 262136) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3537 = 1;
	uint64_t x3538 = 1LLU;
	int8_t x3540 = INT8_MIN;

	t58 = ((x3537<<x3538)<<(x3539<=x3540));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x3569 = 1182061265LLU;
	int8_t x3570 = 0;
	static int64_t x3572 = 13LL;
	volatile uint64_t t59 = 2683LLU;

	t59 = ((x3569<<x3570)<<(x3571<=x3572));

	if (t59 != 2364122530LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3645 = UINT8_MAX;

	t60 = ((x3645<<x3646)<<(x3647<=x3648));

	if (t60 != 2040) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3669 = 855835256LLU;
	static uint8_t x3670 = 3U;
	static int16_t x3672 = 5365;
	uint64_t t61 = 6961LLU;

	t61 = ((x3669<<x3670)<<(x3671<=x3672));

	if (t61 != 13693364096LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3685 = 379878986U;
	static volatile uint16_t x3687 = 0U;
	volatile int64_t x3688 = 1LL;
	volatile uint32_t t62 = 4009U;

	t62 = ((x3685<<x3686)<<(x3687<=x3688));

	if (t62 != 759757972U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3781 = 4;
	static int8_t x3782 = 4;
	uint32_t x3783 = 221U;
	volatile int64_t x3784 = INT64_MIN;
	volatile int32_t t63 = -844637;

	t63 = ((x3781<<x3782)<<(x3783<=x3784));

	if (t63 != 64) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3793 = INT16_MAX;
	static int8_t x3794 = 0;
	int32_t x3795 = INT32_MIN;
	int64_t x3796 = 5440328223338LL;
	int32_t t64 = -47169;

	t64 = ((x3793<<x3794)<<(x3795<=x3796));

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3830 = 0;
	uint64_t t65 = 40541509049837307LLU;

	t65 = ((x3829<<x3830)<<(x3831<=x3832));

	if (t65 != 2964543LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3941 = UINT64_MAX;
	volatile int32_t x3944 = INT32_MIN;
	volatile uint64_t t66 = 16442432400907347LLU;

	t66 = ((x3941<<x3942)<<(x3943<=x3944));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x3963 = INT8_MAX;
	int16_t x3964 = -1;
	volatile int32_t t67 = -61183;

	t67 = ((x3961<<x3962)<<(x3963<=x3964));

	if (t67 != 131070) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4025 = 5527789248154945392LLU;
	uint16_t x4027 = 70U;
	int8_t x4028 = INT8_MIN;
	volatile uint64_t t68 = 5847195LLU;

	t68 = ((x4025<<x4026)<<(x4027<=x4028));

	if (t68 != 5527789248154945392LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4065 = UINT16_MAX;
	uint32_t x4066 = 5U;
	int8_t x4067 = INT8_MIN;
	int8_t x4068 = -2;
	volatile int32_t t69 = 62;

	t69 = ((x4065<<x4066)<<(x4067<=x4068));

	if (t69 != 4194240) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x4165 = 50U;
	uint8_t x4166 = 22U;
	uint32_t x4167 = UINT32_MAX;
	int8_t x4168 = -1;
	static volatile int32_t t70 = -98322328;

	t70 = ((x4165<<x4166)<<(x4167<=x4168));

	if (t70 != 419430400) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4189 = 1550U;
	uint32_t x4190 = 15U;
	int8_t x4191 = -1;
	int32_t x4192 = 1;
	int32_t t71 = 709966279;

	t71 = ((x4189<<x4190)<<(x4191<=x4192));

	if (t71 != 101580800) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4233 = 1277U;
	static int16_t x4234 = 28;
	uint64_t x4235 = UINT64_MAX;
	static uint32_t x4236 = 214783088U;
	uint32_t t72 = 271U;

	t72 = ((x4233<<x4234)<<(x4235<=x4236));

	if (t72 != 3489660928U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x4273 = 0;
	volatile int8_t x4274 = 0;
	static uint16_t x4275 = 1483U;

	t73 = ((x4273<<x4274)<<(x4275<=x4276));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4353 = 2U;
	uint8_t x4355 = UINT8_MAX;
	static int64_t x4356 = INT64_MIN;
	static volatile int32_t t74 = -16011530;

	t74 = ((x4353<<x4354)<<(x4355<=x4356));

	if (t74 != 64) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4445 = 12978;
	int64_t x4446 = 1LL;
	uint64_t x4447 = 1385029061330LLU;
	int8_t x4448 = INT8_MAX;
	volatile int32_t t75 = -5299;

	t75 = ((x4445<<x4446)<<(x4447<=x4448));

	if (t75 != 25956) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4469 = 40U;
	int32_t x4471 = 1000037;
	int32_t x4472 = INT32_MIN;
	int32_t t76 = -3892621;

	t76 = ((x4469<<x4470)<<(x4471<=x4472));

	if (t76 != 327680) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4474 = 3;
	uint16_t x4476 = UINT16_MAX;

	t77 = ((x4473<<x4474)<<(x4475<=x4476));

	if (t77 != 4294967280U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x4477 = UINT16_MAX;
	int8_t x4478 = 2;
	int16_t x4479 = -3;
	static int16_t x4480 = INT16_MIN;

	t78 = ((x4477<<x4478)<<(x4479<=x4480));

	if (t78 != 262140) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4506 = 9U;
	int64_t x4507 = INT64_MIN;
	int8_t x4508 = INT8_MIN;
	static volatile uint32_t t79 = 1216U;

	t79 = ((x4505<<x4506)<<(x4507<=x4508));

	if (t79 != 4294966272U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4573 = 1U;
	int8_t x4574 = 1;
	int64_t x4575 = INT64_MIN;
	int32_t t80 = 6047;

	t80 = ((x4573<<x4574)<<(x4575<=x4576));

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x4662 = 8U;
	int64_t x4663 = INT64_MIN;
	int32_t t81 = 767829655;

	t81 = ((x4661<<x4662)<<(x4663<=x4664));

	if (t81 != 3328) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x4721 = UINT64_MAX;
	static uint8_t x4722 = 15U;
	static uint64_t x4723 = 15890136570876380LLU;
	uint16_t x4724 = 10U;
	uint64_t t82 = 10383032171867LLU;

	t82 = ((x4721<<x4722)<<(x4723<=x4724));

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4826 = 3;
	uint16_t x4828 = 17U;
	volatile uint64_t t83 = 757324730263LLU;

	t83 = ((x4825<<x4826)<<(x4827<=x4828));

	if (t83 != 7053096LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4853 = 10;
	static volatile uint64_t x4854 = 17LLU;
	int8_t x4855 = INT8_MIN;
	uint32_t x4856 = 38864252U;

	t84 = ((x4853<<x4854)<<(x4855<=x4856));

	if (t84 != 1310720) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4857 = 98U;
	int32_t x4859 = -1;
	volatile int64_t x4860 = INT64_MIN;
	volatile int32_t t85 = 191182639;

	t85 = ((x4857<<x4858)<<(x4859<=x4860));

	if (t85 != 196) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4945 = 3;
	uint8_t x4946 = 3U;
	int64_t x4947 = -1LL;
	uint64_t x4948 = 21980LLU;
	int32_t t86 = 140473226;

	t86 = ((x4945<<x4946)<<(x4947<=x4948));

	if (t86 != 24) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x4957 = UINT16_MAX;
	volatile int16_t x4958 = 0;
	uint64_t x4959 = 729221816627448LLU;
	volatile int64_t x4960 = INT64_MIN;
	int32_t t87 = 51084;

	t87 = ((x4957<<x4958)<<(x4959<=x4960));

	if (t87 != 131070) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5057 = UINT32_MAX;
	int8_t x5058 = 13;
	int64_t x5059 = INT64_MAX;
	uint16_t x5060 = UINT16_MAX;

	t88 = ((x5057<<x5058)<<(x5059<=x5060));

	if (t88 != 4294959104U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5073 = 3950393817843LLU;
	uint8_t x5074 = 15U;
	uint8_t x5075 = 0U;
	uint64_t t89 = 0LLU;

	t89 = ((x5073<<x5074)<<(x5075<=x5076));

	if (t89 != 129446504623079424LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5197 = 1;
	static volatile int64_t x5199 = -1LL;
	int8_t x5200 = INT8_MAX;
	static int32_t t90 = 2116273;

	t90 = ((x5197<<x5198)<<(x5199<=x5200));

	if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5269 = INT8_MAX;
	uint8_t x5270 = 2U;
	int64_t x5271 = INT64_MIN;
	static int16_t x5272 = 8525;
	int32_t t91 = 614;

	t91 = ((x5269<<x5270)<<(x5271<=x5272));

	if (t91 != 1016) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5365 = UINT64_MAX;
	int8_t x5366 = 0;
	int32_t x5367 = INT32_MAX;

	t92 = ((x5365<<x5366)<<(x5367<=x5368));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5473 = 725U;
	uint64_t x5474 = 1LLU;
	static int64_t x5475 = INT64_MIN;
	volatile uint64_t x5476 = 1658456886536826LLU;
	int32_t t93 = -103161;

	t93 = ((x5473<<x5474)<<(x5475<=x5476));

	if (t93 != 1450) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5613 = 1U;
	uint8_t x5614 = 1U;
	int16_t x5615 = INT16_MIN;
	int16_t x5616 = 2;
	static volatile uint32_t t94 = 2U;

	t94 = ((x5613<<x5614)<<(x5615<=x5616));

	if (t94 != 4U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x5617 = INT8_MAX;
	int64_t x5619 = 1LL;
	int16_t x5620 = -1;

	t95 = ((x5617<<x5618)<<(x5619<=x5620));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5621 = 31321821LLU;
	int8_t x5622 = 26;
	uint32_t x5623 = 629471431U;
	static int64_t x5624 = 12670402159579LL;
	static volatile uint64_t t96 = 1167999015015LLU;

	t96 = ((x5621<<x5622)<<(x5623<=x5624));

	if (t96 != 4203943651442688LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x5693 = UINT64_MAX;
	volatile int32_t x5695 = INT32_MIN;
	int32_t x5696 = 47;
	volatile uint64_t t97 = 2328LLU;

	t97 = ((x5693<<x5694)<<(x5695<=x5696));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5697 = INT8_MAX;
	int16_t x5698 = 1;
	int32_t x5699 = INT32_MAX;
	static int32_t t98 = 708031;

	t98 = ((x5697<<x5698)<<(x5699<=x5700));

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x5782 = 16U;
	int64_t x5784 = INT64_MIN;
	uint64_t t99 = 52384763611LLU;

	t99 = ((x5781<<x5782)<<(x5783<=x5784));

	if (t99 != 18446744073709420544LLU) { NG(); } else { ; }
	
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

