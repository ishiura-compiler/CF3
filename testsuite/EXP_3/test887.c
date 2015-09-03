#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x93 = UINT16_MAX;
uint16_t x94 = 1U;
static volatile uint64_t t5 = 7LLU;
int64_t x303 = 49465LL;
static volatile int64_t t6 = 1062842020080495LL;
uint8_t x439 = 0U;
volatile int8_t x467 = INT8_MAX;
int64_t t8 = -16496892654494LL;
uint16_t x473 = 0U;
static int64_t x474 = INT64_MAX;
static int64_t t10 = 40653LL;
int8_t x772 = 0;
uint16_t x883 = 38U;
uint16_t x938 = 1914U;
volatile uint64_t t16 = 2713699106913LLU;
uint16_t x971 = UINT16_MAX;
volatile int8_t x1134 = 39;
uint16_t x1135 = 3U;
uint64_t x1183 = 0LLU;
static volatile uint64_t t19 = 1462619485131LLU;
volatile uint16_t x1219 = 35U;
int16_t x1346 = INT16_MIN;
volatile int8_t x1348 = 0;
volatile int8_t x1376 = 6;
volatile uint64_t t22 = 0LLU;
int64_t x1403 = INT64_MAX;
volatile uint32_t t24 = 96U;
uint16_t x1410 = 771U;
uint8_t x1775 = 8U;
volatile int32_t t26 = 668717;
static uint8_t x1918 = 10U;
int16_t x1954 = INT16_MAX;
int32_t x2045 = 0;
uint64_t t31 = 0LLU;
int8_t x2073 = 0;
int8_t x2074 = INT8_MIN;
int16_t x2076 = 9;
uint16_t x2117 = 526U;
static int16_t x2253 = INT16_MIN;
volatile int16_t x2254 = 50;
volatile int32_t t35 = 0;
int64_t x2302 = 24LL;
int32_t x2304 = 0;
uint64_t x2351 = 201LLU;
int32_t x2493 = INT32_MIN;
volatile uint64_t t39 = 365LLU;
static volatile uint32_t x2540 = 36U;
uint32_t x2695 = 1051913427U;
uint32_t t41 = 1504U;
static volatile uint64_t x2698 = 18108LLU;
static uint8_t x2700 = 3U;
volatile int8_t x2749 = INT8_MIN;
volatile uint16_t x2751 = UINT16_MAX;
int8_t x2752 = 3;
uint64_t t43 = 12LLU;
volatile uint8_t x2820 = 1U;
int64_t x3138 = INT64_MIN;
int8_t x3139 = 0;
uint32_t x3406 = 1689651U;
uint8_t x3635 = 60U;
uint16_t x3741 = 1467U;
int8_t x3743 = 14;
static volatile int32_t t52 = 30528640;
int16_t x3763 = INT16_MAX;
volatile uint32_t t53 = 70U;
uint32_t x3820 = 3U;
int8_t x3838 = -1;
uint8_t x3896 = 2U;
volatile uint32_t x3987 = UINT32_MAX;
int8_t x3988 = 2;
uint32_t x4287 = 1554U;
uint8_t x4288 = 0U;
uint32_t t58 = 916552372U;
static int64_t x4526 = -1LL;
static int64_t x4609 = INT64_MAX;
int16_t x4673 = INT16_MIN;
int16_t x4761 = -1;
volatile int64_t t64 = -58261987117787LL;
uint32_t t66 = 190209574U;
volatile int64_t t67 = 31299847782807LL;
int32_t x4873 = -27702;
volatile int64_t t68 = 105569LL;
uint8_t x5104 = 1U;
uint64_t t71 = 748LLU;
int8_t x5365 = -1;
uint32_t x5366 = 3802154U;
int16_t x5378 = INT16_MIN;
static uint32_t x5395 = UINT32_MAX;
uint32_t t75 = 426095U;
uint64_t x5513 = UINT64_MAX;
uint64_t x5577 = 513486560417202LLU;
static volatile int32_t t78 = -58345;
static volatile int8_t x5861 = INT8_MAX;
static int8_t x5862 = 5;
uint8_t x5863 = UINT8_MAX;
int16_t x5950 = -1;
int16_t x6337 = -1;
int32_t x6338 = INT32_MIN;
volatile int8_t x6340 = 0;
static int64_t x6431 = 260356550612LL;
uint32_t x6643 = UINT32_MAX;
uint16_t x6743 = 78U;
volatile int64_t x6851 = INT64_MAX;
volatile uint64_t x6967 = UINT64_MAX;
uint32_t x6978 = 1U;
int32_t x7026 = INT32_MAX;
int64_t x7319 = 303429LL;
volatile uint64_t x7345 = 8732733279513844467LLU;
uint32_t t95 = 214650700U;
volatile int32_t x7490 = INT32_MIN;
uint16_t x7491 = 0U;
static uint64_t x7611 = UINT64_MAX;
int16_t x7612 = 23;
volatile int8_t x7637 = -1;
int32_t t98 = 106;
uint8_t x7676 = 12U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int64_t x2 = 1450746392279878969LL;
	int64_t x3 = 1646762169149727LL;
	volatile int8_t x4 = 6;
	int64_t t0 = 15575748559LL;

	t0 = ((x1/x2)*(x3<<x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	volatile int64_t x10 = INT64_MAX;
	uint32_t x11 = UINT32_MAX;
	uint32_t x12 = 8U;
	volatile int64_t t1 = 112658657178LL;

	t1 = ((x9/x10)*(x11<<x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x65 = 65U;
	int8_t x66 = INT8_MAX;
	uint16_t x67 = UINT16_MAX;
	int8_t x68 = 2;
	uint32_t t2 = 2U;

	t2 = ((x65/x66)*(x67<<x68));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x95 = UINT64_MAX;
	uint16_t x96 = 2U;
	uint64_t t3 = 18048924032LLU;

	t3 = ((x93/x94)*(x95<<x96));

	if (t3 != 18446744073709289476LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x165 = 3999486U;
	int64_t x166 = INT64_MIN;
	int32_t x167 = 2;
	uint8_t x168 = 3U;
	volatile int64_t t4 = -16341268664309223LL;

	t4 = ((x165/x166)*(x167<<x168));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 4768276416200039315LLU;
	static volatile uint8_t x172 = 1U;

	t5 = ((x169/x170)*(x171<<x172));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x302 = -1;
	uint8_t x304 = 3U;

	t6 = ((x301/x302)*(x303<<x304));

	if (t6 != -100908600LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x437 = 422793724U;
	volatile uint32_t x438 = 1U;
	volatile uint8_t x440 = 22U;
	uint32_t t7 = 159U;

	t7 = ((x437/x438)*(x439<<x440));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x465 = INT32_MIN;
	int64_t x466 = 26853LL;
	uint16_t x468 = 1U;

	t8 = ((x465/x466)*(x467<<x468));

	if (t8 != -20312634LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x475 = INT16_MAX;
	volatile int64_t x476 = 0LL;
	static volatile int64_t t9 = -984LL;

	t9 = ((x473/x474)*(x475<<x476));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x517 = INT64_MIN;
	volatile int64_t x518 = INT64_MIN;
	uint8_t x519 = 70U;
	static int16_t x520 = 1;

	t10 = ((x517/x518)*(x519<<x520));

	if (t10 != 140LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x769 = 23U;
	int8_t x770 = -1;
	uint64_t x771 = 4062LLU;
	volatile uint64_t t11 = 160770560LLU;

	t11 = ((x769/x770)*(x771<<x772));

	if (t11 != 18446744073709458190LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x789 = -514840083731LL;
	int64_t x790 = 811727980764215LL;
	static uint64_t x791 = UINT64_MAX;
	uint16_t x792 = 54U;
	static volatile uint64_t t12 = 32888559184694LLU;

	t12 = ((x789/x790)*(x791<<x792));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x833 = INT8_MIN;
	uint64_t x834 = UINT64_MAX;
	uint64_t x835 = 920204734464836414LLU;
	static int16_t x836 = 12;
	uint64_t t13 = 493806308LLU;

	t13 = ((x833/x834)*(x835<<x836));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x881 = -3331765LL;
	volatile int16_t x882 = -448;
	int8_t x884 = 3;
	volatile int64_t t14 = 17141936LL;

	t14 = ((x881/x882)*(x883<<x884));

	if (t14 != 2260544LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x937 = UINT64_MAX;
	int32_t x939 = 100272215;
	int8_t x940 = 1;
	uint64_t t15 = 10688369955688LLU;

	t15 = ((x937/x938)*(x939<<x940));

	if (t15 != 12066522246743946698LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x957 = INT32_MIN;
	uint8_t x958 = 127U;
	volatile uint64_t x959 = 40347566975LLU;
	int16_t x960 = 60;

	t16 = ((x957/x958)*(x959<<x960));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x969 = 416925479902144LL;
	uint8_t x970 = 122U;
	int64_t x972 = 1LL;
	int64_t t17 = 416983707089LL;

	t17 = ((x969/x970)*(x971<<x972));

	if (t17 != 447921497137489770LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1133 = -1LL;
	uint8_t x1136 = 7U;
	static volatile int64_t t18 = 215626651LL;

	t18 = ((x1133/x1134)*(x1135<<x1136));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x1181 = UINT8_MAX;
	int64_t x1182 = -1LL;
	int64_t x1184 = 22LL;

	t19 = ((x1181/x1182)*(x1183<<x1184));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1217 = 33741487304718LLU;
	static uint16_t x1218 = UINT16_MAX;
	uint16_t x1220 = 6U;
	volatile uint64_t t20 = 1012737767950118LLU;

	t20 = ((x1217/x1218)*(x1219<<x1220));

	if (t20 != 1153291088320LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1345 = INT16_MAX;
	volatile int32_t x1347 = 433856;
	int32_t t21 = -361490617;

	t21 = ((x1345/x1346)*(x1347<<x1348));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1373 = INT64_MIN;
	uint64_t x1374 = UINT64_MAX;
	static volatile uint16_t x1375 = 224U;

	t22 = ((x1373/x1374)*(x1375<<x1376));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1401 = 6;
	static volatile int64_t x1402 = INT64_MAX;
	int8_t x1404 = 0;
	static volatile int64_t t23 = 8LL;

	t23 = ((x1401/x1402)*(x1403<<x1404));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1405 = 903941734U;
	int32_t x1406 = INT32_MAX;
	uint32_t x1407 = 51U;
	uint16_t x1408 = 0U;

	t24 = ((x1405/x1406)*(x1407<<x1408));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1409 = INT16_MAX;
	uint16_t x1411 = UINT16_MAX;
	volatile uint16_t x1412 = 0U;
	volatile int32_t t25 = -122824887;

	t25 = ((x1409/x1410)*(x1411<<x1412));

	if (t25 != 2752470) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1773 = 1;
	static volatile int32_t x1774 = -3895064;
	int16_t x1776 = 1;

	t26 = ((x1773/x1774)*(x1775<<x1776));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1917 = INT32_MAX;
	static volatile uint64_t x1919 = 1806LLU;
	volatile uint8_t x1920 = 2U;
	uint64_t t27 = 8231LLU;

	t27 = ((x1917/x1918)*(x1919<<x1920));

	if (t27 != 1551342181536LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1933 = UINT16_MAX;
	uint64_t x1934 = UINT64_MAX;
	volatile uint64_t x1935 = 22LLU;
	volatile uint32_t x1936 = 7U;
	uint64_t t28 = 3095660LLU;

	t28 = ((x1933/x1934)*(x1935<<x1936));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1953 = 1;
	static uint8_t x1955 = 7U;
	int16_t x1956 = 0;
	static int32_t t29 = -6;

	t29 = ((x1953/x1954)*(x1955<<x1956));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1993 = UINT64_MAX;
	volatile int16_t x1994 = INT16_MIN;
	static uint32_t x1995 = UINT32_MAX;
	static volatile uint8_t x1996 = 0U;
	volatile uint64_t t30 = 1973359750339162LLU;

	t30 = ((x1993/x1994)*(x1995<<x1996));

	if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2046 = INT32_MAX;
	static uint64_t x2047 = 2146720303LLU;
	static volatile uint8_t x2048 = 1U;

	t31 = ((x2045/x2046)*(x2047<<x2048));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2075 = 0;
	static volatile int32_t t32 = -11641357;

	t32 = ((x2073/x2074)*(x2075<<x2076));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2118 = INT8_MAX;
	uint8_t x2119 = 0U;
	volatile int8_t x2120 = 3;
	volatile int32_t t33 = 1;

	t33 = ((x2117/x2118)*(x2119<<x2120));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2153 = 445538756036832LLU;
	int64_t x2154 = -13849600LL;
	int64_t x2155 = 34828203246578LL;
	int8_t x2156 = 1;
	static volatile uint64_t t34 = 1022724637749LLU;

	t34 = ((x2153/x2154)*(x2155<<x2156));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x2255 = INT16_MAX;
	static int32_t x2256 = 1;

	t35 = ((x2253/x2254)*(x2255<<x2256));

	if (t35 != -42924770) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2301 = -1LL;
	static int64_t x2303 = INT64_MAX;
	static int64_t t36 = -217655516213072LL;

	t36 = ((x2301/x2302)*(x2303<<x2304));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2349 = UINT8_MAX;
	volatile uint16_t x2350 = UINT16_MAX;
	uint16_t x2352 = 29U;
	volatile uint64_t t37 = 9814LLU;

	t37 = ((x2349/x2350)*(x2351<<x2352));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x2465 = 47;
	volatile int16_t x2466 = 3780;
	uint16_t x2467 = UINT16_MAX;
	volatile uint16_t x2468 = 11U;
	static volatile int32_t t38 = -682;

	t38 = ((x2465/x2466)*(x2467<<x2468));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2494 = 674103LL;
	uint64_t x2495 = UINT64_MAX;
	int16_t x2496 = 0;

	t39 = ((x2493/x2494)*(x2495<<x2496));

	if (t39 != 3185LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2537 = 10;
	int16_t x2538 = INT16_MAX;
	volatile uint64_t x2539 = UINT64_MAX;
	uint64_t t40 = 71600968754659819LLU;

	t40 = ((x2537/x2538)*(x2539<<x2540));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2693 = 86;
	uint16_t x2694 = 13U;
	uint8_t x2696 = 3U;

	t41 = ((x2693/x2694)*(x2695<<x2696));

	if (t41 != 3247204240U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2697 = 1895119317319656LLU;
	volatile uint8_t x2699 = UINT8_MAX;
	volatile uint64_t t42 = 299513LLU;

	t42 = ((x2697/x2698)*(x2699<<x2700));

	if (t42 != 213499194130440LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x2750 = 39566164716LLU;

	t43 = ((x2749/x2750)*(x2751<<x2752));

	if (t43 != 244432560963000LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x2817 = UINT64_MAX;
	int32_t x2818 = INT32_MAX;
	int16_t x2819 = 6;
	static uint64_t t44 = 950LLU;

	t44 = ((x2817/x2818)*(x2819<<x2820));

	if (t44 != 103079215152LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2841 = -1LL;
	uint8_t x2842 = 103U;
	static uint64_t x2843 = UINT64_MAX;
	volatile uint8_t x2844 = 0U;
	volatile uint64_t t45 = 100016771539552506LLU;

	t45 = ((x2841/x2842)*(x2843<<x2844));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3125 = INT8_MIN;
	static uint32_t x3126 = 103424637U;
	volatile int64_t x3127 = 2592LL;
	int16_t x3128 = 0;
	static volatile int64_t t46 = 0LL;

	t46 = ((x3125/x3126)*(x3127<<x3128));

	if (t46 != 106272LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x3137 = INT8_MIN;
	int16_t x3140 = 1;
	int64_t t47 = 8574LL;

	t47 = ((x3137/x3138)*(x3139<<x3140));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x3173 = -1;
	static int64_t x3174 = 5793660698771LL;
	int8_t x3175 = 51;
	int8_t x3176 = 4;
	int64_t t48 = -18638LL;

	t48 = ((x3173/x3174)*(x3175<<x3176));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3405 = 458U;
	int8_t x3407 = 1;
	int64_t x3408 = 1LL;
	uint32_t t49 = 6616743U;

	t49 = ((x3405/x3406)*(x3407<<x3408));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x3429 = UINT16_MAX;
	static uint8_t x3430 = 4U;
	uint64_t x3431 = 240311493LLU;
	uint16_t x3432 = 0U;
	volatile uint64_t t50 = 7150766031928795492LLU;

	t50 = ((x3429/x3430)*(x3431<<x3432));

	if (t50 != 3937023189819LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3633 = INT8_MAX;
	static uint16_t x3634 = UINT16_MAX;
	int8_t x3636 = 1;
	volatile int32_t t51 = -116;

	t51 = ((x3633/x3634)*(x3635<<x3636));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3742 = UINT16_MAX;
	int16_t x3744 = 1;

	t52 = ((x3741/x3742)*(x3743<<x3744));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3761 = 654011853U;
	uint16_t x3762 = 104U;
	uint8_t x3764 = 1U;

	t53 = ((x3761/x3762)*(x3763<<x3764));

	if (t53 != 4093580930U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3817 = 3;
	uint64_t x3818 = UINT64_MAX;
	uint8_t x3819 = 2U;
	uint64_t t54 = 1734594754066668LLU;

	t54 = ((x3817/x3818)*(x3819<<x3820));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3837 = INT16_MAX;
	uint32_t x3839 = UINT32_MAX;
	static volatile int8_t x3840 = 0;
	static volatile uint32_t t55 = 169U;

	t55 = ((x3837/x3838)*(x3839<<x3840));

	if (t55 != 32767U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3893 = 1834U;
	volatile int32_t x3894 = INT32_MAX;
	uint64_t x3895 = UINT64_MAX;
	uint64_t t56 = 324587994LLU;

	t56 = ((x3893/x3894)*(x3895<<x3896));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3985 = UINT32_MAX;
	int64_t x3986 = 260577LL;
	volatile int64_t t57 = 80587LL;

	t57 = ((x3985/x3986)*(x3987<<x3988));

	if (t57 != 70789650906744LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4285 = -1;
	int32_t x4286 = -3971;

	t58 = ((x4285/x4286)*(x4287<<x4288));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x4369 = INT8_MIN;
	int32_t x4370 = INT32_MIN;
	static uint64_t x4371 = 44074910LLU;
	static int8_t x4372 = 0;
	volatile uint64_t t59 = 1984636307LLU;

	t59 = ((x4369/x4370)*(x4371<<x4372));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x4525 = INT8_MIN;
	int8_t x4527 = INT8_MAX;
	static volatile int8_t x4528 = 0;
	int64_t t60 = -13244938LL;

	t60 = ((x4525/x4526)*(x4527<<x4528));

	if (t60 != 16256LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4610 = 19U;
	uint32_t x4611 = 1U;
	uint16_t x4612 = 1U;
	static volatile int64_t t61 = -5637753696LL;

	t61 = ((x4609/x4610)*(x4611<<x4612));

	if (t61 != 970881267037344820LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4674 = 122140020768483045LLU;
	int64_t x4675 = 33160999497548LL;
	static uint8_t x4676 = 1U;
	uint64_t t62 = 71974125985646LLU;

	t62 = ((x4673/x4674)*(x4675<<x4676));

	if (t62 != 10014621848259496LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x4693 = INT64_MIN;
	int32_t x4694 = INT32_MAX;
	int8_t x4695 = INT8_MAX;
	int16_t x4696 = 2;
	static int64_t t63 = 25300LL;

	t63 = ((x4693/x4694)*(x4695<<x4696));

	if (t63 != -2181843387384LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4762 = -3568LL;
	volatile uint16_t x4763 = 148U;
	uint8_t x4764 = 2U;

	t64 = ((x4761/x4762)*(x4763<<x4764));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4765 = INT32_MIN;
	static uint8_t x4766 = UINT8_MAX;
	int16_t x4767 = 0;
	uint8_t x4768 = 18U;
	int32_t t65 = 6;

	t65 = ((x4765/x4766)*(x4767<<x4768));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4773 = INT16_MIN;
	uint32_t x4774 = UINT32_MAX;
	uint8_t x4775 = 0U;
	uint8_t x4776 = 0U;

	t66 = ((x4773/x4774)*(x4775<<x4776));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4857 = INT16_MIN;
	volatile int64_t x4858 = 75726355620784LL;
	int64_t x4859 = 1937582LL;
	static int8_t x4860 = 1;

	t67 = ((x4857/x4858)*(x4859<<x4860));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4874 = INT64_MIN;
	volatile uint32_t x4875 = 779326U;
	static int16_t x4876 = 0;

	t68 = ((x4873/x4874)*(x4875<<x4876));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4989 = -1;
	static uint32_t x4990 = 13041477U;
	static volatile int64_t x4991 = 19LL;
	static volatile int16_t x4992 = 12;
	static int64_t t69 = 51001206106859592LL;

	t69 = ((x4989/x4990)*(x4991<<x4992));

	if (t69 != 25604096LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x5101 = 1506U;
	int64_t x5102 = INT64_MIN;
	uint32_t x5103 = UINT32_MAX;
	int64_t t70 = -1LL;

	t70 = ((x5101/x5102)*(x5103<<x5104));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5157 = INT8_MIN;
	int32_t x5158 = -8168;
	uint64_t x5159 = UINT64_MAX;
	uint8_t x5160 = 1U;

	t71 = ((x5157/x5158)*(x5159<<x5160));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x5367 = UINT8_MAX;
	uint8_t x5368 = 0U;
	volatile uint32_t t72 = 1011680318U;

	t72 = ((x5365/x5366)*(x5367<<x5368));

	if (t72 != 287895U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x5377 = INT64_MIN;
	static int64_t x5379 = 168LL;
	volatile uint32_t x5380 = 2U;
	int64_t t73 = 7642765539010LL;

	t73 = ((x5377/x5378)*(x5379<<x5380));

	if (t73 != 189151184349560832LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5393 = -1;
	static int64_t x5394 = -1LL;
	uint16_t x5396 = 10U;
	int64_t t74 = 62439903148991LL;

	t74 = ((x5393/x5394)*(x5395<<x5396));

	if (t74 != 4294966272LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5461 = 276198;
	uint32_t x5462 = UINT32_MAX;
	int8_t x5463 = 11;
	uint8_t x5464 = 0U;

	t75 = ((x5461/x5462)*(x5463<<x5464));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5514 = 355859957U;
	uint16_t x5515 = 9U;
	int8_t x5516 = 1;
	uint64_t t76 = 149154392LLU;

	t76 = ((x5513/x5514)*(x5515<<x5516));

	if (t76 != 933067592442LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x5578 = 448698U;
	int16_t x5579 = INT16_MAX;
	static int8_t x5580 = 1;
	static uint64_t t77 = 416914LLU;

	t77 = ((x5577/x5578)*(x5579<<x5580));

	if (t77 != 74996608461502LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x5777 = UINT8_MAX;
	static uint16_t x5778 = 25U;
	uint16_t x5779 = 1286U;
	uint16_t x5780 = 1U;

	t78 = ((x5777/x5778)*(x5779<<x5780));

	if (t78 != 25720) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5864 = 0;
	static int32_t t79 = 739;

	t79 = ((x5861/x5862)*(x5863<<x5864));

	if (t79 != 6375) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5949 = -1242;
	uint16_t x5951 = 20U;
	uint32_t x5952 = 3U;
	int32_t t80 = 35;

	t80 = ((x5949/x5950)*(x5951<<x5952));

	if (t80 != 198720) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x6037 = 290354135U;
	int8_t x6038 = 6;
	uint32_t x6039 = 1130U;
	uint16_t x6040 = 12U;
	static volatile uint32_t t81 = 793586U;

	t81 = ((x6037/x6038)*(x6039<<x6040));

	if (t81 != 502784000U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x6339 = INT64_MAX;
	volatile int64_t t82 = -2230164LL;

	t82 = ((x6337/x6338)*(x6339<<x6340));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x6429 = INT8_MAX;
	int32_t x6430 = INT32_MIN;
	volatile int16_t x6432 = 6;
	int64_t t83 = 0LL;

	t83 = ((x6429/x6430)*(x6431<<x6432));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x6641 = INT64_MIN;
	volatile uint64_t x6642 = 309LLU;
	uint8_t x6644 = 14U;
	uint64_t t84 = 0LLU;

	t84 = ((x6641/x6642)*(x6643<<x6644));

	if (t84 != 13969379004745482240LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x6741 = INT64_MAX;
	static volatile uint8_t x6742 = UINT8_MAX;
	uint16_t x6744 = 1U;
	volatile int64_t t85 = 34535088910162LL;

	t85 = ((x6741/x6742)*(x6743<<x6744));

	if (t85 != 5642533481369980416LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x6849 = 0U;
	int32_t x6850 = INT32_MAX;
	volatile int8_t x6852 = 0;
	static volatile int64_t t86 = -359669815960LL;

	t86 = ((x6849/x6850)*(x6851<<x6852));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x6965 = INT16_MIN;
	int64_t x6966 = -769LL;
	int8_t x6968 = 6;
	volatile uint64_t t87 = 13498025919LLU;

	t87 = ((x6965/x6966)*(x6967<<x6968));

	if (t87 != 18446744073709548928LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x6977 = -1LL;
	static int16_t x6979 = INT16_MAX;
	static volatile int8_t x6980 = 0;
	volatile int64_t t88 = -1460119LL;

	t88 = ((x6977/x6978)*(x6979<<x6980));

	if (t88 != -32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x7025 = 20U;
	uint32_t x7027 = 7U;
	int16_t x7028 = 1;
	static volatile uint32_t t89 = 166U;

	t89 = ((x7025/x7026)*(x7027<<x7028));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x7089 = 2137073U;
	int16_t x7090 = 27;
	volatile int32_t x7091 = 1610;
	uint16_t x7092 = 0U;
	uint32_t t90 = 58252236U;

	t90 = ((x7089/x7090)*(x7091<<x7092));

	if (t90 != 127431500U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x7129 = 39U;
	int32_t x7130 = INT32_MIN;
	uint16_t x7131 = UINT16_MAX;
	volatile int8_t x7132 = 1;
	volatile int32_t t91 = -39;

	t91 = ((x7129/x7130)*(x7131<<x7132));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x7317 = 1;
	static int32_t x7318 = INT32_MAX;
	uint16_t x7320 = 3U;
	int64_t t92 = 4092471993684380LL;

	t92 = ((x7317/x7318)*(x7319<<x7320));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x7346 = INT64_MIN;
	uint8_t x7347 = UINT8_MAX;
	int64_t x7348 = 0LL;
	volatile uint64_t t93 = 1914534453262653LLU;

	t93 = ((x7345/x7346)*(x7347<<x7348));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x7389 = INT8_MIN;
	static int16_t x7390 = INT16_MAX;
	static volatile uint32_t x7391 = 28587821U;
	uint16_t x7392 = 8U;
	uint32_t t94 = 399U;

	t94 = ((x7389/x7390)*(x7391<<x7392));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x7481 = INT32_MIN;
	uint8_t x7482 = UINT8_MAX;
	static uint32_t x7483 = 29249U;
	int8_t x7484 = 6;

	t95 = ((x7481/x7482)*(x7483<<x7484));

	if (t95 != 2308431872U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x7489 = -1LL;
	int16_t x7492 = 7;
	volatile int64_t t96 = -159464LL;

	t96 = ((x7489/x7490)*(x7491<<x7492));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x7609 = INT64_MIN;
	int8_t x7610 = INT8_MIN;
	uint64_t t97 = 232257913886LLU;

	t97 = ((x7609/x7610)*(x7611<<x7612));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x7638 = INT16_MIN;
	int32_t x7639 = 10494;
	uint16_t x7640 = 1U;

	t98 = ((x7637/x7638)*(x7639<<x7640));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x7673 = INT32_MIN;
	uint64_t x7674 = 138499536702LLU;
	volatile uint16_t x7675 = 404U;
	uint64_t t99 = 435484938310861599LLU;

	t99 = ((x7673/x7674)*(x7675<<x7676));

	if (t99 != 220400570089472LLU) { NG(); } else { ; }
	
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

