#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x29 = INT8_MAX;
volatile uint64_t x51 = 109284184LLU;
int8_t x70 = INT8_MIN;
volatile int64_t t4 = -50256217638555099LL;
int8_t x139 = -1;
uint32_t x209 = UINT32_MAX;
int32_t x263 = -1;
volatile int8_t x324 = 1;
int32_t t11 = -7259;
uint16_t x409 = 5943U;
static volatile int8_t x410 = -1;
int32_t t12 = 1;
static uint8_t x482 = 51U;
uint8_t x484 = 3U;
int16_t x529 = INT16_MIN;
volatile uint32_t t16 = 19325U;
volatile int8_t x748 = 6;
static volatile int8_t x749 = 28;
int16_t x760 = 1;
volatile int32_t t20 = 407378;
int8_t x829 = 30;
uint64_t x1227 = UINT64_MAX;
int16_t x1228 = 0;
volatile int16_t x1449 = INT16_MIN;
int8_t x1565 = INT8_MIN;
uint32_t x1626 = 447649491U;
uint32_t x1627 = UINT32_MAX;
volatile uint32_t t26 = 882313U;
int8_t x1708 = 1;
uint16_t x1763 = UINT16_MAX;
volatile int8_t x1784 = 0;
int32_t t29 = -7;
uint32_t x1971 = UINT32_MAX;
uint32_t t30 = 27U;
volatile uint32_t x2039 = 8U;
volatile uint32_t t31 = 785437059U;
static int32_t x2277 = -1;
uint64_t x2438 = 14961970639613053LLU;
volatile uint64_t t35 = 7528569129654LLU;
static int8_t x2861 = 0;
static uint16_t x2864 = 6U;
uint8_t x2894 = 2U;
volatile int8_t x2896 = 0;
int16_t x2999 = INT16_MIN;
uint16_t x3000 = 20U;
static volatile uint64_t t42 = UINT64_MAX;
volatile int32_t x3106 = 1951;
volatile uint8_t x3504 = 44U;
static volatile int64_t x3525 = 10LL;
uint8_t x3528 = 5U;
int16_t x3574 = 530;
int32_t x3633 = INT32_MAX;
int8_t x3879 = INT8_MAX;
uint8_t x3901 = 6U;
volatile uint32_t x3916 = 0U;
int16_t x3926 = INT16_MIN;
volatile uint8_t x3928 = 4U;
static int16_t x3966 = INT16_MIN;
uint16_t x3999 = 7U;
uint8_t x4000 = 1U;
uint64_t t60 = 276LLU;
uint64_t x4014 = 14611385LLU;
int16_t x4166 = INT16_MIN;
volatile uint64_t t63 = 28164838643467LLU;
int32_t x4177 = -11;
static uint8_t x4178 = 95U;
static int8_t x4235 = INT8_MIN;
uint64_t x4347 = UINT64_MAX;
static int8_t x4416 = 3;
static uint64_t x4586 = 198076932665LLU;
int8_t x4587 = INT8_MAX;
uint64_t t75 = 13195145852425LLU;
uint32_t t77 = 435439U;
uint32_t x4815 = 90U;
volatile uint64_t x4905 = 974563194727058LLU;
static volatile uint64_t t80 = 92964003404LLU;
volatile uint32_t t81 = 19973U;
int8_t x5088 = 0;
static volatile uint32_t x5114 = UINT32_MAX;
uint16_t x5115 = UINT16_MAX;
int32_t x5333 = -9;
static int8_t x5336 = 15;
int32_t t87 = -1780;
int8_t x5413 = 1;
volatile uint64_t t88 = 126849LLU;
int64_t t89 = -1803804LL;
int64_t x5506 = INT64_MIN;
volatile uint8_t x5537 = 12U;
int16_t x5539 = -4;
volatile int32_t t92 = -2950;
int16_t x5588 = 0;
uint32_t t96 = 122961623U;
int16_t x5612 = 1;
int32_t t97 = -312;
int32_t x5629 = 91951044;
static int64_t t99 = -3210817243483589355LL;


void f0(void) {
	static volatile int16_t x30 = -1;
	int32_t x31 = -1;
	static uint8_t x32 = 1U;
	volatile int32_t t0 = -253;

	t0 = (x29-((x30^x31)<<x32));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = INT64_MAX;
	int8_t x52 = 18;
	static volatile uint64_t t1 = 832115LLU;

	t1 = (x49-((x50^x51)<<x52));

	if (t1 != 9223400685048168448LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x61 = UINT32_MAX;
	volatile uint32_t x62 = UINT32_MAX;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = 8U;
	volatile uint32_t t2 = 53891968U;

	t2 = (x61-((x62^x63)<<x64));

	if (t2 != 255U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x69 = 0U;
	uint32_t x71 = 1U;
	uint32_t x72 = 2U;
	volatile uint32_t t3 = 58U;

	t3 = (x69-((x70^x71)<<x72));

	if (t3 != 508U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x133 = INT32_MAX;
	int16_t x134 = -1;
	int64_t x135 = -1LL;
	uint64_t x136 = 7LLU;

	t4 = (x133-((x134^x135)<<x136));

	if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x137 = -1LL;
	volatile int8_t x138 = INT8_MIN;
	uint16_t x140 = 0U;
	volatile int64_t t5 = -8437760562398762LL;

	t5 = (x137-((x138^x139)<<x140));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x169 = 0;
	uint32_t x170 = 1134166242U;
	int8_t x171 = INT8_MAX;
	volatile uint8_t x172 = 6U;
	uint32_t t6 = 48U;

	t6 = (x169-((x170^x171)<<x172));

	if (t6 != 427808960U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x210 = INT8_MAX;
	uint32_t x211 = 4469742U;
	volatile uint8_t x212 = 1U;
	uint32_t t7 = 12088U;

	t7 = (x209-((x210^x211)<<x212));

	if (t7 != 4286027997U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x261 = 6939;
	uint64_t x262 = 6083120029119LLU;
	uint32_t x264 = 14U;
	uint64_t t8 = 0LLU;

	t8 = (x261-((x262^x263)<<x264));

	if (t8 != 99665838557109019LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x301 = UINT16_MAX;
	volatile int64_t x302 = 0LL;
	static uint64_t x303 = UINT64_MAX;
	static int16_t x304 = 1;
	uint64_t t9 = 8661985614016970988LLU;

	t9 = (x301-((x302^x303)<<x304));

	if (t9 != 65537LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x317 = -962;
	int32_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int8_t x320 = 0;
	int32_t t10 = -13919192;

	t10 = (x317-((x318^x319)<<x320));

	if (t10 != -33729) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x321 = UINT8_MAX;
	static int16_t x322 = -1;
	int16_t x323 = -7;

	t11 = (x321-((x322^x323)<<x324));

	if (t11 != 243) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x411 = -1;
	int16_t x412 = 2;

	t12 = (x409-((x410^x411)<<x412));

	if (t12 != 5943) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x433 = -1;
	uint64_t x434 = UINT64_MAX;
	static volatile int16_t x435 = INT16_MAX;
	int8_t x436 = 1;
	volatile uint64_t t13 = 2030LLU;

	t13 = (x433-((x434^x435)<<x436));

	if (t13 != 65535LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x481 = -1LL;
	uint8_t x483 = 0U;
	volatile int64_t t14 = 931711226337LL;

	t14 = (x481-((x482^x483)<<x484));

	if (t14 != -409LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x525 = UINT8_MAX;
	uint64_t x526 = UINT64_MAX;
	int32_t x527 = INT32_MIN;
	int64_t x528 = 1LL;
	static uint64_t t15 = 762106452LLU;

	t15 = (x525-((x526^x527)<<x528));

	if (t15 != 18446744069414584577LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x530 = INT32_MIN;
	uint32_t x531 = 80027589U;
	volatile int8_t x532 = 1;

	t16 = (x529-((x530^x531)<<x532));

	if (t16 != 4134879350U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x673 = INT8_MIN;
	static uint32_t x674 = UINT32_MAX;
	int8_t x675 = 0;
	uint8_t x676 = 13U;
	static uint32_t t17 = 256U;

	t17 = (x673-((x674^x675)<<x676));

	if (t17 != 8064U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x745 = -495574361LL;
	static uint8_t x746 = UINT8_MAX;
	uint32_t x747 = 6432U;
	static volatile int64_t t18 = -18204LL;

	t18 = (x745-((x746^x747)<<x748));

	if (t18 != -495998233LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x750 = 11U;
	volatile int16_t x751 = 2660;
	static uint16_t x752 = 0U;
	volatile int32_t t19 = 70;

	t19 = (x749-((x750^x751)<<x752));

	if (t19 != -2643) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x757 = INT32_MAX;
	int16_t x758 = INT16_MIN;
	static int16_t x759 = -49;

	t20 = (x757-((x758^x759)<<x760));

	if (t20 != 2147418209) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x830 = 392312500328481262LL;
	volatile uint8_t x831 = UINT8_MAX;
	int8_t x832 = 0;
	int64_t t21 = 607849528501817LL;

	t21 = (x829-((x830^x831)<<x832));

	if (t21 != -392312500328481011LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1197 = INT32_MIN;
	int16_t x1198 = -86;
	static volatile int64_t x1199 = -1LL;
	static uint8_t x1200 = 0U;
	int64_t t22 = -4341396065645LL;

	t22 = (x1197-((x1198^x1199)<<x1200));

	if (t22 != -2147483733LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1225 = INT8_MIN;
	uint16_t x1226 = 190U;
	volatile uint64_t t23 = 2702557328LLU;

	t23 = (x1225-((x1226^x1227)<<x1228));

	if (t23 != 63LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1450 = UINT64_MAX;
	uint16_t x1451 = UINT16_MAX;
	uint64_t x1452 = 32LLU;
	volatile uint64_t t24 = 232562832037LLU;

	t24 = (x1449-((x1450^x1451)<<x1452));

	if (t24 != 281474976677888LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1566 = INT64_MAX;
	uint64_t x1567 = UINT64_MAX;
	uint64_t x1568 = 0LLU;
	volatile uint64_t t25 = 15LLU;

	t25 = (x1565-((x1566^x1567)<<x1568));

	if (t25 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1625 = INT16_MIN;
	uint16_t x1628 = 3U;

	t26 = (x1625-((x1626^x1627)<<x1628));

	if (t26 != 3581163168U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1705 = UINT8_MAX;
	uint16_t x1706 = 27362U;
	uint32_t x1707 = 333360U;
	static volatile uint32_t t27 = 251U;

	t27 = (x1705-((x1706^x1707)<<x1708));

	if (t27 != 4294248283U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1761 = -1;
	uint32_t x1762 = UINT32_MAX;
	uint8_t x1764 = 1U;
	volatile uint32_t t28 = 196262U;

	t28 = (x1761-((x1762^x1763)<<x1764));

	if (t28 != 131071U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1781 = 3;
	static int32_t x1782 = -14;
	int8_t x1783 = -1;

	t29 = (x1781-((x1782^x1783)<<x1784));

	if (t29 != -10) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1969 = 8;
	int16_t x1970 = INT16_MIN;
	volatile int8_t x1972 = 1;

	t30 = (x1969-((x1970^x1971)<<x1972));

	if (t30 != 4294901770U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2037 = INT8_MIN;
	static uint16_t x2038 = 5U;
	volatile uint16_t x2040 = 2U;

	t31 = (x2037-((x2038^x2039)<<x2040));

	if (t31 != 4294967116U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2213 = -1;
	int64_t x2214 = -1LL;
	volatile int8_t x2215 = -1;
	uint8_t x2216 = 28U;
	int64_t t32 = 93642923856698227LL;

	t32 = (x2213-((x2214^x2215)<<x2216));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2278 = UINT16_MAX;
	int8_t x2279 = 41;
	uint16_t x2280 = 0U;
	volatile int32_t t33 = 63047;

	t33 = (x2277-((x2278^x2279)<<x2280));

	if (t33 != -65495) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2409 = UINT64_MAX;
	static uint32_t x2410 = UINT32_MAX;
	volatile uint64_t x2411 = UINT64_MAX;
	uint32_t x2412 = 2U;
	static volatile uint64_t t34 = 13496392LLU;

	t34 = (x2409-((x2410^x2411)<<x2412));

	if (t34 != 17179869183LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2437 = INT32_MIN;
	uint16_t x2439 = UINT16_MAX;
	uint8_t x2440 = 1U;

	t35 = (x2437-((x2438^x2439)<<x2440));

	if (t35 != 18416820130282756348LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2605 = -1;
	static int16_t x2606 = -1;
	int64_t x2607 = -1LL;
	uint32_t x2608 = 9U;
	int64_t t36 = -59646061LL;

	t36 = (x2605-((x2606^x2607)<<x2608));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2753 = 1;
	int64_t x2754 = -502754382819720648LL;
	int64_t x2755 = -1LL;
	int8_t x2756 = 0;
	int64_t t37 = -1100LL;

	t37 = (x2753-((x2754^x2755)<<x2756));

	if (t37 != -502754382819720646LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2773 = 132U;
	uint64_t x2774 = UINT64_MAX;
	uint8_t x2775 = 3U;
	volatile uint16_t x2776 = 1U;
	uint64_t t38 = 20428561635448569LLU;

	t38 = (x2773-((x2774^x2775)<<x2776));

	if (t38 != 140LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2862 = 991LL;
	uint16_t x2863 = UINT16_MAX;
	static int64_t t39 = 3190931LL;

	t39 = (x2861-((x2862^x2863)<<x2864));

	if (t39 != -4130816LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2893 = 4802912LL;
	uint64_t x2895 = UINT64_MAX;
	static uint64_t t40 = 143621789LLU;

	t40 = (x2893-((x2894^x2895)<<x2896));

	if (t40 != 4802915LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2997 = 1;
	uint32_t x2998 = 334U;
	volatile uint32_t t41 = 1610U;

	t41 = (x2997-((x2998^x2999)<<x3000));

	if (t41 != 3944742913U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x3009 = UINT64_MAX;
	int32_t x3010 = INT32_MIN;
	int32_t x3011 = INT32_MIN;
	uint8_t x3012 = 1U;

	t42 = (x3009-((x3010^x3011)<<x3012));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3105 = 14U;
	volatile uint64_t x3107 = 18126LLU;
	int8_t x3108 = 1;
	uint64_t t43 = 9LLU;

	t43 = (x3105-((x3106^x3107)<<x3108));

	if (t43 != 18446744073709518188LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x3333 = 10660602LL;
	static int8_t x3334 = INT8_MAX;
	uint32_t x3335 = UINT32_MAX;
	volatile uint8_t x3336 = 2U;
	volatile int64_t t44 = 5688506568859LL;

	t44 = (x3333-((x3334^x3335)<<x3336));

	if (t44 != -4284306182LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x3337 = 107419952344LL;
	int32_t x3338 = 2;
	int8_t x3339 = INT8_MAX;
	uint8_t x3340 = 2U;
	volatile int64_t t45 = 88008005LL;

	t45 = (x3337-((x3338^x3339)<<x3340));

	if (t45 != 107419951844LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3453 = 82664U;
	static uint16_t x3454 = UINT16_MAX;
	uint16_t x3455 = 51U;
	uint32_t x3456 = 8U;
	uint32_t t46 = 269U;

	t46 = (x3453-((x3454^x3455)<<x3456));

	if (t46 != 4278286056U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3501 = INT8_MIN;
	volatile uint64_t x3502 = UINT64_MAX;
	int8_t x3503 = -1;
	uint64_t t47 = 117348239619333LLU;

	t47 = (x3501-((x3502^x3503)<<x3504));

	if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3526 = 6LL;
	static int16_t x3527 = INT16_MAX;
	int64_t t48 = -50431821767LL;

	t48 = (x3525-((x3526^x3527)<<x3528));

	if (t48 != -1048342LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3537 = 0U;
	uint8_t x3538 = 119U;
	volatile int8_t x3539 = 1;
	int32_t x3540 = 2;
	volatile int32_t t49 = -29293240;

	t49 = (x3537-((x3538^x3539)<<x3540));

	if (t49 != -472) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x3573 = INT64_MAX;
	uint16_t x3575 = UINT16_MAX;
	uint8_t x3576 = 14U;
	volatile int64_t t50 = -55582513296LL;

	t50 = (x3573-((x3574^x3575)<<x3576));

	if (t50 != 9223372035789733887LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3634 = 40U;
	static int8_t x3635 = 36;
	static uint8_t x3636 = 11U;
	volatile int32_t t51 = 10;

	t51 = (x3633-((x3634^x3635)<<x3636));

	if (t51 != 2147459071) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3793 = 11342U;
	int16_t x3794 = INT16_MAX;
	int16_t x3795 = INT16_MAX;
	int32_t x3796 = 12;
	uint32_t t52 = 0U;

	t52 = (x3793-((x3794^x3795)<<x3796));

	if (t52 != 11342U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3877 = 27779U;
	uint32_t x3878 = 740U;
	static uint8_t x3880 = 7U;
	static uint32_t t53 = 145714U;

	t53 = (x3877-((x3878^x3879)<<x3880));

	if (t53 != 4294909699U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3902 = 53U;
	static volatile uint32_t x3903 = UINT32_MAX;
	int16_t x3904 = 1;
	static uint32_t t54 = 80808U;

	t54 = (x3901-((x3902^x3903)<<x3904));

	if (t54 != 114U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3913 = INT16_MIN;
	uint64_t x3914 = 463542LLU;
	int16_t x3915 = INT16_MIN;
	volatile uint64_t t55 = 540873LLU;

	t55 = (x3913-((x3914^x3915)<<x3916));

	if (t55 != 453962LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3925 = INT32_MIN;
	uint64_t x3927 = UINT64_MAX;
	uint64_t t56 = 7091LLU;

	t56 = (x3925-((x3926^x3927)<<x3928));

	if (t56 != 18446744071561543696LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3949 = 495545U;
	static volatile int16_t x3950 = INT16_MIN;
	static int8_t x3951 = INT8_MIN;
	uint8_t x3952 = 6U;
	uint32_t t57 = 258309461U;

	t57 = (x3949-((x3950^x3951)<<x3952));

	if (t57 != 4293373881U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3957 = 3385U;
	int32_t x3958 = -1;
	int64_t x3959 = -474376786702991214LL;
	uint16_t x3960 = 0U;
	int64_t t58 = 42788LL;

	t58 = (x3957-((x3958^x3959)<<x3960));

	if (t58 != -474376786702987828LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3965 = INT8_MIN;
	static int8_t x3967 = INT8_MIN;
	volatile uint8_t x3968 = 1U;
	static volatile int32_t t59 = 224;

	t59 = (x3965-((x3966^x3967)<<x3968));

	if (t59 != -65408) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3997 = 14982U;
	uint64_t x3998 = UINT64_MAX;

	t60 = (x3997-((x3998^x3999)<<x4000));

	if (t60 != 14998LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4013 = INT16_MAX;
	int16_t x4015 = INT16_MAX;
	int8_t x4016 = 1;
	uint64_t t61 = 3141463320736328702LLU;

	t61 = (x4013-((x4014^x4015)<<x4016));

	if (t61 != 18446744073680414579LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4089 = 34U;
	volatile uint64_t x4090 = 250831646218LLU;
	volatile uint64_t x4091 = 16771073581677637LLU;
	volatile int8_t x4092 = 53;
	uint64_t t62 = 331589989446271436LLU;

	t62 = (x4089-((x4090^x4091)<<x4092));

	if (t62 != 13123489314157625378LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x4165 = INT8_MIN;
	uint64_t x4167 = 3480092997371299482LLU;
	int8_t x4168 = 20;

	t63 = (x4165-((x4166^x4167)<<x4168));

	if (t63 != 7082150415040511872LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4179 = INT8_MAX;
	volatile uint8_t x4180 = 6U;
	volatile int32_t t64 = 4;

	t64 = (x4177-((x4178^x4179)<<x4180));

	if (t64 != -2059) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4233 = 3U;
	static uint64_t x4234 = UINT64_MAX;
	int16_t x4236 = 4;
	uint64_t t65 = 59674430LLU;

	t65 = (x4233-((x4234^x4235)<<x4236));

	if (t65 != 18446744073709549587LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4265 = INT16_MAX;
	int16_t x4266 = -1;
	static uint64_t x4267 = 17802LLU;
	volatile uint8_t x4268 = 39U;
	uint64_t t66 = 181635LLU;

	t66 = (x4265-((x4266^x4267)<<x4268));

	if (t66 != 9787302754680831LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4345 = 824755LLU;
	static int64_t x4346 = INT64_MAX;
	volatile uint32_t x4348 = 1U;
	uint64_t t67 = 3600139LLU;

	t67 = (x4345-((x4346^x4347)<<x4348));

	if (t67 != 824755LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4361 = UINT64_MAX;
	int16_t x4362 = INT16_MIN;
	uint32_t x4363 = 215260U;
	static uint8_t x4364 = 1U;
	uint64_t t68 = 273400LLU;

	t68 = (x4361-((x4362^x4363)<<x4364));

	if (t68 != 18446744069415005767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4373 = UINT16_MAX;
	int64_t x4374 = -1LL;
	volatile int16_t x4375 = INT16_MIN;
	static uint8_t x4376 = 23U;
	volatile int64_t t69 = 27679556LL;

	t69 = (x4373-((x4374^x4375)<<x4376));

	if (t69 != -274869452801LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4385 = 2029U;
	int64_t x4386 = INT64_MIN;
	uint64_t x4387 = 456009702411059LLU;
	int32_t x4388 = 1;
	uint64_t t70 = 129922266825437724LLU;

	t70 = (x4385-((x4386^x4387)<<x4388));

	if (t70 != 18445832054304731527LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x4393 = INT32_MIN;
	uint16_t x4394 = 794U;
	uint64_t x4395 = UINT64_MAX;
	volatile uint8_t x4396 = 3U;
	volatile uint64_t t71 = 2568LLU;

	t71 = (x4393-((x4394^x4395)<<x4396));

	if (t71 != 18446744071562074328LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4401 = -1;
	int16_t x4402 = INT16_MIN;
	int8_t x4403 = -3;
	static uint8_t x4404 = 0U;
	volatile int32_t t72 = 461060916;

	t72 = (x4401-((x4402^x4403)<<x4404));

	if (t72 != -32766) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4413 = -37478524LL;
	uint8_t x4414 = 0U;
	uint16_t x4415 = 23317U;
	volatile int64_t t73 = -74LL;

	t73 = (x4413-((x4414^x4415)<<x4416));

	if (t73 != -37665060LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4493 = 20U;
	uint16_t x4494 = 9U;
	uint32_t x4495 = 43787016U;
	static int8_t x4496 = 5;
	volatile uint32_t t74 = 0U;

	t74 = (x4493-((x4494^x4495)<<x4496));

	if (t74 != 2893783028U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4585 = INT32_MIN;
	int16_t x4588 = 4;

	t75 = (x4585-((x4586^x4587)<<x4588));

	if (t75 != 18446740902331145120LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4721 = 68U;
	static int16_t x4722 = 11;
	int16_t x4723 = 40;
	static volatile uint8_t x4724 = 1U;
	int32_t t76 = -30;

	t76 = (x4721-((x4722^x4723)<<x4724));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4809 = INT8_MIN;
	int32_t x4810 = INT32_MIN;
	static uint32_t x4811 = 1879U;
	volatile int32_t x4812 = 1;

	t77 = (x4809-((x4810^x4811)<<x4812));

	if (t77 != 4294963410U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4813 = 565491747695954LLU;
	int8_t x4814 = -1;
	static int32_t x4816 = 5;
	volatile uint64_t t78 = 126538455222694LLU;

	t78 = (x4813-((x4814^x4815)<<x4816));

	if (t78 != 565487452731570LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4833 = INT8_MAX;
	uint64_t x4834 = 2428LLU;
	static int64_t x4835 = -1080001614636591LL;
	volatile int16_t x4836 = 13;
	uint64_t t79 = 90533650LLU;

	t79 = (x4833-((x4834^x4835)<<x4836));

	if (t79 != 8847373227122122879LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4906 = UINT64_MAX;
	static uint8_t x4907 = 0U;
	uint16_t x4908 = 1U;

	t80 = (x4905-((x4906^x4907)<<x4908));

	if (t80 != 974563194727060LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x4961 = -1;
	uint32_t x4962 = 82U;
	uint8_t x4963 = UINT8_MAX;
	int8_t x4964 = 0;

	t81 = (x4961-((x4962^x4963)<<x4964));

	if (t81 != 4294967122U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5085 = 7006777U;
	volatile uint64_t x5086 = UINT64_MAX;
	int32_t x5087 = -1;
	uint64_t t82 = 3380LLU;

	t82 = (x5085-((x5086^x5087)<<x5088));

	if (t82 != 7006777LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5113 = INT8_MAX;
	volatile int8_t x5116 = 5;
	volatile uint32_t t83 = 391078382U;

	t83 = (x5113-((x5114^x5115)<<x5116));

	if (t83 != 2097279U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5221 = 1U;
	int8_t x5222 = INT8_MIN;
	volatile uint64_t x5223 = 13609421696LLU;
	int8_t x5224 = 52;
	volatile uint64_t t84 = 1042LLU;

	t84 = (x5221-((x5222^x5223)<<x5224));

	if (t84 != 13835058055282163713LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5289 = -1;
	int32_t x5290 = INT32_MAX;
	static uint64_t x5291 = 6LLU;
	uint32_t x5292 = 9U;
	uint64_t t85 = 0LLU;

	t85 = (x5289-((x5290^x5291)<<x5292));

	if (t85 != 18446742974197927423LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x5334 = 128U;
	int16_t x5335 = INT16_MAX;
	static volatile int32_t t86 = -14780;

	t86 = (x5333-((x5334^x5335)<<x5336));

	if (t86 != -1069514761) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5409 = -1;
	volatile int8_t x5410 = 1;
	static int16_t x5411 = 13;
	int8_t x5412 = 1;

	t87 = (x5409-((x5410^x5411)<<x5412));

	if (t87 != -25) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5414 = INT32_MIN;
	volatile uint64_t x5415 = 4709244LLU;
	static volatile int32_t x5416 = 0;

	t88 = (x5413-((x5414^x5415)<<x5416));

	if (t88 != 2142774405LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x5417 = INT16_MIN;
	int64_t x5418 = INT64_MIN;
	volatile int64_t x5419 = INT64_MIN;
	static int64_t x5420 = 14LL;

	t89 = (x5417-((x5418^x5419)<<x5420));

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5505 = INT8_MAX;
	int32_t x5507 = INT32_MIN;
	static int8_t x5508 = 0;
	int64_t t90 = -25141459LL;

	t90 = (x5505-((x5506^x5507)<<x5508));

	if (t90 != -9223372034707292033LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5538 = 2198091907315227144LLU;
	static volatile int16_t x5540 = 0;
	uint64_t t91 = 978LLU;

	t91 = (x5537-((x5538^x5539)<<x5540));

	if (t91 != 2198091907315227160LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5549 = -2;
	int16_t x5550 = INT16_MAX;
	uint8_t x5551 = UINT8_MAX;
	uint32_t x5552 = 0U;

	t92 = (x5549-((x5550^x5551)<<x5552));

	if (t92 != -32514) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5565 = INT16_MIN;
	volatile int32_t x5566 = 574325;
	int32_t x5567 = 16409626;
	int16_t x5568 = 0;
	volatile int32_t t93 = 817;

	t93 = (x5565-((x5566^x5567)<<x5568));

	if (t93 != -15935343) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x5569 = -2827842LL;
	int32_t x5570 = INT32_MAX;
	static int32_t x5571 = INT32_MAX;
	static volatile uint16_t x5572 = 27U;
	int64_t t94 = -17030395LL;

	t94 = (x5569-((x5570^x5571)<<x5572));

	if (t94 != -2827842LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5585 = INT16_MIN;
	int32_t x5586 = INT32_MIN;
	uint64_t x5587 = 391631112066LLU;
	uint64_t t95 = 258499979LLU;

	t95 = (x5585-((x5586^x5587)<<x5588));

	if (t95 != 392200386686LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x5593 = 910;
	uint32_t x5594 = 181863U;
	int8_t x5595 = INT8_MIN;
	static int8_t x5596 = 29;

	t96 = (x5593-((x5594^x5595)<<x5596));

	if (t96 != 536871822U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x5609 = -1;
	static volatile uint16_t x5610 = 138U;
	uint8_t x5611 = 100U;

	t97 = (x5609-((x5610^x5611)<<x5612));

	if (t97 != -477) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5630 = 1;
	uint64_t x5631 = 18408LLU;
	uint8_t x5632 = 1U;
	uint64_t t98 = 3816LLU;

	t98 = (x5629-((x5630^x5631)<<x5632));

	if (t98 != 91914226LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5821 = 9120361;
	static volatile int64_t x5822 = -778099648444396933LL;
	int64_t x5823 = INT64_MIN;
	int8_t x5824 = 0;

	t99 = (x5821-((x5822^x5823)<<x5824));

	if (t99 != -8445272388401258514LL) { NG(); } else { ; }
	
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

