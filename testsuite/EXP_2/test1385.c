#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x37 = UINT64_MAX;
uint64_t t0 = 3778342162LLU;
static uint8_t x88 = 9U;
volatile uint64_t t2 = 61239LLU;
static volatile int16_t x113 = INT16_MAX;
int64_t x114 = -645050LL;
volatile int8_t x115 = INT8_MIN;
int32_t x273 = INT32_MAX;
int16_t x276 = 21;
volatile int16_t x402 = INT16_MAX;
int8_t x423 = 23;
static volatile int32_t t9 = 11162;
static uint8_t x480 = 9U;
int32_t x562 = 13;
volatile uint16_t x564 = 9U;
uint8_t x594 = UINT8_MAX;
int8_t x671 = 27;
int64_t x690 = INT64_MIN;
uint16_t x691 = 150U;
static uint64_t x697 = 355LLU;
int16_t x724 = 1;
volatile int32_t t20 = 2575986;
static int32_t x814 = INT32_MIN;
int64_t x815 = INT64_MIN;
int8_t x816 = 1;
volatile uint32_t t22 = 1531740U;
volatile int64_t x913 = 1971233LL;
int8_t x923 = -1;
static int8_t x924 = 3;
volatile int32_t t27 = 12;
int8_t x959 = -1;
int64_t x981 = 3908573273693LL;
int32_t x983 = INT32_MIN;
uint16_t x1021 = 802U;
int16_t x1086 = 59;
int16_t x1194 = INT16_MIN;
int8_t x1246 = INT8_MAX;
int32_t x1261 = INT32_MAX;
int16_t x1377 = -2;
static volatile int32_t t36 = -675640;
int64_t x1479 = -443LL;
int64_t x1480 = 2LL;
volatile int32_t t38 = 47;
uint16_t x1577 = 362U;
uint64_t x1737 = UINT64_MAX;
uint16_t x1740 = 20U;
static int32_t x1799 = -1;
volatile int64_t t44 = 27411310149443LL;
static int8_t x1905 = 8;
int64_t x1942 = -3216178LL;
int32_t x1944 = 24;
volatile int64_t t46 = 41LL;
int32_t t47 = 25483;
int16_t x2174 = INT16_MAX;
uint8_t x2257 = UINT8_MAX;
static int8_t x2260 = 26;
int64_t x2329 = 28283552532171906LL;
static uint8_t x2332 = 0U;
static volatile int64_t t51 = -141111857LL;
int32_t x2341 = INT32_MAX;
int8_t x2400 = 8;
int64_t x2405 = INT64_MIN;
uint64_t x2406 = UINT64_MAX;
int8_t x2407 = -1;
volatile uint32_t x2410 = 5961U;
int32_t t59 = 48623686;
static uint16_t x2536 = 7U;
volatile int32_t t60 = -1;
int16_t x2629 = INT16_MIN;
volatile uint64_t x2669 = UINT64_MAX;
uint16_t x2671 = 2U;
static int8_t x2672 = 1;
volatile int64_t x2757 = INT64_MIN;
int8_t x2758 = INT8_MAX;
uint32_t x2769 = 35537U;
static int32_t x2770 = 19;
int32_t x2772 = 0;
volatile int64_t t68 = INT64_MAX;
uint64_t x2850 = UINT64_MAX;
int64_t x2851 = INT64_MIN;
static volatile int16_t x3057 = -1;
static int16_t x3058 = 298;
static volatile uint8_t x3060 = 20U;
uint32_t x3087 = 1006641711U;
static int32_t t74 = -6676523;
int8_t x3164 = 0;
int32_t x3175 = 529;
volatile int32_t t77 = -1215;
int8_t x3326 = INT8_MAX;
volatile int64_t x3327 = -1LL;
volatile int64_t x3330 = INT64_MAX;
int8_t x3346 = INT8_MIN;
uint8_t x3348 = 1U;
volatile int16_t x3424 = 4;
static uint32_t x3429 = UINT32_MAX;
uint16_t x3431 = 321U;
int32_t t85 = -411;
static int64_t x3445 = -3345080112LL;
static volatile int16_t x3446 = INT16_MAX;
int16_t x3485 = INT16_MAX;
static uint8_t x3487 = 2U;
int64_t x3511 = INT64_MAX;
uint8_t x3512 = 18U;
static uint16_t x3520 = 0U;
static int16_t x3521 = INT16_MAX;
int64_t x3524 = 22LL;
int32_t x3537 = 3199853;
static volatile int8_t x3540 = 1;
uint32_t t92 = 381876U;
static uint32_t x3601 = 2647304U;
static int8_t x3620 = 0;
int16_t x3761 = INT16_MAX;
int64_t x3790 = INT64_MIN;
int64_t x3874 = -153653333LL;
static int8_t x3913 = 21;
volatile int8_t x3915 = INT8_MIN;


void f0(void) {
	static uint8_t x38 = 11U;
	static int32_t x39 = -1;
	volatile uint8_t x40 = 34U;

	t0 = ((x37*(x38<x39))>>x40);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x85 = -1;
	int32_t x86 = -1;
	volatile int32_t x87 = INT32_MIN;
	int32_t t1 = 23;

	t1 = ((x85*(x86<x87))>>x88);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x109 = UINT64_MAX;
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	volatile uint8_t x112 = 25U;

	t2 = ((x109*(x110<x111))>>x112);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x116 = 2U;
	static int32_t t3 = -37;

	t3 = ((x113*(x114<x115))>>x116);

	if (t3 != 8191) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = 2244274195748887974LL;
	static volatile uint8_t x236 = 1U;
	volatile int32_t t4 = -38;

	t4 = ((x233*(x234<x235))>>x236);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x274 = UINT8_MAX;
	volatile uint64_t x275 = 33172562699450851LLU;
	static int32_t t5 = -3;

	t5 = ((x273*(x274<x275))>>x276);

	if (t5 != 1023) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x401 = UINT32_MAX;
	static int32_t x403 = -1;
	volatile uint16_t x404 = 3U;
	volatile uint32_t t6 = 1271193874U;

	t6 = ((x401*(x402<x403))>>x404);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x421 = INT16_MIN;
	volatile uint64_t x422 = 1418539LLU;
	int32_t x424 = 12;
	volatile int32_t t7 = 246281026;

	t7 = ((x421*(x422<x423))>>x424);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x425 = -1;
	static int64_t x426 = 51310820036255LL;
	int8_t x427 = INT8_MIN;
	uint16_t x428 = 18U;
	volatile int32_t t8 = 115055;

	t8 = ((x425*(x426<x427))>>x428);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x473 = INT32_MAX;
	int32_t x474 = 0;
	static int8_t x475 = INT8_MIN;
	int64_t x476 = 1LL;

	t9 = ((x473*(x474<x475))>>x476);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x477 = -1;
	static int32_t x478 = 86906057;
	static volatile int8_t x479 = -1;
	static volatile int32_t t10 = 363724;

	t10 = ((x477*(x478<x479))>>x480);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x529 = 3684301136LLU;
	static volatile int16_t x530 = 14462;
	volatile uint64_t x531 = 30103784935496688LLU;
	uint8_t x532 = 5U;
	static volatile uint64_t t11 = 1151037222290387213LLU;

	t11 = ((x529*(x530<x531))>>x532);

	if (t11 != 115134410LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x561 = INT32_MAX;
	int64_t x563 = INT64_MAX;
	volatile int32_t t12 = -459413;

	t12 = ((x561*(x562<x563))>>x564);

	if (t12 != 4194303) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x593 = 1503;
	int8_t x595 = -1;
	int8_t x596 = 19;
	int32_t t13 = -362;

	t13 = ((x593*(x594<x595))>>x596);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x649 = 24U;
	uint8_t x650 = 1U;
	int32_t x651 = 23282702;
	volatile uint16_t x652 = 15U;
	static uint32_t t14 = 2U;

	t14 = ((x649*(x650<x651))>>x652);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x661 = -3096;
	volatile uint32_t x662 = UINT32_MAX;
	static uint16_t x663 = 152U;
	volatile uint32_t x664 = 1U;
	int32_t t15 = 971103;

	t15 = ((x661*(x662<x663))>>x664);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x669 = 0U;
	volatile uint64_t x670 = 522356282943LLU;
	int8_t x672 = 1;
	volatile int32_t t16 = -1966842;

	t16 = ((x669*(x670<x671))>>x672);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x689 = INT64_MAX;
	static int8_t x692 = 30;
	static int64_t t17 = -963LL;

	t17 = ((x689*(x690<x691))>>x692);

	if (t17 != 8589934591LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x698 = -215466;
	int16_t x699 = INT16_MAX;
	int8_t x700 = 0;
	volatile uint64_t t18 = 13740907294LLU;

	t18 = ((x697*(x698<x699))>>x700);

	if (t18 != 355LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x709 = UINT64_MAX;
	uint16_t x710 = UINT16_MAX;
	int32_t x711 = INT32_MAX;
	uint8_t x712 = 57U;
	volatile uint64_t t19 = 32822652LLU;

	t19 = ((x709*(x710<x711))>>x712);

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x721 = INT8_MIN;
	static uint16_t x722 = 4567U;
	static uint8_t x723 = 6U;

	t20 = ((x721*(x722<x723))>>x724);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x781 = INT32_MIN;
	static uint64_t x782 = 170412023LLU;
	uint8_t x783 = UINT8_MAX;
	int8_t x784 = 3;
	volatile int32_t t21 = 4701;

	t21 = ((x781*(x782<x783))>>x784);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x813 = 9294304U;

	t22 = ((x813*(x814<x815))>>x816);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x817 = INT64_MAX;
	uint16_t x818 = 123U;
	int64_t x819 = INT64_MIN;
	uint16_t x820 = 6U;
	volatile int64_t t23 = 380LL;

	t23 = ((x817*(x818<x819))>>x820);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x821 = 90;
	static volatile int8_t x822 = 0;
	int16_t x823 = -1;
	uint16_t x824 = 6U;
	int32_t t24 = 6;

	t24 = ((x821*(x822<x823))>>x824);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x914 = -84;
	int8_t x915 = INT8_MAX;
	uint16_t x916 = 2U;
	volatile int64_t t25 = -618047793101LL;

	t25 = ((x913*(x914<x915))>>x916);

	if (t25 != 492808LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x921 = 4988U;
	uint8_t x922 = 1U;
	int32_t t26 = 29;

	t26 = ((x921*(x922<x923))>>x924);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x953 = 132;
	volatile int8_t x954 = 29;
	int16_t x955 = 2046;
	int8_t x956 = 0;

	t27 = ((x953*(x954<x955))>>x956);

	if (t27 != 132) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x957 = -1944693;
	int64_t x958 = -1LL;
	volatile int32_t x960 = 6;
	int32_t t28 = -47444;

	t28 = ((x957*(x958<x959))>>x960);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x982 = -1;
	int32_t x984 = 4;
	volatile int64_t t29 = 54LL;

	t29 = ((x981*(x982<x983))>>x984);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1022 = 3U;
	int16_t x1023 = -15;
	uint32_t x1024 = 0U;
	volatile int32_t t30 = -13009;

	t30 = ((x1021*(x1022<x1023))>>x1024);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1085 = -1LL;
	int8_t x1087 = INT8_MIN;
	static uint8_t x1088 = 2U;
	volatile int64_t t31 = -7595LL;

	t31 = ((x1085*(x1086<x1087))>>x1088);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1193 = 199;
	static uint16_t x1195 = 227U;
	volatile int8_t x1196 = 1;
	volatile int32_t t32 = 13028;

	t32 = ((x1193*(x1194<x1195))>>x1196);

	if (t32 != 99) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1245 = UINT8_MAX;
	volatile int64_t x1247 = -2797668125LL;
	int32_t x1248 = 11;
	int32_t t33 = 40452;

	t33 = ((x1245*(x1246<x1247))>>x1248);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1262 = 15U;
	uint64_t x1263 = 1986383754129926759LLU;
	uint8_t x1264 = 11U;
	static volatile int32_t t34 = -117878;

	t34 = ((x1261*(x1262<x1263))>>x1264);

	if (t34 != 1048575) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1325 = INT16_MIN;
	static uint64_t x1326 = 247298LLU;
	uint8_t x1327 = 39U;
	uint16_t x1328 = 0U;
	int32_t t35 = 126775762;

	t35 = ((x1325*(x1326<x1327))>>x1328);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1378 = INT32_MAX;
	int32_t x1379 = 3809;
	static int32_t x1380 = 1;

	t36 = ((x1377*(x1378<x1379))>>x1380);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1461 = INT64_MIN;
	volatile uint8_t x1462 = 2U;
	int32_t x1463 = 0;
	uint8_t x1464 = 45U;
	int64_t t37 = 8262232608439LL;

	t37 = ((x1461*(x1462<x1463))>>x1464);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1477 = 223U;
	static int16_t x1478 = INT16_MIN;

	t38 = ((x1477*(x1478<x1479))>>x1480);

	if (t38 != 55) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1578 = 4730702;
	static uint64_t x1579 = 404028753LLU;
	uint8_t x1580 = 1U;
	volatile int32_t t39 = -372;

	t39 = ((x1577*(x1578<x1579))>>x1580);

	if (t39 != 181) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1669 = -1;
	volatile int16_t x1670 = -1;
	int8_t x1671 = -1;
	volatile uint16_t x1672 = 0U;
	int32_t t40 = -4;

	t40 = ((x1669*(x1670<x1671))>>x1672);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1725 = INT64_MIN;
	static volatile uint32_t x1726 = 797164U;
	int8_t x1727 = INT8_MAX;
	static volatile int8_t x1728 = 1;
	int64_t t41 = -4280543105418270LL;

	t41 = ((x1725*(x1726<x1727))>>x1728);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1738 = 9622U;
	volatile int16_t x1739 = -355;
	uint64_t t42 = 285840LLU;

	t42 = ((x1737*(x1738<x1739))>>x1740);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1797 = 8;
	static uint8_t x1798 = 11U;
	volatile uint8_t x1800 = 13U;
	int32_t t43 = -675;

	t43 = ((x1797*(x1798<x1799))>>x1800);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1897 = INT64_MIN;
	uint64_t x1898 = UINT64_MAX;
	volatile int64_t x1899 = -1LL;
	int8_t x1900 = 10;

	t44 = ((x1897*(x1898<x1899))>>x1900);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1906 = -2LL;
	static int16_t x1907 = -2563;
	volatile uint16_t x1908 = 3U;
	volatile int32_t t45 = -64888;

	t45 = ((x1905*(x1906<x1907))>>x1908);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1941 = INT64_MIN;
	static int64_t x1943 = INT64_MIN;

	t46 = ((x1941*(x1942<x1943))>>x1944);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1957 = -389;
	int64_t x1958 = 994859306756598LL;
	static int64_t x1959 = -2125297784315948LL;
	uint16_t x1960 = 26U;

	t47 = ((x1957*(x1958<x1959))>>x1960);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2057 = -1;
	int16_t x2058 = -1;
	static volatile int16_t x2059 = -1;
	uint8_t x2060 = 5U;
	static int32_t t48 = 85333;

	t48 = ((x2057*(x2058<x2059))>>x2060);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2173 = 30787259;
	int16_t x2175 = INT16_MIN;
	int8_t x2176 = 22;
	volatile int32_t t49 = 38;

	t49 = ((x2173*(x2174<x2175))>>x2176);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2258 = INT16_MIN;
	uint16_t x2259 = UINT16_MAX;
	volatile int32_t t50 = -312608852;

	t50 = ((x2257*(x2258<x2259))>>x2260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2330 = INT8_MIN;
	int16_t x2331 = 1;

	t51 = ((x2329*(x2330<x2331))>>x2332);

	if (t51 != 28283552532171906LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2333 = INT16_MIN;
	volatile int32_t x2334 = -1;
	static int16_t x2335 = -3;
	static volatile uint8_t x2336 = 15U;
	volatile int32_t t52 = 40;

	t52 = ((x2333*(x2334<x2335))>>x2336);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2337 = INT8_MIN;
	static uint64_t x2338 = 7387731700172243LLU;
	uint16_t x2339 = 2U;
	volatile int32_t x2340 = 1;
	volatile int32_t t53 = -2;

	t53 = ((x2337*(x2338<x2339))>>x2340);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x2342 = 21U;
	volatile int16_t x2343 = -1;
	uint8_t x2344 = 6U;
	volatile int32_t t54 = 177;

	t54 = ((x2341*(x2342<x2343))>>x2344);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2385 = 0LLU;
	int64_t x2386 = INT64_MIN;
	int64_t x2387 = 284969528636LL;
	int8_t x2388 = 1;
	static uint64_t t55 = 136869296971870LLU;

	t55 = ((x2385*(x2386<x2387))>>x2388);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2397 = 74755900;
	int64_t x2398 = -1LL;
	int16_t x2399 = -1;
	volatile int32_t t56 = 950;

	t56 = ((x2397*(x2398<x2399))>>x2400);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2408 = 5LLU;
	int64_t t57 = 39LL;

	t57 = ((x2405*(x2406<x2407))>>x2408);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2409 = 12U;
	uint32_t x2411 = 132333U;
	volatile int64_t x2412 = 0LL;
	int32_t t58 = -3;

	t58 = ((x2409*(x2410<x2411))>>x2412);

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x2505 = UINT16_MAX;
	int8_t x2506 = 2;
	static int32_t x2507 = INT32_MIN;
	static uint8_t x2508 = 4U;

	t59 = ((x2505*(x2506<x2507))>>x2508);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x2533 = 14;
	int16_t x2534 = INT16_MIN;
	int8_t x2535 = -1;

	t60 = ((x2533*(x2534<x2535))>>x2536);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2613 = 13313893U;
	volatile int16_t x2614 = INT16_MIN;
	volatile int16_t x2615 = INT16_MIN;
	static uint16_t x2616 = 17U;
	static volatile uint32_t t61 = 2365980U;

	t61 = ((x2613*(x2614<x2615))>>x2616);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2630 = INT16_MAX;
	volatile int8_t x2631 = INT8_MIN;
	int16_t x2632 = 31;
	int32_t t62 = 4730;

	t62 = ((x2629*(x2630<x2631))>>x2632);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2637 = 8994U;
	int64_t x2638 = INT64_MAX;
	static int16_t x2639 = INT16_MIN;
	int32_t x2640 = 5;
	uint32_t t63 = 167242U;

	t63 = ((x2637*(x2638<x2639))>>x2640);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2670 = -1LL;
	uint64_t t64 = 94422425872119053LLU;

	t64 = ((x2669*(x2670<x2671))>>x2672);

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2705 = -1;
	int32_t x2706 = -1;
	static volatile int16_t x2707 = -2;
	uint8_t x2708 = 12U;
	int32_t t65 = 10911;

	t65 = ((x2705*(x2706<x2707))>>x2708);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x2759 = -1LL;
	uint64_t x2760 = 5LLU;
	int64_t t66 = -2821LL;

	t66 = ((x2757*(x2758<x2759))>>x2760);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2771 = 1U;
	volatile uint32_t t67 = 8737139U;

	t67 = ((x2769*(x2770<x2771))>>x2772);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2813 = INT64_MAX;
	uint8_t x2814 = 32U;
	uint32_t x2815 = UINT32_MAX;
	int16_t x2816 = 0;

	t68 = ((x2813*(x2814<x2815))>>x2816);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2849 = 5;
	static uint16_t x2852 = 4U;
	volatile int32_t t69 = 8;

	t69 = ((x2849*(x2850<x2851))>>x2852);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2857 = -688;
	int8_t x2858 = 2;
	int8_t x2859 = INT8_MIN;
	int8_t x2860 = 1;
	volatile int32_t t70 = -28065125;

	t70 = ((x2857*(x2858<x2859))>>x2860);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2961 = INT64_MAX;
	int64_t x2962 = -1LL;
	int8_t x2963 = INT8_MIN;
	uint16_t x2964 = 3U;
	volatile int64_t t71 = 11707LL;

	t71 = ((x2961*(x2962<x2963))>>x2964);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2969 = -1;
	volatile uint8_t x2970 = 126U;
	uint8_t x2971 = 20U;
	int16_t x2972 = 1;
	int32_t t72 = -544;

	t72 = ((x2969*(x2970<x2971))>>x2972);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3059 = INT16_MIN;
	static volatile int32_t t73 = 170;

	t73 = ((x3057*(x3058<x3059))>>x3060);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3085 = 21185785;
	int32_t x3086 = 399;
	volatile uint8_t x3088 = 1U;

	t74 = ((x3085*(x3086<x3087))>>x3088);

	if (t74 != 10592892) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x3125 = INT16_MIN;
	int8_t x3126 = INT8_MAX;
	int16_t x3127 = INT16_MIN;
	uint8_t x3128 = 17U;
	int32_t t75 = 13883;

	t75 = ((x3125*(x3126<x3127))>>x3128);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x3161 = UINT64_MAX;
	static uint16_t x3162 = 7124U;
	static int8_t x3163 = INT8_MIN;
	volatile uint64_t t76 = 187LLU;

	t76 = ((x3161*(x3162<x3163))>>x3164);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3173 = INT8_MIN;
	volatile uint64_t x3174 = 4962531239837LLU;
	static uint16_t x3176 = 2U;

	t77 = ((x3173*(x3174<x3175))>>x3176);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x3253 = -1;
	int32_t x3254 = INT32_MAX;
	int8_t x3255 = -1;
	static int8_t x3256 = 0;
	int32_t t78 = -1;

	t78 = ((x3253*(x3254<x3255))>>x3256);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x3285 = -1LL;
	int64_t x3286 = INT64_MAX;
	int32_t x3287 = 130708785;
	int32_t x3288 = 1;
	int64_t t79 = 0LL;

	t79 = ((x3285*(x3286<x3287))>>x3288);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x3325 = 1U;
	static volatile int16_t x3328 = 20;
	volatile int32_t t80 = 407257;

	t80 = ((x3325*(x3326<x3327))>>x3328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3329 = -1LL;
	int64_t x3331 = 30461064026LL;
	int8_t x3332 = 0;
	int64_t t81 = 3LL;

	t81 = ((x3329*(x3330<x3331))>>x3332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3345 = INT8_MIN;
	volatile int16_t x3347 = INT16_MIN;
	static volatile int32_t t82 = -964357526;

	t82 = ((x3345*(x3346<x3347))>>x3348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3421 = 3U;
	int64_t x3422 = INT64_MIN;
	volatile int16_t x3423 = INT16_MIN;
	int32_t t83 = 78164;

	t83 = ((x3421*(x3422<x3423))>>x3424);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x3430 = INT16_MIN;
	int16_t x3432 = 7;
	volatile uint32_t t84 = 418U;

	t84 = ((x3429*(x3430<x3431))>>x3432);

	if (t84 != 33554431U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3433 = INT8_MAX;
	uint32_t x3434 = UINT32_MAX;
	volatile int32_t x3435 = INT32_MAX;
	int8_t x3436 = 3;

	t85 = ((x3433*(x3434<x3435))>>x3436);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3447 = INT32_MIN;
	static uint8_t x3448 = 58U;
	static int64_t t86 = -86678392412364LL;

	t86 = ((x3445*(x3446<x3447))>>x3448);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3486 = 10384LL;
	uint16_t x3488 = 0U;
	volatile int32_t t87 = 127;

	t87 = ((x3485*(x3486<x3487))>>x3488);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x3509 = 3U;
	uint16_t x3510 = 6234U;
	volatile int32_t t88 = 59048412;

	t88 = ((x3509*(x3510<x3511))>>x3512);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3517 = 32711481LLU;
	int8_t x3518 = INT8_MIN;
	int16_t x3519 = INT16_MAX;
	uint64_t t89 = 7634192695569094LLU;

	t89 = ((x3517*(x3518<x3519))>>x3520);

	if (t89 != 32711481LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x3522 = -1;
	int8_t x3523 = 5;
	volatile int32_t t90 = -538;

	t90 = ((x3521*(x3522<x3523))>>x3524);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3538 = -1;
	volatile uint16_t x3539 = 119U;
	static int32_t t91 = -3952894;

	t91 = ((x3537*(x3538<x3539))>>x3540);

	if (t91 != 1599926) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x3557 = 762134889U;
	static volatile int8_t x3558 = INT8_MIN;
	volatile int8_t x3559 = -1;
	volatile uint64_t x3560 = 0LLU;

	t92 = ((x3557*(x3558<x3559))>>x3560);

	if (t92 != 762134889U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3602 = INT64_MAX;
	int32_t x3603 = -1;
	int16_t x3604 = 30;
	uint32_t t93 = 6U;

	t93 = ((x3601*(x3602<x3603))>>x3604);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3617 = 10U;
	int16_t x3618 = -1;
	volatile int16_t x3619 = -91;
	int32_t t94 = 529015805;

	t94 = ((x3617*(x3618<x3619))>>x3620);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x3762 = INT16_MAX;
	static volatile int8_t x3763 = INT8_MIN;
	uint8_t x3764 = 6U;
	volatile int32_t t95 = -1;

	t95 = ((x3761*(x3762<x3763))>>x3764);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3789 = 39U;
	uint8_t x3791 = 0U;
	uint8_t x3792 = 6U;
	volatile int32_t t96 = 341193627;

	t96 = ((x3789*(x3790<x3791))>>x3792);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x3853 = INT16_MAX;
	uint32_t x3854 = 11800790U;
	int32_t x3855 = 27120;
	uint8_t x3856 = 5U;
	volatile int32_t t97 = 197845;

	t97 = ((x3853*(x3854<x3855))>>x3856);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x3873 = INT32_MAX;
	uint64_t x3875 = UINT64_MAX;
	int16_t x3876 = 1;
	int32_t t98 = 1920046;

	t98 = ((x3873*(x3874<x3875))>>x3876);

	if (t98 != 1073741823) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x3914 = 658421846051LLU;
	int16_t x3916 = 1;
	int32_t t99 = 397209319;

	t99 = ((x3913*(x3914<x3915))>>x3916);

	if (t99 != 10) { NG(); } else { ; }
	
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

