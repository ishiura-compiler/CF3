#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 265U;
static uint64_t x3 = UINT64_MAX;
uint64_t x25 = 71LLU;
uint64_t x125 = UINT64_MAX;
int32_t x319 = INT32_MIN;
uint8_t x320 = 7U;
uint8_t x560 = 4U;
static volatile int8_t x674 = -26;
uint64_t t10 = 4240667LLU;
static int64_t x731 = -252819287343LL;
volatile uint8_t x766 = 2U;
uint64_t x767 = 2245667656175583LLU;
static volatile int64_t x927 = -1LL;
static int32_t x993 = INT32_MIN;
int16_t x1010 = INT16_MIN;
volatile uint64_t x1309 = 4729066230853LLU;
volatile uint8_t x1488 = 15U;
static volatile int16_t x1768 = 1;
uint16_t x1836 = 9U;
uint16_t x1858 = 1126U;
uint64_t t27 = 2673098424672LLU;
static volatile int16_t x1949 = -1;
int8_t x1974 = INT8_MIN;
static uint64_t x1975 = 9320304140919LLU;
volatile uint64_t t29 = 59LLU;
volatile int64_t t31 = -409459LL;
uint64_t x2062 = 44579260854342113LLU;
int32_t x2064 = 0;
static volatile int64_t t34 = -193LL;
int8_t x2222 = INT8_MIN;
int16_t x2280 = 0;
uint32_t t37 = 55990U;
static int8_t x2342 = 0;
int16_t x2516 = 0;
uint16_t x2553 = 6U;
int32_t t41 = -103062;
volatile uint32_t t43 = 319U;
int8_t x2986 = 3;
static volatile uint32_t t44 = 14533U;
uint64_t x3158 = UINT64_MAX;
uint64_t t48 = 3428794869032LLU;
volatile uint64_t x3161 = 82607454320212159LLU;
volatile int8_t x3163 = INT8_MIN;
volatile uint8_t x3260 = 1U;
int8_t x3261 = 4;
volatile uint8_t x3262 = 1U;
volatile uint16_t x3305 = UINT16_MAX;
uint16_t x3308 = 12U;
int32_t t53 = -122;
uint64_t x3378 = 72210LLU;
static int32_t x3398 = INT32_MIN;
volatile uint32_t t55 = 63435024U;
int8_t x3533 = 6;
int8_t x3578 = 6;
static uint8_t x3950 = 1U;
int32_t x4035 = INT32_MIN;
volatile uint16_t x4036 = 0U;
uint64_t t62 = 1527066790LLU;
int16_t x4179 = -2;
int64_t x4183 = 32764LL;
static volatile uint16_t x4184 = 1U;
uint8_t x4226 = UINT8_MAX;
static uint64_t x4654 = 633LLU;
uint32_t x4665 = 2478161U;
volatile uint16_t x4667 = 3404U;
uint8_t x4729 = 73U;
int16_t x4766 = -1;
volatile int16_t x4774 = -2714;
volatile int32_t t72 = -3197;
int64_t x4830 = INT64_MIN;
volatile int8_t x4875 = -3;
static int64_t x4934 = -1LL;
int16_t x5187 = INT16_MIN;
static int8_t x5392 = 1;
static volatile int64_t x5441 = INT64_MIN;
static uint16_t x5580 = 0U;
int8_t x5779 = -52;
int8_t x5825 = 0;
int8_t x5883 = INT8_MAX;
uint32_t x5961 = 1309U;
uint64_t x5963 = UINT64_MAX;
int32_t x5964 = 2;
int64_t x6029 = INT64_MAX;
static volatile uint8_t x6032 = 1U;
uint64_t x6077 = UINT64_MAX;
volatile uint16_t x6079 = UINT16_MAX;
uint16_t x6081 = 716U;
static uint64_t x6083 = 43254544053LLU;


void f0(void) {
	uint64_t x2 = 791834LLU;
	uint32_t x4 = 2U;
	volatile uint64_t t0 = 300307755LLU;

	t0 = (((x1+x2)^x3)<<x4);

	if (t0 != 18446744073706383216LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x26 = 1916;
	uint64_t x27 = 434059878026LLU;
	volatile uint8_t x28 = 1U;
	volatile uint64_t t1 = 116476653LLU;

	t1 = (((x25+x26)^x27)<<x28);

	if (t1 != 868119753362LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x113 = 8;
	int16_t x114 = INT16_MIN;
	int8_t x115 = -1;
	uint16_t x116 = 2U;
	int32_t t2 = 14;

	t2 = (((x113+x114)^x115)<<x116);

	if (t2 != 131036) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x126 = -14;
	volatile int16_t x127 = INT16_MIN;
	int16_t x128 = 1;
	uint64_t t3 = 111130LLU;

	t3 = (((x125+x126)^x127)<<x128);

	if (t3 != 65506LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x141 = 30U;
	int32_t x142 = INT32_MIN;
	volatile uint16_t x143 = 89U;
	int16_t x144 = 2;
	volatile uint32_t t4 = 76U;

	t4 = (((x141+x142)^x143)<<x144);

	if (t4 != 284U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x169 = -99912236;
	volatile uint32_t x170 = 911294U;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = 0LL;
	volatile uint64_t t5 = 74405664LLU;

	t5 = (((x169+x170)^x171)<<x172);

	if (t5 != 18446744069513585261LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x317 = INT32_MIN;
	uint8_t x318 = UINT8_MAX;
	volatile int32_t t6 = 263;

	t6 = (((x317+x318)^x319)<<x320);

	if (t6 != 32640) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x345 = 108142184020260645LLU;
	int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	volatile int8_t x348 = 41;
	static uint64_t t7 = 1032257025178098LLU;

	t7 = (((x345+x346)^x347)<<x348);

	if (t7 != 9686761212380971008LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x557 = 265U;
	uint64_t x558 = 166525LLU;
	int16_t x559 = INT16_MIN;
	volatile uint64_t t8 = 10745690859754232LLU;

	t8 = (((x557+x558)^x559)<<x560);

	if (t8 != 18446744073706453088LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x665 = -1;
	volatile uint64_t x666 = 26494231226170LLU;
	volatile int8_t x667 = -2;
	uint16_t x668 = 3U;
	static uint64_t t9 = 9LLU;

	t9 = (((x665+x666)^x667)<<x668);

	if (t9 != 18446532119859742264LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x673 = 33266467047LLU;
	int16_t x675 = -1;
	uint32_t x676 = 1U;

	t10 = (((x673+x674)^x675)<<x676);

	if (t10 != 18446744007176617572LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x729 = INT64_MIN;
	uint8_t x730 = UINT8_MAX;
	static int16_t x732 = 0;
	volatile int64_t t11 = 1LL;

	t11 = (((x729+x730)^x731)<<x732);

	if (t11 != 9223371784035488302LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x753 = INT64_MIN;
	static volatile uint64_t x754 = 6288334687976854LLU;
	int8_t x755 = INT8_MIN;
	static uint8_t x756 = 3U;
	uint64_t t12 = 8523613LLU;

	t12 = (((x753+x754)^x755)<<x756);

	if (t12 != 18396437396205736112LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x765 = UINT32_MAX;
	static uint8_t x768 = 5U;
	uint64_t t13 = 12LLU;

	t13 = (((x765+x766)^x767)<<x768);

	if (t13 != 71861364997618624LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x925 = INT8_MIN;
	int16_t x926 = INT16_MIN;
	uint16_t x928 = 12U;
	int64_t t14 = 474017070827956LL;

	t14 = (((x925+x926)^x927)<<x928);

	if (t14 != 134737920LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x994 = 973U;
	int16_t x995 = 1;
	int8_t x996 = 14;
	volatile uint32_t t15 = 953U;

	t15 = (((x993+x994)^x995)<<x996);

	if (t15 != 15925248U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1009 = 915;
	volatile int8_t x1011 = INT8_MIN;
	static int16_t x1012 = 2;
	static int32_t t16 = -882497;

	t16 = (((x1009+x1010)^x1011)<<x1012);

	if (t16 != 127052) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1121 = UINT64_MAX;
	static int8_t x1122 = -1;
	volatile int32_t x1123 = -29747;
	static uint8_t x1124 = 0U;
	volatile uint64_t t17 = 6716079808643LLU;

	t17 = (((x1121+x1122)^x1123)<<x1124);

	if (t17 != 29747LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1289 = UINT64_MAX;
	volatile int32_t x1290 = 35;
	int64_t x1291 = INT64_MIN;
	uint8_t x1292 = 3U;
	uint64_t t18 = 183201460114422499LLU;

	t18 = (((x1289+x1290)^x1291)<<x1292);

	if (t18 != 272LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1310 = -1;
	static int64_t x1311 = 142958639804085833LL;
	int16_t x1312 = 6;
	uint64_t t19 = 31LLU;

	t19 = (((x1309+x1310)^x1311)<<x1312);

	if (t19 != 9149092618957259584LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1329 = -367;
	uint32_t x1330 = UINT32_MAX;
	int32_t x1331 = 0;
	static int32_t x1332 = 3;
	static uint32_t t20 = 95U;

	t20 = (((x1329+x1330)^x1331)<<x1332);

	if (t20 != 4294964352U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1485 = INT32_MAX;
	volatile int64_t x1486 = 14968LL;
	uint32_t x1487 = UINT32_MAX;
	int64_t t21 = 15280959LL;

	t21 = (((x1485+x1486)^x1487)<<x1488);

	if (t21 != 70368253706240LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x1661 = -1;
	uint32_t x1662 = 267437956U;
	static int8_t x1663 = INT8_MAX;
	int16_t x1664 = 0;
	volatile uint32_t t22 = 0U;

	t22 = (((x1661+x1662)^x1663)<<x1664);

	if (t22 != 267438076U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1749 = 36U;
	volatile int16_t x1750 = -1;
	uint64_t x1751 = 806867688401LLU;
	static int8_t x1752 = 14;
	static volatile uint64_t t23 = 2036510860336LLU;

	t23 = (((x1749+x1750)^x1751)<<x1752);

	if (t23 != 13219720207302656LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1765 = INT16_MIN;
	uint32_t x1766 = 8934012U;
	int8_t x1767 = INT8_MIN;
	uint32_t t24 = 68U;

	t24 = (((x1765+x1766)^x1767)<<x1768);

	if (t24 != 4277165048U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1801 = UINT8_MAX;
	uint64_t x1802 = 242154549LLU;
	static volatile uint32_t x1803 = UINT32_MAX;
	uint32_t x1804 = 5U;
	uint64_t t25 = 466748054299427LLU;

	t25 = (((x1801+x1802)^x1803)<<x1804);

	if (t25 != 129689999712LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1833 = -1;
	volatile uint32_t x1834 = 93214U;
	volatile int8_t x1835 = -1;
	volatile uint32_t t26 = 51U;

	t26 = (((x1833+x1834)^x1835)<<x1836);

	if (t26 != 4247241728U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1857 = UINT8_MAX;
	uint64_t x1859 = 3128544047317946153LLU;
	static uint8_t x1860 = 15U;

	t27 = (((x1857+x1858)^x1859)<<x1860);

	if (t27 != 7574524910440415232LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1950 = 3459U;
	volatile uint16_t x1951 = 0U;
	volatile uint8_t x1952 = 3U;
	uint32_t t28 = 18182U;

	t28 = (((x1949+x1950)^x1951)<<x1952);

	if (t28 != 27664U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1973 = INT16_MIN;
	int8_t x1976 = 5;

	t29 = (((x1973+x1974)^x1975)<<x1976);

	if (t29 != 18446445823978094304LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1989 = INT16_MIN;
	uint64_t x1990 = 22496426778921705LLU;
	int8_t x1991 = INT8_MIN;
	static int8_t x1992 = 13;
	volatile uint64_t t30 = 3399916212421184LLU;

	t30 = (((x1989+x1990)^x1991)<<x1992);

	if (t30 != 176712564438016000LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2021 = 26U;
	static int64_t x2022 = INT64_MIN;
	volatile int64_t x2023 = INT64_MIN;
	uint16_t x2024 = 47U;

	t31 = (((x2021+x2022)^x2023)<<x2024);

	if (t31 != 3659174697238528LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x2061 = INT32_MIN;
	uint8_t x2063 = 1U;
	static volatile uint64_t t32 = 7933294192LLU;

	t32 = (((x2061+x2062)^x2063)<<x2064);

	if (t32 != 44579258706858464LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2085 = 52;
	int8_t x2086 = 0;
	int16_t x2087 = INT16_MAX;
	volatile int8_t x2088 = 0;
	volatile int32_t t33 = -19297;

	t33 = (((x2085+x2086)^x2087)<<x2088);

	if (t33 != 32715) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2141 = INT8_MAX;
	int64_t x2142 = INT64_MIN;
	static int64_t x2143 = INT64_MIN;
	uint8_t x2144 = 0U;

	t34 = (((x2141+x2142)^x2143)<<x2144);

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2221 = 30530099984378569LL;
	volatile uint8_t x2223 = UINT8_MAX;
	volatile uint16_t x2224 = 3U;
	volatile int64_t t35 = -6566422478121LL;

	t35 = (((x2221+x2222)^x2223)<<x2224);

	if (t35 != 244240799875028400LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2253 = 1;
	int16_t x2254 = -1;
	volatile int16_t x2255 = 0;
	volatile uint32_t x2256 = 30U;
	volatile int32_t t36 = 57;

	t36 = (((x2253+x2254)^x2255)<<x2256);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2277 = INT16_MIN;
	uint8_t x2278 = 15U;
	uint32_t x2279 = UINT32_MAX;

	t37 = (((x2277+x2278)^x2279)<<x2280);

	if (t37 != 32752U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x2333 = 201887467194LLU;
	uint32_t x2334 = UINT32_MAX;
	int8_t x2335 = -1;
	int16_t x2336 = 0;
	volatile uint64_t t38 = 45645521229868LLU;

	t38 = (((x2333+x2334)^x2335)<<x2336);

	if (t38 != 18446743867527117126LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x2341 = 2961804793LLU;
	uint32_t x2343 = 930271U;
	int8_t x2344 = 0;
	uint64_t t39 = 19731369608942LLU;

	t39 = (((x2341+x2342)^x2343)<<x2344);

	if (t39 != 2961685542LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2513 = INT32_MIN;
	int8_t x2514 = 0;
	static volatile uint64_t x2515 = 61LLU;
	static uint64_t t40 = 16407LLU;

	t40 = (((x2513+x2514)^x2515)<<x2516);

	if (t40 != 18446744071562068029LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2554 = -1;
	int8_t x2555 = 15;
	volatile uint8_t x2556 = 2U;

	t41 = (((x2553+x2554)^x2555)<<x2556);

	if (t41 != 40) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2761 = -4539;
	uint64_t x2762 = 513178713215LLU;
	volatile int8_t x2763 = 1;
	static int8_t x2764 = 0;
	uint64_t t42 = 100LLU;

	t42 = (((x2761+x2762)^x2763)<<x2764);

	if (t42 != 513178708677LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2825 = 261U;
	uint32_t x2826 = 25788U;
	int8_t x2827 = 20;
	static volatile int16_t x2828 = 7;

	t43 = (((x2825+x2826)^x2827)<<x2828);

	if (t43 != 3336832U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2985 = -1;
	uint32_t x2987 = 89325242U;
	static uint8_t x2988 = 31U;

	t44 = (((x2985+x2986)^x2987)<<x2988);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3013 = 189401110290343LL;
	volatile uint16_t x3014 = UINT16_MAX;
	volatile uint32_t x3015 = 74U;
	uint8_t x3016 = 2U;
	int64_t t45 = 109LL;

	t45 = (((x3013+x3014)^x3015)<<x3016);

	if (t45 != 757604441423792LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3077 = 88U;
	int32_t x3078 = 10866850;
	volatile uint32_t x3079 = 3U;
	volatile int8_t x3080 = 3;
	volatile uint32_t t46 = 549U;

	t46 = (((x3077+x3078)^x3079)<<x3080);

	if (t46 != 86935496U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x3101 = INT64_MIN;
	volatile int64_t x3102 = INT64_MAX;
	int64_t x3103 = -1LL;
	int8_t x3104 = 6;
	static int64_t t47 = -3541919369582174964LL;

	t47 = (((x3101+x3102)^x3103)<<x3104);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3157 = INT64_MAX;
	int32_t x3159 = INT32_MIN;
	uint8_t x3160 = 39U;

	t48 = (((x3157+x3158)^x3159)<<x3160);

	if (t48 != 18446742974197923840LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3162 = 34;
	int8_t x3164 = 0;
	uint64_t t49 = 103769568LLU;

	t49 = (((x3161+x3162)^x3163)<<x3164);

	if (t49 != 18364136619389339489LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3253 = UINT8_MAX;
	uint64_t x3254 = 218799740026LLU;
	int16_t x3255 = -1;
	uint32_t x3256 = 16U;
	uint64_t t50 = 4884251LLU;

	t50 = (((x3253+x3254)^x3255)<<x3256);

	if (t50 != 18432404813930430464LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x3257 = INT16_MIN;
	int64_t x3258 = -125215129350965901LL;
	int8_t x3259 = -4;
	static volatile int64_t t51 = 378284LL;

	t51 = (((x3257+x3258)^x3259)<<x3260);

	if (t51 != 250430258701997342LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3263 = 201417U;
	static volatile int32_t x3264 = 30;
	volatile uint32_t t52 = 2U;

	t52 = (((x3261+x3262)^x3263)<<x3264);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3306 = -1;
	uint16_t x3307 = UINT16_MAX;

	t53 = (((x3305+x3306)^x3307)<<x3308);

	if (t53 != 4096) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3377 = -332816172619629LL;
	volatile uint32_t x3379 = 3U;
	uint16_t x3380 = 9U;
	static volatile uint64_t t54 = 1334963697584813133LLU;

	t54 = (((x3377+x3378)^x3379)<<x3380);

	if (t54 != 18276342193365273600LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3397 = 50U;
	int16_t x3399 = -1;
	int8_t x3400 = 0;

	t55 = (((x3397+x3398)^x3399)<<x3400);

	if (t55 != 2147483597U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3425 = -934;
	int8_t x3426 = 1;
	volatile uint32_t x3427 = UINT32_MAX;
	static int64_t x3428 = 1LL;
	volatile uint32_t t56 = 96136U;

	t56 = (((x3425+x3426)^x3427)<<x3428);

	if (t56 != 1864U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3534 = 123383836720LL;
	volatile int16_t x3535 = 25;
	volatile uint16_t x3536 = 1U;
	volatile int64_t t57 = 21816768323432LL;

	t57 = (((x3533+x3534)^x3535)<<x3536);

	if (t57 != 246767673438LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3577 = INT16_MIN;
	uint32_t x3579 = UINT32_MAX;
	int16_t x3580 = 6;
	static uint32_t t58 = 14U;

	t58 = (((x3577+x3578)^x3579)<<x3580);

	if (t58 != 2096704U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3713 = INT16_MAX;
	uint64_t x3714 = 3182820705LLU;
	int32_t x3715 = 157;
	int8_t x3716 = 1;
	volatile uint64_t t59 = 680994545LLU;

	t59 = (((x3713+x3714)^x3715)<<x3716);

	if (t59 != 6365707258LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x3949 = 3LLU;
	static int32_t x3951 = INT32_MIN;
	uint32_t x3952 = 8U;
	volatile uint64_t t60 = 10130961715227137LLU;

	t60 = (((x3949+x3950)^x3951)<<x3952);

	if (t60 != 18446743523953738752LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x4025 = 0;
	uint32_t x4026 = 227500U;
	int16_t x4027 = INT16_MIN;
	uint8_t x4028 = 27U;
	static uint32_t t61 = 180746U;

	t61 = (((x4025+x4026)^x4027)<<x4028);

	if (t61 != 1610612736U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4033 = UINT64_MAX;
	int16_t x4034 = -1;

	t62 = (((x4033+x4034)^x4035)<<x4036);

	if (t62 != 2147483646LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x4177 = -1;
	int16_t x4178 = -1;
	uint32_t x4180 = 1U;
	int32_t t63 = -288469710;

	t63 = (((x4177+x4178)^x4179)<<x4180);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x4181 = INT8_MIN;
	uint16_t x4182 = UINT16_MAX;
	static int64_t t64 = -623446002LL;

	t64 = (((x4181+x4182)^x4183)<<x4184);

	if (t64 != 65798LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x4225 = INT8_MAX;
	static int8_t x4227 = 1;
	int16_t x4228 = 2;
	volatile int32_t t65 = 47497;

	t65 = (((x4225+x4226)^x4227)<<x4228);

	if (t65 != 1532) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x4289 = INT8_MAX;
	static uint32_t x4290 = UINT32_MAX;
	volatile int32_t x4291 = -1732435;
	uint8_t x4292 = 2U;
	uint32_t t66 = 623195U;

	t66 = (((x4289+x4290)^x4291)<<x4292);

	if (t66 != 4288037708U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4457 = -1LL;
	uint8_t x4458 = 0U;
	int8_t x4459 = -4;
	static volatile int32_t x4460 = 0;
	int64_t t67 = 2918717LL;

	t67 = (((x4457+x4458)^x4459)<<x4460);

	if (t67 != 3LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x4653 = INT8_MIN;
	static int8_t x4655 = 3;
	int8_t x4656 = 13;
	uint64_t t68 = 31382LLU;

	t68 = (((x4653+x4654)^x4655)<<x4656);

	if (t68 != 4145152LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4666 = INT8_MIN;
	uint8_t x4668 = 3U;
	volatile uint32_t t69 = 2U;

	t69 = (((x4665+x4666)^x4667)<<x4668);

	if (t69 != 19797224U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4730 = 71213341LLU;
	int32_t x4731 = INT32_MAX;
	uint16_t x4732 = 1U;
	uint64_t t70 = 8445822LLU;

	t70 = (((x4729+x4730)^x4731)<<x4732);

	if (t70 != 4152540466LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4765 = UINT16_MAX;
	uint64_t x4767 = UINT64_MAX;
	volatile uint8_t x4768 = 16U;
	uint64_t t71 = 25471406757487LLU;

	t71 = (((x4765+x4766)^x4767)<<x4768);

	if (t71 != 18446744069414649856LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4773 = UINT8_MAX;
	int8_t x4775 = -11;
	int16_t x4776 = 1;

	t72 = (((x4773+x4774)^x4775)<<x4776);

	if (t72 != 4896) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x4829 = INT64_MAX;
	int8_t x4831 = INT8_MIN;
	static uint8_t x4832 = 12U;
	int64_t t73 = 19671210349LL;

	t73 = (((x4829+x4830)^x4831)<<x4832);

	if (t73 != 520192LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4873 = 5857720658627312LLU;
	int8_t x4874 = -1;
	int16_t x4876 = 7;
	uint64_t t74 = 11LLU;

	t74 = (((x4873+x4874)^x4875)<<x4876);

	if (t74 != 17696955829405255936LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4933 = -1LL;
	int8_t x4935 = -1;
	static int16_t x4936 = 0;
	volatile int64_t t75 = 837204LL;

	t75 = (((x4933+x4934)^x4935)<<x4936);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5105 = -25;
	static int8_t x5106 = INT8_MAX;
	volatile uint64_t x5107 = 61286205312550LLU;
	uint16_t x5108 = 3U;
	volatile uint64_t t76 = 258LLU;

	t76 = (((x5105+x5106)^x5107)<<x5108);

	if (t76 != 490289642500608LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5185 = UINT64_MAX;
	static volatile int16_t x5186 = -1;
	volatile int8_t x5188 = 27;
	uint64_t t77 = 864988572470775928LLU;

	t77 = (((x5185+x5186)^x5187)<<x5188);

	if (t77 != 4397778075648LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5389 = INT16_MIN;
	uint64_t x5390 = 13489505962921LLU;
	volatile uint64_t x5391 = 9257575721189393LLU;
	volatile uint64_t t78 = 43037032593LLU;

	t78 = (((x5389+x5390)^x5391)<<x5392);

	if (t78 != 18542057434158960LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5442 = 929524477691525677LLU;
	volatile uint32_t x5443 = 134127671U;
	static int8_t x5444 = 2;
	static volatile uint64_t t79 = 1381084LLU;

	t79 = (((x5441+x5442)^x5443)<<x5444);

	if (t79 != 3718097910386092136LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x5505 = 4826;
	uint64_t x5506 = 1039625500LLU;
	int64_t x5507 = -14LL;
	uint8_t x5508 = 1U;
	volatile uint64_t t80 = 10085083446129891LLU;

	t80 = (((x5505+x5506)^x5507)<<x5508);

	if (t80 != 18446744071630290952LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5525 = -199191249LL;
	int32_t x5526 = -113284994;
	volatile int32_t x5527 = -14;
	uint8_t x5528 = 3U;
	int64_t t81 = 462869691166LL;

	t81 = (((x5525+x5526)^x5527)<<x5528);

	if (t81 != 2499810040LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5541 = 81649513412233068LLU;
	int32_t x5542 = INT32_MIN;
	volatile int32_t x5543 = 51531924;
	static uint8_t x5544 = 10U;
	volatile uint64_t t82 = 3322395LLU;

	t82 = (((x5541+x5542)^x5543)<<x5544);

	if (t82 != 9822123189954666496LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5545 = 5097LLU;
	int8_t x5546 = -1;
	volatile uint32_t x5547 = 90064135U;
	int64_t x5548 = 2LL;
	uint64_t t83 = 460487849999728898LLU;

	t83 = (((x5545+x5546)^x5547)<<x5548);

	if (t83 != 360274876LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5565 = -36526452;
	volatile int16_t x5566 = -2;
	int16_t x5567 = INT16_MIN;
	volatile int16_t x5568 = 0;
	static volatile int32_t t84 = -389714;

	t84 = (((x5565+x5566)^x5567)<<x5568);

	if (t84 != 36513418) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5577 = 2838165;
	int8_t x5578 = INT8_MIN;
	static uint8_t x5579 = UINT8_MAX;
	int32_t t85 = -5698;

	t85 = (((x5577+x5578)^x5579)<<x5580);

	if (t85 != 2838250) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x5641 = 295590U;
	int32_t x5642 = INT32_MIN;
	int32_t x5643 = INT32_MIN;
	static volatile int64_t x5644 = 8LL;
	uint32_t t86 = 996U;

	t86 = (((x5641+x5642)^x5643)<<x5644);

	if (t86 != 75671040U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5777 = 4438333U;
	int8_t x5778 = -1;
	volatile int8_t x5780 = 1;
	static volatile uint32_t t87 = 3983552U;

	t87 = (((x5777+x5778)^x5779)<<x5780);

	if (t87 != 4286090720U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5801 = UINT8_MAX;
	volatile uint32_t x5802 = 659U;
	int8_t x5803 = INT8_MIN;
	volatile int32_t x5804 = 0;
	static volatile uint32_t t88 = 17U;

	t88 = (((x5801+x5802)^x5803)<<x5804);

	if (t88 != 4294966290U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5809 = INT8_MIN;
	uint32_t x5810 = 4U;
	uint16_t x5811 = 31U;
	uint8_t x5812 = 1U;
	volatile uint32_t t89 = 478734059U;

	t89 = (((x5809+x5810)^x5811)<<x5812);

	if (t89 != 4294967094U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5821 = INT32_MIN;
	int8_t x5822 = INT8_MAX;
	volatile int32_t x5823 = INT32_MIN;
	volatile uint32_t x5824 = 4U;
	static int32_t t90 = 3;

	t90 = (((x5821+x5822)^x5823)<<x5824);

	if (t90 != 2032) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5826 = INT8_MIN;
	uint32_t x5827 = 28240U;
	volatile uint8_t x5828 = 6U;
	volatile uint32_t t91 = 32557U;

	t91 = (((x5825+x5826)^x5827)<<x5828);

	if (t91 != 4293161984U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5881 = 22U;
	int8_t x5882 = -9;
	int8_t x5884 = 6;
	int32_t t92 = 2;

	t92 = (((x5881+x5882)^x5883)<<x5884);

	if (t92 != 7296) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5949 = 34060LLU;
	int64_t x5950 = INT64_MAX;
	volatile uint32_t x5951 = 9U;
	int8_t x5952 = 28;
	uint64_t t93 = 40520462194LLU;

	t93 = (((x5949+x5950)^x5951)<<x5952);

	if (t93 != 9140227276800LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5957 = -1;
	int64_t x5958 = -1LL;
	static int16_t x5959 = -1;
	uint8_t x5960 = 0U;
	int64_t t94 = 162628LL;

	t94 = (((x5957+x5958)^x5959)<<x5960);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5962 = INT64_MIN;
	uint64_t t95 = 1132219422700LLU;

	t95 = (((x5961+x5962)^x5963)<<x5964);

	if (t95 != 18446744073709546376LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x6030 = INT8_MIN;
	static volatile int64_t x6031 = INT64_MAX;
	static int64_t t96 = 2475771347457LL;

	t96 = (((x6029+x6030)^x6031)<<x6032);

	if (t96 != 256LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6078 = -8454256277341451LL;
	uint8_t x6080 = 2U;
	uint64_t t97 = 3427434602LLU;

	t97 = (((x6077+x6078)^x6079)<<x6080);

	if (t97 != 18412927048600065068LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6082 = UINT8_MAX;
	uint8_t x6084 = 26U;
	volatile uint64_t t98 = 40856695468554224LLU;

	t98 = (((x6081+x6082)^x6083)<<x6084);

	if (t98 != 2902763293363929088LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6137 = -7;
	static volatile uint64_t x6138 = UINT64_MAX;
	uint16_t x6139 = 0U;
	uint8_t x6140 = 0U;
	uint64_t t99 = 4222438011LLU;

	t99 = (((x6137+x6138)^x6139)<<x6140);

	if (t99 != 18446744073709551608LLU) { NG(); } else { ; }
	
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

