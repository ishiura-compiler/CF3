#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x164 = 0U;
volatile int32_t t0 = -24;
volatile int16_t x206 = INT16_MIN;
int16_t x217 = 6498;
int8_t x273 = INT8_MIN;
static volatile uint8_t x276 = 0U;
int16_t x402 = 5109;
volatile uint32_t x587 = UINT32_MAX;
volatile int16_t x588 = 2;
uint32_t x951 = 817686U;
int16_t x952 = 0;
volatile int64_t t9 = -2024139404432117388LL;
static int8_t x1129 = -2;
int16_t x1137 = INT16_MIN;
volatile int32_t t12 = 4765993;
static volatile int8_t x1159 = 5;
volatile uint32_t x1199 = 6U;
static int32_t x1200 = 0;
int64_t x1270 = -1LL;
uint8_t x1272 = 1U;
int64_t x1365 = 1249330532585LL;
static volatile int8_t x1412 = 16;
static uint16_t x1443 = 24U;
int32_t x1444 = 0;
int32_t t20 = INT32_MAX;
int64_t t21 = -3191LL;
static volatile uint32_t x1799 = 813846592U;
uint32_t x1800 = 0U;
uint32_t x1843 = 2135U;
int64_t x1844 = 26LL;
int64_t x1978 = INT64_MIN;
int64_t x2022 = -1LL;
uint32_t x2024 = 27U;
volatile int32_t x2025 = INT32_MIN;
uint16_t x2026 = 8U;
int16_t x2061 = -223;
static volatile int8_t x2064 = 0;
uint64_t x2189 = 2121268615348003LLU;
volatile uint16_t x2191 = UINT16_MAX;
int32_t x2269 = INT32_MAX;
static uint8_t x2303 = 0U;
static volatile int32_t t37 = 3;
volatile int8_t x2310 = -19;
int16_t x2312 = 11;
int32_t t38 = 22397;
int32_t t41 = 7076;
volatile int8_t x2795 = INT8_MAX;
int32_t x2862 = INT32_MIN;
volatile int32_t t45 = -386;
static int8_t x2887 = 0;
static int8_t x2888 = 0;
volatile int64_t t46 = 114063280107750086LL;
volatile int32_t x3001 = 2;
int32_t x3105 = INT32_MIN;
uint8_t x3186 = 2U;
int32_t x3391 = 4;
uint16_t x3406 = 22U;
static volatile int32_t t53 = -504;
int8_t x3473 = -2;
static int64_t x3555 = 0LL;
int64_t x3625 = -1LL;
volatile uint32_t x3645 = 30223U;
int16_t x3666 = INT16_MAX;
uint8_t x3726 = 0U;
static uint8_t x3727 = 3U;
volatile int64_t x3728 = 0LL;
int16_t x4187 = INT16_MAX;
uint16_t x4261 = 7U;
uint32_t x4275 = 4126U;
volatile int32_t t65 = 1034759;
int8_t x4346 = INT8_MIN;
int16_t x4348 = 0;
uint32_t x4364 = 3U;
static int32_t t67 = 48375287;
int32_t x4549 = INT32_MIN;
uint8_t x4570 = UINT8_MAX;
static uint16_t x4787 = UINT16_MAX;
int32_t t74 = -692;
int32_t x4887 = 1;
uint16_t x5157 = 31U;
uint8_t x5160 = 25U;
uint8_t x5195 = 16U;
int16_t x5210 = INT16_MIN;
uint64_t x5480 = 4LLU;
volatile int32_t t83 = 40;
int8_t x5641 = INT8_MIN;
volatile int8_t x5643 = INT8_MAX;
int8_t x5644 = 0;
static uint8_t x5812 = 0U;
volatile uint64_t t87 = 29LLU;
int32_t x5877 = INT32_MAX;
int8_t x5879 = INT8_MAX;
uint64_t x6269 = 108LLU;
uint16_t x6291 = 29U;
uint16_t x6433 = 4U;
int32_t x6434 = -1;
int8_t x6503 = INT8_MAX;
uint32_t x6504 = 1U;
int32_t t94 = -101330;
uint8_t x6569 = 1U;
int16_t x6726 = -1;
static int8_t x6831 = INT8_MAX;
int8_t x6856 = 6;
volatile int32_t t99 = -127012;


void f0(void) {
	int32_t x161 = INT32_MIN;
	static volatile uint64_t x162 = 27999245356901LLU;
	uint64_t x163 = UINT64_MAX;

	t0 = (x161^(x162<=(x163<<x164)));

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x205 = 6926U;
	int64_t x207 = 174054676061674LL;
	uint16_t x208 = 0U;
	volatile uint32_t t1 = 38953U;

	t1 = (x205^(x206<=(x207<<x208)));

	if (t1 != 6927U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x218 = 0;
	uint64_t x219 = 9919414098327124LLU;
	static int8_t x220 = 0;
	int32_t t2 = 910119;

	t2 = (x217^(x218<=(x219<<x220)));

	if (t2 != 6499) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x274 = 486032024768LLU;
	uint16_t x275 = UINT16_MAX;
	int32_t t3 = 129318;

	t3 = (x273^(x274<=(x275<<x276)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x401 = 55;
	static int64_t x403 = 24898LL;
	uint32_t x404 = 26U;
	static volatile int32_t t4 = 60;

	t4 = (x401^(x402<=(x403<<x404)));

	if (t4 != 54) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x585 = 2U;
	int64_t x586 = INT64_MIN;
	uint32_t t5 = 870240323U;

	t5 = (x585^(x586<=(x587<<x588)));

	if (t5 != 3U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x877 = INT16_MIN;
	int16_t x878 = -1;
	volatile uint32_t x879 = 1910021354U;
	int8_t x880 = 15;
	volatile int32_t t6 = -11768;

	t6 = (x877^(x878<=(x879<<x880)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x949 = -20;
	static volatile uint32_t x950 = 74867U;
	volatile int32_t t7 = -60594544;

	t7 = (x949^(x950<=(x951<<x952)));

	if (t7 != -19) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x1049 = 2U;
	volatile int16_t x1050 = 0;
	volatile uint16_t x1051 = 121U;
	static volatile int16_t x1052 = 1;
	int32_t t8 = -870530;

	t8 = (x1049^(x1050<=(x1051<<x1052)));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x1081 = -48641LL;
	int64_t x1082 = -519583030405682LL;
	int32_t x1083 = 184341552;
	static uint8_t x1084 = 0U;

	t9 = (x1081^(x1082<=(x1083<<x1084)));

	if (t9 != -48642LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1130 = -1;
	uint8_t x1131 = 1U;
	static uint32_t x1132 = 2U;
	int32_t t10 = 1379730;

	t10 = (x1129^(x1130<=(x1131<<x1132)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1133 = INT64_MAX;
	int8_t x1134 = 1;
	int32_t x1135 = 14;
	uint8_t x1136 = 0U;
	int64_t t11 = 37797363550LL;

	t11 = (x1133^(x1134<=(x1135<<x1136)));

	if (t11 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1138 = 822715397U;
	uint16_t x1139 = 2U;
	int8_t x1140 = 0;

	t12 = (x1137^(x1138<=(x1139<<x1140)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x1157 = INT16_MIN;
	uint64_t x1158 = UINT64_MAX;
	uint8_t x1160 = 10U;
	int32_t t13 = 0;

	t13 = (x1157^(x1158<=(x1159<<x1160)));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1197 = UINT32_MAX;
	volatile uint16_t x1198 = UINT16_MAX;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x1197^(x1198<=(x1199<<x1200)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1269 = INT16_MIN;
	volatile uint64_t x1271 = 92129LLU;
	int32_t t15 = -1;

	t15 = (x1269^(x1270<=(x1271<<x1272)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x1366 = -1LL;
	static volatile int64_t x1367 = 201LL;
	uint16_t x1368 = 7U;
	volatile int64_t t16 = -3144030530603670LL;

	t16 = (x1365^(x1366<=(x1367<<x1368)));

	if (t16 != 1249330532584LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1373 = INT64_MIN;
	uint64_t x1374 = 1308917251078LLU;
	uint32_t x1375 = 392067U;
	int32_t x1376 = 0;
	static volatile int64_t t17 = INT64_MIN;

	t17 = (x1373^(x1374<=(x1375<<x1376)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1409 = 7621195510652542LL;
	volatile int32_t x1410 = -1;
	volatile int16_t x1411 = 15;
	static volatile int64_t t18 = -487177766LL;

	t18 = (x1409^(x1410<=(x1411<<x1412)));

	if (t18 != 7621195510652543LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1441 = 233771205968LLU;
	volatile int64_t x1442 = INT64_MAX;
	volatile uint64_t t19 = 9936880898632LLU;

	t19 = (x1441^(x1442<=(x1443<<x1444)));

	if (t19 != 233771205968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1701 = INT32_MAX;
	int32_t x1702 = INT32_MIN;
	uint32_t x1703 = 0U;
	volatile int8_t x1704 = 1;

	t20 = (x1701^(x1702<=(x1703<<x1704)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1745 = -1089LL;
	uint16_t x1746 = 3U;
	static volatile uint16_t x1747 = 53U;
	int8_t x1748 = 0;

	t21 = (x1745^(x1746<=(x1747<<x1748)));

	if (t21 != -1090LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1797 = 24;
	int8_t x1798 = 1;
	int32_t t22 = 175771;

	t22 = (x1797^(x1798<=(x1799<<x1800)));

	if (t22 != 25) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1841 = -15276;
	int8_t x1842 = -1;
	volatile int32_t t23 = -36;

	t23 = (x1841^(x1842<=(x1843<<x1844)));

	if (t23 != -15276) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1977 = UINT32_MAX;
	int16_t x1979 = INT16_MAX;
	uint64_t x1980 = 0LLU;
	volatile uint32_t t24 = 20102U;

	t24 = (x1977^(x1978<=(x1979<<x1980)));

	if (t24 != 4294967294U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2001 = INT32_MIN;
	int32_t x2002 = -204;
	static int32_t x2003 = INT32_MAX;
	volatile uint16_t x2004 = 0U;
	volatile int32_t t25 = -811261658;

	t25 = (x2001^(x2002<=(x2003<<x2004)));

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x2021 = -13;
	static uint64_t x2023 = 7097127080657517713LLU;
	int32_t t26 = -500241;

	t26 = (x2021^(x2022<=(x2023<<x2024)));

	if (t26 != -13) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x2027 = UINT32_MAX;
	uint8_t x2028 = 2U;
	volatile int32_t t27 = 84;

	t27 = (x2025^(x2026<=(x2027<<x2028)));

	if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x2029 = 5570581563646323681LLU;
	volatile int64_t x2030 = INT64_MAX;
	uint8_t x2031 = 40U;
	int8_t x2032 = 0;
	uint64_t t28 = 15835446482132LLU;

	t28 = (x2029^(x2030<=(x2031<<x2032)));

	if (t28 != 5570581563646323681LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2062 = 2156957615404974LL;
	static volatile int64_t x2063 = 260950807868LL;
	volatile int32_t t29 = -204;

	t29 = (x2061^(x2062<=(x2063<<x2064)));

	if (t29 != -223) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x2137 = -463895166;
	int8_t x2138 = 9;
	uint32_t x2139 = 416487U;
	uint16_t x2140 = 3U;
	volatile int32_t t30 = -13893175;

	t30 = (x2137^(x2138<=(x2139<<x2140)));

	if (t30 != -463895165) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x2141 = 1790183U;
	int64_t x2142 = INT64_MIN;
	int16_t x2143 = 2542;
	int32_t x2144 = 5;
	static uint32_t t31 = 243954370U;

	t31 = (x2141^(x2142<=(x2143<<x2144)));

	if (t31 != 1790182U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2149 = INT32_MIN;
	uint16_t x2150 = UINT16_MAX;
	uint16_t x2151 = 917U;
	uint16_t x2152 = 6U;
	int32_t t32 = INT32_MIN;

	t32 = (x2149^(x2150<=(x2151<<x2152)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2181 = UINT16_MAX;
	uint32_t x2182 = 104U;
	uint32_t x2183 = UINT32_MAX;
	static int8_t x2184 = 1;
	int32_t t33 = 123;

	t33 = (x2181^(x2182<=(x2183<<x2184)));

	if (t33 != 65534) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2190 = 28U;
	static volatile uint8_t x2192 = 1U;
	uint64_t t34 = 368353693643LLU;

	t34 = (x2189^(x2190<=(x2191<<x2192)));

	if (t34 != 2121268615348002LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2197 = 3;
	int16_t x2198 = -1;
	uint16_t x2199 = 1U;
	volatile uint16_t x2200 = 1U;
	int32_t t35 = -1791240;

	t35 = (x2197^(x2198<=(x2199<<x2200)));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2270 = INT32_MIN;
	uint16_t x2271 = 0U;
	uint32_t x2272 = 1U;
	static int32_t t36 = -26662;

	t36 = (x2269^(x2270<=(x2271<<x2272)));

	if (t36 != 2147483646) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2301 = -1;
	volatile int8_t x2302 = INT8_MIN;
	int16_t x2304 = 0;

	t37 = (x2301^(x2302<=(x2303<<x2304)));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x2309 = INT8_MIN;
	uint16_t x2311 = 4173U;

	t38 = (x2309^(x2310<=(x2311<<x2312)));

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x2369 = 9;
	int64_t x2370 = -1LL;
	uint8_t x2371 = UINT8_MAX;
	volatile uint8_t x2372 = 15U;
	int32_t t39 = 1184;

	t39 = (x2369^(x2370<=(x2371<<x2372)));

	if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2509 = INT64_MAX;
	uint8_t x2510 = UINT8_MAX;
	static uint8_t x2511 = 60U;
	int8_t x2512 = 14;
	volatile int64_t t40 = 53525794465737LL;

	t40 = (x2509^(x2510<=(x2511<<x2512)));

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2693 = -29;
	int32_t x2694 = INT32_MIN;
	int8_t x2695 = INT8_MAX;
	uint8_t x2696 = 0U;

	t41 = (x2693^(x2694<=(x2695<<x2696)));

	if (t41 != -30) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2741 = INT32_MAX;
	int16_t x2742 = 88;
	uint64_t x2743 = 0LLU;
	volatile int8_t x2744 = 2;
	int32_t t42 = INT32_MAX;

	t42 = (x2741^(x2742<=(x2743<<x2744)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x2777 = INT16_MIN;
	int64_t x2778 = 843891LL;
	uint64_t x2779 = 250647601LLU;
	static uint32_t x2780 = 2U;
	int32_t t43 = 22;

	t43 = (x2777^(x2778<=(x2779<<x2780)));

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2793 = INT32_MIN;
	int16_t x2794 = 12;
	uint16_t x2796 = 8U;
	volatile int32_t t44 = -2008668;

	t44 = (x2793^(x2794<=(x2795<<x2796)));

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2861 = 11;
	int16_t x2863 = 161;
	int64_t x2864 = 14LL;

	t45 = (x2861^(x2862<=(x2863<<x2864)));

	if (t45 != 10) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2885 = INT64_MIN;
	int64_t x2886 = -1LL;

	t46 = (x2885^(x2886<=(x2887<<x2888)));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x3002 = UINT64_MAX;
	uint32_t x3003 = 19365252U;
	int16_t x3004 = 31;
	int32_t t47 = -9;

	t47 = (x3001^(x3002<=(x3003<<x3004)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3025 = UINT16_MAX;
	uint64_t x3026 = 2031055908079LLU;
	static volatile uint64_t x3027 = 887186534723903551LLU;
	uint16_t x3028 = 0U;
	volatile int32_t t48 = -8933;

	t48 = (x3025^(x3026<=(x3027<<x3028)));

	if (t48 != 65534) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x3106 = 33224922527695LLU;
	uint16_t x3107 = 416U;
	int8_t x3108 = 2;
	static int32_t t49 = INT32_MIN;

	t49 = (x3105^(x3106<=(x3107<<x3108)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3185 = 9U;
	uint32_t x3187 = UINT32_MAX;
	volatile uint8_t x3188 = 0U;
	int32_t t50 = -184;

	t50 = (x3185^(x3186<=(x3187<<x3188)));

	if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3313 = INT8_MAX;
	int32_t x3314 = -1;
	int8_t x3315 = INT8_MAX;
	static uint8_t x3316 = 1U;
	int32_t t51 = -31217;

	t51 = (x3313^(x3314<=(x3315<<x3316)));

	if (t51 != 126) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3389 = -1;
	int32_t x3390 = -1;
	static volatile uint64_t x3392 = 15LLU;
	volatile int32_t t52 = -3971323;

	t52 = (x3389^(x3390<=(x3391<<x3392)));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3405 = -2;
	int8_t x3407 = 12;
	uint8_t x3408 = 11U;

	t53 = (x3405^(x3406<=(x3407<<x3408)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x3474 = INT64_MAX;
	uint32_t x3475 = UINT32_MAX;
	int8_t x3476 = 0;
	int32_t t54 = 2236520;

	t54 = (x3473^(x3474<=(x3475<<x3476)));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3553 = 1;
	uint8_t x3554 = 2U;
	uint16_t x3556 = 3U;
	static int32_t t55 = -781558;

	t55 = (x3553^(x3554<=(x3555<<x3556)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3626 = -1;
	volatile uint32_t x3627 = 59650607U;
	int16_t x3628 = 2;
	static volatile int64_t t56 = 8002052688444LL;

	t56 = (x3625^(x3626<=(x3627<<x3628)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x3646 = 28U;
	volatile int16_t x3647 = 1132;
	volatile uint32_t x3648 = 3U;
	volatile uint32_t t57 = 15U;

	t57 = (x3645^(x3646<=(x3647<<x3648)));

	if (t57 != 30222U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3665 = INT8_MAX;
	uint16_t x3667 = 4U;
	int16_t x3668 = 1;
	int32_t t58 = -1;

	t58 = (x3665^(x3666<=(x3667<<x3668)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3725 = UINT64_MAX;
	volatile uint64_t t59 = 7370515750063565LLU;

	t59 = (x3725^(x3726<=(x3727<<x3728)));

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x3729 = INT32_MIN;
	uint32_t x3730 = 16U;
	static int32_t x3731 = 2;
	static int32_t x3732 = 2;
	int32_t t60 = INT32_MIN;

	t60 = (x3729^(x3730<=(x3731<<x3732)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4089 = 1391;
	int32_t x4090 = INT32_MIN;
	volatile uint32_t x4091 = 3126810U;
	uint32_t x4092 = 5U;
	static volatile int32_t t61 = 1454;

	t61 = (x4089^(x4090<=(x4091<<x4092)));

	if (t61 != 1391) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x4177 = 823U;
	uint32_t x4178 = UINT32_MAX;
	uint8_t x4179 = 30U;
	volatile int32_t x4180 = 6;
	static volatile uint32_t t62 = 143U;

	t62 = (x4177^(x4178<=(x4179<<x4180)));

	if (t62 != 823U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4185 = INT32_MIN;
	uint8_t x4186 = 54U;
	static uint64_t x4188 = 13LLU;
	int32_t t63 = 91948744;

	t63 = (x4185^(x4186<=(x4187<<x4188)));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x4262 = INT8_MAX;
	static uint32_t x4263 = 0U;
	volatile uint32_t x4264 = 15U;
	int32_t t64 = 1;

	t64 = (x4261^(x4262<=(x4263<<x4264)));

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4273 = 7073;
	volatile uint8_t x4274 = 54U;
	int8_t x4276 = 2;

	t65 = (x4273^(x4274<=(x4275<<x4276)));

	if (t65 != 7072) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4345 = 1100U;
	static uint16_t x4347 = 5260U;
	int32_t t66 = 5248626;

	t66 = (x4345^(x4346<=(x4347<<x4348)));

	if (t66 != 1101) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4361 = -1;
	int8_t x4362 = INT8_MIN;
	volatile int32_t x4363 = 204589;

	t67 = (x4361^(x4362<=(x4363<<x4364)));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4485 = -3662;
	volatile int16_t x4486 = INT16_MAX;
	int16_t x4487 = 13548;
	uint8_t x4488 = 3U;
	volatile int32_t t68 = -252599120;

	t68 = (x4485^(x4486<=(x4487<<x4488)));

	if (t68 != -3661) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x4550 = -2545LL;
	volatile int8_t x4551 = 13;
	static volatile uint32_t x4552 = 1U;
	static volatile int32_t t69 = 13;

	t69 = (x4549^(x4550<=(x4551<<x4552)));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4569 = 573037561943198977LLU;
	int16_t x4571 = INT16_MAX;
	int8_t x4572 = 6;
	volatile uint64_t t70 = 29330517527320LLU;

	t70 = (x4569^(x4570<=(x4571<<x4572)));

	if (t70 != 573037561943198976LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x4721 = 176168LLU;
	int64_t x4722 = INT64_MIN;
	uint8_t x4723 = UINT8_MAX;
	int8_t x4724 = 1;
	volatile uint64_t t71 = 235721564LLU;

	t71 = (x4721^(x4722<=(x4723<<x4724)));

	if (t71 != 176169LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4753 = -1;
	uint32_t x4754 = UINT32_MAX;
	int16_t x4755 = 793;
	volatile uint16_t x4756 = 10U;
	static volatile int32_t t72 = 70705;

	t72 = (x4753^(x4754<=(x4755<<x4756)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4761 = -1;
	volatile int8_t x4762 = -1;
	uint16_t x4763 = 1731U;
	uint16_t x4764 = 18U;
	static volatile int32_t t73 = 1;

	t73 = (x4761^(x4762<=(x4763<<x4764)));

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4785 = INT8_MAX;
	static int64_t x4786 = 27LL;
	volatile uint16_t x4788 = 11U;

	t74 = (x4785^(x4786<=(x4787<<x4788)));

	if (t74 != 126) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4885 = INT32_MIN;
	uint64_t x4886 = 10LLU;
	uint8_t x4888 = 9U;
	int32_t t75 = 80;

	t75 = (x4885^(x4886<=(x4887<<x4888)));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x5109 = -1;
	volatile uint64_t x5110 = 16424153391227LLU;
	uint32_t x5111 = 4154301U;
	static int8_t x5112 = 11;
	int32_t t76 = 5;

	t76 = (x5109^(x5110<=(x5111<<x5112)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5158 = -3595;
	uint32_t x5159 = 109U;
	volatile int32_t t77 = -191568165;

	t77 = (x5157^(x5158<=(x5159<<x5160)));

	if (t77 != 31) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5185 = INT16_MAX;
	int8_t x5186 = INT8_MIN;
	uint64_t x5187 = 17LLU;
	uint64_t x5188 = 5LLU;
	volatile int32_t t78 = 1;

	t78 = (x5185^(x5186<=(x5187<<x5188)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5193 = INT32_MIN;
	int8_t x5194 = INT8_MIN;
	static int8_t x5196 = 0;
	static volatile int32_t t79 = 22268;

	t79 = (x5193^(x5194<=(x5195<<x5196)));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x5209 = 90;
	volatile int8_t x5211 = 1;
	int8_t x5212 = 1;
	int32_t t80 = -297838;

	t80 = (x5209^(x5210<=(x5211<<x5212)));

	if (t80 != 91) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5361 = 18787U;
	volatile uint8_t x5362 = 6U;
	volatile int16_t x5363 = INT16_MAX;
	static uint8_t x5364 = 13U;
	int32_t t81 = 226;

	t81 = (x5361^(x5362<=(x5363<<x5364)));

	if (t81 != 18786) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5453 = INT32_MIN;
	int16_t x5454 = INT16_MIN;
	uint32_t x5455 = 166955U;
	uint8_t x5456 = 10U;
	volatile int32_t t82 = INT32_MIN;

	t82 = (x5453^(x5454<=(x5455<<x5456)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x5477 = UINT16_MAX;
	static int64_t x5478 = INT64_MAX;
	int64_t x5479 = 23047911043586LL;

	t83 = (x5477^(x5478<=(x5479<<x5480)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5529 = 175U;
	volatile int16_t x5530 = -1;
	int64_t x5531 = INT64_MAX;
	uint16_t x5532 = 0U;
	static volatile int32_t t84 = -2180633;

	t84 = (x5529^(x5530<=(x5531<<x5532)));

	if (t84 != 174) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5642 = 56621U;
	static volatile int32_t t85 = 15982;

	t85 = (x5641^(x5642<=(x5643<<x5644)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5809 = -2;
	volatile uint8_t x5810 = 7U;
	static uint16_t x5811 = 50U;
	volatile int32_t t86 = 6524299;

	t86 = (x5809^(x5810<=(x5811<<x5812)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x5837 = 62923LLU;
	int64_t x5838 = INT64_MIN;
	uint32_t x5839 = 0U;
	int32_t x5840 = 3;

	t87 = (x5837^(x5838<=(x5839<<x5840)));

	if (t87 != 62922LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x5878 = INT16_MIN;
	uint8_t x5880 = 0U;
	int32_t t88 = 459523541;

	t88 = (x5877^(x5878<=(x5879<<x5880)));

	if (t88 != 2147483646) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x6021 = UINT8_MAX;
	int16_t x6022 = -1;
	volatile int16_t x6023 = INT16_MAX;
	int32_t x6024 = 4;
	int32_t t89 = -1943;

	t89 = (x6021^(x6022<=(x6023<<x6024)));

	if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x6270 = 88U;
	uint8_t x6271 = UINT8_MAX;
	int64_t x6272 = 9LL;
	static volatile uint64_t t90 = 1238574485603491798LLU;

	t90 = (x6269^(x6270<=(x6271<<x6272)));

	if (t90 != 109LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6277 = INT8_MIN;
	int32_t x6278 = INT32_MIN;
	volatile int8_t x6279 = 1;
	uint8_t x6280 = 28U;
	int32_t t91 = -790661;

	t91 = (x6277^(x6278<=(x6279<<x6280)));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6289 = UINT64_MAX;
	int64_t x6290 = -1LL;
	volatile uint8_t x6292 = 12U;
	static volatile uint64_t t92 = 15588373949133698LLU;

	t92 = (x6289^(x6290<=(x6291<<x6292)));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x6435 = 1759U;
	uint16_t x6436 = 3U;
	static volatile int32_t t93 = 5771;

	t93 = (x6433^(x6434<=(x6435<<x6436)));

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6501 = INT8_MIN;
	int64_t x6502 = 32871260423LL;

	t94 = (x6501^(x6502<=(x6503<<x6504)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6570 = -1;
	uint64_t x6571 = UINT64_MAX;
	uint8_t x6572 = 34U;
	int32_t t95 = 376632;

	t95 = (x6569^(x6570<=(x6571<<x6572)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6725 = -1LL;
	uint16_t x6727 = 0U;
	uint16_t x6728 = 6U;
	volatile int64_t t96 = 126225306608891LL;

	t96 = (x6725^(x6726<=(x6727<<x6728)));

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x6793 = INT64_MIN;
	static int16_t x6794 = 39;
	static volatile uint8_t x6795 = 1U;
	uint8_t x6796 = 6U;
	int64_t t97 = 3659833146686670700LL;

	t97 = (x6793^(x6794<=(x6795<<x6796)));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6829 = -1;
	int8_t x6830 = INT8_MIN;
	uint16_t x6832 = 3U;
	int32_t t98 = -577050;

	t98 = (x6829^(x6830<=(x6831<<x6832)));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6853 = UINT8_MAX;
	uint64_t x6854 = UINT64_MAX;
	static int8_t x6855 = INT8_MAX;

	t99 = (x6853^(x6854<=(x6855<<x6856)));

	if (t99 != 255) { NG(); } else { ; }
	
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

