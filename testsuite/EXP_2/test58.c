#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x103 = -1;
uint32_t x123 = 1208514U;
uint64_t t2 = 2729690834526007LLU;
uint8_t x203 = 0U;
int32_t x217 = -6750;
uint32_t x218 = 359305U;
volatile int8_t x219 = -1;
volatile uint32_t t5 = 2359U;
int8_t x318 = INT8_MIN;
int16_t x319 = 0;
static volatile int32_t t7 = -6061;
static uint32_t x354 = 266034U;
uint16_t x362 = 1786U;
int32_t t10 = -7;
int64_t x443 = INT64_MIN;
volatile uint64_t x502 = 29140837671585LLU;
volatile uint64_t t20 = 431488206LLU;
uint32_t t21 = 6U;
int32_t x815 = -682;
volatile int64_t x882 = INT64_MIN;
uint32_t x884 = 7U;
static int32_t x966 = -1;
static uint16_t x967 = UINT16_MAX;
int32_t x1023 = INT32_MAX;
uint64_t x1055 = UINT64_MAX;
static uint64_t t28 = 14020242973255LLU;
int16_t x1167 = INT16_MAX;
uint32_t t30 = 201U;
static uint64_t x1206 = 1238287711257LLU;
uint8_t x1212 = 0U;
static int16_t x1483 = INT16_MIN;
uint64_t x1509 = UINT64_MAX;
static int8_t x1573 = INT8_MAX;
int32_t t38 = 301834;
volatile uint64_t x1602 = 2155466509806728LLU;
static int16_t x1744 = 1;
volatile uint8_t x1836 = 1U;
int16_t x1887 = INT16_MIN;
uint32_t t43 = 2891140U;
volatile uint32_t x1959 = UINT32_MAX;
uint16_t x2081 = UINT16_MAX;
static int32_t x2082 = INT32_MIN;
static uint16_t x2084 = 0U;
uint16_t x2088 = 1U;
uint64_t x2142 = 361111503846464786LLU;
uint64_t t51 = 79100080731LLU;
int16_t x2236 = 22;
int32_t x2325 = -1;
uint32_t x2326 = 2015508U;
uint64_t x2344 = 16LLU;
static uint8_t x2441 = UINT8_MAX;
int16_t x2485 = INT16_MIN;
static int8_t x2574 = INT8_MIN;
int16_t x2795 = -1;
uint64_t t64 = 2810667LLU;
volatile int8_t x2825 = -1;
uint8_t x2828 = 16U;
int8_t x2913 = 14;
static int16_t x2916 = 0;
static int16_t x2931 = INT16_MIN;
static int8_t x2984 = 0;
uint8_t x3064 = 6U;
static uint32_t t72 = 771643U;
volatile int64_t x3139 = -1LL;
uint64_t x3142 = 54525199468LLU;
int16_t x3143 = INT16_MIN;
static int32_t x3159 = INT32_MIN;
uint16_t x3160 = 2U;
int8_t x3262 = -1;
uint64_t x3415 = UINT64_MAX;
int32_t x3505 = 58041;
volatile uint8_t x3508 = 1U;
int64_t t78 = 339333LL;
uint16_t x3513 = UINT16_MAX;
int32_t x3514 = -1;
int32_t x3515 = 2850;
int16_t x3561 = -1;
int16_t x3562 = -3536;
uint16_t x3564 = 37U;
uint64_t t80 = 10807LLU;
volatile int8_t x3587 = INT8_MIN;
uint32_t x3602 = 350U;
uint64_t x3603 = 768235637527110LLU;
uint16_t x3604 = 10U;
volatile uint64_t t83 = 10962LLU;
uint8_t x3807 = UINT8_MAX;
int16_t x3810 = INT16_MIN;
volatile uint16_t x3813 = UINT16_MAX;
uint32_t x3905 = UINT32_MAX;
static uint64_t x3961 = 35075669628327716LLU;
static volatile int16_t x3963 = -1;
int8_t x3978 = 3;
int64_t t90 = -2411928667LL;
uint64_t t91 = 11028390520LLU;
static volatile int16_t x4087 = 1;
uint64_t t93 = 3962081491537LLU;
volatile uint16_t x4117 = 4138U;
int32_t x4265 = -1;
uint32_t x4267 = UINT32_MAX;
int64_t x4268 = 17LL;
uint64_t x4287 = UINT64_MAX;
volatile int32_t x4407 = -2960576;
static uint16_t x4468 = 1U;
int32_t t99 = -193;


void f0(void) {
	uint16_t x101 = 0U;
	volatile uint16_t x102 = 352U;
	int8_t x104 = 7;
	int32_t t0 = 125;

	t0 = ((x101%(x102+x103))<<x104);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x121 = -1;
	uint32_t x122 = 404858U;
	uint8_t x124 = 1U;
	static volatile uint32_t t1 = 2U;

	t1 = ((x121%(x122+x123))<<x124);

	if (t1 != 342062U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	uint64_t x131 = UINT64_MAX;
	uint16_t x132 = 25U;

	t2 = ((x129%(x130+x131))<<x132);

	if (t2 != 18374686479705178112LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x173 = 499742;
	static int32_t x174 = 951;
	int8_t x175 = 0;
	uint32_t x176 = 5U;
	static volatile int32_t t3 = 133917085;

	t3 = ((x173%(x174+x175))<<x176);

	if (t3 != 14944) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x201 = UINT16_MAX;
	static int16_t x202 = -1;
	int16_t x204 = 0;
	static int32_t t4 = -192444;

	t4 = ((x201%(x202+x203))<<x204);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x220 = 1;

	t5 = ((x217%(x218+x219))<<x220);

	if (t5 != 399668U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x317 = 1U;
	uint16_t x320 = 0U;
	volatile int32_t t6 = -103361220;

	t6 = ((x317%(x318+x319))<<x320);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x325 = INT16_MAX;
	int32_t x326 = INT32_MIN;
	static uint8_t x327 = UINT8_MAX;
	int8_t x328 = 7;

	t7 = ((x325%(x326+x327))<<x328);

	if (t7 != 4194176) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x353 = 38;
	static int64_t x355 = -1906559111LL;
	volatile uint32_t x356 = 12U;
	int64_t t8 = 12675189026LL;

	t8 = ((x353%(x354+x355))<<x356);

	if (t8 != 155648LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x361 = -115764120;
	uint32_t x363 = 120156683U;
	int8_t x364 = 3;
	volatile uint32_t t9 = 58U;

	t9 = ((x361%(x362+x363))<<x364);

	if (t9 != 750521840U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x433 = 3;
	int8_t x434 = INT8_MIN;
	uint16_t x435 = 728U;
	static volatile int8_t x436 = 5;

	t10 = ((x433%(x434+x435))<<x436);

	if (t10 != 96) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x441 = UINT64_MAX;
	static uint8_t x442 = 0U;
	int8_t x444 = 3;
	volatile uint64_t t11 = 1814105455LLU;

	t11 = ((x441%(x442+x443))<<x444);

	if (t11 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x453 = 7232669;
	int64_t x454 = INT64_MIN;
	volatile uint64_t x455 = 4816LLU;
	volatile uint8_t x456 = 12U;
	volatile uint64_t t12 = 3626LLU;

	t12 = ((x453%(x454+x455))<<x456);

	if (t12 != 29625012224LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x501 = 999151521505449313LLU;
	int64_t x503 = INT64_MAX;
	uint16_t x504 = 1U;
	volatile uint64_t t13 = 207386784057LLU;

	t13 = ((x501%(x502+x503))<<x504);

	if (t13 != 1998303043010898626LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x549 = 9;
	volatile int16_t x550 = INT16_MIN;
	volatile int8_t x551 = INT8_MIN;
	volatile int8_t x552 = 0;
	volatile int32_t t14 = -3395;

	t14 = ((x549%(x550+x551))<<x552);

	if (t14 != 9) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x593 = 415U;
	static int8_t x594 = INT8_MIN;
	static int8_t x595 = INT8_MIN;
	int16_t x596 = 5;
	volatile uint32_t t15 = 1097698724U;

	t15 = ((x593%(x594+x595))<<x596);

	if (t15 != 13280U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x629 = 255384432737LLU;
	uint64_t x630 = 1031306275447LLU;
	volatile int16_t x631 = 12335;
	int8_t x632 = 0;
	static uint64_t t16 = 520429303898LLU;

	t16 = ((x629%(x630+x631))<<x632);

	if (t16 != 255384432737LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x657 = 32081U;
	volatile uint64_t x658 = 497856707530882268LLU;
	uint64_t x659 = 316LLU;
	int8_t x660 = 1;
	volatile uint64_t t17 = 104127328LLU;

	t17 = ((x657%(x658+x659))<<x660);

	if (t17 != 64162LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x705 = -9;
	int16_t x706 = -1;
	uint64_t x707 = 554641238513LLU;
	volatile uint8_t x708 = 29U;
	uint64_t t18 = 377782784223671612LLU;

	t18 = ((x705%(x706+x707))<<x708);

	if (t18 != 2962002088952856576LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x745 = 25476U;
	uint64_t x746 = UINT64_MAX;
	static int8_t x747 = INT8_MAX;
	uint8_t x748 = 3U;
	uint64_t t19 = 106752521LLU;

	t19 = ((x745%(x746+x747))<<x748);

	if (t19 != 192LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x749 = 26LLU;
	volatile int32_t x750 = -16329;
	int32_t x751 = INT32_MAX;
	int32_t x752 = 4;

	t20 = ((x749%(x750+x751))<<x752);

	if (t20 != 416LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x757 = 880U;
	int32_t x758 = INT32_MIN;
	static volatile uint8_t x759 = 0U;
	uint32_t x760 = 7U;

	t21 = ((x757%(x758+x759))<<x760);

	if (t21 != 112640U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x765 = 1;
	uint64_t x766 = 74267603LLU;
	int32_t x767 = INT32_MIN;
	int32_t x768 = 9;
	uint64_t t22 = 877094911301145247LLU;

	t22 = ((x765%(x766+x767))<<x768);

	if (t22 != 512LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x773 = 179LL;
	int16_t x774 = INT16_MIN;
	int64_t x775 = -8052799468580LL;
	uint16_t x776 = 16U;
	volatile int64_t t23 = -35023150747223LL;

	t23 = ((x773%(x774+x775))<<x776);

	if (t23 != 11730944LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x813 = UINT8_MAX;
	volatile int32_t x814 = 21300;
	static int8_t x816 = 1;
	int32_t t24 = 210791;

	t24 = ((x813%(x814+x815))<<x816);

	if (t24 != 510) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x881 = 43629880U;
	int32_t x883 = 46566785;
	int64_t t25 = 20319519LL;

	t25 = ((x881%(x882+x883))<<x884);

	if (t25 != 5584624640LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x965 = UINT32_MAX;
	int16_t x968 = 8;
	uint32_t t26 = 3084U;

	t26 = ((x965%(x966+x967))<<x968);

	if (t26 != 768U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1021 = INT16_MIN;
	static int32_t x1022 = INT32_MIN;
	static uint32_t x1024 = 2U;
	volatile int32_t t27 = -201;

	t27 = ((x1021%(x1022+x1023))<<x1024);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1053 = 232U;
	static int8_t x1054 = -1;
	volatile uint16_t x1056 = 19U;

	t28 = ((x1053%(x1054+x1055))<<x1056);

	if (t28 != 121634816LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1073 = INT16_MIN;
	int16_t x1074 = 5;
	volatile int32_t x1075 = -1;
	volatile int8_t x1076 = 18;
	int32_t t29 = 25;

	t29 = ((x1073%(x1074+x1075))<<x1076);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x1165 = 68613U;
	volatile int8_t x1166 = 20;
	uint8_t x1168 = 2U;

	t30 = ((x1165%(x1166+x1167))<<x1168);

	if (t30 != 12156U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1205 = 0;
	int32_t x1207 = 532280;
	static uint64_t x1208 = 2LLU;
	uint64_t t31 = 75268LLU;

	t31 = ((x1205%(x1206+x1207))<<x1208);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1209 = UINT16_MAX;
	int32_t x1210 = -1;
	static int8_t x1211 = -15;
	volatile int32_t t32 = 8144;

	t32 = ((x1209%(x1210+x1211))<<x1212);

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1269 = 1;
	int64_t x1270 = INT64_MIN;
	int64_t x1271 = 33461478LL;
	uint32_t x1272 = 4U;
	int64_t t33 = -57577895370261LL;

	t33 = ((x1269%(x1270+x1271))<<x1272);

	if (t33 != 16LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1369 = 0U;
	volatile int32_t x1370 = INT32_MIN;
	volatile uint32_t x1371 = UINT32_MAX;
	volatile uint8_t x1372 = 13U;
	uint32_t t34 = 411308520U;

	t34 = ((x1369%(x1370+x1371))<<x1372);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1457 = INT32_MAX;
	uint8_t x1458 = 5U;
	int32_t x1459 = INT32_MIN;
	uint8_t x1460 = 1U;
	int32_t t35 = -22141764;

	t35 = ((x1457%(x1458+x1459))<<x1460);

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1481 = 160LLU;
	int64_t x1482 = INT64_MAX;
	uint8_t x1484 = 39U;
	uint64_t t36 = 590350LLU;

	t36 = ((x1481%(x1482+x1483))<<x1484);

	if (t36 != 87960930222080LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1510 = 38U;
	volatile int16_t x1511 = -1;
	static volatile uint8_t x1512 = 18U;
	uint64_t t37 = 50084174022192LLU;

	t37 = ((x1509%(x1510+x1511))<<x1512);

	if (t37 != 2883584LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1574 = UINT16_MAX;
	int32_t x1575 = -1;
	uint32_t x1576 = 7U;

	t38 = ((x1573%(x1574+x1575))<<x1576);

	if (t38 != 16256) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x1601 = INT8_MIN;
	int16_t x1603 = -1;
	static int8_t x1604 = 1;
	volatile uint64_t t39 = 55194715479770LLU;

	t39 = ((x1601%(x1602+x1603))<<x1604);

	if (t39 != 523365567163644LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x1741 = INT32_MAX;
	uint64_t x1742 = 10385745526669486LLU;
	volatile int8_t x1743 = INT8_MAX;
	uint64_t t40 = 59057203088219964LLU;

	t40 = ((x1741%(x1742+x1743))<<x1744);

	if (t40 != 4294967294LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1769 = -1;
	uint32_t x1770 = 10241U;
	volatile int8_t x1771 = INT8_MIN;
	static int32_t x1772 = 1;
	uint32_t t41 = 36990U;

	t41 = ((x1769%(x1770+x1771))<<x1772);

	if (t41 != 13068U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x1833 = UINT32_MAX;
	int16_t x1834 = INT16_MAX;
	int64_t x1835 = -411728045333135220LL;
	volatile int64_t t42 = 24702LL;

	t42 = ((x1833%(x1834+x1835))<<x1836);

	if (t42 != 8589934590LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1885 = -5;
	uint32_t x1886 = 435090485U;
	volatile int8_t x1888 = 13;

	t43 = ((x1885%(x1886+x1887))<<x1888);

	if (t43 != 3175333888U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1905 = 2U;
	int8_t x1906 = INT8_MIN;
	int32_t x1907 = -19;
	volatile uint32_t x1908 = 23U;
	volatile int32_t t44 = 2070876;

	t44 = ((x1905%(x1906+x1907))<<x1908);

	if (t44 != 16777216) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1925 = INT16_MIN;
	int32_t x1926 = -1;
	static uint64_t x1927 = UINT64_MAX;
	volatile uint16_t x1928 = 2U;
	uint64_t t45 = 2304160767LLU;

	t45 = ((x1925%(x1926+x1927))<<x1928);

	if (t45 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1957 = 14518920U;
	static uint64_t x1958 = UINT64_MAX;
	static int64_t x1960 = 3LL;
	static volatile uint64_t t46 = 0LLU;

	t46 = ((x1957%(x1958+x1959))<<x1960);

	if (t46 != 116151360LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2033 = UINT8_MAX;
	int8_t x2034 = INT8_MIN;
	static uint64_t x2035 = 4307857669851426087LLU;
	uint8_t x2036 = 2U;
	uint64_t t47 = 15LLU;

	t47 = ((x2033%(x2034+x2035))<<x2036);

	if (t47 != 1020LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2083 = INT8_MAX;
	int32_t t48 = 10723875;

	t48 = ((x2081%(x2082+x2083))<<x2084);

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x2085 = 662U;
	static volatile int64_t x2086 = -1LL;
	static uint16_t x2087 = 13171U;
	static volatile int64_t t49 = -219099330619767642LL;

	t49 = ((x2085%(x2086+x2087))<<x2088);

	if (t49 != 1324LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x2133 = 6880U;
	uint32_t x2134 = 1218492212U;
	static int8_t x2135 = INT8_MIN;
	uint32_t x2136 = 2U;
	uint32_t t50 = 96U;

	t50 = ((x2133%(x2134+x2135))<<x2136);

	if (t50 != 27520U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2141 = 16;
	int32_t x2143 = 7072801;
	uint8_t x2144 = 8U;

	t51 = ((x2141%(x2142+x2143))<<x2144);

	if (t51 != 4096LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2217 = -1;
	int32_t x2218 = -1;
	uint32_t x2219 = UINT32_MAX;
	static volatile int32_t x2220 = 1;
	volatile uint32_t t52 = 95191U;

	t52 = ((x2217%(x2218+x2219))<<x2220);

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2233 = -25;
	uint8_t x2234 = 6U;
	uint32_t x2235 = UINT32_MAX;
	uint32_t t53 = 3664U;

	t53 = ((x2233%(x2234+x2235))<<x2236);

	if (t53 != 4194304U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x2327 = -67;
	uint16_t x2328 = 23U;
	uint32_t t54 = 3970U;

	t54 = ((x2325%(x2326+x2327))<<x2328);

	if (t54 != 503316480U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2341 = UINT8_MAX;
	int64_t x2342 = 106043662LL;
	uint64_t x2343 = 2139606639507053LLU;
	static uint64_t t55 = 1358284182190343032LLU;

	t55 = ((x2341%(x2342+x2343))<<x2344);

	if (t55 != 16711680LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2442 = 2;
	int8_t x2443 = INT8_MAX;
	uint16_t x2444 = 2U;
	static int32_t t56 = -14554525;

	t56 = ((x2441%(x2442+x2443))<<x2444);

	if (t56 != 504) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2465 = INT8_MIN;
	uint32_t x2466 = 27U;
	static uint8_t x2467 = 7U;
	uint8_t x2468 = 9U;
	volatile uint32_t t57 = 2U;

	t57 = ((x2465%(x2466+x2467))<<x2468);

	if (t57 != 13312U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2486 = 253U;
	int32_t x2487 = INT32_MIN;
	static int8_t x2488 = 1;
	volatile uint32_t t58 = 401627834U;

	t58 = ((x2485%(x2486+x2487))<<x2488);

	if (t58 != 4294901254U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2573 = 73647LL;
	uint64_t x2575 = UINT64_MAX;
	uint16_t x2576 = 8U;
	uint64_t t59 = 316610851LLU;

	t59 = ((x2573%(x2574+x2575))<<x2576);

	if (t59 != 18853632LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2637 = UINT16_MAX;
	int16_t x2638 = 0;
	int64_t x2639 = INT64_MIN;
	uint8_t x2640 = 1U;
	volatile int64_t t60 = 0LL;

	t60 = ((x2637%(x2638+x2639))<<x2640);

	if (t60 != 131070LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x2693 = -104368376;
	int16_t x2694 = -12431;
	uint64_t x2695 = 1442076472336344085LLU;
	static uint8_t x2696 = 36U;
	static uint64_t t61 = 51029048LLU;

	t61 = ((x2693%(x2694+x2695))<<x2696);

	if (t61 != 3589593203386351616LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2725 = 69U;
	uint64_t x2726 = 1253LLU;
	int32_t x2727 = INT32_MAX;
	uint8_t x2728 = 0U;
	volatile uint64_t t62 = 3233LLU;

	t62 = ((x2725%(x2726+x2727))<<x2728);

	if (t62 != 69LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x2793 = 391484764876208617LLU;
	volatile int32_t x2794 = -1;
	static uint32_t x2796 = 2U;
	volatile uint64_t t63 = 2LLU;

	t63 = ((x2793%(x2794+x2795))<<x2796);

	if (t63 != 1565939059504834468LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2805 = INT16_MAX;
	static uint64_t x2806 = 1837672220050419LLU;
	int32_t x2807 = INT32_MIN;
	int8_t x2808 = 1;

	t64 = ((x2805%(x2806+x2807))<<x2808);

	if (t64 != 65534LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x2826 = UINT32_MAX;
	static uint32_t x2827 = 1092U;
	volatile uint32_t t65 = 208166U;

	t65 = ((x2825%(x2826+x2827))<<x2828);

	if (t65 != 20971520U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2849 = 12019348221LL;
	volatile int8_t x2850 = 1;
	uint16_t x2851 = 5U;
	uint8_t x2852 = 2U;
	volatile int64_t t66 = 2849908349LL;

	t66 = ((x2849%(x2850+x2851))<<x2852);

	if (t66 != 12LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x2914 = -1;
	static volatile uint8_t x2915 = UINT8_MAX;
	volatile int32_t t67 = -1;

	t67 = ((x2913%(x2914+x2915))<<x2916);

	if (t67 != 14) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2929 = 57;
	int64_t x2930 = INT64_MAX;
	uint32_t x2932 = 1U;
	int64_t t68 = -1019079LL;

	t68 = ((x2929%(x2930+x2931))<<x2932);

	if (t68 != 114LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2953 = 1;
	static volatile int8_t x2954 = INT8_MAX;
	uint64_t x2955 = 1505LLU;
	int16_t x2956 = 6;
	static uint64_t t69 = 821033325103685LLU;

	t69 = ((x2953%(x2954+x2955))<<x2956);

	if (t69 != 64LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x2981 = 4100413687094115LLU;
	volatile int16_t x2982 = -12;
	uint8_t x2983 = 0U;
	volatile uint64_t t70 = 2LLU;

	t70 = ((x2981%(x2982+x2983))<<x2984);

	if (t70 != 4100413687094115LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3001 = 2;
	int8_t x3002 = INT8_MAX;
	int8_t x3003 = -1;
	int8_t x3004 = 0;
	int32_t t71 = 1949828;

	t71 = ((x3001%(x3002+x3003))<<x3004);

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3061 = 714U;
	int32_t x3062 = INT32_MIN;
	static int8_t x3063 = 1;

	t72 = ((x3061%(x3062+x3063))<<x3064);

	if (t72 != 45696U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3137 = INT64_MIN;
	static uint8_t x3138 = 3U;
	int32_t x3140 = 1;
	static volatile int64_t t73 = -4986942LL;

	t73 = ((x3137%(x3138+x3139))<<x3140);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3141 = INT16_MIN;
	static uint32_t x3144 = 53U;
	volatile uint64_t t74 = 503738469659LLU;

	t74 = ((x3141%(x3142+x3143))<<x3144);

	if (t74 != 12898309332789100544LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3157 = 3393;
	int32_t x3158 = 1014;
	volatile int32_t t75 = -207;

	t75 = ((x3157%(x3158+x3159))<<x3160);

	if (t75 != 13572) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x3261 = UINT64_MAX;
	int16_t x3263 = 10997;
	static int16_t x3264 = 0;
	uint64_t t76 = 1479969LLU;

	t76 = ((x3261%(x3262+x3263))<<x3264);

	if (t76 != 5395LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3413 = 3;
	int8_t x3414 = -1;
	volatile uint8_t x3416 = 26U;
	uint64_t t77 = 748880170LLU;

	t77 = ((x3413%(x3414+x3415))<<x3416);

	if (t77 != 201326592LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x3506 = -1LL;
	static int16_t x3507 = -3;

	t78 = ((x3505%(x3506+x3507))<<x3508);

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x3516 = 21;
	static volatile int32_t t79 = -333;

	t79 = ((x3513%(x3514+x3515))<<x3516);

	if (t79 != 16777216) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3563 = 2754256374964LLU;

	t80 = ((x3561%(x3562+x3563))<<x3564);

	if (t80 != 16679202028806733824LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3577 = UINT16_MAX;
	int64_t x3578 = 8576803LL;
	static int16_t x3579 = INT16_MIN;
	int16_t x3580 = 7;
	static volatile int64_t t81 = -185696780893056282LL;

	t81 = ((x3577%(x3578+x3579))<<x3580);

	if (t81 != 8388480LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3585 = 36;
	int8_t x3586 = INT8_MIN;
	uint8_t x3588 = 6U;
	static int32_t t82 = 102853;

	t82 = ((x3585%(x3586+x3587))<<x3588);

	if (t82 != 2304) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x3601 = 28U;

	t83 = ((x3601%(x3602+x3603))<<x3604);

	if (t83 != 28672LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x3805 = 18U;
	int64_t x3806 = INT64_MIN;
	uint16_t x3808 = 17U;
	volatile int64_t t84 = -13387916LL;

	t84 = ((x3805%(x3806+x3807))<<x3808);

	if (t84 != 2359296LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3809 = 530950338367LLU;
	volatile uint16_t x3811 = UINT16_MAX;
	static volatile uint16_t x3812 = 59U;
	volatile uint64_t t85 = 147407LLU;

	t85 = ((x3809%(x3810+x3811))<<x3812);

	if (t85 != 1729382256910270464LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3814 = INT16_MAX;
	int8_t x3815 = -2;
	uint8_t x3816 = 5U;
	int32_t t86 = -123035;

	t86 = ((x3813%(x3814+x3815))<<x3816);

	if (t86 != 160) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3861 = 2351;
	volatile uint64_t x3862 = 16855180062889287LLU;
	uint64_t x3863 = 1141LLU;
	static uint32_t x3864 = 18U;
	volatile uint64_t t87 = 248LLU;

	t87 = ((x3861%(x3862+x3863))<<x3864);

	if (t87 != 616300544LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3906 = 171U;
	volatile uint16_t x3907 = 2U;
	volatile uint8_t x3908 = 3U;
	static volatile uint32_t t88 = 202245337U;

	t88 = ((x3905%(x3906+x3907))<<x3908);

	if (t88 != 760U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x3962 = 9050679LLU;
	uint8_t x3964 = 1U;
	uint64_t t89 = 1122846LLU;

	t89 = ((x3961%(x3962+x3963))<<x3964);

	if (t89 != 7558872LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3977 = INT64_MAX;
	volatile uint16_t x3979 = UINT16_MAX;
	static volatile int8_t x3980 = 0;

	t90 = ((x3977%(x3978+x3979))<<x3980);

	if (t90 != 7LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4013 = INT64_MIN;
	uint64_t x4014 = 1LLU;
	int16_t x4015 = 2031;
	uint16_t x4016 = 6U;

	t91 = ((x4013%(x4014+x4015))<<x4016);

	if (t91 != 8192LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4085 = 3U;
	volatile uint32_t x4086 = 7034254U;
	volatile int64_t x4088 = 3LL;
	volatile uint32_t t92 = 894U;

	t92 = ((x4085%(x4086+x4087))<<x4088);

	if (t92 != 24U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4105 = UINT16_MAX;
	uint64_t x4106 = 1604612612845481025LLU;
	static int16_t x4107 = -1;
	int16_t x4108 = 22;

	t93 = ((x4105%(x4106+x4107))<<x4108);

	if (t93 != 274873712640LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x4118 = 5178U;
	uint8_t x4119 = 3U;
	uint16_t x4120 = 10U;
	static int32_t t94 = -2133;

	t94 = ((x4117%(x4118+x4119))<<x4120);

	if (t94 != 4237312) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x4229 = INT16_MIN;
	int32_t x4230 = INT32_MIN;
	volatile uint64_t x4231 = UINT64_MAX;
	volatile int16_t x4232 = 1;
	uint64_t t95 = 1LLU;

	t95 = ((x4229%(x4230+x4231))<<x4232);

	if (t95 != 4294901762LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4266 = -1;
	static volatile uint32_t t96 = 56U;

	t96 = ((x4265%(x4266+x4267))<<x4268);

	if (t96 != 131072U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4285 = INT32_MIN;
	volatile uint16_t x4286 = UINT16_MAX;
	int16_t x4288 = 18;
	uint64_t t97 = 130LLU;

	t97 = ((x4285%(x4286+x4287))<<x4288);

	if (t97 != 3670016LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4405 = INT64_MIN;
	volatile uint64_t x4406 = 5711612793652150LLU;
	static volatile int16_t x4408 = 15;
	uint64_t t98 = 1333367690200212LLU;

	t98 = ((x4405%(x4406+x4407))<<x4408);

	if (t98 != 10662479501881376768LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x4465 = INT16_MAX;
	volatile int16_t x4466 = INT16_MAX;
	static int16_t x4467 = INT16_MIN;

	t99 = ((x4465%(x4466+x4467))<<x4468);

	if (t99 != 0) { NG(); } else { ; }
	
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

