#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x18 = 8;
int32_t t1 = 633;
int8_t x62 = -1;
volatile int64_t t4 = 92513543073982086LL;
int16_t x291 = 15980;
static uint8_t x322 = 3U;
static uint16_t x325 = 2667U;
static volatile int32_t t7 = 249776491;
int8_t x443 = -1;
uint16_t x533 = 19U;
int8_t x534 = INT8_MIN;
int32_t x705 = 351383;
uint64_t x706 = 1500746LLU;
uint8_t x780 = 13U;
volatile uint8_t x953 = 3U;
int8_t x989 = 1;
uint8_t x1024 = 0U;
int64_t x1062 = -8168838853074LL;
volatile int8_t x1063 = 9;
uint32_t t17 = 7U;
uint8_t x1089 = 104U;
uint8_t x1102 = 1U;
static volatile int32_t x1104 = 0;
int32_t t19 = INT32_MAX;
uint16_t x1265 = 474U;
uint32_t x1574 = 797578792U;
uint8_t x1576 = 2U;
volatile uint64_t t30 = 9356922287955774LLU;
static uint32_t x1610 = 21770U;
static volatile int32_t x1612 = 0;
static volatile uint32_t t31 = 56933U;
volatile int64_t x1733 = 75380LL;
int32_t x1762 = INT32_MAX;
int16_t x1985 = INT16_MAX;
int32_t x1986 = INT32_MIN;
int16_t x1991 = -1;
volatile uint64_t x2017 = UINT64_MAX;
static uint64_t t37 = UINT64_MAX;
int32_t x2138 = INT32_MAX;
uint8_t x2140 = 1U;
uint32_t x2146 = UINT32_MAX;
volatile int8_t x2147 = INT8_MAX;
int32_t t39 = 3976;
volatile uint8_t x2156 = 1U;
static int16_t x2179 = 28;
static int32_t x2315 = INT32_MIN;
int8_t x2389 = 1;
uint8_t x2392 = 3U;
uint64_t t45 = 370373900526LLU;
static volatile int16_t x2567 = INT16_MIN;
volatile uint32_t t46 = 2027809681U;
static uint64_t x2785 = UINT64_MAX;
int32_t x2788 = 1;
volatile int8_t x2796 = 19;
int32_t t49 = 199;
volatile uint8_t x2809 = 48U;
volatile uint32_t x2967 = 702U;
static int8_t x2968 = 1;
volatile int64_t t53 = -82019740446951LL;
uint32_t t54 = 276U;
uint8_t x3022 = 9U;
uint16_t x3024 = 5U;
int16_t x3117 = 1;
volatile uint32_t x3121 = 251804823U;
uint32_t x3122 = 1415U;
uint64_t t58 = 13LLU;
static int8_t x3232 = 0;
int32_t t59 = -238687341;
uint8_t x3273 = 3U;
uint32_t x3275 = UINT32_MAX;
static int64_t x3283 = -340560152422053LL;
static volatile int8_t x3284 = 3;
uint8_t x3294 = 0U;
uint64_t t64 = 6309510239693LLU;
uint16_t x3438 = 0U;
int64_t x3501 = 1735754LL;
uint8_t x3504 = 2U;
volatile int64_t t68 = -5500800384267571LL;
uint8_t x3580 = 28U;
uint32_t t70 = 2236U;
static int16_t x3614 = -152;
int8_t x3634 = INT8_MAX;
volatile uint32_t t73 = UINT32_MAX;
uint64_t x3681 = 18233749831125513LLU;
uint16_t x3683 = UINT16_MAX;
volatile uint64_t t74 = 242626158036876071LLU;
volatile uint8_t x3714 = UINT8_MAX;
volatile uint8_t x3716 = 0U;
uint32_t x3865 = UINT32_MAX;
uint32_t x3875 = 48U;
int8_t x3876 = 1;
static volatile int32_t x3898 = -1;
uint8_t x3970 = 5U;
uint8_t x3972 = 1U;
int16_t x4197 = 1;
uint8_t x4200 = 12U;
volatile int32_t t85 = 81860591;
int8_t x4269 = 3;
uint16_t x4308 = 4U;
static volatile int32_t t87 = -28;
volatile int64_t x4485 = 4525159114620569LL;
int32_t t90 = -39588;
int8_t x4917 = INT8_MAX;
volatile uint16_t x4973 = UINT16_MAX;
int8_t x4975 = -1;
volatile uint32_t x5213 = 208494U;
int16_t x5262 = -1;
int32_t x5345 = INT32_MAX;
volatile int32_t t99 = 1;


void f0(void) {
	uint64_t x17 = 144536LLU;
	uint8_t x19 = 3U;
	volatile uint8_t x20 = 1U;
	uint64_t t0 = 73245983LLU;

	t0 = ((x17>>(x18<x19))<<x20);

	if (t0 != 289072LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MIN;
	int16_t x35 = -4;
	int8_t x36 = 0;

	t1 = ((x33>>(x34<x35))<<x36);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x61 = INT8_MAX;
	int8_t x63 = INT8_MIN;
	volatile uint8_t x64 = 2U;
	static volatile int32_t t2 = -71;

	t2 = ((x61>>(x62<x63))<<x64);

	if (t2 != 508) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = -1;
	uint8_t x259 = 30U;
	uint8_t x260 = 2U;
	volatile int32_t t3 = 38984443;

	t3 = ((x257>>(x258<x259))<<x260);

	if (t3 != 131068) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x273 = 1797153847355LL;
	uint16_t x274 = 7U;
	int8_t x275 = INT8_MIN;
	static int32_t x276 = 3;

	t4 = ((x273>>(x274<x275))<<x276);

	if (t4 != 14377230778840LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x289 = INT16_MAX;
	static volatile int16_t x290 = 2779;
	int16_t x292 = 0;
	int32_t t5 = -1;

	t5 = ((x289>>(x290<x291))<<x292);

	if (t5 != 16383) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x321 = 2;
	int8_t x323 = -9;
	static uint16_t x324 = 3U;
	int32_t t6 = -9;

	t6 = ((x321>>(x322<x323))<<x324);

	if (t6 != 16) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x326 = -1897;
	int16_t x327 = INT16_MIN;
	int8_t x328 = 1;

	t7 = ((x325>>(x326<x327))<<x328);

	if (t7 != 5334) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x441 = 8721U;
	volatile uint8_t x442 = UINT8_MAX;
	volatile uint8_t x444 = 7U;
	uint32_t t8 = 952U;

	t8 = ((x441>>(x442<x443))<<x444);

	if (t8 != 1116288U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x535 = 5721U;
	static uint16_t x536 = 8U;
	int32_t t9 = 59;

	t9 = ((x533>>(x534<x535))<<x536);

	if (t9 != 2304) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x707 = INT16_MAX;
	static int8_t x708 = 0;
	volatile int32_t t10 = 95900;

	t10 = ((x705>>(x706<x707))<<x708);

	if (t10 != 351383) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x761 = 4059U;
	uint32_t x762 = UINT32_MAX;
	int8_t x763 = 19;
	uint8_t x764 = 1U;
	volatile uint32_t t11 = 35118U;

	t11 = ((x761>>(x762<x763))<<x764);

	if (t11 != 8118U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x777 = 47U;
	uint64_t x778 = UINT64_MAX;
	volatile int32_t x779 = INT32_MAX;
	static volatile int32_t t12 = -6;

	t12 = ((x777>>(x778<x779))<<x780);

	if (t12 != 385024) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x954 = 14U;
	uint64_t x955 = UINT64_MAX;
	static uint8_t x956 = 9U;
	int32_t t13 = 3318;

	t13 = ((x953>>(x954<x955))<<x956);

	if (t13 != 512) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x990 = -1LL;
	int32_t x991 = INT32_MAX;
	int8_t x992 = 0;
	static int32_t t14 = -42831144;

	t14 = ((x989>>(x990<x991))<<x992);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1021 = INT8_MAX;
	uint8_t x1022 = 7U;
	int16_t x1023 = -1;
	volatile int32_t t15 = 1030607986;

	t15 = ((x1021>>(x1022<x1023))<<x1024);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1061 = 7874467200598842895LLU;
	uint8_t x1064 = 60U;
	uint64_t t16 = 16279718716217LLU;

	t16 = ((x1061>>(x1062<x1063))<<x1064);

	if (t16 != 8070450532247928832LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1077 = UINT32_MAX;
	int32_t x1078 = INT32_MIN;
	static uint16_t x1079 = UINT16_MAX;
	static int8_t x1080 = 0;

	t17 = ((x1077>>(x1078<x1079))<<x1080);

	if (t17 != 2147483647U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x1090 = 19U;
	int64_t x1091 = -1LL;
	uint16_t x1092 = 1U;
	volatile int32_t t18 = 8;

	t18 = ((x1089>>(x1090<x1091))<<x1092);

	if (t18 != 208) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1101 = INT32_MAX;
	static int16_t x1103 = INT16_MIN;

	t19 = ((x1101>>(x1102<x1103))<<x1104);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1125 = 103;
	int64_t x1126 = INT64_MIN;
	uint8_t x1127 = 3U;
	int8_t x1128 = 6;
	static int32_t t20 = -145;

	t20 = ((x1125>>(x1126<x1127))<<x1128);

	if (t20 != 3264) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1157 = 0U;
	static int32_t x1158 = INT32_MIN;
	uint8_t x1159 = UINT8_MAX;
	uint16_t x1160 = 20U;
	volatile int32_t t21 = 7;

	t21 = ((x1157>>(x1158<x1159))<<x1160);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1173 = INT8_MAX;
	volatile uint8_t x1174 = 1U;
	int8_t x1175 = -1;
	uint8_t x1176 = 1U;
	volatile int32_t t22 = -1888699;

	t22 = ((x1173>>(x1174<x1175))<<x1176);

	if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1189 = 3U;
	static uint16_t x1190 = 45U;
	int8_t x1191 = INT8_MIN;
	uint8_t x1192 = 3U;
	int32_t t23 = 2131334;

	t23 = ((x1189>>(x1190<x1191))<<x1192);

	if (t23 != 24) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x1233 = UINT8_MAX;
	int8_t x1234 = INT8_MAX;
	uint64_t x1235 = UINT64_MAX;
	int16_t x1236 = 1;
	volatile int32_t t24 = -49612147;

	t24 = ((x1233>>(x1234<x1235))<<x1236);

	if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1266 = 4U;
	volatile uint8_t x1267 = 88U;
	uint32_t x1268 = 3U;
	volatile int32_t t25 = 353815;

	t25 = ((x1265>>(x1266<x1267))<<x1268);

	if (t25 != 1896) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1281 = 48U;
	int16_t x1282 = -6;
	volatile uint32_t x1283 = 3U;
	uint64_t x1284 = 1LLU;
	uint32_t t26 = 109144U;

	t26 = ((x1281>>(x1282<x1283))<<x1284);

	if (t26 != 96U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1317 = 11LLU;
	int32_t x1318 = 51849;
	uint8_t x1319 = 0U;
	volatile int16_t x1320 = 20;
	uint64_t t27 = 1LLU;

	t27 = ((x1317>>(x1318<x1319))<<x1320);

	if (t27 != 11534336LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1433 = 32U;
	int64_t x1434 = INT64_MAX;
	int16_t x1435 = -1;
	uint32_t x1436 = 6U;
	int32_t t28 = -340317;

	t28 = ((x1433>>(x1434<x1435))<<x1436);

	if (t28 != 2048) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1525 = 32;
	uint8_t x1526 = 4U;
	int8_t x1527 = 4;
	int8_t x1528 = 5;
	volatile int32_t t29 = 821971297;

	t29 = ((x1525>>(x1526<x1527))<<x1528);

	if (t29 != 1024) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1573 = 4378897148345716134LLU;
	int16_t x1575 = INT16_MIN;

	t30 = ((x1573>>(x1574<x1575))<<x1576);

	if (t30 != 8757794296691432268LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1609 = 0U;
	volatile uint8_t x1611 = 0U;

	t31 = ((x1609>>(x1610<x1611))<<x1612);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1705 = 22;
	volatile uint16_t x1706 = 1U;
	static int16_t x1707 = INT16_MAX;
	static uint32_t x1708 = 3U;
	int32_t t32 = 46600569;

	t32 = ((x1705>>(x1706<x1707))<<x1708);

	if (t32 != 88) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1734 = INT16_MAX;
	int8_t x1735 = INT8_MIN;
	uint32_t x1736 = 30U;
	int64_t t33 = -4LL;

	t33 = ((x1733>>(x1734<x1735))<<x1736);

	if (t33 != 80938658693120LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1761 = 2373134724LL;
	uint32_t x1763 = UINT32_MAX;
	int32_t x1764 = 0;
	int64_t t34 = -53398390287412LL;

	t34 = ((x1761>>(x1762<x1763))<<x1764);

	if (t34 != 1186567362LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1987 = -1;
	uint8_t x1988 = 6U;
	volatile int32_t t35 = 3099;

	t35 = ((x1985>>(x1986<x1987))<<x1988);

	if (t35 != 1048512) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1989 = 781379221LLU;
	int16_t x1990 = -1;
	static volatile int8_t x1992 = 12;
	volatile uint64_t t36 = 992LLU;

	t36 = ((x1989>>(x1990<x1991))<<x1992);

	if (t36 != 3200529289216LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x2018 = INT64_MIN;
	int64_t x2019 = INT64_MIN;
	uint16_t x2020 = 0U;

	t37 = ((x2017>>(x2018<x2019))<<x2020);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x2137 = 4139124U;
	int16_t x2139 = -1;
	volatile uint32_t t38 = 146918481U;

	t38 = ((x2137>>(x2138<x2139))<<x2140);

	if (t38 != 8278248U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2145 = INT16_MAX;
	volatile int8_t x2148 = 1;

	t39 = ((x2145>>(x2146<x2147))<<x2148);

	if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2153 = 63287389860738359LLU;
	int64_t x2154 = 28370322580394LL;
	int16_t x2155 = INT16_MIN;
	static uint64_t t40 = 3738630288120LLU;

	t40 = ((x2153>>(x2154<x2155))<<x2156);

	if (t40 != 126574779721476718LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2177 = 1907U;
	int8_t x2178 = INT8_MIN;
	static uint8_t x2180 = 1U;
	uint32_t t41 = 278U;

	t41 = ((x2177>>(x2178<x2179))<<x2180);

	if (t41 != 1906U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2181 = 1U;
	int16_t x2182 = INT16_MAX;
	uint16_t x2183 = 3741U;
	uint8_t x2184 = 0U;
	volatile int32_t t42 = 83331;

	t42 = ((x2181>>(x2182<x2183))<<x2184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x2313 = 961383LL;
	uint32_t x2314 = UINT32_MAX;
	int8_t x2316 = 7;
	static int64_t t43 = -1862329701LL;

	t43 = ((x2313>>(x2314<x2315))<<x2316);

	if (t43 != 123057024LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2390 = 1408LL;
	int8_t x2391 = -1;
	volatile int32_t t44 = 65836;

	t44 = ((x2389>>(x2390<x2391))<<x2392);

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2425 = 25566LLU;
	int32_t x2426 = INT32_MIN;
	volatile int16_t x2427 = -1;
	volatile int8_t x2428 = 1;

	t45 = ((x2425>>(x2426<x2427))<<x2428);

	if (t45 != 25566LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2565 = UINT32_MAX;
	int32_t x2566 = INT32_MIN;
	volatile int8_t x2568 = 1;

	t46 = ((x2565>>(x2566<x2567))<<x2568);

	if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2641 = 0;
	static int32_t x2642 = -1708300;
	static volatile uint32_t x2643 = UINT32_MAX;
	int8_t x2644 = 9;
	int32_t t47 = 327173948;

	t47 = ((x2641>>(x2642<x2643))<<x2644);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2786 = INT16_MIN;
	int8_t x2787 = -1;
	static uint64_t t48 = 27491274548325361LLU;

	t48 = ((x2785>>(x2786<x2787))<<x2788);

	if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2793 = 359U;
	uint32_t x2794 = 742U;
	volatile uint16_t x2795 = UINT16_MAX;

	t49 = ((x2793>>(x2794<x2795))<<x2796);

	if (t49 != 93847552) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2810 = 0;
	int32_t x2811 = INT32_MAX;
	uint8_t x2812 = 3U;
	int32_t t50 = -4494;

	t50 = ((x2809>>(x2810<x2811))<<x2812);

	if (t50 != 192) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2833 = UINT16_MAX;
	static volatile int8_t x2834 = INT8_MAX;
	static volatile uint32_t x2835 = 5U;
	volatile uint8_t x2836 = 1U;
	volatile int32_t t51 = -1836;

	t51 = ((x2833>>(x2834<x2835))<<x2836);

	if (t51 != 131070) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2841 = 1;
	int8_t x2842 = INT8_MAX;
	uint64_t x2843 = 4704LLU;
	static uint64_t x2844 = 0LLU;
	volatile int32_t t52 = -2;

	t52 = ((x2841>>(x2842<x2843))<<x2844);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2965 = 0LL;
	uint32_t x2966 = 1380392U;

	t53 = ((x2965>>(x2966<x2967))<<x2968);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2985 = 53002707U;
	uint64_t x2986 = 29672619380316LLU;
	static uint32_t x2987 = 2465U;
	int8_t x2988 = 1;

	t54 = ((x2985>>(x2986<x2987))<<x2988);

	if (t54 != 106005414U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x3021 = 269U;
	static uint32_t x3023 = UINT32_MAX;
	volatile uint32_t t55 = 2949U;

	t55 = ((x3021>>(x3022<x3023))<<x3024);

	if (t55 != 4288U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3118 = UINT32_MAX;
	int8_t x3119 = -6;
	uint8_t x3120 = 5U;
	volatile int32_t t56 = -17519560;

	t56 = ((x3117>>(x3118<x3119))<<x3120);

	if (t56 != 32) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3123 = INT32_MIN;
	static int16_t x3124 = 6;
	static uint32_t t57 = 0U;

	t57 = ((x3121>>(x3122<x3123))<<x3124);

	if (t57 != 3762787008U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3149 = 118684LLU;
	uint16_t x3150 = UINT16_MAX;
	int16_t x3151 = INT16_MIN;
	int8_t x3152 = 20;

	t58 = ((x3149>>(x3150<x3151))<<x3152);

	if (t58 != 124449193984LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3229 = 3U;
	int64_t x3230 = INT64_MIN;
	uint64_t x3231 = 2915442257286400LLU;

	t59 = ((x3229>>(x3230<x3231))<<x3232);

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3253 = 48;
	volatile int64_t x3254 = -1LL;
	static int32_t x3255 = 0;
	static uint32_t x3256 = 1U;
	volatile int32_t t60 = 0;

	t60 = ((x3253>>(x3254<x3255))<<x3256);

	if (t60 != 48) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3274 = INT16_MIN;
	int32_t x3276 = 15;
	volatile int32_t t61 = 0;

	t61 = ((x3273>>(x3274<x3275))<<x3276);

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3281 = 26351U;
	int8_t x3282 = INT8_MIN;
	volatile uint32_t t62 = 1708U;

	t62 = ((x3281>>(x3282<x3283))<<x3284);

	if (t62 != 210808U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3293 = 11242332779000LLU;
	int16_t x3295 = INT16_MIN;
	uint8_t x3296 = 53U;
	uint64_t t63 = 708LLU;

	t63 = ((x3293>>(x3294<x3295))<<x3296);

	if (t63 != 4539628424389459968LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x3345 = 2332042007LLU;
	static uint32_t x3346 = UINT32_MAX;
	volatile uint16_t x3347 = 1U;
	static uint16_t x3348 = 30U;

	t64 = ((x3345>>(x3346<x3347))<<x3348);

	if (t64 != 2504011038240800768LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x3437 = UINT8_MAX;
	int32_t x3439 = INT32_MAX;
	int8_t x3440 = 1;
	volatile int32_t t65 = -1;

	t65 = ((x3437>>(x3438<x3439))<<x3440);

	if (t65 != 254) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3445 = 850U;
	static int32_t x3446 = INT32_MAX;
	static uint8_t x3447 = UINT8_MAX;
	int16_t x3448 = 0;
	volatile int32_t t66 = -1;

	t66 = ((x3445>>(x3446<x3447))<<x3448);

	if (t66 != 850) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3457 = 558U;
	static int64_t x3458 = -1LL;
	uint8_t x3459 = 0U;
	uint8_t x3460 = 2U;
	int32_t t67 = 12;

	t67 = ((x3457>>(x3458<x3459))<<x3460);

	if (t67 != 1116) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3502 = 10092U;
	uint64_t x3503 = 51LLU;

	t68 = ((x3501>>(x3502<x3503))<<x3504);

	if (t68 != 6943016LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3537 = 298728953405179257LL;
	uint16_t x3538 = UINT16_MAX;
	int8_t x3539 = INT8_MAX;
	static int8_t x3540 = 1;
	volatile int64_t t69 = -89123224100LL;

	t69 = ((x3537>>(x3538<x3539))<<x3540);

	if (t69 != 597457906810358514LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x3577 = 29314605U;
	int32_t x3578 = INT32_MAX;
	uint8_t x3579 = 6U;

	t70 = ((x3577>>(x3578<x3579))<<x3580);

	if (t70 != 3489660928U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3613 = INT16_MAX;
	int16_t x3615 = INT16_MIN;
	uint16_t x3616 = 14U;
	volatile int32_t t71 = 107108;

	t71 = ((x3613>>(x3614<x3615))<<x3616);

	if (t71 != 536854528) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x3625 = INT64_MAX;
	volatile uint64_t x3626 = UINT64_MAX;
	int32_t x3627 = INT32_MIN;
	uint32_t x3628 = 0U;
	static volatile int64_t t72 = INT64_MAX;

	t72 = ((x3625>>(x3626<x3627))<<x3628);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x3633 = UINT32_MAX;
	static int8_t x3635 = -1;
	int8_t x3636 = 0;

	t73 = ((x3633>>(x3634<x3635))<<x3636);

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3682 = 505283;
	volatile uint8_t x3684 = 1U;

	t74 = ((x3681>>(x3682<x3683))<<x3684);

	if (t74 != 36467499662251026LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3701 = UINT32_MAX;
	uint64_t x3702 = 4831LLU;
	int8_t x3703 = 6;
	uint8_t x3704 = 2U;
	volatile uint32_t t75 = 4080328U;

	t75 = ((x3701>>(x3702<x3703))<<x3704);

	if (t75 != 4294967292U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3709 = 16U;
	static uint8_t x3710 = 106U;
	static volatile int32_t x3711 = INT32_MAX;
	int8_t x3712 = 0;
	volatile int32_t t76 = 1877;

	t76 = ((x3709>>(x3710<x3711))<<x3712);

	if (t76 != 8) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x3713 = INT8_MAX;
	int16_t x3715 = INT16_MIN;
	volatile int32_t t77 = -58106074;

	t77 = ((x3713>>(x3714<x3715))<<x3716);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3769 = 6;
	static volatile int32_t x3770 = -60907;
	uint8_t x3771 = UINT8_MAX;
	volatile uint8_t x3772 = 0U;
	volatile int32_t t78 = 7675;

	t78 = ((x3769>>(x3770<x3771))<<x3772);

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3801 = INT32_MAX;
	volatile int16_t x3802 = INT16_MIN;
	static volatile int64_t x3803 = 3981240532596018LL;
	volatile uint16_t x3804 = 1U;
	static int32_t t79 = -1;

	t79 = ((x3801>>(x3802<x3803))<<x3804);

	if (t79 != 2147483646) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3813 = 26U;
	volatile int16_t x3814 = -1;
	int32_t x3815 = -56401913;
	int8_t x3816 = 0;
	static volatile int32_t t80 = 141848783;

	t80 = ((x3813>>(x3814<x3815))<<x3816);

	if (t80 != 26) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3866 = INT64_MIN;
	uint64_t x3867 = 16413965553216LLU;
	int8_t x3868 = 0;
	uint32_t t81 = UINT32_MAX;

	t81 = ((x3865>>(x3866<x3867))<<x3868);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3873 = 928U;
	int64_t x3874 = -1LL;
	volatile int32_t t82 = 385167757;

	t82 = ((x3873>>(x3874<x3875))<<x3876);

	if (t82 != 928) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x3897 = 369240LLU;
	static int16_t x3899 = INT16_MAX;
	uint16_t x3900 = 30U;
	static volatile uint64_t t83 = 64689148257719LLU;

	t83 = ((x3897>>(x3898<x3899))<<x3900);

	if (t83 != 198234215546880LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3969 = 25U;
	int8_t x3971 = -26;
	int32_t t84 = 87883;

	t84 = ((x3969>>(x3970<x3971))<<x3972);

	if (t84 != 50) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4198 = -2;
	uint32_t x4199 = 73318913U;

	t85 = ((x4197>>(x4198<x4199))<<x4200);

	if (t85 != 4096) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4270 = -66LL;
	uint64_t x4271 = 2559LLU;
	int8_t x4272 = 0;
	int32_t t86 = 1024186;

	t86 = ((x4269>>(x4270<x4271))<<x4272);

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4305 = INT16_MAX;
	static volatile uint16_t x4306 = 1U;
	static uint8_t x4307 = 6U;

	t87 = ((x4305>>(x4306<x4307))<<x4308);

	if (t87 != 262128) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4425 = UINT8_MAX;
	uint8_t x4426 = 2U;
	int16_t x4427 = 0;
	uint8_t x4428 = 7U;
	volatile int32_t t88 = 664465;

	t88 = ((x4425>>(x4426<x4427))<<x4428);

	if (t88 != 32640) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4486 = INT8_MIN;
	uint8_t x4487 = 14U;
	volatile int16_t x4488 = 0;
	int64_t t89 = -30747488808LL;

	t89 = ((x4485>>(x4486<x4487))<<x4488);

	if (t89 != 2262579557310284LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4705 = 3;
	uint16_t x4706 = 2U;
	int8_t x4707 = INT8_MIN;
	volatile uint16_t x4708 = 12U;

	t90 = ((x4705>>(x4706<x4707))<<x4708);

	if (t90 != 12288) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4837 = UINT64_MAX;
	int32_t x4838 = INT32_MIN;
	volatile int8_t x4839 = -1;
	volatile uint16_t x4840 = 2U;
	volatile uint64_t t91 = 35105718855177LLU;

	t91 = ((x4837>>(x4838<x4839))<<x4840);

	if (t91 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4913 = 0LL;
	int32_t x4914 = INT32_MIN;
	int32_t x4915 = INT32_MIN;
	static int16_t x4916 = 17;
	volatile int64_t t92 = 3465LL;

	t92 = ((x4913>>(x4914<x4915))<<x4916);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4918 = 27973462LL;
	int8_t x4919 = -1;
	volatile uint16_t x4920 = 0U;
	int32_t t93 = 4255135;

	t93 = ((x4917>>(x4918<x4919))<<x4920);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4974 = INT8_MAX;
	uint8_t x4976 = 1U;
	static int32_t t94 = -432821971;

	t94 = ((x4973>>(x4974<x4975))<<x4976);

	if (t94 != 131070) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5057 = UINT8_MAX;
	int8_t x5058 = INT8_MAX;
	volatile int32_t x5059 = -8;
	volatile uint8_t x5060 = 1U;
	volatile int32_t t95 = 356378243;

	t95 = ((x5057>>(x5058<x5059))<<x5060);

	if (t95 != 510) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5201 = 682904931114961LL;
	volatile int32_t x5202 = INT32_MIN;
	volatile int32_t x5203 = -1;
	uint16_t x5204 = 1U;
	int64_t t96 = -9935864LL;

	t96 = ((x5201>>(x5202<x5203))<<x5204);

	if (t96 != 682904931114960LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5214 = 533;
	uint8_t x5215 = 5U;
	static volatile uint8_t x5216 = 1U;
	uint32_t t97 = 1U;

	t97 = ((x5213>>(x5214<x5215))<<x5216);

	if (t97 != 416988U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5261 = 32642024;
	static int64_t x5263 = -7881390258666771LL;
	uint8_t x5264 = 4U;
	static int32_t t98 = -49015;

	t98 = ((x5261>>(x5262<x5263))<<x5264);

	if (t98 != 522272384) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x5346 = -40497818119082693LL;
	int16_t x5347 = -3;
	int8_t x5348 = 1;

	t99 = ((x5345>>(x5346<x5347))<<x5348);

	if (t99 != 2147483646) { NG(); } else { ; }
	
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

