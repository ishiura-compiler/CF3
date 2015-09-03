#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x37 = 16U;
static volatile uint16_t x57 = UINT16_MAX;
static uint8_t x197 = 50U;
uint16_t x198 = 8U;
static int32_t t4 = -3545;
static volatile int16_t x364 = INT16_MAX;
int64_t x472 = INT64_MAX;
uint32_t x481 = 227U;
volatile uint8_t x490 = 11U;
int8_t x491 = INT8_MIN;
uint8_t x492 = 0U;
uint8_t x534 = 5U;
int8_t x568 = INT8_MIN;
int32_t x661 = 106;
static int16_t x663 = INT16_MIN;
uint32_t t16 = 13103U;
static volatile int32_t t17 = 61768217;
int8_t x1057 = 0;
int8_t x1058 = 2;
static int32_t x1059 = -4597653;
int32_t x1159 = 200;
uint8_t x1249 = 17U;
static uint64_t x1251 = 11901537700367LLU;
int32_t t23 = 1056015167;
uint64_t t25 = 445435LLU;
static uint8_t x1494 = 4U;
uint8_t x1496 = 37U;
int8_t x1519 = -1;
static volatile uint16_t x1594 = 0U;
volatile uint64_t t28 = 4572245678641LLU;
uint8_t x1673 = UINT8_MAX;
uint64_t x1782 = 3LLU;
uint8_t x1783 = UINT8_MAX;
uint8_t x1872 = UINT8_MAX;
int32_t t33 = INT32_MAX;
uint16_t x2141 = 12U;
static uint8_t x2142 = 3U;
int8_t x2158 = 1;
int16_t x2160 = -4841;
uint8_t x2192 = UINT8_MAX;
int8_t x2257 = INT8_MAX;
int16_t x2296 = -1941;
int64_t x2329 = 294250799389331827LL;
static uint64_t t39 = 17218LLU;
volatile uint32_t t40 = 0U;
int32_t x2456 = INT32_MAX;
volatile int32_t t41 = INT32_MAX;
int32_t x2504 = -1;
uint8_t x2550 = 3U;
int32_t t43 = 4388341;
int32_t t44 = -7280;
volatile uint8_t x2701 = 1U;
uint16_t x2702 = 4U;
volatile int32_t x2703 = INT32_MIN;
volatile int32_t x2783 = 0;
static int64_t t48 = 3859318811867709168LL;
uint16_t x2866 = 18U;
uint8_t x2934 = 4U;
static int64_t x2944 = INT64_MAX;
uint8_t x2958 = 6U;
int8_t x2969 = 0;
static int32_t t55 = -4946;
uint16_t x3010 = 6U;
volatile uint64_t x3012 = UINT64_MAX;
int8_t x3031 = 9;
int32_t t58 = 1017119307;
int64_t x3243 = -1LL;
int64_t x3244 = -938141579LL;
int64_t t61 = 537013557LL;
int8_t x3294 = 0;
uint8_t x3433 = 0U;
uint8_t x3434 = 7U;
static uint16_t x3435 = 85U;
int8_t x3437 = INT8_MAX;
static volatile int32_t t66 = 4147910;
uint16_t x3478 = 1U;
int64_t x3832 = -1176LL;
int64_t t68 = 1242LL;
uint16_t x3941 = 0U;
int32_t x3942 = 6;
static int8_t x4067 = INT8_MIN;
int16_t x4092 = INT16_MIN;
static uint32_t x4273 = 0U;
volatile int16_t x4275 = -1;
volatile uint64_t t73 = 292LLU;
int8_t x4311 = INT8_MIN;
int16_t x4312 = -1;
static int8_t x4528 = 9;
static int64_t x4682 = 0LL;
uint8_t x4790 = 5U;
volatile int8_t x4791 = 3;
uint32_t x5017 = 169391605U;
static uint64_t x5080 = 537491273897311LLU;
static uint8_t x5089 = 47U;
uint8_t x5417 = 49U;
volatile uint64_t t89 = 67611LLU;
static int32_t x5439 = 956441757;
int32_t x5440 = -1377;
static uint16_t x5510 = 1U;
uint64_t x5741 = 2364567501138668945LLU;
uint16_t x5742 = 6U;
int64_t x5768 = 2LL;
static volatile int64_t t94 = 84651638LL;
uint32_t x5796 = 99U;
static int32_t x5799 = 218451;
static uint8_t x5800 = 1U;
static uint8_t x5802 = 3U;
int64_t x5804 = INT64_MAX;
int8_t x5886 = 6;
static int32_t t99 = 1936981;


void f0(void) {
	uint8_t x38 = 11U;
	uint64_t x39 = UINT64_MAX;
	volatile uint64_t x40 = 5LLU;
	uint64_t t0 = 26LLU;

	t0 = (((x37<<x38)<x39)^x40);

	if (t0 != 4LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x58 = 0;
	uint32_t x59 = 12U;
	int32_t x60 = INT32_MIN;
	static int32_t t1 = INT32_MIN;

	t1 = (((x57<<x58)<x59)^x60);

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x61 = 10U;
	volatile int8_t x62 = 3;
	int32_t x63 = -6068;
	static volatile uint8_t x64 = 7U;
	int32_t t2 = -8043;

	t2 = (((x61<<x62)<x63)^x64);

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x77 = 2667LLU;
	static uint8_t x78 = 42U;
	int16_t x79 = -192;
	int8_t x80 = 0;
	int32_t t3 = 171850180;

	t3 = (((x77<<x78)<x79)^x80);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x199 = UINT8_MAX;
	volatile int16_t x200 = INT16_MAX;

	t4 = (((x197<<x198)<x199)^x200);

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x277 = 15U;
	volatile uint8_t x278 = 0U;
	static uint8_t x279 = 3U;
	int32_t x280 = -1;
	volatile int32_t t5 = 2130;

	t5 = (((x277<<x278)<x279)^x280);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x341 = 33U;
	uint32_t x342 = 3U;
	volatile uint8_t x343 = 56U;
	uint64_t x344 = 573431848709647552LLU;
	uint64_t t6 = 125535937202LLU;

	t6 = (((x341<<x342)<x343)^x344);

	if (t6 != 573431848709647552LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x361 = UINT64_MAX;
	volatile uint8_t x362 = 1U;
	uint8_t x363 = 27U;
	static volatile int32_t t7 = 194936942;

	t7 = (((x361<<x362)<x363)^x364);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x425 = 1276118;
	static volatile uint16_t x426 = 0U;
	int64_t x427 = INT64_MIN;
	static int32_t x428 = -6183;
	volatile int32_t t8 = 672329009;

	t8 = (((x425<<x426)<x427)^x428);

	if (t8 != -6183) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x469 = UINT16_MAX;
	int16_t x470 = 0;
	uint16_t x471 = UINT16_MAX;
	static volatile int64_t t9 = INT64_MAX;

	t9 = (((x469<<x470)<x471)^x472);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x482 = 26U;
	uint64_t x483 = 1LLU;
	int64_t x484 = -17726414591686837LL;
	int64_t t10 = -4020222906005250493LL;

	t10 = (((x481<<x482)<x483)^x484);

	if (t10 != -17726414591686837LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x489 = 56;
	volatile int32_t t11 = 1;

	t11 = (((x489<<x490)<x491)^x492);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x533 = UINT16_MAX;
	static volatile uint8_t x535 = 0U;
	int16_t x536 = -1;
	int32_t t12 = 49673;

	t12 = (((x533<<x534)<x535)^x536);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x545 = 324U;
	static volatile uint32_t x546 = 12U;
	volatile uint8_t x547 = UINT8_MAX;
	int64_t x548 = INT64_MAX;
	static volatile int64_t t13 = INT64_MAX;

	t13 = (((x545<<x546)<x547)^x548);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x565 = 54990250480LLU;
	static uint8_t x566 = 3U;
	int8_t x567 = INT8_MAX;
	static int32_t t14 = -27399;

	t14 = (((x565<<x566)<x567)^x568);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x633 = 6161216411080LLU;
	uint16_t x634 = 3U;
	int64_t x635 = INT64_MAX;
	int64_t x636 = INT64_MAX;
	volatile int64_t t15 = 1456792276627970LL;

	t15 = (((x633<<x634)<x635)^x636);

	if (t15 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x662 = 1;
	uint32_t x664 = 7U;

	t16 = (((x661<<x662)<x663)^x664);

	if (t16 != 7U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x773 = 21105863U;
	uint32_t x774 = 1U;
	int8_t x775 = INT8_MAX;
	int8_t x776 = -1;

	t17 = (((x773<<x774)<x775)^x776);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x825 = 7U;
	int8_t x826 = 1;
	volatile int64_t x827 = INT64_MIN;
	static volatile int16_t x828 = INT16_MAX;
	volatile int32_t t18 = 26537;

	t18 = (((x825<<x826)<x827)^x828);

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x829 = 723U;
	volatile uint8_t x830 = 7U;
	int32_t x831 = -214;
	uint64_t x832 = UINT64_MAX;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (((x829<<x830)<x831)^x832);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x1060 = INT64_MIN;
	volatile int64_t t20 = INT64_MIN;

	t20 = (((x1057<<x1058)<x1059)^x1060);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1157 = 1U;
	static volatile uint16_t x1158 = 1U;
	int16_t x1160 = INT16_MIN;
	int32_t t21 = 239352431;

	t21 = (((x1157<<x1158)<x1159)^x1160);

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1201 = 1;
	int8_t x1202 = 9;
	volatile int8_t x1203 = -1;
	volatile uint16_t x1204 = 7U;
	static int32_t t22 = 7;

	t22 = (((x1201<<x1202)<x1203)^x1204);

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1250 = 1U;
	int32_t x1252 = -20071823;

	t23 = (((x1249<<x1250)<x1251)^x1252);

	if (t23 != -20071824) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1277 = 2669U;
	uint8_t x1278 = 4U;
	int32_t x1279 = -1;
	int64_t x1280 = -56687LL;
	int64_t t24 = -91LL;

	t24 = (((x1277<<x1278)<x1279)^x1280);

	if (t24 != -56688LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1321 = 2U;
	volatile uint32_t x1322 = 5U;
	uint8_t x1323 = 2U;
	uint64_t x1324 = 8062391LLU;

	t25 = (((x1321<<x1322)<x1323)^x1324);

	if (t25 != 8062391LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1493 = 1U;
	int16_t x1495 = INT16_MAX;
	int32_t t26 = 310600708;

	t26 = (((x1493<<x1494)<x1495)^x1496);

	if (t26 != 36) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x1517 = 56U;
	static int8_t x1518 = 1;
	uint8_t x1520 = UINT8_MAX;
	volatile int32_t t27 = -408;

	t27 = (((x1517<<x1518)<x1519)^x1520);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1593 = INT8_MAX;
	uint64_t x1595 = 84694LLU;
	uint64_t x1596 = UINT64_MAX;

	t28 = (((x1593<<x1594)<x1595)^x1596);

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1637 = 24;
	volatile uint8_t x1638 = 0U;
	volatile int8_t x1639 = 5;
	int32_t x1640 = 1928;
	int32_t t29 = -7902329;

	t29 = (((x1637<<x1638)<x1639)^x1640);

	if (t29 != 1928) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1674 = 2U;
	volatile uint8_t x1675 = 3U;
	static int64_t x1676 = INT64_MIN;
	static int64_t t30 = INT64_MIN;

	t30 = (((x1673<<x1674)<x1675)^x1676);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1781 = 27;
	int64_t x1784 = INT64_MIN;
	int64_t t31 = 29185LL;

	t31 = (((x1781<<x1782)<x1783)^x1784);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1869 = 1195308944U;
	static uint64_t x1870 = 1LLU;
	volatile uint64_t x1871 = UINT64_MAX;
	volatile int32_t t32 = -1288305;

	t32 = (((x1869<<x1870)<x1871)^x1872);

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1897 = 5847953LL;
	volatile uint32_t x1898 = 24U;
	int16_t x1899 = 9;
	static volatile int32_t x1900 = INT32_MAX;

	t33 = (((x1897<<x1898)<x1899)^x1900);

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2143 = -477692480;
	static uint16_t x2144 = UINT16_MAX;
	volatile int32_t t34 = 1268922;

	t34 = (((x2141<<x2142)<x2143)^x2144);

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2157 = 25;
	int8_t x2159 = -1;
	int32_t t35 = -27906;

	t35 = (((x2157<<x2158)<x2159)^x2160);

	if (t35 != -4841) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2189 = UINT16_MAX;
	uint16_t x2190 = 4U;
	int32_t x2191 = INT32_MIN;
	volatile int32_t t36 = -46110022;

	t36 = (((x2189<<x2190)<x2191)^x2192);

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2258 = 12U;
	int16_t x2259 = 5601;
	uint64_t x2260 = UINT64_MAX;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (((x2257<<x2258)<x2259)^x2260);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2293 = 6U;
	int8_t x2294 = 0;
	static uint32_t x2295 = UINT32_MAX;
	static int32_t t38 = 15808079;

	t38 = (((x2293<<x2294)<x2295)^x2296);

	if (t38 != -1942) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2330 = 4;
	volatile int16_t x2331 = INT16_MIN;
	volatile uint64_t x2332 = 2040980LLU;

	t39 = (((x2329<<x2330)<x2331)^x2332);

	if (t39 != 2040980LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2361 = UINT8_MAX;
	int32_t x2362 = 0;
	int64_t x2363 = -867LL;
	uint32_t x2364 = 6U;

	t40 = (((x2361<<x2362)<x2363)^x2364);

	if (t40 != 6U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2453 = UINT16_MAX;
	volatile int8_t x2454 = 7;
	int8_t x2455 = 55;

	t41 = (((x2453<<x2454)<x2455)^x2456);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2501 = 11U;
	volatile uint8_t x2502 = 1U;
	volatile int32_t x2503 = INT32_MIN;
	int32_t t42 = 293478;

	t42 = (((x2501<<x2502)<x2503)^x2504);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2549 = 1726;
	int64_t x2551 = -1LL;
	uint16_t x2552 = UINT16_MAX;

	t43 = (((x2549<<x2550)<x2551)^x2552);

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2669 = INT8_MAX;
	static int8_t x2670 = 0;
	uint32_t x2671 = 3U;
	int8_t x2672 = -21;

	t44 = (((x2669<<x2670)<x2671)^x2672);

	if (t44 != -21) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2704 = 112;
	int32_t t45 = 249522719;

	t45 = (((x2701<<x2702)<x2703)^x2704);

	if (t45 != 112) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2713 = 31U;
	uint16_t x2714 = 3U;
	volatile int16_t x2715 = -7;
	int8_t x2716 = INT8_MIN;
	volatile int32_t t46 = 624;

	t46 = (((x2713<<x2714)<x2715)^x2716);

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2717 = 6677U;
	uint8_t x2718 = 2U;
	static volatile int16_t x2719 = 10798;
	uint64_t x2720 = 5442164LLU;
	static volatile uint64_t t47 = 95LLU;

	t47 = (((x2717<<x2718)<x2719)^x2720);

	if (t47 != 5442164LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2781 = 1U;
	int64_t x2782 = 24LL;
	int64_t x2784 = -106630LL;

	t48 = (((x2781<<x2782)<x2783)^x2784);

	if (t48 != -106630LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2805 = 1637LLU;
	int8_t x2806 = 0;
	int64_t x2807 = INT64_MAX;
	static int8_t x2808 = -1;
	volatile int32_t t49 = -58;

	t49 = (((x2805<<x2806)<x2807)^x2808);

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2845 = 366755262299312LLU;
	int8_t x2846 = 2;
	int32_t x2847 = INT32_MIN;
	uint32_t x2848 = 256529U;
	volatile uint32_t t50 = 1001U;

	t50 = (((x2845<<x2846)<x2847)^x2848);

	if (t50 != 256528U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2865 = UINT8_MAX;
	uint8_t x2867 = 94U;
	static int16_t x2868 = -1;
	int32_t t51 = -99069884;

	t51 = (((x2865<<x2866)<x2867)^x2868);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2933 = 22117;
	uint32_t x2935 = 889U;
	static volatile int32_t x2936 = INT32_MAX;
	int32_t t52 = INT32_MAX;

	t52 = (((x2933<<x2934)<x2935)^x2936);

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x2941 = UINT8_MAX;
	int8_t x2942 = 0;
	int32_t x2943 = -1;
	int64_t t53 = INT64_MAX;

	t53 = (((x2941<<x2942)<x2943)^x2944);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2957 = 9372U;
	volatile uint64_t x2959 = UINT64_MAX;
	uint16_t x2960 = 36U;
	static volatile int32_t t54 = 2183;

	t54 = (((x2957<<x2958)<x2959)^x2960);

	if (t54 != 37) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2970 = 14U;
	uint8_t x2971 = 1U;
	int8_t x2972 = INT8_MAX;

	t55 = (((x2969<<x2970)<x2971)^x2972);

	if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3009 = 135860485U;
	int64_t x3011 = 802497013681662433LL;
	volatile uint64_t t56 = 40872858171791LLU;

	t56 = (((x3009<<x3010)<x3011)^x3012);

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3021 = 1205U;
	int16_t x3022 = 1;
	int8_t x3023 = -51;
	int16_t x3024 = 23;
	static volatile int32_t t57 = 16190;

	t57 = (((x3021<<x3022)<x3023)^x3024);

	if (t57 != 22) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3029 = UINT16_MAX;
	uint16_t x3030 = 3U;
	int16_t x3032 = -46;

	t58 = (((x3029<<x3030)<x3031)^x3032);

	if (t58 != -46) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3053 = UINT16_MAX;
	int32_t x3054 = 1;
	static int32_t x3055 = 112476189;
	static int16_t x3056 = INT16_MAX;
	int32_t t59 = 175443;

	t59 = (((x3053<<x3054)<x3055)^x3056);

	if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x3217 = 280575488539718LLU;
	int32_t x3218 = 0;
	int16_t x3219 = 351;
	int8_t x3220 = INT8_MIN;
	int32_t t60 = -24;

	t60 = (((x3217<<x3218)<x3219)^x3220);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3241 = UINT32_MAX;
	int32_t x3242 = 6;

	t61 = (((x3241<<x3242)<x3243)^x3244);

	if (t61 != -938141579LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3249 = 0U;
	uint16_t x3250 = 2U;
	int8_t x3251 = INT8_MIN;
	volatile uint16_t x3252 = UINT16_MAX;
	int32_t t62 = 649809676;

	t62 = (((x3249<<x3250)<x3251)^x3252);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3293 = 115;
	uint16_t x3295 = 54U;
	int64_t x3296 = INT64_MAX;
	static volatile int64_t t63 = INT64_MAX;

	t63 = (((x3293<<x3294)<x3295)^x3296);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3377 = UINT64_MAX;
	volatile int16_t x3378 = 5;
	volatile uint8_t x3379 = UINT8_MAX;
	static int64_t x3380 = INT64_MAX;
	int64_t t64 = INT64_MAX;

	t64 = (((x3377<<x3378)<x3379)^x3380);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x3436 = 195468460U;
	volatile uint32_t t65 = 24U;

	t65 = (((x3433<<x3434)<x3435)^x3436);

	if (t65 != 195468461U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x3438 = 0U;
	int16_t x3439 = INT16_MIN;
	static uint16_t x3440 = UINT16_MAX;

	t66 = (((x3437<<x3438)<x3439)^x3440);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3477 = 1311834110220LLU;
	int8_t x3479 = INT8_MAX;
	volatile int16_t x3480 = INT16_MAX;
	volatile int32_t t67 = -154270;

	t67 = (((x3477<<x3478)<x3479)^x3480);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3829 = 2133496524LLU;
	uint8_t x3830 = 29U;
	static int64_t x3831 = INT64_MAX;

	t68 = (((x3829<<x3830)<x3831)^x3832);

	if (t68 != -1175LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x3943 = 121U;
	int64_t x3944 = INT64_MIN;
	volatile int64_t t69 = 368582436LL;

	t69 = (((x3941<<x3942)<x3943)^x3944);

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x4065 = 277U;
	volatile int16_t x4066 = 5;
	uint16_t x4068 = UINT16_MAX;
	int32_t t70 = -543;

	t70 = (((x4065<<x4066)<x4067)^x4068);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x4089 = 2U;
	volatile int64_t x4090 = 1LL;
	static int8_t x4091 = -1;
	static int32_t t71 = 441966651;

	t71 = (((x4089<<x4090)<x4091)^x4092);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4221 = 28U;
	uint8_t x4222 = 6U;
	uint8_t x4223 = 2U;
	volatile int8_t x4224 = 12;
	volatile int32_t t72 = 263173221;

	t72 = (((x4221<<x4222)<x4223)^x4224);

	if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x4274 = 0U;
	uint64_t x4276 = 5850764428191779LLU;

	t73 = (((x4273<<x4274)<x4275)^x4276);

	if (t73 != 5850764428191778LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x4309 = 8U;
	volatile uint8_t x4310 = 1U;
	int32_t t74 = 1;

	t74 = (((x4309<<x4310)<x4311)^x4312);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4373 = 0;
	int16_t x4374 = 11;
	int32_t x4375 = INT32_MIN;
	int64_t x4376 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (((x4373<<x4374)<x4375)^x4376);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x4381 = 2243068170053181LLU;
	int8_t x4382 = 0;
	volatile uint64_t x4383 = UINT64_MAX;
	volatile int32_t x4384 = INT32_MIN;
	volatile int32_t t76 = -2646682;

	t76 = (((x4381<<x4382)<x4383)^x4384);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4525 = 4106253U;
	uint32_t x4526 = 3U;
	static int8_t x4527 = INT8_MAX;
	volatile int32_t t77 = -3076919;

	t77 = (((x4525<<x4526)<x4527)^x4528);

	if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x4641 = 110607U;
	int8_t x4642 = 1;
	uint64_t x4643 = 1944112218009477LLU;
	volatile uint64_t x4644 = 19835549LLU;
	volatile uint64_t t78 = 85888891LLU;

	t78 = (((x4641<<x4642)<x4643)^x4644);

	if (t78 != 19835548LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4681 = 1134;
	static int64_t x4683 = INT64_MIN;
	int64_t x4684 = -1LL;
	int64_t t79 = 7341690195716LL;

	t79 = (((x4681<<x4682)<x4683)^x4684);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4765 = 88U;
	static uint8_t x4766 = 1U;
	uint16_t x4767 = UINT16_MAX;
	volatile uint64_t x4768 = 5LLU;
	static volatile uint64_t t80 = 346777169LLU;

	t80 = (((x4765<<x4766)<x4767)^x4768);

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4789 = 5690;
	int32_t x4792 = -9052872;
	static volatile int32_t t81 = -33;

	t81 = (((x4789<<x4790)<x4791)^x4792);

	if (t81 != -9052872) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4913 = INT8_MAX;
	int16_t x4914 = 20;
	int8_t x4915 = INT8_MAX;
	static volatile int64_t x4916 = 15536066285LL;
	volatile int64_t t82 = 412030046779728137LL;

	t82 = (((x4913<<x4914)<x4915)^x4916);

	if (t82 != 15536066285LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5018 = 1U;
	int64_t x5019 = INT64_MIN;
	uint8_t x5020 = 1U;
	int32_t t83 = -173;

	t83 = (((x5017<<x5018)<x5019)^x5020);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x5077 = UINT32_MAX;
	uint16_t x5078 = 1U;
	int8_t x5079 = -1;
	volatile uint64_t t84 = 5233LLU;

	t84 = (((x5077<<x5078)<x5079)^x5080);

	if (t84 != 537491273897310LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x5090 = 1U;
	uint16_t x5091 = 4U;
	volatile int32_t x5092 = INT32_MAX;
	int32_t t85 = INT32_MAX;

	t85 = (((x5089<<x5090)<x5091)^x5092);

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5221 = 773U;
	volatile uint16_t x5222 = 0U;
	int8_t x5223 = -7;
	uint8_t x5224 = UINT8_MAX;
	int32_t t86 = 2;

	t86 = (((x5221<<x5222)<x5223)^x5224);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x5297 = 936LLU;
	uint8_t x5298 = 1U;
	volatile uint32_t x5299 = UINT32_MAX;
	int64_t x5300 = -1LL;
	static volatile int64_t t87 = 0LL;

	t87 = (((x5297<<x5298)<x5299)^x5300);

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5317 = INT8_MAX;
	static volatile uint16_t x5318 = 9U;
	static int16_t x5319 = -1;
	uint16_t x5320 = 119U;
	int32_t t88 = 3;

	t88 = (((x5317<<x5318)<x5319)^x5320);

	if (t88 != 119) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5418 = 13;
	static uint8_t x5419 = UINT8_MAX;
	volatile uint64_t x5420 = 19382273LLU;

	t89 = (((x5417<<x5418)<x5419)^x5420);

	if (t89 != 19382273LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5437 = INT64_MAX;
	static uint16_t x5438 = 0U;
	int32_t t90 = 8079;

	t90 = (((x5437<<x5438)<x5439)^x5440);

	if (t90 != -1377) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5509 = 9600;
	volatile int8_t x5511 = INT8_MIN;
	int64_t x5512 = -1LL;
	volatile int64_t t91 = -961LL;

	t91 = (((x5509<<x5510)<x5511)^x5512);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x5705 = INT16_MAX;
	int16_t x5706 = 4;
	int16_t x5707 = INT16_MAX;
	static int64_t x5708 = -1LL;
	volatile int64_t t92 = 908LL;

	t92 = (((x5705<<x5706)<x5707)^x5708);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x5743 = -1;
	int32_t x5744 = INT32_MIN;
	volatile int32_t t93 = 45;

	t93 = (((x5741<<x5742)<x5743)^x5744);

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5765 = 8812;
	int32_t x5766 = 4;
	volatile uint64_t x5767 = 260LLU;

	t94 = (((x5765<<x5766)<x5767)^x5768);

	if (t94 != 2LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x5793 = INT32_MAX;
	static volatile int8_t x5794 = 0;
	static int8_t x5795 = INT8_MIN;
	uint32_t t95 = 1692824U;

	t95 = (((x5793<<x5794)<x5795)^x5796);

	if (t95 != 99U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x5797 = UINT8_MAX;
	int32_t x5798 = 1;
	int32_t t96 = 2987;

	t96 = (((x5797<<x5798)<x5799)^x5800);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5801 = 0;
	int8_t x5803 = 2;
	int64_t t97 = 67631639980LL;

	t97 = (((x5801<<x5802)<x5803)^x5804);

	if (t97 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5821 = 6U;
	uint64_t x5822 = 26LLU;
	static volatile uint8_t x5823 = UINT8_MAX;
	static uint32_t x5824 = UINT32_MAX;
	uint32_t t98 = UINT32_MAX;

	t98 = (((x5821<<x5822)<x5823)^x5824);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5885 = 3722;
	int32_t x5887 = -11360;
	static int16_t x5888 = INT16_MIN;

	t99 = (((x5885<<x5886)<x5887)^x5888);

	if (t99 != -32768) { NG(); } else { ; }
	
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

