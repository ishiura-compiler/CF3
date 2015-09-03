#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x89 = INT8_MAX;
int32_t x91 = INT32_MIN;
int32_t x92 = INT32_MIN;
volatile int32_t t0 = -1975403;
int8_t x206 = -44;
int64_t x549 = -60079172600159813LL;
uint8_t x661 = 3U;
volatile int16_t x757 = INT16_MAX;
int64_t x759 = -1LL;
volatile uint8_t x774 = 0U;
uint32_t x775 = UINT32_MAX;
uint8_t x777 = 74U;
uint16_t x882 = 15U;
int64_t x953 = 746189LL;
int32_t x973 = INT32_MIN;
int8_t x976 = -1;
int32_t t13 = -1976350;
volatile int16_t x1094 = INT16_MAX;
int32_t t14 = 1403;
static int64_t x1118 = INT64_MAX;
volatile int64_t t15 = INT64_MAX;
int8_t x1177 = INT8_MAX;
static uint16_t x1242 = 48U;
volatile int8_t x1256 = INT8_MIN;
static int16_t x1280 = -1;
uint32_t t19 = UINT32_MAX;
volatile int8_t x1354 = INT8_MIN;
volatile int32_t t21 = -4;
uint8_t x1485 = UINT8_MAX;
int64_t x1494 = -953784003202115LL;
static int32_t x1496 = -1;
uint64_t t23 = UINT64_MAX;
static uint32_t x1562 = UINT32_MAX;
uint32_t t24 = UINT32_MAX;
volatile uint64_t x1617 = 116911007576LLU;
static volatile uint32_t t26 = 281276U;
int16_t x1838 = -1;
uint64_t x1909 = 315LLU;
static int64_t x1911 = INT64_MIN;
volatile int32_t x2113 = INT32_MIN;
static int32_t x2115 = -1;
static int16_t x2231 = INT16_MIN;
volatile int32_t x2245 = 1036;
static int64_t x2249 = 62599658LL;
volatile int64_t t34 = -2LL;
int8_t x2442 = 2;
static uint8_t x2611 = 1U;
volatile int64_t x2667 = -1LL;
int8_t x2668 = -1;
uint16_t x2793 = UINT16_MAX;
volatile int32_t t40 = 1830019;
static uint64_t x2827 = UINT64_MAX;
static volatile int64_t t44 = -144LL;
int32_t x3317 = 997;
static int64_t x3318 = INT64_MIN;
int64_t x3319 = -1LL;
int64_t t45 = 232975917085558LL;
int32_t x3555 = INT32_MIN;
int8_t x3794 = 1;
static volatile int8_t x3831 = INT8_MIN;
volatile int32_t t50 = 228;
uint32_t x3990 = 186016U;
int8_t x4181 = -6;
int16_t x4182 = INT16_MIN;
int32_t x4183 = INT32_MIN;
int32_t t53 = 1;
int32_t x4217 = 26304;
static volatile int32_t t55 = 87;
int8_t x4692 = INT8_MIN;
volatile int32_t t60 = -85329;
uint64_t x4903 = UINT64_MAX;
int8_t x4960 = 0;
static int8_t x5013 = INT8_MIN;
int32_t x5014 = INT32_MIN;
volatile int32_t x5239 = INT32_MIN;
int8_t x5429 = INT8_MIN;
int32_t t68 = 6;
volatile int64_t x5445 = 23779176437216LL;
static int32_t x5777 = -1;
volatile int64_t t71 = -1786907142775LL;
int8_t x5784 = -1;
uint8_t x5906 = UINT8_MAX;
int32_t x6006 = 1171;
uint32_t x6121 = 736289U;
uint64_t x6123 = UINT64_MAX;
int32_t x6213 = INT32_MIN;
static volatile uint64_t x6363 = UINT64_MAX;
int8_t x6364 = -1;
int32_t x6556 = INT32_MIN;
static volatile int8_t x6607 = -1;
int64_t x6608 = -1LL;
uint16_t x6689 = UINT16_MAX;
static int8_t x6801 = INT8_MIN;
int16_t x6803 = INT16_MIN;
static volatile int8_t x6845 = -8;
volatile int32_t x6846 = -1;
static int32_t t87 = 1;
static int32_t x6850 = INT32_MIN;
volatile int16_t x6852 = -1;
int64_t t90 = -503996LL;
int8_t x7378 = INT8_MIN;
int64_t x7632 = INT64_MIN;
int8_t x7712 = 0;


void f0(void) {
	volatile int32_t x90 = INT32_MIN;

	t0 = ((x89|x90)/(x91==x92));

	if (t0 != -2147483521) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x205 = 3;
	int16_t x207 = -1;
	uint32_t x208 = UINT32_MAX;
	int32_t t1 = -16554983;

	t1 = ((x205|x206)/(x207==x208));

	if (t1 != -41) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x269 = -1LL;
	uint32_t x270 = 12174384U;
	volatile int32_t x271 = INT32_MIN;
	volatile int32_t x272 = INT32_MIN;
	volatile int64_t t2 = 43402343148638LL;

	t2 = ((x269|x270)/(x271==x272));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x301 = UINT64_MAX;
	static int8_t x302 = 1;
	int8_t x303 = -1;
	int16_t x304 = -1;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = ((x301|x302)/(x303==x304));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x421 = INT64_MIN;
	int8_t x422 = -1;
	static uint64_t x423 = UINT64_MAX;
	int64_t x424 = -1LL;
	int64_t t4 = -44265487259403152LL;

	t4 = ((x421|x422)/(x423==x424));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x550 = INT8_MAX;
	static int8_t x551 = -1;
	uint64_t x552 = UINT64_MAX;
	static int64_t t5 = -2927125LL;

	t5 = ((x549|x550)/(x551==x552));

	if (t5 != -60079172600159745LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x662 = 0;
	int16_t x663 = -1;
	int16_t x664 = -1;
	static int32_t t6 = 50795;

	t6 = ((x661|x662)/(x663==x664));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x758 = INT64_MAX;
	static int32_t x760 = -1;
	volatile int64_t t7 = INT64_MAX;

	t7 = ((x757|x758)/(x759==x760));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x773 = UINT16_MAX;
	static uint32_t x776 = UINT32_MAX;
	int32_t t8 = -525;

	t8 = ((x773|x774)/(x775==x776));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x778 = -1LL;
	static volatile int16_t x779 = INT16_MIN;
	static int16_t x780 = INT16_MIN;
	static int64_t t9 = -45530360243350LL;

	t9 = ((x777|x778)/(x779==x780));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x881 = INT64_MIN;
	int64_t x883 = INT64_MIN;
	static int64_t x884 = INT64_MIN;
	volatile int64_t t10 = -2020567643979715LL;

	t10 = ((x881|x882)/(x883==x884));

	if (t10 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x954 = 0LL;
	static int64_t x955 = INT64_MAX;
	volatile int64_t x956 = INT64_MAX;
	static volatile int64_t t11 = 8470728002192LL;

	t11 = ((x953|x954)/(x955==x956));

	if (t11 != 746189LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x974 = -1;
	static volatile int8_t x975 = -1;
	volatile int32_t t12 = 9894295;

	t12 = ((x973|x974)/(x975==x976));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1025 = -1;
	volatile int8_t x1026 = -2;
	int16_t x1027 = -1;
	uint64_t x1028 = UINT64_MAX;

	t13 = ((x1025|x1026)/(x1027==x1028));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x1093 = INT16_MIN;
	int8_t x1095 = -1;
	int32_t x1096 = -1;

	t14 = ((x1093|x1094)/(x1095==x1096));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1117 = 382;
	int32_t x1119 = -1;
	uint32_t x1120 = UINT32_MAX;

	t15 = ((x1117|x1118)/(x1119==x1120));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x1178 = INT64_MIN;
	int16_t x1179 = INT16_MIN;
	int16_t x1180 = INT16_MIN;
	volatile int64_t t16 = 520817597294067156LL;

	t16 = ((x1177|x1178)/(x1179==x1180));

	if (t16 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1241 = UINT8_MAX;
	volatile int64_t x1243 = -1LL;
	int8_t x1244 = -1;
	int32_t t17 = -75934;

	t17 = ((x1241|x1242)/(x1243==x1244));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1253 = INT8_MIN;
	static int8_t x1254 = 7;
	volatile int8_t x1255 = INT8_MIN;
	volatile int32_t t18 = -1663478;

	t18 = ((x1253|x1254)/(x1255==x1256));

	if (t18 != -121) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1277 = UINT32_MAX;
	uint32_t x1278 = UINT32_MAX;
	volatile int16_t x1279 = -1;

	t19 = ((x1277|x1278)/(x1279==x1280));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1353 = INT16_MAX;
	int32_t x1355 = -1;
	int16_t x1356 = -1;
	int32_t t20 = 245;

	t20 = ((x1353|x1354)/(x1355==x1356));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1389 = -1;
	int32_t x1390 = INT32_MIN;
	static int16_t x1391 = INT16_MAX;
	volatile int16_t x1392 = INT16_MAX;

	t21 = ((x1389|x1390)/(x1391==x1392));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1486 = -1LL;
	int16_t x1487 = INT16_MIN;
	int16_t x1488 = INT16_MIN;
	volatile int64_t t22 = -7957902LL;

	t22 = ((x1485|x1486)/(x1487==x1488));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1493 = UINT64_MAX;
	static int64_t x1495 = -1LL;

	t23 = ((x1493|x1494)/(x1495==x1496));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1561 = UINT32_MAX;
	volatile int16_t x1563 = INT16_MIN;
	volatile int16_t x1564 = INT16_MIN;

	t24 = ((x1561|x1562)/(x1563==x1564));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1618 = UINT16_MAX;
	int16_t x1619 = -1;
	volatile int8_t x1620 = -1;
	static uint64_t t25 = 101745229LLU;

	t25 = ((x1617|x1618)/(x1619==x1620));

	if (t25 != 116911046655LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1753 = INT32_MIN;
	uint32_t x1754 = 65724U;
	uint32_t x1755 = UINT32_MAX;
	int32_t x1756 = -1;

	t26 = ((x1753|x1754)/(x1755==x1756));

	if (t26 != 2147549372U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1837 = -1;
	volatile int16_t x1839 = INT16_MIN;
	int16_t x1840 = INT16_MIN;
	volatile int32_t t27 = 43810381;

	t27 = ((x1837|x1838)/(x1839==x1840));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1910 = UINT8_MAX;
	int64_t x1912 = INT64_MIN;
	uint64_t t28 = 137LLU;

	t28 = ((x1909|x1910)/(x1911==x1912));

	if (t28 != 511LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1953 = -1LL;
	volatile int8_t x1954 = 16;
	volatile int16_t x1955 = INT16_MAX;
	int16_t x1956 = INT16_MAX;
	volatile int64_t t29 = 39LL;

	t29 = ((x1953|x1954)/(x1955==x1956));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2065 = -48;
	volatile int32_t x2066 = -1;
	int16_t x2067 = INT16_MIN;
	static int16_t x2068 = INT16_MIN;
	volatile int32_t t30 = -331;

	t30 = ((x2065|x2066)/(x2067==x2068));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x2114 = 9409515620LL;
	int64_t x2116 = -1LL;
	volatile int64_t t31 = -52233596LL;

	t31 = ((x2113|x2114)/(x2115==x2116));

	if (t31 != -1327902620LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x2229 = INT32_MAX;
	int32_t x2230 = 0;
	int16_t x2232 = INT16_MIN;
	volatile int32_t t32 = INT32_MAX;

	t32 = ((x2229|x2230)/(x2231==x2232));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2246 = 703U;
	int8_t x2247 = -1;
	static int32_t x2248 = -1;
	static uint32_t t33 = 3U;

	t33 = ((x2245|x2246)/(x2247==x2248));

	if (t33 != 1727U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2250 = -1LL;
	uint32_t x2251 = UINT32_MAX;
	int8_t x2252 = -1;

	t34 = ((x2249|x2250)/(x2251==x2252));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x2413 = 18;
	uint32_t x2414 = 219341738U;
	volatile int64_t x2415 = INT64_MAX;
	int64_t x2416 = INT64_MAX;
	static uint32_t t35 = 29645830U;

	t35 = ((x2413|x2414)/(x2415==x2416));

	if (t35 != 219341754U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2441 = -1LL;
	static volatile int64_t x2443 = -1LL;
	int32_t x2444 = -1;
	volatile int64_t t36 = -24LL;

	t36 = ((x2441|x2442)/(x2443==x2444));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2601 = 166U;
	int8_t x2602 = -1;
	int32_t x2603 = -1;
	int16_t x2604 = -1;
	volatile int32_t t37 = 6380922;

	t37 = ((x2601|x2602)/(x2603==x2604));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2609 = -10449;
	int16_t x2610 = INT16_MIN;
	uint16_t x2612 = 1U;
	static int32_t t38 = -284173175;

	t38 = ((x2609|x2610)/(x2611==x2612));

	if (t38 != -10449) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2665 = INT8_MIN;
	uint32_t x2666 = UINT32_MAX;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = ((x2665|x2666)/(x2667==x2668));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2794 = -3;
	int8_t x2795 = -1;
	int8_t x2796 = -1;

	t40 = ((x2793|x2794)/(x2795==x2796));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2825 = INT32_MAX;
	volatile int16_t x2826 = -1;
	int16_t x2828 = -1;
	volatile int32_t t41 = 1618437;

	t41 = ((x2825|x2826)/(x2827==x2828));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2929 = 1;
	int64_t x2930 = INT64_MIN;
	int8_t x2931 = -1;
	uint32_t x2932 = UINT32_MAX;
	int64_t t42 = 5438201806LL;

	t42 = ((x2929|x2930)/(x2931==x2932));

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3133 = INT16_MIN;
	static int8_t x3134 = 13;
	uint8_t x3135 = UINT8_MAX;
	uint8_t x3136 = UINT8_MAX;
	int32_t t43 = 122;

	t43 = ((x3133|x3134)/(x3135==x3136));

	if (t43 != -32755) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3277 = INT16_MAX;
	int64_t x3278 = 111352548032632869LL;
	int16_t x3279 = -1;
	int32_t x3280 = -1;

	t44 = ((x3277|x3278)/(x3279==x3280));

	if (t44 != 111352548032643071LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x3320 = -1LL;

	t45 = ((x3317|x3318)/(x3319==x3320));

	if (t45 != -9223372036854774811LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3477 = -1;
	uint64_t x3478 = 777098898LLU;
	static int8_t x3479 = INT8_MIN;
	static volatile int8_t x3480 = INT8_MIN;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x3477|x3478)/(x3479==x3480));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x3553 = -1;
	static uint8_t x3554 = UINT8_MAX;
	int32_t x3556 = INT32_MIN;
	volatile int32_t t47 = 0;

	t47 = ((x3553|x3554)/(x3555==x3556));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3649 = INT64_MAX;
	static uint64_t x3650 = 1828879084725LLU;
	uint32_t x3651 = UINT32_MAX;
	volatile int16_t x3652 = -1;
	volatile uint64_t t48 = 0LLU;

	t48 = ((x3649|x3650)/(x3651==x3652));

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x3793 = 19U;
	volatile int8_t x3795 = -1;
	static int64_t x3796 = -1LL;
	static int32_t t49 = 3104254;

	t49 = ((x3793|x3794)/(x3795==x3796));

	if (t49 != 19) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3829 = 6U;
	volatile int16_t x3830 = 14;
	int8_t x3832 = INT8_MIN;

	t50 = ((x3829|x3830)/(x3831==x3832));

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x3989 = -1;
	int8_t x3991 = -1;
	static int8_t x3992 = -1;
	uint32_t t51 = UINT32_MAX;

	t51 = ((x3989|x3990)/(x3991==x3992));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x4017 = -1;
	int32_t x4018 = -4;
	uint32_t x4019 = UINT32_MAX;
	uint32_t x4020 = UINT32_MAX;
	static volatile int32_t t52 = -4364496;

	t52 = ((x4017|x4018)/(x4019==x4020));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x4184 = INT32_MIN;

	t53 = ((x4181|x4182)/(x4183==x4184));

	if (t53 != -6) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x4218 = 74651U;
	volatile uint64_t x4219 = UINT64_MAX;
	int32_t x4220 = -1;
	uint32_t t54 = 1405126U;

	t54 = ((x4217|x4218)/(x4219==x4220));

	if (t54 != 92123U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x4401 = INT8_MIN;
	uint8_t x4402 = UINT8_MAX;
	static int8_t x4403 = INT8_MIN;
	volatile int8_t x4404 = INT8_MIN;

	t55 = ((x4401|x4402)/(x4403==x4404));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x4453 = INT32_MAX;
	uint32_t x4454 = UINT32_MAX;
	static int32_t x4455 = -1;
	uint32_t x4456 = UINT32_MAX;
	uint32_t t56 = UINT32_MAX;

	t56 = ((x4453|x4454)/(x4455==x4456));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4481 = INT8_MIN;
	volatile int16_t x4482 = INT16_MIN;
	int32_t x4483 = -1;
	static int64_t x4484 = -1LL;
	volatile int32_t t57 = -573266262;

	t57 = ((x4481|x4482)/(x4483==x4484));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x4689 = -253266461783LL;
	uint32_t x4690 = 3807U;
	int8_t x4691 = INT8_MIN;
	volatile int64_t t58 = 78371LL;

	t58 = ((x4689|x4690)/(x4691==x4692));

	if (t58 != -253266460673LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4741 = 1;
	static int32_t x4742 = INT32_MIN;
	volatile int32_t x4743 = -1;
	static volatile int64_t x4744 = -1LL;
	volatile int32_t t59 = -2432135;

	t59 = ((x4741|x4742)/(x4743==x4744));

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x4793 = UINT8_MAX;
	uint16_t x4794 = 3914U;
	int16_t x4795 = -1;
	int16_t x4796 = -1;

	t60 = ((x4793|x4794)/(x4795==x4796));

	if (t60 != 4095) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x4797 = 141558LL;
	int16_t x4798 = 106;
	volatile int8_t x4799 = INT8_MIN;
	volatile int8_t x4800 = INT8_MIN;
	static volatile int64_t t61 = 7732731160LL;

	t61 = ((x4797|x4798)/(x4799==x4800));

	if (t61 != 141566LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4901 = 9795074U;
	static uint8_t x4902 = 10U;
	volatile int16_t x4904 = -1;
	volatile uint32_t t62 = 2606U;

	t62 = ((x4901|x4902)/(x4903==x4904));

	if (t62 != 9795082U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x4933 = UINT16_MAX;
	uint32_t x4934 = 429016141U;
	volatile int64_t x4935 = -1LL;
	int32_t x4936 = -1;
	uint32_t t63 = 1563U;

	t63 = ((x4933|x4934)/(x4935==x4936));

	if (t63 != 429064191U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4957 = 53U;
	int16_t x4958 = -1;
	volatile int64_t x4959 = 0LL;
	int32_t t64 = 118766982;

	t64 = ((x4957|x4958)/(x4959==x4960));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x5015 = 1U;
	static int64_t x5016 = 1LL;
	volatile int32_t t65 = -1;

	t65 = ((x5013|x5014)/(x5015==x5016));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x5237 = INT32_MIN;
	volatile uint8_t x5238 = 0U;
	int32_t x5240 = INT32_MIN;
	static volatile int32_t t66 = INT32_MIN;

	t66 = ((x5237|x5238)/(x5239==x5240));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x5297 = 2U;
	int16_t x5298 = INT16_MIN;
	int8_t x5299 = -1;
	int16_t x5300 = -1;
	static int32_t t67 = 564028;

	t67 = ((x5297|x5298)/(x5299==x5300));

	if (t67 != -32766) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x5430 = 1U;
	uint8_t x5431 = UINT8_MAX;
	uint8_t x5432 = UINT8_MAX;

	t68 = ((x5429|x5430)/(x5431==x5432));

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x5446 = 0U;
	int64_t x5447 = INT64_MIN;
	volatile int64_t x5448 = INT64_MIN;
	volatile int64_t t69 = -1802580LL;

	t69 = ((x5445|x5446)/(x5447==x5448));

	if (t69 != 23779176437216LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x5737 = -1;
	int32_t x5738 = -12624;
	volatile uint32_t x5739 = UINT32_MAX;
	static uint32_t x5740 = UINT32_MAX;
	int32_t t70 = -280714630;

	t70 = ((x5737|x5738)/(x5739==x5740));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x5778 = -1LL;
	static int16_t x5779 = -1;
	uint64_t x5780 = UINT64_MAX;

	t71 = ((x5777|x5778)/(x5779==x5780));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x5781 = UINT32_MAX;
	uint32_t x5782 = 182U;
	static uint64_t x5783 = UINT64_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = ((x5781|x5782)/(x5783==x5784));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x5897 = -1;
	static int16_t x5898 = -1;
	int64_t x5899 = INT64_MIN;
	static volatile int64_t x5900 = INT64_MIN;
	volatile int32_t t73 = 520270;

	t73 = ((x5897|x5898)/(x5899==x5900));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5905 = UINT64_MAX;
	int16_t x5907 = INT16_MIN;
	int16_t x5908 = INT16_MIN;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x5905|x5906)/(x5907==x5908));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5973 = 6;
	static int64_t x5974 = -10661375LL;
	int16_t x5975 = -1;
	int16_t x5976 = -1;
	volatile int64_t t75 = 495684LL;

	t75 = ((x5973|x5974)/(x5975==x5976));

	if (t75 != -10661369LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5977 = UINT32_MAX;
	volatile int8_t x5978 = 40;
	int32_t x5979 = INT32_MIN;
	int32_t x5980 = INT32_MIN;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = ((x5977|x5978)/(x5979==x5980));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x6005 = 241U;
	int8_t x6007 = INT8_MIN;
	int8_t x6008 = INT8_MIN;
	int32_t t77 = -94;

	t77 = ((x6005|x6006)/(x6007==x6008));

	if (t77 != 1267) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x6122 = INT64_MIN;
	uint64_t x6124 = UINT64_MAX;
	int64_t t78 = -111LL;

	t78 = ((x6121|x6122)/(x6123==x6124));

	if (t78 != -9223372036854039519LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x6214 = 321382101U;
	int64_t x6215 = -1LL;
	int64_t x6216 = -1LL;
	static uint32_t t79 = 1067854721U;

	t79 = ((x6213|x6214)/(x6215==x6216));

	if (t79 != 2468865749U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x6361 = -1;
	static uint8_t x6362 = 1U;
	volatile int32_t t80 = -288647;

	t80 = ((x6361|x6362)/(x6363==x6364));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x6553 = INT16_MIN;
	static int8_t x6554 = -6;
	static int32_t x6555 = INT32_MIN;
	static volatile int32_t t81 = 14535914;

	t81 = ((x6553|x6554)/(x6555==x6556));

	if (t81 != -6) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x6605 = INT64_MIN;
	int32_t x6606 = -38758;
	volatile int64_t t82 = -2019943906498LL;

	t82 = ((x6605|x6606)/(x6607==x6608));

	if (t82 != -38758LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x6665 = 1635618U;
	uint32_t x6666 = 4550U;
	uint64_t x6667 = UINT64_MAX;
	volatile int16_t x6668 = -1;
	uint32_t t83 = 63700671U;

	t83 = ((x6665|x6666)/(x6667==x6668));

	if (t83 != 1635814U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x6690 = INT64_MAX;
	int32_t x6691 = INT32_MAX;
	int32_t x6692 = INT32_MAX;
	volatile int64_t t84 = INT64_MAX;

	t84 = ((x6689|x6690)/(x6691==x6692));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x6802 = -1LL;
	int16_t x6804 = INT16_MIN;
	int64_t t85 = -17399472098341LL;

	t85 = ((x6801|x6802)/(x6803==x6804));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x6809 = 13U;
	static uint16_t x6810 = 6U;
	static int64_t x6811 = -1LL;
	int16_t x6812 = -1;
	static uint32_t t86 = 12213889U;

	t86 = ((x6809|x6810)/(x6811==x6812));

	if (t86 != 15U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x6847 = -1LL;
	int64_t x6848 = -1LL;

	t87 = ((x6845|x6846)/(x6847==x6848));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x6849 = INT64_MIN;
	static int16_t x6851 = -1;
	volatile int64_t t88 = -857643LL;

	t88 = ((x6849|x6850)/(x6851==x6852));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6861 = 2876216LLU;
	static uint32_t x6862 = 532593U;
	uint32_t x6863 = UINT32_MAX;
	volatile uint32_t x6864 = UINT32_MAX;
	uint64_t t89 = 14118369161680529LLU;

	t89 = ((x6861|x6862)/(x6863==x6864));

	if (t89 != 2876281LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x7025 = -15587384297LL;
	int8_t x7026 = -3;
	static int16_t x7027 = INT16_MIN;
	volatile int16_t x7028 = INT16_MIN;

	t90 = ((x7025|x7026)/(x7027==x7028));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x7265 = 0U;
	volatile int8_t x7266 = -3;
	int64_t x7267 = -1LL;
	int8_t x7268 = -1;
	int32_t t91 = -1;

	t91 = ((x7265|x7266)/(x7267==x7268));

	if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x7293 = UINT8_MAX;
	int16_t x7294 = INT16_MAX;
	uint8_t x7295 = 0U;
	int8_t x7296 = 0;
	static int32_t t92 = -369;

	t92 = ((x7293|x7294)/(x7295==x7296));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x7377 = UINT16_MAX;
	volatile int16_t x7379 = INT16_MIN;
	int16_t x7380 = INT16_MIN;
	int32_t t93 = 92;

	t93 = ((x7377|x7378)/(x7379==x7380));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x7401 = INT64_MAX;
	static volatile int32_t x7402 = -194784;
	static uint8_t x7403 = 1U;
	uint8_t x7404 = 1U;
	static int64_t t94 = -1149608582520645244LL;

	t94 = ((x7401|x7402)/(x7403==x7404));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x7629 = 382U;
	int32_t x7630 = INT32_MAX;
	int64_t x7631 = INT64_MIN;
	int32_t t95 = INT32_MAX;

	t95 = ((x7629|x7630)/(x7631==x7632));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x7709 = INT32_MAX;
	static uint8_t x7710 = 32U;
	uint16_t x7711 = 0U;
	static volatile int32_t t96 = INT32_MAX;

	t96 = ((x7709|x7710)/(x7711==x7712));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x7801 = UINT8_MAX;
	int64_t x7802 = INT64_MIN;
	int32_t x7803 = INT32_MAX;
	static int32_t x7804 = INT32_MAX;
	int64_t t97 = 128756443LL;

	t97 = ((x7801|x7802)/(x7803==x7804));

	if (t97 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x7829 = 27LL;
	int8_t x7830 = 1;
	static uint32_t x7831 = UINT32_MAX;
	int8_t x7832 = -1;
	volatile int64_t t98 = -8042LL;

	t98 = ((x7829|x7830)/(x7831==x7832));

	if (t98 != 27LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x7989 = -60334LL;
	static uint64_t x7990 = 123135225277345754LLU;
	int16_t x7991 = INT16_MIN;
	static int16_t x7992 = INT16_MIN;
	volatile uint64_t t99 = 20828166947LLU;

	t99 = ((x7989|x7990)/(x7991==x7992));

	if (t99 != 18446744073709518810LLU) { NG(); } else { ; }
	
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

