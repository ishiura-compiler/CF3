#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x177 = 1U;
int8_t x178 = 17;
int16_t x180 = -1;
volatile uint32_t t1 = 48091U;
uint32_t x213 = 416U;
static int16_t x215 = INT16_MIN;
int8_t x360 = -1;
uint8_t x390 = 6U;
uint64_t t8 = 256640LLU;
static uint32_t x535 = UINT32_MAX;
int64_t t9 = -54796047471LL;
static int16_t x739 = -1;
int32_t t10 = 22598586;
uint16_t x905 = 0U;
static volatile uint32_t x906 = 4U;
int32_t x907 = INT32_MIN;
volatile int32_t x962 = 1;
int64_t x983 = -1LL;
uint64_t x1139 = 58956355737267LLU;
int32_t x1140 = -56012522;
uint64_t t17 = 0LLU;
volatile int8_t x1156 = INT8_MIN;
volatile int64_t t18 = -4582616540988677002LL;
static int64_t x1212 = -1LL;
volatile int64_t x1215 = INT64_MIN;
static int16_t x1242 = 1;
uint8_t x1309 = UINT8_MAX;
int64_t x1311 = INT64_MIN;
static volatile uint32_t t23 = 209116U;
volatile uint16_t x1389 = UINT16_MAX;
static uint32_t x1391 = UINT32_MAX;
volatile uint64_t t27 = 1843949LLU;
int8_t x1449 = INT8_MAX;
uint16_t x1452 = 445U;
int8_t x1578 = 0;
volatile int32_t t31 = -182548483;
volatile uint64_t x1609 = 150LLU;
volatile uint64_t t32 = 517242015964886795LLU;
uint16_t x1786 = 1U;
volatile int16_t x2112 = 3;
volatile int8_t x2126 = 6;
volatile int8_t x2127 = INT8_MIN;
volatile int16_t x2281 = INT16_MAX;
volatile int8_t x2283 = INT8_MAX;
volatile uint64_t t38 = 8LLU;
uint32_t x2301 = UINT32_MAX;
volatile int8_t x2303 = INT8_MIN;
int8_t x2329 = INT8_MAX;
volatile uint8_t x2651 = UINT8_MAX;
volatile uint64_t t43 = 2080274146376965205LLU;
uint16_t x2714 = 24U;
volatile int64_t x2715 = -3388946LL;
uint64_t x2727 = UINT64_MAX;
volatile int64_t t48 = 8153777470733LL;
int16_t x2874 = 1;
volatile int32_t t51 = 55780805;
uint8_t x2992 = UINT8_MAX;
static int8_t x3043 = -1;
int8_t x3044 = -1;
uint16_t x3103 = UINT16_MAX;
volatile int8_t x3104 = INT8_MAX;
int32_t t54 = -98558390;
static volatile int64_t x3180 = -1LL;
volatile int64_t t56 = -5064865981LL;
volatile uint64_t t57 = 17404LLU;
uint8_t x3250 = 3U;
static int32_t x3295 = INT32_MAX;
int16_t x3309 = 0;
int32_t x3518 = 0;
int64_t x3519 = 1500865184805868472LL;
volatile int16_t x3520 = INT16_MIN;
int16_t x3571 = INT16_MIN;
uint64_t t63 = UINT64_MAX;
volatile uint16_t x3610 = 5U;
static int64_t x3611 = INT64_MAX;
uint32_t x3709 = 497018715U;
volatile int64_t x3712 = -1LL;
static int8_t x3813 = INT8_MAX;
volatile int16_t x3815 = -920;
volatile int16_t x3816 = 1;
static volatile uint32_t x3822 = 0U;
static int16_t x3835 = -1;
volatile int64_t x3843 = -1LL;
volatile int64_t t70 = 2421131287LL;
int64_t x3961 = 3202036959823934LL;
volatile uint8_t x3962 = 30U;
volatile uint32_t x3964 = 7873U;
static int16_t x4090 = 3;
static uint64_t x4201 = 738LLU;
static int8_t x4202 = 0;
uint64_t x4263 = 9LLU;
int8_t x4264 = INT8_MAX;
uint64_t t77 = 51059756170054951LLU;
int32_t x4386 = 5;
static uint64_t x4432 = 653016649488LLU;
int32_t x4497 = 373141035;
volatile int8_t x4499 = -9;
static volatile int32_t t81 = 1;
static volatile int8_t x4510 = 0;
int64_t x4533 = 289104LL;
int64_t x4534 = 0LL;
uint8_t x4553 = UINT8_MAX;
static uint64_t x4901 = UINT64_MAX;
volatile int16_t x4903 = INT16_MIN;
uint16_t x4904 = UINT16_MAX;
static int8_t x4961 = 0;
int32_t t89 = -439026;
static int64_t x5067 = -1LL;
int64_t x5087 = INT64_MAX;
volatile int64_t t93 = 1LL;
static int32_t t96 = -107913192;
static uint64_t x5348 = 675643561343885LLU;
uint64_t t97 = 3LLU;
volatile int32_t x5416 = -37821364;


void f0(void) {
	static int32_t x101 = INT32_MAX;
	uint8_t x102 = 2U;
	static int64_t x103 = INT64_MAX;
	uint8_t x104 = UINT8_MAX;
	int64_t t0 = 30197LL;

	t0 = (((x101>>x102)&x103)-x104);

	if (t0 != 536870656LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x179 = 14U;

	t1 = (((x177>>x178)&x179)-x180);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x214 = 10U;
	uint8_t x216 = 0U;
	uint32_t t2 = 28676U;

	t2 = (((x213>>x214)&x215)-x216);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x261 = 0;
	volatile uint16_t x262 = 19U;
	static int64_t x263 = -19LL;
	int32_t x264 = INT32_MIN;
	volatile int64_t t3 = -406352174161624531LL;

	t3 = (((x261>>x262)&x263)-x264);

	if (t3 != 2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x317 = UINT64_MAX;
	static uint8_t x318 = 13U;
	int32_t x319 = -1;
	int8_t x320 = -11;
	volatile uint64_t t4 = 10111LLU;

	t4 = (((x317>>x318)&x319)-x320);

	if (t4 != 2251799813685258LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x353 = INT32_MAX;
	volatile int8_t x354 = 29;
	int16_t x355 = -1;
	uint64_t x356 = 4425591LLU;
	volatile uint64_t t5 = 607LLU;

	t5 = (((x353>>x354)&x355)-x356);

	if (t5 != 18446744073705126028LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x357 = INT32_MAX;
	uint8_t x358 = 3U;
	static int8_t x359 = INT8_MIN;
	int32_t t6 = 1;

	t6 = (((x357>>x358)&x359)-x360);

	if (t6 != 268435329) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x365 = 66727958415551323LLU;
	uint16_t x366 = 53U;
	int32_t x367 = INT32_MAX;
	int16_t x368 = INT16_MIN;
	static uint64_t t7 = 58381825289726LLU;

	t7 = (((x365>>x366)&x367)-x368);

	if (t7 != 32775LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x389 = 16939LLU;
	volatile int8_t x391 = INT8_MIN;
	int16_t x392 = -1;

	t8 = (((x389>>x390)&x391)-x392);

	if (t8 != 257LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x533 = UINT16_MAX;
	volatile uint8_t x534 = 3U;
	int64_t x536 = -1LL;

	t9 = (((x533>>x534)&x535)-x536);

	if (t9 != 8192LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x737 = 100576;
	uint8_t x738 = 3U;
	uint8_t x740 = UINT8_MAX;

	t10 = (((x737>>x738)&x739)-x740);

	if (t10 != 12317) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x908 = INT16_MIN;
	int32_t t11 = 83892;

	t11 = (((x905>>x906)&x907)-x908);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x961 = INT16_MAX;
	static uint64_t x963 = 810024LLU;
	int16_t x964 = 14306;
	uint64_t t12 = 5296LLU;

	t12 = (((x961>>x962)&x963)-x964);

	if (t12 != 18446744073709544518LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x981 = 31878755381LLU;
	uint32_t x982 = 62U;
	static uint16_t x984 = UINT16_MAX;
	static uint64_t t13 = 1704598LLU;

	t13 = (((x981>>x982)&x983)-x984);

	if (t13 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1049 = 2U;
	volatile int16_t x1050 = 11;
	int64_t x1051 = -1LL;
	static int32_t x1052 = 466837009;
	static int64_t t14 = -41629258LL;

	t14 = (((x1049>>x1050)&x1051)-x1052);

	if (t14 != -466837009LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x1065 = 96248081U;
	int8_t x1066 = 6;
	static uint32_t x1067 = UINT32_MAX;
	int16_t x1068 = INT16_MAX;
	static volatile uint32_t t15 = 275299U;

	t15 = (((x1065>>x1066)&x1067)-x1068);

	if (t15 != 1471109U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1133 = INT64_MAX;
	int8_t x1134 = 28;
	volatile int64_t x1135 = 618474426146961LL;
	volatile int16_t x1136 = INT16_MAX;
	volatile int64_t t16 = -544349034207LL;

	t16 = (((x1133>>x1134)&x1135)-x1136);

	if (t16 != 33495228562LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1137 = 9168897LLU;
	uint8_t x1138 = 0U;

	t17 = (((x1137>>x1138)&x1139)-x1140);

	if (t17 != 64401131LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1153 = INT64_MAX;
	uint16_t x1154 = 1U;
	static int16_t x1155 = 17;

	t18 = (((x1153>>x1154)&x1155)-x1156);

	if (t18 != 145LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1209 = UINT64_MAX;
	int16_t x1210 = 35;
	int64_t x1211 = INT64_MIN;
	uint64_t t19 = 7470LLU;

	t19 = (((x1209>>x1210)&x1211)-x1212);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1213 = 748708U;
	uint16_t x1214 = 10U;
	static uint16_t x1216 = 120U;
	int64_t t20 = -3148699185LL;

	t20 = (((x1213>>x1214)&x1215)-x1216);

	if (t20 != -120LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1241 = 1155U;
	uint16_t x1243 = UINT16_MAX;
	static int8_t x1244 = -1;
	static volatile uint32_t t21 = 46325496U;

	t21 = (((x1241>>x1242)&x1243)-x1244);

	if (t21 != 578U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x1310 = 3U;
	static int64_t x1312 = -1LL;
	volatile int64_t t22 = 433201116463307LL;

	t22 = (((x1309>>x1310)&x1311)-x1312);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1317 = UINT32_MAX;
	int8_t x1318 = 0;
	uint32_t x1319 = UINT32_MAX;
	int16_t x1320 = -16068;

	t23 = (((x1317>>x1318)&x1319)-x1320);

	if (t23 != 16067U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1329 = 7U;
	volatile uint32_t x1330 = 0U;
	static int64_t x1331 = -1LL;
	static int32_t x1332 = 347384;
	int64_t t24 = -29745501LL;

	t24 = (((x1329>>x1330)&x1331)-x1332);

	if (t24 != -347377LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1337 = INT32_MAX;
	int8_t x1338 = 1;
	volatile uint8_t x1339 = UINT8_MAX;
	volatile int32_t x1340 = -56887;
	volatile int32_t t25 = -2401;

	t25 = (((x1337>>x1338)&x1339)-x1340);

	if (t25 != 57142) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1390 = 0U;
	static int32_t x1392 = -1569;
	uint32_t t26 = 1800094300U;

	t26 = (((x1389>>x1390)&x1391)-x1392);

	if (t26 != 67104U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1401 = UINT64_MAX;
	uint8_t x1402 = 7U;
	static uint32_t x1403 = 670790U;
	uint64_t x1404 = UINT64_MAX;

	t27 = (((x1401>>x1402)&x1403)-x1404);

	if (t27 != 670791LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1450 = 1;
	uint8_t x1451 = UINT8_MAX;
	int32_t t28 = 0;

	t28 = (((x1449>>x1450)&x1451)-x1452);

	if (t28 != -382) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1509 = 4U;
	int8_t x1510 = 19;
	int8_t x1511 = INT8_MIN;
	uint16_t x1512 = 9536U;
	volatile int32_t t29 = -446;

	t29 = (((x1509>>x1510)&x1511)-x1512);

	if (t29 != -9536) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1513 = INT16_MAX;
	volatile int16_t x1514 = 12;
	int64_t x1515 = INT64_MAX;
	int16_t x1516 = INT16_MIN;
	volatile int64_t t30 = 232309926050488518LL;

	t30 = (((x1513>>x1514)&x1515)-x1516);

	if (t30 != 32775LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1577 = 11;
	uint16_t x1579 = 13031U;
	static uint8_t x1580 = 4U;

	t31 = (((x1577>>x1578)&x1579)-x1580);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1610 = 11LLU;
	volatile int16_t x1611 = 2;
	volatile uint16_t x1612 = 3U;

	t32 = (((x1609>>x1610)&x1611)-x1612);

	if (t32 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1685 = 163454258U;
	uint16_t x1686 = 27U;
	static uint64_t x1687 = 4948846431685145LLU;
	int8_t x1688 = INT8_MAX;
	static uint64_t t33 = 7963947748454LLU;

	t33 = (((x1685>>x1686)&x1687)-x1688);

	if (t33 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1785 = INT16_MAX;
	static int64_t x1787 = -1LL;
	uint32_t x1788 = 155U;
	volatile int64_t t34 = -801238282069107712LL;

	t34 = (((x1785>>x1786)&x1787)-x1788);

	if (t34 != 16228LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x1813 = 12LLU;
	uint8_t x1814 = 1U;
	int8_t x1815 = -7;
	int8_t x1816 = INT8_MIN;
	static uint64_t t35 = 2035992LLU;

	t35 = (((x1813>>x1814)&x1815)-x1816);

	if (t35 != 128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2109 = 3417;
	uint64_t x2110 = 5LLU;
	int8_t x2111 = INT8_MIN;
	int32_t t36 = 181;

	t36 = (((x2109>>x2110)&x2111)-x2112);

	if (t36 != -3) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x2125 = 13U;
	uint16_t x2128 = 34U;
	int32_t t37 = 367552006;

	t37 = (((x2125>>x2126)&x2127)-x2128);

	if (t37 != -34) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2282 = 3U;
	uint64_t x2284 = 5LLU;

	t38 = (((x2281>>x2282)&x2283)-x2284);

	if (t38 != 122LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2302 = 1;
	int8_t x2304 = INT8_MIN;
	uint32_t t39 = 505297U;

	t39 = (((x2301>>x2302)&x2303)-x2304);

	if (t39 != 2147483648U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2330 = 15U;
	static int8_t x2331 = -1;
	static int16_t x2332 = INT16_MIN;
	int32_t t40 = 30;

	t40 = (((x2329>>x2330)&x2331)-x2332);

	if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2469 = 1332439U;
	uint8_t x2470 = 4U;
	static volatile int32_t x2471 = -450;
	uint16_t x2472 = 15U;
	volatile uint32_t t41 = 51U;

	t41 = (((x2469>>x2470)&x2471)-x2472);

	if (t41 != 82941U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2577 = 121;
	static uint8_t x2578 = 29U;
	uint32_t x2579 = UINT32_MAX;
	static int8_t x2580 = INT8_MAX;
	volatile uint32_t t42 = 10966U;

	t42 = (((x2577>>x2578)&x2579)-x2580);

	if (t42 != 4294967169U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2649 = UINT64_MAX;
	uint8_t x2650 = 19U;
	int16_t x2652 = INT16_MIN;

	t43 = (((x2649>>x2650)&x2651)-x2652);

	if (t43 != 33023LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2685 = 37132LLU;
	int16_t x2686 = 2;
	static volatile int32_t x2687 = 4673;
	int32_t x2688 = INT32_MIN;
	static volatile uint64_t t44 = 13027LLU;

	t44 = (((x2685>>x2686)&x2687)-x2688);

	if (t44 != 2147483713LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2713 = UINT8_MAX;
	uint16_t x2716 = 2U;
	int64_t t45 = -1LL;

	t45 = (((x2713>>x2714)&x2715)-x2716);

	if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x2725 = 23U;
	uint8_t x2726 = 18U;
	int64_t x2728 = INT64_MIN;
	volatile uint64_t t46 = 747636704114949379LLU;

	t46 = (((x2725>>x2726)&x2727)-x2728);

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2785 = INT16_MAX;
	volatile uint16_t x2786 = 26U;
	int16_t x2787 = INT16_MIN;
	int16_t x2788 = INT16_MAX;
	static int32_t t47 = 9438029;

	t47 = (((x2785>>x2786)&x2787)-x2788);

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2789 = INT32_MAX;
	int8_t x2790 = 7;
	static int64_t x2791 = 6090801LL;
	int32_t x2792 = INT32_MIN;

	t48 = (((x2789>>x2790)&x2791)-x2792);

	if (t48 != 2153574449LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x2849 = INT8_MAX;
	static uint32_t x2850 = 7U;
	uint8_t x2851 = 9U;
	uint8_t x2852 = UINT8_MAX;
	int32_t t49 = 2348703;

	t49 = (((x2849>>x2850)&x2851)-x2852);

	if (t49 != -255) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2873 = 133824858186LL;
	uint16_t x2875 = 941U;
	int32_t x2876 = INT32_MAX;
	int64_t t50 = 1869354659840965077LL;

	t50 = (((x2873>>x2874)&x2875)-x2876);

	if (t50 != -2147483610LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2945 = UINT16_MAX;
	int8_t x2946 = 0;
	volatile int16_t x2947 = 185;
	int16_t x2948 = 12;

	t51 = (((x2945>>x2946)&x2947)-x2948);

	if (t51 != 173) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2989 = 17433844U;
	uint8_t x2990 = 0U;
	volatile int16_t x2991 = INT16_MIN;
	volatile uint32_t t52 = 684988U;

	t52 = (((x2989>>x2990)&x2991)-x2992);

	if (t52 != 17432321U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3041 = INT16_MAX;
	int8_t x3042 = 0;
	volatile int32_t t53 = 19;

	t53 = (((x3041>>x3042)&x3043)-x3044);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3101 = INT32_MAX;
	uint8_t x3102 = 12U;

	t54 = (((x3101>>x3102)&x3103)-x3104);

	if (t54 != 65408) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3169 = 59;
	uint8_t x3170 = 0U;
	uint32_t x3171 = UINT32_MAX;
	int32_t x3172 = INT32_MIN;
	volatile uint32_t t55 = 63561294U;

	t55 = (((x3169>>x3170)&x3171)-x3172);

	if (t55 != 2147483707U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3177 = UINT32_MAX;
	static int8_t x3178 = 1;
	uint16_t x3179 = 82U;

	t56 = (((x3177>>x3178)&x3179)-x3180);

	if (t56 != 83LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x3189 = UINT64_MAX;
	volatile uint16_t x3190 = 35U;
	int16_t x3191 = -7196;
	static volatile int8_t x3192 = -27;

	t57 = (((x3189>>x3190)&x3191)-x3192);

	if (t57 != 536863743LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3249 = 661847U;
	int32_t x3251 = -1241746;
	static int16_t x3252 = -1;
	volatile uint32_t t58 = 2648U;

	t58 = (((x3249>>x3250)&x3251)-x3252);

	if (t58 != 65835U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3293 = UINT64_MAX;
	int8_t x3294 = 7;
	int16_t x3296 = 168;
	static volatile uint64_t t59 = 13272863185881527LLU;

	t59 = (((x3293>>x3294)&x3295)-x3296);

	if (t59 != 2147483479LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3310 = 19;
	uint16_t x3311 = UINT16_MAX;
	static int16_t x3312 = INT16_MIN;
	int32_t t60 = 2181503;

	t60 = (((x3309>>x3310)&x3311)-x3312);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x3497 = UINT16_MAX;
	uint8_t x3498 = 0U;
	int8_t x3499 = INT8_MAX;
	int32_t x3500 = -1;
	volatile int32_t t61 = 714988017;

	t61 = (((x3497>>x3498)&x3499)-x3500);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3517 = 114229116704LLU;
	static uint64_t t62 = 3535889606LLU;

	t62 = (((x3517>>x3518)&x3519)-x3520);

	if (t62 != 42950808352LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3569 = UINT64_MAX;
	volatile uint8_t x3570 = 62U;
	uint32_t x3572 = 1U;

	t63 = (((x3569>>x3570)&x3571)-x3572);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3585 = 7930579668107074LL;
	int16_t x3586 = 5;
	int32_t x3587 = 86;
	int32_t x3588 = INT32_MIN;
	int64_t t64 = -6182LL;

	t64 = (((x3585>>x3586)&x3587)-x3588);

	if (t64 != 2147483730LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3609 = INT16_MAX;
	int16_t x3612 = INT16_MIN;
	volatile int64_t t65 = 0LL;

	t65 = (((x3609>>x3610)&x3611)-x3612);

	if (t65 != 33791LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x3710 = 2U;
	static int64_t x3711 = INT64_MIN;
	volatile int64_t t66 = 1352426826LL;

	t66 = (((x3709>>x3710)&x3711)-x3712);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3814 = 8U;
	int32_t t67 = 622358;

	t67 = (((x3813>>x3814)&x3815)-x3816);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x3821 = 0U;
	volatile int8_t x3823 = 8;
	uint64_t x3824 = 419607120557LLU;
	uint64_t t68 = 27LLU;

	t68 = (((x3821>>x3822)&x3823)-x3824);

	if (t68 != 18446743654102431059LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x3833 = 21U;
	int16_t x3834 = 3;
	int8_t x3836 = INT8_MIN;
	int32_t t69 = -13924;

	t69 = (((x3833>>x3834)&x3835)-x3836);

	if (t69 != 130) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3841 = 23;
	static int8_t x3842 = 5;
	uint32_t x3844 = 288424U;

	t70 = (((x3841>>x3842)&x3843)-x3844);

	if (t70 != -288424LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3889 = UINT64_MAX;
	uint16_t x3890 = 3U;
	static int32_t x3891 = 68896956;
	int32_t x3892 = INT32_MAX;
	uint64_t t71 = 145075LLU;

	t71 = (((x3889>>x3890)&x3891)-x3892);

	if (t71 != 18446744071630964925LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3963 = 1013U;
	volatile int64_t t72 = -1554655548328293355LL;

	t72 = (((x3961>>x3962)&x3963)-x3964);

	if (t72 != -7632LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4089 = 2514U;
	volatile int16_t x4091 = INT16_MIN;
	int8_t x4092 = -1;
	volatile int32_t t73 = 81675804;

	t73 = (((x4089>>x4090)&x4091)-x4092);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4177 = 1;
	uint32_t x4178 = 27U;
	static int8_t x4179 = -3;
	int32_t x4180 = -519216065;
	int32_t t74 = -884522;

	t74 = (((x4177>>x4178)&x4179)-x4180);

	if (t74 != 519216065) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4203 = INT8_MAX;
	int8_t x4204 = 2;
	uint64_t t75 = 31977302LLU;

	t75 = (((x4201>>x4202)&x4203)-x4204);

	if (t75 != 96LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x4225 = INT64_MAX;
	static volatile int8_t x4226 = 5;
	uint64_t x4227 = 23253126164191LLU;
	static volatile uint8_t x4228 = 11U;
	uint64_t t76 = 13981971LLU;

	t76 = (((x4225>>x4226)&x4227)-x4228);

	if (t76 != 23253126164180LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4261 = 0U;
	volatile int8_t x4262 = 10;

	t77 = (((x4261>>x4262)&x4263)-x4264);

	if (t77 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4273 = 1U;
	int16_t x4274 = 3;
	static int32_t x4275 = INT32_MAX;
	static uint64_t x4276 = 7605587LLU;
	static uint64_t t78 = 72278025174495LLU;

	t78 = (((x4273>>x4274)&x4275)-x4276);

	if (t78 != 18446744073701946029LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4385 = 40622892LLU;
	uint64_t x4387 = 1911295511742LLU;
	int64_t x4388 = INT64_MIN;
	volatile uint64_t t79 = 9539785388LLU;

	t79 = (((x4385>>x4386)&x4387)-x4388);

	if (t79 != 9223372036856024216LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4429 = 7118;
	uint8_t x4430 = 28U;
	static volatile int64_t x4431 = INT64_MAX;
	uint64_t t80 = 0LLU;

	t80 = (((x4429>>x4430)&x4431)-x4432);

	if (t80 != 18446743420692902128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4498 = 13U;
	int16_t x4500 = INT16_MAX;

	t81 = (((x4497>>x4498)&x4499)-x4500);

	if (t81 != 12774) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4509 = 11U;
	int64_t x4511 = INT64_MIN;
	int8_t x4512 = INT8_MIN;
	int64_t t82 = -7271448LL;

	t82 = (((x4509>>x4510)&x4511)-x4512);

	if (t82 != 128LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4535 = INT64_MIN;
	int8_t x4536 = INT8_MIN;
	static int64_t t83 = 108801579477LL;

	t83 = (((x4533>>x4534)&x4535)-x4536);

	if (t83 != 128LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4554 = 0U;
	uint16_t x4555 = 777U;
	int16_t x4556 = INT16_MIN;
	static int32_t t84 = 30756678;

	t84 = (((x4553>>x4554)&x4555)-x4556);

	if (t84 != 32777) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4633 = 1123U;
	int16_t x4634 = 31;
	int32_t x4635 = -1;
	uint32_t x4636 = 922345624U;
	uint32_t t85 = 414988770U;

	t85 = (((x4633>>x4634)&x4635)-x4636);

	if (t85 != 3372621672U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4789 = 1200U;
	int8_t x4790 = 2;
	volatile int16_t x4791 = 1;
	static int8_t x4792 = -1;
	volatile uint32_t t86 = 0U;

	t86 = (((x4789>>x4790)&x4791)-x4792);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4877 = 0;
	uint8_t x4878 = 6U;
	int8_t x4879 = INT8_MIN;
	uint32_t x4880 = 4185U;
	uint32_t t87 = 36101532U;

	t87 = (((x4877>>x4878)&x4879)-x4880);

	if (t87 != 4294963111U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4902 = 54;
	uint64_t t88 = 7661273643LLU;

	t88 = (((x4901>>x4902)&x4903)-x4904);

	if (t88 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x4962 = 21U;
	volatile int16_t x4963 = INT16_MIN;
	volatile int16_t x4964 = -3721;

	t89 = (((x4961>>x4962)&x4963)-x4964);

	if (t89 != 3721) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4977 = INT64_MAX;
	uint32_t x4978 = 3U;
	int8_t x4979 = -9;
	volatile int8_t x4980 = INT8_MAX;
	int64_t t90 = 1LL;

	t90 = (((x4977>>x4978)&x4979)-x4980);

	if (t90 != 1152921504606846840LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5017 = 1539822460639LL;
	uint8_t x5018 = 4U;
	int16_t x5019 = INT16_MIN;
	volatile uint64_t x5020 = 2126867721386LLU;
	uint64_t t91 = 15493121268808070LLU;

	t91 = (((x5017>>x5018)&x5019)-x5020);

	if (t91 != 18446742043080725334LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5065 = UINT32_MAX;
	uint8_t x5066 = 4U;
	volatile int32_t x5068 = -92;
	int64_t t92 = 943240221116468624LL;

	t92 = (((x5065>>x5066)&x5067)-x5068);

	if (t92 != 268435547LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5085 = 27;
	static uint8_t x5086 = 3U;
	static int16_t x5088 = INT16_MAX;

	t93 = (((x5085>>x5086)&x5087)-x5088);

	if (t93 != -32764LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5165 = 3977U;
	int32_t x5166 = 1;
	volatile int64_t x5167 = INT64_MAX;
	int32_t x5168 = INT32_MAX;
	volatile int64_t t94 = 3012483LL;

	t94 = (((x5165>>x5166)&x5167)-x5168);

	if (t94 != -2147481659LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5181 = UINT32_MAX;
	volatile uint16_t x5182 = 11U;
	static int16_t x5183 = 1;
	int32_t x5184 = -351411;
	volatile uint32_t t95 = 14070924U;

	t95 = (((x5181>>x5182)&x5183)-x5184);

	if (t95 != 351412U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5213 = INT16_MAX;
	uint32_t x5214 = 0U;
	uint8_t x5215 = 7U;
	static int16_t x5216 = INT16_MIN;

	t96 = (((x5213>>x5214)&x5215)-x5216);

	if (t96 != 32775) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x5345 = 2U;
	uint8_t x5346 = 7U;
	static int16_t x5347 = INT16_MAX;

	t97 = (((x5345>>x5346)&x5347)-x5348);

	if (t97 != 18446068430148207731LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5413 = INT32_MAX;
	int8_t x5414 = 0;
	int64_t x5415 = -1LL;
	static volatile int64_t t98 = -1199LL;

	t98 = (((x5413>>x5414)&x5415)-x5416);

	if (t98 != 2185305011LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x5489 = INT16_MAX;
	int64_t x5490 = 0LL;
	int64_t x5491 = INT64_MAX;
	int16_t x5492 = INT16_MIN;
	int64_t t99 = -7111473523957639LL;

	t99 = (((x5489>>x5490)&x5491)-x5492);

	if (t99 != 65535LL) { NG(); } else { ; }
	
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

