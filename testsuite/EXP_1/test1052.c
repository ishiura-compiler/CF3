#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 2049807117643718568LL;
int16_t x73 = 0;
uint32_t x74 = 0U;
uint16_t x90 = 0U;
static volatile uint64_t t2 = 195219696169LLU;
uint8_t x257 = 1U;
volatile uint64_t t3 = 194647883048534LLU;
int64_t x513 = 24LL;
static int32_t t5 = -8;
volatile uint8_t x578 = 2U;
uint64_t t6 = UINT64_MAX;
volatile int64_t t7 = INT64_MIN;
uint16_t x706 = 1U;
static uint16_t x902 = 7U;
int8_t x904 = 13;
int32_t t12 = -239035512;
volatile int32_t x1037 = 0;
uint32_t x1085 = 19U;
uint64_t x1088 = 183650LLU;
static volatile uint64_t t16 = 162082LLU;
uint64_t x1113 = 1209LLU;
static volatile int64_t x1141 = INT64_MAX;
uint64_t x1155 = 313338065944LLU;
static uint64_t x1196 = UINT64_MAX;
int64_t x1202 = 1LL;
static int64_t x1203 = -1LL;
static int64_t x1204 = 2924943687997LL;
volatile uint32_t x1354 = 0U;
int16_t x1356 = 12829;
static int8_t x1480 = -4;
volatile uint32_t x1615 = 519028U;
volatile uint32_t t27 = UINT32_MAX;
volatile uint64_t x1633 = 9447526524528LLU;
volatile uint64_t x1775 = 715LLU;
volatile uint64_t t30 = 185654LLU;
int8_t x1853 = 0;
static int8_t x1854 = 0;
volatile int64_t t31 = 992528115002055LL;
volatile int8_t x1912 = INT8_MAX;
uint32_t t33 = 262113U;
volatile uint8_t x1946 = 0U;
static uint8_t x1948 = 2U;
volatile int64_t t34 = -1661039614567LL;
static int8_t x2109 = INT8_MAX;
int16_t x2111 = 1;
int32_t t37 = 29671046;
uint8_t x2302 = 2U;
static uint8_t x2354 = 43U;
int32_t x2356 = INT32_MIN;
volatile int64_t t40 = -702789519LL;
int64_t t41 = 2LL;
static int8_t x2455 = -1;
uint64_t t43 = 4309LLU;
int16_t x2540 = INT16_MAX;
int32_t x2602 = 1;
volatile uint64_t t45 = 95464788327699LLU;
uint32_t t46 = 34848U;
volatile int64_t x2676 = -1LL;
static volatile int32_t t48 = 507101;
int32_t x2800 = INT32_MIN;
volatile int32_t t49 = 1;
int64_t x3323 = -52205750028996491LL;
volatile int8_t x3324 = 52;
uint8_t x3417 = UINT8_MAX;
static int8_t x3418 = 2;
uint32_t x3437 = 1734006U;
int64_t t55 = -7LL;
static uint64_t x3699 = 555474893787510LLU;
int8_t x3756 = -38;
int32_t t57 = -1359520;
static uint32_t x3818 = 1U;
int32_t x3880 = -52;
int16_t x3942 = 1;
volatile uint64_t t63 = 42319232045LLU;
int16_t x3995 = 0;
int16_t x4004 = INT16_MIN;
int64_t x4053 = INT64_MAX;
volatile int64_t t66 = 1LL;
volatile int32_t t67 = 0;
uint16_t x4142 = 3U;
uint8_t x4181 = 0U;
uint16_t x4226 = 0U;
static uint8_t x4227 = 2U;
int32_t x4502 = 3;
static int32_t x4504 = -1080;
static uint16_t x4534 = 0U;
int8_t x4535 = -7;
uint64_t t76 = 7589747220646302555LLU;
static uint64_t x4778 = 20LLU;
int32_t x4780 = -787;
static int8_t x5007 = -1;
int16_t x5180 = -1;
uint8_t x5217 = 3U;
static uint8_t x5219 = UINT8_MAX;
int16_t x5220 = -1;
volatile int64_t x5275 = -1LL;
static int16_t x5276 = INT16_MIN;
uint8_t x5305 = UINT8_MAX;
volatile uint8_t x5468 = 1U;
uint16_t x5689 = UINT16_MAX;
uint16_t x5691 = 0U;
static int64_t x5789 = 209LL;
uint8_t x5914 = 1U;
int64_t x5915 = -1LL;
static volatile uint64_t x6162 = 7LLU;
uint64_t x6195 = 3205770LLU;
volatile int64_t t98 = 4318115573867700LL;
volatile int64_t t99 = -198339232LL;


void f0(void) {
	int16_t x25 = INT16_MAX;
	static volatile uint8_t x26 = 1U;
	int8_t x27 = 23;
	int64_t x28 = 892LL;

	t0 = (((x25>>x26)*x27)|x28);

	if (t0 != 376829LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x75 = -1LL;
	static volatile int64_t x76 = INT64_MAX;
	volatile int64_t t1 = INT64_MAX;

	t1 = (((x73>>x74)*x75)|x76);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x89 = 14904U;
	volatile uint64_t x91 = 63226LLU;
	volatile int32_t x92 = INT32_MIN;

	t2 = (((x89>>x90)*x91)|x92);

	if (t2 != 18446744072504388272LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x258 = 18U;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 5424321124LLU;

	t3 = (((x257>>x258)*x259)|x260);

	if (t3 != 5424321124LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x514 = 10U;
	uint8_t x515 = 0U;
	static int64_t x516 = 698LL;
	int64_t t4 = -156745421LL;

	t4 = (((x513>>x514)*x515)|x516);

	if (t4 != 698LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x565 = INT16_MAX;
	uint8_t x566 = 0U;
	uint8_t x567 = UINT8_MAX;
	volatile uint8_t x568 = 119U;

	t5 = (((x565>>x566)*x567)|x568);

	if (t5 != 8355703) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x577 = INT32_MAX;
	uint64_t x579 = 121LLU;
	volatile uint64_t x580 = UINT64_MAX;

	t6 = (((x577>>x578)*x579)|x580);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x617 = 18;
	uint32_t x618 = 10U;
	volatile int64_t x619 = INT64_MAX;
	int64_t x620 = INT64_MIN;

	t7 = (((x617>>x618)*x619)|x620);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x693 = INT16_MAX;
	uint16_t x694 = 0U;
	uint8_t x695 = 65U;
	uint16_t x696 = 240U;
	volatile int32_t t8 = 162809;

	t8 = (((x693>>x694)*x695)|x696);

	if (t8 != 2129919) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x705 = 22U;
	uint64_t x707 = UINT64_MAX;
	int16_t x708 = INT16_MIN;
	uint64_t t9 = 526448180445996303LLU;

	t9 = (((x705>>x706)*x707)|x708);

	if (t9 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x793 = INT16_MAX;
	uint8_t x794 = 4U;
	int32_t x795 = -1;
	uint8_t x796 = 113U;
	volatile int32_t t10 = 10;

	t10 = (((x793>>x794)*x795)|x796);

	if (t10 != -1935) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x825 = 84803998828LLU;
	uint16_t x826 = 5U;
	int8_t x827 = INT8_MIN;
	uint32_t x828 = 1219906U;
	volatile uint64_t t11 = 1980274LLU;

	t11 = (((x825>>x826)*x827)|x828);

	if (t11 != 18446743734494609346LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x901 = INT8_MAX;
	static int32_t x903 = -27024;

	t12 = (((x901>>x902)*x903)|x904);

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x945 = UINT16_MAX;
	volatile uint8_t x946 = 12U;
	volatile uint64_t x947 = UINT64_MAX;
	static uint32_t x948 = 2U;
	volatile uint64_t t13 = 24000318698363160LLU;

	t13 = (((x945>>x946)*x947)|x948);

	if (t13 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1038 = 7U;
	int32_t x1039 = INT32_MIN;
	int8_t x1040 = INT8_MAX;
	volatile int32_t t14 = 22;

	t14 = (((x1037>>x1038)*x1039)|x1040);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1049 = 98U;
	volatile uint8_t x1050 = 9U;
	static int32_t x1051 = -1;
	static uint8_t x1052 = UINT8_MAX;
	static int32_t t15 = 134595;

	t15 = (((x1049>>x1050)*x1051)|x1052);

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1086 = 1;
	static volatile uint16_t x1087 = UINT16_MAX;

	t16 = (((x1085>>x1086)*x1087)|x1088);

	if (t16 != 720887LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1114 = 15U;
	static uint64_t x1115 = UINT64_MAX;
	int8_t x1116 = INT8_MIN;
	uint64_t t17 = 48646564732LLU;

	t17 = (((x1113>>x1114)*x1115)|x1116);

	if (t17 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1137 = 14LLU;
	volatile uint16_t x1138 = 3U;
	int32_t x1139 = INT32_MAX;
	int64_t x1140 = -1LL;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (((x1137>>x1138)*x1139)|x1140);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x1142 = 10U;
	int64_t x1143 = -69LL;
	static int16_t x1144 = -9;
	int64_t t19 = -171906571104395LL;

	t19 = (((x1141>>x1142)*x1143)|x1144);

	if (t19 != -9LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1153 = 6;
	static int16_t x1154 = 1;
	int32_t x1156 = -7084;
	uint64_t t20 = 187846476424501923LLU;

	t20 = (((x1153>>x1154)*x1155)|x1156);

	if (t20 != 18446744073709550684LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x1193 = UINT32_MAX;
	uint8_t x1194 = 3U;
	uint64_t x1195 = UINT64_MAX;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (((x1193>>x1194)*x1195)|x1196);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1201 = 86U;
	int64_t t22 = 49LL;

	t22 = (((x1201>>x1202)*x1203)|x1204);

	if (t22 != -3LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1353 = 1271933267U;
	int32_t x1355 = 1760;
	uint32_t t23 = 996834780U;

	t23 = (((x1353>>x1354)*x1355)|x1356);

	if (t23 != 924596925U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1477 = 57;
	int16_t x1478 = 11;
	static int8_t x1479 = 0;
	int32_t t24 = -87;

	t24 = (((x1477>>x1478)*x1479)|x1480);

	if (t24 != -4) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1529 = 7674056LLU;
	volatile uint32_t x1530 = 16U;
	uint32_t x1531 = 415106654U;
	int64_t x1532 = INT64_MAX;
	uint64_t t25 = 632099482306LLU;

	t25 = (((x1529>>x1530)*x1531)|x1532);

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1585 = UINT8_MAX;
	int32_t x1586 = 7;
	int64_t x1587 = -4314578478974507LL;
	static uint8_t x1588 = 27U;
	volatile int64_t t26 = 194585429056LL;

	t26 = (((x1585>>x1586)*x1587)|x1588);

	if (t26 != -4314578478974497LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1613 = 1662341595U;
	uint8_t x1614 = 2U;
	static int32_t x1616 = INT32_MAX;

	t27 = (((x1613>>x1614)*x1615)|x1616);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1634 = 0;
	static uint8_t x1635 = 12U;
	int8_t x1636 = INT8_MAX;
	uint64_t t28 = 1061897500830325LLU;

	t28 = (((x1633>>x1634)*x1635)|x1636);

	if (t28 != 113370318294399LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1757 = UINT8_MAX;
	uint8_t x1758 = 29U;
	int8_t x1759 = -17;
	static uint32_t x1760 = UINT32_MAX;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (((x1757>>x1758)*x1759)|x1760);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1773 = 87;
	uint8_t x1774 = 8U;
	uint32_t x1776 = 2748494U;

	t30 = (((x1773>>x1774)*x1775)|x1776);

	if (t30 != 2748494LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1855 = 63;
	static int64_t x1856 = 58290492242136827LL;

	t31 = (((x1853>>x1854)*x1855)|x1856);

	if (t31 != 58290492242136827LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1905 = 151608237331LLU;
	volatile int8_t x1906 = 3;
	int8_t x1907 = -1;
	volatile uint64_t x1908 = UINT64_MAX;
	static volatile uint64_t t32 = UINT64_MAX;

	t32 = (((x1905>>x1906)*x1907)|x1908);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1909 = 62980771U;
	uint8_t x1910 = 1U;
	static volatile int8_t x1911 = INT8_MIN;

	t33 = (((x1909>>x1910)*x1911)|x1912);

	if (t33 != 264198143U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1945 = 102U;
	static int64_t x1947 = -1LL;

	t34 = (((x1945>>x1946)*x1947)|x1948);

	if (t34 != -102LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1977 = INT8_MAX;
	uint32_t x1978 = 3U;
	static volatile uint8_t x1979 = 22U;
	int64_t x1980 = -1LL;
	int64_t t35 = -1LL;

	t35 = (((x1977>>x1978)*x1979)|x1980);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2045 = 209348LLU;
	static volatile int16_t x2046 = 17;
	int8_t x2047 = INT8_MIN;
	uint64_t x2048 = 96LLU;
	uint64_t t36 = 1222459LLU;

	t36 = (((x2045>>x2046)*x2047)|x2048);

	if (t36 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2110 = 6;
	int32_t x2112 = 11199687;

	t37 = (((x2109>>x2110)*x2111)|x2112);

	if (t37 != 11199687) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2301 = 6U;
	uint64_t x2303 = 576993993695LLU;
	int64_t x2304 = -1LL;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x2301>>x2302)*x2303)|x2304);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2349 = UINT64_MAX;
	static uint16_t x2350 = 15U;
	volatile int16_t x2351 = INT16_MAX;
	volatile int32_t x2352 = 601;
	uint64_t t39 = 35776239064389LLU;

	t39 = (((x2349>>x2350)*x2351)|x2352);

	if (t39 != 18446181123756098137LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2353 = 2885250145228225LL;
	uint8_t x2355 = 5U;

	t40 = (((x2353>>x2354)*x2355)|x2356);

	if (t40 != -2147482008LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2397 = INT32_MAX;
	int8_t x2398 = 23;
	int8_t x2399 = INT8_MAX;
	int64_t x2400 = INT64_MIN;

	t41 = (((x2397>>x2398)*x2399)|x2400);

	if (t41 != -9223372036854743423LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2425 = UINT64_MAX;
	uint8_t x2426 = 13U;
	uint64_t x2427 = UINT64_MAX;
	static uint16_t x2428 = 3U;
	static volatile uint64_t t42 = 405904973LLU;

	t42 = (((x2425>>x2426)*x2427)|x2428);

	if (t42 != 18444492273895866371LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x2453 = 21119105LLU;
	int8_t x2454 = 0;
	volatile int32_t x2456 = INT32_MIN;

	t43 = (((x2453>>x2454)*x2455)|x2456);

	if (t43 != 18446744073688432511LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x2537 = INT16_MAX;
	int16_t x2538 = 12;
	volatile int8_t x2539 = -17;
	volatile int32_t t44 = -1;

	t44 = (((x2537>>x2538)*x2539)|x2540);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2601 = UINT64_MAX;
	uint8_t x2603 = UINT8_MAX;
	int16_t x2604 = INT16_MAX;

	t45 = (((x2601>>x2602)*x2603)|x2604);

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2629 = 3U;
	static uint8_t x2630 = 25U;
	static uint32_t x2631 = UINT32_MAX;
	int16_t x2632 = 8;

	t46 = (((x2629>>x2630)*x2631)|x2632);

	if (t46 != 8U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2673 = 906;
	uint8_t x2674 = 12U;
	int8_t x2675 = INT8_MIN;
	volatile int64_t t47 = -633752253764133LL;

	t47 = (((x2673>>x2674)*x2675)|x2676);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x2705 = 10;
	uint16_t x2706 = 15U;
	int8_t x2707 = -1;
	uint16_t x2708 = UINT16_MAX;

	t48 = (((x2705>>x2706)*x2707)|x2708);

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2797 = 21;
	volatile uint8_t x2798 = 0U;
	int8_t x2799 = 1;

	t49 = (((x2797>>x2798)*x2799)|x2800);

	if (t49 != -2147483627) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3077 = INT64_MAX;
	uint32_t x3078 = 18U;
	static uint32_t x3079 = 109339U;
	uint32_t x3080 = UINT32_MAX;
	static int64_t t50 = -664LL;

	t50 = (((x3077>>x3078)*x3079)|x3080);

	if (t50 != 3847024059820802047LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3321 = 18LLU;
	static volatile uint32_t x3322 = 0U;
	volatile uint64_t t51 = 68814632LLU;

	t51 = (((x3321>>x3322)*x3323)|x3324);

	if (t51 != 17507040573187614782LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x3373 = 119U;
	uint16_t x3374 = 0U;
	int16_t x3375 = -1;
	int8_t x3376 = INT8_MIN;
	int32_t t52 = -1935;

	t52 = (((x3373>>x3374)*x3375)|x3376);

	if (t52 != -119) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3419 = -1;
	int64_t x3420 = -178804965638LL;
	volatile int64_t t53 = 1LL;

	t53 = (((x3417>>x3418)*x3419)|x3420);

	if (t53 != -5LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3438 = 17U;
	static int32_t x3439 = INT32_MAX;
	volatile uint64_t x3440 = 6201619886334818577LLU;
	volatile uint64_t t54 = 86803025LLU;

	t54 = (((x3437>>x3438)*x3439)|x3440);

	if (t54 != 6201619887056486387LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3441 = INT64_MAX;
	static uint16_t x3442 = 23U;
	int32_t x3443 = -1017;
	static int32_t x3444 = INT32_MAX;

	t55 = (((x3441>>x3442)*x3443)|x3444);

	if (t55 != -1118201177964545LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3697 = UINT16_MAX;
	static uint16_t x3698 = 17U;
	int8_t x3700 = INT8_MAX;
	uint64_t t56 = 6811103785234403LLU;

	t56 = (((x3697>>x3698)*x3699)|x3700);

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3753 = INT8_MAX;
	uint16_t x3754 = 1U;
	uint8_t x3755 = 1U;

	t57 = (((x3753>>x3754)*x3755)|x3756);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3817 = 2617U;
	int16_t x3819 = 1;
	static uint8_t x3820 = UINT8_MAX;
	uint32_t t58 = 66630161U;

	t58 = (((x3817>>x3818)*x3819)|x3820);

	if (t58 != 1535U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3869 = UINT8_MAX;
	int8_t x3870 = 0;
	volatile int32_t x3871 = -1;
	static volatile uint8_t x3872 = UINT8_MAX;
	int32_t t59 = 5297;

	t59 = (((x3869>>x3870)*x3871)|x3872);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3877 = INT8_MAX;
	static uint8_t x3878 = 0U;
	int8_t x3879 = INT8_MAX;
	int32_t t60 = -861;

	t60 = (((x3877>>x3878)*x3879)|x3880);

	if (t60 != -51) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3933 = 1;
	int8_t x3934 = 3;
	uint64_t x3935 = 1795LLU;
	volatile int64_t x3936 = INT64_MIN;
	volatile uint64_t t61 = 12536123LLU;

	t61 = (((x3933>>x3934)*x3935)|x3936);

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3941 = 0;
	uint8_t x3943 = UINT8_MAX;
	volatile int32_t x3944 = -15590;
	volatile int32_t t62 = 802309516;

	t62 = (((x3941>>x3942)*x3943)|x3944);

	if (t62 != -15590) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3961 = 32073580318LLU;
	static uint16_t x3962 = 0U;
	int64_t x3963 = INT64_MAX;
	static int16_t x3964 = INT16_MIN;

	t63 = (((x3961>>x3962)*x3963)|x3964);

	if (t63 != 18446744073709519074LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3993 = 1U;
	uint16_t x3994 = 5U;
	volatile int64_t x3996 = 47624LL;
	int64_t t64 = -1174945828769421LL;

	t64 = (((x3993>>x3994)*x3995)|x3996);

	if (t64 != 47624LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4001 = 26U;
	int8_t x4002 = 1;
	volatile uint8_t x4003 = 0U;
	volatile uint32_t t65 = 14963732U;

	t65 = (((x4001>>x4002)*x4003)|x4004);

	if (t65 != 4294934528U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x4054 = 19U;
	uint8_t x4055 = 7U;
	int64_t x4056 = -1LL;

	t66 = (((x4053>>x4054)*x4055)|x4056);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4121 = INT8_MAX;
	uint8_t x4122 = 0U;
	int8_t x4123 = INT8_MIN;
	int32_t x4124 = INT32_MIN;

	t67 = (((x4121>>x4122)*x4123)|x4124);

	if (t67 != -16256) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x4141 = 101843U;
	int32_t x4143 = 31;
	static int16_t x4144 = -1;
	uint32_t t68 = UINT32_MAX;

	t68 = (((x4141>>x4142)*x4143)|x4144);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4153 = 1389U;
	int8_t x4154 = 0;
	static int8_t x4155 = -62;
	uint8_t x4156 = 1U;
	static int32_t t69 = -2256;

	t69 = (((x4153>>x4154)*x4155)|x4156);

	if (t69 != -86117) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4182 = 1;
	uint8_t x4183 = 12U;
	uint64_t x4184 = 9917LLU;
	volatile uint64_t t70 = 615979LLU;

	t70 = (((x4181>>x4182)*x4183)|x4184);

	if (t70 != 9917LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4225 = 12457692030LLU;
	uint16_t x4228 = 12U;
	volatile uint64_t t71 = 64LLU;

	t71 = (((x4225>>x4226)*x4227)|x4228);

	if (t71 != 24915384060LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4285 = 5U;
	uint8_t x4286 = 0U;
	uint64_t x4287 = 873352581LLU;
	int32_t x4288 = -1;
	uint64_t t72 = UINT64_MAX;

	t72 = (((x4285>>x4286)*x4287)|x4288);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4405 = 1U;
	int8_t x4406 = 0;
	uint8_t x4407 = 2U;
	int32_t x4408 = INT32_MIN;
	volatile int32_t t73 = -22808;

	t73 = (((x4405>>x4406)*x4407)|x4408);

	if (t73 != -2147483646) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4501 = INT8_MAX;
	uint8_t x4503 = 1U;
	int32_t t74 = 119202261;

	t74 = (((x4501>>x4502)*x4503)|x4504);

	if (t74 != -1073) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4533 = INT8_MAX;
	volatile int64_t x4536 = INT64_MIN;
	int64_t t75 = 6651265582LL;

	t75 = (((x4533>>x4534)*x4535)|x4536);

	if (t75 != -889LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x4689 = 22LL;
	volatile int16_t x4690 = 59;
	uint64_t x4691 = 15188442626820772LLU;
	int8_t x4692 = 1;

	t76 = (((x4689>>x4690)*x4691)|x4692);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4753 = 38;
	uint8_t x4754 = 10U;
	static int64_t x4755 = -1LL;
	int8_t x4756 = 20;
	volatile int64_t t77 = 131LL;

	t77 = (((x4753>>x4754)*x4755)|x4756);

	if (t77 != 20LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4777 = UINT16_MAX;
	volatile uint16_t x4779 = 1U;
	static int32_t t78 = 858449;

	t78 = (((x4777>>x4778)*x4779)|x4780);

	if (t78 != -787) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4797 = INT16_MAX;
	int8_t x4798 = 5;
	static int16_t x4799 = INT16_MAX;
	uint8_t x4800 = UINT8_MAX;
	volatile int32_t t79 = -663098211;

	t79 = (((x4797>>x4798)*x4799)|x4800);

	if (t79 != 33520895) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4889 = UINT64_MAX;
	static int64_t x4890 = 1LL;
	uint32_t x4891 = UINT32_MAX;
	int16_t x4892 = INT16_MAX;
	volatile uint64_t t80 = 140LLU;

	t80 = (((x4889>>x4890)*x4891)|x4892);

	if (t80 != 9223372032559841279LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5005 = UINT8_MAX;
	int64_t x5006 = 1LL;
	int64_t x5008 = INT64_MIN;
	static volatile int64_t t81 = -453916049319348508LL;

	t81 = (((x5005>>x5006)*x5007)|x5008);

	if (t81 != -127LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5097 = INT8_MAX;
	static volatile uint8_t x5098 = 24U;
	uint8_t x5099 = UINT8_MAX;
	int8_t x5100 = INT8_MAX;
	int32_t t82 = 1917763;

	t82 = (((x5097>>x5098)*x5099)|x5100);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5177 = UINT16_MAX;
	uint8_t x5178 = 28U;
	static int32_t x5179 = INT32_MAX;
	int32_t t83 = -1;

	t83 = (((x5177>>x5178)*x5179)|x5180);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5218 = 0;
	int32_t t84 = 96;

	t84 = (((x5217>>x5218)*x5219)|x5220);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5273 = UINT8_MAX;
	volatile uint8_t x5274 = 3U;
	static volatile int64_t t85 = -61683569379710LL;

	t85 = (((x5273>>x5274)*x5275)|x5276);

	if (t85 != -31LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5306 = 6U;
	volatile int16_t x5307 = -762;
	static int64_t x5308 = -11LL;
	static volatile int64_t t86 = 341678428172LL;

	t86 = (((x5305>>x5306)*x5307)|x5308);

	if (t86 != -9LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x5465 = INT8_MAX;
	uint16_t x5466 = 0U;
	int32_t x5467 = -1;
	volatile int32_t t87 = -1;

	t87 = (((x5465>>x5466)*x5467)|x5468);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5677 = INT16_MAX;
	volatile int16_t x5678 = 0;
	int8_t x5679 = 3;
	int8_t x5680 = INT8_MIN;
	volatile int32_t t88 = 4285048;

	t88 = (((x5677>>x5678)*x5679)|x5680);

	if (t88 != -3) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5690 = 0U;
	int64_t x5692 = -1LL;
	int64_t t89 = -10LL;

	t89 = (((x5689>>x5690)*x5691)|x5692);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5729 = 39U;
	int8_t x5730 = 27;
	int32_t x5731 = -1;
	int16_t x5732 = -4;
	int32_t t90 = 41;

	t90 = (((x5729>>x5730)*x5731)|x5732);

	if (t90 != -4) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5733 = 6401042607590114815LLU;
	static int16_t x5734 = 7;
	int64_t x5735 = INT64_MIN;
	uint32_t x5736 = UINT32_MAX;
	volatile uint64_t t91 = 5LLU;

	t91 = (((x5733>>x5734)*x5735)|x5736);

	if (t91 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x5790 = 0;
	int16_t x5791 = INT16_MIN;
	volatile uint32_t x5792 = UINT32_MAX;
	static volatile int64_t t92 = -8857246459LL;

	t92 = (((x5789>>x5790)*x5791)|x5792);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5841 = 5986;
	volatile uint8_t x5842 = 4U;
	static volatile uint16_t x5843 = UINT16_MAX;
	int64_t x5844 = 551354174277201153LL;
	int64_t t93 = 1551LL;

	t93 = (((x5841>>x5842)*x5843)|x5844);

	if (t93 != 551354174281744267LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5913 = 10;
	static int16_t x5916 = -13293;
	volatile int64_t t94 = 1337429LL;

	t94 = (((x5913>>x5914)*x5915)|x5916);

	if (t94 != -5LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x6105 = 423162;
	static volatile int8_t x6106 = 3;
	int8_t x6107 = INT8_MAX;
	uint32_t x6108 = 636260641U;
	static volatile uint32_t t95 = 8U;

	t95 = (((x6105>>x6106)*x6107)|x6108);

	if (t95 != 636391905U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6161 = 175;
	int8_t x6163 = INT8_MIN;
	uint64_t x6164 = 128025LLU;
	static volatile uint64_t t96 = 109LLU;

	t96 = (((x6161>>x6162)*x6163)|x6164);

	if (t96 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6193 = 9436;
	uint8_t x6194 = 3U;
	int64_t x6196 = INT64_MIN;
	uint64_t t97 = 2304390832211532200LLU;

	t97 = (((x6193>>x6194)*x6195)|x6196);

	if (t97 != 9223372040634378638LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x6225 = INT64_MAX;
	uint8_t x6226 = 41U;
	int8_t x6227 = INT8_MIN;
	uint32_t x6228 = 36982U;

	t98 = (((x6225>>x6226)*x6227)|x6228);

	if (t98 != -536833802LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x6301 = 56462201743853LL;
	volatile int8_t x6302 = 15;
	int32_t x6303 = INT32_MIN;
	volatile uint16_t x6304 = 4U;

	t99 = (((x6301>>x6302)*x6303)|x6304);

	if (t99 != -3700306851708010492LL) { NG(); } else { ; }
	
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

