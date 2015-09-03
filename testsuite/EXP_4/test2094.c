#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t5 = 3184;
uint32_t x982 = 21U;
int32_t t7 = -385;
uint16_t x1268 = 6U;
int64_t x1460 = INT64_MAX;
uint32_t x1617 = 1005875923U;
static volatile uint32_t t12 = 402863466U;
int8_t x1681 = INT8_MIN;
int16_t x1683 = -1;
static volatile int32_t x1714 = 25073;
volatile int16_t x1716 = -1;
int8_t x2017 = 1;
uint16_t x2018 = 1716U;
int64_t t16 = -7LL;
int8_t x2258 = 0;
volatile uint64_t t17 = 21982137030LLU;
int8_t x2266 = INT8_MAX;
int8_t x2268 = 0;
static volatile uint8_t x2317 = UINT8_MAX;
uint8_t x2319 = 108U;
uint64_t x2399 = 8LLU;
uint16_t x2454 = 1992U;
volatile uint32_t x2497 = UINT32_MAX;
int16_t x2504 = 13;
static volatile int32_t t23 = 99861981;
static int64_t x2629 = -1LL;
volatile int32_t x2632 = -1;
uint32_t x2850 = 448593U;
static uint8_t x2851 = 0U;
int16_t x2852 = 0;
uint16_t x2877 = UINT16_MAX;
uint16_t x2879 = 1U;
int8_t x2976 = -1;
uint64_t x3149 = 49007LLU;
uint32_t x3151 = UINT32_MAX;
uint64_t x3169 = UINT64_MAX;
volatile int16_t x3171 = 3;
uint64_t x3189 = 0LLU;
uint8_t x3191 = UINT8_MAX;
int8_t x3339 = -1;
volatile int64_t t34 = -16396265059455LL;
static int8_t x3708 = 1;
static uint64_t x3790 = 973709346844LLU;
int16_t x3951 = -1;
static int64_t x4342 = INT64_MAX;
volatile uint64_t t45 = 22LLU;
int8_t x4464 = -1;
volatile uint16_t x4514 = UINT16_MAX;
int32_t x4847 = 4;
volatile int32_t t49 = 1;
uint8_t x4938 = 3U;
volatile uint64_t t50 = 6LLU;
volatile int8_t x4987 = -1;
int16_t x4988 = -1;
volatile int32_t x5036 = -1;
static uint32_t x5142 = 21U;
volatile uint8_t x5144 = 10U;
uint32_t t54 = 3523811U;
int64_t x5217 = INT64_MIN;
uint8_t x5218 = 1U;
int8_t x5737 = INT8_MIN;
int64_t x5877 = INT64_MIN;
volatile uint64_t x5961 = 689209362110LLU;
static int16_t x5963 = INT16_MIN;


void f0(void) {
	uint8_t x241 = UINT8_MAX;
	int16_t x242 = INT16_MAX;
	static int64_t x243 = INT64_MIN;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t0 = 15728;

	t0 = (x241+(x242<<(x243^x244)));

	if (t0 != 33022) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x297 = 2199U;
	volatile uint8_t x298 = 34U;
	int8_t x299 = -13;
	static uint32_t x300 = UINT32_MAX;
	static uint32_t t1 = 1145917U;

	t1 = (x297+(x298<<(x299^x300)));

	if (t1 != 141463U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x389 = 1U;
	uint16_t x390 = 21836U;
	int32_t x391 = -112;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t2 = -84;

	t2 = (x389+(x390<<(x391^x392)));

	if (t2 != 1431044097) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x737 = -1LL;
	static volatile int64_t x738 = INT64_MAX;
	volatile int16_t x739 = INT16_MIN;
	volatile int16_t x740 = INT16_MIN;
	int64_t t3 = 14LL;

	t3 = (x737+(x738<<(x739^x740)));

	if (t3 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x893 = INT8_MIN;
	uint8_t x894 = UINT8_MAX;
	uint32_t x895 = UINT32_MAX;
	int8_t x896 = -1;
	static int32_t t4 = 733345959;

	t4 = (x893+(x894<<(x895^x896)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x901 = 22U;
	uint8_t x902 = UINT8_MAX;
	uint32_t x903 = UINT32_MAX;
	int32_t x904 = -1;

	t5 = (x901+(x902<<(x903^x904)));

	if (t5 != 277) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x981 = INT32_MIN;
	static int8_t x983 = -3;
	int16_t x984 = -1;
	static volatile uint32_t t6 = 1040U;

	t6 = (x981+(x982<<(x983^x984)));

	if (t6 != 2147483732U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x1081 = INT16_MAX;
	uint16_t x1082 = 60U;
	int16_t x1083 = -1;
	static int16_t x1084 = -21;

	t7 = (x1081+(x1082<<(x1083^x1084)));

	if (t7 != 62947327) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x1121 = -1;
	int64_t x1122 = 114965777LL;
	static int8_t x1123 = INT8_MAX;
	int8_t x1124 = INT8_MAX;
	volatile int64_t t8 = 3LL;

	t8 = (x1121+(x1122<<(x1123^x1124)));

	if (t8 != 114965776LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x1245 = 2U;
	int8_t x1246 = 0;
	uint8_t x1247 = 10U;
	uint16_t x1248 = 0U;
	volatile int32_t t9 = -552800828;

	t9 = (x1245+(x1246<<(x1247^x1248)));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x1265 = UINT8_MAX;
	uint32_t x1266 = 476538961U;
	uint16_t x1267 = 1U;
	volatile uint32_t t10 = 1604U;

	t10 = (x1265+(x1266<<(x1267^x1268)));

	if (t10 != 867445119U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1457 = -1LL;
	uint64_t x1458 = 6250LLU;
	int64_t x1459 = INT64_MAX;
	static volatile uint64_t t11 = 3224LLU;

	t11 = (x1457+(x1458<<(x1459^x1460)));

	if (t11 != 6249LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1618 = INT8_MAX;
	int8_t x1619 = -1;
	int16_t x1620 = -1;

	t12 = (x1617+(x1618<<(x1619^x1620)));

	if (t12 != 1005876050U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1682 = 5162766LL;
	volatile int8_t x1684 = -1;
	static volatile int64_t t13 = 343LL;

	t13 = (x1681+(x1682<<(x1683^x1684)));

	if (t13 != 5162638LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1713 = 27327U;
	static int32_t x1715 = -1;
	int32_t t14 = -1277;

	t14 = (x1713+(x1714<<(x1715^x1716)));

	if (t14 != 52400) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x2019 = 5U;
	volatile uint8_t x2020 = 1U;
	int32_t t15 = -1303;

	t15 = (x2017+(x2018<<(x2019^x2020)));

	if (t15 != 27457) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x2125 = INT64_MIN;
	uint32_t x2126 = UINT32_MAX;
	int8_t x2127 = INT8_MIN;
	int8_t x2128 = INT8_MIN;

	t16 = (x2125+(x2126<<(x2127^x2128)));

	if (t16 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x2257 = 1763091811030LLU;
	int16_t x2259 = -1;
	static int64_t x2260 = -1LL;

	t17 = (x2257+(x2258<<(x2259^x2260)));

	if (t17 != 1763091811030LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x2265 = 10725U;
	int8_t x2267 = 3;
	static volatile int32_t t18 = 968;

	t18 = (x2265+(x2266<<(x2267^x2268)));

	if (t18 != 11741) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x2318 = 900054296LLU;
	static uint8_t x2320 = 85U;
	volatile uint64_t t19 = 8039991LLU;

	t19 = (x2317+(x2318<<(x2319^x2320)));

	if (t19 != 3458764513820541183LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x2397 = 0;
	uint8_t x2398 = 0U;
	int32_t x2400 = 1;
	volatile int32_t t20 = 632696;

	t20 = (x2397+(x2398<<(x2399^x2400)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x2453 = 1;
	int64_t x2455 = -1LL;
	static int8_t x2456 = -1;
	volatile int32_t t21 = 47;

	t21 = (x2453+(x2454<<(x2455^x2456)));

	if (t21 != 1993) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x2498 = 112U;
	uint8_t x2499 = 4U;
	volatile int32_t x2500 = 0;
	volatile uint32_t t22 = 80083U;

	t22 = (x2497+(x2498<<(x2499^x2500)));

	if (t22 != 1791U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x2501 = INT8_MIN;
	uint16_t x2502 = 31U;
	volatile int8_t x2503 = 0;

	t23 = (x2501+(x2502<<(x2503^x2504)));

	if (t23 != 253824) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x2630 = 6387U;
	volatile int64_t x2631 = -1LL;
	static volatile int64_t t24 = -71347618237751104LL;

	t24 = (x2629+(x2630<<(x2631^x2632)));

	if (t24 != 6386LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x2641 = INT16_MIN;
	static uint8_t x2642 = 0U;
	int16_t x2643 = -1;
	static int64_t x2644 = -1LL;
	int32_t t25 = 51;

	t25 = (x2641+(x2642<<(x2643^x2644)));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2849 = INT32_MIN;
	uint32_t t26 = 530828U;

	t26 = (x2849+(x2850<<(x2851^x2852)));

	if (t26 != 2147932241U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2878 = INT16_MAX;
	int8_t x2880 = 0;
	int32_t t27 = -553617;

	t27 = (x2877+(x2878<<(x2879^x2880)));

	if (t27 != 131069) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2973 = 1959911226U;
	uint16_t x2974 = 0U;
	static int8_t x2975 = -1;
	volatile uint32_t t28 = 1U;

	t28 = (x2973+(x2974<<(x2975^x2976)));

	if (t28 != 1959911226U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x3093 = INT64_MIN;
	volatile uint32_t x3094 = 2222580U;
	int8_t x3095 = -1;
	volatile int32_t x3096 = -1;
	static volatile int64_t t29 = 0LL;

	t29 = (x3093+(x3094<<(x3095^x3096)));

	if (t29 != -9223372036852553228LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x3150 = 14778U;
	uint32_t x3152 = UINT32_MAX;
	uint64_t t30 = 246731LLU;

	t30 = (x3149+(x3150<<(x3151^x3152)));

	if (t30 != 63785LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x3170 = 28;
	volatile int8_t x3172 = 1;
	volatile uint64_t t31 = 136419978076168056LLU;

	t31 = (x3169+(x3170<<(x3171^x3172)));

	if (t31 != 111LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x3190 = UINT32_MAX;
	volatile uint32_t x3192 = 252U;
	volatile uint64_t t32 = 7LLU;

	t32 = (x3189+(x3190<<(x3191^x3192)));

	if (t32 != 4294967288LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x3321 = 33028051U;
	int32_t x3322 = INT32_MAX;
	int8_t x3323 = -1;
	uint32_t x3324 = UINT32_MAX;
	volatile uint32_t t33 = 147U;

	t33 = (x3321+(x3322<<(x3323^x3324)));

	if (t33 != 2180511698U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x3337 = INT64_MIN;
	uint8_t x3338 = UINT8_MAX;
	uint32_t x3340 = UINT32_MAX;

	t34 = (x3337+(x3338<<(x3339^x3340)));

	if (t34 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x3349 = INT64_MIN;
	uint64_t x3350 = UINT64_MAX;
	int16_t x3351 = 1;
	volatile int32_t x3352 = 0;
	uint64_t t35 = 75972LLU;

	t35 = (x3349+(x3350<<(x3351^x3352)));

	if (t35 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x3705 = 2U;
	volatile uint64_t x3706 = 5423798913954581LLU;
	int8_t x3707 = 0;
	static uint64_t t36 = 253512LLU;

	t36 = (x3705+(x3706<<(x3707^x3708)));

	if (t36 != 10847597827909164LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x3789 = INT64_MIN;
	static int8_t x3791 = 10;
	static int8_t x3792 = 16;
	uint64_t t37 = 18050200LLU;

	t37 = (x3789+(x3790<<(x3791^x3792)));

	if (t37 != 780923874899394560LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3797 = -1;
	int64_t x3798 = 31347LL;
	volatile int8_t x3799 = 0;
	int8_t x3800 = 2;
	volatile int64_t t38 = 1303009473340367LL;

	t38 = (x3797+(x3798<<(x3799^x3800)));

	if (t38 != 125387LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x3937 = -24;
	uint32_t x3938 = UINT32_MAX;
	int32_t x3939 = 0;
	uint8_t x3940 = 12U;
	volatile uint32_t t39 = 8053U;

	t39 = (x3937+(x3938<<(x3939^x3940)));

	if (t39 != 4294963176U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x3949 = 656;
	int16_t x3950 = INT16_MAX;
	int8_t x3952 = -6;
	volatile int32_t t40 = -295306;

	t40 = (x3949+(x3950<<(x3951^x3952)));

	if (t40 != 1049200) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x4085 = -4;
	int32_t x4086 = INT32_MAX;
	int8_t x4087 = INT8_MIN;
	int8_t x4088 = INT8_MIN;
	static volatile int32_t t41 = -195;

	t41 = (x4085+(x4086<<(x4087^x4088)));

	if (t41 != 2147483643) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x4089 = INT16_MIN;
	volatile uint64_t x4090 = UINT64_MAX;
	volatile int8_t x4091 = -3;
	static int32_t x4092 = -15;
	volatile uint64_t t42 = 10603LLU;

	t42 = (x4089+(x4090<<(x4091^x4092)));

	if (t42 != 18446744073709514752LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x4237 = 357520705;
	int8_t x4238 = INT8_MAX;
	int8_t x4239 = INT8_MAX;
	int8_t x4240 = INT8_MAX;
	int32_t t43 = 15957336;

	t43 = (x4237+(x4238<<(x4239^x4240)));

	if (t43 != 357520832) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x4341 = 249LLU;
	int64_t x4343 = -1LL;
	int8_t x4344 = -1;
	volatile uint64_t t44 = 0LLU;

	t44 = (x4341+(x4342<<(x4343^x4344)));

	if (t44 != 9223372036854776056LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x4345 = UINT64_MAX;
	static int64_t x4346 = 5LL;
	uint16_t x4347 = 21U;
	int8_t x4348 = 15;

	t45 = (x4345+(x4346<<(x4347^x4348)));

	if (t45 != 335544319LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x4461 = 7U;
	uint16_t x4462 = 364U;
	volatile int8_t x4463 = -1;
	volatile int32_t t46 = 0;

	t46 = (x4461+(x4462<<(x4463^x4464)));

	if (t46 != 371) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x4513 = 936054015666593557LLU;
	int64_t x4515 = INT64_MAX;
	int64_t x4516 = INT64_MAX;
	volatile uint64_t t47 = 55060177241LLU;

	t47 = (x4513+(x4514<<(x4515^x4516)));

	if (t47 != 936054015666659092LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x4653 = UINT8_MAX;
	static uint64_t x4654 = 4110853LLU;
	uint8_t x4655 = 2U;
	uint8_t x4656 = 6U;
	volatile uint64_t t48 = 11288374317236311LLU;

	t48 = (x4653+(x4654<<(x4655^x4656)));

	if (t48 != 65773903LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x4845 = -1;
	static uint16_t x4846 = UINT16_MAX;
	int16_t x4848 = 2;

	t49 = (x4845+(x4846<<(x4847^x4848)));

	if (t49 != 4194239) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x4937 = 117705539LLU;
	uint8_t x4939 = 0U;
	static volatile int32_t x4940 = 2;

	t50 = (x4937+(x4938<<(x4939^x4940)));

	if (t50 != 117705551LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x4985 = INT64_MIN;
	uint8_t x4986 = 0U;
	int64_t t51 = INT64_MIN;

	t51 = (x4985+(x4986<<(x4987^x4988)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x5033 = 50U;
	int8_t x5034 = 57;
	int8_t x5035 = -1;
	volatile uint32_t t52 = 1U;

	t52 = (x5033+(x5034<<(x5035^x5036)));

	if (t52 != 107U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x5121 = INT64_MIN;
	uint8_t x5122 = 59U;
	uint16_t x5123 = 23U;
	static int8_t x5124 = 0;
	volatile int64_t t53 = 4921970LL;

	t53 = (x5121+(x5122<<(x5123^x5124)));

	if (t53 != -9223372036359847936LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x5141 = INT16_MIN;
	static uint8_t x5143 = 2U;

	t54 = (x5141+(x5142<<(x5143^x5144)));

	if (t54 != 4294939904U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x5153 = INT8_MIN;
	uint16_t x5154 = 28U;
	int8_t x5155 = -2;
	int32_t x5156 = -1;
	int32_t t55 = 477;

	t55 = (x5153+(x5154<<(x5155^x5156)));

	if (t55 != -72) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x5219 = -1;
	int32_t x5220 = -1;
	int64_t t56 = 1875013696523159069LL;

	t56 = (x5217+(x5218<<(x5219^x5220)));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x5489 = 5U;
	uint16_t x5490 = 21043U;
	static volatile int64_t x5491 = -1LL;
	int64_t x5492 = -1LL;
	volatile int32_t t57 = 1518295;

	t57 = (x5489+(x5490<<(x5491^x5492)));

	if (t57 != 21048) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x5505 = 646457378LLU;
	static int64_t x5506 = INT64_MAX;
	volatile int64_t x5507 = -1LL;
	volatile uint64_t x5508 = UINT64_MAX;
	uint64_t t58 = 6632224520941411LLU;

	t58 = (x5505+(x5506<<(x5507^x5508)));

	if (t58 != 9223372037501233185LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x5738 = 11965949784LLU;
	int32_t x5739 = -6;
	uint64_t x5740 = UINT64_MAX;
	static uint64_t t59 = 7761LLU;

	t59 = (x5737+(x5738<<(x5739^x5740)));

	if (t59 != 382910392960LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x5878 = UINT16_MAX;
	int64_t x5879 = -1LL;
	volatile int16_t x5880 = -1;
	static volatile int64_t t60 = -504065LL;

	t60 = (x5877+(x5878<<(x5879^x5880)));

	if (t60 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x5937 = UINT8_MAX;
	static uint32_t x5938 = UINT32_MAX;
	int32_t x5939 = INT32_MIN;
	int32_t x5940 = INT32_MIN;
	volatile uint32_t t61 = 5716181U;

	t61 = (x5937+(x5938<<(x5939^x5940)));

	if (t61 != 254U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x5962 = UINT32_MAX;
	int16_t x5964 = INT16_MIN;
	volatile uint64_t t62 = 65343082264080834LLU;

	t62 = (x5961+(x5962<<(x5963^x5964)));

	if (t62 != 693504329405LLU) { NG(); } else { ; }
	
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


    return 0;
}

