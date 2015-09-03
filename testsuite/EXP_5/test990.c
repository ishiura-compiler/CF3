#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x597 = -7;
static volatile uint8_t x599 = 24U;
static volatile int32_t x600 = INT32_MIN;
volatile uint64_t t6 = 4348743587619LLU;
static uint8_t x907 = 0U;
int16_t x949 = INT16_MAX;
uint32_t x950 = 41291U;
uint32_t t8 = 18U;
static int8_t x1147 = 1;
int8_t x1223 = 0;
volatile uint64_t x1792 = UINT64_MAX;
int8_t x1794 = 1;
int8_t x1795 = 23;
int64_t x2013 = INT64_MAX;
int64_t t20 = 702169785LL;
int8_t x2109 = INT8_MAX;
uint64_t x2111 = 4LLU;
static uint16_t x2159 = 13U;
static volatile int64_t t23 = -6215LL;
int16_t x2343 = 1;
uint64_t t24 = 2026041594LLU;
int32_t x2448 = INT32_MAX;
uint64_t t25 = 33617077LLU;
int64_t x2458 = 453186831263LL;
volatile int64_t t26 = -472063340837LL;
static int64_t x2508 = 129605231LL;
uint64_t x2622 = 4206986LLU;
uint32_t x2624 = 24338397U;
uint64_t t28 = 80058295201093LLU;
uint8_t x2678 = UINT8_MAX;
static uint32_t x2680 = UINT32_MAX;
uint64_t t29 = 54650491267LLU;
static uint64_t x2714 = UINT64_MAX;
static int8_t x2715 = 30;
uint64_t x2825 = UINT64_MAX;
static uint64_t t31 = 188717080460944LLU;
static int8_t x2831 = 0;
volatile uint64_t t32 = 1896863771890950LLU;
static volatile int8_t x2854 = 0;
int8_t x2974 = 1;
int32_t x3285 = -1000;
static volatile uint16_t x3287 = 0U;
int64_t x3389 = -1921157127104LL;
static uint8_t x3390 = 13U;
uint16_t x3391 = 25U;
uint32_t x3392 = 4U;
volatile int32_t t39 = -231495;
int32_t x3497 = -1;
uint64_t x3546 = 1841387218LLU;
uint8_t x3547 = 4U;
uint64_t t41 = 231LLU;
uint32_t x3933 = 58664664U;
uint32_t x3934 = 788U;
static int16_t x4134 = INT16_MAX;
int64_t x4136 = INT64_MIN;
int16_t x4197 = -1;
static uint8_t x4237 = 9U;
static uint16_t x4300 = 26477U;
int16_t x4339 = 0;
uint8_t x4414 = UINT8_MAX;
uint16_t x4493 = 1U;
int8_t x4752 = -1;
static int32_t t56 = -4588211;
volatile uint16_t x4829 = 735U;
uint32_t x4838 = 1513U;
volatile int8_t x4887 = 3;
volatile uint64_t t60 = 153514365LLU;
int32_t x4936 = INT32_MAX;
uint16_t x5102 = 0U;
volatile int16_t x5219 = 3;
volatile uint32_t x5351 = 2U;
static uint32_t x5541 = UINT32_MAX;
volatile uint16_t x5575 = 3U;
int64_t x5708 = 131LL;
int64_t t73 = 452988921633LL;
uint64_t t74 = 7172736742034264437LLU;
uint8_t x5843 = 2U;
int8_t x5871 = 0;
volatile int32_t t78 = -855594547;
int64_t x6100 = INT64_MIN;
uint64_t x6182 = UINT64_MAX;
static uint8_t x6213 = 4U;
uint8_t x6215 = 15U;
int16_t x6269 = INT16_MIN;
int32_t x6272 = -1;
uint32_t x6447 = 0U;
static int64_t t86 = 1154032969685LL;
uint16_t x6485 = 3U;
uint8_t x6539 = 19U;
uint64_t t88 = 35885627408790LLU;
static uint16_t x6570 = UINT16_MAX;
uint8_t x6571 = 2U;
static volatile int32_t x6572 = -1;
static volatile uint32_t x6602 = 603U;
uint32_t x6661 = 236U;
uint8_t x6664 = 68U;
static uint32_t x6902 = 180216361U;
static int8_t x6904 = -1;
static uint32_t t93 = 45228470U;
volatile uint8_t x6943 = 0U;
uint32_t t97 = 42U;
int8_t x7267 = 0;


void f0(void) {
	int32_t x1 = -72909786;
	int8_t x2 = 2;
	volatile int8_t x3 = 7;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -1;

	t0 = (x1-((x2<<x3)|x4));

	if (t0 != -72877274) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x125 = 1772U;
	static volatile uint64_t x126 = UINT64_MAX;
	uint64_t x127 = 0LLU;
	uint8_t x128 = UINT8_MAX;
	static volatile uint64_t t1 = 6438904593LLU;

	t1 = (x125-((x126<<x127)|x128));

	if (t1 != 1773LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x221 = 4;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = 2;
	volatile uint16_t x224 = UINT16_MAX;
	volatile uint32_t t2 = 7618U;

	t2 = (x221-((x222<<x223)|x224));

	if (t2 != 5U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x577 = INT32_MAX;
	static uint64_t x578 = 2LLU;
	int64_t x579 = 1LL;
	volatile uint32_t x580 = 218345058U;
	volatile uint64_t t3 = 8064588462455LLU;

	t3 = (x577-((x578<<x579)|x580));

	if (t3 != 1929138585LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x598 = 1;
	volatile int32_t t4 = 2689568;

	t4 = (x597-((x598<<x599)|x600));

	if (t4 != 2130706425) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x637 = 60U;
	static volatile int8_t x638 = 42;
	volatile int8_t x639 = 0;
	int32_t x640 = 11;
	int32_t t5 = 840047;

	t5 = (x637-((x638<<x639)|x640));

	if (t5 != 17) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x673 = INT64_MIN;
	volatile uint64_t x674 = 14532976401LLU;
	int8_t x675 = 6;
	int64_t x676 = INT64_MIN;

	t6 = (x673-((x674<<x675)|x676));

	if (t6 != 18446743143599061952LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x905 = INT16_MIN;
	uint16_t x906 = 2009U;
	int32_t x908 = INT32_MIN;
	int32_t t7 = -2903817;

	t7 = (x905-((x906<<x907)|x908));

	if (t7 != 2147448871) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x951 = 10;
	int16_t x952 = 29;

	t8 = (x949-((x950<<x951)|x952));

	if (t8 != 4252718050U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x1005 = INT8_MIN;
	uint16_t x1006 = 1880U;
	uint32_t x1007 = 1U;
	volatile int8_t x1008 = -1;
	static int32_t t9 = -11972;

	t9 = (x1005-((x1006<<x1007)|x1008));

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x1145 = 7U;
	int8_t x1146 = 2;
	int64_t x1148 = -1LL;
	int64_t t10 = 58LL;

	t10 = (x1145-((x1146<<x1147)|x1148));

	if (t10 != 8LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x1221 = INT8_MAX;
	uint32_t x1222 = 1531632U;
	int64_t x1224 = -371LL;
	volatile int64_t t11 = 4019LL;

	t11 = (x1221-((x1222<<x1223)|x1224));

	if (t11 != 386LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x1265 = UINT32_MAX;
	uint64_t x1266 = 4190165061222933440LLU;
	int8_t x1267 = 3;
	uint32_t x1268 = UINT32_MAX;
	volatile uint64_t t12 = 119919828504600337LLU;

	t12 = (x1265-((x1266<<x1267)|x1268));

	if (t12 != 3372167660916703232LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1333 = UINT32_MAX;
	uint32_t x1334 = 12U;
	volatile uint16_t x1335 = 7U;
	int64_t x1336 = INT64_MAX;
	volatile int64_t t13 = 8LL;

	t13 = (x1333-((x1334<<x1335)|x1336));

	if (t13 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1569 = -7013845;
	static uint8_t x1570 = 1U;
	uint8_t x1571 = 1U;
	static int32_t x1572 = 193106511;
	int32_t t14 = 562543508;

	t14 = (x1569-((x1570<<x1571)|x1572));

	if (t14 != -200120356) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1789 = -1;
	static int16_t x1790 = 464;
	uint8_t x1791 = 1U;
	uint64_t t15 = 1010005345475LLU;

	t15 = (x1789-((x1790<<x1791)|x1792));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x1793 = 8049290406346LLU;
	int32_t x1796 = INT32_MAX;
	volatile uint64_t t16 = 97957851149LLU;

	t16 = (x1793-((x1794<<x1795)|x1796));

	if (t16 != 8047142922699LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1905 = -1;
	uint32_t x1906 = UINT32_MAX;
	uint16_t x1907 = 0U;
	int32_t x1908 = -1534892;
	volatile uint32_t t17 = 7U;

	t17 = (x1905-((x1906<<x1907)|x1908));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1917 = INT8_MAX;
	int16_t x1918 = INT16_MAX;
	static volatile uint8_t x1919 = 11U;
	int16_t x1920 = INT16_MIN;
	volatile int32_t t18 = 173;

	t18 = (x1917-((x1918<<x1919)|x1920));

	if (t18 != 2175) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x2014 = 26U;
	static int8_t x2015 = 17;
	volatile uint16_t x2016 = 26U;
	int64_t t19 = 1962308LL;

	t19 = (x2013-((x2014<<x2015)|x2016));

	if (t19 != 9223372036851367909LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x2077 = UINT8_MAX;
	int8_t x2078 = INT8_MAX;
	uint8_t x2079 = 1U;
	int64_t x2080 = INT64_MAX;

	t20 = (x2077-((x2078<<x2079)|x2080));

	if (t20 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x2110 = 0U;
	uint16_t x2112 = 309U;
	volatile int32_t t21 = 5234326;

	t21 = (x2109-((x2110<<x2111)|x2112));

	if (t21 != -182) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x2157 = 18U;
	volatile int8_t x2158 = 0;
	uint16_t x2160 = 7U;
	volatile int32_t t22 = 117633104;

	t22 = (x2157-((x2158<<x2159)|x2160));

	if (t22 != 11) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2313 = INT16_MIN;
	int64_t x2314 = 2203753574LL;
	uint64_t x2315 = 0LLU;
	int16_t x2316 = INT16_MIN;

	t23 = (x2313-((x2314<<x2315)|x2316));

	if (t23 != -7270LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x2341 = -1;
	volatile uint64_t x2342 = UINT64_MAX;
	volatile int32_t x2344 = INT32_MIN;

	t24 = (x2341-((x2342<<x2343)|x2344));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x2445 = INT16_MIN;
	uint64_t x2446 = 781930079274135LLU;
	uint8_t x2447 = 44U;

	t25 = (x2445-((x2446<<x2447)|x2448));

	if (t25 != 3149863316919123969LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2457 = INT32_MIN;
	int8_t x2459 = 7;
	volatile int8_t x2460 = INT8_MIN;

	t26 = (x2457-((x2458<<x2459)|x2460));

	if (t26 != -2147483520LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x2505 = 9678U;
	volatile uint64_t x2506 = 482009172LLU;
	volatile int16_t x2507 = 23;
	uint64_t t27 = 441258019LLU;

	t27 = (x2505-((x2506<<x2507)|x2508));

	if (t27 != 18442700687617197919LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2621 = INT16_MIN;
	static uint32_t x2623 = 4U;

	t28 = (x2621-((x2622<<x2623)|x2624));

	if (t28 != 18446744073618071555LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x2677 = 8LLU;
	int8_t x2679 = 1;

	t29 = (x2677-((x2678<<x2679)|x2680));

	if (t29 != 18446744069414584329LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2713 = 115383838U;
	int8_t x2716 = INT8_MIN;
	volatile uint64_t t30 = 41LLU;

	t30 = (x2713-((x2714<<x2715)|x2716));

	if (t30 != 115383966LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2826 = 4U;
	uint8_t x2827 = 1U;
	volatile int16_t x2828 = INT16_MAX;

	t31 = (x2825-((x2826<<x2827)|x2828));

	if (t31 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x2829 = 223917;
	static uint16_t x2830 = 687U;
	static uint64_t x2832 = UINT64_MAX;

	t32 = (x2829-((x2830<<x2831)|x2832));

	if (t32 != 223918LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2853 = INT16_MIN;
	uint8_t x2855 = 0U;
	int8_t x2856 = -1;
	int32_t t33 = -55184739;

	t33 = (x2853-((x2854<<x2855)|x2856));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2861 = INT32_MIN;
	static uint32_t x2862 = 577672U;
	static volatile uint8_t x2863 = 1U;
	static volatile int8_t x2864 = INT8_MAX;
	volatile uint32_t t34 = 3U;

	t34 = (x2861-((x2862<<x2863)|x2864));

	if (t34 != 2146328193U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x2973 = UINT16_MAX;
	static volatile int8_t x2975 = 8;
	uint64_t x2976 = 12LLU;
	uint64_t t35 = 4431LLU;

	t35 = (x2973-((x2974<<x2975)|x2976));

	if (t35 != 65267LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x3041 = INT64_MAX;
	volatile int16_t x3042 = INT16_MAX;
	uint8_t x3043 = 5U;
	static uint64_t x3044 = UINT64_MAX;
	static uint64_t t36 = 67746958095635LLU;

	t36 = (x3041-((x3042<<x3043)|x3044));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x3286 = 8U;
	int8_t x3288 = INT8_MAX;
	volatile int32_t t37 = 6411;

	t37 = (x3285-((x3286<<x3287)|x3288));

	if (t37 != -1127) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t t38 = 677442219534LL;

	t38 = (x3389-((x3390<<x3391)|x3392));

	if (t38 != -1921593334724LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x3433 = INT8_MIN;
	int8_t x3434 = 29;
	uint16_t x3435 = 10U;
	int16_t x3436 = INT16_MIN;

	t39 = (x3433-((x3434<<x3435)|x3436));

	if (t39 != 2944) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x3498 = 21;
	volatile int16_t x3499 = 1;
	int16_t x3500 = INT16_MIN;
	volatile int32_t t40 = 87174829;

	t40 = (x3497-((x3498<<x3499)|x3500));

	if (t40 != 32725) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x3545 = 28919396320047648LLU;
	uint32_t x3548 = 6U;

	t41 = (x3545-((x3546<<x3547)|x3548));

	if (t41 != 28919366857852154LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x3773 = 1769U;
	uint8_t x3774 = 115U;
	int8_t x3775 = 0;
	uint16_t x3776 = 477U;
	volatile uint32_t t42 = 978U;

	t42 = (x3773-((x3774<<x3775)|x3776));

	if (t42 != 1258U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x3885 = 142U;
	int32_t x3886 = INT32_MAX;
	volatile uint16_t x3887 = 0U;
	uint8_t x3888 = 3U;
	int32_t t43 = -122484931;

	t43 = (x3885-((x3886<<x3887)|x3888));

	if (t43 != -2147483505) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3935 = 2;
	int8_t x3936 = INT8_MAX;
	volatile uint32_t t44 = 3588U;

	t44 = (x3933-((x3934<<x3935)|x3936));

	if (t44 != 58661465U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x4089 = UINT16_MAX;
	uint8_t x4090 = 0U;
	uint64_t x4091 = 12LLU;
	static int64_t x4092 = -235811218322900LL;
	volatile int64_t t45 = -13931365221921LL;

	t45 = (x4089-((x4090<<x4091)|x4092));

	if (t45 != 235811218388435LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x4133 = 1975389655919511803LLU;
	int32_t x4135 = 1;
	volatile uint64_t t46 = 115219283977LLU;

	t46 = (x4133-((x4134<<x4135)|x4136));

	if (t46 != 11198761692774222077LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x4198 = UINT64_MAX;
	int8_t x4199 = 1;
	int16_t x4200 = -1;
	uint64_t t47 = 733672149368LLU;

	t47 = (x4197-((x4198<<x4199)|x4200));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x4205 = 125931684U;
	volatile uint16_t x4206 = UINT16_MAX;
	static uint8_t x4207 = 4U;
	static uint8_t x4208 = 14U;
	uint32_t t48 = 5504038U;

	t48 = (x4205-((x4206<<x4207)|x4208));

	if (t48 != 124883110U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x4238 = 1;
	volatile uint8_t x4239 = 0U;
	int16_t x4240 = 891;
	int32_t t49 = -53708;

	t49 = (x4237-((x4238<<x4239)|x4240));

	if (t49 != -882) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x4297 = INT8_MIN;
	static uint64_t x4298 = 27565LLU;
	int32_t x4299 = 8;
	volatile uint64_t t50 = 2648610860043LLU;

	t50 = (x4297-((x4298<<x4299)|x4300));

	if (t50 != 18446744073702477843LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x4333 = 1U;
	volatile uint32_t x4334 = 20U;
	uint16_t x4335 = 0U;
	volatile uint8_t x4336 = UINT8_MAX;
	volatile uint32_t t51 = 485U;

	t51 = (x4333-((x4334<<x4335)|x4336));

	if (t51 != 4294967042U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x4337 = 4U;
	uint8_t x4338 = UINT8_MAX;
	int16_t x4340 = -1;
	static int32_t t52 = -769;

	t52 = (x4337-((x4338<<x4339)|x4340));

	if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x4413 = 49U;
	uint8_t x4415 = 1U;
	int8_t x4416 = -3;
	int32_t t53 = -63683538;

	t53 = (x4413-((x4414<<x4415)|x4416));

	if (t53 != 50) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4494 = 10U;
	volatile int8_t x4495 = 27;
	int32_t x4496 = -252;
	static int32_t t54 = 1064;

	t54 = (x4493-((x4494<<x4495)|x4496));

	if (t54 != 253) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x4589 = INT64_MIN;
	uint8_t x4590 = 1U;
	static int8_t x4591 = 0;
	int64_t x4592 = -1LL;
	volatile int64_t t55 = -66244373040711983LL;

	t55 = (x4589-((x4590<<x4591)|x4592));

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x4749 = INT32_MIN;
	static volatile int16_t x4750 = INT16_MAX;
	uint16_t x4751 = 1U;

	t56 = (x4749-((x4750<<x4751)|x4752));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4765 = 54U;
	uint64_t x4766 = 83534LLU;
	uint64_t x4767 = 8LLU;
	int8_t x4768 = INT8_MAX;
	volatile uint64_t t57 = 34238168215027LLU;

	t57 = (x4765-((x4766<<x4767)|x4768));

	if (t57 != 18446744073688166839LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x4830 = 2;
	int16_t x4831 = 1;
	volatile int16_t x4832 = INT16_MAX;
	volatile int32_t t58 = 186;

	t58 = (x4829-((x4830<<x4831)|x4832));

	if (t58 != -32032) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x4837 = 25397703LL;
	volatile uint8_t x4839 = 12U;
	uint16_t x4840 = UINT16_MAX;
	static volatile int64_t t59 = -221326370939962876LL;

	t59 = (x4837-((x4838<<x4839)|x4840));

	if (t59 != 19171784LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4885 = UINT64_MAX;
	uint8_t x4886 = 2U;
	int8_t x4888 = INT8_MAX;

	t60 = (x4885-((x4886<<x4887)|x4888));

	if (t60 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x4933 = 498317;
	uint32_t x4934 = 110146U;
	volatile uint8_t x4935 = 12U;
	uint32_t t61 = 263634725U;

	t61 = (x4933-((x4934<<x4935)|x4936));

	if (t61 != 2147981966U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x5001 = INT32_MIN;
	uint16_t x5002 = 8163U;
	int8_t x5003 = 1;
	int64_t x5004 = -1LL;
	int64_t t62 = -10746LL;

	t62 = (x5001-((x5002<<x5003)|x5004));

	if (t62 != -2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x5053 = 1760458U;
	volatile uint64_t x5054 = 494416LLU;
	uint64_t x5055 = 39LLU;
	int8_t x5056 = -6;
	volatile uint64_t t63 = 443LLU;

	t63 = (x5053-((x5054<<x5055)|x5056));

	if (t63 != 1760464LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x5101 = INT64_MIN;
	static int8_t x5103 = 1;
	int16_t x5104 = -22;
	int64_t t64 = 29335LL;

	t64 = (x5101-((x5102<<x5103)|x5104));

	if (t64 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x5217 = INT16_MIN;
	uint8_t x5218 = 5U;
	int16_t x5220 = INT16_MIN;
	int32_t t65 = 1238082;

	t65 = (x5217-((x5218<<x5219)|x5220));

	if (t65 != -40) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x5265 = -1LL;
	static uint16_t x5266 = 1U;
	static uint64_t x5267 = 3LLU;
	volatile uint64_t x5268 = 1920129160005LLU;
	volatile uint64_t t66 = 24857LLU;

	t66 = (x5265-((x5266<<x5267)|x5268));

	if (t66 != 18446742153580391602LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x5269 = -1LL;
	static uint8_t x5270 = 89U;
	int16_t x5271 = 10;
	int8_t x5272 = INT8_MAX;
	volatile int64_t t67 = 504358163LL;

	t67 = (x5269-((x5270<<x5271)|x5272));

	if (t67 != -91264LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x5349 = -2539;
	volatile int16_t x5350 = 89;
	uint32_t x5352 = UINT32_MAX;
	static volatile uint32_t t68 = 3U;

	t68 = (x5349-((x5350<<x5351)|x5352));

	if (t68 != 4294964758U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x5501 = -1917;
	int8_t x5502 = INT8_MAX;
	static uint16_t x5503 = 1U;
	int32_t x5504 = -1;
	int32_t t69 = 303;

	t69 = (x5501-((x5502<<x5503)|x5504));

	if (t69 != -1916) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5542 = INT8_MAX;
	int64_t x5543 = 0LL;
	static volatile uint8_t x5544 = 1U;
	static uint32_t t70 = 229652U;

	t70 = (x5541-((x5542<<x5543)|x5544));

	if (t70 != 4294967168U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5545 = INT8_MIN;
	int32_t x5546 = INT32_MAX;
	volatile int16_t x5547 = 0;
	uint64_t x5548 = UINT64_MAX;
	volatile uint64_t t71 = 263821057977556LLU;

	t71 = (x5545-((x5546<<x5547)|x5548));

	if (t71 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5573 = -1;
	uint8_t x5574 = UINT8_MAX;
	volatile int8_t x5576 = 27;
	volatile int32_t t72 = 147530;

	t72 = (x5573-((x5574<<x5575)|x5576));

	if (t72 != -2044) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x5705 = INT16_MIN;
	uint32_t x5706 = 352U;
	int16_t x5707 = 4;

	t73 = (x5705-((x5706<<x5707)|x5708));

	if (t73 != -38531LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x5805 = INT64_MAX;
	volatile uint32_t x5806 = UINT32_MAX;
	volatile uint8_t x5807 = 19U;
	uint64_t x5808 = 1182572753115LLU;

	t74 = (x5805-((x5806<<x5807)|x5808));

	if (t74 != 9223370851444051748LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5841 = INT8_MAX;
	int32_t x5842 = 5;
	static int16_t x5844 = -16;
	int32_t t75 = 893;

	t75 = (x5841-((x5842<<x5843)|x5844));

	if (t75 != 139) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x5869 = 1LL;
	volatile uint8_t x5870 = 0U;
	volatile int8_t x5872 = INT8_MAX;
	int64_t t76 = -32297LL;

	t76 = (x5869-((x5870<<x5871)|x5872));

	if (t76 != -126LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x5917 = INT16_MIN;
	volatile uint64_t x5918 = UINT64_MAX;
	uint8_t x5919 = 14U;
	int64_t x5920 = INT64_MAX;
	volatile uint64_t t77 = 2208089LLU;

	t77 = (x5917-((x5918<<x5919)|x5920));

	if (t77 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5933 = INT16_MIN;
	uint16_t x5934 = 978U;
	static uint8_t x5935 = 3U;
	uint16_t x5936 = 308U;

	t78 = (x5933-((x5934<<x5935)|x5936));

	if (t78 != -40884) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x6097 = UINT8_MAX;
	int8_t x6098 = INT8_MAX;
	uint16_t x6099 = 3U;
	static volatile int64_t t79 = -11997027634038LL;

	t79 = (x6097-((x6098<<x6099)|x6100));

	if (t79 != 9223372036854775047LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x6137 = 0U;
	uint64_t x6138 = UINT64_MAX;
	static uint32_t x6139 = 1U;
	volatile int8_t x6140 = -1;
	volatile uint64_t t80 = 32677498152977663LLU;

	t80 = (x6137-((x6138<<x6139)|x6140));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x6181 = 121U;
	int8_t x6183 = 12;
	int64_t x6184 = INT64_MIN;
	volatile uint64_t t81 = 9LLU;

	t81 = (x6181-((x6182<<x6183)|x6184));

	if (t81 != 4217LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x6214 = 4;
	int16_t x6216 = INT16_MAX;
	static int32_t t82 = -206359507;

	t82 = (x6213-((x6214<<x6215)|x6216));

	if (t82 != -163835) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x6270 = 48;
	uint8_t x6271 = 8U;
	volatile int32_t t83 = -123989975;

	t83 = (x6269-((x6270<<x6271)|x6272));

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x6293 = -2LL;
	static volatile uint32_t x6294 = 109476U;
	static int8_t x6295 = 4;
	int32_t x6296 = INT32_MAX;
	volatile int64_t t84 = 0LL;

	t84 = (x6293-((x6294<<x6295)|x6296));

	if (t84 != -2147483649LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x6297 = 3;
	int8_t x6298 = INT8_MAX;
	uint16_t x6299 = 2U;
	static uint16_t x6300 = UINT16_MAX;
	volatile int32_t t85 = 866;

	t85 = (x6297-((x6298<<x6299)|x6300));

	if (t85 != -65532) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x6445 = INT16_MAX;
	uint16_t x6446 = 2U;
	volatile int64_t x6448 = -1LL;

	t86 = (x6445-((x6446<<x6447)|x6448));

	if (t86 != 32768LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x6486 = 3252948955427438LLU;
	volatile int32_t x6487 = 20;
	static uint64_t x6488 = UINT64_MAX;
	static uint64_t t87 = 6630938464633514LLU;

	t87 = (x6485-((x6486<<x6487)|x6488));

	if (t87 != 4LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x6537 = 12512LLU;
	volatile uint8_t x6538 = UINT8_MAX;
	volatile int8_t x6540 = 1;

	t88 = (x6537-((x6538<<x6539)|x6540));

	if (t88 != 18446744073575870687LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6569 = INT16_MAX;
	static volatile int32_t t89 = -333050662;

	t89 = (x6569-((x6570<<x6571)|x6572));

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x6601 = -1;
	int32_t x6603 = 8;
	uint64_t x6604 = UINT64_MAX;
	uint64_t t90 = 14752LLU;

	t90 = (x6601-((x6602<<x6603)|x6604));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x6662 = 54U;
	volatile uint16_t x6663 = 3U;
	volatile uint32_t t91 = 892488909U;

	t91 = (x6661-((x6662<<x6663)|x6664));

	if (t91 != 4294967032U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x6725 = UINT8_MAX;
	uint16_t x6726 = 5365U;
	uint16_t x6727 = 0U;
	int8_t x6728 = INT8_MIN;
	volatile int32_t t92 = 920663;

	t92 = (x6725-((x6726<<x6727)|x6728));

	if (t92 != 266) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x6901 = INT32_MIN;
	int16_t x6903 = 8;

	t93 = (x6901-((x6902<<x6903)|x6904));

	if (t93 != 2147483649U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6941 = INT16_MIN;
	int64_t x6942 = 5068LL;
	int32_t x6944 = 426318603;
	volatile int64_t t94 = 927547098454LL;

	t94 = (x6941-((x6942<<x6943)|x6944));

	if (t94 != -426351567LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x6949 = 1305739933332189LLU;
	static uint64_t x6950 = 4243534045722835LLU;
	int32_t x6951 = 6;
	uint8_t x6952 = 12U;
	uint64_t t95 = 973145811LLU;

	t95 = (x6949-((x6950<<x6951)|x6952));

	if (t95 != 18176463634716622353LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x7141 = UINT32_MAX;
	uint16_t x7142 = 0U;
	static uint8_t x7143 = 3U;
	int8_t x7144 = INT8_MIN;
	uint32_t t96 = 46U;

	t96 = (x7141-((x7142<<x7143)|x7144));

	if (t96 != 127U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x7181 = -1;
	uint32_t x7182 = 2378223U;
	uint64_t x7183 = 1LLU;
	uint32_t x7184 = UINT32_MAX;

	t97 = (x7181-((x7182<<x7183)|x7184));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x7265 = -1;
	volatile uint64_t x7266 = 31LLU;
	int16_t x7268 = INT16_MIN;
	static uint64_t t98 = 27734167572LLU;

	t98 = (x7265-((x7266<<x7267)|x7268));

	if (t98 != 32736LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x7297 = -1;
	volatile uint8_t x7298 = 96U;
	uint64_t x7299 = 0LLU;
	int64_t x7300 = -42948LL;
	static volatile int64_t t99 = 165289LL;

	t99 = (x7297-((x7298<<x7299)|x7300));

	if (t99 != 42883LL) { NG(); } else { ; }
	
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

