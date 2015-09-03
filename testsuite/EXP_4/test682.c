#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x181 = 2901LLU;
int16_t x184 = INT16_MIN;
uint32_t x225 = UINT32_MAX;
static uint8_t x405 = 0U;
int8_t x440 = INT8_MAX;
int32_t t6 = 6;
int32_t x747 = INT32_MAX;
int64_t x757 = 43832LL;
uint64_t x759 = 4LLU;
volatile uint8_t x910 = 3U;
uint16_t x912 = 1U;
static uint32_t x946 = 1U;
int8_t x997 = 5;
static int16_t x1017 = 0;
uint16_t x1093 = 29203U;
volatile uint64_t x1573 = UINT64_MAX;
uint64_t x1576 = UINT64_MAX;
int8_t x1593 = 0;
static uint16_t x1986 = 0U;
volatile int8_t x1988 = INT8_MIN;
int8_t x2024 = INT8_MAX;
int8_t x2068 = -14;
int8_t x2282 = 5;
uint8_t x2283 = 3U;
uint64_t x2346 = UINT64_MAX;
static int32_t x2348 = INT32_MIN;
static uint64_t t35 = 34986LLU;
uint32_t x2535 = 3358204U;
uint8_t x2558 = 43U;
int8_t x2776 = INT8_MIN;
volatile int32_t t40 = -11;
uint8_t x2978 = 3U;
uint16_t x3037 = 1725U;
int32_t x3039 = INT32_MIN;
int16_t x3087 = -1;
volatile uint32_t t43 = 209517636U;
static volatile uint8_t x3230 = 0U;
int16_t x3232 = -1;
int8_t x3305 = 53;
uint8_t x3306 = 1U;
int8_t x3346 = 3;
uint32_t x3348 = UINT32_MAX;
volatile int32_t t50 = -287152;
volatile uint8_t x3721 = 0U;
static int32_t t51 = -90340509;
uint8_t x4056 = 1U;
uint16_t x4205 = 123U;
uint8_t x4206 = 3U;
int32_t t59 = 0;
uint64_t x4477 = 10391LLU;
int64_t x4479 = 119869096960935LL;
uint64_t t60 = 593LLU;
static int8_t x4498 = 1;
int32_t t61 = 981040073;
uint8_t x4598 = 0U;
int32_t x4904 = INT32_MAX;
uint32_t x4917 = 629U;
volatile uint8_t x5034 = 2U;
int16_t x5130 = -207;
int16_t x5234 = -1;
static uint16_t x5374 = 23U;
static uint16_t x5375 = UINT16_MAX;
int64_t x5376 = -1LL;
static uint32_t x5604 = 3469U;
volatile int64_t x5635 = -15114192604953707LL;
static volatile int8_t x5636 = 39;
int32_t t76 = 374765259;
int32_t x5692 = INT32_MAX;
int8_t x6191 = -4;
static int8_t x6192 = -1;
uint64_t x6368 = UINT64_MAX;
int16_t x6550 = -1;
int8_t x6642 = -5;
int32_t t87 = 2437332;
int8_t x6766 = 7;
uint64_t x6767 = UINT64_MAX;
volatile int32_t t88 = -22;
uint8_t x6895 = UINT8_MAX;
volatile int8_t x6896 = INT8_MAX;
int32_t t91 = -48974108;
volatile uint32_t x7112 = 38107U;
static int32_t t93 = 19476537;
uint32_t x7245 = UINT32_MAX;
static volatile int8_t x7275 = -1;
int32_t x7414 = 3;


void f0(void) {
	uint32_t x53 = UINT32_MAX;
	static uint64_t x54 = UINT64_MAX;
	int16_t x55 = INT16_MAX;
	static int8_t x56 = 3;
	static uint32_t t0 = UINT32_MAX;

	t0 = (x53<<(x54+(x55%x56)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x182 = -1;
	uint16_t x183 = 57U;
	uint64_t t1 = 20624686LLU;

	t1 = (x181<<(x182+(x183%x184)));

	if (t1 != 6124895493223874560LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x226 = 0;
	int16_t x227 = INT16_MIN;
	int64_t x228 = -1LL;
	static uint32_t t2 = UINT32_MAX;

	t2 = (x225<<(x226+(x227%x228)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x406 = 3U;
	int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t3 = 7;

	t3 = (x405<<(x406+(x407%x408)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x437 = 1;
	volatile int8_t x438 = -27;
	static uint8_t x439 = 53U;
	static volatile int32_t t4 = -1890;

	t4 = (x437<<(x438+(x439%x440)));

	if (t4 != 67108864) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x441 = INT16_MAX;
	static uint8_t x442 = 11U;
	int64_t x443 = INT64_MIN;
	volatile int64_t x444 = -1LL;
	volatile int32_t t5 = 76758661;

	t5 = (x441<<(x442+(x443%x444)));

	if (t5 != 67106816) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x669 = 3U;
	uint32_t x670 = 18U;
	uint8_t x671 = 2U;
	uint16_t x672 = 3414U;

	t6 = (x669<<(x670+(x671%x672)));

	if (t6 != 3145728) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x745 = 581217461518784006LLU;
	uint8_t x746 = 33U;
	static int64_t x748 = -1LL;
	uint64_t t7 = 1806LLU;

	t7 = (x745<<(x746+(x747%x748)));

	if (t7 != 6208682728846524416LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x758 = 11;
	volatile int8_t x760 = INT8_MIN;
	volatile int64_t t8 = -170847LL;

	t8 = (x757<<(x758+(x759%x760)));

	if (t8 != 1436286976LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x857 = 4797568265LLU;
	int16_t x858 = -1;
	uint64_t x859 = UINT64_MAX;
	int64_t x860 = INT64_MAX;
	static uint64_t t9 = 32628261381LLU;

	t9 = (x857<<(x858+(x859%x860)));

	if (t9 != 4797568265LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x909 = 1213U;
	static int64_t x911 = -163170LL;
	static int32_t t10 = 65;

	t10 = (x909<<(x910+(x911%x912)));

	if (t10 != 9704) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x945 = 146;
	uint32_t x947 = 1U;
	static volatile int16_t x948 = 484;
	int32_t t11 = 4134598;

	t11 = (x945<<(x946+(x947%x948)));

	if (t11 != 584) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x998 = 12U;
	volatile int64_t x999 = INT64_MIN;
	int8_t x1000 = INT8_MIN;
	volatile int32_t t12 = -1;

	t12 = (x997<<(x998+(x999%x1000)));

	if (t12 != 20480) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1018 = 14;
	int8_t x1019 = -1;
	uint8_t x1020 = UINT8_MAX;
	volatile int32_t t13 = 308;

	t13 = (x1017<<(x1018+(x1019%x1020)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1094 = 0;
	volatile uint32_t x1095 = UINT32_MAX;
	int64_t x1096 = -1LL;
	int32_t t14 = -811;

	t14 = (x1093<<(x1094+(x1095%x1096)));

	if (t14 != 29203) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1145 = INT8_MAX;
	uint32_t x1146 = UINT32_MAX;
	static uint8_t x1147 = 1U;
	int8_t x1148 = INT8_MIN;
	volatile int32_t t15 = -19722;

	t15 = (x1145<<(x1146+(x1147%x1148)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1225 = 363413LLU;
	uint8_t x1226 = 56U;
	int64_t x1227 = -1LL;
	uint8_t x1228 = 28U;
	uint64_t t16 = 286954669049000LLU;

	t16 = (x1225<<(x1226+(x1227%x1228)));

	if (t16 != 14591662792680407040LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1269 = INT8_MAX;
	uint16_t x1270 = 2U;
	int8_t x1271 = 8;
	static int32_t x1272 = 28;
	static volatile int32_t t17 = 940;

	t17 = (x1269<<(x1270+(x1271%x1272)));

	if (t17 != 130048) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1401 = 0LL;
	volatile uint64_t x1402 = UINT64_MAX;
	static uint64_t x1403 = 10LLU;
	uint8_t x1404 = UINT8_MAX;
	static int64_t t18 = 6LL;

	t18 = (x1401<<(x1402+(x1403%x1404)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1505 = 5084461636610LLU;
	static int32_t x1506 = 14;
	volatile int32_t x1507 = INT32_MAX;
	static int64_t x1508 = -1LL;
	volatile uint64_t t19 = 256485208LLU;

	t19 = (x1505<<(x1506+(x1507%x1508)));

	if (t19 != 83303819454218240LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x1574 = -1LL;
	int32_t x1575 = 1;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x1573<<(x1574+(x1575%x1576)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1594 = 19;
	int8_t x1595 = INT8_MAX;
	int32_t x1596 = -1;
	volatile int32_t t21 = 139;

	t21 = (x1593<<(x1594+(x1595%x1596)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1749 = 7987394LL;
	int64_t x1750 = -1LL;
	static int8_t x1751 = 2;
	static uint16_t x1752 = 54U;
	int64_t t22 = 8361588299166LL;

	t22 = (x1749<<(x1750+(x1751%x1752)));

	if (t22 != 15974788LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1777 = 3U;
	volatile int8_t x1778 = 21;
	uint32_t x1779 = 15643U;
	int64_t x1780 = -1LL;
	int32_t t23 = 190;

	t23 = (x1777<<(x1778+(x1779%x1780)));

	if (t23 != 6291456) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1873 = 148722713U;
	static int8_t x1874 = 14;
	int8_t x1875 = 0;
	uint16_t x1876 = UINT16_MAX;
	uint32_t t24 = 241386115U;

	t24 = (x1873<<(x1874+(x1875%x1876)));

	if (t24 != 1426472960U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1921 = UINT16_MAX;
	int8_t x1922 = 7;
	uint16_t x1923 = 9282U;
	int16_t x1924 = -1;
	volatile int32_t t25 = -3701;

	t25 = (x1921<<(x1922+(x1923%x1924)));

	if (t25 != 8388480) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1973 = 0U;
	volatile int8_t x1974 = 9;
	int32_t x1975 = -1;
	static int8_t x1976 = -22;
	int32_t t26 = 410237;

	t26 = (x1973<<(x1974+(x1975%x1976)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1985 = 52394LLU;
	int64_t x1987 = INT64_MIN;
	static volatile uint64_t t27 = 366LLU;

	t27 = (x1985<<(x1986+(x1987%x1988)));

	if (t27 != 52394LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1993 = 7U;
	int8_t x1994 = -1;
	uint16_t x1995 = 2U;
	int64_t x1996 = INT64_MIN;
	uint32_t t28 = 1916U;

	t28 = (x1993<<(x1994+(x1995%x1996)));

	if (t28 != 14U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x2021 = 550779;
	volatile int8_t x2022 = -1;
	volatile int32_t x2023 = INT32_MAX;
	int32_t t29 = 183203776;

	t29 = (x2021<<(x2022+(x2023%x2024)));

	if (t29 != 35249856) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2029 = 25U;
	uint8_t x2030 = 10U;
	static uint64_t x2031 = UINT64_MAX;
	uint64_t x2032 = 910LLU;
	int32_t t30 = 994846;

	t30 = (x2029<<(x2030+(x2031%x2032)));

	if (t30 != 838860800) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2065 = UINT64_MAX;
	uint8_t x2066 = 14U;
	uint32_t x2067 = UINT32_MAX;
	volatile uint64_t t31 = 63LLU;

	t31 = (x2065<<(x2066+(x2067%x2068)));

	if (t31 != 18446744073575333888LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2157 = UINT16_MAX;
	uint8_t x2158 = 6U;
	int32_t x2159 = 1;
	int16_t x2160 = -1;
	volatile int32_t t32 = 480738217;

	t32 = (x2157<<(x2158+(x2159%x2160)));

	if (t32 != 4194240) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2193 = 2457LLU;
	static uint32_t x2194 = 42U;
	int16_t x2195 = -1;
	uint8_t x2196 = UINT8_MAX;
	static volatile uint64_t t33 = 3482569202106LLU;

	t33 = (x2193<<(x2194+(x2195%x2196)));

	if (t33 != 5403000138891264LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2281 = 8308LLU;
	static uint8_t x2284 = UINT8_MAX;
	static uint64_t t34 = 1192987LLU;

	t34 = (x2281<<(x2282+(x2283%x2284)));

	if (t34 != 2126848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2345 = 16LLU;
	uint32_t x2347 = 21U;

	t35 = (x2345<<(x2346+(x2347%x2348)));

	if (t35 != 16777216LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2409 = 364;
	int32_t x2410 = 10;
	int64_t x2411 = 1LL;
	uint64_t x2412 = UINT64_MAX;
	volatile int32_t t36 = 7665;

	t36 = (x2409<<(x2410+(x2411%x2412)));

	if (t36 != 745472) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x2533 = UINT64_MAX;
	volatile int8_t x2534 = 31;
	int8_t x2536 = 1;
	volatile uint64_t t37 = 4707071LLU;

	t37 = (x2533<<(x2534+(x2535%x2536)));

	if (t37 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2557 = 877LL;
	uint64_t x2559 = UINT64_MAX;
	int64_t x2560 = 10LL;
	int64_t t38 = -69057115LL;

	t38 = (x2557<<(x2558+(x2559%x2560)));

	if (t38 != 246853554575245312LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2773 = 1;
	volatile int64_t x2774 = -1LL;
	uint8_t x2775 = 30U;
	static volatile int32_t t39 = 26;

	t39 = (x2773<<(x2774+(x2775%x2776)));

	if (t39 != 536870912) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2921 = 300U;
	int16_t x2922 = 1;
	int16_t x2923 = -1;
	static uint32_t x2924 = UINT32_MAX;

	t40 = (x2921<<(x2922+(x2923%x2924)));

	if (t40 != 600) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2977 = 26989855LL;
	int8_t x2979 = INT8_MIN;
	volatile uint32_t x2980 = 42U;
	volatile int64_t t41 = 10988978LL;

	t41 = (x2977<<(x2978+(x2979%x2980)));

	if (t41 != 863675360LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x3038 = 0LL;
	int16_t x3040 = -1;
	static volatile int32_t t42 = -107227791;

	t42 = (x3037<<(x3038+(x3039%x3040)));

	if (t42 != 1725) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3085 = 2360838U;
	uint8_t x3086 = 1U;
	volatile uint32_t x3088 = UINT32_MAX;

	t43 = (x3085<<(x3086+(x3087%x3088)));

	if (t43 != 4721676U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3229 = UINT32_MAX;
	int16_t x3231 = INT16_MIN;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x3229<<(x3230+(x3231%x3232)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3307 = UINT16_MAX;
	uint8_t x3308 = 7U;
	volatile int32_t t45 = -18;

	t45 = (x3305<<(x3306+(x3307%x3308)));

	if (t45 != 212) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3325 = 1U;
	volatile int32_t x3326 = -1;
	uint8_t x3327 = 3U;
	int64_t x3328 = INT64_MIN;
	int32_t t46 = -339;

	t46 = (x3325<<(x3326+(x3327%x3328)));

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3345 = UINT16_MAX;
	uint32_t x3347 = 0U;
	volatile int32_t t47 = 0;

	t47 = (x3345<<(x3346+(x3347%x3348)));

	if (t47 != 524280) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x3537 = UINT8_MAX;
	static int8_t x3538 = 2;
	int16_t x3539 = INT16_MAX;
	int16_t x3540 = -1;
	volatile int32_t t48 = 315222695;

	t48 = (x3537<<(x3538+(x3539%x3540)));

	if (t48 != 1020) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3669 = UINT64_MAX;
	volatile uint8_t x3670 = 21U;
	static uint8_t x3671 = 43U;
	volatile int16_t x3672 = -1;
	uint64_t t49 = 747204451166LLU;

	t49 = (x3669<<(x3670+(x3671%x3672)));

	if (t49 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3677 = 82U;
	static int8_t x3678 = 1;
	int16_t x3679 = -1;
	uint32_t x3680 = UINT32_MAX;

	t50 = (x3677<<(x3678+(x3679%x3680)));

	if (t50 != 164) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3722 = -1;
	uint16_t x3723 = 2U;
	int16_t x3724 = INT16_MIN;

	t51 = (x3721<<(x3722+(x3723%x3724)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x3817 = UINT32_MAX;
	int16_t x3818 = 5;
	static uint8_t x3819 = 1U;
	static int8_t x3820 = INT8_MIN;
	volatile uint32_t t52 = 60185U;

	t52 = (x3817<<(x3818+(x3819%x3820)));

	if (t52 != 4294967232U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3925 = UINT32_MAX;
	static int8_t x3926 = -6;
	uint16_t x3927 = 11U;
	uint16_t x3928 = UINT16_MAX;
	static uint32_t t53 = 4U;

	t53 = (x3925<<(x3926+(x3927%x3928)));

	if (t53 != 4294967264U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x4053 = INT16_MAX;
	static volatile int16_t x4054 = 0;
	uint16_t x4055 = 7002U;
	volatile int32_t t54 = 4050674;

	t54 = (x4053<<(x4054+(x4055%x4056)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x4153 = 3;
	int32_t x4154 = 1;
	int64_t x4155 = -18983195869480LL;
	volatile int32_t x4156 = -1;
	int32_t t55 = 945480;

	t55 = (x4153<<(x4154+(x4155%x4156)));

	if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4173 = 989186LLU;
	static int16_t x4174 = 27;
	uint16_t x4175 = 0U;
	static uint64_t x4176 = 13270LLU;
	uint64_t t56 = 21431274603802LLU;

	t56 = (x4173<<(x4174+(x4175%x4176)));

	if (t56 != 132766297489408LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x4207 = -11603513LL;
	volatile int8_t x4208 = -8;
	int32_t t57 = -33720121;

	t57 = (x4205<<(x4206+(x4207%x4208)));

	if (t57 != 492) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x4209 = 1714U;
	int32_t x4210 = -1;
	int16_t x4211 = 2661;
	volatile int16_t x4212 = 6;
	volatile int32_t t58 = 0;

	t58 = (x4209<<(x4210+(x4211%x4212)));

	if (t58 != 6856) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4357 = UINT8_MAX;
	uint8_t x4358 = 0U;
	static int64_t x4359 = INT64_MAX;
	static int32_t x4360 = -1;

	t59 = (x4357<<(x4358+(x4359%x4360)));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x4478 = 5;
	static int8_t x4480 = -1;

	t60 = (x4477<<(x4478+(x4479%x4480)));

	if (t60 != 332512LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4497 = 0U;
	int64_t x4499 = -1LL;
	int32_t x4500 = 432846;

	t61 = (x4497<<(x4498+(x4499%x4500)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x4597 = 2U;
	uint8_t x4599 = 51U;
	int8_t x4600 = 24;
	int32_t t62 = -428091081;

	t62 = (x4597<<(x4598+(x4599%x4600)));

	if (t62 != 16) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4769 = INT16_MAX;
	static int32_t x4770 = -1;
	int64_t x4771 = 8LL;
	int64_t x4772 = INT64_MAX;
	static int32_t t63 = -277103;

	t63 = (x4769<<(x4770+(x4771%x4772)));

	if (t63 != 4194176) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x4889 = UINT32_MAX;
	uint32_t x4890 = 3U;
	volatile int32_t x4891 = -1;
	static uint16_t x4892 = UINT16_MAX;
	static volatile uint32_t t64 = 2184U;

	t64 = (x4889<<(x4890+(x4891%x4892)));

	if (t64 != 4294967292U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4901 = 119727605U;
	int16_t x4902 = 1;
	uint8_t x4903 = 6U;
	static uint32_t t65 = 237477U;

	t65 = (x4901<<(x4902+(x4903%x4904)));

	if (t65 != 2440231552U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4918 = 1;
	static int32_t x4919 = INT32_MIN;
	volatile int32_t x4920 = INT32_MIN;
	uint32_t t66 = 69451348U;

	t66 = (x4917<<(x4918+(x4919%x4920)));

	if (t66 != 1258U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x4949 = 4245U;
	uint64_t x4950 = UINT64_MAX;
	static uint16_t x4951 = 2U;
	int64_t x4952 = -1531277352LL;
	volatile uint32_t t67 = 126U;

	t67 = (x4949<<(x4950+(x4951%x4952)));

	if (t67 != 8490U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x5033 = 4816222756LLU;
	int16_t x5035 = INT16_MIN;
	volatile uint8_t x5036 = 31U;
	volatile uint64_t t68 = 201LLU;

	t68 = (x5033<<(x5034+(x5035%x5036)));

	if (t68 != 9632445512LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x5129 = 8687576697732670LLU;
	uint8_t x5131 = UINT8_MAX;
	int32_t x5132 = -2951;
	volatile uint64_t t69 = 1LLU;

	t69 = (x5129<<(x5130+(x5131%x5132)));

	if (t69 != 18320080334189756416LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x5233 = UINT64_MAX;
	uint32_t x5235 = 1U;
	int8_t x5236 = -1;
	uint64_t t70 = UINT64_MAX;

	t70 = (x5233<<(x5234+(x5235%x5236)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5309 = 1;
	static volatile uint8_t x5310 = 22U;
	uint32_t x5311 = 7U;
	int64_t x5312 = INT64_MIN;
	volatile int32_t t71 = 2700971;

	t71 = (x5309<<(x5310+(x5311%x5312)));

	if (t71 != 536870912) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x5373 = 14U;
	uint32_t t72 = 5329U;

	t72 = (x5373<<(x5374+(x5375%x5376)));

	if (t72 != 117440512U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5601 = 3137724963844849173LLU;
	int64_t x5602 = -1LL;
	volatile uint16_t x5603 = 4U;
	static volatile uint64_t t73 = 157453044656786579LLU;

	t73 = (x5601<<(x5602+(x5603%x5604)));

	if (t73 != 6655055637049241768LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x5633 = INT8_MAX;
	int16_t x5634 = 8;
	volatile int32_t t74 = 33057777;

	t74 = (x5633<<(x5634+(x5635%x5636)));

	if (t74 != 1016) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5665 = UINT16_MAX;
	static int8_t x5666 = 5;
	int8_t x5667 = 2;
	volatile int8_t x5668 = INT8_MIN;
	volatile int32_t t75 = -158100;

	t75 = (x5665<<(x5666+(x5667%x5668)));

	if (t75 != 8388480) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x5673 = 1U;
	uint16_t x5674 = 3U;
	int8_t x5675 = 0;
	static int32_t x5676 = -1;

	t76 = (x5673<<(x5674+(x5675%x5676)));

	if (t76 != 8) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x5689 = 0U;
	int16_t x5690 = -1;
	uint64_t x5691 = UINT64_MAX;
	volatile int32_t t77 = 1751;

	t77 = (x5689<<(x5690+(x5691%x5692)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5781 = UINT64_MAX;
	volatile int64_t x5782 = 1LL;
	int8_t x5783 = -15;
	static int16_t x5784 = -1;
	uint64_t t78 = 97001507330479LLU;

	t78 = (x5781<<(x5782+(x5783%x5784)));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5849 = 5798459705678LLU;
	static uint8_t x5850 = 17U;
	static int16_t x5851 = INT16_MIN;
	static int64_t x5852 = -1LL;
	volatile uint64_t t79 = 23327671493055223LLU;

	t79 = (x5849<<(x5850+(x5851%x5852)));

	if (t79 != 760015710542626816LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5877 = INT8_MAX;
	volatile uint32_t x5878 = 3U;
	int8_t x5879 = -1;
	volatile int64_t x5880 = INT64_MAX;
	int32_t t80 = 85858609;

	t80 = (x5877<<(x5878+(x5879%x5880)));

	if (t80 != 508) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x6189 = 2U;
	int8_t x6190 = 4;
	static volatile int32_t t81 = -56;

	t81 = (x6189<<(x6190+(x6191%x6192)));

	if (t81 != 32) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x6217 = 430U;
	int8_t x6218 = -1;
	int8_t x6219 = INT8_MAX;
	volatile int32_t x6220 = 3;
	volatile int32_t t82 = 206177;

	t82 = (x6217<<(x6218+(x6219%x6220)));

	if (t82 != 430) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x6365 = UINT32_MAX;
	uint16_t x6366 = 7U;
	static int16_t x6367 = -1;
	uint32_t t83 = 239U;

	t83 = (x6365<<(x6366+(x6367%x6368)));

	if (t83 != 4294967168U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x6549 = INT32_MAX;
	static int8_t x6551 = 1;
	static uint16_t x6552 = UINT16_MAX;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x6549<<(x6550+(x6551%x6552)));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x6641 = 39U;
	int64_t x6643 = 1059418954272004374LL;
	uint8_t x6644 = 14U;
	volatile int32_t t85 = -287443450;

	t85 = (x6641<<(x6642+(x6643%x6644)));

	if (t85 != 78) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x6661 = 1427U;
	int16_t x6662 = 7;
	volatile int8_t x6663 = INT8_MIN;
	int16_t x6664 = -2;
	static uint32_t t86 = 3U;

	t86 = (x6661<<(x6662+(x6663%x6664)));

	if (t86 != 182656U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x6693 = 5U;
	int8_t x6694 = 1;
	uint32_t x6695 = UINT32_MAX;
	int32_t x6696 = -1;

	t87 = (x6693<<(x6694+(x6695%x6696)));

	if (t87 != 10) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x6765 = 0;
	int8_t x6768 = -3;

	t88 = (x6765<<(x6766+(x6767%x6768)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x6865 = 2385LLU;
	uint32_t x6866 = 0U;
	int16_t x6867 = INT16_MAX;
	int16_t x6868 = INT16_MAX;
	static volatile uint64_t t89 = 8LLU;

	t89 = (x6865<<(x6866+(x6867%x6868)));

	if (t89 != 2385LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6893 = 10008;
	uint8_t x6894 = 4U;
	static int32_t t90 = 894863;

	t90 = (x6893<<(x6894+(x6895%x6896)));

	if (t90 != 320256) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6965 = 2;
	static int32_t x6966 = -1;
	int16_t x6967 = 1;
	int32_t x6968 = INT32_MIN;

	t91 = (x6965<<(x6966+(x6967%x6968)));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x7109 = 15U;
	int64_t x7110 = -1LL;
	uint8_t x7111 = 1U;
	int32_t t92 = 22345;

	t92 = (x7109<<(x7110+(x7111%x7112)));

	if (t92 != 15) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x7149 = 13U;
	int8_t x7150 = 1;
	int64_t x7151 = INT64_MIN;
	int64_t x7152 = INT64_MIN;

	t93 = (x7149<<(x7150+(x7151%x7152)));

	if (t93 != 26) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x7246 = 7U;
	int32_t x7247 = INT32_MIN;
	static int64_t x7248 = -1LL;
	uint32_t t94 = 1156986634U;

	t94 = (x7245<<(x7246+(x7247%x7248)));

	if (t94 != 4294967168U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x7273 = 154U;
	volatile int16_t x7274 = 18;
	int8_t x7276 = -1;
	volatile int32_t t95 = -1;

	t95 = (x7273<<(x7274+(x7275%x7276)));

	if (t95 != 40370176) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x7413 = 5U;
	int8_t x7415 = 0;
	uint32_t x7416 = UINT32_MAX;
	static volatile int32_t t96 = -337874035;

	t96 = (x7413<<(x7414+(x7415%x7416)));

	if (t96 != 40) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x7793 = UINT16_MAX;
	volatile uint16_t x7794 = 13U;
	uint64_t x7795 = 26LLU;
	uint8_t x7796 = 1U;
	int32_t t97 = -92377137;

	t97 = (x7793<<(x7794+(x7795%x7796)));

	if (t97 != 536862720) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x7805 = UINT32_MAX;
	int8_t x7806 = -5;
	int16_t x7807 = 21;
	uint32_t x7808 = 33U;
	uint32_t t98 = 2277U;

	t98 = (x7805<<(x7806+(x7807%x7808)));

	if (t98 != 4294901760U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x7837 = 966090U;
	uint8_t x7838 = 26U;
	volatile int32_t x7839 = INT32_MIN;
	int8_t x7840 = -1;
	uint32_t t99 = 436262U;

	t99 = (x7837<<(x7838+(x7839%x7840)));

	if (t99 != 671088640U) { NG(); } else { ; }
	
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

