#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x19 = 5692;
int16_t x20 = INT16_MIN;
uint32_t x70 = 2U;
static volatile int64_t t1 = 73638666218530LL;
int16_t x202 = 0;
volatile int32_t x203 = -6209;
uint64_t x223 = 3627537LLU;
static int8_t x307 = INT8_MIN;
static int32_t x428 = INT32_MIN;
int8_t x506 = 2;
uint64_t x613 = UINT64_MAX;
static uint16_t x614 = 57U;
int8_t x655 = INT8_MIN;
int16_t x695 = INT16_MIN;
volatile int32_t x1223 = INT32_MIN;
uint8_t x1234 = 1U;
static int32_t t17 = 7575671;
volatile uint32_t t18 = 1658U;
int16_t x1848 = INT16_MIN;
uint8_t x1962 = 1U;
static uint32_t x2054 = 0U;
int32_t t26 = -36795829;
int8_t x2061 = 1;
uint64_t x2076 = UINT64_MAX;
uint8_t x2097 = 1U;
uint32_t x2134 = 7U;
volatile uint64_t t32 = 99221501LLU;
int32_t x2172 = INT32_MIN;
volatile uint64_t t33 = 206572863LLU;
static volatile int8_t x2270 = 21;
static int8_t x2314 = 15;
static volatile int32_t t37 = -1;
uint16_t x2431 = 0U;
int8_t x2522 = 1;
uint8_t x2562 = 0U;
int16_t x2563 = 0;
volatile int64_t t40 = -424LL;
int32_t x2672 = -1;
uint32_t t42 = 2028049986U;
static int64_t x2782 = 1LL;
int8_t x2951 = -1;
static int64_t x3173 = 8910853615037638LL;
static int8_t x3176 = INT8_MIN;
int16_t x3234 = 1;
static uint32_t x3297 = UINT32_MAX;
int64_t x3299 = INT64_MAX;
static uint64_t x3337 = 17636LLU;
volatile uint64_t t50 = 32LLU;
static uint8_t x3361 = 0U;
uint8_t x3363 = UINT8_MAX;
volatile int32_t t51 = -1;
int16_t x3498 = 1;
int16_t x3500 = -1;
volatile uint32_t t56 = 52407U;
int16_t x3747 = -649;
int8_t x3748 = 27;
uint32_t x3812 = 51U;
static volatile uint32_t t59 = 53032U;
int16_t x3868 = INT16_MIN;
uint32_t x3873 = 58250912U;
static int16_t x3875 = INT16_MIN;
uint16_t x3886 = 3U;
static uint8_t x3973 = 3U;
uint16_t x4273 = UINT16_MAX;
volatile uint8_t x4274 = 5U;
uint32_t x4275 = 71791U;
int16_t x4745 = INT16_MAX;
int8_t x4751 = 0;
volatile uint32_t t68 = 197313620U;
uint8_t x4915 = 57U;


void f0(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x18 = 3U;
	int32_t t0 = 128642624;

	t0 = (((x17<<x18)^x19)&x20);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x69 = 65411U;
	volatile int32_t x71 = 1058794;
	static int64_t x72 = INT64_MIN;

	t1 = (((x69<<x70)^x71)&x72);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x93 = 3;
	int32_t x94 = 3;
	volatile int16_t x95 = -1;
	int16_t x96 = INT16_MAX;
	volatile int32_t t2 = 279;

	t2 = (((x93<<x94)^x95)&x96);

	if (t2 != 32743) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x133 = UINT16_MAX;
	static int32_t x134 = 0;
	volatile uint16_t x135 = 1247U;
	volatile uint64_t x136 = 165313613008966LLU;
	uint64_t t3 = 65882067474976017LLU;

	t3 = (((x133<<x134)^x135)&x136);

	if (t3 != 4096LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x201 = 410664616;
	static int16_t x204 = -5642;
	static volatile int32_t t4 = 0;

	t4 = (((x201<<x202)^x203)&x204);

	if (t4 != -410662634) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x221 = UINT8_MAX;
	int16_t x222 = 2;
	static uint32_t x224 = 12646U;
	uint64_t t5 = 53846407785LLU;

	t5 = (((x221<<x222)^x223)&x224);

	if (t5 != 4452LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x305 = 620U;
	uint8_t x306 = 12U;
	static volatile uint32_t x308 = 37U;
	volatile uint32_t t6 = 1365U;

	t6 = (((x305<<x306)^x307)&x308);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x425 = 4U;
	uint16_t x426 = 0U;
	uint16_t x427 = 52U;
	volatile int32_t t7 = -5;

	t7 = (((x425<<x426)^x427)&x428);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x505 = 51U;
	volatile int64_t x507 = INT64_MIN;
	uint16_t x508 = 77U;
	volatile int64_t t8 = 0LL;

	t8 = (((x505<<x506)^x507)&x508);

	if (t8 != 76LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x615 = INT8_MAX;
	static int16_t x616 = INT16_MIN;
	static uint64_t t9 = 59270459356799568LLU;

	t9 = (((x613<<x614)^x615)&x616);

	if (t9 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x653 = INT8_MAX;
	static uint32_t x654 = 2U;
	int16_t x656 = 787;
	static int32_t t10 = 0;

	t10 = (((x653<<x654)^x655)&x656);

	if (t10 != 528) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x693 = 67089058611383LLU;
	int8_t x694 = 1;
	int16_t x696 = INT16_MIN;
	volatile uint64_t t11 = 4535115944185LLU;

	t11 = (((x693<<x694)^x695)&x696);

	if (t11 != 18446609895592296448LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x721 = 7;
	uint8_t x722 = 24U;
	volatile int16_t x723 = -1;
	static int32_t x724 = INT32_MAX;
	volatile int32_t t12 = -71945822;

	t12 = (((x721<<x722)^x723)&x724);

	if (t12 != 2030043135) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x797 = 1714U;
	uint8_t x798 = 27U;
	int8_t x799 = INT8_MIN;
	volatile uint32_t x800 = UINT32_MAX;
	static uint32_t t13 = 254435U;

	t13 = (((x797<<x798)^x799)&x800);

	if (t13 != 1879048064U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x857 = UINT8_MAX;
	static int32_t x858 = 7;
	int16_t x859 = INT16_MAX;
	static int32_t x860 = -1;
	int32_t t14 = 167;

	t14 = (((x857<<x858)^x859)&x860);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x993 = UINT16_MAX;
	static uint8_t x994 = 11U;
	int64_t x995 = INT64_MIN;
	uint8_t x996 = 13U;
	static volatile int64_t t15 = -3LL;

	t15 = (((x993<<x994)^x995)&x996);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1221 = 158U;
	static uint8_t x1222 = 1U;
	int32_t x1224 = INT32_MIN;
	static volatile int32_t t16 = INT32_MIN;

	t16 = (((x1221<<x1222)^x1223)&x1224);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1233 = 54;
	int16_t x1235 = -1;
	volatile uint16_t x1236 = 1984U;

	t17 = (((x1233<<x1234)^x1235)&x1236);

	if (t17 != 1920) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1317 = UINT32_MAX;
	volatile uint8_t x1318 = 0U;
	volatile int32_t x1319 = INT32_MAX;
	uint16_t x1320 = 92U;

	t18 = (((x1317<<x1318)^x1319)&x1320);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1417 = 0;
	int16_t x1418 = 2;
	uint64_t x1419 = 4LLU;
	static int32_t x1420 = INT32_MAX;
	uint64_t t19 = 544315071LLU;

	t19 = (((x1417<<x1418)^x1419)&x1420);

	if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1425 = 1U;
	uint8_t x1426 = 29U;
	int64_t x1427 = INT64_MIN;
	static volatile int64_t x1428 = INT64_MAX;
	volatile int64_t t20 = 1LL;

	t20 = (((x1425<<x1426)^x1427)&x1428);

	if (t20 != 536870912LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x1641 = 41U;
	uint64_t x1642 = 1LLU;
	uint64_t x1643 = 4217119274135728LLU;
	int16_t x1644 = 14;
	volatile uint64_t t21 = 29907403LLU;

	t21 = (((x1641<<x1642)^x1643)&x1644);

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1717 = UINT8_MAX;
	uint8_t x1718 = 1U;
	uint16_t x1719 = UINT16_MAX;
	int32_t x1720 = INT32_MAX;
	int32_t t22 = 490815249;

	t22 = (((x1717<<x1718)^x1719)&x1720);

	if (t22 != 65025) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1829 = 1U;
	uint16_t x1830 = 0U;
	int32_t x1831 = 49216;
	int32_t x1832 = INT32_MAX;
	int32_t t23 = -34915;

	t23 = (((x1829<<x1830)^x1831)&x1832);

	if (t23 != 49217) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1845 = INT64_MAX;
	volatile uint64_t x1846 = 0LLU;
	uint16_t x1847 = 1302U;
	int64_t t24 = -46942912133776LL;

	t24 = (((x1845<<x1846)^x1847)&x1848);

	if (t24 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1961 = UINT8_MAX;
	int16_t x1963 = INT16_MIN;
	uint64_t x1964 = 69LLU;
	static uint64_t t25 = 228727141994LLU;

	t25 = (((x1961<<x1962)^x1963)&x1964);

	if (t25 != 68LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x2053 = UINT8_MAX;
	uint8_t x2055 = 11U;
	int16_t x2056 = 2358;

	t26 = (((x2053<<x2054)^x2055)&x2056);

	if (t26 != 52) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2062 = 9;
	volatile uint32_t x2063 = UINT32_MAX;
	int64_t x2064 = INT64_MIN;
	volatile int64_t t27 = -5473LL;

	t27 = (((x2061<<x2062)^x2063)&x2064);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2073 = UINT32_MAX;
	int8_t x2074 = 0;
	int16_t x2075 = INT16_MAX;
	uint64_t t28 = 3443167011393LLU;

	t28 = (((x2073<<x2074)^x2075)&x2076);

	if (t28 != 4294934528LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2098 = 6U;
	int16_t x2099 = -1;
	uint16_t x2100 = UINT16_MAX;
	int32_t t29 = -93949007;

	t29 = (((x2097<<x2098)^x2099)&x2100);

	if (t29 != 65471) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2101 = INT16_MAX;
	volatile int64_t x2102 = 3LL;
	int32_t x2103 = INT32_MIN;
	int64_t x2104 = 2318056369LL;
	volatile int64_t t30 = -35LL;

	t30 = (((x2101<<x2102)^x2103)&x2104);

	if (t30 != 2147662768LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x2133 = 298U;
	uint64_t x2135 = 2490889636357136888LLU;
	static uint32_t x2136 = UINT32_MAX;
	uint64_t t31 = 2507977927323654090LLU;

	t31 = (((x2133<<x2134)^x2135)&x2136);

	if (t31 != 1304720632LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2157 = 2LLU;
	volatile uint8_t x2158 = 28U;
	int16_t x2159 = -37;
	uint8_t x2160 = UINT8_MAX;

	t32 = (((x2157<<x2158)^x2159)&x2160);

	if (t32 != 219LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2169 = 1789259838915LLU;
	int16_t x2170 = 23;
	int32_t x2171 = -1;

	t33 = (((x2169<<x2170)^x2171)&x2172);

	if (t33 != 3437344674396766208LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2193 = UINT32_MAX;
	uint64_t x2194 = 1LLU;
	int32_t x2195 = -91564;
	int32_t x2196 = INT32_MIN;
	static uint32_t t34 = 99U;

	t34 = (((x2193<<x2194)^x2195)&x2196);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2233 = 3U;
	volatile int16_t x2234 = 3;
	uint8_t x2235 = 29U;
	uint32_t x2236 = 230U;
	uint32_t t35 = 22905359U;

	t35 = (((x2233<<x2234)^x2235)&x2236);

	if (t35 != 4U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2269 = UINT64_MAX;
	uint16_t x2271 = 5440U;
	int8_t x2272 = -50;
	static uint64_t t36 = 240LLU;

	t36 = (((x2269<<x2270)^x2271)&x2272);

	if (t36 != 18446744073707459904LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2313 = UINT16_MAX;
	int16_t x2315 = -1;
	int32_t x2316 = 0;

	t37 = (((x2313<<x2314)^x2315)&x2316);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2429 = 405U;
	volatile uint8_t x2430 = 14U;
	uint32_t x2432 = UINT32_MAX;
	volatile uint32_t t38 = 566739470U;

	t38 = (((x2429<<x2430)^x2431)&x2432);

	if (t38 != 6635520U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2521 = 0;
	static volatile uint8_t x2523 = 3U;
	volatile int16_t x2524 = 29;
	static int32_t t39 = 31457;

	t39 = (((x2521<<x2522)^x2523)&x2524);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2561 = 62897545152LL;
	static uint8_t x2564 = 3U;

	t40 = (((x2561<<x2562)^x2563)&x2564);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2669 = 71U;
	int8_t x2670 = 0;
	uint32_t x2671 = 1U;
	uint32_t t41 = 104474805U;

	t41 = (((x2669<<x2670)^x2671)&x2672);

	if (t41 != 70U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2749 = UINT32_MAX;
	static uint16_t x2750 = 0U;
	uint16_t x2751 = UINT16_MAX;
	int8_t x2752 = INT8_MIN;

	t42 = (((x2749<<x2750)^x2751)&x2752);

	if (t42 != 4294901760U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2781 = 3;
	static volatile int64_t x2783 = 12110113831LL;
	int32_t x2784 = INT32_MIN;
	int64_t t43 = -127901145377398067LL;

	t43 = (((x2781<<x2782)^x2783)&x2784);

	if (t43 != 10737418240LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2949 = 82564158393934LLU;
	static int8_t x2950 = 1;
	int64_t x2952 = 119471789440163LL;
	static volatile uint64_t t44 = 973832176LLU;

	t44 = (((x2949<<x2950)^x2951)&x2952);

	if (t44 != 114899251486755LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3041 = UINT64_MAX;
	uint8_t x3042 = 0U;
	int64_t x3043 = INT64_MAX;
	volatile uint64_t x3044 = UINT64_MAX;
	uint64_t t45 = 3638902486779206198LLU;

	t45 = (((x3041<<x3042)^x3043)&x3044);

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3174 = 4U;
	uint8_t x3175 = UINT8_MAX;
	int64_t t46 = -65043473771221LL;

	t46 = (((x3173<<x3174)^x3175)&x3176);

	if (t46 != 142573657840602240LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3189 = 2U;
	uint16_t x3190 = 0U;
	int16_t x3191 = 1;
	uint8_t x3192 = 1U;
	static volatile int32_t t47 = 12465;

	t47 = (((x3189<<x3190)^x3191)&x3192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x3233 = UINT32_MAX;
	int64_t x3235 = -1LL;
	int32_t x3236 = INT32_MIN;
	int64_t t48 = -37951386773667LL;

	t48 = (((x3233<<x3234)^x3235)&x3236);

	if (t48 != -4294967296LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3298 = 3;
	uint64_t x3300 = UINT64_MAX;
	uint64_t t49 = 503487129LLU;

	t49 = (((x3297<<x3298)^x3299)&x3300);

	if (t49 != 9223372032559808519LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3338 = 7U;
	uint8_t x3339 = 3U;
	uint64_t x3340 = 1027520LLU;

	t50 = (((x3337<<x3338)^x3339)&x3340);

	if (t50 != 139264LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3362 = 1LLU;
	int16_t x3364 = -12817;

	t51 = (((x3361<<x3362)^x3363)&x3364);

	if (t51 != 239) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3489 = 518U;
	uint8_t x3490 = 8U;
	int32_t x3491 = INT32_MAX;
	int32_t x3492 = -1;
	volatile int32_t t52 = 9;

	t52 = (((x3489<<x3490)^x3491)&x3492);

	if (t52 != 2147351039) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x3497 = 1687339336353808089LLU;
	int8_t x3499 = -1;
	volatile uint64_t t53 = 87564607890356LLU;

	t53 = (((x3497<<x3498)^x3499)&x3500);

	if (t53 != 15072065401001935437LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3533 = 7224U;
	uint32_t x3534 = 0U;
	volatile int32_t x3535 = 2;
	static int32_t x3536 = -178454767;
	volatile int32_t t54 = 1;

	t54 = (((x3533<<x3534)^x3535)&x3536);

	if (t54 != 7184) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x3613 = 131470420U;
	int32_t x3614 = 3;
	int32_t x3615 = INT32_MAX;
	int8_t x3616 = INT8_MIN;
	uint32_t t55 = 6075958U;

	t55 = (((x3613<<x3614)^x3615)&x3616);

	if (t55 != 1095720192U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3721 = 192U;
	uint8_t x3722 = 7U;
	static uint32_t x3723 = 1472U;
	volatile int32_t x3724 = INT32_MAX;

	t56 = (((x3721<<x3722)^x3723)&x3724);

	if (t56 != 26048U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3745 = 4553257572910790196LLU;
	uint8_t x3746 = 0U;
	uint64_t t57 = 1300165751863174LLU;

	t57 = (((x3745<<x3746)^x3747)&x3748);

	if (t57 != 3LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3797 = 124043853U;
	uint8_t x3798 = 6U;
	int16_t x3799 = 902;
	int8_t x3800 = 1;
	uint32_t t58 = 17635U;

	t58 = (((x3797<<x3798)^x3799)&x3800);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3809 = 255805976U;
	uint8_t x3810 = 2U;
	int32_t x3811 = INT32_MAX;

	t59 = (((x3809<<x3810)^x3811)&x3812);

	if (t59 != 19U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x3865 = 5185698168822LLU;
	uint16_t x3866 = 55U;
	int64_t x3867 = 685796473LL;
	volatile uint64_t t60 = 205327702552488413LLU;

	t60 = (((x3865<<x3866)^x3867)&x3868);

	if (t60 != 18086456104205680640LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x3874 = 3U;
	static int64_t x3876 = -1LL;
	int64_t t61 = 35482448211936LL;

	t61 = (((x3873<<x3874)^x3875)&x3876);

	if (t61 != 3828954368LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3885 = UINT16_MAX;
	uint32_t x3887 = 5650U;
	int32_t x3888 = INT32_MAX;
	static volatile uint32_t t62 = 16139U;

	t62 = (((x3885<<x3886)^x3887)&x3888);

	if (t62 != 518634U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3974 = 4;
	uint16_t x3975 = 24U;
	static int64_t x3976 = -3597537LL;
	volatile int64_t t63 = -245778131583424595LL;

	t63 = (((x3973<<x3974)^x3975)&x3976);

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4129 = 7U;
	uint16_t x4130 = 2U;
	uint8_t x4131 = 28U;
	static int32_t x4132 = -1;
	uint32_t t64 = 134U;

	t64 = (((x4129<<x4130)^x4131)&x4132);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4276 = INT16_MIN;
	uint32_t t65 = 69U;

	t65 = (((x4273<<x4274)^x4275)&x4276);

	if (t65 != 1998848U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4445 = 1U;
	int8_t x4446 = 23;
	int32_t x4447 = INT32_MAX;
	int32_t x4448 = INT32_MIN;
	static volatile int32_t t66 = -50465;

	t66 = (((x4445<<x4446)^x4447)&x4448);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4746 = 0;
	static int64_t x4747 = INT64_MIN;
	static uint32_t x4748 = 275428914U;
	static volatile int64_t t67 = -884358773LL;

	t67 = (((x4745<<x4746)^x4747)&x4748);

	if (t67 != 13874LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x4749 = 9;
	uint16_t x4750 = 1U;
	uint32_t x4752 = 6962773U;

	t68 = (((x4749<<x4750)^x4751)&x4752);

	if (t68 != 16U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4781 = 220LLU;
	uint8_t x4782 = 0U;
	int16_t x4783 = 1;
	int32_t x4784 = INT32_MIN;
	volatile uint64_t t69 = 425642349353LLU;

	t69 = (((x4781<<x4782)^x4783)&x4784);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4893 = 7862384U;
	static uint8_t x4894 = 7U;
	uint64_t x4895 = 10864630242899LLU;
	int32_t x4896 = INT32_MAX;
	volatile uint64_t t70 = 8033716LLU;

	t70 = (((x4893<<x4894)^x4895)&x4896);

	if (t70 != 630269523LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x4913 = 67654LLU;
	static int8_t x4914 = 17;
	uint8_t x4916 = 1U;
	uint64_t t71 = 1654445LLU;

	t71 = (((x4913<<x4914)^x4915)&x4916);

	if (t71 != 1LLU) { NG(); } else { ; }
	
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


    return 0;
}

